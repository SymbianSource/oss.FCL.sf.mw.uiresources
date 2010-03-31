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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004d29e };

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
0x0cf7,	// (0x0004df95) Screen

0x0d03,	// (0x0004dfa1) application_window

0x0d4f,	// (0x0004dfed) area_bottom_pane_ParamLimits

0x0d4f,	// (0x0004dfed) area_bottom_pane

0x0d88,	// (0x0004e026) area_top_pane_ParamLimits

0x0d88,	// (0x0004e026) area_top_pane

0x96d1,	// (0x0005696f) call_video_uplink_pane_ParamLimits

0x96d1,	// (0x0005696f) call_video_uplink_pane

0x0e16,	// (0x0004e0b4) main_pane_ParamLimits

0x0e16,	// (0x0004e0b4) main_pane

0xc817,	// (0x00059ab5) context_pane

0x438a,	// (0x00051628) navi_pane

0x43bc,	// (0x0005165a) popup_cale_events_window_ParamLimits

0x43bc,	// (0x0005165a) popup_cale_events_window

0xc82a,	// (0x00059ac8) popup_mup_playback_window

0x43d4,	// (0x00051672) signal_pane

0xa793,	// (0x00057a31) main_browser_pane

0xb3f9,	// (0x00058697) main_burst_pane

0x40fa,	// (0x00051398) main_calc_pane

0xc7fd,	// (0x00059a9b) main_cale_day_pane

0x1448,	// (0x0004e6e6) main_cale_month_pane

0xc7fd,	// (0x00059a9b) main_cale_week_pane

0xb3f9,	// (0x00058697) main_call_pane

0x9b02,	// (0x00056da0) main_call_poc_pane

0xb3f9,	// (0x00058697) main_camera_pane

0xb3f9,	// (0x00058697) main_chi_dic_pane

0xb155,	// (0x000583f3) main_clock_pane

0x9b02,	// (0x00056da0) main_fmradio_pane

0xb3f9,	// (0x00058697) main_graph_messa_pane

0x9b02,	// (0x00056da0) main_help_pane

0xa793,	// (0x00057a31) main_im_pane

0xa6af,	// (0x0005794d) main_image_pane_ParamLimits

0xa6af,	// (0x0005794d) main_image_pane

0x9b02,	// (0x00056da0) main_location2_pane

0xb3f9,	// (0x00058697) main_location_pane

0xa6af,	// (0x0005794d) main_messa_pane

0x9b02,	// (0x00056da0) main_mp2_pane

0xb3f9,	// (0x00058697) main_mp_pane

0x9b02,	// (0x00056da0) main_msg_pane

0x9b02,	// (0x00056da0) main_mup_eq_pane

0x9b02,	// (0x00056da0) main_mup_pane

0xa793,	// (0x00057a31) main_notes_pane

0x9b02,	// (0x00056da0) main_pec_pane

0x9b02,	// (0x00056da0) main_phob_pane

0x9b02,	// (0x00056da0) main_pinb_pane

0x9b02,	// (0x00056da0) main_postcard_pane

0x9b02,	// (0x00056da0) main_qdial_pane

0xb3f9,	// (0x00058697) main_skin_pane

0x9b02,	// (0x00056da0) main_smil2_pane

0xb3f9,	// (0x00058697) main_smil_pane

0xb3f9,	// (0x00058697) main_video_pane

0xb3f9,	// (0x00058697) main_video_tele_pane

0xa6af,	// (0x0005794d) main_viewer_pane_ParamLimits

0xa6af,	// (0x0005794d) main_viewer_pane

0xb3f9,	// (0x00058697) main_vorec_pane

0x414e,	// (0x000513ec) popup_blid_sat_info_window_ParamLimits

0x414e,	// (0x000513ec) popup_blid_sat_info_window

0x41a6,	// (0x00051444) popup_dyc_status_message_window_ParamLimits

0x41a6,	// (0x00051444) popup_dyc_status_message_window

0x41be,	// (0x0005145c) popup_grid_large_graphic_window_ParamLimits

0x41be,	// (0x0005145c) popup_grid_large_graphic_window

0x4274,	// (0x00051512) popup_loc_request_window_ParamLimits

0x4274,	// (0x00051512) popup_loc_request_window

0x4362,	// (0x00051600) popup_wml_address_window_ParamLimits

0x4362,	// (0x00051600) popup_wml_address_window

0x3f34,	// (0x000511d2) call_muted_g1

0x3be7,	// (0x00050e85) popup_call_audio_conf_window_ParamLimits

0x3be7,	// (0x00050e85) popup_call_audio_conf_window

0x3f48,	// (0x000511e6) popup_call_audio_first_window_ParamLimits

0x3f48,	// (0x000511e6) popup_call_audio_first_window

0x3fbe,	// (0x0005125c) popup_call_audio_in_window_ParamLimits

0x3fbe,	// (0x0005125c) popup_call_audio_in_window

0x3ffa,	// (0x00051298) popup_call_audio_out_window_ParamLimits

0x3ffa,	// (0x00051298) popup_call_audio_out_window

0x4034,	// (0x000512d2) popup_call_audio_second_window_ParamLimits

0x4034,	// (0x000512d2) popup_call_audio_second_window

0x408a,	// (0x00051328) popup_call_audio_wait_window_ParamLimits

0x408a,	// (0x00051328) popup_call_audio_wait_window

0x40bf,	// (0x0005135d) popup_number_entry_window_ParamLimits

0x40bf,	// (0x0005135d) popup_number_entry_window

0x96ef,	// (0x0005698d) bg_popup_call_pane_cp05_ParamLimits

0x96ef,	// (0x0005698d) bg_popup_call_pane_cp05

0x970f,	// (0x000569ad) popup_number_entry_window_t1

0x9722,	// (0x000569c0) popup_number_entry_window_t2

0x9734,	// (0x000569d2) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0005c36b) popup_number_entry_window_t

0x9746,	// (0x000569e4) text_title_cp2

0x9759,	// (0x000569f7) bg_popup_call_pane_cp_ParamLimits

0x9759,	// (0x000569f7) bg_popup_call_pane_cp

0x9767,	// (0x00056a05) call_thumbnail_pane

0x976f,	// (0x00056a0d) popup_call_audio_in_window_g1_ParamLimits

0x976f,	// (0x00056a0d) popup_call_audio_in_window_g1

0x977b,	// (0x00056a19) popup_call_audio_in_window_g2_ParamLimits

0x977b,	// (0x00056a19) popup_call_audio_in_window_g2

0x9787,	// (0x00056a25) popup_call_audio_in_window_g3_ParamLimits

0x9787,	// (0x00056a25) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0005c374) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0005c374) popup_call_audio_in_window_g

0x9793,	// (0x00056a31) popup_call_audio_in_window_t1_ParamLimits

0x9793,	// (0x00056a31) popup_call_audio_in_window_t1

0x97af,	// (0x00056a4d) popup_call_audio_in_window_t2_ParamLimits

0x97af,	// (0x00056a4d) popup_call_audio_in_window_t2

0x97cb,	// (0x00056a69) popup_call_audio_in_window_t3_ParamLimits

0x97cb,	// (0x00056a69) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0005c37b) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0005c37b) popup_call_audio_in_window_t

0x9759,	// (0x000569f7) bg_popup_call_pane_cp01_ParamLimits

0x9759,	// (0x000569f7) bg_popup_call_pane_cp01

0x9767,	// (0x00056a05) call_thumbnail_pane_cp02

0x97de,	// (0x00056a7c) call_type_pane_cp022

0x97e6,	// (0x00056a84) popup_call_audio_out_window_g1_ParamLimits

0x97e6,	// (0x00056a84) popup_call_audio_out_window_g1

0x97f8,	// (0x00056a96) popup_call_audio_out_window_g2_ParamLimits

0x97f8,	// (0x00056a96) popup_call_audio_out_window_g2

0x9804,	// (0x00056aa2) popup_call_audio_out_window_g3_ParamLimits

0x9804,	// (0x00056aa2) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0005c382) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0005c382) popup_call_audio_out_window_g

0x9816,	// (0x00056ab4) popup_call_audio_out_window_t1_ParamLimits

0x9816,	// (0x00056ab4) popup_call_audio_out_window_t1

0x982e,	// (0x00056acc) popup_call_audio_out_window_t2_ParamLimits

0x982e,	// (0x00056acc) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0005c389) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0005c389) popup_call_audio_out_window_t

0x9843,	// (0x00056ae1) bg_popup_call_pane_ParamLimits

0x9843,	// (0x00056ae1) bg_popup_call_pane

0x0fd3,	// (0x0004e271) call_thumbnail_pane_cp_ParamLimits

0x0fd3,	// (0x0004e271) call_thumbnail_pane_cp

0x98c7,	// (0x00056b65) call_type_pane_cp01_ParamLimits

0x98c7,	// (0x00056b65) call_type_pane_cp01

0x990b,	// (0x00056ba9) popup_call_audio_first_window_g1_ParamLimits

0x990b,	// (0x00056ba9) popup_call_audio_first_window_g1

0x9957,	// (0x00056bf5) popup_call_audio_first_window_g2_ParamLimits

0x9957,	// (0x00056bf5) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0005c38e) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0005c38e) popup_call_audio_first_window_g

0x999b,	// (0x00056c39) popup_call_audio_first_window_t1_ParamLimits

0x999b,	// (0x00056c39) popup_call_audio_first_window_t1

0x9a47,	// (0x00056ce5) popup_call_audio_first_window_t4_ParamLimits

0x9a47,	// (0x00056ce5) popup_call_audio_first_window_t4

0x9ad3,	// (0x00056d71) popup_call_audio_first_window_t5_ParamLimits

0x9ad3,	// (0x00056d71) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0005c393) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0005c393) popup_call_audio_first_window_t

0x9b02,	// (0x00056da0) bg_popup_call_pane_cp02

0x9b0c,	// (0x00056daa) call_type_pane_cp023

0x9b14,	// (0x00056db2) popup_call_audio_wait_window_g1

0x9b1c,	// (0x00056dba) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0005c39a) popup_call_audio_wait_window_g

0x9b24,	// (0x00056dc2) popup_call_audio_wait_window_t3

0x9b32,	// (0x00056dd0) bg_popup_call_pane_cp03_ParamLimits

0x9b32,	// (0x00056dd0) bg_popup_call_pane_cp03

0xa4e4,	// (0x00057782) call_thumbnail_pane_cp011_ParamLimits

0xa4e4,	// (0x00057782) call_thumbnail_pane_cp011

0xa4f0,	// (0x0005778e) call_type_pane_cp034_ParamLimits

0xa4f0,	// (0x0005778e) call_type_pane_cp034

0xa52c,	// (0x000577ca) popup_call_audio_second_window_g1_ParamLimits

0xa52c,	// (0x000577ca) popup_call_audio_second_window_g1

0xa568,	// (0x00057806) popup_call_audio_second_window_g2_ParamLimits

0xa568,	// (0x00057806) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0005c39f) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0005c39f) popup_call_audio_second_window_g

0xa5a4,	// (0x00057842) popup_call_audio_second_window_t1_ParamLimits

0xa5a4,	// (0x00057842) popup_call_audio_second_window_t1

0xa625,	// (0x000578c3) popup_call_audio_second_window_t2_ParamLimits

0xa625,	// (0x000578c3) popup_call_audio_second_window_t2

0xa65b,	// (0x000578f9) popup_call_audio_second_window_t3_ParamLimits

0xa65b,	// (0x000578f9) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0005c3a4) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0005c3a4) popup_call_audio_second_window_t

0x9b02,	// (0x00056da0) bg_popup_call_pane_cp04

0xa691,	// (0x0005792f) list_conf_pane

0xa699,	// (0x00057937) popup_call_audio_conf_window_t1

0xa6a7,	// (0x00057945) call_thumbnail_pane_g1

0xa6af,	// (0x0005794d) bg_pinb_pane_ParamLimits

0xa6af,	// (0x0005794d) bg_pinb_pane

0xa6bd,	// (0x0005795b) find_pinb_pane

0xa6c6,	// (0x00057964) listscroll_pinb_pane_ParamLimits

0xa6c6,	// (0x00057964) listscroll_pinb_pane

0xa6d5,	// (0x00057973) pinb_bg_pane_g1

0x0ff7,	// (0x0004e295) pinb_bg_pane_g2

0x1003,	// (0x0004e2a1) pinb_bg_pane_g3

0x100f,	// (0x0004e2ad) pinb_bg_pane_g4

0x101b,	// (0x0004e2b9) pinb_bg_pane_g5

0x1027,	// (0x0004e2c5) pinb_bg_pane_g6

0x1032,	// (0x0004e2d0) pinb_bg_pane_g7

0x103d,	// (0x0004e2db) pinb_bg_pane_g8

0x1048,	// (0x0004e2e6) pinb_bg_pane_g9

0x1052,	// (0x0004e2f0) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0005c3ab) pinb_bg_pane_g

0x106f,	// (0x0004e30d) grid_pinb_pane

0x1078,	// (0x0004e316) list_pinb_pane

0x1081,	// (0x0004e31f) scroll_pane_cp01_ParamLimits

0x1081,	// (0x0004e31f) scroll_pane_cp01

0xa6df,	// (0x0005797d) find_pinb_pane_g1_ParamLimits

0xa6df,	// (0x0005797d) find_pinb_pane_g1

0xa6f7,	// (0x00057995) find_pinb_pane_t1

0xa709,	// (0x000579a7) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0005c3c5) find_pinb_pane_t

0xa71e,	// (0x000579bc) input_focus_pane_cp01_ParamLimits

0xa71e,	// (0x000579bc) input_focus_pane_cp01

0x1093,	// (0x0004e331) cell_pinb_pane_ParamLimits

0x1093,	// (0x0004e331) cell_pinb_pane

0xa72a,	// (0x000579c8) cell_pinb_pane_g1_ParamLimits

0xa72a,	// (0x000579c8) cell_pinb_pane_g1

0xa73d,	// (0x000579db) cell_pinb_pane_g2_ParamLimits

0xa73d,	// (0x000579db) cell_pinb_pane_g2

0xa749,	// (0x000579e7) cell_pinb_pane_g3_ParamLimits

0xa749,	// (0x000579e7) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0005c3ca) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0005c3ca) cell_pinb_pane_g

0x9b02,	// (0x00056da0) grid_highlight_pane_cp01

0x10c1,	// (0x0004e35f) list_pinb_item_pane_ParamLimits

0x10c1,	// (0x0004e35f) list_pinb_item_pane

0x9b02,	// (0x00056da0) list_highlight_pane_cp02

0x10d4,	// (0x0004e372) list_pinb_item_pane_g1_ParamLimits

0x10d4,	// (0x0004e372) list_pinb_item_pane_g1

0x10e1,	// (0x0004e37f) list_pinb_item_pane_g2_ParamLimits

0x10e1,	// (0x0004e37f) list_pinb_item_pane_g2

0x10ed,	// (0x0004e38b) list_pinb_item_pane_g3_ParamLimits

0x10ed,	// (0x0004e38b) list_pinb_item_pane_g3

0x10fe,	// (0x0004e39c) list_pinb_item_pane_g4_ParamLimits

0x10fe,	// (0x0004e39c) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0005c3d1) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0005c3d1) list_pinb_item_pane_g

0x110a,	// (0x0004e3a8) list_pinb_item_pane_t1_ParamLimits

0x110a,	// (0x0004e3a8) list_pinb_item_pane_t1

0x113f,	// (0x0004e3dd) calc_display_pane

0x1167,	// (0x0004e405) calc_paper_pane

0x118a,	// (0x0004e428) grid_calc_pane

0x9b02,	// (0x00056da0) bg_list_pane_cp01

0x11b8,	// (0x0004e456) clock_g1

0x11c0,	// (0x0004e45e) clock_g2

0x0001,

0xf13c,	// (0x0005c3da) clock_g

0x11c8,	// (0x0004e466) clock_t1_ParamLimits

0x11c8,	// (0x0004e466) clock_t1

0x11dd,	// (0x0004e47b) clock_t2_ParamLimits

0x11dd,	// (0x0004e47b) clock_t2

0x11ef,	// (0x0004e48d) clock_t3_ParamLimits

0x11ef,	// (0x0004e48d) clock_t3

0x1201,	// (0x0004e49f) clock_t4_ParamLimits

0x1201,	// (0x0004e49f) clock_t4

0x1213,	// (0x0004e4b1) clock_t5_ParamLimits

0x1213,	// (0x0004e4b1) clock_t5

0x1228,	// (0x0004e4c6) clock_t6_ParamLimits

0x1228,	// (0x0004e4c6) clock_t6

0x123a,	// (0x0004e4d8) clock_t7_ParamLimits

0x123a,	// (0x0004e4d8) clock_t7

0x124c,	// (0x0004e4ea) clock_t8_ParamLimits

0x124c,	// (0x0004e4ea) clock_t8

0x1260,	// (0x0004e4fe) clock_t9_ParamLimits

0x1260,	// (0x0004e4fe) clock_t9

0x0008,

0xf141,	// (0x0005c3df) clock_t_ParamLimits

0xf141,	// (0x0005c3df) clock_t

0xa755,	// (0x000579f3) popup_clock_analogue_window_cp02

0xa755,	// (0x000579f3) popup_clock_digital_window_cp01

0xa75d,	// (0x000579fb) listscroll_help_pane

0x9b02,	// (0x00056da0) phob_pre_status_pane

0xa767,	// (0x00057a05) grid_qdial_pane

0xa6af,	// (0x0005794d) listscroll_mce_pane

0xa6af,	// (0x0005794d) bg_notes_pane

0xa771,	// (0x00057a0f) list_notes_pane

0x1274,	// (0x0004e512) scroll_pane_cp06

0xa77f,	// (0x00057a1d) bg_calc_paper_pane

0x9b9a,	// (0x00056e38) list_calc_pane

0xa793,	// (0x00057a31) bg_calc_display_pane

0x1288,	// (0x0004e526) calc_display_pane_t1

0x129a,	// (0x0004e538) calc_display_pane_t2

0x9bb4,	// (0x00056e52) calc_display_pane_t3

0x0002,

0xf154,	// (0x0005c3f2) calc_display_pane_t

0x12ac,	// (0x0004e54a) cell_calc_pane_ParamLimits

0x12ac,	// (0x0004e54a) cell_calc_pane

0xa79f,	// (0x00057a3d) bg_calc_paper_pane_g1

0xa7ab,	// (0x00057a49) bg_calc_paper_pane_g2

0xa7b7,	// (0x00057a55) bg_calc_paper_pane_g3

0xa7c3,	// (0x00057a61) bg_calc_paper_pane_g4

0xa7cf,	// (0x00057a6d) bg_calc_paper_pane_g5

0x12e3,	// (0x0004e581) bg_calc_paper_pane_g6

0x12f4,	// (0x0004e592) bg_calc_paper_pane_g7

0x1305,	// (0x0004e5a3) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0005c3f9) bg_calc_paper_pane_g

0x1318,	// (0x0004e5b6) calc_bg_paper_pane_g9

0x132b,	// (0x0004e5c9) list_calc_item_pane_ParamLimits

0x132b,	// (0x0004e5c9) list_calc_item_pane

0xa7db,	// (0x00057a79) list_calc_item_pane_g1

0x9bc6,	// (0x00056e64) list_calc_item_pane_t1_ParamLimits

0x9bc6,	// (0x00056e64) list_calc_item_pane_t1

0x1345,	// (0x0004e5e3) list_calc_item_pane_t2_ParamLimits

0x1345,	// (0x0004e5e3) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0005c40a) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0005c40a) list_calc_item_pane_t

0xa7e8,	// (0x00057a86) cell_calc_pane_g1

0xa7f2,	// (0x00057a90) grid_highlight_pane_cp02

0xa814,	// (0x00057ab2) bg_calc_display_pane_g1

0x9bd8,	// (0x00056e76) bg_calc_display_pane_g2

0xa81d,	// (0x00057abb) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0005c414) bg_calc_display_pane_g

0x1377,	// (0x0004e615) cell_qdial_pane_ParamLimits

0x1377,	// (0x0004e615) cell_qdial_pane

0x138b,	// (0x0004e629) cell_qdial_pane_g1_ParamLimits

0x138b,	// (0x0004e629) cell_qdial_pane_g1

0x13a1,	// (0x0004e63f) cell_qdial_pane_g2_ParamLimits

0x13a1,	// (0x0004e63f) cell_qdial_pane_g2

0xa826,	// (0x00057ac4) cell_qdial_pane_g3_ParamLimits

0xa826,	// (0x00057ac4) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0005c41b) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0005c41b) cell_qdial_pane_g

0x13c7,	// (0x0004e665) cell_qdial_pane_t1_ParamLimits

0x13c7,	// (0x0004e665) cell_qdial_pane_t1

0x13df,	// (0x0004e67d) cell_qdial_pane_t2_ParamLimits

0x13df,	// (0x0004e67d) cell_qdial_pane_t2

0x13f2,	// (0x0004e690) cell_qdial_pane_t3_ParamLimits

0x13f2,	// (0x0004e690) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0005c424) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0005c424) cell_qdial_pane_t

0x9b02,	// (0x00056da0) grid_highlight_pane_cp04

0xa832,	// (0x00057ad0) thumbnail_qdial_pane_ParamLimits

0xa832,	// (0x00057ad0) thumbnail_qdial_pane

0xa88e,	// (0x00057b2c) list_help_pane

0xa897,	// (0x00057b35) scroll_pane_cp02

0x1405,	// (0x0004e6a3) help_list_pane_t1_ParamLimits

0x1405,	// (0x0004e6a3) help_list_pane_t1

0x9be2,	// (0x00056e80) bg_notes_pane_g2

0x9bea,	// (0x00056e88) bg_notes_pane_g3

0x9bf2,	// (0x00056e90) notes_bg_pane_g1

0x9bfa,	// (0x00056e98) notes_bg_pane_g4

0x9c02,	// (0x00056ea0) notes_bg_pane_g5

0x9c0a,	// (0x00056ea8) notes_bg_pane_g6

0x9c12,	// (0x00056eb0) notes_bg_pane_g7

0x9c1a,	// (0x00056eb8) notes_bg_pane_g8

0x9c22,	// (0x00056ec0) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0005c442) notes_bg_pane_g

0x1424,	// (0x0004e6c2) list_notes_text_pane_ParamLimits

0x1424,	// (0x0004e6c2) list_notes_text_pane

0xa8a0,	// (0x00057b3e) list_notes_text_pane_g1

0x143a,	// (0x0004e6d8) list_notes_text_pane_t1

0x1448,	// (0x0004e6e6) listscroll_cale_week_pane

0x1474,	// (0x0004e712) bg_cale_heading_pane

0xa8c3,	// (0x00057b61) bg_cale_pane_cp01

0x1492,	// (0x0004e730) cale_week_corner_pane

0x14b1,	// (0x0004e74f) cale_week_day_heading_pane

0x14d4,	// (0x0004e772) cale_week_scroll_pane_g1

0x14ed,	// (0x0004e78b) cale_week_scroll_pane_g2

0x1505,	// (0x0004e7a3) cale_week_scroll_pane_g3

0x151d,	// (0x0004e7bb) cale_week_scroll_pane_g4

0x1535,	// (0x0004e7d3) cale_week_scroll_pane_g5

0x1551,	// (0x0004e7ef) cale_week_scroll_pane_g6

0x1571,	// (0x0004e80f) cale_week_scroll_pane_g7

0x1591,	// (0x0004e82f) cale_week_scroll_pane_g8

0x15b5,	// (0x0004e853) cale_week_scroll_pane_g9

0x15cd,	// (0x0004e86b) cale_week_scroll_pane_g10

0x15e5,	// (0x0004e883) cale_week_scroll_pane_g11

0x15fd,	// (0x0004e89b) cale_week_scroll_pane_g12

0x1615,	// (0x0004e8b3) cale_week_scroll_pane_g13

0x1615,	// (0x0004e8b3) cale_week_scroll_pane_g14

0x1615,	// (0x0004e8b3) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0005c451) cale_week_scroll_pane_g

0x162d,	// (0x0004e8cb) cale_week_time_pane

0x1651,	// (0x0004e8ef) grid_cale_week_pane

0xa8f3,	// (0x00057b91) scroll_pane_cp08

0x1677,	// (0x0004e915) cell_cale_week_pane_ParamLimits

0x1677,	// (0x0004e915) cell_cale_week_pane

0x1705,	// (0x0004e9a3) cale_week_day_heading_pane_t1

0x174f,	// (0x0004e9ed) cale_week_day_heading_pane_t2

0x179e,	// (0x0004ea3c) cale_week_day_heading_pane_t3

0x17ed,	// (0x0004ea8b) cale_week_day_heading_pane_t4

0x183c,	// (0x0004eada) cale_week_day_heading_pane_t5

0x1893,	// (0x0004eb31) cale_week_day_heading_pane_t6

0x18ea,	// (0x0004eb88) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0005c470) cale_week_day_heading_pane_t

0xa910,	// (0x00057bae) bg_cale_side_pane

0x1934,	// (0x0004ebd2) cale_week_time_pane_t1

0x194e,	// (0x0004ebec) cale_week_time_pane_t2

0x1968,	// (0x0004ec06) cale_week_time_pane_t3

0x1982,	// (0x0004ec20) cale_week_time_pane_t4

0x199c,	// (0x0004ec3a) cale_week_time_pane_t5

0x19b6,	// (0x0004ec54) cale_week_time_pane_t6

0x19d0,	// (0x0004ec6e) cale_week_time_pane_t7

0x19f0,	// (0x0004ec8e) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0005c47f) cale_week_time_pane_t

0x1a10,	// (0x0004ecae) cell_cale_week_pane_g2

0x1a2f,	// (0x0004eccd) cell_cale_week_pane_g3_ParamLimits

0x1a2f,	// (0x0004eccd) cell_cale_week_pane_g3

0xa91e,	// (0x00057bbc) grid_highlight_pane_cp07

0xa926,	// (0x00057bc4) listscroll_gms_pane

0xa930,	// (0x00057bce) grid_gms_pane

0xa939,	// (0x00057bd7) listscroll_gms_pane_g1

0xa941,	// (0x00057bdf) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0005c490) listscroll_gms_pane_g

0x1a47,	// (0x0004ece5) scroll_pane_cp010

0x1a52,	// (0x0004ecf0) cell_gms_pane_ParamLimits

0x1a52,	// (0x0004ecf0) cell_gms_pane

0x1a64,	// (0x0004ed02) cell_gms_pane_g1

0xa949,	// (0x00057be7) cell_gms_pane_g2

0xa8a0,	// (0x00057b3e) cell_gms_pane_g3

0xa951,	// (0x00057bef) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0005c495) cell_gms_pane_g

0xa95a,	// (0x00057bf8) grid_highlight_pane_cp09

0x3ede,	// (0x0005117c) phob_pre_status_pane_g1

0x3ee6,	// (0x00051184) phob_pre_status_pane_g2

0x3eee,	// (0x0005118c) phob_pre_status_pane_g3

0x3ef6,	// (0x00051194) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0005c884) phob_pre_status_pane_g

0x3f06,	// (0x000511a4) phob_pre_status_pane_t1

0x3f14,	// (0x000511b2) phob_pre_status_pane_t2

0x3f24,	// (0x000511c2) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0005c88f) phob_pre_status_pane_t

0x9b02,	// (0x00056da0) bg_list_pane_cp05

0x1a74,	// (0x0004ed12) grid_vorec_pane

0x1a7e,	// (0x0004ed1c) vorec_t1

0x1a8c,	// (0x0004ed2a) vorec_t2

0x1a9a,	// (0x0004ed38) vorec_t3

0x1aa8,	// (0x0004ed46) vorec_t4

0x9c2a,	// (0x00056ec8) vorec_t5

0x1ab6,	// (0x0004ed54) vorec_t6

0x0006,

0xf200,	// (0x0005c49e) vorec_t

0x1ad2,	// (0x0004ed70) wait_bar_pane_cp01

0x1ada,	// (0x0004ed78) cell_vorec_pane_ParamLimits

0x1ada,	// (0x0004ed78) cell_vorec_pane

0x9c38,	// (0x00056ed6) cell_vorec_pane_g1

0x9b02,	// (0x00056da0) grid_highlight_pane_cp05

0x1b05,	// (0x0004eda3) cams_zoom_pane

0x1b14,	// (0x0004edb2) image_vga_pane

0x1b2e,	// (0x0004edcc) main_camera_pane_g1

0x1b40,	// (0x0004edde) main_camera_pane_g2

0x1b50,	// (0x0004edee) main_camera_pane_g3

0x1b62,	// (0x0004ee00) main_camera_pane_g4

0x1b74,	// (0x0004ee12) main_camera_pane_g5

0x1b86,	// (0x0004ee24) main_camera_pane_g6

0x1b98,	// (0x0004ee36) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0005c4ad) main_camera_pane_g

0x1baa,	// (0x0004ee48) main_camera_pane_t1

0x1bc0,	// (0x0004ee5e) main_camera_pane_t2

0x0001,

0xf220,	// (0x0005c4be) main_camera_pane_t

0x1bfc,	// (0x0004ee9a) cams_zoom_pane_cp_ParamLimits

0x1bfc,	// (0x0004ee9a) cams_zoom_pane_cp

0x1c24,	// (0x0004eec2) image_cif_pane_ParamLimits

0x1c24,	// (0x0004eec2) image_cif_pane

0x1c5f,	// (0x0004eefd) image_subqcif_pane

0x1c67,	// (0x0004ef05) main_video_pane_g1_ParamLimits

0x1c67,	// (0x0004ef05) main_video_pane_g1

0x1c8b,	// (0x0004ef29) main_video_pane_g2_ParamLimits

0x1c8b,	// (0x0004ef29) main_video_pane_g2

0x1cbf,	// (0x0004ef5d) main_video_pane_g3_ParamLimits

0x1cbf,	// (0x0004ef5d) main_video_pane_g3

0x1ced,	// (0x0004ef8b) main_video_pane_g4_ParamLimits

0x1ced,	// (0x0004ef8b) main_video_pane_g4

0x1d1b,	// (0x0004efb9) main_video_pane_g5_ParamLimits

0x1d1b,	// (0x0004efb9) main_video_pane_g5

0xa96e,	// (0x00057c0c) main_video_pane_g6_ParamLimits

0xa96e,	// (0x00057c0c) main_video_pane_g6

0x0006,

0xf225,	// (0x0005c4c3) main_video_pane_g_ParamLimits

0xf225,	// (0x0005c4c3) main_video_pane_g

0x1d44,	// (0x0004efe2) main_video_pane_t1_ParamLimits

0x1d44,	// (0x0004efe2) main_video_pane_t1

0xa988,	// (0x00057c26) cams_zoom_pane_g1

0xa991,	// (0x00057c2f) cams_zoom_pane_g2

0xa99a,	// (0x00057c38) cams_zoom_pane_g3

0xa9a3,	// (0x00057c41) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0005c4d2) cams_zoom_pane_g

0x1da1,	// (0x0004f03f) grid_cams_pane

0x1dbb,	// (0x0004f059) linegrid_cams_pane

0x1dce,	// (0x0004f06c) cell_cams_pane_ParamLimits

0x1dce,	// (0x0004f06c) cell_cams_pane

0xa9ac,	// (0x00057c4a) cams_burst_image_pane

0xa9b4,	// (0x00057c52) cell_cams_pane_g1

0x9b02,	// (0x00056da0) grid_highlight_pane_cp03

0xa7e8,	// (0x00057a86) mp_bg_pane_g1

0x9b02,	// (0x00056da0) bg_list_pane_cp03

0xc722,	// (0x000599c0) bg_mp_pane

0xc72a,	// (0x000599c8) grid_mp_pane

0xc732,	// (0x000599d0) media_player_g1

0xc73a,	// (0x000599d8) media_player_t1

0xc748,	// (0x000599e6) media_player_t2

0xc756,	// (0x000599f4) media_player_t3

0xc764,	// (0x00059a02) media_player_t4

0xc772,	// (0x00059a10) media_player_t5

0xc780,	// (0x00059a1e) media_player_t6

0xc78e,	// (0x00059a2c) media_player_t7

0x0006,

0xf5d0,	// (0x0005c86e) media_player_t

0xc79c,	// (0x00059a3a) wait_bar_pane_cp02

0xf5b5,	// (0x0005c853) main_usb_pane_t

0x3ed5,	// (0x00051173) cell_mp_pane

0xa7e8,	// (0x00057a86) cell_mp_pane_g1

0x9b02,	// (0x00056da0) grid_highlight_pane_cp06

0xa9bc,	// (0x00057c5a) grid_skin_colour_pane

0xa9c4,	// (0x00057c62) list_highlight_pane_cp03

0x1e88,	// (0x0004f126) skin_g1

0xa9cc,	// (0x00057c6a) skin_t1

0xa9db,	// (0x00057c79) skin_t2

0x0001,

0xf269,	// (0x0005c507) skin_t

0x1e90,	// (0x0004f12e) cell_skin_colour_pane_ParamLimits

0x1e90,	// (0x0004f12e) cell_skin_colour_pane

0xa9e9,	// (0x00057c87) cell_skin_colour_pane_g1

0x1f09,	// (0x0004f1a7) call_video_g1_ParamLimits

0x1f09,	// (0x0004f1a7) call_video_g1

0x1f25,	// (0x0004f1c3) call_video_g2_ParamLimits

0x1f25,	// (0x0004f1c3) call_video_g2

0x0001,

0xf26e,	// (0x0005c50c) call_video_g_ParamLimits

0xf26e,	// (0x0005c50c) call_video_g

0x1f77,	// (0x0004f215) call_video_uplink_pane_cp1_ParamLimits

0x1f77,	// (0x0004f215) call_video_uplink_pane_cp1

0xa9fb,	// (0x00057c99) call_video_uplink_pane_cp2

0x2016,	// (0x0004f2b4) video_down_crop_pane_ParamLimits

0x2016,	// (0x0004f2b4) video_down_crop_pane

0x20ff,	// (0x0004f39d) video_down_pane_ParamLimits

0x20ff,	// (0x0004f39d) video_down_pane

0xaa03,	// (0x00057ca1) video_down_subqcif_pane_ParamLimits

0xaa03,	// (0x00057ca1) video_down_subqcif_pane

0xaa1b,	// (0x00057cb9) video_down_subqcif_pane_cp_ParamLimits

0xaa1b,	// (0x00057cb9) video_down_subqcif_pane_cp

0xaa41,	// (0x00057cdf) im_reading_pane_ParamLimits

0xaa41,	// (0x00057cdf) im_reading_pane

0x220d,	// (0x0004f4ab) im_writing_pane_ParamLimits

0x220d,	// (0x0004f4ab) im_writing_pane

0x2223,	// (0x0004f4c1) im_reading_pane_t1

0xaa5b,	// (0x00057cf9) list_im_pane

0xaa6c,	// (0x00057d0a) scroll_pane_cp07

0x2260,	// (0x0004f4fe) im_writing_pane_t1_ParamLimits

0x2260,	// (0x0004f4fe) im_writing_pane_t1

0xaa85,	// (0x00057d23) im_writing_pane_t2_ParamLimits

0xaa85,	// (0x00057d23) im_writing_pane_t2

0x0001,

0xf278,	// (0x0005c516) im_writing_pane_t_ParamLimits

0xf278,	// (0x0005c516) im_writing_pane_t

0x9b02,	// (0x00056da0) input_focus_pane_cp04

0x9b02,	// (0x00056da0) input_focus_pane_cp05

0x2275,	// (0x0004f513) list_im_single_pane_ParamLimits

0x2275,	// (0x0004f513) list_im_single_pane

0x228b,	// (0x0004f529) list_single_im_pane_t1

0x3e95,	// (0x00051133) blid_accuracy_pane

0x3e9d,	// (0x0005113b) blid_compass_pane

0x3ea7,	// (0x00051145) main_location_t1

0x3eb7,	// (0x00051155) main_location_t2

0x3ec7,	// (0x00051165) main_location_t3

0x0002,

0xf5df,	// (0x0005c87d) main_location_t

0x9b02,	// (0x00056da0) aid_levels_location

0xa7e8,	// (0x00057a86) blid_accuracy_pane_g1

0xa7e8,	// (0x00057a86) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0005c578) blid_accuracy_pane_g

0xaacd,	// (0x00057d6b) wml_content_pane

0xab0b,	// (0x00057da9) wml_button_pane_ParamLimits

0xab0b,	// (0x00057da9) wml_button_pane

0x229a,	// (0x0004f538) wml_list_single_large_pane_ParamLimits

0x229a,	// (0x0004f538) wml_list_single_large_pane

0x22b0,	// (0x0004f54e) wml_list_single_medium_pane_ParamLimits

0x22b0,	// (0x0004f54e) wml_list_single_medium_pane

0x22ca,	// (0x0004f568) wml_list_single_small_pane_ParamLimits

0x22ca,	// (0x0004f568) wml_list_single_small_pane

0xab1f,	// (0x00057dbd) wml_selection_box_pane_ParamLimits

0xab1f,	// (0x00057dbd) wml_selection_box_pane

0xab32,	// (0x00057dd0) wml_list_single_pane_t1

0xab41,	// (0x00057ddf) wml_list_single_medium_pane_t1

0xab50,	// (0x00057dee) wml_list_single_large_pane_t1

0xab5f,	// (0x00057dfd) input_focus_pane_cp02_ParamLimits

0xab5f,	// (0x00057dfd) input_focus_pane_cp02

0xab72,	// (0x00057e10) wml_selection_box_pane_g1

0xab7b,	// (0x00057e19) wml_selection_box_pane_t1_ParamLimits

0xab7b,	// (0x00057e19) wml_selection_box_pane_t1

0xa6af,	// (0x0005794d) bg_wml_button_pane_ParamLimits

0xa6af,	// (0x0005794d) bg_wml_button_pane

0xab93,	// (0x00057e31) wml_button_pane_g1

0xab9b,	// (0x00057e39) wml_button_pane_t1

0xab93,	// (0x00057e31) wml_button_bg_pane_g1

0xabab,	// (0x00057e49) wml_button_bg_pane_g2

0xabb3,	// (0x00057e51) wml_button_bg_pane_g3

0xabbb,	// (0x00057e59) wml_button_bg_pane_g4

0xabc3,	// (0x00057e61) wml_button_bg_pane_g5

0xabcb,	// (0x00057e69) wml_button_bg_pane_g6

0xabd3,	// (0x00057e71) wml_button_bg_pane_g7

0xabdb,	// (0x00057e79) wml_button_bg_pane_g8

0xabe3,	// (0x00057e81) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0005c51b) wml_button_bg_pane_g

0x22e4,	// (0x0004f582) bg_list_pane_cp02

0xabeb,	// (0x00057e89) mce_header_pane_ParamLimits

0xabeb,	// (0x00057e89) mce_header_pane

0xac01,	// (0x00057e9f) mce_icon_pane

0xac01,	// (0x00057e9f) mce_image_pane

0xac0a,	// (0x00057ea8) mce_text_pane_ParamLimits

0xac0a,	// (0x00057ea8) mce_text_pane

0x22ec,	// (0x0004f58a) scroll_pane_cp03

0xab03,	// (0x00057da1) scroll_pane_cp04

0xac1d,	// (0x00057ebb) scroll_pane_cp05_ParamLimits

0xac1d,	// (0x00057ebb) scroll_pane_cp05

0x22f6,	// (0x0004f594) mce_header_field_pane_ParamLimits

0x22f6,	// (0x0004f594) mce_header_field_pane

0x230d,	// (0x0004f5ab) mce_header_field_pane_2_ParamLimits

0x230d,	// (0x0004f5ab) mce_header_field_pane_2

0x2323,	// (0x0004f5c1) mce_header_field_pane_3

0x232b,	// (0x0004f5c9) list_single_mce_message_pane_ParamLimits

0x232b,	// (0x0004f5c9) list_single_mce_message_pane

0x2342,	// (0x0004f5e0) list_single_mce_smart_pane_ParamLimits

0x2342,	// (0x0004f5e0) list_single_mce_smart_pane

0xac29,	// (0x00057ec7) input_focus_pane_cp03

0xac32,	// (0x00057ed0) list_header_data_pane

0x2364,	// (0x0004f602) mce_header_field_pane_t1

0x2374,	// (0x0004f612) list_single_mce_header_pane_ParamLimits

0x2374,	// (0x0004f612) list_single_mce_header_pane

0xac3a,	// (0x00057ed8) list_single_mce_header_pane_t1

0xac49,	// (0x00057ee7) list_single_mce_message_pane_g1

0xac51,	// (0x00057eef) list_single_mce_message_pane_t1

0x23ae,	// (0x0004f64c) bg_cale_heading_pane_cp01_ParamLimits

0x23ae,	// (0x0004f64c) bg_cale_heading_pane_cp01

0xac5f,	// (0x00057efd) bg_cale_pane_cp02_ParamLimits

0xac5f,	// (0x00057efd) bg_cale_pane_cp02

0x23e9,	// (0x0004f687) cale_month_corner_pane

0x2408,	// (0x0004f6a6) cale_month_day_heading_pane_ParamLimits

0x2408,	// (0x0004f6a6) cale_month_day_heading_pane

0x245b,	// (0x0004f6f9) cale_month_pane_g1_ParamLimits

0x245b,	// (0x0004f6f9) cale_month_pane_g1

0x248b,	// (0x0004f729) cale_month_pane_g2_ParamLimits

0x248b,	// (0x0004f729) cale_month_pane_g2

0x24bb,	// (0x0004f759) cale_month_pane_g3_ParamLimits

0x24bb,	// (0x0004f759) cale_month_pane_g3

0x24f7,	// (0x0004f795) cale_month_pane_g4_ParamLimits

0x24f7,	// (0x0004f795) cale_month_pane_g4

0x2533,	// (0x0004f7d1) cale_month_pane_g5_ParamLimits

0x2533,	// (0x0004f7d1) cale_month_pane_g5

0x257b,	// (0x0004f819) cale_month_pane_g6_ParamLimits

0x257b,	// (0x0004f819) cale_month_pane_g6

0x25c7,	// (0x0004f865) cale_month_pane_g7_ParamLimits

0x25c7,	// (0x0004f865) cale_month_pane_g7

0x261b,	// (0x0004f8b9) cale_month_pane_g8_ParamLimits

0x261b,	// (0x0004f8b9) cale_month_pane_g8

0x266f,	// (0x0004f90d) cale_month_pane_g9_ParamLimits

0x266f,	// (0x0004f90d) cale_month_pane_g9

0x26c1,	// (0x0004f95f) cale_month_pane_g10_ParamLimits

0x26c1,	// (0x0004f95f) cale_month_pane_g10

0x2713,	// (0x0004f9b1) cale_month_pane_g11_ParamLimits

0x2713,	// (0x0004f9b1) cale_month_pane_g11

0x2765,	// (0x0004fa03) cale_month_pane_g12_ParamLimits

0x2765,	// (0x0004fa03) cale_month_pane_g12

0x27b7,	// (0x0004fa55) cale_month_pane_g13_ParamLimits

0x27b7,	// (0x0004fa55) cale_month_pane_g13

0x000c,

0xf290,	// (0x0005c52e) cale_month_pane_g_ParamLimits

0xf290,	// (0x0005c52e) cale_month_pane_g

0x2809,	// (0x0004faa7) cale_month_week_pane

0x282d,	// (0x0004facb) grid_cale_month_pane_ParamLimits

0x282d,	// (0x0004facb) grid_cale_month_pane

0x286b,	// (0x0004fb09) cale_month_day_heading_pane_t1

0x28f1,	// (0x0004fb8f) cale_month_day_heading_pane_t2

0x2982,	// (0x0004fc20) cale_month_day_heading_pane_t3

0x2a13,	// (0x0004fcb1) cale_month_day_heading_pane_t4

0x2aac,	// (0x0004fd4a) cale_month_day_heading_pane_t5

0x2b4d,	// (0x0004fdeb) cale_month_day_heading_pane_t6

0x2bee,	// (0x0004fe8c) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0005c549) cale_month_day_heading_pane_t

0xa910,	// (0x00057bae) bg_cale_side_pane_cp01

0x2c97,	// (0x0004ff35) cale_month_week_pane_t1

0x2cb0,	// (0x0004ff4e) cale_month_week_pane_t2

0x2cc9,	// (0x0004ff67) cale_month_week_pane_t3

0x2ce2,	// (0x0004ff80) cale_month_week_pane_t4

0x2cfb,	// (0x0004ff99) cale_month_week_pane_t5

0x2d14,	// (0x0004ffb2) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0005c558) cale_month_week_pane_t

0x2d2d,	// (0x0004ffcb) cell_cale_month_pane_ParamLimits

0x2d2d,	// (0x0004ffcb) cell_cale_month_pane

0x9c42,	// (0x00056ee0) cell_cale_month_pane_g1

0x2e85,	// (0x00050123) cell_cale_month_pane_t1_ParamLimits

0x2e85,	// (0x00050123) cell_cale_month_pane_t1

0xa91e,	// (0x00057bbc) grid_highlight_pane_cp08

0xa7e8,	// (0x00057a86) main_smil_g1

0x2ea5,	// (0x00050143) smil_status_pane

0xac9e,	// (0x00057f3c) smil_text_pane

0xc642,	// (0x000598e0) bg_popup_call3_rect_pane_g8

0xc64a,	// (0x000598e8) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0005c811) bg_popup_call3_rect_pane_g

0xc891,	// (0x00059b2f) smil_status_volume_pane_g1

0xaca8,	// (0x00057f46) smil_status_pane_t1

0x9d98,	// (0x00057036) volume_smil_pane

0xacbf,	// (0x00057f5d) list_smil_text_pane

0x2eba,	// (0x00050158) scroll_pane_cp011

0x2ec5,	// (0x00050163) smil_text_list_pane_t1_ParamLimits

0x2ec5,	// (0x00050163) smil_text_list_pane_t1

0x9c4e,	// (0x00056eec) aid_volume_smil_ParamLimits

0x9c4e,	// (0x00056eec) aid_volume_smil

0xa7e8,	// (0x00057a86) smil_volume_pane_g1

0xa7e8,	// (0x00057a86) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0005c578) smil_volume_pane_g

0x1448,	// (0x0004e6e6) listscroll_cale_day_pane

0xacc9,	// (0x00057f67) bg_cale_pane

0xace1,	// (0x00057f7f) list_cale_pane

0xad04,	// (0x00057fa2) scroll_pane_cp09

0xad15,	// (0x00057fb3) cale_bg_pane_g1

0xad1d,	// (0x00057fbb) cale_bg_pane_g2

0xad25,	// (0x00057fc3) cale_bg_pane_g3

0xad2d,	// (0x00057fcb) cale_bg_pane_g4

0xad35,	// (0x00057fd3) cale_bg_pane_g5

0xad3d,	// (0x00057fdb) cale_bg_pane_g6

0xad45,	// (0x00057fe3) cale_bg_pane_g7

0xad4d,	// (0x00057feb) cale_bg_pane_g8

0xad55,	// (0x00057ff3) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0005c57d) cale_bg_pane_g

0x2f07,	// (0x000501a5) list_cale_time_pane_ParamLimits

0x2f07,	// (0x000501a5) list_cale_time_pane

0xad65,	// (0x00058003) list_cale_time_pane_g1_ParamLimits

0xad65,	// (0x00058003) list_cale_time_pane_g1

0xad71,	// (0x0005800f) list_cale_time_pane_g2_ParamLimits

0xad71,	// (0x0005800f) list_cale_time_pane_g2

0x2f1e,	// (0x000501bc) list_cale_time_pane_g3_ParamLimits

0x2f1e,	// (0x000501bc) list_cale_time_pane_g3

0x2f2c,	// (0x000501ca) list_cale_time_pane_g4_ParamLimits

0x2f2c,	// (0x000501ca) list_cale_time_pane_g4

0x2f3a,	// (0x000501d8) list_cale_time_pane_g5_ParamLimits

0x2f3a,	// (0x000501d8) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0005c590) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0005c590) list_cale_time_pane_g

0xad8b,	// (0x00058029) list_cale_time_pane_t1_ParamLimits

0xad8b,	// (0x00058029) list_cale_time_pane_t1

0xadb3,	// (0x00058051) list_cale_time_pane_t2_ParamLimits

0xadb3,	// (0x00058051) list_cale_time_pane_t2

0x3200,	// (0x0005049e) aid_blid_cardinal_pane

0x323e,	// (0x000504dc) compass_pane_t4

0xaddb,	// (0x00058079) list_cale_time_pane_t4_ParamLimits

0xaddb,	// (0x00058079) list_cale_time_pane_t4

0x324c,	// (0x000504ea) compass_pane_t5

0x325a,	// (0x000504f8) compass_pane_t6

0x3268,	// (0x00050506) compass_pane_t7

0xb28c,	// (0x0005852a) navi_pane_cc_t1

0xb4a0,	// (0x0005873e) aid_phob_thumbnail_center_pane

0x38a5,	// (0x00050b43) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0005c59d) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0005c59d) list_cale_time_pane_t

0x9759,	// (0x000569f7) bg_popup_window_pane_cp02_ParamLimits

0x9759,	// (0x000569f7) bg_popup_window_pane_cp02

0xae03,	// (0x000580a1) heading_pane_cp01_ParamLimits

0xae03,	// (0x000580a1) heading_pane_cp01

0xae0f,	// (0x000580ad) loc_req_pane_ParamLimits

0xae0f,	// (0x000580ad) loc_req_pane

0xae1f,	// (0x000580bd) loc_type_pane_ParamLimits

0xae1f,	// (0x000580bd) loc_type_pane

0xae31,	// (0x000580cf) loc_type_pane_t1_ParamLimits

0xae31,	// (0x000580cf) loc_type_pane_t1

0xae43,	// (0x000580e1) loc_type_pane_t2_ParamLimits

0xae43,	// (0x000580e1) loc_type_pane_t2

0xae55,	// (0x000580f3) loc_type_pane_t3_ParamLimits

0xae55,	// (0x000580f3) loc_type_pane_t3

0x0002,

0xf306,	// (0x0005c5a4) loc_type_pane_t_ParamLimits

0xf306,	// (0x0005c5a4) loc_type_pane_t

0xae67,	// (0x00058105) list_loc_req_pane

0xae71,	// (0x0005810f) scroll_pane_cp012

0x2f48,	// (0x000501e6) list_single_loc_request_popup_menu_pane_ParamLimits

0x2f48,	// (0x000501e6) list_single_loc_request_popup_menu_pane

0xae7c,	// (0x0005811a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae7c,	// (0x0005811a) list_single_loc_request_popup_menu_pane_g1

0xae88,	// (0x00058126) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae88,	// (0x00058126) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0005c5ab) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0005c5ab) list_single_loc_request_popup_menu_pane_g

0xae94,	// (0x00058132) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae94,	// (0x00058132) list_single_loc_request_popup_menu_pane_t1

0xa6af,	// (0x0005794d) bg_popup_window_pane_cp03_ParamLimits

0xa6af,	// (0x0005794d) bg_popup_window_pane_cp03

0xb2f7,	// (0x00058595) heading_loc_req_pane_ParamLimits

0xb2f7,	// (0x00058595) heading_loc_req_pane

0x2f55,	// (0x000501f3) popup_dyc_status_message_window_g1_ParamLimits

0x2f55,	// (0x000501f3) popup_dyc_status_message_window_g1

0x2f69,	// (0x00050207) popup_dyc_status_message_window_t1_ParamLimits

0x2f69,	// (0x00050207) popup_dyc_status_message_window_t1

0x2f7e,	// (0x0005021c) popup_dyc_status_message_window_t2_ParamLimits

0x2f7e,	// (0x0005021c) popup_dyc_status_message_window_t2

0x2f93,	// (0x00050231) popup_dyc_status_message_window_t3_ParamLimits

0x2f93,	// (0x00050231) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0005c5b0) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0005c5b0) popup_dyc_status_message_window_t

0x9b02,	// (0x00056da0) bg_heading_pane_cp01

0xaeaa,	// (0x00058148) heading_loc_req_pane_g1

0xaeb2,	// (0x00058150) heading_loc_req_pane_g2

0xaeba,	// (0x00058158) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0005c5b7) heading_loc_req_pane_g

0xaec2,	// (0x00058160) heading_loc_req_pane_t1

0xaed1,	// (0x0005816f) bg_popup_sub_pane_cp01_ParamLimits

0xaed1,	// (0x0005816f) bg_popup_sub_pane_cp01

0xaedf,	// (0x0005817d) popup_cale_events_window_g1_ParamLimits

0xaedf,	// (0x0005817d) popup_cale_events_window_g1

0xaeff,	// (0x0005819d) popup_cale_events_window_g2_ParamLimits

0xaeff,	// (0x0005819d) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0005c5eb) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0005c5eb) popup_cale_events_window_g

0xaf1f,	// (0x000581bd) popup_cale_events_window_t1_ParamLimits

0xaf1f,	// (0x000581bd) popup_cale_events_window_t1

0xaf31,	// (0x000581cf) popup_cale_events_window_t2_ParamLimits

0xaf31,	// (0x000581cf) popup_cale_events_window_t2

0xaf6f,	// (0x0005820d) popup_cale_events_window_t3_ParamLimits

0xaf6f,	// (0x0005820d) popup_cale_events_window_t3

0xafa9,	// (0x00058247) popup_cale_events_window_t4_ParamLimits

0xafa9,	// (0x00058247) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0005c5f0) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0005c5f0) popup_cale_events_window_t

0x300e,	// (0x000502ac) call_type_pane

0x301e,	// (0x000502bc) popup_call_status_window_g1

0x3032,	// (0x000502d0) popup_call_status_window_g2

0x3046,	// (0x000502e4) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0005c5f9) popup_call_status_window_g

0xafdf,	// (0x0005827d) call_type_pane_g1

0xafe8,	// (0x00058286) call_type_pane_g2

0x0001,

0xf362,	// (0x0005c600) call_type_pane_g

0x9b02,	// (0x00056da0) bg_popup_sub_pane_cp02

0xaff1,	// (0x0005828f) listscroll_popup_wml_pane

0xaff9,	// (0x00058297) list_wml_pane

0xb003,	// (0x000582a1) scroll_pane_cp013

0xb00e,	// (0x000582ac) list_single_graphic_popup_wml_pane_ParamLimits

0xb00e,	// (0x000582ac) list_single_graphic_popup_wml_pane

0xa7e8,	// (0x00057a86) list_single_graphic_popup_wml_pane_g1

0xb022,	// (0x000582c0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0005c605) list_single_graphic_popup_wml_pane_g

0xb02a,	// (0x000582c8) list_single_graphic_popup_wml_pane_t1

0xb040,	// (0x000582de) aid_call_pane

0xa6a7,	// (0x00057945) popup_clock_analogue_window_g1

0xa6a7,	// (0x00057945) popup_clock_analogue_window_g2

0x9c70,	// (0x00056f0e) popup_clock_analogue_window_g3

0x9c70,	// (0x00056f0e) popup_clock_analogue_window_g4

0xa7e8,	// (0x00057a86) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0005c60a) popup_clock_analogue_window_g

0x9c78,	// (0x00056f16) popup_clock_analogue_window_t1

0x9c86,	// (0x00056f24) clock_digital_number_pane_ParamLimits

0x9c86,	// (0x00056f24) clock_digital_number_pane

0x9c92,	// (0x00056f30) clock_digital_number_pane_cp02_ParamLimits

0x9c92,	// (0x00056f30) clock_digital_number_pane_cp02

0x9c9e,	// (0x00056f3c) clock_digital_number_pane_cp03_ParamLimits

0x9c9e,	// (0x00056f3c) clock_digital_number_pane_cp03

0x9caa,	// (0x00056f48) clock_digital_number_pane_cp04_ParamLimits

0x9caa,	// (0x00056f48) clock_digital_number_pane_cp04

0x9cba,	// (0x00056f58) clock_digital_separator_pane_ParamLimits

0x9cba,	// (0x00056f58) clock_digital_separator_pane

0x9cc6,	// (0x00056f64) popup_clock_digital_window_t1

0xa7e8,	// (0x00057a86) clock_digital_number_pane_g1

0xa7e8,	// (0x00057a86) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0005c578) clock_digital_number_pane_g

0xa7e8,	// (0x00057a86) clock_digital_separator_pane_g1

0xa7e8,	// (0x00057a86) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0005c578) clock_digital_separator_pane_g

0x9b02,	// (0x00056da0) bg_popup_window_pane_cp04

0xb048,	// (0x000582e6) heading_pane_cp03

0xb050,	// (0x000582ee) listscroll_popup_gms_pane

0xb058,	// (0x000582f6) grid_large_graphic_popup_pane

0xb062,	// (0x00058300) listscroll_popup_gms_pane_g1

0xb06a,	// (0x00058308) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0005c615) listscroll_popup_gms_pane_g

0xab03,	// (0x00057da1) scroll_pane_cp014

0xb072,	// (0x00058310) cell_large_graphic_popup_pane_ParamLimits

0xb072,	// (0x00058310) cell_large_graphic_popup_pane

0xb08a,	// (0x00058328) cell_large_graphic_popup_pane_g1_ParamLimits

0xb08a,	// (0x00058328) cell_large_graphic_popup_pane_g1

0xb096,	// (0x00058334) cell_large_graphic_popup_pane_g2_ParamLimits

0xb096,	// (0x00058334) cell_large_graphic_popup_pane_g2

0xb0a2,	// (0x00058340) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0a2,	// (0x00058340) cell_large_graphic_popup_pane_g3

0xb0af,	// (0x0005834d) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0af,	// (0x0005834d) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0005c61a) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0005c61a) cell_large_graphic_popup_pane_g

0xb0bf,	// (0x0005835d) grid_highlight_pane_cp010

0xa7e8,	// (0x00057a86) bg_popup_call_pane_g1

0xb0c9,	// (0x00058367) list_single_graphic_popup_conf_pane_ParamLimits

0xb0c9,	// (0x00058367) list_single_graphic_popup_conf_pane

0xb0dc,	// (0x0005837a) list_highlight_pane_cp01

0xb0e5,	// (0x00058383) list_single_graphic_popup_conf_pane_g1

0xb0ed,	// (0x0005838b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0005c623) list_single_graphic_popup_conf_pane_g

0xb0f5,	// (0x00058393) list_single_graphic_popup_conf_pane_t1

0xb103,	// (0x000583a1) linegrid_cams_pane_g1

0x3055,	// (0x000502f3) linegrid_cams_pane_g2

0xa8a0,	// (0x00057b3e) linegrid_cams_pane_g3

0xb10c,	// (0x000583aa) linegrid_cams_pane_g4

0x305e,	// (0x000502fc) linegrid_cams_pane_g5

0x3067,	// (0x00050305) linegrid_cams_pane_g6

0xa951,	// (0x00057bef) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0005c628) linegrid_cams_pane_g

0xb115,	// (0x000583b3) popup_clock_analogue_window

0xb115,	// (0x000583b3) popup_clock_digital_window

0x9b02,	// (0x00056da0) popup_phob_thumbnail_window

0xa7e8,	// (0x00057a86) call_video_uplink_pane_g1

0xb11e,	// (0x000583bc) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0005c637) call_video_uplink_pane_g

0xa91e,	// (0x00057bbc) video_uplink_pane

0xb126,	// (0x000583c4) mce_image_pane_g1

0x3072,	// (0x00050310) mce_image_pane_g2

0x307a,	// (0x00050318) mce_image_pane_g3

0x3082,	// (0x00050320) mce_image_pane_g4

0x308c,	// (0x0005032a) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0005c63c) mce_image_pane_g

0xb130,	// (0x000583ce) control_top_pane_stacon_cp01_ParamLimits

0xb130,	// (0x000583ce) control_top_pane_stacon_cp01

0xb144,	// (0x000583e2) uni_indicator_pane_stacon_cp01_ParamLimits

0xb144,	// (0x000583e2) uni_indicator_pane_stacon_cp01

0xb155,	// (0x000583f3) bg_popup_sub_pane_cp03

0x3094,	// (0x00050332) chi_dic_find_pane

0x309c,	// (0x0005033a) listscroll_chi_dic_pane

0x30a5,	// (0x00050343) main_pane_chidic_g1

0xb15f,	// (0x000583fd) chi_dic_find_pane_t1

0xb16d,	// (0x0005840b) find_chidic_pane

0xb176,	// (0x00058414) chi_dic_list_pane_ParamLimits

0xb176,	// (0x00058414) chi_dic_list_pane

0xb187,	// (0x00058425) scroll_pane_cp020

0xb18f,	// (0x0005842d) find_chidic_pane_t1

0x9b02,	// (0x00056da0) input_focus_pane_cp06

0x30b8,	// (0x00050356) list_chi_dic_pane_ParamLimits

0x30b8,	// (0x00050356) list_chi_dic_pane

0x30cb,	// (0x00050369) list_chi_dic_pane_t1_ParamLimits

0x30cb,	// (0x00050369) list_chi_dic_pane_t1

0x9b02,	// (0x00056da0) list_highlight_pane_cp020

0xb19e,	// (0x0005843c) bg_cale_heading_pane_g1

0x30de,	// (0x0005037c) bg_cale_heading_pane_g2

0x30e6,	// (0x00050384) bg_cale_heading_pane_g3

0x30ee,	// (0x0005038c) bg_cale_heading_pane_g4

0x30f8,	// (0x00050396) bg_cale_heading_pane_g5

0x3102,	// (0x000503a0) bg_cale_heading_pane_g6

0x310a,	// (0x000503a8) bg_cale_heading_pane_g7

0x3112,	// (0x000503b0) bg_cale_heading_pane_g8

0x311c,	// (0x000503ba) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0005c647) bg_cale_heading_pane_g

0xb19e,	// (0x0005843c) bg_cale_side_pane_g1

0x3126,	// (0x000503c4) bg_cale_side_pane_g2

0x312e,	// (0x000503cc) bg_cale_side_pane_g3

0x3136,	// (0x000503d4) bg_cale_side_pane_g4

0x313e,	// (0x000503dc) bg_cale_side_pane_g5

0x3146,	// (0x000503e4) bg_cale_side_pane_g6

0x314e,	// (0x000503ec) bg_cale_side_pane_g7

0x3156,	// (0x000503f4) bg_cale_side_pane_g8

0x315e,	// (0x000503fc) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0005c65a) bg_cale_side_pane_g

0x3166,	// (0x00050404) popup_call_status_window_ParamLimits

0x3166,	// (0x00050404) popup_call_status_window

0xb1a6,	// (0x00058444) stacon_top_pane

0xb1ae,	// (0x0005844c) status_pane_ParamLimits

0xb1ae,	// (0x0005844c) status_pane

0xb1c3,	// (0x00058461) status_small_pane

0xb1cb,	// (0x00058469) control_pane

0x9b02,	// (0x00056da0) stacon_bottom_pane

0xb1d3,	// (0x00058471) list_single_mce_smart_pane_t1_ParamLimits

0xb1d3,	// (0x00058471) list_single_mce_smart_pane_t1

0xb1e6,	// (0x00058484) list_single_mce_smart_pane_t2_ParamLimits

0xb1e6,	// (0x00058484) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0005c66d) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0005c66d) list_single_mce_smart_pane_t

0x31ad,	// (0x0005044b) compass_pane

0x31b6,	// (0x00050454) main_location2_pane_t1

0x31c8,	// (0x00050466) main_location2_pane_t2

0x31da,	// (0x00050478) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0005c672) main_location2_pane_t

0xb205,	// (0x000584a3) compass_pane_g1_ParamLimits

0xb205,	// (0x000584a3) compass_pane_g1

0x3220,	// (0x000504be) compass_pane_t1

0x322f,	// (0x000504cd) compass_pane_t2

0x0005,

0xf3dd,	// (0x0005c67b) compass_pane_t

0x3276,	// (0x00050514) text_secondary_cp61

0xb283,	// (0x00058521) navi_pane_cams_g5

0xb32e,	// (0x000585cc) navi_pane_im_t1

0xb33c,	// (0x000585da) navi_pane_mp_g1_ParamLimits

0xb33c,	// (0x000585da) navi_pane_mp_g1

0xb350,	// (0x000585ee) navi_pane_mp_g2_ParamLimits

0xb350,	// (0x000585ee) navi_pane_mp_g2

0xb35c,	// (0x000585fa) navi_pane_mp_g3_ParamLimits

0xb35c,	// (0x000585fa) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0005c68f) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0005c68f) navi_pane_mp_g

0xb368,	// (0x00058606) navi_pane_mp_t1

0xb376,	// (0x00058614) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0005c696) navi_pane_mp_t

0xb3e1,	// (0x0005867f) navi_pane_vt_g1

0xb368,	// (0x00058606) navi_pane_vt_t1

0xb3e9,	// (0x00058687) navi_slider_pane

0xb3f9,	// (0x00058697) zooming_pane

0xb401,	// (0x0005869f) navi_slider_pane_g1

0x9ce3,	// (0x00056f81) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0005c69d) navi_slider_pane_g

0xb425,	// (0x000586c3) aid_levels_zoom

0xb42d,	// (0x000586cb) zooming_pane_g1

0xb435,	// (0x000586d3) zooming_pane_g2

0xb435,	// (0x000586d3) zooming_pane_g3

0x0002,

0xf40e,	// (0x0005c6ac) zooming_pane_g

0xb43d,	// (0x000586db) level_10_zoom

0xb446,	// (0x000586e4) level_11_zoom

0xb44f,	// (0x000586ed) level_1_zoom

0xb458,	// (0x000586f6) level_2_zoom

0xb461,	// (0x000586ff) level_3_zoom

0xb46a,	// (0x00058708) level_4_zoom

0xb473,	// (0x00058711) level_5_zoom

0xb47c,	// (0x0005871a) level_6_zoom

0xb485,	// (0x00058723) level_7_zoom

0xb48e,	// (0x0005872c) level_8_zoom

0xb497,	// (0x00058735) level_9_zoom

0xb4a8,	// (0x00058746) popup_phob_thumbnail_window_g1

0xb4b0,	// (0x0005874e) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0005c6b3) popup_phob_thumbnail_window_g

0xc7a4,	// (0x00059a42) level_1_location

0xc7ac,	// (0x00059a4a) level_2_location

0xc7b4,	// (0x00059a52) level_3_location

0xc7bc,	// (0x00059a5a) level_4_location

0xb3f9,	// (0x00058697) level_5_location

0x32c7,	// (0x00050565) mce_icon_pane_g1

0x32d1,	// (0x0005056f) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0005c6b8) mce_icon_pane_g

0x32db,	// (0x00050579) main_mup_pane_g1_ParamLimits

0x32db,	// (0x00050579) main_mup_pane_g1

0x32f1,	// (0x0005058f) main_mup_pane_g2_ParamLimits

0x32f1,	// (0x0005058f) main_mup_pane_g2

0x3309,	// (0x000505a7) main_mup_pane_g3_ParamLimits

0x3309,	// (0x000505a7) main_mup_pane_g3

0x3321,	// (0x000505bf) main_mup_pane_g4_ParamLimits

0x3321,	// (0x000505bf) main_mup_pane_g4

0x3339,	// (0x000505d7) main_mup_pane_g5_ParamLimits

0x3339,	// (0x000505d7) main_mup_pane_g5

0x3355,	// (0x000505f3) main_mup_pane_g6_ParamLimits

0x3355,	// (0x000505f3) main_mup_pane_g6

0x336d,	// (0x0005060b) main_mup_pane_g7_ParamLimits

0x336d,	// (0x0005060b) main_mup_pane_g7

0x3385,	// (0x00050623) main_mup_pane_g8_ParamLimits

0x3385,	// (0x00050623) main_mup_pane_g8

0x339d,	// (0x0005063b) main_mup_pane_g9_ParamLimits

0x339d,	// (0x0005063b) main_mup_pane_g9

0x33b7,	// (0x00050655) main_mup_pane_g10_ParamLimits

0x33b7,	// (0x00050655) main_mup_pane_g10

0x33d1,	// (0x0005066f) main_mup_pane_g11_ParamLimits

0x33d1,	// (0x0005066f) main_mup_pane_g11

0x33e5,	// (0x00050683) main_mup_pane_g12_ParamLimits

0x33e5,	// (0x00050683) main_mup_pane_g12

0x33fb,	// (0x00050699) main_mup_pane_g13_ParamLimits

0x33fb,	// (0x00050699) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0005c6bd) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0005c6bd) main_mup_pane_g

0x340f,	// (0x000506ad) main_mup_pane_t1_ParamLimits

0x340f,	// (0x000506ad) main_mup_pane_t1

0x3429,	// (0x000506c7) main_mup_pane_t2_ParamLimits

0x3429,	// (0x000506c7) main_mup_pane_t2

0x3441,	// (0x000506df) main_mup_pane_t3_ParamLimits

0x3441,	// (0x000506df) main_mup_pane_t3

0x3459,	// (0x000506f7) main_mup_pane_t4_ParamLimits

0x3459,	// (0x000506f7) main_mup_pane_t4

0x3477,	// (0x00050715) main_mup_pane_t5_ParamLimits

0x3477,	// (0x00050715) main_mup_pane_t5

0x348c,	// (0x0005072a) main_mup_pane_t6_ParamLimits

0x348c,	// (0x0005072a) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0005c6d8) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0005c6d8) main_mup_pane_t

0x349e,	// (0x0005073c) mup_progress_pane_ParamLimits

0x349e,	// (0x0005073c) mup_progress_pane

0x34aa,	// (0x00050748) mup_visualizer_pane_ParamLimits

0x34aa,	// (0x00050748) mup_visualizer_pane

0x34de,	// (0x0005077c) mup_volume_pane_ParamLimits

0x34de,	// (0x0005077c) mup_volume_pane

0xb4b8,	// (0x00058756) mup_visualizer_pane_g1_ParamLimits

0xb4b8,	// (0x00058756) mup_visualizer_pane_g1

0xb4b8,	// (0x00058756) mup_visualizer_pane_g2_ParamLimits

0xb4b8,	// (0x00058756) mup_visualizer_pane_g2

0xb205,	// (0x000584a3) mup_visualizer_pane_g3_ParamLimits

0xb205,	// (0x000584a3) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0005c6e5) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0005c6e5) mup_visualizer_pane_g

0xa7e8,	// (0x00057a86) mup_volume_pane_g1

0xb4ce,	// (0x0005876c) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0005c6ec) mup_volume_pane_g

0xa7e8,	// (0x00057a86) mup_progress_pane_g1

0xb4d7,	// (0x00058775) mup_progress_pane_g2

0xb4e0,	// (0x0005877e) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0005c6f1) mup_progress_pane_g

0x9b02,	// (0x00056da0) bg_popup_window_pane_cp05

0xb4e9,	// (0x00058787) heading_pane_cp02_ParamLimits

0xb4e9,	// (0x00058787) heading_pane_cp02

0xb503,	// (0x000587a1) list_popup_blid_pane

0xb50b,	// (0x000587a9) list_blid_sat_info_pane_ParamLimits

0xb50b,	// (0x000587a9) list_blid_sat_info_pane

0xb51e,	// (0x000587bc) list_blid_sat_info_pane_g1

0xb526,	// (0x000587c4) list_blid_sat_info_pane_t1

0x35f4,	// (0x00050892) mup_equalizer_pane_ParamLimits

0x35f4,	// (0x00050892) mup_equalizer_pane

0x360d,	// (0x000508ab) mup_equalizer_pane_cp1_ParamLimits

0x360d,	// (0x000508ab) mup_equalizer_pane_cp1

0x362a,	// (0x000508c8) mup_equalizer_pane_cp2_ParamLimits

0x362a,	// (0x000508c8) mup_equalizer_pane_cp2

0x3647,	// (0x000508e5) mup_equalizer_pane_cp3_ParamLimits

0x3647,	// (0x000508e5) mup_equalizer_pane_cp3

0x3668,	// (0x00050906) mup_equalizer_pane_cp4_ParamLimits

0x3668,	// (0x00050906) mup_equalizer_pane_cp4

0x3689,	// (0x00050927) mup_equalizer_pane_cp5

0x369d,	// (0x0005093b) mup_equalizer_pane_cp6

0x36b1,	// (0x0005094f) mup_equalizer_pane_cp7

0xc6c2,	// (0x00059960) bg_popup_call_poc_act_pane_g9

0xc6ca,	// (0x00059968) bg_popup_call_poc_act_pane_g10

0xc6d2,	// (0x00059970) bg_popup_call_poc_act_pane_g11

0x000a,

0xa6af,	// (0x0005794d) mup_scale_pane

0xa7e8,	// (0x00057a86) mup_scale_pane_g1

0xb534,	// (0x000587d2) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0005c70d) mup_scale_pane_g

0xb558,	// (0x000587f6) msg_data_pane

0xb560,	// (0x000587fe) scroll_pane_cp017

0x36d7,	// (0x00050975) bg_list_pane_cp04_ParamLimits

0x36d7,	// (0x00050975) bg_list_pane_cp04

0xb568,	// (0x00058806) msg_data_pane_g1

0x36f7,	// (0x00050995) msg_data_pane_g2

0x36ff,	// (0x0005099d) msg_data_pane_g3

0x3707,	// (0x000509a5) msg_data_pane_g4

0x370f,	// (0x000509ad) msg_data_pane_g5

0x3717,	// (0x000509b5) msg_data_pane_g6

0x371f,	// (0x000509bd) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0005c71c) msg_data_pane_g

0x01a2,	// (0x0004d440) msg_text_pane_ParamLimits

0x01a2,	// (0x0004d440) msg_text_pane

0x3727,	// (0x000509c5) qrid_highlight_pane_cp011_ParamLimits

0x3727,	// (0x000509c5) qrid_highlight_pane_cp011

0x9b02,	// (0x00056da0) msg_body_pane

0x9b02,	// (0x00056da0) msg_header_pane

0xb570,	// (0x0005880e) input_focus_pane_cp07

0x3748,	// (0x000509e6) msg_header_pane_t1_ParamLimits

0x3748,	// (0x000509e6) msg_header_pane_t1

0x375a,	// (0x000509f8) msg_header_pane_t2_ParamLimits

0x375a,	// (0x000509f8) msg_header_pane_t2

0x0001,

0xf492,	// (0x0005c730) msg_header_pane_t_ParamLimits

0xf492,	// (0x0005c730) msg_header_pane_t

0xb585,	// (0x00058823) msg_body_pane_g1

0x376c,	// (0x00050a0a) msg_body_pane_t1_ParamLimits

0x376c,	// (0x00050a0a) msg_body_pane_t1

0x379d,	// (0x00050a3b) msg_body_pane_t2_ParamLimits

0x379d,	// (0x00050a3b) msg_body_pane_t2

0x37af,	// (0x00050a4d) msg_body_pane_t3_ParamLimits

0x37af,	// (0x00050a4d) msg_body_pane_t3

0x0002,

0xf497,	// (0x0005c735) msg_body_pane_t_ParamLimits

0xf497,	// (0x0005c735) msg_body_pane_t

0x37fb,	// (0x00050a99) main_viewer_pane_g1_ParamLimits

0x37fb,	// (0x00050a99) main_viewer_pane_g1

0x3809,	// (0x00050aa7) main_viewer_pane_g2_ParamLimits

0x3809,	// (0x00050aa7) main_viewer_pane_g2

0x3817,	// (0x00050ab5) main_viewer_pane_g3_ParamLimits

0x3817,	// (0x00050ab5) main_viewer_pane_g3

0x3826,	// (0x00050ac4) main_viewer_pane_g4_ParamLimits

0x3826,	// (0x00050ac4) main_viewer_pane_g4

0x9d0d,	// (0x00056fab) main_viewer_pane_g5_ParamLimits

0x9d0d,	// (0x00056fab) main_viewer_pane_g5

0x9d0d,	// (0x00056fab) main_viewer_pane_g7_ParamLimits

0x9d0d,	// (0x00056fab) main_viewer_pane_g7

0x9d1f,	// (0x00056fbd) main_viewer_pane_g8_ParamLimits

0x9d1f,	// (0x00056fbd) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0005c745) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0005c745) main_viewer_pane_g

0xb58d,	// (0x0005882b) viewer_content_pane_ParamLimits

0xb58d,	// (0x0005882b) viewer_content_pane

0x3862,	// (0x00050b00) main_postcard_pane_g1_ParamLimits

0x3862,	// (0x00050b00) main_postcard_pane_g1

0x3878,	// (0x00050b16) main_postcard_pane_g2_ParamLimits

0x3878,	// (0x00050b16) main_postcard_pane_g2

0x388e,	// (0x00050b2c) main_postcard_pane_g3_ParamLimits

0x388e,	// (0x00050b2c) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0005c756) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0005c756) main_postcard_pane_g

0x38a5,	// (0x00050b43) main_postcard_pane_g4

0xc8a4,	// (0x00059b42) smil_status_volume_pane_g2

0x38e8,	// (0x00050b86) postcard_pane_ParamLimits

0x38e8,	// (0x00050b86) postcard_pane

0xb59b,	// (0x00058839) postcard_pane_g1_ParamLimits

0xb59b,	// (0x00058839) postcard_pane_g1

0x392a,	// (0x00050bc8) postcard_pane_g2_ParamLimits

0x392a,	// (0x00050bc8) postcard_pane_g2

0x3936,	// (0x00050bd4) postcard_pane_g3_ParamLimits

0x3936,	// (0x00050bd4) postcard_pane_g3

0xb5a9,	// (0x00058847) postcard_pane_g4_ParamLimits

0xb5a9,	// (0x00058847) postcard_pane_g4

0x3942,	// (0x00050be0) postcard_pane_g5_ParamLimits

0x3942,	// (0x00050be0) postcard_pane_g5

0x3957,	// (0x00050bf5) postcard_pane_g6_ParamLimits

0x3957,	// (0x00050bf5) postcard_pane_g6

0xb59b,	// (0x00058839) postcard_pane_g7_ParamLimits

0xb59b,	// (0x00058839) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0005c763) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0005c763) postcard_pane_g

0x396b,	// (0x00050c09) main_mp2_pane_g1_ParamLimits

0x396b,	// (0x00050c09) main_mp2_pane_g1

0x3977,	// (0x00050c15) main_mp2_pane_g2_ParamLimits

0x3977,	// (0x00050c15) main_mp2_pane_g2

0x3983,	// (0x00050c21) main_mp2_pane_g3_ParamLimits

0x3983,	// (0x00050c21) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0005c772) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0005c772) main_mp2_pane_g

0x398f,	// (0x00050c2d) main_mp2_pane_t1_ParamLimits

0x398f,	// (0x00050c2d) main_mp2_pane_t1

0x39a4,	// (0x00050c42) main_mp2_pane_t2_ParamLimits

0x39a4,	// (0x00050c42) main_mp2_pane_t2

0x39b6,	// (0x00050c54) main_mp2_pane_t3_ParamLimits

0x39b6,	// (0x00050c54) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0005c779) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0005c779) main_mp2_pane_t

0xb5b7,	// (0x00058855) pec_content_pane_ParamLimits

0xb5b7,	// (0x00058855) pec_content_pane

0xab03,	// (0x00057da1) scroll_pane_cp015

0xb5c9,	// (0x00058867) pec_attribute_pane_ParamLimits

0xb5c9,	// (0x00058867) pec_attribute_pane

0x39c8,	// (0x00050c66) pec_content_pane_g1_ParamLimits

0x39c8,	// (0x00050c66) pec_content_pane_g1

0xb5d9,	// (0x00058877) pec_content_pane_t1_ParamLimits

0xb5d9,	// (0x00058877) pec_content_pane_t1

0xb5eb,	// (0x00058889) pec_content_pane_t2_ParamLimits

0xb5eb,	// (0x00058889) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0005c780) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0005c780) pec_content_pane_t

0x39d4,	// (0x00050c72) list_single_graphic_pane_cp01_ParamLimits

0x39d4,	// (0x00050c72) list_single_graphic_pane_cp01

0xa6af,	// (0x0005794d) bg_popup_sub_pane_cp04

0xb5fd,	// (0x0005889b) popup_mup_playback_window_g1

0xb609,	// (0x000588a7) popup_mup_playback_window_t1

0xb61e,	// (0x000588bc) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0005c785) popup_mup_playback_window_t

0xb655,	// (0x000588f3) main_image_pane_g1_ParamLimits

0xb655,	// (0x000588f3) main_image_pane_g1

0xb698,	// (0x00058936) scroll_pane_cp018_ParamLimits

0xb698,	// (0x00058936) scroll_pane_cp018

0xb6b0,	// (0x0005894e) scroll_pane_cp016_ParamLimits

0xb6b0,	// (0x0005894e) scroll_pane_cp016

0x3aa3,	// (0x00050d41) smil2_image_pane_ParamLimits

0x3aa3,	// (0x00050d41) smil2_image_pane

0x3ad7,	// (0x00050d75) smil2_root_pane_ParamLimits

0x3ad7,	// (0x00050d75) smil2_root_pane

0x3b0f,	// (0x00050dad) smil2_text_pane_ParamLimits

0x3b0f,	// (0x00050dad) smil2_text_pane

0x9b02,	// (0x00056da0) bg_list_pane_cp06

0xb6ec,	// (0x0005898a) grid_radio_pane

0x9b02,	// (0x00056da0) bg_popup_window_pane_cp06

0xb6f4,	// (0x00058992) main_fmradio_pane_t1

0xb048,	// (0x000582e6) heading_pane_cp04

0xb702,	// (0x000589a0) main_fmradio_pane_t2

0xc6da,	// (0x00059978) popup_cale_lunar_info_window_g1

0xb710,	// (0x000589ae) main_fmradio_pane_t3

0xc6e2,	// (0x00059980) popup_cale_lunar_info_window_g2

0xb71e,	// (0x000589bc) main_fmradio_pane_t4

0x0001,

0xb72c,	// (0x000589ca) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0005c860) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0005c79a) main_fmradio_pane_t

0xb73a,	// (0x000589d8) wait_bar_pane_cp03

0xb742,	// (0x000589e0) cell_fmradio_pane_ParamLimits

0xb742,	// (0x000589e0) cell_fmradio_pane

0xb59b,	// (0x00058839) cell_fmradio_pane_g1_ParamLimits

0xb59b,	// (0x00058839) cell_fmradio_pane_g1

0x9b02,	// (0x00056da0) grid_highlight_pane_cp011

0xb755,	// (0x000589f3) poc_content_pane_ParamLimits

0xb755,	// (0x000589f3) poc_content_pane

0xb767,	// (0x00058a05) scroll_pane_cp019

0x3b8f,	// (0x00050e2d) popup_call_poc_act_window_ParamLimits

0x3b8f,	// (0x00050e2d) popup_call_poc_act_window

0x3bb3,	// (0x00050e51) popup_call_poc_inact_window_ParamLimits

0x3bb3,	// (0x00050e51) popup_call_poc_inact_window

0xf599,	// (0x0005c837) bg_popup_call_poc_act_pane_g

0xc652,	// (0x000598f0) bg_popup_call_poc_inact_pane_g1

0xc65a,	// (0x000598f8) bg_popup_call_poc_inact_pane_g2

0xb76f,	// (0x00058a0d) popup_call_poc_act_window_g2

0xc662,	// (0x00059900) bg_popup_call_poc_inact_pane_g3

0xc66a,	// (0x00059908) bg_popup_call_poc_inact_pane_g4

0xc672,	// (0x00059910) bg_popup_call_poc_inact_pane_g5

0xb777,	// (0x00058a15) popup_call_poc_act_window_t1_ParamLimits

0xb777,	// (0x00058a15) popup_call_poc_act_window_t1

0xb79f,	// (0x00058a3d) popup_call_poc_act_window_t2_ParamLimits

0xb79f,	// (0x00058a3d) popup_call_poc_act_window_t2

0xb7c7,	// (0x00058a65) popup_call_poc_act_window_t3_ParamLimits

0xb7c7,	// (0x00058a65) popup_call_poc_act_window_t3

0xb7ef,	// (0x00058a8d) popup_call_poc_act_window_t4_ParamLimits

0xb7ef,	// (0x00058a8d) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0005c7a5) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0005c7a5) popup_call_poc_act_window_t

0xc67a,	// (0x00059918) bg_popup_call_poc_inact_pane_g6

0xc682,	// (0x00059920) bg_popup_call_poc_inact_pane_g7

0xc68a,	// (0x00059928) bg_popup_call_poc_inact_pane_g8

0xb801,	// (0x00058a9f) popup_call_poc_inact_window_g2

0xc692,	// (0x00059930) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0005c824) bg_popup_call_poc_inact_pane_g

0xb809,	// (0x00058aa7) popup_call_poc_inact_window_t1_ParamLimits

0xb809,	// (0x00058aa7) popup_call_poc_inact_window_t1

0xb81e,	// (0x00058abc) popup_call_poc_inact_window_t2_ParamLimits

0xb81e,	// (0x00058abc) popup_call_poc_inact_window_t2

0xb833,	// (0x00058ad1) popup_call_poc_inact_window_t3_ParamLimits

0xb833,	// (0x00058ad1) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0005c7ae) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0005c7ae) popup_call_poc_inact_window_t

0xc817,	// (0x00059ab5) context_pane_ParamLimits

0x43d4,	// (0x00051672) signal_pane_ParamLimits

0xb3f9,	// (0x00058697) main_call2_pane

0x9d64,	// (0x00057002) popup_phob_thumbnail2_window_ParamLimits

0x9d64,	// (0x00057002) popup_phob_thumbnail2_window

0x9cf5,	// (0x00056f93) aid_hotspot_pointer_arrow_pane

0x9cfd,	// (0x00056f9b) aid_hotspot_pointer_hand_pane

0x3efe,	// (0x0005119c) phob_pre_status_pane_g5

0x1b05,	// (0x0004eda3) cams_zoom_pane_ParamLimits

0x1b14,	// (0x0004edb2) image_vga_pane_ParamLimits

0x1b2e,	// (0x0004edcc) main_camera_pane_g1_ParamLimits

0x1b40,	// (0x0004edde) main_camera_pane_g2_ParamLimits

0x1b50,	// (0x0004edee) main_camera_pane_g3_ParamLimits

0x1b62,	// (0x0004ee00) main_camera_pane_g4_ParamLimits

0x1b74,	// (0x0004ee12) main_camera_pane_g5_ParamLimits

0x1b86,	// (0x0004ee24) main_camera_pane_g6_ParamLimits

0x1b98,	// (0x0004ee36) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0005c4ad) main_camera_pane_g_ParamLimits

0x1baa,	// (0x0004ee48) main_camera_pane_t1_ParamLimits

0x1bc0,	// (0x0004ee5e) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0005c4be) main_camera_pane_t_ParamLimits

0xa6af,	// (0x0005794d) bg_popup_preview_window_pane_cp01_ParamLimits

0xa6af,	// (0x0005794d) bg_popup_preview_window_pane_cp01

0xb848,	// (0x00058ae6) popup_phob_thumbnail2_window_g1_ParamLimits

0xb848,	// (0x00058ae6) popup_phob_thumbnail2_window_g1

0x9b02,	// (0x00056da0) call2_cli_visual_pane

0x3be7,	// (0x00050e85) popup_call2_audio_conf_window_ParamLimits

0x3be7,	// (0x00050e85) popup_call2_audio_conf_window

0x3c07,	// (0x00050ea5) popup_call2_audio_first_window_ParamLimits

0x3c07,	// (0x00050ea5) popup_call2_audio_first_window

0x3c9d,	// (0x00050f3b) popup_call2_audio_in_window_ParamLimits

0x3c9d,	// (0x00050f3b) popup_call2_audio_in_window

0x3ce5,	// (0x00050f83) popup_call2_audio_out_window_ParamLimits

0x3ce5,	// (0x00050f83) popup_call2_audio_out_window

0x3d4f,	// (0x00050fed) popup_call2_audio_second_window_ParamLimits

0x3d4f,	// (0x00050fed) popup_call2_audio_second_window

0x3db5,	// (0x00051053) popup_call2_audio_wait_window_ParamLimits

0x3db5,	// (0x00051053) popup_call2_audio_wait_window

0x9b02,	// (0x00056da0) bg_popup_call2_act_pane_cp03

0xa691,	// (0x0005792f) list_conf_pane_cp

0xb854,	// (0x00058af2) popup_call2_audio_conf_window_t1

0xb862,	// (0x00058b00) list_single_graphic_popup_conf2_pane_ParamLimits

0xb862,	// (0x00058b00) list_single_graphic_popup_conf2_pane

0xb0dc,	// (0x0005837a) list_highlight_pane_cp04

0xb875,	// (0x00058b13) list_single_graphic_popup_conf2_pane_g1

0xb0ed,	// (0x0005838b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0005c7b5) list_single_graphic_popup_conf2_pane_g

0xb87f,	// (0x00058b1d) list_single_graphic_popup_conf2_pane_t1

0xb88d,	// (0x00058b2b) bg_popup_call2_act_pane_cp01_ParamLimits

0xb88d,	// (0x00058b2b) bg_popup_call2_act_pane_cp01

0xb917,	// (0x00058bb5) call_type_pane_cp05_ParamLimits

0xb917,	// (0x00058bb5) call_type_pane_cp05

0xb96b,	// (0x00058c09) popup_call2_audio_second_window_g1_ParamLimits

0xb96b,	// (0x00058c09) popup_call2_audio_second_window_g1

0xb9bf,	// (0x00058c5d) popup_call2_audio_second_window_g2_ParamLimits

0xb9bf,	// (0x00058c5d) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0005c7ba) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0005c7ba) popup_call2_audio_second_window_g

0xba24,	// (0x00058cc2) popup_call2_audio_second_window_t1_ParamLimits

0xba24,	// (0x00058cc2) popup_call2_audio_second_window_t1

0xbadf,	// (0x00058d7d) popup_call2_audio_second_window_t2_ParamLimits

0xbadf,	// (0x00058d7d) popup_call2_audio_second_window_t2

0xbb32,	// (0x00058dd0) popup_call2_audio_second_window_t3_ParamLimits

0xbb32,	// (0x00058dd0) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0005c7c1) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0005c7c1) popup_call2_audio_second_window_t

0x9b02,	// (0x00056da0) bg_popup_call2_in_pane_cp02

0x9b0c,	// (0x00056daa) call_type_pane_cp04

0x9b14,	// (0x00056db2) popup_call2_audio_wait_window_g1

0x9b1c,	// (0x00056dba) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0005c39a) popup_call2_audio_wait_window_g

0x9b24,	// (0x00056dc2) popup_call2_audio_wait_window_t3

0xbc25,	// (0x00058ec3) bg_popup_call2_act_pane_ParamLimits

0xbc25,	// (0x00058ec3) bg_popup_call2_act_pane

0xbce5,	// (0x00058f83) call_type_pane_cp03_ParamLimits

0xbce5,	// (0x00058f83) call_type_pane_cp03

0xbd49,	// (0x00058fe7) popup_call2_audio_first_window_g1_ParamLimits

0xbd49,	// (0x00058fe7) popup_call2_audio_first_window_g1

0xbdb9,	// (0x00059057) popup_call2_audio_first_window_g2_ParamLimits

0xbdb9,	// (0x00059057) popup_call2_audio_first_window_g2

0xb4b8,	// (0x00058756) popup_call2_audio_first_window_g3_ParamLimits

0xb4b8,	// (0x00058756) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0005c7ca) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0005c7ca) popup_call2_audio_first_window_g

0xbe97,	// (0x00059135) popup_call2_audio_first_window_t1_ParamLimits

0xbe97,	// (0x00059135) popup_call2_audio_first_window_t1

0xbf9a,	// (0x00059238) popup_call2_audio_first_window_t4_ParamLimits

0xbf9a,	// (0x00059238) popup_call2_audio_first_window_t4

0xc07d,	// (0x0005931b) popup_call2_audio_first_window_t5_ParamLimits

0xc07d,	// (0x0005931b) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0005c7d5) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0005c7d5) popup_call2_audio_first_window_t

0xa6a7,	// (0x00057945) bg_popup_call2_act_pane_g1

0xc6ea,	// (0x00059988) popup_cale_lunar_info_window_t1

0xc6f8,	// (0x00059996) popup_cale_lunar_info_window_t2

0xc706,	// (0x000599a4) popup_cale_lunar_info_window_t3

0x9b02,	// (0x00056da0) bg_popup_call2_bubble_pane

0xc17e,	// (0x0005941c) bg_popup_call2_in_pane_cp01_ParamLimits

0xc17e,	// (0x0005941c) bg_popup_call2_in_pane_cp01

0x97de,	// (0x00056a7c) call_type_pane_cp02

0xc1c6,	// (0x00059464) popup_call2_audio_out_window_g1_ParamLimits

0xc1c6,	// (0x00059464) popup_call2_audio_out_window_g1

0xc1f2,	// (0x00059490) popup_call2_audio_out_window_g2_ParamLimits

0xc1f2,	// (0x00059490) popup_call2_audio_out_window_g2

0xc21a,	// (0x000594b8) popup_call2_audio_out_window_g3_ParamLimits

0xc21a,	// (0x000594b8) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0005c7de) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0005c7de) popup_call2_audio_out_window_g

0xc255,	// (0x000594f3) popup_call2_audio_out_window_t1_ParamLimits

0xc255,	// (0x000594f3) popup_call2_audio_out_window_t1

0xc2b4,	// (0x00059552) popup_call2_audio_out_window_t2_ParamLimits

0xc2b4,	// (0x00059552) popup_call2_audio_out_window_t2

0xc308,	// (0x000595a6) popup_call2_audio_out_window_t3_ParamLimits

0xc308,	// (0x000595a6) popup_call2_audio_out_window_t3

0xc31e,	// (0x000595bc) popup_call2_audio_out_window_t4_ParamLimits

0xc31e,	// (0x000595bc) popup_call2_audio_out_window_t4

0xc334,	// (0x000595d2) popup_call2_audio_out_window_t5_ParamLimits

0xc334,	// (0x000595d2) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0005c7e7) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0005c7e7) popup_call2_audio_out_window_t

0xc398,	// (0x00059636) bg_popup_call2_in_pane_ParamLimits

0xc398,	// (0x00059636) bg_popup_call2_in_pane

0xc3f4,	// (0x00059692) popup_call2_audio_in_window_g1_ParamLimits

0xc3f4,	// (0x00059692) popup_call2_audio_in_window_g1

0xc42c,	// (0x000596ca) popup_call2_audio_in_window_g2_ParamLimits

0xc42c,	// (0x000596ca) popup_call2_audio_in_window_g2

0xc464,	// (0x00059702) popup_call2_audio_in_window_g3_ParamLimits

0xc464,	// (0x00059702) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0005c7f4) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0005c7f4) popup_call2_audio_in_window_g

0xc4bc,	// (0x0005975a) popup_call2_audio_in_window_t1_ParamLimits

0xc4bc,	// (0x0005975a) popup_call2_audio_in_window_t1

0xc53c,	// (0x000597da) popup_call2_audio_in_window_t2_ParamLimits

0xc53c,	// (0x000597da) popup_call2_audio_in_window_t2

0xc5bc,	// (0x0005985a) popup_call2_audio_in_window_t3_ParamLimits

0xc5bc,	// (0x0005985a) popup_call2_audio_in_window_t3

0xc5d6,	// (0x00059874) popup_call2_audio_in_window_t4_ParamLimits

0xc5d6,	// (0x00059874) popup_call2_audio_in_window_t4

0xc5e8,	// (0x00059886) popup_call2_audio_in_window_t5_ParamLimits

0xc5e8,	// (0x00059886) popup_call2_audio_in_window_t5

0xc5fd,	// (0x0005989b) popup_call2_audio_in_window_t6_ParamLimits

0xc5fd,	// (0x0005989b) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0005c7fd) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0005c7fd) popup_call2_audio_in_window_t

0xa6a7,	// (0x00057945) bg_popup_call2_in_pane_g1

0xc714,	// (0x000599b2) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0005c865) popup_cale_lunar_info_window_t

0xa6af,	// (0x0005794d) bg_popup_call2_rect_pane_ParamLimits

0xa6af,	// (0x0005794d) bg_popup_call2_rect_pane

0x9b02,	// (0x00056da0) call2_cli_visual_graphic_pane

0x9b02,	// (0x00056da0) call2_cli_visual_text_pane

0x9d8b,	// (0x00057029) smil_status_volume_pane_g3

0x0002,

0xa7e8,	// (0x00057a86) call2_cli_visual_graphic_pane_g1

0xa7e8,	// (0x00057a86) call2_cli_visual_graphic_pane_g2

0xa7e8,	// (0x00057a86) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0005c80a) call2_cli_visual_graphic_pane_g

0xc612,	// (0x000598b0) bg_popup_call2_rect_pane_g1

0xa886,	// (0x00057b24) bg_popup_call2_rect_pane_g2

0xc61a,	// (0x000598b8) bg_popup_call2_rect_pane_g3

0xc622,	// (0x000598c0) bg_popup_call2_rect_pane_g4

0xc62a,	// (0x000598c8) bg_popup_call2_rect_pane_g5

0xc632,	// (0x000598d0) bg_popup_call2_rect_pane_g6

0xc63a,	// (0x000598d8) bg_popup_call2_rect_pane_g7

0xc642,	// (0x000598e0) bg_popup_call2_rect_pane_g8

0xc64a,	// (0x000598e8) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0005c811) bg_popup_call2_rect_pane_g

0xc652,	// (0x000598f0) bg_popup_call2_bubble_pane_g1

0xc65a,	// (0x000598f8) bg_popup_call2_bubble_pane_g2

0xc662,	// (0x00059900) bg_popup_call2_bubble_pane_g3

0xc66a,	// (0x00059908) bg_popup_call2_bubble_pane_g4

0xc672,	// (0x00059910) bg_popup_call2_bubble_pane_g5

0xc67a,	// (0x00059918) bg_popup_call2_bubble_pane_g6

0xc682,	// (0x00059920) bg_popup_call2_bubble_pane_g7

0xc68a,	// (0x00059928) bg_popup_call2_bubble_pane_g8

0xc692,	// (0x00059930) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0005c824) bg_popup_call2_bubble_pane_g

0x145a,	// (0x0004e6f8) aid_cale_week_size_cell_pane

0x1bd8,	// (0x0004ee76) aid_cams_cif_uncrop_pane_ParamLimits

0x1bd8,	// (0x0004ee76) aid_cams_cif_uncrop_pane

0x1d8d,	// (0x0004f02b) aid_cams_size_cell_ParamLimits

0x1d8d,	// (0x0004f02b) aid_cams_size_cell

0x1da1,	// (0x0004f03f) grid_cams_pane_ParamLimits

0x1dbb,	// (0x0004f059) linegrid_cams_pane_ParamLimits

0x1f3b,	// (0x0004f1d9) call_video_pane_t1

0x1f59,	// (0x0004f1f7) call_video_pane_t2

0x0001,

0xf273,	// (0x0005c511) call_video_pane_t

0x2388,	// (0x0004f626) aid_cale_month_size_cell_pane_ParamLimits

0x2388,	// (0x0004f626) aid_cale_month_size_cell_pane

0xf610,	// (0x0005c8ae) smil_status_volume_pane_g

0x9d98,	// (0x00057036) volume_smil_pane_ParamLimits

0x9699,	// (0x00056937) aid_popup2_width_pane

0x13b1,	// (0x0004e64f) cell_qdial_pane_g4_ParamLimits

0x13b1,	// (0x0004e64f) cell_qdial_pane_g4

0x3200,	// (0x0005049e) aid_blid_cardinal_pane_ParamLimits

0x320c,	// (0x000504aa) aid_blid_destination_pane_ParamLimits

0x320c,	// (0x000504aa) aid_blid_destination_pane

0xa6af,	// (0x0005794d) bg_popup_call_poc_act_pane_ParamLimits

0xa6af,	// (0x0005794d) bg_popup_call_poc_act_pane

0xa6af,	// (0x0005794d) bg_popup_call_poc_inact_pane_ParamLimits

0xa6af,	// (0x0005794d) bg_popup_call_poc_inact_pane

0xc69a,	// (0x00059938) bg_popup_call_poc_act_pane_g1

0xc6a2,	// (0x00059940) bg_popup_call_poc_act_pane_g2

0xc6aa,	// (0x00059948) bg_popup_call_poc_act_pane_g3

0xc66a,	// (0x00059908) bg_popup_call_poc_act_pane_g4

0xc672,	// (0x00059910) bg_popup_call_poc_act_pane_g5

0xc6b2,	// (0x00059950) bg_popup_call_poc_act_pane_g6

0xc682,	// (0x00059920) bg_popup_call_poc_act_pane_g7

0xc6ba,	// (0x00059958) bg_popup_call_poc_act_pane_g8

0x9b02,	// (0x00056da0) main_usb_pane

0x9d3f,	// (0x00056fdd) popup_cale_lunar_info_window

0x2223,	// (0x0004f4c1) im_reading_pane_t1_ParamLimits

0xaa5b,	// (0x00057cf9) list_im_pane_ParamLimits

0xaa6c,	// (0x00057d0a) scroll_pane_cp07_ParamLimits

0x9b02,	// (0x00056da0) grid_highlight_pane_cp012

0xa6af,	// (0x0005794d) mup_scale_pane_ParamLimits

0xb59b,	// (0x00058839) main_usb_pane_g1_ParamLimits

0xb59b,	// (0x00058839) main_usb_pane_g1

0x3e13,	// (0x000510b1) main_usb_pane_g2_ParamLimits

0x3e13,	// (0x000510b1) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0005c84e) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0005c84e) main_usb_pane_g

0x3e29,	// (0x000510c7) main_usb_pane_t1_ParamLimits

0x3e29,	// (0x000510c7) main_usb_pane_t1

0x3e3b,	// (0x000510d9) main_usb_pane_t2_ParamLimits

0x3e3b,	// (0x000510d9) main_usb_pane_t2

0x3e4d,	// (0x000510eb) main_usb_pane_t3_ParamLimits

0x3e4d,	// (0x000510eb) main_usb_pane_t3

0x3e5f,	// (0x000510fd) main_usb_pane_t4_ParamLimits

0x3e5f,	// (0x000510fd) main_usb_pane_t4

0x3e71,	// (0x0005110f) main_usb_pane_t5_ParamLimits

0x3e71,	// (0x0005110f) main_usb_pane_t5

0x3e83,	// (0x00051121) main_usb_pane_t6_ParamLimits

0x3e83,	// (0x00051121) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0005c853) main_usb_pane_t_ParamLimits

0x31ad,	// (0x0005044b) aid_text_placing

0x31b6,	// (0x00050454) main_location2_pane_t1_ParamLimits

0x31c8,	// (0x00050466) main_location2_pane_t2_ParamLimits

0x31da,	// (0x00050478) main_location2_pane_t3_ParamLimits

0x31ee,	// (0x0005048c) main_location2_pane_t4_ParamLimits

0x31ee,	// (0x0005048c) main_location2_pane_t4

0xf3d4,	// (0x0005c672) main_location2_pane_t_ParamLimits

0xa6eb,	// (0x00057989) find_pinb_pane_g2_ParamLimits

0xa6eb,	// (0x00057989) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0005c3c0) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0005c3c0) find_pinb_pane_g

0xa6f7,	// (0x00057995) find_pinb_pane_t1_ParamLimits

0xa709,	// (0x000579a7) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0005c3c5) find_pinb_pane_t_ParamLimits

0x9b02,	// (0x00056da0) main_call3_pane

0x286b,	// (0x0004fb09) cale_month_day_heading_pane_t1_ParamLimits

0x28f1,	// (0x0004fb8f) cale_month_day_heading_pane_t2_ParamLimits

0x2982,	// (0x0004fc20) cale_month_day_heading_pane_t3_ParamLimits

0x2a13,	// (0x0004fcb1) cale_month_day_heading_pane_t4_ParamLimits

0x2aac,	// (0x0004fd4a) cale_month_day_heading_pane_t5_ParamLimits

0x2b4d,	// (0x0004fdeb) cale_month_day_heading_pane_t6_ParamLimits

0x2bee,	// (0x0004fe8c) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0005c549) cale_month_day_heading_pane_t_ParamLimits

0xacb6,	// (0x00057f54) smil_status_volume_pane

0x3906,	// (0x00050ba4) postcard_address_pane_ParamLimits

0x3906,	// (0x00050ba4) postcard_address_pane

0x3918,	// (0x00050bb6) postcard_message_pane_ParamLimits

0x3918,	// (0x00050bb6) postcard_message_pane

0x3def,	// (0x0005108d) call2_cli_visual_pane_t1_ParamLimits

0x3def,	// (0x0005108d) call2_cli_visual_pane_t1

0x4603,	// (0x000518a1) postcard_message_pane_t1_ParamLimits

0x4603,	// (0x000518a1) postcard_message_pane_t1

0x45ec,	// (0x0005188a) postcard_address_pane_t1_ParamLimits

0x45ec,	// (0x0005188a) postcard_address_pane_t1

0x45d8,	// (0x00051876) popup_call3_audio_in_window_ParamLimits

0x45d8,	// (0x00051876) popup_call3_audio_in_window

0x4465,	// (0x00051703) bg_popup_call3_in_pane_ParamLimits

0x4465,	// (0x00051703) bg_popup_call3_in_pane

0x44d9,	// (0x00051777) popup_call3_audio_in_window_g1_ParamLimits

0x44d9,	// (0x00051777) popup_call3_audio_in_window_g1

0x44f9,	// (0x00051797) popup_call3_audio_in_window_g2_ParamLimits

0x44f9,	// (0x00051797) popup_call3_audio_in_window_g2

0x4519,	// (0x000517b7) popup_call3_audio_in_window_g3_ParamLimits

0x4519,	// (0x000517b7) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0005c8b5) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0005c8b5) popup_call3_audio_in_window_g

0x454a,	// (0x000517e8) popup_call3_audio_in_window_t1_ParamLimits

0x454a,	// (0x000517e8) popup_call3_audio_in_window_t1

0x4588,	// (0x00051826) popup_call3_audio_in_window_t2_ParamLimits

0x4588,	// (0x00051826) popup_call3_audio_in_window_t2

0x45c6,	// (0x00051864) popup_call3_audio_in_window_t3_ParamLimits

0x45c6,	// (0x00051864) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0005c8be) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0005c8be) popup_call3_audio_in_window_t

0xb3f9,	// (0x00058697) bg_popup_call3_rect_pane

0xc612,	// (0x000598b0) bg_popup_call3_rect_pane_g1

0xa886,	// (0x00057b24) bg_popup_call3_rect_pane_g2

0xc61a,	// (0x000598b8) bg_popup_call3_rect_pane_g3

0xc622,	// (0x000598c0) bg_popup_call3_rect_pane_g4

0xc62a,	// (0x000598c8) bg_popup_call3_rect_pane_g5

0xc632,	// (0x000598d0) bg_popup_call3_rect_pane_g6

0xc63a,	// (0x000598d8) bg_popup_call3_rect_pane_g7

0x34f4,	// (0x00050792) mup_visualizer_osc_pane

0xb4c6,	// (0x00058764) mup_visualizer_spec_pane

0x4495,	// (0x00051733) call3_video_qcif_pane_ParamLimits

0x4495,	// (0x00051733) call3_video_qcif_pane

0x44a6,	// (0x00051744) call3_video_qcif_uncrop_pane_ParamLimits

0x44a6,	// (0x00051744) call3_video_qcif_uncrop_pane

0x44b4,	// (0x00051752) call3_video_subqcif_pane_ParamLimits

0x44b4,	// (0x00051752) call3_video_subqcif_pane

0x44c8,	// (0x00051766) call3_video_subqcif_uncrop_pane_ParamLimits

0x44c8,	// (0x00051766) call3_video_subqcif_uncrop_pane

0x4539,	// (0x000517d7) popup_call3_audio_in_window_g4_ParamLimits

0x4539,	// (0x000517d7) popup_call3_audio_in_window_g4

0x4454,	// (0x000516f2) mup_spec_half_pane

0x445d,	// (0x000516fb) mup_spec_half_pane_cp

0xc877,	// (0x00059b15) mup_osc_middle_pane

0xc880,	// (0x00059b1e) mup_visualizer_osc_pane_g1

0x4434,	// (0x000516d2) mup_spec_bar_pane_ParamLimits

0x4434,	// (0x000516d2) mup_spec_bar_pane

0xc864,	// (0x00059b02) mup_spec_bar_pane_g1

0xc86e,	// (0x00059b0c) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0005c8a9) mup_spec_bar_pane_g

0x145a,	// (0x0004e6f8) aid_cale_week_size_cell_pane_ParamLimits

0x1474,	// (0x0004e712) bg_cale_heading_pane_ParamLimits

0xa8c3,	// (0x00057b61) bg_cale_pane_cp01_ParamLimits

0x1492,	// (0x0004e730) cale_week_corner_pane_ParamLimits

0x14b1,	// (0x0004e74f) cale_week_day_heading_pane_ParamLimits

0x14d4,	// (0x0004e772) cale_week_scroll_pane_g1_ParamLimits

0x14ed,	// (0x0004e78b) cale_week_scroll_pane_g2_ParamLimits

0x1505,	// (0x0004e7a3) cale_week_scroll_pane_g3_ParamLimits

0x151d,	// (0x0004e7bb) cale_week_scroll_pane_g4_ParamLimits

0x1535,	// (0x0004e7d3) cale_week_scroll_pane_g5_ParamLimits

0x1551,	// (0x0004e7ef) cale_week_scroll_pane_g6_ParamLimits

0x1571,	// (0x0004e80f) cale_week_scroll_pane_g7_ParamLimits

0x1591,	// (0x0004e82f) cale_week_scroll_pane_g8_ParamLimits

0x15b5,	// (0x0004e853) cale_week_scroll_pane_g9_ParamLimits

0x15cd,	// (0x0004e86b) cale_week_scroll_pane_g10_ParamLimits

0x15e5,	// (0x0004e883) cale_week_scroll_pane_g11_ParamLimits

0x15fd,	// (0x0004e89b) cale_week_scroll_pane_g12_ParamLimits

0x1615,	// (0x0004e8b3) cale_week_scroll_pane_g13_ParamLimits

0x1615,	// (0x0004e8b3) cale_week_scroll_pane_g14_ParamLimits

0x1615,	// (0x0004e8b3) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0005c451) cale_week_scroll_pane_g_ParamLimits

0x162d,	// (0x0004e8cb) cale_week_time_pane_ParamLimits

0x1651,	// (0x0004e8ef) grid_cale_week_pane_ParamLimits

0xa8e1,	// (0x00057b7f) listscroll_cale_week_pane_t1

0xa8f3,	// (0x00057b91) scroll_pane_cp08_ParamLimits

0x23e9,	// (0x0004f687) cale_month_corner_pane_ParamLimits

0xac8c,	// (0x00057f2a) cale_month_pane_t1

0x2809,	// (0x0004faa7) cale_month_week_pane_ParamLimits

0x301e,	// (0x000502bc) popup_call_status_window_g1_ParamLimits

0x3032,	// (0x000502d0) popup_call_status_window_g2_ParamLimits

0x3046,	// (0x000502e4) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0005c5f9) popup_call_status_window_g_ParamLimits

0xb038,	// (0x000582d6) aid_call2_pane

0x01cb,	// (0x0004d469) msg_header_pane_g1

0x3906,	// (0x00050ba4) postcard_address2_pane_ParamLimits

0x3906,	// (0x00050ba4) postcard_address2_pane

0x3918,	// (0x00050bb6) postcard_message2_pane_ParamLimits

0x3918,	// (0x00050bb6) postcard_message2_pane

0x43e2,	// (0x00051680) message2_row_pane_ParamLimits

0x43e2,	// (0x00051680) message2_row_pane

0x4401,	// (0x0005169f) address2_row_pane_ParamLimits

0x4401,	// (0x0005169f) address2_row_pane

0xc832,	// (0x00059ad0) postcard_message2_row_pane_g1

0xc83a,	// (0x00059ad8) postcard_message2_row_pane_t1

0xc832,	// (0x00059ad0) address2_row_pane_g1

0xc83a,	// (0x00059ad8) address2_row_pane_t1

0x1a6c,	// (0x0004ed0a) aid_size_cell_vorec

0x9b02,	// (0x00056da0) main_rss_pane

0x4414,	// (0x000516b2) rss_list_single_pane_ParamLimits

0x4414,	// (0x000516b2) rss_list_single_pane

0xc848,	// (0x00059ae6) rss_list_single_pane_t1

0xc856,	// (0x00059af4) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0005c8a4) rss_list_single_pane_t

0x9b02,	// (0x00056da0) main_camera2_pane

0x9b02,	// (0x00056da0) main_video2_pane

0x467c,	// (0x0005191a) cams_zoom_pane_cp2_ParamLimits

0x467c,	// (0x0005191a) cams_zoom_pane_cp2

0x469c,	// (0x0005193a) image2_vga_pane_ParamLimits

0x469c,	// (0x0005193a) image2_vga_pane

0x46ed,	// (0x0005198b) main_camera2_pane_g1_ParamLimits

0x46ed,	// (0x0005198b) main_camera2_pane_g1

0x470d,	// (0x000519ab) main_camera2_pane_g2_ParamLimits

0x470d,	// (0x000519ab) main_camera2_pane_g2

0x472d,	// (0x000519cb) main_camera2_pane_g3_ParamLimits

0x472d,	// (0x000519cb) main_camera2_pane_g3

0x474d,	// (0x000519eb) main_camera2_pane_g4_ParamLimits

0x474d,	// (0x000519eb) main_camera2_pane_g4

0x476d,	// (0x00051a0b) main_camera2_pane_g5_ParamLimits

0x476d,	// (0x00051a0b) main_camera2_pane_g5

0x478d,	// (0x00051a2b) main_camera2_pane_g6_ParamLimits

0x478d,	// (0x00051a2b) main_camera2_pane_g6

0x47ad,	// (0x00051a4b) main_camera2_pane_g7_ParamLimits

0x47ad,	// (0x00051a4b) main_camera2_pane_g7

0x47cd,	// (0x00051a6b) main_camera2_pane_g8_ParamLimits

0x47cd,	// (0x00051a6b) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0005c8c5) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0005c8c5) main_camera2_pane_g

0x480d,	// (0x00051aab) main_camera2_pane_t1_ParamLimits

0x480d,	// (0x00051aab) main_camera2_pane_t1

0x4842,	// (0x00051ae0) main_camera2_pane_t2_ParamLimits

0x4842,	// (0x00051ae0) main_camera2_pane_t2

0x4868,	// (0x00051b06) main_camera2_pane_t3_ParamLimits

0x4868,	// (0x00051b06) main_camera2_pane_t3

0x48c6,	// (0x00051b64) main_camera2_pane_t4_ParamLimits

0x48c6,	// (0x00051b64) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0005c8d8) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0005c8d8) main_camera2_pane_t

0x4958,	// (0x00051bf6) cams_zoom_pane_cp4_ParamLimits

0x4958,	// (0x00051bf6) cams_zoom_pane_cp4

0x496e,	// (0x00051c0c) image2_cif_pane_ParamLimits

0x496e,	// (0x00051c0c) image2_cif_pane

0x4999,	// (0x00051c37) image2_subqcif_pane_ParamLimits

0x4999,	// (0x00051c37) image2_subqcif_pane

0x49b3,	// (0x00051c51) main_video2_pane_g1_ParamLimits

0x49b3,	// (0x00051c51) main_video2_pane_g1

0x49cd,	// (0x00051c6b) main_video2_pane_g2_ParamLimits

0x49cd,	// (0x00051c6b) main_video2_pane_g2

0x49e3,	// (0x00051c81) main_video2_pane_g3_ParamLimits

0x49e3,	// (0x00051c81) main_video2_pane_g3

0x49f9,	// (0x00051c97) main_video2_pane_g4_ParamLimits

0x49f9,	// (0x00051c97) main_video2_pane_g4

0x4a0f,	// (0x00051cad) main_video2_pane_g5_ParamLimits

0x4a0f,	// (0x00051cad) main_video2_pane_g5

0x4a25,	// (0x00051cc3) main_video2_pane_g6_ParamLimits

0x4a25,	// (0x00051cc3) main_video2_pane_g6

0x0005,

0xf649,	// (0x0005c8e7) main_video2_pane_g_ParamLimits

0xf649,	// (0x0005c8e7) main_video2_pane_g

0x4a3f,	// (0x00051cdd) main_video2_pane_t1_ParamLimits

0x4a3f,	// (0x00051cdd) main_video2_pane_t1

0x4a63,	// (0x00051d01) main_video2_pane_t2_ParamLimits

0x4a63,	// (0x00051d01) main_video2_pane_t2

0x4ab1,	// (0x00051d4f) main_video2_pane_t3_ParamLimits

0x4ab1,	// (0x00051d4f) main_video2_pane_t3

0x0002,

0xf656,	// (0x0005c8f4) main_video2_pane_t_ParamLimits

0xf656,	// (0x0005c8f4) main_video2_pane_t

0x3f3e,	// (0x000511dc) call_muted_g2

0x0001,

0xf5f8,	// (0x0005c896) call_muted_g

0x9b02,	// (0x00056da0) main_mup2_pane

0x4af9,	// (0x00051d97) main_mup2_pane_g1_ParamLimits

0x4af9,	// (0x00051d97) main_mup2_pane_g1

0x4b05,	// (0x00051da3) main_mup2_pane_g2_ParamLimits

0x4b05,	// (0x00051da3) main_mup2_pane_g2

0x9e06,	// (0x000570a4) main_mup_pane_g13_cp1

0x9e0e,	// (0x000570ac) mup_volume_pane_cp1

0x4b21,	// (0x00051dbf) main_mup2_pane_g4_ParamLimits

0x4b21,	// (0x00051dbf) main_mup2_pane_g4

0x4b33,	// (0x00051dd1) main_mup2_pane_g5_ParamLimits

0x4b33,	// (0x00051dd1) main_mup2_pane_g5

0x4b45,	// (0x00051de3) main_mup2_pane_g6_ParamLimits

0x4b45,	// (0x00051de3) main_mup2_pane_g6

0x4b57,	// (0x00051df5) main_mup2_pane_g7_ParamLimits

0x4b57,	// (0x00051df5) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0005c8fb) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0005c8fb) main_mup2_pane_g

0x4b6f,	// (0x00051e0d) main_mup2_pane_t1_ParamLimits

0x4b6f,	// (0x00051e0d) main_mup2_pane_t1

0x4b85,	// (0x00051e23) main_mup2_pane_t2_ParamLimits

0x4b85,	// (0x00051e23) main_mup2_pane_t2

0x4b9b,	// (0x00051e39) main_mup2_pane_t3_ParamLimits

0x4b9b,	// (0x00051e39) main_mup2_pane_t3

0x4bb1,	// (0x00051e4f) main_mup2_pane_t4_ParamLimits

0x4bb1,	// (0x00051e4f) main_mup2_pane_t4

0x4bc9,	// (0x00051e67) main_mup2_pane_t5_ParamLimits

0x4bc9,	// (0x00051e67) main_mup2_pane_t5

0x4be1,	// (0x00051e7f) main_mup2_pane_t6_ParamLimits

0x4be1,	// (0x00051e7f) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0005c90a) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0005c90a) main_mup2_pane_t

0x4c11,	// (0x00051eaf) mup2_visualizer_pane_ParamLimits

0x4c11,	// (0x00051eaf) mup2_visualizer_pane

0x4c3f,	// (0x00051edd) mup_progress_pane_cp_ParamLimits

0x4c3f,	// (0x00051edd) mup_progress_pane_cp

0x9df1,	// (0x0005708f) mup_volume_pane_cp_ParamLimits

0x9df1,	// (0x0005708f) mup_volume_pane_cp

0x4c53,	// (0x00051ef1) mup2_visualizer_pane_g1_ParamLimits

0x4c53,	// (0x00051ef1) mup2_visualizer_pane_g1

0xc8b7,	// (0x00059b55) mup2_visualizer_pane_g2_ParamLimits

0xc8b7,	// (0x00059b55) mup2_visualizer_pane_g2

0x4c6a,	// (0x00051f08) mup2_visualizer_pane_g3_ParamLimits

0x4c6a,	// (0x00051f08) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0005c917) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0005c917) mup2_visualizer_pane_g

0xb6e4,	// (0x00058982) aid_size_cell_fmradio

0x40f0,	// (0x0005138e) aid_height_parent_landcape

0xaaea,	// (0x00057d88) wml_content_pane_cp

0xaaf2,	// (0x00057d90) wml_tabs_pane

0xaafb,	// (0x00057d99) popup_wml_miniature_window

0xab03,	// (0x00057da1) scroll_pane_cp021

0xab17,	// (0x00057db5) wml_content_pane_comp8

0x9b02,	// (0x00056da0) bg_popup_sub_pane_cp05

0xc8d5,	// (0x00059b73) popup_wml_miniature_window_g1

0xc8dd,	// (0x00059b7b) wml_miniature_view_pane

0x4c76,	// (0x00051f14) aid_size_wml_view

0x4c7e,	// (0x00051f1c) wml_miniature_view_pane_g1

0x4c87,	// (0x00051f25) wml_miniature_view_pane_g2

0x4c90,	// (0x00051f2e) wml_miniature_view_pane_g3

0x4c98,	// (0x00051f36) wml_miniature_view_pane_g4

0x4ca0,	// (0x00051f3e) wml_miniature_view_pane_g5

0x4ca8,	// (0x00051f46) wml_miniature_view_pane_g6

0x4cb0,	// (0x00051f4e) wml_miniature_view_pane_g7

0x4cb8,	// (0x00051f56) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0005c91e) wml_miniature_view_pane_g

0xc8e5,	// (0x00059b83) background_graphic_ParamLimits

0xc8e5,	// (0x00059b83) background_graphic

0xc8f1,	// (0x00059b8f) wml_tabs_2_pane

0xc8fa,	// (0x00059b98) wml_tabs_3_pane_ParamLimits

0xc8fa,	// (0x00059b98) wml_tabs_3_pane

0xc90c,	// (0x00059baa) wml_tabs_4_pane_ParamLimits

0xc90c,	// (0x00059baa) wml_tabs_4_pane

0xc922,	// (0x00059bc0) wml_tabs_5_pane_ParamLimits

0xc922,	// (0x00059bc0) wml_tabs_5_pane

0xc93c,	// (0x00059bda) wml_tabs_pane_g2_ParamLimits

0xc93c,	// (0x00059bda) wml_tabs_pane_g2

0xc950,	// (0x00059bee) wml_tabs_pane_g3_ParamLimits

0xc950,	// (0x00059bee) wml_tabs_pane_g3

0x4cc0,	// (0x00051f5e) wml_tabs_2_active_pane_ParamLimits

0x4cc0,	// (0x00051f5e) wml_tabs_2_active_pane

0x4cd4,	// (0x00051f72) wml_tabs_2_passive_pane_ParamLimits

0x4cd4,	// (0x00051f72) wml_tabs_2_passive_pane

0x4ce8,	// (0x00051f86) wml_tabs_3_active_pane_cp_ParamLimits

0x4ce8,	// (0x00051f86) wml_tabs_3_active_pane_cp

0x4cfd,	// (0x00051f9b) wml_tabs_3_passive_pane_ParamLimits

0x4cfd,	// (0x00051f9b) wml_tabs_3_passive_pane

0x4d10,	// (0x00051fae) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d10,	// (0x00051fae) wml_tabs_3_passive_pane_cp

0x4d27,	// (0x00051fc5) tabs_4_active_pane

0x4d2f,	// (0x00051fcd) tabs_4_passive_pane

0x4d39,	// (0x00051fd7) tabs_4_passive_pane_cp

0x4d41,	// (0x00051fdf) tabs_4_passive_pane_cp2

0x3e0b,	// (0x000510a9) aid_height_text

0x34c6,	// (0x00050764) mup_volume_cont_pane_ParamLimits

0x34c6,	// (0x00050764) mup_volume_cont_pane

0x105d,	// (0x0004e2fb) aid_size_cell_pinb

0x1067,	// (0x0004e305) aid_size_list_pinb

0x4c2b,	// (0x00051ec9) mup2_volume_cont_pane_ParamLimits

0x4c2b,	// (0x00051ec9) mup2_volume_cont_pane

0x9ddd,	// (0x0005707b) mup2_volume_cont_pane_g1_ParamLimits

0x9ddd,	// (0x0005707b) mup2_volume_cont_pane_g1

0x0d0f,	// (0x0004dfad) aid_size_cell_touch_ParamLimits

0x0d0f,	// (0x0004dfad) aid_size_cell_touch

0x0f4c,	// (0x0004e1ea) touch_pane_ParamLimits

0x0f4c,	// (0x0004e1ea) touch_pane

0x9687,	// (0x00056925) main_rss2_pane

0xc96d,	// (0x00059c0b) listscroll_rss2_pane

0xc976,	// (0x00059c14) rss2_navigation_pane

0xc97e,	// (0x00059c1c) list_rss2_pane

0xb187,	// (0x00058425) scroll_pane_cp22

0xc986,	// (0x00059c24) rss2_navigation_pane_g1

0xc98f,	// (0x00059c2d) rss2_navigation_pane_g2

0xc997,	// (0x00059c35) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0005c92f) rss2_navigation_pane_g

0xc99f,	// (0x00059c3d) rss2_navigation_pane_t1

0x4d4b,	// (0x00051fe9) rss2_list_single_pane_ParamLimits

0x4d4b,	// (0x00051fe9) rss2_list_single_pane

0xc9ad,	// (0x00059c4b) rss2_list_single_pane_t2

0xc9bb,	// (0x00059c59) rss2_list_single_pane_t3_ParamLimits

0xc9bb,	// (0x00059c59) rss2_list_single_pane_t3

0xc9d8,	// (0x00059c76) rss2_list_single_pane_t4

0x2eb0,	// (0x0005014e) smil_status_pane_g1

0xa4d6,	// (0x00057774) main_image2_pane_ParamLimits

0xa4d6,	// (0x00057774) main_image2_pane

0x47ed,	// (0x00051a8b) main_camera2_pane_g9_ParamLimits

0x47ed,	// (0x00051a8b) main_camera2_pane_g9

0x491b,	// (0x00051bb9) main_camera2_pane_t5_ParamLimits

0x491b,	// (0x00051bb9) main_camera2_pane_t5

0x9dad,	// (0x0005704b) main_camera2_pane_t6_ParamLimits

0x9dad,	// (0x0005704b) main_camera2_pane_t6

0x4d62,	// (0x00052000) main_image2_pane_g1_ParamLimits

0x4d62,	// (0x00052000) main_image2_pane_g1

0x3b45,	// (0x00050de3) smil2_video_pane_ParamLimits

0x3b45,	// (0x00050de3) smil2_video_pane

0x0d47,	// (0x0004dfe5) aid_zoom_text_primary_cp

0x96e5,	// (0x00056983) popup_preview_fixed_window

0xaa53,	// (0x00057cf1) im_reading_pane_g1

0x4664,	// (0x00051902) cams2_bc_adjust_pane_cp_ParamLimits

0x4664,	// (0x00051902) cams2_bc_adjust_pane_cp

0x494a,	// (0x00051be8) cams2_bc_adjust_pane_ParamLimits

0x494a,	// (0x00051be8) cams2_bc_adjust_pane

0x9e16,	// (0x000570b4) cams2_bc_adjust_pane_g1

0x9e1e,	// (0x000570bc) cams2_slider_pane

0x9e27,	// (0x000570c5) cams2_slider_pane_g1

0x9e30,	// (0x000570ce) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0005c936) cams2_slider_pane_g

0x113f,	// (0x0004e3dd) calc_display_pane_ParamLimits

0x1167,	// (0x0004e405) calc_paper_pane_ParamLimits

0x118a,	// (0x0004e428) grid_calc_pane_ParamLimits

0x9cc6,	// (0x00056f64) popup_clock_digital_window_t1_ParamLimits

0xb681,	// (0x0005891f) main_image_pane_t1

0x1121,	// (0x0004e3bf) aid_size_cell_calc_ParamLimits

0x1121,	// (0x0004e3bf) aid_size_cell_calc

0x4136,	// (0x000513d4) popup_blid_sat_info2_window_ParamLimits

0x4136,	// (0x000513d4) popup_blid_sat_info2_window

0xc9ee,	// (0x00059c8c) aid_size_cell_blid

0xc9f6,	// (0x00059c94) bg_popup_window_pane_cp07

0xca19,	// (0x00059cb7) grid_popup_blid_pane

0xca23,	// (0x00059cc1) heading_pane_cp05_ParamLimits

0xca23,	// (0x00059cc1) heading_pane_cp05

0xcaed,	// (0x00059d8b) cell_popup_blid_pane_ParamLimits

0xcaed,	// (0x00059d8b) cell_popup_blid_pane

0xcb13,	// (0x00059db1) cell_popup_blid_pane_g1

0xcb1b,	// (0x00059db9) cell_popup_blid_pane_t1

0x4bfb,	// (0x00051e99) mup2_indicator_pane_ParamLimits

0x4bfb,	// (0x00051e99) mup2_indicator_pane

0xb3f9,	// (0x00058697) mup2_visualizer_osc_pane

0xc8c3,	// (0x00059b61) mup2_visualizer_spec_pane_ParamLimits

0xc8c3,	// (0x00059b61) mup2_visualizer_spec_pane

0x4d78,	// (0x00052016) mup2_spec_half_pane

0x4d81,	// (0x0005201f) mup2_spec_half_pane_cp

0x4d89,	// (0x00052027) mup2_spec_bar_pane_ParamLimits

0x4d89,	// (0x00052027) mup2_spec_bar_pane

0xc864,	// (0x00059b02) mup2_spec_bar_pane_g1

0xc86e,	// (0x00059b0c) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0005c8a9) mup2_spec_bar_pane_g

0x4da9,	// (0x00052047) mup2_osc_middle_pane

0xc880,	// (0x00059b1e) mup2_visualizer_osc_pane_g1

0x970f,	// (0x000569ad) popup_number_entry_window_t1_ParamLimits

0x9722,	// (0x000569c0) popup_number_entry_window_t2_ParamLimits

0x9734,	// (0x000569d2) popup_number_entry_window_t3_ParamLimits

0x0f9e,	// (0x0004e23c) popup_number_entry_window_t5_ParamLimits

0x0f9e,	// (0x0004e23c) popup_number_entry_window_t5

0xf0cd,	// (0x0005c36b) popup_number_entry_window_t_ParamLimits

0x9746,	// (0x000569e4) text_title_cp2_ParamLimits

0x9d05,	// (0x00056fa3) aid_hotspot_pointer_text2_pane

0x9d2b,	// (0x00056fc9) main_viewer_pane_g9_ParamLimits

0x9d2b,	// (0x00056fc9) main_viewer_pane_g9

0xac8c,	// (0x00057f2a) cale_month_pane_t1_ParamLimits

0xacc9,	// (0x00057f67) bg_cale_pane_ParamLimits

0xace1,	// (0x00057f7f) list_cale_pane_ParamLimits

0xacf2,	// (0x00057f90) listscroll_cale_day_pane_t1

0xad04,	// (0x00057fa2) scroll_pane_cp09_ParamLimits

0x34fc,	// (0x0005079a) main_mup_eq_pane_t1_ParamLimits

0x34fc,	// (0x0005079a) main_mup_eq_pane_t1

0x3516,	// (0x000507b4) main_mup_eq_pane_t2_ParamLimits

0x3516,	// (0x000507b4) main_mup_eq_pane_t2

0x3530,	// (0x000507ce) main_mup_eq_pane_t3_ParamLimits

0x3530,	// (0x000507ce) main_mup_eq_pane_t3

0x354c,	// (0x000507ea) main_mup_eq_pane_t4_ParamLimits

0x354c,	// (0x000507ea) main_mup_eq_pane_t4

0x3568,	// (0x00050806) main_mup_eq_pane_t5_ParamLimits

0x3568,	// (0x00050806) main_mup_eq_pane_t5

0x3584,	// (0x00050822) main_mup_eq_pane_t6_ParamLimits

0x3584,	// (0x00050822) main_mup_eq_pane_t6

0x3598,	// (0x00050836) main_mup_eq_pane_t7_ParamLimits

0x3598,	// (0x00050836) main_mup_eq_pane_t7

0x35ac,	// (0x0005084a) main_mup_eq_pane_t8_ParamLimits

0x35ac,	// (0x0005084a) main_mup_eq_pane_t8

0x35c0,	// (0x0005085e) main_mup_eq_pane_t9_ParamLimits

0x35c0,	// (0x0005085e) main_mup_eq_pane_t9

0x35da,	// (0x00050878) main_mup_eq_pane_t10_ParamLimits

0x35da,	// (0x00050878) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0005c6f8) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0005c6f8) main_mup_eq_pane_t

0x3689,	// (0x00050927) mup_equalizer_pane_cp5_ParamLimits

0x369d,	// (0x0005093b) mup_equalizer_pane_cp6_ParamLimits

0x36b1,	// (0x0005094f) mup_equalizer_pane_cp7_ParamLimits

0x9687,	// (0x00056925) main_gallery_pane

0xc889,	// (0x00059b27) smil2_volume_pane

0xc891,	// (0x00059b2f) smil_status_volume_pane_g1_ParamLimits

0xc8a4,	// (0x00059b42) smil_status_volume_pane_g2_ParamLimits

0x9d8b,	// (0x00057029) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0005c8ae) smil_status_volume_pane_g_ParamLimits

0xc9f6,	// (0x00059c94) bg_popup_window_pane_cp07_ParamLimits

0xca04,	// (0x00059ca2) blid_firmament_pane

0x4db2,	// (0x00052050) aid_size_cell_gallery_ParamLimits

0x4db2,	// (0x00052050) aid_size_cell_gallery

0x4dc8,	// (0x00052066) grid_gallery_pane_ParamLimits

0x4dc8,	// (0x00052066) grid_gallery_pane

0x4de1,	// (0x0005207f) cell_gallery_pane_ParamLimits

0x4de1,	// (0x0005207f) cell_gallery_pane

0xcb29,	// (0x00059dc7) bg_cell_gallery_focus_pane_ParamLimits

0xcb29,	// (0x00059dc7) bg_cell_gallery_focus_pane

0xcb3b,	// (0x00059dd9) cell_gallery_pane_g1_ParamLimits

0xcb3b,	// (0x00059dd9) cell_gallery_pane_g1

0x4e2a,	// (0x000520c8) cell_gallery_pane_g2_ParamLimits

0x4e2a,	// (0x000520c8) cell_gallery_pane_g2

0x4e37,	// (0x000520d5) cell_gallery_pane_g3_ParamLimits

0x4e37,	// (0x000520d5) cell_gallery_pane_g3

0xcb47,	// (0x00059de5) cell_gallery_pane_g4_ParamLimits

0xcb47,	// (0x00059de5) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0005c95c) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0005c95c) cell_gallery_pane_g

0xcb53,	// (0x00059df1) bg_cell_gallery_focus_pane_g1

0xcb5b,	// (0x00059df9) bg_cell_gallery_focus_pane_g2

0xcb63,	// (0x00059e01) bg_cell_gallery_focus_pane_g3

0xcb6b,	// (0x00059e09) bg_cell_gallery_focus_pane_g4

0xcb73,	// (0x00059e11) bg_cell_gallery_focus_pane_g5

0xcb7b,	// (0x00059e19) bg_cell_gallery_focus_pane_g6

0xcb83,	// (0x00059e21) bg_cell_gallery_focus_pane_g7

0xcb8b,	// (0x00059e29) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0005c965) bg_cell_gallery_focus_pane_g

0xcb93,	// (0x00059e31) aid_firma_cardinal

0xcba7,	// (0x00059e45) blid_firmament_pane_t1

0xcbbe,	// (0x00059e5c) blid_firmament_pane_t2

0xcbd5,	// (0x00059e73) blid_firmament_pane_t3

0xcbec,	// (0x00059e8a) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0005c976) blid_firmament_pane_t

0xcc03,	// (0x00059ea1) blid_sat_info_pane

0xcc13,	// (0x00059eb1) blid_sat_info_pane_g1

0xcc13,	// (0x00059eb1) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0005c97f) blid_sat_info_pane_g

0xcc1d,	// (0x00059ebb) blid_sat_info_pane_t1

0xcc2b,	// (0x00059ec9) smil2_volume_content_pane

0xcc34,	// (0x00059ed2) smil2_volume_pane_g1

0xa814,	// (0x00057ab2) smil2_volume_content_pane_g1

0xcc3c,	// (0x00059eda) smil2_volume_content_pane_g2

0xcc45,	// (0x00059ee3) smil2_volume_content_pane_g3

0xcc4e,	// (0x00059eec) smil2_volume_content_pane_g4

0xcc57,	// (0x00059ef5) smil2_volume_content_pane_g5

0xcc60,	// (0x00059efe) smil2_volume_content_pane_g6

0xcc69,	// (0x00059f07) smil2_volume_content_pane_g7

0xcc72,	// (0x00059f10) smil2_volume_content_pane_g8

0xcc7b,	// (0x00059f19) smil2_volume_content_pane_g9

0xcc84,	// (0x00059f22) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0005c984) smil2_volume_content_pane_g

0x1705,	// (0x0004e9a3) cale_week_day_heading_pane_t1_ParamLimits

0x174f,	// (0x0004e9ed) cale_week_day_heading_pane_t2_ParamLimits

0x179e,	// (0x0004ea3c) cale_week_day_heading_pane_t3_ParamLimits

0x17ed,	// (0x0004ea8b) cale_week_day_heading_pane_t4_ParamLimits

0x183c,	// (0x0004eada) cale_week_day_heading_pane_t5_ParamLimits

0x1893,	// (0x0004eb31) cale_week_day_heading_pane_t6_ParamLimits

0x18ea,	// (0x0004eb88) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0005c470) cale_week_day_heading_pane_t_ParamLimits

0xa910,	// (0x00057bae) bg_cale_side_pane_ParamLimits

0x1934,	// (0x0004ebd2) cale_week_time_pane_t1_ParamLimits

0x194e,	// (0x0004ebec) cale_week_time_pane_t2_ParamLimits

0x1968,	// (0x0004ec06) cale_week_time_pane_t3_ParamLimits

0x1982,	// (0x0004ec20) cale_week_time_pane_t4_ParamLimits

0x199c,	// (0x0004ec3a) cale_week_time_pane_t5_ParamLimits

0x19b6,	// (0x0004ec54) cale_week_time_pane_t6_ParamLimits

0x19d0,	// (0x0004ec6e) cale_week_time_pane_t7_ParamLimits

0x19f0,	// (0x0004ec8e) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0005c47f) cale_week_time_pane_t_ParamLimits

0x1a10,	// (0x0004ecae) cell_cale_week_pane_g2_ParamLimits

0xa910,	// (0x00057bae) bg_cale_side_pane_cp01_ParamLimits

0x2c97,	// (0x0004ff35) cale_month_week_pane_t1_ParamLimits

0x2cb0,	// (0x0004ff4e) cale_month_week_pane_t2_ParamLimits

0x2cc9,	// (0x0004ff67) cale_month_week_pane_t3_ParamLimits

0x2ce2,	// (0x0004ff80) cale_month_week_pane_t4_ParamLimits

0x2cfb,	// (0x0004ff99) cale_month_week_pane_t5_ParamLimits

0x2d14,	// (0x0004ffb2) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0005c558) cale_month_week_pane_t_ParamLimits

0x9c42,	// (0x00056ee0) cell_cale_month_pane_g1_ParamLimits

0x9687,	// (0x00056925) main_cale_event_viewer_pane

0x9687,	// (0x00056925) listscroll_cale_event_viewer_pane

0xcc8d,	// (0x00059f2b) list_cale_ev_pane

0xcc95,	// (0x00059f33) scroll_pane_cp023

0xcca1,	// (0x00059f3f) field_cale_ev_pane_ParamLimits

0xcca1,	// (0x00059f3f) field_cale_ev_pane

0xccbd,	// (0x00059f5b) field_cale_ev_content_pane_ParamLimits

0xccbd,	// (0x00059f5b) field_cale_ev_content_pane

0xccc9,	// (0x00059f67) field_cale_ev_pane_g1_ParamLimits

0xccc9,	// (0x00059f67) field_cale_ev_pane_g1

0xccd5,	// (0x00059f73) field_cale_ev_pane_g2_ParamLimits

0xccd5,	// (0x00059f73) field_cale_ev_pane_g2

0xcced,	// (0x00059f8b) field_cale_ev_pane_g3_ParamLimits

0xcced,	// (0x00059f8b) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0005c999) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0005c999) field_cale_ev_pane_g

0xcd05,	// (0x00059fa3) field_cale_ev_pane_t1_ParamLimits

0xcd05,	// (0x00059fa3) field_cale_ev_pane_t1

0xcd1c,	// (0x00059fba) field_cale_ev_content_pane_t1_ParamLimits

0xcd1c,	// (0x00059fba) field_cale_ev_content_pane_t1

0x373d,	// (0x000509db) bg_button_pane_cp01

0x1448,	// (0x0004e6e6) listscroll_cale_week_pane_ParamLimits

0xa8ba,	// (0x00057b58) popup_toolbar_window_cp01

0xa8e1,	// (0x00057b7f) listscroll_cale_week_pane_t1_ParamLimits

0x1448,	// (0x0004e6e6) listscroll_cale_day_pane_ParamLimits

0xa8ba,	// (0x00057b58) popup_toolbar_window_cp02

0xacf2,	// (0x00057f90) listscroll_cale_day_pane_t1_ParamLimits

0x1448,	// (0x0004e6e6) main_cale_month_pane_ParamLimits

0x9d76,	// (0x00057014) popup_toolbar_window_cp03_ParamLimits

0x9d76,	// (0x00057014) popup_toolbar_window_cp03

0x3a09,	// (0x00050ca7) main_image_pane_g2_ParamLimits

0x3a09,	// (0x00050ca7) main_image_pane_g2

0x3a1a,	// (0x00050cb8) main_image_pane_g3_ParamLimits

0x3a1a,	// (0x00050cb8) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0005c78a) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0005c78a) main_image_pane_g

0xb681,	// (0x0005891f) main_image_pane_t1_ParamLimits

0x3a2b,	// (0x00050cc9) main_image_pane_t2_ParamLimits

0x3a2b,	// (0x00050cc9) main_image_pane_t2

0x3a3d,	// (0x00050cdb) main_image_pane_t3_ParamLimits

0x3a3d,	// (0x00050cdb) main_image_pane_t3

0x3a65,	// (0x00050d03) main_image_pane_t4_ParamLimits

0x3a65,	// (0x00050d03) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0005c791) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0005c791) main_image_pane_t

0x3a85,	// (0x00050d23) popup_image_details_window_cp01

0x3a8f,	// (0x00050d2d) popup_toobar_trans_pane_cp01_ParamLimits

0x3a8f,	// (0x00050d2d) popup_toobar_trans_pane_cp01

0x420d,	// (0x000514ab) popup_image_details_window_ParamLimits

0x420d,	// (0x000514ab) popup_image_details_window

0x9d49,	// (0x00056fe7) popup_image_focus_window

0x461e,	// (0x000518bc) camera2_autofocus_pane_ParamLimits

0x461e,	// (0x000518bc) camera2_autofocus_pane

0x9687,	// (0x00056925) bg_popup_sub_pane_cp06

0xcd39,	// (0x00059fd7) popup_image_focus_window_g1

0xcd41,	// (0x00059fdf) popup_image_focus_window_g2

0xcd49,	// (0x00059fe7) popup_image_focus_window_g3

0xcd51,	// (0x00059fef) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0005c9a0) popup_image_focus_window_g

0xcd59,	// (0x00059ff7) popup_image_focus_window_t1

0xcd67,	// (0x0005a005) popup_image_focus_window_t2

0xcd77,	// (0x0005a015) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0005c9a9) popup_image_focus_window_t

0xcd85,	// (0x0005a023) camera2_autofocus_pane_g1

0xa4d6,	// (0x00057774) bg_tb_trans_pane_cp01

0xcd93,	// (0x0005a031) popup_image_details_window_g1

0xcda6,	// (0x0005a044) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0005c9bb) popup_image_details_window_g

0xcdcf,	// (0x0005a06d) popup_image_details_window_t1

0xcde1,	// (0x0005a07f) popup_image_details_window_t2

0xcdfa,	// (0x0005a098) popup_image_details_window_t3

0xce0e,	// (0x0005a0ac) popup_image_details_window_t4

0xce29,	// (0x0005a0c7) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0005c9c2) popup_image_details_window_t

0xa77f,	// (0x00057a1d) bg_calc_paper_pane_ParamLimits

0x9687,	// (0x00056925) grid_highlight_pane_cp013

0x9b9a,	// (0x00056e38) list_calc_pane_ParamLimits

0x9bac,	// (0x00056e4a) scroll_pane_cp024

0xa793,	// (0x00057a31) bg_calc_display_pane_ParamLimits

0x1288,	// (0x0004e526) calc_display_pane_t1_ParamLimits

0x129a,	// (0x0004e538) calc_display_pane_t2_ParamLimits

0x9bb4,	// (0x00056e52) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0005c3f2) calc_display_pane_t_ParamLimits

0x135f,	// (0x0004e5fd) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0005c40f) cell_calc_pane_g

0x1368,	// (0x0004e606) cell_calc_pane_t1

0xa7f2,	// (0x00057a90) grid_highlight_pane_cp02_ParamLimits

0xa808,	// (0x00057aa6) toolbar_button_pane_cp01_ParamLimits

0xa808,	// (0x00057aa6) toolbar_button_pane_cp01

0xb6c6,	// (0x00058964) temp_image_control_pane_ParamLimits

0xb6c6,	// (0x00058964) temp_image_control_pane

0xa4d6,	// (0x00057774) main_mp3_pane

0xce43,	// (0x0005a0e1) temp_image_control_pane_g1_ParamLimits

0xce43,	// (0x0005a0e1) temp_image_control_pane_g1

0xce51,	// (0x0005a0ef) temp_image_control_pane_g2_ParamLimits

0xce51,	// (0x0005a0ef) temp_image_control_pane_g2

0xce63,	// (0x0005a101) temp_image_control_pane_g3_ParamLimits

0xce63,	// (0x0005a101) temp_image_control_pane_g3

0x4e74,	// (0x00052112) temp_image_control_pane_g4_ParamLimits

0x4e74,	// (0x00052112) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0005c9cd) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0005c9cd) temp_image_control_pane_g

0xce43,	// (0x0005a0e1) main_mp3_pane_g1

0x4e87,	// (0x00052125) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0005c9d6) main_mp3_pane_g

0xcea6,	// (0x0005a144) main_mp3_pane_t1

0xa962,	// (0x00057c00) main_camera_pane_g8_ParamLimits

0xa962,	// (0x00057c00) main_camera_pane_g8

0x1d33,	// (0x0004efd1) main_video_pane_g7_ParamLimits

0x1d33,	// (0x0004efd1) main_video_pane_g7

0x9dcb,	// (0x00057069) main_camera2_pane_t7_ParamLimits

0x9dcb,	// (0x00057069) main_camera2_pane_t7

0xaaaa,	// (0x00057d48) scroll_pane_cp025_ParamLimits

0xaaaa,	// (0x00057d48) scroll_pane_cp025

0xaabe,	// (0x00057d5c) scroll_pane_cp026_ParamLimits

0xaabe,	// (0x00057d5c) scroll_pane_cp026

0xaacd,	// (0x00057d6b) wml_content_pane_ParamLimits

0x9687,	// (0x00056925) main_touch_calib_pane

0x4f5d,	// (0x000521fb) main_touch_calib_pane_g1

0x4f6f,	// (0x0005220d) main_touch_calib_pane_g2

0x4f81,	// (0x0005221f) main_touch_calib_pane_g3

0x4f93,	// (0x00052231) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0005c9f4) main_touch_calib_pane_g

0x4fa5,	// (0x00052243) main_touch_calib_pane_t1

0x4fbf,	// (0x0005225d) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0005c9fd) main_touch_calib_pane_t

0xb265,	// (0x00058503) mup_progress_pane_cp02

0xb29a,	// (0x00058538) navi_pane_g1

0xb384,	// (0x00058622) navi_pane_mp_t3

0xa4d6,	// (0x00057774) main_mp3_pane_ParamLimits

0x438a,	// (0x00051628) navi_pane_ParamLimits

0xce43,	// (0x0005a0e1) main_mp3_pane_g1_ParamLimits

0x4e87,	// (0x00052125) main_mp3_pane_g2_ParamLimits

0x4e95,	// (0x00052133) main_mp3_pane_g3_ParamLimits

0x4e95,	// (0x00052133) main_mp3_pane_g3

0x4ea3,	// (0x00052141) main_mp3_pane_g4_ParamLimits

0x4ea3,	// (0x00052141) main_mp3_pane_g4

0xce73,	// (0x0005a111) main_mp3_pane_g5_ParamLimits

0xce73,	// (0x0005a111) main_mp3_pane_g5

0xce81,	// (0x0005a11f) main_mp3_pane_g6_ParamLimits

0xce81,	// (0x0005a11f) main_mp3_pane_g6

0xce8e,	// (0x0005a12c) main_mp3_pane_g7_ParamLimits

0xce8e,	// (0x0005a12c) main_mp3_pane_g7

0xce9a,	// (0x0005a138) main_mp3_pane_g8_ParamLimits

0xce9a,	// (0x0005a138) main_mp3_pane_g8

0xf738,	// (0x0005c9d6) main_mp3_pane_g_ParamLimits

0x4eb1,	// (0x0005214f) main_mp3_pane_t2

0x4ebf,	// (0x0005215d) main_mp3_pane_t3

0xceb4,	// (0x0005a152) main_mp3_pane_t4

0xcec2,	// (0x0005a160) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0005c9e7) main_mp3_pane_t

0xced0,	// (0x0005a16e) mup_progress_pane_cp01

0x0d47,	// (0x0004dfe5) aid_zoom_text_secondary2

0xcc8d,	// (0x00059f2b) list_cale_ev2_pane

0xcc95,	// (0x00059f33) scroll_pane_cp023_ParamLimits

0x5015,	// (0x000522b3) field_cale_ev2_pane_ParamLimits

0x5015,	// (0x000522b3) field_cale_ev2_pane

0x5037,	// (0x000522d5) field_cale_ev2_pane_g1_ParamLimits

0x5037,	// (0x000522d5) field_cale_ev2_pane_g1

0x5043,	// (0x000522e1) field_cale_ev2_pane_g2_ParamLimits

0x5043,	// (0x000522e1) field_cale_ev2_pane_g2

0x505b,	// (0x000522f9) field_cale_ev2_pane_g3_ParamLimits

0x505b,	// (0x000522f9) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0005ca08) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0005ca08) field_cale_ev2_pane_g

0x507f,	// (0x0005231d) field_cale_ev2_pane_t1_ParamLimits

0x507f,	// (0x0005231d) field_cale_ev2_pane_t1

0x5096,	// (0x00052334) field_cale_ev2_pane_t2_ParamLimits

0x5096,	// (0x00052334) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0005ca11) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0005ca11) field_cale_ev2_pane_t

0x38bc,	// (0x00050b5a) main_postcard_pane_g5_ParamLimits

0x38bc,	// (0x00050b5a) main_postcard_pane_g5

0x38d2,	// (0x00050b70) main_postcard_pane_g6_ParamLimits

0x38d2,	// (0x00050b70) main_postcard_pane_g6

0x1aed,	// (0x0004ed8b) camera2_autofocus_pane_cp_ParamLimits

0x1aed,	// (0x0004ed8b) camera2_autofocus_pane_cp

0xa4d6,	// (0x00057774) main_mup3_pane

0x50cb,	// (0x00052369) main_mup3_pane_g1_ParamLimits

0x50cb,	// (0x00052369) main_mup3_pane_g1

0x50ed,	// (0x0005238b) main_mup3_pane_g2_ParamLimits

0x50ed,	// (0x0005238b) main_mup3_pane_g2

0x516f,	// (0x0005240d) main_mup3_pane_g3_ParamLimits

0x516f,	// (0x0005240d) main_mup3_pane_g3

0x51b5,	// (0x00052453) main_mup3_pane_g4_ParamLimits

0x51b5,	// (0x00052453) main_mup3_pane_g4

0x51fb,	// (0x00052499) main_mup3_pane_g5_ParamLimits

0x51fb,	// (0x00052499) main_mup3_pane_g5

0x5243,	// (0x000524e1) main_mup3_pane_g6_ParamLimits

0x5243,	// (0x000524e1) main_mup3_pane_g6

0xced8,	// (0x0005a176) main_mup3_pane_g7_ParamLimits

0xced8,	// (0x0005a176) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0005ca21) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0005ca21) main_mup3_pane_g

0x52c1,	// (0x0005255f) main_mup3_pane_t1_ParamLimits

0x52c1,	// (0x0005255f) main_mup3_pane_t1

0x5335,	// (0x000525d3) main_mup3_pane_t2_ParamLimits

0x5335,	// (0x000525d3) main_mup3_pane_t2

0x5409,	// (0x000526a7) main_mup3_pane_t4_ParamLimits

0x5409,	// (0x000526a7) main_mup3_pane_t4

0x545f,	// (0x000526fd) main_mup3_pane_t5_ParamLimits

0x545f,	// (0x000526fd) main_mup3_pane_t5

0x551b,	// (0x000527b9) main_mup3_pane_t6_ParamLimits

0x551b,	// (0x000527b9) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0005ca32) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0005ca32) main_mup3_pane_t

0x55d3,	// (0x00052871) mup3_progress_pane_ParamLimits

0x55d3,	// (0x00052871) mup3_progress_pane

0x565f,	// (0x000528fd) popup_mup3_control_window_ParamLimits

0x565f,	// (0x000528fd) popup_mup3_control_window

0xcee6,	// (0x0005a184) popup_mup3_text_window

0x5691,	// (0x0005292f) mup3_progress_pane_t1

0x56b0,	// (0x0005294e) mup3_progress_pane_t2

0xceee,	// (0x0005a18c) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0005ca3f) mup3_progress_pane_t

0xcf0b,	// (0x0005a1a9) mup_progress_pane_cp03

0x9687,	// (0x00056925) bg_tb_trans_pane_cp04

0x56cf,	// (0x0005296d) mup3_volume_pane

0x56d7,	// (0x00052975) popup_mup3_control_window_g1

0x56e0,	// (0x0005297e) mup3_volume_pane_g1

0x56e9,	// (0x00052987) mup3_volume_pane_g2

0x56f2,	// (0x00052990) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0005ca46) mup3_volume_pane_g

0x9687,	// (0x00056925) bg_tb_trans_pane_cp03

0xcf1b,	// (0x0005a1b9) popup_mup3_text_window_g1

0xcf23,	// (0x0005a1c1) popup_mup3_text_window_t1

0xa7db,	// (0x00057a79) list_calc_item_pane_g1_ParamLimits

0xc964,	// (0x00059c02) mup_volume_pane_cp_g1

0x4fd9,	// (0x00052277) main_touch_calib_pane_t3

0x4fed,	// (0x0005228b) main_touch_calib_pane_t4

0x5001,	// (0x0005229f) main_touch_calib_pane_t5

0x9691,	// (0x0005692f) aid_cell_size_toolbar2

0x9699,	// (0x00056937) aid_popup3_width_pane

0x0d3f,	// (0x0004dfdd) aid_zoom_text_msg_primary

0x1ac4,	// (0x0004ed62) vorec_t7

0xa79f,	// (0x00057a3d) bg_calc_paper_pane_g1_ParamLimits

0xa7ab,	// (0x00057a49) bg_calc_paper_pane_g2_ParamLimits

0xa7b7,	// (0x00057a55) bg_calc_paper_pane_g3_ParamLimits

0xa7c3,	// (0x00057a61) bg_calc_paper_pane_g4_ParamLimits

0xa7cf,	// (0x00057a6d) bg_calc_paper_pane_g5_ParamLimits

0x12e3,	// (0x0004e581) bg_calc_paper_pane_g6_ParamLimits

0x12f4,	// (0x0004e592) bg_calc_paper_pane_g7_ParamLimits

0x1305,	// (0x0004e5a3) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0005c3f9) bg_calc_paper_pane_g_ParamLimits

0x1318,	// (0x0004e5b6) calc_bg_paper_pane_g9_ParamLimits

0x1c45,	// (0x0004eee3) image_qvga_pane_ParamLimits

0x1c45,	// (0x0004eee3) image_qvga_pane

0xa6af,	// (0x0005794d) bg_popup_sub_pane_cp04_ParamLimits

0xb5fd,	// (0x0005889b) popup_mup_playback_window_g1_ParamLimits

0xb609,	// (0x000588a7) popup_mup_playback_window_t1_ParamLimits

0xb61e,	// (0x000588bc) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0005c785) popup_mup_playback_window_t_ParamLimits

0x4b15,	// (0x00051db3) main_mup2_pane_g3_ParamLimits

0x4b15,	// (0x00051db3) main_mup2_pane_g3

0x1fdc,	// (0x0004f27a) popup_toolbar_window_cp04

0xba13,	// (0x00058cb1) popup_call2_audio_second_window_g3_ParamLimits

0xba13,	// (0x00058cb1) popup_call2_audio_second_window_g3

0xbe1d,	// (0x000590bb) popup_call2_audio_first_window_g4_ParamLimits

0xbe1d,	// (0x000590bb) popup_call2_audio_first_window_g4

0xc49c,	// (0x0005973a) popup_call2_audio_in_window_g4_ParamLimits

0xc49c,	// (0x0005973a) popup_call2_audio_in_window_g4

0x39eb,	// (0x00050c89) aid_area_sk_bg_cut_ParamLimits

0x39eb,	// (0x00050c89) aid_area_sk_bg_cut

0xb633,	// (0x000588d1) aid_area_sk_bg_cut_2_ParamLimits

0xb633,	// (0x000588d1) aid_area_sk_bg_cut_2

0x4e1a,	// (0x000520b8) aid_placing_details_win

0x4e22,	// (0x000520c0) aid_placing_details_win_2

0xcd85,	// (0x0005a023) camera2_autofocus_pane_g1_ParamLimits

0x0ee5,	// (0x0004e183) popup_fixed_preview_cale_window_ParamLimits

0x0ee5,	// (0x0004e183) popup_fixed_preview_cale_window

0xb40a,	// (0x000586a8) navi_slider_pane_g3

0xb413,	// (0x000586b1) navi_slider_pane_g4

0xb41c,	// (0x000586ba) navi_slider_pane_g5

0xb40a,	// (0x000586a8) navi_slider_pane_g6

0x9cec,	// (0x00056f8a) navi_slider_pane_g7

0xb53d,	// (0x000587db) mup_scale_pane_g3

0xb546,	// (0x000587e4) mup_scale_pane_g4

0xb54f,	// (0x000587ed) mup_scale_pane_g5

0x36c5,	// (0x00050963) mup_scale_pane_g6

0x36ce,	// (0x0005096c) mup_scale_pane_g7

0xb40a,	// (0x000586a8) cams2_slider_pane_g3

0xc9e6,	// (0x00059c84) cams2_slider_pane_g4

0x9e39,	// (0x000570d7) cams2_slider_pane_g5

0xb40a,	// (0x000586a8) cams2_slider_pane_g6

0x9e41,	// (0x000570df) cams2_slider_pane_g7

0xcc13,	// (0x00059eb1) camera2_autofocus_pane_cp_g1

0xc7fd,	// (0x00059a9b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7fd,	// (0x00059a9b) bg_popup_preview_window_pane_cp02

0xcf31,	// (0x0005a1cf) list_fp_cale_pane_ParamLimits

0xcf31,	// (0x0005a1cf) list_fp_cale_pane

0xcf3d,	// (0x0005a1db) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf3d,	// (0x0005a1db) popup_fixed_preview_cale_window_t1

0x56fb,	// (0x00052999) popup_fixed_preview_cale_window_t2_ParamLimits

0x56fb,	// (0x00052999) popup_fixed_preview_cale_window_t2

0x5710,	// (0x000529ae) popup_fixed_preview_cale_window_t3_ParamLimits

0x5710,	// (0x000529ae) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0005ca4d) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0005ca4d) popup_fixed_preview_cale_window_t

0x5725,	// (0x000529c3) list_single_fp_cale_pane_ParamLimits

0x5725,	// (0x000529c3) list_single_fp_cale_pane

0xcf5b,	// (0x0005a1f9) list_single_fp_cale_pane_g1_ParamLimits

0xcf5b,	// (0x0005a1f9) list_single_fp_cale_pane_g1

0xcf67,	// (0x0005a205) list_single_fp_cale_pane_g2_ParamLimits

0xcf67,	// (0x0005a205) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0005ca54) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0005ca54) list_single_fp_cale_pane_g

0xcf8c,	// (0x0005a22a) list_single_fp_cale_pane_t1_ParamLimits

0xcf8c,	// (0x0005a22a) list_single_fp_cale_pane_t1

0xcf9e,	// (0x0005a23c) list_single_fp_cale_pane_t2_ParamLimits

0xcf9e,	// (0x0005a23c) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0005ca5b) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0005ca5b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9687,	// (0x00056925) main_dialer_pane

0x573c,	// (0x000529da) aid_cell_size_keypad

0x5746,	// (0x000529e4) dialer_ne_pane

0x574e,	// (0x000529ec) grid_dialer_command_1_pane

0x5756,	// (0x000529f4) grid_dialer_command_2_pane

0x575e,	// (0x000529fc) grid_dialer_keypad_pane

0x5770,	// (0x00052a0e) bg_popup_call_pane_cp06_ParamLimits

0x5770,	// (0x00052a0e) bg_popup_call_pane_cp06

0x577c,	// (0x00052a1a) dialer_ne_clear_pane_ParamLimits

0x577c,	// (0x00052a1a) dialer_ne_clear_pane

0xcfd1,	// (0x0005a26f) dialer_ne_pane_g1

0xcfd9,	// (0x0005a277) dialer_ne_pane_t1_ParamLimits

0xcfd9,	// (0x0005a277) dialer_ne_pane_t1

0x5788,	// (0x00052a26) dialer_ne_pane_t2_ParamLimits

0x5788,	// (0x00052a26) dialer_ne_pane_t2

0x57b2,	// (0x00052a50) dialer_ne_pane_t3_ParamLimits

0x57b2,	// (0x00052a50) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0005ca60) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0005ca60) dialer_ne_pane_t

0x57e2,	// (0x00052a80) dialer_ne_pane_t3_copy1_ParamLimits

0x57e2,	// (0x00052a80) dialer_ne_pane_t3_copy1

0x5811,	// (0x00052aaf) cell_dialer_keypad_pane_ParamLimits

0x5811,	// (0x00052aaf) cell_dialer_keypad_pane

0x5828,	// (0x00052ac6) cell_dialer_command_1_pane_ParamLimits

0x5828,	// (0x00052ac6) cell_dialer_command_1_pane

0x583e,	// (0x00052adc) cell_dialer_command_2_pane_ParamLimits

0x583e,	// (0x00052adc) cell_dialer_command_2_pane

0xcfeb,	// (0x0005a289) bg_button_pane_cp02_ParamLimits

0xcfeb,	// (0x0005a289) bg_button_pane_cp02

0x584d,	// (0x00052aeb) cell_dialer_keypad_pane_g1_ParamLimits

0x584d,	// (0x00052aeb) cell_dialer_keypad_pane_g1

0xcfeb,	// (0x0005a289) bg_button_pane_cp03_ParamLimits

0xcfeb,	// (0x0005a289) bg_button_pane_cp03

0x5862,	// (0x00052b00) cell_dialer_command_1_pane_g1_ParamLimits

0x5862,	// (0x00052b00) cell_dialer_command_1_pane_g1

0xcff7,	// (0x0005a295) bg_button_pane_cp04

0x5875,	// (0x00052b13) cell_dialer_command_2_pane_g1

0xb3f9,	// (0x00058697) bg_button_pane_cp06

0xcfff,	// (0x0005a29d) dialer_ne_clear_pane_g1

0xb2a6,	// (0x00058544) navi_pane_g2

0xb303,	// (0x000585a1) navi_pane_g3

0x0002,

0xf3ea,	// (0x0005c688) navi_pane_g

0xb392,	// (0x00058630) navi_pane_mv_g2

0xb3b9,	// (0x00058657) navi_pane_mv_g5

0x3285,	// (0x00050523) navi_pane_mv_t1

0xa793,	// (0x00057a31) main_clock2_pane

0x58c2,	// (0x00052b60) main_clock2_list_pane_ParamLimits

0x58c2,	// (0x00052b60) main_clock2_list_pane

0x58fc,	// (0x00052b9a) main_clock2_pane_t1_ParamLimits

0x58fc,	// (0x00052b9a) main_clock2_pane_t1

0x593a,	// (0x00052bd8) main_clock2_pane_t2_ParamLimits

0x593a,	// (0x00052bd8) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0005ca67) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0005ca67) main_clock2_pane_t

0x59d8,	// (0x00052c76) popup_clock_analogue_window_cp03_ParamLimits

0x59d8,	// (0x00052c76) popup_clock_analogue_window_cp03

0x59fd,	// (0x00052c9b) popup_clock_digital_window_cp02_ParamLimits

0x59fd,	// (0x00052c9b) popup_clock_digital_window_cp02

0x5a70,	// (0x00052d0e) main_clock2_list_single_pane_ParamLimits

0x5a70,	// (0x00052d0e) main_clock2_list_single_pane

0xb3f9,	// (0x00058697) list_highlight_pane_cp05

0xd01d,	// (0x0005a2bb) main_clock2_list_single_pane_t1

0x1fdc,	// (0x0004f27a) popup_toolbar_window_cp04_ParamLimits

0x4e44,	// (0x000520e2) camera2_autofocus_pane_g2_ParamLimits

0x4e44,	// (0x000520e2) camera2_autofocus_pane_g2

0x4e50,	// (0x000520ee) camera2_autofocus_pane_g3_ParamLimits

0x4e50,	// (0x000520ee) camera2_autofocus_pane_g3

0x4e5c,	// (0x000520fa) camera2_autofocus_pane_g4_ParamLimits

0x4e5c,	// (0x000520fa) camera2_autofocus_pane_g4

0x4e68,	// (0x00052106) camera2_autofocus_pane_g5_ParamLimits

0x4e68,	// (0x00052106) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0005c9b0) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0005c9b0) camera2_autofocus_pane_g

0x50ab,	// (0x00052349) camera2_autofocus_pane_cp_g2

0x50b3,	// (0x00052351) camera2_autofocus_pane_cp_g3

0x50bb,	// (0x00052359) camera2_autofocus_pane_cp_g4

0x50c3,	// (0x00052361) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0005ca16) camera2_autofocus_pane_cp_g

0x5768,	// (0x00052a06) popup_dialer_spcha_window

0x9687,	// (0x00056925) bg_popup_sub_pane_cp07

0xd02b,	// (0x0005a2c9) list_spcha_pane

0xd033,	// (0x0005a2d1) list_single_spcha_pane_ParamLimits

0xd033,	// (0x0005a2d1) list_single_spcha_pane

0x9687,	// (0x00056925) list_highlight_pane_cp06

0xd044,	// (0x0005a2e2) list_single_spcha_pane_t1

0xc246,	// (0x000594e4) popup_call2_audio_out_window_g4_ParamLimits

0xc246,	// (0x000594e4) popup_call2_audio_out_window_g4

0x9687,	// (0x00056925) main_imed2_pane

0x9d51,	// (0x00056fef) popup_imed_adjust2_window

0x4225,	// (0x000514c3) popup_imed_trans_window_ParamLimits

0x4225,	// (0x000514c3) popup_imed_trans_window

0xca4f,	// (0x00059ced) popup_blid_sat_info2_window_t1

0xca5d,	// (0x00059cfb) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0005c945) popup_blid_sat_info2_window_t

0x5b1a,	// (0x00052db8) aid_size_cell_colour_35

0x5b3a,	// (0x00052dd8) aid_size_cell_colour_112

0x5b5a,	// (0x00052df8) aid_size_cell_effect

0xc809,	// (0x00059aa7) bg_tb_trans_pane_cp02

0xae03,	// (0x000580a1) heading_imed_pane

0x5b7a,	// (0x00052e18) listscroll_imed_pane

0xd052,	// (0x0005a2f0) heading_imed_pane_g1

0xd05a,	// (0x0005a2f8) heading_imed_pane_t1

0xd068,	// (0x0005a306) grid_imed_colour_35_pane_ParamLimits

0xd068,	// (0x0005a306) grid_imed_colour_35_pane

0x5b86,	// (0x00052e24) grid_imed_effect_pane

0xd080,	// (0x0005a31e) list_imed_aspect_pane

0x5b9c,	// (0x00052e3a) scroll_pane_cp027_ParamLimits

0x5b9c,	// (0x00052e3a) scroll_pane_cp027

0x5bad,	// (0x00052e4b) cell_imed_effect_pane_ParamLimits

0x5bad,	// (0x00052e4b) cell_imed_effect_pane

0xd088,	// (0x0005a326) cell_imed_colour_pane_ParamLimits

0xd088,	// (0x0005a326) cell_imed_colour_pane

0xd0ca,	// (0x0005a368) cell_imed_colour_pane_g1_ParamLimits

0xd0ca,	// (0x0005a368) cell_imed_colour_pane_g1

0xd0db,	// (0x0005a379) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0db,	// (0x0005a379) hgihlgiht_grid_pane_cp016

0x5bd4,	// (0x00052e72) cell_imed_effect_pane_g1

0x5bdc,	// (0x00052e7a) grid_highlight_pane_cp017

0xd0ec,	// (0x0005a38a) list_imed_single_pane_ParamLimits

0xd0ec,	// (0x0005a38a) list_imed_single_pane

0x9687,	// (0x00056925) list_highlight_pane_cp07

0xd102,	// (0x0005a3a0) list_imed_aspect_pane_comp1_t1

0xc809,	// (0x00059aa7) bg_tb_trans_pane_cp05

0xd124,	// (0x0005a3c2) popup_imed_adjust2_window_g1

0xd14b,	// (0x0005a3e9) popup_imed_adjust2_window_t1

0xd163,	// (0x0005a401) slider_imed_adjust_pane

0xd177,	// (0x0005a415) slider_imed_adjust_pane_g1

0xd187,	// (0x0005a425) slider_imed_adjust_pane_g2

0xd197,	// (0x0005a435) slider_imed_adjust_pane_g3

0xd1a8,	// (0x0005a446) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0005ca84) slider_imed_adjust_pane_g

0x5be5,	// (0x00052e83) aid_size_cell_clipart2

0x5bf1,	// (0x00052e8f) grid_imed_clipart_pane

0xd1b9,	// (0x0005a457) scroll_pane_cp031

0x5bfb,	// (0x00052e99) cell_imed_clipart_pane_ParamLimits

0x5bfb,	// (0x00052e99) cell_imed_clipart_pane

0x5c1f,	// (0x00052ebd) cell_imed_clipart_pane_g1

0x9687,	// (0x00056925) grid_highlight_pane_cp014

0x58d7,	// (0x00052b75) main_clock2_pane_g1_ParamLimits

0x58d7,	// (0x00052b75) main_clock2_pane_g1

0x5a1b,	// (0x00052cb9) aid_call2_pane_cp10

0x5a2d,	// (0x00052ccb) aid_call_pane_cp10

0xb205,	// (0x000584a3) popup_clock_analogue_window_cp10_g1

0xb205,	// (0x000584a3) popup_clock_analogue_window_cp10_g2

0x5a3f,	// (0x00052cdd) popup_clock_analogue_window_cp10_g3

0x5a3f,	// (0x00052cdd) popup_clock_analogue_window_cp10_g4

0xb205,	// (0x000584a3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0005ca72) popup_clock_analogue_window_cp10_g

0x5a51,	// (0x00052cef) popup_clock_analogue_window_cp10_t1

0x5a82,	// (0x00052d20) clock_digital_number_pane_cp10_ParamLimits

0x5a82,	// (0x00052d20) clock_digital_number_pane_cp10

0x5a9a,	// (0x00052d38) clock_digital_number_pane_cp11_ParamLimits

0x5a9a,	// (0x00052d38) clock_digital_number_pane_cp11

0x5ab2,	// (0x00052d50) clock_digital_number_pane_cp12_ParamLimits

0x5ab2,	// (0x00052d50) clock_digital_number_pane_cp12

0x5aca,	// (0x00052d68) clock_digital_number_pane_cp13_ParamLimits

0x5aca,	// (0x00052d68) clock_digital_number_pane_cp13

0x5ae2,	// (0x00052d80) clock_digital_separator_pane_cp10_ParamLimits

0x5ae2,	// (0x00052d80) clock_digital_separator_pane_cp10

0x5afa,	// (0x00052d98) popup_clock_digital_window_cp02_t1_ParamLimits

0x5afa,	// (0x00052d98) popup_clock_digital_window_cp02_t1

0xa6a7,	// (0x00057945) clock_digital_number_pane_cp10_g1

0xa6a7,	// (0x00057945) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0005ca8d) clock_digital_number_pane_cp10_g

0xa6a7,	// (0x00057945) clock_digital_separator_pane_cp10_g1

0xa6a7,	// (0x00057945) clock_digital_separator_pane_g2_cp10

0xb3c1,	// (0x0005865f) navi_pane_vded_g4

0xb3ca,	// (0x00058668) navi_pane_vded_g5

0xb3d3,	// (0x00058671) navi_pane_vded_t1

0x9687,	// (0x00056925) main_vded_pane

0x5c28,	// (0x00052ec6) main_vded_pane_g1

0x5c32,	// (0x00052ed0) main_vded_pane_g2

0x5c3c,	// (0x00052eda) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0005ca92) main_vded_pane_g

0x5c46,	// (0x00052ee4) main_vded_pane_t1

0x5c54,	// (0x00052ef2) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0005ca99) main_vded_pane_t

0x5c62,	// (0x00052f00) vded_slider_pane

0x5c6c,	// (0x00052f0a) vded_video_pane

0xd1c1,	// (0x0005a45f) vded_video_pane_g1

0x5c76,	// (0x00052f14) vded_video_pane_g2

0xcc13,	// (0x00059eb1) vded_video_pane_g3

0x0002,

0xf800,	// (0x0005ca9e) vded_video_pane_g

0xd1cb,	// (0x0005a469) vded_slider_pane_g1

0xd1d4,	// (0x0005a472) vded_slider_pane_g2

0xd1dd,	// (0x0005a47b) vded_slider_pane_g3

0xd1e6,	// (0x0005a484) vded_slider_pane_g4

0xd1ef,	// (0x0005a48d) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0005caa5) vded_slider_pane_g

0x5647,	// (0x000528e5) mup3_rocker_pane_ParamLimits

0x5647,	// (0x000528e5) mup3_rocker_pane

0x5c7f,	// (0x00052f1d) mup3_control_keys_pane_g1

0x5c87,	// (0x00052f25) mup3_control_keys_pane_g2

0x5c8f,	// (0x00052f2d) mup3_control_keys_pane_g3

0x5c97,	// (0x00052f35) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0005cab0) mup3_control_keys_pane_g

0x0f1c,	// (0x0004e1ba) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f1c,	// (0x0004e1ba) popup_toolbar2_fixed_window_cp01

0x567b,	// (0x00052919) popup_toolbar2_fixed_window_cp02_ParamLimits

0x567b,	// (0x00052919) popup_toolbar2_fixed_window_cp02

0xbb85,	// (0x00058e23) popup_call2_audio_second_window_t4_ParamLimits

0xbb85,	// (0x00058e23) popup_call2_audio_second_window_t4

0xc0b3,	// (0x00059351) popup_call2_audio_first_window_t6_ParamLimits

0xc0b3,	// (0x00059351) popup_call2_audio_first_window_t6

0xc349,	// (0x000595e7) popup_call2_audio_out_window_t6_ParamLimits

0xc349,	// (0x000595e7) popup_call2_audio_out_window_t6

0x9687,	// (0x00056925) main_vitu_pane

0x5ca7,	// (0x00052f45) aid_size_cell_itu_ParamLimits

0x5ca7,	// (0x00052f45) aid_size_cell_itu

0xa4d6,	// (0x00057774) bg_popup_window_pane_cp08_ParamLimits

0xa4d6,	// (0x00057774) bg_popup_window_pane_cp08

0x5cbd,	// (0x00052f5b) field_vitu_entry_pane_ParamLimits

0x5cbd,	// (0x00052f5b) field_vitu_entry_pane

0x5cd4,	// (0x00052f72) grid_vitu_function_pane_ParamLimits

0x5cd4,	// (0x00052f72) grid_vitu_function_pane

0x5cef,	// (0x00052f8d) grid_vitu_itu_pane_ParamLimits

0x5cef,	// (0x00052f8d) grid_vitu_itu_pane

0x5d0d,	// (0x00052fab) cell_vitu_itu_pane_ParamLimits

0x5d0d,	// (0x00052fab) cell_vitu_itu_pane

0x5d31,	// (0x00052fcf) cell_vitu_function_pane_ParamLimits

0x5d31,	// (0x00052fcf) cell_vitu_function_pane

0xa4d6,	// (0x00057774) bg_popup_sub_pane_cp08_ParamLimits

0xa4d6,	// (0x00057774) bg_popup_sub_pane_cp08

0x5d4c,	// (0x00052fea) field_vitu_entry_pane_t1_ParamLimits

0x5d4c,	// (0x00052fea) field_vitu_entry_pane_t1

0xd210,	// (0x0005a4ae) field_vitu_entry_pane_t2_ParamLimits

0xd210,	// (0x0005a4ae) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0005cabe) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0005cabe) field_vitu_entry_pane_t

0xd22d,	// (0x0005a4cb) bg_button_pane_cp05_ParamLimits

0xd22d,	// (0x0005a4cb) bg_button_pane_cp05

0x5d6b,	// (0x00053009) cell_vitu_itu_pane_g1

0x5d83,	// (0x00053021) cell_vitu_itu_pane_t1_ParamLimits

0x5d83,	// (0x00053021) cell_vitu_itu_pane_t1

0x5d95,	// (0x00053033) cell_vitu_itu_pane_t2_ParamLimits

0x5d95,	// (0x00053033) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0005cac3) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0005cac3) cell_vitu_itu_pane_t

0xd23b,	// (0x0005a4d9) bg_button_pane_cp07

0x5dd8,	// (0x00053076) cell_vitu_function_pane_g1

0x9b92,	// (0x00056e30) main_calc_pane_g1

0x0d33,	// (0x0004dfd1) aid_visual_content_pane

0x9687,	// (0x00056925) main_vradio_pane

0x5de1,	// (0x0005307f) main_vradio_pane_g1_ParamLimits

0x5de1,	// (0x0005307f) main_vradio_pane_g1

0xd245,	// (0x0005a4e3) main_vradio_pane_g2_ParamLimits

0xd245,	// (0x0005a4e3) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0005caca) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0005caca) main_vradio_pane_g

0x5dfa,	// (0x00053098) main_vradio_pane_t1_ParamLimits

0x5dfa,	// (0x00053098) main_vradio_pane_t1

0x5e0f,	// (0x000530ad) main_vradio_pane_t2_ParamLimits

0x5e0f,	// (0x000530ad) main_vradio_pane_t2

0xd252,	// (0x0005a4f0) main_vradio_pane_t3_ParamLimits

0xd252,	// (0x0005a4f0) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0005cacf) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0005cacf) main_vradio_pane_t

0x5e24,	// (0x000530c2) vradio_rocker_control_pane_ParamLimits

0x5e24,	// (0x000530c2) vradio_rocker_control_pane

0x5e36,	// (0x000530d4) vradio_station_info_pane_ParamLimits

0x5e36,	// (0x000530d4) vradio_station_info_pane

0xd266,	// (0x0005a504) vradio_frequency_info_pane_ParamLimits

0xd266,	// (0x0005a504) vradio_frequency_info_pane

0xcc13,	// (0x00059eb1) vradio_station_info_pane_g1

0xd275,	// (0x0005a513) vradio_station_info_pane_t1_ParamLimits

0xd275,	// (0x0005a513) vradio_station_info_pane_t1

0xd297,	// (0x0005a535) vradio_station_info_pane_t2_ParamLimits

0xd297,	// (0x0005a535) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0005cad6) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0005cad6) vradio_station_info_pane_t

0xd2a9,	// (0x0005a547) vradio_tuning_pane

0xd2b1,	// (0x0005a54f) vradio_rocker_control_pane_g1

0xd2b9,	// (0x0005a557) vradio_rocker_control_pane_g2

0xd2c1,	// (0x0005a55f) vradio_rocker_control_pane_g3

0xd2c9,	// (0x0005a567) vradio_rocker_control_pane_g4

0xd2d1,	// (0x0005a56f) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0005cadb) vradio_rocker_control_pane_g

0x5e48,	// (0x000530e6) vradio_frequency_info_pane_g1

0xd2d9,	// (0x0005a577) vradio_frequency_info_pane_t1_ParamLimits

0xd2d9,	// (0x0005a577) vradio_frequency_info_pane_t1

0x5e52,	// (0x000530f0) vradio_tuning_pane_g1

0x5e5d,	// (0x000530fb) vradio_tuning_pane_t1

0x96ad,	// (0x0005694b) area_side_right_pane_ParamLimits

0x96ad,	// (0x0005694b) area_side_right_pane

0xc7c4,	// (0x00059a62) status_small_pane_g1

0xc7cc,	// (0x00059a6a) status_small_pane_g2

0xc7d5,	// (0x00059a73) status_small_pane_g3

0xc7de,	// (0x00059a7c) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0005c89b) status_small_pane_g

0xc7e7,	// (0x00059a85) status_small_pane_t1

0x9687,	// (0x00056925) main_video3_pane

0xd2ed,	// (0x0005a58b) cams_zoom_vslider_pane

0xd2f5,	// (0x0005a593) image3_wide_pane_ParamLimits

0xd2f5,	// (0x0005a593) image3_wide_pane

0xd30f,	// (0x0005a5ad) image3_wide_small_pane

0xd31b,	// (0x0005a5b9) main_video3_pane_g1_ParamLimits

0xd31b,	// (0x0005a5b9) main_video3_pane_g1

0xd337,	// (0x0005a5d5) main_video3_pane_g2_ParamLimits

0xd337,	// (0x0005a5d5) main_video3_pane_g2

0x0001,

0xf848,	// (0x0005cae6) main_video3_pane_g_ParamLimits

0xf848,	// (0x0005cae6) main_video3_pane_g

0xd353,	// (0x0005a5f1) main_video3_pane_t1_ParamLimits

0xd353,	// (0x0005a5f1) main_video3_pane_t1

0xd37e,	// (0x0005a61c) main_video3_pane_t2_ParamLimits

0xd37e,	// (0x0005a61c) main_video3_pane_t2

0xd3a9,	// (0x0005a647) main_video3_pane_t3_ParamLimits

0xd3a9,	// (0x0005a647) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0005caeb) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0005caeb) main_video3_pane_t

0xd3d6,	// (0x0005a674) cams_zoom_vslider_pane_g1

0xd3df,	// (0x0005a67d) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0005caf2) cams_zoom_vslider_pane_g

0xd3e7,	// (0x0005a685) small_slider_vertical_pane

0xcc13,	// (0x00059eb1) small_slider_vertical_pane_g1

0xcc13,	// (0x00059eb1) small_slider_vertical_pane_g2

0xd3ef,	// (0x0005a68d) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0005caf7) small_slider_vertical_pane_g

0x9687,	// (0x00056925) main_hwr_training_pane

0xd3f8,	// (0x0005a696) hwr_training_instruct_pane_ParamLimits

0xd3f8,	// (0x0005a696) hwr_training_instruct_pane

0x5e6c,	// (0x0005310a) hwr_training_navi_pane_ParamLimits

0x5e6c,	// (0x0005310a) hwr_training_navi_pane

0x5e8b,	// (0x00053129) hwr_training_write_pane_ParamLimits

0x5e8b,	// (0x00053129) hwr_training_write_pane

0x9687,	// (0x00056925) bg_frame_shadow_pane

0xd42f,	// (0x0005a6cd) hwr_training_write_pane_g1

0xd437,	// (0x0005a6d5) hwr_training_write_pane_g2

0xd43f,	// (0x0005a6dd) hwr_training_write_pane_g3

0xd447,	// (0x0005a6e5) hwr_training_write_pane_g4

0xd44f,	// (0x0005a6ed) hwr_training_write_pane_g5

0xd457,	// (0x0005a6f5) hwr_training_write_pane_g6

0xd45f,	// (0x0005a6fd) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0005cafe) hwr_training_write_pane_g

0x9e4a,	// (0x000570e8) hwr_training_navi_pane_g1_ParamLimits

0x9e4a,	// (0x000570e8) hwr_training_navi_pane_g1

0x9e5c,	// (0x000570fa) hwr_training_navi_pane_g2_ParamLimits

0x9e5c,	// (0x000570fa) hwr_training_navi_pane_g2

0x9e6e,	// (0x0005710c) hwr_training_navi_pane_g3_ParamLimits

0x9e6e,	// (0x0005710c) hwr_training_navi_pane_g3

0x9e7e,	// (0x0005711c) hwr_training_navi_pane_g4_ParamLimits

0x9e7e,	// (0x0005711c) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0005cb0d) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0005cb0d) hwr_training_navi_pane_g

0x9e8b,	// (0x00057129) hwr_training_navi_pane_t1

0x5ed5,	// (0x00053173) list_single_hwr_training_instruct_pane_ParamLimits

0x5ed5,	// (0x00053173) list_single_hwr_training_instruct_pane

0xd467,	// (0x0005a705) list_single_hwr_training_instruct_pane_t1

0xcb53,	// (0x00059df1) bg_frame_shadow_pane_g1

0xd476,	// (0x0005a714) bg_frame_shadow_pane_g2

0xd47e,	// (0x0005a71c) bg_frame_shadow_pane_g3

0xd486,	// (0x0005a724) bg_frame_shadow_pane_g4

0xd48e,	// (0x0005a72c) bg_frame_shadow_pane_g5

0xd496,	// (0x0005a734) bg_frame_shadow_pane_g6

0xd49e,	// (0x0005a73c) bg_frame_shadow_pane_g7

0xa85e,	// (0x00057afc) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0005cb18) bg_frame_shadow_pane_g

0x9687,	// (0x00056925) main_video_tele_dialer_pane

0x5eec,	// (0x0005318a) aid_size_cell_video_keypad_ParamLimits

0x5eec,	// (0x0005318a) aid_size_cell_video_keypad

0x5f06,	// (0x000531a4) grid_video_dialer_keypad_pane_ParamLimits

0x5f06,	// (0x000531a4) grid_video_dialer_keypad_pane

0x5f54,	// (0x000531f2) video_down_pane_cp_ParamLimits

0x5f54,	// (0x000531f2) video_down_pane_cp

0x5f86,	// (0x00053224) cell_video_dialer_keypad_pane_ParamLimits

0x5f86,	// (0x00053224) cell_video_dialer_keypad_pane

0xd4a6,	// (0x0005a744) bg_button_pane_cp08_ParamLimits

0xd4a6,	// (0x0005a744) bg_button_pane_cp08

0x5fa8,	// (0x00053246) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5fa8,	// (0x00053246) cell_video_dialer_keypad_pane_g1

0x5631,	// (0x000528cf) mup3_rocker2_pane_ParamLimits

0x5631,	// (0x000528cf) mup3_rocker2_pane

0xcc13,	// (0x00059eb1) mup3_rocker2_pane_g1

0x410e,	// (0x000513ac) main_dialer2_pane

0x9687,	// (0x00056925) main_mp4_pane

0x9ea1,	// (0x0005713f) main_mp4_pane_g1_ParamLimits

0x9ea1,	// (0x0005713f) main_mp4_pane_g1

0x9ea1,	// (0x0005713f) main_mp4_pane_g2_ParamLimits

0x9ea1,	// (0x0005713f) main_mp4_pane_g2

0x5fe3,	// (0x00053281) main_mp4_pane_g3_ParamLimits

0x5fe3,	// (0x00053281) main_mp4_pane_g3

0x9eaf,	// (0x0005714d) main_mp4_pane_g4_ParamLimits

0x9eaf,	// (0x0005714d) main_mp4_pane_g4

0x9ed7,	// (0x00057175) main_mp4_pane_g5_ParamLimits

0x9ed7,	// (0x00057175) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0005cb38) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0005cb38) main_mp4_pane_g

0x9f27,	// (0x000571c5) main_mp4_pane_t1_ParamLimits

0x9f27,	// (0x000571c5) main_mp4_pane_t1

0x9f83,	// (0x00057221) main_mp4_pane_t2_ParamLimits

0x9f83,	// (0x00057221) main_mp4_pane_t2

0xd4b2,	// (0x0005a750) main_mp4_pane_t3_ParamLimits

0xd4b2,	// (0x0005a750) main_mp4_pane_t3

0x9fd5,	// (0x00057273) main_mp4_pane_t4_ParamLimits

0x9fd5,	// (0x00057273) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0005cb45) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0005cb45) main_mp4_pane_t

0xa019,	// (0x000572b7) mp4_progress_pane_ParamLimits

0xa019,	// (0x000572b7) mp4_progress_pane

0xa063,	// (0x00057301) mp4_rocker_pane_ParamLimits

0xa063,	// (0x00057301) mp4_rocker_pane

0xd4da,	// (0x0005a778) mp4_progress_pane_t1

0xd4f3,	// (0x0005a791) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0005cb4e) mp4_progress_pane_t

0xd50c,	// (0x0005a7aa) mup_progress_pane_cp04

0xcc13,	// (0x00059eb1) mp4_rocker_pane_g1

0x601f,	// (0x000532bd) aid_cell_size_keypad2_ParamLimits

0x601f,	// (0x000532bd) aid_cell_size_keypad2

0x6035,	// (0x000532d3) dialer2_ne_pane_ParamLimits

0x6035,	// (0x000532d3) dialer2_ne_pane

0x604f,	// (0x000532ed) grid_dialer2_keypad_pane_ParamLimits

0x604f,	// (0x000532ed) grid_dialer2_keypad_pane

0xc9f6,	// (0x00059c94) bg_popup_call_pane_cp07_ParamLimits

0xc9f6,	// (0x00059c94) bg_popup_call_pane_cp07

0x606d,	// (0x0005330b) dialer2_ne_pane_t1_ParamLimits

0x606d,	// (0x0005330b) dialer2_ne_pane_t1

0x60aa,	// (0x00053348) cell_dialer2_keypad_pane_ParamLimits

0x60aa,	// (0x00053348) cell_dialer2_keypad_pane

0xd52a,	// (0x0005a7c8) bg_button_pane_pane_cp04_ParamLimits

0xd52a,	// (0x0005a7c8) bg_button_pane_pane_cp04

0x60cc,	// (0x0005336a) cell_dialer2_keypad_pane_g1_ParamLimits

0x60cc,	// (0x0005336a) cell_dialer2_keypad_pane_g1

0x1eb0,	// (0x0004f14e) aid_placing_vt_set_content_ParamLimits

0x1eb0,	// (0x0004f14e) aid_placing_vt_set_content

0x1ed8,	// (0x0004f176) aid_placing_vt_set_title_ParamLimits

0x1ed8,	// (0x0004f176) aid_placing_vt_set_title

0x9687,	// (0x00056925) main_image3_pane

0x6192,	// (0x00053430) area_side_right_pane_cp01_ParamLimits

0x6192,	// (0x00053430) area_side_right_pane_cp01

0x9ea1,	// (0x0005713f) main_image3_pane_g1_ParamLimits

0x9ea1,	// (0x0005713f) main_image3_pane_g1

0x61a9,	// (0x00053447) main_image3_pane_g2_ParamLimits

0x61a9,	// (0x00053447) main_image3_pane_g2

0x61d1,	// (0x0005346f) main_image3_pane_g3_ParamLimits

0x61d1,	// (0x0005346f) main_image3_pane_g3

0x61fb,	// (0x00053499) main_image3_pane_g4_ParamLimits

0x61fb,	// (0x00053499) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0005cb5d) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0005cb5d) main_image3_pane_g

0x6225,	// (0x000534c3) main_image3_pane_t1_ParamLimits

0x6225,	// (0x000534c3) main_image3_pane_t1

0x627d,	// (0x0005351b) main_image3_pane_t2_ParamLimits

0x627d,	// (0x0005351b) main_image3_pane_t2

0x62cf,	// (0x0005356d) main_image3_pane_t3_ParamLimits

0x62cf,	// (0x0005356d) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0005cb66) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0005cb66) main_image3_pane_t

0xa4d6,	// (0x00057774) grid_sctrl_middle_pane_cp01_ParamLimits

0xa4d6,	// (0x00057774) grid_sctrl_middle_pane_cp01

0x6357,	// (0x000535f5) cell_sctrl_middle_pane_cp01_ParamLimits

0x6357,	// (0x000535f5) cell_sctrl_middle_pane_cp01

0x6374,	// (0x00053612) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6374,	// (0x00053612) cell_sctrl_middle_pane_cp01_g1

0x9687,	// (0x00056925) main_call4_pane

0x638a,	// (0x00053628) aid_size_button_call4_ParamLimits

0x638a,	// (0x00053628) aid_size_button_call4

0x63bb,	// (0x00053659) call4_windows_pane_ParamLimits

0x63bb,	// (0x00053659) call4_windows_pane

0x63db,	// (0x00053679) grid_call4_button_pane_ParamLimits

0x63db,	// (0x00053679) grid_call4_button_pane

0xd536,	// (0x0005a7d4) call4_windows_conf_pane

0xd54b,	// (0x0005a7e9) popup_call4_audio_first_window_ParamLimits

0xd54b,	// (0x0005a7e9) popup_call4_audio_first_window

0xd597,	// (0x0005a835) popup_call4_audio_second_window_ParamLimits

0xd597,	// (0x0005a835) popup_call4_audio_second_window

0xd5ab,	// (0x0005a849) popup_call4_audio_wait_window_ParamLimits

0xd5ab,	// (0x0005a849) popup_call4_audio_wait_window

0x6408,	// (0x000536a6) cell_call4_button_pane_ParamLimits

0x6408,	// (0x000536a6) cell_call4_button_pane

0x6431,	// (0x000536cf) bg_button_pane_cp09_ParamLimits

0x6431,	// (0x000536cf) bg_button_pane_cp09

0x643d,	// (0x000536db) cell_call4_button_pane_g1_ParamLimits

0x643d,	// (0x000536db) cell_call4_button_pane_g1

0x6463,	// (0x00053701) cell_call4_button_pane_t1_ParamLimits

0x6463,	// (0x00053701) cell_call4_button_pane_t1

0xd5f3,	// (0x0005a891) popup_call4_audio_conf_window_ParamLimits

0xd5f3,	// (0x0005a891) popup_call4_audio_conf_window

0x5691,	// (0x0005292f) mup3_progress_pane_t1_ParamLimits

0x56b0,	// (0x0005294e) mup3_progress_pane_t2_ParamLimits

0xceee,	// (0x0005a18c) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0005ca3f) mup3_progress_pane_t_ParamLimits

0xcf0b,	// (0x0005a1a9) mup_progress_pane_cp03_ParamLimits

0x5c9f,	// (0x00052f3d) mup3_control_keys_pane_g4_copy1

0xa047,	// (0x000572e5) mp4_rocker2_pane_ParamLimits

0xa047,	// (0x000572e5) mp4_rocker2_pane

0xd607,	// (0x0005a8a5) mp4_rocker2_pane_g1

0xd60f,	// (0x0005a8ad) mp4_rocker2_pane_g2

0xa0b5,	// (0x00057353) mp4_rocker2_pane_g3

0xa0bd,	// (0x0005735b) mp4_rocker2_pane_g4

0xa0c5,	// (0x00057363) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0005cb6f) mp4_rocker2_pane_g

0x9687,	// (0x00056925) main_camera4_pane

0x9687,	// (0x00056925) main_video4_pane

0x5f22,	// (0x000531c0) main_video_tele_dialer_pane_t1_ParamLimits

0x5f22,	// (0x000531c0) main_video_tele_dialer_pane_t1

0x5f3b,	// (0x000531d9) main_video_tele_dialer_pane_t2_ParamLimits

0x5f3b,	// (0x000531d9) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0005cb29) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0005cb29) main_video_tele_dialer_pane_t

0x64a1,	// (0x0005373f) cam4_autofocus_pane_ParamLimits

0x64a1,	// (0x0005373f) cam4_autofocus_pane

0x64b7,	// (0x00053755) cam4_image_uncrop_pane_ParamLimits

0x64b7,	// (0x00053755) cam4_image_uncrop_pane

0x64d1,	// (0x0005376f) cam4_indicators_pane_ParamLimits

0x64d1,	// (0x0005376f) cam4_indicators_pane

0x64fc,	// (0x0005379a) main_camera4_pane_g1_ParamLimits

0x64fc,	// (0x0005379a) main_camera4_pane_g1

0x650e,	// (0x000537ac) main_camera4_pane_g2_ParamLimits

0x650e,	// (0x000537ac) main_camera4_pane_g2

0x6521,	// (0x000537bf) main_camera4_pane_g3_ParamLimits

0x6521,	// (0x000537bf) main_camera4_pane_g3

0x6534,	// (0x000537d2) main_camera4_pane_g4_ParamLimits

0x6534,	// (0x000537d2) main_camera4_pane_g4

0x6547,	// (0x000537e5) main_camera4_pane_g5_ParamLimits

0x6547,	// (0x000537e5) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0005cb7a) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0005cb7a) main_camera4_pane_g

0x656b,	// (0x00053809) main_camera4_pane_t1_ParamLimits

0x656b,	// (0x00053809) main_camera4_pane_t1

0xce73,	// (0x0005a111) bg_tb_trans_pane_cp06

0xa0f1,	// (0x0005738f) cam4_indicators_pane_g1

0xa102,	// (0x000573a0) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0005cb95) cam4_indicators_pane_g

0xa120,	// (0x000573be) cam4_indicators_pane_t1

0x65cf,	// (0x0005386d) main_video4_pane_g1_ParamLimits

0x65cf,	// (0x0005386d) main_video4_pane_g1

0x65de,	// (0x0005387c) main_video4_pane_g2_ParamLimits

0x65de,	// (0x0005387c) main_video4_pane_g2

0x65ed,	// (0x0005388b) main_video4_pane_g3_ParamLimits

0x65ed,	// (0x0005388b) main_video4_pane_g3

0x65fc,	// (0x0005389a) main_video4_pane_g4_ParamLimits

0x65fc,	// (0x0005389a) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0005cb9c) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0005cb9c) main_video4_pane_g

0x661a,	// (0x000538b8) vid4_indicators_pane_ParamLimits

0x661a,	// (0x000538b8) vid4_indicators_pane

0x6648,	// (0x000538e6) video4_image_uncrop_cif_pane_ParamLimits

0x6648,	// (0x000538e6) video4_image_uncrop_cif_pane

0x6662,	// (0x00053900) video4_image_uncrop_nhd_pane_ParamLimits

0x6662,	// (0x00053900) video4_image_uncrop_nhd_pane

0x64b7,	// (0x00053755) video4_image_uncrop_vga_pane_ParamLimits

0x64b7,	// (0x00053755) video4_image_uncrop_vga_pane

0xa4d6,	// (0x00057774) bg_tb_trans_pane_cp07

0xa14a,	// (0x000573e8) vid4_indicators_pane_g1

0xa15e,	// (0x000573fc) vid4_indicators_pane_g2

0xa172,	// (0x00057410) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0005cba7) vid4_indicators_pane_g

0xa19f,	// (0x0005743d) vid4_indicators_pane_t1

0x6676,	// (0x00053914) cam4_autofocus_pane_g1

0x667e,	// (0x0005391c) cam4_autofocus_pane_g2

0x6686,	// (0x00053924) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0005cbb2) cam4_autofocus_pane_g

0x668e,	// (0x0005392c) cam4_autofocus_pane_g3_copy1

0x5f6a,	// (0x00053208) video_down_pane_cp_t1

0x5f78,	// (0x00053216) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0005cb2e) video_down_pane_cp_t

0xa4d6,	// (0x00057774) popup_vitu2_window_ParamLimits

0xa4d6,	// (0x00057774) popup_vitu2_window

0x6696,	// (0x00053934) aid_size_cell2_itu2_ParamLimits

0x6696,	// (0x00053934) aid_size_cell2_itu2

0x66bc,	// (0x0005395a) aid_size_cell_itu2_ParamLimits

0x66bc,	// (0x0005395a) aid_size_cell_itu2

0x6718,	// (0x000539b6) bg_popup_window_pane_cp09_ParamLimits

0x6718,	// (0x000539b6) bg_popup_window_pane_cp09

0x6726,	// (0x000539c4) field_vitu2_entry_pane_ParamLimits

0x6726,	// (0x000539c4) field_vitu2_entry_pane

0x674c,	// (0x000539ea) grid_vitu2_function_pane_ParamLimits

0x674c,	// (0x000539ea) grid_vitu2_function_pane

0x679d,	// (0x00053a3b) grid_vitu2_itu_pane_ParamLimits

0x679d,	// (0x00053a3b) grid_vitu2_itu_pane

0x682e,	// (0x00053acc) cell_vitu2_itu_pane_ParamLimits

0x682e,	// (0x00053acc) cell_vitu2_itu_pane

0x6852,	// (0x00053af0) cell_vitu2_function_pane_ParamLimits

0x6852,	// (0x00053af0) cell_vitu2_function_pane

0xd617,	// (0x0005a8b5) bg_popup_call_pane_cp08_ParamLimits

0xd617,	// (0x0005a8b5) bg_popup_call_pane_cp08

0xd630,	// (0x0005a8ce) field_vitu2_entry_pane_g1

0xd63c,	// (0x0005a8da) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0005cbb9) field_vitu2_entry_pane_g

0x01d9,	// (0x0004d477) field_vitu2_entry_pane_t1_ParamLimits

0x01d9,	// (0x0004d477) field_vitu2_entry_pane_t1

0x6891,	// (0x00053b2f) field_vitu2_entry_pane_t2_ParamLimits

0x6891,	// (0x00053b2f) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0005cbc0) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0005cbc0) field_vitu2_entry_pane_t

0x68ae,	// (0x00053b4c) bg_button_pane_cp010_ParamLimits

0x68ae,	// (0x00053b4c) bg_button_pane_cp010

0x68bc,	// (0x00053b5a) cell_vitu2_itu_pane_g1

0x68e7,	// (0x00053b85) cell_vitu2_itu_pane_t1_ParamLimits

0x68e7,	// (0x00053b85) cell_vitu2_itu_pane_t1

0x020a,	// (0x0004d4a8) cell_vitu2_itu_pane_t2_ParamLimits

0x020a,	// (0x0004d4a8) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0005cbca) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0005cbca) cell_vitu2_itu_pane_t

0xa4d6,	// (0x00057774) bg_button_pane_cp011

0x6945,	// (0x00053be3) cell_vitu2_function_pane_g1

0x9687,	// (0x00056925) main_myfav_hc_pane

0x631f,	// (0x000535bd) popup_image3_note_pane_ParamLimits

0x631f,	// (0x000535bd) popup_image3_note_pane

0x633b,	// (0x000535d9) popup_image3_tool_bar_pane_ParamLimits

0x633b,	// (0x000535d9) popup_image3_tool_bar_pane

0x0298,	// (0x0004d536) cell_vitu2_itu_pane_t3_ParamLimits

0x0298,	// (0x0004d536) cell_vitu2_itu_pane_t3

0x9687,	// (0x00056925) bg_popup_trans_pane

0xd65e,	// (0x0005a8fc) grid_image3_tool_bar_pane

0xd668,	// (0x0005a906) bg_popup_trans_pane_g1

0xabb3,	// (0x00057e51) bg_popup_trans_pane_g2

0xd670,	// (0x0005a90e) bg_popup_trans_pane_g3

0xd678,	// (0x0005a916) bg_popup_trans_pane_g4

0xd680,	// (0x0005a91e) bg_popup_trans_pane_g5

0xd688,	// (0x0005a926) bg_popup_trans_pane_g6

0xd690,	// (0x0005a92e) bg_popup_trans_pane_g7

0xd698,	// (0x0005a936) bg_popup_trans_pane_g8

0xab93,	// (0x00057e31) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0005cbd1) bg_popup_trans_pane_g

0xd6a0,	// (0x0005a93e) cell_image3_tool_bar_pane_ParamLimits

0xd6a0,	// (0x0005a93e) cell_image3_tool_bar_pane

0xcc13,	// (0x00059eb1) cell_image3_tool_bar_pane_g1

0x9687,	// (0x00056925) bg_popup_trans_pane_cp1

0xd6b4,	// (0x0005a952) popup_image3_note_pane_t1

0xd6c2,	// (0x0005a960) popup_image3_note_pane_t2

0xd6d0,	// (0x0005a96e) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0005cbe4) popup_image3_note_pane_t

0xd6de,	// (0x0005a97c) popup_image3_note_pane_t3_copy1

0x6959,	// (0x00053bf7) bg_myfav_hc_instruction_pane_ParamLimits

0x6959,	// (0x00053bf7) bg_myfav_hc_instruction_pane

0x696f,	// (0x00053c0d) cell_myfav_contact_pane_ParamLimits

0x696f,	// (0x00053c0d) cell_myfav_contact_pane

0x698d,	// (0x00053c2b) cell_myfav_contact_pane_cp1_ParamLimits

0x698d,	// (0x00053c2b) cell_myfav_contact_pane_cp1

0x69a5,	// (0x00053c43) cell_myfav_contact_pane_cp2_ParamLimits

0x69a5,	// (0x00053c43) cell_myfav_contact_pane_cp2

0x69bd,	// (0x00053c5b) cell_myfav_contact_pane_cp3_ParamLimits

0x69bd,	// (0x00053c5b) cell_myfav_contact_pane_cp3

0x69d4,	// (0x00053c72) cell_myfav_contact_pane_cp4_ParamLimits

0x69d4,	// (0x00053c72) cell_myfav_contact_pane_cp4

0x69ec,	// (0x00053c8a) cell_myfav_contact_pane_cp5_ParamLimits

0x69ec,	// (0x00053c8a) cell_myfav_contact_pane_cp5

0x6a00,	// (0x00053c9e) cell_myfav_contact_pane_cp6_ParamLimits

0x6a00,	// (0x00053c9e) cell_myfav_contact_pane_cp6

0x6a16,	// (0x00053cb4) cell_myfav_contact_pane_cp7_ParamLimits

0x6a16,	// (0x00053cb4) cell_myfav_contact_pane_cp7

0xd6ec,	// (0x0005a98a) listscroll_gen_pane_cp05

0x6a30,	// (0x00053cce) main_myfav_hc_pane_g1_ParamLimits

0x6a30,	// (0x00053cce) main_myfav_hc_pane_g1

0x6a4a,	// (0x00053ce8) main_myfav_hc_pane_g2_ParamLimits

0x6a4a,	// (0x00053ce8) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0005cbeb) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0005cbeb) main_myfav_hc_pane_g

0x6a7c,	// (0x00053d1a) main_myfav_hc_pane_t1_ParamLimits

0x6a7c,	// (0x00053d1a) main_myfav_hc_pane_t1

0xd6f5,	// (0x0005a993) main_myfav_hc_pane_t2_ParamLimits

0xd6f5,	// (0x0005a993) main_myfav_hc_pane_t2

0xd707,	// (0x0005a9a5) main_myfav_hc_pane_t3_ParamLimits

0xd707,	// (0x0005a9a5) main_myfav_hc_pane_t3

0x6a93,	// (0x00053d31) main_myfav_hc_pane_t4_ParamLimits

0x6a93,	// (0x00053d31) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0005cbf2) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0005cbf2) main_myfav_hc_pane_t

0xcc13,	// (0x00059eb1) bg_myfav_hc_instruction_pane_g1

0xd719,	// (0x0005a9b7) cell_myfav_contact_pane_g1_ParamLimits

0xd719,	// (0x0005a9b7) cell_myfav_contact_pane_g1

0xd719,	// (0x0005a9b7) cell_myfav_contact_pane_g2_ParamLimits

0xd719,	// (0x0005a9b7) cell_myfav_contact_pane_g2

0xd725,	// (0x0005a9c3) cell_myfav_contact_pane_g3_ParamLimits

0xd725,	// (0x0005a9c3) cell_myfav_contact_pane_g3

0xced8,	// (0x0005a176) cell_myfav_contact_pane_g4_ParamLimits

0xced8,	// (0x0005a176) cell_myfav_contact_pane_g4

0xd732,	// (0x0005a9d0) cell_myfav_contact_pane_g5_ParamLimits

0xd732,	// (0x0005a9d0) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0005cbfd) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0005cbfd) cell_myfav_contact_pane_g

0x6a64,	// (0x00053d02) main_myfav_hc_pane_g3_ParamLimits

0x6a64,	// (0x00053d02) main_myfav_hc_pane_g3

0x0e7e,	// (0x0004e11c) popup_adpt_find_window

0x6abb,	// (0x00053d59) afind_page_pane_ParamLimits

0x6abb,	// (0x00053d59) afind_page_pane

0x6ad0,	// (0x00053d6e) aid_size_cell_afind_ParamLimits

0x6ad0,	// (0x00053d6e) aid_size_cell_afind

0x6aee,	// (0x00053d8c) bg_popup_sub_pane_cp09_ParamLimits

0x6aee,	// (0x00053d8c) bg_popup_sub_pane_cp09

0x6afb,	// (0x00053d99) find_pane_cp01_ParamLimits

0x6afb,	// (0x00053d99) find_pane_cp01

0xd73e,	// (0x0005a9dc) grid_afind_control_pane_ParamLimits

0xd73e,	// (0x0005a9dc) grid_afind_control_pane

0x6b08,	// (0x00053da6) grid_afind_pane_ParamLimits

0x6b08,	// (0x00053da6) grid_afind_pane

0x6b27,	// (0x00053dc5) cell_afind_pane_ParamLimits

0x6b27,	// (0x00053dc5) cell_afind_pane

0xcc13,	// (0x00059eb1) afind_page_pane_g1

0x6b88,	// (0x00053e26) afind_page_pane_g2

0x6b91,	// (0x00053e2f) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0005cc08) afind_page_pane_g

0x6b9a,	// (0x00053e38) afind_page_pane_t1

0xd752,	// (0x0005a9f0) cell_afind_grid_control_pane_ParamLimits

0xd752,	// (0x0005a9f0) cell_afind_grid_control_pane

0xd52a,	// (0x0005a7c8) bg_button_pane_cp69_ParamLimits

0xd52a,	// (0x0005a7c8) bg_button_pane_cp69

0x6bba,	// (0x00053e58) cell_afind_pane_g1_ParamLimits

0x6bba,	// (0x00053e58) cell_afind_pane_g1

0x6bc7,	// (0x00053e65) cell_afind_pane_t1_ParamLimits

0x6bc7,	// (0x00053e65) cell_afind_pane_t1

0xa9ac,	// (0x00057c4a) bg_button_pane_cp72

0xd761,	// (0x0005a9ff) cell_afind_grid_control_pane_g1

0x3bcc,	// (0x00050e6a) aid_image_placing_area_ParamLimits

0x3bcc,	// (0x00050e6a) aid_image_placing_area

0xd1f8,	// (0x0005a496) field_vitu_entry_pane_g1_ParamLimits

0xd1f8,	// (0x0005a496) field_vitu_entry_pane_g1

0xd204,	// (0x0005a4a2) field_vitu_entry_pane_g2_ParamLimits

0xd204,	// (0x0005a4a2) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0005cab9) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0005cab9) field_vitu_entry_pane_g

0x5d6b,	// (0x00053009) cell_vitu_itu_pane_g1_ParamLimits

0x5dbb,	// (0x00053059) cell_vitu_itu_pane_t3_ParamLimits

0x5dbb,	// (0x00053059) cell_vitu_itu_pane_t3

0xd4da,	// (0x0005a778) mp4_progress_pane_t1_ParamLimits

0xd4f3,	// (0x0005a791) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0005cb4e) mp4_progress_pane_t_ParamLimits

0xd50c,	// (0x0005a7aa) mup_progress_pane_cp04_ParamLimits

0x6aa7,	// (0x00053d45) main_myfav_hc_pane_t5_ParamLimits

0x6aa7,	// (0x00053d45) main_myfav_hc_pane_t5

0x96a5,	// (0x00056943) aid_zoom_text_primary

0x0e7e,	// (0x0004e11c) popup_adpt_find_window_ParamLimits

0xa4d6,	// (0x00057774) main_cam_set_pane

0x64e8,	// (0x00053786) cam4_zoom_pane_ParamLimits

0x64e8,	// (0x00053786) cam4_zoom_pane

0x6bd9,	// (0x00053e77) main_cam_set_pane_g1_ParamLimits

0x6bd9,	// (0x00053e77) main_cam_set_pane_g1

0x6be7,	// (0x00053e85) main_cam_set_pane_g2_ParamLimits

0x6be7,	// (0x00053e85) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0005cc0f) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0005cc0f) main_cam_set_pane_g

0x6c08,	// (0x00053ea6) main_cam_set_pane_t1_ParamLimits

0x6c08,	// (0x00053ea6) main_cam_set_pane_t1

0x6c23,	// (0x00053ec1) main_cset_listscroll_pane_ParamLimits

0x6c23,	// (0x00053ec1) main_cset_listscroll_pane

0x6c43,	// (0x00053ee1) main_cset_slider_pane_ParamLimits

0x6c43,	// (0x00053ee1) main_cset_slider_pane

0xd772,	// (0x0005aa10) main_cset_list_pane_ParamLimits

0xd772,	// (0x0005aa10) main_cset_list_pane

0xd782,	// (0x0005aa20) scroll_pane_cp028

0x6c69,	// (0x00053f07) aid_area_touch_slider

0x6c85,	// (0x00053f23) cset_slider_pane

0x6caf,	// (0x00053f4d) main_cset_slider_pane_g1

0x6cc4,	// (0x00053f62) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0005cc14) main_cset_slider_pane_g

0xd7bb,	// (0x0005aa59) main_cset_slider_pane_t1

0x6d80,	// (0x0005401e) main_cset_slider_pane_t2

0x6d9a,	// (0x00054038) main_cset_slider_pane_t3

0x6db4,	// (0x00054052) main_cset_slider_pane_t4

0x6dce,	// (0x0005406c) main_cset_slider_pane_t5

0x6de8,	// (0x00054086) main_cset_slider_pane_t6

0x6dfd,	// (0x0005409b) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0005cc39) main_cset_slider_pane_t

0x6f01,	// (0x0005419f) cset_list_set_pane_ParamLimits

0x6f01,	// (0x0005419f) cset_list_set_pane

0x6f14,	// (0x000541b2) aid_position_infowindow_above

0x6f1c,	// (0x000541ba) aid_position_infowindow_below

0x6f24,	// (0x000541c2) cset_list_set_pane_g1_ParamLimits

0x6f24,	// (0x000541c2) cset_list_set_pane_g1

0x02f6,	// (0x0004d594) cset_list_set_pane_g3_ParamLimits

0x02f6,	// (0x0004d594) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0005cc58) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0005cc58) cset_list_set_pane_g

0x6f30,	// (0x000541ce) cset_list_set_pane_t1_ParamLimits

0x6f30,	// (0x000541ce) cset_list_set_pane_t1

0xa4d6,	// (0x00057774) list_highlight_pane_cp021_ParamLimits

0xa4d6,	// (0x00057774) list_highlight_pane_cp021

0xb53d,	// (0x000587db) cset_slider_pane_g1

0xb54f,	// (0x000587ed) cset_slider_pane_g2

0xb546,	// (0x000587e4) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0005cc5d) cset_slider_pane_g

0xa1b6,	// (0x00057454) aid_area_touch_cam4_zoom

0xa1be,	// (0x0005745c) cam4_zoom_cont_pane

0xa1c6,	// (0x00057464) cam4_zoom_pane_g1

0xa1ce,	// (0x0005746c) cam4_zoom_pane_g2

0x6f45,	// (0x000541e3) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0005cc64) cam4_zoom_pane_g

0xdd98,	// (0x0005b036) cam4_zoom_cont_pane_g1

0xdda1,	// (0x0005b03f) cam4_zoom_cont_pane_g2

0xddaa,	// (0x0005b048) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0005cc6b) cam4_zoom_cont_pane_g

0x63a8,	// (0x00053646) call4_image_pane_ParamLimits

0x63a8,	// (0x00053646) call4_image_pane

0xd536,	// (0x0005a7d4) call4_windows_conf_pane_ParamLimits

0xd575,	// (0x0005a813) popup_call4_audio_in_window_ParamLimits

0xd575,	// (0x0005a813) popup_call4_audio_in_window

0x9687,	// (0x00056925) bg_popup_call2_act_pane_cp02

0xd5eb,	// (0x0005a889) call4_list_conf_pane

0xcc13,	// (0x00059eb1) call4_image_pane_g1

0xcc13,	// (0x00059eb1) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0005c97f) call4_image_pane_g

0xd85b,	// (0x0005aaf9) list_single_graphic_popup_conf4_pane_ParamLimits

0xd85b,	// (0x0005aaf9) list_single_graphic_popup_conf4_pane

0x9687,	// (0x00056925) list_highlight_pane_cp022

0xd86e,	// (0x0005ab0c) list_single_graphic_popup_conf4_pane_g1

0xb0ed,	// (0x0005838b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0005cc72) list_single_graphic_popup_conf4_pane_g

0xd876,	// (0x0005ab14) list_single_graphic_popup_conf4_pane_t1

0x1ffc,	// (0x0004f29a) popup_vtel_slider_window_ParamLimits

0x1ffc,	// (0x0004f29a) popup_vtel_slider_window

0xd518,	// (0x0005a7b6) dialer2_ne_pane_t2_ParamLimits

0xd518,	// (0x0005a7b6) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0005cb53) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0005cb53) dialer2_ne_pane_t

0xc9f6,	// (0x00059c94) bg_popup_sub_pane_cp010_ParamLimits

0xc9f6,	// (0x00059c94) bg_popup_sub_pane_cp010

0x6f4d,	// (0x000541eb) popup_vtel_slider_window_g1_ParamLimits

0x6f4d,	// (0x000541eb) popup_vtel_slider_window_g1

0x6f60,	// (0x000541fe) popup_vtel_slider_window_g2_ParamLimits

0x6f60,	// (0x000541fe) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0005cc77) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0005cc77) popup_vtel_slider_window_g

0x6fb6,	// (0x00054254) vtel_slider_pane_ParamLimits

0x6fb6,	// (0x00054254) vtel_slider_pane

0x6fd8,	// (0x00054276) vtel_slider_pane_g1_ParamLimits

0x6fd8,	// (0x00054276) vtel_slider_pane_g1

0x6fec,	// (0x0005428a) vtel_slider_pane_g2_ParamLimits

0x6fec,	// (0x0005428a) vtel_slider_pane_g2

0x7004,	// (0x000542a2) vtel_slider_pane_g3_ParamLimits

0x7004,	// (0x000542a2) vtel_slider_pane_g3

0x6fd8,	// (0x00054276) vtel_slider_pane_g4_ParamLimits

0x6fd8,	// (0x00054276) vtel_slider_pane_g4

0x701a,	// (0x000542b8) vtel_slider_pane_g5_ParamLimits

0x701a,	// (0x000542b8) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0005cc80) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0005cc80) vtel_slider_pane_g

0xa4d6,	// (0x00057774) main_gallery2_pane

0x66e8,	// (0x00053986) aid_size_row_itut2_dropdow_list_ParamLimits

0x66e8,	// (0x00053986) aid_size_row_itut2_dropdow_list

0x6774,	// (0x00053a12) grid_vitu2_function_top_pane_ParamLimits

0x6774,	// (0x00053a12) grid_vitu2_function_top_pane

0x67d9,	// (0x00053a77) popup_vitu2_dropdown_list_window_ParamLimits

0x67d9,	// (0x00053a77) popup_vitu2_dropdown_list_window

0x6802,	// (0x00053aa0) popup_vitu2_match_list_window

0x703e,	// (0x000542dc) cell_vitu2_function_top_pane_ParamLimits

0x703e,	// (0x000542dc) cell_vitu2_function_top_pane

0x705c,	// (0x000542fa) cell_vitu2_function_top_pane_cp01_ParamLimits

0x705c,	// (0x000542fa) cell_vitu2_function_top_pane_cp01

0x707a,	// (0x00054318) cell_vitu2_function_top_wide_pane_ParamLimits

0x707a,	// (0x00054318) cell_vitu2_function_top_wide_pane

0xa4d6,	// (0x00057774) bg_button_pane_cp012

0x7098,	// (0x00054336) cell_vitu2_function_top_pane_g1

0xa1d6,	// (0x00057474) bg_button_pane_cp013_ParamLimits

0xa1d6,	// (0x00057474) bg_button_pane_cp013

0x70ac,	// (0x0005434a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x70ac,	// (0x0005434a) cell_vitu2_function_top_wide_pane_g1

0xa4d6,	// (0x00057774) bg_popup_sub_pane_cp20

0x70c4,	// (0x00054362) list_vitu2_match_list_pane

0xd668,	// (0x0005a906) bg_popup_sub_pane_cp20_g1

0xd670,	// (0x0005a90e) bg_popup_sub_pane_cp20_g2

0xabb3,	// (0x00057e51) bg_popup_sub_pane_cp20_g3

0xd678,	// (0x0005a916) bg_popup_sub_pane_cp20_g4

0xab93,	// (0x00057e31) bg_popup_sub_pane_cp20_g5

0xd88c,	// (0x0005ab2a) bg_popup_sub_pane_cp20_g6

0xd688,	// (0x0005a926) bg_popup_sub_pane_cp20_g7

0xd690,	// (0x0005a92e) bg_popup_sub_pane_cp20_g8

0xd698,	// (0x0005a936) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0005cc8b) bg_popup_sub_pane_cp20_g

0xa1f2,	// (0x00057490) list_vitu2_match_list_item_pane_ParamLimits

0xa1f2,	// (0x00057490) list_vitu2_match_list_item_pane

0xa204,	// (0x000574a2) list_vitu2_match_list_item_pane_t1

0x9687,	// (0x00056925) bg_popup_sub_pane_cp21

0xaff1,	// (0x0005828f) grid_vitu2_dropdown_list_pane

0x70fa,	// (0x00054398) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x70fa,	// (0x00054398) cell_vitu2_dropdown_list_char_pane

0x711b,	// (0x000543b9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x711b,	// (0x000543b9) cell_vitu2_dropdown_list_ctrl_pane

0xd894,	// (0x0005ab32) cell_vitu2_dropdown_list_char_pane_g1

0xd89d,	// (0x0005ab3b) cell_vitu2_dropdown_list_char_pane_g2

0xd8a6,	// (0x0005ab44) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0005cca8) cell_vitu2_dropdown_list_char_pane_g

0x7147,	// (0x000543e5) cell_vitu2_dropdown_list_char_pane_t1

0x7155,	// (0x000543f3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7155,	// (0x000543f3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7165,	// (0x00054403) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7165,	// (0x00054403) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7176,	// (0x00054414) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7176,	// (0x00054414) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7186,	// (0x00054424) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7186,	// (0x00054424) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce73,	// (0x0005a111) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce73,	// (0x0005a111) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0005ccaf) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0005ccaf) cell_vitu2_dropdown_list_ctrl_pane_g

0x71a2,	// (0x00054440) aid_size_cell_gallery2_ParamLimits

0x71a2,	// (0x00054440) aid_size_cell_gallery2

0x71c0,	// (0x0005445e) grid_gallery2_pane_ParamLimits

0x71c0,	// (0x0005445e) grid_gallery2_pane

0x71da,	// (0x00054478) scroll_pane_cp029_ParamLimits

0x71da,	// (0x00054478) scroll_pane_cp029

0x71e6,	// (0x00054484) cell_gallery2_pane_ParamLimits

0x71e6,	// (0x00054484) cell_gallery2_pane

0xd8af,	// (0x0005ab4d) cell_gallery2_pane_g2

0x7242,	// (0x000544e0) cell_gallery2_pane_g3

0xd8b7,	// (0x0005ab55) cell_gallery2_pane_g4

0xd8bf,	// (0x0005ab5d) cell_gallery2_pane_g5

0xb3f9,	// (0x00058697) grid_highlight_pane_cp10

0x6802,	// (0x00053aa0) popup_vitu2_match_list_window_ParamLimits

0x6817,	// (0x00053ab5) popup_vitu2_query_window_ParamLimits

0x6817,	// (0x00053ab5) popup_vitu2_query_window

0x9687,	// (0x00056925) bg_vitu2_candi_button_pane

0xd894,	// (0x0005ab32) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd89d,	// (0x0005ab3b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8a6,	// (0x0005ab44) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x033a,	// (0x0004d5d8) bg_button_pane_cp015

0x724a,	// (0x000544e8) bg_button_pane_cp016

0x725d,	// (0x000544fb) bg_button_pane_cp017

0xc809,	// (0x00059aa7) bg_popup_sub_pane_cp22

0xd8c7,	// (0x0005ab65) popup_vitu2_query_window_g1

0x036f,	// (0x0004d60d) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0005ccba) popup_vitu2_query_window_g

0x038e,	// (0x0004d62c) popup_vitu2_query_window_t1_ParamLimits

0x038e,	// (0x0004d62c) popup_vitu2_query_window_t1

0x03c3,	// (0x0004d661) popup_vitu2_query_window_t2_ParamLimits

0x03c3,	// (0x0004d661) popup_vitu2_query_window_t2

0x03d5,	// (0x0004d673) popup_vitu2_query_window_t3_ParamLimits

0x03d5,	// (0x0004d673) popup_vitu2_query_window_t3

0x7281,	// (0x0005451f) popup_vitu2_query_window_t4_ParamLimits

0x7281,	// (0x0005451f) popup_vitu2_query_window_t4

0x72a2,	// (0x00054540) popup_vitu2_query_window_t5_ParamLimits

0x72a2,	// (0x00054540) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0005ccc1) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0005ccc1) popup_vitu2_query_window_t

0xd76a,	// (0x0005aa08) main_cset_text_pane

0x6c69,	// (0x00053f07) aid_area_touch_slider_ParamLimits

0x6c85,	// (0x00053f23) cset_slider_pane_ParamLimits

0x6caf,	// (0x00053f4d) main_cset_slider_pane_g1_ParamLimits

0x6cc4,	// (0x00053f62) main_cset_slider_pane_g2_ParamLimits

0xd78b,	// (0x0005aa29) main_cset_slider_pane_g3_ParamLimits

0xd78b,	// (0x0005aa29) main_cset_slider_pane_g3

0x6cd9,	// (0x00053f77) main_cset_slider_pane_g4_ParamLimits

0x6cd9,	// (0x00053f77) main_cset_slider_pane_g4

0x6ce8,	// (0x00053f86) main_cset_slider_pane_g5_ParamLimits

0x6ce8,	// (0x00053f86) main_cset_slider_pane_g5

0x6cf4,	// (0x00053f92) main_cset_slider_pane_g6_ParamLimits

0x6cf4,	// (0x00053f92) main_cset_slider_pane_g6

0xf976,	// (0x0005cc14) main_cset_slider_pane_g_ParamLimits

0xd7bb,	// (0x0005aa59) main_cset_slider_pane_t1_ParamLimits

0x6d80,	// (0x0005401e) main_cset_slider_pane_t2_ParamLimits

0x6d9a,	// (0x00054038) main_cset_slider_pane_t3_ParamLimits

0x6db4,	// (0x00054052) main_cset_slider_pane_t4_ParamLimits

0x6dce,	// (0x0005406c) main_cset_slider_pane_t5_ParamLimits

0x6de8,	// (0x00054086) main_cset_slider_pane_t6_ParamLimits

0x6dfd,	// (0x0005409b) main_cset_slider_pane_t7_ParamLimits

0x6e27,	// (0x000540c5) main_cset_slider_pane_t8_ParamLimits

0x6e27,	// (0x000540c5) main_cset_slider_pane_t8

0x6e4f,	// (0x000540ed) main_cset_slider_pane_t9_ParamLimits

0x6e4f,	// (0x000540ed) main_cset_slider_pane_t9

0x6e77,	// (0x00054115) main_cset_slider_pane_t10_ParamLimits

0x6e77,	// (0x00054115) main_cset_slider_pane_t10

0x6e9f,	// (0x0005413d) main_cset_slider_pane_t11_ParamLimits

0x6e9f,	// (0x0005413d) main_cset_slider_pane_t11

0x6ec7,	// (0x00054165) main_cset_slider_pane_t12_ParamLimits

0x6ec7,	// (0x00054165) main_cset_slider_pane_t12

0x6ee4,	// (0x00054182) main_cset_slider_pane_t13_ParamLimits

0x6ee4,	// (0x00054182) main_cset_slider_pane_t13

0xf99b,	// (0x0005cc39) main_cset_slider_pane_t_ParamLimits

0x9687,	// (0x00056925) bg_popup_sub_pane_cp011

0xd8d3,	// (0x0005ab71) main_cset_text_pane_g1

0xd8db,	// (0x0005ab79) main_cset_text_pane_t1

0xd8e9,	// (0x0005ab87) main_cset_text_pane_t2

0xd8f7,	// (0x0005ab95) main_cset_text_pane_t3

0xd905,	// (0x0005aba3) main_cset_text_pane_t4

0xd913,	// (0x0005abb1) main_cset_text_pane_t5

0xd921,	// (0x0005abbf) main_cset_text_pane_t6

0xd92f,	// (0x0005abcd) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0005ccd0) main_cset_text_pane_t

0x9687,	// (0x00056925) main_cam4_burst_pane

0x9687,	// (0x00056925) main_cam5_pane

0x6ba8,	// (0x00053e46) bg_button_pane_cp019

0x6bb1,	// (0x00053e4f) bg_button_pane_cp020

0xd797,	// (0x0005aa35) main_cset_slider_pane_g7_ParamLimits

0xd797,	// (0x0005aa35) main_cset_slider_pane_g7

0xd7a3,	// (0x0005aa41) main_cset_slider_pane_g8_ParamLimits

0xd7a3,	// (0x0005aa41) main_cset_slider_pane_g8

0x6d08,	// (0x00053fa6) main_cset_slider_pane_g9_ParamLimits

0x6d08,	// (0x00053fa6) main_cset_slider_pane_g9

0x6d14,	// (0x00053fb2) main_cset_slider_pane_g10_ParamLimits

0x6d14,	// (0x00053fb2) main_cset_slider_pane_g10

0x6d20,	// (0x00053fbe) main_cset_slider_pane_g11_ParamLimits

0x6d20,	// (0x00053fbe) main_cset_slider_pane_g11

0x6d2c,	// (0x00053fca) main_cset_slider_pane_g12_ParamLimits

0x6d2c,	// (0x00053fca) main_cset_slider_pane_g12

0x6d38,	// (0x00053fd6) main_cset_slider_pane_g13_ParamLimits

0x6d38,	// (0x00053fd6) main_cset_slider_pane_g13

0x6d44,	// (0x00053fe2) main_cset_slider_pane_g14_ParamLimits

0x6d44,	// (0x00053fe2) main_cset_slider_pane_g14

0x6d50,	// (0x00053fee) main_cset_slider_pane_g15_ParamLimits

0x6d50,	// (0x00053fee) main_cset_slider_pane_g15

0xd7e9,	// (0x0005aa87) main_cset_slider_pane_t14_ParamLimits

0xd7e9,	// (0x0005aa87) main_cset_slider_pane_t14

0xd822,	// (0x0005aac0) main_cset_slider_pane_t15_ParamLimits

0xd822,	// (0x0005aac0) main_cset_slider_pane_t15

0x72c3,	// (0x00054561) aid_cam4_burst_size_cell_ParamLimits

0x72c3,	// (0x00054561) aid_cam4_burst_size_cell

0x72e3,	// (0x00054581) grid_cam4_burst_pane_ParamLimits

0x72e3,	// (0x00054581) grid_cam4_burst_pane

0x731b,	// (0x000545b9) linegrid_cam4_burst_pane_ParamLimits

0x731b,	// (0x000545b9) linegrid_cam4_burst_pane

0xd93d,	// (0x0005abdb) scroll_pane_cp30_ParamLimits

0xd93d,	// (0x0005abdb) scroll_pane_cp30

0x7341,	// (0x000545df) cell_cam4_burst_pane_ParamLimits

0x7341,	// (0x000545df) cell_cam4_burst_pane

0xd949,	// (0x0005abe7) linegrid_cam4_burst_pane_g1_ParamLimits

0xd949,	// (0x0005abe7) linegrid_cam4_burst_pane_g1

0x738e,	// (0x0005462c) linegrid_cam4_burst_pane_g2_ParamLimits

0x738e,	// (0x0005462c) linegrid_cam4_burst_pane_g2

0xd956,	// (0x0005abf4) linegrid_cam4_burst_pane_g3_ParamLimits

0xd956,	// (0x0005abf4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0005ccdf) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0005ccdf) linegrid_cam4_burst_pane_g

0x739f,	// (0x0005463d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x739f,	// (0x0005463d) linegrid_cam4_burst_pane_g3_copy1

0xd963,	// (0x0005ac01) linegrid_cam4_burst_pane_g4_ParamLimits

0xd963,	// (0x0005ac01) linegrid_cam4_burst_pane_g4

0x73b9,	// (0x00054657) linegrid_cam4_burst_pane_g5_ParamLimits

0x73b9,	// (0x00054657) linegrid_cam4_burst_pane_g5

0x73ca,	// (0x00054668) linegrid_cam4_burst_pane_g6_ParamLimits

0x73ca,	// (0x00054668) linegrid_cam4_burst_pane_g6

0xd970,	// (0x0005ac0e) linegrid_cam4_burst_pane_g7_ParamLimits

0xd970,	// (0x0005ac0e) linegrid_cam4_burst_pane_g7

0x73e1,	// (0x0005467f) cell_cam4_burst_pane_g1

0xd989,	// (0x0005ac27) main_cam5_pane_t1_ParamLimits

0xd989,	// (0x0005ac27) main_cam5_pane_t1

0xd99b,	// (0x0005ac39) main_cam5_pane_t2_ParamLimits

0xd99b,	// (0x0005ac39) main_cam5_pane_t2

0xd9ad,	// (0x0005ac4b) main_cam5_pane_t3_ParamLimits

0xd9ad,	// (0x0005ac4b) main_cam5_pane_t3

0xd9bf,	// (0x0005ac5d) main_cam5_pane_t4_ParamLimits

0xd9bf,	// (0x0005ac5d) main_cam5_pane_t4

0xd9d7,	// (0x0005ac75) main_cam5_pane_t5_ParamLimits

0xd9d7,	// (0x0005ac75) main_cam5_pane_t5

0xd9eb,	// (0x0005ac89) main_cam5_pane_t6_ParamLimits

0xd9eb,	// (0x0005ac89) main_cam5_pane_t6

0xd9ff,	// (0x0005ac9d) main_cam5_pane_t7_ParamLimits

0xd9ff,	// (0x0005ac9d) main_cam5_pane_t7

0xda11,	// (0x0005acaf) main_cam5_pane_t8_ParamLimits

0xda11,	// (0x0005acaf) main_cam5_pane_t8

0xda2d,	// (0x0005accb) main_cam5_pane_t9_ParamLimits

0xda2d,	// (0x0005accb) main_cam5_pane_t9

0xda3f,	// (0x0005acdd) main_cam5_pane_t10_ParamLimits

0xda3f,	// (0x0005acdd) main_cam5_pane_t10

0xda51,	// (0x0005acef) main_cam5_pane_t11_ParamLimits

0xda51,	// (0x0005acef) main_cam5_pane_t11

0xda63,	// (0x0005ad01) main_cam5_pane_t12_ParamLimits

0xda63,	// (0x0005ad01) main_cam5_pane_t12

0xda78,	// (0x0005ad16) main_cam5_pane_t13_ParamLimits

0xda78,	// (0x0005ad16) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0005cceb) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0005cceb) main_cam5_pane_t

0x0f00,	// (0x0004e19e) popup_scut_keymap_window_ParamLimits

0x0f00,	// (0x0004e19e) popup_scut_keymap_window

0x73f6,	// (0x00054694) aid_size_cell_brow_shortcut

0xb3f9,	// (0x00058697) bg_popup_window_pane_cp010

0x7402,	// (0x000546a0) grid_scut_pane

0x740e,	// (0x000546ac) cell_scut_pane_ParamLimits

0x740e,	// (0x000546ac) cell_scut_pane

0x7425,	// (0x000546c3) cell_scut_pane_g1

0xda95,	// (0x0005ad33) cell_scut_pane_t1

0xdaa4,	// (0x0005ad42) cell_scut_pane_t2

0x742e,	// (0x000546cc) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0005cd06) cell_scut_pane_t

0x5254,	// (0x000524f2) main_mup3_pane_g8_ParamLimits

0x5254,	// (0x000524f2) main_mup3_pane_g8

0x6700,	// (0x0005399e) area_vitu2_query_pane_ParamLimits

0x6700,	// (0x0005399e) area_vitu2_query_pane

0x034e,	// (0x0004d5ec) input_focus_pane_cp08

0xdab3,	// (0x0005ad51) area_vitu2_query_pane_g1

0x0453,	// (0x0004d6f1) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0005cd0d) area_vitu2_query_pane_g

0x743c,	// (0x000546da) area_vitu2_query_pane_t1_ParamLimits

0x743c,	// (0x000546da) area_vitu2_query_pane_t1

0x7450,	// (0x000546ee) area_vitu2_query_pane_t2_ParamLimits

0x7450,	// (0x000546ee) area_vitu2_query_pane_t2

0x0464,	// (0x0004d702) area_vitu2_query_pane_t3_ParamLimits

0x0464,	// (0x0004d702) area_vitu2_query_pane_t3

0x7464,	// (0x00054702) area_vitu2_query_pane_t4_ParamLimits

0x7464,	// (0x00054702) area_vitu2_query_pane_t4

0x748c,	// (0x0005472a) area_vitu2_query_pane_t5_ParamLimits

0x748c,	// (0x0005472a) area_vitu2_query_pane_t5

0x74b4,	// (0x00054752) area_vitu2_query_pane_t6_ParamLimits

0x74b4,	// (0x00054752) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0005cd12) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0005cd12) area_vitu2_query_pane_t

0x7500,	// (0x0005479e) bg_button_pane_cp018

0x750e,	// (0x000547ac) bg_button_pane_cp021

0x048c,	// (0x0004d72a) bg_button_pane_cp022

0x049d,	// (0x0004d73b) input_focus_pane_cp09

0xb211,	// (0x000584af) aid_size_touch_mv_arrow_left

0xb23c,	// (0x000584da) aid_size_touch_mv_arrow_right

0x6d68,	// (0x00054006) main_cset_slider_pane_g16_ParamLimits

0x6d68,	// (0x00054006) main_cset_slider_pane_g16

0x6d74,	// (0x00054012) main_cset_slider_pane_g17_ParamLimits

0x6d74,	// (0x00054012) main_cset_slider_pane_g17

0x73e1,	// (0x0005467f) cell_cam4_burst_pane_g1_ParamLimits

0x9687,	// (0x00056925) compa_mode_pane

0x6f70,	// (0x0005420e) popup_vtel_slider_window_g3_ParamLimits

0x6f70,	// (0x0005420e) popup_vtel_slider_window_g3

0x6f87,	// (0x00054225) popup_vtel_slider_window_g4_ParamLimits

0x6f87,	// (0x00054225) popup_vtel_slider_window_g4

0x6f9e,	// (0x0005423c) popup_vtel_slider_window_t1_ParamLimits

0x6f9e,	// (0x0005423c) popup_vtel_slider_window_t1

0x9687,	// (0x00056925) main_cl_pane

0x9d51,	// (0x00056fef) popup_imed_adjust2_window_ParamLimits

0xc809,	// (0x00059aa7) bg_tb_trans_pane_cp05_ParamLimits

0xd124,	// (0x0005a3c2) popup_imed_adjust2_window_g1_ParamLimits

0xd133,	// (0x0005a3d1) popup_imed_adjust2_window_g2_ParamLimits

0xd133,	// (0x0005a3d1) popup_imed_adjust2_window_g2

0xd13f,	// (0x0005a3dd) popup_imed_adjust2_window_g3_ParamLimits

0xd13f,	// (0x0005a3dd) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0005ca7d) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0005ca7d) popup_imed_adjust2_window_g

0xd14b,	// (0x0005a3e9) popup_imed_adjust2_window_t1_ParamLimits

0xd163,	// (0x0005a401) slider_imed_adjust_pane_ParamLimits

0xd177,	// (0x0005a415) slider_imed_adjust_pane_g1_ParamLimits

0xd187,	// (0x0005a425) slider_imed_adjust_pane_g2_ParamLimits

0xd197,	// (0x0005a435) slider_imed_adjust_pane_g3_ParamLimits

0xd1a8,	// (0x0005a446) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0005ca84) slider_imed_adjust_pane_g_ParamLimits

0x6489,	// (0x00053727) aid_touch_area_cam4_ParamLimits

0x6489,	// (0x00053727) aid_touch_area_cam4

0xa0cd,	// (0x0005736b) battery_pane_cp01

0x6558,	// (0x000537f6) main_camera4_pane_g6_ParamLimits

0x6558,	// (0x000537f6) main_camera4_pane_g6

0x6582,	// (0x00053820) main_camera4_pane_t2_ParamLimits

0x6582,	// (0x00053820) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0005cb87) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0005cb87) main_camera4_pane_t

0x65b7,	// (0x00053855) aid_touch_area_vid4_ParamLimits

0x65b7,	// (0x00053855) aid_touch_area_vid4

0x660b,	// (0x000538a9) main_video4_pane_g5_ParamLimits

0x660b,	// (0x000538a9) main_video4_pane_g5

0x6630,	// (0x000538ce) vid4_progress_pane_ParamLimits

0x6630,	// (0x000538ce) vid4_progress_pane

0xd7af,	// (0x0005aa4d) main_cset_slider_pane_g18_ParamLimits

0xd7af,	// (0x0005aa4d) main_cset_slider_pane_g18

0xd97d,	// (0x0005ac1b) cell_cam4_burst_pane_g2_ParamLimits

0xd97d,	// (0x0005ac1b) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0005cce6) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005cce6) cell_cam4_burst_pane_g

0xa793,	// (0x00057a31) bg_cl_pane_ParamLimits

0xa793,	// (0x00057a31) bg_cl_pane

0x751a,	// (0x000547b8) cl_header_pane_ParamLimits

0x751a,	// (0x000547b8) cl_header_pane

0x752e,	// (0x000547cc) cl_listscroll_pane_ParamLimits

0x752e,	// (0x000547cc) cl_listscroll_pane

0xdabf,	// (0x0005ad5d) bg_cl_pane_g1

0xdac7,	// (0x0005ad65) bg_cl_pane_g2

0xdacf,	// (0x0005ad6d) bg_cl_pane_g3

0xdad7,	// (0x0005ad75) bg_cl_pane_g4

0xdadf,	// (0x0005ad7d) bg_cl_pane_g5

0xdae7,	// (0x0005ad85) bg_cl_pane_g6

0xdaef,	// (0x0005ad8d) bg_cl_pane_g7

0xdaf7,	// (0x0005ad95) bg_cl_pane_g8

0xdaff,	// (0x0005ad9d) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0005cd21) bg_cl_pane_g

0x753e,	// (0x000547dc) aid_height_cl_leading_ParamLimits

0x753e,	// (0x000547dc) aid_height_cl_leading

0x754a,	// (0x000547e8) aid_height_cl_text_ParamLimits

0x754a,	// (0x000547e8) aid_height_cl_text

0xa4d6,	// (0x00057774) bg_cl_header_pane_ParamLimits

0xa4d6,	// (0x00057774) bg_cl_header_pane

0x7569,	// (0x00054807) cl_header_pane_g1_ParamLimits

0x7569,	// (0x00054807) cl_header_pane_g1

0x757f,	// (0x0005481d) cl_header_pane_t1_ParamLimits

0x757f,	// (0x0005481d) cl_header_pane_t1

0xdb07,	// (0x0005ada5) cl_list_pane

0xd782,	// (0x0005aa20) hc_scroll_pane_cp01

0xab93,	// (0x00057e31) bg_cl_header_pane_g1

0xd668,	// (0x0005a906) bg_cl_header_pane_g2

0xabb3,	// (0x00057e51) bg_cl_header_pane_g3

0xd678,	// (0x0005a916) bg_cl_header_pane_g4

0xd670,	// (0x0005a90e) bg_cl_header_pane_g5

0xd88c,	// (0x0005ab2a) bg_cl_header_pane_g6

0xd690,	// (0x0005a92e) bg_cl_header_pane_g7

0xd698,	// (0x0005a936) bg_cl_header_pane_g8

0xd688,	// (0x0005a926) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0005cd34) bg_cl_header_pane_g

0x7598,	// (0x00054836) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7598,	// (0x00054836) hc_cl_list_double_graphic_heading_pane

0x75a9,	// (0x00054847) hc_cl_list_single_graphic_pane_ParamLimits

0x75a9,	// (0x00054847) hc_cl_list_single_graphic_pane

0x75c2,	// (0x00054860) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75c2,	// (0x00054860) hc_cl_list_single_graphic_pane_g1

0x75ce,	// (0x0005486c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75ce,	// (0x0005486c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0005cd47) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0005cd47) hc_cl_list_single_graphic_pane_g

0x75e2,	// (0x00054880) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75e2,	// (0x00054880) hc_cl_list_single_graphic_pane_t1

0x75c2,	// (0x00054860) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75c2,	// (0x00054860) hc_cl_list_double_graphic_heading_pane_g1

0x75f7,	// (0x00054895) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75f7,	// (0x00054895) hc_cl_list_double_graphic_heading_pane_g2

0x760b,	// (0x000548a9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x760b,	// (0x000548a9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0005cd4c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0005cd4c) hc_cl_list_double_graphic_heading_pane_g

0x761f,	// (0x000548bd) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x761f,	// (0x000548bd) hc_cl_list_double_graphic_heading_pane_t1

0x7634,	// (0x000548d2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7634,	// (0x000548d2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0005cd53) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0005cd53) hc_cl_list_double_graphic_heading_pane_t

0x7649,	// (0x000548e7) vid4_progress_pane_g1

0x765b,	// (0x000548f9) vid4_progress_pane_g2

0x9d1f,	// (0x00056fbd) vid4_progress_pane_g3

0xa21a,	// (0x000574b8) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0005cd58) vid4_progress_pane_g

0xa238,	// (0x000574d6) vid4_progress_pane_t1

0xa24d,	// (0x000574eb) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0005cd63) vid4_progress_pane_t

0xa279,	// (0x00057517) wait_bar_pane_cp07

0xca04,	// (0x00059ca2) blid_firmament_pane_ParamLimits

0xca47,	// (0x00059ce5) popup_blid_sat_info2_window_g1

0xca6b,	// (0x00059d09) popup_blid_sat_info2_window_t3

0xca79,	// (0x00059d17) popup_blid_sat_info2_window_t4

0xca87,	// (0x00059d25) popup_blid_sat_info2_window_t5

0xca95,	// (0x00059d33) popup_blid_sat_info2_window_t6

0xcaa5,	// (0x00059d43) popup_blid_sat_info2_window_t7

0xcab3,	// (0x00059d51) popup_blid_sat_info2_window_t8

0xcac1,	// (0x00059d5f) popup_blid_sat_info2_window_t9

0xcacf,	// (0x00059d6d) popup_blid_sat_info2_window_t10

0xcb93,	// (0x00059e31) aid_firma_cardinal_ParamLimits

0xcba7,	// (0x00059e45) blid_firmament_pane_t1_ParamLimits

0xcbbe,	// (0x00059e5c) blid_firmament_pane_t2_ParamLimits

0xcbd5,	// (0x00059e73) blid_firmament_pane_t3_ParamLimits

0xcbec,	// (0x00059e8a) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0005c976) blid_firmament_pane_t_ParamLimits

0xcc03,	// (0x00059ea1) blid_sat_info_pane_ParamLimits

0xa4d6,	// (0x00057774) main_cam_set_pane_ParamLimits

0x5b1a,	// (0x00052db8) aid_size_cell_colour_35_ParamLimits

0x5b3a,	// (0x00052dd8) aid_size_cell_colour_112_ParamLimits

0x5b5a,	// (0x00052df8) aid_size_cell_effect_ParamLimits

0xc809,	// (0x00059aa7) bg_tb_trans_pane_cp02_ParamLimits

0xae03,	// (0x000580a1) heading_imed_pane_ParamLimits

0x5b7a,	// (0x00052e18) listscroll_imed_pane_ParamLimits

0xbe2f,	// (0x000590cd) popup_call2_audio_first_window_g5_ParamLimits

0xbe2f,	// (0x000590cd) popup_call2_audio_first_window_g5

0x6134,	// (0x000533d2) aid_size_touch_image3_arrow_left_ParamLimits

0x6134,	// (0x000533d2) aid_size_touch_image3_arrow_left

0x6160,	// (0x000533fe) aid_size_touch_image3_arrow_right_ParamLimits

0x6160,	// (0x000533fe) aid_size_touch_image3_arrow_right

0xa263,	// (0x00057501) vid4_progress_pane_t3

0x5ea6,	// (0x00053144) main_hwr_training_symbol_option_pane_ParamLimits

0x5ea6,	// (0x00053144) main_hwr_training_symbol_option_pane

0xd41a,	// (0x0005a6b8) popup_hwr_training_preview_window_ParamLimits

0xd41a,	// (0x0005a6b8) popup_hwr_training_preview_window

0x5ec6,	// (0x00053164) hwr_training_navi_pane_g5_ParamLimits

0x5ec6,	// (0x00053164) hwr_training_navi_pane_g5

0xd656,	// (0x0005a8f4) popup_char_count_window

0xa4d6,	// (0x00057774) bg_popup_sub_pane_cp20_ParamLimits

0x70c4,	// (0x00054362) list_vitu2_match_list_pane_ParamLimits

0x70d3,	// (0x00054371) vitu2_page_scroll_pane_ParamLimits

0x70d3,	// (0x00054371) vitu2_page_scroll_pane

0xdb10,	// (0x0005adae) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb10,	// (0x0005adae) list_single_hwr_training_symbol_option_pane

0xdb23,	// (0x0005adc1) list_single_hwr_training_symbol_option_pane_g1

0xdb2b,	// (0x0005adc9) list_single_hwr_training_symbol_option_pane_t1

0xdb39,	// (0x0005add7) bg_button_pane_cp023

0xdb42,	// (0x0005ade0) bg_button_pane_cp024

0x76aa,	// (0x00054948) vitu2_page_scroll_pane_g1

0x76b2,	// (0x00054950) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0005cd6a) vitu2_page_scroll_pane_g

0x76ba,	// (0x00054958) vitu2_page_scroll_pane_t1

0xd1d4,	// (0x0005a472) popup_char_count_window_g1

0xdb75,	// (0x0005ae13) popup_char_count_window_g2

0xdb7e,	// (0x0005ae1c) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0005cd6f) popup_char_count_window_g

0xdb87,	// (0x0005ae25) popup_char_count_window_t1

0x9687,	// (0x00056925) main_vded2_pane

0xd110,	// (0x0005a3ae) aid_size_cell_imed_line

0xd11a,	// (0x0005a3b8) grid_imed_line_width_pane

0xa183,	// (0x00057421) vid4_indicators_pane_g4

0xdb95,	// (0x0005ae33) cell_imed_line_width_pane_ParamLimits

0xdb95,	// (0x0005ae33) cell_imed_line_width_pane

0xdba9,	// (0x0005ae47) cell_imed_line_width_pane_g1

0xdbb2,	// (0x0005ae50) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0005cd76) cell_imed_line_width_pane_g

0x76c9,	// (0x00054967) main_vded2_pane_g1_ParamLimits

0x76c9,	// (0x00054967) main_vded2_pane_g1

0x76df,	// (0x0005497d) main_vded2_pane_g2_ParamLimits

0x76df,	// (0x0005497d) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0005cd7b) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0005cd7b) main_vded2_pane_g

0x76f1,	// (0x0005498f) vded2_slider_pane_ParamLimits

0x76f1,	// (0x0005498f) vded2_slider_pane

0x7701,	// (0x0005499f) aid_size_touch_vded2_end

0x770b,	// (0x000549a9) aid_size_touch_vded2_playhead

0xdbba,	// (0x0005ae58) aid_size_touch_vded2_start

0xdbc2,	// (0x0005ae60) vded2_slider_bg_pane

0xdbcb,	// (0x0005ae69) vded2_slider_pane_g1

0xdbd4,	// (0x0005ae72) vded2_slider_pane_g2

0x7715,	// (0x000549b3) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0005cd80) vded2_slider_pane_g

0xdbdc,	// (0x0005ae7a) vded2_slider_bg_pane_g1

0xdbe5,	// (0x0005ae83) vded2_slider_bg_pane_g2

0xdbee,	// (0x0005ae8c) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0005cd87) vded2_slider_bg_pane_g

0x3835,	// (0x00050ad3) aid_postcard_touch_down_pane_ParamLimits

0x3835,	// (0x00050ad3) aid_postcard_touch_down_pane

0x384b,	// (0x00050ae9) aid_postcard_touch_up_pane_ParamLimits

0x384b,	// (0x00050ae9) aid_postcard_touch_up_pane

0x9687,	// (0x00056925) main_blid2_pane

0x9d37,	// (0x00056fd5) popup_blid2_search_window

0x9687,	// (0x00056925) blid2_gps_pane

0x9687,	// (0x00056925) blid2_navig_pane

0x9687,	// (0x00056925) blid2_search_pane

0x9687,	// (0x00056925) blid2_tripm_pane

0x7720,	// (0x000549be) blid2_search_pane_g1_ParamLimits

0x7720,	// (0x000549be) blid2_search_pane_g1

0x7738,	// (0x000549d6) blid2_search_pane_t1_ParamLimits

0x7738,	// (0x000549d6) blid2_search_pane_t1

0x774a,	// (0x000549e8) aid_size_cell_blid2_gps_ParamLimits

0x774a,	// (0x000549e8) aid_size_cell_blid2_gps

0x7762,	// (0x00054a00) blid2_gps_pane_g1_ParamLimits

0x7762,	// (0x00054a00) blid2_gps_pane_g1

0x7776,	// (0x00054a14) grid_blid2_satellite_pane_ParamLimits

0x7776,	// (0x00054a14) grid_blid2_satellite_pane

0x7790,	// (0x00054a2e) blid2_navig_pane_g1_ParamLimits

0x7790,	// (0x00054a2e) blid2_navig_pane_g1

0x779c,	// (0x00054a3a) blid2_navig_pane_t1_ParamLimits

0x779c,	// (0x00054a3a) blid2_navig_pane_t1

0x77b7,	// (0x00054a55) blid2_navig_pane_t2_ParamLimits

0x77b7,	// (0x00054a55) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0005cd8e) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0005cd8e) blid2_navig_pane_t

0x77d2,	// (0x00054a70) blid2_navig_ring_pane_ParamLimits

0x77d2,	// (0x00054a70) blid2_navig_ring_pane

0x77eb,	// (0x00054a89) blid2_speed_pane_ParamLimits

0x77eb,	// (0x00054a89) blid2_speed_pane

0x77f7,	// (0x00054a95) blid2_tripm_pane_g1_ParamLimits

0x77f7,	// (0x00054a95) blid2_tripm_pane_g1

0x7812,	// (0x00054ab0) blid2_tripm_pane_g2_ParamLimits

0x7812,	// (0x00054ab0) blid2_tripm_pane_g2

0x7826,	// (0x00054ac4) blid2_tripm_pane_g3_ParamLimits

0x7826,	// (0x00054ac4) blid2_tripm_pane_g3

0x783a,	// (0x00054ad8) blid2_tripm_pane_g4_ParamLimits

0x783a,	// (0x00054ad8) blid2_tripm_pane_g4

0x784e,	// (0x00054aec) blid2_tripm_pane_g5_ParamLimits

0x784e,	// (0x00054aec) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0005cd93) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0005cd93) blid2_tripm_pane_g

0x7874,	// (0x00054b12) blid2_tripm_pane_t1_ParamLimits

0x7874,	// (0x00054b12) blid2_tripm_pane_t1

0x788f,	// (0x00054b2d) blid2_tripm_pane_t2_ParamLimits

0x788f,	// (0x00054b2d) blid2_tripm_pane_t2

0x78a8,	// (0x00054b46) blid2_tripm_pane_t3_ParamLimits

0x78a8,	// (0x00054b46) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0005cda0) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0005cda0) blid2_tripm_pane_t

0x78ef,	// (0x00054b8d) cell_blid2_satellite_pane_ParamLimits

0x78ef,	// (0x00054b8d) cell_blid2_satellite_pane

0x790d,	// (0x00054bab) cell_blid2_satellite_pane_g1

0xdbf7,	// (0x0005ae95) cell_blid2_satellite_pane_t1

0xcc13,	// (0x00059eb1) blid2_speed_pane_g1

0xdc05,	// (0x0005aea3) blid2_speed_pane_t1

0xdc13,	// (0x0005aeb1) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0005cda9) blid2_speed_pane_t

0xcc13,	// (0x00059eb1) blid2_navig_ring_pane_g1

0x7916,	// (0x00054bb4) blid2_navig_ring_pane_g2

0x791e,	// (0x00054bbc) blid2_navig_ring_pane_g3

0x7926,	// (0x00054bc4) blid2_navig_ring_pane_g4

0x792e,	// (0x00054bcc) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0005cdae) blid2_navig_ring_pane_g

0x9687,	// (0x00056925) bg_popup_window_pane_cp011

0xdc21,	// (0x0005aebf) popup_blid2_search_window_g1

0xdc29,	// (0x0005aec7) popup_blid2_search_window_t1

0xdc37,	// (0x0005aed5) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0005cdb9) popup_blid2_search_window_t

0xaaa2,	// (0x00057d40) main_browser_pane_g1

0xa793,	// (0x00057a31) main_browser_pane_ParamLimits

0xa4d6,	// (0x00057774) bg_button_pane_cp011_ParamLimits

0x6945,	// (0x00053be3) cell_vitu2_function_pane_g1_ParamLimits

0xc809,	// (0x00059aa7) bg_popup_sub_pane_cp22_ParamLimits

0x034e,	// (0x0004d5ec) input_focus_pane_cp08_ParamLimits

0x7270,	// (0x0005450e) popup_vitu2_query_button_pane_ParamLimits

0x7270,	// (0x0005450e) popup_vitu2_query_button_pane

0x0365,	// (0x0004d603) popup_vitu2_query_input_button_pane

0xd8c7,	// (0x0005ab65) popup_vitu2_query_window_g1_ParamLimits

0x036f,	// (0x0004d60d) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0005ccba) popup_vitu2_query_window_g_ParamLimits

0x9687,	// (0x00056925) bg_button_pane_cp026

0x7936,	// (0x00054bd4) popup_vitu2_query_input_button_pane_g1

0x9687,	// (0x00056925) bg_button_pane_cp025

0xdc45,	// (0x0005aee3) popup_vitu2_query_button_pane_t1

0x4ecd,	// (0x0005216b) main_mp3_pane_t6

0x4edb,	// (0x00052179) popup_slider_window_cp01

0xa0e9,	// (0x00057387) cam4_battery_pane

0xa142,	// (0x000573e0) cam4_battery_pane_cp02

0xa212,	// (0x000574b0) cam4_battery_pane_cp01

0xa212,	// (0x000574b0) cam4_battery_pane_cp03

0xcc13,	// (0x00059eb1) cam4_battery_pane_g1

0xdc53,	// (0x0005aef1) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0005cdbe) cam4_battery_pane_g

0xcadd,	// (0x00059d7b) popup_blid_sat_info2_window_t11

0xb211,	// (0x000584af) aid_size_touch_mv_arrow_left_ParamLimits

0xb23c,	// (0x000584da) aid_size_touch_mv_arrow_right_ParamLimits

0xb29a,	// (0x00058538) navi_pane_g1_ParamLimits

0xb2a6,	// (0x00058544) navi_pane_g2_ParamLimits

0xb303,	// (0x000585a1) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0005c688) navi_pane_g_ParamLimits

0x3285,	// (0x00050523) navi_pane_mv_t1_ParamLimits

0x5b86,	// (0x00052e24) grid_imed_effect_pane_ParamLimits

0x1ef9,	// (0x0004f197) aid_placing_vt_slider_lsc

0xa9f1,	// (0x00057c8f) aid_placing_vt_slider_prt

0xa4d6,	// (0x00057774) bg_tb_trans_pane_cp01_ParamLimits

0xcd93,	// (0x0005a031) popup_image_details_window_g1_ParamLimits

0xcda6,	// (0x0005a044) popup_image_details_window_g2_ParamLimits

0xcdbb,	// (0x0005a059) popup_image_details_window_g3_ParamLimits

0xcdbb,	// (0x0005a059) popup_image_details_window_g3

0xf71d,	// (0x0005c9bb) popup_image_details_window_g_ParamLimits

0xcdcf,	// (0x0005a06d) popup_image_details_window_t1_ParamLimits

0xcde1,	// (0x0005a07f) popup_image_details_window_t2_ParamLimits

0xcdfa,	// (0x0005a098) popup_image_details_window_t3_ParamLimits

0xce0e,	// (0x0005a0ac) popup_image_details_window_t4_ParamLimits

0xce29,	// (0x0005a0c7) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0005c9c2) popup_image_details_window_t_ParamLimits

0x7556,	// (0x000547f4) cl_header_name_pane_ParamLimits

0x7556,	// (0x000547f4) cl_header_name_pane

0x793e,	// (0x00054bdc) cl_header_name_pane_t1_ParamLimits

0x793e,	// (0x00054bdc) cl_header_name_pane_t1

0x795f,	// (0x00054bfd) cl_header_name_pane_t2_ParamLimits

0x795f,	// (0x00054bfd) cl_header_name_pane_t2

0x79a1,	// (0x00054c3f) cl_header_name_pane_t3_ParamLimits

0x79a1,	// (0x00054c3f) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0005cdc3) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0005cdc3) cl_header_name_pane_t

0xb392,	// (0x00058630) navi_pane_mv_g2_ParamLimits

0xd630,	// (0x0005a8ce) field_vitu2_entry_pane_g1_ParamLimits

0xd63c,	// (0x0005a8da) field_vitu2_entry_pane_g2_ParamLimits

0xd648,	// (0x0005a8e6) field_vitu2_entry_pane_g3_ParamLimits

0xd648,	// (0x0005a8e6) field_vitu2_entry_pane_g3

0xf91b,	// (0x0005cbb9) field_vitu2_entry_pane_g_ParamLimits

0x68bc,	// (0x00053b5a) cell_vitu2_itu_pane_g1_ParamLimits

0x68cc,	// (0x00053b6a) cell_vitu2_itu_pane_g2_ParamLimits

0x68cc,	// (0x00053b6a) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0005cbc5) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0005cbc5) cell_vitu2_itu_pane_g

0xa4d6,	// (0x00057774) bg_vkb2_func_pane_cp05_ParamLimits

0xa4d6,	// (0x00057774) bg_vkb2_func_pane_cp05

0xa4d6,	// (0x00057774) bg_vkb2_func_pane_cp03

0xa4d6,	// (0x00057774) bg_vkb2_func_pane_cp04

0xa4d6,	// (0x00057774) bg_vkb2_func_pane_cp10_ParamLimits

0xa4d6,	// (0x00057774) bg_vkb2_func_pane_cp10

0x048c,	// (0x0004d72a) bg_vkb2_func_pane_cp08

0x7500,	// (0x0005479e) bg_vkb2_func_pane_cp06

0x750e,	// (0x000547ac) bg_vkb2_func_pane_cp07

0xdb4b,	// (0x0005ade9) bg_vkb2_func_pane_cp11_ParamLimits

0xdb4b,	// (0x0005ade9) bg_vkb2_func_pane_cp11

0xdb60,	// (0x0005adfe) bg_vkb2_func_pane_cp12_ParamLimits

0xdb60,	// (0x0005adfe) bg_vkb2_func_pane_cp12

0x9687,	// (0x00056925) bg_vkb2_func_pane_cp09

0xd668,	// (0x0005a906) bg_vkb2_func_pane_g1

0xabb3,	// (0x00057e51) bg_vkb2_func_pane_g2

0xd670,	// (0x0005a90e) bg_vkb2_func_pane_g3

0xd678,	// (0x0005a916) bg_vkb2_func_pane_g4

0xd88c,	// (0x0005ab2a) bg_vkb2_func_pane_g5

0xd690,	// (0x0005a92e) bg_vkb2_func_pane_g6

0xd698,	// (0x0005a936) bg_vkb2_func_pane_g7

0xd688,	// (0x0005a926) bg_vkb2_func_pane_g8

0xab93,	// (0x00057e31) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0005cdca) bg_vkb2_func_pane_g

0x7862,	// (0x00054b00) blid2_tripm_pane_g6_ParamLimits

0x7862,	// (0x00054b00) blid2_tripm_pane_g6

0xd4d2,	// (0x0005a770) mp4_progress_pane_g1

0x78db,	// (0x00054b79) blid2_tripm_values_pane_ParamLimits

0x78db,	// (0x00054b79) blid2_tripm_values_pane

0x79d2,	// (0x00054c70) blid2_tripm_values_pane_t1

0x79e0,	// (0x00054c7e) blid2_tripm_values_pane_t2

0x79ee,	// (0x00054c8c) blid2_tripm_values_pane_t3

0x79fc,	// (0x00054c9a) blid2_tripm_values_pane_t4

0x7a0a,	// (0x00054ca8) blid2_tripm_values_pane_t5

0x7a18,	// (0x00054cb6) blid2_tripm_values_pane_t6

0x7a26,	// (0x00054cc4) blid2_tripm_values_pane_t7

0x7a34,	// (0x00054cd2) blid2_tripm_values_pane_t8

0x7a42,	// (0x00054ce0) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0005cddd) blid2_tripm_values_pane_t

0x1f3b,	// (0x0004f1d9) call_video_pane_t1_ParamLimits

0x1f59,	// (0x0004f1f7) call_video_pane_t2_ParamLimits

0xf273,	// (0x0005c511) call_video_pane_t_ParamLimits

0x01cb,	// (0x0004d469) msg_header_pane_g1_ParamLimits

0xb579,	// (0x00058817) msg_header_pane_g2_ParamLimits

0xb579,	// (0x00058817) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0005c72b) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0005c72b) msg_header_pane_g

0xa793,	// (0x00057a31) main_clock2_pane_ParamLimits

0x587d,	// (0x00052b1b) grid_clock2_toolbar_pane_ParamLimits

0x587d,	// (0x00052b1b) grid_clock2_toolbar_pane

0x587d,	// (0x00052b1b) listscroll_clock2_pane_ParamLimits

0x587d,	// (0x00052b1b) listscroll_clock2_pane

0x5978,	// (0x00052c16) main_clock2_pane_t3_ParamLimits

0x5978,	// (0x00052c16) main_clock2_pane_t3

0x599c,	// (0x00052c3a) main_clock2_pane_t4_ParamLimits

0x599c,	// (0x00052c3a) main_clock2_pane_t4

0xdc5d,	// (0x0005aefb) cell_clock2_toolbar_pane

0xdc65,	// (0x0005af03) cell_clock2_toolbar_pane_cp01

0xdc65,	// (0x0005af03) cell_clock2_toolbar_pane_cp02

0xdc6d,	// (0x0005af0b) cell_clock2_toolbar_pane_cp03

0xdc75,	// (0x0005af13) list_clock2_pane

0xb187,	// (0x00058425) scroll_pane_cp10

0xdc7d,	// (0x0005af1b) list_single_clock2_pane_ParamLimits

0xdc7d,	// (0x0005af1b) list_single_clock2_pane

0xb3f9,	// (0x00058697) list_highlight_pane_cp08

0xdc8a,	// (0x0005af28) list_single_clock2_pane_t1

0xdc98,	// (0x0005af36) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0005cdf0) list_single_clock2_pane_t

0x9687,	// (0x00056925) bg_button_pane_cp10

0xdca6,	// (0x0005af44) cell_clock2_toolbar_pane_g1

0x37c1,	// (0x00050a5f) aid_main_viewer_pane_g1_ParamLimits

0x37c1,	// (0x00050a5f) aid_main_viewer_pane_g1

0x37cf,	// (0x00050a6d) aid_main_viewer_pane_g2_ParamLimits

0x37cf,	// (0x00050a6d) aid_main_viewer_pane_g2

0x37dd,	// (0x00050a7b) aid_main_viewer_pane_g3_ParamLimits

0x37dd,	// (0x00050a7b) aid_main_viewer_pane_g3

0x37ec,	// (0x00050a8a) aid_main_viewer_pane_g4_ParamLimits

0x37ec,	// (0x00050a8a) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0005c73c) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0005c73c) aid_main_viewer_pane_g

0x40fa,	// (0x00051398) main_calc_pane_ParamLimits

0x410e,	// (0x000513ac) main_dialer2_pane_ParamLimits

0x9687,	// (0x00056925) main_cam6_pane

0x9687,	// (0x00056925) main_vid6_pane

0x5889,	// (0x00052b27) listscroll_gen_pane_cp06_ParamLimits

0x5889,	// (0x00052b27) listscroll_gen_pane_cp06

0x59bf,	// (0x00052c5d) main_clock2_pane_t5_ParamLimits

0x59bf,	// (0x00052c5d) main_clock2_pane_t5

0x5a1b,	// (0x00052cb9) aid_call2_pane_cp10_ParamLimits

0x5a2d,	// (0x00052ccb) aid_call_pane_cp10_ParamLimits

0xb205,	// (0x000584a3) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb205,	// (0x000584a3) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5a3f,	// (0x00052cdd) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5a3f,	// (0x00052cdd) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb205,	// (0x000584a3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0005ca72) popup_clock_analogue_window_cp10_g_ParamLimits

0x5a51,	// (0x00052cef) popup_clock_analogue_window_cp10_t1_ParamLimits

0x60e1,	// (0x0005337f) cell_dialer2_keypad_pane_g2_ParamLimits

0x60e1,	// (0x0005337f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0005cb58) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0005cb58) cell_dialer2_keypad_pane_g

0x60fd,	// (0x0005339b) cell_dialer2_keypad_pane_t1

0x6c5b,	// (0x00053ef9) main_cset_text2_pane_ParamLimits

0x6c5b,	// (0x00053ef9) main_cset_text2_pane

0xdab3,	// (0x0005ad51) area_vitu2_query_pane_g1_ParamLimits

0x0453,	// (0x0004d6f1) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0005cd0d) area_vitu2_query_pane_g_ParamLimits

0x74dc,	// (0x0005477a) area_vitu2_query_pane_t7_ParamLimits

0x74dc,	// (0x0005477a) area_vitu2_query_pane_t7

0x7500,	// (0x0005479e) bg_button_pane_cp018_ParamLimits

0x750e,	// (0x000547ac) bg_button_pane_cp021_ParamLimits

0x048c,	// (0x0004d72a) bg_button_pane_cp022_ParamLimits

0x048c,	// (0x0004d72a) bg_vkb2_func_pane_cp08_ParamLimits

0x7500,	// (0x0005479e) bg_vkb2_func_pane_cp06_ParamLimits

0x750e,	// (0x000547ac) bg_vkb2_func_pane_cp07_ParamLimits

0x049d,	// (0x0004d73b) input_focus_pane_cp09_ParamLimits

0xa289,	// (0x00057527) cam6_autofocus_pane_ParamLimits

0xa289,	// (0x00057527) cam6_autofocus_pane

0x7a50,	// (0x00054cee) cam6_image_uncrop_pane_ParamLimits

0x7a50,	// (0x00054cee) cam6_image_uncrop_pane

0x7a5f,	// (0x00054cfd) cam6_indi_pane_ParamLimits

0x7a5f,	// (0x00054cfd) cam6_indi_pane

0x7a75,	// (0x00054d13) cam6_mode_pane_ParamLimits

0x7a75,	// (0x00054d13) cam6_mode_pane

0x7a87,	// (0x00054d25) cam6_timer_pane_ParamLimits

0x7a87,	// (0x00054d25) cam6_timer_pane

0x7a93,	// (0x00054d31) cam6_zoom_pane_ParamLimits

0x7a93,	// (0x00054d31) cam6_zoom_pane

0x7a9f,	// (0x00054d3d) cam6_mode_pane_g1_ParamLimits

0x7a9f,	// (0x00054d3d) cam6_mode_pane_g1

0x7aaf,	// (0x00054d4d) cam6_mode_pane_g2_ParamLimits

0x7aaf,	// (0x00054d4d) cam6_mode_pane_g2

0x7abf,	// (0x00054d5d) cam6_mode_pane_g3_ParamLimits

0x7abf,	// (0x00054d5d) cam6_mode_pane_g3

0x7acf,	// (0x00054d6d) cam6_mode_pane_g4_ParamLimits

0x7acf,	// (0x00054d6d) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0005cdf5) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0005cdf5) cam6_mode_pane_g

0xdcae,	// (0x0005af4c) bg_tb_trans_pane_cp08_ParamLimits

0xdcae,	// (0x0005af4c) bg_tb_trans_pane_cp08

0xdcbc,	// (0x0005af5a) cam6_battery_pane_ParamLimits

0xdcbc,	// (0x0005af5a) cam6_battery_pane

0xdcd2,	// (0x0005af70) cam6_indi_pane_g1_ParamLimits

0xdcd2,	// (0x0005af70) cam6_indi_pane_g1

0xdce4,	// (0x0005af82) cam6_indi_pane_g2_ParamLimits

0xdce4,	// (0x0005af82) cam6_indi_pane_g2

0xdcf6,	// (0x0005af94) cam6_indi_pane_g3_ParamLimits

0xdcf6,	// (0x0005af94) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0005cdfe) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0005cdfe) cam6_indi_pane_g

0xdd08,	// (0x0005afa6) cam6_indi_pane_t1_ParamLimits

0xdd08,	// (0x0005afa6) cam6_indi_pane_t1

0x7adf,	// (0x00054d7d) cam6_autofocus_pane_g1

0x7ae7,	// (0x00054d85) cam6_autofocus_pane_g2

0x7aef,	// (0x00054d8d) cam6_autofocus_pane_g3

0x7af7,	// (0x00054d95) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0005ce05) cam6_autofocus_pane_g

0xdd2e,	// (0x0005afcc) cam6_timer_pane_g1

0xdd36,	// (0x0005afd4) cam6_timer_pane_t1

0xdd44,	// (0x0005afe2) cam6_zoom_cont_pane

0xdd4c,	// (0x0005afea) cam6_zoom_pane_g1

0xdd54,	// (0x0005aff2) cam6_zoom_pane_g2

0x7aff,	// (0x00054d9d) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0005ce0e) cam6_zoom_pane_g

0xcc13,	// (0x00059eb1) cam6_battery_pane_g1

0xcc13,	// (0x00059eb1) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0005c97f) cam6_battery_pane_g

0xdd5c,	// (0x0005affa) cam6_zoom_cont_pane_g1

0xdd65,	// (0x0005b003) cam6_zoom_cont_pane_g2

0xdd6e,	// (0x0005b00c) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0005ce15) cam6_zoom_cont_pane_g

0x7b1c,	// (0x00054dba) cam6_mode_pane_cp_ParamLimits

0x7b1c,	// (0x00054dba) cam6_mode_pane_cp

0x7a93,	// (0x00054d31) cam6_zoom_pane_cp_ParamLimits

0x7a93,	// (0x00054d31) cam6_zoom_pane_cp

0x7b2e,	// (0x00054dcc) vid6_image_uncrop_cif_pane_ParamLimits

0x7b2e,	// (0x00054dcc) vid6_image_uncrop_cif_pane

0x7b3e,	// (0x00054ddc) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b3e,	// (0x00054ddc) vid6_image_uncrop_nhd_pane

0x7a50,	// (0x00054cee) vid6_image_uncrop_vga_pane_ParamLimits

0x7a50,	// (0x00054cee) vid6_image_uncrop_vga_pane

0x7b4d,	// (0x00054deb) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b4d,	// (0x00054deb) vid6_image_uncrop_wvga_pane

0x7b5c,	// (0x00054dfa) vid6_indi_pane_ParamLimits

0x7b5c,	// (0x00054dfa) vid6_indi_pane

0xdcae,	// (0x0005af4c) bg_tb_trans_pane_cp09_ParamLimits

0xdcae,	// (0x0005af4c) bg_tb_trans_pane_cp09

0xddb3,	// (0x0005b051) cam6_battery_pane_cp_ParamLimits

0xddb3,	// (0x0005b051) cam6_battery_pane_cp

0xddbf,	// (0x0005b05d) vid6_indi_pane_g1_ParamLimits

0xddbf,	// (0x0005b05d) vid6_indi_pane_g1

0xddd1,	// (0x0005b06f) vid6_indi_pane_g2_ParamLimits

0xddd1,	// (0x0005b06f) vid6_indi_pane_g2

0xdde3,	// (0x0005b081) vid6_indi_pane_g3_ParamLimits

0xdde3,	// (0x0005b081) vid6_indi_pane_g3

0xddf8,	// (0x0005b096) vid6_indi_pane_g4_ParamLimits

0xddf8,	// (0x0005b096) vid6_indi_pane_g4

0xde0d,	// (0x0005b0ab) vid6_indi_pane_g5_ParamLimits

0xde0d,	// (0x0005b0ab) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0005ce1c) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0005ce1c) vid6_indi_pane_g

0xde27,	// (0x0005b0c5) vid6_indi_pane_t1_ParamLimits

0xde27,	// (0x0005b0c5) vid6_indi_pane_t1

0xde3d,	// (0x0005b0db) vid6_indi_pane_t2_ParamLimits

0xde3d,	// (0x0005b0db) vid6_indi_pane_t2

0xde65,	// (0x0005b103) vid6_indi_pane_t3_ParamLimits

0xde65,	// (0x0005b103) vid6_indi_pane_t3

0xde8d,	// (0x0005b12b) vid6_indi_pane_t4_ParamLimits

0xde8d,	// (0x0005b12b) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0005ce27) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0005ce27) vid6_indi_pane_t

0xdeb1,	// (0x0005b14f) wait_bar_pane_cp08

0x7b74,	// (0x00054e12) main_cset_text2_pane_t1_ParamLimits

0x7b74,	// (0x00054e12) main_cset_text2_pane_t1

0x7b07,	// (0x00054da5) listscroll_gen_pane_cp06_t1_ParamLimits

0x7b07,	// (0x00054da5) listscroll_gen_pane_cp06_t1

0x9687,	// (0x00056925) main_cam6_set_pane

0xce73,	// (0x0005a111) bg_tb_trans_pane_cp06_ParamLimits

0xa0f1,	// (0x0005738f) cam4_indicators_pane_g1_ParamLimits

0xa102,	// (0x000573a0) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0005cb95) cam4_indicators_pane_g_ParamLimits

0xa120,	// (0x000573be) cam4_indicators_pane_t1_ParamLimits

0xa4d6,	// (0x00057774) bg_tb_trans_pane_cp07_ParamLimits

0xa14a,	// (0x000573e8) vid4_indicators_pane_g1_ParamLimits

0xa15e,	// (0x000573fc) vid4_indicators_pane_g2_ParamLimits

0xa172,	// (0x00057410) vid4_indicators_pane_g3_ParamLimits

0xa183,	// (0x00057421) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0005cba7) vid4_indicators_pane_g_ParamLimits

0xa19f,	// (0x0005743d) vid4_indicators_pane_t1_ParamLimits

0x7649,	// (0x000548e7) vid4_progress_pane_g1_ParamLimits

0x765b,	// (0x000548f9) vid4_progress_pane_g2_ParamLimits

0x9d1f,	// (0x00056fbd) vid4_progress_pane_g3_ParamLimits

0xa21a,	// (0x000574b8) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0005cd58) vid4_progress_pane_g_ParamLimits

0xa238,	// (0x000574d6) vid4_progress_pane_t1_ParamLimits

0xa24d,	// (0x000574eb) vid4_progress_pane_t2_ParamLimits

0xa263,	// (0x00057501) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0005cd63) vid4_progress_pane_t_ParamLimits

0xa279,	// (0x00057517) wait_bar_pane_cp07_ParamLimits

0x7b93,	// (0x00054e31) main_cam6_set_pane_g2_ParamLimits

0x7b93,	// (0x00054e31) main_cam6_set_pane_g2

0x7bb7,	// (0x00054e55) main_cset6_listscroll_pane_ParamLimits

0x7bb7,	// (0x00054e55) main_cset6_listscroll_pane

0x7bd3,	// (0x00054e71) main_cset6_slider_pane_ParamLimits

0x7bd3,	// (0x00054e71) main_cset6_slider_pane

0x7be9,	// (0x00054e87) main_cset6_text2_pane_ParamLimits

0x7be9,	// (0x00054e87) main_cset6_text2_pane

0xdec0,	// (0x0005b15e) main_cset6_text_pane

0xdec8,	// (0x0005b166) main_cset_list_pane_copy1_ParamLimits

0xdec8,	// (0x0005b166) main_cset_list_pane_copy1

0xded8,	// (0x0005b176) scroll_pane_cp028_copy1

0x7bf7,	// (0x00054e95) cset_list_set_pane_copy1

0x7c09,	// (0x00054ea7) aid_position_infowindow_above_copy1

0x7c11,	// (0x00054eaf) aid_position_infowindow_below_copy1

0x04c2,	// (0x0004d760) cset_list_set_pane_g1_copy1

0x04ca,	// (0x0004d768) cset_list_set_pane_g3_copy1_ParamLimits

0x04ca,	// (0x0004d768) cset_list_set_pane_g3_copy1

0x04d9,	// (0x0004d777) cset_list_set_pane_t1_copy1_ParamLimits

0x04d9,	// (0x0004d777) cset_list_set_pane_t1_copy1

0xa4d6,	// (0x00057774) list_highlight_pane_cp021_copy1_ParamLimits

0xa4d6,	// (0x00057774) list_highlight_pane_cp021_copy1

0xdee1,	// (0x0005b17f) cset6_slider_pane_ParamLimits

0xdee1,	// (0x0005b17f) cset6_slider_pane

0xdf0d,	// (0x0005b1ab) main_cset6_slider_pane_g1_ParamLimits

0xdf0d,	// (0x0005b1ab) main_cset6_slider_pane_g1

0x7c19,	// (0x00054eb7) main_cset6_slider_pane_g2_ParamLimits

0x7c19,	// (0x00054eb7) main_cset6_slider_pane_g2

0xdf35,	// (0x0005b1d3) main_cset6_slider_pane_g3_ParamLimits

0xdf35,	// (0x0005b1d3) main_cset6_slider_pane_g3

0x7c41,	// (0x00054edf) main_cset6_slider_pane_g4_ParamLimits

0x7c41,	// (0x00054edf) main_cset6_slider_pane_g4

0x7c4d,	// (0x00054eeb) main_cset6_slider_pane_g5_ParamLimits

0x7c4d,	// (0x00054eeb) main_cset6_slider_pane_g5

0xd797,	// (0x0005aa35) main_cset6_slider_pane_g7_ParamLimits

0xd797,	// (0x0005aa35) main_cset6_slider_pane_g7

0xd7a3,	// (0x0005aa41) main_cset6_slider_pane_g8_ParamLimits

0xd7a3,	// (0x0005aa41) main_cset6_slider_pane_g8

0x6d08,	// (0x00053fa6) main_cset6_slider_pane_g9_ParamLimits

0x6d08,	// (0x00053fa6) main_cset6_slider_pane_g9

0x6d14,	// (0x00053fb2) main_cset6_slider_pane_g10_ParamLimits

0x6d14,	// (0x00053fb2) main_cset6_slider_pane_g10

0x6d20,	// (0x00053fbe) main_cset6_slider_pane_g11_ParamLimits

0x6d20,	// (0x00053fbe) main_cset6_slider_pane_g11

0x6d2c,	// (0x00053fca) main_cset6_slider_pane_g12_ParamLimits

0x6d2c,	// (0x00053fca) main_cset6_slider_pane_g12

0x6d38,	// (0x00053fd6) main_cset6_slider_pane_g13_ParamLimits

0x6d38,	// (0x00053fd6) main_cset6_slider_pane_g13

0x6d44,	// (0x00053fe2) main_cset6_slider_pane_g14_ParamLimits

0x6d44,	// (0x00053fe2) main_cset6_slider_pane_g14

0x7c59,	// (0x00054ef7) main_cset6_slider_pane_g15_ParamLimits

0x7c59,	// (0x00054ef7) main_cset6_slider_pane_g15

0x6d68,	// (0x00054006) main_cset6_slider_pane_g16_ParamLimits

0x6d68,	// (0x00054006) main_cset6_slider_pane_g16

0x6d74,	// (0x00054012) main_cset6_slider_pane_g17_ParamLimits

0x6d74,	// (0x00054012) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0005ce30) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0005ce30) main_cset6_slider_pane_g

0xdf41,	// (0x0005b1df) main_cset6_slider_pane_t1_ParamLimits

0xdf41,	// (0x0005b1df) main_cset6_slider_pane_t1

0x7c89,	// (0x00054f27) main_cset6_slider_pane_t2_ParamLimits

0x7c89,	// (0x00054f27) main_cset6_slider_pane_t2

0x7cb4,	// (0x00054f52) main_cset6_slider_pane_t3_ParamLimits

0x7cb4,	// (0x00054f52) main_cset6_slider_pane_t3

0x7cdf,	// (0x00054f7d) main_cset6_slider_pane_t4_ParamLimits

0x7cdf,	// (0x00054f7d) main_cset6_slider_pane_t4

0x7d0a,	// (0x00054fa8) main_cset6_slider_pane_t5_ParamLimits

0x7d0a,	// (0x00054fa8) main_cset6_slider_pane_t5

0xdf82,	// (0x0005b220) main_cset6_slider_pane_t7_ParamLimits

0xdf82,	// (0x0005b220) main_cset6_slider_pane_t7

0x7d35,	// (0x00054fd3) main_cset6_slider_pane_t8_ParamLimits

0x7d35,	// (0x00054fd3) main_cset6_slider_pane_t8

0x7d59,	// (0x00054ff7) main_cset6_slider_pane_t9_ParamLimits

0x7d59,	// (0x00054ff7) main_cset6_slider_pane_t9

0x7d7d,	// (0x0005501b) main_cset6_slider_pane_t10_ParamLimits

0x7d7d,	// (0x0005501b) main_cset6_slider_pane_t10

0x7da1,	// (0x0005503f) main_cset6_slider_pane_t11_ParamLimits

0x7da1,	// (0x0005503f) main_cset6_slider_pane_t11

0xdfb8,	// (0x0005b256) main_cset6_slider_pane_t14_ParamLimits

0xdfb8,	// (0x0005b256) main_cset6_slider_pane_t14

0xdff1,	// (0x0005b28f) main_cset6_slider_pane_t15_ParamLimits

0xdff1,	// (0x0005b28f) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0005ce55) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0005ce55) main_cset6_slider_pane_t

0xdd98,	// (0x0005b036) cset_slider_pane_g1_copy1

0xdda1,	// (0x0005b03f) cset_slider_pane_g2_copy1

0xddaa,	// (0x0005b048) cset_slider_pane_g3_copy1

0x9687,	// (0x00056925) bg_popup_sub_pane_cp011_copy1

0xe02a,	// (0x0005b2c8) main_cset_text_pane_g1_copy1

0xd8db,	// (0x0005ab79) main_cset_text_pane_t1_copy1

0xd8e9,	// (0x0005ab87) main_cset_text_pane_t2_copy1

0xd8f7,	// (0x0005ab95) main_cset_text_pane_t3_copy1

0xd905,	// (0x0005aba3) main_cset_text_pane_t4_copy1

0xd913,	// (0x0005abb1) main_cset_text_pane_t5_copy1

0xe032,	// (0x0005b2d0) main_cset_text_pane_t6_copy1

0xe040,	// (0x0005b2de) main_cset_text_pane_t7_copy1

0x7e1f,	// (0x000550bd) main_cset_text2_pane_t1_copy1

0xa4d6,	// (0x00057774) main_ncimui_pane

0x434a,	// (0x000515e8) popup_query_ncimui_window_ParamLimits

0x434a,	// (0x000515e8) popup_query_ncimui_window

0x5073,	// (0x00052311) field_cale_ev2_pane_g4_ParamLimits

0x5073,	// (0x00052311) field_cale_ev2_pane_g4

0x5fbd,	// (0x0005325b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5fbd,	// (0x0005325b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0005cb33) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0005cb33) cell_video_dialer_keypad_pane_g

0x5fd5,	// (0x00053273) cell_video_dialer_keypad_pane_t1

0x9687,	// (0x00056925) bg_popup_window_pane_cp012

0xb048,	// (0x000582e6) heading_pane_cp06

0xe06c,	// (0x0005b30a) ncim_query_content_pane

0x9687,	// (0x00056925) bg_popup_heading_pane_cp01

0xe074,	// (0x0005b312) ncim_heading_pane_t1

0xe082,	// (0x0005b320) ncim_indicator_popup_pane

0xe094,	// (0x0005b332) ncim_query_button_pane

0xe0a8,	// (0x0005b346) ncim_query_content_pane_t1

0xe0ba,	// (0x0005b358) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0005ce99) ncim_query_content_pane_t

0xe0f4,	// (0x0005b392) ncim_query_list_pane

0xe106,	// (0x0005b3a4) ncim_query_popup_pane

0xe082,	// (0x0005b320) ncim_indicator_popup_pane_ParamLimits

0x7f63,	// (0x00055201) ncim_query_content_pane_g1_ParamLimits

0x7f63,	// (0x00055201) ncim_query_content_pane_g1

0xe0a8,	// (0x0005b346) ncim_query_content_pane_t1_ParamLimits

0xe0ba,	// (0x0005b358) ncim_query_content_pane_t2_ParamLimits

0x7f6f,	// (0x0005520d) ncim_query_content_pane_t3_ParamLimits

0x7f6f,	// (0x0005520d) ncim_query_content_pane_t3

0x7f97,	// (0x00055235) ncim_query_content_pane_t4_ParamLimits

0x7f97,	// (0x00055235) ncim_query_content_pane_t4

0x7fbf,	// (0x0005525d) ncim_query_content_pane_t5_ParamLimits

0x7fbf,	// (0x0005525d) ncim_query_content_pane_t5

0xe0cc,	// (0x0005b36a) ncim_query_content_pane_t6_ParamLimits

0xe0cc,	// (0x0005b36a) ncim_query_content_pane_t6

0xfbfb,	// (0x0005ce99) ncim_query_content_pane_t_ParamLimits

0xe0f4,	// (0x0005b392) ncim_query_list_pane_ParamLimits

0xe106,	// (0x0005b3a4) ncim_query_popup_pane_ParamLimits

0xe11a,	// (0x0005b3b8) wait_bar_pane_cp04

0x9687,	// (0x00056925) input_focus_pane_cp011

0xe122,	// (0x0005b3c0) ncim_query_popup_pane_t1

0xe130,	// (0x0005b3ce) ncim_list_query_list_pane_ParamLimits

0xe130,	// (0x0005b3ce) ncim_list_query_list_pane

0x9687,	// (0x00056925) bg_button_pane_cp027

0xe143,	// (0x0005b3e1) ncim_query_button_pane_g1

0x9687,	// (0x00056925) list_highlight_pane_cp012

0xe14d,	// (0x0005b3eb) ncim_list_query_list_pane_g1

0xe155,	// (0x0005b3f3) ncim_list_query_list_pane_t1

0xa111,	// (0x000573af) cam4_indicators_pane_g3_ParamLimits

0xa111,	// (0x000573af) cam4_indicators_pane_g3

0xa18f,	// (0x0005742d) vid4_indicators_pane_g5_ParamLimits

0xa18f,	// (0x0005742d) vid4_indicators_pane_g5

0xa229,	// (0x000574c7) vid4_progress_pane_g5_ParamLimits

0xa229,	// (0x000574c7) vid4_progress_pane_g5

0x7e51,	// (0x000550ef) main_ncimui_pane_g1

0x7eb7,	// (0x00055155) ncimui_group_query_pane_ParamLimits

0x7eb7,	// (0x00055155) ncimui_group_query_pane

0x7eff,	// (0x0005519d) ncimui_list_pane_ParamLimits

0x7eff,	// (0x0005519d) ncimui_list_pane

0x7f26,	// (0x000551c4) ncimui_text_pane_ParamLimits

0x7f26,	// (0x000551c4) ncimui_text_pane

0x7fe7,	// (0x00055285) ncimui_text_pane_t1_ParamLimits

0x7fe7,	// (0x00055285) ncimui_text_pane_t1

0xe163,	// (0x0005b401) ncimui_list_single_graphic_pane_ParamLimits

0xe163,	// (0x0005b401) ncimui_list_single_graphic_pane

0x8005,	// (0x000552a3) ncimui_query_pane_ParamLimits

0x8005,	// (0x000552a3) ncimui_query_pane

0x9687,	// (0x00056925) list_highlight_pane_cp013

0xe173,	// (0x0005b411) ncim_list_query_list_pane_t1_copy1

0xe14d,	// (0x0005b3eb) ncim_list_single_graphic_pane_g1

0xe181,	// (0x0005b41f) ncim_query_button_pane_cp01

0xe18d,	// (0x0005b42b) ncim_query_entry_pane_ParamLimits

0xe18d,	// (0x0005b42b) ncim_query_entry_pane

0xe1a0,	// (0x0005b43e) ncimui_query_pane_g1

0xe1ac,	// (0x0005b44a) ncimui_query_pane_t1_ParamLimits

0xe1ac,	// (0x0005b44a) ncimui_query_pane_t1

0xa4d6,	// (0x00057774) input_focus_pane_cp012

0xe1c5,	// (0x0005b463) ncim_query_entry_pane_t1

0xa793,	// (0x00057a31) main_im_pane_ParamLimits

0xa4d6,	// (0x00057774) main_mobtv_pane_ParamLimits

0xa4d6,	// (0x00057774) main_mobtv_pane

0x7c71,	// (0x00054f0f) main_cset6_slider_pane_g18_ParamLimits

0x7c71,	// (0x00054f0f) main_cset6_slider_pane_g18

0x7c7d,	// (0x00054f1b) main_cset6_slider_pane_g19_ParamLimits

0x7c7d,	// (0x00054f1b) main_cset6_slider_pane_g19

0xb2d4,	// (0x00058572) bg_main_mobtv_pane_ParamLimits

0xb2d4,	// (0x00058572) bg_main_mobtv_pane

0x8018,	// (0x000552b6) main_mobtv_info_pane

0x8021,	// (0x000552bf) main_mobtv_loading_pane_ParamLimits

0x8021,	// (0x000552bf) main_mobtv_loading_pane

0xe1d7,	// (0x0005b475) main_mobtv_pg_channel_list_pane

0xe1e1,	// (0x0005b47f) main_mobtv_pg_hdr_pane

0x802e,	// (0x000552cc) main_mobtv_programe_curr_pane_ParamLimits

0x802e,	// (0x000552cc) main_mobtv_programe_curr_pane

0x803b,	// (0x000552d9) main_mobtv_programe_next_pane_ParamLimits

0x803b,	// (0x000552d9) main_mobtv_programe_next_pane

0xe1ea,	// (0x0005b488) popup_mobtv_noti_window

0xcc13,	// (0x00059eb1) main_tv_pg_hdr_pane_g1

0xe1f2,	// (0x0005b490) main_tv_pg_hdr_pane_g2

0xe1fa,	// (0x0005b498) main_tv_pg_hdr_pane_g3

0xe202,	// (0x0005b4a0) main_tv_pg_hdr_pane_g4

0xe20a,	// (0x0005b4a8) main_tv_pg_hdr_pane_g5

0xe214,	// (0x0005b4b2) main_tv_pg_hdr_pane_g6

0xe21e,	// (0x0005b4bc) main_tv_pg_hdr_pane_g7

0xe228,	// (0x0005b4c6) main_tv_pg_hdr_pane_g8

0xe232,	// (0x0005b4d0) main_tv_pg_hdr_pane_g9

0xe23c,	// (0x0005b4da) main_tv_pg_hdr_pane_g10

0xe246,	// (0x0005b4e4) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0005cea6) main_tv_pg_hdr_pane_g

0xe250,	// (0x0005b4ee) main_tv_pg_hdr_pane_t1

0xe25e,	// (0x0005b4fc) main_tv_pg_hdr_pane_t2

0xe26c,	// (0x0005b50a) main_tv_pg_hdr_pane_t3

0xe27c,	// (0x0005b51a) main_tv_pg_hdr_pane_t4

0xe28c,	// (0x0005b52a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0005cebd) main_tv_pg_hdr_pane_t

0xe29c,	// (0x0005b53a) single_mobtv_pg_channel_pane_ParamLimits

0xe29c,	// (0x0005b53a) single_mobtv_pg_channel_pane

0xe2ae,	// (0x0005b54c) single_mobtv_pg_channel_table_pane

0xe2b7,	// (0x0005b555) single_mobtv_pg_channel_thumb_pane

0xe2c0,	// (0x0005b55e) single_tv_pg_channel_pane_g1

0xe2c9,	// (0x0005b567) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0005cec8) single_tv_pg_channel_pane_g

0xce73,	// (0x0005a111) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce73,	// (0x0005a111) bg_single_mobtv_pg_channel_thumb_pane

0xe2d2,	// (0x0005b570) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2d2,	// (0x0005b570) single_mobtv_pg_channel_thumb_pane_g1

0xe2e0,	// (0x0005b57e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2e0,	// (0x0005b57e) single_mobtv_pg_channel_thumb_pane_g2

0xe2ec,	// (0x0005b58a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2ec,	// (0x0005b58a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0005cecd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0005cecd) single_mobtv_pg_channel_thumb_pane_g

0xe2f8,	// (0x0005b596) single_mobtv_pg_channel_thumb_pane_t1

0xe306,	// (0x0005b5a4) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0005ced4) single_mobtv_pg_channel_thumb_pane_t

0xcc13,	// (0x00059eb1) bg_single_mobtv_pg_channel_table_pane_g1

0xcc13,	// (0x00059eb1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0005c97f) bg_single_mobtv_pg_channel_table_pane_g

0xe314,	// (0x0005b5b2) single_mobtv_pg_channel_table_pane_t1

0xe322,	// (0x0005b5c0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0005ced9) single_mobtv_pg_channel_table_pane_t

0x8050,	// (0x000552ee) main_mobtv_info_pane_g1_ParamLimits

0x8050,	// (0x000552ee) main_mobtv_info_pane_g1

0x806e,	// (0x0005530c) main_mobtv_info_pane_t1_ParamLimits

0x806e,	// (0x0005530c) main_mobtv_info_pane_t1

0x80e6,	// (0x00055384) main_mobtv_info_pane_t2_ParamLimits

0x80e6,	// (0x00055384) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0005cee3) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0005cee3) main_mobtv_info_pane_t

0x8175,	// (0x00055413) wait_bar_pane_cp05

0x8187,	// (0x00055425) main_mobtv_loading_pane_g1_ParamLimits

0x8187,	// (0x00055425) main_mobtv_loading_pane_g1

0x819a,	// (0x00055438) main_mobtv_loading_pane_g2_ParamLimits

0x819a,	// (0x00055438) main_mobtv_loading_pane_g2

0x81a6,	// (0x00055444) main_mobtv_loading_pane_g3_ParamLimits

0x81a6,	// (0x00055444) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0005ceea) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0005ceea) main_mobtv_loading_pane_g

0xe330,	// (0x0005b5ce) main_mobtv_loading_pane_t1_ParamLimits

0xe330,	// (0x0005b5ce) main_mobtv_loading_pane_t1

0xe348,	// (0x0005b5e6) main_mobtv_loading_pane_t2_ParamLimits

0xe348,	// (0x0005b5e6) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0005cef1) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0005cef1) main_mobtv_loading_pane_t

0x81b9,	// (0x00055457) wait_bar_pane_cp06_ParamLimits

0x81b9,	// (0x00055457) wait_bar_pane_cp06

0xe36c,	// (0x0005b60a) main_mobtv_programe_curr_pane_t1

0xe37a,	// (0x0005b618) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0005cef6) main_mobtv_programe_curr_pane_t

0xe388,	// (0x0005b626) main_mobtv_programe_next_pane_t1

0xe396,	// (0x0005b634) main_mobtv_programe_next_pane_t2

0xe3a4,	// (0x0005b642) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0005cefb) main_mobtv_programe_next_pane_t

0x9687,	// (0x00056925) bg_popup_mobtv_noti_window_pane

0xe3b2,	// (0x0005b650) popup_mobtv_noti_window_g1

0xe3ba,	// (0x0005b658) popup_mobtv_noti_window_t1

0xe3c8,	// (0x0005b666) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0005cf02) popup_mobtv_noti_window_t

0xcc13,	// (0x00059eb1) bg_popup_mobtv_noti_window_pane_g1

0x9687,	// (0x00056925) sc_clock_pane

0x9687,	// (0x00056925) main_fs_bigclock_pane

0x78c5,	// (0x00054b63) blid2_tripm_pane_t4_ParamLimits

0x78c5,	// (0x00054b63) blid2_tripm_pane_t4

0x81c8,	// (0x00055466) sc_clock_pane_g1_ParamLimits

0x81c8,	// (0x00055466) sc_clock_pane_g1

0x81da,	// (0x00055478) sc_clock_pane_t1_ParamLimits

0x81da,	// (0x00055478) sc_clock_pane_t1

0x81fc,	// (0x0005549a) sc_clock_pane_t2_ParamLimits

0x81fc,	// (0x0005549a) sc_clock_pane_t2

0x8214,	// (0x000554b2) sc_clock_pane_t3_ParamLimits

0x8214,	// (0x000554b2) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0005cf07) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0005cf07) sc_clock_pane_t

0x8cca,	// (0x00055f68) main_fs_bigclock_indicator_pane_ParamLimits

0x8cca,	// (0x00055f68) main_fs_bigclock_indicator_pane

0xce43,	// (0x0005a0e1) main_fs_bigclock_pane_g1_ParamLimits

0xce43,	// (0x0005a0e1) main_fs_bigclock_pane_g1

0x8cd6,	// (0x00055f74) main_fs_bigclock_pane_t1_ParamLimits

0x8cd6,	// (0x00055f74) main_fs_bigclock_pane_t1

0x8ce8,	// (0x00055f86) main_fs_bigclock_pane_t2_ParamLimits

0x8ce8,	// (0x00055f86) main_fs_bigclock_pane_t2

0x8cfa,	// (0x00055f98) main_fs_bigclock_pane_t3_ParamLimits

0x8cfa,	// (0x00055f98) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0005d111) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0005d111) main_fs_bigclock_pane_t

0xec73,	// (0x0005bf11) main_fs_bigclock_indicator_pane_g1

0xe09c,	// (0x0005b33a) ncim_query_content_pane_g2_ParamLimits

0xe09c,	// (0x0005b33a) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0005ce94) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0005ce94) ncim_query_content_pane_g

0x822d,	// (0x000554cb) sc_clock_pane_t4_ParamLimits

0x822d,	// (0x000554cb) sc_clock_pane_t4

0xa4d6,	// (0x00057774) main_radioblah_pane

0xd5b9,	// (0x0005a857) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5b9,	// (0x0005a857) cell_call4_button_pane_t1_copy1

0x7e69,	// (0x00055107) main_ncimui_pane_t1_ParamLimits

0x7e69,	// (0x00055107) main_ncimui_pane_t1

0x7e83,	// (0x00055121) main_ncimui_pane_t2_ParamLimits

0x7e83,	// (0x00055121) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0005ce8d) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0005ce8d) main_ncimui_pane_t

0xe503,	// (0x0005b7a1) main_radioblah_anim_pane_ParamLimits

0xe503,	// (0x0005b7a1) main_radioblah_anim_pane

0xe514,	// (0x0005b7b2) main_radioblah_info_pane_ParamLimits

0xe514,	// (0x0005b7b2) main_radioblah_info_pane

0xe528,	// (0x0005b7c6) main_radioblah_pane_t1_ParamLimits

0xe528,	// (0x0005b7c6) main_radioblah_pane_t1

0xe544,	// (0x0005b7e2) main_radioblah_pane_t2_ParamLimits

0xe544,	// (0x0005b7e2) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0005cf28) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0005cf28) main_radioblah_pane_t

0x82e3,	// (0x00055581) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82e3,	// (0x00055581) main_radioblah_rocker_ctrl_pane

0xe58c,	// (0x0005b82a) main_radioblah_info_pane_t1_ParamLimits

0xe58c,	// (0x0005b82a) main_radioblah_info_pane_t1

0x833b,	// (0x000555d9) main_radioblah_info_pane_t2_ParamLimits

0x833b,	// (0x000555d9) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0005cf31) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0005cf31) main_radioblah_info_pane_t

0xcc13,	// (0x00059eb1) main_radioblah_rocker_ctrl_pane_g1

0x83eb,	// (0x00055689) main_radioblah_rocker_ctrl_pane_g2

0x83f3,	// (0x00055691) main_radioblah_rocker_ctrl_pane_g3

0x83fb,	// (0x00055699) main_radioblah_rocker_ctrl_pane_g4

0x8403,	// (0x000556a1) main_radioblah_rocker_ctrl_pane_g5

0x840b,	// (0x000556a9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0005cf3a) main_radioblah_rocker_ctrl_pane_g

0x7e1f,	// (0x000550bd) main_cset_text2_pane_t1_copy1_ParamLimits

0xa0e1,	// (0x0005737f) cam4_image_uncrop_qvga_pane

0xa13a,	// (0x000573d8) vid4_image_uncrop_qcif_pane

0xa289,	// (0x00057527) cam6_image_uncrop_qvga_pane_ParamLimits

0xa289,	// (0x00057527) cam6_image_uncrop_qvga_pane

0xdd76,	// (0x0005b014) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd76,	// (0x0005b014) vid6_image_uncrop_qcif_pane

0x9687,	// (0x00056925) bg_popup_preview_window_pane_cp03

0xe04e,	// (0x0005b2ec) list_cset_text2_pane

0xe056,	// (0x0005b2f4) main_cset6_text2_pane_g1

0xe05e,	// (0x0005b2fc) main_cset6_text2_pane_t1

0x8413,	// (0x000556b1) list_cset_text2_pane_t1_ParamLimits

0x8413,	// (0x000556b1) list_cset_text2_pane_t1

0xa4d6,	// (0x00057774) main_radioblah_pane_ParamLimits

0x8161,	// (0x000553ff) main_mobtv_info_pane_t3_ParamLimits

0x8161,	// (0x000553ff) main_mobtv_info_pane_t3

0x82d1,	// (0x0005556f) main_radioblah_pane_g1

0x830b,	// (0x000555a9) main_radioblah_info_pane_g1

0x8390,	// (0x0005562e) main_radioblah_info_pane_t3_ParamLimits

0x8390,	// (0x0005562e) main_radioblah_info_pane_t3

0x2e35,	// (0x000500d3) highlight_cell_cale_month_pane_ParamLimits

0x2e35,	// (0x000500d3) highlight_cell_cale_month_pane

0x9687,	// (0x00056925) main_phob_fisheye_pane

0xcf4f,	// (0x0005a1ed) scroll_pane_cp0031_ParamLimits

0xcf4f,	// (0x0005a1ed) scroll_pane_cp0031

0xdeb1,	// (0x0005b14f) wait_bar_pane_cp08_ParamLimits

0x7bf7,	// (0x00054e95) cset_list_set_pane_copy1_ParamLimits

0xe5c6,	// (0x0005b864) highlight_cell_cale_month_pane_g1

0x842e,	// (0x000556cc) highlight_cell_cale_month_pane_t1

0xdb07,	// (0x0005ada5) list_gen_pane_cp01

0xd782,	// (0x0005aa20) scroll_pane_01

0xb2e2,	// (0x00058580) list_single_double_fisheye_pane

0x843c,	// (0x000556da) list_double_fisheye_pane_g1_ParamLimits

0x843c,	// (0x000556da) list_double_fisheye_pane_g1

0x8448,	// (0x000556e6) list_double_fisheye_pane_g2_ParamLimits

0x8448,	// (0x000556e6) list_double_fisheye_pane_g2

0xb2eb,	// (0x00058589) list_double_fisheye_pane_g3_ParamLimits

0xb2eb,	// (0x00058589) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0005cf47) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0005cf47) list_double_fisheye_pane_g

0x8479,	// (0x00055717) list_double_fisheye_pane_t1_ParamLimits

0x8479,	// (0x00055717) list_double_fisheye_pane_t1

0x8494,	// (0x00055732) list_double_fisheye_pane_t2_ParamLimits

0x8494,	// (0x00055732) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0005cf52) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0005cf52) list_double_fisheye_pane_t

0x9687,	// (0x00056925) main_call5_pane

0x8258,	// (0x000554f6) sc_swipe_pane_ParamLimits

0x8258,	// (0x000554f6) sc_swipe_pane

0x84c9,	// (0x00055767) call5_image_pane_ParamLimits

0x84c9,	// (0x00055767) call5_image_pane

0x84e6,	// (0x00055784) call5_swipe_1_pane_ParamLimits

0x84e6,	// (0x00055784) call5_swipe_1_pane

0x84f9,	// (0x00055797) call5_swipe_2_pane_ParamLimits

0x84f9,	// (0x00055797) call5_swipe_2_pane

0x8524,	// (0x000557c2) popup_call5_audio_first_window_ParamLimits

0x8524,	// (0x000557c2) popup_call5_audio_first_window

0xce73,	// (0x0005a111) call5_swipe_1_pane_g1_ParamLimits

0xce73,	// (0x0005a111) call5_swipe_1_pane_g1

0xe5ce,	// (0x0005b86c) call5_swipe_1_pane_g2_ParamLimits

0xe5ce,	// (0x0005b86c) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0005cf57) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0005cf57) call5_swipe_1_pane_g

0xe5da,	// (0x0005b878) call5_swipe_1_pane_t1_ParamLimits

0xe5da,	// (0x0005b878) call5_swipe_1_pane_t1

0xce73,	// (0x0005a111) call5_swipe_2_pane_g1_ParamLimits

0xce73,	// (0x0005a111) call5_swipe_2_pane_g1

0xe5ef,	// (0x0005b88d) call5_swipe_2_pane_g2_ParamLimits

0xe5ef,	// (0x0005b88d) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0005cf5c) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0005cf5c) call5_swipe_2_pane_g

0xe5fb,	// (0x0005b899) call5_swipe_2_pane_t1_ParamLimits

0xe5fb,	// (0x0005b899) call5_swipe_2_pane_t1

0xe610,	// (0x0005b8ae) sc_swipe_pane_g1_ParamLimits

0xe610,	// (0x0005b8ae) sc_swipe_pane_g1

0xe61d,	// (0x0005b8bb) sc_swipe_pane_g2_ParamLimits

0xe61d,	// (0x0005b8bb) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0005cf61) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0005cf61) sc_swipe_pane_g

0xe629,	// (0x0005b8c7) sc_swipe_pane_t1_ParamLimits

0xe629,	// (0x0005b8c7) sc_swipe_pane_t1

0x9687,	// (0x00056925) main_cmail_launcher_pane

0x8535,	// (0x000557d3) aid_size_cell_cmail_l_ParamLimits

0x8535,	// (0x000557d3) aid_size_cell_cmail_l

0x854f,	// (0x000557ed) grid_cmail_l_pane_ParamLimits

0x854f,	// (0x000557ed) grid_cmail_l_pane

0x856a,	// (0x00055808) cell_cmail_l_pane_ParamLimits

0x856a,	// (0x00055808) cell_cmail_l_pane

0x8590,	// (0x0005582e) cell_cmail_l_pane_g1_ParamLimits

0x8590,	// (0x0005582e) cell_cmail_l_pane_g1

0x85a1,	// (0x0005583f) cell_cmail_l_pane_t1_ParamLimits

0x85a1,	// (0x0005583f) cell_cmail_l_pane_t1

0xe63e,	// (0x0005b8dc) cell_cmail_l_pane_t2_ParamLimits

0xe63e,	// (0x0005b8dc) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0005cf66) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0005cf66) cell_cmail_l_pane_t

0xa4d6,	// (0x00057774) grid_highlight_pane_cp018_ParamLimits

0xa4d6,	// (0x00057774) grid_highlight_pane_cp018

0x0de5,	// (0x0004e083) main2_pane_ParamLimits

0x0de5,	// (0x0004e083) main2_pane

0xa83e,	// (0x00057adc) popup_sp_fs_action_menu_bg_pane_g1

0xa846,	// (0x00057ae4) popup_sp_fs_action_menu_bg_pane_g2

0xa84e,	// (0x00057aec) popup_sp_fs_action_menu_bg_pane_g3

0xa856,	// (0x00057af4) popup_sp_fs_action_menu_bg_pane_g4

0xa85e,	// (0x00057afc) popup_sp_fs_action_menu_bg_pane_g5

0xa866,	// (0x00057b04) popup_sp_fs_action_menu_bg_pane_g6

0xa86e,	// (0x00057b0c) popup_sp_fs_action_menu_bg_pane_g7

0xa876,	// (0x00057b14) popup_sp_fs_action_menu_bg_pane_g8

0xa87e,	// (0x00057b1c) popup_sp_fs_action_menu_bg_pane_g9

0xa886,	// (0x00057b24) popup_sp_fs_action_menu_bg_pane_g10

0xa886,	// (0x00057b24) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0005c42b) popup_sp_fs_action_menu_bg_pane_g

0x1dee,	// (0x0004f08c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1dee,	// (0x0004f08c) list_medium_line_x2_t3_g3_g1

0x00a2,	// (0x0004d340) list_medium_line_x2_t3_g3_g2_ParamLimits

0x00a2,	// (0x0004d340) list_medium_line_x2_t3_g3_g2

0x1dfa,	// (0x0004f098) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1dfa,	// (0x0004f098) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0005c4db) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0005c4db) list_medium_line_x2_t3_g3_g

0x1e06,	// (0x0004f0a4) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1e06,	// (0x0004f0a4) list_medium_line_x2_t3_g3_t1

0x00ae,	// (0x0004d34c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x00ae,	// (0x0004d34c) list_medium_line_x2_t3_g3_t2

0x1e1b,	// (0x0004f0b9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1e1b,	// (0x0004f0b9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0005c4e2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0005c4e2) list_medium_line_x2_t3_g3_t

0x1dee,	// (0x0004f08c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1dee,	// (0x0004f08c) list_medium_line_x2_t3_g2_g1

0x1dfa,	// (0x0004f098) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1dfa,	// (0x0004f098) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0005c4e9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0005c4e9) list_medium_line_x2_t3_g2_g

0x1e30,	// (0x0004f0ce) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1e30,	// (0x0004f0ce) list_medium_line_x2_t3_g2_t1

0x1e46,	// (0x0004f0e4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1e46,	// (0x0004f0e4) list_medium_line_x2_t3_g2_t2

0x1e58,	// (0x0004f0f6) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1e58,	// (0x0004f0f6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0005c4ee) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0005c4ee) list_medium_line_x2_t3_g2_t

0x1dee,	// (0x0004f08c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1dee,	// (0x0004f08c) list_medium_line_x2_t4_g4_g1

0x00c2,	// (0x0004d360) list_medium_line_x2_t4_g4_g2_ParamLimits

0x00c2,	// (0x0004d360) list_medium_line_x2_t4_g4_g2

0x00a2,	// (0x0004d340) list_medium_line_x2_t4_g4_g3_ParamLimits

0x00a2,	// (0x0004d340) list_medium_line_x2_t4_g4_g3

0x00ce,	// (0x0004d36c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x00ce,	// (0x0004d36c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0005c4f5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0005c4f5) list_medium_line_x2_t4_g4_g

0x00da,	// (0x0004d378) list_medium_line_x2_t4_g4_t1_ParamLimits

0x00da,	// (0x0004d378) list_medium_line_x2_t4_g4_t1

0x00f1,	// (0x0004d38f) list_medium_line_x2_t4_g4_t2_ParamLimits

0x00f1,	// (0x0004d38f) list_medium_line_x2_t4_g4_t2

0x0106,	// (0x0004d3a4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0106,	// (0x0004d3a4) list_medium_line_x2_t4_g4_t3

0x1e76,	// (0x0004f114) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1e76,	// (0x0004f114) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0005c4fe) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0005c4fe) list_medium_line_x2_t4_g4_t

0x1dee,	// (0x0004f08c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1dee,	// (0x0004f08c) list_medium_line_x2_t2_g4_g1

0x00c2,	// (0x0004d360) list_medium_line_x2_t2_g4_g2_ParamLimits

0x00c2,	// (0x0004d360) list_medium_line_x2_t2_g4_g2

0x00a2,	// (0x0004d340) list_medium_line_x2_t2_g4_g3_ParamLimits

0x00a2,	// (0x0004d340) list_medium_line_x2_t2_g4_g3

0x1dfa,	// (0x0004f098) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1dfa,	// (0x0004f098) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0005c565) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0005c565) list_medium_line_x2_t2_g4_g

0x2e5b,	// (0x000500f9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2e5b,	// (0x000500f9) list_medium_line_x2_t2_g4_t1

0x1e1b,	// (0x0004f0b9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1e1b,	// (0x0004f0b9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0005c56e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0005c56e) list_medium_line_x2_t2_g4_t

0x1dee,	// (0x0004f08c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1dee,	// (0x0004f08c) list_medium_line_x2_t2_g3_g1

0x00a2,	// (0x0004d340) list_medium_line_x2_t2_g3_g2_ParamLimits

0x00a2,	// (0x0004d340) list_medium_line_x2_t2_g3_g2

0x1dfa,	// (0x0004f098) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1dfa,	// (0x0004f098) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0005c4db) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0005c4db) list_medium_line_x2_t2_g3_g

0x2e70,	// (0x0005010e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2e70,	// (0x0005010e) list_medium_line_x2_t2_g3_t1

0x1e1b,	// (0x0004f0b9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1e1b,	// (0x0004f0b9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0005c573) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0005c573) list_medium_line_x2_t2_g3_t

0x2faf,	// (0x0005024d) main_sp_fs_list_pane_ParamLimits

0x2faf,	// (0x0005024d) main_sp_fs_list_pane

0xcf80,	// (0x0005a21e) sp_fs_scroll_pane_ParamLimits

0xcf80,	// (0x0005a21e) sp_fs_scroll_pane

0x0118,	// (0x0004d3b6) list_medium_line_x2_t3_t1

0x0128,	// (0x0004d3c6) list_medium_line_x2_t3_t2

0x2fbb,	// (0x00050259) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0005c5be) list_medium_line_x2_t3_t

0x0136,	// (0x0004d3d4) list_medium_line_x3_t4_t1

0x0146,	// (0x0004d3e4) list_medium_line_x3_t4_t2

0x2fc9,	// (0x00050267) list_medium_line_x3_t4_t3

0x2fbb,	// (0x00050259) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0005c5c5) list_medium_line_x3_t4_t

0x0154,	// (0x0004d3f2) list_medium_line_x4_t5_t1

0x0164,	// (0x0004d402) list_medium_line_x4_t5_t2

0x2fc9,	// (0x00050267) list_medium_line_x4_t5_t3

0x0172,	// (0x0004d410) list_medium_line_x4_t5_t4

0x2fbb,	// (0x00050259) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0005c5ce) list_medium_line_x4_t5_t

0x1dee,	// (0x0004f08c) list_medium_line_t4_g4_g1_ParamLimits

0x1dee,	// (0x0004f08c) list_medium_line_t4_g4_g1

0x2fd7,	// (0x00050275) list_medium_line_t4_g4_g2_ParamLimits

0x2fd7,	// (0x00050275) list_medium_line_t4_g4_g2

0x0180,	// (0x0004d41e) list_medium_line_t4_g4_g3_ParamLimits

0x0180,	// (0x0004d41e) list_medium_line_t4_g4_g3

0x1dfa,	// (0x0004f098) list_medium_line_t4_g4_g4_ParamLimits

0x1dfa,	// (0x0004f098) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0005c5d9) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0005c5d9) list_medium_line_t4_g4_g

0x2fe3,	// (0x00050281) list_medium_line_t4_g4_t1_ParamLimits

0x2fe3,	// (0x00050281) list_medium_line_t4_g4_t1

0x2ff8,	// (0x00050296) list_medium_line_t4_g4_t2_ParamLimits

0x2ff8,	// (0x00050296) list_medium_line_t4_g4_t2

0x018c,	// (0x0004d42a) list_medium_line_t4_g4_t3_ParamLimits

0x018c,	// (0x0004d42a) list_medium_line_t4_g4_t3

0x1e1b,	// (0x0004f0b9) list_medium_line_t4_g4_t4_ParamLimits

0x1e1b,	// (0x0004f0b9) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0005c5e2) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0005c5e2) list_medium_line_t4_g4_t

0x30ad,	// (0x0005034b) chi_dic_find_pane_g1

0x4122,	// (0x000513c0) main_tport_pane

0x7030,	// (0x000542ce) list_medium_line_plain_t1

0x70e2,	// (0x00054380) list_medium_line_t2_g2_g1_ParamLimits

0x70e2,	// (0x00054380) list_medium_line_t2_g2_g1

0x70ee,	// (0x0005438c) list_medium_line_t2_g2_g2_ParamLimits

0x70ee,	// (0x0005438c) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0005cc9e) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0005cc9e) list_medium_line_t2_g2_g

0x0305,	// (0x0004d5a3) list_medium_line_t2_g2_t1_ParamLimits

0x0305,	// (0x0004d5a3) list_medium_line_t2_g2_t1

0x031f,	// (0x0004d5bd) list_medium_line_t2_g2_t2_ParamLimits

0x031f,	// (0x0004d5bd) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0005cca3) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0005cca3) list_medium_line_t2_g2_t

0x766d,	// (0x0005490b) aid_sp_fs_list_icon_a_sm

0x7675,	// (0x00054913) aid_sp_fs_list_icon_d

0x767d,	// (0x0005491b) aid_sp_fs_text_primary

0x7686,	// (0x00054924) aid_sp_fs_text_secondary

0xeb82,	// (0x0005be20) list_medium_line

0xeb82,	// (0x0005be20) list_medium_line_g2

0xeb82,	// (0x0005be20) list_medium_line_g3

0xeb82,	// (0x0005be20) list_medium_line_plain

0xeb82,	// (0x0005be20) list_medium_line_plain_t2

0xeb82,	// (0x0005be20) list_medium_line_plain_t3

0xeb82,	// (0x0005be20) list_medium_line_right_icon

0xeb82,	// (0x0005be20) list_medium_line_right_iconx2

0xeb82,	// (0x0005be20) list_medium_line_t2

0xeb82,	// (0x0005be20) list_medium_line_t2_g2

0xeb82,	// (0x0005be20) list_medium_line_t2_g3

0xeb82,	// (0x0005be20) list_medium_line_t2_right_icon

0xeb82,	// (0x0005be20) list_medium_line_t2_right_iconx2

0xeb82,	// (0x0005be20) list_medium_line_t3

0xeb82,	// (0x0005be20) list_medium_line_t3_g2

0xeb82,	// (0x0005be20) list_medium_line_t3_g3

0xeb82,	// (0x0005be20) list_medium_line_t3_right_iconx2

0x768f,	// (0x0005492d) list_medium_line_t4_g4

0x7698,	// (0x00054936) list_medium_line_x2

0x7698,	// (0x00054936) list_medium_line_x2_t2_g2

0x7698,	// (0x00054936) list_medium_line_x2_t2_g3

0x7698,	// (0x00054936) list_medium_line_x2_t2_g4

0x7698,	// (0x00054936) list_medium_line_x2_t3

0x7698,	// (0x00054936) list_medium_line_x2_t3_g2

0x7698,	// (0x00054936) list_medium_line_x2_t3_g3

0x7698,	// (0x00054936) list_medium_line_x2_t3_g4

0x7698,	// (0x00054936) list_medium_line_x2_t4_g2

0x7698,	// (0x00054936) list_medium_line_x2_t4_g4

0x76a1,	// (0x0005493f) list_medium_line_x3

0x76a1,	// (0x0005493f) list_medium_line_x3_t4

0x76a1,	// (0x0005493f) list_medium_line_x3_t4_g4

0x768f,	// (0x0005492d) list_medium_line_x4_t4

0x768f,	// (0x0005492d) list_medium_line_x4_t4_g7

0x768f,	// (0x0005492d) list_medium_line_x4_t5

0x04ae,	// (0x0004d74c) list_single_fs_dyc_pane_ParamLimits

0x04ae,	// (0x0004d74c) list_single_fs_dyc_pane

0x1dee,	// (0x0004f08c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1dee,	// (0x0004f08c) list_medium_line_x4_t4_g7_g1

0x7dc5,	// (0x00055063) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7dc5,	// (0x00055063) list_medium_line_x4_t4_g7_g2

0x04ee,	// (0x0004d78c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x04ee,	// (0x0004d78c) list_medium_line_x4_t4_g7_g3

0x04fd,	// (0x0004d79b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x04fd,	// (0x0004d79b) list_medium_line_x4_t4_g7_g4

0x0509,	// (0x0004d7a7) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0509,	// (0x0004d7a7) list_medium_line_x4_t4_g7_g5

0x0518,	// (0x0004d7b6) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0518,	// (0x0004d7b6) list_medium_line_x4_t4_g7_g6

0x7dd1,	// (0x0005506f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7dd1,	// (0x0005506f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0005ce6e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0005ce6e) list_medium_line_x4_t4_g7_g

0x7ddd,	// (0x0005507b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7ddd,	// (0x0005507b) list_medium_line_x4_t4_g7_t1

0x0527,	// (0x0004d7c5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0527,	// (0x0004d7c5) list_medium_line_x4_t4_g7_t2

0x053c,	// (0x0004d7da) list_medium_line_x4_t4_g7_t3_ParamLimits

0x053c,	// (0x0004d7da) list_medium_line_x4_t4_g7_t3

0x0551,	// (0x0004d7ef) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0551,	// (0x0004d7ef) list_medium_line_x4_t4_g7_t4

0x7df2,	// (0x00055090) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7df2,	// (0x00055090) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0005ce7d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0005ce7d) list_medium_line_x4_t4_g7_t

0x7e04,	// (0x000550a2) list_single_dyc_row_pane_ParamLimits

0x7e04,	// (0x000550a2) list_single_dyc_row_pane

0x84b6,	// (0x00055754) call5_gesture_pane_ParamLimits

0x84b6,	// (0x00055754) call5_gesture_pane

0x850c,	// (0x000557aa) call5_windows_pane_ParamLimits

0x850c,	// (0x000557aa) call5_windows_pane

0x85b7,	// (0x00055855) call5_swipe_1_pane_cp_ParamLimits

0x85b7,	// (0x00055855) call5_swipe_1_pane_cp

0x85c3,	// (0x00055861) call5_swipe_2_pane_cp_ParamLimits

0x85c3,	// (0x00055861) call5_swipe_2_pane_cp

0xb3f9,	// (0x00058697) call5_image_pane_cp

0x85cf,	// (0x0005586d) popup_call5_audio_first_window_cp_ParamLimits

0x85cf,	// (0x0005586d) popup_call5_audio_first_window_cp

0xe610,	// (0x0005b8ae) call5_swipe_1_pane_g1_cp_ParamLimits

0xe610,	// (0x0005b8ae) call5_swipe_1_pane_g1_cp

0xe650,	// (0x0005b8ee) call5_swipe_1_pane_g2_cp

0xe629,	// (0x0005b8c7) call5_swipe_1_pane_t1_cp_ParamLimits

0xe629,	// (0x0005b8c7) call5_swipe_1_pane_t1_cp

0xe610,	// (0x0005b8ae) call5_swipe_2_pane_g1_cp_ParamLimits

0xe610,	// (0x0005b8ae) call5_swipe_2_pane_g1_cp

0xe658,	// (0x0005b8f6) call5_swipe_2_pane_g2_cp

0xe660,	// (0x0005b8fe) call5_swipe_2_pane_t1_cp_ParamLimits

0xe660,	// (0x0005b8fe) call5_swipe_2_pane_t1_cp

0xa4d6,	// (0x00057774) main_sp_fs_email_pane

0xe675,	// (0x0005b913) main_sp_fs_listscroll_pane_te

0x85dd,	// (0x0005587b) popup_sp_fs_action_menu_pane_ParamLimits

0x85dd,	// (0x0005587b) popup_sp_fs_action_menu_pane

0xcc13,	// (0x00059eb1) bg_sp_fs_ctrlbar_pane_g1

0xe67e,	// (0x0005b91c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe687,	// (0x0005b925) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe690,	// (0x0005b92e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc13,	// (0x00059eb1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0005cf6b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9f6,	// (0x00059c94) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9f6,	// (0x00059c94) bg_sp_fs_ctrlbar_ddmenu_pane

0xe699,	// (0x0005b937) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe699,	// (0x0005b937) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6a5,	// (0x0005b943) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6a5,	// (0x0005b943) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0005cf74) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0005cf74) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6b1,	// (0x0005b94f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6b1,	// (0x0005b94f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x861f,	// (0x000558bd) list_medium_line_t2_right_icon_g1

0x0563,	// (0x0004d801) list_medium_line_t2_right_icon_t1

0x0573,	// (0x0004d811) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0005cf79) list_medium_line_t2_right_icon_t

0xc809,	// (0x00059aa7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc809,	// (0x00059aa7) bg_sp_fs_ctrlbar_pane

0x866f,	// (0x0005590d) main_sp_fs_ctrlbar_button_pane_cp01

0x8679,	// (0x00055917) main_sp_fs_ctrlbar_ddmenu_pane

0xe703,	// (0x0005b9a1) main_sp_fs_ctrlbar_pane_g1

0xe70f,	// (0x0005b9ad) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0005cf7e) main_sp_fs_ctrlbar_pane_g

0xe71b,	// (0x0005b9b9) main_sp_fs_ctrlbar_pane_t1

0x8683,	// (0x00055921) main_sp_fs_ctrlbar_pane

0x86a7,	// (0x00055945) main_sp_fs_listscroll_pane_te_cp01

0x0585,	// (0x0004d823) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0585,	// (0x0004d823) popup_sp_fs_action_menu_pane_cp01

0xa4d6,	// (0x00057774) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4d6,	// (0x00057774) bg_sp_fs_highlight_list_pane_cp01

0x86c7,	// (0x00055965) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x86c7,	// (0x00055965) sp_fs_action_menu_list_gene_pane_g1

0xe74b,	// (0x0005b9e9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe74b,	// (0x0005b9e9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0005cf88) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0005cf88) sp_fs_action_menu_list_gene_pane_g

0x86d6,	// (0x00055974) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x86d6,	// (0x00055974) sp_fs_action_menu_list_gene_pane_t1

0x86ee,	// (0x0005598c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x86ee,	// (0x0005598c) sp_fs_action_menu_list_gene_pane

0xe758,	// (0x0005b9f6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe758,	// (0x0005b9f6) popup_sp_fs_action_menu_bg_pane

0x870b,	// (0x000559a9) sp_fs_action_menu_list_pane_ParamLimits

0x870b,	// (0x000559a9) sp_fs_action_menu_list_pane

0x05b5,	// (0x0004d853) sp_fs_scroll_pane_cp01_ParamLimits

0x05b5,	// (0x0004d853) sp_fs_scroll_pane_cp01

0x05db,	// (0x0004d879) list_medium_line_plain_t2_t1

0x05eb,	// (0x0004d889) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0005cf8d) list_medium_line_plain_t2_t

0x05fb,	// (0x0004d899) list_medium_line_plain_t3_t1

0x060b,	// (0x0004d8a9) list_medium_line_plain_t3_t2

0x0619,	// (0x0004d8b7) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0005cf92) list_medium_line_plain_t3_t

0x1dee,	// (0x0004f08c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1dee,	// (0x0004f08c) list_medium_line_x2_t2_g2_g1

0x1dfa,	// (0x0004f098) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1dfa,	// (0x0004f098) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0005c4e9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0005c4e9) list_medium_line_x2_t2_g2_g

0x2fe3,	// (0x00050281) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2fe3,	// (0x00050281) list_medium_line_x2_t2_g2_t1

0x1e1b,	// (0x0004f0b9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1e1b,	// (0x0004f0b9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0005cf99) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0005cf99) list_medium_line_x2_t2_g2_t

0x1dee,	// (0x0004f08c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1dee,	// (0x0004f08c) list_medium_line_x2_t4_g2_g1

0x0627,	// (0x0004d8c5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0627,	// (0x0004d8c5) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0005cf9e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0005cf9e) list_medium_line_x2_t4_g2_g

0x0638,	// (0x0004d8d6) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0638,	// (0x0004d8d6) list_medium_line_x2_t4_g2_t1

0x0652,	// (0x0004d8f0) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0652,	// (0x0004d8f0) list_medium_line_x2_t4_g2_t2

0x0667,	// (0x0004d905) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0667,	// (0x0004d905) list_medium_line_x2_t4_g2_t3

0x1e1b,	// (0x0004f0b9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1e1b,	// (0x0004f0b9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0005cfa3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0005cfa3) list_medium_line_x2_t4_g2_t

0x8729,	// (0x000559c7) list_medium_line_t3_right_iconx2_g1

0x861f,	// (0x000558bd) list_medium_line_t3_right_iconx2_g2

0x067c,	// (0x0004d91a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0005cfac) list_medium_line_t3_right_iconx2_g

0x0686,	// (0x0004d924) list_medium_line_t3_right_iconx2_t1

0x0696,	// (0x0004d934) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0005cfb3) list_medium_line_t3_right_iconx2_t

0x1dee,	// (0x0004f08c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1dee,	// (0x0004f08c) list_medium_line_x3_t4_g4_g1

0x00a2,	// (0x0004d340) list_medium_line_x3_t4_g4_g2_ParamLimits

0x00a2,	// (0x0004d340) list_medium_line_x3_t4_g4_g2

0x2fd7,	// (0x00050275) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2fd7,	// (0x00050275) list_medium_line_x3_t4_g4_g3

0x06a4,	// (0x0004d942) list_medium_line_x3_t4_g4_g4_ParamLimits

0x06a4,	// (0x0004d942) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0005cfb8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0005cfb8) list_medium_line_x3_t4_g4_g

0x06b0,	// (0x0004d94e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x06b0,	// (0x0004d94e) list_medium_line_x3_t4_g4_t1

0x06c7,	// (0x0004d965) list_medium_line_x3_t4_g4_t2_ParamLimits

0x06c7,	// (0x0004d965) list_medium_line_x3_t4_g4_t2

0x8731,	// (0x000559cf) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8731,	// (0x000559cf) list_medium_line_x3_t4_g4_t3

0x06e2,	// (0x0004d980) list_medium_line_x3_t4_g4_t4_ParamLimits

0x06e2,	// (0x0004d980) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0005cfc1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0005cfc1) list_medium_line_x3_t4_g4_t

0x06fe,	// (0x0004d99c) list_single_dyc_row_text_pane_t1_ParamLimits

0x06fe,	// (0x0004d99c) list_single_dyc_row_text_pane_t1

0x0747,	// (0x0004d9e5) list_single_dyc_row_text_pane_t2_ParamLimits

0x0747,	// (0x0004d9e5) list_single_dyc_row_text_pane_t2

0x8746,	// (0x000559e4) list_single_dyc_row_text_pane_t3_ParamLimits

0x8746,	// (0x000559e4) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0005cfca) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0005cfca) list_single_dyc_row_text_pane_t

0x876a,	// (0x00055a08) list_single_dyc_row_pane_g1_ParamLimits

0x876a,	// (0x00055a08) list_single_dyc_row_pane_g1

0x8776,	// (0x00055a14) list_single_dyc_row_pane_g2_ParamLimits

0x8776,	// (0x00055a14) list_single_dyc_row_pane_g2

0x8782,	// (0x00055a20) list_single_dyc_row_pane_g3_ParamLimits

0x8782,	// (0x00055a20) list_single_dyc_row_pane_g3

0x878e,	// (0x00055a2c) list_single_dyc_row_pane_g4_ParamLimits

0x878e,	// (0x00055a2c) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0005cfd7) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0005cfd7) list_single_dyc_row_pane_g

0x879a,	// (0x00055a38) list_single_dyc_row_text_pane_ParamLimits

0x879a,	// (0x00055a38) list_single_dyc_row_text_pane

0x9687,	// (0x00056925) bg_sp_fs_scroll_pane

0xe766,	// (0x0005ba04) thumb_sp_fs_scroll_pane

0x70e2,	// (0x00054380) list_medium_line_g1_ParamLimits

0x70e2,	// (0x00054380) list_medium_line_g1

0x87b9,	// (0x00055a57) list_medium_line_t1_ParamLimits

0x87b9,	// (0x00055a57) list_medium_line_t1

0x1dee,	// (0x0004f08c) list_medium_line_x2_g1_ParamLimits

0x1dee,	// (0x0004f08c) list_medium_line_x2_g1

0x00a2,	// (0x0004d340) list_medium_line_x2_g2_ParamLimits

0x00a2,	// (0x0004d340) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0005cfe0) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0005cfe0) list_medium_line_x2_g

0x87ce,	// (0x00055a6c) list_medium_line_x2_t1_ParamLimits

0x87ce,	// (0x00055a6c) list_medium_line_x2_t1

0x1dee,	// (0x0004f08c) list_medium_line_x3_g1_ParamLimits

0x1dee,	// (0x0004f08c) list_medium_line_x3_g1

0x00a2,	// (0x0004d340) list_medium_line_x3_g2_ParamLimits

0x00a2,	// (0x0004d340) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0005cfe0) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0005cfe0) list_medium_line_x3_g

0x87ce,	// (0x00055a6c) list_medium_line_x3_t1_ParamLimits

0x87ce,	// (0x00055a6c) list_medium_line_x3_t1

0xe76f,	// (0x0005ba0d) thumb_sp_fs_scroll_pane_g1

0xe778,	// (0x0005ba16) thumb_sp_fs_scroll_pane_g2

0xe781,	// (0x0005ba1f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005cfe5) thumb_sp_fs_scroll_pane_g

0xe76f,	// (0x0005ba0d) bg_sp_fs_scroll_pane_g1

0xe778,	// (0x0005ba16) bg_sp_fs_scroll_pane_g2

0xe781,	// (0x0005ba1f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005cfe5) bg_sp_fs_scroll_pane_g

0x1dee,	// (0x0004f08c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1dee,	// (0x0004f08c) list_medium_line_x2_t3_g4_g1

0x00c2,	// (0x0004d360) list_medium_line_x2_t3_g4_g2_ParamLimits

0x00c2,	// (0x0004d360) list_medium_line_x2_t3_g4_g2

0x00a2,	// (0x0004d340) list_medium_line_x2_t3_g4_g3_ParamLimits

0x00a2,	// (0x0004d340) list_medium_line_x2_t3_g4_g3

0x1dfa,	// (0x0004f098) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1dfa,	// (0x0004f098) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0005c565) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0005c565) list_medium_line_x2_t3_g4_g

0x087c,	// (0x0004db1a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x087c,	// (0x0004db1a) list_medium_line_x2_t3_g4_t1

0x0896,	// (0x0004db34) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0896,	// (0x0004db34) list_medium_line_x2_t3_g4_t2

0x1e1b,	// (0x0004f0b9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1e1b,	// (0x0004f0b9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0005cfec) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0005cfec) list_medium_line_x2_t3_g4_t

0x70e2,	// (0x00054380) list_medium_line_g2_g1_ParamLimits

0x70e2,	// (0x00054380) list_medium_line_g2_g1

0x70ee,	// (0x0005438c) list_medium_line_g2_g2_ParamLimits

0x70ee,	// (0x0005438c) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0005cc9e) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0005cc9e) list_medium_line_g2_g

0x87e4,	// (0x00055a82) list_medium_line_g2_t1_ParamLimits

0x87e4,	// (0x00055a82) list_medium_line_g2_t1

0x70e2,	// (0x00054380) list_medium_line_t3_g2_g1_ParamLimits

0x70e2,	// (0x00054380) list_medium_line_t3_g2_g1

0x70ee,	// (0x0005438c) list_medium_line_t3_g2_g2_ParamLimits

0x70ee,	// (0x0005438c) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0005cc9e) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0005cc9e) list_medium_line_t3_g2_g

0x08af,	// (0x0004db4d) list_medium_line_t3_g2_t1_ParamLimits

0x08af,	// (0x0004db4d) list_medium_line_t3_g2_t1

0x08c9,	// (0x0004db67) list_medium_line_t3_g2_t2_ParamLimits

0x08c9,	// (0x0004db67) list_medium_line_t3_g2_t2

0x08de,	// (0x0004db7c) list_medium_line_t3_g2_t3_ParamLimits

0x08de,	// (0x0004db7c) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0005cff3) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0005cff3) list_medium_line_t3_g2_t

0x861f,	// (0x000558bd) list_medium_line_right_icon_g1

0x87f9,	// (0x00055a97) list_medium_line_right_icon_t1

0x70e2,	// (0x00054380) list_medium_line_t2_g1_ParamLimits

0x70e2,	// (0x00054380) list_medium_line_t2_g1

0x08f8,	// (0x0004db96) list_medium_line_t2_t1_ParamLimits

0x08f8,	// (0x0004db96) list_medium_line_t2_t1

0x0912,	// (0x0004dbb0) list_medium_line_t2_t2_ParamLimits

0x0912,	// (0x0004dbb0) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0005cffa) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0005cffa) list_medium_line_t2_t

0x70e2,	// (0x00054380) list_medium_line_t3_g1_ParamLimits

0x70e2,	// (0x00054380) list_medium_line_t3_g1

0x092b,	// (0x0004dbc9) list_medium_line_t3_t1_ParamLimits

0x092b,	// (0x0004dbc9) list_medium_line_t3_t1

0x0942,	// (0x0004dbe0) list_medium_line_t3_t2_ParamLimits

0x0942,	// (0x0004dbe0) list_medium_line_t3_t2

0x0957,	// (0x0004dbf5) list_medium_line_t3_t3_ParamLimits

0x0957,	// (0x0004dbf5) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0005cfff) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0005cfff) list_medium_line_t3_t

0x70e2,	// (0x00054380) list_medium_line_g3_g1_ParamLimits

0x70e2,	// (0x00054380) list_medium_line_g3_g1

0xa297,	// (0x00057535) list_medium_line_g3_g2_ParamLimits

0xa297,	// (0x00057535) list_medium_line_g3_g2

0x70ee,	// (0x0005438c) list_medium_line_g3_g3_ParamLimits

0x70ee,	// (0x0005438c) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0005d006) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0005d006) list_medium_line_g3_g

0xa2a3,	// (0x00057541) list_medium_line_g3_t1_ParamLimits

0xa2a3,	// (0x00057541) list_medium_line_g3_t1

0x70e2,	// (0x00054380) list_medium_line_t2_g3_g1_ParamLimits

0x70e2,	// (0x00054380) list_medium_line_t2_g3_g1

0xa297,	// (0x00057535) list_medium_line_t2_g3_g2_ParamLimits

0xa297,	// (0x00057535) list_medium_line_t2_g3_g2

0x70ee,	// (0x0005438c) list_medium_line_t2_g3_g3_ParamLimits

0x70ee,	// (0x0005438c) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0005d006) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0005d006) list_medium_line_t2_g3_g

0x0969,	// (0x0004dc07) list_medium_line_t2_g3_t1_ParamLimits

0x0969,	// (0x0004dc07) list_medium_line_t2_g3_t1

0x0983,	// (0x0004dc21) list_medium_line_t2_g3_t2_ParamLimits

0x0983,	// (0x0004dc21) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0005d00d) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0005d00d) list_medium_line_t2_g3_t

0x70e2,	// (0x00054380) list_medium_line_t3_g3_g1_ParamLimits

0x70e2,	// (0x00054380) list_medium_line_t3_g3_g1

0xa297,	// (0x00057535) list_medium_line_t3_g3_g2_ParamLimits

0xa297,	// (0x00057535) list_medium_line_t3_g3_g2

0x70ee,	// (0x0005438c) list_medium_line_t3_g3_g3_ParamLimits

0x70ee,	// (0x0005438c) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0005d006) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0005d006) list_medium_line_t3_g3_g

0x099e,	// (0x0004dc3c) list_medium_line_t3_g3_t1_ParamLimits

0x099e,	// (0x0004dc3c) list_medium_line_t3_g3_t1

0x09b7,	// (0x0004dc55) list_medium_line_t3_g3_t2_ParamLimits

0x09b7,	// (0x0004dc55) list_medium_line_t3_g3_t2

0x09cd,	// (0x0004dc6b) list_medium_line_t3_g3_t3_ParamLimits

0x09cd,	// (0x0004dc6b) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0005d012) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0005d012) list_medium_line_t3_g3_t

0x8729,	// (0x000559c7) list_medium_line_right_iconx2_g1

0x861f,	// (0x000558bd) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005d019) list_medium_line_right_iconx2_g

0xa2b8,	// (0x00057556) list_medium_line_right_iconx2_t1

0x8729,	// (0x000559c7) list_medium_line_t2_right_iconx2_g1

0x861f,	// (0x000558bd) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005d019) list_medium_line_t2_right_iconx2_g

0x09e7,	// (0x0004dc85) list_medium_line_t2_right_iconx2_t1

0x09f7,	// (0x0004dc95) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0005d01e) list_medium_line_t2_right_iconx2_t

0xa2c6,	// (0x00057564) list_medium_line_x4_t4_t1

0x0a09,	// (0x0004dca7) list_medium_line_x4_t4_t2

0x0a19,	// (0x0004dcb7) list_medium_line_x4_t4_t3

0x0a29,	// (0x0004dcc7) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0005d023) list_medium_line_x4_t4_t

0x884a,	// (0x00055ae8) tport_appsw_pane_ParamLimits

0x884a,	// (0x00055ae8) tport_appsw_pane

0x8862,	// (0x00055b00) tport_contact_pane_ParamLimits

0x8862,	// (0x00055b00) tport_contact_pane

0x887a,	// (0x00055b18) tport_listscroll_pane_ParamLimits

0x887a,	// (0x00055b18) tport_listscroll_pane

0x8894,	// (0x00055b32) cell_tport_appsw_pane_ParamLimits

0x8894,	// (0x00055b32) cell_tport_appsw_pane

0xd648,	// (0x0005a8e6) tport_appsw_pane_g1_ParamLimits

0xd648,	// (0x0005a8e6) tport_appsw_pane_g1

0xe78a,	// (0x0005ba28) tport_contact_pane_g1

0xe122,	// (0x0005b3c0) tport_contact_pane_t1

0xe793,	// (0x0005ba31) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0005d02c) tport_contact_pane_t

0xe7a1,	// (0x0005ba3f) list_tport_pane

0xe7aa,	// (0x0005ba48) scroll_pane_cp_030

0x88dc,	// (0x00055b7a) cell_tport_appsw_pane_g1

0x88ec,	// (0x00055b8a) cell_tport_appsw_pane_t1

0x88fa,	// (0x00055b98) grid_highlight_pane_cp019

0x8902,	// (0x00055ba0) list_tport_double_graphic_pane_ParamLimits

0x8902,	// (0x00055ba0) list_tport_double_graphic_pane

0xa4d6,	// (0x00057774) list_highlight_pane_cp023_ParamLimits

0xa4d6,	// (0x00057774) list_highlight_pane_cp023

0x890f,	// (0x00055bad) list_tport_double_graphic_pane_g1_ParamLimits

0x890f,	// (0x00055bad) list_tport_double_graphic_pane_g1

0x891c,	// (0x00055bba) list_tport_double_graphic_pane_t1_ParamLimits

0x891c,	// (0x00055bba) list_tport_double_graphic_pane_t1

0x8931,	// (0x00055bcf) list_tport_double_graphic_pane_t2_ParamLimits

0x8931,	// (0x00055bcf) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0005d038) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0005d038) list_tport_double_graphic_pane_t

0x9687,	// (0x00056925) main_cale_note_pane

0x6877,	// (0x00053b15) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6877,	// (0x00053b15) cell_vitu2_function_top_wide_pane_cp01

0x8175,	// (0x00055413) wait_bar_pane_cp05_ParamLimits

0xa4d6,	// (0x00057774) listscroll_cmail_pane

0xe7b3,	// (0x0005ba51) list_cmail_pane

0x8943,	// (0x00055be1) list_cmail_body_pane

0x8958,	// (0x00055bf6) list_single_cmail_header_caption_pane

0x8971,	// (0x00055c0f) list_single_cmail_header_detail_pane_ParamLimits

0x8971,	// (0x00055c0f) list_single_cmail_header_detail_pane

0xe7c3,	// (0x0005ba61) list_single_cmail_header_caption_pane_t1

0x0a39,	// (0x0004dcd7) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0a39,	// (0x0004dcd7) list_single_cmail_header_detail_pane_g1

0xa2d4,	// (0x00057572) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa2d4,	// (0x00057572) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0005d03d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0005d03d) list_single_cmail_header_detail_pane_g

0x0a51,	// (0x0004dcef) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0a51,	// (0x0004dcef) list_single_cmail_header_detail_pane_t1

0x0a8f,	// (0x0004dd2d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0a8f,	// (0x0004dd2d) list_single_cmail_header_editor_pane_bg

0xe7de,	// (0x0005ba7c) list_cmail_body_pane_g1

0xe7e7,	// (0x0005ba85) list_cmail_body_pane_t1

0xd668,	// (0x0005a906) list_single_cmail_header_editor_pane_bg_g1

0xabb3,	// (0x00057e51) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd678,	// (0x0005a916) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd670,	// (0x0005a90e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd88c,	// (0x0005ab2a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd698,	// (0x0005a936) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd688,	// (0x0005a926) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd690,	// (0x0005a92e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab93,	// (0x00057e31) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x89a5,	// (0x00055c43) calenote_gesture_pane_ParamLimits

0x89a5,	// (0x00055c43) calenote_gesture_pane

0x89c5,	// (0x00055c63) calenote_window_pane_ParamLimits

0x89c5,	// (0x00055c63) calenote_window_pane

0xe7f5,	// (0x0005ba93) popup_note_window_cp01

0x89e1,	// (0x00055c7f) calenote_swipe_1_pane_ParamLimits

0x89e1,	// (0x00055c7f) calenote_swipe_1_pane

0x85c3,	// (0x00055861) calenote_swipe_2_pane_ParamLimits

0x85c3,	// (0x00055861) calenote_swipe_2_pane

0xe610,	// (0x0005b8ae) calenote_swipe_1_pane_g1_ParamLimits

0xe610,	// (0x0005b8ae) calenote_swipe_1_pane_g1

0xe61d,	// (0x0005b8bb) calenote_swipe_1_pane_g2_ParamLimits

0xe61d,	// (0x0005b8bb) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0005cf61) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0005cf61) calenote_swipe_1_pane_g

0xe807,	// (0x0005baa5) calenote_swipe_1_pane_t1_ParamLimits

0xe807,	// (0x0005baa5) calenote_swipe_1_pane_t1

0xe610,	// (0x0005b8ae) calenote_swipe_2_pane_g1_ParamLimits

0xe610,	// (0x0005b8ae) calenote_swipe_2_pane_g1

0xe826,	// (0x0005bac4) calenote_swipe_2_pane_g2_ParamLimits

0xe826,	// (0x0005bac4) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0005d049) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0005d049) calenote_swipe_2_pane_g

0xe832,	// (0x0005bad0) calenote_swipe_2_pane_t1_ParamLimits

0xe832,	// (0x0005bad0) calenote_swipe_2_pane_t1

0x9687,	// (0x00056925) main_mup_navstr_pane

0x552d,	// (0x000527cb) main_mup3_pane_t7_ParamLimits

0x552d,	// (0x000527cb) main_mup3_pane_t7

0x9eff,	// (0x0005719d) main_mp4_pane_g6_ParamLimits

0x9eff,	// (0x0005719d) main_mp4_pane_g6

0xa0a3,	// (0x00057341) main_image3_pane_t4_ParamLimits

0xa0a3,	// (0x00057341) main_image3_pane_t4

0x89f6,	// (0x00055c94) popup_navstr_preview_pane_ParamLimits

0x89f6,	// (0x00055c94) popup_navstr_preview_pane

0x8a0a,	// (0x00055ca8) scroll_navstr_pane_ParamLimits

0x8a0a,	// (0x00055ca8) scroll_navstr_pane

0x9687,	// (0x00056925) bg_popup_preview_window_pane_cp04

0xe859,	// (0x0005baf7) popup_navstr_preview_pane_t1

0x8a1e,	// (0x00055cbc) scroll_navstr_pane_g1_ParamLimits

0x8a1e,	// (0x00055cbc) scroll_navstr_pane_g1

0x8a32,	// (0x00055cd0) scroll_navstr_pane_t1_ParamLimits

0x8a32,	// (0x00055cd0) scroll_navstr_pane_t1

0xe7fe,	// (0x0005ba9c) bg_button_pane_cp014

0xe7fe,	// (0x0005ba9c) bg_button_pane_cp030

0x845c,	// (0x000556fa) list_double_fisheye_pane_g4_ParamLimits

0x845c,	// (0x000556fa) list_double_fisheye_pane_g4

0x8468,	// (0x00055706) list_double_fisheye_pane_g5_ParamLimits

0x8468,	// (0x00055706) list_double_fisheye_pane_g5

0xcf80,	// (0x0005a21e) sp_fs_scroll_pane_cp03

0xe703,	// (0x0005b9a1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe70f,	// (0x0005b9ad) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0005cf7e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe71b,	// (0x0005b9b9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7bb,	// (0x0005ba59) sp_fs_scroll_pane_cp02

0xa8a9,	// (0x00057b47) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8a9,	// (0x00057b47) popup_sp_fs_calendar_preview_list_single_pane

0x9687,	// (0x00056925) main_cam6_pano_pane

0xa4d6,	// (0x00057774) main_mup3_pane_ParamLimits

0x9687,	// (0x00056925) main_phacti_pane

0x8048,	// (0x000552e6) bg_button_pane_cp11

0x8062,	// (0x00055300) main_mobtv_info_pane_g2_ParamLimits

0x8062,	// (0x00055300) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0005cede) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0005cede) main_mobtv_info_pane_g

0x823f,	// (0x000554dd) sc_clock_pane_t5_ParamLimits

0x823f,	// (0x000554dd) sc_clock_pane_t5

0x82d1,	// (0x0005556f) main_radioblah_pane_g1_ParamLimits

0xe55c,	// (0x0005b7fa) main_radioblah_pane_t3_ParamLimits

0xe55c,	// (0x0005b7fa) main_radioblah_pane_t3

0xe574,	// (0x0005b812) main_radioblah_pane_t4_ParamLimits

0xe574,	// (0x0005b812) main_radioblah_pane_t4

0x82f9,	// (0x00055597) main_radioblah_text_pane_ParamLimits

0x82f9,	// (0x00055597) main_radioblah_text_pane

0x830b,	// (0x000555a9) main_radioblah_info_pane_g1_ParamLimits

0x83a4,	// (0x00055642) main_radioblah_info_pane_t4_ParamLimits

0x83a4,	// (0x00055642) main_radioblah_info_pane_t4

0xa4d6,	// (0x00057774) main_sp_fs_calendar_pane

0x8a48,	// (0x00055ce6) main_phacti_pane_g1

0x8a50,	// (0x00055cee) phacti_note_pane_ParamLimits

0x8a50,	// (0x00055cee) phacti_note_pane

0xe870,	// (0x0005bb0e) phacti_term_pane_ParamLimits

0xe870,	// (0x0005bb0e) phacti_term_pane

0xe885,	// (0x0005bb23) phacti_note_pane_t1_ParamLimits

0xe885,	// (0x0005bb23) phacti_note_pane_t1

0xa304,	// (0x000575a2) phacti_term_pane_g1

0xa30c,	// (0x000575aa) phacti_term_pane_t1_ParamLimits

0xa30c,	// (0x000575aa) phacti_term_pane_t1

0xe89c,	// (0x0005bb3a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a4,	// (0x0005bb42) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0005d053) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8ac,	// (0x0005bb4a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8ac,	// (0x0005bb4a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c2,	// (0x0005bb60) aid_popup_sp_fs_bg_corner_pane

0xcc13,	// (0x00059eb1) popup_sp_fs_calendar_preview_bg_pane_g1

0x9687,	// (0x00056925) popup_sp_fs_calendar_preview_bg_pane

0x1c77,	// (0x0004ef15) popup_sp_fs_calendar_preview_list_pane

0xc809,	// (0x00059aa7) bg_main_sp_fs_cale_pane_ParamLimits

0xc809,	// (0x00059aa7) bg_main_sp_fs_cale_pane

0xa336,	// (0x000575d4) listscroll_cale_mrui_pane_ParamLimits

0xa336,	// (0x000575d4) listscroll_cale_mrui_pane

0xa34b,	// (0x000575e9) listscroll_sp_fs_schedule_track_pane

0xa354,	// (0x000575f2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa354,	// (0x000575f2) main_sp_fs_ctrlbar_pane_cp01

0xe8d3,	// (0x0005bb71) main_sp_fs_ribbon_pane

0xa367,	// (0x00057605) popup_sp_fs_cale_preview_window

0x8ac5,	// (0x00055d63) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8ac5,	// (0x00055d63) list_single_sp_fs_schedule_track_pane

0xa4d6,	// (0x00057774) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa4d6,	// (0x00057774) bg_sp_fs_highlight_list_pane_cp03

0x8adb,	// (0x00055d79) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8adb,	// (0x00055d79) list_single_sp_fs_schedule_track_pane_g1

0x8ae7,	// (0x00055d85) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ae7,	// (0x00055d85) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0005d058) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0005d058) list_single_sp_fs_schedule_track_pane_g

0x8af3,	// (0x00055d91) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8af3,	// (0x00055d91) list_single_sp_fs_schedule_track_pane_t1

0x8b0d,	// (0x00055dab) sp_fs_schedule_track_pane_ParamLimits

0x8b0d,	// (0x00055dab) sp_fs_schedule_track_pane

0xe8db,	// (0x0005bb79) sp_fs_schedule_track_pane_g1

0xe8e3,	// (0x0005bb81) sp_fs_schedule_track_pane_g2

0xe8eb,	// (0x0005bb89) sp_fs_schedule_track_pane_g3

0xe8f3,	// (0x0005bb91) sp_fs_schedule_track_pane_g4

0xe8fb,	// (0x0005bb99) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0005d05d) sp_fs_schedule_track_pane_g

0xd668,	// (0x0005a906) bg_sp_fs_schedule_viewer_highlight_g1

0xabb3,	// (0x00057e51) bg_sp_fs_schedule_viewer_highlight_g2

0xd670,	// (0x0005a90e) bg_sp_fs_schedule_viewer_highlight_g3

0xd678,	// (0x0005a916) bg_sp_fs_schedule_viewer_highlight_g4

0xd88c,	// (0x0005ab2a) bg_sp_fs_schedule_viewer_highlight_g5

0xd688,	// (0x0005a926) bg_sp_fs_schedule_viewer_highlight_g6

0xd690,	// (0x0005a92e) bg_sp_fs_schedule_viewer_highlight_g7

0xd698,	// (0x0005a936) bg_sp_fs_schedule_viewer_highlight_g8

0xab93,	// (0x00057e31) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0005d068) bg_sp_fs_schedule_viewer_highlight_g

0x9687,	// (0x00056925) bg_main_sp_fs_ribbon_pane

0x8b1e,	// (0x00055dbc) main_sp_fs_ribbon_pane_g1

0xe903,	// (0x0005bba1) main_sp_fs_ribbon_pane_t1

0x8b27,	// (0x00055dc5) main_sp_fs_ribbon_pane_t2

0xe912,	// (0x0005bbb0) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0005d07b) main_sp_fs_ribbon_pane_t

0xe921,	// (0x0005bbbf) main_sp_fs_ribbon_scheduler_pane

0xe929,	// (0x0005bbc7) bg_main_sp_fs_ribbon_pane_g1

0xe932,	// (0x0005bbd0) bg_main_sp_fs_ribbon_pane_g2

0xe93b,	// (0x0005bbd9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0005d082) bg_main_sp_fs_ribbon_pane_g

0xe943,	// (0x0005bbe1) main_sp_fs_ribbon_scheduler_pane_g1

0xe94c,	// (0x0005bbea) main_sp_fs_ribbon_scheduler_pane_g2

0xe955,	// (0x0005bbf3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0005d089) main_sp_fs_ribbon_scheduler_pane_g

0xe95e,	// (0x0005bbfc) list_cale_mrui_pane

0x8b36,	// (0x00055dd4) sp_fs_scroll_pane_cp07_ParamLimits

0x8b36,	// (0x00055dd4) sp_fs_scroll_pane_cp07

0x8b52,	// (0x00055df0) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b52,	// (0x00055df0) bg_sp_fs_schedule_viewer_highlight

0xe96b,	// (0x0005bc09) list_single_sp_fs_schedule_track_pane_cp01

0xe973,	// (0x0005bc11) list_sp_fs_schedule_track_pane

0xe97b,	// (0x0005bc19) sp_fs_scroll_pane_cp06_ParamLimits

0xe97b,	// (0x0005bc19) sp_fs_scroll_pane_cp06

0xcc13,	// (0x00059eb1) bgmain_sp_fs_calendar_pane_g1

0x0aa8,	// (0x0004dd46) list_single_cale_mrui_pane_ParamLimits

0x0aa8,	// (0x0004dd46) list_single_cale_mrui_pane

0xa379,	// (0x00057617) list_single_cale_mrui_row_pane_ParamLimits

0xa379,	// (0x00057617) list_single_cale_mrui_row_pane

0xa386,	// (0x00057624) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa386,	// (0x00057624) list_single_cale_mrui_row_pane_g1

0xa3be,	// (0x0005765c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa3be,	// (0x0005765c) list_single_cale_mrui_row_pane_t1

0x0aca,	// (0x0004dd68) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0aca,	// (0x0004dd68) list_single_cale_mrui_row_pane_t2

0xa3d0,	// (0x0005766e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa3d0,	// (0x0005766e) list_single_cale_mrui_row_pane_t3

0xa3ff,	// (0x0005769d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa3ff,	// (0x0005769d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0005d097) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0005d097) list_single_cale_mrui_row_pane_t

0x0b32,	// (0x0004ddd0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0b32,	// (0x0004ddd0) list_single_cmail_header_editor_pane_bg_cp01

0x0b58,	// (0x0004ddf6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0b58,	// (0x0004ddf6) list_single_cmail_header_editor_pane_bg_cp02

0x8b62,	// (0x00055e00) main_radioblah_text_pane_t1_ParamLimits

0x8b62,	// (0x00055e00) main_radioblah_text_pane_t1

0xe99a,	// (0x0005bc38) cam6_indi_pane_cp01

0xe9a2,	// (0x0005bc40) cam6_mode_pane_cp01

0xe9aa,	// (0x0005bc48) cam6_pano_pane

0xe9b3,	// (0x0005bc51) cam6_zoom_pane_cp01

0xe9bb,	// (0x0005bc59) cam6_pano_image_pane

0xe9c6,	// (0x0005bc64) cam6_pano_pane_g1

0xe2c9,	// (0x0005b567) cam6_pano_pane_g2

0xe9cf,	// (0x0005bc6d) cam6_pano_pane_g3

0xe9d8,	// (0x0005bc76) cam6_pano_pane_g4

0xd1c1,	// (0x0005a45f) cam6_pano_pane_g5

0xe9e1,	// (0x0005bc7f) cam6_pano_pane_g6

0xe9eb,	// (0x0005bc89) cam6_pano_pane_g7

0xe9f3,	// (0x0005bc91) cam6_pano_pane_g8

0xe9fc,	// (0x0005bc9a) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0005d0a0) cam6_pano_pane_g

0x9687,	// (0x00056925) main_browser_tag_pane

0xe851,	// (0x0005baef) grid_navstr_albumart_pane

0xea07,	// (0x0005bca5) cell_navstr_albumart_pane_ParamLimits

0xea07,	// (0x0005bca5) cell_navstr_albumart_pane

0xb568,	// (0x00058806) cell_navstr_albumart_pane_g1

0xc61a,	// (0x000598b8) cell_navstr_albumart_pane_g2

0xc62a,	// (0x000598c8) cell_navstr_albumart_pane_g3

0xc622,	// (0x000598c0) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0005d0b3) cell_navstr_albumart_pane_g

0x8b7d,	// (0x00055e1b) bt_list_pane_ParamLimits

0x8b7d,	// (0x00055e1b) bt_list_pane

0xea29,	// (0x0005bcc7) bt_list_pane_t1

0xea38,	// (0x0005bcd6) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0005d0bc) bt_list_pane_t

0x9687,	// (0x00056925) main_cale_prevew_pane

0x8b92,	// (0x00055e30) popup_cale_preview_window_ParamLimits

0x8b92,	// (0x00055e30) popup_cale_preview_window

0xa4d6,	// (0x00057774) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4d6,	// (0x00057774) bg_popup_preview_window_pane_cp05

0xea47,	// (0x0005bce5) list_cale_preview_pane_ParamLimits

0xea47,	// (0x0005bce5) list_cale_preview_pane

0xea53,	// (0x0005bcf1) list_double_cale_preview_pane_ParamLimits

0xea53,	// (0x0005bcf1) list_double_cale_preview_pane

0xea65,	// (0x0005bd03) list_single_cale_preview_pane_ParamLimits

0xea65,	// (0x0005bd03) list_single_cale_preview_pane

0xea79,	// (0x0005bd17) list_single_cale_preview_pane_g1

0xea81,	// (0x0005bd1f) list_single_cale_preview_pane_t1_ParamLimits

0xea81,	// (0x0005bd1f) list_single_cale_preview_pane_t1

0xea96,	// (0x0005bd34) list_double_cale_preview_pane_g1

0xea9e,	// (0x0005bd3c) list_double_cale_preview_pane_t1_ParamLimits

0xea9e,	// (0x0005bd3c) list_double_cale_preview_pane_t1

0xeab3,	// (0x0005bd51) list_double_cale_preview_pane_t2_ParamLimits

0xeab3,	// (0x0005bd51) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0005d0c1) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0005d0c1) list_double_cale_preview_pane_t

0x9687,	// (0x00056925) main_ezdial_pane

0xa4d6,	// (0x00057774) main_sp_fs_email_pane_ParamLimits

0x8627,	// (0x000558c5) cmail_ddmenu_btn01_pane_ParamLimits

0x8627,	// (0x000558c5) cmail_ddmenu_btn01_pane

0x863a,	// (0x000558d8) cmail_ddmenu_btn02_pane_ParamLimits

0x863a,	// (0x000558d8) cmail_ddmenu_btn02_pane

0x865d,	// (0x000558fb) cmail_ddmenu_btn03_pane_ParamLimits

0x865d,	// (0x000558fb) cmail_ddmenu_btn03_pane

0x8683,	// (0x00055921) main_sp_fs_ctrlbar_pane_ParamLimits

0x86a7,	// (0x00055945) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8943,	// (0x00055be1) list_cmail_body_pane_ParamLimits

0x899a,	// (0x00055c38) bg_button_pane_cp12

0xe7d1,	// (0x0005ba6f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7d1,	// (0x0005ba6f) list_single_cmail_header_detail_pane_g3

0xa2e0,	// (0x0005757e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa2e0,	// (0x0005757e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0005d044) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0005d044) list_single_cmail_header_detail_pane_t

0xa321,	// (0x000575bf) phacti_term_pane_t2_ParamLimits

0xa321,	// (0x000575bf) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0005d04e) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0005d04e) phacti_term_pane_t

0xeacb,	// (0x0005bd69) aid_size_list_single_double

0x8bab,	// (0x00055e49) popup_ezdial_listscroll_window

0x8bc6,	// (0x00055e64) popup_number_entry_window_cp01

0xb3f9,	// (0x00058697) bg_popup_call_pane_cp09

0xead7,	// (0x0005bd75) ezdial_list_pane

0xeadf,	// (0x0005bd7d) scroll_pane_cp23

0xc809,	// (0x00059aa7) bg_button_pane_cp028_ParamLimits

0xc809,	// (0x00059aa7) bg_button_pane_cp028

0x8bd4,	// (0x00055e72) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8bd4,	// (0x00055e72) cmail_ddmenu_btn01_pane_g1

0x8be0,	// (0x00055e7e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8be0,	// (0x00055e7e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0005d0c6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0005d0c6) cmail_ddmenu_btn01_pane_g

0xeae7,	// (0x0005bd85) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae7,	// (0x0005bd85) cmail_ddmenu_btn01_pane_t1

0xc809,	// (0x00059aa7) bg_button_pane_cp029_ParamLimits

0xc809,	// (0x00059aa7) bg_button_pane_cp029

0x8bec,	// (0x00055e8a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8bec,	// (0x00055e8a) cmail_ddmenu_btn02_pane_g1

0x8c04,	// (0x00055ea2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c04,	// (0x00055ea2) cmail_ddmenu_btn02_pane_t1

0xa4d6,	// (0x00057774) bg_button_pane_cp031_ParamLimits

0xa4d6,	// (0x00057774) bg_button_pane_cp031

0x8bec,	// (0x00055e8a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8bec,	// (0x00055e8a) cmail_ddmenu_btn03_pane_g1

0x8c04,	// (0x00055ea2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c04,	// (0x00055ea2) cmail_ddmenu_btn03_pane_t1

0x60fd,	// (0x0005339b) cell_dialer2_keypad_pane_t1_ParamLimits

0x6117,	// (0x000533b5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6117,	// (0x000533b5) cell_dialer2_keypad_pane_t1_copy1

0x7eaf,	// (0x0005514d) ncimui_group_button_pane

0xa4d6,	// (0x00057774) main_sp_fs_calendar_pane_ParamLimits

0x8958,	// (0x00055bf6) list_single_cmail_header_caption_pane_ParamLimits

0xe8ca,	// (0x0005bb68) aid_recal_txt_sm_pane

0x9687,	// (0x00056925) mian_recal_day_pane

0xa367,	// (0x00057605) popup_sp_fs_cale_preview_window_ParamLimits

0xeafc,	// (0x0005bd9a) list_recal_day_pane

0xa449,	// (0x000576e7) list_single_recal_day_pane_ParamLimits

0xa449,	// (0x000576e7) list_single_recal_day_pane

0xeb23,	// (0x0005bdc1) list_single_recal_day_pane_g1_ParamLimits

0xeb23,	// (0x0005bdc1) list_single_recal_day_pane_g1

0xa45b,	// (0x000576f9) list_single_recal_day_pane_g2_ParamLimits

0xa45b,	// (0x000576f9) list_single_recal_day_pane_g2

0xa46b,	// (0x00057709) list_single_recal_day_pane_g3_ParamLimits

0xa46b,	// (0x00057709) list_single_recal_day_pane_g3

0x0b78,	// (0x0004de16) list_single_recal_day_pane_g4_ParamLimits

0x0b78,	// (0x0004de16) list_single_recal_day_pane_g4

0xa477,	// (0x00057715) list_single_recal_day_pane_g5_ParamLimits

0xa477,	// (0x00057715) list_single_recal_day_pane_g5

0xa487,	// (0x00057725) list_single_recal_day_pane_g6_ParamLimits

0xa487,	// (0x00057725) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0005d0d5) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0005d0d5) list_single_recal_day_pane_g

0xa49b,	// (0x00057739) list_single_recal_day_pane_t1

0xa4ad,	// (0x0005774b) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0005d0e0) list_single_recal_day_pane_t

0x8c28,	// (0x00055ec6) ncimui_query_button_pane_ParamLimits

0x8c28,	// (0x00055ec6) ncimui_query_button_pane

0x8c38,	// (0x00055ed6) ncimui_query_button_pane_t1_ParamLimits

0x8c38,	// (0x00055ed6) ncimui_query_button_pane_t1

0xeb2f,	// (0x0005bdcd) ncimui_query_button_pane_t2_ParamLimits

0xeb2f,	// (0x0005bdcd) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0005d0e5) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0005d0e5) ncimui_query_button_pane_t

0x8c4b,	// (0x00055ee9) query_button_pane_ParamLimits

0x8c4b,	// (0x00055ee9) query_button_pane

0x9687,	// (0x00056925) bg_button_pane_cp0028

0xeb42,	// (0x0005bde0) query_button_pane_t1

0x4122,	// (0x000513c0) main_tport_pane_ParamLimits

0x8807,	// (0x00055aa5) bg_popup_window_pane_cp01_ParamLimits

0x8807,	// (0x00055aa5) bg_popup_window_pane_cp01

0x8822,	// (0x00055ac0) heading_pane_cp08_ParamLimits

0x8822,	// (0x00055ac0) heading_pane_cp08

0x8835,	// (0x00055ad3) heading_pane_cp07_ParamLimits

0x8835,	// (0x00055ad3) heading_pane_cp07

0x88dc,	// (0x00055b7a) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0005d031) cell_tport_appsw_pane_g

0x36ef,	// (0x0005098d) input_candi_list_open_g1

0xad7e,	// (0x0005801c) list_cale_time_pane_g6_ParamLimits

0xad7e,	// (0x0005801c) list_cale_time_pane_g6

0x4ee5,	// (0x00052183) aid_size_touch_calib_1_ParamLimits

0x4ee5,	// (0x00052183) aid_size_touch_calib_1

0x4ef7,	// (0x00052195) aid_size_touch_calib_2_ParamLimits

0x4ef7,	// (0x00052195) aid_size_touch_calib_2

0x4f0f,	// (0x000521ad) aid_size_touch_calib_3_ParamLimits

0x4f0f,	// (0x000521ad) aid_size_touch_calib_3

0x4f2d,	// (0x000521cb) aid_size_touch_calib_4_ParamLimits

0x4f2d,	// (0x000521cb) aid_size_touch_calib_4

0x4f45,	// (0x000521e3) main_touch_calib_button_group_pane_ParamLimits

0x4f45,	// (0x000521e3) main_touch_calib_button_group_pane

0x4f5d,	// (0x000521fb) main_touch_calib_pane_g1_ParamLimits

0x4f6f,	// (0x0005220d) main_touch_calib_pane_g2_ParamLimits

0x4f81,	// (0x0005221f) main_touch_calib_pane_g3_ParamLimits

0x4f93,	// (0x00052231) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0005c9f4) main_touch_calib_pane_g_ParamLimits

0x4fa5,	// (0x00052243) main_touch_calib_pane_t1_ParamLimits

0x4fbf,	// (0x0005225d) main_touch_calib_pane_t2_ParamLimits

0x4fd9,	// (0x00052277) main_touch_calib_pane_t3_ParamLimits

0x4fed,	// (0x0005228b) main_touch_calib_pane_t4_ParamLimits

0x5001,	// (0x0005229f) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0005c9fd) main_touch_calib_pane_t_ParamLimits

0xcf73,	// (0x0005a211) list_single_fp_cale_pane_g3_ParamLimits

0xcf73,	// (0x0005a211) list_single_fp_cale_pane_g3

0xa4d6,	// (0x00057774) bg_button_pane_cp012_ParamLimits

0xa4d6,	// (0x00057774) bg_vkb2_func_pane_cp03_ParamLimits

0x7098,	// (0x00054336) cell_vitu2_function_top_pane_g1_ParamLimits

0xa4d6,	// (0x00057774) bg_vkb2_func_pane_cp04_ParamLimits

0x7e3d,	// (0x000550db) main_ncimui_button_group_pane_ParamLimits

0x7e3d,	// (0x000550db) main_ncimui_button_group_pane

0x7e9d,	// (0x0005513b) main_ncimui_pane_t3_ParamLimits

0x7e9d,	// (0x0005513b) main_ncimui_pane_t3

0xe867,	// (0x0005bb05) phacti_button_group_pane

0xeacb,	// (0x0005bd69) aid_size_list_single_double_ParamLimits

0x8bab,	// (0x00055e49) popup_ezdial_listscroll_window_ParamLimits

0x8bc6,	// (0x00055e64) popup_number_entry_window_cp01_ParamLimits

0x8c5e,	// (0x00055efc) phacti_button_pane_ParamLimits

0x8c5e,	// (0x00055efc) phacti_button_pane

0x9687,	// (0x00056925) bg_button_pane_cp14

0xeb50,	// (0x0005bdee) phacti_button_pane_t1

0x8c6f,	// (0x00055f0d) main_touch_calib_button_pane_ParamLimits

0x8c6f,	// (0x00055f0d) main_touch_calib_button_pane

0xa793,	// (0x00057a31) bg_button_pane_cp18_ParamLimits

0xa793,	// (0x00057a31) bg_button_pane_cp18

0xeb5e,	// (0x0005bdfc) main_touch_calib_button_pane_t1_ParamLimits

0xeb5e,	// (0x0005bdfc) main_touch_calib_button_pane_t1

0xeb8b,	// (0x0005be29) main_touch_calib_button_pane_t2_ParamLimits

0xeb8b,	// (0x0005be29) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0005d0ea) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0005d0ea) main_touch_calib_button_pane_t

0x9687,	// (0x00056925) cell_ncimui_button_pane

0x9687,	// (0x00056925) bg_button_pane_cp032

0xeba9,	// (0x0005be47) cell_ncimui_button_pane_t1

0xa083,	// (0x00057321) image3_infobar_pane_ParamLimits

0xa083,	// (0x00057321) image3_infobar_pane

0x826b,	// (0x00055509) fs_bigclock_status_pane_ParamLimits

0x826b,	// (0x00055509) fs_bigclock_status_pane

0x8278,	// (0x00055516) main_fs_bigclock_clock_pane_ParamLimits

0x8278,	// (0x00055516) main_fs_bigclock_clock_pane

0x8294,	// (0x00055532) main_fs_bigclock_indi_pane_ParamLimits

0x8294,	// (0x00055532) main_fs_bigclock_indi_pane

0x82ad,	// (0x0005554b) main_fs_bigclock_swipe_pane_ParamLimits

0x82ad,	// (0x0005554b) main_fs_bigclock_swipe_pane

0x9687,	// (0x00056925) main_fs_clock_dumped_data

0xe3d6,	// (0x0005b674) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3d6,	// (0x0005b674) list_single_fs_bigclock_indicator_pane_g1

0xe3f1,	// (0x0005b68f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3f1,	// (0x0005b68f) list_single_fs_bigclock_indicator_pane_g2

0xe40b,	// (0x0005b6a9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe40b,	// (0x0005b6a9) list_single_fs_bigclock_indicator_pane_g3

0xe425,	// (0x0005b6c3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe425,	// (0x0005b6c3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0005cf12) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0005cf12) list_single_fs_bigclock_indicator_pane_g

0xe44e,	// (0x0005b6ec) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe44e,	// (0x0005b6ec) list_single_fs_bigclock_indicator_pane_t1

0xe476,	// (0x0005b714) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe476,	// (0x0005b714) list_single_fs_bigclock_indicator_pane_t2

0xe49e,	// (0x0005b73c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe49e,	// (0x0005b73c) list_single_fs_bigclock_indicator_pane_t3

0xe4c6,	// (0x0005b764) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4c6,	// (0x0005b764) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0005cf1d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0005cf1d) list_single_fs_bigclock_indicator_pane_t

0xebb7,	// (0x0005be55) image3_infobar_fav_pane_ParamLimits

0xebb7,	// (0x0005be55) image3_infobar_fav_pane

0xebc7,	// (0x0005be65) image3_infobar_loc_pane_ParamLimits

0xebc7,	// (0x0005be65) image3_infobar_loc_pane

0xebdb,	// (0x0005be79) image3_infobar_time_pane_ParamLimits

0xebdb,	// (0x0005be79) image3_infobar_time_pane

0xcc13,	// (0x00059eb1) image3_infobar_time_pane_g1

0xebeb,	// (0x0005be89) image3_infobar_time_pane_t1

0xcc13,	// (0x00059eb1) image3_infobar_loc_pane_g1

0xebf9,	// (0x0005be97) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0005d0ef) image3_infobar_loc_pane_g

0xec01,	// (0x0005be9f) image3_infobar_loc_pane_t1

0xcc13,	// (0x00059eb1) image3_infobar_fav_pane_g1

0xec0f,	// (0x0005bead) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0005d0f4) image3_infobar_fav_pane_g

0xec17,	// (0x0005beb5) fs_bigclock_status_battery_pane

0xec20,	// (0x0005bebe) fs_bigclock_status_signal_pane

0xec29,	// (0x0005bec7) fs_bigclock_status_title_pane

0xec32,	// (0x0005bed0) fs_bigclock_status_signal_pane_g1

0xec3b,	// (0x0005bed9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0005d0f9) fs_bigclock_status_signal_pane_g

0xec43,	// (0x0005bee1) fs_bigclock_status_battery_pane_g1

0xec4c,	// (0x0005beea) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0005d0fe) fs_bigclock_status_battery_pane_g

0xec54,	// (0x0005bef2) fs_bigclock_status_title_pane_t1

0xcc13,	// (0x00059eb1) main_fs_bigclock_clock_pane_g1

0x8c84,	// (0x00055f22) main_fs_bigclock_clock_pane_g2

0x8c84,	// (0x00055f22) main_fs_bigclock_clock_pane_g3

0x8c84,	// (0x00055f22) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0005d103) main_fs_bigclock_clock_pane_g

0x8c8c,	// (0x00055f2a) main_fs_bigclock_clock_pane_t1

0x8c9a,	// (0x00055f38) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0005d10c) main_fs_bigclock_clock_pane_t

0xec62,	// (0x0005bf00) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec62,	// (0x0005bf00) list_single_fs_bigclock_indicator_pane

0x8ca9,	// (0x00055f47) list_single_fs_bigclock_pane_ParamLimits

0x8ca9,	// (0x00055f47) list_single_fs_bigclock_pane

0xec7c,	// (0x0005bf1a) main_fs_bigclock_indicator_pane_t1

0xec8b,	// (0x0005bf29) list_single_fs_bigclock_pane_g1

0xec93,	// (0x0005bf31) list_single_fs_bigclock_pane_t1

0xcc13,	// (0x00059eb1) main_fs_bigclock_swipe_pane_g1

0xecd6,	// (0x0005bf74) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0005d11d) main_fs_bigclock_swipe_pane_g

0xecde,	// (0x0005bf7c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecde,	// (0x0005bf7c) main_fs_bigclock_swipe_pane_t1

0x300e,	// (0x000502ac) call_type_pane_ParamLimits

0x9687,	// (0x00056925) main_btmg_pane

0xa3b2,	// (0x00057650) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa3b2,	// (0x00057650) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0005d090) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0005d090) list_single_cale_mrui_row_pane_g

0xa438,	// (0x000576d6) list_recal_vselct_arw_lo_pane

0xeb1b,	// (0x0005bdb9) list_recal_vselct_arw_up_pane

0xa440,	// (0x000576de) list_recal_vselct_pane

0x8d0c,	// (0x00055faa) btmg_button_pane

0x8d16,	// (0x00055fb4) main_btmg_pane_g1

0x9687,	// (0x00056925) bg_button_pane_cp044

0xecfb,	// (0x0005bf99) btmg_button_pane_t1

0xc7f5,	// (0x00059a93) aid_listscroll_gen

0xa4d6,	// (0x00057774) main_cntbar_detail_pane

0xe7b3,	// (0x0005ba51) list_cmail_folder_pane

0xcf80,	// (0x0005a21e) sp_fs_scroll_pane_cp03_ParamLimits

0x0b98,	// (0x0004de36) list_single_fs_dyc_pane_cp01_ParamLimits

0x0b98,	// (0x0004de36) list_single_fs_dyc_pane_cp01

0xed09,	// (0x0005bfa7) aid_size_cmail_indent

0xa4bf,	// (0x0005775d) list_single_dyc_row_pane_cp01

0x8d4c,	// (0x00055fea) cntbar_detail_list_pane_ParamLimits

0x8d4c,	// (0x00055fea) cntbar_detail_list_pane

0x8d98,	// (0x00056036) main_cntbar_detail_cont_pane_ParamLimits

0x8d98,	// (0x00056036) main_cntbar_detail_cont_pane

0xcf80,	// (0x0005a21e) scroll_pane_cp032_ParamLimits

0xcf80,	// (0x0005a21e) scroll_pane_cp032

0x8dac,	// (0x0005604a) cntbar_detail_list_event_pane_ParamLimits

0x8dac,	// (0x0005604a) cntbar_detail_list_event_pane

0x8d5c,	// (0x00055ffa) cntbar_detail_list_shct_pane

0xac01,	// (0x00057e9f) aid_list_gen

0xed12,	// (0x0005bfb0) aid_scroll

0xed1b,	// (0x0005bfb9) aid_size_touch_scroll_bar

0x7698,	// (0x00054936) aid_list_double

0xeb82,	// (0x0005be20) aid_list_single

0xeb82,	// (0x0005be20) aid_list_single_lg

0x0bb4,	// (0x0004de52) aid_list_z_g_a_sm

0x0bbc,	// (0x0004de5a) aid_list_z_g_d

0x0bc4,	// (0x0004de62) aid_txt_z_prm

0x0bd2,	// (0x0004de70) aid_txt_z_prm_cp01

0x0be0,	// (0x0004de7e) aid_txt_z_sec

0x8dbc,	// (0x0005605a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8dbc,	// (0x0005605a) main_cntbar_detail_cont_pane_g1

0x8dd0,	// (0x0005606e) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8dd0,	// (0x0005606e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0005d122) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0005d122) main_cntbar_detail_cont_pane_g

0xed24,	// (0x0005bfc2) main_cntbar_detail_cont_pane_t1

0xed32,	// (0x0005bfd0) main_cntbar_detail_cont_pane_t2

0xed40,	// (0x0005bfde) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0005d127) main_cntbar_detail_cont_pane_t

0x8de0,	// (0x0005607e) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8de0,	// (0x0005607e) cell_cntbar_detail_list_shct_pane

0xed4e,	// (0x0005bfec) cntbar_detail_list_shct_pane_g1

0xed57,	// (0x0005bff5) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0005d12e) cntbar_detail_list_shct_pane_g

0x8df4,	// (0x00056092) cntbar_detail_list_event_pane_g1_ParamLimits

0x8df4,	// (0x00056092) cntbar_detail_list_event_pane_g1

0x8e00,	// (0x0005609e) cntbar_detail_list_event_pane_g2_ParamLimits

0x8e00,	// (0x0005609e) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0005d133) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0005d133) cntbar_detail_list_event_pane_g

0x8e6c,	// (0x0005610a) cntbar_detail_list_event_pane_t1_ParamLimits

0x8e6c,	// (0x0005610a) cntbar_detail_list_event_pane_t1

0x8e81,	// (0x0005611f) cntbar_detail_list_event_pane_t2_ParamLimits

0x8e81,	// (0x0005611f) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0005d140) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0005d140) cntbar_detail_list_event_pane_t

0xcc13,	// (0x00059eb1) cell_cntbar_detail_list_shct_pane_g1

0xb3b1,	// (0x0005864f) navi_pane_mv_g3

0xa4d6,	// (0x00057774) main_cntbar_detail_pane_ParamLimits

0x9687,	// (0x00056925) main_notif_wgt_pane

0x9e99,	// (0x00057137) aid_tch_main_mp4_pane_g4

0xa07b,	// (0x00057319) popup_slider_window_cp02

0xa42e,	// (0x000576cc) list_recal_day_event_pane

0x8d20,	// (0x00055fbe) cntbar_detail_btn_pane_ParamLimits

0x8d20,	// (0x00055fbe) cntbar_detail_btn_pane

0x8d36,	// (0x00055fd4) cntbar_detail_btn_pane_cp01_ParamLimits

0x8d36,	// (0x00055fd4) cntbar_detail_btn_pane_cp01

0x8d5c,	// (0x00055ffa) cntbar_detail_list_shct_pane_ParamLimits

0x8d6c,	// (0x0005600a) cntbar_detail_pane_g1_ParamLimits

0x8d6c,	// (0x0005600a) cntbar_detail_pane_g1

0x8d7c,	// (0x0005601a) cntbar_detail_pane_t1_ParamLimits

0x8d7c,	// (0x0005601a) cntbar_detail_pane_t1

0x8e0c,	// (0x000560aa) cntbar_detail_list_event_pane_g3_ParamLimits

0x8e0c,	// (0x000560aa) cntbar_detail_list_event_pane_g3

0x8e24,	// (0x000560c2) cntbar_detail_list_event_pane_g4_ParamLimits

0x8e24,	// (0x000560c2) cntbar_detail_list_event_pane_g4

0x8e3c,	// (0x000560da) cntbar_detail_list_event_pane_g5_ParamLimits

0x8e3c,	// (0x000560da) cntbar_detail_list_event_pane_g5

0x8e54,	// (0x000560f2) cntbar_detail_list_event_pane_g6_ParamLimits

0x8e54,	// (0x000560f2) cntbar_detail_list_event_pane_g6

0x8e96,	// (0x00056134) cntbar_detail_list_event_pane_t3_ParamLimits

0x8e96,	// (0x00056134) cntbar_detail_list_event_pane_t3

0x8ea8,	// (0x00056146) popup_notif_wgt_window_ParamLimits

0x8ea8,	// (0x00056146) popup_notif_wgt_window

0x8ec1,	// (0x0005615f) popup_submenu_window_cp01_ParamLimits

0x8ec1,	// (0x0005615f) popup_submenu_window_cp01

0xb3f9,	// (0x00058697) bg_popup_window_pane_cp10

0xed60,	// (0x0005bffe) listscroll_notif_wgt_pane

0xed71,	// (0x0005c00f) list_notif_wgt_window

0xed7a,	// (0x0005c018) scroll_pane_cp033

0x8ed3,	// (0x00056171) list_notif_wgt_row_pane_ParamLimits

0x8ed3,	// (0x00056171) list_notif_wgt_row_pane

0xed83,	// (0x0005c021) aid_size_list_notif_wgt_del

0xed90,	// (0x0005c02e) list_notif_wgt_row_pane_g1

0xed9c,	// (0x0005c03a) list_notif_wgt_row_pane_g2

0xeda8,	// (0x0005c046) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0005d147) list_notif_wgt_row_pane_g

0xedb5,	// (0x0005c053) list_notif_wgt_row_pane_t1

0xedca,	// (0x0005c068) list_notif_wgt_row_pane_t2

0xeddc,	// (0x0005c07a) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0005d14e) list_notif_wgt_row_pane_t

0xd894,	// (0x0005ab32) list_recal_day_event_pane_g1

0xedee,	// (0x0005c08c) list_recal_day_event_pane_t1

0x9687,	// (0x00056925) bg_button_pane_cp045

0xedfd,	// (0x0005c09b) cntbar_detail_btn_pane_t1

0xc809,	// (0x00059aa7) main_callh_pane_ParamLimits

0xc809,	// (0x00059aa7) main_callh_pane

0x9687,	// (0x00056925) main_coverflow0_pane

0x9687,	// (0x00056925) main_wgtman_pane

0x82bb,	// (0x00055559) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x82bb,	// (0x00055559) main_fs_bigclock_unlock_btn_pane

0x88d4,	// (0x00055b72) bg_button_pane_cp16

0x88e4,	// (0x00055b82) cell_tport_appsw_pane_g3

0x8ee3,	// (0x00056181) cf0_flow_pane_ParamLimits

0x8ee3,	// (0x00056181) cf0_flow_pane

0xee0b,	// (0x0005c0a9) listscroll_cf0_pane

0xee16,	// (0x0005c0b4) main_cf0_pane_g1

0x8ef8,	// (0x00056196) main_cf0_pane_t1_ParamLimits

0x8ef8,	// (0x00056196) main_cf0_pane_t1

0x8f0f,	// (0x000561ad) main_cf0_pane_t2_ParamLimits

0x8f0f,	// (0x000561ad) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0005d15a) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0005d15a) main_cf0_pane_t

0xee28,	// (0x0005c0c6) scroll_pane_cp11

0x8f26,	// (0x000561c4) cf0_flow_pane_g1

0x8f2e,	// (0x000561cc) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0005d15f) cf0_flow_pane_g

0x8f36,	// (0x000561d4) cf0_flow_pane_t1

0x9687,	// (0x00056925) main_call6_pane

0x9687,	// (0x00056925) main_calllock_pane

0x8f44,	// (0x000561e2) call6_btn_grp_pane_ParamLimits

0x8f44,	// (0x000561e2) call6_btn_grp_pane

0x8f5e,	// (0x000561fc) call6_pane_g1_ParamLimits

0x8f5e,	// (0x000561fc) call6_pane_g1

0x8f73,	// (0x00056211) popup_call6_1st_window_ParamLimits

0x8f73,	// (0x00056211) popup_call6_1st_window

0x8f84,	// (0x00056222) popup_call6_2nd_window_ParamLimits

0x8f84,	// (0x00056222) popup_call6_2nd_window

0x8f95,	// (0x00056233) cell_call6_btn_pane_ParamLimits

0x8f95,	// (0x00056233) cell_call6_btn_pane

0xb3f9,	// (0x00058697) bg_popup_call2_in_pane_cp03

0xee33,	// (0x0005c0d1) popup_call6_1st_window_g1

0xee3b,	// (0x0005c0d9) popup_call6_1st_window_g2

0xee43,	// (0x0005c0e1) popup_call6_1st_window_g3

0x0002,

0x0001,	// (0x0004d29f) popup_call6_1st_window_g

0xee4b,	// (0x0005c0e9) popup_call6_1st_window_t1

0xee5a,	// (0x0005c0f8) popup_call6_1st_window_t2

0xee6a,	// (0x0005c108) popup_call6_1st_window_t3

0x0002,

0x0008,	// (0x0004d2a6) popup_call6_1st_window_t

0xb3f9,	// (0x00058697) bg_popup_call2_in_pane_cp04

0xee33,	// (0x0005c0d1) popup_call6_2nd_window_g1

0xee3b,	// (0x0005c0d9) popup_call6_2nd_window_g2

0xee43,	// (0x0005c0e1) popup_call6_2nd_window_g3

0x0002,

0x0001,	// (0x0004d29f) popup_call6_2nd_window_g

0xee4b,	// (0x0005c0e9) popup_call6_2nd_window_t1

0x9687,	// (0x00056925) bg_button_pane_cp15

0xee7a,	// (0x0005c118) cell_call6_btn_pane_g1

0xee83,	// (0x0005c121) cell_call6_btn_pane_t1

0x8fa9,	// (0x00056247) listscroll_wgtman_pane_ParamLimits

0x8fa9,	// (0x00056247) listscroll_wgtman_pane

0x8fca,	// (0x00056268) wgtman_btn_pane_ParamLimits

0x8fca,	// (0x00056268) wgtman_btn_pane

0xb187,	// (0x00058425) aid_scroll_copy1

0xee92,	// (0x0005c130) list_wgtman_pane

0x900d,	// (0x000562ab) wgtman_btn_pane_g1_ParamLimits

0x900d,	// (0x000562ab) wgtman_btn_pane_g1

0x9039,	// (0x000562d7) wgtman_btn_pane_t1_ParamLimits

0x9039,	// (0x000562d7) wgtman_btn_pane_t1

0xee9c,	// (0x0005c13a) wgtman_btn_pane_t2_ParamLimits

0xee9c,	// (0x0005c13a) wgtman_btn_pane_t2

0x0001,

0xfec6,	// (0x0005d164) wgtman_btn_pane_t_ParamLimits

0xfec6,	// (0x0005d164) wgtman_btn_pane_t

0x9076,	// (0x00056314) listrow_wgtman_pane_ParamLimits

0x9076,	// (0x00056314) listrow_wgtman_pane

0x9089,	// (0x00056327) listrow_wgtman_pane_g1

0x9096,	// (0x00056334) listrow_wgtman_pane_g2

0x0001,

0xfecb,	// (0x0005d169) listrow_wgtman_pane_g

0x0bee,	// (0x0004de8c) listrow_wgtman_pane_t1

0x0c06,	// (0x0004dea4) listrow_wgtman_pane_t2

0x0001,

0xfed0,	// (0x0005d16e) listrow_wgtman_pane_t

0x0c2c,	// (0x0004deca) wait_bar_pane_cp09

0xeeb3,	// (0x0005c151) main_calllock_btn_pane

0xeebd,	// (0x0005c15b) main_calllock_pane_g1

0x9687,	// (0x00056925) bg_button_pane_cp17

0xeec8,	// (0x0005c166) main_calllock_btn_pane_g1

0xeed1,	// (0x0005c16f) main_calllock_btn_pane_t1

0x9687,	// (0x00056925) main_dialer3_pane

0x9687,	// (0x00056925) main_fmrd2_pane

0xcc13,	// (0x00059eb1) main_fs_bigclock_unlock_btn_pane_g1

0xeee8,	// (0x0005c186) main_fs_bigclock_unlock_btn_pane_t1

0x90b4,	// (0x00056352) area_fmrd2_info_pane_ParamLimits

0x90b4,	// (0x00056352) area_fmrd2_info_pane

0x90c5,	// (0x00056363) area_fmrd2_visual_pane_ParamLimits

0x90c5,	// (0x00056363) area_fmrd2_visual_pane

0x90d3,	// (0x00056371) fmrd2_indi_pane_ParamLimits

0x90d3,	// (0x00056371) fmrd2_indi_pane

0x90e0,	// (0x0005637e) area_fmrd2_visual_pane_g1

0x90e8,	// (0x00056386) area_fmrd2_visual_pane_t1

0x90f8,	// (0x00056396) area_fmrd2_visual_pane_t2

0x9108,	// (0x000563a6) area_fmrd2_visual_pane_t3

0x0002,

0xfed5,	// (0x0005d173) area_fmrd2_visual_pane_t

0x9118,	// (0x000563b6) area_fmrd2_info_pane_g1

0x9120,	// (0x000563be) area_fmrd2_info_pane_t1

0x9130,	// (0x000563ce) area_fmrd2_info_pane_t2

0x9140,	// (0x000563de) area_fmrd2_info_pane_t3

0x9150,	// (0x000563ee) area_fmrd2_info_pane_t4

0x0003,

0xfedc,	// (0x0005d17a) area_fmrd2_info_pane_t

0x915e,	// (0x000563fc) fmrd2_indi_pane_t1

0x916e,	// (0x0005640c) fmrd2_indi_pane_t2

0x917e,	// (0x0005641c) fmrd2_indi_pane_t3

0x0002,

0xfee5,	// (0x0005d183) fmrd2_indi_pane_t

0xe434,	// (0x0005b6d2) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe434,	// (0x0005b6d2) list_single_fs_bigclock_indicator_pane_g5

0xe4db,	// (0x0005b779) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4db,	// (0x0005b779) list_single_fs_bigclock_indicator_pane_t5

0x8a64,	// (0x00055d02) aid_cell_bcale_month_pane_ParamLimits

0x8a64,	// (0x00055d02) aid_cell_bcale_month_pane

0x8a82,	// (0x00055d20) bcale_month_pane_ParamLimits

0x8a82,	// (0x00055d20) bcale_month_pane

0x8aa6,	// (0x00055d44) bcale_preview_pane_ParamLimits

0x8aa6,	// (0x00055d44) bcale_preview_pane

0xec93,	// (0x0005bf31) list_single_fs_bigclock_pane_t1_ParamLimits

0xecb2,	// (0x0005bf50) list_single_fs_bigclock_pane_t2_ParamLimits

0xecb2,	// (0x0005bf50) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0005d118) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0005d118) list_single_fs_bigclock_pane_t

0xeee0,	// (0x0005c17e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0x001e,	// (0x0004d2bc) main_fs_bigclock_unlock_btn_pane_g

0x918e,	// (0x0005642c) aid_dia3_key_size_ParamLimits

0x918e,	// (0x0005642c) aid_dia3_key_size

0x919d,	// (0x0005643b) aid_dia3_listrow_size_ParamLimits

0x919d,	// (0x0005643b) aid_dia3_listrow_size

0x91b2,	// (0x00056450) dia3_keypad_fun_pane_ParamLimits

0x91b2,	// (0x00056450) dia3_keypad_fun_pane

0x91ce,	// (0x0005646c) dia3_keypad_num_pane_ParamLimits

0x91ce,	// (0x0005646c) dia3_keypad_num_pane

0x91e9,	// (0x00056487) dia3_listscroll_pane_ParamLimits

0x91e9,	// (0x00056487) dia3_listscroll_pane

0x91fc,	// (0x0005649a) dia3_numentry_pane_ParamLimits

0x91fc,	// (0x0005649a) dia3_numentry_pane

0xeef6,	// (0x0005c194) dia3_list_pane

0xef01,	// (0x0005c19f) scroll_pane_cp12

0x9687,	// (0x00056925) bg_dia3_numentry_pane

0x9210,	// (0x000564ae) dia3_numentry_pane_t1

0x921f,	// (0x000564bd) cell_dia3_key_num_pane

0x9227,	// (0x000564c5) cell_dia3_key0_fun_pane_ParamLimits

0x9227,	// (0x000564c5) cell_dia3_key0_fun_pane

0x923b,	// (0x000564d9) cell_dia3_key1_fun_pane_ParamLimits

0x923b,	// (0x000564d9) cell_dia3_key1_fun_pane

0x9253,	// (0x000564f1) dia3_listrow_pane

0xe143,	// (0x0005b3e1) bg_dia3_numentry_pane_g1

0x9687,	// (0x00056925) bg_button_pane_cp21

0xef0c,	// (0x0005c1aa) cell_dia3_key_num_pane_t1

0xef1a,	// (0x0005c1b8) cell_dia3_key_num_pane_t2

0xef29,	// (0x0005c1c7) cell_dia3_key_num_pane_t3

0xef38,	// (0x0005c1d6) cell_dia3_key_num_pane_t4

0x0003,

0x003a,	// (0x0004d2d8) cell_dia3_key_num_pane_t

0x9687,	// (0x00056925) bg_button_pane_cp19

0x9265,	// (0x00056503) cell_dia3_key0_fun_pane_g1

0x9687,	// (0x00056925) bg_button_pane_cp20

0x926d,	// (0x0005650b) cell_dia3_key1_fun_pane_g1

0x9275,	// (0x00056513) area_left_week_number_pane

0x9281,	// (0x0005651f) area_top_day_name_pane

0x9294,	// (0x00056532) frame_month_view_pane

0xef47,	// (0x0005c1e5) grid_month_view_pane

0x92a7,	// (0x00056545) cell_top_day_name_pane_ParamLimits

0x92a7,	// (0x00056545) cell_top_day_name_pane

0x92d4,	// (0x00056572) cell_area_left_week_number_pane_ParamLimits

0x92d4,	// (0x00056572) cell_area_left_week_number_pane

0x92e8,	// (0x00056586) cell_month_view_pane_ParamLimits

0x92e8,	// (0x00056586) cell_month_view_pane

0xef55,	// (0x0005c1f3) frm_month_g1

0x9315,	// (0x000565b3) frm_month_g2

0x9328,	// (0x000565c6) frm_month_g3

0x933b,	// (0x000565d9) frm_month_g4

0x934e,	// (0x000565ec) frm_month_g5

0x9361,	// (0x000565ff) frm_month_g6

0x9374,	// (0x00056612) frm_month_g7

0xef62,	// (0x0005c200) frm_month_g8

0x9387,	// (0x00056625) frm_month_g9

0x9397,	// (0x00056635) frm_month_g10

0x93a7,	// (0x00056645) frm_month_g11

0x93b7,	// (0x00056655) frm_month_g12

0x93c9,	// (0x00056667) frm_month_g13

0x93db,	// (0x00056679) frm_month_g14

0x93ef,	// (0x0005668d) frm_month_g15

0x9403,	// (0x000566a1) frm_month_g16

0x000f,

0xfeec,	// (0x0005d18a) frm_month_g

0xef6f,	// (0x0005c20d) cell_top_day_name_pane_t1

0x9417,	// (0x000566b5) cell_area_left_week_number_pane_g1

0x9423,	// (0x000566c1) cell_area_left_week_number_pane_t1

0xce73,	// (0x0005a111) cell_month_view_pane_g1

0x9436,	// (0x000566d4) cell_month_view_pane_t1

0x9687,	// (0x00056925) main_fps_pane

0xe6cb,	// (0x0005b969) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6cb,	// (0x0005b969) cmail_ddmenu_btn02_pane_cp1

0xe6e7,	// (0x0005b985) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6e7,	// (0x0005b985) cmail_ddmenu_btn02_pane_cp2

0x8bf8,	// (0x00055e96) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8bf8,	// (0x00055e96) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0005d0cb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0005d0cb) cmail_ddmenu_btn02_pane_g

0x8c16,	// (0x00055eb4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8c16,	// (0x00055eb4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0005d0d0) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0005d0d0) cmail_ddmenu_btn02_pane_t

0x9449,	// (0x000566e7) fps_text_pane_ParamLimits

0x9449,	// (0x000566e7) fps_text_pane

0x9460,	// (0x000566fe) main_fps_pane_g1_ParamLimits

0x9460,	// (0x000566fe) main_fps_pane_g1

0x947a,	// (0x00056718) wait_bar_pane_cp010_ParamLimits

0x947a,	// (0x00056718) wait_bar_pane_cp010

0x948b,	// (0x00056729) fps_text_pane_t1_ParamLimits

0x948b,	// (0x00056729) fps_text_pane_t1

0xdd86,	// (0x0005b024) cam4_image_uncrop_pane_g1

0xdd8f,	// (0x0005b02d) cam4_image_uncrop_pane_g2

0x65a3,	// (0x00053841) cam4_image_uncrop_pane_g3

0x65ac,	// (0x0005384a) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0005cb8c) cam4_image_uncrop_pane_g

0x9253,	// (0x000564f1) dia3_listrow_pane_ParamLimits

0x9687,	// (0x00056925) main_phob2_pane

0x88a5,	// (0x00055b43) cell_tport_appsw_pane_cp02_ParamLimits

0x88a5,	// (0x00055b43) cell_tport_appsw_pane_cp02

0x88b9,	// (0x00055b57) cell_tport_appsw_pane_cp03_ParamLimits

0x88b9,	// (0x00055b57) cell_tport_appsw_pane_cp03

0x9687,	// (0x00056925) phob2_contact_card_pane

0x9687,	// (0x00056925) phob2_listscroll_pane

0xef82,	// (0x0005c220) phob2_list_pane

0xef8a,	// (0x0005c228) scroll_pane_cp034

0x94a3,	// (0x00056741) phob2_cc_data_pane_ParamLimits

0x94a3,	// (0x00056741) phob2_cc_data_pane

0x94c2,	// (0x00056760) phob2_cc_listscroll_pane_ParamLimits

0x94c2,	// (0x00056760) phob2_cc_listscroll_pane

0x94e0,	// (0x0005677e) list_double_large_graphic_phob2_pane_ParamLimits

0x94e0,	// (0x0005677e) list_double_large_graphic_phob2_pane

0x94f3,	// (0x00056791) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x94f3,	// (0x00056791) list_double_large_graphic_phob2_pane_g1

0x0c3e,	// (0x0004dedc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0c3e,	// (0x0004dedc) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff0d,	// (0x0005d1ab) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff0d,	// (0x0005d1ab) list_double_large_graphic_phob2_pane_g

0x0c4a,	// (0x0004dee8) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0c4a,	// (0x0004dee8) list_double_large_graphic_phob2_pane_t1

0x0c60,	// (0x0004defe) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0c60,	// (0x0004defe) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff12,	// (0x0005d1b0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff12,	// (0x0005d1b0) list_double_large_graphic_phob2_pane_t

0x9687,	// (0x00056925) list_highlight_pane_cp024

0x9509,	// (0x000567a7) phob2_cc_button_pane

0x9511,	// (0x000567af) phob2_cc_data_pane_g1_ParamLimits

0x9511,	// (0x000567af) phob2_cc_data_pane_g1

0x9526,	// (0x000567c4) phob2_cc_data_pane_g2_ParamLimits

0x9526,	// (0x000567c4) phob2_cc_data_pane_g2

0x0001,

0xff17,	// (0x0005d1b5) phob2_cc_data_pane_g_ParamLimits

0xff17,	// (0x0005d1b5) phob2_cc_data_pane_g

0x9536,	// (0x000567d4) phob2_cc_data_pane_t1_ParamLimits

0x9536,	// (0x000567d4) phob2_cc_data_pane_t1

0x954e,	// (0x000567ec) phob2_cc_data_pane_t2_ParamLimits

0x954e,	// (0x000567ec) phob2_cc_data_pane_t2

0x9566,	// (0x00056804) phob2_cc_data_pane_t3_ParamLimits

0x9566,	// (0x00056804) phob2_cc_data_pane_t3

0x0002,

0xff1c,	// (0x0005d1ba) phob2_cc_data_pane_t_ParamLimits

0xff1c,	// (0x0005d1ba) phob2_cc_data_pane_t

0xef92,	// (0x0005c230) phob2_cc_list_pane_ParamLimits

0xef92,	// (0x0005c230) phob2_cc_list_pane

0xd93d,	// (0x0005abdb) scroll_pane_cp035_ParamLimits

0xd93d,	// (0x0005abdb) scroll_pane_cp035

0xa4d6,	// (0x00057774) bg_button_pane_cp033

0xef9e,	// (0x0005c23c) phob2_cc_button_pane_g1

0xefaa,	// (0x0005c248) phob2_cc_button_pane_t1

0xefbf,	// (0x0005c25d) phob2_cc_button_pane_t2

0x0001,

0x007a,	// (0x0004d318) phob2_cc_button_pane_t

0x957e,	// (0x0005681c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x957e,	// (0x0005681c) list_double_large_graphic_phob2_cc_pane

0x9591,	// (0x0005682f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9591,	// (0x0005682f) list_double_large_graphic_phob2_cc_pane_g1

0x0c75,	// (0x0004df13) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0c75,	// (0x0004df13) list_double_large_graphic_phob2_cc_pane_g2

0x0c81,	// (0x0004df1f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0c81,	// (0x0004df1f) list_double_large_graphic_phob2_cc_pane_g3

0x0c8d,	// (0x0004df2b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0c8d,	// (0x0004df2b) list_double_large_graphic_phob2_cc_pane_g4

0x0c99,	// (0x0004df37) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0c99,	// (0x0004df37) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff23,	// (0x0005d1c1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff23,	// (0x0005d1c1) list_double_large_graphic_phob2_cc_pane_g

0x0ca5,	// (0x0004df43) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0ca5,	// (0x0004df43) list_double_large_graphic_phob2_cc_pane_t1

0x0cce,	// (0x0004df6c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0cce,	// (0x0004df6c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff2e,	// (0x0005d1cc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff2e,	// (0x0005d1cc) list_double_large_graphic_phob2_cc_pane_t

0xefd1,	// (0x0005c26f) list_highlight_pane_cp025_ParamLimits

0xefd1,	// (0x0005c26f) list_highlight_pane_cp025

0xa4d6,	// (0x00057774) bg_button_pane_cp033_ParamLimits

0xef9e,	// (0x0005c23c) phob2_cc_button_pane_g1_ParamLimits

0xefaa,	// (0x0005c248) phob2_cc_button_pane_t1_ParamLimits

0xefbf,	// (0x0005c25d) phob2_cc_button_pane_t2_ParamLimits

0x007a,	// (0x0004d318) phob2_cc_button_pane_t_ParamLimits

0x0f40,	// (0x0004e1de) popup_wgtman_window

0xd782,	// (0x0005aa20) scroll_pane_cp038

0x8fef,	// (0x0005628d) wgtman_btn_pane_cp_01_ParamLimits

0x8fef,	// (0x0005628d) wgtman_btn_pane_cp_01

0xefdf,	// (0x0005c27d) wgtman_content_pane

0xefe8,	// (0x0005c286) wgtman_heading_pane

0x9687,	// (0x00056925) bg_heading_pane_cp02

0xeff1,	// (0x0005c28f) wgtman_heading_pane_g1

0xeff9,	// (0x0005c297) wgtman_heading_pane_t1

0xf007,	// (0x0005c2a5) scroll_pane_cp036

0xf00f,	// (0x0005c2ad) wgtman_list_pane

0xf017,	// (0x0005c2b5) wgtman_list_pane_t1_ParamLimits

0xf017,	// (0x0005c2b5) wgtman_list_pane_t1

0xa0d5,	// (0x00057373) cam4_grid_pane

0x033a,	// (0x0004d5d8) bg_button_pane_cp015_ParamLimits

0x724a,	// (0x000544e8) bg_button_pane_cp016_ParamLimits

0x725d,	// (0x000544fb) bg_button_pane_cp017_ParamLimits

0x0382,	// (0x0004d620) popup_vitu2_query_window_g3_ParamLimits

0x0382,	// (0x0004d620) popup_vitu2_query_window_g3

0x03fd,	// (0x0004d69b) popup_vitu2_query_window_t6_ParamLimits

0x03fd,	// (0x0004d69b) popup_vitu2_query_window_t6

0x0428,	// (0x0004d6c6) popup_vitu2_query_window_t7_ParamLimits

0x0428,	// (0x0004d6c6) popup_vitu2_query_window_t7

0xdd86,	// (0x0005b024) cam4_grid_pane_g1

0xdd8f,	// (0x0005b02d) cam4_grid_pane_g2

0xf033,	// (0x0005c2d1) cam4_grid_pane_g3

0xf03c,	// (0x0005c2da) cam4_grid_pane_g4

0x0003,

0xff33,	// (0x0005d1d1) cam4_grid_pane_g

0x1ef9,	// (0x0004f197) aid_placing_vt_slider_lsc_ParamLimits

0x21f6,	// (0x0004f494) vidtel_button_pane_ParamLimits

0x21f6,	// (0x0004f494) vidtel_button_pane

0xf047,	// (0x0005c2e5) bg_button_pane_cp034

0x959d,	// (0x0005683b) vidtel_button_pane_g1

0xf051,	// (0x0005c2ef) vidtel_button_pane_t1

0xd884,	// (0x0005ab22) aid_size_vtel_slider_touch

0xd93d,	// (0x0005abdb) scroll_pane_cp039

0xe181,	// (0x0005b41f) ncim_query_button_pane_cp01_ParamLimits

0xe1a0,	// (0x0005b43e) ncimui_query_pane_g1_ParamLimits

0xa4d6,	// (0x00057774) input_focus_pane_cp012_ParamLimits

0xe1c5,	// (0x0005b463) ncim_query_entry_pane_t1_ParamLimits

0xd93d,	// (0x0005abdb) scroll_pane_cp039_ParamLimits

0xb26d,	// (0x0005850b) navi_pane_bcale_mc_g1

0xb275,	// (0x00058513) navi_pane_bcale_mc_t1

0xe730,	// (0x0005b9ce) main_sp_fs_email_pane_g1

0xe73c,	// (0x0005b9da) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0005cf83) main_sp_fs_email_pane_g

0xe98d,	// (0x0005bc2b) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe98d,	// (0x0005bc2b) list_single_cale_mrui_row_pane_g3

0x0b8e,	// (0x0004de2c) list_single_recal_day_pane_g5_event_pane

0xa493,	// (0x00057731) list_single_recal_day_pane_g7

0xf05f,	// (0x0005c2fd) list_recal_day_event_pane_cp01

0xf068,	// (0x0005c306) list_recal_vselct_arw_lo_pane_cp01

0xf070,	// (0x0005c30e) list_recal_vselct_arw_up_pane_cp01

0xf078,	// (0x0005c316) list_recal_vselct_pane_cp01

0xd894,	// (0x0005ab32) list_recal_day_event_pane_cp01_g1

0xa4c8,	// (0x00057766) list_recal_day_event_pane_cp01_t1

0xa49b,	// (0x00057739) list_single_recal_day_pane_t1_ParamLimits

0xa4ad,	// (0x0005774b) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0005d0e0) list_single_recal_day_pane_t_ParamLimits

0xa6af,	// (0x0005794d) bg_notes_pane_ParamLimits

0xa771,	// (0x00057a0f) list_notes_pane_ParamLimits

0x1274,	// (0x0004e512) scroll_pane_cp06_ParamLimits

0xa793,	// (0x00057a31) main_notes_pane_ParamLimits

0x9687,	// (0x00056925) main_welc_pane

0x95a5,	// (0x00056843) main_welc_body_pane_ParamLimits

0x95a5,	// (0x00056843) main_welc_body_pane

0x95c2,	// (0x00056860) main_welc_opti_pane_ParamLimits

0x95c2,	// (0x00056860) main_welc_opti_pane

0x960b,	// (0x000568a9) main_welc_pane_t1_ParamLimits

0x960b,	// (0x000568a9) main_welc_pane_t1

0x962d,	// (0x000568cb) main_welc_body_row_pane_ParamLimits

0x962d,	// (0x000568cb) main_welc_body_row_pane

0xeb74,	// (0x0005be12) main_welc_opti_row_pane_ParamLimits

0xeb74,	// (0x0005be12) main_welc_opti_row_pane

0xf082,	// (0x0005c320) main_welc_opti_row_pane_g1

0xf08a,	// (0x0005c328) main_welc_opti_row_pane_t1

0xf09a,	// (0x0005c338) main_welc_body_row_pane_t1

0xed69,	// (0x0005c007) popup_notif_wgt_heading_pane

0xed83,	// (0x0005c021) aid_size_list_notif_wgt_del_ParamLimits

0xed90,	// (0x0005c02e) list_notif_wgt_row_pane_g1_ParamLimits

0xed9c,	// (0x0005c03a) list_notif_wgt_row_pane_g2_ParamLimits

0xeda8,	// (0x0005c046) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0005d147) list_notif_wgt_row_pane_g_ParamLimits

0xedb5,	// (0x0005c053) list_notif_wgt_row_pane_t1_ParamLimits

0xedca,	// (0x0005c068) list_notif_wgt_row_pane_t2_ParamLimits

0xeddc,	// (0x0005c07a) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0005d14e) list_notif_wgt_row_pane_t_ParamLimits

0x9089,	// (0x00056327) listrow_wgtman_pane_g1_ParamLimits

0x9096,	// (0x00056334) listrow_wgtman_pane_g2_ParamLimits

0xfecb,	// (0x0005d169) listrow_wgtman_pane_g_ParamLimits

0x0bee,	// (0x0004de8c) listrow_wgtman_pane_t1_ParamLimits

0x0c06,	// (0x0004dea4) listrow_wgtman_pane_t2_ParamLimits

0xfed0,	// (0x0005d16e) listrow_wgtman_pane_t_ParamLimits

0x0c2c,	// (0x0004deca) wait_bar_pane_cp09_ParamLimits

0x9687,	// (0x00056925) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0005c347) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0005c34f) popup_notif_wgt_heading_pane_t1

0x9687,	// (0x00056925) main_vids_pane

0x9687,	// (0x00056925) vids_listscroll_pane

0x9643,	// (0x000568e1) scroll_pane_cp040

0x9687,	// (0x00056925) vids_list_pane

0x964e,	// (0x000568ec) vids_list_double_pane_ParamLimits

0x964e,	// (0x000568ec) vids_list_double_pane

0x965f,	// (0x000568fd) vids_list_double_pane_g1

0x9668,	// (0x00056906) vids_list_double_pane_t1

0x9677,	// (0x00056915) vids_list_double_pane_t2

0x0001,

0xff41,	// (0x0005d1df) vids_list_double_pane_t

0xa4d6,	// (0x00057774) main_ncimui_pane_ParamLimits

0x7e51,	// (0x000550ef) main_ncimui_pane_g1_ParamLimits

0x7e5d,	// (0x000550fb) main_ncimui_pane_g2_ParamLimits

0x7e5d,	// (0x000550fb) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0005ce88) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0005ce88) main_ncimui_pane_g

0x95e1,	// (0x0005687f) main_welc_pane_g1_ParamLimits

0x95e1,	// (0x0005687f) main_welc_pane_g1

0x95f6,	// (0x00056894) main_welc_pane_g2_ParamLimits

0x95f6,	// (0x00056894) main_welc_pane_g2

0x0001,

0xff3c,	// (0x0005d1da) main_welc_pane_g_ParamLimits

0xff3c,	// (0x0005d1da) main_welc_pane_g

0xa6af,	// (0x0005794d) listscroll_mce_pane_ParamLimits

0xb3f1,	// (0x0005868f) wait_bar_pane_cp10

0xc7fd,	// (0x00059a9b) main_cale_day_pane_ParamLimits

0xc7fd,	// (0x00059a9b) main_cale_week_pane_ParamLimits

0xa6af,	// (0x0005794d) main_messa_pane_ParamLimits

0x58ae,	// (0x00052b4c) main_clock2_btn_pane_ParamLimits

0x58ae,	// (0x00052b4c) main_clock2_btn_pane

0xd007,	// (0x0005a2a5) main_clock2_btn_pane_cp01_ParamLimits

0xd007,	// (0x0005a2a5) main_clock2_btn_pane_cp01

0xe95e,	// (0x0005bbfc) list_cale_mrui_pane_ParamLimits

0xee20,	// (0x0005c0be) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0005d155) main_cf0_pane_g

0x9275,	// (0x00056513) area_left_week_number_pane_ParamLimits

0x9281,	// (0x0005651f) area_top_day_name_pane_ParamLimits

0x9294,	// (0x00056532) frame_month_view_pane_ParamLimits

0xef47,	// (0x0005c1e5) grid_month_view_pane_ParamLimits

0xef55,	// (0x0005c1f3) frm_month_g1_ParamLimits

0x9315,	// (0x000565b3) frm_month_g2_ParamLimits

0x9328,	// (0x000565c6) frm_month_g3_ParamLimits

0x933b,	// (0x000565d9) frm_month_g4_ParamLimits

0x934e,	// (0x000565ec) frm_month_g5_ParamLimits

0x9361,	// (0x000565ff) frm_month_g6_ParamLimits

0x9374,	// (0x00056612) frm_month_g7_ParamLimits

0xef62,	// (0x0005c200) frm_month_g8_ParamLimits

0x9387,	// (0x00056625) frm_month_g9_ParamLimits

0x9397,	// (0x00056635) frm_month_g10_ParamLimits

0x93a7,	// (0x00056645) frm_month_g11_ParamLimits

0x93b7,	// (0x00056655) frm_month_g12_ParamLimits

0x93c9,	// (0x00056667) frm_month_g13_ParamLimits

0x93db,	// (0x00056679) frm_month_g14_ParamLimits

0x93ef,	// (0x0005668d) frm_month_g15_ParamLimits

0x9403,	// (0x000566a1) frm_month_g16_ParamLimits

0xfeec,	// (0x0005d18a) frm_month_g_ParamLimits

0xef6f,	// (0x0005c20d) cell_top_day_name_pane_t1_ParamLimits

0x9417,	// (0x000566b5) cell_area_left_week_number_pane_g1_ParamLimits

0x9423,	// (0x000566c1) cell_area_left_week_number_pane_t1_ParamLimits

0xce73,	// (0x0005a111) cell_month_view_pane_g1_ParamLimits

0x9436,	// (0x000566d4) cell_month_view_pane_t1_ParamLimits

0xa6a7,	// (0x00057945) main_clock2_btn_pane_g1

0xf0bf,	// (0x0005c35d) main_clock2_btn_pane_t1

0xa4d6,	// (0x00057774) listscroll_cmail_pane_ParamLimits

0xe730,	// (0x0005b9ce) main_sp_fs_email_pane_g1_ParamLimits

0xe73c,	// (0x0005b9da) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0005cf83) main_sp_fs_email_pane_g_ParamLimits

0xeafc,	// (0x0005bd9a) list_recal_day_pane_ParamLimits

0xeb0d,	// (0x0005bdab) mian_recal_day_pane_t1

0x07bd,	// (0x0004da5b) list_single_dyc_row_text_pane_t4_ParamLimits

0x07bd,	// (0x0004da5b) list_single_dyc_row_text_pane_t4

0x0806,	// (0x0004daa4) list_single_dyc_row_text_pane_t5_ParamLimits

0x0806,	// (0x0004daa4) list_single_dyc_row_text_pane_t5

0x8758,	// (0x000559f6) list_single_dyc_row_text_pane_t6_ParamLimits

0x8758,	// (0x000559f6) list_single_dyc_row_text_pane_t6

0xad5d,	// (0x00057ffb) aid_mgn_list_cale_time_pane

0xa4d6,	// (0x00057774) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
