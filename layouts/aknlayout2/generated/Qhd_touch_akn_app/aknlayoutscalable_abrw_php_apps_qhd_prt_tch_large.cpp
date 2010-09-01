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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00077cf0 };

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
0x50a0,	// (0x0007cd90) Screen

0x50ac,	// (0x0007cd9c) application_window

0x5108,	// (0x0007cdf8) area_bottom_pane_ParamLimits

0x5108,	// (0x0007cdf8) area_bottom_pane

0x5160,	// (0x0007ce50) area_top_pane_ParamLimits

0x5160,	// (0x0007ce50) area_top_pane

0x51c4,	// (0x0007ceb4) call_video_uplink_pane_ParamLimits

0x51c4,	// (0x0007ceb4) call_video_uplink_pane

0x5203,	// (0x0007cef3) main_pane_ParamLimits

0x5203,	// (0x0007cef3) main_pane

0xe44a,	// (0x0008613a) context_pane

0x87fa,	// (0x000804ea) navi_pane

0x8820,	// (0x00080510) popup_cale_events_window_ParamLimits

0x8820,	// (0x00080510) popup_cale_events_window

0xe45d,	// (0x0008614d) popup_mup_playback_window

0x8838,	// (0x00080528) signal_pane

0x08fb,	// (0x000785eb) main_browser_pane

0x0b19,	// (0x00078809) main_burst_pane

0x866c,	// (0x0008035c) main_calc_pane

0xe430,	// (0x00086120) main_cale_day_pane

0x5813,	// (0x0007d503) main_cale_month_pane

0xe430,	// (0x00086120) main_cale_week_pane

0x0b19,	// (0x00078809) main_call_pane

0xdc8e,	// (0x0008597e) main_call_poc_pane

0x0b19,	// (0x00078809) main_camera_pane

0x0b19,	// (0x00078809) main_chi_dic_pane

0x1395,	// (0x00079085) main_clock_pane

0xdc8e,	// (0x0008597e) main_fmradio_pane

0x0b19,	// (0x00078809) main_graph_messa_pane

0xdc8e,	// (0x0008597e) main_help_pane

0x08fb,	// (0x000785eb) main_im_pane

0xdee9,	// (0x00085bd9) main_image_pane_ParamLimits

0xdee9,	// (0x00085bd9) main_image_pane

0xdc8e,	// (0x0008597e) main_location2_pane

0x0b19,	// (0x00078809) main_location_pane

0xdee9,	// (0x00085bd9) main_messa_pane

0xdc8e,	// (0x0008597e) main_mp2_pane

0x0b19,	// (0x00078809) main_mp_pane

0xdc8e,	// (0x0008597e) main_msg_pane

0xdc8e,	// (0x0008597e) main_mup_eq_pane

0xdc8e,	// (0x0008597e) main_mup_pane

0x08fb,	// (0x000785eb) main_notes_pane

0xdc8e,	// (0x0008597e) main_pec_pane

0xdc8e,	// (0x0008597e) main_phob_pane

0xdc8e,	// (0x0008597e) main_pinb_pane

0xdc8e,	// (0x0008597e) main_postcard_pane

0xdc8e,	// (0x0008597e) main_qdial_pane

0x0b19,	// (0x00078809) main_skin_pane

0xdc8e,	// (0x0008597e) main_smil2_pane

0x0b19,	// (0x00078809) main_smil_pane

0x0b19,	// (0x00078809) main_video_pane

0x0b19,	// (0x00078809) main_video_tele_pane

0xdee9,	// (0x00085bd9) main_viewer_pane_ParamLimits

0xdee9,	// (0x00085bd9) main_viewer_pane

0x0b19,	// (0x00078809) main_vorec_pane

0x86c4,	// (0x000803b4) popup_blid_sat_info_window_ParamLimits

0x86c4,	// (0x000803b4) popup_blid_sat_info_window

0x86e4,	// (0x000803d4) popup_dyc_status_message_window_ParamLimits

0x86e4,	// (0x000803d4) popup_dyc_status_message_window

0x86f4,	// (0x000803e4) popup_grid_large_graphic_window_ParamLimits

0x86f4,	// (0x000803e4) popup_grid_large_graphic_window

0x8785,	// (0x00080475) popup_loc_request_window_ParamLimits

0x8785,	// (0x00080475) popup_loc_request_window

0x87d2,	// (0x000804c2) popup_wml_address_window_ParamLimits

0x87d2,	// (0x000804c2) popup_wml_address_window

0x8544,	// (0x00080234) call_muted_g1

0x7a95,	// (0x0007f785) popup_call_audio_conf_window_ParamLimits

0x7a95,	// (0x0007f785) popup_call_audio_conf_window

0x8554,	// (0x00080244) popup_call_audio_first_window_ParamLimits

0x8554,	// (0x00080244) popup_call_audio_first_window

0x8594,	// (0x00080284) popup_call_audio_in_window_ParamLimits

0x8594,	// (0x00080284) popup_call_audio_in_window

0x85b8,	// (0x000802a8) popup_call_audio_out_window_ParamLimits

0x85b8,	// (0x000802a8) popup_call_audio_out_window

0x85da,	// (0x000802ca) popup_call_audio_second_window_ParamLimits

0x85da,	// (0x000802ca) popup_call_audio_second_window

0x860a,	// (0x000802fa) popup_call_audio_wait_window_ParamLimits

0x860a,	// (0x000802fa) popup_call_audio_wait_window

0x862b,	// (0x0008031b) popup_number_entry_window_ParamLimits

0x862b,	// (0x0008031b) popup_number_entry_window

0xd87b,	// (0x0008556b) bg_popup_call_pane_cp05_ParamLimits

0xd87b,	// (0x0008556b) bg_popup_call_pane_cp05

0xd89b,	// (0x0008558b) popup_number_entry_window_t1

0xd8ae,	// (0x0008559e) popup_number_entry_window_t2

0xd8c0,	// (0x000855b0) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00086d75) popup_number_entry_window_t

0xd8d2,	// (0x000855c2) text_title_cp2

0xd8e5,	// (0x000855d5) bg_popup_call_pane_cp_ParamLimits

0xd8e5,	// (0x000855d5) bg_popup_call_pane_cp

0xd8f3,	// (0x000855e3) call_thumbnail_pane

0xd8fb,	// (0x000855eb) popup_call_audio_in_window_g1_ParamLimits

0xd8fb,	// (0x000855eb) popup_call_audio_in_window_g1

0xd907,	// (0x000855f7) popup_call_audio_in_window_g2_ParamLimits

0xd907,	// (0x000855f7) popup_call_audio_in_window_g2

0xd913,	// (0x00085603) popup_call_audio_in_window_g3_ParamLimits

0xd913,	// (0x00085603) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00086d7e) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00086d7e) popup_call_audio_in_window_g

0xd91f,	// (0x0008560f) popup_call_audio_in_window_t1_ParamLimits

0xd91f,	// (0x0008560f) popup_call_audio_in_window_t1

0xd93b,	// (0x0008562b) popup_call_audio_in_window_t2_ParamLimits

0xd93b,	// (0x0008562b) popup_call_audio_in_window_t2

0xd957,	// (0x00085647) popup_call_audio_in_window_t3_ParamLimits

0xd957,	// (0x00085647) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00086d85) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00086d85) popup_call_audio_in_window_t

0xd8e5,	// (0x000855d5) bg_popup_call_pane_cp01_ParamLimits

0xd8e5,	// (0x000855d5) bg_popup_call_pane_cp01

0xd8f3,	// (0x000855e3) call_thumbnail_pane_cp02

0xd96a,	// (0x0008565a) call_type_pane_cp022

0xd972,	// (0x00085662) popup_call_audio_out_window_g1_ParamLimits

0xd972,	// (0x00085662) popup_call_audio_out_window_g1

0xd984,	// (0x00085674) popup_call_audio_out_window_g2_ParamLimits

0xd984,	// (0x00085674) popup_call_audio_out_window_g2

0xd990,	// (0x00085680) popup_call_audio_out_window_g3_ParamLimits

0xd990,	// (0x00085680) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00086d8c) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00086d8c) popup_call_audio_out_window_g

0xd9a2,	// (0x00085692) popup_call_audio_out_window_t1_ParamLimits

0xd9a2,	// (0x00085692) popup_call_audio_out_window_t1

0xd9ba,	// (0x000856aa) popup_call_audio_out_window_t2_ParamLimits

0xd9ba,	// (0x000856aa) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00086d93) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00086d93) popup_call_audio_out_window_t

0xd9cf,	// (0x000856bf) bg_popup_call_pane_ParamLimits

0xd9cf,	// (0x000856bf) bg_popup_call_pane

0x541c,	// (0x0007d10c) call_thumbnail_pane_cp_ParamLimits

0x541c,	// (0x0007d10c) call_thumbnail_pane_cp

0xda53,	// (0x00085743) call_type_pane_cp01_ParamLimits

0xda53,	// (0x00085743) call_type_pane_cp01

0xda97,	// (0x00085787) popup_call_audio_first_window_g1_ParamLimits

0xda97,	// (0x00085787) popup_call_audio_first_window_g1

0xdae3,	// (0x000857d3) popup_call_audio_first_window_g2_ParamLimits

0xdae3,	// (0x000857d3) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00086d98) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00086d98) popup_call_audio_first_window_g

0xdb27,	// (0x00085817) popup_call_audio_first_window_t1_ParamLimits

0xdb27,	// (0x00085817) popup_call_audio_first_window_t1

0xdbd3,	// (0x000858c3) popup_call_audio_first_window_t4_ParamLimits

0xdbd3,	// (0x000858c3) popup_call_audio_first_window_t4

0xdc5f,	// (0x0008594f) popup_call_audio_first_window_t5_ParamLimits

0xdc5f,	// (0x0008594f) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00086d9d) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00086d9d) popup_call_audio_first_window_t

0xdc8e,	// (0x0008597e) bg_popup_call_pane_cp02

0xdc98,	// (0x00085988) call_type_pane_cp023

0xdca0,	// (0x00085990) popup_call_audio_wait_window_g1

0xdca8,	// (0x00085998) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00086da4) popup_call_audio_wait_window_g

0xdcb0,	// (0x000859a0) popup_call_audio_wait_window_t3

0xdcbe,	// (0x000859ae) bg_popup_call_pane_cp03_ParamLimits

0xdcbe,	// (0x000859ae) bg_popup_call_pane_cp03

0xdd1e,	// (0x00085a0e) call_thumbnail_pane_cp011_ParamLimits

0xdd1e,	// (0x00085a0e) call_thumbnail_pane_cp011

0xdd2a,	// (0x00085a1a) call_type_pane_cp034_ParamLimits

0xdd2a,	// (0x00085a1a) call_type_pane_cp034

0xdd66,	// (0x00085a56) popup_call_audio_second_window_g1_ParamLimits

0xdd66,	// (0x00085a56) popup_call_audio_second_window_g1

0xdda2,	// (0x00085a92) popup_call_audio_second_window_g2_ParamLimits

0xdda2,	// (0x00085a92) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00086da9) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00086da9) popup_call_audio_second_window_g

0xddde,	// (0x00085ace) popup_call_audio_second_window_t1_ParamLimits

0xddde,	// (0x00085ace) popup_call_audio_second_window_t1

0xde5f,	// (0x00085b4f) popup_call_audio_second_window_t2_ParamLimits

0xde5f,	// (0x00085b4f) popup_call_audio_second_window_t2

0xde95,	// (0x00085b85) popup_call_audio_second_window_t3_ParamLimits

0xde95,	// (0x00085b85) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00086dae) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00086dae) popup_call_audio_second_window_t

0xdc8e,	// (0x0008597e) bg_popup_call_pane_cp04

0xdecb,	// (0x00085bbb) list_conf_pane

0xded3,	// (0x00085bc3) popup_call_audio_conf_window_t1

0xdee1,	// (0x00085bd1) call_thumbnail_pane_g1

0xdee9,	// (0x00085bd9) bg_pinb_pane_ParamLimits

0xdee9,	// (0x00085bd9) bg_pinb_pane

0xdef7,	// (0x00085be7) find_pinb_pane

0xdee9,	// (0x00085bd9) listscroll_pinb_pane_ParamLimits

0xdee9,	// (0x00085bd9) listscroll_pinb_pane

0xdf01,	// (0x00085bf1) pinb_bg_pane_g1

0xdf01,	// (0x00085bf1) pinb_bg_pane_g2

0xdf01,	// (0x00085bf1) pinb_bg_pane_g3

0xdf01,	// (0x00085bf1) pinb_bg_pane_g4

0xdf01,	// (0x00085bf1) pinb_bg_pane_g5

0xdf01,	// (0x00085bf1) pinb_bg_pane_g6

0xdf01,	// (0x00085bf1) pinb_bg_pane_g7

0xdf01,	// (0x00085bf1) pinb_bg_pane_g8

0xdf01,	// (0x00085bf1) pinb_bg_pane_g9

0xdf01,	// (0x00085bf1) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00086db5) pinb_bg_pane_g

0xd871,	// (0x00085561) grid_pinb_pane

0xd871,	// (0x00085561) list_pinb_pane

0xdf0b,	// (0x00085bfb) scroll_pane_cp01_ParamLimits

0xdf0b,	// (0x00085bfb) scroll_pane_cp01

0xdf19,	// (0x00085c09) find_pinb_pane_g1_ParamLimits

0xdf19,	// (0x00085c09) find_pinb_pane_g1

0xdf31,	// (0x00085c21) find_pinb_pane_t1

0xdf43,	// (0x00085c33) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00086dcf) find_pinb_pane_t

0xdf58,	// (0x00085c48) input_focus_pane_cp01_ParamLimits

0xdf58,	// (0x00085c48) input_focus_pane_cp01

0xdf64,	// (0x00085c54) cell_pinb_pane_ParamLimits

0xdf64,	// (0x00085c54) cell_pinb_pane

0x0867,	// (0x00078557) cell_pinb_pane_g1_ParamLimits

0x0867,	// (0x00078557) cell_pinb_pane_g1

0x0875,	// (0x00078565) cell_pinb_pane_g2_ParamLimits

0x0875,	// (0x00078565) cell_pinb_pane_g2

0x0875,	// (0x00078565) cell_pinb_pane_g3_ParamLimits

0x0875,	// (0x00078565) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00086dd4) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00086dd4) cell_pinb_pane_g

0xdc8e,	// (0x0008597e) grid_highlight_pane_cp01

0xdf64,	// (0x00085c54) list_pinb_item_pane_ParamLimits

0xdf64,	// (0x00085c54) list_pinb_item_pane

0xd871,	// (0x00085561) list_highlight_pane_cp02

0x0883,	// (0x00078573) list_pinb_item_pane_g1_ParamLimits

0x0883,	// (0x00078573) list_pinb_item_pane_g1

0x0875,	// (0x00078565) list_pinb_item_pane_g2_ParamLimits

0x0875,	// (0x00078565) list_pinb_item_pane_g2

0x0867,	// (0x00078557) list_pinb_item_pane_g3_ParamLimits

0x0867,	// (0x00078557) list_pinb_item_pane_g3

0x0875,	// (0x00078565) list_pinb_item_pane_g4_ParamLimits

0x0875,	// (0x00078565) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00086ddb) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00086ddb) list_pinb_item_pane_g

0x0891,	// (0x00078581) list_pinb_item_pane_t1_ParamLimits

0x0891,	// (0x00078581) list_pinb_item_pane_t1

0x545a,	// (0x0007d14a) calc_display_pane

0x5478,	// (0x0007d168) calc_paper_pane

0x5494,	// (0x0007d184) grid_calc_pane

0xdc8e,	// (0x0008597e) bg_list_pane_cp01

0x54c0,	// (0x0007d1b0) clock_g1

0x54c8,	// (0x0007d1b8) clock_g2

0x0001,

0xf0f4,	// (0x00086de4) clock_g

0x54d2,	// (0x0007d1c2) clock_t1_ParamLimits

0x54d2,	// (0x0007d1c2) clock_t1

0x54e7,	// (0x0007d1d7) clock_t2_ParamLimits

0x54e7,	// (0x0007d1d7) clock_t2

0x54f9,	// (0x0007d1e9) clock_t3_ParamLimits

0x54f9,	// (0x0007d1e9) clock_t3

0x550b,	// (0x0007d1fb) clock_t4_ParamLimits

0x550b,	// (0x0007d1fb) clock_t4

0x551d,	// (0x0007d20d) clock_t5_ParamLimits

0x551d,	// (0x0007d20d) clock_t5

0x5532,	// (0x0007d222) clock_t6_ParamLimits

0x5532,	// (0x0007d222) clock_t6

0x5544,	// (0x0007d234) clock_t7_ParamLimits

0x5544,	// (0x0007d234) clock_t7

0x5556,	// (0x0007d246) clock_t8_ParamLimits

0x5556,	// (0x0007d246) clock_t8

0x556c,	// (0x0007d25c) clock_t9_ParamLimits

0x556c,	// (0x0007d25c) clock_t9

0x0008,

0xf0f9,	// (0x00086de9) clock_t_ParamLimits

0xf0f9,	// (0x00086de9) clock_t

0x08ad,	// (0x0007859d) popup_clock_analogue_window_cp02

0x08ad,	// (0x0007859d) popup_clock_digital_window_cp01

0xdc8e,	// (0x0008597e) listscroll_help_pane

0xdc8e,	// (0x0008597e) phob_pre_status_pane

0x08b5,	// (0x000785a5) grid_qdial_pane

0xdee9,	// (0x00085bd9) listscroll_mce_pane

0xdee9,	// (0x00085bd9) bg_notes_pane

0x08bf,	// (0x000785af) list_notes_pane

0x5582,	// (0x0007d272) scroll_pane_cp06

0x08cd,	// (0x000785bd) bg_calc_paper_pane

0x5591,	// (0x0007d281) list_calc_pane

0x08fb,	// (0x000785eb) bg_calc_display_pane

0x55ab,	// (0x0007d29b) calc_display_pane_t1

0x55c0,	// (0x0007d2b0) calc_display_pane_t2

0x55d5,	// (0x0007d2c5) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00086dfc) calc_display_pane_t

0x55e7,	// (0x0007d2d7) cell_calc_pane_ParamLimits

0x55e7,	// (0x0007d2d7) cell_calc_pane

0x0919,	// (0x00078609) bg_calc_paper_pane_g1

0x0931,	// (0x00078621) bg_calc_paper_pane_g2

0x0925,	// (0x00078615) bg_calc_paper_pane_g3

0x0949,	// (0x00078639) bg_calc_paper_pane_g4

0x093d,	// (0x0007862d) bg_calc_paper_pane_g5

0x5614,	// (0x0007d304) bg_calc_paper_pane_g6

0x5625,	// (0x0007d315) bg_calc_paper_pane_g7

0x5636,	// (0x0007d326) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00086e03) bg_calc_paper_pane_g

0x5647,	// (0x0007d337) calc_bg_paper_pane_g9

0x5658,	// (0x0007d348) list_calc_item_pane_ParamLimits

0x5658,	// (0x0007d348) list_calc_item_pane

0x0955,	// (0x00078645) list_calc_item_pane_g1

0x5684,	// (0x0007d374) list_calc_item_pane_t1_ParamLimits

0x5684,	// (0x0007d374) list_calc_item_pane_t1

0x5696,	// (0x0007d386) list_calc_item_pane_t2_ParamLimits

0x5696,	// (0x0007d386) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00086e14) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00086e14) list_calc_item_pane_t

0xdf01,	// (0x00085bf1) cell_calc_pane_g1

0x0974,	// (0x00078664) grid_highlight_pane_cp02

0x56c6,	// (0x0007d3b6) bg_calc_display_pane_g1

0x56cf,	// (0x0007d3bf) bg_calc_display_pane_g2

0x56d9,	// (0x0007d3c9) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00086e1e) bg_calc_display_pane_g

0x56e2,	// (0x0007d3d2) cell_qdial_pane_ParamLimits

0x56e2,	// (0x0007d3d2) cell_qdial_pane

0x56f6,	// (0x0007d3e6) cell_qdial_pane_g1_ParamLimits

0x56f6,	// (0x0007d3e6) cell_qdial_pane_g1

0x5703,	// (0x0007d3f3) cell_qdial_pane_g2_ParamLimits

0x5703,	// (0x0007d3f3) cell_qdial_pane_g2

0x0996,	// (0x00078686) cell_qdial_pane_g3_ParamLimits

0x0996,	// (0x00078686) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00086e25) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00086e25) cell_qdial_pane_g

0x5721,	// (0x0007d411) cell_qdial_pane_t1_ParamLimits

0x5721,	// (0x0007d411) cell_qdial_pane_t1

0x5739,	// (0x0007d429) cell_qdial_pane_t2_ParamLimits

0x5739,	// (0x0007d429) cell_qdial_pane_t2

0x574c,	// (0x0007d43c) cell_qdial_pane_t3_ParamLimits

0x574c,	// (0x0007d43c) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00086e2e) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00086e2e) cell_qdial_pane_t

0xdc8e,	// (0x0008597e) grid_highlight_pane_cp04

0x09a2,	// (0x00078692) thumbnail_qdial_pane_ParamLimits

0x09a2,	// (0x00078692) thumbnail_qdial_pane

0x09fe,	// (0x000786ee) list_help_pane

0x0a07,	// (0x000786f7) scroll_pane_cp02

0x575f,	// (0x0007d44f) help_list_pane_t1_ParamLimits

0x575f,	// (0x0007d44f) help_list_pane_t1

0x5795,	// (0x0007d485) bg_notes_pane_g2

0x579d,	// (0x0007d48d) bg_notes_pane_g3

0x57a5,	// (0x0007d495) notes_bg_pane_g1

0x57ad,	// (0x0007d49d) notes_bg_pane_g4

0x57b5,	// (0x0007d4a5) notes_bg_pane_g5

0x57bd,	// (0x0007d4ad) notes_bg_pane_g6

0x57c5,	// (0x0007d4b5) notes_bg_pane_g7

0x57cd,	// (0x0007d4bd) notes_bg_pane_g8

0x57d5,	// (0x0007d4c5) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00086e4c) notes_bg_pane_g

0x57dd,	// (0x0007d4cd) list_notes_text_pane_ParamLimits

0x57dd,	// (0x0007d4cd) list_notes_text_pane

0x0a58,	// (0x00078748) list_notes_text_pane_g1

0x5805,	// (0x0007d4f5) list_notes_text_pane_t1

0x5813,	// (0x0007d503) listscroll_cale_week_pane

0x5838,	// (0x0007d528) bg_cale_heading_pane

0x0a7b,	// (0x0007876b) bg_cale_pane_cp01

0x5858,	// (0x0007d548) cale_week_corner_pane

0x5872,	// (0x0007d562) cale_week_day_heading_pane

0x5892,	// (0x0007d582) cale_week_scroll_pane_g1

0x58ad,	// (0x0007d59d) cale_week_scroll_pane_g2

0x58c0,	// (0x0007d5b0) cale_week_scroll_pane_g3

0x58d3,	// (0x0007d5c3) cale_week_scroll_pane_g4

0x58e6,	// (0x0007d5d6) cale_week_scroll_pane_g5

0x58f9,	// (0x0007d5e9) cale_week_scroll_pane_g6

0x590c,	// (0x0007d5fc) cale_week_scroll_pane_g7

0x5921,	// (0x0007d611) cale_week_scroll_pane_g8

0x5936,	// (0x0007d626) cale_week_scroll_pane_g9

0x5949,	// (0x0007d639) cale_week_scroll_pane_g10

0x595c,	// (0x0007d64c) cale_week_scroll_pane_g11

0x596f,	// (0x0007d65f) cale_week_scroll_pane_g12

0x5986,	// (0x0007d676) cale_week_scroll_pane_g13

0x59a1,	// (0x0007d691) cale_week_scroll_pane_g14

0x59bc,	// (0x0007d6ac) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00086e5b) cale_week_scroll_pane_g

0x59ec,	// (0x0007d6dc) cale_week_time_pane

0x5a01,	// (0x0007d6f1) grid_cale_week_pane

0x0aaa,	// (0x0007879a) scroll_pane_cp08

0x5a20,	// (0x0007d710) cell_cale_week_pane_ParamLimits

0x5a20,	// (0x0007d710) cell_cale_week_pane

0x5a82,	// (0x0007d772) cale_week_day_heading_pane_t1

0x5a9d,	// (0x0007d78d) cale_week_day_heading_pane_t2

0x5ab8,	// (0x0007d7a8) cale_week_day_heading_pane_t3

0x5ad3,	// (0x0007d7c3) cale_week_day_heading_pane_t4

0x5aee,	// (0x0007d7de) cale_week_day_heading_pane_t5

0x5b09,	// (0x0007d7f9) cale_week_day_heading_pane_t6

0x5b24,	// (0x0007d814) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00086e7c) cale_week_day_heading_pane_t

0x0ac7,	// (0x000787b7) bg_cale_side_pane

0x5b3f,	// (0x0007d82f) cale_week_time_pane_t1

0x5b59,	// (0x0007d849) cale_week_time_pane_t2

0x5b73,	// (0x0007d863) cale_week_time_pane_t3

0x5b8d,	// (0x0007d87d) cale_week_time_pane_t4

0x5ba7,	// (0x0007d897) cale_week_time_pane_t5

0x5bc1,	// (0x0007d8b1) cale_week_time_pane_t6

0x5bdf,	// (0x0007d8cf) cale_week_time_pane_t7

0x5c01,	// (0x0007d8f1) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00086e8b) cale_week_time_pane_t

0x5c25,	// (0x0007d915) cell_cale_week_pane_g2

0x5c49,	// (0x0007d939) cell_cale_week_pane_g3_ParamLimits

0x5c49,	// (0x0007d939) cell_cale_week_pane_g3

0x0ad5,	// (0x000787c5) grid_highlight_pane_cp07

0x0add,	// (0x000787cd) listscroll_gms_pane

0x0ae7,	// (0x000787d7) grid_gms_pane

0x0af0,	// (0x000787e0) listscroll_gms_pane_g1

0x0af8,	// (0x000787e8) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00086e9c) listscroll_gms_pane_g

0x5c61,	// (0x0007d951) scroll_pane_cp010

0x5c6c,	// (0x0007d95c) cell_gms_pane_ParamLimits

0x5c6c,	// (0x0007d95c) cell_gms_pane

0x5c7f,	// (0x0007d96f) cell_gms_pane_g1

0x0b00,	// (0x000787f0) cell_gms_pane_g2

0x0a58,	// (0x00078748) cell_gms_pane_g3

0x0b08,	// (0x000787f8) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00086ea1) cell_gms_pane_g

0x0b11,	// (0x00078801) grid_highlight_pane_cp09

0x84c8,	// (0x000801b8) phob_pre_status_pane_g1

0x84d0,	// (0x000801c0) phob_pre_status_pane_g2

0x84d8,	// (0x000801c8) phob_pre_status_pane_g3

0x84e0,	// (0x000801d0) phob_pre_status_pane_g4

0x0004,

0xf57a,	// (0x0008726a) phob_pre_status_pane_g

0x84f0,	// (0x000801e0) phob_pre_status_pane_t1

0x8500,	// (0x000801f0) phob_pre_status_pane_t2

0x8510,	// (0x00080200) phob_pre_status_pane_t3

0x0002,

0xf585,	// (0x00087275) phob_pre_status_pane_t

0x0b19,	// (0x00078809) bg_list_pane_cp05

0x5c8f,	// (0x0007d97f) grid_vorec_pane

0x5c99,	// (0x0007d989) vorec_t1

0x5ca7,	// (0x0007d997) vorec_t2

0x5cb5,	// (0x0007d9a5) vorec_t3

0x5cc3,	// (0x0007d9b3) vorec_t4

0xd5a4,	// (0x00085294) vorec_t5

0xd5b2,	// (0x000852a2) vorec_t6

0x0004,

0xf1ba,	// (0x00086eaa) vorec_t

0xd5c0,	// (0x000852b0) wait_bar_pane_cp01

0x5cdf,	// (0x0007d9cf) cell_vorec_pane_ParamLimits

0x5cdf,	// (0x0007d9cf) cell_vorec_pane

0x5cf2,	// (0x0007d9e2) cell_vorec_pane_g1

0xdc8e,	// (0x0008597e) grid_highlight_pane_cp05

0xdf64,	// (0x00085c54) cams_zoom_pane

0xdf64,	// (0x00085c54) image_vga_pane

0x0875,	// (0x00078565) main_camera_pane_g1

0x0875,	// (0x00078565) main_camera_pane_g2

0x0875,	// (0x00078565) main_camera_pane_g3

0x0875,	// (0x00078565) main_camera_pane_g4

0x0875,	// (0x00078565) main_camera_pane_g5

0x0875,	// (0x00078565) main_camera_pane_g6

0x0875,	// (0x00078565) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00086eb5) main_camera_pane_g

0x16e1,	// (0x000793d1) main_camera_pane_t1

0x16e1,	// (0x000793d1) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00086ec6) main_camera_pane_t

0x5cfc,	// (0x0007d9ec) cams_zoom_pane_cp_ParamLimits

0x5cfc,	// (0x0007d9ec) cams_zoom_pane_cp

0x5d2a,	// (0x0007da1a) image_cif_pane_ParamLimits

0x5d2a,	// (0x0007da1a) image_cif_pane

0xd871,	// (0x00085561) image_subqcif_pane

0x5d38,	// (0x0007da28) main_video_pane_g1_ParamLimits

0x5d38,	// (0x0007da28) main_video_pane_g1

0x5d60,	// (0x0007da50) main_video_pane_g2_ParamLimits

0x5d60,	// (0x0007da50) main_video_pane_g2

0x5d93,	// (0x0007da83) main_video_pane_g3_ParamLimits

0x5d93,	// (0x0007da83) main_video_pane_g3

0x5d93,	// (0x0007da83) main_video_pane_g4_ParamLimits

0x5d93,	// (0x0007da83) main_video_pane_g4

0x5dc1,	// (0x0007dab1) main_video_pane_g5_ParamLimits

0x5dc1,	// (0x0007dab1) main_video_pane_g5

0x0b3f,	// (0x0007882f) main_video_pane_g6_ParamLimits

0x0b3f,	// (0x0007882f) main_video_pane_g6

0x0006,

0xf1db,	// (0x00086ecb) main_video_pane_g_ParamLimits

0xf1db,	// (0x00086ecb) main_video_pane_g

0x5ddd,	// (0x0007dacd) main_video_pane_t1_ParamLimits

0x5ddd,	// (0x0007dacd) main_video_pane_t1

0x0b59,	// (0x00078849) cams_zoom_pane_g1

0x0b59,	// (0x00078849) cams_zoom_pane_g2

0x0b59,	// (0x00078849) cams_zoom_pane_g3

0x0b59,	// (0x00078849) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00086eda) cams_zoom_pane_g

0x5e23,	// (0x0007db13) grid_cams_pane

0x5e31,	// (0x0007db21) linegrid_cams_pane

0x5e3f,	// (0x0007db2f) cell_cams_pane_ParamLimits

0x5e3f,	// (0x0007db2f) cell_cams_pane

0x0b63,	// (0x00078853) cams_burst_image_pane

0x0b6b,	// (0x0007885b) cell_cams_pane_g1

0xdc8e,	// (0x0008597e) grid_highlight_pane_cp03

0xdf01,	// (0x00085bf1) mp_bg_pane_g1

0xd871,	// (0x00085561) bg_list_pane_cp03

0xd871,	// (0x00085561) bg_mp_pane

0xd871,	// (0x00085561) grid_mp_pane

0x0b59,	// (0x00078849) media_player_g1

0x10b6,	// (0x00078da6) media_player_t1

0x10b6,	// (0x00078da6) media_player_t2

0x10b6,	// (0x00078da6) media_player_t3

0x10b6,	// (0x00078da6) media_player_t4

0x10b6,	// (0x00078da6) media_player_t5

0x10b6,	// (0x00078da6) media_player_t6

0x10b6,	// (0x00078da6) media_player_t7

0x0006,

0xf564,	// (0x00087254) media_player_t

0xd871,	// (0x00085561) wait_bar_pane_cp02

0xf549,	// (0x00087239) main_usb_pane_t

0x1395,	// (0x00079085) cell_mp_pane

0xdf01,	// (0x00085bf1) cell_mp_pane_g1

0xdc8e,	// (0x0008597e) grid_highlight_pane_cp06

0x0b73,	// (0x00078863) grid_skin_colour_pane

0x0b7b,	// (0x0007886b) list_highlight_pane_cp03

0x5e52,	// (0x0007db42) skin_g1

0x0b83,	// (0x00078873) skin_t1

0x0b92,	// (0x00078882) skin_t2

0x0001,

0xf218,	// (0x00086f08) skin_t

0x5e5c,	// (0x0007db4c) cell_skin_colour_pane_ParamLimits

0x5e5c,	// (0x0007db4c) cell_skin_colour_pane

0x0ba0,	// (0x00078890) cell_skin_colour_pane_g1

0x5ee0,	// (0x0007dbd0) call_video_g1_ParamLimits

0x5ee0,	// (0x0007dbd0) call_video_g1

0x5ef0,	// (0x0007dbe0) call_video_g2_ParamLimits

0x5ef0,	// (0x0007dbe0) call_video_g2

0x0001,

0xf21d,	// (0x00086f0d) call_video_g_ParamLimits

0xf21d,	// (0x00086f0d) call_video_g

0x5f4a,	// (0x0007dc3a) call_video_uplink_pane_cp1_ParamLimits

0x5f4a,	// (0x0007dc3a) call_video_uplink_pane_cp1

0x0bb2,	// (0x000788a2) call_video_uplink_pane_cp2

0x6016,	// (0x0007dd06) video_down_crop_pane_ParamLimits

0x6016,	// (0x0007dd06) video_down_crop_pane

0x6114,	// (0x0007de04) video_down_pane_ParamLimits

0x6114,	// (0x0007de04) video_down_pane

0x0bba,	// (0x000788aa) video_down_subqcif_pane_ParamLimits

0x0bba,	// (0x000788aa) video_down_subqcif_pane

0x0bd2,	// (0x000788c2) video_down_subqcif_pane_cp_ParamLimits

0x0bd2,	// (0x000788c2) video_down_subqcif_pane_cp

0x0bf8,	// (0x000788e8) im_reading_pane_ParamLimits

0x0bf8,	// (0x000788e8) im_reading_pane

0x6234,	// (0x0007df24) im_writing_pane_ParamLimits

0x6234,	// (0x0007df24) im_writing_pane

0x6252,	// (0x0007df42) im_reading_pane_t1

0x0c12,	// (0x00078902) list_im_pane

0x0c23,	// (0x00078913) scroll_pane_cp07

0x62a6,	// (0x0007df96) im_writing_pane_t1_ParamLimits

0x62a6,	// (0x0007df96) im_writing_pane_t1

0x0c3c,	// (0x0007892c) im_writing_pane_t2_ParamLimits

0x0c3c,	// (0x0007892c) im_writing_pane_t2

0x0001,

0xf227,	// (0x00086f17) im_writing_pane_t_ParamLimits

0xf227,	// (0x00086f17) im_writing_pane_t

0xdc8e,	// (0x0008597e) input_focus_pane_cp04

0xdc8e,	// (0x0008597e) input_focus_pane_cp05

0x62bb,	// (0x0007dfab) list_im_single_pane_ParamLimits

0x62bb,	// (0x0007dfab) list_im_single_pane

0x62df,	// (0x0007dfcf) list_single_im_pane_t1

0x0b19,	// (0x00078809) blid_accuracy_pane

0x0b19,	// (0x00078809) blid_compass_pane

0xe3e8,	// (0x000860d8) main_location_t1

0xe3e8,	// (0x000860d8) main_location_t2

0xe3e8,	// (0x000860d8) main_location_t3

0x0002,

0xf573,	// (0x00087263) main_location_t

0xdc8e,	// (0x0008597e) aid_levels_location

0xdf01,	// (0x00085bf1) blid_accuracy_pane_g1

0xdf01,	// (0x00085bf1) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x00086f6b) blid_accuracy_pane_g

0x0c84,	// (0x00078974) wml_content_pane

0x0cc2,	// (0x000789b2) wml_button_pane_ParamLimits

0x0cc2,	// (0x000789b2) wml_button_pane

0x62ee,	// (0x0007dfde) wml_list_single_large_pane_ParamLimits

0x62ee,	// (0x0007dfde) wml_list_single_large_pane

0x6318,	// (0x0007e008) wml_list_single_medium_pane_ParamLimits

0x6318,	// (0x0007e008) wml_list_single_medium_pane

0x6349,	// (0x0007e039) wml_list_single_small_pane_ParamLimits

0x6349,	// (0x0007e039) wml_list_single_small_pane

0x0cd6,	// (0x000789c6) wml_selection_box_pane_ParamLimits

0x0cd6,	// (0x000789c6) wml_selection_box_pane

0x0ce9,	// (0x000789d9) wml_list_single_pane_t1

0x0cf8,	// (0x000789e8) wml_list_single_medium_pane_t1

0x0d07,	// (0x000789f7) wml_list_single_large_pane_t1

0x0d16,	// (0x00078a06) input_focus_pane_cp02_ParamLimits

0x0d16,	// (0x00078a06) input_focus_pane_cp02

0x0d29,	// (0x00078a19) wml_selection_box_pane_g1

0x0d32,	// (0x00078a22) wml_selection_box_pane_t1_ParamLimits

0x0d32,	// (0x00078a22) wml_selection_box_pane_t1

0xdee9,	// (0x00085bd9) bg_wml_button_pane_ParamLimits

0xdee9,	// (0x00085bd9) bg_wml_button_pane

0x0d4a,	// (0x00078a3a) wml_button_pane_g1

0x0d52,	// (0x00078a42) wml_button_pane_t1

0x0d4a,	// (0x00078a3a) wml_button_bg_pane_g1

0x0d62,	// (0x00078a52) wml_button_bg_pane_g2

0x0d6a,	// (0x00078a5a) wml_button_bg_pane_g3

0x0d72,	// (0x00078a62) wml_button_bg_pane_g4

0x0d7a,	// (0x00078a6a) wml_button_bg_pane_g5

0x0d82,	// (0x00078a72) wml_button_bg_pane_g6

0x0d8a,	// (0x00078a7a) wml_button_bg_pane_g7

0x0d92,	// (0x00078a82) wml_button_bg_pane_g8

0x0d9a,	// (0x00078a8a) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00086f1c) wml_button_bg_pane_g

0x6383,	// (0x0007e073) bg_list_pane_cp02

0x0da2,	// (0x00078a92) mce_header_pane_ParamLimits

0x0da2,	// (0x00078a92) mce_header_pane

0x0db8,	// (0x00078aa8) mce_icon_pane

0x0db8,	// (0x00078aa8) mce_image_pane

0x0dc1,	// (0x00078ab1) mce_text_pane_ParamLimits

0x0dc1,	// (0x00078ab1) mce_text_pane

0x638d,	// (0x0007e07d) scroll_pane_cp03

0x0cba,	// (0x000789aa) scroll_pane_cp04

0x0dd4,	// (0x00078ac4) scroll_pane_cp05_ParamLimits

0x0dd4,	// (0x00078ac4) scroll_pane_cp05

0x6397,	// (0x0007e087) mce_header_field_pane_ParamLimits

0x6397,	// (0x0007e087) mce_header_field_pane

0x63b7,	// (0x0007e0a7) mce_header_field_pane_2_ParamLimits

0x63b7,	// (0x0007e0a7) mce_header_field_pane_2

0x63cd,	// (0x0007e0bd) mce_header_field_pane_3

0x63d5,	// (0x0007e0c5) list_single_mce_message_pane_ParamLimits

0x63d5,	// (0x0007e0c5) list_single_mce_message_pane

0x6400,	// (0x0007e0f0) list_single_mce_smart_pane_ParamLimits

0x6400,	// (0x0007e0f0) list_single_mce_smart_pane

0x0de0,	// (0x00078ad0) input_focus_pane_cp03

0x0de9,	// (0x00078ad9) list_header_data_pane

0x6436,	// (0x0007e126) mce_header_field_pane_t1

0x6444,	// (0x0007e134) list_single_mce_header_pane_ParamLimits

0x6444,	// (0x0007e134) list_single_mce_header_pane

0x0df1,	// (0x00078ae1) list_single_mce_header_pane_t1

0x0e00,	// (0x00078af0) list_single_mce_message_pane_g1

0x0e08,	// (0x00078af8) list_single_mce_message_pane_t1

0x6496,	// (0x0007e186) bg_cale_heading_pane_cp01_ParamLimits

0x6496,	// (0x0007e186) bg_cale_heading_pane_cp01

0x0e16,	// (0x00078b06) bg_cale_pane_cp02_ParamLimits

0x0e16,	// (0x00078b06) bg_cale_pane_cp02

0x64e4,	// (0x0007e1d4) cale_month_corner_pane

0x6503,	// (0x0007e1f3) cale_month_day_heading_pane_ParamLimits

0x6503,	// (0x0007e1f3) cale_month_day_heading_pane

0x6569,	// (0x0007e259) cale_month_pane_g1_ParamLimits

0x6569,	// (0x0007e259) cale_month_pane_g1

0x65ac,	// (0x0007e29c) cale_month_pane_g2_ParamLimits

0x65ac,	// (0x0007e29c) cale_month_pane_g2

0x65e4,	// (0x0007e2d4) cale_month_pane_g3_ParamLimits

0x65e4,	// (0x0007e2d4) cale_month_pane_g3

0x6630,	// (0x0007e320) cale_month_pane_g4_ParamLimits

0x6630,	// (0x0007e320) cale_month_pane_g4

0x667c,	// (0x0007e36c) cale_month_pane_g5_ParamLimits

0x667c,	// (0x0007e36c) cale_month_pane_g5

0x66c8,	// (0x0007e3b8) cale_month_pane_g6_ParamLimits

0x66c8,	// (0x0007e3b8) cale_month_pane_g6

0x6714,	// (0x0007e404) cale_month_pane_g7_ParamLimits

0x6714,	// (0x0007e404) cale_month_pane_g7

0x6778,	// (0x0007e468) cale_month_pane_g8_ParamLimits

0x6778,	// (0x0007e468) cale_month_pane_g8

0x67dc,	// (0x0007e4cc) cale_month_pane_g9_ParamLimits

0x67dc,	// (0x0007e4cc) cale_month_pane_g9

0x683a,	// (0x0007e52a) cale_month_pane_g10_ParamLimits

0x683a,	// (0x0007e52a) cale_month_pane_g10

0x6896,	// (0x0007e586) cale_month_pane_g11_ParamLimits

0x6896,	// (0x0007e586) cale_month_pane_g11

0x68ea,	// (0x0007e5da) cale_month_pane_g12_ParamLimits

0x68ea,	// (0x0007e5da) cale_month_pane_g12

0x6940,	// (0x0007e630) cale_month_pane_g13_ParamLimits

0x6940,	// (0x0007e630) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00086f2f) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00086f2f) cale_month_pane_g

0x6996,	// (0x0007e686) cale_month_week_pane

0x69ba,	// (0x0007e6aa) grid_cale_month_pane_ParamLimits

0x69ba,	// (0x0007e6aa) grid_cale_month_pane

0x6a13,	// (0x0007e703) cale_month_day_heading_pane_t1

0x6a99,	// (0x0007e789) cale_month_day_heading_pane_t2

0x6b12,	// (0x0007e802) cale_month_day_heading_pane_t3

0x6b8b,	// (0x0007e87b) cale_month_day_heading_pane_t4

0x6c04,	// (0x0007e8f4) cale_month_day_heading_pane_t5

0x6c7d,	// (0x0007e96d) cale_month_day_heading_pane_t6

0x6cf6,	// (0x0007e9e6) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00086f4a) cale_month_day_heading_pane_t

0x0ac7,	// (0x000787b7) bg_cale_side_pane_cp01

0x6d87,	// (0x0007ea77) cale_month_week_pane_t1

0x6da0,	// (0x0007ea90) cale_month_week_pane_t2

0x6db9,	// (0x0007eaa9) cale_month_week_pane_t3

0x6dd2,	// (0x0007eac2) cale_month_week_pane_t4

0x6deb,	// (0x0007eadb) cale_month_week_pane_t5

0x6e0c,	// (0x0007eafc) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00086f59) cale_month_week_pane_t

0x6e2d,	// (0x0007eb1d) cell_cale_month_pane_ParamLimits

0x6e2d,	// (0x0007eb1d) cell_cale_month_pane

0x6f4f,	// (0x0007ec3f) cell_cale_month_pane_g1

0x6f5b,	// (0x0007ec4b) cell_cale_month_pane_t1_ParamLimits

0x6f5b,	// (0x0007ec4b) cell_cale_month_pane_t1

0x0ad5,	// (0x000787c5) grid_highlight_pane_cp08

0xdf01,	// (0x00085bf1) main_smil_g1

0x6f87,	// (0x0007ec77) smil_status_pane

0x0e61,	// (0x00078b51) smil_text_pane

0xe300,	// (0x00085ff0) bg_popup_call3_rect_pane_g8

0xe308,	// (0x00085ff8) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x000871f7) bg_popup_call3_rect_pane_g

0xe4bf,	// (0x000861af) smil_status_volume_pane_g1

0x0e6b,	// (0x00078b5b) smil_status_pane_t1

0x8881,	// (0x00080571) volume_smil_pane

0x0e82,	// (0x00078b72) list_smil_text_pane

0x6f9a,	// (0x0007ec8a) scroll_pane_cp011

0x6fa5,	// (0x0007ec95) smil_text_list_pane_t1_ParamLimits

0x6fa5,	// (0x0007ec95) smil_text_list_pane_t1

0x701d,	// (0x0007ed0d) aid_volume_smil_ParamLimits

0x701d,	// (0x0007ed0d) aid_volume_smil

0xdf01,	// (0x00085bf1) smil_volume_pane_g1

0xdf01,	// (0x00085bf1) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x00086f6b) smil_volume_pane_g

0x5813,	// (0x0007d503) listscroll_cale_day_pane

0x0eae,	// (0x00078b9e) bg_cale_pane

0x0ec6,	// (0x00078bb6) list_cale_pane

0x0ee9,	// (0x00078bd9) scroll_pane_cp09

0x0efa,	// (0x00078bea) cale_bg_pane_g1

0x0f02,	// (0x00078bf2) cale_bg_pane_g2

0x0f0a,	// (0x00078bfa) cale_bg_pane_g3

0x0f12,	// (0x00078c02) cale_bg_pane_g4

0x0f1a,	// (0x00078c0a) cale_bg_pane_g5

0x0f22,	// (0x00078c12) cale_bg_pane_g6

0x0f2a,	// (0x00078c1a) cale_bg_pane_g7

0x0f32,	// (0x00078c22) cale_bg_pane_g8

0x0f3a,	// (0x00078c2a) cale_bg_pane_g9

0x0008,

0xf280,	// (0x00086f70) cale_bg_pane_g

0x703f,	// (0x0007ed2f) list_cale_time_pane_ParamLimits

0x703f,	// (0x0007ed2f) list_cale_time_pane

0x0f4a,	// (0x00078c3a) list_cale_time_pane_g1_ParamLimits

0x0f4a,	// (0x00078c3a) list_cale_time_pane_g1

0x0f56,	// (0x00078c46) list_cale_time_pane_g2_ParamLimits

0x0f56,	// (0x00078c46) list_cale_time_pane_g2

0x7061,	// (0x0007ed51) list_cale_time_pane_g3_ParamLimits

0x7061,	// (0x0007ed51) list_cale_time_pane_g3

0x706f,	// (0x0007ed5f) list_cale_time_pane_g4_ParamLimits

0x706f,	// (0x0007ed5f) list_cale_time_pane_g4

0x707d,	// (0x0007ed6d) list_cale_time_pane_g5_ParamLimits

0x707d,	// (0x0007ed6d) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x00086f83) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x00086f83) list_cale_time_pane_g

0x0f70,	// (0x00078c60) list_cale_time_pane_t1_ParamLimits

0x0f70,	// (0x00078c60) list_cale_time_pane_t1

0x0f98,	// (0x00078c88) list_cale_time_pane_t2_ParamLimits

0x0f98,	// (0x00078c88) list_cale_time_pane_t2

0x7320,	// (0x0007f010) aid_blid_cardinal_pane

0x7362,	// (0x0007f052) compass_pane_t4

0x0fc0,	// (0x00078cb0) list_cale_time_pane_t4_ParamLimits

0x0fc0,	// (0x00078cb0) list_cale_time_pane_t4

0x7370,	// (0x0007f060) compass_pane_t5

0x7380,	// (0x0007f070) compass_pane_t6

0x738e,	// (0x0007f07e) compass_pane_t7

0x14da,	// (0x000791ca) navi_pane_cc_t1

0x16c9,	// (0x000793b9) aid_phob_thumbnail_center_pane

0x783c,	// (0x0007f52c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x00086f90) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x00086f90) list_cale_time_pane_t

0xd8e5,	// (0x000855d5) bg_popup_window_pane_cp02_ParamLimits

0xd8e5,	// (0x000855d5) bg_popup_window_pane_cp02

0x0fe8,	// (0x00078cd8) heading_pane_cp01_ParamLimits

0x0fe8,	// (0x00078cd8) heading_pane_cp01

0x0ff4,	// (0x00078ce4) loc_req_pane_ParamLimits

0x0ff4,	// (0x00078ce4) loc_req_pane

0x1004,	// (0x00078cf4) loc_type_pane_ParamLimits

0x1004,	// (0x00078cf4) loc_type_pane

0x1016,	// (0x00078d06) loc_type_pane_t1_ParamLimits

0x1016,	// (0x00078d06) loc_type_pane_t1

0x1028,	// (0x00078d18) loc_type_pane_t2_ParamLimits

0x1028,	// (0x00078d18) loc_type_pane_t2

0x103a,	// (0x00078d2a) loc_type_pane_t3_ParamLimits

0x103a,	// (0x00078d2a) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x00086f97) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x00086f97) loc_type_pane_t

0x104c,	// (0x00078d3c) list_loc_req_pane

0x1056,	// (0x00078d46) scroll_pane_cp012

0x708b,	// (0x0007ed7b) list_single_loc_request_popup_menu_pane_ParamLimits

0x708b,	// (0x0007ed7b) list_single_loc_request_popup_menu_pane

0x1061,	// (0x00078d51) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1061,	// (0x00078d51) list_single_loc_request_popup_menu_pane_g1

0x106d,	// (0x00078d5d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x106d,	// (0x00078d5d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x00086f9e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x00086f9e) list_single_loc_request_popup_menu_pane_g

0x1079,	// (0x00078d69) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1079,	// (0x00078d69) list_single_loc_request_popup_menu_pane_t1

0x709d,	// (0x0007ed8d) bg_popup_window_pane_cp03_ParamLimits

0x709d,	// (0x0007ed8d) bg_popup_window_pane_cp03

0x70ab,	// (0x0007ed9b) heading_loc_req_pane_ParamLimits

0x70ab,	// (0x0007ed9b) heading_loc_req_pane

0x70b7,	// (0x0007eda7) popup_dyc_status_message_window_g1_ParamLimits

0x70b7,	// (0x0007eda7) popup_dyc_status_message_window_g1

0x70c3,	// (0x0007edb3) popup_dyc_status_message_window_t1_ParamLimits

0x70c3,	// (0x0007edb3) popup_dyc_status_message_window_t1

0x70d5,	// (0x0007edc5) popup_dyc_status_message_window_t2_ParamLimits

0x70d5,	// (0x0007edc5) popup_dyc_status_message_window_t2

0x70e7,	// (0x0007edd7) popup_dyc_status_message_window_t3_ParamLimits

0x70e7,	// (0x0007edd7) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x00086fa3) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x00086fa3) popup_dyc_status_message_window_t

0xdc8e,	// (0x0008597e) bg_heading_pane_cp01

0x108f,	// (0x00078d7f) heading_loc_req_pane_g1

0x1097,	// (0x00078d87) heading_loc_req_pane_g2

0x109f,	// (0x00078d8f) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x00086faa) heading_loc_req_pane_g

0x10a7,	// (0x00078d97) heading_loc_req_pane_t1

0x10c6,	// (0x00078db6) bg_popup_sub_pane_cp01_ParamLimits

0x10c6,	// (0x00078db6) bg_popup_sub_pane_cp01

0x10d4,	// (0x00078dc4) popup_cale_events_window_g1_ParamLimits

0x10d4,	// (0x00078dc4) popup_cale_events_window_g1

0x10f4,	// (0x00078de4) popup_cale_events_window_g2_ParamLimits

0x10f4,	// (0x00078de4) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x00086fcc) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x00086fcc) popup_cale_events_window_g

0x1114,	// (0x00078e04) popup_cale_events_window_t1_ParamLimits

0x1114,	// (0x00078e04) popup_cale_events_window_t1

0x1126,	// (0x00078e16) popup_cale_events_window_t2_ParamLimits

0x1126,	// (0x00078e16) popup_cale_events_window_t2

0x1164,	// (0x00078e54) popup_cale_events_window_t3_ParamLimits

0x1164,	// (0x00078e54) popup_cale_events_window_t3

0x119e,	// (0x00078e8e) popup_cale_events_window_t4_ParamLimits

0x119e,	// (0x00078e8e) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x00086fd1) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x00086fd1) popup_cale_events_window_t

0x7111,	// (0x0007ee01) call_type_pane

0x1d84,	// (0x00079a74) popup_call_status_window_g1

0x711d,	// (0x0007ee0d) popup_call_status_window_g2

0x7129,	// (0x0007ee19) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x00086fda) popup_call_status_window_g

0x11d4,	// (0x00078ec4) call_type_pane_g1

0x11dd,	// (0x00078ecd) call_type_pane_g2

0x0001,

0xf2f1,	// (0x00086fe1) call_type_pane_g

0xdc8e,	// (0x0008597e) bg_popup_sub_pane_cp02

0x11e6,	// (0x00078ed6) listscroll_popup_wml_pane

0x11ee,	// (0x00078ede) list_wml_pane

0x11f8,	// (0x00078ee8) scroll_pane_cp013

0x1203,	// (0x00078ef3) list_single_graphic_popup_wml_pane_ParamLimits

0x1203,	// (0x00078ef3) list_single_graphic_popup_wml_pane

0xdf01,	// (0x00085bf1) list_single_graphic_popup_wml_pane_g1

0x1217,	// (0x00078f07) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x00086fe6) list_single_graphic_popup_wml_pane_g

0x121f,	// (0x00078f0f) list_single_graphic_popup_wml_pane_t1

0x122d,	// (0x00078f1d) aid_call_pane

0xdee1,	// (0x00085bd1) popup_clock_analogue_window_g1

0xdee1,	// (0x00085bd1) popup_clock_analogue_window_g2

0x7135,	// (0x0007ee25) popup_clock_analogue_window_g3

0x7135,	// (0x0007ee25) popup_clock_analogue_window_g4

0xdf01,	// (0x00085bf1) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x00086feb) popup_clock_analogue_window_g

0x713d,	// (0x0007ee2d) popup_clock_analogue_window_t1

0x714b,	// (0x0007ee3b) clock_digital_number_pane_ParamLimits

0x714b,	// (0x0007ee3b) clock_digital_number_pane

0x7157,	// (0x0007ee47) clock_digital_number_pane_cp02_ParamLimits

0x7157,	// (0x0007ee47) clock_digital_number_pane_cp02

0x7163,	// (0x0007ee53) clock_digital_number_pane_cp03_ParamLimits

0x7163,	// (0x0007ee53) clock_digital_number_pane_cp03

0x716f,	// (0x0007ee5f) clock_digital_number_pane_cp04_ParamLimits

0x716f,	// (0x0007ee5f) clock_digital_number_pane_cp04

0x717f,	// (0x0007ee6f) clock_digital_separator_pane_ParamLimits

0x717f,	// (0x0007ee6f) clock_digital_separator_pane

0x718b,	// (0x0007ee7b) popup_clock_digital_window_t1

0xdf01,	// (0x00085bf1) clock_digital_number_pane_g1

0xdf01,	// (0x00085bf1) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x00086f6b) clock_digital_number_pane_g

0xdf01,	// (0x00085bf1) clock_digital_separator_pane_g1

0xdf01,	// (0x00085bf1) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x00086f6b) clock_digital_separator_pane_g

0xdc8e,	// (0x0008597e) bg_popup_window_pane_cp04

0x12b0,	// (0x00078fa0) heading_pane_cp03

0x0b19,	// (0x00078809) listscroll_popup_gms_pane

0xdc8e,	// (0x0008597e) grid_large_graphic_popup_pane

0x12b9,	// (0x00078fa9) listscroll_popup_gms_pane_g1

0x12c2,	// (0x00078fb2) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x00086ff6) listscroll_popup_gms_pane_g

0x12cb,	// (0x00078fbb) scroll_pane_cp014

0xdf64,	// (0x00085c54) cell_large_graphic_popup_pane_ParamLimits

0xdf64,	// (0x00085c54) cell_large_graphic_popup_pane

0x0867,	// (0x00078557) cell_large_graphic_popup_pane_g1_ParamLimits

0x0867,	// (0x00078557) cell_large_graphic_popup_pane_g1

0x12d4,	// (0x00078fc4) cell_large_graphic_popup_pane_g2_ParamLimits

0x12d4,	// (0x00078fc4) cell_large_graphic_popup_pane_g2

0x12e2,	// (0x00078fd2) cell_large_graphic_popup_pane_g3_ParamLimits

0x12e2,	// (0x00078fd2) cell_large_graphic_popup_pane_g3

0x12f0,	// (0x00078fe0) cell_large_graphic_popup_pane_g4_ParamLimits

0x12f0,	// (0x00078fe0) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x00086ffb) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x00086ffb) cell_large_graphic_popup_pane_g

0xdc8e,	// (0x0008597e) grid_highlight_pane_cp010

0xdf01,	// (0x00085bf1) bg_popup_call_pane_g1

0x1301,	// (0x00078ff1) list_single_graphic_popup_conf_pane_ParamLimits

0x1301,	// (0x00078ff1) list_single_graphic_popup_conf_pane

0x1314,	// (0x00079004) list_highlight_pane_cp01

0x131d,	// (0x0007900d) list_single_graphic_popup_conf_pane_g1

0x1325,	// (0x00079015) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x00087004) list_single_graphic_popup_conf_pane_g

0x132d,	// (0x0007901d) list_single_graphic_popup_conf_pane_t1

0x133b,	// (0x0007902b) linegrid_cams_pane_g1

0x71a8,	// (0x0007ee98) linegrid_cams_pane_g2

0x0a58,	// (0x00078748) linegrid_cams_pane_g3

0x1344,	// (0x00079034) linegrid_cams_pane_g4

0x71b1,	// (0x0007eea1) linegrid_cams_pane_g5

0x71ba,	// (0x0007eeaa) linegrid_cams_pane_g6

0x0b08,	// (0x000787f8) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x00087009) linegrid_cams_pane_g

0x134d,	// (0x0007903d) popup_clock_analogue_window

0x134d,	// (0x0007903d) popup_clock_digital_window

0xdc8e,	// (0x0008597e) popup_phob_thumbnail_window

0xdf01,	// (0x00085bf1) call_video_uplink_pane_g1

0x1356,	// (0x00079046) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x00087018) call_video_uplink_pane_g

0x135e,	// (0x0007904e) video_uplink_pane

0x1366,	// (0x00079056) mce_image_pane_g1

0x71c3,	// (0x0007eeb3) mce_image_pane_g2

0x71cd,	// (0x0007eebd) mce_image_pane_g3

0x71d5,	// (0x0007eec5) mce_image_pane_g4

0x71dd,	// (0x0007eecd) mce_image_pane_g5

0x0004,

0xf32d,	// (0x0008701d) mce_image_pane_g

0x1370,	// (0x00079060) control_top_pane_stacon_cp01_ParamLimits

0x1370,	// (0x00079060) control_top_pane_stacon_cp01

0x1384,	// (0x00079074) uni_indicator_pane_stacon_cp01_ParamLimits

0x1384,	// (0x00079074) uni_indicator_pane_stacon_cp01

0x1395,	// (0x00079085) bg_popup_sub_pane_cp03

0x139f,	// (0x0007908f) chi_dic_find_pane

0x71e5,	// (0x0007eed5) listscroll_chi_dic_pane

0x13a7,	// (0x00079097) main_pane_chidic_g1

0x13af,	// (0x0007909f) chi_dic_find_pane_t1

0x13bd,	// (0x000790ad) find_chidic_pane

0x13c6,	// (0x000790b6) chi_dic_list_pane_ParamLimits

0x13c6,	// (0x000790b6) chi_dic_list_pane

0x13d7,	// (0x000790c7) scroll_pane_cp020

0x13df,	// (0x000790cf) find_chidic_pane_t1

0xdc8e,	// (0x0008597e) input_focus_pane_cp06

0x71f9,	// (0x0007eee9) list_chi_dic_pane_ParamLimits

0x71f9,	// (0x0007eee9) list_chi_dic_pane

0x7213,	// (0x0007ef03) list_chi_dic_pane_t1_ParamLimits

0x7213,	// (0x0007ef03) list_chi_dic_pane_t1

0xdc8e,	// (0x0008597e) list_highlight_pane_cp020

0x13ee,	// (0x000790de) bg_cale_heading_pane_g1

0x7226,	// (0x0007ef16) bg_cale_heading_pane_g2

0x722e,	// (0x0007ef1e) bg_cale_heading_pane_g3

0x7236,	// (0x0007ef26) bg_cale_heading_pane_g4

0x7240,	// (0x0007ef30) bg_cale_heading_pane_g5

0x724a,	// (0x0007ef3a) bg_cale_heading_pane_g6

0x7252,	// (0x0007ef42) bg_cale_heading_pane_g7

0x725a,	// (0x0007ef4a) bg_cale_heading_pane_g8

0x7264,	// (0x0007ef54) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x00087028) bg_cale_heading_pane_g

0x13ee,	// (0x000790de) bg_cale_side_pane_g1

0x726e,	// (0x0007ef5e) bg_cale_side_pane_g2

0x7278,	// (0x0007ef68) bg_cale_side_pane_g3

0x7282,	// (0x0007ef72) bg_cale_side_pane_g4

0x728c,	// (0x0007ef7c) bg_cale_side_pane_g5

0x7296,	// (0x0007ef86) bg_cale_side_pane_g6

0x72a0,	// (0x0007ef90) bg_cale_side_pane_g7

0x72aa,	// (0x0007ef9a) bg_cale_side_pane_g8

0x72b2,	// (0x0007efa2) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x0008703b) bg_cale_side_pane_g

0x72ba,	// (0x0007efaa) popup_call_status_window_ParamLimits

0x72ba,	// (0x0007efaa) popup_call_status_window

0x13f6,	// (0x000790e6) stacon_top_pane

0x13fe,	// (0x000790ee) status_pane_ParamLimits

0x13fe,	// (0x000790ee) status_pane

0x1413,	// (0x00079103) status_small_pane

0x141b,	// (0x0007910b) control_pane

0xdc8e,	// (0x0008597e) stacon_bottom_pane

0x1423,	// (0x00079113) list_single_mce_smart_pane_t1_ParamLimits

0x1423,	// (0x00079113) list_single_mce_smart_pane_t1

0x1436,	// (0x00079126) list_single_mce_smart_pane_t2_ParamLimits

0x1436,	// (0x00079126) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x0008704e) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x0008704e) list_single_mce_smart_pane_t

0x72c6,	// (0x0007efb6) compass_pane

0x72d2,	// (0x0007efc2) main_location2_pane_t1

0x72e6,	// (0x0007efd6) main_location2_pane_t2

0x72fa,	// (0x0007efea) main_location2_pane_t3

0x0003,

0xf363,	// (0x00087053) main_location2_pane_t

0x1455,	// (0x00079145) compass_pane_g1_ParamLimits

0x1455,	// (0x00079145) compass_pane_g1

0x7344,	// (0x0007f034) compass_pane_t1

0x7353,	// (0x0007f043) compass_pane_t2

0x0005,

0xf36c,	// (0x0008705c) compass_pane_t

0x739e,	// (0x0007f08e) text_secondary_cp61

0x14d1,	// (0x000791c1) navi_pane_cams_g5

0x154d,	// (0x0007923d) navi_pane_im_t1

0x155b,	// (0x0007924b) navi_pane_mp_g1_ParamLimits

0x155b,	// (0x0007924b) navi_pane_mp_g1

0x156f,	// (0x0007925f) navi_pane_mp_g2_ParamLimits

0x156f,	// (0x0007925f) navi_pane_mp_g2

0x157b,	// (0x0007926b) navi_pane_mp_g3_ParamLimits

0x157b,	// (0x0007926b) navi_pane_mp_g3

0x0002,

0xf380,	// (0x00087070) navi_pane_mp_g_ParamLimits

0xf380,	// (0x00087070) navi_pane_mp_g

0x1587,	// (0x00079277) navi_pane_mp_t1

0x1595,	// (0x00079285) navi_pane_mp_t2

0x0002,

0xf387,	// (0x00087077) navi_pane_mp_t

0x1600,	// (0x000792f0) navi_pane_vt_g1

0x1587,	// (0x00079277) navi_pane_vt_t1

0x1608,	// (0x000792f8) navi_slider_pane

0x0b19,	// (0x00078809) zooming_pane

0x1618,	// (0x00079308) navi_slider_pane_g1

0x73d9,	// (0x0007f0c9) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x0008707e) navi_slider_pane_g

0x164e,	// (0x0007933e) aid_levels_zoom

0x1656,	// (0x00079346) zooming_pane_g1

0x165e,	// (0x0007934e) zooming_pane_g2

0x165e,	// (0x0007934e) zooming_pane_g3

0x0002,

0xf39d,	// (0x0008708d) zooming_pane_g

0x1666,	// (0x00079356) level_10_zoom

0x166f,	// (0x0007935f) level_11_zoom

0x1678,	// (0x00079368) level_1_zoom

0x1681,	// (0x00079371) level_2_zoom

0x168a,	// (0x0007937a) level_3_zoom

0x1693,	// (0x00079383) level_4_zoom

0x169c,	// (0x0007938c) level_5_zoom

0x16a5,	// (0x00079395) level_6_zoom

0x16ae,	// (0x0007939e) level_7_zoom

0x16b7,	// (0x000793a7) level_8_zoom

0x16c0,	// (0x000793b0) level_9_zoom

0x16d1,	// (0x000793c1) popup_phob_thumbnail_window_g1

0x16d9,	// (0x000793c9) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x00087094) popup_phob_thumbnail_window_g

0x8520,	// (0x00080210) level_1_location

0x8528,	// (0x00080218) level_2_location

0x8530,	// (0x00080220) level_3_location

0x853a,	// (0x0008022a) level_4_location

0x0b19,	// (0x00078809) level_5_location

0x73eb,	// (0x0007f0db) mce_icon_pane_g1

0x73f3,	// (0x0007f0e3) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x00087099) mce_icon_pane_g

0x73fb,	// (0x0007f0eb) main_mup_pane_g1_ParamLimits

0x73fb,	// (0x0007f0eb) main_mup_pane_g1

0x0883,	// (0x00078573) main_mup_pane_g2_ParamLimits

0x0883,	// (0x00078573) main_mup_pane_g2

0x0883,	// (0x00078573) main_mup_pane_g3_ParamLimits

0x0883,	// (0x00078573) main_mup_pane_g3

0x0883,	// (0x00078573) main_mup_pane_g4_ParamLimits

0x0883,	// (0x00078573) main_mup_pane_g4

0x0883,	// (0x00078573) main_mup_pane_g5_ParamLimits

0x0883,	// (0x00078573) main_mup_pane_g5

0x0883,	// (0x00078573) main_mup_pane_g6_ParamLimits

0x0883,	// (0x00078573) main_mup_pane_g6

0x0883,	// (0x00078573) main_mup_pane_g7_ParamLimits

0x0883,	// (0x00078573) main_mup_pane_g7

0x0883,	// (0x00078573) main_mup_pane_g8_ParamLimits

0x0883,	// (0x00078573) main_mup_pane_g8

0x0883,	// (0x00078573) main_mup_pane_g9_ParamLimits

0x0883,	// (0x00078573) main_mup_pane_g9

0x0883,	// (0x00078573) main_mup_pane_g10_ParamLimits

0x0883,	// (0x00078573) main_mup_pane_g10

0x0883,	// (0x00078573) main_mup_pane_g11_ParamLimits

0x0883,	// (0x00078573) main_mup_pane_g11

0x0875,	// (0x00078565) main_mup_pane_g12_ParamLimits

0x0875,	// (0x00078565) main_mup_pane_g12

0x0883,	// (0x00078573) main_mup_pane_g13_ParamLimits

0x0883,	// (0x00078573) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x0008709e) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x0008709e) main_mup_pane_g

0x0891,	// (0x00078581) main_mup_pane_t1_ParamLimits

0x0891,	// (0x00078581) main_mup_pane_t1

0x0891,	// (0x00078581) main_mup_pane_t2_ParamLimits

0x0891,	// (0x00078581) main_mup_pane_t2

0x0891,	// (0x00078581) main_mup_pane_t3_ParamLimits

0x0891,	// (0x00078581) main_mup_pane_t3

0x16e1,	// (0x000793d1) main_mup_pane_t4_ParamLimits

0x16e1,	// (0x000793d1) main_mup_pane_t4

0x16e1,	// (0x000793d1) main_mup_pane_t5_ParamLimits

0x16e1,	// (0x000793d1) main_mup_pane_t5

0x0b2b,	// (0x0007881b) main_mup_pane_t6_ParamLimits

0x0b2b,	// (0x0007881b) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x000870b9) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x000870b9) main_mup_pane_t

0xdf0b,	// (0x00085bfb) mup_progress_pane_ParamLimits

0xdf0b,	// (0x00085bfb) mup_progress_pane

0x740e,	// (0x0007f0fe) mup_visualizer_pane_ParamLimits

0x740e,	// (0x0007f0fe) mup_visualizer_pane

0x740e,	// (0x0007f0fe) mup_volume_pane_ParamLimits

0x740e,	// (0x0007f0fe) mup_volume_pane

0x0875,	// (0x00078565) mup_visualizer_pane_g1_ParamLimits

0x0875,	// (0x00078565) mup_visualizer_pane_g1

0x16f5,	// (0x000793e5) mup_visualizer_pane_g2_ParamLimits

0x16f5,	// (0x000793e5) mup_visualizer_pane_g2

0x0867,	// (0x00078557) mup_visualizer_pane_g3_ParamLimits

0x0867,	// (0x00078557) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x000870c6) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x000870c6) mup_visualizer_pane_g

0x0b59,	// (0x00078849) mup_volume_pane_g1

0x0b59,	// (0x00078849) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x000870cd) mup_volume_pane_g

0x0b59,	// (0x00078849) mup_progress_pane_g1

0x0b59,	// (0x00078849) mup_progress_pane_g2

0x0b59,	// (0x00078849) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x000870d2) mup_progress_pane_g

0xdc8e,	// (0x0008597e) bg_popup_window_pane_cp05

0x1703,	// (0x000793f3) heading_pane_cp02_ParamLimits

0x1703,	// (0x000793f3) heading_pane_cp02

0x171d,	// (0x0007940d) list_popup_blid_pane

0x1725,	// (0x00079415) list_blid_sat_info_pane_ParamLimits

0x1725,	// (0x00079415) list_blid_sat_info_pane

0x1738,	// (0x00079428) list_blid_sat_info_pane_g1

0x1740,	// (0x00079430) list_blid_sat_info_pane_t1

0x7506,	// (0x0007f1f6) mup_equalizer_pane_ParamLimits

0x7506,	// (0x0007f1f6) mup_equalizer_pane

0x7527,	// (0x0007f217) mup_equalizer_pane_cp1_ParamLimits

0x7527,	// (0x0007f217) mup_equalizer_pane_cp1

0x7548,	// (0x0007f238) mup_equalizer_pane_cp2_ParamLimits

0x7548,	// (0x0007f238) mup_equalizer_pane_cp2

0x7569,	// (0x0007f259) mup_equalizer_pane_cp3_ParamLimits

0x7569,	// (0x0007f259) mup_equalizer_pane_cp3

0x758a,	// (0x0007f27a) mup_equalizer_pane_cp4_ParamLimits

0x758a,	// (0x0007f27a) mup_equalizer_pane_cp4

0x75ab,	// (0x0007f29b) mup_equalizer_pane_cp5

0x75c1,	// (0x0007f2b1) mup_equalizer_pane_cp6

0x75d9,	// (0x0007f2c9) mup_equalizer_pane_cp7

0xe380,	// (0x00086070) bg_popup_call_poc_act_pane_g9

0xe388,	// (0x00086078) bg_popup_call_poc_act_pane_g10

0xe390,	// (0x00086080) bg_popup_call_poc_act_pane_g11

0x000a,

0xdee9,	// (0x00085bd9) mup_scale_pane

0xdf01,	// (0x00085bf1) mup_scale_pane_g1

0x174e,	// (0x0007943e) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x000870ee) mup_scale_pane_g

0x1772,	// (0x00079462) msg_data_pane

0x177a,	// (0x0007946a) scroll_pane_cp017

0x7603,	// (0x0007f2f3) bg_list_pane_cp04_ParamLimits

0x7603,	// (0x0007f2f3) bg_list_pane_cp04

0x1782,	// (0x00079472) msg_data_pane_g1

0x7629,	// (0x0007f319) msg_data_pane_g2

0x7633,	// (0x0007f323) msg_data_pane_g3

0x763b,	// (0x0007f32b) msg_data_pane_g4

0x7643,	// (0x0007f333) msg_data_pane_g5

0x764b,	// (0x0007f33b) msg_data_pane_g6

0x7653,	// (0x0007f343) msg_data_pane_g7

0x0006,

0xf40d,	// (0x000870fd) msg_data_pane_g

0x765b,	// (0x0007f34b) msg_text_pane_ParamLimits

0x765b,	// (0x0007f34b) msg_text_pane

0x769e,	// (0x0007f38e) qrid_highlight_pane_cp011_ParamLimits

0x769e,	// (0x0007f38e) qrid_highlight_pane_cp011

0xdc8e,	// (0x0008597e) msg_body_pane

0xdc8e,	// (0x0008597e) msg_header_pane

0x1793,	// (0x00079483) input_focus_pane_cp07

0x76c4,	// (0x0007f3b4) msg_header_pane_t1_ParamLimits

0x76c4,	// (0x0007f3b4) msg_header_pane_t1

0x76da,	// (0x0007f3ca) msg_header_pane_t2_ParamLimits

0x76da,	// (0x0007f3ca) msg_header_pane_t2

0x0001,

0xf421,	// (0x00087111) msg_header_pane_t_ParamLimits

0xf421,	// (0x00087111) msg_header_pane_t

0x17a8,	// (0x00079498) msg_body_pane_g1

0x76f1,	// (0x0007f3e1) msg_body_pane_t1_ParamLimits

0x76f1,	// (0x0007f3e1) msg_body_pane_t1

0x7722,	// (0x0007f412) msg_body_pane_t2_ParamLimits

0x7722,	// (0x0007f412) msg_body_pane_t2

0x7734,	// (0x0007f424) msg_body_pane_t3_ParamLimits

0x7734,	// (0x0007f424) msg_body_pane_t3

0x0002,

0xf426,	// (0x00087116) msg_body_pane_t_ParamLimits

0xf426,	// (0x00087116) msg_body_pane_t

0x7798,	// (0x0007f488) main_viewer_pane_g1_ParamLimits

0x7798,	// (0x0007f488) main_viewer_pane_g1

0x77a4,	// (0x0007f494) main_viewer_pane_g2_ParamLimits

0x77a4,	// (0x0007f494) main_viewer_pane_g2

0x77b0,	// (0x0007f4a0) main_viewer_pane_g3_ParamLimits

0x77b0,	// (0x0007f4a0) main_viewer_pane_g3

0x77c1,	// (0x0007f4b1) main_viewer_pane_g4_ParamLimits

0x77c1,	// (0x0007f4b1) main_viewer_pane_g4

0x77d2,	// (0x0007f4c2) main_viewer_pane_g5_ParamLimits

0x77d2,	// (0x0007f4c2) main_viewer_pane_g5

0x77d2,	// (0x0007f4c2) main_viewer_pane_g7_ParamLimits

0x77d2,	// (0x0007f4c2) main_viewer_pane_g7

0x1061,	// (0x00078d51) main_viewer_pane_g8_ParamLimits

0x1061,	// (0x00078d51) main_viewer_pane_g8

0x0007,

0xf436,	// (0x00087126) main_viewer_pane_g_ParamLimits

0xf436,	// (0x00087126) main_viewer_pane_g

0x17f2,	// (0x000794e2) viewer_content_pane_ParamLimits

0x17f2,	// (0x000794e2) viewer_content_pane

0x7810,	// (0x0007f500) main_postcard_pane_g1_ParamLimits

0x7810,	// (0x0007f500) main_postcard_pane_g1

0x781e,	// (0x0007f50e) main_postcard_pane_g2_ParamLimits

0x781e,	// (0x0007f50e) main_postcard_pane_g2

0x782c,	// (0x0007f51c) main_postcard_pane_g3_ParamLimits

0x782c,	// (0x0007f51c) main_postcard_pane_g3

0x0005,

0xf447,	// (0x00087137) main_postcard_pane_g_ParamLimits

0xf447,	// (0x00087137) main_postcard_pane_g

0x783c,	// (0x0007f52c) main_postcard_pane_g4

0xe4d2,	// (0x000861c2) smil_status_volume_pane_g2

0x7868,	// (0x0007f558) postcard_pane_ParamLimits

0x7868,	// (0x0007f558) postcard_pane

0x1d84,	// (0x00079a74) postcard_pane_g1_ParamLimits

0x1d84,	// (0x00079a74) postcard_pane_g1

0x789a,	// (0x0007f58a) postcard_pane_g2_ParamLimits

0x789a,	// (0x0007f58a) postcard_pane_g2

0x78a6,	// (0x0007f596) postcard_pane_g3_ParamLimits

0x78a6,	// (0x0007f596) postcard_pane_g3

0x180e,	// (0x000794fe) postcard_pane_g4_ParamLimits

0x180e,	// (0x000794fe) postcard_pane_g4

0x78b2,	// (0x0007f5a2) postcard_pane_g5_ParamLimits

0x78b2,	// (0x0007f5a2) postcard_pane_g5

0x78be,	// (0x0007f5ae) postcard_pane_g6_ParamLimits

0x78be,	// (0x0007f5ae) postcard_pane_g6

0x1800,	// (0x000794f0) postcard_pane_g7_ParamLimits

0x1800,	// (0x000794f0) postcard_pane_g7

0x0006,

0xf454,	// (0x00087144) postcard_pane_g_ParamLimits

0xf454,	// (0x00087144) postcard_pane_g

0x78ca,	// (0x0007f5ba) main_mp2_pane_g1_ParamLimits

0x78ca,	// (0x0007f5ba) main_mp2_pane_g1

0x78d6,	// (0x0007f5c6) main_mp2_pane_g2_ParamLimits

0x78d6,	// (0x0007f5c6) main_mp2_pane_g2

0x78e2,	// (0x0007f5d2) main_mp2_pane_g3_ParamLimits

0x78e2,	// (0x0007f5d2) main_mp2_pane_g3

0x0002,

0xf463,	// (0x00087153) main_mp2_pane_g_ParamLimits

0xf463,	// (0x00087153) main_mp2_pane_g

0x78ee,	// (0x0007f5de) main_mp2_pane_t1_ParamLimits

0x78ee,	// (0x0007f5de) main_mp2_pane_t1

0x7905,	// (0x0007f5f5) main_mp2_pane_t2_ParamLimits

0x7905,	// (0x0007f5f5) main_mp2_pane_t2

0x7919,	// (0x0007f609) main_mp2_pane_t3_ParamLimits

0x7919,	// (0x0007f609) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x0008715a) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x0008715a) main_mp2_pane_t

0x181c,	// (0x0007950c) pec_content_pane_ParamLimits

0x181c,	// (0x0007950c) pec_content_pane

0x0cba,	// (0x000789aa) scroll_pane_cp015

0x182e,	// (0x0007951e) pec_attribute_pane_ParamLimits

0x182e,	// (0x0007951e) pec_attribute_pane

0x792b,	// (0x0007f61b) pec_content_pane_g1_ParamLimits

0x792b,	// (0x0007f61b) pec_content_pane_g1

0x183e,	// (0x0007952e) pec_content_pane_t1_ParamLimits

0x183e,	// (0x0007952e) pec_content_pane_t1

0x1850,	// (0x00079540) pec_content_pane_t2_ParamLimits

0x1850,	// (0x00079540) pec_content_pane_t2

0x0001,

0xf471,	// (0x00087161) pec_content_pane_t_ParamLimits

0xf471,	// (0x00087161) pec_content_pane_t

0x7937,	// (0x0007f627) list_single_graphic_pane_cp01_ParamLimits

0x7937,	// (0x0007f627) list_single_graphic_pane_cp01

0xdee9,	// (0x00085bd9) bg_popup_sub_pane_cp04

0x1862,	// (0x00079552) popup_mup_playback_window_g1

0x186e,	// (0x0007955e) popup_mup_playback_window_t1

0x1883,	// (0x00079573) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x00087166) popup_mup_playback_window_t

0x18ba,	// (0x000795aa) main_image_pane_g1_ParamLimits

0x18ba,	// (0x000795aa) main_image_pane_g1

0x18fd,	// (0x000795ed) scroll_pane_cp018_ParamLimits

0x18fd,	// (0x000795ed) scroll_pane_cp018

0x1915,	// (0x00079605) scroll_pane_cp016_ParamLimits

0x1915,	// (0x00079605) scroll_pane_cp016

0x79d0,	// (0x0007f6c0) smil2_image_pane_ParamLimits

0x79d0,	// (0x0007f6c0) smil2_image_pane

0x7a00,	// (0x0007f6f0) smil2_root_pane_ParamLimits

0x7a00,	// (0x0007f6f0) smil2_root_pane

0x7a2c,	// (0x0007f71c) smil2_text_pane_ParamLimits

0x7a2c,	// (0x0007f71c) smil2_text_pane

0xdc8e,	// (0x0008597e) bg_list_pane_cp06

0x1951,	// (0x00079641) grid_radio_pane

0xdc8e,	// (0x0008597e) bg_popup_window_pane_cp06

0x1959,	// (0x00079649) main_fmradio_pane_t1

0xe398,	// (0x00086088) heading_pane_cp04

0x1967,	// (0x00079657) main_fmradio_pane_t2

0xe3a0,	// (0x00086090) popup_cale_lunar_info_window_g1

0x1975,	// (0x00079665) main_fmradio_pane_t3

0xe3a8,	// (0x00086098) popup_cale_lunar_info_window_g2

0x1983,	// (0x00079673) main_fmradio_pane_t4

0x0001,

0x1991,	// (0x00079681) main_fmradio_pane_t5

0x0004,

0xf556,	// (0x00087246) popup_cale_lunar_info_window_g

0xf48b,	// (0x0008717b) main_fmradio_pane_t

0x199f,	// (0x0007968f) wait_bar_pane_cp03

0x19a7,	// (0x00079697) cell_fmradio_pane_ParamLimits

0x19a7,	// (0x00079697) cell_fmradio_pane

0x1800,	// (0x000794f0) cell_fmradio_pane_g1_ParamLimits

0x1800,	// (0x000794f0) cell_fmradio_pane_g1

0xdc8e,	// (0x0008597e) grid_highlight_pane_cp011

0x19ba,	// (0x000796aa) poc_content_pane_ParamLimits

0x19ba,	// (0x000796aa) poc_content_pane

0x19cc,	// (0x000796bc) scroll_pane_cp019

0x7a6c,	// (0x0007f75c) popup_call_poc_act_window_ParamLimits

0x7a6c,	// (0x0007f75c) popup_call_poc_act_window

0x7a79,	// (0x0007f769) popup_call_poc_inact_window_ParamLimits

0x7a79,	// (0x0007f769) popup_call_poc_inact_window

0xf52d,	// (0x0008721d) bg_popup_call_poc_act_pane_g

0xe310,	// (0x00086000) bg_popup_call_poc_inact_pane_g1

0xe318,	// (0x00086008) bg_popup_call_poc_inact_pane_g2

0x19d4,	// (0x000796c4) popup_call_poc_act_window_g2

0xe320,	// (0x00086010) bg_popup_call_poc_inact_pane_g3

0xe328,	// (0x00086018) bg_popup_call_poc_inact_pane_g4

0xe330,	// (0x00086020) bg_popup_call_poc_inact_pane_g5

0x19dc,	// (0x000796cc) popup_call_poc_act_window_t1_ParamLimits

0x19dc,	// (0x000796cc) popup_call_poc_act_window_t1

0x1a04,	// (0x000796f4) popup_call_poc_act_window_t2_ParamLimits

0x1a04,	// (0x000796f4) popup_call_poc_act_window_t2

0x1a2c,	// (0x0007971c) popup_call_poc_act_window_t3_ParamLimits

0x1a2c,	// (0x0007971c) popup_call_poc_act_window_t3

0x1a54,	// (0x00079744) popup_call_poc_act_window_t4_ParamLimits

0x1a54,	// (0x00079744) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x00087186) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x00087186) popup_call_poc_act_window_t

0xe338,	// (0x00086028) bg_popup_call_poc_inact_pane_g6

0xe340,	// (0x00086030) bg_popup_call_poc_inact_pane_g7

0xe348,	// (0x00086038) bg_popup_call_poc_inact_pane_g8

0x1a66,	// (0x00079756) popup_call_poc_inact_window_g2

0xe350,	// (0x00086040) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf51a,	// (0x0008720a) bg_popup_call_poc_inact_pane_g

0x1a6e,	// (0x0007975e) popup_call_poc_inact_window_t1_ParamLimits

0x1a6e,	// (0x0007975e) popup_call_poc_inact_window_t1

0x1a83,	// (0x00079773) popup_call_poc_inact_window_t2_ParamLimits

0x1a83,	// (0x00079773) popup_call_poc_inact_window_t2

0x1a98,	// (0x00079788) popup_call_poc_inact_window_t3_ParamLimits

0x1a98,	// (0x00079788) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x0008718f) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x0008718f) popup_call_poc_inact_window_t

0xe44a,	// (0x0008613a) context_pane_ParamLimits

0x8838,	// (0x00080528) signal_pane_ParamLimits

0x0b19,	// (0x00078809) main_call2_pane

0x87ab,	// (0x0008049b) popup_phob_thumbnail2_window_ParamLimits

0x87ab,	// (0x0008049b) popup_phob_thumbnail2_window

0x7746,	// (0x0007f436) aid_hotspot_pointer_arrow_pane

0x774e,	// (0x0007f43e) aid_hotspot_pointer_hand_pane

0x84e8,	// (0x000801d8) phob_pre_status_pane_g5

0xdf64,	// (0x00085c54) cams_zoom_pane_ParamLimits

0xdf64,	// (0x00085c54) image_vga_pane_ParamLimits

0x0875,	// (0x00078565) main_camera_pane_g1_ParamLimits

0x0875,	// (0x00078565) main_camera_pane_g2_ParamLimits

0x0875,	// (0x00078565) main_camera_pane_g3_ParamLimits

0x0875,	// (0x00078565) main_camera_pane_g4_ParamLimits

0x0875,	// (0x00078565) main_camera_pane_g5_ParamLimits

0x0875,	// (0x00078565) main_camera_pane_g6_ParamLimits

0x0875,	// (0x00078565) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00086eb5) main_camera_pane_g_ParamLimits

0x16e1,	// (0x000793d1) main_camera_pane_t1_ParamLimits

0x16e1,	// (0x000793d1) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00086ec6) main_camera_pane_t_ParamLimits

0xdee9,	// (0x00085bd9) bg_popup_preview_window_pane_cp01_ParamLimits

0xdee9,	// (0x00085bd9) bg_popup_preview_window_pane_cp01

0x1aad,	// (0x0007979d) popup_phob_thumbnail2_window_g1_ParamLimits

0x1aad,	// (0x0007979d) popup_phob_thumbnail2_window_g1

0xdc8e,	// (0x0008597e) call2_cli_visual_pane

0x7a95,	// (0x0007f785) popup_call2_audio_conf_window_ParamLimits

0x7a95,	// (0x0007f785) popup_call2_audio_conf_window

0x7aaa,	// (0x0007f79a) popup_call2_audio_first_window_ParamLimits

0x7aaa,	// (0x0007f79a) popup_call2_audio_first_window

0x7b48,	// (0x0007f838) popup_call2_audio_in_window_ParamLimits

0x7b48,	// (0x0007f838) popup_call2_audio_in_window

0x7b8a,	// (0x0007f87a) popup_call2_audio_out_window_ParamLimits

0x7b8a,	// (0x0007f87a) popup_call2_audio_out_window

0x7bec,	// (0x0007f8dc) popup_call2_audio_second_window_ParamLimits

0x7bec,	// (0x0007f8dc) popup_call2_audio_second_window

0x7c4a,	// (0x0007f93a) popup_call2_audio_wait_window_ParamLimits

0x7c4a,	// (0x0007f93a) popup_call2_audio_wait_window

0xdc8e,	// (0x0008597e) bg_popup_call2_act_pane_cp03

0xdecb,	// (0x00085bbb) list_conf_pane_cp

0x1ab9,	// (0x000797a9) popup_call2_audio_conf_window_t1

0x1301,	// (0x00078ff1) list_single_graphic_popup_conf2_pane_ParamLimits

0x1301,	// (0x00078ff1) list_single_graphic_popup_conf2_pane

0x1314,	// (0x00079004) list_highlight_pane_cp04

0x1ac7,	// (0x000797b7) list_single_graphic_popup_conf2_pane_g1

0x1325,	// (0x00079015) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x00087196) list_single_graphic_popup_conf2_pane_g

0x1ad1,	// (0x000797c1) list_single_graphic_popup_conf2_pane_t1

0x1adf,	// (0x000797cf) bg_popup_call2_act_pane_cp01_ParamLimits

0x1adf,	// (0x000797cf) bg_popup_call2_act_pane_cp01

0x1b69,	// (0x00079859) call_type_pane_cp05_ParamLimits

0x1b69,	// (0x00079859) call_type_pane_cp05

0x1bbd,	// (0x000798ad) popup_call2_audio_second_window_g1_ParamLimits

0x1bbd,	// (0x000798ad) popup_call2_audio_second_window_g1

0x1c11,	// (0x00079901) popup_call2_audio_second_window_g2_ParamLimits

0x1c11,	// (0x00079901) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x0008719b) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x0008719b) popup_call2_audio_second_window_g

0x1c76,	// (0x00079966) popup_call2_audio_second_window_t1_ParamLimits

0x1c76,	// (0x00079966) popup_call2_audio_second_window_t1

0x1d31,	// (0x00079a21) popup_call2_audio_second_window_t2_ParamLimits

0x1d31,	// (0x00079a21) popup_call2_audio_second_window_t2

0x7c89,	// (0x0007f979) popup_call2_audio_second_window_t3_ParamLimits

0x7c89,	// (0x0007f979) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x000871a2) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x000871a2) popup_call2_audio_second_window_t

0xdc8e,	// (0x0008597e) bg_popup_call2_in_pane_cp02

0xdc98,	// (0x00085988) call_type_pane_cp04

0x7d7c,	// (0x0007fa6c) popup_call2_audio_wait_window_g1

0x7d84,	// (0x0007fa74) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x000871ab) popup_call2_audio_wait_window_g

0xdcb0,	// (0x000859a0) popup_call2_audio_wait_window_t3

0x7d8c,	// (0x0007fa7c) bg_popup_call2_act_pane_ParamLimits

0x7d8c,	// (0x0007fa7c) bg_popup_call2_act_pane

0x7e4c,	// (0x0007fb3c) call_type_pane_cp03_ParamLimits

0x7e4c,	// (0x0007fb3c) call_type_pane_cp03

0x7eb0,	// (0x0007fba0) popup_call2_audio_first_window_g1_ParamLimits

0x7eb0,	// (0x0007fba0) popup_call2_audio_first_window_g1

0x7f20,	// (0x0007fc10) popup_call2_audio_first_window_g2_ParamLimits

0x7f20,	// (0x0007fc10) popup_call2_audio_first_window_g2

0x1d84,	// (0x00079a74) popup_call2_audio_first_window_g3_ParamLimits

0x1d84,	// (0x00079a74) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x000871b0) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x000871b0) popup_call2_audio_first_window_g

0x7ffe,	// (0x0007fcee) popup_call2_audio_first_window_t1_ParamLimits

0x7ffe,	// (0x0007fcee) popup_call2_audio_first_window_t1

0x8101,	// (0x0007fdf1) popup_call2_audio_first_window_t4_ParamLimits

0x8101,	// (0x0007fdf1) popup_call2_audio_first_window_t4

0x81e4,	// (0x0007fed4) popup_call2_audio_first_window_t5_ParamLimits

0x81e4,	// (0x0007fed4) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x000871bb) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x000871bb) popup_call2_audio_first_window_t

0xdee1,	// (0x00085bd1) bg_popup_call2_act_pane_g1

0xe3b0,	// (0x000860a0) popup_cale_lunar_info_window_t1

0xe3be,	// (0x000860ae) popup_cale_lunar_info_window_t2

0xe3cc,	// (0x000860bc) popup_cale_lunar_info_window_t3

0xdc8e,	// (0x0008597e) bg_popup_call2_bubble_pane

0x82e5,	// (0x0007ffd5) bg_popup_call2_in_pane_cp01_ParamLimits

0x82e5,	// (0x0007ffd5) bg_popup_call2_in_pane_cp01

0xd96a,	// (0x0008565a) call_type_pane_cp02

0x832d,	// (0x0008001d) popup_call2_audio_out_window_g1_ParamLimits

0x832d,	// (0x0008001d) popup_call2_audio_out_window_g1

0x8359,	// (0x00080049) popup_call2_audio_out_window_g2_ParamLimits

0x8359,	// (0x00080049) popup_call2_audio_out_window_g2

0x8381,	// (0x00080071) popup_call2_audio_out_window_g3_ParamLimits

0x8381,	// (0x00080071) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x000871c4) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x000871c4) popup_call2_audio_out_window_g

0x83bc,	// (0x000800ac) popup_call2_audio_out_window_t1_ParamLimits

0x83bc,	// (0x000800ac) popup_call2_audio_out_window_t1

0xdf72,	// (0x00085c62) popup_call2_audio_out_window_t2_ParamLimits

0xdf72,	// (0x00085c62) popup_call2_audio_out_window_t2

0xdfc6,	// (0x00085cb6) popup_call2_audio_out_window_t3_ParamLimits

0xdfc6,	// (0x00085cb6) popup_call2_audio_out_window_t3

0xdfdc,	// (0x00085ccc) popup_call2_audio_out_window_t4_ParamLimits

0xdfdc,	// (0x00085ccc) popup_call2_audio_out_window_t4

0xdff2,	// (0x00085ce2) popup_call2_audio_out_window_t5_ParamLimits

0xdff2,	// (0x00085ce2) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x000871cd) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x000871cd) popup_call2_audio_out_window_t

0xe056,	// (0x00085d46) bg_popup_call2_in_pane_ParamLimits

0xe056,	// (0x00085d46) bg_popup_call2_in_pane

0xe0b2,	// (0x00085da2) popup_call2_audio_in_window_g1_ParamLimits

0xe0b2,	// (0x00085da2) popup_call2_audio_in_window_g1

0xe0ea,	// (0x00085dda) popup_call2_audio_in_window_g2_ParamLimits

0xe0ea,	// (0x00085dda) popup_call2_audio_in_window_g2

0xe122,	// (0x00085e12) popup_call2_audio_in_window_g3_ParamLimits

0xe122,	// (0x00085e12) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x000871da) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x000871da) popup_call2_audio_in_window_g

0xe17a,	// (0x00085e6a) popup_call2_audio_in_window_t1_ParamLimits

0xe17a,	// (0x00085e6a) popup_call2_audio_in_window_t1

0xe1fa,	// (0x00085eea) popup_call2_audio_in_window_t2_ParamLimits

0xe1fa,	// (0x00085eea) popup_call2_audio_in_window_t2

0xe27a,	// (0x00085f6a) popup_call2_audio_in_window_t3_ParamLimits

0xe27a,	// (0x00085f6a) popup_call2_audio_in_window_t3

0xe294,	// (0x00085f84) popup_call2_audio_in_window_t4_ParamLimits

0xe294,	// (0x00085f84) popup_call2_audio_in_window_t4

0xe2a6,	// (0x00085f96) popup_call2_audio_in_window_t5_ParamLimits

0xe2a6,	// (0x00085f96) popup_call2_audio_in_window_t5

0xe2bb,	// (0x00085fab) popup_call2_audio_in_window_t6_ParamLimits

0xe2bb,	// (0x00085fab) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x000871e3) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x000871e3) popup_call2_audio_in_window_t

0xdee1,	// (0x00085bd1) bg_popup_call2_in_pane_g1

0xe3da,	// (0x000860ca) popup_cale_lunar_info_window_t4

0x0003,

0xf55b,	// (0x0008724b) popup_cale_lunar_info_window_t

0xdee9,	// (0x00085bd9) bg_popup_call2_rect_pane_ParamLimits

0xdee9,	// (0x00085bd9) bg_popup_call2_rect_pane

0xdc8e,	// (0x0008597e) call2_cli_visual_graphic_pane

0xdc8e,	// (0x0008597e) call2_cli_visual_text_pane

0x8874,	// (0x00080564) smil_status_volume_pane_g3

0x0002,

0xdf01,	// (0x00085bf1) call2_cli_visual_graphic_pane_g1

0xdf01,	// (0x00085bf1) call2_cli_visual_graphic_pane_g2

0xdf01,	// (0x00085bf1) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x000871f0) call2_cli_visual_graphic_pane_g

0xe2d0,	// (0x00085fc0) bg_popup_call2_rect_pane_g1

0x09f6,	// (0x000786e6) bg_popup_call2_rect_pane_g2

0xe2d8,	// (0x00085fc8) bg_popup_call2_rect_pane_g3

0xe2e0,	// (0x00085fd0) bg_popup_call2_rect_pane_g4

0xe2e8,	// (0x00085fd8) bg_popup_call2_rect_pane_g5

0xe2f0,	// (0x00085fe0) bg_popup_call2_rect_pane_g6

0xe2f8,	// (0x00085fe8) bg_popup_call2_rect_pane_g7

0xe300,	// (0x00085ff0) bg_popup_call2_rect_pane_g8

0xe308,	// (0x00085ff8) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x000871f7) bg_popup_call2_rect_pane_g

0xe310,	// (0x00086000) bg_popup_call2_bubble_pane_g1

0xe318,	// (0x00086008) bg_popup_call2_bubble_pane_g2

0xe320,	// (0x00086010) bg_popup_call2_bubble_pane_g3

0xe328,	// (0x00086018) bg_popup_call2_bubble_pane_g4

0xe330,	// (0x00086020) bg_popup_call2_bubble_pane_g5

0xe338,	// (0x00086028) bg_popup_call2_bubble_pane_g6

0xe340,	// (0x00086030) bg_popup_call2_bubble_pane_g7

0xe348,	// (0x00086038) bg_popup_call2_bubble_pane_g8

0xe350,	// (0x00086040) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x0008720a) bg_popup_call2_bubble_pane_g

0x5823,	// (0x0007d513) aid_cale_week_size_cell_pane

0xdee9,	// (0x00085bd9) aid_cams_cif_uncrop_pane_ParamLimits

0xdee9,	// (0x00085bd9) aid_cams_cif_uncrop_pane

0x5e17,	// (0x0007db07) aid_cams_size_cell_ParamLimits

0x5e17,	// (0x0007db07) aid_cams_size_cell

0x5e23,	// (0x0007db13) grid_cams_pane_ParamLimits

0x5e31,	// (0x0007db21) linegrid_cams_pane_ParamLimits

0x5f08,	// (0x0007dbf8) call_video_pane_t1

0x5f29,	// (0x0007dc19) call_video_pane_t2

0x0001,

0xf222,	// (0x00086f12) call_video_pane_t

0x6470,	// (0x0007e160) aid_cale_month_size_cell_pane_ParamLimits

0x6470,	// (0x0007e160) aid_cale_month_size_cell_pane

0xf59f,	// (0x0008728f) smil_status_volume_pane_g

0x8881,	// (0x00080571) volume_smil_pane_ParamLimits

0x50c0,	// (0x0007cdb0) aid_popup2_width_pane

0x5714,	// (0x0007d404) cell_qdial_pane_g4_ParamLimits

0x5714,	// (0x0007d404) cell_qdial_pane_g4

0x7320,	// (0x0007f010) aid_blid_cardinal_pane_ParamLimits

0x7330,	// (0x0007f020) aid_blid_destination_pane_ParamLimits

0x7330,	// (0x0007f020) aid_blid_destination_pane

0xdee9,	// (0x00085bd9) bg_popup_call_poc_act_pane_ParamLimits

0xdee9,	// (0x00085bd9) bg_popup_call_poc_act_pane

0xdee9,	// (0x00085bd9) bg_popup_call_poc_inact_pane_ParamLimits

0xdee9,	// (0x00085bd9) bg_popup_call_poc_inact_pane

0xe358,	// (0x00086048) bg_popup_call_poc_act_pane_g1

0xe360,	// (0x00086050) bg_popup_call_poc_act_pane_g2

0xe368,	// (0x00086058) bg_popup_call_poc_act_pane_g3

0xe328,	// (0x00086018) bg_popup_call_poc_act_pane_g4

0xe330,	// (0x00086020) bg_popup_call_poc_act_pane_g5

0xe370,	// (0x00086060) bg_popup_call_poc_act_pane_g6

0xe340,	// (0x00086030) bg_popup_call_poc_act_pane_g7

0xe378,	// (0x00086068) bg_popup_call_poc_act_pane_g8

0xdc8e,	// (0x0008597e) main_usb_pane

0x86da,	// (0x000803ca) popup_cale_lunar_info_window

0x6252,	// (0x0007df42) im_reading_pane_t1_ParamLimits

0x0c12,	// (0x00078902) list_im_pane_ParamLimits

0x0c23,	// (0x00078913) scroll_pane_cp07_ParamLimits

0xdc8e,	// (0x0008597e) grid_highlight_pane_cp012

0xdee9,	// (0x00085bd9) mup_scale_pane_ParamLimits

0x1d84,	// (0x00079a74) main_usb_pane_g1_ParamLimits

0x1d84,	// (0x00079a74) main_usb_pane_g1

0x8450,	// (0x00080140) main_usb_pane_g2_ParamLimits

0x8450,	// (0x00080140) main_usb_pane_g2

0x0001,

0xf544,	// (0x00087234) main_usb_pane_g_ParamLimits

0xf544,	// (0x00087234) main_usb_pane_g

0x845c,	// (0x0008014c) main_usb_pane_t1_ParamLimits

0x845c,	// (0x0008014c) main_usb_pane_t1

0x846e,	// (0x0008015e) main_usb_pane_t2_ParamLimits

0x846e,	// (0x0008015e) main_usb_pane_t2

0x8480,	// (0x00080170) main_usb_pane_t3_ParamLimits

0x8480,	// (0x00080170) main_usb_pane_t3

0x8492,	// (0x00080182) main_usb_pane_t4_ParamLimits

0x8492,	// (0x00080182) main_usb_pane_t4

0x84a4,	// (0x00080194) main_usb_pane_t5_ParamLimits

0x84a4,	// (0x00080194) main_usb_pane_t5

0x84b6,	// (0x000801a6) main_usb_pane_t6_ParamLimits

0x84b6,	// (0x000801a6) main_usb_pane_t6

0x0005,

0xf549,	// (0x00087239) main_usb_pane_t_ParamLimits

0x72c6,	// (0x0007efb6) aid_text_placing

0x72d2,	// (0x0007efc2) main_location2_pane_t1_ParamLimits

0x72e6,	// (0x0007efd6) main_location2_pane_t2_ParamLimits

0x72fa,	// (0x0007efea) main_location2_pane_t3_ParamLimits

0x730e,	// (0x0007effe) main_location2_pane_t4_ParamLimits

0x730e,	// (0x0007effe) main_location2_pane_t4

0xf363,	// (0x00087053) main_location2_pane_t_ParamLimits

0xdf25,	// (0x00085c15) find_pinb_pane_g2_ParamLimits

0xdf25,	// (0x00085c15) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00086dca) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00086dca) find_pinb_pane_g

0xdf31,	// (0x00085c21) find_pinb_pane_t1_ParamLimits

0xdf43,	// (0x00085c33) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00086dcf) find_pinb_pane_t_ParamLimits

0xdc8e,	// (0x0008597e) main_call3_pane

0x6a13,	// (0x0007e703) cale_month_day_heading_pane_t1_ParamLimits

0x6a99,	// (0x0007e789) cale_month_day_heading_pane_t2_ParamLimits

0x6b12,	// (0x0007e802) cale_month_day_heading_pane_t3_ParamLimits

0x6b8b,	// (0x0007e87b) cale_month_day_heading_pane_t4_ParamLimits

0x6c04,	// (0x0007e8f4) cale_month_day_heading_pane_t5_ParamLimits

0x6c7d,	// (0x0007e96d) cale_month_day_heading_pane_t6_ParamLimits

0x6cf6,	// (0x0007e9e6) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00086f4a) cale_month_day_heading_pane_t_ParamLimits

0x0e79,	// (0x00078b69) smil_status_volume_pane

0x7882,	// (0x0007f572) postcard_address_pane_ParamLimits

0x7882,	// (0x0007f572) postcard_address_pane

0x788e,	// (0x0007f57e) postcard_message_pane_ParamLimits

0x788e,	// (0x0007f57e) postcard_message_pane

0x841b,	// (0x0008010b) call2_cli_visual_pane_t1_ParamLimits

0x841b,	// (0x0008010b) call2_cli_visual_pane_t1

0xe4fd,	// (0x000861ed) postcard_message_pane_t1_ParamLimits

0xe4fd,	// (0x000861ed) postcard_message_pane_t1

0xe4e5,	// (0x000861d5) postcard_address_pane_t1_ParamLimits

0xe4e5,	// (0x000861d5) postcard_address_pane_t1

0x89b2,	// (0x000806a2) popup_call3_audio_in_window_ParamLimits

0x89b2,	// (0x000806a2) popup_call3_audio_in_window

0x8896,	// (0x00080586) bg_popup_call3_in_pane_ParamLimits

0x8896,	// (0x00080586) bg_popup_call3_in_pane

0x88f8,	// (0x000805e8) popup_call3_audio_in_window_g1_ParamLimits

0x88f8,	// (0x000805e8) popup_call3_audio_in_window_g1

0x8910,	// (0x00080600) popup_call3_audio_in_window_g2_ParamLimits

0x8910,	// (0x00080600) popup_call3_audio_in_window_g2

0x8928,	// (0x00080618) popup_call3_audio_in_window_g3_ParamLimits

0x8928,	// (0x00080618) popup_call3_audio_in_window_g3

0x0003,

0xf5a6,	// (0x00087296) popup_call3_audio_in_window_g_ParamLimits

0xf5a6,	// (0x00087296) popup_call3_audio_in_window_g

0x8950,	// (0x00080640) popup_call3_audio_in_window_t1_ParamLimits

0x8950,	// (0x00080640) popup_call3_audio_in_window_t1

0x8978,	// (0x00080668) popup_call3_audio_in_window_t2_ParamLimits

0x8978,	// (0x00080668) popup_call3_audio_in_window_t2

0x89a0,	// (0x00080690) popup_call3_audio_in_window_t3_ParamLimits

0x89a0,	// (0x00080690) popup_call3_audio_in_window_t3

0x0002,

0xf5af,	// (0x0008729f) popup_call3_audio_in_window_t_ParamLimits

0xf5af,	// (0x0008729f) popup_call3_audio_in_window_t

0x0b19,	// (0x00078809) bg_popup_call3_rect_pane

0xe2d0,	// (0x00085fc0) bg_popup_call3_rect_pane_g1

0x09f6,	// (0x000786e6) bg_popup_call3_rect_pane_g2

0xe2d8,	// (0x00085fc8) bg_popup_call3_rect_pane_g3

0xe2e0,	// (0x00085fd0) bg_popup_call3_rect_pane_g4

0xe2e8,	// (0x00085fd8) bg_popup_call3_rect_pane_g5

0xe2f0,	// (0x00085fe0) bg_popup_call3_rect_pane_g6

0xe2f8,	// (0x00085fe8) bg_popup_call3_rect_pane_g7

0xd871,	// (0x00085561) mup_visualizer_osc_pane

0xd871,	// (0x00085561) mup_visualizer_spec_pane

0x88b6,	// (0x000805a6) call3_video_qcif_pane_ParamLimits

0x88b6,	// (0x000805a6) call3_video_qcif_pane

0x88c8,	// (0x000805b8) call3_video_qcif_uncrop_pane_ParamLimits

0x88c8,	// (0x000805b8) call3_video_qcif_uncrop_pane

0x88d6,	// (0x000805c6) call3_video_subqcif_pane_ParamLimits

0x88d6,	// (0x000805c6) call3_video_subqcif_pane

0x88e8,	// (0x000805d8) call3_video_subqcif_uncrop_pane_ParamLimits

0x88e8,	// (0x000805d8) call3_video_subqcif_uncrop_pane

0x8940,	// (0x00080630) popup_call3_audio_in_window_g4_ParamLimits

0x8940,	// (0x00080630) popup_call3_audio_in_window_g4

0xd871,	// (0x00085561) mup_spec_half_pane

0xd871,	// (0x00085561) mup_spec_half_pane_cp

0xd871,	// (0x00085561) mup_osc_middle_pane

0x0b59,	// (0x00078849) mup_visualizer_osc_pane_g1

0xe498,	// (0x00086188) mup_spec_bar_pane_ParamLimits

0xe498,	// (0x00086188) mup_spec_bar_pane

0x0b59,	// (0x00078849) mup_spec_bar_pane_g1

0x0b59,	// (0x00078849) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x000870cd) mup_spec_bar_pane_g

0x5823,	// (0x0007d513) aid_cale_week_size_cell_pane_ParamLimits

0x5838,	// (0x0007d528) bg_cale_heading_pane_ParamLimits

0x0a7b,	// (0x0007876b) bg_cale_pane_cp01_ParamLimits

0x5858,	// (0x0007d548) cale_week_corner_pane_ParamLimits

0x5872,	// (0x0007d562) cale_week_day_heading_pane_ParamLimits

0x5892,	// (0x0007d582) cale_week_scroll_pane_g1_ParamLimits

0x58ad,	// (0x0007d59d) cale_week_scroll_pane_g2_ParamLimits

0x58c0,	// (0x0007d5b0) cale_week_scroll_pane_g3_ParamLimits

0x58d3,	// (0x0007d5c3) cale_week_scroll_pane_g4_ParamLimits

0x58e6,	// (0x0007d5d6) cale_week_scroll_pane_g5_ParamLimits

0x58f9,	// (0x0007d5e9) cale_week_scroll_pane_g6_ParamLimits

0x590c,	// (0x0007d5fc) cale_week_scroll_pane_g7_ParamLimits

0x5921,	// (0x0007d611) cale_week_scroll_pane_g8_ParamLimits

0x5936,	// (0x0007d626) cale_week_scroll_pane_g9_ParamLimits

0x5949,	// (0x0007d639) cale_week_scroll_pane_g10_ParamLimits

0x595c,	// (0x0007d64c) cale_week_scroll_pane_g11_ParamLimits

0x596f,	// (0x0007d65f) cale_week_scroll_pane_g12_ParamLimits

0x5986,	// (0x0007d676) cale_week_scroll_pane_g13_ParamLimits

0x59a1,	// (0x0007d691) cale_week_scroll_pane_g14_ParamLimits

0x59bc,	// (0x0007d6ac) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00086e5b) cale_week_scroll_pane_g_ParamLimits

0x59ec,	// (0x0007d6dc) cale_week_time_pane_ParamLimits

0x5a01,	// (0x0007d6f1) grid_cale_week_pane_ParamLimits

0x0a98,	// (0x00078788) listscroll_cale_week_pane_t1

0x0aaa,	// (0x0007879a) scroll_pane_cp08_ParamLimits

0x64e4,	// (0x0007e1d4) cale_month_corner_pane_ParamLimits

0x0e43,	// (0x00078b33) cale_month_pane_t1

0x6996,	// (0x0007e686) cale_month_week_pane_ParamLimits

0x1d84,	// (0x00079a74) popup_call_status_window_g1_ParamLimits

0x711d,	// (0x0007ee0d) popup_call_status_window_g2_ParamLimits

0x7129,	// (0x0007ee19) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x00086fda) popup_call_status_window_g_ParamLimits

0x1235,	// (0x00078f25) aid_call2_pane

0x76b8,	// (0x0007f3a8) msg_header_pane_g1

0x7882,	// (0x0007f572) postcard_address2_pane_ParamLimits

0x7882,	// (0x0007f572) postcard_address2_pane

0x788e,	// (0x0007f57e) postcard_message2_pane_ParamLimits

0x788e,	// (0x0007f57e) postcard_message2_pane

0x8846,	// (0x00080536) message2_row_pane_ParamLimits

0x8846,	// (0x00080536) message2_row_pane

0x8861,	// (0x00080551) address2_row_pane_ParamLimits

0x8861,	// (0x00080551) address2_row_pane

0xe465,	// (0x00086155) postcard_message2_row_pane_g1

0xe46d,	// (0x0008615d) postcard_message2_row_pane_t1

0xe465,	// (0x00086155) address2_row_pane_g1

0xe46d,	// (0x0008615d) address2_row_pane_t1

0x5c87,	// (0x0007d977) aid_size_cell_vorec

0xdc8e,	// (0x0008597e) main_rss_pane

0xe47b,	// (0x0008616b) rss_list_single_pane_ParamLimits

0xe47b,	// (0x0008616b) rss_list_single_pane

0xe489,	// (0x00086179) rss_list_single_pane_t1

0xe489,	// (0x00086179) rss_list_single_pane_t2

0x0001,

0xf59a,	// (0x0008728a) rss_list_single_pane_t

0xdc8e,	// (0x0008597e) main_camera2_pane

0xdc8e,	// (0x0008597e) main_video2_pane

0x5368,	// (0x0007d058) cams_zoom_pane_cp2_ParamLimits

0x5368,	// (0x0007d058) cams_zoom_pane_cp2

0x5368,	// (0x0007d058) image2_vga_pane_ParamLimits

0x5368,	// (0x0007d058) image2_vga_pane

0x12d4,	// (0x00078fc4) main_camera2_pane_g1_ParamLimits

0x12d4,	// (0x00078fc4) main_camera2_pane_g1

0x12d4,	// (0x00078fc4) main_camera2_pane_g2_ParamLimits

0x12d4,	// (0x00078fc4) main_camera2_pane_g2

0x12d4,	// (0x00078fc4) main_camera2_pane_g3_ParamLimits

0x12d4,	// (0x00078fc4) main_camera2_pane_g3

0x12d4,	// (0x00078fc4) main_camera2_pane_g4_ParamLimits

0x12d4,	// (0x00078fc4) main_camera2_pane_g4

0x12d4,	// (0x00078fc4) main_camera2_pane_g5_ParamLimits

0x12d4,	// (0x00078fc4) main_camera2_pane_g5

0x12d4,	// (0x00078fc4) main_camera2_pane_g6_ParamLimits

0x12d4,	// (0x00078fc4) main_camera2_pane_g6

0x12d4,	// (0x00078fc4) main_camera2_pane_g7_ParamLimits

0x12d4,	// (0x00078fc4) main_camera2_pane_g7

0x12d4,	// (0x00078fc4) main_camera2_pane_g8_ParamLimits

0x12d4,	// (0x00078fc4) main_camera2_pane_g8

0x0008,

0xf5b6,	// (0x000872a6) main_camera2_pane_g_ParamLimits

0xf5b6,	// (0x000872a6) main_camera2_pane_g

0x89cf,	// (0x000806bf) main_camera2_pane_t1_ParamLimits

0x89cf,	// (0x000806bf) main_camera2_pane_t1

0x89cf,	// (0x000806bf) main_camera2_pane_t2_ParamLimits

0x89cf,	// (0x000806bf) main_camera2_pane_t2

0x89cf,	// (0x000806bf) main_camera2_pane_t3_ParamLimits

0x89cf,	// (0x000806bf) main_camera2_pane_t3

0x89cf,	// (0x000806bf) main_camera2_pane_t4_ParamLimits

0x89cf,	// (0x000806bf) main_camera2_pane_t4

0x0006,

0xf5c9,	// (0x000872b9) main_camera2_pane_t_ParamLimits

0xf5c9,	// (0x000872b9) main_camera2_pane_t

0x89f7,	// (0x000806e7) cams_zoom_pane_cp4_ParamLimits

0x89f7,	// (0x000806e7) cams_zoom_pane_cp4

0x8679,	// (0x00080369) image2_cif_pane_ParamLimits

0x8679,	// (0x00080369) image2_cif_pane

0x5368,	// (0x0007d058) image2_subqcif_pane_ParamLimits

0x5368,	// (0x0007d058) image2_subqcif_pane

0x8a05,	// (0x000806f5) main_video2_pane_g1_ParamLimits

0x8a05,	// (0x000806f5) main_video2_pane_g1

0x8a05,	// (0x000806f5) main_video2_pane_g2_ParamLimits

0x8a05,	// (0x000806f5) main_video2_pane_g2

0x8a05,	// (0x000806f5) main_video2_pane_g3_ParamLimits

0x8a05,	// (0x000806f5) main_video2_pane_g3

0x8a05,	// (0x000806f5) main_video2_pane_g4_ParamLimits

0x8a05,	// (0x000806f5) main_video2_pane_g4

0x8a05,	// (0x000806f5) main_video2_pane_g5_ParamLimits

0x8a05,	// (0x000806f5) main_video2_pane_g5

0x8a05,	// (0x000806f5) main_video2_pane_g6_ParamLimits

0x8a05,	// (0x000806f5) main_video2_pane_g6

0x0005,

0xf5d8,	// (0x000872c8) main_video2_pane_g_ParamLimits

0xf5d8,	// (0x000872c8) main_video2_pane_g

0x8a13,	// (0x00080703) main_video2_pane_t1_ParamLimits

0x8a13,	// (0x00080703) main_video2_pane_t1

0x8a13,	// (0x00080703) main_video2_pane_t2_ParamLimits

0x8a13,	// (0x00080703) main_video2_pane_t2

0x8a13,	// (0x00080703) main_video2_pane_t3_ParamLimits

0x8a13,	// (0x00080703) main_video2_pane_t3

0x0002,

0xf5e5,	// (0x000872d5) main_video2_pane_t_ParamLimits

0xf5e5,	// (0x000872d5) main_video2_pane_t

0x854c,	// (0x0008023c) call_muted_g2

0x0001,

0xf58c,	// (0x0008727c) call_muted_g

0xdc8e,	// (0x0008597e) main_mup2_pane

0x0883,	// (0x00078573) main_mup2_pane_g1_ParamLimits

0x0883,	// (0x00078573) main_mup2_pane_g1

0x0883,	// (0x00078573) main_mup2_pane_g2_ParamLimits

0x0883,	// (0x00078573) main_mup2_pane_g2

0xf07b,	// (0x00086d6b) main_mup_pane_g13_cp1

0x5382,	// (0x0007d072) mup_volume_pane_cp1

0x0883,	// (0x00078573) main_mup2_pane_g4_ParamLimits

0x0883,	// (0x00078573) main_mup2_pane_g4

0x0883,	// (0x00078573) main_mup2_pane_g5_ParamLimits

0x0883,	// (0x00078573) main_mup2_pane_g5

0x0883,	// (0x00078573) main_mup2_pane_g6_ParamLimits

0x0883,	// (0x00078573) main_mup2_pane_g6

0x0883,	// (0x00078573) main_mup2_pane_g7_ParamLimits

0x0883,	// (0x00078573) main_mup2_pane_g7

0x0006,

0xf5ec,	// (0x000872dc) main_mup2_pane_g_ParamLimits

0xf5ec,	// (0x000872dc) main_mup2_pane_g

0x0891,	// (0x00078581) main_mup2_pane_t1_ParamLimits

0x0891,	// (0x00078581) main_mup2_pane_t1

0x0891,	// (0x00078581) main_mup2_pane_t2_ParamLimits

0x0891,	// (0x00078581) main_mup2_pane_t2

0x0891,	// (0x00078581) main_mup2_pane_t3_ParamLimits

0x0891,	// (0x00078581) main_mup2_pane_t3

0x0891,	// (0x00078581) main_mup2_pane_t4_ParamLimits

0x0891,	// (0x00078581) main_mup2_pane_t4

0x0891,	// (0x00078581) main_mup2_pane_t5_ParamLimits

0x0891,	// (0x00078581) main_mup2_pane_t5

0x0891,	// (0x00078581) main_mup2_pane_t6_ParamLimits

0x0891,	// (0x00078581) main_mup2_pane_t6

0x0005,

0xf5fb,	// (0x000872eb) main_mup2_pane_t_ParamLimits

0xf5fb,	// (0x000872eb) main_mup2_pane_t

0x740e,	// (0x0007f0fe) mup2_visualizer_pane_ParamLimits

0x740e,	// (0x0007f0fe) mup2_visualizer_pane

0x740e,	// (0x0007f0fe) mup_progress_pane_cp_ParamLimits

0x740e,	// (0x0007f0fe) mup_progress_pane_cp

0x8ada,	// (0x000807ca) mup_volume_pane_cp_ParamLimits

0x8ada,	// (0x000807ca) mup_volume_pane_cp

0x0867,	// (0x00078557) mup2_visualizer_pane_g1_ParamLimits

0x0867,	// (0x00078557) mup2_visualizer_pane_g1

0x0875,	// (0x00078565) mup2_visualizer_pane_g2_ParamLimits

0x0875,	// (0x00078565) mup2_visualizer_pane_g2

0x0875,	// (0x00078565) mup2_visualizer_pane_g3_ParamLimits

0x0875,	// (0x00078565) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00086dd4) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00086dd4) mup2_visualizer_pane_g

0x1949,	// (0x00079639) aid_size_cell_fmradio

0x8662,	// (0x00080352) aid_height_parent_landcape

0x0ca1,	// (0x00078991) wml_content_pane_cp

0x0ca9,	// (0x00078999) wml_tabs_pane

0x0cb2,	// (0x000789a2) popup_wml_miniature_window

0x0cba,	// (0x000789aa) scroll_pane_cp021

0x0cce,	// (0x000789be) wml_content_pane_comp8

0xdc8e,	// (0x0008597e) bg_popup_sub_pane_cp05

0xe52f,	// (0x0008621f) popup_wml_miniature_window_g1

0xe537,	// (0x00086227) wml_miniature_view_pane

0x8a27,	// (0x00080717) aid_size_wml_view

0x8a2f,	// (0x0008071f) wml_miniature_view_pane_g1

0x8a38,	// (0x00080728) wml_miniature_view_pane_g2

0x8a41,	// (0x00080731) wml_miniature_view_pane_g3

0x8a49,	// (0x00080739) wml_miniature_view_pane_g4

0x8a51,	// (0x00080741) wml_miniature_view_pane_g5

0x8a59,	// (0x00080749) wml_miniature_view_pane_g6

0x8a61,	// (0x00080751) wml_miniature_view_pane_g7

0x8a69,	// (0x00080759) wml_miniature_view_pane_g8

0x0007,

0xf608,	// (0x000872f8) wml_miniature_view_pane_g

0xe53f,	// (0x0008622f) background_graphic_ParamLimits

0xe53f,	// (0x0008622f) background_graphic

0xe54b,	// (0x0008623b) wml_tabs_2_pane

0xe554,	// (0x00086244) wml_tabs_3_pane_ParamLimits

0xe554,	// (0x00086244) wml_tabs_3_pane

0xe566,	// (0x00086256) wml_tabs_4_pane_ParamLimits

0xe566,	// (0x00086256) wml_tabs_4_pane

0xe57c,	// (0x0008626c) wml_tabs_5_pane_ParamLimits

0xe57c,	// (0x0008626c) wml_tabs_5_pane

0xe596,	// (0x00086286) wml_tabs_pane_g2_ParamLimits

0xe596,	// (0x00086286) wml_tabs_pane_g2

0xe5ab,	// (0x0008629b) wml_tabs_pane_g3_ParamLimits

0xe5ab,	// (0x0008629b) wml_tabs_pane_g3

0xe5c0,	// (0x000862b0) wml_tabs_2_active_pane_ParamLimits

0xe5c0,	// (0x000862b0) wml_tabs_2_active_pane

0xe5c0,	// (0x000862b0) wml_tabs_2_passive_pane_ParamLimits

0xe5c0,	// (0x000862b0) wml_tabs_2_passive_pane

0x8a71,	// (0x00080761) wml_tabs_3_active_pane_cp_ParamLimits

0x8a71,	// (0x00080761) wml_tabs_3_active_pane_cp

0x8a82,	// (0x00080772) wml_tabs_3_passive_pane_ParamLimits

0x8a82,	// (0x00080772) wml_tabs_3_passive_pane

0x8a93,	// (0x00080783) wml_tabs_3_passive_pane_cp_ParamLimits

0x8a93,	// (0x00080783) wml_tabs_3_passive_pane_cp

0x8aa4,	// (0x00080794) tabs_4_active_pane

0x8aac,	// (0x0008079c) tabs_4_passive_pane

0x8ab4,	// (0x000807a4) tabs_4_passive_pane_cp

0x8abc,	// (0x000807ac) tabs_4_passive_pane_cp2

0x8448,	// (0x00080138) aid_height_text

0x740e,	// (0x0007f0fe) mup_volume_cont_pane_ParamLimits

0x740e,	// (0x0007f0fe) mup_volume_cont_pane

0xd871,	// (0x00085561) aid_size_cell_pinb

0xd871,	// (0x00085561) aid_size_list_pinb

0x740e,	// (0x0007f0fe) mup2_volume_cont_pane_ParamLimits

0x740e,	// (0x0007f0fe) mup2_volume_cont_pane

0x8ac4,	// (0x000807b4) mup2_volume_cont_pane_g1_ParamLimits

0x8ac4,	// (0x000807b4) mup2_volume_cont_pane_g1

0x50cc,	// (0x0007cdbc) aid_size_cell_touch_ParamLimits

0x50cc,	// (0x0007cdbc) aid_size_cell_touch

0x538c,	// (0x0007d07c) touch_pane_ParamLimits

0x538c,	// (0x0007d07c) touch_pane

0x5382,	// (0x0007d072) main_rss2_pane

0xe5d7,	// (0x000862c7) listscroll_rss2_pane

0xe5e0,	// (0x000862d0) rss2_navigation_pane

0xe5e8,	// (0x000862d8) list_rss2_pane

0x13d7,	// (0x000790c7) scroll_pane_cp22

0xe5f0,	// (0x000862e0) rss2_navigation_pane_g1

0xe5f9,	// (0x000862e9) rss2_navigation_pane_g2

0xe601,	// (0x000862f1) rss2_navigation_pane_g3

0x0002,

0xf619,	// (0x00087309) rss2_navigation_pane_g

0xe609,	// (0x000862f9) rss2_navigation_pane_t1

0x8af0,	// (0x000807e0) rss2_list_single_pane_ParamLimits

0x8af0,	// (0x000807e0) rss2_list_single_pane

0xe617,	// (0x00086307) rss2_list_single_pane_t2

0xe625,	// (0x00086315) rss2_list_single_pane_t3_ParamLimits

0xe625,	// (0x00086315) rss2_list_single_pane_t3

0xe642,	// (0x00086332) rss2_list_single_pane_t4

0x6f92,	// (0x0007ec82) smil_status_pane_g1

0x8679,	// (0x00080369) main_image2_pane_ParamLimits

0x8679,	// (0x00080369) main_image2_pane

0x12d4,	// (0x00078fc4) main_camera2_pane_g9_ParamLimits

0x12d4,	// (0x00078fc4) main_camera2_pane_g9

0x89cf,	// (0x000806bf) main_camera2_pane_t5_ParamLimits

0x89cf,	// (0x000806bf) main_camera2_pane_t5

0x89e3,	// (0x000806d3) main_camera2_pane_t6_ParamLimits

0x89e3,	// (0x000806d3) main_camera2_pane_t6

0x8b21,	// (0x00080811) main_image2_pane_g1_ParamLimits

0x8b21,	// (0x00080811) main_image2_pane_g1

0x7a56,	// (0x0007f746) smil2_video_pane_ParamLimits

0x7a56,	// (0x0007f746) smil2_video_pane

0x5100,	// (0x0007cdf0) aid_zoom_text_primary_cp

0x531d,	// (0x0007d00d) popup_preview_fixed_window

0x0c0a,	// (0x000788fa) im_reading_pane_g1

0x89c1,	// (0x000806b1) cams2_bc_adjust_pane_cp_ParamLimits

0x89c1,	// (0x000806b1) cams2_bc_adjust_pane_cp

0x5368,	// (0x0007d058) cams2_bc_adjust_pane_ParamLimits

0x5368,	// (0x0007d058) cams2_bc_adjust_pane

0xf07b,	// (0x00086d6b) cams2_bc_adjust_pane_g1

0x5382,	// (0x0007d072) cams2_slider_pane

0xf07b,	// (0x00086d6b) cams2_slider_pane_g1

0xf07b,	// (0x00086d6b) cams2_slider_pane_g2

0x0006,

0xf620,	// (0x00087310) cams2_slider_pane_g

0x545a,	// (0x0007d14a) calc_display_pane_ParamLimits

0x5478,	// (0x0007d168) calc_paper_pane_ParamLimits

0x5494,	// (0x0007d184) grid_calc_pane_ParamLimits

0x718b,	// (0x0007ee7b) popup_clock_digital_window_t1_ParamLimits

0x18e6,	// (0x000795d6) main_image_pane_t1

0x5440,	// (0x0007d130) aid_size_cell_calc_ParamLimits

0x5440,	// (0x0007d130) aid_size_cell_calc

0x86b6,	// (0x000803a6) popup_blid_sat_info2_window_ParamLimits

0x86b6,	// (0x000803a6) popup_blid_sat_info2_window

0xe650,	// (0x00086340) aid_size_cell_blid

0x740e,	// (0x0007f0fe) bg_popup_window_pane_cp07

0xe66d,	// (0x0008635d) grid_popup_blid_pane

0xe677,	// (0x00086367) heading_pane_cp05_ParamLimits

0xe677,	// (0x00086367) heading_pane_cp05

0xe741,	// (0x00086431) cell_popup_blid_pane_ParamLimits

0xe741,	// (0x00086431) cell_popup_blid_pane

0xe765,	// (0x00086455) cell_popup_blid_pane_g1

0xe76d,	// (0x0008645d) cell_popup_blid_pane_t1

0x740e,	// (0x0007f0fe) mup2_indicator_pane_ParamLimits

0x740e,	// (0x0007f0fe) mup2_indicator_pane

0xd871,	// (0x00085561) mup2_visualizer_osc_pane

0xe519,	// (0x00086209) mup2_visualizer_spec_pane_ParamLimits

0xe519,	// (0x00086209) mup2_visualizer_spec_pane

0xd871,	// (0x00085561) mup2_spec_half_pane

0xd871,	// (0x00085561) mup2_spec_half_pane_cp

0xe77b,	// (0x0008646b) mup2_spec_bar_pane_ParamLimits

0xe77b,	// (0x0008646b) mup2_spec_bar_pane

0x0b59,	// (0x00078849) mup2_spec_bar_pane_g1

0xe79a,	// (0x0008648a) mup2_spec_bar_pane_g2

0x0001,

0xf646,	// (0x00087336) mup2_spec_bar_pane_g

0xd871,	// (0x00085561) mup2_osc_middle_pane

0x0b59,	// (0x00078849) mup2_visualizer_osc_pane_g1

0xd89b,	// (0x0008558b) popup_number_entry_window_t1_ParamLimits

0xd8ae,	// (0x0008559e) popup_number_entry_window_t2_ParamLimits

0xd8c0,	// (0x000855b0) popup_number_entry_window_t3_ParamLimits

0x53e3,	// (0x0007d0d3) popup_number_entry_window_t5_ParamLimits

0x53e3,	// (0x0007d0d3) popup_number_entry_window_t5

0xf085,	// (0x00086d75) popup_number_entry_window_t_ParamLimits

0xd8d2,	// (0x000855c2) text_title_cp2_ParamLimits

0x7756,	// (0x0007f446) aid_hotspot_pointer_text2_pane

0x77e4,	// (0x0007f4d4) main_viewer_pane_g9_ParamLimits

0x77e4,	// (0x0007f4d4) main_viewer_pane_g9

0x0e43,	// (0x00078b33) cale_month_pane_t1_ParamLimits

0x0eae,	// (0x00078b9e) bg_cale_pane_ParamLimits

0x0ec6,	// (0x00078bb6) list_cale_pane_ParamLimits

0x0ed7,	// (0x00078bc7) listscroll_cale_day_pane_t1

0x0ee9,	// (0x00078bd9) scroll_pane_cp09_ParamLimits

0x741c,	// (0x0007f10c) main_mup_eq_pane_t1_ParamLimits

0x741c,	// (0x0007f10c) main_mup_eq_pane_t1

0x7436,	// (0x0007f126) main_mup_eq_pane_t2_ParamLimits

0x7436,	// (0x0007f126) main_mup_eq_pane_t2

0x7450,	// (0x0007f140) main_mup_eq_pane_t3_ParamLimits

0x7450,	// (0x0007f140) main_mup_eq_pane_t3

0x7468,	// (0x0007f158) main_mup_eq_pane_t4_ParamLimits

0x7468,	// (0x0007f158) main_mup_eq_pane_t4

0x7480,	// (0x0007f170) main_mup_eq_pane_t5_ParamLimits

0x7480,	// (0x0007f170) main_mup_eq_pane_t5

0x7498,	// (0x0007f188) main_mup_eq_pane_t6_ParamLimits

0x7498,	// (0x0007f188) main_mup_eq_pane_t6

0x74ac,	// (0x0007f19c) main_mup_eq_pane_t7_ParamLimits

0x74ac,	// (0x0007f19c) main_mup_eq_pane_t7

0x74c0,	// (0x0007f1b0) main_mup_eq_pane_t8_ParamLimits

0x74c0,	// (0x0007f1b0) main_mup_eq_pane_t8

0x74d6,	// (0x0007f1c6) main_mup_eq_pane_t9_ParamLimits

0x74d6,	// (0x0007f1c6) main_mup_eq_pane_t9

0x74ee,	// (0x0007f1de) main_mup_eq_pane_t10_ParamLimits

0x74ee,	// (0x0007f1de) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x000870d9) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x000870d9) main_mup_eq_pane_t

0x75ab,	// (0x0007f29b) mup_equalizer_pane_cp5_ParamLimits

0x75c1,	// (0x0007f2b1) mup_equalizer_pane_cp6_ParamLimits

0x75d9,	// (0x0007f2c9) mup_equalizer_pane_cp7_ParamLimits

0x5382,	// (0x0007d072) main_gallery_pane

0xe4b7,	// (0x000861a7) smil2_volume_pane

0xe4bf,	// (0x000861af) smil_status_volume_pane_g1_ParamLimits

0xe4d2,	// (0x000861c2) smil_status_volume_pane_g2_ParamLimits

0x8874,	// (0x00080564) smil_status_volume_pane_g3_ParamLimits

0xf59f,	// (0x0008728f) smil_status_volume_pane_g_ParamLimits

0x740e,	// (0x0007f0fe) bg_popup_window_pane_cp07_ParamLimits

0xe658,	// (0x00086348) blid_firmament_pane

0xdf64,	// (0x00085c54) aid_size_cell_gallery_ParamLimits

0xdf64,	// (0x00085c54) aid_size_cell_gallery

0xdf64,	// (0x00085c54) grid_gallery_pane_ParamLimits

0xdf64,	// (0x00085c54) grid_gallery_pane

0xe43c,	// (0x0008612c) cell_gallery_pane_ParamLimits

0xe43c,	// (0x0008612c) cell_gallery_pane

0xdf0b,	// (0x00085bfb) bg_cell_gallery_focus_pane_ParamLimits

0xdf0b,	// (0x00085bfb) bg_cell_gallery_focus_pane

0x0867,	// (0x00078557) cell_gallery_pane_g1_ParamLimits

0x0867,	// (0x00078557) cell_gallery_pane_g1

0x0867,	// (0x00078557) cell_gallery_pane_g2_ParamLimits

0x0867,	// (0x00078557) cell_gallery_pane_g2

0x0867,	// (0x00078557) cell_gallery_pane_g3_ParamLimits

0x0867,	// (0x00078557) cell_gallery_pane_g3

0x0875,	// (0x00078565) cell_gallery_pane_g4_ParamLimits

0x0875,	// (0x00078565) cell_gallery_pane_g4

0x0003,

0xf64b,	// (0x0008733b) cell_gallery_pane_g_ParamLimits

0xf64b,	// (0x0008733b) cell_gallery_pane_g

0xe7a4,	// (0x00086494) bg_cell_gallery_focus_pane_g1

0xe7ac,	// (0x0008649c) bg_cell_gallery_focus_pane_g2

0xe7b4,	// (0x000864a4) bg_cell_gallery_focus_pane_g3

0xe7bc,	// (0x000864ac) bg_cell_gallery_focus_pane_g4

0xe7c4,	// (0x000864b4) bg_cell_gallery_focus_pane_g5

0xe7cc,	// (0x000864bc) bg_cell_gallery_focus_pane_g6

0xe7d4,	// (0x000864c4) bg_cell_gallery_focus_pane_g7

0xe7dc,	// (0x000864cc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf654,	// (0x00087344) bg_cell_gallery_focus_pane_g

0xe7e4,	// (0x000864d4) aid_firma_cardinal

0xe7f8,	// (0x000864e8) blid_firmament_pane_t1

0xe80f,	// (0x000864ff) blid_firmament_pane_t2

0xe826,	// (0x00086516) blid_firmament_pane_t3

0xe83d,	// (0x0008652d) blid_firmament_pane_t4

0x0003,

0xf665,	// (0x00087355) blid_firmament_pane_t

0xe854,	// (0x00086544) blid_sat_info_pane

0x0b59,	// (0x00078849) blid_sat_info_pane_g1

0x0b59,	// (0x00078849) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x000870cd) blid_sat_info_pane_g

0xe864,	// (0x00086554) blid_sat_info_pane_t1

0xe872,	// (0x00086562) smil2_volume_content_pane

0xe87b,	// (0x0008656b) smil2_volume_pane_g1

0xe883,	// (0x00086573) smil2_volume_content_pane_g1

0xe88c,	// (0x0008657c) smil2_volume_content_pane_g2

0xe895,	// (0x00086585) smil2_volume_content_pane_g3

0xe89e,	// (0x0008658e) smil2_volume_content_pane_g4

0xe8a7,	// (0x00086597) smil2_volume_content_pane_g5

0xe8b0,	// (0x000865a0) smil2_volume_content_pane_g6

0xe8b9,	// (0x000865a9) smil2_volume_content_pane_g7

0xe8c2,	// (0x000865b2) smil2_volume_content_pane_g8

0xe8cb,	// (0x000865bb) smil2_volume_content_pane_g9

0xe8d4,	// (0x000865c4) smil2_volume_content_pane_g10

0x0009,

0xf66e,	// (0x0008735e) smil2_volume_content_pane_g

0x5a82,	// (0x0007d772) cale_week_day_heading_pane_t1_ParamLimits

0x5a9d,	// (0x0007d78d) cale_week_day_heading_pane_t2_ParamLimits

0x5ab8,	// (0x0007d7a8) cale_week_day_heading_pane_t3_ParamLimits

0x5ad3,	// (0x0007d7c3) cale_week_day_heading_pane_t4_ParamLimits

0x5aee,	// (0x0007d7de) cale_week_day_heading_pane_t5_ParamLimits

0x5b09,	// (0x0007d7f9) cale_week_day_heading_pane_t6_ParamLimits

0x5b24,	// (0x0007d814) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00086e7c) cale_week_day_heading_pane_t_ParamLimits

0x0ac7,	// (0x000787b7) bg_cale_side_pane_ParamLimits

0x5b3f,	// (0x0007d82f) cale_week_time_pane_t1_ParamLimits

0x5b59,	// (0x0007d849) cale_week_time_pane_t2_ParamLimits

0x5b73,	// (0x0007d863) cale_week_time_pane_t3_ParamLimits

0x5b8d,	// (0x0007d87d) cale_week_time_pane_t4_ParamLimits

0x5ba7,	// (0x0007d897) cale_week_time_pane_t5_ParamLimits

0x5bc1,	// (0x0007d8b1) cale_week_time_pane_t6_ParamLimits

0x5bdf,	// (0x0007d8cf) cale_week_time_pane_t7_ParamLimits

0x5c01,	// (0x0007d8f1) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00086e8b) cale_week_time_pane_t_ParamLimits

0x5c25,	// (0x0007d915) cell_cale_week_pane_g2_ParamLimits

0x0ac7,	// (0x000787b7) bg_cale_side_pane_cp01_ParamLimits

0x6d87,	// (0x0007ea77) cale_month_week_pane_t1_ParamLimits

0x6da0,	// (0x0007ea90) cale_month_week_pane_t2_ParamLimits

0x6db9,	// (0x0007eaa9) cale_month_week_pane_t3_ParamLimits

0x6dd2,	// (0x0007eac2) cale_month_week_pane_t4_ParamLimits

0x6deb,	// (0x0007eadb) cale_month_week_pane_t5_ParamLimits

0x6e0c,	// (0x0007eafc) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00086f59) cale_month_week_pane_t_ParamLimits

0x6f4f,	// (0x0007ec3f) cell_cale_month_pane_g1_ParamLimits

0x5382,	// (0x0007d072) main_cale_event_viewer_pane

0xd871,	// (0x00085561) listscroll_cale_event_viewer_pane

0xe8dd,	// (0x000865cd) list_cale_ev_pane

0xe8e5,	// (0x000865d5) scroll_pane_cp023

0xe8f1,	// (0x000865e1) field_cale_ev_pane_ParamLimits

0xe8f1,	// (0x000865e1) field_cale_ev_pane

0xe90f,	// (0x000865ff) field_cale_ev_content_pane_ParamLimits

0xe90f,	// (0x000865ff) field_cale_ev_content_pane

0xe91b,	// (0x0008660b) field_cale_ev_pane_g1_ParamLimits

0xe91b,	// (0x0008660b) field_cale_ev_pane_g1

0xe927,	// (0x00086617) field_cale_ev_pane_g2_ParamLimits

0xe927,	// (0x00086617) field_cale_ev_pane_g2

0xe93f,	// (0x0008662f) field_cale_ev_pane_g3_ParamLimits

0xe93f,	// (0x0008662f) field_cale_ev_pane_g3

0x0002,

0xf683,	// (0x00087373) field_cale_ev_pane_g_ParamLimits

0xf683,	// (0x00087373) field_cale_ev_pane_g

0xe957,	// (0x00086647) field_cale_ev_pane_t1_ParamLimits

0xe957,	// (0x00086647) field_cale_ev_pane_t1

0xe96e,	// (0x0008665e) field_cale_ev_content_pane_t1_ParamLimits

0xe96e,	// (0x0008665e) field_cale_ev_content_pane_t1

0x178a,	// (0x0007947a) bg_button_pane_cp01

0x5813,	// (0x0007d503) listscroll_cale_week_pane_ParamLimits

0x0a72,	// (0x00078762) popup_toolbar_window_cp01

0x0a98,	// (0x00078788) listscroll_cale_week_pane_t1_ParamLimits

0x5813,	// (0x0007d503) listscroll_cale_day_pane_ParamLimits

0x0a72,	// (0x00078762) popup_toolbar_window_cp02

0x0ed7,	// (0x00078bc7) listscroll_cale_day_pane_t1_ParamLimits

0x5813,	// (0x0007d503) main_cale_month_pane_ParamLimits

0x87bd,	// (0x000804ad) popup_toolbar_window_cp03_ParamLimits

0x87bd,	// (0x000804ad) popup_toolbar_window_cp03

0x796c,	// (0x0007f65c) main_image_pane_g2_ParamLimits

0x796c,	// (0x0007f65c) main_image_pane_g2

0x7978,	// (0x0007f668) main_image_pane_g3_ParamLimits

0x7978,	// (0x0007f668) main_image_pane_g3

0x0002,

0xf47b,	// (0x0008716b) main_image_pane_g_ParamLimits

0xf47b,	// (0x0008716b) main_image_pane_g

0x18e6,	// (0x000795d6) main_image_pane_t1_ParamLimits

0x7984,	// (0x0007f674) main_image_pane_t2_ParamLimits

0x7984,	// (0x0007f674) main_image_pane_t2

0x7996,	// (0x0007f686) main_image_pane_t3_ParamLimits

0x7996,	// (0x0007f686) main_image_pane_t3

0x79a8,	// (0x0007f698) main_image_pane_t4_ParamLimits

0x79a8,	// (0x0007f698) main_image_pane_t4

0x0003,

0xf482,	// (0x00087172) main_image_pane_t_ParamLimits

0xf482,	// (0x00087172) main_image_pane_t

0x79ba,	// (0x0007f6aa) popup_image_details_window_cp01

0x79c4,	// (0x0007f6b4) popup_toobar_trans_pane_cp01_ParamLimits

0x79c4,	// (0x0007f6b4) popup_toobar_trans_pane_cp01

0x870d,	// (0x000803fd) popup_image_details_window_ParamLimits

0x870d,	// (0x000803fd) popup_image_details_window

0x871b,	// (0x0008040b) popup_image_focus_window

0x5368,	// (0x0007d058) camera2_autofocus_pane_ParamLimits

0x5368,	// (0x0007d058) camera2_autofocus_pane

0xd871,	// (0x00085561) bg_popup_sub_pane_cp06

0xe98c,	// (0x0008667c) popup_image_focus_window_g1

0xe994,	// (0x00086684) popup_image_focus_window_g2

0xe99c,	// (0x0008668c) popup_image_focus_window_g3

0xe9a4,	// (0x00086694) popup_image_focus_window_g4

0x0003,

0xf68a,	// (0x0008737a) popup_image_focus_window_g

0xe9ac,	// (0x0008669c) popup_image_focus_window_t1

0xe9ba,	// (0x000866aa) popup_image_focus_window_t2

0xe9ca,	// (0x000866ba) popup_image_focus_window_t3

0x0002,

0xf693,	// (0x00087383) popup_image_focus_window_t

0x0867,	// (0x00078557) camera2_autofocus_pane_g1

0xdf0b,	// (0x00085bfb) bg_tb_trans_pane_cp01

0xe9d8,	// (0x000866c8) popup_image_details_window_g1

0xe9eb,	// (0x000866db) popup_image_details_window_g2

0x0002,

0xf6a5,	// (0x00087395) popup_image_details_window_g

0xea14,	// (0x00086704) popup_image_details_window_t1

0xea26,	// (0x00086716) popup_image_details_window_t2

0xea3f,	// (0x0008672f) popup_image_details_window_t3

0xea53,	// (0x00086743) popup_image_details_window_t4

0xea6e,	// (0x0008675e) popup_image_details_window_t5

0x0004,

0xf6ac,	// (0x0008739c) popup_image_details_window_t

0x08cd,	// (0x000785bd) bg_calc_paper_pane_ParamLimits

0x5382,	// (0x0007d072) grid_highlight_pane_cp013

0x5591,	// (0x0007d281) list_calc_pane_ParamLimits

0x55a3,	// (0x0007d293) scroll_pane_cp024

0x08fb,	// (0x000785eb) bg_calc_display_pane_ParamLimits

0x55ab,	// (0x0007d29b) calc_display_pane_t1_ParamLimits

0x55c0,	// (0x0007d2b0) calc_display_pane_t2_ParamLimits

0x55d5,	// (0x0007d2c5) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00086dfc) calc_display_pane_t_ParamLimits

0x56ae,	// (0x0007d39e) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00086e19) cell_calc_pane_g

0x56b7,	// (0x0007d3a7) cell_calc_pane_t1

0x0974,	// (0x00078664) grid_highlight_pane_cp02_ParamLimits

0x098a,	// (0x0007867a) toolbar_button_pane_cp01_ParamLimits

0x098a,	// (0x0007867a) toolbar_button_pane_cp01

0x192b,	// (0x0007961b) temp_image_control_pane_ParamLimits

0x192b,	// (0x0007961b) temp_image_control_pane

0x8679,	// (0x00080369) main_mp3_pane

0xea88,	// (0x00086778) temp_image_control_pane_g1_ParamLimits

0xea88,	// (0x00086778) temp_image_control_pane_g1

0xea96,	// (0x00086786) temp_image_control_pane_g2_ParamLimits

0xea96,	// (0x00086786) temp_image_control_pane_g2

0xeaa8,	// (0x00086798) temp_image_control_pane_g3_ParamLimits

0xeaa8,	// (0x00086798) temp_image_control_pane_g3

0x8b2d,	// (0x0008081d) temp_image_control_pane_g4_ParamLimits

0x8b2d,	// (0x0008081d) temp_image_control_pane_g4

0x0003,

0xf6b7,	// (0x000873a7) temp_image_control_pane_g_ParamLimits

0xf6b7,	// (0x000873a7) temp_image_control_pane_g

0xea88,	// (0x00086778) main_mp3_pane_g1

0x8b3e,	// (0x0008082e) main_mp3_pane_g2

0x0007,

0xf6c0,	// (0x000873b0) main_mp3_pane_g

0xeadd,	// (0x000867cd) main_mp3_pane_t1

0x0875,	// (0x00078565) main_camera_pane_g8_ParamLimits

0x0875,	// (0x00078565) main_camera_pane_g8

0x5dcf,	// (0x0007dabf) main_video_pane_g7_ParamLimits

0x5dcf,	// (0x0007dabf) main_video_pane_g7

0x89cf,	// (0x000806bf) main_camera2_pane_t7_ParamLimits

0x89cf,	// (0x000806bf) main_camera2_pane_t7

0x0c61,	// (0x00078951) scroll_pane_cp025_ParamLimits

0x0c61,	// (0x00078951) scroll_pane_cp025

0x0c75,	// (0x00078965) scroll_pane_cp026_ParamLimits

0x0c75,	// (0x00078965) scroll_pane_cp026

0x0c84,	// (0x00078974) wml_content_pane_ParamLimits

0x5382,	// (0x0007d072) main_touch_calib_pane

0x8be2,	// (0x000808d2) main_touch_calib_pane_g1

0x8bee,	// (0x000808de) main_touch_calib_pane_g2

0x8bfa,	// (0x000808ea) main_touch_calib_pane_g3

0x8c06,	// (0x000808f6) main_touch_calib_pane_g4

0x0003,

0xf6de,	// (0x000873ce) main_touch_calib_pane_g

0x8c12,	// (0x00080902) main_touch_calib_pane_t1

0x8c2b,	// (0x0008091b) main_touch_calib_pane_t2

0x0004,

0xf6e7,	// (0x000873d7) main_touch_calib_pane_t

0x14b3,	// (0x000791a3) mup_progress_pane_cp02

0x14e8,	// (0x000791d8) navi_pane_g1

0x15a3,	// (0x00079293) navi_pane_mp_t3

0x8679,	// (0x00080369) main_mp3_pane_ParamLimits

0x87fa,	// (0x000804ea) navi_pane_ParamLimits

0xea88,	// (0x00086778) main_mp3_pane_g1_ParamLimits

0x8b3e,	// (0x0008082e) main_mp3_pane_g2_ParamLimits

0x8b4a,	// (0x0008083a) main_mp3_pane_g3_ParamLimits

0x8b4a,	// (0x0008083a) main_mp3_pane_g3

0x8b56,	// (0x00080846) main_mp3_pane_g4_ParamLimits

0x8b56,	// (0x00080846) main_mp3_pane_g4

0x0867,	// (0x00078557) main_mp3_pane_g5_ParamLimits

0x0867,	// (0x00078557) main_mp3_pane_g5

0xeab8,	// (0x000867a8) main_mp3_pane_g6_ParamLimits

0xeab8,	// (0x000867a8) main_mp3_pane_g6

0xeac5,	// (0x000867b5) main_mp3_pane_g7_ParamLimits

0xeac5,	// (0x000867b5) main_mp3_pane_g7

0xead1,	// (0x000867c1) main_mp3_pane_g8_ParamLimits

0xead1,	// (0x000867c1) main_mp3_pane_g8

0xf6c0,	// (0x000873b0) main_mp3_pane_g_ParamLimits

0x8b62,	// (0x00080852) main_mp3_pane_t2

0x8b72,	// (0x00080862) main_mp3_pane_t3

0xeaeb,	// (0x000867db) main_mp3_pane_t4

0xeaf9,	// (0x000867e9) main_mp3_pane_t5

0x0005,

0xf6d1,	// (0x000873c1) main_mp3_pane_t

0xeb07,	// (0x000867f7) mup_progress_pane_cp01

0x5100,	// (0x0007cdf0) aid_zoom_text_secondary2

0xe8dd,	// (0x000865cd) list_cale_ev2_pane

0xe8e5,	// (0x000865d5) scroll_pane_cp023_ParamLimits

0x8c86,	// (0x00080976) field_cale_ev2_pane_ParamLimits

0x8c86,	// (0x00080976) field_cale_ev2_pane

0x8caf,	// (0x0008099f) field_cale_ev2_pane_g1_ParamLimits

0x8caf,	// (0x0008099f) field_cale_ev2_pane_g1

0x8cbb,	// (0x000809ab) field_cale_ev2_pane_g2_ParamLimits

0x8cbb,	// (0x000809ab) field_cale_ev2_pane_g2

0x8cd3,	// (0x000809c3) field_cale_ev2_pane_g3_ParamLimits

0x8cd3,	// (0x000809c3) field_cale_ev2_pane_g3

0x0003,

0xf6f2,	// (0x000873e2) field_cale_ev2_pane_g_ParamLimits

0xf6f2,	// (0x000873e2) field_cale_ev2_pane_g

0x1e4c,	// (0x00079b3c) field_cale_ev2_pane_t1_ParamLimits

0x1e4c,	// (0x00079b3c) field_cale_ev2_pane_t1

0x1e63,	// (0x00079b53) field_cale_ev2_pane_t2_ParamLimits

0x1e63,	// (0x00079b53) field_cale_ev2_pane_t2

0x0001,

0xf6fb,	// (0x000873eb) field_cale_ev2_pane_t_ParamLimits

0xf6fb,	// (0x000873eb) field_cale_ev2_pane_t

0x784c,	// (0x0007f53c) main_postcard_pane_g5_ParamLimits

0x784c,	// (0x0007f53c) main_postcard_pane_g5

0x785a,	// (0x0007f54a) main_postcard_pane_g6_ParamLimits

0x785a,	// (0x0007f54a) main_postcard_pane_g6

0xdf64,	// (0x00085c54) camera2_autofocus_pane_cp_ParamLimits

0xdf64,	// (0x00085c54) camera2_autofocus_pane_cp

0x8679,	// (0x00080369) main_mup3_pane

0x8d2a,	// (0x00080a1a) main_mup3_pane_g1_ParamLimits

0x8d2a,	// (0x00080a1a) main_mup3_pane_g1

0x8d4b,	// (0x00080a3b) main_mup3_pane_g2_ParamLimits

0x8d4b,	// (0x00080a3b) main_mup3_pane_g2

0x8dc3,	// (0x00080ab3) main_mup3_pane_g3_ParamLimits

0x8dc3,	// (0x00080ab3) main_mup3_pane_g3

0x8e06,	// (0x00080af6) main_mup3_pane_g4_ParamLimits

0x8e06,	// (0x00080af6) main_mup3_pane_g4

0x8e49,	// (0x00080b39) main_mup3_pane_g5_ParamLimits

0x8e49,	// (0x00080b39) main_mup3_pane_g5

0x8e8c,	// (0x00080b7c) main_mup3_pane_g6_ParamLimits

0x8e8c,	// (0x00080b7c) main_mup3_pane_g6

0x0875,	// (0x00078565) main_mup3_pane_g7_ParamLimits

0x0875,	// (0x00078565) main_mup3_pane_g7

0x0007,

0xf70b,	// (0x000873fb) main_mup3_pane_g_ParamLimits

0xf70b,	// (0x000873fb) main_mup3_pane_g

0x8f02,	// (0x00080bf2) main_mup3_pane_t1_ParamLimits

0x8f02,	// (0x00080bf2) main_mup3_pane_t1

0x8f71,	// (0x00080c61) main_mup3_pane_t2_ParamLimits

0x8f71,	// (0x00080c61) main_mup3_pane_t2

0x903a,	// (0x00080d2a) main_mup3_pane_t4_ParamLimits

0x903a,	// (0x00080d2a) main_mup3_pane_t4

0x9088,	// (0x00080d78) main_mup3_pane_t5_ParamLimits

0x9088,	// (0x00080d78) main_mup3_pane_t5

0x9138,	// (0x00080e28) main_mup3_pane_t6_ParamLimits

0x9138,	// (0x00080e28) main_mup3_pane_t6

0x0005,

0xf71c,	// (0x0008740c) main_mup3_pane_t_ParamLimits

0xf71c,	// (0x0008740c) main_mup3_pane_t

0x91e4,	// (0x00080ed4) mup3_progress_pane_ParamLimits

0x91e4,	// (0x00080ed4) mup3_progress_pane

0x9262,	// (0x00080f52) popup_mup3_control_window_ParamLimits

0x9262,	// (0x00080f52) popup_mup3_control_window

0xeb0f,	// (0x000867ff) popup_mup3_text_window

0x927b,	// (0x00080f6b) mup3_progress_pane_t1

0x929a,	// (0x00080f8a) mup3_progress_pane_t2

0xeb17,	// (0x00086807) mup3_progress_pane_t3

0x0002,

0xf729,	// (0x00087419) mup3_progress_pane_t

0xeb34,	// (0x00086824) mup_progress_pane_cp03

0xd871,	// (0x00085561) bg_tb_trans_pane_cp04

0x92b9,	// (0x00080fa9) mup3_volume_pane

0x92c1,	// (0x00080fb1) popup_mup3_control_window_g1

0x92ca,	// (0x00080fba) mup3_volume_pane_g1

0x92d3,	// (0x00080fc3) mup3_volume_pane_g2

0x92dc,	// (0x00080fcc) mup3_volume_pane_g3

0x0002,

0xf730,	// (0x00087420) mup3_volume_pane_g

0xd871,	// (0x00085561) bg_tb_trans_pane_cp03

0xeb44,	// (0x00086834) popup_mup3_text_window_g1

0xeb4c,	// (0x0008683c) popup_mup3_text_window_t1

0x0955,	// (0x00078645) list_calc_item_pane_g1_ParamLimits

0xe5ce,	// (0x000862be) mup_volume_pane_cp_g1

0x8c44,	// (0x00080934) main_touch_calib_pane_t3

0x8c5a,	// (0x0008094a) main_touch_calib_pane_t4

0x8c70,	// (0x00080960) main_touch_calib_pane_t5

0x50b8,	// (0x0007cda8) aid_cell_size_toolbar2

0x50c0,	// (0x0007cdb0) aid_popup3_width_pane

0x4fc8,	// (0x0007ccb8) aid_zoom_text_msg_primary

0x5cd1,	// (0x0007d9c1) vorec_t7

0x0919,	// (0x00078609) bg_calc_paper_pane_g1_ParamLimits

0x0931,	// (0x00078621) bg_calc_paper_pane_g2_ParamLimits

0x0925,	// (0x00078615) bg_calc_paper_pane_g3_ParamLimits

0x0949,	// (0x00078639) bg_calc_paper_pane_g4_ParamLimits

0x093d,	// (0x0007862d) bg_calc_paper_pane_g5_ParamLimits

0x5614,	// (0x0007d304) bg_calc_paper_pane_g6_ParamLimits

0x5625,	// (0x0007d315) bg_calc_paper_pane_g7_ParamLimits

0x5636,	// (0x0007d326) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00086e03) bg_calc_paper_pane_g_ParamLimits

0x5647,	// (0x0007d337) calc_bg_paper_pane_g9_ParamLimits

0xdf64,	// (0x00085c54) image_qvga_pane_ParamLimits

0xdf64,	// (0x00085c54) image_qvga_pane

0xdee9,	// (0x00085bd9) bg_popup_sub_pane_cp04_ParamLimits

0x1862,	// (0x00079552) popup_mup_playback_window_g1_ParamLimits

0x186e,	// (0x0007955e) popup_mup_playback_window_t1_ParamLimits

0x1883,	// (0x00079573) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x00087166) popup_mup_playback_window_t_ParamLimits

0x0867,	// (0x00078557) main_mup2_pane_g3_ParamLimits

0x0867,	// (0x00078557) main_mup2_pane_g3

0x5fb6,	// (0x0007dca6) popup_toolbar_window_cp04

0x1c65,	// (0x00079955) popup_call2_audio_second_window_g3_ParamLimits

0x1c65,	// (0x00079955) popup_call2_audio_second_window_g3

0x7f84,	// (0x0007fc74) popup_call2_audio_first_window_g4_ParamLimits

0x7f84,	// (0x0007fc74) popup_call2_audio_first_window_g4

0xe15a,	// (0x00085e4a) popup_call2_audio_in_window_g4_ParamLimits

0xe15a,	// (0x00085e4a) popup_call2_audio_in_window_g4

0x795f,	// (0x0007f64f) aid_area_sk_bg_cut_ParamLimits

0x795f,	// (0x0007f64f) aid_area_sk_bg_cut

0x1898,	// (0x00079588) aid_area_sk_bg_cut_2_ParamLimits

0x1898,	// (0x00079588) aid_area_sk_bg_cut_2

0xd871,	// (0x00085561) aid_placing_details_win

0xd871,	// (0x00085561) aid_placing_details_win_2

0x0867,	// (0x00078557) camera2_autofocus_pane_g1_ParamLimits

0x530e,	// (0x0007cffe) popup_fixed_preview_cale_window_ParamLimits

0x530e,	// (0x0007cffe) popup_fixed_preview_cale_window

0x163c,	// (0x0007932c) navi_slider_pane_g3

0x1633,	// (0x00079323) navi_slider_pane_g4

0x162a,	// (0x0007931a) navi_slider_pane_g5

0x163c,	// (0x0007932c) navi_slider_pane_g6

0x73e2,	// (0x0007f0d2) navi_slider_pane_g7

0x1757,	// (0x00079447) mup_scale_pane_g3

0x1760,	// (0x00079450) mup_scale_pane_g4

0x1769,	// (0x00079459) mup_scale_pane_g5

0x75f1,	// (0x0007f2e1) mup_scale_pane_g6

0x75fa,	// (0x0007f2ea) mup_scale_pane_g7

0xf07b,	// (0x00086d6b) cams2_slider_pane_g3

0xf07b,	// (0x00086d6b) cams2_slider_pane_g4

0xf07b,	// (0x00086d6b) cams2_slider_pane_g5

0xf07b,	// (0x00086d6b) cams2_slider_pane_g6

0xf07b,	// (0x00086d6b) cams2_slider_pane_g7

0x0b59,	// (0x00078849) camera2_autofocus_pane_cp_g1

0xe430,	// (0x00086120) bg_popup_preview_window_pane_cp02_ParamLimits

0xe430,	// (0x00086120) bg_popup_preview_window_pane_cp02

0xeb5a,	// (0x0008684a) list_fp_cale_pane_ParamLimits

0xeb5a,	// (0x0008684a) list_fp_cale_pane

0xeb66,	// (0x00086856) popup_fixed_preview_cale_window_t1_ParamLimits

0xeb66,	// (0x00086856) popup_fixed_preview_cale_window_t1

0x92e5,	// (0x00080fd5) popup_fixed_preview_cale_window_t2_ParamLimits

0x92e5,	// (0x00080fd5) popup_fixed_preview_cale_window_t2

0x92fa,	// (0x00080fea) popup_fixed_preview_cale_window_t3_ParamLimits

0x92fa,	// (0x00080fea) popup_fixed_preview_cale_window_t3

0x0002,

0xf737,	// (0x00087427) popup_fixed_preview_cale_window_t_ParamLimits

0xf737,	// (0x00087427) popup_fixed_preview_cale_window_t

0x930f,	// (0x00080fff) list_single_fp_cale_pane_ParamLimits

0x930f,	// (0x00080fff) list_single_fp_cale_pane

0xeb84,	// (0x00086874) list_single_fp_cale_pane_g1_ParamLimits

0xeb84,	// (0x00086874) list_single_fp_cale_pane_g1

0xeb90,	// (0x00086880) list_single_fp_cale_pane_g2_ParamLimits

0xeb90,	// (0x00086880) list_single_fp_cale_pane_g2

0x0002,

0xf73e,	// (0x0008742e) list_single_fp_cale_pane_g_ParamLimits

0xf73e,	// (0x0008742e) list_single_fp_cale_pane_g

0xeba9,	// (0x00086899) list_single_fp_cale_pane_t1_ParamLimits

0xeba9,	// (0x00086899) list_single_fp_cale_pane_t1

0xebbb,	// (0x000868ab) list_single_fp_cale_pane_t2_ParamLimits

0xebbb,	// (0x000868ab) list_single_fp_cale_pane_t2

0x0001,

0xf745,	// (0x00087435) list_single_fp_cale_pane_t_ParamLimits

0xf745,	// (0x00087435) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5382,	// (0x0007d072) main_dialer_pane

0xd871,	// (0x00085561) aid_cell_size_keypad

0xd871,	// (0x00085561) dialer_ne_pane

0xd871,	// (0x00085561) grid_dialer_command_1_pane

0xd871,	// (0x00085561) grid_dialer_command_2_pane

0xd871,	// (0x00085561) grid_dialer_keypad_pane

0x740e,	// (0x0007f0fe) bg_popup_call_pane_cp06_ParamLimits

0x740e,	// (0x0007f0fe) bg_popup_call_pane_cp06

0x740e,	// (0x0007f0fe) dialer_ne_clear_pane_ParamLimits

0x740e,	// (0x0007f0fe) dialer_ne_clear_pane

0x0b59,	// (0x00078849) dialer_ne_pane_g1

0x16e1,	// (0x000793d1) dialer_ne_pane_t1_ParamLimits

0x16e1,	// (0x000793d1) dialer_ne_pane_t1

0xebee,	// (0x000868de) dialer_ne_pane_t2_ParamLimits

0xebee,	// (0x000868de) dialer_ne_pane_t2

0x9322,	// (0x00081012) dialer_ne_pane_t3_ParamLimits

0x9322,	// (0x00081012) dialer_ne_pane_t3

0x0002,

0xf74a,	// (0x0008743a) dialer_ne_pane_t_ParamLimits

0xf74a,	// (0x0008743a) dialer_ne_pane_t

0x9322,	// (0x00081012) dialer_ne_pane_t3_copy1_ParamLimits

0x9322,	// (0x00081012) dialer_ne_pane_t3_copy1

0xec0b,	// (0x000868fb) cell_dialer_keypad_pane_ParamLimits

0xec0b,	// (0x000868fb) cell_dialer_keypad_pane

0xdf0b,	// (0x00085bfb) cell_dialer_command_1_pane_ParamLimits

0xdf0b,	// (0x00085bfb) cell_dialer_command_1_pane

0xec22,	// (0x00086912) cell_dialer_command_2_pane_ParamLimits

0xec22,	// (0x00086912) cell_dialer_command_2_pane

0xdf0b,	// (0x00085bfb) bg_button_pane_cp02_ParamLimits

0xdf0b,	// (0x00085bfb) bg_button_pane_cp02

0x0867,	// (0x00078557) cell_dialer_keypad_pane_g1_ParamLimits

0x0867,	// (0x00078557) cell_dialer_keypad_pane_g1

0xdf0b,	// (0x00085bfb) bg_button_pane_cp03_ParamLimits

0xdf0b,	// (0x00085bfb) bg_button_pane_cp03

0x0867,	// (0x00078557) cell_dialer_command_1_pane_g1_ParamLimits

0x0867,	// (0x00078557) cell_dialer_command_1_pane_g1

0xd871,	// (0x00085561) bg_button_pane_cp04

0x0b59,	// (0x00078849) cell_dialer_command_2_pane_g1

0xd871,	// (0x00085561) bg_button_pane_cp06

0x0b59,	// (0x00078849) dialer_ne_clear_pane_g1

0x14f4,	// (0x000791e4) navi_pane_g2

0x1522,	// (0x00079212) navi_pane_g3

0x0002,

0xf379,	// (0x00087069) navi_pane_g

0x15b1,	// (0x000792a1) navi_pane_mv_g2

0x15d8,	// (0x000792c8) navi_pane_mv_g5

0x73ad,	// (0x0007f09d) navi_pane_mv_t1

0x08fb,	// (0x000785eb) main_clock2_pane

0xdf64,	// (0x00085c54) main_clock2_list_pane_ParamLimits

0xdf64,	// (0x00085c54) main_clock2_list_pane

0x9398,	// (0x00081088) main_clock2_pane_t1_ParamLimits

0x9398,	// (0x00081088) main_clock2_pane_t1

0x93c6,	// (0x000810b6) main_clock2_pane_t2_ParamLimits

0x93c6,	// (0x000810b6) main_clock2_pane_t2

0x0004,

0xf756,	// (0x00087446) main_clock2_pane_t_ParamLimits

0xf756,	// (0x00087446) main_clock2_pane_t

0x942b,	// (0x0008111b) popup_clock_analogue_window_cp03_ParamLimits

0x942b,	// (0x0008111b) popup_clock_analogue_window_cp03

0x9449,	// (0x00081139) popup_clock_digital_window_cp02_ParamLimits

0x9449,	// (0x00081139) popup_clock_digital_window_cp02

0x94be,	// (0x000811ae) main_clock2_list_single_pane_ParamLimits

0x94be,	// (0x000811ae) main_clock2_list_single_pane

0x0b19,	// (0x00078809) list_highlight_pane_cp05

0xec69,	// (0x00086959) main_clock2_list_single_pane_t1

0x5fb6,	// (0x0007dca6) popup_toolbar_window_cp04_ParamLimits

0x0875,	// (0x00078565) camera2_autofocus_pane_g2_ParamLimits

0x0875,	// (0x00078565) camera2_autofocus_pane_g2

0x0875,	// (0x00078565) camera2_autofocus_pane_g3_ParamLimits

0x0875,	// (0x00078565) camera2_autofocus_pane_g3

0x0875,	// (0x00078565) camera2_autofocus_pane_g4_ParamLimits

0x0875,	// (0x00078565) camera2_autofocus_pane_g4

0x0875,	// (0x00078565) camera2_autofocus_pane_g5_ParamLimits

0x0875,	// (0x00078565) camera2_autofocus_pane_g5

0x0004,

0xf69a,	// (0x0008738a) camera2_autofocus_pane_g_ParamLimits

0xf69a,	// (0x0008738a) camera2_autofocus_pane_g

0x8ceb,	// (0x000809db) camera2_autofocus_pane_cp_g2

0x8cf3,	// (0x000809e3) camera2_autofocus_pane_cp_g3

0x8cfb,	// (0x000809eb) camera2_autofocus_pane_cp_g4

0x8d03,	// (0x000809f3) camera2_autofocus_pane_cp_g5

0x0004,

0xf700,	// (0x000873f0) camera2_autofocus_pane_cp_g

0xd871,	// (0x00085561) popup_dialer_spcha_window

0xd871,	// (0x00085561) bg_popup_sub_pane_cp07

0xd871,	// (0x00085561) list_spcha_pane

0xec77,	// (0x00086967) list_single_spcha_pane_ParamLimits

0xec77,	// (0x00086967) list_single_spcha_pane

0xd871,	// (0x00085561) list_highlight_pane_cp06

0x10b6,	// (0x00078da6) list_single_spcha_pane_t1

0x83ad,	// (0x0008009d) popup_call2_audio_out_window_g4_ParamLimits

0x83ad,	// (0x0008009d) popup_call2_audio_out_window_g4

0x5382,	// (0x0007d072) main_imed2_pane

0x8723,	// (0x00080413) popup_imed_adjust2_window

0x8736,	// (0x00080426) popup_imed_trans_window_ParamLimits

0x8736,	// (0x00080426) popup_imed_trans_window

0xe6a3,	// (0x00086393) popup_blid_sat_info2_window_t1

0xe6b1,	// (0x000863a1) popup_blid_sat_info2_window_t2

0x000a,

0xf62f,	// (0x0008731f) popup_blid_sat_info2_window_t

0x9573,	// (0x00081263) aid_size_cell_colour_35

0x958d,	// (0x0008127d) aid_size_cell_colour_112

0x95a4,	// (0x00081294) aid_size_cell_effect

0xdf0b,	// (0x00085bfb) bg_tb_trans_pane_cp02

0xec89,	// (0x00086979) heading_imed_pane

0x95be,	// (0x000812ae) listscroll_imed_pane

0xec95,	// (0x00086985) heading_imed_pane_g1

0xec9d,	// (0x0008698d) heading_imed_pane_t1

0xecab,	// (0x0008699b) grid_imed_colour_35_pane_ParamLimits

0xecab,	// (0x0008699b) grid_imed_colour_35_pane

0x95ca,	// (0x000812ba) grid_imed_effect_pane

0xecc2,	// (0x000869b2) list_imed_aspect_pane

0x95da,	// (0x000812ca) scroll_pane_cp027_ParamLimits

0x95da,	// (0x000812ca) scroll_pane_cp027

0x95e6,	// (0x000812d6) cell_imed_effect_pane_ParamLimits

0x95e6,	// (0x000812d6) cell_imed_effect_pane

0xecca,	// (0x000869ba) cell_imed_colour_pane_ParamLimits

0xecca,	// (0x000869ba) cell_imed_colour_pane

0xed0c,	// (0x000869fc) cell_imed_colour_pane_g1_ParamLimits

0xed0c,	// (0x000869fc) cell_imed_colour_pane_g1

0xed1d,	// (0x00086a0d) hgihlgiht_grid_pane_cp016_ParamLimits

0xed1d,	// (0x00086a0d) hgihlgiht_grid_pane_cp016

0x95fe,	// (0x000812ee) cell_imed_effect_pane_g1

0x9606,	// (0x000812f6) grid_highlight_pane_cp017

0xed2e,	// (0x00086a1e) list_imed_single_pane_ParamLimits

0xed2e,	// (0x00086a1e) list_imed_single_pane

0xd871,	// (0x00085561) list_highlight_pane_cp07

0xed43,	// (0x00086a33) list_imed_aspect_pane_comp1_t1

0xe43c,	// (0x0008612c) bg_tb_trans_pane_cp05

0xed65,	// (0x00086a55) popup_imed_adjust2_window_g1

0xed8c,	// (0x00086a7c) popup_imed_adjust2_window_t1

0xeda4,	// (0x00086a94) slider_imed_adjust_pane

0xedb8,	// (0x00086aa8) slider_imed_adjust_pane_g1

0xedc8,	// (0x00086ab8) slider_imed_adjust_pane_g2

0xedd8,	// (0x00086ac8) slider_imed_adjust_pane_g3

0xede9,	// (0x00086ad9) slider_imed_adjust_pane_g4

0x0003,

0xf773,	// (0x00087463) slider_imed_adjust_pane_g

0x960f,	// (0x000812ff) aid_size_cell_clipart2

0x961b,	// (0x0008130b) grid_imed_clipart_pane

0xedfa,	// (0x00086aea) scroll_pane_cp031

0x9625,	// (0x00081315) cell_imed_clipart_pane_ParamLimits

0x9625,	// (0x00081315) cell_imed_clipart_pane

0x9647,	// (0x00081337) cell_imed_clipart_pane_g1

0xd871,	// (0x00085561) grid_highlight_pane_cp014

0x937a,	// (0x0008106a) main_clock2_pane_g1_ParamLimits

0x937a,	// (0x0008106a) main_clock2_pane_g1

0x9465,	// (0x00081155) aid_call2_pane_cp10

0x9477,	// (0x00081167) aid_call_pane_cp10

0x1455,	// (0x00079145) popup_clock_analogue_window_cp10_g1

0x1455,	// (0x00079145) popup_clock_analogue_window_cp10_g2

0x9489,	// (0x00081179) popup_clock_analogue_window_cp10_g3

0x9489,	// (0x00081179) popup_clock_analogue_window_cp10_g4

0x1455,	// (0x00079145) popup_clock_analogue_window_cp10_g5

0x0004,

0xf761,	// (0x00087451) popup_clock_analogue_window_cp10_g

0x949f,	// (0x0008118f) popup_clock_analogue_window_cp10_t1

0x94d0,	// (0x000811c0) clock_digital_number_pane_cp10_ParamLimits

0x94d0,	// (0x000811c0) clock_digital_number_pane_cp10

0x94ea,	// (0x000811da) clock_digital_number_pane_cp11_ParamLimits

0x94ea,	// (0x000811da) clock_digital_number_pane_cp11

0x9504,	// (0x000811f4) clock_digital_number_pane_cp12_ParamLimits

0x9504,	// (0x000811f4) clock_digital_number_pane_cp12

0x951e,	// (0x0008120e) clock_digital_number_pane_cp13_ParamLimits

0x951e,	// (0x0008120e) clock_digital_number_pane_cp13

0x9538,	// (0x00081228) clock_digital_separator_pane_cp10_ParamLimits

0x9538,	// (0x00081228) clock_digital_separator_pane_cp10

0x9552,	// (0x00081242) popup_clock_digital_window_cp02_t1_ParamLimits

0x9552,	// (0x00081242) popup_clock_digital_window_cp02_t1

0xdee1,	// (0x00085bd1) clock_digital_number_pane_cp10_g1

0xdee1,	// (0x00085bd1) clock_digital_number_pane_cp10_g2

0x0001,

0xf77c,	// (0x0008746c) clock_digital_number_pane_cp10_g

0xdee1,	// (0x00085bd1) clock_digital_separator_pane_cp10_g1

0xdee1,	// (0x00085bd1) clock_digital_separator_pane_g2_cp10

0x15e0,	// (0x000792d0) navi_pane_vded_g4

0x15e9,	// (0x000792d9) navi_pane_vded_g5

0x15f2,	// (0x000792e2) navi_pane_vded_t1

0x5382,	// (0x0007d072) main_vded_pane

0x9650,	// (0x00081340) main_vded_pane_g1

0x965c,	// (0x0008134c) main_vded_pane_g2

0x9666,	// (0x00081356) main_vded_pane_g3

0x0002,

0xf781,	// (0x00087471) main_vded_pane_g

0x9670,	// (0x00081360) main_vded_pane_t1

0x967e,	// (0x0008136e) main_vded_pane_t2

0x0001,

0xf788,	// (0x00087478) main_vded_pane_t

0x968c,	// (0x0008137c) vded_slider_pane

0x9696,	// (0x00081386) vded_video_pane

0xee02,	// (0x00086af2) vded_video_pane_g1

0x96a0,	// (0x00081390) vded_video_pane_g2

0x0b59,	// (0x00078849) vded_video_pane_g3

0x0002,

0xf78d,	// (0x0008747d) vded_video_pane_g

0xee0c,	// (0x00086afc) vded_slider_pane_g1

0xe5ce,	// (0x000862be) vded_slider_pane_g2

0xee15,	// (0x00086b05) vded_slider_pane_g3

0xee1e,	// (0x00086b0e) vded_slider_pane_g4

0xee27,	// (0x00086b17) vded_slider_pane_g5

0x0004,

0xf794,	// (0x00087484) vded_slider_pane_g

0x9254,	// (0x00080f44) mup3_rocker_pane_ParamLimits

0x9254,	// (0x00080f44) mup3_rocker_pane

0x96a9,	// (0x00081399) mup3_control_keys_pane_g1

0x96b1,	// (0x000813a1) mup3_control_keys_pane_g2

0x96b9,	// (0x000813a9) mup3_control_keys_pane_g3

0x96c1,	// (0x000813b1) mup3_control_keys_pane_g4

0x0003,

0xf79f,	// (0x0008748f) mup3_control_keys_pane_g

0x5336,	// (0x0007d026) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5336,	// (0x0007d026) popup_toolbar2_fixed_window_cp01

0x926e,	// (0x00080f5e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x926e,	// (0x00080f5e) popup_toolbar2_fixed_window_cp02

0x7cdc,	// (0x0007f9cc) popup_call2_audio_second_window_t4_ParamLimits

0x7cdc,	// (0x0007f9cc) popup_call2_audio_second_window_t4

0x821a,	// (0x0007ff0a) popup_call2_audio_first_window_t6_ParamLimits

0x821a,	// (0x0007ff0a) popup_call2_audio_first_window_t6

0xe007,	// (0x00085cf7) popup_call2_audio_out_window_t6_ParamLimits

0xe007,	// (0x00085cf7) popup_call2_audio_out_window_t6

0x5382,	// (0x0007d072) main_vitu_pane

0xdf64,	// (0x00085c54) aid_size_cell_itu_ParamLimits

0xdf64,	// (0x00085c54) aid_size_cell_itu

0xdf64,	// (0x00085c54) bg_popup_window_pane_cp08_ParamLimits

0xdf64,	// (0x00085c54) bg_popup_window_pane_cp08

0xdf64,	// (0x00085c54) field_vitu_entry_pane_ParamLimits

0xdf64,	// (0x00085c54) field_vitu_entry_pane

0xdf64,	// (0x00085c54) grid_vitu_function_pane_ParamLimits

0xdf64,	// (0x00085c54) grid_vitu_function_pane

0xdf64,	// (0x00085c54) grid_vitu_itu_pane_ParamLimits

0xdf64,	// (0x00085c54) grid_vitu_itu_pane

0xdf64,	// (0x00085c54) cell_vitu_itu_pane_ParamLimits

0xdf64,	// (0x00085c54) cell_vitu_itu_pane

0xdf64,	// (0x00085c54) cell_vitu_function_pane_ParamLimits

0xdf64,	// (0x00085c54) cell_vitu_function_pane

0xdf0b,	// (0x00085bfb) bg_popup_sub_pane_cp08_ParamLimits

0xdf0b,	// (0x00085bfb) bg_popup_sub_pane_cp08

0x0b2b,	// (0x0007881b) field_vitu_entry_pane_t1_ParamLimits

0x0b2b,	// (0x0007881b) field_vitu_entry_pane_t1

0xebee,	// (0x000868de) field_vitu_entry_pane_t2_ParamLimits

0xebee,	// (0x000868de) field_vitu_entry_pane_t2

0x0001,

0xf7a8,	// (0x00087498) field_vitu_entry_pane_t_ParamLimits

0xf7a8,	// (0x00087498) field_vitu_entry_pane_t

0x740e,	// (0x0007f0fe) bg_button_pane_cp05_ParamLimits

0x740e,	// (0x0007f0fe) bg_button_pane_cp05

0xee30,	// (0x00086b20) cell_vitu_itu_pane_g1

0xee4c,	// (0x00086b3c) cell_vitu_itu_pane_t1_ParamLimits

0xee4c,	// (0x00086b3c) cell_vitu_itu_pane_t1

0xee4c,	// (0x00086b3c) cell_vitu_itu_pane_t2_ParamLimits

0xee4c,	// (0x00086b3c) cell_vitu_itu_pane_t2

0x0002,

0xf7ad,	// (0x0008749d) cell_vitu_itu_pane_t_ParamLimits

0xf7ad,	// (0x0008749d) cell_vitu_itu_pane_t

0xd871,	// (0x00085561) bg_button_pane_cp07

0x0b59,	// (0x00078849) cell_vitu_function_pane_g1

0x54b8,	// (0x0007d1a8) main_calc_pane_g1

0x50f4,	// (0x0007cde4) aid_visual_content_pane

0x5382,	// (0x0007d072) main_vradio_pane

0x0875,	// (0x00078565) main_vradio_pane_g1_ParamLimits

0x0875,	// (0x00078565) main_vradio_pane_g1

0x0875,	// (0x00078565) main_vradio_pane_g2_ParamLimits

0x0875,	// (0x00078565) main_vradio_pane_g2

0x0001,

0xf7b4,	// (0x000874a4) main_vradio_pane_g_ParamLimits

0xf7b4,	// (0x000874a4) main_vradio_pane_g

0x16e1,	// (0x000793d1) main_vradio_pane_t1_ParamLimits

0x16e1,	// (0x000793d1) main_vradio_pane_t1

0x16e1,	// (0x000793d1) main_vradio_pane_t2_ParamLimits

0x16e1,	// (0x000793d1) main_vradio_pane_t2

0x16e1,	// (0x000793d1) main_vradio_pane_t3_ParamLimits

0x16e1,	// (0x000793d1) main_vradio_pane_t3

0x0002,

0xf7b9,	// (0x000874a9) main_vradio_pane_t_ParamLimits

0xf7b9,	// (0x000874a9) main_vradio_pane_t

0xdf64,	// (0x00085c54) vradio_rocker_control_pane_ParamLimits

0xdf64,	// (0x00085c54) vradio_rocker_control_pane

0xdf64,	// (0x00085c54) vradio_station_info_pane_ParamLimits

0xdf64,	// (0x00085c54) vradio_station_info_pane

0xdf0b,	// (0x00085bfb) vradio_frequency_info_pane_ParamLimits

0xdf0b,	// (0x00085bfb) vradio_frequency_info_pane

0x0b59,	// (0x00078849) vradio_station_info_pane_g1

0xee4c,	// (0x00086b3c) vradio_station_info_pane_t1_ParamLimits

0xee4c,	// (0x00086b3c) vradio_station_info_pane_t1

0x16e1,	// (0x000793d1) vradio_station_info_pane_t2_ParamLimits

0x16e1,	// (0x000793d1) vradio_station_info_pane_t2

0x0001,

0xf7c0,	// (0x000874b0) vradio_station_info_pane_t_ParamLimits

0xf7c0,	// (0x000874b0) vradio_station_info_pane_t

0xd871,	// (0x00085561) vradio_tuning_pane

0x96d1,	// (0x000813c1) vradio_rocker_control_pane_g1

0xee60,	// (0x00086b50) vradio_rocker_control_pane_g2

0x96d9,	// (0x000813c9) vradio_rocker_control_pane_g3

0x96e1,	// (0x000813d1) vradio_rocker_control_pane_g4

0x96e9,	// (0x000813d9) vradio_rocker_control_pane_g5

0x0004,

0xf7c5,	// (0x000874b5) vradio_rocker_control_pane_g

0x0b59,	// (0x00078849) vradio_frequency_info_pane_g1

0x0b2b,	// (0x0007881b) vradio_frequency_info_pane_t1_ParamLimits

0x0b2b,	// (0x0007881b) vradio_frequency_info_pane_t1

0x96f1,	// (0x000813e1) vradio_tuning_pane_g1

0x96fe,	// (0x000813ee) vradio_tuning_pane_t1

0x513d,	// (0x0007ce2d) area_side_right_pane_ParamLimits

0x513d,	// (0x0007ce2d) area_side_right_pane

0xe3f7,	// (0x000860e7) status_small_pane_g1

0xe3ff,	// (0x000860ef) status_small_pane_g2

0xe408,	// (0x000860f8) status_small_pane_g3

0xe411,	// (0x00086101) status_small_pane_g4

0x0003,

0xf591,	// (0x00087281) status_small_pane_g

0xe41a,	// (0x0008610a) status_small_pane_t1

0x5382,	// (0x0007d072) main_video3_pane

0xee68,	// (0x00086b58) cams_zoom_vslider_pane

0xee70,	// (0x00086b60) image3_wide_pane_ParamLimits

0xee70,	// (0x00086b60) image3_wide_pane

0xee8a,	// (0x00086b7a) image3_wide_small_pane

0xee96,	// (0x00086b86) main_video3_pane_g1_ParamLimits

0xee96,	// (0x00086b86) main_video3_pane_g1

0xeeb2,	// (0x00086ba2) main_video3_pane_g2_ParamLimits

0xeeb2,	// (0x00086ba2) main_video3_pane_g2

0x0001,

0xf7d0,	// (0x000874c0) main_video3_pane_g_ParamLimits

0xf7d0,	// (0x000874c0) main_video3_pane_g

0xeece,	// (0x00086bbe) main_video3_pane_t1_ParamLimits

0xeece,	// (0x00086bbe) main_video3_pane_t1

0xeef9,	// (0x00086be9) main_video3_pane_t2_ParamLimits

0xeef9,	// (0x00086be9) main_video3_pane_t2

0xef24,	// (0x00086c14) main_video3_pane_t3_ParamLimits

0xef24,	// (0x00086c14) main_video3_pane_t3

0x0002,

0xf7d5,	// (0x000874c5) main_video3_pane_t_ParamLimits

0xf7d5,	// (0x000874c5) main_video3_pane_t

0xef51,	// (0x00086c41) cams_zoom_vslider_pane_g1

0xef5a,	// (0x00086c4a) cams_zoom_vslider_pane_g2

0x0001,

0xf7dc,	// (0x000874cc) cams_zoom_vslider_pane_g

0xef62,	// (0x00086c52) small_slider_vertical_pane

0x0b59,	// (0x00078849) small_slider_vertical_pane_g1

0x0b59,	// (0x00078849) small_slider_vertical_pane_g2

0xef6a,	// (0x00086c5a) small_slider_vertical_pane_g3

0x0002,

0xf7e1,	// (0x000874d1) small_slider_vertical_pane_g

0x5382,	// (0x0007d072) main_hwr_training_pane

0xef73,	// (0x00086c63) hwr_training_instruct_pane_ParamLimits

0xef73,	// (0x00086c63) hwr_training_instruct_pane

0x970d,	// (0x000813fd) hwr_training_navi_pane_ParamLimits

0x970d,	// (0x000813fd) hwr_training_navi_pane

0x9727,	// (0x00081417) hwr_training_write_pane_ParamLimits

0x9727,	// (0x00081417) hwr_training_write_pane

0xd871,	// (0x00085561) bg_frame_shadow_pane

0xefaa,	// (0x00086c9a) hwr_training_write_pane_g1

0xefb2,	// (0x00086ca2) hwr_training_write_pane_g2

0xefba,	// (0x00086caa) hwr_training_write_pane_g3

0xefc2,	// (0x00086cb2) hwr_training_write_pane_g4

0xefca,	// (0x00086cba) hwr_training_write_pane_g5

0xefd2,	// (0x00086cc2) hwr_training_write_pane_g6

0xefda,	// (0x00086cca) hwr_training_write_pane_g7

0x0006,

0xf7e8,	// (0x000874d8) hwr_training_write_pane_g

0x975f,	// (0x0008144f) hwr_training_navi_pane_g1_ParamLimits

0x975f,	// (0x0008144f) hwr_training_navi_pane_g1

0x9771,	// (0x00081461) hwr_training_navi_pane_g2_ParamLimits

0x9771,	// (0x00081461) hwr_training_navi_pane_g2

0x9783,	// (0x00081473) hwr_training_navi_pane_g3_ParamLimits

0x9783,	// (0x00081473) hwr_training_navi_pane_g3

0x9793,	// (0x00081483) hwr_training_navi_pane_g4_ParamLimits

0x9793,	// (0x00081483) hwr_training_navi_pane_g4

0x0004,

0xf7f7,	// (0x000874e7) hwr_training_navi_pane_g_ParamLimits

0xf7f7,	// (0x000874e7) hwr_training_navi_pane_g

0x97ad,	// (0x0008149d) hwr_training_navi_pane_t1

0x97bb,	// (0x000814ab) list_single_hwr_training_instruct_pane_ParamLimits

0x97bb,	// (0x000814ab) list_single_hwr_training_instruct_pane

0xefe2,	// (0x00086cd2) list_single_hwr_training_instruct_pane_t1

0xe7a4,	// (0x00086494) bg_frame_shadow_pane_g1

0xeff1,	// (0x00086ce1) bg_frame_shadow_pane_g2

0xeff9,	// (0x00086ce9) bg_frame_shadow_pane_g3

0xf001,	// (0x00086cf1) bg_frame_shadow_pane_g4

0xf009,	// (0x00086cf9) bg_frame_shadow_pane_g5

0xf011,	// (0x00086d01) bg_frame_shadow_pane_g6

0xf019,	// (0x00086d09) bg_frame_shadow_pane_g7

0x09ce,	// (0x000786be) bg_frame_shadow_pane_g8

0x0007,

0xf802,	// (0x000874f2) bg_frame_shadow_pane_g

0x5382,	// (0x0007d072) main_video_tele_dialer_pane

0x97e0,	// (0x000814d0) aid_size_cell_video_keypad_ParamLimits

0x97e0,	// (0x000814d0) aid_size_cell_video_keypad

0x97f0,	// (0x000814e0) grid_video_dialer_keypad_pane_ParamLimits

0x97f0,	// (0x000814e0) grid_video_dialer_keypad_pane

0x9824,	// (0x00081514) video_down_pane_cp_ParamLimits

0x9824,	// (0x00081514) video_down_pane_cp

0x984e,	// (0x0008153e) cell_video_dialer_keypad_pane_ParamLimits

0x984e,	// (0x0008153e) cell_video_dialer_keypad_pane

0xf021,	// (0x00086d11) bg_button_pane_cp08_ParamLimits

0xf021,	// (0x00086d11) bg_button_pane_cp08

0x9863,	// (0x00081553) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9863,	// (0x00081553) cell_video_dialer_keypad_pane_g1

0x9248,	// (0x00080f38) mup3_rocker2_pane_ParamLimits

0x9248,	// (0x00080f38) mup3_rocker2_pane

0x0b59,	// (0x00078849) mup3_rocker2_pane_g1

0x8687,	// (0x00080377) main_dialer2_pane

0x5382,	// (0x0007d072) main_mp4_pane

0x98b8,	// (0x000815a8) main_mp4_pane_g1_ParamLimits

0x98b8,	// (0x000815a8) main_mp4_pane_g1

0x98c6,	// (0x000815b6) main_mp4_pane_g2_ParamLimits

0x98c6,	// (0x000815b6) main_mp4_pane_g2

0x98d4,	// (0x000815c4) main_mp4_pane_g3_ParamLimits

0x98d4,	// (0x000815c4) main_mp4_pane_g3

0x9919,	// (0x00081609) main_mp4_pane_g4_ParamLimits

0x9919,	// (0x00081609) main_mp4_pane_g4

0x9947,	// (0x00081637) main_mp4_pane_g5_ParamLimits

0x9947,	// (0x00081637) main_mp4_pane_g5

0x0007,

0xf822,	// (0x00087512) main_mp4_pane_g_ParamLimits

0xf822,	// (0x00087512) main_mp4_pane_g

0x99bb,	// (0x000816ab) main_mp4_pane_t1_ParamLimits

0x99bb,	// (0x000816ab) main_mp4_pane_t1

0x9a17,	// (0x00081707) main_mp4_pane_t2_ParamLimits

0x9a17,	// (0x00081707) main_mp4_pane_t2

0xf02d,	// (0x00086d1d) main_mp4_pane_t3_ParamLimits

0xf02d,	// (0x00086d1d) main_mp4_pane_t3

0x9a69,	// (0x00081759) main_mp4_pane_t4_ParamLimits

0x9a69,	// (0x00081759) main_mp4_pane_t4

0x0003,

0xf833,	// (0x00087523) main_mp4_pane_t_ParamLimits

0xf833,	// (0x00087523) main_mp4_pane_t

0x9aad,	// (0x0008179d) mp4_progress_pane_ParamLimits

0x9aad,	// (0x0008179d) mp4_progress_pane

0x9af7,	// (0x000817e7) mp4_rocker_pane_ParamLimits

0x9af7,	// (0x000817e7) mp4_rocker_pane

0x1e80,	// (0x00079b70) mp4_progress_pane_t1

0x1e99,	// (0x00079b89) mp4_progress_pane_t2

0x0001,

0xf83c,	// (0x0008752c) mp4_progress_pane_t

0x1eb2,	// (0x00079ba2) mup_progress_pane_cp04

0xf07b,	// (0x00086d6b) mp4_rocker_pane_g1

0x9b17,	// (0x00081807) aid_cell_size_keypad2_ParamLimits

0x9b17,	// (0x00081807) aid_cell_size_keypad2

0x9b27,	// (0x00081817) dialer2_ne_pane_ParamLimits

0x9b27,	// (0x00081817) dialer2_ne_pane

0x9b35,	// (0x00081825) grid_dialer2_keypad_pane_ParamLimits

0x9b35,	// (0x00081825) grid_dialer2_keypad_pane

0xf053,	// (0x00086d43) bg_popup_call_pane_cp07_ParamLimits

0xf053,	// (0x00086d43) bg_popup_call_pane_cp07

0x9b45,	// (0x00081835) dialer2_ne_pane_t1_ParamLimits

0x9b45,	// (0x00081835) dialer2_ne_pane_t1

0x9b6a,	// (0x0008185a) cell_dialer2_keypad_pane_ParamLimits

0x9b6a,	// (0x0008185a) cell_dialer2_keypad_pane

0x1ed7,	// (0x00079bc7) bg_button_pane_pane_cp04_ParamLimits

0x1ed7,	// (0x00079bc7) bg_button_pane_pane_cp04

0x9b7f,	// (0x0008186f) cell_dialer2_keypad_pane_g1_ParamLimits

0x9b7f,	// (0x0008186f) cell_dialer2_keypad_pane_g1

0x5e78,	// (0x0007db68) aid_placing_vt_set_content_ParamLimits

0x5e78,	// (0x0007db68) aid_placing_vt_set_content

0x5ea4,	// (0x0007db94) aid_placing_vt_set_title_ParamLimits

0x5ea4,	// (0x0007db94) aid_placing_vt_set_title

0x5382,	// (0x0007d072) main_image3_pane

0x9c19,	// (0x00081909) area_side_right_pane_cp01_ParamLimits

0x9c19,	// (0x00081909) area_side_right_pane_cp01

0x9c46,	// (0x00081936) main_image3_pane_g1_ParamLimits

0x9c46,	// (0x00081936) main_image3_pane_g1

0x9c54,	// (0x00081944) main_image3_pane_g2_ParamLimits

0x9c54,	// (0x00081944) main_image3_pane_g2

0x9c6d,	// (0x0008195d) main_image3_pane_g3_ParamLimits

0x9c6d,	// (0x0008195d) main_image3_pane_g3

0x9c86,	// (0x00081976) main_image3_pane_g4_ParamLimits

0x9c86,	// (0x00081976) main_image3_pane_g4

0x0003,

0xf84b,	// (0x0008753b) main_image3_pane_g_ParamLimits

0xf84b,	// (0x0008753b) main_image3_pane_g

0x9c9f,	// (0x0008198f) main_image3_pane_t1_ParamLimits

0x9c9f,	// (0x0008198f) main_image3_pane_t1

0x9cc4,	// (0x000819b4) main_image3_pane_t2_ParamLimits

0x9cc4,	// (0x000819b4) main_image3_pane_t2

0x9ce3,	// (0x000819d3) main_image3_pane_t3_ParamLimits

0x9ce3,	// (0x000819d3) main_image3_pane_t3

0x0003,

0xf854,	// (0x00087544) main_image3_pane_t_ParamLimits

0xf854,	// (0x00087544) main_image3_pane_t

0xdf64,	// (0x00085c54) grid_sctrl_middle_pane_cp01_ParamLimits

0xdf64,	// (0x00085c54) grid_sctrl_middle_pane_cp01

0x9d44,	// (0x00081a34) cell_sctrl_middle_pane_cp01_ParamLimits

0x9d44,	// (0x00081a34) cell_sctrl_middle_pane_cp01

0x9d55,	// (0x00081a45) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9d55,	// (0x00081a45) cell_sctrl_middle_pane_cp01_g1

0x5382,	// (0x0007d072) main_call4_pane

0x9d62,	// (0x00081a52) aid_size_button_call4_ParamLimits

0x9d62,	// (0x00081a52) aid_size_button_call4

0x9d98,	// (0x00081a88) call4_windows_pane_ParamLimits

0x9d98,	// (0x00081a88) call4_windows_pane

0x9dad,	// (0x00081a9d) grid_call4_button_pane_ParamLimits

0x9dad,	// (0x00081a9d) grid_call4_button_pane

0x9ddb,	// (0x00081acb) call4_windows_conf_pane

0x9df2,	// (0x00081ae2) popup_call4_audio_first_window_ParamLimits

0x9df2,	// (0x00081ae2) popup_call4_audio_first_window

0x9e42,	// (0x00081b32) popup_call4_audio_second_window_ParamLimits

0x9e42,	// (0x00081b32) popup_call4_audio_second_window

0x9e5b,	// (0x00081b4b) popup_call4_audio_wait_window_ParamLimits

0x9e5b,	// (0x00081b4b) popup_call4_audio_wait_window

0x9e69,	// (0x00081b59) cell_call4_button_pane_ParamLimits

0x9e69,	// (0x00081b59) cell_call4_button_pane

0x9e8c,	// (0x00081b7c) bg_button_pane_cp09_ParamLimits

0x9e8c,	// (0x00081b7c) bg_button_pane_cp09

0x9e98,	// (0x00081b88) cell_call4_button_pane_g1_ParamLimits

0x9e98,	// (0x00081b88) cell_call4_button_pane_g1

0x9ea5,	// (0x00081b95) cell_call4_button_pane_t1_ParamLimits

0x9ea5,	// (0x00081b95) cell_call4_button_pane_t1

0x1eeb,	// (0x00079bdb) popup_call4_audio_conf_window_ParamLimits

0x1eeb,	// (0x00079bdb) popup_call4_audio_conf_window

0x927b,	// (0x00080f6b) mup3_progress_pane_t1_ParamLimits

0x929a,	// (0x00080f8a) mup3_progress_pane_t2_ParamLimits

0xeb17,	// (0x00086807) mup3_progress_pane_t3_ParamLimits

0xf729,	// (0x00087419) mup3_progress_pane_t_ParamLimits

0xeb34,	// (0x00086824) mup_progress_pane_cp03_ParamLimits

0x96c9,	// (0x000813b9) mup3_control_keys_pane_g4_copy1

0x9adb,	// (0x000817cb) mp4_rocker2_pane_ParamLimits

0x9adb,	// (0x000817cb) mp4_rocker2_pane

0x1f07,	// (0x00079bf7) mp4_rocker2_pane_g1

0x1eff,	// (0x00079bef) mp4_rocker2_pane_g2

0x9ee9,	// (0x00081bd9) mp4_rocker2_pane_g3

0x9ef1,	// (0x00081be1) mp4_rocker2_pane_g4

0x9ef9,	// (0x00081be9) mp4_rocker2_pane_g5

0x0004,

0xf85d,	// (0x0008754d) mp4_rocker2_pane_g

0x5382,	// (0x0007d072) main_camera4_pane

0x5382,	// (0x0007d072) main_video4_pane

0x9800,	// (0x000814f0) main_video_tele_dialer_pane_t1_ParamLimits

0x9800,	// (0x000814f0) main_video_tele_dialer_pane_t1

0x9812,	// (0x00081502) main_video_tele_dialer_pane_t2_ParamLimits

0x9812,	// (0x00081502) main_video_tele_dialer_pane_t2

0x0001,

0xf813,	// (0x00087503) main_video_tele_dialer_pane_t_ParamLimits

0xf813,	// (0x00087503) main_video_tele_dialer_pane_t

0x9f19,	// (0x00081c09) cam4_autofocus_pane_ParamLimits

0x9f19,	// (0x00081c09) cam4_autofocus_pane

0x9f33,	// (0x00081c23) cam4_image_uncrop_pane_ParamLimits

0x9f33,	// (0x00081c23) cam4_image_uncrop_pane

0x9f4a,	// (0x00081c3a) cam4_indicators_pane_ParamLimits

0x9f4a,	// (0x00081c3a) cam4_indicators_pane

0x9f66,	// (0x00081c56) main_camera4_pane_g1_ParamLimits

0x9f66,	// (0x00081c56) main_camera4_pane_g1

0x9f72,	// (0x00081c62) main_camera4_pane_g2_ParamLimits

0x9f72,	// (0x00081c62) main_camera4_pane_g2

0x9f72,	// (0x00081c62) main_camera4_pane_g3_ParamLimits

0x9f72,	// (0x00081c62) main_camera4_pane_g3

0x9f7e,	// (0x00081c6e) main_camera4_pane_g4_ParamLimits

0x9f7e,	// (0x00081c6e) main_camera4_pane_g4

0x9f8a,	// (0x00081c7a) main_camera4_pane_g5_ParamLimits

0x9f8a,	// (0x00081c7a) main_camera4_pane_g5

0x0005,

0xf868,	// (0x00087558) main_camera4_pane_g_ParamLimits

0xf868,	// (0x00087558) main_camera4_pane_g

0x9fa4,	// (0x00081c94) main_camera4_pane_t1_ParamLimits

0x9fa4,	// (0x00081c94) main_camera4_pane_t1

0x3228,	// (0x0007af18) bg_tb_trans_pane_cp06

0x9ff4,	// (0x00081ce4) cam4_indicators_pane_g1

0xa005,	// (0x00081cf5) cam4_indicators_pane_g2

0x0002,

0xf883,	// (0x00087573) cam4_indicators_pane_g

0xa023,	// (0x00081d13) cam4_indicators_pane_t1

0xa04d,	// (0x00081d3d) main_video4_pane_g1_ParamLimits

0xa04d,	// (0x00081d3d) main_video4_pane_g1

0xa059,	// (0x00081d49) main_video4_pane_g2_ParamLimits

0xa059,	// (0x00081d49) main_video4_pane_g2

0xa065,	// (0x00081d55) main_video4_pane_g3_ParamLimits

0xa065,	// (0x00081d55) main_video4_pane_g3

0xa071,	// (0x00081d61) main_video4_pane_g4_ParamLimits

0xa071,	// (0x00081d61) main_video4_pane_g4

0x0004,

0xf88a,	// (0x0008757a) main_video4_pane_g_ParamLimits

0xf88a,	// (0x0008757a) main_video4_pane_g

0xa091,	// (0x00081d81) vid4_indicators_pane_ParamLimits

0xa091,	// (0x00081d81) vid4_indicators_pane

0xa0b0,	// (0x00081da0) video4_image_uncrop_cif_pane_ParamLimits

0xa0b0,	// (0x00081da0) video4_image_uncrop_cif_pane

0xa0bf,	// (0x00081daf) video4_image_uncrop_nhd_pane_ParamLimits

0xa0bf,	// (0x00081daf) video4_image_uncrop_nhd_pane

0x9f33,	// (0x00081c23) video4_image_uncrop_vga_pane_ParamLimits

0x9f33,	// (0x00081c23) video4_image_uncrop_vga_pane

0x8679,	// (0x00080369) bg_tb_trans_pane_cp07

0xa0d6,	// (0x00081dc6) vid4_indicators_pane_g1

0xa0ea,	// (0x00081dda) vid4_indicators_pane_g2

0xa0fe,	// (0x00081dee) vid4_indicators_pane_g3

0x0004,

0xf895,	// (0x00087585) vid4_indicators_pane_g

0xa12d,	// (0x00081e1d) vid4_indicators_pane_t1

0xa144,	// (0x00081e34) cam4_autofocus_pane_g1

0xa14c,	// (0x00081e3c) cam4_autofocus_pane_g2

0xa154,	// (0x00081e44) cam4_autofocus_pane_g3

0x0002,

0xf8a0,	// (0x00087590) cam4_autofocus_pane_g

0xa15c,	// (0x00081e4c) cam4_autofocus_pane_g3_copy1

0x9832,	// (0x00081522) video_down_pane_cp_t1

0x9840,	// (0x00081530) video_down_pane_cp_t2

0x0001,

0xf818,	// (0x00087508) video_down_pane_cp_t

0x5368,	// (0x0007d058) popup_vitu2_window_ParamLimits

0x5368,	// (0x0007d058) popup_vitu2_window

0xa164,	// (0x00081e54) aid_size_cell2_itu2_ParamLimits

0xa164,	// (0x00081e54) aid_size_cell2_itu2

0xa180,	// (0x00081e70) aid_size_cell_itu2_ParamLimits

0xa180,	// (0x00081e70) aid_size_cell_itu2

0xa1ba,	// (0x00081eaa) bg_popup_window_pane_cp09_ParamLimits

0xa1ba,	// (0x00081eaa) bg_popup_window_pane_cp09

0xa1c8,	// (0x00081eb8) field_vitu2_entry_pane_ParamLimits

0xa1c8,	// (0x00081eb8) field_vitu2_entry_pane

0xa1e6,	// (0x00081ed6) grid_vitu2_function_pane_ParamLimits

0xa1e6,	// (0x00081ed6) grid_vitu2_function_pane

0xa226,	// (0x00081f16) grid_vitu2_itu_pane_ParamLimits

0xa226,	// (0x00081f16) grid_vitu2_itu_pane

0xa28a,	// (0x00081f7a) cell_vitu2_itu_pane_ParamLimits

0xa28a,	// (0x00081f7a) cell_vitu2_itu_pane

0xa2a3,	// (0x00081f93) cell_vitu2_function_pane_ParamLimits

0xa2a3,	// (0x00081f93) cell_vitu2_function_pane

0x1f0f,	// (0x00079bff) bg_popup_call_pane_cp08_ParamLimits

0x1f0f,	// (0x00079bff) bg_popup_call_pane_cp08

0x1f26,	// (0x00079c16) field_vitu2_entry_pane_g1

0x1f32,	// (0x00079c22) field_vitu2_entry_pane_g2

0x0002,

0xf8a7,	// (0x00087597) field_vitu2_entry_pane_g

0xa2e4,	// (0x00081fd4) field_vitu2_entry_pane_t1_ParamLimits

0xa2e4,	// (0x00081fd4) field_vitu2_entry_pane_t1

0x1f3e,	// (0x00079c2e) field_vitu2_entry_pane_t2_ParamLimits

0x1f3e,	// (0x00079c2e) field_vitu2_entry_pane_t2

0x0001,

0xf8ae,	// (0x0008759e) field_vitu2_entry_pane_t_ParamLimits

0xf8ae,	// (0x0008759e) field_vitu2_entry_pane_t

0x89c1,	// (0x000806b1) bg_button_pane_cp010_ParamLimits

0x89c1,	// (0x000806b1) bg_button_pane_cp010

0xa316,	// (0x00082006) cell_vitu2_itu_pane_g1

0xa33c,	// (0x0008202c) cell_vitu2_itu_pane_t1_ParamLimits

0xa33c,	// (0x0008202c) cell_vitu2_itu_pane_t1

0x4fd8,	// (0x0007ccc8) cell_vitu2_itu_pane_t2_ParamLimits

0x4fd8,	// (0x0007ccc8) cell_vitu2_itu_pane_t2

0x0002,

0xf8b8,	// (0x000875a8) cell_vitu2_itu_pane_t_ParamLimits

0xf8b8,	// (0x000875a8) cell_vitu2_itu_pane_t

0x8679,	// (0x00080369) bg_button_pane_cp011

0xa388,	// (0x00082078) cell_vitu2_function_pane_g1

0x5382,	// (0x0007d072) main_myfav_hc_pane

0x9d25,	// (0x00081a15) popup_image3_note_pane_ParamLimits

0x9d25,	// (0x00081a15) popup_image3_note_pane

0x9d33,	// (0x00081a23) popup_image3_tool_bar_pane_ParamLimits

0x9d33,	// (0x00081a23) popup_image3_tool_bar_pane

0x504e,	// (0x0007cd3e) cell_vitu2_itu_pane_t3_ParamLimits

0x504e,	// (0x0007cd3e) cell_vitu2_itu_pane_t3

0xd871,	// (0x00085561) bg_popup_trans_pane

0x1f63,	// (0x00079c53) grid_image3_tool_bar_pane

0x1f6d,	// (0x00079c5d) bg_popup_trans_pane_g1

0x0d6a,	// (0x00078a5a) bg_popup_trans_pane_g2

0x1f75,	// (0x00079c65) bg_popup_trans_pane_g3

0x1f7d,	// (0x00079c6d) bg_popup_trans_pane_g4

0x1f85,	// (0x00079c75) bg_popup_trans_pane_g5

0x1f8d,	// (0x00079c7d) bg_popup_trans_pane_g6

0x1f95,	// (0x00079c85) bg_popup_trans_pane_g7

0x1f9d,	// (0x00079c8d) bg_popup_trans_pane_g8

0x0d4a,	// (0x00078a3a) bg_popup_trans_pane_g9

0x0008,

0xf8bf,	// (0x000875af) bg_popup_trans_pane_g

0x1fa5,	// (0x00079c95) cell_image3_tool_bar_pane_ParamLimits

0x1fa5,	// (0x00079c95) cell_image3_tool_bar_pane

0x0b59,	// (0x00078849) cell_image3_tool_bar_pane_g1

0xd871,	// (0x00085561) bg_popup_trans_pane_cp1

0x1fb9,	// (0x00079ca9) popup_image3_note_pane_t1

0x1fc7,	// (0x00079cb7) popup_image3_note_pane_t2

0x1fd5,	// (0x00079cc5) popup_image3_note_pane_t3

0x0002,

0xf8d2,	// (0x000875c2) popup_image3_note_pane_t

0x1fe3,	// (0x00079cd3) popup_image3_note_pane_t3_copy1

0xa39c,	// (0x0008208c) bg_myfav_hc_instruction_pane_ParamLimits

0xa39c,	// (0x0008208c) bg_myfav_hc_instruction_pane

0xa3b4,	// (0x000820a4) cell_myfav_contact_pane_ParamLimits

0xa3b4,	// (0x000820a4) cell_myfav_contact_pane

0xa3ce,	// (0x000820be) cell_myfav_contact_pane_cp1_ParamLimits

0xa3ce,	// (0x000820be) cell_myfav_contact_pane_cp1

0xa3e6,	// (0x000820d6) cell_myfav_contact_pane_cp2_ParamLimits

0xa3e6,	// (0x000820d6) cell_myfav_contact_pane_cp2

0xa3fe,	// (0x000820ee) cell_myfav_contact_pane_cp3_ParamLimits

0xa3fe,	// (0x000820ee) cell_myfav_contact_pane_cp3

0xa415,	// (0x00082105) cell_myfav_contact_pane_cp4_ParamLimits

0xa415,	// (0x00082105) cell_myfav_contact_pane_cp4

0xa42b,	// (0x0008211b) cell_myfav_contact_pane_cp5_ParamLimits

0xa42b,	// (0x0008211b) cell_myfav_contact_pane_cp5

0xa43f,	// (0x0008212f) cell_myfav_contact_pane_cp6_ParamLimits

0xa43f,	// (0x0008212f) cell_myfav_contact_pane_cp6

0xa453,	// (0x00082143) cell_myfav_contact_pane_cp7_ParamLimits

0xa453,	// (0x00082143) cell_myfav_contact_pane_cp7

0x1ff1,	// (0x00079ce1) listscroll_gen_pane_cp05

0xa46b,	// (0x0008215b) main_myfav_hc_pane_g1_ParamLimits

0xa46b,	// (0x0008215b) main_myfav_hc_pane_g1

0xa481,	// (0x00082171) main_myfav_hc_pane_g2_ParamLimits

0xa481,	// (0x00082171) main_myfav_hc_pane_g2

0x0002,

0xf8d9,	// (0x000875c9) main_myfav_hc_pane_g_ParamLimits

0xf8d9,	// (0x000875c9) main_myfav_hc_pane_g

0xa4af,	// (0x0008219f) main_myfav_hc_pane_t1_ParamLimits

0xa4af,	// (0x0008219f) main_myfav_hc_pane_t1

0x1ffa,	// (0x00079cea) main_myfav_hc_pane_t2_ParamLimits

0x1ffa,	// (0x00079cea) main_myfav_hc_pane_t2

0x200c,	// (0x00079cfc) main_myfav_hc_pane_t3_ParamLimits

0x200c,	// (0x00079cfc) main_myfav_hc_pane_t3

0xa4c6,	// (0x000821b6) main_myfav_hc_pane_t4_ParamLimits

0xa4c6,	// (0x000821b6) main_myfav_hc_pane_t4

0x0004,

0xf8e0,	// (0x000875d0) main_myfav_hc_pane_t_ParamLimits

0xf8e0,	// (0x000875d0) main_myfav_hc_pane_t

0x0b59,	// (0x00078849) bg_myfav_hc_instruction_pane_g1

0x201e,	// (0x00079d0e) cell_myfav_contact_pane_g1_ParamLimits

0x201e,	// (0x00079d0e) cell_myfav_contact_pane_g1

0x201e,	// (0x00079d0e) cell_myfav_contact_pane_g2_ParamLimits

0x201e,	// (0x00079d0e) cell_myfav_contact_pane_g2

0x202a,	// (0x00079d1a) cell_myfav_contact_pane_g3_ParamLimits

0x202a,	// (0x00079d1a) cell_myfav_contact_pane_g3

0x0875,	// (0x00078565) cell_myfav_contact_pane_g4_ParamLimits

0x0875,	// (0x00078565) cell_myfav_contact_pane_g4

0x2037,	// (0x00079d27) cell_myfav_contact_pane_g5_ParamLimits

0x2037,	// (0x00079d27) cell_myfav_contact_pane_g5

0x0004,

0xf8eb,	// (0x000875db) cell_myfav_contact_pane_g_ParamLimits

0xf8eb,	// (0x000875db) cell_myfav_contact_pane_g

0xa497,	// (0x00082187) main_myfav_hc_pane_g3_ParamLimits

0xa497,	// (0x00082187) main_myfav_hc_pane_g3

0x5271,	// (0x0007cf61) popup_adpt_find_window

0xa4f0,	// (0x000821e0) afind_page_pane_ParamLimits

0xa4f0,	// (0x000821e0) afind_page_pane

0xa4fd,	// (0x000821ed) aid_size_cell_afind_ParamLimits

0xa4fd,	// (0x000821ed) aid_size_cell_afind

0xa517,	// (0x00082207) bg_popup_sub_pane_cp09_ParamLimits

0xa517,	// (0x00082207) bg_popup_sub_pane_cp09

0xa524,	// (0x00082214) find_pane_cp01_ParamLimits

0xa524,	// (0x00082214) find_pane_cp01

0x2043,	// (0x00079d33) grid_afind_control_pane_ParamLimits

0x2043,	// (0x00079d33) grid_afind_control_pane

0xa531,	// (0x00082221) grid_afind_pane_ParamLimits

0xa531,	// (0x00082221) grid_afind_pane

0xa54d,	// (0x0008223d) cell_afind_pane_ParamLimits

0xa54d,	// (0x0008223d) cell_afind_pane

0x0b59,	// (0x00078849) afind_page_pane_g1

0xa595,	// (0x00082285) afind_page_pane_g2

0xa59e,	// (0x0008228e) afind_page_pane_g3

0x0002,

0xf8f6,	// (0x000875e6) afind_page_pane_g

0xa5a7,	// (0x00082297) afind_page_pane_t1

0x2057,	// (0x00079d47) cell_afind_grid_control_pane_ParamLimits

0x2057,	// (0x00079d47) cell_afind_grid_control_pane

0x1ed7,	// (0x00079bc7) bg_button_pane_cp69_ParamLimits

0x1ed7,	// (0x00079bc7) bg_button_pane_cp69

0xa5c7,	// (0x000822b7) cell_afind_pane_g1_ParamLimits

0xa5c7,	// (0x000822b7) cell_afind_pane_g1

0xa5d4,	// (0x000822c4) cell_afind_pane_t1_ParamLimits

0xa5d4,	// (0x000822c4) cell_afind_pane_t1

0x0b63,	// (0x00078853) bg_button_pane_cp72

0x2066,	// (0x00079d56) cell_afind_grid_control_pane_g1

0x7a86,	// (0x0007f776) aid_image_placing_area_ParamLimits

0x7a86,	// (0x0007f776) aid_image_placing_area

0x0867,	// (0x00078557) field_vitu_entry_pane_g1_ParamLimits

0x0867,	// (0x00078557) field_vitu_entry_pane_g1

0x0867,	// (0x00078557) field_vitu_entry_pane_g2_ParamLimits

0x0867,	// (0x00078557) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x00086ef1) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x00086ef1) field_vitu_entry_pane_g

0xee30,	// (0x00086b20) cell_vitu_itu_pane_g1_ParamLimits

0xebee,	// (0x000868de) cell_vitu_itu_pane_t3_ParamLimits

0xebee,	// (0x000868de) cell_vitu_itu_pane_t3

0x1e80,	// (0x00079b70) mp4_progress_pane_t1_ParamLimits

0x1e99,	// (0x00079b89) mp4_progress_pane_t2_ParamLimits

0xf83c,	// (0x0008752c) mp4_progress_pane_t_ParamLimits

0x1eb2,	// (0x00079ba2) mup_progress_pane_cp04_ParamLimits

0xa4da,	// (0x000821ca) main_myfav_hc_pane_t5_ParamLimits

0xa4da,	// (0x000821ca) main_myfav_hc_pane_t5

0x4fd0,	// (0x0007ccc0) aid_zoom_text_primary

0x5271,	// (0x0007cf61) popup_adpt_find_window_ParamLimits

0x8679,	// (0x00080369) main_cam_set_pane

0x9f58,	// (0x00081c48) cam4_zoom_pane_ParamLimits

0x9f58,	// (0x00081c48) cam4_zoom_pane

0xa5e6,	// (0x000822d6) main_cam_set_pane_g1_ParamLimits

0xa5e6,	// (0x000822d6) main_cam_set_pane_g1

0xa5f4,	// (0x000822e4) main_cam_set_pane_g2_ParamLimits

0xa5f4,	// (0x000822e4) main_cam_set_pane_g2

0x0001,

0xf8fd,	// (0x000875ed) main_cam_set_pane_g_ParamLimits

0xf8fd,	// (0x000875ed) main_cam_set_pane_g

0xa600,	// (0x000822f0) main_cam_set_pane_t1_ParamLimits

0xa600,	// (0x000822f0) main_cam_set_pane_t1

0xa61c,	// (0x0008230c) main_cset_listscroll_pane_ParamLimits

0xa61c,	// (0x0008230c) main_cset_listscroll_pane

0xa64e,	// (0x0008233e) main_cset_slider_pane_ParamLimits

0xa64e,	// (0x0008233e) main_cset_slider_pane

0x2077,	// (0x00079d67) main_cset_list_pane_ParamLimits

0x2077,	// (0x00079d67) main_cset_list_pane

0x2087,	// (0x00079d77) scroll_pane_cp028

0xa66d,	// (0x0008235d) aid_area_touch_slider

0xa689,	// (0x00082379) cset_slider_pane

0xa6ac,	// (0x0008239c) main_cset_slider_pane_g1

0xa6c1,	// (0x000823b1) main_cset_slider_pane_g2

0x0011,

0xf902,	// (0x000875f2) main_cset_slider_pane_g

0x20c0,	// (0x00079db0) main_cset_slider_pane_t1

0xa783,	// (0x00082473) main_cset_slider_pane_t2

0xa79d,	// (0x0008248d) main_cset_slider_pane_t3

0xa7b7,	// (0x000824a7) main_cset_slider_pane_t4

0xa7d1,	// (0x000824c1) main_cset_slider_pane_t5

0xa7ef,	// (0x000824df) main_cset_slider_pane_t6

0xa806,	// (0x000824f6) main_cset_slider_pane_t7

0x000e,

0xf927,	// (0x00087617) main_cset_slider_pane_t

0xa912,	// (0x00082602) cset_list_set_pane_ParamLimits

0xa912,	// (0x00082602) cset_list_set_pane

0x215a,	// (0x00079e4a) aid_position_infowindow_above

0x2162,	// (0x00079e52) aid_position_infowindow_below

0x404f,	// (0x0007bd3f) cset_list_set_pane_g1_ParamLimits

0x404f,	// (0x0007bd3f) cset_list_set_pane_g1

0x216a,	// (0x00079e5a) cset_list_set_pane_g3_ParamLimits

0x216a,	// (0x00079e5a) cset_list_set_pane_g3

0x0001,

0xf946,	// (0x00087636) cset_list_set_pane_g_ParamLimits

0xf946,	// (0x00087636) cset_list_set_pane_g

0x2179,	// (0x00079e69) cset_list_set_pane_t1_ParamLimits

0x2179,	// (0x00079e69) cset_list_set_pane_t1

0xdf0b,	// (0x00085bfb) list_highlight_pane_cp021_ParamLimits

0xdf0b,	// (0x00085bfb) list_highlight_pane_cp021

0x1757,	// (0x00079447) cset_slider_pane_g1

0x1769,	// (0x00079459) cset_slider_pane_g2

0x1760,	// (0x00079450) cset_slider_pane_g3

0x0002,

0xf94b,	// (0x0008763b) cset_slider_pane_g

0xa928,	// (0x00082618) aid_area_touch_cam4_zoom

0xa930,	// (0x00082620) cam4_zoom_cont_pane

0xa938,	// (0x00082628) cam4_zoom_pane_g1

0xa940,	// (0x00082630) cam4_zoom_pane_g2

0xa948,	// (0x00082638) cam4_zoom_pane_g3

0x0002,

0xf952,	// (0x00087642) cam4_zoom_pane_g

0xa950,	// (0x00082640) cam4_zoom_cont_pane_g1

0xa959,	// (0x00082649) cam4_zoom_cont_pane_g2

0xa962,	// (0x00082652) cam4_zoom_cont_pane_g3

0x0002,

0xf959,	// (0x00087649) cam4_zoom_cont_pane_g

0x9d7c,	// (0x00081a6c) call4_image_pane_ParamLimits

0x9d7c,	// (0x00081a6c) call4_image_pane

0x9ddb,	// (0x00081acb) call4_windows_conf_pane_ParamLimits

0x9e20,	// (0x00081b10) popup_call4_audio_in_window_ParamLimits

0x9e20,	// (0x00081b10) popup_call4_audio_in_window

0xd871,	// (0x00085561) bg_popup_call2_act_pane_cp02

0x1ee3,	// (0x00079bd3) call4_list_conf_pane

0x0b59,	// (0x00078849) call4_image_pane_g1

0x0b59,	// (0x00078849) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x000870cd) call4_image_pane_g

0x21a9,	// (0x00079e99) list_single_graphic_popup_conf4_pane_ParamLimits

0x21a9,	// (0x00079e99) list_single_graphic_popup_conf4_pane

0xd871,	// (0x00085561) list_highlight_pane_cp022

0x21bc,	// (0x00079eac) list_single_graphic_popup_conf4_pane_g1

0x1325,	// (0x00079015) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf960,	// (0x00087650) list_single_graphic_popup_conf4_pane_g

0x21c4,	// (0x00079eb4) list_single_graphic_popup_conf4_pane_t1

0x6008,	// (0x0007dcf8) popup_vtel_slider_window_ParamLimits

0x6008,	// (0x0007dcf8) popup_vtel_slider_window

0x1ec5,	// (0x00079bb5) dialer2_ne_pane_t2_ParamLimits

0x1ec5,	// (0x00079bb5) dialer2_ne_pane_t2

0x0001,

0xf841,	// (0x00087531) dialer2_ne_pane_t_ParamLimits

0xf841,	// (0x00087531) dialer2_ne_pane_t

0xdf0b,	// (0x00085bfb) bg_popup_sub_pane_cp010_ParamLimits

0xdf0b,	// (0x00085bfb) bg_popup_sub_pane_cp010

0xa96b,	// (0x0008265b) popup_vtel_slider_window_g1_ParamLimits

0xa96b,	// (0x0008265b) popup_vtel_slider_window_g1

0xa977,	// (0x00082667) popup_vtel_slider_window_g2_ParamLimits

0xa977,	// (0x00082667) popup_vtel_slider_window_g2

0x0003,

0xf965,	// (0x00087655) popup_vtel_slider_window_g_ParamLimits

0xf965,	// (0x00087655) popup_vtel_slider_window_g

0xa9bf,	// (0x000826af) vtel_slider_pane_ParamLimits

0xa9bf,	// (0x000826af) vtel_slider_pane

0xa9ce,	// (0x000826be) vtel_slider_pane_g1_ParamLimits

0xa9ce,	// (0x000826be) vtel_slider_pane_g1

0xa9db,	// (0x000826cb) vtel_slider_pane_g2_ParamLimits

0xa9db,	// (0x000826cb) vtel_slider_pane_g2

0xa9e8,	// (0x000826d8) vtel_slider_pane_g3_ParamLimits

0xa9e8,	// (0x000826d8) vtel_slider_pane_g3

0xa9ce,	// (0x000826be) vtel_slider_pane_g4_ParamLimits

0xa9ce,	// (0x000826be) vtel_slider_pane_g4

0xa9f5,	// (0x000826e5) vtel_slider_pane_g5_ParamLimits

0xa9f5,	// (0x000826e5) vtel_slider_pane_g5

0x0004,

0xf96e,	// (0x0008765e) vtel_slider_pane_g_ParamLimits

0xf96e,	// (0x0008765e) vtel_slider_pane_g

0x8679,	// (0x00080369) main_gallery2_pane

0xa19c,	// (0x00081e8c) aid_size_row_itut2_dropdow_list_ParamLimits

0xa19c,	// (0x00081e8c) aid_size_row_itut2_dropdow_list

0xa206,	// (0x00081ef6) grid_vitu2_function_top_pane_ParamLimits

0xa206,	// (0x00081ef6) grid_vitu2_function_top_pane

0xa25a,	// (0x00081f4a) popup_vitu2_dropdown_list_window_ParamLimits

0xa25a,	// (0x00081f4a) popup_vitu2_dropdown_list_window

0xa278,	// (0x00081f68) popup_vitu2_match_list_window

0xaa02,	// (0x000826f2) cell_vitu2_function_top_pane_ParamLimits

0xaa02,	// (0x000826f2) cell_vitu2_function_top_pane

0xaa1c,	// (0x0008270c) cell_vitu2_function_top_pane_cp01_ParamLimits

0xaa1c,	// (0x0008270c) cell_vitu2_function_top_pane_cp01

0xaa38,	// (0x00082728) cell_vitu2_function_top_wide_pane_ParamLimits

0xaa38,	// (0x00082728) cell_vitu2_function_top_wide_pane

0x8679,	// (0x00080369) bg_button_pane_cp012

0xaa56,	// (0x00082746) cell_vitu2_function_top_pane_g1

0xaa6a,	// (0x0008275a) bg_button_pane_cp013_ParamLimits

0xaa6a,	// (0x0008275a) bg_button_pane_cp013

0xaa86,	// (0x00082776) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xaa86,	// (0x00082776) cell_vitu2_function_top_wide_pane_g1

0x5368,	// (0x0007d058) bg_popup_sub_pane_cp20

0xaa9e,	// (0x0008278e) list_vitu2_match_list_pane

0x1f6d,	// (0x00079c5d) bg_popup_sub_pane_cp20_g1

0x1f75,	// (0x00079c65) bg_popup_sub_pane_cp20_g2

0x0d6a,	// (0x00078a5a) bg_popup_sub_pane_cp20_g3

0x1f7d,	// (0x00079c6d) bg_popup_sub_pane_cp20_g4

0x0d4a,	// (0x00078a3a) bg_popup_sub_pane_cp20_g5

0x21da,	// (0x00079eca) bg_popup_sub_pane_cp20_g6

0x1f8d,	// (0x00079c7d) bg_popup_sub_pane_cp20_g7

0x1f95,	// (0x00079c85) bg_popup_sub_pane_cp20_g8

0x1f9d,	// (0x00079c8d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf979,	// (0x00087669) bg_popup_sub_pane_cp20_g

0xaab6,	// (0x000827a6) list_vitu2_match_list_item_pane_ParamLimits

0xaab6,	// (0x000827a6) list_vitu2_match_list_item_pane

0xaac8,	// (0x000827b8) list_vitu2_match_list_item_pane_t1

0x5382,	// (0x0007d072) bg_popup_sub_pane_cp21

0x0b19,	// (0x00078809) grid_vitu2_dropdown_list_pane

0xaad6,	// (0x000827c6) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xaad6,	// (0x000827c6) cell_vitu2_dropdown_list_char_pane

0xaaf9,	// (0x000827e9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xaaf9,	// (0x000827e9) cell_vitu2_dropdown_list_ctrl_pane

0x21f4,	// (0x00079ee4) cell_vitu2_dropdown_list_char_pane_g1

0x21eb,	// (0x00079edb) cell_vitu2_dropdown_list_char_pane_g2

0x21e2,	// (0x00079ed2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf98c,	// (0x0008767c) cell_vitu2_dropdown_list_char_pane_g

0xab23,	// (0x00082813) cell_vitu2_dropdown_list_char_pane_t1

0xab31,	// (0x00082821) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xab31,	// (0x00082821) cell_vitu2_dropdown_list_ctrl_pane_g1

0xab3e,	// (0x0008282e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xab3e,	// (0x0008282e) cell_vitu2_dropdown_list_ctrl_pane_g2

0xab4b,	// (0x0008283b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xab4b,	// (0x0008283b) cell_vitu2_dropdown_list_ctrl_pane_g3

0xab58,	// (0x00082848) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xab58,	// (0x00082848) cell_vitu2_dropdown_list_ctrl_pane_g4

0x3228,	// (0x0007af18) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x3228,	// (0x0007af18) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf993,	// (0x00087683) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf993,	// (0x00087683) cell_vitu2_dropdown_list_ctrl_pane_g

0xab74,	// (0x00082864) aid_size_cell_gallery2_ParamLimits

0xab74,	// (0x00082864) aid_size_cell_gallery2

0xab8e,	// (0x0008287e) grid_gallery2_pane_ParamLimits

0xab8e,	// (0x0008287e) grid_gallery2_pane

0xaba5,	// (0x00082895) scroll_pane_cp029_ParamLimits

0xaba5,	// (0x00082895) scroll_pane_cp029

0xabb5,	// (0x000828a5) cell_gallery2_pane_ParamLimits

0xabb5,	// (0x000828a5) cell_gallery2_pane

0x21fd,	// (0x00079eed) cell_gallery2_pane_g2

0x3667,	// (0x0007b357) cell_gallery2_pane_g3

0x2205,	// (0x00079ef5) cell_gallery2_pane_g4

0x220d,	// (0x00079efd) cell_gallery2_pane_g5

0x0b19,	// (0x00078809) grid_highlight_pane_cp10

0xa278,	// (0x00081f68) popup_vitu2_match_list_window_ParamLimits

0xa1aa,	// (0x00081e9a) popup_vitu2_query_window_ParamLimits

0xa1aa,	// (0x00081e9a) popup_vitu2_query_window

0x5382,	// (0x0007d072) bg_vitu2_candi_button_pane

0x21f4,	// (0x00079ee4) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x21eb,	// (0x00079edb) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x21e2,	// (0x00079ed2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xac0a,	// (0x000828fa) bg_button_pane_cp015

0xac1c,	// (0x0008290c) bg_button_pane_cp016

0xac2f,	// (0x0008291f) bg_button_pane_cp017

0xe43c,	// (0x0008612c) bg_popup_sub_pane_cp22

0x2215,	// (0x00079f05) popup_vitu2_query_window_g1

0xac74,	// (0x00082964) popup_vitu2_query_window_g2

0x0002,

0xf99e,	// (0x0008768e) popup_vitu2_query_window_g

0xac91,	// (0x00082981) popup_vitu2_query_window_t1_ParamLimits

0xac91,	// (0x00082981) popup_vitu2_query_window_t1

0xacc4,	// (0x000829b4) popup_vitu2_query_window_t2_ParamLimits

0xacc4,	// (0x000829b4) popup_vitu2_query_window_t2

0xacd6,	// (0x000829c6) popup_vitu2_query_window_t3_ParamLimits

0xacd6,	// (0x000829c6) popup_vitu2_query_window_t3

0xacfe,	// (0x000829ee) popup_vitu2_query_window_t4_ParamLimits

0xacfe,	// (0x000829ee) popup_vitu2_query_window_t4

0xad1f,	// (0x00082a0f) popup_vitu2_query_window_t5_ParamLimits

0xad1f,	// (0x00082a0f) popup_vitu2_query_window_t5

0x0006,

0xf9a5,	// (0x00087695) popup_vitu2_query_window_t_ParamLimits

0xf9a5,	// (0x00087695) popup_vitu2_query_window_t

0x206f,	// (0x00079d5f) main_cset_text_pane

0xa66d,	// (0x0008235d) aid_area_touch_slider_ParamLimits

0xa689,	// (0x00082379) cset_slider_pane_ParamLimits

0xa6ac,	// (0x0008239c) main_cset_slider_pane_g1_ParamLimits

0xa6c1,	// (0x000823b1) main_cset_slider_pane_g2_ParamLimits

0x2090,	// (0x00079d80) main_cset_slider_pane_g3_ParamLimits

0x2090,	// (0x00079d80) main_cset_slider_pane_g3

0xa6d6,	// (0x000823c6) main_cset_slider_pane_g4_ParamLimits

0xa6d6,	// (0x000823c6) main_cset_slider_pane_g4

0xa6e5,	// (0x000823d5) main_cset_slider_pane_g5_ParamLimits

0xa6e5,	// (0x000823d5) main_cset_slider_pane_g5

0xa6f3,	// (0x000823e3) main_cset_slider_pane_g6_ParamLimits

0xa6f3,	// (0x000823e3) main_cset_slider_pane_g6

0xf902,	// (0x000875f2) main_cset_slider_pane_g_ParamLimits

0x20c0,	// (0x00079db0) main_cset_slider_pane_t1_ParamLimits

0xa783,	// (0x00082473) main_cset_slider_pane_t2_ParamLimits

0xa79d,	// (0x0008248d) main_cset_slider_pane_t3_ParamLimits

0xa7b7,	// (0x000824a7) main_cset_slider_pane_t4_ParamLimits

0xa7d1,	// (0x000824c1) main_cset_slider_pane_t5_ParamLimits

0xa7ef,	// (0x000824df) main_cset_slider_pane_t6_ParamLimits

0xa806,	// (0x000824f6) main_cset_slider_pane_t7_ParamLimits

0xa834,	// (0x00082524) main_cset_slider_pane_t8_ParamLimits

0xa834,	// (0x00082524) main_cset_slider_pane_t8

0xa85c,	// (0x0008254c) main_cset_slider_pane_t9_ParamLimits

0xa85c,	// (0x0008254c) main_cset_slider_pane_t9

0xa884,	// (0x00082574) main_cset_slider_pane_t10_ParamLimits

0xa884,	// (0x00082574) main_cset_slider_pane_t10

0xa8ac,	// (0x0008259c) main_cset_slider_pane_t11_ParamLimits

0xa8ac,	// (0x0008259c) main_cset_slider_pane_t11

0xa8d6,	// (0x000825c6) main_cset_slider_pane_t12_ParamLimits

0xa8d6,	// (0x000825c6) main_cset_slider_pane_t12

0xa8f3,	// (0x000825e3) main_cset_slider_pane_t13_ParamLimits

0xa8f3,	// (0x000825e3) main_cset_slider_pane_t13

0xf927,	// (0x00087617) main_cset_slider_pane_t_ParamLimits

0xd871,	// (0x00085561) bg_popup_sub_pane_cp011

0x2221,	// (0x00079f11) main_cset_text_pane_g1

0x2229,	// (0x00079f19) main_cset_text_pane_t1

0x2237,	// (0x00079f27) main_cset_text_pane_t2

0x2245,	// (0x00079f35) main_cset_text_pane_t3

0x2253,	// (0x00079f43) main_cset_text_pane_t4

0x2261,	// (0x00079f51) main_cset_text_pane_t5

0x226f,	// (0x00079f5f) main_cset_text_pane_t6

0x227d,	// (0x00079f6d) main_cset_text_pane_t7

0x0006,

0xf9b4,	// (0x000876a4) main_cset_text_pane_t

0x5382,	// (0x0007d072) main_cam4_burst_pane

0x5382,	// (0x0007d072) main_cam5_pane

0xa5b5,	// (0x000822a5) bg_button_pane_cp019

0xa5be,	// (0x000822ae) bg_button_pane_cp020

0x209c,	// (0x00079d8c) main_cset_slider_pane_g7_ParamLimits

0x209c,	// (0x00079d8c) main_cset_slider_pane_g7

0x20a8,	// (0x00079d98) main_cset_slider_pane_g8_ParamLimits

0x20a8,	// (0x00079d98) main_cset_slider_pane_g8

0xa707,	// (0x000823f7) main_cset_slider_pane_g9_ParamLimits

0xa707,	// (0x000823f7) main_cset_slider_pane_g9

0xa713,	// (0x00082403) main_cset_slider_pane_g10_ParamLimits

0xa713,	// (0x00082403) main_cset_slider_pane_g10

0xa71f,	// (0x0008240f) main_cset_slider_pane_g11_ParamLimits

0xa71f,	// (0x0008240f) main_cset_slider_pane_g11

0xa72b,	// (0x0008241b) main_cset_slider_pane_g12_ParamLimits

0xa72b,	// (0x0008241b) main_cset_slider_pane_g12

0xa737,	// (0x00082427) main_cset_slider_pane_g13_ParamLimits

0xa737,	// (0x00082427) main_cset_slider_pane_g13

0xa743,	// (0x00082433) main_cset_slider_pane_g14_ParamLimits

0xa743,	// (0x00082433) main_cset_slider_pane_g14

0xa74f,	// (0x0008243f) main_cset_slider_pane_g15_ParamLimits

0xa74f,	// (0x0008243f) main_cset_slider_pane_g15

0x20e8,	// (0x00079dd8) main_cset_slider_pane_t14_ParamLimits

0x20e8,	// (0x00079dd8) main_cset_slider_pane_t14

0x2121,	// (0x00079e11) main_cset_slider_pane_t15_ParamLimits

0x2121,	// (0x00079e11) main_cset_slider_pane_t15

0xad96,	// (0x00082a86) aid_cam4_burst_size_cell_ParamLimits

0xad96,	// (0x00082a86) aid_cam4_burst_size_cell

0xadb2,	// (0x00082aa2) grid_cam4_burst_pane_ParamLimits

0xadb2,	// (0x00082aa2) grid_cam4_burst_pane

0xade2,	// (0x00082ad2) linegrid_cam4_burst_pane_ParamLimits

0xade2,	// (0x00082ad2) linegrid_cam4_burst_pane

0xae02,	// (0x00082af2) scroll_pane_cp30_ParamLimits

0xae02,	// (0x00082af2) scroll_pane_cp30

0xae0e,	// (0x00082afe) cell_cam4_burst_pane_ParamLimits

0xae0e,	// (0x00082afe) cell_cam4_burst_pane

0x2297,	// (0x00079f87) linegrid_cam4_burst_pane_g1_ParamLimits

0x2297,	// (0x00079f87) linegrid_cam4_burst_pane_g1

0xae4a,	// (0x00082b3a) linegrid_cam4_burst_pane_g2_ParamLimits

0xae4a,	// (0x00082b3a) linegrid_cam4_burst_pane_g2

0x22a4,	// (0x00079f94) linegrid_cam4_burst_pane_g3_ParamLimits

0x22a4,	// (0x00079f94) linegrid_cam4_burst_pane_g3

0x0002,

0xf9c3,	// (0x000876b3) linegrid_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x000876b3) linegrid_cam4_burst_pane_g

0xae5b,	// (0x00082b4b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xae5b,	// (0x00082b4b) linegrid_cam4_burst_pane_g3_copy1

0x22b1,	// (0x00079fa1) linegrid_cam4_burst_pane_g4_ParamLimits

0x22b1,	// (0x00079fa1) linegrid_cam4_burst_pane_g4

0xae75,	// (0x00082b65) linegrid_cam4_burst_pane_g5_ParamLimits

0xae75,	// (0x00082b65) linegrid_cam4_burst_pane_g5

0xae86,	// (0x00082b76) linegrid_cam4_burst_pane_g6_ParamLimits

0xae86,	// (0x00082b76) linegrid_cam4_burst_pane_g6

0x22be,	// (0x00079fae) linegrid_cam4_burst_pane_g7_ParamLimits

0x22be,	// (0x00079fae) linegrid_cam4_burst_pane_g7

0xae97,	// (0x00082b87) cell_cam4_burst_pane_g1

0x22d7,	// (0x00079fc7) main_cam5_pane_t1_ParamLimits

0x22d7,	// (0x00079fc7) main_cam5_pane_t1

0x22e9,	// (0x00079fd9) main_cam5_pane_t2_ParamLimits

0x22e9,	// (0x00079fd9) main_cam5_pane_t2

0x22fb,	// (0x00079feb) main_cam5_pane_t3_ParamLimits

0x22fb,	// (0x00079feb) main_cam5_pane_t3

0x230d,	// (0x00079ffd) main_cam5_pane_t4_ParamLimits

0x230d,	// (0x00079ffd) main_cam5_pane_t4

0x2325,	// (0x0007a015) main_cam5_pane_t5_ParamLimits

0x2325,	// (0x0007a015) main_cam5_pane_t5

0x2339,	// (0x0007a029) main_cam5_pane_t6_ParamLimits

0x2339,	// (0x0007a029) main_cam5_pane_t6

0x234d,	// (0x0007a03d) main_cam5_pane_t7_ParamLimits

0x234d,	// (0x0007a03d) main_cam5_pane_t7

0x235f,	// (0x0007a04f) main_cam5_pane_t8_ParamLimits

0x235f,	// (0x0007a04f) main_cam5_pane_t8

0x237b,	// (0x0007a06b) main_cam5_pane_t9_ParamLimits

0x237b,	// (0x0007a06b) main_cam5_pane_t9

0x238d,	// (0x0007a07d) main_cam5_pane_t10_ParamLimits

0x238d,	// (0x0007a07d) main_cam5_pane_t10

0x239f,	// (0x0007a08f) main_cam5_pane_t11_ParamLimits

0x239f,	// (0x0007a08f) main_cam5_pane_t11

0x23b1,	// (0x0007a0a1) main_cam5_pane_t12_ParamLimits

0x23b1,	// (0x0007a0a1) main_cam5_pane_t12

0x23c6,	// (0x0007a0b6) main_cam5_pane_t13_ParamLimits

0x23c6,	// (0x0007a0b6) main_cam5_pane_t13

0x000c,

0xf9cf,	// (0x000876bf) main_cam5_pane_t_ParamLimits

0xf9cf,	// (0x000876bf) main_cam5_pane_t

0x5327,	// (0x0007d017) popup_scut_keymap_window_ParamLimits

0x5327,	// (0x0007d017) popup_scut_keymap_window

0xaeaa,	// (0x00082b9a) aid_size_cell_brow_shortcut

0x0b19,	// (0x00078809) bg_popup_window_pane_cp010

0xaeb6,	// (0x00082ba6) grid_scut_pane

0xaec2,	// (0x00082bb2) cell_scut_pane_ParamLimits

0xaec2,	// (0x00082bb2) cell_scut_pane

0xaed9,	// (0x00082bc9) cell_scut_pane_g1

0x23e3,	// (0x0007a0d3) cell_scut_pane_t1

0x23f2,	// (0x0007a0e2) cell_scut_pane_t2

0xaee2,	// (0x00082bd2) cell_scut_pane_t3

0x0002,

0xf9ea,	// (0x000876da) cell_scut_pane_t

0x8e9a,	// (0x00080b8a) main_mup3_pane_g8_ParamLimits

0x8e9a,	// (0x00080b8a) main_mup3_pane_g8

0xa1aa,	// (0x00081e9a) area_vitu2_query_pane_ParamLimits

0xa1aa,	// (0x00081e9a) area_vitu2_query_pane

0xac42,	// (0x00082932) input_focus_pane_cp08

0x2401,	// (0x0007a0f1) area_vitu2_query_pane_g1

0xaef0,	// (0x00082be0) area_vitu2_query_pane_g2

0x0001,

0xf9f1,	// (0x000876e1) area_vitu2_query_pane_g

0xaf01,	// (0x00082bf1) area_vitu2_query_pane_t1_ParamLimits

0xaf01,	// (0x00082bf1) area_vitu2_query_pane_t1

0xaf15,	// (0x00082c05) area_vitu2_query_pane_t2_ParamLimits

0xaf15,	// (0x00082c05) area_vitu2_query_pane_t2

0xaf29,	// (0x00082c19) area_vitu2_query_pane_t3_ParamLimits

0xaf29,	// (0x00082c19) area_vitu2_query_pane_t3

0x240d,	// (0x0007a0fd) area_vitu2_query_pane_t4_ParamLimits

0x240d,	// (0x0007a0fd) area_vitu2_query_pane_t4

0x2435,	// (0x0007a125) area_vitu2_query_pane_t5_ParamLimits

0x2435,	// (0x0007a125) area_vitu2_query_pane_t5

0x245d,	// (0x0007a14d) area_vitu2_query_pane_t6_ParamLimits

0x245d,	// (0x0007a14d) area_vitu2_query_pane_t6

0x0006,

0xf9f6,	// (0x000876e6) area_vitu2_query_pane_t_ParamLimits

0xf9f6,	// (0x000876e6) area_vitu2_query_pane_t

0xaf51,	// (0x00082c41) bg_button_pane_cp018

0xaf5f,	// (0x00082c4f) bg_button_pane_cp021

0xaf6b,	// (0x00082c5b) bg_button_pane_cp022

0xaf7c,	// (0x00082c6c) input_focus_pane_cp09

0x1461,	// (0x00079151) aid_size_touch_mv_arrow_left

0x148a,	// (0x0007917a) aid_size_touch_mv_arrow_right

0xa767,	// (0x00082457) main_cset_slider_pane_g16_ParamLimits

0xa767,	// (0x00082457) main_cset_slider_pane_g16

0xa775,	// (0x00082465) main_cset_slider_pane_g17_ParamLimits

0xa775,	// (0x00082465) main_cset_slider_pane_g17

0xae97,	// (0x00082b87) cell_cam4_burst_pane_g1_ParamLimits

0xd871,	// (0x00085561) compa_mode_pane

0xa983,	// (0x00082673) popup_vtel_slider_window_g3_ParamLimits

0xa983,	// (0x00082673) popup_vtel_slider_window_g3

0xa997,	// (0x00082687) popup_vtel_slider_window_g4_ParamLimits

0xa997,	// (0x00082687) popup_vtel_slider_window_g4

0xa9ab,	// (0x0008269b) popup_vtel_slider_window_t1_ParamLimits

0xa9ab,	// (0x0008269b) popup_vtel_slider_window_t1

0x5382,	// (0x0007d072) main_cl_pane

0x8723,	// (0x00080413) popup_imed_adjust2_window_ParamLimits

0xe43c,	// (0x0008612c) bg_tb_trans_pane_cp05_ParamLimits

0xed65,	// (0x00086a55) popup_imed_adjust2_window_g1_ParamLimits

0xed74,	// (0x00086a64) popup_imed_adjust2_window_g2_ParamLimits

0xed74,	// (0x00086a64) popup_imed_adjust2_window_g2

0xed80,	// (0x00086a70) popup_imed_adjust2_window_g3_ParamLimits

0xed80,	// (0x00086a70) popup_imed_adjust2_window_g3

0x0002,

0xf76c,	// (0x0008745c) popup_imed_adjust2_window_g_ParamLimits

0xf76c,	// (0x0008745c) popup_imed_adjust2_window_g

0xed8c,	// (0x00086a7c) popup_imed_adjust2_window_t1_ParamLimits

0xeda4,	// (0x00086a94) slider_imed_adjust_pane_ParamLimits

0xedb8,	// (0x00086aa8) slider_imed_adjust_pane_g1_ParamLimits

0xedc8,	// (0x00086ab8) slider_imed_adjust_pane_g2_ParamLimits

0xedd8,	// (0x00086ac8) slider_imed_adjust_pane_g3_ParamLimits

0xede9,	// (0x00086ad9) slider_imed_adjust_pane_g4_ParamLimits

0xf773,	// (0x00087463) slider_imed_adjust_pane_g_ParamLimits

0x9f01,	// (0x00081bf1) aid_touch_area_cam4_ParamLimits

0x9f01,	// (0x00081bf1) aid_touch_area_cam4

0x9f11,	// (0x00081c01) battery_pane_cp01

0x9f98,	// (0x00081c88) main_camera4_pane_g6_ParamLimits

0x9f98,	// (0x00081c88) main_camera4_pane_g6

0x9fb6,	// (0x00081ca6) main_camera4_pane_t2_ParamLimits

0x9fb6,	// (0x00081ca6) main_camera4_pane_t2

0x0001,

0xf875,	// (0x00087565) main_camera4_pane_t_ParamLimits

0xf875,	// (0x00087565) main_camera4_pane_t

0xa03d,	// (0x00081d2d) aid_touch_area_vid4_ParamLimits

0xa03d,	// (0x00081d2d) aid_touch_area_vid4

0xa07d,	// (0x00081d6d) main_video4_pane_g5_ParamLimits

0xa07d,	// (0x00081d6d) main_video4_pane_g5

0xa0a1,	// (0x00081d91) vid4_progress_pane_ParamLimits

0xa0a1,	// (0x00081d91) vid4_progress_pane

0x20b4,	// (0x00079da4) main_cset_slider_pane_g18_ParamLimits

0x20b4,	// (0x00079da4) main_cset_slider_pane_g18

0x22cb,	// (0x00079fbb) cell_cam4_burst_pane_g2_ParamLimits

0x22cb,	// (0x00079fbb) cell_cam4_burst_pane_g2

0x0001,

0xf9ca,	// (0x000876ba) cell_cam4_burst_pane_g_ParamLimits

0xf9ca,	// (0x000876ba) cell_cam4_burst_pane_g

0xaf8d,	// (0x00082c7d) bg_cl_pane_ParamLimits

0xaf8d,	// (0x00082c7d) bg_cl_pane

0xaf99,	// (0x00082c89) cl_header_pane_ParamLimits

0xaf99,	// (0x00082c89) cl_header_pane

0xafa5,	// (0x00082c95) cl_listscroll_pane_ParamLimits

0xafa5,	// (0x00082c95) cl_listscroll_pane

0x24a9,	// (0x0007a199) bg_cl_pane_g1

0x24b1,	// (0x0007a1a1) bg_cl_pane_g2

0x24b9,	// (0x0007a1a9) bg_cl_pane_g3

0x24c1,	// (0x0007a1b1) bg_cl_pane_g4

0x24c9,	// (0x0007a1b9) bg_cl_pane_g5

0x24d1,	// (0x0007a1c1) bg_cl_pane_g6

0x24d9,	// (0x0007a1c9) bg_cl_pane_g7

0x24e1,	// (0x0007a1d1) bg_cl_pane_g8

0x24e9,	// (0x0007a1d9) bg_cl_pane_g9

0x0008,

0xfa05,	// (0x000876f5) bg_cl_pane_g

0xafb1,	// (0x00082ca1) aid_height_cl_leading_ParamLimits

0xafb1,	// (0x00082ca1) aid_height_cl_leading

0xafbd,	// (0x00082cad) aid_height_cl_text_ParamLimits

0xafbd,	// (0x00082cad) aid_height_cl_text

0xdf64,	// (0x00085c54) bg_cl_header_pane_ParamLimits

0xdf64,	// (0x00085c54) bg_cl_header_pane

0xafd5,	// (0x00082cc5) cl_header_pane_g1_ParamLimits

0xafd5,	// (0x00082cc5) cl_header_pane_g1

0xafe2,	// (0x00082cd2) cl_header_pane_t1_ParamLimits

0xafe2,	// (0x00082cd2) cl_header_pane_t1

0x24f1,	// (0x0007a1e1) cl_list_pane

0x2087,	// (0x00079d77) hc_scroll_pane_cp01

0x0d4a,	// (0x00078a3a) bg_cl_header_pane_g1

0x1f6d,	// (0x00079c5d) bg_cl_header_pane_g2

0x0d6a,	// (0x00078a5a) bg_cl_header_pane_g3

0x1f7d,	// (0x00079c6d) bg_cl_header_pane_g4

0x1f75,	// (0x00079c65) bg_cl_header_pane_g5

0x21da,	// (0x00079eca) bg_cl_header_pane_g6

0x1f95,	// (0x00079c85) bg_cl_header_pane_g7

0x1f9d,	// (0x00079c8d) bg_cl_header_pane_g8

0x1f8d,	// (0x00079c7d) bg_cl_header_pane_g9

0x0008,

0xfa18,	// (0x00087708) bg_cl_header_pane_g

0xaff4,	// (0x00082ce4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xaff4,	// (0x00082ce4) hc_cl_list_double_graphic_heading_pane

0xb005,	// (0x00082cf5) hc_cl_list_single_graphic_pane_ParamLimits

0xb005,	// (0x00082cf5) hc_cl_list_single_graphic_pane

0xb01e,	// (0x00082d0e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb01e,	// (0x00082d0e) hc_cl_list_single_graphic_pane_g1

0xb02a,	// (0x00082d1a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb02a,	// (0x00082d1a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa2b,	// (0x0008771b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa2b,	// (0x0008771b) hc_cl_list_single_graphic_pane_g

0xb03e,	// (0x00082d2e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb03e,	// (0x00082d2e) hc_cl_list_single_graphic_pane_t1

0xb01e,	// (0x00082d0e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb01e,	// (0x00082d0e) hc_cl_list_double_graphic_heading_pane_g1

0xb053,	// (0x00082d43) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb053,	// (0x00082d43) hc_cl_list_double_graphic_heading_pane_g2

0xb067,	// (0x00082d57) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb067,	// (0x00082d57) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa30,	// (0x00087720) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa30,	// (0x00087720) hc_cl_list_double_graphic_heading_pane_g

0xb07b,	// (0x00082d6b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb07b,	// (0x00082d6b) hc_cl_list_double_graphic_heading_pane_t1

0xb090,	// (0x00082d80) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb090,	// (0x00082d80) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa37,	// (0x00087727) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa37,	// (0x00087727) hc_cl_list_double_graphic_heading_pane_t

0xb0ad,	// (0x00082d9d) vid4_progress_pane_g1

0xb0bd,	// (0x00082dad) vid4_progress_pane_g2

0xb0cd,	// (0x00082dbd) vid4_progress_pane_g3

0xb0df,	// (0x00082dcf) vid4_progress_pane_g4

0x0004,

0xfa3c,	// (0x0008772c) vid4_progress_pane_g

0xb0f7,	// (0x00082de7) vid4_progress_pane_t1

0xb10d,	// (0x00082dfd) vid4_progress_pane_t2

0x0002,

0xfa47,	// (0x00087737) vid4_progress_pane_t

0xb137,	// (0x00082e27) wait_bar_pane_cp07

0xe658,	// (0x00086348) blid_firmament_pane_ParamLimits

0xe69b,	// (0x0008638b) popup_blid_sat_info2_window_g1

0xe6bf,	// (0x000863af) popup_blid_sat_info2_window_t3

0xe6cd,	// (0x000863bd) popup_blid_sat_info2_window_t4

0xe6db,	// (0x000863cb) popup_blid_sat_info2_window_t5

0xe6e9,	// (0x000863d9) popup_blid_sat_info2_window_t6

0xe6f9,	// (0x000863e9) popup_blid_sat_info2_window_t7

0xe707,	// (0x000863f7) popup_blid_sat_info2_window_t8

0xe715,	// (0x00086405) popup_blid_sat_info2_window_t9

0xe723,	// (0x00086413) popup_blid_sat_info2_window_t10

0xe7e4,	// (0x000864d4) aid_firma_cardinal_ParamLimits

0xe7f8,	// (0x000864e8) blid_firmament_pane_t1_ParamLimits

0xe80f,	// (0x000864ff) blid_firmament_pane_t2_ParamLimits

0xe826,	// (0x00086516) blid_firmament_pane_t3_ParamLimits

0xe83d,	// (0x0008652d) blid_firmament_pane_t4_ParamLimits

0xf665,	// (0x00087355) blid_firmament_pane_t_ParamLimits

0xe854,	// (0x00086544) blid_sat_info_pane_ParamLimits

0x8679,	// (0x00080369) main_cam_set_pane_ParamLimits

0x9573,	// (0x00081263) aid_size_cell_colour_35_ParamLimits

0x958d,	// (0x0008127d) aid_size_cell_colour_112_ParamLimits

0x95a4,	// (0x00081294) aid_size_cell_effect_ParamLimits

0xdf0b,	// (0x00085bfb) bg_tb_trans_pane_cp02_ParamLimits

0xec89,	// (0x00086979) heading_imed_pane_ParamLimits

0x95be,	// (0x000812ae) listscroll_imed_pane_ParamLimits

0x7f96,	// (0x0007fc86) popup_call2_audio_first_window_g5_ParamLimits

0x7f96,	// (0x0007fc86) popup_call2_audio_first_window_g5

0x9be7,	// (0x000818d7) aid_size_touch_image3_arrow_left_ParamLimits

0x9be7,	// (0x000818d7) aid_size_touch_image3_arrow_left

0x9bfd,	// (0x000818ed) aid_size_touch_image3_arrow_right_ParamLimits

0x9bfd,	// (0x000818ed) aid_size_touch_image3_arrow_right

0xb122,	// (0x00082e12) vid4_progress_pane_t3

0x973f,	// (0x0008142f) main_hwr_training_symbol_option_pane_ParamLimits

0x973f,	// (0x0008142f) main_hwr_training_symbol_option_pane

0xef95,	// (0x00086c85) popup_hwr_training_preview_window_ParamLimits

0xef95,	// (0x00086c85) popup_hwr_training_preview_window

0x97a0,	// (0x00081490) hwr_training_navi_pane_g5_ParamLimits

0x97a0,	// (0x00081490) hwr_training_navi_pane_g5

0x1f5b,	// (0x00079c4b) popup_char_count_window

0x5368,	// (0x0007d058) bg_popup_sub_pane_cp20_ParamLimits

0xaa9e,	// (0x0008278e) list_vitu2_match_list_pane_ParamLimits

0xaaaa,	// (0x0008279a) vitu2_page_scroll_pane_ParamLimits

0xaaaa,	// (0x0008279a) vitu2_page_scroll_pane

0x2514,	// (0x0007a204) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2514,	// (0x0007a204) list_single_hwr_training_symbol_option_pane

0x2527,	// (0x0007a217) list_single_hwr_training_symbol_option_pane_g1

0x252f,	// (0x0007a21f) list_single_hwr_training_symbol_option_pane_t1

0x253d,	// (0x0007a22d) bg_button_pane_cp023

0x2546,	// (0x0007a236) bg_button_pane_cp024

0x2579,	// (0x0007a269) vitu2_page_scroll_pane_g1

0x2581,	// (0x0007a271) vitu2_page_scroll_pane_g2

0x0001,

0xfa4e,	// (0x0008773e) vitu2_page_scroll_pane_g

0x2589,	// (0x0007a279) vitu2_page_scroll_pane_t1

0xe5ce,	// (0x000862be) popup_char_count_window_g1

0x2598,	// (0x0007a288) popup_char_count_window_g2

0x25a1,	// (0x0007a291) popup_char_count_window_g3

0x0002,

0xfa53,	// (0x00087743) popup_char_count_window_g

0x25aa,	// (0x0007a29a) popup_char_count_window_t1

0x5382,	// (0x0007d072) main_vded2_pane

0xed51,	// (0x00086a41) aid_size_cell_imed_line

0xed5b,	// (0x00086a4b) grid_imed_line_width_pane

0xa10f,	// (0x00081dff) vid4_indicators_pane_g4

0x25b8,	// (0x0007a2a8) cell_imed_line_width_pane_ParamLimits

0x25b8,	// (0x0007a2a8) cell_imed_line_width_pane

0x25cc,	// (0x0007a2bc) cell_imed_line_width_pane_g1

0x25d5,	// (0x0007a2c5) cell_imed_line_width_pane_g2

0x0001,

0xfa5a,	// (0x0008774a) cell_imed_line_width_pane_g

0xb15e,	// (0x00082e4e) main_vded2_pane_g1_ParamLimits

0xb15e,	// (0x00082e4e) main_vded2_pane_g1

0xb16b,	// (0x00082e5b) main_vded2_pane_g2_ParamLimits

0xb16b,	// (0x00082e5b) main_vded2_pane_g2

0x0001,

0xfa5f,	// (0x0008774f) main_vded2_pane_g_ParamLimits

0xfa5f,	// (0x0008774f) main_vded2_pane_g

0xb179,	// (0x00082e69) vded2_slider_pane_ParamLimits

0xb179,	// (0x00082e69) vded2_slider_pane

0xb186,	// (0x00082e76) aid_size_touch_vded2_end

0xb190,	// (0x00082e80) aid_size_touch_vded2_playhead

0x25dd,	// (0x0007a2cd) aid_size_touch_vded2_start

0x25e5,	// (0x0007a2d5) vded2_slider_bg_pane

0x25ee,	// (0x0007a2de) vded2_slider_pane_g1

0x25f7,	// (0x0007a2e7) vded2_slider_pane_g2

0xb198,	// (0x00082e88) vded2_slider_pane_g3

0x0002,

0xfa64,	// (0x00087754) vded2_slider_pane_g

0x25ff,	// (0x0007a2ef) vded2_slider_bg_pane_g1

0x2608,	// (0x0007a2f8) vded2_slider_bg_pane_g2

0x2611,	// (0x0007a301) vded2_slider_bg_pane_g3

0x0002,

0xfa6b,	// (0x0008775b) vded2_slider_bg_pane_g

0x77f0,	// (0x0007f4e0) aid_postcard_touch_down_pane_ParamLimits

0x77f0,	// (0x0007f4e0) aid_postcard_touch_down_pane

0x7800,	// (0x0007f4f0) aid_postcard_touch_up_pane_ParamLimits

0x7800,	// (0x0007f4f0) aid_postcard_touch_up_pane

0x5382,	// (0x0007d072) main_blid2_pane

0x86ae,	// (0x0008039e) popup_blid2_search_window

0xd871,	// (0x00085561) blid2_gps_pane

0xd871,	// (0x00085561) blid2_navig_pane

0xd871,	// (0x00085561) blid2_search_pane

0xd871,	// (0x00085561) blid2_tripm_pane

0xb1a1,	// (0x00082e91) blid2_search_pane_g1_ParamLimits

0xb1a1,	// (0x00082e91) blid2_search_pane_g1

0xb1b1,	// (0x00082ea1) blid2_search_pane_t1_ParamLimits

0xb1b1,	// (0x00082ea1) blid2_search_pane_t1

0xb1c3,	// (0x00082eb3) aid_size_cell_blid2_gps_ParamLimits

0xb1c3,	// (0x00082eb3) aid_size_cell_blid2_gps

0xb1d3,	// (0x00082ec3) blid2_gps_pane_g1_ParamLimits

0xb1d3,	// (0x00082ec3) blid2_gps_pane_g1

0xb1df,	// (0x00082ecf) grid_blid2_satellite_pane_ParamLimits

0xb1df,	// (0x00082ecf) grid_blid2_satellite_pane

0xb1ef,	// (0x00082edf) blid2_navig_pane_g1_ParamLimits

0xb1ef,	// (0x00082edf) blid2_navig_pane_g1

0xb1fb,	// (0x00082eeb) blid2_navig_pane_t1_ParamLimits

0xb1fb,	// (0x00082eeb) blid2_navig_pane_t1

0xb20d,	// (0x00082efd) blid2_navig_pane_t2_ParamLimits

0xb20d,	// (0x00082efd) blid2_navig_pane_t2

0x0001,

0xfa72,	// (0x00087762) blid2_navig_pane_t_ParamLimits

0xfa72,	// (0x00087762) blid2_navig_pane_t

0xb21f,	// (0x00082f0f) blid2_navig_ring_pane_ParamLimits

0xb21f,	// (0x00082f0f) blid2_navig_ring_pane

0xb22f,	// (0x00082f1f) blid2_speed_pane_ParamLimits

0xb22f,	// (0x00082f1f) blid2_speed_pane

0xb23b,	// (0x00082f2b) blid2_tripm_pane_g1_ParamLimits

0xb23b,	// (0x00082f2b) blid2_tripm_pane_g1

0xb24b,	// (0x00082f3b) blid2_tripm_pane_g2_ParamLimits

0xb24b,	// (0x00082f3b) blid2_tripm_pane_g2

0xb257,	// (0x00082f47) blid2_tripm_pane_g3_ParamLimits

0xb257,	// (0x00082f47) blid2_tripm_pane_g3

0xb263,	// (0x00082f53) blid2_tripm_pane_g4_ParamLimits

0xb263,	// (0x00082f53) blid2_tripm_pane_g4

0xb26f,	// (0x00082f5f) blid2_tripm_pane_g5_ParamLimits

0xb26f,	// (0x00082f5f) blid2_tripm_pane_g5

0x0005,

0xfa77,	// (0x00087767) blid2_tripm_pane_g_ParamLimits

0xfa77,	// (0x00087767) blid2_tripm_pane_g

0xb28b,	// (0x00082f7b) blid2_tripm_pane_t1_ParamLimits

0xb28b,	// (0x00082f7b) blid2_tripm_pane_t1

0xb29f,	// (0x00082f8f) blid2_tripm_pane_t2_ParamLimits

0xb29f,	// (0x00082f8f) blid2_tripm_pane_t2

0xb2b1,	// (0x00082fa1) blid2_tripm_pane_t3_ParamLimits

0xb2b1,	// (0x00082fa1) blid2_tripm_pane_t3

0x0003,

0xfa84,	// (0x00087774) blid2_tripm_pane_t_ParamLimits

0xfa84,	// (0x00087774) blid2_tripm_pane_t

0xb2e3,	// (0x00082fd3) cell_blid2_satellite_pane_ParamLimits

0xb2e3,	// (0x00082fd3) cell_blid2_satellite_pane

0xb2fd,	// (0x00082fed) cell_blid2_satellite_pane_g1

0x261a,	// (0x0007a30a) cell_blid2_satellite_pane_t1

0x0b59,	// (0x00078849) blid2_speed_pane_g1

0x2628,	// (0x0007a318) blid2_speed_pane_t1

0x2636,	// (0x0007a326) blid2_speed_pane_t2

0x0001,

0xfa8d,	// (0x0008777d) blid2_speed_pane_t

0x0b59,	// (0x00078849) blid2_navig_ring_pane_g1

0xb306,	// (0x00082ff6) blid2_navig_ring_pane_g2

0xb30e,	// (0x00082ffe) blid2_navig_ring_pane_g3

0xb316,	// (0x00083006) blid2_navig_ring_pane_g4

0xb31e,	// (0x0008300e) blid2_navig_ring_pane_g5

0x0004,

0xfa92,	// (0x00087782) blid2_navig_ring_pane_g

0xd871,	// (0x00085561) bg_popup_window_pane_cp011

0x2644,	// (0x0007a334) popup_blid2_search_window_g1

0x264c,	// (0x0007a33c) popup_blid2_search_window_t1

0x265a,	// (0x0007a34a) popup_blid2_search_window_t2

0x0001,

0xfa9d,	// (0x0008778d) popup_blid2_search_window_t

0x0c59,	// (0x00078949) main_browser_pane_g1

0x08fb,	// (0x000785eb) main_browser_pane_ParamLimits

0x8679,	// (0x00080369) bg_button_pane_cp011_ParamLimits

0xa388,	// (0x00082078) cell_vitu2_function_pane_g1_ParamLimits

0xe43c,	// (0x0008612c) bg_popup_sub_pane_cp22_ParamLimits

0xac42,	// (0x00082932) input_focus_pane_cp08_ParamLimits

0xac59,	// (0x00082949) popup_vitu2_query_button_pane_ParamLimits

0xac59,	// (0x00082949) popup_vitu2_query_button_pane

0xac6a,	// (0x0008295a) popup_vitu2_query_input_button_pane

0x2215,	// (0x00079f05) popup_vitu2_query_window_g1_ParamLimits

0xac74,	// (0x00082964) popup_vitu2_query_window_g2_ParamLimits

0xf99e,	// (0x0008768e) popup_vitu2_query_window_g_ParamLimits

0xd871,	// (0x00085561) bg_button_pane_cp026

0xb326,	// (0x00083016) popup_vitu2_query_input_button_pane_g1

0xd871,	// (0x00085561) bg_button_pane_cp025

0x2668,	// (0x0007a358) popup_vitu2_query_button_pane_t1

0x8b82,	// (0x00080872) main_mp3_pane_t6

0x8b92,	// (0x00080882) popup_slider_window_cp01

0x9fec,	// (0x00081cdc) cam4_battery_pane

0xa0cc,	// (0x00081dbc) cam4_battery_pane_cp02

0xb0a5,	// (0x00082d95) cam4_battery_pane_cp01

0xb0a5,	// (0x00082d95) cam4_battery_pane_cp03

0xf07b,	// (0x00086d6b) cam4_battery_pane_g1

0x0b59,	// (0x00078849) cam4_battery_pane_g2

0x0001,

0xfaa2,	// (0x00087792) cam4_battery_pane_g

0xe731,	// (0x00086421) popup_blid_sat_info2_window_t11

0x1461,	// (0x00079151) aid_size_touch_mv_arrow_left_ParamLimits

0x148a,	// (0x0007917a) aid_size_touch_mv_arrow_right_ParamLimits

0x14e8,	// (0x000791d8) navi_pane_g1_ParamLimits

0x14f4,	// (0x000791e4) navi_pane_g2_ParamLimits

0x1522,	// (0x00079212) navi_pane_g3_ParamLimits

0xf379,	// (0x00087069) navi_pane_g_ParamLimits

0x73ad,	// (0x0007f09d) navi_pane_mv_t1_ParamLimits

0x95ca,	// (0x000812ba) grid_imed_effect_pane_ParamLimits

0x5ec8,	// (0x0007dbb8) aid_placing_vt_slider_lsc

0x0ba8,	// (0x00078898) aid_placing_vt_slider_prt

0xdf0b,	// (0x00085bfb) bg_tb_trans_pane_cp01_ParamLimits

0xe9d8,	// (0x000866c8) popup_image_details_window_g1_ParamLimits

0xe9eb,	// (0x000866db) popup_image_details_window_g2_ParamLimits

0xea00,	// (0x000866f0) popup_image_details_window_g3_ParamLimits

0xea00,	// (0x000866f0) popup_image_details_window_g3

0xf6a5,	// (0x00087395) popup_image_details_window_g_ParamLimits

0xea14,	// (0x00086704) popup_image_details_window_t1_ParamLimits

0xea26,	// (0x00086716) popup_image_details_window_t2_ParamLimits

0xea3f,	// (0x0008672f) popup_image_details_window_t3_ParamLimits

0xea53,	// (0x00086743) popup_image_details_window_t4_ParamLimits

0xea6e,	// (0x0008675e) popup_image_details_window_t5_ParamLimits

0xf6ac,	// (0x0008739c) popup_image_details_window_t_ParamLimits

0xafc9,	// (0x00082cb9) cl_header_name_pane_ParamLimits

0xafc9,	// (0x00082cb9) cl_header_name_pane

0xb32e,	// (0x0008301e) cl_header_name_pane_t1_ParamLimits

0xb32e,	// (0x0008301e) cl_header_name_pane_t1

0xb345,	// (0x00083035) cl_header_name_pane_t2_ParamLimits

0xb345,	// (0x00083035) cl_header_name_pane_t2

0xb36f,	// (0x0008305f) cl_header_name_pane_t3_ParamLimits

0xb36f,	// (0x0008305f) cl_header_name_pane_t3

0x0002,

0xfaa7,	// (0x00087797) cl_header_name_pane_t_ParamLimits

0xfaa7,	// (0x00087797) cl_header_name_pane_t

0x15b1,	// (0x000792a1) navi_pane_mv_g2_ParamLimits

0x1f26,	// (0x00079c16) field_vitu2_entry_pane_g1_ParamLimits

0x1f32,	// (0x00079c22) field_vitu2_entry_pane_g2_ParamLimits

0xf061,	// (0x00086d51) field_vitu2_entry_pane_g3_ParamLimits

0xf061,	// (0x00086d51) field_vitu2_entry_pane_g3

0xf8a7,	// (0x00087597) field_vitu2_entry_pane_g_ParamLimits

0xa316,	// (0x00082006) cell_vitu2_itu_pane_g1_ParamLimits

0xa32e,	// (0x0008201e) cell_vitu2_itu_pane_g2_ParamLimits

0xa32e,	// (0x0008201e) cell_vitu2_itu_pane_g2

0x0001,

0xf8b3,	// (0x000875a3) cell_vitu2_itu_pane_g_ParamLimits

0xf8b3,	// (0x000875a3) cell_vitu2_itu_pane_g

0x8679,	// (0x00080369) bg_vkb2_func_pane_cp05_ParamLimits

0x8679,	// (0x00080369) bg_vkb2_func_pane_cp05

0x8679,	// (0x00080369) bg_vkb2_func_pane_cp03

0x8679,	// (0x00080369) bg_vkb2_func_pane_cp04

0x8679,	// (0x00080369) bg_vkb2_func_pane_cp10_ParamLimits

0x8679,	// (0x00080369) bg_vkb2_func_pane_cp10

0xaf6b,	// (0x00082c5b) bg_vkb2_func_pane_cp08

0xaf51,	// (0x00082c41) bg_vkb2_func_pane_cp06

0xaf5f,	// (0x00082c4f) bg_vkb2_func_pane_cp07

0x254f,	// (0x0007a23f) bg_vkb2_func_pane_cp11_ParamLimits

0x254f,	// (0x0007a23f) bg_vkb2_func_pane_cp11

0x2564,	// (0x0007a254) bg_vkb2_func_pane_cp12_ParamLimits

0x2564,	// (0x0007a254) bg_vkb2_func_pane_cp12

0xd871,	// (0x00085561) bg_vkb2_func_pane_cp09

0x1f6d,	// (0x00079c5d) bg_vkb2_func_pane_g1

0x0d6a,	// (0x00078a5a) bg_vkb2_func_pane_g2

0x1f75,	// (0x00079c65) bg_vkb2_func_pane_g3

0x1f7d,	// (0x00079c6d) bg_vkb2_func_pane_g4

0x21da,	// (0x00079eca) bg_vkb2_func_pane_g5

0x1f95,	// (0x00079c85) bg_vkb2_func_pane_g6

0x1f9d,	// (0x00079c8d) bg_vkb2_func_pane_g7

0x1f8d,	// (0x00079c7d) bg_vkb2_func_pane_g8

0x0d4a,	// (0x00078a3a) bg_vkb2_func_pane_g9

0x0008,

0xfaae,	// (0x0008779e) bg_vkb2_func_pane_g

0xb27d,	// (0x00082f6d) blid2_tripm_pane_g6_ParamLimits

0xb27d,	// (0x00082f6d) blid2_tripm_pane_g6

0x1e78,	// (0x00079b68) mp4_progress_pane_g1

0xb2d7,	// (0x00082fc7) blid2_tripm_values_pane_ParamLimits

0xb2d7,	// (0x00082fc7) blid2_tripm_values_pane

0xb394,	// (0x00083084) blid2_tripm_values_pane_t1

0xb3a2,	// (0x00083092) blid2_tripm_values_pane_t2

0xb3b0,	// (0x000830a0) blid2_tripm_values_pane_t3

0xb3be,	// (0x000830ae) blid2_tripm_values_pane_t4

0xb3cc,	// (0x000830bc) blid2_tripm_values_pane_t5

0xb3da,	// (0x000830ca) blid2_tripm_values_pane_t6

0xb3e8,	// (0x000830d8) blid2_tripm_values_pane_t7

0xb3f6,	// (0x000830e6) blid2_tripm_values_pane_t8

0xb404,	// (0x000830f4) blid2_tripm_values_pane_t9

0x0008,

0xfac1,	// (0x000877b1) blid2_tripm_values_pane_t

0x5f08,	// (0x0007dbf8) call_video_pane_t1_ParamLimits

0x5f29,	// (0x0007dc19) call_video_pane_t2_ParamLimits

0xf222,	// (0x00086f12) call_video_pane_t_ParamLimits

0x76b8,	// (0x0007f3a8) msg_header_pane_g1_ParamLimits

0x179c,	// (0x0007948c) msg_header_pane_g2_ParamLimits

0x179c,	// (0x0007948c) msg_header_pane_g2

0x0001,

0xf41c,	// (0x0008710c) msg_header_pane_g_ParamLimits

0xf41c,	// (0x0008710c) msg_header_pane_g

0x08fb,	// (0x000785eb) main_clock2_pane_ParamLimits

0x9344,	// (0x00081034) grid_clock2_toolbar_pane_ParamLimits

0x9344,	// (0x00081034) grid_clock2_toolbar_pane

0x9344,	// (0x00081034) listscroll_clock2_pane_ParamLimits

0x9344,	// (0x00081034) listscroll_clock2_pane

0x93f4,	// (0x000810e4) main_clock2_pane_t3_ParamLimits

0x93f4,	// (0x000810e4) main_clock2_pane_t3

0x9406,	// (0x000810f6) main_clock2_pane_t4_ParamLimits

0x9406,	// (0x000810f6) main_clock2_pane_t4

0x2676,	// (0x0007a366) cell_clock2_toolbar_pane

0x267e,	// (0x0007a36e) cell_clock2_toolbar_pane_cp01

0x267e,	// (0x0007a36e) cell_clock2_toolbar_pane_cp02

0x2686,	// (0x0007a376) cell_clock2_toolbar_pane_cp03

0x268e,	// (0x0007a37e) list_clock2_pane

0x13d7,	// (0x000790c7) scroll_pane_cp10

0x2696,	// (0x0007a386) list_single_clock2_pane_ParamLimits

0x2696,	// (0x0007a386) list_single_clock2_pane

0x0b19,	// (0x00078809) list_highlight_pane_cp08

0x26a3,	// (0x0007a393) list_single_clock2_pane_t1

0x26b1,	// (0x0007a3a1) list_single_clock2_pane_t2

0x0001,

0xfad4,	// (0x000877c4) list_single_clock2_pane_t

0xd871,	// (0x00085561) bg_button_pane_cp10

0x26bf,	// (0x0007a3af) cell_clock2_toolbar_pane_g1

0x775e,	// (0x0007f44e) aid_main_viewer_pane_g1_ParamLimits

0x775e,	// (0x0007f44e) aid_main_viewer_pane_g1

0x776a,	// (0x0007f45a) aid_main_viewer_pane_g2_ParamLimits

0x776a,	// (0x0007f45a) aid_main_viewer_pane_g2

0x7776,	// (0x0007f466) aid_main_viewer_pane_g3_ParamLimits

0x7776,	// (0x0007f466) aid_main_viewer_pane_g3

0x7787,	// (0x0007f477) aid_main_viewer_pane_g4_ParamLimits

0x7787,	// (0x0007f477) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x0008711d) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x0008711d) aid_main_viewer_pane_g

0x866c,	// (0x0008035c) main_calc_pane_ParamLimits

0x8687,	// (0x00080377) main_dialer2_pane_ParamLimits

0x5382,	// (0x0007d072) main_cam6_pane

0x5382,	// (0x0007d072) main_vid6_pane

0x9350,	// (0x00081040) listscroll_gen_pane_cp06_ParamLimits

0x9350,	// (0x00081040) listscroll_gen_pane_cp06

0x9418,	// (0x00081108) main_clock2_pane_t5_ParamLimits

0x9418,	// (0x00081108) main_clock2_pane_t5

0x9465,	// (0x00081155) aid_call2_pane_cp10_ParamLimits

0x9477,	// (0x00081167) aid_call_pane_cp10_ParamLimits

0x1455,	// (0x00079145) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1455,	// (0x00079145) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9489,	// (0x00081179) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9489,	// (0x00081179) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1455,	// (0x00079145) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf761,	// (0x00087451) popup_clock_analogue_window_cp10_g_ParamLimits

0x949f,	// (0x0008118f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9b94,	// (0x00081884) cell_dialer2_keypad_pane_g2_ParamLimits

0x9b94,	// (0x00081884) cell_dialer2_keypad_pane_g2

0x0001,

0xf846,	// (0x00087536) cell_dialer2_keypad_pane_g_ParamLimits

0xf846,	// (0x00087536) cell_dialer2_keypad_pane_g

0x9bb0,	// (0x000818a0) cell_dialer2_keypad_pane_t1

0xa65a,	// (0x0008234a) main_cset_text2_pane_ParamLimits

0xa65a,	// (0x0008234a) main_cset_text2_pane

0x2401,	// (0x0007a0f1) area_vitu2_query_pane_g1_ParamLimits

0xaef0,	// (0x00082be0) area_vitu2_query_pane_g2_ParamLimits

0xf9f1,	// (0x000876e1) area_vitu2_query_pane_g_ParamLimits

0x2485,	// (0x0007a175) area_vitu2_query_pane_t7_ParamLimits

0x2485,	// (0x0007a175) area_vitu2_query_pane_t7

0xaf51,	// (0x00082c41) bg_button_pane_cp018_ParamLimits

0xaf5f,	// (0x00082c4f) bg_button_pane_cp021_ParamLimits

0xaf6b,	// (0x00082c5b) bg_button_pane_cp022_ParamLimits

0xaf6b,	// (0x00082c5b) bg_vkb2_func_pane_cp08_ParamLimits

0xaf51,	// (0x00082c41) bg_vkb2_func_pane_cp06_ParamLimits

0xaf5f,	// (0x00082c4f) bg_vkb2_func_pane_cp07_ParamLimits

0xaf7c,	// (0x00082c6c) input_focus_pane_cp09_ParamLimits

0xb412,	// (0x00083102) cam6_autofocus_pane_ParamLimits

0xb412,	// (0x00083102) cam6_autofocus_pane

0xb434,	// (0x00083124) cam6_image_uncrop_pane_ParamLimits

0xb434,	// (0x00083124) cam6_image_uncrop_pane

0xb461,	// (0x00083151) cam6_indi_pane_ParamLimits

0xb461,	// (0x00083151) cam6_indi_pane

0xb47b,	// (0x0008316b) cam6_mode_pane_ParamLimits

0xb47b,	// (0x0008316b) cam6_mode_pane

0xb48f,	// (0x0008317f) cam6_timer_pane_ParamLimits

0xb48f,	// (0x0008317f) cam6_timer_pane

0xb49b,	// (0x0008318b) cam6_zoom_pane_ParamLimits

0xb49b,	// (0x0008318b) cam6_zoom_pane

0xb4b3,	// (0x000831a3) cam6_mode_pane_g1_ParamLimits

0xb4b3,	// (0x000831a3) cam6_mode_pane_g1

0xb4bf,	// (0x000831af) cam6_mode_pane_g2_ParamLimits

0xb4bf,	// (0x000831af) cam6_mode_pane_g2

0xb4cb,	// (0x000831bb) cam6_mode_pane_g3_ParamLimits

0xb4cb,	// (0x000831bb) cam6_mode_pane_g3

0xb4d7,	// (0x000831c7) cam6_mode_pane_g4_ParamLimits

0xb4d7,	// (0x000831c7) cam6_mode_pane_g4

0x0003,

0xfad9,	// (0x000877c9) cam6_mode_pane_g_ParamLimits

0xfad9,	// (0x000877c9) cam6_mode_pane_g

0xf053,	// (0x00086d43) bg_tb_trans_pane_cp08_ParamLimits

0xf053,	// (0x00086d43) bg_tb_trans_pane_cp08

0x26c7,	// (0x0007a3b7) cam6_battery_pane_ParamLimits

0x26c7,	// (0x0007a3b7) cam6_battery_pane

0x26dd,	// (0x0007a3cd) cam6_indi_pane_g1_ParamLimits

0x26dd,	// (0x0007a3cd) cam6_indi_pane_g1

0x26ef,	// (0x0007a3df) cam6_indi_pane_g2_ParamLimits

0x26ef,	// (0x0007a3df) cam6_indi_pane_g2

0x2701,	// (0x0007a3f1) cam6_indi_pane_g3_ParamLimits

0x2701,	// (0x0007a3f1) cam6_indi_pane_g3

0x0002,

0xfae2,	// (0x000877d2) cam6_indi_pane_g_ParamLimits

0xfae2,	// (0x000877d2) cam6_indi_pane_g

0x2713,	// (0x0007a403) cam6_indi_pane_t1_ParamLimits

0x2713,	// (0x0007a403) cam6_indi_pane_t1

0xa14c,	// (0x00081e3c) cam6_autofocus_pane_g1

0xa144,	// (0x00081e34) cam6_autofocus_pane_g2

0xa15c,	// (0x00081e4c) cam6_autofocus_pane_g3

0xa154,	// (0x00081e44) cam6_autofocus_pane_g4

0x0003,

0xfae9,	// (0x000877d9) cam6_autofocus_pane_g

0x2739,	// (0x0007a429) cam6_timer_pane_g1

0x2741,	// (0x0007a431) cam6_timer_pane_t1

0x274f,	// (0x0007a43f) cam6_zoom_cont_pane

0x2757,	// (0x0007a447) cam6_zoom_pane_g1

0x275f,	// (0x0007a44f) cam6_zoom_pane_g2

0xb4e3,	// (0x000831d3) cam6_zoom_pane_g3

0x0002,

0xfaf2,	// (0x000877e2) cam6_zoom_pane_g

0x0b59,	// (0x00078849) cam6_battery_pane_g1

0x0b59,	// (0x00078849) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x000870cd) cam6_battery_pane_g

0x2767,	// (0x0007a457) cam6_zoom_cont_pane_g1

0x2770,	// (0x0007a460) cam6_zoom_cont_pane_g2

0x2779,	// (0x0007a469) cam6_zoom_cont_pane_g3

0x0002,

0xfaf9,	// (0x000877e9) cam6_zoom_cont_pane_g

0xb500,	// (0x000831f0) cam6_mode_pane_cp_ParamLimits

0xb500,	// (0x000831f0) cam6_mode_pane_cp

0xb514,	// (0x00083204) cam6_zoom_pane_cp_ParamLimits

0xb514,	// (0x00083204) cam6_zoom_pane_cp

0xb52c,	// (0x0008321c) vid6_image_uncrop_cif_pane_ParamLimits

0xb52c,	// (0x0008321c) vid6_image_uncrop_cif_pane

0xb558,	// (0x00083248) vid6_image_uncrop_nhd_pane_ParamLimits

0xb558,	// (0x00083248) vid6_image_uncrop_nhd_pane

0xb575,	// (0x00083265) vid6_image_uncrop_vga_pane_ParamLimits

0xb575,	// (0x00083265) vid6_image_uncrop_vga_pane

0xb594,	// (0x00083284) vid6_image_uncrop_wvga_pane_ParamLimits

0xb594,	// (0x00083284) vid6_image_uncrop_wvga_pane

0xb5b1,	// (0x000832a1) vid6_indi_pane_ParamLimits

0xb5b1,	// (0x000832a1) vid6_indi_pane

0xf053,	// (0x00086d43) bg_tb_trans_pane_cp09_ParamLimits

0xf053,	// (0x00086d43) bg_tb_trans_pane_cp09

0x2791,	// (0x0007a481) cam6_battery_pane_cp_ParamLimits

0x2791,	// (0x0007a481) cam6_battery_pane_cp

0x279d,	// (0x0007a48d) vid6_indi_pane_g1_ParamLimits

0x279d,	// (0x0007a48d) vid6_indi_pane_g1

0x27af,	// (0x0007a49f) vid6_indi_pane_g2_ParamLimits

0x27af,	// (0x0007a49f) vid6_indi_pane_g2

0x27c1,	// (0x0007a4b1) vid6_indi_pane_g3_ParamLimits

0x27c1,	// (0x0007a4b1) vid6_indi_pane_g3

0x27d6,	// (0x0007a4c6) vid6_indi_pane_g4_ParamLimits

0x27d6,	// (0x0007a4c6) vid6_indi_pane_g4

0x27eb,	// (0x0007a4db) vid6_indi_pane_g5_ParamLimits

0x27eb,	// (0x0007a4db) vid6_indi_pane_g5

0x0004,

0xfb00,	// (0x000877f0) vid6_indi_pane_g_ParamLimits

0xfb00,	// (0x000877f0) vid6_indi_pane_g

0x2805,	// (0x0007a4f5) vid6_indi_pane_t1_ParamLimits

0x2805,	// (0x0007a4f5) vid6_indi_pane_t1

0x281b,	// (0x0007a50b) vid6_indi_pane_t2_ParamLimits

0x281b,	// (0x0007a50b) vid6_indi_pane_t2

0x2843,	// (0x0007a533) vid6_indi_pane_t3_ParamLimits

0x2843,	// (0x0007a533) vid6_indi_pane_t3

0x286b,	// (0x0007a55b) vid6_indi_pane_t4_ParamLimits

0x286b,	// (0x0007a55b) vid6_indi_pane_t4

0x0003,

0xfb0b,	// (0x000877fb) vid6_indi_pane_t_ParamLimits

0xfb0b,	// (0x000877fb) vid6_indi_pane_t

0x288f,	// (0x0007a57f) wait_bar_pane_cp08

0xb5d6,	// (0x000832c6) main_cset_text2_pane_t1_ParamLimits

0xb5d6,	// (0x000832c6) main_cset_text2_pane_t1

0xb4eb,	// (0x000831db) listscroll_gen_pane_cp06_t1_ParamLimits

0xb4eb,	// (0x000831db) listscroll_gen_pane_cp06_t1

0x5382,	// (0x0007d072) main_cam6_set_pane

0x3228,	// (0x0007af18) bg_tb_trans_pane_cp06_ParamLimits

0x9ff4,	// (0x00081ce4) cam4_indicators_pane_g1_ParamLimits

0xa005,	// (0x00081cf5) cam4_indicators_pane_g2_ParamLimits

0xf883,	// (0x00087573) cam4_indicators_pane_g_ParamLimits

0xa023,	// (0x00081d13) cam4_indicators_pane_t1_ParamLimits

0x8679,	// (0x00080369) bg_tb_trans_pane_cp07_ParamLimits

0xa0d6,	// (0x00081dc6) vid4_indicators_pane_g1_ParamLimits

0xa0ea,	// (0x00081dda) vid4_indicators_pane_g2_ParamLimits

0xa0fe,	// (0x00081dee) vid4_indicators_pane_g3_ParamLimits

0xa10f,	// (0x00081dff) vid4_indicators_pane_g4_ParamLimits

0xf895,	// (0x00087585) vid4_indicators_pane_g_ParamLimits

0xa12d,	// (0x00081e1d) vid4_indicators_pane_t1_ParamLimits

0xb0ad,	// (0x00082d9d) vid4_progress_pane_g1_ParamLimits

0xb0bd,	// (0x00082dad) vid4_progress_pane_g2_ParamLimits

0xb0cd,	// (0x00082dbd) vid4_progress_pane_g3_ParamLimits

0xb0df,	// (0x00082dcf) vid4_progress_pane_g4_ParamLimits

0xfa3c,	// (0x0008772c) vid4_progress_pane_g_ParamLimits

0xb0f7,	// (0x00082de7) vid4_progress_pane_t1_ParamLimits

0xb10d,	// (0x00082dfd) vid4_progress_pane_t2_ParamLimits

0xb122,	// (0x00082e12) vid4_progress_pane_t3_ParamLimits

0xfa47,	// (0x00087737) vid4_progress_pane_t_ParamLimits

0xb137,	// (0x00082e27) wait_bar_pane_cp07_ParamLimits

0xb609,	// (0x000832f9) main_cam6_set_pane_g2_ParamLimits

0xb609,	// (0x000832f9) main_cam6_set_pane_g2

0xb615,	// (0x00083305) main_cset6_listscroll_pane_ParamLimits

0xb615,	// (0x00083305) main_cset6_listscroll_pane

0xb640,	// (0x00083330) main_cset6_slider_pane_ParamLimits

0xb640,	// (0x00083330) main_cset6_slider_pane

0xb64c,	// (0x0008333c) main_cset6_text2_pane_ParamLimits

0xb64c,	// (0x0008333c) main_cset6_text2_pane

0x289e,	// (0x0007a58e) main_cset6_text_pane

0x28a6,	// (0x0007a596) main_cset_list_pane_copy1_ParamLimits

0x28a6,	// (0x0007a596) main_cset_list_pane_copy1

0x28b6,	// (0x0007a5a6) scroll_pane_cp028_copy1

0xb65f,	// (0x0008334f) cset_list_set_pane_copy1

0xb672,	// (0x00083362) aid_position_infowindow_above_copy1

0xb67a,	// (0x0008336a) aid_position_infowindow_below_copy1

0xb682,	// (0x00083372) cset_list_set_pane_g1_copy1

0x216a,	// (0x00079e5a) cset_list_set_pane_g3_copy1_ParamLimits

0x216a,	// (0x00079e5a) cset_list_set_pane_g3_copy1

0x2179,	// (0x00079e69) cset_list_set_pane_t1_copy1_ParamLimits

0x2179,	// (0x00079e69) cset_list_set_pane_t1_copy1

0xdf0b,	// (0x00085bfb) list_highlight_pane_cp021_copy1_ParamLimits

0xdf0b,	// (0x00085bfb) list_highlight_pane_cp021_copy1

0x28bf,	// (0x0007a5af) cset6_slider_pane_ParamLimits

0x28bf,	// (0x0007a5af) cset6_slider_pane

0x28eb,	// (0x0007a5db) main_cset6_slider_pane_g1_ParamLimits

0x28eb,	// (0x0007a5db) main_cset6_slider_pane_g1

0xb68a,	// (0x0008337a) main_cset6_slider_pane_g2_ParamLimits

0xb68a,	// (0x0008337a) main_cset6_slider_pane_g2

0x2913,	// (0x0007a603) main_cset6_slider_pane_g3_ParamLimits

0x2913,	// (0x0007a603) main_cset6_slider_pane_g3

0xb6b2,	// (0x000833a2) main_cset6_slider_pane_g4_ParamLimits

0xb6b2,	// (0x000833a2) main_cset6_slider_pane_g4

0xb6be,	// (0x000833ae) main_cset6_slider_pane_g5_ParamLimits

0xb6be,	// (0x000833ae) main_cset6_slider_pane_g5

0x209c,	// (0x00079d8c) main_cset6_slider_pane_g7_ParamLimits

0x209c,	// (0x00079d8c) main_cset6_slider_pane_g7

0x20a8,	// (0x00079d98) main_cset6_slider_pane_g8_ParamLimits

0x20a8,	// (0x00079d98) main_cset6_slider_pane_g8

0xb6cc,	// (0x000833bc) main_cset6_slider_pane_g9_ParamLimits

0xb6cc,	// (0x000833bc) main_cset6_slider_pane_g9

0xb6d8,	// (0x000833c8) main_cset6_slider_pane_g10_ParamLimits

0xb6d8,	// (0x000833c8) main_cset6_slider_pane_g10

0xb6e4,	// (0x000833d4) main_cset6_slider_pane_g11_ParamLimits

0xb6e4,	// (0x000833d4) main_cset6_slider_pane_g11

0xb6f0,	// (0x000833e0) main_cset6_slider_pane_g12_ParamLimits

0xb6f0,	// (0x000833e0) main_cset6_slider_pane_g12

0xb6fc,	// (0x000833ec) main_cset6_slider_pane_g13_ParamLimits

0xb6fc,	// (0x000833ec) main_cset6_slider_pane_g13

0xb708,	// (0x000833f8) main_cset6_slider_pane_g14_ParamLimits

0xb708,	// (0x000833f8) main_cset6_slider_pane_g14

0xb714,	// (0x00083404) main_cset6_slider_pane_g15_ParamLimits

0xb714,	// (0x00083404) main_cset6_slider_pane_g15

0xb72c,	// (0x0008341c) main_cset6_slider_pane_g16_ParamLimits

0xb72c,	// (0x0008341c) main_cset6_slider_pane_g16

0xb73a,	// (0x0008342a) main_cset6_slider_pane_g17_ParamLimits

0xb73a,	// (0x0008342a) main_cset6_slider_pane_g17

0x0011,

0xfb14,	// (0x00087804) main_cset6_slider_pane_g_ParamLimits

0xfb14,	// (0x00087804) main_cset6_slider_pane_g

0x291f,	// (0x0007a60f) main_cset6_slider_pane_t1_ParamLimits

0x291f,	// (0x0007a60f) main_cset6_slider_pane_t1

0xb760,	// (0x00083450) main_cset6_slider_pane_t2_ParamLimits

0xb760,	// (0x00083450) main_cset6_slider_pane_t2

0xb78b,	// (0x0008347b) main_cset6_slider_pane_t3_ParamLimits

0xb78b,	// (0x0008347b) main_cset6_slider_pane_t3

0xb7b6,	// (0x000834a6) main_cset6_slider_pane_t4_ParamLimits

0xb7b6,	// (0x000834a6) main_cset6_slider_pane_t4

0xb7e1,	// (0x000834d1) main_cset6_slider_pane_t5_ParamLimits

0xb7e1,	// (0x000834d1) main_cset6_slider_pane_t5

0x2960,	// (0x0007a650) main_cset6_slider_pane_t7_ParamLimits

0x2960,	// (0x0007a650) main_cset6_slider_pane_t7

0xb80e,	// (0x000834fe) main_cset6_slider_pane_t8_ParamLimits

0xb80e,	// (0x000834fe) main_cset6_slider_pane_t8

0xb832,	// (0x00083522) main_cset6_slider_pane_t9_ParamLimits

0xb832,	// (0x00083522) main_cset6_slider_pane_t9

0xb856,	// (0x00083546) main_cset6_slider_pane_t10_ParamLimits

0xb856,	// (0x00083546) main_cset6_slider_pane_t10

0xb87a,	// (0x0008356a) main_cset6_slider_pane_t11_ParamLimits

0xb87a,	// (0x0008356a) main_cset6_slider_pane_t11

0x2996,	// (0x0007a686) main_cset6_slider_pane_t14_ParamLimits

0x2996,	// (0x0007a686) main_cset6_slider_pane_t14

0x29cf,	// (0x0007a6bf) main_cset6_slider_pane_t15_ParamLimits

0x29cf,	// (0x0007a6bf) main_cset6_slider_pane_t15

0x000b,

0xfb39,	// (0x00087829) main_cset6_slider_pane_t_ParamLimits

0xfb39,	// (0x00087829) main_cset6_slider_pane_t

0x218e,	// (0x00079e7e) cset_slider_pane_g1_copy1

0x2197,	// (0x00079e87) cset_slider_pane_g2_copy1

0x21a0,	// (0x00079e90) cset_slider_pane_g3_copy1

0xd871,	// (0x00085561) bg_popup_sub_pane_cp011_copy1

0x2a08,	// (0x0007a6f8) main_cset_text_pane_g1_copy1

0x2229,	// (0x00079f19) main_cset_text_pane_t1_copy1

0x2237,	// (0x00079f27) main_cset_text_pane_t2_copy1

0x2245,	// (0x00079f35) main_cset_text_pane_t3_copy1

0x2253,	// (0x00079f43) main_cset_text_pane_t4_copy1

0x2261,	// (0x00079f51) main_cset_text_pane_t5_copy1

0x2a10,	// (0x0007a700) main_cset_text_pane_t6_copy1

0x2a1e,	// (0x0007a70e) main_cset_text_pane_t7_copy1

0xb8bb,	// (0x000835ab) main_cset_text2_pane_t1_copy1

0x8679,	// (0x00080369) main_ncimui_pane

0x86e4,	// (0x000803d4) popup_query_ncimui_window_ParamLimits

0x86e4,	// (0x000803d4) popup_query_ncimui_window

0x1e40,	// (0x00079b30) field_cale_ev2_pane_g4_ParamLimits

0x1e40,	// (0x00079b30) field_cale_ev2_pane_g4

0x9874,	// (0x00081564) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9874,	// (0x00081564) cell_video_dialer_keypad_pane_g2

0x0001,

0xf81d,	// (0x0008750d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf81d,	// (0x0008750d) cell_video_dialer_keypad_pane_g

0x988c,	// (0x0008157c) cell_video_dialer_keypad_pane_t1

0xd871,	// (0x00085561) bg_popup_window_pane_cp012

0xe398,	// (0x00086088) heading_pane_cp06

0x2a4a,	// (0x0007a73a) ncim_query_content_pane

0xd871,	// (0x00085561) bg_popup_heading_pane_cp01

0x2a52,	// (0x0007a742) ncim_heading_pane_t1

0x2a60,	// (0x0007a750) ncim_indicator_popup_pane

0x2a72,	// (0x0007a762) ncim_query_button_pane

0x2a86,	// (0x0007a776) ncim_query_content_pane_t1

0x2a98,	// (0x0007a788) ncim_query_content_pane_t2

0x0005,

0xfb7d,	// (0x0008786d) ncim_query_content_pane_t

0x2ad2,	// (0x0007a7c2) ncim_query_list_pane

0x2ae4,	// (0x0007a7d4) ncim_query_popup_pane

0x2a60,	// (0x0007a750) ncim_indicator_popup_pane_ParamLimits

0xba0e,	// (0x000836fe) ncim_query_content_pane_g1_ParamLimits

0xba0e,	// (0x000836fe) ncim_query_content_pane_g1

0x2a86,	// (0x0007a776) ncim_query_content_pane_t1_ParamLimits

0x2a98,	// (0x0007a788) ncim_query_content_pane_t2_ParamLimits

0xba1a,	// (0x0008370a) ncim_query_content_pane_t3_ParamLimits

0xba1a,	// (0x0008370a) ncim_query_content_pane_t3

0xba37,	// (0x00083727) ncim_query_content_pane_t4_ParamLimits

0xba37,	// (0x00083727) ncim_query_content_pane_t4

0xba54,	// (0x00083744) ncim_query_content_pane_t5_ParamLimits

0xba54,	// (0x00083744) ncim_query_content_pane_t5

0x2aaa,	// (0x0007a79a) ncim_query_content_pane_t6_ParamLimits

0x2aaa,	// (0x0007a79a) ncim_query_content_pane_t6

0xfb7d,	// (0x0008786d) ncim_query_content_pane_t_ParamLimits

0x2ad2,	// (0x0007a7c2) ncim_query_list_pane_ParamLimits

0x2ae4,	// (0x0007a7d4) ncim_query_popup_pane_ParamLimits

0x2af8,	// (0x0007a7e8) wait_bar_pane_cp04

0xd871,	// (0x00085561) input_focus_pane_cp011

0x2b00,	// (0x0007a7f0) ncim_query_popup_pane_t1

0x2b0e,	// (0x0007a7fe) ncim_list_query_list_pane_ParamLimits

0x2b0e,	// (0x0007a7fe) ncim_list_query_list_pane

0xd871,	// (0x00085561) bg_button_pane_cp027

0x2b1b,	// (0x0007a80b) ncim_query_button_pane_g1

0xd871,	// (0x00085561) list_highlight_pane_cp012

0x2b25,	// (0x0007a815) ncim_list_query_list_pane_g1

0x2b2d,	// (0x0007a81d) ncim_list_query_list_pane_t1

0xa014,	// (0x00081d04) cam4_indicators_pane_g3_ParamLimits

0xa014,	// (0x00081d04) cam4_indicators_pane_g3

0xa11b,	// (0x00081e0b) vid4_indicators_pane_g5_ParamLimits

0xa11b,	// (0x00081e0b) vid4_indicators_pane_g5

0xb0eb,	// (0x00082ddb) vid4_progress_pane_g5_ParamLimits

0xb0eb,	// (0x00082ddb) vid4_progress_pane_g5

0xb8fa,	// (0x000835ea) main_ncimui_pane_g1

0xb962,	// (0x00083652) ncimui_group_query_pane_ParamLimits

0xb962,	// (0x00083652) ncimui_group_query_pane

0xb9aa,	// (0x0008369a) ncimui_list_pane_ParamLimits

0xb9aa,	// (0x0008369a) ncimui_list_pane

0xb9d1,	// (0x000836c1) ncimui_text_pane_ParamLimits

0xb9d1,	// (0x000836c1) ncimui_text_pane

0xba71,	// (0x00083761) ncimui_text_pane_t1_ParamLimits

0xba71,	// (0x00083761) ncimui_text_pane_t1

0x2b3b,	// (0x0007a82b) ncimui_list_single_graphic_pane_ParamLimits

0x2b3b,	// (0x0007a82b) ncimui_list_single_graphic_pane

0xba90,	// (0x00083780) ncimui_query_pane_ParamLimits

0xba90,	// (0x00083780) ncimui_query_pane

0xd871,	// (0x00085561) list_highlight_pane_cp013

0x2b4b,	// (0x0007a83b) ncim_list_query_list_pane_t1_copy1

0x2b25,	// (0x0007a815) ncim_list_single_graphic_pane_g1

0xbaa3,	// (0x00083793) ncim_query_button_pane_cp01

0xbaaf,	// (0x0008379f) ncim_query_entry_pane_ParamLimits

0xbaaf,	// (0x0008379f) ncim_query_entry_pane

0xbac2,	// (0x000837b2) ncimui_query_pane_g1

0xbace,	// (0x000837be) ncimui_query_pane_t1_ParamLimits

0xbace,	// (0x000837be) ncimui_query_pane_t1

0xdf0b,	// (0x00085bfb) input_focus_pane_cp012

0x2b59,	// (0x0007a849) ncim_query_entry_pane_t1

0x08fb,	// (0x000785eb) main_im_pane_ParamLimits

0x8679,	// (0x00080369) main_mobtv_pane_ParamLimits

0x8679,	// (0x00080369) main_mobtv_pane

0xb748,	// (0x00083438) main_cset6_slider_pane_g18_ParamLimits

0xb748,	// (0x00083438) main_cset6_slider_pane_g18

0xb754,	// (0x00083444) main_cset6_slider_pane_g19_ParamLimits

0xb754,	// (0x00083444) main_cset6_slider_pane_g19

0xf061,	// (0x00086d51) bg_main_mobtv_pane_ParamLimits

0xf061,	// (0x00086d51) bg_main_mobtv_pane

0xbae7,	// (0x000837d7) main_mobtv_info_pane

0xbaf2,	// (0x000837e2) main_mobtv_loading_pane_ParamLimits

0xbaf2,	// (0x000837e2) main_mobtv_loading_pane

0x2b6b,	// (0x0007a85b) main_mobtv_pg_channel_list_pane

0x2b75,	// (0x0007a865) main_mobtv_pg_hdr_pane

0xbaff,	// (0x000837ef) main_mobtv_programe_curr_pane_ParamLimits

0xbaff,	// (0x000837ef) main_mobtv_programe_curr_pane

0xbb0c,	// (0x000837fc) main_mobtv_programe_next_pane_ParamLimits

0xbb0c,	// (0x000837fc) main_mobtv_programe_next_pane

0x2b7e,	// (0x0007a86e) popup_mobtv_noti_window

0x0b59,	// (0x00078849) main_tv_pg_hdr_pane_g1

0x2b86,	// (0x0007a876) main_tv_pg_hdr_pane_g2

0x2b8e,	// (0x0007a87e) main_tv_pg_hdr_pane_g3

0x2b96,	// (0x0007a886) main_tv_pg_hdr_pane_g4

0x2b9e,	// (0x0007a88e) main_tv_pg_hdr_pane_g5

0x2ba8,	// (0x0007a898) main_tv_pg_hdr_pane_g6

0x2bb2,	// (0x0007a8a2) main_tv_pg_hdr_pane_g7

0x2bbc,	// (0x0007a8ac) main_tv_pg_hdr_pane_g8

0x2bc6,	// (0x0007a8b6) main_tv_pg_hdr_pane_g9

0x2bd0,	// (0x0007a8c0) main_tv_pg_hdr_pane_g10

0x2bda,	// (0x0007a8ca) main_tv_pg_hdr_pane_g11

0x000a,

0xfb8a,	// (0x0008787a) main_tv_pg_hdr_pane_g

0x2be4,	// (0x0007a8d4) main_tv_pg_hdr_pane_t1

0x2bf2,	// (0x0007a8e2) main_tv_pg_hdr_pane_t2

0x2c00,	// (0x0007a8f0) main_tv_pg_hdr_pane_t3

0x2c10,	// (0x0007a900) main_tv_pg_hdr_pane_t4

0x2c20,	// (0x0007a910) main_tv_pg_hdr_pane_t5

0x0004,

0xfba1,	// (0x00087891) main_tv_pg_hdr_pane_t

0x2c30,	// (0x0007a920) single_mobtv_pg_channel_pane_ParamLimits

0x2c30,	// (0x0007a920) single_mobtv_pg_channel_pane

0x2c42,	// (0x0007a932) single_mobtv_pg_channel_table_pane

0x2c4b,	// (0x0007a93b) single_mobtv_pg_channel_thumb_pane

0x2c54,	// (0x0007a944) single_tv_pg_channel_pane_g1

0x2c5d,	// (0x0007a94d) single_tv_pg_channel_pane_g2

0x0001,

0xfbac,	// (0x0008789c) single_tv_pg_channel_pane_g

0x0867,	// (0x00078557) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0867,	// (0x00078557) bg_single_mobtv_pg_channel_thumb_pane

0x2c66,	// (0x0007a956) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2c66,	// (0x0007a956) single_mobtv_pg_channel_thumb_pane_g1

0x2c74,	// (0x0007a964) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2c74,	// (0x0007a964) single_mobtv_pg_channel_thumb_pane_g2

0x2c80,	// (0x0007a970) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2c80,	// (0x0007a970) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbb1,	// (0x000878a1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbb1,	// (0x000878a1) single_mobtv_pg_channel_thumb_pane_g

0x2c8c,	// (0x0007a97c) single_mobtv_pg_channel_thumb_pane_t1

0x2c9a,	// (0x0007a98a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb8,	// (0x000878a8) single_mobtv_pg_channel_thumb_pane_t

0x0b59,	// (0x00078849) bg_single_mobtv_pg_channel_table_pane_g1

0x0b59,	// (0x00078849) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x000870cd) bg_single_mobtv_pg_channel_table_pane_g

0x2ca8,	// (0x0007a998) single_mobtv_pg_channel_table_pane_t1

0x2cb6,	// (0x0007a9a6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbbd,	// (0x000878ad) single_mobtv_pg_channel_table_pane_t

0xbb21,	// (0x00083811) main_mobtv_info_pane_g1_ParamLimits

0xbb21,	// (0x00083811) main_mobtv_info_pane_g1

0xbb3d,	// (0x0008382d) main_mobtv_info_pane_t1_ParamLimits

0xbb3d,	// (0x0008382d) main_mobtv_info_pane_t1

0xbbb5,	// (0x000838a5) main_mobtv_info_pane_t2_ParamLimits

0xbbb5,	// (0x000838a5) main_mobtv_info_pane_t2

0x0002,

0xfbc7,	// (0x000878b7) main_mobtv_info_pane_t_ParamLimits

0xfbc7,	// (0x000878b7) main_mobtv_info_pane_t

0xbc44,	// (0x00083934) wait_bar_pane_cp05

0xbc56,	// (0x00083946) main_mobtv_loading_pane_g1_ParamLimits

0xbc56,	// (0x00083946) main_mobtv_loading_pane_g1

0xbc64,	// (0x00083954) main_mobtv_loading_pane_g2_ParamLimits

0xbc64,	// (0x00083954) main_mobtv_loading_pane_g2

0xbc70,	// (0x00083960) main_mobtv_loading_pane_g3_ParamLimits

0xbc70,	// (0x00083960) main_mobtv_loading_pane_g3

0x0002,

0xfbce,	// (0x000878be) main_mobtv_loading_pane_g_ParamLimits

0xfbce,	// (0x000878be) main_mobtv_loading_pane_g

0x2cc4,	// (0x0007a9b4) main_mobtv_loading_pane_t1_ParamLimits

0x2cc4,	// (0x0007a9b4) main_mobtv_loading_pane_t1

0x2cdc,	// (0x0007a9cc) main_mobtv_loading_pane_t2_ParamLimits

0x2cdc,	// (0x0007a9cc) main_mobtv_loading_pane_t2

0x0001,

0xfbd5,	// (0x000878c5) main_mobtv_loading_pane_t_ParamLimits

0xfbd5,	// (0x000878c5) main_mobtv_loading_pane_t

0xbc7e,	// (0x0008396e) wait_bar_pane_cp06_ParamLimits

0xbc7e,	// (0x0008396e) wait_bar_pane_cp06

0x2d00,	// (0x0007a9f0) main_mobtv_programe_curr_pane_t1

0x2d0e,	// (0x0007a9fe) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbda,	// (0x000878ca) main_mobtv_programe_curr_pane_t

0x2d1c,	// (0x0007aa0c) main_mobtv_programe_next_pane_t1

0x2d2a,	// (0x0007aa1a) main_mobtv_programe_next_pane_t2

0x2d38,	// (0x0007aa28) main_mobtv_programe_next_pane_t3

0x0002,

0xfbdf,	// (0x000878cf) main_mobtv_programe_next_pane_t

0xd871,	// (0x00085561) bg_popup_mobtv_noti_window_pane

0x2d46,	// (0x0007aa36) popup_mobtv_noti_window_g1

0x2d4e,	// (0x0007aa3e) popup_mobtv_noti_window_t1

0x2d5c,	// (0x0007aa4c) popup_mobtv_noti_window_t2

0x0001,

0xfbe6,	// (0x000878d6) popup_mobtv_noti_window_t

0x0b59,	// (0x00078849) bg_popup_mobtv_noti_window_pane_g1

0x5382,	// (0x0007d072) sc_clock_pane

0x5382,	// (0x0007d072) main_fs_bigclock_pane

0xb2c5,	// (0x00082fb5) blid2_tripm_pane_t4_ParamLimits

0xb2c5,	// (0x00082fb5) blid2_tripm_pane_t4

0xbc8a,	// (0x0008397a) sc_clock_pane_g1_ParamLimits

0xbc8a,	// (0x0008397a) sc_clock_pane_g1

0xbc98,	// (0x00083988) sc_clock_pane_t1_ParamLimits

0xbc98,	// (0x00083988) sc_clock_pane_t1

0xbcab,	// (0x0008399b) sc_clock_pane_t2_ParamLimits

0xbcab,	// (0x0008399b) sc_clock_pane_t2

0xbcbd,	// (0x000839ad) sc_clock_pane_t3_ParamLimits

0xbcbd,	// (0x000839ad) sc_clock_pane_t3

0x0004,

0xfbeb,	// (0x000878db) sc_clock_pane_t_ParamLimits

0xfbeb,	// (0x000878db) sc_clock_pane_t

0xc892,	// (0x00084582) main_fs_bigclock_indicator_pane_ParamLimits

0xc892,	// (0x00084582) main_fs_bigclock_indicator_pane

0xbd40,	// (0x00083a30) main_fs_bigclock_pane_g1_ParamLimits

0xbd40,	// (0x00083a30) main_fs_bigclock_pane_g1

0xc89e,	// (0x0008458e) main_fs_bigclock_pane_t1_ParamLimits

0xc89e,	// (0x0008458e) main_fs_bigclock_pane_t1

0xc8b0,	// (0x000845a0) main_fs_bigclock_pane_t2_ParamLimits

0xc8b0,	// (0x000845a0) main_fs_bigclock_pane_t2

0xc8c4,	// (0x000845b4) main_fs_bigclock_pane_t3_ParamLimits

0xc8c4,	// (0x000845b4) main_fs_bigclock_pane_t3

0x0002,

0xfd7c,	// (0x00087a6c) main_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x00087a6c) main_fs_bigclock_pane_t

0x38ef,	// (0x0007b5df) main_fs_bigclock_indicator_pane_g1

0x2a7a,	// (0x0007a76a) ncim_query_content_pane_g2_ParamLimits

0x2a7a,	// (0x0007a76a) ncim_query_content_pane_g2

0x0001,

0xfb78,	// (0x00087868) ncim_query_content_pane_g_ParamLimits

0xfb78,	// (0x00087868) ncim_query_content_pane_g

0xbcd1,	// (0x000839c1) sc_clock_pane_t4_ParamLimits

0xbcd1,	// (0x000839c1) sc_clock_pane_t4

0x8679,	// (0x00080369) main_radioblah_pane

0x9eb7,	// (0x00081ba7) cell_call4_button_pane_t1_copy1_ParamLimits

0x9eb7,	// (0x00081ba7) cell_call4_button_pane_t1_copy1

0xb914,	// (0x00083604) main_ncimui_pane_t1_ParamLimits

0xb914,	// (0x00083604) main_ncimui_pane_t1

0xb92e,	// (0x0008361e) main_ncimui_pane_t2_ParamLimits

0xb92e,	// (0x0008361e) main_ncimui_pane_t2

0x0002,

0xfb71,	// (0x00087861) main_ncimui_pane_t_ParamLimits

0xfb71,	// (0x00087861) main_ncimui_pane_t

0x2ea1,	// (0x0007ab91) main_radioblah_anim_pane_ParamLimits

0x2ea1,	// (0x0007ab91) main_radioblah_anim_pane

0x2eb2,	// (0x0007aba2) main_radioblah_info_pane_ParamLimits

0x2eb2,	// (0x0007aba2) main_radioblah_info_pane

0x2ec6,	// (0x0007abb6) main_radioblah_pane_t1_ParamLimits

0x2ec6,	// (0x0007abb6) main_radioblah_pane_t1

0x2ee2,	// (0x0007abd2) main_radioblah_pane_t2_ParamLimits

0x2ee2,	// (0x0007abd2) main_radioblah_pane_t2

0x0003,

0xfc0c,	// (0x000878fc) main_radioblah_pane_t_ParamLimits

0xfc0c,	// (0x000878fc) main_radioblah_pane_t

0xbd96,	// (0x00083a86) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbd96,	// (0x00083a86) main_radioblah_rocker_ctrl_pane

0x2f2a,	// (0x0007ac1a) main_radioblah_info_pane_t1_ParamLimits

0x2f2a,	// (0x0007ac1a) main_radioblah_info_pane_t1

0xbddb,	// (0x00083acb) main_radioblah_info_pane_t2_ParamLimits

0xbddb,	// (0x00083acb) main_radioblah_info_pane_t2

0x0003,

0xfc15,	// (0x00087905) main_radioblah_info_pane_t_ParamLimits

0xfc15,	// (0x00087905) main_radioblah_info_pane_t

0x0b59,	// (0x00078849) main_radioblah_rocker_ctrl_pane_g1

0xbe8b,	// (0x00083b7b) main_radioblah_rocker_ctrl_pane_g2

0xbe93,	// (0x00083b83) main_radioblah_rocker_ctrl_pane_g3

0xbe9b,	// (0x00083b8b) main_radioblah_rocker_ctrl_pane_g4

0xbea3,	// (0x00083b93) main_radioblah_rocker_ctrl_pane_g5

0xbeab,	// (0x00083b9b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc1e,	// (0x0008790e) main_radioblah_rocker_ctrl_pane_g

0xb8bb,	// (0x000835ab) main_cset_text2_pane_t1_copy1_ParamLimits

0x9f42,	// (0x00081c32) cam4_image_uncrop_qvga_pane

0xa089,	// (0x00081d79) vid4_image_uncrop_qcif_pane

0xb453,	// (0x00083143) cam6_image_uncrop_qvga_pane_ParamLimits

0xb453,	// (0x00083143) cam6_image_uncrop_qvga_pane

0x2781,	// (0x0007a471) vid6_image_uncrop_qcif_pane_ParamLimits

0x2781,	// (0x0007a471) vid6_image_uncrop_qcif_pane

0xd871,	// (0x00085561) bg_popup_preview_window_pane_cp03

0x2a2c,	// (0x0007a71c) list_cset_text2_pane

0x2a34,	// (0x0007a724) main_cset6_text2_pane_g1

0x2a3c,	// (0x0007a72c) main_cset6_text2_pane_t1

0xbeb3,	// (0x00083ba3) list_cset_text2_pane_t1_ParamLimits

0xbeb3,	// (0x00083ba3) list_cset_text2_pane_t1

0x8679,	// (0x00080369) main_radioblah_pane_ParamLimits

0xbc30,	// (0x00083920) main_mobtv_info_pane_t3_ParamLimits

0xbc30,	// (0x00083920) main_mobtv_info_pane_t3

0xbd84,	// (0x00083a74) main_radioblah_pane_g1

0xbdaf,	// (0x00083a9f) main_radioblah_info_pane_g1

0xbe30,	// (0x00083b20) main_radioblah_info_pane_t3_ParamLimits

0xbe30,	// (0x00083b20) main_radioblah_info_pane_t3

0x6f29,	// (0x0007ec19) highlight_cell_cale_month_pane_ParamLimits

0x6f29,	// (0x0007ec19) highlight_cell_cale_month_pane

0x5382,	// (0x0007d072) main_phob_fisheye_pane

0xeb78,	// (0x00086868) scroll_pane_cp0031_ParamLimits

0xeb78,	// (0x00086868) scroll_pane_cp0031

0x288f,	// (0x0007a57f) wait_bar_pane_cp08_ParamLimits

0xb65f,	// (0x0008334f) cset_list_set_pane_copy1_ParamLimits

0x2f64,	// (0x0007ac54) highlight_cell_cale_month_pane_g1

0xbed0,	// (0x00083bc0) highlight_cell_cale_month_pane_t1

0x24f1,	// (0x0007a1e1) list_gen_pane_cp01

0x2087,	// (0x00079d77) scroll_pane_01

0xbede,	// (0x00083bce) list_single_double_fisheye_pane

0xbee7,	// (0x00083bd7) list_double_fisheye_pane_g1_ParamLimits

0xbee7,	// (0x00083bd7) list_double_fisheye_pane_g1

0xbef3,	// (0x00083be3) list_double_fisheye_pane_g2_ParamLimits

0xbef3,	// (0x00083be3) list_double_fisheye_pane_g2

0xbf07,	// (0x00083bf7) list_double_fisheye_pane_g3_ParamLimits

0xbf07,	// (0x00083bf7) list_double_fisheye_pane_g3

0x0004,

0xfc2b,	// (0x0008791b) list_double_fisheye_pane_g_ParamLimits

0xfc2b,	// (0x0008791b) list_double_fisheye_pane_g

0xbf30,	// (0x00083c20) list_double_fisheye_pane_t1_ParamLimits

0xbf30,	// (0x00083c20) list_double_fisheye_pane_t1

0xbf4b,	// (0x00083c3b) list_double_fisheye_pane_t2_ParamLimits

0xbf4b,	// (0x00083c3b) list_double_fisheye_pane_t2

0x0001,

0xfc36,	// (0x00087926) list_double_fisheye_pane_t_ParamLimits

0xfc36,	// (0x00087926) list_double_fisheye_pane_t

0x5382,	// (0x0007d072) main_call5_pane

0xbcf7,	// (0x000839e7) sc_swipe_pane_ParamLimits

0xbcf7,	// (0x000839e7) sc_swipe_pane

0xbf79,	// (0x00083c69) call5_image_pane_ParamLimits

0xbf79,	// (0x00083c69) call5_image_pane

0xbf89,	// (0x00083c79) call5_swipe_1_pane_ParamLimits

0xbf89,	// (0x00083c79) call5_swipe_1_pane

0xbf95,	// (0x00083c85) call5_swipe_2_pane_ParamLimits

0xbf95,	// (0x00083c85) call5_swipe_2_pane

0xbfaf,	// (0x00083c9f) popup_call5_audio_first_window_ParamLimits

0xbfaf,	// (0x00083c9f) popup_call5_audio_first_window

0x0867,	// (0x00078557) call5_swipe_1_pane_g1_ParamLimits

0x0867,	// (0x00078557) call5_swipe_1_pane_g1

0x2f6c,	// (0x0007ac5c) call5_swipe_1_pane_g2_ParamLimits

0x2f6c,	// (0x0007ac5c) call5_swipe_1_pane_g2

0x0001,

0xfc3b,	// (0x0008792b) call5_swipe_1_pane_g_ParamLimits

0xfc3b,	// (0x0008792b) call5_swipe_1_pane_g

0x2f78,	// (0x0007ac68) call5_swipe_1_pane_t1_ParamLimits

0x2f78,	// (0x0007ac68) call5_swipe_1_pane_t1

0x0867,	// (0x00078557) call5_swipe_2_pane_g1_ParamLimits

0x0867,	// (0x00078557) call5_swipe_2_pane_g1

0x2f8d,	// (0x0007ac7d) call5_swipe_2_pane_g2_ParamLimits

0x2f8d,	// (0x0007ac7d) call5_swipe_2_pane_g2

0x0001,

0xfc40,	// (0x00087930) call5_swipe_2_pane_g_ParamLimits

0xfc40,	// (0x00087930) call5_swipe_2_pane_g

0x2f99,	// (0x0007ac89) call5_swipe_2_pane_t1_ParamLimits

0x2f99,	// (0x0007ac89) call5_swipe_2_pane_t1

0x2fae,	// (0x0007ac9e) sc_swipe_pane_g1_ParamLimits

0x2fae,	// (0x0007ac9e) sc_swipe_pane_g1

0x2fbb,	// (0x0007acab) sc_swipe_pane_g2_ParamLimits

0x2fbb,	// (0x0007acab) sc_swipe_pane_g2

0x0001,

0xfc45,	// (0x00087935) sc_swipe_pane_g_ParamLimits

0xfc45,	// (0x00087935) sc_swipe_pane_g

0x2fc7,	// (0x0007acb7) sc_swipe_pane_t1_ParamLimits

0x2fc7,	// (0x0007acb7) sc_swipe_pane_t1

0x5382,	// (0x0007d072) main_cmail_launcher_pane

0xbfbd,	// (0x00083cad) aid_size_cell_cmail_l_ParamLimits

0xbfbd,	// (0x00083cad) aid_size_cell_cmail_l

0xbfcb,	// (0x00083cbb) grid_cmail_l_pane_ParamLimits

0xbfcb,	// (0x00083cbb) grid_cmail_l_pane

0xbfdb,	// (0x00083ccb) cell_cmail_l_pane_ParamLimits

0xbfdb,	// (0x00083ccb) cell_cmail_l_pane

0x2fdc,	// (0x0007accc) cell_cmail_l_pane_g1_ParamLimits

0x2fdc,	// (0x0007accc) cell_cmail_l_pane_g1

0x2fe8,	// (0x0007acd8) cell_cmail_l_pane_t1_ParamLimits

0x2fe8,	// (0x0007acd8) cell_cmail_l_pane_t1

0x2ffe,	// (0x0007acee) cell_cmail_l_pane_t2_ParamLimits

0x2ffe,	// (0x0007acee) cell_cmail_l_pane_t2

0x0001,

0xfc4a,	// (0x0008793a) cell_cmail_l_pane_t_ParamLimits

0xfc4a,	// (0x0008793a) cell_cmail_l_pane_t

0xdf0b,	// (0x00085bfb) grid_highlight_pane_cp018_ParamLimits

0xdf0b,	// (0x00085bfb) grid_highlight_pane_cp018

0x51d8,	// (0x0007cec8) main2_pane_ParamLimits

0x51d8,	// (0x0007cec8) main2_pane

0x09ae,	// (0x0007869e) popup_sp_fs_action_menu_bg_pane_g1

0x09b6,	// (0x000786a6) popup_sp_fs_action_menu_bg_pane_g2

0x09be,	// (0x000786ae) popup_sp_fs_action_menu_bg_pane_g3

0x09c6,	// (0x000786b6) popup_sp_fs_action_menu_bg_pane_g4

0x09ce,	// (0x000786be) popup_sp_fs_action_menu_bg_pane_g5

0x09d6,	// (0x000786c6) popup_sp_fs_action_menu_bg_pane_g6

0x09de,	// (0x000786ce) popup_sp_fs_action_menu_bg_pane_g7

0x09e6,	// (0x000786d6) popup_sp_fs_action_menu_bg_pane_g8

0x09ee,	// (0x000786de) popup_sp_fs_action_menu_bg_pane_g9

0x09f6,	// (0x000786e6) popup_sp_fs_action_menu_bg_pane_g10

0x09f6,	// (0x000786e6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00086e35) popup_sp_fs_action_menu_bg_pane_g

0x0867,	// (0x00078557) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t3_g3_g1

0x0867,	// (0x00078557) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t3_g3_g2

0x0867,	// (0x00078557) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00086ee3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00086ee3) list_medium_line_x2_t3_g3_g

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g3_t1

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g3_t2

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00086eea) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00086eea) list_medium_line_x2_t3_g3_t

0x0867,	// (0x00078557) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t3_g2_g1

0x0867,	// (0x00078557) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00086ef1) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00086ef1) list_medium_line_x2_t3_g2_g

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g2_t1

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g2_t2

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00086eea) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00086eea) list_medium_line_x2_t3_g2_t

0x0867,	// (0x00078557) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t4_g4_g1

0x0867,	// (0x00078557) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t4_g4_g2

0x0867,	// (0x00078557) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t4_g4_g3

0x0867,	// (0x00078557) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00086ef6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00086ef6) list_medium_line_x2_t4_g4_g

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g4_t1

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g4_t2

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g4_t3

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00086eff) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00086eff) list_medium_line_x2_t4_g4_t

0x0867,	// (0x00078557) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t2_g4_g1

0x0867,	// (0x00078557) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t2_g4_g2

0x0867,	// (0x00078557) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t2_g4_g3

0x0867,	// (0x00078557) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00086ef6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00086ef6) list_medium_line_x2_t2_g4_g

0x0b2b,	// (0x0007881b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t2_g4_t1

0x0b2b,	// (0x0007881b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x00086f66) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x00086f66) list_medium_line_x2_t2_g4_t

0x0867,	// (0x00078557) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t2_g3_g1

0x0867,	// (0x00078557) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t2_g3_g2

0x0867,	// (0x00078557) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00086ee3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00086ee3) list_medium_line_x2_t2_g3_g

0x0b2b,	// (0x0007881b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t2_g3_t1

0x0b2b,	// (0x0007881b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x00086f66) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x00086f66) list_medium_line_x2_t2_g3_t

0x70f9,	// (0x0007ede9) main_sp_fs_list_pane_ParamLimits

0x70f9,	// (0x0007ede9) main_sp_fs_list_pane

0x7105,	// (0x0007edf5) sp_fs_scroll_pane_ParamLimits

0x7105,	// (0x0007edf5) sp_fs_scroll_pane

0x10b6,	// (0x00078da6) list_medium_line_x2_t3_t1

0x10b6,	// (0x00078da6) list_medium_line_x2_t3_t2

0x10b6,	// (0x00078da6) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x00086fb1) list_medium_line_x2_t3_t

0x10b6,	// (0x00078da6) list_medium_line_x3_t4_t1

0x10b6,	// (0x00078da6) list_medium_line_x3_t4_t2

0x10b6,	// (0x00078da6) list_medium_line_x3_t4_t3

0x10b6,	// (0x00078da6) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x00086fb8) list_medium_line_x3_t4_t

0x10b6,	// (0x00078da6) list_medium_line_x4_t5_t1

0x10b6,	// (0x00078da6) list_medium_line_x4_t5_t2

0x10b6,	// (0x00078da6) list_medium_line_x4_t5_t3

0x10b6,	// (0x00078da6) list_medium_line_x4_t5_t4

0x10b6,	// (0x00078da6) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x00086fc1) list_medium_line_x4_t5_t

0x0867,	// (0x00078557) list_medium_line_t4_g4_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t4_g4_g1

0x0867,	// (0x00078557) list_medium_line_t4_g4_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t4_g4_g2

0x0867,	// (0x00078557) list_medium_line_t4_g4_g3_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t4_g4_g3

0x0867,	// (0x00078557) list_medium_line_t4_g4_g4_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x00086ef6) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x00086ef6) list_medium_line_t4_g4_g

0x0b2b,	// (0x0007881b) list_medium_line_t4_g4_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t4_g4_t1

0x0b2b,	// (0x0007881b) list_medium_line_t4_g4_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t4_g4_t2

0x0b2b,	// (0x0007881b) list_medium_line_t4_g4_t3_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t4_g4_t3

0x0b2b,	// (0x0007881b) list_medium_line_t4_g4_t4_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x00086eff) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x00086eff) list_medium_line_t4_g4_t

0x71ee,	// (0x0007eede) chi_dic_find_pane_g1

0x86a1,	// (0x00080391) main_tport_pane

0x10b6,	// (0x00078da6) list_medium_line_plain_t1

0x0867,	// (0x00078557) list_medium_line_t2_g2_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t2_g2_g1

0x0867,	// (0x00078557) list_medium_line_t2_g2_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x00086ef1) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x00086ef1) list_medium_line_t2_g2_g

0x0b2b,	// (0x0007881b) list_medium_line_t2_g2_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t2_g2_t1

0x0b2b,	// (0x0007881b) list_medium_line_t2_g2_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x00086f66) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x00086f66) list_medium_line_t2_g2_t

0x24fa,	// (0x0007a1ea) aid_sp_fs_list_icon_a_sm

0x4121,	// (0x0007be11) aid_sp_fs_list_icon_d

0x2502,	// (0x0007a1f2) aid_sp_fs_text_primary

0x250b,	// (0x0007a1fb) aid_sp_fs_text_secondary

0xd871,	// (0x00085561) list_medium_line

0xd871,	// (0x00085561) list_medium_line_g2

0xd871,	// (0x00085561) list_medium_line_g3

0xd871,	// (0x00085561) list_medium_line_plain

0xd871,	// (0x00085561) list_medium_line_plain_t2

0xd871,	// (0x00085561) list_medium_line_plain_t3

0xd871,	// (0x00085561) list_medium_line_right_icon

0xd871,	// (0x00085561) list_medium_line_right_iconx2

0xd871,	// (0x00085561) list_medium_line_t2

0xd871,	// (0x00085561) list_medium_line_t2_g2

0xd871,	// (0x00085561) list_medium_line_t2_g3

0xd871,	// (0x00085561) list_medium_line_t2_right_icon

0xd871,	// (0x00085561) list_medium_line_t2_right_iconx2

0xd871,	// (0x00085561) list_medium_line_t3

0xd871,	// (0x00085561) list_medium_line_t3_g2

0xd871,	// (0x00085561) list_medium_line_t3_g3

0xd871,	// (0x00085561) list_medium_line_t3_right_iconx2

0xd871,	// (0x00085561) list_medium_line_t4_g4

0xd871,	// (0x00085561) list_medium_line_x2

0xd871,	// (0x00085561) list_medium_line_x2_t2_g2

0xd871,	// (0x00085561) list_medium_line_x2_t2_g3

0xd871,	// (0x00085561) list_medium_line_x2_t2_g4

0xd871,	// (0x00085561) list_medium_line_x2_t3

0xd871,	// (0x00085561) list_medium_line_x2_t3_g2

0xd871,	// (0x00085561) list_medium_line_x2_t3_g3

0xd871,	// (0x00085561) list_medium_line_x2_t3_g4

0xd871,	// (0x00085561) list_medium_line_x2_t4_g2

0xd871,	// (0x00085561) list_medium_line_x2_t4_g4

0xd871,	// (0x00085561) list_medium_line_x3

0xd871,	// (0x00085561) list_medium_line_x3_t4

0xd871,	// (0x00085561) list_medium_line_x3_t4_g4

0xd871,	// (0x00085561) list_medium_line_x4_t4

0xd871,	// (0x00085561) list_medium_line_x4_t4_g7

0xd871,	// (0x00085561) list_medium_line_x4_t5

0xb14a,	// (0x00082e3a) list_single_fs_dyc_pane_ParamLimits

0xb14a,	// (0x00082e3a) list_single_fs_dyc_pane

0x0867,	// (0x00078557) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x4_t4_g7_g1

0x0867,	// (0x00078557) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x4_t4_g7_g2

0x0867,	// (0x00078557) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x4_t4_g7_g3

0x0867,	// (0x00078557) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x4_t4_g7_g4

0x0867,	// (0x00078557) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x4_t4_g7_g5

0x0867,	// (0x00078557) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x4_t4_g7_g6

0x0875,	// (0x00078565) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0875,	// (0x00078565) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb52,	// (0x00087842) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb52,	// (0x00087842) list_medium_line_x4_t4_g7_g

0x0b2b,	// (0x0007881b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x4_t4_g7_t1

0x0b2b,	// (0x0007881b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x4_t4_g7_t2

0x0b2b,	// (0x0007881b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x4_t4_g7_t3

0x16e1,	// (0x000793d1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x16e1,	// (0x000793d1) list_medium_line_x4_t4_g7_t4

0x16e1,	// (0x000793d1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x16e1,	// (0x000793d1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb61,	// (0x00087851) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb61,	// (0x00087851) list_medium_line_x4_t4_g7_t

0xb89e,	// (0x0008358e) list_single_dyc_row_pane_ParamLimits

0xb89e,	// (0x0008358e) list_single_dyc_row_pane

0xbf6d,	// (0x00083c5d) call5_gesture_pane_ParamLimits

0xbf6d,	// (0x00083c5d) call5_gesture_pane

0xbfa1,	// (0x00083c91) call5_windows_pane_ParamLimits

0xbfa1,	// (0x00083c91) call5_windows_pane

0xbff4,	// (0x00083ce4) call5_swipe_1_pane_cp_ParamLimits

0xbff4,	// (0x00083ce4) call5_swipe_1_pane_cp

0xc000,	// (0x00083cf0) call5_swipe_2_pane_cp_ParamLimits

0xc000,	// (0x00083cf0) call5_swipe_2_pane_cp

0x0b19,	// (0x00078809) call5_image_pane_cp

0xc00c,	// (0x00083cfc) popup_call5_audio_first_window_cp_ParamLimits

0xc00c,	// (0x00083cfc) popup_call5_audio_first_window_cp

0x2fae,	// (0x0007ac9e) call5_swipe_1_pane_g1_cp_ParamLimits

0x2fae,	// (0x0007ac9e) call5_swipe_1_pane_g1_cp

0x301b,	// (0x0007ad0b) call5_swipe_1_pane_g2_cp

0x2fc7,	// (0x0007acb7) call5_swipe_1_pane_t1_cp_ParamLimits

0x2fc7,	// (0x0007acb7) call5_swipe_1_pane_t1_cp

0x2fae,	// (0x0007ac9e) call5_swipe_2_pane_g1_cp_ParamLimits

0x2fae,	// (0x0007ac9e) call5_swipe_2_pane_g1_cp

0x3023,	// (0x0007ad13) call5_swipe_2_pane_g2_cp

0x302b,	// (0x0007ad1b) call5_swipe_2_pane_t1_cp_ParamLimits

0x302b,	// (0x0007ad1b) call5_swipe_2_pane_t1_cp

0xdf0b,	// (0x00085bfb) main_sp_fs_email_pane

0x3040,	// (0x0007ad30) main_sp_fs_listscroll_pane_te

0x4137,	// (0x0007be27) popup_sp_fs_action_menu_pane_ParamLimits

0x4137,	// (0x0007be27) popup_sp_fs_action_menu_pane

0x0b59,	// (0x00078849) bg_sp_fs_ctrlbar_pane_g1

0x3049,	// (0x0007ad39) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3052,	// (0x0007ad42) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x305b,	// (0x0007ad4b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0b59,	// (0x00078849) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4f,	// (0x0008793f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x740e,	// (0x0007f0fe) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x740e,	// (0x0007f0fe) bg_sp_fs_ctrlbar_ddmenu_pane

0x3064,	// (0x0007ad54) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3064,	// (0x0007ad54) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3070,	// (0x0007ad60) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3070,	// (0x0007ad60) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc58,	// (0x00087948) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc58,	// (0x00087948) main_sp_fs_ctrlbar_ddmenu_pane_g

0x307c,	// (0x0007ad6c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x307c,	// (0x0007ad6c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0b59,	// (0x00078849) list_medium_line_t2_right_icon_g1

0x10b6,	// (0x00078da6) list_medium_line_t2_right_icon_t1

0x10b6,	// (0x00078da6) list_medium_line_t2_right_icon_t2

0x0001,

0xfc5d,	// (0x0008794d) list_medium_line_t2_right_icon_t

0xe43c,	// (0x0008612c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe43c,	// (0x0008612c) bg_sp_fs_ctrlbar_pane

0xc071,	// (0x00083d61) main_sp_fs_ctrlbar_button_pane_cp01

0xc079,	// (0x00083d69) main_sp_fs_ctrlbar_ddmenu_pane

0x30ce,	// (0x0007adbe) main_sp_fs_ctrlbar_pane_g1

0x30da,	// (0x0007adca) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc62,	// (0x00087952) main_sp_fs_ctrlbar_pane_g

0xc0b5,	// (0x00083da5) main_sp_fs_ctrlbar_pane_t1

0xc0f0,	// (0x00083de0) main_sp_fs_ctrlbar_pane

0xc106,	// (0x00083df6) main_sp_fs_listscroll_pane_te_cp01

0xc117,	// (0x00083e07) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc117,	// (0x00083e07) popup_sp_fs_action_menu_pane_cp01

0xdf0b,	// (0x00085bfb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdf0b,	// (0x00085bfb) bg_sp_fs_highlight_list_pane_cp01

0x3101,	// (0x0007adf1) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3101,	// (0x0007adf1) sp_fs_action_menu_list_gene_pane_g1

0x3110,	// (0x0007ae00) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3110,	// (0x0007ae00) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc70,	// (0x00087960) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc70,	// (0x00087960) sp_fs_action_menu_list_gene_pane_g

0x311d,	// (0x0007ae0d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x311d,	// (0x0007ae0d) sp_fs_action_menu_list_gene_pane_t1

0x3135,	// (0x0007ae25) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3135,	// (0x0007ae25) sp_fs_action_menu_list_gene_pane

0x3156,	// (0x0007ae46) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3156,	// (0x0007ae46) popup_sp_fs_action_menu_bg_pane

0x3164,	// (0x0007ae54) sp_fs_action_menu_list_pane_ParamLimits

0x3164,	// (0x0007ae54) sp_fs_action_menu_list_pane

0x3186,	// (0x0007ae76) sp_fs_scroll_pane_cp01_ParamLimits

0x3186,	// (0x0007ae76) sp_fs_scroll_pane_cp01

0x10b6,	// (0x00078da6) list_medium_line_plain_t2_t1

0x10b6,	// (0x00078da6) list_medium_line_plain_t2_t2

0x0001,

0xfc5d,	// (0x0008794d) list_medium_line_plain_t2_t

0x10b6,	// (0x00078da6) list_medium_line_plain_t3_t1

0x10b6,	// (0x00078da6) list_medium_line_plain_t3_t2

0x10b6,	// (0x00078da6) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x00086fb1) list_medium_line_plain_t3_t

0x0867,	// (0x00078557) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t2_g2_g1

0x0867,	// (0x00078557) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00086ef1) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00086ef1) list_medium_line_x2_t2_g2_g

0x0b2b,	// (0x0007881b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t2_g2_t1

0x0b2b,	// (0x0007881b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x00086f66) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x00086f66) list_medium_line_x2_t2_g2_t

0x0867,	// (0x00078557) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t4_g2_g1

0x0867,	// (0x00078557) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00086ef1) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00086ef1) list_medium_line_x2_t4_g2_g

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g2_t1

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g2_t2

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g2_t3

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00086eff) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00086eff) list_medium_line_x2_t4_g2_t

0x0b59,	// (0x00078849) list_medium_line_t3_right_iconx2_g1

0x0b59,	// (0x00078849) list_medium_line_t3_right_iconx2_g2

0x0b59,	// (0x00078849) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x000870d2) list_medium_line_t3_right_iconx2_g

0x10b6,	// (0x00078da6) list_medium_line_t3_right_iconx2_t1

0x10b6,	// (0x00078da6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc5d,	// (0x0008794d) list_medium_line_t3_right_iconx2_t

0x0867,	// (0x00078557) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x3_t4_g4_g1

0x0867,	// (0x00078557) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x3_t4_g4_g2

0x0867,	// (0x00078557) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x3_t4_g4_g3

0x0867,	// (0x00078557) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x00086ef6) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x00086ef6) list_medium_line_x3_t4_g4_g

0x0b2b,	// (0x0007881b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x3_t4_g4_t1

0x0b2b,	// (0x0007881b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x3_t4_g4_t2

0x0b2b,	// (0x0007881b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x3_t4_g4_t3

0x0b2b,	// (0x0007881b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x00086eff) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x00086eff) list_medium_line_x3_t4_g4_t

0xc137,	// (0x00083e27) list_single_dyc_row_text_pane_t1_ParamLimits

0xc137,	// (0x00083e27) list_single_dyc_row_text_pane_t1

0xc16e,	// (0x00083e5e) list_single_dyc_row_text_pane_t2_ParamLimits

0xc16e,	// (0x00083e5e) list_single_dyc_row_text_pane_t2

0x31ac,	// (0x0007ae9c) list_single_dyc_row_text_pane_t3_ParamLimits

0x31ac,	// (0x0007ae9c) list_single_dyc_row_text_pane_t3

0x0005,

0xfc75,	// (0x00087965) list_single_dyc_row_text_pane_t_ParamLimits

0xfc75,	// (0x00087965) list_single_dyc_row_text_pane_t

0x31d0,	// (0x0007aec0) list_single_dyc_row_pane_g1_ParamLimits

0x31d0,	// (0x0007aec0) list_single_dyc_row_pane_g1

0x31dc,	// (0x0007aecc) list_single_dyc_row_pane_g2_ParamLimits

0x31dc,	// (0x0007aecc) list_single_dyc_row_pane_g2

0x31e8,	// (0x0007aed8) list_single_dyc_row_pane_g3_ParamLimits

0x31e8,	// (0x0007aed8) list_single_dyc_row_pane_g3

0x31f4,	// (0x0007aee4) list_single_dyc_row_pane_g4_ParamLimits

0x31f4,	// (0x0007aee4) list_single_dyc_row_pane_g4

0x0003,

0xfc82,	// (0x00087972) list_single_dyc_row_pane_g_ParamLimits

0xfc82,	// (0x00087972) list_single_dyc_row_pane_g

0x3200,	// (0x0007aef0) list_single_dyc_row_text_pane_ParamLimits

0x3200,	// (0x0007aef0) list_single_dyc_row_text_pane

0xd871,	// (0x00085561) bg_sp_fs_scroll_pane

0x321f,	// (0x0007af0f) thumb_sp_fs_scroll_pane

0x0867,	// (0x00078557) list_medium_line_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_g1

0x0b2b,	// (0x0007881b) list_medium_line_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t1

0x0867,	// (0x00078557) list_medium_line_x2_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_g1

0x0867,	// (0x00078557) list_medium_line_x2_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x00086ef1) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x00086ef1) list_medium_line_x2_g

0x0b2b,	// (0x0007881b) list_medium_line_x2_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t1

0x0867,	// (0x00078557) list_medium_line_x3_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x3_g1

0x3228,	// (0x0007af18) list_medium_line_x3_g2_ParamLimits

0x3228,	// (0x0007af18) list_medium_line_x3_g2

0x0001,

0xfc8b,	// (0x0008797b) list_medium_line_x3_g_ParamLimits

0xfc8b,	// (0x0008797b) list_medium_line_x3_g

0x3236,	// (0x0007af26) list_medium_line_x3_t1_ParamLimits

0x3236,	// (0x0007af26) list_medium_line_x3_t1

0x324a,	// (0x0007af3a) thumb_sp_fs_scroll_pane_g1

0x3253,	// (0x0007af43) thumb_sp_fs_scroll_pane_g2

0x325c,	// (0x0007af4c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc90,	// (0x00087980) thumb_sp_fs_scroll_pane_g

0x324a,	// (0x0007af3a) bg_sp_fs_scroll_pane_g1

0x3253,	// (0x0007af43) bg_sp_fs_scroll_pane_g2

0x325c,	// (0x0007af4c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc90,	// (0x00087980) bg_sp_fs_scroll_pane_g

0x0867,	// (0x00078557) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t3_g4_g1

0x0867,	// (0x00078557) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t3_g4_g2

0x0867,	// (0x00078557) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t3_g4_g3

0x0867,	// (0x00078557) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0867,	// (0x00078557) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00086ef6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00086ef6) list_medium_line_x2_t3_g4_g

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g4_t1

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g4_t2

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00086eea) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00086eea) list_medium_line_x2_t3_g4_t

0x0867,	// (0x00078557) list_medium_line_g2_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_g2_g1

0x0867,	// (0x00078557) list_medium_line_g2_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x00086ef1) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x00086ef1) list_medium_line_g2_g

0x0b2b,	// (0x0007881b) list_medium_line_g2_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_g2_t1

0x0867,	// (0x00078557) list_medium_line_t3_g2_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t3_g2_g1

0x0867,	// (0x00078557) list_medium_line_t3_g2_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x00086ef1) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x00086ef1) list_medium_line_t3_g2_g

0x0b2b,	// (0x0007881b) list_medium_line_t3_g2_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t3_g2_t1

0x0b2b,	// (0x0007881b) list_medium_line_t3_g2_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t3_g2_t2

0x0b2b,	// (0x0007881b) list_medium_line_t3_g2_t3_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00086eea) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00086eea) list_medium_line_t3_g2_t

0x0b59,	// (0x00078849) list_medium_line_right_icon_g1

0x10b6,	// (0x00078da6) list_medium_line_right_icon_t1

0x0867,	// (0x00078557) list_medium_line_t2_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t2_g1

0x0b2b,	// (0x0007881b) list_medium_line_t2_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t2_t1

0x0b2b,	// (0x0007881b) list_medium_line_t2_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x00086f66) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x00086f66) list_medium_line_t2_t

0x0867,	// (0x00078557) list_medium_line_t3_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t3_g1

0x0b2b,	// (0x0007881b) list_medium_line_t3_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t3_t1

0x0b2b,	// (0x0007881b) list_medium_line_t3_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t3_t2

0x0b2b,	// (0x0007881b) list_medium_line_t3_t3_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00086eea) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00086eea) list_medium_line_t3_t

0x0867,	// (0x00078557) list_medium_line_g3_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_g3_g1

0x0867,	// (0x00078557) list_medium_line_g3_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_g3_g2

0x0867,	// (0x00078557) list_medium_line_g3_g3_ParamLimits

0x0867,	// (0x00078557) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00086ee3) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00086ee3) list_medium_line_g3_g

0x0b2b,	// (0x0007881b) list_medium_line_g3_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_g3_t1

0x0867,	// (0x00078557) list_medium_line_t2_g3_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t2_g3_g1

0x0867,	// (0x00078557) list_medium_line_t2_g3_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t2_g3_g2

0x0867,	// (0x00078557) list_medium_line_t2_g3_g3_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00086ee3) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00086ee3) list_medium_line_t2_g3_g

0x0b2b,	// (0x0007881b) list_medium_line_t2_g3_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t2_g3_t1

0x0b2b,	// (0x0007881b) list_medium_line_t2_g3_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x00086f66) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x00086f66) list_medium_line_t2_g3_t

0x0867,	// (0x00078557) list_medium_line_t3_g3_g1_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t3_g3_g1

0x0867,	// (0x00078557) list_medium_line_t3_g3_g2_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t3_g3_g2

0x0867,	// (0x00078557) list_medium_line_t3_g3_g3_ParamLimits

0x0867,	// (0x00078557) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00086ee3) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00086ee3) list_medium_line_t3_g3_g

0x0b2b,	// (0x0007881b) list_medium_line_t3_g3_t1_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t3_g3_t1

0x0b2b,	// (0x0007881b) list_medium_line_t3_g3_t2_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t3_g3_t2

0x0b2b,	// (0x0007881b) list_medium_line_t3_g3_t3_ParamLimits

0x0b2b,	// (0x0007881b) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00086eea) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00086eea) list_medium_line_t3_g3_t

0x0b59,	// (0x00078849) list_medium_line_right_iconx2_g1

0x0b59,	// (0x00078849) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x000870cd) list_medium_line_right_iconx2_g

0x10b6,	// (0x00078da6) list_medium_line_right_iconx2_t1

0x0b59,	// (0x00078849) list_medium_line_t2_right_iconx2_g1

0x0b59,	// (0x00078849) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x000870cd) list_medium_line_t2_right_iconx2_g

0x10b6,	// (0x00078da6) list_medium_line_t2_right_iconx2_t1

0x10b6,	// (0x00078da6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc5d,	// (0x0008794d) list_medium_line_t2_right_iconx2_t

0x10b6,	// (0x00078da6) list_medium_line_x4_t4_t1

0x10b6,	// (0x00078da6) list_medium_line_x4_t4_t2

0x10b6,	// (0x00078da6) list_medium_line_x4_t4_t3

0x10b6,	// (0x00078da6) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x00086fb8) list_medium_line_x4_t4_t

0xc2bb,	// (0x00083fab) tport_appsw_pane_ParamLimits

0xc2bb,	// (0x00083fab) tport_appsw_pane

0xc2c9,	// (0x00083fb9) tport_contact_pane_ParamLimits

0xc2c9,	// (0x00083fb9) tport_contact_pane

0xc2d9,	// (0x00083fc9) tport_listscroll_pane_ParamLimits

0xc2d9,	// (0x00083fc9) tport_listscroll_pane

0xc2e9,	// (0x00083fd9) cell_tport_appsw_pane_ParamLimits

0xc2e9,	// (0x00083fd9) cell_tport_appsw_pane

0x0875,	// (0x00078565) tport_appsw_pane_g1_ParamLimits

0x0875,	// (0x00078565) tport_appsw_pane_g1

0x3265,	// (0x0007af55) tport_contact_pane_g1

0x2b00,	// (0x0007a7f0) tport_contact_pane_t1

0x326e,	// (0x0007af5e) tport_contact_pane_t2

0x0001,

0xfc97,	// (0x00087987) tport_contact_pane_t

0x327c,	// (0x0007af6c) list_tport_pane

0x3285,	// (0x0007af75) scroll_pane_cp_030

0xc31c,	// (0x0008400c) cell_tport_appsw_pane_g1

0xc32c,	// (0x0008401c) cell_tport_appsw_pane_t1

0xc33a,	// (0x0008402a) grid_highlight_pane_cp019

0xc342,	// (0x00084032) list_tport_double_graphic_pane_ParamLimits

0xc342,	// (0x00084032) list_tport_double_graphic_pane

0xdf0b,	// (0x00085bfb) list_highlight_pane_cp023_ParamLimits

0xdf0b,	// (0x00085bfb) list_highlight_pane_cp023

0xc353,	// (0x00084043) list_tport_double_graphic_pane_g1_ParamLimits

0xc353,	// (0x00084043) list_tport_double_graphic_pane_g1

0xc360,	// (0x00084050) list_tport_double_graphic_pane_t1_ParamLimits

0xc360,	// (0x00084050) list_tport_double_graphic_pane_t1

0xc375,	// (0x00084065) list_tport_double_graphic_pane_t2_ParamLimits

0xc375,	// (0x00084065) list_tport_double_graphic_pane_t2

0x0001,

0xfca3,	// (0x00087993) list_tport_double_graphic_pane_t_ParamLimits

0xfca3,	// (0x00087993) list_tport_double_graphic_pane_t

0xd871,	// (0x00085561) main_cale_note_pane

0xa2ca,	// (0x00081fba) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa2ca,	// (0x00081fba) cell_vitu2_function_top_wide_pane_cp01

0xbc44,	// (0x00083934) wait_bar_pane_cp05_ParamLimits

0xdf0b,	// (0x00085bfb) listscroll_cmail_pane

0x328e,	// (0x0007af7e) list_cmail_pane

0xc387,	// (0x00084077) list_cmail_body_pane

0xc3ae,	// (0x0008409e) list_single_cmail_header_caption_pane

0xc3d7,	// (0x000840c7) list_single_cmail_header_detail_pane_ParamLimits

0xc3d7,	// (0x000840c7) list_single_cmail_header_detail_pane

0x329e,	// (0x0007af8e) list_single_cmail_header_caption_pane_t1

0xc40d,	// (0x000840fd) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc40d,	// (0x000840fd) list_single_cmail_header_detail_pane_g1

0x417b,	// (0x0007be6b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x417b,	// (0x0007be6b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca8,	// (0x00087998) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca8,	// (0x00087998) list_single_cmail_header_detail_pane_g

0x32c2,	// (0x0007afb2) list_single_cmail_header_detail_pane_t1_ParamLimits

0x32c2,	// (0x0007afb2) list_single_cmail_header_detail_pane_t1

0x3322,	// (0x0007b012) list_single_cmail_header_editor_pane_bg_ParamLimits

0x3322,	// (0x0007b012) list_single_cmail_header_editor_pane_bg

0x2c5d,	// (0x0007a94d) list_cmail_body_pane_g1

0x3339,	// (0x0007b029) list_cmail_body_pane_t1

0x1f6d,	// (0x00079c5d) list_single_cmail_header_editor_pane_bg_g1

0x0d6a,	// (0x00078a5a) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1f7d,	// (0x00079c6d) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1f75,	// (0x00079c65) list_single_cmail_header_editor_pane_bg_g1_copy3

0x21da,	// (0x00079eca) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1f9d,	// (0x00079c8d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1f8d,	// (0x00079c7d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1f95,	// (0x00079c85) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0d4a,	// (0x00078a3a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc423,	// (0x00084113) calenote_gesture_pane_ParamLimits

0xc423,	// (0x00084113) calenote_gesture_pane

0xc43d,	// (0x0008412d) calenote_window_pane_ParamLimits

0xc43d,	// (0x0008412d) calenote_window_pane

0x3347,	// (0x0007b037) popup_note_window_cp01

0xc455,	// (0x00084145) calenote_swipe_1_pane_ParamLimits

0xc455,	// (0x00084145) calenote_swipe_1_pane

0xc000,	// (0x00083cf0) calenote_swipe_2_pane_ParamLimits

0xc000,	// (0x00083cf0) calenote_swipe_2_pane

0x2fae,	// (0x0007ac9e) calenote_swipe_1_pane_g1_ParamLimits

0x2fae,	// (0x0007ac9e) calenote_swipe_1_pane_g1

0x2fbb,	// (0x0007acab) calenote_swipe_1_pane_g2_ParamLimits

0x2fbb,	// (0x0007acab) calenote_swipe_1_pane_g2

0x0001,

0xfc45,	// (0x00087935) calenote_swipe_1_pane_g_ParamLimits

0xfc45,	// (0x00087935) calenote_swipe_1_pane_g

0x3359,	// (0x0007b049) calenote_swipe_1_pane_t1_ParamLimits

0x3359,	// (0x0007b049) calenote_swipe_1_pane_t1

0x2fae,	// (0x0007ac9e) calenote_swipe_2_pane_g1_ParamLimits

0x2fae,	// (0x0007ac9e) calenote_swipe_2_pane_g1

0x3378,	// (0x0007b068) calenote_swipe_2_pane_g2_ParamLimits

0x3378,	// (0x0007b068) calenote_swipe_2_pane_g2

0x0001,

0xfcb4,	// (0x000879a4) calenote_swipe_2_pane_g_ParamLimits

0xfcb4,	// (0x000879a4) calenote_swipe_2_pane_g

0x3384,	// (0x0007b074) calenote_swipe_2_pane_t1_ParamLimits

0x3384,	// (0x0007b074) calenote_swipe_2_pane_t1

0xd871,	// (0x00085561) main_mup_navstr_pane

0x914a,	// (0x00080e3a) main_mup3_pane_t7_ParamLimits

0x914a,	// (0x00080e3a) main_mup3_pane_t7

0x9975,	// (0x00081665) main_mp4_pane_g6_ParamLimits

0x9975,	// (0x00081665) main_mp4_pane_g6

0x9d13,	// (0x00081a03) main_image3_pane_t4_ParamLimits

0x9d13,	// (0x00081a03) main_image3_pane_t4

0xc468,	// (0x00084158) popup_navstr_preview_pane_ParamLimits

0xc468,	// (0x00084158) popup_navstr_preview_pane

0xc474,	// (0x00084164) scroll_navstr_pane_ParamLimits

0xc474,	// (0x00084164) scroll_navstr_pane

0xd871,	// (0x00085561) bg_popup_preview_window_pane_cp04

0x33ab,	// (0x0007b09b) popup_navstr_preview_pane_t1

0xc480,	// (0x00084170) scroll_navstr_pane_g1_ParamLimits

0xc480,	// (0x00084170) scroll_navstr_pane_g1

0xc48d,	// (0x0008417d) scroll_navstr_pane_t1_ParamLimits

0xc48d,	// (0x0008417d) scroll_navstr_pane_t1

0x3350,	// (0x0007b040) bg_button_pane_cp014

0x3350,	// (0x0007b040) bg_button_pane_cp030

0xbf13,	// (0x00083c03) list_double_fisheye_pane_g4_ParamLimits

0xbf13,	// (0x00083c03) list_double_fisheye_pane_g4

0xbf1f,	// (0x00083c0f) list_double_fisheye_pane_g5_ParamLimits

0xbf1f,	// (0x00083c0f) list_double_fisheye_pane_g5

0xf06f,	// (0x00086d5f) sp_fs_scroll_pane_cp03

0x30ce,	// (0x0007adbe) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x30da,	// (0x0007adca) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc62,	// (0x00087952) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc0b5,	// (0x00083da5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3296,	// (0x0007af86) sp_fs_scroll_pane_cp02

0x0a61,	// (0x00078751) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0a61,	// (0x00078751) popup_sp_fs_calendar_preview_list_single_pane

0xd871,	// (0x00085561) main_cam6_pano_pane

0x8679,	// (0x00080369) main_mup3_pane_ParamLimits

0xd871,	// (0x00085561) main_phacti_pane

0xbb19,	// (0x00083809) bg_button_pane_cp11

0xbb31,	// (0x00083821) main_mobtv_info_pane_g2_ParamLimits

0xbb31,	// (0x00083821) main_mobtv_info_pane_g2

0x0001,

0xfbc2,	// (0x000878b2) main_mobtv_info_pane_g_ParamLimits

0xfbc2,	// (0x000878b2) main_mobtv_info_pane_g

0xbce3,	// (0x000839d3) sc_clock_pane_t5_ParamLimits

0xbce3,	// (0x000839d3) sc_clock_pane_t5

0xbd84,	// (0x00083a74) main_radioblah_pane_g1_ParamLimits

0x2efa,	// (0x0007abea) main_radioblah_pane_t3_ParamLimits

0x2efa,	// (0x0007abea) main_radioblah_pane_t3

0x2f12,	// (0x0007ac02) main_radioblah_pane_t4_ParamLimits

0x2f12,	// (0x0007ac02) main_radioblah_pane_t4

0xbda2,	// (0x00083a92) main_radioblah_text_pane_ParamLimits

0xbda2,	// (0x00083a92) main_radioblah_text_pane

0xbdaf,	// (0x00083a9f) main_radioblah_info_pane_g1_ParamLimits

0xbe44,	// (0x00083b34) main_radioblah_info_pane_t4_ParamLimits

0xbe44,	// (0x00083b34) main_radioblah_info_pane_t4

0xdf0b,	// (0x00085bfb) main_sp_fs_calendar_pane

0xc49f,	// (0x0008418f) main_phacti_pane_g1

0xc4a7,	// (0x00084197) phacti_note_pane_ParamLimits

0xc4a7,	// (0x00084197) phacti_note_pane

0x33c2,	// (0x0007b0b2) phacti_term_pane_ParamLimits

0x33c2,	// (0x0007b0b2) phacti_term_pane

0x33d7,	// (0x0007b0c7) phacti_note_pane_t1_ParamLimits

0x33d7,	// (0x0007b0c7) phacti_note_pane_t1

0x33ee,	// (0x0007b0de) phacti_term_pane_g1

0x33f6,	// (0x0007b0e6) phacti_term_pane_t1_ParamLimits

0x33f6,	// (0x0007b0e6) phacti_term_pane_t1

0x3420,	// (0x0007b110) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0b00,	// (0x000787f0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcbe,	// (0x000879ae) popup_sp_fs_calendar_preview_list_single_pane_g

0x3428,	// (0x0007b118) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3428,	// (0x0007b118) popup_sp_fs_calendar_preview_list_single_pane_t1

0x343e,	// (0x0007b12e) aid_popup_sp_fs_bg_corner_pane

0x0b59,	// (0x00078849) popup_sp_fs_calendar_preview_bg_pane_g1

0xd871,	// (0x00085561) popup_sp_fs_calendar_preview_bg_pane

0x3446,	// (0x0007b136) popup_sp_fs_calendar_preview_list_pane

0xe43c,	// (0x0008612c) bg_main_sp_fs_cale_pane_ParamLimits

0xe43c,	// (0x0008612c) bg_main_sp_fs_cale_pane

0x3457,	// (0x0007b147) listscroll_cale_mrui_pane_ParamLimits

0x3457,	// (0x0007b147) listscroll_cale_mrui_pane

0x346c,	// (0x0007b15c) listscroll_sp_fs_schedule_track_pane

0x3475,	// (0x0007b165) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3475,	// (0x0007b165) main_sp_fs_ctrlbar_pane_cp01

0x3488,	// (0x0007b178) main_sp_fs_ribbon_pane

0x3490,	// (0x0007b180) popup_sp_fs_cale_preview_window

0xc50a,	// (0x000841fa) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc50a,	// (0x000841fa) list_single_sp_fs_schedule_track_pane

0xdf64,	// (0x00085c54) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdf64,	// (0x00085c54) bg_sp_fs_highlight_list_pane_cp03

0xc52a,	// (0x0008421a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc52a,	// (0x0008421a) list_single_sp_fs_schedule_track_pane_g1

0xc536,	// (0x00084226) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc536,	// (0x00084226) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcc3,	// (0x000879b3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcc3,	// (0x000879b3) list_single_sp_fs_schedule_track_pane_g

0xc542,	// (0x00084232) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc542,	// (0x00084232) list_single_sp_fs_schedule_track_pane_t1

0xc55a,	// (0x0008424a) sp_fs_schedule_track_pane_ParamLimits

0xc55a,	// (0x0008424a) sp_fs_schedule_track_pane

0x34a2,	// (0x0007b192) sp_fs_schedule_track_pane_g1

0x34aa,	// (0x0007b19a) sp_fs_schedule_track_pane_g2

0x34b2,	// (0x0007b1a2) sp_fs_schedule_track_pane_g3

0x34ba,	// (0x0007b1aa) sp_fs_schedule_track_pane_g4

0x34c2,	// (0x0007b1b2) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc8,	// (0x000879b8) sp_fs_schedule_track_pane_g

0x1f6d,	// (0x00079c5d) bg_sp_fs_schedule_viewer_highlight_g1

0x0d6a,	// (0x00078a5a) bg_sp_fs_schedule_viewer_highlight_g2

0x1f75,	// (0x00079c65) bg_sp_fs_schedule_viewer_highlight_g3

0x1f7d,	// (0x00079c6d) bg_sp_fs_schedule_viewer_highlight_g4

0x21da,	// (0x00079eca) bg_sp_fs_schedule_viewer_highlight_g5

0x1f8d,	// (0x00079c7d) bg_sp_fs_schedule_viewer_highlight_g6

0x1f95,	// (0x00079c85) bg_sp_fs_schedule_viewer_highlight_g7

0x1f9d,	// (0x00079c8d) bg_sp_fs_schedule_viewer_highlight_g8

0x0d4a,	// (0x00078a3a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcd3,	// (0x000879c3) bg_sp_fs_schedule_viewer_highlight_g

0xd871,	// (0x00085561) bg_main_sp_fs_ribbon_pane

0xc56a,	// (0x0008425a) main_sp_fs_ribbon_pane_g1

0x34ca,	// (0x0007b1ba) main_sp_fs_ribbon_pane_t1

0xc573,	// (0x00084263) main_sp_fs_ribbon_pane_t2

0x34d9,	// (0x0007b1c9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfce6,	// (0x000879d6) main_sp_fs_ribbon_pane_t

0x34e8,	// (0x0007b1d8) main_sp_fs_ribbon_scheduler_pane

0x34f0,	// (0x0007b1e0) bg_main_sp_fs_ribbon_pane_g1

0x34f9,	// (0x0007b1e9) bg_main_sp_fs_ribbon_pane_g2

0x3502,	// (0x0007b1f2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfced,	// (0x000879dd) bg_main_sp_fs_ribbon_pane_g

0x350a,	// (0x0007b1fa) main_sp_fs_ribbon_scheduler_pane_g1

0x3513,	// (0x0007b203) main_sp_fs_ribbon_scheduler_pane_g2

0x351c,	// (0x0007b20c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcf4,	// (0x000879e4) main_sp_fs_ribbon_scheduler_pane_g

0x3525,	// (0x0007b215) list_cale_mrui_pane

0xc582,	// (0x00084272) sp_fs_scroll_pane_cp07_ParamLimits

0xc582,	// (0x00084272) sp_fs_scroll_pane_cp07

0xc59e,	// (0x0008428e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc59e,	// (0x0008428e) bg_sp_fs_schedule_viewer_highlight

0x3532,	// (0x0007b222) list_single_sp_fs_schedule_track_pane_cp01

0x353a,	// (0x0007b22a) list_sp_fs_schedule_track_pane

0x3542,	// (0x0007b232) sp_fs_scroll_pane_cp06_ParamLimits

0x3542,	// (0x0007b232) sp_fs_scroll_pane_cp06

0x0b59,	// (0x00078849) bgmain_sp_fs_calendar_pane_g1

0xc5ab,	// (0x0008429b) list_single_cale_mrui_pane_ParamLimits

0xc5ab,	// (0x0008429b) list_single_cale_mrui_pane

0x3554,	// (0x0007b244) list_single_cale_mrui_row_pane_ParamLimits

0x3554,	// (0x0007b244) list_single_cale_mrui_row_pane

0x3561,	// (0x0007b251) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3561,	// (0x0007b251) list_single_cale_mrui_row_pane_g1

0x35a6,	// (0x0007b296) list_single_cale_mrui_row_pane_t1_ParamLimits

0x35a6,	// (0x0007b296) list_single_cale_mrui_row_pane_t1

0xc5d5,	// (0x000842c5) list_single_cale_mrui_row_pane_t2_ParamLimits

0xc5d5,	// (0x000842c5) list_single_cale_mrui_row_pane_t2

0x35b8,	// (0x0007b2a8) list_single_cale_mrui_row_pane_t3_ParamLimits

0x35b8,	// (0x0007b2a8) list_single_cale_mrui_row_pane_t3

0x35e7,	// (0x0007b2d7) list_single_cale_mrui_row_pane_t4_ParamLimits

0x35e7,	// (0x0007b2d7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd02,	// (0x000879f2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd02,	// (0x000879f2) list_single_cale_mrui_row_pane_t

0xc63b,	// (0x0008432b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xc63b,	// (0x0008432b) list_single_cmail_header_editor_pane_bg_cp01

0xc65b,	// (0x0008434b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xc65b,	// (0x0008434b) list_single_cmail_header_editor_pane_bg_cp02

0xc677,	// (0x00084367) main_radioblah_text_pane_t1_ParamLimits

0xc677,	// (0x00084367) main_radioblah_text_pane_t1

0x3616,	// (0x0007b306) cam6_indi_pane_cp01

0x361e,	// (0x0007b30e) cam6_mode_pane_cp01

0x3626,	// (0x0007b316) cam6_pano_pane

0x362f,	// (0x0007b31f) cam6_zoom_pane_cp01

0x3637,	// (0x0007b327) cam6_pano_image_pane

0x3642,	// (0x0007b332) cam6_pano_pane_g1

0x2c5d,	// (0x0007a94d) cam6_pano_pane_g2

0x364b,	// (0x0007b33b) cam6_pano_pane_g3

0x3654,	// (0x0007b344) cam6_pano_pane_g4

0xee02,	// (0x00086af2) cam6_pano_pane_g5

0x365d,	// (0x0007b34d) cam6_pano_pane_g6

0x3667,	// (0x0007b357) cam6_pano_pane_g7

0x366f,	// (0x0007b35f) cam6_pano_pane_g8

0x3678,	// (0x0007b368) cam6_pano_pane_g9

0x0008,

0xfd0b,	// (0x000879fb) cam6_pano_pane_g

0xd871,	// (0x00085561) main_browser_tag_pane

0x33a3,	// (0x0007b093) grid_navstr_albumart_pane

0x3683,	// (0x0007b373) cell_navstr_albumart_pane_ParamLimits

0x3683,	// (0x0007b373) cell_navstr_albumart_pane

0x36a3,	// (0x0007b393) cell_navstr_albumart_pane_g1

0xe2d8,	// (0x00085fc8) cell_navstr_albumart_pane_g2

0xe2e8,	// (0x00085fd8) cell_navstr_albumart_pane_g3

0xe2e0,	// (0x00085fd0) cell_navstr_albumart_pane_g4

0x0003,

0xfd1e,	// (0x00087a0e) cell_navstr_albumart_pane_g

0xc692,	// (0x00084382) bt_list_pane_ParamLimits

0xc692,	// (0x00084382) bt_list_pane

0xc6b2,	// (0x000843a2) bt_list_pane_t1

0xc6c1,	// (0x000843b1) bt_list_pane_t2

0x0001,

0xfd27,	// (0x00087a17) bt_list_pane_t

0xd871,	// (0x00085561) main_cale_prevew_pane

0xc6d0,	// (0x000843c0) popup_cale_preview_window_ParamLimits

0xc6d0,	// (0x000843c0) popup_cale_preview_window

0xdf0b,	// (0x00085bfb) bg_popup_preview_window_pane_cp05_ParamLimits

0xdf0b,	// (0x00085bfb) bg_popup_preview_window_pane_cp05

0x36ab,	// (0x0007b39b) list_cale_preview_pane_ParamLimits

0x36ab,	// (0x0007b39b) list_cale_preview_pane

0xc6e9,	// (0x000843d9) list_double_cale_preview_pane_ParamLimits

0xc6e9,	// (0x000843d9) list_double_cale_preview_pane

0xc6fb,	// (0x000843eb) list_single_cale_preview_pane_ParamLimits

0xc6fb,	// (0x000843eb) list_single_cale_preview_pane

0xc711,	// (0x00084401) list_single_cale_preview_pane_g1

0xc719,	// (0x00084409) list_single_cale_preview_pane_t1_ParamLimits

0xc719,	// (0x00084409) list_single_cale_preview_pane_t1

0xc72e,	// (0x0008441e) list_double_cale_preview_pane_g1

0xc736,	// (0x00084426) list_double_cale_preview_pane_t1_ParamLimits

0xc736,	// (0x00084426) list_double_cale_preview_pane_t1

0xc74b,	// (0x0008443b) list_double_cale_preview_pane_t2_ParamLimits

0xc74b,	// (0x0008443b) list_double_cale_preview_pane_t2

0x0001,

0xfd2c,	// (0x00087a1c) list_double_cale_preview_pane_t_ParamLimits

0xfd2c,	// (0x00087a1c) list_double_cale_preview_pane_t

0xd871,	// (0x00085561) main_ezdial_pane

0xdf0b,	// (0x00085bfb) main_sp_fs_email_pane_ParamLimits

0xc01a,	// (0x00083d0a) cmail_ddmenu_btn01_pane_ParamLimits

0xc01a,	// (0x00083d0a) cmail_ddmenu_btn01_pane

0xc037,	// (0x00083d27) cmail_ddmenu_btn02_pane_ParamLimits

0xc037,	// (0x00083d27) cmail_ddmenu_btn02_pane

0xc055,	// (0x00083d45) cmail_ddmenu_btn03_pane_ParamLimits

0xc055,	// (0x00083d45) cmail_ddmenu_btn03_pane

0xc0f0,	// (0x00083de0) main_sp_fs_ctrlbar_pane_ParamLimits

0xc106,	// (0x00083df6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc387,	// (0x00084077) list_cmail_body_pane_ParamLimits

0x32ac,	// (0x0007af9c) bg_button_pane_cp12

0x32b5,	// (0x0007afa5) list_single_cmail_header_detail_pane_g3_ParamLimits

0x32b5,	// (0x0007afa5) list_single_cmail_header_detail_pane_g3

0x32fe,	// (0x0007afee) list_single_cmail_header_detail_pane_t2_ParamLimits

0x32fe,	// (0x0007afee) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcaf,	// (0x0008799f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcaf,	// (0x0008799f) list_single_cmail_header_detail_pane_t

0x340b,	// (0x0007b0fb) phacti_term_pane_t2_ParamLimits

0x340b,	// (0x0007b0fb) phacti_term_pane_t2

0x0001,

0xfcb9,	// (0x000879a9) phacti_term_pane_t_ParamLimits

0xfcb9,	// (0x000879a9) phacti_term_pane_t

0x36b7,	// (0x0007b3a7) aid_size_list_single_double

0xc763,	// (0x00084453) popup_ezdial_listscroll_window

0xc784,	// (0x00084474) popup_number_entry_window_cp01

0x0b19,	// (0x00078809) bg_popup_call_pane_cp09

0x36c3,	// (0x0007b3b3) ezdial_list_pane

0x36cb,	// (0x0007b3bb) scroll_pane_cp23

0x740e,	// (0x0007f0fe) bg_button_pane_cp028_ParamLimits

0x740e,	// (0x0007f0fe) bg_button_pane_cp028

0xc792,	// (0x00084482) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc792,	// (0x00084482) cmail_ddmenu_btn01_pane_g1

0xc7a2,	// (0x00084492) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc7a2,	// (0x00084492) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd31,	// (0x00087a21) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd31,	// (0x00087a21) cmail_ddmenu_btn01_pane_g

0x36d3,	// (0x0007b3c3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x36d3,	// (0x0007b3c3) cmail_ddmenu_btn01_pane_t1

0xe43c,	// (0x0008612c) bg_button_pane_cp029_ParamLimits

0xe43c,	// (0x0008612c) bg_button_pane_cp029

0xc7ae,	// (0x0008449e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc7ae,	// (0x0008449e) cmail_ddmenu_btn02_pane_g1

0xc7c6,	// (0x000844b6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc7c6,	// (0x000844b6) cmail_ddmenu_btn02_pane_t1

0xdf64,	// (0x00085c54) bg_button_pane_cp031_ParamLimits

0xdf64,	// (0x00085c54) bg_button_pane_cp031

0xc7ae,	// (0x0008449e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc7ae,	// (0x0008449e) cmail_ddmenu_btn03_pane_g1

0xc7c6,	// (0x000844b6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc7c6,	// (0x000844b6) cmail_ddmenu_btn03_pane_t1

0x9bb0,	// (0x000818a0) cell_dialer2_keypad_pane_t1_ParamLimits

0x9bca,	// (0x000818ba) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9bca,	// (0x000818ba) cell_dialer2_keypad_pane_t1_copy1

0xb95a,	// (0x0008364a) ncimui_group_button_pane

0xdf0b,	// (0x00085bfb) main_sp_fs_calendar_pane_ParamLimits

0xc3ae,	// (0x0008409e) list_single_cmail_header_caption_pane_ParamLimits

0x344e,	// (0x0007b13e) aid_recal_txt_sm_pane

0xd871,	// (0x00085561) mian_recal_day_pane

0x3490,	// (0x0007b180) popup_sp_fs_cale_preview_window_ParamLimits

0x36e9,	// (0x0007b3d9) list_recal_day_pane

0x372b,	// (0x0007b41b) list_single_recal_day_pane_ParamLimits

0x372b,	// (0x0007b41b) list_single_recal_day_pane

0x373d,	// (0x0007b42d) list_single_recal_day_pane_g1_ParamLimits

0x373d,	// (0x0007b42d) list_single_recal_day_pane_g1

0x3749,	// (0x0007b439) list_single_recal_day_pane_g2_ParamLimits

0x3749,	// (0x0007b439) list_single_recal_day_pane_g2

0x3755,	// (0x0007b445) list_single_recal_day_pane_g3_ParamLimits

0x3755,	// (0x0007b445) list_single_recal_day_pane_g3

0xc7ea,	// (0x000844da) list_single_recal_day_pane_g4_ParamLimits

0xc7ea,	// (0x000844da) list_single_recal_day_pane_g4

0x3761,	// (0x0007b451) list_single_recal_day_pane_g5_ParamLimits

0x3761,	// (0x0007b451) list_single_recal_day_pane_g5

0x376d,	// (0x0007b45d) list_single_recal_day_pane_g6_ParamLimits

0x376d,	// (0x0007b45d) list_single_recal_day_pane_g6

0x0004,

0xfd40,	// (0x00087a30) list_single_recal_day_pane_g_ParamLimits

0xfd40,	// (0x00087a30) list_single_recal_day_pane_g

0x3781,	// (0x0007b471) list_single_recal_day_pane_t1

0x3793,	// (0x0007b483) list_single_recal_day_pane_t2

0x0001,

0xfd4b,	// (0x00087a3b) list_single_recal_day_pane_t

0xc802,	// (0x000844f2) ncimui_query_button_pane_ParamLimits

0xc802,	// (0x000844f2) ncimui_query_button_pane

0xc812,	// (0x00084502) ncimui_query_button_pane_t1_ParamLimits

0xc812,	// (0x00084502) ncimui_query_button_pane_t1

0x37a5,	// (0x0007b495) ncimui_query_button_pane_t2_ParamLimits

0x37a5,	// (0x0007b495) ncimui_query_button_pane_t2

0x0001,

0xfd50,	// (0x00087a40) ncimui_query_button_pane_t_ParamLimits

0xfd50,	// (0x00087a40) ncimui_query_button_pane_t

0xc825,	// (0x00084515) query_button_pane_ParamLimits

0xc825,	// (0x00084515) query_button_pane

0xd871,	// (0x00085561) bg_button_pane_cp0028

0x37b8,	// (0x0007b4a8) query_button_pane_t1

0x86a1,	// (0x00080391) main_tport_pane_ParamLimits

0xc291,	// (0x00083f81) bg_popup_window_pane_cp01_ParamLimits

0xc291,	// (0x00083f81) bg_popup_window_pane_cp01

0xc29f,	// (0x00083f8f) heading_pane_cp08_ParamLimits

0xc29f,	// (0x00083f8f) heading_pane_cp08

0xc2ad,	// (0x00083f9d) heading_pane_cp07_ParamLimits

0xc2ad,	// (0x00083f9d) heading_pane_cp07

0xc31c,	// (0x0008400c) cell_tport_appsw_pane_g2

0x0002,

0xfc9c,	// (0x0008798c) cell_tport_appsw_pane_g

0x7621,	// (0x0007f311) input_candi_list_open_g1

0x0f63,	// (0x00078c53) list_cale_time_pane_g6_ParamLimits

0x0f63,	// (0x00078c53) list_cale_time_pane_g6

0x8b9c,	// (0x0008088c) aid_size_touch_calib_1_ParamLimits

0x8b9c,	// (0x0008088c) aid_size_touch_calib_1

0x8ba8,	// (0x00080898) aid_size_touch_calib_2_ParamLimits

0x8ba8,	// (0x00080898) aid_size_touch_calib_2

0x8bb6,	// (0x000808a6) aid_size_touch_calib_3_ParamLimits

0x8bb6,	// (0x000808a6) aid_size_touch_calib_3

0x8bc6,	// (0x000808b6) aid_size_touch_calib_4_ParamLimits

0x8bc6,	// (0x000808b6) aid_size_touch_calib_4

0x8bd4,	// (0x000808c4) main_touch_calib_button_group_pane_ParamLimits

0x8bd4,	// (0x000808c4) main_touch_calib_button_group_pane

0x8be2,	// (0x000808d2) main_touch_calib_pane_g1_ParamLimits

0x8bee,	// (0x000808de) main_touch_calib_pane_g2_ParamLimits

0x8bfa,	// (0x000808ea) main_touch_calib_pane_g3_ParamLimits

0x8c06,	// (0x000808f6) main_touch_calib_pane_g4_ParamLimits

0xf6de,	// (0x000873ce) main_touch_calib_pane_g_ParamLimits

0x8c12,	// (0x00080902) main_touch_calib_pane_t1_ParamLimits

0x8c2b,	// (0x0008091b) main_touch_calib_pane_t2_ParamLimits

0x8c44,	// (0x00080934) main_touch_calib_pane_t3_ParamLimits

0x8c5a,	// (0x0008094a) main_touch_calib_pane_t4_ParamLimits

0x8c70,	// (0x00080960) main_touch_calib_pane_t5_ParamLimits

0xf6e7,	// (0x000873d7) main_touch_calib_pane_t_ParamLimits

0xeb9c,	// (0x0008688c) list_single_fp_cale_pane_g3_ParamLimits

0xeb9c,	// (0x0008688c) list_single_fp_cale_pane_g3

0x8679,	// (0x00080369) bg_button_pane_cp012_ParamLimits

0x8679,	// (0x00080369) bg_vkb2_func_pane_cp03_ParamLimits

0xaa56,	// (0x00082746) cell_vitu2_function_top_pane_g1_ParamLimits

0x8679,	// (0x00080369) bg_vkb2_func_pane_cp04_ParamLimits

0xb8e2,	// (0x000835d2) main_ncimui_button_group_pane_ParamLimits

0xb8e2,	// (0x000835d2) main_ncimui_button_group_pane

0xb948,	// (0x00083638) main_ncimui_pane_t3_ParamLimits

0xb948,	// (0x00083638) main_ncimui_pane_t3

0x33b9,	// (0x0007b0a9) phacti_button_group_pane

0x36b7,	// (0x0007b3a7) aid_size_list_single_double_ParamLimits

0xc763,	// (0x00084453) popup_ezdial_listscroll_window_ParamLimits

0xc784,	// (0x00084474) popup_number_entry_window_cp01_ParamLimits

0xc832,	// (0x00084522) phacti_button_pane_ParamLimits

0xc832,	// (0x00084522) phacti_button_pane

0xd871,	// (0x00085561) bg_button_pane_cp14

0x37c6,	// (0x0007b4b6) phacti_button_pane_t1

0xc843,	// (0x00084533) main_touch_calib_button_pane_ParamLimits

0xc843,	// (0x00084533) main_touch_calib_button_pane

0x08fb,	// (0x000785eb) bg_button_pane_cp18_ParamLimits

0x08fb,	// (0x000785eb) bg_button_pane_cp18

0x37d4,	// (0x0007b4c4) main_touch_calib_button_pane_t1_ParamLimits

0x37d4,	// (0x0007b4c4) main_touch_calib_button_pane_t1

0x37ea,	// (0x0007b4da) main_touch_calib_button_pane_t2_ParamLimits

0x37ea,	// (0x0007b4da) main_touch_calib_button_pane_t2

0x0001,

0xfd55,	// (0x00087a45) main_touch_calib_button_pane_t_ParamLimits

0xfd55,	// (0x00087a45) main_touch_calib_button_pane_t

0xd871,	// (0x00085561) cell_ncimui_button_pane

0xd871,	// (0x00085561) bg_button_pane_cp032

0x3808,	// (0x0007b4f8) cell_ncimui_button_pane_t1

0x9c26,	// (0x00081916) image3_infobar_pane_ParamLimits

0x9c26,	// (0x00081916) image3_infobar_pane

0xbd05,	// (0x000839f5) fs_bigclock_status_pane_ParamLimits

0xbd05,	// (0x000839f5) fs_bigclock_status_pane

0xbd12,	// (0x00083a02) main_fs_bigclock_clock_pane_ParamLimits

0xbd12,	// (0x00083a02) main_fs_bigclock_clock_pane

0xbd26,	// (0x00083a16) main_fs_bigclock_indi_pane_ParamLimits

0xbd26,	// (0x00083a16) main_fs_bigclock_indi_pane

0xbd4e,	// (0x00083a3e) main_fs_bigclock_swipe_pane_ParamLimits

0xbd4e,	// (0x00083a3e) main_fs_bigclock_swipe_pane

0xd871,	// (0x00085561) main_fs_clock_dumped_data

0x2d6a,	// (0x0007aa5a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2d6a,	// (0x0007aa5a) list_single_fs_bigclock_indicator_pane_g1

0x2d85,	// (0x0007aa75) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2d85,	// (0x0007aa75) list_single_fs_bigclock_indicator_pane_g2

0x2d9f,	// (0x0007aa8f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2d9f,	// (0x0007aa8f) list_single_fs_bigclock_indicator_pane_g3

0x2db9,	// (0x0007aaa9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2db9,	// (0x0007aaa9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf6,	// (0x000878e6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf6,	// (0x000878e6) list_single_fs_bigclock_indicator_pane_g

0x2de4,	// (0x0007aad4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2de4,	// (0x0007aad4) list_single_fs_bigclock_indicator_pane_t1

0x2e0c,	// (0x0007aafc) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2e0c,	// (0x0007aafc) list_single_fs_bigclock_indicator_pane_t2

0x2e34,	// (0x0007ab24) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2e34,	// (0x0007ab24) list_single_fs_bigclock_indicator_pane_t3

0x2e5c,	// (0x0007ab4c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2e5c,	// (0x0007ab4c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc01,	// (0x000878f1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc01,	// (0x000878f1) list_single_fs_bigclock_indicator_pane_t

0x3816,	// (0x0007b506) image3_infobar_fav_pane_ParamLimits

0x3816,	// (0x0007b506) image3_infobar_fav_pane

0x3826,	// (0x0007b516) image3_infobar_loc_pane_ParamLimits

0x3826,	// (0x0007b516) image3_infobar_loc_pane

0x383a,	// (0x0007b52a) image3_infobar_time_pane_ParamLimits

0x383a,	// (0x0007b52a) image3_infobar_time_pane

0x0b59,	// (0x00078849) image3_infobar_time_pane_g1

0x384a,	// (0x0007b53a) image3_infobar_time_pane_t1

0x0b59,	// (0x00078849) image3_infobar_loc_pane_g1

0x3858,	// (0x0007b548) image3_infobar_loc_pane_g2

0x0001,

0xfd5a,	// (0x00087a4a) image3_infobar_loc_pane_g

0x3860,	// (0x0007b550) image3_infobar_loc_pane_t1

0x0b59,	// (0x00078849) image3_infobar_fav_pane_g1

0x386e,	// (0x0007b55e) image3_infobar_fav_pane_g2

0x0001,

0xfd5f,	// (0x00087a4f) image3_infobar_fav_pane_g

0x3876,	// (0x0007b566) fs_bigclock_status_battery_pane

0x387f,	// (0x0007b56f) fs_bigclock_status_signal_pane

0x3888,	// (0x0007b578) fs_bigclock_status_title_pane

0x3891,	// (0x0007b581) fs_bigclock_status_signal_pane_g1

0x389a,	// (0x0007b58a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd64,	// (0x00087a54) fs_bigclock_status_signal_pane_g

0x38a2,	// (0x0007b592) fs_bigclock_status_battery_pane_g1

0x38ab,	// (0x0007b59b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd69,	// (0x00087a59) fs_bigclock_status_battery_pane_g

0x38b3,	// (0x0007b5a3) fs_bigclock_status_title_pane_t1

0xc853,	// (0x00084543) main_fs_bigclock_clock_pane_g1

0xc853,	// (0x00084543) main_fs_bigclock_clock_pane_g2

0xc860,	// (0x00084550) main_fs_bigclock_clock_pane_g3

0xc860,	// (0x00084550) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd6e,	// (0x00087a5e) main_fs_bigclock_clock_pane_g

0xc86c,	// (0x0008455c) main_fs_bigclock_clock_pane_t1

0xc87f,	// (0x0008456f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd77,	// (0x00087a67) main_fs_bigclock_clock_pane_t

0x38c1,	// (0x0007b5b1) list_single_fs_bigclock_indicator_pane_ParamLimits

0x38c1,	// (0x0007b5b1) list_single_fs_bigclock_indicator_pane

0x38d2,	// (0x0007b5c2) list_single_fs_bigclock_pane_ParamLimits

0x38d2,	// (0x0007b5c2) list_single_fs_bigclock_pane

0x38f8,	// (0x0007b5e8) main_fs_bigclock_indicator_pane_t1

0x3907,	// (0x0007b5f7) list_single_fs_bigclock_pane_g1

0x390f,	// (0x0007b5ff) list_single_fs_bigclock_pane_t1

0x0b59,	// (0x00078849) main_fs_bigclock_swipe_pane_g1

0x3952,	// (0x0007b642) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd88,	// (0x00087a78) main_fs_bigclock_swipe_pane_g

0x395a,	// (0x0007b64a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x395a,	// (0x0007b64a) main_fs_bigclock_swipe_pane_t1

0x7111,	// (0x0007ee01) call_type_pane_ParamLimits

0xd871,	// (0x00085561) main_btmg_pane

0x358d,	// (0x0007b27d) list_single_cale_mrui_row_pane_g2_ParamLimits

0x358d,	// (0x0007b27d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcfb,	// (0x000879eb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcfb,	// (0x000879eb) list_single_cale_mrui_row_pane_g

0x3712,	// (0x0007b402) list_recal_vselct_arw_lo_pane

0x371a,	// (0x0007b40a) list_recal_vselct_arw_up_pane

0x3722,	// (0x0007b412) list_recal_vselct_pane

0xc8d6,	// (0x000845c6) btmg_button_pane

0xc8e2,	// (0x000845d2) main_btmg_pane_g1

0xd871,	// (0x00085561) bg_button_pane_cp044

0x3977,	// (0x0007b667) btmg_button_pane_t1

0xe428,	// (0x00086118) aid_listscroll_gen

0xdf0b,	// (0x00085bfb) main_cntbar_detail_pane

0x328e,	// (0x0007af7e) list_cmail_folder_pane

0xf06f,	// (0x00086d5f) sp_fs_scroll_pane_cp03_ParamLimits

0xc8ea,	// (0x000845da) list_single_fs_dyc_pane_cp01_ParamLimits

0xc8ea,	// (0x000845da) list_single_fs_dyc_pane_cp01

0x3985,	// (0x0007b675) aid_size_cmail_indent

0x398e,	// (0x0007b67e) list_single_dyc_row_pane_cp01

0xc932,	// (0x00084622) cntbar_detail_list_pane_ParamLimits

0xc932,	// (0x00084622) cntbar_detail_list_pane

0xc96c,	// (0x0008465c) main_cntbar_detail_cont_pane_ParamLimits

0xc96c,	// (0x0008465c) main_cntbar_detail_cont_pane

0x7105,	// (0x0007edf5) scroll_pane_cp032_ParamLimits

0x7105,	// (0x0007edf5) scroll_pane_cp032

0xc978,	// (0x00084668) cntbar_detail_list_event_pane_ParamLimits

0xc978,	// (0x00084668) cntbar_detail_list_event_pane

0xc93e,	// (0x0008462e) cntbar_detail_list_shct_pane

0x0db8,	// (0x00078aa8) aid_list_gen

0x3997,	// (0x0007b687) aid_scroll

0x39a0,	// (0x0007b690) aid_size_touch_scroll_bar

0xc98c,	// (0x0008467c) aid_list_double

0x39a9,	// (0x0007b699) aid_list_single

0xc995,	// (0x00084685) aid_list_single_lg

0x39b2,	// (0x0007b6a2) aid_list_z_g_a_sm

0x4187,	// (0x0007be77) aid_list_z_g_d

0x39ba,	// (0x0007b6aa) aid_txt_z_prm

0xc99e,	// (0x0008468e) aid_txt_z_prm_cp01

0xc9ac,	// (0x0008469c) aid_txt_z_sec

0xc9ba,	// (0x000846aa) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc9ba,	// (0x000846aa) main_cntbar_detail_cont_pane_g1

0xc9c7,	// (0x000846b7) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc9c7,	// (0x000846b7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd8d,	// (0x00087a7d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd8d,	// (0x00087a7d) main_cntbar_detail_cont_pane_g

0x39c8,	// (0x0007b6b8) main_cntbar_detail_cont_pane_t1

0x39d6,	// (0x0007b6c6) main_cntbar_detail_cont_pane_t2

0x39e4,	// (0x0007b6d4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd92,	// (0x00087a82) main_cntbar_detail_cont_pane_t

0xc9d3,	// (0x000846c3) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc9d3,	// (0x000846c3) cell_cntbar_detail_list_shct_pane

0x39f2,	// (0x0007b6e2) cntbar_detail_list_shct_pane_g1

0x39fb,	// (0x0007b6eb) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd99,	// (0x00087a89) cntbar_detail_list_shct_pane_g

0xc9e7,	// (0x000846d7) cntbar_detail_list_event_pane_g1_ParamLimits

0xc9e7,	// (0x000846d7) cntbar_detail_list_event_pane_g1

0xc9f3,	// (0x000846e3) cntbar_detail_list_event_pane_g2_ParamLimits

0xc9f3,	// (0x000846e3) cntbar_detail_list_event_pane_g2

0x0005,

0xfd9e,	// (0x00087a8e) cntbar_detail_list_event_pane_g_ParamLimits

0xfd9e,	// (0x00087a8e) cntbar_detail_list_event_pane_g

0xca5f,	// (0x0008474f) cntbar_detail_list_event_pane_t1_ParamLimits

0xca5f,	// (0x0008474f) cntbar_detail_list_event_pane_t1

0xca74,	// (0x00084764) cntbar_detail_list_event_pane_t2_ParamLimits

0xca74,	// (0x00084764) cntbar_detail_list_event_pane_t2

0x0002,

0xfdab,	// (0x00087a9b) cntbar_detail_list_event_pane_t_ParamLimits

0xfdab,	// (0x00087a9b) cntbar_detail_list_event_pane_t

0x0b59,	// (0x00078849) cell_cntbar_detail_list_shct_pane_g1

0x15d0,	// (0x000792c0) navi_pane_mv_g3

0xdf0b,	// (0x00085bfb) main_cntbar_detail_pane_ParamLimits

0xd871,	// (0x00085561) main_notif_wgt_pane

0x98b0,	// (0x000815a0) aid_tch_main_mp4_pane_g4

0x9b0f,	// (0x000817ff) popup_slider_window_cp02

0x3708,	// (0x0007b3f8) list_recal_day_event_pane

0xc912,	// (0x00084602) cntbar_detail_btn_pane_ParamLimits

0xc912,	// (0x00084602) cntbar_detail_btn_pane

0xc922,	// (0x00084612) cntbar_detail_btn_pane_cp01_ParamLimits

0xc922,	// (0x00084612) cntbar_detail_btn_pane_cp01

0xc93e,	// (0x0008462e) cntbar_detail_list_shct_pane_ParamLimits

0xc94a,	// (0x0008463a) cntbar_detail_pane_g1_ParamLimits

0xc94a,	// (0x0008463a) cntbar_detail_pane_g1

0xc956,	// (0x00084646) cntbar_detail_pane_t1_ParamLimits

0xc956,	// (0x00084646) cntbar_detail_pane_t1

0xc9ff,	// (0x000846ef) cntbar_detail_list_event_pane_g3_ParamLimits

0xc9ff,	// (0x000846ef) cntbar_detail_list_event_pane_g3

0xca17,	// (0x00084707) cntbar_detail_list_event_pane_g4_ParamLimits

0xca17,	// (0x00084707) cntbar_detail_list_event_pane_g4

0xca2f,	// (0x0008471f) cntbar_detail_list_event_pane_g5_ParamLimits

0xca2f,	// (0x0008471f) cntbar_detail_list_event_pane_g5

0xca47,	// (0x00084737) cntbar_detail_list_event_pane_g6_ParamLimits

0xca47,	// (0x00084737) cntbar_detail_list_event_pane_g6

0xca89,	// (0x00084779) cntbar_detail_list_event_pane_t3_ParamLimits

0xca89,	// (0x00084779) cntbar_detail_list_event_pane_t3

0xca9b,	// (0x0008478b) popup_notif_wgt_window_ParamLimits

0xca9b,	// (0x0008478b) popup_notif_wgt_window

0xcaab,	// (0x0008479b) popup_submenu_window_cp01_ParamLimits

0xcaab,	// (0x0008479b) popup_submenu_window_cp01

0x0b19,	// (0x00078809) bg_popup_window_pane_cp10

0x3a04,	// (0x0007b6f4) listscroll_notif_wgt_pane

0x3a16,	// (0x0007b706) list_notif_wgt_window

0x3a1f,	// (0x0007b70f) scroll_pane_cp033

0xcabd,	// (0x000847ad) list_notif_wgt_row_pane_ParamLimits

0xcabd,	// (0x000847ad) list_notif_wgt_row_pane

0x3a28,	// (0x0007b718) aid_size_list_notif_wgt_del

0x3a35,	// (0x0007b725) list_notif_wgt_row_pane_g1

0x3a41,	// (0x0007b731) list_notif_wgt_row_pane_g2

0x3a50,	// (0x0007b740) list_notif_wgt_row_pane_g3

0x0002,

0xfdb2,	// (0x00087aa2) list_notif_wgt_row_pane_g

0x3a5d,	// (0x0007b74d) list_notif_wgt_row_pane_t1

0x3a73,	// (0x0007b763) list_notif_wgt_row_pane_t2

0x3a85,	// (0x0007b775) list_notif_wgt_row_pane_t3

0x0002,

0xfdb9,	// (0x00087aa9) list_notif_wgt_row_pane_t

0x21e2,	// (0x00079ed2) list_recal_day_event_pane_g1

0x3a97,	// (0x0007b787) list_recal_day_event_pane_t1

0xd871,	// (0x00085561) bg_button_pane_cp045

0x3aa6,	// (0x0007b796) cntbar_detail_btn_pane_t1

0xe43c,	// (0x0008612c) main_callh_pane_ParamLimits

0xe43c,	// (0x0008612c) main_callh_pane

0xd871,	// (0x00085561) main_coverflow0_pane

0xd871,	// (0x00085561) main_wgtman_pane

0xbd66,	// (0x00083a56) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xbd66,	// (0x00083a56) main_fs_bigclock_unlock_btn_pane

0xc314,	// (0x00084004) bg_button_pane_cp16

0xc324,	// (0x00084014) cell_tport_appsw_pane_g3

0xcacf,	// (0x000847bf) cf0_flow_pane_ParamLimits

0xcacf,	// (0x000847bf) cf0_flow_pane

0x3ab4,	// (0x0007b7a4) listscroll_cf0_pane

0x3abf,	// (0x0007b7af) main_cf0_pane_g1

0xcade,	// (0x000847ce) main_cf0_pane_t1_ParamLimits

0xcade,	// (0x000847ce) main_cf0_pane_t1

0xcaf2,	// (0x000847e2) main_cf0_pane_t2_ParamLimits

0xcaf2,	// (0x000847e2) main_cf0_pane_t2

0x0001,

0xfdc5,	// (0x00087ab5) main_cf0_pane_t_ParamLimits

0xfdc5,	// (0x00087ab5) main_cf0_pane_t

0x3ad1,	// (0x0007b7c1) scroll_pane_cp11

0xcb06,	// (0x000847f6) cf0_flow_pane_g1

0xcb0e,	// (0x000847fe) cf0_flow_pane_g2

0x0001,

0xfdca,	// (0x00087aba) cf0_flow_pane_g

0xcb16,	// (0x00084806) cf0_flow_pane_t1

0xd871,	// (0x00085561) main_call6_pane

0xd871,	// (0x00085561) main_calllock_pane

0xcb24,	// (0x00084814) call6_btn_grp_pane_ParamLimits

0xcb24,	// (0x00084814) call6_btn_grp_pane

0xcb33,	// (0x00084823) call6_pane_g1_ParamLimits

0xcb33,	// (0x00084823) call6_pane_g1

0xcb43,	// (0x00084833) popup_call6_1st_window_ParamLimits

0xcb43,	// (0x00084833) popup_call6_1st_window

0xcb51,	// (0x00084841) popup_call6_2nd_window_ParamLimits

0xcb51,	// (0x00084841) popup_call6_2nd_window

0xcb5f,	// (0x0008484f) cell_call6_btn_pane_ParamLimits

0xcb5f,	// (0x0008484f) cell_call6_btn_pane

0x0b19,	// (0x00078809) bg_popup_call2_in_pane_cp03

0x3adc,	// (0x0007b7cc) popup_call6_1st_window_g1

0x3ae4,	// (0x0007b7d4) popup_call6_1st_window_g2

0x3aec,	// (0x0007b7dc) popup_call6_1st_window_g3

0x0002,

0xfdcf,	// (0x00087abf) popup_call6_1st_window_g

0x3af4,	// (0x0007b7e4) popup_call6_1st_window_t1

0x3b03,	// (0x0007b7f3) popup_call6_1st_window_t2

0x3b11,	// (0x0007b801) popup_call6_1st_window_t3

0x0002,

0xfdd6,	// (0x00087ac6) popup_call6_1st_window_t

0x0b19,	// (0x00078809) bg_popup_call2_in_pane_cp04

0x3b1f,	// (0x0007b80f) popup_call6_2nd_window_g1

0x3b27,	// (0x0007b817) popup_call6_2nd_window_g2

0x3b2f,	// (0x0007b81f) popup_call6_2nd_window_g3

0x0002,

0xfddd,	// (0x00087acd) popup_call6_2nd_window_g

0x3b37,	// (0x0007b827) popup_call6_2nd_window_t1

0x5382,	// (0x0007d072) bg_button_pane_cp15

0xcb6e,	// (0x0008485e) cell_call6_btn_pane_g1

0xcb77,	// (0x00084867) cell_call6_btn_pane_t1

0xcb86,	// (0x00084876) listscroll_wgtman_pane_ParamLimits

0xcb86,	// (0x00084876) listscroll_wgtman_pane

0xcba2,	// (0x00084892) wgtman_btn_pane_ParamLimits

0xcba2,	// (0x00084892) wgtman_btn_pane

0x13d7,	// (0x000790c7) aid_scroll_copy1

0x3b4f,	// (0x0007b83f) list_wgtman_pane

0xcbd7,	// (0x000848c7) wgtman_btn_pane_g1_ParamLimits

0xcbd7,	// (0x000848c7) wgtman_btn_pane_g1

0xcbff,	// (0x000848ef) wgtman_btn_pane_t1_ParamLimits

0xcbff,	// (0x000848ef) wgtman_btn_pane_t1

0x3b59,	// (0x0007b849) wgtman_btn_pane_t2_ParamLimits

0x3b59,	// (0x0007b849) wgtman_btn_pane_t2

0x0001,

0xfde4,	// (0x00087ad4) wgtman_btn_pane_t_ParamLimits

0xfde4,	// (0x00087ad4) wgtman_btn_pane_t

0xcc36,	// (0x00084926) listrow_wgtman_pane_ParamLimits

0xcc36,	// (0x00084926) listrow_wgtman_pane

0xcc51,	// (0x00084941) listrow_wgtman_pane_g1

0xcc5e,	// (0x0008494e) listrow_wgtman_pane_g2

0x0001,

0xfde9,	// (0x00087ad9) listrow_wgtman_pane_g

0xcc7c,	// (0x0008496c) listrow_wgtman_pane_t1

0xcc94,	// (0x00084984) listrow_wgtman_pane_t2

0x0001,

0xfdee,	// (0x00087ade) listrow_wgtman_pane_t

0xccba,	// (0x000849aa) wait_bar_pane_cp09

0x3b70,	// (0x0007b860) main_calllock_btn_pane

0x3b7a,	// (0x0007b86a) main_calllock_pane_g1

0xd871,	// (0x00085561) bg_button_pane_cp17

0x3b46,	// (0x0007b836) main_calllock_btn_pane_g1

0x3b82,	// (0x0007b872) main_calllock_btn_pane_t1

0xd871,	// (0x00085561) main_dialer3_pane

0xd871,	// (0x00085561) main_fmrd2_pane

0x0b59,	// (0x00078849) main_fs_bigclock_unlock_btn_pane_g1

0xccd4,	// (0x000849c4) main_fs_bigclock_unlock_btn_pane_t1

0xcce2,	// (0x000849d2) area_fmrd2_info_pane_ParamLimits

0xcce2,	// (0x000849d2) area_fmrd2_info_pane

0xccf0,	// (0x000849e0) area_fmrd2_visual_pane_ParamLimits

0xccf0,	// (0x000849e0) area_fmrd2_visual_pane

0xccfe,	// (0x000849ee) fmrd2_indi_pane_ParamLimits

0xccfe,	// (0x000849ee) fmrd2_indi_pane

0xcd0b,	// (0x000849fb) area_fmrd2_visual_pane_g1

0xcd13,	// (0x00084a03) area_fmrd2_visual_pane_t1

0xcd23,	// (0x00084a13) area_fmrd2_visual_pane_t2

0xcd33,	// (0x00084a23) area_fmrd2_visual_pane_t3

0x0002,

0xfdf8,	// (0x00087ae8) area_fmrd2_visual_pane_t

0xcd43,	// (0x00084a33) area_fmrd2_info_pane_g1

0xcd4b,	// (0x00084a3b) area_fmrd2_info_pane_t1

0xcd5b,	// (0x00084a4b) area_fmrd2_info_pane_t2

0xcd6b,	// (0x00084a5b) area_fmrd2_info_pane_t3

0xcd7b,	// (0x00084a6b) area_fmrd2_info_pane_t4

0x0003,

0xfdff,	// (0x00087aef) area_fmrd2_info_pane_t

0xcd89,	// (0x00084a79) fmrd2_indi_pane_t1

0xcd99,	// (0x00084a89) fmrd2_indi_pane_t2

0xcda9,	// (0x00084a99) fmrd2_indi_pane_t3

0x0002,

0xfe08,	// (0x00087af8) fmrd2_indi_pane_t

0x2dc8,	// (0x0007aab8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2dc8,	// (0x0007aab8) list_single_fs_bigclock_indicator_pane_g5

0x2e79,	// (0x0007ab69) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2e79,	// (0x0007ab69) list_single_fs_bigclock_indicator_pane_t5

0xc4bd,	// (0x000841ad) aid_cell_bcale_month_pane_ParamLimits

0xc4bd,	// (0x000841ad) aid_cell_bcale_month_pane

0xc4db,	// (0x000841cb) bcale_month_pane_ParamLimits

0xc4db,	// (0x000841cb) bcale_month_pane

0xc4f9,	// (0x000841e9) bcale_preview_pane_ParamLimits

0xc4f9,	// (0x000841e9) bcale_preview_pane

0x390f,	// (0x0007b5ff) list_single_fs_bigclock_pane_t1_ParamLimits

0x392e,	// (0x0007b61e) list_single_fs_bigclock_pane_t2_ParamLimits

0x392e,	// (0x0007b61e) list_single_fs_bigclock_pane_t2

0x0001,

0xfd83,	// (0x00087a73) list_single_fs_bigclock_pane_t_ParamLimits

0xfd83,	// (0x00087a73) list_single_fs_bigclock_pane_t

0xcccc,	// (0x000849bc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdf3,	// (0x00087ae3) main_fs_bigclock_unlock_btn_pane_g

0xcdb7,	// (0x00084aa7) aid_dia3_key_size_ParamLimits

0xcdb7,	// (0x00084aa7) aid_dia3_key_size

0xcdc3,	// (0x00084ab3) aid_dia3_listrow_size_ParamLimits

0xcdc3,	// (0x00084ab3) aid_dia3_listrow_size

0xcdd3,	// (0x00084ac3) dia3_keypad_fun_pane_ParamLimits

0xcdd3,	// (0x00084ac3) dia3_keypad_fun_pane

0xcde5,	// (0x00084ad5) dia3_keypad_num_pane_ParamLimits

0xcde5,	// (0x00084ad5) dia3_keypad_num_pane

0xcdf7,	// (0x00084ae7) dia3_listscroll_pane_ParamLimits

0xcdf7,	// (0x00084ae7) dia3_listscroll_pane

0xce05,	// (0x00084af5) dia3_numentry_pane_ParamLimits

0xce05,	// (0x00084af5) dia3_numentry_pane

0x3b91,	// (0x0007b881) dia3_list_pane

0x3b9c,	// (0x0007b88c) scroll_pane_cp12

0xd871,	// (0x00085561) bg_dia3_numentry_pane

0xce13,	// (0x00084b03) dia3_numentry_pane_t1

0xce22,	// (0x00084b12) cell_dia3_key_num_pane

0xce2a,	// (0x00084b1a) cell_dia3_key0_fun_pane_ParamLimits

0xce2a,	// (0x00084b1a) cell_dia3_key0_fun_pane

0xce37,	// (0x00084b27) cell_dia3_key1_fun_pane_ParamLimits

0xce37,	// (0x00084b27) cell_dia3_key1_fun_pane

0xce44,	// (0x00084b34) dia3_listrow_pane

0x2b1b,	// (0x0007a80b) bg_dia3_numentry_pane_g1

0xd871,	// (0x00085561) bg_button_pane_cp21

0x3ba7,	// (0x0007b897) cell_dia3_key_num_pane_t1

0x3bb5,	// (0x0007b8a5) cell_dia3_key_num_pane_t2

0x3bc4,	// (0x0007b8b4) cell_dia3_key_num_pane_t3

0x3bd3,	// (0x0007b8c3) cell_dia3_key_num_pane_t4

0x0003,

0xfe0f,	// (0x00087aff) cell_dia3_key_num_pane_t

0xd871,	// (0x00085561) bg_button_pane_cp19

0xce51,	// (0x00084b41) cell_dia3_key0_fun_pane_g1

0xd871,	// (0x00085561) bg_button_pane_cp20

0xce59,	// (0x00084b49) cell_dia3_key1_fun_pane_g1

0xce61,	// (0x00084b51) area_left_week_number_pane

0xce74,	// (0x00084b64) area_top_day_name_pane

0xce82,	// (0x00084b72) frame_month_view_pane

0x3be2,	// (0x0007b8d2) grid_month_view_pane

0xce97,	// (0x00084b87) cell_top_day_name_pane_ParamLimits

0xce97,	// (0x00084b87) cell_top_day_name_pane

0xceb1,	// (0x00084ba1) cell_area_left_week_number_pane_ParamLimits

0xceb1,	// (0x00084ba1) cell_area_left_week_number_pane

0xced4,	// (0x00084bc4) cell_month_view_pane_ParamLimits

0xced4,	// (0x00084bc4) cell_month_view_pane

0x3bf0,	// (0x0007b8e0) frm_month_g1

0xcf00,	// (0x00084bf0) frm_month_g2

0xcf11,	// (0x00084c01) frm_month_g3

0xcf22,	// (0x00084c12) frm_month_g4

0xcf33,	// (0x00084c23) frm_month_g5

0xcf46,	// (0x00084c36) frm_month_g6

0xcf59,	// (0x00084c49) frm_month_g7

0x3bfd,	// (0x0007b8ed) frm_month_g8

0xcf6c,	// (0x00084c5c) frm_month_g9

0xcf79,	// (0x00084c69) frm_month_g10

0xcf86,	// (0x00084c76) frm_month_g11

0xcf93,	// (0x00084c83) frm_month_g12

0xcfa0,	// (0x00084c90) frm_month_g13

0xcfad,	// (0x00084c9d) frm_month_g14

0xcfbc,	// (0x00084cac) frm_month_g15

0xcfcb,	// (0x00084cbb) frm_month_g16

0x000f,

0xfe18,	// (0x00087b08) frm_month_g

0x3c0a,	// (0x0007b8fa) cell_top_day_name_pane_t1

0xcfda,	// (0x00084cca) cell_area_left_week_number_pane_g1

0xcfe9,	// (0x00084cd9) cell_area_left_week_number_pane_t1

0x0867,	// (0x00078557) cell_month_view_pane_g1

0xcfff,	// (0x00084cef) cell_month_view_pane_t1

0xd871,	// (0x00085561) main_fps_pane

0x3096,	// (0x0007ad86) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3096,	// (0x0007ad86) cmail_ddmenu_btn02_pane_cp1

0x30b2,	// (0x0007ada2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x30b2,	// (0x0007ada2) cmail_ddmenu_btn02_pane_cp2

0xc7ba,	// (0x000844aa) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc7ba,	// (0x000844aa) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd36,	// (0x00087a26) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd36,	// (0x00087a26) cmail_ddmenu_btn02_pane_g

0xc7d8,	// (0x000844c8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc7d8,	// (0x000844c8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd3b,	// (0x00087a2b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd3b,	// (0x00087a2b) cmail_ddmenu_btn02_pane_t

0xd015,	// (0x00084d05) fps_text_pane_ParamLimits

0xd015,	// (0x00084d05) fps_text_pane

0xd022,	// (0x00084d12) main_fps_pane_g1_ParamLimits

0xd022,	// (0x00084d12) main_fps_pane_g1

0xd030,	// (0x00084d20) wait_bar_pane_cp010_ParamLimits

0xd030,	// (0x00084d20) wait_bar_pane_cp010

0xd03c,	// (0x00084d2c) fps_text_pane_t1_ParamLimits

0xd03c,	// (0x00084d2c) fps_text_pane_t1

0x9fc8,	// (0x00081cb8) cam4_image_uncrop_pane_g1

0x9fd1,	// (0x00081cc1) cam4_image_uncrop_pane_g2

0x9fda,	// (0x00081cca) cam4_image_uncrop_pane_g3

0x9fe3,	// (0x00081cd3) cam4_image_uncrop_pane_g4

0x0003,

0xf87a,	// (0x0008756a) cam4_image_uncrop_pane_g

0xce44,	// (0x00084b34) dia3_listrow_pane_ParamLimits

0xd871,	// (0x00085561) main_phob2_pane

0xc2f6,	// (0x00083fe6) cell_tport_appsw_pane_cp02_ParamLimits

0xc2f6,	// (0x00083fe6) cell_tport_appsw_pane_cp02

0xc305,	// (0x00083ff5) cell_tport_appsw_pane_cp03_ParamLimits

0xc305,	// (0x00083ff5) cell_tport_appsw_pane_cp03

0xd871,	// (0x00085561) phob2_contact_card_pane

0xd871,	// (0x00085561) phob2_listscroll_pane

0x3c1d,	// (0x0007b90d) phob2_list_pane

0x3c25,	// (0x0007b915) scroll_pane_cp034

0xd055,	// (0x00084d45) phob2_cc_data_pane_ParamLimits

0xd055,	// (0x00084d45) phob2_cc_data_pane

0xd06f,	// (0x00084d5f) phob2_cc_listscroll_pane_ParamLimits

0xd06f,	// (0x00084d5f) phob2_cc_listscroll_pane

0xcc36,	// (0x00084926) list_double_large_graphic_phob2_pane_ParamLimits

0xcc36,	// (0x00084926) list_double_large_graphic_phob2_pane

0xd089,	// (0x00084d79) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd089,	// (0x00084d79) list_double_large_graphic_phob2_pane_g1

0xd096,	// (0x00084d86) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd096,	// (0x00084d86) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe39,	// (0x00087b29) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe39,	// (0x00087b29) list_double_large_graphic_phob2_pane_g

0xd0bc,	// (0x00084dac) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd0bc,	// (0x00084dac) list_double_large_graphic_phob2_pane_t1

0xd0d1,	// (0x00084dc1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd0d1,	// (0x00084dc1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe42,	// (0x00087b32) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe42,	// (0x00087b32) list_double_large_graphic_phob2_pane_t

0xd871,	// (0x00085561) list_highlight_pane_cp024

0x3c2d,	// (0x0007b91d) phob2_cc_button_pane

0xd0e6,	// (0x00084dd6) phob2_cc_data_pane_g1_ParamLimits

0xd0e6,	// (0x00084dd6) phob2_cc_data_pane_g1

0xd0f5,	// (0x00084de5) phob2_cc_data_pane_g2_ParamLimits

0xd0f5,	// (0x00084de5) phob2_cc_data_pane_g2

0x0001,

0xfe47,	// (0x00087b37) phob2_cc_data_pane_g_ParamLimits

0xfe47,	// (0x00087b37) phob2_cc_data_pane_g

0xd104,	// (0x00084df4) phob2_cc_data_pane_t1_ParamLimits

0xd104,	// (0x00084df4) phob2_cc_data_pane_t1

0xd119,	// (0x00084e09) phob2_cc_data_pane_t2_ParamLimits

0xd119,	// (0x00084e09) phob2_cc_data_pane_t2

0xd12e,	// (0x00084e1e) phob2_cc_data_pane_t3_ParamLimits

0xd12e,	// (0x00084e1e) phob2_cc_data_pane_t3

0x0002,

0xfe4c,	// (0x00087b3c) phob2_cc_data_pane_t_ParamLimits

0xfe4c,	// (0x00087b3c) phob2_cc_data_pane_t

0xd143,	// (0x00084e33) phob2_cc_list_pane_ParamLimits

0xd143,	// (0x00084e33) phob2_cc_list_pane

0x228b,	// (0x00079f7b) scroll_pane_cp035_ParamLimits

0x228b,	// (0x00079f7b) scroll_pane_cp035

0xdf0b,	// (0x00085bfb) bg_button_pane_cp033

0xd14f,	// (0x00084e3f) phob2_cc_button_pane_g1

0xd15b,	// (0x00084e4b) phob2_cc_button_pane_t1

0xd170,	// (0x00084e60) phob2_cc_button_pane_t2

0x0001,

0xfe53,	// (0x00087b43) phob2_cc_button_pane_t

0xd182,	// (0x00084e72) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd182,	// (0x00084e72) list_double_large_graphic_phob2_cc_pane

0xd1f0,	// (0x00084ee0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd1f0,	// (0x00084ee0) list_double_large_graphic_phob2_cc_pane_g1

0xd201,	// (0x00084ef1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd201,	// (0x00084ef1) list_double_large_graphic_phob2_cc_pane_g2

0xd20d,	// (0x00084efd) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd20d,	// (0x00084efd) list_double_large_graphic_phob2_cc_pane_g3

0xd219,	// (0x00084f09) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd219,	// (0x00084f09) list_double_large_graphic_phob2_cc_pane_g4

0xd225,	// (0x00084f15) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd225,	// (0x00084f15) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe58,	// (0x00087b48) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe58,	// (0x00087b48) list_double_large_graphic_phob2_cc_pane_g

0xd231,	// (0x00084f21) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd231,	// (0x00084f21) list_double_large_graphic_phob2_cc_pane_t1

0xd25a,	// (0x00084f4a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd25a,	// (0x00084f4a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe63,	// (0x00087b53) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe63,	// (0x00087b53) list_double_large_graphic_phob2_cc_pane_t

0xd283,	// (0x00084f73) list_highlight_pane_cp025_ParamLimits

0xd283,	// (0x00084f73) list_highlight_pane_cp025

0xdf0b,	// (0x00085bfb) bg_button_pane_cp033_ParamLimits

0xd14f,	// (0x00084e3f) phob2_cc_button_pane_g1_ParamLimits

0xd15b,	// (0x00084e4b) phob2_cc_button_pane_t1_ParamLimits

0xd170,	// (0x00084e60) phob2_cc_button_pane_t2_ParamLimits

0xfe53,	// (0x00087b43) phob2_cc_button_pane_t_ParamLimits

0x5376,	// (0x0007d066) popup_wgtman_window

0x2087,	// (0x00079d77) scroll_pane_cp038

0xcbbf,	// (0x000848af) wgtman_btn_pane_cp_01_ParamLimits

0xcbbf,	// (0x000848af) wgtman_btn_pane_cp_01

0xd291,	// (0x00084f81) wgtman_content_pane

0xd29a,	// (0x00084f8a) wgtman_heading_pane

0xd871,	// (0x00085561) bg_heading_pane_cp02

0xd2a3,	// (0x00084f93) wgtman_heading_pane_g1

0xd2ab,	// (0x00084f9b) wgtman_heading_pane_t1

0xd2b9,	// (0x00084fa9) scroll_pane_cp036

0xd2c1,	// (0x00084fb1) wgtman_list_pane

0xd2c9,	// (0x00084fb9) wgtman_list_pane_t1_ParamLimits

0xd2c9,	// (0x00084fb9) wgtman_list_pane_t1

0x9f27,	// (0x00081c17) cam4_grid_pane

0xac0a,	// (0x000828fa) bg_button_pane_cp015_ParamLimits

0xac1c,	// (0x0008290c) bg_button_pane_cp016_ParamLimits

0xac2f,	// (0x0008291f) bg_button_pane_cp017_ParamLimits

0xac85,	// (0x00082975) popup_vitu2_query_window_g3_ParamLimits

0xac85,	// (0x00082975) popup_vitu2_query_window_g3

0xad40,	// (0x00082a30) popup_vitu2_query_window_t6_ParamLimits

0xad40,	// (0x00082a30) popup_vitu2_query_window_t6

0xad6b,	// (0x00082a5b) popup_vitu2_query_window_t7_ParamLimits

0xad6b,	// (0x00082a5b) popup_vitu2_query_window_t7

0xd2e3,	// (0x00084fd3) cam4_grid_pane_g1

0xd2ec,	// (0x00084fdc) cam4_grid_pane_g2

0xd2f5,	// (0x00084fe5) cam4_grid_pane_g3

0xd2fe,	// (0x00084fee) cam4_grid_pane_g4

0x0003,

0xfe68,	// (0x00087b58) cam4_grid_pane_g

0x5ec8,	// (0x0007dbb8) aid_placing_vt_slider_lsc_ParamLimits

0x6214,	// (0x0007df04) vidtel_button_pane_ParamLimits

0x6214,	// (0x0007df04) vidtel_button_pane

0xd871,	// (0x00085561) bg_button_pane_cp034

0xd309,	// (0x00084ff9) vidtel_button_pane_g1

0xd311,	// (0x00085001) vidtel_button_pane_t1

0x21d2,	// (0x00079ec2) aid_size_vtel_slider_touch

0x228b,	// (0x00079f7b) scroll_pane_cp039

0xbaa3,	// (0x00083793) ncim_query_button_pane_cp01_ParamLimits

0xbac2,	// (0x000837b2) ncimui_query_pane_g1_ParamLimits

0xdf0b,	// (0x00085bfb) input_focus_pane_cp012_ParamLimits

0x2b59,	// (0x0007a849) ncim_query_entry_pane_t1_ParamLimits

0x228b,	// (0x00079f7b) scroll_pane_cp039_ParamLimits

0x14bb,	// (0x000791ab) navi_pane_bcale_mc_g1

0x14c3,	// (0x000791b3) navi_pane_bcale_mc_t1

0x30e6,	// (0x0007add6) main_sp_fs_email_pane_g1

0x30f2,	// (0x0007ade2) main_sp_fs_email_pane_g2

0x0001,

0xfc6b,	// (0x0008795b) main_sp_fs_email_pane_g

0x3599,	// (0x0007b289) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3599,	// (0x0007b289) list_single_cale_mrui_row_pane_g3

0xc7f8,	// (0x000844e8) list_single_recal_day_pane_g5_event_pane

0x3779,	// (0x0007b469) list_single_recal_day_pane_g7

0xd327,	// (0x00085017) list_recal_day_event_pane_cp01

0xd330,	// (0x00085020) list_recal_vselct_arw_lo_pane_cp01

0xd338,	// (0x00085028) list_recal_vselct_arw_up_pane_cp01

0xd340,	// (0x00085030) list_recal_vselct_pane_cp01

0x21e2,	// (0x00079ed2) list_recal_day_event_pane_cp01_g1

0x3c35,	// (0x0007b925) list_recal_day_event_pane_cp01_t1

0x3781,	// (0x0007b471) list_single_recal_day_pane_t1_ParamLimits

0x3793,	// (0x0007b483) list_single_recal_day_pane_t2_ParamLimits

0xfd4b,	// (0x00087a3b) list_single_recal_day_pane_t_ParamLimits

0xdee9,	// (0x00085bd9) bg_notes_pane_ParamLimits

0x08bf,	// (0x000785af) list_notes_pane_ParamLimits

0x5582,	// (0x0007d272) scroll_pane_cp06_ParamLimits

0x08fb,	// (0x000785eb) main_notes_pane_ParamLimits

0xdf0b,	// (0x00085bfb) main_welc_pane

0xd361,	// (0x00085051) main_welc_body_pane_ParamLimits

0xd361,	// (0x00085051) main_welc_body_pane

0xd37b,	// (0x0008506b) main_welc_opti_pane_ParamLimits

0xd37b,	// (0x0008506b) main_welc_opti_pane

0xd3d6,	// (0x000850c6) main_welc_pane_t1_ParamLimits

0xd3d6,	// (0x000850c6) main_welc_pane_t1

0xd4ec,	// (0x000851dc) main_welc_body_row_pane_ParamLimits

0xd4ec,	// (0x000851dc) main_welc_body_row_pane

0xdf64,	// (0x00085c54) main_welc_opti_row_pane_ParamLimits

0xdf64,	// (0x00085c54) main_welc_opti_row_pane

0xd511,	// (0x00085201) main_welc_opti_row_pane_g1

0xd519,	// (0x00085209) main_welc_opti_row_pane_t1

0xd528,	// (0x00085218) main_welc_body_row_pane_t1

0x3a0e,	// (0x0007b6fe) popup_notif_wgt_heading_pane

0x3a28,	// (0x0007b718) aid_size_list_notif_wgt_del_ParamLimits

0x3a35,	// (0x0007b725) list_notif_wgt_row_pane_g1_ParamLimits

0x3a41,	// (0x0007b731) list_notif_wgt_row_pane_g2_ParamLimits

0x3a50,	// (0x0007b740) list_notif_wgt_row_pane_g3_ParamLimits

0xfdb2,	// (0x00087aa2) list_notif_wgt_row_pane_g_ParamLimits

0x3a5d,	// (0x0007b74d) list_notif_wgt_row_pane_t1_ParamLimits

0x3a73,	// (0x0007b763) list_notif_wgt_row_pane_t2_ParamLimits

0x3a85,	// (0x0007b775) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb9,	// (0x00087aa9) list_notif_wgt_row_pane_t_ParamLimits

0xcc51,	// (0x00084941) listrow_wgtman_pane_g1_ParamLimits

0xcc5e,	// (0x0008494e) listrow_wgtman_pane_g2_ParamLimits

0xfde9,	// (0x00087ad9) listrow_wgtman_pane_g_ParamLimits

0xcc7c,	// (0x0008496c) listrow_wgtman_pane_t1_ParamLimits

0xcc94,	// (0x00084984) listrow_wgtman_pane_t2_ParamLimits

0xfdee,	// (0x00087ade) listrow_wgtman_pane_t_ParamLimits

0xccba,	// (0x000849aa) wait_bar_pane_cp09_ParamLimits

0xd871,	// (0x00085561) bg_popup_heading_pane_cp02

0xd537,	// (0x00085227) popup_notif_wgt_heading_pane_g1

0xd53f,	// (0x0008522f) popup_notif_wgt_heading_pane_t1

0xd871,	// (0x00085561) main_vids_pane

0xd871,	// (0x00085561) vids_listscroll_pane

0xd54d,	// (0x0008523d) scroll_pane_cp040

0xd871,	// (0x00085561) vids_list_pane

0xd558,	// (0x00085248) vids_list_double_pane_ParamLimits

0xd558,	// (0x00085248) vids_list_double_pane

0xd56f,	// (0x0008525f) vids_list_double_pane_g1

0xd578,	// (0x00085268) vids_list_double_pane_t1

0xd588,	// (0x00085278) vids_list_double_pane_t2

0x0001,

0xfe87,	// (0x00087b77) vids_list_double_pane_t

0x8679,	// (0x00080369) main_ncimui_pane_ParamLimits

0xb8fa,	// (0x000835ea) main_ncimui_pane_g1_ParamLimits

0xb906,	// (0x000835f6) main_ncimui_pane_g2_ParamLimits

0xb906,	// (0x000835f6) main_ncimui_pane_g2

0x0001,

0xfb6c,	// (0x0008785c) main_ncimui_pane_g_ParamLimits

0xfb6c,	// (0x0008785c) main_ncimui_pane_g

0xd394,	// (0x00085084) main_welc_pane_g1_ParamLimits

0xd394,	// (0x00085084) main_welc_pane_g1

0xd3a0,	// (0x00085090) main_welc_pane_g2_ParamLimits

0xd3a0,	// (0x00085090) main_welc_pane_g2

0x0003,

0xfe71,	// (0x00087b61) main_welc_pane_g_ParamLimits

0xfe71,	// (0x00087b61) main_welc_pane_g

0xdee9,	// (0x00085bd9) listscroll_mce_pane_ParamLimits

0x1610,	// (0x00079300) wait_bar_pane_cp10

0xe430,	// (0x00086120) main_cale_day_pane_ParamLimits

0xe430,	// (0x00086120) main_cale_week_pane_ParamLimits

0xdee9,	// (0x00085bd9) main_messa_pane_ParamLimits

0x936e,	// (0x0008105e) main_clock2_btn_pane_ParamLimits

0x936e,	// (0x0008105e) main_clock2_btn_pane

0xec33,	// (0x00086923) main_clock2_btn_pane_cp01_ParamLimits

0xec33,	// (0x00086923) main_clock2_btn_pane_cp01

0x3525,	// (0x0007b215) list_cale_mrui_pane_ParamLimits

0x3ac9,	// (0x0007b7b9) main_cf0_pane_g2

0x0001,

0xfdc0,	// (0x00087ab0) main_cf0_pane_g

0xce61,	// (0x00084b51) area_left_week_number_pane_ParamLimits

0xce74,	// (0x00084b64) area_top_day_name_pane_ParamLimits

0xce82,	// (0x00084b72) frame_month_view_pane_ParamLimits

0x3be2,	// (0x0007b8d2) grid_month_view_pane_ParamLimits

0x3bf0,	// (0x0007b8e0) frm_month_g1_ParamLimits

0xcf00,	// (0x00084bf0) frm_month_g2_ParamLimits

0xcf11,	// (0x00084c01) frm_month_g3_ParamLimits

0xcf22,	// (0x00084c12) frm_month_g4_ParamLimits

0xcf33,	// (0x00084c23) frm_month_g5_ParamLimits

0xcf46,	// (0x00084c36) frm_month_g6_ParamLimits

0xcf59,	// (0x00084c49) frm_month_g7_ParamLimits

0x3bfd,	// (0x0007b8ed) frm_month_g8_ParamLimits

0xcf6c,	// (0x00084c5c) frm_month_g9_ParamLimits

0xcf79,	// (0x00084c69) frm_month_g10_ParamLimits

0xcf86,	// (0x00084c76) frm_month_g11_ParamLimits

0xcf93,	// (0x00084c83) frm_month_g12_ParamLimits

0xcfa0,	// (0x00084c90) frm_month_g13_ParamLimits

0xcfad,	// (0x00084c9d) frm_month_g14_ParamLimits

0xcfbc,	// (0x00084cac) frm_month_g15_ParamLimits

0xcfcb,	// (0x00084cbb) frm_month_g16_ParamLimits

0xfe18,	// (0x00087b08) frm_month_g_ParamLimits

0x3c0a,	// (0x0007b8fa) cell_top_day_name_pane_t1_ParamLimits

0xcfda,	// (0x00084cca) cell_area_left_week_number_pane_g1_ParamLimits

0xcfe9,	// (0x00084cd9) cell_area_left_week_number_pane_t1_ParamLimits

0x0867,	// (0x00078557) cell_month_view_pane_g1_ParamLimits

0xcfff,	// (0x00084cef) cell_month_view_pane_t1_ParamLimits

0xdee1,	// (0x00085bd1) main_clock2_btn_pane_g1

0xd596,	// (0x00085286) main_clock2_btn_pane_t1

0xdf0b,	// (0x00085bfb) listscroll_cmail_pane_ParamLimits

0x30e6,	// (0x0007add6) main_sp_fs_email_pane_g1_ParamLimits

0x30f2,	// (0x0007ade2) main_sp_fs_email_pane_g2_ParamLimits

0xfc6b,	// (0x0008795b) main_sp_fs_email_pane_g_ParamLimits

0x36e9,	// (0x0007b3d9) list_recal_day_pane_ParamLimits

0x36fa,	// (0x0007b3ea) mian_recal_day_pane_t1

0xc1e4,	// (0x00083ed4) list_single_dyc_row_text_pane_t4_ParamLimits

0xc1e4,	// (0x00083ed4) list_single_dyc_row_text_pane_t4

0xc21b,	// (0x00083f0b) list_single_dyc_row_text_pane_t5_ParamLimits

0xc21b,	// (0x00083f0b) list_single_dyc_row_text_pane_t5

0x31be,	// (0x0007aeae) list_single_dyc_row_text_pane_t6_ParamLimits

0x31be,	// (0x0007aeae) list_single_dyc_row_text_pane_t6

0x0f42,	// (0x00078c32) aid_mgn_list_cale_time_pane

0x8679,	// (0x00080369) main_gallery2_pane_ParamLimits

0xec49,	// (0x00086939) main_clock2_pane_cp01_t1

0xec59,	// (0x00086949) main_clock2_pane_cp01_t3

0x0001,

0xf751,	// (0x00087441) main_clock2_pane_cp01_t

0x59d7,	// (0x0007d6c7) cale_week_scroll_pane_g16_ParamLimits

0x59d7,	// (0x0007d6c7) cale_week_scroll_pane_g16

0x0b19,	// (0x00078809) vorec_slider_pane

0xd311,	// (0x00085001) vidtel_button_pane_t1_ParamLimits

0xc853,	// (0x00084543) main_fs_bigclock_clock_pane_g1_ParamLimits

0xc853,	// (0x00084543) main_fs_bigclock_clock_pane_g2_ParamLimits

0xc860,	// (0x00084550) main_fs_bigclock_clock_pane_g3_ParamLimits

0xc860,	// (0x00084550) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd6e,	// (0x00087a5e) main_fs_bigclock_clock_pane_g_ParamLimits

0xc86c,	// (0x0008455c) main_fs_bigclock_clock_pane_t1_ParamLimits

0xc87f,	// (0x0008456f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd77,	// (0x00087a67) main_fs_bigclock_clock_pane_t_ParamLimits

0x8d0b,	// (0x000809fb) main_mup3_lyrics_pane_ParamLimits

0x8d0b,	// (0x000809fb) main_mup3_lyrics_pane

0xd5ca,	// (0x000852ba) main_mup3_lyrics_pane_t1_ParamLimits

0xd5ca,	// (0x000852ba) main_mup3_lyrics_pane_t1

0x989a,	// (0x0008158a) aid_main_mp4_pane_t1_area

0x98a4,	// (0x00081594) aid_main_mp4_pane_t2_area

0x99a3,	// (0x00081693) main_mp4_pane_g7_ParamLimits

0x99a3,	// (0x00081693) main_mp4_pane_g7

0x99af,	// (0x0008169f) main_mp4_pane_g8_ParamLimits

0x99af,	// (0x0008169f) main_mp4_pane_g8

0x9dcf,	// (0x00081abf) aid_call6_pane_g1_size

0xd1c4,	// (0x00084eb4) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd1c4,	// (0x00084eb4) list_double_large_graphic_phob2_other_pane

0x0efa,	// (0x00078bea) list_double_large_graphic_phob2_other_pane_g1

0xd871,	// (0x00085561) list_highlight_pane_cp026

0xdf0b,	// (0x00085bfb) main_welc_pane_ParamLimits

0xc083,	// (0x00083d73) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc083,	// (0x00083d73) main_sp_fs_ctrlbar_pane_g3

0xc09b,	// (0x00083d8b) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc09b,	// (0x00083d8b) main_sp_fs_ctrlbar_pane_g4

0xc0cd,	// (0x00083dbd) toolbar2_fixed_button_pane_cp01

0xc0d8,	// (0x00083dc8) toolbar2_fixed_button_pane_cp02

0xc0e3,	// (0x00083dd3) toolbar2_fixed_button_pane_cp03

0xd34a,	// (0x0008503a) list_welc_entry_pane_ParamLimits

0xd34a,	// (0x0008503a) list_welc_entry_pane

0xd3ae,	// (0x0008509e) main_welc_pane_g3_ParamLimits

0xd3ae,	// (0x0008509e) main_welc_pane_g3

0xd3f0,	// (0x000850e0) main_welc_pane_t2_ParamLimits

0xd3f0,	// (0x000850e0) main_welc_pane_t2

0xd404,	// (0x000850f4) main_welc_pane_t3_ParamLimits

0xd404,	// (0x000850f4) main_welc_pane_t3

0x0005,

0xfe7a,	// (0x00087b6a) main_welc_pane_t_ParamLimits

0xfe7a,	// (0x00087b6a) main_welc_pane_t

0xd48e,	// (0x0008517e) welc_button_pane_ParamLimits

0xd48e,	// (0x0008517e) welc_button_pane

0xd4de,	// (0x000851ce) welc_service_logo_pane_ParamLimits

0xd4de,	// (0x000851ce) welc_service_logo_pane

0xd5fc,	// (0x000852ec) list_single_welc_entry_pane_ParamLimits

0xd5fc,	// (0x000852ec) list_single_welc_entry_pane

0xd60d,	// (0x000852fd) list_single_welc_entry_pane_g1

0xd615,	// (0x00085305) list_single_welc_entry_pane_t1

0xd623,	// (0x00085313) list_single_welc_entry_pane_t2

0x0001,

0xfe8c,	// (0x00087b7c) list_single_welc_entry_pane_t

0xd871,	// (0x00085561) bg_button_pane_cp035

0xd631,	// (0x00085321) welc_button_pane_t1

0xd63f,	// (0x0008532f) welc_service_logo_pane_g1

0xd648,	// (0x00085338) welc_service_logo_pane_g2

0x0001,

0xfe91,	// (0x00087b81) welc_service_logo_pane_g

0x5382,	// (0x0007d072) main_int_radio_pane

0xe883,	// (0x00086573) list_single_fs_dyc_pane_g1

0xd0a2,	// (0x00084d92) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xd0a2,	// (0x00084d92) list_double_large_graphic_phob2_pane_g3

0xd0ae,	// (0x00084d9e) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd0ae,	// (0x00084d9e) list_double_large_graphic_phob2_pane_g4

0xd651,	// (0x00085341) main_int_radio1_pane_ParamLimits

0xd651,	// (0x00085341) main_int_radio1_pane

0xd663,	// (0x00085353) find_pane_cp02

0xd66c,	// (0x0008535c) input_focus_pane_cp12_ParamLimits

0xd66c,	// (0x0008535c) input_focus_pane_cp12

0xd678,	// (0x00085368) input_focus_pane_cp13_ParamLimits

0xd678,	// (0x00085368) input_focus_pane_cp13

0xd690,	// (0x00085380) input_focus_pane_cp14_ParamLimits

0xd690,	// (0x00085380) input_focus_pane_cp14

0xd6a8,	// (0x00085398) int_radio1_listscroll_pane

0xd6b2,	// (0x000853a2) main_int_radio1_pane_g1_ParamLimits

0xd6b2,	// (0x000853a2) main_int_radio1_pane_g1

0xd6c2,	// (0x000853b2) main_int_radio1_pane_t1_ParamLimits

0xd6c2,	// (0x000853b2) main_int_radio1_pane_t1

0xd6d6,	// (0x000853c6) main_int_radio1_pane_t2_ParamLimits

0xd6d6,	// (0x000853c6) main_int_radio1_pane_t2

0xd6ea,	// (0x000853da) main_int_radio1_pane_t3_ParamLimits

0xd6ea,	// (0x000853da) main_int_radio1_pane_t3

0xd6fe,	// (0x000853ee) main_int_radio1_pane_t4_ParamLimits

0xd6fe,	// (0x000853ee) main_int_radio1_pane_t4

0xd715,	// (0x00085405) main_int_radio1_pane_t5_ParamLimits

0xd715,	// (0x00085405) main_int_radio1_pane_t5

0xd727,	// (0x00085417) main_int_radio1_pane_t6_ParamLimits

0xd727,	// (0x00085417) main_int_radio1_pane_t6

0xd739,	// (0x00085429) main_int_radio1_pane_t7_ParamLimits

0xd739,	// (0x00085429) main_int_radio1_pane_t7

0xd74b,	// (0x0008543b) main_int_radio1_pane_t8_ParamLimits

0xd74b,	// (0x0008543b) main_int_radio1_pane_t8

0xd75f,	// (0x0008544f) main_int_radio1_pane_t9_ParamLimits

0xd75f,	// (0x0008544f) main_int_radio1_pane_t9

0xd771,	// (0x00085461) main_int_radio1_pane_t10_ParamLimits

0xd771,	// (0x00085461) main_int_radio1_pane_t10

0xd7a2,	// (0x00085492) main_int_radio1_pane_t11_ParamLimits

0xd7a2,	// (0x00085492) main_int_radio1_pane_t11

0xd7d3,	// (0x000854c3) main_int_radio1_pane_t12_ParamLimits

0xd7d3,	// (0x000854c3) main_int_radio1_pane_t12

0x000b,

0xfe96,	// (0x00087b86) main_int_radio1_pane_t_ParamLimits

0xfe96,	// (0x00087b86) main_int_radio1_pane_t

0xd7ea,	// (0x000854da) int_radio_list_pane

0x3c25,	// (0x0007b915) scroll_pane_cp037

0xd7f2,	// (0x000854e2) list_double_large_graphic_int_radio_pane_ParamLimits

0xd7f2,	// (0x000854e2) list_double_large_graphic_int_radio_pane

0xd80a,	// (0x000854fa) list_double_large_graphic_int_radio_pane_g1

0x3c43,	// (0x0007b933) list_double_large_graphic_int_radio_pane_t1

0x3c51,	// (0x0007b941) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfeaf,	// (0x00087b9f) list_double_large_graphic_int_radio_pane_t

0xd871,	// (0x00085561) list_highlight_pane_cp027

0xd359,	// (0x00085049) main_button_pane_4

0xd3ba,	// (0x000850aa) main_welc_pane_g4_ParamLimits

0xd3ba,	// (0x000850aa) main_welc_pane_g4

0xd416,	// (0x00085106) main_welc_pane_t4_ParamLimits

0xd416,	// (0x00085106) main_welc_pane_t4

0xd428,	// (0x00085118) main_welc_pane_t5_ParamLimits

0xd428,	// (0x00085118) main_welc_pane_t5

0xd45a,	// (0x0008514a) main_welc_pane_t6_ParamLimits

0xd45a,	// (0x0008514a) main_welc_pane_t6

0xd49c,	// (0x0008518c) welc_button_pane_2_ParamLimits

0xd49c,	// (0x0008518c) welc_button_pane_2

0xd4b4,	// (0x000851a4) welc_button_pane_3_ParamLimits

0xd4b4,	// (0x000851a4) welc_button_pane_3

0xd359,	// (0x00085049) welc_button_pane_4

0xd4ce,	// (0x000851be) welc_button_pane_5_ParamLimits

0xd4ce,	// (0x000851be) welc_button_pane_5

0x8695,	// (0x00080385) main_popup_welc_pane

0xd813,	// (0x00085503) main_welc_sk_g3

0xd81d,	// (0x0008550d) main_welc_sk_g4

0xd827,	// (0x00085517) main_welc_sk_t3

0xd837,	// (0x00085527) main_welc_sk_t4

0xd847,	// (0x00085537) popup_welc_pane_t4

0xd855,	// (0x00085545) popup_welc_pane_t5

0xd863,	// (0x00085553) popup_welc_pane_t6
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
