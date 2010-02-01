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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00073050 };

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
0x1776,	// (0x000747c6) Screen

0x1782,	// (0x000747d2) application_window

0x17be,	// (0x0007480e) area_bottom_pane_ParamLimits

0x17be,	// (0x0007480e) area_bottom_pane

0x17f7,	// (0x00074847) area_top_pane_ParamLimits

0x17f7,	// (0x00074847) area_top_pane

0xe817,	// (0x00081867) call_video_uplink_pane_ParamLimits

0xe817,	// (0x00081867) call_video_uplink_pane

0x186c,	// (0x000748bc) main_pane_ParamLimits

0x186c,	// (0x000748bc) main_pane

0xbb7a,	// (0x0007ebca) context_pane

0x5851,	// (0x000788a1) navi_pane

0x5879,	// (0x000788c9) popup_cale_events_window_ParamLimits

0x5879,	// (0x000788c9) popup_cale_events_window

0xbb8d,	// (0x0007ebdd) popup_mup_playback_window

0x5891,	// (0x000788e1) signal_pane

0xeff1,	// (0x00082041) main_browser_pane

0x4144,	// (0x00077194) main_burst_pane

0x55a3,	// (0x000785f3) main_calc_pane

0x4144,	// (0x00077194) main_cale_day_pane

0xeff1,	// (0x00082041) main_cale_month_pane

0x4144,	// (0x00077194) main_cale_week_pane

0x4144,	// (0x00077194) main_call_pane

0xecbf,	// (0x00081d0f) main_call_poc_pane

0x4144,	// (0x00077194) main_camera_pane

0x4144,	// (0x00077194) main_chi_dic_pane

0x3cc3,	// (0x00076d13) main_clock_pane

0xecbf,	// (0x00081d0f) main_fmradio_pane

0x4144,	// (0x00077194) main_graph_messa_pane

0xecbf,	// (0x00081d0f) main_help_pane

0xeff1,	// (0x00082041) main_im_pane

0xef1a,	// (0x00081f6a) main_image_pane_ParamLimits

0xef1a,	// (0x00081f6a) main_image_pane

0xecbf,	// (0x00081d0f) main_location2_pane

0x4144,	// (0x00077194) main_location_pane

0xecbf,	// (0x00081d0f) main_messa_pane

0xecbf,	// (0x00081d0f) main_mp2_pane

0x4144,	// (0x00077194) main_mp_pane

0xecbf,	// (0x00081d0f) main_msg_pane

0xecbf,	// (0x00081d0f) main_mup_eq_pane

0xecbf,	// (0x00081d0f) main_mup_pane

0x4144,	// (0x00077194) main_notes_pane

0xecbf,	// (0x00081d0f) main_pec_pane

0xecbf,	// (0x00081d0f) main_phob_pane

0xecbf,	// (0x00081d0f) main_pinb_pane

0xecbf,	// (0x00081d0f) main_postcard_pane

0xecbf,	// (0x00081d0f) main_qdial_pane

0x4144,	// (0x00077194) main_skin_pane

0xecbf,	// (0x00081d0f) main_smil2_pane

0x4144,	// (0x00077194) main_smil_pane

0x4144,	// (0x00077194) main_video_pane

0x4144,	// (0x00077194) main_video_tele_pane

0xef1a,	// (0x00081f6a) main_viewer_pane_ParamLimits

0xef1a,	// (0x00081f6a) main_viewer_pane

0x4144,	// (0x00077194) main_vorec_pane

0x55f7,	// (0x00078647) popup_blid_sat_info_window_ParamLimits

0x55f7,	// (0x00078647) popup_blid_sat_info_window

0x564f,	// (0x0007869f) popup_dyc_status_message_window_ParamLimits

0x564f,	// (0x0007869f) popup_dyc_status_message_window

0x5669,	// (0x000786b9) popup_grid_large_graphic_window_ParamLimits

0x5669,	// (0x000786b9) popup_grid_large_graphic_window

0x5725,	// (0x00078775) popup_loc_request_window_ParamLimits

0x5725,	// (0x00078775) popup_loc_request_window

0x5829,	// (0x00078879) popup_wml_address_window_ParamLimits

0x5829,	// (0x00078879) popup_wml_address_window

0x53dd,	// (0x0007842d) call_muted_g1

0x4e1a,	// (0x00077e6a) popup_call_audio_conf_window_ParamLimits

0x4e1a,	// (0x00077e6a) popup_call_audio_conf_window

0x53f1,	// (0x00078441) popup_call_audio_first_window_ParamLimits

0x53f1,	// (0x00078441) popup_call_audio_first_window

0x5467,	// (0x000784b7) popup_call_audio_in_window_ParamLimits

0x5467,	// (0x000784b7) popup_call_audio_in_window

0x54a3,	// (0x000784f3) popup_call_audio_out_window_ParamLimits

0x54a3,	// (0x000784f3) popup_call_audio_out_window

0x54dd,	// (0x0007852d) popup_call_audio_second_window_ParamLimits

0x54dd,	// (0x0007852d) popup_call_audio_second_window

0x5533,	// (0x00078583) popup_call_audio_wait_window_ParamLimits

0x5533,	// (0x00078583) popup_call_audio_wait_window

0x5568,	// (0x000785b8) popup_number_entry_window_ParamLimits

0x5568,	// (0x000785b8) popup_number_entry_window

0xe843,	// (0x00081893) bg_popup_call_pane_cp05_ParamLimits

0xe843,	// (0x00081893) bg_popup_call_pane_cp05

0xe863,	// (0x000818b3) popup_number_entry_window_t1

0xe876,	// (0x000818c6) popup_number_entry_window_t2

0xe888,	// (0x000818d8) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0008213c) popup_number_entry_window_t

0xe89a,	// (0x000818ea) text_title_cp2

0xe8ad,	// (0x000818fd) bg_popup_call_pane_cp_ParamLimits

0xe8ad,	// (0x000818fd) bg_popup_call_pane_cp

0xe8bb,	// (0x0008190b) call_thumbnail_pane

0xe8c3,	// (0x00081913) popup_call_audio_in_window_g1_ParamLimits

0xe8c3,	// (0x00081913) popup_call_audio_in_window_g1

0xe8cf,	// (0x0008191f) popup_call_audio_in_window_g2_ParamLimits

0xe8cf,	// (0x0008191f) popup_call_audio_in_window_g2

0xe8db,	// (0x0008192b) popup_call_audio_in_window_g3_ParamLimits

0xe8db,	// (0x0008192b) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00082145) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00082145) popup_call_audio_in_window_g

0xe8e7,	// (0x00081937) popup_call_audio_in_window_t1_ParamLimits

0xe8e7,	// (0x00081937) popup_call_audio_in_window_t1

0xe903,	// (0x00081953) popup_call_audio_in_window_t2_ParamLimits

0xe903,	// (0x00081953) popup_call_audio_in_window_t2

0xe988,	// (0x000819d8) popup_call_audio_in_window_t3_ParamLimits

0xe988,	// (0x000819d8) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0008214c) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0008214c) popup_call_audio_in_window_t

0xe8ad,	// (0x000818fd) bg_popup_call_pane_cp01_ParamLimits

0xe8ad,	// (0x000818fd) bg_popup_call_pane_cp01

0xe8bb,	// (0x0008190b) call_thumbnail_pane_cp02

0xe99b,	// (0x000819eb) call_type_pane_cp022

0xe9a3,	// (0x000819f3) popup_call_audio_out_window_g1_ParamLimits

0xe9a3,	// (0x000819f3) popup_call_audio_out_window_g1

0xe9b5,	// (0x00081a05) popup_call_audio_out_window_g2_ParamLimits

0xe9b5,	// (0x00081a05) popup_call_audio_out_window_g2

0xe9c1,	// (0x00081a11) popup_call_audio_out_window_g3_ParamLimits

0xe9c1,	// (0x00081a11) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00082153) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00082153) popup_call_audio_out_window_g

0xe9d3,	// (0x00081a23) popup_call_audio_out_window_t1_ParamLimits

0xe9d3,	// (0x00081a23) popup_call_audio_out_window_t1

0xe9eb,	// (0x00081a3b) popup_call_audio_out_window_t2_ParamLimits

0xe9eb,	// (0x00081a3b) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0008215a) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0008215a) popup_call_audio_out_window_t

0xea00,	// (0x00081a50) bg_popup_call_pane_ParamLimits

0xea00,	// (0x00081a50) bg_popup_call_pane

0x1a16,	// (0x00074a66) call_thumbnail_pane_cp_ParamLimits

0x1a16,	// (0x00074a66) call_thumbnail_pane_cp

0xea84,	// (0x00081ad4) call_type_pane_cp01_ParamLimits

0xea84,	// (0x00081ad4) call_type_pane_cp01

0xeac8,	// (0x00081b18) popup_call_audio_first_window_g1_ParamLimits

0xeac8,	// (0x00081b18) popup_call_audio_first_window_g1

0xeb14,	// (0x00081b64) popup_call_audio_first_window_g2_ParamLimits

0xeb14,	// (0x00081b64) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0008215f) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0008215f) popup_call_audio_first_window_g

0xeb58,	// (0x00081ba8) popup_call_audio_first_window_t1_ParamLimits

0xeb58,	// (0x00081ba8) popup_call_audio_first_window_t1

0xec04,	// (0x00081c54) popup_call_audio_first_window_t4_ParamLimits

0xec04,	// (0x00081c54) popup_call_audio_first_window_t4

0xec90,	// (0x00081ce0) popup_call_audio_first_window_t5_ParamLimits

0xec90,	// (0x00081ce0) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00082164) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00082164) popup_call_audio_first_window_t

0xecbf,	// (0x00081d0f) bg_popup_call_pane_cp02

0xecc9,	// (0x00081d19) call_type_pane_cp023

0xecd1,	// (0x00081d21) popup_call_audio_wait_window_g1

0xecd9,	// (0x00081d29) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008216b) popup_call_audio_wait_window_g

0xece1,	// (0x00081d31) popup_call_audio_wait_window_t3

0xecef,	// (0x00081d3f) bg_popup_call_pane_cp03_ParamLimits

0xecef,	// (0x00081d3f) bg_popup_call_pane_cp03

0xed4f,	// (0x00081d9f) call_thumbnail_pane_cp011_ParamLimits

0xed4f,	// (0x00081d9f) call_thumbnail_pane_cp011

0xed5b,	// (0x00081dab) call_type_pane_cp034_ParamLimits

0xed5b,	// (0x00081dab) call_type_pane_cp034

0xed97,	// (0x00081de7) popup_call_audio_second_window_g1_ParamLimits

0xed97,	// (0x00081de7) popup_call_audio_second_window_g1

0xedd3,	// (0x00081e23) popup_call_audio_second_window_g2_ParamLimits

0xedd3,	// (0x00081e23) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00082170) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00082170) popup_call_audio_second_window_g

0xee0f,	// (0x00081e5f) popup_call_audio_second_window_t1_ParamLimits

0xee0f,	// (0x00081e5f) popup_call_audio_second_window_t1

0xee90,	// (0x00081ee0) popup_call_audio_second_window_t2_ParamLimits

0xee90,	// (0x00081ee0) popup_call_audio_second_window_t2

0xeec6,	// (0x00081f16) popup_call_audio_second_window_t3_ParamLimits

0xeec6,	// (0x00081f16) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00082175) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00082175) popup_call_audio_second_window_t

0xecbf,	// (0x00081d0f) bg_popup_call_pane_cp04

0xeefc,	// (0x00081f4c) list_conf_pane

0xef04,	// (0x00081f54) popup_call_audio_conf_window_t1

0xef12,	// (0x00081f62) call_thumbnail_pane_g1

0xef1a,	// (0x00081f6a) bg_pinb_pane_ParamLimits

0xef1a,	// (0x00081f6a) bg_pinb_pane

0xef28,	// (0x00081f78) find_pinb_pane

0xef31,	// (0x00081f81) listscroll_pinb_pane_ParamLimits

0xef31,	// (0x00081f81) listscroll_pinb_pane

0xef40,	// (0x00081f90) pinb_bg_pane_g1

0x1a3a,	// (0x00074a8a) pinb_bg_pane_g2

0x1a46,	// (0x00074a96) pinb_bg_pane_g3

0x1a52,	// (0x00074aa2) pinb_bg_pane_g4

0x1a5e,	// (0x00074aae) pinb_bg_pane_g5

0x1a6a,	// (0x00074aba) pinb_bg_pane_g6

0x1a75,	// (0x00074ac5) pinb_bg_pane_g7

0x1a80,	// (0x00074ad0) pinb_bg_pane_g8

0x1a8b,	// (0x00074adb) pinb_bg_pane_g9

0x1a95,	// (0x00074ae5) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0008217c) pinb_bg_pane_g

0x1ab2,	// (0x00074b02) grid_pinb_pane

0x1abb,	// (0x00074b0b) list_pinb_pane

0x1ac4,	// (0x00074b14) scroll_pane_cp01_ParamLimits

0x1ac4,	// (0x00074b14) scroll_pane_cp01

0xef4a,	// (0x00081f9a) find_pinb_pane_g1_ParamLimits

0xef4a,	// (0x00081f9a) find_pinb_pane_g1

0xef62,	// (0x00081fb2) find_pinb_pane_t1

0xef74,	// (0x00081fc4) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00082196) find_pinb_pane_t

0xef89,	// (0x00081fd9) input_focus_pane_cp01_ParamLimits

0xef89,	// (0x00081fd9) input_focus_pane_cp01

0x1ad6,	// (0x00074b26) cell_pinb_pane_ParamLimits

0x1ad6,	// (0x00074b26) cell_pinb_pane

0x1aff,	// (0x00074b4f) cell_pinb_pane_g1_ParamLimits

0x1aff,	// (0x00074b4f) cell_pinb_pane_g1

0x1b0f,	// (0x00074b5f) cell_pinb_pane_g2_ParamLimits

0x1b0f,	// (0x00074b5f) cell_pinb_pane_g2

0xef95,	// (0x00081fe5) cell_pinb_pane_g3_ParamLimits

0xef95,	// (0x00081fe5) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0008219b) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0008219b) cell_pinb_pane_g

0xecbf,	// (0x00081d0f) grid_highlight_pane_cp01

0x1b1b,	// (0x00074b6b) list_pinb_item_pane_ParamLimits

0x1b1b,	// (0x00074b6b) list_pinb_item_pane

0xecbf,	// (0x00081d0f) list_highlight_pane_cp02

0x1b2d,	// (0x00074b7d) list_pinb_item_pane_g1_ParamLimits

0x1b2d,	// (0x00074b7d) list_pinb_item_pane_g1

0xefa1,	// (0x00081ff1) list_pinb_item_pane_g2_ParamLimits

0xefa1,	// (0x00081ff1) list_pinb_item_pane_g2

0x1b3a,	// (0x00074b8a) list_pinb_item_pane_g3_ParamLimits

0x1b3a,	// (0x00074b8a) list_pinb_item_pane_g3

0x1b4b,	// (0x00074b9b) list_pinb_item_pane_g4_ParamLimits

0x1b4b,	// (0x00074b9b) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x000821a2) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x000821a2) list_pinb_item_pane_g

0x1b57,	// (0x00074ba7) list_pinb_item_pane_t1_ParamLimits

0x1b57,	// (0x00074ba7) list_pinb_item_pane_t1

0x1b8c,	// (0x00074bdc) calc_display_pane

0x1bb4,	// (0x00074c04) calc_paper_pane

0x1bd7,	// (0x00074c27) grid_calc_pane

0xecbf,	// (0x00081d0f) bg_list_pane_cp01

0x1c01,	// (0x00074c51) clock_g1

0x1c09,	// (0x00074c59) clock_g2

0x0001,

0xf15b,	// (0x000821ab) clock_g

0x1c11,	// (0x00074c61) clock_t1_ParamLimits

0x1c11,	// (0x00074c61) clock_t1

0x1c26,	// (0x00074c76) clock_t2_ParamLimits

0x1c26,	// (0x00074c76) clock_t2

0x1c38,	// (0x00074c88) clock_t3_ParamLimits

0x1c38,	// (0x00074c88) clock_t3

0x1c4a,	// (0x00074c9a) clock_t4_ParamLimits

0x1c4a,	// (0x00074c9a) clock_t4

0x1c5c,	// (0x00074cac) clock_t5_ParamLimits

0x1c5c,	// (0x00074cac) clock_t5

0x1c71,	// (0x00074cc1) clock_t6_ParamLimits

0x1c71,	// (0x00074cc1) clock_t6

0x1c83,	// (0x00074cd3) clock_t7_ParamLimits

0x1c83,	// (0x00074cd3) clock_t7

0x1c95,	// (0x00074ce5) clock_t8_ParamLimits

0x1c95,	// (0x00074ce5) clock_t8

0x1ca9,	// (0x00074cf9) clock_t9_ParamLimits

0x1ca9,	// (0x00074cf9) clock_t9

0x0008,

0xf160,	// (0x000821b0) clock_t_ParamLimits

0xf160,	// (0x000821b0) clock_t

0xefad,	// (0x00081ffd) popup_clock_analogue_window_cp02

0xefad,	// (0x00081ffd) popup_clock_digital_window_cp01

0xefb5,	// (0x00082005) listscroll_help_pane

0xecbf,	// (0x00081d0f) phob_pre_status_pane

0xefbf,	// (0x0008200f) grid_qdial_pane

0xecbf,	// (0x00081d0f) listscroll_mce_pane

0xefc9,	// (0x00082019) bg_notes_pane

0xefd3,	// (0x00082023) list_notes_pane

0x1cbd,	// (0x00074d0d) scroll_pane_cp06

0xefdd,	// (0x0008202d) bg_calc_paper_pane

0xaace,	// (0x0007db1e) list_calc_pane

0xeff1,	// (0x00082041) bg_calc_display_pane

0x1cc8,	// (0x00074d18) calc_display_pane_t1

0x1cda,	// (0x00074d2a) calc_display_pane_t2

0xaae8,	// (0x0007db38) calc_display_pane_t3

0x0002,

0xf173,	// (0x000821c3) calc_display_pane_t

0x1cec,	// (0x00074d3c) cell_calc_pane_ParamLimits

0x1cec,	// (0x00074d3c) cell_calc_pane

0xeffd,	// (0x0008204d) bg_calc_paper_pane_g1

0xf009,	// (0x00082059) bg_calc_paper_pane_g2

0xf015,	// (0x00082065) bg_calc_paper_pane_g3

0xf021,	// (0x00082071) bg_calc_paper_pane_g4

0xf02d,	// (0x0008207d) bg_calc_paper_pane_g5

0x1d21,	// (0x00074d71) bg_calc_paper_pane_g6

0x1d30,	// (0x00074d80) bg_calc_paper_pane_g7

0x1d3f,	// (0x00074d8f) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x000821ca) bg_calc_paper_pane_g

0x1d52,	// (0x00074da2) calc_bg_paper_pane_g9

0x1d65,	// (0x00074db5) list_calc_item_pane_ParamLimits

0x1d65,	// (0x00074db5) list_calc_item_pane

0xf039,	// (0x00082089) list_calc_item_pane_g1

0xaafa,	// (0x0007db4a) list_calc_item_pane_t1_ParamLimits

0xaafa,	// (0x0007db4a) list_calc_item_pane_t1

0x1d78,	// (0x00074dc8) list_calc_item_pane_t2_ParamLimits

0x1d78,	// (0x00074dc8) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x000821db) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x000821db) list_calc_item_pane_t

0xf046,	// (0x00082096) cell_calc_pane_g1

0xf050,	// (0x000820a0) grid_highlight_pane_cp02

0x1daa,	// (0x00074dfa) bg_calc_display_pane_g1

0x1db3,	// (0x00074e03) bg_calc_display_pane_g2

0x1dbd,	// (0x00074e0d) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x000821e5) bg_calc_display_pane_g

0x1dc6,	// (0x00074e16) cell_qdial_pane_ParamLimits

0x1dc6,	// (0x00074e16) cell_qdial_pane

0x1dda,	// (0x00074e2a) cell_qdial_pane_g1_ParamLimits

0x1dda,	// (0x00074e2a) cell_qdial_pane_g1

0x1df0,	// (0x00074e40) cell_qdial_pane_g2_ParamLimits

0x1df0,	// (0x00074e40) cell_qdial_pane_g2

0xf072,	// (0x000820c2) cell_qdial_pane_g3_ParamLimits

0xf072,	// (0x000820c2) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x000821ec) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x000821ec) cell_qdial_pane_g

0x1e17,	// (0x00074e67) cell_qdial_pane_t1_ParamLimits

0x1e17,	// (0x00074e67) cell_qdial_pane_t1

0x1e2f,	// (0x00074e7f) cell_qdial_pane_t2_ParamLimits

0x1e2f,	// (0x00074e7f) cell_qdial_pane_t2

0x1e42,	// (0x00074e92) cell_qdial_pane_t3_ParamLimits

0x1e42,	// (0x00074e92) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x000821f5) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x000821f5) cell_qdial_pane_t

0xecbf,	// (0x00081d0f) grid_highlight_pane_cp04

0xf07e,	// (0x000820ce) thumbnail_qdial_pane_ParamLimits

0xf07e,	// (0x000820ce) thumbnail_qdial_pane

0xf0da,	// (0x0008212a) list_help_pane

0xf0e3,	// (0x00082133) scroll_pane_cp02

0x1e55,	// (0x00074ea5) help_list_pane_t1_ParamLimits

0x1e55,	// (0x00074ea5) help_list_pane_t1

0xab0c,	// (0x0007db5c) bg_notes_pane_g2

0xab14,	// (0x0007db64) bg_notes_pane_g3

0xab1c,	// (0x0007db6c) notes_bg_pane_g1

0xab24,	// (0x0007db74) notes_bg_pane_g4

0xab2c,	// (0x0007db7c) notes_bg_pane_g5

0xab34,	// (0x0007db84) notes_bg_pane_g6

0xab3c,	// (0x0007db8c) notes_bg_pane_g7

0xab44,	// (0x0007db94) notes_bg_pane_g8

0xab4c,	// (0x0007db9c) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00082213) notes_bg_pane_g

0x1e72,	// (0x00074ec2) list_notes_text_pane_ParamLimits

0x1e72,	// (0x00074ec2) list_notes_text_pane

0x1e87,	// (0x00074ed7) list_notes_text_pane_g1

0x0d18,	// (0x00073d68) list_notes_text_pane_t1

0xeff1,	// (0x00082041) listscroll_cale_week_pane

0x1ebe,	// (0x00074f0e) bg_cale_heading_pane

0x1ed2,	// (0x00074f22) bg_cale_pane_cp01

0x1eeb,	// (0x00074f3b) cale_week_corner_pane

0x1f01,	// (0x00074f51) cale_week_day_heading_pane

0x1f15,	// (0x00074f65) cale_week_scroll_pane_g1

0x1f26,	// (0x00074f76) cale_week_scroll_pane_g2

0x1f37,	// (0x00074f87) cale_week_scroll_pane_g3

0x1f48,	// (0x00074f98) cale_week_scroll_pane_g4

0x1f59,	// (0x00074fa9) cale_week_scroll_pane_g5

0x1f6c,	// (0x00074fbc) cale_week_scroll_pane_g6

0x1f7f,	// (0x00074fcf) cale_week_scroll_pane_g7

0x1f92,	// (0x00074fe2) cale_week_scroll_pane_g8

0x1fa5,	// (0x00074ff5) cale_week_scroll_pane_g9

0x1fb6,	// (0x00075006) cale_week_scroll_pane_g10

0x1fc7,	// (0x00075017) cale_week_scroll_pane_g11

0x1fd8,	// (0x00075028) cale_week_scroll_pane_g12

0x1fe9,	// (0x00075039) cale_week_scroll_pane_g13

0x1ffa,	// (0x0007504a) cale_week_scroll_pane_g14

0x200b,	// (0x0007505b) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00082222) cale_week_scroll_pane_g

0x201c,	// (0x0007506c) cale_week_time_pane

0x202f,	// (0x0007507f) grid_cale_week_pane

0x2056,	// (0x000750a6) scroll_pane_cp08

0x2070,	// (0x000750c0) cell_cale_week_pane_ParamLimits

0x2070,	// (0x000750c0) cell_cale_week_pane

0x20b0,	// (0x00075100) cale_week_day_heading_pane_t1

0x20dd,	// (0x0007512d) cale_week_day_heading_pane_t2

0x210a,	// (0x0007515a) cale_week_day_heading_pane_t3

0x2137,	// (0x00075187) cale_week_day_heading_pane_t4

0x2164,	// (0x000751b4) cale_week_day_heading_pane_t5

0x2191,	// (0x000751e1) cale_week_day_heading_pane_t6

0x21c0,	// (0x00075210) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00082241) cale_week_day_heading_pane_t

0x21ed,	// (0x0007523d) bg_cale_side_pane

0x21fb,	// (0x0007524b) cale_week_time_pane_t1

0x2213,	// (0x00075263) cale_week_time_pane_t2

0x222b,	// (0x0007527b) cale_week_time_pane_t3

0x2243,	// (0x00075293) cale_week_time_pane_t4

0x225b,	// (0x000752ab) cale_week_time_pane_t5

0x2273,	// (0x000752c3) cale_week_time_pane_t6

0x228b,	// (0x000752db) cale_week_time_pane_t7

0x22a3,	// (0x000752f3) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00082250) cale_week_time_pane_t

0x22bb,	// (0x0007530b) cell_cale_week_pane_g2

0x22d4,	// (0x00075324) cell_cale_week_pane_g3_ParamLimits

0x22d4,	// (0x00075324) cell_cale_week_pane_g3

0x22ec,	// (0x0007533c) grid_highlight_pane_cp07

0x22f4,	// (0x00075344) listscroll_gms_pane

0x22fe,	// (0x0007534e) grid_gms_pane

0x2307,	// (0x00075357) listscroll_gms_pane_g1

0x230f,	// (0x0007535f) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00082261) listscroll_gms_pane_g

0x2317,	// (0x00075367) scroll_pane_cp010

0x2322,	// (0x00075372) cell_gms_pane_ParamLimits

0x2322,	// (0x00075372) cell_gms_pane

0x2335,	// (0x00075385) cell_gms_pane_g1

0x233d,	// (0x0007538d) cell_gms_pane_g2

0x2345,	// (0x00075395) cell_gms_pane_g3

0x234e,	// (0x0007539e) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00082266) cell_gms_pane_g

0x2357,	// (0x000753a7) grid_highlight_pane_cp09

0x5387,	// (0x000783d7) phob_pre_status_pane_g1

0x538f,	// (0x000783df) phob_pre_status_pane_g2

0x5397,	// (0x000783e7) phob_pre_status_pane_g3

0x539f,	// (0x000783ef) phob_pre_status_pane_g4

0x0004,

0xf5f9,	// (0x00082649) phob_pre_status_pane_g

0x53af,	// (0x000783ff) phob_pre_status_pane_t1

0x53bd,	// (0x0007840d) phob_pre_status_pane_t2

0x53cd,	// (0x0007841d) phob_pre_status_pane_t3

0x0002,

0xf604,	// (0x00082654) phob_pre_status_pane_t

0xecbf,	// (0x00081d0f) bg_list_pane_cp05

0x2367,	// (0x000753b7) grid_vorec_pane

0xab54,	// (0x0007dba4) vorec_t1

0xab62,	// (0x0007dbb2) vorec_t2

0xab70,	// (0x0007dbc0) vorec_t3

0xab7e,	// (0x0007dbce) vorec_t4

0xab8c,	// (0x0007dbdc) vorec_t5

0xab9a,	// (0x0007dbea) vorec_t6

0x0006,

0xf21f,	// (0x0008226f) vorec_t

0xabb6,	// (0x0007dc06) wait_bar_pane_cp01

0x236f,	// (0x000753bf) cell_vorec_pane_ParamLimits

0x236f,	// (0x000753bf) cell_vorec_pane

0x2382,	// (0x000753d2) cell_vorec_pane_g1

0xecbf,	// (0x00081d0f) grid_highlight_pane_cp05

0x23a4,	// (0x000753f4) cams_zoom_pane

0x23b3,	// (0x00075403) image_vga_pane

0x23cd,	// (0x0007541d) main_camera_pane_g1

0x23df,	// (0x0007542f) main_camera_pane_g2

0x23ef,	// (0x0007543f) main_camera_pane_g3

0x23ff,	// (0x0007544f) main_camera_pane_g4

0x240f,	// (0x0007545f) main_camera_pane_g5

0x241f,	// (0x0007546f) main_camera_pane_g6

0x2431,	// (0x00075481) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0008227e) main_camera_pane_g

0x244d,	// (0x0007549d) main_camera_pane_t1

0x2463,	// (0x000754b3) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0008228f) main_camera_pane_t

0x249d,	// (0x000754ed) cams_zoom_pane_cp_ParamLimits

0x249d,	// (0x000754ed) cams_zoom_pane_cp

0x24c5,	// (0x00075515) image_cif_pane_ParamLimits

0x24c5,	// (0x00075515) image_cif_pane

0x2500,	// (0x00075550) image_subqcif_pane

0x2508,	// (0x00075558) main_video_pane_g1_ParamLimits

0x2508,	// (0x00075558) main_video_pane_g1

0x252c,	// (0x0007557c) main_video_pane_g2_ParamLimits

0x252c,	// (0x0007557c) main_video_pane_g2

0x2560,	// (0x000755b0) main_video_pane_g3_ParamLimits

0x2560,	// (0x000755b0) main_video_pane_g3

0x258e,	// (0x000755de) main_video_pane_g4_ParamLimits

0x258e,	// (0x000755de) main_video_pane_g4

0x25bc,	// (0x0007560c) main_video_pane_g5_ParamLimits

0x25bc,	// (0x0007560c) main_video_pane_g5

0x25d8,	// (0x00075628) main_video_pane_g6_ParamLimits

0x25d8,	// (0x00075628) main_video_pane_g6

0x0006,

0xf244,	// (0x00082294) main_video_pane_g_ParamLimits

0xf244,	// (0x00082294) main_video_pane_g

0x2603,	// (0x00075653) main_video_pane_t1_ParamLimits

0x2603,	// (0x00075653) main_video_pane_t1

0x264c,	// (0x0007569c) cams_zoom_pane_g1

0x2655,	// (0x000756a5) cams_zoom_pane_g2

0x265e,	// (0x000756ae) cams_zoom_pane_g3

0x2667,	// (0x000756b7) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x000822a3) cams_zoom_pane_g

0x2684,	// (0x000756d4) grid_cams_pane

0x269e,	// (0x000756ee) linegrid_cams_pane

0x26b2,	// (0x00075702) cell_cams_pane_ParamLimits

0x26b2,	// (0x00075702) cell_cams_pane

0x26d2,	// (0x00075722) cams_burst_image_pane

0x26da,	// (0x0007572a) cell_cams_pane_g1

0xecbf,	// (0x00081d0f) grid_highlight_pane_cp03

0xf046,	// (0x00082096) mp_bg_pane_g1

0xecbf,	// (0x00081d0f) bg_list_pane_cp03

0xba52,	// (0x0007eaa2) bg_mp_pane

0xba5a,	// (0x0007eaaa) grid_mp_pane

0xba62,	// (0x0007eab2) media_player_g1

0xba6a,	// (0x0007eaba) media_player_t1

0xba78,	// (0x0007eac8) media_player_t2

0xba86,	// (0x0007ead6) media_player_t3

0xba94,	// (0x0007eae4) media_player_t4

0xbaa2,	// (0x0007eaf2) media_player_t5

0xbab0,	// (0x0007eb00) media_player_t6

0xbabe,	// (0x0007eb0e) media_player_t7

0x0006,

0xf5e3,	// (0x00082633) media_player_t

0xbacc,	// (0x0007eb1c) wait_bar_pane_cp02

0xf5c8,	// (0x00082618) main_usb_pane_t

0x537e,	// (0x000783ce) cell_mp_pane

0xf046,	// (0x00082096) cell_mp_pane_g1

0xecbf,	// (0x00081d0f) grid_highlight_pane_cp06

0x26e2,	// (0x00075732) grid_skin_colour_pane

0x26ea,	// (0x0007573a) list_highlight_pane_cp03

0x26f2,	// (0x00075742) skin_g1

0x26fa,	// (0x0007574a) skin_t1

0x2709,	// (0x00075759) skin_t2

0x0001,

0xf288,	// (0x000822d8) skin_t

0x2717,	// (0x00075767) cell_skin_colour_pane_ParamLimits

0x2717,	// (0x00075767) cell_skin_colour_pane

0x2737,	// (0x00075787) cell_skin_colour_pane_g1

0x27a0,	// (0x000757f0) call_video_g1_ParamLimits

0x27a0,	// (0x000757f0) call_video_g1

0x27bc,	// (0x0007580c) call_video_g2_ParamLimits

0x27bc,	// (0x0007580c) call_video_g2

0x0001,

0xf28d,	// (0x000822dd) call_video_g_ParamLimits

0xf28d,	// (0x000822dd) call_video_g

0x280e,	// (0x0007585e) call_video_uplink_pane_cp1_ParamLimits

0x280e,	// (0x0007585e) call_video_uplink_pane_cp1

0x2873,	// (0x000758c3) call_video_uplink_pane_cp2

0x28b5,	// (0x00075905) video_down_crop_pane_ParamLimits

0x28b5,	// (0x00075905) video_down_crop_pane

0x29ac,	// (0x000759fc) video_down_pane_ParamLimits

0x29ac,	// (0x000759fc) video_down_pane

0x2aa3,	// (0x00075af3) video_down_subqcif_pane_ParamLimits

0x2aa3,	// (0x00075af3) video_down_subqcif_pane

0x2abb,	// (0x00075b0b) video_down_subqcif_pane_cp_ParamLimits

0x2abb,	// (0x00075b0b) video_down_subqcif_pane_cp

0x2af6,	// (0x00075b46) im_reading_pane_ParamLimits

0x2af6,	// (0x00075b46) im_reading_pane

0x2b08,	// (0x00075b58) im_writing_pane_ParamLimits

0x2b08,	// (0x00075b58) im_writing_pane

0x2b26,	// (0x00075b76) im_reading_pane_t1

0x2b5f,	// (0x00075baf) list_im_pane

0x2b70,	// (0x00075bc0) scroll_pane_cp07

0x2b89,	// (0x00075bd9) im_writing_pane_t1_ParamLimits

0x2b89,	// (0x00075bd9) im_writing_pane_t1

0x2b9e,	// (0x00075bee) im_writing_pane_t2_ParamLimits

0x2b9e,	// (0x00075bee) im_writing_pane_t2

0x0001,

0xf297,	// (0x000822e7) im_writing_pane_t_ParamLimits

0xf297,	// (0x000822e7) im_writing_pane_t

0xecbf,	// (0x00081d0f) input_focus_pane_cp04

0xecbf,	// (0x00081d0f) input_focus_pane_cp05

0x2bbb,	// (0x00075c0b) list_im_single_pane_ParamLimits

0x2bbb,	// (0x00075c0b) list_im_single_pane

0x2bcf,	// (0x00075c1f) list_single_im_pane_t1

0x533e,	// (0x0007838e) blid_accuracy_pane

0x5346,	// (0x00078396) blid_compass_pane

0x5350,	// (0x000783a0) main_location_t1

0x5360,	// (0x000783b0) main_location_t2

0x5370,	// (0x000783c0) main_location_t3

0x0002,

0xf5f2,	// (0x00082642) main_location_t

0xecbf,	// (0x00081d0f) aid_levels_location

0xf046,	// (0x00082096) blid_accuracy_pane_g1

0xf046,	// (0x00082096) blid_accuracy_pane_g2

0x0001,

0x00aa,	// (0x000730fa) blid_accuracy_pane_g

0x2c09,	// (0x00075c59) wml_content_pane

0x2c47,	// (0x00075c97) wml_button_pane_ParamLimits

0x2c47,	// (0x00075c97) wml_button_pane

0x2c5b,	// (0x00075cab) wml_list_single_large_pane_ParamLimits

0x2c5b,	// (0x00075cab) wml_list_single_large_pane

0x2c70,	// (0x00075cc0) wml_list_single_medium_pane_ParamLimits

0x2c70,	// (0x00075cc0) wml_list_single_medium_pane

0x2c86,	// (0x00075cd6) wml_list_single_small_pane_ParamLimits

0x2c86,	// (0x00075cd6) wml_list_single_small_pane

0x2c9e,	// (0x00075cee) wml_selection_box_pane_ParamLimits

0x2c9e,	// (0x00075cee) wml_selection_box_pane

0x2cb1,	// (0x00075d01) wml_list_single_pane_t1

0x2cc0,	// (0x00075d10) wml_list_single_medium_pane_t1

0x2ccf,	// (0x00075d1f) wml_list_single_large_pane_t1

0x2cde,	// (0x00075d2e) input_focus_pane_cp02_ParamLimits

0x2cde,	// (0x00075d2e) input_focus_pane_cp02

0x2cf1,	// (0x00075d41) wml_selection_box_pane_g1

0x2cfa,	// (0x00075d4a) wml_selection_box_pane_t1_ParamLimits

0x2cfa,	// (0x00075d4a) wml_selection_box_pane_t1

0xef1a,	// (0x00081f6a) bg_wml_button_pane_ParamLimits

0xef1a,	// (0x00081f6a) bg_wml_button_pane

0x2d12,	// (0x00075d62) wml_button_pane_g1

0x2d1a,	// (0x00075d6a) wml_button_pane_t1

0x2d12,	// (0x00075d62) wml_button_bg_pane_g1

0x2d2a,	// (0x00075d7a) wml_button_bg_pane_g2

0x2d32,	// (0x00075d82) wml_button_bg_pane_g3

0x2d3a,	// (0x00075d8a) wml_button_bg_pane_g4

0x2d42,	// (0x00075d92) wml_button_bg_pane_g5

0x2d4a,	// (0x00075d9a) wml_button_bg_pane_g6

0x2d52,	// (0x00075da2) wml_button_bg_pane_g7

0x2d5a,	// (0x00075daa) wml_button_bg_pane_g8

0x2d62,	// (0x00075db2) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x000822ec) wml_button_bg_pane_g

0x2d6a,	// (0x00075dba) bg_list_pane_cp02

0x2d72,	// (0x00075dc2) mce_header_pane_ParamLimits

0x2d72,	// (0x00075dc2) mce_header_pane

0x2d88,	// (0x00075dd8) mce_icon_pane

0x2d88,	// (0x00075dd8) mce_image_pane

0x2d91,	// (0x00075de1) mce_text_pane_ParamLimits

0x2d91,	// (0x00075de1) mce_text_pane

0x2da4,	// (0x00075df4) scroll_pane_cp03

0x2c3f,	// (0x00075c8f) scroll_pane_cp04

0x2dae,	// (0x00075dfe) scroll_pane_cp05_ParamLimits

0x2dae,	// (0x00075dfe) scroll_pane_cp05

0x2dba,	// (0x00075e0a) mce_header_field_pane_ParamLimits

0x2dba,	// (0x00075e0a) mce_header_field_pane

0x2dd1,	// (0x00075e21) mce_header_field_pane_2_ParamLimits

0x2dd1,	// (0x00075e21) mce_header_field_pane_2

0x2de7,	// (0x00075e37) mce_header_field_pane_3

0x2def,	// (0x00075e3f) list_single_mce_message_pane_ParamLimits

0x2def,	// (0x00075e3f) list_single_mce_message_pane

0x2e04,	// (0x00075e54) list_single_mce_smart_pane_ParamLimits

0x2e04,	// (0x00075e54) list_single_mce_smart_pane

0x2e24,	// (0x00075e74) input_focus_pane_cp03

0x2e2d,	// (0x00075e7d) list_header_data_pane

0x2e35,	// (0x00075e85) mce_header_field_pane_t1

0x2e45,	// (0x00075e95) list_single_mce_header_pane_ParamLimits

0x2e45,	// (0x00075e95) list_single_mce_header_pane

0x2e59,	// (0x00075ea9) list_single_mce_header_pane_t1

0x2e68,	// (0x00075eb8) list_single_mce_message_pane_g1

0x2e70,	// (0x00075ec0) list_single_mce_message_pane_t1

0x2e9c,	// (0x00075eec) bg_cale_heading_pane_cp01_ParamLimits

0x2e9c,	// (0x00075eec) bg_cale_heading_pane_cp01

0x2ebf,	// (0x00075f0f) bg_cale_pane_cp02_ParamLimits

0x2ebf,	// (0x00075f0f) bg_cale_pane_cp02

0x2ee2,	// (0x00075f32) cale_month_corner_pane

0x2ef8,	// (0x00075f48) cale_month_day_heading_pane_ParamLimits

0x2ef8,	// (0x00075f48) cale_month_day_heading_pane

0x2f2b,	// (0x00075f7b) cale_month_pane_g1_ParamLimits

0x2f2b,	// (0x00075f7b) cale_month_pane_g1

0x2f47,	// (0x00075f97) cale_month_pane_g2_ParamLimits

0x2f47,	// (0x00075f97) cale_month_pane_g2

0x2f62,	// (0x00075fb2) cale_month_pane_g3_ParamLimits

0x2f62,	// (0x00075fb2) cale_month_pane_g3

0x2f8e,	// (0x00075fde) cale_month_pane_g4_ParamLimits

0x2f8e,	// (0x00075fde) cale_month_pane_g4

0x2fba,	// (0x0007600a) cale_month_pane_g5_ParamLimits

0x2fba,	// (0x0007600a) cale_month_pane_g5

0x2fee,	// (0x0007603e) cale_month_pane_g6_ParamLimits

0x2fee,	// (0x0007603e) cale_month_pane_g6

0x302a,	// (0x0007607a) cale_month_pane_g7_ParamLimits

0x302a,	// (0x0007607a) cale_month_pane_g7

0x3066,	// (0x000760b6) cale_month_pane_g8_ParamLimits

0x3066,	// (0x000760b6) cale_month_pane_g8

0x30a2,	// (0x000760f2) cale_month_pane_g9_ParamLimits

0x30a2,	// (0x000760f2) cale_month_pane_g9

0x30dc,	// (0x0007612c) cale_month_pane_g10_ParamLimits

0x30dc,	// (0x0007612c) cale_month_pane_g10

0x3116,	// (0x00076166) cale_month_pane_g11_ParamLimits

0x3116,	// (0x00076166) cale_month_pane_g11

0x3150,	// (0x000761a0) cale_month_pane_g12_ParamLimits

0x3150,	// (0x000761a0) cale_month_pane_g12

0x318a,	// (0x000761da) cale_month_pane_g13_ParamLimits

0x318a,	// (0x000761da) cale_month_pane_g13

0x000c,

0xf2af,	// (0x000822ff) cale_month_pane_g_ParamLimits

0xf2af,	// (0x000822ff) cale_month_pane_g

0x31d6,	// (0x00076226) cale_month_week_pane

0x31e9,	// (0x00076239) grid_cale_month_pane_ParamLimits

0x31e9,	// (0x00076239) grid_cale_month_pane

0x3217,	// (0x00076267) cale_month_day_heading_pane_t1

0x3275,	// (0x000762c5) cale_month_day_heading_pane_t2

0x32da,	// (0x0007632a) cale_month_day_heading_pane_t3

0x333f,	// (0x0007638f) cale_month_day_heading_pane_t4

0x33a4,	// (0x000763f4) cale_month_day_heading_pane_t5

0x3419,	// (0x00076469) cale_month_day_heading_pane_t6

0x348e,	// (0x000764de) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0008231a) cale_month_day_heading_pane_t

0x21ed,	// (0x0007523d) bg_cale_side_pane_cp01

0x3503,	// (0x00076553) cale_month_week_pane_t1

0x351a,	// (0x0007656a) cale_month_week_pane_t2

0x3531,	// (0x00076581) cale_month_week_pane_t3

0x3548,	// (0x00076598) cale_month_week_pane_t4

0x355f,	// (0x000765af) cale_month_week_pane_t5

0x3576,	// (0x000765c6) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00082329) cale_month_week_pane_t

0x358d,	// (0x000765dd) cell_cale_month_pane_ParamLimits

0x358d,	// (0x000765dd) cell_cale_month_pane

0xaca5,	// (0x0007dcf5) cell_cale_month_pane_g1

0x3663,	// (0x000766b3) cell_cale_month_pane_t1_ParamLimits

0x3663,	// (0x000766b3) cell_cale_month_pane_t1

0x22ec,	// (0x0007533c) grid_highlight_pane_cp08

0xf046,	// (0x00082096) main_smil_g1

0x367f,	// (0x000766cf) smil_status_pane

0x3688,	// (0x000766d8) smil_text_pane

0xb972,	// (0x0007e9c2) bg_popup_call3_rect_pane_g8

0xb97a,	// (0x0007e9ca) bg_popup_call3_rect_pane_g9

0x0008,

0xf586,	// (0x000825d6) bg_popup_call3_rect_pane_g

0xbbf4,	// (0x0007ec44) smil_status_volume_pane_g1

0x369c,	// (0x000766ec) smil_status_pane_t1

0xbc27,	// (0x0007ec77) volume_smil_pane

0x36b3,	// (0x00076703) list_smil_text_pane

0x36bd,	// (0x0007670d) scroll_pane_cp011

0x36c8,	// (0x00076718) smil_text_list_pane_t1_ParamLimits

0x36c8,	// (0x00076718) smil_text_list_pane_t1

0xacb1,	// (0x0007dd01) aid_volume_smil_ParamLimits

0xacb1,	// (0x0007dd01) aid_volume_smil

0xf046,	// (0x00082096) smil_volume_pane_g1

0xf046,	// (0x00082096) smil_volume_pane_g2

0x0001,

0x00aa,	// (0x000730fa) smil_volume_pane_g

0xeff1,	// (0x00082041) listscroll_cale_day_pane

0x370e,	// (0x0007675e) bg_cale_pane

0x3726,	// (0x00076776) list_cale_pane

0x3737,	// (0x00076787) scroll_pane_cp09

0x3748,	// (0x00076798) cale_bg_pane_g1

0x3750,	// (0x000767a0) cale_bg_pane_g2

0x3758,	// (0x000767a8) cale_bg_pane_g3

0x3760,	// (0x000767b0) cale_bg_pane_g4

0x3768,	// (0x000767b8) cale_bg_pane_g5

0x3770,	// (0x000767c0) cale_bg_pane_g6

0x3778,	// (0x000767c8) cale_bg_pane_g7

0x3780,	// (0x000767d0) cale_bg_pane_g8

0x3788,	// (0x000767d8) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x00082349) cale_bg_pane_g

0x236f,	// (0x000753bf) list_cale_time_pane_ParamLimits

0x236f,	// (0x000753bf) list_cale_time_pane

0x3790,	// (0x000767e0) list_cale_time_pane_g1_ParamLimits

0x3790,	// (0x000767e0) list_cale_time_pane_g1

0x379c,	// (0x000767ec) list_cale_time_pane_g2_ParamLimits

0x379c,	// (0x000767ec) list_cale_time_pane_g2

0x37a9,	// (0x000767f9) list_cale_time_pane_g3_ParamLimits

0x37a9,	// (0x000767f9) list_cale_time_pane_g3

0x37b7,	// (0x00076807) list_cale_time_pane_g4_ParamLimits

0x37b7,	// (0x00076807) list_cale_time_pane_g4

0x37c5,	// (0x00076815) list_cale_time_pane_g5_ParamLimits

0x37c5,	// (0x00076815) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0008235c) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0008235c) list_cale_time_pane_g

0x37e0,	// (0x00076830) list_cale_time_pane_t1_ParamLimits

0x37e0,	// (0x00076830) list_cale_time_pane_t1

0x3808,	// (0x00076858) list_cale_time_pane_t2_ParamLimits

0x3808,	// (0x00076858) list_cale_time_pane_t2

0x3ede,	// (0x00076f2e) aid_blid_cardinal_pane

0x3f28,	// (0x00076f78) compass_pane_t4

0x3830,	// (0x00076880) list_cale_time_pane_t4_ParamLimits

0x3830,	// (0x00076880) list_cale_time_pane_t4

0x3f36,	// (0x00076f86) compass_pane_t5

0x3f44,	// (0x00076f94) compass_pane_t6

0x3f52,	// (0x00076fa2) compass_pane_t7

0x3fd2,	// (0x00077022) navi_pane_cc_t1

0x41eb,	// (0x0007723b) aid_phob_thumbnail_center_pane

0x4825,	// (0x00077875) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x00082369) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x00082369) list_cale_time_pane_t

0xe8ad,	// (0x000818fd) bg_popup_window_pane_cp02_ParamLimits

0xe8ad,	// (0x000818fd) bg_popup_window_pane_cp02

0x3858,	// (0x000768a8) heading_pane_cp01_ParamLimits

0x3858,	// (0x000768a8) heading_pane_cp01

0x3864,	// (0x000768b4) loc_req_pane_ParamLimits

0x3864,	// (0x000768b4) loc_req_pane

0x3874,	// (0x000768c4) loc_type_pane_ParamLimits

0x3874,	// (0x000768c4) loc_type_pane

0x3886,	// (0x000768d6) loc_type_pane_t1_ParamLimits

0x3886,	// (0x000768d6) loc_type_pane_t1

0x3898,	// (0x000768e8) loc_type_pane_t2_ParamLimits

0x3898,	// (0x000768e8) loc_type_pane_t2

0x38aa,	// (0x000768fa) loc_type_pane_t3_ParamLimits

0x38aa,	// (0x000768fa) loc_type_pane_t3

0x0002,

0xf320,	// (0x00082370) loc_type_pane_t_ParamLimits

0xf320,	// (0x00082370) loc_type_pane_t

0x38bc,	// (0x0007690c) list_loc_req_pane

0x38c6,	// (0x00076916) scroll_pane_cp012

0x38d1,	// (0x00076921) list_single_loc_request_popup_menu_pane_ParamLimits

0x38d1,	// (0x00076921) list_single_loc_request_popup_menu_pane

0x38de,	// (0x0007692e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x38de,	// (0x0007692e) list_single_loc_request_popup_menu_pane_g1

0x38ea,	// (0x0007693a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x38ea,	// (0x0007693a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x00082377) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x00082377) list_single_loc_request_popup_menu_pane_g

0x38f6,	// (0x00076946) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x38f6,	// (0x00076946) list_single_loc_request_popup_menu_pane_t1

0xef1a,	// (0x00081f6a) bg_popup_window_pane_cp03_ParamLimits

0xef1a,	// (0x00081f6a) bg_popup_window_pane_cp03

0x390c,	// (0x0007695c) heading_loc_req_pane_ParamLimits

0x390c,	// (0x0007695c) heading_loc_req_pane

0x3918,	// (0x00076968) popup_dyc_status_message_window_g1_ParamLimits

0x3918,	// (0x00076968) popup_dyc_status_message_window_g1

0x392c,	// (0x0007697c) popup_dyc_status_message_window_t1_ParamLimits

0x392c,	// (0x0007697c) popup_dyc_status_message_window_t1

0x3941,	// (0x00076991) popup_dyc_status_message_window_t2_ParamLimits

0x3941,	// (0x00076991) popup_dyc_status_message_window_t2

0x3956,	// (0x000769a6) popup_dyc_status_message_window_t3_ParamLimits

0x3956,	// (0x000769a6) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0008237c) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0008237c) popup_dyc_status_message_window_t

0xecbf,	// (0x00081d0f) bg_heading_pane_cp01

0x3972,	// (0x000769c2) heading_loc_req_pane_g1

0x397a,	// (0x000769ca) heading_loc_req_pane_g2

0x3982,	// (0x000769d2) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00082383) heading_loc_req_pane_g

0x398a,	// (0x000769da) heading_loc_req_pane_t1

0x39b1,	// (0x00076a01) bg_popup_sub_pane_cp01_ParamLimits

0x39b1,	// (0x00076a01) bg_popup_sub_pane_cp01

0x39bf,	// (0x00076a0f) popup_cale_events_window_g1_ParamLimits

0x39bf,	// (0x00076a0f) popup_cale_events_window_g1

0x39df,	// (0x00076a2f) popup_cale_events_window_g2_ParamLimits

0x39df,	// (0x00076a2f) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x000823b7) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x000823b7) popup_cale_events_window_g

0x39ff,	// (0x00076a4f) popup_cale_events_window_t1_ParamLimits

0x39ff,	// (0x00076a4f) popup_cale_events_window_t1

0x3a11,	// (0x00076a61) popup_cale_events_window_t2_ParamLimits

0x3a11,	// (0x00076a61) popup_cale_events_window_t2

0x3a4f,	// (0x00076a9f) popup_cale_events_window_t3_ParamLimits

0x3a4f,	// (0x00076a9f) popup_cale_events_window_t3

0x3a89,	// (0x00076ad9) popup_cale_events_window_t4_ParamLimits

0x3a89,	// (0x00076ad9) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x000823bc) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x000823bc) popup_cale_events_window_t

0x3abf,	// (0x00076b0f) call_type_pane

0x3acf,	// (0x00076b1f) popup_call_status_window_g1

0x3ae3,	// (0x00076b33) popup_call_status_window_g2

0x3af7,	// (0x00076b47) popup_call_status_window_g3

0x0002,

0xf375,	// (0x000823c5) popup_call_status_window_g

0x3b06,	// (0x00076b56) call_type_pane_g1

0x3b0f,	// (0x00076b5f) call_type_pane_g2

0x0001,

0xf37c,	// (0x000823cc) call_type_pane_g

0xecbf,	// (0x00081d0f) bg_popup_sub_pane_cp02

0x3b18,	// (0x00076b68) listscroll_popup_wml_pane

0x3b20,	// (0x00076b70) list_wml_pane

0x3b2a,	// (0x00076b7a) scroll_pane_cp013

0x3b35,	// (0x00076b85) list_single_graphic_popup_wml_pane_ParamLimits

0x3b35,	// (0x00076b85) list_single_graphic_popup_wml_pane

0xf046,	// (0x00082096) list_single_graphic_popup_wml_pane_g1

0x3b49,	// (0x00076b99) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x000823d1) list_single_graphic_popup_wml_pane_g

0x3b51,	// (0x00076ba1) list_single_graphic_popup_wml_pane_t1

0x3b67,	// (0x00076bb7) aid_call_pane

0xef12,	// (0x00081f62) popup_clock_analogue_window_g1

0xef12,	// (0x00081f62) popup_clock_analogue_window_g2

0xad48,	// (0x0007dd98) popup_clock_analogue_window_g3

0xad48,	// (0x0007dd98) popup_clock_analogue_window_g4

0xf046,	// (0x00082096) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x000823d6) popup_clock_analogue_window_g

0xad50,	// (0x0007dda0) popup_clock_analogue_window_t1

0xad5e,	// (0x0007ddae) clock_digital_number_pane_ParamLimits

0xad5e,	// (0x0007ddae) clock_digital_number_pane

0xad6a,	// (0x0007ddba) clock_digital_number_pane_cp02_ParamLimits

0xad6a,	// (0x0007ddba) clock_digital_number_pane_cp02

0xad76,	// (0x0007ddc6) clock_digital_number_pane_cp03_ParamLimits

0xad76,	// (0x0007ddc6) clock_digital_number_pane_cp03

0xad82,	// (0x0007ddd2) clock_digital_number_pane_cp04_ParamLimits

0xad82,	// (0x0007ddd2) clock_digital_number_pane_cp04

0xad92,	// (0x0007dde2) clock_digital_separator_pane_ParamLimits

0xad92,	// (0x0007dde2) clock_digital_separator_pane

0xad9e,	// (0x0007ddee) popup_clock_digital_window_t1

0xf046,	// (0x00082096) clock_digital_number_pane_g1

0xf046,	// (0x00082096) clock_digital_number_pane_g2

0x0001,

0x00aa,	// (0x000730fa) clock_digital_number_pane_g

0xf046,	// (0x00082096) clock_digital_separator_pane_g1

0xf046,	// (0x00082096) clock_digital_separator_pane_g2

0x0001,

0x00aa,	// (0x000730fa) clock_digital_separator_pane_g

0xecbf,	// (0x00081d0f) bg_popup_window_pane_cp04

0x3b6f,	// (0x00076bbf) heading_pane_cp03

0x3b77,	// (0x00076bc7) listscroll_popup_gms_pane

0x3b7f,	// (0x00076bcf) grid_large_graphic_popup_pane

0x3b89,	// (0x00076bd9) listscroll_popup_gms_pane_g1

0x3b91,	// (0x00076be1) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x000823e1) listscroll_popup_gms_pane_g

0x2c3f,	// (0x00075c8f) scroll_pane_cp014

0x3b99,	// (0x00076be9) cell_large_graphic_popup_pane_ParamLimits

0x3b99,	// (0x00076be9) cell_large_graphic_popup_pane

0x3bb1,	// (0x00076c01) cell_large_graphic_popup_pane_g1_ParamLimits

0x3bb1,	// (0x00076c01) cell_large_graphic_popup_pane_g1

0x3bbd,	// (0x00076c0d) cell_large_graphic_popup_pane_g2_ParamLimits

0x3bbd,	// (0x00076c0d) cell_large_graphic_popup_pane_g2

0x3bc9,	// (0x00076c19) cell_large_graphic_popup_pane_g3_ParamLimits

0x3bc9,	// (0x00076c19) cell_large_graphic_popup_pane_g3

0x3bd6,	// (0x00076c26) cell_large_graphic_popup_pane_g4_ParamLimits

0x3bd6,	// (0x00076c26) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x000823e6) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x000823e6) cell_large_graphic_popup_pane_g

0x3be6,	// (0x00076c36) grid_highlight_pane_cp010

0xf046,	// (0x00082096) bg_popup_call_pane_g1

0x3bf0,	// (0x00076c40) list_single_graphic_popup_conf_pane_ParamLimits

0x3bf0,	// (0x00076c40) list_single_graphic_popup_conf_pane

0x3c03,	// (0x00076c53) list_highlight_pane_cp01

0x3c0c,	// (0x00076c5c) list_single_graphic_popup_conf_pane_g1

0x3c14,	// (0x00076c64) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x000823ef) list_single_graphic_popup_conf_pane_g

0x3c1c,	// (0x00076c6c) list_single_graphic_popup_conf_pane_t1

0x3c2a,	// (0x00076c7a) linegrid_cams_pane_g1

0x3c33,	// (0x00076c83) linegrid_cams_pane_g2

0x2345,	// (0x00075395) linegrid_cams_pane_g3

0x3c3c,	// (0x00076c8c) linegrid_cams_pane_g4

0x3c45,	// (0x00076c95) linegrid_cams_pane_g5

0x3c4e,	// (0x00076c9e) linegrid_cams_pane_g6

0x234e,	// (0x0007539e) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x000823f4) linegrid_cams_pane_g

0x3c59,	// (0x00076ca9) popup_clock_analogue_window

0x3c59,	// (0x00076ca9) popup_clock_digital_window

0xecbf,	// (0x00081d0f) popup_phob_thumbnail_window

0xf046,	// (0x00082096) call_video_uplink_pane_g1

0x3c62,	// (0x00076cb2) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x00082403) call_video_uplink_pane_g

0x3c6a,	// (0x00076cba) video_uplink_pane

0x3c72,	// (0x00076cc2) mce_image_pane_g1

0x3c7c,	// (0x00076ccc) mce_image_pane_g2

0x3c86,	// (0x00076cd6) mce_image_pane_g3

0x3c8e,	// (0x00076cde) mce_image_pane_g4

0x3c96,	// (0x00076ce6) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x00082408) mce_image_pane_g

0x3c9e,	// (0x00076cee) control_top_pane_stacon_cp01_ParamLimits

0x3c9e,	// (0x00076cee) control_top_pane_stacon_cp01

0x3cb2,	// (0x00076d02) uni_indicator_pane_stacon_cp01_ParamLimits

0x3cb2,	// (0x00076d02) uni_indicator_pane_stacon_cp01

0x3cc3,	// (0x00076d13) bg_popup_sub_pane_cp03

0x3ccd,	// (0x00076d1d) chi_dic_find_pane

0x3cd5,	// (0x00076d25) listscroll_chi_dic_pane

0x3cde,	// (0x00076d2e) main_pane_chidic_g1

0x3cf1,	// (0x00076d41) chi_dic_find_pane_t1

0x3cff,	// (0x00076d4f) find_chidic_pane

0x3d08,	// (0x00076d58) chi_dic_list_pane_ParamLimits

0x3d08,	// (0x00076d58) chi_dic_list_pane

0x3d19,	// (0x00076d69) scroll_pane_cp020

0x3d21,	// (0x00076d71) find_chidic_pane_t1

0xecbf,	// (0x00081d0f) input_focus_pane_cp06

0x3d30,	// (0x00076d80) list_chi_dic_pane_ParamLimits

0x3d30,	// (0x00076d80) list_chi_dic_pane

0x3d42,	// (0x00076d92) list_chi_dic_pane_t1_ParamLimits

0x3d42,	// (0x00076d92) list_chi_dic_pane_t1

0xecbf,	// (0x00081d0f) list_highlight_pane_cp020

0x3d55,	// (0x00076da5) bg_cale_heading_pane_g1

0x3d5d,	// (0x00076dad) bg_cale_heading_pane_g2

0x3d65,	// (0x00076db5) bg_cale_heading_pane_g3

0x3d6d,	// (0x00076dbd) bg_cale_heading_pane_g4

0x3d77,	// (0x00076dc7) bg_cale_heading_pane_g5

0x3d81,	// (0x00076dd1) bg_cale_heading_pane_g6

0x3d89,	// (0x00076dd9) bg_cale_heading_pane_g7

0x3d91,	// (0x00076de1) bg_cale_heading_pane_g8

0x3d9b,	// (0x00076deb) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x00082413) bg_cale_heading_pane_g

0x3d55,	// (0x00076da5) bg_cale_side_pane_g1

0x3da5,	// (0x00076df5) bg_cale_side_pane_g2

0x3dad,	// (0x00076dfd) bg_cale_side_pane_g3

0x3db5,	// (0x00076e05) bg_cale_side_pane_g4

0x3dbd,	// (0x00076e0d) bg_cale_side_pane_g5

0x3dc5,	// (0x00076e15) bg_cale_side_pane_g6

0x3dcd,	// (0x00076e1d) bg_cale_side_pane_g7

0x3dd5,	// (0x00076e25) bg_cale_side_pane_g8

0x3ddd,	// (0x00076e2d) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x00082426) bg_cale_side_pane_g

0x3de5,	// (0x00076e35) popup_call_status_window_ParamLimits

0x3de5,	// (0x00076e35) popup_call_status_window

0x3e2e,	// (0x00076e7e) stacon_top_pane

0x3e36,	// (0x00076e86) status_pane_ParamLimits

0x3e36,	// (0x00076e86) status_pane

0x3e4b,	// (0x00076e9b) status_small_pane

0x3e53,	// (0x00076ea3) control_pane

0xecbf,	// (0x00081d0f) stacon_bottom_pane

0x3e5b,	// (0x00076eab) list_single_mce_smart_pane_t1_ParamLimits

0x3e5b,	// (0x00076eab) list_single_mce_smart_pane_t1

0x3e6e,	// (0x00076ebe) list_single_mce_smart_pane_t2_ParamLimits

0x3e6e,	// (0x00076ebe) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x00082439) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x00082439) list_single_mce_smart_pane_t

0x3e8d,	// (0x00076edd) compass_pane

0x3e96,	// (0x00076ee6) main_location2_pane_t1

0x3ea8,	// (0x00076ef8) main_location2_pane_t2

0x3eba,	// (0x00076f0a) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0008243e) main_location2_pane_t

0x3efe,	// (0x00076f4e) compass_pane_g1_ParamLimits

0x3efe,	// (0x00076f4e) compass_pane_g1

0x3f0a,	// (0x00076f5a) compass_pane_t1

0x3f19,	// (0x00076f69) compass_pane_t2

0x0005,

0xf3f7,	// (0x00082447) compass_pane_t

0x3f60,	// (0x00076fb0) text_secondary_cp61

0x3fc9,	// (0x00077019) navi_pane_cams_g5

0x4043,	// (0x00077093) navi_pane_im_t1

0x4051,	// (0x000770a1) navi_pane_mp_g1_ParamLimits

0x4051,	// (0x000770a1) navi_pane_mp_g1

0x4065,	// (0x000770b5) navi_pane_mp_g2_ParamLimits

0x4065,	// (0x000770b5) navi_pane_mp_g2

0x4071,	// (0x000770c1) navi_pane_mp_g3_ParamLimits

0x4071,	// (0x000770c1) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0008245b) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0008245b) navi_pane_mp_g

0x407d,	// (0x000770cd) navi_pane_mp_t1

0x408b,	// (0x000770db) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00082462) navi_pane_mp_t

0x4134,	// (0x00077184) navi_pane_vt_g1

0x407d,	// (0x000770cd) navi_pane_vt_t1

0x413c,	// (0x0007718c) navi_slider_pane

0x4144,	// (0x00077194) zooming_pane

0x414c,	// (0x0007719c) navi_slider_pane_g1

0xadbb,	// (0x0007de0b) navi_slider_pane_g2

0x0006,

0xf419,	// (0x00082469) navi_slider_pane_g

0x4170,	// (0x000771c0) aid_levels_zoom

0x4178,	// (0x000771c8) zooming_pane_g1

0x4180,	// (0x000771d0) zooming_pane_g2

0x4180,	// (0x000771d0) zooming_pane_g3

0x0002,

0xf428,	// (0x00082478) zooming_pane_g

0x4188,	// (0x000771d8) level_10_zoom

0x4191,	// (0x000771e1) level_11_zoom

0x419a,	// (0x000771ea) level_1_zoom

0x41a3,	// (0x000771f3) level_2_zoom

0x41ac,	// (0x000771fc) level_3_zoom

0x41b5,	// (0x00077205) level_4_zoom

0x41be,	// (0x0007720e) level_5_zoom

0x41c7,	// (0x00077217) level_6_zoom

0x41d0,	// (0x00077220) level_7_zoom

0x41d9,	// (0x00077229) level_8_zoom

0x41e2,	// (0x00077232) level_9_zoom

0x41f3,	// (0x00077243) popup_phob_thumbnail_window_g1

0x41fb,	// (0x0007724b) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0008247f) popup_phob_thumbnail_window_g

0xbad4,	// (0x0007eb24) level_1_location

0xbadc,	// (0x0007eb2c) level_2_location

0xbae4,	// (0x0007eb34) level_3_location

0xbaec,	// (0x0007eb3c) level_4_location

0x4144,	// (0x00077194) level_5_location

0x4203,	// (0x00077253) mce_icon_pane_g1

0x420b,	// (0x0007725b) mce_icon_pane_g2

0x0001,

0xf434,	// (0x00082484) mce_icon_pane_g

0x4213,	// (0x00077263) main_mup_pane_g1_ParamLimits

0x4213,	// (0x00077263) main_mup_pane_g1

0x4229,	// (0x00077279) main_mup_pane_g2_ParamLimits

0x4229,	// (0x00077279) main_mup_pane_g2

0x4241,	// (0x00077291) main_mup_pane_g3_ParamLimits

0x4241,	// (0x00077291) main_mup_pane_g3

0x4259,	// (0x000772a9) main_mup_pane_g4_ParamLimits

0x4259,	// (0x000772a9) main_mup_pane_g4

0x4271,	// (0x000772c1) main_mup_pane_g5_ParamLimits

0x4271,	// (0x000772c1) main_mup_pane_g5

0x428d,	// (0x000772dd) main_mup_pane_g6_ParamLimits

0x428d,	// (0x000772dd) main_mup_pane_g6

0x42a5,	// (0x000772f5) main_mup_pane_g7_ParamLimits

0x42a5,	// (0x000772f5) main_mup_pane_g7

0x42bd,	// (0x0007730d) main_mup_pane_g8_ParamLimits

0x42bd,	// (0x0007730d) main_mup_pane_g8

0x42d7,	// (0x00077327) main_mup_pane_g9_ParamLimits

0x42d7,	// (0x00077327) main_mup_pane_g9

0x42f1,	// (0x00077341) main_mup_pane_g10_ParamLimits

0x42f1,	// (0x00077341) main_mup_pane_g10

0x430b,	// (0x0007735b) main_mup_pane_g11_ParamLimits

0x430b,	// (0x0007735b) main_mup_pane_g11

0x431f,	// (0x0007736f) main_mup_pane_g12_ParamLimits

0x431f,	// (0x0007736f) main_mup_pane_g12

0x4335,	// (0x00077385) main_mup_pane_g13_ParamLimits

0x4335,	// (0x00077385) main_mup_pane_g13

0x000c,

0xf439,	// (0x00082489) main_mup_pane_g_ParamLimits

0xf439,	// (0x00082489) main_mup_pane_g

0x4349,	// (0x00077399) main_mup_pane_t1_ParamLimits

0x4349,	// (0x00077399) main_mup_pane_t1

0x4363,	// (0x000773b3) main_mup_pane_t2_ParamLimits

0x4363,	// (0x000773b3) main_mup_pane_t2

0x437b,	// (0x000773cb) main_mup_pane_t3_ParamLimits

0x437b,	// (0x000773cb) main_mup_pane_t3

0x4393,	// (0x000773e3) main_mup_pane_t4_ParamLimits

0x4393,	// (0x000773e3) main_mup_pane_t4

0x43b1,	// (0x00077401) main_mup_pane_t5_ParamLimits

0x43b1,	// (0x00077401) main_mup_pane_t5

0x43c6,	// (0x00077416) main_mup_pane_t6_ParamLimits

0x43c6,	// (0x00077416) main_mup_pane_t6

0x0005,

0xf454,	// (0x000824a4) main_mup_pane_t_ParamLimits

0xf454,	// (0x000824a4) main_mup_pane_t

0x43d8,	// (0x00077428) mup_progress_pane_ParamLimits

0x43d8,	// (0x00077428) mup_progress_pane

0x43e4,	// (0x00077434) mup_visualizer_pane_ParamLimits

0x43e4,	// (0x00077434) mup_visualizer_pane

0x4414,	// (0x00077464) mup_volume_pane_ParamLimits

0x4414,	// (0x00077464) mup_volume_pane

0x4432,	// (0x00077482) mup_visualizer_pane_g1_ParamLimits

0x4432,	// (0x00077482) mup_visualizer_pane_g1

0x4432,	// (0x00077482) mup_visualizer_pane_g2_ParamLimits

0x4432,	// (0x00077482) mup_visualizer_pane_g2

0x3efe,	// (0x00076f4e) mup_visualizer_pane_g3_ParamLimits

0x3efe,	// (0x00076f4e) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x000824b1) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x000824b1) mup_visualizer_pane_g

0xf046,	// (0x00082096) mup_volume_pane_g1

0x4448,	// (0x00077498) mup_volume_pane_g2

0x0001,

0xf468,	// (0x000824b8) mup_volume_pane_g

0xf046,	// (0x00082096) mup_progress_pane_g1

0x4451,	// (0x000774a1) mup_progress_pane_g2

0x445a,	// (0x000774aa) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x000824bd) mup_progress_pane_g

0xecbf,	// (0x00081d0f) bg_popup_window_pane_cp05

0x4463,	// (0x000774b3) heading_pane_cp02_ParamLimits

0x4463,	// (0x000774b3) heading_pane_cp02

0x447d,	// (0x000774cd) list_popup_blid_pane

0x4485,	// (0x000774d5) list_blid_sat_info_pane_ParamLimits

0x4485,	// (0x000774d5) list_blid_sat_info_pane

0x4498,	// (0x000774e8) list_blid_sat_info_pane_g1

0x44a0,	// (0x000774f0) list_blid_sat_info_pane_t1

0x45a6,	// (0x000775f6) mup_equalizer_pane_ParamLimits

0x45a6,	// (0x000775f6) mup_equalizer_pane

0x45bf,	// (0x0007760f) mup_equalizer_pane_cp1_ParamLimits

0x45bf,	// (0x0007760f) mup_equalizer_pane_cp1

0x45dc,	// (0x0007762c) mup_equalizer_pane_cp2_ParamLimits

0x45dc,	// (0x0007762c) mup_equalizer_pane_cp2

0x45f9,	// (0x00077649) mup_equalizer_pane_cp3_ParamLimits

0x45f9,	// (0x00077649) mup_equalizer_pane_cp3

0x461a,	// (0x0007766a) mup_equalizer_pane_cp4_ParamLimits

0x461a,	// (0x0007766a) mup_equalizer_pane_cp4

0x463b,	// (0x0007768b) mup_equalizer_pane_cp5

0x464f,	// (0x0007769f) mup_equalizer_pane_cp6

0x4663,	// (0x000776b3) mup_equalizer_pane_cp7

0xb9f2,	// (0x0007ea42) bg_popup_call_poc_act_pane_g9

0xb9fa,	// (0x0007ea4a) bg_popup_call_poc_act_pane_g10

0xba02,	// (0x0007ea52) bg_popup_call_poc_act_pane_g11

0x000a,

0xef1a,	// (0x00081f6a) mup_scale_pane

0xf046,	// (0x00082096) mup_scale_pane_g1

0x4677,	// (0x000776c7) mup_scale_pane_g2

0x0006,

0xf489,	// (0x000824d9) mup_scale_pane_g

0x46ad,	// (0x000776fd) msg_data_pane

0x46b5,	// (0x00077705) scroll_pane_cp017

0x0dd9,	// (0x00073e29) bg_list_pane_cp04_ParamLimits

0x0dd9,	// (0x00073e29) bg_list_pane_cp04

0x46bd,	// (0x0007770d) msg_data_pane_g1

0x46c5,	// (0x00077715) msg_data_pane_g2

0x46cf,	// (0x0007771f) msg_data_pane_g3

0x46d7,	// (0x00077727) msg_data_pane_g4

0x46df,	// (0x0007772f) msg_data_pane_g5

0x46e7,	// (0x00077737) msg_data_pane_g6

0x46ef,	// (0x0007773f) msg_data_pane_g7

0x0006,

0xf498,	// (0x000824e8) msg_data_pane_g

0x0df9,	// (0x00073e49) msg_text_pane_ParamLimits

0x0df9,	// (0x00073e49) msg_text_pane

0x46f7,	// (0x00077747) qrid_highlight_pane_cp011_ParamLimits

0x46f7,	// (0x00077747) qrid_highlight_pane_cp011

0xecbf,	// (0x00081d0f) msg_body_pane

0xecbf,	// (0x00081d0f) msg_header_pane

0x4716,	// (0x00077766) input_focus_pane_cp07

0x0e29,	// (0x00073e79) msg_header_pane_t1_ParamLimits

0x0e29,	// (0x00073e79) msg_header_pane_t1

0x0e3d,	// (0x00073e8d) msg_header_pane_t2_ParamLimits

0x0e3d,	// (0x00073e8d) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x000824fc) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x000824fc) msg_header_pane_t

0x472b,	// (0x0007777b) msg_body_pane_g1

0x0e4f,	// (0x00073e9f) msg_body_pane_t1_ParamLimits

0x0e4f,	// (0x00073e9f) msg_body_pane_t1

0x0e80,	// (0x00073ed0) msg_body_pane_t2_ParamLimits

0x0e80,	// (0x00073ed0) msg_body_pane_t2

0x0e92,	// (0x00073ee2) msg_body_pane_t3_ParamLimits

0x0e92,	// (0x00073ee2) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x00082501) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x00082501) msg_body_pane_t

0x476d,	// (0x000777bd) main_viewer_pane_g1_ParamLimits

0x476d,	// (0x000777bd) main_viewer_pane_g1

0x477b,	// (0x000777cb) main_viewer_pane_g2_ParamLimits

0x477b,	// (0x000777cb) main_viewer_pane_g2

0x4789,	// (0x000777d9) main_viewer_pane_g3_ParamLimits

0x4789,	// (0x000777d9) main_viewer_pane_g3

0x4798,	// (0x000777e8) main_viewer_pane_g4_ParamLimits

0x4798,	// (0x000777e8) main_viewer_pane_g4

0xade5,	// (0x0007de35) main_viewer_pane_g5_ParamLimits

0xade5,	// (0x0007de35) main_viewer_pane_g5

0xade5,	// (0x0007de35) main_viewer_pane_g7_ParamLimits

0xade5,	// (0x0007de35) main_viewer_pane_g7

0xadf7,	// (0x0007de47) main_viewer_pane_g8_ParamLimits

0xadf7,	// (0x0007de47) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x00082511) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x00082511) main_viewer_pane_g

0x47a7,	// (0x000777f7) viewer_content_pane_ParamLimits

0x47a7,	// (0x000777f7) viewer_content_pane

0x47e2,	// (0x00077832) main_postcard_pane_g1_ParamLimits

0x47e2,	// (0x00077832) main_postcard_pane_g1

0x47f8,	// (0x00077848) main_postcard_pane_g2_ParamLimits

0x47f8,	// (0x00077848) main_postcard_pane_g2

0x480e,	// (0x0007785e) main_postcard_pane_g3_ParamLimits

0x480e,	// (0x0007785e) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x00082522) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x00082522) main_postcard_pane_g

0x4825,	// (0x00077875) main_postcard_pane_g4

0xbc07,	// (0x0007ec57) smil_status_volume_pane_g2

0x4868,	// (0x000778b8) postcard_pane_ParamLimits

0x4868,	// (0x000778b8) postcard_pane

0x48aa,	// (0x000778fa) postcard_pane_g1_ParamLimits

0x48aa,	// (0x000778fa) postcard_pane_g1

0x48b8,	// (0x00077908) postcard_pane_g2_ParamLimits

0x48b8,	// (0x00077908) postcard_pane_g2

0x48c4,	// (0x00077914) postcard_pane_g3_ParamLimits

0x48c4,	// (0x00077914) postcard_pane_g3

0x48d0,	// (0x00077920) postcard_pane_g4_ParamLimits

0x48d0,	// (0x00077920) postcard_pane_g4

0x48de,	// (0x0007792e) postcard_pane_g5_ParamLimits

0x48de,	// (0x0007792e) postcard_pane_g5

0x48f3,	// (0x00077943) postcard_pane_g6_ParamLimits

0x48f3,	// (0x00077943) postcard_pane_g6

0x48aa,	// (0x000778fa) postcard_pane_g7_ParamLimits

0x48aa,	// (0x000778fa) postcard_pane_g7

0x0006,

0xf4df,	// (0x0008252f) postcard_pane_g_ParamLimits

0xf4df,	// (0x0008252f) postcard_pane_g

0x4907,	// (0x00077957) main_mp2_pane_g1_ParamLimits

0x4907,	// (0x00077957) main_mp2_pane_g1

0x4913,	// (0x00077963) main_mp2_pane_g2_ParamLimits

0x4913,	// (0x00077963) main_mp2_pane_g2

0x491f,	// (0x0007796f) main_mp2_pane_g3_ParamLimits

0x491f,	// (0x0007796f) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0008253e) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0008253e) main_mp2_pane_g

0x492b,	// (0x0007797b) main_mp2_pane_t1_ParamLimits

0x492b,	// (0x0007797b) main_mp2_pane_t1

0x4940,	// (0x00077990) main_mp2_pane_t2_ParamLimits

0x4940,	// (0x00077990) main_mp2_pane_t2

0x4952,	// (0x000779a2) main_mp2_pane_t3_ParamLimits

0x4952,	// (0x000779a2) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x00082545) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x00082545) main_mp2_pane_t

0x4964,	// (0x000779b4) pec_content_pane_ParamLimits

0x4964,	// (0x000779b4) pec_content_pane

0x2c3f,	// (0x00075c8f) scroll_pane_cp015

0x4976,	// (0x000779c6) pec_attribute_pane_ParamLimits

0x4976,	// (0x000779c6) pec_attribute_pane

0x4986,	// (0x000779d6) pec_content_pane_g1_ParamLimits

0x4986,	// (0x000779d6) pec_content_pane_g1

0x4992,	// (0x000779e2) pec_content_pane_t1_ParamLimits

0x4992,	// (0x000779e2) pec_content_pane_t1

0x49a4,	// (0x000779f4) pec_content_pane_t2_ParamLimits

0x49a4,	// (0x000779f4) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0008254c) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0008254c) pec_content_pane_t

0x49b6,	// (0x00077a06) list_single_graphic_pane_cp01_ParamLimits

0x49b6,	// (0x00077a06) list_single_graphic_pane_cp01

0xef1a,	// (0x00081f6a) bg_popup_sub_pane_cp04

0x49cb,	// (0x00077a1b) popup_mup_playback_window_g1

0x49d7,	// (0x00077a27) popup_mup_playback_window_t1

0x49ec,	// (0x00077a3c) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00082551) popup_mup_playback_window_t

0x4a41,	// (0x00077a91) main_image_pane_g1_ParamLimits

0x4a41,	// (0x00077a91) main_image_pane_g1

0x4b1e,	// (0x00077b6e) scroll_pane_cp018_ParamLimits

0x4b1e,	// (0x00077b6e) scroll_pane_cp018

0x4b36,	// (0x00077b86) scroll_pane_cp016_ParamLimits

0x4b36,	// (0x00077b86) scroll_pane_cp016

0x4b6a,	// (0x00077bba) smil2_image_pane_ParamLimits

0x4b6a,	// (0x00077bba) smil2_image_pane

0x4b9a,	// (0x00077bea) smil2_root_pane_ParamLimits

0x4b9a,	// (0x00077bea) smil2_root_pane

0x4bd2,	// (0x00077c22) smil2_text_pane_ParamLimits

0x4bd2,	// (0x00077c22) smil2_text_pane

0xecbf,	// (0x00081d0f) bg_list_pane_cp06

0x4c5a,	// (0x00077caa) grid_radio_pane

0xecbf,	// (0x00081d0f) bg_popup_window_pane_cp06

0x4c62,	// (0x00077cb2) main_fmradio_pane_t1

0x3b6f,	// (0x00076bbf) heading_pane_cp04

0x4c70,	// (0x00077cc0) main_fmradio_pane_t2

0xba0a,	// (0x0007ea5a) popup_cale_lunar_info_window_g1

0x4c7e,	// (0x00077cce) main_fmradio_pane_t3

0xba12,	// (0x0007ea62) popup_cale_lunar_info_window_g2

0x4c8c,	// (0x00077cdc) main_fmradio_pane_t4

0x0001,

0x4c9a,	// (0x00077cea) main_fmradio_pane_t5

0x0004,

0xf5d5,	// (0x00082625) popup_cale_lunar_info_window_g

0xf516,	// (0x00082566) main_fmradio_pane_t

0x4ca8,	// (0x00077cf8) wait_bar_pane_cp03

0x4cb0,	// (0x00077d00) cell_fmradio_pane_ParamLimits

0x4cb0,	// (0x00077d00) cell_fmradio_pane

0x48aa,	// (0x000778fa) cell_fmradio_pane_g1_ParamLimits

0x48aa,	// (0x000778fa) cell_fmradio_pane_g1

0xecbf,	// (0x00081d0f) grid_highlight_pane_cp011

0x4cc3,	// (0x00077d13) poc_content_pane_ParamLimits

0x4cc3,	// (0x00077d13) poc_content_pane

0x4cd5,	// (0x00077d25) scroll_pane_cp019

0x4cdd,	// (0x00077d2d) popup_call_poc_act_window_ParamLimits

0x4cdd,	// (0x00077d2d) popup_call_poc_act_window

0x4d01,	// (0x00077d51) popup_call_poc_inact_window_ParamLimits

0x4d01,	// (0x00077d51) popup_call_poc_inact_window

0xf5ac,	// (0x000825fc) bg_popup_call_poc_act_pane_g

0xb982,	// (0x0007e9d2) bg_popup_call_poc_inact_pane_g1

0xb98a,	// (0x0007e9da) bg_popup_call_poc_inact_pane_g2

0x4d1a,	// (0x00077d6a) popup_call_poc_act_window_g2

0xb992,	// (0x0007e9e2) bg_popup_call_poc_inact_pane_g3

0xb99a,	// (0x0007e9ea) bg_popup_call_poc_inact_pane_g4

0xb9a2,	// (0x0007e9f2) bg_popup_call_poc_inact_pane_g5

0x4d22,	// (0x00077d72) popup_call_poc_act_window_t1_ParamLimits

0x4d22,	// (0x00077d72) popup_call_poc_act_window_t1

0x4d4a,	// (0x00077d9a) popup_call_poc_act_window_t2_ParamLimits

0x4d4a,	// (0x00077d9a) popup_call_poc_act_window_t2

0x4d72,	// (0x00077dc2) popup_call_poc_act_window_t3_ParamLimits

0x4d72,	// (0x00077dc2) popup_call_poc_act_window_t3

0x4d9a,	// (0x00077dea) popup_call_poc_act_window_t4_ParamLimits

0x4d9a,	// (0x00077dea) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00082571) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00082571) popup_call_poc_act_window_t

0xb9aa,	// (0x0007e9fa) bg_popup_call_poc_inact_pane_g6

0xb9b2,	// (0x0007ea02) bg_popup_call_poc_inact_pane_g7

0xb9ba,	// (0x0007ea0a) bg_popup_call_poc_inact_pane_g8

0x4dac,	// (0x00077dfc) popup_call_poc_inact_window_g2

0xb9c2,	// (0x0007ea12) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf599,	// (0x000825e9) bg_popup_call_poc_inact_pane_g

0x4db4,	// (0x00077e04) popup_call_poc_inact_window_t1_ParamLimits

0x4db4,	// (0x00077e04) popup_call_poc_inact_window_t1

0x4dc9,	// (0x00077e19) popup_call_poc_inact_window_t2_ParamLimits

0x4dc9,	// (0x00077e19) popup_call_poc_inact_window_t2

0x4dde,	// (0x00077e2e) popup_call_poc_inact_window_t3_ParamLimits

0x4dde,	// (0x00077e2e) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0008257a) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0008257a) popup_call_poc_inact_window_t

0xbb7a,	// (0x0007ebca) context_pane_ParamLimits

0x5891,	// (0x000788e1) signal_pane_ParamLimits

0x4144,	// (0x00077194) main_call2_pane

0xbb68,	// (0x0007ebb8) popup_phob_thumbnail2_window_ParamLimits

0xbb68,	// (0x0007ebb8) popup_phob_thumbnail2_window

0xadcd,	// (0x0007de1d) aid_hotspot_pointer_arrow_pane

0xadd5,	// (0x0007de25) aid_hotspot_pointer_hand_pane

0x53a7,	// (0x000783f7) phob_pre_status_pane_g5

0x23a4,	// (0x000753f4) cams_zoom_pane_ParamLimits

0x23b3,	// (0x00075403) image_vga_pane_ParamLimits

0x23cd,	// (0x0007541d) main_camera_pane_g1_ParamLimits

0x23df,	// (0x0007542f) main_camera_pane_g2_ParamLimits

0x23ef,	// (0x0007543f) main_camera_pane_g3_ParamLimits

0x23ff,	// (0x0007544f) main_camera_pane_g4_ParamLimits

0x240f,	// (0x0007545f) main_camera_pane_g5_ParamLimits

0x241f,	// (0x0007546f) main_camera_pane_g6_ParamLimits

0x2431,	// (0x00075481) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0008227e) main_camera_pane_g_ParamLimits

0x244d,	// (0x0007549d) main_camera_pane_t1_ParamLimits

0x2463,	// (0x000754b3) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0008228f) main_camera_pane_t_ParamLimits

0xef1a,	// (0x00081f6a) bg_popup_preview_window_pane_cp01_ParamLimits

0xef1a,	// (0x00081f6a) bg_popup_preview_window_pane_cp01

0x4df3,	// (0x00077e43) popup_phob_thumbnail2_window_g1_ParamLimits

0x4df3,	// (0x00077e43) popup_phob_thumbnail2_window_g1

0xecbf,	// (0x00081d0f) call2_cli_visual_pane

0x4e1a,	// (0x00077e6a) popup_call2_audio_conf_window_ParamLimits

0x4e1a,	// (0x00077e6a) popup_call2_audio_conf_window

0x4e3a,	// (0x00077e8a) popup_call2_audio_first_window_ParamLimits

0x4e3a,	// (0x00077e8a) popup_call2_audio_first_window

0x4ed0,	// (0x00077f20) popup_call2_audio_in_window_ParamLimits

0x4ed0,	// (0x00077f20) popup_call2_audio_in_window

0x4f18,	// (0x00077f68) popup_call2_audio_out_window_ParamLimits

0x4f18,	// (0x00077f68) popup_call2_audio_out_window

0x4f82,	// (0x00077fd2) popup_call2_audio_second_window_ParamLimits

0x4f82,	// (0x00077fd2) popup_call2_audio_second_window

0x4fe8,	// (0x00078038) popup_call2_audio_wait_window_ParamLimits

0x4fe8,	// (0x00078038) popup_call2_audio_wait_window

0xecbf,	// (0x00081d0f) bg_popup_call2_act_pane_cp03

0xeefc,	// (0x00081f4c) list_conf_pane_cp

0x5022,	// (0x00078072) popup_call2_audio_conf_window_t1

0x3bf0,	// (0x00076c40) list_single_graphic_popup_conf2_pane_ParamLimits

0x3bf0,	// (0x00076c40) list_single_graphic_popup_conf2_pane

0x3c03,	// (0x00076c53) list_highlight_pane_cp04

0x5030,	// (0x00078080) list_single_graphic_popup_conf2_pane_g1

0x3c14,	// (0x00076c64) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x00082581) list_single_graphic_popup_conf2_pane_g

0x503a,	// (0x0007808a) list_single_graphic_popup_conf2_pane_t1

0x5048,	// (0x00078098) bg_popup_call2_act_pane_cp01_ParamLimits

0x5048,	// (0x00078098) bg_popup_call2_act_pane_cp01

0x50d2,	// (0x00078122) call_type_pane_cp05_ParamLimits

0x50d2,	// (0x00078122) call_type_pane_cp05

0x5126,	// (0x00078176) popup_call2_audio_second_window_g1_ParamLimits

0x5126,	// (0x00078176) popup_call2_audio_second_window_g1

0x517a,	// (0x000781ca) popup_call2_audio_second_window_g2_ParamLimits

0x517a,	// (0x000781ca) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x00082586) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x00082586) popup_call2_audio_second_window_g

0x51df,	// (0x0007822f) popup_call2_audio_second_window_t1_ParamLimits

0x51df,	// (0x0007822f) popup_call2_audio_second_window_t1

0xae0f,	// (0x0007de5f) popup_call2_audio_second_window_t2_ParamLimits

0xae0f,	// (0x0007de5f) popup_call2_audio_second_window_t2

0xae62,	// (0x0007deb2) popup_call2_audio_second_window_t3_ParamLimits

0xae62,	// (0x0007deb2) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0008258d) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0008258d) popup_call2_audio_second_window_t

0xecbf,	// (0x00081d0f) bg_popup_call2_in_pane_cp02

0xecc9,	// (0x00081d19) call_type_pane_cp04

0xecd1,	// (0x00081d21) popup_call2_audio_wait_window_g1

0xecd9,	// (0x00081d29) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008216b) popup_call2_audio_wait_window_g

0xece1,	// (0x00081d31) popup_call2_audio_wait_window_t3

0xaf55,	// (0x0007dfa5) bg_popup_call2_act_pane_ParamLimits

0xaf55,	// (0x0007dfa5) bg_popup_call2_act_pane

0xb015,	// (0x0007e065) call_type_pane_cp03_ParamLimits

0xb015,	// (0x0007e065) call_type_pane_cp03

0xb079,	// (0x0007e0c9) popup_call2_audio_first_window_g1_ParamLimits

0xb079,	// (0x0007e0c9) popup_call2_audio_first_window_g1

0xb0e9,	// (0x0007e139) popup_call2_audio_first_window_g2_ParamLimits

0xb0e9,	// (0x0007e139) popup_call2_audio_first_window_g2

0x4432,	// (0x00077482) popup_call2_audio_first_window_g3_ParamLimits

0x4432,	// (0x00077482) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x00082596) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x00082596) popup_call2_audio_first_window_g

0xb1c7,	// (0x0007e217) popup_call2_audio_first_window_t1_ParamLimits

0xb1c7,	// (0x0007e217) popup_call2_audio_first_window_t1

0xb2ca,	// (0x0007e31a) popup_call2_audio_first_window_t4_ParamLimits

0xb2ca,	// (0x0007e31a) popup_call2_audio_first_window_t4

0xb3ad,	// (0x0007e3fd) popup_call2_audio_first_window_t5_ParamLimits

0xb3ad,	// (0x0007e3fd) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x000825a1) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x000825a1) popup_call2_audio_first_window_t

0xef12,	// (0x00081f62) bg_popup_call2_act_pane_g1

0xba1a,	// (0x0007ea6a) popup_cale_lunar_info_window_t1

0xba28,	// (0x0007ea78) popup_cale_lunar_info_window_t2

0xba36,	// (0x0007ea86) popup_cale_lunar_info_window_t3

0xecbf,	// (0x00081d0f) bg_popup_call2_bubble_pane

0xb4ae,	// (0x0007e4fe) bg_popup_call2_in_pane_cp01_ParamLimits

0xb4ae,	// (0x0007e4fe) bg_popup_call2_in_pane_cp01

0xe99b,	// (0x000819eb) call_type_pane_cp02

0xb4f6,	// (0x0007e546) popup_call2_audio_out_window_g1_ParamLimits

0xb4f6,	// (0x0007e546) popup_call2_audio_out_window_g1

0xb522,	// (0x0007e572) popup_call2_audio_out_window_g2_ParamLimits

0xb522,	// (0x0007e572) popup_call2_audio_out_window_g2

0xb54a,	// (0x0007e59a) popup_call2_audio_out_window_g3_ParamLimits

0xb54a,	// (0x0007e59a) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x000825aa) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x000825aa) popup_call2_audio_out_window_g

0xb585,	// (0x0007e5d5) popup_call2_audio_out_window_t1_ParamLimits

0xb585,	// (0x0007e5d5) popup_call2_audio_out_window_t1

0xb5e4,	// (0x0007e634) popup_call2_audio_out_window_t2_ParamLimits

0xb5e4,	// (0x0007e634) popup_call2_audio_out_window_t2

0xb638,	// (0x0007e688) popup_call2_audio_out_window_t3_ParamLimits

0xb638,	// (0x0007e688) popup_call2_audio_out_window_t3

0xb64e,	// (0x0007e69e) popup_call2_audio_out_window_t4_ParamLimits

0xb64e,	// (0x0007e69e) popup_call2_audio_out_window_t4

0xb664,	// (0x0007e6b4) popup_call2_audio_out_window_t5_ParamLimits

0xb664,	// (0x0007e6b4) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x000825b3) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x000825b3) popup_call2_audio_out_window_t

0xb6c8,	// (0x0007e718) bg_popup_call2_in_pane_ParamLimits

0xb6c8,	// (0x0007e718) bg_popup_call2_in_pane

0xb724,	// (0x0007e774) popup_call2_audio_in_window_g1_ParamLimits

0xb724,	// (0x0007e774) popup_call2_audio_in_window_g1

0xb75c,	// (0x0007e7ac) popup_call2_audio_in_window_g2_ParamLimits

0xb75c,	// (0x0007e7ac) popup_call2_audio_in_window_g2

0xb794,	// (0x0007e7e4) popup_call2_audio_in_window_g3_ParamLimits

0xb794,	// (0x0007e7e4) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x000825c0) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x000825c0) popup_call2_audio_in_window_g

0xb7ec,	// (0x0007e83c) popup_call2_audio_in_window_t1_ParamLimits

0xb7ec,	// (0x0007e83c) popup_call2_audio_in_window_t1

0xb86c,	// (0x0007e8bc) popup_call2_audio_in_window_t2_ParamLimits

0xb86c,	// (0x0007e8bc) popup_call2_audio_in_window_t2

0xb8ec,	// (0x0007e93c) popup_call2_audio_in_window_t3_ParamLimits

0xb8ec,	// (0x0007e93c) popup_call2_audio_in_window_t3

0xb906,	// (0x0007e956) popup_call2_audio_in_window_t4_ParamLimits

0xb906,	// (0x0007e956) popup_call2_audio_in_window_t4

0xb918,	// (0x0007e968) popup_call2_audio_in_window_t5_ParamLimits

0xb918,	// (0x0007e968) popup_call2_audio_in_window_t5

0xb92d,	// (0x0007e97d) popup_call2_audio_in_window_t6_ParamLimits

0xb92d,	// (0x0007e97d) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x000825c9) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x000825c9) popup_call2_audio_in_window_t

0xef12,	// (0x00081f62) bg_popup_call2_in_pane_g1

0xba44,	// (0x0007ea94) popup_cale_lunar_info_window_t4

0x0003,

0xf5da,	// (0x0008262a) popup_cale_lunar_info_window_t

0xef1a,	// (0x00081f6a) bg_popup_call2_rect_pane_ParamLimits

0xef1a,	// (0x00081f6a) bg_popup_call2_rect_pane

0xecbf,	// (0x00081d0f) call2_cli_visual_graphic_pane

0xecbf,	// (0x00081d0f) call2_cli_visual_text_pane

0xbc1a,	// (0x0007ec6a) smil_status_volume_pane_g3

0x0002,

0xf046,	// (0x00082096) call2_cli_visual_graphic_pane_g1

0xf046,	// (0x00082096) call2_cli_visual_graphic_pane_g2

0xf046,	// (0x00082096) call2_cli_visual_graphic_pane_g3

0x0002,

0x033c,	// (0x0007338c) call2_cli_visual_graphic_pane_g

0xb942,	// (0x0007e992) bg_popup_call2_rect_pane_g1

0xf0d2,	// (0x00082122) bg_popup_call2_rect_pane_g2

0xb94a,	// (0x0007e99a) bg_popup_call2_rect_pane_g3

0xb952,	// (0x0007e9a2) bg_popup_call2_rect_pane_g4

0xb95a,	// (0x0007e9aa) bg_popup_call2_rect_pane_g5

0xb962,	// (0x0007e9b2) bg_popup_call2_rect_pane_g6

0xb96a,	// (0x0007e9ba) bg_popup_call2_rect_pane_g7

0xb972,	// (0x0007e9c2) bg_popup_call2_rect_pane_g8

0xb97a,	// (0x0007e9ca) bg_popup_call2_rect_pane_g9

0x0008,

0xf586,	// (0x000825d6) bg_popup_call2_rect_pane_g

0xb982,	// (0x0007e9d2) bg_popup_call2_bubble_pane_g1

0xb98a,	// (0x0007e9da) bg_popup_call2_bubble_pane_g2

0xb992,	// (0x0007e9e2) bg_popup_call2_bubble_pane_g3

0xb99a,	// (0x0007e9ea) bg_popup_call2_bubble_pane_g4

0xb9a2,	// (0x0007e9f2) bg_popup_call2_bubble_pane_g5

0xb9aa,	// (0x0007e9fa) bg_popup_call2_bubble_pane_g6

0xb9b2,	// (0x0007ea02) bg_popup_call2_bubble_pane_g7

0xb9ba,	// (0x0007ea0a) bg_popup_call2_bubble_pane_g8

0xb9c2,	// (0x0007ea12) bg_popup_call2_bubble_pane_g9

0x0008,

0xf599,	// (0x000825e9) bg_popup_call2_bubble_pane_g

0x1eab,	// (0x00074efb) aid_cale_week_size_cell_pane

0x2479,	// (0x000754c9) aid_cams_cif_uncrop_pane_ParamLimits

0x2479,	// (0x000754c9) aid_cams_cif_uncrop_pane

0x2670,	// (0x000756c0) aid_cams_size_cell_ParamLimits

0x2670,	// (0x000756c0) aid_cams_size_cell

0x2684,	// (0x000756d4) grid_cams_pane_ParamLimits

0x269e,	// (0x000756ee) linegrid_cams_pane_ParamLimits

0x27d2,	// (0x00075822) call_video_pane_t1

0x27f0,	// (0x00075840) call_video_pane_t2

0x0001,

0xf292,	// (0x000822e2) call_video_pane_t

0x2e7e,	// (0x00075ece) aid_cale_month_size_cell_pane_ParamLimits

0x2e7e,	// (0x00075ece) aid_cale_month_size_cell_pane

0xf623,	// (0x00082673) smil_status_volume_pane_g

0xbc27,	// (0x0007ec77) volume_smil_pane_ParamLimits

0xaa7e,	// (0x0007dace) aid_popup2_width_pane

0x1e01,	// (0x00074e51) cell_qdial_pane_g4_ParamLimits

0x1e01,	// (0x00074e51) cell_qdial_pane_g4

0x3ede,	// (0x00076f2e) aid_blid_cardinal_pane_ParamLimits

0x3eea,	// (0x00076f3a) aid_blid_destination_pane_ParamLimits

0x3eea,	// (0x00076f3a) aid_blid_destination_pane

0xef1a,	// (0x00081f6a) bg_popup_call_poc_act_pane_ParamLimits

0xef1a,	// (0x00081f6a) bg_popup_call_poc_act_pane

0xef1a,	// (0x00081f6a) bg_popup_call_poc_inact_pane_ParamLimits

0xef1a,	// (0x00081f6a) bg_popup_call_poc_inact_pane

0xb9ca,	// (0x0007ea1a) bg_popup_call_poc_act_pane_g1

0xb9d2,	// (0x0007ea22) bg_popup_call_poc_act_pane_g2

0xb9da,	// (0x0007ea2a) bg_popup_call_poc_act_pane_g3

0xb99a,	// (0x0007e9ea) bg_popup_call_poc_act_pane_g4

0xb9a2,	// (0x0007e9f2) bg_popup_call_poc_act_pane_g5

0xb9e2,	// (0x0007ea32) bg_popup_call_poc_act_pane_g6

0xb9b2,	// (0x0007ea02) bg_popup_call_poc_act_pane_g7

0xb9ea,	// (0x0007ea3a) bg_popup_call_poc_act_pane_g8

0xecbf,	// (0x00081d0f) main_usb_pane

0xbb43,	// (0x0007eb93) popup_cale_lunar_info_window

0x2b26,	// (0x00075b76) im_reading_pane_t1_ParamLimits

0x2b5f,	// (0x00075baf) list_im_pane_ParamLimits

0x2b70,	// (0x00075bc0) scroll_pane_cp07_ParamLimits

0xecbf,	// (0x00081d0f) grid_highlight_pane_cp012

0xef1a,	// (0x00081f6a) mup_scale_pane_ParamLimits

0x48aa,	// (0x000778fa) main_usb_pane_g1_ParamLimits

0x48aa,	// (0x000778fa) main_usb_pane_g1

0x52bc,	// (0x0007830c) main_usb_pane_g2_ParamLimits

0x52bc,	// (0x0007830c) main_usb_pane_g2

0x0001,

0xf5c3,	// (0x00082613) main_usb_pane_g_ParamLimits

0xf5c3,	// (0x00082613) main_usb_pane_g

0x52d2,	// (0x00078322) main_usb_pane_t1_ParamLimits

0x52d2,	// (0x00078322) main_usb_pane_t1

0x52e4,	// (0x00078334) main_usb_pane_t2_ParamLimits

0x52e4,	// (0x00078334) main_usb_pane_t2

0x52f6,	// (0x00078346) main_usb_pane_t3_ParamLimits

0x52f6,	// (0x00078346) main_usb_pane_t3

0x5308,	// (0x00078358) main_usb_pane_t4_ParamLimits

0x5308,	// (0x00078358) main_usb_pane_t4

0x531a,	// (0x0007836a) main_usb_pane_t5_ParamLimits

0x531a,	// (0x0007836a) main_usb_pane_t5

0x532c,	// (0x0007837c) main_usb_pane_t6_ParamLimits

0x532c,	// (0x0007837c) main_usb_pane_t6

0x0005,

0xf5c8,	// (0x00082618) main_usb_pane_t_ParamLimits

0x3e8d,	// (0x00076edd) aid_text_placing

0x3e96,	// (0x00076ee6) main_location2_pane_t1_ParamLimits

0x3ea8,	// (0x00076ef8) main_location2_pane_t2_ParamLimits

0x3eba,	// (0x00076f0a) main_location2_pane_t3_ParamLimits

0x3ecc,	// (0x00076f1c) main_location2_pane_t4_ParamLimits

0x3ecc,	// (0x00076f1c) main_location2_pane_t4

0xf3ee,	// (0x0008243e) main_location2_pane_t_ParamLimits

0xef56,	// (0x00081fa6) find_pinb_pane_g2_ParamLimits

0xef56,	// (0x00081fa6) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00082191) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00082191) find_pinb_pane_g

0xef62,	// (0x00081fb2) find_pinb_pane_t1_ParamLimits

0xef74,	// (0x00081fc4) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00082196) find_pinb_pane_t_ParamLimits

0xecbf,	// (0x00081d0f) main_call3_pane

0x3217,	// (0x00076267) cale_month_day_heading_pane_t1_ParamLimits

0x3275,	// (0x000762c5) cale_month_day_heading_pane_t2_ParamLimits

0x32da,	// (0x0007632a) cale_month_day_heading_pane_t3_ParamLimits

0x333f,	// (0x0007638f) cale_month_day_heading_pane_t4_ParamLimits

0x33a4,	// (0x000763f4) cale_month_day_heading_pane_t5_ParamLimits

0x3419,	// (0x00076469) cale_month_day_heading_pane_t6_ParamLimits

0x348e,	// (0x000764de) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0008231a) cale_month_day_heading_pane_t_ParamLimits

0x36aa,	// (0x000766fa) smil_status_volume_pane

0x4886,	// (0x000778d6) postcard_address_pane_ParamLimits

0x4886,	// (0x000778d6) postcard_address_pane

0x4898,	// (0x000778e8) postcard_message_pane_ParamLimits

0x4898,	// (0x000778e8) postcard_message_pane

0x529a,	// (0x000782ea) call2_cli_visual_pane_t1_ParamLimits

0x529a,	// (0x000782ea) call2_cli_visual_pane_t1

0x5abe,	// (0x00078b0e) postcard_message_pane_t1_ParamLimits

0x5abe,	// (0x00078b0e) postcard_message_pane_t1

0x5aa7,	// (0x00078af7) postcard_address_pane_t1_ParamLimits

0x5aa7,	// (0x00078af7) postcard_address_pane_t1

0x5a93,	// (0x00078ae3) popup_call3_audio_in_window_ParamLimits

0x5a93,	// (0x00078ae3) popup_call3_audio_in_window

0x591e,	// (0x0007896e) bg_popup_call3_in_pane_ParamLimits

0x591e,	// (0x0007896e) bg_popup_call3_in_pane

0x5994,	// (0x000789e4) popup_call3_audio_in_window_g1_ParamLimits

0x5994,	// (0x000789e4) popup_call3_audio_in_window_g1

0x59b4,	// (0x00078a04) popup_call3_audio_in_window_g2_ParamLimits

0x59b4,	// (0x00078a04) popup_call3_audio_in_window_g2

0x59d4,	// (0x00078a24) popup_call3_audio_in_window_g3_ParamLimits

0x59d4,	// (0x00078a24) popup_call3_audio_in_window_g3

0x0003,

0xf62a,	// (0x0008267a) popup_call3_audio_in_window_g_ParamLimits

0xf62a,	// (0x0008267a) popup_call3_audio_in_window_g

0x5a05,	// (0x00078a55) popup_call3_audio_in_window_t1_ParamLimits

0x5a05,	// (0x00078a55) popup_call3_audio_in_window_t1

0x5a43,	// (0x00078a93) popup_call3_audio_in_window_t2_ParamLimits

0x5a43,	// (0x00078a93) popup_call3_audio_in_window_t2

0x5a81,	// (0x00078ad1) popup_call3_audio_in_window_t3_ParamLimits

0x5a81,	// (0x00078ad1) popup_call3_audio_in_window_t3

0x0002,

0xf633,	// (0x00082683) popup_call3_audio_in_window_t_ParamLimits

0xf633,	// (0x00082683) popup_call3_audio_in_window_t

0x4144,	// (0x00077194) bg_popup_call3_rect_pane

0xb942,	// (0x0007e992) bg_popup_call3_rect_pane_g1

0xf0d2,	// (0x00082122) bg_popup_call3_rect_pane_g2

0xb94a,	// (0x0007e99a) bg_popup_call3_rect_pane_g3

0xb952,	// (0x0007e9a2) bg_popup_call3_rect_pane_g4

0xb95a,	// (0x0007e9aa) bg_popup_call3_rect_pane_g5

0xb962,	// (0x0007e9b2) bg_popup_call3_rect_pane_g6

0xb96a,	// (0x0007e9ba) bg_popup_call3_rect_pane_g7

0x442a,	// (0x0007747a) mup_visualizer_osc_pane

0x4440,	// (0x00077490) mup_visualizer_spec_pane

0x594e,	// (0x0007899e) call3_video_qcif_pane_ParamLimits

0x594e,	// (0x0007899e) call3_video_qcif_pane

0x5961,	// (0x000789b1) call3_video_qcif_uncrop_pane_ParamLimits

0x5961,	// (0x000789b1) call3_video_qcif_uncrop_pane

0x596f,	// (0x000789bf) call3_video_subqcif_pane_ParamLimits

0x596f,	// (0x000789bf) call3_video_subqcif_pane

0x5983,	// (0x000789d3) call3_video_subqcif_uncrop_pane_ParamLimits

0x5983,	// (0x000789d3) call3_video_subqcif_uncrop_pane

0x59f4,	// (0x00078a44) popup_call3_audio_in_window_g4_ParamLimits

0x59f4,	// (0x00078a44) popup_call3_audio_in_window_g4

0x590d,	// (0x0007895d) mup_spec_half_pane

0x5916,	// (0x00078966) mup_spec_half_pane_cp

0xbbda,	// (0x0007ec2a) mup_osc_middle_pane

0xbbe3,	// (0x0007ec33) mup_visualizer_osc_pane_g1

0x58ed,	// (0x0007893d) mup_spec_bar_pane_ParamLimits

0x58ed,	// (0x0007893d) mup_spec_bar_pane

0xbbc7,	// (0x0007ec17) mup_spec_bar_pane_g1

0xbbd1,	// (0x0007ec21) mup_spec_bar_pane_g2

0x0001,

0xf61e,	// (0x0008266e) mup_spec_bar_pane_g

0x1eab,	// (0x00074efb) aid_cale_week_size_cell_pane_ParamLimits

0x1ebe,	// (0x00074f0e) bg_cale_heading_pane_ParamLimits

0x1ed2,	// (0x00074f22) bg_cale_pane_cp01_ParamLimits

0x1eeb,	// (0x00074f3b) cale_week_corner_pane_ParamLimits

0x1f01,	// (0x00074f51) cale_week_day_heading_pane_ParamLimits

0x1f15,	// (0x00074f65) cale_week_scroll_pane_g1_ParamLimits

0x1f26,	// (0x00074f76) cale_week_scroll_pane_g2_ParamLimits

0x1f37,	// (0x00074f87) cale_week_scroll_pane_g3_ParamLimits

0x1f48,	// (0x00074f98) cale_week_scroll_pane_g4_ParamLimits

0x1f59,	// (0x00074fa9) cale_week_scroll_pane_g5_ParamLimits

0x1f6c,	// (0x00074fbc) cale_week_scroll_pane_g6_ParamLimits

0x1f7f,	// (0x00074fcf) cale_week_scroll_pane_g7_ParamLimits

0x1f92,	// (0x00074fe2) cale_week_scroll_pane_g8_ParamLimits

0x1fa5,	// (0x00074ff5) cale_week_scroll_pane_g9_ParamLimits

0x1fb6,	// (0x00075006) cale_week_scroll_pane_g10_ParamLimits

0x1fc7,	// (0x00075017) cale_week_scroll_pane_g11_ParamLimits

0x1fd8,	// (0x00075028) cale_week_scroll_pane_g12_ParamLimits

0x1fe9,	// (0x00075039) cale_week_scroll_pane_g13_ParamLimits

0x1ffa,	// (0x0007504a) cale_week_scroll_pane_g14_ParamLimits

0x200b,	// (0x0007505b) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00082222) cale_week_scroll_pane_g_ParamLimits

0x201c,	// (0x0007506c) cale_week_time_pane_ParamLimits

0x202f,	// (0x0007507f) grid_cale_week_pane_ParamLimits

0x2044,	// (0x00075094) listscroll_cale_week_pane_t1

0x2056,	// (0x000750a6) scroll_pane_cp08_ParamLimits

0x2ee2,	// (0x00075f32) cale_month_corner_pane_ParamLimits

0x31c4,	// (0x00076214) cale_month_pane_t1

0x31d6,	// (0x00076226) cale_month_week_pane_ParamLimits

0x3acf,	// (0x00076b1f) popup_call_status_window_g1_ParamLimits

0x3ae3,	// (0x00076b33) popup_call_status_window_g2_ParamLimits

0x3af7,	// (0x00076b47) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x000823c5) popup_call_status_window_g_ParamLimits

0x3b5f,	// (0x00076baf) aid_call2_pane

0x0e1b,	// (0x00073e6b) msg_header_pane_g1

0x4886,	// (0x000778d6) postcard_address2_pane_ParamLimits

0x4886,	// (0x000778d6) postcard_address2_pane

0x4898,	// (0x000778e8) postcard_message2_pane_ParamLimits

0x4898,	// (0x000778e8) postcard_message2_pane

0x589f,	// (0x000788ef) message2_row_pane_ParamLimits

0x589f,	// (0x000788ef) message2_row_pane

0x58bb,	// (0x0007890b) address2_row_pane_ParamLimits

0x58bb,	// (0x0007890b) address2_row_pane

0xbb95,	// (0x0007ebe5) postcard_message2_row_pane_g1

0xbb9d,	// (0x0007ebed) postcard_message2_row_pane_t1

0xbb95,	// (0x0007ebe5) address2_row_pane_g1

0xbb9d,	// (0x0007ebed) address2_row_pane_t1

0x235f,	// (0x000753af) aid_size_cell_vorec

0xecbf,	// (0x00081d0f) main_rss_pane

0x58ce,	// (0x0007891e) rss_list_single_pane_ParamLimits

0x58ce,	// (0x0007891e) rss_list_single_pane

0xbbab,	// (0x0007ebfb) rss_list_single_pane_t1

0xbbb9,	// (0x0007ec09) rss_list_single_pane_t2

0x0001,

0xf619,	// (0x00082669) rss_list_single_pane_t

0xecbf,	// (0x00081d0f) main_camera2_pane

0xecbf,	// (0x00081d0f) main_video2_pane

0x5b37,	// (0x00078b87) cams_zoom_pane_cp2_ParamLimits

0x5b37,	// (0x00078b87) cams_zoom_pane_cp2

0x5b57,	// (0x00078ba7) image2_vga_pane_ParamLimits

0x5b57,	// (0x00078ba7) image2_vga_pane

0x5ba8,	// (0x00078bf8) main_camera2_pane_g1_ParamLimits

0x5ba8,	// (0x00078bf8) main_camera2_pane_g1

0x5bc8,	// (0x00078c18) main_camera2_pane_g2_ParamLimits

0x5bc8,	// (0x00078c18) main_camera2_pane_g2

0x5be8,	// (0x00078c38) main_camera2_pane_g3_ParamLimits

0x5be8,	// (0x00078c38) main_camera2_pane_g3

0x5c08,	// (0x00078c58) main_camera2_pane_g4_ParamLimits

0x5c08,	// (0x00078c58) main_camera2_pane_g4

0x5c28,	// (0x00078c78) main_camera2_pane_g5_ParamLimits

0x5c28,	// (0x00078c78) main_camera2_pane_g5

0x5c48,	// (0x00078c98) main_camera2_pane_g6_ParamLimits

0x5c48,	// (0x00078c98) main_camera2_pane_g6

0x5c68,	// (0x00078cb8) main_camera2_pane_g7_ParamLimits

0x5c68,	// (0x00078cb8) main_camera2_pane_g7

0x5c88,	// (0x00078cd8) main_camera2_pane_g8_ParamLimits

0x5c88,	// (0x00078cd8) main_camera2_pane_g8

0x0008,

0xf63a,	// (0x0008268a) main_camera2_pane_g_ParamLimits

0xf63a,	// (0x0008268a) main_camera2_pane_g

0x5cc8,	// (0x00078d18) main_camera2_pane_t1_ParamLimits

0x5cc8,	// (0x00078d18) main_camera2_pane_t1

0x5cfd,	// (0x00078d4d) main_camera2_pane_t2_ParamLimits

0x5cfd,	// (0x00078d4d) main_camera2_pane_t2

0x5d23,	// (0x00078d73) main_camera2_pane_t3_ParamLimits

0x5d23,	// (0x00078d73) main_camera2_pane_t3

0x5d81,	// (0x00078dd1) main_camera2_pane_t4_ParamLimits

0x5d81,	// (0x00078dd1) main_camera2_pane_t4

0x0006,

0xf64d,	// (0x0008269d) main_camera2_pane_t_ParamLimits

0xf64d,	// (0x0008269d) main_camera2_pane_t

0x5e13,	// (0x00078e63) cams_zoom_pane_cp4_ParamLimits

0x5e13,	// (0x00078e63) cams_zoom_pane_cp4

0x5e29,	// (0x00078e79) image2_cif_pane_ParamLimits

0x5e29,	// (0x00078e79) image2_cif_pane

0x5e54,	// (0x00078ea4) image2_subqcif_pane_ParamLimits

0x5e54,	// (0x00078ea4) image2_subqcif_pane

0x5e6e,	// (0x00078ebe) main_video2_pane_g1_ParamLimits

0x5e6e,	// (0x00078ebe) main_video2_pane_g1

0x5e88,	// (0x00078ed8) main_video2_pane_g2_ParamLimits

0x5e88,	// (0x00078ed8) main_video2_pane_g2

0x5e9e,	// (0x00078eee) main_video2_pane_g3_ParamLimits

0x5e9e,	// (0x00078eee) main_video2_pane_g3

0x5eb4,	// (0x00078f04) main_video2_pane_g4_ParamLimits

0x5eb4,	// (0x00078f04) main_video2_pane_g4

0x5eca,	// (0x00078f1a) main_video2_pane_g5_ParamLimits

0x5eca,	// (0x00078f1a) main_video2_pane_g5

0x5ee0,	// (0x00078f30) main_video2_pane_g6_ParamLimits

0x5ee0,	// (0x00078f30) main_video2_pane_g6

0x0005,

0xf65c,	// (0x000826ac) main_video2_pane_g_ParamLimits

0xf65c,	// (0x000826ac) main_video2_pane_g

0x5efa,	// (0x00078f4a) main_video2_pane_t1_ParamLimits

0x5efa,	// (0x00078f4a) main_video2_pane_t1

0x5f1e,	// (0x00078f6e) main_video2_pane_t2_ParamLimits

0x5f1e,	// (0x00078f6e) main_video2_pane_t2

0x5f6c,	// (0x00078fbc) main_video2_pane_t3_ParamLimits

0x5f6c,	// (0x00078fbc) main_video2_pane_t3

0x0002,

0xf669,	// (0x000826b9) main_video2_pane_t_ParamLimits

0xf669,	// (0x000826b9) main_video2_pane_t

0x53e7,	// (0x00078437) call_muted_g2

0x0001,

0xf60b,	// (0x0008265b) call_muted_g

0xecbf,	// (0x00081d0f) main_mup2_pane

0x5fb0,	// (0x00079000) main_mup2_pane_g1_ParamLimits

0x5fb0,	// (0x00079000) main_mup2_pane_g1

0x5fbc,	// (0x0007900c) main_mup2_pane_g2_ParamLimits

0x5fbc,	// (0x0007900c) main_mup2_pane_g2

0xbd4b,	// (0x0007ed9b) main_mup_pane_g13_cp1

0xbd53,	// (0x0007eda3) mup_volume_pane_cp1

0x5fd8,	// (0x00079028) main_mup2_pane_g4_ParamLimits

0x5fd8,	// (0x00079028) main_mup2_pane_g4

0x5fea,	// (0x0007903a) main_mup2_pane_g5_ParamLimits

0x5fea,	// (0x0007903a) main_mup2_pane_g5

0x5ffc,	// (0x0007904c) main_mup2_pane_g6_ParamLimits

0x5ffc,	// (0x0007904c) main_mup2_pane_g6

0x600e,	// (0x0007905e) main_mup2_pane_g7_ParamLimits

0x600e,	// (0x0007905e) main_mup2_pane_g7

0x0006,

0xf670,	// (0x000826c0) main_mup2_pane_g_ParamLimits

0xf670,	// (0x000826c0) main_mup2_pane_g

0x6026,	// (0x00079076) main_mup2_pane_t1_ParamLimits

0x6026,	// (0x00079076) main_mup2_pane_t1

0x603c,	// (0x0007908c) main_mup2_pane_t2_ParamLimits

0x603c,	// (0x0007908c) main_mup2_pane_t2

0x6052,	// (0x000790a2) main_mup2_pane_t3_ParamLimits

0x6052,	// (0x000790a2) main_mup2_pane_t3

0x6068,	// (0x000790b8) main_mup2_pane_t4_ParamLimits

0x6068,	// (0x000790b8) main_mup2_pane_t4

0x6080,	// (0x000790d0) main_mup2_pane_t5_ParamLimits

0x6080,	// (0x000790d0) main_mup2_pane_t5

0x6098,	// (0x000790e8) main_mup2_pane_t6_ParamLimits

0x6098,	// (0x000790e8) main_mup2_pane_t6

0x0005,

0xf67f,	// (0x000826cf) main_mup2_pane_t_ParamLimits

0xf67f,	// (0x000826cf) main_mup2_pane_t

0x60c8,	// (0x00079118) mup2_visualizer_pane_ParamLimits

0x60c8,	// (0x00079118) mup2_visualizer_pane

0x60f6,	// (0x00079146) mup_progress_pane_cp_ParamLimits

0x60f6,	// (0x00079146) mup_progress_pane_cp

0xbd2d,	// (0x0007ed7d) mup_volume_pane_cp_ParamLimits

0xbd2d,	// (0x0007ed7d) mup_volume_pane_cp

0x610a,	// (0x0007915a) mup2_visualizer_pane_g1_ParamLimits

0x610a,	// (0x0007915a) mup2_visualizer_pane_g1

0xbc6c,	// (0x0007ecbc) mup2_visualizer_pane_g2_ParamLimits

0xbc6c,	// (0x0007ecbc) mup2_visualizer_pane_g2

0x6121,	// (0x00079171) mup2_visualizer_pane_g3_ParamLimits

0x6121,	// (0x00079171) mup2_visualizer_pane_g3

0x0002,

0xf68c,	// (0x000826dc) mup2_visualizer_pane_g_ParamLimits

0xf68c,	// (0x000826dc) mup2_visualizer_pane_g

0x4c52,	// (0x00077ca2) aid_size_cell_fmradio

0x5599,	// (0x000785e9) aid_height_parent_landcape

0x2c26,	// (0x00075c76) wml_content_pane_cp

0x2c2e,	// (0x00075c7e) wml_tabs_pane

0x2c37,	// (0x00075c87) popup_wml_miniature_window

0x2c3f,	// (0x00075c8f) scroll_pane_cp021

0x2c53,	// (0x00075ca3) wml_content_pane_comp8

0xecbf,	// (0x00081d0f) bg_popup_sub_pane_cp05

0xbc8a,	// (0x0007ecda) popup_wml_miniature_window_g1

0xbc92,	// (0x0007ece2) wml_miniature_view_pane

0x612d,	// (0x0007917d) aid_size_wml_view

0x6135,	// (0x00079185) wml_miniature_view_pane_g1

0x613e,	// (0x0007918e) wml_miniature_view_pane_g2

0x6147,	// (0x00079197) wml_miniature_view_pane_g3

0x614f,	// (0x0007919f) wml_miniature_view_pane_g4

0x6157,	// (0x000791a7) wml_miniature_view_pane_g5

0x615f,	// (0x000791af) wml_miniature_view_pane_g6

0x6167,	// (0x000791b7) wml_miniature_view_pane_g7

0x616f,	// (0x000791bf) wml_miniature_view_pane_g8

0x0007,

0xf693,	// (0x000826e3) wml_miniature_view_pane_g

0xbc9a,	// (0x0007ecea) background_graphic_ParamLimits

0xbc9a,	// (0x0007ecea) background_graphic

0xbca6,	// (0x0007ecf6) wml_tabs_2_pane

0xbcaf,	// (0x0007ecff) wml_tabs_3_pane_ParamLimits

0xbcaf,	// (0x0007ecff) wml_tabs_3_pane

0xbcc1,	// (0x0007ed11) wml_tabs_4_pane_ParamLimits

0xbcc1,	// (0x0007ed11) wml_tabs_4_pane

0xbcd7,	// (0x0007ed27) wml_tabs_5_pane_ParamLimits

0xbcd7,	// (0x0007ed27) wml_tabs_5_pane

0xbcf1,	// (0x0007ed41) wml_tabs_pane_g2_ParamLimits

0xbcf1,	// (0x0007ed41) wml_tabs_pane_g2

0xbd05,	// (0x0007ed55) wml_tabs_pane_g3_ParamLimits

0xbd05,	// (0x0007ed55) wml_tabs_pane_g3

0x6177,	// (0x000791c7) wml_tabs_2_active_pane_ParamLimits

0x6177,	// (0x000791c7) wml_tabs_2_active_pane

0x618b,	// (0x000791db) wml_tabs_2_passive_pane_ParamLimits

0x618b,	// (0x000791db) wml_tabs_2_passive_pane

0x619f,	// (0x000791ef) wml_tabs_3_active_pane_cp_ParamLimits

0x619f,	// (0x000791ef) wml_tabs_3_active_pane_cp

0x61b4,	// (0x00079204) wml_tabs_3_passive_pane_ParamLimits

0x61b4,	// (0x00079204) wml_tabs_3_passive_pane

0x61c7,	// (0x00079217) wml_tabs_3_passive_pane_cp_ParamLimits

0x61c7,	// (0x00079217) wml_tabs_3_passive_pane_cp

0x61de,	// (0x0007922e) tabs_4_active_pane

0x61e6,	// (0x00079236) tabs_4_passive_pane

0x61f0,	// (0x00079240) tabs_4_passive_pane_cp

0x61f8,	// (0x00079248) tabs_4_passive_pane_cp2

0x52b4,	// (0x00078304) aid_height_text

0x4400,	// (0x00077450) mup_volume_cont_pane_ParamLimits

0x4400,	// (0x00077450) mup_volume_cont_pane

0x1aa0,	// (0x00074af0) aid_size_cell_pinb

0x1aaa,	// (0x00074afa) aid_size_list_pinb

0x60e2,	// (0x00079132) mup2_volume_cont_pane_ParamLimits

0x60e2,	// (0x00079132) mup2_volume_cont_pane

0xbd19,	// (0x0007ed69) mup2_volume_cont_pane_g1_ParamLimits

0xbd19,	// (0x0007ed69) mup2_volume_cont_pane_g1

0x178e,	// (0x000747de) aid_size_cell_touch_ParamLimits

0x178e,	// (0x000747de) aid_size_cell_touch

0x1990,	// (0x000749e0) touch_pane_ParamLimits

0x1990,	// (0x000749e0) touch_pane

0xaa6c,	// (0x0007dabc) main_rss2_pane

0xbd5b,	// (0x0007edab) listscroll_rss2_pane

0xbd64,	// (0x0007edb4) rss2_navigation_pane

0xbd6c,	// (0x0007edbc) list_rss2_pane

0x3d19,	// (0x00076d69) scroll_pane_cp22

0xbd74,	// (0x0007edc4) rss2_navigation_pane_g1

0xbd7d,	// (0x0007edcd) rss2_navigation_pane_g2

0xbd85,	// (0x0007edd5) rss2_navigation_pane_g3

0x0002,

0xf6a4,	// (0x000826f4) rss2_navigation_pane_g

0xbd8d,	// (0x0007eddd) rss2_navigation_pane_t1

0x6202,	// (0x00079252) rss2_list_single_pane_ParamLimits

0x6202,	// (0x00079252) rss2_list_single_pane

0xbd9b,	// (0x0007edeb) rss2_list_single_pane_t2

0xbda9,	// (0x0007edf9) rss2_list_single_pane_t3_ParamLimits

0xbda9,	// (0x0007edf9) rss2_list_single_pane_t3

0xbdc6,	// (0x0007ee16) rss2_list_single_pane_t4

0x3692,	// (0x000766e2) smil_status_pane_g1

0xe835,	// (0x00081885) main_image2_pane_ParamLimits

0xe835,	// (0x00081885) main_image2_pane

0x5ca8,	// (0x00078cf8) main_camera2_pane_g9_ParamLimits

0x5ca8,	// (0x00078cf8) main_camera2_pane_g9

0x5dd6,	// (0x00078e26) main_camera2_pane_t5_ParamLimits

0x5dd6,	// (0x00078e26) main_camera2_pane_t5

0xbc3c,	// (0x0007ec8c) main_camera2_pane_t6_ParamLimits

0xbc3c,	// (0x0007ec8c) main_camera2_pane_t6

0x6217,	// (0x00079267) main_image2_pane_g1_ParamLimits

0x6217,	// (0x00079267) main_image2_pane_g1

0x4c08,	// (0x00077c58) smil2_video_pane_ParamLimits

0x4c08,	// (0x00077c58) smil2_video_pane

0xaa9a,	// (0x0007daea) aid_zoom_text_primary_cp

0xe82b,	// (0x0008187b) popup_preview_fixed_window

0x2b1e,	// (0x00075b6e) im_reading_pane_g1

0x5b1f,	// (0x00078b6f) cams2_bc_adjust_pane_cp_ParamLimits

0x5b1f,	// (0x00078b6f) cams2_bc_adjust_pane_cp

0x5e05,	// (0x00078e55) cams2_bc_adjust_pane_ParamLimits

0x5e05,	// (0x00078e55) cams2_bc_adjust_pane

0xbdd4,	// (0x0007ee24) cams2_bc_adjust_pane_g1

0xbddc,	// (0x0007ee2c) cams2_slider_pane

0xbde5,	// (0x0007ee35) cams2_slider_pane_g1

0xbdee,	// (0x0007ee3e) cams2_slider_pane_g2

0x0006,

0xf6ab,	// (0x000826fb) cams2_slider_pane_g

0x1b8c,	// (0x00074bdc) calc_display_pane_ParamLimits

0x1bb4,	// (0x00074c04) calc_paper_pane_ParamLimits

0x1bd7,	// (0x00074c27) grid_calc_pane_ParamLimits

0xad9e,	// (0x0007ddee) popup_clock_digital_window_t1_ParamLimits

0x4a8f,	// (0x00077adf) main_image_pane_t1

0x1b6e,	// (0x00074bbe) aid_size_cell_calc_ParamLimits

0x1b6e,	// (0x00074bbe) aid_size_cell_calc

0x55df,	// (0x0007862f) popup_blid_sat_info2_window_ParamLimits

0x55df,	// (0x0007862f) popup_blid_sat_info2_window

0xbe10,	// (0x0007ee60) aid_size_cell_blid

0xbe18,	// (0x0007ee68) bg_popup_window_pane_cp07

0xbe3b,	// (0x0007ee8b) grid_popup_blid_pane

0xbe45,	// (0x0007ee95) heading_pane_cp05_ParamLimits

0xbe45,	// (0x0007ee95) heading_pane_cp05

0xbf0f,	// (0x0007ef5f) cell_popup_blid_pane_ParamLimits

0xbf0f,	// (0x0007ef5f) cell_popup_blid_pane

0xbf33,	// (0x0007ef83) cell_popup_blid_pane_g1

0xbf3b,	// (0x0007ef8b) cell_popup_blid_pane_t1

0x60b2,	// (0x00079102) mup2_indicator_pane_ParamLimits

0x60b2,	// (0x00079102) mup2_indicator_pane

0x4144,	// (0x00077194) mup2_visualizer_osc_pane

0xbc78,	// (0x0007ecc8) mup2_visualizer_spec_pane_ParamLimits

0xbc78,	// (0x0007ecc8) mup2_visualizer_spec_pane

0x622d,	// (0x0007927d) mup2_spec_half_pane

0x6236,	// (0x00079286) mup2_spec_half_pane_cp

0x623e,	// (0x0007928e) mup2_spec_bar_pane_ParamLimits

0x623e,	// (0x0007928e) mup2_spec_bar_pane

0xbbc7,	// (0x0007ec17) mup2_spec_bar_pane_g1

0xbbd1,	// (0x0007ec21) mup2_spec_bar_pane_g2

0x0001,

0xf61e,	// (0x0008266e) mup2_spec_bar_pane_g

0x625e,	// (0x000792ae) mup2_osc_middle_pane

0xbbe3,	// (0x0007ec33) mup2_visualizer_osc_pane_g1

0xe863,	// (0x000818b3) popup_number_entry_window_t1_ParamLimits

0xe876,	// (0x000818c6) popup_number_entry_window_t2_ParamLimits

0xe888,	// (0x000818d8) popup_number_entry_window_t3_ParamLimits

0x19e2,	// (0x00074a32) popup_number_entry_window_t5_ParamLimits

0x19e2,	// (0x00074a32) popup_number_entry_window_t5

0xf0ec,	// (0x0008213c) popup_number_entry_window_t_ParamLimits

0xe89a,	// (0x000818ea) text_title_cp2_ParamLimits

0xaddd,	// (0x0007de2d) aid_hotspot_pointer_text2_pane

0xae03,	// (0x0007de53) main_viewer_pane_g9_ParamLimits

0xae03,	// (0x0007de53) main_viewer_pane_g9

0x31c4,	// (0x00076214) cale_month_pane_t1_ParamLimits

0x370e,	// (0x0007675e) bg_cale_pane_ParamLimits

0x3726,	// (0x00076776) list_cale_pane_ParamLimits

0x2044,	// (0x00075094) listscroll_cale_day_pane_t1

0x3737,	// (0x00076787) scroll_pane_cp09_ParamLimits

0x44ae,	// (0x000774fe) main_mup_eq_pane_t1_ParamLimits

0x44ae,	// (0x000774fe) main_mup_eq_pane_t1

0x44c8,	// (0x00077518) main_mup_eq_pane_t2_ParamLimits

0x44c8,	// (0x00077518) main_mup_eq_pane_t2

0x44e2,	// (0x00077532) main_mup_eq_pane_t3_ParamLimits

0x44e2,	// (0x00077532) main_mup_eq_pane_t3

0x44fe,	// (0x0007754e) main_mup_eq_pane_t4_ParamLimits

0x44fe,	// (0x0007754e) main_mup_eq_pane_t4

0x451a,	// (0x0007756a) main_mup_eq_pane_t5_ParamLimits

0x451a,	// (0x0007756a) main_mup_eq_pane_t5

0x4536,	// (0x00077586) main_mup_eq_pane_t6_ParamLimits

0x4536,	// (0x00077586) main_mup_eq_pane_t6

0x454a,	// (0x0007759a) main_mup_eq_pane_t7_ParamLimits

0x454a,	// (0x0007759a) main_mup_eq_pane_t7

0x455e,	// (0x000775ae) main_mup_eq_pane_t8_ParamLimits

0x455e,	// (0x000775ae) main_mup_eq_pane_t8

0x4572,	// (0x000775c2) main_mup_eq_pane_t9_ParamLimits

0x4572,	// (0x000775c2) main_mup_eq_pane_t9

0x458c,	// (0x000775dc) main_mup_eq_pane_t10_ParamLimits

0x458c,	// (0x000775dc) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x000824c4) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x000824c4) main_mup_eq_pane_t

0x463b,	// (0x0007768b) mup_equalizer_pane_cp5_ParamLimits

0x464f,	// (0x0007769f) mup_equalizer_pane_cp6_ParamLimits

0x4663,	// (0x000776b3) mup_equalizer_pane_cp7_ParamLimits

0xaa6c,	// (0x0007dabc) main_gallery_pane

0xbbec,	// (0x0007ec3c) smil2_volume_pane

0xbbf4,	// (0x0007ec44) smil_status_volume_pane_g1_ParamLimits

0xbc07,	// (0x0007ec57) smil_status_volume_pane_g2_ParamLimits

0xbc1a,	// (0x0007ec6a) smil_status_volume_pane_g3_ParamLimits

0xf623,	// (0x00082673) smil_status_volume_pane_g_ParamLimits

0xbe18,	// (0x0007ee68) bg_popup_window_pane_cp07_ParamLimits

0xbe26,	// (0x0007ee76) blid_firmament_pane

0x6267,	// (0x000792b7) aid_size_cell_gallery_ParamLimits

0x6267,	// (0x000792b7) aid_size_cell_gallery

0x627d,	// (0x000792cd) grid_gallery_pane_ParamLimits

0x627d,	// (0x000792cd) grid_gallery_pane

0x6296,	// (0x000792e6) cell_gallery_pane_ParamLimits

0x6296,	// (0x000792e6) cell_gallery_pane

0xbf49,	// (0x0007ef99) bg_cell_gallery_focus_pane_ParamLimits

0xbf49,	// (0x0007ef99) bg_cell_gallery_focus_pane

0xbf5b,	// (0x0007efab) cell_gallery_pane_g1_ParamLimits

0xbf5b,	// (0x0007efab) cell_gallery_pane_g1

0x62df,	// (0x0007932f) cell_gallery_pane_g2_ParamLimits

0x62df,	// (0x0007932f) cell_gallery_pane_g2

0x62ec,	// (0x0007933c) cell_gallery_pane_g3_ParamLimits

0x62ec,	// (0x0007933c) cell_gallery_pane_g3

0xbf67,	// (0x0007efb7) cell_gallery_pane_g4_ParamLimits

0xbf67,	// (0x0007efb7) cell_gallery_pane_g4

0x0003,

0xf6d1,	// (0x00082721) cell_gallery_pane_g_ParamLimits

0xf6d1,	// (0x00082721) cell_gallery_pane_g

0xbf73,	// (0x0007efc3) bg_cell_gallery_focus_pane_g1

0xbf7b,	// (0x0007efcb) bg_cell_gallery_focus_pane_g2

0xbf83,	// (0x0007efd3) bg_cell_gallery_focus_pane_g3

0xbf8b,	// (0x0007efdb) bg_cell_gallery_focus_pane_g4

0xbf93,	// (0x0007efe3) bg_cell_gallery_focus_pane_g5

0xbf9b,	// (0x0007efeb) bg_cell_gallery_focus_pane_g6

0xbfa3,	// (0x0007eff3) bg_cell_gallery_focus_pane_g7

0xbfab,	// (0x0007effb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6da,	// (0x0008272a) bg_cell_gallery_focus_pane_g

0xbfb3,	// (0x0007f003) aid_firma_cardinal

0xbfc7,	// (0x0007f017) blid_firmament_pane_t1

0xbfde,	// (0x0007f02e) blid_firmament_pane_t2

0xbff5,	// (0x0007f045) blid_firmament_pane_t3

0xc00c,	// (0x0007f05c) blid_firmament_pane_t4

0x0003,

0xf6eb,	// (0x0008273b) blid_firmament_pane_t

0xc023,	// (0x0007f073) blid_sat_info_pane

0xc033,	// (0x0007f083) blid_sat_info_pane_g1

0xc033,	// (0x0007f083) blid_sat_info_pane_g2

0x0001,

0xf6f4,	// (0x00082744) blid_sat_info_pane_g

0xc03d,	// (0x0007f08d) blid_sat_info_pane_t1

0xc04b,	// (0x0007f09b) smil2_volume_content_pane

0xc054,	// (0x0007f0a4) smil2_volume_pane_g1

0xc05c,	// (0x0007f0ac) smil2_volume_content_pane_g1

0xc065,	// (0x0007f0b5) smil2_volume_content_pane_g2

0xc06e,	// (0x0007f0be) smil2_volume_content_pane_g3

0xc077,	// (0x0007f0c7) smil2_volume_content_pane_g4

0xc080,	// (0x0007f0d0) smil2_volume_content_pane_g5

0xc089,	// (0x0007f0d9) smil2_volume_content_pane_g6

0xc092,	// (0x0007f0e2) smil2_volume_content_pane_g7

0xc09b,	// (0x0007f0eb) smil2_volume_content_pane_g8

0xc0a4,	// (0x0007f0f4) smil2_volume_content_pane_g9

0xc0ad,	// (0x0007f0fd) smil2_volume_content_pane_g10

0x0009,

0xf6f9,	// (0x00082749) smil2_volume_content_pane_g

0x20b0,	// (0x00075100) cale_week_day_heading_pane_t1_ParamLimits

0x20dd,	// (0x0007512d) cale_week_day_heading_pane_t2_ParamLimits

0x210a,	// (0x0007515a) cale_week_day_heading_pane_t3_ParamLimits

0x2137,	// (0x00075187) cale_week_day_heading_pane_t4_ParamLimits

0x2164,	// (0x000751b4) cale_week_day_heading_pane_t5_ParamLimits

0x2191,	// (0x000751e1) cale_week_day_heading_pane_t6_ParamLimits

0x21c0,	// (0x00075210) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00082241) cale_week_day_heading_pane_t_ParamLimits

0x21ed,	// (0x0007523d) bg_cale_side_pane_ParamLimits

0x21fb,	// (0x0007524b) cale_week_time_pane_t1_ParamLimits

0x2213,	// (0x00075263) cale_week_time_pane_t2_ParamLimits

0x222b,	// (0x0007527b) cale_week_time_pane_t3_ParamLimits

0x2243,	// (0x00075293) cale_week_time_pane_t4_ParamLimits

0x225b,	// (0x000752ab) cale_week_time_pane_t5_ParamLimits

0x2273,	// (0x000752c3) cale_week_time_pane_t6_ParamLimits

0x228b,	// (0x000752db) cale_week_time_pane_t7_ParamLimits

0x22a3,	// (0x000752f3) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00082250) cale_week_time_pane_t_ParamLimits

0x22bb,	// (0x0007530b) cell_cale_week_pane_g2_ParamLimits

0x21ed,	// (0x0007523d) bg_cale_side_pane_cp01_ParamLimits

0x3503,	// (0x00076553) cale_month_week_pane_t1_ParamLimits

0x351a,	// (0x0007656a) cale_month_week_pane_t2_ParamLimits

0x3531,	// (0x00076581) cale_month_week_pane_t3_ParamLimits

0x3548,	// (0x00076598) cale_month_week_pane_t4_ParamLimits

0x355f,	// (0x000765af) cale_month_week_pane_t5_ParamLimits

0x3576,	// (0x000765c6) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00082329) cale_month_week_pane_t_ParamLimits

0xaca5,	// (0x0007dcf5) cell_cale_month_pane_g1_ParamLimits

0xaa6c,	// (0x0007dabc) main_cale_event_viewer_pane

0xaa6c,	// (0x0007dabc) listscroll_cale_event_viewer_pane

0xc0b6,	// (0x0007f106) list_cale_ev_pane

0xc0be,	// (0x0007f10e) scroll_pane_cp023

0xc0ca,	// (0x0007f11a) field_cale_ev_pane_ParamLimits

0xc0ca,	// (0x0007f11a) field_cale_ev_pane

0xc0e8,	// (0x0007f138) field_cale_ev_content_pane_ParamLimits

0xc0e8,	// (0x0007f138) field_cale_ev_content_pane

0xc0f4,	// (0x0007f144) field_cale_ev_pane_g1_ParamLimits

0xc0f4,	// (0x0007f144) field_cale_ev_pane_g1

0xc100,	// (0x0007f150) field_cale_ev_pane_g2_ParamLimits

0xc100,	// (0x0007f150) field_cale_ev_pane_g2

0xc118,	// (0x0007f168) field_cale_ev_pane_g3_ParamLimits

0xc118,	// (0x0007f168) field_cale_ev_pane_g3

0x0002,

0xf70e,	// (0x0008275e) field_cale_ev_pane_g_ParamLimits

0xf70e,	// (0x0008275e) field_cale_ev_pane_g

0xc130,	// (0x0007f180) field_cale_ev_pane_t1_ParamLimits

0xc130,	// (0x0007f180) field_cale_ev_pane_t1

0xc147,	// (0x0007f197) field_cale_ev_content_pane_t1_ParamLimits

0xc147,	// (0x0007f197) field_cale_ev_content_pane_t1

0x470d,	// (0x0007775d) bg_button_pane_cp01

0xeff1,	// (0x00082041) listscroll_cale_week_pane_ParamLimits

0x1ea1,	// (0x00074ef1) popup_toolbar_window_cp01

0x2044,	// (0x00075094) listscroll_cale_week_pane_t1_ParamLimits

0xeff1,	// (0x00082041) listscroll_cale_day_pane_ParamLimits

0x3704,	// (0x00076754) popup_toolbar_window_cp02

0x2044,	// (0x00075094) listscroll_cale_day_pane_t1_ParamLimits

0xeff1,	// (0x00082041) main_cale_month_pane_ParamLimits

0x5813,	// (0x00078863) popup_toolbar_window_cp03_ParamLimits

0x5813,	// (0x00078863) popup_toolbar_window_cp03

0x4a6d,	// (0x00077abd) main_image_pane_g2_ParamLimits

0x4a6d,	// (0x00077abd) main_image_pane_g2

0x4a7e,	// (0x00077ace) main_image_pane_g3_ParamLimits

0x4a7e,	// (0x00077ace) main_image_pane_g3

0x0002,

0xf506,	// (0x00082556) main_image_pane_g_ParamLimits

0xf506,	// (0x00082556) main_image_pane_g

0x4a8f,	// (0x00077adf) main_image_pane_t1_ParamLimits

0x4aa6,	// (0x00077af6) main_image_pane_t2_ParamLimits

0x4aa6,	// (0x00077af6) main_image_pane_t2

0x4ab8,	// (0x00077b08) main_image_pane_t3_ParamLimits

0x4ab8,	// (0x00077b08) main_image_pane_t3

0x4ae0,	// (0x00077b30) main_image_pane_t4_ParamLimits

0x4ae0,	// (0x00077b30) main_image_pane_t4

0x0003,

0xf50d,	// (0x0008255d) main_image_pane_t_ParamLimits

0xf50d,	// (0x0008255d) main_image_pane_t

0x4b00,	// (0x00077b50) popup_image_details_window_cp01

0x4b0a,	// (0x00077b5a) popup_toobar_trans_pane_cp01_ParamLimits

0x4b0a,	// (0x00077b5a) popup_toobar_trans_pane_cp01

0x56be,	// (0x0007870e) popup_image_details_window_ParamLimits

0x56be,	// (0x0007870e) popup_image_details_window

0xbb4d,	// (0x0007eb9d) popup_image_focus_window

0x5ad9,	// (0x00078b29) camera2_autofocus_pane_ParamLimits

0x5ad9,	// (0x00078b29) camera2_autofocus_pane

0xaa6c,	// (0x0007dabc) bg_popup_sub_pane_cp06

0xc165,	// (0x0007f1b5) popup_image_focus_window_g1

0xc16d,	// (0x0007f1bd) popup_image_focus_window_g2

0xc175,	// (0x0007f1c5) popup_image_focus_window_g3

0xc17d,	// (0x0007f1cd) popup_image_focus_window_g4

0x0003,

0xf715,	// (0x00082765) popup_image_focus_window_g

0xc185,	// (0x0007f1d5) popup_image_focus_window_t1

0xc193,	// (0x0007f1e3) popup_image_focus_window_t2

0xc1a3,	// (0x0007f1f3) popup_image_focus_window_t3

0x0002,

0xf71e,	// (0x0008276e) popup_image_focus_window_t

0xc1b1,	// (0x0007f201) camera2_autofocus_pane_g1

0xe835,	// (0x00081885) bg_tb_trans_pane_cp01

0xc1bf,	// (0x0007f20f) popup_image_details_window_g1

0xc1d2,	// (0x0007f222) popup_image_details_window_g2

0x0002,

0xf730,	// (0x00082780) popup_image_details_window_g

0xc1fb,	// (0x0007f24b) popup_image_details_window_t1

0xc20d,	// (0x0007f25d) popup_image_details_window_t2

0xc226,	// (0x0007f276) popup_image_details_window_t3

0xc23a,	// (0x0007f28a) popup_image_details_window_t4

0xc255,	// (0x0007f2a5) popup_image_details_window_t5

0x0004,

0xf737,	// (0x00082787) popup_image_details_window_t

0xefdd,	// (0x0008202d) bg_calc_paper_pane_ParamLimits

0xaa6c,	// (0x0007dabc) grid_highlight_pane_cp013

0xaace,	// (0x0007db1e) list_calc_pane_ParamLimits

0xaae0,	// (0x0007db30) scroll_pane_cp024

0xeff1,	// (0x00082041) bg_calc_display_pane_ParamLimits

0x1cc8,	// (0x00074d18) calc_display_pane_t1_ParamLimits

0x1cda,	// (0x00074d2a) calc_display_pane_t2_ParamLimits

0xaae8,	// (0x0007db38) calc_display_pane_t3_ParamLimits

0xf173,	// (0x000821c3) calc_display_pane_t_ParamLimits

0x1d92,	// (0x00074de2) cell_calc_pane_g2

0x0001,

0xf190,	// (0x000821e0) cell_calc_pane_g

0x1d9b,	// (0x00074deb) cell_calc_pane_t1

0xf050,	// (0x000820a0) grid_highlight_pane_cp02_ParamLimits

0xf066,	// (0x000820b6) toolbar_button_pane_cp01_ParamLimits

0xf066,	// (0x000820b6) toolbar_button_pane_cp01

0x4b4c,	// (0x00077b9c) temp_image_control_pane_ParamLimits

0x4b4c,	// (0x00077b9c) temp_image_control_pane

0xe835,	// (0x00081885) main_mp3_pane

0xc26f,	// (0x0007f2bf) temp_image_control_pane_g1_ParamLimits

0xc26f,	// (0x0007f2bf) temp_image_control_pane_g1

0xc27d,	// (0x0007f2cd) temp_image_control_pane_g2_ParamLimits

0xc27d,	// (0x0007f2cd) temp_image_control_pane_g2

0xc28f,	// (0x0007f2df) temp_image_control_pane_g3_ParamLimits

0xc28f,	// (0x0007f2df) temp_image_control_pane_g3

0x6329,	// (0x00079379) temp_image_control_pane_g4_ParamLimits

0x6329,	// (0x00079379) temp_image_control_pane_g4

0x0003,

0xf742,	// (0x00082792) temp_image_control_pane_g_ParamLimits

0xf742,	// (0x00082792) temp_image_control_pane_g

0xc26f,	// (0x0007f2bf) main_mp3_pane_g1

0x633c,	// (0x0007938c) main_mp3_pane_g2

0x0007,

0xf74b,	// (0x0008279b) main_mp3_pane_g

0xc2d2,	// (0x0007f322) main_mp3_pane_t1

0x2441,	// (0x00075491) main_camera_pane_g8_ParamLimits

0x2441,	// (0x00075491) main_camera_pane_g8

0x25f2,	// (0x00075642) main_video_pane_g7_ParamLimits

0x25f2,	// (0x00075642) main_video_pane_g7

0xbc5a,	// (0x0007ecaa) main_camera2_pane_t7_ParamLimits

0xbc5a,	// (0x0007ecaa) main_camera2_pane_t7

0x2be6,	// (0x00075c36) scroll_pane_cp025_ParamLimits

0x2be6,	// (0x00075c36) scroll_pane_cp025

0x2bfa,	// (0x00075c4a) scroll_pane_cp026_ParamLimits

0x2bfa,	// (0x00075c4a) scroll_pane_cp026

0x2c09,	// (0x00075c59) wml_content_pane_ParamLimits

0xaa6c,	// (0x0007dabc) main_touch_calib_pane

0x6406,	// (0x00079456) main_touch_calib_pane_g1

0x6412,	// (0x00079462) main_touch_calib_pane_g2

0x641e,	// (0x0007946e) main_touch_calib_pane_g3

0x642a,	// (0x0007947a) main_touch_calib_pane_g4

0x0003,

0xf769,	// (0x000827b9) main_touch_calib_pane_g

0x6436,	// (0x00079486) main_touch_calib_pane_t1

0x6450,	// (0x000794a0) main_touch_calib_pane_t2

0x0004,

0xf772,	// (0x000827c2) main_touch_calib_pane_t

0x3fc1,	// (0x00077011) mup_progress_pane_cp02

0x3fe0,	// (0x00077030) navi_pane_g1

0x4099,	// (0x000770e9) navi_pane_mp_t3

0xe835,	// (0x00081885) main_mp3_pane_ParamLimits

0x5851,	// (0x000788a1) navi_pane_ParamLimits

0xc26f,	// (0x0007f2bf) main_mp3_pane_g1_ParamLimits

0x633c,	// (0x0007938c) main_mp3_pane_g2_ParamLimits

0x634a,	// (0x0007939a) main_mp3_pane_g3_ParamLimits

0x634a,	// (0x0007939a) main_mp3_pane_g3

0x6358,	// (0x000793a8) main_mp3_pane_g4_ParamLimits

0x6358,	// (0x000793a8) main_mp3_pane_g4

0xc29f,	// (0x0007f2ef) main_mp3_pane_g5_ParamLimits

0xc29f,	// (0x0007f2ef) main_mp3_pane_g5

0xc2ad,	// (0x0007f2fd) main_mp3_pane_g6_ParamLimits

0xc2ad,	// (0x0007f2fd) main_mp3_pane_g6

0xc2ba,	// (0x0007f30a) main_mp3_pane_g7_ParamLimits

0xc2ba,	// (0x0007f30a) main_mp3_pane_g7

0xc2c6,	// (0x0007f316) main_mp3_pane_g8_ParamLimits

0xc2c6,	// (0x0007f316) main_mp3_pane_g8

0xf74b,	// (0x0008279b) main_mp3_pane_g_ParamLimits

0x6364,	// (0x000793b4) main_mp3_pane_t2

0x6372,	// (0x000793c2) main_mp3_pane_t3

0xc2e0,	// (0x0007f330) main_mp3_pane_t4

0xc2ee,	// (0x0007f33e) main_mp3_pane_t5

0x0005,

0xf75c,	// (0x000827ac) main_mp3_pane_t

0xc2fc,	// (0x0007f34c) mup_progress_pane_cp01

0xaa9a,	// (0x0007daea) aid_zoom_text_secondary2

0xc0b6,	// (0x0007f106) list_cale_ev2_pane

0xc0be,	// (0x0007f10e) scroll_pane_cp023_ParamLimits

0x64a6,	// (0x000794f6) field_cale_ev2_pane_ParamLimits

0x64a6,	// (0x000794f6) field_cale_ev2_pane

0x64c6,	// (0x00079516) field_cale_ev2_pane_g1_ParamLimits

0x64c6,	// (0x00079516) field_cale_ev2_pane_g1

0x64d2,	// (0x00079522) field_cale_ev2_pane_g2_ParamLimits

0x64d2,	// (0x00079522) field_cale_ev2_pane_g2

0x64ea,	// (0x0007953a) field_cale_ev2_pane_g3_ParamLimits

0x64ea,	// (0x0007953a) field_cale_ev2_pane_g3

0x0003,

0xf77d,	// (0x000827cd) field_cale_ev2_pane_g_ParamLimits

0xf77d,	// (0x000827cd) field_cale_ev2_pane_g

0xc310,	// (0x0007f360) field_cale_ev2_pane_t1_ParamLimits

0xc310,	// (0x0007f360) field_cale_ev2_pane_t1

0xc327,	// (0x0007f377) field_cale_ev2_pane_t2_ParamLimits

0xc327,	// (0x0007f377) field_cale_ev2_pane_t2

0x0001,

0xf786,	// (0x000827d6) field_cale_ev2_pane_t_ParamLimits

0xf786,	// (0x000827d6) field_cale_ev2_pane_t

0x483c,	// (0x0007788c) main_postcard_pane_g5_ParamLimits

0x483c,	// (0x0007788c) main_postcard_pane_g5

0x4852,	// (0x000778a2) main_postcard_pane_g6_ParamLimits

0x4852,	// (0x000778a2) main_postcard_pane_g6

0x238c,	// (0x000753dc) camera2_autofocus_pane_cp_ParamLimits

0x238c,	// (0x000753dc) camera2_autofocus_pane_cp

0xe835,	// (0x00081885) main_mup3_pane

0x6522,	// (0x00079572) main_mup3_pane_g1_ParamLimits

0x6522,	// (0x00079572) main_mup3_pane_g1

0x6544,	// (0x00079594) main_mup3_pane_g2_ParamLimits

0x6544,	// (0x00079594) main_mup3_pane_g2

0x65c2,	// (0x00079612) main_mup3_pane_g3_ParamLimits

0x65c2,	// (0x00079612) main_mup3_pane_g3

0x6604,	// (0x00079654) main_mup3_pane_g4_ParamLimits

0x6604,	// (0x00079654) main_mup3_pane_g4

0x6646,	// (0x00079696) main_mup3_pane_g5_ParamLimits

0x6646,	// (0x00079696) main_mup3_pane_g5

0x6688,	// (0x000796d8) main_mup3_pane_g6_ParamLimits

0x6688,	// (0x000796d8) main_mup3_pane_g6

0xc33c,	// (0x0007f38c) main_mup3_pane_g7_ParamLimits

0xc33c,	// (0x0007f38c) main_mup3_pane_g7

0x0007,

0xf796,	// (0x000827e6) main_mup3_pane_g_ParamLimits

0xf796,	// (0x000827e6) main_mup3_pane_g

0x6702,	// (0x00079752) main_mup3_pane_t1_ParamLimits

0x6702,	// (0x00079752) main_mup3_pane_t1

0x6772,	// (0x000797c2) main_mup3_pane_t2_ParamLimits

0x6772,	// (0x000797c2) main_mup3_pane_t2

0x6842,	// (0x00079892) main_mup3_pane_t4_ParamLimits

0x6842,	// (0x00079892) main_mup3_pane_t4

0x6898,	// (0x000798e8) main_mup3_pane_t5_ParamLimits

0x6898,	// (0x000798e8) main_mup3_pane_t5

0x694c,	// (0x0007999c) main_mup3_pane_t6_ParamLimits

0x694c,	// (0x0007999c) main_mup3_pane_t6

0x0005,

0xf7a7,	// (0x000827f7) main_mup3_pane_t_ParamLimits

0xf7a7,	// (0x000827f7) main_mup3_pane_t

0x6a00,	// (0x00079a50) mup3_progress_pane_ParamLimits

0x6a00,	// (0x00079a50) mup3_progress_pane

0x6a82,	// (0x00079ad2) popup_mup3_control_window_ParamLimits

0x6a82,	// (0x00079ad2) popup_mup3_control_window

0xc34a,	// (0x0007f39a) popup_mup3_text_window

0x6ab4,	// (0x00079b04) mup3_progress_pane_t1

0x6acb,	// (0x00079b1b) mup3_progress_pane_t2

0xc352,	// (0x0007f3a2) mup3_progress_pane_t3

0x0002,

0xf7b4,	// (0x00082804) mup3_progress_pane_t

0xc369,	// (0x0007f3b9) mup_progress_pane_cp03

0xaa6c,	// (0x0007dabc) bg_tb_trans_pane_cp04

0x6ae2,	// (0x00079b32) mup3_volume_pane

0x6aea,	// (0x00079b3a) popup_mup3_control_window_g1

0x6af3,	// (0x00079b43) mup3_volume_pane_g1

0x6afc,	// (0x00079b4c) mup3_volume_pane_g2

0x6b05,	// (0x00079b55) mup3_volume_pane_g3

0x0002,

0xf7bb,	// (0x0008280b) mup3_volume_pane_g

0xaa6c,	// (0x0007dabc) bg_tb_trans_pane_cp03

0xc379,	// (0x0007f3c9) popup_mup3_text_window_g1

0xc381,	// (0x0007f3d1) popup_mup3_text_window_t1

0xf039,	// (0x00082089) list_calc_item_pane_g1_ParamLimits

0xbd42,	// (0x0007ed92) mup_volume_pane_cp_g1

0x646a,	// (0x000794ba) main_touch_calib_pane_t3

0x647e,	// (0x000794ce) main_touch_calib_pane_t4

0x6492,	// (0x000794e2) main_touch_calib_pane_t5

0xaa76,	// (0x0007dac6) aid_cell_size_toolbar2

0xaa7e,	// (0x0007dace) aid_popup3_width_pane

0xaa8a,	// (0x0007dada) aid_zoom_text_msg_primary

0xaba8,	// (0x0007dbf8) vorec_t7

0xeffd,	// (0x0008204d) bg_calc_paper_pane_g1_ParamLimits

0xf009,	// (0x00082059) bg_calc_paper_pane_g2_ParamLimits

0xf015,	// (0x00082065) bg_calc_paper_pane_g3_ParamLimits

0xf021,	// (0x00082071) bg_calc_paper_pane_g4_ParamLimits

0xf02d,	// (0x0008207d) bg_calc_paper_pane_g5_ParamLimits

0x1d21,	// (0x00074d71) bg_calc_paper_pane_g6_ParamLimits

0x1d30,	// (0x00074d80) bg_calc_paper_pane_g7_ParamLimits

0x1d3f,	// (0x00074d8f) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x000821ca) bg_calc_paper_pane_g_ParamLimits

0x1d52,	// (0x00074da2) calc_bg_paper_pane_g9_ParamLimits

0x24e6,	// (0x00075536) image_qvga_pane_ParamLimits

0x24e6,	// (0x00075536) image_qvga_pane

0xef1a,	// (0x00081f6a) bg_popup_sub_pane_cp04_ParamLimits

0x49cb,	// (0x00077a1b) popup_mup_playback_window_g1_ParamLimits

0x49d7,	// (0x00077a27) popup_mup_playback_window_t1_ParamLimits

0x49ec,	// (0x00077a3c) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00082551) popup_mup_playback_window_t_ParamLimits

0x5fcc,	// (0x0007901c) main_mup2_pane_g3_ParamLimits

0x5fcc,	// (0x0007901c) main_mup2_pane_g3

0x287b,	// (0x000758cb) popup_toolbar_window_cp04

0x51ce,	// (0x0007821e) popup_call2_audio_second_window_g3_ParamLimits

0x51ce,	// (0x0007821e) popup_call2_audio_second_window_g3

0xb14d,	// (0x0007e19d) popup_call2_audio_first_window_g4_ParamLimits

0xb14d,	// (0x0007e19d) popup_call2_audio_first_window_g4

0xb7cc,	// (0x0007e81c) popup_call2_audio_in_window_g4_ParamLimits

0xb7cc,	// (0x0007e81c) popup_call2_audio_in_window_g4

0x4a01,	// (0x00077a51) aid_area_sk_bg_cut_ParamLimits

0x4a01,	// (0x00077a51) aid_area_sk_bg_cut

0x4a1f,	// (0x00077a6f) aid_area_sk_bg_cut_2_ParamLimits

0x4a1f,	// (0x00077a6f) aid_area_sk_bg_cut_2

0x62cf,	// (0x0007931f) aid_placing_details_win

0x62d7,	// (0x00079327) aid_placing_details_win_2

0xc1b1,	// (0x0007f201) camera2_autofocus_pane_g1_ParamLimits

0x193b,	// (0x0007498b) popup_fixed_preview_cale_window_ParamLimits

0x193b,	// (0x0007498b) popup_fixed_preview_cale_window

0x4155,	// (0x000771a5) navi_slider_pane_g3

0x415e,	// (0x000771ae) navi_slider_pane_g4

0x4167,	// (0x000771b7) navi_slider_pane_g5

0x4155,	// (0x000771a5) navi_slider_pane_g6

0xadc4,	// (0x0007de14) navi_slider_pane_g7

0x4680,	// (0x000776d0) mup_scale_pane_g3

0x4689,	// (0x000776d9) mup_scale_pane_g4

0x4692,	// (0x000776e2) mup_scale_pane_g5

0x469b,	// (0x000776eb) mup_scale_pane_g6

0x46a4,	// (0x000776f4) mup_scale_pane_g7

0x4155,	// (0x000771a5) cams2_slider_pane_g3

0xbdf7,	// (0x0007ee47) cams2_slider_pane_g4

0xbdff,	// (0x0007ee4f) cams2_slider_pane_g5

0x4155,	// (0x000771a5) cams2_slider_pane_g6

0xbe07,	// (0x0007ee57) cams2_slider_pane_g7

0xc033,	// (0x0007f083) camera2_autofocus_pane_cp_g1

0xc38f,	// (0x0007f3df) bg_popup_preview_window_pane_cp02_ParamLimits

0xc38f,	// (0x0007f3df) bg_popup_preview_window_pane_cp02

0xc39b,	// (0x0007f3eb) list_fp_cale_pane_ParamLimits

0xc39b,	// (0x0007f3eb) list_fp_cale_pane

0xc3a7,	// (0x0007f3f7) popup_fixed_preview_cale_window_t1_ParamLimits

0xc3a7,	// (0x0007f3f7) popup_fixed_preview_cale_window_t1

0x6b0e,	// (0x00079b5e) popup_fixed_preview_cale_window_t2_ParamLimits

0x6b0e,	// (0x00079b5e) popup_fixed_preview_cale_window_t2

0x6b23,	// (0x00079b73) popup_fixed_preview_cale_window_t3_ParamLimits

0x6b23,	// (0x00079b73) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c2,	// (0x00082812) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c2,	// (0x00082812) popup_fixed_preview_cale_window_t

0x6b38,	// (0x00079b88) list_single_fp_cale_pane_ParamLimits

0x6b38,	// (0x00079b88) list_single_fp_cale_pane

0xc3c5,	// (0x0007f415) list_single_fp_cale_pane_g1_ParamLimits

0xc3c5,	// (0x0007f415) list_single_fp_cale_pane_g1

0xc3d1,	// (0x0007f421) list_single_fp_cale_pane_g2_ParamLimits

0xc3d1,	// (0x0007f421) list_single_fp_cale_pane_g2

0x0002,

0xf7c9,	// (0x00082819) list_single_fp_cale_pane_g_ParamLimits

0xf7c9,	// (0x00082819) list_single_fp_cale_pane_g

0xc3ea,	// (0x0007f43a) list_single_fp_cale_pane_t1_ParamLimits

0xc3ea,	// (0x0007f43a) list_single_fp_cale_pane_t1

0xc3fc,	// (0x0007f44c) list_single_fp_cale_pane_t2_ParamLimits

0xc3fc,	// (0x0007f44c) list_single_fp_cale_pane_t2

0x0001,

0xf7d0,	// (0x00082820) list_single_fp_cale_pane_t_ParamLimits

0xf7d0,	// (0x00082820) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xaa6c,	// (0x0007dabc) main_dialer_pane

0x6b4d,	// (0x00079b9d) aid_cell_size_keypad

0x6b57,	// (0x00079ba7) dialer_ne_pane

0x6b5f,	// (0x00079baf) grid_dialer_command_1_pane

0x6b67,	// (0x00079bb7) grid_dialer_command_2_pane

0x6b6f,	// (0x00079bbf) grid_dialer_keypad_pane

0x6b81,	// (0x00079bd1) bg_popup_call_pane_cp06_ParamLimits

0x6b81,	// (0x00079bd1) bg_popup_call_pane_cp06

0x6b8d,	// (0x00079bdd) dialer_ne_clear_pane_ParamLimits

0x6b8d,	// (0x00079bdd) dialer_ne_clear_pane

0xc42f,	// (0x0007f47f) dialer_ne_pane_g1

0xc437,	// (0x0007f487) dialer_ne_pane_t1_ParamLimits

0xc437,	// (0x0007f487) dialer_ne_pane_t1

0x6b99,	// (0x00079be9) dialer_ne_pane_t2_ParamLimits

0x6b99,	// (0x00079be9) dialer_ne_pane_t2

0x6bc3,	// (0x00079c13) dialer_ne_pane_t3_ParamLimits

0x6bc3,	// (0x00079c13) dialer_ne_pane_t3

0x0002,

0xf7d5,	// (0x00082825) dialer_ne_pane_t_ParamLimits

0xf7d5,	// (0x00082825) dialer_ne_pane_t

0x6bf3,	// (0x00079c43) dialer_ne_pane_t3_copy1_ParamLimits

0x6bf3,	// (0x00079c43) dialer_ne_pane_t3_copy1

0x6c22,	// (0x00079c72) cell_dialer_keypad_pane_ParamLimits

0x6c22,	// (0x00079c72) cell_dialer_keypad_pane

0x6c39,	// (0x00079c89) cell_dialer_command_1_pane_ParamLimits

0x6c39,	// (0x00079c89) cell_dialer_command_1_pane

0x6c4f,	// (0x00079c9f) cell_dialer_command_2_pane_ParamLimits

0x6c4f,	// (0x00079c9f) cell_dialer_command_2_pane

0xc449,	// (0x0007f499) bg_button_pane_cp02_ParamLimits

0xc449,	// (0x0007f499) bg_button_pane_cp02

0x6c5e,	// (0x00079cae) cell_dialer_keypad_pane_g1_ParamLimits

0x6c5e,	// (0x00079cae) cell_dialer_keypad_pane_g1

0xc449,	// (0x0007f499) bg_button_pane_cp03_ParamLimits

0xc449,	// (0x0007f499) bg_button_pane_cp03

0x6c72,	// (0x00079cc2) cell_dialer_command_1_pane_g1_ParamLimits

0x6c72,	// (0x00079cc2) cell_dialer_command_1_pane_g1

0xc455,	// (0x0007f4a5) bg_button_pane_cp04

0x6c86,	// (0x00079cd6) cell_dialer_command_2_pane_g1

0x4144,	// (0x00077194) bg_button_pane_cp06

0xc45d,	// (0x0007f4ad) dialer_ne_clear_pane_g1

0x3fec,	// (0x0007703c) navi_pane_g2

0x401a,	// (0x0007706a) navi_pane_g3

0x0002,

0xf404,	// (0x00082454) navi_pane_g

0x40a7,	// (0x000770f7) navi_pane_mv_g2

0x40ce,	// (0x0007711e) navi_pane_mv_g5

0x40d6,	// (0x00077126) navi_pane_mv_t1

0xeff1,	// (0x00082041) main_clock2_pane

0x6cba,	// (0x00079d0a) main_clock2_list_pane_ParamLimits

0x6cba,	// (0x00079d0a) main_clock2_list_pane

0x6cf0,	// (0x00079d40) main_clock2_pane_t1_ParamLimits

0x6cf0,	// (0x00079d40) main_clock2_pane_t1

0x6d2c,	// (0x00079d7c) main_clock2_pane_t2_ParamLimits

0x6d2c,	// (0x00079d7c) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0008282c) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0008282c) main_clock2_pane_t

0x6db6,	// (0x00079e06) popup_clock_analogue_window_cp03_ParamLimits

0x6db6,	// (0x00079e06) popup_clock_analogue_window_cp03

0x6ddb,	// (0x00079e2b) popup_clock_digital_window_cp02_ParamLimits

0x6ddb,	// (0x00079e2b) popup_clock_digital_window_cp02

0x6e4c,	// (0x00079e9c) main_clock2_list_single_pane_ParamLimits

0x6e4c,	// (0x00079e9c) main_clock2_list_single_pane

0x4144,	// (0x00077194) list_highlight_pane_cp05

0xc465,	// (0x0007f4b5) main_clock2_list_single_pane_t1

0x287b,	// (0x000758cb) popup_toolbar_window_cp04_ParamLimits

0x62f9,	// (0x00079349) camera2_autofocus_pane_g2_ParamLimits

0x62f9,	// (0x00079349) camera2_autofocus_pane_g2

0x6305,	// (0x00079355) camera2_autofocus_pane_g3_ParamLimits

0x6305,	// (0x00079355) camera2_autofocus_pane_g3

0x6311,	// (0x00079361) camera2_autofocus_pane_g4_ParamLimits

0x6311,	// (0x00079361) camera2_autofocus_pane_g4

0x631d,	// (0x0007936d) camera2_autofocus_pane_g5_ParamLimits

0x631d,	// (0x0007936d) camera2_autofocus_pane_g5

0x0004,

0xf725,	// (0x00082775) camera2_autofocus_pane_g_ParamLimits

0xf725,	// (0x00082775) camera2_autofocus_pane_g

0x6502,	// (0x00079552) camera2_autofocus_pane_cp_g2

0x650a,	// (0x0007955a) camera2_autofocus_pane_cp_g3

0x6512,	// (0x00079562) camera2_autofocus_pane_cp_g4

0x651a,	// (0x0007956a) camera2_autofocus_pane_cp_g5

0x0004,

0xf78b,	// (0x000827db) camera2_autofocus_pane_cp_g

0x6b79,	// (0x00079bc9) popup_dialer_spcha_window

0xaa6c,	// (0x0007dabc) bg_popup_sub_pane_cp07

0xc473,	// (0x0007f4c3) list_spcha_pane

0xc47b,	// (0x0007f4cb) list_single_spcha_pane_ParamLimits

0xc47b,	// (0x0007f4cb) list_single_spcha_pane

0xaa6c,	// (0x0007dabc) list_highlight_pane_cp06

0xc48c,	// (0x0007f4dc) list_single_spcha_pane_t1

0xb576,	// (0x0007e5c6) popup_call2_audio_out_window_g4_ParamLimits

0xb576,	// (0x0007e5c6) popup_call2_audio_out_window_g4

0xaa6c,	// (0x0007dabc) main_imed2_pane

0xbb55,	// (0x0007eba5) popup_imed_adjust2_window

0x56d6,	// (0x00078726) popup_imed_trans_window_ParamLimits

0x56d6,	// (0x00078726) popup_imed_trans_window

0xbe71,	// (0x0007eec1) popup_blid_sat_info2_window_t1

0xbe7f,	// (0x0007eecf) popup_blid_sat_info2_window_t2

0x000a,

0xf6ba,	// (0x0008270a) popup_blid_sat_info2_window_t

0x6ef6,	// (0x00079f46) aid_size_cell_colour_35

0x6f16,	// (0x00079f66) aid_size_cell_colour_112

0x6f36,	// (0x00079f86) aid_size_cell_effect

0xbb2d,	// (0x0007eb7d) bg_tb_trans_pane_cp02

0x3858,	// (0x000768a8) heading_imed_pane

0x6f56,	// (0x00079fa6) listscroll_imed_pane

0xc49a,	// (0x0007f4ea) heading_imed_pane_g1

0xc4a2,	// (0x0007f4f2) heading_imed_pane_t1

0xc4b0,	// (0x0007f500) grid_imed_colour_35_pane_ParamLimits

0xc4b0,	// (0x0007f500) grid_imed_colour_35_pane

0x6f62,	// (0x00079fb2) grid_imed_effect_pane

0xc4c7,	// (0x0007f517) list_imed_aspect_pane

0x6f78,	// (0x00079fc8) scroll_pane_cp027_ParamLimits

0x6f78,	// (0x00079fc8) scroll_pane_cp027

0x6f89,	// (0x00079fd9) cell_imed_effect_pane_ParamLimits

0x6f89,	// (0x00079fd9) cell_imed_effect_pane

0xc4cf,	// (0x0007f51f) cell_imed_colour_pane_ParamLimits

0xc4cf,	// (0x0007f51f) cell_imed_colour_pane

0xc511,	// (0x0007f561) cell_imed_colour_pane_g1_ParamLimits

0xc511,	// (0x0007f561) cell_imed_colour_pane_g1

0xc522,	// (0x0007f572) hgihlgiht_grid_pane_cp016_ParamLimits

0xc522,	// (0x0007f572) hgihlgiht_grid_pane_cp016

0x6fb0,	// (0x0007a000) cell_imed_effect_pane_g1

0x6fb8,	// (0x0007a008) grid_highlight_pane_cp017

0xc533,	// (0x0007f583) list_imed_single_pane_ParamLimits

0xc533,	// (0x0007f583) list_imed_single_pane

0xaa6c,	// (0x0007dabc) list_highlight_pane_cp07

0xc548,	// (0x0007f598) list_imed_aspect_pane_comp1_t1

0xbb2d,	// (0x0007eb7d) bg_tb_trans_pane_cp05

0xc56a,	// (0x0007f5ba) popup_imed_adjust2_window_g1

0xc591,	// (0x0007f5e1) popup_imed_adjust2_window_t1

0xc5a9,	// (0x0007f5f9) slider_imed_adjust_pane

0xc5bd,	// (0x0007f60d) slider_imed_adjust_pane_g1

0xc5cd,	// (0x0007f61d) slider_imed_adjust_pane_g2

0xc5dd,	// (0x0007f62d) slider_imed_adjust_pane_g3

0xc5ee,	// (0x0007f63e) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x00082849) slider_imed_adjust_pane_g

0x6fc1,	// (0x0007a011) aid_size_cell_clipart2

0x6fcd,	// (0x0007a01d) grid_imed_clipart_pane

0xc5ff,	// (0x0007f64f) scroll_pane_cp031

0x6fd7,	// (0x0007a027) cell_imed_clipart_pane_ParamLimits

0x6fd7,	// (0x0007a027) cell_imed_clipart_pane

0x6ff9,	// (0x0007a049) cell_imed_clipart_pane_g1

0xaa6c,	// (0x0007dabc) grid_highlight_pane_cp014

0x6ccf,	// (0x00079d1f) main_clock2_pane_g1_ParamLimits

0x6ccf,	// (0x00079d1f) main_clock2_pane_g1

0x6df7,	// (0x00079e47) aid_call2_pane_cp10

0x6e09,	// (0x00079e59) aid_call_pane_cp10

0x3efe,	// (0x00076f4e) popup_clock_analogue_window_cp10_g1

0x3efe,	// (0x00076f4e) popup_clock_analogue_window_cp10_g2

0x6e1b,	// (0x00079e6b) popup_clock_analogue_window_cp10_g3

0x6e1b,	// (0x00079e6b) popup_clock_analogue_window_cp10_g4

0x3efe,	// (0x00076f4e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x00082837) popup_clock_analogue_window_cp10_g

0x6e2d,	// (0x00079e7d) popup_clock_analogue_window_cp10_t1

0x6e5e,	// (0x00079eae) clock_digital_number_pane_cp10_ParamLimits

0x6e5e,	// (0x00079eae) clock_digital_number_pane_cp10

0x6e76,	// (0x00079ec6) clock_digital_number_pane_cp11_ParamLimits

0x6e76,	// (0x00079ec6) clock_digital_number_pane_cp11

0x6e8e,	// (0x00079ede) clock_digital_number_pane_cp12_ParamLimits

0x6e8e,	// (0x00079ede) clock_digital_number_pane_cp12

0x6ea6,	// (0x00079ef6) clock_digital_number_pane_cp13_ParamLimits

0x6ea6,	// (0x00079ef6) clock_digital_number_pane_cp13

0x6ebe,	// (0x00079f0e) clock_digital_separator_pane_cp10_ParamLimits

0x6ebe,	// (0x00079f0e) clock_digital_separator_pane_cp10

0x6ed6,	// (0x00079f26) popup_clock_digital_window_cp02_t1_ParamLimits

0x6ed6,	// (0x00079f26) popup_clock_digital_window_cp02_t1

0xef12,	// (0x00081f62) clock_digital_number_pane_cp10_g1

0xef12,	// (0x00081f62) clock_digital_number_pane_cp10_g2

0x0001,

0x05bf,	// (0x0007360f) clock_digital_number_pane_cp10_g

0xef12,	// (0x00081f62) clock_digital_separator_pane_cp10_g1

0xef12,	// (0x00081f62) clock_digital_separator_pane_g2_cp10

0x4114,	// (0x00077164) navi_pane_vded_g4

0x411d,	// (0x0007716d) navi_pane_vded_g5

0x4126,	// (0x00077176) navi_pane_vded_t1

0xaa6c,	// (0x0007dabc) main_vded_pane

0x7002,	// (0x0007a052) main_vded_pane_g1

0x700c,	// (0x0007a05c) main_vded_pane_g2

0x7016,	// (0x0007a066) main_vded_pane_g3

0x0002,

0xf802,	// (0x00082852) main_vded_pane_g

0x7020,	// (0x0007a070) main_vded_pane_t1

0x702e,	// (0x0007a07e) main_vded_pane_t2

0x0001,

0xf809,	// (0x00082859) main_vded_pane_t

0x703c,	// (0x0007a08c) vded_slider_pane

0x7044,	// (0x0007a094) vded_video_pane

0xc607,	// (0x0007f657) vded_video_pane_g1

0x704c,	// (0x0007a09c) vded_video_pane_g2

0xc033,	// (0x0007f083) vded_video_pane_g3

0x0002,

0xf80e,	// (0x0008285e) vded_video_pane_g

0xc611,	// (0x0007f661) vded_slider_pane_g1

0xbd42,	// (0x0007ed92) vded_slider_pane_g2

0xc61a,	// (0x0007f66a) vded_slider_pane_g3

0xc623,	// (0x0007f673) vded_slider_pane_g4

0xc62c,	// (0x0007f67c) vded_slider_pane_g5

0x0004,

0xf815,	// (0x00082865) vded_slider_pane_g

0x6a6a,	// (0x00079aba) mup3_rocker_pane_ParamLimits

0x6a6a,	// (0x00079aba) mup3_rocker_pane

0x7055,	// (0x0007a0a5) mup3_control_keys_pane_g1

0x705d,	// (0x0007a0ad) mup3_control_keys_pane_g2

0x7065,	// (0x0007a0b5) mup3_control_keys_pane_g3

0x706d,	// (0x0007a0bd) mup3_control_keys_pane_g4

0x0003,

0xf820,	// (0x00082870) mup3_control_keys_pane_g

0x1972,	// (0x000749c2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1972,	// (0x000749c2) popup_toolbar2_fixed_window_cp01

0x6a9e,	// (0x00079aee) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6a9e,	// (0x00079aee) popup_toolbar2_fixed_window_cp02

0xaeb5,	// (0x0007df05) popup_call2_audio_second_window_t4_ParamLimits

0xaeb5,	// (0x0007df05) popup_call2_audio_second_window_t4

0xb3e3,	// (0x0007e433) popup_call2_audio_first_window_t6_ParamLimits

0xb3e3,	// (0x0007e433) popup_call2_audio_first_window_t6

0xb679,	// (0x0007e6c9) popup_call2_audio_out_window_t6_ParamLimits

0xb679,	// (0x0007e6c9) popup_call2_audio_out_window_t6

0xaa6c,	// (0x0007dabc) main_vitu_pane

0x707d,	// (0x0007a0cd) aid_size_cell_itu_ParamLimits

0x707d,	// (0x0007a0cd) aid_size_cell_itu

0xe835,	// (0x00081885) bg_popup_window_pane_cp08_ParamLimits

0xe835,	// (0x00081885) bg_popup_window_pane_cp08

0x7093,	// (0x0007a0e3) field_vitu_entry_pane_ParamLimits

0x7093,	// (0x0007a0e3) field_vitu_entry_pane

0x70aa,	// (0x0007a0fa) grid_vitu_function_pane_ParamLimits

0x70aa,	// (0x0007a0fa) grid_vitu_function_pane

0x70c5,	// (0x0007a115) grid_vitu_itu_pane_ParamLimits

0x70c5,	// (0x0007a115) grid_vitu_itu_pane

0x70e3,	// (0x0007a133) cell_vitu_itu_pane_ParamLimits

0x70e3,	// (0x0007a133) cell_vitu_itu_pane

0x7105,	// (0x0007a155) cell_vitu_function_pane_ParamLimits

0x7105,	// (0x0007a155) cell_vitu_function_pane

0xe835,	// (0x00081885) bg_popup_sub_pane_cp08_ParamLimits

0xe835,	// (0x00081885) bg_popup_sub_pane_cp08

0x711e,	// (0x0007a16e) field_vitu_entry_pane_t1_ParamLimits

0x711e,	// (0x0007a16e) field_vitu_entry_pane_t1

0xc64d,	// (0x0007f69d) field_vitu_entry_pane_t2_ParamLimits

0xc64d,	// (0x0007f69d) field_vitu_entry_pane_t2

0x0001,

0xf82e,	// (0x0008287e) field_vitu_entry_pane_t_ParamLimits

0xf82e,	// (0x0008287e) field_vitu_entry_pane_t

0xc66a,	// (0x0007f6ba) bg_button_pane_cp05_ParamLimits

0xc66a,	// (0x0007f6ba) bg_button_pane_cp05

0x713c,	// (0x0007a18c) cell_vitu_itu_pane_g1

0x7154,	// (0x0007a1a4) cell_vitu_itu_pane_t1_ParamLimits

0x7154,	// (0x0007a1a4) cell_vitu_itu_pane_t1

0x7166,	// (0x0007a1b6) cell_vitu_itu_pane_t2_ParamLimits

0x7166,	// (0x0007a1b6) cell_vitu_itu_pane_t2

0x0002,

0xf833,	// (0x00082883) cell_vitu_itu_pane_t_ParamLimits

0xf833,	// (0x00082883) cell_vitu_itu_pane_t

0xc678,	// (0x0007f6c8) bg_button_pane_cp07

0x719b,	// (0x0007a1eb) cell_vitu_function_pane_g1

0xaac6,	// (0x0007db16) main_calc_pane_g1

0x17b2,	// (0x00074802) aid_visual_content_pane

0xaa6c,	// (0x0007dabc) main_vradio_pane

0x71a4,	// (0x0007a1f4) main_vradio_pane_g1_ParamLimits

0x71a4,	// (0x0007a1f4) main_vradio_pane_g1

0xc682,	// (0x0007f6d2) main_vradio_pane_g2_ParamLimits

0xc682,	// (0x0007f6d2) main_vradio_pane_g2

0x0001,

0xf83a,	// (0x0008288a) main_vradio_pane_g_ParamLimits

0xf83a,	// (0x0008288a) main_vradio_pane_g

0x71bd,	// (0x0007a20d) main_vradio_pane_t1_ParamLimits

0x71bd,	// (0x0007a20d) main_vradio_pane_t1

0x71d2,	// (0x0007a222) main_vradio_pane_t2_ParamLimits

0x71d2,	// (0x0007a222) main_vradio_pane_t2

0xc68f,	// (0x0007f6df) main_vradio_pane_t3_ParamLimits

0xc68f,	// (0x0007f6df) main_vradio_pane_t3

0x0002,

0xf83f,	// (0x0008288f) main_vradio_pane_t_ParamLimits

0xf83f,	// (0x0008288f) main_vradio_pane_t

0x71e7,	// (0x0007a237) vradio_rocker_control_pane_ParamLimits

0x71e7,	// (0x0007a237) vradio_rocker_control_pane

0x71f9,	// (0x0007a249) vradio_station_info_pane_ParamLimits

0x71f9,	// (0x0007a249) vradio_station_info_pane

0xc6a3,	// (0x0007f6f3) vradio_frequency_info_pane_ParamLimits

0xc6a3,	// (0x0007f6f3) vradio_frequency_info_pane

0xc033,	// (0x0007f083) vradio_station_info_pane_g1

0xc6b2,	// (0x0007f702) vradio_station_info_pane_t1_ParamLimits

0xc6b2,	// (0x0007f702) vradio_station_info_pane_t1

0xc6d4,	// (0x0007f724) vradio_station_info_pane_t2_ParamLimits

0xc6d4,	// (0x0007f724) vradio_station_info_pane_t2

0x0001,

0xf846,	// (0x00082896) vradio_station_info_pane_t_ParamLimits

0xf846,	// (0x00082896) vradio_station_info_pane_t

0xc6e6,	// (0x0007f736) vradio_tuning_pane

0xc6ee,	// (0x0007f73e) vradio_rocker_control_pane_g1

0xc6f6,	// (0x0007f746) vradio_rocker_control_pane_g2

0xc6fe,	// (0x0007f74e) vradio_rocker_control_pane_g3

0xc706,	// (0x0007f756) vradio_rocker_control_pane_g4

0xc70e,	// (0x0007f75e) vradio_rocker_control_pane_g5

0x0004,

0xf84b,	// (0x0008289b) vradio_rocker_control_pane_g

0x720b,	// (0x0007a25b) vradio_frequency_info_pane_g1

0xc716,	// (0x0007f766) vradio_frequency_info_pane_t1_ParamLimits

0xc716,	// (0x0007f766) vradio_frequency_info_pane_t1

0x7215,	// (0x0007a265) vradio_tuning_pane_g1

0x7220,	// (0x0007a270) vradio_tuning_pane_t1

0xaaa2,	// (0x0007daf2) area_side_right_pane_ParamLimits

0xaaa2,	// (0x0007daf2) area_side_right_pane

0xbaf4,	// (0x0007eb44) status_small_pane_g1

0xbafc,	// (0x0007eb4c) status_small_pane_g2

0xbb05,	// (0x0007eb55) status_small_pane_g3

0xbb0e,	// (0x0007eb5e) status_small_pane_g4

0x0003,

0xf610,	// (0x00082660) status_small_pane_g

0xbb17,	// (0x0007eb67) status_small_pane_t1

0xaa6c,	// (0x0007dabc) main_video3_pane

0xc72a,	// (0x0007f77a) cams_zoom_vslider_pane

0xc732,	// (0x0007f782) image3_wide_pane_ParamLimits

0xc732,	// (0x0007f782) image3_wide_pane

0xc74c,	// (0x0007f79c) image3_wide_small_pane

0xc758,	// (0x0007f7a8) main_video3_pane_g1_ParamLimits

0xc758,	// (0x0007f7a8) main_video3_pane_g1

0xc774,	// (0x0007f7c4) main_video3_pane_g2_ParamLimits

0xc774,	// (0x0007f7c4) main_video3_pane_g2

0x0001,

0xf856,	// (0x000828a6) main_video3_pane_g_ParamLimits

0xf856,	// (0x000828a6) main_video3_pane_g

0xe545,	// (0x00081595) main_video3_pane_t1_ParamLimits

0xe545,	// (0x00081595) main_video3_pane_t1

0xe570,	// (0x000815c0) main_video3_pane_t2_ParamLimits

0xe570,	// (0x000815c0) main_video3_pane_t2

0xe59b,	// (0x000815eb) main_video3_pane_t3_ParamLimits

0xe59b,	// (0x000815eb) main_video3_pane_t3

0x0002,

0x061d,	// (0x0007366d) main_video3_pane_t_ParamLimits

0x061d,	// (0x0007366d) main_video3_pane_t

0xe5c8,	// (0x00081618) cams_zoom_vslider_pane_g1

0xe5d1,	// (0x00081621) cams_zoom_vslider_pane_g2

0x0001,

0x0624,	// (0x00073674) cams_zoom_vslider_pane_g

0xe5d9,	// (0x00081629) small_slider_vertical_pane

0xc033,	// (0x0007f083) small_slider_vertical_pane_g1

0xc033,	// (0x0007f083) small_slider_vertical_pane_g2

0xe5e1,	// (0x00081631) small_slider_vertical_pane_g3

0x0002,

0xf85b,	// (0x000828ab) small_slider_vertical_pane_g

0xaa6c,	// (0x0007dabc) main_hwr_training_pane

0xe5ea,	// (0x0008163a) hwr_training_instruct_pane_ParamLimits

0xe5ea,	// (0x0008163a) hwr_training_instruct_pane

0x722f,	// (0x0007a27f) hwr_training_navi_pane_ParamLimits

0x722f,	// (0x0007a27f) hwr_training_navi_pane

0x724e,	// (0x0007a29e) hwr_training_write_pane_ParamLimits

0x724e,	// (0x0007a29e) hwr_training_write_pane

0xaa6c,	// (0x0007dabc) bg_frame_shadow_pane

0xe621,	// (0x00081671) hwr_training_write_pane_g1

0xe629,	// (0x00081679) hwr_training_write_pane_g2

0xe631,	// (0x00081681) hwr_training_write_pane_g3

0xe639,	// (0x00081689) hwr_training_write_pane_g4

0xe641,	// (0x00081691) hwr_training_write_pane_g5

0xe649,	// (0x00081699) hwr_training_write_pane_g6

0xe651,	// (0x000816a1) hwr_training_write_pane_g7

0x0006,

0x0630,	// (0x00073680) hwr_training_write_pane_g

0xe11c,	// (0x0008116c) hwr_training_navi_pane_g1_ParamLimits

0xe11c,	// (0x0008116c) hwr_training_navi_pane_g1

0xe12e,	// (0x0008117e) hwr_training_navi_pane_g2_ParamLimits

0xe12e,	// (0x0008117e) hwr_training_navi_pane_g2

0xe140,	// (0x00081190) hwr_training_navi_pane_g3_ParamLimits

0xe140,	// (0x00081190) hwr_training_navi_pane_g3

0xe150,	// (0x000811a0) hwr_training_navi_pane_g4_ParamLimits

0xe150,	// (0x000811a0) hwr_training_navi_pane_g4

0x0004,

0xf862,	// (0x000828b2) hwr_training_navi_pane_g_ParamLimits

0xf862,	// (0x000828b2) hwr_training_navi_pane_g

0xe15d,	// (0x000811ad) hwr_training_navi_pane_t1

0x7296,	// (0x0007a2e6) list_single_hwr_training_instruct_pane_ParamLimits

0x7296,	// (0x0007a2e6) list_single_hwr_training_instruct_pane

0xe659,	// (0x000816a9) list_single_hwr_training_instruct_pane_t1

0xbf73,	// (0x0007efc3) bg_frame_shadow_pane_g1

0xe668,	// (0x000816b8) bg_frame_shadow_pane_g2

0xe670,	// (0x000816c0) bg_frame_shadow_pane_g3

0xe678,	// (0x000816c8) bg_frame_shadow_pane_g4

0xe680,	// (0x000816d0) bg_frame_shadow_pane_g5

0xe688,	// (0x000816d8) bg_frame_shadow_pane_g6

0xe690,	// (0x000816e0) bg_frame_shadow_pane_g7

0xf0aa,	// (0x000820fa) bg_frame_shadow_pane_g8

0x0007,

0xf86d,	// (0x000828bd) bg_frame_shadow_pane_g

0xaa6c,	// (0x0007dabc) main_video_tele_dialer_pane

0x72ab,	// (0x0007a2fb) aid_size_cell_video_keypad_ParamLimits

0x72ab,	// (0x0007a2fb) aid_size_cell_video_keypad

0x72c5,	// (0x0007a315) grid_video_dialer_keypad_pane_ParamLimits

0x72c5,	// (0x0007a315) grid_video_dialer_keypad_pane

0x730f,	// (0x0007a35f) video_down_pane_cp_ParamLimits

0x730f,	// (0x0007a35f) video_down_pane_cp

0x731f,	// (0x0007a36f) cell_video_dialer_keypad_pane_ParamLimits

0x731f,	// (0x0007a36f) cell_video_dialer_keypad_pane

0xe6b4,	// (0x00081704) bg_button_pane_cp08_ParamLimits

0xe6b4,	// (0x00081704) bg_button_pane_cp08

0x7341,	// (0x0007a391) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7341,	// (0x0007a391) cell_video_dialer_keypad_pane_g1

0x6a54,	// (0x00079aa4) mup3_rocker2_pane_ParamLimits

0x6a54,	// (0x00079aa4) mup3_rocker2_pane

0xc033,	// (0x0007f083) mup3_rocker2_pane_g1

0x55b7,	// (0x00078607) main_dialer2_pane

0xaa6c,	// (0x0007dabc) main_mp4_pane

0xe173,	// (0x000811c3) main_mp4_pane_g1_ParamLimits

0xe173,	// (0x000811c3) main_mp4_pane_g1

0xe173,	// (0x000811c3) main_mp4_pane_g2_ParamLimits

0xe173,	// (0x000811c3) main_mp4_pane_g2

0x737b,	// (0x0007a3cb) main_mp4_pane_g3_ParamLimits

0x737b,	// (0x0007a3cb) main_mp4_pane_g3

0xe181,	// (0x000811d1) main_mp4_pane_g4_ParamLimits

0xe181,	// (0x000811d1) main_mp4_pane_g4

0xe1a9,	// (0x000811f9) main_mp4_pane_g5_ParamLimits

0xe1a9,	// (0x000811f9) main_mp4_pane_g5

0x0005,

0xf888,	// (0x000828d8) main_mp4_pane_g_ParamLimits

0xf888,	// (0x000828d8) main_mp4_pane_g

0xe1f9,	// (0x00081249) main_mp4_pane_t1_ParamLimits

0xe1f9,	// (0x00081249) main_mp4_pane_t1

0xe255,	// (0x000812a5) main_mp4_pane_t2_ParamLimits

0xe255,	// (0x000812a5) main_mp4_pane_t2

0xe6c0,	// (0x00081710) main_mp4_pane_t3_ParamLimits

0xe6c0,	// (0x00081710) main_mp4_pane_t3

0xe2a7,	// (0x000812f7) main_mp4_pane_t4_ParamLimits

0xe2a7,	// (0x000812f7) main_mp4_pane_t4

0x0003,

0xf895,	// (0x000828e5) main_mp4_pane_t_ParamLimits

0xf895,	// (0x000828e5) main_mp4_pane_t

0xe2eb,	// (0x0008133b) mp4_progress_pane_ParamLimits

0xe2eb,	// (0x0008133b) mp4_progress_pane

0xe335,	// (0x00081385) mp4_rocker_pane_ParamLimits

0xe335,	// (0x00081385) mp4_rocker_pane

0xe6e8,	// (0x00081738) mp4_progress_pane_t1

0xe701,	// (0x00081751) mp4_progress_pane_t2

0x0001,

0x0680,	// (0x000736d0) mp4_progress_pane_t

0xe71a,	// (0x0008176a) mup_progress_pane_cp04

0xc033,	// (0x0007f083) mp4_rocker_pane_g1

0x73b7,	// (0x0007a407) aid_cell_size_keypad2_ParamLimits

0x73b7,	// (0x0007a407) aid_cell_size_keypad2

0x73cd,	// (0x0007a41d) dialer2_ne_pane_ParamLimits

0x73cd,	// (0x0007a41d) dialer2_ne_pane

0x73e7,	// (0x0007a437) grid_dialer2_keypad_pane_ParamLimits

0x73e7,	// (0x0007a437) grid_dialer2_keypad_pane

0xbe18,	// (0x0007ee68) bg_popup_call_pane_cp07_ParamLimits

0xbe18,	// (0x0007ee68) bg_popup_call_pane_cp07

0x7403,	// (0x0007a453) dialer2_ne_pane_t1_ParamLimits

0x7403,	// (0x0007a453) dialer2_ne_pane_t1

0x743e,	// (0x0007a48e) cell_dialer2_keypad_pane_ParamLimits

0x743e,	// (0x0007a48e) cell_dialer2_keypad_pane

0xe738,	// (0x00081788) bg_button_pane_pane_cp04_ParamLimits

0xe738,	// (0x00081788) bg_button_pane_pane_cp04

0x7460,	// (0x0007a4b0) cell_dialer2_keypad_pane_g1_ParamLimits

0x7460,	// (0x0007a4b0) cell_dialer2_keypad_pane_g1

0x273f,	// (0x0007578f) aid_placing_vt_set_content_ParamLimits

0x273f,	// (0x0007578f) aid_placing_vt_set_content

0x2765,	// (0x000757b5) aid_placing_vt_set_title_ParamLimits

0x2765,	// (0x000757b5) aid_placing_vt_set_title

0xaa6c,	// (0x0007dabc) main_image3_pane

0x7526,	// (0x0007a576) area_side_right_pane_cp01_ParamLimits

0x7526,	// (0x0007a576) area_side_right_pane_cp01

0xe173,	// (0x000811c3) main_image3_pane_g1_ParamLimits

0xe173,	// (0x000811c3) main_image3_pane_g1

0x753d,	// (0x0007a58d) main_image3_pane_g2_ParamLimits

0x753d,	// (0x0007a58d) main_image3_pane_g2

0x7565,	// (0x0007a5b5) main_image3_pane_g3_ParamLimits

0x7565,	// (0x0007a5b5) main_image3_pane_g3

0x758f,	// (0x0007a5df) main_image3_pane_g4_ParamLimits

0x758f,	// (0x0007a5df) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x000828f8) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x000828f8) main_image3_pane_g

0x75b9,	// (0x0007a609) main_image3_pane_t1_ParamLimits

0x75b9,	// (0x0007a609) main_image3_pane_t1

0x7611,	// (0x0007a661) main_image3_pane_t2_ParamLimits

0x7611,	// (0x0007a661) main_image3_pane_t2

0x7663,	// (0x0007a6b3) main_image3_pane_t3_ParamLimits

0x7663,	// (0x0007a6b3) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x00082901) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x00082901) main_image3_pane_t

0xe835,	// (0x00081885) grid_sctrl_middle_pane_cp01_ParamLimits

0xe835,	// (0x00081885) grid_sctrl_middle_pane_cp01

0x76eb,	// (0x0007a73b) cell_sctrl_middle_pane_cp01_ParamLimits

0x76eb,	// (0x0007a73b) cell_sctrl_middle_pane_cp01

0x7708,	// (0x0007a758) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7708,	// (0x0007a758) cell_sctrl_middle_pane_cp01_g1

0xaa6c,	// (0x0007dabc) main_call4_pane

0x771e,	// (0x0007a76e) aid_size_button_call4_ParamLimits

0x771e,	// (0x0007a76e) aid_size_button_call4

0x774f,	// (0x0007a79f) call4_windows_pane_ParamLimits

0x774f,	// (0x0007a79f) call4_windows_pane

0x776f,	// (0x0007a7bf) grid_call4_button_pane_ParamLimits

0x776f,	// (0x0007a7bf) grid_call4_button_pane

0xe744,	// (0x00081794) call4_windows_conf_pane

0xe75b,	// (0x000817ab) popup_call4_audio_first_window_ParamLimits

0xe75b,	// (0x000817ab) popup_call4_audio_first_window

0xe7a7,	// (0x000817f7) popup_call4_audio_second_window_ParamLimits

0xe7a7,	// (0x000817f7) popup_call4_audio_second_window

0xe7bb,	// (0x0008180b) popup_call4_audio_wait_window_ParamLimits

0xe7bb,	// (0x0008180b) popup_call4_audio_wait_window

0x779c,	// (0x0007a7ec) cell_call4_button_pane_ParamLimits

0x779c,	// (0x0007a7ec) cell_call4_button_pane

0x77c5,	// (0x0007a815) bg_button_pane_cp09_ParamLimits

0x77c5,	// (0x0007a815) bg_button_pane_cp09

0x77d1,	// (0x0007a821) cell_call4_button_pane_g1_ParamLimits

0x77d1,	// (0x0007a821) cell_call4_button_pane_g1

0x77f7,	// (0x0007a847) cell_call4_button_pane_t1_ParamLimits

0x77f7,	// (0x0007a847) cell_call4_button_pane_t1

0xe803,	// (0x00081853) popup_call4_audio_conf_window_ParamLimits

0xe803,	// (0x00081853) popup_call4_audio_conf_window

0x6ab4,	// (0x00079b04) mup3_progress_pane_t1_ParamLimits

0x6acb,	// (0x00079b1b) mup3_progress_pane_t2_ParamLimits

0xc352,	// (0x0007f3a2) mup3_progress_pane_t3_ParamLimits

0xf7b4,	// (0x00082804) mup3_progress_pane_t_ParamLimits

0xc369,	// (0x0007f3b9) mup_progress_pane_cp03_ParamLimits

0x7075,	// (0x0007a0c5) mup3_control_keys_pane_g4_copy1

0xe319,	// (0x00081369) mp4_rocker2_pane_ParamLimits

0xe319,	// (0x00081369) mp4_rocker2_pane

0xe91f,	// (0x0008196f) mp4_rocker2_pane_g1

0xe927,	// (0x00081977) mp4_rocker2_pane_g2

0xe387,	// (0x000813d7) mp4_rocker2_pane_g3

0xe38f,	// (0x000813df) mp4_rocker2_pane_g4

0xe397,	// (0x000813e7) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0008290a) mp4_rocker2_pane_g

0xaa6c,	// (0x0007dabc) main_camera4_pane

0xaa6c,	// (0x0007dabc) main_video4_pane

0x72dd,	// (0x0007a32d) main_video_tele_dialer_pane_t1_ParamLimits

0x72dd,	// (0x0007a32d) main_video_tele_dialer_pane_t1

0x72f6,	// (0x0007a346) main_video_tele_dialer_pane_t2_ParamLimits

0x72f6,	// (0x0007a346) main_video_tele_dialer_pane_t2

0x0001,

0xf87e,	// (0x000828ce) main_video_tele_dialer_pane_t_ParamLimits

0xf87e,	// (0x000828ce) main_video_tele_dialer_pane_t

0x7835,	// (0x0007a885) cam4_autofocus_pane_ParamLimits

0x7835,	// (0x0007a885) cam4_autofocus_pane

0x784b,	// (0x0007a89b) cam4_image_uncrop_pane_ParamLimits

0x784b,	// (0x0007a89b) cam4_image_uncrop_pane

0x7865,	// (0x0007a8b5) cam4_indicators_pane_ParamLimits

0x7865,	// (0x0007a8b5) cam4_indicators_pane

0x7890,	// (0x0007a8e0) main_camera4_pane_g1_ParamLimits

0x7890,	// (0x0007a8e0) main_camera4_pane_g1

0x78a3,	// (0x0007a8f3) main_camera4_pane_g2_ParamLimits

0x78a3,	// (0x0007a8f3) main_camera4_pane_g2

0x78b6,	// (0x0007a906) main_camera4_pane_g3_ParamLimits

0x78b6,	// (0x0007a906) main_camera4_pane_g3

0x78c9,	// (0x0007a919) main_camera4_pane_g4_ParamLimits

0x78c9,	// (0x0007a919) main_camera4_pane_g4

0x78dc,	// (0x0007a92c) main_camera4_pane_g5_ParamLimits

0x78dc,	// (0x0007a92c) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x00082915) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x00082915) main_camera4_pane_g

0x7900,	// (0x0007a950) main_camera4_pane_t1_ParamLimits

0x7900,	// (0x0007a950) main_camera4_pane_t1

0xc29f,	// (0x0007f2ef) bg_tb_trans_pane_cp06

0xe3c3,	// (0x00081413) cam4_indicators_pane_g1

0xe3d4,	// (0x00081424) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x00082930) cam4_indicators_pane_g

0xe3f2,	// (0x00081442) cam4_indicators_pane_t1

0x7964,	// (0x0007a9b4) main_video4_pane_g1_ParamLimits

0x7964,	// (0x0007a9b4) main_video4_pane_g1

0x7977,	// (0x0007a9c7) main_video4_pane_g2_ParamLimits

0x7977,	// (0x0007a9c7) main_video4_pane_g2

0x798b,	// (0x0007a9db) main_video4_pane_g3_ParamLimits

0x798b,	// (0x0007a9db) main_video4_pane_g3

0x799f,	// (0x0007a9ef) main_video4_pane_g4_ParamLimits

0x799f,	// (0x0007a9ef) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x00082937) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x00082937) main_video4_pane_g

0x79c7,	// (0x0007aa17) vid4_indicators_pane_ParamLimits

0x79c7,	// (0x0007aa17) vid4_indicators_pane

0x79f7,	// (0x0007aa47) video4_image_uncrop_cif_pane_ParamLimits

0x79f7,	// (0x0007aa47) video4_image_uncrop_cif_pane

0x7a11,	// (0x0007aa61) video4_image_uncrop_nhd_pane_ParamLimits

0x7a11,	// (0x0007aa61) video4_image_uncrop_nhd_pane

0x784b,	// (0x0007a89b) video4_image_uncrop_vga_pane_ParamLimits

0x784b,	// (0x0007a89b) video4_image_uncrop_vga_pane

0xc790,	// (0x0007f7e0) bg_tb_trans_pane_cp07

0x7a25,	// (0x0007aa75) vid4_indicators_pane_g1

0x7a32,	// (0x0007aa82) vid4_indicators_pane_g2

0x7a3f,	// (0x0007aa8f) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x00082942) vid4_indicators_pane_g

0x7a64,	// (0x0007aab4) vid4_indicators_pane_t1

0x7a76,	// (0x0007aac6) cam4_autofocus_pane_g1

0x7a7e,	// (0x0007aace) cam4_autofocus_pane_g2

0x7a86,	// (0x0007aad6) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0008294d) cam4_autofocus_pane_g

0x7a8e,	// (0x0007aade) cam4_autofocus_pane_g3_copy1

0xe698,	// (0x000816e8) video_down_pane_cp_t1

0xe6a6,	// (0x000816f6) video_down_pane_cp_t2

0x0001,

0x0660,	// (0x000736b0) video_down_pane_cp_t

0xe835,	// (0x00081885) popup_vitu2_window_ParamLimits

0xe835,	// (0x00081885) popup_vitu2_window

0x7a96,	// (0x0007aae6) aid_size_cell2_itu2_ParamLimits

0x7a96,	// (0x0007aae6) aid_size_cell2_itu2

0x7abc,	// (0x0007ab0c) aid_size_cell_itu2_ParamLimits

0x7abc,	// (0x0007ab0c) aid_size_cell_itu2

0x7b18,	// (0x0007ab68) bg_popup_window_pane_cp09_ParamLimits

0x7b18,	// (0x0007ab68) bg_popup_window_pane_cp09

0x7b26,	// (0x0007ab76) field_vitu2_entry_pane_ParamLimits

0x7b26,	// (0x0007ab76) field_vitu2_entry_pane

0x7b4c,	// (0x0007ab9c) grid_vitu2_function_pane_ParamLimits

0x7b4c,	// (0x0007ab9c) grid_vitu2_function_pane

0x7b9d,	// (0x0007abed) grid_vitu2_itu_pane_ParamLimits

0x7b9d,	// (0x0007abed) grid_vitu2_itu_pane

0x7c30,	// (0x0007ac80) cell_vitu2_itu_pane_ParamLimits

0x7c30,	// (0x0007ac80) cell_vitu2_itu_pane

0x7c54,	// (0x0007aca4) cell_vitu2_function_pane_ParamLimits

0x7c54,	// (0x0007aca4) cell_vitu2_function_pane

0xe941,	// (0x00081991) bg_popup_call_pane_cp08_ParamLimits

0xe941,	// (0x00081991) bg_popup_call_pane_cp08

0xe95a,	// (0x000819aa) field_vitu2_entry_pane_g1

0xe966,	// (0x000819b6) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x00082954) field_vitu2_entry_pane_g

0xc79e,	// (0x0007f7ee) field_vitu2_entry_pane_t1_ParamLimits

0xc79e,	// (0x0007f7ee) field_vitu2_entry_pane_t1

0xc7cd,	// (0x0007f81d) field_vitu2_entry_pane_t2_ParamLimits

0xc7cd,	// (0x0007f81d) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0008295b) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0008295b) field_vitu2_entry_pane_t

0x7c93,	// (0x0007ace3) bg_button_pane_cp010_ParamLimits

0x7c93,	// (0x0007ace3) bg_button_pane_cp010

0x7ca1,	// (0x0007acf1) cell_vitu2_itu_pane_g1

0x7cbf,	// (0x0007ad0f) cell_vitu2_itu_pane_t1_ParamLimits

0x7cbf,	// (0x0007ad0f) cell_vitu2_itu_pane_t1

0x0ea4,	// (0x00073ef4) cell_vitu2_itu_pane_t2_ParamLimits

0x0ea4,	// (0x00073ef4) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x00082965) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x00082965) cell_vitu2_itu_pane_t

0xe835,	// (0x00081885) bg_button_pane_cp011

0x7d25,	// (0x0007ad75) cell_vitu2_function_pane_g1

0xaa6c,	// (0x0007dabc) main_myfav_hc_pane

0x76b3,	// (0x0007a703) popup_image3_note_pane_ParamLimits

0x76b3,	// (0x0007a703) popup_image3_note_pane

0x76cf,	// (0x0007a71f) popup_image3_tool_bar_pane_ParamLimits

0x76cf,	// (0x0007a71f) popup_image3_tool_bar_pane

0x0f28,	// (0x00073f78) cell_vitu2_itu_pane_t3_ParamLimits

0x0f28,	// (0x00073f78) cell_vitu2_itu_pane_t3

0xaa6c,	// (0x0007dabc) bg_popup_trans_pane

0x7d39,	// (0x0007ad89) grid_image3_tool_bar_pane

0x7d43,	// (0x0007ad93) bg_popup_trans_pane_g1

0x2d32,	// (0x00075d82) bg_popup_trans_pane_g2

0x7d4b,	// (0x0007ad9b) bg_popup_trans_pane_g3

0x7d53,	// (0x0007ada3) bg_popup_trans_pane_g4

0x7d5b,	// (0x0007adab) bg_popup_trans_pane_g5

0x7d63,	// (0x0007adb3) bg_popup_trans_pane_g6

0x7d6b,	// (0x0007adbb) bg_popup_trans_pane_g7

0x7d73,	// (0x0007adc3) bg_popup_trans_pane_g8

0x2d12,	// (0x00075d62) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0008296c) bg_popup_trans_pane_g

0x7d7b,	// (0x0007adcb) cell_image3_tool_bar_pane_ParamLimits

0x7d7b,	// (0x0007adcb) cell_image3_tool_bar_pane

0xc033,	// (0x0007f083) cell_image3_tool_bar_pane_g1

0xaa6c,	// (0x0007dabc) bg_popup_trans_pane_cp1

0x7d8f,	// (0x0007addf) popup_image3_note_pane_t1

0x7d9d,	// (0x0007aded) popup_image3_note_pane_t2

0x7dab,	// (0x0007adfb) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0008297f) popup_image3_note_pane_t

0x7db9,	// (0x0007ae09) popup_image3_note_pane_t3_copy1

0x7dc7,	// (0x0007ae17) bg_myfav_hc_instruction_pane_ParamLimits

0x7dc7,	// (0x0007ae17) bg_myfav_hc_instruction_pane

0x7ddb,	// (0x0007ae2b) cell_myfav_contact_pane_ParamLimits

0x7ddb,	// (0x0007ae2b) cell_myfav_contact_pane

0x7df9,	// (0x0007ae49) cell_myfav_contact_pane_cp1_ParamLimits

0x7df9,	// (0x0007ae49) cell_myfav_contact_pane_cp1

0x7e11,	// (0x0007ae61) cell_myfav_contact_pane_cp2_ParamLimits

0x7e11,	// (0x0007ae61) cell_myfav_contact_pane_cp2

0x7e29,	// (0x0007ae79) cell_myfav_contact_pane_cp3_ParamLimits

0x7e29,	// (0x0007ae79) cell_myfav_contact_pane_cp3

0x7e40,	// (0x0007ae90) cell_myfav_contact_pane_cp4_ParamLimits

0x7e40,	// (0x0007ae90) cell_myfav_contact_pane_cp4

0x7e58,	// (0x0007aea8) cell_myfav_contact_pane_cp5_ParamLimits

0x7e58,	// (0x0007aea8) cell_myfav_contact_pane_cp5

0x7e6c,	// (0x0007aebc) cell_myfav_contact_pane_cp6_ParamLimits

0x7e6c,	// (0x0007aebc) cell_myfav_contact_pane_cp6

0x7e82,	// (0x0007aed2) cell_myfav_contact_pane_cp7_ParamLimits

0x7e82,	// (0x0007aed2) cell_myfav_contact_pane_cp7

0x7e9c,	// (0x0007aeec) listscroll_gen_pane_cp05

0x7ea5,	// (0x0007aef5) main_myfav_hc_pane_g1_ParamLimits

0x7ea5,	// (0x0007aef5) main_myfav_hc_pane_g1

0x7ebf,	// (0x0007af0f) main_myfav_hc_pane_g2_ParamLimits

0x7ebf,	// (0x0007af0f) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x00082986) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x00082986) main_myfav_hc_pane_g

0x7ef1,	// (0x0007af41) main_myfav_hc_pane_t1_ParamLimits

0x7ef1,	// (0x0007af41) main_myfav_hc_pane_t1

0x7f08,	// (0x0007af58) main_myfav_hc_pane_t2_ParamLimits

0x7f08,	// (0x0007af58) main_myfav_hc_pane_t2

0x7f1a,	// (0x0007af6a) main_myfav_hc_pane_t3_ParamLimits

0x7f1a,	// (0x0007af6a) main_myfav_hc_pane_t3

0x7f2c,	// (0x0007af7c) main_myfav_hc_pane_t4_ParamLimits

0x7f2c,	// (0x0007af7c) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0008298d) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0008298d) main_myfav_hc_pane_t

0xc033,	// (0x0007f083) bg_myfav_hc_instruction_pane_g1

0x7f54,	// (0x0007afa4) cell_myfav_contact_pane_g1_ParamLimits

0x7f54,	// (0x0007afa4) cell_myfav_contact_pane_g1

0x7f54,	// (0x0007afa4) cell_myfav_contact_pane_g2_ParamLimits

0x7f54,	// (0x0007afa4) cell_myfav_contact_pane_g2

0x7f60,	// (0x0007afb0) cell_myfav_contact_pane_g3_ParamLimits

0x7f60,	// (0x0007afb0) cell_myfav_contact_pane_g3

0xc33c,	// (0x0007f38c) cell_myfav_contact_pane_g4_ParamLimits

0xc33c,	// (0x0007f38c) cell_myfav_contact_pane_g4

0x7f6d,	// (0x0007afbd) cell_myfav_contact_pane_g5_ParamLimits

0x7f6d,	// (0x0007afbd) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x00082998) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x00082998) cell_myfav_contact_pane_g

0x7ed9,	// (0x0007af29) main_myfav_hc_pane_g3_ParamLimits

0x7ed9,	// (0x0007af29) main_myfav_hc_pane_g3

0x18d4,	// (0x00074924) popup_adpt_find_window

0x7f79,	// (0x0007afc9) afind_page_pane_ParamLimits

0x7f79,	// (0x0007afc9) afind_page_pane

0x7f8e,	// (0x0007afde) aid_size_cell_afind_ParamLimits

0x7f8e,	// (0x0007afde) aid_size_cell_afind

0x7fac,	// (0x0007affc) bg_popup_sub_pane_cp09_ParamLimits

0x7fac,	// (0x0007affc) bg_popup_sub_pane_cp09

0x7fb9,	// (0x0007b009) find_pane_cp01_ParamLimits

0x7fb9,	// (0x0007b009) find_pane_cp01

0x7fc6,	// (0x0007b016) grid_afind_control_pane_ParamLimits

0x7fc6,	// (0x0007b016) grid_afind_control_pane

0x7fda,	// (0x0007b02a) grid_afind_pane_ParamLimits

0x7fda,	// (0x0007b02a) grid_afind_pane

0x7ffc,	// (0x0007b04c) cell_afind_pane_ParamLimits

0x7ffc,	// (0x0007b04c) cell_afind_pane

0xc033,	// (0x0007f083) afind_page_pane_g1

0x805d,	// (0x0007b0ad) afind_page_pane_g2

0x8066,	// (0x0007b0b6) afind_page_pane_g3

0x0002,

0xf953,	// (0x000829a3) afind_page_pane_g

0x806f,	// (0x0007b0bf) afind_page_pane_t1

0x808f,	// (0x0007b0df) cell_afind_grid_control_pane_ParamLimits

0x808f,	// (0x0007b0df) cell_afind_grid_control_pane

0xe738,	// (0x00081788) bg_button_pane_cp69_ParamLimits

0xe738,	// (0x00081788) bg_button_pane_cp69

0x809e,	// (0x0007b0ee) cell_afind_pane_g1_ParamLimits

0x809e,	// (0x0007b0ee) cell_afind_pane_g1

0x80ab,	// (0x0007b0fb) cell_afind_pane_t1_ParamLimits

0x80ab,	// (0x0007b0fb) cell_afind_pane_t1

0x26d2,	// (0x00075722) bg_button_pane_cp72

0x80bd,	// (0x0007b10d) cell_afind_grid_control_pane_g1

0x4dff,	// (0x00077e4f) aid_image_placing_area_ParamLimits

0x4dff,	// (0x00077e4f) aid_image_placing_area

0xc635,	// (0x0007f685) field_vitu_entry_pane_g1_ParamLimits

0xc635,	// (0x0007f685) field_vitu_entry_pane_g1

0xc641,	// (0x0007f691) field_vitu_entry_pane_g2_ParamLimits

0xc641,	// (0x0007f691) field_vitu_entry_pane_g2

0x0001,

0xf829,	// (0x00082879) field_vitu_entry_pane_g_ParamLimits

0xf829,	// (0x00082879) field_vitu_entry_pane_g

0x713c,	// (0x0007a18c) cell_vitu_itu_pane_g1_ParamLimits

0x717e,	// (0x0007a1ce) cell_vitu_itu_pane_t3_ParamLimits

0x717e,	// (0x0007a1ce) cell_vitu_itu_pane_t3

0xe6e8,	// (0x00081738) mp4_progress_pane_t1_ParamLimits

0xe701,	// (0x00081751) mp4_progress_pane_t2_ParamLimits

0x0680,	// (0x000736d0) mp4_progress_pane_t_ParamLimits

0xe71a,	// (0x0008176a) mup_progress_pane_cp04_ParamLimits

0x7f40,	// (0x0007af90) main_myfav_hc_pane_t5_ParamLimits

0x7f40,	// (0x0007af90) main_myfav_hc_pane_t5

0xaa92,	// (0x0007dae2) aid_zoom_text_primary

0x18d4,	// (0x00074924) popup_adpt_find_window_ParamLimits

0xe835,	// (0x00081885) main_cam_set_pane

0x787c,	// (0x0007a8cc) cam4_zoom_pane_ParamLimits

0x787c,	// (0x0007a8cc) cam4_zoom_pane

0x80c6,	// (0x0007b116) main_cam_set_pane_g1_ParamLimits

0x80c6,	// (0x0007b116) main_cam_set_pane_g1

0x80d4,	// (0x0007b124) main_cam_set_pane_g2_ParamLimits

0x80d4,	// (0x0007b124) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x000829aa) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x000829aa) main_cam_set_pane_g

0x80f5,	// (0x0007b145) main_cam_set_pane_t1_ParamLimits

0x80f5,	// (0x0007b145) main_cam_set_pane_t1

0x8110,	// (0x0007b160) main_cset_listscroll_pane_ParamLimits

0x8110,	// (0x0007b160) main_cset_listscroll_pane

0x8130,	// (0x0007b180) main_cset_slider_pane_ParamLimits

0x8130,	// (0x0007b180) main_cset_slider_pane

0x815e,	// (0x0007b1ae) main_cset_list_pane_ParamLimits

0x815e,	// (0x0007b1ae) main_cset_list_pane

0x816e,	// (0x0007b1be) scroll_pane_cp028

0x8177,	// (0x0007b1c7) aid_area_touch_slider

0x8193,	// (0x0007b1e3) cset_slider_pane

0x81bd,	// (0x0007b20d) main_cset_slider_pane_g1

0x81d2,	// (0x0007b222) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x000829af) main_cset_slider_pane_g

0x82be,	// (0x0007b30e) main_cset_slider_pane_t1

0x82ec,	// (0x0007b33c) main_cset_slider_pane_t2

0x8306,	// (0x0007b356) main_cset_slider_pane_t3

0x8320,	// (0x0007b370) main_cset_slider_pane_t4

0x833a,	// (0x0007b38a) main_cset_slider_pane_t5

0x8354,	// (0x0007b3a4) main_cset_slider_pane_t6

0x8369,	// (0x0007b3b9) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x000829d4) main_cset_slider_pane_t

0x84df,	// (0x0007b52f) cset_list_set_pane_ParamLimits

0x84df,	// (0x0007b52f) cset_list_set_pane

0x84f1,	// (0x0007b541) aid_position_infowindow_above

0x84f9,	// (0x0007b549) aid_position_infowindow_below

0x8501,	// (0x0007b551) cset_list_set_pane_g1_ParamLimits

0x8501,	// (0x0007b551) cset_list_set_pane_g1

0xc7ea,	// (0x0007f83a) cset_list_set_pane_g3_ParamLimits

0xc7ea,	// (0x0007f83a) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x000829f3) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x000829f3) cset_list_set_pane_g

0xc7f9,	// (0x0007f849) cset_list_set_pane_t1_ParamLimits

0xc7f9,	// (0x0007f849) cset_list_set_pane_t1

0xe835,	// (0x00081885) list_highlight_pane_cp021_ParamLimits

0xe835,	// (0x00081885) list_highlight_pane_cp021

0x4680,	// (0x000776d0) cset_slider_pane_g1

0x4692,	// (0x000776e2) cset_slider_pane_g2

0x4689,	// (0x000776d9) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x000829f8) cset_slider_pane_g

0xe41e,	// (0x0008146e) aid_area_touch_cam4_zoom

0xe426,	// (0x00081476) cam4_zoom_cont_pane

0xe42e,	// (0x0008147e) cam4_zoom_pane_g1

0xe436,	// (0x00081486) cam4_zoom_pane_g2

0x850d,	// (0x0007b55d) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x000829ff) cam4_zoom_pane_g

0xc80e,	// (0x0007f85e) cam4_zoom_cont_pane_g1

0xc817,	// (0x0007f867) cam4_zoom_cont_pane_g2

0xc820,	// (0x0007f870) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x00082a06) cam4_zoom_cont_pane_g

0x773c,	// (0x0007a78c) call4_image_pane_ParamLimits

0x773c,	// (0x0007a78c) call4_image_pane

0xe744,	// (0x00081794) call4_windows_conf_pane_ParamLimits

0xe785,	// (0x000817d5) popup_call4_audio_in_window_ParamLimits

0xe785,	// (0x000817d5) popup_call4_audio_in_window

0xaa6c,	// (0x0007dabc) bg_popup_call2_act_pane_cp02

0xe7fb,	// (0x0008184b) call4_list_conf_pane

0xc033,	// (0x0007f083) call4_image_pane_g1

0xc033,	// (0x0007f083) call4_image_pane_g2

0x0001,

0xf6f4,	// (0x00082744) call4_image_pane_g

0x8515,	// (0x0007b565) list_single_graphic_popup_conf4_pane_ParamLimits

0x8515,	// (0x0007b565) list_single_graphic_popup_conf4_pane

0xaa6c,	// (0x0007dabc) list_highlight_pane_cp022

0x8528,	// (0x0007b578) list_single_graphic_popup_conf4_pane_g1

0x3c14,	// (0x00076c64) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x00082a0d) list_single_graphic_popup_conf4_pane_g

0x8530,	// (0x0007b580) list_single_graphic_popup_conf4_pane_t1

0x289b,	// (0x000758eb) popup_vtel_slider_window_ParamLimits

0x289b,	// (0x000758eb) popup_vtel_slider_window

0xe726,	// (0x00081776) dialer2_ne_pane_t2_ParamLimits

0xe726,	// (0x00081776) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x000828ee) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x000828ee) dialer2_ne_pane_t

0xbe18,	// (0x0007ee68) bg_popup_sub_pane_cp010_ParamLimits

0xbe18,	// (0x0007ee68) bg_popup_sub_pane_cp010

0x8546,	// (0x0007b596) popup_vtel_slider_window_g1_ParamLimits

0x8546,	// (0x0007b596) popup_vtel_slider_window_g1

0x8559,	// (0x0007b5a9) popup_vtel_slider_window_g2_ParamLimits

0x8559,	// (0x0007b5a9) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x00082a12) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x00082a12) popup_vtel_slider_window_g

0x85af,	// (0x0007b5ff) vtel_slider_pane_ParamLimits

0x85af,	// (0x0007b5ff) vtel_slider_pane

0x85d1,	// (0x0007b621) vtel_slider_pane_g1_ParamLimits

0x85d1,	// (0x0007b621) vtel_slider_pane_g1

0x85e5,	// (0x0007b635) vtel_slider_pane_g2_ParamLimits

0x85e5,	// (0x0007b635) vtel_slider_pane_g2

0x85fd,	// (0x0007b64d) vtel_slider_pane_g3_ParamLimits

0x85fd,	// (0x0007b64d) vtel_slider_pane_g3

0x85d1,	// (0x0007b621) vtel_slider_pane_g4_ParamLimits

0x85d1,	// (0x0007b621) vtel_slider_pane_g4

0x8613,	// (0x0007b663) vtel_slider_pane_g5_ParamLimits

0x8613,	// (0x0007b663) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x00082a1b) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x00082a1b) vtel_slider_pane_g

0xaa6c,	// (0x0007dabc) main_gallery2_pane

0x7ae8,	// (0x0007ab38) aid_size_row_itut2_dropdow_list_ParamLimits

0x7ae8,	// (0x0007ab38) aid_size_row_itut2_dropdow_list

0x7b74,	// (0x0007abc4) grid_vitu2_function_top_pane_ParamLimits

0x7b74,	// (0x0007abc4) grid_vitu2_function_top_pane

0x7bd9,	// (0x0007ac29) popup_vitu2_dropdown_list_window_ParamLimits

0x7bd9,	// (0x0007ac29) popup_vitu2_dropdown_list_window

0x7c02,	// (0x0007ac52) popup_vitu2_match_list_window

0x8629,	// (0x0007b679) cell_vitu2_function_top_pane_ParamLimits

0x8629,	// (0x0007b679) cell_vitu2_function_top_pane

0x8647,	// (0x0007b697) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8647,	// (0x0007b697) cell_vitu2_function_top_pane_cp01

0x8665,	// (0x0007b6b5) cell_vitu2_function_top_wide_pane_ParamLimits

0x8665,	// (0x0007b6b5) cell_vitu2_function_top_wide_pane

0xe835,	// (0x00081885) bg_button_pane_cp012

0x8683,	// (0x0007b6d3) cell_vitu2_function_top_pane_g1

0xe43e,	// (0x0008148e) bg_button_pane_cp013_ParamLimits

0xe43e,	// (0x0008148e) bg_button_pane_cp013

0x8697,	// (0x0007b6e7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8697,	// (0x0007b6e7) cell_vitu2_function_top_wide_pane_g1

0xe835,	// (0x00081885) bg_popup_sub_pane_cp20

0x86af,	// (0x0007b6ff) list_vitu2_match_list_pane

0x7d43,	// (0x0007ad93) bg_popup_sub_pane_cp20_g1

0x7d4b,	// (0x0007ad9b) bg_popup_sub_pane_cp20_g2

0x2d32,	// (0x00075d82) bg_popup_sub_pane_cp20_g3

0x7d53,	// (0x0007ada3) bg_popup_sub_pane_cp20_g4

0x2d12,	// (0x00075d62) bg_popup_sub_pane_cp20_g5

0x86cd,	// (0x0007b71d) bg_popup_sub_pane_cp20_g6

0x7d63,	// (0x0007adb3) bg_popup_sub_pane_cp20_g7

0x7d6b,	// (0x0007adbb) bg_popup_sub_pane_cp20_g8

0x7d73,	// (0x0007adc3) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x00082a26) bg_popup_sub_pane_cp20_g

0xe45a,	// (0x000814aa) list_vitu2_match_list_item_pane_ParamLimits

0xe45a,	// (0x000814aa) list_vitu2_match_list_item_pane

0xe46c,	// (0x000814bc) list_vitu2_match_list_item_pane_t1

0xaa6c,	// (0x0007dabc) bg_popup_sub_pane_cp21

0x3b18,	// (0x00076b68) grid_vitu2_dropdown_list_pane

0x86d5,	// (0x0007b725) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x86d5,	// (0x0007b725) cell_vitu2_dropdown_list_char_pane

0x86f6,	// (0x0007b746) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x86f6,	// (0x0007b746) cell_vitu2_dropdown_list_ctrl_pane

0x8722,	// (0x0007b772) cell_vitu2_dropdown_list_char_pane_g1

0x872b,	// (0x0007b77b) cell_vitu2_dropdown_list_char_pane_g2

0x8734,	// (0x0007b784) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x00082a43) cell_vitu2_dropdown_list_char_pane_g

0x873d,	// (0x0007b78d) cell_vitu2_dropdown_list_char_pane_t1

0x874b,	// (0x0007b79b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x874b,	// (0x0007b79b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8758,	// (0x0007b7a8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8758,	// (0x0007b7a8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8765,	// (0x0007b7b5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8765,	// (0x0007b7b5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8772,	// (0x0007b7c2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8772,	// (0x0007b7c2) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc29f,	// (0x0007f2ef) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc29f,	// (0x0007f2ef) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x00082a4a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x00082a4a) cell_vitu2_dropdown_list_ctrl_pane_g

0x878e,	// (0x0007b7de) aid_size_cell_gallery2_ParamLimits

0x878e,	// (0x0007b7de) aid_size_cell_gallery2

0x87a4,	// (0x0007b7f4) grid_gallery2_pane_ParamLimits

0x87a4,	// (0x0007b7f4) grid_gallery2_pane

0x87b8,	// (0x0007b808) scroll_pane_cp029_ParamLimits

0x87b8,	// (0x0007b808) scroll_pane_cp029

0x87c4,	// (0x0007b814) cell_gallery2_pane_ParamLimits

0x87c4,	// (0x0007b814) cell_gallery2_pane

0x87fa,	// (0x0007b84a) cell_gallery2_pane_g2

0x8804,	// (0x0007b854) cell_gallery2_pane_g3

0x880c,	// (0x0007b85c) cell_gallery2_pane_g4

0x8814,	// (0x0007b864) cell_gallery2_pane_g5

0x4144,	// (0x00077194) grid_highlight_pane_cp10

0x7c02,	// (0x0007ac52) popup_vitu2_match_list_window_ParamLimits

0x7c19,	// (0x0007ac69) popup_vitu2_query_window_ParamLimits

0x7c19,	// (0x0007ac69) popup_vitu2_query_window

0xaa6c,	// (0x0007dabc) bg_vitu2_candi_button_pane

0x8722,	// (0x0007b772) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x872b,	// (0x0007b77b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x8734,	// (0x0007b784) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0fb5,	// (0x00074005) bg_button_pane_cp015

0x881c,	// (0x0007b86c) bg_button_pane_cp016

0x882f,	// (0x0007b87f) bg_button_pane_cp017

0xbb2d,	// (0x0007eb7d) bg_popup_sub_pane_cp22

0x8853,	// (0x0007b8a3) popup_vitu2_query_window_g1

0x0fe8,	// (0x00074038) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x00082a55) popup_vitu2_query_window_g

0x1007,	// (0x00074057) popup_vitu2_query_window_t1_ParamLimits

0x1007,	// (0x00074057) popup_vitu2_query_window_t1

0x103c,	// (0x0007408c) popup_vitu2_query_window_t2_ParamLimits

0x103c,	// (0x0007408c) popup_vitu2_query_window_t2

0x104e,	// (0x0007409e) popup_vitu2_query_window_t3_ParamLimits

0x104e,	// (0x0007409e) popup_vitu2_query_window_t3

0x885f,	// (0x0007b8af) popup_vitu2_query_window_t4_ParamLimits

0x885f,	// (0x0007b8af) popup_vitu2_query_window_t4

0x8880,	// (0x0007b8d0) popup_vitu2_query_window_t5_ParamLimits

0x8880,	// (0x0007b8d0) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x00082a5c) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x00082a5c) popup_vitu2_query_window_t

0x8156,	// (0x0007b1a6) main_cset_text_pane

0x8177,	// (0x0007b1c7) aid_area_touch_slider_ParamLimits

0x8193,	// (0x0007b1e3) cset_slider_pane_ParamLimits

0x81bd,	// (0x0007b20d) main_cset_slider_pane_g1_ParamLimits

0x81d2,	// (0x0007b222) main_cset_slider_pane_g2_ParamLimits

0x81e7,	// (0x0007b237) main_cset_slider_pane_g3_ParamLimits

0x81e7,	// (0x0007b237) main_cset_slider_pane_g3

0x81f3,	// (0x0007b243) main_cset_slider_pane_g4_ParamLimits

0x81f3,	// (0x0007b243) main_cset_slider_pane_g4

0x8202,	// (0x0007b252) main_cset_slider_pane_g5_ParamLimits

0x8202,	// (0x0007b252) main_cset_slider_pane_g5

0x820e,	// (0x0007b25e) main_cset_slider_pane_g6_ParamLimits

0x820e,	// (0x0007b25e) main_cset_slider_pane_g6

0xf95f,	// (0x000829af) main_cset_slider_pane_g_ParamLimits

0x82be,	// (0x0007b30e) main_cset_slider_pane_t1_ParamLimits

0x82ec,	// (0x0007b33c) main_cset_slider_pane_t2_ParamLimits

0x8306,	// (0x0007b356) main_cset_slider_pane_t3_ParamLimits

0x8320,	// (0x0007b370) main_cset_slider_pane_t4_ParamLimits

0x833a,	// (0x0007b38a) main_cset_slider_pane_t5_ParamLimits

0x8354,	// (0x0007b3a4) main_cset_slider_pane_t6_ParamLimits

0x8369,	// (0x0007b3b9) main_cset_slider_pane_t7_ParamLimits

0x8393,	// (0x0007b3e3) main_cset_slider_pane_t8_ParamLimits

0x8393,	// (0x0007b3e3) main_cset_slider_pane_t8

0x83bb,	// (0x0007b40b) main_cset_slider_pane_t9_ParamLimits

0x83bb,	// (0x0007b40b) main_cset_slider_pane_t9

0x83e3,	// (0x0007b433) main_cset_slider_pane_t10_ParamLimits

0x83e3,	// (0x0007b433) main_cset_slider_pane_t10

0x840b,	// (0x0007b45b) main_cset_slider_pane_t11_ParamLimits

0x840b,	// (0x0007b45b) main_cset_slider_pane_t11

0x8433,	// (0x0007b483) main_cset_slider_pane_t12_ParamLimits

0x8433,	// (0x0007b483) main_cset_slider_pane_t12

0x8450,	// (0x0007b4a0) main_cset_slider_pane_t13_ParamLimits

0x8450,	// (0x0007b4a0) main_cset_slider_pane_t13

0xf984,	// (0x000829d4) main_cset_slider_pane_t_ParamLimits

0xaa6c,	// (0x0007dabc) bg_popup_sub_pane_cp011

0x88a1,	// (0x0007b8f1) main_cset_text_pane_g1

0x88a9,	// (0x0007b8f9) main_cset_text_pane_t1

0x88b7,	// (0x0007b907) main_cset_text_pane_t2

0x88c5,	// (0x0007b915) main_cset_text_pane_t3

0x88d3,	// (0x0007b923) main_cset_text_pane_t4

0x88e1,	// (0x0007b931) main_cset_text_pane_t5

0x88ef,	// (0x0007b93f) main_cset_text_pane_t6

0x88fd,	// (0x0007b94d) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x00082a6b) main_cset_text_pane_t

0xaa6c,	// (0x0007dabc) main_cam4_burst_pane

0xaa6c,	// (0x0007dabc) main_cam5_pane

0x807d,	// (0x0007b0cd) bg_button_pane_cp019

0x8086,	// (0x0007b0d6) bg_button_pane_cp020

0x8222,	// (0x0007b272) main_cset_slider_pane_g7_ParamLimits

0x8222,	// (0x0007b272) main_cset_slider_pane_g7

0x822e,	// (0x0007b27e) main_cset_slider_pane_g8_ParamLimits

0x822e,	// (0x0007b27e) main_cset_slider_pane_g8

0x823a,	// (0x0007b28a) main_cset_slider_pane_g9_ParamLimits

0x823a,	// (0x0007b28a) main_cset_slider_pane_g9

0x8246,	// (0x0007b296) main_cset_slider_pane_g10_ParamLimits

0x8246,	// (0x0007b296) main_cset_slider_pane_g10

0x8252,	// (0x0007b2a2) main_cset_slider_pane_g11_ParamLimits

0x8252,	// (0x0007b2a2) main_cset_slider_pane_g11

0x825e,	// (0x0007b2ae) main_cset_slider_pane_g12_ParamLimits

0x825e,	// (0x0007b2ae) main_cset_slider_pane_g12

0x826a,	// (0x0007b2ba) main_cset_slider_pane_g13_ParamLimits

0x826a,	// (0x0007b2ba) main_cset_slider_pane_g13

0x8276,	// (0x0007b2c6) main_cset_slider_pane_g14_ParamLimits

0x8276,	// (0x0007b2c6) main_cset_slider_pane_g14

0x8282,	// (0x0007b2d2) main_cset_slider_pane_g15_ParamLimits

0x8282,	// (0x0007b2d2) main_cset_slider_pane_g15

0x846d,	// (0x0007b4bd) main_cset_slider_pane_t14_ParamLimits

0x846d,	// (0x0007b4bd) main_cset_slider_pane_t14

0x84a6,	// (0x0007b4f6) main_cset_slider_pane_t15_ParamLimits

0x84a6,	// (0x0007b4f6) main_cset_slider_pane_t15

0x890b,	// (0x0007b95b) aid_cam4_burst_size_cell_ParamLimits

0x890b,	// (0x0007b95b) aid_cam4_burst_size_cell

0x892b,	// (0x0007b97b) grid_cam4_burst_pane_ParamLimits

0x892b,	// (0x0007b97b) grid_cam4_burst_pane

0x8963,	// (0x0007b9b3) linegrid_cam4_burst_pane_ParamLimits

0x8963,	// (0x0007b9b3) linegrid_cam4_burst_pane

0x8987,	// (0x0007b9d7) scroll_pane_cp30_ParamLimits

0x8987,	// (0x0007b9d7) scroll_pane_cp30

0x8993,	// (0x0007b9e3) cell_cam4_burst_pane_ParamLimits

0x8993,	// (0x0007b9e3) cell_cam4_burst_pane

0x89e0,	// (0x0007ba30) linegrid_cam4_burst_pane_g1_ParamLimits

0x89e0,	// (0x0007ba30) linegrid_cam4_burst_pane_g1

0x89ed,	// (0x0007ba3d) linegrid_cam4_burst_pane_g2_ParamLimits

0x89ed,	// (0x0007ba3d) linegrid_cam4_burst_pane_g2

0x89fe,	// (0x0007ba4e) linegrid_cam4_burst_pane_g3_ParamLimits

0x89fe,	// (0x0007ba4e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x00082a7a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x00082a7a) linegrid_cam4_burst_pane_g

0x8a0b,	// (0x0007ba5b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8a0b,	// (0x0007ba5b) linegrid_cam4_burst_pane_g3_copy1

0x8a25,	// (0x0007ba75) linegrid_cam4_burst_pane_g4_ParamLimits

0x8a25,	// (0x0007ba75) linegrid_cam4_burst_pane_g4

0x8a32,	// (0x0007ba82) linegrid_cam4_burst_pane_g5_ParamLimits

0x8a32,	// (0x0007ba82) linegrid_cam4_burst_pane_g5

0x8a43,	// (0x0007ba93) linegrid_cam4_burst_pane_g6_ParamLimits

0x8a43,	// (0x0007ba93) linegrid_cam4_burst_pane_g6

0x8a5a,	// (0x0007baaa) linegrid_cam4_burst_pane_g7_ParamLimits

0x8a5a,	// (0x0007baaa) linegrid_cam4_burst_pane_g7

0x8a67,	// (0x0007bab7) cell_cam4_burst_pane_g1

0x8a86,	// (0x0007bad6) main_cam5_pane_t1_ParamLimits

0x8a86,	// (0x0007bad6) main_cam5_pane_t1

0x8a98,	// (0x0007bae8) main_cam5_pane_t2_ParamLimits

0x8a98,	// (0x0007bae8) main_cam5_pane_t2

0x8aaa,	// (0x0007bafa) main_cam5_pane_t3_ParamLimits

0x8aaa,	// (0x0007bafa) main_cam5_pane_t3

0x8abc,	// (0x0007bb0c) main_cam5_pane_t4_ParamLimits

0x8abc,	// (0x0007bb0c) main_cam5_pane_t4

0x8ad4,	// (0x0007bb24) main_cam5_pane_t5_ParamLimits

0x8ad4,	// (0x0007bb24) main_cam5_pane_t5

0x8ae8,	// (0x0007bb38) main_cam5_pane_t6_ParamLimits

0x8ae8,	// (0x0007bb38) main_cam5_pane_t6

0x8afc,	// (0x0007bb4c) main_cam5_pane_t7_ParamLimits

0x8afc,	// (0x0007bb4c) main_cam5_pane_t7

0x8b0e,	// (0x0007bb5e) main_cam5_pane_t8_ParamLimits

0x8b0e,	// (0x0007bb5e) main_cam5_pane_t8

0x8b2a,	// (0x0007bb7a) main_cam5_pane_t9_ParamLimits

0x8b2a,	// (0x0007bb7a) main_cam5_pane_t9

0x8b3c,	// (0x0007bb8c) main_cam5_pane_t10_ParamLimits

0x8b3c,	// (0x0007bb8c) main_cam5_pane_t10

0x8b4e,	// (0x0007bb9e) main_cam5_pane_t11_ParamLimits

0x8b4e,	// (0x0007bb9e) main_cam5_pane_t11

0x8b60,	// (0x0007bbb0) main_cam5_pane_t12_ParamLimits

0x8b60,	// (0x0007bbb0) main_cam5_pane_t12

0x8b75,	// (0x0007bbc5) main_cam5_pane_t13_ParamLimits

0x8b75,	// (0x0007bbc5) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x00082a86) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x00082a86) main_cam5_pane_t

0x1956,	// (0x000749a6) popup_scut_keymap_window_ParamLimits

0x1956,	// (0x000749a6) popup_scut_keymap_window

0x8b92,	// (0x0007bbe2) aid_size_cell_brow_shortcut

0x4144,	// (0x00077194) bg_popup_window_pane_cp010

0x8b9e,	// (0x0007bbee) grid_scut_pane

0x8baa,	// (0x0007bbfa) cell_scut_pane_ParamLimits

0x8baa,	// (0x0007bbfa) cell_scut_pane

0x8bc1,	// (0x0007bc11) cell_scut_pane_g1

0x8bca,	// (0x0007bc1a) cell_scut_pane_t1

0x8bd9,	// (0x0007bc29) cell_scut_pane_t2

0x8be8,	// (0x0007bc38) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x00082aa1) cell_scut_pane_t

0x6699,	// (0x000796e9) main_mup3_pane_g8_ParamLimits

0x6699,	// (0x000796e9) main_mup3_pane_g8

0x7b00,	// (0x0007ab50) area_vitu2_query_pane_ParamLimits

0x7b00,	// (0x0007ab50) area_vitu2_query_pane

0x0fc7,	// (0x00074017) input_focus_pane_cp08

0x8bf6,	// (0x0007bc46) area_vitu2_query_pane_g1

0x10cc,	// (0x0007411c) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x00082aa8) area_vitu2_query_pane_g

0x8c02,	// (0x0007bc52) area_vitu2_query_pane_t1_ParamLimits

0x8c02,	// (0x0007bc52) area_vitu2_query_pane_t1

0x8c16,	// (0x0007bc66) area_vitu2_query_pane_t2_ParamLimits

0x8c16,	// (0x0007bc66) area_vitu2_query_pane_t2

0x10dd,	// (0x0007412d) area_vitu2_query_pane_t3_ParamLimits

0x10dd,	// (0x0007412d) area_vitu2_query_pane_t3

0xc84f,	// (0x0007f89f) area_vitu2_query_pane_t4_ParamLimits

0xc84f,	// (0x0007f89f) area_vitu2_query_pane_t4

0xc877,	// (0x0007f8c7) area_vitu2_query_pane_t5_ParamLimits

0xc877,	// (0x0007f8c7) area_vitu2_query_pane_t5

0xc89f,	// (0x0007f8ef) area_vitu2_query_pane_t6_ParamLimits

0xc89f,	// (0x0007f8ef) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x00082aad) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x00082aad) area_vitu2_query_pane_t

0x8c2a,	// (0x0007bc7a) bg_button_pane_cp018

0x8c38,	// (0x0007bc88) bg_button_pane_cp021

0x1105,	// (0x00074155) bg_button_pane_cp022

0x1114,	// (0x00074164) input_focus_pane_cp09

0x3f6f,	// (0x00076fbf) aid_size_touch_mv_arrow_left

0x3f98,	// (0x00076fe8) aid_size_touch_mv_arrow_right

0x829a,	// (0x0007b2ea) main_cset_slider_pane_g16_ParamLimits

0x829a,	// (0x0007b2ea) main_cset_slider_pane_g16

0x82a6,	// (0x0007b2f6) main_cset_slider_pane_g17_ParamLimits

0x82a6,	// (0x0007b2f6) main_cset_slider_pane_g17

0x8a67,	// (0x0007bab7) cell_cam4_burst_pane_g1_ParamLimits

0xaa6c,	// (0x0007dabc) compa_mode_pane

0x8569,	// (0x0007b5b9) popup_vtel_slider_window_g3_ParamLimits

0x8569,	// (0x0007b5b9) popup_vtel_slider_window_g3

0x8580,	// (0x0007b5d0) popup_vtel_slider_window_g4_ParamLimits

0x8580,	// (0x0007b5d0) popup_vtel_slider_window_g4

0x8597,	// (0x0007b5e7) popup_vtel_slider_window_t1_ParamLimits

0x8597,	// (0x0007b5e7) popup_vtel_slider_window_t1

0xaa6c,	// (0x0007dabc) main_cl_pane

0xbb55,	// (0x0007eba5) popup_imed_adjust2_window_ParamLimits

0xbb2d,	// (0x0007eb7d) bg_tb_trans_pane_cp05_ParamLimits

0xc56a,	// (0x0007f5ba) popup_imed_adjust2_window_g1_ParamLimits

0xc579,	// (0x0007f5c9) popup_imed_adjust2_window_g2_ParamLimits

0xc579,	// (0x0007f5c9) popup_imed_adjust2_window_g2

0xc585,	// (0x0007f5d5) popup_imed_adjust2_window_g3_ParamLimits

0xc585,	// (0x0007f5d5) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x00082842) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x00082842) popup_imed_adjust2_window_g

0xc591,	// (0x0007f5e1) popup_imed_adjust2_window_t1_ParamLimits

0xc5a9,	// (0x0007f5f9) slider_imed_adjust_pane_ParamLimits

0xc5bd,	// (0x0007f60d) slider_imed_adjust_pane_g1_ParamLimits

0xc5cd,	// (0x0007f61d) slider_imed_adjust_pane_g2_ParamLimits

0xc5dd,	// (0x0007f62d) slider_imed_adjust_pane_g3_ParamLimits

0xc5ee,	// (0x0007f63e) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x00082849) slider_imed_adjust_pane_g_ParamLimits

0x781d,	// (0x0007a86d) aid_touch_area_cam4_ParamLimits

0x781d,	// (0x0007a86d) aid_touch_area_cam4

0xe39f,	// (0x000813ef) battery_pane_cp01

0x78ed,	// (0x0007a93d) main_camera4_pane_g6_ParamLimits

0x78ed,	// (0x0007a93d) main_camera4_pane_g6

0x7917,	// (0x0007a967) main_camera4_pane_t2_ParamLimits

0x7917,	// (0x0007a967) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x00082922) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x00082922) main_camera4_pane_t

0x794c,	// (0x0007a99c) aid_touch_area_vid4_ParamLimits

0x794c,	// (0x0007a99c) aid_touch_area_vid4

0x79b3,	// (0x0007aa03) main_video4_pane_g5_ParamLimits

0x79b3,	// (0x0007aa03) main_video4_pane_g5

0x79de,	// (0x0007aa2e) vid4_progress_pane_ParamLimits

0x79de,	// (0x0007aa2e) vid4_progress_pane

0x82b2,	// (0x0007b302) main_cset_slider_pane_g18_ParamLimits

0x82b2,	// (0x0007b302) main_cset_slider_pane_g18

0x8a7a,	// (0x0007baca) cell_cam4_burst_pane_g2_ParamLimits

0x8a7a,	// (0x0007baca) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x00082a81) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x00082a81) cell_cam4_burst_pane_g

0xeff1,	// (0x00082041) bg_cl_pane_ParamLimits

0xeff1,	// (0x00082041) bg_cl_pane

0x8c44,	// (0x0007bc94) cl_header_pane_ParamLimits

0x8c44,	// (0x0007bc94) cl_header_pane

0x8c58,	// (0x0007bca8) cl_listscroll_pane_ParamLimits

0x8c58,	// (0x0007bca8) cl_listscroll_pane

0x8c68,	// (0x0007bcb8) bg_cl_pane_g1

0x8c70,	// (0x0007bcc0) bg_cl_pane_g2

0x8c78,	// (0x0007bcc8) bg_cl_pane_g3

0x8c80,	// (0x0007bcd0) bg_cl_pane_g4

0x8c88,	// (0x0007bcd8) bg_cl_pane_g5

0x8c90,	// (0x0007bce0) bg_cl_pane_g6

0x8c98,	// (0x0007bce8) bg_cl_pane_g7

0x8ca0,	// (0x0007bcf0) bg_cl_pane_g8

0x8ca8,	// (0x0007bcf8) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x00082abc) bg_cl_pane_g

0x8cb0,	// (0x0007bd00) aid_height_cl_leading_ParamLimits

0x8cb0,	// (0x0007bd00) aid_height_cl_leading

0x8cbc,	// (0x0007bd0c) aid_height_cl_text_ParamLimits

0x8cbc,	// (0x0007bd0c) aid_height_cl_text

0xe835,	// (0x00081885) bg_cl_header_pane_ParamLimits

0xe835,	// (0x00081885) bg_cl_header_pane

0x8cdb,	// (0x0007bd2b) cl_header_pane_g1_ParamLimits

0x8cdb,	// (0x0007bd2b) cl_header_pane_g1

0x8cf1,	// (0x0007bd41) cl_header_pane_t1_ParamLimits

0x8cf1,	// (0x0007bd41) cl_header_pane_t1

0x8d0a,	// (0x0007bd5a) cl_list_pane

0x816e,	// (0x0007b1be) hc_scroll_pane_cp01

0x2d12,	// (0x00075d62) bg_cl_header_pane_g1

0x7d43,	// (0x0007ad93) bg_cl_header_pane_g2

0x2d32,	// (0x00075d82) bg_cl_header_pane_g3

0x7d53,	// (0x0007ada3) bg_cl_header_pane_g4

0x7d4b,	// (0x0007ad9b) bg_cl_header_pane_g5

0x86cd,	// (0x0007b71d) bg_cl_header_pane_g6

0x7d6b,	// (0x0007adbb) bg_cl_header_pane_g7

0x7d73,	// (0x0007adc3) bg_cl_header_pane_g8

0x7d63,	// (0x0007adb3) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x00082acf) bg_cl_header_pane_g

0x8d13,	// (0x0007bd63) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8d13,	// (0x0007bd63) hc_cl_list_double_graphic_heading_pane

0x8d24,	// (0x0007bd74) hc_cl_list_single_graphic_pane_ParamLimits

0x8d24,	// (0x0007bd74) hc_cl_list_single_graphic_pane

0x8d3a,	// (0x0007bd8a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8d3a,	// (0x0007bd8a) hc_cl_list_single_graphic_pane_g1

0x8d46,	// (0x0007bd96) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8d46,	// (0x0007bd96) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x00082ae2) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x00082ae2) hc_cl_list_single_graphic_pane_g

0x8d5a,	// (0x0007bdaa) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8d5a,	// (0x0007bdaa) hc_cl_list_single_graphic_pane_t1

0x8d3a,	// (0x0007bd8a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8d3a,	// (0x0007bd8a) hc_cl_list_double_graphic_heading_pane_g1

0x8d6f,	// (0x0007bdbf) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8d6f,	// (0x0007bdbf) hc_cl_list_double_graphic_heading_pane_g2

0x8d83,	// (0x0007bdd3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8d83,	// (0x0007bdd3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x00082ae7) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x00082ae7) hc_cl_list_double_graphic_heading_pane_g

0x8d97,	// (0x0007bde7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8d97,	// (0x0007bde7) hc_cl_list_double_graphic_heading_pane_t1

0x8dac,	// (0x0007bdfc) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8dac,	// (0x0007bdfc) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x00082aee) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x00082aee) hc_cl_list_double_graphic_heading_pane_t

0xe482,	// (0x000814d2) vid4_progress_pane_g1

0xe492,	// (0x000814e2) vid4_progress_pane_g2

0xadf7,	// (0x0007de47) vid4_progress_pane_g3

0xe4a2,	// (0x000814f2) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x00082af3) vid4_progress_pane_g

0xe4c0,	// (0x00081510) vid4_progress_pane_t1

0xe4d5,	// (0x00081525) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x00082afe) vid4_progress_pane_t

0xe500,	// (0x00081550) wait_bar_pane_cp07

0xbe26,	// (0x0007ee76) blid_firmament_pane_ParamLimits

0xbe69,	// (0x0007eeb9) popup_blid_sat_info2_window_g1

0xbe8d,	// (0x0007eedd) popup_blid_sat_info2_window_t3

0xbe9b,	// (0x0007eeeb) popup_blid_sat_info2_window_t4

0xbea9,	// (0x0007eef9) popup_blid_sat_info2_window_t5

0xbeb7,	// (0x0007ef07) popup_blid_sat_info2_window_t6

0xbec7,	// (0x0007ef17) popup_blid_sat_info2_window_t7

0xbed5,	// (0x0007ef25) popup_blid_sat_info2_window_t8

0xbee3,	// (0x0007ef33) popup_blid_sat_info2_window_t9

0xbef1,	// (0x0007ef41) popup_blid_sat_info2_window_t10

0xbfb3,	// (0x0007f003) aid_firma_cardinal_ParamLimits

0xbfc7,	// (0x0007f017) blid_firmament_pane_t1_ParamLimits

0xbfde,	// (0x0007f02e) blid_firmament_pane_t2_ParamLimits

0xbff5,	// (0x0007f045) blid_firmament_pane_t3_ParamLimits

0xc00c,	// (0x0007f05c) blid_firmament_pane_t4_ParamLimits

0xf6eb,	// (0x0008273b) blid_firmament_pane_t_ParamLimits

0xc023,	// (0x0007f073) blid_sat_info_pane_ParamLimits

0xe835,	// (0x00081885) main_cam_set_pane_ParamLimits

0x6ef6,	// (0x00079f46) aid_size_cell_colour_35_ParamLimits

0x6f16,	// (0x00079f66) aid_size_cell_colour_112_ParamLimits

0x6f36,	// (0x00079f86) aid_size_cell_effect_ParamLimits

0xbb2d,	// (0x0007eb7d) bg_tb_trans_pane_cp02_ParamLimits

0x3858,	// (0x000768a8) heading_imed_pane_ParamLimits

0x6f56,	// (0x00079fa6) listscroll_imed_pane_ParamLimits

0xb15f,	// (0x0007e1af) popup_call2_audio_first_window_g5_ParamLimits

0xb15f,	// (0x0007e1af) popup_call2_audio_first_window_g5

0x74c8,	// (0x0007a518) aid_size_touch_image3_arrow_left_ParamLimits

0x74c8,	// (0x0007a518) aid_size_touch_image3_arrow_left

0x74f4,	// (0x0007a544) aid_size_touch_image3_arrow_right_ParamLimits

0x74f4,	// (0x0007a544) aid_size_touch_image3_arrow_right

0xe4eb,	// (0x0008153b) vid4_progress_pane_t3

0x7269,	// (0x0007a2b9) main_hwr_training_symbol_option_pane_ParamLimits

0x7269,	// (0x0007a2b9) main_hwr_training_symbol_option_pane

0xe60c,	// (0x0008165c) popup_hwr_training_preview_window_ParamLimits

0xe60c,	// (0x0008165c) popup_hwr_training_preview_window

0x7289,	// (0x0007a2d9) hwr_training_navi_pane_g5_ParamLimits

0x7289,	// (0x0007a2d9) hwr_training_navi_pane_g5

0xe980,	// (0x000819d0) popup_char_count_window

0xe835,	// (0x00081885) bg_popup_sub_pane_cp20_ParamLimits

0x86af,	// (0x0007b6ff) list_vitu2_match_list_pane_ParamLimits

0x86be,	// (0x0007b70e) vitu2_page_scroll_pane_ParamLimits

0x86be,	// (0x0007b70e) vitu2_page_scroll_pane

0x8dc1,	// (0x0007be11) list_single_hwr_training_symbol_option_pane_ParamLimits

0x8dc1,	// (0x0007be11) list_single_hwr_training_symbol_option_pane

0xc93d,	// (0x0007f98d) list_single_hwr_training_symbol_option_pane_g1

0xc945,	// (0x0007f995) list_single_hwr_training_symbol_option_pane_t1

0xc953,	// (0x0007f9a3) bg_button_pane_cp023

0xc95c,	// (0x0007f9ac) bg_button_pane_cp024

0x8dd4,	// (0x0007be24) vitu2_page_scroll_pane_g1

0x8ddc,	// (0x0007be2c) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x00082b05) vitu2_page_scroll_pane_g

0x8de4,	// (0x0007be34) vitu2_page_scroll_pane_t1

0xc98f,	// (0x0007f9df) popup_char_count_window_g1

0xc998,	// (0x0007f9e8) popup_char_count_window_g2

0xc9a1,	// (0x0007f9f1) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x00082b0a) popup_char_count_window_g

0xc9aa,	// (0x0007f9fa) popup_char_count_window_t1

0xaa6c,	// (0x0007dabc) main_vded2_pane

0xc556,	// (0x0007f5a6) aid_size_cell_imed_line

0xc560,	// (0x0007f5b0) grid_imed_line_width_pane

0x7a4c,	// (0x0007aa9c) vid4_indicators_pane_g4

0xc9b8,	// (0x0007fa08) cell_imed_line_width_pane_ParamLimits

0xc9b8,	// (0x0007fa08) cell_imed_line_width_pane

0xc9cc,	// (0x0007fa1c) cell_imed_line_width_pane_g1

0xc9d5,	// (0x0007fa25) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x00082b11) cell_imed_line_width_pane_g

0x8df3,	// (0x0007be43) main_vded2_pane_g1_ParamLimits

0x8df3,	// (0x0007be43) main_vded2_pane_g1

0x8e09,	// (0x0007be59) main_vded2_pane_g2_ParamLimits

0x8e09,	// (0x0007be59) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x00082b16) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x00082b16) main_vded2_pane_g

0x8e1b,	// (0x0007be6b) vded2_slider_pane_ParamLimits

0x8e1b,	// (0x0007be6b) vded2_slider_pane

0x8e2b,	// (0x0007be7b) aid_size_touch_vded2_end

0x8e35,	// (0x0007be85) aid_size_touch_vded2_playhead

0xc9dd,	// (0x0007fa2d) aid_size_touch_vded2_start

0xc9e5,	// (0x0007fa35) vded2_slider_bg_pane

0xc9ee,	// (0x0007fa3e) vded2_slider_pane_g1

0xc9f7,	// (0x0007fa47) vded2_slider_pane_g2

0x8e3f,	// (0x0007be8f) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x00082b1b) vded2_slider_pane_g

0xc9ff,	// (0x0007fa4f) vded2_slider_bg_pane_g1

0xca08,	// (0x0007fa58) vded2_slider_bg_pane_g2

0xca11,	// (0x0007fa61) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x00082b22) vded2_slider_bg_pane_g

0x47b5,	// (0x00077805) aid_postcard_touch_down_pane_ParamLimits

0x47b5,	// (0x00077805) aid_postcard_touch_down_pane

0x47cb,	// (0x0007781b) aid_postcard_touch_up_pane_ParamLimits

0x47cb,	// (0x0007781b) aid_postcard_touch_up_pane

0xaa6c,	// (0x0007dabc) main_blid2_pane

0xbb3b,	// (0x0007eb8b) popup_blid2_search_window

0xaa6c,	// (0x0007dabc) blid2_gps_pane

0xaa6c,	// (0x0007dabc) blid2_navig_pane

0xaa6c,	// (0x0007dabc) blid2_search_pane

0xaa6c,	// (0x0007dabc) blid2_tripm_pane

0x8e4a,	// (0x0007be9a) blid2_search_pane_g1_ParamLimits

0x8e4a,	// (0x0007be9a) blid2_search_pane_g1

0x8e64,	// (0x0007beb4) blid2_search_pane_t1_ParamLimits

0x8e64,	// (0x0007beb4) blid2_search_pane_t1

0x8e76,	// (0x0007bec6) aid_size_cell_blid2_gps_ParamLimits

0x8e76,	// (0x0007bec6) aid_size_cell_blid2_gps

0x8e8e,	// (0x0007bede) blid2_gps_pane_g1_ParamLimits

0x8e8e,	// (0x0007bede) blid2_gps_pane_g1

0x8ea2,	// (0x0007bef2) grid_blid2_satellite_pane_ParamLimits

0x8ea2,	// (0x0007bef2) grid_blid2_satellite_pane

0x8ebc,	// (0x0007bf0c) blid2_navig_pane_g1_ParamLimits

0x8ebc,	// (0x0007bf0c) blid2_navig_pane_g1

0x8ec8,	// (0x0007bf18) blid2_navig_pane_t1_ParamLimits

0x8ec8,	// (0x0007bf18) blid2_navig_pane_t1

0x8ee3,	// (0x0007bf33) blid2_navig_pane_t2_ParamLimits

0x8ee3,	// (0x0007bf33) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x00082b29) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x00082b29) blid2_navig_pane_t

0x8efe,	// (0x0007bf4e) blid2_navig_ring_pane_ParamLimits

0x8efe,	// (0x0007bf4e) blid2_navig_ring_pane

0x8f17,	// (0x0007bf67) blid2_speed_pane_ParamLimits

0x8f17,	// (0x0007bf67) blid2_speed_pane

0x8f23,	// (0x0007bf73) blid2_tripm_pane_g1_ParamLimits

0x8f23,	// (0x0007bf73) blid2_tripm_pane_g1

0x8f3c,	// (0x0007bf8c) blid2_tripm_pane_g2_ParamLimits

0x8f3c,	// (0x0007bf8c) blid2_tripm_pane_g2

0x8f50,	// (0x0007bfa0) blid2_tripm_pane_g3_ParamLimits

0x8f50,	// (0x0007bfa0) blid2_tripm_pane_g3

0x8f64,	// (0x0007bfb4) blid2_tripm_pane_g4_ParamLimits

0x8f64,	// (0x0007bfb4) blid2_tripm_pane_g4

0x8f78,	// (0x0007bfc8) blid2_tripm_pane_g5_ParamLimits

0x8f78,	// (0x0007bfc8) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x00082b2e) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x00082b2e) blid2_tripm_pane_g

0x8f9e,	// (0x0007bfee) blid2_tripm_pane_t1_ParamLimits

0x8f9e,	// (0x0007bfee) blid2_tripm_pane_t1

0x8fb9,	// (0x0007c009) blid2_tripm_pane_t2_ParamLimits

0x8fb9,	// (0x0007c009) blid2_tripm_pane_t2

0x8fd2,	// (0x0007c022) blid2_tripm_pane_t3_ParamLimits

0x8fd2,	// (0x0007c022) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x00082b3b) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x00082b3b) blid2_tripm_pane_t

0x9019,	// (0x0007c069) cell_blid2_satellite_pane_ParamLimits

0x9019,	// (0x0007c069) cell_blid2_satellite_pane

0x9037,	// (0x0007c087) cell_blid2_satellite_pane_g1

0xca1a,	// (0x0007fa6a) cell_blid2_satellite_pane_t1

0xc033,	// (0x0007f083) blid2_speed_pane_g1

0xca28,	// (0x0007fa78) blid2_speed_pane_t1

0xca36,	// (0x0007fa86) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x00082b44) blid2_speed_pane_t

0xc033,	// (0x0007f083) blid2_navig_ring_pane_g1

0x9040,	// (0x0007c090) blid2_navig_ring_pane_g2

0x9048,	// (0x0007c098) blid2_navig_ring_pane_g3

0x9050,	// (0x0007c0a0) blid2_navig_ring_pane_g4

0x9058,	// (0x0007c0a8) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x00082b49) blid2_navig_ring_pane_g

0xaa6c,	// (0x0007dabc) bg_popup_window_pane_cp011

0xca44,	// (0x0007fa94) popup_blid2_search_window_g1

0xca4c,	// (0x0007fa9c) popup_blid2_search_window_t1

0xca5a,	// (0x0007faaa) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x00082b54) popup_blid2_search_window_t

0x2bde,	// (0x00075c2e) main_browser_pane_g1

0xeff1,	// (0x00082041) main_browser_pane_ParamLimits

0xe835,	// (0x00081885) bg_button_pane_cp011_ParamLimits

0x7d25,	// (0x0007ad75) cell_vitu2_function_pane_g1_ParamLimits

0xbb2d,	// (0x0007eb7d) bg_popup_sub_pane_cp22_ParamLimits

0x0fc7,	// (0x00074017) input_focus_pane_cp08_ParamLimits

0x8842,	// (0x0007b892) popup_vitu2_query_button_pane_ParamLimits

0x8842,	// (0x0007b892) popup_vitu2_query_button_pane

0x0fde,	// (0x0007402e) popup_vitu2_query_input_button_pane

0x8853,	// (0x0007b8a3) popup_vitu2_query_window_g1_ParamLimits

0x0fe8,	// (0x00074038) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x00082a55) popup_vitu2_query_window_g_ParamLimits

0xaa6c,	// (0x0007dabc) bg_button_pane_cp026

0x9060,	// (0x0007c0b0) popup_vitu2_query_input_button_pane_g1

0xaa6c,	// (0x0007dabc) bg_button_pane_cp025

0xca68,	// (0x0007fab8) popup_vitu2_query_button_pane_t1

0x6380,	// (0x000793d0) main_mp3_pane_t6

0x638e,	// (0x000793de) popup_slider_window_cp01

0xe3bb,	// (0x0008140b) cam4_battery_pane

0xe414,	// (0x00081464) cam4_battery_pane_cp02

0xe47a,	// (0x000814ca) cam4_battery_pane_cp01

0xe47a,	// (0x000814ca) cam4_battery_pane_cp03

0xc033,	// (0x0007f083) cam4_battery_pane_g1

0x9068,	// (0x0007c0b8) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x00082b59) cam4_battery_pane_g

0xbeff,	// (0x0007ef4f) popup_blid_sat_info2_window_t11

0x3f6f,	// (0x00076fbf) aid_size_touch_mv_arrow_left_ParamLimits

0x3f98,	// (0x00076fe8) aid_size_touch_mv_arrow_right_ParamLimits

0x3fe0,	// (0x00077030) navi_pane_g1_ParamLimits

0x3fec,	// (0x0007703c) navi_pane_g2_ParamLimits

0x401a,	// (0x0007706a) navi_pane_g3_ParamLimits

0xf404,	// (0x00082454) navi_pane_g_ParamLimits

0x40d6,	// (0x00077126) navi_pane_mv_t1_ParamLimits

0x6f62,	// (0x00079fb2) grid_imed_effect_pane_ParamLimits

0x2786,	// (0x000757d6) aid_placing_vt_slider_lsc

0x2796,	// (0x000757e6) aid_placing_vt_slider_prt

0xe835,	// (0x00081885) bg_tb_trans_pane_cp01_ParamLimits

0xc1bf,	// (0x0007f20f) popup_image_details_window_g1_ParamLimits

0xc1d2,	// (0x0007f222) popup_image_details_window_g2_ParamLimits

0xc1e7,	// (0x0007f237) popup_image_details_window_g3_ParamLimits

0xc1e7,	// (0x0007f237) popup_image_details_window_g3

0xf730,	// (0x00082780) popup_image_details_window_g_ParamLimits

0xc1fb,	// (0x0007f24b) popup_image_details_window_t1_ParamLimits

0xc20d,	// (0x0007f25d) popup_image_details_window_t2_ParamLimits

0xc226,	// (0x0007f276) popup_image_details_window_t3_ParamLimits

0xc23a,	// (0x0007f28a) popup_image_details_window_t4_ParamLimits

0xc255,	// (0x0007f2a5) popup_image_details_window_t5_ParamLimits

0xf737,	// (0x00082787) popup_image_details_window_t_ParamLimits

0x8cc8,	// (0x0007bd18) cl_header_name_pane_ParamLimits

0x8cc8,	// (0x0007bd18) cl_header_name_pane

0x9072,	// (0x0007c0c2) cl_header_name_pane_t1_ParamLimits

0x9072,	// (0x0007c0c2) cl_header_name_pane_t1

0x9093,	// (0x0007c0e3) cl_header_name_pane_t2_ParamLimits

0x9093,	// (0x0007c0e3) cl_header_name_pane_t2

0x90d5,	// (0x0007c125) cl_header_name_pane_t3_ParamLimits

0x90d5,	// (0x0007c125) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x00082b5e) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x00082b5e) cl_header_name_pane_t

0x40a7,	// (0x000770f7) navi_pane_mv_g2_ParamLimits

0xe95a,	// (0x000819aa) field_vitu2_entry_pane_g1_ParamLimits

0xe966,	// (0x000819b6) field_vitu2_entry_pane_g2_ParamLimits

0xe972,	// (0x000819c2) field_vitu2_entry_pane_g3_ParamLimits

0xe972,	// (0x000819c2) field_vitu2_entry_pane_g3

0xf904,	// (0x00082954) field_vitu2_entry_pane_g_ParamLimits

0x7ca1,	// (0x0007acf1) cell_vitu2_itu_pane_g1_ParamLimits

0x7cb1,	// (0x0007ad01) cell_vitu2_itu_pane_g2_ParamLimits

0x7cb1,	// (0x0007ad01) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x00082960) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x00082960) cell_vitu2_itu_pane_g

0xe835,	// (0x00081885) bg_vkb2_func_pane_cp05_ParamLimits

0xe835,	// (0x00081885) bg_vkb2_func_pane_cp05

0xe835,	// (0x00081885) bg_vkb2_func_pane_cp03

0xe835,	// (0x00081885) bg_vkb2_func_pane_cp04

0xe835,	// (0x00081885) bg_vkb2_func_pane_cp10_ParamLimits

0xe835,	// (0x00081885) bg_vkb2_func_pane_cp10

0x1105,	// (0x00074155) bg_vkb2_func_pane_cp08

0x8c2a,	// (0x0007bc7a) bg_vkb2_func_pane_cp06

0x8c38,	// (0x0007bc88) bg_vkb2_func_pane_cp07

0xc965,	// (0x0007f9b5) bg_vkb2_func_pane_cp11_ParamLimits

0xc965,	// (0x0007f9b5) bg_vkb2_func_pane_cp11

0xc97a,	// (0x0007f9ca) bg_vkb2_func_pane_cp12_ParamLimits

0xc97a,	// (0x0007f9ca) bg_vkb2_func_pane_cp12

0xaa6c,	// (0x0007dabc) bg_vkb2_func_pane_cp09

0x7d43,	// (0x0007ad93) bg_vkb2_func_pane_g1

0x2d32,	// (0x00075d82) bg_vkb2_func_pane_g2

0x7d4b,	// (0x0007ad9b) bg_vkb2_func_pane_g3

0x7d53,	// (0x0007ada3) bg_vkb2_func_pane_g4

0x86cd,	// (0x0007b71d) bg_vkb2_func_pane_g5

0x7d6b,	// (0x0007adbb) bg_vkb2_func_pane_g6

0x7d73,	// (0x0007adc3) bg_vkb2_func_pane_g7

0x7d63,	// (0x0007adb3) bg_vkb2_func_pane_g8

0x2d12,	// (0x00075d62) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x00082b65) bg_vkb2_func_pane_g

0x8f8c,	// (0x0007bfdc) blid2_tripm_pane_g6_ParamLimits

0x8f8c,	// (0x0007bfdc) blid2_tripm_pane_g6

0xe6e0,	// (0x00081730) mp4_progress_pane_g1

0x9005,	// (0x0007c055) blid2_tripm_values_pane_ParamLimits

0x9005,	// (0x0007c055) blid2_tripm_values_pane

0x9106,	// (0x0007c156) blid2_tripm_values_pane_t1

0x9114,	// (0x0007c164) blid2_tripm_values_pane_t2

0x9122,	// (0x0007c172) blid2_tripm_values_pane_t3

0x9130,	// (0x0007c180) blid2_tripm_values_pane_t4

0x913e,	// (0x0007c18e) blid2_tripm_values_pane_t5

0x914c,	// (0x0007c19c) blid2_tripm_values_pane_t6

0x915a,	// (0x0007c1aa) blid2_tripm_values_pane_t7

0x9168,	// (0x0007c1b8) blid2_tripm_values_pane_t8

0x9176,	// (0x0007c1c6) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x00082b78) blid2_tripm_values_pane_t

0x27d2,	// (0x00075822) call_video_pane_t1_ParamLimits

0x27f0,	// (0x00075840) call_video_pane_t2_ParamLimits

0xf292,	// (0x000822e2) call_video_pane_t_ParamLimits

0x0e1b,	// (0x00073e6b) msg_header_pane_g1_ParamLimits

0x471f,	// (0x0007776f) msg_header_pane_g2_ParamLimits

0x471f,	// (0x0007776f) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x000824f7) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x000824f7) msg_header_pane_g

0xeff1,	// (0x00082041) main_clock2_pane_ParamLimits

0x6c8e,	// (0x00079cde) grid_clock2_toolbar_pane_ParamLimits

0x6c8e,	// (0x00079cde) grid_clock2_toolbar_pane

0x6c8e,	// (0x00079cde) listscroll_clock2_pane_ParamLimits

0x6c8e,	// (0x00079cde) listscroll_clock2_pane

0x6d6a,	// (0x00079dba) main_clock2_pane_t3_ParamLimits

0x6d6a,	// (0x00079dba) main_clock2_pane_t3

0x6d85,	// (0x00079dd5) main_clock2_pane_t4_ParamLimits

0x6d85,	// (0x00079dd5) main_clock2_pane_t4

0xca76,	// (0x0007fac6) cell_clock2_toolbar_pane

0xca7e,	// (0x0007face) cell_clock2_toolbar_pane_cp01

0xca7e,	// (0x0007face) cell_clock2_toolbar_pane_cp02

0xca86,	// (0x0007fad6) cell_clock2_toolbar_pane_cp03

0xca8e,	// (0x0007fade) list_clock2_pane

0x3d19,	// (0x00076d69) scroll_pane_cp10

0xca96,	// (0x0007fae6) list_single_clock2_pane_ParamLimits

0xca96,	// (0x0007fae6) list_single_clock2_pane

0x4144,	// (0x00077194) list_highlight_pane_cp08

0xcaa3,	// (0x0007faf3) list_single_clock2_pane_t1

0xcab1,	// (0x0007fb01) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x00082b8b) list_single_clock2_pane_t

0xaa6c,	// (0x0007dabc) bg_button_pane_cp10

0xcabf,	// (0x0007fb0f) cell_clock2_toolbar_pane_g1

0x4733,	// (0x00077783) aid_main_viewer_pane_g1_ParamLimits

0x4733,	// (0x00077783) aid_main_viewer_pane_g1

0x4741,	// (0x00077791) aid_main_viewer_pane_g2_ParamLimits

0x4741,	// (0x00077791) aid_main_viewer_pane_g2

0x474f,	// (0x0007779f) aid_main_viewer_pane_g3_ParamLimits

0x474f,	// (0x0007779f) aid_main_viewer_pane_g3

0x475e,	// (0x000777ae) aid_main_viewer_pane_g4_ParamLimits

0x475e,	// (0x000777ae) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x00082508) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x00082508) aid_main_viewer_pane_g

0x55a3,	// (0x000785f3) main_calc_pane_ParamLimits

0x55b7,	// (0x00078607) main_dialer2_pane_ParamLimits

0xaa6c,	// (0x0007dabc) main_cam6_pane

0xaa6c,	// (0x0007dabc) main_vid6_pane

0x6c9a,	// (0x00079cea) listscroll_gen_pane_cp06_ParamLimits

0x6c9a,	// (0x00079cea) listscroll_gen_pane_cp06

0x6da0,	// (0x00079df0) main_clock2_pane_t5_ParamLimits

0x6da0,	// (0x00079df0) main_clock2_pane_t5

0x6df7,	// (0x00079e47) aid_call2_pane_cp10_ParamLimits

0x6e09,	// (0x00079e59) aid_call_pane_cp10_ParamLimits

0x3efe,	// (0x00076f4e) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3efe,	// (0x00076f4e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6e1b,	// (0x00079e6b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6e1b,	// (0x00079e6b) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3efe,	// (0x00076f4e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x00082837) popup_clock_analogue_window_cp10_g_ParamLimits

0x6e2d,	// (0x00079e7d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7475,	// (0x0007a4c5) cell_dialer2_keypad_pane_g2_ParamLimits

0x7475,	// (0x0007a4c5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x000828f3) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x000828f3) cell_dialer2_keypad_pane_g

0x7491,	// (0x0007a4e1) cell_dialer2_keypad_pane_t1

0x8148,	// (0x0007b198) main_cset_text2_pane_ParamLimits

0x8148,	// (0x0007b198) main_cset_text2_pane

0x8bf6,	// (0x0007bc46) area_vitu2_query_pane_g1_ParamLimits

0x10cc,	// (0x0007411c) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x00082aa8) area_vitu2_query_pane_g_ParamLimits

0xc8c7,	// (0x0007f917) area_vitu2_query_pane_t7_ParamLimits

0xc8c7,	// (0x0007f917) area_vitu2_query_pane_t7

0x8c2a,	// (0x0007bc7a) bg_button_pane_cp018_ParamLimits

0x8c38,	// (0x0007bc88) bg_button_pane_cp021_ParamLimits

0x1105,	// (0x00074155) bg_button_pane_cp022_ParamLimits

0x1105,	// (0x00074155) bg_vkb2_func_pane_cp08_ParamLimits

0x8c2a,	// (0x0007bc7a) bg_vkb2_func_pane_cp06_ParamLimits

0x8c38,	// (0x0007bc88) bg_vkb2_func_pane_cp07_ParamLimits

0x1114,	// (0x00074164) input_focus_pane_cp09_ParamLimits

0xe51a,	// (0x0008156a) cam6_autofocus_pane_ParamLimits

0xe51a,	// (0x0008156a) cam6_autofocus_pane

0x9184,	// (0x0007c1d4) cam6_image_uncrop_pane_ParamLimits

0x9184,	// (0x0007c1d4) cam6_image_uncrop_pane

0x9193,	// (0x0007c1e3) cam6_indi_pane_ParamLimits

0x9193,	// (0x0007c1e3) cam6_indi_pane

0x91a9,	// (0x0007c1f9) cam6_mode_pane_ParamLimits

0x91a9,	// (0x0007c1f9) cam6_mode_pane

0x91bb,	// (0x0007c20b) cam6_timer_pane_ParamLimits

0x91bb,	// (0x0007c20b) cam6_timer_pane

0x91c7,	// (0x0007c217) cam6_zoom_pane_ParamLimits

0x91c7,	// (0x0007c217) cam6_zoom_pane

0x91d3,	// (0x0007c223) cam6_mode_pane_g1_ParamLimits

0x91d3,	// (0x0007c223) cam6_mode_pane_g1

0x91e3,	// (0x0007c233) cam6_mode_pane_g2_ParamLimits

0x91e3,	// (0x0007c233) cam6_mode_pane_g2

0x91f3,	// (0x0007c243) cam6_mode_pane_g3_ParamLimits

0x91f3,	// (0x0007c243) cam6_mode_pane_g3

0x9203,	// (0x0007c253) cam6_mode_pane_g4_ParamLimits

0x9203,	// (0x0007c253) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x00082b90) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x00082b90) cam6_mode_pane_g

0xcac7,	// (0x0007fb17) bg_tb_trans_pane_cp08_ParamLimits

0xcac7,	// (0x0007fb17) bg_tb_trans_pane_cp08

0xcad5,	// (0x0007fb25) cam6_battery_pane_ParamLimits

0xcad5,	// (0x0007fb25) cam6_battery_pane

0xcaeb,	// (0x0007fb3b) cam6_indi_pane_g1_ParamLimits

0xcaeb,	// (0x0007fb3b) cam6_indi_pane_g1

0xcafd,	// (0x0007fb4d) cam6_indi_pane_g2_ParamLimits

0xcafd,	// (0x0007fb4d) cam6_indi_pane_g2

0xcb0f,	// (0x0007fb5f) cam6_indi_pane_g3_ParamLimits

0xcb0f,	// (0x0007fb5f) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x00082b99) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x00082b99) cam6_indi_pane_g

0xcb21,	// (0x0007fb71) cam6_indi_pane_t1_ParamLimits

0xcb21,	// (0x0007fb71) cam6_indi_pane_t1

0x9213,	// (0x0007c263) cam6_autofocus_pane_g1

0x921b,	// (0x0007c26b) cam6_autofocus_pane_g2

0x9223,	// (0x0007c273) cam6_autofocus_pane_g3

0x922b,	// (0x0007c27b) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x00082ba0) cam6_autofocus_pane_g

0xcb47,	// (0x0007fb97) cam6_timer_pane_g1

0xcb4f,	// (0x0007fb9f) cam6_timer_pane_t1

0xcb5d,	// (0x0007fbad) cam6_zoom_cont_pane

0xcb65,	// (0x0007fbb5) cam6_zoom_pane_g1

0xcb6d,	// (0x0007fbbd) cam6_zoom_pane_g2

0x9233,	// (0x0007c283) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x00082ba9) cam6_zoom_pane_g

0xc033,	// (0x0007f083) cam6_battery_pane_g1

0xc033,	// (0x0007f083) cam6_battery_pane_g2

0x0001,

0xf6f4,	// (0x00082744) cam6_battery_pane_g

0xcb75,	// (0x0007fbc5) cam6_zoom_cont_pane_g1

0xcb7e,	// (0x0007fbce) cam6_zoom_cont_pane_g2

0xcb87,	// (0x0007fbd7) cam6_zoom_cont_pane_g3

0x0002,

0xfb60,	// (0x00082bb0) cam6_zoom_cont_pane_g

0x9250,	// (0x0007c2a0) cam6_mode_pane_cp_ParamLimits

0x9250,	// (0x0007c2a0) cam6_mode_pane_cp

0x91c7,	// (0x0007c217) cam6_zoom_pane_cp_ParamLimits

0x91c7,	// (0x0007c217) cam6_zoom_pane_cp

0x9262,	// (0x0007c2b2) vid6_image_uncrop_cif_pane_ParamLimits

0x9262,	// (0x0007c2b2) vid6_image_uncrop_cif_pane

0x9272,	// (0x0007c2c2) vid6_image_uncrop_nhd_pane_ParamLimits

0x9272,	// (0x0007c2c2) vid6_image_uncrop_nhd_pane

0x9184,	// (0x0007c1d4) vid6_image_uncrop_vga_pane_ParamLimits

0x9184,	// (0x0007c1d4) vid6_image_uncrop_vga_pane

0x9281,	// (0x0007c2d1) vid6_image_uncrop_wvga_pane_ParamLimits

0x9281,	// (0x0007c2d1) vid6_image_uncrop_wvga_pane

0x9290,	// (0x0007c2e0) vid6_indi_pane_ParamLimits

0x9290,	// (0x0007c2e0) vid6_indi_pane

0xcac7,	// (0x0007fb17) bg_tb_trans_pane_cp09_ParamLimits

0xcac7,	// (0x0007fb17) bg_tb_trans_pane_cp09

0xcb9f,	// (0x0007fbef) cam6_battery_pane_cp_ParamLimits

0xcb9f,	// (0x0007fbef) cam6_battery_pane_cp

0xcbab,	// (0x0007fbfb) vid6_indi_pane_g1_ParamLimits

0xcbab,	// (0x0007fbfb) vid6_indi_pane_g1

0xcbbd,	// (0x0007fc0d) vid6_indi_pane_g2_ParamLimits

0xcbbd,	// (0x0007fc0d) vid6_indi_pane_g2

0xcbcf,	// (0x0007fc1f) vid6_indi_pane_g3_ParamLimits

0xcbcf,	// (0x0007fc1f) vid6_indi_pane_g3

0xcbe4,	// (0x0007fc34) vid6_indi_pane_g4_ParamLimits

0xcbe4,	// (0x0007fc34) vid6_indi_pane_g4

0xcbf9,	// (0x0007fc49) vid6_indi_pane_g5_ParamLimits

0xcbf9,	// (0x0007fc49) vid6_indi_pane_g5

0x0004,

0xfb67,	// (0x00082bb7) vid6_indi_pane_g_ParamLimits

0xfb67,	// (0x00082bb7) vid6_indi_pane_g

0xcc13,	// (0x0007fc63) vid6_indi_pane_t1_ParamLimits

0xcc13,	// (0x0007fc63) vid6_indi_pane_t1

0xcc29,	// (0x0007fc79) vid6_indi_pane_t2_ParamLimits

0xcc29,	// (0x0007fc79) vid6_indi_pane_t2

0xcc51,	// (0x0007fca1) vid6_indi_pane_t3_ParamLimits

0xcc51,	// (0x0007fca1) vid6_indi_pane_t3

0xcc79,	// (0x0007fcc9) vid6_indi_pane_t4_ParamLimits

0xcc79,	// (0x0007fcc9) vid6_indi_pane_t4

0x0003,

0xfb72,	// (0x00082bc2) vid6_indi_pane_t_ParamLimits

0xfb72,	// (0x00082bc2) vid6_indi_pane_t

0xcc9d,	// (0x0007fced) wait_bar_pane_cp08

0x92a8,	// (0x0007c2f8) main_cset_text2_pane_t1_ParamLimits

0x92a8,	// (0x0007c2f8) main_cset_text2_pane_t1

0x923b,	// (0x0007c28b) listscroll_gen_pane_cp06_t1_ParamLimits

0x923b,	// (0x0007c28b) listscroll_gen_pane_cp06_t1

0xaa6c,	// (0x0007dabc) main_cam6_set_pane

0xc29f,	// (0x0007f2ef) bg_tb_trans_pane_cp06_ParamLimits

0xe3c3,	// (0x00081413) cam4_indicators_pane_g1_ParamLimits

0xe3d4,	// (0x00081424) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x00082930) cam4_indicators_pane_g_ParamLimits

0xe3f2,	// (0x00081442) cam4_indicators_pane_t1_ParamLimits

0xc790,	// (0x0007f7e0) bg_tb_trans_pane_cp07_ParamLimits

0x7a25,	// (0x0007aa75) vid4_indicators_pane_g1_ParamLimits

0x7a32,	// (0x0007aa82) vid4_indicators_pane_g2_ParamLimits

0x7a3f,	// (0x0007aa8f) vid4_indicators_pane_g3_ParamLimits

0x7a4c,	// (0x0007aa9c) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x00082942) vid4_indicators_pane_g_ParamLimits

0x7a64,	// (0x0007aab4) vid4_indicators_pane_t1_ParamLimits

0xe482,	// (0x000814d2) vid4_progress_pane_g1_ParamLimits

0xe492,	// (0x000814e2) vid4_progress_pane_g2_ParamLimits

0xadf7,	// (0x0007de47) vid4_progress_pane_g3_ParamLimits

0xe4a2,	// (0x000814f2) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x00082af3) vid4_progress_pane_g_ParamLimits

0xe4c0,	// (0x00081510) vid4_progress_pane_t1_ParamLimits

0xe4d5,	// (0x00081525) vid4_progress_pane_t2_ParamLimits

0xe4eb,	// (0x0008153b) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x00082afe) vid4_progress_pane_t_ParamLimits

0xe500,	// (0x00081550) wait_bar_pane_cp07_ParamLimits

0x92c5,	// (0x0007c315) main_cam6_set_pane_g2_ParamLimits

0x92c5,	// (0x0007c315) main_cam6_set_pane_g2

0x92e9,	// (0x0007c339) main_cset6_listscroll_pane_ParamLimits

0x92e9,	// (0x0007c339) main_cset6_listscroll_pane

0x9309,	// (0x0007c359) main_cset6_slider_pane_ParamLimits

0x9309,	// (0x0007c359) main_cset6_slider_pane

0x931f,	// (0x0007c36f) main_cset6_text2_pane_ParamLimits

0x931f,	// (0x0007c36f) main_cset6_text2_pane

0xccac,	// (0x0007fcfc) main_cset6_text_pane

0xccb4,	// (0x0007fd04) main_cset_list_pane_copy1_ParamLimits

0xccb4,	// (0x0007fd04) main_cset_list_pane_copy1

0xccc4,	// (0x0007fd14) scroll_pane_cp028_copy1

0x932d,	// (0x0007c37d) cset_list_set_pane_copy1

0x933e,	// (0x0007c38e) aid_position_infowindow_above_copy1

0x9346,	// (0x0007c396) aid_position_infowindow_below_copy1

0x934e,	// (0x0007c39e) cset_list_set_pane_g1_copy1

0x1123,	// (0x00074173) cset_list_set_pane_g3_copy1_ParamLimits

0x1123,	// (0x00074173) cset_list_set_pane_g3_copy1

0x1132,	// (0x00074182) cset_list_set_pane_t1_copy1_ParamLimits

0x1132,	// (0x00074182) cset_list_set_pane_t1_copy1

0xe835,	// (0x00081885) list_highlight_pane_cp021_copy1_ParamLimits

0xe835,	// (0x00081885) list_highlight_pane_cp021_copy1

0xcccd,	// (0x0007fd1d) cset6_slider_pane_ParamLimits

0xcccd,	// (0x0007fd1d) cset6_slider_pane

0xccf9,	// (0x0007fd49) main_cset6_slider_pane_g1_ParamLimits

0xccf9,	// (0x0007fd49) main_cset6_slider_pane_g1

0x9356,	// (0x0007c3a6) main_cset6_slider_pane_g2_ParamLimits

0x9356,	// (0x0007c3a6) main_cset6_slider_pane_g2

0xcd21,	// (0x0007fd71) main_cset6_slider_pane_g3_ParamLimits

0xcd21,	// (0x0007fd71) main_cset6_slider_pane_g3

0x937e,	// (0x0007c3ce) main_cset6_slider_pane_g4_ParamLimits

0x937e,	// (0x0007c3ce) main_cset6_slider_pane_g4

0x938a,	// (0x0007c3da) main_cset6_slider_pane_g5_ParamLimits

0x938a,	// (0x0007c3da) main_cset6_slider_pane_g5

0x8222,	// (0x0007b272) main_cset6_slider_pane_g7_ParamLimits

0x8222,	// (0x0007b272) main_cset6_slider_pane_g7

0x822e,	// (0x0007b27e) main_cset6_slider_pane_g8_ParamLimits

0x822e,	// (0x0007b27e) main_cset6_slider_pane_g8

0x823a,	// (0x0007b28a) main_cset6_slider_pane_g9_ParamLimits

0x823a,	// (0x0007b28a) main_cset6_slider_pane_g9

0x8246,	// (0x0007b296) main_cset6_slider_pane_g10_ParamLimits

0x8246,	// (0x0007b296) main_cset6_slider_pane_g10

0x8252,	// (0x0007b2a2) main_cset6_slider_pane_g11_ParamLimits

0x8252,	// (0x0007b2a2) main_cset6_slider_pane_g11

0x825e,	// (0x0007b2ae) main_cset6_slider_pane_g12_ParamLimits

0x825e,	// (0x0007b2ae) main_cset6_slider_pane_g12

0x826a,	// (0x0007b2ba) main_cset6_slider_pane_g13_ParamLimits

0x826a,	// (0x0007b2ba) main_cset6_slider_pane_g13

0x8276,	// (0x0007b2c6) main_cset6_slider_pane_g14_ParamLimits

0x8276,	// (0x0007b2c6) main_cset6_slider_pane_g14

0x9396,	// (0x0007c3e6) main_cset6_slider_pane_g15_ParamLimits

0x9396,	// (0x0007c3e6) main_cset6_slider_pane_g15

0x829a,	// (0x0007b2ea) main_cset6_slider_pane_g16_ParamLimits

0x829a,	// (0x0007b2ea) main_cset6_slider_pane_g16

0x82a6,	// (0x0007b2f6) main_cset6_slider_pane_g17_ParamLimits

0x82a6,	// (0x0007b2f6) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x00082bcb) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x00082bcb) main_cset6_slider_pane_g

0xcd2d,	// (0x0007fd7d) main_cset6_slider_pane_t1_ParamLimits

0xcd2d,	// (0x0007fd7d) main_cset6_slider_pane_t1

0x93c6,	// (0x0007c416) main_cset6_slider_pane_t2_ParamLimits

0x93c6,	// (0x0007c416) main_cset6_slider_pane_t2

0x93f1,	// (0x0007c441) main_cset6_slider_pane_t3_ParamLimits

0x93f1,	// (0x0007c441) main_cset6_slider_pane_t3

0x941c,	// (0x0007c46c) main_cset6_slider_pane_t4_ParamLimits

0x941c,	// (0x0007c46c) main_cset6_slider_pane_t4

0x9447,	// (0x0007c497) main_cset6_slider_pane_t5_ParamLimits

0x9447,	// (0x0007c497) main_cset6_slider_pane_t5

0xcd6e,	// (0x0007fdbe) main_cset6_slider_pane_t7_ParamLimits

0xcd6e,	// (0x0007fdbe) main_cset6_slider_pane_t7

0x9472,	// (0x0007c4c2) main_cset6_slider_pane_t8_ParamLimits

0x9472,	// (0x0007c4c2) main_cset6_slider_pane_t8

0x9496,	// (0x0007c4e6) main_cset6_slider_pane_t9_ParamLimits

0x9496,	// (0x0007c4e6) main_cset6_slider_pane_t9

0x94ba,	// (0x0007c50a) main_cset6_slider_pane_t10_ParamLimits

0x94ba,	// (0x0007c50a) main_cset6_slider_pane_t10

0x94de,	// (0x0007c52e) main_cset6_slider_pane_t11_ParamLimits

0x94de,	// (0x0007c52e) main_cset6_slider_pane_t11

0xcda4,	// (0x0007fdf4) main_cset6_slider_pane_t14_ParamLimits

0xcda4,	// (0x0007fdf4) main_cset6_slider_pane_t14

0xcddd,	// (0x0007fe2d) main_cset6_slider_pane_t15_ParamLimits

0xcddd,	// (0x0007fe2d) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x00082bf0) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x00082bf0) main_cset6_slider_pane_t

0xc80e,	// (0x0007f85e) cset_slider_pane_g1_copy1

0xc817,	// (0x0007f867) cset_slider_pane_g2_copy1

0xc820,	// (0x0007f870) cset_slider_pane_g3_copy1

0xaa6c,	// (0x0007dabc) bg_popup_sub_pane_cp011_copy1

0x88a1,	// (0x0007b8f1) main_cset_text_pane_g1_copy1

0x88a9,	// (0x0007b8f9) main_cset_text_pane_t1_copy1

0x88b7,	// (0x0007b907) main_cset_text_pane_t2_copy1

0x88c5,	// (0x0007b915) main_cset_text_pane_t3_copy1

0x88d3,	// (0x0007b923) main_cset_text_pane_t4_copy1

0x88e1,	// (0x0007b931) main_cset_text_pane_t5_copy1

0x88ef,	// (0x0007b93f) main_cset_text_pane_t6_copy1

0x88fd,	// (0x0007b94d) main_cset_text_pane_t7_copy1

0x9502,	// (0x0007c552) main_cset_text2_pane_t1_copy1

0xaa6c,	// (0x0007dabc) main_ncimui_pane

0x57f9,	// (0x00078849) popup_query_ncimui_window_ParamLimits

0x57f9,	// (0x00078849) popup_query_ncimui_window

0xc304,	// (0x0007f354) field_cale_ev2_pane_g4_ParamLimits

0xc304,	// (0x0007f354) field_cale_ev2_pane_g4

0x7355,	// (0x0007a3a5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7355,	// (0x0007a3a5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf883,	// (0x000828d3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf883,	// (0x000828d3) cell_video_dialer_keypad_pane_g

0x736d,	// (0x0007a3bd) cell_video_dialer_keypad_pane_t1

0xaa6c,	// (0x0007dabc) bg_popup_window_pane_cp012

0x3b6f,	// (0x00076bbf) heading_pane_cp06

0xcf05,	// (0x0007ff55) ncim_query_content_pane

0xaa6c,	// (0x0007dabc) bg_popup_heading_pane_cp01

0xcf0d,	// (0x0007ff5d) ncim_heading_pane_t1

0xcf1b,	// (0x0007ff6b) ncim_indicator_popup_pane

0xcf2d,	// (0x0007ff7d) ncim_query_button_pane

0xcf41,	// (0x0007ff91) ncim_query_content_pane_t1

0xcf53,	// (0x0007ffa3) ncim_query_content_pane_t2

0x0005,

0xfbdf,	// (0x00082c2f) ncim_query_content_pane_t

0xcf8d,	// (0x0007ffdd) ncim_query_list_pane

0xcf9f,	// (0x0007ffef) ncim_query_popup_pane

0xcf1b,	// (0x0007ff6b) ncim_indicator_popup_pane_ParamLimits

0x9617,	// (0x0007c667) ncim_query_content_pane_g1_ParamLimits

0x9617,	// (0x0007c667) ncim_query_content_pane_g1

0xcf41,	// (0x0007ff91) ncim_query_content_pane_t1_ParamLimits

0xcf53,	// (0x0007ffa3) ncim_query_content_pane_t2_ParamLimits

0x9623,	// (0x0007c673) ncim_query_content_pane_t3_ParamLimits

0x9623,	// (0x0007c673) ncim_query_content_pane_t3

0x964b,	// (0x0007c69b) ncim_query_content_pane_t4_ParamLimits

0x964b,	// (0x0007c69b) ncim_query_content_pane_t4

0x9673,	// (0x0007c6c3) ncim_query_content_pane_t5_ParamLimits

0x9673,	// (0x0007c6c3) ncim_query_content_pane_t5

0xcf65,	// (0x0007ffb5) ncim_query_content_pane_t6_ParamLimits

0xcf65,	// (0x0007ffb5) ncim_query_content_pane_t6

0xfbdf,	// (0x00082c2f) ncim_query_content_pane_t_ParamLimits

0xcf8d,	// (0x0007ffdd) ncim_query_list_pane_ParamLimits

0xcf9f,	// (0x0007ffef) ncim_query_popup_pane_ParamLimits

0xcfb3,	// (0x00080003) wait_bar_pane_cp04

0xaa6c,	// (0x0007dabc) input_focus_pane_cp011

0xcfbb,	// (0x0008000b) ncim_query_popup_pane_t1

0xcfc9,	// (0x00080019) ncim_list_query_list_pane_ParamLimits

0xcfc9,	// (0x00080019) ncim_list_query_list_pane

0xaa6c,	// (0x0007dabc) bg_button_pane_cp027

0xcfd6,	// (0x00080026) ncim_query_button_pane_g1

0xaa6c,	// (0x0007dabc) list_highlight_pane_cp012

0xcfe0,	// (0x00080030) ncim_list_query_list_pane_g1

0xcfe8,	// (0x00080038) ncim_list_query_list_pane_t1

0xe3e3,	// (0x00081433) cam4_indicators_pane_g3_ParamLimits

0xe3e3,	// (0x00081433) cam4_indicators_pane_g3

0x7a58,	// (0x0007aaa8) vid4_indicators_pane_g5_ParamLimits

0x7a58,	// (0x0007aaa8) vid4_indicators_pane_g5

0xe4b1,	// (0x00081501) vid4_progress_pane_g5_ParamLimits

0xe4b1,	// (0x00081501) vid4_progress_pane_g5

0x9530,	// (0x0007c580) main_ncimui_pane_g1

0x9586,	// (0x0007c5d6) ncimui_group_query_pane_ParamLimits

0x9586,	// (0x0007c5d6) ncimui_group_query_pane

0x95c2,	// (0x0007c612) ncimui_list_pane_ParamLimits

0x95c2,	// (0x0007c612) ncimui_list_pane

0x95e3,	// (0x0007c633) ncimui_text_pane_ParamLimits

0x95e3,	// (0x0007c633) ncimui_text_pane

0x969b,	// (0x0007c6eb) ncimui_text_pane_t1_ParamLimits

0x969b,	// (0x0007c6eb) ncimui_text_pane_t1

0xcff6,	// (0x00080046) ncimui_list_single_graphic_pane_ParamLimits

0xcff6,	// (0x00080046) ncimui_list_single_graphic_pane

0x96b9,	// (0x0007c709) ncimui_query_pane_ParamLimits

0x96b9,	// (0x0007c709) ncimui_query_pane

0xaa6c,	// (0x0007dabc) list_highlight_pane_cp013

0xd006,	// (0x00080056) ncim_list_query_list_pane_t1_copy1

0xcfe0,	// (0x00080030) ncim_list_single_graphic_pane_g1

0xd014,	// (0x00080064) ncim_query_button_pane_cp01

0xd020,	// (0x00080070) ncim_query_entry_pane_ParamLimits

0xd020,	// (0x00080070) ncim_query_entry_pane

0xd033,	// (0x00080083) ncimui_query_pane_g1

0xd03f,	// (0x0008008f) ncimui_query_pane_t1_ParamLimits

0xd03f,	// (0x0008008f) ncimui_query_pane_t1

0xe835,	// (0x00081885) input_focus_pane_cp012

0xd058,	// (0x000800a8) ncim_query_entry_pane_t1

0xeff1,	// (0x00082041) main_im_pane_ParamLimits

0xe835,	// (0x00081885) main_mobtv_pane_ParamLimits

0xe835,	// (0x00081885) main_mobtv_pane

0x93ae,	// (0x0007c3fe) main_cset6_slider_pane_g18_ParamLimits

0x93ae,	// (0x0007c3fe) main_cset6_slider_pane_g18

0x93ba,	// (0x0007c40a) main_cset6_slider_pane_g19_ParamLimits

0x93ba,	// (0x0007c40a) main_cset6_slider_pane_g19

0xd06a,	// (0x000800ba) bg_main_mobtv_pane_ParamLimits

0xd06a,	// (0x000800ba) bg_main_mobtv_pane

0x96cc,	// (0x0007c71c) main_mobtv_info_pane

0x96d5,	// (0x0007c725) main_mobtv_loading_pane_ParamLimits

0x96d5,	// (0x0007c725) main_mobtv_loading_pane

0xd078,	// (0x000800c8) main_mobtv_pg_channel_list_pane

0xd082,	// (0x000800d2) main_mobtv_pg_hdr_pane

0x96e2,	// (0x0007c732) main_mobtv_programe_curr_pane_ParamLimits

0x96e2,	// (0x0007c732) main_mobtv_programe_curr_pane

0x96ef,	// (0x0007c73f) main_mobtv_programe_next_pane_ParamLimits

0x96ef,	// (0x0007c73f) main_mobtv_programe_next_pane

0xd08b,	// (0x000800db) popup_mobtv_noti_window

0xc033,	// (0x0007f083) main_tv_pg_hdr_pane_g1

0xd093,	// (0x000800e3) main_tv_pg_hdr_pane_g2

0xd09b,	// (0x000800eb) main_tv_pg_hdr_pane_g3

0xd0a3,	// (0x000800f3) main_tv_pg_hdr_pane_g4

0xd0ab,	// (0x000800fb) main_tv_pg_hdr_pane_g5

0xd0b5,	// (0x00080105) main_tv_pg_hdr_pane_g6

0xd0bf,	// (0x0008010f) main_tv_pg_hdr_pane_g7

0xd0c9,	// (0x00080119) main_tv_pg_hdr_pane_g8

0xd0d3,	// (0x00080123) main_tv_pg_hdr_pane_g9

0xd0dd,	// (0x0008012d) main_tv_pg_hdr_pane_g10

0xd0e7,	// (0x00080137) main_tv_pg_hdr_pane_g11

0x000a,

0xfbec,	// (0x00082c3c) main_tv_pg_hdr_pane_g

0xd0f1,	// (0x00080141) main_tv_pg_hdr_pane_t1

0xd0ff,	// (0x0008014f) main_tv_pg_hdr_pane_t2

0xd10d,	// (0x0008015d) main_tv_pg_hdr_pane_t3

0xd11d,	// (0x0008016d) main_tv_pg_hdr_pane_t4

0xd12d,	// (0x0008017d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc03,	// (0x00082c53) main_tv_pg_hdr_pane_t

0xd13d,	// (0x0008018d) single_mobtv_pg_channel_pane_ParamLimits

0xd13d,	// (0x0008018d) single_mobtv_pg_channel_pane

0xd14f,	// (0x0008019f) single_mobtv_pg_channel_table_pane

0xd158,	// (0x000801a8) single_mobtv_pg_channel_thumb_pane

0xd161,	// (0x000801b1) single_tv_pg_channel_pane_g1

0xd16a,	// (0x000801ba) single_tv_pg_channel_pane_g2

0x0001,

0xfc0e,	// (0x00082c5e) single_tv_pg_channel_pane_g

0xc29f,	// (0x0007f2ef) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc29f,	// (0x0007f2ef) bg_single_mobtv_pg_channel_thumb_pane

0xd173,	// (0x000801c3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd173,	// (0x000801c3) single_mobtv_pg_channel_thumb_pane_g1

0xd181,	// (0x000801d1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd181,	// (0x000801d1) single_mobtv_pg_channel_thumb_pane_g2

0xd18d,	// (0x000801dd) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd18d,	// (0x000801dd) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc13,	// (0x00082c63) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc13,	// (0x00082c63) single_mobtv_pg_channel_thumb_pane_g

0xd199,	// (0x000801e9) single_mobtv_pg_channel_thumb_pane_t1

0xd1a7,	// (0x000801f7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1a,	// (0x00082c6a) single_mobtv_pg_channel_thumb_pane_t

0xc033,	// (0x0007f083) bg_single_mobtv_pg_channel_table_pane_g1

0xc033,	// (0x0007f083) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6f4,	// (0x00082744) bg_single_mobtv_pg_channel_table_pane_g

0xd1b5,	// (0x00080205) single_mobtv_pg_channel_table_pane_t1

0xd1c3,	// (0x00080213) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc1f,	// (0x00082c6f) single_mobtv_pg_channel_table_pane_t

0x9704,	// (0x0007c754) main_mobtv_info_pane_g1_ParamLimits

0x9704,	// (0x0007c754) main_mobtv_info_pane_g1

0x9722,	// (0x0007c772) main_mobtv_info_pane_t1_ParamLimits

0x9722,	// (0x0007c772) main_mobtv_info_pane_t1

0x979a,	// (0x0007c7ea) main_mobtv_info_pane_t2_ParamLimits

0x979a,	// (0x0007c7ea) main_mobtv_info_pane_t2

0x0002,

0xfc29,	// (0x00082c79) main_mobtv_info_pane_t_ParamLimits

0xfc29,	// (0x00082c79) main_mobtv_info_pane_t

0x9829,	// (0x0007c879) wait_bar_pane_cp05

0x983b,	// (0x0007c88b) main_mobtv_loading_pane_g1_ParamLimits

0x983b,	// (0x0007c88b) main_mobtv_loading_pane_g1

0x984e,	// (0x0007c89e) main_mobtv_loading_pane_g2_ParamLimits

0x984e,	// (0x0007c89e) main_mobtv_loading_pane_g2

0x985a,	// (0x0007c8aa) main_mobtv_loading_pane_g3_ParamLimits

0x985a,	// (0x0007c8aa) main_mobtv_loading_pane_g3

0x0002,

0xfc30,	// (0x00082c80) main_mobtv_loading_pane_g_ParamLimits

0xfc30,	// (0x00082c80) main_mobtv_loading_pane_g

0xd1d1,	// (0x00080221) main_mobtv_loading_pane_t1_ParamLimits

0xd1d1,	// (0x00080221) main_mobtv_loading_pane_t1

0xd1e9,	// (0x00080239) main_mobtv_loading_pane_t2_ParamLimits

0xd1e9,	// (0x00080239) main_mobtv_loading_pane_t2

0x0001,

0xfc37,	// (0x00082c87) main_mobtv_loading_pane_t_ParamLimits

0xfc37,	// (0x00082c87) main_mobtv_loading_pane_t

0x986d,	// (0x0007c8bd) wait_bar_pane_cp06_ParamLimits

0x986d,	// (0x0007c8bd) wait_bar_pane_cp06

0xd20d,	// (0x0008025d) main_mobtv_programe_curr_pane_t1

0xd21b,	// (0x0008026b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc3c,	// (0x00082c8c) main_mobtv_programe_curr_pane_t

0xd229,	// (0x00080279) main_mobtv_programe_next_pane_t1

0xd237,	// (0x00080287) main_mobtv_programe_next_pane_t2

0xd245,	// (0x00080295) main_mobtv_programe_next_pane_t3

0x0002,

0xfc41,	// (0x00082c91) main_mobtv_programe_next_pane_t

0xaa6c,	// (0x0007dabc) bg_popup_mobtv_noti_window_pane

0xd253,	// (0x000802a3) popup_mobtv_noti_window_g1

0xd25b,	// (0x000802ab) popup_mobtv_noti_window_t1

0xd269,	// (0x000802b9) popup_mobtv_noti_window_t2

0x0001,

0xfc48,	// (0x00082c98) popup_mobtv_noti_window_t

0xc033,	// (0x0007f083) bg_popup_mobtv_noti_window_pane_g1

0xaa6c,	// (0x0007dabc) sc_clock_pane

0xaa6c,	// (0x0007dabc) main_fs_bigclock_pane

0x8fef,	// (0x0007c03f) blid2_tripm_pane_t4_ParamLimits

0x8fef,	// (0x0007c03f) blid2_tripm_pane_t4

0x987c,	// (0x0007c8cc) sc_clock_pane_g1_ParamLimits

0x987c,	// (0x0007c8cc) sc_clock_pane_g1

0x988e,	// (0x0007c8de) sc_clock_pane_t1_ParamLimits

0x988e,	// (0x0007c8de) sc_clock_pane_t1

0x98b0,	// (0x0007c900) sc_clock_pane_t2_ParamLimits

0x98b0,	// (0x0007c900) sc_clock_pane_t2

0x98c8,	// (0x0007c918) sc_clock_pane_t3_ParamLimits

0x98c8,	// (0x0007c918) sc_clock_pane_t3

0x0004,

0xfc4d,	// (0x00082c9d) sc_clock_pane_t_ParamLimits

0xfc4d,	// (0x00082c9d) sc_clock_pane_t

0xa296,	// (0x0007d2e6) main_fs_bigclock_indicator_pane_ParamLimits

0xa296,	// (0x0007d2e6) main_fs_bigclock_indicator_pane

0xc26f,	// (0x0007f2bf) main_fs_bigclock_pane_g1_ParamLimits

0xc26f,	// (0x0007f2bf) main_fs_bigclock_pane_g1

0xa2a2,	// (0x0007d2f2) main_fs_bigclock_pane_t1_ParamLimits

0xa2a2,	// (0x0007d2f2) main_fs_bigclock_pane_t1

0xa2b4,	// (0x0007d304) main_fs_bigclock_pane_t2_ParamLimits

0xa2b4,	// (0x0007d304) main_fs_bigclock_pane_t2

0xa2c8,	// (0x0007d318) main_fs_bigclock_pane_t3_ParamLimits

0xa2c8,	// (0x0007d318) main_fs_bigclock_pane_t3

0x0002,

0xfe4c,	// (0x00082e9c) main_fs_bigclock_pane_t_ParamLimits

0xfe4c,	// (0x00082e9c) main_fs_bigclock_pane_t

0xdd11,	// (0x00080d61) main_fs_bigclock_indicator_pane_g1

0xcf35,	// (0x0007ff85) ncim_query_content_pane_g2_ParamLimits

0xcf35,	// (0x0007ff85) ncim_query_content_pane_g2

0x0001,

0xfbda,	// (0x00082c2a) ncim_query_content_pane_g_ParamLimits

0xfbda,	// (0x00082c2a) ncim_query_content_pane_g

0x98e1,	// (0x0007c931) sc_clock_pane_t4_ParamLimits

0x98e1,	// (0x0007c931) sc_clock_pane_t4

0xe835,	// (0x00081885) main_radioblah_pane

0xe7c9,	// (0x00081819) cell_call4_button_pane_t1_copy1_ParamLimits

0xe7c9,	// (0x00081819) cell_call4_button_pane_t1_copy1

0x9538,	// (0x0007c588) main_ncimui_pane_t1_ParamLimits

0x9538,	// (0x0007c588) main_ncimui_pane_t1

0x9552,	// (0x0007c5a2) main_ncimui_pane_t2_ParamLimits

0x9552,	// (0x0007c5a2) main_ncimui_pane_t2

0x0002,

0xfbd3,	// (0x00082c23) main_ncimui_pane_t_ParamLimits

0xfbd3,	// (0x00082c23) main_ncimui_pane_t

0xd277,	// (0x000802c7) main_radioblah_anim_pane_ParamLimits

0xd277,	// (0x000802c7) main_radioblah_anim_pane

0xd288,	// (0x000802d8) main_radioblah_info_pane_ParamLimits

0xd288,	// (0x000802d8) main_radioblah_info_pane

0xd29c,	// (0x000802ec) main_radioblah_pane_t1_ParamLimits

0xd29c,	// (0x000802ec) main_radioblah_pane_t1

0xd2b8,	// (0x00080308) main_radioblah_pane_t2_ParamLimits

0xd2b8,	// (0x00080308) main_radioblah_pane_t2

0x0003,

0xfc6e,	// (0x00082cbe) main_radioblah_pane_t_ParamLimits

0xfc6e,	// (0x00082cbe) main_radioblah_pane_t

0x9aad,	// (0x0007cafd) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9aad,	// (0x0007cafd) main_radioblah_rocker_ctrl_pane

0xd300,	// (0x00080350) main_radioblah_info_pane_t1_ParamLimits

0xd300,	// (0x00080350) main_radioblah_info_pane_t1

0x9b05,	// (0x0007cb55) main_radioblah_info_pane_t2_ParamLimits

0x9b05,	// (0x0007cb55) main_radioblah_info_pane_t2

0x0003,

0xfc77,	// (0x00082cc7) main_radioblah_info_pane_t_ParamLimits

0xfc77,	// (0x00082cc7) main_radioblah_info_pane_t

0xc033,	// (0x0007f083) main_radioblah_rocker_ctrl_pane_g1

0x9bb5,	// (0x0007cc05) main_radioblah_rocker_ctrl_pane_g2

0x9bbd,	// (0x0007cc0d) main_radioblah_rocker_ctrl_pane_g3

0x9bc5,	// (0x0007cc15) main_radioblah_rocker_ctrl_pane_g4

0x9bcd,	// (0x0007cc1d) main_radioblah_rocker_ctrl_pane_g5

0x9bd5,	// (0x0007cc25) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc80,	// (0x00082cd0) main_radioblah_rocker_ctrl_pane_g

0x9502,	// (0x0007c552) main_cset_text2_pane_t1_copy1_ParamLimits

0xe3b3,	// (0x00081403) cam4_image_uncrop_qvga_pane

0xe40c,	// (0x0008145c) vid4_image_uncrop_qcif_pane

0xe51a,	// (0x0008156a) cam6_image_uncrop_qvga_pane_ParamLimits

0xe51a,	// (0x0008156a) cam6_image_uncrop_qvga_pane

0xcb8f,	// (0x0007fbdf) vid6_image_uncrop_qcif_pane_ParamLimits

0xcb8f,	// (0x0007fbdf) vid6_image_uncrop_qcif_pane

0xaa6c,	// (0x0007dabc) bg_popup_preview_window_pane_cp03

0xcee7,	// (0x0007ff37) list_cset_text2_pane

0xceef,	// (0x0007ff3f) main_cset6_text2_pane_g1

0xcef7,	// (0x0007ff47) main_cset6_text2_pane_t1

0x9bdd,	// (0x0007cc2d) list_cset_text2_pane_t1_ParamLimits

0x9bdd,	// (0x0007cc2d) list_cset_text2_pane_t1

0xe835,	// (0x00081885) main_radioblah_pane_ParamLimits

0x9815,	// (0x0007c865) main_mobtv_info_pane_t3_ParamLimits

0x9815,	// (0x0007c865) main_mobtv_info_pane_t3

0x9a9b,	// (0x0007caeb) main_radioblah_pane_g1

0x9ad5,	// (0x0007cb25) main_radioblah_info_pane_g1

0x9b5a,	// (0x0007cbaa) main_radioblah_info_pane_t3_ParamLimits

0x9b5a,	// (0x0007cbaa) main_radioblah_info_pane_t3

0x3645,	// (0x00076695) highlight_cell_cale_month_pane_ParamLimits

0x3645,	// (0x00076695) highlight_cell_cale_month_pane

0xaa6c,	// (0x0007dabc) main_phob_fisheye_pane

0xc3b9,	// (0x0007f409) scroll_pane_cp0031_ParamLimits

0xc3b9,	// (0x0007f409) scroll_pane_cp0031

0xcc9d,	// (0x0007fced) wait_bar_pane_cp08_ParamLimits

0x932d,	// (0x0007c37d) cset_list_set_pane_copy1_ParamLimits

0xd33a,	// (0x0008038a) highlight_cell_cale_month_pane_g1

0x9bf6,	// (0x0007cc46) highlight_cell_cale_month_pane_t1

0x8d0a,	// (0x0007bd5a) list_gen_pane_cp01

0x816e,	// (0x0007b1be) scroll_pane_01

0x1147,	// (0x00074197) list_single_double_fisheye_pane

0x1150,	// (0x000741a0) list_double_fisheye_pane_g1_ParamLimits

0x1150,	// (0x000741a0) list_double_fisheye_pane_g1

0x115c,	// (0x000741ac) list_double_fisheye_pane_g2_ParamLimits

0x115c,	// (0x000741ac) list_double_fisheye_pane_g2

0x1170,	// (0x000741c0) list_double_fisheye_pane_g3_ParamLimits

0x1170,	// (0x000741c0) list_double_fisheye_pane_g3

0x0004,

0xfc8d,	// (0x00082cdd) list_double_fisheye_pane_g_ParamLimits

0xfc8d,	// (0x00082cdd) list_double_fisheye_pane_g

0x1199,	// (0x000741e9) list_double_fisheye_pane_t1_ParamLimits

0x1199,	// (0x000741e9) list_double_fisheye_pane_t1

0x11b4,	// (0x00074204) list_double_fisheye_pane_t2_ParamLimits

0x11b4,	// (0x00074204) list_double_fisheye_pane_t2

0x0001,

0xfc98,	// (0x00082ce8) list_double_fisheye_pane_t_ParamLimits

0xfc98,	// (0x00082ce8) list_double_fisheye_pane_t

0xaa6c,	// (0x0007dabc) main_call5_pane

0x990c,	// (0x0007c95c) sc_swipe_pane_ParamLimits

0x990c,	// (0x0007c95c) sc_swipe_pane

0x9c17,	// (0x0007cc67) call5_image_pane_ParamLimits

0x9c17,	// (0x0007cc67) call5_image_pane

0x9c34,	// (0x0007cc84) call5_swipe_1_pane_ParamLimits

0x9c34,	// (0x0007cc84) call5_swipe_1_pane

0x9c47,	// (0x0007cc97) call5_swipe_2_pane_ParamLimits

0x9c47,	// (0x0007cc97) call5_swipe_2_pane

0x9c72,	// (0x0007ccc2) popup_call5_audio_first_window_ParamLimits

0x9c72,	// (0x0007ccc2) popup_call5_audio_first_window

0xc29f,	// (0x0007f2ef) call5_swipe_1_pane_g1_ParamLimits

0xc29f,	// (0x0007f2ef) call5_swipe_1_pane_g1

0xd342,	// (0x00080392) call5_swipe_1_pane_g2_ParamLimits

0xd342,	// (0x00080392) call5_swipe_1_pane_g2

0x0001,

0xfc9d,	// (0x00082ced) call5_swipe_1_pane_g_ParamLimits

0xfc9d,	// (0x00082ced) call5_swipe_1_pane_g

0xd34e,	// (0x0008039e) call5_swipe_1_pane_t1_ParamLimits

0xd34e,	// (0x0008039e) call5_swipe_1_pane_t1

0xc29f,	// (0x0007f2ef) call5_swipe_2_pane_g1_ParamLimits

0xc29f,	// (0x0007f2ef) call5_swipe_2_pane_g1

0xd363,	// (0x000803b3) call5_swipe_2_pane_g2_ParamLimits

0xd363,	// (0x000803b3) call5_swipe_2_pane_g2

0x0001,

0xfca2,	// (0x00082cf2) call5_swipe_2_pane_g_ParamLimits

0xfca2,	// (0x00082cf2) call5_swipe_2_pane_g

0xd36f,	// (0x000803bf) call5_swipe_2_pane_t1_ParamLimits

0xd36f,	// (0x000803bf) call5_swipe_2_pane_t1

0xd384,	// (0x000803d4) sc_swipe_pane_g1_ParamLimits

0xd384,	// (0x000803d4) sc_swipe_pane_g1

0xd391,	// (0x000803e1) sc_swipe_pane_g2_ParamLimits

0xd391,	// (0x000803e1) sc_swipe_pane_g2

0x0001,

0xfca7,	// (0x00082cf7) sc_swipe_pane_g_ParamLimits

0xfca7,	// (0x00082cf7) sc_swipe_pane_g

0xd39d,	// (0x000803ed) sc_swipe_pane_t1_ParamLimits

0xd39d,	// (0x000803ed) sc_swipe_pane_t1

0xaa6c,	// (0x0007dabc) main_cmail_launcher_pane

0x9c83,	// (0x0007ccd3) aid_size_cell_cmail_l_ParamLimits

0x9c83,	// (0x0007ccd3) aid_size_cell_cmail_l

0x9c9d,	// (0x0007cced) grid_cmail_l_pane_ParamLimits

0x9c9d,	// (0x0007cced) grid_cmail_l_pane

0x9cb8,	// (0x0007cd08) cell_cmail_l_pane_ParamLimits

0x9cb8,	// (0x0007cd08) cell_cmail_l_pane

0x9cde,	// (0x0007cd2e) cell_cmail_l_pane_g1_ParamLimits

0x9cde,	// (0x0007cd2e) cell_cmail_l_pane_g1

0x9cea,	// (0x0007cd3a) cell_cmail_l_pane_t1_ParamLimits

0x9cea,	// (0x0007cd3a) cell_cmail_l_pane_t1

0xd3b2,	// (0x00080402) cell_cmail_l_pane_t2_ParamLimits

0xd3b2,	// (0x00080402) cell_cmail_l_pane_t2

0x0001,

0xfcac,	// (0x00082cfc) cell_cmail_l_pane_t_ParamLimits

0xfcac,	// (0x00082cfc) cell_cmail_l_pane_t

0xe835,	// (0x00081885) grid_highlight_pane_cp018_ParamLimits

0xe835,	// (0x00081885) grid_highlight_pane_cp018

0x1854,	// (0x000748a4) main2_pane_ParamLimits

0x1854,	// (0x000748a4) main2_pane

0xf08a,	// (0x000820da) popup_sp_fs_action_menu_bg_pane_g1

0xf092,	// (0x000820e2) popup_sp_fs_action_menu_bg_pane_g2

0xf09a,	// (0x000820ea) popup_sp_fs_action_menu_bg_pane_g3

0xf0a2,	// (0x000820f2) popup_sp_fs_action_menu_bg_pane_g4

0xf0aa,	// (0x000820fa) popup_sp_fs_action_menu_bg_pane_g5

0xf0b2,	// (0x00082102) popup_sp_fs_action_menu_bg_pane_g6

0xf0ba,	// (0x0008210a) popup_sp_fs_action_menu_bg_pane_g7

0xf0c2,	// (0x00082112) popup_sp_fs_action_menu_bg_pane_g8

0xf0ca,	// (0x0008211a) popup_sp_fs_action_menu_bg_pane_g9

0xf0d2,	// (0x00082122) popup_sp_fs_action_menu_bg_pane_g10

0xf0d2,	// (0x00082122) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x000821fc) popup_sp_fs_action_menu_bg_pane_g

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t3_g3_g1_ParamLimits

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t3_g3_g1

0xabca,	// (0x0007dc1a) list_medium_line_x2_t3_g3_g2_ParamLimits

0xabca,	// (0x0007dc1a) list_medium_line_x2_t3_g3_g2

0xabd6,	// (0x0007dc26) list_medium_line_x2_t3_g3_g3_ParamLimits

0xabd6,	// (0x0007dc26) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x000822ac) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x000822ac) list_medium_line_x2_t3_g3_g

0xabe2,	// (0x0007dc32) list_medium_line_x2_t3_g3_t1_ParamLimits

0xabe2,	// (0x0007dc32) list_medium_line_x2_t3_g3_t1

0x0d26,	// (0x00073d76) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d26,	// (0x00073d76) list_medium_line_x2_t3_g3_t2

0xabf7,	// (0x0007dc47) list_medium_line_x2_t3_g3_t3_ParamLimits

0xabf7,	// (0x0007dc47) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x000822b3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x000822b3) list_medium_line_x2_t3_g3_t

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t3_g2_g1_ParamLimits

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t3_g2_g1

0xabd6,	// (0x0007dc26) list_medium_line_x2_t3_g2_g2_ParamLimits

0xabd6,	// (0x0007dc26) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x000822ba) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x000822ba) list_medium_line_x2_t3_g2_g

0xac0c,	// (0x0007dc5c) list_medium_line_x2_t3_g2_t1_ParamLimits

0xac0c,	// (0x0007dc5c) list_medium_line_x2_t3_g2_t1

0xac22,	// (0x0007dc72) list_medium_line_x2_t3_g2_t2_ParamLimits

0xac22,	// (0x0007dc72) list_medium_line_x2_t3_g2_t2

0xac34,	// (0x0007dc84) list_medium_line_x2_t3_g2_t3_ParamLimits

0xac34,	// (0x0007dc84) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x000822bf) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x000822bf) list_medium_line_x2_t3_g2_t

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t4_g4_g1_ParamLimits

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t4_g4_g1

0xac51,	// (0x0007dca1) list_medium_line_x2_t4_g4_g2_ParamLimits

0xac51,	// (0x0007dca1) list_medium_line_x2_t4_g4_g2

0xabca,	// (0x0007dc1a) list_medium_line_x2_t4_g4_g3_ParamLimits

0xabca,	// (0x0007dc1a) list_medium_line_x2_t4_g4_g3

0xac5d,	// (0x0007dcad) list_medium_line_x2_t4_g4_g4_ParamLimits

0xac5d,	// (0x0007dcad) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x000822c6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x000822c6) list_medium_line_x2_t4_g4_g

0x0d3a,	// (0x00073d8a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0d3a,	// (0x00073d8a) list_medium_line_x2_t4_g4_t1

0x0d54,	// (0x00073da4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0d54,	// (0x00073da4) list_medium_line_x2_t4_g4_t2

0x0d6a,	// (0x00073dba) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0d6a,	// (0x00073dba) list_medium_line_x2_t4_g4_t3

0xac69,	// (0x0007dcb9) list_medium_line_x2_t4_g4_t4_ParamLimits

0xac69,	// (0x0007dcb9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x000822cf) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x000822cf) list_medium_line_x2_t4_g4_t

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t2_g4_g1_ParamLimits

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t2_g4_g1

0xac51,	// (0x0007dca1) list_medium_line_x2_t2_g4_g2_ParamLimits

0xac51,	// (0x0007dca1) list_medium_line_x2_t2_g4_g2

0xabca,	// (0x0007dc1a) list_medium_line_x2_t2_g4_g3_ParamLimits

0xabca,	// (0x0007dc1a) list_medium_line_x2_t2_g4_g3

0xabd6,	// (0x0007dc26) list_medium_line_x2_t2_g4_g4_ParamLimits

0xabd6,	// (0x0007dc26) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00082336) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00082336) list_medium_line_x2_t2_g4_g

0xac7b,	// (0x0007dccb) list_medium_line_x2_t2_g4_t1_ParamLimits

0xac7b,	// (0x0007dccb) list_medium_line_x2_t2_g4_t1

0xabf7,	// (0x0007dc47) list_medium_line_x2_t2_g4_t2_ParamLimits

0xabf7,	// (0x0007dc47) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0008233f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0008233f) list_medium_line_x2_t2_g4_t

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t2_g3_g1_ParamLimits

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t2_g3_g1

0xabca,	// (0x0007dc1a) list_medium_line_x2_t2_g3_g2_ParamLimits

0xabca,	// (0x0007dc1a) list_medium_line_x2_t2_g3_g2

0xabd6,	// (0x0007dc26) list_medium_line_x2_t2_g3_g3_ParamLimits

0xabd6,	// (0x0007dc26) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x000822ac) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x000822ac) list_medium_line_x2_t2_g3_g

0xac90,	// (0x0007dce0) list_medium_line_x2_t2_g3_t1_ParamLimits

0xac90,	// (0x0007dce0) list_medium_line_x2_t2_g3_t1

0xabf7,	// (0x0007dc47) list_medium_line_x2_t2_g3_t2_ParamLimits

0xabf7,	// (0x0007dc47) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00082344) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00082344) list_medium_line_x2_t2_g3_t

0x3999,	// (0x000769e9) main_sp_fs_list_pane_ParamLimits

0x3999,	// (0x000769e9) main_sp_fs_list_pane

0x39a5,	// (0x000769f5) sp_fs_scroll_pane_ParamLimits

0x39a5,	// (0x000769f5) sp_fs_scroll_pane

0x0d7f,	// (0x00073dcf) list_medium_line_x2_t3_t1

0x0d8f,	// (0x00073ddf) list_medium_line_x2_t3_t2

0xacd3,	// (0x0007dd23) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0008238a) list_medium_line_x2_t3_t

0x0d9d,	// (0x00073ded) list_medium_line_x3_t4_t1

0x0dad,	// (0x00073dfd) list_medium_line_x3_t4_t2

0xace1,	// (0x0007dd31) list_medium_line_x3_t4_t3

0xacd3,	// (0x0007dd23) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00082391) list_medium_line_x3_t4_t

0x0dbb,	// (0x00073e0b) list_medium_line_x4_t5_t1

0x0dcb,	// (0x00073e1b) list_medium_line_x4_t5_t2

0xace1,	// (0x0007dd31) list_medium_line_x4_t5_t3

0xacef,	// (0x0007dd3f) list_medium_line_x4_t5_t4

0xacd3,	// (0x0007dd23) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0008239a) list_medium_line_x4_t5_t

0xabbe,	// (0x0007dc0e) list_medium_line_t4_g4_g1_ParamLimits

0xabbe,	// (0x0007dc0e) list_medium_line_t4_g4_g1

0xac5d,	// (0x0007dcad) list_medium_line_t4_g4_g2_ParamLimits

0xac5d,	// (0x0007dcad) list_medium_line_t4_g4_g2

0xacfd,	// (0x0007dd4d) list_medium_line_t4_g4_g3_ParamLimits

0xacfd,	// (0x0007dd4d) list_medium_line_t4_g4_g3

0xabd6,	// (0x0007dc26) list_medium_line_t4_g4_g4_ParamLimits

0xabd6,	// (0x0007dc26) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x000823a5) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x000823a5) list_medium_line_t4_g4_g

0xad09,	// (0x0007dd59) list_medium_line_t4_g4_t1_ParamLimits

0xad09,	// (0x0007dd59) list_medium_line_t4_g4_t1

0xad1e,	// (0x0007dd6e) list_medium_line_t4_g4_t2_ParamLimits

0xad1e,	// (0x0007dd6e) list_medium_line_t4_g4_t2

0xad33,	// (0x0007dd83) list_medium_line_t4_g4_t3_ParamLimits

0xad33,	// (0x0007dd83) list_medium_line_t4_g4_t3

0xabf7,	// (0x0007dc47) list_medium_line_t4_g4_t4_ParamLimits

0xabf7,	// (0x0007dc47) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x000823ae) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x000823ae) list_medium_line_t4_g4_t

0x3ce6,	// (0x00076d36) chi_dic_find_pane_g1

0x55cb,	// (0x0007861b) main_tport_pane

0xc829,	// (0x0007f879) list_medium_line_plain_t1

0xc837,	// (0x0007f887) list_medium_line_t2_g2_g1_ParamLimits

0xc837,	// (0x0007f887) list_medium_line_t2_g2_g1

0xc843,	// (0x0007f893) list_medium_line_t2_g2_g2_ParamLimits

0xc843,	// (0x0007f893) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x00082a39) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x00082a39) list_medium_line_t2_g2_g

0x0f80,	// (0x00073fd0) list_medium_line_t2_g2_t1_ParamLimits

0x0f80,	// (0x00073fd0) list_medium_line_t2_g2_t1

0x0f9a,	// (0x00073fea) list_medium_line_t2_g2_t2_ParamLimits

0x0f9a,	// (0x00073fea) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x00082a3e) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x00082a3e) list_medium_line_t2_g2_t

0xc8eb,	// (0x0007f93b) aid_sp_fs_list_icon_a_sm

0xe512,	// (0x00081562) aid_sp_fs_list_icon_d

0xc8f3,	// (0x0007f943) aid_sp_fs_text_primary

0xc8fc,	// (0x0007f94c) aid_sp_fs_text_secondary

0xc905,	// (0x0007f955) list_medium_line

0xc905,	// (0x0007f955) list_medium_line_g2

0xc905,	// (0x0007f955) list_medium_line_g3

0xc905,	// (0x0007f955) list_medium_line_plain

0xc905,	// (0x0007f955) list_medium_line_plain_t2

0xc905,	// (0x0007f955) list_medium_line_plain_t3

0xc905,	// (0x0007f955) list_medium_line_right_icon

0xc905,	// (0x0007f955) list_medium_line_right_iconx2

0xc905,	// (0x0007f955) list_medium_line_t2

0xc905,	// (0x0007f955) list_medium_line_t2_g2

0xc905,	// (0x0007f955) list_medium_line_t2_g3

0xc905,	// (0x0007f955) list_medium_line_t2_right_icon

0xc905,	// (0x0007f955) list_medium_line_t2_right_iconx2

0xc905,	// (0x0007f955) list_medium_line_t3

0xc905,	// (0x0007f955) list_medium_line_t3_g2

0xc905,	// (0x0007f955) list_medium_line_t3_g3

0xc905,	// (0x0007f955) list_medium_line_t3_right_iconx2

0xc90e,	// (0x0007f95e) list_medium_line_t4_g4

0xc917,	// (0x0007f967) list_medium_line_x2

0xc917,	// (0x0007f967) list_medium_line_x2_t2_g2

0xc917,	// (0x0007f967) list_medium_line_x2_t2_g3

0xc917,	// (0x0007f967) list_medium_line_x2_t2_g4

0xc917,	// (0x0007f967) list_medium_line_x2_t3

0xc917,	// (0x0007f967) list_medium_line_x2_t3_g2

0xc917,	// (0x0007f967) list_medium_line_x2_t3_g3

0xc917,	// (0x0007f967) list_medium_line_x2_t3_g4

0xc917,	// (0x0007f967) list_medium_line_x2_t4_g2

0xc917,	// (0x0007f967) list_medium_line_x2_t4_g4

0xc920,	// (0x0007f970) list_medium_line_x3

0xc920,	// (0x0007f970) list_medium_line_x3_t4

0xc920,	// (0x0007f970) list_medium_line_x3_t4_g4

0xc90e,	// (0x0007f95e) list_medium_line_x4_t4

0xc90e,	// (0x0007f95e) list_medium_line_x4_t4_g7

0xc90e,	// (0x0007f95e) list_medium_line_x4_t5

0xc929,	// (0x0007f979) list_single_fs_dyc_pane_ParamLimits

0xc929,	// (0x0007f979) list_single_fs_dyc_pane

0xabbe,	// (0x0007dc0e) list_medium_line_x4_t4_g7_g1_ParamLimits

0xabbe,	// (0x0007dc0e) list_medium_line_x4_t4_g7_g1

0xce16,	// (0x0007fe66) list_medium_line_x4_t4_g7_g2_ParamLimits

0xce16,	// (0x0007fe66) list_medium_line_x4_t4_g7_g2

0xce22,	// (0x0007fe72) list_medium_line_x4_t4_g7_g3_ParamLimits

0xce22,	// (0x0007fe72) list_medium_line_x4_t4_g7_g3

0xce31,	// (0x0007fe81) list_medium_line_x4_t4_g7_g4_ParamLimits

0xce31,	// (0x0007fe81) list_medium_line_x4_t4_g7_g4

0xce3d,	// (0x0007fe8d) list_medium_line_x4_t4_g7_g5_ParamLimits

0xce3d,	// (0x0007fe8d) list_medium_line_x4_t4_g7_g5

0xce4c,	// (0x0007fe9c) list_medium_line_x4_t4_g7_g6_ParamLimits

0xce4c,	// (0x0007fe9c) list_medium_line_x4_t4_g7_g6

0xce5b,	// (0x0007feab) list_medium_line_x4_t4_g7_g7_ParamLimits

0xce5b,	// (0x0007feab) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x00082c09) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x00082c09) list_medium_line_x4_t4_g7_g

0xce67,	// (0x0007feb7) list_medium_line_x4_t4_g7_t1_ParamLimits

0xce67,	// (0x0007feb7) list_medium_line_x4_t4_g7_t1

0xce7c,	// (0x0007fecc) list_medium_line_x4_t4_g7_t2_ParamLimits

0xce7c,	// (0x0007fecc) list_medium_line_x4_t4_g7_t2

0xce91,	// (0x0007fee1) list_medium_line_x4_t4_g7_t3_ParamLimits

0xce91,	// (0x0007fee1) list_medium_line_x4_t4_g7_t3

0xcea6,	// (0x0007fef6) list_medium_line_x4_t4_g7_t4_ParamLimits

0xcea6,	// (0x0007fef6) list_medium_line_x4_t4_g7_t4

0xceb8,	// (0x0007ff08) list_medium_line_x4_t4_g7_t5_ParamLimits

0xceb8,	// (0x0007ff08) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x00082c18) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x00082c18) list_medium_line_x4_t4_g7_t

0xceca,	// (0x0007ff1a) list_single_dyc_row_pane_ParamLimits

0xceca,	// (0x0007ff1a) list_single_dyc_row_pane

0x9c04,	// (0x0007cc54) call5_gesture_pane_ParamLimits

0x9c04,	// (0x0007cc54) call5_gesture_pane

0x9c5a,	// (0x0007ccaa) call5_windows_pane_ParamLimits

0x9c5a,	// (0x0007ccaa) call5_windows_pane

0x9d00,	// (0x0007cd50) call5_swipe_1_pane_cp_ParamLimits

0x9d00,	// (0x0007cd50) call5_swipe_1_pane_cp

0x9d0c,	// (0x0007cd5c) call5_swipe_2_pane_cp_ParamLimits

0x9d0c,	// (0x0007cd5c) call5_swipe_2_pane_cp

0x4144,	// (0x00077194) call5_image_pane_cp

0x9d18,	// (0x0007cd68) popup_call5_audio_first_window_cp_ParamLimits

0x9d18,	// (0x0007cd68) popup_call5_audio_first_window_cp

0xd384,	// (0x000803d4) call5_swipe_1_pane_g1_cp_ParamLimits

0xd384,	// (0x000803d4) call5_swipe_1_pane_g1_cp

0xd3c4,	// (0x00080414) call5_swipe_1_pane_g2_cp

0xd39d,	// (0x000803ed) call5_swipe_1_pane_t1_cp_ParamLimits

0xd39d,	// (0x000803ed) call5_swipe_1_pane_t1_cp

0xd384,	// (0x000803d4) call5_swipe_2_pane_g1_cp_ParamLimits

0xd384,	// (0x000803d4) call5_swipe_2_pane_g1_cp

0xd3cc,	// (0x0008041c) call5_swipe_2_pane_g2_cp

0xd3d4,	// (0x00080424) call5_swipe_2_pane_t1_cp_ParamLimits

0xd3d4,	// (0x00080424) call5_swipe_2_pane_t1_cp

0xe835,	// (0x00081885) main_sp_fs_email_pane

0xd3e9,	// (0x00080439) main_sp_fs_listscroll_pane_te

0xd3f2,	// (0x00080442) popup_sp_fs_action_menu_pane_ParamLimits

0xd3f2,	// (0x00080442) popup_sp_fs_action_menu_pane

0xc033,	// (0x0007f083) bg_sp_fs_ctrlbar_pane_g1

0xd436,	// (0x00080486) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd43f,	// (0x0008048f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd448,	// (0x00080498) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc033,	// (0x0007f083) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb1,	// (0x00082d01) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbe18,	// (0x0007ee68) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbe18,	// (0x0007ee68) bg_sp_fs_ctrlbar_ddmenu_pane

0xd451,	// (0x000804a1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd451,	// (0x000804a1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd45d,	// (0x000804ad) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd45d,	// (0x000804ad) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcba,	// (0x00082d0a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcba,	// (0x00082d0a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd469,	// (0x000804b9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd469,	// (0x000804b9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd483,	// (0x000804d3) list_medium_line_t2_right_icon_g1

0x11d6,	// (0x00074226) list_medium_line_t2_right_icon_t1

0x11e6,	// (0x00074236) list_medium_line_t2_right_icon_t2

0x0001,

0xfcbf,	// (0x00082d0f) list_medium_line_t2_right_icon_t

0xbb2d,	// (0x0007eb7d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbb2d,	// (0x0007eb7d) bg_sp_fs_ctrlbar_pane

0x9d6e,	// (0x0007cdbe) main_sp_fs_ctrlbar_button_pane_cp01

0x9d78,	// (0x0007cdc8) main_sp_fs_ctrlbar_ddmenu_pane

0xd4c3,	// (0x00080513) main_sp_fs_ctrlbar_pane_g1

0xd4cf,	// (0x0008051f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcc4,	// (0x00082d14) main_sp_fs_ctrlbar_pane_g

0xd4db,	// (0x0008052b) main_sp_fs_ctrlbar_pane_t1

0x11f8,	// (0x00074248) main_sp_fs_ctrlbar_pane

0x121c,	// (0x0007426c) main_sp_fs_listscroll_pane_te_cp01

0x123c,	// (0x0007428c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x123c,	// (0x0007428c) popup_sp_fs_action_menu_pane_cp01

0xe835,	// (0x00081885) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe835,	// (0x00081885) bg_sp_fs_highlight_list_pane_cp01

0xd4f0,	// (0x00080540) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd4f0,	// (0x00080540) sp_fs_action_menu_list_gene_pane_g1

0xd4ff,	// (0x0008054f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd4ff,	// (0x0008054f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcc9,	// (0x00082d19) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcc9,	// (0x00082d19) sp_fs_action_menu_list_gene_pane_g

0xd50c,	// (0x0008055c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd50c,	// (0x0008055c) sp_fs_action_menu_list_gene_pane_t1

0xd524,	// (0x00080574) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd524,	// (0x00080574) sp_fs_action_menu_list_gene_pane

0xd545,	// (0x00080595) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd545,	// (0x00080595) popup_sp_fs_action_menu_bg_pane

0xd553,	// (0x000805a3) sp_fs_action_menu_list_pane_ParamLimits

0xd553,	// (0x000805a3) sp_fs_action_menu_list_pane

0xd575,	// (0x000805c5) sp_fs_scroll_pane_cp01_ParamLimits

0xd575,	// (0x000805c5) sp_fs_scroll_pane_cp01

0x1258,	// (0x000742a8) list_medium_line_plain_t2_t1

0x1268,	// (0x000742b8) list_medium_line_plain_t2_t2

0x0001,

0xfcce,	// (0x00082d1e) list_medium_line_plain_t2_t

0x1278,	// (0x000742c8) list_medium_line_plain_t3_t1

0x1288,	// (0x000742d8) list_medium_line_plain_t3_t2

0x1296,	// (0x000742e6) list_medium_line_plain_t3_t3

0x0002,

0xfcd3,	// (0x00082d23) list_medium_line_plain_t3_t

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t2_g2_g1_ParamLimits

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t2_g2_g1

0xabd6,	// (0x0007dc26) list_medium_line_x2_t2_g2_g2_ParamLimits

0xabd6,	// (0x0007dc26) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x000822ba) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x000822ba) list_medium_line_x2_t2_g2_g

0xad09,	// (0x0007dd59) list_medium_line_x2_t2_g2_t1_ParamLimits

0xad09,	// (0x0007dd59) list_medium_line_x2_t2_g2_t1

0xabf7,	// (0x0007dc47) list_medium_line_x2_t2_g2_t2_ParamLimits

0xabf7,	// (0x0007dc47) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcda,	// (0x00082d2a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcda,	// (0x00082d2a) list_medium_line_x2_t2_g2_t

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t4_g2_g1_ParamLimits

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t4_g2_g1

0xd59b,	// (0x000805eb) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd59b,	// (0x000805eb) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcdf,	// (0x00082d2f) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcdf,	// (0x00082d2f) list_medium_line_x2_t4_g2_g

0x12a4,	// (0x000742f4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x12a4,	// (0x000742f4) list_medium_line_x2_t4_g2_t1

0x12be,	// (0x0007430e) list_medium_line_x2_t4_g2_t2_ParamLimits

0x12be,	// (0x0007430e) list_medium_line_x2_t4_g2_t2

0x12d3,	// (0x00074323) list_medium_line_x2_t4_g2_t3_ParamLimits

0x12d3,	// (0x00074323) list_medium_line_x2_t4_g2_t3

0xabf7,	// (0x0007dc47) list_medium_line_x2_t4_g2_t4_ParamLimits

0xabf7,	// (0x0007dc47) list_medium_line_x2_t4_g2_t4

0x0003,

0xfce4,	// (0x00082d34) list_medium_line_x2_t4_g2_t_ParamLimits

0xfce4,	// (0x00082d34) list_medium_line_x2_t4_g2_t

0xd5ad,	// (0x000805fd) list_medium_line_t3_right_iconx2_g1

0xd483,	// (0x000804d3) list_medium_line_t3_right_iconx2_g2

0x12e8,	// (0x00074338) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfced,	// (0x00082d3d) list_medium_line_t3_right_iconx2_g

0x12f2,	// (0x00074342) list_medium_line_t3_right_iconx2_t1

0x1302,	// (0x00074352) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcf4,	// (0x00082d44) list_medium_line_t3_right_iconx2_t

0xabbe,	// (0x0007dc0e) list_medium_line_x3_t4_g4_g1_ParamLimits

0xabbe,	// (0x0007dc0e) list_medium_line_x3_t4_g4_g1

0xabca,	// (0x0007dc1a) list_medium_line_x3_t4_g4_g2_ParamLimits

0xabca,	// (0x0007dc1a) list_medium_line_x3_t4_g4_g2

0xac5d,	// (0x0007dcad) list_medium_line_x3_t4_g4_g3_ParamLimits

0xac5d,	// (0x0007dcad) list_medium_line_x3_t4_g4_g3

0xd5b5,	// (0x00080605) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd5b5,	// (0x00080605) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcf9,	// (0x00082d49) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcf9,	// (0x00082d49) list_medium_line_x3_t4_g4_g

0x1310,	// (0x00074360) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1310,	// (0x00074360) list_medium_line_x3_t4_g4_t1

0x1327,	// (0x00074377) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1327,	// (0x00074377) list_medium_line_x3_t4_g4_t2

0xad1e,	// (0x0007dd6e) list_medium_line_x3_t4_g4_t3_ParamLimits

0xad1e,	// (0x0007dd6e) list_medium_line_x3_t4_g4_t3

0xd5c1,	// (0x00080611) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd5c1,	// (0x00080611) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd02,	// (0x00082d52) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd02,	// (0x00082d52) list_medium_line_x3_t4_g4_t

0x1342,	// (0x00074392) list_single_dyc_row_text_pane_t1_ParamLimits

0x1342,	// (0x00074392) list_single_dyc_row_text_pane_t1

0x138b,	// (0x000743db) list_single_dyc_row_text_pane_t2_ParamLimits

0x138b,	// (0x000743db) list_single_dyc_row_text_pane_t2

0xd5de,	// (0x0008062e) list_single_dyc_row_text_pane_t3_ParamLimits

0xd5de,	// (0x0008062e) list_single_dyc_row_text_pane_t3

0x0002,

0xfd0b,	// (0x00082d5b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd0b,	// (0x00082d5b) list_single_dyc_row_text_pane_t

0xd5f0,	// (0x00080640) list_single_dyc_row_pane_g1_ParamLimits

0xd5f0,	// (0x00080640) list_single_dyc_row_pane_g1

0xd5fc,	// (0x0008064c) list_single_dyc_row_pane_g2_ParamLimits

0xd5fc,	// (0x0008064c) list_single_dyc_row_pane_g2

0xd608,	// (0x00080658) list_single_dyc_row_pane_g3_ParamLimits

0xd608,	// (0x00080658) list_single_dyc_row_pane_g3

0xd614,	// (0x00080664) list_single_dyc_row_pane_g4_ParamLimits

0xd614,	// (0x00080664) list_single_dyc_row_pane_g4

0x0003,

0xfd12,	// (0x00082d62) list_single_dyc_row_pane_g_ParamLimits

0xfd12,	// (0x00082d62) list_single_dyc_row_pane_g

0xd620,	// (0x00080670) list_single_dyc_row_text_pane_ParamLimits

0xd620,	// (0x00080670) list_single_dyc_row_text_pane

0xaa6c,	// (0x0007dabc) bg_sp_fs_scroll_pane

0xd63f,	// (0x0008068f) thumb_sp_fs_scroll_pane

0xc837,	// (0x0007f887) list_medium_line_g1_ParamLimits

0xc837,	// (0x0007f887) list_medium_line_g1

0xd648,	// (0x00080698) list_medium_line_t1_ParamLimits

0xd648,	// (0x00080698) list_medium_line_t1

0xabbe,	// (0x0007dc0e) list_medium_line_x2_g1_ParamLimits

0xabbe,	// (0x0007dc0e) list_medium_line_x2_g1

0xabca,	// (0x0007dc1a) list_medium_line_x2_g2_ParamLimits

0xabca,	// (0x0007dc1a) list_medium_line_x2_g2

0x0001,

0xfd1b,	// (0x00082d6b) list_medium_line_x2_g_ParamLimits

0xfd1b,	// (0x00082d6b) list_medium_line_x2_g

0xd65d,	// (0x000806ad) list_medium_line_x2_t1_ParamLimits

0xd65d,	// (0x000806ad) list_medium_line_x2_t1

0xabbe,	// (0x0007dc0e) list_medium_line_x3_g1_ParamLimits

0xabbe,	// (0x0007dc0e) list_medium_line_x3_g1

0xabca,	// (0x0007dc1a) list_medium_line_x3_g2_ParamLimits

0xabca,	// (0x0007dc1a) list_medium_line_x3_g2

0x0001,

0xfd1b,	// (0x00082d6b) list_medium_line_x3_g_ParamLimits

0xfd1b,	// (0x00082d6b) list_medium_line_x3_g

0xd65d,	// (0x000806ad) list_medium_line_x3_t1_ParamLimits

0xd65d,	// (0x000806ad) list_medium_line_x3_t1

0xd673,	// (0x000806c3) thumb_sp_fs_scroll_pane_g1

0xd67c,	// (0x000806cc) thumb_sp_fs_scroll_pane_g2

0xd685,	// (0x000806d5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd20,	// (0x00082d70) thumb_sp_fs_scroll_pane_g

0xd673,	// (0x000806c3) bg_sp_fs_scroll_pane_g1

0xd67c,	// (0x000806cc) bg_sp_fs_scroll_pane_g2

0xd685,	// (0x000806d5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd20,	// (0x00082d70) bg_sp_fs_scroll_pane_g

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t3_g4_g1_ParamLimits

0xabbe,	// (0x0007dc0e) list_medium_line_x2_t3_g4_g1

0xac51,	// (0x0007dca1) list_medium_line_x2_t3_g4_g2_ParamLimits

0xac51,	// (0x0007dca1) list_medium_line_x2_t3_g4_g2

0xabca,	// (0x0007dc1a) list_medium_line_x2_t3_g4_g3_ParamLimits

0xabca,	// (0x0007dc1a) list_medium_line_x2_t3_g4_g3

0xabd6,	// (0x0007dc26) list_medium_line_x2_t3_g4_g4_ParamLimits

0xabd6,	// (0x0007dc26) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00082336) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00082336) list_medium_line_x2_t3_g4_g

0x13e5,	// (0x00074435) list_medium_line_x2_t3_g4_t1_ParamLimits

0x13e5,	// (0x00074435) list_medium_line_x2_t3_g4_t1

0x13ff,	// (0x0007444f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x13ff,	// (0x0007444f) list_medium_line_x2_t3_g4_t2

0xabf7,	// (0x0007dc47) list_medium_line_x2_t3_g4_t3_ParamLimits

0xabf7,	// (0x0007dc47) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd27,	// (0x00082d77) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd27,	// (0x00082d77) list_medium_line_x2_t3_g4_t

0xc837,	// (0x0007f887) list_medium_line_g2_g1_ParamLimits

0xc837,	// (0x0007f887) list_medium_line_g2_g1

0xc843,	// (0x0007f893) list_medium_line_g2_g2_ParamLimits

0xc843,	// (0x0007f893) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x00082a39) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x00082a39) list_medium_line_g2_g

0xd68e,	// (0x000806de) list_medium_line_g2_t1_ParamLimits

0xd68e,	// (0x000806de) list_medium_line_g2_t1

0xc837,	// (0x0007f887) list_medium_line_t3_g2_g1_ParamLimits

0xc837,	// (0x0007f887) list_medium_line_t3_g2_g1

0xc843,	// (0x0007f893) list_medium_line_t3_g2_g2_ParamLimits

0xc843,	// (0x0007f893) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x00082a39) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x00082a39) list_medium_line_t3_g2_g

0x1419,	// (0x00074469) list_medium_line_t3_g2_t1_ParamLimits

0x1419,	// (0x00074469) list_medium_line_t3_g2_t1

0x1430,	// (0x00074480) list_medium_line_t3_g2_t2_ParamLimits

0x1430,	// (0x00074480) list_medium_line_t3_g2_t2

0x1445,	// (0x00074495) list_medium_line_t3_g2_t3_ParamLimits

0x1445,	// (0x00074495) list_medium_line_t3_g2_t3

0x0002,

0xfd2e,	// (0x00082d7e) list_medium_line_t3_g2_t_ParamLimits

0xfd2e,	// (0x00082d7e) list_medium_line_t3_g2_t

0xd483,	// (0x000804d3) list_medium_line_right_icon_g1

0xd6a3,	// (0x000806f3) list_medium_line_right_icon_t1

0xc837,	// (0x0007f887) list_medium_line_t2_g1_ParamLimits

0xc837,	// (0x0007f887) list_medium_line_t2_g1

0x145e,	// (0x000744ae) list_medium_line_t2_t1_ParamLimits

0x145e,	// (0x000744ae) list_medium_line_t2_t1

0x1478,	// (0x000744c8) list_medium_line_t2_t2_ParamLimits

0x1478,	// (0x000744c8) list_medium_line_t2_t2

0x0001,

0xfd35,	// (0x00082d85) list_medium_line_t2_t_ParamLimits

0xfd35,	// (0x00082d85) list_medium_line_t2_t

0xc837,	// (0x0007f887) list_medium_line_t3_g1_ParamLimits

0xc837,	// (0x0007f887) list_medium_line_t3_g1

0x1491,	// (0x000744e1) list_medium_line_t3_t1_ParamLimits

0x1491,	// (0x000744e1) list_medium_line_t3_t1

0x14ab,	// (0x000744fb) list_medium_line_t3_t2_ParamLimits

0x14ab,	// (0x000744fb) list_medium_line_t3_t2

0x14c0,	// (0x00074510) list_medium_line_t3_t3_ParamLimits

0x14c0,	// (0x00074510) list_medium_line_t3_t3

0x0002,

0xfd3a,	// (0x00082d8a) list_medium_line_t3_t_ParamLimits

0xfd3a,	// (0x00082d8a) list_medium_line_t3_t

0xc837,	// (0x0007f887) list_medium_line_g3_g1_ParamLimits

0xc837,	// (0x0007f887) list_medium_line_g3_g1

0xd6b1,	// (0x00080701) list_medium_line_g3_g2_ParamLimits

0xd6b1,	// (0x00080701) list_medium_line_g3_g2

0xc843,	// (0x0007f893) list_medium_line_g3_g3_ParamLimits

0xc843,	// (0x0007f893) list_medium_line_g3_g3

0x0002,

0xfd41,	// (0x00082d91) list_medium_line_g3_g_ParamLimits

0xfd41,	// (0x00082d91) list_medium_line_g3_g

0xd6bd,	// (0x0008070d) list_medium_line_g3_t1_ParamLimits

0xd6bd,	// (0x0008070d) list_medium_line_g3_t1

0xc837,	// (0x0007f887) list_medium_line_t2_g3_g1_ParamLimits

0xc837,	// (0x0007f887) list_medium_line_t2_g3_g1

0xd6b1,	// (0x00080701) list_medium_line_t2_g3_g2_ParamLimits

0xd6b1,	// (0x00080701) list_medium_line_t2_g3_g2

0xc843,	// (0x0007f893) list_medium_line_t2_g3_g3_ParamLimits

0xc843,	// (0x0007f893) list_medium_line_t2_g3_g3

0x0002,

0xfd41,	// (0x00082d91) list_medium_line_t2_g3_g_ParamLimits

0xfd41,	// (0x00082d91) list_medium_line_t2_g3_g

0x14d5,	// (0x00074525) list_medium_line_t2_g3_t1_ParamLimits

0x14d5,	// (0x00074525) list_medium_line_t2_g3_t1

0x14ef,	// (0x0007453f) list_medium_line_t2_g3_t2_ParamLimits

0x14ef,	// (0x0007453f) list_medium_line_t2_g3_t2

0x0001,

0xfd48,	// (0x00082d98) list_medium_line_t2_g3_t_ParamLimits

0xfd48,	// (0x00082d98) list_medium_line_t2_g3_t

0xc837,	// (0x0007f887) list_medium_line_t3_g3_g1_ParamLimits

0xc837,	// (0x0007f887) list_medium_line_t3_g3_g1

0xd6b1,	// (0x00080701) list_medium_line_t3_g3_g2_ParamLimits

0xd6b1,	// (0x00080701) list_medium_line_t3_g3_g2

0xc843,	// (0x0007f893) list_medium_line_t3_g3_g3_ParamLimits

0xc843,	// (0x0007f893) list_medium_line_t3_g3_g3

0x0002,

0xfd41,	// (0x00082d91) list_medium_line_t3_g3_g_ParamLimits

0xfd41,	// (0x00082d91) list_medium_line_t3_g3_g

0x150a,	// (0x0007455a) list_medium_line_t3_g3_t1_ParamLimits

0x150a,	// (0x0007455a) list_medium_line_t3_g3_t1

0x151e,	// (0x0007456e) list_medium_line_t3_g3_t2_ParamLimits

0x151e,	// (0x0007456e) list_medium_line_t3_g3_t2

0x1530,	// (0x00074580) list_medium_line_t3_g3_t3_ParamLimits

0x1530,	// (0x00074580) list_medium_line_t3_g3_t3

0x0002,

0xfd4d,	// (0x00082d9d) list_medium_line_t3_g3_t_ParamLimits

0xfd4d,	// (0x00082d9d) list_medium_line_t3_g3_t

0xd5ad,	// (0x000805fd) list_medium_line_right_iconx2_g1

0xd483,	// (0x000804d3) list_medium_line_right_iconx2_g2

0x0001,

0xfd54,	// (0x00082da4) list_medium_line_right_iconx2_g

0xd6d2,	// (0x00080722) list_medium_line_right_iconx2_t1

0xd5ad,	// (0x000805fd) list_medium_line_t2_right_iconx2_g1

0xd483,	// (0x000804d3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd54,	// (0x00082da4) list_medium_line_t2_right_iconx2_g

0x1544,	// (0x00074594) list_medium_line_t2_right_iconx2_t1

0x1554,	// (0x000745a4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd59,	// (0x00082da9) list_medium_line_t2_right_iconx2_t

0xd6e0,	// (0x00080730) list_medium_line_x4_t4_t1

0x1566,	// (0x000745b6) list_medium_line_x4_t4_t2

0x1576,	// (0x000745c6) list_medium_line_x4_t4_t3

0x1586,	// (0x000745d6) list_medium_line_x4_t4_t4

0x0003,

0xfd5e,	// (0x00082dae) list_medium_line_x4_t4_t

0x9dc5,	// (0x0007ce15) tport_appsw_pane_ParamLimits

0x9dc5,	// (0x0007ce15) tport_appsw_pane

0x9dd6,	// (0x0007ce26) tport_contact_pane_ParamLimits

0x9dd6,	// (0x0007ce26) tport_contact_pane

0x9def,	// (0x0007ce3f) tport_listscroll_pane_ParamLimits

0x9def,	// (0x0007ce3f) tport_listscroll_pane

0x9e0a,	// (0x0007ce5a) cell_tport_appsw_pane_ParamLimits

0x9e0a,	// (0x0007ce5a) cell_tport_appsw_pane

0xe972,	// (0x000819c2) tport_appsw_pane_g1_ParamLimits

0xe972,	// (0x000819c2) tport_appsw_pane_g1

0xd6ee,	// (0x0008073e) tport_contact_pane_g1

0xcfbb,	// (0x0008000b) tport_contact_pane_t1

0xd6f7,	// (0x00080747) tport_contact_pane_t2

0x0001,

0xfd67,	// (0x00082db7) tport_contact_pane_t

0xd705,	// (0x00080755) list_tport_pane

0xd70e,	// (0x0008075e) scroll_pane_cp_030

0xd71f,	// (0x0008076f) cell_tport_appsw_pane_g1

0xd72f,	// (0x0008077f) cell_tport_appsw_pane_t1

0xaa6c,	// (0x0007dabc) grid_highlight_pane_cp019

0x9e4a,	// (0x0007ce9a) list_tport_double_graphic_pane_ParamLimits

0x9e4a,	// (0x0007ce9a) list_tport_double_graphic_pane

0xe835,	// (0x00081885) list_highlight_pane_cp023_ParamLimits

0xe835,	// (0x00081885) list_highlight_pane_cp023

0x9e57,	// (0x0007cea7) list_tport_double_graphic_pane_g1_ParamLimits

0x9e57,	// (0x0007cea7) list_tport_double_graphic_pane_g1

0x9e64,	// (0x0007ceb4) list_tport_double_graphic_pane_t1_ParamLimits

0x9e64,	// (0x0007ceb4) list_tport_double_graphic_pane_t1

0x9e79,	// (0x0007cec9) list_tport_double_graphic_pane_t2_ParamLimits

0x9e79,	// (0x0007cec9) list_tport_double_graphic_pane_t2

0x0001,

0xfd73,	// (0x00082dc3) list_tport_double_graphic_pane_t_ParamLimits

0xfd73,	// (0x00082dc3) list_tport_double_graphic_pane_t

0xaa6c,	// (0x0007dabc) main_cale_note_pane

0x7c79,	// (0x0007acc9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7c79,	// (0x0007acc9) cell_vitu2_function_top_wide_pane_cp01

0x9829,	// (0x0007c879) wait_bar_pane_cp05_ParamLimits

0xaa6c,	// (0x0007dabc) listscroll_cmail_pane

0xd745,	// (0x00080795) list_cmail_pane

0x8515,	// (0x0007b565) list_cmail_body_pane

0x9e95,	// (0x0007cee5) list_single_cmail_header_caption_pane

0x9eab,	// (0x0007cefb) list_single_cmail_header_detail_pane_ParamLimits

0x9eab,	// (0x0007cefb) list_single_cmail_header_detail_pane

0x9ed4,	// (0x0007cf24) list_single_cmail_header_caption_pane_t1

0x1596,	// (0x000745e6) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1596,	// (0x000745e6) list_single_cmail_header_detail_pane_g1

0xe528,	// (0x00081578) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe528,	// (0x00081578) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd78,	// (0x00082dc8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd78,	// (0x00082dc8) list_single_cmail_header_detail_pane_g

0xd773,	// (0x000807c3) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd773,	// (0x000807c3) list_single_cmail_header_detail_pane_t1

0xd7ad,	// (0x000807fd) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd7ad,	// (0x000807fd) list_single_cmail_header_editor_pane_bg

0xd16a,	// (0x000801ba) list_cmail_body_pane_g1

0xd7bf,	// (0x0008080f) list_cmail_body_pane_t1

0x7d43,	// (0x0007ad93) list_single_cmail_header_editor_pane_bg_g1

0x2d32,	// (0x00075d82) list_single_cmail_header_editor_pane_bg_g1_copy1

0x7d53,	// (0x0007ada3) list_single_cmail_header_editor_pane_bg_g1_copy2

0x7d4b,	// (0x0007ad9b) list_single_cmail_header_editor_pane_bg_g1_copy3

0x86cd,	// (0x0007b71d) list_single_cmail_header_editor_pane_bg_g1_copy4

0x7d73,	// (0x0007adc3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x7d63,	// (0x0007adb3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x7d6b,	// (0x0007adbb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2d12,	// (0x00075d62) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9ee4,	// (0x0007cf34) calenote_gesture_pane_ParamLimits

0x9ee4,	// (0x0007cf34) calenote_gesture_pane

0x9f04,	// (0x0007cf54) calenote_window_pane_ParamLimits

0x9f04,	// (0x0007cf54) calenote_window_pane

0xd7cd,	// (0x0008081d) popup_note_window_cp01

0x9f20,	// (0x0007cf70) calenote_swipe_1_pane_ParamLimits

0x9f20,	// (0x0007cf70) calenote_swipe_1_pane

0x9d0c,	// (0x0007cd5c) calenote_swipe_2_pane_ParamLimits

0x9d0c,	// (0x0007cd5c) calenote_swipe_2_pane

0xd384,	// (0x000803d4) calenote_swipe_1_pane_g1_ParamLimits

0xd384,	// (0x000803d4) calenote_swipe_1_pane_g1

0xd391,	// (0x000803e1) calenote_swipe_1_pane_g2_ParamLimits

0xd391,	// (0x000803e1) calenote_swipe_1_pane_g2

0x0001,

0xfca7,	// (0x00082cf7) calenote_swipe_1_pane_g_ParamLimits

0xfca7,	// (0x00082cf7) calenote_swipe_1_pane_g

0xd7df,	// (0x0008082f) calenote_swipe_1_pane_t1_ParamLimits

0xd7df,	// (0x0008082f) calenote_swipe_1_pane_t1

0xd384,	// (0x000803d4) calenote_swipe_2_pane_g1_ParamLimits

0xd384,	// (0x000803d4) calenote_swipe_2_pane_g1

0xd7fe,	// (0x0008084e) calenote_swipe_2_pane_g2_ParamLimits

0xd7fe,	// (0x0008084e) calenote_swipe_2_pane_g2

0x0001,

0xfd84,	// (0x00082dd4) calenote_swipe_2_pane_g_ParamLimits

0xfd84,	// (0x00082dd4) calenote_swipe_2_pane_g

0xd80a,	// (0x0008085a) calenote_swipe_2_pane_t1_ParamLimits

0xd80a,	// (0x0008085a) calenote_swipe_2_pane_t1

0xaa6c,	// (0x0007dabc) main_mup_navstr_pane

0x695e,	// (0x000799ae) main_mup3_pane_t7_ParamLimits

0x695e,	// (0x000799ae) main_mup3_pane_t7

0xe1d1,	// (0x00081221) main_mp4_pane_g6_ParamLimits

0xe1d1,	// (0x00081221) main_mp4_pane_g6

0xe375,	// (0x000813c5) main_image3_pane_t4_ParamLimits

0xe375,	// (0x000813c5) main_image3_pane_t4

0x9f35,	// (0x0007cf85) popup_navstr_preview_pane_ParamLimits

0x9f35,	// (0x0007cf85) popup_navstr_preview_pane

0x9f49,	// (0x0007cf99) scroll_navstr_pane_ParamLimits

0x9f49,	// (0x0007cf99) scroll_navstr_pane

0xaa6c,	// (0x0007dabc) bg_popup_preview_window_pane_cp04

0xd831,	// (0x00080881) popup_navstr_preview_pane_t1

0x9f5d,	// (0x0007cfad) scroll_navstr_pane_g1_ParamLimits

0x9f5d,	// (0x0007cfad) scroll_navstr_pane_g1

0x9f71,	// (0x0007cfc1) scroll_navstr_pane_t1_ParamLimits

0x9f71,	// (0x0007cfc1) scroll_navstr_pane_t1

0xd7d6,	// (0x00080826) bg_button_pane_cp014

0xd7d6,	// (0x00080826) bg_button_pane_cp030

0x117c,	// (0x000741cc) list_double_fisheye_pane_g4_ParamLimits

0x117c,	// (0x000741cc) list_double_fisheye_pane_g4

0x1188,	// (0x000741d8) list_double_fisheye_pane_g5_ParamLimits

0x1188,	// (0x000741d8) list_double_fisheye_pane_g5

0xd74d,	// (0x0008079d) sp_fs_scroll_pane_cp03

0xd4c3,	// (0x00080513) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd4cf,	// (0x0008051f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc4,	// (0x00082d14) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd4db,	// (0x0008052b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9e8b,	// (0x0007cedb) sp_fs_scroll_pane_cp02

0x1e90,	// (0x00074ee0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1e90,	// (0x00074ee0) popup_sp_fs_calendar_preview_list_single_pane

0xaa6c,	// (0x0007dabc) main_cam6_pano_pane

0xe835,	// (0x00081885) main_mup3_pane_ParamLimits

0xaa6c,	// (0x0007dabc) main_phacti_pane

0x96fc,	// (0x0007c74c) bg_button_pane_cp11

0x9716,	// (0x0007c766) main_mobtv_info_pane_g2_ParamLimits

0x9716,	// (0x0007c766) main_mobtv_info_pane_g2

0x0001,

0xfc24,	// (0x00082c74) main_mobtv_info_pane_g_ParamLimits

0xfc24,	// (0x00082c74) main_mobtv_info_pane_g

0x98f3,	// (0x0007c943) sc_clock_pane_t5_ParamLimits

0x98f3,	// (0x0007c943) sc_clock_pane_t5

0x9a9b,	// (0x0007caeb) main_radioblah_pane_g1_ParamLimits

0xd2d0,	// (0x00080320) main_radioblah_pane_t3_ParamLimits

0xd2d0,	// (0x00080320) main_radioblah_pane_t3

0xd2e8,	// (0x00080338) main_radioblah_pane_t4_ParamLimits

0xd2e8,	// (0x00080338) main_radioblah_pane_t4

0x9ac3,	// (0x0007cb13) main_radioblah_text_pane_ParamLimits

0x9ac3,	// (0x0007cb13) main_radioblah_text_pane

0x9ad5,	// (0x0007cb25) main_radioblah_info_pane_g1_ParamLimits

0x9b6e,	// (0x0007cbbe) main_radioblah_info_pane_t4_ParamLimits

0x9b6e,	// (0x0007cbbe) main_radioblah_info_pane_t4

0xe835,	// (0x00081885) main_sp_fs_calendar_pane

0x9f88,	// (0x0007cfd8) main_phacti_pane_g1

0x9f90,	// (0x0007cfe0) phacti_note_pane_ParamLimits

0x9f90,	// (0x0007cfe0) phacti_note_pane

0xd848,	// (0x00080898) phacti_term_pane_ParamLimits

0xd848,	// (0x00080898) phacti_term_pane

0xd85d,	// (0x000808ad) phacti_note_pane_t1_ParamLimits

0xd85d,	// (0x000808ad) phacti_note_pane_t1

0xd874,	// (0x000808c4) phacti_term_pane_g1

0xd87c,	// (0x000808cc) phacti_term_pane_t1_ParamLimits

0xd87c,	// (0x000808cc) phacti_term_pane_t1

0xd8a6,	// (0x000808f6) popup_sp_fs_calendar_preview_list_single_pane_g1

0x26da,	// (0x0007572a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd8e,	// (0x00082dde) popup_sp_fs_calendar_preview_list_single_pane_g

0xd8ae,	// (0x000808fe) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd8ae,	// (0x000808fe) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd8c3,	// (0x00080913) aid_popup_sp_fs_bg_corner_pane

0xc033,	// (0x0007f083) popup_sp_fs_calendar_preview_bg_pane_g1

0xaa6c,	// (0x0007dabc) popup_sp_fs_calendar_preview_bg_pane

0xd8cb,	// (0x0008091b) popup_sp_fs_calendar_preview_list_pane

0xe835,	// (0x00081885) bg_main_sp_fs_cale_pane_ParamLimits

0xe835,	// (0x00081885) bg_main_sp_fs_cale_pane

0xd8d3,	// (0x00080923) listscroll_cale_mrui_pane_ParamLimits

0xd8d3,	// (0x00080923) listscroll_cale_mrui_pane

0xd8e7,	// (0x00080937) listscroll_sp_fs_schedule_track_pane

0xd8f0,	// (0x00080940) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd8f0,	// (0x00080940) main_sp_fs_ctrlbar_pane_cp01

0xd901,	// (0x00080951) main_sp_fs_ribbon_pane

0xd909,	// (0x00080959) popup_sp_fs_cale_preview_window

0x9ff0,	// (0x0007d040) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9ff0,	// (0x0007d040) list_single_sp_fs_schedule_track_pane

0xe835,	// (0x00081885) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe835,	// (0x00081885) bg_sp_fs_highlight_list_pane_cp03

0xa002,	// (0x0007d052) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa002,	// (0x0007d052) list_single_sp_fs_schedule_track_pane_g1

0xa00e,	// (0x0007d05e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa00e,	// (0x0007d05e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd93,	// (0x00082de3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd93,	// (0x00082de3) list_single_sp_fs_schedule_track_pane_g

0xa01a,	// (0x0007d06a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa01a,	// (0x0007d06a) list_single_sp_fs_schedule_track_pane_t1

0xa034,	// (0x0007d084) sp_fs_schedule_track_pane_ParamLimits

0xa034,	// (0x0007d084) sp_fs_schedule_track_pane

0xd91b,	// (0x0008096b) sp_fs_schedule_track_pane_g1

0xd923,	// (0x00080973) sp_fs_schedule_track_pane_g2

0xd92b,	// (0x0008097b) sp_fs_schedule_track_pane_g3

0xd933,	// (0x00080983) sp_fs_schedule_track_pane_g4

0xd93b,	// (0x0008098b) sp_fs_schedule_track_pane_g5

0x0004,

0xfd98,	// (0x00082de8) sp_fs_schedule_track_pane_g

0x7d43,	// (0x0007ad93) bg_sp_fs_schedule_viewer_highlight_g1

0x2d32,	// (0x00075d82) bg_sp_fs_schedule_viewer_highlight_g2

0x7d4b,	// (0x0007ad9b) bg_sp_fs_schedule_viewer_highlight_g3

0x7d53,	// (0x0007ada3) bg_sp_fs_schedule_viewer_highlight_g4

0x86cd,	// (0x0007b71d) bg_sp_fs_schedule_viewer_highlight_g5

0x7d63,	// (0x0007adb3) bg_sp_fs_schedule_viewer_highlight_g6

0x7d6b,	// (0x0007adbb) bg_sp_fs_schedule_viewer_highlight_g7

0x7d73,	// (0x0007adc3) bg_sp_fs_schedule_viewer_highlight_g8

0x2d12,	// (0x00075d62) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfda3,	// (0x00082df3) bg_sp_fs_schedule_viewer_highlight_g

0xaa6c,	// (0x0007dabc) bg_main_sp_fs_ribbon_pane

0xa045,	// (0x0007d095) main_sp_fs_ribbon_pane_g1

0xd943,	// (0x00080993) main_sp_fs_ribbon_pane_t1

0xa04e,	// (0x0007d09e) main_sp_fs_ribbon_pane_t2

0xd952,	// (0x000809a2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdb6,	// (0x00082e06) main_sp_fs_ribbon_pane_t

0xd961,	// (0x000809b1) main_sp_fs_ribbon_scheduler_pane

0xd969,	// (0x000809b9) bg_main_sp_fs_ribbon_pane_g1

0xd972,	// (0x000809c2) bg_main_sp_fs_ribbon_pane_g2

0xd97b,	// (0x000809cb) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdbd,	// (0x00082e0d) bg_main_sp_fs_ribbon_pane_g

0xd983,	// (0x000809d3) main_sp_fs_ribbon_scheduler_pane_g1

0xd98c,	// (0x000809dc) main_sp_fs_ribbon_scheduler_pane_g2

0xd995,	// (0x000809e5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdc4,	// (0x00082e14) main_sp_fs_ribbon_scheduler_pane_g

0xd99e,	// (0x000809ee) list_cale_mrui_pane

0xa05d,	// (0x0007d0ad) sp_fs_scroll_pane_cp07_ParamLimits

0xa05d,	// (0x0007d0ad) sp_fs_scroll_pane_cp07

0xa071,	// (0x0007d0c1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa071,	// (0x0007d0c1) bg_sp_fs_schedule_viewer_highlight

0xd9a7,	// (0x000809f7) list_single_sp_fs_schedule_track_pane_cp01

0xd9af,	// (0x000809ff) list_sp_fs_schedule_track_pane

0xd9b7,	// (0x00080a07) sp_fs_scroll_pane_cp06_ParamLimits

0xd9b7,	// (0x00080a07) sp_fs_scroll_pane_cp06

0xc033,	// (0x0007f083) bgmain_sp_fs_calendar_pane_g1

0x15d4,	// (0x00074624) list_single_cale_mrui_pane_ParamLimits

0x15d4,	// (0x00074624) list_single_cale_mrui_pane

0xd9c9,	// (0x00080a19) list_single_cale_mrui_row_pane_ParamLimits

0xd9c9,	// (0x00080a19) list_single_cale_mrui_row_pane

0xd9d6,	// (0x00080a26) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd9d6,	// (0x00080a26) list_single_cale_mrui_row_pane_g1

0xda0e,	// (0x00080a5e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xda0e,	// (0x00080a5e) list_single_cale_mrui_row_pane_t1

0x15f4,	// (0x00074644) list_single_cale_mrui_row_pane_t2_ParamLimits

0x15f4,	// (0x00074644) list_single_cale_mrui_row_pane_t2

0xda20,	// (0x00080a70) list_single_cale_mrui_row_pane_t3_ParamLimits

0xda20,	// (0x00080a70) list_single_cale_mrui_row_pane_t3

0xda4f,	// (0x00080a9f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xda4f,	// (0x00080a9f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdd0,	// (0x00082e20) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdd0,	// (0x00082e20) list_single_cale_mrui_row_pane_t

0x165c,	// (0x000746ac) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x165c,	// (0x000746ac) list_single_cmail_header_editor_pane_bg_cp01

0x1682,	// (0x000746d2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1682,	// (0x000746d2) list_single_cmail_header_editor_pane_bg_cp02

0xa081,	// (0x0007d0d1) main_radioblah_text_pane_t1_ParamLimits

0xa081,	// (0x0007d0d1) main_radioblah_text_pane_t1

0xda7e,	// (0x00080ace) cam6_indi_pane_cp01

0xda86,	// (0x00080ad6) cam6_mode_pane_cp01

0xda8e,	// (0x00080ade) cam6_pano_pane

0xda97,	// (0x00080ae7) cam6_zoom_pane_cp01

0xda9f,	// (0x00080aef) cam6_pano_image_pane

0xdaaa,	// (0x00080afa) cam6_pano_pane_g1

0xd16a,	// (0x000801ba) cam6_pano_pane_g2

0xdab3,	// (0x00080b03) cam6_pano_pane_g3

0xdabc,	// (0x00080b0c) cam6_pano_pane_g4

0xc607,	// (0x0007f657) cam6_pano_pane_g5

0xdac5,	// (0x00080b15) cam6_pano_pane_g6

0xdacf,	// (0x00080b1f) cam6_pano_pane_g7

0xdad7,	// (0x00080b27) cam6_pano_pane_g8

0xdae0,	// (0x00080b30) cam6_pano_pane_g9

0x0008,

0xfdd9,	// (0x00082e29) cam6_pano_pane_g

0xaa6c,	// (0x0007dabc) main_browser_tag_pane

0xd829,	// (0x00080879) grid_navstr_albumart_pane

0xdaeb,	// (0x00080b3b) cell_navstr_albumart_pane_ParamLimits

0xdaeb,	// (0x00080b3b) cell_navstr_albumart_pane

0xdb0e,	// (0x00080b5e) cell_navstr_albumart_pane_g1

0xb94a,	// (0x0007e99a) cell_navstr_albumart_pane_g2

0xb95a,	// (0x0007e9aa) cell_navstr_albumart_pane_g3

0xb952,	// (0x0007e9a2) cell_navstr_albumart_pane_g4

0x0003,

0xfdec,	// (0x00082e3c) cell_navstr_albumart_pane_g

0xa09b,	// (0x0007d0eb) bt_list_pane_ParamLimits

0xa09b,	// (0x0007d0eb) bt_list_pane

0xa0af,	// (0x0007d0ff) bt_list_pane_t1

0xa0be,	// (0x0007d10e) bt_list_pane_t2

0x0001,

0xfdf5,	// (0x00082e45) bt_list_pane_t

0xaa6c,	// (0x0007dabc) main_cale_prevew_pane

0xa0cd,	// (0x0007d11d) popup_cale_preview_window_ParamLimits

0xa0cd,	// (0x0007d11d) popup_cale_preview_window

0xe835,	// (0x00081885) bg_popup_preview_window_pane_cp05_ParamLimits

0xe835,	// (0x00081885) bg_popup_preview_window_pane_cp05

0xdb16,	// (0x00080b66) list_cale_preview_pane_ParamLimits

0xdb16,	// (0x00080b66) list_cale_preview_pane

0xa0e8,	// (0x0007d138) list_double_cale_preview_pane_ParamLimits

0xa0e8,	// (0x0007d138) list_double_cale_preview_pane

0xa0fa,	// (0x0007d14a) list_single_cale_preview_pane_ParamLimits

0xa0fa,	// (0x0007d14a) list_single_cale_preview_pane

0xa110,	// (0x0007d160) list_single_cale_preview_pane_g1

0xa118,	// (0x0007d168) list_single_cale_preview_pane_t1_ParamLimits

0xa118,	// (0x0007d168) list_single_cale_preview_pane_t1

0xa12d,	// (0x0007d17d) list_double_cale_preview_pane_g1

0xa135,	// (0x0007d185) list_double_cale_preview_pane_t1_ParamLimits

0xa135,	// (0x0007d185) list_double_cale_preview_pane_t1

0xa14a,	// (0x0007d19a) list_double_cale_preview_pane_t2_ParamLimits

0xa14a,	// (0x0007d19a) list_double_cale_preview_pane_t2

0x0001,

0xfdfa,	// (0x00082e4a) list_double_cale_preview_pane_t_ParamLimits

0xfdfa,	// (0x00082e4a) list_double_cale_preview_pane_t

0xaa6c,	// (0x0007dabc) main_ezdial_pane

0xe835,	// (0x00081885) main_sp_fs_email_pane_ParamLimits

0x9d26,	// (0x0007cd76) cmail_ddmenu_btn01_pane_ParamLimits

0x9d26,	// (0x0007cd76) cmail_ddmenu_btn01_pane

0x9d39,	// (0x0007cd89) cmail_ddmenu_btn02_pane_ParamLimits

0x9d39,	// (0x0007cd89) cmail_ddmenu_btn02_pane

0x9d5c,	// (0x0007cdac) cmail_ddmenu_btn03_pane_ParamLimits

0x9d5c,	// (0x0007cdac) cmail_ddmenu_btn03_pane

0x11f8,	// (0x00074248) main_sp_fs_ctrlbar_pane_ParamLimits

0x121c,	// (0x0007426c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8515,	// (0x0007b565) list_cmail_body_pane_ParamLimits

0xd75d,	// (0x000807ad) bg_button_pane_cp12

0xd766,	// (0x000807b6) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd766,	// (0x000807b6) list_single_cmail_header_detail_pane_g3

0x15ae,	// (0x000745fe) list_single_cmail_header_detail_pane_t2_ParamLimits

0x15ae,	// (0x000745fe) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd7f,	// (0x00082dcf) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd7f,	// (0x00082dcf) list_single_cmail_header_detail_pane_t

0xd891,	// (0x000808e1) phacti_term_pane_t2_ParamLimits

0xd891,	// (0x000808e1) phacti_term_pane_t2

0x0001,

0xfd89,	// (0x00082dd9) phacti_term_pane_t_ParamLimits

0xfd89,	// (0x00082dd9) phacti_term_pane_t

0xdb22,	// (0x00080b72) aid_size_list_single_double

0xa162,	// (0x0007d1b2) popup_ezdial_listscroll_window

0xa17e,	// (0x0007d1ce) popup_number_entry_window_cp01

0x4144,	// (0x00077194) bg_popup_call_pane_cp09

0xdb2e,	// (0x00080b7e) ezdial_list_pane

0xdb36,	// (0x00080b86) scroll_pane_cp23

0xbb2d,	// (0x0007eb7d) bg_button_pane_cp028_ParamLimits

0xbb2d,	// (0x0007eb7d) bg_button_pane_cp028

0xa18c,	// (0x0007d1dc) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa18c,	// (0x0007d1dc) cmail_ddmenu_btn01_pane_g1

0xa198,	// (0x0007d1e8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa198,	// (0x0007d1e8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdff,	// (0x00082e4f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdff,	// (0x00082e4f) cmail_ddmenu_btn01_pane_g

0xdb3e,	// (0x00080b8e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xdb3e,	// (0x00080b8e) cmail_ddmenu_btn01_pane_t1

0xbb2d,	// (0x0007eb7d) bg_button_pane_cp029_ParamLimits

0xbb2d,	// (0x0007eb7d) bg_button_pane_cp029

0xa1a4,	// (0x0007d1f4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa1a4,	// (0x0007d1f4) cmail_ddmenu_btn02_pane_g1

0xa1bc,	// (0x0007d20c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa1bc,	// (0x0007d20c) cmail_ddmenu_btn02_pane_t1

0xe835,	// (0x00081885) bg_button_pane_cp031_ParamLimits

0xe835,	// (0x00081885) bg_button_pane_cp031

0xa1a4,	// (0x0007d1f4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa1a4,	// (0x0007d1f4) cmail_ddmenu_btn03_pane_g1

0xa1bc,	// (0x0007d20c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa1bc,	// (0x0007d20c) cmail_ddmenu_btn03_pane_t1

0x7491,	// (0x0007a4e1) cell_dialer2_keypad_pane_t1_ParamLimits

0x74ab,	// (0x0007a4fb) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x74ab,	// (0x0007a4fb) cell_dialer2_keypad_pane_t1_copy1

0x957e,	// (0x0007c5ce) ncimui_group_button_pane

0xe835,	// (0x00081885) main_sp_fs_calendar_pane_ParamLimits

0x9e95,	// (0x0007cee5) list_single_cmail_header_caption_pane_ParamLimits

0x9fb6,	// (0x0007d006) aid_recal_txt_sm_pane

0xaa6c,	// (0x0007dabc) mian_recal_day_pane

0xd909,	// (0x00080959) popup_sp_fs_cale_preview_window_ParamLimits

0xaa6c,	// (0x0007dabc) list_recal_day_pane

0xdb6c,	// (0x00080bbc) list_single_recal_day_pane_ParamLimits

0xdb6c,	// (0x00080bbc) list_single_recal_day_pane

0xdb7e,	// (0x00080bce) list_single_recal_day_pane_g1_ParamLimits

0xdb7e,	// (0x00080bce) list_single_recal_day_pane_g1

0xdb8a,	// (0x00080bda) list_single_recal_day_pane_g2_ParamLimits

0xdb8a,	// (0x00080bda) list_single_recal_day_pane_g2

0xdb99,	// (0x00080be9) list_single_recal_day_pane_g3_ParamLimits

0xdb99,	// (0x00080be9) list_single_recal_day_pane_g3

0xa1e9,	// (0x0007d239) list_single_recal_day_pane_g4_ParamLimits

0xa1e9,	// (0x0007d239) list_single_recal_day_pane_g4

0xdba5,	// (0x00080bf5) list_single_recal_day_pane_g5_ParamLimits

0xdba5,	// (0x00080bf5) list_single_recal_day_pane_g5

0xdbb4,	// (0x00080c04) list_single_recal_day_pane_g6_ParamLimits

0xdbb4,	// (0x00080c04) list_single_recal_day_pane_g6

0x0005,

0xfe0e,	// (0x00082e5e) list_single_recal_day_pane_g_ParamLimits

0xfe0e,	// (0x00082e5e) list_single_recal_day_pane_g

0xdbc0,	// (0x00080c10) list_single_recal_day_pane_t1

0xdbce,	// (0x00080c1e) list_single_recal_day_pane_t2

0x0001,

0xfe1b,	// (0x00082e6b) list_single_recal_day_pane_t

0xa1fc,	// (0x0007d24c) ncimui_query_button_pane_ParamLimits

0xa1fc,	// (0x0007d24c) ncimui_query_button_pane

0xa20c,	// (0x0007d25c) ncimui_query_button_pane_t1_ParamLimits

0xa20c,	// (0x0007d25c) ncimui_query_button_pane_t1

0xdbdc,	// (0x00080c2c) ncimui_query_button_pane_t2_ParamLimits

0xdbdc,	// (0x00080c2c) ncimui_query_button_pane_t2

0x0001,

0xfe20,	// (0x00082e70) ncimui_query_button_pane_t_ParamLimits

0xfe20,	// (0x00082e70) ncimui_query_button_pane_t

0xa21f,	// (0x0007d26f) query_button_pane_ParamLimits

0xa21f,	// (0x0007d26f) query_button_pane

0xaa6c,	// (0x0007dabc) bg_button_pane_cp0028

0xdbef,	// (0x00080c3f) query_button_pane_t1

0x55cb,	// (0x0007861b) main_tport_pane_ParamLimits

0x9d82,	// (0x0007cdd2) bg_popup_window_pane_cp01_ParamLimits

0x9d82,	// (0x0007cdd2) bg_popup_window_pane_cp01

0x9d9c,	// (0x0007cdec) heading_pane_cp08_ParamLimits

0x9d9c,	// (0x0007cdec) heading_pane_cp08

0x9db0,	// (0x0007ce00) heading_pane_cp07_ParamLimits

0x9db0,	// (0x0007ce00) heading_pane_cp07

0xd71f,	// (0x0008076f) cell_tport_appsw_pane_g2

0x0002,

0xfd6c,	// (0x00082dbc) cell_tport_appsw_pane_g

0x0df1,	// (0x00073e41) input_candi_list_open_g1

0x37d3,	// (0x00076823) list_cale_time_pane_g6_ParamLimits

0x37d3,	// (0x00076823) list_cale_time_pane_g6

0x6398,	// (0x000793e8) aid_size_touch_calib_1_ParamLimits

0x6398,	// (0x000793e8) aid_size_touch_calib_1

0x63a4,	// (0x000793f4) aid_size_touch_calib_2_ParamLimits

0x63a4,	// (0x000793f4) aid_size_touch_calib_2

0x63ba,	// (0x0007940a) aid_size_touch_calib_3_ParamLimits

0x63ba,	// (0x0007940a) aid_size_touch_calib_3

0x63d8,	// (0x00079428) aid_size_touch_calib_4_ParamLimits

0x63d8,	// (0x00079428) aid_size_touch_calib_4

0x63ee,	// (0x0007943e) main_touch_calib_button_group_pane_ParamLimits

0x63ee,	// (0x0007943e) main_touch_calib_button_group_pane

0x6406,	// (0x00079456) main_touch_calib_pane_g1_ParamLimits

0x6412,	// (0x00079462) main_touch_calib_pane_g2_ParamLimits

0x641e,	// (0x0007946e) main_touch_calib_pane_g3_ParamLimits

0x642a,	// (0x0007947a) main_touch_calib_pane_g4_ParamLimits

0xf769,	// (0x000827b9) main_touch_calib_pane_g_ParamLimits

0x6436,	// (0x00079486) main_touch_calib_pane_t1_ParamLimits

0x6450,	// (0x000794a0) main_touch_calib_pane_t2_ParamLimits

0x646a,	// (0x000794ba) main_touch_calib_pane_t3_ParamLimits

0x647e,	// (0x000794ce) main_touch_calib_pane_t4_ParamLimits

0x6492,	// (0x000794e2) main_touch_calib_pane_t5_ParamLimits

0xf772,	// (0x000827c2) main_touch_calib_pane_t_ParamLimits

0xc3dd,	// (0x0007f42d) list_single_fp_cale_pane_g3_ParamLimits

0xc3dd,	// (0x0007f42d) list_single_fp_cale_pane_g3

0xe835,	// (0x00081885) bg_button_pane_cp012_ParamLimits

0xe835,	// (0x00081885) bg_vkb2_func_pane_cp03_ParamLimits

0x8683,	// (0x0007b6d3) cell_vitu2_function_top_pane_g1_ParamLimits

0xe835,	// (0x00081885) bg_vkb2_func_pane_cp04_ParamLimits

0x951e,	// (0x0007c56e) main_ncimui_button_group_pane_ParamLimits

0x951e,	// (0x0007c56e) main_ncimui_button_group_pane

0x956c,	// (0x0007c5bc) main_ncimui_pane_t3_ParamLimits

0x956c,	// (0x0007c5bc) main_ncimui_pane_t3

0xd83f,	// (0x0008088f) phacti_button_group_pane

0xdb22,	// (0x00080b72) aid_size_list_single_double_ParamLimits

0xa162,	// (0x0007d1b2) popup_ezdial_listscroll_window_ParamLimits

0xa17e,	// (0x0007d1ce) popup_number_entry_window_cp01_ParamLimits

0xa232,	// (0x0007d282) phacti_button_pane_ParamLimits

0xa232,	// (0x0007d282) phacti_button_pane

0xaa6c,	// (0x0007dabc) bg_button_pane_cp14

0xdbfd,	// (0x00080c4d) phacti_button_pane_t1

0xa243,	// (0x0007d293) main_touch_calib_button_pane_ParamLimits

0xa243,	// (0x0007d293) main_touch_calib_button_pane

0xeff1,	// (0x00082041) bg_button_pane_cp18_ParamLimits

0xeff1,	// (0x00082041) bg_button_pane_cp18

0xdc0b,	// (0x00080c5b) main_touch_calib_button_pane_t1_ParamLimits

0xdc0b,	// (0x00080c5b) main_touch_calib_button_pane_t1

0xdc21,	// (0x00080c71) main_touch_calib_button_pane_t2_ParamLimits

0xdc21,	// (0x00080c71) main_touch_calib_button_pane_t2

0x0001,

0xfe25,	// (0x00082e75) main_touch_calib_button_pane_t_ParamLimits

0xfe25,	// (0x00082e75) main_touch_calib_button_pane_t

0xaa6c,	// (0x0007dabc) cell_ncimui_button_pane

0xaa6c,	// (0x0007dabc) bg_button_pane_cp032

0xdc3f,	// (0x00080c8f) cell_ncimui_button_pane_t1

0xe355,	// (0x000813a5) image3_infobar_pane_ParamLimits

0xe355,	// (0x000813a5) image3_infobar_pane

0x991f,	// (0x0007c96f) fs_bigclock_status_pane_ParamLimits

0x991f,	// (0x0007c96f) fs_bigclock_status_pane

0x992c,	// (0x0007c97c) main_fs_bigclock_clock_pane_ParamLimits

0x992c,	// (0x0007c97c) main_fs_bigclock_clock_pane

0x993f,	// (0x0007c98f) main_fs_bigclock_indi_pane_ParamLimits

0x993f,	// (0x0007c98f) main_fs_bigclock_indi_pane

0x995a,	// (0x0007c9aa) main_fs_bigclock_swipe_pane_ParamLimits

0x995a,	// (0x0007c9aa) main_fs_bigclock_swipe_pane

0xaa6c,	// (0x0007dabc) main_fs_clock_dumped_data

0x997b,	// (0x0007c9cb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x997b,	// (0x0007c9cb) list_single_fs_bigclock_indicator_pane_g1

0x9997,	// (0x0007c9e7) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9997,	// (0x0007c9e7) list_single_fs_bigclock_indicator_pane_g2

0x99b1,	// (0x0007ca01) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x99b1,	// (0x0007ca01) list_single_fs_bigclock_indicator_pane_g3

0x99cb,	// (0x0007ca1b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x99cb,	// (0x0007ca1b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc58,	// (0x00082ca8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc58,	// (0x00082ca8) list_single_fs_bigclock_indicator_pane_g

0x99f1,	// (0x0007ca41) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x99f1,	// (0x0007ca41) list_single_fs_bigclock_indicator_pane_t1

0x9a19,	// (0x0007ca69) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9a19,	// (0x0007ca69) list_single_fs_bigclock_indicator_pane_t2

0x9a41,	// (0x0007ca91) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9a41,	// (0x0007ca91) list_single_fs_bigclock_indicator_pane_t3

0x9a69,	// (0x0007cab9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9a69,	// (0x0007cab9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc63,	// (0x00082cb3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc63,	// (0x00082cb3) list_single_fs_bigclock_indicator_pane_t

0xdc4d,	// (0x00080c9d) image3_infobar_fav_pane_ParamLimits

0xdc4d,	// (0x00080c9d) image3_infobar_fav_pane

0xdc5d,	// (0x00080cad) image3_infobar_loc_pane_ParamLimits

0xdc5d,	// (0x00080cad) image3_infobar_loc_pane

0xdc71,	// (0x00080cc1) image3_infobar_time_pane_ParamLimits

0xdc71,	// (0x00080cc1) image3_infobar_time_pane

0xc033,	// (0x0007f083) image3_infobar_time_pane_g1

0xdc81,	// (0x00080cd1) image3_infobar_time_pane_t1

0xc033,	// (0x0007f083) image3_infobar_loc_pane_g1

0xdc8f,	// (0x00080cdf) image3_infobar_loc_pane_g2

0x0001,

0xfe2a,	// (0x00082e7a) image3_infobar_loc_pane_g

0xdc97,	// (0x00080ce7) image3_infobar_loc_pane_t1

0xc033,	// (0x0007f083) image3_infobar_fav_pane_g1

0xdca5,	// (0x00080cf5) image3_infobar_fav_pane_g2

0x0001,

0xfe2f,	// (0x00082e7f) image3_infobar_fav_pane_g

0xdcad,	// (0x00080cfd) fs_bigclock_status_battery_pane

0xdcb6,	// (0x00080d06) fs_bigclock_status_signal_pane

0xdcbf,	// (0x00080d0f) fs_bigclock_status_title_pane

0xdcc8,	// (0x00080d18) fs_bigclock_status_signal_pane_g1

0xdcd1,	// (0x00080d21) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe34,	// (0x00082e84) fs_bigclock_status_signal_pane_g

0xdcd9,	// (0x00080d29) fs_bigclock_status_battery_pane_g1

0xdce2,	// (0x00080d32) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe39,	// (0x00082e89) fs_bigclock_status_battery_pane_g

0xdcea,	// (0x00080d3a) fs_bigclock_status_title_pane_t1

0xc033,	// (0x0007f083) main_fs_bigclock_clock_pane_g1

0xdcf8,	// (0x00080d48) main_fs_bigclock_clock_pane_g2

0xdcf8,	// (0x00080d48) main_fs_bigclock_clock_pane_g3

0xdcf8,	// (0x00080d48) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe3e,	// (0x00082e8e) main_fs_bigclock_clock_pane_g

0xa258,	// (0x0007d2a8) main_fs_bigclock_clock_pane_t1

0xa266,	// (0x0007d2b6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe47,	// (0x00082e97) main_fs_bigclock_clock_pane_t

0xdd00,	// (0x00080d50) list_single_fs_bigclock_indicator_pane_ParamLimits

0xdd00,	// (0x00080d50) list_single_fs_bigclock_indicator_pane

0xa275,	// (0x0007d2c5) list_single_fs_bigclock_pane_ParamLimits

0xa275,	// (0x0007d2c5) list_single_fs_bigclock_pane

0xdd1a,	// (0x00080d6a) main_fs_bigclock_indicator_pane_t1

0xdd29,	// (0x00080d79) list_single_fs_bigclock_pane_g1

0xdd31,	// (0x00080d81) list_single_fs_bigclock_pane_t1

0xc033,	// (0x0007f083) main_fs_bigclock_swipe_pane_g1

0xdd71,	// (0x00080dc1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe58,	// (0x00082ea8) main_fs_bigclock_swipe_pane_g

0xdd79,	// (0x00080dc9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xdd79,	// (0x00080dc9) main_fs_bigclock_swipe_pane_t1

0x3abf,	// (0x00076b0f) call_type_pane_ParamLimits

0xaa6c,	// (0x0007dabc) main_btmg_pane

0xda02,	// (0x00080a52) list_single_cale_mrui_row_pane_g2_ParamLimits

0xda02,	// (0x00080a52) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdcb,	// (0x00082e1b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdcb,	// (0x00082e1b) list_single_cale_mrui_row_pane_g

0xdb5c,	// (0x00080bac) list_recal_vselct_arw_lo_pane

0xdb64,	// (0x00080bb4) list_recal_vselct_arw_up_pane

0xa1e0,	// (0x0007d230) list_recal_vselct_pane

0xdd96,	// (0x00080de6) btmg_button_pane

0xa2da,	// (0x0007d32a) main_btmg_pane_g1

0xaa6c,	// (0x0007dabc) bg_button_pane_cp044

0xdda0,	// (0x00080df0) btmg_button_pane_t1

0xbb25,	// (0x0007eb75) aid_listscroll_gen

0xe835,	// (0x00081885) main_cntbar_detail_pane

0xd73d,	// (0x0008078d) list_cmail_folder_pane

0xd74d,	// (0x0008079d) sp_fs_scroll_pane_cp03_ParamLimits

0x16a2,	// (0x000746f2) list_single_fs_dyc_pane_cp01_ParamLimits

0x16a2,	// (0x000746f2) list_single_fs_dyc_pane_cp01

0xddae,	// (0x00080dfe) aid_size_cmail_indent

0xe534,	// (0x00081584) list_single_dyc_row_pane_cp01

0xa310,	// (0x0007d360) cntbar_detail_list_pane_ParamLimits

0xa310,	// (0x0007d360) cntbar_detail_list_pane

0xa35c,	// (0x0007d3ac) main_cntbar_detail_cont_pane_ParamLimits

0xa35c,	// (0x0007d3ac) main_cntbar_detail_cont_pane

0x39a5,	// (0x000769f5) scroll_pane_cp032_ParamLimits

0x39a5,	// (0x000769f5) scroll_pane_cp032

0xa370,	// (0x0007d3c0) cntbar_detail_list_event_pane_ParamLimits

0xa370,	// (0x0007d3c0) cntbar_detail_list_event_pane

0xa320,	// (0x0007d370) cntbar_detail_list_shct_pane

0x2d88,	// (0x00075dd8) aid_list_gen

0xddb7,	// (0x00080e07) aid_scroll

0xddc0,	// (0x00080e10) aid_size_touch_scroll_bar

0x16b7,	// (0x00074707) aid_list_double

0xddc9,	// (0x00080e19) aid_list_single

0xa380,	// (0x0007d3d0) aid_list_single_lg

0xddd2,	// (0x00080e22) aid_list_z_g_a_sm

0xe53d,	// (0x0008158d) aid_list_z_g_d

0xddda,	// (0x00080e2a) aid_txt_z_prm

0x16c0,	// (0x00074710) aid_txt_z_prm_cp01

0x16ce,	// (0x0007471e) aid_txt_z_sec

0xa389,	// (0x0007d3d9) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa389,	// (0x0007d3d9) main_cntbar_detail_cont_pane_g1

0xa39d,	// (0x0007d3ed) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa39d,	// (0x0007d3ed) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe5d,	// (0x00082ead) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe5d,	// (0x00082ead) main_cntbar_detail_cont_pane_g

0xdde8,	// (0x00080e38) main_cntbar_detail_cont_pane_t1

0xddf6,	// (0x00080e46) main_cntbar_detail_cont_pane_t2

0xde04,	// (0x00080e54) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe62,	// (0x00082eb2) main_cntbar_detail_cont_pane_t

0xa3ad,	// (0x0007d3fd) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa3ad,	// (0x0007d3fd) cell_cntbar_detail_list_shct_pane

0xde12,	// (0x00080e62) cntbar_detail_list_shct_pane_g1

0xde1b,	// (0x00080e6b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe69,	// (0x00082eb9) cntbar_detail_list_shct_pane_g

0xa3c1,	// (0x0007d411) cntbar_detail_list_event_pane_g1_ParamLimits

0xa3c1,	// (0x0007d411) cntbar_detail_list_event_pane_g1

0xa3cd,	// (0x0007d41d) cntbar_detail_list_event_pane_g2_ParamLimits

0xa3cd,	// (0x0007d41d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe6e,	// (0x00082ebe) cntbar_detail_list_event_pane_g_ParamLimits

0xfe6e,	// (0x00082ebe) cntbar_detail_list_event_pane_g

0xa439,	// (0x0007d489) cntbar_detail_list_event_pane_t1_ParamLimits

0xa439,	// (0x0007d489) cntbar_detail_list_event_pane_t1

0xa44e,	// (0x0007d49e) cntbar_detail_list_event_pane_t2_ParamLimits

0xa44e,	// (0x0007d49e) cntbar_detail_list_event_pane_t2

0x0002,

0xfe7b,	// (0x00082ecb) cntbar_detail_list_event_pane_t_ParamLimits

0xfe7b,	// (0x00082ecb) cntbar_detail_list_event_pane_t

0xc033,	// (0x0007f083) cell_cntbar_detail_list_shct_pane_g1

0x40c6,	// (0x00077116) navi_pane_mv_g3

0xe835,	// (0x00081885) main_cntbar_detail_pane_ParamLimits

0xaa6c,	// (0x0007dabc) main_notif_wgt_pane

0xe16b,	// (0x000811bb) aid_tch_main_mp4_pane_g4

0xe34d,	// (0x0008139d) popup_slider_window_cp02

0xdb53,	// (0x00080ba3) list_recal_day_event_pane

0xa2e4,	// (0x0007d334) cntbar_detail_btn_pane_ParamLimits

0xa2e4,	// (0x0007d334) cntbar_detail_btn_pane

0xa2fa,	// (0x0007d34a) cntbar_detail_btn_pane_cp01_ParamLimits

0xa2fa,	// (0x0007d34a) cntbar_detail_btn_pane_cp01

0xa320,	// (0x0007d370) cntbar_detail_list_shct_pane_ParamLimits

0xa330,	// (0x0007d380) cntbar_detail_pane_g1_ParamLimits

0xa330,	// (0x0007d380) cntbar_detail_pane_g1

0xa340,	// (0x0007d390) cntbar_detail_pane_t1_ParamLimits

0xa340,	// (0x0007d390) cntbar_detail_pane_t1

0xa3d9,	// (0x0007d429) cntbar_detail_list_event_pane_g3_ParamLimits

0xa3d9,	// (0x0007d429) cntbar_detail_list_event_pane_g3

0xa3f1,	// (0x0007d441) cntbar_detail_list_event_pane_g4_ParamLimits

0xa3f1,	// (0x0007d441) cntbar_detail_list_event_pane_g4

0xa409,	// (0x0007d459) cntbar_detail_list_event_pane_g5_ParamLimits

0xa409,	// (0x0007d459) cntbar_detail_list_event_pane_g5

0xa421,	// (0x0007d471) cntbar_detail_list_event_pane_g6_ParamLimits

0xa421,	// (0x0007d471) cntbar_detail_list_event_pane_g6

0xa463,	// (0x0007d4b3) cntbar_detail_list_event_pane_t3_ParamLimits

0xa463,	// (0x0007d4b3) cntbar_detail_list_event_pane_t3

0xa475,	// (0x0007d4c5) popup_notif_wgt_window_ParamLimits

0xa475,	// (0x0007d4c5) popup_notif_wgt_window

0xa48e,	// (0x0007d4de) popup_submenu_window_cp01_ParamLimits

0xa48e,	// (0x0007d4de) popup_submenu_window_cp01

0x4144,	// (0x00077194) bg_popup_window_pane_cp10

0xde24,	// (0x00080e74) listscroll_notif_wgt_pane

0xde2e,	// (0x00080e7e) list_notif_wgt_window

0xde37,	// (0x00080e87) scroll_pane_cp033

0xde40,	// (0x00080e90) list_notif_wgt_row_pane_ParamLimits

0xde40,	// (0x00080e90) list_notif_wgt_row_pane

0xde52,	// (0x00080ea2) aid_size_list_notif_wgt_del

0xde5b,	// (0x00080eab) list_notif_wgt_row_pane_g1

0xde63,	// (0x00080eb3) list_notif_wgt_row_pane_g2

0xde6b,	// (0x00080ebb) list_notif_wgt_row_pane_g3

0x0002,

0xfe82,	// (0x00082ed2) list_notif_wgt_row_pane_g

0xde74,	// (0x00080ec4) list_notif_wgt_row_pane_t1

0xde82,	// (0x00080ed2) list_notif_wgt_row_pane_t2

0xde90,	// (0x00080ee0) list_notif_wgt_row_pane_t3

0x0002,

0xfe89,	// (0x00082ed9) list_notif_wgt_row_pane_t

0x8722,	// (0x0007b772) list_recal_day_event_pane_g1

0xde9e,	// (0x00080eee) list_recal_day_event_pane_t1

0xaa6c,	// (0x0007dabc) bg_button_pane_cp045

0xdead,	// (0x00080efd) cntbar_detail_btn_pane_t1

0xbb2d,	// (0x0007eb7d) main_callh_pane_ParamLimits

0xbb2d,	// (0x0007eb7d) main_callh_pane

0xaa6c,	// (0x0007dabc) main_coverflow0_pane

0xaa6c,	// (0x0007dabc) main_wgtman_pane

0x9968,	// (0x0007c9b8) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9968,	// (0x0007c9b8) main_fs_bigclock_unlock_btn_pane

0xd717,	// (0x00080767) bg_button_pane_cp16

0xd727,	// (0x00080777) cell_tport_appsw_pane_g3

0xa4a0,	// (0x0007d4f0) cf0_flow_pane_ParamLimits

0xa4a0,	// (0x0007d4f0) cf0_flow_pane

0xdebb,	// (0x00080f0b) listscroll_cf0_pane

0xdec4,	// (0x00080f14) main_cf0_pane_g1

0xa4b5,	// (0x0007d505) main_cf0_pane_t1_ParamLimits

0xa4b5,	// (0x0007d505) main_cf0_pane_t1

0xa4cc,	// (0x0007d51c) main_cf0_pane_t2_ParamLimits

0xa4cc,	// (0x0007d51c) main_cf0_pane_t2

0x0001,

0xfe90,	// (0x00082ee0) main_cf0_pane_t_ParamLimits

0xfe90,	// (0x00082ee0) main_cf0_pane_t

0xdece,	// (0x00080f1e) scroll_pane_cp11

0xa4e3,	// (0x0007d533) cf0_flow_pane_g1

0xa4eb,	// (0x0007d53b) cf0_flow_pane_g2

0x0001,

0xfe95,	// (0x00082ee5) cf0_flow_pane_g

0xa4f3,	// (0x0007d543) cf0_flow_pane_t1

0xaa6c,	// (0x0007dabc) main_call6_pane

0xaa6c,	// (0x0007dabc) main_calllock_pane

0xa501,	// (0x0007d551) call6_btn_grp_pane_ParamLimits

0xa501,	// (0x0007d551) call6_btn_grp_pane

0xa51b,	// (0x0007d56b) call6_pane_g1_ParamLimits

0xa51b,	// (0x0007d56b) call6_pane_g1

0xa530,	// (0x0007d580) popup_call6_1st_window_ParamLimits

0xa530,	// (0x0007d580) popup_call6_1st_window

0xa541,	// (0x0007d591) popup_call6_2nd_window_ParamLimits

0xa541,	// (0x0007d591) popup_call6_2nd_window

0xa552,	// (0x0007d5a2) cell_call6_btn_pane_ParamLimits

0xa552,	// (0x0007d5a2) cell_call6_btn_pane

0x4144,	// (0x00077194) bg_popup_call2_in_pane_cp03

0xded9,	// (0x00080f29) popup_call6_1st_window_g1

0xdee1,	// (0x00080f31) popup_call6_1st_window_g2

0xdee9,	// (0x00080f39) popup_call6_1st_window_g3

0x0002,

0xfe9a,	// (0x00082eea) popup_call6_1st_window_g

0xdef1,	// (0x00080f41) popup_call6_1st_window_t1

0xdf00,	// (0x00080f50) popup_call6_1st_window_t2

0xdf10,	// (0x00080f60) popup_call6_1st_window_t3

0x0002,

0xfea1,	// (0x00082ef1) popup_call6_1st_window_t

0x4144,	// (0x00077194) bg_popup_call2_in_pane_cp04

0xded9,	// (0x00080f29) popup_call6_2nd_window_g1

0xdee1,	// (0x00080f31) popup_call6_2nd_window_g2

0xdee9,	// (0x00080f39) popup_call6_2nd_window_g3

0x0002,

0xfe9a,	// (0x00082eea) popup_call6_2nd_window_g

0xdef1,	// (0x00080f41) popup_call6_2nd_window_t1

0xaa6c,	// (0x0007dabc) bg_button_pane_cp15

0xdf20,	// (0x00080f70) cell_call6_btn_pane_g1

0xdf29,	// (0x00080f79) cell_call6_btn_pane_t1

0xa566,	// (0x0007d5b6) listscroll_wgtman_pane_ParamLimits

0xa566,	// (0x0007d5b6) listscroll_wgtman_pane

0xa589,	// (0x0007d5d9) wgtman_btn_pane_ParamLimits

0xa589,	// (0x0007d5d9) wgtman_btn_pane

0x3d19,	// (0x00076d69) aid_scroll_copy1

0xdf38,	// (0x00080f88) list_wgtman_pane

0xa5cc,	// (0x0007d61c) wgtman_btn_pane_g1_ParamLimits

0xa5cc,	// (0x0007d61c) wgtman_btn_pane_g1

0xa5f8,	// (0x0007d648) wgtman_btn_pane_t1_ParamLimits

0xa5f8,	// (0x0007d648) wgtman_btn_pane_t1

0xdf42,	// (0x00080f92) wgtman_btn_pane_t2_ParamLimits

0xdf42,	// (0x00080f92) wgtman_btn_pane_t2

0x0001,

0xfea8,	// (0x00082ef8) wgtman_btn_pane_t_ParamLimits

0xfea8,	// (0x00082ef8) wgtman_btn_pane_t

0xa635,	// (0x0007d685) listrow_wgtman_pane_ParamLimits

0xa635,	// (0x0007d685) listrow_wgtman_pane

0xa647,	// (0x0007d697) listrow_wgtman_pane_g1

0xa650,	// (0x0007d6a0) listrow_wgtman_pane_g2

0x0001,

0xfead,	// (0x00082efd) listrow_wgtman_pane_g

0x16dc,	// (0x0007472c) listrow_wgtman_pane_t1

0x16ea,	// (0x0007473a) listrow_wgtman_pane_t2

0x0001,

0xfeb2,	// (0x00082f02) listrow_wgtman_pane_t

0x16f8,	// (0x00074748) wait_bar_pane_cp09

0xdf59,	// (0x00080fa9) main_calllock_btn_pane

0xdf63,	// (0x00080fb3) main_calllock_pane_g1

0xaa6c,	// (0x0007dabc) bg_button_pane_cp17

0xdf6f,	// (0x00080fbf) main_calllock_btn_pane_g1

0xdf78,	// (0x00080fc8) main_calllock_btn_pane_t1

0xaa6c,	// (0x0007dabc) main_dialer3_pane

0xaa6c,	// (0x0007dabc) main_fmrd2_pane

0xc033,	// (0x0007f083) main_fs_bigclock_unlock_btn_pane_g1

0xdf8f,	// (0x00080fdf) main_fs_bigclock_unlock_btn_pane_t1

0xa65a,	// (0x0007d6aa) area_fmrd2_info_pane_ParamLimits

0xa65a,	// (0x0007d6aa) area_fmrd2_info_pane

0xa66b,	// (0x0007d6bb) area_fmrd2_visual_pane_ParamLimits

0xa66b,	// (0x0007d6bb) area_fmrd2_visual_pane

0xa679,	// (0x0007d6c9) fmrd2_indi_pane_ParamLimits

0xa679,	// (0x0007d6c9) fmrd2_indi_pane

0xa686,	// (0x0007d6d6) area_fmrd2_visual_pane_g1

0xa68e,	// (0x0007d6de) area_fmrd2_visual_pane_t1

0xa69e,	// (0x0007d6ee) area_fmrd2_visual_pane_t2

0xa6ae,	// (0x0007d6fe) area_fmrd2_visual_pane_t3

0x0002,

0xfebc,	// (0x00082f0c) area_fmrd2_visual_pane_t

0xa6be,	// (0x0007d70e) area_fmrd2_info_pane_g1

0xa6c6,	// (0x0007d716) area_fmrd2_info_pane_t1

0xa6d6,	// (0x0007d726) area_fmrd2_info_pane_t2

0xa6e6,	// (0x0007d736) area_fmrd2_info_pane_t3

0xa6f6,	// (0x0007d746) area_fmrd2_info_pane_t4

0x0003,

0xfec3,	// (0x00082f13) area_fmrd2_info_pane_t

0xa704,	// (0x0007d754) fmrd2_indi_pane_t1

0xa714,	// (0x0007d764) fmrd2_indi_pane_t2

0xa724,	// (0x0007d774) fmrd2_indi_pane_t3

0x0002,

0xfecc,	// (0x00082f1c) fmrd2_indi_pane_t

0x99da,	// (0x0007ca2a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x99da,	// (0x0007ca2a) list_single_fs_bigclock_indicator_pane_g5

0x9a7e,	// (0x0007cace) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9a7e,	// (0x0007cace) list_single_fs_bigclock_indicator_pane_t5

0x9fa4,	// (0x0007cff4) aid_cell_bcale_month_pane_ParamLimits

0x9fa4,	// (0x0007cff4) aid_cell_bcale_month_pane

0x9fbf,	// (0x0007d00f) bcale_month_pane_ParamLimits

0x9fbf,	// (0x0007d00f) bcale_month_pane

0x9fd7,	// (0x0007d027) bcale_preview_pane_ParamLimits

0x9fd7,	// (0x0007d027) bcale_preview_pane

0xdd31,	// (0x00080d81) list_single_fs_bigclock_pane_t1_ParamLimits

0xdd4d,	// (0x00080d9d) list_single_fs_bigclock_pane_t2_ParamLimits

0xdd4d,	// (0x00080d9d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe53,	// (0x00082ea3) list_single_fs_bigclock_pane_t_ParamLimits

0xfe53,	// (0x00082ea3) list_single_fs_bigclock_pane_t

0xdf87,	// (0x00080fd7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeb7,	// (0x00082f07) main_fs_bigclock_unlock_btn_pane_g

0xa734,	// (0x0007d784) aid_dia3_key_size_ParamLimits

0xa734,	// (0x0007d784) aid_dia3_key_size

0xa743,	// (0x0007d793) aid_dia3_listrow_size_ParamLimits

0xa743,	// (0x0007d793) aid_dia3_listrow_size

0xa758,	// (0x0007d7a8) dia3_keypad_fun_pane_ParamLimits

0xa758,	// (0x0007d7a8) dia3_keypad_fun_pane

0xa774,	// (0x0007d7c4) dia3_keypad_num_pane_ParamLimits

0xa774,	// (0x0007d7c4) dia3_keypad_num_pane

0xa78f,	// (0x0007d7df) dia3_listscroll_pane_ParamLimits

0xa78f,	// (0x0007d7df) dia3_listscroll_pane

0xa7a2,	// (0x0007d7f2) dia3_numentry_pane_ParamLimits

0xa7a2,	// (0x0007d7f2) dia3_numentry_pane

0xdf9d,	// (0x00080fed) dia3_list_pane

0xdfa8,	// (0x00080ff8) scroll_pane_cp12

0xaa6c,	// (0x0007dabc) bg_dia3_numentry_pane

0xa7b6,	// (0x0007d806) dia3_numentry_pane_t1

0xa7c5,	// (0x0007d815) cell_dia3_key_num_pane

0xa7cd,	// (0x0007d81d) cell_dia3_key0_fun_pane_ParamLimits

0xa7cd,	// (0x0007d81d) cell_dia3_key0_fun_pane

0xa7e1,	// (0x0007d831) cell_dia3_key1_fun_pane_ParamLimits

0xa7e1,	// (0x0007d831) cell_dia3_key1_fun_pane

0xa7f9,	// (0x0007d849) dia3_listrow_pane

0xcfd6,	// (0x00080026) bg_dia3_numentry_pane_g1

0xaa6c,	// (0x0007dabc) bg_button_pane_cp21

0xdfb3,	// (0x00081003) cell_dia3_key_num_pane_t1

0xdfc1,	// (0x00081011) cell_dia3_key_num_pane_t2

0xdfd0,	// (0x00081020) cell_dia3_key_num_pane_t3

0xdfdf,	// (0x0008102f) cell_dia3_key_num_pane_t4

0x0003,

0xfed3,	// (0x00082f23) cell_dia3_key_num_pane_t

0xaa6c,	// (0x0007dabc) bg_button_pane_cp19

0xa80b,	// (0x0007d85b) cell_dia3_key0_fun_pane_g1

0xaa6c,	// (0x0007dabc) bg_button_pane_cp20

0xa813,	// (0x0007d863) cell_dia3_key1_fun_pane_g1

0xa81b,	// (0x0007d86b) area_left_week_number_pane

0xa824,	// (0x0007d874) area_top_day_name_pane

0xa82d,	// (0x0007d87d) frame_month_view_pane

0xa835,	// (0x0007d885) grid_month_view_pane

0xa83f,	// (0x0007d88f) cell_top_day_name_pane_ParamLimits

0xa83f,	// (0x0007d88f) cell_top_day_name_pane

0xa855,	// (0x0007d8a5) cell_area_left_week_number_pane_ParamLimits

0xa855,	// (0x0007d8a5) cell_area_left_week_number_pane

0xa869,	// (0x0007d8b9) cell_month_view_pane_ParamLimits

0xa869,	// (0x0007d8b9) cell_month_view_pane

0xdfee,	// (0x0008103e) frm_month_g1

0xa884,	// (0x0007d8d4) frm_month_g2

0xa88c,	// (0x0007d8dc) frm_month_g3

0xa894,	// (0x0007d8e4) frm_month_g4

0xa89c,	// (0x0007d8ec) frm_month_g5

0xa8a4,	// (0x0007d8f4) frm_month_g6

0xa8ac,	// (0x0007d8fc) frm_month_g7

0xdff7,	// (0x00081047) frm_month_g8

0xa8b4,	// (0x0007d904) frm_month_g9

0xa8bd,	// (0x0007d90d) frm_month_g10

0xa8c6,	// (0x0007d916) frm_month_g11

0xa8cf,	// (0x0007d91f) frm_month_g12

0xa8d8,	// (0x0007d928) frm_month_g13

0xa8e1,	// (0x0007d931) frm_month_g14

0xa8ea,	// (0x0007d93a) frm_month_g15

0xa8f3,	// (0x0007d943) frm_month_g16

0x000f,

0xfedc,	// (0x00082f2c) frm_month_g

0xa8fc,	// (0x0007d94c) cell_top_day_name_pane_t1

0xa90b,	// (0x0007d95b) cell_area_left_week_number_pane_g1

0xa8fc,	// (0x0007d94c) cell_area_left_week_number_pane_t1

0xc033,	// (0x0007f083) cell_month_view_pane_g1

0xa913,	// (0x0007d963) cell_month_view_pane_t1

0xaa6c,	// (0x0007dabc) main_fps_pane

0xd48b,	// (0x000804db) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd48b,	// (0x000804db) cmail_ddmenu_btn02_pane_cp1

0xd4a7,	// (0x000804f7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd4a7,	// (0x000804f7) cmail_ddmenu_btn02_pane_cp2

0xa1b0,	// (0x0007d200) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa1b0,	// (0x0007d200) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe04,	// (0x00082e54) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe04,	// (0x00082e54) cmail_ddmenu_btn02_pane_g

0xa1ce,	// (0x0007d21e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa1ce,	// (0x0007d21e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe09,	// (0x00082e59) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe09,	// (0x00082e59) cmail_ddmenu_btn02_pane_t

0xa922,	// (0x0007d972) fps_text_pane_ParamLimits

0xa922,	// (0x0007d972) fps_text_pane

0xa939,	// (0x0007d989) main_fps_pane_g1_ParamLimits

0xa939,	// (0x0007d989) main_fps_pane_g1

0xa953,	// (0x0007d9a3) wait_bar_pane_cp010_ParamLimits

0xa953,	// (0x0007d9a3) wait_bar_pane_cp010

0xa964,	// (0x0007d9b4) fps_text_pane_t1_ParamLimits

0xa964,	// (0x0007d9b4) fps_text_pane_t1

0xe92f,	// (0x0008197f) cam4_image_uncrop_pane_g1

0xe938,	// (0x00081988) cam4_image_uncrop_pane_g2

0x7938,	// (0x0007a988) cam4_image_uncrop_pane_g3

0x7941,	// (0x0007a991) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x00082927) cam4_image_uncrop_pane_g

0xa7f9,	// (0x0007d849) dia3_listrow_pane_ParamLimits

0xaa6c,	// (0x0007dabc) main_phob2_pane

0x9e1b,	// (0x0007ce6b) cell_tport_appsw_pane_cp02_ParamLimits

0x9e1b,	// (0x0007ce6b) cell_tport_appsw_pane_cp02

0x9e2f,	// (0x0007ce7f) cell_tport_appsw_pane_cp03_ParamLimits

0x9e2f,	// (0x0007ce7f) cell_tport_appsw_pane_cp03

0xaa6c,	// (0x0007dabc) phob2_contact_card_pane

0xaa6c,	// (0x0007dabc) phob2_listscroll_pane

0xe000,	// (0x00081050) phob2_list_pane

0xe008,	// (0x00081058) scroll_pane_cp034

0xa97c,	// (0x0007d9cc) phob2_cc_data_pane_ParamLimits

0xa97c,	// (0x0007d9cc) phob2_cc_data_pane

0xa99b,	// (0x0007d9eb) phob2_cc_listscroll_pane_ParamLimits

0xa99b,	// (0x0007d9eb) phob2_cc_listscroll_pane

0xa9b9,	// (0x0007da09) list_double_large_graphic_phob2_pane_ParamLimits

0xa9b9,	// (0x0007da09) list_double_large_graphic_phob2_pane

0xe010,	// (0x00081060) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe010,	// (0x00081060) list_double_large_graphic_phob2_pane_g1

0xe01d,	// (0x0008106d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe01d,	// (0x0008106d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfefd,	// (0x00082f4d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfefd,	// (0x00082f4d) list_double_large_graphic_phob2_pane_g

0xe029,	// (0x00081079) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xe029,	// (0x00081079) list_double_large_graphic_phob2_pane_t1

0xe03e,	// (0x0008108e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xe03e,	// (0x0008108e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff02,	// (0x00082f52) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff02,	// (0x00082f52) list_double_large_graphic_phob2_pane_t

0xaa6c,	// (0x0007dabc) list_highlight_pane_cp024

0xe050,	// (0x000810a0) phob2_cc_button_pane

0xa9cb,	// (0x0007da1b) phob2_cc_data_pane_g1_ParamLimits

0xa9cb,	// (0x0007da1b) phob2_cc_data_pane_g1

0xa9e0,	// (0x0007da30) phob2_cc_data_pane_g2_ParamLimits

0xa9e0,	// (0x0007da30) phob2_cc_data_pane_g2

0x0001,

0xff07,	// (0x00082f57) phob2_cc_data_pane_g_ParamLimits

0xff07,	// (0x00082f57) phob2_cc_data_pane_g

0xa9f2,	// (0x0007da42) phob2_cc_data_pane_t1_ParamLimits

0xa9f2,	// (0x0007da42) phob2_cc_data_pane_t1

0xaa0a,	// (0x0007da5a) phob2_cc_data_pane_t2_ParamLimits

0xaa0a,	// (0x0007da5a) phob2_cc_data_pane_t2

0xaa22,	// (0x0007da72) phob2_cc_data_pane_t3_ParamLimits

0xaa22,	// (0x0007da72) phob2_cc_data_pane_t3

0x0002,

0xff0c,	// (0x00082f5c) phob2_cc_data_pane_t_ParamLimits

0xff0c,	// (0x00082f5c) phob2_cc_data_pane_t

0xe058,	// (0x000810a8) phob2_cc_list_pane_ParamLimits

0xe058,	// (0x000810a8) phob2_cc_list_pane

0x8987,	// (0x0007b9d7) scroll_pane_cp035_ParamLimits

0x8987,	// (0x0007b9d7) scroll_pane_cp035

0xe835,	// (0x00081885) bg_button_pane_cp033

0xe064,	// (0x000810b4) phob2_cc_button_pane_g1

0xe070,	// (0x000810c0) phob2_cc_button_pane_t1

0xe085,	// (0x000810d5) phob2_cc_button_pane_t2

0x0001,

0xff13,	// (0x00082f63) phob2_cc_button_pane_t

0xaa3a,	// (0x0007da8a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaa3a,	// (0x0007da8a) list_double_large_graphic_phob2_cc_pane

0xaa4c,	// (0x0007da9c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaa4c,	// (0x0007da9c) list_double_large_graphic_phob2_cc_pane_g1

0xaa58,	// (0x0007daa8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaa58,	// (0x0007daa8) list_double_large_graphic_phob2_cc_pane_g2

0x1700,	// (0x00074750) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1700,	// (0x00074750) list_double_large_graphic_phob2_cc_pane_g3

0x170c,	// (0x0007475c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x170c,	// (0x0007475c) list_double_large_graphic_phob2_cc_pane_g4

0x1718,	// (0x00074768) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1718,	// (0x00074768) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff18,	// (0x00082f68) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff18,	// (0x00082f68) list_double_large_graphic_phob2_cc_pane_g

0x1724,	// (0x00074774) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1724,	// (0x00074774) list_double_large_graphic_phob2_cc_pane_t1

0x174d,	// (0x0007479d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x174d,	// (0x0007479d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff23,	// (0x00082f73) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff23,	// (0x00082f73) list_double_large_graphic_phob2_cc_pane_t

0xe097,	// (0x000810e7) list_highlight_pane_cp025_ParamLimits

0xe097,	// (0x000810e7) list_highlight_pane_cp025

0xe835,	// (0x00081885) bg_button_pane_cp033_ParamLimits

0xe064,	// (0x000810b4) phob2_cc_button_pane_g1_ParamLimits

0xe070,	// (0x000810c0) phob2_cc_button_pane_t1_ParamLimits

0xe085,	// (0x000810d5) phob2_cc_button_pane_t2_ParamLimits

0xff13,	// (0x00082f63) phob2_cc_button_pane_t_ParamLimits

0x17b2,	// (0x00074802) popup_wgtman_window

0x816e,	// (0x0007b1be) scroll_pane_cp038

0xa5ae,	// (0x0007d5fe) wgtman_btn_pane_cp_01_ParamLimits

0xa5ae,	// (0x0007d5fe) wgtman_btn_pane_cp_01

0xe0a5,	// (0x000810f5) wgtman_content_pane

0xe0ae,	// (0x000810fe) wgtman_heading_pane

0xaa6c,	// (0x0007dabc) bg_heading_pane_cp02

0xe0b7,	// (0x00081107) wgtman_heading_pane_g1

0xe0bf,	// (0x0008110f) wgtman_heading_pane_t1

0xe0cd,	// (0x0008111d) scroll_pane_cp036

0xe0d5,	// (0x00081125) wgtman_list_pane

0xe0dd,	// (0x0008112d) wgtman_list_pane_t1_ParamLimits

0xe0dd,	// (0x0008112d) wgtman_list_pane_t1

0xe3a7,	// (0x000813f7) cam4_grid_pane

0x0fb5,	// (0x00074005) bg_button_pane_cp015_ParamLimits

0x881c,	// (0x0007b86c) bg_button_pane_cp016_ParamLimits

0x882f,	// (0x0007b87f) bg_button_pane_cp017_ParamLimits

0x0ffb,	// (0x0007404b) popup_vitu2_query_window_g3_ParamLimits

0x0ffb,	// (0x0007404b) popup_vitu2_query_window_g3

0x1076,	// (0x000740c6) popup_vitu2_query_window_t6_ParamLimits

0x1076,	// (0x000740c6) popup_vitu2_query_window_t6

0x10a1,	// (0x000740f1) popup_vitu2_query_window_t7_ParamLimits

0x10a1,	// (0x000740f1) popup_vitu2_query_window_t7

0xe92f,	// (0x0008197f) cam4_grid_pane_g1

0xe938,	// (0x00081988) cam4_grid_pane_g2

0xe0fa,	// (0x0008114a) cam4_grid_pane_g3

0xe103,	// (0x00081153) cam4_grid_pane_g4

0x0003,

0xff28,	// (0x00082f78) cam4_grid_pane_g

0x2786,	// (0x000757d6) aid_placing_vt_slider_lsc_ParamLimits

0x2adf,	// (0x00075b2f) vidtel_button_pane_ParamLimits

0x2adf,	// (0x00075b2f) vidtel_button_pane

0xaa6c,	// (0x0007dabc) bg_button_pane_cp034

0xaa64,	// (0x0007dab4) vidtel_button_pane_g1

0xe10e,	// (0x0008115e) vidtel_button_pane_t1

0x853e,	// (0x0007b58e) aid_size_vtel_slider_touch

0x8987,	// (0x0007b9d7) scroll_pane_cp039

0xd014,	// (0x00080064) ncim_query_button_pane_cp01_ParamLimits

0xd033,	// (0x00080083) ncimui_query_pane_g1_ParamLimits

0xe835,	// (0x00081885) input_focus_pane_cp012_ParamLimits

0xd058,	// (0x000800a8) ncim_query_entry_pane_t1_ParamLimits

0x8987,	// (0x0007b9d7) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
