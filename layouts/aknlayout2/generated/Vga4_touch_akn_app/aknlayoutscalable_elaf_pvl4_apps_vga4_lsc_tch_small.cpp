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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0003fb9b };

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
0x1753,	// (0x000412ee) Screen

0x175f,	// (0x000412fa) application_window

0x179b,	// (0x00041336) area_bottom_pane_ParamLimits

0x179b,	// (0x00041336) area_bottom_pane

0x17d4,	// (0x0004136f) area_top_pane_ParamLimits

0x17d4,	// (0x0004136f) area_top_pane

0xab9d,	// (0x0004a738) call_video_uplink_pane_ParamLimits

0xab9d,	// (0x0004a738) call_video_uplink_pane

0x1862,	// (0x000413fd) main_pane_ParamLimits

0x1862,	// (0x000413fd) main_pane

0x5459,	// (0x00044ff4) context_pane

0x546c,	// (0x00045007) navi_pane

0x54a3,	// (0x0004503e) popup_cale_events_window_ParamLimits

0x54a3,	// (0x0004503e) popup_cale_events_window

0x54bb,	// (0x00045056) popup_mup_playback_window

0x54c3,	// (0x0004505e) signal_pane

0xdc18,	// (0x0004d7b3) main_browser_pane

0xddb6,	// (0x0004d951) main_burst_pane

0x5159,	// (0x00044cf4) main_calc_pane

0x516d,	// (0x00044d08) main_cale_day_pane

0x1d3d,	// (0x000418d8) main_cale_month_pane

0x516d,	// (0x00044d08) main_cale_week_pane

0xddb6,	// (0x0004d951) main_call_pane

0xd8d0,	// (0x0004d46b) main_call_poc_pane

0xddb6,	// (0x0004d951) main_camera_pane

0xddb6,	// (0x0004d951) main_chi_dic_pane

0xe5ac,	// (0x0004e147) main_clock_pane

0xd8d0,	// (0x0004d46b) main_fmradio_pane

0xddb6,	// (0x0004d951) main_graph_messa_pane

0xd8d0,	// (0x0004d46b) main_help_pane

0xdc18,	// (0x0004d7b3) main_im_pane

0xdb2b,	// (0x0004d6c6) main_image_pane_ParamLimits

0xdb2b,	// (0x0004d6c6) main_image_pane

0xd8d0,	// (0x0004d46b) main_location2_pane

0xddb6,	// (0x0004d951) main_location_pane

0xdb2b,	// (0x0004d6c6) main_messa_pane

0xd8d0,	// (0x0004d46b) main_mp2_pane

0xddb6,	// (0x0004d951) main_mp_pane

0xd8d0,	// (0x0004d46b) main_msg_pane

0xd8d0,	// (0x0004d46b) main_mup_eq_pane

0xd8d0,	// (0x0004d46b) main_mup_pane

0xdc18,	// (0x0004d7b3) main_notes_pane

0xd8d0,	// (0x0004d46b) main_pec_pane

0xd8d0,	// (0x0004d46b) main_phob_pane

0xd8d0,	// (0x0004d46b) main_pinb_pane

0xd8d0,	// (0x0004d46b) main_postcard_pane

0xd8d0,	// (0x0004d46b) main_qdial_pane

0xddb6,	// (0x0004d951) main_skin_pane

0xd8d0,	// (0x0004d46b) main_smil2_pane

0xddb6,	// (0x0004d951) main_smil_pane

0xddb6,	// (0x0004d951) main_video_pane

0xddb6,	// (0x0004d951) main_video_tele_pane

0xdb2b,	// (0x0004d6c6) main_viewer_pane_ParamLimits

0xdb2b,	// (0x0004d6c6) main_viewer_pane

0xddb6,	// (0x0004d951) main_vorec_pane

0x51c7,	// (0x00044d62) popup_blid_sat_info_window_ParamLimits

0x51c7,	// (0x00044d62) popup_blid_sat_info_window

0x522b,	// (0x00044dc6) popup_dyc_status_message_window_ParamLimits

0x522b,	// (0x00044dc6) popup_dyc_status_message_window

0x5245,	// (0x00044de0) popup_grid_large_graphic_window_ParamLimits

0x5245,	// (0x00044de0) popup_grid_large_graphic_window

0x5307,	// (0x00044ea2) popup_loc_request_window_ParamLimits

0x5307,	// (0x00044ea2) popup_loc_request_window

0x542d,	// (0x00044fc8) popup_wml_address_window_ParamLimits

0x542d,	// (0x00044fc8) popup_wml_address_window

0x4f5e,	// (0x00044af9) call_muted_g1

0x4204,	// (0x00043d9f) popup_call_audio_conf_window_ParamLimits

0x4204,	// (0x00043d9f) popup_call_audio_conf_window

0x4f6e,	// (0x00044b09) popup_call_audio_first_window_ParamLimits

0x4f6e,	// (0x00044b09) popup_call_audio_first_window

0x4fe4,	// (0x00044b7f) popup_call_audio_in_window_ParamLimits

0x4fe4,	// (0x00044b7f) popup_call_audio_in_window

0x5020,	// (0x00044bbb) popup_call_audio_out_window_ParamLimits

0x5020,	// (0x00044bbb) popup_call_audio_out_window

0x505a,	// (0x00044bf5) popup_call_audio_second_window_ParamLimits

0x505a,	// (0x00044bf5) popup_call_audio_second_window

0x50b0,	// (0x00044c4b) popup_call_audio_wait_window_ParamLimits

0x50b0,	// (0x00044c4b) popup_call_audio_wait_window

0x50e5,	// (0x00044c80) popup_number_entry_window_ParamLimits

0x50e5,	// (0x00044c80) popup_number_entry_window

0xd47a,	// (0x0004d015) bg_popup_call_pane_cp05_ParamLimits

0xd47a,	// (0x0004d015) bg_popup_call_pane_cp05

0xd49a,	// (0x0004d035) popup_number_entry_window_t1

0xd4bb,	// (0x0004d056) popup_number_entry_window_t2

0xd4cd,	// (0x0004d068) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0004ec20) popup_number_entry_window_t

0xd514,	// (0x0004d0af) text_title_cp2

0xd527,	// (0x0004d0c2) bg_popup_call_pane_cp_ParamLimits

0xd527,	// (0x0004d0c2) bg_popup_call_pane_cp

0xd535,	// (0x0004d0d0) call_thumbnail_pane

0xd53d,	// (0x0004d0d8) popup_call_audio_in_window_g1_ParamLimits

0xd53d,	// (0x0004d0d8) popup_call_audio_in_window_g1

0xd549,	// (0x0004d0e4) popup_call_audio_in_window_g2_ParamLimits

0xd549,	// (0x0004d0e4) popup_call_audio_in_window_g2

0xd555,	// (0x0004d0f0) popup_call_audio_in_window_g3_ParamLimits

0xd555,	// (0x0004d0f0) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0004ec29) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0004ec29) popup_call_audio_in_window_g

0xd561,	// (0x0004d0fc) popup_call_audio_in_window_t1_ParamLimits

0xd561,	// (0x0004d0fc) popup_call_audio_in_window_t1

0xd57d,	// (0x0004d118) popup_call_audio_in_window_t2_ParamLimits

0xd57d,	// (0x0004d118) popup_call_audio_in_window_t2

0xd599,	// (0x0004d134) popup_call_audio_in_window_t3_ParamLimits

0xd599,	// (0x0004d134) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0004ec30) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0004ec30) popup_call_audio_in_window_t

0xd527,	// (0x0004d0c2) bg_popup_call_pane_cp01_ParamLimits

0xd527,	// (0x0004d0c2) bg_popup_call_pane_cp01

0xd535,	// (0x0004d0d0) call_thumbnail_pane_cp02

0xd5ac,	// (0x0004d147) call_type_pane_cp022

0xd5b4,	// (0x0004d14f) popup_call_audio_out_window_g1_ParamLimits

0xd5b4,	// (0x0004d14f) popup_call_audio_out_window_g1

0xd5c6,	// (0x0004d161) popup_call_audio_out_window_g2_ParamLimits

0xd5c6,	// (0x0004d161) popup_call_audio_out_window_g2

0xd5d2,	// (0x0004d16d) popup_call_audio_out_window_g3_ParamLimits

0xd5d2,	// (0x0004d16d) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0004ec37) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0004ec37) popup_call_audio_out_window_g

0xd5e4,	// (0x0004d17f) popup_call_audio_out_window_t1_ParamLimits

0xd5e4,	// (0x0004d17f) popup_call_audio_out_window_t1

0xd5fc,	// (0x0004d197) popup_call_audio_out_window_t2_ParamLimits

0xd5fc,	// (0x0004d197) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0004ec3e) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0004ec3e) popup_call_audio_out_window_t

0xd611,	// (0x0004d1ac) bg_popup_call_pane_ParamLimits

0xd611,	// (0x0004d1ac) bg_popup_call_pane

0x19e9,	// (0x00041584) call_thumbnail_pane_cp_ParamLimits

0x19e9,	// (0x00041584) call_thumbnail_pane_cp

0xd695,	// (0x0004d230) call_type_pane_cp01_ParamLimits

0xd695,	// (0x0004d230) call_type_pane_cp01

0xd6d9,	// (0x0004d274) popup_call_audio_first_window_g1_ParamLimits

0xd6d9,	// (0x0004d274) popup_call_audio_first_window_g1

0xd725,	// (0x0004d2c0) popup_call_audio_first_window_g2_ParamLimits

0xd725,	// (0x0004d2c0) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0004ec43) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0004ec43) popup_call_audio_first_window_g

0xd769,	// (0x0004d304) popup_call_audio_first_window_t1_ParamLimits

0xd769,	// (0x0004d304) popup_call_audio_first_window_t1

0xd815,	// (0x0004d3b0) popup_call_audio_first_window_t4_ParamLimits

0xd815,	// (0x0004d3b0) popup_call_audio_first_window_t4

0xd8a1,	// (0x0004d43c) popup_call_audio_first_window_t5_ParamLimits

0xd8a1,	// (0x0004d43c) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0004ec48) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0004ec48) popup_call_audio_first_window_t

0xd8d0,	// (0x0004d46b) bg_popup_call_pane_cp02

0xd8da,	// (0x0004d475) call_type_pane_cp023

0xd8e2,	// (0x0004d47d) popup_call_audio_wait_window_g1

0xd8ea,	// (0x0004d485) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0004ec4f) popup_call_audio_wait_window_g

0xd8f2,	// (0x0004d48d) popup_call_audio_wait_window_t3

0xd900,	// (0x0004d49b) bg_popup_call_pane_cp03_ParamLimits

0xd900,	// (0x0004d49b) bg_popup_call_pane_cp03

0xd960,	// (0x0004d4fb) call_thumbnail_pane_cp011_ParamLimits

0xd960,	// (0x0004d4fb) call_thumbnail_pane_cp011

0xd96c,	// (0x0004d507) call_type_pane_cp034_ParamLimits

0xd96c,	// (0x0004d507) call_type_pane_cp034

0xd9a8,	// (0x0004d543) popup_call_audio_second_window_g1_ParamLimits

0xd9a8,	// (0x0004d543) popup_call_audio_second_window_g1

0xd9e4,	// (0x0004d57f) popup_call_audio_second_window_g2_ParamLimits

0xd9e4,	// (0x0004d57f) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0004ec54) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0004ec54) popup_call_audio_second_window_g

0xda20,	// (0x0004d5bb) popup_call_audio_second_window_t1_ParamLimits

0xda20,	// (0x0004d5bb) popup_call_audio_second_window_t1

0xdaa1,	// (0x0004d63c) popup_call_audio_second_window_t2_ParamLimits

0xdaa1,	// (0x0004d63c) popup_call_audio_second_window_t2

0xdad7,	// (0x0004d672) popup_call_audio_second_window_t3_ParamLimits

0xdad7,	// (0x0004d672) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0004ec59) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0004ec59) popup_call_audio_second_window_t

0xd8d0,	// (0x0004d46b) bg_popup_call_pane_cp04

0xdb0d,	// (0x0004d6a8) list_conf_pane

0xdb15,	// (0x0004d6b0) popup_call_audio_conf_window_t1

0xdb23,	// (0x0004d6be) call_thumbnail_pane_g1

0xdb2b,	// (0x0004d6c6) bg_pinb_pane_ParamLimits

0xdb2b,	// (0x0004d6c6) bg_pinb_pane

0xdb39,	// (0x0004d6d4) find_pinb_pane

0xdb2b,	// (0x0004d6c6) listscroll_pinb_pane_ParamLimits

0xdb2b,	// (0x0004d6c6) listscroll_pinb_pane

0xdb43,	// (0x0004d6de) pinb_bg_pane_g1

0xdb43,	// (0x0004d6de) pinb_bg_pane_g2

0xdb43,	// (0x0004d6de) pinb_bg_pane_g3

0xdb43,	// (0x0004d6de) pinb_bg_pane_g4

0xdb43,	// (0x0004d6de) pinb_bg_pane_g5

0xdb43,	// (0x0004d6de) pinb_bg_pane_g6

0xdb43,	// (0x0004d6de) pinb_bg_pane_g7

0xdb43,	// (0x0004d6de) pinb_bg_pane_g8

0xdb43,	// (0x0004d6de) pinb_bg_pane_g9

0xdb43,	// (0x0004d6de) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0004ec60) pinb_bg_pane_g

0xd470,	// (0x0004d00b) grid_pinb_pane

0xd470,	// (0x0004d00b) list_pinb_pane

0xdb4d,	// (0x0004d6e8) scroll_pane_cp01_ParamLimits

0xdb4d,	// (0x0004d6e8) scroll_pane_cp01

0xdb5b,	// (0x0004d6f6) find_pinb_pane_g1_ParamLimits

0xdb5b,	// (0x0004d6f6) find_pinb_pane_g1

0xdb73,	// (0x0004d70e) find_pinb_pane_t1

0xdb85,	// (0x0004d720) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0004ec7a) find_pinb_pane_t

0xdb9a,	// (0x0004d735) input_focus_pane_cp01_ParamLimits

0xdb9a,	// (0x0004d735) input_focus_pane_cp01

0xd4ad,	// (0x0004d048) cell_pinb_pane_ParamLimits

0xd4ad,	// (0x0004d048) cell_pinb_pane

0xdba6,	// (0x0004d741) cell_pinb_pane_g1_ParamLimits

0xdba6,	// (0x0004d741) cell_pinb_pane_g1

0xdbb4,	// (0x0004d74f) cell_pinb_pane_g2_ParamLimits

0xdbb4,	// (0x0004d74f) cell_pinb_pane_g2

0xdbb4,	// (0x0004d74f) cell_pinb_pane_g3_ParamLimits

0xdbb4,	// (0x0004d74f) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0004ec7f) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0004ec7f) cell_pinb_pane_g

0xd8d0,	// (0x0004d46b) grid_highlight_pane_cp01

0xd4ad,	// (0x0004d048) list_pinb_item_pane_ParamLimits

0xd4ad,	// (0x0004d048) list_pinb_item_pane

0xd470,	// (0x0004d00b) list_highlight_pane_cp02

0xdbc2,	// (0x0004d75d) list_pinb_item_pane_g1_ParamLimits

0xdbc2,	// (0x0004d75d) list_pinb_item_pane_g1

0xdbb4,	// (0x0004d74f) list_pinb_item_pane_g2_ParamLimits

0xdbb4,	// (0x0004d74f) list_pinb_item_pane_g2

0xdba6,	// (0x0004d741) list_pinb_item_pane_g3_ParamLimits

0xdba6,	// (0x0004d741) list_pinb_item_pane_g3

0xdbb4,	// (0x0004d74f) list_pinb_item_pane_g4_ParamLimits

0xdbb4,	// (0x0004d74f) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0004ec86) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0004ec86) list_pinb_item_pane_g

0xdbd0,	// (0x0004d76b) list_pinb_item_pane_t1_ParamLimits

0xdbd0,	// (0x0004d76b) list_pinb_item_pane_t1

0x1a2d,	// (0x000415c8) calc_display_pane

0x1a52,	// (0x000415ed) calc_paper_pane

0x1a75,	// (0x00041610) grid_calc_pane

0xd8d0,	// (0x0004d46b) bg_list_pane_cp01

0x1aa3,	// (0x0004163e) clock_g1

0x1aab,	// (0x00041646) clock_g2

0x0001,

0xf0f4,	// (0x0004ec8f) clock_g

0x1ab3,	// (0x0004164e) clock_t1_ParamLimits

0x1ab3,	// (0x0004164e) clock_t1

0x1ac8,	// (0x00041663) clock_t2_ParamLimits

0x1ac8,	// (0x00041663) clock_t2

0x1ada,	// (0x00041675) clock_t3_ParamLimits

0x1ada,	// (0x00041675) clock_t3

0x1aec,	// (0x00041687) clock_t4_ParamLimits

0x1aec,	// (0x00041687) clock_t4

0x1afe,	// (0x00041699) clock_t5_ParamLimits

0x1afe,	// (0x00041699) clock_t5

0x1b13,	// (0x000416ae) clock_t6_ParamLimits

0x1b13,	// (0x000416ae) clock_t6

0x1b25,	// (0x000416c0) clock_t7_ParamLimits

0x1b25,	// (0x000416c0) clock_t7

0x1b37,	// (0x000416d2) clock_t8_ParamLimits

0x1b37,	// (0x000416d2) clock_t8

0x1b4b,	// (0x000416e6) clock_t9_ParamLimits

0x1b4b,	// (0x000416e6) clock_t9

0x0008,

0xf0f9,	// (0x0004ec94) clock_t_ParamLimits

0xf0f9,	// (0x0004ec94) clock_t

0xdbe4,	// (0x0004d77f) popup_clock_analogue_window_cp02

0xdbe4,	// (0x0004d77f) popup_clock_digital_window_cp01

0xd8d0,	// (0x0004d46b) listscroll_help_pane

0xd8d0,	// (0x0004d46b) phob_pre_status_pane

0xdbec,	// (0x0004d787) grid_qdial_pane

0xdb2b,	// (0x0004d6c6) listscroll_mce_pane

0xdb2b,	// (0x0004d6c6) bg_notes_pane

0xdbf6,	// (0x0004d791) list_notes_pane

0x1b61,	// (0x000416fc) scroll_pane_cp06

0xdc04,	// (0x0004d79f) bg_calc_paper_pane

0xabc3,	// (0x0004a75e) list_calc_pane

0xdc18,	// (0x0004d7b3) bg_calc_display_pane

0x1b75,	// (0x00041710) calc_display_pane_t1

0x1b87,	// (0x00041722) calc_display_pane_t2

0xabdd,	// (0x0004a778) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0004eca7) calc_display_pane_t

0x1b99,	// (0x00041734) cell_calc_pane_ParamLimits

0x1b99,	// (0x00041734) cell_calc_pane

0xdc24,	// (0x0004d7bf) bg_calc_paper_pane_g1

0xdc30,	// (0x0004d7cb) bg_calc_paper_pane_g2

0xdc3c,	// (0x0004d7d7) bg_calc_paper_pane_g3

0xdc48,	// (0x0004d7e3) bg_calc_paper_pane_g4

0xdc54,	// (0x0004d7ef) bg_calc_paper_pane_g5

0x1bd4,	// (0x0004176f) bg_calc_paper_pane_g6

0x1be2,	// (0x0004177d) bg_calc_paper_pane_g7

0x1bf0,	// (0x0004178b) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0004ecae) bg_calc_paper_pane_g

0x1c03,	// (0x0004179e) calc_bg_paper_pane_g9

0x1c16,	// (0x000417b1) list_calc_item_pane_ParamLimits

0x1c16,	// (0x000417b1) list_calc_item_pane

0xdc60,	// (0x0004d7fb) list_calc_item_pane_g1

0xabef,	// (0x0004a78a) list_calc_item_pane_t1_ParamLimits

0xabef,	// (0x0004a78a) list_calc_item_pane_t1

0x1c2e,	// (0x000417c9) list_calc_item_pane_t2_ParamLimits

0x1c2e,	// (0x000417c9) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0004ecbf) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0004ecbf) list_calc_item_pane_t

0xdb43,	// (0x0004d6de) cell_calc_pane_g1

0xdc6d,	// (0x0004d808) grid_highlight_pane_cp02

0xf040,	// (0x0004ebdb) bg_calc_display_pane_g1

0x1c60,	// (0x000417fb) bg_calc_display_pane_g2

0x1c6a,	// (0x00041805) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0004ecc9) bg_calc_display_pane_g

0x1c73,	// (0x0004180e) cell_qdial_pane_ParamLimits

0x1c73,	// (0x0004180e) cell_qdial_pane

0x1c87,	// (0x00041822) cell_qdial_pane_g1_ParamLimits

0x1c87,	// (0x00041822) cell_qdial_pane_g1

0x1c9d,	// (0x00041838) cell_qdial_pane_g2_ParamLimits

0x1c9d,	// (0x00041838) cell_qdial_pane_g2

0xdc8f,	// (0x0004d82a) cell_qdial_pane_g3_ParamLimits

0xdc8f,	// (0x0004d82a) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0004ecd0) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0004ecd0) cell_qdial_pane_g

0x1cc4,	// (0x0004185f) cell_qdial_pane_t1_ParamLimits

0x1cc4,	// (0x0004185f) cell_qdial_pane_t1

0x1cdc,	// (0x00041877) cell_qdial_pane_t2_ParamLimits

0x1cdc,	// (0x00041877) cell_qdial_pane_t2

0x1cef,	// (0x0004188a) cell_qdial_pane_t3_ParamLimits

0x1cef,	// (0x0004188a) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0004ecd9) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0004ecd9) cell_qdial_pane_t

0xd8d0,	// (0x0004d46b) grid_highlight_pane_cp04

0xdc9b,	// (0x0004d836) thumbnail_qdial_pane_ParamLimits

0xdc9b,	// (0x0004d836) thumbnail_qdial_pane

0xdcf7,	// (0x0004d892) list_help_pane

0xdd00,	// (0x0004d89b) scroll_pane_cp02

0x1d02,	// (0x0004189d) help_list_pane_t1_ParamLimits

0x1d02,	// (0x0004189d) help_list_pane_t1

0xac01,	// (0x0004a79c) bg_notes_pane_g2

0xac09,	// (0x0004a7a4) bg_notes_pane_g3

0xac11,	// (0x0004a7ac) notes_bg_pane_g1

0xac19,	// (0x0004a7b4) notes_bg_pane_g4

0xac21,	// (0x0004a7bc) notes_bg_pane_g5

0xac29,	// (0x0004a7c4) notes_bg_pane_g6

0xac31,	// (0x0004a7cc) notes_bg_pane_g7

0xac39,	// (0x0004a7d4) notes_bg_pane_g8

0xac41,	// (0x0004a7dc) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0004ecf7) notes_bg_pane_g

0x1d26,	// (0x000418c1) list_notes_text_pane_ParamLimits

0x1d26,	// (0x000418c1) list_notes_text_pane

0xdd09,	// (0x0004d8a4) list_notes_text_pane_g1

0x0e12,	// (0x000409ad) list_notes_text_pane_t1

0x1d3d,	// (0x000418d8) listscroll_cale_week_pane

0x1d67,	// (0x00041902) bg_cale_heading_pane

0x1d8b,	// (0x00041926) bg_cale_pane_cp01

0x1da8,	// (0x00041943) cale_week_corner_pane

0x1dc7,	// (0x00041962) cale_week_day_heading_pane

0x1df0,	// (0x0004198b) cale_week_scroll_pane_g1

0x1e0f,	// (0x000419aa) cale_week_scroll_pane_g2

0x1e27,	// (0x000419c2) cale_week_scroll_pane_g3

0x1e3f,	// (0x000419da) cale_week_scroll_pane_g4

0x1e57,	// (0x000419f2) cale_week_scroll_pane_g5

0x1e77,	// (0x00041a12) cale_week_scroll_pane_g6

0x1e97,	// (0x00041a32) cale_week_scroll_pane_g7

0x1ebb,	// (0x00041a56) cale_week_scroll_pane_g8

0x1edf,	// (0x00041a7a) cale_week_scroll_pane_g9

0x1ef7,	// (0x00041a92) cale_week_scroll_pane_g10

0x1f0f,	// (0x00041aaa) cale_week_scroll_pane_g11

0x1f27,	// (0x00041ac2) cale_week_scroll_pane_g12

0x1f4b,	// (0x00041ae6) cale_week_scroll_pane_g13

0x1f4b,	// (0x00041ae6) cale_week_scroll_pane_g14

0x1f4b,	// (0x00041ae6) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0004ed06) cale_week_scroll_pane_g

0x1f93,	// (0x00041b2e) cale_week_time_pane

0x1fb7,	// (0x00041b52) grid_cale_week_pane

0xdd3e,	// (0x0004d8d9) scroll_pane_cp08

0x1fe9,	// (0x00041b84) cell_cale_week_pane_ParamLimits

0x1fe9,	// (0x00041b84) cell_cale_week_pane

0x2085,	// (0x00041c20) cale_week_day_heading_pane_t1

0x20af,	// (0x00041c4a) cale_week_day_heading_pane_t2

0x20de,	// (0x00041c79) cale_week_day_heading_pane_t3

0x210d,	// (0x00041ca8) cale_week_day_heading_pane_t4

0x213c,	// (0x00041cd7) cale_week_day_heading_pane_t5

0x216f,	// (0x00041d0a) cale_week_day_heading_pane_t6

0x21a6,	// (0x00041d41) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0004ed27) cale_week_day_heading_pane_t

0xdd5b,	// (0x0004d8f6) bg_cale_side_pane

0x21d0,	// (0x00041d6b) cale_week_time_pane_t1

0x21ea,	// (0x00041d85) cale_week_time_pane_t2

0x2204,	// (0x00041d9f) cale_week_time_pane_t3

0x221e,	// (0x00041db9) cale_week_time_pane_t4

0x2238,	// (0x00041dd3) cale_week_time_pane_t5

0x2252,	// (0x00041ded) cale_week_time_pane_t6

0x2272,	// (0x00041e0d) cale_week_time_pane_t7

0x2298,	// (0x00041e33) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0004ed36) cale_week_time_pane_t

0x22be,	// (0x00041e59) cell_cale_week_pane_g2

0x22e2,	// (0x00041e7d) cell_cale_week_pane_g3_ParamLimits

0x22e2,	// (0x00041e7d) cell_cale_week_pane_g3

0xdd69,	// (0x0004d904) grid_highlight_pane_cp07

0xdd71,	// (0x0004d90c) listscroll_gms_pane

0xdd7b,	// (0x0004d916) grid_gms_pane

0xdd84,	// (0x0004d91f) listscroll_gms_pane_g1

0xdd8c,	// (0x0004d927) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0004ed47) listscroll_gms_pane_g

0x22fa,	// (0x00041e95) scroll_pane_cp010

0x2305,	// (0x00041ea0) cell_gms_pane_ParamLimits

0x2305,	// (0x00041ea0) cell_gms_pane

0x231c,	// (0x00041eb7) cell_gms_pane_g1

0xdd94,	// (0x0004d92f) cell_gms_pane_g2

0xdd9c,	// (0x0004d937) cell_gms_pane_g3

0xdda5,	// (0x0004d940) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0004ed4c) cell_gms_pane_g

0xddae,	// (0x0004d949) grid_highlight_pane_cp09

0x4ee2,	// (0x00044a7d) phob_pre_status_pane_g1

0x4eea,	// (0x00044a85) phob_pre_status_pane_g2

0x4ef2,	// (0x00044a8d) phob_pre_status_pane_g3

0x4efa,	// (0x00044a95) phob_pre_status_pane_g4

0x0004,

0xf575,	// (0x0004f110) phob_pre_status_pane_g

0x4f0a,	// (0x00044aa5) phob_pre_status_pane_t1

0x4f1a,	// (0x00044ab5) phob_pre_status_pane_t2

0x4f2a,	// (0x00044ac5) phob_pre_status_pane_t3

0x0002,

0xf580,	// (0x0004f11b) phob_pre_status_pane_t

0xddb6,	// (0x0004d951) bg_list_pane_cp05

0x232c,	// (0x00041ec7) grid_vorec_pane

0x2336,	// (0x00041ed1) vorec_t1

0x2344,	// (0x00041edf) vorec_t2

0x2352,	// (0x00041eed) vorec_t3

0x2360,	// (0x00041efb) vorec_t4

0xa945,	// (0x0004a4e0) vorec_t5

0xa953,	// (0x0004a4ee) vorec_t6

0x0004,

0xf1ba,	// (0x0004ed55) vorec_t

0xa961,	// (0x0004a4fc) wait_bar_pane_cp01

0xe597,	// (0x0004e132) cell_vorec_pane_ParamLimits

0xe597,	// (0x0004e132) cell_vorec_pane

0xac49,	// (0x0004a7e4) cell_vorec_pane_g1

0xd8d0,	// (0x0004d46b) grid_highlight_pane_cp05

0xdb4d,	// (0x0004d6e8) cams_zoom_pane

0xdb4d,	// (0x0004d6e8) image_vga_pane

0xdba6,	// (0x0004d741) main_camera_pane_g1

0xdba6,	// (0x0004d741) main_camera_pane_g2

0xdba6,	// (0x0004d741) main_camera_pane_g3

0xdba6,	// (0x0004d741) main_camera_pane_g4

0xdba6,	// (0x0004d741) main_camera_pane_g5

0xdba6,	// (0x0004d741) main_camera_pane_g6

0xdba6,	// (0x0004d741) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0004ed60) main_camera_pane_g

0xddec,	// (0x0004d987) main_camera_pane_t1

0xddec,	// (0x0004d987) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0004ed71) main_camera_pane_t

0x2390,	// (0x00041f2b) cams_zoom_pane_cp_ParamLimits

0x2390,	// (0x00041f2b) cams_zoom_pane_cp

0x23c4,	// (0x00041f5f) image_cif_pane_ParamLimits

0x23c4,	// (0x00041f5f) image_cif_pane

0xd470,	// (0x0004d00b) image_subqcif_pane

0x23d6,	// (0x00041f71) main_video_pane_g1_ParamLimits

0x23d6,	// (0x00041f71) main_video_pane_g1

0x2404,	// (0x00041f9f) main_video_pane_g2_ParamLimits

0x2404,	// (0x00041f9f) main_video_pane_g2

0x243e,	// (0x00041fd9) main_video_pane_g3_ParamLimits

0x243e,	// (0x00041fd9) main_video_pane_g3

0x243e,	// (0x00041fd9) main_video_pane_g4_ParamLimits

0x243e,	// (0x00041fd9) main_video_pane_g4

0x2472,	// (0x0004200d) main_video_pane_g5_ParamLimits

0x2472,	// (0x0004200d) main_video_pane_g5

0xddbe,	// (0x0004d959) main_video_pane_g6_ParamLimits

0xddbe,	// (0x0004d959) main_video_pane_g6

0x0006,

0xf1db,	// (0x0004ed76) main_video_pane_g_ParamLimits

0xf1db,	// (0x0004ed76) main_video_pane_g

0x248e,	// (0x00042029) main_video_pane_t1_ParamLimits

0x248e,	// (0x00042029) main_video_pane_t1

0xde00,	// (0x0004d99b) cams_zoom_pane_g1

0xde00,	// (0x0004d99b) cams_zoom_pane_g2

0xde00,	// (0x0004d99b) cams_zoom_pane_g3

0xde00,	// (0x0004d99b) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0004ed85) cams_zoom_pane_g

0x24e6,	// (0x00042081) grid_cams_pane

0x2500,	// (0x0004209b) linegrid_cams_pane

0x2512,	// (0x000420ad) cell_cams_pane_ParamLimits

0x2512,	// (0x000420ad) cell_cams_pane

0xde0a,	// (0x0004d9a5) cams_burst_image_pane

0xde12,	// (0x0004d9ad) cell_cams_pane_g1

0xd8d0,	// (0x0004d46b) grid_highlight_pane_cp03

0xdb43,	// (0x0004d6de) mp_bg_pane_g1

0xd470,	// (0x0004d00b) bg_list_pane_cp03

0xd470,	// (0x0004d00b) bg_mp_pane

0xd470,	// (0x0004d00b) grid_mp_pane

0xde00,	// (0x0004d99b) media_player_g1

0xe32c,	// (0x0004dec7) media_player_t1

0xe32c,	// (0x0004dec7) media_player_t2

0xe32c,	// (0x0004dec7) media_player_t3

0xe32c,	// (0x0004dec7) media_player_t4

0xe32c,	// (0x0004dec7) media_player_t5

0xe32c,	// (0x0004dec7) media_player_t6

0xe32c,	// (0x0004dec7) media_player_t7

0x0006,

0xf55f,	// (0x0004f0fa) media_player_t

0xd470,	// (0x0004d00b) wait_bar_pane_cp02

0xf544,	// (0x0004f0df) main_usb_pane_t

0xe5ac,	// (0x0004e147) cell_mp_pane

0xdb43,	// (0x0004d6de) cell_mp_pane_g1

0xd8d0,	// (0x0004d46b) grid_highlight_pane_cp06

0xde1a,	// (0x0004d9b5) grid_skin_colour_pane

0xde22,	// (0x0004d9bd) list_highlight_pane_cp03

0x2534,	// (0x000420cf) skin_g1

0xde2a,	// (0x0004d9c5) skin_t1

0xde39,	// (0x0004d9d4) skin_t2

0x0001,

0xf218,	// (0x0004edb3) skin_t

0x253e,	// (0x000420d9) cell_skin_colour_pane_ParamLimits

0x253e,	// (0x000420d9) cell_skin_colour_pane

0xde47,	// (0x0004d9e2) cell_skin_colour_pane_g1

0x25b1,	// (0x0004214c) call_video_g1_ParamLimits

0x25b1,	// (0x0004214c) call_video_g1

0x25cd,	// (0x00042168) call_video_g2_ParamLimits

0x25cd,	// (0x00042168) call_video_g2

0x0001,

0xf21d,	// (0x0004edb8) call_video_g_ParamLimits

0xf21d,	// (0x0004edb8) call_video_g

0x2612,	// (0x000421ad) call_video_uplink_pane_cp1_ParamLimits

0x2612,	// (0x000421ad) call_video_uplink_pane_cp1

0xde59,	// (0x0004d9f4) call_video_uplink_pane_cp2

0x26b3,	// (0x0004224e) video_down_crop_pane_ParamLimits

0x26b3,	// (0x0004224e) video_down_crop_pane

0x279c,	// (0x00042337) video_down_pane_ParamLimits

0x279c,	// (0x00042337) video_down_pane

0xde61,	// (0x0004d9fc) video_down_subqcif_pane_ParamLimits

0xde61,	// (0x0004d9fc) video_down_subqcif_pane

0xde7b,	// (0x0004da16) video_down_subqcif_pane_cp_ParamLimits

0xde7b,	// (0x0004da16) video_down_subqcif_pane_cp

0xdea3,	// (0x0004da3e) im_reading_pane_ParamLimits

0xdea3,	// (0x0004da3e) im_reading_pane

0x28a7,	// (0x00042442) im_writing_pane_ParamLimits

0x28a7,	// (0x00042442) im_writing_pane

0x28c5,	// (0x00042460) im_reading_pane_t1

0xdebd,	// (0x0004da58) list_im_pane

0xdece,	// (0x0004da69) scroll_pane_cp07

0x2904,	// (0x0004249f) im_writing_pane_t1_ParamLimits

0x2904,	// (0x0004249f) im_writing_pane_t1

0xdee7,	// (0x0004da82) im_writing_pane_t2_ParamLimits

0xdee7,	// (0x0004da82) im_writing_pane_t2

0x0001,

0xf227,	// (0x0004edc2) im_writing_pane_t_ParamLimits

0xf227,	// (0x0004edc2) im_writing_pane_t

0xd8d0,	// (0x0004d46b) input_focus_pane_cp04

0xd8d0,	// (0x0004d46b) input_focus_pane_cp05

0x2919,	// (0x000424b4) list_im_single_pane_ParamLimits

0x2919,	// (0x000424b4) list_im_single_pane

0x2932,	// (0x000424cd) list_single_im_pane_t1

0xddb6,	// (0x0004d951) blid_accuracy_pane

0xddb6,	// (0x0004d951) blid_compass_pane

0x4ed3,	// (0x00044a6e) main_location_t1

0x4ed3,	// (0x00044a6e) main_location_t2

0x4ed3,	// (0x00044a6e) main_location_t3

0x0002,

0xf56e,	// (0x0004f109) main_location_t

0xd8d0,	// (0x0004d46b) aid_levels_location

0xdb43,	// (0x0004d6de) blid_accuracy_pane_g1

0xdb43,	// (0x0004d6de) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x0004ee11) blid_accuracy_pane_g

0xdf2f,	// (0x0004daca) wml_content_pane

0xdf6d,	// (0x0004db08) wml_button_pane_ParamLimits

0xdf6d,	// (0x0004db08) wml_button_pane

0x2941,	// (0x000424dc) wml_list_single_large_pane_ParamLimits

0x2941,	// (0x000424dc) wml_list_single_large_pane

0x295a,	// (0x000424f5) wml_list_single_medium_pane_ParamLimits

0x295a,	// (0x000424f5) wml_list_single_medium_pane

0x2974,	// (0x0004250f) wml_list_single_small_pane_ParamLimits

0x2974,	// (0x0004250f) wml_list_single_small_pane

0xdf81,	// (0x0004db1c) wml_selection_box_pane_ParamLimits

0xdf81,	// (0x0004db1c) wml_selection_box_pane

0xdf94,	// (0x0004db2f) wml_list_single_pane_t1

0xdfa3,	// (0x0004db3e) wml_list_single_medium_pane_t1

0xdfb2,	// (0x0004db4d) wml_list_single_large_pane_t1

0xdfc1,	// (0x0004db5c) input_focus_pane_cp02_ParamLimits

0xdfc1,	// (0x0004db5c) input_focus_pane_cp02

0xdfd4,	// (0x0004db6f) wml_selection_box_pane_g1

0xdfdd,	// (0x0004db78) wml_selection_box_pane_t1_ParamLimits

0xdfdd,	// (0x0004db78) wml_selection_box_pane_t1

0xdb2b,	// (0x0004d6c6) bg_wml_button_pane_ParamLimits

0xdb2b,	// (0x0004d6c6) bg_wml_button_pane

0xdff5,	// (0x0004db90) wml_button_pane_g1

0xdffd,	// (0x0004db98) wml_button_pane_t1

0xdff5,	// (0x0004db90) wml_button_bg_pane_g1

0xe00d,	// (0x0004dba8) wml_button_bg_pane_g2

0xe015,	// (0x0004dbb0) wml_button_bg_pane_g3

0xe01d,	// (0x0004dbb8) wml_button_bg_pane_g4

0xe025,	// (0x0004dbc0) wml_button_bg_pane_g5

0xe02d,	// (0x0004dbc8) wml_button_bg_pane_g6

0xe035,	// (0x0004dbd0) wml_button_bg_pane_g7

0xe03d,	// (0x0004dbd8) wml_button_bg_pane_g8

0xe045,	// (0x0004dbe0) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0004edc7) wml_button_bg_pane_g

0x2993,	// (0x0004252e) bg_list_pane_cp02

0xe04d,	// (0x0004dbe8) mce_header_pane_ParamLimits

0xe04d,	// (0x0004dbe8) mce_header_pane

0xe063,	// (0x0004dbfe) mce_icon_pane

0xe063,	// (0x0004dbfe) mce_image_pane

0xe06c,	// (0x0004dc07) mce_text_pane_ParamLimits

0xe06c,	// (0x0004dc07) mce_text_pane

0x299d,	// (0x00042538) scroll_pane_cp03

0xdf65,	// (0x0004db00) scroll_pane_cp04

0xe07f,	// (0x0004dc1a) scroll_pane_cp05_ParamLimits

0xe07f,	// (0x0004dc1a) scroll_pane_cp05

0x29a7,	// (0x00042542) mce_header_field_pane_ParamLimits

0x29a7,	// (0x00042542) mce_header_field_pane

0x29c0,	// (0x0004255b) mce_header_field_pane_2_ParamLimits

0x29c0,	// (0x0004255b) mce_header_field_pane_2

0x29d6,	// (0x00042571) mce_header_field_pane_3

0x29de,	// (0x00042579) list_single_mce_message_pane_ParamLimits

0x29de,	// (0x00042579) list_single_mce_message_pane

0x29fa,	// (0x00042595) list_single_mce_smart_pane_ParamLimits

0x29fa,	// (0x00042595) list_single_mce_smart_pane

0xe08b,	// (0x0004dc26) input_focus_pane_cp03

0xe094,	// (0x0004dc2f) list_header_data_pane

0x2a21,	// (0x000425bc) mce_header_field_pane_t1

0x2a31,	// (0x000425cc) list_single_mce_header_pane_ParamLimits

0x2a31,	// (0x000425cc) list_single_mce_header_pane

0xe09c,	// (0x0004dc37) list_single_mce_header_pane_t1

0xe0ab,	// (0x0004dc46) list_single_mce_message_pane_g1

0xe0b3,	// (0x0004dc4e) list_single_mce_message_pane_t1

0x2a6b,	// (0x00042606) bg_cale_heading_pane_cp01_ParamLimits

0x2a6b,	// (0x00042606) bg_cale_heading_pane_cp01

0xe0c1,	// (0x0004dc5c) bg_cale_pane_cp02_ParamLimits

0xe0c1,	// (0x0004dc5c) bg_cale_pane_cp02

0x2abd,	// (0x00042658) cale_month_corner_pane

0x2adc,	// (0x00042677) cale_month_day_heading_pane_ParamLimits

0x2adc,	// (0x00042677) cale_month_day_heading_pane

0x2b46,	// (0x000426e1) cale_month_pane_g1_ParamLimits

0x2b46,	// (0x000426e1) cale_month_pane_g1

0x2b8d,	// (0x00042728) cale_month_pane_g2_ParamLimits

0x2b8d,	// (0x00042728) cale_month_pane_g2

0x2bc9,	// (0x00042764) cale_month_pane_g3_ParamLimits

0x2bc9,	// (0x00042764) cale_month_pane_g3

0x2c1d,	// (0x000427b8) cale_month_pane_g4_ParamLimits

0x2c1d,	// (0x000427b8) cale_month_pane_g4

0x2c71,	// (0x0004280c) cale_month_pane_g5_ParamLimits

0x2c71,	// (0x0004280c) cale_month_pane_g5

0x2ccd,	// (0x00042868) cale_month_pane_g6_ParamLimits

0x2ccd,	// (0x00042868) cale_month_pane_g6

0x2d35,	// (0x000428d0) cale_month_pane_g7_ParamLimits

0x2d35,	// (0x000428d0) cale_month_pane_g7

0x2da1,	// (0x0004293c) cale_month_pane_g8_ParamLimits

0x2da1,	// (0x0004293c) cale_month_pane_g8

0x2e0d,	// (0x000429a8) cale_month_pane_g9_ParamLimits

0x2e0d,	// (0x000429a8) cale_month_pane_g9

0x2e71,	// (0x00042a0c) cale_month_pane_g10_ParamLimits

0x2e71,	// (0x00042a0c) cale_month_pane_g10

0x2ec3,	// (0x00042a5e) cale_month_pane_g11_ParamLimits

0x2ec3,	// (0x00042a5e) cale_month_pane_g11

0x2f15,	// (0x00042ab0) cale_month_pane_g12_ParamLimits

0x2f15,	// (0x00042ab0) cale_month_pane_g12

0x2f6d,	// (0x00042b08) cale_month_pane_g13_ParamLimits

0x2f6d,	// (0x00042b08) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0004edda) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0004edda) cale_month_pane_g

0x2fc5,	// (0x00042b60) cale_month_week_pane

0x2fe9,	// (0x00042b84) grid_cale_month_pane_ParamLimits

0x2fe9,	// (0x00042b84) grid_cale_month_pane

0x304a,	// (0x00042be5) cale_month_day_heading_pane_t1

0x30d0,	// (0x00042c6b) cale_month_day_heading_pane_t2

0x3149,	// (0x00042ce4) cale_month_day_heading_pane_t3

0x31c2,	// (0x00042d5d) cale_month_day_heading_pane_t4

0x3243,	// (0x00042dde) cale_month_day_heading_pane_t5

0x32cc,	// (0x00042e67) cale_month_day_heading_pane_t6

0x335d,	// (0x00042ef8) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0004edf5) cale_month_day_heading_pane_t

0xdd5b,	// (0x0004d8f6) bg_cale_side_pane_cp01

0x33ee,	// (0x00042f89) cale_month_week_pane_t1

0x3407,	// (0x00042fa2) cale_month_week_pane_t2

0x3420,	// (0x00042fbb) cale_month_week_pane_t3

0x3439,	// (0x00042fd4) cale_month_week_pane_t4

0x3452,	// (0x00042fed) cale_month_week_pane_t5

0x346b,	// (0x00043006) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0004ee04) cale_month_week_pane_t

0x3490,	// (0x0004302b) cell_cale_month_pane_ParamLimits

0x3490,	// (0x0004302b) cell_cale_month_pane

0xac53,	// (0x0004a7ee) cell_cale_month_pane_g1

0x35da,	// (0x00043175) cell_cale_month_pane_t1_ParamLimits

0x35da,	// (0x00043175) cell_cale_month_pane_t1

0xdd69,	// (0x0004d904) grid_highlight_pane_cp08

0xdb43,	// (0x0004d6de) main_smil_g1

0x3606,	// (0x000431a1) smil_status_pane

0xe100,	// (0x0004dc9b) smil_text_pane

0x4d56,	// (0x000448f1) bg_popup_call3_rect_pane_g8

0x4d5e,	// (0x000448f9) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x0004f09d) bg_popup_call3_rect_pane_g

0x5561,	// (0x000450fc) smil_status_volume_pane_g1

0xe10a,	// (0x0004dca5) smil_status_pane_t1

0xada9,	// (0x0004a944) volume_smil_pane

0xe121,	// (0x0004dcbc) list_smil_text_pane

0x361b,	// (0x000431b6) scroll_pane_cp011

0x3626,	// (0x000431c1) smil_text_list_pane_t1_ParamLimits

0x3626,	// (0x000431c1) smil_text_list_pane_t1

0xac5f,	// (0x0004a7fa) aid_volume_smil_ParamLimits

0xac5f,	// (0x0004a7fa) aid_volume_smil

0xdb43,	// (0x0004d6de) smil_volume_pane_g1

0xdb43,	// (0x0004d6de) smil_volume_pane_g2

0x0001,

0xf276,	// (0x0004ee11) smil_volume_pane_g

0x1d3d,	// (0x000418d8) listscroll_cale_day_pane

0xe12b,	// (0x0004dcc6) bg_cale_pane

0xe143,	// (0x0004dcde) list_cale_pane

0xe166,	// (0x0004dd01) scroll_pane_cp09

0xe177,	// (0x0004dd12) cale_bg_pane_g1

0xe17f,	// (0x0004dd1a) cale_bg_pane_g2

0xe187,	// (0x0004dd22) cale_bg_pane_g3

0xe18f,	// (0x0004dd2a) cale_bg_pane_g4

0xe197,	// (0x0004dd32) cale_bg_pane_g5

0xe19f,	// (0x0004dd3a) cale_bg_pane_g6

0xe1a7,	// (0x0004dd42) cale_bg_pane_g7

0xe1af,	// (0x0004dd4a) cale_bg_pane_g8

0xe1b7,	// (0x0004dd52) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x0004ee16) cale_bg_pane_g

0x3679,	// (0x00043214) list_cale_time_pane_ParamLimits

0x3679,	// (0x00043214) list_cale_time_pane

0xe1bf,	// (0x0004dd5a) list_cale_time_pane_g1_ParamLimits

0xe1bf,	// (0x0004dd5a) list_cale_time_pane_g1

0xe1cb,	// (0x0004dd66) list_cale_time_pane_g2_ParamLimits

0xe1cb,	// (0x0004dd66) list_cale_time_pane_g2

0x3693,	// (0x0004322e) list_cale_time_pane_g3_ParamLimits

0x3693,	// (0x0004322e) list_cale_time_pane_g3

0x36a1,	// (0x0004323c) list_cale_time_pane_g4_ParamLimits

0x36a1,	// (0x0004323c) list_cale_time_pane_g4

0x36af,	// (0x0004324a) list_cale_time_pane_g5_ParamLimits

0x36af,	// (0x0004324a) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x0004ee29) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x0004ee29) list_cale_time_pane_g

0xe1e5,	// (0x0004dd80) list_cale_time_pane_t1_ParamLimits

0xe1e5,	// (0x0004dd80) list_cale_time_pane_t1

0xe20d,	// (0x0004dda8) list_cale_time_pane_t2_ParamLimits

0xe20d,	// (0x0004dda8) list_cale_time_pane_t2

0x396d,	// (0x00043508) aid_blid_cardinal_pane

0x39af,	// (0x0004354a) compass_pane_t4

0xe235,	// (0x0004ddd0) list_cale_time_pane_t4_ParamLimits

0xe235,	// (0x0004ddd0) list_cale_time_pane_t4

0x39bd,	// (0x00043558) compass_pane_t5

0x39cd,	// (0x00043568) compass_pane_t6

0x39db,	// (0x00043576) compass_pane_t7

0xe65c,	// (0x0004e1f7) navi_pane_cc_t1

0xe7a9,	// (0x0004e344) aid_phob_thumbnail_center_pane

0x3e95,	// (0x00043a30) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x0004ee36) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x0004ee36) list_cale_time_pane_t

0xd527,	// (0x0004d0c2) bg_popup_window_pane_cp02_ParamLimits

0xd527,	// (0x0004d0c2) bg_popup_window_pane_cp02

0xe25d,	// (0x0004ddf8) heading_pane_cp01_ParamLimits

0xe25d,	// (0x0004ddf8) heading_pane_cp01

0xe269,	// (0x0004de04) loc_req_pane_ParamLimits

0xe269,	// (0x0004de04) loc_req_pane

0xe279,	// (0x0004de14) loc_type_pane_ParamLimits

0xe279,	// (0x0004de14) loc_type_pane

0xe28b,	// (0x0004de26) loc_type_pane_t1_ParamLimits

0xe28b,	// (0x0004de26) loc_type_pane_t1

0xe29d,	// (0x0004de38) loc_type_pane_t2_ParamLimits

0xe29d,	// (0x0004de38) loc_type_pane_t2

0xe2af,	// (0x0004de4a) loc_type_pane_t3_ParamLimits

0xe2af,	// (0x0004de4a) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x0004ee3d) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x0004ee3d) loc_type_pane_t

0xe2c1,	// (0x0004de5c) list_loc_req_pane

0xe2cb,	// (0x0004de66) scroll_pane_cp012

0x36bd,	// (0x00043258) list_single_loc_request_popup_menu_pane_ParamLimits

0x36bd,	// (0x00043258) list_single_loc_request_popup_menu_pane

0xe2d6,	// (0x0004de71) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe2d6,	// (0x0004de71) list_single_loc_request_popup_menu_pane_g1

0xe2e2,	// (0x0004de7d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe2e2,	// (0x0004de7d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x0004ee44) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x0004ee44) list_single_loc_request_popup_menu_pane_g

0xe2ee,	// (0x0004de89) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe2ee,	// (0x0004de89) list_single_loc_request_popup_menu_pane_t1

0xdb2b,	// (0x0004d6c6) bg_popup_window_pane_cp03_ParamLimits

0xdb2b,	// (0x0004d6c6) bg_popup_window_pane_cp03

0xf049,	// (0x0004ebe4) heading_loc_req_pane_ParamLimits

0xf049,	// (0x0004ebe4) heading_loc_req_pane

0x36ca,	// (0x00043265) popup_dyc_status_message_window_g1_ParamLimits

0x36ca,	// (0x00043265) popup_dyc_status_message_window_g1

0x36de,	// (0x00043279) popup_dyc_status_message_window_t1_ParamLimits

0x36de,	// (0x00043279) popup_dyc_status_message_window_t1

0x36f3,	// (0x0004328e) popup_dyc_status_message_window_t2_ParamLimits

0x36f3,	// (0x0004328e) popup_dyc_status_message_window_t2

0x3708,	// (0x000432a3) popup_dyc_status_message_window_t3_ParamLimits

0x3708,	// (0x000432a3) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x0004ee49) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x0004ee49) popup_dyc_status_message_window_t

0xd8d0,	// (0x0004d46b) bg_heading_pane_cp01

0xe304,	// (0x0004de9f) heading_loc_req_pane_g1

0xe30c,	// (0x0004dea7) heading_loc_req_pane_g2

0xe314,	// (0x0004deaf) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x0004ee50) heading_loc_req_pane_g

0xe31c,	// (0x0004deb7) heading_loc_req_pane_t1

0xe33c,	// (0x0004ded7) bg_popup_sub_pane_cp01_ParamLimits

0xe33c,	// (0x0004ded7) bg_popup_sub_pane_cp01

0xe34a,	// (0x0004dee5) popup_cale_events_window_g1_ParamLimits

0xe34a,	// (0x0004dee5) popup_cale_events_window_g1

0xe36a,	// (0x0004df05) popup_cale_events_window_g2_ParamLimits

0xe36a,	// (0x0004df05) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x0004ee72) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x0004ee72) popup_cale_events_window_g

0xe38a,	// (0x0004df25) popup_cale_events_window_t1_ParamLimits

0xe38a,	// (0x0004df25) popup_cale_events_window_t1

0xe39c,	// (0x0004df37) popup_cale_events_window_t2_ParamLimits

0xe39c,	// (0x0004df37) popup_cale_events_window_t2

0xe3da,	// (0x0004df75) popup_cale_events_window_t3_ParamLimits

0xe3da,	// (0x0004df75) popup_cale_events_window_t3

0xe414,	// (0x0004dfaf) popup_cale_events_window_t4_ParamLimits

0xe414,	// (0x0004dfaf) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x0004ee77) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x0004ee77) popup_cale_events_window_t

0x373c,	// (0x000432d7) call_type_pane

0x374c,	// (0x000432e7) popup_call_status_window_g1

0x3760,	// (0x000432fb) popup_call_status_window_g2

0x3774,	// (0x0004330f) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x0004ee80) popup_call_status_window_g

0xe44a,	// (0x0004dfe5) call_type_pane_g1

0xe453,	// (0x0004dfee) call_type_pane_g2

0x0001,

0xf2ec,	// (0x0004ee87) call_type_pane_g

0xd8d0,	// (0x0004d46b) bg_popup_sub_pane_cp02

0xe45c,	// (0x0004dff7) listscroll_popup_wml_pane

0xe464,	// (0x0004dfff) list_wml_pane

0xe46e,	// (0x0004e009) scroll_pane_cp013

0xe479,	// (0x0004e014) list_single_graphic_popup_wml_pane_ParamLimits

0xe479,	// (0x0004e014) list_single_graphic_popup_wml_pane

0xdb43,	// (0x0004d6de) list_single_graphic_popup_wml_pane_g1

0xe48d,	// (0x0004e028) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x0004ee8c) list_single_graphic_popup_wml_pane_g

0xe495,	// (0x0004e030) list_single_graphic_popup_wml_pane_t1

0xe4ab,	// (0x0004e046) aid_call_pane

0xdb23,	// (0x0004d6be) popup_clock_analogue_window_g1

0xdb23,	// (0x0004d6be) popup_clock_analogue_window_g2

0xac81,	// (0x0004a81c) popup_clock_analogue_window_g3

0xac81,	// (0x0004a81c) popup_clock_analogue_window_g4

0xdb43,	// (0x0004d6de) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x0004ee91) popup_clock_analogue_window_g

0xac89,	// (0x0004a824) popup_clock_analogue_window_t1

0xac97,	// (0x0004a832) clock_digital_number_pane_ParamLimits

0xac97,	// (0x0004a832) clock_digital_number_pane

0xaca3,	// (0x0004a83e) clock_digital_number_pane_cp02_ParamLimits

0xaca3,	// (0x0004a83e) clock_digital_number_pane_cp02

0xacaf,	// (0x0004a84a) clock_digital_number_pane_cp03_ParamLimits

0xacaf,	// (0x0004a84a) clock_digital_number_pane_cp03

0xacbb,	// (0x0004a856) clock_digital_number_pane_cp04_ParamLimits

0xacbb,	// (0x0004a856) clock_digital_number_pane_cp04

0xacc7,	// (0x0004a862) clock_digital_separator_pane_ParamLimits

0xacc7,	// (0x0004a862) clock_digital_separator_pane

0xacd3,	// (0x0004a86e) popup_clock_digital_window_t1

0xdb43,	// (0x0004d6de) clock_digital_number_pane_g1

0xdb43,	// (0x0004d6de) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x0004ee11) clock_digital_number_pane_g

0xdb43,	// (0x0004d6de) clock_digital_separator_pane_g1

0xdb43,	// (0x0004d6de) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x0004ee11) clock_digital_separator_pane_g

0xd8d0,	// (0x0004d46b) bg_popup_window_pane_cp04

0xe4b3,	// (0x0004e04e) heading_pane_cp03

0xddb6,	// (0x0004d951) listscroll_popup_gms_pane

0xd8d0,	// (0x0004d46b) grid_large_graphic_popup_pane

0xe4bc,	// (0x0004e057) listscroll_popup_gms_pane_g1

0xe4c5,	// (0x0004e060) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x0004ee9c) listscroll_popup_gms_pane_g

0xe4ce,	// (0x0004e069) scroll_pane_cp014

0xd4ad,	// (0x0004d048) cell_large_graphic_popup_pane_ParamLimits

0xd4ad,	// (0x0004d048) cell_large_graphic_popup_pane

0xdba6,	// (0x0004d741) cell_large_graphic_popup_pane_g1_ParamLimits

0xdba6,	// (0x0004d741) cell_large_graphic_popup_pane_g1

0xe4d7,	// (0x0004e072) cell_large_graphic_popup_pane_g2_ParamLimits

0xe4d7,	// (0x0004e072) cell_large_graphic_popup_pane_g2

0xe4e5,	// (0x0004e080) cell_large_graphic_popup_pane_g3_ParamLimits

0xe4e5,	// (0x0004e080) cell_large_graphic_popup_pane_g3

0xe4f3,	// (0x0004e08e) cell_large_graphic_popup_pane_g4_ParamLimits

0xe4f3,	// (0x0004e08e) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x0004eea1) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x0004eea1) cell_large_graphic_popup_pane_g

0xd8d0,	// (0x0004d46b) grid_highlight_pane_cp010

0xdb43,	// (0x0004d6de) bg_popup_call_pane_g1

0xe504,	// (0x0004e09f) list_single_graphic_popup_conf_pane_ParamLimits

0xe504,	// (0x0004e09f) list_single_graphic_popup_conf_pane

0xe516,	// (0x0004e0b1) list_highlight_pane_cp01

0xe51f,	// (0x0004e0ba) list_single_graphic_popup_conf_pane_g1

0xe527,	// (0x0004e0c2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x0004eeaa) list_single_graphic_popup_conf_pane_g

0xe52f,	// (0x0004e0ca) list_single_graphic_popup_conf_pane_t1

0xe53d,	// (0x0004e0d8) linegrid_cams_pane_g1

0x3784,	// (0x0004331f) linegrid_cams_pane_g2

0xdd9c,	// (0x0004d937) linegrid_cams_pane_g3

0xe546,	// (0x0004e0e1) linegrid_cams_pane_g4

0x378d,	// (0x00043328) linegrid_cams_pane_g5

0x3796,	// (0x00043331) linegrid_cams_pane_g6

0xdda5,	// (0x0004d940) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x0004eeaf) linegrid_cams_pane_g

0xe54f,	// (0x0004e0ea) popup_clock_analogue_window

0xe54f,	// (0x0004e0ea) popup_clock_digital_window

0xd8d0,	// (0x0004d46b) popup_phob_thumbnail_window

0xdb43,	// (0x0004d6de) call_video_uplink_pane_g1

0xe558,	// (0x0004e0f3) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x0004eebe) call_video_uplink_pane_g

0xe560,	// (0x0004e0fb) video_uplink_pane

0xe568,	// (0x0004e103) mce_image_pane_g1

0x37a1,	// (0x0004333c) mce_image_pane_g2

0x37ab,	// (0x00043346) mce_image_pane_g3

0x37b5,	// (0x00043350) mce_image_pane_g4

0x37bd,	// (0x00043358) mce_image_pane_g5

0x0004,

0xf328,	// (0x0004eec3) mce_image_pane_g

0xe572,	// (0x0004e10d) control_top_pane_stacon_cp01_ParamLimits

0xe572,	// (0x0004e10d) control_top_pane_stacon_cp01

0xe586,	// (0x0004e121) uni_indicator_pane_stacon_cp01_ParamLimits

0xe586,	// (0x0004e121) uni_indicator_pane_stacon_cp01

0xe5ac,	// (0x0004e147) bg_popup_sub_pane_cp03

0x37c5,	// (0x00043360) chi_dic_find_pane

0x37cd,	// (0x00043368) listscroll_chi_dic_pane

0x37d6,	// (0x00043371) main_pane_chidic_g1

0x37e9,	// (0x00043384) chi_dic_find_pane_t1

0xe5b6,	// (0x0004e151) find_chidic_pane

0xe5bf,	// (0x0004e15a) chi_dic_list_pane_ParamLimits

0xe5bf,	// (0x0004e15a) chi_dic_list_pane

0xe5d0,	// (0x0004e16b) scroll_pane_cp020

0x37f7,	// (0x00043392) find_chidic_pane_t1

0xd8d0,	// (0x0004d46b) input_focus_pane_cp06

0x3806,	// (0x000433a1) list_chi_dic_pane_ParamLimits

0x3806,	// (0x000433a1) list_chi_dic_pane

0x3818,	// (0x000433b3) list_chi_dic_pane_t1_ParamLimits

0x3818,	// (0x000433b3) list_chi_dic_pane_t1

0xd8d0,	// (0x0004d46b) list_highlight_pane_cp020

0xe5d8,	// (0x0004e173) bg_cale_heading_pane_g1

0x382b,	// (0x000433c6) bg_cale_heading_pane_g2

0x3833,	// (0x000433ce) bg_cale_heading_pane_g3

0x383b,	// (0x000433d6) bg_cale_heading_pane_g4

0x3845,	// (0x000433e0) bg_cale_heading_pane_g5

0x384f,	// (0x000433ea) bg_cale_heading_pane_g6

0x3857,	// (0x000433f2) bg_cale_heading_pane_g7

0x385f,	// (0x000433fa) bg_cale_heading_pane_g8

0x3869,	// (0x00043404) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x0004eece) bg_cale_heading_pane_g

0xe5d8,	// (0x0004e173) bg_cale_side_pane_g1

0x3873,	// (0x0004340e) bg_cale_side_pane_g2

0x387d,	// (0x00043418) bg_cale_side_pane_g3

0x3887,	// (0x00043422) bg_cale_side_pane_g4

0x3891,	// (0x0004342c) bg_cale_side_pane_g5

0x389b,	// (0x00043436) bg_cale_side_pane_g6

0x38a5,	// (0x00043440) bg_cale_side_pane_g7

0x38af,	// (0x0004344a) bg_cale_side_pane_g8

0x38b7,	// (0x00043452) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x0004eee1) bg_cale_side_pane_g

0x38bf,	// (0x0004345a) popup_call_status_window_ParamLimits

0x38bf,	// (0x0004345a) popup_call_status_window

0xe5e0,	// (0x0004e17b) stacon_top_pane

0xe5e8,	// (0x0004e183) status_pane_ParamLimits

0xe5e8,	// (0x0004e183) status_pane

0xe5fd,	// (0x0004e198) status_small_pane

0xe605,	// (0x0004e1a0) control_pane

0xd8d0,	// (0x0004d46b) stacon_bottom_pane

0xe60d,	// (0x0004e1a8) list_single_mce_smart_pane_t1_ParamLimits

0xe60d,	// (0x0004e1a8) list_single_mce_smart_pane_t1

0xe620,	// (0x0004e1bb) list_single_mce_smart_pane_t2_ParamLimits

0xe620,	// (0x0004e1bb) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x0004eef4) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x0004eef4) list_single_mce_smart_pane_t

0x390c,	// (0x000434a7) compass_pane

0x3917,	// (0x000434b2) main_location2_pane_t1

0x392d,	// (0x000434c8) main_location2_pane_t2

0x3943,	// (0x000434de) main_location2_pane_t3

0x0003,

0xf35e,	// (0x0004eef9) main_location2_pane_t

0xe63f,	// (0x0004e1da) compass_pane_g1_ParamLimits

0xe63f,	// (0x0004e1da) compass_pane_g1

0x3991,	// (0x0004352c) compass_pane_t1

0x39a0,	// (0x0004353b) compass_pane_t2

0x0005,

0xf367,	// (0x0004ef02) compass_pane_t

0x39eb,	// (0x00043586) text_secondary_cp61

0xe653,	// (0x0004e1ee) navi_pane_cams_g5

0xe676,	// (0x0004e211) navi_pane_im_t1

0xe684,	// (0x0004e21f) navi_pane_mp_g1_ParamLimits

0xe684,	// (0x0004e21f) navi_pane_mp_g1

0xe698,	// (0x0004e233) navi_pane_mp_g2_ParamLimits

0xe698,	// (0x0004e233) navi_pane_mp_g2

0xe6a4,	// (0x0004e23f) navi_pane_mp_g3_ParamLimits

0xe6a4,	// (0x0004e23f) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x0004ef16) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x0004ef16) navi_pane_mp_g

0xe6b0,	// (0x0004e24b) navi_pane_mp_t1

0xe6be,	// (0x0004e259) navi_pane_mp_t2

0x0002,

0xf382,	// (0x0004ef1d) navi_pane_mp_t

0xe6fa,	// (0x0004e295) navi_pane_vt_g1

0xe6b0,	// (0x0004e24b) navi_pane_vt_t1

0xe702,	// (0x0004e29d) navi_slider_pane

0xddb6,	// (0x0004d951) zooming_pane

0xe70a,	// (0x0004e2a5) navi_slider_pane_g1

0xacf0,	// (0x0004a88b) navi_slider_pane_g2

0x0006,

0xf389,	// (0x0004ef24) navi_slider_pane_g

0xe72e,	// (0x0004e2c9) aid_levels_zoom

0xe736,	// (0x0004e2d1) zooming_pane_g1

0xe73e,	// (0x0004e2d9) zooming_pane_g2

0xe73e,	// (0x0004e2d9) zooming_pane_g3

0x0002,

0xf398,	// (0x0004ef33) zooming_pane_g

0xe746,	// (0x0004e2e1) level_10_zoom

0xe74f,	// (0x0004e2ea) level_11_zoom

0xe758,	// (0x0004e2f3) level_1_zoom

0xe761,	// (0x0004e2fc) level_2_zoom

0xe76a,	// (0x0004e305) level_3_zoom

0xe773,	// (0x0004e30e) level_4_zoom

0xe77c,	// (0x0004e317) level_5_zoom

0xe785,	// (0x0004e320) level_6_zoom

0xe78e,	// (0x0004e329) level_7_zoom

0xe797,	// (0x0004e332) level_8_zoom

0xe7a0,	// (0x0004e33b) level_9_zoom

0xe7b1,	// (0x0004e34c) popup_phob_thumbnail_window_g1

0xe7b9,	// (0x0004e354) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x0004ef3a) popup_phob_thumbnail_window_g

0x4f3a,	// (0x00044ad5) level_1_location

0x4f42,	// (0x00044add) level_2_location

0x4f4a,	// (0x00044ae5) level_3_location

0x4f54,	// (0x00044aef) level_4_location

0xddb6,	// (0x0004d951) level_5_location

0x3b34,	// (0x000436cf) mce_icon_pane_g1

0x3b3e,	// (0x000436d9) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x0004ef3f) mce_icon_pane_g

0xf055,	// (0x0004ebf0) main_mup_pane_g1_ParamLimits

0xf055,	// (0x0004ebf0) main_mup_pane_g1

0xf055,	// (0x0004ebf0) main_mup_pane_g2_ParamLimits

0xf055,	// (0x0004ebf0) main_mup_pane_g2

0xf055,	// (0x0004ebf0) main_mup_pane_g3_ParamLimits

0xf055,	// (0x0004ebf0) main_mup_pane_g3

0xf055,	// (0x0004ebf0) main_mup_pane_g4_ParamLimits

0xf055,	// (0x0004ebf0) main_mup_pane_g4

0xf055,	// (0x0004ebf0) main_mup_pane_g5_ParamLimits

0xf055,	// (0x0004ebf0) main_mup_pane_g5

0xf055,	// (0x0004ebf0) main_mup_pane_g6_ParamLimits

0xf055,	// (0x0004ebf0) main_mup_pane_g6

0xf055,	// (0x0004ebf0) main_mup_pane_g7_ParamLimits

0xf055,	// (0x0004ebf0) main_mup_pane_g7

0xf055,	// (0x0004ebf0) main_mup_pane_g8_ParamLimits

0xf055,	// (0x0004ebf0) main_mup_pane_g8

0xf055,	// (0x0004ebf0) main_mup_pane_g9_ParamLimits

0xf055,	// (0x0004ebf0) main_mup_pane_g9

0xf055,	// (0x0004ebf0) main_mup_pane_g10_ParamLimits

0xf055,	// (0x0004ebf0) main_mup_pane_g10

0xf055,	// (0x0004ebf0) main_mup_pane_g11_ParamLimits

0xf055,	// (0x0004ebf0) main_mup_pane_g11

0xdba6,	// (0x0004d741) main_mup_pane_g12_ParamLimits

0xdba6,	// (0x0004d741) main_mup_pane_g12

0xf055,	// (0x0004ebf0) main_mup_pane_g13_ParamLimits

0xf055,	// (0x0004ebf0) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x0004ef44) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x0004ef44) main_mup_pane_g

0xf063,	// (0x0004ebfe) main_mup_pane_t1_ParamLimits

0xf063,	// (0x0004ebfe) main_mup_pane_t1

0xf063,	// (0x0004ebfe) main_mup_pane_t2_ParamLimits

0xf063,	// (0x0004ebfe) main_mup_pane_t2

0xf063,	// (0x0004ebfe) main_mup_pane_t3_ParamLimits

0xf063,	// (0x0004ebfe) main_mup_pane_t3

0xddec,	// (0x0004d987) main_mup_pane_t4_ParamLimits

0xddec,	// (0x0004d987) main_mup_pane_t4

0xddec,	// (0x0004d987) main_mup_pane_t5_ParamLimits

0xddec,	// (0x0004d987) main_mup_pane_t5

0xddd8,	// (0x0004d973) main_mup_pane_t6_ParamLimits

0xddd8,	// (0x0004d973) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x0004ef5f) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x0004ef5f) main_mup_pane_t

0xd4ad,	// (0x0004d048) mup_progress_pane_ParamLimits

0xd4ad,	// (0x0004d048) mup_progress_pane

0xf077,	// (0x0004ec12) mup_visualizer_pane_ParamLimits

0xf077,	// (0x0004ec12) mup_visualizer_pane

0xf077,	// (0x0004ec12) mup_volume_pane_ParamLimits

0xf077,	// (0x0004ec12) mup_volume_pane

0xdbb4,	// (0x0004d74f) mup_visualizer_pane_g1_ParamLimits

0xdbb4,	// (0x0004d74f) mup_visualizer_pane_g1

0xe7c1,	// (0x0004e35c) mup_visualizer_pane_g2_ParamLimits

0xe7c1,	// (0x0004e35c) mup_visualizer_pane_g2

0xdba6,	// (0x0004d741) mup_visualizer_pane_g3_ParamLimits

0xdba6,	// (0x0004d741) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x0004ef6c) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x0004ef6c) mup_visualizer_pane_g

0xde00,	// (0x0004d99b) mup_volume_pane_g1

0xde00,	// (0x0004d99b) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x0004ef73) mup_volume_pane_g

0xde00,	// (0x0004d99b) mup_progress_pane_g1

0xde00,	// (0x0004d99b) mup_progress_pane_g2

0xde00,	// (0x0004d99b) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x0004ef78) mup_progress_pane_g

0xd8d0,	// (0x0004d46b) bg_popup_window_pane_cp05

0xe7cf,	// (0x0004e36a) heading_pane_cp02_ParamLimits

0xe7cf,	// (0x0004e36a) heading_pane_cp02

0xe7eb,	// (0x0004e386) list_popup_blid_pane

0xe7f3,	// (0x0004e38e) list_blid_sat_info_pane_ParamLimits

0xe7f3,	// (0x0004e38e) list_blid_sat_info_pane

0xe806,	// (0x0004e3a1) list_blid_sat_info_pane_g1

0xe80e,	// (0x0004e3a9) list_blid_sat_info_pane_t1

0x3c52,	// (0x000437ed) mup_equalizer_pane_ParamLimits

0x3c52,	// (0x000437ed) mup_equalizer_pane

0x3c73,	// (0x0004380e) mup_equalizer_pane_cp1_ParamLimits

0x3c73,	// (0x0004380e) mup_equalizer_pane_cp1

0x3c94,	// (0x0004382f) mup_equalizer_pane_cp2_ParamLimits

0x3c94,	// (0x0004382f) mup_equalizer_pane_cp2

0x3cb9,	// (0x00043854) mup_equalizer_pane_cp3_ParamLimits

0x3cb9,	// (0x00043854) mup_equalizer_pane_cp3

0x3ce2,	// (0x0004387d) mup_equalizer_pane_cp4_ParamLimits

0x3ce2,	// (0x0004387d) mup_equalizer_pane_cp4

0x3d0b,	// (0x000438a6) mup_equalizer_pane_cp5

0x3d23,	// (0x000438be) mup_equalizer_pane_cp6

0x3d3b,	// (0x000438d6) mup_equalizer_pane_cp7

0x4dde,	// (0x00044979) bg_popup_call_poc_act_pane_g9

0x4de6,	// (0x00044981) bg_popup_call_poc_act_pane_g10

0x4dee,	// (0x00044989) bg_popup_call_poc_act_pane_g11

0x000a,

0xdb2b,	// (0x0004d6c6) mup_scale_pane

0xdb43,	// (0x0004d6de) mup_scale_pane_g1

0xe81c,	// (0x0004e3b7) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x0004ef94) mup_scale_pane_g

0xe840,	// (0x0004e3db) msg_data_pane

0xe848,	// (0x0004e3e3) scroll_pane_cp017

0x0e20,	// (0x000409bb) bg_list_pane_cp04_ParamLimits

0x0e20,	// (0x000409bb) bg_list_pane_cp04

0xe850,	// (0x0004e3eb) msg_data_pane_g1

0x3d65,	// (0x00043900) msg_data_pane_g2

0x3d6f,	// (0x0004390a) msg_data_pane_g3

0x3d79,	// (0x00043914) msg_data_pane_g4

0x3d81,	// (0x0004391c) msg_data_pane_g5

0x3d89,	// (0x00043924) msg_data_pane_g6

0x3d91,	// (0x0004392c) msg_data_pane_g7

0x0006,

0xf408,	// (0x0004efa3) msg_data_pane_g

0x0e46,	// (0x000409e1) msg_text_pane_ParamLimits

0x0e46,	// (0x000409e1) msg_text_pane

0x3d99,	// (0x00043934) qrid_highlight_pane_cp011_ParamLimits

0x3d99,	// (0x00043934) qrid_highlight_pane_cp011

0xd8d0,	// (0x0004d46b) msg_body_pane

0xd8d0,	// (0x0004d46b) msg_header_pane

0xe861,	// (0x0004e3fc) input_focus_pane_cp07

0x0e8f,	// (0x00040a2a) msg_header_pane_t1_ParamLimits

0x0e8f,	// (0x00040a2a) msg_header_pane_t1

0x0ea5,	// (0x00040a40) msg_header_pane_t2_ParamLimits

0x0ea5,	// (0x00040a40) msg_header_pane_t2

0x0001,

0xf41c,	// (0x0004efb7) msg_header_pane_t_ParamLimits

0xf41c,	// (0x0004efb7) msg_header_pane_t

0xe876,	// (0x0004e411) msg_body_pane_g1

0x0ebc,	// (0x00040a57) msg_body_pane_t1_ParamLimits

0x0ebc,	// (0x00040a57) msg_body_pane_t1

0x0eed,	// (0x00040a88) msg_body_pane_t2_ParamLimits

0x0eed,	// (0x00040a88) msg_body_pane_t2

0x0eff,	// (0x00040a9a) msg_body_pane_t3_ParamLimits

0x0eff,	// (0x00040a9a) msg_body_pane_t3

0x0002,

0xf421,	// (0x0004efbc) msg_body_pane_t_ParamLimits

0xf421,	// (0x0004efbc) msg_body_pane_t

0x3de9,	// (0x00043984) main_viewer_pane_g1_ParamLimits

0x3de9,	// (0x00043984) main_viewer_pane_g1

0x3df7,	// (0x00043992) main_viewer_pane_g2_ParamLimits

0x3df7,	// (0x00043992) main_viewer_pane_g2

0x3e05,	// (0x000439a0) main_viewer_pane_g3_ParamLimits

0x3e05,	// (0x000439a0) main_viewer_pane_g3

0x3e14,	// (0x000439af) main_viewer_pane_g4_ParamLimits

0x3e14,	// (0x000439af) main_viewer_pane_g4

0xad1a,	// (0x0004a8b5) main_viewer_pane_g5_ParamLimits

0xad1a,	// (0x0004a8b5) main_viewer_pane_g5

0xad1a,	// (0x0004a8b5) main_viewer_pane_g7_ParamLimits

0xad1a,	// (0x0004a8b5) main_viewer_pane_g7

0xad2c,	// (0x0004a8c7) main_viewer_pane_g8_ParamLimits

0xad2c,	// (0x0004a8c7) main_viewer_pane_g8

0x0007,

0xf431,	// (0x0004efcc) main_viewer_pane_g_ParamLimits

0xf431,	// (0x0004efcc) main_viewer_pane_g

0xe87e,	// (0x0004e419) viewer_content_pane_ParamLimits

0xe87e,	// (0x0004e419) viewer_content_pane

0x3e52,	// (0x000439ed) main_postcard_pane_g1_ParamLimits

0x3e52,	// (0x000439ed) main_postcard_pane_g1

0x3e68,	// (0x00043a03) main_postcard_pane_g2_ParamLimits

0x3e68,	// (0x00043a03) main_postcard_pane_g2

0x3e7e,	// (0x00043a19) main_postcard_pane_g3_ParamLimits

0x3e7e,	// (0x00043a19) main_postcard_pane_g3

0x0005,

0xf442,	// (0x0004efdd) main_postcard_pane_g_ParamLimits

0xf442,	// (0x0004efdd) main_postcard_pane_g

0x3e95,	// (0x00043a30) main_postcard_pane_g4

0x5574,	// (0x0004510f) smil_status_volume_pane_g2

0x3ed8,	// (0x00043a73) postcard_pane_ParamLimits

0x3ed8,	// (0x00043a73) postcard_pane

0xe88c,	// (0x0004e427) postcard_pane_g1_ParamLimits

0xe88c,	// (0x0004e427) postcard_pane_g1

0x3f28,	// (0x00043ac3) postcard_pane_g2_ParamLimits

0x3f28,	// (0x00043ac3) postcard_pane_g2

0x3f34,	// (0x00043acf) postcard_pane_g3_ParamLimits

0x3f34,	// (0x00043acf) postcard_pane_g3

0xe89a,	// (0x0004e435) postcard_pane_g4_ParamLimits

0xe89a,	// (0x0004e435) postcard_pane_g4

0x3f40,	// (0x00043adb) postcard_pane_g5_ParamLimits

0x3f40,	// (0x00043adb) postcard_pane_g5

0x3f55,	// (0x00043af0) postcard_pane_g6_ParamLimits

0x3f55,	// (0x00043af0) postcard_pane_g6

0xe88c,	// (0x0004e427) postcard_pane_g7_ParamLimits

0xe88c,	// (0x0004e427) postcard_pane_g7

0x0006,

0xf44f,	// (0x0004efea) postcard_pane_g_ParamLimits

0xf44f,	// (0x0004efea) postcard_pane_g

0x3f6d,	// (0x00043b08) main_mp2_pane_g1_ParamLimits

0x3f6d,	// (0x00043b08) main_mp2_pane_g1

0x3f7b,	// (0x00043b16) main_mp2_pane_g2_ParamLimits

0x3f7b,	// (0x00043b16) main_mp2_pane_g2

0x3f87,	// (0x00043b22) main_mp2_pane_g3_ParamLimits

0x3f87,	// (0x00043b22) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x0004eff9) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x0004eff9) main_mp2_pane_g

0x3f93,	// (0x00043b2e) main_mp2_pane_t1_ParamLimits

0x3f93,	// (0x00043b2e) main_mp2_pane_t1

0x3faa,	// (0x00043b45) main_mp2_pane_t2_ParamLimits

0x3faa,	// (0x00043b45) main_mp2_pane_t2

0x3fbe,	// (0x00043b59) main_mp2_pane_t3_ParamLimits

0x3fbe,	// (0x00043b59) main_mp2_pane_t3

0x0002,

0xf465,	// (0x0004f000) main_mp2_pane_t_ParamLimits

0xf465,	// (0x0004f000) main_mp2_pane_t

0xe8a8,	// (0x0004e443) pec_content_pane_ParamLimits

0xe8a8,	// (0x0004e443) pec_content_pane

0xdf65,	// (0x0004db00) scroll_pane_cp015

0xe8ba,	// (0x0004e455) pec_attribute_pane_ParamLimits

0xe8ba,	// (0x0004e455) pec_attribute_pane

0x3fd0,	// (0x00043b6b) pec_content_pane_g1_ParamLimits

0x3fd0,	// (0x00043b6b) pec_content_pane_g1

0xe8ca,	// (0x0004e465) pec_content_pane_t1_ParamLimits

0xe8ca,	// (0x0004e465) pec_content_pane_t1

0xe8dc,	// (0x0004e477) pec_content_pane_t2_ParamLimits

0xe8dc,	// (0x0004e477) pec_content_pane_t2

0x0001,

0xf46c,	// (0x0004f007) pec_content_pane_t_ParamLimits

0xf46c,	// (0x0004f007) pec_content_pane_t

0x3fdc,	// (0x00043b77) list_single_graphic_pane_cp01_ParamLimits

0x3fdc,	// (0x00043b77) list_single_graphic_pane_cp01

0xdb2b,	// (0x0004d6c6) bg_popup_sub_pane_cp04

0xe8ee,	// (0x0004e489) popup_mup_playback_window_g1

0xe8fa,	// (0x0004e495) popup_mup_playback_window_t1

0xe90f,	// (0x0004e4aa) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x0004f00c) popup_mup_playback_window_t

0xe946,	// (0x0004e4e1) main_image_pane_g1_ParamLimits

0xe946,	// (0x0004e4e1) main_image_pane_g1

0xe989,	// (0x0004e524) scroll_pane_cp018_ParamLimits

0xe989,	// (0x0004e524) scroll_pane_cp018

0xe9a1,	// (0x0004e53c) scroll_pane_cp016_ParamLimits

0xe9a1,	// (0x0004e53c) scroll_pane_cp016

0x40ae,	// (0x00043c49) smil2_image_pane_ParamLimits

0x40ae,	// (0x00043c49) smil2_image_pane

0x40e4,	// (0x00043c7f) smil2_root_pane_ParamLimits

0x40e4,	// (0x00043c7f) smil2_root_pane

0x411c,	// (0x00043cb7) smil2_text_pane_ParamLimits

0x411c,	// (0x00043cb7) smil2_text_pane

0xd8d0,	// (0x0004d46b) bg_list_pane_cp06

0xe9dd,	// (0x0004e578) grid_radio_pane

0xd8d0,	// (0x0004d46b) bg_popup_window_pane_cp06

0xe9e7,	// (0x0004e582) main_fmradio_pane_t1

0x4e81,	// (0x00044a1c) heading_pane_cp04

0xe9f5,	// (0x0004e590) main_fmradio_pane_t2

0x4e89,	// (0x00044a24) popup_cale_lunar_info_window_g1

0xea03,	// (0x0004e59e) main_fmradio_pane_t3

0x4e91,	// (0x00044a2c) popup_cale_lunar_info_window_g2

0xea13,	// (0x0004e5ae) main_fmradio_pane_t4

0x0001,

0xea21,	// (0x0004e5bc) main_fmradio_pane_t5

0x0004,

0xf551,	// (0x0004f0ec) popup_cale_lunar_info_window_g

0xf486,	// (0x0004f021) main_fmradio_pane_t

0xea2f,	// (0x0004e5ca) wait_bar_pane_cp03

0xea37,	// (0x0004e5d2) cell_fmradio_pane_ParamLimits

0xea37,	// (0x0004e5d2) cell_fmradio_pane

0xe88c,	// (0x0004e427) cell_fmradio_pane_g1_ParamLimits

0xe88c,	// (0x0004e427) cell_fmradio_pane_g1

0xd8d0,	// (0x0004d46b) grid_highlight_pane_cp011

0xea4c,	// (0x0004e5e7) poc_content_pane_ParamLimits

0xea4c,	// (0x0004e5e7) poc_content_pane

0xea5e,	// (0x0004e5f9) scroll_pane_cp019

0x41ac,	// (0x00043d47) popup_call_poc_act_window_ParamLimits

0x41ac,	// (0x00043d47) popup_call_poc_act_window

0x41d0,	// (0x00043d6b) popup_call_poc_inact_window_ParamLimits

0x41d0,	// (0x00043d6b) popup_call_poc_inact_window

0xf528,	// (0x0004f0c3) bg_popup_call_poc_act_pane_g

0x4d66,	// (0x00044901) bg_popup_call_poc_inact_pane_g1

0x4d6e,	// (0x00044909) bg_popup_call_poc_inact_pane_g2

0xea66,	// (0x0004e601) popup_call_poc_act_window_g2

0x4d76,	// (0x00044911) bg_popup_call_poc_inact_pane_g3

0x4d7e,	// (0x00044919) bg_popup_call_poc_inact_pane_g4

0x4d86,	// (0x00044921) bg_popup_call_poc_inact_pane_g5

0xea6e,	// (0x0004e609) popup_call_poc_act_window_t1_ParamLimits

0xea6e,	// (0x0004e609) popup_call_poc_act_window_t1

0xea96,	// (0x0004e631) popup_call_poc_act_window_t2_ParamLimits

0xea96,	// (0x0004e631) popup_call_poc_act_window_t2

0xeabe,	// (0x0004e659) popup_call_poc_act_window_t3_ParamLimits

0xeabe,	// (0x0004e659) popup_call_poc_act_window_t3

0xeae6,	// (0x0004e681) popup_call_poc_act_window_t4_ParamLimits

0xeae6,	// (0x0004e681) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x0004f02c) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x0004f02c) popup_call_poc_act_window_t

0x4d8e,	// (0x00044929) bg_popup_call_poc_inact_pane_g6

0x4d96,	// (0x00044931) bg_popup_call_poc_inact_pane_g7

0x4d9e,	// (0x00044939) bg_popup_call_poc_inact_pane_g8

0xeaf8,	// (0x0004e693) popup_call_poc_inact_window_g2

0x4da6,	// (0x00044941) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf515,	// (0x0004f0b0) bg_popup_call_poc_inact_pane_g

0xeb00,	// (0x0004e69b) popup_call_poc_inact_window_t1_ParamLimits

0xeb00,	// (0x0004e69b) popup_call_poc_inact_window_t1

0xeb15,	// (0x0004e6b0) popup_call_poc_inact_window_t2_ParamLimits

0xeb15,	// (0x0004e6b0) popup_call_poc_inact_window_t2

0xeb2a,	// (0x0004e6c5) popup_call_poc_inact_window_t3_ParamLimits

0xeb2a,	// (0x0004e6c5) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x0004f035) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x0004f035) popup_call_poc_inact_window_t

0x5459,	// (0x00044ff4) context_pane_ParamLimits

0x54c3,	// (0x0004505e) signal_pane_ParamLimits

0xddb6,	// (0x0004d951) main_call2_pane

0xad75,	// (0x0004a910) popup_phob_thumbnail2_window_ParamLimits

0xad75,	// (0x0004a910) popup_phob_thumbnail2_window

0xad02,	// (0x0004a89d) aid_hotspot_pointer_arrow_pane

0xad0a,	// (0x0004a8a5) aid_hotspot_pointer_hand_pane

0x4f02,	// (0x00044a9d) phob_pre_status_pane_g5

0xdb4d,	// (0x0004d6e8) cams_zoom_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) image_vga_pane_ParamLimits

0xdba6,	// (0x0004d741) main_camera_pane_g1_ParamLimits

0xdba6,	// (0x0004d741) main_camera_pane_g2_ParamLimits

0xdba6,	// (0x0004d741) main_camera_pane_g3_ParamLimits

0xdba6,	// (0x0004d741) main_camera_pane_g4_ParamLimits

0xdba6,	// (0x0004d741) main_camera_pane_g5_ParamLimits

0xdba6,	// (0x0004d741) main_camera_pane_g6_ParamLimits

0xdba6,	// (0x0004d741) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0004ed60) main_camera_pane_g_ParamLimits

0xddec,	// (0x0004d987) main_camera_pane_t1_ParamLimits

0xddec,	// (0x0004d987) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0004ed71) main_camera_pane_t_ParamLimits

0xdb2b,	// (0x0004d6c6) bg_popup_preview_window_pane_cp01_ParamLimits

0xdb2b,	// (0x0004d6c6) bg_popup_preview_window_pane_cp01

0xeb3f,	// (0x0004e6da) popup_phob_thumbnail2_window_g1_ParamLimits

0xeb3f,	// (0x0004e6da) popup_phob_thumbnail2_window_g1

0xd8d0,	// (0x0004d46b) call2_cli_visual_pane

0x4204,	// (0x00043d9f) popup_call2_audio_conf_window_ParamLimits

0x4204,	// (0x00043d9f) popup_call2_audio_conf_window

0x422c,	// (0x00043dc7) popup_call2_audio_first_window_ParamLimits

0x422c,	// (0x00043dc7) popup_call2_audio_first_window

0x42c2,	// (0x00043e5d) popup_call2_audio_in_window_ParamLimits

0x42c2,	// (0x00043e5d) popup_call2_audio_in_window

0x430e,	// (0x00043ea9) popup_call2_audio_out_window_ParamLimits

0x430e,	// (0x00043ea9) popup_call2_audio_out_window

0x4380,	// (0x00043f1b) popup_call2_audio_second_window_ParamLimits

0x4380,	// (0x00043f1b) popup_call2_audio_second_window

0x43e6,	// (0x00043f81) popup_call2_audio_wait_window_ParamLimits

0x43e6,	// (0x00043f81) popup_call2_audio_wait_window

0xd8d0,	// (0x0004d46b) bg_popup_call2_act_pane_cp03

0xdb0d,	// (0x0004d6a8) list_conf_pane_cp

0xeb4b,	// (0x0004e6e6) popup_call2_audio_conf_window_t1

0xeb59,	// (0x0004e6f4) list_single_graphic_popup_conf2_pane_ParamLimits

0xeb59,	// (0x0004e6f4) list_single_graphic_popup_conf2_pane

0xe516,	// (0x0004e0b1) list_highlight_pane_cp04

0xeb6c,	// (0x0004e707) list_single_graphic_popup_conf2_pane_g1

0xe527,	// (0x0004e0c2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x0004f03c) list_single_graphic_popup_conf2_pane_g

0xeb76,	// (0x0004e711) list_single_graphic_popup_conf2_pane_t1

0xeb84,	// (0x0004e71f) bg_popup_call2_act_pane_cp01_ParamLimits

0xeb84,	// (0x0004e71f) bg_popup_call2_act_pane_cp01

0xec0e,	// (0x0004e7a9) call_type_pane_cp05_ParamLimits

0xec0e,	// (0x0004e7a9) call_type_pane_cp05

0xec62,	// (0x0004e7fd) popup_call2_audio_second_window_g1_ParamLimits

0xec62,	// (0x0004e7fd) popup_call2_audio_second_window_g1

0xecb6,	// (0x0004e851) popup_call2_audio_second_window_g2_ParamLimits

0xecb6,	// (0x0004e851) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x0004f041) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x0004f041) popup_call2_audio_second_window_g

0xed1b,	// (0x0004e8b6) popup_call2_audio_second_window_t1_ParamLimits

0xed1b,	// (0x0004e8b6) popup_call2_audio_second_window_t1

0xedd6,	// (0x0004e971) popup_call2_audio_second_window_t2_ParamLimits

0xedd6,	// (0x0004e971) popup_call2_audio_second_window_t2

0xee29,	// (0x0004e9c4) popup_call2_audio_second_window_t3_ParamLimits

0xee29,	// (0x0004e9c4) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x0004f048) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x0004f048) popup_call2_audio_second_window_t

0xd8d0,	// (0x0004d46b) bg_popup_call2_in_pane_cp02

0xd8da,	// (0x0004d475) call_type_pane_cp04

0x4420,	// (0x00043fbb) popup_call2_audio_wait_window_g1

0x4428,	// (0x00043fc3) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x0004f051) popup_call2_audio_wait_window_g

0xd8f2,	// (0x0004d48d) popup_call2_audio_wait_window_t3

0xef1c,	// (0x0004eab7) bg_popup_call2_act_pane_ParamLimits

0xef1c,	// (0x0004eab7) bg_popup_call2_act_pane

0xefdc,	// (0x0004eb77) call_type_pane_cp03_ParamLimits

0xefdc,	// (0x0004eb77) call_type_pane_cp03

0x4430,	// (0x00043fcb) popup_call2_audio_first_window_g1_ParamLimits

0x4430,	// (0x00043fcb) popup_call2_audio_first_window_g1

0x44a0,	// (0x0004403b) popup_call2_audio_first_window_g2_ParamLimits

0x44a0,	// (0x0004403b) popup_call2_audio_first_window_g2

0x4504,	// (0x0004409f) popup_call2_audio_first_window_g3_ParamLimits

0x4504,	// (0x0004409f) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x0004f056) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x0004f056) popup_call2_audio_first_window_g

0x458c,	// (0x00044127) popup_call2_audio_first_window_t1_ParamLimits

0x458c,	// (0x00044127) popup_call2_audio_first_window_t1

0x468f,	// (0x0004422a) popup_call2_audio_first_window_t4_ParamLimits

0x468f,	// (0x0004422a) popup_call2_audio_first_window_t4

0x4772,	// (0x0004430d) popup_call2_audio_first_window_t5_ParamLimits

0x4772,	// (0x0004430d) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x0004f061) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x0004f061) popup_call2_audio_first_window_t

0xdb23,	// (0x0004d6be) bg_popup_call2_act_pane_g1

0x4e9b,	// (0x00044a36) popup_cale_lunar_info_window_t1

0x4ea9,	// (0x00044a44) popup_cale_lunar_info_window_t2

0x4eb7,	// (0x00044a52) popup_cale_lunar_info_window_t3

0xd8d0,	// (0x0004d46b) bg_popup_call2_bubble_pane

0x4873,	// (0x0004440e) bg_popup_call2_in_pane_cp01_ParamLimits

0x4873,	// (0x0004440e) bg_popup_call2_in_pane_cp01

0xd5ac,	// (0x0004d147) call_type_pane_cp02

0x48bb,	// (0x00044456) popup_call2_audio_out_window_g1_ParamLimits

0x48bb,	// (0x00044456) popup_call2_audio_out_window_g1

0x48e7,	// (0x00044482) popup_call2_audio_out_window_g2_ParamLimits

0x48e7,	// (0x00044482) popup_call2_audio_out_window_g2

0x490f,	// (0x000444aa) popup_call2_audio_out_window_g3_ParamLimits

0x490f,	// (0x000444aa) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x0004f06a) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x0004f06a) popup_call2_audio_out_window_g

0x494a,	// (0x000444e5) popup_call2_audio_out_window_t1_ParamLimits

0x494a,	// (0x000444e5) popup_call2_audio_out_window_t1

0x49a9,	// (0x00044544) popup_call2_audio_out_window_t2_ParamLimits

0x49a9,	// (0x00044544) popup_call2_audio_out_window_t2

0x49fd,	// (0x00044598) popup_call2_audio_out_window_t3_ParamLimits

0x49fd,	// (0x00044598) popup_call2_audio_out_window_t3

0x4a13,	// (0x000445ae) popup_call2_audio_out_window_t4_ParamLimits

0x4a13,	// (0x000445ae) popup_call2_audio_out_window_t4

0x4a29,	// (0x000445c4) popup_call2_audio_out_window_t5_ParamLimits

0x4a29,	// (0x000445c4) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x0004f073) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x0004f073) popup_call2_audio_out_window_t

0x4a8d,	// (0x00044628) bg_popup_call2_in_pane_ParamLimits

0x4a8d,	// (0x00044628) bg_popup_call2_in_pane

0x4ae9,	// (0x00044684) popup_call2_audio_in_window_g1_ParamLimits

0x4ae9,	// (0x00044684) popup_call2_audio_in_window_g1

0x4b21,	// (0x000446bc) popup_call2_audio_in_window_g2_ParamLimits

0x4b21,	// (0x000446bc) popup_call2_audio_in_window_g2

0x4b59,	// (0x000446f4) popup_call2_audio_in_window_g3_ParamLimits

0x4b59,	// (0x000446f4) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x0004f080) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x0004f080) popup_call2_audio_in_window_g

0x4bb1,	// (0x0004474c) popup_call2_audio_in_window_t1_ParamLimits

0x4bb1,	// (0x0004474c) popup_call2_audio_in_window_t1

0x4c31,	// (0x000447cc) popup_call2_audio_in_window_t2_ParamLimits

0x4c31,	// (0x000447cc) popup_call2_audio_in_window_t2

0x4cb1,	// (0x0004484c) popup_call2_audio_in_window_t3_ParamLimits

0x4cb1,	// (0x0004484c) popup_call2_audio_in_window_t3

0x4ccb,	// (0x00044866) popup_call2_audio_in_window_t4_ParamLimits

0x4ccb,	// (0x00044866) popup_call2_audio_in_window_t4

0x4cdd,	// (0x00044878) popup_call2_audio_in_window_t5_ParamLimits

0x4cdd,	// (0x00044878) popup_call2_audio_in_window_t5

0x4cf2,	// (0x0004488d) popup_call2_audio_in_window_t6_ParamLimits

0x4cf2,	// (0x0004488d) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x0004f089) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x0004f089) popup_call2_audio_in_window_t

0xdb23,	// (0x0004d6be) bg_popup_call2_in_pane_g1

0x4ec5,	// (0x00044a60) popup_cale_lunar_info_window_t4

0x0003,

0xf556,	// (0x0004f0f1) popup_cale_lunar_info_window_t

0xdb2b,	// (0x0004d6c6) bg_popup_call2_rect_pane_ParamLimits

0xdb2b,	// (0x0004d6c6) bg_popup_call2_rect_pane

0xd8d0,	// (0x0004d46b) call2_cli_visual_graphic_pane

0xd8d0,	// (0x0004d46b) call2_cli_visual_text_pane

0xad9c,	// (0x0004a937) smil_status_volume_pane_g3

0x0002,

0xdb43,	// (0x0004d6de) call2_cli_visual_graphic_pane_g1

0xdb43,	// (0x0004d6de) call2_cli_visual_graphic_pane_g2

0xdb43,	// (0x0004d6de) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x0004f096) call2_cli_visual_graphic_pane_g

0x4d26,	// (0x000448c1) bg_popup_call2_rect_pane_g1

0xdcef,	// (0x0004d88a) bg_popup_call2_rect_pane_g2

0x4d2e,	// (0x000448c9) bg_popup_call2_rect_pane_g3

0x4d36,	// (0x000448d1) bg_popup_call2_rect_pane_g4

0x4d3e,	// (0x000448d9) bg_popup_call2_rect_pane_g5

0x4d46,	// (0x000448e1) bg_popup_call2_rect_pane_g6

0x4d4e,	// (0x000448e9) bg_popup_call2_rect_pane_g7

0x4d56,	// (0x000448f1) bg_popup_call2_rect_pane_g8

0x4d5e,	// (0x000448f9) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x0004f09d) bg_popup_call2_rect_pane_g

0x4d66,	// (0x00044901) bg_popup_call2_bubble_pane_g1

0x4d6e,	// (0x00044909) bg_popup_call2_bubble_pane_g2

0x4d76,	// (0x00044911) bg_popup_call2_bubble_pane_g3

0x4d7e,	// (0x00044919) bg_popup_call2_bubble_pane_g4

0x4d86,	// (0x00044921) bg_popup_call2_bubble_pane_g5

0x4d8e,	// (0x00044929) bg_popup_call2_bubble_pane_g6

0x4d96,	// (0x00044931) bg_popup_call2_bubble_pane_g7

0x4d9e,	// (0x00044939) bg_popup_call2_bubble_pane_g8

0x4da6,	// (0x00044941) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x0004f0b0) bg_popup_call2_bubble_pane_g

0x1d4d,	// (0x000418e8) aid_cale_week_size_cell_pane

0x237c,	// (0x00041f17) aid_cams_cif_uncrop_pane_ParamLimits

0x237c,	// (0x00041f17) aid_cams_cif_uncrop_pane

0x24d2,	// (0x0004206d) aid_cams_size_cell_ParamLimits

0x24d2,	// (0x0004206d) aid_cams_size_cell

0x24e6,	// (0x00042081) grid_cams_pane_ParamLimits

0x2500,	// (0x0004209b) linegrid_cams_pane_ParamLimits

0x25de,	// (0x00042179) call_video_pane_t1

0x25f8,	// (0x00042193) call_video_pane_t2

0x0001,

0xf222,	// (0x0004edbd) call_video_pane_t

0x2a45,	// (0x000425e0) aid_cale_month_size_cell_pane_ParamLimits

0x2a45,	// (0x000425e0) aid_cale_month_size_cell_pane

0xf59a,	// (0x0004f135) smil_status_volume_pane_g

0xada9,	// (0x0004a944) volume_smil_pane_ParamLimits

0xab50,	// (0x0004a6eb) aid_popup2_width_pane

0x1cae,	// (0x00041849) cell_qdial_pane_g4_ParamLimits

0x1cae,	// (0x00041849) cell_qdial_pane_g4

0x396d,	// (0x00043508) aid_blid_cardinal_pane_ParamLimits

0x397d,	// (0x00043518) aid_blid_destination_pane_ParamLimits

0x397d,	// (0x00043518) aid_blid_destination_pane

0xdb2b,	// (0x0004d6c6) bg_popup_call_poc_act_pane_ParamLimits

0xdb2b,	// (0x0004d6c6) bg_popup_call_poc_act_pane

0xdb2b,	// (0x0004d6c6) bg_popup_call_poc_inact_pane_ParamLimits

0xdb2b,	// (0x0004d6c6) bg_popup_call_poc_inact_pane

0x4db6,	// (0x00044951) bg_popup_call_poc_act_pane_g1

0x4dbe,	// (0x00044959) bg_popup_call_poc_act_pane_g2

0x4dc6,	// (0x00044961) bg_popup_call_poc_act_pane_g3

0x4d7e,	// (0x00044919) bg_popup_call_poc_act_pane_g4

0x4d86,	// (0x00044921) bg_popup_call_poc_act_pane_g5

0x4dce,	// (0x00044969) bg_popup_call_poc_act_pane_g6

0x4d96,	// (0x00044931) bg_popup_call_poc_act_pane_g7

0x4dd6,	// (0x00044971) bg_popup_call_poc_act_pane_g8

0xd8d0,	// (0x0004d46b) main_usb_pane

0xad4c,	// (0x0004a8e7) popup_cale_lunar_info_window

0x28c5,	// (0x00042460) im_reading_pane_t1_ParamLimits

0xdebd,	// (0x0004da58) list_im_pane_ParamLimits

0xdece,	// (0x0004da69) scroll_pane_cp07_ParamLimits

0xd8d0,	// (0x0004d46b) grid_highlight_pane_cp012

0xdb2b,	// (0x0004d6c6) mup_scale_pane_ParamLimits

0xe88c,	// (0x0004e427) main_usb_pane_g1_ParamLimits

0xe88c,	// (0x0004e427) main_usb_pane_g1

0x4df6,	// (0x00044991) main_usb_pane_g2_ParamLimits

0x4df6,	// (0x00044991) main_usb_pane_g2

0x0001,

0xf53f,	// (0x0004f0da) main_usb_pane_g_ParamLimits

0xf53f,	// (0x0004f0da) main_usb_pane_g

0x4e0c,	// (0x000449a7) main_usb_pane_t1_ParamLimits

0x4e0c,	// (0x000449a7) main_usb_pane_t1

0x4e1e,	// (0x000449b9) main_usb_pane_t2_ParamLimits

0x4e1e,	// (0x000449b9) main_usb_pane_t2

0x4e30,	// (0x000449cb) main_usb_pane_t3_ParamLimits

0x4e30,	// (0x000449cb) main_usb_pane_t3

0x4e42,	// (0x000449dd) main_usb_pane_t4_ParamLimits

0x4e42,	// (0x000449dd) main_usb_pane_t4

0x4e57,	// (0x000449f2) main_usb_pane_t5_ParamLimits

0x4e57,	// (0x000449f2) main_usb_pane_t5

0x4e6c,	// (0x00044a07) main_usb_pane_t6_ParamLimits

0x4e6c,	// (0x00044a07) main_usb_pane_t6

0x0005,

0xf544,	// (0x0004f0df) main_usb_pane_t_ParamLimits

0x390c,	// (0x000434a7) aid_text_placing

0x3917,	// (0x000434b2) main_location2_pane_t1_ParamLimits

0x392d,	// (0x000434c8) main_location2_pane_t2_ParamLimits

0x3943,	// (0x000434de) main_location2_pane_t3_ParamLimits

0x3959,	// (0x000434f4) main_location2_pane_t4_ParamLimits

0x3959,	// (0x000434f4) main_location2_pane_t4

0xf35e,	// (0x0004eef9) main_location2_pane_t_ParamLimits

0xdb67,	// (0x0004d702) find_pinb_pane_g2_ParamLimits

0xdb67,	// (0x0004d702) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0004ec75) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0004ec75) find_pinb_pane_g

0xdb73,	// (0x0004d70e) find_pinb_pane_t1_ParamLimits

0xdb85,	// (0x0004d720) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0004ec7a) find_pinb_pane_t_ParamLimits

0xd8d0,	// (0x0004d46b) main_call3_pane

0x304a,	// (0x00042be5) cale_month_day_heading_pane_t1_ParamLimits

0x30d0,	// (0x00042c6b) cale_month_day_heading_pane_t2_ParamLimits

0x3149,	// (0x00042ce4) cale_month_day_heading_pane_t3_ParamLimits

0x31c2,	// (0x00042d5d) cale_month_day_heading_pane_t4_ParamLimits

0x3243,	// (0x00042dde) cale_month_day_heading_pane_t5_ParamLimits

0x32cc,	// (0x00042e67) cale_month_day_heading_pane_t6_ParamLimits

0x335d,	// (0x00042ef8) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0004edf5) cale_month_day_heading_pane_t_ParamLimits

0xe118,	// (0x0004dcb3) smil_status_volume_pane

0x3efc,	// (0x00043a97) postcard_address_pane_ParamLimits

0x3efc,	// (0x00043a97) postcard_address_pane

0x3f12,	// (0x00043aad) postcard_message_pane_ParamLimits

0x3f12,	// (0x00043aad) postcard_message_pane

0x4d07,	// (0x000448a2) call2_cli_visual_pane_t1_ParamLimits

0x4d07,	// (0x000448a2) call2_cli_visual_pane_t1

0x572e,	// (0x000452c9) postcard_message_pane_t1_ParamLimits

0x572e,	// (0x000452c9) postcard_message_pane_t1

0x5716,	// (0x000452b1) postcard_address_pane_t1_ParamLimits

0x5716,	// (0x000452b1) postcard_address_pane_t1

0x5702,	// (0x0004529d) popup_call3_audio_in_window_ParamLimits

0x5702,	// (0x0004529d) popup_call3_audio_in_window

0x5587,	// (0x00045122) bg_popup_call3_in_pane_ParamLimits

0x5587,	// (0x00045122) bg_popup_call3_in_pane

0x5603,	// (0x0004519e) popup_call3_audio_in_window_g1_ParamLimits

0x5603,	// (0x0004519e) popup_call3_audio_in_window_g1

0x5623,	// (0x000451be) popup_call3_audio_in_window_g2_ParamLimits

0x5623,	// (0x000451be) popup_call3_audio_in_window_g2

0x5643,	// (0x000451de) popup_call3_audio_in_window_g3_ParamLimits

0x5643,	// (0x000451de) popup_call3_audio_in_window_g3

0x0003,

0xf5a1,	// (0x0004f13c) popup_call3_audio_in_window_g_ParamLimits

0xf5a1,	// (0x0004f13c) popup_call3_audio_in_window_g

0x5674,	// (0x0004520f) popup_call3_audio_in_window_t1_ParamLimits

0x5674,	// (0x0004520f) popup_call3_audio_in_window_t1

0x56b2,	// (0x0004524d) popup_call3_audio_in_window_t2_ParamLimits

0x56b2,	// (0x0004524d) popup_call3_audio_in_window_t2

0x56f0,	// (0x0004528b) popup_call3_audio_in_window_t3_ParamLimits

0x56f0,	// (0x0004528b) popup_call3_audio_in_window_t3

0x0002,

0xf5aa,	// (0x0004f145) popup_call3_audio_in_window_t_ParamLimits

0xf5aa,	// (0x0004f145) popup_call3_audio_in_window_t

0xddb6,	// (0x0004d951) bg_popup_call3_rect_pane

0x4d26,	// (0x000448c1) bg_popup_call3_rect_pane_g1

0xdcef,	// (0x0004d88a) bg_popup_call3_rect_pane_g2

0x4d2e,	// (0x000448c9) bg_popup_call3_rect_pane_g3

0x4d36,	// (0x000448d1) bg_popup_call3_rect_pane_g4

0x4d3e,	// (0x000448d9) bg_popup_call3_rect_pane_g5

0x4d46,	// (0x000448e1) bg_popup_call3_rect_pane_g6

0x4d4e,	// (0x000448e9) bg_popup_call3_rect_pane_g7

0xd470,	// (0x0004d00b) mup_visualizer_osc_pane

0xd470,	// (0x0004d00b) mup_visualizer_spec_pane

0x55b7,	// (0x00045152) call3_video_qcif_pane_ParamLimits

0x55b7,	// (0x00045152) call3_video_qcif_pane

0x55ca,	// (0x00045165) call3_video_qcif_uncrop_pane_ParamLimits

0x55ca,	// (0x00045165) call3_video_qcif_uncrop_pane

0x55da,	// (0x00045175) call3_video_subqcif_pane_ParamLimits

0x55da,	// (0x00045175) call3_video_subqcif_pane

0x55f0,	// (0x0004518b) call3_video_subqcif_uncrop_pane_ParamLimits

0x55f0,	// (0x0004518b) call3_video_subqcif_uncrop_pane

0x5663,	// (0x000451fe) popup_call3_audio_in_window_g4_ParamLimits

0x5663,	// (0x000451fe) popup_call3_audio_in_window_g4

0xd470,	// (0x0004d00b) mup_spec_half_pane

0xd470,	// (0x0004d00b) mup_spec_half_pane_cp

0xd470,	// (0x0004d00b) mup_osc_middle_pane

0xde00,	// (0x0004d99b) mup_visualizer_osc_pane_g1

0x553a,	// (0x000450d5) mup_spec_bar_pane_ParamLimits

0x553a,	// (0x000450d5) mup_spec_bar_pane

0xde00,	// (0x0004d99b) mup_spec_bar_pane_g1

0xde00,	// (0x0004d99b) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x0004ef73) mup_spec_bar_pane_g

0x1d4d,	// (0x000418e8) aid_cale_week_size_cell_pane_ParamLimits

0x1d67,	// (0x00041902) bg_cale_heading_pane_ParamLimits

0x1d8b,	// (0x00041926) bg_cale_pane_cp01_ParamLimits

0x1da8,	// (0x00041943) cale_week_corner_pane_ParamLimits

0x1dc7,	// (0x00041962) cale_week_day_heading_pane_ParamLimits

0x1df0,	// (0x0004198b) cale_week_scroll_pane_g1_ParamLimits

0x1e0f,	// (0x000419aa) cale_week_scroll_pane_g2_ParamLimits

0x1e27,	// (0x000419c2) cale_week_scroll_pane_g3_ParamLimits

0x1e3f,	// (0x000419da) cale_week_scroll_pane_g4_ParamLimits

0x1e57,	// (0x000419f2) cale_week_scroll_pane_g5_ParamLimits

0x1e77,	// (0x00041a12) cale_week_scroll_pane_g6_ParamLimits

0x1e97,	// (0x00041a32) cale_week_scroll_pane_g7_ParamLimits

0x1ebb,	// (0x00041a56) cale_week_scroll_pane_g8_ParamLimits

0x1edf,	// (0x00041a7a) cale_week_scroll_pane_g9_ParamLimits

0x1ef7,	// (0x00041a92) cale_week_scroll_pane_g10_ParamLimits

0x1f0f,	// (0x00041aaa) cale_week_scroll_pane_g11_ParamLimits

0x1f27,	// (0x00041ac2) cale_week_scroll_pane_g12_ParamLimits

0x1f4b,	// (0x00041ae6) cale_week_scroll_pane_g13_ParamLimits

0x1f4b,	// (0x00041ae6) cale_week_scroll_pane_g14_ParamLimits

0x1f4b,	// (0x00041ae6) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0004ed06) cale_week_scroll_pane_g_ParamLimits

0x1f93,	// (0x00041b2e) cale_week_time_pane_ParamLimits

0x1fb7,	// (0x00041b52) grid_cale_week_pane_ParamLimits

0xdd2c,	// (0x0004d8c7) listscroll_cale_week_pane_t1

0xdd3e,	// (0x0004d8d9) scroll_pane_cp08_ParamLimits

0x2abd,	// (0x00042658) cale_month_corner_pane_ParamLimits

0xe0ee,	// (0x0004dc89) cale_month_pane_t1

0x2fc5,	// (0x00042b60) cale_month_week_pane_ParamLimits

0x374c,	// (0x000432e7) popup_call_status_window_g1_ParamLimits

0x3760,	// (0x000432fb) popup_call_status_window_g2_ParamLimits

0x3774,	// (0x0004330f) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x0004ee80) popup_call_status_window_g_ParamLimits

0xe4a3,	// (0x0004e03e) aid_call2_pane

0x0e81,	// (0x00040a1c) msg_header_pane_g1

0x3efc,	// (0x00043a97) postcard_address2_pane_ParamLimits

0x3efc,	// (0x00043a97) postcard_address2_pane

0x3f12,	// (0x00043aad) postcard_message2_pane_ParamLimits

0x3f12,	// (0x00043aad) postcard_message2_pane

0x54d1,	// (0x0004506c) message2_row_pane_ParamLimits

0x54d1,	// (0x0004506c) message2_row_pane

0x54f4,	// (0x0004508f) address2_row_pane_ParamLimits

0x54f4,	// (0x0004508f) address2_row_pane

0x5507,	// (0x000450a2) postcard_message2_row_pane_g1

0x550f,	// (0x000450aa) postcard_message2_row_pane_t1

0x5507,	// (0x000450a2) address2_row_pane_g1

0x550f,	// (0x000450aa) address2_row_pane_t1

0x2324,	// (0x00041ebf) aid_size_cell_vorec

0xd8d0,	// (0x0004d46b) main_rss_pane

0x551d,	// (0x000450b8) rss_list_single_pane_ParamLimits

0x551d,	// (0x000450b8) rss_list_single_pane

0x552b,	// (0x000450c6) rss_list_single_pane_t1

0x552b,	// (0x000450c6) rss_list_single_pane_t2

0x0001,

0xf595,	// (0x0004f130) rss_list_single_pane_t

0xd8d0,	// (0x0004d46b) main_camera2_pane

0xd8d0,	// (0x0004d46b) main_video2_pane

0xadbe,	// (0x0004a959) cams_zoom_pane_cp2_ParamLimits

0xadbe,	// (0x0004a959) cams_zoom_pane_cp2

0xadbe,	// (0x0004a959) image2_vga_pane_ParamLimits

0xadbe,	// (0x0004a959) image2_vga_pane

0xadcc,	// (0x0004a967) main_camera2_pane_g1_ParamLimits

0xadcc,	// (0x0004a967) main_camera2_pane_g1

0xadcc,	// (0x0004a967) main_camera2_pane_g2_ParamLimits

0xadcc,	// (0x0004a967) main_camera2_pane_g2

0xadcc,	// (0x0004a967) main_camera2_pane_g3_ParamLimits

0xadcc,	// (0x0004a967) main_camera2_pane_g3

0xadcc,	// (0x0004a967) main_camera2_pane_g4_ParamLimits

0xadcc,	// (0x0004a967) main_camera2_pane_g4

0xadcc,	// (0x0004a967) main_camera2_pane_g5_ParamLimits

0xadcc,	// (0x0004a967) main_camera2_pane_g5

0xadcc,	// (0x0004a967) main_camera2_pane_g6_ParamLimits

0xadcc,	// (0x0004a967) main_camera2_pane_g6

0xadcc,	// (0x0004a967) main_camera2_pane_g7_ParamLimits

0xadcc,	// (0x0004a967) main_camera2_pane_g7

0xadcc,	// (0x0004a967) main_camera2_pane_g8_ParamLimits

0xadcc,	// (0x0004a967) main_camera2_pane_g8

0x0008,

0xf5b1,	// (0x0004f14c) main_camera2_pane_g_ParamLimits

0xf5b1,	// (0x0004f14c) main_camera2_pane_g

0x5758,	// (0x000452f3) main_camera2_pane_t1_ParamLimits

0x5758,	// (0x000452f3) main_camera2_pane_t1

0x5758,	// (0x000452f3) main_camera2_pane_t2_ParamLimits

0x5758,	// (0x000452f3) main_camera2_pane_t2

0x5758,	// (0x000452f3) main_camera2_pane_t3_ParamLimits

0x5758,	// (0x000452f3) main_camera2_pane_t3

0x5758,	// (0x000452f3) main_camera2_pane_t4_ParamLimits

0x5758,	// (0x000452f3) main_camera2_pane_t4

0x0006,

0xf5c4,	// (0x0004f15f) main_camera2_pane_t_ParamLimits

0xf5c4,	// (0x0004f15f) main_camera2_pane_t

0xadee,	// (0x0004a989) cams_zoom_pane_cp4_ParamLimits

0xadee,	// (0x0004a989) cams_zoom_pane_cp4

0x576c,	// (0x00045307) image2_cif_pane_ParamLimits

0x576c,	// (0x00045307) image2_cif_pane

0xdb4d,	// (0x0004d6e8) image2_subqcif_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) image2_subqcif_pane

0x577a,	// (0x00045315) main_video2_pane_g1_ParamLimits

0x577a,	// (0x00045315) main_video2_pane_g1

0x577a,	// (0x00045315) main_video2_pane_g2_ParamLimits

0x577a,	// (0x00045315) main_video2_pane_g2

0x577a,	// (0x00045315) main_video2_pane_g3_ParamLimits

0x577a,	// (0x00045315) main_video2_pane_g3

0x577a,	// (0x00045315) main_video2_pane_g4_ParamLimits

0x577a,	// (0x00045315) main_video2_pane_g4

0x577a,	// (0x00045315) main_video2_pane_g5_ParamLimits

0x577a,	// (0x00045315) main_video2_pane_g5

0x577a,	// (0x00045315) main_video2_pane_g6_ParamLimits

0x577a,	// (0x00045315) main_video2_pane_g6

0x0005,

0xf5d3,	// (0x0004f16e) main_video2_pane_g_ParamLimits

0xf5d3,	// (0x0004f16e) main_video2_pane_g

0x5788,	// (0x00045323) main_video2_pane_t1_ParamLimits

0x5788,	// (0x00045323) main_video2_pane_t1

0x5788,	// (0x00045323) main_video2_pane_t2_ParamLimits

0x5788,	// (0x00045323) main_video2_pane_t2

0x5788,	// (0x00045323) main_video2_pane_t3_ParamLimits

0x5788,	// (0x00045323) main_video2_pane_t3

0x0002,

0xf5e0,	// (0x0004f17b) main_video2_pane_t_ParamLimits

0xf5e0,	// (0x0004f17b) main_video2_pane_t

0x4f66,	// (0x00044b01) call_muted_g2

0x0001,

0xf587,	// (0x0004f122) call_muted_g

0xd8d0,	// (0x0004d46b) main_mup2_pane

0xf055,	// (0x0004ebf0) main_mup2_pane_g1_ParamLimits

0xf055,	// (0x0004ebf0) main_mup2_pane_g1

0xf055,	// (0x0004ebf0) main_mup2_pane_g2_ParamLimits

0xf055,	// (0x0004ebf0) main_mup2_pane_g2

0xde00,	// (0x0004d99b) main_mup_pane_g13_cp1

0xd470,	// (0x0004d00b) mup_volume_pane_cp1

0xf055,	// (0x0004ebf0) main_mup2_pane_g4_ParamLimits

0xf055,	// (0x0004ebf0) main_mup2_pane_g4

0xf055,	// (0x0004ebf0) main_mup2_pane_g5_ParamLimits

0xf055,	// (0x0004ebf0) main_mup2_pane_g5

0xf055,	// (0x0004ebf0) main_mup2_pane_g6_ParamLimits

0xf055,	// (0x0004ebf0) main_mup2_pane_g6

0xf055,	// (0x0004ebf0) main_mup2_pane_g7_ParamLimits

0xf055,	// (0x0004ebf0) main_mup2_pane_g7

0x0006,

0xf5e7,	// (0x0004f182) main_mup2_pane_g_ParamLimits

0xf5e7,	// (0x0004f182) main_mup2_pane_g

0xf063,	// (0x0004ebfe) main_mup2_pane_t1_ParamLimits

0xf063,	// (0x0004ebfe) main_mup2_pane_t1

0xf063,	// (0x0004ebfe) main_mup2_pane_t2_ParamLimits

0xf063,	// (0x0004ebfe) main_mup2_pane_t2

0xf063,	// (0x0004ebfe) main_mup2_pane_t3_ParamLimits

0xf063,	// (0x0004ebfe) main_mup2_pane_t3

0xf063,	// (0x0004ebfe) main_mup2_pane_t4_ParamLimits

0xf063,	// (0x0004ebfe) main_mup2_pane_t4

0xf063,	// (0x0004ebfe) main_mup2_pane_t5_ParamLimits

0xf063,	// (0x0004ebfe) main_mup2_pane_t5

0xf063,	// (0x0004ebfe) main_mup2_pane_t6_ParamLimits

0xf063,	// (0x0004ebfe) main_mup2_pane_t6

0x0005,

0xf5f6,	// (0x0004f191) main_mup2_pane_t_ParamLimits

0xf5f6,	// (0x0004f191) main_mup2_pane_t

0xf077,	// (0x0004ec12) mup2_visualizer_pane_ParamLimits

0xf077,	// (0x0004ec12) mup2_visualizer_pane

0xf077,	// (0x0004ec12) mup_progress_pane_cp_ParamLimits

0xf077,	// (0x0004ec12) mup_progress_pane_cp

0x579c,	// (0x00045337) mup_volume_pane_cp_ParamLimits

0x579c,	// (0x00045337) mup_volume_pane_cp

0xdba6,	// (0x0004d741) mup2_visualizer_pane_g1_ParamLimits

0xdba6,	// (0x0004d741) mup2_visualizer_pane_g1

0xdbb4,	// (0x0004d74f) mup2_visualizer_pane_g2_ParamLimits

0xdbb4,	// (0x0004d74f) mup2_visualizer_pane_g2

0xdbb4,	// (0x0004d74f) mup2_visualizer_pane_g3_ParamLimits

0xdbb4,	// (0x0004d74f) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0004ec7f) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0004ec7f) mup2_visualizer_pane_g

0xe9d5,	// (0x0004e570) aid_size_cell_fmradio

0x5147,	// (0x00044ce2) aid_height_parent_landcape

0xdf4c,	// (0x0004dae7) wml_content_pane_cp

0xdf54,	// (0x0004daef) wml_tabs_pane

0xdf5d,	// (0x0004daf8) popup_wml_miniature_window

0xdf65,	// (0x0004db00) scroll_pane_cp021

0xdf79,	// (0x0004db14) wml_content_pane_comp8

0xd8d0,	// (0x0004d46b) bg_popup_sub_pane_cp05

0x57b2,	// (0x0004534d) popup_wml_miniature_window_g1

0x57ba,	// (0x00045355) wml_miniature_view_pane

0x57c2,	// (0x0004535d) aid_size_wml_view

0x57ca,	// (0x00045365) wml_miniature_view_pane_g1

0x57d3,	// (0x0004536e) wml_miniature_view_pane_g2

0x57dc,	// (0x00045377) wml_miniature_view_pane_g3

0x57e4,	// (0x0004537f) wml_miniature_view_pane_g4

0x57ec,	// (0x00045387) wml_miniature_view_pane_g5

0x57f4,	// (0x0004538f) wml_miniature_view_pane_g6

0x57fc,	// (0x00045397) wml_miniature_view_pane_g7

0x5804,	// (0x0004539f) wml_miniature_view_pane_g8

0x0007,

0xf603,	// (0x0004f19e) wml_miniature_view_pane_g

0x580c,	// (0x000453a7) background_graphic_ParamLimits

0x580c,	// (0x000453a7) background_graphic

0x5818,	// (0x000453b3) wml_tabs_2_pane

0x5821,	// (0x000453bc) wml_tabs_3_pane_ParamLimits

0x5821,	// (0x000453bc) wml_tabs_3_pane

0x5833,	// (0x000453ce) wml_tabs_4_pane_ParamLimits

0x5833,	// (0x000453ce) wml_tabs_4_pane

0x5849,	// (0x000453e4) wml_tabs_5_pane_ParamLimits

0x5849,	// (0x000453e4) wml_tabs_5_pane

0x5863,	// (0x000453fe) wml_tabs_pane_g2_ParamLimits

0x5863,	// (0x000453fe) wml_tabs_pane_g2

0x5878,	// (0x00045413) wml_tabs_pane_g3_ParamLimits

0x5878,	// (0x00045413) wml_tabs_pane_g3

0x588d,	// (0x00045428) wml_tabs_2_active_pane_ParamLimits

0x588d,	// (0x00045428) wml_tabs_2_active_pane

0x588d,	// (0x00045428) wml_tabs_2_passive_pane_ParamLimits

0x588d,	// (0x00045428) wml_tabs_2_passive_pane

0x589b,	// (0x00045436) wml_tabs_3_active_pane_cp_ParamLimits

0x589b,	// (0x00045436) wml_tabs_3_active_pane_cp

0x58b0,	// (0x0004544b) wml_tabs_3_passive_pane_ParamLimits

0x58b0,	// (0x0004544b) wml_tabs_3_passive_pane

0x58c3,	// (0x0004545e) wml_tabs_3_passive_pane_cp_ParamLimits

0x58c3,	// (0x0004545e) wml_tabs_3_passive_pane_cp

0x58da,	// (0x00045475) tabs_4_active_pane

0x58e2,	// (0x0004547d) tabs_4_passive_pane

0x58ec,	// (0x00045487) tabs_4_passive_pane_cp

0x58f4,	// (0x0004548f) tabs_4_passive_pane_cp2

0x4dae,	// (0x00044949) aid_height_text

0xf077,	// (0x0004ec12) mup_volume_cont_pane_ParamLimits

0xf077,	// (0x0004ec12) mup_volume_cont_pane

0xd470,	// (0x0004d00b) aid_size_cell_pinb

0xd470,	// (0x0004d00b) aid_size_list_pinb

0xf077,	// (0x0004ec12) mup2_volume_cont_pane_ParamLimits

0xf077,	// (0x0004ec12) mup2_volume_cont_pane

0xadfc,	// (0x0004a997) mup2_volume_cont_pane_g1_ParamLimits

0xadfc,	// (0x0004a997) mup2_volume_cont_pane_g1

0x176b,	// (0x00041306) aid_size_cell_touch_ParamLimits

0x176b,	// (0x00041306) aid_size_cell_touch

0x1997,	// (0x00041532) touch_pane_ParamLimits

0x1997,	// (0x00041532) touch_pane

0xd470,	// (0x0004d00b) main_rss2_pane

0x5907,	// (0x000454a2) listscroll_rss2_pane

0x5910,	// (0x000454ab) rss2_navigation_pane

0x5918,	// (0x000454b3) list_rss2_pane

0xe5d0,	// (0x0004e16b) scroll_pane_cp22

0x5920,	// (0x000454bb) rss2_navigation_pane_g1

0x5929,	// (0x000454c4) rss2_navigation_pane_g2

0x5931,	// (0x000454cc) rss2_navigation_pane_g3

0x0002,

0xf614,	// (0x0004f1af) rss2_navigation_pane_g

0x5939,	// (0x000454d4) rss2_navigation_pane_t1

0x5947,	// (0x000454e2) rss2_list_single_pane_ParamLimits

0x5947,	// (0x000454e2) rss2_list_single_pane

0x5961,	// (0x000454fc) rss2_list_single_pane_t2

0x596f,	// (0x0004550a) rss2_list_single_pane_t3_ParamLimits

0x596f,	// (0x0004550a) rss2_list_single_pane_t3

0x598c,	// (0x00045527) rss2_list_single_pane_t4

0x3611,	// (0x000431ac) smil_status_pane_g1

0xdb4d,	// (0x0004d6e8) main_image2_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) main_image2_pane

0xadcc,	// (0x0004a967) main_camera2_pane_g9_ParamLimits

0xadcc,	// (0x0004a967) main_camera2_pane_g9

0x5758,	// (0x000452f3) main_camera2_pane_t5_ParamLimits

0x5758,	// (0x000452f3) main_camera2_pane_t5

0xadda,	// (0x0004a975) main_camera2_pane_t6_ParamLimits

0xadda,	// (0x0004a975) main_camera2_pane_t6

0x599a,	// (0x00045535) main_image2_pane_g1_ParamLimits

0x599a,	// (0x00045535) main_image2_pane_g1

0x4156,	// (0x00043cf1) smil2_video_pane_ParamLimits

0x4156,	// (0x00043cf1) smil2_video_pane

0xab6c,	// (0x0004a707) aid_zoom_text_primary_cp

0xabb1,	// (0x0004a74c) popup_preview_fixed_window

0xdeb5,	// (0x0004da50) im_reading_pane_g1

0x574a,	// (0x000452e5) cams2_bc_adjust_pane_cp_ParamLimits

0x574a,	// (0x000452e5) cams2_bc_adjust_pane_cp

0xf077,	// (0x0004ec12) cams2_bc_adjust_pane_ParamLimits

0xf077,	// (0x0004ec12) cams2_bc_adjust_pane

0xde00,	// (0x0004d99b) cams2_bc_adjust_pane_g1

0xd470,	// (0x0004d00b) cams2_slider_pane

0xde00,	// (0x0004d99b) cams2_slider_pane_g1

0xde00,	// (0x0004d99b) cams2_slider_pane_g2

0x0006,

0xf61b,	// (0x0004f1b6) cams2_slider_pane_g

0x1a2d,	// (0x000415c8) calc_display_pane_ParamLimits

0x1a52,	// (0x000415ed) calc_paper_pane_ParamLimits

0x1a75,	// (0x00041610) grid_calc_pane_ParamLimits

0xacd3,	// (0x0004a86e) popup_clock_digital_window_t1_ParamLimits

0xe972,	// (0x0004e50d) main_image_pane_t1

0x1a0d,	// (0x000415a8) aid_size_cell_calc_ParamLimits

0x1a0d,	// (0x000415a8) aid_size_cell_calc

0x51ad,	// (0x00044d48) popup_blid_sat_info2_window_ParamLimits

0x51ad,	// (0x00044d48) popup_blid_sat_info2_window

0x59b0,	// (0x0004554b) aid_size_cell_blid

0x576c,	// (0x00045307) bg_popup_window_pane_cp07

0x59cd,	// (0x00045568) grid_popup_blid_pane

0x59d7,	// (0x00045572) heading_pane_cp05_ParamLimits

0x59d7,	// (0x00045572) heading_pane_cp05

0x5aa1,	// (0x0004563c) cell_popup_blid_pane_ParamLimits

0x5aa1,	// (0x0004563c) cell_popup_blid_pane

0x5acb,	// (0x00045666) cell_popup_blid_pane_g1

0x5ad3,	// (0x0004566e) cell_popup_blid_pane_t1

0xf077,	// (0x0004ec12) mup2_indicator_pane_ParamLimits

0xf077,	// (0x0004ec12) mup2_indicator_pane

0xd470,	// (0x0004d00b) mup2_visualizer_osc_pane

0x579c,	// (0x00045337) mup2_visualizer_spec_pane_ParamLimits

0x579c,	// (0x00045337) mup2_visualizer_spec_pane

0xd470,	// (0x0004d00b) mup2_spec_half_pane

0xd470,	// (0x0004d00b) mup2_spec_half_pane_cp

0x5ae1,	// (0x0004567c) mup2_spec_bar_pane_ParamLimits

0x5ae1,	// (0x0004567c) mup2_spec_bar_pane

0xde00,	// (0x0004d99b) mup2_spec_bar_pane_g1

0x5b00,	// (0x0004569b) mup2_spec_bar_pane_g2

0x0001,

0xf641,	// (0x0004f1dc) mup2_spec_bar_pane_g

0xd470,	// (0x0004d00b) mup2_osc_middle_pane

0xde00,	// (0x0004d99b) mup2_visualizer_osc_pane_g1

0xd49a,	// (0x0004d035) popup_number_entry_window_t1_ParamLimits

0xd4bb,	// (0x0004d056) popup_number_entry_window_t2_ParamLimits

0xd4cd,	// (0x0004d068) popup_number_entry_window_t3_ParamLimits

0xd4df,	// (0x0004d07a) popup_number_entry_window_t5_ParamLimits

0xd4df,	// (0x0004d07a) popup_number_entry_window_t5

0xf085,	// (0x0004ec20) popup_number_entry_window_t_ParamLimits

0xd514,	// (0x0004d0af) text_title_cp2_ParamLimits

0xad12,	// (0x0004a8ad) aid_hotspot_pointer_text2_pane

0xad38,	// (0x0004a8d3) main_viewer_pane_g9_ParamLimits

0xad38,	// (0x0004a8d3) main_viewer_pane_g9

0xe0ee,	// (0x0004dc89) cale_month_pane_t1_ParamLimits

0xe12b,	// (0x0004dcc6) bg_cale_pane_ParamLimits

0xe143,	// (0x0004dcde) list_cale_pane_ParamLimits

0xe154,	// (0x0004dcef) listscroll_cale_day_pane_t1

0xe166,	// (0x0004dd01) scroll_pane_cp09_ParamLimits

0x3b46,	// (0x000436e1) main_mup_eq_pane_t1_ParamLimits

0x3b46,	// (0x000436e1) main_mup_eq_pane_t1

0x3b62,	// (0x000436fd) main_mup_eq_pane_t2_ParamLimits

0x3b62,	// (0x000436fd) main_mup_eq_pane_t2

0x3b7e,	// (0x00043719) main_mup_eq_pane_t3_ParamLimits

0x3b7e,	// (0x00043719) main_mup_eq_pane_t3

0x3b9c,	// (0x00043737) main_mup_eq_pane_t4_ParamLimits

0x3b9c,	// (0x00043737) main_mup_eq_pane_t4

0x3bba,	// (0x00043755) main_mup_eq_pane_t5_ParamLimits

0x3bba,	// (0x00043755) main_mup_eq_pane_t5

0x3bd8,	// (0x00043773) main_mup_eq_pane_t6_ParamLimits

0x3bd8,	// (0x00043773) main_mup_eq_pane_t6

0x3bee,	// (0x00043789) main_mup_eq_pane_t7_ParamLimits

0x3bee,	// (0x00043789) main_mup_eq_pane_t7

0x3c04,	// (0x0004379f) main_mup_eq_pane_t8_ParamLimits

0x3c04,	// (0x0004379f) main_mup_eq_pane_t8

0x3c1a,	// (0x000437b5) main_mup_eq_pane_t9_ParamLimits

0x3c1a,	// (0x000437b5) main_mup_eq_pane_t9

0x3c36,	// (0x000437d1) main_mup_eq_pane_t10_ParamLimits

0x3c36,	// (0x000437d1) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x0004ef7f) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x0004ef7f) main_mup_eq_pane_t

0x3d0b,	// (0x000438a6) mup_equalizer_pane_cp5_ParamLimits

0x3d23,	// (0x000438be) mup_equalizer_pane_cp6_ParamLimits

0x3d3b,	// (0x000438d6) mup_equalizer_pane_cp7_ParamLimits

0xd470,	// (0x0004d00b) main_gallery_pane

0x5559,	// (0x000450f4) smil2_volume_pane

0x5561,	// (0x000450fc) smil_status_volume_pane_g1_ParamLimits

0x5574,	// (0x0004510f) smil_status_volume_pane_g2_ParamLimits

0xad9c,	// (0x0004a937) smil_status_volume_pane_g3_ParamLimits

0xf59a,	// (0x0004f135) smil_status_volume_pane_g_ParamLimits

0x576c,	// (0x00045307) bg_popup_window_pane_cp07_ParamLimits

0x59b8,	// (0x00045553) blid_firmament_pane

0xdb4d,	// (0x0004d6e8) aid_size_cell_gallery_ParamLimits

0xdb4d,	// (0x0004d6e8) aid_size_cell_gallery

0xdb4d,	// (0x0004d6e8) grid_gallery_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) grid_gallery_pane

0x576c,	// (0x00045307) cell_gallery_pane_ParamLimits

0x576c,	// (0x00045307) cell_gallery_pane

0xdb4d,	// (0x0004d6e8) bg_cell_gallery_focus_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_cell_gallery_focus_pane

0xdba6,	// (0x0004d741) cell_gallery_pane_g1_ParamLimits

0xdba6,	// (0x0004d741) cell_gallery_pane_g1

0xdba6,	// (0x0004d741) cell_gallery_pane_g2_ParamLimits

0xdba6,	// (0x0004d741) cell_gallery_pane_g2

0xdba6,	// (0x0004d741) cell_gallery_pane_g3_ParamLimits

0xdba6,	// (0x0004d741) cell_gallery_pane_g3

0xdbb4,	// (0x0004d74f) cell_gallery_pane_g4_ParamLimits

0xdbb4,	// (0x0004d74f) cell_gallery_pane_g4

0x0003,

0xf646,	// (0x0004f1e1) cell_gallery_pane_g_ParamLimits

0xf646,	// (0x0004f1e1) cell_gallery_pane_g

0x5b0a,	// (0x000456a5) bg_cell_gallery_focus_pane_g1

0x5b12,	// (0x000456ad) bg_cell_gallery_focus_pane_g2

0x5b1a,	// (0x000456b5) bg_cell_gallery_focus_pane_g3

0x5b22,	// (0x000456bd) bg_cell_gallery_focus_pane_g4

0x5b2a,	// (0x000456c5) bg_cell_gallery_focus_pane_g5

0x5b32,	// (0x000456cd) bg_cell_gallery_focus_pane_g6

0x5b3a,	// (0x000456d5) bg_cell_gallery_focus_pane_g7

0x5b42,	// (0x000456dd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64f,	// (0x0004f1ea) bg_cell_gallery_focus_pane_g

0x5b4a,	// (0x000456e5) aid_firma_cardinal

0x5b5e,	// (0x000456f9) blid_firmament_pane_t1

0x5b75,	// (0x00045710) blid_firmament_pane_t2

0x5b8c,	// (0x00045727) blid_firmament_pane_t3

0x5ba3,	// (0x0004573e) blid_firmament_pane_t4

0x0003,

0xf660,	// (0x0004f1fb) blid_firmament_pane_t

0x5bba,	// (0x00045755) blid_sat_info_pane

0xde00,	// (0x0004d99b) blid_sat_info_pane_g1

0xde00,	// (0x0004d99b) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x0004ef73) blid_sat_info_pane_g

0x5bca,	// (0x00045765) blid_sat_info_pane_t1

0x5bd8,	// (0x00045773) smil2_volume_content_pane

0x5be1,	// (0x0004577c) smil2_volume_pane_g1

0xf040,	// (0x0004ebdb) smil2_volume_content_pane_g1

0x5be9,	// (0x00045784) smil2_volume_content_pane_g2

0x5bf2,	// (0x0004578d) smil2_volume_content_pane_g3

0x5bfb,	// (0x00045796) smil2_volume_content_pane_g4

0x5c04,	// (0x0004579f) smil2_volume_content_pane_g5

0x5c0d,	// (0x000457a8) smil2_volume_content_pane_g6

0x5c16,	// (0x000457b1) smil2_volume_content_pane_g7

0x5c1f,	// (0x000457ba) smil2_volume_content_pane_g8

0x5c28,	// (0x000457c3) smil2_volume_content_pane_g9

0x5c31,	// (0x000457cc) smil2_volume_content_pane_g10

0x0009,

0xf669,	// (0x0004f204) smil2_volume_content_pane_g

0x2085,	// (0x00041c20) cale_week_day_heading_pane_t1_ParamLimits

0x20af,	// (0x00041c4a) cale_week_day_heading_pane_t2_ParamLimits

0x20de,	// (0x00041c79) cale_week_day_heading_pane_t3_ParamLimits

0x210d,	// (0x00041ca8) cale_week_day_heading_pane_t4_ParamLimits

0x213c,	// (0x00041cd7) cale_week_day_heading_pane_t5_ParamLimits

0x216f,	// (0x00041d0a) cale_week_day_heading_pane_t6_ParamLimits

0x21a6,	// (0x00041d41) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0004ed27) cale_week_day_heading_pane_t_ParamLimits

0xdd5b,	// (0x0004d8f6) bg_cale_side_pane_ParamLimits

0x21d0,	// (0x00041d6b) cale_week_time_pane_t1_ParamLimits

0x21ea,	// (0x00041d85) cale_week_time_pane_t2_ParamLimits

0x2204,	// (0x00041d9f) cale_week_time_pane_t3_ParamLimits

0x221e,	// (0x00041db9) cale_week_time_pane_t4_ParamLimits

0x2238,	// (0x00041dd3) cale_week_time_pane_t5_ParamLimits

0x2252,	// (0x00041ded) cale_week_time_pane_t6_ParamLimits

0x2272,	// (0x00041e0d) cale_week_time_pane_t7_ParamLimits

0x2298,	// (0x00041e33) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0004ed36) cale_week_time_pane_t_ParamLimits

0x22be,	// (0x00041e59) cell_cale_week_pane_g2_ParamLimits

0xdd5b,	// (0x0004d8f6) bg_cale_side_pane_cp01_ParamLimits

0x33ee,	// (0x00042f89) cale_month_week_pane_t1_ParamLimits

0x3407,	// (0x00042fa2) cale_month_week_pane_t2_ParamLimits

0x3420,	// (0x00042fbb) cale_month_week_pane_t3_ParamLimits

0x3439,	// (0x00042fd4) cale_month_week_pane_t4_ParamLimits

0x3452,	// (0x00042fed) cale_month_week_pane_t5_ParamLimits

0x346b,	// (0x00043006) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0004ee04) cale_month_week_pane_t_ParamLimits

0xac53,	// (0x0004a7ee) cell_cale_month_pane_g1_ParamLimits

0xd470,	// (0x0004d00b) main_cale_event_viewer_pane

0xd470,	// (0x0004d00b) listscroll_cale_event_viewer_pane

0x5c3a,	// (0x000457d5) list_cale_ev_pane

0x5c42,	// (0x000457dd) scroll_pane_cp023

0x5c4e,	// (0x000457e9) field_cale_ev_pane_ParamLimits

0x5c4e,	// (0x000457e9) field_cale_ev_pane

0x5c72,	// (0x0004580d) field_cale_ev_content_pane_ParamLimits

0x5c72,	// (0x0004580d) field_cale_ev_content_pane

0x5c7e,	// (0x00045819) field_cale_ev_pane_g1_ParamLimits

0x5c7e,	// (0x00045819) field_cale_ev_pane_g1

0x5c8a,	// (0x00045825) field_cale_ev_pane_g2_ParamLimits

0x5c8a,	// (0x00045825) field_cale_ev_pane_g2

0x5ca2,	// (0x0004583d) field_cale_ev_pane_g3_ParamLimits

0x5ca2,	// (0x0004583d) field_cale_ev_pane_g3

0x0002,

0xf67e,	// (0x0004f219) field_cale_ev_pane_g_ParamLimits

0xf67e,	// (0x0004f219) field_cale_ev_pane_g

0x5cba,	// (0x00045855) field_cale_ev_pane_t1_ParamLimits

0x5cba,	// (0x00045855) field_cale_ev_pane_t1

0x5cd1,	// (0x0004586c) field_cale_ev_content_pane_t1_ParamLimits

0x5cd1,	// (0x0004586c) field_cale_ev_content_pane_t1

0xe858,	// (0x0004e3f3) bg_button_pane_cp01

0x1d3d,	// (0x000418d8) listscroll_cale_week_pane_ParamLimits

0xdd23,	// (0x0004d8be) popup_toolbar_window_cp01

0xdd2c,	// (0x0004d8c7) listscroll_cale_week_pane_t1_ParamLimits

0x1d3d,	// (0x000418d8) listscroll_cale_day_pane_ParamLimits

0xdd23,	// (0x0004d8be) popup_toolbar_window_cp02

0xe154,	// (0x0004dcef) listscroll_cale_day_pane_t1_ParamLimits

0x1d3d,	// (0x000418d8) main_cale_month_pane_ParamLimits

0xad87,	// (0x0004a922) popup_toolbar_window_cp03_ParamLimits

0xad87,	// (0x0004a922) popup_toolbar_window_cp03

0x4014,	// (0x00043baf) main_image_pane_g2_ParamLimits

0x4014,	// (0x00043baf) main_image_pane_g2

0x4025,	// (0x00043bc0) main_image_pane_g3_ParamLimits

0x4025,	// (0x00043bc0) main_image_pane_g3

0x0002,

0xf476,	// (0x0004f011) main_image_pane_g_ParamLimits

0xf476,	// (0x0004f011) main_image_pane_g

0xe972,	// (0x0004e50d) main_image_pane_t1_ParamLimits

0x4036,	// (0x00043bd1) main_image_pane_t2_ParamLimits

0x4036,	// (0x00043bd1) main_image_pane_t2

0x4048,	// (0x00043be3) main_image_pane_t3_ParamLimits

0x4048,	// (0x00043be3) main_image_pane_t3

0x4070,	// (0x00043c0b) main_image_pane_t4_ParamLimits

0x4070,	// (0x00043c0b) main_image_pane_t4

0x0003,

0xf47d,	// (0x0004f018) main_image_pane_t_ParamLimits

0xf47d,	// (0x0004f018) main_image_pane_t

0x4090,	// (0x00043c2b) popup_image_details_window_cp01

0x409a,	// (0x00043c35) popup_toobar_trans_pane_cp01_ParamLimits

0x409a,	// (0x00043c35) popup_toobar_trans_pane_cp01

0x52a0,	// (0x00044e3b) popup_image_details_window_ParamLimits

0x52a0,	// (0x00044e3b) popup_image_details_window

0xad58,	// (0x0004a8f3) popup_image_focus_window

0xadbe,	// (0x0004a959) camera2_autofocus_pane_ParamLimits

0xadbe,	// (0x0004a959) camera2_autofocus_pane

0xd470,	// (0x0004d00b) bg_popup_sub_pane_cp06

0x5cf2,	// (0x0004588d) popup_image_focus_window_g1

0x5cfa,	// (0x00045895) popup_image_focus_window_g2

0x5d02,	// (0x0004589d) popup_image_focus_window_g3

0x5d0a,	// (0x000458a5) popup_image_focus_window_g4

0x0003,

0xf685,	// (0x0004f220) popup_image_focus_window_g

0x5d12,	// (0x000458ad) popup_image_focus_window_t1

0x5d20,	// (0x000458bb) popup_image_focus_window_t2

0x5d30,	// (0x000458cb) popup_image_focus_window_t3

0x0002,

0xf68e,	// (0x0004f229) popup_image_focus_window_t

0xdba6,	// (0x0004d741) camera2_autofocus_pane_g1

0xdb4d,	// (0x0004d6e8) bg_tb_trans_pane_cp01

0x5d3e,	// (0x000458d9) popup_image_details_window_g1

0x5d51,	// (0x000458ec) popup_image_details_window_g2

0x0002,

0xf6a0,	// (0x0004f23b) popup_image_details_window_g

0x5d7a,	// (0x00045915) popup_image_details_window_t1

0x5d8c,	// (0x00045927) popup_image_details_window_t2

0x5da5,	// (0x00045940) popup_image_details_window_t3

0x5db9,	// (0x00045954) popup_image_details_window_t4

0x5dd4,	// (0x0004596f) popup_image_details_window_t5

0x0004,

0xf6a7,	// (0x0004f242) popup_image_details_window_t

0xdc04,	// (0x0004d79f) bg_calc_paper_pane_ParamLimits

0xd470,	// (0x0004d00b) grid_highlight_pane_cp013

0xabc3,	// (0x0004a75e) list_calc_pane_ParamLimits

0xabd5,	// (0x0004a770) scroll_pane_cp024

0xdc18,	// (0x0004d7b3) bg_calc_display_pane_ParamLimits

0x1b75,	// (0x00041710) calc_display_pane_t1_ParamLimits

0x1b87,	// (0x00041722) calc_display_pane_t2_ParamLimits

0xabdd,	// (0x0004a778) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0004eca7) calc_display_pane_t_ParamLimits

0x1c48,	// (0x000417e3) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0004ecc4) cell_calc_pane_g

0x1c51,	// (0x000417ec) cell_calc_pane_t1

0xdc6d,	// (0x0004d808) grid_highlight_pane_cp02_ParamLimits

0xdc83,	// (0x0004d81e) toolbar_button_pane_cp01_ParamLimits

0xdc83,	// (0x0004d81e) toolbar_button_pane_cp01

0xe9b7,	// (0x0004e552) temp_image_control_pane_ParamLimits

0xe9b7,	// (0x0004e552) temp_image_control_pane

0xdb4d,	// (0x0004d6e8) main_mp3_pane

0x5dee,	// (0x00045989) temp_image_control_pane_g1_ParamLimits

0x5dee,	// (0x00045989) temp_image_control_pane_g1

0x5dfc,	// (0x00045997) temp_image_control_pane_g2_ParamLimits

0x5dfc,	// (0x00045997) temp_image_control_pane_g2

0x5e0e,	// (0x000459a9) temp_image_control_pane_g3_ParamLimits

0x5e0e,	// (0x000459a9) temp_image_control_pane_g3

0x5e1e,	// (0x000459b9) temp_image_control_pane_g4_ParamLimits

0x5e1e,	// (0x000459b9) temp_image_control_pane_g4

0x0003,

0xf6b2,	// (0x0004f24d) temp_image_control_pane_g_ParamLimits

0xf6b2,	// (0x0004f24d) temp_image_control_pane_g

0x5dee,	// (0x00045989) main_mp3_pane_g1

0x5e31,	// (0x000459cc) main_mp3_pane_g2

0x0007,

0xf6bb,	// (0x0004f256) main_mp3_pane_g

0x5e7c,	// (0x00045a17) main_mp3_pane_t1

0xdbb4,	// (0x0004d74f) main_camera_pane_g8_ParamLimits

0xdbb4,	// (0x0004d74f) main_camera_pane_g8

0x2480,	// (0x0004201b) main_video_pane_g7_ParamLimits

0x2480,	// (0x0004201b) main_video_pane_g7

0xddd8,	// (0x0004d973) main_camera2_pane_t7_ParamLimits

0xddd8,	// (0x0004d973) main_camera2_pane_t7

0xdf0c,	// (0x0004daa7) scroll_pane_cp025_ParamLimits

0xdf0c,	// (0x0004daa7) scroll_pane_cp025

0xdf20,	// (0x0004dabb) scroll_pane_cp026_ParamLimits

0xdf20,	// (0x0004dabb) scroll_pane_cp026

0xdf2f,	// (0x0004daca) wml_content_pane_ParamLimits

0xd470,	// (0x0004d00b) main_touch_calib_pane

0x5f5a,	// (0x00045af5) main_touch_calib_pane_g1

0x5f6c,	// (0x00045b07) main_touch_calib_pane_g2

0x5f7e,	// (0x00045b19) main_touch_calib_pane_g3

0x5f90,	// (0x00045b2b) main_touch_calib_pane_g4

0x0003,

0xf6d9,	// (0x0004f274) main_touch_calib_pane_g

0x5fa2,	// (0x00045b3d) main_touch_calib_pane_t1

0x5fbc,	// (0x00045b57) main_touch_calib_pane_t2

0x0004,

0xf6e2,	// (0x0004f27d) main_touch_calib_pane_t

0xe64b,	// (0x0004e1e6) mup_progress_pane_cp02

0xe66a,	// (0x0004e205) navi_pane_g1

0xe6cc,	// (0x0004e267) navi_pane_mp_t3

0xdb4d,	// (0x0004d6e8) main_mp3_pane_ParamLimits

0x546c,	// (0x00045007) navi_pane_ParamLimits

0x5dee,	// (0x00045989) main_mp3_pane_g1_ParamLimits

0x5e31,	// (0x000459cc) main_mp3_pane_g2_ParamLimits

0x5e3d,	// (0x000459d8) main_mp3_pane_g3_ParamLimits

0x5e3d,	// (0x000459d8) main_mp3_pane_g3

0x5e4b,	// (0x000459e6) main_mp3_pane_g4_ParamLimits

0x5e4b,	// (0x000459e6) main_mp3_pane_g4

0xdba6,	// (0x0004d741) main_mp3_pane_g5_ParamLimits

0xdba6,	// (0x0004d741) main_mp3_pane_g5

0x5e57,	// (0x000459f2) main_mp3_pane_g6_ParamLimits

0x5e57,	// (0x000459f2) main_mp3_pane_g6

0x5e64,	// (0x000459ff) main_mp3_pane_g7_ParamLimits

0x5e64,	// (0x000459ff) main_mp3_pane_g7

0x5e70,	// (0x00045a0b) main_mp3_pane_g8_ParamLimits

0x5e70,	// (0x00045a0b) main_mp3_pane_g8

0xf6bb,	// (0x0004f256) main_mp3_pane_g_ParamLimits

0x5e8a,	// (0x00045a25) main_mp3_pane_t2

0x5e98,	// (0x00045a33) main_mp3_pane_t3

0x5ea6,	// (0x00045a41) main_mp3_pane_t4

0x5eb4,	// (0x00045a4f) main_mp3_pane_t5

0x0005,

0xf6cc,	// (0x0004f267) main_mp3_pane_t

0x5ed0,	// (0x00045a6b) mup_progress_pane_cp01

0xab6c,	// (0x0004a707) aid_zoom_text_secondary2

0x5c3a,	// (0x000457d5) list_cale_ev2_pane

0x5c42,	// (0x000457dd) scroll_pane_cp023_ParamLimits

0x6016,	// (0x00045bb1) field_cale_ev2_pane_ParamLimits

0x6016,	// (0x00045bb1) field_cale_ev2_pane

0x0f11,	// (0x00040aac) field_cale_ev2_pane_g1_ParamLimits

0x0f11,	// (0x00040aac) field_cale_ev2_pane_g1

0x0f1d,	// (0x00040ab8) field_cale_ev2_pane_g2_ParamLimits

0x0f1d,	// (0x00040ab8) field_cale_ev2_pane_g2

0x0f35,	// (0x00040ad0) field_cale_ev2_pane_g3_ParamLimits

0x0f35,	// (0x00040ad0) field_cale_ev2_pane_g3

0x0003,

0xf6ed,	// (0x0004f288) field_cale_ev2_pane_g_ParamLimits

0xf6ed,	// (0x0004f288) field_cale_ev2_pane_g

0x0f4d,	// (0x00040ae8) field_cale_ev2_pane_t1_ParamLimits

0x0f4d,	// (0x00040ae8) field_cale_ev2_pane_t1

0x0f64,	// (0x00040aff) field_cale_ev2_pane_t2_ParamLimits

0x0f64,	// (0x00040aff) field_cale_ev2_pane_t2

0x0001,

0xf6f6,	// (0x0004f291) field_cale_ev2_pane_t_ParamLimits

0xf6f6,	// (0x0004f291) field_cale_ev2_pane_t

0x3eac,	// (0x00043a47) main_postcard_pane_g5_ParamLimits

0x3eac,	// (0x00043a47) main_postcard_pane_g5

0x3ec2,	// (0x00043a5d) main_postcard_pane_g6_ParamLimits

0x3ec2,	// (0x00043a5d) main_postcard_pane_g6

0xdb4d,	// (0x0004d6e8) camera2_autofocus_pane_cp_ParamLimits

0xdb4d,	// (0x0004d6e8) camera2_autofocus_pane_cp

0xdb4d,	// (0x0004d6e8) main_mup3_pane

0x6084,	// (0x00045c1f) main_mup3_pane_g1_ParamLimits

0x6084,	// (0x00045c1f) main_mup3_pane_g1

0x60a6,	// (0x00045c41) main_mup3_pane_g2_ParamLimits

0x60a6,	// (0x00045c41) main_mup3_pane_g2

0x6121,	// (0x00045cbc) main_mup3_pane_g3_ParamLimits

0x6121,	// (0x00045cbc) main_mup3_pane_g3

0x618b,	// (0x00045d26) main_mup3_pane_g4_ParamLimits

0x618b,	// (0x00045d26) main_mup3_pane_g4

0x61f5,	// (0x00045d90) main_mup3_pane_g5_ParamLimits

0x61f5,	// (0x00045d90) main_mup3_pane_g5

0x625f,	// (0x00045dfa) main_mup3_pane_g6_ParamLimits

0x625f,	// (0x00045dfa) main_mup3_pane_g6

0xdbb4,	// (0x0004d74f) main_mup3_pane_g7_ParamLimits

0xdbb4,	// (0x0004d74f) main_mup3_pane_g7

0x0007,

0xf706,	// (0x0004f2a1) main_mup3_pane_g_ParamLimits

0xf706,	// (0x0004f2a1) main_mup3_pane_g

0x62e3,	// (0x00045e7e) main_mup3_pane_t1_ParamLimits

0x62e3,	// (0x00045e7e) main_mup3_pane_t1

0x6355,	// (0x00045ef0) main_mup3_pane_t2_ParamLimits

0x6355,	// (0x00045ef0) main_mup3_pane_t2

0x642b,	// (0x00045fc6) main_mup3_pane_t4_ParamLimits

0x642b,	// (0x00045fc6) main_mup3_pane_t4

0x6489,	// (0x00046024) main_mup3_pane_t5_ParamLimits

0x6489,	// (0x00046024) main_mup3_pane_t5

0x654d,	// (0x000460e8) main_mup3_pane_t6_ParamLimits

0x654d,	// (0x000460e8) main_mup3_pane_t6

0x0005,

0xf717,	// (0x0004f2b2) main_mup3_pane_t_ParamLimits

0xf717,	// (0x0004f2b2) main_mup3_pane_t

0x6605,	// (0x000461a0) mup3_progress_pane_ParamLimits

0x6605,	// (0x000461a0) mup3_progress_pane

0x669d,	// (0x00046238) popup_mup3_control_window_ParamLimits

0x669d,	// (0x00046238) popup_mup3_control_window

0x66bd,	// (0x00046258) popup_mup3_text_window

0x66db,	// (0x00046276) mup3_progress_pane_t1

0x66fa,	// (0x00046295) mup3_progress_pane_t2

0x6719,	// (0x000462b4) mup3_progress_pane_t3

0x0002,

0xf724,	// (0x0004f2bf) mup3_progress_pane_t

0x6736,	// (0x000462d1) mup_progress_pane_cp03

0xd470,	// (0x0004d00b) bg_tb_trans_pane_cp04

0x6746,	// (0x000462e1) mup3_volume_pane

0x674e,	// (0x000462e9) popup_mup3_control_window_g1

0x6757,	// (0x000462f2) mup3_volume_pane_g1

0x6760,	// (0x000462fb) mup3_volume_pane_g2

0x6769,	// (0x00046304) mup3_volume_pane_g3

0x0002,

0xf72b,	// (0x0004f2c6) mup3_volume_pane_g

0xd470,	// (0x0004d00b) bg_tb_trans_pane_cp03

0x6772,	// (0x0004630d) popup_mup3_text_window_g1

0x677a,	// (0x00046315) popup_mup3_text_window_t1

0xdc60,	// (0x0004d7fb) list_calc_item_pane_g1_ParamLimits

0x58fe,	// (0x00045499) mup_volume_pane_cp_g1

0x5fd6,	// (0x00045b71) main_touch_calib_pane_t3

0x5fea,	// (0x00045b85) main_touch_calib_pane_t4

0x6000,	// (0x00045b9b) main_touch_calib_pane_t5

0xab48,	// (0x0004a6e3) aid_cell_size_toolbar2

0xab50,	// (0x0004a6eb) aid_popup3_width_pane

0xab5c,	// (0x0004a6f7) aid_zoom_text_msg_primary

0x236e,	// (0x00041f09) vorec_t7

0xdc24,	// (0x0004d7bf) bg_calc_paper_pane_g1_ParamLimits

0xdc30,	// (0x0004d7cb) bg_calc_paper_pane_g2_ParamLimits

0xdc3c,	// (0x0004d7d7) bg_calc_paper_pane_g3_ParamLimits

0xdc48,	// (0x0004d7e3) bg_calc_paper_pane_g4_ParamLimits

0xdc54,	// (0x0004d7ef) bg_calc_paper_pane_g5_ParamLimits

0x1bd4,	// (0x0004176f) bg_calc_paper_pane_g6_ParamLimits

0x1be2,	// (0x0004177d) bg_calc_paper_pane_g7_ParamLimits

0x1bf0,	// (0x0004178b) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0004ecae) bg_calc_paper_pane_g_ParamLimits

0x1c03,	// (0x0004179e) calc_bg_paper_pane_g9_ParamLimits

0xdb4d,	// (0x0004d6e8) image_qvga_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) image_qvga_pane

0xdb2b,	// (0x0004d6c6) bg_popup_sub_pane_cp04_ParamLimits

0xe8ee,	// (0x0004e489) popup_mup_playback_window_g1_ParamLimits

0xe8fa,	// (0x0004e495) popup_mup_playback_window_t1_ParamLimits

0xe90f,	// (0x0004e4aa) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x0004f00c) popup_mup_playback_window_t_ParamLimits

0xdbb4,	// (0x0004d74f) main_mup2_pane_g3_ParamLimits

0xdbb4,	// (0x0004d74f) main_mup2_pane_g3

0x2677,	// (0x00042212) popup_toolbar_window_cp04

0xed0a,	// (0x0004e8a5) popup_call2_audio_second_window_g3_ParamLimits

0xed0a,	// (0x0004e8a5) popup_call2_audio_second_window_g3

0x4512,	// (0x000440ad) popup_call2_audio_first_window_g4_ParamLimits

0x4512,	// (0x000440ad) popup_call2_audio_first_window_g4

0x4b91,	// (0x0004472c) popup_call2_audio_in_window_g4_ParamLimits

0x4b91,	// (0x0004472c) popup_call2_audio_in_window_g4

0x3ff6,	// (0x00043b91) aid_area_sk_bg_cut_ParamLimits

0x3ff6,	// (0x00043b91) aid_area_sk_bg_cut

0xe924,	// (0x0004e4bf) aid_area_sk_bg_cut_2_ParamLimits

0xe924,	// (0x0004e4bf) aid_area_sk_bg_cut_2

0xd470,	// (0x0004d00b) aid_placing_details_win

0xd470,	// (0x0004d00b) aid_placing_details_win_2

0xdba6,	// (0x0004d741) camera2_autofocus_pane_g1_ParamLimits

0x1932,	// (0x000414cd) popup_fixed_preview_cale_window_ParamLimits

0x1932,	// (0x000414cd) popup_fixed_preview_cale_window

0xe713,	// (0x0004e2ae) navi_slider_pane_g3

0xe71c,	// (0x0004e2b7) navi_slider_pane_g4

0xe725,	// (0x0004e2c0) navi_slider_pane_g5

0xe713,	// (0x0004e2ae) navi_slider_pane_g6

0xacf9,	// (0x0004a894) navi_slider_pane_g7

0xe825,	// (0x0004e3c0) mup_scale_pane_g3

0xe82e,	// (0x0004e3c9) mup_scale_pane_g4

0xe837,	// (0x0004e3d2) mup_scale_pane_g5

0x3d53,	// (0x000438ee) mup_scale_pane_g6

0x3d5c,	// (0x000438f7) mup_scale_pane_g7

0xde00,	// (0x0004d99b) cams2_slider_pane_g3

0xde00,	// (0x0004d99b) cams2_slider_pane_g4

0xde00,	// (0x0004d99b) cams2_slider_pane_g5

0xde00,	// (0x0004d99b) cams2_slider_pane_g6

0xde00,	// (0x0004d99b) cams2_slider_pane_g7

0xde00,	// (0x0004d99b) camera2_autofocus_pane_cp_g1

0x516d,	// (0x00044d08) bg_popup_preview_window_pane_cp02_ParamLimits

0x516d,	// (0x00044d08) bg_popup_preview_window_pane_cp02

0x6788,	// (0x00046323) list_fp_cale_pane_ParamLimits

0x6788,	// (0x00046323) list_fp_cale_pane

0x6794,	// (0x0004632f) popup_fixed_preview_cale_window_t1_ParamLimits

0x6794,	// (0x0004632f) popup_fixed_preview_cale_window_t1

0x67a6,	// (0x00046341) popup_fixed_preview_cale_window_t2_ParamLimits

0x67a6,	// (0x00046341) popup_fixed_preview_cale_window_t2

0x67bb,	// (0x00046356) popup_fixed_preview_cale_window_t3_ParamLimits

0x67bb,	// (0x00046356) popup_fixed_preview_cale_window_t3

0x0002,

0xf732,	// (0x0004f2cd) popup_fixed_preview_cale_window_t_ParamLimits

0xf732,	// (0x0004f2cd) popup_fixed_preview_cale_window_t

0x67de,	// (0x00046379) list_single_fp_cale_pane_ParamLimits

0x67de,	// (0x00046379) list_single_fp_cale_pane

0x67f6,	// (0x00046391) list_single_fp_cale_pane_g1_ParamLimits

0x67f6,	// (0x00046391) list_single_fp_cale_pane_g1

0x6802,	// (0x0004639d) list_single_fp_cale_pane_g2_ParamLimits

0x6802,	// (0x0004639d) list_single_fp_cale_pane_g2

0x0002,

0xf739,	// (0x0004f2d4) list_single_fp_cale_pane_g_ParamLimits

0xf739,	// (0x0004f2d4) list_single_fp_cale_pane_g

0x681b,	// (0x000463b6) list_single_fp_cale_pane_t1_ParamLimits

0x681b,	// (0x000463b6) list_single_fp_cale_pane_t1

0x682d,	// (0x000463c8) list_single_fp_cale_pane_t2_ParamLimits

0x682d,	// (0x000463c8) list_single_fp_cale_pane_t2

0x0001,

0xf740,	// (0x0004f2db) list_single_fp_cale_pane_t_ParamLimits

0xf740,	// (0x0004f2db) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd470,	// (0x0004d00b) main_dialer_pane

0xd470,	// (0x0004d00b) aid_cell_size_keypad

0xd470,	// (0x0004d00b) dialer_ne_pane

0xd470,	// (0x0004d00b) grid_dialer_command_1_pane

0xd470,	// (0x0004d00b) grid_dialer_command_2_pane

0xd470,	// (0x0004d00b) grid_dialer_keypad_pane

0x6860,	// (0x000463fb) bg_popup_call_pane_cp06_ParamLimits

0x6860,	// (0x000463fb) bg_popup_call_pane_cp06

0x6860,	// (0x000463fb) dialer_ne_clear_pane_ParamLimits

0x6860,	// (0x000463fb) dialer_ne_clear_pane

0xde00,	// (0x0004d99b) dialer_ne_pane_g1

0xddd8,	// (0x0004d973) dialer_ne_pane_t1_ParamLimits

0xddd8,	// (0x0004d973) dialer_ne_pane_t1

0x686e,	// (0x00046409) dialer_ne_pane_t2_ParamLimits

0x686e,	// (0x00046409) dialer_ne_pane_t2

0x6896,	// (0x00046431) dialer_ne_pane_t3_ParamLimits

0x6896,	// (0x00046431) dialer_ne_pane_t3

0x0002,

0xf745,	// (0x0004f2e0) dialer_ne_pane_t_ParamLimits

0xf745,	// (0x0004f2e0) dialer_ne_pane_t

0x6896,	// (0x00046431) dialer_ne_pane_t3_copy1_ParamLimits

0x6896,	// (0x00046431) dialer_ne_pane_t3_copy1

0x68c3,	// (0x0004645e) cell_dialer_keypad_pane_ParamLimits

0x68c3,	// (0x0004645e) cell_dialer_keypad_pane

0xdb4d,	// (0x0004d6e8) cell_dialer_command_1_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) cell_dialer_command_1_pane

0x68da,	// (0x00046475) cell_dialer_command_2_pane_ParamLimits

0x68da,	// (0x00046475) cell_dialer_command_2_pane

0xdb4d,	// (0x0004d6e8) bg_button_pane_cp02_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_button_pane_cp02

0xdba6,	// (0x0004d741) cell_dialer_keypad_pane_g1_ParamLimits

0xdba6,	// (0x0004d741) cell_dialer_keypad_pane_g1

0xdb4d,	// (0x0004d6e8) bg_button_pane_cp03_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_button_pane_cp03

0xdba6,	// (0x0004d741) cell_dialer_command_1_pane_g1_ParamLimits

0xdba6,	// (0x0004d741) cell_dialer_command_1_pane_g1

0xd470,	// (0x0004d00b) bg_button_pane_cp04

0xde00,	// (0x0004d99b) cell_dialer_command_2_pane_g1

0xd470,	// (0x0004d00b) bg_button_pane_cp06

0xde00,	// (0x0004d99b) dialer_ne_clear_pane_g1

0x3a62,	// (0x000435fd) navi_pane_g2

0x3a90,	// (0x0004362b) navi_pane_g3

0x0002,

0xf374,	// (0x0004ef0f) navi_pane_g

0x3abb,	// (0x00043656) navi_pane_mv_g2

0x3ae2,	// (0x0004367d) navi_pane_mv_g5

0x3aea,	// (0x00043685) navi_pane_mv_t1

0xdc18,	// (0x0004d7b3) main_clock2_pane

0xdb4d,	// (0x0004d6e8) main_clock2_list_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) main_clock2_list_pane

0x697f,	// (0x0004651a) main_clock2_pane_t1_ParamLimits

0x697f,	// (0x0004651a) main_clock2_pane_t1

0x69ba,	// (0x00046555) main_clock2_pane_t2_ParamLimits

0x69ba,	// (0x00046555) main_clock2_pane_t2

0x0004,

0xf751,	// (0x0004f2ec) main_clock2_pane_t_ParamLimits

0xf751,	// (0x0004f2ec) main_clock2_pane_t

0x6a59,	// (0x000465f4) popup_clock_analogue_window_cp03_ParamLimits

0x6a59,	// (0x000465f4) popup_clock_analogue_window_cp03

0x6a7e,	// (0x00046619) popup_clock_digital_window_cp02_ParamLimits

0x6a7e,	// (0x00046619) popup_clock_digital_window_cp02

0x6af7,	// (0x00046692) main_clock2_list_single_pane_ParamLimits

0x6af7,	// (0x00046692) main_clock2_list_single_pane

0xddb6,	// (0x0004d951) list_highlight_pane_cp05

0x6b09,	// (0x000466a4) main_clock2_list_single_pane_t1

0x2677,	// (0x00042212) popup_toolbar_window_cp04_ParamLimits

0xdbb4,	// (0x0004d74f) camera2_autofocus_pane_g2_ParamLimits

0xdbb4,	// (0x0004d74f) camera2_autofocus_pane_g2

0xdbb4,	// (0x0004d74f) camera2_autofocus_pane_g3_ParamLimits

0xdbb4,	// (0x0004d74f) camera2_autofocus_pane_g3

0xdbb4,	// (0x0004d74f) camera2_autofocus_pane_g4_ParamLimits

0xdbb4,	// (0x0004d74f) camera2_autofocus_pane_g4

0xdbb4,	// (0x0004d74f) camera2_autofocus_pane_g5_ParamLimits

0xdbb4,	// (0x0004d74f) camera2_autofocus_pane_g5

0x0004,

0xf695,	// (0x0004f230) camera2_autofocus_pane_g_ParamLimits

0xf695,	// (0x0004f230) camera2_autofocus_pane_g

0x603a,	// (0x00045bd5) camera2_autofocus_pane_cp_g2

0x6042,	// (0x00045bdd) camera2_autofocus_pane_cp_g3

0x604a,	// (0x00045be5) camera2_autofocus_pane_cp_g4

0x6052,	// (0x00045bed) camera2_autofocus_pane_cp_g5

0x0004,

0xf6fb,	// (0x0004f296) camera2_autofocus_pane_cp_g

0xd470,	// (0x0004d00b) popup_dialer_spcha_window

0xd470,	// (0x0004d00b) bg_popup_sub_pane_cp07

0xd470,	// (0x0004d00b) list_spcha_pane

0x6bc0,	// (0x0004675b) list_single_spcha_pane_ParamLimits

0x6bc0,	// (0x0004675b) list_single_spcha_pane

0xd470,	// (0x0004d00b) list_highlight_pane_cp06

0xe32c,	// (0x0004dec7) list_single_spcha_pane_t1

0x493b,	// (0x000444d6) popup_call2_audio_out_window_g4_ParamLimits

0x493b,	// (0x000444d6) popup_call2_audio_out_window_g4

0xd470,	// (0x0004d00b) main_imed2_pane

0xad62,	// (0x0004a8fd) popup_imed_adjust2_window

0x52b8,	// (0x00044e53) popup_imed_trans_window_ParamLimits

0x52b8,	// (0x00044e53) popup_imed_trans_window

0x5a03,	// (0x0004559e) popup_blid_sat_info2_window_t1

0x5a11,	// (0x000455ac) popup_blid_sat_info2_window_t2

0x000a,

0xf62a,	// (0x0004f1c5) popup_blid_sat_info2_window_t

0x6bd2,	// (0x0004676d) aid_size_cell_colour_35

0x6bf2,	// (0x0004678d) aid_size_cell_colour_112

0x6c12,	// (0x000467ad) aid_size_cell_effect

0xf077,	// (0x0004ec12) bg_tb_trans_pane_cp02

0xe25d,	// (0x0004ddf8) heading_imed_pane

0x6c32,	// (0x000467cd) listscroll_imed_pane

0x6c3e,	// (0x000467d9) heading_imed_pane_g1

0x6c46,	// (0x000467e1) heading_imed_pane_t1

0x6c54,	// (0x000467ef) grid_imed_colour_35_pane_ParamLimits

0x6c54,	// (0x000467ef) grid_imed_colour_35_pane

0x6c70,	// (0x0004680b) grid_imed_effect_pane

0x6c87,	// (0x00046822) list_imed_aspect_pane

0x6c8f,	// (0x0004682a) scroll_pane_cp027_ParamLimits

0x6c8f,	// (0x0004682a) scroll_pane_cp027

0x6ca0,	// (0x0004683b) cell_imed_effect_pane_ParamLimits

0x6ca0,	// (0x0004683b) cell_imed_effect_pane

0x6ccb,	// (0x00046866) cell_imed_colour_pane_ParamLimits

0x6ccb,	// (0x00046866) cell_imed_colour_pane

0x6d15,	// (0x000468b0) cell_imed_colour_pane_g1_ParamLimits

0x6d15,	// (0x000468b0) cell_imed_colour_pane_g1

0x6d26,	// (0x000468c1) hgihlgiht_grid_pane_cp016_ParamLimits

0x6d26,	// (0x000468c1) hgihlgiht_grid_pane_cp016

0x6d37,	// (0x000468d2) cell_imed_effect_pane_g1

0x6d3f,	// (0x000468da) grid_highlight_pane_cp017

0x6d48,	// (0x000468e3) list_imed_single_pane_ParamLimits

0x6d48,	// (0x000468e3) list_imed_single_pane

0xd470,	// (0x0004d00b) list_highlight_pane_cp07

0x6d5c,	// (0x000468f7) list_imed_aspect_pane_comp1_t1

0xf077,	// (0x0004ec12) bg_tb_trans_pane_cp05

0x6d7e,	// (0x00046919) popup_imed_adjust2_window_g1

0x6da5,	// (0x00046940) popup_imed_adjust2_window_t1

0x6dbd,	// (0x00046958) slider_imed_adjust_pane

0xae1e,	// (0x0004a9b9) slider_imed_adjust_pane_g1

0xae2e,	// (0x0004a9c9) slider_imed_adjust_pane_g2

0xae3e,	// (0x0004a9d9) slider_imed_adjust_pane_g3

0xae4f,	// (0x0004a9ea) slider_imed_adjust_pane_g4

0x0003,

0xf76e,	// (0x0004f309) slider_imed_adjust_pane_g

0x6dd1,	// (0x0004696c) aid_size_cell_clipart2

0xae60,	// (0x0004a9fb) grid_imed_clipart_pane

0xae6a,	// (0x0004aa05) scroll_pane_cp031

0x6ddd,	// (0x00046978) cell_imed_clipart_pane_ParamLimits

0x6ddd,	// (0x00046978) cell_imed_clipart_pane

0x6dfa,	// (0x00046995) cell_imed_clipart_pane_g1

0xd470,	// (0x0004d00b) grid_highlight_pane_cp014

0x695d,	// (0x000464f8) main_clock2_pane_g1_ParamLimits

0x695d,	// (0x000464f8) main_clock2_pane_g1

0x6a9e,	// (0x00046639) aid_call2_pane_cp10

0x6ab0,	// (0x0004664b) aid_call_pane_cp10

0xe63f,	// (0x0004e1da) popup_clock_analogue_window_cp10_g1

0xe63f,	// (0x0004e1da) popup_clock_analogue_window_cp10_g2

0x6ac2,	// (0x0004665d) popup_clock_analogue_window_cp10_g3

0x6ac2,	// (0x0004665d) popup_clock_analogue_window_cp10_g4

0xe63f,	// (0x0004e1da) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75c,	// (0x0004f2f7) popup_clock_analogue_window_cp10_g

0x6ad8,	// (0x00046673) popup_clock_analogue_window_cp10_t1

0x6b17,	// (0x000466b2) clock_digital_number_pane_cp10_ParamLimits

0x6b17,	// (0x000466b2) clock_digital_number_pane_cp10

0x6b31,	// (0x000466cc) clock_digital_number_pane_cp11_ParamLimits

0x6b31,	// (0x000466cc) clock_digital_number_pane_cp11

0x6b4b,	// (0x000466e6) clock_digital_number_pane_cp12_ParamLimits

0x6b4b,	// (0x000466e6) clock_digital_number_pane_cp12

0x6b67,	// (0x00046702) clock_digital_number_pane_cp13_ParamLimits

0x6b67,	// (0x00046702) clock_digital_number_pane_cp13

0x6b83,	// (0x0004671e) clock_digital_separator_pane_cp10_ParamLimits

0x6b83,	// (0x0004671e) clock_digital_separator_pane_cp10

0x6b9f,	// (0x0004673a) popup_clock_digital_window_cp02_t1_ParamLimits

0x6b9f,	// (0x0004673a) popup_clock_digital_window_cp02_t1

0xdb23,	// (0x0004d6be) clock_digital_number_pane_cp10_g1

0xdb23,	// (0x0004d6be) clock_digital_number_pane_cp10_g2

0x0001,

0xf777,	// (0x0004f312) clock_digital_number_pane_cp10_g

0xdb23,	// (0x0004d6be) clock_digital_separator_pane_cp10_g1

0xdb23,	// (0x0004d6be) clock_digital_separator_pane_g2_cp10

0xe6da,	// (0x0004e275) navi_pane_vded_g4

0xe6e3,	// (0x0004e27e) navi_pane_vded_g5

0xe6ec,	// (0x0004e287) navi_pane_vded_t1

0xd470,	// (0x0004d00b) main_vded_pane

0x6e03,	// (0x0004699e) main_vded_pane_g1

0x6e0f,	// (0x000469aa) main_vded_pane_g2

0x6e1b,	// (0x000469b6) main_vded_pane_g3

0x0002,

0xf77c,	// (0x0004f317) main_vded_pane_g

0x6e27,	// (0x000469c2) main_vded_pane_t1

0x6e35,	// (0x000469d0) main_vded_pane_t2

0x0001,

0xf783,	// (0x0004f31e) main_vded_pane_t

0x6e43,	// (0x000469de) vded_slider_pane

0x6e4d,	// (0x000469e8) vded_video_pane

0xae72,	// (0x0004aa0d) vded_video_pane_g1

0x6e59,	// (0x000469f4) vded_video_pane_g2

0xde00,	// (0x0004d99b) vded_video_pane_g3

0x0002,

0xf788,	// (0x0004f323) vded_video_pane_g

0xae7c,	// (0x0004aa17) vded_slider_pane_g1

0x58fe,	// (0x00045499) vded_slider_pane_g2

0xae85,	// (0x0004aa20) vded_slider_pane_g3

0xae8e,	// (0x0004aa29) vded_slider_pane_g4

0xae97,	// (0x0004aa32) vded_slider_pane_g5

0x0004,

0xf78f,	// (0x0004f32a) vded_slider_pane_g

0x6687,	// (0x00046222) mup3_rocker_pane_ParamLimits

0x6687,	// (0x00046222) mup3_rocker_pane

0x6e62,	// (0x000469fd) mup3_control_keys_pane_g1

0x6e6a,	// (0x00046a05) mup3_control_keys_pane_g2

0x6e72,	// (0x00046a0d) mup3_control_keys_pane_g3

0x6e7a,	// (0x00046a15) mup3_control_keys_pane_g4

0x0003,

0xf79a,	// (0x0004f335) mup3_control_keys_pane_g

0x1967,	// (0x00041502) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1967,	// (0x00041502) popup_toolbar2_fixed_window_cp01

0x66c5,	// (0x00046260) popup_toolbar2_fixed_window_cp02_ParamLimits

0x66c5,	// (0x00046260) popup_toolbar2_fixed_window_cp02

0xee7c,	// (0x0004ea17) popup_call2_audio_second_window_t4_ParamLimits

0xee7c,	// (0x0004ea17) popup_call2_audio_second_window_t4

0x47a8,	// (0x00044343) popup_call2_audio_first_window_t6_ParamLimits

0x47a8,	// (0x00044343) popup_call2_audio_first_window_t6

0x4a3e,	// (0x000445d9) popup_call2_audio_out_window_t6_ParamLimits

0x4a3e,	// (0x000445d9) popup_call2_audio_out_window_t6

0xd470,	// (0x0004d00b) main_vitu_pane

0xdb4d,	// (0x0004d6e8) aid_size_cell_itu_ParamLimits

0xdb4d,	// (0x0004d6e8) aid_size_cell_itu

0xdb4d,	// (0x0004d6e8) bg_popup_window_pane_cp08_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_popup_window_pane_cp08

0xdb4d,	// (0x0004d6e8) field_vitu_entry_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) field_vitu_entry_pane

0xdb4d,	// (0x0004d6e8) grid_vitu_function_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) grid_vitu_function_pane

0xdb4d,	// (0x0004d6e8) grid_vitu_itu_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) grid_vitu_itu_pane

0xdb4d,	// (0x0004d6e8) cell_vitu_itu_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) cell_vitu_itu_pane

0xdb4d,	// (0x0004d6e8) cell_vitu_function_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) cell_vitu_function_pane

0xdb4d,	// (0x0004d6e8) bg_popup_sub_pane_cp08_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_popup_sub_pane_cp08

0xddec,	// (0x0004d987) field_vitu_entry_pane_t1_ParamLimits

0xddec,	// (0x0004d987) field_vitu_entry_pane_t1

0xaea0,	// (0x0004aa3b) field_vitu_entry_pane_t2_ParamLimits

0xaea0,	// (0x0004aa3b) field_vitu_entry_pane_t2

0x0001,

0xf7a3,	// (0x0004f33e) field_vitu_entry_pane_t_ParamLimits

0xf7a3,	// (0x0004f33e) field_vitu_entry_pane_t

0x576c,	// (0x00045307) bg_button_pane_cp05_ParamLimits

0x576c,	// (0x00045307) bg_button_pane_cp05

0xaebd,	// (0x0004aa58) cell_vitu_itu_pane_g1

0xf063,	// (0x0004ebfe) cell_vitu_itu_pane_t1_ParamLimits

0xf063,	// (0x0004ebfe) cell_vitu_itu_pane_t1

0xf063,	// (0x0004ebfe) cell_vitu_itu_pane_t2_ParamLimits

0xf063,	// (0x0004ebfe) cell_vitu_itu_pane_t2

0x0002,

0xf7a8,	// (0x0004f343) cell_vitu_itu_pane_t_ParamLimits

0xf7a8,	// (0x0004f343) cell_vitu_itu_pane_t

0xd470,	// (0x0004d00b) bg_button_pane_cp07

0xde00,	// (0x0004d99b) cell_vitu_function_pane_g1

0xabbb,	// (0x0004a756) main_calc_pane_g1

0x178f,	// (0x0004132a) aid_visual_content_pane

0xd470,	// (0x0004d00b) main_vradio_pane

0xdba6,	// (0x0004d741) main_vradio_pane_g1_ParamLimits

0xdba6,	// (0x0004d741) main_vradio_pane_g1

0xdbb4,	// (0x0004d74f) main_vradio_pane_g2_ParamLimits

0xdbb4,	// (0x0004d74f) main_vradio_pane_g2

0x0001,

0xf7af,	// (0x0004f34a) main_vradio_pane_g_ParamLimits

0xf7af,	// (0x0004f34a) main_vradio_pane_g

0xddec,	// (0x0004d987) main_vradio_pane_t1_ParamLimits

0xddec,	// (0x0004d987) main_vradio_pane_t1

0xddec,	// (0x0004d987) main_vradio_pane_t2_ParamLimits

0xddec,	// (0x0004d987) main_vradio_pane_t2

0xddd8,	// (0x0004d973) main_vradio_pane_t3_ParamLimits

0xddd8,	// (0x0004d973) main_vradio_pane_t3

0x0002,

0xf7b4,	// (0x0004f34f) main_vradio_pane_t_ParamLimits

0xf7b4,	// (0x0004f34f) main_vradio_pane_t

0xdb4d,	// (0x0004d6e8) vradio_rocker_control_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) vradio_rocker_control_pane

0xdb4d,	// (0x0004d6e8) vradio_station_info_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) vradio_station_info_pane

0xdb4d,	// (0x0004d6e8) vradio_frequency_info_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) vradio_frequency_info_pane

0xde00,	// (0x0004d99b) vradio_station_info_pane_g1

0xf063,	// (0x0004ebfe) vradio_station_info_pane_t1_ParamLimits

0xf063,	// (0x0004ebfe) vradio_station_info_pane_t1

0xddd8,	// (0x0004d973) vradio_station_info_pane_t2_ParamLimits

0xddd8,	// (0x0004d973) vradio_station_info_pane_t2

0x0001,

0xf7bb,	// (0x0004f356) vradio_station_info_pane_t_ParamLimits

0xf7bb,	// (0x0004f356) vradio_station_info_pane_t

0xd470,	// (0x0004d00b) vradio_tuning_pane

0x6e8a,	// (0x00046a25) vradio_rocker_control_pane_g1

0xaed9,	// (0x0004aa74) vradio_rocker_control_pane_g2

0x6e94,	// (0x00046a2f) vradio_rocker_control_pane_g3

0x6e9e,	// (0x00046a39) vradio_rocker_control_pane_g4

0x6ea8,	// (0x00046a43) vradio_rocker_control_pane_g5

0x0004,

0xf7c0,	// (0x0004f35b) vradio_rocker_control_pane_g

0xde00,	// (0x0004d99b) vradio_frequency_info_pane_g1

0xddec,	// (0x0004d987) vradio_frequency_info_pane_t1_ParamLimits

0xddec,	// (0x0004d987) vradio_frequency_info_pane_t1

0x6eb2,	// (0x00046a4d) vradio_tuning_pane_g1

0x6ebd,	// (0x00046a58) vradio_tuning_pane_t1

0xab74,	// (0x0004a70f) area_side_right_pane_ParamLimits

0xab74,	// (0x0004a70f) area_side_right_pane

0x5116,	// (0x00044cb1) status_small_pane_g1

0x511e,	// (0x00044cb9) status_small_pane_g2

0x5127,	// (0x00044cc2) status_small_pane_g3

0x5130,	// (0x00044ccb) status_small_pane_g4

0x0003,

0xf58c,	// (0x0004f127) status_small_pane_g

0x5139,	// (0x00044cd4) status_small_pane_t1

0xd470,	// (0x0004d00b) main_video3_pane

0xaee1,	// (0x0004aa7c) cams_zoom_vslider_pane

0xaee9,	// (0x0004aa84) image3_wide_pane_ParamLimits

0xaee9,	// (0x0004aa84) image3_wide_pane

0xaf03,	// (0x0004aa9e) image3_wide_small_pane

0xaf0f,	// (0x0004aaaa) main_video3_pane_g1_ParamLimits

0xaf0f,	// (0x0004aaaa) main_video3_pane_g1

0xaf2b,	// (0x0004aac6) main_video3_pane_g2_ParamLimits

0xaf2b,	// (0x0004aac6) main_video3_pane_g2

0x0001,

0xf7cb,	// (0x0004f366) main_video3_pane_g_ParamLimits

0xf7cb,	// (0x0004f366) main_video3_pane_g

0xaf47,	// (0x0004aae2) main_video3_pane_t1_ParamLimits

0xaf47,	// (0x0004aae2) main_video3_pane_t1

0xaf72,	// (0x0004ab0d) main_video3_pane_t2_ParamLimits

0xaf72,	// (0x0004ab0d) main_video3_pane_t2

0xaf9f,	// (0x0004ab3a) main_video3_pane_t3_ParamLimits

0xaf9f,	// (0x0004ab3a) main_video3_pane_t3

0x0002,

0xf7d0,	// (0x0004f36b) main_video3_pane_t_ParamLimits

0xf7d0,	// (0x0004f36b) main_video3_pane_t

0xafcc,	// (0x0004ab67) cams_zoom_vslider_pane_g1

0xafd5,	// (0x0004ab70) cams_zoom_vslider_pane_g2

0x0001,

0xf7d7,	// (0x0004f372) cams_zoom_vslider_pane_g

0xafdd,	// (0x0004ab78) small_slider_vertical_pane

0xde00,	// (0x0004d99b) small_slider_vertical_pane_g1

0xde00,	// (0x0004d99b) small_slider_vertical_pane_g2

0xafe5,	// (0x0004ab80) small_slider_vertical_pane_g3

0x0002,

0xf7dc,	// (0x0004f377) small_slider_vertical_pane_g

0xd470,	// (0x0004d00b) main_hwr_training_pane

0xafee,	// (0x0004ab89) hwr_training_instruct_pane_ParamLimits

0xafee,	// (0x0004ab89) hwr_training_instruct_pane

0x6ecc,	// (0x00046a67) hwr_training_navi_pane_ParamLimits

0x6ecc,	// (0x00046a67) hwr_training_navi_pane

0x6eeb,	// (0x00046a86) hwr_training_write_pane_ParamLimits

0x6eeb,	// (0x00046a86) hwr_training_write_pane

0xd470,	// (0x0004d00b) bg_frame_shadow_pane

0xb025,	// (0x0004abc0) hwr_training_write_pane_g1

0xb02d,	// (0x0004abc8) hwr_training_write_pane_g2

0xb035,	// (0x0004abd0) hwr_training_write_pane_g3

0xb03d,	// (0x0004abd8) hwr_training_write_pane_g4

0xb045,	// (0x0004abe0) hwr_training_write_pane_g5

0xb04d,	// (0x0004abe8) hwr_training_write_pane_g6

0xb055,	// (0x0004abf0) hwr_training_write_pane_g7

0x0006,

0xf7e3,	// (0x0004f37e) hwr_training_write_pane_g

0xb05d,	// (0x0004abf8) hwr_training_navi_pane_g1_ParamLimits

0xb05d,	// (0x0004abf8) hwr_training_navi_pane_g1

0xb06f,	// (0x0004ac0a) hwr_training_navi_pane_g2_ParamLimits

0xb06f,	// (0x0004ac0a) hwr_training_navi_pane_g2

0xb081,	// (0x0004ac1c) hwr_training_navi_pane_g3_ParamLimits

0xb081,	// (0x0004ac1c) hwr_training_navi_pane_g3

0xb091,	// (0x0004ac2c) hwr_training_navi_pane_g4_ParamLimits

0xb091,	// (0x0004ac2c) hwr_training_navi_pane_g4

0x0004,

0xf7f2,	// (0x0004f38d) hwr_training_navi_pane_g_ParamLimits

0xf7f2,	// (0x0004f38d) hwr_training_navi_pane_g

0xb09e,	// (0x0004ac39) hwr_training_navi_pane_t1

0x6f33,	// (0x00046ace) list_single_hwr_training_instruct_pane_ParamLimits

0x6f33,	// (0x00046ace) list_single_hwr_training_instruct_pane

0xb0ac,	// (0x0004ac47) list_single_hwr_training_instruct_pane_t1

0x5b0a,	// (0x000456a5) bg_frame_shadow_pane_g1

0xb0bb,	// (0x0004ac56) bg_frame_shadow_pane_g2

0xb0c3,	// (0x0004ac5e) bg_frame_shadow_pane_g3

0xb0cb,	// (0x0004ac66) bg_frame_shadow_pane_g4

0xb0d3,	// (0x0004ac6e) bg_frame_shadow_pane_g5

0xb0db,	// (0x0004ac76) bg_frame_shadow_pane_g6

0xb0e3,	// (0x0004ac7e) bg_frame_shadow_pane_g7

0xdcc7,	// (0x0004d862) bg_frame_shadow_pane_g8

0x0007,

0xf7fd,	// (0x0004f398) bg_frame_shadow_pane_g

0xd470,	// (0x0004d00b) main_video_tele_dialer_pane

0x6f4f,	// (0x00046aea) aid_size_cell_video_keypad_ParamLimits

0x6f4f,	// (0x00046aea) aid_size_cell_video_keypad

0x6f69,	// (0x00046b04) grid_video_dialer_keypad_pane_ParamLimits

0x6f69,	// (0x00046b04) grid_video_dialer_keypad_pane

0x6fb5,	// (0x00046b50) video_down_pane_cp_ParamLimits

0x6fb5,	// (0x00046b50) video_down_pane_cp

0x6fe7,	// (0x00046b82) cell_video_dialer_keypad_pane_ParamLimits

0x6fe7,	// (0x00046b82) cell_video_dialer_keypad_pane

0xb0eb,	// (0x0004ac86) bg_button_pane_cp08_ParamLimits

0xb0eb,	// (0x0004ac86) bg_button_pane_cp08

0x700d,	// (0x00046ba8) cell_video_dialer_keypad_pane_g1_ParamLimits

0x700d,	// (0x00046ba8) cell_video_dialer_keypad_pane_g1

0x6671,	// (0x0004620c) mup3_rocker2_pane_ParamLimits

0x6671,	// (0x0004620c) mup3_rocker2_pane

0xde00,	// (0x0004d99b) mup3_rocker2_pane_g1

0x5179,	// (0x00044d14) main_dialer2_pane

0xd470,	// (0x0004d00b) main_mp4_pane

0xb115,	// (0x0004acb0) main_mp4_pane_g1_ParamLimits

0xb115,	// (0x0004acb0) main_mp4_pane_g1

0xb115,	// (0x0004acb0) main_mp4_pane_g2_ParamLimits

0xb115,	// (0x0004acb0) main_mp4_pane_g2

0x7048,	// (0x00046be3) main_mp4_pane_g3_ParamLimits

0x7048,	// (0x00046be3) main_mp4_pane_g3

0xb123,	// (0x0004acbe) main_mp4_pane_g4_ParamLimits

0xb123,	// (0x0004acbe) main_mp4_pane_g4

0xb151,	// (0x0004acec) main_mp4_pane_g5_ParamLimits

0xb151,	// (0x0004acec) main_mp4_pane_g5

0x0007,

0xf81d,	// (0x0004f3b8) main_mp4_pane_g_ParamLimits

0xf81d,	// (0x0004f3b8) main_mp4_pane_g

0xb1c5,	// (0x0004ad60) main_mp4_pane_t1_ParamLimits

0xb1c5,	// (0x0004ad60) main_mp4_pane_t1

0xb221,	// (0x0004adbc) main_mp4_pane_t2_ParamLimits

0xb221,	// (0x0004adbc) main_mp4_pane_t2

0xb273,	// (0x0004ae0e) main_mp4_pane_t3_ParamLimits

0xb273,	// (0x0004ae0e) main_mp4_pane_t3

0xb299,	// (0x0004ae34) main_mp4_pane_t4_ParamLimits

0xb299,	// (0x0004ae34) main_mp4_pane_t4

0x0003,

0xf82e,	// (0x0004f3c9) main_mp4_pane_t_ParamLimits

0xf82e,	// (0x0004f3c9) main_mp4_pane_t

0xb2d9,	// (0x0004ae74) mp4_progress_pane_ParamLimits

0xb2d9,	// (0x0004ae74) mp4_progress_pane

0xb323,	// (0x0004aebe) mp4_rocker_pane_ParamLimits

0xb323,	// (0x0004aebe) mp4_rocker_pane

0xb34b,	// (0x0004aee6) mp4_progress_pane_t1

0xb364,	// (0x0004aeff) mp4_progress_pane_t2

0x0001,

0xf837,	// (0x0004f3d2) mp4_progress_pane_t

0xb37d,	// (0x0004af18) mup_progress_pane_cp04

0xde00,	// (0x0004d99b) mp4_rocker_pane_g1

0x7092,	// (0x00046c2d) aid_cell_size_keypad2_ParamLimits

0x7092,	// (0x00046c2d) aid_cell_size_keypad2

0x70a8,	// (0x00046c43) dialer2_ne_pane_ParamLimits

0x70a8,	// (0x00046c43) dialer2_ne_pane

0x70c0,	// (0x00046c5b) grid_dialer2_keypad_pane_ParamLimits

0x70c0,	// (0x00046c5b) grid_dialer2_keypad_pane

0x576c,	// (0x00045307) bg_popup_call_pane_cp07_ParamLimits

0x576c,	// (0x00045307) bg_popup_call_pane_cp07

0x70dc,	// (0x00046c77) dialer2_ne_pane_t1_ParamLimits

0x70dc,	// (0x00046c77) dialer2_ne_pane_t1

0x711c,	// (0x00046cb7) cell_dialer2_keypad_pane_ParamLimits

0x711c,	// (0x00046cb7) cell_dialer2_keypad_pane

0xb3a2,	// (0x0004af3d) bg_button_pane_pane_cp04_ParamLimits

0xb3a2,	// (0x0004af3d) bg_button_pane_pane_cp04

0x7142,	// (0x00046cdd) cell_dialer2_keypad_pane_g1_ParamLimits

0x7142,	// (0x00046cdd) cell_dialer2_keypad_pane_g1

0x255e,	// (0x000420f9) aid_placing_vt_set_content_ParamLimits

0x255e,	// (0x000420f9) aid_placing_vt_set_content

0x2582,	// (0x0004211d) aid_placing_vt_set_title_ParamLimits

0x2582,	// (0x0004211d) aid_placing_vt_set_title

0xd470,	// (0x0004d00b) main_image3_pane

0x7208,	// (0x00046da3) area_side_right_pane_cp01_ParamLimits

0x7208,	// (0x00046da3) area_side_right_pane_cp01

0xb115,	// (0x0004acb0) main_image3_pane_g1_ParamLimits

0xb115,	// (0x0004acb0) main_image3_pane_g1

0x7221,	// (0x00046dbc) main_image3_pane_g2_ParamLimits

0x7221,	// (0x00046dbc) main_image3_pane_g2

0x7249,	// (0x00046de4) main_image3_pane_g3_ParamLimits

0x7249,	// (0x00046de4) main_image3_pane_g3

0x7273,	// (0x00046e0e) main_image3_pane_g4_ParamLimits

0x7273,	// (0x00046e0e) main_image3_pane_g4

0x0003,

0xf846,	// (0x0004f3e1) main_image3_pane_g_ParamLimits

0xf846,	// (0x0004f3e1) main_image3_pane_g

0x729d,	// (0x00046e38) main_image3_pane_t1_ParamLimits

0x729d,	// (0x00046e38) main_image3_pane_t1

0x72f5,	// (0x00046e90) main_image3_pane_t2_ParamLimits

0x72f5,	// (0x00046e90) main_image3_pane_t2

0x7347,	// (0x00046ee2) main_image3_pane_t3_ParamLimits

0x7347,	// (0x00046ee2) main_image3_pane_t3

0x0003,

0xf84f,	// (0x0004f3ea) main_image3_pane_t_ParamLimits

0xf84f,	// (0x0004f3ea) main_image3_pane_t

0xdb4d,	// (0x0004d6e8) grid_sctrl_middle_pane_cp01_ParamLimits

0xdb4d,	// (0x0004d6e8) grid_sctrl_middle_pane_cp01

0x73cf,	// (0x00046f6a) cell_sctrl_middle_pane_cp01_ParamLimits

0x73cf,	// (0x00046f6a) cell_sctrl_middle_pane_cp01

0x73ec,	// (0x00046f87) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x73ec,	// (0x00046f87) cell_sctrl_middle_pane_cp01_g1

0xd470,	// (0x0004d00b) main_call4_pane

0x7401,	// (0x00046f9c) aid_size_button_call4_ParamLimits

0x7401,	// (0x00046f9c) aid_size_button_call4

0x7434,	// (0x00046fcf) call4_windows_pane_ParamLimits

0x7434,	// (0x00046fcf) call4_windows_pane

0x7453,	// (0x00046fee) grid_call4_button_pane_ParamLimits

0x7453,	// (0x00046fee) grid_call4_button_pane

0x748a,	// (0x00047025) call4_windows_conf_pane

0x74a3,	// (0x0004703e) popup_call4_audio_first_window_ParamLimits

0x74a3,	// (0x0004703e) popup_call4_audio_first_window

0x74f3,	// (0x0004708e) popup_call4_audio_second_window_ParamLimits

0x74f3,	// (0x0004708e) popup_call4_audio_second_window

0x750c,	// (0x000470a7) popup_call4_audio_wait_window_ParamLimits

0x750c,	// (0x000470a7) popup_call4_audio_wait_window

0x751a,	// (0x000470b5) cell_call4_button_pane_ParamLimits

0x751a,	// (0x000470b5) cell_call4_button_pane

0x7541,	// (0x000470dc) bg_button_pane_cp09_ParamLimits

0x7541,	// (0x000470dc) bg_button_pane_cp09

0x754d,	// (0x000470e8) cell_call4_button_pane_g1_ParamLimits

0x754d,	// (0x000470e8) cell_call4_button_pane_g1

0x7573,	// (0x0004710e) cell_call4_button_pane_t1_ParamLimits

0x7573,	// (0x0004710e) cell_call4_button_pane_t1

0xb41c,	// (0x0004afb7) popup_call4_audio_conf_window_ParamLimits

0xb41c,	// (0x0004afb7) popup_call4_audio_conf_window

0x66db,	// (0x00046276) mup3_progress_pane_t1_ParamLimits

0x66fa,	// (0x00046295) mup3_progress_pane_t2_ParamLimits

0x6719,	// (0x000462b4) mup3_progress_pane_t3_ParamLimits

0xf724,	// (0x0004f2bf) mup3_progress_pane_t_ParamLimits

0x6736,	// (0x000462d1) mup_progress_pane_cp03_ParamLimits

0x6e82,	// (0x00046a1d) mup3_control_keys_pane_g4_copy1

0xb307,	// (0x0004aea2) mp4_rocker2_pane_ParamLimits

0xb307,	// (0x0004aea2) mp4_rocker2_pane

0xb436,	// (0x0004afd1) mp4_rocker2_pane_g1

0xb43e,	// (0x0004afd9) mp4_rocker2_pane_g2

0xb446,	// (0x0004afe1) mp4_rocker2_pane_g3

0xb44e,	// (0x0004afe9) mp4_rocker2_pane_g4

0xb456,	// (0x0004aff1) mp4_rocker2_pane_g5

0x0004,

0xf858,	// (0x0004f3f3) mp4_rocker2_pane_g

0xd470,	// (0x0004d00b) main_camera4_pane

0xd470,	// (0x0004d00b) main_video4_pane

0x6f83,	// (0x00046b1e) main_video_tele_dialer_pane_t1_ParamLimits

0x6f83,	// (0x00046b1e) main_video_tele_dialer_pane_t1

0x6f9c,	// (0x00046b37) main_video_tele_dialer_pane_t2_ParamLimits

0x6f9c,	// (0x00046b37) main_video_tele_dialer_pane_t2

0x0001,

0xf80e,	// (0x0004f3a9) main_video_tele_dialer_pane_t_ParamLimits

0xf80e,	// (0x0004f3a9) main_video_tele_dialer_pane_t

0x75b1,	// (0x0004714c) cam4_autofocus_pane_ParamLimits

0x75b1,	// (0x0004714c) cam4_autofocus_pane

0x75c7,	// (0x00047162) cam4_image_uncrop_pane_ParamLimits

0x75c7,	// (0x00047162) cam4_image_uncrop_pane

0x75e0,	// (0x0004717b) cam4_indicators_pane_ParamLimits

0x75e0,	// (0x0004717b) cam4_indicators_pane

0x7610,	// (0x000471ab) main_camera4_pane_g1_ParamLimits

0x7610,	// (0x000471ab) main_camera4_pane_g1

0x7622,	// (0x000471bd) main_camera4_pane_g2_ParamLimits

0x7622,	// (0x000471bd) main_camera4_pane_g2

0x7635,	// (0x000471d0) main_camera4_pane_g3_ParamLimits

0x7635,	// (0x000471d0) main_camera4_pane_g3

0x7648,	// (0x000471e3) main_camera4_pane_g4_ParamLimits

0x7648,	// (0x000471e3) main_camera4_pane_g4

0x765b,	// (0x000471f6) main_camera4_pane_g5_ParamLimits

0x765b,	// (0x000471f6) main_camera4_pane_g5

0x0005,

0xf863,	// (0x0004f3fe) main_camera4_pane_g_ParamLimits

0xf863,	// (0x0004f3fe) main_camera4_pane_g

0x767f,	// (0x0004721a) main_camera4_pane_t1_ParamLimits

0x767f,	// (0x0004721a) main_camera4_pane_t1

0xdba6,	// (0x0004d741) bg_tb_trans_pane_cp06

0xb498,	// (0x0004b033) cam4_indicators_pane_g1

0xb4a9,	// (0x0004b044) cam4_indicators_pane_g2

0x0002,

0xf87e,	// (0x0004f419) cam4_indicators_pane_g

0xb4c1,	// (0x0004b05c) cam4_indicators_pane_t1

0x76e3,	// (0x0004727e) main_video4_pane_g1_ParamLimits

0x76e3,	// (0x0004727e) main_video4_pane_g1

0x76f2,	// (0x0004728d) main_video4_pane_g2_ParamLimits

0x76f2,	// (0x0004728d) main_video4_pane_g2

0x7702,	// (0x0004729d) main_video4_pane_g3_ParamLimits

0x7702,	// (0x0004729d) main_video4_pane_g3

0x7712,	// (0x000472ad) main_video4_pane_g4_ParamLimits

0x7712,	// (0x000472ad) main_video4_pane_g4

0x0004,

0xf885,	// (0x0004f420) main_video4_pane_g_ParamLimits

0xf885,	// (0x0004f420) main_video4_pane_g

0x7732,	// (0x000472cd) vid4_indicators_pane_ParamLimits

0x7732,	// (0x000472cd) vid4_indicators_pane

0x775c,	// (0x000472f7) video4_image_uncrop_cif_pane_ParamLimits

0x775c,	// (0x000472f7) video4_image_uncrop_cif_pane

0x7776,	// (0x00047311) video4_image_uncrop_nhd_pane_ParamLimits

0x7776,	// (0x00047311) video4_image_uncrop_nhd_pane

0x75c7,	// (0x00047162) video4_image_uncrop_vga_pane_ParamLimits

0x75c7,	// (0x00047162) video4_image_uncrop_vga_pane

0xdb4d,	// (0x0004d6e8) bg_tb_trans_pane_cp07

0xb4ef,	// (0x0004b08a) vid4_indicators_pane_g1

0xb505,	// (0x0004b0a0) vid4_indicators_pane_g2

0xb519,	// (0x0004b0b4) vid4_indicators_pane_g3

0x0004,

0xf890,	// (0x0004f42b) vid4_indicators_pane_g

0xb54a,	// (0x0004b0e5) vid4_indicators_pane_t1

0x778d,	// (0x00047328) cam4_autofocus_pane_g1

0x7795,	// (0x00047330) cam4_autofocus_pane_g2

0x779d,	// (0x00047338) cam4_autofocus_pane_g3

0x0002,

0xf89b,	// (0x0004f436) cam4_autofocus_pane_g

0x77a5,	// (0x00047340) cam4_autofocus_pane_g3_copy1

0x6fcb,	// (0x00046b66) video_down_pane_cp_t1

0x6fd9,	// (0x00046b74) video_down_pane_cp_t2

0x0001,

0xf813,	// (0x0004f3ae) video_down_pane_cp_t

0xdb4d,	// (0x0004d6e8) popup_vitu2_window_ParamLimits

0xdb4d,	// (0x0004d6e8) popup_vitu2_window

0x77ad,	// (0x00047348) aid_size_cell2_itu2_ParamLimits

0x77ad,	// (0x00047348) aid_size_cell2_itu2

0x77cd,	// (0x00047368) aid_size_cell_itu2_ParamLimits

0x77cd,	// (0x00047368) aid_size_cell_itu2

0x6860,	// (0x000463fb) bg_popup_window_pane_cp09_ParamLimits

0x6860,	// (0x000463fb) bg_popup_window_pane_cp09

0x781c,	// (0x000473b7) field_vitu2_entry_pane_ParamLimits

0x781c,	// (0x000473b7) field_vitu2_entry_pane

0x7841,	// (0x000473dc) grid_vitu2_function_pane_ParamLimits

0x7841,	// (0x000473dc) grid_vitu2_function_pane

0x788c,	// (0x00047427) grid_vitu2_itu_pane_ParamLimits

0x788c,	// (0x00047427) grid_vitu2_itu_pane

0x7914,	// (0x000474af) cell_vitu2_itu_pane_ParamLimits

0x7914,	// (0x000474af) cell_vitu2_itu_pane

0x7942,	// (0x000474dd) cell_vitu2_function_pane_ParamLimits

0x7942,	// (0x000474dd) cell_vitu2_function_pane

0xb561,	// (0x0004b0fc) bg_popup_call_pane_cp08_ParamLimits

0xb561,	// (0x0004b0fc) bg_popup_call_pane_cp08

0xb578,	// (0x0004b113) field_vitu2_entry_pane_g1

0xb584,	// (0x0004b11f) field_vitu2_entry_pane_g2

0x0002,

0xf8a2,	// (0x0004f43d) field_vitu2_entry_pane_g

0x0f79,	// (0x00040b14) field_vitu2_entry_pane_t1_ParamLimits

0x0f79,	// (0x00040b14) field_vitu2_entry_pane_t1

0xb590,	// (0x0004b12b) field_vitu2_entry_pane_t2_ParamLimits

0xb590,	// (0x0004b12b) field_vitu2_entry_pane_t2

0x0001,

0xf8a9,	// (0x0004f444) field_vitu2_entry_pane_t_ParamLimits

0xf8a9,	// (0x0004f444) field_vitu2_entry_pane_t

0x7986,	// (0x00047521) bg_button_pane_cp010_ParamLimits

0x7986,	// (0x00047521) bg_button_pane_cp010

0x7994,	// (0x0004752f) cell_vitu2_itu_pane_g1

0x79ba,	// (0x00047555) cell_vitu2_itu_pane_t1_ParamLimits

0x79ba,	// (0x00047555) cell_vitu2_itu_pane_t1

0x0fa9,	// (0x00040b44) cell_vitu2_itu_pane_t2_ParamLimits

0x0fa9,	// (0x00040b44) cell_vitu2_itu_pane_t2

0x0002,

0xf8b3,	// (0x0004f44e) cell_vitu2_itu_pane_t_ParamLimits

0xf8b3,	// (0x0004f44e) cell_vitu2_itu_pane_t

0xdb4d,	// (0x0004d6e8) bg_button_pane_cp011

0x7a18,	// (0x000475b3) cell_vitu2_function_pane_g1

0xd470,	// (0x0004d00b) main_myfav_hc_pane

0x7397,	// (0x00046f32) popup_image3_note_pane_ParamLimits

0x7397,	// (0x00046f32) popup_image3_note_pane

0x73b3,	// (0x00046f4e) popup_image3_tool_bar_pane_ParamLimits

0x73b3,	// (0x00046f4e) popup_image3_tool_bar_pane

0x1037,	// (0x00040bd2) cell_vitu2_itu_pane_t3_ParamLimits

0x1037,	// (0x00040bd2) cell_vitu2_itu_pane_t3

0xd470,	// (0x0004d00b) bg_popup_trans_pane

0xb5b5,	// (0x0004b150) grid_image3_tool_bar_pane

0xb5bf,	// (0x0004b15a) bg_popup_trans_pane_g1

0xe015,	// (0x0004dbb0) bg_popup_trans_pane_g2

0xb5c7,	// (0x0004b162) bg_popup_trans_pane_g3

0xb5cf,	// (0x0004b16a) bg_popup_trans_pane_g4

0xb5d7,	// (0x0004b172) bg_popup_trans_pane_g5

0xb5df,	// (0x0004b17a) bg_popup_trans_pane_g6

0xb5e7,	// (0x0004b182) bg_popup_trans_pane_g7

0xb5ef,	// (0x0004b18a) bg_popup_trans_pane_g8

0xdff5,	// (0x0004db90) bg_popup_trans_pane_g9

0x0008,

0xf8ba,	// (0x0004f455) bg_popup_trans_pane_g

0xb5f7,	// (0x0004b192) cell_image3_tool_bar_pane_ParamLimits

0xb5f7,	// (0x0004b192) cell_image3_tool_bar_pane

0xde00,	// (0x0004d99b) cell_image3_tool_bar_pane_g1

0xd470,	// (0x0004d00b) bg_popup_trans_pane_cp1

0xb60d,	// (0x0004b1a8) popup_image3_note_pane_t1

0xb61b,	// (0x0004b1b6) popup_image3_note_pane_t2

0xb629,	// (0x0004b1c4) popup_image3_note_pane_t3

0x0002,

0xf8cd,	// (0x0004f468) popup_image3_note_pane_t

0xb639,	// (0x0004b1d4) popup_image3_note_pane_t3_copy1

0x7a2c,	// (0x000475c7) bg_myfav_hc_instruction_pane_ParamLimits

0x7a2c,	// (0x000475c7) bg_myfav_hc_instruction_pane

0x7a44,	// (0x000475df) cell_myfav_contact_pane_ParamLimits

0x7a44,	// (0x000475df) cell_myfav_contact_pane

0x7a60,	// (0x000475fb) cell_myfav_contact_pane_cp1_ParamLimits

0x7a60,	// (0x000475fb) cell_myfav_contact_pane_cp1

0x7a78,	// (0x00047613) cell_myfav_contact_pane_cp2_ParamLimits

0x7a78,	// (0x00047613) cell_myfav_contact_pane_cp2

0x7a90,	// (0x0004762b) cell_myfav_contact_pane_cp3_ParamLimits

0x7a90,	// (0x0004762b) cell_myfav_contact_pane_cp3

0x7aa7,	// (0x00047642) cell_myfav_contact_pane_cp4_ParamLimits

0x7aa7,	// (0x00047642) cell_myfav_contact_pane_cp4

0x7abf,	// (0x0004765a) cell_myfav_contact_pane_cp5_ParamLimits

0x7abf,	// (0x0004765a) cell_myfav_contact_pane_cp5

0x7ad3,	// (0x0004766e) cell_myfav_contact_pane_cp6_ParamLimits

0x7ad3,	// (0x0004766e) cell_myfav_contact_pane_cp6

0x7ae9,	// (0x00047684) cell_myfav_contact_pane_cp7_ParamLimits

0x7ae9,	// (0x00047684) cell_myfav_contact_pane_cp7

0xb647,	// (0x0004b1e2) listscroll_gen_pane_cp05

0x7b01,	// (0x0004769c) main_myfav_hc_pane_g1_ParamLimits

0x7b01,	// (0x0004769c) main_myfav_hc_pane_g1

0x7b1b,	// (0x000476b6) main_myfav_hc_pane_g2_ParamLimits

0x7b1b,	// (0x000476b6) main_myfav_hc_pane_g2

0x0002,

0xf8d4,	// (0x0004f46f) main_myfav_hc_pane_g_ParamLimits

0xf8d4,	// (0x0004f46f) main_myfav_hc_pane_g

0x7b4f,	// (0x000476ea) main_myfav_hc_pane_t1_ParamLimits

0x7b4f,	// (0x000476ea) main_myfav_hc_pane_t1

0xb650,	// (0x0004b1eb) main_myfav_hc_pane_t2_ParamLimits

0xb650,	// (0x0004b1eb) main_myfav_hc_pane_t2

0xb662,	// (0x0004b1fd) main_myfav_hc_pane_t3_ParamLimits

0xb662,	// (0x0004b1fd) main_myfav_hc_pane_t3

0x7b66,	// (0x00047701) main_myfav_hc_pane_t4_ParamLimits

0x7b66,	// (0x00047701) main_myfav_hc_pane_t4

0x0004,

0xf8db,	// (0x0004f476) main_myfav_hc_pane_t_ParamLimits

0xf8db,	// (0x0004f476) main_myfav_hc_pane_t

0xde00,	// (0x0004d99b) bg_myfav_hc_instruction_pane_g1

0xb674,	// (0x0004b20f) cell_myfav_contact_pane_g1_ParamLimits

0xb674,	// (0x0004b20f) cell_myfav_contact_pane_g1

0xb674,	// (0x0004b20f) cell_myfav_contact_pane_g2_ParamLimits

0xb674,	// (0x0004b20f) cell_myfav_contact_pane_g2

0xb680,	// (0x0004b21b) cell_myfav_contact_pane_g3_ParamLimits

0xb680,	// (0x0004b21b) cell_myfav_contact_pane_g3

0xdbb4,	// (0x0004d74f) cell_myfav_contact_pane_g4_ParamLimits

0xdbb4,	// (0x0004d74f) cell_myfav_contact_pane_g4

0xb68d,	// (0x0004b228) cell_myfav_contact_pane_g5_ParamLimits

0xb68d,	// (0x0004b228) cell_myfav_contact_pane_g5

0x0004,

0xf8e6,	// (0x0004f481) cell_myfav_contact_pane_g_ParamLimits

0xf8e6,	// (0x0004f481) cell_myfav_contact_pane_g

0x7b35,	// (0x000476d0) main_myfav_hc_pane_g3_ParamLimits

0x7b35,	// (0x000476d0) main_myfav_hc_pane_g3

0x18ca,	// (0x00041465) popup_adpt_find_window

0x7b90,	// (0x0004772b) afind_page_pane_ParamLimits

0x7b90,	// (0x0004772b) afind_page_pane

0x7ba5,	// (0x00047740) aid_size_cell_afind_ParamLimits

0x7ba5,	// (0x00047740) aid_size_cell_afind

0x7bc3,	// (0x0004775e) bg_popup_sub_pane_cp09_ParamLimits

0x7bc3,	// (0x0004775e) bg_popup_sub_pane_cp09

0x7bd0,	// (0x0004776b) find_pane_cp01_ParamLimits

0x7bd0,	// (0x0004776b) find_pane_cp01

0xb699,	// (0x0004b234) grid_afind_control_pane_ParamLimits

0xb699,	// (0x0004b234) grid_afind_control_pane

0x7bdd,	// (0x00047778) grid_afind_pane_ParamLimits

0x7bdd,	// (0x00047778) grid_afind_pane

0x7bff,	// (0x0004779a) cell_afind_pane_ParamLimits

0x7bff,	// (0x0004779a) cell_afind_pane

0xde00,	// (0x0004d99b) afind_page_pane_g1

0x7c6c,	// (0x00047807) afind_page_pane_g2

0x7c75,	// (0x00047810) afind_page_pane_g3

0x0002,

0xf8f1,	// (0x0004f48c) afind_page_pane_g

0x7c7e,	// (0x00047819) afind_page_pane_t1

0xb6ad,	// (0x0004b248) cell_afind_grid_control_pane_ParamLimits

0xb6ad,	// (0x0004b248) cell_afind_grid_control_pane

0xb3a2,	// (0x0004af3d) bg_button_pane_cp69_ParamLimits

0xb3a2,	// (0x0004af3d) bg_button_pane_cp69

0x7c9e,	// (0x00047839) cell_afind_pane_g1_ParamLimits

0x7c9e,	// (0x00047839) cell_afind_pane_g1

0x7cab,	// (0x00047846) cell_afind_pane_t1_ParamLimits

0x7cab,	// (0x00047846) cell_afind_pane_t1

0xde0a,	// (0x0004d9a5) bg_button_pane_cp72

0xb6bc,	// (0x0004b257) cell_afind_grid_control_pane_g1

0x41e9,	// (0x00043d84) aid_image_placing_area_ParamLimits

0x41e9,	// (0x00043d84) aid_image_placing_area

0xdba6,	// (0x0004d741) field_vitu_entry_pane_g1_ParamLimits

0xdba6,	// (0x0004d741) field_vitu_entry_pane_g1

0xdba6,	// (0x0004d741) field_vitu_entry_pane_g2_ParamLimits

0xdba6,	// (0x0004d741) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0004ed9c) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0004ed9c) field_vitu_entry_pane_g

0xaebd,	// (0x0004aa58) cell_vitu_itu_pane_g1_ParamLimits

0xaea0,	// (0x0004aa3b) cell_vitu_itu_pane_t3_ParamLimits

0xaea0,	// (0x0004aa3b) cell_vitu_itu_pane_t3

0xb34b,	// (0x0004aee6) mp4_progress_pane_t1_ParamLimits

0xb364,	// (0x0004aeff) mp4_progress_pane_t2_ParamLimits

0xf837,	// (0x0004f3d2) mp4_progress_pane_t_ParamLimits

0xb37d,	// (0x0004af18) mup_progress_pane_cp04_ParamLimits

0x7b7a,	// (0x00047715) main_myfav_hc_pane_t5_ParamLimits

0x7b7a,	// (0x00047715) main_myfav_hc_pane_t5

0xab64,	// (0x0004a6ff) aid_zoom_text_primary

0x18ca,	// (0x00041465) popup_adpt_find_window_ParamLimits

0xdb4d,	// (0x0004d6e8) main_cam_set_pane

0x75f9,	// (0x00047194) cam4_zoom_pane_ParamLimits

0x75f9,	// (0x00047194) cam4_zoom_pane

0x7cbd,	// (0x00047858) main_cam_set_pane_g1_ParamLimits

0x7cbd,	// (0x00047858) main_cam_set_pane_g1

0x7ccb,	// (0x00047866) main_cam_set_pane_g2_ParamLimits

0x7ccb,	// (0x00047866) main_cam_set_pane_g2

0x0001,

0xf8f8,	// (0x0004f493) main_cam_set_pane_g_ParamLimits

0xf8f8,	// (0x0004f493) main_cam_set_pane_g

0x7cec,	// (0x00047887) main_cam_set_pane_t1_ParamLimits

0x7cec,	// (0x00047887) main_cam_set_pane_t1

0x7d07,	// (0x000478a2) main_cset_listscroll_pane_ParamLimits

0x7d07,	// (0x000478a2) main_cset_listscroll_pane

0x7d2f,	// (0x000478ca) main_cset_slider_pane_ParamLimits

0x7d2f,	// (0x000478ca) main_cset_slider_pane

0xb6cd,	// (0x0004b268) main_cset_list_pane_ParamLimits

0xb6cd,	// (0x0004b268) main_cset_list_pane

0xb6dd,	// (0x0004b278) scroll_pane_cp028

0x7d59,	// (0x000478f4) aid_area_touch_slider

0x7d75,	// (0x00047910) cset_slider_pane

0x7d98,	// (0x00047933) main_cset_slider_pane_g1

0x7dad,	// (0x00047948) main_cset_slider_pane_g2

0x0011,

0xf8fd,	// (0x0004f498) main_cset_slider_pane_g

0xb716,	// (0x0004b2b1) main_cset_slider_pane_t1

0x7e6f,	// (0x00047a0a) main_cset_slider_pane_t2

0x7e89,	// (0x00047a24) main_cset_slider_pane_t3

0x7ea3,	// (0x00047a3e) main_cset_slider_pane_t4

0x7ebd,	// (0x00047a58) main_cset_slider_pane_t5

0x7edb,	// (0x00047a76) main_cset_slider_pane_t6

0x7ef2,	// (0x00047a8d) main_cset_slider_pane_t7

0x000e,

0xf922,	// (0x0004f4bd) main_cset_slider_pane_t

0x7ffe,	// (0x00047b99) cset_list_set_pane_ParamLimits

0x7ffe,	// (0x00047b99) cset_list_set_pane

0xb7b0,	// (0x0004b34b) aid_position_infowindow_above

0xb7b8,	// (0x0004b353) aid_position_infowindow_below

0x1095,	// (0x00040c30) cset_list_set_pane_g1_ParamLimits

0x1095,	// (0x00040c30) cset_list_set_pane_g1

0x10a1,	// (0x00040c3c) cset_list_set_pane_g3_ParamLimits

0x10a1,	// (0x00040c3c) cset_list_set_pane_g3

0x0001,

0xf941,	// (0x0004f4dc) cset_list_set_pane_g_ParamLimits

0xf941,	// (0x0004f4dc) cset_list_set_pane_g

0x10b0,	// (0x00040c4b) cset_list_set_pane_t1_ParamLimits

0x10b0,	// (0x00040c4b) cset_list_set_pane_t1

0xdb4d,	// (0x0004d6e8) list_highlight_pane_cp021_ParamLimits

0xdb4d,	// (0x0004d6e8) list_highlight_pane_cp021

0xe825,	// (0x0004e3c0) cset_slider_pane_g1

0xe837,	// (0x0004e3d2) cset_slider_pane_g2

0xe82e,	// (0x0004e3c9) cset_slider_pane_g3

0x0002,

0xf946,	// (0x0004f4e1) cset_slider_pane_g

0xb7c0,	// (0x0004b35b) aid_area_touch_cam4_zoom

0x8012,	// (0x00047bad) cam4_zoom_cont_pane

0x801a,	// (0x00047bb5) cam4_zoom_pane_g1

0x8022,	// (0x00047bbd) cam4_zoom_pane_g2

0x802a,	// (0x00047bc5) cam4_zoom_pane_g3

0x0002,

0xf94d,	// (0x0004f4e8) cam4_zoom_pane_g

0xd360,	// (0x0004cefb) cam4_zoom_cont_pane_g1

0xd369,	// (0x0004cf04) cam4_zoom_cont_pane_g2

0xd372,	// (0x0004cf0d) cam4_zoom_cont_pane_g3

0x0002,

0xf954,	// (0x0004f4ef) cam4_zoom_cont_pane_g

0x741f,	// (0x00046fba) call4_image_pane_ParamLimits

0x741f,	// (0x00046fba) call4_image_pane

0x748a,	// (0x00047025) call4_windows_conf_pane_ParamLimits

0x74d1,	// (0x0004706c) popup_call4_audio_in_window_ParamLimits

0x74d1,	// (0x0004706c) popup_call4_audio_in_window

0xd470,	// (0x0004d00b) bg_popup_call2_act_pane_cp02

0xb414,	// (0x0004afaf) call4_list_conf_pane

0xde00,	// (0x0004d99b) call4_image_pane_g1

0xde00,	// (0x0004d99b) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x0004ef73) call4_image_pane_g

0xb7c9,	// (0x0004b364) list_single_graphic_popup_conf4_pane_ParamLimits

0xb7c9,	// (0x0004b364) list_single_graphic_popup_conf4_pane

0xd470,	// (0x0004d00b) list_highlight_pane_cp022

0xb7de,	// (0x0004b379) list_single_graphic_popup_conf4_pane_g1

0xe527,	// (0x0004e0c2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf95b,	// (0x0004f4f6) list_single_graphic_popup_conf4_pane_g

0xb7e6,	// (0x0004b381) list_single_graphic_popup_conf4_pane_t1

0x2699,	// (0x00042234) popup_vtel_slider_window_ParamLimits

0x2699,	// (0x00042234) popup_vtel_slider_window

0xb390,	// (0x0004af2b) dialer2_ne_pane_t2_ParamLimits

0xb390,	// (0x0004af2b) dialer2_ne_pane_t2

0x0001,

0xf83c,	// (0x0004f3d7) dialer2_ne_pane_t_ParamLimits

0xf83c,	// (0x0004f3d7) dialer2_ne_pane_t

0x576c,	// (0x00045307) bg_popup_sub_pane_cp010_ParamLimits

0x576c,	// (0x00045307) bg_popup_sub_pane_cp010

0x8032,	// (0x00047bcd) popup_vtel_slider_window_g1_ParamLimits

0x8032,	// (0x00047bcd) popup_vtel_slider_window_g1

0x8045,	// (0x00047be0) popup_vtel_slider_window_g2_ParamLimits

0x8045,	// (0x00047be0) popup_vtel_slider_window_g2

0x0003,

0xf960,	// (0x0004f4fb) popup_vtel_slider_window_g_ParamLimits

0xf960,	// (0x0004f4fb) popup_vtel_slider_window_g

0x809b,	// (0x00047c36) vtel_slider_pane_ParamLimits

0x809b,	// (0x00047c36) vtel_slider_pane

0x80bd,	// (0x00047c58) vtel_slider_pane_g1_ParamLimits

0x80bd,	// (0x00047c58) vtel_slider_pane_g1

0x80d1,	// (0x00047c6c) vtel_slider_pane_g2_ParamLimits

0x80d1,	// (0x00047c6c) vtel_slider_pane_g2

0x80e9,	// (0x00047c84) vtel_slider_pane_g3_ParamLimits

0x80e9,	// (0x00047c84) vtel_slider_pane_g3

0x80bd,	// (0x00047c58) vtel_slider_pane_g4_ParamLimits

0x80bd,	// (0x00047c58) vtel_slider_pane_g4

0x80ff,	// (0x00047c9a) vtel_slider_pane_g5_ParamLimits

0x80ff,	// (0x00047c9a) vtel_slider_pane_g5

0x0004,

0xf969,	// (0x0004f504) vtel_slider_pane_g_ParamLimits

0xf969,	// (0x0004f504) vtel_slider_pane_g

0xdb4d,	// (0x0004d6e8) main_gallery2_pane

0x77ed,	// (0x00047388) aid_size_row_itut2_dropdow_list_ParamLimits

0x77ed,	// (0x00047388) aid_size_row_itut2_dropdow_list

0x7866,	// (0x00047401) grid_vitu2_function_top_pane_ParamLimits

0x7866,	// (0x00047401) grid_vitu2_function_top_pane

0x78c2,	// (0x0004745d) popup_vitu2_dropdown_list_window_ParamLimits

0x78c2,	// (0x0004745d) popup_vitu2_dropdown_list_window

0x78e8,	// (0x00047483) popup_vitu2_match_list_window

0x8115,	// (0x00047cb0) cell_vitu2_function_top_pane_ParamLimits

0x8115,	// (0x00047cb0) cell_vitu2_function_top_pane

0x812f,	// (0x00047cca) cell_vitu2_function_top_pane_cp01_ParamLimits

0x812f,	// (0x00047cca) cell_vitu2_function_top_pane_cp01

0x814b,	// (0x00047ce6) cell_vitu2_function_top_wide_pane_ParamLimits

0x814b,	// (0x00047ce6) cell_vitu2_function_top_wide_pane

0xdb4d,	// (0x0004d6e8) bg_button_pane_cp012

0x8169,	// (0x00047d04) cell_vitu2_function_top_pane_g1

0xd37b,	// (0x0004cf16) bg_button_pane_cp013_ParamLimits

0xd37b,	// (0x0004cf16) bg_button_pane_cp013

0x817d,	// (0x00047d18) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x817d,	// (0x00047d18) cell_vitu2_function_top_wide_pane_g1

0xdb4d,	// (0x0004d6e8) bg_popup_sub_pane_cp20

0x8195,	// (0x00047d30) list_vitu2_match_list_pane

0xb5bf,	// (0x0004b15a) bg_popup_sub_pane_cp20_g1

0xb5c7,	// (0x0004b162) bg_popup_sub_pane_cp20_g2

0xe015,	// (0x0004dbb0) bg_popup_sub_pane_cp20_g3

0xb5cf,	// (0x0004b16a) bg_popup_sub_pane_cp20_g4

0xdff5,	// (0x0004db90) bg_popup_sub_pane_cp20_g5

0xb7fc,	// (0x0004b397) bg_popup_sub_pane_cp20_g6

0xb5df,	// (0x0004b17a) bg_popup_sub_pane_cp20_g7

0xb5e7,	// (0x0004b182) bg_popup_sub_pane_cp20_g8

0xb5ef,	// (0x0004b18a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf974,	// (0x0004f50f) bg_popup_sub_pane_cp20_g

0xd397,	// (0x0004cf32) list_vitu2_match_list_item_pane_ParamLimits

0xd397,	// (0x0004cf32) list_vitu2_match_list_item_pane

0xd3a9,	// (0x0004cf44) list_vitu2_match_list_item_pane_t1

0xd470,	// (0x0004d00b) bg_popup_sub_pane_cp21

0xddb6,	// (0x0004d951) grid_vitu2_dropdown_list_pane

0x81ad,	// (0x00047d48) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x81ad,	// (0x00047d48) cell_vitu2_dropdown_list_char_pane

0x81d0,	// (0x00047d6b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x81d0,	// (0x00047d6b) cell_vitu2_dropdown_list_ctrl_pane

0xb804,	// (0x0004b39f) cell_vitu2_dropdown_list_char_pane_g1

0xb80d,	// (0x0004b3a8) cell_vitu2_dropdown_list_char_pane_g2

0xb816,	// (0x0004b3b1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf987,	// (0x0004f522) cell_vitu2_dropdown_list_char_pane_g

0x81fc,	// (0x00047d97) cell_vitu2_dropdown_list_char_pane_t1

0x820a,	// (0x00047da5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x820a,	// (0x00047da5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x821a,	// (0x00047db5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x821a,	// (0x00047db5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x822b,	// (0x00047dc6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x822b,	// (0x00047dc6) cell_vitu2_dropdown_list_ctrl_pane_g3

0x823b,	// (0x00047dd6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x823b,	// (0x00047dd6) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdba6,	// (0x0004d741) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdba6,	// (0x0004d741) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf98e,	// (0x0004f529) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf98e,	// (0x0004f529) cell_vitu2_dropdown_list_ctrl_pane_g

0x8257,	// (0x00047df2) aid_size_cell_gallery2_ParamLimits

0x8257,	// (0x00047df2) aid_size_cell_gallery2

0x8275,	// (0x00047e10) grid_gallery2_pane_ParamLimits

0x8275,	// (0x00047e10) grid_gallery2_pane

0x828f,	// (0x00047e2a) scroll_pane_cp029_ParamLimits

0x828f,	// (0x00047e2a) scroll_pane_cp029

0x82a0,	// (0x00047e3b) cell_gallery2_pane_ParamLimits

0x82a0,	// (0x00047e3b) cell_gallery2_pane

0xb81f,	// (0x0004b3ba) cell_gallery2_pane_g2

0x8304,	// (0x00047e9f) cell_gallery2_pane_g3

0xb827,	// (0x0004b3c2) cell_gallery2_pane_g4

0xb82f,	// (0x0004b3ca) cell_gallery2_pane_g5

0xddb6,	// (0x0004d951) grid_highlight_pane_cp10

0x78e8,	// (0x00047483) popup_vitu2_match_list_window_ParamLimits

0x78ff,	// (0x0004749a) popup_vitu2_query_window_ParamLimits

0x78ff,	// (0x0004749a) popup_vitu2_query_window

0xd470,	// (0x0004d00b) bg_vitu2_candi_button_pane

0xb804,	// (0x0004b39f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb80d,	// (0x0004b3a8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb816,	// (0x0004b3b1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x10c5,	// (0x00040c60) bg_button_pane_cp015

0x830c,	// (0x00047ea7) bg_button_pane_cp016

0x831f,	// (0x00047eba) bg_button_pane_cp017

0xf077,	// (0x0004ec12) bg_popup_sub_pane_cp22

0xb837,	// (0x0004b3d2) popup_vitu2_query_window_g1

0x10fa,	// (0x00040c95) popup_vitu2_query_window_g2

0x0002,

0xf999,	// (0x0004f534) popup_vitu2_query_window_g

0x1119,	// (0x00040cb4) popup_vitu2_query_window_t1_ParamLimits

0x1119,	// (0x00040cb4) popup_vitu2_query_window_t1

0x114e,	// (0x00040ce9) popup_vitu2_query_window_t2_ParamLimits

0x114e,	// (0x00040ce9) popup_vitu2_query_window_t2

0x1160,	// (0x00040cfb) popup_vitu2_query_window_t3_ParamLimits

0x1160,	// (0x00040cfb) popup_vitu2_query_window_t3

0x8343,	// (0x00047ede) popup_vitu2_query_window_t4_ParamLimits

0x8343,	// (0x00047ede) popup_vitu2_query_window_t4

0x8364,	// (0x00047eff) popup_vitu2_query_window_t5_ParamLimits

0x8364,	// (0x00047eff) popup_vitu2_query_window_t5

0x0006,

0xf9a0,	// (0x0004f53b) popup_vitu2_query_window_t_ParamLimits

0xf9a0,	// (0x0004f53b) popup_vitu2_query_window_t

0xb6c5,	// (0x0004b260) main_cset_text_pane

0x7d59,	// (0x000478f4) aid_area_touch_slider_ParamLimits

0x7d75,	// (0x00047910) cset_slider_pane_ParamLimits

0x7d98,	// (0x00047933) main_cset_slider_pane_g1_ParamLimits

0x7dad,	// (0x00047948) main_cset_slider_pane_g2_ParamLimits

0xb6e6,	// (0x0004b281) main_cset_slider_pane_g3_ParamLimits

0xb6e6,	// (0x0004b281) main_cset_slider_pane_g3

0x7dc2,	// (0x0004795d) main_cset_slider_pane_g4_ParamLimits

0x7dc2,	// (0x0004795d) main_cset_slider_pane_g4

0x7dd1,	// (0x0004796c) main_cset_slider_pane_g5_ParamLimits

0x7dd1,	// (0x0004796c) main_cset_slider_pane_g5

0x7ddf,	// (0x0004797a) main_cset_slider_pane_g6_ParamLimits

0x7ddf,	// (0x0004797a) main_cset_slider_pane_g6

0xf8fd,	// (0x0004f498) main_cset_slider_pane_g_ParamLimits

0xb716,	// (0x0004b2b1) main_cset_slider_pane_t1_ParamLimits

0x7e6f,	// (0x00047a0a) main_cset_slider_pane_t2_ParamLimits

0x7e89,	// (0x00047a24) main_cset_slider_pane_t3_ParamLimits

0x7ea3,	// (0x00047a3e) main_cset_slider_pane_t4_ParamLimits

0x7ebd,	// (0x00047a58) main_cset_slider_pane_t5_ParamLimits

0x7edb,	// (0x00047a76) main_cset_slider_pane_t6_ParamLimits

0x7ef2,	// (0x00047a8d) main_cset_slider_pane_t7_ParamLimits

0x7f20,	// (0x00047abb) main_cset_slider_pane_t8_ParamLimits

0x7f20,	// (0x00047abb) main_cset_slider_pane_t8

0x7f48,	// (0x00047ae3) main_cset_slider_pane_t9_ParamLimits

0x7f48,	// (0x00047ae3) main_cset_slider_pane_t9

0x7f70,	// (0x00047b0b) main_cset_slider_pane_t10_ParamLimits

0x7f70,	// (0x00047b0b) main_cset_slider_pane_t10

0x7f98,	// (0x00047b33) main_cset_slider_pane_t11_ParamLimits

0x7f98,	// (0x00047b33) main_cset_slider_pane_t11

0x7fc2,	// (0x00047b5d) main_cset_slider_pane_t12_ParamLimits

0x7fc2,	// (0x00047b5d) main_cset_slider_pane_t12

0x7fdf,	// (0x00047b7a) main_cset_slider_pane_t13_ParamLimits

0x7fdf,	// (0x00047b7a) main_cset_slider_pane_t13

0xf922,	// (0x0004f4bd) main_cset_slider_pane_t_ParamLimits

0xd470,	// (0x0004d00b) bg_popup_sub_pane_cp011

0xb843,	// (0x0004b3de) main_cset_text_pane_g1

0xb84b,	// (0x0004b3e6) main_cset_text_pane_t1

0xb859,	// (0x0004b3f4) main_cset_text_pane_t2

0xb867,	// (0x0004b402) main_cset_text_pane_t3

0xb875,	// (0x0004b410) main_cset_text_pane_t4

0xb883,	// (0x0004b41e) main_cset_text_pane_t5

0xb891,	// (0x0004b42c) main_cset_text_pane_t6

0xb89f,	// (0x0004b43a) main_cset_text_pane_t7

0x0006,

0xf9af,	// (0x0004f54a) main_cset_text_pane_t

0xd470,	// (0x0004d00b) main_cam4_burst_pane

0xd470,	// (0x0004d00b) main_cam5_pane

0x7c8c,	// (0x00047827) bg_button_pane_cp019

0x7c95,	// (0x00047830) bg_button_pane_cp020

0xb6f2,	// (0x0004b28d) main_cset_slider_pane_g7_ParamLimits

0xb6f2,	// (0x0004b28d) main_cset_slider_pane_g7

0xb6fe,	// (0x0004b299) main_cset_slider_pane_g8_ParamLimits

0xb6fe,	// (0x0004b299) main_cset_slider_pane_g8

0x7df3,	// (0x0004798e) main_cset_slider_pane_g9_ParamLimits

0x7df3,	// (0x0004798e) main_cset_slider_pane_g9

0x7dff,	// (0x0004799a) main_cset_slider_pane_g10_ParamLimits

0x7dff,	// (0x0004799a) main_cset_slider_pane_g10

0x7e0b,	// (0x000479a6) main_cset_slider_pane_g11_ParamLimits

0x7e0b,	// (0x000479a6) main_cset_slider_pane_g11

0x7e17,	// (0x000479b2) main_cset_slider_pane_g12_ParamLimits

0x7e17,	// (0x000479b2) main_cset_slider_pane_g12

0x7e23,	// (0x000479be) main_cset_slider_pane_g13_ParamLimits

0x7e23,	// (0x000479be) main_cset_slider_pane_g13

0x7e2f,	// (0x000479ca) main_cset_slider_pane_g14_ParamLimits

0x7e2f,	// (0x000479ca) main_cset_slider_pane_g14

0x7e3b,	// (0x000479d6) main_cset_slider_pane_g15_ParamLimits

0x7e3b,	// (0x000479d6) main_cset_slider_pane_g15

0xb73e,	// (0x0004b2d9) main_cset_slider_pane_t14_ParamLimits

0xb73e,	// (0x0004b2d9) main_cset_slider_pane_t14

0xb777,	// (0x0004b312) main_cset_slider_pane_t15_ParamLimits

0xb777,	// (0x0004b312) main_cset_slider_pane_t15

0x8385,	// (0x00047f20) aid_cam4_burst_size_cell_ParamLimits

0x8385,	// (0x00047f20) aid_cam4_burst_size_cell

0x83a5,	// (0x00047f40) grid_cam4_burst_pane_ParamLimits

0x83a5,	// (0x00047f40) grid_cam4_burst_pane

0x83df,	// (0x00047f7a) linegrid_cam4_burst_pane_ParamLimits

0x83df,	// (0x00047f7a) linegrid_cam4_burst_pane

0xb8ad,	// (0x0004b448) scroll_pane_cp30_ParamLimits

0xb8ad,	// (0x0004b448) scroll_pane_cp30

0x8401,	// (0x00047f9c) cell_cam4_burst_pane_ParamLimits

0x8401,	// (0x00047f9c) cell_cam4_burst_pane

0xb8b9,	// (0x0004b454) linegrid_cam4_burst_pane_g1_ParamLimits

0xb8b9,	// (0x0004b454) linegrid_cam4_burst_pane_g1

0x8456,	// (0x00047ff1) linegrid_cam4_burst_pane_g2_ParamLimits

0x8456,	// (0x00047ff1) linegrid_cam4_burst_pane_g2

0xb8c6,	// (0x0004b461) linegrid_cam4_burst_pane_g3_ParamLimits

0xb8c6,	// (0x0004b461) linegrid_cam4_burst_pane_g3

0x0002,

0xf9be,	// (0x0004f559) linegrid_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x0004f559) linegrid_cam4_burst_pane_g

0x8467,	// (0x00048002) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8467,	// (0x00048002) linegrid_cam4_burst_pane_g3_copy1

0xb8d3,	// (0x0004b46e) linegrid_cam4_burst_pane_g4_ParamLimits

0xb8d3,	// (0x0004b46e) linegrid_cam4_burst_pane_g4

0x8485,	// (0x00048020) linegrid_cam4_burst_pane_g5_ParamLimits

0x8485,	// (0x00048020) linegrid_cam4_burst_pane_g5

0x8496,	// (0x00048031) linegrid_cam4_burst_pane_g6_ParamLimits

0x8496,	// (0x00048031) linegrid_cam4_burst_pane_g6

0xb8e0,	// (0x0004b47b) linegrid_cam4_burst_pane_g7_ParamLimits

0xb8e0,	// (0x0004b47b) linegrid_cam4_burst_pane_g7

0x84ad,	// (0x00048048) cell_cam4_burst_pane_g1

0xb8f9,	// (0x0004b494) main_cam5_pane_t1_ParamLimits

0xb8f9,	// (0x0004b494) main_cam5_pane_t1

0xb90b,	// (0x0004b4a6) main_cam5_pane_t2_ParamLimits

0xb90b,	// (0x0004b4a6) main_cam5_pane_t2

0xb91d,	// (0x0004b4b8) main_cam5_pane_t3_ParamLimits

0xb91d,	// (0x0004b4b8) main_cam5_pane_t3

0xb92f,	// (0x0004b4ca) main_cam5_pane_t4_ParamLimits

0xb92f,	// (0x0004b4ca) main_cam5_pane_t4

0xb947,	// (0x0004b4e2) main_cam5_pane_t5_ParamLimits

0xb947,	// (0x0004b4e2) main_cam5_pane_t5

0xb95b,	// (0x0004b4f6) main_cam5_pane_t6_ParamLimits

0xb95b,	// (0x0004b4f6) main_cam5_pane_t6

0xb96f,	// (0x0004b50a) main_cam5_pane_t7_ParamLimits

0xb96f,	// (0x0004b50a) main_cam5_pane_t7

0xb981,	// (0x0004b51c) main_cam5_pane_t8_ParamLimits

0xb981,	// (0x0004b51c) main_cam5_pane_t8

0xb99f,	// (0x0004b53a) main_cam5_pane_t9_ParamLimits

0xb99f,	// (0x0004b53a) main_cam5_pane_t9

0xb9b1,	// (0x0004b54c) main_cam5_pane_t10_ParamLimits

0xb9b1,	// (0x0004b54c) main_cam5_pane_t10

0xb9c3,	// (0x0004b55e) main_cam5_pane_t11_ParamLimits

0xb9c3,	// (0x0004b55e) main_cam5_pane_t11

0xb9d7,	// (0x0004b572) main_cam5_pane_t12_ParamLimits

0xb9d7,	// (0x0004b572) main_cam5_pane_t12

0xb9ee,	// (0x0004b589) main_cam5_pane_t13_ParamLimits

0xb9ee,	// (0x0004b589) main_cam5_pane_t13

0x000c,

0xf9ca,	// (0x0004f565) main_cam5_pane_t_ParamLimits

0xf9ca,	// (0x0004f565) main_cam5_pane_t

0x194b,	// (0x000414e6) popup_scut_keymap_window_ParamLimits

0x194b,	// (0x000414e6) popup_scut_keymap_window

0x84c0,	// (0x0004805b) aid_size_cell_brow_shortcut

0xddb6,	// (0x0004d951) bg_popup_window_pane_cp010

0x84cc,	// (0x00048067) grid_scut_pane

0x84d8,	// (0x00048073) cell_scut_pane_ParamLimits

0x84d8,	// (0x00048073) cell_scut_pane

0x84f1,	// (0x0004808c) cell_scut_pane_g1

0xba11,	// (0x0004b5ac) cell_scut_pane_t1

0xba20,	// (0x0004b5bb) cell_scut_pane_t2

0x84fa,	// (0x00048095) cell_scut_pane_t3

0x0002,

0xf9e5,	// (0x0004f580) cell_scut_pane_t

0x6272,	// (0x00045e0d) main_mup3_pane_g8_ParamLimits

0x6272,	// (0x00045e0d) main_mup3_pane_g8

0x7806,	// (0x000473a1) area_vitu2_query_pane_ParamLimits

0x7806,	// (0x000473a1) area_vitu2_query_pane

0x10d9,	// (0x00040c74) input_focus_pane_cp08

0xba2f,	// (0x0004b5ca) area_vitu2_query_pane_g1

0x11de,	// (0x00040d79) area_vitu2_query_pane_g2

0x0001,

0xf9ec,	// (0x0004f587) area_vitu2_query_pane_g

0x8508,	// (0x000480a3) area_vitu2_query_pane_t1_ParamLimits

0x8508,	// (0x000480a3) area_vitu2_query_pane_t1

0x851c,	// (0x000480b7) area_vitu2_query_pane_t2_ParamLimits

0x851c,	// (0x000480b7) area_vitu2_query_pane_t2

0x11f3,	// (0x00040d8e) area_vitu2_query_pane_t3_ParamLimits

0x11f3,	// (0x00040d8e) area_vitu2_query_pane_t3

0xba3b,	// (0x0004b5d6) area_vitu2_query_pane_t4_ParamLimits

0xba3b,	// (0x0004b5d6) area_vitu2_query_pane_t4

0xba63,	// (0x0004b5fe) area_vitu2_query_pane_t5_ParamLimits

0xba63,	// (0x0004b5fe) area_vitu2_query_pane_t5

0xba8b,	// (0x0004b626) area_vitu2_query_pane_t6_ParamLimits

0xba8b,	// (0x0004b626) area_vitu2_query_pane_t6

0x0006,

0xf9f1,	// (0x0004f58c) area_vitu2_query_pane_t_ParamLimits

0xf9f1,	// (0x0004f58c) area_vitu2_query_pane_t

0x8530,	// (0x000480cb) bg_button_pane_cp018

0x853e,	// (0x000480d9) bg_button_pane_cp021

0x121f,	// (0x00040dba) bg_button_pane_cp022

0x1230,	// (0x00040dcb) input_focus_pane_cp09

0x39fa,	// (0x00043595) aid_size_touch_mv_arrow_left

0x3a23,	// (0x000435be) aid_size_touch_mv_arrow_right

0x7e53,	// (0x000479ee) main_cset_slider_pane_g16_ParamLimits

0x7e53,	// (0x000479ee) main_cset_slider_pane_g16

0x7e61,	// (0x000479fc) main_cset_slider_pane_g17_ParamLimits

0x7e61,	// (0x000479fc) main_cset_slider_pane_g17

0x84ad,	// (0x00048048) cell_cam4_burst_pane_g1_ParamLimits

0xd470,	// (0x0004d00b) compa_mode_pane

0x8055,	// (0x00047bf0) popup_vtel_slider_window_g3_ParamLimits

0x8055,	// (0x00047bf0) popup_vtel_slider_window_g3

0x806c,	// (0x00047c07) popup_vtel_slider_window_g4_ParamLimits

0x806c,	// (0x00047c07) popup_vtel_slider_window_g4

0x8083,	// (0x00047c1e) popup_vtel_slider_window_t1_ParamLimits

0x8083,	// (0x00047c1e) popup_vtel_slider_window_t1

0xd470,	// (0x0004d00b) main_cl_pane

0xad62,	// (0x0004a8fd) popup_imed_adjust2_window_ParamLimits

0xf077,	// (0x0004ec12) bg_tb_trans_pane_cp05_ParamLimits

0x6d7e,	// (0x00046919) popup_imed_adjust2_window_g1_ParamLimits

0x6d8d,	// (0x00046928) popup_imed_adjust2_window_g2_ParamLimits

0x6d8d,	// (0x00046928) popup_imed_adjust2_window_g2

0x6d99,	// (0x00046934) popup_imed_adjust2_window_g3_ParamLimits

0x6d99,	// (0x00046934) popup_imed_adjust2_window_g3

0x0002,

0xf767,	// (0x0004f302) popup_imed_adjust2_window_g_ParamLimits

0xf767,	// (0x0004f302) popup_imed_adjust2_window_g

0x6da5,	// (0x00046940) popup_imed_adjust2_window_t1_ParamLimits

0x6dbd,	// (0x00046958) slider_imed_adjust_pane_ParamLimits

0xae1e,	// (0x0004a9b9) slider_imed_adjust_pane_g1_ParamLimits

0xae2e,	// (0x0004a9c9) slider_imed_adjust_pane_g2_ParamLimits

0xae3e,	// (0x0004a9d9) slider_imed_adjust_pane_g3_ParamLimits

0xae4f,	// (0x0004a9ea) slider_imed_adjust_pane_g4_ParamLimits

0xf76e,	// (0x0004f309) slider_imed_adjust_pane_g_ParamLimits

0x7599,	// (0x00047134) aid_touch_area_cam4_ParamLimits

0x7599,	// (0x00047134) aid_touch_area_cam4

0xb45e,	// (0x0004aff9) battery_pane_cp01

0x766c,	// (0x00047207) main_camera4_pane_g6_ParamLimits

0x766c,	// (0x00047207) main_camera4_pane_g6

0x7696,	// (0x00047231) main_camera4_pane_t2_ParamLimits

0x7696,	// (0x00047231) main_camera4_pane_t2

0x0001,

0xf870,	// (0x0004f40b) main_camera4_pane_t_ParamLimits

0xf870,	// (0x0004f40b) main_camera4_pane_t

0x76cb,	// (0x00047266) aid_touch_area_vid4_ParamLimits

0x76cb,	// (0x00047266) aid_touch_area_vid4

0x7722,	// (0x000472bd) main_video4_pane_g5_ParamLimits

0x7722,	// (0x000472bd) main_video4_pane_g5

0x7748,	// (0x000472e3) vid4_progress_pane_ParamLimits

0x7748,	// (0x000472e3) vid4_progress_pane

0xb70a,	// (0x0004b2a5) main_cset_slider_pane_g18_ParamLimits

0xb70a,	// (0x0004b2a5) main_cset_slider_pane_g18

0xb8ed,	// (0x0004b488) cell_cam4_burst_pane_g2_ParamLimits

0xb8ed,	// (0x0004b488) cell_cam4_burst_pane_g2

0x0001,

0xf9c5,	// (0x0004f560) cell_cam4_burst_pane_g_ParamLimits

0xf9c5,	// (0x0004f560) cell_cam4_burst_pane_g

0xdc18,	// (0x0004d7b3) bg_cl_pane_ParamLimits

0xdc18,	// (0x0004d7b3) bg_cl_pane

0x854a,	// (0x000480e5) cl_header_pane_ParamLimits

0x854a,	// (0x000480e5) cl_header_pane

0x855e,	// (0x000480f9) cl_listscroll_pane_ParamLimits

0x855e,	// (0x000480f9) cl_listscroll_pane

0xbad7,	// (0x0004b672) bg_cl_pane_g1

0xbadf,	// (0x0004b67a) bg_cl_pane_g2

0xbae7,	// (0x0004b682) bg_cl_pane_g3

0xbaef,	// (0x0004b68a) bg_cl_pane_g4

0xbaf7,	// (0x0004b692) bg_cl_pane_g5

0xbaff,	// (0x0004b69a) bg_cl_pane_g6

0xbb07,	// (0x0004b6a2) bg_cl_pane_g7

0xbb0f,	// (0x0004b6aa) bg_cl_pane_g8

0xbb17,	// (0x0004b6b2) bg_cl_pane_g9

0x0008,

0xfa00,	// (0x0004f59b) bg_cl_pane_g

0x856e,	// (0x00048109) aid_height_cl_leading_ParamLimits

0x856e,	// (0x00048109) aid_height_cl_leading

0x857a,	// (0x00048115) aid_height_cl_text_ParamLimits

0x857a,	// (0x00048115) aid_height_cl_text

0xdb4d,	// (0x0004d6e8) bg_cl_header_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_cl_header_pane

0x8599,	// (0x00048134) cl_header_pane_g1_ParamLimits

0x8599,	// (0x00048134) cl_header_pane_g1

0x85af,	// (0x0004814a) cl_header_pane_t1_ParamLimits

0x85af,	// (0x0004814a) cl_header_pane_t1

0xbb1f,	// (0x0004b6ba) cl_list_pane

0xb6dd,	// (0x0004b278) hc_scroll_pane_cp01

0xdff5,	// (0x0004db90) bg_cl_header_pane_g1

0xb5bf,	// (0x0004b15a) bg_cl_header_pane_g2

0xe015,	// (0x0004dbb0) bg_cl_header_pane_g3

0xb5cf,	// (0x0004b16a) bg_cl_header_pane_g4

0xb5c7,	// (0x0004b162) bg_cl_header_pane_g5

0xb7fc,	// (0x0004b397) bg_cl_header_pane_g6

0xb5e7,	// (0x0004b182) bg_cl_header_pane_g7

0xb5ef,	// (0x0004b18a) bg_cl_header_pane_g8

0xb5df,	// (0x0004b17a) bg_cl_header_pane_g9

0x0008,

0xfa13,	// (0x0004f5ae) bg_cl_header_pane_g

0x85c8,	// (0x00048163) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x85c8,	// (0x00048163) hc_cl_list_double_graphic_heading_pane

0x85db,	// (0x00048176) hc_cl_list_single_graphic_pane_ParamLimits

0x85db,	// (0x00048176) hc_cl_list_single_graphic_pane

0x85f3,	// (0x0004818e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x85f3,	// (0x0004818e) hc_cl_list_single_graphic_pane_g1

0x85ff,	// (0x0004819a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x85ff,	// (0x0004819a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa26,	// (0x0004f5c1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa26,	// (0x0004f5c1) hc_cl_list_single_graphic_pane_g

0x8613,	// (0x000481ae) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8613,	// (0x000481ae) hc_cl_list_single_graphic_pane_t1

0x85f3,	// (0x0004818e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x85f3,	// (0x0004818e) hc_cl_list_double_graphic_heading_pane_g1

0x8628,	// (0x000481c3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8628,	// (0x000481c3) hc_cl_list_double_graphic_heading_pane_g2

0x863c,	// (0x000481d7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x863c,	// (0x000481d7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa2b,	// (0x0004f5c6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa2b,	// (0x0004f5c6) hc_cl_list_double_graphic_heading_pane_g

0x8650,	// (0x000481eb) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8650,	// (0x000481eb) hc_cl_list_double_graphic_heading_pane_t1

0x8665,	// (0x00048200) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8665,	// (0x00048200) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa32,	// (0x0004f5cd) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa32,	// (0x0004f5cd) hc_cl_list_double_graphic_heading_pane_t

0xd3bf,	// (0x0004cf5a) vid4_progress_pane_g1

0xd3cf,	// (0x0004cf6a) vid4_progress_pane_g2

0xd3df,	// (0x0004cf7a) vid4_progress_pane_g3

0xd3f1,	// (0x0004cf8c) vid4_progress_pane_g4

0x0004,

0xfa37,	// (0x0004f5d2) vid4_progress_pane_g

0xd40f,	// (0x0004cfaa) vid4_progress_pane_t1

0xd429,	// (0x0004cfc4) vid4_progress_pane_t2

0x0002,

0xfa42,	// (0x0004f5dd) vid4_progress_pane_t

0x867a,	// (0x00048215) wait_bar_pane_cp07

0x59b8,	// (0x00045553) blid_firmament_pane_ParamLimits

0x59fb,	// (0x00045596) popup_blid_sat_info2_window_g1

0x5a1f,	// (0x000455ba) popup_blid_sat_info2_window_t3

0x5a2d,	// (0x000455c8) popup_blid_sat_info2_window_t4

0x5a3b,	// (0x000455d6) popup_blid_sat_info2_window_t5

0x5a49,	// (0x000455e4) popup_blid_sat_info2_window_t6

0x5a59,	// (0x000455f4) popup_blid_sat_info2_window_t7

0x5a67,	// (0x00045602) popup_blid_sat_info2_window_t8

0x5a75,	// (0x00045610) popup_blid_sat_info2_window_t9

0x5a83,	// (0x0004561e) popup_blid_sat_info2_window_t10

0x5b4a,	// (0x000456e5) aid_firma_cardinal_ParamLimits

0x5b5e,	// (0x000456f9) blid_firmament_pane_t1_ParamLimits

0x5b75,	// (0x00045710) blid_firmament_pane_t2_ParamLimits

0x5b8c,	// (0x00045727) blid_firmament_pane_t3_ParamLimits

0x5ba3,	// (0x0004573e) blid_firmament_pane_t4_ParamLimits

0xf660,	// (0x0004f1fb) blid_firmament_pane_t_ParamLimits

0x5bba,	// (0x00045755) blid_sat_info_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) main_cam_set_pane_ParamLimits

0x6bd2,	// (0x0004676d) aid_size_cell_colour_35_ParamLimits

0x6bf2,	// (0x0004678d) aid_size_cell_colour_112_ParamLimits

0x6c12,	// (0x000467ad) aid_size_cell_effect_ParamLimits

0xf077,	// (0x0004ec12) bg_tb_trans_pane_cp02_ParamLimits

0xe25d,	// (0x0004ddf8) heading_imed_pane_ParamLimits

0x6c32,	// (0x000467cd) listscroll_imed_pane_ParamLimits

0x4524,	// (0x000440bf) popup_call2_audio_first_window_g5_ParamLimits

0x4524,	// (0x000440bf) popup_call2_audio_first_window_g5

0x71aa,	// (0x00046d45) aid_size_touch_image3_arrow_left_ParamLimits

0x71aa,	// (0x00046d45) aid_size_touch_image3_arrow_left

0x71d6,	// (0x00046d71) aid_size_touch_image3_arrow_right_ParamLimits

0x71d6,	// (0x00046d71) aid_size_touch_image3_arrow_right

0xd43e,	// (0x0004cfd9) vid4_progress_pane_t3

0x6f06,	// (0x00046aa1) main_hwr_training_symbol_option_pane_ParamLimits

0x6f06,	// (0x00046aa1) main_hwr_training_symbol_option_pane

0xb010,	// (0x0004abab) popup_hwr_training_preview_window_ParamLimits

0xb010,	// (0x0004abab) popup_hwr_training_preview_window

0x6f26,	// (0x00046ac1) hwr_training_navi_pane_g5_ParamLimits

0x6f26,	// (0x00046ac1) hwr_training_navi_pane_g5

0xb5ad,	// (0x0004b148) popup_char_count_window

0xdb4d,	// (0x0004d6e8) bg_popup_sub_pane_cp20_ParamLimits

0x8195,	// (0x00047d30) list_vitu2_match_list_pane_ParamLimits

0x81a1,	// (0x00047d3c) vitu2_page_scroll_pane_ParamLimits

0x81a1,	// (0x00047d3c) vitu2_page_scroll_pane

0xbb4a,	// (0x0004b6e5) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbb4a,	// (0x0004b6e5) list_single_hwr_training_symbol_option_pane

0xbb5d,	// (0x0004b6f8) list_single_hwr_training_symbol_option_pane_g1

0xbb65,	// (0x0004b700) list_single_hwr_training_symbol_option_pane_t1

0xbb73,	// (0x0004b70e) bg_button_pane_cp023

0xbb7c,	// (0x0004b717) bg_button_pane_cp024

0xbbaf,	// (0x0004b74a) vitu2_page_scroll_pane_g1

0xbbb7,	// (0x0004b752) vitu2_page_scroll_pane_g2

0x0001,

0xfa49,	// (0x0004f5e4) vitu2_page_scroll_pane_g

0xbbbf,	// (0x0004b75a) vitu2_page_scroll_pane_t1

0xbbce,	// (0x0004b769) popup_char_count_window_g1

0xbbd7,	// (0x0004b772) popup_char_count_window_g2

0xbbe0,	// (0x0004b77b) popup_char_count_window_g3

0x0002,

0xfa4e,	// (0x0004f5e9) popup_char_count_window_g

0xbbe9,	// (0x0004b784) popup_char_count_window_t1

0xd470,	// (0x0004d00b) main_vded2_pane

0x6d6a,	// (0x00046905) aid_size_cell_imed_line

0x6d74,	// (0x0004690f) grid_imed_line_width_pane

0xb52c,	// (0x0004b0c7) vid4_indicators_pane_g4

0xbbf7,	// (0x0004b792) cell_imed_line_width_pane_ParamLimits

0xbbf7,	// (0x0004b792) cell_imed_line_width_pane

0xbc0d,	// (0x0004b7a8) cell_imed_line_width_pane_g1

0xbc16,	// (0x0004b7b1) cell_imed_line_width_pane_g2

0x0001,

0xfa55,	// (0x0004f5f0) cell_imed_line_width_pane_g

0x868d,	// (0x00048228) main_vded2_pane_g1_ParamLimits

0x868d,	// (0x00048228) main_vded2_pane_g1

0x86a8,	// (0x00048243) main_vded2_pane_g2_ParamLimits

0x86a8,	// (0x00048243) main_vded2_pane_g2

0x0001,

0xfa5a,	// (0x0004f5f5) main_vded2_pane_g_ParamLimits

0xfa5a,	// (0x0004f5f5) main_vded2_pane_g

0x86ba,	// (0x00048255) vded2_slider_pane_ParamLimits

0x86ba,	// (0x00048255) vded2_slider_pane

0x86ca,	// (0x00048265) aid_size_touch_vded2_end

0x86d4,	// (0x0004826f) aid_size_touch_vded2_playhead

0xbc1e,	// (0x0004b7b9) aid_size_touch_vded2_start

0xbc26,	// (0x0004b7c1) vded2_slider_bg_pane

0xbc2f,	// (0x0004b7ca) vded2_slider_pane_g1

0xbc38,	// (0x0004b7d3) vded2_slider_pane_g2

0x86de,	// (0x00048279) vded2_slider_pane_g3

0x0002,

0xfa5f,	// (0x0004f5fa) vded2_slider_pane_g

0xbc40,	// (0x0004b7db) vded2_slider_bg_pane_g1

0xbc49,	// (0x0004b7e4) vded2_slider_bg_pane_g2

0xbc52,	// (0x0004b7ed) vded2_slider_bg_pane_g3

0x0002,

0xfa66,	// (0x0004f601) vded2_slider_bg_pane_g

0x3e23,	// (0x000439be) aid_postcard_touch_down_pane_ParamLimits

0x3e23,	// (0x000439be) aid_postcard_touch_down_pane

0x3e3b,	// (0x000439d6) aid_postcard_touch_up_pane_ParamLimits

0x3e3b,	// (0x000439d6) aid_postcard_touch_up_pane

0xd470,	// (0x0004d00b) main_blid2_pane

0xad44,	// (0x0004a8df) popup_blid2_search_window

0xd470,	// (0x0004d00b) blid2_gps_pane

0xd470,	// (0x0004d00b) blid2_navig_pane

0xd470,	// (0x0004d00b) blid2_search_pane

0xd470,	// (0x0004d00b) blid2_tripm_pane

0x86e9,	// (0x00048284) blid2_search_pane_g1_ParamLimits

0x86e9,	// (0x00048284) blid2_search_pane_g1

0x86fc,	// (0x00048297) blid2_search_pane_t1_ParamLimits

0x86fc,	// (0x00048297) blid2_search_pane_t1

0x870e,	// (0x000482a9) aid_size_cell_blid2_gps_ParamLimits

0x870e,	// (0x000482a9) aid_size_cell_blid2_gps

0x8726,	// (0x000482c1) blid2_gps_pane_g1_ParamLimits

0x8726,	// (0x000482c1) blid2_gps_pane_g1

0x873a,	// (0x000482d5) grid_blid2_satellite_pane_ParamLimits

0x873a,	// (0x000482d5) grid_blid2_satellite_pane

0x8752,	// (0x000482ed) blid2_navig_pane_g1_ParamLimits

0x8752,	// (0x000482ed) blid2_navig_pane_g1

0x875e,	// (0x000482f9) blid2_navig_pane_t1_ParamLimits

0x875e,	// (0x000482f9) blid2_navig_pane_t1

0x8779,	// (0x00048314) blid2_navig_pane_t2_ParamLimits

0x8779,	// (0x00048314) blid2_navig_pane_t2

0x0001,

0xfa6d,	// (0x0004f608) blid2_navig_pane_t_ParamLimits

0xfa6d,	// (0x0004f608) blid2_navig_pane_t

0x8794,	// (0x0004832f) blid2_navig_ring_pane_ParamLimits

0x8794,	// (0x0004832f) blid2_navig_ring_pane

0x87af,	// (0x0004834a) blid2_speed_pane_ParamLimits

0x87af,	// (0x0004834a) blid2_speed_pane

0x87bb,	// (0x00048356) blid2_tripm_pane_g1_ParamLimits

0x87bb,	// (0x00048356) blid2_tripm_pane_g1

0x87d6,	// (0x00048371) blid2_tripm_pane_g2_ParamLimits

0x87d6,	// (0x00048371) blid2_tripm_pane_g2

0x87ea,	// (0x00048385) blid2_tripm_pane_g3_ParamLimits

0x87ea,	// (0x00048385) blid2_tripm_pane_g3

0x87fe,	// (0x00048399) blid2_tripm_pane_g4_ParamLimits

0x87fe,	// (0x00048399) blid2_tripm_pane_g4

0x8812,	// (0x000483ad) blid2_tripm_pane_g5_ParamLimits

0x8812,	// (0x000483ad) blid2_tripm_pane_g5

0x0005,

0xfa72,	// (0x0004f60d) blid2_tripm_pane_g_ParamLimits

0xfa72,	// (0x0004f60d) blid2_tripm_pane_g

0x8838,	// (0x000483d3) blid2_tripm_pane_t1_ParamLimits

0x8838,	// (0x000483d3) blid2_tripm_pane_t1

0x8851,	// (0x000483ec) blid2_tripm_pane_t2_ParamLimits

0x8851,	// (0x000483ec) blid2_tripm_pane_t2

0x886a,	// (0x00048405) blid2_tripm_pane_t3_ParamLimits

0x886a,	// (0x00048405) blid2_tripm_pane_t3

0x0003,

0xfa7f,	// (0x0004f61a) blid2_tripm_pane_t_ParamLimits

0xfa7f,	// (0x0004f61a) blid2_tripm_pane_t

0x88b1,	// (0x0004844c) cell_blid2_satellite_pane_ParamLimits

0x88b1,	// (0x0004844c) cell_blid2_satellite_pane

0x88cd,	// (0x00048468) cell_blid2_satellite_pane_g1

0xbc5b,	// (0x0004b7f6) cell_blid2_satellite_pane_t1

0xde00,	// (0x0004d99b) blid2_speed_pane_g1

0xbc69,	// (0x0004b804) blid2_speed_pane_t1

0xbc77,	// (0x0004b812) blid2_speed_pane_t2

0x0001,

0xfa88,	// (0x0004f623) blid2_speed_pane_t

0xde00,	// (0x0004d99b) blid2_navig_ring_pane_g1

0x88d6,	// (0x00048471) blid2_navig_ring_pane_g2

0x88de,	// (0x00048479) blid2_navig_ring_pane_g3

0x88e6,	// (0x00048481) blid2_navig_ring_pane_g4

0x88ee,	// (0x00048489) blid2_navig_ring_pane_g5

0x0004,

0xfa8d,	// (0x0004f628) blid2_navig_ring_pane_g

0xd470,	// (0x0004d00b) bg_popup_window_pane_cp011

0xbc85,	// (0x0004b820) popup_blid2_search_window_g1

0xbc8d,	// (0x0004b828) popup_blid2_search_window_t1

0xbc9b,	// (0x0004b836) popup_blid2_search_window_t2

0x0001,

0xfa98,	// (0x0004f633) popup_blid2_search_window_t

0xdf04,	// (0x0004da9f) main_browser_pane_g1

0xdc18,	// (0x0004d7b3) main_browser_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_button_pane_cp011_ParamLimits

0x7a18,	// (0x000475b3) cell_vitu2_function_pane_g1_ParamLimits

0xf077,	// (0x0004ec12) bg_popup_sub_pane_cp22_ParamLimits

0x10d9,	// (0x00040c74) input_focus_pane_cp08_ParamLimits

0x8332,	// (0x00047ecd) popup_vitu2_query_button_pane_ParamLimits

0x8332,	// (0x00047ecd) popup_vitu2_query_button_pane

0x10f0,	// (0x00040c8b) popup_vitu2_query_input_button_pane

0xb837,	// (0x0004b3d2) popup_vitu2_query_window_g1_ParamLimits

0x10fa,	// (0x00040c95) popup_vitu2_query_window_g2_ParamLimits

0xf999,	// (0x0004f534) popup_vitu2_query_window_g_ParamLimits

0xd470,	// (0x0004d00b) bg_button_pane_cp026

0x88f6,	// (0x00048491) popup_vitu2_query_input_button_pane_g1

0xd470,	// (0x0004d00b) bg_button_pane_cp025

0xbca9,	// (0x0004b844) popup_vitu2_query_button_pane_t1

0x5ec2,	// (0x00045a5d) main_mp3_pane_t6

0x5ed8,	// (0x00045a73) popup_slider_window_cp01

0xb490,	// (0x0004b02b) cam4_battery_pane

0xb4e5,	// (0x0004b080) cam4_battery_pane_cp02

0xd3b7,	// (0x0004cf52) cam4_battery_pane_cp01

0xd3b7,	// (0x0004cf52) cam4_battery_pane_cp03

0xde00,	// (0x0004d99b) cam4_battery_pane_g1

0x88fe,	// (0x00048499) cam4_battery_pane_g2

0x0001,

0xfa9d,	// (0x0004f638) cam4_battery_pane_g

0x5a91,	// (0x0004562c) popup_blid_sat_info2_window_t11

0x39fa,	// (0x00043595) aid_size_touch_mv_arrow_left_ParamLimits

0x3a23,	// (0x000435be) aid_size_touch_mv_arrow_right_ParamLimits

0xe66a,	// (0x0004e205) navi_pane_g1_ParamLimits

0x3a62,	// (0x000435fd) navi_pane_g2_ParamLimits

0x3a90,	// (0x0004362b) navi_pane_g3_ParamLimits

0xf374,	// (0x0004ef0f) navi_pane_g_ParamLimits

0x3aea,	// (0x00043685) navi_pane_mv_t1_ParamLimits

0x6c70,	// (0x0004680b) grid_imed_effect_pane_ParamLimits

0x25a1,	// (0x0004213c) aid_placing_vt_slider_lsc

0xde4f,	// (0x0004d9ea) aid_placing_vt_slider_prt

0xdb4d,	// (0x0004d6e8) bg_tb_trans_pane_cp01_ParamLimits

0x5d3e,	// (0x000458d9) popup_image_details_window_g1_ParamLimits

0x5d51,	// (0x000458ec) popup_image_details_window_g2_ParamLimits

0x5d66,	// (0x00045901) popup_image_details_window_g3_ParamLimits

0x5d66,	// (0x00045901) popup_image_details_window_g3

0xf6a0,	// (0x0004f23b) popup_image_details_window_g_ParamLimits

0x5d7a,	// (0x00045915) popup_image_details_window_t1_ParamLimits

0x5d8c,	// (0x00045927) popup_image_details_window_t2_ParamLimits

0x5da5,	// (0x00045940) popup_image_details_window_t3_ParamLimits

0x5db9,	// (0x00045954) popup_image_details_window_t4_ParamLimits

0x5dd4,	// (0x0004596f) popup_image_details_window_t5_ParamLimits

0xf6a7,	// (0x0004f242) popup_image_details_window_t_ParamLimits

0x8586,	// (0x00048121) cl_header_name_pane_ParamLimits

0x8586,	// (0x00048121) cl_header_name_pane

0x8908,	// (0x000484a3) cl_header_name_pane_t1_ParamLimits

0x8908,	// (0x000484a3) cl_header_name_pane_t1

0x8929,	// (0x000484c4) cl_header_name_pane_t2_ParamLimits

0x8929,	// (0x000484c4) cl_header_name_pane_t2

0x896b,	// (0x00048506) cl_header_name_pane_t3_ParamLimits

0x896b,	// (0x00048506) cl_header_name_pane_t3

0x0002,

0xfaa2,	// (0x0004f63d) cl_header_name_pane_t_ParamLimits

0xfaa2,	// (0x0004f63d) cl_header_name_pane_t

0x3abb,	// (0x00043656) navi_pane_mv_g2_ParamLimits

0xb578,	// (0x0004b113) field_vitu2_entry_pane_g1_ParamLimits

0xb584,	// (0x0004b11f) field_vitu2_entry_pane_g2_ParamLimits

0xf055,	// (0x0004ebf0) field_vitu2_entry_pane_g3_ParamLimits

0xf055,	// (0x0004ebf0) field_vitu2_entry_pane_g3

0xf8a2,	// (0x0004f43d) field_vitu2_entry_pane_g_ParamLimits

0x7994,	// (0x0004752f) cell_vitu2_itu_pane_g1_ParamLimits

0x79ac,	// (0x00047547) cell_vitu2_itu_pane_g2_ParamLimits

0x79ac,	// (0x00047547) cell_vitu2_itu_pane_g2

0x0001,

0xf8ae,	// (0x0004f449) cell_vitu2_itu_pane_g_ParamLimits

0xf8ae,	// (0x0004f449) cell_vitu2_itu_pane_g

0xdb4d,	// (0x0004d6e8) bg_vkb2_func_pane_cp05_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_vkb2_func_pane_cp05

0xdb4d,	// (0x0004d6e8) bg_vkb2_func_pane_cp03

0xdb4d,	// (0x0004d6e8) bg_vkb2_func_pane_cp04

0xdb4d,	// (0x0004d6e8) bg_vkb2_func_pane_cp10_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_vkb2_func_pane_cp10

0x121f,	// (0x00040dba) bg_vkb2_func_pane_cp08

0x8530,	// (0x000480cb) bg_vkb2_func_pane_cp06

0x853e,	// (0x000480d9) bg_vkb2_func_pane_cp07

0xbb85,	// (0x0004b720) bg_vkb2_func_pane_cp11_ParamLimits

0xbb85,	// (0x0004b720) bg_vkb2_func_pane_cp11

0xbb9a,	// (0x0004b735) bg_vkb2_func_pane_cp12_ParamLimits

0xbb9a,	// (0x0004b735) bg_vkb2_func_pane_cp12

0xd470,	// (0x0004d00b) bg_vkb2_func_pane_cp09

0xb5bf,	// (0x0004b15a) bg_vkb2_func_pane_g1

0xe015,	// (0x0004dbb0) bg_vkb2_func_pane_g2

0xb5c7,	// (0x0004b162) bg_vkb2_func_pane_g3

0xb5cf,	// (0x0004b16a) bg_vkb2_func_pane_g4

0xb7fc,	// (0x0004b397) bg_vkb2_func_pane_g5

0xb5e7,	// (0x0004b182) bg_vkb2_func_pane_g6

0xb5ef,	// (0x0004b18a) bg_vkb2_func_pane_g7

0xb5df,	// (0x0004b17a) bg_vkb2_func_pane_g8

0xdff5,	// (0x0004db90) bg_vkb2_func_pane_g9

0x0008,

0xfaa9,	// (0x0004f644) bg_vkb2_func_pane_g

0x8826,	// (0x000483c1) blid2_tripm_pane_g6_ParamLimits

0x8826,	// (0x000483c1) blid2_tripm_pane_g6

0xb343,	// (0x0004aede) mp4_progress_pane_g1

0x889d,	// (0x00048438) blid2_tripm_values_pane_ParamLimits

0x889d,	// (0x00048438) blid2_tripm_values_pane

0x899c,	// (0x00048537) blid2_tripm_values_pane_t1

0x89aa,	// (0x00048545) blid2_tripm_values_pane_t2

0x89b8,	// (0x00048553) blid2_tripm_values_pane_t3

0x89c6,	// (0x00048561) blid2_tripm_values_pane_t4

0x89d4,	// (0x0004856f) blid2_tripm_values_pane_t5

0x89e2,	// (0x0004857d) blid2_tripm_values_pane_t6

0x89f0,	// (0x0004858b) blid2_tripm_values_pane_t7

0x89fe,	// (0x00048599) blid2_tripm_values_pane_t8

0x8a0c,	// (0x000485a7) blid2_tripm_values_pane_t9

0x0008,

0xfabc,	// (0x0004f657) blid2_tripm_values_pane_t

0x25de,	// (0x00042179) call_video_pane_t1_ParamLimits

0x25f8,	// (0x00042193) call_video_pane_t2_ParamLimits

0xf222,	// (0x0004edbd) call_video_pane_t_ParamLimits

0x0e81,	// (0x00040a1c) msg_header_pane_g1_ParamLimits

0xe86a,	// (0x0004e405) msg_header_pane_g2_ParamLimits

0xe86a,	// (0x0004e405) msg_header_pane_g2

0x0001,

0xf417,	// (0x0004efb2) msg_header_pane_g_ParamLimits

0xf417,	// (0x0004efb2) msg_header_pane_g

0xdc18,	// (0x0004d7b3) main_clock2_pane_ParamLimits

0x68eb,	// (0x00046486) grid_clock2_toolbar_pane_ParamLimits

0x68eb,	// (0x00046486) grid_clock2_toolbar_pane

0x68eb,	// (0x00046486) listscroll_clock2_pane_ParamLimits

0x68eb,	// (0x00046486) listscroll_clock2_pane

0x69fa,	// (0x00046595) main_clock2_pane_t3_ParamLimits

0x69fa,	// (0x00046595) main_clock2_pane_t3

0x6a1d,	// (0x000465b8) main_clock2_pane_t4_ParamLimits

0x6a1d,	// (0x000465b8) main_clock2_pane_t4

0xbcb7,	// (0x0004b852) cell_clock2_toolbar_pane

0xbcbf,	// (0x0004b85a) cell_clock2_toolbar_pane_cp01

0xbcbf,	// (0x0004b85a) cell_clock2_toolbar_pane_cp02

0xbcc7,	// (0x0004b862) cell_clock2_toolbar_pane_cp03

0xbccf,	// (0x0004b86a) list_clock2_pane

0xe5d0,	// (0x0004e16b) scroll_pane_cp10

0xbcd7,	// (0x0004b872) list_single_clock2_pane_ParamLimits

0xbcd7,	// (0x0004b872) list_single_clock2_pane

0xddb6,	// (0x0004d951) list_highlight_pane_cp08

0xbce4,	// (0x0004b87f) list_single_clock2_pane_t1

0xbcf2,	// (0x0004b88d) list_single_clock2_pane_t2

0x0001,

0xfacf,	// (0x0004f66a) list_single_clock2_pane_t

0xd470,	// (0x0004d00b) bg_button_pane_cp10

0xbd00,	// (0x0004b89b) cell_clock2_toolbar_pane_g1

0x3daf,	// (0x0004394a) aid_main_viewer_pane_g1_ParamLimits

0x3daf,	// (0x0004394a) aid_main_viewer_pane_g1

0x3dbd,	// (0x00043958) aid_main_viewer_pane_g2_ParamLimits

0x3dbd,	// (0x00043958) aid_main_viewer_pane_g2

0x3dcb,	// (0x00043966) aid_main_viewer_pane_g3_ParamLimits

0x3dcb,	// (0x00043966) aid_main_viewer_pane_g3

0x3dda,	// (0x00043975) aid_main_viewer_pane_g4_ParamLimits

0x3dda,	// (0x00043975) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x0004efc3) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x0004efc3) aid_main_viewer_pane_g

0x5159,	// (0x00044cf4) main_calc_pane_ParamLimits

0x5179,	// (0x00044d14) main_dialer2_pane_ParamLimits

0xd470,	// (0x0004d00b) main_cam6_pane

0xd470,	// (0x0004d00b) main_vid6_pane

0x68f7,	// (0x00046492) listscroll_gen_pane_cp06_ParamLimits

0x68f7,	// (0x00046492) listscroll_gen_pane_cp06

0x6a40,	// (0x000465db) main_clock2_pane_t5_ParamLimits

0x6a40,	// (0x000465db) main_clock2_pane_t5

0x6a9e,	// (0x00046639) aid_call2_pane_cp10_ParamLimits

0x6ab0,	// (0x0004664b) aid_call_pane_cp10_ParamLimits

0xe63f,	// (0x0004e1da) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe63f,	// (0x0004e1da) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6ac2,	// (0x0004665d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6ac2,	// (0x0004665d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe63f,	// (0x0004e1da) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75c,	// (0x0004f2f7) popup_clock_analogue_window_cp10_g_ParamLimits

0x6ad8,	// (0x00046673) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7157,	// (0x00046cf2) cell_dialer2_keypad_pane_g2_ParamLimits

0x7157,	// (0x00046cf2) cell_dialer2_keypad_pane_g2

0x0001,

0xf841,	// (0x0004f3dc) cell_dialer2_keypad_pane_g_ParamLimits

0xf841,	// (0x0004f3dc) cell_dialer2_keypad_pane_g

0x7173,	// (0x00046d0e) cell_dialer2_keypad_pane_t1

0x7d4b,	// (0x000478e6) main_cset_text2_pane_ParamLimits

0x7d4b,	// (0x000478e6) main_cset_text2_pane

0xba2f,	// (0x0004b5ca) area_vitu2_query_pane_g1_ParamLimits

0x11de,	// (0x00040d79) area_vitu2_query_pane_g2_ParamLimits

0xf9ec,	// (0x0004f587) area_vitu2_query_pane_g_ParamLimits

0xbab3,	// (0x0004b64e) area_vitu2_query_pane_t7_ParamLimits

0xbab3,	// (0x0004b64e) area_vitu2_query_pane_t7

0x8530,	// (0x000480cb) bg_button_pane_cp018_ParamLimits

0x853e,	// (0x000480d9) bg_button_pane_cp021_ParamLimits

0x121f,	// (0x00040dba) bg_button_pane_cp022_ParamLimits

0x121f,	// (0x00040dba) bg_vkb2_func_pane_cp08_ParamLimits

0x8530,	// (0x000480cb) bg_vkb2_func_pane_cp06_ParamLimits

0x853e,	// (0x000480d9) bg_vkb2_func_pane_cp07_ParamLimits

0x1230,	// (0x00040dcb) input_focus_pane_cp09_ParamLimits

0xd453,	// (0x0004cfee) cam6_autofocus_pane_ParamLimits

0xd453,	// (0x0004cfee) cam6_autofocus_pane

0x8a1a,	// (0x000485b5) cam6_image_uncrop_pane_ParamLimits

0x8a1a,	// (0x000485b5) cam6_image_uncrop_pane

0x8a29,	// (0x000485c4) cam6_indi_pane_ParamLimits

0x8a29,	// (0x000485c4) cam6_indi_pane

0x8a3f,	// (0x000485da) cam6_mode_pane_ParamLimits

0x8a3f,	// (0x000485da) cam6_mode_pane

0x8a51,	// (0x000485ec) cam6_timer_pane_ParamLimits

0x8a51,	// (0x000485ec) cam6_timer_pane

0x8a5d,	// (0x000485f8) cam6_zoom_pane_ParamLimits

0x8a5d,	// (0x000485f8) cam6_zoom_pane

0x8a6b,	// (0x00048606) cam6_mode_pane_g1_ParamLimits

0x8a6b,	// (0x00048606) cam6_mode_pane_g1

0x8a7b,	// (0x00048616) cam6_mode_pane_g2_ParamLimits

0x8a7b,	// (0x00048616) cam6_mode_pane_g2

0x8a8b,	// (0x00048626) cam6_mode_pane_g3_ParamLimits

0x8a8b,	// (0x00048626) cam6_mode_pane_g3

0x8a9b,	// (0x00048636) cam6_mode_pane_g4_ParamLimits

0x8a9b,	// (0x00048636) cam6_mode_pane_g4

0x0003,

0xfad4,	// (0x0004f66f) cam6_mode_pane_g_ParamLimits

0xfad4,	// (0x0004f66f) cam6_mode_pane_g

0xadee,	// (0x0004a989) bg_tb_trans_pane_cp08_ParamLimits

0xadee,	// (0x0004a989) bg_tb_trans_pane_cp08

0xbd08,	// (0x0004b8a3) cam6_battery_pane_ParamLimits

0xbd08,	// (0x0004b8a3) cam6_battery_pane

0xbd1e,	// (0x0004b8b9) cam6_indi_pane_g1_ParamLimits

0xbd1e,	// (0x0004b8b9) cam6_indi_pane_g1

0xbd30,	// (0x0004b8cb) cam6_indi_pane_g2_ParamLimits

0xbd30,	// (0x0004b8cb) cam6_indi_pane_g2

0xbd42,	// (0x0004b8dd) cam6_indi_pane_g3_ParamLimits

0xbd42,	// (0x0004b8dd) cam6_indi_pane_g3

0x0002,

0xfadd,	// (0x0004f678) cam6_indi_pane_g_ParamLimits

0xfadd,	// (0x0004f678) cam6_indi_pane_g

0xbd54,	// (0x0004b8ef) cam6_indi_pane_t1_ParamLimits

0xbd54,	// (0x0004b8ef) cam6_indi_pane_t1

0x778d,	// (0x00047328) cam6_autofocus_pane_g1

0x7795,	// (0x00047330) cam6_autofocus_pane_g2

0x779d,	// (0x00047338) cam6_autofocus_pane_g3

0x77a5,	// (0x00047340) cam6_autofocus_pane_g4

0x0003,

0xfae4,	// (0x0004f67f) cam6_autofocus_pane_g

0xbd7a,	// (0x0004b915) cam6_timer_pane_g1

0xbd82,	// (0x0004b91d) cam6_timer_pane_t1

0xbd90,	// (0x0004b92b) cam6_zoom_cont_pane

0xbd98,	// (0x0004b933) cam6_zoom_pane_g1

0xbda0,	// (0x0004b93b) cam6_zoom_pane_g2

0x8aab,	// (0x00048646) cam6_zoom_pane_g3

0x0002,

0xfaed,	// (0x0004f688) cam6_zoom_pane_g

0xde00,	// (0x0004d99b) cam6_battery_pane_g1

0xde00,	// (0x0004d99b) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x0004ef73) cam6_battery_pane_g

0xbda8,	// (0x0004b943) cam6_zoom_cont_pane_g1

0xbdb1,	// (0x0004b94c) cam6_zoom_cont_pane_g2

0xbdba,	// (0x0004b955) cam6_zoom_cont_pane_g3

0x0002,

0xfaf4,	// (0x0004f68f) cam6_zoom_cont_pane_g

0x8ac8,	// (0x00048663) cam6_mode_pane_cp_ParamLimits

0x8ac8,	// (0x00048663) cam6_mode_pane_cp

0x8a5d,	// (0x000485f8) cam6_zoom_pane_cp_ParamLimits

0x8a5d,	// (0x000485f8) cam6_zoom_pane_cp

0x8ada,	// (0x00048675) vid6_image_uncrop_cif_pane_ParamLimits

0x8ada,	// (0x00048675) vid6_image_uncrop_cif_pane

0x8aea,	// (0x00048685) vid6_image_uncrop_nhd_pane_ParamLimits

0x8aea,	// (0x00048685) vid6_image_uncrop_nhd_pane

0x8a1a,	// (0x000485b5) vid6_image_uncrop_vga_pane_ParamLimits

0x8a1a,	// (0x000485b5) vid6_image_uncrop_vga_pane

0x8af9,	// (0x00048694) vid6_image_uncrop_wvga_pane_ParamLimits

0x8af9,	// (0x00048694) vid6_image_uncrop_wvga_pane

0x8b08,	// (0x000486a3) vid6_indi_pane_ParamLimits

0x8b08,	// (0x000486a3) vid6_indi_pane

0xadee,	// (0x0004a989) bg_tb_trans_pane_cp09_ParamLimits

0xadee,	// (0x0004a989) bg_tb_trans_pane_cp09

0xbdd2,	// (0x0004b96d) cam6_battery_pane_cp_ParamLimits

0xbdd2,	// (0x0004b96d) cam6_battery_pane_cp

0xbdde,	// (0x0004b979) vid6_indi_pane_g1_ParamLimits

0xbdde,	// (0x0004b979) vid6_indi_pane_g1

0xbdf0,	// (0x0004b98b) vid6_indi_pane_g2_ParamLimits

0xbdf0,	// (0x0004b98b) vid6_indi_pane_g2

0xbe02,	// (0x0004b99d) vid6_indi_pane_g3_ParamLimits

0xbe02,	// (0x0004b99d) vid6_indi_pane_g3

0xbe19,	// (0x0004b9b4) vid6_indi_pane_g4_ParamLimits

0xbe19,	// (0x0004b9b4) vid6_indi_pane_g4

0xbe30,	// (0x0004b9cb) vid6_indi_pane_g5_ParamLimits

0xbe30,	// (0x0004b9cb) vid6_indi_pane_g5

0x0004,

0xfafb,	// (0x0004f696) vid6_indi_pane_g_ParamLimits

0xfafb,	// (0x0004f696) vid6_indi_pane_g

0xbe4a,	// (0x0004b9e5) vid6_indi_pane_t1_ParamLimits

0xbe4a,	// (0x0004b9e5) vid6_indi_pane_t1

0xbe60,	// (0x0004b9fb) vid6_indi_pane_t2_ParamLimits

0xbe60,	// (0x0004b9fb) vid6_indi_pane_t2

0xbe88,	// (0x0004ba23) vid6_indi_pane_t3_ParamLimits

0xbe88,	// (0x0004ba23) vid6_indi_pane_t3

0xbeb0,	// (0x0004ba4b) vid6_indi_pane_t4_ParamLimits

0xbeb0,	// (0x0004ba4b) vid6_indi_pane_t4

0x0003,

0xfb06,	// (0x0004f6a1) vid6_indi_pane_t_ParamLimits

0xfb06,	// (0x0004f6a1) vid6_indi_pane_t

0xbed4,	// (0x0004ba6f) wait_bar_pane_cp08

0x8b20,	// (0x000486bb) main_cset_text2_pane_t1_ParamLimits

0x8b20,	// (0x000486bb) main_cset_text2_pane_t1

0x8ab3,	// (0x0004864e) listscroll_gen_pane_cp06_t1_ParamLimits

0x8ab3,	// (0x0004864e) listscroll_gen_pane_cp06_t1

0xd470,	// (0x0004d00b) main_cam6_set_pane

0xdba6,	// (0x0004d741) bg_tb_trans_pane_cp06_ParamLimits

0xb498,	// (0x0004b033) cam4_indicators_pane_g1_ParamLimits

0xb4a9,	// (0x0004b044) cam4_indicators_pane_g2_ParamLimits

0xf87e,	// (0x0004f419) cam4_indicators_pane_g_ParamLimits

0xb4c1,	// (0x0004b05c) cam4_indicators_pane_t1_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_tb_trans_pane_cp07_ParamLimits

0xb4ef,	// (0x0004b08a) vid4_indicators_pane_g1_ParamLimits

0xb505,	// (0x0004b0a0) vid4_indicators_pane_g2_ParamLimits

0xb519,	// (0x0004b0b4) vid4_indicators_pane_g3_ParamLimits

0xb52c,	// (0x0004b0c7) vid4_indicators_pane_g4_ParamLimits

0xf890,	// (0x0004f42b) vid4_indicators_pane_g_ParamLimits

0xb54a,	// (0x0004b0e5) vid4_indicators_pane_t1_ParamLimits

0xd3bf,	// (0x0004cf5a) vid4_progress_pane_g1_ParamLimits

0xd3cf,	// (0x0004cf6a) vid4_progress_pane_g2_ParamLimits

0xd3df,	// (0x0004cf7a) vid4_progress_pane_g3_ParamLimits

0xd3f1,	// (0x0004cf8c) vid4_progress_pane_g4_ParamLimits

0xfa37,	// (0x0004f5d2) vid4_progress_pane_g_ParamLimits

0xd40f,	// (0x0004cfaa) vid4_progress_pane_t1_ParamLimits

0xd429,	// (0x0004cfc4) vid4_progress_pane_t2_ParamLimits

0xd43e,	// (0x0004cfd9) vid4_progress_pane_t3_ParamLimits

0xfa42,	// (0x0004f5dd) vid4_progress_pane_t_ParamLimits

0x867a,	// (0x00048215) wait_bar_pane_cp07_ParamLimits

0x8b41,	// (0x000486dc) main_cam6_set_pane_g2_ParamLimits

0x8b41,	// (0x000486dc) main_cam6_set_pane_g2

0x8b67,	// (0x00048702) main_cset6_listscroll_pane_ParamLimits

0x8b67,	// (0x00048702) main_cset6_listscroll_pane

0x8b85,	// (0x00048720) main_cset6_slider_pane_ParamLimits

0x8b85,	// (0x00048720) main_cset6_slider_pane

0x8b9b,	// (0x00048736) main_cset6_text2_pane_ParamLimits

0x8b9b,	// (0x00048736) main_cset6_text2_pane

0xbee3,	// (0x0004ba7e) main_cset6_text_pane

0xbeeb,	// (0x0004ba86) main_cset_list_pane_copy1_ParamLimits

0xbeeb,	// (0x0004ba86) main_cset_list_pane_copy1

0xbefb,	// (0x0004ba96) scroll_pane_cp028_copy1

0x8ba9,	// (0x00048744) cset_list_set_pane_copy1

0x8bbd,	// (0x00048758) aid_position_infowindow_above_copy1

0x8bc5,	// (0x00048760) aid_position_infowindow_below_copy1

0x1255,	// (0x00040df0) cset_list_set_pane_g1_copy1

0x125d,	// (0x00040df8) cset_list_set_pane_g3_copy1_ParamLimits

0x125d,	// (0x00040df8) cset_list_set_pane_g3_copy1

0x126c,	// (0x00040e07) cset_list_set_pane_t1_copy1_ParamLimits

0x126c,	// (0x00040e07) cset_list_set_pane_t1_copy1

0xdb4d,	// (0x0004d6e8) list_highlight_pane_cp021_copy1_ParamLimits

0xdb4d,	// (0x0004d6e8) list_highlight_pane_cp021_copy1

0xbf04,	// (0x0004ba9f) cset6_slider_pane_ParamLimits

0xbf04,	// (0x0004ba9f) cset6_slider_pane

0xbf30,	// (0x0004bacb) main_cset6_slider_pane_g1_ParamLimits

0xbf30,	// (0x0004bacb) main_cset6_slider_pane_g1

0x8bcd,	// (0x00048768) main_cset6_slider_pane_g2_ParamLimits

0x8bcd,	// (0x00048768) main_cset6_slider_pane_g2

0xbf58,	// (0x0004baf3) main_cset6_slider_pane_g3_ParamLimits

0xbf58,	// (0x0004baf3) main_cset6_slider_pane_g3

0x8bf5,	// (0x00048790) main_cset6_slider_pane_g4_ParamLimits

0x8bf5,	// (0x00048790) main_cset6_slider_pane_g4

0x8c01,	// (0x0004879c) main_cset6_slider_pane_g5_ParamLimits

0x8c01,	// (0x0004879c) main_cset6_slider_pane_g5

0xb6f2,	// (0x0004b28d) main_cset6_slider_pane_g7_ParamLimits

0xb6f2,	// (0x0004b28d) main_cset6_slider_pane_g7

0xb6fe,	// (0x0004b299) main_cset6_slider_pane_g8_ParamLimits

0xb6fe,	// (0x0004b299) main_cset6_slider_pane_g8

0x7df3,	// (0x0004798e) main_cset6_slider_pane_g9_ParamLimits

0x7df3,	// (0x0004798e) main_cset6_slider_pane_g9

0x7dff,	// (0x0004799a) main_cset6_slider_pane_g10_ParamLimits

0x7dff,	// (0x0004799a) main_cset6_slider_pane_g10

0x7e0b,	// (0x000479a6) main_cset6_slider_pane_g11_ParamLimits

0x7e0b,	// (0x000479a6) main_cset6_slider_pane_g11

0x7e17,	// (0x000479b2) main_cset6_slider_pane_g12_ParamLimits

0x7e17,	// (0x000479b2) main_cset6_slider_pane_g12

0x7e23,	// (0x000479be) main_cset6_slider_pane_g13_ParamLimits

0x7e23,	// (0x000479be) main_cset6_slider_pane_g13

0x7e2f,	// (0x000479ca) main_cset6_slider_pane_g14_ParamLimits

0x7e2f,	// (0x000479ca) main_cset6_slider_pane_g14

0x8c0f,	// (0x000487aa) main_cset6_slider_pane_g15_ParamLimits

0x8c0f,	// (0x000487aa) main_cset6_slider_pane_g15

0x7e53,	// (0x000479ee) main_cset6_slider_pane_g16_ParamLimits

0x7e53,	// (0x000479ee) main_cset6_slider_pane_g16

0x7e61,	// (0x000479fc) main_cset6_slider_pane_g17_ParamLimits

0x7e61,	// (0x000479fc) main_cset6_slider_pane_g17

0x0011,

0xfb0f,	// (0x0004f6aa) main_cset6_slider_pane_g_ParamLimits

0xfb0f,	// (0x0004f6aa) main_cset6_slider_pane_g

0xbf64,	// (0x0004baff) main_cset6_slider_pane_t1_ParamLimits

0xbf64,	// (0x0004baff) main_cset6_slider_pane_t1

0x8c3f,	// (0x000487da) main_cset6_slider_pane_t2_ParamLimits

0x8c3f,	// (0x000487da) main_cset6_slider_pane_t2

0x8c6a,	// (0x00048805) main_cset6_slider_pane_t3_ParamLimits

0x8c6a,	// (0x00048805) main_cset6_slider_pane_t3

0x8c95,	// (0x00048830) main_cset6_slider_pane_t4_ParamLimits

0x8c95,	// (0x00048830) main_cset6_slider_pane_t4

0x8cc2,	// (0x0004885d) main_cset6_slider_pane_t5_ParamLimits

0x8cc2,	// (0x0004885d) main_cset6_slider_pane_t5

0xbfa5,	// (0x0004bb40) main_cset6_slider_pane_t7_ParamLimits

0xbfa5,	// (0x0004bb40) main_cset6_slider_pane_t7

0x8cef,	// (0x0004888a) main_cset6_slider_pane_t8_ParamLimits

0x8cef,	// (0x0004888a) main_cset6_slider_pane_t8

0x8d13,	// (0x000488ae) main_cset6_slider_pane_t9_ParamLimits

0x8d13,	// (0x000488ae) main_cset6_slider_pane_t9

0x8d37,	// (0x000488d2) main_cset6_slider_pane_t10_ParamLimits

0x8d37,	// (0x000488d2) main_cset6_slider_pane_t10

0x8d5b,	// (0x000488f6) main_cset6_slider_pane_t11_ParamLimits

0x8d5b,	// (0x000488f6) main_cset6_slider_pane_t11

0xbfdb,	// (0x0004bb76) main_cset6_slider_pane_t14_ParamLimits

0xbfdb,	// (0x0004bb76) main_cset6_slider_pane_t14

0xc014,	// (0x0004bbaf) main_cset6_slider_pane_t15_ParamLimits

0xc014,	// (0x0004bbaf) main_cset6_slider_pane_t15

0x000b,

0xfb34,	// (0x0004f6cf) main_cset6_slider_pane_t_ParamLimits

0xfb34,	// (0x0004f6cf) main_cset6_slider_pane_t

0xc04d,	// (0x0004bbe8) cset_slider_pane_g1_copy1

0xc056,	// (0x0004bbf1) cset_slider_pane_g2_copy1

0xc05f,	// (0x0004bbfa) cset_slider_pane_g3_copy1

0xd470,	// (0x0004d00b) bg_popup_sub_pane_cp011_copy1

0xc071,	// (0x0004bc0c) main_cset_text_pane_g1_copy1

0xb84b,	// (0x0004b3e6) main_cset_text_pane_t1_copy1

0xb859,	// (0x0004b3f4) main_cset_text_pane_t2_copy1

0xb867,	// (0x0004b402) main_cset_text_pane_t3_copy1

0xb875,	// (0x0004b410) main_cset_text_pane_t4_copy1

0xb883,	// (0x0004b41e) main_cset_text_pane_t5_copy1

0xc079,	// (0x0004bc14) main_cset_text_pane_t6_copy1

0xc087,	// (0x0004bc22) main_cset_text_pane_t7_copy1

0x8b20,	// (0x000486bb) main_cset_text2_pane_t1_copy1

0xdb4d,	// (0x0004d6e8) main_ncimui_pane

0x5413,	// (0x00044fae) popup_query_ncimui_window_ParamLimits

0x5413,	// (0x00044fae) popup_query_ncimui_window

0xae12,	// (0x0004a9ad) field_cale_ev2_pane_g4_ParamLimits

0xae12,	// (0x0004a9ad) field_cale_ev2_pane_g4

0x7022,	// (0x00046bbd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7022,	// (0x00046bbd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf818,	// (0x0004f3b3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf818,	// (0x0004f3b3) cell_video_dialer_keypad_pane_g

0x703a,	// (0x00046bd5) cell_video_dialer_keypad_pane_t1

0xd470,	// (0x0004d00b) bg_popup_window_pane_cp012

0x4e81,	// (0x00044a1c) heading_pane_cp06

0xc0b3,	// (0x0004bc4e) ncim_query_content_pane

0xd470,	// (0x0004d00b) bg_popup_heading_pane_cp01

0xc0bb,	// (0x0004bc56) ncim_heading_pane_t1

0xc0c9,	// (0x0004bc64) ncim_indicator_popup_pane

0xc0db,	// (0x0004bc76) ncim_query_button_pane

0xc0f1,	// (0x0004bc8c) ncim_query_content_pane_t1

0xc103,	// (0x0004bc9e) ncim_query_content_pane_t2

0x0005,

0xfb78,	// (0x0004f713) ncim_query_content_pane_t

0xc13d,	// (0x0004bcd8) ncim_query_list_pane

0xc14f,	// (0x0004bcea) ncim_query_popup_pane

0xc0c9,	// (0x0004bc64) ncim_indicator_popup_pane_ParamLimits

0x8eaa,	// (0x00048a45) ncim_query_content_pane_g1_ParamLimits

0x8eaa,	// (0x00048a45) ncim_query_content_pane_g1

0xc0f1,	// (0x0004bc8c) ncim_query_content_pane_t1_ParamLimits

0xc103,	// (0x0004bc9e) ncim_query_content_pane_t2_ParamLimits

0x8eb6,	// (0x00048a51) ncim_query_content_pane_t3_ParamLimits

0x8eb6,	// (0x00048a51) ncim_query_content_pane_t3

0x8ede,	// (0x00048a79) ncim_query_content_pane_t4_ParamLimits

0x8ede,	// (0x00048a79) ncim_query_content_pane_t4

0x8f06,	// (0x00048aa1) ncim_query_content_pane_t5_ParamLimits

0x8f06,	// (0x00048aa1) ncim_query_content_pane_t5

0xc115,	// (0x0004bcb0) ncim_query_content_pane_t6_ParamLimits

0xc115,	// (0x0004bcb0) ncim_query_content_pane_t6

0xfb78,	// (0x0004f713) ncim_query_content_pane_t_ParamLimits

0xc13d,	// (0x0004bcd8) ncim_query_list_pane_ParamLimits

0xc14f,	// (0x0004bcea) ncim_query_popup_pane_ParamLimits

0xc163,	// (0x0004bcfe) wait_bar_pane_cp04

0xd470,	// (0x0004d00b) input_focus_pane_cp011

0xc16b,	// (0x0004bd06) ncim_query_popup_pane_t1

0xc179,	// (0x0004bd14) ncim_list_query_list_pane_ParamLimits

0xc179,	// (0x0004bd14) ncim_list_query_list_pane

0xd470,	// (0x0004d00b) bg_button_pane_cp027

0xc18c,	// (0x0004bd27) ncim_query_button_pane_g1

0xd470,	// (0x0004d00b) list_highlight_pane_cp012

0xc196,	// (0x0004bd31) ncim_list_query_list_pane_g1

0xc19e,	// (0x0004bd39) ncim_list_query_list_pane_t1

0xb4b5,	// (0x0004b050) cam4_indicators_pane_g3_ParamLimits

0xb4b5,	// (0x0004b050) cam4_indicators_pane_g3

0xb538,	// (0x0004b0d3) vid4_indicators_pane_g5_ParamLimits

0xb538,	// (0x0004b0d3) vid4_indicators_pane_g5

0xd400,	// (0x0004cf9b) vid4_progress_pane_g5_ParamLimits

0xd400,	// (0x0004cf9b) vid4_progress_pane_g5

0x8d95,	// (0x00048930) main_ncimui_pane_g1

0x8dfe,	// (0x00048999) ncimui_group_query_pane_ParamLimits

0x8dfe,	// (0x00048999) ncimui_group_query_pane

0x8e46,	// (0x000489e1) ncimui_list_pane_ParamLimits

0x8e46,	// (0x000489e1) ncimui_list_pane

0x8e6d,	// (0x00048a08) ncimui_text_pane_ParamLimits

0x8e6d,	// (0x00048a08) ncimui_text_pane

0x8f2e,	// (0x00048ac9) ncimui_text_pane_t1_ParamLimits

0x8f2e,	// (0x00048ac9) ncimui_text_pane_t1

0xc1ac,	// (0x0004bd47) ncimui_list_single_graphic_pane_ParamLimits

0xc1ac,	// (0x0004bd47) ncimui_list_single_graphic_pane

0x8f4c,	// (0x00048ae7) ncimui_query_pane_ParamLimits

0x8f4c,	// (0x00048ae7) ncimui_query_pane

0xd470,	// (0x0004d00b) list_highlight_pane_cp013

0xc1bc,	// (0x0004bd57) ncim_list_query_list_pane_t1_copy1

0xc196,	// (0x0004bd31) ncim_list_single_graphic_pane_g1

0x8f5f,	// (0x00048afa) ncim_query_button_pane_cp01

0x8f6b,	// (0x00048b06) ncim_query_entry_pane_ParamLimits

0x8f6b,	// (0x00048b06) ncim_query_entry_pane

0x8f7e,	// (0x00048b19) ncimui_query_pane_g1

0x8f8a,	// (0x00048b25) ncimui_query_pane_t1_ParamLimits

0x8f8a,	// (0x00048b25) ncimui_query_pane_t1

0xdb4d,	// (0x0004d6e8) input_focus_pane_cp012

0xc1ca,	// (0x0004bd65) ncim_query_entry_pane_t1

0xdc18,	// (0x0004d7b3) main_im_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) main_mobtv_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) main_mobtv_pane

0x8c27,	// (0x000487c2) main_cset6_slider_pane_g18_ParamLimits

0x8c27,	// (0x000487c2) main_cset6_slider_pane_g18

0x8c33,	// (0x000487ce) main_cset6_slider_pane_g19_ParamLimits

0x8c33,	// (0x000487ce) main_cset6_slider_pane_g19

0xdbc2,	// (0x0004d75d) bg_main_mobtv_pane_ParamLimits

0xdbc2,	// (0x0004d75d) bg_main_mobtv_pane

0x8fa3,	// (0x00048b3e) main_mobtv_info_pane

0x8fae,	// (0x00048b49) main_mobtv_loading_pane_ParamLimits

0x8fae,	// (0x00048b49) main_mobtv_loading_pane

0xc1dc,	// (0x0004bd77) main_mobtv_pg_channel_list_pane

0xc1e6,	// (0x0004bd81) main_mobtv_pg_hdr_pane

0x8fbb,	// (0x00048b56) main_mobtv_programe_curr_pane_ParamLimits

0x8fbb,	// (0x00048b56) main_mobtv_programe_curr_pane

0x8fc8,	// (0x00048b63) main_mobtv_programe_next_pane_ParamLimits

0x8fc8,	// (0x00048b63) main_mobtv_programe_next_pane

0xc1ef,	// (0x0004bd8a) popup_mobtv_noti_window

0xde00,	// (0x0004d99b) main_tv_pg_hdr_pane_g1

0xc1f9,	// (0x0004bd94) main_tv_pg_hdr_pane_g2

0xc201,	// (0x0004bd9c) main_tv_pg_hdr_pane_g3

0xc209,	// (0x0004bda4) main_tv_pg_hdr_pane_g4

0xc211,	// (0x0004bdac) main_tv_pg_hdr_pane_g5

0xc21b,	// (0x0004bdb6) main_tv_pg_hdr_pane_g6

0xc225,	// (0x0004bdc0) main_tv_pg_hdr_pane_g7

0xc22f,	// (0x0004bdca) main_tv_pg_hdr_pane_g8

0xc239,	// (0x0004bdd4) main_tv_pg_hdr_pane_g9

0xc243,	// (0x0004bdde) main_tv_pg_hdr_pane_g10

0xc24d,	// (0x0004bde8) main_tv_pg_hdr_pane_g11

0x000a,

0xfb85,	// (0x0004f720) main_tv_pg_hdr_pane_g

0xc257,	// (0x0004bdf2) main_tv_pg_hdr_pane_t1

0xc265,	// (0x0004be00) main_tv_pg_hdr_pane_t2

0xc273,	// (0x0004be0e) main_tv_pg_hdr_pane_t3

0xc283,	// (0x0004be1e) main_tv_pg_hdr_pane_t4

0xc293,	// (0x0004be2e) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9c,	// (0x0004f737) main_tv_pg_hdr_pane_t

0xc2a3,	// (0x0004be3e) single_mobtv_pg_channel_pane_ParamLimits

0xc2a3,	// (0x0004be3e) single_mobtv_pg_channel_pane

0xc2b5,	// (0x0004be50) single_mobtv_pg_channel_table_pane

0xc2be,	// (0x0004be59) single_mobtv_pg_channel_thumb_pane

0xc2c7,	// (0x0004be62) single_tv_pg_channel_pane_g1

0xc2d0,	// (0x0004be6b) single_tv_pg_channel_pane_g2

0x0001,

0xfba7,	// (0x0004f742) single_tv_pg_channel_pane_g

0xdba6,	// (0x0004d741) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xdba6,	// (0x0004d741) bg_single_mobtv_pg_channel_thumb_pane

0xc2d9,	// (0x0004be74) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc2d9,	// (0x0004be74) single_mobtv_pg_channel_thumb_pane_g1

0xc2e7,	// (0x0004be82) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc2e7,	// (0x0004be82) single_mobtv_pg_channel_thumb_pane_g2

0xc2f3,	// (0x0004be8e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc2f3,	// (0x0004be8e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbac,	// (0x0004f747) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbac,	// (0x0004f747) single_mobtv_pg_channel_thumb_pane_g

0xc2ff,	// (0x0004be9a) single_mobtv_pg_channel_thumb_pane_t1

0xc30d,	// (0x0004bea8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb3,	// (0x0004f74e) single_mobtv_pg_channel_thumb_pane_t

0xde00,	// (0x0004d99b) bg_single_mobtv_pg_channel_table_pane_g1

0xde00,	// (0x0004d99b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x0004ef73) bg_single_mobtv_pg_channel_table_pane_g

0xc31b,	// (0x0004beb6) single_mobtv_pg_channel_table_pane_t1

0xc329,	// (0x0004bec4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb8,	// (0x0004f753) single_mobtv_pg_channel_table_pane_t

0x8fdd,	// (0x00048b78) main_mobtv_info_pane_g1_ParamLimits

0x8fdd,	// (0x00048b78) main_mobtv_info_pane_g1

0x8ffb,	// (0x00048b96) main_mobtv_info_pane_t1_ParamLimits

0x8ffb,	// (0x00048b96) main_mobtv_info_pane_t1

0x9073,	// (0x00048c0e) main_mobtv_info_pane_t2_ParamLimits

0x9073,	// (0x00048c0e) main_mobtv_info_pane_t2

0x0002,

0xfbc2,	// (0x0004f75d) main_mobtv_info_pane_t_ParamLimits

0xfbc2,	// (0x0004f75d) main_mobtv_info_pane_t

0x9104,	// (0x00048c9f) wait_bar_pane_cp05

0x9116,	// (0x00048cb1) main_mobtv_loading_pane_g1_ParamLimits

0x9116,	// (0x00048cb1) main_mobtv_loading_pane_g1

0x9127,	// (0x00048cc2) main_mobtv_loading_pane_g2_ParamLimits

0x9127,	// (0x00048cc2) main_mobtv_loading_pane_g2

0x9133,	// (0x00048cce) main_mobtv_loading_pane_g3_ParamLimits

0x9133,	// (0x00048cce) main_mobtv_loading_pane_g3

0x0002,

0xfbc9,	// (0x0004f764) main_mobtv_loading_pane_g_ParamLimits

0xfbc9,	// (0x0004f764) main_mobtv_loading_pane_g

0xc337,	// (0x0004bed2) main_mobtv_loading_pane_t1_ParamLimits

0xc337,	// (0x0004bed2) main_mobtv_loading_pane_t1

0xc34f,	// (0x0004beea) main_mobtv_loading_pane_t2_ParamLimits

0xc34f,	// (0x0004beea) main_mobtv_loading_pane_t2

0x0001,

0xfbd0,	// (0x0004f76b) main_mobtv_loading_pane_t_ParamLimits

0xfbd0,	// (0x0004f76b) main_mobtv_loading_pane_t

0x9146,	// (0x00048ce1) wait_bar_pane_cp06_ParamLimits

0x9146,	// (0x00048ce1) wait_bar_pane_cp06

0xc373,	// (0x0004bf0e) main_mobtv_programe_curr_pane_t1

0xc381,	// (0x0004bf1c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd5,	// (0x0004f770) main_mobtv_programe_curr_pane_t

0xc38f,	// (0x0004bf2a) main_mobtv_programe_next_pane_t1

0xc39d,	// (0x0004bf38) main_mobtv_programe_next_pane_t2

0xc3ab,	// (0x0004bf46) main_mobtv_programe_next_pane_t3

0x0002,

0xfbda,	// (0x0004f775) main_mobtv_programe_next_pane_t

0xd470,	// (0x0004d00b) bg_popup_mobtv_noti_window_pane

0xc3b9,	// (0x0004bf54) popup_mobtv_noti_window_g1

0xc3c1,	// (0x0004bf5c) popup_mobtv_noti_window_t1

0xc3cf,	// (0x0004bf6a) popup_mobtv_noti_window_t2

0x0001,

0xfbe1,	// (0x0004f77c) popup_mobtv_noti_window_t

0xde00,	// (0x0004d99b) bg_popup_mobtv_noti_window_pane_g1

0xd470,	// (0x0004d00b) sc_clock_pane

0xd470,	// (0x0004d00b) main_fs_bigclock_pane

0x8887,	// (0x00048422) blid2_tripm_pane_t4_ParamLimits

0x8887,	// (0x00048422) blid2_tripm_pane_t4

0x9155,	// (0x00048cf0) sc_clock_pane_g1_ParamLimits

0x9155,	// (0x00048cf0) sc_clock_pane_g1

0x9167,	// (0x00048d02) sc_clock_pane_t1_ParamLimits

0x9167,	// (0x00048d02) sc_clock_pane_t1

0x918b,	// (0x00048d26) sc_clock_pane_t2_ParamLimits

0x918b,	// (0x00048d26) sc_clock_pane_t2

0x91a3,	// (0x00048d3e) sc_clock_pane_t3_ParamLimits

0x91a3,	// (0x00048d3e) sc_clock_pane_t3

0x0004,

0xfbe6,	// (0x0004f781) sc_clock_pane_t_ParamLimits

0xfbe6,	// (0x0004f781) sc_clock_pane_t

0x9d13,	// (0x000498ae) main_fs_bigclock_indicator_pane_ParamLimits

0x9d13,	// (0x000498ae) main_fs_bigclock_indicator_pane

0x9269,	// (0x00048e04) main_fs_bigclock_pane_g1_ParamLimits

0x9269,	// (0x00048e04) main_fs_bigclock_pane_g1

0x9d1f,	// (0x000498ba) main_fs_bigclock_pane_t1_ParamLimits

0x9d1f,	// (0x000498ba) main_fs_bigclock_pane_t1

0x9d31,	// (0x000498cc) main_fs_bigclock_pane_t2_ParamLimits

0x9d31,	// (0x000498cc) main_fs_bigclock_pane_t2

0x9d45,	// (0x000498e0) main_fs_bigclock_pane_t3_ParamLimits

0x9d45,	// (0x000498e0) main_fs_bigclock_pane_t3

0x0002,

0xfd77,	// (0x0004f912) main_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x0004f912) main_fs_bigclock_pane_t

0xce6d,	// (0x0004ca08) main_fs_bigclock_indicator_pane_g1

0xc0e3,	// (0x0004bc7e) ncim_query_content_pane_g2_ParamLimits

0xc0e3,	// (0x0004bc7e) ncim_query_content_pane_g2

0x0001,

0xfb73,	// (0x0004f70e) ncim_query_content_pane_g_ParamLimits

0xfb73,	// (0x0004f70e) ncim_query_content_pane_g

0x91ba,	// (0x00048d55) sc_clock_pane_t4_ParamLimits

0x91ba,	// (0x00048d55) sc_clock_pane_t4

0xdb4d,	// (0x0004d6e8) main_radioblah_pane

0xb3e2,	// (0x0004af7d) cell_call4_button_pane_t1_copy1_ParamLimits

0xb3e2,	// (0x0004af7d) cell_call4_button_pane_t1_copy1

0x8dad,	// (0x00048948) main_ncimui_pane_t1_ParamLimits

0x8dad,	// (0x00048948) main_ncimui_pane_t1

0x8dc7,	// (0x00048962) main_ncimui_pane_t2_ParamLimits

0x8dc7,	// (0x00048962) main_ncimui_pane_t2

0x0002,

0xfb6c,	// (0x0004f707) main_ncimui_pane_t_ParamLimits

0xfb6c,	// (0x0004f707) main_ncimui_pane_t

0xc3dd,	// (0x0004bf78) main_radioblah_anim_pane_ParamLimits

0xc3dd,	// (0x0004bf78) main_radioblah_anim_pane

0xc3ee,	// (0x0004bf89) main_radioblah_info_pane_ParamLimits

0xc3ee,	// (0x0004bf89) main_radioblah_info_pane

0xc402,	// (0x0004bf9d) main_radioblah_pane_t1_ParamLimits

0xc402,	// (0x0004bf9d) main_radioblah_pane_t1

0xc41e,	// (0x0004bfb9) main_radioblah_pane_t2_ParamLimits

0xc41e,	// (0x0004bfb9) main_radioblah_pane_t2

0x0003,

0xfc07,	// (0x0004f7a2) main_radioblah_pane_t_ParamLimits

0xfc07,	// (0x0004f7a2) main_radioblah_pane_t

0x9412,	// (0x00048fad) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9412,	// (0x00048fad) main_radioblah_rocker_ctrl_pane

0xc466,	// (0x0004c001) main_radioblah_info_pane_t1_ParamLimits

0xc466,	// (0x0004c001) main_radioblah_info_pane_t1

0x946a,	// (0x00049005) main_radioblah_info_pane_t2_ParamLimits

0x946a,	// (0x00049005) main_radioblah_info_pane_t2

0x0003,

0xfc10,	// (0x0004f7ab) main_radioblah_info_pane_t_ParamLimits

0xfc10,	// (0x0004f7ab) main_radioblah_info_pane_t

0xde00,	// (0x0004d99b) main_radioblah_rocker_ctrl_pane_g1

0x951a,	// (0x000490b5) main_radioblah_rocker_ctrl_pane_g2

0x9522,	// (0x000490bd) main_radioblah_rocker_ctrl_pane_g3

0x952a,	// (0x000490c5) main_radioblah_rocker_ctrl_pane_g4

0x9532,	// (0x000490cd) main_radioblah_rocker_ctrl_pane_g5

0x953a,	// (0x000490d5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc19,	// (0x0004f7b4) main_radioblah_rocker_ctrl_pane_g

0x8b20,	// (0x000486bb) main_cset_text2_pane_t1_copy1_ParamLimits

0xb472,	// (0x0004b00d) cam4_image_uncrop_qvga_pane

0xb4db,	// (0x0004b076) vid4_image_uncrop_qcif_pane

0xd453,	// (0x0004cfee) cam6_image_uncrop_qvga_pane_ParamLimits

0xd453,	// (0x0004cfee) cam6_image_uncrop_qvga_pane

0xbdc2,	// (0x0004b95d) vid6_image_uncrop_qcif_pane_ParamLimits

0xbdc2,	// (0x0004b95d) vid6_image_uncrop_qcif_pane

0xd470,	// (0x0004d00b) bg_popup_preview_window_pane_cp03

0xc095,	// (0x0004bc30) list_cset_text2_pane

0xc09d,	// (0x0004bc38) main_cset6_text2_pane_g1

0xc0a5,	// (0x0004bc40) main_cset6_text2_pane_t1

0xc4a0,	// (0x0004c03b) list_cset_text2_pane_t1_ParamLimits

0xc4a0,	// (0x0004c03b) list_cset_text2_pane_t1

0xdb4d,	// (0x0004d6e8) main_radioblah_pane_ParamLimits

0x90f0,	// (0x00048c8b) main_mobtv_info_pane_t3_ParamLimits

0x90f0,	// (0x00048c8b) main_mobtv_info_pane_t3

0x9400,	// (0x00048f9b) main_radioblah_pane_g1

0x943a,	// (0x00048fd5) main_radioblah_info_pane_g1

0x94bf,	// (0x0004905a) main_radioblah_info_pane_t3_ParamLimits

0x94bf,	// (0x0004905a) main_radioblah_info_pane_t3

0x35b4,	// (0x0004314f) highlight_cell_cale_month_pane_ParamLimits

0x35b4,	// (0x0004314f) highlight_cell_cale_month_pane

0xd470,	// (0x0004d00b) main_phob_fisheye_pane

0x67d2,	// (0x0004636d) scroll_pane_cp0031_ParamLimits

0x67d2,	// (0x0004636d) scroll_pane_cp0031

0xbed4,	// (0x0004ba6f) wait_bar_pane_cp08_ParamLimits

0x8ba9,	// (0x00048744) cset_list_set_pane_copy1_ParamLimits

0xc4ba,	// (0x0004c055) highlight_cell_cale_month_pane_g1

0x9542,	// (0x000490dd) highlight_cell_cale_month_pane_t1

0xbb1f,	// (0x0004b6ba) list_gen_pane_cp01

0xb6dd,	// (0x0004b278) scroll_pane_01

0x9550,	// (0x000490eb) list_single_double_fisheye_pane

0x129e,	// (0x00040e39) list_double_fisheye_pane_g1_ParamLimits

0x129e,	// (0x00040e39) list_double_fisheye_pane_g1

0x12aa,	// (0x00040e45) list_double_fisheye_pane_g2_ParamLimits

0x12aa,	// (0x00040e45) list_double_fisheye_pane_g2

0x9559,	// (0x000490f4) list_double_fisheye_pane_g3_ParamLimits

0x9559,	// (0x000490f4) list_double_fisheye_pane_g3

0x0004,

0xfc26,	// (0x0004f7c1) list_double_fisheye_pane_g_ParamLimits

0xfc26,	// (0x0004f7c1) list_double_fisheye_pane_g

0x12db,	// (0x00040e76) list_double_fisheye_pane_t1_ParamLimits

0x12db,	// (0x00040e76) list_double_fisheye_pane_t1

0x12f6,	// (0x00040e91) list_double_fisheye_pane_t2_ParamLimits

0x12f6,	// (0x00040e91) list_double_fisheye_pane_t2

0x0001,

0xfc31,	// (0x0004f7cc) list_double_fisheye_pane_t_ParamLimits

0xfc31,	// (0x0004f7cc) list_double_fisheye_pane_t

0xd470,	// (0x0004d00b) main_call5_pane

0x91e5,	// (0x00048d80) sc_swipe_pane_ParamLimits

0x91e5,	// (0x00048d80) sc_swipe_pane

0x9578,	// (0x00049113) call5_image_pane_ParamLimits

0x9578,	// (0x00049113) call5_image_pane

0x9595,	// (0x00049130) call5_swipe_1_pane_ParamLimits

0x9595,	// (0x00049130) call5_swipe_1_pane

0x95a8,	// (0x00049143) call5_swipe_2_pane_ParamLimits

0x95a8,	// (0x00049143) call5_swipe_2_pane

0x95d3,	// (0x0004916e) popup_call5_audio_first_window_ParamLimits

0x95d3,	// (0x0004916e) popup_call5_audio_first_window

0xdba6,	// (0x0004d741) call5_swipe_1_pane_g1_ParamLimits

0xdba6,	// (0x0004d741) call5_swipe_1_pane_g1

0xc4c2,	// (0x0004c05d) call5_swipe_1_pane_g2_ParamLimits

0xc4c2,	// (0x0004c05d) call5_swipe_1_pane_g2

0x0001,

0xfc36,	// (0x0004f7d1) call5_swipe_1_pane_g_ParamLimits

0xfc36,	// (0x0004f7d1) call5_swipe_1_pane_g

0xc4ce,	// (0x0004c069) call5_swipe_1_pane_t1_ParamLimits

0xc4ce,	// (0x0004c069) call5_swipe_1_pane_t1

0xdba6,	// (0x0004d741) call5_swipe_2_pane_g1_ParamLimits

0xdba6,	// (0x0004d741) call5_swipe_2_pane_g1

0xc4e3,	// (0x0004c07e) call5_swipe_2_pane_g2_ParamLimits

0xc4e3,	// (0x0004c07e) call5_swipe_2_pane_g2

0x0001,

0xfc3b,	// (0x0004f7d6) call5_swipe_2_pane_g_ParamLimits

0xfc3b,	// (0x0004f7d6) call5_swipe_2_pane_g

0xc4ef,	// (0x0004c08a) call5_swipe_2_pane_t1_ParamLimits

0xc4ef,	// (0x0004c08a) call5_swipe_2_pane_t1

0xc504,	// (0x0004c09f) sc_swipe_pane_g1_ParamLimits

0xc504,	// (0x0004c09f) sc_swipe_pane_g1

0xc511,	// (0x0004c0ac) sc_swipe_pane_g2_ParamLimits

0xc511,	// (0x0004c0ac) sc_swipe_pane_g2

0x0001,

0xfc40,	// (0x0004f7db) sc_swipe_pane_g_ParamLimits

0xfc40,	// (0x0004f7db) sc_swipe_pane_g

0xc51d,	// (0x0004c0b8) sc_swipe_pane_t1_ParamLimits

0xc51d,	// (0x0004c0b8) sc_swipe_pane_t1

0xd470,	// (0x0004d00b) main_cmail_launcher_pane

0x95e8,	// (0x00049183) aid_size_cell_cmail_l_ParamLimits

0x95e8,	// (0x00049183) aid_size_cell_cmail_l

0x95f6,	// (0x00049191) grid_cmail_l_pane_ParamLimits

0x95f6,	// (0x00049191) grid_cmail_l_pane

0x960f,	// (0x000491aa) cell_cmail_l_pane_ParamLimits

0x960f,	// (0x000491aa) cell_cmail_l_pane

0xc532,	// (0x0004c0cd) cell_cmail_l_pane_g1_ParamLimits

0xc532,	// (0x0004c0cd) cell_cmail_l_pane_g1

0xc53e,	// (0x0004c0d9) cell_cmail_l_pane_t1_ParamLimits

0xc53e,	// (0x0004c0d9) cell_cmail_l_pane_t1

0xc554,	// (0x0004c0ef) cell_cmail_l_pane_t2_ParamLimits

0xc554,	// (0x0004c0ef) cell_cmail_l_pane_t2

0x0001,

0xfc45,	// (0x0004f7e0) cell_cmail_l_pane_t_ParamLimits

0xfc45,	// (0x0004f7e0) cell_cmail_l_pane_t

0xdb4d,	// (0x0004d6e8) grid_highlight_pane_cp018_ParamLimits

0xdb4d,	// (0x0004d6e8) grid_highlight_pane_cp018

0x1831,	// (0x000413cc) main2_pane_ParamLimits

0x1831,	// (0x000413cc) main2_pane

0xdca7,	// (0x0004d842) popup_sp_fs_action_menu_bg_pane_g1

0xdcaf,	// (0x0004d84a) popup_sp_fs_action_menu_bg_pane_g2

0xdcb7,	// (0x0004d852) popup_sp_fs_action_menu_bg_pane_g3

0xdcbf,	// (0x0004d85a) popup_sp_fs_action_menu_bg_pane_g4

0xdcc7,	// (0x0004d862) popup_sp_fs_action_menu_bg_pane_g5

0xdccf,	// (0x0004d86a) popup_sp_fs_action_menu_bg_pane_g6

0xdcd7,	// (0x0004d872) popup_sp_fs_action_menu_bg_pane_g7

0xdcdf,	// (0x0004d87a) popup_sp_fs_action_menu_bg_pane_g8

0xdce7,	// (0x0004d882) popup_sp_fs_action_menu_bg_pane_g9

0xdcef,	// (0x0004d88a) popup_sp_fs_action_menu_bg_pane_g10

0xdcef,	// (0x0004d88a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0004ece0) popup_sp_fs_action_menu_bg_pane_g

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g3_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g3_g1

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g3_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g3_g2

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g3_g3_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0004ed8e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0004ed8e) list_medium_line_x2_t3_g3_g

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g3_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g3_t1

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g3_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g3_t2

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g3_t3_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0004ed95) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0004ed95) list_medium_line_x2_t3_g3_t

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g2_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g2_g1

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g2_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0004ed9c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0004ed9c) list_medium_line_x2_t3_g2_g

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g2_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g2_t1

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g2_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g2_t2

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g2_t3_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0004ed95) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0004ed95) list_medium_line_x2_t3_g2_t

0xdba6,	// (0x0004d741) list_medium_line_x2_t4_g4_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t4_g4_g1

0xdba6,	// (0x0004d741) list_medium_line_x2_t4_g4_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t4_g4_g2

0xdba6,	// (0x0004d741) list_medium_line_x2_t4_g4_g3_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t4_g4_g3

0xdba6,	// (0x0004d741) list_medium_line_x2_t4_g4_g4_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0004eda1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0004eda1) list_medium_line_x2_t4_g4_g

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g4_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g4_t1

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g4_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g4_t2

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g4_t3_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g4_t3

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g4_t4_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0004edaa) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0004edaa) list_medium_line_x2_t4_g4_t

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g4_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g4_g1

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g4_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g4_g2

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g4_g3_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g4_g3

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g4_g4_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0004eda1) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0004eda1) list_medium_line_x2_t2_g4_g

0xddec,	// (0x0004d987) list_medium_line_x2_t2_g4_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t2_g4_t1

0xddec,	// (0x0004d987) list_medium_line_x2_t2_g4_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x0004ed71) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x0004ed71) list_medium_line_x2_t2_g4_t

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g3_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g3_g1

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g3_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g3_g2

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g3_g3_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0004ed8e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0004ed8e) list_medium_line_x2_t2_g3_g

0xddec,	// (0x0004d987) list_medium_line_x2_t2_g3_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t2_g3_t1

0xddec,	// (0x0004d987) list_medium_line_x2_t2_g3_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x0004ed71) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x0004ed71) list_medium_line_x2_t2_g3_t

0x3724,	// (0x000432bf) main_sp_fs_list_pane_ParamLimits

0x3724,	// (0x000432bf) main_sp_fs_list_pane

0x3730,	// (0x000432cb) sp_fs_scroll_pane_ParamLimits

0x3730,	// (0x000432cb) sp_fs_scroll_pane

0xe32c,	// (0x0004dec7) list_medium_line_x2_t3_t1

0xe32c,	// (0x0004dec7) list_medium_line_x2_t3_t2

0xe32c,	// (0x0004dec7) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x0004ee57) list_medium_line_x2_t3_t

0xe32c,	// (0x0004dec7) list_medium_line_x3_t4_t1

0xe32c,	// (0x0004dec7) list_medium_line_x3_t4_t2

0xe32c,	// (0x0004dec7) list_medium_line_x3_t4_t3

0xe32c,	// (0x0004dec7) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x0004ee5e) list_medium_line_x3_t4_t

0xe32c,	// (0x0004dec7) list_medium_line_x4_t5_t1

0xe32c,	// (0x0004dec7) list_medium_line_x4_t5_t2

0xe32c,	// (0x0004dec7) list_medium_line_x4_t5_t3

0xe32c,	// (0x0004dec7) list_medium_line_x4_t5_t4

0xe32c,	// (0x0004dec7) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x0004ee67) list_medium_line_x4_t5_t

0xdba6,	// (0x0004d741) list_medium_line_t4_g4_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t4_g4_g1

0xdba6,	// (0x0004d741) list_medium_line_t4_g4_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t4_g4_g2

0xdba6,	// (0x0004d741) list_medium_line_t4_g4_g3_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t4_g4_g3

0xdba6,	// (0x0004d741) list_medium_line_t4_g4_g4_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0004eda1) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0004eda1) list_medium_line_t4_g4_g

0xddec,	// (0x0004d987) list_medium_line_t4_g4_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t4_g4_t1

0xddec,	// (0x0004d987) list_medium_line_t4_g4_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t4_g4_t2

0xddec,	// (0x0004d987) list_medium_line_t4_g4_t3_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t4_g4_t3

0xddec,	// (0x0004d987) list_medium_line_t4_g4_t4_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0004edaa) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0004edaa) list_medium_line_t4_g4_t

0x37de,	// (0x00043379) chi_dic_find_pane_g1

0x5199,	// (0x00044d34) main_tport_pane

0xe32c,	// (0x0004dec7) list_medium_line_plain_t1

0xdba6,	// (0x0004d741) list_medium_line_t2_g2_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t2_g2_g1

0xdba6,	// (0x0004d741) list_medium_line_t2_g2_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0004ed9c) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0004ed9c) list_medium_line_t2_g2_g

0xddec,	// (0x0004d987) list_medium_line_t2_g2_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t2_g2_t1

0xddec,	// (0x0004d987) list_medium_line_t2_g2_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x0004ed71) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x0004ed71) list_medium_line_t2_g2_t

0xbb28,	// (0x0004b6c3) aid_sp_fs_list_icon_a_sm

0xbb30,	// (0x0004b6cb) aid_sp_fs_list_icon_d

0xbb38,	// (0x0004b6d3) aid_sp_fs_text_primary

0xbb41,	// (0x0004b6dc) aid_sp_fs_text_secondary

0xd470,	// (0x0004d00b) list_medium_line

0xd470,	// (0x0004d00b) list_medium_line_g2

0xd470,	// (0x0004d00b) list_medium_line_g3

0xd470,	// (0x0004d00b) list_medium_line_plain

0xd470,	// (0x0004d00b) list_medium_line_plain_t2

0xd470,	// (0x0004d00b) list_medium_line_plain_t3

0xd470,	// (0x0004d00b) list_medium_line_right_icon

0xd470,	// (0x0004d00b) list_medium_line_right_iconx2

0xd470,	// (0x0004d00b) list_medium_line_t2

0xd470,	// (0x0004d00b) list_medium_line_t2_g2

0xd470,	// (0x0004d00b) list_medium_line_t2_g3

0xd470,	// (0x0004d00b) list_medium_line_t2_right_icon

0xd470,	// (0x0004d00b) list_medium_line_t2_right_iconx2

0xd470,	// (0x0004d00b) list_medium_line_t3

0xd470,	// (0x0004d00b) list_medium_line_t3_g2

0xd470,	// (0x0004d00b) list_medium_line_t3_g3

0xd470,	// (0x0004d00b) list_medium_line_t3_right_iconx2

0xd470,	// (0x0004d00b) list_medium_line_t4_g4

0xd470,	// (0x0004d00b) list_medium_line_x2

0xd470,	// (0x0004d00b) list_medium_line_x2_t2_g2

0xd470,	// (0x0004d00b) list_medium_line_x2_t2_g3

0xd470,	// (0x0004d00b) list_medium_line_x2_t2_g4

0xd470,	// (0x0004d00b) list_medium_line_x2_t3

0xd470,	// (0x0004d00b) list_medium_line_x2_t3_g2

0xd470,	// (0x0004d00b) list_medium_line_x2_t3_g3

0xd470,	// (0x0004d00b) list_medium_line_x2_t3_g4

0xd470,	// (0x0004d00b) list_medium_line_x2_t4_g2

0xd470,	// (0x0004d00b) list_medium_line_x2_t4_g4

0xd470,	// (0x0004d00b) list_medium_line_x3

0xd470,	// (0x0004d00b) list_medium_line_x3_t4

0xd470,	// (0x0004d00b) list_medium_line_x3_t4_g4

0xd470,	// (0x0004d00b) list_medium_line_x4_t4

0xd470,	// (0x0004d00b) list_medium_line_x4_t4_g7

0xd470,	// (0x0004d00b) list_medium_line_x4_t5

0x1241,	// (0x00040ddc) list_single_fs_dyc_pane_ParamLimits

0x1241,	// (0x00040ddc) list_single_fs_dyc_pane

0xdba6,	// (0x0004d741) list_medium_line_x4_t4_g7_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x4_t4_g7_g1

0xdba6,	// (0x0004d741) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x4_t4_g7_g2

0xdba6,	// (0x0004d741) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x4_t4_g7_g3

0xdba6,	// (0x0004d741) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x4_t4_g7_g4

0xdba6,	// (0x0004d741) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x4_t4_g7_g5

0xdba6,	// (0x0004d741) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x4_t4_g7_g6

0xdbb4,	// (0x0004d74f) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdbb4,	// (0x0004d74f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4d,	// (0x0004f6e8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4d,	// (0x0004f6e8) list_medium_line_x4_t4_g7_g

0xddec,	// (0x0004d987) list_medium_line_x4_t4_g7_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x4_t4_g7_t1

0xddec,	// (0x0004d987) list_medium_line_x4_t4_g7_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x4_t4_g7_t2

0xddec,	// (0x0004d987) list_medium_line_x4_t4_g7_t3_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x4_t4_g7_t3

0xddd8,	// (0x0004d973) list_medium_line_x4_t4_g7_t4_ParamLimits

0xddd8,	// (0x0004d973) list_medium_line_x4_t4_g7_t4

0xddd8,	// (0x0004d973) list_medium_line_x4_t4_g7_t5_ParamLimits

0xddd8,	// (0x0004d973) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5c,	// (0x0004f6f7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5c,	// (0x0004f6f7) list_medium_line_x4_t4_g7_t

0x1281,	// (0x00040e1c) list_single_dyc_row_pane_ParamLimits

0x1281,	// (0x00040e1c) list_single_dyc_row_pane

0x9565,	// (0x00049100) call5_gesture_pane_ParamLimits

0x9565,	// (0x00049100) call5_gesture_pane

0x95bb,	// (0x00049156) call5_windows_pane_ParamLimits

0x95bb,	// (0x00049156) call5_windows_pane

0x9621,	// (0x000491bc) call5_swipe_1_pane_cp_ParamLimits

0x9621,	// (0x000491bc) call5_swipe_1_pane_cp

0x962d,	// (0x000491c8) call5_swipe_2_pane_cp_ParamLimits

0x962d,	// (0x000491c8) call5_swipe_2_pane_cp

0xddb6,	// (0x0004d951) call5_image_pane_cp

0x9639,	// (0x000491d4) popup_call5_audio_first_window_cp_ParamLimits

0x9639,	// (0x000491d4) popup_call5_audio_first_window_cp

0xc504,	// (0x0004c09f) call5_swipe_1_pane_g1_cp_ParamLimits

0xc504,	// (0x0004c09f) call5_swipe_1_pane_g1_cp

0xc571,	// (0x0004c10c) call5_swipe_1_pane_g2_cp

0xc51d,	// (0x0004c0b8) call5_swipe_1_pane_t1_cp_ParamLimits

0xc51d,	// (0x0004c0b8) call5_swipe_1_pane_t1_cp

0xc504,	// (0x0004c09f) call5_swipe_2_pane_g1_cp_ParamLimits

0xc504,	// (0x0004c09f) call5_swipe_2_pane_g1_cp

0xc579,	// (0x0004c114) call5_swipe_2_pane_g2_cp

0xc581,	// (0x0004c11c) call5_swipe_2_pane_t1_cp_ParamLimits

0xc581,	// (0x0004c11c) call5_swipe_2_pane_t1_cp

0xdb4d,	// (0x0004d6e8) main_sp_fs_email_pane

0xb7c0,	// (0x0004b35b) main_sp_fs_listscroll_pane_te

0x9647,	// (0x000491e2) popup_sp_fs_action_menu_pane_ParamLimits

0x9647,	// (0x000491e2) popup_sp_fs_action_menu_pane

0xde00,	// (0x0004d99b) bg_sp_fs_ctrlbar_pane_g1

0xc596,	// (0x0004c131) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc59f,	// (0x0004c13a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc5a8,	// (0x0004c143) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xde00,	// (0x0004d99b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4a,	// (0x0004f7e5) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x576c,	// (0x00045307) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x576c,	// (0x00045307) bg_sp_fs_ctrlbar_ddmenu_pane

0xc5b1,	// (0x0004c14c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc5b1,	// (0x0004c14c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc5bd,	// (0x0004c158) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc5bd,	// (0x0004c158) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc53,	// (0x0004f7ee) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc53,	// (0x0004f7ee) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc5c9,	// (0x0004c164) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc5c9,	// (0x0004c164) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xde00,	// (0x0004d99b) list_medium_line_t2_right_icon_g1

0xe32c,	// (0x0004dec7) list_medium_line_t2_right_icon_t1

0xe32c,	// (0x0004dec7) list_medium_line_t2_right_icon_t2

0x0001,

0xfc58,	// (0x0004f7f3) list_medium_line_t2_right_icon_t

0xf077,	// (0x0004ec12) bg_sp_fs_ctrlbar_pane_ParamLimits

0xf077,	// (0x0004ec12) bg_sp_fs_ctrlbar_pane

0x96da,	// (0x00049275) main_sp_fs_ctrlbar_button_pane_cp01

0x96e4,	// (0x0004927f) main_sp_fs_ctrlbar_ddmenu_pane

0xc61d,	// (0x0004c1b8) main_sp_fs_ctrlbar_pane_g1

0xc629,	// (0x0004c1c4) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5d,	// (0x0004f7f8) main_sp_fs_ctrlbar_pane_g

0x9722,	// (0x000492bd) main_sp_fs_ctrlbar_pane_t1

0x9761,	// (0x000492fc) main_sp_fs_ctrlbar_pane

0x9785,	// (0x00049320) main_sp_fs_listscroll_pane_te_cp01

0x1318,	// (0x00040eb3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1318,	// (0x00040eb3) popup_sp_fs_action_menu_pane_cp01

0xdb4d,	// (0x0004d6e8) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_sp_fs_highlight_list_pane_cp01

0xc650,	// (0x0004c1eb) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc650,	// (0x0004c1eb) sp_fs_action_menu_list_gene_pane_g1

0xc65f,	// (0x0004c1fa) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc65f,	// (0x0004c1fa) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc6b,	// (0x0004f806) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc6b,	// (0x0004f806) sp_fs_action_menu_list_gene_pane_g

0xc66c,	// (0x0004c207) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc66c,	// (0x0004c207) sp_fs_action_menu_list_gene_pane_t1

0xc684,	// (0x0004c21f) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc684,	// (0x0004c21f) sp_fs_action_menu_list_gene_pane

0xc6a7,	// (0x0004c242) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc6a7,	// (0x0004c242) popup_sp_fs_action_menu_bg_pane

0xc6b5,	// (0x0004c250) sp_fs_action_menu_list_pane_ParamLimits

0xc6b5,	// (0x0004c250) sp_fs_action_menu_list_pane

0x133d,	// (0x00040ed8) sp_fs_scroll_pane_cp01_ParamLimits

0x133d,	// (0x00040ed8) sp_fs_scroll_pane_cp01

0xe32c,	// (0x0004dec7) list_medium_line_plain_t2_t1

0xe32c,	// (0x0004dec7) list_medium_line_plain_t2_t2

0x0001,

0xfc58,	// (0x0004f7f3) list_medium_line_plain_t2_t

0xe32c,	// (0x0004dec7) list_medium_line_plain_t3_t1

0xe32c,	// (0x0004dec7) list_medium_line_plain_t3_t2

0xe32c,	// (0x0004dec7) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x0004ee57) list_medium_line_plain_t3_t

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g2_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g2_g1

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g2_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0004ed9c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0004ed9c) list_medium_line_x2_t2_g2_g

0xddec,	// (0x0004d987) list_medium_line_x2_t2_g2_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t2_g2_t1

0xddec,	// (0x0004d987) list_medium_line_x2_t2_g2_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x0004ed71) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x0004ed71) list_medium_line_x2_t2_g2_t

0xdba6,	// (0x0004d741) list_medium_line_x2_t4_g2_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t4_g2_g1

0xdba6,	// (0x0004d741) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0004ed9c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0004ed9c) list_medium_line_x2_t4_g2_g

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g2_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g2_t1

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g2_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g2_t2

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g2_t3_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g2_t3

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g2_t4_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0004edaa) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0004edaa) list_medium_line_x2_t4_g2_t

0xde00,	// (0x0004d99b) list_medium_line_t3_right_iconx2_g1

0xde00,	// (0x0004d99b) list_medium_line_t3_right_iconx2_g2

0xde00,	// (0x0004d99b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x0004ef78) list_medium_line_t3_right_iconx2_g

0xe32c,	// (0x0004dec7) list_medium_line_t3_right_iconx2_t1

0xe32c,	// (0x0004dec7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc58,	// (0x0004f7f3) list_medium_line_t3_right_iconx2_t

0xdba6,	// (0x0004d741) list_medium_line_x3_t4_g4_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x3_t4_g4_g1

0xdba6,	// (0x0004d741) list_medium_line_x3_t4_g4_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x3_t4_g4_g2

0xdba6,	// (0x0004d741) list_medium_line_x3_t4_g4_g3_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x3_t4_g4_g3

0xdba6,	// (0x0004d741) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0004eda1) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0004eda1) list_medium_line_x3_t4_g4_g

0xddec,	// (0x0004d987) list_medium_line_x3_t4_g4_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x3_t4_g4_t1

0xddec,	// (0x0004d987) list_medium_line_x3_t4_g4_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x3_t4_g4_t2

0xddec,	// (0x0004d987) list_medium_line_x3_t4_g4_t3_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x3_t4_g4_t3

0xddec,	// (0x0004d987) list_medium_line_x3_t4_g4_t4_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0004edaa) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0004edaa) list_medium_line_x3_t4_g4_t

0x1363,	// (0x00040efe) list_single_dyc_row_text_pane_t1_ParamLimits

0x1363,	// (0x00040efe) list_single_dyc_row_text_pane_t1

0x13ac,	// (0x00040f47) list_single_dyc_row_text_pane_t2_ParamLimits

0x13ac,	// (0x00040f47) list_single_dyc_row_text_pane_t2

0xc6d9,	// (0x0004c274) list_single_dyc_row_text_pane_t3_ParamLimits

0xc6d9,	// (0x0004c274) list_single_dyc_row_text_pane_t3

0x0005,

0xfc70,	// (0x0004f80b) list_single_dyc_row_text_pane_t_ParamLimits

0xfc70,	// (0x0004f80b) list_single_dyc_row_text_pane_t

0xc6fd,	// (0x0004c298) list_single_dyc_row_pane_g1_ParamLimits

0xc6fd,	// (0x0004c298) list_single_dyc_row_pane_g1

0xc709,	// (0x0004c2a4) list_single_dyc_row_pane_g2_ParamLimits

0xc709,	// (0x0004c2a4) list_single_dyc_row_pane_g2

0xc715,	// (0x0004c2b0) list_single_dyc_row_pane_g3_ParamLimits

0xc715,	// (0x0004c2b0) list_single_dyc_row_pane_g3

0xc721,	// (0x0004c2bc) list_single_dyc_row_pane_g4_ParamLimits

0xc721,	// (0x0004c2bc) list_single_dyc_row_pane_g4

0x0003,

0xfc7d,	// (0x0004f818) list_single_dyc_row_pane_g_ParamLimits

0xfc7d,	// (0x0004f818) list_single_dyc_row_pane_g

0xc72d,	// (0x0004c2c8) list_single_dyc_row_text_pane_ParamLimits

0xc72d,	// (0x0004c2c8) list_single_dyc_row_text_pane

0xd470,	// (0x0004d00b) bg_sp_fs_scroll_pane

0xc74c,	// (0x0004c2e7) thumb_sp_fs_scroll_pane

0xdba6,	// (0x0004d741) list_medium_line_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_g1

0xddec,	// (0x0004d987) list_medium_line_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t1

0xdba6,	// (0x0004d741) list_medium_line_x2_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_g1

0xdba6,	// (0x0004d741) list_medium_line_x2_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0004ed9c) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0004ed9c) list_medium_line_x2_g

0xddec,	// (0x0004d987) list_medium_line_x2_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t1

0xdba6,	// (0x0004d741) list_medium_line_x3_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x3_g1

0xc755,	// (0x0004c2f0) list_medium_line_x3_g2_ParamLimits

0xc755,	// (0x0004c2f0) list_medium_line_x3_g2

0x0001,

0xfc86,	// (0x0004f821) list_medium_line_x3_g_ParamLimits

0xfc86,	// (0x0004f821) list_medium_line_x3_g

0xc763,	// (0x0004c2fe) list_medium_line_x3_t1_ParamLimits

0xc763,	// (0x0004c2fe) list_medium_line_x3_t1

0xc777,	// (0x0004c312) thumb_sp_fs_scroll_pane_g1

0xc780,	// (0x0004c31b) thumb_sp_fs_scroll_pane_g2

0xc789,	// (0x0004c324) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x0004f826) thumb_sp_fs_scroll_pane_g

0xc777,	// (0x0004c312) bg_sp_fs_scroll_pane_g1

0xc780,	// (0x0004c31b) bg_sp_fs_scroll_pane_g2

0xc789,	// (0x0004c324) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc8b,	// (0x0004f826) bg_sp_fs_scroll_pane_g

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g4_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g4_g1

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g4_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g4_g2

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g4_g3_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g4_g3

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g4_g4_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0004eda1) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0004eda1) list_medium_line_x2_t3_g4_g

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g4_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g4_t1

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g4_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g4_t2

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g4_t3_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0004ed95) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0004ed95) list_medium_line_x2_t3_g4_t

0xdba6,	// (0x0004d741) list_medium_line_g2_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_g2_g1

0xdba6,	// (0x0004d741) list_medium_line_g2_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0004ed9c) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0004ed9c) list_medium_line_g2_g

0xddec,	// (0x0004d987) list_medium_line_g2_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_g2_t1

0xdba6,	// (0x0004d741) list_medium_line_t3_g2_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t3_g2_g1

0xdba6,	// (0x0004d741) list_medium_line_t3_g2_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0004ed9c) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0004ed9c) list_medium_line_t3_g2_g

0xddec,	// (0x0004d987) list_medium_line_t3_g2_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t3_g2_t1

0xddec,	// (0x0004d987) list_medium_line_t3_g2_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t3_g2_t2

0xddec,	// (0x0004d987) list_medium_line_t3_g2_t3_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0004ed95) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0004ed95) list_medium_line_t3_g2_t

0xde00,	// (0x0004d99b) list_medium_line_right_icon_g1

0xe32c,	// (0x0004dec7) list_medium_line_right_icon_t1

0xdba6,	// (0x0004d741) list_medium_line_t2_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t2_g1

0xddec,	// (0x0004d987) list_medium_line_t2_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t2_t1

0xddec,	// (0x0004d987) list_medium_line_t2_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x0004ed71) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x0004ed71) list_medium_line_t2_t

0xdba6,	// (0x0004d741) list_medium_line_t3_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t3_g1

0xddec,	// (0x0004d987) list_medium_line_t3_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t3_t1

0xddec,	// (0x0004d987) list_medium_line_t3_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t3_t2

0xddec,	// (0x0004d987) list_medium_line_t3_t3_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0004ed95) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0004ed95) list_medium_line_t3_t

0xdba6,	// (0x0004d741) list_medium_line_g3_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_g3_g1

0xdba6,	// (0x0004d741) list_medium_line_g3_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_g3_g2

0xdba6,	// (0x0004d741) list_medium_line_g3_g3_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0004ed8e) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0004ed8e) list_medium_line_g3_g

0xddec,	// (0x0004d987) list_medium_line_g3_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_g3_t1

0xdba6,	// (0x0004d741) list_medium_line_t2_g3_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t2_g3_g1

0xdba6,	// (0x0004d741) list_medium_line_t2_g3_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t2_g3_g2

0xdba6,	// (0x0004d741) list_medium_line_t2_g3_g3_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0004ed8e) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0004ed8e) list_medium_line_t2_g3_g

0xddec,	// (0x0004d987) list_medium_line_t2_g3_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t2_g3_t1

0xddec,	// (0x0004d987) list_medium_line_t2_g3_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x0004ed71) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x0004ed71) list_medium_line_t2_g3_t

0xdba6,	// (0x0004d741) list_medium_line_t3_g3_g1_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t3_g3_g1

0xdba6,	// (0x0004d741) list_medium_line_t3_g3_g2_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t3_g3_g2

0xdba6,	// (0x0004d741) list_medium_line_t3_g3_g3_ParamLimits

0xdba6,	// (0x0004d741) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0004ed8e) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0004ed8e) list_medium_line_t3_g3_g

0xddec,	// (0x0004d987) list_medium_line_t3_g3_t1_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t3_g3_t1

0xddec,	// (0x0004d987) list_medium_line_t3_g3_t2_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t3_g3_t2

0xddec,	// (0x0004d987) list_medium_line_t3_g3_t3_ParamLimits

0xddec,	// (0x0004d987) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0004ed95) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0004ed95) list_medium_line_t3_g3_t

0xde00,	// (0x0004d99b) list_medium_line_right_iconx2_g1

0xde00,	// (0x0004d99b) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0004ef73) list_medium_line_right_iconx2_g

0xe32c,	// (0x0004dec7) list_medium_line_right_iconx2_t1

0xde00,	// (0x0004d99b) list_medium_line_t2_right_iconx2_g1

0xde00,	// (0x0004d99b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0004ef73) list_medium_line_t2_right_iconx2_g

0xe32c,	// (0x0004dec7) list_medium_line_t2_right_iconx2_t1

0xe32c,	// (0x0004dec7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc58,	// (0x0004f7f3) list_medium_line_t2_right_iconx2_t

0xe32c,	// (0x0004dec7) list_medium_line_x4_t4_t1

0xe32c,	// (0x0004dec7) list_medium_line_x4_t4_t2

0xe32c,	// (0x0004dec7) list_medium_line_x4_t4_t3

0xe32c,	// (0x0004dec7) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x0004ee5e) list_medium_line_x4_t4_t

0x97e6,	// (0x00049381) tport_appsw_pane_ParamLimits

0x97e6,	// (0x00049381) tport_appsw_pane

0x97fd,	// (0x00049398) tport_contact_pane_ParamLimits

0x97fd,	// (0x00049398) tport_contact_pane

0x9815,	// (0x000493b0) tport_listscroll_pane_ParamLimits

0x9815,	// (0x000493b0) tport_listscroll_pane

0x9829,	// (0x000493c4) cell_tport_appsw_pane_ParamLimits

0x9829,	// (0x000493c4) cell_tport_appsw_pane

0xf055,	// (0x0004ebf0) tport_appsw_pane_g1_ParamLimits

0xf055,	// (0x0004ebf0) tport_appsw_pane_g1

0xc792,	// (0x0004c32d) tport_contact_pane_g1

0xc79b,	// (0x0004c336) tport_contact_pane_t1

0xc7a9,	// (0x0004c344) tport_contact_pane_t2

0x0001,

0xfc92,	// (0x0004f82d) tport_contact_pane_t

0xc7b7,	// (0x0004c352) list_tport_pane

0xc7c0,	// (0x0004c35b) scroll_pane_cp_030

0x9873,	// (0x0004940e) cell_tport_appsw_pane_g1

0x9883,	// (0x0004941e) cell_tport_appsw_pane_t1

0x9891,	// (0x0004942c) grid_highlight_pane_cp019

0x9899,	// (0x00049434) list_tport_double_graphic_pane_ParamLimits

0x9899,	// (0x00049434) list_tport_double_graphic_pane

0xdb4d,	// (0x0004d6e8) list_highlight_pane_cp023_ParamLimits

0xdb4d,	// (0x0004d6e8) list_highlight_pane_cp023

0x98b0,	// (0x0004944b) list_tport_double_graphic_pane_g1_ParamLimits

0x98b0,	// (0x0004944b) list_tport_double_graphic_pane_g1

0x98bd,	// (0x00049458) list_tport_double_graphic_pane_t1_ParamLimits

0x98bd,	// (0x00049458) list_tport_double_graphic_pane_t1

0x98d2,	// (0x0004946d) list_tport_double_graphic_pane_t2_ParamLimits

0x98d2,	// (0x0004946d) list_tport_double_graphic_pane_t2

0x0001,

0xfc9e,	// (0x0004f839) list_tport_double_graphic_pane_t_ParamLimits

0xfc9e,	// (0x0004f839) list_tport_double_graphic_pane_t

0xd470,	// (0x0004d00b) main_cale_note_pane

0x796b,	// (0x00047506) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x796b,	// (0x00047506) cell_vitu2_function_top_wide_pane_cp01

0x9104,	// (0x00048c9f) wait_bar_pane_cp05_ParamLimits

0xdb4d,	// (0x0004d6e8) listscroll_cmail_pane

0xc7c9,	// (0x0004c364) list_cmail_pane

0x98e4,	// (0x0004947f) list_cmail_body_pane

0x98fb,	// (0x00049496) list_single_cmail_header_caption_pane

0xc7d9,	// (0x0004c374) list_single_cmail_header_detail_pane_ParamLimits

0xc7d9,	// (0x0004c374) list_single_cmail_header_detail_pane

0xc80b,	// (0x0004c3a6) list_single_cmail_header_caption_pane_t1

0x14e1,	// (0x0004107c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x14e1,	// (0x0004107c) list_single_cmail_header_detail_pane_g1

0xc822,	// (0x0004c3bd) list_single_cmail_header_detail_pane_g2_ParamLimits

0xc822,	// (0x0004c3bd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca3,	// (0x0004f83e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca3,	// (0x0004f83e) list_single_cmail_header_detail_pane_g

0xc83b,	// (0x0004c3d6) list_single_cmail_header_detail_pane_t1_ParamLimits

0xc83b,	// (0x0004c3d6) list_single_cmail_header_detail_pane_t1

0xc89b,	// (0x0004c436) list_single_cmail_header_editor_pane_bg_ParamLimits

0xc89b,	// (0x0004c436) list_single_cmail_header_editor_pane_bg

0xc2d0,	// (0x0004be6b) list_cmail_body_pane_g1

0xc8b2,	// (0x0004c44d) list_cmail_body_pane_t1

0xb5bf,	// (0x0004b15a) list_single_cmail_header_editor_pane_bg_g1

0xe015,	// (0x0004dbb0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb5cf,	// (0x0004b16a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb5c7,	// (0x0004b162) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb7fc,	// (0x0004b397) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb5ef,	// (0x0004b18a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb5df,	// (0x0004b17a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb5e7,	// (0x0004b182) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xdff5,	// (0x0004db90) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9918,	// (0x000494b3) calenote_gesture_pane_ParamLimits

0x9918,	// (0x000494b3) calenote_gesture_pane

0x9938,	// (0x000494d3) calenote_window_pane_ParamLimits

0x9938,	// (0x000494d3) calenote_window_pane

0xc8c0,	// (0x0004c45b) popup_note_window_cp01

0x9954,	// (0x000494ef) calenote_swipe_1_pane_ParamLimits

0x9954,	// (0x000494ef) calenote_swipe_1_pane

0x962d,	// (0x000491c8) calenote_swipe_2_pane_ParamLimits

0x962d,	// (0x000491c8) calenote_swipe_2_pane

0xc504,	// (0x0004c09f) calenote_swipe_1_pane_g1_ParamLimits

0xc504,	// (0x0004c09f) calenote_swipe_1_pane_g1

0xc511,	// (0x0004c0ac) calenote_swipe_1_pane_g2_ParamLimits

0xc511,	// (0x0004c0ac) calenote_swipe_1_pane_g2

0x0001,

0xfc40,	// (0x0004f7db) calenote_swipe_1_pane_g_ParamLimits

0xfc40,	// (0x0004f7db) calenote_swipe_1_pane_g

0xc8d2,	// (0x0004c46d) calenote_swipe_1_pane_t1_ParamLimits

0xc8d2,	// (0x0004c46d) calenote_swipe_1_pane_t1

0xc504,	// (0x0004c09f) calenote_swipe_2_pane_g1_ParamLimits

0xc504,	// (0x0004c09f) calenote_swipe_2_pane_g1

0xc8f1,	// (0x0004c48c) calenote_swipe_2_pane_g2_ParamLimits

0xc8f1,	// (0x0004c48c) calenote_swipe_2_pane_g2

0x0001,

0xfcaf,	// (0x0004f84a) calenote_swipe_2_pane_g_ParamLimits

0xfcaf,	// (0x0004f84a) calenote_swipe_2_pane_g

0xc8fd,	// (0x0004c498) calenote_swipe_2_pane_t1_ParamLimits

0xc8fd,	// (0x0004c498) calenote_swipe_2_pane_t1

0xd470,	// (0x0004d00b) main_mup_navstr_pane

0x655f,	// (0x000460fa) main_mup3_pane_t7_ParamLimits

0x655f,	// (0x000460fa) main_mup3_pane_t7

0xb17f,	// (0x0004ad1a) main_mp4_pane_g6_ParamLimits

0xb17f,	// (0x0004ad1a) main_mp4_pane_g6

0xb3d0,	// (0x0004af6b) main_image3_pane_t4_ParamLimits

0xb3d0,	// (0x0004af6b) main_image3_pane_t4

0x9969,	// (0x00049504) popup_navstr_preview_pane_ParamLimits

0x9969,	// (0x00049504) popup_navstr_preview_pane

0x9979,	// (0x00049514) scroll_navstr_pane_ParamLimits

0x9979,	// (0x00049514) scroll_navstr_pane

0xd470,	// (0x0004d00b) bg_popup_preview_window_pane_cp04

0xc924,	// (0x0004c4bf) popup_navstr_preview_pane_t1

0x998d,	// (0x00049528) scroll_navstr_pane_g1_ParamLimits

0x998d,	// (0x00049528) scroll_navstr_pane_g1

0x99a1,	// (0x0004953c) scroll_navstr_pane_t1_ParamLimits

0x99a1,	// (0x0004953c) scroll_navstr_pane_t1

0xc8c9,	// (0x0004c464) bg_button_pane_cp014

0xc8c9,	// (0x0004c464) bg_button_pane_cp030

0x12be,	// (0x00040e59) list_double_fisheye_pane_g4_ParamLimits

0x12be,	// (0x00040e59) list_double_fisheye_pane_g4

0x12ca,	// (0x00040e65) list_double_fisheye_pane_g5_ParamLimits

0x12ca,	// (0x00040e65) list_double_fisheye_pane_g5

0x3730,	// (0x000432cb) sp_fs_scroll_pane_cp03

0xc61d,	// (0x0004c1b8) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc629,	// (0x0004c1c4) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5d,	// (0x0004f7f8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9722,	// (0x000492bd) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc7d1,	// (0x0004c36c) sp_fs_scroll_pane_cp02

0xdd12,	// (0x0004d8ad) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xdd12,	// (0x0004d8ad) popup_sp_fs_calendar_preview_list_single_pane

0xd470,	// (0x0004d00b) main_cam6_pano_pane

0xdb4d,	// (0x0004d6e8) main_mup3_pane_ParamLimits

0xd470,	// (0x0004d00b) main_phacti_pane

0x8fd5,	// (0x00048b70) bg_button_pane_cp11

0x8fef,	// (0x00048b8a) main_mobtv_info_pane_g2_ParamLimits

0x8fef,	// (0x00048b8a) main_mobtv_info_pane_g2

0x0001,

0xfbbd,	// (0x0004f758) main_mobtv_info_pane_g_ParamLimits

0xfbbd,	// (0x0004f758) main_mobtv_info_pane_g

0x91cc,	// (0x00048d67) sc_clock_pane_t5_ParamLimits

0x91cc,	// (0x00048d67) sc_clock_pane_t5

0x9400,	// (0x00048f9b) main_radioblah_pane_g1_ParamLimits

0xc436,	// (0x0004bfd1) main_radioblah_pane_t3_ParamLimits

0xc436,	// (0x0004bfd1) main_radioblah_pane_t3

0xc44e,	// (0x0004bfe9) main_radioblah_pane_t4_ParamLimits

0xc44e,	// (0x0004bfe9) main_radioblah_pane_t4

0x9428,	// (0x00048fc3) main_radioblah_text_pane_ParamLimits

0x9428,	// (0x00048fc3) main_radioblah_text_pane

0x943a,	// (0x00048fd5) main_radioblah_info_pane_g1_ParamLimits

0x94d3,	// (0x0004906e) main_radioblah_info_pane_t4_ParamLimits

0x94d3,	// (0x0004906e) main_radioblah_info_pane_t4

0xdb4d,	// (0x0004d6e8) main_sp_fs_calendar_pane

0x99b8,	// (0x00049553) main_phacti_pane_g1

0x99c0,	// (0x0004955b) phacti_note_pane_ParamLimits

0x99c0,	// (0x0004955b) phacti_note_pane

0xc93b,	// (0x0004c4d6) phacti_term_pane_ParamLimits

0xc93b,	// (0x0004c4d6) phacti_term_pane

0xc950,	// (0x0004c4eb) phacti_note_pane_t1_ParamLimits

0xc950,	// (0x0004c4eb) phacti_note_pane_t1

0xc967,	// (0x0004c502) phacti_term_pane_g1

0xc96f,	// (0x0004c50a) phacti_term_pane_t1_ParamLimits

0xc96f,	// (0x0004c50a) phacti_term_pane_t1

0xc999,	// (0x0004c534) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc9a1,	// (0x0004c53c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb9,	// (0x0004f854) popup_sp_fs_calendar_preview_list_single_pane_g

0xc9a9,	// (0x0004c544) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc9a9,	// (0x0004c544) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc9bf,	// (0x0004c55a) aid_popup_sp_fs_bg_corner_pane

0xde00,	// (0x0004d99b) popup_sp_fs_calendar_preview_bg_pane_g1

0xd470,	// (0x0004d00b) popup_sp_fs_calendar_preview_bg_pane

0xc9c7,	// (0x0004c562) popup_sp_fs_calendar_preview_list_pane

0xf077,	// (0x0004ec12) bg_main_sp_fs_cale_pane_ParamLimits

0xf077,	// (0x0004ec12) bg_main_sp_fs_cale_pane

0xc9d8,	// (0x0004c573) listscroll_cale_mrui_pane_ParamLimits

0xc9d8,	// (0x0004c573) listscroll_cale_mrui_pane

0xc9ed,	// (0x0004c588) listscroll_sp_fs_schedule_track_pane

0xc9f6,	// (0x0004c591) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xc9f6,	// (0x0004c591) main_sp_fs_ctrlbar_pane_cp01

0xca09,	// (0x0004c5a4) main_sp_fs_ribbon_pane

0xca11,	// (0x0004c5ac) popup_sp_fs_cale_preview_window

0x9a35,	// (0x000495d0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9a35,	// (0x000495d0) list_single_sp_fs_schedule_track_pane

0xdb4d,	// (0x0004d6e8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_sp_fs_highlight_list_pane_cp03

0x9a49,	// (0x000495e4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9a49,	// (0x000495e4) list_single_sp_fs_schedule_track_pane_g1

0x9a55,	// (0x000495f0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9a55,	// (0x000495f0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbe,	// (0x0004f859) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbe,	// (0x0004f859) list_single_sp_fs_schedule_track_pane_g

0x9a61,	// (0x000495fc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9a61,	// (0x000495fc) list_single_sp_fs_schedule_track_pane_t1

0x9a83,	// (0x0004961e) sp_fs_schedule_track_pane_ParamLimits

0x9a83,	// (0x0004961e) sp_fs_schedule_track_pane

0xca23,	// (0x0004c5be) sp_fs_schedule_track_pane_g1

0xca2b,	// (0x0004c5c6) sp_fs_schedule_track_pane_g2

0xca33,	// (0x0004c5ce) sp_fs_schedule_track_pane_g3

0xca3b,	// (0x0004c5d6) sp_fs_schedule_track_pane_g4

0xca43,	// (0x0004c5de) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc3,	// (0x0004f85e) sp_fs_schedule_track_pane_g

0xb5bf,	// (0x0004b15a) bg_sp_fs_schedule_viewer_highlight_g1

0xe015,	// (0x0004dbb0) bg_sp_fs_schedule_viewer_highlight_g2

0xb5c7,	// (0x0004b162) bg_sp_fs_schedule_viewer_highlight_g3

0xb5cf,	// (0x0004b16a) bg_sp_fs_schedule_viewer_highlight_g4

0xb7fc,	// (0x0004b397) bg_sp_fs_schedule_viewer_highlight_g5

0xb5df,	// (0x0004b17a) bg_sp_fs_schedule_viewer_highlight_g6

0xb5e7,	// (0x0004b182) bg_sp_fs_schedule_viewer_highlight_g7

0xb5ef,	// (0x0004b18a) bg_sp_fs_schedule_viewer_highlight_g8

0xdff5,	// (0x0004db90) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcce,	// (0x0004f869) bg_sp_fs_schedule_viewer_highlight_g

0xd470,	// (0x0004d00b) bg_main_sp_fs_ribbon_pane

0x9a98,	// (0x00049633) main_sp_fs_ribbon_pane_g1

0xca4b,	// (0x0004c5e6) main_sp_fs_ribbon_pane_t1

0x9aa1,	// (0x0004963c) main_sp_fs_ribbon_pane_t2

0xca5a,	// (0x0004c5f5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfce1,	// (0x0004f87c) main_sp_fs_ribbon_pane_t

0xca69,	// (0x0004c604) main_sp_fs_ribbon_scheduler_pane

0xca71,	// (0x0004c60c) bg_main_sp_fs_ribbon_pane_g1

0xca7a,	// (0x0004c615) bg_main_sp_fs_ribbon_pane_g2

0xca83,	// (0x0004c61e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce8,	// (0x0004f883) bg_main_sp_fs_ribbon_pane_g

0xca8b,	// (0x0004c626) main_sp_fs_ribbon_scheduler_pane_g1

0xca94,	// (0x0004c62f) main_sp_fs_ribbon_scheduler_pane_g2

0xca9d,	// (0x0004c638) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcef,	// (0x0004f88a) main_sp_fs_ribbon_scheduler_pane_g

0xcaa6,	// (0x0004c641) list_cale_mrui_pane

0x9ab0,	// (0x0004964b) sp_fs_scroll_pane_cp07_ParamLimits

0x9ab0,	// (0x0004964b) sp_fs_scroll_pane_cp07

0x9acc,	// (0x00049667) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9acc,	// (0x00049667) bg_sp_fs_schedule_viewer_highlight

0xcab3,	// (0x0004c64e) list_single_sp_fs_schedule_track_pane_cp01

0xcabb,	// (0x0004c656) list_sp_fs_schedule_track_pane

0xcac3,	// (0x0004c65e) sp_fs_scroll_pane_cp06_ParamLimits

0xcac3,	// (0x0004c65e) sp_fs_scroll_pane_cp06

0xde00,	// (0x0004d99b) bgmain_sp_fs_calendar_pane_g1

0x14f9,	// (0x00041094) list_single_cale_mrui_pane_ParamLimits

0x14f9,	// (0x00041094) list_single_cale_mrui_pane

0xcad5,	// (0x0004c670) list_single_cale_mrui_row_pane_ParamLimits

0xcad5,	// (0x0004c670) list_single_cale_mrui_row_pane

0xcae2,	// (0x0004c67d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcae2,	// (0x0004c67d) list_single_cale_mrui_row_pane_g1

0xcb27,	// (0x0004c6c2) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcb27,	// (0x0004c6c2) list_single_cale_mrui_row_pane_t1

0x151c,	// (0x000410b7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x151c,	// (0x000410b7) list_single_cale_mrui_row_pane_t2

0xcb39,	// (0x0004c6d4) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcb39,	// (0x0004c6d4) list_single_cale_mrui_row_pane_t3

0xcb68,	// (0x0004c703) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcb68,	// (0x0004c703) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfd,	// (0x0004f898) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfd,	// (0x0004f898) list_single_cale_mrui_row_pane_t

0x1582,	// (0x0004111d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1582,	// (0x0004111d) list_single_cmail_header_editor_pane_bg_cp01

0x15a6,	// (0x00041141) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x15a6,	// (0x00041141) list_single_cmail_header_editor_pane_bg_cp02

0x9ade,	// (0x00049679) main_radioblah_text_pane_t1_ParamLimits

0x9ade,	// (0x00049679) main_radioblah_text_pane_t1

0xcb97,	// (0x0004c732) cam6_indi_pane_cp01

0xcb9f,	// (0x0004c73a) cam6_mode_pane_cp01

0xcba7,	// (0x0004c742) cam6_pano_pane

0xcbb0,	// (0x0004c74b) cam6_zoom_pane_cp01

0xcbba,	// (0x0004c755) cam6_pano_image_pane

0xcbc3,	// (0x0004c75e) cam6_pano_pane_g1

0xc2d0,	// (0x0004be6b) cam6_pano_pane_g2

0xcbcc,	// (0x0004c767) cam6_pano_pane_g3

0xcbd5,	// (0x0004c770) cam6_pano_pane_g4

0xae72,	// (0x0004aa0d) cam6_pano_pane_g5

0xcbde,	// (0x0004c779) cam6_pano_pane_g6

0xcbe6,	// (0x0004c781) cam6_pano_pane_g7

0xcbee,	// (0x0004c789) cam6_pano_pane_g8

0xcbf7,	// (0x0004c792) cam6_pano_pane_g9

0x0008,

0xfd06,	// (0x0004f8a1) cam6_pano_pane_g

0xd470,	// (0x0004d00b) main_browser_tag_pane

0xc91c,	// (0x0004c4b7) grid_navstr_albumart_pane

0xcc02,	// (0x0004c79d) cell_navstr_albumart_pane_ParamLimits

0xcc02,	// (0x0004c79d) cell_navstr_albumart_pane

0xcc1e,	// (0x0004c7b9) cell_navstr_albumart_pane_g1

0x4d2e,	// (0x000448c9) cell_navstr_albumart_pane_g2

0x4d3e,	// (0x000448d9) cell_navstr_albumart_pane_g3

0x4d36,	// (0x000448d1) cell_navstr_albumart_pane_g4

0x0003,

0xfd19,	// (0x0004f8b4) cell_navstr_albumart_pane_g

0x9af9,	// (0x00049694) bt_list_pane_ParamLimits

0x9af9,	// (0x00049694) bt_list_pane

0x9b0f,	// (0x000496aa) bt_list_pane_t1

0x9b1e,	// (0x000496b9) bt_list_pane_t2

0x0001,

0xfd22,	// (0x0004f8bd) bt_list_pane_t

0xd470,	// (0x0004d00b) main_cale_prevew_pane

0x9b2d,	// (0x000496c8) popup_cale_preview_window_ParamLimits

0x9b2d,	// (0x000496c8) popup_cale_preview_window

0xdb4d,	// (0x0004d6e8) bg_popup_preview_window_pane_cp05_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_popup_preview_window_pane_cp05

0xcc26,	// (0x0004c7c1) list_cale_preview_pane_ParamLimits

0xcc26,	// (0x0004c7c1) list_cale_preview_pane

0x9b4a,	// (0x000496e5) list_double_cale_preview_pane_ParamLimits

0x9b4a,	// (0x000496e5) list_double_cale_preview_pane

0x9b5e,	// (0x000496f9) list_single_cale_preview_pane_ParamLimits

0x9b5e,	// (0x000496f9) list_single_cale_preview_pane

0x9b76,	// (0x00049711) list_single_cale_preview_pane_g1

0x9b7e,	// (0x00049719) list_single_cale_preview_pane_t1_ParamLimits

0x9b7e,	// (0x00049719) list_single_cale_preview_pane_t1

0x9b93,	// (0x0004972e) list_double_cale_preview_pane_g1

0x9b9b,	// (0x00049736) list_double_cale_preview_pane_t1_ParamLimits

0x9b9b,	// (0x00049736) list_double_cale_preview_pane_t1

0x9bb0,	// (0x0004974b) list_double_cale_preview_pane_t2_ParamLimits

0x9bb0,	// (0x0004974b) list_double_cale_preview_pane_t2

0x0001,

0xfd27,	// (0x0004f8c2) list_double_cale_preview_pane_t_ParamLimits

0xfd27,	// (0x0004f8c2) list_double_cale_preview_pane_t

0xd470,	// (0x0004d00b) main_ezdial_pane

0xdb4d,	// (0x0004d6e8) main_sp_fs_email_pane_ParamLimits

0x968d,	// (0x00049228) cmail_ddmenu_btn01_pane_ParamLimits

0x968d,	// (0x00049228) cmail_ddmenu_btn01_pane

0x96a0,	// (0x0004923b) cmail_ddmenu_btn02_pane_ParamLimits

0x96a0,	// (0x0004923b) cmail_ddmenu_btn02_pane

0x96c3,	// (0x0004925e) cmail_ddmenu_btn03_pane_ParamLimits

0x96c3,	// (0x0004925e) cmail_ddmenu_btn03_pane

0x9761,	// (0x000492fc) main_sp_fs_ctrlbar_pane_ParamLimits

0x9785,	// (0x00049320) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x98e4,	// (0x0004947f) list_cmail_body_pane_ParamLimits

0xc819,	// (0x0004c3b4) bg_button_pane_cp12

0xc82e,	// (0x0004c3c9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xc82e,	// (0x0004c3c9) list_single_cmail_header_detail_pane_g3

0xc877,	// (0x0004c412) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc877,	// (0x0004c412) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcaa,	// (0x0004f845) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcaa,	// (0x0004f845) list_single_cmail_header_detail_pane_t

0xc984,	// (0x0004c51f) phacti_term_pane_t2_ParamLimits

0xc984,	// (0x0004c51f) phacti_term_pane_t2

0x0001,

0xfcb4,	// (0x0004f84f) phacti_term_pane_t_ParamLimits

0xfcb4,	// (0x0004f84f) phacti_term_pane_t

0xcc32,	// (0x0004c7cd) aid_size_list_single_double

0x9bc8,	// (0x00049763) popup_ezdial_listscroll_window

0x9be4,	// (0x0004977f) popup_number_entry_window_cp01

0xddb6,	// (0x0004d951) bg_popup_call_pane_cp09

0xcc3e,	// (0x0004c7d9) ezdial_list_pane

0xcc46,	// (0x0004c7e1) scroll_pane_cp23

0xf077,	// (0x0004ec12) bg_button_pane_cp028_ParamLimits

0xf077,	// (0x0004ec12) bg_button_pane_cp028

0x9bf2,	// (0x0004978d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9bf2,	// (0x0004978d) cmail_ddmenu_btn01_pane_g1

0x9c01,	// (0x0004979c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9c01,	// (0x0004979c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2c,	// (0x0004f8c7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2c,	// (0x0004f8c7) cmail_ddmenu_btn01_pane_g

0xcc4e,	// (0x0004c7e9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xcc4e,	// (0x0004c7e9) cmail_ddmenu_btn01_pane_t1

0xf077,	// (0x0004ec12) bg_button_pane_cp029_ParamLimits

0xf077,	// (0x0004ec12) bg_button_pane_cp029

0x9c17,	// (0x000497b2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9c17,	// (0x000497b2) cmail_ddmenu_btn02_pane_g1

0x9c32,	// (0x000497cd) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9c32,	// (0x000497cd) cmail_ddmenu_btn02_pane_t1

0xdb4d,	// (0x0004d6e8) bg_button_pane_cp031_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_button_pane_cp031

0x9c17,	// (0x000497b2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9c17,	// (0x000497b2) cmail_ddmenu_btn03_pane_g1

0x9c32,	// (0x000497cd) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9c32,	// (0x000497cd) cmail_ddmenu_btn03_pane_t1

0x7173,	// (0x00046d0e) cell_dialer2_keypad_pane_t1_ParamLimits

0x718d,	// (0x00046d28) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x718d,	// (0x00046d28) cell_dialer2_keypad_pane_t1_copy1

0x8df6,	// (0x00048991) ncimui_group_button_pane

0xdb4d,	// (0x0004d6e8) main_sp_fs_calendar_pane_ParamLimits

0x98fb,	// (0x00049496) list_single_cmail_header_caption_pane_ParamLimits

0xc9cf,	// (0x0004c56a) aid_recal_txt_sm_pane

0xd470,	// (0x0004d00b) mian_recal_day_pane

0xca11,	// (0x0004c5ac) popup_sp_fs_cale_preview_window_ParamLimits

0xcc64,	// (0x0004c7ff) list_recal_day_pane

0xcca7,	// (0x0004c842) list_single_recal_day_pane_ParamLimits

0xcca7,	// (0x0004c842) list_single_recal_day_pane

0xccb9,	// (0x0004c854) list_single_recal_day_pane_g1_ParamLimits

0xccb9,	// (0x0004c854) list_single_recal_day_pane_g1

0xccc5,	// (0x0004c860) list_single_recal_day_pane_g2_ParamLimits

0xccc5,	// (0x0004c860) list_single_recal_day_pane_g2

0xccd1,	// (0x0004c86c) list_single_recal_day_pane_g3_ParamLimits

0xccd1,	// (0x0004c86c) list_single_recal_day_pane_g3

0x15c4,	// (0x0004115f) list_single_recal_day_pane_g4_ParamLimits

0x15c4,	// (0x0004115f) list_single_recal_day_pane_g4

0xccdd,	// (0x0004c878) list_single_recal_day_pane_g5_ParamLimits

0xccdd,	// (0x0004c878) list_single_recal_day_pane_g5

0xcce9,	// (0x0004c884) list_single_recal_day_pane_g6_ParamLimits

0xcce9,	// (0x0004c884) list_single_recal_day_pane_g6

0x0004,

0xfd3b,	// (0x0004f8d6) list_single_recal_day_pane_g_ParamLimits

0xfd3b,	// (0x0004f8d6) list_single_recal_day_pane_g

0xccfd,	// (0x0004c898) list_single_recal_day_pane_t1

0xcd0f,	// (0x0004c8aa) list_single_recal_day_pane_t2

0x0001,

0xfd46,	// (0x0004f8e1) list_single_recal_day_pane_t

0x9c59,	// (0x000497f4) ncimui_query_button_pane_ParamLimits

0x9c59,	// (0x000497f4) ncimui_query_button_pane

0x9c69,	// (0x00049804) ncimui_query_button_pane_t1_ParamLimits

0x9c69,	// (0x00049804) ncimui_query_button_pane_t1

0xcd21,	// (0x0004c8bc) ncimui_query_button_pane_t2_ParamLimits

0xcd21,	// (0x0004c8bc) ncimui_query_button_pane_t2

0x0001,

0xfd4b,	// (0x0004f8e6) ncimui_query_button_pane_t_ParamLimits

0xfd4b,	// (0x0004f8e6) ncimui_query_button_pane_t

0x9c7c,	// (0x00049817) query_button_pane_ParamLimits

0x9c7c,	// (0x00049817) query_button_pane

0xd470,	// (0x0004d00b) bg_button_pane_cp0028

0xcd34,	// (0x0004c8cf) query_button_pane_t1

0x5199,	// (0x00044d34) main_tport_pane_ParamLimits

0x97a5,	// (0x00049340) bg_popup_window_pane_cp01_ParamLimits

0x97a5,	// (0x00049340) bg_popup_window_pane_cp01

0x97be,	// (0x00049359) heading_pane_cp08_ParamLimits

0x97be,	// (0x00049359) heading_pane_cp08

0x97d1,	// (0x0004936c) heading_pane_cp07_ParamLimits

0x97d1,	// (0x0004936c) heading_pane_cp07

0x9873,	// (0x0004940e) cell_tport_appsw_pane_g2

0x0002,

0xfc97,	// (0x0004f832) cell_tport_appsw_pane_g

0x0e3e,	// (0x000409d9) input_candi_list_open_g1

0xe1d8,	// (0x0004dd73) list_cale_time_pane_g6_ParamLimits

0xe1d8,	// (0x0004dd73) list_cale_time_pane_g6

0x5ee2,	// (0x00045a7d) aid_size_touch_calib_1_ParamLimits

0x5ee2,	// (0x00045a7d) aid_size_touch_calib_1

0x5ef4,	// (0x00045a8f) aid_size_touch_calib_2_ParamLimits

0x5ef4,	// (0x00045a8f) aid_size_touch_calib_2

0x5f0c,	// (0x00045aa7) aid_size_touch_calib_3_ParamLimits

0x5f0c,	// (0x00045aa7) aid_size_touch_calib_3

0x5f2a,	// (0x00045ac5) aid_size_touch_calib_4_ParamLimits

0x5f2a,	// (0x00045ac5) aid_size_touch_calib_4

0x5f42,	// (0x00045add) main_touch_calib_button_group_pane_ParamLimits

0x5f42,	// (0x00045add) main_touch_calib_button_group_pane

0x5f5a,	// (0x00045af5) main_touch_calib_pane_g1_ParamLimits

0x5f6c,	// (0x00045b07) main_touch_calib_pane_g2_ParamLimits

0x5f7e,	// (0x00045b19) main_touch_calib_pane_g3_ParamLimits

0x5f90,	// (0x00045b2b) main_touch_calib_pane_g4_ParamLimits

0xf6d9,	// (0x0004f274) main_touch_calib_pane_g_ParamLimits

0x5fa2,	// (0x00045b3d) main_touch_calib_pane_t1_ParamLimits

0x5fbc,	// (0x00045b57) main_touch_calib_pane_t2_ParamLimits

0x5fd6,	// (0x00045b71) main_touch_calib_pane_t3_ParamLimits

0x5fea,	// (0x00045b85) main_touch_calib_pane_t4_ParamLimits

0x6000,	// (0x00045b9b) main_touch_calib_pane_t5_ParamLimits

0xf6e2,	// (0x0004f27d) main_touch_calib_pane_t_ParamLimits

0x680e,	// (0x000463a9) list_single_fp_cale_pane_g3_ParamLimits

0x680e,	// (0x000463a9) list_single_fp_cale_pane_g3

0xdb4d,	// (0x0004d6e8) bg_button_pane_cp012_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_vkb2_func_pane_cp03_ParamLimits

0x8169,	// (0x00047d04) cell_vitu2_function_top_pane_g1_ParamLimits

0xdb4d,	// (0x0004d6e8) bg_vkb2_func_pane_cp04_ParamLimits

0x8d81,	// (0x0004891c) main_ncimui_button_group_pane_ParamLimits

0x8d81,	// (0x0004891c) main_ncimui_button_group_pane

0x8de1,	// (0x0004897c) main_ncimui_pane_t3_ParamLimits

0x8de1,	// (0x0004897c) main_ncimui_pane_t3

0xc932,	// (0x0004c4cd) phacti_button_group_pane

0xcc32,	// (0x0004c7cd) aid_size_list_single_double_ParamLimits

0x9bc8,	// (0x00049763) popup_ezdial_listscroll_window_ParamLimits

0x9be4,	// (0x0004977f) popup_number_entry_window_cp01_ParamLimits

0x9c8f,	// (0x0004982a) phacti_button_pane_ParamLimits

0x9c8f,	// (0x0004982a) phacti_button_pane

0xd470,	// (0x0004d00b) bg_button_pane_cp14

0xcd42,	// (0x0004c8dd) phacti_button_pane_t1

0x9ca0,	// (0x0004983b) main_touch_calib_button_pane_ParamLimits

0x9ca0,	// (0x0004983b) main_touch_calib_button_pane

0xdc18,	// (0x0004d7b3) bg_button_pane_cp18_ParamLimits

0xdc18,	// (0x0004d7b3) bg_button_pane_cp18

0xcd50,	// (0x0004c8eb) main_touch_calib_button_pane_t1_ParamLimits

0xcd50,	// (0x0004c8eb) main_touch_calib_button_pane_t1

0xcd66,	// (0x0004c901) main_touch_calib_button_pane_t2_ParamLimits

0xcd66,	// (0x0004c901) main_touch_calib_button_pane_t2

0x0001,

0xfd50,	// (0x0004f8eb) main_touch_calib_button_pane_t_ParamLimits

0xfd50,	// (0x0004f8eb) main_touch_calib_button_pane_t

0xd470,	// (0x0004d00b) cell_ncimui_button_pane

0xd470,	// (0x0004d00b) bg_button_pane_cp032

0xcd84,	// (0x0004c91f) cell_ncimui_button_pane_t1

0xb3ae,	// (0x0004af49) image3_infobar_pane_ParamLimits

0xb3ae,	// (0x0004af49) image3_infobar_pane

0x91f8,	// (0x00048d93) fs_bigclock_status_pane_ParamLimits

0x91f8,	// (0x00048d93) fs_bigclock_status_pane

0x9205,	// (0x00048da0) main_fs_bigclock_clock_pane_ParamLimits

0x9205,	// (0x00048da0) main_fs_bigclock_clock_pane

0x9237,	// (0x00048dd2) main_fs_bigclock_indi_pane_ParamLimits

0x9237,	// (0x00048dd2) main_fs_bigclock_indi_pane

0x9277,	// (0x00048e12) main_fs_bigclock_swipe_pane_ParamLimits

0x9277,	// (0x00048e12) main_fs_bigclock_swipe_pane

0xd470,	// (0x0004d00b) main_fs_clock_dumped_data

0x92c3,	// (0x00048e5e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x92c3,	// (0x00048e5e) list_single_fs_bigclock_indicator_pane_g1

0x92dc,	// (0x00048e77) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x92dc,	// (0x00048e77) list_single_fs_bigclock_indicator_pane_g2

0x92f6,	// (0x00048e91) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x92f6,	// (0x00048e91) list_single_fs_bigclock_indicator_pane_g3

0x9310,	// (0x00048eab) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9310,	// (0x00048eab) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf1,	// (0x0004f78c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf1,	// (0x0004f78c) list_single_fs_bigclock_indicator_pane_g

0x933f,	// (0x00048eda) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x933f,	// (0x00048eda) list_single_fs_bigclock_indicator_pane_t1

0x9367,	// (0x00048f02) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9367,	// (0x00048f02) list_single_fs_bigclock_indicator_pane_t2

0x938f,	// (0x00048f2a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x938f,	// (0x00048f2a) list_single_fs_bigclock_indicator_pane_t3

0x93b7,	// (0x00048f52) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x93b7,	// (0x00048f52) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfc,	// (0x0004f797) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfc,	// (0x0004f797) list_single_fs_bigclock_indicator_pane_t

0xcd92,	// (0x0004c92d) image3_infobar_fav_pane_ParamLimits

0xcd92,	// (0x0004c92d) image3_infobar_fav_pane

0xcda2,	// (0x0004c93d) image3_infobar_loc_pane_ParamLimits

0xcda2,	// (0x0004c93d) image3_infobar_loc_pane

0xcdb8,	// (0x0004c953) image3_infobar_time_pane_ParamLimits

0xcdb8,	// (0x0004c953) image3_infobar_time_pane

0xde00,	// (0x0004d99b) image3_infobar_time_pane_g1

0xcdc8,	// (0x0004c963) image3_infobar_time_pane_t1

0xde00,	// (0x0004d99b) image3_infobar_loc_pane_g1

0xcdd6,	// (0x0004c971) image3_infobar_loc_pane_g2

0x0001,

0xfd55,	// (0x0004f8f0) image3_infobar_loc_pane_g

0xcdde,	// (0x0004c979) image3_infobar_loc_pane_t1

0xde00,	// (0x0004d99b) image3_infobar_fav_pane_g1

0xcdec,	// (0x0004c987) image3_infobar_fav_pane_g2

0x0001,

0xfd5a,	// (0x0004f8f5) image3_infobar_fav_pane_g

0xcdf4,	// (0x0004c98f) fs_bigclock_status_battery_pane

0xcdfd,	// (0x0004c998) fs_bigclock_status_signal_pane

0xce06,	// (0x0004c9a1) fs_bigclock_status_title_pane

0xce0f,	// (0x0004c9aa) fs_bigclock_status_signal_pane_g1

0xce18,	// (0x0004c9b3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5f,	// (0x0004f8fa) fs_bigclock_status_signal_pane_g

0xce20,	// (0x0004c9bb) fs_bigclock_status_battery_pane_g1

0xce29,	// (0x0004c9c4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd64,	// (0x0004f8ff) fs_bigclock_status_battery_pane_g

0xce31,	// (0x0004c9cc) fs_bigclock_status_title_pane_t1

0x9cb5,	// (0x00049850) main_fs_bigclock_clock_pane_g1

0x9cb5,	// (0x00049850) main_fs_bigclock_clock_pane_g2

0x9cc8,	// (0x00049863) main_fs_bigclock_clock_pane_g3

0x9cc8,	// (0x00049863) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd69,	// (0x0004f904) main_fs_bigclock_clock_pane_g

0x9cdf,	// (0x0004987a) main_fs_bigclock_clock_pane_t1

0x9cf5,	// (0x00049890) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd72,	// (0x0004f90d) main_fs_bigclock_clock_pane_t

0xce3f,	// (0x0004c9da) list_single_fs_bigclock_indicator_pane_ParamLimits

0xce3f,	// (0x0004c9da) list_single_fs_bigclock_indicator_pane

0xce50,	// (0x0004c9eb) list_single_fs_bigclock_pane_ParamLimits

0xce50,	// (0x0004c9eb) list_single_fs_bigclock_pane

0xce76,	// (0x0004ca11) main_fs_bigclock_indicator_pane_t1

0xce85,	// (0x0004ca20) list_single_fs_bigclock_pane_g1

0xce8d,	// (0x0004ca28) list_single_fs_bigclock_pane_t1

0xde00,	// (0x0004d99b) main_fs_bigclock_swipe_pane_g1

0xced0,	// (0x0004ca6b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd83,	// (0x0004f91e) main_fs_bigclock_swipe_pane_g

0xced8,	// (0x0004ca73) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xced8,	// (0x0004ca73) main_fs_bigclock_swipe_pane_t1

0x373c,	// (0x000432d7) call_type_pane_ParamLimits

0xd470,	// (0x0004d00b) main_btmg_pane

0xcb0e,	// (0x0004c6a9) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcb0e,	// (0x0004c6a9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf6,	// (0x0004f891) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf6,	// (0x0004f891) list_single_cale_mrui_row_pane_g

0xcc8d,	// (0x0004c828) list_recal_vselct_arw_lo_pane

0xcc95,	// (0x0004c830) list_recal_vselct_arw_up_pane

0xcc9d,	// (0x0004c838) list_recal_vselct_pane

0x9d57,	// (0x000498f2) btmg_button_pane

0x9d61,	// (0x000498fc) main_btmg_pane_g1

0xd470,	// (0x0004d00b) bg_button_pane_cp044

0xcef5,	// (0x0004ca90) btmg_button_pane_t1

0x5151,	// (0x00044cec) aid_listscroll_gen

0xdb4d,	// (0x0004d6e8) main_cntbar_detail_pane

0xc7c9,	// (0x0004c364) list_cmail_folder_pane

0x3730,	// (0x000432cb) sp_fs_scroll_pane_cp03_ParamLimits

0x15dc,	// (0x00041177) list_single_fs_dyc_pane_cp01_ParamLimits

0x15dc,	// (0x00041177) list_single_fs_dyc_pane_cp01

0xcf03,	// (0x0004ca9e) aid_size_cmail_indent

0xcf0c,	// (0x0004caa7) list_single_dyc_row_pane_cp01

0x9d9f,	// (0x0004993a) cntbar_detail_list_pane_ParamLimits

0x9d9f,	// (0x0004993a) cntbar_detail_list_pane

0x9df1,	// (0x0004998c) main_cntbar_detail_cont_pane_ParamLimits

0x9df1,	// (0x0004998c) main_cntbar_detail_cont_pane

0x3730,	// (0x000432cb) scroll_pane_cp032_ParamLimits

0x3730,	// (0x000432cb) scroll_pane_cp032

0x9e05,	// (0x000499a0) cntbar_detail_list_event_pane_ParamLimits

0x9e05,	// (0x000499a0) cntbar_detail_list_event_pane

0x9db1,	// (0x0004994c) cntbar_detail_list_shct_pane

0xe063,	// (0x0004dbfe) aid_list_gen

0xcf15,	// (0x0004cab0) aid_scroll

0xcf1e,	// (0x0004cab9) aid_size_touch_scroll_bar

0x9e15,	// (0x000499b0) aid_list_double

0x9e1e,	// (0x000499b9) aid_list_single

0x9e1e,	// (0x000499b9) aid_list_single_lg

0x15f7,	// (0x00041192) aid_list_z_g_a_sm

0x15ff,	// (0x0004119a) aid_list_z_g_d

0x1607,	// (0x000411a2) aid_txt_z_prm

0x1615,	// (0x000411b0) aid_txt_z_prm_cp01

0x1623,	// (0x000411be) aid_txt_z_sec

0x9e27,	// (0x000499c2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9e27,	// (0x000499c2) main_cntbar_detail_cont_pane_g1

0x9e3b,	// (0x000499d6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9e3b,	// (0x000499d6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd88,	// (0x0004f923) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd88,	// (0x0004f923) main_cntbar_detail_cont_pane_g

0xcf27,	// (0x0004cac2) main_cntbar_detail_cont_pane_t1

0xcf35,	// (0x0004cad0) main_cntbar_detail_cont_pane_t2

0xcf43,	// (0x0004cade) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8d,	// (0x0004f928) main_cntbar_detail_cont_pane_t

0x9e4b,	// (0x000499e6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9e4b,	// (0x000499e6) cell_cntbar_detail_list_shct_pane

0xcf51,	// (0x0004caec) cntbar_detail_list_shct_pane_g1

0xcf5a,	// (0x0004caf5) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd94,	// (0x0004f92f) cntbar_detail_list_shct_pane_g

0x9e5d,	// (0x000499f8) cntbar_detail_list_event_pane_g1_ParamLimits

0x9e5d,	// (0x000499f8) cntbar_detail_list_event_pane_g1

0x9e69,	// (0x00049a04) cntbar_detail_list_event_pane_g2_ParamLimits

0x9e69,	// (0x00049a04) cntbar_detail_list_event_pane_g2

0x0005,

0xfd99,	// (0x0004f934) cntbar_detail_list_event_pane_g_ParamLimits

0xfd99,	// (0x0004f934) cntbar_detail_list_event_pane_g

0x9ed7,	// (0x00049a72) cntbar_detail_list_event_pane_t1_ParamLimits

0x9ed7,	// (0x00049a72) cntbar_detail_list_event_pane_t1

0x9eec,	// (0x00049a87) cntbar_detail_list_event_pane_t2_ParamLimits

0x9eec,	// (0x00049a87) cntbar_detail_list_event_pane_t2

0x0002,

0xfda6,	// (0x0004f941) cntbar_detail_list_event_pane_t_ParamLimits

0xfda6,	// (0x0004f941) cntbar_detail_list_event_pane_t

0xde00,	// (0x0004d99b) cell_cntbar_detail_list_shct_pane_g1

0x3ada,	// (0x00043675) navi_pane_mv_g3

0xdb4d,	// (0x0004d6e8) main_cntbar_detail_pane_ParamLimits

0xd470,	// (0x0004d00b) main_notif_wgt_pane

0xb10d,	// (0x0004aca8) aid_tch_main_mp4_pane_g4

0xb33b,	// (0x0004aed6) popup_slider_window_cp02

0xcc83,	// (0x0004c81e) list_recal_day_event_pane

0x9d6b,	// (0x00049906) cntbar_detail_btn_pane_ParamLimits

0x9d6b,	// (0x00049906) cntbar_detail_btn_pane

0x9d84,	// (0x0004991f) cntbar_detail_btn_pane_cp01_ParamLimits

0x9d84,	// (0x0004991f) cntbar_detail_btn_pane_cp01

0x9db1,	// (0x0004994c) cntbar_detail_list_shct_pane_ParamLimits

0x9dc1,	// (0x0004995c) cntbar_detail_pane_g1_ParamLimits

0x9dc1,	// (0x0004995c) cntbar_detail_pane_g1

0x9dd5,	// (0x00049970) cntbar_detail_pane_t1_ParamLimits

0x9dd5,	// (0x00049970) cntbar_detail_pane_t1

0x9e75,	// (0x00049a10) cntbar_detail_list_event_pane_g3_ParamLimits

0x9e75,	// (0x00049a10) cntbar_detail_list_event_pane_g3

0x9e8d,	// (0x00049a28) cntbar_detail_list_event_pane_g4_ParamLimits

0x9e8d,	// (0x00049a28) cntbar_detail_list_event_pane_g4

0x9ea5,	// (0x00049a40) cntbar_detail_list_event_pane_g5_ParamLimits

0x9ea5,	// (0x00049a40) cntbar_detail_list_event_pane_g5

0x9ebd,	// (0x00049a58) cntbar_detail_list_event_pane_g6_ParamLimits

0x9ebd,	// (0x00049a58) cntbar_detail_list_event_pane_g6

0x9f01,	// (0x00049a9c) cntbar_detail_list_event_pane_t3_ParamLimits

0x9f01,	// (0x00049a9c) cntbar_detail_list_event_pane_t3

0x9f13,	// (0x00049aae) popup_notif_wgt_window_ParamLimits

0x9f13,	// (0x00049aae) popup_notif_wgt_window

0x9f2c,	// (0x00049ac7) popup_submenu_window_cp01_ParamLimits

0x9f2c,	// (0x00049ac7) popup_submenu_window_cp01

0xddb6,	// (0x0004d951) bg_popup_window_pane_cp10

0xcf63,	// (0x0004cafe) listscroll_notif_wgt_pane

0xcf75,	// (0x0004cb10) list_notif_wgt_window

0xcf7e,	// (0x0004cb19) scroll_pane_cp033

0x9f40,	// (0x00049adb) list_notif_wgt_row_pane_ParamLimits

0x9f40,	// (0x00049adb) list_notif_wgt_row_pane

0xcf87,	// (0x0004cb22) aid_size_list_notif_wgt_del

0xcf94,	// (0x0004cb2f) list_notif_wgt_row_pane_g1

0xcfa0,	// (0x0004cb3b) list_notif_wgt_row_pane_g2

0xcfaf,	// (0x0004cb4a) list_notif_wgt_row_pane_g3

0x0002,

0xfdad,	// (0x0004f948) list_notif_wgt_row_pane_g

0xcfbc,	// (0x0004cb57) list_notif_wgt_row_pane_t1

0xcfd2,	// (0x0004cb6d) list_notif_wgt_row_pane_t2

0xcfe4,	// (0x0004cb7f) list_notif_wgt_row_pane_t3

0x0002,

0xfdb4,	// (0x0004f94f) list_notif_wgt_row_pane_t

0xb804,	// (0x0004b39f) list_recal_day_event_pane_g1

0xcff6,	// (0x0004cb91) list_recal_day_event_pane_t1

0xd470,	// (0x0004d00b) bg_button_pane_cp045

0x9f50,	// (0x00049aeb) cntbar_detail_btn_pane_t1

0xf077,	// (0x0004ec12) main_callh_pane_ParamLimits

0xf077,	// (0x0004ec12) main_callh_pane

0xd470,	// (0x0004d00b) main_coverflow0_pane

0xd470,	// (0x0004d00b) main_wgtman_pane

0x9298,	// (0x00048e33) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9298,	// (0x00048e33) main_fs_bigclock_unlock_btn_pane

0x986b,	// (0x00049406) bg_button_pane_cp16

0x987b,	// (0x00049416) cell_tport_appsw_pane_g3

0x9f5e,	// (0x00049af9) cf0_flow_pane_ParamLimits

0x9f5e,	// (0x00049af9) cf0_flow_pane

0xd005,	// (0x0004cba0) listscroll_cf0_pane

0xd010,	// (0x0004cbab) main_cf0_pane_g1

0x9f73,	// (0x00049b0e) main_cf0_pane_t1_ParamLimits

0x9f73,	// (0x00049b0e) main_cf0_pane_t1

0x9f8a,	// (0x00049b25) main_cf0_pane_t2_ParamLimits

0x9f8a,	// (0x00049b25) main_cf0_pane_t2

0x0001,

0xfdc0,	// (0x0004f95b) main_cf0_pane_t_ParamLimits

0xfdc0,	// (0x0004f95b) main_cf0_pane_t

0xd022,	// (0x0004cbbd) scroll_pane_cp11

0x9fa1,	// (0x00049b3c) cf0_flow_pane_g1

0x9fad,	// (0x00049b48) cf0_flow_pane_g2

0x0001,

0xfdc5,	// (0x0004f960) cf0_flow_pane_g

0x9fb9,	// (0x00049b54) cf0_flow_pane_t1

0xd470,	// (0x0004d00b) main_call6_pane

0xd470,	// (0x0004d00b) main_calllock_pane

0x9fcb,	// (0x00049b66) call6_btn_grp_pane_ParamLimits

0x9fcb,	// (0x00049b66) call6_btn_grp_pane

0x9fe5,	// (0x00049b80) call6_pane_g1_ParamLimits

0x9fe5,	// (0x00049b80) call6_pane_g1

0x9ffe,	// (0x00049b99) popup_call6_1st_window_ParamLimits

0x9ffe,	// (0x00049b99) popup_call6_1st_window

0xa012,	// (0x00049bad) popup_call6_2nd_window_ParamLimits

0xa012,	// (0x00049bad) popup_call6_2nd_window

0xa026,	// (0x00049bc1) cell_call6_btn_pane_ParamLimits

0xa026,	// (0x00049bc1) cell_call6_btn_pane

0xddb6,	// (0x0004d951) bg_popup_call2_in_pane_cp03

0xd02d,	// (0x0004cbc8) popup_call6_1st_window_g1

0xd035,	// (0x0004cbd0) popup_call6_1st_window_g2

0xd03d,	// (0x0004cbd8) popup_call6_1st_window_g3

0x0002,

0xfdca,	// (0x0004f965) popup_call6_1st_window_g

0xd045,	// (0x0004cbe0) popup_call6_1st_window_t1

0xd054,	// (0x0004cbef) popup_call6_1st_window_t2

0xd064,	// (0x0004cbff) popup_call6_1st_window_t3

0x0002,

0xfdd1,	// (0x0004f96c) popup_call6_1st_window_t

0xddb6,	// (0x0004d951) bg_popup_call2_in_pane_cp04

0xd074,	// (0x0004cc0f) popup_call6_2nd_window_g1

0xd07c,	// (0x0004cc17) popup_call6_2nd_window_g2

0xd084,	// (0x0004cc1f) popup_call6_2nd_window_g3

0x0002,

0xfdd8,	// (0x0004f973) popup_call6_2nd_window_g

0xd08c,	// (0x0004cc27) popup_call6_2nd_window_t1

0xd470,	// (0x0004d00b) bg_button_pane_cp15

0xd09b,	// (0x0004cc36) cell_call6_btn_pane_g1

0xd461,	// (0x0004cffc) cell_call6_btn_pane_t1

0xa03a,	// (0x00049bd5) listscroll_wgtman_pane_ParamLimits

0xa03a,	// (0x00049bd5) listscroll_wgtman_pane

0xa05b,	// (0x00049bf6) wgtman_btn_pane_ParamLimits

0xa05b,	// (0x00049bf6) wgtman_btn_pane

0xe5d0,	// (0x0004e16b) aid_scroll_copy1

0xd0a4,	// (0x0004cc3f) list_wgtman_pane

0xa09e,	// (0x00049c39) wgtman_btn_pane_g1_ParamLimits

0xa09e,	// (0x00049c39) wgtman_btn_pane_g1

0xa0ca,	// (0x00049c65) wgtman_btn_pane_t1_ParamLimits

0xa0ca,	// (0x00049c65) wgtman_btn_pane_t1

0xd0ae,	// (0x0004cc49) wgtman_btn_pane_t2_ParamLimits

0xd0ae,	// (0x0004cc49) wgtman_btn_pane_t2

0x0001,

0xfddf,	// (0x0004f97a) wgtman_btn_pane_t_ParamLimits

0xfddf,	// (0x0004f97a) wgtman_btn_pane_t

0xa107,	// (0x00049ca2) listrow_wgtman_pane_ParamLimits

0xa107,	// (0x00049ca2) listrow_wgtman_pane

0xa11b,	// (0x00049cb6) listrow_wgtman_pane_g1

0xa128,	// (0x00049cc3) listrow_wgtman_pane_g2

0x0001,

0xfde4,	// (0x0004f97f) listrow_wgtman_pane_g

0x1631,	// (0x000411cc) listrow_wgtman_pane_t1

0x1649,	// (0x000411e4) listrow_wgtman_pane_t2

0x0001,

0xfde9,	// (0x0004f984) listrow_wgtman_pane_t

0x166f,	// (0x0004120a) wait_bar_pane_cp09

0xd0c5,	// (0x0004cc60) main_calllock_btn_pane

0xd0cf,	// (0x0004cc6a) main_calllock_pane_g1

0xd470,	// (0x0004d00b) bg_button_pane_cp17

0xd09b,	// (0x0004cc36) main_calllock_btn_pane_g1

0xd0db,	// (0x0004cc76) main_calllock_btn_pane_t1

0xd470,	// (0x0004d00b) main_dialer3_pane

0xd470,	// (0x0004d00b) main_fmrd2_pane

0xde00,	// (0x0004d99b) main_fs_bigclock_unlock_btn_pane_g1

0xa14e,	// (0x00049ce9) main_fs_bigclock_unlock_btn_pane_t1

0xa15c,	// (0x00049cf7) area_fmrd2_info_pane_ParamLimits

0xa15c,	// (0x00049cf7) area_fmrd2_info_pane

0xa16d,	// (0x00049d08) area_fmrd2_visual_pane_ParamLimits

0xa16d,	// (0x00049d08) area_fmrd2_visual_pane

0xa17b,	// (0x00049d16) fmrd2_indi_pane_ParamLimits

0xa17b,	// (0x00049d16) fmrd2_indi_pane

0xa188,	// (0x00049d23) area_fmrd2_visual_pane_g1

0xa190,	// (0x00049d2b) area_fmrd2_visual_pane_t1

0xa1a0,	// (0x00049d3b) area_fmrd2_visual_pane_t2

0xa1b0,	// (0x00049d4b) area_fmrd2_visual_pane_t3

0x0002,

0xfdf3,	// (0x0004f98e) area_fmrd2_visual_pane_t

0xa1c0,	// (0x00049d5b) area_fmrd2_info_pane_g1

0xa1c8,	// (0x00049d63) area_fmrd2_info_pane_t1

0xa1d8,	// (0x00049d73) area_fmrd2_info_pane_t2

0xa1e8,	// (0x00049d83) area_fmrd2_info_pane_t3

0xa1f8,	// (0x00049d93) area_fmrd2_info_pane_t4

0x0003,

0xfdfa,	// (0x0004f995) area_fmrd2_info_pane_t

0xa208,	// (0x00049da3) fmrd2_indi_pane_t1

0xa218,	// (0x00049db3) fmrd2_indi_pane_t2

0xa228,	// (0x00049dc3) fmrd2_indi_pane_t3

0x0002,

0xfe03,	// (0x0004f99e) fmrd2_indi_pane_t

0x9321,	// (0x00048ebc) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9321,	// (0x00048ebc) list_single_fs_bigclock_indicator_pane_g5

0x93d6,	// (0x00048f71) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x93d6,	// (0x00048f71) list_single_fs_bigclock_indicator_pane_t5

0x99d4,	// (0x0004956f) aid_cell_bcale_month_pane_ParamLimits

0x99d4,	// (0x0004956f) aid_cell_bcale_month_pane

0x99f2,	// (0x0004958d) bcale_month_pane_ParamLimits

0x99f2,	// (0x0004958d) bcale_month_pane

0x9a16,	// (0x000495b1) bcale_preview_pane_ParamLimits

0x9a16,	// (0x000495b1) bcale_preview_pane

0xce8d,	// (0x0004ca28) list_single_fs_bigclock_pane_t1_ParamLimits

0xceac,	// (0x0004ca47) list_single_fs_bigclock_pane_t2_ParamLimits

0xceac,	// (0x0004ca47) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7e,	// (0x0004f919) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7e,	// (0x0004f919) list_single_fs_bigclock_pane_t

0xa146,	// (0x00049ce1) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdee,	// (0x0004f989) main_fs_bigclock_unlock_btn_pane_g

0xa238,	// (0x00049dd3) aid_dia3_key_size_ParamLimits

0xa238,	// (0x00049dd3) aid_dia3_key_size

0xa24c,	// (0x00049de7) aid_dia3_listrow_size_ParamLimits

0xa24c,	// (0x00049de7) aid_dia3_listrow_size

0xa266,	// (0x00049e01) dia3_keypad_fun_pane_ParamLimits

0xa266,	// (0x00049e01) dia3_keypad_fun_pane

0xa280,	// (0x00049e1b) dia3_keypad_num_pane_ParamLimits

0xa280,	// (0x00049e1b) dia3_keypad_num_pane

0xa29a,	// (0x00049e35) dia3_listscroll_pane_ParamLimits

0xa29a,	// (0x00049e35) dia3_listscroll_pane

0xa2b0,	// (0x00049e4b) dia3_numentry_pane_ParamLimits

0xa2b0,	// (0x00049e4b) dia3_numentry_pane

0xd0ea,	// (0x0004cc85) dia3_list_pane

0xa2ca,	// (0x00049e65) scroll_pane_cp12

0xd470,	// (0x0004d00b) bg_dia3_numentry_pane

0xa2d5,	// (0x00049e70) dia3_numentry_pane_t1

0xa2e4,	// (0x00049e7f) cell_dia3_key_num_pane

0xa2ec,	// (0x00049e87) cell_dia3_key0_fun_pane_ParamLimits

0xa2ec,	// (0x00049e87) cell_dia3_key0_fun_pane

0xa300,	// (0x00049e9b) cell_dia3_key1_fun_pane_ParamLimits

0xa300,	// (0x00049e9b) cell_dia3_key1_fun_pane

0xa315,	// (0x00049eb0) dia3_listrow_pane

0xc18c,	// (0x0004bd27) bg_dia3_numentry_pane_g1

0xd470,	// (0x0004d00b) bg_button_pane_cp21

0xa327,	// (0x00049ec2) cell_dia3_key_num_pane_t1

0xa335,	// (0x00049ed0) cell_dia3_key_num_pane_t2

0xa335,	// (0x00049ed0) cell_dia3_key_num_pane_t3

0xa335,	// (0x00049ed0) cell_dia3_key_num_pane_t4

0x0003,

0xfe0a,	// (0x0004f9a5) cell_dia3_key_num_pane_t

0xd470,	// (0x0004d00b) bg_button_pane_cp19

0xa344,	// (0x00049edf) cell_dia3_key0_fun_pane_g1

0xd470,	// (0x0004d00b) bg_button_pane_cp20

0xa34c,	// (0x00049ee7) cell_dia3_key1_fun_pane_g1

0xa354,	// (0x00049eef) area_left_week_number_pane

0xa362,	// (0x00049efd) area_top_day_name_pane

0xa375,	// (0x00049f10) frame_month_view_pane

0xd0f5,	// (0x0004cc90) grid_month_view_pane

0xa38a,	// (0x00049f25) cell_top_day_name_pane_ParamLimits

0xa38a,	// (0x00049f25) cell_top_day_name_pane

0xa3b9,	// (0x00049f54) cell_area_left_week_number_pane_ParamLimits

0xa3b9,	// (0x00049f54) cell_area_left_week_number_pane

0xa3cf,	// (0x00049f6a) cell_month_view_pane_ParamLimits

0xa3cf,	// (0x00049f6a) cell_month_view_pane

0xd103,	// (0x0004cc9e) frm_month_g1

0xa400,	// (0x00049f9b) frm_month_g2

0xa413,	// (0x00049fae) frm_month_g3

0xa426,	// (0x00049fc1) frm_month_g4

0xa439,	// (0x00049fd4) frm_month_g5

0xa44c,	// (0x00049fe7) frm_month_g6

0xa461,	// (0x00049ffc) frm_month_g7

0xd110,	// (0x0004ccab) frm_month_g8

0xa476,	// (0x0004a011) frm_month_g9

0xa486,	// (0x0004a021) frm_month_g10

0xa496,	// (0x0004a031) frm_month_g11

0xa4a6,	// (0x0004a041) frm_month_g12

0xa4b8,	// (0x0004a053) frm_month_g13

0xa4cc,	// (0x0004a067) frm_month_g14

0xa4e0,	// (0x0004a07b) frm_month_g15

0xa4f4,	// (0x0004a08f) frm_month_g16

0x000f,

0xfe13,	// (0x0004f9ae) frm_month_g

0xd11d,	// (0x0004ccb8) cell_top_day_name_pane_t1

0xa508,	// (0x0004a0a3) cell_area_left_week_number_pane_g1

0xa514,	// (0x0004a0af) cell_area_left_week_number_pane_t1

0xdba6,	// (0x0004d741) cell_month_view_pane_g1

0xa527,	// (0x0004a0c2) cell_month_view_pane_t1

0xd470,	// (0x0004d00b) main_fps_pane

0xc5e3,	// (0x0004c17e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc5e3,	// (0x0004c17e) cmail_ddmenu_btn02_pane_cp1

0xc5ff,	// (0x0004c19a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc5ff,	// (0x0004c19a) cmail_ddmenu_btn02_pane_cp2

0x9c26,	// (0x000497c1) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9c26,	// (0x000497c1) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd31,	// (0x0004f8cc) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd31,	// (0x0004f8cc) cmail_ddmenu_btn02_pane_g

0x9c47,	// (0x000497e2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9c47,	// (0x000497e2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd36,	// (0x0004f8d1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd36,	// (0x0004f8d1) cmail_ddmenu_btn02_pane_t

0xa53a,	// (0x0004a0d5) fps_text_pane_ParamLimits

0xa53a,	// (0x0004a0d5) fps_text_pane

0xa551,	// (0x0004a0ec) main_fps_pane_g1_ParamLimits

0xa551,	// (0x0004a0ec) main_fps_pane_g1

0xa569,	// (0x0004a104) wait_bar_pane_cp010_ParamLimits

0xa569,	// (0x0004a104) wait_bar_pane_cp010

0xa57c,	// (0x0004a117) fps_text_pane_t1_ParamLimits

0xa57c,	// (0x0004a117) fps_text_pane_t1

0xb47c,	// (0x0004b017) cam4_image_uncrop_pane_g1

0xb485,	// (0x0004b020) cam4_image_uncrop_pane_g2

0x76b7,	// (0x00047252) cam4_image_uncrop_pane_g3

0x76c0,	// (0x0004725b) cam4_image_uncrop_pane_g4

0x0003,

0xf875,	// (0x0004f410) cam4_image_uncrop_pane_g

0xa315,	// (0x00049eb0) dia3_listrow_pane_ParamLimits

0xd470,	// (0x0004d00b) main_phob2_pane

0x983e,	// (0x000493d9) cell_tport_appsw_pane_cp02_ParamLimits

0x983e,	// (0x000493d9) cell_tport_appsw_pane_cp02

0x9852,	// (0x000493ed) cell_tport_appsw_pane_cp03_ParamLimits

0x9852,	// (0x000493ed) cell_tport_appsw_pane_cp03

0xd470,	// (0x0004d00b) phob2_contact_card_pane

0xd470,	// (0x0004d00b) phob2_listscroll_pane

0xd130,	// (0x0004cccb) phob2_list_pane

0xd138,	// (0x0004ccd3) scroll_pane_cp034

0xa594,	// (0x0004a12f) phob2_cc_data_pane_ParamLimits

0xa594,	// (0x0004a12f) phob2_cc_data_pane

0xa5ad,	// (0x0004a148) phob2_cc_listscroll_pane_ParamLimits

0xa5ad,	// (0x0004a148) phob2_cc_listscroll_pane

0xa107,	// (0x00049ca2) list_double_large_graphic_phob2_pane_ParamLimits

0xa107,	// (0x00049ca2) list_double_large_graphic_phob2_pane

0xa5cf,	// (0x0004a16a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa5cf,	// (0x0004a16a) list_double_large_graphic_phob2_pane_g1

0x1681,	// (0x0004121c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1681,	// (0x0004121c) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe34,	// (0x0004f9cf) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe34,	// (0x0004f9cf) list_double_large_graphic_phob2_pane_g

0x16a7,	// (0x00041242) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x16a7,	// (0x00041242) list_double_large_graphic_phob2_pane_t1

0x16bc,	// (0x00041257) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x16bc,	// (0x00041257) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3d,	// (0x0004f9d8) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3d,	// (0x0004f9d8) list_double_large_graphic_phob2_pane_t

0xd470,	// (0x0004d00b) list_highlight_pane_cp024

0xa5dc,	// (0x0004a177) phob2_cc_button_pane

0xa5e6,	// (0x0004a181) phob2_cc_data_pane_g1_ParamLimits

0xa5e6,	// (0x0004a181) phob2_cc_data_pane_g1

0xa600,	// (0x0004a19b) phob2_cc_data_pane_g2_ParamLimits

0xa600,	// (0x0004a19b) phob2_cc_data_pane_g2

0x0001,

0xfe42,	// (0x0004f9dd) phob2_cc_data_pane_g_ParamLimits

0xfe42,	// (0x0004f9dd) phob2_cc_data_pane_g

0xa612,	// (0x0004a1ad) phob2_cc_data_pane_t1_ParamLimits

0xa612,	// (0x0004a1ad) phob2_cc_data_pane_t1

0xa632,	// (0x0004a1cd) phob2_cc_data_pane_t2_ParamLimits

0xa632,	// (0x0004a1cd) phob2_cc_data_pane_t2

0xa652,	// (0x0004a1ed) phob2_cc_data_pane_t3_ParamLimits

0xa652,	// (0x0004a1ed) phob2_cc_data_pane_t3

0x0002,

0xfe47,	// (0x0004f9e2) phob2_cc_data_pane_t_ParamLimits

0xfe47,	// (0x0004f9e2) phob2_cc_data_pane_t

0xd140,	// (0x0004ccdb) phob2_cc_list_pane_ParamLimits

0xd140,	// (0x0004ccdb) phob2_cc_list_pane

0xb8ad,	// (0x0004b448) scroll_pane_cp035_ParamLimits

0xb8ad,	// (0x0004b448) scroll_pane_cp035

0xdb4d,	// (0x0004d6e8) bg_button_pane_cp033

0xd14c,	// (0x0004cce7) phob2_cc_button_pane_g1

0xd158,	// (0x0004ccf3) phob2_cc_button_pane_t1

0xd16d,	// (0x0004cd08) phob2_cc_button_pane_t2

0x0001,

0xfe4e,	// (0x0004f9e9) phob2_cc_button_pane_t

0xa672,	// (0x0004a20d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa672,	// (0x0004a20d) list_double_large_graphic_phob2_cc_pane

0xa6b0,	// (0x0004a24b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa6b0,	// (0x0004a24b) list_double_large_graphic_phob2_cc_pane_g1

0x16d1,	// (0x0004126c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x16d1,	// (0x0004126c) list_double_large_graphic_phob2_cc_pane_g2

0x16dd,	// (0x00041278) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x16dd,	// (0x00041278) list_double_large_graphic_phob2_cc_pane_g3

0x16e9,	// (0x00041284) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x16e9,	// (0x00041284) list_double_large_graphic_phob2_cc_pane_g4

0x16f5,	// (0x00041290) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x16f5,	// (0x00041290) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe53,	// (0x0004f9ee) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe53,	// (0x0004f9ee) list_double_large_graphic_phob2_cc_pane_g

0x1701,	// (0x0004129c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1701,	// (0x0004129c) list_double_large_graphic_phob2_cc_pane_t1

0x172a,	// (0x000412c5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x172a,	// (0x000412c5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5e,	// (0x0004f9f9) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5e,	// (0x0004f9f9) list_double_large_graphic_phob2_cc_pane_t

0xd17f,	// (0x0004cd1a) list_highlight_pane_cp025_ParamLimits

0xd17f,	// (0x0004cd1a) list_highlight_pane_cp025

0xdb4d,	// (0x0004d6e8) bg_button_pane_cp033_ParamLimits

0xd14c,	// (0x0004cce7) phob2_cc_button_pane_g1_ParamLimits

0xd158,	// (0x0004ccf3) phob2_cc_button_pane_t1_ParamLimits

0xd16d,	// (0x0004cd08) phob2_cc_button_pane_t2_ParamLimits

0xfe4e,	// (0x0004f9e9) phob2_cc_button_pane_t_ParamLimits

0x198b,	// (0x00041526) popup_wgtman_window

0xb6dd,	// (0x0004b278) scroll_pane_cp038

0xa080,	// (0x00049c1b) wgtman_btn_pane_cp_01_ParamLimits

0xa080,	// (0x00049c1b) wgtman_btn_pane_cp_01

0xd18d,	// (0x0004cd28) wgtman_content_pane

0xd196,	// (0x0004cd31) wgtman_heading_pane

0xd470,	// (0x0004d00b) bg_heading_pane_cp02

0xd19f,	// (0x0004cd3a) wgtman_heading_pane_g1

0xd1a7,	// (0x0004cd42) wgtman_heading_pane_t1

0xd1b5,	// (0x0004cd50) scroll_pane_cp036

0xd1bd,	// (0x0004cd58) wgtman_list_pane

0xc4a0,	// (0x0004c03b) wgtman_list_pane_t1_ParamLimits

0xc4a0,	// (0x0004c03b) wgtman_list_pane_t1

0xb466,	// (0x0004b001) cam4_grid_pane

0x10c5,	// (0x00040c60) bg_button_pane_cp015_ParamLimits

0x830c,	// (0x00047ea7) bg_button_pane_cp016_ParamLimits

0x831f,	// (0x00047eba) bg_button_pane_cp017_ParamLimits

0x110d,	// (0x00040ca8) popup_vitu2_query_window_g3_ParamLimits

0x110d,	// (0x00040ca8) popup_vitu2_query_window_g3

0x1188,	// (0x00040d23) popup_vitu2_query_window_t6_ParamLimits

0x1188,	// (0x00040d23) popup_vitu2_query_window_t6

0x11b3,	// (0x00040d4e) popup_vitu2_query_window_t7_ParamLimits

0x11b3,	// (0x00040d4e) popup_vitu2_query_window_t7

0xb47c,	// (0x0004b017) cam4_grid_pane_g1

0xb485,	// (0x0004b020) cam4_grid_pane_g2

0xd1c5,	// (0x0004cd60) cam4_grid_pane_g3

0xd1ce,	// (0x0004cd69) cam4_grid_pane_g4

0x0003,

0xfe63,	// (0x0004f9fe) cam4_grid_pane_g

0x25a1,	// (0x0004213c) aid_placing_vt_slider_lsc_ParamLimits

0x288e,	// (0x00042429) vidtel_button_pane_ParamLimits

0x288e,	// (0x00042429) vidtel_button_pane

0xd470,	// (0x0004d00b) bg_button_pane_cp034

0xd1d9,	// (0x0004cd74) vidtel_button_pane_g1

0xd1e1,	// (0x0004cd7c) vidtel_button_pane_t1

0xb7f4,	// (0x0004b38f) aid_size_vtel_slider_touch

0xb8ad,	// (0x0004b448) scroll_pane_cp039

0x8f5f,	// (0x00048afa) ncim_query_button_pane_cp01_ParamLimits

0x8f7e,	// (0x00048b19) ncimui_query_pane_g1_ParamLimits

0xdb4d,	// (0x0004d6e8) input_focus_pane_cp012_ParamLimits

0xc1ca,	// (0x0004bd65) ncim_query_entry_pane_t1_ParamLimits

0xb8ad,	// (0x0004b448) scroll_pane_cp039_ParamLimits

0x3a4c,	// (0x000435e7) navi_pane_bcale_mc_g1

0x3a54,	// (0x000435ef) navi_pane_bcale_mc_t1

0xc635,	// (0x0004c1d0) main_sp_fs_email_pane_g1

0xc641,	// (0x0004c1dc) main_sp_fs_email_pane_g2

0x0001,

0xfc66,	// (0x0004f801) main_sp_fs_email_pane_g

0xcb1a,	// (0x0004c6b5) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcb1a,	// (0x0004c6b5) list_single_cale_mrui_row_pane_g3

0x15d2,	// (0x0004116d) list_single_recal_day_pane_g5_event_pane

0xccf5,	// (0x0004c890) list_single_recal_day_pane_g7

0xd1f7,	// (0x0004cd92) list_recal_day_event_pane_cp01

0xd200,	// (0x0004cd9b) list_recal_vselct_arw_lo_pane_cp01

0xd208,	// (0x0004cda3) list_recal_vselct_arw_up_pane_cp01

0xd210,	// (0x0004cdab) list_recal_vselct_pane_cp01

0xb804,	// (0x0004b39f) list_recal_day_event_pane_cp01_g1

0xd21a,	// (0x0004cdb5) list_recal_day_event_pane_cp01_t1

0xccfd,	// (0x0004c898) list_single_recal_day_pane_t1_ParamLimits

0xcd0f,	// (0x0004c8aa) list_single_recal_day_pane_t2_ParamLimits

0xfd46,	// (0x0004f8e1) list_single_recal_day_pane_t_ParamLimits

0xdb2b,	// (0x0004d6c6) bg_notes_pane_ParamLimits

0xdbf6,	// (0x0004d791) list_notes_pane_ParamLimits

0x1b61,	// (0x000416fc) scroll_pane_cp06_ParamLimits

0xdc18,	// (0x0004d7b3) main_notes_pane_ParamLimits

0xdb4d,	// (0x0004d6e8) main_welc_pane

0xa6d8,	// (0x0004a273) main_welc_body_pane_ParamLimits

0xa6d8,	// (0x0004a273) main_welc_body_pane

0xa6f7,	// (0x0004a292) main_welc_opti_pane_ParamLimits

0xa6f7,	// (0x0004a292) main_welc_opti_pane

0xa773,	// (0x0004a30e) main_welc_pane_t1_ParamLimits

0xa773,	// (0x0004a30e) main_welc_pane_t1

0xd230,	// (0x0004cdcb) main_welc_body_row_pane_ParamLimits

0xd230,	// (0x0004cdcb) main_welc_body_row_pane

0xd4ad,	// (0x0004d048) main_welc_opti_row_pane_ParamLimits

0xd4ad,	// (0x0004d048) main_welc_opti_row_pane

0xd247,	// (0x0004cde2) main_welc_opti_row_pane_g1

0xa8ef,	// (0x0004a48a) main_welc_opti_row_pane_t1

0xd24f,	// (0x0004cdea) main_welc_body_row_pane_t1

0xcf6d,	// (0x0004cb08) popup_notif_wgt_heading_pane

0xcf87,	// (0x0004cb22) aid_size_list_notif_wgt_del_ParamLimits

0xcf94,	// (0x0004cb2f) list_notif_wgt_row_pane_g1_ParamLimits

0xcfa0,	// (0x0004cb3b) list_notif_wgt_row_pane_g2_ParamLimits

0xcfaf,	// (0x0004cb4a) list_notif_wgt_row_pane_g3_ParamLimits

0xfdad,	// (0x0004f948) list_notif_wgt_row_pane_g_ParamLimits

0xcfbc,	// (0x0004cb57) list_notif_wgt_row_pane_t1_ParamLimits

0xcfd2,	// (0x0004cb6d) list_notif_wgt_row_pane_t2_ParamLimits

0xcfe4,	// (0x0004cb7f) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb4,	// (0x0004f94f) list_notif_wgt_row_pane_t_ParamLimits

0xa11b,	// (0x00049cb6) listrow_wgtman_pane_g1_ParamLimits

0xa128,	// (0x00049cc3) listrow_wgtman_pane_g2_ParamLimits

0xfde4,	// (0x0004f97f) listrow_wgtman_pane_g_ParamLimits

0x1631,	// (0x000411cc) listrow_wgtman_pane_t1_ParamLimits

0x1649,	// (0x000411e4) listrow_wgtman_pane_t2_ParamLimits

0xfde9,	// (0x0004f984) listrow_wgtman_pane_t_ParamLimits

0x166f,	// (0x0004120a) wait_bar_pane_cp09_ParamLimits

0xd470,	// (0x0004d00b) bg_popup_heading_pane_cp02

0xd25e,	// (0x0004cdf9) popup_notif_wgt_heading_pane_g1

0xd266,	// (0x0004ce01) popup_notif_wgt_heading_pane_t1

0xd470,	// (0x0004d00b) main_vids_pane

0xd470,	// (0x0004d00b) vids_listscroll_pane

0xa8fe,	// (0x0004a499) scroll_pane_cp040

0xd470,	// (0x0004d00b) vids_list_pane

0xa909,	// (0x0004a4a4) vids_list_double_pane_ParamLimits

0xa909,	// (0x0004a4a4) vids_list_double_pane

0xa91c,	// (0x0004a4b7) vids_list_double_pane_g1

0xa925,	// (0x0004a4c0) vids_list_double_pane_t1

0xa935,	// (0x0004a4d0) vids_list_double_pane_t2

0x0001,

0xfe82,	// (0x0004fa1d) vids_list_double_pane_t

0xdb4d,	// (0x0004d6e8) main_ncimui_pane_ParamLimits

0x8d95,	// (0x00048930) main_ncimui_pane_g1_ParamLimits

0x8da1,	// (0x0004893c) main_ncimui_pane_g2_ParamLimits

0x8da1,	// (0x0004893c) main_ncimui_pane_g2

0x0001,

0xfb67,	// (0x0004f702) main_ncimui_pane_g_ParamLimits

0xfb67,	// (0x0004f702) main_ncimui_pane_g

0xa716,	// (0x0004a2b1) main_welc_pane_g1_ParamLimits

0xa716,	// (0x0004a2b1) main_welc_pane_g1

0xa72b,	// (0x0004a2c6) main_welc_pane_g2_ParamLimits

0xa72b,	// (0x0004a2c6) main_welc_pane_g2

0x0003,

0xfe6c,	// (0x0004fa07) main_welc_pane_g_ParamLimits

0xfe6c,	// (0x0004fa07) main_welc_pane_g

0xdb2b,	// (0x0004d6c6) listscroll_mce_pane_ParamLimits

0x3b2c,	// (0x000436c7) wait_bar_pane_cp10

0x516d,	// (0x00044d08) main_cale_day_pane_ParamLimits

0x516d,	// (0x00044d08) main_cale_week_pane_ParamLimits

0xdb2b,	// (0x0004d6c6) main_messa_pane_ParamLimits

0x691b,	// (0x000464b6) main_clock2_btn_pane_ParamLimits

0x691b,	// (0x000464b6) main_clock2_btn_pane

0x692d,	// (0x000464c8) main_clock2_btn_pane_cp01_ParamLimits

0x692d,	// (0x000464c8) main_clock2_btn_pane_cp01

0xcaa6,	// (0x0004c641) list_cale_mrui_pane_ParamLimits

0xd01a,	// (0x0004cbb5) main_cf0_pane_g2

0x0001,

0xfdbb,	// (0x0004f956) main_cf0_pane_g

0xa354,	// (0x00049eef) area_left_week_number_pane_ParamLimits

0xa362,	// (0x00049efd) area_top_day_name_pane_ParamLimits

0xa375,	// (0x00049f10) frame_month_view_pane_ParamLimits

0xd0f5,	// (0x0004cc90) grid_month_view_pane_ParamLimits

0xd103,	// (0x0004cc9e) frm_month_g1_ParamLimits

0xa400,	// (0x00049f9b) frm_month_g2_ParamLimits

0xa413,	// (0x00049fae) frm_month_g3_ParamLimits

0xa426,	// (0x00049fc1) frm_month_g4_ParamLimits

0xa439,	// (0x00049fd4) frm_month_g5_ParamLimits

0xa44c,	// (0x00049fe7) frm_month_g6_ParamLimits

0xa461,	// (0x00049ffc) frm_month_g7_ParamLimits

0xd110,	// (0x0004ccab) frm_month_g8_ParamLimits

0xa476,	// (0x0004a011) frm_month_g9_ParamLimits

0xa486,	// (0x0004a021) frm_month_g10_ParamLimits

0xa496,	// (0x0004a031) frm_month_g11_ParamLimits

0xa4a6,	// (0x0004a041) frm_month_g12_ParamLimits

0xa4b8,	// (0x0004a053) frm_month_g13_ParamLimits

0xa4cc,	// (0x0004a067) frm_month_g14_ParamLimits

0xa4e0,	// (0x0004a07b) frm_month_g15_ParamLimits

0xa4f4,	// (0x0004a08f) frm_month_g16_ParamLimits

0xfe13,	// (0x0004f9ae) frm_month_g_ParamLimits

0xd11d,	// (0x0004ccb8) cell_top_day_name_pane_t1_ParamLimits

0xa508,	// (0x0004a0a3) cell_area_left_week_number_pane_g1_ParamLimits

0xa514,	// (0x0004a0af) cell_area_left_week_number_pane_t1_ParamLimits

0xdba6,	// (0x0004d741) cell_month_view_pane_g1_ParamLimits

0xa527,	// (0x0004a0c2) cell_month_view_pane_t1_ParamLimits

0xdb23,	// (0x0004d6be) main_clock2_btn_pane_g1

0xd274,	// (0x0004ce0f) main_clock2_btn_pane_t1

0xdb4d,	// (0x0004d6e8) listscroll_cmail_pane_ParamLimits

0xc635,	// (0x0004c1d0) main_sp_fs_email_pane_g1_ParamLimits

0xc641,	// (0x0004c1dc) main_sp_fs_email_pane_g2_ParamLimits

0xfc66,	// (0x0004f801) main_sp_fs_email_pane_g_ParamLimits

0xcc64,	// (0x0004c7ff) list_recal_day_pane_ParamLimits

0xcc75,	// (0x0004c810) mian_recal_day_pane_t1

0x1422,	// (0x00040fbd) list_single_dyc_row_text_pane_t4_ParamLimits

0x1422,	// (0x00040fbd) list_single_dyc_row_text_pane_t4

0x146b,	// (0x00041006) list_single_dyc_row_text_pane_t5_ParamLimits

0x146b,	// (0x00041006) list_single_dyc_row_text_pane_t5

0xc6eb,	// (0x0004c286) list_single_dyc_row_text_pane_t6_ParamLimits

0xc6eb,	// (0x0004c286) list_single_dyc_row_text_pane_t6

0x3671,	// (0x0004320c) aid_mgn_list_cale_time_pane

0xdb4d,	// (0x0004d6e8) main_gallery2_pane_ParamLimits

0x6941,	// (0x000464dc) main_clock2_pane_cp01_t1

0x694f,	// (0x000464ea) main_clock2_pane_cp01_t3

0x0001,

0xf74c,	// (0x0004f2e7) main_clock2_pane_cp01_t

0x1f6f,	// (0x00041b0a) cale_week_scroll_pane_g16_ParamLimits

0x1f6f,	// (0x00041b0a) cale_week_scroll_pane_g16

0xddb6,	// (0x0004d951) vorec_slider_pane

0xd1e1,	// (0x0004cd7c) vidtel_button_pane_t1_ParamLimits

0x9cb5,	// (0x00049850) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9cb5,	// (0x00049850) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9cc8,	// (0x00049863) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9cc8,	// (0x00049863) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd69,	// (0x0004f904) main_fs_bigclock_clock_pane_g_ParamLimits

0x9cdf,	// (0x0004987a) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9cf5,	// (0x00049890) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd72,	// (0x0004f90d) main_fs_bigclock_clock_pane_t_ParamLimits

0x605a,	// (0x00045bf5) main_mup3_lyrics_pane_ParamLimits

0x605a,	// (0x00045bf5) main_mup3_lyrics_pane

0xa96b,	// (0x0004a506) main_mup3_lyrics_pane_t1_ParamLimits

0xa96b,	// (0x0004a506) main_mup3_lyrics_pane_t1

0xb0f7,	// (0x0004ac92) aid_main_mp4_pane_t1_area

0xb101,	// (0x0004ac9c) aid_main_mp4_pane_t2_area

0xb1ad,	// (0x0004ad48) main_mp4_pane_g7_ParamLimits

0xb1ad,	// (0x0004ad48) main_mp4_pane_g7

0xb1b9,	// (0x0004ad54) main_mp4_pane_g8_ParamLimits

0xb1b9,	// (0x0004ad54) main_mp4_pane_g8

0x747e,	// (0x00047019) aid_call6_pane_g1_size

0xa6a0,	// (0x0004a23b) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa6a0,	// (0x0004a23b) list_double_large_graphic_phob2_other_pane

0xa986,	// (0x0004a521) list_double_large_graphic_phob2_other_pane_g1

0xd470,	// (0x0004d00b) list_highlight_pane_cp026

0xdb4d,	// (0x0004d6e8) main_welc_pane_ParamLimits

0x96ee,	// (0x00049289) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x96ee,	// (0x00049289) main_sp_fs_ctrlbar_pane_g3

0x9708,	// (0x000492a3) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9708,	// (0x000492a3) main_sp_fs_ctrlbar_pane_g4

0x973c,	// (0x000492d7) toolbar2_fixed_button_pane_cp01

0x9747,	// (0x000492e2) toolbar2_fixed_button_pane_cp02

0x9754,	// (0x000492ef) toolbar2_fixed_button_pane_cp03

0xa6bc,	// (0x0004a257) list_welc_entry_pane_ParamLimits

0xa6bc,	// (0x0004a257) list_welc_entry_pane

0xa740,	// (0x0004a2db) main_welc_pane_g3_ParamLimits

0xa740,	// (0x0004a2db) main_welc_pane_g3

0xa795,	// (0x0004a330) main_welc_pane_t2_ParamLimits

0xa795,	// (0x0004a330) main_welc_pane_t2

0xa7b0,	// (0x0004a34b) main_welc_pane_t3_ParamLimits

0xa7b0,	// (0x0004a34b) main_welc_pane_t3

0x0005,

0xfe75,	// (0x0004fa10) main_welc_pane_t_ParamLimits

0xfe75,	// (0x0004fa10) main_welc_pane_t

0xa86d,	// (0x0004a408) welc_button_pane_ParamLimits

0xa86d,	// (0x0004a408) welc_button_pane

0xa8db,	// (0x0004a476) welc_service_logo_pane_ParamLimits

0xa8db,	// (0x0004a476) welc_service_logo_pane

0xa98e,	// (0x0004a529) list_single_welc_entry_pane_ParamLimits

0xa98e,	// (0x0004a529) list_single_welc_entry_pane

0xa9a1,	// (0x0004a53c) list_single_welc_entry_pane_g1

0xa9a9,	// (0x0004a544) list_single_welc_entry_pane_t1

0xa9b7,	// (0x0004a552) list_single_welc_entry_pane_t2

0x0001,

0xfe87,	// (0x0004fa22) list_single_welc_entry_pane_t

0xd470,	// (0x0004d00b) bg_button_pane_cp035

0xd282,	// (0x0004ce1d) welc_button_pane_t1

0xd290,	// (0x0004ce2b) welc_service_logo_pane_g1

0xd299,	// (0x0004ce34) welc_service_logo_pane_g2

0x0001,

0xfe8c,	// (0x0004fa27) welc_service_logo_pane_g

0xd470,	// (0x0004d00b) main_int_radio_pane

0xc068,	// (0x0004bc03) list_single_fs_dyc_pane_g1

0x168d,	// (0x00041228) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x168d,	// (0x00041228) list_double_large_graphic_phob2_pane_g3

0x1699,	// (0x00041234) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x1699,	// (0x00041234) list_double_large_graphic_phob2_pane_g4

0xa9c5,	// (0x0004a560) main_int_radio1_pane_ParamLimits

0xa9c5,	// (0x0004a560) main_int_radio1_pane

0xd2a2,	// (0x0004ce3d) find_pane_cp02

0xa9e2,	// (0x0004a57d) input_focus_pane_cp12_ParamLimits

0xa9e2,	// (0x0004a57d) input_focus_pane_cp12

0xa9f2,	// (0x0004a58d) input_focus_pane_cp13_ParamLimits

0xa9f2,	// (0x0004a58d) input_focus_pane_cp13

0xaa06,	// (0x0004a5a1) input_focus_pane_cp14_ParamLimits

0xaa06,	// (0x0004a5a1) input_focus_pane_cp14

0xd2ab,	// (0x0004ce46) int_radio1_listscroll_pane

0xaa1a,	// (0x0004a5b5) main_int_radio1_pane_g1_ParamLimits

0xaa1a,	// (0x0004a5b5) main_int_radio1_pane_g1

0xaa30,	// (0x0004a5cb) main_int_radio1_pane_t1_ParamLimits

0xaa30,	// (0x0004a5cb) main_int_radio1_pane_t1

0xaa49,	// (0x0004a5e4) main_int_radio1_pane_t2_ParamLimits

0xaa49,	// (0x0004a5e4) main_int_radio1_pane_t2

0xaa64,	// (0x0004a5ff) main_int_radio1_pane_t3_ParamLimits

0xaa64,	// (0x0004a5ff) main_int_radio1_pane_t3

0xaa7f,	// (0x0004a61a) main_int_radio1_pane_t4_ParamLimits

0xaa7f,	// (0x0004a61a) main_int_radio1_pane_t4

0xd2b5,	// (0x0004ce50) main_int_radio1_pane_t5_ParamLimits

0xd2b5,	// (0x0004ce50) main_int_radio1_pane_t5

0xaa91,	// (0x0004a62c) main_int_radio1_pane_t6_ParamLimits

0xaa91,	// (0x0004a62c) main_int_radio1_pane_t6

0xaaa6,	// (0x0004a641) main_int_radio1_pane_t7_ParamLimits

0xaaa6,	// (0x0004a641) main_int_radio1_pane_t7

0xaabb,	// (0x0004a656) main_int_radio1_pane_t8_ParamLimits

0xaabb,	// (0x0004a656) main_int_radio1_pane_t8

0xaad8,	// (0x0004a673) main_int_radio1_pane_t9_ParamLimits

0xaad8,	// (0x0004a673) main_int_radio1_pane_t9

0xaaea,	// (0x0004a685) main_int_radio1_pane_t10_ParamLimits

0xaaea,	// (0x0004a685) main_int_radio1_pane_t10

0xab10,	// (0x0004a6ab) main_int_radio1_pane_t11_ParamLimits

0xab10,	// (0x0004a6ab) main_int_radio1_pane_t11

0xab36,	// (0x0004a6d1) main_int_radio1_pane_t12_ParamLimits

0xab36,	// (0x0004a6d1) main_int_radio1_pane_t12

0x000b,

0xfe91,	// (0x0004fa2c) main_int_radio1_pane_t_ParamLimits

0xfe91,	// (0x0004fa2c) main_int_radio1_pane_t

0xd130,	// (0x0004cccb) int_radio_list_pane

0xd138,	// (0x0004ccd3) scroll_pane_cp037

0xd2c7,	// (0x0004ce62) list_double_large_graphic_int_radio_pane_ParamLimits

0xd2c7,	// (0x0004ce62) list_double_large_graphic_int_radio_pane

0xd2db,	// (0x0004ce76) list_double_large_graphic_int_radio_pane_g1

0xd2e4,	// (0x0004ce7f) list_double_large_graphic_int_radio_pane_t1

0xd2f2,	// (0x0004ce8d) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfeaa,	// (0x0004fa45) list_double_large_graphic_int_radio_pane_t

0xd470,	// (0x0004d00b) list_highlight_pane_cp027

0xd228,	// (0x0004cdc3) main_button_pane_4

0xa754,	// (0x0004a2ef) main_welc_pane_g4_ParamLimits

0xa754,	// (0x0004a2ef) main_welc_pane_g4

0xa7cd,	// (0x0004a368) main_welc_pane_t4_ParamLimits

0xa7cd,	// (0x0004a368) main_welc_pane_t4

0xa7e2,	// (0x0004a37d) main_welc_pane_t5_ParamLimits

0xa7e2,	// (0x0004a37d) main_welc_pane_t5

0xa832,	// (0x0004a3cd) main_welc_pane_t6_ParamLimits

0xa832,	// (0x0004a3cd) main_welc_pane_t6

0xa884,	// (0x0004a41f) welc_button_pane_2_ParamLimits

0xa884,	// (0x0004a41f) welc_button_pane_2

0xa8a2,	// (0x0004a43d) welc_button_pane_3_ParamLimits

0xa8a2,	// (0x0004a43d) welc_button_pane_3

0xd228,	// (0x0004cdc3) welc_button_pane_4

0xa8c3,	// (0x0004a45e) welc_button_pane_5_ParamLimits

0xa8c3,	// (0x0004a45e) welc_button_pane_5

0x518d,	// (0x00044d28) main_popup_welc_pane

0xd300,	// (0x0004ce9b) main_welc_sk_g3

0xd30a,	// (0x0004cea5) main_welc_sk_g4

0xd314,	// (0x0004ceaf) main_welc_sk_t3

0xd324,	// (0x0004cebf) main_welc_sk_t4

0xd334,	// (0x0004cecf) popup_welc_pane_t4

0xd342,	// (0x0004cedd) popup_welc_pane_t5

0xd350,	// (0x0004ceeb) popup_welc_pane_t6
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
