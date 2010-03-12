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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004f48e };

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
0x4996,	// (0x00053e24) Screen

0x49a2,	// (0x00053e30) application_window

0x49fe,	// (0x00053e8c) area_bottom_pane_ParamLimits

0x49fe,	// (0x00053e8c) area_bottom_pane

0x4a58,	// (0x00053ee6) area_top_pane_ParamLimits

0x4a58,	// (0x00053ee6) area_top_pane

0x4abc,	// (0x00053f4a) call_video_uplink_pane_ParamLimits

0x4abc,	// (0x00053f4a) call_video_uplink_pane

0x4af9,	// (0x00053f87) main_pane_ParamLimits

0x4af9,	// (0x00053f87) main_pane

0x2781,	// (0x00051c0f) context_pane

0x7ce7,	// (0x00057175) navi_pane

0x7d0b,	// (0x00057199) popup_cale_events_window_ParamLimits

0x7d0b,	// (0x00057199) popup_cale_events_window

0x2794,	// (0x00051c22) popup_mup_playback_window

0x7d23,	// (0x000571b1) signal_pane

0xead8,	// (0x0005df66) main_browser_pane

0x134c,	// (0x000507da) main_burst_pane

0x7b48,	// (0x00056fd6) main_calc_pane

0x134c,	// (0x000507da) main_cale_day_pane

0xead8,	// (0x0005df66) main_cale_month_pane

0x134c,	// (0x000507da) main_cale_week_pane

0x134c,	// (0x000507da) main_call_pane

0xe7aa,	// (0x0005dc38) main_call_poc_pane

0x134c,	// (0x000507da) main_camera_pane

0x134c,	// (0x000507da) main_chi_dic_pane

0x11ee,	// (0x0005067c) main_clock_pane

0xe7aa,	// (0x0005dc38) main_fmradio_pane

0x134c,	// (0x000507da) main_graph_messa_pane

0xe7aa,	// (0x0005dc38) main_help_pane

0xead8,	// (0x0005df66) main_im_pane

0xea05,	// (0x0005de93) main_image_pane_ParamLimits

0xea05,	// (0x0005de93) main_image_pane

0xe7aa,	// (0x0005dc38) main_location2_pane

0x134c,	// (0x000507da) main_location_pane

0xe7aa,	// (0x0005dc38) main_messa_pane

0xe7aa,	// (0x0005dc38) main_mp2_pane

0x134c,	// (0x000507da) main_mp_pane

0xe7aa,	// (0x0005dc38) main_msg_pane

0xe7aa,	// (0x0005dc38) main_mup_eq_pane

0xe7aa,	// (0x0005dc38) main_mup_pane

0xead8,	// (0x0005df66) main_notes_pane

0xe7aa,	// (0x0005dc38) main_pec_pane

0xe7aa,	// (0x0005dc38) main_phob_pane

0xe7aa,	// (0x0005dc38) main_pinb_pane

0xe7aa,	// (0x0005dc38) main_postcard_pane

0xe7aa,	// (0x0005dc38) main_qdial_pane

0x134c,	// (0x000507da) main_skin_pane

0xe7aa,	// (0x0005dc38) main_smil2_pane

0x134c,	// (0x000507da) main_smil_pane

0x134c,	// (0x000507da) main_video_pane

0x134c,	// (0x000507da) main_video_tele_pane

0xea05,	// (0x0005de93) main_viewer_pane_ParamLimits

0xea05,	// (0x0005de93) main_viewer_pane

0x134c,	// (0x000507da) main_vorec_pane

0x7b96,	// (0x00057024) popup_blid_sat_info_window_ParamLimits

0x7b96,	// (0x00057024) popup_blid_sat_info_window

0x7bbc,	// (0x0005704a) popup_dyc_status_message_window_ParamLimits

0x7bbc,	// (0x0005704a) popup_dyc_status_message_window

0x7bcc,	// (0x0005705a) popup_grid_large_graphic_window_ParamLimits

0x7bcc,	// (0x0005705a) popup_grid_large_graphic_window

0x7c61,	// (0x000570ef) popup_loc_request_window_ParamLimits

0x7c61,	// (0x000570ef) popup_loc_request_window

0x7cbb,	// (0x00057149) popup_wml_address_window_ParamLimits

0x7cbb,	// (0x00057149) popup_wml_address_window

0x7a20,	// (0x00056eae) call_muted_g1

0x76df,	// (0x00056b6d) popup_call_audio_conf_window_ParamLimits

0x76df,	// (0x00056b6d) popup_call_audio_conf_window

0x7a30,	// (0x00056ebe) popup_call_audio_first_window_ParamLimits

0x7a30,	// (0x00056ebe) popup_call_audio_first_window

0x7a70,	// (0x00056efe) popup_call_audio_in_window_ParamLimits

0x7a70,	// (0x00056efe) popup_call_audio_in_window

0x7a94,	// (0x00056f22) popup_call_audio_out_window_ParamLimits

0x7a94,	// (0x00056f22) popup_call_audio_out_window

0x7ab6,	// (0x00056f44) popup_call_audio_second_window_ParamLimits

0x7ab6,	// (0x00056f44) popup_call_audio_second_window

0x7ae6,	// (0x00056f74) popup_call_audio_wait_window_ParamLimits

0x7ae6,	// (0x00056f74) popup_call_audio_wait_window

0x7b07,	// (0x00056f95) popup_number_entry_window_ParamLimits

0x7b07,	// (0x00056f95) popup_number_entry_window

0xe354,	// (0x0005d7e2) bg_popup_call_pane_cp05_ParamLimits

0xe354,	// (0x0005d7e2) bg_popup_call_pane_cp05

0xe374,	// (0x0005d802) popup_number_entry_window_t1

0xe387,	// (0x0005d815) popup_number_entry_window_t2

0xe399,	// (0x0005d827) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x0005e566) popup_number_entry_window_t

0xe3e0,	// (0x0005d86e) text_title_cp2

0xe3f3,	// (0x0005d881) bg_popup_call_pane_cp_ParamLimits

0xe3f3,	// (0x0005d881) bg_popup_call_pane_cp

0xe401,	// (0x0005d88f) call_thumbnail_pane

0xe417,	// (0x0005d8a5) popup_call_audio_in_window_g1_ParamLimits

0xe417,	// (0x0005d8a5) popup_call_audio_in_window_g1

0xe423,	// (0x0005d8b1) popup_call_audio_in_window_g2_ParamLimits

0xe423,	// (0x0005d8b1) popup_call_audio_in_window_g2

0xe42f,	// (0x0005d8bd) popup_call_audio_in_window_g3_ParamLimits

0xe42f,	// (0x0005d8bd) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0005e56f) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0005e56f) popup_call_audio_in_window_g

0xe43b,	// (0x0005d8c9) popup_call_audio_in_window_t1_ParamLimits

0xe43b,	// (0x0005d8c9) popup_call_audio_in_window_t1

0xe457,	// (0x0005d8e5) popup_call_audio_in_window_t2_ParamLimits

0xe457,	// (0x0005d8e5) popup_call_audio_in_window_t2

0xe473,	// (0x0005d901) popup_call_audio_in_window_t3_ParamLimits

0xe473,	// (0x0005d901) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x0005e576) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x0005e576) popup_call_audio_in_window_t

0xe3f3,	// (0x0005d881) bg_popup_call_pane_cp01_ParamLimits

0xe3f3,	// (0x0005d881) bg_popup_call_pane_cp01

0xe401,	// (0x0005d88f) call_thumbnail_pane_cp02

0xe486,	// (0x0005d914) call_type_pane_cp022

0xe48e,	// (0x0005d91c) popup_call_audio_out_window_g1_ParamLimits

0xe48e,	// (0x0005d91c) popup_call_audio_out_window_g1

0xe4a0,	// (0x0005d92e) popup_call_audio_out_window_g2_ParamLimits

0xe4a0,	// (0x0005d92e) popup_call_audio_out_window_g2

0xe4ac,	// (0x0005d93a) popup_call_audio_out_window_g3_ParamLimits

0xe4ac,	// (0x0005d93a) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0005e57d) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0005e57d) popup_call_audio_out_window_g

0xe4be,	// (0x0005d94c) popup_call_audio_out_window_t1_ParamLimits

0xe4be,	// (0x0005d94c) popup_call_audio_out_window_t1

0xe4d6,	// (0x0005d964) popup_call_audio_out_window_t2_ParamLimits

0xe4d6,	// (0x0005d964) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0005e584) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0005e584) popup_call_audio_out_window_t

0xe4eb,	// (0x0005d979) bg_popup_call_pane_ParamLimits

0xe4eb,	// (0x0005d979) bg_popup_call_pane

0x4cd4,	// (0x00054162) call_thumbnail_pane_cp_ParamLimits

0x4cd4,	// (0x00054162) call_thumbnail_pane_cp

0xe56f,	// (0x0005d9fd) call_type_pane_cp01_ParamLimits

0xe56f,	// (0x0005d9fd) call_type_pane_cp01

0xe5b3,	// (0x0005da41) popup_call_audio_first_window_g1_ParamLimits

0xe5b3,	// (0x0005da41) popup_call_audio_first_window_g1

0xe5ff,	// (0x0005da8d) popup_call_audio_first_window_g2_ParamLimits

0xe5ff,	// (0x0005da8d) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x0005e589) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x0005e589) popup_call_audio_first_window_g

0xe643,	// (0x0005dad1) popup_call_audio_first_window_t1_ParamLimits

0xe643,	// (0x0005dad1) popup_call_audio_first_window_t1

0xe6ef,	// (0x0005db7d) popup_call_audio_first_window_t4_ParamLimits

0xe6ef,	// (0x0005db7d) popup_call_audio_first_window_t4

0xe77b,	// (0x0005dc09) popup_call_audio_first_window_t5_ParamLimits

0xe77b,	// (0x0005dc09) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0005e58e) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0005e58e) popup_call_audio_first_window_t

0xe7aa,	// (0x0005dc38) bg_popup_call_pane_cp02

0xe7b4,	// (0x0005dc42) call_type_pane_cp023

0xe7bc,	// (0x0005dc4a) popup_call_audio_wait_window_g1

0xe7c4,	// (0x0005dc52) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0005e595) popup_call_audio_wait_window_g

0xe7cc,	// (0x0005dc5a) popup_call_audio_wait_window_t3

0xe7da,	// (0x0005dc68) bg_popup_call_pane_cp03_ParamLimits

0xe7da,	// (0x0005dc68) bg_popup_call_pane_cp03

0xe83a,	// (0x0005dcc8) call_thumbnail_pane_cp011_ParamLimits

0xe83a,	// (0x0005dcc8) call_thumbnail_pane_cp011

0xe846,	// (0x0005dcd4) call_type_pane_cp034_ParamLimits

0xe846,	// (0x0005dcd4) call_type_pane_cp034

0xe882,	// (0x0005dd10) popup_call_audio_second_window_g1_ParamLimits

0xe882,	// (0x0005dd10) popup_call_audio_second_window_g1

0xe8be,	// (0x0005dd4c) popup_call_audio_second_window_g2_ParamLimits

0xe8be,	// (0x0005dd4c) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x0005e59a) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x0005e59a) popup_call_audio_second_window_g

0xe8fa,	// (0x0005dd88) popup_call_audio_second_window_t1_ParamLimits

0xe8fa,	// (0x0005dd88) popup_call_audio_second_window_t1

0xe97b,	// (0x0005de09) popup_call_audio_second_window_t2_ParamLimits

0xe97b,	// (0x0005de09) popup_call_audio_second_window_t2

0xe9b1,	// (0x0005de3f) popup_call_audio_second_window_t3_ParamLimits

0xe9b1,	// (0x0005de3f) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0005e59f) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0005e59f) popup_call_audio_second_window_t

0xe7aa,	// (0x0005dc38) bg_popup_call_pane_cp04

0xe9e7,	// (0x0005de75) list_conf_pane

0xe9ef,	// (0x0005de7d) popup_call_audio_conf_window_t1

0xe9fd,	// (0x0005de8b) call_thumbnail_pane_g1

0xea05,	// (0x0005de93) bg_pinb_pane_ParamLimits

0xea05,	// (0x0005de93) bg_pinb_pane

0xea13,	// (0x0005dea1) find_pinb_pane

0xea1c,	// (0x0005deaa) listscroll_pinb_pane_ParamLimits

0xea1c,	// (0x0005deaa) listscroll_pinb_pane

0xea2b,	// (0x0005deb9) pinb_bg_pane_g1

0x4cf8,	// (0x00054186) pinb_bg_pane_g2

0x4d04,	// (0x00054192) pinb_bg_pane_g3

0x4d10,	// (0x0005419e) pinb_bg_pane_g4

0x4d1c,	// (0x000541aa) pinb_bg_pane_g5

0x4d28,	// (0x000541b6) pinb_bg_pane_g6

0x4d33,	// (0x000541c1) pinb_bg_pane_g7

0x4d3e,	// (0x000541cc) pinb_bg_pane_g8

0x4d49,	// (0x000541d7) pinb_bg_pane_g9

0x4d53,	// (0x000541e1) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0005e5a6) pinb_bg_pane_g

0x4d70,	// (0x000541fe) grid_pinb_pane

0x4d7b,	// (0x00054209) list_pinb_pane

0x4d86,	// (0x00054214) scroll_pane_cp01_ParamLimits

0x4d86,	// (0x00054214) scroll_pane_cp01

0xea35,	// (0x0005dec3) find_pinb_pane_g1_ParamLimits

0xea35,	// (0x0005dec3) find_pinb_pane_g1

0xea4d,	// (0x0005dedb) find_pinb_pane_t1

0xea5f,	// (0x0005deed) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0005e5c0) find_pinb_pane_t

0xea74,	// (0x0005df02) input_focus_pane_cp01_ParamLimits

0xea74,	// (0x0005df02) input_focus_pane_cp01

0x4d98,	// (0x00054226) cell_pinb_pane_ParamLimits

0x4d98,	// (0x00054226) cell_pinb_pane

0x4db6,	// (0x00054244) cell_pinb_pane_g1_ParamLimits

0x4db6,	// (0x00054244) cell_pinb_pane_g1

0x4dcb,	// (0x00054259) cell_pinb_pane_g2_ParamLimits

0x4dcb,	// (0x00054259) cell_pinb_pane_g2

0xea80,	// (0x0005df0e) cell_pinb_pane_g3_ParamLimits

0xea80,	// (0x0005df0e) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x0005e5c5) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x0005e5c5) cell_pinb_pane_g

0xe7aa,	// (0x0005dc38) grid_highlight_pane_cp01

0x4dd7,	// (0x00054265) list_pinb_item_pane_ParamLimits

0x4dd7,	// (0x00054265) list_pinb_item_pane

0xe7aa,	// (0x0005dc38) list_highlight_pane_cp02

0x4df2,	// (0x00054280) list_pinb_item_pane_g1_ParamLimits

0x4df2,	// (0x00054280) list_pinb_item_pane_g1

0x4dff,	// (0x0005428d) list_pinb_item_pane_g2_ParamLimits

0x4dff,	// (0x0005428d) list_pinb_item_pane_g2

0x4e0b,	// (0x00054299) list_pinb_item_pane_g3_ParamLimits

0x4e0b,	// (0x00054299) list_pinb_item_pane_g3

0x4e1c,	// (0x000542aa) list_pinb_item_pane_g4_ParamLimits

0x4e1c,	// (0x000542aa) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0005e5cc) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0005e5cc) list_pinb_item_pane_g

0x4e28,	// (0x000542b6) list_pinb_item_pane_t1_ParamLimits

0x4e28,	// (0x000542b6) list_pinb_item_pane_t1

0x4e59,	// (0x000542e7) calc_display_pane

0x4e77,	// (0x00054305) calc_paper_pane

0x4e93,	// (0x00054321) grid_calc_pane

0xe7aa,	// (0x0005dc38) bg_list_pane_cp01

0x4ebf,	// (0x0005434d) clock_g1

0x4ec7,	// (0x00054355) clock_g2

0x0001,

0xf147,	// (0x0005e5d5) clock_g

0x4ed1,	// (0x0005435f) clock_t1_ParamLimits

0x4ed1,	// (0x0005435f) clock_t1

0x4ee6,	// (0x00054374) clock_t2_ParamLimits

0x4ee6,	// (0x00054374) clock_t2

0x4ef8,	// (0x00054386) clock_t3_ParamLimits

0x4ef8,	// (0x00054386) clock_t3

0x4f0a,	// (0x00054398) clock_t4_ParamLimits

0x4f0a,	// (0x00054398) clock_t4

0x4f1c,	// (0x000543aa) clock_t5_ParamLimits

0x4f1c,	// (0x000543aa) clock_t5

0x4f31,	// (0x000543bf) clock_t6_ParamLimits

0x4f31,	// (0x000543bf) clock_t6

0x4f43,	// (0x000543d1) clock_t7_ParamLimits

0x4f43,	// (0x000543d1) clock_t7

0x4f55,	// (0x000543e3) clock_t8_ParamLimits

0x4f55,	// (0x000543e3) clock_t8

0x4f6b,	// (0x000543f9) clock_t9_ParamLimits

0x4f6b,	// (0x000543f9) clock_t9

0x0008,

0xf14c,	// (0x0005e5da) clock_t_ParamLimits

0xf14c,	// (0x0005e5da) clock_t

0xea8c,	// (0x0005df1a) popup_clock_analogue_window_cp02

0xea8c,	// (0x0005df1a) popup_clock_digital_window_cp01

0xea94,	// (0x0005df22) listscroll_help_pane

0xe7aa,	// (0x0005dc38) phob_pre_status_pane

0xea9e,	// (0x0005df2c) grid_qdial_pane

0xe7aa,	// (0x0005dc38) listscroll_mce_pane

0xeaa8,	// (0x0005df36) bg_notes_pane

0xeab6,	// (0x0005df44) list_notes_pane

0x4f81,	// (0x0005440f) scroll_pane_cp06

0xeac4,	// (0x0005df52) bg_calc_paper_pane

0x4f90,	// (0x0005441e) list_calc_pane

0xead8,	// (0x0005df66) bg_calc_display_pane

0x4faa,	// (0x00054438) calc_display_pane_t1

0x4fbf,	// (0x0005444d) calc_display_pane_t2

0x4fd4,	// (0x00054462) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0005e5ed) calc_display_pane_t

0x4fe6,	// (0x00054474) cell_calc_pane_ParamLimits

0x4fe6,	// (0x00054474) cell_calc_pane

0xeae4,	// (0x0005df72) bg_calc_paper_pane_g1

0xeaf0,	// (0x0005df7e) bg_calc_paper_pane_g2

0xeafc,	// (0x0005df8a) bg_calc_paper_pane_g3

0xeb08,	// (0x0005df96) bg_calc_paper_pane_g4

0xeb14,	// (0x0005dfa2) bg_calc_paper_pane_g5

0x5015,	// (0x000544a3) bg_calc_paper_pane_g6

0x5026,	// (0x000544b4) bg_calc_paper_pane_g7

0x5037,	// (0x000544c5) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x0005e5f4) bg_calc_paper_pane_g

0x504a,	// (0x000544d8) calc_bg_paper_pane_g9

0x505d,	// (0x000544eb) list_calc_item_pane_ParamLimits

0x505d,	// (0x000544eb) list_calc_item_pane

0xeb20,	// (0x0005dfae) list_calc_item_pane_g1

0x507e,	// (0x0005450c) list_calc_item_pane_t1_ParamLimits

0x507e,	// (0x0005450c) list_calc_item_pane_t1

0x5090,	// (0x0005451e) list_calc_item_pane_t2_ParamLimits

0x5090,	// (0x0005451e) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x0005e605) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x0005e605) list_calc_item_pane_t

0xeb2d,	// (0x0005dfbb) cell_calc_pane_g1

0xeb37,	// (0x0005dfc5) grid_highlight_pane_cp02

0xeb62,	// (0x0005dff0) bg_calc_display_pane_g1

0x50c0,	// (0x0005454e) bg_calc_display_pane_g2

0xeb59,	// (0x0005dfe7) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x0005e60f) bg_calc_display_pane_g

0x50ca,	// (0x00054558) cell_qdial_pane_ParamLimits

0x50ca,	// (0x00054558) cell_qdial_pane

0x50e0,	// (0x0005456e) cell_qdial_pane_g1_ParamLimits

0x50e0,	// (0x0005456e) cell_qdial_pane_g1

0x50ed,	// (0x0005457b) cell_qdial_pane_g2_ParamLimits

0x50ed,	// (0x0005457b) cell_qdial_pane_g2

0xeb6b,	// (0x0005dff9) cell_qdial_pane_g3_ParamLimits

0xeb6b,	// (0x0005dff9) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x0005e616) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x0005e616) cell_qdial_pane_g

0x510b,	// (0x00054599) cell_qdial_pane_t1_ParamLimits

0x510b,	// (0x00054599) cell_qdial_pane_t1

0x5123,	// (0x000545b1) cell_qdial_pane_t2_ParamLimits

0x5123,	// (0x000545b1) cell_qdial_pane_t2

0x5136,	// (0x000545c4) cell_qdial_pane_t3_ParamLimits

0x5136,	// (0x000545c4) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0005e61f) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0005e61f) cell_qdial_pane_t

0xe7aa,	// (0x0005dc38) grid_highlight_pane_cp04

0xeb77,	// (0x0005e005) thumbnail_qdial_pane_ParamLimits

0xeb77,	// (0x0005e005) thumbnail_qdial_pane

0xebd3,	// (0x0005e061) list_help_pane

0xebdc,	// (0x0005e06a) scroll_pane_cp02

0x5149,	// (0x000545d7) help_list_pane_t1_ParamLimits

0x5149,	// (0x000545d7) help_list_pane_t1

0x5170,	// (0x000545fe) bg_notes_pane_g2

0x5178,	// (0x00054606) bg_notes_pane_g3

0x5180,	// (0x0005460e) notes_bg_pane_g1

0x5188,	// (0x00054616) notes_bg_pane_g4

0x5190,	// (0x0005461e) notes_bg_pane_g5

0x5198,	// (0x00054626) notes_bg_pane_g6

0x51a0,	// (0x0005462e) notes_bg_pane_g7

0x51a8,	// (0x00054636) notes_bg_pane_g8

0x51b0,	// (0x0005463e) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0005e63d) notes_bg_pane_g

0x51b8,	// (0x00054646) list_notes_text_pane_ParamLimits

0x51b8,	// (0x00054646) list_notes_text_pane

0xebe5,	// (0x0005e073) list_notes_text_pane_g1

0x51e0,	// (0x0005466e) list_notes_text_pane_t1

0xead8,	// (0x0005df66) listscroll_cale_week_pane

0x520b,	// (0x00054699) bg_cale_heading_pane

0xebff,	// (0x0005e08d) bg_cale_pane_cp01

0x5227,	// (0x000546b5) cale_week_corner_pane

0x523d,	// (0x000546cb) cale_week_day_heading_pane

0x5259,	// (0x000546e7) cale_week_scroll_pane_g1

0x5272,	// (0x00054700) cale_week_scroll_pane_g2

0x5283,	// (0x00054711) cale_week_scroll_pane_g3

0x5294,	// (0x00054722) cale_week_scroll_pane_g4

0x52a5,	// (0x00054733) cale_week_scroll_pane_g5

0x52b6,	// (0x00054744) cale_week_scroll_pane_g6

0x52c9,	// (0x00054757) cale_week_scroll_pane_g7

0x52dc,	// (0x0005476a) cale_week_scroll_pane_g8

0x52ef,	// (0x0005477d) cale_week_scroll_pane_g9

0x5300,	// (0x0005478e) cale_week_scroll_pane_g10

0x5311,	// (0x0005479f) cale_week_scroll_pane_g11

0x5322,	// (0x000547b0) cale_week_scroll_pane_g12

0x5333,	// (0x000547c1) cale_week_scroll_pane_g13

0x5344,	// (0x000547d2) cale_week_scroll_pane_g14

0x535d,	// (0x000547eb) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0005e64c) cale_week_scroll_pane_g

0x5376,	// (0x00054804) cale_week_time_pane

0x5389,	// (0x00054817) grid_cale_week_pane

0x53a6,	// (0x00054834) scroll_pane_cp08

0x53c0,	// (0x0005484e) cell_cale_week_pane_ParamLimits

0x53c0,	// (0x0005484e) cell_cale_week_pane

0x5402,	// (0x00054890) cale_week_day_heading_pane_t1

0x542f,	// (0x000548bd) cale_week_day_heading_pane_t2

0x545c,	// (0x000548ea) cale_week_day_heading_pane_t3

0x5489,	// (0x00054917) cale_week_day_heading_pane_t4

0x54b6,	// (0x00054944) cale_week_day_heading_pane_t5

0x54e3,	// (0x00054971) cale_week_day_heading_pane_t6

0x5510,	// (0x0005499e) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x0005e66b) cale_week_day_heading_pane_t

0xec2a,	// (0x0005e0b8) bg_cale_side_pane

0x553d,	// (0x000549cb) cale_week_time_pane_t1

0x5555,	// (0x000549e3) cale_week_time_pane_t2

0x556d,	// (0x000549fb) cale_week_time_pane_t3

0x5585,	// (0x00054a13) cale_week_time_pane_t4

0x559d,	// (0x00054a2b) cale_week_time_pane_t5

0x55b5,	// (0x00054a43) cale_week_time_pane_t6

0x55cd,	// (0x00054a5b) cale_week_time_pane_t7

0x55e5,	// (0x00054a73) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x0005e67a) cale_week_time_pane_t

0x5601,	// (0x00054a8f) cell_cale_week_pane_g2

0x561a,	// (0x00054aa8) cell_cale_week_pane_g3_ParamLimits

0x561a,	// (0x00054aa8) cell_cale_week_pane_g3

0xec38,	// (0x0005e0c6) grid_highlight_pane_cp07

0xec40,	// (0x0005e0ce) listscroll_gms_pane

0xec4a,	// (0x0005e0d8) grid_gms_pane

0xec53,	// (0x0005e0e1) listscroll_gms_pane_g1

0xec5b,	// (0x0005e0e9) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0005e68b) listscroll_gms_pane_g

0x5632,	// (0x00054ac0) scroll_pane_cp010

0x563d,	// (0x00054acb) cell_gms_pane_ParamLimits

0x563d,	// (0x00054acb) cell_gms_pane

0x5650,	// (0x00054ade) cell_gms_pane_g1

0xec63,	// (0x0005e0f1) cell_gms_pane_g2

0xec6b,	// (0x0005e0f9) cell_gms_pane_g3

0xec74,	// (0x0005e102) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0005e690) cell_gms_pane_g

0xec7d,	// (0x0005e10b) grid_highlight_pane_cp09

0x79c8,	// (0x00056e56) phob_pre_status_pane_g1

0x79d0,	// (0x00056e5e) phob_pre_status_pane_g2

0x79d8,	// (0x00056e66) phob_pre_status_pane_g3

0x79e0,	// (0x00056e6e) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0005ea7f) phob_pre_status_pane_g

0x79f0,	// (0x00056e7e) phob_pre_status_pane_t1

0x7a00,	// (0x00056e8e) phob_pre_status_pane_t2

0x7a10,	// (0x00056e9e) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x0005ea8a) phob_pre_status_pane_t

0xe7aa,	// (0x0005dc38) bg_list_pane_cp05

0x5660,	// (0x00054aee) grid_vorec_pane

0x566c,	// (0x00054afa) vorec_t1

0x567a,	// (0x00054b08) vorec_t2

0x5688,	// (0x00054b16) vorec_t3

0x5696,	// (0x00054b24) vorec_t4

0x56a4,	// (0x00054b32) vorec_t5

0x56b2,	// (0x00054b40) vorec_t6

0x0006,

0xf20b,	// (0x0005e699) vorec_t

0x56ce,	// (0x00054b5c) wait_bar_pane_cp01

0x56d6,	// (0x00054b64) cell_vorec_pane_ParamLimits

0x56d6,	// (0x00054b64) cell_vorec_pane

0xec85,	// (0x0005e113) cell_vorec_pane_g1

0xe7aa,	// (0x0005dc38) grid_highlight_pane_cp05

0x56f9,	// (0x00054b87) cams_zoom_pane

0x5705,	// (0x00054b93) image_vga_pane

0x5714,	// (0x00054ba2) main_camera_pane_g1

0x5722,	// (0x00054bb0) main_camera_pane_g2

0x572e,	// (0x00054bbc) main_camera_pane_g3

0x573c,	// (0x00054bca) main_camera_pane_g4

0x574a,	// (0x00054bd8) main_camera_pane_g5

0x5758,	// (0x00054be6) main_camera_pane_g6

0x5766,	// (0x00054bf4) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0005e6a8) main_camera_pane_g

0x5774,	// (0x00054c02) main_camera_pane_t1

0x5786,	// (0x00054c14) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0005e6b9) main_camera_pane_t

0x57a9,	// (0x00054c37) cams_zoom_pane_cp_ParamLimits

0x57a9,	// (0x00054c37) cams_zoom_pane_cp

0x57cd,	// (0x00054c5b) image_cif_pane_ParamLimits

0x57cd,	// (0x00054c5b) image_cif_pane

0x57eb,	// (0x00054c79) image_subqcif_pane

0x57f5,	// (0x00054c83) main_video_pane_g1_ParamLimits

0x57f5,	// (0x00054c83) main_video_pane_g1

0x5815,	// (0x00054ca3) main_video_pane_g2_ParamLimits

0x5815,	// (0x00054ca3) main_video_pane_g2

0x5845,	// (0x00054cd3) main_video_pane_g3_ParamLimits

0x5845,	// (0x00054cd3) main_video_pane_g3

0x586e,	// (0x00054cfc) main_video_pane_g4_ParamLimits

0x586e,	// (0x00054cfc) main_video_pane_g4

0x5897,	// (0x00054d25) main_video_pane_g5_ParamLimits

0x5897,	// (0x00054d25) main_video_pane_g5

0xec9b,	// (0x0005e129) main_video_pane_g6_ParamLimits

0xec9b,	// (0x0005e129) main_video_pane_g6

0x0006,

0xf230,	// (0x0005e6be) main_video_pane_g_ParamLimits

0xf230,	// (0x0005e6be) main_video_pane_g

0x58b9,	// (0x00054d47) main_video_pane_t1_ParamLimits

0x58b9,	// (0x00054d47) main_video_pane_t1

0xecb5,	// (0x0005e143) cams_zoom_pane_g1

0xecbe,	// (0x0005e14c) cams_zoom_pane_g2

0xecc7,	// (0x0005e155) cams_zoom_pane_g3

0xecd0,	// (0x0005e15e) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0005e6cd) cams_zoom_pane_g

0x5903,	// (0x00054d91) grid_cams_pane

0x5911,	// (0x00054d9f) linegrid_cams_pane

0x591d,	// (0x00054dab) cell_cams_pane_ParamLimits

0x591d,	// (0x00054dab) cell_cams_pane

0xecd9,	// (0x0005e167) cams_burst_image_pane

0xece1,	// (0x0005e16f) cell_cams_pane_g1

0xe7aa,	// (0x0005dc38) grid_highlight_pane_cp03

0xeb2d,	// (0x0005dfbb) mp_bg_pane_g1

0xe7aa,	// (0x0005dc38) bg_list_pane_cp03

0x2696,	// (0x00051b24) bg_mp_pane

0x269e,	// (0x00051b2c) grid_mp_pane

0x26a6,	// (0x00051b34) media_player_g1

0x26b0,	// (0x00051b3e) media_player_t1

0x26be,	// (0x00051b4c) media_player_t2

0x26cc,	// (0x00051b5a) media_player_t3

0x26da,	// (0x00051b68) media_player_t4

0x26e8,	// (0x00051b76) media_player_t5

0x26f6,	// (0x00051b84) media_player_t6

0x2704,	// (0x00051b92) media_player_t7

0x0006,

0xf5db,	// (0x0005ea69) media_player_t

0x2712,	// (0x00051ba0) wait_bar_pane_cp02

0xf5c0,	// (0x0005ea4e) main_usb_pane_t

0x79bf,	// (0x00056e4d) cell_mp_pane

0xeb2d,	// (0x0005dfbb) cell_mp_pane_g1

0xe7aa,	// (0x0005dc38) grid_highlight_pane_cp06

0xeda7,	// (0x0005e235) grid_skin_colour_pane

0xedaf,	// (0x0005e23d) list_highlight_pane_cp03

0x598b,	// (0x00054e19) skin_g1

0xedb7,	// (0x0005e245) skin_t1

0xedc6,	// (0x0005e254) skin_t2

0x0001,

0xf274,	// (0x0005e702) skin_t

0x5995,	// (0x00054e23) cell_skin_colour_pane_ParamLimits

0x5995,	// (0x00054e23) cell_skin_colour_pane

0xedd4,	// (0x0005e262) cell_skin_colour_pane_g1

0x5a15,	// (0x00054ea3) call_video_g1_ParamLimits

0x5a15,	// (0x00054ea3) call_video_g1

0x5a25,	// (0x00054eb3) call_video_g2_ParamLimits

0x5a25,	// (0x00054eb3) call_video_g2

0x0001,

0xf279,	// (0x0005e707) call_video_g_ParamLimits

0xf279,	// (0x0005e707) call_video_g

0x5a75,	// (0x00054f03) call_video_uplink_pane_cp1_ParamLimits

0x5a75,	// (0x00054f03) call_video_uplink_pane_cp1

0xede6,	// (0x0005e274) call_video_uplink_pane_cp2

0x5b43,	// (0x00054fd1) video_down_crop_pane_ParamLimits

0x5b43,	// (0x00054fd1) video_down_crop_pane

0x5c35,	// (0x000550c3) video_down_pane_ParamLimits

0x5c35,	// (0x000550c3) video_down_pane

0xedee,	// (0x0005e27c) video_down_subqcif_pane_ParamLimits

0xedee,	// (0x0005e27c) video_down_subqcif_pane

0xee08,	// (0x0005e296) video_down_subqcif_pane_cp_ParamLimits

0xee08,	// (0x0005e296) video_down_subqcif_pane_cp

0xee30,	// (0x0005e2be) im_reading_pane_ParamLimits

0xee30,	// (0x0005e2be) im_reading_pane

0x5d52,	// (0x000551e0) im_writing_pane_ParamLimits

0x5d52,	// (0x000551e0) im_writing_pane

0x5d70,	// (0x000551fe) im_reading_pane_t1

0xee4a,	// (0x0005e2d8) list_im_pane

0xee5b,	// (0x0005e2e9) scroll_pane_cp07

0x5db2,	// (0x00055240) im_writing_pane_t1_ParamLimits

0x5db2,	// (0x00055240) im_writing_pane_t1

0xee74,	// (0x0005e302) im_writing_pane_t2_ParamLimits

0xee74,	// (0x0005e302) im_writing_pane_t2

0x0001,

0xf283,	// (0x0005e711) im_writing_pane_t_ParamLimits

0xf283,	// (0x0005e711) im_writing_pane_t

0xe7aa,	// (0x0005dc38) input_focus_pane_cp04

0xe7aa,	// (0x0005dc38) input_focus_pane_cp05

0x5dc4,	// (0x00055252) list_im_single_pane_ParamLimits

0x5dc4,	// (0x00055252) list_im_single_pane

0x5ddd,	// (0x0005526b) list_single_im_pane_t1

0x7983,	// (0x00056e11) blid_accuracy_pane

0x798b,	// (0x00056e19) blid_compass_pane

0x7995,	// (0x00056e23) main_location_t1

0x79a3,	// (0x00056e31) main_location_t2

0x79b1,	// (0x00056e3f) main_location_t3

0x0002,

0xf5ea,	// (0x0005ea78) main_location_t

0xe7aa,	// (0x0005dc38) aid_levels_location

0xeb2d,	// (0x0005dfbb) blid_accuracy_pane_g1

0xeb2d,	// (0x0005dfbb) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0005e773) blid_accuracy_pane_g

0xeebc,	// (0x0005e34a) wml_content_pane

0xeefa,	// (0x0005e388) wml_button_pane_ParamLimits

0xeefa,	// (0x0005e388) wml_button_pane

0x5dec,	// (0x0005527a) wml_list_single_large_pane_ParamLimits

0x5dec,	// (0x0005527a) wml_list_single_large_pane

0x5e0e,	// (0x0005529c) wml_list_single_medium_pane_ParamLimits

0x5e0e,	// (0x0005529c) wml_list_single_medium_pane

0x5e31,	// (0x000552bf) wml_list_single_small_pane_ParamLimits

0x5e31,	// (0x000552bf) wml_list_single_small_pane

0xef0e,	// (0x0005e39c) wml_selection_box_pane_ParamLimits

0xef0e,	// (0x0005e39c) wml_selection_box_pane

0xef21,	// (0x0005e3af) wml_list_single_pane_t1

0xef30,	// (0x0005e3be) wml_list_single_medium_pane_t1

0xef3f,	// (0x0005e3cd) wml_list_single_large_pane_t1

0xef4e,	// (0x0005e3dc) input_focus_pane_cp02_ParamLimits

0xef4e,	// (0x0005e3dc) input_focus_pane_cp02

0xef61,	// (0x0005e3ef) wml_selection_box_pane_g1

0xef6a,	// (0x0005e3f8) wml_selection_box_pane_t1_ParamLimits

0xef6a,	// (0x0005e3f8) wml_selection_box_pane_t1

0xea05,	// (0x0005de93) bg_wml_button_pane_ParamLimits

0xea05,	// (0x0005de93) bg_wml_button_pane

0xef82,	// (0x0005e410) wml_button_pane_g1

0xef8a,	// (0x0005e418) wml_button_pane_t1

0xef82,	// (0x0005e410) wml_button_bg_pane_g1

0xef9a,	// (0x0005e428) wml_button_bg_pane_g2

0xefa2,	// (0x0005e430) wml_button_bg_pane_g3

0xefaa,	// (0x0005e438) wml_button_bg_pane_g4

0xefb2,	// (0x0005e440) wml_button_bg_pane_g5

0xefba,	// (0x0005e448) wml_button_bg_pane_g6

0xefc2,	// (0x0005e450) wml_button_bg_pane_g7

0xefca,	// (0x0005e458) wml_button_bg_pane_g8

0xefd2,	// (0x0005e460) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x0005e716) wml_button_bg_pane_g

0x5e59,	// (0x000552e7) bg_list_pane_cp02

0xefda,	// (0x0005e468) mce_header_pane_ParamLimits

0xefda,	// (0x0005e468) mce_header_pane

0xeff0,	// (0x0005e47e) mce_icon_pane

0xeff0,	// (0x0005e47e) mce_image_pane

0xeff9,	// (0x0005e487) mce_text_pane_ParamLimits

0xeff9,	// (0x0005e487) mce_text_pane

0x5e63,	// (0x000552f1) scroll_pane_cp03

0xeef2,	// (0x0005e380) scroll_pane_cp04

0xf00c,	// (0x0005e49a) scroll_pane_cp05_ParamLimits

0xf00c,	// (0x0005e49a) scroll_pane_cp05

0x5e6d,	// (0x000552fb) mce_header_field_pane_ParamLimits

0x5e6d,	// (0x000552fb) mce_header_field_pane

0x5e8f,	// (0x0005531d) mce_header_field_pane_2_ParamLimits

0x5e8f,	// (0x0005531d) mce_header_field_pane_2

0x5ea5,	// (0x00055333) mce_header_field_pane_3

0x5ead,	// (0x0005533b) list_single_mce_message_pane_ParamLimits

0x5ead,	// (0x0005533b) list_single_mce_message_pane

0x5ec6,	// (0x00055354) list_single_mce_smart_pane_ParamLimits

0x5ec6,	// (0x00055354) list_single_mce_smart_pane

0xf018,	// (0x0005e4a6) input_focus_pane_cp03

0xf021,	// (0x0005e4af) list_header_data_pane

0x5eea,	// (0x00055378) mce_header_field_pane_t1

0x5efa,	// (0x00055388) list_single_mce_header_pane_ParamLimits

0x5efa,	// (0x00055388) list_single_mce_header_pane

0xf029,	// (0x0005e4b7) list_single_mce_header_pane_t1

0xf038,	// (0x0005e4c6) list_single_mce_message_pane_g1

0xf040,	// (0x0005e4ce) list_single_mce_message_pane_t1

0x5f30,	// (0x000553be) bg_cale_heading_pane_cp01_ParamLimits

0x5f30,	// (0x000553be) bg_cale_heading_pane_cp01

0xf04e,	// (0x0005e4dc) bg_cale_pane_cp02_ParamLimits

0xf04e,	// (0x0005e4dc) bg_cale_pane_cp02

0x5f63,	// (0x000553f1) cale_month_corner_pane

0x5f79,	// (0x00055407) cale_month_day_heading_pane_ParamLimits

0x5f79,	// (0x00055407) cale_month_day_heading_pane

0x5fbc,	// (0x0005544a) cale_month_pane_g1_ParamLimits

0x5fbc,	// (0x0005544a) cale_month_pane_g1

0x5fe8,	// (0x00055476) cale_month_pane_g2_ParamLimits

0x5fe8,	// (0x00055476) cale_month_pane_g2

0x600b,	// (0x00055499) cale_month_pane_g3_ParamLimits

0x600b,	// (0x00055499) cale_month_pane_g3

0x6047,	// (0x000554d5) cale_month_pane_g4_ParamLimits

0x6047,	// (0x000554d5) cale_month_pane_g4

0x6083,	// (0x00055511) cale_month_pane_g5_ParamLimits

0x6083,	// (0x00055511) cale_month_pane_g5

0x60bf,	// (0x0005554d) cale_month_pane_g6_ParamLimits

0x60bf,	// (0x0005554d) cale_month_pane_g6

0x610b,	// (0x00055599) cale_month_pane_g7_ParamLimits

0x610b,	// (0x00055599) cale_month_pane_g7

0x6157,	// (0x000555e5) cale_month_pane_g8_ParamLimits

0x6157,	// (0x000555e5) cale_month_pane_g8

0x61a3,	// (0x00055631) cale_month_pane_g9_ParamLimits

0x61a3,	// (0x00055631) cale_month_pane_g9

0x61dd,	// (0x0005566b) cale_month_pane_g10_ParamLimits

0x61dd,	// (0x0005566b) cale_month_pane_g10

0x6217,	// (0x000556a5) cale_month_pane_g11_ParamLimits

0x6217,	// (0x000556a5) cale_month_pane_g11

0x6251,	// (0x000556df) cale_month_pane_g12_ParamLimits

0x6251,	// (0x000556df) cale_month_pane_g12

0x628f,	// (0x0005571d) cale_month_pane_g13_ParamLimits

0x628f,	// (0x0005571d) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0005e729) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0005e729) cale_month_pane_g

0x62cd,	// (0x0005575b) cale_month_week_pane

0x62e0,	// (0x0005576e) grid_cale_month_pane_ParamLimits

0x62e0,	// (0x0005576e) grid_cale_month_pane

0x631e,	// (0x000557ac) cale_month_day_heading_pane_t1

0x637c,	// (0x0005580a) cale_month_day_heading_pane_t2

0x63e1,	// (0x0005586f) cale_month_day_heading_pane_t3

0x6446,	// (0x000558d4) cale_month_day_heading_pane_t4

0x64ab,	// (0x00055939) cale_month_day_heading_pane_t5

0x6518,	// (0x000559a6) cale_month_day_heading_pane_t6

0x658d,	// (0x00055a1b) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x0005e744) cale_month_day_heading_pane_t

0xec2a,	// (0x0005e0b8) bg_cale_side_pane_cp01

0x6602,	// (0x00055a90) cale_month_week_pane_t1

0x6619,	// (0x00055aa7) cale_month_week_pane_t2

0x6630,	// (0x00055abe) cale_month_week_pane_t3

0x6647,	// (0x00055ad5) cale_month_week_pane_t4

0x665e,	// (0x00055aec) cale_month_week_pane_t5

0x6675,	// (0x00055b03) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0005e753) cale_month_week_pane_t

0x668c,	// (0x00055b1a) cell_cale_month_pane_ParamLimits

0x668c,	// (0x00055b1a) cell_cale_month_pane

0x675a,	// (0x00055be8) cell_cale_month_pane_g1

0x6766,	// (0x00055bf4) cell_cale_month_pane_t1_ParamLimits

0x6766,	// (0x00055bf4) cell_cale_month_pane_t1

0xec38,	// (0x0005e0c6) grid_highlight_pane_cp08

0xeb2d,	// (0x0005dfbb) main_smil_g1

0x6782,	// (0x00055c10) smil_status_pane

0xf0ad,	// (0x0005e53b) smil_text_pane

0x25b4,	// (0x00051a42) bg_popup_call3_rect_pane_g8

0x25bc,	// (0x00051a4a) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0005ea0c) bg_popup_call3_rect_pane_g

0x2821,	// (0x00051caf) smil_status_volume_pane_g1

0xf0b7,	// (0x0005e545) smil_status_pane_t1

0x7db5,	// (0x00057243) volume_smil_pane

0xf0ce,	// (0x0005e55c) list_smil_text_pane

0x6795,	// (0x00055c23) scroll_pane_cp011

0x67a0,	// (0x00055c2e) smil_text_list_pane_t1_ParamLimits

0x67a0,	// (0x00055c2e) smil_text_list_pane_t1

0x67f4,	// (0x00055c82) aid_volume_smil_ParamLimits

0x67f4,	// (0x00055c82) aid_volume_smil

0xeb2d,	// (0x0005dfbb) smil_volume_pane_g1

0xeb2d,	// (0x0005dfbb) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0005e773) smil_volume_pane_g

0xead8,	// (0x0005df66) listscroll_cale_day_pane

0x0014,	// (0x0004f4a2) bg_cale_pane

0x002c,	// (0x0004f4ba) list_cale_pane

0x003d,	// (0x0004f4cb) scroll_pane_cp09

0x004e,	// (0x0004f4dc) cale_bg_pane_g1

0x0056,	// (0x0004f4e4) cale_bg_pane_g2

0x005e,	// (0x0004f4ec) cale_bg_pane_g3

0x0066,	// (0x0004f4f4) cale_bg_pane_g4

0x006e,	// (0x0004f4fc) cale_bg_pane_g5

0x0076,	// (0x0004f504) cale_bg_pane_g6

0x007e,	// (0x0004f50c) cale_bg_pane_g7

0x0086,	// (0x0004f514) cale_bg_pane_g8

0x008e,	// (0x0004f51c) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x0005e778) cale_bg_pane_g

0x6816,	// (0x00055ca4) list_cale_time_pane_ParamLimits

0x6816,	// (0x00055ca4) list_cale_time_pane

0x682b,	// (0x00055cb9) list_cale_time_pane_g1_ParamLimits

0x682b,	// (0x00055cb9) list_cale_time_pane_g1

0x0096,	// (0x0004f524) list_cale_time_pane_g2_ParamLimits

0x0096,	// (0x0004f524) list_cale_time_pane_g2

0x6837,	// (0x00055cc5) list_cale_time_pane_g3_ParamLimits

0x6837,	// (0x00055cc5) list_cale_time_pane_g3

0x6845,	// (0x00055cd3) list_cale_time_pane_g4_ParamLimits

0x6845,	// (0x00055cd3) list_cale_time_pane_g4

0x6853,	// (0x00055ce1) list_cale_time_pane_g5_ParamLimits

0x6853,	// (0x00055ce1) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0005e78b) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0005e78b) list_cale_time_pane_g

0x6861,	// (0x00055cef) list_cale_time_pane_t1_ParamLimits

0x6861,	// (0x00055cef) list_cale_time_pane_t1

0x6889,	// (0x00055d17) list_cale_time_pane_t2_ParamLimits

0x6889,	// (0x00055d17) list_cale_time_pane_t2

0x6c1d,	// (0x000560ab) aid_blid_cardinal_pane

0x6c5f,	// (0x000560ed) compass_pane_t4

0x68b1,	// (0x00055d3f) list_cale_time_pane_t4_ParamLimits

0x68b1,	// (0x00055d3f) list_cale_time_pane_t4

0x6c6d,	// (0x000560fb) compass_pane_t5

0x6c7d,	// (0x0005610b) compass_pane_t6

0x6c8b,	// (0x00056119) compass_pane_t7

0x129e,	// (0x0005072c) navi_pane_cc_t1

0x13f3,	// (0x00050881) aid_phob_thumbnail_center_pane

0x747f,	// (0x0005690d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0005e798) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0005e798) list_cale_time_pane_t

0xe3f3,	// (0x0005d881) bg_popup_window_pane_cp02_ParamLimits

0xe3f3,	// (0x0005d881) bg_popup_window_pane_cp02

0x00b0,	// (0x0004f53e) heading_pane_cp01_ParamLimits

0x00b0,	// (0x0004f53e) heading_pane_cp01

0x00bc,	// (0x0004f54a) loc_req_pane_ParamLimits

0x00bc,	// (0x0004f54a) loc_req_pane

0x00cc,	// (0x0004f55a) loc_type_pane_ParamLimits

0x00cc,	// (0x0004f55a) loc_type_pane

0x00de,	// (0x0004f56c) loc_type_pane_t1_ParamLimits

0x00de,	// (0x0004f56c) loc_type_pane_t1

0x00f0,	// (0x0004f57e) loc_type_pane_t2_ParamLimits

0x00f0,	// (0x0004f57e) loc_type_pane_t2

0x0102,	// (0x0004f590) loc_type_pane_t3_ParamLimits

0x0102,	// (0x0004f590) loc_type_pane_t3

0x0002,

0xf311,	// (0x0005e79f) loc_type_pane_t_ParamLimits

0xf311,	// (0x0005e79f) loc_type_pane_t

0x0114,	// (0x0004f5a2) list_loc_req_pane

0x011e,	// (0x0004f5ac) scroll_pane_cp012

0x68d9,	// (0x00055d67) list_single_loc_request_popup_menu_pane_ParamLimits

0x68d9,	// (0x00055d67) list_single_loc_request_popup_menu_pane

0x0129,	// (0x0004f5b7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0129,	// (0x0004f5b7) list_single_loc_request_popup_menu_pane_g1

0x0135,	// (0x0004f5c3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0135,	// (0x0004f5c3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x0005e7a6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x0005e7a6) list_single_loc_request_popup_menu_pane_g

0x0141,	// (0x0004f5cf) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0141,	// (0x0004f5cf) list_single_loc_request_popup_menu_pane_t1

0x68eb,	// (0x00055d79) bg_popup_window_pane_cp03_ParamLimits

0x68eb,	// (0x00055d79) bg_popup_window_pane_cp03

0x68f9,	// (0x00055d87) heading_loc_req_pane_ParamLimits

0x68f9,	// (0x00055d87) heading_loc_req_pane

0x6905,	// (0x00055d93) popup_dyc_status_message_window_g1_ParamLimits

0x6905,	// (0x00055d93) popup_dyc_status_message_window_g1

0x6911,	// (0x00055d9f) popup_dyc_status_message_window_t1_ParamLimits

0x6911,	// (0x00055d9f) popup_dyc_status_message_window_t1

0x6923,	// (0x00055db1) popup_dyc_status_message_window_t2_ParamLimits

0x6923,	// (0x00055db1) popup_dyc_status_message_window_t2

0x6935,	// (0x00055dc3) popup_dyc_status_message_window_t3_ParamLimits

0x6935,	// (0x00055dc3) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0005e7ab) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0005e7ab) popup_dyc_status_message_window_t

0xe7aa,	// (0x0005dc38) bg_heading_pane_cp01

0x0163,	// (0x0004f5f1) heading_loc_req_pane_g1

0x016b,	// (0x0004f5f9) heading_loc_req_pane_g2

0x0173,	// (0x0004f601) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0005e7b2) heading_loc_req_pane_g

0x017b,	// (0x0004f609) heading_loc_req_pane_t1

0x0202,	// (0x0004f690) bg_popup_sub_pane_cp01_ParamLimits

0x0202,	// (0x0004f690) bg_popup_sub_pane_cp01

0x0210,	// (0x0004f69e) popup_cale_events_window_g1_ParamLimits

0x0210,	// (0x0004f69e) popup_cale_events_window_g1

0x0230,	// (0x0004f6be) popup_cale_events_window_g2_ParamLimits

0x0230,	// (0x0004f6be) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x0005e7e6) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x0005e7e6) popup_cale_events_window_g

0x0250,	// (0x0004f6de) popup_cale_events_window_t1_ParamLimits

0x0250,	// (0x0004f6de) popup_cale_events_window_t1

0x0262,	// (0x0004f6f0) popup_cale_events_window_t2_ParamLimits

0x0262,	// (0x0004f6f0) popup_cale_events_window_t2

0x02a0,	// (0x0004f72e) popup_cale_events_window_t3_ParamLimits

0x02a0,	// (0x0004f72e) popup_cale_events_window_t3

0x02da,	// (0x0004f768) popup_cale_events_window_t4_ParamLimits

0x02da,	// (0x0004f768) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0005e7eb) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0005e7eb) popup_cale_events_window_t

0x69b9,	// (0x00055e47) call_type_pane

0x140b,	// (0x00050899) popup_call_status_window_g1

0x69c5,	// (0x00055e53) popup_call_status_window_g2

0x69d1,	// (0x00055e5f) popup_call_status_window_g3

0x0002,

0xf366,	// (0x0005e7f4) popup_call_status_window_g

0x0310,	// (0x0004f79e) call_type_pane_g1

0x0319,	// (0x0004f7a7) call_type_pane_g2

0x0001,

0xf36d,	// (0x0005e7fb) call_type_pane_g

0xe7aa,	// (0x0005dc38) bg_popup_sub_pane_cp02

0x0322,	// (0x0004f7b0) listscroll_popup_wml_pane

0x032a,	// (0x0004f7b8) list_wml_pane

0x0334,	// (0x0004f7c2) scroll_pane_cp013

0x033f,	// (0x0004f7cd) list_single_graphic_popup_wml_pane_ParamLimits

0x033f,	// (0x0004f7cd) list_single_graphic_popup_wml_pane

0xeb2d,	// (0x0005dfbb) list_single_graphic_popup_wml_pane_g1

0x0353,	// (0x0004f7e1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0005e800) list_single_graphic_popup_wml_pane_g

0x035b,	// (0x0004f7e9) list_single_graphic_popup_wml_pane_t1

0x0369,	// (0x0004f7f7) aid_call_pane

0xe9fd,	// (0x0005de8b) popup_clock_analogue_window_g1

0xe9fd,	// (0x0005de8b) popup_clock_analogue_window_g2

0x69dd,	// (0x00055e6b) popup_clock_analogue_window_g3

0x69dd,	// (0x00055e6b) popup_clock_analogue_window_g4

0xeb2d,	// (0x0005dfbb) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x0005e805) popup_clock_analogue_window_g

0x69e5,	// (0x00055e73) popup_clock_analogue_window_t1

0x69f3,	// (0x00055e81) clock_digital_number_pane_ParamLimits

0x69f3,	// (0x00055e81) clock_digital_number_pane

0x69ff,	// (0x00055e8d) clock_digital_number_pane_cp02_ParamLimits

0x69ff,	// (0x00055e8d) clock_digital_number_pane_cp02

0x6a0b,	// (0x00055e99) clock_digital_number_pane_cp03_ParamLimits

0x6a0b,	// (0x00055e99) clock_digital_number_pane_cp03

0x6a17,	// (0x00055ea5) clock_digital_number_pane_cp04_ParamLimits

0x6a17,	// (0x00055ea5) clock_digital_number_pane_cp04

0x6a23,	// (0x00055eb1) clock_digital_separator_pane_ParamLimits

0x6a23,	// (0x00055eb1) clock_digital_separator_pane

0x6a2f,	// (0x00055ebd) popup_clock_digital_window_t1

0xeb2d,	// (0x0005dfbb) clock_digital_number_pane_g1

0xeb2d,	// (0x0005dfbb) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0005e773) clock_digital_number_pane_g

0xeb2d,	// (0x0005dfbb) clock_digital_separator_pane_g1

0xeb2d,	// (0x0005dfbb) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0005e773) clock_digital_separator_pane_g

0xe7aa,	// (0x0005dc38) bg_popup_window_pane_cp04

0x10fe,	// (0x0005058c) heading_pane_cp03

0x1106,	// (0x00050594) listscroll_popup_gms_pane

0x110e,	// (0x0005059c) grid_large_graphic_popup_pane

0x1118,	// (0x000505a6) listscroll_popup_gms_pane_g1

0x1120,	// (0x000505ae) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0005e810) listscroll_popup_gms_pane_g

0xeef2,	// (0x0005e380) scroll_pane_cp014

0x6a4c,	// (0x00055eda) cell_large_graphic_popup_pane_ParamLimits

0x6a4c,	// (0x00055eda) cell_large_graphic_popup_pane

0x6a66,	// (0x00055ef4) cell_large_graphic_popup_pane_g1_ParamLimits

0x6a66,	// (0x00055ef4) cell_large_graphic_popup_pane_g1

0x1128,	// (0x000505b6) cell_large_graphic_popup_pane_g2_ParamLimits

0x1128,	// (0x000505b6) cell_large_graphic_popup_pane_g2

0x1134,	// (0x000505c2) cell_large_graphic_popup_pane_g3_ParamLimits

0x1134,	// (0x000505c2) cell_large_graphic_popup_pane_g3

0x1141,	// (0x000505cf) cell_large_graphic_popup_pane_g4_ParamLimits

0x1141,	// (0x000505cf) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x0005e815) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x0005e815) cell_large_graphic_popup_pane_g

0x1151,	// (0x000505df) grid_highlight_pane_cp010

0xeb2d,	// (0x0005dfbb) bg_popup_call_pane_g1

0x115b,	// (0x000505e9) list_single_graphic_popup_conf_pane_ParamLimits

0x115b,	// (0x000505e9) list_single_graphic_popup_conf_pane

0x116d,	// (0x000505fb) list_highlight_pane_cp01

0x1176,	// (0x00050604) list_single_graphic_popup_conf_pane_g1

0x117e,	// (0x0005060c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0005e81e) list_single_graphic_popup_conf_pane_g

0x1186,	// (0x00050614) list_single_graphic_popup_conf_pane_t1

0x1194,	// (0x00050622) linegrid_cams_pane_g1

0x6a72,	// (0x00055f00) linegrid_cams_pane_g2

0xec6b,	// (0x0005e0f9) linegrid_cams_pane_g3

0x119d,	// (0x0005062b) linegrid_cams_pane_g4

0x6a7b,	// (0x00055f09) linegrid_cams_pane_g5

0x6a84,	// (0x00055f12) linegrid_cams_pane_g6

0xec74,	// (0x0005e102) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x0005e823) linegrid_cams_pane_g

0x11a6,	// (0x00050634) popup_clock_analogue_window

0x11a6,	// (0x00050634) popup_clock_digital_window

0xe7aa,	// (0x0005dc38) popup_phob_thumbnail_window

0xeb2d,	// (0x0005dfbb) call_video_uplink_pane_g1

0x11af,	// (0x0005063d) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0005e832) call_video_uplink_pane_g

0x11b7,	// (0x00050645) video_uplink_pane

0x11bf,	// (0x0005064d) mce_image_pane_g1

0x6a8f,	// (0x00055f1d) mce_image_pane_g2

0x6a99,	// (0x00055f27) mce_image_pane_g3

0x6aa3,	// (0x00055f31) mce_image_pane_g4

0x6aab,	// (0x00055f39) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0005e837) mce_image_pane_g

0x11c9,	// (0x00050657) control_top_pane_stacon_cp01_ParamLimits

0x11c9,	// (0x00050657) control_top_pane_stacon_cp01

0x11dd,	// (0x0005066b) uni_indicator_pane_stacon_cp01_ParamLimits

0x11dd,	// (0x0005066b) uni_indicator_pane_stacon_cp01

0x11ee,	// (0x0005067c) bg_popup_sub_pane_cp03

0x6ab3,	// (0x00055f41) chi_dic_find_pane

0x6abb,	// (0x00055f49) listscroll_chi_dic_pane

0x6ac4,	// (0x00055f52) main_pane_chidic_g1

0x6ad7,	// (0x00055f65) chi_dic_find_pane_t1

0x11f8,	// (0x00050686) find_chidic_pane

0x1201,	// (0x0005068f) chi_dic_list_pane_ParamLimits

0x1201,	// (0x0005068f) chi_dic_list_pane

0x1212,	// (0x000506a0) scroll_pane_cp020

0x6ae5,	// (0x00055f73) find_chidic_pane_t1

0xe7aa,	// (0x0005dc38) input_focus_pane_cp06

0x6af4,	// (0x00055f82) list_chi_dic_pane_ParamLimits

0x6af4,	// (0x00055f82) list_chi_dic_pane

0x6b09,	// (0x00055f97) list_chi_dic_pane_t1_ParamLimits

0x6b09,	// (0x00055f97) list_chi_dic_pane_t1

0xe7aa,	// (0x0005dc38) list_highlight_pane_cp020

0x121a,	// (0x000506a8) bg_cale_heading_pane_g1

0x6b1c,	// (0x00055faa) bg_cale_heading_pane_g2

0x6b24,	// (0x00055fb2) bg_cale_heading_pane_g3

0x6b2c,	// (0x00055fba) bg_cale_heading_pane_g4

0x6b36,	// (0x00055fc4) bg_cale_heading_pane_g5

0x6b40,	// (0x00055fce) bg_cale_heading_pane_g6

0x6b48,	// (0x00055fd6) bg_cale_heading_pane_g7

0x6b50,	// (0x00055fde) bg_cale_heading_pane_g8

0x6b5a,	// (0x00055fe8) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0005e842) bg_cale_heading_pane_g

0x121a,	// (0x000506a8) bg_cale_side_pane_g1

0x6b64,	// (0x00055ff2) bg_cale_side_pane_g2

0x6b6e,	// (0x00055ffc) bg_cale_side_pane_g3

0x6b78,	// (0x00056006) bg_cale_side_pane_g4

0x6b82,	// (0x00056010) bg_cale_side_pane_g5

0x6b8c,	// (0x0005601a) bg_cale_side_pane_g6

0x6b96,	// (0x00056024) bg_cale_side_pane_g7

0x6ba0,	// (0x0005602e) bg_cale_side_pane_g8

0x6ba8,	// (0x00056036) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x0005e855) bg_cale_side_pane_g

0x6bb0,	// (0x0005603e) popup_call_status_window_ParamLimits

0x6bb0,	// (0x0005603e) popup_call_status_window

0x1222,	// (0x000506b0) stacon_top_pane

0x122a,	// (0x000506b8) status_pane_ParamLimits

0x122a,	// (0x000506b8) status_pane

0x123f,	// (0x000506cd) status_small_pane

0x1247,	// (0x000506d5) control_pane

0xe7aa,	// (0x0005dc38) stacon_bottom_pane

0x124f,	// (0x000506dd) list_single_mce_smart_pane_t1_ParamLimits

0x124f,	// (0x000506dd) list_single_mce_smart_pane_t1

0x1262,	// (0x000506f0) list_single_mce_smart_pane_t2_ParamLimits

0x1262,	// (0x000506f0) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x0005e868) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x0005e868) list_single_mce_smart_pane_t

0x6bbc,	// (0x0005604a) compass_pane

0x6bc7,	// (0x00056055) main_location2_pane_t1

0x6bdd,	// (0x0005606b) main_location2_pane_t2

0x6bf3,	// (0x00056081) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0005e86d) main_location2_pane_t

0x1281,	// (0x0005070f) compass_pane_g1_ParamLimits

0x1281,	// (0x0005070f) compass_pane_g1

0x6c41,	// (0x000560cf) compass_pane_t1

0x6c50,	// (0x000560de) compass_pane_t2

0x0005,

0xf3e8,	// (0x0005e876) compass_pane_t

0x6c9b,	// (0x00056129) text_secondary_cp61

0x1295,	// (0x00050723) navi_pane_cams_g5

0x12b8,	// (0x00050746) navi_pane_im_t1

0x12c6,	// (0x00050754) navi_pane_mp_g1_ParamLimits

0x12c6,	// (0x00050754) navi_pane_mp_g1

0x12da,	// (0x00050768) navi_pane_mp_g2_ParamLimits

0x12da,	// (0x00050768) navi_pane_mp_g2

0x12e6,	// (0x00050774) navi_pane_mp_g3_ParamLimits

0x12e6,	// (0x00050774) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x0005e88a) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x0005e88a) navi_pane_mp_g

0x12f2,	// (0x00050780) navi_pane_mp_t1

0x1300,	// (0x0005078e) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0005e891) navi_pane_mp_t

0x133c,	// (0x000507ca) navi_pane_vt_g1

0x12f2,	// (0x00050780) navi_pane_vt_t1

0x1344,	// (0x000507d2) navi_slider_pane

0x134c,	// (0x000507da) zooming_pane

0x1354,	// (0x000507e2) navi_slider_pane_g1

0x6dc8,	// (0x00056256) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0005e898) navi_slider_pane_g

0x1378,	// (0x00050806) aid_levels_zoom

0x1380,	// (0x0005080e) zooming_pane_g1

0x1388,	// (0x00050816) zooming_pane_g2

0x1388,	// (0x00050816) zooming_pane_g3

0x0002,

0xf419,	// (0x0005e8a7) zooming_pane_g

0x1390,	// (0x0005081e) level_10_zoom

0x1399,	// (0x00050827) level_11_zoom

0x13a2,	// (0x00050830) level_1_zoom

0x13ab,	// (0x00050839) level_2_zoom

0x13b4,	// (0x00050842) level_3_zoom

0x13bd,	// (0x0005084b) level_4_zoom

0x13c6,	// (0x00050854) level_5_zoom

0x13cf,	// (0x0005085d) level_6_zoom

0x13d8,	// (0x00050866) level_7_zoom

0x13e1,	// (0x0005086f) level_8_zoom

0x13ea,	// (0x00050878) level_9_zoom

0x13fb,	// (0x00050889) popup_phob_thumbnail_window_g1

0x1403,	// (0x00050891) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0005e8ae) popup_phob_thumbnail_window_g

0x271a,	// (0x00051ba8) level_1_location

0x2722,	// (0x00051bb0) level_2_location

0x272a,	// (0x00051bb8) level_3_location

0x2732,	// (0x00051bc0) level_4_location

0x134c,	// (0x000507da) level_5_location

0x6dda,	// (0x00056268) mce_icon_pane_g1

0x6de2,	// (0x00056270) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0005e8b3) mce_icon_pane_g

0x6dea,	// (0x00056278) main_mup_pane_g1_ParamLimits

0x6dea,	// (0x00056278) main_mup_pane_g1

0x6e02,	// (0x00056290) main_mup_pane_g2_ParamLimits

0x6e02,	// (0x00056290) main_mup_pane_g2

0x6e1e,	// (0x000562ac) main_mup_pane_g3_ParamLimits

0x6e1e,	// (0x000562ac) main_mup_pane_g3

0x6e3a,	// (0x000562c8) main_mup_pane_g4_ParamLimits

0x6e3a,	// (0x000562c8) main_mup_pane_g4

0x6e4e,	// (0x000562dc) main_mup_pane_g5_ParamLimits

0x6e4e,	// (0x000562dc) main_mup_pane_g5

0x6e6f,	// (0x000562fd) main_mup_pane_g6_ParamLimits

0x6e6f,	// (0x000562fd) main_mup_pane_g6

0x6e8f,	// (0x0005631d) main_mup_pane_g7_ParamLimits

0x6e8f,	// (0x0005631d) main_mup_pane_g7

0x6eb3,	// (0x00056341) main_mup_pane_g8_ParamLimits

0x6eb3,	// (0x00056341) main_mup_pane_g8

0x6ed7,	// (0x00056365) main_mup_pane_g9_ParamLimits

0x6ed7,	// (0x00056365) main_mup_pane_g9

0x6efa,	// (0x00056388) main_mup_pane_g10_ParamLimits

0x6efa,	// (0x00056388) main_mup_pane_g10

0x6f1d,	// (0x000563ab) main_mup_pane_g11_ParamLimits

0x6f1d,	// (0x000563ab) main_mup_pane_g11

0x6f3d,	// (0x000563cb) main_mup_pane_g12_ParamLimits

0x6f3d,	// (0x000563cb) main_mup_pane_g12

0x6f4b,	// (0x000563d9) main_mup_pane_g13_ParamLimits

0x6f4b,	// (0x000563d9) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0005e8b8) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0005e8b8) main_mup_pane_g

0x6f61,	// (0x000563ef) main_mup_pane_t1_ParamLimits

0x6f61,	// (0x000563ef) main_mup_pane_t1

0x6f80,	// (0x0005640e) main_mup_pane_t2_ParamLimits

0x6f80,	// (0x0005640e) main_mup_pane_t2

0x6f9a,	// (0x00056428) main_mup_pane_t3_ParamLimits

0x6f9a,	// (0x00056428) main_mup_pane_t3

0x6fb4,	// (0x00056442) main_mup_pane_t4_ParamLimits

0x6fb4,	// (0x00056442) main_mup_pane_t4

0x6fc6,	// (0x00056454) main_mup_pane_t5_ParamLimits

0x6fc6,	// (0x00056454) main_mup_pane_t5

0x6fd8,	// (0x00056466) main_mup_pane_t6_ParamLimits

0x6fd8,	// (0x00056466) main_mup_pane_t6

0x0005,

0xf445,	// (0x0005e8d3) main_mup_pane_t_ParamLimits

0xf445,	// (0x0005e8d3) main_mup_pane_t

0x6fee,	// (0x0005647c) mup_progress_pane_ParamLimits

0x6fee,	// (0x0005647c) mup_progress_pane

0x6ffa,	// (0x00056488) mup_visualizer_pane_ParamLimits

0x6ffa,	// (0x00056488) mup_visualizer_pane

0x7034,	// (0x000564c2) mup_volume_pane_ParamLimits

0x7034,	// (0x000564c2) mup_volume_pane

0x140b,	// (0x00050899) mup_visualizer_pane_g1_ParamLimits

0x140b,	// (0x00050899) mup_visualizer_pane_g1

0x140b,	// (0x00050899) mup_visualizer_pane_g2_ParamLimits

0x140b,	// (0x00050899) mup_visualizer_pane_g2

0x1281,	// (0x0005070f) mup_visualizer_pane_g3_ParamLimits

0x1281,	// (0x0005070f) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0005e8e0) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0005e8e0) mup_visualizer_pane_g

0xeb2d,	// (0x0005dfbb) mup_volume_pane_g1

0x1421,	// (0x000508af) mup_volume_pane_g2

0x0001,

0xf459,	// (0x0005e8e7) mup_volume_pane_g

0xeb2d,	// (0x0005dfbb) mup_progress_pane_g1

0x142a,	// (0x000508b8) mup_progress_pane_g2

0x1433,	// (0x000508c1) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0005e8ec) mup_progress_pane_g

0xe7aa,	// (0x0005dc38) bg_popup_window_pane_cp05

0x143c,	// (0x000508ca) heading_pane_cp02_ParamLimits

0x143c,	// (0x000508ca) heading_pane_cp02

0x1458,	// (0x000508e6) list_popup_blid_pane

0x1460,	// (0x000508ee) list_blid_sat_info_pane_ParamLimits

0x1460,	// (0x000508ee) list_blid_sat_info_pane

0x1473,	// (0x00050901) list_blid_sat_info_pane_g1

0x147b,	// (0x00050909) list_blid_sat_info_pane_t1

0x7153,	// (0x000565e1) mup_equalizer_pane_ParamLimits

0x7153,	// (0x000565e1) mup_equalizer_pane

0x7174,	// (0x00056602) mup_equalizer_pane_cp1_ParamLimits

0x7174,	// (0x00056602) mup_equalizer_pane_cp1

0x7195,	// (0x00056623) mup_equalizer_pane_cp2_ParamLimits

0x7195,	// (0x00056623) mup_equalizer_pane_cp2

0x71b6,	// (0x00056644) mup_equalizer_pane_cp3_ParamLimits

0x71b6,	// (0x00056644) mup_equalizer_pane_cp3

0x71db,	// (0x00056669) mup_equalizer_pane_cp4_ParamLimits

0x71db,	// (0x00056669) mup_equalizer_pane_cp4

0x7200,	// (0x0005668e) mup_equalizer_pane_cp5

0x7218,	// (0x000566a6) mup_equalizer_pane_cp6

0x7230,	// (0x000566be) mup_equalizer_pane_cp7

0x2634,	// (0x00051ac2) bg_popup_call_poc_act_pane_g9

0x263c,	// (0x00051aca) bg_popup_call_poc_act_pane_g10

0x2644,	// (0x00051ad2) bg_popup_call_poc_act_pane_g11

0x000a,

0xea05,	// (0x0005de93) mup_scale_pane

0xeb2d,	// (0x0005dfbb) mup_scale_pane_g1

0x1489,	// (0x00050917) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0005e908) mup_scale_pane_g

0x14ad,	// (0x0005093b) msg_data_pane

0x14b5,	// (0x00050943) scroll_pane_cp017

0x725a,	// (0x000566e8) bg_list_pane_cp04_ParamLimits

0x725a,	// (0x000566e8) bg_list_pane_cp04

0x14bd,	// (0x0005094b) msg_data_pane_g1

0x7282,	// (0x00056710) msg_data_pane_g2

0x728c,	// (0x0005671a) msg_data_pane_g3

0x7296,	// (0x00056724) msg_data_pane_g4

0x729e,	// (0x0005672c) msg_data_pane_g5

0x72a6,	// (0x00056734) msg_data_pane_g6

0x72ae,	// (0x0005673c) msg_data_pane_g7

0x0006,

0xf489,	// (0x0005e917) msg_data_pane_g

0x72b6,	// (0x00056744) msg_text_pane_ParamLimits

0x72b6,	// (0x00056744) msg_text_pane

0x72de,	// (0x0005676c) qrid_highlight_pane_cp011_ParamLimits

0x72de,	// (0x0005676c) qrid_highlight_pane_cp011

0xe7aa,	// (0x0005dc38) msg_body_pane

0xe7aa,	// (0x0005dc38) msg_header_pane

0x14ce,	// (0x0005095c) input_focus_pane_cp07

0x7302,	// (0x00056790) msg_header_pane_t1_ParamLimits

0x7302,	// (0x00056790) msg_header_pane_t1

0x7316,	// (0x000567a4) msg_header_pane_t2_ParamLimits

0x7316,	// (0x000567a4) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0005e92b) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0005e92b) msg_header_pane_t

0x14e3,	// (0x00050971) msg_body_pane_g1

0x7328,	// (0x000567b6) msg_body_pane_t1_ParamLimits

0x7328,	// (0x000567b6) msg_body_pane_t1

0x7359,	// (0x000567e7) msg_body_pane_t2_ParamLimits

0x7359,	// (0x000567e7) msg_body_pane_t2

0x736b,	// (0x000567f9) msg_body_pane_t3_ParamLimits

0x736b,	// (0x000567f9) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0005e930) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0005e930) msg_body_pane_t

0x73cf,	// (0x0005685d) main_viewer_pane_g1_ParamLimits

0x73cf,	// (0x0005685d) main_viewer_pane_g1

0x73db,	// (0x00056869) main_viewer_pane_g2_ParamLimits

0x73db,	// (0x00056869) main_viewer_pane_g2

0x73e7,	// (0x00056875) main_viewer_pane_g3_ParamLimits

0x73e7,	// (0x00056875) main_viewer_pane_g3

0x73f8,	// (0x00056886) main_viewer_pane_g4_ParamLimits

0x73f8,	// (0x00056886) main_viewer_pane_g4

0x7409,	// (0x00056897) main_viewer_pane_g5_ParamLimits

0x7409,	// (0x00056897) main_viewer_pane_g5

0x7409,	// (0x00056897) main_viewer_pane_g7_ParamLimits

0x7409,	// (0x00056897) main_viewer_pane_g7

0x741b,	// (0x000568a9) main_viewer_pane_g8_ParamLimits

0x741b,	// (0x000568a9) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0005e940) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0005e940) main_viewer_pane_g

0x14eb,	// (0x00050979) viewer_content_pane_ParamLimits

0x14eb,	// (0x00050979) viewer_content_pane

0x7453,	// (0x000568e1) main_postcard_pane_g1_ParamLimits

0x7453,	// (0x000568e1) main_postcard_pane_g1

0x7461,	// (0x000568ef) main_postcard_pane_g2_ParamLimits

0x7461,	// (0x000568ef) main_postcard_pane_g2

0x746f,	// (0x000568fd) main_postcard_pane_g3_ParamLimits

0x746f,	// (0x000568fd) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0005e951) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0005e951) main_postcard_pane_g

0x747f,	// (0x0005690d) main_postcard_pane_g4

0x280e,	// (0x00051c9c) smil_status_volume_pane_g2

0x74ab,	// (0x00056939) postcard_pane_ParamLimits

0x74ab,	// (0x00056939) postcard_pane

0x140b,	// (0x00050899) postcard_pane_g1_ParamLimits

0x140b,	// (0x00050899) postcard_pane_g1

0x74e5,	// (0x00056973) postcard_pane_g2_ParamLimits

0x74e5,	// (0x00056973) postcard_pane_g2

0x74f1,	// (0x0005697f) postcard_pane_g3_ParamLimits

0x74f1,	// (0x0005697f) postcard_pane_g3

0x1507,	// (0x00050995) postcard_pane_g4_ParamLimits

0x1507,	// (0x00050995) postcard_pane_g4

0x74fd,	// (0x0005698b) postcard_pane_g5_ParamLimits

0x74fd,	// (0x0005698b) postcard_pane_g5

0x7509,	// (0x00056997) postcard_pane_g6_ParamLimits

0x7509,	// (0x00056997) postcard_pane_g6

0x14f9,	// (0x00050987) postcard_pane_g7_ParamLimits

0x14f9,	// (0x00050987) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0005e95e) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0005e95e) postcard_pane_g

0x7517,	// (0x000569a5) main_mp2_pane_g1_ParamLimits

0x7517,	// (0x000569a5) main_mp2_pane_g1

0x7525,	// (0x000569b3) main_mp2_pane_g2_ParamLimits

0x7525,	// (0x000569b3) main_mp2_pane_g2

0x7531,	// (0x000569bf) main_mp2_pane_g3_ParamLimits

0x7531,	// (0x000569bf) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x0005e96d) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x0005e96d) main_mp2_pane_g

0x753d,	// (0x000569cb) main_mp2_pane_t1_ParamLimits

0x753d,	// (0x000569cb) main_mp2_pane_t1

0x7554,	// (0x000569e2) main_mp2_pane_t2_ParamLimits

0x7554,	// (0x000569e2) main_mp2_pane_t2

0x7568,	// (0x000569f6) main_mp2_pane_t3_ParamLimits

0x7568,	// (0x000569f6) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x0005e974) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x0005e974) main_mp2_pane_t

0x1515,	// (0x000509a3) pec_content_pane_ParamLimits

0x1515,	// (0x000509a3) pec_content_pane

0xeef2,	// (0x0005e380) scroll_pane_cp015

0x1527,	// (0x000509b5) pec_attribute_pane_ParamLimits

0x1527,	// (0x000509b5) pec_attribute_pane

0x757a,	// (0x00056a08) pec_content_pane_g1_ParamLimits

0x757a,	// (0x00056a08) pec_content_pane_g1

0x1537,	// (0x000509c5) pec_content_pane_t1_ParamLimits

0x1537,	// (0x000509c5) pec_content_pane_t1

0x1549,	// (0x000509d7) pec_content_pane_t2_ParamLimits

0x1549,	// (0x000509d7) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x0005e97b) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x0005e97b) pec_content_pane_t

0x7586,	// (0x00056a14) list_single_graphic_pane_cp01_ParamLimits

0x7586,	// (0x00056a14) list_single_graphic_pane_cp01

0xea05,	// (0x0005de93) bg_popup_sub_pane_cp04

0x155b,	// (0x000509e9) popup_mup_playback_window_g1

0x1567,	// (0x000509f5) popup_mup_playback_window_t1

0x157c,	// (0x00050a0a) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0005e980) popup_mup_playback_window_t

0x15b3,	// (0x00050a41) main_image_pane_g1_ParamLimits

0x15b3,	// (0x00050a41) main_image_pane_g1

0x15f6,	// (0x00050a84) scroll_pane_cp018_ParamLimits

0x15f6,	// (0x00050a84) scroll_pane_cp018

0x160e,	// (0x00050a9c) scroll_pane_cp016_ParamLimits

0x160e,	// (0x00050a9c) scroll_pane_cp016

0x7614,	// (0x00056aa2) smil2_image_pane_ParamLimits

0x7614,	// (0x00056aa2) smil2_image_pane

0x764a,	// (0x00056ad8) smil2_root_pane_ParamLimits

0x764a,	// (0x00056ad8) smil2_root_pane

0x7676,	// (0x00056b04) smil2_text_pane_ParamLimits

0x7676,	// (0x00056b04) smil2_text_pane

0xe7aa,	// (0x0005dc38) bg_list_pane_cp06

0x164a,	// (0x00050ad8) grid_radio_pane

0xe7aa,	// (0x0005dc38) bg_popup_window_pane_cp06

0x1654,	// (0x00050ae2) main_fmradio_pane_t1

0x10fe,	// (0x0005058c) heading_pane_cp04

0x1662,	// (0x00050af0) main_fmradio_pane_t2

0x264c,	// (0x00051ada) popup_cale_lunar_info_window_g1

0x1670,	// (0x00050afe) main_fmradio_pane_t3

0x2654,	// (0x00051ae2) popup_cale_lunar_info_window_g2

0x1680,	// (0x00050b0e) main_fmradio_pane_t4

0x0001,

0x168e,	// (0x00050b1c) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x0005ea5b) popup_cale_lunar_info_window_g

0xf507,	// (0x0005e995) main_fmradio_pane_t

0x169c,	// (0x00050b2a) wait_bar_pane_cp03

0x16a4,	// (0x00050b32) cell_fmradio_pane_ParamLimits

0x16a4,	// (0x00050b32) cell_fmradio_pane

0x14f9,	// (0x00050987) cell_fmradio_pane_g1_ParamLimits

0x14f9,	// (0x00050987) cell_fmradio_pane_g1

0xe7aa,	// (0x0005dc38) grid_highlight_pane_cp011

0x16b9,	// (0x00050b47) poc_content_pane_ParamLimits

0x16b9,	// (0x00050b47) poc_content_pane

0x16cb,	// (0x00050b59) scroll_pane_cp019

0x76b6,	// (0x00056b44) popup_call_poc_act_window_ParamLimits

0x76b6,	// (0x00056b44) popup_call_poc_act_window

0x76c3,	// (0x00056b51) popup_call_poc_inact_window_ParamLimits

0x76c3,	// (0x00056b51) popup_call_poc_inact_window

0xf5a4,	// (0x0005ea32) bg_popup_call_poc_act_pane_g

0x25c4,	// (0x00051a52) bg_popup_call_poc_inact_pane_g1

0x25cc,	// (0x00051a5a) bg_popup_call_poc_inact_pane_g2

0x16d3,	// (0x00050b61) popup_call_poc_act_window_g2

0x25d4,	// (0x00051a62) bg_popup_call_poc_inact_pane_g3

0x25dc,	// (0x00051a6a) bg_popup_call_poc_inact_pane_g4

0x25e4,	// (0x00051a72) bg_popup_call_poc_inact_pane_g5

0x16db,	// (0x00050b69) popup_call_poc_act_window_t1_ParamLimits

0x16db,	// (0x00050b69) popup_call_poc_act_window_t1

0x1703,	// (0x00050b91) popup_call_poc_act_window_t2_ParamLimits

0x1703,	// (0x00050b91) popup_call_poc_act_window_t2

0x172b,	// (0x00050bb9) popup_call_poc_act_window_t3_ParamLimits

0x172b,	// (0x00050bb9) popup_call_poc_act_window_t3

0x1753,	// (0x00050be1) popup_call_poc_act_window_t4_ParamLimits

0x1753,	// (0x00050be1) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0005e9a0) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0005e9a0) popup_call_poc_act_window_t

0x25ec,	// (0x00051a7a) bg_popup_call_poc_inact_pane_g6

0x25f4,	// (0x00051a82) bg_popup_call_poc_inact_pane_g7

0x25fc,	// (0x00051a8a) bg_popup_call_poc_inact_pane_g8

0x1765,	// (0x00050bf3) popup_call_poc_inact_window_g2

0x2604,	// (0x00051a92) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x0005ea1f) bg_popup_call_poc_inact_pane_g

0x176d,	// (0x00050bfb) popup_call_poc_inact_window_t1_ParamLimits

0x176d,	// (0x00050bfb) popup_call_poc_inact_window_t1

0x1782,	// (0x00050c10) popup_call_poc_inact_window_t2_ParamLimits

0x1782,	// (0x00050c10) popup_call_poc_inact_window_t2

0x1797,	// (0x00050c25) popup_call_poc_inact_window_t3_ParamLimits

0x1797,	// (0x00050c25) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x0005e9a9) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x0005e9a9) popup_call_poc_inact_window_t

0x2781,	// (0x00051c0f) context_pane_ParamLimits

0x7d23,	// (0x000571b1) signal_pane_ParamLimits

0x134c,	// (0x000507da) main_call2_pane

0x7c93,	// (0x00057121) popup_phob_thumbnail2_window_ParamLimits

0x7c93,	// (0x00057121) popup_phob_thumbnail2_window

0x737d,	// (0x0005680b) aid_hotspot_pointer_arrow_pane

0x7385,	// (0x00056813) aid_hotspot_pointer_hand_pane

0x79e8,	// (0x00056e76) phob_pre_status_pane_g5

0x56f9,	// (0x00054b87) cams_zoom_pane_ParamLimits

0x5705,	// (0x00054b93) image_vga_pane_ParamLimits

0x5714,	// (0x00054ba2) main_camera_pane_g1_ParamLimits

0x5722,	// (0x00054bb0) main_camera_pane_g2_ParamLimits

0x572e,	// (0x00054bbc) main_camera_pane_g3_ParamLimits

0x573c,	// (0x00054bca) main_camera_pane_g4_ParamLimits

0x574a,	// (0x00054bd8) main_camera_pane_g5_ParamLimits

0x5758,	// (0x00054be6) main_camera_pane_g6_ParamLimits

0x5766,	// (0x00054bf4) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0005e6a8) main_camera_pane_g_ParamLimits

0x5774,	// (0x00054c02) main_camera_pane_t1_ParamLimits

0x5786,	// (0x00054c14) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0005e6b9) main_camera_pane_t_ParamLimits

0xea05,	// (0x0005de93) bg_popup_preview_window_pane_cp01_ParamLimits

0xea05,	// (0x0005de93) bg_popup_preview_window_pane_cp01

0x17ac,	// (0x00050c3a) popup_phob_thumbnail2_window_g1_ParamLimits

0x17ac,	// (0x00050c3a) popup_phob_thumbnail2_window_g1

0xe7aa,	// (0x0005dc38) call2_cli_visual_pane

0x76df,	// (0x00056b6d) popup_call2_audio_conf_window_ParamLimits

0x76df,	// (0x00056b6d) popup_call2_audio_conf_window

0x76f8,	// (0x00056b86) popup_call2_audio_first_window_ParamLimits

0x76f8,	// (0x00056b86) popup_call2_audio_first_window

0x7796,	// (0x00056c24) popup_call2_audio_in_window_ParamLimits

0x7796,	// (0x00056c24) popup_call2_audio_in_window

0x77da,	// (0x00056c68) popup_call2_audio_out_window_ParamLimits

0x77da,	// (0x00056c68) popup_call2_audio_out_window

0x7844,	// (0x00056cd2) popup_call2_audio_second_window_ParamLimits

0x7844,	// (0x00056cd2) popup_call2_audio_second_window

0x78a2,	// (0x00056d30) popup_call2_audio_wait_window_ParamLimits

0x78a2,	// (0x00056d30) popup_call2_audio_wait_window

0xe7aa,	// (0x0005dc38) bg_popup_call2_act_pane_cp03

0xe9e7,	// (0x0005de75) list_conf_pane_cp

0x17b8,	// (0x00050c46) popup_call2_audio_conf_window_t1

0x17c6,	// (0x00050c54) list_single_graphic_popup_conf2_pane_ParamLimits

0x17c6,	// (0x00050c54) list_single_graphic_popup_conf2_pane

0x116d,	// (0x000505fb) list_highlight_pane_cp04

0x17d9,	// (0x00050c67) list_single_graphic_popup_conf2_pane_g1

0x117e,	// (0x0005060c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0005e9b0) list_single_graphic_popup_conf2_pane_g

0x17e3,	// (0x00050c71) list_single_graphic_popup_conf2_pane_t1

0x17f1,	// (0x00050c7f) bg_popup_call2_act_pane_cp01_ParamLimits

0x17f1,	// (0x00050c7f) bg_popup_call2_act_pane_cp01

0x187b,	// (0x00050d09) call_type_pane_cp05_ParamLimits

0x187b,	// (0x00050d09) call_type_pane_cp05

0x18dd,	// (0x00050d6b) popup_call2_audio_second_window_g1_ParamLimits

0x18dd,	// (0x00050d6b) popup_call2_audio_second_window_g1

0x1931,	// (0x00050dbf) popup_call2_audio_second_window_g2_ParamLimits

0x1931,	// (0x00050dbf) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x0005e9b5) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x0005e9b5) popup_call2_audio_second_window_g

0x1996,	// (0x00050e24) popup_call2_audio_second_window_t1_ParamLimits

0x1996,	// (0x00050e24) popup_call2_audio_second_window_t1

0x1a51,	// (0x00050edf) popup_call2_audio_second_window_t2_ParamLimits

0x1a51,	// (0x00050edf) popup_call2_audio_second_window_t2

0x1aa4,	// (0x00050f32) popup_call2_audio_second_window_t3_ParamLimits

0x1aa4,	// (0x00050f32) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0005e9bc) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0005e9bc) popup_call2_audio_second_window_t

0xe7aa,	// (0x0005dc38) bg_popup_call2_in_pane_cp02

0xe7b4,	// (0x0005dc42) call_type_pane_cp04

0xe7bc,	// (0x0005dc4a) popup_call2_audio_wait_window_g1

0xe7c4,	// (0x0005dc52) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0005e595) popup_call2_audio_wait_window_g

0xe7cc,	// (0x0005dc5a) popup_call2_audio_wait_window_t3

0x1b97,	// (0x00051025) bg_popup_call2_act_pane_ParamLimits

0x1b97,	// (0x00051025) bg_popup_call2_act_pane

0x1c57,	// (0x000510e5) call_type_pane_cp03_ParamLimits

0x1c57,	// (0x000510e5) call_type_pane_cp03

0x1cbb,	// (0x00051149) popup_call2_audio_first_window_g1_ParamLimits

0x1cbb,	// (0x00051149) popup_call2_audio_first_window_g1

0x1d2b,	// (0x000511b9) popup_call2_audio_first_window_g2_ParamLimits

0x1d2b,	// (0x000511b9) popup_call2_audio_first_window_g2

0x140b,	// (0x00050899) popup_call2_audio_first_window_g3_ParamLimits

0x140b,	// (0x00050899) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x0005e9c5) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x0005e9c5) popup_call2_audio_first_window_g

0x1e09,	// (0x00051297) popup_call2_audio_first_window_t1_ParamLimits

0x1e09,	// (0x00051297) popup_call2_audio_first_window_t1

0x1f0c,	// (0x0005139a) popup_call2_audio_first_window_t4_ParamLimits

0x1f0c,	// (0x0005139a) popup_call2_audio_first_window_t4

0x1fef,	// (0x0005147d) popup_call2_audio_first_window_t5_ParamLimits

0x1fef,	// (0x0005147d) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0005e9d0) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0005e9d0) popup_call2_audio_first_window_t

0xe9fd,	// (0x0005de8b) bg_popup_call2_act_pane_g1

0x265e,	// (0x00051aec) popup_cale_lunar_info_window_t1

0x266c,	// (0x00051afa) popup_cale_lunar_info_window_t2

0x267a,	// (0x00051b08) popup_cale_lunar_info_window_t3

0xe7aa,	// (0x0005dc38) bg_popup_call2_bubble_pane

0x20f0,	// (0x0005157e) bg_popup_call2_in_pane_cp01_ParamLimits

0x20f0,	// (0x0005157e) bg_popup_call2_in_pane_cp01

0xe486,	// (0x0005d914) call_type_pane_cp02

0x2138,	// (0x000515c6) popup_call2_audio_out_window_g1_ParamLimits

0x2138,	// (0x000515c6) popup_call2_audio_out_window_g1

0x2164,	// (0x000515f2) popup_call2_audio_out_window_g2_ParamLimits

0x2164,	// (0x000515f2) popup_call2_audio_out_window_g2

0x218c,	// (0x0005161a) popup_call2_audio_out_window_g3_ParamLimits

0x218c,	// (0x0005161a) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x0005e9d9) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x0005e9d9) popup_call2_audio_out_window_g

0x21c7,	// (0x00051655) popup_call2_audio_out_window_t1_ParamLimits

0x21c7,	// (0x00051655) popup_call2_audio_out_window_t1

0x2226,	// (0x000516b4) popup_call2_audio_out_window_t2_ParamLimits

0x2226,	// (0x000516b4) popup_call2_audio_out_window_t2

0x227a,	// (0x00051708) popup_call2_audio_out_window_t3_ParamLimits

0x227a,	// (0x00051708) popup_call2_audio_out_window_t3

0x2290,	// (0x0005171e) popup_call2_audio_out_window_t4_ParamLimits

0x2290,	// (0x0005171e) popup_call2_audio_out_window_t4

0x22a6,	// (0x00051734) popup_call2_audio_out_window_t5_ParamLimits

0x22a6,	// (0x00051734) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x0005e9e2) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x0005e9e2) popup_call2_audio_out_window_t

0x230a,	// (0x00051798) bg_popup_call2_in_pane_ParamLimits

0x230a,	// (0x00051798) bg_popup_call2_in_pane

0x2366,	// (0x000517f4) popup_call2_audio_in_window_g1_ParamLimits

0x2366,	// (0x000517f4) popup_call2_audio_in_window_g1

0x239e,	// (0x0005182c) popup_call2_audio_in_window_g2_ParamLimits

0x239e,	// (0x0005182c) popup_call2_audio_in_window_g2

0x23d6,	// (0x00051864) popup_call2_audio_in_window_g3_ParamLimits

0x23d6,	// (0x00051864) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0005e9ef) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0005e9ef) popup_call2_audio_in_window_g

0x242e,	// (0x000518bc) popup_call2_audio_in_window_t1_ParamLimits

0x242e,	// (0x000518bc) popup_call2_audio_in_window_t1

0x24ae,	// (0x0005193c) popup_call2_audio_in_window_t2_ParamLimits

0x24ae,	// (0x0005193c) popup_call2_audio_in_window_t2

0x252e,	// (0x000519bc) popup_call2_audio_in_window_t3_ParamLimits

0x252e,	// (0x000519bc) popup_call2_audio_in_window_t3

0x2548,	// (0x000519d6) popup_call2_audio_in_window_t4_ParamLimits

0x2548,	// (0x000519d6) popup_call2_audio_in_window_t4

0x255a,	// (0x000519e8) popup_call2_audio_in_window_t5_ParamLimits

0x255a,	// (0x000519e8) popup_call2_audio_in_window_t5

0x256f,	// (0x000519fd) popup_call2_audio_in_window_t6_ParamLimits

0x256f,	// (0x000519fd) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x0005e9f8) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x0005e9f8) popup_call2_audio_in_window_t

0xe9fd,	// (0x0005de8b) bg_popup_call2_in_pane_g1

0x2688,	// (0x00051b16) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0005ea60) popup_cale_lunar_info_window_t

0xea05,	// (0x0005de93) bg_popup_call2_rect_pane_ParamLimits

0xea05,	// (0x0005de93) bg_popup_call2_rect_pane

0xe7aa,	// (0x0005dc38) call2_cli_visual_graphic_pane

0xe7aa,	// (0x0005dc38) call2_cli_visual_text_pane

0x7da8,	// (0x00057236) smil_status_volume_pane_g3

0x0002,

0xeb2d,	// (0x0005dfbb) call2_cli_visual_graphic_pane_g1

0xeb2d,	// (0x0005dfbb) call2_cli_visual_graphic_pane_g2

0xeb2d,	// (0x0005dfbb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x0005ea05) call2_cli_visual_graphic_pane_g

0x2584,	// (0x00051a12) bg_popup_call2_rect_pane_g1

0xebcb,	// (0x0005e059) bg_popup_call2_rect_pane_g2

0x258c,	// (0x00051a1a) bg_popup_call2_rect_pane_g3

0x2594,	// (0x00051a22) bg_popup_call2_rect_pane_g4

0x259c,	// (0x00051a2a) bg_popup_call2_rect_pane_g5

0x25a4,	// (0x00051a32) bg_popup_call2_rect_pane_g6

0x25ac,	// (0x00051a3a) bg_popup_call2_rect_pane_g7

0x25b4,	// (0x00051a42) bg_popup_call2_rect_pane_g8

0x25bc,	// (0x00051a4a) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0005ea0c) bg_popup_call2_rect_pane_g

0x25c4,	// (0x00051a52) bg_popup_call2_bubble_pane_g1

0x25cc,	// (0x00051a5a) bg_popup_call2_bubble_pane_g2

0x25d4,	// (0x00051a62) bg_popup_call2_bubble_pane_g3

0x25dc,	// (0x00051a6a) bg_popup_call2_bubble_pane_g4

0x25e4,	// (0x00051a72) bg_popup_call2_bubble_pane_g5

0x25ec,	// (0x00051a7a) bg_popup_call2_bubble_pane_g6

0x25f4,	// (0x00051a82) bg_popup_call2_bubble_pane_g7

0x25fc,	// (0x00051a8a) bg_popup_call2_bubble_pane_g8

0x2604,	// (0x00051a92) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x0005ea1f) bg_popup_call2_bubble_pane_g

0x51f8,	// (0x00054686) aid_cale_week_size_cell_pane

0x579a,	// (0x00054c28) aid_cams_cif_uncrop_pane_ParamLimits

0x579a,	// (0x00054c28) aid_cams_cif_uncrop_pane

0x58f7,	// (0x00054d85) aid_cams_size_cell_ParamLimits

0x58f7,	// (0x00054d85) aid_cams_size_cell

0x5903,	// (0x00054d91) grid_cams_pane_ParamLimits

0x5911,	// (0x00054d9f) linegrid_cams_pane_ParamLimits

0x5a3b,	// (0x00054ec9) call_video_pane_t1

0x5a58,	// (0x00054ee6) call_video_pane_t2

0x0001,

0xf27e,	// (0x0005e70c) call_video_pane_t

0x5f12,	// (0x000553a0) aid_cale_month_size_cell_pane_ParamLimits

0x5f12,	// (0x000553a0) aid_cale_month_size_cell_pane

0xf61b,	// (0x0005eaa9) smil_status_volume_pane_g

0x7db5,	// (0x00057243) volume_smil_pane_ParamLimits

0x49b6,	// (0x00053e44) aid_popup2_width_pane

0x50fe,	// (0x0005458c) cell_qdial_pane_g4_ParamLimits

0x50fe,	// (0x0005458c) cell_qdial_pane_g4

0x6c1d,	// (0x000560ab) aid_blid_cardinal_pane_ParamLimits

0x6c2d,	// (0x000560bb) aid_blid_destination_pane_ParamLimits

0x6c2d,	// (0x000560bb) aid_blid_destination_pane

0xea05,	// (0x0005de93) bg_popup_call_poc_act_pane_ParamLimits

0xea05,	// (0x0005de93) bg_popup_call_poc_act_pane

0xea05,	// (0x0005de93) bg_popup_call_poc_inact_pane_ParamLimits

0xea05,	// (0x0005de93) bg_popup_call_poc_inact_pane

0x260c,	// (0x00051a9a) bg_popup_call_poc_act_pane_g1

0x2614,	// (0x00051aa2) bg_popup_call_poc_act_pane_g2

0x261c,	// (0x00051aaa) bg_popup_call_poc_act_pane_g3

0x25dc,	// (0x00051a6a) bg_popup_call_poc_act_pane_g4

0x25e4,	// (0x00051a72) bg_popup_call_poc_act_pane_g5

0x2624,	// (0x00051ab2) bg_popup_call_poc_act_pane_g6

0x25f4,	// (0x00051a82) bg_popup_call_poc_act_pane_g7

0x262c,	// (0x00051aba) bg_popup_call_poc_act_pane_g8

0xe7aa,	// (0x0005dc38) main_usb_pane

0x7bb0,	// (0x0005703e) popup_cale_lunar_info_window

0x5d70,	// (0x000551fe) im_reading_pane_t1_ParamLimits

0xee4a,	// (0x0005e2d8) list_im_pane_ParamLimits

0xee5b,	// (0x0005e2e9) scroll_pane_cp07_ParamLimits

0xe7aa,	// (0x0005dc38) grid_highlight_pane_cp012

0xea05,	// (0x0005de93) mup_scale_pane_ParamLimits

0x140b,	// (0x00050899) main_usb_pane_g1_ParamLimits

0x140b,	// (0x00050899) main_usb_pane_g1

0x790b,	// (0x00056d99) main_usb_pane_g2_ParamLimits

0x790b,	// (0x00056d99) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x0005ea49) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x0005ea49) main_usb_pane_g

0x7917,	// (0x00056da5) main_usb_pane_t1_ParamLimits

0x7917,	// (0x00056da5) main_usb_pane_t1

0x7929,	// (0x00056db7) main_usb_pane_t2_ParamLimits

0x7929,	// (0x00056db7) main_usb_pane_t2

0x793b,	// (0x00056dc9) main_usb_pane_t3_ParamLimits

0x793b,	// (0x00056dc9) main_usb_pane_t3

0x794d,	// (0x00056ddb) main_usb_pane_t4_ParamLimits

0x794d,	// (0x00056ddb) main_usb_pane_t4

0x795f,	// (0x00056ded) main_usb_pane_t5_ParamLimits

0x795f,	// (0x00056ded) main_usb_pane_t5

0x7971,	// (0x00056dff) main_usb_pane_t6_ParamLimits

0x7971,	// (0x00056dff) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0005ea4e) main_usb_pane_t_ParamLimits

0x6bbc,	// (0x0005604a) aid_text_placing

0x6bc7,	// (0x00056055) main_location2_pane_t1_ParamLimits

0x6bdd,	// (0x0005606b) main_location2_pane_t2_ParamLimits

0x6bf3,	// (0x00056081) main_location2_pane_t3_ParamLimits

0x6c09,	// (0x00056097) main_location2_pane_t4_ParamLimits

0x6c09,	// (0x00056097) main_location2_pane_t4

0xf3df,	// (0x0005e86d) main_location2_pane_t_ParamLimits

0xea41,	// (0x0005decf) find_pinb_pane_g2_ParamLimits

0xea41,	// (0x0005decf) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0005e5bb) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0005e5bb) find_pinb_pane_g

0xea4d,	// (0x0005dedb) find_pinb_pane_t1_ParamLimits

0xea5f,	// (0x0005deed) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0005e5c0) find_pinb_pane_t_ParamLimits

0xe7aa,	// (0x0005dc38) main_call3_pane

0x631e,	// (0x000557ac) cale_month_day_heading_pane_t1_ParamLimits

0x637c,	// (0x0005580a) cale_month_day_heading_pane_t2_ParamLimits

0x63e1,	// (0x0005586f) cale_month_day_heading_pane_t3_ParamLimits

0x6446,	// (0x000558d4) cale_month_day_heading_pane_t4_ParamLimits

0x64ab,	// (0x00055939) cale_month_day_heading_pane_t5_ParamLimits

0x6518,	// (0x000559a6) cale_month_day_heading_pane_t6_ParamLimits

0x658d,	// (0x00055a1b) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x0005e744) cale_month_day_heading_pane_t_ParamLimits

0xf0c5,	// (0x0005e553) smil_status_volume_pane

0x74c9,	// (0x00056957) postcard_address_pane_ParamLimits

0x74c9,	// (0x00056957) postcard_address_pane

0x74d7,	// (0x00056965) postcard_message_pane_ParamLimits

0x74d7,	// (0x00056965) postcard_message_pane

0x78e1,	// (0x00056d6f) call2_cli_visual_pane_t1_ParamLimits

0x78e1,	// (0x00056d6f) call2_cli_visual_pane_t1

0x7efb,	// (0x00057389) postcard_message_pane_t1_ParamLimits

0x7efb,	// (0x00057389) postcard_message_pane_t1

0x2834,	// (0x00051cc2) postcard_address_pane_t1_ParamLimits

0x2834,	// (0x00051cc2) postcard_address_pane_t1

0x7eec,	// (0x0005737a) popup_call3_audio_in_window_ParamLimits

0x7eec,	// (0x0005737a) popup_call3_audio_in_window

0x7dca,	// (0x00057258) bg_popup_call3_in_pane_ParamLimits

0x7dca,	// (0x00057258) bg_popup_call3_in_pane

0x7e32,	// (0x000572c0) popup_call3_audio_in_window_g1_ParamLimits

0x7e32,	// (0x000572c0) popup_call3_audio_in_window_g1

0x7e4a,	// (0x000572d8) popup_call3_audio_in_window_g2_ParamLimits

0x7e4a,	// (0x000572d8) popup_call3_audio_in_window_g2

0x7e62,	// (0x000572f0) popup_call3_audio_in_window_g3_ParamLimits

0x7e62,	// (0x000572f0) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0005eab0) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0005eab0) popup_call3_audio_in_window_g

0x7e8a,	// (0x00057318) popup_call3_audio_in_window_t1_ParamLimits

0x7e8a,	// (0x00057318) popup_call3_audio_in_window_t1

0x7eb2,	// (0x00057340) popup_call3_audio_in_window_t2_ParamLimits

0x7eb2,	// (0x00057340) popup_call3_audio_in_window_t2

0x7eda,	// (0x00057368) popup_call3_audio_in_window_t3_ParamLimits

0x7eda,	// (0x00057368) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x0005eab9) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x0005eab9) popup_call3_audio_in_window_t

0x134c,	// (0x000507da) bg_popup_call3_rect_pane

0x2584,	// (0x00051a12) bg_popup_call3_rect_pane_g1

0xebcb,	// (0x0005e059) bg_popup_call3_rect_pane_g2

0x258c,	// (0x00051a1a) bg_popup_call3_rect_pane_g3

0x2594,	// (0x00051a22) bg_popup_call3_rect_pane_g4

0x259c,	// (0x00051a2a) bg_popup_call3_rect_pane_g5

0x25a4,	// (0x00051a32) bg_popup_call3_rect_pane_g6

0x25ac,	// (0x00051a3a) bg_popup_call3_rect_pane_g7

0x704f,	// (0x000564dd) mup_visualizer_osc_pane

0x1419,	// (0x000508a7) mup_visualizer_spec_pane

0x7dea,	// (0x00057278) call3_video_qcif_pane_ParamLimits

0x7dea,	// (0x00057278) call3_video_qcif_pane

0x7dfc,	// (0x0005728a) call3_video_qcif_uncrop_pane_ParamLimits

0x7dfc,	// (0x0005728a) call3_video_qcif_uncrop_pane

0x7e0c,	// (0x0005729a) call3_video_subqcif_pane_ParamLimits

0x7e0c,	// (0x0005729a) call3_video_subqcif_pane

0x7e20,	// (0x000572ae) call3_video_subqcif_uncrop_pane_ParamLimits

0x7e20,	// (0x000572ae) call3_video_subqcif_uncrop_pane

0x7e7a,	// (0x00057308) popup_call3_audio_in_window_g4_ParamLimits

0x7e7a,	// (0x00057308) popup_call3_audio_in_window_g4

0x7d97,	// (0x00057225) mup_spec_half_pane

0x7da0,	// (0x0005722e) mup_spec_half_pane_cp

0x27f4,	// (0x00051c82) mup_osc_middle_pane

0x27fd,	// (0x00051c8b) mup_visualizer_osc_pane_g1

0x7d77,	// (0x00057205) mup_spec_bar_pane_ParamLimits

0x7d77,	// (0x00057205) mup_spec_bar_pane

0x27e1,	// (0x00051c6f) mup_spec_bar_pane_g1

0x27eb,	// (0x00051c79) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0005eaa4) mup_spec_bar_pane_g

0x51f8,	// (0x00054686) aid_cale_week_size_cell_pane_ParamLimits

0x520b,	// (0x00054699) bg_cale_heading_pane_ParamLimits

0xebff,	// (0x0005e08d) bg_cale_pane_cp01_ParamLimits

0x5227,	// (0x000546b5) cale_week_corner_pane_ParamLimits

0x523d,	// (0x000546cb) cale_week_day_heading_pane_ParamLimits

0x5259,	// (0x000546e7) cale_week_scroll_pane_g1_ParamLimits

0x5272,	// (0x00054700) cale_week_scroll_pane_g2_ParamLimits

0x5283,	// (0x00054711) cale_week_scroll_pane_g3_ParamLimits

0x5294,	// (0x00054722) cale_week_scroll_pane_g4_ParamLimits

0x52a5,	// (0x00054733) cale_week_scroll_pane_g5_ParamLimits

0x52b6,	// (0x00054744) cale_week_scroll_pane_g6_ParamLimits

0x52c9,	// (0x00054757) cale_week_scroll_pane_g7_ParamLimits

0x52dc,	// (0x0005476a) cale_week_scroll_pane_g8_ParamLimits

0x52ef,	// (0x0005477d) cale_week_scroll_pane_g9_ParamLimits

0x5300,	// (0x0005478e) cale_week_scroll_pane_g10_ParamLimits

0x5311,	// (0x0005479f) cale_week_scroll_pane_g11_ParamLimits

0x5322,	// (0x000547b0) cale_week_scroll_pane_g12_ParamLimits

0x5333,	// (0x000547c1) cale_week_scroll_pane_g13_ParamLimits

0x5344,	// (0x000547d2) cale_week_scroll_pane_g14_ParamLimits

0x535d,	// (0x000547eb) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0005e64c) cale_week_scroll_pane_g_ParamLimits

0x5376,	// (0x00054804) cale_week_time_pane_ParamLimits

0x5389,	// (0x00054817) grid_cale_week_pane_ParamLimits

0xec18,	// (0x0005e0a6) listscroll_cale_week_pane_t1

0x53a6,	// (0x00054834) scroll_pane_cp08_ParamLimits

0x5f63,	// (0x000553f1) cale_month_corner_pane_ParamLimits

0xf071,	// (0x0005e4ff) cale_month_pane_t1

0x62cd,	// (0x0005575b) cale_month_week_pane_ParamLimits

0x140b,	// (0x00050899) popup_call_status_window_g1_ParamLimits

0x69c5,	// (0x00055e53) popup_call_status_window_g2_ParamLimits

0x69d1,	// (0x00055e5f) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x0005e7f4) popup_call_status_window_g_ParamLimits

0x0371,	// (0x0004f7ff) aid_call2_pane

0x72f4,	// (0x00056782) msg_header_pane_g1

0x74c9,	// (0x00056957) postcard_address2_pane_ParamLimits

0x74c9,	// (0x00056957) postcard_address2_pane

0x74d7,	// (0x00056965) postcard_message2_pane_ParamLimits

0x74d7,	// (0x00056965) postcard_message2_pane

0x7d31,	// (0x000571bf) message2_row_pane_ParamLimits

0x7d31,	// (0x000571bf) message2_row_pane

0x279c,	// (0x00051c2a) address2_row_pane_ParamLimits

0x279c,	// (0x00051c2a) address2_row_pane

0x27af,	// (0x00051c3d) postcard_message2_row_pane_g1

0x27b7,	// (0x00051c45) postcard_message2_row_pane_t1

0x27af,	// (0x00051c3d) address2_row_pane_g1

0x27b7,	// (0x00051c45) address2_row_pane_t1

0x5658,	// (0x00054ae6) aid_size_cell_vorec

0xe7aa,	// (0x0005dc38) main_rss_pane

0x7d4b,	// (0x000571d9) rss_list_single_pane_ParamLimits

0x7d4b,	// (0x000571d9) rss_list_single_pane

0x27c5,	// (0x00051c53) rss_list_single_pane_t1

0x27d3,	// (0x00051c61) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0005ea9f) rss_list_single_pane_t

0xe7aa,	// (0x0005dc38) main_camera2_pane

0xe7aa,	// (0x0005dc38) main_video2_pane

0x7f5f,	// (0x000573ed) cams_zoom_pane_cp2_ParamLimits

0x7f5f,	// (0x000573ed) cams_zoom_pane_cp2

0x7f6b,	// (0x000573f9) image2_vga_pane_ParamLimits

0x7f6b,	// (0x000573f9) image2_vga_pane

0x7f7a,	// (0x00057408) main_camera2_pane_g1_ParamLimits

0x7f7a,	// (0x00057408) main_camera2_pane_g1

0x7f86,	// (0x00057414) main_camera2_pane_g2_ParamLimits

0x7f86,	// (0x00057414) main_camera2_pane_g2

0x7f92,	// (0x00057420) main_camera2_pane_g3_ParamLimits

0x7f92,	// (0x00057420) main_camera2_pane_g3

0x7f9e,	// (0x0005742c) main_camera2_pane_g4_ParamLimits

0x7f9e,	// (0x0005742c) main_camera2_pane_g4

0x7faa,	// (0x00057438) main_camera2_pane_g5_ParamLimits

0x7faa,	// (0x00057438) main_camera2_pane_g5

0x7fb6,	// (0x00057444) main_camera2_pane_g6_ParamLimits

0x7fb6,	// (0x00057444) main_camera2_pane_g6

0x7fc2,	// (0x00057450) main_camera2_pane_g7_ParamLimits

0x7fc2,	// (0x00057450) main_camera2_pane_g7

0x7fce,	// (0x0005745c) main_camera2_pane_g8_ParamLimits

0x7fce,	// (0x0005745c) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0005eac0) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0005eac0) main_camera2_pane_g

0x7fe6,	// (0x00057474) main_camera2_pane_t1_ParamLimits

0x7fe6,	// (0x00057474) main_camera2_pane_t1

0x7ff8,	// (0x00057486) main_camera2_pane_t2_ParamLimits

0x7ff8,	// (0x00057486) main_camera2_pane_t2

0x800a,	// (0x00057498) main_camera2_pane_t3_ParamLimits

0x800a,	// (0x00057498) main_camera2_pane_t3

0x801c,	// (0x000574aa) main_camera2_pane_t4_ParamLimits

0x801c,	// (0x000574aa) main_camera2_pane_t4

0x0006,

0xf645,	// (0x0005ead3) main_camera2_pane_t_ParamLimits

0xf645,	// (0x0005ead3) main_camera2_pane_t

0x8079,	// (0x00057507) cams_zoom_pane_cp4_ParamLimits

0x8079,	// (0x00057507) cams_zoom_pane_cp4

0x8089,	// (0x00057517) image2_cif_pane_ParamLimits

0x8089,	// (0x00057517) image2_cif_pane

0x809e,	// (0x0005752c) image2_subqcif_pane_ParamLimits

0x809e,	// (0x0005752c) image2_subqcif_pane

0x80ad,	// (0x0005753b) main_video2_pane_g1_ParamLimits

0x80ad,	// (0x0005753b) main_video2_pane_g1

0x80bf,	// (0x0005754d) main_video2_pane_g2_ParamLimits

0x80bf,	// (0x0005754d) main_video2_pane_g2

0x80cf,	// (0x0005755d) main_video2_pane_g3_ParamLimits

0x80cf,	// (0x0005755d) main_video2_pane_g3

0x80df,	// (0x0005756d) main_video2_pane_g4_ParamLimits

0x80df,	// (0x0005756d) main_video2_pane_g4

0x80ef,	// (0x0005757d) main_video2_pane_g5_ParamLimits

0x80ef,	// (0x0005757d) main_video2_pane_g5

0x80ff,	// (0x0005758d) main_video2_pane_g6_ParamLimits

0x80ff,	// (0x0005758d) main_video2_pane_g6

0x0005,

0xf654,	// (0x0005eae2) main_video2_pane_g_ParamLimits

0xf654,	// (0x0005eae2) main_video2_pane_g

0x8111,	// (0x0005759f) main_video2_pane_t1_ParamLimits

0x8111,	// (0x0005759f) main_video2_pane_t1

0x812b,	// (0x000575b9) main_video2_pane_t2_ParamLimits

0x812b,	// (0x000575b9) main_video2_pane_t2

0x8151,	// (0x000575df) main_video2_pane_t3_ParamLimits

0x8151,	// (0x000575df) main_video2_pane_t3

0x0002,

0xf661,	// (0x0005eaef) main_video2_pane_t_ParamLimits

0xf661,	// (0x0005eaef) main_video2_pane_t

0x7a28,	// (0x00056eb6) call_muted_g2

0x0001,

0xf603,	// (0x0005ea91) call_muted_g

0xe7aa,	// (0x0005dc38) main_mup2_pane

0x2879,	// (0x00051d07) main_mup2_pane_g1_ParamLimits

0x2879,	// (0x00051d07) main_mup2_pane_g1

0x8177,	// (0x00057605) main_mup2_pane_g2_ParamLimits

0x8177,	// (0x00057605) main_mup2_pane_g2

0x83fb,	// (0x00057889) main_mup_pane_g13_cp1

0x8403,	// (0x00057891) mup_volume_pane_cp1

0x8199,	// (0x00057627) main_mup2_pane_g4_ParamLimits

0x8199,	// (0x00057627) main_mup2_pane_g4

0x81aa,	// (0x00057638) main_mup2_pane_g5_ParamLimits

0x81aa,	// (0x00057638) main_mup2_pane_g5

0x81bb,	// (0x00057649) main_mup2_pane_g6_ParamLimits

0x81bb,	// (0x00057649) main_mup2_pane_g6

0x81cc,	// (0x0005765a) main_mup2_pane_g7_ParamLimits

0x81cc,	// (0x0005765a) main_mup2_pane_g7

0x0006,

0xf668,	// (0x0005eaf6) main_mup2_pane_g_ParamLimits

0xf668,	// (0x0005eaf6) main_mup2_pane_g

0x81e8,	// (0x00057676) main_mup2_pane_t1_ParamLimits

0x81e8,	// (0x00057676) main_mup2_pane_t1

0x81ff,	// (0x0005768d) main_mup2_pane_t2_ParamLimits

0x81ff,	// (0x0005768d) main_mup2_pane_t2

0x8216,	// (0x000576a4) main_mup2_pane_t3_ParamLimits

0x8216,	// (0x000576a4) main_mup2_pane_t3

0x822d,	// (0x000576bb) main_mup2_pane_t4_ParamLimits

0x822d,	// (0x000576bb) main_mup2_pane_t4

0x8247,	// (0x000576d5) main_mup2_pane_t5_ParamLimits

0x8247,	// (0x000576d5) main_mup2_pane_t5

0x8261,	// (0x000576ef) main_mup2_pane_t6_ParamLimits

0x8261,	// (0x000576ef) main_mup2_pane_t6

0x0005,

0xf677,	// (0x0005eb05) main_mup2_pane_t_ParamLimits

0xf677,	// (0x0005eb05) main_mup2_pane_t

0x8299,	// (0x00057727) mup2_visualizer_pane_ParamLimits

0x8299,	// (0x00057727) mup2_visualizer_pane

0x82cf,	// (0x0005775d) mup_progress_pane_cp_ParamLimits

0x82cf,	// (0x0005775d) mup_progress_pane_cp

0x83e6,	// (0x00057874) mup_volume_pane_cp_ParamLimits

0x83e6,	// (0x00057874) mup_volume_pane_cp

0x82e8,	// (0x00057776) mup2_visualizer_pane_g1_ParamLimits

0x82e8,	// (0x00057776) mup2_visualizer_pane_g1

0x284b,	// (0x00051cd9) mup2_visualizer_pane_g2_ParamLimits

0x284b,	// (0x00051cd9) mup2_visualizer_pane_g2

0x82fd,	// (0x0005778b) mup2_visualizer_pane_g3_ParamLimits

0x82fd,	// (0x0005778b) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x0005eb12) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x0005eb12) mup2_visualizer_pane_g

0x1642,	// (0x00050ad0) aid_size_cell_fmradio

0x7b3e,	// (0x00056fcc) aid_height_parent_landcape

0xeed9,	// (0x0005e367) wml_content_pane_cp

0xeee1,	// (0x0005e36f) wml_tabs_pane

0xeeea,	// (0x0005e378) popup_wml_miniature_window

0xeef2,	// (0x0005e380) scroll_pane_cp021

0xef06,	// (0x0005e394) wml_content_pane_comp8

0xe7aa,	// (0x0005dc38) bg_popup_sub_pane_cp05

0x2869,	// (0x00051cf7) popup_wml_miniature_window_g1

0x2871,	// (0x00051cff) wml_miniature_view_pane

0x8309,	// (0x00057797) aid_size_wml_view

0x8311,	// (0x0005779f) wml_miniature_view_pane_g1

0x831a,	// (0x000577a8) wml_miniature_view_pane_g2

0x8323,	// (0x000577b1) wml_miniature_view_pane_g3

0x832b,	// (0x000577b9) wml_miniature_view_pane_g4

0x8333,	// (0x000577c1) wml_miniature_view_pane_g5

0x833b,	// (0x000577c9) wml_miniature_view_pane_g6

0x8343,	// (0x000577d1) wml_miniature_view_pane_g7

0x834b,	// (0x000577d9) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x0005eb19) wml_miniature_view_pane_g

0x2879,	// (0x00051d07) background_graphic_ParamLimits

0x2879,	// (0x00051d07) background_graphic

0x2885,	// (0x00051d13) wml_tabs_2_pane

0x288e,	// (0x00051d1c) wml_tabs_3_pane_ParamLimits

0x288e,	// (0x00051d1c) wml_tabs_3_pane

0x28a0,	// (0x00051d2e) wml_tabs_4_pane_ParamLimits

0x28a0,	// (0x00051d2e) wml_tabs_4_pane

0x28b6,	// (0x00051d44) wml_tabs_5_pane_ParamLimits

0x28b6,	// (0x00051d44) wml_tabs_5_pane

0x28d0,	// (0x00051d5e) wml_tabs_pane_g2_ParamLimits

0x28d0,	// (0x00051d5e) wml_tabs_pane_g2

0x28e4,	// (0x00051d72) wml_tabs_pane_g3_ParamLimits

0x28e4,	// (0x00051d72) wml_tabs_pane_g3

0x8353,	// (0x000577e1) wml_tabs_2_active_pane_ParamLimits

0x8353,	// (0x000577e1) wml_tabs_2_active_pane

0x8365,	// (0x000577f3) wml_tabs_2_passive_pane_ParamLimits

0x8365,	// (0x000577f3) wml_tabs_2_passive_pane

0x8377,	// (0x00057805) wml_tabs_3_active_pane_cp_ParamLimits

0x8377,	// (0x00057805) wml_tabs_3_active_pane_cp

0x838a,	// (0x00057818) wml_tabs_3_passive_pane_ParamLimits

0x838a,	// (0x00057818) wml_tabs_3_passive_pane

0x839b,	// (0x00057829) wml_tabs_3_passive_pane_cp_ParamLimits

0x839b,	// (0x00057829) wml_tabs_3_passive_pane_cp

0x83b0,	// (0x0005783e) tabs_4_active_pane

0x83b8,	// (0x00057846) tabs_4_passive_pane

0x83c0,	// (0x0005784e) tabs_4_passive_pane_cp

0x83c8,	// (0x00057856) tabs_4_passive_pane_cp2

0x7903,	// (0x00056d91) aid_height_text

0x7018,	// (0x000564a6) mup_volume_cont_pane_ParamLimits

0x7018,	// (0x000564a6) mup_volume_cont_pane

0x4d5e,	// (0x000541ec) aid_size_cell_pinb

0x4d68,	// (0x000541f6) aid_size_list_pinb

0x82b8,	// (0x00057746) mup2_volume_cont_pane_ParamLimits

0x82b8,	// (0x00057746) mup2_volume_cont_pane

0x83d2,	// (0x00057860) mup2_volume_cont_pane_g1_ParamLimits

0x83d2,	// (0x00057860) mup2_volume_cont_pane_g1

0x49c2,	// (0x00053e50) aid_size_cell_touch_ParamLimits

0x49c2,	// (0x00053e50) aid_size_cell_touch

0x4c7d,	// (0x0005410b) touch_pane_ParamLimits

0x4c7d,	// (0x0005410b) touch_pane

0x4c73,	// (0x00054101) main_rss2_pane

0x2901,	// (0x00051d8f) listscroll_rss2_pane

0x290a,	// (0x00051d98) rss2_navigation_pane

0x2912,	// (0x00051da0) list_rss2_pane

0x1212,	// (0x000506a0) scroll_pane_cp22

0x291a,	// (0x00051da8) rss2_navigation_pane_g1

0x2923,	// (0x00051db1) rss2_navigation_pane_g2

0x292b,	// (0x00051db9) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x0005eb2a) rss2_navigation_pane_g

0x2933,	// (0x00051dc1) rss2_navigation_pane_t1

0x840b,	// (0x00057899) rss2_list_single_pane_ParamLimits

0x840b,	// (0x00057899) rss2_list_single_pane

0x2941,	// (0x00051dcf) rss2_list_single_pane_t2

0x294f,	// (0x00051ddd) rss2_list_single_pane_t3_ParamLimits

0x294f,	// (0x00051ddd) rss2_list_single_pane_t3

0x296c,	// (0x00051dfa) rss2_list_single_pane_t4

0x678d,	// (0x00055c1b) smil_status_pane_g1

0x7b55,	// (0x00056fe3) main_image2_pane_ParamLimits

0x7b55,	// (0x00056fe3) main_image2_pane

0x7fda,	// (0x00057468) main_camera2_pane_g9_ParamLimits

0x7fda,	// (0x00057468) main_camera2_pane_g9

0x802e,	// (0x000574bc) main_camera2_pane_t5_ParamLimits

0x802e,	// (0x000574bc) main_camera2_pane_t5

0x8040,	// (0x000574ce) main_camera2_pane_t6_ParamLimits

0x8040,	// (0x000574ce) main_camera2_pane_t6

0x842e,	// (0x000578bc) main_image2_pane_g1_ParamLimits

0x842e,	// (0x000578bc) main_image2_pane_g1

0x76a0,	// (0x00056b2e) smil2_video_pane_ParamLimits

0x76a0,	// (0x00056b2e) smil2_video_pane

0x48d3,	// (0x00053d61) aid_zoom_text_primary_cp

0x4c18,	// (0x000540a6) popup_preview_fixed_window

0xee42,	// (0x0005e2d0) im_reading_pane_g1

0x7f24,	// (0x000573b2) cams2_bc_adjust_pane_cp_ParamLimits

0x7f24,	// (0x000573b2) cams2_bc_adjust_pane_cp

0x806b,	// (0x000574f9) cams2_bc_adjust_pane_ParamLimits

0x806b,	// (0x000574f9) cams2_bc_adjust_pane

0x37e1,	// (0x00052c6f) cams2_bc_adjust_pane_g1

0x843a,	// (0x000578c8) cams2_slider_pane

0x8443,	// (0x000578d1) cams2_slider_pane_g1

0x844c,	// (0x000578da) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x0005eb31) cams2_slider_pane_g

0x4e59,	// (0x000542e7) calc_display_pane_ParamLimits

0x4e77,	// (0x00054305) calc_paper_pane_ParamLimits

0x4e93,	// (0x00054321) grid_calc_pane_ParamLimits

0x6a2f,	// (0x00055ebd) popup_clock_digital_window_t1_ParamLimits

0x15df,	// (0x00050a6d) main_image_pane_t1

0x4e3f,	// (0x000542cd) aid_size_cell_calc_ParamLimits

0x4e3f,	// (0x000542cd) aid_size_cell_calc

0x7b86,	// (0x00057014) popup_blid_sat_info2_window_ParamLimits

0x7b86,	// (0x00057014) popup_blid_sat_info2_window

0x2982,	// (0x00051e10) aid_size_cell_blid

0x298a,	// (0x00051e18) bg_popup_window_pane_cp07

0x29ad,	// (0x00051e3b) grid_popup_blid_pane

0x29b7,	// (0x00051e45) heading_pane_cp05_ParamLimits

0x29b7,	// (0x00051e45) heading_pane_cp05

0x2a81,	// (0x00051f0f) cell_popup_blid_pane_ParamLimits

0x2a81,	// (0x00051f0f) cell_popup_blid_pane

0x2aab,	// (0x00051f39) cell_popup_blid_pane_g1

0x2ab3,	// (0x00051f41) cell_popup_blid_pane_t1

0x827e,	// (0x0005770c) mup2_indicator_pane_ParamLimits

0x827e,	// (0x0005770c) mup2_indicator_pane

0x134c,	// (0x000507da) mup2_visualizer_osc_pane

0x2857,	// (0x00051ce5) mup2_visualizer_spec_pane_ParamLimits

0x2857,	// (0x00051ce5) mup2_visualizer_spec_pane

0x8466,	// (0x000578f4) mup2_spec_half_pane

0x846f,	// (0x000578fd) mup2_spec_half_pane_cp

0x8477,	// (0x00057905) mup2_spec_bar_pane_ParamLimits

0x8477,	// (0x00057905) mup2_spec_bar_pane

0x27e1,	// (0x00051c6f) mup2_spec_bar_pane_g1

0x27eb,	// (0x00051c79) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0005eaa4) mup2_spec_bar_pane_g

0x8496,	// (0x00057924) mup2_osc_middle_pane

0x27fd,	// (0x00051c8b) mup2_visualizer_osc_pane_g1

0xe374,	// (0x0005d802) popup_number_entry_window_t1_ParamLimits

0xe387,	// (0x0005d815) popup_number_entry_window_t2_ParamLimits

0xe399,	// (0x0005d827) popup_number_entry_window_t3_ParamLimits

0xe3ab,	// (0x0005d839) popup_number_entry_window_t5_ParamLimits

0xe3ab,	// (0x0005d839) popup_number_entry_window_t5

0xf0d8,	// (0x0005e566) popup_number_entry_window_t_ParamLimits

0xe3e0,	// (0x0005d86e) text_title_cp2_ParamLimits

0x738d,	// (0x0005681b) aid_hotspot_pointer_text2_pane

0x7427,	// (0x000568b5) main_viewer_pane_g9_ParamLimits

0x7427,	// (0x000568b5) main_viewer_pane_g9

0xf071,	// (0x0005e4ff) cale_month_pane_t1_ParamLimits

0x0014,	// (0x0004f4a2) bg_cale_pane_ParamLimits

0x002c,	// (0x0004f4ba) list_cale_pane_ParamLimits

0xec18,	// (0x0005e0a6) listscroll_cale_day_pane_t1

0x003d,	// (0x0004f4cb) scroll_pane_cp09_ParamLimits

0x7057,	// (0x000564e5) main_mup_eq_pane_t1_ParamLimits

0x7057,	// (0x000564e5) main_mup_eq_pane_t1

0x7073,	// (0x00056501) main_mup_eq_pane_t2_ParamLimits

0x7073,	// (0x00056501) main_mup_eq_pane_t2

0x708f,	// (0x0005651d) main_mup_eq_pane_t3_ParamLimits

0x708f,	// (0x0005651d) main_mup_eq_pane_t3

0x70a9,	// (0x00056537) main_mup_eq_pane_t4_ParamLimits

0x70a9,	// (0x00056537) main_mup_eq_pane_t4

0x70c3,	// (0x00056551) main_mup_eq_pane_t5_ParamLimits

0x70c3,	// (0x00056551) main_mup_eq_pane_t5

0x70dd,	// (0x0005656b) main_mup_eq_pane_t6_ParamLimits

0x70dd,	// (0x0005656b) main_mup_eq_pane_t6

0x70f3,	// (0x00056581) main_mup_eq_pane_t7_ParamLimits

0x70f3,	// (0x00056581) main_mup_eq_pane_t7

0x7109,	// (0x00056597) main_mup_eq_pane_t8_ParamLimits

0x7109,	// (0x00056597) main_mup_eq_pane_t8

0x711f,	// (0x000565ad) main_mup_eq_pane_t9_ParamLimits

0x711f,	// (0x000565ad) main_mup_eq_pane_t9

0x713b,	// (0x000565c9) main_mup_eq_pane_t10_ParamLimits

0x713b,	// (0x000565c9) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x0005e8f3) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x0005e8f3) main_mup_eq_pane_t

0x7200,	// (0x0005668e) mup_equalizer_pane_cp5_ParamLimits

0x7218,	// (0x000566a6) mup_equalizer_pane_cp6_ParamLimits

0x7230,	// (0x000566be) mup_equalizer_pane_cp7_ParamLimits

0x4c73,	// (0x00054101) main_gallery_pane

0x2806,	// (0x00051c94) smil2_volume_pane

0x2821,	// (0x00051caf) smil_status_volume_pane_g1_ParamLimits

0x280e,	// (0x00051c9c) smil_status_volume_pane_g2_ParamLimits

0x7da8,	// (0x00057236) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x0005eaa9) smil_status_volume_pane_g_ParamLimits

0x298a,	// (0x00051e18) bg_popup_window_pane_cp07_ParamLimits

0x2998,	// (0x00051e26) blid_firmament_pane

0x849f,	// (0x0005792d) aid_size_cell_gallery_ParamLimits

0x849f,	// (0x0005792d) aid_size_cell_gallery

0x84ad,	// (0x0005793b) grid_gallery_pane_ParamLimits

0x84ad,	// (0x0005793b) grid_gallery_pane

0x84bd,	// (0x0005794b) cell_gallery_pane_ParamLimits

0x84bd,	// (0x0005794b) cell_gallery_pane

0x2ac1,	// (0x00051f4f) bg_cell_gallery_focus_pane_ParamLimits

0x2ac1,	// (0x00051f4f) bg_cell_gallery_focus_pane

0x2ad3,	// (0x00051f61) cell_gallery_pane_g1_ParamLimits

0x2ad3,	// (0x00051f61) cell_gallery_pane_g1

0x8508,	// (0x00057996) cell_gallery_pane_g2_ParamLimits

0x8508,	// (0x00057996) cell_gallery_pane_g2

0x8515,	// (0x000579a3) cell_gallery_pane_g3_ParamLimits

0x8515,	// (0x000579a3) cell_gallery_pane_g3

0x2adf,	// (0x00051f6d) cell_gallery_pane_g4_ParamLimits

0x2adf,	// (0x00051f6d) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x0005eb57) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x0005eb57) cell_gallery_pane_g

0x2aeb,	// (0x00051f79) bg_cell_gallery_focus_pane_g1

0x2af3,	// (0x00051f81) bg_cell_gallery_focus_pane_g2

0x2afb,	// (0x00051f89) bg_cell_gallery_focus_pane_g3

0x2b03,	// (0x00051f91) bg_cell_gallery_focus_pane_g4

0x2b0b,	// (0x00051f99) bg_cell_gallery_focus_pane_g5

0x2b13,	// (0x00051fa1) bg_cell_gallery_focus_pane_g6

0x2b1b,	// (0x00051fa9) bg_cell_gallery_focus_pane_g7

0x2b23,	// (0x00051fb1) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0005eb60) bg_cell_gallery_focus_pane_g

0x2b2b,	// (0x00051fb9) aid_firma_cardinal

0x2b3f,	// (0x00051fcd) blid_firmament_pane_t1

0x2b56,	// (0x00051fe4) blid_firmament_pane_t2

0x2b6d,	// (0x00051ffb) blid_firmament_pane_t3

0x2b84,	// (0x00052012) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0005eb71) blid_firmament_pane_t

0x2b9b,	// (0x00052029) blid_sat_info_pane

0x2bab,	// (0x00052039) blid_sat_info_pane_g1

0x2bab,	// (0x00052039) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x0005eb7a) blid_sat_info_pane_g

0x2bb5,	// (0x00052043) blid_sat_info_pane_t1

0x2bc3,	// (0x00052051) smil2_volume_content_pane

0x2bcc,	// (0x0005205a) smil2_volume_pane_g1

0x2bd4,	// (0x00052062) smil2_volume_content_pane_g1

0x2bdd,	// (0x0005206b) smil2_volume_content_pane_g2

0x2be6,	// (0x00052074) smil2_volume_content_pane_g3

0x2bef,	// (0x0005207d) smil2_volume_content_pane_g4

0x2bf8,	// (0x00052086) smil2_volume_content_pane_g5

0x2c01,	// (0x0005208f) smil2_volume_content_pane_g6

0x2c0a,	// (0x00052098) smil2_volume_content_pane_g7

0x2c13,	// (0x000520a1) smil2_volume_content_pane_g8

0x2c1c,	// (0x000520aa) smil2_volume_content_pane_g9

0x2c25,	// (0x000520b3) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0005eb7f) smil2_volume_content_pane_g

0x5402,	// (0x00054890) cale_week_day_heading_pane_t1_ParamLimits

0x542f,	// (0x000548bd) cale_week_day_heading_pane_t2_ParamLimits

0x545c,	// (0x000548ea) cale_week_day_heading_pane_t3_ParamLimits

0x5489,	// (0x00054917) cale_week_day_heading_pane_t4_ParamLimits

0x54b6,	// (0x00054944) cale_week_day_heading_pane_t5_ParamLimits

0x54e3,	// (0x00054971) cale_week_day_heading_pane_t6_ParamLimits

0x5510,	// (0x0005499e) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x0005e66b) cale_week_day_heading_pane_t_ParamLimits

0xec2a,	// (0x0005e0b8) bg_cale_side_pane_ParamLimits

0x553d,	// (0x000549cb) cale_week_time_pane_t1_ParamLimits

0x5555,	// (0x000549e3) cale_week_time_pane_t2_ParamLimits

0x556d,	// (0x000549fb) cale_week_time_pane_t3_ParamLimits

0x5585,	// (0x00054a13) cale_week_time_pane_t4_ParamLimits

0x559d,	// (0x00054a2b) cale_week_time_pane_t5_ParamLimits

0x55b5,	// (0x00054a43) cale_week_time_pane_t6_ParamLimits

0x55cd,	// (0x00054a5b) cale_week_time_pane_t7_ParamLimits

0x55e5,	// (0x00054a73) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x0005e67a) cale_week_time_pane_t_ParamLimits

0x5601,	// (0x00054a8f) cell_cale_week_pane_g2_ParamLimits

0xec2a,	// (0x0005e0b8) bg_cale_side_pane_cp01_ParamLimits

0x6602,	// (0x00055a90) cale_month_week_pane_t1_ParamLimits

0x6619,	// (0x00055aa7) cale_month_week_pane_t2_ParamLimits

0x6630,	// (0x00055abe) cale_month_week_pane_t3_ParamLimits

0x6647,	// (0x00055ad5) cale_month_week_pane_t4_ParamLimits

0x665e,	// (0x00055aec) cale_month_week_pane_t5_ParamLimits

0x6675,	// (0x00055b03) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0005e753) cale_month_week_pane_t_ParamLimits

0x675a,	// (0x00055be8) cell_cale_month_pane_g1_ParamLimits

0x4c73,	// (0x00054101) main_cale_event_viewer_pane

0xe287,	// (0x0005d715) listscroll_cale_event_viewer_pane

0x2c2e,	// (0x000520bc) list_cale_ev_pane

0x2c36,	// (0x000520c4) scroll_pane_cp023

0x8522,	// (0x000579b0) field_cale_ev_pane_ParamLimits

0x8522,	// (0x000579b0) field_cale_ev_pane

0x2c42,	// (0x000520d0) field_cale_ev_content_pane_ParamLimits

0x2c42,	// (0x000520d0) field_cale_ev_content_pane

0x2c4e,	// (0x000520dc) field_cale_ev_pane_g1_ParamLimits

0x2c4e,	// (0x000520dc) field_cale_ev_pane_g1

0x2c5a,	// (0x000520e8) field_cale_ev_pane_g2_ParamLimits

0x2c5a,	// (0x000520e8) field_cale_ev_pane_g2

0x2c72,	// (0x00052100) field_cale_ev_pane_g3_ParamLimits

0x2c72,	// (0x00052100) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x0005eb94) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x0005eb94) field_cale_ev_pane_g

0x2c8a,	// (0x00052118) field_cale_ev_pane_t1_ParamLimits

0x2c8a,	// (0x00052118) field_cale_ev_pane_t1

0x8546,	// (0x000579d4) field_cale_ev_content_pane_t1_ParamLimits

0x8546,	// (0x000579d4) field_cale_ev_content_pane_t1

0x14c5,	// (0x00050953) bg_button_pane_cp01

0xead8,	// (0x0005df66) listscroll_cale_week_pane_ParamLimits

0x51ee,	// (0x0005467c) popup_toolbar_window_cp01

0xec18,	// (0x0005e0a6) listscroll_cale_week_pane_t1_ParamLimits

0xead8,	// (0x0005df66) listscroll_cale_day_pane_ParamLimits

0x51ee,	// (0x0005467c) popup_toolbar_window_cp02

0xec18,	// (0x0005e0a6) listscroll_cale_day_pane_t1_ParamLimits

0xead8,	// (0x0005df66) main_cale_month_pane_ParamLimits

0x7ca5,	// (0x00057133) popup_toolbar_window_cp03_ParamLimits

0x7ca5,	// (0x00057133) popup_toolbar_window_cp03

0x75b0,	// (0x00056a3e) main_image_pane_g2_ParamLimits

0x75b0,	// (0x00056a3e) main_image_pane_g2

0x75bc,	// (0x00056a4a) main_image_pane_g3_ParamLimits

0x75bc,	// (0x00056a4a) main_image_pane_g3

0x0002,

0xf4f7,	// (0x0005e985) main_image_pane_g_ParamLimits

0xf4f7,	// (0x0005e985) main_image_pane_g

0x15df,	// (0x00050a6d) main_image_pane_t1_ParamLimits

0x75c8,	// (0x00056a56) main_image_pane_t2_ParamLimits

0x75c8,	// (0x00056a56) main_image_pane_t2

0x75da,	// (0x00056a68) main_image_pane_t3_ParamLimits

0x75da,	// (0x00056a68) main_image_pane_t3

0x75ec,	// (0x00056a7a) main_image_pane_t4_ParamLimits

0x75ec,	// (0x00056a7a) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0005e98c) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0005e98c) main_image_pane_t

0x75fe,	// (0x00056a8c) popup_image_details_window_cp01

0x7608,	// (0x00056a96) popup_toobar_trans_pane_cp01_ParamLimits

0x7608,	// (0x00056a96) popup_toobar_trans_pane_cp01

0x7be7,	// (0x00057075) popup_image_details_window_ParamLimits

0x7be7,	// (0x00057075) popup_image_details_window

0x7bf5,	// (0x00057083) popup_image_focus_window

0x7f16,	// (0x000573a4) camera2_autofocus_pane_ParamLimits

0x7f16,	// (0x000573a4) camera2_autofocus_pane

0xe287,	// (0x0005d715) bg_popup_sub_pane_cp06

0x2ca1,	// (0x0005212f) popup_image_focus_window_g1

0x2ca9,	// (0x00052137) popup_image_focus_window_g2

0x2cb1,	// (0x0005213f) popup_image_focus_window_g3

0x2cb9,	// (0x00052147) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x0005eb9b) popup_image_focus_window_g

0x2cc1,	// (0x0005214f) popup_image_focus_window_t1

0x2ccf,	// (0x0005215d) popup_image_focus_window_t2

0x2cdf,	// (0x0005216d) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x0005eba4) popup_image_focus_window_t

0x2ced,	// (0x0005217b) camera2_autofocus_pane_g1

0xe409,	// (0x0005d897) bg_tb_trans_pane_cp01

0x2cfb,	// (0x00052189) popup_image_details_window_g1

0x2d0e,	// (0x0005219c) popup_image_details_window_g2

0x0002,

0xf728,	// (0x0005ebb6) popup_image_details_window_g

0x2d37,	// (0x000521c5) popup_image_details_window_t1

0x2d49,	// (0x000521d7) popup_image_details_window_t2

0x2d62,	// (0x000521f0) popup_image_details_window_t3

0x2d76,	// (0x00052204) popup_image_details_window_t4

0x2d91,	// (0x0005221f) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0005ebbd) popup_image_details_window_t

0xeac4,	// (0x0005df52) bg_calc_paper_pane_ParamLimits

0x4c73,	// (0x00054101) grid_highlight_pane_cp013

0x4f90,	// (0x0005441e) list_calc_pane_ParamLimits

0x4fa2,	// (0x00054430) scroll_pane_cp024

0xead8,	// (0x0005df66) bg_calc_display_pane_ParamLimits

0x4faa,	// (0x00054438) calc_display_pane_t1_ParamLimits

0x4fbf,	// (0x0005444d) calc_display_pane_t2_ParamLimits

0x4fd4,	// (0x00054462) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0005e5ed) calc_display_pane_t_ParamLimits

0x50a8,	// (0x00054536) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0005e60a) cell_calc_pane_g

0x50b1,	// (0x0005453f) cell_calc_pane_t1

0xeb37,	// (0x0005dfc5) grid_highlight_pane_cp02_ParamLimits

0xeb4d,	// (0x0005dfdb) toolbar_button_pane_cp01_ParamLimits

0xeb4d,	// (0x0005dfdb) toolbar_button_pane_cp01

0x1624,	// (0x00050ab2) temp_image_control_pane_ParamLimits

0x1624,	// (0x00050ab2) temp_image_control_pane

0x7b55,	// (0x00056fe3) main_mp3_pane

0x2dab,	// (0x00052239) temp_image_control_pane_g1_ParamLimits

0x2dab,	// (0x00052239) temp_image_control_pane_g1

0x2db9,	// (0x00052247) temp_image_control_pane_g2_ParamLimits

0x2db9,	// (0x00052247) temp_image_control_pane_g2

0x2dcb,	// (0x00052259) temp_image_control_pane_g3_ParamLimits

0x2dcb,	// (0x00052259) temp_image_control_pane_g3

0x8591,	// (0x00057a1f) temp_image_control_pane_g4_ParamLimits

0x8591,	// (0x00057a1f) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x0005ebc8) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x0005ebc8) temp_image_control_pane_g

0x2dab,	// (0x00052239) main_mp3_pane_g1

0x85a2,	// (0x00057a30) main_mp3_pane_g2

0x0007,

0xf743,	// (0x0005ebd1) main_mp3_pane_g

0x2e0e,	// (0x0005229c) main_mp3_pane_t1

0xec8f,	// (0x0005e11d) main_camera_pane_g8_ParamLimits

0xec8f,	// (0x0005e11d) main_camera_pane_g8

0x58ad,	// (0x00054d3b) main_video_pane_g7_ParamLimits

0x58ad,	// (0x00054d3b) main_video_pane_g7

0x8059,	// (0x000574e7) main_camera2_pane_t7_ParamLimits

0x8059,	// (0x000574e7) main_camera2_pane_t7

0xee99,	// (0x0005e327) scroll_pane_cp025_ParamLimits

0xee99,	// (0x0005e327) scroll_pane_cp025

0xeead,	// (0x0005e33b) scroll_pane_cp026_ParamLimits

0xeead,	// (0x0005e33b) scroll_pane_cp026

0xeebc,	// (0x0005e34a) wml_content_pane_ParamLimits

0x4c73,	// (0x00054101) main_touch_calib_pane

0x8646,	// (0x00057ad4) main_touch_calib_pane_g1

0x8652,	// (0x00057ae0) main_touch_calib_pane_g2

0x865e,	// (0x00057aec) main_touch_calib_pane_g3

0x866a,	// (0x00057af8) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x0005ebef) main_touch_calib_pane_g

0x8676,	// (0x00057b04) main_touch_calib_pane_t1

0x868d,	// (0x00057b1b) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x0005ebf8) main_touch_calib_pane_t

0x128d,	// (0x0005071b) mup_progress_pane_cp02

0x12ac,	// (0x0005073a) navi_pane_g1

0x130e,	// (0x0005079c) navi_pane_mp_t3

0x7b55,	// (0x00056fe3) main_mp3_pane_ParamLimits

0x7ce7,	// (0x00057175) navi_pane_ParamLimits

0x2dab,	// (0x00052239) main_mp3_pane_g1_ParamLimits

0x85a2,	// (0x00057a30) main_mp3_pane_g2_ParamLimits

0x85ae,	// (0x00057a3c) main_mp3_pane_g3_ParamLimits

0x85ae,	// (0x00057a3c) main_mp3_pane_g3

0x85ba,	// (0x00057a48) main_mp3_pane_g4_ParamLimits

0x85ba,	// (0x00057a48) main_mp3_pane_g4

0x2ddb,	// (0x00052269) main_mp3_pane_g5_ParamLimits

0x2ddb,	// (0x00052269) main_mp3_pane_g5

0x2de9,	// (0x00052277) main_mp3_pane_g6_ParamLimits

0x2de9,	// (0x00052277) main_mp3_pane_g6

0x2df6,	// (0x00052284) main_mp3_pane_g7_ParamLimits

0x2df6,	// (0x00052284) main_mp3_pane_g7

0x2e02,	// (0x00052290) main_mp3_pane_g8_ParamLimits

0x2e02,	// (0x00052290) main_mp3_pane_g8

0xf743,	// (0x0005ebd1) main_mp3_pane_g_ParamLimits

0x85c6,	// (0x00057a54) main_mp3_pane_t2

0x85d6,	// (0x00057a64) main_mp3_pane_t3

0x2e1c,	// (0x000522aa) main_mp3_pane_t4

0x2e2a,	// (0x000522b8) main_mp3_pane_t5

0x0005,

0xf754,	// (0x0005ebe2) main_mp3_pane_t

0x2e38,	// (0x000522c6) mup_progress_pane_cp01

0x48d3,	// (0x00053d61) aid_zoom_text_secondary2

0x2c2e,	// (0x000520bc) list_cale_ev2_pane

0x2c36,	// (0x000520c4) scroll_pane_cp023_ParamLimits

0x86e8,	// (0x00057b76) field_cale_ev2_pane_ParamLimits

0x86e8,	// (0x00057b76) field_cale_ev2_pane

0x8703,	// (0x00057b91) field_cale_ev2_pane_g1_ParamLimits

0x8703,	// (0x00057b91) field_cale_ev2_pane_g1

0x870f,	// (0x00057b9d) field_cale_ev2_pane_g2_ParamLimits

0x870f,	// (0x00057b9d) field_cale_ev2_pane_g2

0x8727,	// (0x00057bb5) field_cale_ev2_pane_g3_ParamLimits

0x8727,	// (0x00057bb5) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x0005ec03) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x0005ec03) field_cale_ev2_pane_g

0x873f,	// (0x00057bcd) field_cale_ev2_pane_t1_ParamLimits

0x873f,	// (0x00057bcd) field_cale_ev2_pane_t1

0x8756,	// (0x00057be4) field_cale_ev2_pane_t2_ParamLimits

0x8756,	// (0x00057be4) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x0005ec0c) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x0005ec0c) field_cale_ev2_pane_t

0x748f,	// (0x0005691d) main_postcard_pane_g5_ParamLimits

0x748f,	// (0x0005691d) main_postcard_pane_g5

0x749d,	// (0x0005692b) main_postcard_pane_g6_ParamLimits

0x749d,	// (0x0005692b) main_postcard_pane_g6

0x56eb,	// (0x00054b79) camera2_autofocus_pane_cp_ParamLimits

0x56eb,	// (0x00054b79) camera2_autofocus_pane_cp

0x7b55,	// (0x00056fe3) main_mup3_pane

0x878b,	// (0x00057c19) main_mup3_pane_g1_ParamLimits

0x878b,	// (0x00057c19) main_mup3_pane_g1

0x87ac,	// (0x00057c3a) main_mup3_pane_g2_ParamLimits

0x87ac,	// (0x00057c3a) main_mup3_pane_g2

0x8828,	// (0x00057cb6) main_mup3_pane_g3_ParamLimits

0x8828,	// (0x00057cb6) main_mup3_pane_g3

0x8871,	// (0x00057cff) main_mup3_pane_g4_ParamLimits

0x8871,	// (0x00057cff) main_mup3_pane_g4

0x88ba,	// (0x00057d48) main_mup3_pane_g5_ParamLimits

0x88ba,	// (0x00057d48) main_mup3_pane_g5

0x8903,	// (0x00057d91) main_mup3_pane_g6_ParamLimits

0x8903,	// (0x00057d91) main_mup3_pane_g6

0x2e40,	// (0x000522ce) main_mup3_pane_g7_ParamLimits

0x2e40,	// (0x000522ce) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x0005ec1c) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x0005ec1c) main_mup3_pane_g

0x897d,	// (0x00057e0b) main_mup3_pane_t1_ParamLimits

0x897d,	// (0x00057e0b) main_mup3_pane_t1

0x89ee,	// (0x00057e7c) main_mup3_pane_t2_ParamLimits

0x89ee,	// (0x00057e7c) main_mup3_pane_t2

0x8ab7,	// (0x00057f45) main_mup3_pane_t4_ParamLimits

0x8ab7,	// (0x00057f45) main_mup3_pane_t4

0x8b0b,	// (0x00057f99) main_mup3_pane_t5_ParamLimits

0x8b0b,	// (0x00057f99) main_mup3_pane_t5

0x8bc3,	// (0x00058051) main_mup3_pane_t6_ParamLimits

0x8bc3,	// (0x00058051) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x0005ec2d) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x0005ec2d) main_mup3_pane_t

0x8c6f,	// (0x000580fd) mup3_progress_pane_ParamLimits

0x8c6f,	// (0x000580fd) mup3_progress_pane

0x8cf1,	// (0x0005817f) popup_mup3_control_window_ParamLimits

0x8cf1,	// (0x0005817f) popup_mup3_control_window

0x2e4e,	// (0x000522dc) popup_mup3_text_window

0x8d0e,	// (0x0005819c) mup3_progress_pane_t1

0x8d2d,	// (0x000581bb) mup3_progress_pane_t2

0x2e56,	// (0x000522e4) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x0005ec3a) mup3_progress_pane_t

0x2e73,	// (0x00052301) mup_progress_pane_cp03

0xe287,	// (0x0005d715) bg_tb_trans_pane_cp04

0x8d4c,	// (0x000581da) mup3_volume_pane

0x8d54,	// (0x000581e2) popup_mup3_control_window_g1

0xce91,	// (0x0005c31f) mup3_volume_pane_g1

0xce9a,	// (0x0005c328) mup3_volume_pane_g2

0xcea3,	// (0x0005c331) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0005ec41) mup3_volume_pane_g

0xe287,	// (0x0005d715) bg_tb_trans_pane_cp03

0x2e83,	// (0x00052311) popup_mup3_text_window_g1

0x2e8b,	// (0x00052319) popup_mup3_text_window_t1

0xeb20,	// (0x0005dfae) list_calc_item_pane_g1_ParamLimits

0x28f8,	// (0x00051d86) mup_volume_pane_cp_g1

0x86a6,	// (0x00057b34) main_touch_calib_pane_t3

0x86bc,	// (0x00057b4a) main_touch_calib_pane_t4

0x86d2,	// (0x00057b60) main_touch_calib_pane_t5

0x49ae,	// (0x00053e3c) aid_cell_size_toolbar2

0x49b6,	// (0x00053e44) aid_popup3_width_pane

0x48cb,	// (0x00053d59) aid_zoom_text_msg_primary

0x56c0,	// (0x00054b4e) vorec_t7

0xeae4,	// (0x0005df72) bg_calc_paper_pane_g1_ParamLimits

0xeaf0,	// (0x0005df7e) bg_calc_paper_pane_g2_ParamLimits

0xeafc,	// (0x0005df8a) bg_calc_paper_pane_g3_ParamLimits

0xeb08,	// (0x0005df96) bg_calc_paper_pane_g4_ParamLimits

0xeb14,	// (0x0005dfa2) bg_calc_paper_pane_g5_ParamLimits

0x5015,	// (0x000544a3) bg_calc_paper_pane_g6_ParamLimits

0x5026,	// (0x000544b4) bg_calc_paper_pane_g7_ParamLimits

0x5037,	// (0x000544c5) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x0005e5f4) bg_calc_paper_pane_g_ParamLimits

0x504a,	// (0x000544d8) calc_bg_paper_pane_g9_ParamLimits

0x57dc,	// (0x00054c6a) image_qvga_pane_ParamLimits

0x57dc,	// (0x00054c6a) image_qvga_pane

0xea05,	// (0x0005de93) bg_popup_sub_pane_cp04_ParamLimits

0x155b,	// (0x000509e9) popup_mup_playback_window_g1_ParamLimits

0x1567,	// (0x000509f5) popup_mup_playback_window_t1_ParamLimits

0x157c,	// (0x00050a0a) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0005e980) popup_mup_playback_window_t_ParamLimits

0x8188,	// (0x00057616) main_mup2_pane_g3_ParamLimits

0x8188,	// (0x00057616) main_mup2_pane_g3

0x5ae1,	// (0x00054f6f) popup_toolbar_window_cp04

0x1985,	// (0x00050e13) popup_call2_audio_second_window_g3_ParamLimits

0x1985,	// (0x00050e13) popup_call2_audio_second_window_g3

0x1d8f,	// (0x0005121d) popup_call2_audio_first_window_g4_ParamLimits

0x1d8f,	// (0x0005121d) popup_call2_audio_first_window_g4

0x240e,	// (0x0005189c) popup_call2_audio_in_window_g4_ParamLimits

0x240e,	// (0x0005189c) popup_call2_audio_in_window_g4

0x75a3,	// (0x00056a31) aid_area_sk_bg_cut_ParamLimits

0x75a3,	// (0x00056a31) aid_area_sk_bg_cut

0x1591,	// (0x00050a1f) aid_area_sk_bg_cut_2_ParamLimits

0x1591,	// (0x00050a1f) aid_area_sk_bg_cut_2

0x84f8,	// (0x00057986) aid_placing_details_win

0x8500,	// (0x0005798e) aid_placing_details_win_2

0x2ced,	// (0x0005217b) camera2_autofocus_pane_g1_ParamLimits

0x4c09,	// (0x00054097) popup_fixed_preview_cale_window_ParamLimits

0x4c09,	// (0x00054097) popup_fixed_preview_cale_window

0x136f,	// (0x000507fd) navi_slider_pane_g3

0x1366,	// (0x000507f4) navi_slider_pane_g4

0x135d,	// (0x000507eb) navi_slider_pane_g5

0x136f,	// (0x000507fd) navi_slider_pane_g6

0x6dd1,	// (0x0005625f) navi_slider_pane_g7

0x1492,	// (0x00050920) mup_scale_pane_g3

0x149b,	// (0x00050929) mup_scale_pane_g4

0x14a4,	// (0x00050932) mup_scale_pane_g5

0x7248,	// (0x000566d6) mup_scale_pane_g6

0x7251,	// (0x000566df) mup_scale_pane_g7

0x136f,	// (0x000507fd) cams2_slider_pane_g3

0x297a,	// (0x00051e08) cams2_slider_pane_g4

0x8455,	// (0x000578e3) cams2_slider_pane_g5

0x136f,	// (0x000507fd) cams2_slider_pane_g6

0x845d,	// (0x000578eb) cams2_slider_pane_g7

0x2bab,	// (0x00052039) camera2_autofocus_pane_cp_g1

0x2e99,	// (0x00052327) bg_popup_preview_window_pane_cp02_ParamLimits

0x2e99,	// (0x00052327) bg_popup_preview_window_pane_cp02

0x2ea5,	// (0x00052333) list_fp_cale_pane_ParamLimits

0x2ea5,	// (0x00052333) list_fp_cale_pane

0x2eb1,	// (0x0005233f) popup_fixed_preview_cale_window_t1_ParamLimits

0x2eb1,	// (0x0005233f) popup_fixed_preview_cale_window_t1

0x8d5d,	// (0x000581eb) popup_fixed_preview_cale_window_t2_ParamLimits

0x8d5d,	// (0x000581eb) popup_fixed_preview_cale_window_t2

0x8d72,	// (0x00058200) popup_fixed_preview_cale_window_t3_ParamLimits

0x8d72,	// (0x00058200) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x0005ec48) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x0005ec48) popup_fixed_preview_cale_window_t

0x8d87,	// (0x00058215) list_single_fp_cale_pane_ParamLimits

0x8d87,	// (0x00058215) list_single_fp_cale_pane

0x2ecf,	// (0x0005235d) list_single_fp_cale_pane_g1_ParamLimits

0x2ecf,	// (0x0005235d) list_single_fp_cale_pane_g1

0x2edb,	// (0x00052369) list_single_fp_cale_pane_g2_ParamLimits

0x2edb,	// (0x00052369) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0005ec4f) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0005ec4f) list_single_fp_cale_pane_g

0x2ef4,	// (0x00052382) list_single_fp_cale_pane_t1_ParamLimits

0x2ef4,	// (0x00052382) list_single_fp_cale_pane_t1

0x2f06,	// (0x00052394) list_single_fp_cale_pane_t2_ParamLimits

0x2f06,	// (0x00052394) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x0005ec56) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x0005ec56) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4c73,	// (0x00054101) main_dialer_pane

0x8d94,	// (0x00058222) aid_cell_size_keypad

0x8d9e,	// (0x0005822c) dialer_ne_pane

0x8da8,	// (0x00058236) grid_dialer_command_1_pane

0x8db0,	// (0x0005823e) grid_dialer_command_2_pane

0x8db8,	// (0x00058246) grid_dialer_keypad_pane

0x8dcc,	// (0x0005825a) bg_popup_call_pane_cp06_ParamLimits

0x8dcc,	// (0x0005825a) bg_popup_call_pane_cp06

0x8dd8,	// (0x00058266) dialer_ne_clear_pane_ParamLimits

0x8dd8,	// (0x00058266) dialer_ne_clear_pane

0x2f39,	// (0x000523c7) dialer_ne_pane_g1

0x2f41,	// (0x000523cf) dialer_ne_pane_t1_ParamLimits

0x2f41,	// (0x000523cf) dialer_ne_pane_t1

0x8de4,	// (0x00058272) dialer_ne_pane_t2_ParamLimits

0x8de4,	// (0x00058272) dialer_ne_pane_t2

0x8e01,	// (0x0005828f) dialer_ne_pane_t3_ParamLimits

0x8e01,	// (0x0005828f) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x0005ec5b) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x0005ec5b) dialer_ne_pane_t

0x8e25,	// (0x000582b3) dialer_ne_pane_t3_copy1_ParamLimits

0x8e25,	// (0x000582b3) dialer_ne_pane_t3_copy1

0x8e49,	// (0x000582d7) cell_dialer_keypad_pane_ParamLimits

0x8e49,	// (0x000582d7) cell_dialer_keypad_pane

0x8e5e,	// (0x000582ec) cell_dialer_command_1_pane_ParamLimits

0x8e5e,	// (0x000582ec) cell_dialer_command_1_pane

0x8e74,	// (0x00058302) cell_dialer_command_2_pane_ParamLimits

0x8e74,	// (0x00058302) cell_dialer_command_2_pane

0x2f53,	// (0x000523e1) bg_button_pane_cp02_ParamLimits

0x2f53,	// (0x000523e1) bg_button_pane_cp02

0x8e83,	// (0x00058311) cell_dialer_keypad_pane_g1_ParamLimits

0x8e83,	// (0x00058311) cell_dialer_keypad_pane_g1

0x2f53,	// (0x000523e1) bg_button_pane_cp03_ParamLimits

0x2f53,	// (0x000523e1) bg_button_pane_cp03

0x8e98,	// (0x00058326) cell_dialer_command_1_pane_g1_ParamLimits

0x8e98,	// (0x00058326) cell_dialer_command_1_pane_g1

0x2f5f,	// (0x000523ed) bg_button_pane_cp04

0x8eac,	// (0x0005833a) cell_dialer_command_2_pane_g1

0x134c,	// (0x000507da) bg_button_pane_cp06

0x2f67,	// (0x000523f5) dialer_ne_clear_pane_g1

0x6d14,	// (0x000561a2) navi_pane_g2

0x6d42,	// (0x000561d0) navi_pane_g3

0x0002,

0xf3f5,	// (0x0005e883) navi_pane_g

0x6d6d,	// (0x000561fb) navi_pane_mv_g2

0x6d94,	// (0x00056222) navi_pane_mv_g5

0x6d9c,	// (0x0005622a) navi_pane_mv_t1

0xead8,	// (0x0005df66) main_clock2_pane

0x8ede,	// (0x0005836c) main_clock2_list_pane_ParamLimits

0x8ede,	// (0x0005836c) main_clock2_list_pane

0x8f08,	// (0x00058396) main_clock2_pane_t1_ParamLimits

0x8f08,	// (0x00058396) main_clock2_pane_t1

0x8f2a,	// (0x000583b8) main_clock2_pane_t2_ParamLimits

0x8f2a,	// (0x000583b8) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x0005ec62) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x0005ec62) main_clock2_pane_t

0x8f87,	// (0x00058415) popup_clock_analogue_window_cp03_ParamLimits

0x8f87,	// (0x00058415) popup_clock_analogue_window_cp03

0x8fa7,	// (0x00058435) popup_clock_digital_window_cp02_ParamLimits

0x8fa7,	// (0x00058435) popup_clock_digital_window_cp02

0x9018,	// (0x000584a6) main_clock2_list_single_pane_ParamLimits

0x9018,	// (0x000584a6) main_clock2_list_single_pane

0x134c,	// (0x000507da) list_highlight_pane_cp05

0x2f6f,	// (0x000523fd) main_clock2_list_single_pane_t1

0x5ae1,	// (0x00054f6f) popup_toolbar_window_cp04_ParamLimits

0x8561,	// (0x000579ef) camera2_autofocus_pane_g2_ParamLimits

0x8561,	// (0x000579ef) camera2_autofocus_pane_g2

0x856d,	// (0x000579fb) camera2_autofocus_pane_g3_ParamLimits

0x856d,	// (0x000579fb) camera2_autofocus_pane_g3

0x8579,	// (0x00057a07) camera2_autofocus_pane_g4_ParamLimits

0x8579,	// (0x00057a07) camera2_autofocus_pane_g4

0x8585,	// (0x00057a13) camera2_autofocus_pane_g5_ParamLimits

0x8585,	// (0x00057a13) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x0005ebab) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x0005ebab) camera2_autofocus_pane_g

0x876b,	// (0x00057bf9) camera2_autofocus_pane_cp_g2

0x8773,	// (0x00057c01) camera2_autofocus_pane_cp_g3

0x877b,	// (0x00057c09) camera2_autofocus_pane_cp_g4

0x8783,	// (0x00057c11) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x0005ec11) camera2_autofocus_pane_cp_g

0x8dc4,	// (0x00058252) popup_dialer_spcha_window

0xe287,	// (0x0005d715) bg_popup_sub_pane_cp07

0x2f7d,	// (0x0005240b) list_spcha_pane

0x2f85,	// (0x00052413) list_single_spcha_pane_ParamLimits

0x2f85,	// (0x00052413) list_single_spcha_pane

0xe287,	// (0x0005d715) list_highlight_pane_cp06

0x2f96,	// (0x00052424) list_single_spcha_pane_t1

0x21b8,	// (0x00051646) popup_call2_audio_out_window_g4_ParamLimits

0x21b8,	// (0x00051646) popup_call2_audio_out_window_g4

0x4c73,	// (0x00054101) main_imed2_pane

0x7bff,	// (0x0005708d) popup_imed_adjust2_window

0x7c12,	// (0x000570a0) popup_imed_trans_window_ParamLimits

0x7c12,	// (0x000570a0) popup_imed_trans_window

0x29e3,	// (0x00051e71) popup_blid_sat_info2_window_t1

0x29f1,	// (0x00051e7f) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0005eb40) popup_blid_sat_info2_window_t

0x90c2,	// (0x00058550) aid_size_cell_colour_35

0x90dc,	// (0x0005856a) aid_size_cell_colour_112

0x90f3,	// (0x00058581) aid_size_cell_effect

0xe409,	// (0x0005d897) bg_tb_trans_pane_cp02

0x0157,	// (0x0004f5e5) heading_imed_pane

0x910d,	// (0x0005859b) listscroll_imed_pane

0x2fa4,	// (0x00052432) heading_imed_pane_g1

0x2fac,	// (0x0005243a) heading_imed_pane_t1

0x2fba,	// (0x00052448) grid_imed_colour_35_pane_ParamLimits

0x2fba,	// (0x00052448) grid_imed_colour_35_pane

0x9119,	// (0x000585a7) grid_imed_effect_pane

0x2fd6,	// (0x00052464) list_imed_aspect_pane

0x9129,	// (0x000585b7) scroll_pane_cp027_ParamLimits

0x9129,	// (0x000585b7) scroll_pane_cp027

0x9135,	// (0x000585c3) cell_imed_effect_pane_ParamLimits

0x9135,	// (0x000585c3) cell_imed_effect_pane

0x2fde,	// (0x0005246c) cell_imed_colour_pane_ParamLimits

0x2fde,	// (0x0005246c) cell_imed_colour_pane

0x3028,	// (0x000524b6) cell_imed_colour_pane_g1_ParamLimits

0x3028,	// (0x000524b6) cell_imed_colour_pane_g1

0x3039,	// (0x000524c7) hgihlgiht_grid_pane_cp016_ParamLimits

0x3039,	// (0x000524c7) hgihlgiht_grid_pane_cp016

0x9151,	// (0x000585df) cell_imed_effect_pane_g1

0x9159,	// (0x000585e7) grid_highlight_pane_cp017

0x3062,	// (0x000524f0) list_imed_single_pane_ParamLimits

0x3062,	// (0x000524f0) list_imed_single_pane

0xe287,	// (0x0005d715) list_highlight_pane_cp07

0x3076,	// (0x00052504) list_imed_aspect_pane_comp1_t1

0x2773,	// (0x00051c01) bg_tb_trans_pane_cp05

0x3098,	// (0x00052526) popup_imed_adjust2_window_g1

0x30bf,	// (0x0005254d) popup_imed_adjust2_window_t1

0x30d7,	// (0x00052565) slider_imed_adjust_pane

0x30eb,	// (0x00052579) slider_imed_adjust_pane_g1

0x30fb,	// (0x00052589) slider_imed_adjust_pane_g2

0x310b,	// (0x00052599) slider_imed_adjust_pane_g3

0x311c,	// (0x000525aa) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0005ec7f) slider_imed_adjust_pane_g

0x9162,	// (0x000585f0) aid_size_cell_clipart2

0x916e,	// (0x000585fc) grid_imed_clipart_pane

0x312d,	// (0x000525bb) scroll_pane_cp031

0x9178,	// (0x00058606) cell_imed_clipart_pane_ParamLimits

0x9178,	// (0x00058606) cell_imed_clipart_pane

0x9196,	// (0x00058624) cell_imed_clipart_pane_g1

0xe287,	// (0x0005d715) grid_highlight_pane_cp014

0x8eea,	// (0x00058378) main_clock2_pane_g1_ParamLimits

0x8eea,	// (0x00058378) main_clock2_pane_g1

0x8fc3,	// (0x00058451) aid_call2_pane_cp10

0x8fd5,	// (0x00058463) aid_call_pane_cp10

0x1281,	// (0x0005070f) popup_clock_analogue_window_cp10_g1

0x1281,	// (0x0005070f) popup_clock_analogue_window_cp10_g2

0x8fe7,	// (0x00058475) popup_clock_analogue_window_cp10_g3

0x8fe7,	// (0x00058475) popup_clock_analogue_window_cp10_g4

0x1281,	// (0x0005070f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x0005ec6d) popup_clock_analogue_window_cp10_g

0x8ff9,	// (0x00058487) popup_clock_analogue_window_cp10_t1

0x902a,	// (0x000584b8) clock_digital_number_pane_cp10_ParamLimits

0x902a,	// (0x000584b8) clock_digital_number_pane_cp10

0x9042,	// (0x000584d0) clock_digital_number_pane_cp11_ParamLimits

0x9042,	// (0x000584d0) clock_digital_number_pane_cp11

0x905a,	// (0x000584e8) clock_digital_number_pane_cp12_ParamLimits

0x905a,	// (0x000584e8) clock_digital_number_pane_cp12

0x9072,	// (0x00058500) clock_digital_number_pane_cp13_ParamLimits

0x9072,	// (0x00058500) clock_digital_number_pane_cp13

0x908a,	// (0x00058518) clock_digital_separator_pane_cp10_ParamLimits

0x908a,	// (0x00058518) clock_digital_separator_pane_cp10

0x90a2,	// (0x00058530) popup_clock_digital_window_cp02_t1_ParamLimits

0x90a2,	// (0x00058530) popup_clock_digital_window_cp02_t1

0xe9fd,	// (0x0005de8b) clock_digital_number_pane_cp10_g1

0xe9fd,	// (0x0005de8b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x0005ec88) clock_digital_number_pane_cp10_g

0xe9fd,	// (0x0005de8b) clock_digital_separator_pane_cp10_g1

0xe9fd,	// (0x0005de8b) clock_digital_separator_pane_g2_cp10

0x131c,	// (0x000507aa) navi_pane_vded_g4

0x1325,	// (0x000507b3) navi_pane_vded_g5

0x132e,	// (0x000507bc) navi_pane_vded_t1

0x4c73,	// (0x00054101) main_vded_pane

0x919f,	// (0x0005862d) main_vded_pane_g1

0x91ab,	// (0x00058639) main_vded_pane_g2

0x91b5,	// (0x00058643) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x0005ec8d) main_vded_pane_g

0x91bf,	// (0x0005864d) main_vded_pane_t1

0x91cd,	// (0x0005865b) main_vded_pane_t2

0x0001,

0xf806,	// (0x0005ec94) main_vded_pane_t

0x91db,	// (0x00058669) vded_slider_pane

0x91e5,	// (0x00058673) vded_video_pane

0x3135,	// (0x000525c3) vded_video_pane_g1

0x91f1,	// (0x0005867f) vded_video_pane_g2

0x2bab,	// (0x00052039) vded_video_pane_g3

0x0002,

0xf80b,	// (0x0005ec99) vded_video_pane_g

0x313f,	// (0x000525cd) vded_slider_pane_g1

0x28f8,	// (0x00051d86) vded_slider_pane_g2

0x3148,	// (0x000525d6) vded_slider_pane_g3

0x3151,	// (0x000525df) vded_slider_pane_g4

0x315a,	// (0x000525e8) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0005eca0) vded_slider_pane_g

0x8ce5,	// (0x00058173) mup3_rocker_pane_ParamLimits

0x8ce5,	// (0x00058173) mup3_rocker_pane

0x91fa,	// (0x00058688) mup3_control_keys_pane_g1

0x9202,	// (0x00058690) mup3_control_keys_pane_g2

0x920a,	// (0x00058698) mup3_control_keys_pane_g3

0x9212,	// (0x000586a0) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x0005ecab) mup3_control_keys_pane_g

0x4c31,	// (0x000540bf) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4c31,	// (0x000540bf) popup_toolbar2_fixed_window_cp01

0x8d01,	// (0x0005818f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8d01,	// (0x0005818f) popup_toolbar2_fixed_window_cp02

0x1af7,	// (0x00050f85) popup_call2_audio_second_window_t4_ParamLimits

0x1af7,	// (0x00050f85) popup_call2_audio_second_window_t4

0x2025,	// (0x000514b3) popup_call2_audio_first_window_t6_ParamLimits

0x2025,	// (0x000514b3) popup_call2_audio_first_window_t6

0x22bb,	// (0x00051749) popup_call2_audio_out_window_t6_ParamLimits

0x22bb,	// (0x00051749) popup_call2_audio_out_window_t6

0x4c73,	// (0x00054101) main_vitu_pane

0x9222,	// (0x000586b0) aid_size_cell_itu_ParamLimits

0x9222,	// (0x000586b0) aid_size_cell_itu

0x9230,	// (0x000586be) bg_popup_window_pane_cp08_ParamLimits

0x9230,	// (0x000586be) bg_popup_window_pane_cp08

0x923e,	// (0x000586cc) field_vitu_entry_pane_ParamLimits

0x923e,	// (0x000586cc) field_vitu_entry_pane

0x924d,	// (0x000586db) grid_vitu_function_pane_ParamLimits

0x924d,	// (0x000586db) grid_vitu_function_pane

0x925d,	// (0x000586eb) grid_vitu_itu_pane_ParamLimits

0x925d,	// (0x000586eb) grid_vitu_itu_pane

0x926b,	// (0x000586f9) cell_vitu_itu_pane_ParamLimits

0x926b,	// (0x000586f9) cell_vitu_itu_pane

0x9282,	// (0x00058710) cell_vitu_function_pane_ParamLimits

0x9282,	// (0x00058710) cell_vitu_function_pane

0xe409,	// (0x0005d897) bg_popup_sub_pane_cp08_ParamLimits

0xe409,	// (0x0005d897) bg_popup_sub_pane_cp08

0x9296,	// (0x00058724) field_vitu_entry_pane_t1_ParamLimits

0x9296,	// (0x00058724) field_vitu_entry_pane_t1

0x317b,	// (0x00052609) field_vitu_entry_pane_t2_ParamLimits

0x317b,	// (0x00052609) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x0005ecb9) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x0005ecb9) field_vitu_entry_pane_t

0x3198,	// (0x00052626) bg_button_pane_cp05_ParamLimits

0x3198,	// (0x00052626) bg_button_pane_cp05

0x92af,	// (0x0005873d) cell_vitu_itu_pane_g1

0x92c7,	// (0x00058755) cell_vitu_itu_pane_t1_ParamLimits

0x92c7,	// (0x00058755) cell_vitu_itu_pane_t1

0x92d9,	// (0x00058767) cell_vitu_itu_pane_t2_ParamLimits

0x92d9,	// (0x00058767) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0005ecbe) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0005ecbe) cell_vitu_itu_pane_t

0x31a6,	// (0x00052634) bg_button_pane_cp07

0x931c,	// (0x000587aa) cell_vitu_function_pane_g1

0x4eb7,	// (0x00054345) main_calc_pane_g1

0x49ea,	// (0x00053e78) aid_visual_content_pane

0x4c73,	// (0x00054101) main_vradio_pane

0x9325,	// (0x000587b3) main_vradio_pane_g1_ParamLimits

0x9325,	// (0x000587b3) main_vradio_pane_g1

0x31b0,	// (0x0005263e) main_vradio_pane_g2_ParamLimits

0x31b0,	// (0x0005263e) main_vradio_pane_g2

0x0001,

0xf837,	// (0x0005ecc5) main_vradio_pane_g_ParamLimits

0xf837,	// (0x0005ecc5) main_vradio_pane_g

0x9333,	// (0x000587c1) main_vradio_pane_t1_ParamLimits

0x9333,	// (0x000587c1) main_vradio_pane_t1

0x9345,	// (0x000587d3) main_vradio_pane_t2_ParamLimits

0x9345,	// (0x000587d3) main_vradio_pane_t2

0x31bd,	// (0x0005264b) main_vradio_pane_t3_ParamLimits

0x31bd,	// (0x0005264b) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x0005ecca) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x0005ecca) main_vradio_pane_t

0x9357,	// (0x000587e5) vradio_rocker_control_pane_ParamLimits

0x9357,	// (0x000587e5) vradio_rocker_control_pane

0x9363,	// (0x000587f1) vradio_station_info_pane_ParamLimits

0x9363,	// (0x000587f1) vradio_station_info_pane

0x31d1,	// (0x0005265f) vradio_frequency_info_pane_ParamLimits

0x31d1,	// (0x0005265f) vradio_frequency_info_pane

0x2bab,	// (0x00052039) vradio_station_info_pane_g1

0x31e0,	// (0x0005266e) vradio_station_info_pane_t1_ParamLimits

0x31e0,	// (0x0005266e) vradio_station_info_pane_t1

0x3202,	// (0x00052690) vradio_station_info_pane_t2_ParamLimits

0x3202,	// (0x00052690) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x0005ecd1) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x0005ecd1) vradio_station_info_pane_t

0x3214,	// (0x000526a2) vradio_tuning_pane

0x321c,	// (0x000526aa) vradio_rocker_control_pane_g1

0x3224,	// (0x000526b2) vradio_rocker_control_pane_g2

0x322c,	// (0x000526ba) vradio_rocker_control_pane_g3

0x3234,	// (0x000526c2) vradio_rocker_control_pane_g4

0x323c,	// (0x000526ca) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x0005ecd6) vradio_rocker_control_pane_g

0x9370,	// (0x000587fe) vradio_frequency_info_pane_g1

0x3244,	// (0x000526d2) vradio_frequency_info_pane_t1_ParamLimits

0x3244,	// (0x000526d2) vradio_frequency_info_pane_t1

0x937a,	// (0x00058808) vradio_tuning_pane_g1

0x9385,	// (0x00058813) vradio_tuning_pane_t1

0x4a33,	// (0x00053ec1) area_side_right_pane_ParamLimits

0x4a33,	// (0x00053ec1) area_side_right_pane

0x273a,	// (0x00051bc8) status_small_pane_g1

0x2742,	// (0x00051bd0) status_small_pane_g2

0x274b,	// (0x00051bd9) status_small_pane_g3

0x2754,	// (0x00051be2) status_small_pane_g4

0x0003,

0xf608,	// (0x0005ea96) status_small_pane_g

0x275d,	// (0x00051beb) status_small_pane_t1

0x4c73,	// (0x00054101) main_video3_pane

0x3258,	// (0x000526e6) cams_zoom_vslider_pane

0x3260,	// (0x000526ee) image3_wide_pane_ParamLimits

0x3260,	// (0x000526ee) image3_wide_pane

0x327a,	// (0x00052708) image3_wide_small_pane

0x3286,	// (0x00052714) main_video3_pane_g1_ParamLimits

0x3286,	// (0x00052714) main_video3_pane_g1

0x32a2,	// (0x00052730) main_video3_pane_g2_ParamLimits

0x32a2,	// (0x00052730) main_video3_pane_g2

0x0001,

0xf853,	// (0x0005ece1) main_video3_pane_g_ParamLimits

0xf853,	// (0x0005ece1) main_video3_pane_g

0x32be,	// (0x0005274c) main_video3_pane_t1_ParamLimits

0x32be,	// (0x0005274c) main_video3_pane_t1

0x32e9,	// (0x00052777) main_video3_pane_t2_ParamLimits

0x32e9,	// (0x00052777) main_video3_pane_t2

0x3316,	// (0x000527a4) main_video3_pane_t3_ParamLimits

0x3316,	// (0x000527a4) main_video3_pane_t3

0x0002,

0xf858,	// (0x0005ece6) main_video3_pane_t_ParamLimits

0xf858,	// (0x0005ece6) main_video3_pane_t

0x3343,	// (0x000527d1) cams_zoom_vslider_pane_g1

0x334c,	// (0x000527da) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x0005eced) cams_zoom_vslider_pane_g

0x3354,	// (0x000527e2) small_slider_vertical_pane

0x2bab,	// (0x00052039) small_slider_vertical_pane_g1

0x2bab,	// (0x00052039) small_slider_vertical_pane_g2

0x335c,	// (0x000527ea) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x0005ecf2) small_slider_vertical_pane_g

0x4c73,	// (0x00054101) main_hwr_training_pane

0x3365,	// (0x000527f3) hwr_training_instruct_pane_ParamLimits

0x3365,	// (0x000527f3) hwr_training_instruct_pane

0x9394,	// (0x00058822) hwr_training_navi_pane_ParamLimits

0x9394,	// (0x00058822) hwr_training_navi_pane

0x93ae,	// (0x0005883c) hwr_training_write_pane_ParamLimits

0x93ae,	// (0x0005883c) hwr_training_write_pane

0xe287,	// (0x0005d715) bg_frame_shadow_pane

0x339c,	// (0x0005282a) hwr_training_write_pane_g1

0x33a4,	// (0x00052832) hwr_training_write_pane_g2

0x33ac,	// (0x0005283a) hwr_training_write_pane_g3

0x33b4,	// (0x00052842) hwr_training_write_pane_g4

0x33bc,	// (0x0005284a) hwr_training_write_pane_g5

0x33c4,	// (0x00052852) hwr_training_write_pane_g6

0x33cc,	// (0x0005285a) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x0005ecf9) hwr_training_write_pane_g

0x93e6,	// (0x00058874) hwr_training_navi_pane_g1_ParamLimits

0x93e6,	// (0x00058874) hwr_training_navi_pane_g1

0x93f8,	// (0x00058886) hwr_training_navi_pane_g2_ParamLimits

0x93f8,	// (0x00058886) hwr_training_navi_pane_g2

0x940a,	// (0x00058898) hwr_training_navi_pane_g3_ParamLimits

0x940a,	// (0x00058898) hwr_training_navi_pane_g3

0x941a,	// (0x000588a8) hwr_training_navi_pane_g4_ParamLimits

0x941a,	// (0x000588a8) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x0005ed08) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x0005ed08) hwr_training_navi_pane_g

0x9434,	// (0x000588c2) hwr_training_navi_pane_t1

0x9442,	// (0x000588d0) list_single_hwr_training_instruct_pane_ParamLimits

0x9442,	// (0x000588d0) list_single_hwr_training_instruct_pane

0x33d4,	// (0x00052862) list_single_hwr_training_instruct_pane_t1

0x2aeb,	// (0x00051f79) bg_frame_shadow_pane_g1

0x33e3,	// (0x00052871) bg_frame_shadow_pane_g2

0x33eb,	// (0x00052879) bg_frame_shadow_pane_g3

0x33f3,	// (0x00052881) bg_frame_shadow_pane_g4

0x33fb,	// (0x00052889) bg_frame_shadow_pane_g5

0x3403,	// (0x00052891) bg_frame_shadow_pane_g6

0x340b,	// (0x00052899) bg_frame_shadow_pane_g7

0xeba3,	// (0x0005e031) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x0005ed13) bg_frame_shadow_pane_g

0x4c73,	// (0x00054101) main_video_tele_dialer_pane

0x945b,	// (0x000588e9) aid_size_cell_video_keypad_ParamLimits

0x945b,	// (0x000588e9) aid_size_cell_video_keypad

0x946b,	// (0x000588f9) grid_video_dialer_keypad_pane_ParamLimits

0x946b,	// (0x000588f9) grid_video_dialer_keypad_pane

0x949d,	// (0x0005892b) video_down_pane_cp_ParamLimits

0x949d,	// (0x0005892b) video_down_pane_cp

0x94c5,	// (0x00058953) cell_video_dialer_keypad_pane_ParamLimits

0x94c5,	// (0x00058953) cell_video_dialer_keypad_pane

0x3413,	// (0x000528a1) bg_button_pane_cp08_ParamLimits

0x3413,	// (0x000528a1) bg_button_pane_cp08

0x94dc,	// (0x0005896a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x94dc,	// (0x0005896a) cell_video_dialer_keypad_pane_g1

0x8cd9,	// (0x00058167) mup3_rocker2_pane_ParamLimits

0x8cd9,	// (0x00058167) mup3_rocker2_pane

0x2bab,	// (0x00052039) mup3_rocker2_pane_g1

0x7b63,	// (0x00056ff1) main_dialer2_pane

0x4c73,	// (0x00054101) main_mp4_pane

0x951b,	// (0x000589a9) main_mp4_pane_g1_ParamLimits

0x951b,	// (0x000589a9) main_mp4_pane_g1

0x9529,	// (0x000589b7) main_mp4_pane_g2_ParamLimits

0x9529,	// (0x000589b7) main_mp4_pane_g2

0x9537,	// (0x000589c5) main_mp4_pane_g3_ParamLimits

0x9537,	// (0x000589c5) main_mp4_pane_g3

0x958a,	// (0x00058a18) main_mp4_pane_g4_ParamLimits

0x958a,	// (0x00058a18) main_mp4_pane_g4

0x95b2,	// (0x00058a40) main_mp4_pane_g5_ParamLimits

0x95b2,	// (0x00058a40) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x0005ed33) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x0005ed33) main_mp4_pane_g

0x9602,	// (0x00058a90) main_mp4_pane_t1_ParamLimits

0x9602,	// (0x00058a90) main_mp4_pane_t1

0x965e,	// (0x00058aec) main_mp4_pane_t2_ParamLimits

0x965e,	// (0x00058aec) main_mp4_pane_t2

0x341f,	// (0x000528ad) main_mp4_pane_t3_ParamLimits

0x341f,	// (0x000528ad) main_mp4_pane_t3

0x96b0,	// (0x00058b3e) main_mp4_pane_t4_ParamLimits

0x96b0,	// (0x00058b3e) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x0005ed40) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x0005ed40) main_mp4_pane_t

0x96f0,	// (0x00058b7e) mp4_progress_pane_ParamLimits

0x96f0,	// (0x00058b7e) mp4_progress_pane

0x973a,	// (0x00058bc8) mp4_rocker_pane_ParamLimits

0x973a,	// (0x00058bc8) mp4_rocker_pane

0x3447,	// (0x000528d5) mp4_progress_pane_t1

0x3460,	// (0x000528ee) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x0005ed49) mp4_progress_pane_t

0x3479,	// (0x00052907) mup_progress_pane_cp04

0x37e9,	// (0x00052c77) mp4_rocker_pane_g1

0x975c,	// (0x00058bea) aid_cell_size_keypad2_ParamLimits

0x975c,	// (0x00058bea) aid_cell_size_keypad2

0x976c,	// (0x00058bfa) dialer2_ne_pane_ParamLimits

0x976c,	// (0x00058bfa) dialer2_ne_pane

0x9778,	// (0x00058c06) grid_dialer2_keypad_pane_ParamLimits

0x9778,	// (0x00058c06) grid_dialer2_keypad_pane

0xceac,	// (0x0005c33a) bg_popup_call_pane_cp07_ParamLimits

0xceac,	// (0x0005c33a) bg_popup_call_pane_cp07

0x9786,	// (0x00058c14) dialer2_ne_pane_t1_ParamLimits

0x9786,	// (0x00058c14) dialer2_ne_pane_t1

0x97ab,	// (0x00058c39) cell_dialer2_keypad_pane_ParamLimits

0x97ab,	// (0x00058c39) cell_dialer2_keypad_pane

0x3497,	// (0x00052925) bg_button_pane_pane_cp04_ParamLimits

0x3497,	// (0x00052925) bg_button_pane_pane_cp04

0x97c2,	// (0x00058c50) cell_dialer2_keypad_pane_g1_ParamLimits

0x97c2,	// (0x00058c50) cell_dialer2_keypad_pane_g1

0x59b3,	// (0x00054e41) aid_placing_vt_set_content_ParamLimits

0x59b3,	// (0x00054e41) aid_placing_vt_set_content

0x59db,	// (0x00054e69) aid_placing_vt_set_title_ParamLimits

0x59db,	// (0x00054e69) aid_placing_vt_set_title

0x4c73,	// (0x00054101) main_image3_pane

0x985c,	// (0x00058cea) area_side_right_pane_cp01_ParamLimits

0x985c,	// (0x00058cea) area_side_right_pane_cp01

0x988b,	// (0x00058d19) main_image3_pane_g1_ParamLimits

0x988b,	// (0x00058d19) main_image3_pane_g1

0x9899,	// (0x00058d27) main_image3_pane_g2_ParamLimits

0x9899,	// (0x00058d27) main_image3_pane_g2

0x98b2,	// (0x00058d40) main_image3_pane_g3_ParamLimits

0x98b2,	// (0x00058d40) main_image3_pane_g3

0x98cb,	// (0x00058d59) main_image3_pane_g4_ParamLimits

0x98cb,	// (0x00058d59) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x0005ed58) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x0005ed58) main_image3_pane_g

0x98e4,	// (0x00058d72) main_image3_pane_t1_ParamLimits

0x98e4,	// (0x00058d72) main_image3_pane_t1

0x9909,	// (0x00058d97) main_image3_pane_t2_ParamLimits

0x9909,	// (0x00058d97) main_image3_pane_t2

0x9928,	// (0x00058db6) main_image3_pane_t3_ParamLimits

0x9928,	// (0x00058db6) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x0005ed61) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x0005ed61) main_image3_pane_t

0x9230,	// (0x000586be) grid_sctrl_middle_pane_cp01_ParamLimits

0x9230,	// (0x000586be) grid_sctrl_middle_pane_cp01

0x9989,	// (0x00058e17) cell_sctrl_middle_pane_cp01_ParamLimits

0x9989,	// (0x00058e17) cell_sctrl_middle_pane_cp01

0x999a,	// (0x00058e28) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x999a,	// (0x00058e28) cell_sctrl_middle_pane_cp01_g1

0x4c73,	// (0x00054101) main_call4_pane

0x99a7,	// (0x00058e35) aid_size_button_call4_ParamLimits

0x99a7,	// (0x00058e35) aid_size_button_call4

0x99d9,	// (0x00058e67) call4_windows_pane_ParamLimits

0x99d9,	// (0x00058e67) call4_windows_pane

0x99f5,	// (0x00058e83) grid_call4_button_pane_ParamLimits

0x99f5,	// (0x00058e83) grid_call4_button_pane

0x34a3,	// (0x00052931) call4_windows_conf_pane

0x9a19,	// (0x00058ea7) popup_call4_audio_first_window_ParamLimits

0x9a19,	// (0x00058ea7) popup_call4_audio_first_window

0x9a45,	// (0x00058ed3) popup_call4_audio_second_window_ParamLimits

0x9a45,	// (0x00058ed3) popup_call4_audio_second_window

0x34e0,	// (0x0005296e) popup_call4_audio_wait_window_ParamLimits

0x34e0,	// (0x0005296e) popup_call4_audio_wait_window

0x9a59,	// (0x00058ee7) cell_call4_button_pane_ParamLimits

0x9a59,	// (0x00058ee7) cell_call4_button_pane

0x9a7c,	// (0x00058f0a) bg_button_pane_cp09_ParamLimits

0x9a7c,	// (0x00058f0a) bg_button_pane_cp09

0x9a88,	// (0x00058f16) cell_call4_button_pane_g1_ParamLimits

0x9a88,	// (0x00058f16) cell_call4_button_pane_g1

0x9a95,	// (0x00058f23) cell_call4_button_pane_t1_ParamLimits

0x9a95,	// (0x00058f23) cell_call4_button_pane_t1

0x3528,	// (0x000529b6) popup_call4_audio_conf_window_ParamLimits

0x3528,	// (0x000529b6) popup_call4_audio_conf_window

0x8d0e,	// (0x0005819c) mup3_progress_pane_t1_ParamLimits

0x8d2d,	// (0x000581bb) mup3_progress_pane_t2_ParamLimits

0x2e56,	// (0x000522e4) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x0005ec3a) mup3_progress_pane_t_ParamLimits

0x2e73,	// (0x00052301) mup_progress_pane_cp03_ParamLimits

0x921a,	// (0x000586a8) mup3_control_keys_pane_g4_copy1

0x971e,	// (0x00058bac) mp4_rocker2_pane_ParamLimits

0x971e,	// (0x00058bac) mp4_rocker2_pane

0x354a,	// (0x000529d8) mp4_rocker2_pane_g1

0x3542,	// (0x000529d0) mp4_rocker2_pane_g2

0x9aa7,	// (0x00058f35) mp4_rocker2_pane_g3

0x9aaf,	// (0x00058f3d) mp4_rocker2_pane_g4

0x9ab7,	// (0x00058f45) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x0005ed6a) mp4_rocker2_pane_g

0x4c73,	// (0x00054101) main_camera4_pane

0x4c73,	// (0x00054101) main_video4_pane

0x9479,	// (0x00058907) main_video_tele_dialer_pane_t1_ParamLimits

0x9479,	// (0x00058907) main_video_tele_dialer_pane_t1

0x948b,	// (0x00058919) main_video_tele_dialer_pane_t2_ParamLimits

0x948b,	// (0x00058919) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x0005ed24) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x0005ed24) main_video_tele_dialer_pane_t

0x9ad7,	// (0x00058f65) cam4_autofocus_pane_ParamLimits

0x9ad7,	// (0x00058f65) cam4_autofocus_pane

0x9aef,	// (0x00058f7d) cam4_image_uncrop_pane_ParamLimits

0x9aef,	// (0x00058f7d) cam4_image_uncrop_pane

0x9b08,	// (0x00058f96) cam4_indicators_pane_ParamLimits

0x9b08,	// (0x00058f96) cam4_indicators_pane

0x9b24,	// (0x00058fb2) main_camera4_pane_g1_ParamLimits

0x9b24,	// (0x00058fb2) main_camera4_pane_g1

0x9b30,	// (0x00058fbe) main_camera4_pane_g2_ParamLimits

0x9b30,	// (0x00058fbe) main_camera4_pane_g2

0x9b30,	// (0x00058fbe) main_camera4_pane_g3_ParamLimits

0x9b30,	// (0x00058fbe) main_camera4_pane_g3

0x9b3c,	// (0x00058fca) main_camera4_pane_g4_ParamLimits

0x9b3c,	// (0x00058fca) main_camera4_pane_g4

0x9b48,	// (0x00058fd6) main_camera4_pane_g5_ParamLimits

0x9b48,	// (0x00058fd6) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x0005ed75) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x0005ed75) main_camera4_pane_g

0x9b62,	// (0x00058ff0) main_camera4_pane_t1_ParamLimits

0x9b62,	// (0x00058ff0) main_camera4_pane_t1

0x9bac,	// (0x0005903a) bg_tb_trans_pane_cp06

0x9bc2,	// (0x00059050) cam4_indicators_pane_g1

0x9bd3,	// (0x00059061) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x0005ed90) cam4_indicators_pane_g

0x9beb,	// (0x00059079) cam4_indicators_pane_t1

0x9c15,	// (0x000590a3) main_video4_pane_g1_ParamLimits

0x9c15,	// (0x000590a3) main_video4_pane_g1

0x9c21,	// (0x000590af) main_video4_pane_g2_ParamLimits

0x9c21,	// (0x000590af) main_video4_pane_g2

0x9c2d,	// (0x000590bb) main_video4_pane_g3_ParamLimits

0x9c2d,	// (0x000590bb) main_video4_pane_g3

0x9c39,	// (0x000590c7) main_video4_pane_g4_ParamLimits

0x9c39,	// (0x000590c7) main_video4_pane_g4

0x0004,

0xf909,	// (0x0005ed97) main_video4_pane_g_ParamLimits

0xf909,	// (0x0005ed97) main_video4_pane_g

0x9c5b,	// (0x000590e9) vid4_indicators_pane_ParamLimits

0x9c5b,	// (0x000590e9) vid4_indicators_pane

0x9c7a,	// (0x00059108) video4_image_uncrop_cif_pane_ParamLimits

0x9c7a,	// (0x00059108) video4_image_uncrop_cif_pane

0x9c89,	// (0x00059117) video4_image_uncrop_nhd_pane_ParamLimits

0x9c89,	// (0x00059117) video4_image_uncrop_nhd_pane

0x9aef,	// (0x00058f7d) video4_image_uncrop_vga_pane_ParamLimits

0x9aef,	// (0x00058f7d) video4_image_uncrop_vga_pane

0x7b55,	// (0x00056fe3) bg_tb_trans_pane_cp07

0x9ca2,	// (0x00059130) vid4_indicators_pane_g1

0x9cb8,	// (0x00059146) vid4_indicators_pane_g2

0x9ccc,	// (0x0005915a) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x0005eda2) vid4_indicators_pane_g

0x9cfd,	// (0x0005918b) vid4_indicators_pane_t1

0x9d14,	// (0x000591a2) cam4_autofocus_pane_g1

0x9d1c,	// (0x000591aa) cam4_autofocus_pane_g2

0x9d24,	// (0x000591b2) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x0005edad) cam4_autofocus_pane_g

0x9d2c,	// (0x000591ba) cam4_autofocus_pane_g3_copy1

0x94a9,	// (0x00058937) video_down_pane_cp_t1

0x94b7,	// (0x00058945) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x0005ed29) video_down_pane_cp_t

0x4c59,	// (0x000540e7) popup_vitu2_window_ParamLimits

0x4c59,	// (0x000540e7) popup_vitu2_window

0x9d34,	// (0x000591c2) aid_size_cell2_itu2_ParamLimits

0x9d34,	// (0x000591c2) aid_size_cell2_itu2

0x9d56,	// (0x000591e4) aid_size_cell_itu2_ParamLimits

0x9d56,	// (0x000591e4) aid_size_cell_itu2

0x9d9a,	// (0x00059228) bg_popup_window_pane_cp09_ParamLimits

0x9d9a,	// (0x00059228) bg_popup_window_pane_cp09

0x9da8,	// (0x00059236) field_vitu2_entry_pane_ParamLimits

0x9da8,	// (0x00059236) field_vitu2_entry_pane

0x9dc8,	// (0x00059256) grid_vitu2_function_pane_ParamLimits

0x9dc8,	// (0x00059256) grid_vitu2_function_pane

0x9e0c,	// (0x0005929a) grid_vitu2_itu_pane_ParamLimits

0x9e0c,	// (0x0005929a) grid_vitu2_itu_pane

0x9e80,	// (0x0005930e) cell_vitu2_itu_pane_ParamLimits

0x9e80,	// (0x0005930e) cell_vitu2_itu_pane

0x9e97,	// (0x00059325) cell_vitu2_function_pane_ParamLimits

0x9e97,	// (0x00059325) cell_vitu2_function_pane

0x3566,	// (0x000529f4) bg_popup_call_pane_cp08_ParamLimits

0x3566,	// (0x000529f4) bg_popup_call_pane_cp08

0x357f,	// (0x00052a0d) field_vitu2_entry_pane_g1

0x358b,	// (0x00052a19) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x0005edb4) field_vitu2_entry_pane_g

0x08b7,	// (0x0004fd45) field_vitu2_entry_pane_t1_ParamLimits

0x08b7,	// (0x0004fd45) field_vitu2_entry_pane_t1

0x08e6,	// (0x0004fd74) field_vitu2_entry_pane_t2_ParamLimits

0x08e6,	// (0x0004fd74) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x0005edbb) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x0005edbb) field_vitu2_entry_pane_t

0x9edb,	// (0x00059369) bg_button_pane_cp010_ParamLimits

0x9edb,	// (0x00059369) bg_button_pane_cp010

0x9ee9,	// (0x00059377) cell_vitu2_itu_pane_g1

0x9f07,	// (0x00059395) cell_vitu2_itu_pane_t1_ParamLimits

0x9f07,	// (0x00059395) cell_vitu2_itu_pane_t1

0x48db,	// (0x00053d69) cell_vitu2_itu_pane_t2_ParamLimits

0x48db,	// (0x00053d69) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x0005edc5) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x0005edc5) cell_vitu2_itu_pane_t

0x7b55,	// (0x00056fe3) bg_button_pane_cp011

0x9f59,	// (0x000593e7) cell_vitu2_function_pane_g1

0x4c73,	// (0x00054101) main_myfav_hc_pane

0x996a,	// (0x00058df8) popup_image3_note_pane_ParamLimits

0x996a,	// (0x00058df8) popup_image3_note_pane

0x9978,	// (0x00058e06) popup_image3_tool_bar_pane_ParamLimits

0x9978,	// (0x00058e06) popup_image3_tool_bar_pane

0x4949,	// (0x00053dd7) cell_vitu2_itu_pane_t3_ParamLimits

0x4949,	// (0x00053dd7) cell_vitu2_itu_pane_t3

0xe287,	// (0x0005d715) bg_popup_trans_pane

0x35ad,	// (0x00052a3b) grid_image3_tool_bar_pane

0x35b7,	// (0x00052a45) bg_popup_trans_pane_g1

0xefa2,	// (0x0005e430) bg_popup_trans_pane_g2

0x35bf,	// (0x00052a4d) bg_popup_trans_pane_g3

0x35c7,	// (0x00052a55) bg_popup_trans_pane_g4

0x35cf,	// (0x00052a5d) bg_popup_trans_pane_g5

0x35d7,	// (0x00052a65) bg_popup_trans_pane_g6

0x35df,	// (0x00052a6d) bg_popup_trans_pane_g7

0x35e7,	// (0x00052a75) bg_popup_trans_pane_g8

0xef82,	// (0x0005e410) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x0005edcc) bg_popup_trans_pane_g

0x35ef,	// (0x00052a7d) cell_image3_tool_bar_pane_ParamLimits

0x35ef,	// (0x00052a7d) cell_image3_tool_bar_pane

0x2bab,	// (0x00052039) cell_image3_tool_bar_pane_g1

0xe287,	// (0x0005d715) bg_popup_trans_pane_cp1

0x3605,	// (0x00052a93) popup_image3_note_pane_t1

0x3613,	// (0x00052aa1) popup_image3_note_pane_t2

0x3621,	// (0x00052aaf) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x0005eddf) popup_image3_note_pane_t

0x3631,	// (0x00052abf) popup_image3_note_pane_t3_copy1

0x9f6d,	// (0x000593fb) bg_myfav_hc_instruction_pane_ParamLimits

0x9f6d,	// (0x000593fb) bg_myfav_hc_instruction_pane

0x9f85,	// (0x00059413) cell_myfav_contact_pane_ParamLimits

0x9f85,	// (0x00059413) cell_myfav_contact_pane

0x9f9f,	// (0x0005942d) cell_myfav_contact_pane_cp1_ParamLimits

0x9f9f,	// (0x0005942d) cell_myfav_contact_pane_cp1

0x9fb7,	// (0x00059445) cell_myfav_contact_pane_cp2_ParamLimits

0x9fb7,	// (0x00059445) cell_myfav_contact_pane_cp2

0x9fcf,	// (0x0005945d) cell_myfav_contact_pane_cp3_ParamLimits

0x9fcf,	// (0x0005945d) cell_myfav_contact_pane_cp3

0x9fe6,	// (0x00059474) cell_myfav_contact_pane_cp4_ParamLimits

0x9fe6,	// (0x00059474) cell_myfav_contact_pane_cp4

0x9ffc,	// (0x0005948a) cell_myfav_contact_pane_cp5_ParamLimits

0x9ffc,	// (0x0005948a) cell_myfav_contact_pane_cp5

0xa010,	// (0x0005949e) cell_myfav_contact_pane_cp6_ParamLimits

0xa010,	// (0x0005949e) cell_myfav_contact_pane_cp6

0xa024,	// (0x000594b2) cell_myfav_contact_pane_cp7_ParamLimits

0xa024,	// (0x000594b2) cell_myfav_contact_pane_cp7

0x363f,	// (0x00052acd) listscroll_gen_pane_cp05

0xa03c,	// (0x000594ca) main_myfav_hc_pane_g1_ParamLimits

0xa03c,	// (0x000594ca) main_myfav_hc_pane_g1

0xa056,	// (0x000594e4) main_myfav_hc_pane_g2_ParamLimits

0xa056,	// (0x000594e4) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x0005ede6) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x0005ede6) main_myfav_hc_pane_g

0xa088,	// (0x00059516) main_myfav_hc_pane_t1_ParamLimits

0xa088,	// (0x00059516) main_myfav_hc_pane_t1

0x3648,	// (0x00052ad6) main_myfav_hc_pane_t2_ParamLimits

0x3648,	// (0x00052ad6) main_myfav_hc_pane_t2

0x365a,	// (0x00052ae8) main_myfav_hc_pane_t3_ParamLimits

0x365a,	// (0x00052ae8) main_myfav_hc_pane_t3

0xa09f,	// (0x0005952d) main_myfav_hc_pane_t4_ParamLimits

0xa09f,	// (0x0005952d) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x0005eded) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x0005eded) main_myfav_hc_pane_t

0x2bab,	// (0x00052039) bg_myfav_hc_instruction_pane_g1

0x366c,	// (0x00052afa) cell_myfav_contact_pane_g1_ParamLimits

0x366c,	// (0x00052afa) cell_myfav_contact_pane_g1

0x366c,	// (0x00052afa) cell_myfav_contact_pane_g2_ParamLimits

0x366c,	// (0x00052afa) cell_myfav_contact_pane_g2

0x3678,	// (0x00052b06) cell_myfav_contact_pane_g3_ParamLimits

0x3678,	// (0x00052b06) cell_myfav_contact_pane_g3

0x2e40,	// (0x000522ce) cell_myfav_contact_pane_g4_ParamLimits

0x2e40,	// (0x000522ce) cell_myfav_contact_pane_g4

0x3685,	// (0x00052b13) cell_myfav_contact_pane_g5_ParamLimits

0x3685,	// (0x00052b13) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x0005edf8) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x0005edf8) cell_myfav_contact_pane_g

0xa070,	// (0x000594fe) main_myfav_hc_pane_g3_ParamLimits

0xa070,	// (0x000594fe) main_myfav_hc_pane_g3

0x4b6b,	// (0x00053ff9) popup_adpt_find_window

0xa0c9,	// (0x00059557) afind_page_pane_ParamLimits

0xa0c9,	// (0x00059557) afind_page_pane

0xa0d6,	// (0x00059564) aid_size_cell_afind_ParamLimits

0xa0d6,	// (0x00059564) aid_size_cell_afind

0xa0f0,	// (0x0005957e) bg_popup_sub_pane_cp09_ParamLimits

0xa0f0,	// (0x0005957e) bg_popup_sub_pane_cp09

0xa0fd,	// (0x0005958b) find_pane_cp01_ParamLimits

0xa0fd,	// (0x0005958b) find_pane_cp01

0x3691,	// (0x00052b1f) grid_afind_control_pane_ParamLimits

0x3691,	// (0x00052b1f) grid_afind_control_pane

0xa10a,	// (0x00059598) grid_afind_pane_ParamLimits

0xa10a,	// (0x00059598) grid_afind_pane

0xa126,	// (0x000595b4) cell_afind_pane_ParamLimits

0xa126,	// (0x000595b4) cell_afind_pane

0x2bab,	// (0x00052039) afind_page_pane_g1

0xa170,	// (0x000595fe) afind_page_pane_g2

0xa179,	// (0x00059607) afind_page_pane_g3

0x0002,

0xf975,	// (0x0005ee03) afind_page_pane_g

0xa182,	// (0x00059610) afind_page_pane_t1

0x36a5,	// (0x00052b33) cell_afind_grid_control_pane_ParamLimits

0x36a5,	// (0x00052b33) cell_afind_grid_control_pane

0x3497,	// (0x00052925) bg_button_pane_cp69_ParamLimits

0x3497,	// (0x00052925) bg_button_pane_cp69

0xa1a2,	// (0x00059630) cell_afind_pane_g1_ParamLimits

0xa1a2,	// (0x00059630) cell_afind_pane_g1

0xa1af,	// (0x0005963d) cell_afind_pane_t1_ParamLimits

0xa1af,	// (0x0005963d) cell_afind_pane_t1

0xecd9,	// (0x0005e167) bg_button_pane_cp72

0x36b4,	// (0x00052b42) cell_afind_grid_control_pane_g1

0x76d0,	// (0x00056b5e) aid_image_placing_area_ParamLimits

0x76d0,	// (0x00056b5e) aid_image_placing_area

0x3163,	// (0x000525f1) field_vitu_entry_pane_g1_ParamLimits

0x3163,	// (0x000525f1) field_vitu_entry_pane_g1

0x316f,	// (0x000525fd) field_vitu_entry_pane_g2_ParamLimits

0x316f,	// (0x000525fd) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x0005ecb4) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x0005ecb4) field_vitu_entry_pane_g

0x92af,	// (0x0005873d) cell_vitu_itu_pane_g1_ParamLimits

0x92ff,	// (0x0005878d) cell_vitu_itu_pane_t3_ParamLimits

0x92ff,	// (0x0005878d) cell_vitu_itu_pane_t3

0x3447,	// (0x000528d5) mp4_progress_pane_t1_ParamLimits

0x3460,	// (0x000528ee) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x0005ed49) mp4_progress_pane_t_ParamLimits

0x3479,	// (0x00052907) mup_progress_pane_cp04_ParamLimits

0xa0b3,	// (0x00059541) main_myfav_hc_pane_t5_ParamLimits

0xa0b3,	// (0x00059541) main_myfav_hc_pane_t5

0x49f6,	// (0x00053e84) aid_zoom_text_primary

0x4b6b,	// (0x00053ff9) popup_adpt_find_window_ParamLimits

0x7b55,	// (0x00056fe3) main_cam_set_pane

0x9b16,	// (0x00058fa4) cam4_zoom_pane_ParamLimits

0x9b16,	// (0x00058fa4) cam4_zoom_pane

0xa1c1,	// (0x0005964f) main_cam_set_pane_g1_ParamLimits

0xa1c1,	// (0x0005964f) main_cam_set_pane_g1

0xa1cf,	// (0x0005965d) main_cam_set_pane_g2_ParamLimits

0xa1cf,	// (0x0005965d) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x0005ee0a) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x0005ee0a) main_cam_set_pane_g

0xa1db,	// (0x00059669) main_cam_set_pane_t1_ParamLimits

0xa1db,	// (0x00059669) main_cam_set_pane_t1

0xa1f7,	// (0x00059685) main_cset_listscroll_pane_ParamLimits

0xa1f7,	// (0x00059685) main_cset_listscroll_pane

0xa226,	// (0x000596b4) main_cset_slider_pane_ParamLimits

0xa226,	// (0x000596b4) main_cset_slider_pane

0x36c5,	// (0x00052b53) main_cset_list_pane_ParamLimits

0x36c5,	// (0x00052b53) main_cset_list_pane

0x36d5,	// (0x00052b63) scroll_pane_cp028

0xa247,	// (0x000596d5) aid_area_touch_slider

0xa263,	// (0x000596f1) cset_slider_pane

0xa28d,	// (0x0005971b) main_cset_slider_pane_g1

0xa2a2,	// (0x00059730) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x0005ee0f) main_cset_slider_pane_g

0x370e,	// (0x00052b9c) main_cset_slider_pane_t1

0xa35e,	// (0x000597ec) main_cset_slider_pane_t2

0xa378,	// (0x00059806) main_cset_slider_pane_t3

0xa392,	// (0x00059820) main_cset_slider_pane_t4

0xa3ac,	// (0x0005983a) main_cset_slider_pane_t5

0xa3c6,	// (0x00059854) main_cset_slider_pane_t6

0xa3db,	// (0x00059869) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x0005ee34) main_cset_slider_pane_t

0xa4df,	// (0x0005996d) cset_list_set_pane_ParamLimits

0xa4df,	// (0x0005996d) cset_list_set_pane

0xa4f0,	// (0x0005997e) aid_position_infowindow_above

0xa4f8,	// (0x00059986) aid_position_infowindow_below

0xa500,	// (0x0005998e) cset_list_set_pane_g1_ParamLimits

0xa500,	// (0x0005998e) cset_list_set_pane_g1

0xa50c,	// (0x0005999a) cset_list_set_pane_g3_ParamLimits

0xa50c,	// (0x0005999a) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x0005ee53) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x0005ee53) cset_list_set_pane_g

0xa51b,	// (0x000599a9) cset_list_set_pane_t1_ParamLimits

0xa51b,	// (0x000599a9) cset_list_set_pane_t1

0xe409,	// (0x0005d897) list_highlight_pane_cp021_ParamLimits

0xe409,	// (0x0005d897) list_highlight_pane_cp021

0x1492,	// (0x00050920) cset_slider_pane_g1

0x14a4,	// (0x00050932) cset_slider_pane_g2

0x149b,	// (0x00050929) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x0005ee58) cset_slider_pane_g

0xa530,	// (0x000599be) aid_area_touch_cam4_zoom

0xa538,	// (0x000599c6) cam4_zoom_cont_pane

0xa540,	// (0x000599ce) cam4_zoom_pane_g1

0xa548,	// (0x000599d6) cam4_zoom_pane_g2

0xa550,	// (0x000599de) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x0005ee5f) cam4_zoom_pane_g

0xa558,	// (0x000599e6) cam4_zoom_cont_pane_g1

0xa561,	// (0x000599ef) cam4_zoom_cont_pane_g2

0xa56a,	// (0x000599f8) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x0005ee66) cam4_zoom_cont_pane_g

0x99c1,	// (0x00058e4f) call4_image_pane_ParamLimits

0x99c1,	// (0x00058e4f) call4_image_pane

0x34a3,	// (0x00052931) call4_windows_conf_pane_ParamLimits

0x34be,	// (0x0005294c) popup_call4_audio_in_window_ParamLimits

0x34be,	// (0x0005294c) popup_call4_audio_in_window

0xe287,	// (0x0005d715) bg_popup_call2_act_pane_cp02

0x3520,	// (0x000529ae) call4_list_conf_pane

0x2bab,	// (0x00052039) call4_image_pane_g1

0x2bab,	// (0x00052039) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x0005eb7a) call4_image_pane_g

0x37ae,	// (0x00052c3c) list_single_graphic_popup_conf4_pane_ParamLimits

0x37ae,	// (0x00052c3c) list_single_graphic_popup_conf4_pane

0xe287,	// (0x0005d715) list_highlight_pane_cp022

0x37c3,	// (0x00052c51) list_single_graphic_popup_conf4_pane_g1

0x117e,	// (0x0005060c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x0005ee6d) list_single_graphic_popup_conf4_pane_g

0x37cb,	// (0x00052c59) list_single_graphic_popup_conf4_pane_t1

0x5b35,	// (0x00054fc3) popup_vtel_slider_window_ParamLimits

0x5b35,	// (0x00054fc3) popup_vtel_slider_window

0x3485,	// (0x00052913) dialer2_ne_pane_t2_ParamLimits

0x3485,	// (0x00052913) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x0005ed4e) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x0005ed4e) dialer2_ne_pane_t

0xe409,	// (0x0005d897) bg_popup_sub_pane_cp010_ParamLimits

0xe409,	// (0x0005d897) bg_popup_sub_pane_cp010

0xa573,	// (0x00059a01) popup_vtel_slider_window_g1_ParamLimits

0xa573,	// (0x00059a01) popup_vtel_slider_window_g1

0xa57f,	// (0x00059a0d) popup_vtel_slider_window_g2_ParamLimits

0xa57f,	// (0x00059a0d) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x0005ee72) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x0005ee72) popup_vtel_slider_window_g

0xa5c7,	// (0x00059a55) vtel_slider_pane_ParamLimits

0xa5c7,	// (0x00059a55) vtel_slider_pane

0xa5d6,	// (0x00059a64) vtel_slider_pane_g1_ParamLimits

0xa5d6,	// (0x00059a64) vtel_slider_pane_g1

0xa5e3,	// (0x00059a71) vtel_slider_pane_g2_ParamLimits

0xa5e3,	// (0x00059a71) vtel_slider_pane_g2

0xa5f0,	// (0x00059a7e) vtel_slider_pane_g3_ParamLimits

0xa5f0,	// (0x00059a7e) vtel_slider_pane_g3

0xa5d6,	// (0x00059a64) vtel_slider_pane_g4_ParamLimits

0xa5d6,	// (0x00059a64) vtel_slider_pane_g4

0xa5fd,	// (0x00059a8b) vtel_slider_pane_g5_ParamLimits

0xa5fd,	// (0x00059a8b) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x0005ee7b) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x0005ee7b) vtel_slider_pane_g

0x4c73,	// (0x00054101) main_gallery2_pane

0x9d7c,	// (0x0005920a) aid_size_row_itut2_dropdow_list_ParamLimits

0x9d7c,	// (0x0005920a) aid_size_row_itut2_dropdow_list

0x9dea,	// (0x00059278) grid_vitu2_function_top_pane_ParamLimits

0x9dea,	// (0x00059278) grid_vitu2_function_top_pane

0x9e3c,	// (0x000592ca) popup_vitu2_dropdown_list_window_ParamLimits

0x9e3c,	// (0x000592ca) popup_vitu2_dropdown_list_window

0x9e5c,	// (0x000592ea) popup_vitu2_match_list_window

0xa60a,	// (0x00059a98) cell_vitu2_function_top_pane_ParamLimits

0xa60a,	// (0x00059a98) cell_vitu2_function_top_pane

0xa62a,	// (0x00059ab8) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa62a,	// (0x00059ab8) cell_vitu2_function_top_pane_cp01

0xa648,	// (0x00059ad6) cell_vitu2_function_top_wide_pane_ParamLimits

0xa648,	// (0x00059ad6) cell_vitu2_function_top_wide_pane

0x7b55,	// (0x00056fe3) bg_button_pane_cp012

0xa666,	// (0x00059af4) cell_vitu2_function_top_pane_g1

0xa675,	// (0x00059b03) bg_button_pane_cp013_ParamLimits

0xa675,	// (0x00059b03) bg_button_pane_cp013

0xa691,	// (0x00059b1f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa691,	// (0x00059b1f) cell_vitu2_function_top_wide_pane_g1

0x4c59,	// (0x000540e7) bg_popup_sub_pane_cp20

0xa6a9,	// (0x00059b37) list_vitu2_match_list_pane

0x35b7,	// (0x00052a45) bg_popup_sub_pane_cp20_g1

0x35bf,	// (0x00052a4d) bg_popup_sub_pane_cp20_g2

0xefa2,	// (0x0005e430) bg_popup_sub_pane_cp20_g3

0x35c7,	// (0x00052a55) bg_popup_sub_pane_cp20_g4

0xef82,	// (0x0005e410) bg_popup_sub_pane_cp20_g5

0x37f3,	// (0x00052c81) bg_popup_sub_pane_cp20_g6

0x35d7,	// (0x00052a65) bg_popup_sub_pane_cp20_g7

0x35df,	// (0x00052a6d) bg_popup_sub_pane_cp20_g8

0x35e7,	// (0x00052a75) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x0005ee86) bg_popup_sub_pane_cp20_g

0xa6c1,	// (0x00059b4f) list_vitu2_match_list_item_pane_ParamLimits

0xa6c1,	// (0x00059b4f) list_vitu2_match_list_item_pane

0xa6d3,	// (0x00059b61) list_vitu2_match_list_item_pane_t1

0x4c73,	// (0x00054101) bg_popup_sub_pane_cp21

0xa70d,	// (0x00059b9b) grid_vitu2_dropdown_list_pane

0xa715,	// (0x00059ba3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa715,	// (0x00059ba3) cell_vitu2_dropdown_list_char_pane

0xa73a,	// (0x00059bc8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa73a,	// (0x00059bc8) cell_vitu2_dropdown_list_ctrl_pane

0x380d,	// (0x00052c9b) cell_vitu2_dropdown_list_char_pane_g1

0x3804,	// (0x00052c92) cell_vitu2_dropdown_list_char_pane_g2

0x37fb,	// (0x00052c89) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x0005eea3) cell_vitu2_dropdown_list_char_pane_g

0xa768,	// (0x00059bf6) cell_vitu2_dropdown_list_char_pane_t1

0xa776,	// (0x00059c04) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa776,	// (0x00059c04) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa786,	// (0x00059c14) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa786,	// (0x00059c14) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa797,	// (0x00059c25) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa797,	// (0x00059c25) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa7a7,	// (0x00059c35) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa7a7,	// (0x00059c35) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9bac,	// (0x0005903a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9bac,	// (0x0005903a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x0005eeaa) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x0005eeaa) cell_vitu2_dropdown_list_ctrl_pane_g

0xa7c0,	// (0x00059c4e) aid_size_cell_gallery2_ParamLimits

0xa7c0,	// (0x00059c4e) aid_size_cell_gallery2

0xa7ce,	// (0x00059c5c) grid_gallery2_pane_ParamLimits

0xa7ce,	// (0x00059c5c) grid_gallery2_pane

0xa7dd,	// (0x00059c6b) scroll_pane_cp029_ParamLimits

0xa7dd,	// (0x00059c6b) scroll_pane_cp029

0xa7e9,	// (0x00059c77) cell_gallery2_pane_ParamLimits

0xa7e9,	// (0x00059c77) cell_gallery2_pane

0x3816,	// (0x00052ca4) cell_gallery2_pane_g2

0xa813,	// (0x00059ca1) cell_gallery2_pane_g3

0x3820,	// (0x00052cae) cell_gallery2_pane_g4

0x3828,	// (0x00052cb6) cell_gallery2_pane_g5

0x134c,	// (0x000507da) grid_highlight_pane_cp10

0x9e5c,	// (0x000592ea) popup_vitu2_match_list_window_ParamLimits

0x9e70,	// (0x000592fe) popup_vitu2_query_window_ParamLimits

0x9e70,	// (0x000592fe) popup_vitu2_query_window

0x4c73,	// (0x00054101) bg_vitu2_candi_button_pane

0x380d,	// (0x00052c9b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3804,	// (0x00052c92) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x37fb,	// (0x00052c89) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xa81b,	// (0x00059ca9) bg_button_pane_cp015

0xa82d,	// (0x00059cbb) bg_button_pane_cp016

0xa840,	// (0x00059cce) bg_button_pane_cp017

0x2773,	// (0x00051c01) bg_popup_sub_pane_cp22

0x3830,	// (0x00052cbe) popup_vitu2_query_window_g1

0xa885,	// (0x00059d13) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x0005eeb5) popup_vitu2_query_window_g

0xa8a2,	// (0x00059d30) popup_vitu2_query_window_t1_ParamLimits

0xa8a2,	// (0x00059d30) popup_vitu2_query_window_t1

0xa8d5,	// (0x00059d63) popup_vitu2_query_window_t2_ParamLimits

0xa8d5,	// (0x00059d63) popup_vitu2_query_window_t2

0xa8e7,	// (0x00059d75) popup_vitu2_query_window_t3_ParamLimits

0xa8e7,	// (0x00059d75) popup_vitu2_query_window_t3

0xa90f,	// (0x00059d9d) popup_vitu2_query_window_t4_ParamLimits

0xa90f,	// (0x00059d9d) popup_vitu2_query_window_t4

0xa932,	// (0x00059dc0) popup_vitu2_query_window_t5_ParamLimits

0xa932,	// (0x00059dc0) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x0005eebc) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x0005eebc) popup_vitu2_query_window_t

0x36bd,	// (0x00052b4b) main_cset_text_pane

0xa247,	// (0x000596d5) aid_area_touch_slider_ParamLimits

0xa263,	// (0x000596f1) cset_slider_pane_ParamLimits

0xa28d,	// (0x0005971b) main_cset_slider_pane_g1_ParamLimits

0xa2a2,	// (0x00059730) main_cset_slider_pane_g2_ParamLimits

0x36de,	// (0x00052b6c) main_cset_slider_pane_g3_ParamLimits

0x36de,	// (0x00052b6c) main_cset_slider_pane_g3

0xa2b7,	// (0x00059745) main_cset_slider_pane_g4_ParamLimits

0xa2b7,	// (0x00059745) main_cset_slider_pane_g4

0xa2c6,	// (0x00059754) main_cset_slider_pane_g5_ParamLimits

0xa2c6,	// (0x00059754) main_cset_slider_pane_g5

0xa2d2,	// (0x00059760) main_cset_slider_pane_g6_ParamLimits

0xa2d2,	// (0x00059760) main_cset_slider_pane_g6

0xf981,	// (0x0005ee0f) main_cset_slider_pane_g_ParamLimits

0x370e,	// (0x00052b9c) main_cset_slider_pane_t1_ParamLimits

0xa35e,	// (0x000597ec) main_cset_slider_pane_t2_ParamLimits

0xa378,	// (0x00059806) main_cset_slider_pane_t3_ParamLimits

0xa392,	// (0x00059820) main_cset_slider_pane_t4_ParamLimits

0xa3ac,	// (0x0005983a) main_cset_slider_pane_t5_ParamLimits

0xa3c6,	// (0x00059854) main_cset_slider_pane_t6_ParamLimits

0xa3db,	// (0x00059869) main_cset_slider_pane_t7_ParamLimits

0xa405,	// (0x00059893) main_cset_slider_pane_t8_ParamLimits

0xa405,	// (0x00059893) main_cset_slider_pane_t8

0xa42d,	// (0x000598bb) main_cset_slider_pane_t9_ParamLimits

0xa42d,	// (0x000598bb) main_cset_slider_pane_t9

0xa455,	// (0x000598e3) main_cset_slider_pane_t10_ParamLimits

0xa455,	// (0x000598e3) main_cset_slider_pane_t10

0xa47d,	// (0x0005990b) main_cset_slider_pane_t11_ParamLimits

0xa47d,	// (0x0005990b) main_cset_slider_pane_t11

0xa4a5,	// (0x00059933) main_cset_slider_pane_t12_ParamLimits

0xa4a5,	// (0x00059933) main_cset_slider_pane_t12

0xa4c2,	// (0x00059950) main_cset_slider_pane_t13_ParamLimits

0xa4c2,	// (0x00059950) main_cset_slider_pane_t13

0xf9a6,	// (0x0005ee34) main_cset_slider_pane_t_ParamLimits

0xe287,	// (0x0005d715) bg_popup_sub_pane_cp011

0x383c,	// (0x00052cca) main_cset_text_pane_g1

0x3844,	// (0x00052cd2) main_cset_text_pane_t1

0x3852,	// (0x00052ce0) main_cset_text_pane_t2

0x3860,	// (0x00052cee) main_cset_text_pane_t3

0x386e,	// (0x00052cfc) main_cset_text_pane_t4

0x387c,	// (0x00052d0a) main_cset_text_pane_t5

0x388a,	// (0x00052d18) main_cset_text_pane_t6

0x3898,	// (0x00052d26) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x0005eecb) main_cset_text_pane_t

0x4c73,	// (0x00054101) main_cam4_burst_pane

0x4c73,	// (0x00054101) main_cam5_pane

0xa190,	// (0x0005961e) bg_button_pane_cp019

0xa199,	// (0x00059627) bg_button_pane_cp020

0x36ea,	// (0x00052b78) main_cset_slider_pane_g7_ParamLimits

0x36ea,	// (0x00052b78) main_cset_slider_pane_g7

0x36f6,	// (0x00052b84) main_cset_slider_pane_g8_ParamLimits

0x36f6,	// (0x00052b84) main_cset_slider_pane_g8

0xa2e6,	// (0x00059774) main_cset_slider_pane_g9_ParamLimits

0xa2e6,	// (0x00059774) main_cset_slider_pane_g9

0xa2f2,	// (0x00059780) main_cset_slider_pane_g10_ParamLimits

0xa2f2,	// (0x00059780) main_cset_slider_pane_g10

0xa2fe,	// (0x0005978c) main_cset_slider_pane_g11_ParamLimits

0xa2fe,	// (0x0005978c) main_cset_slider_pane_g11

0xa30a,	// (0x00059798) main_cset_slider_pane_g12_ParamLimits

0xa30a,	// (0x00059798) main_cset_slider_pane_g12

0xa316,	// (0x000597a4) main_cset_slider_pane_g13_ParamLimits

0xa316,	// (0x000597a4) main_cset_slider_pane_g13

0xa322,	// (0x000597b0) main_cset_slider_pane_g14_ParamLimits

0xa322,	// (0x000597b0) main_cset_slider_pane_g14

0xa32e,	// (0x000597bc) main_cset_slider_pane_g15_ParamLimits

0xa32e,	// (0x000597bc) main_cset_slider_pane_g15

0x373c,	// (0x00052bca) main_cset_slider_pane_t14_ParamLimits

0x373c,	// (0x00052bca) main_cset_slider_pane_t14

0x3775,	// (0x00052c03) main_cset_slider_pane_t15_ParamLimits

0x3775,	// (0x00052c03) main_cset_slider_pane_t15

0xa9ab,	// (0x00059e39) aid_cam4_burst_size_cell_ParamLimits

0xa9ab,	// (0x00059e39) aid_cam4_burst_size_cell

0xa9c7,	// (0x00059e55) grid_cam4_burst_pane_ParamLimits

0xa9c7,	// (0x00059e55) grid_cam4_burst_pane

0xa9f9,	// (0x00059e87) linegrid_cam4_burst_pane_ParamLimits

0xa9f9,	// (0x00059e87) linegrid_cam4_burst_pane

0xaa17,	// (0x00059ea5) scroll_pane_cp30_ParamLimits

0xaa17,	// (0x00059ea5) scroll_pane_cp30

0xaa23,	// (0x00059eb1) cell_cam4_burst_pane_ParamLimits

0xaa23,	// (0x00059eb1) cell_cam4_burst_pane

0x38b2,	// (0x00052d40) linegrid_cam4_burst_pane_g1_ParamLimits

0x38b2,	// (0x00052d40) linegrid_cam4_burst_pane_g1

0xaa63,	// (0x00059ef1) linegrid_cam4_burst_pane_g2_ParamLimits

0xaa63,	// (0x00059ef1) linegrid_cam4_burst_pane_g2

0x38bf,	// (0x00052d4d) linegrid_cam4_burst_pane_g3_ParamLimits

0x38bf,	// (0x00052d4d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x0005eeda) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x0005eeda) linegrid_cam4_burst_pane_g

0xaa74,	// (0x00059f02) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xaa74,	// (0x00059f02) linegrid_cam4_burst_pane_g3_copy1

0x38cc,	// (0x00052d5a) linegrid_cam4_burst_pane_g4_ParamLimits

0x38cc,	// (0x00052d5a) linegrid_cam4_burst_pane_g4

0xaa8e,	// (0x00059f1c) linegrid_cam4_burst_pane_g5_ParamLimits

0xaa8e,	// (0x00059f1c) linegrid_cam4_burst_pane_g5

0xaa9f,	// (0x00059f2d) linegrid_cam4_burst_pane_g6_ParamLimits

0xaa9f,	// (0x00059f2d) linegrid_cam4_burst_pane_g6

0x38d9,	// (0x00052d67) linegrid_cam4_burst_pane_g7_ParamLimits

0x38d9,	// (0x00052d67) linegrid_cam4_burst_pane_g7

0xaab6,	// (0x00059f44) cell_cam4_burst_pane_g1

0x38f2,	// (0x00052d80) main_cam5_pane_t1_ParamLimits

0x38f2,	// (0x00052d80) main_cam5_pane_t1

0x3904,	// (0x00052d92) main_cam5_pane_t2_ParamLimits

0x3904,	// (0x00052d92) main_cam5_pane_t2

0x3916,	// (0x00052da4) main_cam5_pane_t3_ParamLimits

0x3916,	// (0x00052da4) main_cam5_pane_t3

0x3928,	// (0x00052db6) main_cam5_pane_t4_ParamLimits

0x3928,	// (0x00052db6) main_cam5_pane_t4

0x3940,	// (0x00052dce) main_cam5_pane_t5_ParamLimits

0x3940,	// (0x00052dce) main_cam5_pane_t5

0x3954,	// (0x00052de2) main_cam5_pane_t6_ParamLimits

0x3954,	// (0x00052de2) main_cam5_pane_t6

0x3968,	// (0x00052df6) main_cam5_pane_t7_ParamLimits

0x3968,	// (0x00052df6) main_cam5_pane_t7

0x397a,	// (0x00052e08) main_cam5_pane_t8_ParamLimits

0x397a,	// (0x00052e08) main_cam5_pane_t8

0x3998,	// (0x00052e26) main_cam5_pane_t9_ParamLimits

0x3998,	// (0x00052e26) main_cam5_pane_t9

0x39aa,	// (0x00052e38) main_cam5_pane_t10_ParamLimits

0x39aa,	// (0x00052e38) main_cam5_pane_t10

0x39bc,	// (0x00052e4a) main_cam5_pane_t11_ParamLimits

0x39bc,	// (0x00052e4a) main_cam5_pane_t11

0x39d0,	// (0x00052e5e) main_cam5_pane_t12_ParamLimits

0x39d0,	// (0x00052e5e) main_cam5_pane_t12

0x39e7,	// (0x00052e75) main_cam5_pane_t13_ParamLimits

0x39e7,	// (0x00052e75) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x0005eee6) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x0005eee6) main_cam5_pane_t

0x4c22,	// (0x000540b0) popup_scut_keymap_window_ParamLimits

0x4c22,	// (0x000540b0) popup_scut_keymap_window

0xaac9,	// (0x00059f57) aid_size_cell_brow_shortcut

0x134c,	// (0x000507da) bg_popup_window_pane_cp010

0xaad5,	// (0x00059f63) grid_scut_pane

0xaae1,	// (0x00059f6f) cell_scut_pane_ParamLimits

0xaae1,	// (0x00059f6f) cell_scut_pane

0xaafc,	// (0x00059f8a) cell_scut_pane_g1

0x3a0a,	// (0x00052e98) cell_scut_pane_t1

0x3a19,	// (0x00052ea7) cell_scut_pane_t2

0xab05,	// (0x00059f93) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x0005ef01) cell_scut_pane_t

0x8911,	// (0x00057d9f) main_mup3_pane_g8_ParamLimits

0x8911,	// (0x00057d9f) main_mup3_pane_g8

0x9d8a,	// (0x00059218) area_vitu2_query_pane_ParamLimits

0x9d8a,	// (0x00059218) area_vitu2_query_pane

0xa853,	// (0x00059ce1) input_focus_pane_cp08

0x3a28,	// (0x00052eb6) area_vitu2_query_pane_g1

0xab13,	// (0x00059fa1) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x0005ef08) area_vitu2_query_pane_g

0xab24,	// (0x00059fb2) area_vitu2_query_pane_t1_ParamLimits

0xab24,	// (0x00059fb2) area_vitu2_query_pane_t1

0xab38,	// (0x00059fc6) area_vitu2_query_pane_t2_ParamLimits

0xab38,	// (0x00059fc6) area_vitu2_query_pane_t2

0xab4c,	// (0x00059fda) area_vitu2_query_pane_t3_ParamLimits

0xab4c,	// (0x00059fda) area_vitu2_query_pane_t3

0x0985,	// (0x0004fe13) area_vitu2_query_pane_t4_ParamLimits

0x0985,	// (0x0004fe13) area_vitu2_query_pane_t4

0x09ad,	// (0x0004fe3b) area_vitu2_query_pane_t5_ParamLimits

0x09ad,	// (0x0004fe3b) area_vitu2_query_pane_t5

0x09d5,	// (0x0004fe63) area_vitu2_query_pane_t6_ParamLimits

0x09d5,	// (0x0004fe63) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x0005ef0d) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x0005ef0d) area_vitu2_query_pane_t

0xab74,	// (0x0005a002) bg_button_pane_cp018

0xab82,	// (0x0005a010) bg_button_pane_cp021

0xab8e,	// (0x0005a01c) bg_button_pane_cp022

0xab9f,	// (0x0005a02d) input_focus_pane_cp09

0x6caa,	// (0x00056138) aid_size_touch_mv_arrow_left

0x6cd5,	// (0x00056163) aid_size_touch_mv_arrow_right

0xa346,	// (0x000597d4) main_cset_slider_pane_g16_ParamLimits

0xa346,	// (0x000597d4) main_cset_slider_pane_g16

0xa352,	// (0x000597e0) main_cset_slider_pane_g17_ParamLimits

0xa352,	// (0x000597e0) main_cset_slider_pane_g17

0xaab6,	// (0x00059f44) cell_cam4_burst_pane_g1_ParamLimits

0xe287,	// (0x0005d715) compa_mode_pane

0xa58b,	// (0x00059a19) popup_vtel_slider_window_g3_ParamLimits

0xa58b,	// (0x00059a19) popup_vtel_slider_window_g3

0xa59f,	// (0x00059a2d) popup_vtel_slider_window_g4_ParamLimits

0xa59f,	// (0x00059a2d) popup_vtel_slider_window_g4

0xa5b3,	// (0x00059a41) popup_vtel_slider_window_t1_ParamLimits

0xa5b3,	// (0x00059a41) popup_vtel_slider_window_t1

0x4c73,	// (0x00054101) main_cl_pane

0x7bff,	// (0x0005708d) popup_imed_adjust2_window_ParamLimits

0x2773,	// (0x00051c01) bg_tb_trans_pane_cp05_ParamLimits

0x3098,	// (0x00052526) popup_imed_adjust2_window_g1_ParamLimits

0x30a7,	// (0x00052535) popup_imed_adjust2_window_g2_ParamLimits

0x30a7,	// (0x00052535) popup_imed_adjust2_window_g2

0x30b3,	// (0x00052541) popup_imed_adjust2_window_g3_ParamLimits

0x30b3,	// (0x00052541) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x0005ec78) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x0005ec78) popup_imed_adjust2_window_g

0x30bf,	// (0x0005254d) popup_imed_adjust2_window_t1_ParamLimits

0x30d7,	// (0x00052565) slider_imed_adjust_pane_ParamLimits

0x30eb,	// (0x00052579) slider_imed_adjust_pane_g1_ParamLimits

0x30fb,	// (0x00052589) slider_imed_adjust_pane_g2_ParamLimits

0x310b,	// (0x00052599) slider_imed_adjust_pane_g3_ParamLimits

0x311c,	// (0x000525aa) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0005ec7f) slider_imed_adjust_pane_g_ParamLimits

0x9abf,	// (0x00058f4d) aid_touch_area_cam4_ParamLimits

0x9abf,	// (0x00058f4d) aid_touch_area_cam4

0x9acf,	// (0x00058f5d) battery_pane_cp01

0x9b56,	// (0x00058fe4) main_camera4_pane_g6_ParamLimits

0x9b56,	// (0x00058fe4) main_camera4_pane_g6

0x9b74,	// (0x00059002) main_camera4_pane_t2_ParamLimits

0x9b74,	// (0x00059002) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x0005ed82) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x0005ed82) main_camera4_pane_t

0x9c05,	// (0x00059093) aid_touch_area_vid4_ParamLimits

0x9c05,	// (0x00059093) aid_touch_area_vid4

0x9c45,	// (0x000590d3) main_video4_pane_g5_ParamLimits

0x9c45,	// (0x000590d3) main_video4_pane_g5

0x9c6b,	// (0x000590f9) vid4_progress_pane_ParamLimits

0x9c6b,	// (0x000590f9) vid4_progress_pane

0x3702,	// (0x00052b90) main_cset_slider_pane_g18_ParamLimits

0x3702,	// (0x00052b90) main_cset_slider_pane_g18

0x38e6,	// (0x00052d74) cell_cam4_burst_pane_g2_ParamLimits

0x38e6,	// (0x00052d74) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x0005eee1) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x0005eee1) cell_cam4_burst_pane_g

0xabb0,	// (0x0005a03e) bg_cl_pane_ParamLimits

0xabb0,	// (0x0005a03e) bg_cl_pane

0xabbc,	// (0x0005a04a) cl_header_pane_ParamLimits

0xabbc,	// (0x0005a04a) cl_header_pane

0xabc8,	// (0x0005a056) cl_listscroll_pane_ParamLimits

0xabc8,	// (0x0005a056) cl_listscroll_pane

0x3a34,	// (0x00052ec2) bg_cl_pane_g1

0x3a3c,	// (0x00052eca) bg_cl_pane_g2

0x3a44,	// (0x00052ed2) bg_cl_pane_g3

0x3a4c,	// (0x00052eda) bg_cl_pane_g4

0x3a54,	// (0x00052ee2) bg_cl_pane_g5

0x3a5c,	// (0x00052eea) bg_cl_pane_g6

0x3a64,	// (0x00052ef2) bg_cl_pane_g7

0x3a6c,	// (0x00052efa) bg_cl_pane_g8

0x3a74,	// (0x00052f02) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x0005ef1c) bg_cl_pane_g

0xabd4,	// (0x0005a062) aid_height_cl_leading_ParamLimits

0xabd4,	// (0x0005a062) aid_height_cl_leading

0xabe0,	// (0x0005a06e) aid_height_cl_text_ParamLimits

0xabe0,	// (0x0005a06e) aid_height_cl_text

0x9230,	// (0x000586be) bg_cl_header_pane_ParamLimits

0x9230,	// (0x000586be) bg_cl_header_pane

0xabf8,	// (0x0005a086) cl_header_pane_g1_ParamLimits

0xabf8,	// (0x0005a086) cl_header_pane_g1

0xac05,	// (0x0005a093) cl_header_pane_t1_ParamLimits

0xac05,	// (0x0005a093) cl_header_pane_t1

0x3a7c,	// (0x00052f0a) cl_list_pane

0x36d5,	// (0x00052b63) hc_scroll_pane_cp01

0xef82,	// (0x0005e410) bg_cl_header_pane_g1

0x35b7,	// (0x00052a45) bg_cl_header_pane_g2

0xefa2,	// (0x0005e430) bg_cl_header_pane_g3

0x35c7,	// (0x00052a55) bg_cl_header_pane_g4

0x35bf,	// (0x00052a4d) bg_cl_header_pane_g5

0x37f3,	// (0x00052c81) bg_cl_header_pane_g6

0x35df,	// (0x00052a6d) bg_cl_header_pane_g7

0x35e7,	// (0x00052a75) bg_cl_header_pane_g8

0x35d7,	// (0x00052a65) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x0005ef2f) bg_cl_header_pane_g

0xac17,	// (0x0005a0a5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xac17,	// (0x0005a0a5) hc_cl_list_double_graphic_heading_pane

0xac27,	// (0x0005a0b5) hc_cl_list_single_graphic_pane_ParamLimits

0xac27,	// (0x0005a0b5) hc_cl_list_single_graphic_pane

0xac39,	// (0x0005a0c7) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xac39,	// (0x0005a0c7) hc_cl_list_single_graphic_pane_g1

0xac45,	// (0x0005a0d3) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xac45,	// (0x0005a0d3) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x0005ef42) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x0005ef42) hc_cl_list_single_graphic_pane_g

0xac59,	// (0x0005a0e7) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xac59,	// (0x0005a0e7) hc_cl_list_single_graphic_pane_t1

0xac39,	// (0x0005a0c7) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xac39,	// (0x0005a0c7) hc_cl_list_double_graphic_heading_pane_g1

0xac6e,	// (0x0005a0fc) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xac6e,	// (0x0005a0fc) hc_cl_list_double_graphic_heading_pane_g2

0xac82,	// (0x0005a110) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xac82,	// (0x0005a110) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x0005ef47) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x0005ef47) hc_cl_list_double_graphic_heading_pane_g

0xac96,	// (0x0005a124) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xac96,	// (0x0005a124) hc_cl_list_double_graphic_heading_pane_t1

0xacab,	// (0x0005a139) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xacab,	// (0x0005a139) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x0005ef4e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x0005ef4e) hc_cl_list_double_graphic_heading_pane_t

0xacc8,	// (0x0005a156) vid4_progress_pane_g1

0xacda,	// (0x0005a168) vid4_progress_pane_g2

0x741b,	// (0x000568a9) vid4_progress_pane_g3

0xacec,	// (0x0005a17a) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x0005ef53) vid4_progress_pane_g

0xad0a,	// (0x0005a198) vid4_progress_pane_t1

0xad1f,	// (0x0005a1ad) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x0005ef5e) vid4_progress_pane_t

0xad4a,	// (0x0005a1d8) wait_bar_pane_cp07

0x2998,	// (0x00051e26) blid_firmament_pane_ParamLimits

0x29db,	// (0x00051e69) popup_blid_sat_info2_window_g1

0x29ff,	// (0x00051e8d) popup_blid_sat_info2_window_t3

0x2a0d,	// (0x00051e9b) popup_blid_sat_info2_window_t4

0x2a1b,	// (0x00051ea9) popup_blid_sat_info2_window_t5

0x2a29,	// (0x00051eb7) popup_blid_sat_info2_window_t6

0x2a39,	// (0x00051ec7) popup_blid_sat_info2_window_t7

0x2a47,	// (0x00051ed5) popup_blid_sat_info2_window_t8

0x2a55,	// (0x00051ee3) popup_blid_sat_info2_window_t9

0x2a63,	// (0x00051ef1) popup_blid_sat_info2_window_t10

0x2b2b,	// (0x00051fb9) aid_firma_cardinal_ParamLimits

0x2b3f,	// (0x00051fcd) blid_firmament_pane_t1_ParamLimits

0x2b56,	// (0x00051fe4) blid_firmament_pane_t2_ParamLimits

0x2b6d,	// (0x00051ffb) blid_firmament_pane_t3_ParamLimits

0x2b84,	// (0x00052012) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0005eb71) blid_firmament_pane_t_ParamLimits

0x2b9b,	// (0x00052029) blid_sat_info_pane_ParamLimits

0x7b55,	// (0x00056fe3) main_cam_set_pane_ParamLimits

0x90c2,	// (0x00058550) aid_size_cell_colour_35_ParamLimits

0x90dc,	// (0x0005856a) aid_size_cell_colour_112_ParamLimits

0x90f3,	// (0x00058581) aid_size_cell_effect_ParamLimits

0xe409,	// (0x0005d897) bg_tb_trans_pane_cp02_ParamLimits

0x0157,	// (0x0004f5e5) heading_imed_pane_ParamLimits

0x910d,	// (0x0005859b) listscroll_imed_pane_ParamLimits

0x1da1,	// (0x0005122f) popup_call2_audio_first_window_g5_ParamLimits

0x1da1,	// (0x0005122f) popup_call2_audio_first_window_g5

0x982a,	// (0x00058cb8) aid_size_touch_image3_arrow_left_ParamLimits

0x982a,	// (0x00058cb8) aid_size_touch_image3_arrow_left

0x9840,	// (0x00058cce) aid_size_touch_image3_arrow_right_ParamLimits

0x9840,	// (0x00058cce) aid_size_touch_image3_arrow_right

0xad35,	// (0x0005a1c3) vid4_progress_pane_t3

0x93c6,	// (0x00058854) main_hwr_training_symbol_option_pane_ParamLimits

0x93c6,	// (0x00058854) main_hwr_training_symbol_option_pane

0x3387,	// (0x00052815) popup_hwr_training_preview_window_ParamLimits

0x3387,	// (0x00052815) popup_hwr_training_preview_window

0x9427,	// (0x000588b5) hwr_training_navi_pane_g5_ParamLimits

0x9427,	// (0x000588b5) hwr_training_navi_pane_g5

0x35a5,	// (0x00052a33) popup_char_count_window

0x4c59,	// (0x000540e7) bg_popup_sub_pane_cp20_ParamLimits

0xa6a9,	// (0x00059b37) list_vitu2_match_list_pane_ParamLimits

0xa6b5,	// (0x00059b43) vitu2_page_scroll_pane_ParamLimits

0xa6b5,	// (0x00059b43) vitu2_page_scroll_pane

0xcecc,	// (0x0005c35a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcecc,	// (0x0005c35a) list_single_hwr_training_symbol_option_pane

0xcedf,	// (0x0005c36d) list_single_hwr_training_symbol_option_pane_g1

0xcee7,	// (0x0005c375) list_single_hwr_training_symbol_option_pane_t1

0xcef5,	// (0x0005c383) bg_button_pane_cp023

0xcefe,	// (0x0005c38c) bg_button_pane_cp024

0xad5e,	// (0x0005a1ec) vitu2_page_scroll_pane_g1

0xad66,	// (0x0005a1f4) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x0005ef65) vitu2_page_scroll_pane_g

0xad70,	// (0x0005a1fe) vitu2_page_scroll_pane_t1

0x28f8,	// (0x00051d86) popup_char_count_window_g1

0xcf31,	// (0x0005c3bf) popup_char_count_window_g2

0xcf3a,	// (0x0005c3c8) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x0005ef6a) popup_char_count_window_g

0xcf43,	// (0x0005c3d1) popup_char_count_window_t1

0x4c73,	// (0x00054101) main_vded2_pane

0x3084,	// (0x00052512) aid_size_cell_imed_line

0x308e,	// (0x0005251c) grid_imed_line_width_pane

0x9cdf,	// (0x0005916d) vid4_indicators_pane_g4

0xcf51,	// (0x0005c3df) cell_imed_line_width_pane_ParamLimits

0xcf51,	// (0x0005c3df) cell_imed_line_width_pane

0xcf67,	// (0x0005c3f5) cell_imed_line_width_pane_g1

0x37e1,	// (0x00052c6f) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x0005ef71) cell_imed_line_width_pane_g

0xad7f,	// (0x0005a20d) main_vded2_pane_g1_ParamLimits

0xad7f,	// (0x0005a20d) main_vded2_pane_g1

0xad8e,	// (0x0005a21c) main_vded2_pane_g2_ParamLimits

0xad8e,	// (0x0005a21c) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x0005ef76) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x0005ef76) main_vded2_pane_g

0xad9c,	// (0x0005a22a) vded2_slider_pane_ParamLimits

0xad9c,	// (0x0005a22a) vded2_slider_pane

0xada9,	// (0x0005a237) aid_size_touch_vded2_end

0xadb3,	// (0x0005a241) aid_size_touch_vded2_playhead

0xcf70,	// (0x0005c3fe) aid_size_touch_vded2_start

0xcf78,	// (0x0005c406) vded2_slider_bg_pane

0xcf81,	// (0x0005c40f) vded2_slider_pane_g1

0xcf8a,	// (0x0005c418) vded2_slider_pane_g2

0xadbb,	// (0x0005a249) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x0005ef7b) vded2_slider_pane_g

0xce91,	// (0x0005c31f) vded2_slider_bg_pane_g1

0xce9a,	// (0x0005c328) vded2_slider_bg_pane_g2

0xcea3,	// (0x0005c331) vded2_slider_bg_pane_g3

0x0002,

0xf7b3,	// (0x0005ec41) vded2_slider_bg_pane_g

0x7433,	// (0x000568c1) aid_postcard_touch_down_pane_ParamLimits

0x7433,	// (0x000568c1) aid_postcard_touch_down_pane

0x7443,	// (0x000568d1) aid_postcard_touch_up_pane_ParamLimits

0x7443,	// (0x000568d1) aid_postcard_touch_up_pane

0x4c73,	// (0x00054101) main_blid2_pane

0x7b7e,	// (0x0005700c) popup_blid2_search_window

0xe287,	// (0x0005d715) blid2_gps_pane

0xe287,	// (0x0005d715) blid2_navig_pane

0xe287,	// (0x0005d715) blid2_search_pane

0xe287,	// (0x0005d715) blid2_tripm_pane

0xadc4,	// (0x0005a252) blid2_search_pane_g1_ParamLimits

0xadc4,	// (0x0005a252) blid2_search_pane_g1

0xadd0,	// (0x0005a25e) blid2_search_pane_t1_ParamLimits

0xadd0,	// (0x0005a25e) blid2_search_pane_t1

0xade2,	// (0x0005a270) aid_size_cell_blid2_gps_ParamLimits

0xade2,	// (0x0005a270) aid_size_cell_blid2_gps

0xadf2,	// (0x0005a280) blid2_gps_pane_g1_ParamLimits

0xadf2,	// (0x0005a280) blid2_gps_pane_g1

0xadfe,	// (0x0005a28c) grid_blid2_satellite_pane_ParamLimits

0xadfe,	// (0x0005a28c) grid_blid2_satellite_pane

0xae0c,	// (0x0005a29a) blid2_navig_pane_g1_ParamLimits

0xae0c,	// (0x0005a29a) blid2_navig_pane_g1

0xae18,	// (0x0005a2a6) blid2_navig_pane_t1_ParamLimits

0xae18,	// (0x0005a2a6) blid2_navig_pane_t1

0xae2a,	// (0x0005a2b8) blid2_navig_pane_t2_ParamLimits

0xae2a,	// (0x0005a2b8) blid2_navig_pane_t2

0x0001,

0xfaf4,	// (0x0005ef82) blid2_navig_pane_t_ParamLimits

0xfaf4,	// (0x0005ef82) blid2_navig_pane_t

0xae3c,	// (0x0005a2ca) blid2_navig_ring_pane_ParamLimits

0xae3c,	// (0x0005a2ca) blid2_navig_ring_pane

0xae4c,	// (0x0005a2da) blid2_speed_pane_ParamLimits

0xae4c,	// (0x0005a2da) blid2_speed_pane

0xae58,	// (0x0005a2e6) blid2_tripm_pane_g1_ParamLimits

0xae58,	// (0x0005a2e6) blid2_tripm_pane_g1

0xae68,	// (0x0005a2f6) blid2_tripm_pane_g2_ParamLimits

0xae68,	// (0x0005a2f6) blid2_tripm_pane_g2

0xae74,	// (0x0005a302) blid2_tripm_pane_g3_ParamLimits

0xae74,	// (0x0005a302) blid2_tripm_pane_g3

0xae80,	// (0x0005a30e) blid2_tripm_pane_g4_ParamLimits

0xae80,	// (0x0005a30e) blid2_tripm_pane_g4

0xae8c,	// (0x0005a31a) blid2_tripm_pane_g5_ParamLimits

0xae8c,	// (0x0005a31a) blid2_tripm_pane_g5

0x0005,

0xfaf9,	// (0x0005ef87) blid2_tripm_pane_g_ParamLimits

0xfaf9,	// (0x0005ef87) blid2_tripm_pane_g

0xaea8,	// (0x0005a336) blid2_tripm_pane_t1_ParamLimits

0xaea8,	// (0x0005a336) blid2_tripm_pane_t1

0xaeba,	// (0x0005a348) blid2_tripm_pane_t2_ParamLimits

0xaeba,	// (0x0005a348) blid2_tripm_pane_t2

0xaecc,	// (0x0005a35a) blid2_tripm_pane_t3_ParamLimits

0xaecc,	// (0x0005a35a) blid2_tripm_pane_t3

0x0003,

0xfb06,	// (0x0005ef94) blid2_tripm_pane_t_ParamLimits

0xfb06,	// (0x0005ef94) blid2_tripm_pane_t

0xaefe,	// (0x0005a38c) cell_blid2_satellite_pane_ParamLimits

0xaefe,	// (0x0005a38c) cell_blid2_satellite_pane

0xaf1c,	// (0x0005a3aa) cell_blid2_satellite_pane_g1

0xcf92,	// (0x0005c420) cell_blid2_satellite_pane_t1

0x2bab,	// (0x00052039) blid2_speed_pane_g1

0xcfa0,	// (0x0005c42e) blid2_speed_pane_t1

0xcfae,	// (0x0005c43c) blid2_speed_pane_t2

0x0001,

0xfb0f,	// (0x0005ef9d) blid2_speed_pane_t

0x2bab,	// (0x00052039) blid2_navig_ring_pane_g1

0xaf25,	// (0x0005a3b3) blid2_navig_ring_pane_g2

0xaf2d,	// (0x0005a3bb) blid2_navig_ring_pane_g3

0xaf35,	// (0x0005a3c3) blid2_navig_ring_pane_g4

0xaf3d,	// (0x0005a3cb) blid2_navig_ring_pane_g5

0x0004,

0xfb14,	// (0x0005efa2) blid2_navig_ring_pane_g

0xe287,	// (0x0005d715) bg_popup_window_pane_cp011

0xcfbc,	// (0x0005c44a) popup_blid2_search_window_g1

0xcfc4,	// (0x0005c452) popup_blid2_search_window_t1

0xcfd2,	// (0x0005c460) popup_blid2_search_window_t2

0x0001,

0xfb1f,	// (0x0005efad) popup_blid2_search_window_t

0xee91,	// (0x0005e31f) main_browser_pane_g1

0xead8,	// (0x0005df66) main_browser_pane_ParamLimits

0x7b55,	// (0x00056fe3) bg_button_pane_cp011_ParamLimits

0x9f59,	// (0x000593e7) cell_vitu2_function_pane_g1_ParamLimits

0x2773,	// (0x00051c01) bg_popup_sub_pane_cp22_ParamLimits

0xa853,	// (0x00059ce1) input_focus_pane_cp08_ParamLimits

0xa86a,	// (0x00059cf8) popup_vitu2_query_button_pane_ParamLimits

0xa86a,	// (0x00059cf8) popup_vitu2_query_button_pane

0xa87b,	// (0x00059d09) popup_vitu2_query_input_button_pane

0x3830,	// (0x00052cbe) popup_vitu2_query_window_g1_ParamLimits

0xa885,	// (0x00059d13) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x0005eeb5) popup_vitu2_query_window_g_ParamLimits

0xe287,	// (0x0005d715) bg_button_pane_cp026

0xaf45,	// (0x0005a3d3) popup_vitu2_query_input_button_pane_g1

0xe287,	// (0x0005d715) bg_button_pane_cp025

0xcfe0,	// (0x0005c46e) popup_vitu2_query_button_pane_t1

0x85e6,	// (0x00057a74) main_mp3_pane_t6

0x85f6,	// (0x00057a84) popup_slider_window_cp01

0x9bba,	// (0x00059048) cam4_battery_pane

0x9c98,	// (0x00059126) cam4_battery_pane_cp02

0xacc0,	// (0x0005a14e) cam4_battery_pane_cp01

0xacc0,	// (0x0005a14e) cam4_battery_pane_cp03

0x37e9,	// (0x00052c77) cam4_battery_pane_g1

0x2bab,	// (0x00052039) cam4_battery_pane_g2

0x0001,

0xfb24,	// (0x0005efb2) cam4_battery_pane_g

0x2a71,	// (0x00051eff) popup_blid_sat_info2_window_t11

0x6caa,	// (0x00056138) aid_size_touch_mv_arrow_left_ParamLimits

0x6cd5,	// (0x00056163) aid_size_touch_mv_arrow_right_ParamLimits

0x12ac,	// (0x0005073a) navi_pane_g1_ParamLimits

0x6d14,	// (0x000561a2) navi_pane_g2_ParamLimits

0x6d42,	// (0x000561d0) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0005e883) navi_pane_g_ParamLimits

0x6d9c,	// (0x0005622a) navi_pane_mv_t1_ParamLimits

0x9119,	// (0x000585a7) grid_imed_effect_pane_ParamLimits

0x59fd,	// (0x00054e8b) aid_placing_vt_slider_lsc

0xeddc,	// (0x0005e26a) aid_placing_vt_slider_prt

0xe409,	// (0x0005d897) bg_tb_trans_pane_cp01_ParamLimits

0x2cfb,	// (0x00052189) popup_image_details_window_g1_ParamLimits

0x2d0e,	// (0x0005219c) popup_image_details_window_g2_ParamLimits

0x2d23,	// (0x000521b1) popup_image_details_window_g3_ParamLimits

0x2d23,	// (0x000521b1) popup_image_details_window_g3

0xf728,	// (0x0005ebb6) popup_image_details_window_g_ParamLimits

0x2d37,	// (0x000521c5) popup_image_details_window_t1_ParamLimits

0x2d49,	// (0x000521d7) popup_image_details_window_t2_ParamLimits

0x2d62,	// (0x000521f0) popup_image_details_window_t3_ParamLimits

0x2d76,	// (0x00052204) popup_image_details_window_t4_ParamLimits

0x2d91,	// (0x0005221f) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0005ebbd) popup_image_details_window_t_ParamLimits

0xabec,	// (0x0005a07a) cl_header_name_pane_ParamLimits

0xabec,	// (0x0005a07a) cl_header_name_pane

0xaf4d,	// (0x0005a3db) cl_header_name_pane_t1_ParamLimits

0xaf4d,	// (0x0005a3db) cl_header_name_pane_t1

0xaf64,	// (0x0005a3f2) cl_header_name_pane_t2_ParamLimits

0xaf64,	// (0x0005a3f2) cl_header_name_pane_t2

0xaf8e,	// (0x0005a41c) cl_header_name_pane_t3_ParamLimits

0xaf8e,	// (0x0005a41c) cl_header_name_pane_t3

0x0002,

0xfb29,	// (0x0005efb7) cl_header_name_pane_t_ParamLimits

0xfb29,	// (0x0005efb7) cl_header_name_pane_t

0x6d6d,	// (0x000561fb) navi_pane_mv_g2_ParamLimits

0x357f,	// (0x00052a0d) field_vitu2_entry_pane_g1_ParamLimits

0x358b,	// (0x00052a19) field_vitu2_entry_pane_g2_ParamLimits

0x3597,	// (0x00052a25) field_vitu2_entry_pane_g3_ParamLimits

0x3597,	// (0x00052a25) field_vitu2_entry_pane_g3

0xf926,	// (0x0005edb4) field_vitu2_entry_pane_g_ParamLimits

0x9ee9,	// (0x00059377) cell_vitu2_itu_pane_g1_ParamLimits

0x9ef9,	// (0x00059387) cell_vitu2_itu_pane_g2_ParamLimits

0x9ef9,	// (0x00059387) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0005edc0) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0005edc0) cell_vitu2_itu_pane_g

0x7b55,	// (0x00056fe3) bg_vkb2_func_pane_cp05_ParamLimits

0x7b55,	// (0x00056fe3) bg_vkb2_func_pane_cp05

0x7b55,	// (0x00056fe3) bg_vkb2_func_pane_cp03

0x7b55,	// (0x00056fe3) bg_vkb2_func_pane_cp04

0x7b55,	// (0x00056fe3) bg_vkb2_func_pane_cp10_ParamLimits

0x7b55,	// (0x00056fe3) bg_vkb2_func_pane_cp10

0xab8e,	// (0x0005a01c) bg_vkb2_func_pane_cp08

0xab74,	// (0x0005a002) bg_vkb2_func_pane_cp06

0xab82,	// (0x0005a010) bg_vkb2_func_pane_cp07

0xcf07,	// (0x0005c395) bg_vkb2_func_pane_cp11_ParamLimits

0xcf07,	// (0x0005c395) bg_vkb2_func_pane_cp11

0xcf1c,	// (0x0005c3aa) bg_vkb2_func_pane_cp12_ParamLimits

0xcf1c,	// (0x0005c3aa) bg_vkb2_func_pane_cp12

0xe287,	// (0x0005d715) bg_vkb2_func_pane_cp09

0x35b7,	// (0x00052a45) bg_vkb2_func_pane_g1

0xefa2,	// (0x0005e430) bg_vkb2_func_pane_g2

0x35bf,	// (0x00052a4d) bg_vkb2_func_pane_g3

0x35c7,	// (0x00052a55) bg_vkb2_func_pane_g4

0x37f3,	// (0x00052c81) bg_vkb2_func_pane_g5

0x35df,	// (0x00052a6d) bg_vkb2_func_pane_g6

0x35e7,	// (0x00052a75) bg_vkb2_func_pane_g7

0x35d7,	// (0x00052a65) bg_vkb2_func_pane_g8

0xef82,	// (0x0005e410) bg_vkb2_func_pane_g9

0x0008,

0xfb30,	// (0x0005efbe) bg_vkb2_func_pane_g

0xae9a,	// (0x0005a328) blid2_tripm_pane_g6_ParamLimits

0xae9a,	// (0x0005a328) blid2_tripm_pane_g6

0x343f,	// (0x000528cd) mp4_progress_pane_g1

0xaef2,	// (0x0005a380) blid2_tripm_values_pane_ParamLimits

0xaef2,	// (0x0005a380) blid2_tripm_values_pane

0xafb3,	// (0x0005a441) blid2_tripm_values_pane_t1

0xafc1,	// (0x0005a44f) blid2_tripm_values_pane_t2

0xafcf,	// (0x0005a45d) blid2_tripm_values_pane_t3

0xafdd,	// (0x0005a46b) blid2_tripm_values_pane_t4

0xafeb,	// (0x0005a479) blid2_tripm_values_pane_t5

0xaff9,	// (0x0005a487) blid2_tripm_values_pane_t6

0xb007,	// (0x0005a495) blid2_tripm_values_pane_t7

0xb015,	// (0x0005a4a3) blid2_tripm_values_pane_t8

0xb023,	// (0x0005a4b1) blid2_tripm_values_pane_t9

0x0008,

0xfb43,	// (0x0005efd1) blid2_tripm_values_pane_t

0x5a3b,	// (0x00054ec9) call_video_pane_t1_ParamLimits

0x5a58,	// (0x00054ee6) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0005e70c) call_video_pane_t_ParamLimits

0x72f4,	// (0x00056782) msg_header_pane_g1_ParamLimits

0x14d7,	// (0x00050965) msg_header_pane_g2_ParamLimits

0x14d7,	// (0x00050965) msg_header_pane_g2

0x0001,

0xf498,	// (0x0005e926) msg_header_pane_g_ParamLimits

0xf498,	// (0x0005e926) msg_header_pane_g

0xead8,	// (0x0005df66) main_clock2_pane_ParamLimits

0x8eb4,	// (0x00058342) grid_clock2_toolbar_pane_ParamLimits

0x8eb4,	// (0x00058342) grid_clock2_toolbar_pane

0x8eb4,	// (0x00058342) listscroll_clock2_pane_ParamLimits

0x8eb4,	// (0x00058342) listscroll_clock2_pane

0x8f50,	// (0x000583de) main_clock2_pane_t3_ParamLimits

0x8f50,	// (0x000583de) main_clock2_pane_t3

0x8f62,	// (0x000583f0) main_clock2_pane_t4_ParamLimits

0x8f62,	// (0x000583f0) main_clock2_pane_t4

0xcfee,	// (0x0005c47c) cell_clock2_toolbar_pane

0xcff6,	// (0x0005c484) cell_clock2_toolbar_pane_cp01

0xcff6,	// (0x0005c484) cell_clock2_toolbar_pane_cp02

0xcffe,	// (0x0005c48c) cell_clock2_toolbar_pane_cp03

0xd006,	// (0x0005c494) list_clock2_pane

0x1212,	// (0x000506a0) scroll_pane_cp10

0xd00e,	// (0x0005c49c) list_single_clock2_pane_ParamLimits

0xd00e,	// (0x0005c49c) list_single_clock2_pane

0x134c,	// (0x000507da) list_highlight_pane_cp08

0xd01b,	// (0x0005c4a9) list_single_clock2_pane_t1

0xd029,	// (0x0005c4b7) list_single_clock2_pane_t2

0x0001,

0xfb56,	// (0x0005efe4) list_single_clock2_pane_t

0xe287,	// (0x0005d715) bg_button_pane_cp10

0xd037,	// (0x0005c4c5) cell_clock2_toolbar_pane_g1

0x7395,	// (0x00056823) aid_main_viewer_pane_g1_ParamLimits

0x7395,	// (0x00056823) aid_main_viewer_pane_g1

0x73a1,	// (0x0005682f) aid_main_viewer_pane_g2_ParamLimits

0x73a1,	// (0x0005682f) aid_main_viewer_pane_g2

0x73ad,	// (0x0005683b) aid_main_viewer_pane_g3_ParamLimits

0x73ad,	// (0x0005683b) aid_main_viewer_pane_g3

0x73be,	// (0x0005684c) aid_main_viewer_pane_g4_ParamLimits

0x73be,	// (0x0005684c) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x0005e937) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0005e937) aid_main_viewer_pane_g

0x7b48,	// (0x00056fd6) main_calc_pane_ParamLimits

0x7b63,	// (0x00056ff1) main_dialer2_pane_ParamLimits

0x4c73,	// (0x00054101) main_cam6_pane

0x4c73,	// (0x00054101) main_vid6_pane

0x8ec0,	// (0x0005834e) listscroll_gen_pane_cp06_ParamLimits

0x8ec0,	// (0x0005834e) listscroll_gen_pane_cp06

0x8f74,	// (0x00058402) main_clock2_pane_t5_ParamLimits

0x8f74,	// (0x00058402) main_clock2_pane_t5

0x8fc3,	// (0x00058451) aid_call2_pane_cp10_ParamLimits

0x8fd5,	// (0x00058463) aid_call_pane_cp10_ParamLimits

0x1281,	// (0x0005070f) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1281,	// (0x0005070f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8fe7,	// (0x00058475) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8fe7,	// (0x00058475) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1281,	// (0x0005070f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x0005ec6d) popup_clock_analogue_window_cp10_g_ParamLimits

0x8ff9,	// (0x00058487) popup_clock_analogue_window_cp10_t1_ParamLimits

0x97d7,	// (0x00058c65) cell_dialer2_keypad_pane_g2_ParamLimits

0x97d7,	// (0x00058c65) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x0005ed53) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x0005ed53) cell_dialer2_keypad_pane_g

0x97f3,	// (0x00058c81) cell_dialer2_keypad_pane_t1

0xa234,	// (0x000596c2) main_cset_text2_pane_ParamLimits

0xa234,	// (0x000596c2) main_cset_text2_pane

0x3a28,	// (0x00052eb6) area_vitu2_query_pane_g1_ParamLimits

0xab13,	// (0x00059fa1) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x0005ef08) area_vitu2_query_pane_g_ParamLimits

0x09fd,	// (0x0004fe8b) area_vitu2_query_pane_t7_ParamLimits

0x09fd,	// (0x0004fe8b) area_vitu2_query_pane_t7

0xab74,	// (0x0005a002) bg_button_pane_cp018_ParamLimits

0xab82,	// (0x0005a010) bg_button_pane_cp021_ParamLimits

0xab8e,	// (0x0005a01c) bg_button_pane_cp022_ParamLimits

0xab8e,	// (0x0005a01c) bg_vkb2_func_pane_cp08_ParamLimits

0xab74,	// (0x0005a002) bg_vkb2_func_pane_cp06_ParamLimits

0xab82,	// (0x0005a010) bg_vkb2_func_pane_cp07_ParamLimits

0xab9f,	// (0x0005a02d) input_focus_pane_cp09_ParamLimits

0xb031,	// (0x0005a4bf) cam6_autofocus_pane_ParamLimits

0xb031,	// (0x0005a4bf) cam6_autofocus_pane

0xb053,	// (0x0005a4e1) cam6_image_uncrop_pane_ParamLimits

0xb053,	// (0x0005a4e1) cam6_image_uncrop_pane

0xb080,	// (0x0005a50e) cam6_indi_pane_ParamLimits

0xb080,	// (0x0005a50e) cam6_indi_pane

0xb09a,	// (0x0005a528) cam6_mode_pane_ParamLimits

0xb09a,	// (0x0005a528) cam6_mode_pane

0xb0ae,	// (0x0005a53c) cam6_timer_pane_ParamLimits

0xb0ae,	// (0x0005a53c) cam6_timer_pane

0xb0ba,	// (0x0005a548) cam6_zoom_pane_ParamLimits

0xb0ba,	// (0x0005a548) cam6_zoom_pane

0xb0d6,	// (0x0005a564) cam6_mode_pane_g1_ParamLimits

0xb0d6,	// (0x0005a564) cam6_mode_pane_g1

0xb0e2,	// (0x0005a570) cam6_mode_pane_g2_ParamLimits

0xb0e2,	// (0x0005a570) cam6_mode_pane_g2

0xb0ee,	// (0x0005a57c) cam6_mode_pane_g3_ParamLimits

0xb0ee,	// (0x0005a57c) cam6_mode_pane_g3

0xb0fa,	// (0x0005a588) cam6_mode_pane_g4_ParamLimits

0xb0fa,	// (0x0005a588) cam6_mode_pane_g4

0x0003,

0xfb5b,	// (0x0005efe9) cam6_mode_pane_g_ParamLimits

0xfb5b,	// (0x0005efe9) cam6_mode_pane_g

0xceac,	// (0x0005c33a) bg_tb_trans_pane_cp08_ParamLimits

0xceac,	// (0x0005c33a) bg_tb_trans_pane_cp08

0xd03f,	// (0x0005c4cd) cam6_battery_pane_ParamLimits

0xd03f,	// (0x0005c4cd) cam6_battery_pane

0xd055,	// (0x0005c4e3) cam6_indi_pane_g1_ParamLimits

0xd055,	// (0x0005c4e3) cam6_indi_pane_g1

0xd067,	// (0x0005c4f5) cam6_indi_pane_g2_ParamLimits

0xd067,	// (0x0005c4f5) cam6_indi_pane_g2

0xd079,	// (0x0005c507) cam6_indi_pane_g3_ParamLimits

0xd079,	// (0x0005c507) cam6_indi_pane_g3

0x0002,

0xfb64,	// (0x0005eff2) cam6_indi_pane_g_ParamLimits

0xfb64,	// (0x0005eff2) cam6_indi_pane_g

0xd08b,	// (0x0005c519) cam6_indi_pane_t1_ParamLimits

0xd08b,	// (0x0005c519) cam6_indi_pane_t1

0x9d1c,	// (0x000591aa) cam6_autofocus_pane_g1

0x9d14,	// (0x000591a2) cam6_autofocus_pane_g2

0x9d2c,	// (0x000591ba) cam6_autofocus_pane_g3

0x9d24,	// (0x000591b2) cam6_autofocus_pane_g4

0x0003,

0xfb6b,	// (0x0005eff9) cam6_autofocus_pane_g

0xd0b1,	// (0x0005c53f) cam6_timer_pane_g1

0xd0b9,	// (0x0005c547) cam6_timer_pane_t1

0xd0c7,	// (0x0005c555) cam6_zoom_cont_pane

0xd0cf,	// (0x0005c55d) cam6_zoom_pane_g1

0xd0d7,	// (0x0005c565) cam6_zoom_pane_g2

0xb106,	// (0x0005a594) cam6_zoom_pane_g3

0x0002,

0xfb74,	// (0x0005f002) cam6_zoom_pane_g

0x2bab,	// (0x00052039) cam6_battery_pane_g1

0x2bab,	// (0x00052039) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x0005eb7a) cam6_battery_pane_g

0xd0df,	// (0x0005c56d) cam6_zoom_cont_pane_g1

0xd0e8,	// (0x0005c576) cam6_zoom_cont_pane_g2

0xd0f1,	// (0x0005c57f) cam6_zoom_cont_pane_g3

0x0002,

0xfb7b,	// (0x0005f009) cam6_zoom_cont_pane_g

0xb123,	// (0x0005a5b1) cam6_mode_pane_cp_ParamLimits

0xb123,	// (0x0005a5b1) cam6_mode_pane_cp

0xb137,	// (0x0005a5c5) cam6_zoom_pane_cp_ParamLimits

0xb137,	// (0x0005a5c5) cam6_zoom_pane_cp

0xb153,	// (0x0005a5e1) vid6_image_uncrop_cif_pane_ParamLimits

0xb153,	// (0x0005a5e1) vid6_image_uncrop_cif_pane

0xb17f,	// (0x0005a60d) vid6_image_uncrop_nhd_pane_ParamLimits

0xb17f,	// (0x0005a60d) vid6_image_uncrop_nhd_pane

0xb19e,	// (0x0005a62c) vid6_image_uncrop_vga_pane_ParamLimits

0xb19e,	// (0x0005a62c) vid6_image_uncrop_vga_pane

0xb1bd,	// (0x0005a64b) vid6_image_uncrop_wvga_pane_ParamLimits

0xb1bd,	// (0x0005a64b) vid6_image_uncrop_wvga_pane

0xb1dc,	// (0x0005a66a) vid6_indi_pane_ParamLimits

0xb1dc,	// (0x0005a66a) vid6_indi_pane

0xceac,	// (0x0005c33a) bg_tb_trans_pane_cp09_ParamLimits

0xceac,	// (0x0005c33a) bg_tb_trans_pane_cp09

0xd109,	// (0x0005c597) cam6_battery_pane_cp_ParamLimits

0xd109,	// (0x0005c597) cam6_battery_pane_cp

0xd115,	// (0x0005c5a3) vid6_indi_pane_g1_ParamLimits

0xd115,	// (0x0005c5a3) vid6_indi_pane_g1

0xd127,	// (0x0005c5b5) vid6_indi_pane_g2_ParamLimits

0xd127,	// (0x0005c5b5) vid6_indi_pane_g2

0xd139,	// (0x0005c5c7) vid6_indi_pane_g3_ParamLimits

0xd139,	// (0x0005c5c7) vid6_indi_pane_g3

0xd150,	// (0x0005c5de) vid6_indi_pane_g4_ParamLimits

0xd150,	// (0x0005c5de) vid6_indi_pane_g4

0xd167,	// (0x0005c5f5) vid6_indi_pane_g5_ParamLimits

0xd167,	// (0x0005c5f5) vid6_indi_pane_g5

0x0004,

0xfb82,	// (0x0005f010) vid6_indi_pane_g_ParamLimits

0xfb82,	// (0x0005f010) vid6_indi_pane_g

0xd181,	// (0x0005c60f) vid6_indi_pane_t1_ParamLimits

0xd181,	// (0x0005c60f) vid6_indi_pane_t1

0xd197,	// (0x0005c625) vid6_indi_pane_t2_ParamLimits

0xd197,	// (0x0005c625) vid6_indi_pane_t2

0xd1bf,	// (0x0005c64d) vid6_indi_pane_t3_ParamLimits

0xd1bf,	// (0x0005c64d) vid6_indi_pane_t3

0xd1e7,	// (0x0005c675) vid6_indi_pane_t4_ParamLimits

0xd1e7,	// (0x0005c675) vid6_indi_pane_t4

0x0003,

0xfb8d,	// (0x0005f01b) vid6_indi_pane_t_ParamLimits

0xfb8d,	// (0x0005f01b) vid6_indi_pane_t

0xd20b,	// (0x0005c699) wait_bar_pane_cp08

0xb201,	// (0x0005a68f) main_cset_text2_pane_t1_ParamLimits

0xb201,	// (0x0005a68f) main_cset_text2_pane_t1

0xb10e,	// (0x0005a59c) listscroll_gen_pane_cp06_t1_ParamLimits

0xb10e,	// (0x0005a59c) listscroll_gen_pane_cp06_t1

0x4c73,	// (0x00054101) main_cam6_set_pane

0x9bac,	// (0x0005903a) bg_tb_trans_pane_cp06_ParamLimits

0x9bc2,	// (0x00059050) cam4_indicators_pane_g1_ParamLimits

0x9bd3,	// (0x00059061) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x0005ed90) cam4_indicators_pane_g_ParamLimits

0x9beb,	// (0x00059079) cam4_indicators_pane_t1_ParamLimits

0x7b55,	// (0x00056fe3) bg_tb_trans_pane_cp07_ParamLimits

0x9ca2,	// (0x00059130) vid4_indicators_pane_g1_ParamLimits

0x9cb8,	// (0x00059146) vid4_indicators_pane_g2_ParamLimits

0x9ccc,	// (0x0005915a) vid4_indicators_pane_g3_ParamLimits

0x9cdf,	// (0x0005916d) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x0005eda2) vid4_indicators_pane_g_ParamLimits

0x9cfd,	// (0x0005918b) vid4_indicators_pane_t1_ParamLimits

0xacc8,	// (0x0005a156) vid4_progress_pane_g1_ParamLimits

0xacda,	// (0x0005a168) vid4_progress_pane_g2_ParamLimits

0x741b,	// (0x000568a9) vid4_progress_pane_g3_ParamLimits

0xacec,	// (0x0005a17a) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x0005ef53) vid4_progress_pane_g_ParamLimits

0xad0a,	// (0x0005a198) vid4_progress_pane_t1_ParamLimits

0xad1f,	// (0x0005a1ad) vid4_progress_pane_t2_ParamLimits

0xad35,	// (0x0005a1c3) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x0005ef5e) vid4_progress_pane_t_ParamLimits

0xad4a,	// (0x0005a1d8) wait_bar_pane_cp07_ParamLimits

0xb228,	// (0x0005a6b6) main_cam6_set_pane_g2_ParamLimits

0xb228,	// (0x0005a6b6) main_cam6_set_pane_g2

0xb234,	// (0x0005a6c2) main_cset6_listscroll_pane_ParamLimits

0xb234,	// (0x0005a6c2) main_cset6_listscroll_pane

0xb261,	// (0x0005a6ef) main_cset6_slider_pane_ParamLimits

0xb261,	// (0x0005a6ef) main_cset6_slider_pane

0xb26d,	// (0x0005a6fb) main_cset6_text2_pane_ParamLimits

0xb26d,	// (0x0005a6fb) main_cset6_text2_pane

0xd21a,	// (0x0005c6a8) main_cset6_text_pane

0xd222,	// (0x0005c6b0) main_cset_list_pane_copy1_ParamLimits

0xd222,	// (0x0005c6b0) main_cset_list_pane_copy1

0xd232,	// (0x0005c6c0) scroll_pane_cp028_copy1

0xb280,	// (0x0005a70e) cset_list_set_pane_copy1

0xb290,	// (0x0005a71e) aid_position_infowindow_above_copy1

0xb298,	// (0x0005a726) aid_position_infowindow_below_copy1

0xb2a0,	// (0x0005a72e) cset_list_set_pane_g1_copy1

0xb2a8,	// (0x0005a736) cset_list_set_pane_g3_copy1_ParamLimits

0xb2a8,	// (0x0005a736) cset_list_set_pane_g3_copy1

0xb2b7,	// (0x0005a745) cset_list_set_pane_t1_copy1_ParamLimits

0xb2b7,	// (0x0005a745) cset_list_set_pane_t1_copy1

0xe409,	// (0x0005d897) list_highlight_pane_cp021_copy1_ParamLimits

0xe409,	// (0x0005d897) list_highlight_pane_cp021_copy1

0xd23b,	// (0x0005c6c9) cset6_slider_pane_ParamLimits

0xd23b,	// (0x0005c6c9) cset6_slider_pane

0xd267,	// (0x0005c6f5) main_cset6_slider_pane_g1_ParamLimits

0xd267,	// (0x0005c6f5) main_cset6_slider_pane_g1

0xb2cc,	// (0x0005a75a) main_cset6_slider_pane_g2_ParamLimits

0xb2cc,	// (0x0005a75a) main_cset6_slider_pane_g2

0xd28f,	// (0x0005c71d) main_cset6_slider_pane_g3_ParamLimits

0xd28f,	// (0x0005c71d) main_cset6_slider_pane_g3

0xb2f4,	// (0x0005a782) main_cset6_slider_pane_g4_ParamLimits

0xb2f4,	// (0x0005a782) main_cset6_slider_pane_g4

0xb300,	// (0x0005a78e) main_cset6_slider_pane_g5_ParamLimits

0xb300,	// (0x0005a78e) main_cset6_slider_pane_g5

0x36ea,	// (0x00052b78) main_cset6_slider_pane_g7_ParamLimits

0x36ea,	// (0x00052b78) main_cset6_slider_pane_g7

0x36f6,	// (0x00052b84) main_cset6_slider_pane_g8_ParamLimits

0x36f6,	// (0x00052b84) main_cset6_slider_pane_g8

0xb30c,	// (0x0005a79a) main_cset6_slider_pane_g9_ParamLimits

0xb30c,	// (0x0005a79a) main_cset6_slider_pane_g9

0xb318,	// (0x0005a7a6) main_cset6_slider_pane_g10_ParamLimits

0xb318,	// (0x0005a7a6) main_cset6_slider_pane_g10

0xb324,	// (0x0005a7b2) main_cset6_slider_pane_g11_ParamLimits

0xb324,	// (0x0005a7b2) main_cset6_slider_pane_g11

0xb330,	// (0x0005a7be) main_cset6_slider_pane_g12_ParamLimits

0xb330,	// (0x0005a7be) main_cset6_slider_pane_g12

0xb33c,	// (0x0005a7ca) main_cset6_slider_pane_g13_ParamLimits

0xb33c,	// (0x0005a7ca) main_cset6_slider_pane_g13

0xb348,	// (0x0005a7d6) main_cset6_slider_pane_g14_ParamLimits

0xb348,	// (0x0005a7d6) main_cset6_slider_pane_g14

0xb354,	// (0x0005a7e2) main_cset6_slider_pane_g15_ParamLimits

0xb354,	// (0x0005a7e2) main_cset6_slider_pane_g15

0xb36c,	// (0x0005a7fa) main_cset6_slider_pane_g16_ParamLimits

0xb36c,	// (0x0005a7fa) main_cset6_slider_pane_g16

0xb378,	// (0x0005a806) main_cset6_slider_pane_g17_ParamLimits

0xb378,	// (0x0005a806) main_cset6_slider_pane_g17

0x0011,

0xfb96,	// (0x0005f024) main_cset6_slider_pane_g_ParamLimits

0xfb96,	// (0x0005f024) main_cset6_slider_pane_g

0xd29b,	// (0x0005c729) main_cset6_slider_pane_t1_ParamLimits

0xd29b,	// (0x0005c729) main_cset6_slider_pane_t1

0xb39c,	// (0x0005a82a) main_cset6_slider_pane_t2_ParamLimits

0xb39c,	// (0x0005a82a) main_cset6_slider_pane_t2

0xb3c7,	// (0x0005a855) main_cset6_slider_pane_t3_ParamLimits

0xb3c7,	// (0x0005a855) main_cset6_slider_pane_t3

0xb3f2,	// (0x0005a880) main_cset6_slider_pane_t4_ParamLimits

0xb3f2,	// (0x0005a880) main_cset6_slider_pane_t4

0xb41d,	// (0x0005a8ab) main_cset6_slider_pane_t5_ParamLimits

0xb41d,	// (0x0005a8ab) main_cset6_slider_pane_t5

0xd2dc,	// (0x0005c76a) main_cset6_slider_pane_t7_ParamLimits

0xd2dc,	// (0x0005c76a) main_cset6_slider_pane_t7

0xb448,	// (0x0005a8d6) main_cset6_slider_pane_t8_ParamLimits

0xb448,	// (0x0005a8d6) main_cset6_slider_pane_t8

0xb46c,	// (0x0005a8fa) main_cset6_slider_pane_t9_ParamLimits

0xb46c,	// (0x0005a8fa) main_cset6_slider_pane_t9

0xb490,	// (0x0005a91e) main_cset6_slider_pane_t10_ParamLimits

0xb490,	// (0x0005a91e) main_cset6_slider_pane_t10

0xb4b4,	// (0x0005a942) main_cset6_slider_pane_t11_ParamLimits

0xb4b4,	// (0x0005a942) main_cset6_slider_pane_t11

0xd312,	// (0x0005c7a0) main_cset6_slider_pane_t14_ParamLimits

0xd312,	// (0x0005c7a0) main_cset6_slider_pane_t14

0xd34b,	// (0x0005c7d9) main_cset6_slider_pane_t15_ParamLimits

0xd34b,	// (0x0005c7d9) main_cset6_slider_pane_t15

0x000b,

0xfbbb,	// (0x0005f049) main_cset6_slider_pane_t_ParamLimits

0xfbbb,	// (0x0005f049) main_cset6_slider_pane_t

0xd384,	// (0x0005c812) cset_slider_pane_g1_copy1

0xd38d,	// (0x0005c81b) cset_slider_pane_g2_copy1

0xd396,	// (0x0005c824) cset_slider_pane_g3_copy1

0xe287,	// (0x0005d715) bg_popup_sub_pane_cp011_copy1

0xd39f,	// (0x0005c82d) main_cset_text_pane_g1_copy1

0x3844,	// (0x00052cd2) main_cset_text_pane_t1_copy1

0x3852,	// (0x00052ce0) main_cset_text_pane_t2_copy1

0x3860,	// (0x00052cee) main_cset_text_pane_t3_copy1

0x386e,	// (0x00052cfc) main_cset_text_pane_t4_copy1

0x387c,	// (0x00052d0a) main_cset_text_pane_t5_copy1

0xd3a7,	// (0x0005c835) main_cset_text_pane_t6_copy1

0xd3b5,	// (0x0005c843) main_cset_text_pane_t7_copy1

0xb4d8,	// (0x0005a966) main_cset_text2_pane_t1_copy1

0x7b55,	// (0x00056fe3) main_ncimui_pane

0x7bbc,	// (0x0005704a) popup_query_ncimui_window_ParamLimits

0x7bbc,	// (0x0005704a) popup_query_ncimui_window

0x0539,	// (0x0004f9c7) field_cale_ev2_pane_g4_ParamLimits

0x0539,	// (0x0004f9c7) field_cale_ev2_pane_g4

0x94ed,	// (0x0005897b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x94ed,	// (0x0005897b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x0005ed2e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x0005ed2e) cell_video_dialer_keypad_pane_g

0x9505,	// (0x00058993) cell_video_dialer_keypad_pane_t1

0xe287,	// (0x0005d715) bg_popup_window_pane_cp012

0x10fe,	// (0x0005058c) heading_pane_cp06

0xd3e1,	// (0x0005c86f) ncim_query_content_pane

0xe287,	// (0x0005d715) bg_popup_heading_pane_cp01

0xd3e9,	// (0x0005c877) ncim_heading_pane_t1

0xd3f7,	// (0x0005c885) ncim_indicator_popup_pane

0xd409,	// (0x0005c897) ncim_query_button_pane

0xd41f,	// (0x0005c8ad) ncim_query_content_pane_t1

0xd431,	// (0x0005c8bf) ncim_query_content_pane_t2

0x0005,

0xfbff,	// (0x0005f08d) ncim_query_content_pane_t

0xd46b,	// (0x0005c8f9) ncim_query_list_pane

0xd47d,	// (0x0005c90b) ncim_query_popup_pane

0xd3f7,	// (0x0005c885) ncim_indicator_popup_pane_ParamLimits

0xb632,	// (0x0005aac0) ncim_query_content_pane_g1_ParamLimits

0xb632,	// (0x0005aac0) ncim_query_content_pane_g1

0xd41f,	// (0x0005c8ad) ncim_query_content_pane_t1_ParamLimits

0xd431,	// (0x0005c8bf) ncim_query_content_pane_t2_ParamLimits

0xb63e,	// (0x0005aacc) ncim_query_content_pane_t3_ParamLimits

0xb63e,	// (0x0005aacc) ncim_query_content_pane_t3

0xb65b,	// (0x0005aae9) ncim_query_content_pane_t4_ParamLimits

0xb65b,	// (0x0005aae9) ncim_query_content_pane_t4

0xb678,	// (0x0005ab06) ncim_query_content_pane_t5_ParamLimits

0xb678,	// (0x0005ab06) ncim_query_content_pane_t5

0xd443,	// (0x0005c8d1) ncim_query_content_pane_t6_ParamLimits

0xd443,	// (0x0005c8d1) ncim_query_content_pane_t6

0xfbff,	// (0x0005f08d) ncim_query_content_pane_t_ParamLimits

0xd46b,	// (0x0005c8f9) ncim_query_list_pane_ParamLimits

0xd47d,	// (0x0005c90b) ncim_query_popup_pane_ParamLimits

0xd491,	// (0x0005c91f) wait_bar_pane_cp04

0xe287,	// (0x0005d715) input_focus_pane_cp011

0xd499,	// (0x0005c927) ncim_query_popup_pane_t1

0xd4a7,	// (0x0005c935) ncim_list_query_list_pane_ParamLimits

0xd4a7,	// (0x0005c935) ncim_list_query_list_pane

0xe287,	// (0x0005d715) bg_button_pane_cp027

0xd4ba,	// (0x0005c948) ncim_query_button_pane_g1

0xe287,	// (0x0005d715) list_highlight_pane_cp012

0xd4c4,	// (0x0005c952) ncim_list_query_list_pane_g1

0xd4cc,	// (0x0005c95a) ncim_list_query_list_pane_t1

0x9bdf,	// (0x0005906d) cam4_indicators_pane_g3_ParamLimits

0x9bdf,	// (0x0005906d) cam4_indicators_pane_g3

0x9ceb,	// (0x00059179) vid4_indicators_pane_g5_ParamLimits

0x9ceb,	// (0x00059179) vid4_indicators_pane_g5

0xacfb,	// (0x0005a189) vid4_progress_pane_g5_ParamLimits

0xacfb,	// (0x0005a189) vid4_progress_pane_g5

0xb50a,	// (0x0005a998) main_ncimui_pane_g1

0xb574,	// (0x0005aa02) ncimui_group_query_pane_ParamLimits

0xb574,	// (0x0005aa02) ncimui_group_query_pane

0xb5ce,	// (0x0005aa5c) ncimui_list_pane_ParamLimits

0xb5ce,	// (0x0005aa5c) ncimui_list_pane

0xb5f5,	// (0x0005aa83) ncimui_text_pane_ParamLimits

0xb5f5,	// (0x0005aa83) ncimui_text_pane

0xb695,	// (0x0005ab23) ncimui_text_pane_t1_ParamLimits

0xb695,	// (0x0005ab23) ncimui_text_pane_t1

0xd4da,	// (0x0005c968) ncimui_list_single_graphic_pane_ParamLimits

0xd4da,	// (0x0005c968) ncimui_list_single_graphic_pane

0xb6b4,	// (0x0005ab42) ncimui_query_pane_ParamLimits

0xb6b4,	// (0x0005ab42) ncimui_query_pane

0xe287,	// (0x0005d715) list_highlight_pane_cp013

0xd4ea,	// (0x0005c978) ncim_list_query_list_pane_t1_copy1

0xd4c4,	// (0x0005c952) ncim_list_single_graphic_pane_g1

0xd4f8,	// (0x0005c986) ncim_query_button_pane_cp01

0xd504,	// (0x0005c992) ncim_query_entry_pane_ParamLimits

0xd504,	// (0x0005c992) ncim_query_entry_pane

0xd517,	// (0x0005c9a5) ncimui_query_pane_g1

0xd523,	// (0x0005c9b1) ncimui_query_pane_t1_ParamLimits

0xd523,	// (0x0005c9b1) ncimui_query_pane_t1

0xe409,	// (0x0005d897) input_focus_pane_cp012

0xd53c,	// (0x0005c9ca) ncim_query_entry_pane_t1

0xead8,	// (0x0005df66) main_im_pane_ParamLimits

0x7b55,	// (0x00056fe3) main_mobtv_pane_ParamLimits

0x7b55,	// (0x00056fe3) main_mobtv_pane

0xb384,	// (0x0005a812) main_cset6_slider_pane_g18_ParamLimits

0xb384,	// (0x0005a812) main_cset6_slider_pane_g18

0xb390,	// (0x0005a81e) main_cset6_slider_pane_g19_ParamLimits

0xb390,	// (0x0005a81e) main_cset6_slider_pane_g19

0x3597,	// (0x00052a25) bg_main_mobtv_pane_ParamLimits

0x3597,	// (0x00052a25) bg_main_mobtv_pane

0xb6c7,	// (0x0005ab55) main_mobtv_info_pane

0xb6d2,	// (0x0005ab60) main_mobtv_loading_pane_ParamLimits

0xb6d2,	// (0x0005ab60) main_mobtv_loading_pane

0xd54e,	// (0x0005c9dc) main_mobtv_pg_channel_list_pane

0xd558,	// (0x0005c9e6) main_mobtv_pg_hdr_pane

0xb6df,	// (0x0005ab6d) main_mobtv_programe_curr_pane_ParamLimits

0xb6df,	// (0x0005ab6d) main_mobtv_programe_curr_pane

0xb6ec,	// (0x0005ab7a) main_mobtv_programe_next_pane_ParamLimits

0xb6ec,	// (0x0005ab7a) main_mobtv_programe_next_pane

0xd561,	// (0x0005c9ef) popup_mobtv_noti_window

0x2bab,	// (0x00052039) main_tv_pg_hdr_pane_g1

0xd56b,	// (0x0005c9f9) main_tv_pg_hdr_pane_g2

0xd573,	// (0x0005ca01) main_tv_pg_hdr_pane_g3

0xd57b,	// (0x0005ca09) main_tv_pg_hdr_pane_g4

0xd583,	// (0x0005ca11) main_tv_pg_hdr_pane_g5

0xd58d,	// (0x0005ca1b) main_tv_pg_hdr_pane_g6

0xd597,	// (0x0005ca25) main_tv_pg_hdr_pane_g7

0xd5a1,	// (0x0005ca2f) main_tv_pg_hdr_pane_g8

0xd5ab,	// (0x0005ca39) main_tv_pg_hdr_pane_g9

0xd5b5,	// (0x0005ca43) main_tv_pg_hdr_pane_g10

0xd5bf,	// (0x0005ca4d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0c,	// (0x0005f09a) main_tv_pg_hdr_pane_g

0xd5c9,	// (0x0005ca57) main_tv_pg_hdr_pane_t1

0xd5d7,	// (0x0005ca65) main_tv_pg_hdr_pane_t2

0xd5e5,	// (0x0005ca73) main_tv_pg_hdr_pane_t3

0xd5f5,	// (0x0005ca83) main_tv_pg_hdr_pane_t4

0xd605,	// (0x0005ca93) main_tv_pg_hdr_pane_t5

0x0004,

0xfc23,	// (0x0005f0b1) main_tv_pg_hdr_pane_t

0xd615,	// (0x0005caa3) single_mobtv_pg_channel_pane_ParamLimits

0xd615,	// (0x0005caa3) single_mobtv_pg_channel_pane

0xd627,	// (0x0005cab5) single_mobtv_pg_channel_table_pane

0xd630,	// (0x0005cabe) single_mobtv_pg_channel_thumb_pane

0xd639,	// (0x0005cac7) single_tv_pg_channel_pane_g1

0xd642,	// (0x0005cad0) single_tv_pg_channel_pane_g2

0x0001,

0xfc2e,	// (0x0005f0bc) single_tv_pg_channel_pane_g

0x2ddb,	// (0x00052269) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2ddb,	// (0x00052269) bg_single_mobtv_pg_channel_thumb_pane

0xd64b,	// (0x0005cad9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd64b,	// (0x0005cad9) single_mobtv_pg_channel_thumb_pane_g1

0xd659,	// (0x0005cae7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd659,	// (0x0005cae7) single_mobtv_pg_channel_thumb_pane_g2

0xd665,	// (0x0005caf3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd665,	// (0x0005caf3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc33,	// (0x0005f0c1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc33,	// (0x0005f0c1) single_mobtv_pg_channel_thumb_pane_g

0xd671,	// (0x0005caff) single_mobtv_pg_channel_thumb_pane_t1

0xd67f,	// (0x0005cb0d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3a,	// (0x0005f0c8) single_mobtv_pg_channel_thumb_pane_t

0x2bab,	// (0x00052039) bg_single_mobtv_pg_channel_table_pane_g1

0x2bab,	// (0x00052039) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x0005eb7a) bg_single_mobtv_pg_channel_table_pane_g

0xd68d,	// (0x0005cb1b) single_mobtv_pg_channel_table_pane_t1

0xd69b,	// (0x0005cb29) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3f,	// (0x0005f0cd) single_mobtv_pg_channel_table_pane_t

0xb701,	// (0x0005ab8f) main_mobtv_info_pane_g1_ParamLimits

0xb701,	// (0x0005ab8f) main_mobtv_info_pane_g1

0xb71d,	// (0x0005abab) main_mobtv_info_pane_t1_ParamLimits

0xb71d,	// (0x0005abab) main_mobtv_info_pane_t1

0xb795,	// (0x0005ac23) main_mobtv_info_pane_t2_ParamLimits

0xb795,	// (0x0005ac23) main_mobtv_info_pane_t2

0x0002,

0xfc49,	// (0x0005f0d7) main_mobtv_info_pane_t_ParamLimits

0xfc49,	// (0x0005f0d7) main_mobtv_info_pane_t

0xb826,	// (0x0005acb4) wait_bar_pane_cp05

0xb838,	// (0x0005acc6) main_mobtv_loading_pane_g1_ParamLimits

0xb838,	// (0x0005acc6) main_mobtv_loading_pane_g1

0xb844,	// (0x0005acd2) main_mobtv_loading_pane_g2_ParamLimits

0xb844,	// (0x0005acd2) main_mobtv_loading_pane_g2

0xb850,	// (0x0005acde) main_mobtv_loading_pane_g3_ParamLimits

0xb850,	// (0x0005acde) main_mobtv_loading_pane_g3

0x0002,

0xfc50,	// (0x0005f0de) main_mobtv_loading_pane_g_ParamLimits

0xfc50,	// (0x0005f0de) main_mobtv_loading_pane_g

0xd6a9,	// (0x0005cb37) main_mobtv_loading_pane_t1_ParamLimits

0xd6a9,	// (0x0005cb37) main_mobtv_loading_pane_t1

0xd6c1,	// (0x0005cb4f) main_mobtv_loading_pane_t2_ParamLimits

0xd6c1,	// (0x0005cb4f) main_mobtv_loading_pane_t2

0x0001,

0xfc57,	// (0x0005f0e5) main_mobtv_loading_pane_t_ParamLimits

0xfc57,	// (0x0005f0e5) main_mobtv_loading_pane_t

0xb85e,	// (0x0005acec) wait_bar_pane_cp06_ParamLimits

0xb85e,	// (0x0005acec) wait_bar_pane_cp06

0xd6e5,	// (0x0005cb73) main_mobtv_programe_curr_pane_t1

0xd6f3,	// (0x0005cb81) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5c,	// (0x0005f0ea) main_mobtv_programe_curr_pane_t

0xd701,	// (0x0005cb8f) main_mobtv_programe_next_pane_t1

0xd70f,	// (0x0005cb9d) main_mobtv_programe_next_pane_t2

0xd71d,	// (0x0005cbab) main_mobtv_programe_next_pane_t3

0x0002,

0xfc61,	// (0x0005f0ef) main_mobtv_programe_next_pane_t

0xe287,	// (0x0005d715) bg_popup_mobtv_noti_window_pane

0xd72b,	// (0x0005cbb9) popup_mobtv_noti_window_g1

0xd733,	// (0x0005cbc1) popup_mobtv_noti_window_t1

0xd741,	// (0x0005cbcf) popup_mobtv_noti_window_t2

0x0001,

0xfc68,	// (0x0005f0f6) popup_mobtv_noti_window_t

0x2bab,	// (0x00052039) bg_popup_mobtv_noti_window_pane_g1

0x4c73,	// (0x00054101) sc_clock_pane

0x4c73,	// (0x00054101) main_fs_bigclock_pane

0xaee0,	// (0x0005a36e) blid2_tripm_pane_t4_ParamLimits

0xaee0,	// (0x0005a36e) blid2_tripm_pane_t4

0xb86a,	// (0x0005acf8) sc_clock_pane_g1_ParamLimits

0xb86a,	// (0x0005acf8) sc_clock_pane_g1

0xb878,	// (0x0005ad06) sc_clock_pane_t1_ParamLimits

0xb878,	// (0x0005ad06) sc_clock_pane_t1

0xb88d,	// (0x0005ad1b) sc_clock_pane_t2_ParamLimits

0xb88d,	// (0x0005ad1b) sc_clock_pane_t2

0xb89f,	// (0x0005ad2d) sc_clock_pane_t3_ParamLimits

0xb89f,	// (0x0005ad2d) sc_clock_pane_t3

0x0004,

0xfc6d,	// (0x0005f0fb) sc_clock_pane_t_ParamLimits

0xfc6d,	// (0x0005f0fb) sc_clock_pane_t

0xc598,	// (0x0005ba26) main_fs_bigclock_indicator_pane_ParamLimits

0xc598,	// (0x0005ba26) main_fs_bigclock_indicator_pane

0xb92c,	// (0x0005adba) main_fs_bigclock_pane_g1_ParamLimits

0xb92c,	// (0x0005adba) main_fs_bigclock_pane_g1

0xc5a4,	// (0x0005ba32) main_fs_bigclock_pane_t1_ParamLimits

0xc5a4,	// (0x0005ba32) main_fs_bigclock_pane_t1

0xc5b6,	// (0x0005ba44) main_fs_bigclock_pane_t2_ParamLimits

0xc5b6,	// (0x0005ba44) main_fs_bigclock_pane_t2

0xc5ca,	// (0x0005ba58) main_fs_bigclock_pane_t3_ParamLimits

0xc5ca,	// (0x0005ba58) main_fs_bigclock_pane_t3

0x0002,

0xfe71,	// (0x0005f2ff) main_fs_bigclock_pane_t_ParamLimits

0xfe71,	// (0x0005f2ff) main_fs_bigclock_pane_t

0xe04e,	// (0x0005d4dc) main_fs_bigclock_indicator_pane_g1

0xd411,	// (0x0005c89f) ncim_query_content_pane_g2_ParamLimits

0xd411,	// (0x0005c89f) ncim_query_content_pane_g2

0x0001,

0xfbfa,	// (0x0005f088) ncim_query_content_pane_g_ParamLimits

0xfbfa,	// (0x0005f088) ncim_query_content_pane_g

0xb8b1,	// (0x0005ad3f) sc_clock_pane_t4_ParamLimits

0xb8b1,	// (0x0005ad3f) sc_clock_pane_t4

0x7b55,	// (0x00056fe3) main_radioblah_pane

0x34ee,	// (0x0005297c) cell_call4_button_pane_t1_copy1_ParamLimits

0x34ee,	// (0x0005297c) cell_call4_button_pane_t1_copy1

0xb524,	// (0x0005a9b2) main_ncimui_pane_t1_ParamLimits

0xb524,	// (0x0005a9b2) main_ncimui_pane_t1

0xb53e,	// (0x0005a9cc) main_ncimui_pane_t2_ParamLimits

0xb53e,	// (0x0005a9cc) main_ncimui_pane_t2

0x0002,

0xfbf3,	// (0x0005f081) main_ncimui_pane_t_ParamLimits

0xfbf3,	// (0x0005f081) main_ncimui_pane_t

0xd88d,	// (0x0005cd1b) main_radioblah_anim_pane_ParamLimits

0xd88d,	// (0x0005cd1b) main_radioblah_anim_pane

0xd89e,	// (0x0005cd2c) main_radioblah_info_pane_ParamLimits

0xd89e,	// (0x0005cd2c) main_radioblah_info_pane

0xd8b2,	// (0x0005cd40) main_radioblah_pane_t1_ParamLimits

0xd8b2,	// (0x0005cd40) main_radioblah_pane_t1

0xd8ce,	// (0x0005cd5c) main_radioblah_pane_t2_ParamLimits

0xd8ce,	// (0x0005cd5c) main_radioblah_pane_t2

0x0003,

0xfc8e,	// (0x0005f11c) main_radioblah_pane_t_ParamLimits

0xfc8e,	// (0x0005f11c) main_radioblah_pane_t

0xb97e,	// (0x0005ae0c) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb97e,	// (0x0005ae0c) main_radioblah_rocker_ctrl_pane

0xd916,	// (0x0005cda4) main_radioblah_info_pane_t1_ParamLimits

0xd916,	// (0x0005cda4) main_radioblah_info_pane_t1

0xb9c7,	// (0x0005ae55) main_radioblah_info_pane_t2_ParamLimits

0xb9c7,	// (0x0005ae55) main_radioblah_info_pane_t2

0x0003,

0xfc97,	// (0x0005f125) main_radioblah_info_pane_t_ParamLimits

0xfc97,	// (0x0005f125) main_radioblah_info_pane_t

0x2bab,	// (0x00052039) main_radioblah_rocker_ctrl_pane_g1

0xba77,	// (0x0005af05) main_radioblah_rocker_ctrl_pane_g2

0xba7f,	// (0x0005af0d) main_radioblah_rocker_ctrl_pane_g3

0xba87,	// (0x0005af15) main_radioblah_rocker_ctrl_pane_g4

0xba8f,	// (0x0005af1d) main_radioblah_rocker_ctrl_pane_g5

0xba97,	// (0x0005af25) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca0,	// (0x0005f12e) main_radioblah_rocker_ctrl_pane_g

0xb4d8,	// (0x0005a966) main_cset_text2_pane_t1_copy1_ParamLimits

0x9afe,	// (0x00058f8c) cam4_image_uncrop_qvga_pane

0x9c51,	// (0x000590df) vid4_image_uncrop_qcif_pane

0xb072,	// (0x0005a500) cam6_image_uncrop_qvga_pane_ParamLimits

0xb072,	// (0x0005a500) cam6_image_uncrop_qvga_pane

0xd0f9,	// (0x0005c587) vid6_image_uncrop_qcif_pane_ParamLimits

0xd0f9,	// (0x0005c587) vid6_image_uncrop_qcif_pane

0xe287,	// (0x0005d715) bg_popup_preview_window_pane_cp03

0xd3c3,	// (0x0005c851) list_cset_text2_pane

0xd3cb,	// (0x0005c859) main_cset6_text2_pane_g1

0xd3d3,	// (0x0005c861) main_cset6_text2_pane_t1

0xba9f,	// (0x0005af2d) list_cset_text2_pane_t1_ParamLimits

0xba9f,	// (0x0005af2d) list_cset_text2_pane_t1

0x7b55,	// (0x00056fe3) main_radioblah_pane_ParamLimits

0xb812,	// (0x0005aca0) main_mobtv_info_pane_t3_ParamLimits

0xb812,	// (0x0005aca0) main_mobtv_info_pane_t3

0xb96c,	// (0x0005adfa) main_radioblah_pane_g1

0xb997,	// (0x0005ae25) main_radioblah_info_pane_g1

0xba1c,	// (0x0005aeaa) main_radioblah_info_pane_t3_ParamLimits

0xba1c,	// (0x0005aeaa) main_radioblah_info_pane_t3

0x673c,	// (0x00055bca) highlight_cell_cale_month_pane_ParamLimits

0x673c,	// (0x00055bca) highlight_cell_cale_month_pane

0x4c73,	// (0x00054101) main_phob_fisheye_pane

0x2ec3,	// (0x00052351) scroll_pane_cp0031_ParamLimits

0x2ec3,	// (0x00052351) scroll_pane_cp0031

0xd20b,	// (0x0005c699) wait_bar_pane_cp08_ParamLimits

0xb280,	// (0x0005a70e) cset_list_set_pane_copy1_ParamLimits

0xd950,	// (0x0005cdde) highlight_cell_cale_month_pane_g1

0xbab6,	// (0x0005af44) highlight_cell_cale_month_pane_t1

0x3a7c,	// (0x00052f0a) list_gen_pane_cp01

0x36d5,	// (0x00052b63) scroll_pane_01

0xbac4,	// (0x0005af52) list_single_double_fisheye_pane

0xbacd,	// (0x0005af5b) list_double_fisheye_pane_g1_ParamLimits

0xbacd,	// (0x0005af5b) list_double_fisheye_pane_g1

0xbad9,	// (0x0005af67) list_double_fisheye_pane_g2_ParamLimits

0xbad9,	// (0x0005af67) list_double_fisheye_pane_g2

0xbaed,	// (0x0005af7b) list_double_fisheye_pane_g3_ParamLimits

0xbaed,	// (0x0005af7b) list_double_fisheye_pane_g3

0x0004,

0xfcad,	// (0x0005f13b) list_double_fisheye_pane_g_ParamLimits

0xfcad,	// (0x0005f13b) list_double_fisheye_pane_g

0xbb16,	// (0x0005afa4) list_double_fisheye_pane_t1_ParamLimits

0xbb16,	// (0x0005afa4) list_double_fisheye_pane_t1

0xbb31,	// (0x0005afbf) list_double_fisheye_pane_t2_ParamLimits

0xbb31,	// (0x0005afbf) list_double_fisheye_pane_t2

0x0001,

0xfcb8,	// (0x0005f146) list_double_fisheye_pane_t_ParamLimits

0xfcb8,	// (0x0005f146) list_double_fisheye_pane_t

0x4c73,	// (0x00054101) main_call5_pane

0xb8d7,	// (0x0005ad65) sc_swipe_pane_ParamLimits

0xb8d7,	// (0x0005ad65) sc_swipe_pane

0xbb5f,	// (0x0005afed) call5_image_pane_ParamLimits

0xbb5f,	// (0x0005afed) call5_image_pane

0xbb71,	// (0x0005afff) call5_swipe_1_pane_ParamLimits

0xbb71,	// (0x0005afff) call5_swipe_1_pane

0xbb7d,	// (0x0005b00b) call5_swipe_2_pane_ParamLimits

0xbb7d,	// (0x0005b00b) call5_swipe_2_pane

0xbb99,	// (0x0005b027) popup_call5_audio_first_window_ParamLimits

0xbb99,	// (0x0005b027) popup_call5_audio_first_window

0x2ddb,	// (0x00052269) call5_swipe_1_pane_g1_ParamLimits

0x2ddb,	// (0x00052269) call5_swipe_1_pane_g1

0xd958,	// (0x0005cde6) call5_swipe_1_pane_g2_ParamLimits

0xd958,	// (0x0005cde6) call5_swipe_1_pane_g2

0x0001,

0xfcbd,	// (0x0005f14b) call5_swipe_1_pane_g_ParamLimits

0xfcbd,	// (0x0005f14b) call5_swipe_1_pane_g

0xd964,	// (0x0005cdf2) call5_swipe_1_pane_t1_ParamLimits

0xd964,	// (0x0005cdf2) call5_swipe_1_pane_t1

0x2ddb,	// (0x00052269) call5_swipe_2_pane_g1_ParamLimits

0x2ddb,	// (0x00052269) call5_swipe_2_pane_g1

0xd979,	// (0x0005ce07) call5_swipe_2_pane_g2_ParamLimits

0xd979,	// (0x0005ce07) call5_swipe_2_pane_g2

0x0001,

0xfcc2,	// (0x0005f150) call5_swipe_2_pane_g_ParamLimits

0xfcc2,	// (0x0005f150) call5_swipe_2_pane_g

0xd985,	// (0x0005ce13) call5_swipe_2_pane_t1_ParamLimits

0xd985,	// (0x0005ce13) call5_swipe_2_pane_t1

0xd99a,	// (0x0005ce28) sc_swipe_pane_g1_ParamLimits

0xd99a,	// (0x0005ce28) sc_swipe_pane_g1

0xd9a7,	// (0x0005ce35) sc_swipe_pane_g2_ParamLimits

0xd9a7,	// (0x0005ce35) sc_swipe_pane_g2

0x0001,

0xfcc7,	// (0x0005f155) sc_swipe_pane_g_ParamLimits

0xfcc7,	// (0x0005f155) sc_swipe_pane_g

0xd9b3,	// (0x0005ce41) sc_swipe_pane_t1_ParamLimits

0xd9b3,	// (0x0005ce41) sc_swipe_pane_t1

0x4c73,	// (0x00054101) main_cmail_launcher_pane

0xbba9,	// (0x0005b037) aid_size_cell_cmail_l_ParamLimits

0xbba9,	// (0x0005b037) aid_size_cell_cmail_l

0xbbb9,	// (0x0005b047) grid_cmail_l_pane_ParamLimits

0xbbb9,	// (0x0005b047) grid_cmail_l_pane

0xbbc9,	// (0x0005b057) cell_cmail_l_pane_ParamLimits

0xbbc9,	// (0x0005b057) cell_cmail_l_pane

0xbbdf,	// (0x0005b06d) cell_cmail_l_pane_g1_ParamLimits

0xbbdf,	// (0x0005b06d) cell_cmail_l_pane_g1

0xbbeb,	// (0x0005b079) cell_cmail_l_pane_t1_ParamLimits

0xbbeb,	// (0x0005b079) cell_cmail_l_pane_t1

0xd9c8,	// (0x0005ce56) cell_cmail_l_pane_t2_ParamLimits

0xd9c8,	// (0x0005ce56) cell_cmail_l_pane_t2

0x0001,

0xfccc,	// (0x0005f15a) cell_cmail_l_pane_t_ParamLimits

0xfccc,	// (0x0005f15a) cell_cmail_l_pane_t

0xe409,	// (0x0005d897) grid_highlight_pane_cp018_ParamLimits

0xe409,	// (0x0005d897) grid_highlight_pane_cp018

0x4ad0,	// (0x00053f5e) main2_pane_ParamLimits

0x4ad0,	// (0x00053f5e) main2_pane

0xeb83,	// (0x0005e011) popup_sp_fs_action_menu_bg_pane_g1

0xeb8b,	// (0x0005e019) popup_sp_fs_action_menu_bg_pane_g2

0xeb93,	// (0x0005e021) popup_sp_fs_action_menu_bg_pane_g3

0xeb9b,	// (0x0005e029) popup_sp_fs_action_menu_bg_pane_g4

0xeba3,	// (0x0005e031) popup_sp_fs_action_menu_bg_pane_g5

0xebab,	// (0x0005e039) popup_sp_fs_action_menu_bg_pane_g6

0xebb3,	// (0x0005e041) popup_sp_fs_action_menu_bg_pane_g7

0xebbb,	// (0x0005e049) popup_sp_fs_action_menu_bg_pane_g8

0xebc3,	// (0x0005e051) popup_sp_fs_action_menu_bg_pane_g9

0xebcb,	// (0x0005e059) popup_sp_fs_action_menu_bg_pane_g10

0xebcb,	// (0x0005e059) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x0005e626) popup_sp_fs_action_menu_bg_pane_g

0xece9,	// (0x0005e177) list_medium_line_x2_t3_g3_g1_ParamLimits

0xece9,	// (0x0005e177) list_medium_line_x2_t3_g3_g1

0xecf5,	// (0x0005e183) list_medium_line_x2_t3_g3_g2_ParamLimits

0xecf5,	// (0x0005e183) list_medium_line_x2_t3_g3_g2

0xed01,	// (0x0005e18f) list_medium_line_x2_t3_g3_g3_ParamLimits

0xed01,	// (0x0005e18f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x0005e6d6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x0005e6d6) list_medium_line_x2_t3_g3_g

0xed0d,	// (0x0005e19b) list_medium_line_x2_t3_g3_t1_ParamLimits

0xed0d,	// (0x0005e19b) list_medium_line_x2_t3_g3_t1

0x5932,	// (0x00054dc0) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5932,	// (0x00054dc0) list_medium_line_x2_t3_g3_t2

0xed22,	// (0x0005e1b0) list_medium_line_x2_t3_g3_t3_ParamLimits

0xed22,	// (0x0005e1b0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0005e6dd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0005e6dd) list_medium_line_x2_t3_g3_t

0xece9,	// (0x0005e177) list_medium_line_x2_t3_g2_g1_ParamLimits

0xece9,	// (0x0005e177) list_medium_line_x2_t3_g2_g1

0xed01,	// (0x0005e18f) list_medium_line_x2_t3_g2_g2_ParamLimits

0xed01,	// (0x0005e18f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x0005e6e4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x0005e6e4) list_medium_line_x2_t3_g2_g

0xed37,	// (0x0005e1c5) list_medium_line_x2_t3_g2_t1_ParamLimits

0xed37,	// (0x0005e1c5) list_medium_line_x2_t3_g2_t1

0xed4d,	// (0x0005e1db) list_medium_line_x2_t3_g2_t2_ParamLimits

0xed4d,	// (0x0005e1db) list_medium_line_x2_t3_g2_t2

0xed5f,	// (0x0005e1ed) list_medium_line_x2_t3_g2_t3_ParamLimits

0xed5f,	// (0x0005e1ed) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0005e6e9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0005e6e9) list_medium_line_x2_t3_g2_t

0xece9,	// (0x0005e177) list_medium_line_x2_t4_g4_g1_ParamLimits

0xece9,	// (0x0005e177) list_medium_line_x2_t4_g4_g1

0xed7d,	// (0x0005e20b) list_medium_line_x2_t4_g4_g2_ParamLimits

0xed7d,	// (0x0005e20b) list_medium_line_x2_t4_g4_g2

0xecf5,	// (0x0005e183) list_medium_line_x2_t4_g4_g3_ParamLimits

0xecf5,	// (0x0005e183) list_medium_line_x2_t4_g4_g3

0xed89,	// (0x0005e217) list_medium_line_x2_t4_g4_g4_ParamLimits

0xed89,	// (0x0005e217) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0005e6f0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0005e6f0) list_medium_line_x2_t4_g4_g

0x5946,	// (0x00054dd4) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5946,	// (0x00054dd4) list_medium_line_x2_t4_g4_t1

0x5960,	// (0x00054dee) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5960,	// (0x00054dee) list_medium_line_x2_t4_g4_t2

0x5976,	// (0x00054e04) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5976,	// (0x00054e04) list_medium_line_x2_t4_g4_t3

0xed95,	// (0x0005e223) list_medium_line_x2_t4_g4_t4_ParamLimits

0xed95,	// (0x0005e223) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0005e6f9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0005e6f9) list_medium_line_x2_t4_g4_t

0xece9,	// (0x0005e177) list_medium_line_x2_t2_g4_g1_ParamLimits

0xece9,	// (0x0005e177) list_medium_line_x2_t2_g4_g1

0xed7d,	// (0x0005e20b) list_medium_line_x2_t2_g4_g2_ParamLimits

0xed7d,	// (0x0005e20b) list_medium_line_x2_t2_g4_g2

0xecf5,	// (0x0005e183) list_medium_line_x2_t2_g4_g3_ParamLimits

0xecf5,	// (0x0005e183) list_medium_line_x2_t2_g4_g3

0xed01,	// (0x0005e18f) list_medium_line_x2_t2_g4_g4_ParamLimits

0xed01,	// (0x0005e18f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0005e760) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0005e760) list_medium_line_x2_t2_g4_g

0xf083,	// (0x0005e511) list_medium_line_x2_t2_g4_t1_ParamLimits

0xf083,	// (0x0005e511) list_medium_line_x2_t2_g4_t1

0xed22,	// (0x0005e1b0) list_medium_line_x2_t2_g4_t2_ParamLimits

0xed22,	// (0x0005e1b0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x0005e769) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x0005e769) list_medium_line_x2_t2_g4_t

0xece9,	// (0x0005e177) list_medium_line_x2_t2_g3_g1_ParamLimits

0xece9,	// (0x0005e177) list_medium_line_x2_t2_g3_g1

0xecf5,	// (0x0005e183) list_medium_line_x2_t2_g3_g2_ParamLimits

0xecf5,	// (0x0005e183) list_medium_line_x2_t2_g3_g2

0xed01,	// (0x0005e18f) list_medium_line_x2_t2_g3_g3_ParamLimits

0xed01,	// (0x0005e18f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x0005e6d6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x0005e6d6) list_medium_line_x2_t2_g3_g

0xf098,	// (0x0005e526) list_medium_line_x2_t2_g3_t1_ParamLimits

0xf098,	// (0x0005e526) list_medium_line_x2_t2_g3_t1

0xed22,	// (0x0005e1b0) list_medium_line_x2_t2_g3_t2_ParamLimits

0xed22,	// (0x0005e1b0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0005e76e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0005e76e) list_medium_line_x2_t2_g3_t

0x6947,	// (0x00055dd5) main_sp_fs_list_pane_ParamLimits

0x6947,	// (0x00055dd5) main_sp_fs_list_pane

0x6953,	// (0x00055de1) sp_fs_scroll_pane_ParamLimits

0x6953,	// (0x00055de1) sp_fs_scroll_pane

0x695f,	// (0x00055ded) list_medium_line_x2_t3_t1

0x696f,	// (0x00055dfd) list_medium_line_x2_t3_t2

0x018b,	// (0x0004f619) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0005e7b9) list_medium_line_x2_t3_t

0x697d,	// (0x00055e0b) list_medium_line_x3_t4_t1

0x698d,	// (0x00055e1b) list_medium_line_x3_t4_t2

0x0199,	// (0x0004f627) list_medium_line_x3_t4_t3

0x018b,	// (0x0004f619) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0005e7c0) list_medium_line_x3_t4_t

0x699b,	// (0x00055e29) list_medium_line_x4_t5_t1

0x69ab,	// (0x00055e39) list_medium_line_x4_t5_t2

0x0199,	// (0x0004f627) list_medium_line_x4_t5_t3

0x01a7,	// (0x0004f635) list_medium_line_x4_t5_t4

0x018b,	// (0x0004f619) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0005e7c9) list_medium_line_x4_t5_t

0xece9,	// (0x0005e177) list_medium_line_t4_g4_g1_ParamLimits

0xece9,	// (0x0005e177) list_medium_line_t4_g4_g1

0xed89,	// (0x0005e217) list_medium_line_t4_g4_g2_ParamLimits

0xed89,	// (0x0005e217) list_medium_line_t4_g4_g2

0x01b5,	// (0x0004f643) list_medium_line_t4_g4_g3_ParamLimits

0x01b5,	// (0x0004f643) list_medium_line_t4_g4_g3

0xed01,	// (0x0005e18f) list_medium_line_t4_g4_g4_ParamLimits

0xed01,	// (0x0005e18f) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x0005e7d4) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x0005e7d4) list_medium_line_t4_g4_g

0x01c1,	// (0x0004f64f) list_medium_line_t4_g4_t1_ParamLimits

0x01c1,	// (0x0004f64f) list_medium_line_t4_g4_t1

0x01d6,	// (0x0004f664) list_medium_line_t4_g4_t2_ParamLimits

0x01d6,	// (0x0004f664) list_medium_line_t4_g4_t2

0x01ec,	// (0x0004f67a) list_medium_line_t4_g4_t3_ParamLimits

0x01ec,	// (0x0004f67a) list_medium_line_t4_g4_t3

0xed22,	// (0x0005e1b0) list_medium_line_t4_g4_t4_ParamLimits

0xed22,	// (0x0005e1b0) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0005e7dd) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0005e7dd) list_medium_line_t4_g4_t

0x6acc,	// (0x00055f5a) chi_dic_find_pane_g1

0x7b71,	// (0x00056fff) main_tport_pane

0x0923,	// (0x0004fdb1) list_medium_line_plain_t1

0x096d,	// (0x0004fdfb) list_medium_line_t2_g2_g1_ParamLimits

0x096d,	// (0x0004fdfb) list_medium_line_t2_g2_g1

0x0979,	// (0x0004fe07) list_medium_line_t2_g2_g2_ParamLimits

0x0979,	// (0x0004fe07) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x0005ee99) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x0005ee99) list_medium_line_t2_g2_g

0xa6e1,	// (0x00059b6f) list_medium_line_t2_g2_t1_ParamLimits

0xa6e1,	// (0x00059b6f) list_medium_line_t2_g2_t1

0xa6f8,	// (0x00059b86) list_medium_line_t2_g2_t2_ParamLimits

0xa6f8,	// (0x00059b86) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x0005ee9e) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x0005ee9e) list_medium_line_t2_g2_t

0x0a9b,	// (0x0004ff29) aid_sp_fs_list_icon_a_sm

0x0aa3,	// (0x0004ff31) aid_sp_fs_list_icon_d

0xceba,	// (0x0005c348) aid_sp_fs_text_primary

0xcec3,	// (0x0005c351) aid_sp_fs_text_secondary

0x0aab,	// (0x0004ff39) list_medium_line

0x0aab,	// (0x0004ff39) list_medium_line_g2

0x0aab,	// (0x0004ff39) list_medium_line_g3

0x0aab,	// (0x0004ff39) list_medium_line_plain

0x0aab,	// (0x0004ff39) list_medium_line_plain_t2

0x0aab,	// (0x0004ff39) list_medium_line_plain_t3

0x0aab,	// (0x0004ff39) list_medium_line_right_icon

0x0aab,	// (0x0004ff39) list_medium_line_right_iconx2

0x0aab,	// (0x0004ff39) list_medium_line_t2

0x0aab,	// (0x0004ff39) list_medium_line_t2_g2

0x0aab,	// (0x0004ff39) list_medium_line_t2_g3

0x0aab,	// (0x0004ff39) list_medium_line_t2_right_icon

0x0aab,	// (0x0004ff39) list_medium_line_t2_right_iconx2

0x0aab,	// (0x0004ff39) list_medium_line_t3

0x0aab,	// (0x0004ff39) list_medium_line_t3_g2

0x0aab,	// (0x0004ff39) list_medium_line_t3_g3

0x0aab,	// (0x0004ff39) list_medium_line_t3_right_iconx2

0x0ab4,	// (0x0004ff42) list_medium_line_t4_g4

0x0abd,	// (0x0004ff4b) list_medium_line_x2

0x0abd,	// (0x0004ff4b) list_medium_line_x2_t2_g2

0x0abd,	// (0x0004ff4b) list_medium_line_x2_t2_g3

0x0abd,	// (0x0004ff4b) list_medium_line_x2_t2_g4

0x0abd,	// (0x0004ff4b) list_medium_line_x2_t3

0x0abd,	// (0x0004ff4b) list_medium_line_x2_t3_g2

0x0abd,	// (0x0004ff4b) list_medium_line_x2_t3_g3

0x0abd,	// (0x0004ff4b) list_medium_line_x2_t3_g4

0x0abd,	// (0x0004ff4b) list_medium_line_x2_t4_g2

0x0abd,	// (0x0004ff4b) list_medium_line_x2_t4_g4

0x0ac6,	// (0x0004ff54) list_medium_line_x3

0x0ac6,	// (0x0004ff54) list_medium_line_x3_t4

0x0ac6,	// (0x0004ff54) list_medium_line_x3_t4_g4

0x0ab4,	// (0x0004ff42) list_medium_line_x4_t4

0x0ab4,	// (0x0004ff42) list_medium_line_x4_t4_g7

0x0ab4,	// (0x0004ff42) list_medium_line_x4_t5

0x0acf,	// (0x0004ff5d) list_single_fs_dyc_pane_ParamLimits

0x0acf,	// (0x0004ff5d) list_single_fs_dyc_pane

0xece9,	// (0x0005e177) list_medium_line_x4_t4_g7_g1_ParamLimits

0xece9,	// (0x0005e177) list_medium_line_x4_t4_g7_g1

0x0ae3,	// (0x0004ff71) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0ae3,	// (0x0004ff71) list_medium_line_x4_t4_g7_g2

0x0aef,	// (0x0004ff7d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0aef,	// (0x0004ff7d) list_medium_line_x4_t4_g7_g3

0x0afe,	// (0x0004ff8c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0afe,	// (0x0004ff8c) list_medium_line_x4_t4_g7_g4

0x0b0a,	// (0x0004ff98) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0b0a,	// (0x0004ff98) list_medium_line_x4_t4_g7_g5

0x0b19,	// (0x0004ffa7) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0b19,	// (0x0004ffa7) list_medium_line_x4_t4_g7_g6

0x0b28,	// (0x0004ffb6) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0b28,	// (0x0004ffb6) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd4,	// (0x0005f062) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd4,	// (0x0005f062) list_medium_line_x4_t4_g7_g

0x0b34,	// (0x0004ffc2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0b34,	// (0x0004ffc2) list_medium_line_x4_t4_g7_t1

0x0b49,	// (0x0004ffd7) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0b49,	// (0x0004ffd7) list_medium_line_x4_t4_g7_t2

0x0b5e,	// (0x0004ffec) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0b5e,	// (0x0004ffec) list_medium_line_x4_t4_g7_t3

0x0b73,	// (0x00050001) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0b73,	// (0x00050001) list_medium_line_x4_t4_g7_t4

0x0b85,	// (0x00050013) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0b85,	// (0x00050013) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe3,	// (0x0005f071) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe3,	// (0x0005f071) list_medium_line_x4_t4_g7_t

0x0b97,	// (0x00050025) list_single_dyc_row_pane_ParamLimits

0x0b97,	// (0x00050025) list_single_dyc_row_pane

0xbb53,	// (0x0005afe1) call5_gesture_pane_ParamLimits

0xbb53,	// (0x0005afe1) call5_gesture_pane

0xbb89,	// (0x0005b017) call5_windows_pane_ParamLimits

0xbb89,	// (0x0005b017) call5_windows_pane

0xbc01,	// (0x0005b08f) call5_swipe_1_pane_cp_ParamLimits

0xbc01,	// (0x0005b08f) call5_swipe_1_pane_cp

0xbc0d,	// (0x0005b09b) call5_swipe_2_pane_cp_ParamLimits

0xbc0d,	// (0x0005b09b) call5_swipe_2_pane_cp

0x134c,	// (0x000507da) call5_image_pane_cp

0xbc19,	// (0x0005b0a7) popup_call5_audio_first_window_cp_ParamLimits

0xbc19,	// (0x0005b0a7) popup_call5_audio_first_window_cp

0xd99a,	// (0x0005ce28) call5_swipe_1_pane_g1_cp_ParamLimits

0xd99a,	// (0x0005ce28) call5_swipe_1_pane_g1_cp

0xd9da,	// (0x0005ce68) call5_swipe_1_pane_g2_cp

0xd9b3,	// (0x0005ce41) call5_swipe_1_pane_t1_cp_ParamLimits

0xd9b3,	// (0x0005ce41) call5_swipe_1_pane_t1_cp

0xd99a,	// (0x0005ce28) call5_swipe_2_pane_g1_cp_ParamLimits

0xd99a,	// (0x0005ce28) call5_swipe_2_pane_g1_cp

0xd9e2,	// (0x0005ce70) call5_swipe_2_pane_g2_cp

0xd9ea,	// (0x0005ce78) call5_swipe_2_pane_t1_cp_ParamLimits

0xd9ea,	// (0x0005ce78) call5_swipe_2_pane_t1_cp

0xe409,	// (0x0005d897) main_sp_fs_email_pane

0xd9ff,	// (0x0005ce8d) main_sp_fs_listscroll_pane_te

0x0bb4,	// (0x00050042) popup_sp_fs_action_menu_pane_ParamLimits

0x0bb4,	// (0x00050042) popup_sp_fs_action_menu_pane

0x2bab,	// (0x00052039) bg_sp_fs_ctrlbar_pane_g1

0xda08,	// (0x0005ce96) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xda11,	// (0x0005ce9f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xda1a,	// (0x0005cea8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2bab,	// (0x00052039) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd1,	// (0x0005f15f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x298a,	// (0x00051e18) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x298a,	// (0x00051e18) bg_sp_fs_ctrlbar_ddmenu_pane

0xda23,	// (0x0005ceb1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xda23,	// (0x0005ceb1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xda2f,	// (0x0005cebd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xda2f,	// (0x0005cebd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcda,	// (0x0005f168) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcda,	// (0x0005f168) main_sp_fs_ctrlbar_ddmenu_pane_g

0xda3b,	// (0x0005cec9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xda3b,	// (0x0005cec9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0bfa,	// (0x00050088) list_medium_line_t2_right_icon_g1

0xbc27,	// (0x0005b0b5) list_medium_line_t2_right_icon_t1

0xbc37,	// (0x0005b0c5) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdf,	// (0x0005f16d) list_medium_line_t2_right_icon_t

0x2773,	// (0x00051c01) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2773,	// (0x00051c01) bg_sp_fs_ctrlbar_pane

0xbc9e,	// (0x0005b12c) main_sp_fs_ctrlbar_button_pane_cp01

0xbca6,	// (0x0005b134) main_sp_fs_ctrlbar_ddmenu_pane

0xda8f,	// (0x0005cf1d) main_sp_fs_ctrlbar_pane_g1

0xda9b,	// (0x0005cf29) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce4,	// (0x0005f172) main_sp_fs_ctrlbar_pane_g

0xdaa7,	// (0x0005cf35) main_sp_fs_ctrlbar_pane_t1

0xbcb0,	// (0x0005b13e) main_sp_fs_ctrlbar_pane

0xbcca,	// (0x0005b158) main_sp_fs_listscroll_pane_te_cp01

0xbcdb,	// (0x0005b169) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xbcdb,	// (0x0005b169) popup_sp_fs_action_menu_pane_cp01

0xe409,	// (0x0005d897) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe409,	// (0x0005d897) bg_sp_fs_highlight_list_pane_cp01

0x0c02,	// (0x00050090) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0c02,	// (0x00050090) sp_fs_action_menu_list_gene_pane_g1

0xdacc,	// (0x0005cf5a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdacc,	// (0x0005cf5a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcee,	// (0x0005f17c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcee,	// (0x0005f17c) sp_fs_action_menu_list_gene_pane_g

0x0c11,	// (0x0005009f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0c11,	// (0x0005009f) sp_fs_action_menu_list_gene_pane_t1

0x0c29,	// (0x000500b7) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0c29,	// (0x000500b7) sp_fs_action_menu_list_gene_pane

0xdad9,	// (0x0005cf67) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdad9,	// (0x0005cf67) popup_sp_fs_action_menu_bg_pane

0x0c4c,	// (0x000500da) sp_fs_action_menu_list_pane_ParamLimits

0x0c4c,	// (0x000500da) sp_fs_action_menu_list_pane

0xdae7,	// (0x0005cf75) sp_fs_scroll_pane_cp01_ParamLimits

0xdae7,	// (0x0005cf75) sp_fs_scroll_pane_cp01

0xbd05,	// (0x0005b193) list_medium_line_plain_t2_t1

0xbd15,	// (0x0005b1a3) list_medium_line_plain_t2_t2

0x0001,

0xfcf3,	// (0x0005f181) list_medium_line_plain_t2_t

0xbd23,	// (0x0005b1b1) list_medium_line_plain_t3_t1

0xbd33,	// (0x0005b1c1) list_medium_line_plain_t3_t2

0xbd41,	// (0x0005b1cf) list_medium_line_plain_t3_t3

0x0002,

0xfcf8,	// (0x0005f186) list_medium_line_plain_t3_t

0xece9,	// (0x0005e177) list_medium_line_x2_t2_g2_g1_ParamLimits

0xece9,	// (0x0005e177) list_medium_line_x2_t2_g2_g1

0xed01,	// (0x0005e18f) list_medium_line_x2_t2_g2_g2_ParamLimits

0xed01,	// (0x0005e18f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x0005e6e4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x0005e6e4) list_medium_line_x2_t2_g2_g

0x01c1,	// (0x0004f64f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x01c1,	// (0x0004f64f) list_medium_line_x2_t2_g2_t1

0xed22,	// (0x0005e1b0) list_medium_line_x2_t2_g2_t2_ParamLimits

0xed22,	// (0x0005e1b0) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcff,	// (0x0005f18d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcff,	// (0x0005f18d) list_medium_line_x2_t2_g2_t

0xece9,	// (0x0005e177) list_medium_line_x2_t4_g2_g1_ParamLimits

0xece9,	// (0x0005e177) list_medium_line_x2_t4_g2_g1

0x0c70,	// (0x000500fe) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0c70,	// (0x000500fe) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd04,	// (0x0005f192) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd04,	// (0x0005f192) list_medium_line_x2_t4_g2_g

0xbd4f,	// (0x0005b1dd) list_medium_line_x2_t4_g2_t1_ParamLimits

0xbd4f,	// (0x0005b1dd) list_medium_line_x2_t4_g2_t1

0xbd69,	// (0x0005b1f7) list_medium_line_x2_t4_g2_t2_ParamLimits

0xbd69,	// (0x0005b1f7) list_medium_line_x2_t4_g2_t2

0xbd7f,	// (0x0005b20d) list_medium_line_x2_t4_g2_t3_ParamLimits

0xbd7f,	// (0x0005b20d) list_medium_line_x2_t4_g2_t3

0xed22,	// (0x0005e1b0) list_medium_line_x2_t4_g2_t4_ParamLimits

0xed22,	// (0x0005e1b0) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd09,	// (0x0005f197) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd09,	// (0x0005f197) list_medium_line_x2_t4_g2_t

0x0c82,	// (0x00050110) list_medium_line_t3_right_iconx2_g1

0x0bfa,	// (0x00050088) list_medium_line_t3_right_iconx2_g2

0xbd94,	// (0x0005b222) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd12,	// (0x0005f1a0) list_medium_line_t3_right_iconx2_g

0xbd9e,	// (0x0005b22c) list_medium_line_t3_right_iconx2_t1

0xbdae,	// (0x0005b23c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd19,	// (0x0005f1a7) list_medium_line_t3_right_iconx2_t

0xece9,	// (0x0005e177) list_medium_line_x3_t4_g4_g1_ParamLimits

0xece9,	// (0x0005e177) list_medium_line_x3_t4_g4_g1

0xecf5,	// (0x0005e183) list_medium_line_x3_t4_g4_g2_ParamLimits

0xecf5,	// (0x0005e183) list_medium_line_x3_t4_g4_g2

0xed89,	// (0x0005e217) list_medium_line_x3_t4_g4_g3_ParamLimits

0xed89,	// (0x0005e217) list_medium_line_x3_t4_g4_g3

0x0c8a,	// (0x00050118) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0c8a,	// (0x00050118) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1e,	// (0x0005f1ac) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1e,	// (0x0005f1ac) list_medium_line_x3_t4_g4_g

0xbdbc,	// (0x0005b24a) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbdbc,	// (0x0005b24a) list_medium_line_x3_t4_g4_t1

0xbdd3,	// (0x0005b261) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbdd3,	// (0x0005b261) list_medium_line_x3_t4_g4_t2

0x0c96,	// (0x00050124) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0c96,	// (0x00050124) list_medium_line_x3_t4_g4_t3

0x0cab,	// (0x00050139) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0cab,	// (0x00050139) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd27,	// (0x0005f1b5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd27,	// (0x0005f1b5) list_medium_line_x3_t4_g4_t

0xbde8,	// (0x0005b276) list_single_dyc_row_text_pane_t1_ParamLimits

0xbde8,	// (0x0005b276) list_single_dyc_row_text_pane_t1

0xbe25,	// (0x0005b2b3) list_single_dyc_row_text_pane_t2_ParamLimits

0xbe25,	// (0x0005b2b3) list_single_dyc_row_text_pane_t2

0x0cc8,	// (0x00050156) list_single_dyc_row_text_pane_t3_ParamLimits

0x0cc8,	// (0x00050156) list_single_dyc_row_text_pane_t3

0x0002,

0xfd30,	// (0x0005f1be) list_single_dyc_row_text_pane_t_ParamLimits

0xfd30,	// (0x0005f1be) list_single_dyc_row_text_pane_t

0x0cda,	// (0x00050168) list_single_dyc_row_pane_g1_ParamLimits

0x0cda,	// (0x00050168) list_single_dyc_row_pane_g1

0x0ce6,	// (0x00050174) list_single_dyc_row_pane_g2_ParamLimits

0x0ce6,	// (0x00050174) list_single_dyc_row_pane_g2

0x0cf2,	// (0x00050180) list_single_dyc_row_pane_g3_ParamLimits

0x0cf2,	// (0x00050180) list_single_dyc_row_pane_g3

0x0cfe,	// (0x0005018c) list_single_dyc_row_pane_g4_ParamLimits

0x0cfe,	// (0x0005018c) list_single_dyc_row_pane_g4

0x0003,

0xfd37,	// (0x0005f1c5) list_single_dyc_row_pane_g_ParamLimits

0xfd37,	// (0x0005f1c5) list_single_dyc_row_pane_g

0x0d0a,	// (0x00050198) list_single_dyc_row_text_pane_ParamLimits

0x0d0a,	// (0x00050198) list_single_dyc_row_text_pane

0xe287,	// (0x0005d715) bg_sp_fs_scroll_pane

0xdb0d,	// (0x0005cf9b) thumb_sp_fs_scroll_pane

0x096d,	// (0x0004fdfb) list_medium_line_g1_ParamLimits

0x096d,	// (0x0004fdfb) list_medium_line_g1

0x0d29,	// (0x000501b7) list_medium_line_t1_ParamLimits

0x0d29,	// (0x000501b7) list_medium_line_t1

0xece9,	// (0x0005e177) list_medium_line_x2_g1_ParamLimits

0xece9,	// (0x0005e177) list_medium_line_x2_g1

0xecf5,	// (0x0005e183) list_medium_line_x2_g2_ParamLimits

0xecf5,	// (0x0005e183) list_medium_line_x2_g2

0x0001,

0xfd40,	// (0x0005f1ce) list_medium_line_x2_g_ParamLimits

0xfd40,	// (0x0005f1ce) list_medium_line_x2_g

0x0d3e,	// (0x000501cc) list_medium_line_x2_t1_ParamLimits

0x0d3e,	// (0x000501cc) list_medium_line_x2_t1

0xece9,	// (0x0005e177) list_medium_line_x3_g1_ParamLimits

0xece9,	// (0x0005e177) list_medium_line_x3_g1

0xecf5,	// (0x0005e183) list_medium_line_x3_g2_ParamLimits

0xecf5,	// (0x0005e183) list_medium_line_x3_g2

0x0001,

0xfd40,	// (0x0005f1ce) list_medium_line_x3_g_ParamLimits

0xfd40,	// (0x0005f1ce) list_medium_line_x3_g

0x0d3e,	// (0x000501cc) list_medium_line_x3_t1_ParamLimits

0x0d3e,	// (0x000501cc) list_medium_line_x3_t1

0xdb16,	// (0x0005cfa4) thumb_sp_fs_scroll_pane_g1

0xdb1f,	// (0x0005cfad) thumb_sp_fs_scroll_pane_g2

0xdb28,	// (0x0005cfb6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd45,	// (0x0005f1d3) thumb_sp_fs_scroll_pane_g

0xdb16,	// (0x0005cfa4) bg_sp_fs_scroll_pane_g1

0xdb1f,	// (0x0005cfad) bg_sp_fs_scroll_pane_g2

0xdb28,	// (0x0005cfb6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd45,	// (0x0005f1d3) bg_sp_fs_scroll_pane_g

0xece9,	// (0x0005e177) list_medium_line_x2_t3_g4_g1_ParamLimits

0xece9,	// (0x0005e177) list_medium_line_x2_t3_g4_g1

0xed7d,	// (0x0005e20b) list_medium_line_x2_t3_g4_g2_ParamLimits

0xed7d,	// (0x0005e20b) list_medium_line_x2_t3_g4_g2

0xecf5,	// (0x0005e183) list_medium_line_x2_t3_g4_g3_ParamLimits

0xecf5,	// (0x0005e183) list_medium_line_x2_t3_g4_g3

0xed01,	// (0x0005e18f) list_medium_line_x2_t3_g4_g4_ParamLimits

0xed01,	// (0x0005e18f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0005e760) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0005e760) list_medium_line_x2_t3_g4_g

0xbe7f,	// (0x0005b30d) list_medium_line_x2_t3_g4_t1_ParamLimits

0xbe7f,	// (0x0005b30d) list_medium_line_x2_t3_g4_t1

0xbe95,	// (0x0005b323) list_medium_line_x2_t3_g4_t2_ParamLimits

0xbe95,	// (0x0005b323) list_medium_line_x2_t3_g4_t2

0xed22,	// (0x0005e1b0) list_medium_line_x2_t3_g4_t3_ParamLimits

0xed22,	// (0x0005e1b0) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4c,	// (0x0005f1da) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4c,	// (0x0005f1da) list_medium_line_x2_t3_g4_t

0x096d,	// (0x0004fdfb) list_medium_line_g2_g1_ParamLimits

0x096d,	// (0x0004fdfb) list_medium_line_g2_g1

0x0979,	// (0x0004fe07) list_medium_line_g2_g2_ParamLimits

0x0979,	// (0x0004fe07) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x0005ee99) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x0005ee99) list_medium_line_g2_g

0x0d54,	// (0x000501e2) list_medium_line_g2_t1_ParamLimits

0x0d54,	// (0x000501e2) list_medium_line_g2_t1

0x096d,	// (0x0004fdfb) list_medium_line_t3_g2_g1_ParamLimits

0x096d,	// (0x0004fdfb) list_medium_line_t3_g2_g1

0x0979,	// (0x0004fe07) list_medium_line_t3_g2_g2_ParamLimits

0x0979,	// (0x0004fe07) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x0005ee99) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x0005ee99) list_medium_line_t3_g2_g

0xbeae,	// (0x0005b33c) list_medium_line_t3_g2_t1_ParamLimits

0xbeae,	// (0x0005b33c) list_medium_line_t3_g2_t1

0xbec5,	// (0x0005b353) list_medium_line_t3_g2_t2_ParamLimits

0xbec5,	// (0x0005b353) list_medium_line_t3_g2_t2

0xbeda,	// (0x0005b368) list_medium_line_t3_g2_t3_ParamLimits

0xbeda,	// (0x0005b368) list_medium_line_t3_g2_t3

0x0002,

0xfd53,	// (0x0005f1e1) list_medium_line_t3_g2_t_ParamLimits

0xfd53,	// (0x0005f1e1) list_medium_line_t3_g2_t

0x0bfa,	// (0x00050088) list_medium_line_right_icon_g1

0x0d69,	// (0x000501f7) list_medium_line_right_icon_t1

0x096d,	// (0x0004fdfb) list_medium_line_t2_g1_ParamLimits

0x096d,	// (0x0004fdfb) list_medium_line_t2_g1

0xbef3,	// (0x0005b381) list_medium_line_t2_t1_ParamLimits

0xbef3,	// (0x0005b381) list_medium_line_t2_t1

0xbf0d,	// (0x0005b39b) list_medium_line_t2_t2_ParamLimits

0xbf0d,	// (0x0005b39b) list_medium_line_t2_t2

0x0001,

0xfd5a,	// (0x0005f1e8) list_medium_line_t2_t_ParamLimits

0xfd5a,	// (0x0005f1e8) list_medium_line_t2_t

0x096d,	// (0x0004fdfb) list_medium_line_t3_g1_ParamLimits

0x096d,	// (0x0004fdfb) list_medium_line_t3_g1

0xbf22,	// (0x0005b3b0) list_medium_line_t3_t1_ParamLimits

0xbf22,	// (0x0005b3b0) list_medium_line_t3_t1

0xbf3c,	// (0x0005b3ca) list_medium_line_t3_t2_ParamLimits

0xbf3c,	// (0x0005b3ca) list_medium_line_t3_t2

0xbf52,	// (0x0005b3e0) list_medium_line_t3_t3_ParamLimits

0xbf52,	// (0x0005b3e0) list_medium_line_t3_t3

0x0002,

0xfd5f,	// (0x0005f1ed) list_medium_line_t3_t_ParamLimits

0xfd5f,	// (0x0005f1ed) list_medium_line_t3_t

0x096d,	// (0x0004fdfb) list_medium_line_g3_g1_ParamLimits

0x096d,	// (0x0004fdfb) list_medium_line_g3_g1

0x0d77,	// (0x00050205) list_medium_line_g3_g2_ParamLimits

0x0d77,	// (0x00050205) list_medium_line_g3_g2

0x0979,	// (0x0004fe07) list_medium_line_g3_g3_ParamLimits

0x0979,	// (0x0004fe07) list_medium_line_g3_g3

0x0002,

0xfd66,	// (0x0005f1f4) list_medium_line_g3_g_ParamLimits

0xfd66,	// (0x0005f1f4) list_medium_line_g3_g

0x0d83,	// (0x00050211) list_medium_line_g3_t1_ParamLimits

0x0d83,	// (0x00050211) list_medium_line_g3_t1

0x096d,	// (0x0004fdfb) list_medium_line_t2_g3_g1_ParamLimits

0x096d,	// (0x0004fdfb) list_medium_line_t2_g3_g1

0x0d77,	// (0x00050205) list_medium_line_t2_g3_g2_ParamLimits

0x0d77,	// (0x00050205) list_medium_line_t2_g3_g2

0x0979,	// (0x0004fe07) list_medium_line_t2_g3_g3_ParamLimits

0x0979,	// (0x0004fe07) list_medium_line_t2_g3_g3

0x0002,

0xfd66,	// (0x0005f1f4) list_medium_line_t2_g3_g_ParamLimits

0xfd66,	// (0x0005f1f4) list_medium_line_t2_g3_g

0xbf67,	// (0x0005b3f5) list_medium_line_t2_g3_t1_ParamLimits

0xbf67,	// (0x0005b3f5) list_medium_line_t2_g3_t1

0xbf7e,	// (0x0005b40c) list_medium_line_t2_g3_t2_ParamLimits

0xbf7e,	// (0x0005b40c) list_medium_line_t2_g3_t2

0x0001,

0xfd6d,	// (0x0005f1fb) list_medium_line_t2_g3_t_ParamLimits

0xfd6d,	// (0x0005f1fb) list_medium_line_t2_g3_t

0x096d,	// (0x0004fdfb) list_medium_line_t3_g3_g1_ParamLimits

0x096d,	// (0x0004fdfb) list_medium_line_t3_g3_g1

0x0d77,	// (0x00050205) list_medium_line_t3_g3_g2_ParamLimits

0x0d77,	// (0x00050205) list_medium_line_t3_g3_g2

0x0979,	// (0x0004fe07) list_medium_line_t3_g3_g3_ParamLimits

0x0979,	// (0x0004fe07) list_medium_line_t3_g3_g3

0x0002,

0xfd66,	// (0x0005f1f4) list_medium_line_t3_g3_g_ParamLimits

0xfd66,	// (0x0005f1f4) list_medium_line_t3_g3_g

0xbf93,	// (0x0005b421) list_medium_line_t3_g3_t1_ParamLimits

0xbf93,	// (0x0005b421) list_medium_line_t3_g3_t1

0xbfa7,	// (0x0005b435) list_medium_line_t3_g3_t2_ParamLimits

0xbfa7,	// (0x0005b435) list_medium_line_t3_g3_t2

0xbfb9,	// (0x0005b447) list_medium_line_t3_g3_t3_ParamLimits

0xbfb9,	// (0x0005b447) list_medium_line_t3_g3_t3

0x0002,

0xfd72,	// (0x0005f200) list_medium_line_t3_g3_t_ParamLimits

0xfd72,	// (0x0005f200) list_medium_line_t3_g3_t

0x0c82,	// (0x00050110) list_medium_line_right_iconx2_g1

0x0bfa,	// (0x00050088) list_medium_line_right_iconx2_g2

0x0001,

0xfd79,	// (0x0005f207) list_medium_line_right_iconx2_g

0x0d98,	// (0x00050226) list_medium_line_right_iconx2_t1

0x0c82,	// (0x00050110) list_medium_line_t2_right_iconx2_g1

0x0bfa,	// (0x00050088) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd79,	// (0x0005f207) list_medium_line_t2_right_iconx2_g

0xbfcd,	// (0x0005b45b) list_medium_line_t2_right_iconx2_t1

0xbfdd,	// (0x0005b46b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7e,	// (0x0005f20c) list_medium_line_t2_right_iconx2_t

0x0da6,	// (0x00050234) list_medium_line_x4_t4_t1

0xbfeb,	// (0x0005b479) list_medium_line_x4_t4_t2

0xbffb,	// (0x0005b489) list_medium_line_x4_t4_t3

0xc00b,	// (0x0005b499) list_medium_line_x4_t4_t4

0x0003,

0xfd83,	// (0x0005f211) list_medium_line_x4_t4_t

0xc044,	// (0x0005b4d2) tport_appsw_pane_ParamLimits

0xc044,	// (0x0005b4d2) tport_appsw_pane

0xc052,	// (0x0005b4e0) tport_contact_pane_ParamLimits

0xc052,	// (0x0005b4e0) tport_contact_pane

0xc062,	// (0x0005b4f0) tport_listscroll_pane_ParamLimits

0xc062,	// (0x0005b4f0) tport_listscroll_pane

0xc072,	// (0x0005b500) cell_tport_appsw_pane_ParamLimits

0xc072,	// (0x0005b500) cell_tport_appsw_pane

0x2e40,	// (0x000522ce) tport_appsw_pane_g1_ParamLimits

0x2e40,	// (0x000522ce) tport_appsw_pane_g1

0xdb31,	// (0x0005cfbf) tport_contact_pane_g1

0xdb3a,	// (0x0005cfc8) tport_contact_pane_t1

0xdb48,	// (0x0005cfd6) tport_contact_pane_t2

0x0001,

0xfd8c,	// (0x0005f21a) tport_contact_pane_t

0xdb56,	// (0x0005cfe4) list_tport_pane

0xdb5f,	// (0x0005cfed) scroll_pane_cp_030

0xdb70,	// (0x0005cffe) cell_tport_appsw_pane_g1

0xdb80,	// (0x0005d00e) cell_tport_appsw_pane_t1

0xe287,	// (0x0005d715) grid_highlight_pane_cp019

0xc09f,	// (0x0005b52d) list_tport_double_graphic_pane_ParamLimits

0xc09f,	// (0x0005b52d) list_tport_double_graphic_pane

0xe409,	// (0x0005d897) list_highlight_pane_cp023_ParamLimits

0xe409,	// (0x0005d897) list_highlight_pane_cp023

0xc0ac,	// (0x0005b53a) list_tport_double_graphic_pane_g1_ParamLimits

0xc0ac,	// (0x0005b53a) list_tport_double_graphic_pane_g1

0xc0b9,	// (0x0005b547) list_tport_double_graphic_pane_t1_ParamLimits

0xc0b9,	// (0x0005b547) list_tport_double_graphic_pane_t1

0xc0ce,	// (0x0005b55c) list_tport_double_graphic_pane_t2_ParamLimits

0xc0ce,	// (0x0005b55c) list_tport_double_graphic_pane_t2

0x0001,

0xfd98,	// (0x0005f226) list_tport_double_graphic_pane_t_ParamLimits

0xfd98,	// (0x0005f226) list_tport_double_graphic_pane_t

0xe287,	// (0x0005d715) main_cale_note_pane

0x9ec0,	// (0x0005934e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9ec0,	// (0x0005934e) cell_vitu2_function_top_wide_pane_cp01

0xb826,	// (0x0005acb4) wait_bar_pane_cp05_ParamLimits

0xe287,	// (0x0005d715) listscroll_cmail_pane

0xdb96,	// (0x0005d024) list_cmail_pane

0xc0ea,	// (0x0005b578) list_cmail_body_pane

0xc0ff,	// (0x0005b58d) list_single_cmail_header_caption_pane

0xc119,	// (0x0005b5a7) list_single_cmail_header_detail_pane_ParamLimits

0xc119,	// (0x0005b5a7) list_single_cmail_header_detail_pane

0xc148,	// (0x0005b5d6) list_single_cmail_header_caption_pane_t1

0xc158,	// (0x0005b5e6) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc158,	// (0x0005b5e6) list_single_cmail_header_detail_pane_g1

0x0db4,	// (0x00050242) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0db4,	// (0x00050242) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9d,	// (0x0005f22b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9d,	// (0x0005f22b) list_single_cmail_header_detail_pane_g

0x0dc0,	// (0x0005024e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0dc0,	// (0x0005024e) list_single_cmail_header_detail_pane_t1

0x0dfe,	// (0x0005028c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0dfe,	// (0x0005028c) list_single_cmail_header_editor_pane_bg

0xd642,	// (0x0005cad0) list_cmail_body_pane_g1

0xdbc3,	// (0x0005d051) list_cmail_body_pane_t1

0x35b7,	// (0x00052a45) list_single_cmail_header_editor_pane_bg_g1

0xefa2,	// (0x0005e430) list_single_cmail_header_editor_pane_bg_g1_copy1

0x35c7,	// (0x00052a55) list_single_cmail_header_editor_pane_bg_g1_copy2

0x35bf,	// (0x00052a4d) list_single_cmail_header_editor_pane_bg_g1_copy3

0x37f3,	// (0x00052c81) list_single_cmail_header_editor_pane_bg_g1_copy4

0x35e7,	// (0x00052a75) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x35d7,	// (0x00052a65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x35df,	// (0x00052a6d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xef82,	// (0x0005e410) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc196,	// (0x0005b624) calenote_gesture_pane_ParamLimits

0xc196,	// (0x0005b624) calenote_gesture_pane

0xc1b0,	// (0x0005b63e) calenote_window_pane_ParamLimits

0xc1b0,	// (0x0005b63e) calenote_window_pane

0xdbd1,	// (0x0005d05f) popup_note_window_cp01

0xc1c8,	// (0x0005b656) calenote_swipe_1_pane_ParamLimits

0xc1c8,	// (0x0005b656) calenote_swipe_1_pane

0xbc0d,	// (0x0005b09b) calenote_swipe_2_pane_ParamLimits

0xbc0d,	// (0x0005b09b) calenote_swipe_2_pane

0xd99a,	// (0x0005ce28) calenote_swipe_1_pane_g1_ParamLimits

0xd99a,	// (0x0005ce28) calenote_swipe_1_pane_g1

0xd9a7,	// (0x0005ce35) calenote_swipe_1_pane_g2_ParamLimits

0xd9a7,	// (0x0005ce35) calenote_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x0005f155) calenote_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x0005f155) calenote_swipe_1_pane_g

0xdbe3,	// (0x0005d071) calenote_swipe_1_pane_t1_ParamLimits

0xdbe3,	// (0x0005d071) calenote_swipe_1_pane_t1

0xd99a,	// (0x0005ce28) calenote_swipe_2_pane_g1_ParamLimits

0xd99a,	// (0x0005ce28) calenote_swipe_2_pane_g1

0xdc02,	// (0x0005d090) calenote_swipe_2_pane_g2_ParamLimits

0xdc02,	// (0x0005d090) calenote_swipe_2_pane_g2

0x0001,

0xfda9,	// (0x0005f237) calenote_swipe_2_pane_g_ParamLimits

0xfda9,	// (0x0005f237) calenote_swipe_2_pane_g

0xdc0e,	// (0x0005d09c) calenote_swipe_2_pane_t1_ParamLimits

0xdc0e,	// (0x0005d09c) calenote_swipe_2_pane_t1

0xe287,	// (0x0005d715) main_mup_navstr_pane

0x8bd5,	// (0x00058063) main_mup3_pane_t7_ParamLimits

0x8bd5,	// (0x00058063) main_mup3_pane_t7

0x95da,	// (0x00058a68) main_mp4_pane_g6_ParamLimits

0x95da,	// (0x00058a68) main_mp4_pane_g6

0x9958,	// (0x00058de6) main_image3_pane_t4_ParamLimits

0x9958,	// (0x00058de6) main_image3_pane_t4

0xc1db,	// (0x0005b669) popup_navstr_preview_pane_ParamLimits

0xc1db,	// (0x0005b669) popup_navstr_preview_pane

0xc1e7,	// (0x0005b675) scroll_navstr_pane_ParamLimits

0xc1e7,	// (0x0005b675) scroll_navstr_pane

0xe287,	// (0x0005d715) bg_popup_preview_window_pane_cp04

0xdc4f,	// (0x0005d0dd) popup_navstr_preview_pane_t1

0xc1f3,	// (0x0005b681) scroll_navstr_pane_g1_ParamLimits

0xc1f3,	// (0x0005b681) scroll_navstr_pane_g1

0xc200,	// (0x0005b68e) scroll_navstr_pane_t1_ParamLimits

0xc200,	// (0x0005b68e) scroll_navstr_pane_t1

0xdbda,	// (0x0005d068) bg_button_pane_cp014

0xdbda,	// (0x0005d068) bg_button_pane_cp030

0xbaf9,	// (0x0005af87) list_double_fisheye_pane_g4_ParamLimits

0xbaf9,	// (0x0005af87) list_double_fisheye_pane_g4

0xbb05,	// (0x0005af93) list_double_fisheye_pane_g5_ParamLimits

0xbb05,	// (0x0005af93) list_double_fisheye_pane_g5

0xdb9e,	// (0x0005d02c) sp_fs_scroll_pane_cp03

0xda8f,	// (0x0005cf1d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xda9b,	// (0x0005cf29) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce4,	// (0x0005f172) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdaa7,	// (0x0005cf35) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc0e0,	// (0x0005b56e) sp_fs_scroll_pane_cp02

0xebee,	// (0x0005e07c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xebee,	// (0x0005e07c) popup_sp_fs_calendar_preview_list_single_pane

0xe287,	// (0x0005d715) main_cam6_pano_pane

0x7b55,	// (0x00056fe3) main_mup3_pane_ParamLimits

0xe287,	// (0x0005d715) main_phacti_pane

0xb6f9,	// (0x0005ab87) bg_button_pane_cp11

0xb711,	// (0x0005ab9f) main_mobtv_info_pane_g2_ParamLimits

0xb711,	// (0x0005ab9f) main_mobtv_info_pane_g2

0x0001,

0xfc44,	// (0x0005f0d2) main_mobtv_info_pane_g_ParamLimits

0xfc44,	// (0x0005f0d2) main_mobtv_info_pane_g

0xb8c3,	// (0x0005ad51) sc_clock_pane_t5_ParamLimits

0xb8c3,	// (0x0005ad51) sc_clock_pane_t5

0xb96c,	// (0x0005adfa) main_radioblah_pane_g1_ParamLimits

0xd8e6,	// (0x0005cd74) main_radioblah_pane_t3_ParamLimits

0xd8e6,	// (0x0005cd74) main_radioblah_pane_t3

0xd8fe,	// (0x0005cd8c) main_radioblah_pane_t4_ParamLimits

0xd8fe,	// (0x0005cd8c) main_radioblah_pane_t4

0xb98a,	// (0x0005ae18) main_radioblah_text_pane_ParamLimits

0xb98a,	// (0x0005ae18) main_radioblah_text_pane

0xb997,	// (0x0005ae25) main_radioblah_info_pane_g1_ParamLimits

0xba30,	// (0x0005aebe) main_radioblah_info_pane_t4_ParamLimits

0xba30,	// (0x0005aebe) main_radioblah_info_pane_t4

0xe409,	// (0x0005d897) main_sp_fs_calendar_pane

0xc212,	// (0x0005b6a0) main_phacti_pane_g1

0xc21a,	// (0x0005b6a8) phacti_note_pane_ParamLimits

0xc21a,	// (0x0005b6a8) phacti_note_pane

0xdc66,	// (0x0005d0f4) phacti_term_pane_ParamLimits

0xdc66,	// (0x0005d0f4) phacti_term_pane

0xdc7b,	// (0x0005d109) phacti_note_pane_t1_ParamLimits

0xdc7b,	// (0x0005d109) phacti_note_pane_t1

0x0e10,	// (0x0005029e) phacti_term_pane_g1

0x0e18,	// (0x000502a6) phacti_term_pane_t1_ParamLimits

0x0e18,	// (0x000502a6) phacti_term_pane_t1

0xdc92,	// (0x0005d120) popup_sp_fs_calendar_preview_list_single_pane_g1

0xdc9a,	// (0x0005d128) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb3,	// (0x0005f241) popup_sp_fs_calendar_preview_list_single_pane_g

0xdca2,	// (0x0005d130) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdca2,	// (0x0005d130) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdcb8,	// (0x0005d146) aid_popup_sp_fs_bg_corner_pane

0x2bab,	// (0x00052039) popup_sp_fs_calendar_preview_bg_pane_g1

0xe287,	// (0x0005d715) popup_sp_fs_calendar_preview_bg_pane

0xdcc0,	// (0x0005d14e) popup_sp_fs_calendar_preview_list_pane

0xe409,	// (0x0005d897) bg_main_sp_fs_cale_pane_ParamLimits

0xe409,	// (0x0005d897) bg_main_sp_fs_cale_pane

0x0e42,	// (0x000502d0) listscroll_cale_mrui_pane_ParamLimits

0x0e42,	// (0x000502d0) listscroll_cale_mrui_pane

0x0e56,	// (0x000502e4) listscroll_sp_fs_schedule_track_pane

0x0e5f,	// (0x000502ed) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0e5f,	// (0x000502ed) main_sp_fs_ctrlbar_pane_cp01

0xdcc8,	// (0x0005d156) main_sp_fs_ribbon_pane

0xdcd0,	// (0x0005d15e) popup_sp_fs_cale_preview_window

0xc261,	// (0x0005b6ef) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc261,	// (0x0005b6ef) list_single_sp_fs_schedule_track_pane

0x9230,	// (0x000586be) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9230,	// (0x000586be) bg_sp_fs_highlight_list_pane_cp03

0xc275,	// (0x0005b703) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc275,	// (0x0005b703) list_single_sp_fs_schedule_track_pane_g1

0xc281,	// (0x0005b70f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc281,	// (0x0005b70f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb8,	// (0x0005f246) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb8,	// (0x0005f246) list_single_sp_fs_schedule_track_pane_g

0xc28d,	// (0x0005b71b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc28d,	// (0x0005b71b) list_single_sp_fs_schedule_track_pane_t1

0xc2ab,	// (0x0005b739) sp_fs_schedule_track_pane_ParamLimits

0xc2ab,	// (0x0005b739) sp_fs_schedule_track_pane

0xdce2,	// (0x0005d170) sp_fs_schedule_track_pane_g1

0xdcea,	// (0x0005d178) sp_fs_schedule_track_pane_g2

0xdcf2,	// (0x0005d180) sp_fs_schedule_track_pane_g3

0xdcfa,	// (0x0005d188) sp_fs_schedule_track_pane_g4

0xdd02,	// (0x0005d190) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbd,	// (0x0005f24b) sp_fs_schedule_track_pane_g

0x35b7,	// (0x00052a45) bg_sp_fs_schedule_viewer_highlight_g1

0xefa2,	// (0x0005e430) bg_sp_fs_schedule_viewer_highlight_g2

0x35bf,	// (0x00052a4d) bg_sp_fs_schedule_viewer_highlight_g3

0x35c7,	// (0x00052a55) bg_sp_fs_schedule_viewer_highlight_g4

0x37f3,	// (0x00052c81) bg_sp_fs_schedule_viewer_highlight_g5

0x35d7,	// (0x00052a65) bg_sp_fs_schedule_viewer_highlight_g6

0x35df,	// (0x00052a6d) bg_sp_fs_schedule_viewer_highlight_g7

0x35e7,	// (0x00052a75) bg_sp_fs_schedule_viewer_highlight_g8

0xef82,	// (0x0005e410) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc8,	// (0x0005f256) bg_sp_fs_schedule_viewer_highlight_g

0xe287,	// (0x0005d715) bg_main_sp_fs_ribbon_pane

0xc2bd,	// (0x0005b74b) main_sp_fs_ribbon_pane_g1

0xdd0a,	// (0x0005d198) main_sp_fs_ribbon_pane_t1

0xc2c6,	// (0x0005b754) main_sp_fs_ribbon_pane_t2

0xdd19,	// (0x0005d1a7) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddb,	// (0x0005f269) main_sp_fs_ribbon_pane_t

0xdd28,	// (0x0005d1b6) main_sp_fs_ribbon_scheduler_pane

0xdd30,	// (0x0005d1be) bg_main_sp_fs_ribbon_pane_g1

0xdd39,	// (0x0005d1c7) bg_main_sp_fs_ribbon_pane_g2

0xdd42,	// (0x0005d1d0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde2,	// (0x0005f270) bg_main_sp_fs_ribbon_pane_g

0xdd4a,	// (0x0005d1d8) main_sp_fs_ribbon_scheduler_pane_g1

0xdd53,	// (0x0005d1e1) main_sp_fs_ribbon_scheduler_pane_g2

0xdd5c,	// (0x0005d1ea) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde9,	// (0x0005f277) main_sp_fs_ribbon_scheduler_pane_g

0xdd65,	// (0x0005d1f3) list_cale_mrui_pane

0xc2d5,	// (0x0005b763) sp_fs_scroll_pane_cp07_ParamLimits

0xc2d5,	// (0x0005b763) sp_fs_scroll_pane_cp07

0xc2eb,	// (0x0005b779) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc2eb,	// (0x0005b779) bg_sp_fs_schedule_viewer_highlight

0xdd6e,	// (0x0005d1fc) list_single_sp_fs_schedule_track_pane_cp01

0xdd76,	// (0x0005d204) list_sp_fs_schedule_track_pane

0xdd7e,	// (0x0005d20c) sp_fs_scroll_pane_cp06_ParamLimits

0xdd7e,	// (0x0005d20c) sp_fs_scroll_pane_cp06

0x2bab,	// (0x00052039) bgmain_sp_fs_calendar_pane_g1

0x0e70,	// (0x000502fe) list_single_cale_mrui_pane_ParamLimits

0x0e70,	// (0x000502fe) list_single_cale_mrui_pane

0x0e93,	// (0x00050321) list_single_cale_mrui_row_pane_ParamLimits

0x0e93,	// (0x00050321) list_single_cale_mrui_row_pane

0x0ea0,	// (0x0005032e) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0ea0,	// (0x0005032e) list_single_cale_mrui_row_pane_g1

0x0ed8,	// (0x00050366) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0ed8,	// (0x00050366) list_single_cale_mrui_row_pane_t1

0xc2f8,	// (0x0005b786) list_single_cale_mrui_row_pane_t2_ParamLimits

0xc2f8,	// (0x0005b786) list_single_cale_mrui_row_pane_t2

0x0eea,	// (0x00050378) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0eea,	// (0x00050378) list_single_cale_mrui_row_pane_t3

0x0f19,	// (0x000503a7) list_single_cale_mrui_row_pane_t4_ParamLimits

0x0f19,	// (0x000503a7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf7,	// (0x0005f285) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf7,	// (0x0005f285) list_single_cale_mrui_row_pane_t

0xc35e,	// (0x0005b7ec) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xc35e,	// (0x0005b7ec) list_single_cmail_header_editor_pane_bg_cp01

0xc382,	// (0x0005b810) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xc382,	// (0x0005b810) list_single_cmail_header_editor_pane_bg_cp02

0xc39e,	// (0x0005b82c) main_radioblah_text_pane_t1_ParamLimits

0xc39e,	// (0x0005b82c) main_radioblah_text_pane_t1

0xdd9d,	// (0x0005d22b) cam6_indi_pane_cp01

0xdda5,	// (0x0005d233) cam6_mode_pane_cp01

0xddad,	// (0x0005d23b) cam6_pano_pane

0xddb6,	// (0x0005d244) cam6_zoom_pane_cp01

0xddc0,	// (0x0005d24e) cam6_pano_image_pane

0xddc9,	// (0x0005d257) cam6_pano_pane_g1

0xd642,	// (0x0005cad0) cam6_pano_pane_g2

0xddd2,	// (0x0005d260) cam6_pano_pane_g3

0xdddb,	// (0x0005d269) cam6_pano_pane_g4

0x3135,	// (0x000525c3) cam6_pano_pane_g5

0xdde4,	// (0x0005d272) cam6_pano_pane_g6

0xddec,	// (0x0005d27a) cam6_pano_pane_g7

0xddf4,	// (0x0005d282) cam6_pano_pane_g8

0xddfd,	// (0x0005d28b) cam6_pano_pane_g9

0x0008,

0xfe00,	// (0x0005f28e) cam6_pano_pane_g

0xe287,	// (0x0005d715) main_browser_tag_pane

0xdc47,	// (0x0005d0d5) grid_navstr_albumart_pane

0xde08,	// (0x0005d296) cell_navstr_albumart_pane_ParamLimits

0xde08,	// (0x0005d296) cell_navstr_albumart_pane

0xde24,	// (0x0005d2b2) cell_navstr_albumart_pane_g1

0x258c,	// (0x00051a1a) cell_navstr_albumart_pane_g2

0x259c,	// (0x00051a2a) cell_navstr_albumart_pane_g3

0x2594,	// (0x00051a22) cell_navstr_albumart_pane_g4

0x0003,

0xfe13,	// (0x0005f2a1) cell_navstr_albumart_pane_g

0xc3b8,	// (0x0005b846) bt_list_pane_ParamLimits

0xc3b8,	// (0x0005b846) bt_list_pane

0xc3d1,	// (0x0005b85f) bt_list_pane_t1

0xc3e0,	// (0x0005b86e) bt_list_pane_t2

0x0001,

0xfe1c,	// (0x0005f2aa) bt_list_pane_t

0xe287,	// (0x0005d715) main_cale_prevew_pane

0xc3ef,	// (0x0005b87d) popup_cale_preview_window_ParamLimits

0xc3ef,	// (0x0005b87d) popup_cale_preview_window

0xe409,	// (0x0005d897) bg_popup_preview_window_pane_cp05_ParamLimits

0xe409,	// (0x0005d897) bg_popup_preview_window_pane_cp05

0xde2c,	// (0x0005d2ba) list_cale_preview_pane_ParamLimits

0xde2c,	// (0x0005d2ba) list_cale_preview_pane

0xc40a,	// (0x0005b898) list_double_cale_preview_pane_ParamLimits

0xc40a,	// (0x0005b898) list_double_cale_preview_pane

0xc41e,	// (0x0005b8ac) list_single_cale_preview_pane_ParamLimits

0xc41e,	// (0x0005b8ac) list_single_cale_preview_pane

0xc436,	// (0x0005b8c4) list_single_cale_preview_pane_g1

0xc43e,	// (0x0005b8cc) list_single_cale_preview_pane_t1_ParamLimits

0xc43e,	// (0x0005b8cc) list_single_cale_preview_pane_t1

0xc453,	// (0x0005b8e1) list_double_cale_preview_pane_g1

0xc45b,	// (0x0005b8e9) list_double_cale_preview_pane_t1_ParamLimits

0xc45b,	// (0x0005b8e9) list_double_cale_preview_pane_t1

0xc470,	// (0x0005b8fe) list_double_cale_preview_pane_t2_ParamLimits

0xc470,	// (0x0005b8fe) list_double_cale_preview_pane_t2

0x0001,

0xfe21,	// (0x0005f2af) list_double_cale_preview_pane_t_ParamLimits

0xfe21,	// (0x0005f2af) list_double_cale_preview_pane_t

0xe287,	// (0x0005d715) main_ezdial_pane

0xe409,	// (0x0005d897) main_sp_fs_email_pane_ParamLimits

0xbc45,	// (0x0005b0d3) cmail_ddmenu_btn01_pane_ParamLimits

0xbc45,	// (0x0005b0d3) cmail_ddmenu_btn01_pane

0xbc62,	// (0x0005b0f0) cmail_ddmenu_btn02_pane_ParamLimits

0xbc62,	// (0x0005b0f0) cmail_ddmenu_btn02_pane

0xbc80,	// (0x0005b10e) cmail_ddmenu_btn03_pane_ParamLimits

0xbc80,	// (0x0005b10e) cmail_ddmenu_btn03_pane

0xbcb0,	// (0x0005b13e) main_sp_fs_ctrlbar_pane_ParamLimits

0xbcca,	// (0x0005b158) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc0ea,	// (0x0005b578) list_cmail_body_pane_ParamLimits

0xdbad,	// (0x0005d03b) bg_button_pane_cp12

0xdbb6,	// (0x0005d044) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdbb6,	// (0x0005d044) list_single_cmail_header_detail_pane_g3

0xc170,	// (0x0005b5fe) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc170,	// (0x0005b5fe) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda4,	// (0x0005f232) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda4,	// (0x0005f232) list_single_cmail_header_detail_pane_t

0x0e2d,	// (0x000502bb) phacti_term_pane_t2_ParamLimits

0x0e2d,	// (0x000502bb) phacti_term_pane_t2

0x0001,

0xfdae,	// (0x0005f23c) phacti_term_pane_t_ParamLimits

0xfdae,	// (0x0005f23c) phacti_term_pane_t

0xde38,	// (0x0005d2c6) aid_size_list_single_double

0xc488,	// (0x0005b916) popup_ezdial_listscroll_window

0xc4a8,	// (0x0005b936) popup_number_entry_window_cp01

0x134c,	// (0x000507da) bg_popup_call_pane_cp09

0xde44,	// (0x0005d2d2) ezdial_list_pane

0xde4c,	// (0x0005d2da) scroll_pane_cp23

0x298a,	// (0x00051e18) bg_button_pane_cp028_ParamLimits

0x298a,	// (0x00051e18) bg_button_pane_cp028

0xc4b6,	// (0x0005b944) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc4b6,	// (0x0005b944) cmail_ddmenu_btn01_pane_g1

0xc4c8,	// (0x0005b956) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc4c8,	// (0x0005b956) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe26,	// (0x0005f2b4) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe26,	// (0x0005f2b4) cmail_ddmenu_btn01_pane_g

0xde54,	// (0x0005d2e2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xde54,	// (0x0005d2e2) cmail_ddmenu_btn01_pane_t1

0x2773,	// (0x00051c01) bg_button_pane_cp029_ParamLimits

0x2773,	// (0x00051c01) bg_button_pane_cp029

0xc4c8,	// (0x0005b956) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc4c8,	// (0x0005b956) cmail_ddmenu_btn02_pane_g1

0xc4e0,	// (0x0005b96e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc4e0,	// (0x0005b96e) cmail_ddmenu_btn02_pane_t1

0x9230,	// (0x000586be) bg_button_pane_cp031_ParamLimits

0x9230,	// (0x000586be) bg_button_pane_cp031

0xc4c8,	// (0x0005b956) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc4c8,	// (0x0005b956) cmail_ddmenu_btn03_pane_g1

0xc4e0,	// (0x0005b96e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc4e0,	// (0x0005b96e) cmail_ddmenu_btn03_pane_t1

0x97f3,	// (0x00058c81) cell_dialer2_keypad_pane_t1_ParamLimits

0x980d,	// (0x00058c9b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x980d,	// (0x00058c9b) cell_dialer2_keypad_pane_t1_copy1

0xb56a,	// (0x0005a9f8) ncimui_group_button_pane

0xe409,	// (0x0005d897) main_sp_fs_calendar_pane_ParamLimits

0xc0ff,	// (0x0005b58d) list_single_cmail_header_caption_pane_ParamLimits

0xcec3,	// (0x0005c351) aid_recal_txt_sm_pane

0xe287,	// (0x0005d715) mian_recal_day_pane

0xdcd0,	// (0x0005d15e) popup_sp_fs_cale_preview_window_ParamLimits

0xe287,	// (0x0005d715) list_recal_day_pane

0xde83,	// (0x0005d311) list_single_recal_day_pane_ParamLimits

0xde83,	// (0x0005d311) list_single_recal_day_pane

0xde95,	// (0x0005d323) list_single_recal_day_pane_g1_ParamLimits

0xde95,	// (0x0005d323) list_single_recal_day_pane_g1

0xdea1,	// (0x0005d32f) list_single_recal_day_pane_g2_ParamLimits

0xdea1,	// (0x0005d32f) list_single_recal_day_pane_g2

0xdeb1,	// (0x0005d33f) list_single_recal_day_pane_g3_ParamLimits

0xdeb1,	// (0x0005d33f) list_single_recal_day_pane_g3

0xc504,	// (0x0005b992) list_single_recal_day_pane_g4_ParamLimits

0xc504,	// (0x0005b992) list_single_recal_day_pane_g4

0xdebd,	// (0x0005d34b) list_single_recal_day_pane_g5_ParamLimits

0xdebd,	// (0x0005d34b) list_single_recal_day_pane_g5

0xdecd,	// (0x0005d35b) list_single_recal_day_pane_g6_ParamLimits

0xdecd,	// (0x0005d35b) list_single_recal_day_pane_g6

0x0004,

0xfe35,	// (0x0005f2c3) list_single_recal_day_pane_g_ParamLimits

0xfe35,	// (0x0005f2c3) list_single_recal_day_pane_g

0xdee4,	// (0x0005d372) list_single_recal_day_pane_t1

0xdef6,	// (0x0005d384) list_single_recal_day_pane_t2

0x0001,

0xfe40,	// (0x0005f2ce) list_single_recal_day_pane_t

0xc524,	// (0x0005b9b2) ncimui_query_button_pane_ParamLimits

0xc524,	// (0x0005b9b2) ncimui_query_button_pane

0xc534,	// (0x0005b9c2) ncimui_query_button_pane_t1_ParamLimits

0xc534,	// (0x0005b9c2) ncimui_query_button_pane_t1

0xdf0b,	// (0x0005d399) ncimui_query_button_pane_t2_ParamLimits

0xdf0b,	// (0x0005d399) ncimui_query_button_pane_t2

0x0001,

0xfe45,	// (0x0005f2d3) ncimui_query_button_pane_t_ParamLimits

0xfe45,	// (0x0005f2d3) ncimui_query_button_pane_t

0xc547,	// (0x0005b9d5) query_button_pane_ParamLimits

0xc547,	// (0x0005b9d5) query_button_pane

0xe287,	// (0x0005d715) bg_button_pane_cp0028

0xdf1e,	// (0x0005d3ac) query_button_pane_t1

0x7b71,	// (0x00056fff) main_tport_pane_ParamLimits

0xc01b,	// (0x0005b4a9) bg_popup_window_pane_cp01_ParamLimits

0xc01b,	// (0x0005b4a9) bg_popup_window_pane_cp01

0xc028,	// (0x0005b4b6) heading_pane_cp08_ParamLimits

0xc028,	// (0x0005b4b6) heading_pane_cp08

0xc036,	// (0x0005b4c4) heading_pane_cp07_ParamLimits

0xc036,	// (0x0005b4c4) heading_pane_cp07

0xdb70,	// (0x0005cffe) cell_tport_appsw_pane_g2

0x0002,

0xfd91,	// (0x0005f21f) cell_tport_appsw_pane_g

0x727a,	// (0x00056708) input_candi_list_open_g1

0x00a3,	// (0x0004f531) list_cale_time_pane_g6_ParamLimits

0x00a3,	// (0x0004f531) list_cale_time_pane_g6

0x8600,	// (0x00057a8e) aid_size_touch_calib_1_ParamLimits

0x8600,	// (0x00057a8e) aid_size_touch_calib_1

0x860c,	// (0x00057a9a) aid_size_touch_calib_2_ParamLimits

0x860c,	// (0x00057a9a) aid_size_touch_calib_2

0x861a,	// (0x00057aa8) aid_size_touch_calib_3_ParamLimits

0x861a,	// (0x00057aa8) aid_size_touch_calib_3

0x862a,	// (0x00057ab8) aid_size_touch_calib_4_ParamLimits

0x862a,	// (0x00057ab8) aid_size_touch_calib_4

0x8638,	// (0x00057ac6) main_touch_calib_button_group_pane_ParamLimits

0x8638,	// (0x00057ac6) main_touch_calib_button_group_pane

0x8646,	// (0x00057ad4) main_touch_calib_pane_g1_ParamLimits

0x8652,	// (0x00057ae0) main_touch_calib_pane_g2_ParamLimits

0x865e,	// (0x00057aec) main_touch_calib_pane_g3_ParamLimits

0x866a,	// (0x00057af8) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x0005ebef) main_touch_calib_pane_g_ParamLimits

0x8676,	// (0x00057b04) main_touch_calib_pane_t1_ParamLimits

0x868d,	// (0x00057b1b) main_touch_calib_pane_t2_ParamLimits

0x86a6,	// (0x00057b34) main_touch_calib_pane_t3_ParamLimits

0x86bc,	// (0x00057b4a) main_touch_calib_pane_t4_ParamLimits

0x86d2,	// (0x00057b60) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x0005ebf8) main_touch_calib_pane_t_ParamLimits

0x2ee7,	// (0x00052375) list_single_fp_cale_pane_g3_ParamLimits

0x2ee7,	// (0x00052375) list_single_fp_cale_pane_g3

0x7b55,	// (0x00056fe3) bg_button_pane_cp012_ParamLimits

0x7b55,	// (0x00056fe3) bg_vkb2_func_pane_cp03_ParamLimits

0xa666,	// (0x00059af4) cell_vitu2_function_top_pane_g1_ParamLimits

0x7b55,	// (0x00056fe3) bg_vkb2_func_pane_cp04_ParamLimits

0xb4f2,	// (0x0005a980) main_ncimui_button_group_pane_ParamLimits

0xb4f2,	// (0x0005a980) main_ncimui_button_group_pane

0xb558,	// (0x0005a9e6) main_ncimui_pane_t3_ParamLimits

0xb558,	// (0x0005a9e6) main_ncimui_pane_t3

0xdc5d,	// (0x0005d0eb) phacti_button_group_pane

0xde38,	// (0x0005d2c6) aid_size_list_single_double_ParamLimits

0xc488,	// (0x0005b916) popup_ezdial_listscroll_window_ParamLimits

0xc4a8,	// (0x0005b936) popup_number_entry_window_cp01_ParamLimits

0xc554,	// (0x0005b9e2) phacti_button_pane_ParamLimits

0xc554,	// (0x0005b9e2) phacti_button_pane

0xe287,	// (0x0005d715) bg_button_pane_cp14

0xdf2c,	// (0x0005d3ba) phacti_button_pane_t1

0xc565,	// (0x0005b9f3) main_touch_calib_button_pane_ParamLimits

0xc565,	// (0x0005b9f3) main_touch_calib_button_pane

0xead8,	// (0x0005df66) bg_button_pane_cp18_ParamLimits

0xead8,	// (0x0005df66) bg_button_pane_cp18

0xdf3a,	// (0x0005d3c8) main_touch_calib_button_pane_t1_ParamLimits

0xdf3a,	// (0x0005d3c8) main_touch_calib_button_pane_t1

0xdf50,	// (0x0005d3de) main_touch_calib_button_pane_t2_ParamLimits

0xdf50,	// (0x0005d3de) main_touch_calib_button_pane_t2

0x0001,

0xfe4a,	// (0x0005f2d8) main_touch_calib_button_pane_t_ParamLimits

0xfe4a,	// (0x0005f2d8) main_touch_calib_button_pane_t

0xe287,	// (0x0005d715) cell_ncimui_button_pane

0xe287,	// (0x0005d715) bg_button_pane_cp032

0xdf6e,	// (0x0005d3fc) cell_ncimui_button_pane_t1

0x9869,	// (0x00058cf7) image3_infobar_pane_ParamLimits

0x9869,	// (0x00058cf7) image3_infobar_pane

0xb8e5,	// (0x0005ad73) fs_bigclock_status_pane_ParamLimits

0xb8e5,	// (0x0005ad73) fs_bigclock_status_pane

0xb8f2,	// (0x0005ad80) main_fs_bigclock_clock_pane_ParamLimits

0xb8f2,	// (0x0005ad80) main_fs_bigclock_clock_pane

0xb908,	// (0x0005ad96) main_fs_bigclock_indi_pane_ParamLimits

0xb908,	// (0x0005ad96) main_fs_bigclock_indi_pane

0xb93a,	// (0x0005adc8) main_fs_bigclock_swipe_pane_ParamLimits

0xb93a,	// (0x0005adc8) main_fs_bigclock_swipe_pane

0xe287,	// (0x0005d715) main_fs_clock_dumped_data

0xd74f,	// (0x0005cbdd) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd74f,	// (0x0005cbdd) list_single_fs_bigclock_indicator_pane_g1

0xd779,	// (0x0005cc07) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd779,	// (0x0005cc07) list_single_fs_bigclock_indicator_pane_g2

0xd793,	// (0x0005cc21) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd793,	// (0x0005cc21) list_single_fs_bigclock_indicator_pane_g3

0xd7ad,	// (0x0005cc3b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd7ad,	// (0x0005cc3b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc78,	// (0x0005f106) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc78,	// (0x0005f106) list_single_fs_bigclock_indicator_pane_g

0xd7d8,	// (0x0005cc66) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd7d8,	// (0x0005cc66) list_single_fs_bigclock_indicator_pane_t1

0xd800,	// (0x0005cc8e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd800,	// (0x0005cc8e) list_single_fs_bigclock_indicator_pane_t2

0xd828,	// (0x0005ccb6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd828,	// (0x0005ccb6) list_single_fs_bigclock_indicator_pane_t3

0xd850,	// (0x0005ccde) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd850,	// (0x0005ccde) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc83,	// (0x0005f111) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc83,	// (0x0005f111) list_single_fs_bigclock_indicator_pane_t

0xdf7c,	// (0x0005d40a) image3_infobar_fav_pane_ParamLimits

0xdf7c,	// (0x0005d40a) image3_infobar_fav_pane

0xdf8c,	// (0x0005d41a) image3_infobar_loc_pane_ParamLimits

0xdf8c,	// (0x0005d41a) image3_infobar_loc_pane

0xdfa2,	// (0x0005d430) image3_infobar_time_pane_ParamLimits

0xdfa2,	// (0x0005d430) image3_infobar_time_pane

0x2bab,	// (0x00052039) image3_infobar_time_pane_g1

0xdfb2,	// (0x0005d440) image3_infobar_time_pane_t1

0x2bab,	// (0x00052039) image3_infobar_loc_pane_g1

0xdfc0,	// (0x0005d44e) image3_infobar_loc_pane_g2

0x0001,

0xfe4f,	// (0x0005f2dd) image3_infobar_loc_pane_g

0xdfc8,	// (0x0005d456) image3_infobar_loc_pane_t1

0x2bab,	// (0x00052039) image3_infobar_fav_pane_g1

0xdfd6,	// (0x0005d464) image3_infobar_fav_pane_g2

0x0001,

0xfe54,	// (0x0005f2e2) image3_infobar_fav_pane_g

0xdfde,	// (0x0005d46c) fs_bigclock_status_battery_pane

0xdfe7,	// (0x0005d475) fs_bigclock_status_signal_pane

0xdff0,	// (0x0005d47e) fs_bigclock_status_title_pane

0xdff9,	// (0x0005d487) fs_bigclock_status_signal_pane_g1

0xe002,	// (0x0005d490) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe59,	// (0x0005f2e7) fs_bigclock_status_signal_pane_g

0xe00a,	// (0x0005d498) fs_bigclock_status_battery_pane_g1

0xe013,	// (0x0005d4a1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5e,	// (0x0005f2ec) fs_bigclock_status_battery_pane_g

0xe01b,	// (0x0005d4a9) fs_bigclock_status_title_pane_t1

0x2bab,	// (0x00052039) main_fs_bigclock_clock_pane_g1

0xe029,	// (0x0005d4b7) main_fs_bigclock_clock_pane_g2

0xe029,	// (0x0005d4b7) main_fs_bigclock_clock_pane_g3

0xe029,	// (0x0005d4b7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe63,	// (0x0005f2f1) main_fs_bigclock_clock_pane_g

0xe031,	// (0x0005d4bf) main_fs_bigclock_clock_pane_t1

0xe03f,	// (0x0005d4cd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6c,	// (0x0005f2fa) main_fs_bigclock_clock_pane_t

0xc575,	// (0x0005ba03) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc575,	// (0x0005ba03) list_single_fs_bigclock_indicator_pane

0xc586,	// (0x0005ba14) list_single_fs_bigclock_pane_ParamLimits

0xc586,	// (0x0005ba14) list_single_fs_bigclock_pane

0xe057,	// (0x0005d4e5) main_fs_bigclock_indicator_pane_t1

0xe066,	// (0x0005d4f4) list_single_fs_bigclock_pane_g1

0xe06e,	// (0x0005d4fc) list_single_fs_bigclock_pane_t1

0x2bab,	// (0x00052039) main_fs_bigclock_swipe_pane_g1

0xe0b1,	// (0x0005d53f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7d,	// (0x0005f30b) main_fs_bigclock_swipe_pane_g

0xe0b9,	// (0x0005d547) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe0b9,	// (0x0005d547) main_fs_bigclock_swipe_pane_t1

0x69b9,	// (0x00055e47) call_type_pane_ParamLimits

0xe287,	// (0x0005d715) main_btmg_pane

0x0ecc,	// (0x0005035a) list_single_cale_mrui_row_pane_g2_ParamLimits

0x0ecc,	// (0x0005035a) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf0,	// (0x0005f27e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf0,	// (0x0005f27e) list_single_cale_mrui_row_pane_g

0xde73,	// (0x0005d301) list_recal_vselct_arw_lo_pane

0xde7b,	// (0x0005d309) list_recal_vselct_arw_up_pane

0xceba,	// (0x0005c348) list_recal_vselct_pane

0xc5dc,	// (0x0005ba6a) btmg_button_pane

0xc5e8,	// (0x0005ba76) main_btmg_pane_g1

0xe287,	// (0x0005d715) bg_button_pane_cp044

0xe0d6,	// (0x0005d564) btmg_button_pane_t1

0x276b,	// (0x00051bf9) aid_listscroll_gen

0xe409,	// (0x0005d897) main_cntbar_detail_pane

0xdb8e,	// (0x0005d01c) list_cmail_folder_pane

0xdb9e,	// (0x0005d02c) sp_fs_scroll_pane_cp03_ParamLimits

0x304a,	// (0x000524d8) list_single_fs_dyc_pane_cp01_ParamLimits

0x304a,	// (0x000524d8) list_single_fs_dyc_pane_cp01

0xe0e4,	// (0x0005d572) aid_size_cmail_indent

0x0f48,	// (0x000503d6) list_single_dyc_row_pane_cp01

0xc610,	// (0x0005ba9e) cntbar_detail_list_pane_ParamLimits

0xc610,	// (0x0005ba9e) cntbar_detail_list_pane

0xc650,	// (0x0005bade) main_cntbar_detail_cont_pane_ParamLimits

0xc650,	// (0x0005bade) main_cntbar_detail_cont_pane

0x6953,	// (0x00055de1) scroll_pane_cp032_ParamLimits

0x6953,	// (0x00055de1) scroll_pane_cp032

0xc65c,	// (0x0005baea) cntbar_detail_list_event_pane_ParamLimits

0xc65c,	// (0x0005baea) cntbar_detail_list_event_pane

0xc61e,	// (0x0005baac) cntbar_detail_list_shct_pane

0xeff0,	// (0x0005e47e) aid_list_gen

0xe0ed,	// (0x0005d57b) aid_scroll

0xe0f6,	// (0x0005d584) aid_size_touch_scroll_bar

0xc66c,	// (0x0005bafa) aid_list_double

0xc675,	// (0x0005bb03) aid_list_single

0xc67e,	// (0x0005bb0c) aid_list_single_lg

0x0f51,	// (0x000503df) aid_list_z_g_a_sm

0x0f59,	// (0x000503e7) aid_list_z_g_d

0xc687,	// (0x0005bb15) aid_txt_z_prm

0xc695,	// (0x0005bb23) aid_txt_z_prm_cp01

0xc6a3,	// (0x0005bb31) aid_txt_z_sec

0xc6b1,	// (0x0005bb3f) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc6b1,	// (0x0005bb3f) main_cntbar_detail_cont_pane_g1

0xc6be,	// (0x0005bb4c) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc6be,	// (0x0005bb4c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe82,	// (0x0005f310) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe82,	// (0x0005f310) main_cntbar_detail_cont_pane_g

0xe0ff,	// (0x0005d58d) main_cntbar_detail_cont_pane_t1

0xe10d,	// (0x0005d59b) main_cntbar_detail_cont_pane_t2

0xe11b,	// (0x0005d5a9) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe87,	// (0x0005f315) main_cntbar_detail_cont_pane_t

0xc6ca,	// (0x0005bb58) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc6ca,	// (0x0005bb58) cell_cntbar_detail_list_shct_pane

0xe129,	// (0x0005d5b7) cntbar_detail_list_shct_pane_g1

0xe132,	// (0x0005d5c0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8e,	// (0x0005f31c) cntbar_detail_list_shct_pane_g

0xc6de,	// (0x0005bb6c) cntbar_detail_list_event_pane_g1_ParamLimits

0xc6de,	// (0x0005bb6c) cntbar_detail_list_event_pane_g1

0xc6ea,	// (0x0005bb78) cntbar_detail_list_event_pane_g2_ParamLimits

0xc6ea,	// (0x0005bb78) cntbar_detail_list_event_pane_g2

0x0005,

0xfe93,	// (0x0005f321) cntbar_detail_list_event_pane_g_ParamLimits

0xfe93,	// (0x0005f321) cntbar_detail_list_event_pane_g

0xc758,	// (0x0005bbe6) cntbar_detail_list_event_pane_t1_ParamLimits

0xc758,	// (0x0005bbe6) cntbar_detail_list_event_pane_t1

0xc76d,	// (0x0005bbfb) cntbar_detail_list_event_pane_t2_ParamLimits

0xc76d,	// (0x0005bbfb) cntbar_detail_list_event_pane_t2

0x0002,

0xfea0,	// (0x0005f32e) cntbar_detail_list_event_pane_t_ParamLimits

0xfea0,	// (0x0005f32e) cntbar_detail_list_event_pane_t

0x2bab,	// (0x00052039) cell_cntbar_detail_list_shct_pane_g1

0x6d8c,	// (0x0005621a) navi_pane_mv_g3

0xe409,	// (0x0005d897) main_cntbar_detail_pane_ParamLimits

0xe287,	// (0x0005d715) main_notif_wgt_pane

0x9513,	// (0x000589a1) aid_tch_main_mp4_pane_g4

0x9752,	// (0x00058be0) popup_slider_window_cp02

0xde69,	// (0x0005d2f7) list_recal_day_event_pane

0xc5f0,	// (0x0005ba7e) cntbar_detail_btn_pane_ParamLimits

0xc5f0,	// (0x0005ba7e) cntbar_detail_btn_pane

0xc600,	// (0x0005ba8e) cntbar_detail_btn_pane_cp01_ParamLimits

0xc600,	// (0x0005ba8e) cntbar_detail_btn_pane_cp01

0xc61e,	// (0x0005baac) cntbar_detail_list_shct_pane_ParamLimits

0xc62a,	// (0x0005bab8) cntbar_detail_pane_g1_ParamLimits

0xc62a,	// (0x0005bab8) cntbar_detail_pane_g1

0xc63a,	// (0x0005bac8) cntbar_detail_pane_t1_ParamLimits

0xc63a,	// (0x0005bac8) cntbar_detail_pane_t1

0xc6f6,	// (0x0005bb84) cntbar_detail_list_event_pane_g3_ParamLimits

0xc6f6,	// (0x0005bb84) cntbar_detail_list_event_pane_g3

0xc70e,	// (0x0005bb9c) cntbar_detail_list_event_pane_g4_ParamLimits

0xc70e,	// (0x0005bb9c) cntbar_detail_list_event_pane_g4

0xc726,	// (0x0005bbb4) cntbar_detail_list_event_pane_g5_ParamLimits

0xc726,	// (0x0005bbb4) cntbar_detail_list_event_pane_g5

0xc73e,	// (0x0005bbcc) cntbar_detail_list_event_pane_g6_ParamLimits

0xc73e,	// (0x0005bbcc) cntbar_detail_list_event_pane_g6

0xc782,	// (0x0005bc10) cntbar_detail_list_event_pane_t3_ParamLimits

0xc782,	// (0x0005bc10) cntbar_detail_list_event_pane_t3

0xc794,	// (0x0005bc22) popup_notif_wgt_window_ParamLimits

0xc794,	// (0x0005bc22) popup_notif_wgt_window

0xc7a4,	// (0x0005bc32) popup_submenu_window_cp01_ParamLimits

0xc7a4,	// (0x0005bc32) popup_submenu_window_cp01

0x134c,	// (0x000507da) bg_popup_window_pane_cp10

0xe13b,	// (0x0005d5c9) listscroll_notif_wgt_pane

0xe14d,	// (0x0005d5db) list_notif_wgt_window

0xe156,	// (0x0005d5e4) scroll_pane_cp033

0xc7b4,	// (0x0005bc42) list_notif_wgt_row_pane_ParamLimits

0xc7b4,	// (0x0005bc42) list_notif_wgt_row_pane

0xe15f,	// (0x0005d5ed) aid_size_list_notif_wgt_del

0xe16c,	// (0x0005d5fa) list_notif_wgt_row_pane_g1

0xe178,	// (0x0005d606) list_notif_wgt_row_pane_g2

0xe184,	// (0x0005d612) list_notif_wgt_row_pane_g3

0x0002,

0xfea7,	// (0x0005f335) list_notif_wgt_row_pane_g

0xe191,	// (0x0005d61f) list_notif_wgt_row_pane_t1

0xe1a6,	// (0x0005d634) list_notif_wgt_row_pane_t2

0xe1b8,	// (0x0005d646) list_notif_wgt_row_pane_t3

0x0002,

0xfeae,	// (0x0005f33c) list_notif_wgt_row_pane_t

0x37fb,	// (0x00052c89) list_recal_day_event_pane_g1

0xe1ca,	// (0x0005d658) list_recal_day_event_pane_t1

0xe287,	// (0x0005d715) bg_button_pane_cp045

0xe1d9,	// (0x0005d667) cntbar_detail_btn_pane_t1

0x2773,	// (0x00051c01) main_callh_pane_ParamLimits

0x2773,	// (0x00051c01) main_callh_pane

0xe287,	// (0x0005d715) main_coverflow0_pane

0xe287,	// (0x0005d715) main_wgtman_pane

0xb952,	// (0x0005ade0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb952,	// (0x0005ade0) main_fs_bigclock_unlock_btn_pane

0xdb68,	// (0x0005cff6) bg_button_pane_cp16

0xdb78,	// (0x0005d006) cell_tport_appsw_pane_g3

0xc7c8,	// (0x0005bc56) cf0_flow_pane_ParamLimits

0xc7c8,	// (0x0005bc56) cf0_flow_pane

0xe1e7,	// (0x0005d675) listscroll_cf0_pane

0xe1f2,	// (0x0005d680) main_cf0_pane_g1

0xc7d7,	// (0x0005bc65) main_cf0_pane_t1_ParamLimits

0xc7d7,	// (0x0005bc65) main_cf0_pane_t1

0xc7eb,	// (0x0005bc79) main_cf0_pane_t2_ParamLimits

0xc7eb,	// (0x0005bc79) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0005f343) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0005f343) main_cf0_pane_t

0xe1fc,	// (0x0005d68a) scroll_pane_cp11

0xc7ff,	// (0x0005bc8d) cf0_flow_pane_g1

0xc807,	// (0x0005bc95) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0005f348) cf0_flow_pane_g

0xc80f,	// (0x0005bc9d) cf0_flow_pane_t1

0xe287,	// (0x0005d715) main_call6_pane

0xe287,	// (0x0005d715) main_calllock_pane

0xc81d,	// (0x0005bcab) call6_btn_grp_pane_ParamLimits

0xc81d,	// (0x0005bcab) call6_btn_grp_pane

0xc82a,	// (0x0005bcb8) call6_pane_g1_ParamLimits

0xc82a,	// (0x0005bcb8) call6_pane_g1

0xc83a,	// (0x0005bcc8) popup_call6_1st_window_ParamLimits

0xc83a,	// (0x0005bcc8) popup_call6_1st_window

0xc848,	// (0x0005bcd6) popup_call6_2nd_window_ParamLimits

0xc848,	// (0x0005bcd6) popup_call6_2nd_window

0xc856,	// (0x0005bce4) cell_call6_btn_pane_ParamLimits

0xc856,	// (0x0005bce4) cell_call6_btn_pane

0x134c,	// (0x000507da) bg_popup_call2_in_pane_cp03

0xe207,	// (0x0005d695) popup_call6_1st_window_g1

0xe20f,	// (0x0005d69d) popup_call6_1st_window_g2

0xe217,	// (0x0005d6a5) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0005f34d) popup_call6_1st_window_g

0xe21f,	// (0x0005d6ad) popup_call6_1st_window_t1

0xe22e,	// (0x0005d6bc) popup_call6_1st_window_t2

0xe23e,	// (0x0005d6cc) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0005f354) popup_call6_1st_window_t

0x134c,	// (0x000507da) bg_popup_call2_in_pane_cp04

0xe207,	// (0x0005d695) popup_call6_2nd_window_g1

0xe20f,	// (0x0005d69d) popup_call6_2nd_window_g2

0xe217,	// (0x0005d6a5) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0005f34d) popup_call6_2nd_window_g

0xe21f,	// (0x0005d6ad) popup_call6_2nd_window_t1

0xe287,	// (0x0005d715) bg_button_pane_cp15

0xe24e,	// (0x0005d6dc) cell_call6_btn_pane_g1

0xe257,	// (0x0005d6e5) cell_call6_btn_pane_t1

0xc865,	// (0x0005bcf3) listscroll_wgtman_pane_ParamLimits

0xc865,	// (0x0005bcf3) listscroll_wgtman_pane

0xc883,	// (0x0005bd11) wgtman_btn_pane_ParamLimits

0xc883,	// (0x0005bd11) wgtman_btn_pane

0x1212,	// (0x000506a0) aid_scroll_copy1

0xe266,	// (0x0005d6f4) list_wgtman_pane

0xc8b8,	// (0x0005bd46) wgtman_btn_pane_g1_ParamLimits

0xc8b8,	// (0x0005bd46) wgtman_btn_pane_g1

0xc8e0,	// (0x0005bd6e) wgtman_btn_pane_t1_ParamLimits

0xc8e0,	// (0x0005bd6e) wgtman_btn_pane_t1

0xe270,	// (0x0005d6fe) wgtman_btn_pane_t2_ParamLimits

0xe270,	// (0x0005d6fe) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0005f35b) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0005f35b) wgtman_btn_pane_t

0xc917,	// (0x0005bda5) listrow_wgtman_pane_ParamLimits

0xc917,	// (0x0005bda5) listrow_wgtman_pane

0xc928,	// (0x0005bdb6) listrow_wgtman_pane_g1

0xc935,	// (0x0005bdc3) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0005f360) listrow_wgtman_pane_g

0xc953,	// (0x0005bde1) listrow_wgtman_pane_t1

0xc96b,	// (0x0005bdf9) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0005f365) listrow_wgtman_pane_t

0xc991,	// (0x0005be1f) wait_bar_pane_cp09

0xe291,	// (0x0005d71f) main_calllock_btn_pane

0xe29b,	// (0x0005d729) main_calllock_pane_g1

0xe287,	// (0x0005d715) bg_button_pane_cp17

0xe2a7,	// (0x0005d735) main_calllock_btn_pane_g1

0xe2b0,	// (0x0005d73e) main_calllock_btn_pane_t1

0xe287,	// (0x0005d715) main_dialer3_pane

0xe287,	// (0x0005d715) main_fmrd2_pane

0x2bab,	// (0x00052039) main_fs_bigclock_unlock_btn_pane_g1

0xe2c7,	// (0x0005d755) main_fs_bigclock_unlock_btn_pane_t1

0xc9a3,	// (0x0005be31) area_fmrd2_info_pane_ParamLimits

0xc9a3,	// (0x0005be31) area_fmrd2_info_pane

0xc9af,	// (0x0005be3d) area_fmrd2_visual_pane_ParamLimits

0xc9af,	// (0x0005be3d) area_fmrd2_visual_pane

0xc9bd,	// (0x0005be4b) fmrd2_indi_pane_ParamLimits

0xc9bd,	// (0x0005be4b) fmrd2_indi_pane

0xc9ca,	// (0x0005be58) area_fmrd2_visual_pane_g1

0xc9d2,	// (0x0005be60) area_fmrd2_visual_pane_t1

0xc9e2,	// (0x0005be70) area_fmrd2_visual_pane_t2

0xc9f2,	// (0x0005be80) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0005f36f) area_fmrd2_visual_pane_t

0xca02,	// (0x0005be90) area_fmrd2_info_pane_g1

0xca0a,	// (0x0005be98) area_fmrd2_info_pane_t1

0xca1a,	// (0x0005bea8) area_fmrd2_info_pane_t2

0xca2a,	// (0x0005beb8) area_fmrd2_info_pane_t3

0xca3a,	// (0x0005bec8) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0005f376) area_fmrd2_info_pane_t

0xca4a,	// (0x0005bed8) fmrd2_indi_pane_t1

0xca5a,	// (0x0005bee8) fmrd2_indi_pane_t2

0xca6a,	// (0x0005bef8) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0005f37f) fmrd2_indi_pane_t

0xd7bc,	// (0x0005cc4a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd7bc,	// (0x0005cc4a) list_single_fs_bigclock_indicator_pane_g5

0xd865,	// (0x0005ccf3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd865,	// (0x0005ccf3) list_single_fs_bigclock_indicator_pane_t5

0xc230,	// (0x0005b6be) aid_cell_bcale_month_pane_ParamLimits

0xc230,	// (0x0005b6be) aid_cell_bcale_month_pane

0xc240,	// (0x0005b6ce) bcale_month_pane_ParamLimits

0xc240,	// (0x0005b6ce) bcale_month_pane

0xc250,	// (0x0005b6de) bcale_preview_pane_ParamLimits

0xc250,	// (0x0005b6de) bcale_preview_pane

0xe06e,	// (0x0005d4fc) list_single_fs_bigclock_pane_t1_ParamLimits

0xe08d,	// (0x0005d51b) list_single_fs_bigclock_pane_t2_ParamLimits

0xe08d,	// (0x0005d51b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe78,	// (0x0005f306) list_single_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x0005f306) list_single_fs_bigclock_pane_t

0xe2bf,	// (0x0005d74d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0005f36a) main_fs_bigclock_unlock_btn_pane_g

0xca7a,	// (0x0005bf08) aid_dia3_key_size_ParamLimits

0xca7a,	// (0x0005bf08) aid_dia3_key_size

0xca86,	// (0x0005bf14) aid_dia3_listrow_size_ParamLimits

0xca86,	// (0x0005bf14) aid_dia3_listrow_size

0xca96,	// (0x0005bf24) dia3_keypad_fun_pane_ParamLimits

0xca96,	// (0x0005bf24) dia3_keypad_fun_pane

0xcaa6,	// (0x0005bf34) dia3_keypad_num_pane_ParamLimits

0xcaa6,	// (0x0005bf34) dia3_keypad_num_pane

0xcab6,	// (0x0005bf44) dia3_listscroll_pane_ParamLimits

0xcab6,	// (0x0005bf44) dia3_listscroll_pane

0xcac4,	// (0x0005bf52) dia3_numentry_pane_ParamLimits

0xcac4,	// (0x0005bf52) dia3_numentry_pane

0xe2d5,	// (0x0005d763) dia3_list_pane

0xe2e0,	// (0x0005d76e) scroll_pane_cp12

0xe287,	// (0x0005d715) bg_dia3_numentry_pane

0xcad2,	// (0x0005bf60) dia3_numentry_pane_t1

0xcae1,	// (0x0005bf6f) cell_dia3_key_num_pane

0xcae9,	// (0x0005bf77) cell_dia3_key0_fun_pane_ParamLimits

0xcae9,	// (0x0005bf77) cell_dia3_key0_fun_pane

0xcaf6,	// (0x0005bf84) cell_dia3_key1_fun_pane_ParamLimits

0xcaf6,	// (0x0005bf84) cell_dia3_key1_fun_pane

0xcb03,	// (0x0005bf91) dia3_listrow_pane

0xd4ba,	// (0x0005c948) bg_dia3_numentry_pane_g1

0xe287,	// (0x0005d715) bg_button_pane_cp21

0xe2eb,	// (0x0005d779) cell_dia3_key_num_pane_t1

0xe2f9,	// (0x0005d787) cell_dia3_key_num_pane_t2

0xe308,	// (0x0005d796) cell_dia3_key_num_pane_t3

0xe317,	// (0x0005d7a5) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0005f386) cell_dia3_key_num_pane_t

0xe287,	// (0x0005d715) bg_button_pane_cp19

0xcb10,	// (0x0005bf9e) cell_dia3_key0_fun_pane_g1

0xe287,	// (0x0005d715) bg_button_pane_cp20

0xcb18,	// (0x0005bfa6) cell_dia3_key1_fun_pane_g1

0xcb20,	// (0x0005bfae) area_left_week_number_pane

0xcb2a,	// (0x0005bfb8) area_top_day_name_pane

0xcb36,	// (0x0005bfc4) frame_month_view_pane

0xcb40,	// (0x0005bfce) grid_month_view_pane

0xe326,	// (0x0005d7b4) cell_top_day_name_pane_ParamLimits

0xe326,	// (0x0005d7b4) cell_top_day_name_pane

0xcb4a,	// (0x0005bfd8) cell_area_left_week_number_pane_ParamLimits

0xcb4a,	// (0x0005bfd8) cell_area_left_week_number_pane

0xcb5e,	// (0x0005bfec) cell_month_view_pane_ParamLimits

0xcb5e,	// (0x0005bfec) cell_month_view_pane

0xe342,	// (0x0005d7d0) frm_month_g1

0xcb7d,	// (0x0005c00b) frm_month_g2

0xcb87,	// (0x0005c015) frm_month_g3

0xcb91,	// (0x0005c01f) frm_month_g4

0xcb9b,	// (0x0005c029) frm_month_g5

0xcba5,	// (0x0005c033) frm_month_g6

0xcbaf,	// (0x0005c03d) frm_month_g7

0xe34b,	// (0x0005d7d9) frm_month_g8

0x0f61,	// (0x000503ef) frm_month_g9

0x0f6a,	// (0x000503f8) frm_month_g10

0x0f73,	// (0x00050401) frm_month_g11

0x0f7c,	// (0x0005040a) frm_month_g12

0x0f85,	// (0x00050413) frm_month_g13

0x0f90,	// (0x0005041e) frm_month_g14

0x0f9b,	// (0x00050429) frm_month_g15

0x0fa6,	// (0x00050434) frm_month_g16

0x000f,

0xff01,	// (0x0005f38f) frm_month_g

0xcbb9,	// (0x0005c047) cell_top_day_name_pane_t1

0xcbc8,	// (0x0005c056) cell_area_left_week_number_pane_g1

0xcbd0,	// (0x0005c05e) cell_area_left_week_number_pane_t1

0x2bab,	// (0x00052039) cell_month_view_pane_g1

0xcbdf,	// (0x0005c06d) cell_month_view_pane_t1

0xe287,	// (0x0005d715) main_fps_pane

0xda55,	// (0x0005cee3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xda55,	// (0x0005cee3) cmail_ddmenu_btn02_pane_cp1

0xda71,	// (0x0005ceff) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xda71,	// (0x0005ceff) cmail_ddmenu_btn02_pane_cp2

0xc4d4,	// (0x0005b962) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc4d4,	// (0x0005b962) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2b,	// (0x0005f2b9) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2b,	// (0x0005f2b9) cmail_ddmenu_btn02_pane_g

0xc4f2,	// (0x0005b980) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc4f2,	// (0x0005b980) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe30,	// (0x0005f2be) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe30,	// (0x0005f2be) cmail_ddmenu_btn02_pane_t

0xcbee,	// (0x0005c07c) fps_text_pane_ParamLimits

0xcbee,	// (0x0005c07c) fps_text_pane

0xcbfb,	// (0x0005c089) main_fps_pane_g1_ParamLimits

0xcbfb,	// (0x0005c089) main_fps_pane_g1

0xcc07,	// (0x0005c095) wait_bar_pane_cp010_ParamLimits

0xcc07,	// (0x0005c095) wait_bar_pane_cp010

0xcc13,	// (0x0005c0a1) fps_text_pane_t1_ParamLimits

0xcc13,	// (0x0005c0a1) fps_text_pane_t1

0x9b86,	// (0x00059014) cam4_image_uncrop_pane_g1

0x9b8f,	// (0x0005901d) cam4_image_uncrop_pane_g2

0x9b98,	// (0x00059026) cam4_image_uncrop_pane_g3

0x9ba1,	// (0x0005902f) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x0005ed87) cam4_image_uncrop_pane_g

0xcb03,	// (0x0005bf91) dia3_listrow_pane_ParamLimits

0xe287,	// (0x0005d715) main_phob2_pane

0xc081,	// (0x0005b50f) cell_tport_appsw_pane_cp02_ParamLimits

0xc081,	// (0x0005b50f) cell_tport_appsw_pane_cp02

0xc090,	// (0x0005b51e) cell_tport_appsw_pane_cp03_ParamLimits

0xc090,	// (0x0005b51e) cell_tport_appsw_pane_cp03

0xe287,	// (0x0005d715) phob2_contact_card_pane

0xe287,	// (0x0005d715) phob2_listscroll_pane

0x0fb1,	// (0x0005043f) phob2_list_pane

0x0fb9,	// (0x00050447) scroll_pane_cp034

0xcc2c,	// (0x0005c0ba) phob2_cc_data_pane_ParamLimits

0xcc2c,	// (0x0005c0ba) phob2_cc_data_pane

0xcc48,	// (0x0005c0d6) phob2_cc_listscroll_pane_ParamLimits

0xcc48,	// (0x0005c0d6) phob2_cc_listscroll_pane

0xcc64,	// (0x0005c0f2) list_double_large_graphic_phob2_pane_ParamLimits

0xcc64,	// (0x0005c0f2) list_double_large_graphic_phob2_pane

0xcc7c,	// (0x0005c10a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xcc7c,	// (0x0005c10a) list_double_large_graphic_phob2_pane_g1

0xcc89,	// (0x0005c117) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xcc89,	// (0x0005c117) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0005f3b0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0005f3b0) list_double_large_graphic_phob2_pane_g

0xcc95,	// (0x0005c123) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xcc95,	// (0x0005c123) list_double_large_graphic_phob2_pane_t1

0xccaa,	// (0x0005c138) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xccaa,	// (0x0005c138) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0005f3b5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0005f3b5) list_double_large_graphic_phob2_pane_t

0xe287,	// (0x0005d715) list_highlight_pane_cp024

0x0fc1,	// (0x0005044f) phob2_cc_button_pane

0xccbc,	// (0x0005c14a) phob2_cc_data_pane_g1_ParamLimits

0xccbc,	// (0x0005c14a) phob2_cc_data_pane_g1

0xccc8,	// (0x0005c156) phob2_cc_data_pane_g2_ParamLimits

0xccc8,	// (0x0005c156) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0005f3ba) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0005f3ba) phob2_cc_data_pane_g

0xccd4,	// (0x0005c162) phob2_cc_data_pane_t1_ParamLimits

0xccd4,	// (0x0005c162) phob2_cc_data_pane_t1

0xcce6,	// (0x0005c174) phob2_cc_data_pane_t2_ParamLimits

0xcce6,	// (0x0005c174) phob2_cc_data_pane_t2

0xccf8,	// (0x0005c186) phob2_cc_data_pane_t3_ParamLimits

0xccf8,	// (0x0005c186) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0005f3bf) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0005f3bf) phob2_cc_data_pane_t

0x0fc9,	// (0x00050457) phob2_cc_list_pane_ParamLimits

0x0fc9,	// (0x00050457) phob2_cc_list_pane

0x38a6,	// (0x00052d34) scroll_pane_cp035_ParamLimits

0x38a6,	// (0x00052d34) scroll_pane_cp035

0xe409,	// (0x0005d897) bg_button_pane_cp033

0x0fd5,	// (0x00050463) phob2_cc_button_pane_g1

0x0fe1,	// (0x0005046f) phob2_cc_button_pane_t1

0x0ff6,	// (0x00050484) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0005f3c6) phob2_cc_button_pane_t

0xcd0a,	// (0x0005c198) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xcd0a,	// (0x0005c198) list_double_large_graphic_phob2_cc_pane

0xcd26,	// (0x0005c1b4) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xcd26,	// (0x0005c1b4) list_double_large_graphic_phob2_cc_pane_g1

0xcd37,	// (0x0005c1c5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xcd37,	// (0x0005c1c5) list_double_large_graphic_phob2_cc_pane_g2

0xcd46,	// (0x0005c1d4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xcd46,	// (0x0005c1d4) list_double_large_graphic_phob2_cc_pane_g3

0xcd55,	// (0x0005c1e3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xcd55,	// (0x0005c1e3) list_double_large_graphic_phob2_cc_pane_g4

0xcd66,	// (0x0005c1f4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xcd66,	// (0x0005c1f4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0005f3cb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0005f3cb) list_double_large_graphic_phob2_cc_pane_g

0xcd75,	// (0x0005c203) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xcd75,	// (0x0005c203) list_double_large_graphic_phob2_cc_pane_t1

0xcd9e,	// (0x0005c22c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xcd9e,	// (0x0005c22c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0005f3d6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0005f3d6) list_double_large_graphic_phob2_cc_pane_t

0x1008,	// (0x00050496) list_highlight_pane_cp025_ParamLimits

0x1008,	// (0x00050496) list_highlight_pane_cp025

0xe409,	// (0x0005d897) bg_button_pane_cp033_ParamLimits

0x0fd5,	// (0x00050463) phob2_cc_button_pane_g1_ParamLimits

0x0fe1,	// (0x0005046f) phob2_cc_button_pane_t1_ParamLimits

0x0ff6,	// (0x00050484) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0005f3c6) phob2_cc_button_pane_t_ParamLimits

0x4c67,	// (0x000540f5) popup_wgtman_window

0x36d5,	// (0x00052b63) scroll_pane_cp038

0xc8a0,	// (0x0005bd2e) wgtman_btn_pane_cp_01_ParamLimits

0xc8a0,	// (0x0005bd2e) wgtman_btn_pane_cp_01

0x1016,	// (0x000504a4) wgtman_content_pane

0x101f,	// (0x000504ad) wgtman_heading_pane

0xe287,	// (0x0005d715) bg_heading_pane_cp02

0x1028,	// (0x000504b6) wgtman_heading_pane_g1

0x1030,	// (0x000504be) wgtman_heading_pane_t1

0x103e,	// (0x000504cc) scroll_pane_cp036

0x1046,	// (0x000504d4) wgtman_list_pane

0xdc2d,	// (0x0005d0bb) wgtman_list_pane_t1_ParamLimits

0xdc2d,	// (0x0005d0bb) wgtman_list_pane_t1

0x9ae3,	// (0x00058f71) cam4_grid_pane

0xa81b,	// (0x00059ca9) bg_button_pane_cp015_ParamLimits

0xa82d,	// (0x00059cbb) bg_button_pane_cp016_ParamLimits

0xa840,	// (0x00059cce) bg_button_pane_cp017_ParamLimits

0xa896,	// (0x00059d24) popup_vitu2_query_window_g3_ParamLimits

0xa896,	// (0x00059d24) popup_vitu2_query_window_g3

0xa955,	// (0x00059de3) popup_vitu2_query_window_t6_ParamLimits

0xa955,	// (0x00059de3) popup_vitu2_query_window_t6

0xa980,	// (0x00059e0e) popup_vitu2_query_window_t7_ParamLimits

0xa980,	// (0x00059e0e) popup_vitu2_query_window_t7

0x3552,	// (0x000529e0) cam4_grid_pane_g1

0x355b,	// (0x000529e9) cam4_grid_pane_g2

0x104e,	// (0x000504dc) cam4_grid_pane_g3

0x1057,	// (0x000504e5) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0005f3db) cam4_grid_pane_g

0x59fd,	// (0x00054e8b) aid_placing_vt_slider_lsc_ParamLimits

0x5d30,	// (0x000551be) vidtel_button_pane_ParamLimits

0x5d30,	// (0x000551be) vidtel_button_pane

0x1062,	// (0x000504f0) bg_button_pane_cp034

0xcdc7,	// (0x0005c255) vidtel_button_pane_g1

0x106c,	// (0x000504fa) vidtel_button_pane_t1

0x37d9,	// (0x00052c67) aid_size_vtel_slider_touch

0x38a6,	// (0x00052d34) scroll_pane_cp039

0xd4f8,	// (0x0005c986) ncim_query_button_pane_cp01_ParamLimits

0xd517,	// (0x0005c9a5) ncimui_query_pane_g1_ParamLimits

0xe409,	// (0x0005d897) input_focus_pane_cp012_ParamLimits

0xd53c,	// (0x0005c9ca) ncim_query_entry_pane_t1_ParamLimits

0x38a6,	// (0x00052d34) scroll_pane_cp039_ParamLimits

0x6cfe,	// (0x0005618c) navi_pane_bcale_mc_g1

0x6d06,	// (0x00056194) navi_pane_bcale_mc_t1

0xdabc,	// (0x0005cf4a) main_sp_fs_email_pane_g1

0xdac4,	// (0x0005cf52) main_sp_fs_email_pane_g2

0x0001,

0xfce9,	// (0x0005f177) main_sp_fs_email_pane_g

0xdd90,	// (0x0005d21e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdd90,	// (0x0005d21e) list_single_cale_mrui_row_pane_g3

0xc51a,	// (0x0005b9a8) list_single_recal_day_pane_g5_event_pane

0xdedc,	// (0x0005d36a) list_single_recal_day_pane_g7

0x107a,	// (0x00050508) list_recal_day_event_pane_cp01

0x1083,	// (0x00050511) list_recal_vselct_arw_lo_pane_cp01

0x108b,	// (0x00050519) list_recal_vselct_arw_up_pane_cp01

0x1093,	// (0x00050521) list_recal_vselct_pane_cp01

0x37fb,	// (0x00052c89) list_recal_day_event_pane_cp01_g1

0x109d,	// (0x0005052b) list_recal_day_event_pane_cp01_t1

0xdee4,	// (0x0005d372) list_single_recal_day_pane_t1_ParamLimits

0xdef6,	// (0x0005d384) list_single_recal_day_pane_t2_ParamLimits

0xfe40,	// (0x0005f2ce) list_single_recal_day_pane_t_ParamLimits

0xeaa8,	// (0x0005df36) bg_notes_pane_ParamLimits

0xeab6,	// (0x0005df44) list_notes_pane_ParamLimits

0x4f81,	// (0x0005440f) scroll_pane_cp06_ParamLimits

0xead8,	// (0x0005df66) main_notes_pane_ParamLimits

0xe287,	// (0x0005d715) main_welc_pane

0xcdcf,	// (0x0005c25d) main_welc_body_pane_ParamLimits

0xcdcf,	// (0x0005c25d) main_welc_body_pane

0xcdea,	// (0x0005c278) main_welc_opti_pane_ParamLimits

0xcdea,	// (0x0005c278) main_welc_opti_pane

0xce1d,	// (0x0005c2ab) main_welc_pane_t1_ParamLimits

0xce1d,	// (0x0005c2ab) main_welc_pane_t1

0xc261,	// (0x0005b6ef) main_welc_body_row_pane_ParamLimits

0xc261,	// (0x0005b6ef) main_welc_body_row_pane

0xce3b,	// (0x0005c2c9) main_welc_opti_row_pane_ParamLimits

0xce3b,	// (0x0005c2c9) main_welc_opti_row_pane

0x10c2,	// (0x00050550) main_welc_opti_row_pane_g1

0x10ca,	// (0x00050558) main_welc_opti_row_pane_t1

0x10d9,	// (0x00050567) main_welc_body_row_pane_t1

0xe145,	// (0x0005d5d3) popup_notif_wgt_heading_pane

0xe15f,	// (0x0005d5ed) aid_size_list_notif_wgt_del_ParamLimits

0xe16c,	// (0x0005d5fa) list_notif_wgt_row_pane_g1_ParamLimits

0xe178,	// (0x0005d606) list_notif_wgt_row_pane_g2_ParamLimits

0xe184,	// (0x0005d612) list_notif_wgt_row_pane_g3_ParamLimits

0xfea7,	// (0x0005f335) list_notif_wgt_row_pane_g_ParamLimits

0xe191,	// (0x0005d61f) list_notif_wgt_row_pane_t1_ParamLimits

0xe1a6,	// (0x0005d634) list_notif_wgt_row_pane_t2_ParamLimits

0xe1b8,	// (0x0005d646) list_notif_wgt_row_pane_t3_ParamLimits

0xfeae,	// (0x0005f33c) list_notif_wgt_row_pane_t_ParamLimits

0xc928,	// (0x0005bdb6) listrow_wgtman_pane_g1_ParamLimits

0xc935,	// (0x0005bdc3) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0005f360) listrow_wgtman_pane_g_ParamLimits

0xc953,	// (0x0005bde1) listrow_wgtman_pane_t1_ParamLimits

0xc96b,	// (0x0005bdf9) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0005f365) listrow_wgtman_pane_t_ParamLimits

0xc991,	// (0x0005be1f) wait_bar_pane_cp09_ParamLimits

0xe287,	// (0x0005d715) bg_popup_heading_pane_cp02

0x10e8,	// (0x00050576) popup_notif_wgt_heading_pane_g1

0x10f0,	// (0x0005057e) popup_notif_wgt_heading_pane_t1

0xe287,	// (0x0005d715) main_vids_pane

0xe287,	// (0x0005d715) vids_listscroll_pane

0xce4c,	// (0x0005c2da) scroll_pane_cp040

0xe287,	// (0x0005d715) vids_list_pane

0xce57,	// (0x0005c2e5) vids_list_double_pane_ParamLimits

0xce57,	// (0x0005c2e5) vids_list_double_pane

0xce6a,	// (0x0005c2f8) vids_list_double_pane_g1

0xce73,	// (0x0005c301) vids_list_double_pane_t1

0xce83,	// (0x0005c311) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0005f3e9) vids_list_double_pane_t

0x7b55,	// (0x00056fe3) main_ncimui_pane_ParamLimits

0xb50a,	// (0x0005a998) main_ncimui_pane_g1_ParamLimits

0xb518,	// (0x0005a9a6) main_ncimui_pane_g2_ParamLimits

0xb518,	// (0x0005a9a6) main_ncimui_pane_g2

0x0001,

0xfbee,	// (0x0005f07c) main_ncimui_pane_g_ParamLimits

0xfbee,	// (0x0005f07c) main_ncimui_pane_g

0xce05,	// (0x0005c293) main_welc_pane_g1_ParamLimits

0xce05,	// (0x0005c293) main_welc_pane_g1

0xce11,	// (0x0005c29f) main_welc_pane_g2_ParamLimits

0xce11,	// (0x0005c29f) main_welc_pane_g2

0x0001,

0xff56,	// (0x0005f3e4) main_welc_pane_g_ParamLimits

0xff56,	// (0x0005f3e4) main_welc_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
