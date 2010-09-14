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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000720c2 };

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
0x1612,	// (0x000736d4) Screen

0x161e,	// (0x000736e0) application_window

0x1664,	// (0x00073726) area_bottom_pane_ParamLimits

0x1664,	// (0x00073726) area_bottom_pane

0x169d,	// (0x0007375f) area_top_pane_ParamLimits

0x169d,	// (0x0007375f) area_top_pane

0xa812,	// (0x0007c8d4) call_video_uplink_pane_ParamLimits

0xa812,	// (0x0007c8d4) call_video_uplink_pane

0x172b,	// (0x000737ed) main_pane_ParamLimits

0x172b,	// (0x000737ed) main_pane

0xbc96,	// (0x0007dd58) context_pane

0x5966,	// (0x00077a28) navi_pane

0x5998,	// (0x00077a5a) popup_cale_events_window_ParamLimits

0x5998,	// (0x00077a5a) popup_cale_events_window

0xbca9,	// (0x0007dd6b) popup_mup_playback_window

0x59b0,	// (0x00077a72) signal_pane

0x21f2,	// (0x000742b4) main_browser_pane

0x2ac6,	// (0x00074b88) main_burst_pane

0x56c6,	// (0x00077788) main_calc_pane

0xbc36,	// (0x0007dcf8) main_cale_day_pane

0x24c8,	// (0x0007458a) main_cale_month_pane

0xbc36,	// (0x0007dcf8) main_cale_week_pane

0x2ac6,	// (0x00074b88) main_call_pane

0x1d2c,	// (0x00073dee) main_call_poc_pane

0x2ac6,	// (0x00074b88) main_camera_pane

0x2ac6,	// (0x00074b88) main_chi_dic_pane

0x45b7,	// (0x00076679) main_clock_pane

0x1d2c,	// (0x00073dee) main_fmradio_pane

0x2ac6,	// (0x00074b88) main_graph_messa_pane

0x1d2c,	// (0x00073dee) main_help_pane

0x21f2,	// (0x000742b4) main_im_pane

0x1f87,	// (0x00074049) main_image_pane_ParamLimits

0x1f87,	// (0x00074049) main_image_pane

0x1d2c,	// (0x00073dee) main_location2_pane

0x2ac6,	// (0x00074b88) main_location_pane

0x1f87,	// (0x00074049) main_messa_pane

0x1d2c,	// (0x00073dee) main_mp2_pane

0x2ac6,	// (0x00074b88) main_mp_pane

0x1d2c,	// (0x00073dee) main_msg_pane

0x1d2c,	// (0x00073dee) main_mup_eq_pane

0x1d2c,	// (0x00073dee) main_mup_pane

0x21f2,	// (0x000742b4) main_notes_pane

0x1d2c,	// (0x00073dee) main_pec_pane

0x1d2c,	// (0x00073dee) main_phob_pane

0x1d2c,	// (0x00073dee) main_pinb_pane

0x1d2c,	// (0x00073dee) main_postcard_pane

0x1d2c,	// (0x00073dee) main_qdial_pane

0x2ac6,	// (0x00074b88) main_skin_pane

0x1d2c,	// (0x00073dee) main_smil2_pane

0x2ac6,	// (0x00074b88) main_smil_pane

0x2ac6,	// (0x00074b88) main_video_pane

0x2ac6,	// (0x00074b88) main_video_tele_pane

0x1f87,	// (0x00074049) main_viewer_pane_ParamLimits

0x1f87,	// (0x00074049) main_viewer_pane

0x2ac6,	// (0x00074b88) main_vorec_pane

0x571a,	// (0x000777dc) popup_blid_sat_info_window_ParamLimits

0x571a,	// (0x000777dc) popup_blid_sat_info_window

0x5772,	// (0x00077834) popup_dyc_status_message_window_ParamLimits

0x5772,	// (0x00077834) popup_dyc_status_message_window

0x578c,	// (0x0007784e) popup_grid_large_graphic_window_ParamLimits

0x578c,	// (0x0007784e) popup_grid_large_graphic_window

0x5848,	// (0x0007790a) popup_loc_request_window_ParamLimits

0x5848,	// (0x0007790a) popup_loc_request_window

0x593e,	// (0x00077a00) popup_wml_address_window_ParamLimits

0x593e,	// (0x00077a00) popup_wml_address_window

0x5500,	// (0x000775c2) call_muted_g1

0x5174,	// (0x00077236) popup_call_audio_conf_window_ParamLimits

0x5174,	// (0x00077236) popup_call_audio_conf_window

0x5514,	// (0x000775d6) popup_call_audio_first_window_ParamLimits

0x5514,	// (0x000775d6) popup_call_audio_first_window

0x558a,	// (0x0007764c) popup_call_audio_in_window_ParamLimits

0x558a,	// (0x0007764c) popup_call_audio_in_window

0x55c6,	// (0x00077688) popup_call_audio_out_window_ParamLimits

0x55c6,	// (0x00077688) popup_call_audio_out_window

0x5600,	// (0x000776c2) popup_call_audio_second_window_ParamLimits

0x5600,	// (0x000776c2) popup_call_audio_second_window

0x5656,	// (0x00077718) popup_call_audio_wait_window_ParamLimits

0x5656,	// (0x00077718) popup_call_audio_wait_window

0x568b,	// (0x0007774d) popup_number_entry_window_ParamLimits

0x568b,	// (0x0007774d) popup_number_entry_window

0x18c1,	// (0x00073983) bg_popup_call_pane_cp05_ParamLimits

0x18c1,	// (0x00073983) bg_popup_call_pane_cp05

0x18e1,	// (0x000739a3) popup_number_entry_window_t1

0x18f4,	// (0x000739b6) popup_number_entry_window_t2

0x1906,	// (0x000739c8) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x0008112d) popup_number_entry_window_t

0x194c,	// (0x00073a0e) text_title_cp2

0x195f,	// (0x00073a21) bg_popup_call_pane_cp_ParamLimits

0x195f,	// (0x00073a21) bg_popup_call_pane_cp

0x196d,	// (0x00073a2f) call_thumbnail_pane

0x1975,	// (0x00073a37) popup_call_audio_in_window_g1_ParamLimits

0x1975,	// (0x00073a37) popup_call_audio_in_window_g1

0x1981,	// (0x00073a43) popup_call_audio_in_window_g2_ParamLimits

0x1981,	// (0x00073a43) popup_call_audio_in_window_g2

0x198d,	// (0x00073a4f) popup_call_audio_in_window_g3_ParamLimits

0x198d,	// (0x00073a4f) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x00081136) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x00081136) popup_call_audio_in_window_g

0x1999,	// (0x00073a5b) popup_call_audio_in_window_t1_ParamLimits

0x1999,	// (0x00073a5b) popup_call_audio_in_window_t1

0x19b5,	// (0x00073a77) popup_call_audio_in_window_t2_ParamLimits

0x19b5,	// (0x00073a77) popup_call_audio_in_window_t2

0x19d1,	// (0x00073a93) popup_call_audio_in_window_t3_ParamLimits

0x19d1,	// (0x00073a93) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0008113d) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0008113d) popup_call_audio_in_window_t

0x195f,	// (0x00073a21) bg_popup_call_pane_cp01_ParamLimits

0x195f,	// (0x00073a21) bg_popup_call_pane_cp01

0x196d,	// (0x00073a2f) call_thumbnail_pane_cp02

0x19e4,	// (0x00073aa6) call_type_pane_cp022

0x19ec,	// (0x00073aae) popup_call_audio_out_window_g1_ParamLimits

0x19ec,	// (0x00073aae) popup_call_audio_out_window_g1

0x19fe,	// (0x00073ac0) popup_call_audio_out_window_g2_ParamLimits

0x19fe,	// (0x00073ac0) popup_call_audio_out_window_g2

0x1a0a,	// (0x00073acc) popup_call_audio_out_window_g3_ParamLimits

0x1a0a,	// (0x00073acc) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x00081144) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x00081144) popup_call_audio_out_window_g

0x1a1c,	// (0x00073ade) popup_call_audio_out_window_t1_ParamLimits

0x1a1c,	// (0x00073ade) popup_call_audio_out_window_t1

0x1a34,	// (0x00073af6) popup_call_audio_out_window_t2_ParamLimits

0x1a34,	// (0x00073af6) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0008114b) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0008114b) popup_call_audio_out_window_t

0x1a49,	// (0x00073b0b) bg_popup_call_pane_ParamLimits

0x1a49,	// (0x00073b0b) bg_popup_call_pane

0x1acd,	// (0x00073b8f) call_thumbnail_pane_cp_ParamLimits

0x1acd,	// (0x00073b8f) call_thumbnail_pane_cp

0x1af1,	// (0x00073bb3) call_type_pane_cp01_ParamLimits

0x1af1,	// (0x00073bb3) call_type_pane_cp01

0x1b35,	// (0x00073bf7) popup_call_audio_first_window_g1_ParamLimits

0x1b35,	// (0x00073bf7) popup_call_audio_first_window_g1

0x1b81,	// (0x00073c43) popup_call_audio_first_window_g2_ParamLimits

0x1b81,	// (0x00073c43) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x00081150) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x00081150) popup_call_audio_first_window_g

0x1bc5,	// (0x00073c87) popup_call_audio_first_window_t1_ParamLimits

0x1bc5,	// (0x00073c87) popup_call_audio_first_window_t1

0x1c71,	// (0x00073d33) popup_call_audio_first_window_t4_ParamLimits

0x1c71,	// (0x00073d33) popup_call_audio_first_window_t4

0x1cfd,	// (0x00073dbf) popup_call_audio_first_window_t5_ParamLimits

0x1cfd,	// (0x00073dbf) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x00081155) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x00081155) popup_call_audio_first_window_t

0x1d2c,	// (0x00073dee) bg_popup_call_pane_cp02

0x1d36,	// (0x00073df8) call_type_pane_cp023

0x1d3e,	// (0x00073e00) popup_call_audio_wait_window_g1

0x1d46,	// (0x00073e08) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0008115c) popup_call_audio_wait_window_g

0x1d4e,	// (0x00073e10) popup_call_audio_wait_window_t3

0x1d5c,	// (0x00073e1e) bg_popup_call_pane_cp03_ParamLimits

0x1d5c,	// (0x00073e1e) bg_popup_call_pane_cp03

0x1dbc,	// (0x00073e7e) call_thumbnail_pane_cp011_ParamLimits

0x1dbc,	// (0x00073e7e) call_thumbnail_pane_cp011

0x1dc8,	// (0x00073e8a) call_type_pane_cp034_ParamLimits

0x1dc8,	// (0x00073e8a) call_type_pane_cp034

0x1e04,	// (0x00073ec6) popup_call_audio_second_window_g1_ParamLimits

0x1e04,	// (0x00073ec6) popup_call_audio_second_window_g1

0x1e40,	// (0x00073f02) popup_call_audio_second_window_g2_ParamLimits

0x1e40,	// (0x00073f02) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00081161) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00081161) popup_call_audio_second_window_g

0x1e7c,	// (0x00073f3e) popup_call_audio_second_window_t1_ParamLimits

0x1e7c,	// (0x00073f3e) popup_call_audio_second_window_t1

0x1efd,	// (0x00073fbf) popup_call_audio_second_window_t2_ParamLimits

0x1efd,	// (0x00073fbf) popup_call_audio_second_window_t2

0x1f33,	// (0x00073ff5) popup_call_audio_second_window_t3_ParamLimits

0x1f33,	// (0x00073ff5) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x00081166) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x00081166) popup_call_audio_second_window_t

0x1d2c,	// (0x00073dee) bg_popup_call_pane_cp04

0x1f69,	// (0x0007402b) list_conf_pane

0x1f71,	// (0x00074033) popup_call_audio_conf_window_t1

0x1f7f,	// (0x00074041) call_thumbnail_pane_g1

0x1f87,	// (0x00074049) bg_pinb_pane_ParamLimits

0x1f87,	// (0x00074049) bg_pinb_pane

0x1f95,	// (0x00074057) find_pinb_pane

0x1f87,	// (0x00074049) listscroll_pinb_pane_ParamLimits

0x1f87,	// (0x00074049) listscroll_pinb_pane

0x1f9f,	// (0x00074061) pinb_bg_pane_g1

0x1f9f,	// (0x00074061) pinb_bg_pane_g2

0x1f9f,	// (0x00074061) pinb_bg_pane_g3

0x1f9f,	// (0x00074061) pinb_bg_pane_g4

0x1f9f,	// (0x00074061) pinb_bg_pane_g5

0x1f9f,	// (0x00074061) pinb_bg_pane_g6

0x1f9f,	// (0x00074061) pinb_bg_pane_g7

0x1f9f,	// (0x00074061) pinb_bg_pane_g8

0x1f9f,	// (0x00074061) pinb_bg_pane_g9

0x1f9f,	// (0x00074061) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0008116d) pinb_bg_pane_g

0x162a,	// (0x000736ec) grid_pinb_pane

0x162a,	// (0x000736ec) list_pinb_pane

0x1855,	// (0x00073917) scroll_pane_cp01_ParamLimits

0x1855,	// (0x00073917) scroll_pane_cp01

0x1fa9,	// (0x0007406b) find_pinb_pane_g1_ParamLimits

0x1fa9,	// (0x0007406b) find_pinb_pane_g1

0x1fc1,	// (0x00074083) find_pinb_pane_t1

0x1fd3,	// (0x00074095) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x00081187) find_pinb_pane_t

0x1fe8,	// (0x000740aa) input_focus_pane_cp01_ParamLimits

0x1fe8,	// (0x000740aa) input_focus_pane_cp01

0x1ff4,	// (0x000740b6) cell_pinb_pane_ParamLimits

0x1ff4,	// (0x000740b6) cell_pinb_pane

0x2002,	// (0x000740c4) cell_pinb_pane_g1_ParamLimits

0x2002,	// (0x000740c4) cell_pinb_pane_g1

0x2010,	// (0x000740d2) cell_pinb_pane_g2_ParamLimits

0x2010,	// (0x000740d2) cell_pinb_pane_g2

0x2010,	// (0x000740d2) cell_pinb_pane_g3_ParamLimits

0x2010,	// (0x000740d2) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0008118c) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0008118c) cell_pinb_pane_g

0x1d2c,	// (0x00073dee) grid_highlight_pane_cp01

0x1ff4,	// (0x000740b6) list_pinb_item_pane_ParamLimits

0x1ff4,	// (0x000740b6) list_pinb_item_pane

0x162a,	// (0x000736ec) list_highlight_pane_cp02

0x201e,	// (0x000740e0) list_pinb_item_pane_g1_ParamLimits

0x201e,	// (0x000740e0) list_pinb_item_pane_g1

0x2010,	// (0x000740d2) list_pinb_item_pane_g2_ParamLimits

0x2010,	// (0x000740d2) list_pinb_item_pane_g2

0x2002,	// (0x000740c4) list_pinb_item_pane_g3_ParamLimits

0x2002,	// (0x000740c4) list_pinb_item_pane_g3

0x2010,	// (0x000740d2) list_pinb_item_pane_g4_ParamLimits

0x2010,	// (0x000740d2) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x00081193) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x00081193) list_pinb_item_pane_g

0x202c,	// (0x000740ee) list_pinb_item_pane_t1_ParamLimits

0x202c,	// (0x000740ee) list_pinb_item_pane_t1

0x205e,	// (0x00074120) calc_display_pane

0x2083,	// (0x00074145) calc_paper_pane

0x20a6,	// (0x00074168) grid_calc_pane

0x1d2c,	// (0x00073dee) bg_list_pane_cp01

0x20d4,	// (0x00074196) clock_g1

0x20dc,	// (0x0007419e) clock_g2

0x0001,

0xf0da,	// (0x0008119c) clock_g

0x20e4,	// (0x000741a6) clock_t1_ParamLimits

0x20e4,	// (0x000741a6) clock_t1

0x20f9,	// (0x000741bb) clock_t2_ParamLimits

0x20f9,	// (0x000741bb) clock_t2

0x210b,	// (0x000741cd) clock_t3_ParamLimits

0x210b,	// (0x000741cd) clock_t3

0x211d,	// (0x000741df) clock_t4_ParamLimits

0x211d,	// (0x000741df) clock_t4

0x212f,	// (0x000741f1) clock_t5_ParamLimits

0x212f,	// (0x000741f1) clock_t5

0x2144,	// (0x00074206) clock_t6_ParamLimits

0x2144,	// (0x00074206) clock_t6

0x2156,	// (0x00074218) clock_t7_ParamLimits

0x2156,	// (0x00074218) clock_t7

0x2168,	// (0x0007422a) clock_t8_ParamLimits

0x2168,	// (0x0007422a) clock_t8

0x217c,	// (0x0007423e) clock_t9_ParamLimits

0x217c,	// (0x0007423e) clock_t9

0x0008,

0xf0df,	// (0x000811a1) clock_t_ParamLimits

0xf0df,	// (0x000811a1) clock_t

0x2190,	// (0x00074252) popup_clock_analogue_window_cp02

0x2190,	// (0x00074252) popup_clock_digital_window_cp01

0x1d2c,	// (0x00073dee) listscroll_help_pane

0x1d2c,	// (0x00073dee) phob_pre_status_pane

0x2198,	// (0x0007425a) grid_qdial_pane

0x21a2,	// (0x00074264) listscroll_mce_pane

0x1f87,	// (0x00074049) bg_notes_pane

0x21bc,	// (0x0007427e) list_notes_pane

0x21ca,	// (0x0007428c) scroll_pane_cp06

0x21de,	// (0x000742a0) bg_calc_paper_pane

0xa838,	// (0x0007c8fa) list_calc_pane

0x21f2,	// (0x000742b4) bg_calc_display_pane

0x21fe,	// (0x000742c0) calc_display_pane_t1

0x2213,	// (0x000742d5) calc_display_pane_t2

0xa852,	// (0x0007c914) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x000811b4) calc_display_pane_t

0x2228,	// (0x000742ea) cell_calc_pane_ParamLimits

0x2228,	// (0x000742ea) cell_calc_pane

0x225d,	// (0x0007431f) bg_calc_paper_pane_g1

0x2269,	// (0x0007432b) bg_calc_paper_pane_g2

0x2275,	// (0x00074337) bg_calc_paper_pane_g3

0x2281,	// (0x00074343) bg_calc_paper_pane_g4

0x228d,	// (0x0007434f) bg_calc_paper_pane_g5

0x2299,	// (0x0007435b) bg_calc_paper_pane_g6

0x22a8,	// (0x0007436a) bg_calc_paper_pane_g7

0x22b7,	// (0x00074379) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x000811bb) bg_calc_paper_pane_g

0x22ca,	// (0x0007438c) calc_bg_paper_pane_g9

0x22dd,	// (0x0007439f) list_calc_item_pane_ParamLimits

0x22dd,	// (0x0007439f) list_calc_item_pane

0x22f5,	// (0x000743b7) list_calc_item_pane_g1

0xa864,	// (0x0007c926) list_calc_item_pane_t1_ParamLimits

0xa864,	// (0x0007c926) list_calc_item_pane_t1

0x2302,	// (0x000743c4) list_calc_item_pane_t2_ParamLimits

0x2302,	// (0x000743c4) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x000811cc) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x000811cc) list_calc_item_pane_t

0x1f9f,	// (0x00074061) cell_calc_pane_g1

0x2334,	// (0x000743f6) grid_highlight_pane_cp02

0x2356,	// (0x00074418) bg_calc_display_pane_g1

0x235f,	// (0x00074421) bg_calc_display_pane_g2

0x2369,	// (0x0007442b) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x000811d6) bg_calc_display_pane_g

0x2372,	// (0x00074434) cell_qdial_pane_ParamLimits

0x2372,	// (0x00074434) cell_qdial_pane

0x2386,	// (0x00074448) cell_qdial_pane_g1_ParamLimits

0x2386,	// (0x00074448) cell_qdial_pane_g1

0x239c,	// (0x0007445e) cell_qdial_pane_g2_ParamLimits

0x239c,	// (0x0007445e) cell_qdial_pane_g2

0x23ad,	// (0x0007446f) cell_qdial_pane_g3_ParamLimits

0x23ad,	// (0x0007446f) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x000811dd) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x000811dd) cell_qdial_pane_g

0x23cf,	// (0x00074491) cell_qdial_pane_t1_ParamLimits

0x23cf,	// (0x00074491) cell_qdial_pane_t1

0x23e7,	// (0x000744a9) cell_qdial_pane_t2_ParamLimits

0x23e7,	// (0x000744a9) cell_qdial_pane_t2

0x23fa,	// (0x000744bc) cell_qdial_pane_t3_ParamLimits

0x23fa,	// (0x000744bc) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x000811e6) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x000811e6) cell_qdial_pane_t

0x1d2c,	// (0x00073dee) grid_highlight_pane_cp04

0x240d,	// (0x000744cf) thumbnail_qdial_pane_ParamLimits

0x240d,	// (0x000744cf) thumbnail_qdial_pane

0x2469,	// (0x0007452b) list_help_pane

0x2472,	// (0x00074534) scroll_pane_cp02

0x247b,	// (0x0007453d) help_list_pane_t1_ParamLimits

0x247b,	// (0x0007453d) help_list_pane_t1

0xa876,	// (0x0007c938) bg_notes_pane_g2

0xa87e,	// (0x0007c940) bg_notes_pane_g3

0xa886,	// (0x0007c948) notes_bg_pane_g1

0xa88e,	// (0x0007c950) notes_bg_pane_g4

0xa896,	// (0x0007c958) notes_bg_pane_g5

0xa89e,	// (0x0007c960) notes_bg_pane_g6

0xa8a6,	// (0x0007c968) notes_bg_pane_g7

0xa8ae,	// (0x0007c970) notes_bg_pane_g8

0xa8b6,	// (0x0007c978) notes_bg_pane_g9

0x0006,

0xf142,	// (0x00081204) notes_bg_pane_g

0x2499,	// (0x0007455b) list_notes_text_pane_ParamLimits

0x2499,	// (0x0007455b) list_notes_text_pane

0x24ae,	// (0x00074570) list_notes_text_pane_g1

0x0de8,	// (0x00072eaa) list_notes_text_pane_t1

0x24c8,	// (0x0007458a) listscroll_cale_week_pane

0x24fd,	// (0x000745bf) bg_cale_heading_pane

0x2515,	// (0x000745d7) bg_cale_pane_cp01

0x2532,	// (0x000745f4) cale_week_corner_pane

0x2551,	// (0x00074613) cale_week_day_heading_pane

0x256e,	// (0x00074630) cale_week_scroll_pane_g1

0x2581,	// (0x00074643) cale_week_scroll_pane_g2

0x2599,	// (0x0007465b) cale_week_scroll_pane_g3

0x25b1,	// (0x00074673) cale_week_scroll_pane_g4

0x25c9,	// (0x0007468b) cale_week_scroll_pane_g5

0x25e9,	// (0x000746ab) cale_week_scroll_pane_g6

0x2609,	// (0x000746cb) cale_week_scroll_pane_g7

0x2629,	// (0x000746eb) cale_week_scroll_pane_g8

0x264d,	// (0x0007470f) cale_week_scroll_pane_g9

0x2665,	// (0x00074727) cale_week_scroll_pane_g10

0x267d,	// (0x0007473f) cale_week_scroll_pane_g11

0x2695,	// (0x00074757) cale_week_scroll_pane_g12

0x26ad,	// (0x0007476f) cale_week_scroll_pane_g13

0x26ad,	// (0x0007476f) cale_week_scroll_pane_g14

0x26ad,	// (0x0007476f) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x00081213) cale_week_scroll_pane_g

0x26e9,	// (0x000747ab) cale_week_time_pane

0x270d,	// (0x000747cf) grid_cale_week_pane

0x2745,	// (0x00074807) scroll_pane_cp08

0x2762,	// (0x00074824) cell_cale_week_pane_ParamLimits

0x2762,	// (0x00074824) cell_cale_week_pane

0x27f0,	// (0x000748b2) cale_week_day_heading_pane_t1

0x281a,	// (0x000748dc) cale_week_day_heading_pane_t2

0x2849,	// (0x0007490b) cale_week_day_heading_pane_t3

0x2878,	// (0x0007493a) cale_week_day_heading_pane_t4

0x28a7,	// (0x00074969) cale_week_day_heading_pane_t5

0x28de,	// (0x000749a0) cale_week_day_heading_pane_t6

0x2915,	// (0x000749d7) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x00081234) cale_week_day_heading_pane_t

0x293f,	// (0x00074a01) bg_cale_side_pane

0x294d,	// (0x00074a0f) cale_week_time_pane_t1

0x2967,	// (0x00074a29) cale_week_time_pane_t2

0x2981,	// (0x00074a43) cale_week_time_pane_t3

0x299b,	// (0x00074a5d) cale_week_time_pane_t4

0x29b5,	// (0x00074a77) cale_week_time_pane_t5

0x29cf,	// (0x00074a91) cale_week_time_pane_t6

0x29e9,	// (0x00074aab) cale_week_time_pane_t7

0x2a03,	// (0x00074ac5) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x00081243) cale_week_time_pane_t

0x2a1d,	// (0x00074adf) cell_cale_week_pane_g2

0x2a3c,	// (0x00074afe) cell_cale_week_pane_g3_ParamLimits

0x2a3c,	// (0x00074afe) cell_cale_week_pane_g3

0x2a54,	// (0x00074b16) grid_highlight_pane_cp07

0x2a5c,	// (0x00074b1e) listscroll_gms_pane

0x2a66,	// (0x00074b28) grid_gms_pane

0x2a6f,	// (0x00074b31) listscroll_gms_pane_g1

0x2a77,	// (0x00074b39) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x00081254) listscroll_gms_pane_g

0x2a7f,	// (0x00074b41) scroll_pane_cp010

0x2a8a,	// (0x00074b4c) cell_gms_pane_ParamLimits

0x2a8a,	// (0x00074b4c) cell_gms_pane

0x2a9d,	// (0x00074b5f) cell_gms_pane_g1

0x2aa5,	// (0x00074b67) cell_gms_pane_g2

0x24ae,	// (0x00074570) cell_gms_pane_g3

0x2aad,	// (0x00074b6f) cell_gms_pane_g4

0x0003,

0xf197,	// (0x00081259) cell_gms_pane_g

0x2ab6,	// (0x00074b78) grid_highlight_pane_cp09

0x5488,	// (0x0007754a) phob_pre_status_pane_g1

0x5490,	// (0x00077552) phob_pre_status_pane_g2

0x5498,	// (0x0007755a) phob_pre_status_pane_g3

0x54a0,	// (0x00077562) phob_pre_status_pane_g4

0x0004,

0xf556,	// (0x00081618) phob_pre_status_pane_g

0x54b0,	// (0x00077572) phob_pre_status_pane_t1

0x54be,	// (0x00077580) phob_pre_status_pane_t2

0x54ce,	// (0x00077590) phob_pre_status_pane_t3

0x0002,

0xf561,	// (0x00081623) phob_pre_status_pane_t

0x2ac6,	// (0x00074b88) bg_list_pane_cp05

0x2ace,	// (0x00074b90) grid_vorec_pane

0x2ad6,	// (0x00074b98) vorec_t1

0x2ae4,	// (0x00074ba6) vorec_t2

0x2af2,	// (0x00074bb4) vorec_t3

0x2b00,	// (0x00074bc2) vorec_t4

0xa24d,	// (0x0007c30f) vorec_t5

0xa25b,	// (0x0007c31d) vorec_t6

0x0004,

0xf1a0,	// (0x00081262) vorec_t

0xa269,	// (0x0007c32b) wait_bar_pane_cp01

0x2b1c,	// (0x00074bde) cell_vorec_pane_ParamLimits

0x2b1c,	// (0x00074bde) cell_vorec_pane

0xa8be,	// (0x0007c980) cell_vorec_pane_g1

0x1d2c,	// (0x00073dee) grid_highlight_pane_cp05

0x1855,	// (0x00073917) cams_zoom_pane

0x1855,	// (0x00073917) image_vga_pane

0x2002,	// (0x000740c4) main_camera_pane_g1

0x2002,	// (0x000740c4) main_camera_pane_g2

0x2002,	// (0x000740c4) main_camera_pane_g3

0x2002,	// (0x000740c4) main_camera_pane_g4

0x2002,	// (0x000740c4) main_camera_pane_g5

0x2002,	// (0x000740c4) main_camera_pane_g6

0x2002,	// (0x000740c4) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x0008126d) main_camera_pane_g

0x2b2f,	// (0x00074bf1) main_camera_pane_t1

0x2b2f,	// (0x00074bf1) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x0008127e) main_camera_pane_t

0x2b57,	// (0x00074c19) cams_zoom_pane_cp_ParamLimits

0x2b57,	// (0x00074c19) cams_zoom_pane_cp

0x2b8b,	// (0x00074c4d) image_cif_pane_ParamLimits

0x2b8b,	// (0x00074c4d) image_cif_pane

0x162a,	// (0x000736ec) image_subqcif_pane

0x2b9d,	// (0x00074c5f) main_video_pane_g1_ParamLimits

0x2b9d,	// (0x00074c5f) main_video_pane_g1

0x2bcb,	// (0x00074c8d) main_video_pane_g2_ParamLimits

0x2bcb,	// (0x00074c8d) main_video_pane_g2

0x2c05,	// (0x00074cc7) main_video_pane_g3_ParamLimits

0x2c05,	// (0x00074cc7) main_video_pane_g3

0x2c05,	// (0x00074cc7) main_video_pane_g4_ParamLimits

0x2c05,	// (0x00074cc7) main_video_pane_g4

0x2c39,	// (0x00074cfb) main_video_pane_g5_ParamLimits

0x2c39,	// (0x00074cfb) main_video_pane_g5

0x2c47,	// (0x00074d09) main_video_pane_g6_ParamLimits

0x2c47,	// (0x00074d09) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00081283) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00081283) main_video_pane_g

0x2c6f,	// (0x00074d31) main_video_pane_t1_ParamLimits

0x2c6f,	// (0x00074d31) main_video_pane_t1

0x2cb3,	// (0x00074d75) cams_zoom_pane_g1

0x2cb3,	// (0x00074d75) cams_zoom_pane_g2

0x2cb3,	// (0x00074d75) cams_zoom_pane_g3

0x2cb3,	// (0x00074d75) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00081292) cams_zoom_pane_g

0x2cd1,	// (0x00074d93) grid_cams_pane

0x2ceb,	// (0x00074dad) linegrid_cams_pane

0x2cff,	// (0x00074dc1) cell_cams_pane_ParamLimits

0x2cff,	// (0x00074dc1) cell_cams_pane

0x2d1f,	// (0x00074de1) cams_burst_image_pane

0x2d27,	// (0x00074de9) cell_cams_pane_g1

0x1d2c,	// (0x00073dee) grid_highlight_pane_cp03

0x1f9f,	// (0x00074061) mp_bg_pane_g1

0x162a,	// (0x000736ec) bg_list_pane_cp03

0x162a,	// (0x000736ec) bg_mp_pane

0x162a,	// (0x000736ec) grid_mp_pane

0x2cb3,	// (0x00074d75) media_player_g1

0x42c5,	// (0x00076387) media_player_t1

0x42c5,	// (0x00076387) media_player_t2

0x42c5,	// (0x00076387) media_player_t3

0x42c5,	// (0x00076387) media_player_t4

0x42c5,	// (0x00076387) media_player_t5

0x42c5,	// (0x00076387) media_player_t6

0x42c5,	// (0x00076387) media_player_t7

0x0006,

0xf540,	// (0x00081602) media_player_t

0x162a,	// (0x000736ec) wait_bar_pane_cp02

0xf525,	// (0x000815e7) main_usb_pane_t

0x45b7,	// (0x00076679) cell_mp_pane

0x1f9f,	// (0x00074061) cell_mp_pane_g1

0x1d2c,	// (0x00073dee) grid_highlight_pane_cp06

0x2d2f,	// (0x00074df1) grid_skin_colour_pane

0x2d37,	// (0x00074df9) list_highlight_pane_cp03

0x2d3f,	// (0x00074e01) skin_g1

0x2d47,	// (0x00074e09) skin_t1

0x2d56,	// (0x00074e18) skin_t2

0x0001,

0xf1f9,	// (0x000812bb) skin_t

0x2d64,	// (0x00074e26) cell_skin_colour_pane_ParamLimits

0x2d64,	// (0x00074e26) cell_skin_colour_pane

0x2d84,	// (0x00074e46) cell_skin_colour_pane_g1

0x2def,	// (0x00074eb1) call_video_g1_ParamLimits

0x2def,	// (0x00074eb1) call_video_g1

0x2e0b,	// (0x00074ecd) call_video_g2_ParamLimits

0x2e0b,	// (0x00074ecd) call_video_g2

0x0001,

0xf1fe,	// (0x000812c0) call_video_g_ParamLimits

0xf1fe,	// (0x000812c0) call_video_g

0x2e5d,	// (0x00074f1f) call_video_uplink_pane_cp1_ParamLimits

0x2e5d,	// (0x00074f1f) call_video_uplink_pane_cp1

0x2ec2,	// (0x00074f84) call_video_uplink_pane_cp2

0x2f04,	// (0x00074fc6) video_down_crop_pane_ParamLimits

0x2f04,	// (0x00074fc6) video_down_crop_pane

0x2ffb,	// (0x000750bd) video_down_pane_ParamLimits

0x2ffb,	// (0x000750bd) video_down_pane

0x30f2,	// (0x000751b4) video_down_subqcif_pane_ParamLimits

0x30f2,	// (0x000751b4) video_down_subqcif_pane

0x310a,	// (0x000751cc) video_down_subqcif_pane_cp_ParamLimits

0x310a,	// (0x000751cc) video_down_subqcif_pane_cp

0x3149,	// (0x0007520b) im_reading_pane_ParamLimits

0x3149,	// (0x0007520b) im_reading_pane

0x315b,	// (0x0007521d) im_writing_pane_ParamLimits

0x315b,	// (0x0007521d) im_writing_pane

0x3179,	// (0x0007523b) im_reading_pane_t1

0x31b2,	// (0x00075274) list_im_pane

0x31c3,	// (0x00075285) scroll_pane_cp07

0x31dc,	// (0x0007529e) im_writing_pane_t1_ParamLimits

0x31dc,	// (0x0007529e) im_writing_pane_t1

0x31f1,	// (0x000752b3) im_writing_pane_t2_ParamLimits

0x31f1,	// (0x000752b3) im_writing_pane_t2

0x0001,

0xf208,	// (0x000812ca) im_writing_pane_t_ParamLimits

0xf208,	// (0x000812ca) im_writing_pane_t

0x1d2c,	// (0x00073dee) input_focus_pane_cp04

0x1d2c,	// (0x00073dee) input_focus_pane_cp05

0x320e,	// (0x000752d0) list_im_single_pane_ParamLimits

0x320e,	// (0x000752d0) list_im_single_pane

0x3222,	// (0x000752e4) list_single_im_pane_t1

0x2ac6,	// (0x00074b88) blid_accuracy_pane

0x2ac6,	// (0x00074b88) blid_compass_pane

0xbbee,	// (0x0007dcb0) main_location_t1

0xbbee,	// (0x0007dcb0) main_location_t2

0xbbee,	// (0x0007dcb0) main_location_t3

0x0002,

0xf54f,	// (0x00081611) main_location_t

0x1d2c,	// (0x00073dee) aid_levels_location

0x1f9f,	// (0x00074061) blid_accuracy_pane_g1

0x1f9f,	// (0x00074061) blid_accuracy_pane_g2

0x0001,

0xf257,	// (0x00081319) blid_accuracy_pane_g

0x325c,	// (0x0007531e) wml_content_pane

0x329a,	// (0x0007535c) wml_button_pane_ParamLimits

0x329a,	// (0x0007535c) wml_button_pane

0x32ae,	// (0x00075370) wml_list_single_large_pane_ParamLimits

0x32ae,	// (0x00075370) wml_list_single_large_pane

0x32c3,	// (0x00075385) wml_list_single_medium_pane_ParamLimits

0x32c3,	// (0x00075385) wml_list_single_medium_pane

0x32d9,	// (0x0007539b) wml_list_single_small_pane_ParamLimits

0x32d9,	// (0x0007539b) wml_list_single_small_pane

0x32f1,	// (0x000753b3) wml_selection_box_pane_ParamLimits

0x32f1,	// (0x000753b3) wml_selection_box_pane

0x3304,	// (0x000753c6) wml_list_single_pane_t1

0x3313,	// (0x000753d5) wml_list_single_medium_pane_t1

0x3322,	// (0x000753e4) wml_list_single_large_pane_t1

0x3331,	// (0x000753f3) input_focus_pane_cp02_ParamLimits

0x3331,	// (0x000753f3) input_focus_pane_cp02

0x3344,	// (0x00075406) wml_selection_box_pane_g1

0x334d,	// (0x0007540f) wml_selection_box_pane_t1_ParamLimits

0x334d,	// (0x0007540f) wml_selection_box_pane_t1

0x1f87,	// (0x00074049) bg_wml_button_pane_ParamLimits

0x1f87,	// (0x00074049) bg_wml_button_pane

0x3365,	// (0x00075427) wml_button_pane_g1

0x336d,	// (0x0007542f) wml_button_pane_t1

0x3365,	// (0x00075427) wml_button_bg_pane_g1

0x337d,	// (0x0007543f) wml_button_bg_pane_g2

0x3385,	// (0x00075447) wml_button_bg_pane_g3

0x338d,	// (0x0007544f) wml_button_bg_pane_g4

0x3395,	// (0x00075457) wml_button_bg_pane_g5

0x339d,	// (0x0007545f) wml_button_bg_pane_g6

0x33a5,	// (0x00075467) wml_button_bg_pane_g7

0x33ad,	// (0x0007546f) wml_button_bg_pane_g8

0x33b5,	// (0x00075477) wml_button_bg_pane_g9

0x0008,

0xf20d,	// (0x000812cf) wml_button_bg_pane_g

0x33bd,	// (0x0007547f) bg_list_pane_cp02

0x33c5,	// (0x00075487) mce_header_pane_ParamLimits

0x33c5,	// (0x00075487) mce_header_pane

0x33db,	// (0x0007549d) mce_icon_pane

0x33db,	// (0x0007549d) mce_image_pane

0x33e4,	// (0x000754a6) mce_text_pane_ParamLimits

0x33e4,	// (0x000754a6) mce_text_pane

0x33f7,	// (0x000754b9) scroll_pane_cp03

0x3292,	// (0x00075354) scroll_pane_cp04

0x33ff,	// (0x000754c1) scroll_pane_cp05_ParamLimits

0x33ff,	// (0x000754c1) scroll_pane_cp05

0x340b,	// (0x000754cd) mce_header_field_pane_ParamLimits

0x340b,	// (0x000754cd) mce_header_field_pane

0x3422,	// (0x000754e4) mce_header_field_pane_2_ParamLimits

0x3422,	// (0x000754e4) mce_header_field_pane_2

0x3438,	// (0x000754fa) mce_header_field_pane_3

0x3440,	// (0x00075502) list_single_mce_message_pane_ParamLimits

0x3440,	// (0x00075502) list_single_mce_message_pane

0x344c,	// (0x0007550e) list_single_mce_smart_pane_ParamLimits

0x344c,	// (0x0007550e) list_single_mce_smart_pane

0x3460,	// (0x00075522) input_focus_pane_cp03

0x3469,	// (0x0007552b) list_header_data_pane

0x3471,	// (0x00075533) mce_header_field_pane_t1

0x347f,	// (0x00075541) list_single_mce_header_pane_ParamLimits

0x347f,	// (0x00075541) list_single_mce_header_pane

0x3493,	// (0x00075555) list_single_mce_header_pane_t1

0x34a2,	// (0x00075564) list_single_mce_message_pane_g1

0x34aa,	// (0x0007556c) list_single_mce_message_pane_t1

0x34de,	// (0x000755a0) bg_cale_heading_pane_cp01_ParamLimits

0x34de,	// (0x000755a0) bg_cale_heading_pane_cp01

0x3518,	// (0x000755da) bg_cale_pane_cp02_ParamLimits

0x3518,	// (0x000755da) bg_cale_pane_cp02

0x3545,	// (0x00075607) cale_month_corner_pane

0x3564,	// (0x00075626) cale_month_day_heading_pane_ParamLimits

0x3564,	// (0x00075626) cale_month_day_heading_pane

0x35b6,	// (0x00075678) cale_month_pane_g1_ParamLimits

0x35b6,	// (0x00075678) cale_month_pane_g1

0x35e5,	// (0x000756a7) cale_month_pane_g2_ParamLimits

0x35e5,	// (0x000756a7) cale_month_pane_g2

0x3615,	// (0x000756d7) cale_month_pane_g3_ParamLimits

0x3615,	// (0x000756d7) cale_month_pane_g3

0x3651,	// (0x00075713) cale_month_pane_g4_ParamLimits

0x3651,	// (0x00075713) cale_month_pane_g4

0x368d,	// (0x0007574f) cale_month_pane_g5_ParamLimits

0x368d,	// (0x0007574f) cale_month_pane_g5

0x36d5,	// (0x00075797) cale_month_pane_g6_ParamLimits

0x36d5,	// (0x00075797) cale_month_pane_g6

0x3721,	// (0x000757e3) cale_month_pane_g7_ParamLimits

0x3721,	// (0x000757e3) cale_month_pane_g7

0x3775,	// (0x00075837) cale_month_pane_g8_ParamLimits

0x3775,	// (0x00075837) cale_month_pane_g8

0x37c9,	// (0x0007588b) cale_month_pane_g9_ParamLimits

0x37c9,	// (0x0007588b) cale_month_pane_g9

0x381b,	// (0x000758dd) cale_month_pane_g10_ParamLimits

0x381b,	// (0x000758dd) cale_month_pane_g10

0x386d,	// (0x0007592f) cale_month_pane_g11_ParamLimits

0x386d,	// (0x0007592f) cale_month_pane_g11

0x38bf,	// (0x00075981) cale_month_pane_g12_ParamLimits

0x38bf,	// (0x00075981) cale_month_pane_g12

0x3911,	// (0x000759d3) cale_month_pane_g13_ParamLimits

0x3911,	// (0x000759d3) cale_month_pane_g13

0x000c,

0xf220,	// (0x000812e2) cale_month_pane_g_ParamLimits

0xf220,	// (0x000812e2) cale_month_pane_g

0x3975,	// (0x00075a37) cale_month_week_pane

0x3999,	// (0x00075a5b) grid_cale_month_pane_ParamLimits

0x3999,	// (0x00075a5b) grid_cale_month_pane

0x39e2,	// (0x00075aa4) cale_month_day_heading_pane_t1

0x3a68,	// (0x00075b2a) cale_month_day_heading_pane_t2

0x3ae1,	// (0x00075ba3) cale_month_day_heading_pane_t3

0x3b5a,	// (0x00075c1c) cale_month_day_heading_pane_t4

0x3bdb,	// (0x00075c9d) cale_month_day_heading_pane_t5

0x3c64,	// (0x00075d26) cale_month_day_heading_pane_t6

0x3ced,	// (0x00075daf) cale_month_day_heading_pane_t7

0x0006,

0xf23b,	// (0x000812fd) cale_month_day_heading_pane_t

0x293f,	// (0x00074a01) bg_cale_side_pane_cp01

0x3d7e,	// (0x00075e40) cale_month_week_pane_t1

0x3d97,	// (0x00075e59) cale_month_week_pane_t2

0x3db0,	// (0x00075e72) cale_month_week_pane_t3

0x3dc9,	// (0x00075e8b) cale_month_week_pane_t4

0x3de2,	// (0x00075ea4) cale_month_week_pane_t5

0x3dfb,	// (0x00075ebd) cale_month_week_pane_t6

0x0005,

0xf24a,	// (0x0008130c) cale_month_week_pane_t

0x3e14,	// (0x00075ed6) cell_cale_month_pane_ParamLimits

0x3e14,	// (0x00075ed6) cell_cale_month_pane

0xa8c8,	// (0x0007c98a) cell_cale_month_pane_g1

0x3f42,	// (0x00076004) cell_cale_month_pane_t1_ParamLimits

0x3f42,	// (0x00076004) cell_cale_month_pane_t1

0x2a54,	// (0x00074b16) grid_highlight_pane_cp08

0x1f9f,	// (0x00074061) main_smil_g1

0x3f6e,	// (0x00076030) smil_status_pane

0x3f77,	// (0x00076039) smil_text_pane

0xbb06,	// (0x0007dbc8) bg_popup_call3_rect_pane_g8

0xbb0e,	// (0x0007dbd0) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e3,	// (0x000815a5) bg_popup_call3_rect_pane_g

0xbd0b,	// (0x0007ddcd) smil_status_volume_pane_g1

0x3f8b,	// (0x0007604d) smil_status_pane_t1

0xbd3e,	// (0x0007de00) volume_smil_pane

0x3fa2,	// (0x00076064) list_smil_text_pane

0x3fac,	// (0x0007606e) scroll_pane_cp011

0x3fb7,	// (0x00076079) smil_text_list_pane_t1_ParamLimits

0x3fb7,	// (0x00076079) smil_text_list_pane_t1

0xa8d4,	// (0x0007c996) aid_volume_smil_ParamLimits

0xa8d4,	// (0x0007c996) aid_volume_smil

0x1f9f,	// (0x00074061) smil_volume_pane_g1

0x1f9f,	// (0x00074061) smil_volume_pane_g2

0x0001,

0xf257,	// (0x00081319) smil_volume_pane_g

0x24c8,	// (0x0007458a) listscroll_cale_day_pane

0x3ff3,	// (0x000760b5) bg_cale_pane

0x400b,	// (0x000760cd) list_cale_pane

0x402e,	// (0x000760f0) scroll_pane_cp09

0x403f,	// (0x00076101) cale_bg_pane_g1

0x4047,	// (0x00076109) cale_bg_pane_g2

0x404f,	// (0x00076111) cale_bg_pane_g3

0x4057,	// (0x00076119) cale_bg_pane_g4

0x405f,	// (0x00076121) cale_bg_pane_g5

0x4067,	// (0x00076129) cale_bg_pane_g6

0x406f,	// (0x00076131) cale_bg_pane_g7

0x4077,	// (0x00076139) cale_bg_pane_g8

0x407f,	// (0x00076141) cale_bg_pane_g9

0x0008,

0xf25c,	// (0x0008131e) cale_bg_pane_g

0x408f,	// (0x00076151) list_cale_time_pane_ParamLimits

0x408f,	// (0x00076151) list_cale_time_pane

0x40a4,	// (0x00076166) list_cale_time_pane_g1_ParamLimits

0x40a4,	// (0x00076166) list_cale_time_pane_g1

0x40b0,	// (0x00076172) list_cale_time_pane_g2_ParamLimits

0x40b0,	// (0x00076172) list_cale_time_pane_g2

0x40bd,	// (0x0007617f) list_cale_time_pane_g3_ParamLimits

0x40bd,	// (0x0007617f) list_cale_time_pane_g3

0x40cb,	// (0x0007618d) list_cale_time_pane_g4_ParamLimits

0x40cb,	// (0x0007618d) list_cale_time_pane_g4

0x40d9,	// (0x0007619b) list_cale_time_pane_g5_ParamLimits

0x40d9,	// (0x0007619b) list_cale_time_pane_g5

0x0005,

0xf26f,	// (0x00081331) list_cale_time_pane_g_ParamLimits

0xf26f,	// (0x00081331) list_cale_time_pane_g

0x40f4,	// (0x000761b6) list_cale_time_pane_t1_ParamLimits

0x40f4,	// (0x000761b6) list_cale_time_pane_t1

0x411c,	// (0x000761de) list_cale_time_pane_t2_ParamLimits

0x411c,	// (0x000761de) list_cale_time_pane_t2

0x47d2,	// (0x00076894) aid_blid_cardinal_pane

0x481c,	// (0x000768de) compass_pane_t4

0x4144,	// (0x00076206) list_cale_time_pane_t4_ParamLimits

0x4144,	// (0x00076206) list_cale_time_pane_t4

0x482a,	// (0x000768ec) compass_pane_t5

0x4838,	// (0x000768fa) compass_pane_t6

0x4846,	// (0x00076908) compass_pane_t7

0x48dc,	// (0x0007699e) navi_pane_cc_t1

0x4afb,	// (0x00076bbd) aid_phob_thumbnail_center_pane

0x4e38,	// (0x00076efa) main_postcard_pane_g4_ParamLimits

0x0002,

0xf27c,	// (0x0008133e) list_cale_time_pane_t_ParamLimits

0xf27c,	// (0x0008133e) list_cale_time_pane_t

0x195f,	// (0x00073a21) bg_popup_window_pane_cp02_ParamLimits

0x195f,	// (0x00073a21) bg_popup_window_pane_cp02

0x416c,	// (0x0007622e) heading_pane_cp01_ParamLimits

0x416c,	// (0x0007622e) heading_pane_cp01

0x4178,	// (0x0007623a) loc_req_pane_ParamLimits

0x4178,	// (0x0007623a) loc_req_pane

0x4188,	// (0x0007624a) loc_type_pane_ParamLimits

0x4188,	// (0x0007624a) loc_type_pane

0x419a,	// (0x0007625c) loc_type_pane_t1_ParamLimits

0x419a,	// (0x0007625c) loc_type_pane_t1

0x41ac,	// (0x0007626e) loc_type_pane_t2_ParamLimits

0x41ac,	// (0x0007626e) loc_type_pane_t2

0x41be,	// (0x00076280) loc_type_pane_t3_ParamLimits

0x41be,	// (0x00076280) loc_type_pane_t3

0x0002,

0xf283,	// (0x00081345) loc_type_pane_t_ParamLimits

0xf283,	// (0x00081345) loc_type_pane_t

0x41d0,	// (0x00076292) list_loc_req_pane

0x41da,	// (0x0007629c) scroll_pane_cp012

0x41e5,	// (0x000762a7) list_single_loc_request_popup_menu_pane_ParamLimits

0x41e5,	// (0x000762a7) list_single_loc_request_popup_menu_pane

0x41f2,	// (0x000762b4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x41f2,	// (0x000762b4) list_single_loc_request_popup_menu_pane_g1

0x41fe,	// (0x000762c0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x41fe,	// (0x000762c0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28a,	// (0x0008134c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28a,	// (0x0008134c) list_single_loc_request_popup_menu_pane_g

0x420a,	// (0x000762cc) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x420a,	// (0x000762cc) list_single_loc_request_popup_menu_pane_t1

0x1f87,	// (0x00074049) bg_popup_window_pane_cp03_ParamLimits

0x1f87,	// (0x00074049) bg_popup_window_pane_cp03

0x4220,	// (0x000762e2) heading_loc_req_pane_ParamLimits

0x4220,	// (0x000762e2) heading_loc_req_pane

0x422c,	// (0x000762ee) popup_dyc_status_message_window_g1_ParamLimits

0x422c,	// (0x000762ee) popup_dyc_status_message_window_g1

0x4240,	// (0x00076302) popup_dyc_status_message_window_t1_ParamLimits

0x4240,	// (0x00076302) popup_dyc_status_message_window_t1

0x4255,	// (0x00076317) popup_dyc_status_message_window_t2_ParamLimits

0x4255,	// (0x00076317) popup_dyc_status_message_window_t2

0x426a,	// (0x0007632c) popup_dyc_status_message_window_t3_ParamLimits

0x426a,	// (0x0007632c) popup_dyc_status_message_window_t3

0x0002,

0xf28f,	// (0x00081351) popup_dyc_status_message_window_t_ParamLimits

0xf28f,	// (0x00081351) popup_dyc_status_message_window_t

0x1d2c,	// (0x00073dee) bg_heading_pane_cp01

0x4286,	// (0x00076348) heading_loc_req_pane_g1

0x428e,	// (0x00076350) heading_loc_req_pane_g2

0x4296,	// (0x00076358) heading_loc_req_pane_g3

0x0002,

0xf296,	// (0x00081358) heading_loc_req_pane_g

0x429e,	// (0x00076360) heading_loc_req_pane_t1

0x42d5,	// (0x00076397) bg_popup_sub_pane_cp01_ParamLimits

0x42d5,	// (0x00076397) bg_popup_sub_pane_cp01

0x42e3,	// (0x000763a5) popup_cale_events_window_g1_ParamLimits

0x42e3,	// (0x000763a5) popup_cale_events_window_g1

0x4303,	// (0x000763c5) popup_cale_events_window_g2_ParamLimits

0x4303,	// (0x000763c5) popup_cale_events_window_g2

0x0001,

0xf2b8,	// (0x0008137a) popup_cale_events_window_g_ParamLimits

0xf2b8,	// (0x0008137a) popup_cale_events_window_g

0x4323,	// (0x000763e5) popup_cale_events_window_t1_ParamLimits

0x4323,	// (0x000763e5) popup_cale_events_window_t1

0x4335,	// (0x000763f7) popup_cale_events_window_t2_ParamLimits

0x4335,	// (0x000763f7) popup_cale_events_window_t2

0x4373,	// (0x00076435) popup_cale_events_window_t3_ParamLimits

0x4373,	// (0x00076435) popup_cale_events_window_t3

0x43ad,	// (0x0007646f) popup_cale_events_window_t4_ParamLimits

0x43ad,	// (0x0007646f) popup_cale_events_window_t4

0x0003,

0xf2bd,	// (0x0008137f) popup_cale_events_window_t_ParamLimits

0xf2bd,	// (0x0008137f) popup_cale_events_window_t

0x43e3,	// (0x000764a5) call_type_pane

0x43f3,	// (0x000764b5) popup_call_status_window_g1

0x4407,	// (0x000764c9) popup_call_status_window_g2

0x441b,	// (0x000764dd) popup_call_status_window_g3

0x0002,

0xf2c6,	// (0x00081388) popup_call_status_window_g

0x442a,	// (0x000764ec) call_type_pane_g1

0x4433,	// (0x000764f5) call_type_pane_g2

0x0001,

0xf2cd,	// (0x0008138f) call_type_pane_g

0x1d2c,	// (0x00073dee) bg_popup_sub_pane_cp02

0x443c,	// (0x000764fe) listscroll_popup_wml_pane

0x4444,	// (0x00076506) list_wml_pane

0x444e,	// (0x00076510) scroll_pane_cp013

0x4459,	// (0x0007651b) list_single_graphic_popup_wml_pane_ParamLimits

0x4459,	// (0x0007651b) list_single_graphic_popup_wml_pane

0x1f9f,	// (0x00074061) list_single_graphic_popup_wml_pane_g1

0x446d,	// (0x0007652f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d2,	// (0x00081394) list_single_graphic_popup_wml_pane_g

0x4475,	// (0x00076537) list_single_graphic_popup_wml_pane_t1

0x448b,	// (0x0007654d) aid_call_pane

0x1f7f,	// (0x00074041) popup_clock_analogue_window_g1

0x1f7f,	// (0x00074041) popup_clock_analogue_window_g2

0xa8f6,	// (0x0007c9b8) popup_clock_analogue_window_g3

0xa8f6,	// (0x0007c9b8) popup_clock_analogue_window_g4

0x1f9f,	// (0x00074061) popup_clock_analogue_window_g5

0x0004,

0xf2d7,	// (0x00081399) popup_clock_analogue_window_g

0xa8fe,	// (0x0007c9c0) popup_clock_analogue_window_t1

0xa90c,	// (0x0007c9ce) clock_digital_number_pane_ParamLimits

0xa90c,	// (0x0007c9ce) clock_digital_number_pane

0xa918,	// (0x0007c9da) clock_digital_number_pane_cp02_ParamLimits

0xa918,	// (0x0007c9da) clock_digital_number_pane_cp02

0xa924,	// (0x0007c9e6) clock_digital_number_pane_cp03_ParamLimits

0xa924,	// (0x0007c9e6) clock_digital_number_pane_cp03

0xa930,	// (0x0007c9f2) clock_digital_number_pane_cp04_ParamLimits

0xa930,	// (0x0007c9f2) clock_digital_number_pane_cp04

0xa940,	// (0x0007ca02) clock_digital_separator_pane_ParamLimits

0xa940,	// (0x0007ca02) clock_digital_separator_pane

0xa94c,	// (0x0007ca0e) popup_clock_digital_window_t1

0x1f9f,	// (0x00074061) clock_digital_number_pane_g1

0x1f9f,	// (0x00074061) clock_digital_number_pane_g2

0x0001,

0xf257,	// (0x00081319) clock_digital_number_pane_g

0x1f9f,	// (0x00074061) clock_digital_separator_pane_g1

0x1f9f,	// (0x00074061) clock_digital_separator_pane_g2

0x0001,

0xf257,	// (0x00081319) clock_digital_separator_pane_g

0x1d2c,	// (0x00073dee) bg_popup_window_pane_cp04

0x4493,	// (0x00076555) heading_pane_cp03

0x2ac6,	// (0x00074b88) listscroll_popup_gms_pane

0x1d2c,	// (0x00073dee) grid_large_graphic_popup_pane

0x449c,	// (0x0007655e) listscroll_popup_gms_pane_g1

0x44a5,	// (0x00076567) listscroll_popup_gms_pane_g2

0x0001,

0xf2e2,	// (0x000813a4) listscroll_popup_gms_pane_g

0x44ae,	// (0x00076570) scroll_pane_cp014

0x1ff4,	// (0x000740b6) cell_large_graphic_popup_pane_ParamLimits

0x1ff4,	// (0x000740b6) cell_large_graphic_popup_pane

0x2002,	// (0x000740c4) cell_large_graphic_popup_pane_g1_ParamLimits

0x2002,	// (0x000740c4) cell_large_graphic_popup_pane_g1

0x44b7,	// (0x00076579) cell_large_graphic_popup_pane_g2_ParamLimits

0x44b7,	// (0x00076579) cell_large_graphic_popup_pane_g2

0x44c5,	// (0x00076587) cell_large_graphic_popup_pane_g3_ParamLimits

0x44c5,	// (0x00076587) cell_large_graphic_popup_pane_g3

0x44d3,	// (0x00076595) cell_large_graphic_popup_pane_g4_ParamLimits

0x44d3,	// (0x00076595) cell_large_graphic_popup_pane_g4

0x0003,

0xf2e7,	// (0x000813a9) cell_large_graphic_popup_pane_g_ParamLimits

0xf2e7,	// (0x000813a9) cell_large_graphic_popup_pane_g

0x1d2c,	// (0x00073dee) grid_highlight_pane_cp010

0x1f9f,	// (0x00074061) bg_popup_call_pane_g1

0x44e4,	// (0x000765a6) list_single_graphic_popup_conf_pane_ParamLimits

0x44e4,	// (0x000765a6) list_single_graphic_popup_conf_pane

0x44f7,	// (0x000765b9) list_highlight_pane_cp01

0x4500,	// (0x000765c2) list_single_graphic_popup_conf_pane_g1

0x4508,	// (0x000765ca) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f0,	// (0x000813b2) list_single_graphic_popup_conf_pane_g

0x4510,	// (0x000765d2) list_single_graphic_popup_conf_pane_t1

0x451e,	// (0x000765e0) linegrid_cams_pane_g1

0x4527,	// (0x000765e9) linegrid_cams_pane_g2

0x24ae,	// (0x00074570) linegrid_cams_pane_g3

0x4530,	// (0x000765f2) linegrid_cams_pane_g4

0x4539,	// (0x000765fb) linegrid_cams_pane_g5

0x4542,	// (0x00076604) linegrid_cams_pane_g6

0x2aad,	// (0x00074b6f) linegrid_cams_pane_g7

0x0006,

0xf2f5,	// (0x000813b7) linegrid_cams_pane_g

0x454d,	// (0x0007660f) popup_clock_analogue_window

0x454d,	// (0x0007660f) popup_clock_digital_window

0x1d2c,	// (0x00073dee) popup_phob_thumbnail_window

0x1f9f,	// (0x00074061) call_video_uplink_pane_g1

0x4556,	// (0x00076618) call_video_uplink_pane_g2

0x0001,

0xf304,	// (0x000813c6) call_video_uplink_pane_g

0x455e,	// (0x00076620) video_uplink_pane

0x4566,	// (0x00076628) mce_image_pane_g1

0x4570,	// (0x00076632) mce_image_pane_g2

0x457a,	// (0x0007663c) mce_image_pane_g3

0x4582,	// (0x00076644) mce_image_pane_g4

0x458a,	// (0x0007664c) mce_image_pane_g5

0x0004,

0xf309,	// (0x000813cb) mce_image_pane_g

0x4592,	// (0x00076654) control_top_pane_stacon_cp01_ParamLimits

0x4592,	// (0x00076654) control_top_pane_stacon_cp01

0x45a6,	// (0x00076668) uni_indicator_pane_stacon_cp01_ParamLimits

0x45a6,	// (0x00076668) uni_indicator_pane_stacon_cp01

0x45b7,	// (0x00076679) bg_popup_sub_pane_cp03

0x45c1,	// (0x00076683) chi_dic_find_pane

0x45c9,	// (0x0007668b) listscroll_chi_dic_pane

0x45d2,	// (0x00076694) main_pane_chidic_g1

0x45e5,	// (0x000766a7) chi_dic_find_pane_t1

0x45f3,	// (0x000766b5) find_chidic_pane

0x45fc,	// (0x000766be) chi_dic_list_pane_ParamLimits

0x45fc,	// (0x000766be) chi_dic_list_pane

0x460d,	// (0x000766cf) scroll_pane_cp020

0x4615,	// (0x000766d7) find_chidic_pane_t1

0x1d2c,	// (0x00073dee) input_focus_pane_cp06

0x4624,	// (0x000766e6) list_chi_dic_pane_ParamLimits

0x4624,	// (0x000766e6) list_chi_dic_pane

0x4636,	// (0x000766f8) list_chi_dic_pane_t1_ParamLimits

0x4636,	// (0x000766f8) list_chi_dic_pane_t1

0x1d2c,	// (0x00073dee) list_highlight_pane_cp020

0x4649,	// (0x0007670b) bg_cale_heading_pane_g1

0x4651,	// (0x00076713) bg_cale_heading_pane_g2

0x4659,	// (0x0007671b) bg_cale_heading_pane_g3

0x4661,	// (0x00076723) bg_cale_heading_pane_g4

0x466b,	// (0x0007672d) bg_cale_heading_pane_g5

0x4675,	// (0x00076737) bg_cale_heading_pane_g6

0x467d,	// (0x0007673f) bg_cale_heading_pane_g7

0x4685,	// (0x00076747) bg_cale_heading_pane_g8

0x468f,	// (0x00076751) bg_cale_heading_pane_g9

0x0008,

0xf314,	// (0x000813d6) bg_cale_heading_pane_g

0x4649,	// (0x0007670b) bg_cale_side_pane_g1

0x4699,	// (0x0007675b) bg_cale_side_pane_g2

0x46a1,	// (0x00076763) bg_cale_side_pane_g3

0x46a9,	// (0x0007676b) bg_cale_side_pane_g4

0x46b1,	// (0x00076773) bg_cale_side_pane_g5

0x46b9,	// (0x0007677b) bg_cale_side_pane_g6

0x46c1,	// (0x00076783) bg_cale_side_pane_g7

0x46c9,	// (0x0007678b) bg_cale_side_pane_g8

0x46d1,	// (0x00076793) bg_cale_side_pane_g9

0x0008,

0xf327,	// (0x000813e9) bg_cale_side_pane_g

0x46d9,	// (0x0007679b) popup_call_status_window_ParamLimits

0x46d9,	// (0x0007679b) popup_call_status_window

0x4722,	// (0x000767e4) stacon_top_pane

0x472a,	// (0x000767ec) status_pane_ParamLimits

0x472a,	// (0x000767ec) status_pane

0x473f,	// (0x00076801) status_small_pane

0x4747,	// (0x00076809) control_pane

0x1d2c,	// (0x00073dee) stacon_bottom_pane

0x474f,	// (0x00076811) list_single_mce_smart_pane_t1_ParamLimits

0x474f,	// (0x00076811) list_single_mce_smart_pane_t1

0x4762,	// (0x00076824) list_single_mce_smart_pane_t2_ParamLimits

0x4762,	// (0x00076824) list_single_mce_smart_pane_t2

0x0001,

0xf33a,	// (0x000813fc) list_single_mce_smart_pane_t_ParamLimits

0xf33a,	// (0x000813fc) list_single_mce_smart_pane_t

0x4781,	// (0x00076843) compass_pane

0x478a,	// (0x0007684c) main_location2_pane_t1

0x479c,	// (0x0007685e) main_location2_pane_t2

0x47ae,	// (0x00076870) main_location2_pane_t3

0x0003,

0xf33f,	// (0x00081401) main_location2_pane_t

0x47f2,	// (0x000768b4) compass_pane_g1_ParamLimits

0x47f2,	// (0x000768b4) compass_pane_g1

0x47fe,	// (0x000768c0) compass_pane_t1

0x480d,	// (0x000768cf) compass_pane_t2

0x0005,

0xf348,	// (0x0008140a) compass_pane_t

0x4854,	// (0x00076916) text_secondary_cp61

0x48d3,	// (0x00076995) navi_pane_cams_g5

0x494f,	// (0x00076a11) navi_pane_im_t1

0x495d,	// (0x00076a1f) navi_pane_mp_g1_ParamLimits

0x495d,	// (0x00076a1f) navi_pane_mp_g1

0x4971,	// (0x00076a33) navi_pane_mp_g2_ParamLimits

0x4971,	// (0x00076a33) navi_pane_mp_g2

0x497d,	// (0x00076a3f) navi_pane_mp_g3_ParamLimits

0x497d,	// (0x00076a3f) navi_pane_mp_g3

0x0002,

0xf35c,	// (0x0008141e) navi_pane_mp_g_ParamLimits

0xf35c,	// (0x0008141e) navi_pane_mp_g

0x4989,	// (0x00076a4b) navi_pane_mp_t1

0x4997,	// (0x00076a59) navi_pane_mp_t2

0x0002,

0xf363,	// (0x00081425) navi_pane_mp_t

0x4a44,	// (0x00076b06) navi_pane_vt_g1

0x4989,	// (0x00076a4b) navi_pane_vt_t1

0x4a4c,	// (0x00076b0e) navi_slider_pane

0x2ac6,	// (0x00074b88) zooming_pane

0x4a5c,	// (0x00076b1e) navi_slider_pane_g1

0xa969,	// (0x0007ca2b) navi_slider_pane_g2

0x0006,

0xf36a,	// (0x0008142c) navi_slider_pane_g

0x4a80,	// (0x00076b42) aid_levels_zoom

0x4a88,	// (0x00076b4a) zooming_pane_g1

0x4a90,	// (0x00076b52) zooming_pane_g2

0x4a90,	// (0x00076b52) zooming_pane_g3

0x0002,

0xf379,	// (0x0008143b) zooming_pane_g

0x4a98,	// (0x00076b5a) level_10_zoom

0x4aa1,	// (0x00076b63) level_11_zoom

0x4aaa,	// (0x00076b6c) level_1_zoom

0x4ab3,	// (0x00076b75) level_2_zoom

0x4abc,	// (0x00076b7e) level_3_zoom

0x4ac5,	// (0x00076b87) level_4_zoom

0x4ace,	// (0x00076b90) level_5_zoom

0x4ad7,	// (0x00076b99) level_6_zoom

0x4ae0,	// (0x00076ba2) level_7_zoom

0x4ae9,	// (0x00076bab) level_8_zoom

0x4af2,	// (0x00076bb4) level_9_zoom

0x4b03,	// (0x00076bc5) popup_phob_thumbnail_window_g1

0x4b0b,	// (0x00076bcd) popup_phob_thumbnail_window_g2

0x0001,

0xf380,	// (0x00081442) popup_phob_thumbnail_window_g

0x54de,	// (0x000775a0) level_1_location

0x54e6,	// (0x000775a8) level_2_location

0x54ee,	// (0x000775b0) level_3_location

0x54f6,	// (0x000775b8) level_4_location

0x2ac6,	// (0x00074b88) level_5_location

0x4b13,	// (0x00076bd5) mce_icon_pane_g1

0x4b1b,	// (0x00076bdd) mce_icon_pane_g2

0x0001,

0xf385,	// (0x00081447) mce_icon_pane_g

0x4b23,	// (0x00076be5) main_mup_pane_g1_ParamLimits

0x4b23,	// (0x00076be5) main_mup_pane_g1

0x4b23,	// (0x00076be5) main_mup_pane_g2_ParamLimits

0x4b23,	// (0x00076be5) main_mup_pane_g2

0x4b23,	// (0x00076be5) main_mup_pane_g3_ParamLimits

0x4b23,	// (0x00076be5) main_mup_pane_g3

0x4b23,	// (0x00076be5) main_mup_pane_g4_ParamLimits

0x4b23,	// (0x00076be5) main_mup_pane_g4

0x4b23,	// (0x00076be5) main_mup_pane_g5_ParamLimits

0x4b23,	// (0x00076be5) main_mup_pane_g5

0x4b23,	// (0x00076be5) main_mup_pane_g6_ParamLimits

0x4b23,	// (0x00076be5) main_mup_pane_g6

0x4b23,	// (0x00076be5) main_mup_pane_g7_ParamLimits

0x4b23,	// (0x00076be5) main_mup_pane_g7

0x4b23,	// (0x00076be5) main_mup_pane_g8_ParamLimits

0x4b23,	// (0x00076be5) main_mup_pane_g8

0x4b23,	// (0x00076be5) main_mup_pane_g9_ParamLimits

0x4b23,	// (0x00076be5) main_mup_pane_g9

0x4b23,	// (0x00076be5) main_mup_pane_g10_ParamLimits

0x4b23,	// (0x00076be5) main_mup_pane_g10

0x4b23,	// (0x00076be5) main_mup_pane_g11_ParamLimits

0x4b23,	// (0x00076be5) main_mup_pane_g11

0x2002,	// (0x000740c4) main_mup_pane_g12_ParamLimits

0x2002,	// (0x000740c4) main_mup_pane_g12

0x4b23,	// (0x00076be5) main_mup_pane_g13_ParamLimits

0x4b23,	// (0x00076be5) main_mup_pane_g13

0x000c,

0xf38a,	// (0x0008144c) main_mup_pane_g_ParamLimits

0xf38a,	// (0x0008144c) main_mup_pane_g

0xa97b,	// (0x0007ca3d) main_mup_pane_t1_ParamLimits

0xa97b,	// (0x0007ca3d) main_mup_pane_t1

0xa97b,	// (0x0007ca3d) main_mup_pane_t2_ParamLimits

0xa97b,	// (0x0007ca3d) main_mup_pane_t2

0xa97b,	// (0x0007ca3d) main_mup_pane_t3_ParamLimits

0xa97b,	// (0x0007ca3d) main_mup_pane_t3

0x2b2f,	// (0x00074bf1) main_mup_pane_t4_ParamLimits

0x2b2f,	// (0x00074bf1) main_mup_pane_t4

0x2b2f,	// (0x00074bf1) main_mup_pane_t5_ParamLimits

0x2b2f,	// (0x00074bf1) main_mup_pane_t5

0xa98f,	// (0x0007ca51) main_mup_pane_t6_ParamLimits

0xa98f,	// (0x0007ca51) main_mup_pane_t6

0x0005,

0xf3a5,	// (0x00081467) main_mup_pane_t_ParamLimits

0xf3a5,	// (0x00081467) main_mup_pane_t

0x1ff4,	// (0x000740b6) mup_progress_pane_ParamLimits

0x1ff4,	// (0x000740b6) mup_progress_pane

0xa9a3,	// (0x0007ca65) mup_visualizer_pane_ParamLimits

0xa9a3,	// (0x0007ca65) mup_visualizer_pane

0xa9a3,	// (0x0007ca65) mup_volume_pane_ParamLimits

0xa9a3,	// (0x0007ca65) mup_volume_pane

0x2010,	// (0x000740d2) mup_visualizer_pane_g1_ParamLimits

0x2010,	// (0x000740d2) mup_visualizer_pane_g1

0xa9b1,	// (0x0007ca73) mup_visualizer_pane_g2_ParamLimits

0xa9b1,	// (0x0007ca73) mup_visualizer_pane_g2

0x2002,	// (0x000740c4) mup_visualizer_pane_g3_ParamLimits

0x2002,	// (0x000740c4) mup_visualizer_pane_g3

0x0002,

0xf3b2,	// (0x00081474) mup_visualizer_pane_g_ParamLimits

0xf3b2,	// (0x00081474) mup_visualizer_pane_g

0x2cb3,	// (0x00074d75) mup_volume_pane_g1

0x2cb3,	// (0x00074d75) mup_volume_pane_g2

0x0001,

0xf3b9,	// (0x0008147b) mup_volume_pane_g

0x2cb3,	// (0x00074d75) mup_progress_pane_g1

0x2cb3,	// (0x00074d75) mup_progress_pane_g2

0x2cb3,	// (0x00074d75) mup_progress_pane_g3

0x0002,

0xf3be,	// (0x00081480) mup_progress_pane_g

0x1d2c,	// (0x00073dee) bg_popup_window_pane_cp05

0xa9bf,	// (0x0007ca81) heading_pane_cp02_ParamLimits

0xa9bf,	// (0x0007ca81) heading_pane_cp02

0xa9d9,	// (0x0007ca9b) list_popup_blid_pane

0xa9e1,	// (0x0007caa3) list_blid_sat_info_pane_ParamLimits

0xa9e1,	// (0x0007caa3) list_blid_sat_info_pane

0xa9f4,	// (0x0007cab6) list_blid_sat_info_pane_g1

0xa9fc,	// (0x0007cabe) list_blid_sat_info_pane_t1

0x4c29,	// (0x00076ceb) mup_equalizer_pane_ParamLimits

0x4c29,	// (0x00076ceb) mup_equalizer_pane

0x4c42,	// (0x00076d04) mup_equalizer_pane_cp1_ParamLimits

0x4c42,	// (0x00076d04) mup_equalizer_pane_cp1

0x4c5f,	// (0x00076d21) mup_equalizer_pane_cp2_ParamLimits

0x4c5f,	// (0x00076d21) mup_equalizer_pane_cp2

0x4c7c,	// (0x00076d3e) mup_equalizer_pane_cp3_ParamLimits

0x4c7c,	// (0x00076d3e) mup_equalizer_pane_cp3

0x4c9d,	// (0x00076d5f) mup_equalizer_pane_cp4_ParamLimits

0x4c9d,	// (0x00076d5f) mup_equalizer_pane_cp4

0x4cbe,	// (0x00076d80) mup_equalizer_pane_cp5

0x4cd2,	// (0x00076d94) mup_equalizer_pane_cp6

0x4ce6,	// (0x00076da8) mup_equalizer_pane_cp7

0xbb86,	// (0x0007dc48) bg_popup_call_poc_act_pane_g9

0xbb8e,	// (0x0007dc50) bg_popup_call_poc_act_pane_g10

0xbb96,	// (0x0007dc58) bg_popup_call_poc_act_pane_g11

0x000a,

0x1f87,	// (0x00074049) mup_scale_pane

0x1f9f,	// (0x00074061) mup_scale_pane_g1

0xaa0a,	// (0x0007cacc) mup_scale_pane_g2

0x0006,

0xf3da,	// (0x0008149c) mup_scale_pane_g

0xaa2e,	// (0x0007caf0) msg_data_pane

0xaa36,	// (0x0007caf8) scroll_pane_cp017

0x0df6,	// (0x00072eb8) bg_list_pane_cp04_ParamLimits

0x0df6,	// (0x00072eb8) bg_list_pane_cp04

0xaa3e,	// (0x0007cb00) msg_data_pane_g1

0x4d0c,	// (0x00076dce) msg_data_pane_g2

0x4d16,	// (0x00076dd8) msg_data_pane_g3

0x4d1e,	// (0x00076de0) msg_data_pane_g4

0x4d26,	// (0x00076de8) msg_data_pane_g5

0x4d2e,	// (0x00076df0) msg_data_pane_g6

0x4d36,	// (0x00076df8) msg_data_pane_g7

0x0006,

0xf3e9,	// (0x000814ab) msg_data_pane_g

0x0e16,	// (0x00072ed8) msg_text_pane_ParamLimits

0x0e16,	// (0x00072ed8) msg_text_pane

0x4d3e,	// (0x00076e00) qrid_highlight_pane_cp011_ParamLimits

0x4d3e,	// (0x00076e00) qrid_highlight_pane_cp011

0x1d2c,	// (0x00073dee) msg_body_pane

0x1d2c,	// (0x00073dee) msg_header_pane

0xaa4f,	// (0x0007cb11) input_focus_pane_cp07

0x0e4d,	// (0x00072f0f) msg_header_pane_t1_ParamLimits

0x0e4d,	// (0x00072f0f) msg_header_pane_t1

0x0e63,	// (0x00072f25) msg_header_pane_t2_ParamLimits

0x0e63,	// (0x00072f25) msg_header_pane_t2

0x0001,

0xf3fd,	// (0x000814bf) msg_header_pane_t_ParamLimits

0xf3fd,	// (0x000814bf) msg_header_pane_t

0xaa64,	// (0x0007cb26) msg_body_pane_g1

0x0e7a,	// (0x00072f3c) msg_body_pane_t1_ParamLimits

0x0e7a,	// (0x00072f3c) msg_body_pane_t1

0x0eab,	// (0x00072f6d) msg_body_pane_t2_ParamLimits

0x0eab,	// (0x00072f6d) msg_body_pane_t2

0x0ebd,	// (0x00072f7f) msg_body_pane_t3_ParamLimits

0x0ebd,	// (0x00072f7f) msg_body_pane_t3

0x0002,

0xf402,	// (0x000814c4) msg_body_pane_t_ParamLimits

0xf402,	// (0x000814c4) msg_body_pane_t

0x4d8e,	// (0x00076e50) main_viewer_pane_g1_ParamLimits

0x4d8e,	// (0x00076e50) main_viewer_pane_g1

0x4d9c,	// (0x00076e5e) main_viewer_pane_g2_ParamLimits

0x4d9c,	// (0x00076e5e) main_viewer_pane_g2

0x4daa,	// (0x00076e6c) main_viewer_pane_g3_ParamLimits

0x4daa,	// (0x00076e6c) main_viewer_pane_g3

0x4db9,	// (0x00076e7b) main_viewer_pane_g4_ParamLimits

0x4db9,	// (0x00076e7b) main_viewer_pane_g4

0xaa84,	// (0x0007cb46) main_viewer_pane_g5_ParamLimits

0xaa84,	// (0x0007cb46) main_viewer_pane_g5

0xaa84,	// (0x0007cb46) main_viewer_pane_g7_ParamLimits

0xaa84,	// (0x0007cb46) main_viewer_pane_g7

0xaa96,	// (0x0007cb58) main_viewer_pane_g8_ParamLimits

0xaa96,	// (0x0007cb58) main_viewer_pane_g8

0x0007,

0xf412,	// (0x000814d4) main_viewer_pane_g_ParamLimits

0xf412,	// (0x000814d4) main_viewer_pane_g

0xaaae,	// (0x0007cb70) viewer_content_pane_ParamLimits

0xaaae,	// (0x0007cb70) viewer_content_pane

0x4df5,	// (0x00076eb7) main_postcard_pane_g1_ParamLimits

0x4df5,	// (0x00076eb7) main_postcard_pane_g1

0x4e0b,	// (0x00076ecd) main_postcard_pane_g2_ParamLimits

0x4e0b,	// (0x00076ecd) main_postcard_pane_g2

0x4e21,	// (0x00076ee3) main_postcard_pane_g3_ParamLimits

0x4e21,	// (0x00076ee3) main_postcard_pane_g3

0x0005,

0xf423,	// (0x000814e5) main_postcard_pane_g_ParamLimits

0xf423,	// (0x000814e5) main_postcard_pane_g

0x4e38,	// (0x00076efa) main_postcard_pane_g4

0xbd1e,	// (0x0007dde0) smil_status_volume_pane_g2

0x4e7b,	// (0x00076f3d) postcard_pane_ParamLimits

0x4e7b,	// (0x00076f3d) postcard_pane

0xaabc,	// (0x0007cb7e) postcard_pane_g1_ParamLimits

0xaabc,	// (0x0007cb7e) postcard_pane_g1

0x4ebd,	// (0x00076f7f) postcard_pane_g2_ParamLimits

0x4ebd,	// (0x00076f7f) postcard_pane_g2

0x4ec9,	// (0x00076f8b) postcard_pane_g3_ParamLimits

0x4ec9,	// (0x00076f8b) postcard_pane_g3

0xaaca,	// (0x0007cb8c) postcard_pane_g4_ParamLimits

0xaaca,	// (0x0007cb8c) postcard_pane_g4

0x4ed5,	// (0x00076f97) postcard_pane_g5_ParamLimits

0x4ed5,	// (0x00076f97) postcard_pane_g5

0x4eea,	// (0x00076fac) postcard_pane_g6_ParamLimits

0x4eea,	// (0x00076fac) postcard_pane_g6

0xaabc,	// (0x0007cb7e) postcard_pane_g7_ParamLimits

0xaabc,	// (0x0007cb7e) postcard_pane_g7

0x0006,

0xf430,	// (0x000814f2) postcard_pane_g_ParamLimits

0xf430,	// (0x000814f2) postcard_pane_g

0x4efe,	// (0x00076fc0) main_mp2_pane_g1_ParamLimits

0x4efe,	// (0x00076fc0) main_mp2_pane_g1

0x4f0a,	// (0x00076fcc) main_mp2_pane_g2_ParamLimits

0x4f0a,	// (0x00076fcc) main_mp2_pane_g2

0x4f16,	// (0x00076fd8) main_mp2_pane_g3_ParamLimits

0x4f16,	// (0x00076fd8) main_mp2_pane_g3

0x0002,

0xf43f,	// (0x00081501) main_mp2_pane_g_ParamLimits

0xf43f,	// (0x00081501) main_mp2_pane_g

0x4f22,	// (0x00076fe4) main_mp2_pane_t1_ParamLimits

0x4f22,	// (0x00076fe4) main_mp2_pane_t1

0x4f37,	// (0x00076ff9) main_mp2_pane_t2_ParamLimits

0x4f37,	// (0x00076ff9) main_mp2_pane_t2

0x4f49,	// (0x0007700b) main_mp2_pane_t3_ParamLimits

0x4f49,	// (0x0007700b) main_mp2_pane_t3

0x0002,

0xf446,	// (0x00081508) main_mp2_pane_t_ParamLimits

0xf446,	// (0x00081508) main_mp2_pane_t

0xaad8,	// (0x0007cb9a) pec_content_pane_ParamLimits

0xaad8,	// (0x0007cb9a) pec_content_pane

0x3292,	// (0x00075354) scroll_pane_cp015

0xaaea,	// (0x0007cbac) pec_attribute_pane_ParamLimits

0xaaea,	// (0x0007cbac) pec_attribute_pane

0x4f5b,	// (0x0007701d) pec_content_pane_g1_ParamLimits

0x4f5b,	// (0x0007701d) pec_content_pane_g1

0xaafa,	// (0x0007cbbc) pec_content_pane_t1_ParamLimits

0xaafa,	// (0x0007cbbc) pec_content_pane_t1

0xab0c,	// (0x0007cbce) pec_content_pane_t2_ParamLimits

0xab0c,	// (0x0007cbce) pec_content_pane_t2

0x0001,

0xf44d,	// (0x0008150f) pec_content_pane_t_ParamLimits

0xf44d,	// (0x0008150f) pec_content_pane_t

0x4f67,	// (0x00077029) list_single_graphic_pane_cp01_ParamLimits

0x4f67,	// (0x00077029) list_single_graphic_pane_cp01

0x1f87,	// (0x00074049) bg_popup_sub_pane_cp04

0xab1e,	// (0x0007cbe0) popup_mup_playback_window_g1

0xab2a,	// (0x0007cbec) popup_mup_playback_window_t1

0xab3f,	// (0x0007cc01) popup_mup_playback_window_t2

0x0001,

0xf452,	// (0x00081514) popup_mup_playback_window_t

0xab76,	// (0x0007cc38) main_image_pane_g1_ParamLimits

0xab76,	// (0x0007cc38) main_image_pane_g1

0xabb9,	// (0x0007cc7b) scroll_pane_cp018_ParamLimits

0xabb9,	// (0x0007cc7b) scroll_pane_cp018

0xabd1,	// (0x0007cc93) scroll_pane_cp016_ParamLimits

0xabd1,	// (0x0007cc93) scroll_pane_cp016

0x5034,	// (0x000770f6) smil2_image_pane_ParamLimits

0x5034,	// (0x000770f6) smil2_image_pane

0x5064,	// (0x00077126) smil2_root_pane_ParamLimits

0x5064,	// (0x00077126) smil2_root_pane

0x509c,	// (0x0007715e) smil2_text_pane_ParamLimits

0x509c,	// (0x0007715e) smil2_text_pane

0x1d2c,	// (0x00073dee) bg_list_pane_cp06

0xac0d,	// (0x0007cccf) grid_radio_pane

0x1d2c,	// (0x00073dee) bg_popup_window_pane_cp06

0xac15,	// (0x0007ccd7) main_fmradio_pane_t1

0xbb9e,	// (0x0007dc60) heading_pane_cp04

0xac23,	// (0x0007cce5) main_fmradio_pane_t2

0xbba6,	// (0x0007dc68) popup_cale_lunar_info_window_g1

0xac31,	// (0x0007ccf3) main_fmradio_pane_t3

0xbbae,	// (0x0007dc70) popup_cale_lunar_info_window_g2

0xac3f,	// (0x0007cd01) main_fmradio_pane_t4

0x0001,

0xac4d,	// (0x0007cd0f) main_fmradio_pane_t5

0x0004,

0xf532,	// (0x000815f4) popup_cale_lunar_info_window_g

0xf467,	// (0x00081529) main_fmradio_pane_t

0xac5b,	// (0x0007cd1d) wait_bar_pane_cp03

0xac63,	// (0x0007cd25) cell_fmradio_pane_ParamLimits

0xac63,	// (0x0007cd25) cell_fmradio_pane

0xaabc,	// (0x0007cb7e) cell_fmradio_pane_g1_ParamLimits

0xaabc,	// (0x0007cb7e) cell_fmradio_pane_g1

0x1d2c,	// (0x00073dee) grid_highlight_pane_cp011

0xac76,	// (0x0007cd38) poc_content_pane_ParamLimits

0xac76,	// (0x0007cd38) poc_content_pane

0xac88,	// (0x0007cd4a) scroll_pane_cp019

0x511c,	// (0x000771de) popup_call_poc_act_window_ParamLimits

0x511c,	// (0x000771de) popup_call_poc_act_window

0x5140,	// (0x00077202) popup_call_poc_inact_window_ParamLimits

0x5140,	// (0x00077202) popup_call_poc_inact_window

0xf509,	// (0x000815cb) bg_popup_call_poc_act_pane_g

0xbb16,	// (0x0007dbd8) bg_popup_call_poc_inact_pane_g1

0xbb1e,	// (0x0007dbe0) bg_popup_call_poc_inact_pane_g2

0xac90,	// (0x0007cd52) popup_call_poc_act_window_g2

0xbb26,	// (0x0007dbe8) bg_popup_call_poc_inact_pane_g3

0xbb2e,	// (0x0007dbf0) bg_popup_call_poc_inact_pane_g4

0xbb36,	// (0x0007dbf8) bg_popup_call_poc_inact_pane_g5

0xac98,	// (0x0007cd5a) popup_call_poc_act_window_t1_ParamLimits

0xac98,	// (0x0007cd5a) popup_call_poc_act_window_t1

0xacc0,	// (0x0007cd82) popup_call_poc_act_window_t2_ParamLimits

0xacc0,	// (0x0007cd82) popup_call_poc_act_window_t2

0xace8,	// (0x0007cdaa) popup_call_poc_act_window_t3_ParamLimits

0xace8,	// (0x0007cdaa) popup_call_poc_act_window_t3

0xad10,	// (0x0007cdd2) popup_call_poc_act_window_t4_ParamLimits

0xad10,	// (0x0007cdd2) popup_call_poc_act_window_t4

0x0003,

0xf472,	// (0x00081534) popup_call_poc_act_window_t_ParamLimits

0xf472,	// (0x00081534) popup_call_poc_act_window_t

0xbb3e,	// (0x0007dc00) bg_popup_call_poc_inact_pane_g6

0xbb46,	// (0x0007dc08) bg_popup_call_poc_inact_pane_g7

0xbb4e,	// (0x0007dc10) bg_popup_call_poc_inact_pane_g8

0xad22,	// (0x0007cde4) popup_call_poc_inact_window_g2

0xbb56,	// (0x0007dc18) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4f6,	// (0x000815b8) bg_popup_call_poc_inact_pane_g

0xad2a,	// (0x0007cdec) popup_call_poc_inact_window_t1_ParamLimits

0xad2a,	// (0x0007cdec) popup_call_poc_inact_window_t1

0xad3f,	// (0x0007ce01) popup_call_poc_inact_window_t2_ParamLimits

0xad3f,	// (0x0007ce01) popup_call_poc_inact_window_t2

0xad54,	// (0x0007ce16) popup_call_poc_inact_window_t3_ParamLimits

0xad54,	// (0x0007ce16) popup_call_poc_inact_window_t3

0x0002,

0xf47b,	// (0x0008153d) popup_call_poc_inact_window_t_ParamLimits

0xf47b,	// (0x0008153d) popup_call_poc_inact_window_t

0xbc96,	// (0x0007dd58) context_pane_ParamLimits

0x59b0,	// (0x00077a72) signal_pane_ParamLimits

0x2ac6,	// (0x00074b88) main_call2_pane

0xbc6f,	// (0x0007dd31) popup_phob_thumbnail2_window_ParamLimits

0xbc6f,	// (0x0007dd31) popup_phob_thumbnail2_window

0xaa6c,	// (0x0007cb2e) aid_hotspot_pointer_arrow_pane

0xaa74,	// (0x0007cb36) aid_hotspot_pointer_hand_pane

0x54a8,	// (0x0007756a) phob_pre_status_pane_g5

0x1855,	// (0x00073917) cams_zoom_pane_ParamLimits

0x1855,	// (0x00073917) image_vga_pane_ParamLimits

0x2002,	// (0x000740c4) main_camera_pane_g1_ParamLimits

0x2002,	// (0x000740c4) main_camera_pane_g2_ParamLimits

0x2002,	// (0x000740c4) main_camera_pane_g3_ParamLimits

0x2002,	// (0x000740c4) main_camera_pane_g4_ParamLimits

0x2002,	// (0x000740c4) main_camera_pane_g5_ParamLimits

0x2002,	// (0x000740c4) main_camera_pane_g6_ParamLimits

0x2002,	// (0x000740c4) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x0008126d) main_camera_pane_g_ParamLimits

0x2b2f,	// (0x00074bf1) main_camera_pane_t1_ParamLimits

0x2b2f,	// (0x00074bf1) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x0008127e) main_camera_pane_t_ParamLimits

0x1f87,	// (0x00074049) bg_popup_preview_window_pane_cp01_ParamLimits

0x1f87,	// (0x00074049) bg_popup_preview_window_pane_cp01

0xad69,	// (0x0007ce2b) popup_phob_thumbnail2_window_g1_ParamLimits

0xad69,	// (0x0007ce2b) popup_phob_thumbnail2_window_g1

0x1d2c,	// (0x00073dee) call2_cli_visual_pane

0x5174,	// (0x00077236) popup_call2_audio_conf_window_ParamLimits

0x5174,	// (0x00077236) popup_call2_audio_conf_window

0x5194,	// (0x00077256) popup_call2_audio_first_window_ParamLimits

0x5194,	// (0x00077256) popup_call2_audio_first_window

0x522a,	// (0x000772ec) popup_call2_audio_in_window_ParamLimits

0x522a,	// (0x000772ec) popup_call2_audio_in_window

0x5272,	// (0x00077334) popup_call2_audio_out_window_ParamLimits

0x5272,	// (0x00077334) popup_call2_audio_out_window

0x52dc,	// (0x0007739e) popup_call2_audio_second_window_ParamLimits

0x52dc,	// (0x0007739e) popup_call2_audio_second_window

0x5342,	// (0x00077404) popup_call2_audio_wait_window_ParamLimits

0x5342,	// (0x00077404) popup_call2_audio_wait_window

0x1d2c,	// (0x00073dee) bg_popup_call2_act_pane_cp03

0x1f69,	// (0x0007402b) list_conf_pane_cp

0xad75,	// (0x0007ce37) popup_call2_audio_conf_window_t1

0x44e4,	// (0x000765a6) list_single_graphic_popup_conf2_pane_ParamLimits

0x44e4,	// (0x000765a6) list_single_graphic_popup_conf2_pane

0x44f7,	// (0x000765b9) list_highlight_pane_cp04

0xad83,	// (0x0007ce45) list_single_graphic_popup_conf2_pane_g1

0x4508,	// (0x000765ca) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf482,	// (0x00081544) list_single_graphic_popup_conf2_pane_g

0xad8d,	// (0x0007ce4f) list_single_graphic_popup_conf2_pane_t1

0xad9b,	// (0x0007ce5d) bg_popup_call2_act_pane_cp01_ParamLimits

0xad9b,	// (0x0007ce5d) bg_popup_call2_act_pane_cp01

0xae25,	// (0x0007cee7) call_type_pane_cp05_ParamLimits

0xae25,	// (0x0007cee7) call_type_pane_cp05

0xae79,	// (0x0007cf3b) popup_call2_audio_second_window_g1_ParamLimits

0xae79,	// (0x0007cf3b) popup_call2_audio_second_window_g1

0xaecd,	// (0x0007cf8f) popup_call2_audio_second_window_g2_ParamLimits

0xaecd,	// (0x0007cf8f) popup_call2_audio_second_window_g2

0x0002,

0xf487,	// (0x00081549) popup_call2_audio_second_window_g_ParamLimits

0xf487,	// (0x00081549) popup_call2_audio_second_window_g

0xaf32,	// (0x0007cff4) popup_call2_audio_second_window_t1_ParamLimits

0xaf32,	// (0x0007cff4) popup_call2_audio_second_window_t1

0xafed,	// (0x0007d0af) popup_call2_audio_second_window_t2_ParamLimits

0xafed,	// (0x0007d0af) popup_call2_audio_second_window_t2

0xb040,	// (0x0007d102) popup_call2_audio_second_window_t3_ParamLimits

0xb040,	// (0x0007d102) popup_call2_audio_second_window_t3

0x0003,

0xf48e,	// (0x00081550) popup_call2_audio_second_window_t_ParamLimits

0xf48e,	// (0x00081550) popup_call2_audio_second_window_t

0x1d2c,	// (0x00073dee) bg_popup_call2_in_pane_cp02

0x1d36,	// (0x00073df8) call_type_pane_cp04

0x537c,	// (0x0007743e) popup_call2_audio_wait_window_g1

0x5384,	// (0x00077446) popup_call2_audio_wait_window_g2

0x0001,

0xf497,	// (0x00081559) popup_call2_audio_wait_window_g

0x1d4e,	// (0x00073e10) popup_call2_audio_wait_window_t3

0xb133,	// (0x0007d1f5) bg_popup_call2_act_pane_ParamLimits

0xb133,	// (0x0007d1f5) bg_popup_call2_act_pane

0xb1f3,	// (0x0007d2b5) call_type_pane_cp03_ParamLimits

0xb1f3,	// (0x0007d2b5) call_type_pane_cp03

0xb257,	// (0x0007d319) popup_call2_audio_first_window_g1_ParamLimits

0xb257,	// (0x0007d319) popup_call2_audio_first_window_g1

0xb2c7,	// (0x0007d389) popup_call2_audio_first_window_g2_ParamLimits

0xb2c7,	// (0x0007d389) popup_call2_audio_first_window_g2

0xb32b,	// (0x0007d3ed) popup_call2_audio_first_window_g3_ParamLimits

0xb32b,	// (0x0007d3ed) popup_call2_audio_first_window_g3

0x0004,

0xf49c,	// (0x0008155e) popup_call2_audio_first_window_g_ParamLimits

0xf49c,	// (0x0008155e) popup_call2_audio_first_window_g

0xb3b3,	// (0x0007d475) popup_call2_audio_first_window_t1_ParamLimits

0xb3b3,	// (0x0007d475) popup_call2_audio_first_window_t1

0xb4b6,	// (0x0007d578) popup_call2_audio_first_window_t4_ParamLimits

0xb4b6,	// (0x0007d578) popup_call2_audio_first_window_t4

0xb599,	// (0x0007d65b) popup_call2_audio_first_window_t5_ParamLimits

0xb599,	// (0x0007d65b) popup_call2_audio_first_window_t5

0x0003,

0xf4a7,	// (0x00081569) popup_call2_audio_first_window_t_ParamLimits

0xf4a7,	// (0x00081569) popup_call2_audio_first_window_t

0x1f7f,	// (0x00074041) bg_popup_call2_act_pane_g1

0xbbb6,	// (0x0007dc78) popup_cale_lunar_info_window_t1

0xbbc4,	// (0x0007dc86) popup_cale_lunar_info_window_t2

0xbbd2,	// (0x0007dc94) popup_cale_lunar_info_window_t3

0x1d2c,	// (0x00073dee) bg_popup_call2_bubble_pane

0xb69a,	// (0x0007d75c) bg_popup_call2_in_pane_cp01_ParamLimits

0xb69a,	// (0x0007d75c) bg_popup_call2_in_pane_cp01

0x19e4,	// (0x00073aa6) call_type_pane_cp02

0x538c,	// (0x0007744e) popup_call2_audio_out_window_g1_ParamLimits

0x538c,	// (0x0007744e) popup_call2_audio_out_window_g1

0xb6e2,	// (0x0007d7a4) popup_call2_audio_out_window_g2_ParamLimits

0xb6e2,	// (0x0007d7a4) popup_call2_audio_out_window_g2

0x53b8,	// (0x0007747a) popup_call2_audio_out_window_g3_ParamLimits

0x53b8,	// (0x0007747a) popup_call2_audio_out_window_g3

0x0003,

0xf4b0,	// (0x00081572) popup_call2_audio_out_window_g_ParamLimits

0xf4b0,	// (0x00081572) popup_call2_audio_out_window_g

0xb719,	// (0x0007d7db) popup_call2_audio_out_window_t1_ParamLimits

0xb719,	// (0x0007d7db) popup_call2_audio_out_window_t1

0xb778,	// (0x0007d83a) popup_call2_audio_out_window_t2_ParamLimits

0xb778,	// (0x0007d83a) popup_call2_audio_out_window_t2

0xb7cc,	// (0x0007d88e) popup_call2_audio_out_window_t3_ParamLimits

0xb7cc,	// (0x0007d88e) popup_call2_audio_out_window_t3

0xb7e2,	// (0x0007d8a4) popup_call2_audio_out_window_t4_ParamLimits

0xb7e2,	// (0x0007d8a4) popup_call2_audio_out_window_t4

0xb7f8,	// (0x0007d8ba) popup_call2_audio_out_window_t5_ParamLimits

0xb7f8,	// (0x0007d8ba) popup_call2_audio_out_window_t5

0x0005,

0xf4b9,	// (0x0008157b) popup_call2_audio_out_window_t_ParamLimits

0xf4b9,	// (0x0008157b) popup_call2_audio_out_window_t

0xb85c,	// (0x0007d91e) bg_popup_call2_in_pane_ParamLimits

0xb85c,	// (0x0007d91e) bg_popup_call2_in_pane

0xb8b8,	// (0x0007d97a) popup_call2_audio_in_window_g1_ParamLimits

0xb8b8,	// (0x0007d97a) popup_call2_audio_in_window_g1

0xb8f0,	// (0x0007d9b2) popup_call2_audio_in_window_g2_ParamLimits

0xb8f0,	// (0x0007d9b2) popup_call2_audio_in_window_g2

0xb928,	// (0x0007d9ea) popup_call2_audio_in_window_g3_ParamLimits

0xb928,	// (0x0007d9ea) popup_call2_audio_in_window_g3

0x0003,

0xf4c6,	// (0x00081588) popup_call2_audio_in_window_g_ParamLimits

0xf4c6,	// (0x00081588) popup_call2_audio_in_window_g

0xb980,	// (0x0007da42) popup_call2_audio_in_window_t1_ParamLimits

0xb980,	// (0x0007da42) popup_call2_audio_in_window_t1

0xba00,	// (0x0007dac2) popup_call2_audio_in_window_t2_ParamLimits

0xba00,	// (0x0007dac2) popup_call2_audio_in_window_t2

0xba80,	// (0x0007db42) popup_call2_audio_in_window_t3_ParamLimits

0xba80,	// (0x0007db42) popup_call2_audio_in_window_t3

0xba9a,	// (0x0007db5c) popup_call2_audio_in_window_t4_ParamLimits

0xba9a,	// (0x0007db5c) popup_call2_audio_in_window_t4

0xbaac,	// (0x0007db6e) popup_call2_audio_in_window_t5_ParamLimits

0xbaac,	// (0x0007db6e) popup_call2_audio_in_window_t5

0xbac1,	// (0x0007db83) popup_call2_audio_in_window_t6_ParamLimits

0xbac1,	// (0x0007db83) popup_call2_audio_in_window_t6

0x0005,

0xf4cf,	// (0x00081591) popup_call2_audio_in_window_t_ParamLimits

0xf4cf,	// (0x00081591) popup_call2_audio_in_window_t

0x1f7f,	// (0x00074041) bg_popup_call2_in_pane_g1

0xbbe0,	// (0x0007dca2) popup_cale_lunar_info_window_t4

0x0003,

0xf537,	// (0x000815f9) popup_cale_lunar_info_window_t

0x1f87,	// (0x00074049) bg_popup_call2_rect_pane_ParamLimits

0x1f87,	// (0x00074049) bg_popup_call2_rect_pane

0x1d2c,	// (0x00073dee) call2_cli_visual_graphic_pane

0x1d2c,	// (0x00073dee) call2_cli_visual_text_pane

0xbd31,	// (0x0007ddf3) smil_status_volume_pane_g3

0x0002,

0x1f9f,	// (0x00074061) call2_cli_visual_graphic_pane_g1

0x1f9f,	// (0x00074061) call2_cli_visual_graphic_pane_g2

0x1f9f,	// (0x00074061) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4dc,	// (0x0008159e) call2_cli_visual_graphic_pane_g

0xbad6,	// (0x0007db98) bg_popup_call2_rect_pane_g1

0x2461,	// (0x00074523) bg_popup_call2_rect_pane_g2

0xbade,	// (0x0007dba0) bg_popup_call2_rect_pane_g3

0xbae6,	// (0x0007dba8) bg_popup_call2_rect_pane_g4

0xbaee,	// (0x0007dbb0) bg_popup_call2_rect_pane_g5

0xbaf6,	// (0x0007dbb8) bg_popup_call2_rect_pane_g6

0xbafe,	// (0x0007dbc0) bg_popup_call2_rect_pane_g7

0xbb06,	// (0x0007dbc8) bg_popup_call2_rect_pane_g8

0xbb0e,	// (0x0007dbd0) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e3,	// (0x000815a5) bg_popup_call2_rect_pane_g

0xbb16,	// (0x0007dbd8) bg_popup_call2_bubble_pane_g1

0xbb1e,	// (0x0007dbe0) bg_popup_call2_bubble_pane_g2

0xbb26,	// (0x0007dbe8) bg_popup_call2_bubble_pane_g3

0xbb2e,	// (0x0007dbf0) bg_popup_call2_bubble_pane_g4

0xbb36,	// (0x0007dbf8) bg_popup_call2_bubble_pane_g5

0xbb3e,	// (0x0007dc00) bg_popup_call2_bubble_pane_g6

0xbb46,	// (0x0007dc08) bg_popup_call2_bubble_pane_g7

0xbb4e,	// (0x0007dc10) bg_popup_call2_bubble_pane_g8

0xbb56,	// (0x0007dc18) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4f6,	// (0x000815b8) bg_popup_call2_bubble_pane_g

0x24e3,	// (0x000745a5) aid_cale_week_size_cell_pane

0x2b43,	// (0x00074c05) aid_cams_cif_uncrop_pane_ParamLimits

0x2b43,	// (0x00074c05) aid_cams_cif_uncrop_pane

0x2cbd,	// (0x00074d7f) aid_cams_size_cell_ParamLimits

0x2cbd,	// (0x00074d7f) aid_cams_size_cell

0x2cd1,	// (0x00074d93) grid_cams_pane_ParamLimits

0x2ceb,	// (0x00074dad) linegrid_cams_pane_ParamLimits

0x2e21,	// (0x00074ee3) call_video_pane_t1

0x2e3f,	// (0x00074f01) call_video_pane_t2

0x0001,

0xf203,	// (0x000812c5) call_video_pane_t

0x34b8,	// (0x0007557a) aid_cale_month_size_cell_pane_ParamLimits

0x34b8,	// (0x0007557a) aid_cale_month_size_cell_pane

0xf57b,	// (0x0008163d) smil_status_volume_pane_g

0xbd3e,	// (0x0007de00) volume_smil_pane_ParamLimits

0xa7cb,	// (0x0007c88d) aid_popup2_width_pane

0x23b9,	// (0x0007447b) cell_qdial_pane_g4_ParamLimits

0x23b9,	// (0x0007447b) cell_qdial_pane_g4

0x47d2,	// (0x00076894) aid_blid_cardinal_pane_ParamLimits

0x47de,	// (0x000768a0) aid_blid_destination_pane_ParamLimits

0x47de,	// (0x000768a0) aid_blid_destination_pane

0x1f87,	// (0x00074049) bg_popup_call_poc_act_pane_ParamLimits

0x1f87,	// (0x00074049) bg_popup_call_poc_act_pane

0x1f87,	// (0x00074049) bg_popup_call_poc_inact_pane_ParamLimits

0x1f87,	// (0x00074049) bg_popup_call_poc_inact_pane

0xbb5e,	// (0x0007dc20) bg_popup_call_poc_act_pane_g1

0xbb66,	// (0x0007dc28) bg_popup_call_poc_act_pane_g2

0xbb6e,	// (0x0007dc30) bg_popup_call_poc_act_pane_g3

0xbb2e,	// (0x0007dbf0) bg_popup_call_poc_act_pane_g4

0xbb36,	// (0x0007dbf8) bg_popup_call_poc_act_pane_g5

0xbb76,	// (0x0007dc38) bg_popup_call_poc_act_pane_g6

0xbb46,	// (0x0007dc08) bg_popup_call_poc_act_pane_g7

0xbb7e,	// (0x0007dc40) bg_popup_call_poc_act_pane_g8

0x1d2c,	// (0x00073dee) main_usb_pane

0xbc4a,	// (0x0007dd0c) popup_cale_lunar_info_window

0x3179,	// (0x0007523b) im_reading_pane_t1_ParamLimits

0x31b2,	// (0x00075274) list_im_pane_ParamLimits

0x31c3,	// (0x00075285) scroll_pane_cp07_ParamLimits

0x1d2c,	// (0x00073dee) grid_highlight_pane_cp012

0x1f87,	// (0x00074049) mup_scale_pane_ParamLimits

0xaabc,	// (0x0007cb7e) main_usb_pane_g1_ParamLimits

0xaabc,	// (0x0007cb7e) main_usb_pane_g1

0x5406,	// (0x000774c8) main_usb_pane_g2_ParamLimits

0x5406,	// (0x000774c8) main_usb_pane_g2

0x0001,

0xf520,	// (0x000815e2) main_usb_pane_g_ParamLimits

0xf520,	// (0x000815e2) main_usb_pane_g

0x541c,	// (0x000774de) main_usb_pane_t1_ParamLimits

0x541c,	// (0x000774de) main_usb_pane_t1

0x542e,	// (0x000774f0) main_usb_pane_t2_ParamLimits

0x542e,	// (0x000774f0) main_usb_pane_t2

0x5440,	// (0x00077502) main_usb_pane_t3_ParamLimits

0x5440,	// (0x00077502) main_usb_pane_t3

0x5452,	// (0x00077514) main_usb_pane_t4_ParamLimits

0x5452,	// (0x00077514) main_usb_pane_t4

0x5464,	// (0x00077526) main_usb_pane_t5_ParamLimits

0x5464,	// (0x00077526) main_usb_pane_t5

0x5476,	// (0x00077538) main_usb_pane_t6_ParamLimits

0x5476,	// (0x00077538) main_usb_pane_t6

0x0005,

0xf525,	// (0x000815e7) main_usb_pane_t_ParamLimits

0x4781,	// (0x00076843) aid_text_placing

0x478a,	// (0x0007684c) main_location2_pane_t1_ParamLimits

0x479c,	// (0x0007685e) main_location2_pane_t2_ParamLimits

0x47ae,	// (0x00076870) main_location2_pane_t3_ParamLimits

0x47c0,	// (0x00076882) main_location2_pane_t4_ParamLimits

0x47c0,	// (0x00076882) main_location2_pane_t4

0xf33f,	// (0x00081401) main_location2_pane_t_ParamLimits

0x1fb5,	// (0x00074077) find_pinb_pane_g2_ParamLimits

0x1fb5,	// (0x00074077) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00081182) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00081182) find_pinb_pane_g

0x1fc1,	// (0x00074083) find_pinb_pane_t1_ParamLimits

0x1fd3,	// (0x00074095) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x00081187) find_pinb_pane_t_ParamLimits

0x1d2c,	// (0x00073dee) main_call3_pane

0x39e2,	// (0x00075aa4) cale_month_day_heading_pane_t1_ParamLimits

0x3a68,	// (0x00075b2a) cale_month_day_heading_pane_t2_ParamLimits

0x3ae1,	// (0x00075ba3) cale_month_day_heading_pane_t3_ParamLimits

0x3b5a,	// (0x00075c1c) cale_month_day_heading_pane_t4_ParamLimits

0x3bdb,	// (0x00075c9d) cale_month_day_heading_pane_t5_ParamLimits

0x3c64,	// (0x00075d26) cale_month_day_heading_pane_t6_ParamLimits

0x3ced,	// (0x00075daf) cale_month_day_heading_pane_t7_ParamLimits

0xf23b,	// (0x000812fd) cale_month_day_heading_pane_t_ParamLimits

0x3f99,	// (0x0007605b) smil_status_volume_pane

0x4e99,	// (0x00076f5b) postcard_address_pane_ParamLimits

0x4e99,	// (0x00076f5b) postcard_address_pane

0x4eab,	// (0x00076f6d) postcard_message_pane_ParamLimits

0x4eab,	// (0x00076f6d) postcard_message_pane

0x53e4,	// (0x000774a6) call2_cli_visual_pane_t1_ParamLimits

0x53e4,	// (0x000774a6) call2_cli_visual_pane_t1

0xbd6b,	// (0x0007de2d) postcard_message_pane_t1_ParamLimits

0xbd6b,	// (0x0007de2d) postcard_message_pane_t1

0xbd53,	// (0x0007de15) postcard_address_pane_t1_ParamLimits

0xbd53,	// (0x0007de15) postcard_address_pane_t1

0x5b62,	// (0x00077c24) popup_call3_audio_in_window_ParamLimits

0x5b62,	// (0x00077c24) popup_call3_audio_in_window

0x59ed,	// (0x00077aaf) bg_popup_call3_in_pane_ParamLimits

0x59ed,	// (0x00077aaf) bg_popup_call3_in_pane

0x5a63,	// (0x00077b25) popup_call3_audio_in_window_g1_ParamLimits

0x5a63,	// (0x00077b25) popup_call3_audio_in_window_g1

0x5a83,	// (0x00077b45) popup_call3_audio_in_window_g2_ParamLimits

0x5a83,	// (0x00077b45) popup_call3_audio_in_window_g2

0x5aa3,	// (0x00077b65) popup_call3_audio_in_window_g3_ParamLimits

0x5aa3,	// (0x00077b65) popup_call3_audio_in_window_g3

0x0003,

0xf582,	// (0x00081644) popup_call3_audio_in_window_g_ParamLimits

0xf582,	// (0x00081644) popup_call3_audio_in_window_g

0x5ad4,	// (0x00077b96) popup_call3_audio_in_window_t1_ParamLimits

0x5ad4,	// (0x00077b96) popup_call3_audio_in_window_t1

0x5b12,	// (0x00077bd4) popup_call3_audio_in_window_t2_ParamLimits

0x5b12,	// (0x00077bd4) popup_call3_audio_in_window_t2

0x5b50,	// (0x00077c12) popup_call3_audio_in_window_t3_ParamLimits

0x5b50,	// (0x00077c12) popup_call3_audio_in_window_t3

0x0002,

0xf58b,	// (0x0008164d) popup_call3_audio_in_window_t_ParamLimits

0xf58b,	// (0x0008164d) popup_call3_audio_in_window_t

0x2ac6,	// (0x00074b88) bg_popup_call3_rect_pane

0xbad6,	// (0x0007db98) bg_popup_call3_rect_pane_g1

0x2461,	// (0x00074523) bg_popup_call3_rect_pane_g2

0xbade,	// (0x0007dba0) bg_popup_call3_rect_pane_g3

0xbae6,	// (0x0007dba8) bg_popup_call3_rect_pane_g4

0xbaee,	// (0x0007dbb0) bg_popup_call3_rect_pane_g5

0xbaf6,	// (0x0007dbb8) bg_popup_call3_rect_pane_g6

0xbafe,	// (0x0007dbc0) bg_popup_call3_rect_pane_g7

0x162a,	// (0x000736ec) mup_visualizer_osc_pane

0x162a,	// (0x000736ec) mup_visualizer_spec_pane

0x5a1d,	// (0x00077adf) call3_video_qcif_pane_ParamLimits

0x5a1d,	// (0x00077adf) call3_video_qcif_pane

0x5a30,	// (0x00077af2) call3_video_qcif_uncrop_pane_ParamLimits

0x5a30,	// (0x00077af2) call3_video_qcif_uncrop_pane

0x5a3e,	// (0x00077b00) call3_video_subqcif_pane_ParamLimits

0x5a3e,	// (0x00077b00) call3_video_subqcif_pane

0x5a52,	// (0x00077b14) call3_video_subqcif_uncrop_pane_ParamLimits

0x5a52,	// (0x00077b14) call3_video_subqcif_uncrop_pane

0x5ac3,	// (0x00077b85) popup_call3_audio_in_window_g4_ParamLimits

0x5ac3,	// (0x00077b85) popup_call3_audio_in_window_g4

0x162a,	// (0x000736ec) mup_spec_half_pane

0x162a,	// (0x000736ec) mup_spec_half_pane_cp

0x162a,	// (0x000736ec) mup_osc_middle_pane

0x2cb3,	// (0x00074d75) mup_visualizer_osc_pane_g1

0xbce4,	// (0x0007dda6) mup_spec_bar_pane_ParamLimits

0xbce4,	// (0x0007dda6) mup_spec_bar_pane

0x2cb3,	// (0x00074d75) mup_spec_bar_pane_g1

0x2cb3,	// (0x00074d75) mup_spec_bar_pane_g2

0x0001,

0xf3b9,	// (0x0008147b) mup_spec_bar_pane_g

0x24e3,	// (0x000745a5) aid_cale_week_size_cell_pane_ParamLimits

0x24fd,	// (0x000745bf) bg_cale_heading_pane_ParamLimits

0x2515,	// (0x000745d7) bg_cale_pane_cp01_ParamLimits

0x2532,	// (0x000745f4) cale_week_corner_pane_ParamLimits

0x2551,	// (0x00074613) cale_week_day_heading_pane_ParamLimits

0x256e,	// (0x00074630) cale_week_scroll_pane_g1_ParamLimits

0x2581,	// (0x00074643) cale_week_scroll_pane_g2_ParamLimits

0x2599,	// (0x0007465b) cale_week_scroll_pane_g3_ParamLimits

0x25b1,	// (0x00074673) cale_week_scroll_pane_g4_ParamLimits

0x25c9,	// (0x0007468b) cale_week_scroll_pane_g5_ParamLimits

0x25e9,	// (0x000746ab) cale_week_scroll_pane_g6_ParamLimits

0x2609,	// (0x000746cb) cale_week_scroll_pane_g7_ParamLimits

0x2629,	// (0x000746eb) cale_week_scroll_pane_g8_ParamLimits

0x264d,	// (0x0007470f) cale_week_scroll_pane_g9_ParamLimits

0x2665,	// (0x00074727) cale_week_scroll_pane_g10_ParamLimits

0x267d,	// (0x0007473f) cale_week_scroll_pane_g11_ParamLimits

0x2695,	// (0x00074757) cale_week_scroll_pane_g12_ParamLimits

0x26ad,	// (0x0007476f) cale_week_scroll_pane_g13_ParamLimits

0x26ad,	// (0x0007476f) cale_week_scroll_pane_g14_ParamLimits

0x26ad,	// (0x0007476f) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x00081213) cale_week_scroll_pane_g_ParamLimits

0x26e9,	// (0x000747ab) cale_week_time_pane_ParamLimits

0x270d,	// (0x000747cf) grid_cale_week_pane_ParamLimits

0x2733,	// (0x000747f5) listscroll_cale_week_pane_t1

0x2745,	// (0x00074807) scroll_pane_cp08_ParamLimits

0x3545,	// (0x00075607) cale_month_corner_pane_ParamLimits

0x3963,	// (0x00075a25) cale_month_pane_t1

0x3975,	// (0x00075a37) cale_month_week_pane_ParamLimits

0x43f3,	// (0x000764b5) popup_call_status_window_g1_ParamLimits

0x4407,	// (0x000764c9) popup_call_status_window_g2_ParamLimits

0x441b,	// (0x000764dd) popup_call_status_window_g3_ParamLimits

0xf2c6,	// (0x00081388) popup_call_status_window_g_ParamLimits

0x4483,	// (0x00076545) aid_call2_pane

0x0e3f,	// (0x00072f01) msg_header_pane_g1

0x4e99,	// (0x00076f5b) postcard_address2_pane_ParamLimits

0x4e99,	// (0x00076f5b) postcard_address2_pane

0x4eab,	// (0x00076f6d) postcard_message2_pane_ParamLimits

0x4eab,	// (0x00076f6d) postcard_message2_pane

0x59be,	// (0x00077a80) message2_row_pane_ParamLimits

0x59be,	// (0x00077a80) message2_row_pane

0x59da,	// (0x00077a9c) address2_row_pane_ParamLimits

0x59da,	// (0x00077a9c) address2_row_pane

0xbcb1,	// (0x0007dd73) postcard_message2_row_pane_g1

0xbcb9,	// (0x0007dd7b) postcard_message2_row_pane_t1

0xbcb1,	// (0x0007dd73) address2_row_pane_g1

0xbcb9,	// (0x0007dd7b) address2_row_pane_t1

0x2abe,	// (0x00074b80) aid_size_cell_vorec

0x1d2c,	// (0x00073dee) main_rss_pane

0xbcc7,	// (0x0007dd89) rss_list_single_pane_ParamLimits

0xbcc7,	// (0x0007dd89) rss_list_single_pane

0xbcd5,	// (0x0007dd97) rss_list_single_pane_t1

0xbcd5,	// (0x0007dd97) rss_list_single_pane_t2

0x0001,

0xf576,	// (0x00081638) rss_list_single_pane_t

0x1d2c,	// (0x00073dee) main_camera2_pane

0x1d2c,	// (0x00073dee) main_video2_pane

0xbd87,	// (0x0007de49) cams_zoom_pane_cp2_ParamLimits

0xbd87,	// (0x0007de49) cams_zoom_pane_cp2

0xbd87,	// (0x0007de49) image2_vga_pane_ParamLimits

0xbd87,	// (0x0007de49) image2_vga_pane

0xe8c5,	// (0x00080987) main_camera2_pane_g1_ParamLimits

0xe8c5,	// (0x00080987) main_camera2_pane_g1

0xe8c5,	// (0x00080987) main_camera2_pane_g2_ParamLimits

0xe8c5,	// (0x00080987) main_camera2_pane_g2

0xe8c5,	// (0x00080987) main_camera2_pane_g3_ParamLimits

0xe8c5,	// (0x00080987) main_camera2_pane_g3

0xe8c5,	// (0x00080987) main_camera2_pane_g4_ParamLimits

0xe8c5,	// (0x00080987) main_camera2_pane_g4

0xe8c5,	// (0x00080987) main_camera2_pane_g5_ParamLimits

0xe8c5,	// (0x00080987) main_camera2_pane_g5

0xe8c5,	// (0x00080987) main_camera2_pane_g6_ParamLimits

0xe8c5,	// (0x00080987) main_camera2_pane_g6

0xe8c5,	// (0x00080987) main_camera2_pane_g7_ParamLimits

0xe8c5,	// (0x00080987) main_camera2_pane_g7

0xe8c5,	// (0x00080987) main_camera2_pane_g8_ParamLimits

0xe8c5,	// (0x00080987) main_camera2_pane_g8

0x0008,

0xf592,	// (0x00081654) main_camera2_pane_g_ParamLimits

0xf592,	// (0x00081654) main_camera2_pane_g

0x5b84,	// (0x00077c46) main_camera2_pane_t1_ParamLimits

0x5b84,	// (0x00077c46) main_camera2_pane_t1

0x5b84,	// (0x00077c46) main_camera2_pane_t2_ParamLimits

0x5b84,	// (0x00077c46) main_camera2_pane_t2

0x5b84,	// (0x00077c46) main_camera2_pane_t3_ParamLimits

0x5b84,	// (0x00077c46) main_camera2_pane_t3

0x5b84,	// (0x00077c46) main_camera2_pane_t4_ParamLimits

0x5b84,	// (0x00077c46) main_camera2_pane_t4

0x0006,

0xf5a5,	// (0x00081667) main_camera2_pane_t_ParamLimits

0xf5a5,	// (0x00081667) main_camera2_pane_t

0xee04,	// (0x00080ec6) cams_zoom_pane_cp4_ParamLimits

0xee04,	// (0x00080ec6) cams_zoom_pane_cp4

0xbda9,	// (0x0007de6b) image2_cif_pane_ParamLimits

0xbda9,	// (0x0007de6b) image2_cif_pane

0x1855,	// (0x00073917) image2_subqcif_pane_ParamLimits

0x1855,	// (0x00073917) image2_subqcif_pane

0x5b98,	// (0x00077c5a) main_video2_pane_g1_ParamLimits

0x5b98,	// (0x00077c5a) main_video2_pane_g1

0x5b98,	// (0x00077c5a) main_video2_pane_g2_ParamLimits

0x5b98,	// (0x00077c5a) main_video2_pane_g2

0x5b98,	// (0x00077c5a) main_video2_pane_g3_ParamLimits

0x5b98,	// (0x00077c5a) main_video2_pane_g3

0x5b98,	// (0x00077c5a) main_video2_pane_g4_ParamLimits

0x5b98,	// (0x00077c5a) main_video2_pane_g4

0x5b98,	// (0x00077c5a) main_video2_pane_g5_ParamLimits

0x5b98,	// (0x00077c5a) main_video2_pane_g5

0x5b98,	// (0x00077c5a) main_video2_pane_g6_ParamLimits

0x5b98,	// (0x00077c5a) main_video2_pane_g6

0x0005,

0xf5b4,	// (0x00081676) main_video2_pane_g_ParamLimits

0xf5b4,	// (0x00081676) main_video2_pane_g

0x5ba6,	// (0x00077c68) main_video2_pane_t1_ParamLimits

0x5ba6,	// (0x00077c68) main_video2_pane_t1

0x5ba6,	// (0x00077c68) main_video2_pane_t2_ParamLimits

0x5ba6,	// (0x00077c68) main_video2_pane_t2

0x5ba6,	// (0x00077c68) main_video2_pane_t3_ParamLimits

0x5ba6,	// (0x00077c68) main_video2_pane_t3

0x0002,

0xf5c1,	// (0x00081683) main_video2_pane_t_ParamLimits

0xf5c1,	// (0x00081683) main_video2_pane_t

0x550a,	// (0x000775cc) call_muted_g2

0x0001,

0xf568,	// (0x0008162a) call_muted_g

0x1d2c,	// (0x00073dee) main_mup2_pane

0x4b23,	// (0x00076be5) main_mup2_pane_g1_ParamLimits

0x4b23,	// (0x00076be5) main_mup2_pane_g1

0x4b23,	// (0x00076be5) main_mup2_pane_g2_ParamLimits

0x4b23,	// (0x00076be5) main_mup2_pane_g2

0x2cb3,	// (0x00074d75) main_mup_pane_g13_cp1

0x162a,	// (0x000736ec) mup_volume_pane_cp1

0x4b23,	// (0x00076be5) main_mup2_pane_g4_ParamLimits

0x4b23,	// (0x00076be5) main_mup2_pane_g4

0x4b23,	// (0x00076be5) main_mup2_pane_g5_ParamLimits

0x4b23,	// (0x00076be5) main_mup2_pane_g5

0x4b23,	// (0x00076be5) main_mup2_pane_g6_ParamLimits

0x4b23,	// (0x00076be5) main_mup2_pane_g6

0x4b23,	// (0x00076be5) main_mup2_pane_g7_ParamLimits

0x4b23,	// (0x00076be5) main_mup2_pane_g7

0x0006,

0xf5c8,	// (0x0008168a) main_mup2_pane_g_ParamLimits

0xf5c8,	// (0x0008168a) main_mup2_pane_g

0xa97b,	// (0x0007ca3d) main_mup2_pane_t1_ParamLimits

0xa97b,	// (0x0007ca3d) main_mup2_pane_t1

0xa97b,	// (0x0007ca3d) main_mup2_pane_t2_ParamLimits

0xa97b,	// (0x0007ca3d) main_mup2_pane_t2

0xa97b,	// (0x0007ca3d) main_mup2_pane_t3_ParamLimits

0xa97b,	// (0x0007ca3d) main_mup2_pane_t3

0xa97b,	// (0x0007ca3d) main_mup2_pane_t4_ParamLimits

0xa97b,	// (0x0007ca3d) main_mup2_pane_t4

0xa97b,	// (0x0007ca3d) main_mup2_pane_t5_ParamLimits

0xa97b,	// (0x0007ca3d) main_mup2_pane_t5

0xa97b,	// (0x0007ca3d) main_mup2_pane_t6_ParamLimits

0xa97b,	// (0x0007ca3d) main_mup2_pane_t6

0x0005,

0xf5d7,	// (0x00081699) main_mup2_pane_t_ParamLimits

0xf5d7,	// (0x00081699) main_mup2_pane_t

0xa9a3,	// (0x0007ca65) mup2_visualizer_pane_ParamLimits

0xa9a3,	// (0x0007ca65) mup2_visualizer_pane

0xa9a3,	// (0x0007ca65) mup_progress_pane_cp_ParamLimits

0xa9a3,	// (0x0007ca65) mup_progress_pane_cp

0xbdb7,	// (0x0007de79) mup_volume_pane_cp_ParamLimits

0xbdb7,	// (0x0007de79) mup_volume_pane_cp

0x2002,	// (0x000740c4) mup2_visualizer_pane_g1_ParamLimits

0x2002,	// (0x000740c4) mup2_visualizer_pane_g1

0x2010,	// (0x000740d2) mup2_visualizer_pane_g2_ParamLimits

0x2010,	// (0x000740d2) mup2_visualizer_pane_g2

0x2010,	// (0x000740d2) mup2_visualizer_pane_g3_ParamLimits

0x2010,	// (0x000740d2) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0008118c) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0008118c) mup2_visualizer_pane_g

0xac05,	// (0x0007ccc7) aid_size_cell_fmradio

0x56bc,	// (0x0007777e) aid_height_parent_landcape

0x3279,	// (0x0007533b) wml_content_pane_cp

0x3281,	// (0x00075343) wml_tabs_pane

0x328a,	// (0x0007534c) popup_wml_miniature_window

0x3292,	// (0x00075354) scroll_pane_cp021

0x32a6,	// (0x00075368) wml_content_pane_comp8

0x1d2c,	// (0x00073dee) bg_popup_sub_pane_cp05

0xbdcd,	// (0x0007de8f) popup_wml_miniature_window_g1

0xbdd5,	// (0x0007de97) wml_miniature_view_pane

0x5bba,	// (0x00077c7c) aid_size_wml_view

0x5bc2,	// (0x00077c84) wml_miniature_view_pane_g1

0x5bcb,	// (0x00077c8d) wml_miniature_view_pane_g2

0x5bd4,	// (0x00077c96) wml_miniature_view_pane_g3

0x5bdc,	// (0x00077c9e) wml_miniature_view_pane_g4

0x5be4,	// (0x00077ca6) wml_miniature_view_pane_g5

0x5bec,	// (0x00077cae) wml_miniature_view_pane_g6

0x5bf4,	// (0x00077cb6) wml_miniature_view_pane_g7

0x5bfc,	// (0x00077cbe) wml_miniature_view_pane_g8

0x0007,

0xf5e4,	// (0x000816a6) wml_miniature_view_pane_g

0xbddd,	// (0x0007de9f) background_graphic_ParamLimits

0xbddd,	// (0x0007de9f) background_graphic

0xbde9,	// (0x0007deab) wml_tabs_2_pane

0xbdf2,	// (0x0007deb4) wml_tabs_3_pane_ParamLimits

0xbdf2,	// (0x0007deb4) wml_tabs_3_pane

0xbe04,	// (0x0007dec6) wml_tabs_4_pane_ParamLimits

0xbe04,	// (0x0007dec6) wml_tabs_4_pane

0xbe1a,	// (0x0007dedc) wml_tabs_5_pane_ParamLimits

0xbe1a,	// (0x0007dedc) wml_tabs_5_pane

0xbe34,	// (0x0007def6) wml_tabs_pane_g2_ParamLimits

0xbe34,	// (0x0007def6) wml_tabs_pane_g2

0xbe49,	// (0x0007df0b) wml_tabs_pane_g3_ParamLimits

0xbe49,	// (0x0007df0b) wml_tabs_pane_g3

0xbe5e,	// (0x0007df20) wml_tabs_2_active_pane_ParamLimits

0xbe5e,	// (0x0007df20) wml_tabs_2_active_pane

0xbe5e,	// (0x0007df20) wml_tabs_2_passive_pane_ParamLimits

0xbe5e,	// (0x0007df20) wml_tabs_2_passive_pane

0x5c04,	// (0x00077cc6) wml_tabs_3_active_pane_cp_ParamLimits

0x5c04,	// (0x00077cc6) wml_tabs_3_active_pane_cp

0x5c19,	// (0x00077cdb) wml_tabs_3_passive_pane_ParamLimits

0x5c19,	// (0x00077cdb) wml_tabs_3_passive_pane

0x5c2c,	// (0x00077cee) wml_tabs_3_passive_pane_cp_ParamLimits

0x5c2c,	// (0x00077cee) wml_tabs_3_passive_pane_cp

0x5c43,	// (0x00077d05) tabs_4_active_pane

0x5c4b,	// (0x00077d0d) tabs_4_passive_pane

0x5c55,	// (0x00077d17) tabs_4_passive_pane_cp

0x5c5d,	// (0x00077d1f) tabs_4_passive_pane_cp2

0x53fe,	// (0x000774c0) aid_height_text

0xa9a3,	// (0x0007ca65) mup_volume_cont_pane_ParamLimits

0xa9a3,	// (0x0007ca65) mup_volume_cont_pane

0x162a,	// (0x000736ec) aid_size_cell_pinb

0x162a,	// (0x000736ec) aid_size_list_pinb

0xa9a3,	// (0x0007ca65) mup2_volume_cont_pane_ParamLimits

0xa9a3,	// (0x0007ca65) mup2_volume_cont_pane

0xbe6c,	// (0x0007df2e) mup2_volume_cont_pane_g1_ParamLimits

0xbe6c,	// (0x0007df2e) mup2_volume_cont_pane_g1

0x1634,	// (0x000736f6) aid_size_cell_touch_ParamLimits

0x1634,	// (0x000736f6) aid_size_cell_touch

0x186f,	// (0x00073931) touch_pane_ParamLimits

0x186f,	// (0x00073931) touch_pane

0x162a,	// (0x000736ec) main_rss2_pane

0xbe8b,	// (0x0007df4d) listscroll_rss2_pane

0xbe94,	// (0x0007df56) rss2_navigation_pane

0xbe9c,	// (0x0007df5e) list_rss2_pane

0x460d,	// (0x000766cf) scroll_pane_cp22

0xbea4,	// (0x0007df66) rss2_navigation_pane_g1

0xbead,	// (0x0007df6f) rss2_navigation_pane_g2

0xbeb5,	// (0x0007df77) rss2_navigation_pane_g3

0x0002,

0xf5f5,	// (0x000816b7) rss2_navigation_pane_g

0xbebd,	// (0x0007df7f) rss2_navigation_pane_t1

0x5c67,	// (0x00077d29) rss2_list_single_pane_ParamLimits

0x5c67,	// (0x00077d29) rss2_list_single_pane

0xbecb,	// (0x0007df8d) rss2_list_single_pane_t2

0xbed9,	// (0x0007df9b) rss2_list_single_pane_t3_ParamLimits

0xbed9,	// (0x0007df9b) rss2_list_single_pane_t3

0xbef6,	// (0x0007dfb8) rss2_list_single_pane_t4

0x3f81,	// (0x00076043) smil_status_pane_g1

0x1855,	// (0x00073917) main_image2_pane_ParamLimits

0x1855,	// (0x00073917) main_image2_pane

0xe8c5,	// (0x00080987) main_camera2_pane_g9_ParamLimits

0xe8c5,	// (0x00080987) main_camera2_pane_g9

0x5b84,	// (0x00077c46) main_camera2_pane_t5_ParamLimits

0x5b84,	// (0x00077c46) main_camera2_pane_t5

0xbd95,	// (0x0007de57) main_camera2_pane_t6_ParamLimits

0xbd95,	// (0x0007de57) main_camera2_pane_t6

0x5c7c,	// (0x00077d3e) main_image2_pane_g1_ParamLimits

0x5c7c,	// (0x00077d3e) main_image2_pane_g1

0x50d2,	// (0x00077194) smil2_video_pane_ParamLimits

0x50d2,	// (0x00077194) smil2_video_pane

0xa7e7,	// (0x0007c8a9) aid_zoom_text_primary_cp

0xa826,	// (0x0007c8e8) popup_preview_fixed_window

0x3171,	// (0x00075233) im_reading_pane_g1

0x5b76,	// (0x00077c38) cams2_bc_adjust_pane_cp_ParamLimits

0x5b76,	// (0x00077c38) cams2_bc_adjust_pane_cp

0xa9a3,	// (0x0007ca65) cams2_bc_adjust_pane_ParamLimits

0xa9a3,	// (0x0007ca65) cams2_bc_adjust_pane

0x2cb3,	// (0x00074d75) cams2_bc_adjust_pane_g1

0x162a,	// (0x000736ec) cams2_slider_pane

0x2cb3,	// (0x00074d75) cams2_slider_pane_g1

0x2cb3,	// (0x00074d75) cams2_slider_pane_g2

0x0006,

0xf5fc,	// (0x000816be) cams2_slider_pane_g

0x205e,	// (0x00074120) calc_display_pane_ParamLimits

0x2083,	// (0x00074145) calc_paper_pane_ParamLimits

0x20a6,	// (0x00074168) grid_calc_pane_ParamLimits

0xa94c,	// (0x0007ca0e) popup_clock_digital_window_t1_ParamLimits

0xaba2,	// (0x0007cc64) main_image_pane_t1

0x2040,	// (0x00074102) aid_size_cell_calc_ParamLimits

0x2040,	// (0x00074102) aid_size_cell_calc

0x5702,	// (0x000777c4) popup_blid_sat_info2_window_ParamLimits

0x5702,	// (0x000777c4) popup_blid_sat_info2_window

0xbf04,	// (0x0007dfc6) aid_size_cell_blid

0xbda9,	// (0x0007de6b) bg_popup_window_pane_cp07

0xbf21,	// (0x0007dfe3) grid_popup_blid_pane

0xbf2b,	// (0x0007dfed) heading_pane_cp05_ParamLimits

0xbf2b,	// (0x0007dfed) heading_pane_cp05

0xbff5,	// (0x0007e0b7) cell_popup_blid_pane_ParamLimits

0xbff5,	// (0x0007e0b7) cell_popup_blid_pane

0xc019,	// (0x0007e0db) cell_popup_blid_pane_g1

0xc021,	// (0x0007e0e3) cell_popup_blid_pane_t1

0xa9a3,	// (0x0007ca65) mup2_indicator_pane_ParamLimits

0xa9a3,	// (0x0007ca65) mup2_indicator_pane

0x162a,	// (0x000736ec) mup2_visualizer_osc_pane

0xbdb7,	// (0x0007de79) mup2_visualizer_spec_pane_ParamLimits

0xbdb7,	// (0x0007de79) mup2_visualizer_spec_pane

0x162a,	// (0x000736ec) mup2_spec_half_pane

0x162a,	// (0x000736ec) mup2_spec_half_pane_cp

0xc02f,	// (0x0007e0f1) mup2_spec_bar_pane_ParamLimits

0xc02f,	// (0x0007e0f1) mup2_spec_bar_pane

0x2cb3,	// (0x00074d75) mup2_spec_bar_pane_g1

0xc04e,	// (0x0007e110) mup2_spec_bar_pane_g2

0x0001,

0xf622,	// (0x000816e4) mup2_spec_bar_pane_g

0x162a,	// (0x000736ec) mup2_osc_middle_pane

0x2cb3,	// (0x00074d75) mup2_visualizer_osc_pane_g1

0x18e1,	// (0x000739a3) popup_number_entry_window_t1_ParamLimits

0x18f4,	// (0x000739b6) popup_number_entry_window_t2_ParamLimits

0x1906,	// (0x000739c8) popup_number_entry_window_t3_ParamLimits

0x1918,	// (0x000739da) popup_number_entry_window_t5_ParamLimits

0x1918,	// (0x000739da) popup_number_entry_window_t5

0xf06b,	// (0x0008112d) popup_number_entry_window_t_ParamLimits

0x194c,	// (0x00073a0e) text_title_cp2_ParamLimits

0xaa7c,	// (0x0007cb3e) aid_hotspot_pointer_text2_pane

0xaaa2,	// (0x0007cb64) main_viewer_pane_g9_ParamLimits

0xaaa2,	// (0x0007cb64) main_viewer_pane_g9

0x3963,	// (0x00075a25) cale_month_pane_t1_ParamLimits

0x3ff3,	// (0x000760b5) bg_cale_pane_ParamLimits

0x400b,	// (0x000760cd) list_cale_pane_ParamLimits

0x401c,	// (0x000760de) listscroll_cale_day_pane_t1

0x402e,	// (0x000760f0) scroll_pane_cp09_ParamLimits

0x4b31,	// (0x00076bf3) main_mup_eq_pane_t1_ParamLimits

0x4b31,	// (0x00076bf3) main_mup_eq_pane_t1

0x4b4b,	// (0x00076c0d) main_mup_eq_pane_t2_ParamLimits

0x4b4b,	// (0x00076c0d) main_mup_eq_pane_t2

0x4b65,	// (0x00076c27) main_mup_eq_pane_t3_ParamLimits

0x4b65,	// (0x00076c27) main_mup_eq_pane_t3

0x4b81,	// (0x00076c43) main_mup_eq_pane_t4_ParamLimits

0x4b81,	// (0x00076c43) main_mup_eq_pane_t4

0x4b9d,	// (0x00076c5f) main_mup_eq_pane_t5_ParamLimits

0x4b9d,	// (0x00076c5f) main_mup_eq_pane_t5

0x4bb9,	// (0x00076c7b) main_mup_eq_pane_t6_ParamLimits

0x4bb9,	// (0x00076c7b) main_mup_eq_pane_t6

0x4bcd,	// (0x00076c8f) main_mup_eq_pane_t7_ParamLimits

0x4bcd,	// (0x00076c8f) main_mup_eq_pane_t7

0x4be1,	// (0x00076ca3) main_mup_eq_pane_t8_ParamLimits

0x4be1,	// (0x00076ca3) main_mup_eq_pane_t8

0x4bf5,	// (0x00076cb7) main_mup_eq_pane_t9_ParamLimits

0x4bf5,	// (0x00076cb7) main_mup_eq_pane_t9

0x4c0f,	// (0x00076cd1) main_mup_eq_pane_t10_ParamLimits

0x4c0f,	// (0x00076cd1) main_mup_eq_pane_t10

0x0009,

0xf3c5,	// (0x00081487) main_mup_eq_pane_t_ParamLimits

0xf3c5,	// (0x00081487) main_mup_eq_pane_t

0x4cbe,	// (0x00076d80) mup_equalizer_pane_cp5_ParamLimits

0x4cd2,	// (0x00076d94) mup_equalizer_pane_cp6_ParamLimits

0x4ce6,	// (0x00076da8) mup_equalizer_pane_cp7_ParamLimits

0x162a,	// (0x000736ec) main_gallery_pane

0xbd03,	// (0x0007ddc5) smil2_volume_pane

0xbd0b,	// (0x0007ddcd) smil_status_volume_pane_g1_ParamLimits

0xbd1e,	// (0x0007dde0) smil_status_volume_pane_g2_ParamLimits

0xbd31,	// (0x0007ddf3) smil_status_volume_pane_g3_ParamLimits

0xf57b,	// (0x0008163d) smil_status_volume_pane_g_ParamLimits

0xbda9,	// (0x0007de6b) bg_popup_window_pane_cp07_ParamLimits

0xbf0c,	// (0x0007dfce) blid_firmament_pane

0x1855,	// (0x00073917) aid_size_cell_gallery_ParamLimits

0x1855,	// (0x00073917) aid_size_cell_gallery

0x1855,	// (0x00073917) grid_gallery_pane_ParamLimits

0x1855,	// (0x00073917) grid_gallery_pane

0xbda9,	// (0x0007de6b) cell_gallery_pane_ParamLimits

0xbda9,	// (0x0007de6b) cell_gallery_pane

0x1855,	// (0x00073917) bg_cell_gallery_focus_pane_ParamLimits

0x1855,	// (0x00073917) bg_cell_gallery_focus_pane

0x2002,	// (0x000740c4) cell_gallery_pane_g1_ParamLimits

0x2002,	// (0x000740c4) cell_gallery_pane_g1

0x2002,	// (0x000740c4) cell_gallery_pane_g2_ParamLimits

0x2002,	// (0x000740c4) cell_gallery_pane_g2

0x2002,	// (0x000740c4) cell_gallery_pane_g3_ParamLimits

0x2002,	// (0x000740c4) cell_gallery_pane_g3

0x2010,	// (0x000740d2) cell_gallery_pane_g4_ParamLimits

0x2010,	// (0x000740d2) cell_gallery_pane_g4

0x0003,

0xf627,	// (0x000816e9) cell_gallery_pane_g_ParamLimits

0xf627,	// (0x000816e9) cell_gallery_pane_g

0xc058,	// (0x0007e11a) bg_cell_gallery_focus_pane_g1

0xc060,	// (0x0007e122) bg_cell_gallery_focus_pane_g2

0xc068,	// (0x0007e12a) bg_cell_gallery_focus_pane_g3

0xc070,	// (0x0007e132) bg_cell_gallery_focus_pane_g4

0xc078,	// (0x0007e13a) bg_cell_gallery_focus_pane_g5

0xc080,	// (0x0007e142) bg_cell_gallery_focus_pane_g6

0xc088,	// (0x0007e14a) bg_cell_gallery_focus_pane_g7

0xc090,	// (0x0007e152) bg_cell_gallery_focus_pane_g8

0x0007,

0xf630,	// (0x000816f2) bg_cell_gallery_focus_pane_g

0xc098,	// (0x0007e15a) aid_firma_cardinal

0xc0ac,	// (0x0007e16e) blid_firmament_pane_t1

0xc0c3,	// (0x0007e185) blid_firmament_pane_t2

0xc0da,	// (0x0007e19c) blid_firmament_pane_t3

0xc0f1,	// (0x0007e1b3) blid_firmament_pane_t4

0x0003,

0xf641,	// (0x00081703) blid_firmament_pane_t

0xc108,	// (0x0007e1ca) blid_sat_info_pane

0x2cb3,	// (0x00074d75) blid_sat_info_pane_g1

0x2cb3,	// (0x00074d75) blid_sat_info_pane_g2

0x0001,

0xf3b9,	// (0x0008147b) blid_sat_info_pane_g

0xc118,	// (0x0007e1da) blid_sat_info_pane_t1

0xc126,	// (0x0007e1e8) smil2_volume_content_pane

0xc12f,	// (0x0007e1f1) smil2_volume_pane_g1

0x2356,	// (0x00074418) smil2_volume_content_pane_g1

0xc137,	// (0x0007e1f9) smil2_volume_content_pane_g2

0xc140,	// (0x0007e202) smil2_volume_content_pane_g3

0xc149,	// (0x0007e20b) smil2_volume_content_pane_g4

0xc152,	// (0x0007e214) smil2_volume_content_pane_g5

0xc15b,	// (0x0007e21d) smil2_volume_content_pane_g6

0xc164,	// (0x0007e226) smil2_volume_content_pane_g7

0xc16d,	// (0x0007e22f) smil2_volume_content_pane_g8

0xc176,	// (0x0007e238) smil2_volume_content_pane_g9

0xc17f,	// (0x0007e241) smil2_volume_content_pane_g10

0x0009,

0xf64a,	// (0x0008170c) smil2_volume_content_pane_g

0x27f0,	// (0x000748b2) cale_week_day_heading_pane_t1_ParamLimits

0x281a,	// (0x000748dc) cale_week_day_heading_pane_t2_ParamLimits

0x2849,	// (0x0007490b) cale_week_day_heading_pane_t3_ParamLimits

0x2878,	// (0x0007493a) cale_week_day_heading_pane_t4_ParamLimits

0x28a7,	// (0x00074969) cale_week_day_heading_pane_t5_ParamLimits

0x28de,	// (0x000749a0) cale_week_day_heading_pane_t6_ParamLimits

0x2915,	// (0x000749d7) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x00081234) cale_week_day_heading_pane_t_ParamLimits

0x293f,	// (0x00074a01) bg_cale_side_pane_ParamLimits

0x294d,	// (0x00074a0f) cale_week_time_pane_t1_ParamLimits

0x2967,	// (0x00074a29) cale_week_time_pane_t2_ParamLimits

0x2981,	// (0x00074a43) cale_week_time_pane_t3_ParamLimits

0x299b,	// (0x00074a5d) cale_week_time_pane_t4_ParamLimits

0x29b5,	// (0x00074a77) cale_week_time_pane_t5_ParamLimits

0x29cf,	// (0x00074a91) cale_week_time_pane_t6_ParamLimits

0x29e9,	// (0x00074aab) cale_week_time_pane_t7_ParamLimits

0x2a03,	// (0x00074ac5) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x00081243) cale_week_time_pane_t_ParamLimits

0x2a1d,	// (0x00074adf) cell_cale_week_pane_g2_ParamLimits

0x293f,	// (0x00074a01) bg_cale_side_pane_cp01_ParamLimits

0x3d7e,	// (0x00075e40) cale_month_week_pane_t1_ParamLimits

0x3d97,	// (0x00075e59) cale_month_week_pane_t2_ParamLimits

0x3db0,	// (0x00075e72) cale_month_week_pane_t3_ParamLimits

0x3dc9,	// (0x00075e8b) cale_month_week_pane_t4_ParamLimits

0x3de2,	// (0x00075ea4) cale_month_week_pane_t5_ParamLimits

0x3dfb,	// (0x00075ebd) cale_month_week_pane_t6_ParamLimits

0xf24a,	// (0x0008130c) cale_month_week_pane_t_ParamLimits

0xa8c8,	// (0x0007c98a) cell_cale_month_pane_g1_ParamLimits

0x162a,	// (0x000736ec) main_cale_event_viewer_pane

0x162a,	// (0x000736ec) listscroll_cale_event_viewer_pane

0xc188,	// (0x0007e24a) list_cale_ev_pane

0xc190,	// (0x0007e252) scroll_pane_cp023

0xc19c,	// (0x0007e25e) field_cale_ev_pane_ParamLimits

0xc19c,	// (0x0007e25e) field_cale_ev_pane

0xc1ba,	// (0x0007e27c) field_cale_ev_content_pane_ParamLimits

0xc1ba,	// (0x0007e27c) field_cale_ev_content_pane

0xc1c6,	// (0x0007e288) field_cale_ev_pane_g1_ParamLimits

0xc1c6,	// (0x0007e288) field_cale_ev_pane_g1

0xc1d2,	// (0x0007e294) field_cale_ev_pane_g2_ParamLimits

0xc1d2,	// (0x0007e294) field_cale_ev_pane_g2

0xc1ea,	// (0x0007e2ac) field_cale_ev_pane_g3_ParamLimits

0xc1ea,	// (0x0007e2ac) field_cale_ev_pane_g3

0x0002,

0xf65f,	// (0x00081721) field_cale_ev_pane_g_ParamLimits

0xf65f,	// (0x00081721) field_cale_ev_pane_g

0xc202,	// (0x0007e2c4) field_cale_ev_pane_t1_ParamLimits

0xc202,	// (0x0007e2c4) field_cale_ev_pane_t1

0x247b,	// (0x0007453d) field_cale_ev_content_pane_t1_ParamLimits

0x247b,	// (0x0007453d) field_cale_ev_content_pane_t1

0xaa46,	// (0x0007cb08) bg_button_pane_cp01

0x24c8,	// (0x0007458a) listscroll_cale_week_pane_ParamLimits

0x24da,	// (0x0007459c) popup_toolbar_window_cp01

0x2733,	// (0x000747f5) listscroll_cale_week_pane_t1_ParamLimits

0x24c8,	// (0x0007458a) listscroll_cale_day_pane_ParamLimits

0x24da,	// (0x0007459c) popup_toolbar_window_cp02

0x401c,	// (0x000760de) listscroll_cale_day_pane_t1_ParamLimits

0x24c8,	// (0x0007458a) main_cale_month_pane_ParamLimits

0xbc81,	// (0x0007dd43) popup_toolbar_window_cp03_ParamLimits

0xbc81,	// (0x0007dd43) popup_toolbar_window_cp03

0x4f9a,	// (0x0007705c) main_image_pane_g2_ParamLimits

0x4f9a,	// (0x0007705c) main_image_pane_g2

0x4fab,	// (0x0007706d) main_image_pane_g3_ParamLimits

0x4fab,	// (0x0007706d) main_image_pane_g3

0x0002,

0xf457,	// (0x00081519) main_image_pane_g_ParamLimits

0xf457,	// (0x00081519) main_image_pane_g

0xaba2,	// (0x0007cc64) main_image_pane_t1_ParamLimits

0x4fbc,	// (0x0007707e) main_image_pane_t2_ParamLimits

0x4fbc,	// (0x0007707e) main_image_pane_t2

0x4fce,	// (0x00077090) main_image_pane_t3_ParamLimits

0x4fce,	// (0x00077090) main_image_pane_t3

0x4ff6,	// (0x000770b8) main_image_pane_t4_ParamLimits

0x4ff6,	// (0x000770b8) main_image_pane_t4

0x0003,

0xf45e,	// (0x00081520) main_image_pane_t_ParamLimits

0xf45e,	// (0x00081520) main_image_pane_t

0x5016,	// (0x000770d8) popup_image_details_window_cp01

0x5020,	// (0x000770e2) popup_toobar_trans_pane_cp01_ParamLimits

0x5020,	// (0x000770e2) popup_toobar_trans_pane_cp01

0x57e1,	// (0x000778a3) popup_image_details_window_ParamLimits

0x57e1,	// (0x000778a3) popup_image_details_window

0xbc54,	// (0x0007dd16) popup_image_focus_window

0xbd87,	// (0x0007de49) camera2_autofocus_pane_ParamLimits

0xbd87,	// (0x0007de49) camera2_autofocus_pane

0x162a,	// (0x000736ec) bg_popup_sub_pane_cp06

0xc219,	// (0x0007e2db) popup_image_focus_window_g1

0xc221,	// (0x0007e2e3) popup_image_focus_window_g2

0xc229,	// (0x0007e2eb) popup_image_focus_window_g3

0xc231,	// (0x0007e2f3) popup_image_focus_window_g4

0x0003,

0xf666,	// (0x00081728) popup_image_focus_window_g

0xc239,	// (0x0007e2fb) popup_image_focus_window_t1

0xc247,	// (0x0007e309) popup_image_focus_window_t2

0xc257,	// (0x0007e319) popup_image_focus_window_t3

0x0002,

0xf66f,	// (0x00081731) popup_image_focus_window_t

0x2002,	// (0x000740c4) camera2_autofocus_pane_g1

0x1855,	// (0x00073917) bg_tb_trans_pane_cp01

0xc265,	// (0x0007e327) popup_image_details_window_g1

0xc278,	// (0x0007e33a) popup_image_details_window_g2

0x0002,

0xf681,	// (0x00081743) popup_image_details_window_g

0xc2a1,	// (0x0007e363) popup_image_details_window_t1

0xc2b3,	// (0x0007e375) popup_image_details_window_t2

0xc2cc,	// (0x0007e38e) popup_image_details_window_t3

0xc2e0,	// (0x0007e3a2) popup_image_details_window_t4

0xc2fb,	// (0x0007e3bd) popup_image_details_window_t5

0x0004,

0xf688,	// (0x0008174a) popup_image_details_window_t

0x21de,	// (0x000742a0) bg_calc_paper_pane_ParamLimits

0x162a,	// (0x000736ec) grid_highlight_pane_cp013

0xa838,	// (0x0007c8fa) list_calc_pane_ParamLimits

0xa84a,	// (0x0007c90c) scroll_pane_cp024

0x21f2,	// (0x000742b4) bg_calc_display_pane_ParamLimits

0x21fe,	// (0x000742c0) calc_display_pane_t1_ParamLimits

0x2213,	// (0x000742d5) calc_display_pane_t2_ParamLimits

0xa852,	// (0x0007c914) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x000811b4) calc_display_pane_t_ParamLimits

0x231c,	// (0x000743de) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x000811d1) cell_calc_pane_g

0x2325,	// (0x000743e7) cell_calc_pane_t1

0x2334,	// (0x000743f6) grid_highlight_pane_cp02_ParamLimits

0x234a,	// (0x0007440c) toolbar_button_pane_cp01_ParamLimits

0x234a,	// (0x0007440c) toolbar_button_pane_cp01

0xabe7,	// (0x0007cca9) temp_image_control_pane_ParamLimits

0xabe7,	// (0x0007cca9) temp_image_control_pane

0x1855,	// (0x00073917) main_mp3_pane

0xc315,	// (0x0007e3d7) temp_image_control_pane_g1_ParamLimits

0xc315,	// (0x0007e3d7) temp_image_control_pane_g1

0xc323,	// (0x0007e3e5) temp_image_control_pane_g2_ParamLimits

0xc323,	// (0x0007e3e5) temp_image_control_pane_g2

0xc335,	// (0x0007e3f7) temp_image_control_pane_g3_ParamLimits

0xc335,	// (0x0007e3f7) temp_image_control_pane_g3

0x5c92,	// (0x00077d54) temp_image_control_pane_g4_ParamLimits

0x5c92,	// (0x00077d54) temp_image_control_pane_g4

0x0003,

0xf693,	// (0x00081755) temp_image_control_pane_g_ParamLimits

0xf693,	// (0x00081755) temp_image_control_pane_g

0xc315,	// (0x0007e3d7) main_mp3_pane_g1

0x5ca5,	// (0x00077d67) main_mp3_pane_g2

0x0007,

0xf69c,	// (0x0008175e) main_mp3_pane_g

0xc36a,	// (0x0007e42c) main_mp3_pane_t1

0x2010,	// (0x000740d2) main_camera_pane_g8_ParamLimits

0x2010,	// (0x000740d2) main_camera_pane_g8

0x2c61,	// (0x00074d23) main_video_pane_g7_ParamLimits

0x2c61,	// (0x00074d23) main_video_pane_g7

0xa98f,	// (0x0007ca51) main_camera2_pane_t7_ParamLimits

0xa98f,	// (0x0007ca51) main_camera2_pane_t7

0x3239,	// (0x000752fb) scroll_pane_cp025_ParamLimits

0x3239,	// (0x000752fb) scroll_pane_cp025

0x324d,	// (0x0007530f) scroll_pane_cp026_ParamLimits

0x324d,	// (0x0007530f) scroll_pane_cp026

0x325c,	// (0x0007531e) wml_content_pane_ParamLimits

0x162a,	// (0x000736ec) main_touch_calib_pane

0x5d79,	// (0x00077e3b) main_touch_calib_pane_g1

0x5d8b,	// (0x00077e4d) main_touch_calib_pane_g2

0x5d9d,	// (0x00077e5f) main_touch_calib_pane_g3

0x5daf,	// (0x00077e71) main_touch_calib_pane_g4

0x0003,

0xf6ba,	// (0x0008177c) main_touch_calib_pane_g

0x5dc1,	// (0x00077e83) main_touch_calib_pane_t1

0x5ddb,	// (0x00077e9d) main_touch_calib_pane_t2

0x0004,

0xf6c3,	// (0x00081785) main_touch_calib_pane_t

0x48b5,	// (0x00076977) mup_progress_pane_cp02

0x48ea,	// (0x000769ac) navi_pane_g1

0x49a5,	// (0x00076a67) navi_pane_mp_t3

0x1855,	// (0x00073917) main_mp3_pane_ParamLimits

0x5966,	// (0x00077a28) navi_pane_ParamLimits

0xc315,	// (0x0007e3d7) main_mp3_pane_g1_ParamLimits

0x5ca5,	// (0x00077d67) main_mp3_pane_g2_ParamLimits

0x5cb3,	// (0x00077d75) main_mp3_pane_g3_ParamLimits

0x5cb3,	// (0x00077d75) main_mp3_pane_g3

0x5cc1,	// (0x00077d83) main_mp3_pane_g4_ParamLimits

0x5cc1,	// (0x00077d83) main_mp3_pane_g4

0x2002,	// (0x000740c4) main_mp3_pane_g5_ParamLimits

0x2002,	// (0x000740c4) main_mp3_pane_g5

0xc345,	// (0x0007e407) main_mp3_pane_g6_ParamLimits

0xc345,	// (0x0007e407) main_mp3_pane_g6

0xc352,	// (0x0007e414) main_mp3_pane_g7_ParamLimits

0xc352,	// (0x0007e414) main_mp3_pane_g7

0xc35e,	// (0x0007e420) main_mp3_pane_g8_ParamLimits

0xc35e,	// (0x0007e420) main_mp3_pane_g8

0xf69c,	// (0x0008175e) main_mp3_pane_g_ParamLimits

0x5ccd,	// (0x00077d8f) main_mp3_pane_t2

0x5cdb,	// (0x00077d9d) main_mp3_pane_t3

0xc378,	// (0x0007e43a) main_mp3_pane_t4

0xc386,	// (0x0007e448) main_mp3_pane_t5

0x0005,

0xf6ad,	// (0x0008176f) main_mp3_pane_t

0xc394,	// (0x0007e456) mup_progress_pane_cp01

0xa7e7,	// (0x0007c8a9) aid_zoom_text_secondary2

0xc188,	// (0x0007e24a) list_cale_ev2_pane

0xc190,	// (0x0007e252) scroll_pane_cp023_ParamLimits

0x5e31,	// (0x00077ef3) field_cale_ev2_pane_ParamLimits

0x5e31,	// (0x00077ef3) field_cale_ev2_pane

0x5e51,	// (0x00077f13) field_cale_ev2_pane_g1_ParamLimits

0x5e51,	// (0x00077f13) field_cale_ev2_pane_g1

0x5e5d,	// (0x00077f1f) field_cale_ev2_pane_g2_ParamLimits

0x5e5d,	// (0x00077f1f) field_cale_ev2_pane_g2

0x5e75,	// (0x00077f37) field_cale_ev2_pane_g3_ParamLimits

0x5e75,	// (0x00077f37) field_cale_ev2_pane_g3

0x0003,

0xf6ce,	// (0x00081790) field_cale_ev2_pane_g_ParamLimits

0xf6ce,	// (0x00081790) field_cale_ev2_pane_g

0xc3a8,	// (0x0007e46a) field_cale_ev2_pane_t1_ParamLimits

0xc3a8,	// (0x0007e46a) field_cale_ev2_pane_t1

0xc3bf,	// (0x0007e481) field_cale_ev2_pane_t2_ParamLimits

0xc3bf,	// (0x0007e481) field_cale_ev2_pane_t2

0x0001,

0xf6d7,	// (0x00081799) field_cale_ev2_pane_t_ParamLimits

0xf6d7,	// (0x00081799) field_cale_ev2_pane_t

0x4e4f,	// (0x00076f11) main_postcard_pane_g5_ParamLimits

0x4e4f,	// (0x00076f11) main_postcard_pane_g5

0x4e65,	// (0x00076f27) main_postcard_pane_g6_ParamLimits

0x4e65,	// (0x00076f27) main_postcard_pane_g6

0x1855,	// (0x00073917) camera2_autofocus_pane_cp_ParamLimits

0x1855,	// (0x00073917) camera2_autofocus_pane_cp

0x1855,	// (0x00073917) main_mup3_pane

0x5ed1,	// (0x00077f93) main_mup3_pane_g1_ParamLimits

0x5ed1,	// (0x00077f93) main_mup3_pane_g1

0x5ef3,	// (0x00077fb5) main_mup3_pane_g2_ParamLimits

0x5ef3,	// (0x00077fb5) main_mup3_pane_g2

0x5f71,	// (0x00078033) main_mup3_pane_g3_ParamLimits

0x5f71,	// (0x00078033) main_mup3_pane_g3

0x5fb7,	// (0x00078079) main_mup3_pane_g4_ParamLimits

0x5fb7,	// (0x00078079) main_mup3_pane_g4

0x5ffd,	// (0x000780bf) main_mup3_pane_g5_ParamLimits

0x5ffd,	// (0x000780bf) main_mup3_pane_g5

0x6043,	// (0x00078105) main_mup3_pane_g6_ParamLimits

0x6043,	// (0x00078105) main_mup3_pane_g6

0x2010,	// (0x000740d2) main_mup3_pane_g7_ParamLimits

0x2010,	// (0x000740d2) main_mup3_pane_g7

0x0007,

0xf6e7,	// (0x000817a9) main_mup3_pane_g_ParamLimits

0xf6e7,	// (0x000817a9) main_mup3_pane_g

0x60c1,	// (0x00078183) main_mup3_pane_t1_ParamLimits

0x60c1,	// (0x00078183) main_mup3_pane_t1

0x6135,	// (0x000781f7) main_mup3_pane_t2_ParamLimits

0x6135,	// (0x000781f7) main_mup3_pane_t2

0x6209,	// (0x000782cb) main_mup3_pane_t4_ParamLimits

0x6209,	// (0x000782cb) main_mup3_pane_t4

0x625f,	// (0x00078321) main_mup3_pane_t5_ParamLimits

0x625f,	// (0x00078321) main_mup3_pane_t5

0x631b,	// (0x000783dd) main_mup3_pane_t6_ParamLimits

0x631b,	// (0x000783dd) main_mup3_pane_t6

0x0005,

0xf6f8,	// (0x000817ba) main_mup3_pane_t_ParamLimits

0xf6f8,	// (0x000817ba) main_mup3_pane_t

0x63d3,	// (0x00078495) mup3_progress_pane_ParamLimits

0x63d3,	// (0x00078495) mup3_progress_pane

0x6469,	// (0x0007852b) popup_mup3_control_window_ParamLimits

0x6469,	// (0x0007852b) popup_mup3_control_window

0xc3d4,	// (0x0007e496) popup_mup3_text_window

0x649b,	// (0x0007855d) mup3_progress_pane_t1

0x64ba,	// (0x0007857c) mup3_progress_pane_t2

0xc3dc,	// (0x0007e49e) mup3_progress_pane_t3

0x0002,

0xf705,	// (0x000817c7) mup3_progress_pane_t

0xc3f9,	// (0x0007e4bb) mup_progress_pane_cp03

0x162a,	// (0x000736ec) bg_tb_trans_pane_cp04

0x64d9,	// (0x0007859b) mup3_volume_pane

0x64e1,	// (0x000785a3) popup_mup3_control_window_g1

0x64ea,	// (0x000785ac) mup3_volume_pane_g1

0x64f3,	// (0x000785b5) mup3_volume_pane_g2

0x64fc,	// (0x000785be) mup3_volume_pane_g3

0x0002,

0xf70c,	// (0x000817ce) mup3_volume_pane_g

0x162a,	// (0x000736ec) bg_tb_trans_pane_cp03

0xc409,	// (0x0007e4cb) popup_mup3_text_window_g1

0xc411,	// (0x0007e4d3) popup_mup3_text_window_t1

0x22f5,	// (0x000743b7) list_calc_item_pane_g1_ParamLimits

0xbe82,	// (0x0007df44) mup_volume_pane_cp_g1

0x5df5,	// (0x00077eb7) main_touch_calib_pane_t3

0x5e09,	// (0x00077ecb) main_touch_calib_pane_t4

0x5e1d,	// (0x00077edf) main_touch_calib_pane_t5

0xa7c3,	// (0x0007c885) aid_cell_size_toolbar2

0xa7cb,	// (0x0007c88d) aid_popup3_width_pane

0xa7d7,	// (0x0007c899) aid_zoom_text_msg_primary

0x2b0e,	// (0x00074bd0) vorec_t7

0x225d,	// (0x0007431f) bg_calc_paper_pane_g1_ParamLimits

0x2269,	// (0x0007432b) bg_calc_paper_pane_g2_ParamLimits

0x2275,	// (0x00074337) bg_calc_paper_pane_g3_ParamLimits

0x2281,	// (0x00074343) bg_calc_paper_pane_g4_ParamLimits

0x228d,	// (0x0007434f) bg_calc_paper_pane_g5_ParamLimits

0x2299,	// (0x0007435b) bg_calc_paper_pane_g6_ParamLimits

0x22a8,	// (0x0007436a) bg_calc_paper_pane_g7_ParamLimits

0x22b7,	// (0x00074379) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x000811bb) bg_calc_paper_pane_g_ParamLimits

0x22ca,	// (0x0007438c) calc_bg_paper_pane_g9_ParamLimits

0x1855,	// (0x00073917) image_qvga_pane_ParamLimits

0x1855,	// (0x00073917) image_qvga_pane

0x1f87,	// (0x00074049) bg_popup_sub_pane_cp04_ParamLimits

0xab1e,	// (0x0007cbe0) popup_mup_playback_window_g1_ParamLimits

0xab2a,	// (0x0007cbec) popup_mup_playback_window_t1_ParamLimits

0xab3f,	// (0x0007cc01) popup_mup_playback_window_t2_ParamLimits

0xf452,	// (0x00081514) popup_mup_playback_window_t_ParamLimits

0x2010,	// (0x000740d2) main_mup2_pane_g3_ParamLimits

0x2010,	// (0x000740d2) main_mup2_pane_g3

0x2eca,	// (0x00074f8c) popup_toolbar_window_cp04

0xaf21,	// (0x0007cfe3) popup_call2_audio_second_window_g3_ParamLimits

0xaf21,	// (0x0007cfe3) popup_call2_audio_second_window_g3

0xb339,	// (0x0007d3fb) popup_call2_audio_first_window_g4_ParamLimits

0xb339,	// (0x0007d3fb) popup_call2_audio_first_window_g4

0xb960,	// (0x0007da22) popup_call2_audio_in_window_g4_ParamLimits

0xb960,	// (0x0007da22) popup_call2_audio_in_window_g4

0x4f7c,	// (0x0007703e) aid_area_sk_bg_cut_ParamLimits

0x4f7c,	// (0x0007703e) aid_area_sk_bg_cut

0xab54,	// (0x0007cc16) aid_area_sk_bg_cut_2_ParamLimits

0xab54,	// (0x0007cc16) aid_area_sk_bg_cut_2

0x162a,	// (0x000736ec) aid_placing_details_win

0x162a,	// (0x000736ec) aid_placing_details_win_2

0x2002,	// (0x000740c4) camera2_autofocus_pane_g1_ParamLimits

0x17fa,	// (0x000738bc) popup_fixed_preview_cale_window_ParamLimits

0x17fa,	// (0x000738bc) popup_fixed_preview_cale_window

0x4a65,	// (0x00076b27) navi_slider_pane_g3

0x4a6e,	// (0x00076b30) navi_slider_pane_g4

0x4a77,	// (0x00076b39) navi_slider_pane_g5

0x4a65,	// (0x00076b27) navi_slider_pane_g6

0xa972,	// (0x0007ca34) navi_slider_pane_g7

0xaa13,	// (0x0007cad5) mup_scale_pane_g3

0xaa1c,	// (0x0007cade) mup_scale_pane_g4

0xaa25,	// (0x0007cae7) mup_scale_pane_g5

0x4cfa,	// (0x00076dbc) mup_scale_pane_g6

0x4d03,	// (0x00076dc5) mup_scale_pane_g7

0x2cb3,	// (0x00074d75) cams2_slider_pane_g3

0x2cb3,	// (0x00074d75) cams2_slider_pane_g4

0x2cb3,	// (0x00074d75) cams2_slider_pane_g5

0x2cb3,	// (0x00074d75) cams2_slider_pane_g6

0x2cb3,	// (0x00074d75) cams2_slider_pane_g7

0x2cb3,	// (0x00074d75) camera2_autofocus_pane_cp_g1

0xbc36,	// (0x0007dcf8) bg_popup_preview_window_pane_cp02_ParamLimits

0xbc36,	// (0x0007dcf8) bg_popup_preview_window_pane_cp02

0xc41f,	// (0x0007e4e1) list_fp_cale_pane_ParamLimits

0xc41f,	// (0x0007e4e1) list_fp_cale_pane

0xc42b,	// (0x0007e4ed) popup_fixed_preview_cale_window_t1_ParamLimits

0xc42b,	// (0x0007e4ed) popup_fixed_preview_cale_window_t1

0x6505,	// (0x000785c7) popup_fixed_preview_cale_window_t2_ParamLimits

0x6505,	// (0x000785c7) popup_fixed_preview_cale_window_t2

0x651a,	// (0x000785dc) popup_fixed_preview_cale_window_t3_ParamLimits

0x651a,	// (0x000785dc) popup_fixed_preview_cale_window_t3

0x0002,

0xf713,	// (0x000817d5) popup_fixed_preview_cale_window_t_ParamLimits

0xf713,	// (0x000817d5) popup_fixed_preview_cale_window_t

0x652f,	// (0x000785f1) list_single_fp_cale_pane_ParamLimits

0x652f,	// (0x000785f1) list_single_fp_cale_pane

0xc449,	// (0x0007e50b) list_single_fp_cale_pane_g1_ParamLimits

0xc449,	// (0x0007e50b) list_single_fp_cale_pane_g1

0xc455,	// (0x0007e517) list_single_fp_cale_pane_g2_ParamLimits

0xc455,	// (0x0007e517) list_single_fp_cale_pane_g2

0x0002,

0xf71a,	// (0x000817dc) list_single_fp_cale_pane_g_ParamLimits

0xf71a,	// (0x000817dc) list_single_fp_cale_pane_g

0xc46e,	// (0x0007e530) list_single_fp_cale_pane_t1_ParamLimits

0xc46e,	// (0x0007e530) list_single_fp_cale_pane_t1

0xc480,	// (0x0007e542) list_single_fp_cale_pane_t2_ParamLimits

0xc480,	// (0x0007e542) list_single_fp_cale_pane_t2

0x0001,

0xf721,	// (0x000817e3) list_single_fp_cale_pane_t_ParamLimits

0xf721,	// (0x000817e3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x162a,	// (0x000736ec) main_dialer_pane

0x162a,	// (0x000736ec) aid_cell_size_keypad

0x162a,	// (0x000736ec) dialer_ne_pane

0x162a,	// (0x000736ec) grid_dialer_command_1_pane

0x162a,	// (0x000736ec) grid_dialer_command_2_pane

0x162a,	// (0x000736ec) grid_dialer_keypad_pane

0x6544,	// (0x00078606) bg_popup_call_pane_cp06_ParamLimits

0x6544,	// (0x00078606) bg_popup_call_pane_cp06

0x6544,	// (0x00078606) dialer_ne_clear_pane_ParamLimits

0x6544,	// (0x00078606) dialer_ne_clear_pane

0x2cb3,	// (0x00074d75) dialer_ne_pane_g1

0xa98f,	// (0x0007ca51) dialer_ne_pane_t1_ParamLimits

0xa98f,	// (0x0007ca51) dialer_ne_pane_t1

0x6552,	// (0x00078614) dialer_ne_pane_t2_ParamLimits

0x6552,	// (0x00078614) dialer_ne_pane_t2

0x657a,	// (0x0007863c) dialer_ne_pane_t3_ParamLimits

0x657a,	// (0x0007863c) dialer_ne_pane_t3

0x0002,

0xf726,	// (0x000817e8) dialer_ne_pane_t_ParamLimits

0xf726,	// (0x000817e8) dialer_ne_pane_t

0x657a,	// (0x0007863c) dialer_ne_pane_t3_copy1_ParamLimits

0x657a,	// (0x0007863c) dialer_ne_pane_t3_copy1

0xc4b3,	// (0x0007e575) cell_dialer_keypad_pane_ParamLimits

0xc4b3,	// (0x0007e575) cell_dialer_keypad_pane

0x1855,	// (0x00073917) cell_dialer_command_1_pane_ParamLimits

0x1855,	// (0x00073917) cell_dialer_command_1_pane

0xc4ca,	// (0x0007e58c) cell_dialer_command_2_pane_ParamLimits

0xc4ca,	// (0x0007e58c) cell_dialer_command_2_pane

0x1855,	// (0x00073917) bg_button_pane_cp02_ParamLimits

0x1855,	// (0x00073917) bg_button_pane_cp02

0x2002,	// (0x000740c4) cell_dialer_keypad_pane_g1_ParamLimits

0x2002,	// (0x000740c4) cell_dialer_keypad_pane_g1

0x1855,	// (0x00073917) bg_button_pane_cp03_ParamLimits

0x1855,	// (0x00073917) bg_button_pane_cp03

0x2002,	// (0x000740c4) cell_dialer_command_1_pane_g1_ParamLimits

0x2002,	// (0x000740c4) cell_dialer_command_1_pane_g1

0x162a,	// (0x000736ec) bg_button_pane_cp04

0x2cb3,	// (0x00074d75) cell_dialer_command_2_pane_g1

0x162a,	// (0x000736ec) bg_button_pane_cp06

0x2cb3,	// (0x00074d75) dialer_ne_clear_pane_g1

0x48f6,	// (0x000769b8) navi_pane_g2

0x4924,	// (0x000769e6) navi_pane_g3

0x0002,

0xf355,	// (0x00081417) navi_pane_g

0x49b3,	// (0x00076a75) navi_pane_mv_g2

0x49da,	// (0x00076a9c) navi_pane_mv_g5

0x49e2,	// (0x00076aa4) navi_pane_mv_t1

0x21f2,	// (0x000742b4) main_clock2_pane

0x1855,	// (0x00073917) main_clock2_list_pane_ParamLimits

0x1855,	// (0x00073917) main_clock2_list_pane

0x6610,	// (0x000786d2) main_clock2_pane_t1_ParamLimits

0x6610,	// (0x000786d2) main_clock2_pane_t1

0x664b,	// (0x0007870d) main_clock2_pane_t2_ParamLimits

0x664b,	// (0x0007870d) main_clock2_pane_t2

0x0004,

0xf732,	// (0x000817f4) main_clock2_pane_t_ParamLimits

0xf732,	// (0x000817f4) main_clock2_pane_t

0x66eb,	// (0x000787ad) popup_clock_analogue_window_cp03_ParamLimits

0x66eb,	// (0x000787ad) popup_clock_analogue_window_cp03

0x6710,	// (0x000787d2) popup_clock_digital_window_cp02_ParamLimits

0x6710,	// (0x000787d2) popup_clock_digital_window_cp02

0x6789,	// (0x0007884b) main_clock2_list_single_pane_ParamLimits

0x6789,	// (0x0007884b) main_clock2_list_single_pane

0x2ac6,	// (0x00074b88) list_highlight_pane_cp05

0xc511,	// (0x0007e5d3) main_clock2_list_single_pane_t1

0x2eca,	// (0x00074f8c) popup_toolbar_window_cp04_ParamLimits

0x2010,	// (0x000740d2) camera2_autofocus_pane_g2_ParamLimits

0x2010,	// (0x000740d2) camera2_autofocus_pane_g2

0x2010,	// (0x000740d2) camera2_autofocus_pane_g3_ParamLimits

0x2010,	// (0x000740d2) camera2_autofocus_pane_g3

0x2010,	// (0x000740d2) camera2_autofocus_pane_g4_ParamLimits

0x2010,	// (0x000740d2) camera2_autofocus_pane_g4

0x2010,	// (0x000740d2) camera2_autofocus_pane_g5_ParamLimits

0x2010,	// (0x000740d2) camera2_autofocus_pane_g5

0x0004,

0xf676,	// (0x00081738) camera2_autofocus_pane_g_ParamLimits

0xf676,	// (0x00081738) camera2_autofocus_pane_g

0x5e8d,	// (0x00077f4f) camera2_autofocus_pane_cp_g2

0x5e95,	// (0x00077f57) camera2_autofocus_pane_cp_g3

0x5e9d,	// (0x00077f5f) camera2_autofocus_pane_cp_g4

0x5ea5,	// (0x00077f67) camera2_autofocus_pane_cp_g5

0x0004,

0xf6dc,	// (0x0008179e) camera2_autofocus_pane_cp_g

0x162a,	// (0x000736ec) popup_dialer_spcha_window

0x162a,	// (0x000736ec) bg_popup_sub_pane_cp07

0x162a,	// (0x000736ec) list_spcha_pane

0xc51f,	// (0x0007e5e1) list_single_spcha_pane_ParamLimits

0xc51f,	// (0x0007e5e1) list_single_spcha_pane

0x162a,	// (0x000736ec) list_highlight_pane_cp06

0x42c5,	// (0x00076387) list_single_spcha_pane_t1

0xb70a,	// (0x0007d7cc) popup_call2_audio_out_window_g4_ParamLimits

0xb70a,	// (0x0007d7cc) popup_call2_audio_out_window_g4

0x162a,	// (0x000736ec) main_imed2_pane

0xbc5c,	// (0x0007dd1e) popup_imed_adjust2_window

0x57f9,	// (0x000778bb) popup_imed_trans_window_ParamLimits

0x57f9,	// (0x000778bb) popup_imed_trans_window

0xbf57,	// (0x0007e019) popup_blid_sat_info2_window_t1

0xbf65,	// (0x0007e027) popup_blid_sat_info2_window_t2

0x000a,

0xf60b,	// (0x000816cd) popup_blid_sat_info2_window_t

0x683a,	// (0x000788fc) aid_size_cell_colour_35

0x685a,	// (0x0007891c) aid_size_cell_colour_112

0x687a,	// (0x0007893c) aid_size_cell_effect

0xa9a3,	// (0x0007ca65) bg_tb_trans_pane_cp02

0x416c,	// (0x0007622e) heading_imed_pane

0x689a,	// (0x0007895c) listscroll_imed_pane

0xc531,	// (0x0007e5f3) heading_imed_pane_g1

0xc539,	// (0x0007e5fb) heading_imed_pane_t1

0xc547,	// (0x0007e609) grid_imed_colour_35_pane_ParamLimits

0xc547,	// (0x0007e609) grid_imed_colour_35_pane

0x68a6,	// (0x00078968) grid_imed_effect_pane

0xc55e,	// (0x0007e620) list_imed_aspect_pane

0x68bc,	// (0x0007897e) scroll_pane_cp027_ParamLimits

0x68bc,	// (0x0007897e) scroll_pane_cp027

0x68cd,	// (0x0007898f) cell_imed_effect_pane_ParamLimits

0x68cd,	// (0x0007898f) cell_imed_effect_pane

0xc566,	// (0x0007e628) cell_imed_colour_pane_ParamLimits

0xc566,	// (0x0007e628) cell_imed_colour_pane

0xc5a8,	// (0x0007e66a) cell_imed_colour_pane_g1_ParamLimits

0xc5a8,	// (0x0007e66a) cell_imed_colour_pane_g1

0xc5b9,	// (0x0007e67b) hgihlgiht_grid_pane_cp016_ParamLimits

0xc5b9,	// (0x0007e67b) hgihlgiht_grid_pane_cp016

0x68f4,	// (0x000789b6) cell_imed_effect_pane_g1

0x68fc,	// (0x000789be) grid_highlight_pane_cp017

0xc5ca,	// (0x0007e68c) list_imed_single_pane_ParamLimits

0xc5ca,	// (0x0007e68c) list_imed_single_pane

0x162a,	// (0x000736ec) list_highlight_pane_cp07

0xc5df,	// (0x0007e6a1) list_imed_aspect_pane_comp1_t1

0xa9a3,	// (0x0007ca65) bg_tb_trans_pane_cp05

0xc601,	// (0x0007e6c3) popup_imed_adjust2_window_g1

0xc628,	// (0x0007e6ea) popup_imed_adjust2_window_t1

0xc640,	// (0x0007e702) slider_imed_adjust_pane

0xc654,	// (0x0007e716) slider_imed_adjust_pane_g1

0xc664,	// (0x0007e726) slider_imed_adjust_pane_g2

0xc674,	// (0x0007e736) slider_imed_adjust_pane_g3

0xc685,	// (0x0007e747) slider_imed_adjust_pane_g4

0x0003,

0xf74f,	// (0x00081811) slider_imed_adjust_pane_g

0x6905,	// (0x000789c7) aid_size_cell_clipart2

0x6911,	// (0x000789d3) grid_imed_clipart_pane

0xc696,	// (0x0007e758) scroll_pane_cp031

0x691b,	// (0x000789dd) cell_imed_clipart_pane_ParamLimits

0x691b,	// (0x000789dd) cell_imed_clipart_pane

0x693d,	// (0x000789ff) cell_imed_clipart_pane_g1

0x162a,	// (0x000736ec) grid_highlight_pane_cp014

0x65ec,	// (0x000786ae) main_clock2_pane_g1_ParamLimits

0x65ec,	// (0x000786ae) main_clock2_pane_g1

0x6730,	// (0x000787f2) aid_call2_pane_cp10

0x6742,	// (0x00078804) aid_call_pane_cp10

0x47f2,	// (0x000768b4) popup_clock_analogue_window_cp10_g1

0x47f2,	// (0x000768b4) popup_clock_analogue_window_cp10_g2

0x6754,	// (0x00078816) popup_clock_analogue_window_cp10_g3

0x6754,	// (0x00078816) popup_clock_analogue_window_cp10_g4

0x47f2,	// (0x000768b4) popup_clock_analogue_window_cp10_g5

0x0004,

0xf73d,	// (0x000817ff) popup_clock_analogue_window_cp10_g

0x676a,	// (0x0007882c) popup_clock_analogue_window_cp10_t1

0x679b,	// (0x0007885d) clock_digital_number_pane_cp10_ParamLimits

0x679b,	// (0x0007885d) clock_digital_number_pane_cp10

0x67b3,	// (0x00078875) clock_digital_number_pane_cp11_ParamLimits

0x67b3,	// (0x00078875) clock_digital_number_pane_cp11

0x67cb,	// (0x0007888d) clock_digital_number_pane_cp12_ParamLimits

0x67cb,	// (0x0007888d) clock_digital_number_pane_cp12

0x67e5,	// (0x000788a7) clock_digital_number_pane_cp13_ParamLimits

0x67e5,	// (0x000788a7) clock_digital_number_pane_cp13

0x67ff,	// (0x000788c1) clock_digital_separator_pane_cp10_ParamLimits

0x67ff,	// (0x000788c1) clock_digital_separator_pane_cp10

0x6819,	// (0x000788db) popup_clock_digital_window_cp02_t1_ParamLimits

0x6819,	// (0x000788db) popup_clock_digital_window_cp02_t1

0x1f7f,	// (0x00074041) clock_digital_number_pane_cp10_g1

0x1f7f,	// (0x00074041) clock_digital_number_pane_cp10_g2

0x0001,

0xf758,	// (0x0008181a) clock_digital_number_pane_cp10_g

0x1f7f,	// (0x00074041) clock_digital_separator_pane_cp10_g1

0x1f7f,	// (0x00074041) clock_digital_separator_pane_g2_cp10

0x4a24,	// (0x00076ae6) navi_pane_vded_g4

0x4a2d,	// (0x00076aef) navi_pane_vded_g5

0x4a36,	// (0x00076af8) navi_pane_vded_t1

0x162a,	// (0x000736ec) main_vded_pane

0x6946,	// (0x00078a08) main_vded_pane_g1

0x6950,	// (0x00078a12) main_vded_pane_g2

0x695a,	// (0x00078a1c) main_vded_pane_g3

0x0002,

0xf75d,	// (0x0008181f) main_vded_pane_g

0x6964,	// (0x00078a26) main_vded_pane_t1

0x6972,	// (0x00078a34) main_vded_pane_t2

0x0001,

0xf764,	// (0x00081826) main_vded_pane_t

0x6980,	// (0x00078a42) vded_slider_pane

0x6988,	// (0x00078a4a) vded_video_pane

0xc69e,	// (0x0007e760) vded_video_pane_g1

0x6990,	// (0x00078a52) vded_video_pane_g2

0x2cb3,	// (0x00074d75) vded_video_pane_g3

0x0002,

0xf769,	// (0x0008182b) vded_video_pane_g

0xc6a8,	// (0x0007e76a) vded_slider_pane_g1

0xbe82,	// (0x0007df44) vded_slider_pane_g2

0xc6b1,	// (0x0007e773) vded_slider_pane_g3

0xc6ba,	// (0x0007e77c) vded_slider_pane_g4

0xc6c3,	// (0x0007e785) vded_slider_pane_g5

0x0004,

0xf770,	// (0x00081832) vded_slider_pane_g

0x6451,	// (0x00078513) mup3_rocker_pane_ParamLimits

0x6451,	// (0x00078513) mup3_rocker_pane

0x6999,	// (0x00078a5b) mup3_control_keys_pane_g1

0x69a1,	// (0x00078a63) mup3_control_keys_pane_g2

0x69a9,	// (0x00078a6b) mup3_control_keys_pane_g3

0x69b1,	// (0x00078a73) mup3_control_keys_pane_g4

0x0003,

0xf77b,	// (0x0008183d) mup3_control_keys_pane_g

0x1831,	// (0x000738f3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1831,	// (0x000738f3) popup_toolbar2_fixed_window_cp01

0x6485,	// (0x00078547) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6485,	// (0x00078547) popup_toolbar2_fixed_window_cp02

0xb093,	// (0x0007d155) popup_call2_audio_second_window_t4_ParamLimits

0xb093,	// (0x0007d155) popup_call2_audio_second_window_t4

0xb5cf,	// (0x0007d691) popup_call2_audio_first_window_t6_ParamLimits

0xb5cf,	// (0x0007d691) popup_call2_audio_first_window_t6

0xb80d,	// (0x0007d8cf) popup_call2_audio_out_window_t6_ParamLimits

0xb80d,	// (0x0007d8cf) popup_call2_audio_out_window_t6

0x162a,	// (0x000736ec) main_vitu_pane

0x1855,	// (0x00073917) aid_size_cell_itu_ParamLimits

0x1855,	// (0x00073917) aid_size_cell_itu

0x1855,	// (0x00073917) bg_popup_window_pane_cp08_ParamLimits

0x1855,	// (0x00073917) bg_popup_window_pane_cp08

0x1855,	// (0x00073917) field_vitu_entry_pane_ParamLimits

0x1855,	// (0x00073917) field_vitu_entry_pane

0x1855,	// (0x00073917) grid_vitu_function_pane_ParamLimits

0x1855,	// (0x00073917) grid_vitu_function_pane

0x1855,	// (0x00073917) grid_vitu_itu_pane_ParamLimits

0x1855,	// (0x00073917) grid_vitu_itu_pane

0x1855,	// (0x00073917) cell_vitu_itu_pane_ParamLimits

0x1855,	// (0x00073917) cell_vitu_itu_pane

0x1855,	// (0x00073917) cell_vitu_function_pane_ParamLimits

0x1855,	// (0x00073917) cell_vitu_function_pane

0x1855,	// (0x00073917) bg_popup_sub_pane_cp08_ParamLimits

0x1855,	// (0x00073917) bg_popup_sub_pane_cp08

0x2b2f,	// (0x00074bf1) field_vitu_entry_pane_t1_ParamLimits

0x2b2f,	// (0x00074bf1) field_vitu_entry_pane_t1

0xc6cc,	// (0x0007e78e) field_vitu_entry_pane_t2_ParamLimits

0xc6cc,	// (0x0007e78e) field_vitu_entry_pane_t2

0x0001,

0xf784,	// (0x00081846) field_vitu_entry_pane_t_ParamLimits

0xf784,	// (0x00081846) field_vitu_entry_pane_t

0xbda9,	// (0x0007de6b) bg_button_pane_cp05_ParamLimits

0xbda9,	// (0x0007de6b) bg_button_pane_cp05

0xc6e9,	// (0x0007e7ab) cell_vitu_itu_pane_g1

0xa97b,	// (0x0007ca3d) cell_vitu_itu_pane_t1_ParamLimits

0xa97b,	// (0x0007ca3d) cell_vitu_itu_pane_t1

0xa97b,	// (0x0007ca3d) cell_vitu_itu_pane_t2_ParamLimits

0xa97b,	// (0x0007ca3d) cell_vitu_itu_pane_t2

0x0002,

0xf789,	// (0x0008184b) cell_vitu_itu_pane_t_ParamLimits

0xf789,	// (0x0008184b) cell_vitu_itu_pane_t

0x162a,	// (0x000736ec) bg_button_pane_cp07

0x2cb3,	// (0x00074d75) cell_vitu_function_pane_g1

0xa830,	// (0x0007c8f2) main_calc_pane_g1

0x1658,	// (0x0007371a) aid_visual_content_pane

0x162a,	// (0x000736ec) main_vradio_pane

0x2002,	// (0x000740c4) main_vradio_pane_g1_ParamLimits

0x2002,	// (0x000740c4) main_vradio_pane_g1

0x2010,	// (0x000740d2) main_vradio_pane_g2_ParamLimits

0x2010,	// (0x000740d2) main_vradio_pane_g2

0x0001,

0xf1b7,	// (0x00081279) main_vradio_pane_g_ParamLimits

0xf1b7,	// (0x00081279) main_vradio_pane_g

0x2b2f,	// (0x00074bf1) main_vradio_pane_t1_ParamLimits

0x2b2f,	// (0x00074bf1) main_vradio_pane_t1

0x2b2f,	// (0x00074bf1) main_vradio_pane_t2_ParamLimits

0x2b2f,	// (0x00074bf1) main_vradio_pane_t2

0xa98f,	// (0x0007ca51) main_vradio_pane_t3_ParamLimits

0xa98f,	// (0x0007ca51) main_vradio_pane_t3

0x0002,

0xf790,	// (0x00081852) main_vradio_pane_t_ParamLimits

0xf790,	// (0x00081852) main_vradio_pane_t

0x1855,	// (0x00073917) vradio_rocker_control_pane_ParamLimits

0x1855,	// (0x00073917) vradio_rocker_control_pane

0x1855,	// (0x00073917) vradio_station_info_pane_ParamLimits

0x1855,	// (0x00073917) vradio_station_info_pane

0x1855,	// (0x00073917) vradio_frequency_info_pane_ParamLimits

0x1855,	// (0x00073917) vradio_frequency_info_pane

0x2cb3,	// (0x00074d75) vradio_station_info_pane_g1

0xa97b,	// (0x0007ca3d) vradio_station_info_pane_t1_ParamLimits

0xa97b,	// (0x0007ca3d) vradio_station_info_pane_t1

0xa98f,	// (0x0007ca51) vradio_station_info_pane_t2_ParamLimits

0xa98f,	// (0x0007ca51) vradio_station_info_pane_t2

0x0001,

0xf797,	// (0x00081859) vradio_station_info_pane_t_ParamLimits

0xf797,	// (0x00081859) vradio_station_info_pane_t

0x162a,	// (0x000736ec) vradio_tuning_pane

0x69c1,	// (0x00078a83) vradio_rocker_control_pane_g1

0xc705,	// (0x0007e7c7) vradio_rocker_control_pane_g2

0x69cb,	// (0x00078a8d) vradio_rocker_control_pane_g3

0x69d5,	// (0x00078a97) vradio_rocker_control_pane_g4

0x69df,	// (0x00078aa1) vradio_rocker_control_pane_g5

0x0004,

0xf79c,	// (0x0008185e) vradio_rocker_control_pane_g

0x2cb3,	// (0x00074d75) vradio_frequency_info_pane_g1

0x2b2f,	// (0x00074bf1) vradio_frequency_info_pane_t1_ParamLimits

0x2b2f,	// (0x00074bf1) vradio_frequency_info_pane_t1

0x69e9,	// (0x00078aab) vradio_tuning_pane_g1

0x69f6,	// (0x00078ab8) vradio_tuning_pane_t1

0xa7ef,	// (0x0007c8b1) area_side_right_pane_ParamLimits

0xa7ef,	// (0x0007c8b1) area_side_right_pane

0xbbfd,	// (0x0007dcbf) status_small_pane_g1

0xbc05,	// (0x0007dcc7) status_small_pane_g2

0xbc0e,	// (0x0007dcd0) status_small_pane_g3

0xbc17,	// (0x0007dcd9) status_small_pane_g4

0x0003,

0xf56d,	// (0x0008162f) status_small_pane_g

0xbc20,	// (0x0007dce2) status_small_pane_t1

0x162a,	// (0x000736ec) main_video3_pane

0xc70d,	// (0x0007e7cf) cams_zoom_vslider_pane

0xc715,	// (0x0007e7d7) image3_wide_pane_ParamLimits

0xc715,	// (0x0007e7d7) image3_wide_pane

0xc72f,	// (0x0007e7f1) image3_wide_small_pane

0xc73b,	// (0x0007e7fd) main_video3_pane_g1_ParamLimits

0xc73b,	// (0x0007e7fd) main_video3_pane_g1

0xc757,	// (0x0007e819) main_video3_pane_g2_ParamLimits

0xc757,	// (0x0007e819) main_video3_pane_g2

0x0001,

0xf7a7,	// (0x00081869) main_video3_pane_g_ParamLimits

0xf7a7,	// (0x00081869) main_video3_pane_g

0xc773,	// (0x0007e835) main_video3_pane_t1_ParamLimits

0xc773,	// (0x0007e835) main_video3_pane_t1

0xc79e,	// (0x0007e860) main_video3_pane_t2_ParamLimits

0xc79e,	// (0x0007e860) main_video3_pane_t2

0xc7c9,	// (0x0007e88b) main_video3_pane_t3_ParamLimits

0xc7c9,	// (0x0007e88b) main_video3_pane_t3

0x0002,

0xf7ac,	// (0x0008186e) main_video3_pane_t_ParamLimits

0xf7ac,	// (0x0008186e) main_video3_pane_t

0xc7f6,	// (0x0007e8b8) cams_zoom_vslider_pane_g1

0xc7ff,	// (0x0007e8c1) cams_zoom_vslider_pane_g2

0x0001,

0xf7b3,	// (0x00081875) cams_zoom_vslider_pane_g

0xc807,	// (0x0007e8c9) small_slider_vertical_pane

0x2cb3,	// (0x00074d75) small_slider_vertical_pane_g1

0x2cb3,	// (0x00074d75) small_slider_vertical_pane_g2

0xc80f,	// (0x0007e8d1) small_slider_vertical_pane_g3

0x0002,

0xf7b8,	// (0x0008187a) small_slider_vertical_pane_g

0x162a,	// (0x000736ec) main_hwr_training_pane

0xc818,	// (0x0007e8da) hwr_training_instruct_pane_ParamLimits

0xc818,	// (0x0007e8da) hwr_training_instruct_pane

0x6a05,	// (0x00078ac7) hwr_training_navi_pane_ParamLimits

0x6a05,	// (0x00078ac7) hwr_training_navi_pane

0x6a24,	// (0x00078ae6) hwr_training_write_pane_ParamLimits

0x6a24,	// (0x00078ae6) hwr_training_write_pane

0x162a,	// (0x000736ec) bg_frame_shadow_pane

0xc84f,	// (0x0007e911) hwr_training_write_pane_g1

0xc857,	// (0x0007e919) hwr_training_write_pane_g2

0xc85f,	// (0x0007e921) hwr_training_write_pane_g3

0xc867,	// (0x0007e929) hwr_training_write_pane_g4

0xc86f,	// (0x0007e931) hwr_training_write_pane_g5

0xc877,	// (0x0007e939) hwr_training_write_pane_g6

0xc87f,	// (0x0007e941) hwr_training_write_pane_g7

0x0006,

0xf7bf,	// (0x00081881) hwr_training_write_pane_g

0xe8d3,	// (0x00080995) hwr_training_navi_pane_g1_ParamLimits

0xe8d3,	// (0x00080995) hwr_training_navi_pane_g1

0xe8e5,	// (0x000809a7) hwr_training_navi_pane_g2_ParamLimits

0xe8e5,	// (0x000809a7) hwr_training_navi_pane_g2

0xe8f7,	// (0x000809b9) hwr_training_navi_pane_g3_ParamLimits

0xe8f7,	// (0x000809b9) hwr_training_navi_pane_g3

0xe907,	// (0x000809c9) hwr_training_navi_pane_g4_ParamLimits

0xe907,	// (0x000809c9) hwr_training_navi_pane_g4

0x0004,

0xf7ce,	// (0x00081890) hwr_training_navi_pane_g_ParamLimits

0xf7ce,	// (0x00081890) hwr_training_navi_pane_g

0xe914,	// (0x000809d6) hwr_training_navi_pane_t1

0x6a6c,	// (0x00078b2e) list_single_hwr_training_instruct_pane_ParamLimits

0x6a6c,	// (0x00078b2e) list_single_hwr_training_instruct_pane

0xc887,	// (0x0007e949) list_single_hwr_training_instruct_pane_t1

0xc058,	// (0x0007e11a) bg_frame_shadow_pane_g1

0xc896,	// (0x0007e958) bg_frame_shadow_pane_g2

0xc89e,	// (0x0007e960) bg_frame_shadow_pane_g3

0xc8a6,	// (0x0007e968) bg_frame_shadow_pane_g4

0xc8ae,	// (0x0007e970) bg_frame_shadow_pane_g5

0xc8b6,	// (0x0007e978) bg_frame_shadow_pane_g6

0xc8be,	// (0x0007e980) bg_frame_shadow_pane_g7

0x2439,	// (0x000744fb) bg_frame_shadow_pane_g8

0x0007,

0xf7d9,	// (0x0008189b) bg_frame_shadow_pane_g

0x162a,	// (0x000736ec) main_video_tele_dialer_pane

0x6a81,	// (0x00078b43) aid_size_cell_video_keypad_ParamLimits

0x6a81,	// (0x00078b43) aid_size_cell_video_keypad

0x6a9b,	// (0x00078b5d) grid_video_dialer_keypad_pane_ParamLimits

0x6a9b,	// (0x00078b5d) grid_video_dialer_keypad_pane

0x6ae7,	// (0x00078ba9) video_down_pane_cp_ParamLimits

0x6ae7,	// (0x00078ba9) video_down_pane_cp

0x6b19,	// (0x00078bdb) cell_video_dialer_keypad_pane_ParamLimits

0x6b19,	// (0x00078bdb) cell_video_dialer_keypad_pane

0xc8c6,	// (0x0007e988) bg_button_pane_cp08_ParamLimits

0xc8c6,	// (0x0007e988) bg_button_pane_cp08

0x6b3b,	// (0x00078bfd) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6b3b,	// (0x00078bfd) cell_video_dialer_keypad_pane_g1

0x643b,	// (0x000784fd) mup3_rocker2_pane_ParamLimits

0x643b,	// (0x000784fd) mup3_rocker2_pane

0x2cb3,	// (0x00074d75) mup3_rocker2_pane_g1

0x56da,	// (0x0007779c) main_dialer2_pane

0x162a,	// (0x000736ec) main_mp4_pane

0xe940,	// (0x00080a02) main_mp4_pane_g1_ParamLimits

0xe940,	// (0x00080a02) main_mp4_pane_g1

0xe940,	// (0x00080a02) main_mp4_pane_g2_ParamLimits

0xe940,	// (0x00080a02) main_mp4_pane_g2

0x6b72,	// (0x00078c34) main_mp4_pane_g3_ParamLimits

0x6b72,	// (0x00078c34) main_mp4_pane_g3

0xe94e,	// (0x00080a10) main_mp4_pane_g4_ParamLimits

0xe94e,	// (0x00080a10) main_mp4_pane_g4

0xe97c,	// (0x00080a3e) main_mp4_pane_g5_ParamLimits

0xe97c,	// (0x00080a3e) main_mp4_pane_g5

0x0007,

0xf7f9,	// (0x000818bb) main_mp4_pane_g_ParamLimits

0xf7f9,	// (0x000818bb) main_mp4_pane_g

0xe9f0,	// (0x00080ab2) main_mp4_pane_t1_ParamLimits

0xe9f0,	// (0x00080ab2) main_mp4_pane_t1

0xea4c,	// (0x00080b0e) main_mp4_pane_t2_ParamLimits

0xea4c,	// (0x00080b0e) main_mp4_pane_t2

0xc8d2,	// (0x0007e994) main_mp4_pane_t3_ParamLimits

0xc8d2,	// (0x0007e994) main_mp4_pane_t3

0xea9e,	// (0x00080b60) main_mp4_pane_t4_ParamLimits

0xea9e,	// (0x00080b60) main_mp4_pane_t4

0x0003,

0xf80a,	// (0x000818cc) main_mp4_pane_t_ParamLimits

0xf80a,	// (0x000818cc) main_mp4_pane_t

0xeae2,	// (0x00080ba4) mp4_progress_pane_ParamLimits

0xeae2,	// (0x00080ba4) mp4_progress_pane

0xeb2c,	// (0x00080bee) mp4_rocker_pane_ParamLimits

0xeb2c,	// (0x00080bee) mp4_rocker_pane

0xc900,	// (0x0007e9c2) mp4_progress_pane_t1

0xc919,	// (0x0007e9db) mp4_progress_pane_t2

0x0001,

0xf813,	// (0x000818d5) mp4_progress_pane_t

0xc932,	// (0x0007e9f4) mup_progress_pane_cp04

0x2cb3,	// (0x00074d75) mp4_rocker_pane_g1

0x6bae,	// (0x00078c70) aid_cell_size_keypad2_ParamLimits

0x6bae,	// (0x00078c70) aid_cell_size_keypad2

0x6bc4,	// (0x00078c86) dialer2_ne_pane_ParamLimits

0x6bc4,	// (0x00078c86) dialer2_ne_pane

0x6bde,	// (0x00078ca0) grid_dialer2_keypad_pane_ParamLimits

0x6bde,	// (0x00078ca0) grid_dialer2_keypad_pane

0xbda9,	// (0x0007de6b) bg_popup_call_pane_cp07_ParamLimits

0xbda9,	// (0x0007de6b) bg_popup_call_pane_cp07

0x6bfa,	// (0x00078cbc) dialer2_ne_pane_t1_ParamLimits

0x6bfa,	// (0x00078cbc) dialer2_ne_pane_t1

0x6c35,	// (0x00078cf7) cell_dialer2_keypad_pane_ParamLimits

0x6c35,	// (0x00078cf7) cell_dialer2_keypad_pane

0xc957,	// (0x0007ea19) bg_button_pane_pane_cp04_ParamLimits

0xc957,	// (0x0007ea19) bg_button_pane_pane_cp04

0x6c57,	// (0x00078d19) cell_dialer2_keypad_pane_g1_ParamLimits

0x6c57,	// (0x00078d19) cell_dialer2_keypad_pane_g1

0x2d8c,	// (0x00074e4e) aid_placing_vt_set_content_ParamLimits

0x2d8c,	// (0x00074e4e) aid_placing_vt_set_content

0x2db4,	// (0x00074e76) aid_placing_vt_set_title_ParamLimits

0x2db4,	// (0x00074e76) aid_placing_vt_set_title

0x162a,	// (0x000736ec) main_image3_pane

0x6d1d,	// (0x00078ddf) area_side_right_pane_cp01_ParamLimits

0x6d1d,	// (0x00078ddf) area_side_right_pane_cp01

0xe940,	// (0x00080a02) main_image3_pane_g1_ParamLimits

0xe940,	// (0x00080a02) main_image3_pane_g1

0x6d34,	// (0x00078df6) main_image3_pane_g2_ParamLimits

0x6d34,	// (0x00078df6) main_image3_pane_g2

0x6d5c,	// (0x00078e1e) main_image3_pane_g3_ParamLimits

0x6d5c,	// (0x00078e1e) main_image3_pane_g3

0x6d86,	// (0x00078e48) main_image3_pane_g4_ParamLimits

0x6d86,	// (0x00078e48) main_image3_pane_g4

0x0003,

0xf822,	// (0x000818e4) main_image3_pane_g_ParamLimits

0xf822,	// (0x000818e4) main_image3_pane_g

0x6db0,	// (0x00078e72) main_image3_pane_t1_ParamLimits

0x6db0,	// (0x00078e72) main_image3_pane_t1

0x6e08,	// (0x00078eca) main_image3_pane_t2_ParamLimits

0x6e08,	// (0x00078eca) main_image3_pane_t2

0x6e5a,	// (0x00078f1c) main_image3_pane_t3_ParamLimits

0x6e5a,	// (0x00078f1c) main_image3_pane_t3

0x0003,

0xf82b,	// (0x000818ed) main_image3_pane_t_ParamLimits

0xf82b,	// (0x000818ed) main_image3_pane_t

0x1855,	// (0x00073917) grid_sctrl_middle_pane_cp01_ParamLimits

0x1855,	// (0x00073917) grid_sctrl_middle_pane_cp01

0x6ee2,	// (0x00078fa4) cell_sctrl_middle_pane_cp01_ParamLimits

0x6ee2,	// (0x00078fa4) cell_sctrl_middle_pane_cp01

0x6eff,	// (0x00078fc1) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6eff,	// (0x00078fc1) cell_sctrl_middle_pane_cp01_g1

0x162a,	// (0x000736ec) main_call4_pane

0x6f15,	// (0x00078fd7) aid_size_button_call4_ParamLimits

0x6f15,	// (0x00078fd7) aid_size_button_call4

0x6f48,	// (0x0007900a) call4_windows_pane_ParamLimits

0x6f48,	// (0x0007900a) call4_windows_pane

0x6f67,	// (0x00079029) grid_call4_button_pane_ParamLimits

0x6f67,	// (0x00079029) grid_call4_button_pane

0x6f9a,	// (0x0007905c) call4_windows_conf_pane

0x6fb1,	// (0x00079073) popup_call4_audio_first_window_ParamLimits

0x6fb1,	// (0x00079073) popup_call4_audio_first_window

0x7001,	// (0x000790c3) popup_call4_audio_second_window_ParamLimits

0x7001,	// (0x000790c3) popup_call4_audio_second_window

0x7018,	// (0x000790da) popup_call4_audio_wait_window_ParamLimits

0x7018,	// (0x000790da) popup_call4_audio_wait_window

0x7026,	// (0x000790e8) cell_call4_button_pane_ParamLimits

0x7026,	// (0x000790e8) cell_call4_button_pane

0x704b,	// (0x0007910d) bg_button_pane_cp09_ParamLimits

0x704b,	// (0x0007910d) bg_button_pane_cp09

0x7057,	// (0x00079119) cell_call4_button_pane_g1_ParamLimits

0x7057,	// (0x00079119) cell_call4_button_pane_g1

0x707d,	// (0x0007913f) cell_call4_button_pane_t1_ParamLimits

0x707d,	// (0x0007913f) cell_call4_button_pane_t1

0xc96b,	// (0x0007ea2d) popup_call4_audio_conf_window_ParamLimits

0xc96b,	// (0x0007ea2d) popup_call4_audio_conf_window

0x649b,	// (0x0007855d) mup3_progress_pane_t1_ParamLimits

0x64ba,	// (0x0007857c) mup3_progress_pane_t2_ParamLimits

0xc3dc,	// (0x0007e49e) mup3_progress_pane_t3_ParamLimits

0xf705,	// (0x000817c7) mup3_progress_pane_t_ParamLimits

0xc3f9,	// (0x0007e4bb) mup_progress_pane_cp03_ParamLimits

0x69b9,	// (0x00078a7b) mup3_control_keys_pane_g4_copy1

0xeb10,	// (0x00080bd2) mp4_rocker2_pane_ParamLimits

0xeb10,	// (0x00080bd2) mp4_rocker2_pane

0xc97f,	// (0x0007ea41) mp4_rocker2_pane_g1

0xc987,	// (0x0007ea49) mp4_rocker2_pane_g2

0xebb0,	// (0x00080c72) mp4_rocker2_pane_g3

0xebb8,	// (0x00080c7a) mp4_rocker2_pane_g4

0xebc0,	// (0x00080c82) mp4_rocker2_pane_g5

0x0004,

0xf834,	// (0x000818f6) mp4_rocker2_pane_g

0x162a,	// (0x000736ec) main_camera4_pane

0x162a,	// (0x000736ec) main_video4_pane

0x6ab5,	// (0x00078b77) main_video_tele_dialer_pane_t1_ParamLimits

0x6ab5,	// (0x00078b77) main_video_tele_dialer_pane_t1

0x6ace,	// (0x00078b90) main_video_tele_dialer_pane_t2_ParamLimits

0x6ace,	// (0x00078b90) main_video_tele_dialer_pane_t2

0x0001,

0xf7ea,	// (0x000818ac) main_video_tele_dialer_pane_t_ParamLimits

0xf7ea,	// (0x000818ac) main_video_tele_dialer_pane_t

0x70bb,	// (0x0007917d) cam4_autofocus_pane_ParamLimits

0x70bb,	// (0x0007917d) cam4_autofocus_pane

0x70d1,	// (0x00079193) cam4_image_uncrop_pane_ParamLimits

0x70d1,	// (0x00079193) cam4_image_uncrop_pane

0x70eb,	// (0x000791ad) cam4_indicators_pane_ParamLimits

0x70eb,	// (0x000791ad) cam4_indicators_pane

0x7116,	// (0x000791d8) main_camera4_pane_g1_ParamLimits

0x7116,	// (0x000791d8) main_camera4_pane_g1

0x7128,	// (0x000791ea) main_camera4_pane_g2_ParamLimits

0x7128,	// (0x000791ea) main_camera4_pane_g2

0x713b,	// (0x000791fd) main_camera4_pane_g3_ParamLimits

0x713b,	// (0x000791fd) main_camera4_pane_g3

0x714e,	// (0x00079210) main_camera4_pane_g4_ParamLimits

0x714e,	// (0x00079210) main_camera4_pane_g4

0x7161,	// (0x00079223) main_camera4_pane_g5_ParamLimits

0x7161,	// (0x00079223) main_camera4_pane_g5

0x0005,

0xf83f,	// (0x00081901) main_camera4_pane_g_ParamLimits

0xf83f,	// (0x00081901) main_camera4_pane_g

0x7185,	// (0x00079247) main_camera4_pane_t1_ParamLimits

0x7185,	// (0x00079247) main_camera4_pane_t1

0x2002,	// (0x000740c4) bg_tb_trans_pane_cp06

0xebec,	// (0x00080cae) cam4_indicators_pane_g1

0xebfd,	// (0x00080cbf) cam4_indicators_pane_g2

0x0002,

0xf85a,	// (0x0008191c) cam4_indicators_pane_g

0xec1b,	// (0x00080cdd) cam4_indicators_pane_t1

0x71e9,	// (0x000792ab) main_video4_pane_g1_ParamLimits

0x71e9,	// (0x000792ab) main_video4_pane_g1

0x71f8,	// (0x000792ba) main_video4_pane_g2_ParamLimits

0x71f8,	// (0x000792ba) main_video4_pane_g2

0x7207,	// (0x000792c9) main_video4_pane_g3_ParamLimits

0x7207,	// (0x000792c9) main_video4_pane_g3

0x7216,	// (0x000792d8) main_video4_pane_g4_ParamLimits

0x7216,	// (0x000792d8) main_video4_pane_g4

0x0004,

0xf861,	// (0x00081923) main_video4_pane_g_ParamLimits

0xf861,	// (0x00081923) main_video4_pane_g

0x7234,	// (0x000792f6) vid4_indicators_pane_ParamLimits

0x7234,	// (0x000792f6) vid4_indicators_pane

0x7262,	// (0x00079324) video4_image_uncrop_cif_pane_ParamLimits

0x7262,	// (0x00079324) video4_image_uncrop_cif_pane

0x727c,	// (0x0007933e) video4_image_uncrop_nhd_pane_ParamLimits

0x727c,	// (0x0007933e) video4_image_uncrop_nhd_pane

0x70d1,	// (0x00079193) video4_image_uncrop_vga_pane_ParamLimits

0x70d1,	// (0x00079193) video4_image_uncrop_vga_pane

0x1855,	// (0x00073917) bg_tb_trans_pane_cp07

0xec47,	// (0x00080d09) vid4_indicators_pane_g1

0xec5b,	// (0x00080d1d) vid4_indicators_pane_g2

0xec6f,	// (0x00080d31) vid4_indicators_pane_g3

0x0004,

0xf86c,	// (0x0008192e) vid4_indicators_pane_g

0xec9e,	// (0x00080d60) vid4_indicators_pane_t1

0x7290,	// (0x00079352) cam4_autofocus_pane_g1

0x7298,	// (0x0007935a) cam4_autofocus_pane_g2

0x72a0,	// (0x00079362) cam4_autofocus_pane_g3

0x0002,

0xf877,	// (0x00081939) cam4_autofocus_pane_g

0x72a8,	// (0x0007936a) cam4_autofocus_pane_g3_copy1

0x6afd,	// (0x00078bbf) video_down_pane_cp_t1

0x6b0b,	// (0x00078bcd) video_down_pane_cp_t2

0x0001,

0xf7ef,	// (0x000818b1) video_down_pane_cp_t

0x1855,	// (0x00073917) popup_vitu2_window_ParamLimits

0x1855,	// (0x00073917) popup_vitu2_window

0x72b0,	// (0x00079372) aid_size_cell2_itu2_ParamLimits

0x72b0,	// (0x00079372) aid_size_cell2_itu2

0x72d6,	// (0x00079398) aid_size_cell_itu2_ParamLimits

0x72d6,	// (0x00079398) aid_size_cell_itu2

0x6544,	// (0x00078606) bg_popup_window_pane_cp09_ParamLimits

0x6544,	// (0x00078606) bg_popup_window_pane_cp09

0x7332,	// (0x000793f4) field_vitu2_entry_pane_ParamLimits

0x7332,	// (0x000793f4) field_vitu2_entry_pane

0x7358,	// (0x0007941a) grid_vitu2_function_pane_ParamLimits

0x7358,	// (0x0007941a) grid_vitu2_function_pane

0x73a9,	// (0x0007946b) grid_vitu2_itu_pane_ParamLimits

0x73a9,	// (0x0007946b) grid_vitu2_itu_pane

0x743f,	// (0x00079501) cell_vitu2_itu_pane_ParamLimits

0x743f,	// (0x00079501) cell_vitu2_itu_pane

0x746b,	// (0x0007952d) cell_vitu2_function_pane_ParamLimits

0x746b,	// (0x0007952d) cell_vitu2_function_pane

0xc9a1,	// (0x0007ea63) bg_popup_call_pane_cp08_ParamLimits

0xc9a1,	// (0x0007ea63) bg_popup_call_pane_cp08

0xc9b8,	// (0x0007ea7a) field_vitu2_entry_pane_g1

0xc9c4,	// (0x0007ea86) field_vitu2_entry_pane_g2

0x0002,

0xf87e,	// (0x00081940) field_vitu2_entry_pane_g

0x0ecf,	// (0x00072f91) field_vitu2_entry_pane_t1_ParamLimits

0x0ecf,	// (0x00072f91) field_vitu2_entry_pane_t1

0xc9d0,	// (0x0007ea92) field_vitu2_entry_pane_t2_ParamLimits

0xc9d0,	// (0x0007ea92) field_vitu2_entry_pane_t2

0x0001,

0xf885,	// (0x00081947) field_vitu2_entry_pane_t_ParamLimits

0xf885,	// (0x00081947) field_vitu2_entry_pane_t

0x74aa,	// (0x0007956c) bg_button_pane_cp010_ParamLimits

0x74aa,	// (0x0007956c) bg_button_pane_cp010

0x74b8,	// (0x0007957a) cell_vitu2_itu_pane_g1

0x74de,	// (0x000795a0) cell_vitu2_itu_pane_t1_ParamLimits

0x74de,	// (0x000795a0) cell_vitu2_itu_pane_t1

0x0efe,	// (0x00072fc0) cell_vitu2_itu_pane_t2_ParamLimits

0x0efe,	// (0x00072fc0) cell_vitu2_itu_pane_t2

0x0002,

0xf88f,	// (0x00081951) cell_vitu2_itu_pane_t_ParamLimits

0xf88f,	// (0x00081951) cell_vitu2_itu_pane_t

0x1855,	// (0x00073917) bg_button_pane_cp011

0x753c,	// (0x000795fe) cell_vitu2_function_pane_g1

0x162a,	// (0x000736ec) main_myfav_hc_pane

0x6eaa,	// (0x00078f6c) popup_image3_note_pane_ParamLimits

0x6eaa,	// (0x00078f6c) popup_image3_note_pane

0x6ec6,	// (0x00078f88) popup_image3_tool_bar_pane_ParamLimits

0x6ec6,	// (0x00078f88) popup_image3_tool_bar_pane

0x0f8c,	// (0x0007304e) cell_vitu2_itu_pane_t3_ParamLimits

0x0f8c,	// (0x0007304e) cell_vitu2_itu_pane_t3

0x162a,	// (0x000736ec) bg_popup_trans_pane

0xc9f5,	// (0x0007eab7) grid_image3_tool_bar_pane

0xc9ff,	// (0x0007eac1) bg_popup_trans_pane_g1

0x3385,	// (0x00075447) bg_popup_trans_pane_g2

0xca07,	// (0x0007eac9) bg_popup_trans_pane_g3

0xca0f,	// (0x0007ead1) bg_popup_trans_pane_g4

0xca17,	// (0x0007ead9) bg_popup_trans_pane_g5

0xca1f,	// (0x0007eae1) bg_popup_trans_pane_g6

0xca27,	// (0x0007eae9) bg_popup_trans_pane_g7

0xca2f,	// (0x0007eaf1) bg_popup_trans_pane_g8

0x3365,	// (0x00075427) bg_popup_trans_pane_g9

0x0008,

0xf896,	// (0x00081958) bg_popup_trans_pane_g

0xca37,	// (0x0007eaf9) cell_image3_tool_bar_pane_ParamLimits

0xca37,	// (0x0007eaf9) cell_image3_tool_bar_pane

0x2cb3,	// (0x00074d75) cell_image3_tool_bar_pane_g1

0x162a,	// (0x000736ec) bg_popup_trans_pane_cp1

0xca4b,	// (0x0007eb0d) popup_image3_note_pane_t1

0xca59,	// (0x0007eb1b) popup_image3_note_pane_t2

0xca67,	// (0x0007eb29) popup_image3_note_pane_t3

0x0002,

0xf8a9,	// (0x0008196b) popup_image3_note_pane_t

0xca75,	// (0x0007eb37) popup_image3_note_pane_t3_copy1

0x7550,	// (0x00079612) bg_myfav_hc_instruction_pane_ParamLimits

0x7550,	// (0x00079612) bg_myfav_hc_instruction_pane

0x7564,	// (0x00079626) cell_myfav_contact_pane_ParamLimits

0x7564,	// (0x00079626) cell_myfav_contact_pane

0x7582,	// (0x00079644) cell_myfav_contact_pane_cp1_ParamLimits

0x7582,	// (0x00079644) cell_myfav_contact_pane_cp1

0x759a,	// (0x0007965c) cell_myfav_contact_pane_cp2_ParamLimits

0x759a,	// (0x0007965c) cell_myfav_contact_pane_cp2

0x75b2,	// (0x00079674) cell_myfav_contact_pane_cp3_ParamLimits

0x75b2,	// (0x00079674) cell_myfav_contact_pane_cp3

0x75c9,	// (0x0007968b) cell_myfav_contact_pane_cp4_ParamLimits

0x75c9,	// (0x0007968b) cell_myfav_contact_pane_cp4

0x75e1,	// (0x000796a3) cell_myfav_contact_pane_cp5_ParamLimits

0x75e1,	// (0x000796a3) cell_myfav_contact_pane_cp5

0x75f5,	// (0x000796b7) cell_myfav_contact_pane_cp6_ParamLimits

0x75f5,	// (0x000796b7) cell_myfav_contact_pane_cp6

0x760b,	// (0x000796cd) cell_myfav_contact_pane_cp7_ParamLimits

0x760b,	// (0x000796cd) cell_myfav_contact_pane_cp7

0xca83,	// (0x0007eb45) listscroll_gen_pane_cp05

0x7625,	// (0x000796e7) main_myfav_hc_pane_g1_ParamLimits

0x7625,	// (0x000796e7) main_myfav_hc_pane_g1

0x763f,	// (0x00079701) main_myfav_hc_pane_g2_ParamLimits

0x763f,	// (0x00079701) main_myfav_hc_pane_g2

0x0002,

0xf8b0,	// (0x00081972) main_myfav_hc_pane_g_ParamLimits

0xf8b0,	// (0x00081972) main_myfav_hc_pane_g

0x7671,	// (0x00079733) main_myfav_hc_pane_t1_ParamLimits

0x7671,	// (0x00079733) main_myfav_hc_pane_t1

0xca8c,	// (0x0007eb4e) main_myfav_hc_pane_t2_ParamLimits

0xca8c,	// (0x0007eb4e) main_myfav_hc_pane_t2

0xca9e,	// (0x0007eb60) main_myfav_hc_pane_t3_ParamLimits

0xca9e,	// (0x0007eb60) main_myfav_hc_pane_t3

0x7688,	// (0x0007974a) main_myfav_hc_pane_t4_ParamLimits

0x7688,	// (0x0007974a) main_myfav_hc_pane_t4

0x0004,

0xf8b7,	// (0x00081979) main_myfav_hc_pane_t_ParamLimits

0xf8b7,	// (0x00081979) main_myfav_hc_pane_t

0x2cb3,	// (0x00074d75) bg_myfav_hc_instruction_pane_g1

0xcab0,	// (0x0007eb72) cell_myfav_contact_pane_g1_ParamLimits

0xcab0,	// (0x0007eb72) cell_myfav_contact_pane_g1

0xcab0,	// (0x0007eb72) cell_myfav_contact_pane_g2_ParamLimits

0xcab0,	// (0x0007eb72) cell_myfav_contact_pane_g2

0xcabc,	// (0x0007eb7e) cell_myfav_contact_pane_g3_ParamLimits

0xcabc,	// (0x0007eb7e) cell_myfav_contact_pane_g3

0x2010,	// (0x000740d2) cell_myfav_contact_pane_g4_ParamLimits

0x2010,	// (0x000740d2) cell_myfav_contact_pane_g4

0xcac9,	// (0x0007eb8b) cell_myfav_contact_pane_g5_ParamLimits

0xcac9,	// (0x0007eb8b) cell_myfav_contact_pane_g5

0x0004,

0xf8c2,	// (0x00081984) cell_myfav_contact_pane_g_ParamLimits

0xf8c2,	// (0x00081984) cell_myfav_contact_pane_g

0x7659,	// (0x0007971b) main_myfav_hc_pane_g3_ParamLimits

0x7659,	// (0x0007971b) main_myfav_hc_pane_g3

0x1793,	// (0x00073855) popup_adpt_find_window

0x76b0,	// (0x00079772) afind_page_pane_ParamLimits

0x76b0,	// (0x00079772) afind_page_pane

0x76c5,	// (0x00079787) aid_size_cell_afind_ParamLimits

0x76c5,	// (0x00079787) aid_size_cell_afind

0x76e3,	// (0x000797a5) bg_popup_sub_pane_cp09_ParamLimits

0x76e3,	// (0x000797a5) bg_popup_sub_pane_cp09

0x76f0,	// (0x000797b2) find_pane_cp01_ParamLimits

0x76f0,	// (0x000797b2) find_pane_cp01

0xcad5,	// (0x0007eb97) grid_afind_control_pane_ParamLimits

0xcad5,	// (0x0007eb97) grid_afind_control_pane

0x76fd,	// (0x000797bf) grid_afind_pane_ParamLimits

0x76fd,	// (0x000797bf) grid_afind_pane

0x771f,	// (0x000797e1) cell_afind_pane_ParamLimits

0x771f,	// (0x000797e1) cell_afind_pane

0x2cb3,	// (0x00074d75) afind_page_pane_g1

0x7786,	// (0x00079848) afind_page_pane_g2

0x778f,	// (0x00079851) afind_page_pane_g3

0x0002,

0xf8cd,	// (0x0008198f) afind_page_pane_g

0x7798,	// (0x0007985a) afind_page_pane_t1

0xcae9,	// (0x0007ebab) cell_afind_grid_control_pane_ParamLimits

0xcae9,	// (0x0007ebab) cell_afind_grid_control_pane

0xc957,	// (0x0007ea19) bg_button_pane_cp69_ParamLimits

0xc957,	// (0x0007ea19) bg_button_pane_cp69

0x77b8,	// (0x0007987a) cell_afind_pane_g1_ParamLimits

0x77b8,	// (0x0007987a) cell_afind_pane_g1

0x77c5,	// (0x00079887) cell_afind_pane_t1_ParamLimits

0x77c5,	// (0x00079887) cell_afind_pane_t1

0x2d1f,	// (0x00074de1) bg_button_pane_cp72

0xcaf8,	// (0x0007ebba) cell_afind_grid_control_pane_g1

0x5159,	// (0x0007721b) aid_image_placing_area_ParamLimits

0x5159,	// (0x0007721b) aid_image_placing_area

0x2002,	// (0x000740c4) field_vitu_entry_pane_g1_ParamLimits

0x2002,	// (0x000740c4) field_vitu_entry_pane_g1

0x2002,	// (0x000740c4) field_vitu_entry_pane_g2_ParamLimits

0x2002,	// (0x000740c4) field_vitu_entry_pane_g2

0x0001,

0xf1ad,	// (0x0008126f) field_vitu_entry_pane_g_ParamLimits

0xf1ad,	// (0x0008126f) field_vitu_entry_pane_g

0xc6e9,	// (0x0007e7ab) cell_vitu_itu_pane_g1_ParamLimits

0xc6cc,	// (0x0007e78e) cell_vitu_itu_pane_t3_ParamLimits

0xc6cc,	// (0x0007e78e) cell_vitu_itu_pane_t3

0xc900,	// (0x0007e9c2) mp4_progress_pane_t1_ParamLimits

0xc919,	// (0x0007e9db) mp4_progress_pane_t2_ParamLimits

0xf813,	// (0x000818d5) mp4_progress_pane_t_ParamLimits

0xc932,	// (0x0007e9f4) mup_progress_pane_cp04_ParamLimits

0x769c,	// (0x0007975e) main_myfav_hc_pane_t5_ParamLimits

0x769c,	// (0x0007975e) main_myfav_hc_pane_t5

0xa7df,	// (0x0007c8a1) aid_zoom_text_primary

0x1793,	// (0x00073855) popup_adpt_find_window_ParamLimits

0x1855,	// (0x00073917) main_cam_set_pane

0x7102,	// (0x000791c4) cam4_zoom_pane_ParamLimits

0x7102,	// (0x000791c4) cam4_zoom_pane

0x77d7,	// (0x00079899) main_cam_set_pane_g1_ParamLimits

0x77d7,	// (0x00079899) main_cam_set_pane_g1

0x77e5,	// (0x000798a7) main_cam_set_pane_g2_ParamLimits

0x77e5,	// (0x000798a7) main_cam_set_pane_g2

0x0001,

0xf8d4,	// (0x00081996) main_cam_set_pane_g_ParamLimits

0xf8d4,	// (0x00081996) main_cam_set_pane_g

0x7806,	// (0x000798c8) main_cam_set_pane_t1_ParamLimits

0x7806,	// (0x000798c8) main_cam_set_pane_t1

0x7821,	// (0x000798e3) main_cset_listscroll_pane_ParamLimits

0x7821,	// (0x000798e3) main_cset_listscroll_pane

0x7847,	// (0x00079909) main_cset_slider_pane_ParamLimits

0x7847,	// (0x00079909) main_cset_slider_pane

0xcb09,	// (0x0007ebcb) main_cset_list_pane_ParamLimits

0xcb09,	// (0x0007ebcb) main_cset_list_pane

0xcb19,	// (0x0007ebdb) scroll_pane_cp028

0x786d,	// (0x0007992f) aid_area_touch_slider

0x7889,	// (0x0007994b) cset_slider_pane

0x78ac,	// (0x0007996e) main_cset_slider_pane_g1

0x78c1,	// (0x00079983) main_cset_slider_pane_g2

0x0011,

0xf8d9,	// (0x0008199b) main_cset_slider_pane_g

0xcb52,	// (0x0007ec14) main_cset_slider_pane_t1

0x797d,	// (0x00079a3f) main_cset_slider_pane_t2

0x7997,	// (0x00079a59) main_cset_slider_pane_t3

0x79b1,	// (0x00079a73) main_cset_slider_pane_t4

0x79cb,	// (0x00079a8d) main_cset_slider_pane_t5

0x79e5,	// (0x00079aa7) main_cset_slider_pane_t6

0x79fa,	// (0x00079abc) main_cset_slider_pane_t7

0x000e,

0xf8fe,	// (0x000819c0) main_cset_slider_pane_t

0x7afe,	// (0x00079bc0) cset_list_set_pane_ParamLimits

0x7afe,	// (0x00079bc0) cset_list_set_pane

0xcbec,	// (0x0007ecae) aid_position_infowindow_above

0xcbf4,	// (0x0007ecb6) aid_position_infowindow_below

0xecb5,	// (0x00080d77) cset_list_set_pane_g1_ParamLimits

0xecb5,	// (0x00080d77) cset_list_set_pane_g1

0xcbfc,	// (0x0007ecbe) cset_list_set_pane_g3_ParamLimits

0xcbfc,	// (0x0007ecbe) cset_list_set_pane_g3

0x0001,

0xf91d,	// (0x000819df) cset_list_set_pane_g_ParamLimits

0xf91d,	// (0x000819df) cset_list_set_pane_g

0xcc0b,	// (0x0007eccd) cset_list_set_pane_t1_ParamLimits

0xcc0b,	// (0x0007eccd) cset_list_set_pane_t1

0x1855,	// (0x00073917) list_highlight_pane_cp021_ParamLimits

0x1855,	// (0x00073917) list_highlight_pane_cp021

0xaa13,	// (0x0007cad5) cset_slider_pane_g1

0xaa25,	// (0x0007cae7) cset_slider_pane_g2

0xaa1c,	// (0x0007cade) cset_slider_pane_g3

0x0002,

0xf922,	// (0x000819e4) cset_slider_pane_g

0xecc1,	// (0x00080d83) aid_area_touch_cam4_zoom

0xecc9,	// (0x00080d8b) cam4_zoom_cont_pane

0xecd1,	// (0x00080d93) cam4_zoom_pane_g1

0xecd9,	// (0x00080d9b) cam4_zoom_pane_g2

0x7b10,	// (0x00079bd2) cam4_zoom_pane_g3

0x0002,

0xf929,	// (0x000819eb) cam4_zoom_pane_g

0xee12,	// (0x00080ed4) cam4_zoom_cont_pane_g1

0xee1b,	// (0x00080edd) cam4_zoom_cont_pane_g2

0xee24,	// (0x00080ee6) cam4_zoom_cont_pane_g3

0x0002,

0x0873,	// (0x00072935) cam4_zoom_cont_pane_g

0x6f33,	// (0x00078ff5) call4_image_pane_ParamLimits

0x6f33,	// (0x00078ff5) call4_image_pane

0x6f9a,	// (0x0007905c) call4_windows_conf_pane_ParamLimits

0x6fdf,	// (0x000790a1) popup_call4_audio_in_window_ParamLimits

0x6fdf,	// (0x000790a1) popup_call4_audio_in_window

0x162a,	// (0x000736ec) bg_popup_call2_act_pane_cp02

0xc963,	// (0x0007ea25) call4_list_conf_pane

0x2cb3,	// (0x00074d75) call4_image_pane_g1

0x2cb3,	// (0x00074d75) call4_image_pane_g2

0x0001,

0xf3b9,	// (0x0008147b) call4_image_pane_g

0xcc20,	// (0x0007ece2) list_single_graphic_popup_conf4_pane_ParamLimits

0xcc20,	// (0x0007ece2) list_single_graphic_popup_conf4_pane

0x162a,	// (0x000736ec) list_highlight_pane_cp022

0xcc33,	// (0x0007ecf5) list_single_graphic_popup_conf4_pane_g1

0x4508,	// (0x000765ca) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf930,	// (0x000819f2) list_single_graphic_popup_conf4_pane_g

0xcc3b,	// (0x0007ecfd) list_single_graphic_popup_conf4_pane_t1

0x2eea,	// (0x00074fac) popup_vtel_slider_window_ParamLimits

0x2eea,	// (0x00074fac) popup_vtel_slider_window

0xc945,	// (0x0007ea07) dialer2_ne_pane_t2_ParamLimits

0xc945,	// (0x0007ea07) dialer2_ne_pane_t2

0x0001,

0xf818,	// (0x000818da) dialer2_ne_pane_t_ParamLimits

0xf818,	// (0x000818da) dialer2_ne_pane_t

0xbda9,	// (0x0007de6b) bg_popup_sub_pane_cp010_ParamLimits

0xbda9,	// (0x0007de6b) bg_popup_sub_pane_cp010

0x7b18,	// (0x00079bda) popup_vtel_slider_window_g1_ParamLimits

0x7b18,	// (0x00079bda) popup_vtel_slider_window_g1

0x7b2b,	// (0x00079bed) popup_vtel_slider_window_g2_ParamLimits

0x7b2b,	// (0x00079bed) popup_vtel_slider_window_g2

0x0003,

0xf935,	// (0x000819f7) popup_vtel_slider_window_g_ParamLimits

0xf935,	// (0x000819f7) popup_vtel_slider_window_g

0x7b81,	// (0x00079c43) vtel_slider_pane_ParamLimits

0x7b81,	// (0x00079c43) vtel_slider_pane

0x7ba3,	// (0x00079c65) vtel_slider_pane_g1_ParamLimits

0x7ba3,	// (0x00079c65) vtel_slider_pane_g1

0x7bb7,	// (0x00079c79) vtel_slider_pane_g2_ParamLimits

0x7bb7,	// (0x00079c79) vtel_slider_pane_g2

0x7bcf,	// (0x00079c91) vtel_slider_pane_g3_ParamLimits

0x7bcf,	// (0x00079c91) vtel_slider_pane_g3

0x7ba3,	// (0x00079c65) vtel_slider_pane_g4_ParamLimits

0x7ba3,	// (0x00079c65) vtel_slider_pane_g4

0x7be5,	// (0x00079ca7) vtel_slider_pane_g5_ParamLimits

0x7be5,	// (0x00079ca7) vtel_slider_pane_g5

0x0004,

0xf93e,	// (0x00081a00) vtel_slider_pane_g_ParamLimits

0xf93e,	// (0x00081a00) vtel_slider_pane_g

0x1855,	// (0x00073917) main_gallery2_pane

0x7302,	// (0x000793c4) aid_size_row_itut2_dropdow_list_ParamLimits

0x7302,	// (0x000793c4) aid_size_row_itut2_dropdow_list

0x7380,	// (0x00079442) grid_vitu2_function_top_pane_ParamLimits

0x7380,	// (0x00079442) grid_vitu2_function_top_pane

0x73ea,	// (0x000794ac) popup_vitu2_dropdown_list_window_ParamLimits

0x73ea,	// (0x000794ac) popup_vitu2_dropdown_list_window

0x7411,	// (0x000794d3) popup_vitu2_match_list_window

0x7bfb,	// (0x00079cbd) cell_vitu2_function_top_pane_ParamLimits

0x7bfb,	// (0x00079cbd) cell_vitu2_function_top_pane

0x7c13,	// (0x00079cd5) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7c13,	// (0x00079cd5) cell_vitu2_function_top_pane_cp01

0x7c2f,	// (0x00079cf1) cell_vitu2_function_top_wide_pane_ParamLimits

0x7c2f,	// (0x00079cf1) cell_vitu2_function_top_wide_pane

0x1855,	// (0x00073917) bg_button_pane_cp012

0x7c4d,	// (0x00079d0f) cell_vitu2_function_top_pane_g1

0xece1,	// (0x00080da3) bg_button_pane_cp013_ParamLimits

0xece1,	// (0x00080da3) bg_button_pane_cp013

0x7c61,	// (0x00079d23) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7c61,	// (0x00079d23) cell_vitu2_function_top_wide_pane_g1

0x1855,	// (0x00073917) bg_popup_sub_pane_cp20

0x7c79,	// (0x00079d3b) list_vitu2_match_list_pane

0xc9ff,	// (0x0007eac1) bg_popup_sub_pane_cp20_g1

0xca07,	// (0x0007eac9) bg_popup_sub_pane_cp20_g2

0x3385,	// (0x00075447) bg_popup_sub_pane_cp20_g3

0xca0f,	// (0x0007ead1) bg_popup_sub_pane_cp20_g4

0x3365,	// (0x00075427) bg_popup_sub_pane_cp20_g5

0xcc51,	// (0x0007ed13) bg_popup_sub_pane_cp20_g6

0xca1f,	// (0x0007eae1) bg_popup_sub_pane_cp20_g7

0xca27,	// (0x0007eae9) bg_popup_sub_pane_cp20_g8

0xca2f,	// (0x0007eaf1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf949,	// (0x00081a0b) bg_popup_sub_pane_cp20_g

0xecfd,	// (0x00080dbf) list_vitu2_match_list_item_pane_ParamLimits

0xecfd,	// (0x00080dbf) list_vitu2_match_list_item_pane

0xed0f,	// (0x00080dd1) list_vitu2_match_list_item_pane_t1

0x162a,	// (0x000736ec) bg_popup_sub_pane_cp21

0x2ac6,	// (0x00074b88) grid_vitu2_dropdown_list_pane

0x7c91,	// (0x00079d53) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7c91,	// (0x00079d53) cell_vitu2_dropdown_list_char_pane

0x7cb1,	// (0x00079d73) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7cb1,	// (0x00079d73) cell_vitu2_dropdown_list_ctrl_pane

0xcc59,	// (0x0007ed1b) cell_vitu2_dropdown_list_char_pane_g1

0xcc62,	// (0x0007ed24) cell_vitu2_dropdown_list_char_pane_g2

0xcc6b,	// (0x0007ed2d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf95c,	// (0x00081a1e) cell_vitu2_dropdown_list_char_pane_g

0x7cd9,	// (0x00079d9b) cell_vitu2_dropdown_list_char_pane_t1

0x7ce7,	// (0x00079da9) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7ce7,	// (0x00079da9) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7cf4,	// (0x00079db6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7cf4,	// (0x00079db6) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7d01,	// (0x00079dc3) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7d01,	// (0x00079dc3) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7d0e,	// (0x00079dd0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7d0e,	// (0x00079dd0) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2002,	// (0x000740c4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2002,	// (0x000740c4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf963,	// (0x00081a25) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf963,	// (0x00081a25) cell_vitu2_dropdown_list_ctrl_pane_g

0x7d2a,	// (0x00079dec) aid_size_cell_gallery2_ParamLimits

0x7d2a,	// (0x00079dec) aid_size_cell_gallery2

0x7d48,	// (0x00079e0a) grid_gallery2_pane_ParamLimits

0x7d48,	// (0x00079e0a) grid_gallery2_pane

0x7d62,	// (0x00079e24) scroll_pane_cp029_ParamLimits

0x7d62,	// (0x00079e24) scroll_pane_cp029

0x7d73,	// (0x00079e35) cell_gallery2_pane_ParamLimits

0x7d73,	// (0x00079e35) cell_gallery2_pane

0xcc74,	// (0x0007ed36) cell_gallery2_pane_g2

0x7dd2,	// (0x00079e94) cell_gallery2_pane_g3

0xcc7c,	// (0x0007ed3e) cell_gallery2_pane_g4

0xcc84,	// (0x0007ed46) cell_gallery2_pane_g5

0x2ac6,	// (0x00074b88) grid_highlight_pane_cp10

0x7411,	// (0x000794d3) popup_vitu2_match_list_window_ParamLimits

0x7426,	// (0x000794e8) popup_vitu2_query_window_ParamLimits

0x7426,	// (0x000794e8) popup_vitu2_query_window

0x162a,	// (0x000736ec) bg_vitu2_candi_button_pane

0xcc59,	// (0x0007ed1b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcc62,	// (0x0007ed24) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcc6b,	// (0x0007ed2d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0fea,	// (0x000730ac) bg_button_pane_cp015

0x7dda,	// (0x00079e9c) bg_button_pane_cp016

0x7de6,	// (0x00079ea8) bg_button_pane_cp017

0xa9a3,	// (0x0007ca65) bg_popup_sub_pane_cp22

0xcc8c,	// (0x0007ed4e) popup_vitu2_query_window_g1

0x101e,	// (0x000730e0) popup_vitu2_query_window_g2

0x0002,

0xf96e,	// (0x00081a30) popup_vitu2_query_window_g

0x1034,	// (0x000730f6) popup_vitu2_query_window_t1_ParamLimits

0x1034,	// (0x000730f6) popup_vitu2_query_window_t1

0x1067,	// (0x00073129) popup_vitu2_query_window_t2_ParamLimits

0x1067,	// (0x00073129) popup_vitu2_query_window_t2

0x1079,	// (0x0007313b) popup_vitu2_query_window_t3_ParamLimits

0x1079,	// (0x0007313b) popup_vitu2_query_window_t3

0x7e0d,	// (0x00079ecf) popup_vitu2_query_window_t4_ParamLimits

0x7e0d,	// (0x00079ecf) popup_vitu2_query_window_t4

0x7e21,	// (0x00079ee3) popup_vitu2_query_window_t5_ParamLimits

0x7e21,	// (0x00079ee3) popup_vitu2_query_window_t5

0x0006,

0xf975,	// (0x00081a37) popup_vitu2_query_window_t_ParamLimits

0xf975,	// (0x00081a37) popup_vitu2_query_window_t

0xcb01,	// (0x0007ebc3) main_cset_text_pane

0x786d,	// (0x0007992f) aid_area_touch_slider_ParamLimits

0x7889,	// (0x0007994b) cset_slider_pane_ParamLimits

0x78ac,	// (0x0007996e) main_cset_slider_pane_g1_ParamLimits

0x78c1,	// (0x00079983) main_cset_slider_pane_g2_ParamLimits

0xcb22,	// (0x0007ebe4) main_cset_slider_pane_g3_ParamLimits

0xcb22,	// (0x0007ebe4) main_cset_slider_pane_g3

0x78d6,	// (0x00079998) main_cset_slider_pane_g4_ParamLimits

0x78d6,	// (0x00079998) main_cset_slider_pane_g4

0x78e5,	// (0x000799a7) main_cset_slider_pane_g5_ParamLimits

0x78e5,	// (0x000799a7) main_cset_slider_pane_g5

0x78f1,	// (0x000799b3) main_cset_slider_pane_g6_ParamLimits

0x78f1,	// (0x000799b3) main_cset_slider_pane_g6

0xf8d9,	// (0x0008199b) main_cset_slider_pane_g_ParamLimits

0xcb52,	// (0x0007ec14) main_cset_slider_pane_t1_ParamLimits

0x797d,	// (0x00079a3f) main_cset_slider_pane_t2_ParamLimits

0x7997,	// (0x00079a59) main_cset_slider_pane_t3_ParamLimits

0x79b1,	// (0x00079a73) main_cset_slider_pane_t4_ParamLimits

0x79cb,	// (0x00079a8d) main_cset_slider_pane_t5_ParamLimits

0x79e5,	// (0x00079aa7) main_cset_slider_pane_t6_ParamLimits

0x79fa,	// (0x00079abc) main_cset_slider_pane_t7_ParamLimits

0x7a24,	// (0x00079ae6) main_cset_slider_pane_t8_ParamLimits

0x7a24,	// (0x00079ae6) main_cset_slider_pane_t8

0x7a4c,	// (0x00079b0e) main_cset_slider_pane_t9_ParamLimits

0x7a4c,	// (0x00079b0e) main_cset_slider_pane_t9

0x7a74,	// (0x00079b36) main_cset_slider_pane_t10_ParamLimits

0x7a74,	// (0x00079b36) main_cset_slider_pane_t10

0x7a9c,	// (0x00079b5e) main_cset_slider_pane_t11_ParamLimits

0x7a9c,	// (0x00079b5e) main_cset_slider_pane_t11

0x7ac4,	// (0x00079b86) main_cset_slider_pane_t12_ParamLimits

0x7ac4,	// (0x00079b86) main_cset_slider_pane_t12

0x7ae1,	// (0x00079ba3) main_cset_slider_pane_t13_ParamLimits

0x7ae1,	// (0x00079ba3) main_cset_slider_pane_t13

0xf8fe,	// (0x000819c0) main_cset_slider_pane_t_ParamLimits

0x162a,	// (0x000736ec) bg_popup_sub_pane_cp011

0xcc98,	// (0x0007ed5a) main_cset_text_pane_g1

0xcca0,	// (0x0007ed62) main_cset_text_pane_t1

0xccae,	// (0x0007ed70) main_cset_text_pane_t2

0xccbc,	// (0x0007ed7e) main_cset_text_pane_t3

0xccca,	// (0x0007ed8c) main_cset_text_pane_t4

0xccd8,	// (0x0007ed9a) main_cset_text_pane_t5

0xcce6,	// (0x0007eda8) main_cset_text_pane_t6

0xccf4,	// (0x0007edb6) main_cset_text_pane_t7

0x0006,

0xf984,	// (0x00081a46) main_cset_text_pane_t

0x162a,	// (0x000736ec) main_cam4_burst_pane

0x162a,	// (0x000736ec) main_cam5_pane

0x77a6,	// (0x00079868) bg_button_pane_cp019

0x77af,	// (0x00079871) bg_button_pane_cp020

0xcb2e,	// (0x0007ebf0) main_cset_slider_pane_g7_ParamLimits

0xcb2e,	// (0x0007ebf0) main_cset_slider_pane_g7

0xcb3a,	// (0x0007ebfc) main_cset_slider_pane_g8_ParamLimits

0xcb3a,	// (0x0007ebfc) main_cset_slider_pane_g8

0x7905,	// (0x000799c7) main_cset_slider_pane_g9_ParamLimits

0x7905,	// (0x000799c7) main_cset_slider_pane_g9

0x7911,	// (0x000799d3) main_cset_slider_pane_g10_ParamLimits

0x7911,	// (0x000799d3) main_cset_slider_pane_g10

0x791d,	// (0x000799df) main_cset_slider_pane_g11_ParamLimits

0x791d,	// (0x000799df) main_cset_slider_pane_g11

0x7929,	// (0x000799eb) main_cset_slider_pane_g12_ParamLimits

0x7929,	// (0x000799eb) main_cset_slider_pane_g12

0x7935,	// (0x000799f7) main_cset_slider_pane_g13_ParamLimits

0x7935,	// (0x000799f7) main_cset_slider_pane_g13

0x7941,	// (0x00079a03) main_cset_slider_pane_g14_ParamLimits

0x7941,	// (0x00079a03) main_cset_slider_pane_g14

0x794d,	// (0x00079a0f) main_cset_slider_pane_g15_ParamLimits

0x794d,	// (0x00079a0f) main_cset_slider_pane_g15

0xcb7a,	// (0x0007ec3c) main_cset_slider_pane_t14_ParamLimits

0xcb7a,	// (0x0007ec3c) main_cset_slider_pane_t14

0xcbb3,	// (0x0007ec75) main_cset_slider_pane_t15_ParamLimits

0xcbb3,	// (0x0007ec75) main_cset_slider_pane_t15

0x7e35,	// (0x00079ef7) aid_cam4_burst_size_cell_ParamLimits

0x7e35,	// (0x00079ef7) aid_cam4_burst_size_cell

0x7e55,	// (0x00079f17) grid_cam4_burst_pane_ParamLimits

0x7e55,	// (0x00079f17) grid_cam4_burst_pane

0x7e8d,	// (0x00079f4f) linegrid_cam4_burst_pane_ParamLimits

0x7e8d,	// (0x00079f4f) linegrid_cam4_burst_pane

0xcd02,	// (0x0007edc4) scroll_pane_cp30_ParamLimits

0xcd02,	// (0x0007edc4) scroll_pane_cp30

0x7eb1,	// (0x00079f73) cell_cam4_burst_pane_ParamLimits

0x7eb1,	// (0x00079f73) cell_cam4_burst_pane

0xcd0e,	// (0x0007edd0) linegrid_cam4_burst_pane_g1_ParamLimits

0xcd0e,	// (0x0007edd0) linegrid_cam4_burst_pane_g1

0x7efe,	// (0x00079fc0) linegrid_cam4_burst_pane_g2_ParamLimits

0x7efe,	// (0x00079fc0) linegrid_cam4_burst_pane_g2

0xcd1b,	// (0x0007eddd) linegrid_cam4_burst_pane_g3_ParamLimits

0xcd1b,	// (0x0007eddd) linegrid_cam4_burst_pane_g3

0x0002,

0xf993,	// (0x00081a55) linegrid_cam4_burst_pane_g_ParamLimits

0xf993,	// (0x00081a55) linegrid_cam4_burst_pane_g

0x7f0f,	// (0x00079fd1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7f0f,	// (0x00079fd1) linegrid_cam4_burst_pane_g3_copy1

0xcd28,	// (0x0007edea) linegrid_cam4_burst_pane_g4_ParamLimits

0xcd28,	// (0x0007edea) linegrid_cam4_burst_pane_g4

0x7f29,	// (0x00079feb) linegrid_cam4_burst_pane_g5_ParamLimits

0x7f29,	// (0x00079feb) linegrid_cam4_burst_pane_g5

0x7f3a,	// (0x00079ffc) linegrid_cam4_burst_pane_g6_ParamLimits

0x7f3a,	// (0x00079ffc) linegrid_cam4_burst_pane_g6

0xcd35,	// (0x0007edf7) linegrid_cam4_burst_pane_g7_ParamLimits

0xcd35,	// (0x0007edf7) linegrid_cam4_burst_pane_g7

0x7f51,	// (0x0007a013) cell_cam4_burst_pane_g1

0xcd4e,	// (0x0007ee10) main_cam5_pane_t1_ParamLimits

0xcd4e,	// (0x0007ee10) main_cam5_pane_t1

0xcd60,	// (0x0007ee22) main_cam5_pane_t2_ParamLimits

0xcd60,	// (0x0007ee22) main_cam5_pane_t2

0xcd72,	// (0x0007ee34) main_cam5_pane_t3_ParamLimits

0xcd72,	// (0x0007ee34) main_cam5_pane_t3

0xcd84,	// (0x0007ee46) main_cam5_pane_t4_ParamLimits

0xcd84,	// (0x0007ee46) main_cam5_pane_t4

0xcd9c,	// (0x0007ee5e) main_cam5_pane_t5_ParamLimits

0xcd9c,	// (0x0007ee5e) main_cam5_pane_t5

0xcdb0,	// (0x0007ee72) main_cam5_pane_t6_ParamLimits

0xcdb0,	// (0x0007ee72) main_cam5_pane_t6

0xcdc4,	// (0x0007ee86) main_cam5_pane_t7_ParamLimits

0xcdc4,	// (0x0007ee86) main_cam5_pane_t7

0xcdd6,	// (0x0007ee98) main_cam5_pane_t8_ParamLimits

0xcdd6,	// (0x0007ee98) main_cam5_pane_t8

0xcdf2,	// (0x0007eeb4) main_cam5_pane_t9_ParamLimits

0xcdf2,	// (0x0007eeb4) main_cam5_pane_t9

0xce04,	// (0x0007eec6) main_cam5_pane_t10_ParamLimits

0xce04,	// (0x0007eec6) main_cam5_pane_t10

0xce16,	// (0x0007eed8) main_cam5_pane_t11_ParamLimits

0xce16,	// (0x0007eed8) main_cam5_pane_t11

0xce28,	// (0x0007eeea) main_cam5_pane_t12_ParamLimits

0xce28,	// (0x0007eeea) main_cam5_pane_t12

0xce3d,	// (0x0007eeff) main_cam5_pane_t13_ParamLimits

0xce3d,	// (0x0007eeff) main_cam5_pane_t13

0x000c,

0xf99f,	// (0x00081a61) main_cam5_pane_t_ParamLimits

0xf99f,	// (0x00081a61) main_cam5_pane_t

0x1815,	// (0x000738d7) popup_scut_keymap_window_ParamLimits

0x1815,	// (0x000738d7) popup_scut_keymap_window

0x7f64,	// (0x0007a026) aid_size_cell_brow_shortcut

0x2ac6,	// (0x00074b88) bg_popup_window_pane_cp010

0x7f70,	// (0x0007a032) grid_scut_pane

0x7f7c,	// (0x0007a03e) cell_scut_pane_ParamLimits

0x7f7c,	// (0x0007a03e) cell_scut_pane

0x7f93,	// (0x0007a055) cell_scut_pane_g1

0xce5a,	// (0x0007ef1c) cell_scut_pane_t1

0xce69,	// (0x0007ef2b) cell_scut_pane_t2

0x7f9c,	// (0x0007a05e) cell_scut_pane_t3

0x0002,

0xf9ba,	// (0x00081a7c) cell_scut_pane_t

0x6054,	// (0x00078116) main_mup3_pane_g8_ParamLimits

0x6054,	// (0x00078116) main_mup3_pane_g8

0x731a,	// (0x000793dc) area_vitu2_query_pane_ParamLimits

0x731a,	// (0x000793dc) area_vitu2_query_pane

0x0ffb,	// (0x000730bd) input_focus_pane_cp08

0xce78,	// (0x0007ef3a) area_vitu2_query_pane_g1

0x10f7,	// (0x000731b9) area_vitu2_query_pane_g2

0x0001,

0xf9c1,	// (0x00081a83) area_vitu2_query_pane_g

0x7faa,	// (0x0007a06c) area_vitu2_query_pane_t1_ParamLimits

0x7faa,	// (0x0007a06c) area_vitu2_query_pane_t1

0x7fbe,	// (0x0007a080) area_vitu2_query_pane_t2_ParamLimits

0x7fbe,	// (0x0007a080) area_vitu2_query_pane_t2

0x1106,	// (0x000731c8) area_vitu2_query_pane_t3_ParamLimits

0x1106,	// (0x000731c8) area_vitu2_query_pane_t3

0xce84,	// (0x0007ef46) area_vitu2_query_pane_t4_ParamLimits

0xce84,	// (0x0007ef46) area_vitu2_query_pane_t4

0xceac,	// (0x0007ef6e) area_vitu2_query_pane_t5_ParamLimits

0xceac,	// (0x0007ef6e) area_vitu2_query_pane_t5

0xced4,	// (0x0007ef96) area_vitu2_query_pane_t6_ParamLimits

0xced4,	// (0x0007ef96) area_vitu2_query_pane_t6

0x0006,

0xf9c6,	// (0x00081a88) area_vitu2_query_pane_t_ParamLimits

0xf9c6,	// (0x00081a88) area_vitu2_query_pane_t

0x7fd2,	// (0x0007a094) bg_button_pane_cp018

0x7fde,	// (0x0007a0a0) bg_button_pane_cp021

0x112e,	// (0x000731f0) bg_button_pane_cp022

0x114d,	// (0x0007320f) input_focus_pane_cp09

0x4863,	// (0x00076925) aid_size_touch_mv_arrow_left

0x488c,	// (0x0007694e) aid_size_touch_mv_arrow_right

0x7965,	// (0x00079a27) main_cset_slider_pane_g16_ParamLimits

0x7965,	// (0x00079a27) main_cset_slider_pane_g16

0x7971,	// (0x00079a33) main_cset_slider_pane_g17_ParamLimits

0x7971,	// (0x00079a33) main_cset_slider_pane_g17

0x7f51,	// (0x0007a013) cell_cam4_burst_pane_g1_ParamLimits

0x162a,	// (0x000736ec) compa_mode_pane

0x7b3b,	// (0x00079bfd) popup_vtel_slider_window_g3_ParamLimits

0x7b3b,	// (0x00079bfd) popup_vtel_slider_window_g3

0x7b52,	// (0x00079c14) popup_vtel_slider_window_g4_ParamLimits

0x7b52,	// (0x00079c14) popup_vtel_slider_window_g4

0x7b69,	// (0x00079c2b) popup_vtel_slider_window_t1_ParamLimits

0x7b69,	// (0x00079c2b) popup_vtel_slider_window_t1

0x162a,	// (0x000736ec) main_cl_pane

0xbc5c,	// (0x0007dd1e) popup_imed_adjust2_window_ParamLimits

0xa9a3,	// (0x0007ca65) bg_tb_trans_pane_cp05_ParamLimits

0xc601,	// (0x0007e6c3) popup_imed_adjust2_window_g1_ParamLimits

0xc610,	// (0x0007e6d2) popup_imed_adjust2_window_g2_ParamLimits

0xc610,	// (0x0007e6d2) popup_imed_adjust2_window_g2

0xc61c,	// (0x0007e6de) popup_imed_adjust2_window_g3_ParamLimits

0xc61c,	// (0x0007e6de) popup_imed_adjust2_window_g3

0x0002,

0xf748,	// (0x0008180a) popup_imed_adjust2_window_g_ParamLimits

0xf748,	// (0x0008180a) popup_imed_adjust2_window_g

0xc628,	// (0x0007e6ea) popup_imed_adjust2_window_t1_ParamLimits

0xc640,	// (0x0007e702) slider_imed_adjust_pane_ParamLimits

0xc654,	// (0x0007e716) slider_imed_adjust_pane_g1_ParamLimits

0xc664,	// (0x0007e726) slider_imed_adjust_pane_g2_ParamLimits

0xc674,	// (0x0007e736) slider_imed_adjust_pane_g3_ParamLimits

0xc685,	// (0x0007e747) slider_imed_adjust_pane_g4_ParamLimits

0xf74f,	// (0x00081811) slider_imed_adjust_pane_g_ParamLimits

0x70a3,	// (0x00079165) aid_touch_area_cam4_ParamLimits

0x70a3,	// (0x00079165) aid_touch_area_cam4

0xebc8,	// (0x00080c8a) battery_pane_cp01

0x7172,	// (0x00079234) main_camera4_pane_g6_ParamLimits

0x7172,	// (0x00079234) main_camera4_pane_g6

0x719c,	// (0x0007925e) main_camera4_pane_t2_ParamLimits

0x719c,	// (0x0007925e) main_camera4_pane_t2

0x0001,

0xf84c,	// (0x0008190e) main_camera4_pane_t_ParamLimits

0xf84c,	// (0x0008190e) main_camera4_pane_t

0x71d1,	// (0x00079293) aid_touch_area_vid4_ParamLimits

0x71d1,	// (0x00079293) aid_touch_area_vid4

0x7225,	// (0x000792e7) main_video4_pane_g5_ParamLimits

0x7225,	// (0x000792e7) main_video4_pane_g5

0x724a,	// (0x0007930c) vid4_progress_pane_ParamLimits

0x724a,	// (0x0007930c) vid4_progress_pane

0xcb46,	// (0x0007ec08) main_cset_slider_pane_g18_ParamLimits

0xcb46,	// (0x0007ec08) main_cset_slider_pane_g18

0xcd42,	// (0x0007ee04) cell_cam4_burst_pane_g2_ParamLimits

0xcd42,	// (0x0007ee04) cell_cam4_burst_pane_g2

0x0001,

0xf99a,	// (0x00081a5c) cell_cam4_burst_pane_g_ParamLimits

0xf99a,	// (0x00081a5c) cell_cam4_burst_pane_g

0x21f2,	// (0x000742b4) bg_cl_pane_ParamLimits

0x21f2,	// (0x000742b4) bg_cl_pane

0x7fea,	// (0x0007a0ac) cl_header_pane_ParamLimits

0x7fea,	// (0x0007a0ac) cl_header_pane

0x7ffe,	// (0x0007a0c0) cl_listscroll_pane_ParamLimits

0x7ffe,	// (0x0007a0c0) cl_listscroll_pane

0xee2d,	// (0x00080eef) bg_cl_pane_g1

0xee35,	// (0x00080ef7) bg_cl_pane_g2

0xee3d,	// (0x00080eff) bg_cl_pane_g3

0xee45,	// (0x00080f07) bg_cl_pane_g4

0xee4d,	// (0x00080f0f) bg_cl_pane_g5

0xee55,	// (0x00080f17) bg_cl_pane_g6

0xee5d,	// (0x00080f1f) bg_cl_pane_g7

0xee65,	// (0x00080f27) bg_cl_pane_g8

0xee6d,	// (0x00080f2f) bg_cl_pane_g9

0x0008,

0x091f,	// (0x000729e1) bg_cl_pane_g

0x800e,	// (0x0007a0d0) aid_height_cl_leading_ParamLimits

0x800e,	// (0x0007a0d0) aid_height_cl_leading

0x801a,	// (0x0007a0dc) aid_height_cl_text_ParamLimits

0x801a,	// (0x0007a0dc) aid_height_cl_text

0x1855,	// (0x00073917) bg_cl_header_pane_ParamLimits

0x1855,	// (0x00073917) bg_cl_header_pane

0x8039,	// (0x0007a0fb) cl_header_pane_g1_ParamLimits

0x8039,	// (0x0007a0fb) cl_header_pane_g1

0x804f,	// (0x0007a111) cl_header_pane_t1_ParamLimits

0x804f,	// (0x0007a111) cl_header_pane_t1

0xee75,	// (0x00080f37) cl_list_pane

0xcb19,	// (0x0007ebdb) hc_scroll_pane_cp01

0x3365,	// (0x00075427) bg_cl_header_pane_g1

0xc9ff,	// (0x0007eac1) bg_cl_header_pane_g2

0x3385,	// (0x00075447) bg_cl_header_pane_g3

0xca0f,	// (0x0007ead1) bg_cl_header_pane_g4

0xca07,	// (0x0007eac9) bg_cl_header_pane_g5

0xcc51,	// (0x0007ed13) bg_cl_header_pane_g6

0xca27,	// (0x0007eae9) bg_cl_header_pane_g7

0xca2f,	// (0x0007eaf1) bg_cl_header_pane_g8

0xca1f,	// (0x0007eae1) bg_cl_header_pane_g9

0x0008,

0xf9d5,	// (0x00081a97) bg_cl_header_pane_g

0x8068,	// (0x0007a12a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8068,	// (0x0007a12a) hc_cl_list_double_graphic_heading_pane

0x8079,	// (0x0007a13b) hc_cl_list_single_graphic_pane_ParamLimits

0x8079,	// (0x0007a13b) hc_cl_list_single_graphic_pane

0x808f,	// (0x0007a151) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x808f,	// (0x0007a151) hc_cl_list_single_graphic_pane_g1

0x809b,	// (0x0007a15d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x809b,	// (0x0007a15d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e8,	// (0x00081aaa) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e8,	// (0x00081aaa) hc_cl_list_single_graphic_pane_g

0x80af,	// (0x0007a171) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x80af,	// (0x0007a171) hc_cl_list_single_graphic_pane_t1

0x808f,	// (0x0007a151) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x808f,	// (0x0007a151) hc_cl_list_double_graphic_heading_pane_g1

0x80c4,	// (0x0007a186) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x80c4,	// (0x0007a186) hc_cl_list_double_graphic_heading_pane_g2

0x80d8,	// (0x0007a19a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x80d8,	// (0x0007a19a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9ed,	// (0x00081aaf) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9ed,	// (0x00081aaf) hc_cl_list_double_graphic_heading_pane_g

0x80ec,	// (0x0007a1ae) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x80ec,	// (0x0007a1ae) hc_cl_list_double_graphic_heading_pane_t1

0x8101,	// (0x0007a1c3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8101,	// (0x0007a1c3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f4,	// (0x00081ab6) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f4,	// (0x00081ab6) hc_cl_list_double_graphic_heading_pane_t

0xed25,	// (0x00080de7) vid4_progress_pane_g1

0xed35,	// (0x00080df7) vid4_progress_pane_g2

0x8116,	// (0x0007a1d8) vid4_progress_pane_g3

0xed45,	// (0x00080e07) vid4_progress_pane_g4

0x0004,

0xf9f9,	// (0x00081abb) vid4_progress_pane_g

0x8128,	// (0x0007a1ea) vid4_progress_pane_t1

0xed5d,	// (0x00080e1f) vid4_progress_pane_t2

0x0002,

0xfa04,	// (0x00081ac6) vid4_progress_pane_t

0x8140,	// (0x0007a202) wait_bar_pane_cp07

0xbf0c,	// (0x0007dfce) blid_firmament_pane_ParamLimits

0xbf4f,	// (0x0007e011) popup_blid_sat_info2_window_g1

0xbf73,	// (0x0007e035) popup_blid_sat_info2_window_t3

0xbf81,	// (0x0007e043) popup_blid_sat_info2_window_t4

0xbf8f,	// (0x0007e051) popup_blid_sat_info2_window_t5

0xbf9d,	// (0x0007e05f) popup_blid_sat_info2_window_t6

0xbfad,	// (0x0007e06f) popup_blid_sat_info2_window_t7

0xbfbb,	// (0x0007e07d) popup_blid_sat_info2_window_t8

0xbfc9,	// (0x0007e08b) popup_blid_sat_info2_window_t9

0xbfd7,	// (0x0007e099) popup_blid_sat_info2_window_t10

0xc098,	// (0x0007e15a) aid_firma_cardinal_ParamLimits

0xc0ac,	// (0x0007e16e) blid_firmament_pane_t1_ParamLimits

0xc0c3,	// (0x0007e185) blid_firmament_pane_t2_ParamLimits

0xc0da,	// (0x0007e19c) blid_firmament_pane_t3_ParamLimits

0xc0f1,	// (0x0007e1b3) blid_firmament_pane_t4_ParamLimits

0xf641,	// (0x00081703) blid_firmament_pane_t_ParamLimits

0xc108,	// (0x0007e1ca) blid_sat_info_pane_ParamLimits

0x1855,	// (0x00073917) main_cam_set_pane_ParamLimits

0x683a,	// (0x000788fc) aid_size_cell_colour_35_ParamLimits

0x685a,	// (0x0007891c) aid_size_cell_colour_112_ParamLimits

0x687a,	// (0x0007893c) aid_size_cell_effect_ParamLimits

0xa9a3,	// (0x0007ca65) bg_tb_trans_pane_cp02_ParamLimits

0x416c,	// (0x0007622e) heading_imed_pane_ParamLimits

0x689a,	// (0x0007895c) listscroll_imed_pane_ParamLimits

0xb34b,	// (0x0007d40d) popup_call2_audio_first_window_g5_ParamLimits

0xb34b,	// (0x0007d40d) popup_call2_audio_first_window_g5

0x6cbf,	// (0x00078d81) aid_size_touch_image3_arrow_left_ParamLimits

0x6cbf,	// (0x00078d81) aid_size_touch_image3_arrow_left

0x6ceb,	// (0x00078dad) aid_size_touch_image3_arrow_right_ParamLimits

0x6ceb,	// (0x00078dad) aid_size_touch_image3_arrow_right

0xed72,	// (0x00080e34) vid4_progress_pane_t3

0x6a3f,	// (0x00078b01) main_hwr_training_symbol_option_pane_ParamLimits

0x6a3f,	// (0x00078b01) main_hwr_training_symbol_option_pane

0xc83a,	// (0x0007e8fc) popup_hwr_training_preview_window_ParamLimits

0xc83a,	// (0x0007e8fc) popup_hwr_training_preview_window

0x6a5f,	// (0x00078b21) hwr_training_navi_pane_g5_ParamLimits

0x6a5f,	// (0x00078b21) hwr_training_navi_pane_g5

0xc9ed,	// (0x0007eaaf) popup_char_count_window

0x1855,	// (0x00073917) bg_popup_sub_pane_cp20_ParamLimits

0x7c79,	// (0x00079d3b) list_vitu2_match_list_pane_ParamLimits

0x7c85,	// (0x00079d47) vitu2_page_scroll_pane_ParamLimits

0x7c85,	// (0x00079d47) vitu2_page_scroll_pane

0xee7e,	// (0x00080f40) list_single_hwr_training_symbol_option_pane_ParamLimits

0xee7e,	// (0x00080f40) list_single_hwr_training_symbol_option_pane

0xee91,	// (0x00080f53) list_single_hwr_training_symbol_option_pane_g1

0xee99,	// (0x00080f5b) list_single_hwr_training_symbol_option_pane_t1

0xeea7,	// (0x00080f69) bg_button_pane_cp023

0xeeb0,	// (0x00080f72) bg_button_pane_cp024

0xeee3,	// (0x00080fa5) vitu2_page_scroll_pane_g1

0xeeeb,	// (0x00080fad) vitu2_page_scroll_pane_g2

0x0001,

0x0968,	// (0x00072a2a) vitu2_page_scroll_pane_g

0xeef3,	// (0x00080fb5) vitu2_page_scroll_pane_t1

0xbe82,	// (0x0007df44) popup_char_count_window_g1

0xef02,	// (0x00080fc4) popup_char_count_window_g2

0xef0b,	// (0x00080fcd) popup_char_count_window_g3

0x0002,

0xfa0b,	// (0x00081acd) popup_char_count_window_g

0xef14,	// (0x00080fd6) popup_char_count_window_t1

0x162a,	// (0x000736ec) main_vded2_pane

0xc5ed,	// (0x0007e6af) aid_size_cell_imed_line

0xc5f7,	// (0x0007e6b9) grid_imed_line_width_pane

0xec80,	// (0x00080d42) vid4_indicators_pane_g4

0xef22,	// (0x00080fe4) cell_imed_line_width_pane_ParamLimits

0xef22,	// (0x00080fe4) cell_imed_line_width_pane

0xef36,	// (0x00080ff8) cell_imed_line_width_pane_g1

0xef3f,	// (0x00081001) cell_imed_line_width_pane_g2

0x0001,

0x0974,	// (0x00072a36) cell_imed_line_width_pane_g

0x8153,	// (0x0007a215) main_vded2_pane_g1_ParamLimits

0x8153,	// (0x0007a215) main_vded2_pane_g1

0x8169,	// (0x0007a22b) main_vded2_pane_g2_ParamLimits

0x8169,	// (0x0007a22b) main_vded2_pane_g2

0x0001,

0xfa12,	// (0x00081ad4) main_vded2_pane_g_ParamLimits

0xfa12,	// (0x00081ad4) main_vded2_pane_g

0x817b,	// (0x0007a23d) vded2_slider_pane_ParamLimits

0x817b,	// (0x0007a23d) vded2_slider_pane

0x818b,	// (0x0007a24d) aid_size_touch_vded2_end

0x8195,	// (0x0007a257) aid_size_touch_vded2_playhead

0xef47,	// (0x00081009) aid_size_touch_vded2_start

0xef4f,	// (0x00081011) vded2_slider_bg_pane

0xef58,	// (0x0008101a) vded2_slider_pane_g1

0xef61,	// (0x00081023) vded2_slider_pane_g2

0x819f,	// (0x0007a261) vded2_slider_pane_g3

0x0002,

0xfa17,	// (0x00081ad9) vded2_slider_pane_g

0xef69,	// (0x0008102b) vded2_slider_bg_pane_g1

0xef72,	// (0x00081034) vded2_slider_bg_pane_g2

0xef7b,	// (0x0008103d) vded2_slider_bg_pane_g3

0x0002,

0x0985,	// (0x00072a47) vded2_slider_bg_pane_g

0x4dc8,	// (0x00076e8a) aid_postcard_touch_down_pane_ParamLimits

0x4dc8,	// (0x00076e8a) aid_postcard_touch_down_pane

0x4dde,	// (0x00076ea0) aid_postcard_touch_up_pane_ParamLimits

0x4dde,	// (0x00076ea0) aid_postcard_touch_up_pane

0x162a,	// (0x000736ec) main_blid2_pane

0xbc42,	// (0x0007dd04) popup_blid2_search_window

0x162a,	// (0x000736ec) blid2_gps_pane

0x162a,	// (0x000736ec) blid2_navig_pane

0x162a,	// (0x000736ec) blid2_search_pane

0x162a,	// (0x000736ec) blid2_tripm_pane

0x81aa,	// (0x0007a26c) blid2_search_pane_g1_ParamLimits

0x81aa,	// (0x0007a26c) blid2_search_pane_g1

0x81c4,	// (0x0007a286) blid2_search_pane_t1_ParamLimits

0x81c4,	// (0x0007a286) blid2_search_pane_t1

0x81d6,	// (0x0007a298) aid_size_cell_blid2_gps_ParamLimits

0x81d6,	// (0x0007a298) aid_size_cell_blid2_gps

0x81ee,	// (0x0007a2b0) blid2_gps_pane_g1_ParamLimits

0x81ee,	// (0x0007a2b0) blid2_gps_pane_g1

0x8202,	// (0x0007a2c4) grid_blid2_satellite_pane_ParamLimits

0x8202,	// (0x0007a2c4) grid_blid2_satellite_pane

0x821c,	// (0x0007a2de) blid2_navig_pane_g1_ParamLimits

0x821c,	// (0x0007a2de) blid2_navig_pane_g1

0x8228,	// (0x0007a2ea) blid2_navig_pane_t1_ParamLimits

0x8228,	// (0x0007a2ea) blid2_navig_pane_t1

0x8243,	// (0x0007a305) blid2_navig_pane_t2_ParamLimits

0x8243,	// (0x0007a305) blid2_navig_pane_t2

0x0001,

0xfa1e,	// (0x00081ae0) blid2_navig_pane_t_ParamLimits

0xfa1e,	// (0x00081ae0) blid2_navig_pane_t

0x825e,	// (0x0007a320) blid2_navig_ring_pane_ParamLimits

0x825e,	// (0x0007a320) blid2_navig_ring_pane

0x8277,	// (0x0007a339) blid2_speed_pane_ParamLimits

0x8277,	// (0x0007a339) blid2_speed_pane

0x8283,	// (0x0007a345) blid2_tripm_pane_g1_ParamLimits

0x8283,	// (0x0007a345) blid2_tripm_pane_g1

0x829c,	// (0x0007a35e) blid2_tripm_pane_g2_ParamLimits

0x829c,	// (0x0007a35e) blid2_tripm_pane_g2

0x82b0,	// (0x0007a372) blid2_tripm_pane_g3_ParamLimits

0x82b0,	// (0x0007a372) blid2_tripm_pane_g3

0x82c4,	// (0x0007a386) blid2_tripm_pane_g4_ParamLimits

0x82c4,	// (0x0007a386) blid2_tripm_pane_g4

0x82d8,	// (0x0007a39a) blid2_tripm_pane_g5_ParamLimits

0x82d8,	// (0x0007a39a) blid2_tripm_pane_g5

0x0005,

0xfa23,	// (0x00081ae5) blid2_tripm_pane_g_ParamLimits

0xfa23,	// (0x00081ae5) blid2_tripm_pane_g

0x82fe,	// (0x0007a3c0) blid2_tripm_pane_t1_ParamLimits

0x82fe,	// (0x0007a3c0) blid2_tripm_pane_t1

0x8319,	// (0x0007a3db) blid2_tripm_pane_t2_ParamLimits

0x8319,	// (0x0007a3db) blid2_tripm_pane_t2

0x8332,	// (0x0007a3f4) blid2_tripm_pane_t3_ParamLimits

0x8332,	// (0x0007a3f4) blid2_tripm_pane_t3

0x0003,

0xfa30,	// (0x00081af2) blid2_tripm_pane_t_ParamLimits

0xfa30,	// (0x00081af2) blid2_tripm_pane_t

0x8379,	// (0x0007a43b) cell_blid2_satellite_pane_ParamLimits

0x8379,	// (0x0007a43b) cell_blid2_satellite_pane

0x8397,	// (0x0007a459) cell_blid2_satellite_pane_g1

0xef84,	// (0x00081046) cell_blid2_satellite_pane_t1

0x2cb3,	// (0x00074d75) blid2_speed_pane_g1

0xef92,	// (0x00081054) blid2_speed_pane_t1

0xefa0,	// (0x00081062) blid2_speed_pane_t2

0x0001,

0x09a7,	// (0x00072a69) blid2_speed_pane_t

0x2cb3,	// (0x00074d75) blid2_navig_ring_pane_g1

0x83a0,	// (0x0007a462) blid2_navig_ring_pane_g2

0x83a8,	// (0x0007a46a) blid2_navig_ring_pane_g3

0x83b0,	// (0x0007a472) blid2_navig_ring_pane_g4

0x83b8,	// (0x0007a47a) blid2_navig_ring_pane_g5

0x0004,

0xfa39,	// (0x00081afb) blid2_navig_ring_pane_g

0x162a,	// (0x000736ec) bg_popup_window_pane_cp011

0xefae,	// (0x00081070) popup_blid2_search_window_g1

0xefb6,	// (0x00081078) popup_blid2_search_window_t1

0xefc4,	// (0x00081086) popup_blid2_search_window_t2

0x0001,

0x09b7,	// (0x00072a79) popup_blid2_search_window_t

0x3231,	// (0x000752f3) main_browser_pane_g1

0x21f2,	// (0x000742b4) main_browser_pane_ParamLimits

0x1855,	// (0x00073917) bg_button_pane_cp011_ParamLimits

0x753c,	// (0x000795fe) cell_vitu2_function_pane_g1_ParamLimits

0xa9a3,	// (0x0007ca65) bg_popup_sub_pane_cp22_ParamLimits

0x0ffb,	// (0x000730bd) input_focus_pane_cp08_ParamLimits

0x7df2,	// (0x00079eb4) popup_vitu2_query_button_pane_ParamLimits

0x7df2,	// (0x00079eb4) popup_vitu2_query_button_pane

0x1016,	// (0x000730d8) popup_vitu2_query_input_button_pane

0xcc8c,	// (0x0007ed4e) popup_vitu2_query_window_g1_ParamLimits

0x101e,	// (0x000730e0) popup_vitu2_query_window_g2_ParamLimits

0xf96e,	// (0x00081a30) popup_vitu2_query_window_g_ParamLimits

0x162a,	// (0x000736ec) bg_button_pane_cp026

0x83c0,	// (0x0007a482) popup_vitu2_query_input_button_pane_g1

0x162a,	// (0x000736ec) bg_button_pane_cp025

0xefd2,	// (0x00081094) popup_vitu2_query_button_pane_t1

0x5ce9,	// (0x00077dab) main_mp3_pane_t6

0x5cf7,	// (0x00077db9) popup_slider_window_cp01

0xebe4,	// (0x00080ca6) cam4_battery_pane

0xec3d,	// (0x00080cff) cam4_battery_pane_cp02

0xed1d,	// (0x00080ddf) cam4_battery_pane_cp01

0xed1d,	// (0x00080ddf) cam4_battery_pane_cp03

0x2cb3,	// (0x00074d75) cam4_battery_pane_g1

0xcf3a,	// (0x0007effc) cam4_battery_pane_g2

0x0001,

0xfa44,	// (0x00081b06) cam4_battery_pane_g

0xbfe5,	// (0x0007e0a7) popup_blid_sat_info2_window_t11

0x4863,	// (0x00076925) aid_size_touch_mv_arrow_left_ParamLimits

0x488c,	// (0x0007694e) aid_size_touch_mv_arrow_right_ParamLimits

0x48ea,	// (0x000769ac) navi_pane_g1_ParamLimits

0x48f6,	// (0x000769b8) navi_pane_g2_ParamLimits

0x4924,	// (0x000769e6) navi_pane_g3_ParamLimits

0xf355,	// (0x00081417) navi_pane_g_ParamLimits

0x49e2,	// (0x00076aa4) navi_pane_mv_t1_ParamLimits

0x68a6,	// (0x00078968) grid_imed_effect_pane_ParamLimits

0x2dd5,	// (0x00074e97) aid_placing_vt_slider_lsc

0x2de5,	// (0x00074ea7) aid_placing_vt_slider_prt

0x1855,	// (0x00073917) bg_tb_trans_pane_cp01_ParamLimits

0xc265,	// (0x0007e327) popup_image_details_window_g1_ParamLimits

0xc278,	// (0x0007e33a) popup_image_details_window_g2_ParamLimits

0xc28d,	// (0x0007e34f) popup_image_details_window_g3_ParamLimits

0xc28d,	// (0x0007e34f) popup_image_details_window_g3

0xf681,	// (0x00081743) popup_image_details_window_g_ParamLimits

0xc2a1,	// (0x0007e363) popup_image_details_window_t1_ParamLimits

0xc2b3,	// (0x0007e375) popup_image_details_window_t2_ParamLimits

0xc2cc,	// (0x0007e38e) popup_image_details_window_t3_ParamLimits

0xc2e0,	// (0x0007e3a2) popup_image_details_window_t4_ParamLimits

0xc2fb,	// (0x0007e3bd) popup_image_details_window_t5_ParamLimits

0xf688,	// (0x0008174a) popup_image_details_window_t_ParamLimits

0x8026,	// (0x0007a0e8) cl_header_name_pane_ParamLimits

0x8026,	// (0x0007a0e8) cl_header_name_pane

0x83c8,	// (0x0007a48a) cl_header_name_pane_t1_ParamLimits

0x83c8,	// (0x0007a48a) cl_header_name_pane_t1

0x83e9,	// (0x0007a4ab) cl_header_name_pane_t2_ParamLimits

0x83e9,	// (0x0007a4ab) cl_header_name_pane_t2

0x842b,	// (0x0007a4ed) cl_header_name_pane_t3_ParamLimits

0x842b,	// (0x0007a4ed) cl_header_name_pane_t3

0x0002,

0xfa49,	// (0x00081b0b) cl_header_name_pane_t_ParamLimits

0xfa49,	// (0x00081b0b) cl_header_name_pane_t

0x49b3,	// (0x00076a75) navi_pane_mv_g2_ParamLimits

0xc9b8,	// (0x0007ea7a) field_vitu2_entry_pane_g1_ParamLimits

0xc9c4,	// (0x0007ea86) field_vitu2_entry_pane_g2_ParamLimits

0x4b23,	// (0x00076be5) field_vitu2_entry_pane_g3_ParamLimits

0x4b23,	// (0x00076be5) field_vitu2_entry_pane_g3

0xf87e,	// (0x00081940) field_vitu2_entry_pane_g_ParamLimits

0x74b8,	// (0x0007957a) cell_vitu2_itu_pane_g1_ParamLimits

0x74d0,	// (0x00079592) cell_vitu2_itu_pane_g2_ParamLimits

0x74d0,	// (0x00079592) cell_vitu2_itu_pane_g2

0x0001,

0xf88a,	// (0x0008194c) cell_vitu2_itu_pane_g_ParamLimits

0xf88a,	// (0x0008194c) cell_vitu2_itu_pane_g

0x1855,	// (0x00073917) bg_vkb2_func_pane_cp05_ParamLimits

0x1855,	// (0x00073917) bg_vkb2_func_pane_cp05

0x1855,	// (0x00073917) bg_vkb2_func_pane_cp03

0x1855,	// (0x00073917) bg_vkb2_func_pane_cp04

0x1855,	// (0x00073917) bg_vkb2_func_pane_cp10_ParamLimits

0x1855,	// (0x00073917) bg_vkb2_func_pane_cp10

0x113d,	// (0x000731ff) bg_vkb2_func_pane_cp08

0x7fd2,	// (0x0007a094) bg_vkb2_func_pane_cp06

0x7fde,	// (0x0007a0a0) bg_vkb2_func_pane_cp07

0xeeb9,	// (0x00080f7b) bg_vkb2_func_pane_cp11_ParamLimits

0xeeb9,	// (0x00080f7b) bg_vkb2_func_pane_cp11

0xeece,	// (0x00080f90) bg_vkb2_func_pane_cp12_ParamLimits

0xeece,	// (0x00080f90) bg_vkb2_func_pane_cp12

0x162a,	// (0x000736ec) bg_vkb2_func_pane_cp09

0xc9ff,	// (0x0007eac1) bg_vkb2_func_pane_g1

0x3385,	// (0x00075447) bg_vkb2_func_pane_g2

0xca07,	// (0x0007eac9) bg_vkb2_func_pane_g3

0xca0f,	// (0x0007ead1) bg_vkb2_func_pane_g4

0xcc51,	// (0x0007ed13) bg_vkb2_func_pane_g5

0xca27,	// (0x0007eae9) bg_vkb2_func_pane_g6

0xca2f,	// (0x0007eaf1) bg_vkb2_func_pane_g7

0xca1f,	// (0x0007eae1) bg_vkb2_func_pane_g8

0x3365,	// (0x00075427) bg_vkb2_func_pane_g9

0x0008,

0xfa50,	// (0x00081b12) bg_vkb2_func_pane_g

0x82ec,	// (0x0007a3ae) blid2_tripm_pane_g6_ParamLimits

0x82ec,	// (0x0007a3ae) blid2_tripm_pane_g6

0xc8f8,	// (0x0007e9ba) mp4_progress_pane_g1

0x8365,	// (0x0007a427) blid2_tripm_values_pane_ParamLimits

0x8365,	// (0x0007a427) blid2_tripm_values_pane

0x845c,	// (0x0007a51e) blid2_tripm_values_pane_t1

0x846a,	// (0x0007a52c) blid2_tripm_values_pane_t2

0x8478,	// (0x0007a53a) blid2_tripm_values_pane_t3

0x8486,	// (0x0007a548) blid2_tripm_values_pane_t4

0x8494,	// (0x0007a556) blid2_tripm_values_pane_t5

0x84a2,	// (0x0007a564) blid2_tripm_values_pane_t6

0x84b0,	// (0x0007a572) blid2_tripm_values_pane_t7

0x84be,	// (0x0007a580) blid2_tripm_values_pane_t8

0x84cc,	// (0x0007a58e) blid2_tripm_values_pane_t9

0x0008,

0xfa63,	// (0x00081b25) blid2_tripm_values_pane_t

0x2e21,	// (0x00074ee3) call_video_pane_t1_ParamLimits

0x2e3f,	// (0x00074f01) call_video_pane_t2_ParamLimits

0xf203,	// (0x000812c5) call_video_pane_t_ParamLimits

0x0e3f,	// (0x00072f01) msg_header_pane_g1_ParamLimits

0xaa58,	// (0x0007cb1a) msg_header_pane_g2_ParamLimits

0xaa58,	// (0x0007cb1a) msg_header_pane_g2

0x0001,

0xf3f8,	// (0x000814ba) msg_header_pane_g_ParamLimits

0xf3f8,	// (0x000814ba) msg_header_pane_g

0x21f2,	// (0x000742b4) main_clock2_pane_ParamLimits

0x65a7,	// (0x00078669) grid_clock2_toolbar_pane_ParamLimits

0x65a7,	// (0x00078669) grid_clock2_toolbar_pane

0x65a7,	// (0x00078669) listscroll_clock2_pane_ParamLimits

0x65a7,	// (0x00078669) listscroll_clock2_pane

0x668b,	// (0x0007874d) main_clock2_pane_t3_ParamLimits

0x668b,	// (0x0007874d) main_clock2_pane_t3

0x66af,	// (0x00078771) main_clock2_pane_t4_ParamLimits

0x66af,	// (0x00078771) main_clock2_pane_t4

0xefe0,	// (0x000810a2) cell_clock2_toolbar_pane

0xefe8,	// (0x000810aa) cell_clock2_toolbar_pane_cp01

0xefe8,	// (0x000810aa) cell_clock2_toolbar_pane_cp02

0xeff0,	// (0x000810b2) cell_clock2_toolbar_pane_cp03

0xeff8,	// (0x000810ba) list_clock2_pane

0x460d,	// (0x000766cf) scroll_pane_cp10

0xf000,	// (0x000810c2) list_single_clock2_pane_ParamLimits

0xf000,	// (0x000810c2) list_single_clock2_pane

0x2ac6,	// (0x00074b88) list_highlight_pane_cp08

0xf00d,	// (0x000810cf) list_single_clock2_pane_t1

0xf01b,	// (0x000810dd) list_single_clock2_pane_t2

0x0001,

0x09ee,	// (0x00072ab0) list_single_clock2_pane_t

0x162a,	// (0x000736ec) bg_button_pane_cp10

0xf029,	// (0x000810eb) cell_clock2_toolbar_pane_g1

0x4d54,	// (0x00076e16) aid_main_viewer_pane_g1_ParamLimits

0x4d54,	// (0x00076e16) aid_main_viewer_pane_g1

0x4d62,	// (0x00076e24) aid_main_viewer_pane_g2_ParamLimits

0x4d62,	// (0x00076e24) aid_main_viewer_pane_g2

0x4d70,	// (0x00076e32) aid_main_viewer_pane_g3_ParamLimits

0x4d70,	// (0x00076e32) aid_main_viewer_pane_g3

0x4d7f,	// (0x00076e41) aid_main_viewer_pane_g4_ParamLimits

0x4d7f,	// (0x00076e41) aid_main_viewer_pane_g4

0x0003,

0xf409,	// (0x000814cb) aid_main_viewer_pane_g_ParamLimits

0xf409,	// (0x000814cb) aid_main_viewer_pane_g

0x56c6,	// (0x00077788) main_calc_pane_ParamLimits

0x56da,	// (0x0007779c) main_dialer2_pane_ParamLimits

0x162a,	// (0x000736ec) main_cam6_pane

0x162a,	// (0x000736ec) main_vid6_pane

0x65b3,	// (0x00078675) listscroll_gen_pane_cp06_ParamLimits

0x65b3,	// (0x00078675) listscroll_gen_pane_cp06

0x66d2,	// (0x00078794) main_clock2_pane_t5_ParamLimits

0x66d2,	// (0x00078794) main_clock2_pane_t5

0x6730,	// (0x000787f2) aid_call2_pane_cp10_ParamLimits

0x6742,	// (0x00078804) aid_call_pane_cp10_ParamLimits

0x47f2,	// (0x000768b4) popup_clock_analogue_window_cp10_g1_ParamLimits

0x47f2,	// (0x000768b4) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6754,	// (0x00078816) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6754,	// (0x00078816) popup_clock_analogue_window_cp10_g4_ParamLimits

0x47f2,	// (0x000768b4) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf73d,	// (0x000817ff) popup_clock_analogue_window_cp10_g_ParamLimits

0x676a,	// (0x0007882c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6c6c,	// (0x00078d2e) cell_dialer2_keypad_pane_g2_ParamLimits

0x6c6c,	// (0x00078d2e) cell_dialer2_keypad_pane_g2

0x0001,

0xf81d,	// (0x000818df) cell_dialer2_keypad_pane_g_ParamLimits

0xf81d,	// (0x000818df) cell_dialer2_keypad_pane_g

0x6c88,	// (0x00078d4a) cell_dialer2_keypad_pane_t1

0x785f,	// (0x00079921) main_cset_text2_pane_ParamLimits

0x785f,	// (0x00079921) main_cset_text2_pane

0xce78,	// (0x0007ef3a) area_vitu2_query_pane_g1_ParamLimits

0x10f7,	// (0x000731b9) area_vitu2_query_pane_g2_ParamLimits

0xf9c1,	// (0x00081a83) area_vitu2_query_pane_g_ParamLimits

0xcefc,	// (0x0007efbe) area_vitu2_query_pane_t7_ParamLimits

0xcefc,	// (0x0007efbe) area_vitu2_query_pane_t7

0x7fd2,	// (0x0007a094) bg_button_pane_cp018_ParamLimits

0x7fde,	// (0x0007a0a0) bg_button_pane_cp021_ParamLimits

0x112e,	// (0x000731f0) bg_button_pane_cp022_ParamLimits

0x113d,	// (0x000731ff) bg_vkb2_func_pane_cp08_ParamLimits

0x7fd2,	// (0x0007a094) bg_vkb2_func_pane_cp06_ParamLimits

0x7fde,	// (0x0007a0a0) bg_vkb2_func_pane_cp07_ParamLimits

0x114d,	// (0x0007320f) input_focus_pane_cp09_ParamLimits

0xed8f,	// (0x00080e51) cam6_autofocus_pane_ParamLimits

0xed8f,	// (0x00080e51) cam6_autofocus_pane

0x84da,	// (0x0007a59c) cam6_image_uncrop_pane_ParamLimits

0x84da,	// (0x0007a59c) cam6_image_uncrop_pane

0x84e9,	// (0x0007a5ab) cam6_indi_pane_ParamLimits

0x84e9,	// (0x0007a5ab) cam6_indi_pane

0x84ff,	// (0x0007a5c1) cam6_mode_pane_ParamLimits

0x84ff,	// (0x0007a5c1) cam6_mode_pane

0x8511,	// (0x0007a5d3) cam6_timer_pane_ParamLimits

0x8511,	// (0x0007a5d3) cam6_timer_pane

0x851d,	// (0x0007a5df) cam6_zoom_pane_ParamLimits

0x851d,	// (0x0007a5df) cam6_zoom_pane

0x8529,	// (0x0007a5eb) cam6_mode_pane_g1_ParamLimits

0x8529,	// (0x0007a5eb) cam6_mode_pane_g1

0x8539,	// (0x0007a5fb) cam6_mode_pane_g2_ParamLimits

0x8539,	// (0x0007a5fb) cam6_mode_pane_g2

0x8549,	// (0x0007a60b) cam6_mode_pane_g3_ParamLimits

0x8549,	// (0x0007a60b) cam6_mode_pane_g3

0x8559,	// (0x0007a61b) cam6_mode_pane_g4_ParamLimits

0x8559,	// (0x0007a61b) cam6_mode_pane_g4

0x0003,

0xfa76,	// (0x00081b38) cam6_mode_pane_g_ParamLimits

0xfa76,	// (0x00081b38) cam6_mode_pane_g

0xee04,	// (0x00080ec6) bg_tb_trans_pane_cp08_ParamLimits

0xee04,	// (0x00080ec6) bg_tb_trans_pane_cp08

0xf031,	// (0x000810f3) cam6_battery_pane_ParamLimits

0xf031,	// (0x000810f3) cam6_battery_pane

0xf047,	// (0x00081109) cam6_indi_pane_g1_ParamLimits

0xf047,	// (0x00081109) cam6_indi_pane_g1

0xf059,	// (0x0008111b) cam6_indi_pane_g2_ParamLimits

0xf059,	// (0x0008111b) cam6_indi_pane_g2

0xcf44,	// (0x0007f006) cam6_indi_pane_g3_ParamLimits

0xcf44,	// (0x0007f006) cam6_indi_pane_g3

0x0002,

0xfa7f,	// (0x00081b41) cam6_indi_pane_g_ParamLimits

0xfa7f,	// (0x00081b41) cam6_indi_pane_g

0xcf56,	// (0x0007f018) cam6_indi_pane_t1_ParamLimits

0xcf56,	// (0x0007f018) cam6_indi_pane_t1

0x8569,	// (0x0007a62b) cam6_autofocus_pane_g1

0x8571,	// (0x0007a633) cam6_autofocus_pane_g2

0x8579,	// (0x0007a63b) cam6_autofocus_pane_g3

0x8581,	// (0x0007a643) cam6_autofocus_pane_g4

0x0003,

0xfa86,	// (0x00081b48) cam6_autofocus_pane_g

0xcf7c,	// (0x0007f03e) cam6_timer_pane_g1

0xcf84,	// (0x0007f046) cam6_timer_pane_t1

0xcf92,	// (0x0007f054) cam6_zoom_cont_pane

0xcf9a,	// (0x0007f05c) cam6_zoom_pane_g1

0xcfa2,	// (0x0007f064) cam6_zoom_pane_g2

0x8589,	// (0x0007a64b) cam6_zoom_pane_g3

0x0002,

0xfa8f,	// (0x00081b51) cam6_zoom_pane_g

0x2cb3,	// (0x00074d75) cam6_battery_pane_g1

0x2cb3,	// (0x00074d75) cam6_battery_pane_g2

0x0001,

0xf3b9,	// (0x0008147b) cam6_battery_pane_g

0xcfaa,	// (0x0007f06c) cam6_zoom_cont_pane_g1

0xcfb3,	// (0x0007f075) cam6_zoom_cont_pane_g2

0xcfbc,	// (0x0007f07e) cam6_zoom_cont_pane_g3

0x0002,

0xfa96,	// (0x00081b58) cam6_zoom_cont_pane_g

0x85a3,	// (0x0007a665) cam6_mode_pane_cp_ParamLimits

0x85a3,	// (0x0007a665) cam6_mode_pane_cp

0x851d,	// (0x0007a5df) cam6_zoom_pane_cp_ParamLimits

0x851d,	// (0x0007a5df) cam6_zoom_pane_cp

0x85b5,	// (0x0007a677) vid6_image_uncrop_cif_pane_ParamLimits

0x85b5,	// (0x0007a677) vid6_image_uncrop_cif_pane

0x85c5,	// (0x0007a687) vid6_image_uncrop_nhd_pane_ParamLimits

0x85c5,	// (0x0007a687) vid6_image_uncrop_nhd_pane

0x84da,	// (0x0007a59c) vid6_image_uncrop_vga_pane_ParamLimits

0x84da,	// (0x0007a59c) vid6_image_uncrop_vga_pane

0x85d4,	// (0x0007a696) vid6_image_uncrop_wvga_pane_ParamLimits

0x85d4,	// (0x0007a696) vid6_image_uncrop_wvga_pane

0x85e3,	// (0x0007a6a5) vid6_indi_pane_ParamLimits

0x85e3,	// (0x0007a6a5) vid6_indi_pane

0xee04,	// (0x00080ec6) bg_tb_trans_pane_cp09_ParamLimits

0xee04,	// (0x00080ec6) bg_tb_trans_pane_cp09

0xcfd4,	// (0x0007f096) cam6_battery_pane_cp_ParamLimits

0xcfd4,	// (0x0007f096) cam6_battery_pane_cp

0xcfe0,	// (0x0007f0a2) vid6_indi_pane_g1_ParamLimits

0xcfe0,	// (0x0007f0a2) vid6_indi_pane_g1

0xcff2,	// (0x0007f0b4) vid6_indi_pane_g2_ParamLimits

0xcff2,	// (0x0007f0b4) vid6_indi_pane_g2

0xd004,	// (0x0007f0c6) vid6_indi_pane_g3_ParamLimits

0xd004,	// (0x0007f0c6) vid6_indi_pane_g3

0xd019,	// (0x0007f0db) vid6_indi_pane_g4_ParamLimits

0xd019,	// (0x0007f0db) vid6_indi_pane_g4

0xd02e,	// (0x0007f0f0) vid6_indi_pane_g5_ParamLimits

0xd02e,	// (0x0007f0f0) vid6_indi_pane_g5

0x0004,

0xfa9d,	// (0x00081b5f) vid6_indi_pane_g_ParamLimits

0xfa9d,	// (0x00081b5f) vid6_indi_pane_g

0xd048,	// (0x0007f10a) vid6_indi_pane_t1_ParamLimits

0xd048,	// (0x0007f10a) vid6_indi_pane_t1

0xd05e,	// (0x0007f120) vid6_indi_pane_t2_ParamLimits

0xd05e,	// (0x0007f120) vid6_indi_pane_t2

0xd086,	// (0x0007f148) vid6_indi_pane_t3_ParamLimits

0xd086,	// (0x0007f148) vid6_indi_pane_t3

0xd0ae,	// (0x0007f170) vid6_indi_pane_t4_ParamLimits

0xd0ae,	// (0x0007f170) vid6_indi_pane_t4

0x0003,

0xfaa8,	// (0x00081b6a) vid6_indi_pane_t_ParamLimits

0xfaa8,	// (0x00081b6a) vid6_indi_pane_t

0xd0d2,	// (0x0007f194) wait_bar_pane_cp08

0x85fb,	// (0x0007a6bd) main_cset_text2_pane_t1_ParamLimits

0x85fb,	// (0x0007a6bd) main_cset_text2_pane_t1

0x8591,	// (0x0007a653) listscroll_gen_pane_cp06_t1_ParamLimits

0x8591,	// (0x0007a653) listscroll_gen_pane_cp06_t1

0x162a,	// (0x000736ec) main_cam6_set_pane

0x2002,	// (0x000740c4) bg_tb_trans_pane_cp06_ParamLimits

0xebec,	// (0x00080cae) cam4_indicators_pane_g1_ParamLimits

0xebfd,	// (0x00080cbf) cam4_indicators_pane_g2_ParamLimits

0xf85a,	// (0x0008191c) cam4_indicators_pane_g_ParamLimits

0xec1b,	// (0x00080cdd) cam4_indicators_pane_t1_ParamLimits

0x1855,	// (0x00073917) bg_tb_trans_pane_cp07_ParamLimits

0xec47,	// (0x00080d09) vid4_indicators_pane_g1_ParamLimits

0xec5b,	// (0x00080d1d) vid4_indicators_pane_g2_ParamLimits

0xec6f,	// (0x00080d31) vid4_indicators_pane_g3_ParamLimits

0xec80,	// (0x00080d42) vid4_indicators_pane_g4_ParamLimits

0xf86c,	// (0x0008192e) vid4_indicators_pane_g_ParamLimits

0xec9e,	// (0x00080d60) vid4_indicators_pane_t1_ParamLimits

0xed25,	// (0x00080de7) vid4_progress_pane_g1_ParamLimits

0xed35,	// (0x00080df7) vid4_progress_pane_g2_ParamLimits

0x8116,	// (0x0007a1d8) vid4_progress_pane_g3_ParamLimits

0xed45,	// (0x00080e07) vid4_progress_pane_g4_ParamLimits

0xf9f9,	// (0x00081abb) vid4_progress_pane_g_ParamLimits

0x8128,	// (0x0007a1ea) vid4_progress_pane_t1_ParamLimits

0xed5d,	// (0x00080e1f) vid4_progress_pane_t2_ParamLimits

0xed72,	// (0x00080e34) vid4_progress_pane_t3_ParamLimits

0xfa04,	// (0x00081ac6) vid4_progress_pane_t_ParamLimits

0x8140,	// (0x0007a202) wait_bar_pane_cp07_ParamLimits

0x8618,	// (0x0007a6da) main_cam6_set_pane_g2_ParamLimits

0x8618,	// (0x0007a6da) main_cam6_set_pane_g2

0x863c,	// (0x0007a6fe) main_cset6_listscroll_pane_ParamLimits

0x863c,	// (0x0007a6fe) main_cset6_listscroll_pane

0x865c,	// (0x0007a71e) main_cset6_slider_pane_ParamLimits

0x865c,	// (0x0007a71e) main_cset6_slider_pane

0x8672,	// (0x0007a734) main_cset6_text2_pane_ParamLimits

0x8672,	// (0x0007a734) main_cset6_text2_pane

0xd0e1,	// (0x0007f1a3) main_cset6_text_pane

0xd0e9,	// (0x0007f1ab) main_cset_list_pane_copy1_ParamLimits

0xd0e9,	// (0x0007f1ab) main_cset_list_pane_copy1

0xd0f9,	// (0x0007f1bb) scroll_pane_cp028_copy1

0x8680,	// (0x0007a742) cset_list_set_pane_copy1

0x8691,	// (0x0007a753) aid_position_infowindow_above_copy1

0x8699,	// (0x0007a75b) aid_position_infowindow_below_copy1

0x86a1,	// (0x0007a763) cset_list_set_pane_g1_copy1

0x1171,	// (0x00073233) cset_list_set_pane_g3_copy1_ParamLimits

0x1171,	// (0x00073233) cset_list_set_pane_g3_copy1

0x1180,	// (0x00073242) cset_list_set_pane_t1_copy1_ParamLimits

0x1180,	// (0x00073242) cset_list_set_pane_t1_copy1

0x1855,	// (0x00073917) list_highlight_pane_cp021_copy1_ParamLimits

0x1855,	// (0x00073917) list_highlight_pane_cp021_copy1

0xd102,	// (0x0007f1c4) cset6_slider_pane_ParamLimits

0xd102,	// (0x0007f1c4) cset6_slider_pane

0xd12e,	// (0x0007f1f0) main_cset6_slider_pane_g1_ParamLimits

0xd12e,	// (0x0007f1f0) main_cset6_slider_pane_g1

0x86a9,	// (0x0007a76b) main_cset6_slider_pane_g2_ParamLimits

0x86a9,	// (0x0007a76b) main_cset6_slider_pane_g2

0xd156,	// (0x0007f218) main_cset6_slider_pane_g3_ParamLimits

0xd156,	// (0x0007f218) main_cset6_slider_pane_g3

0x86d1,	// (0x0007a793) main_cset6_slider_pane_g4_ParamLimits

0x86d1,	// (0x0007a793) main_cset6_slider_pane_g4

0x86dd,	// (0x0007a79f) main_cset6_slider_pane_g5_ParamLimits

0x86dd,	// (0x0007a79f) main_cset6_slider_pane_g5

0xcb2e,	// (0x0007ebf0) main_cset6_slider_pane_g7_ParamLimits

0xcb2e,	// (0x0007ebf0) main_cset6_slider_pane_g7

0xcb3a,	// (0x0007ebfc) main_cset6_slider_pane_g8_ParamLimits

0xcb3a,	// (0x0007ebfc) main_cset6_slider_pane_g8

0x7905,	// (0x000799c7) main_cset6_slider_pane_g9_ParamLimits

0x7905,	// (0x000799c7) main_cset6_slider_pane_g9

0x7911,	// (0x000799d3) main_cset6_slider_pane_g10_ParamLimits

0x7911,	// (0x000799d3) main_cset6_slider_pane_g10

0x791d,	// (0x000799df) main_cset6_slider_pane_g11_ParamLimits

0x791d,	// (0x000799df) main_cset6_slider_pane_g11

0x7929,	// (0x000799eb) main_cset6_slider_pane_g12_ParamLimits

0x7929,	// (0x000799eb) main_cset6_slider_pane_g12

0x7935,	// (0x000799f7) main_cset6_slider_pane_g13_ParamLimits

0x7935,	// (0x000799f7) main_cset6_slider_pane_g13

0x7941,	// (0x00079a03) main_cset6_slider_pane_g14_ParamLimits

0x7941,	// (0x00079a03) main_cset6_slider_pane_g14

0x86e9,	// (0x0007a7ab) main_cset6_slider_pane_g15_ParamLimits

0x86e9,	// (0x0007a7ab) main_cset6_slider_pane_g15

0x7965,	// (0x00079a27) main_cset6_slider_pane_g16_ParamLimits

0x7965,	// (0x00079a27) main_cset6_slider_pane_g16

0x7971,	// (0x00079a33) main_cset6_slider_pane_g17_ParamLimits

0x7971,	// (0x00079a33) main_cset6_slider_pane_g17

0x0011,

0xfab1,	// (0x00081b73) main_cset6_slider_pane_g_ParamLimits

0xfab1,	// (0x00081b73) main_cset6_slider_pane_g

0xd162,	// (0x0007f224) main_cset6_slider_pane_t1_ParamLimits

0xd162,	// (0x0007f224) main_cset6_slider_pane_t1

0x8719,	// (0x0007a7db) main_cset6_slider_pane_t2_ParamLimits

0x8719,	// (0x0007a7db) main_cset6_slider_pane_t2

0x8744,	// (0x0007a806) main_cset6_slider_pane_t3_ParamLimits

0x8744,	// (0x0007a806) main_cset6_slider_pane_t3

0x876f,	// (0x0007a831) main_cset6_slider_pane_t4_ParamLimits

0x876f,	// (0x0007a831) main_cset6_slider_pane_t4

0x879a,	// (0x0007a85c) main_cset6_slider_pane_t5_ParamLimits

0x879a,	// (0x0007a85c) main_cset6_slider_pane_t5

0xd1a3,	// (0x0007f265) main_cset6_slider_pane_t7_ParamLimits

0xd1a3,	// (0x0007f265) main_cset6_slider_pane_t7

0x87c5,	// (0x0007a887) main_cset6_slider_pane_t8_ParamLimits

0x87c5,	// (0x0007a887) main_cset6_slider_pane_t8

0x87e9,	// (0x0007a8ab) main_cset6_slider_pane_t9_ParamLimits

0x87e9,	// (0x0007a8ab) main_cset6_slider_pane_t9

0x880d,	// (0x0007a8cf) main_cset6_slider_pane_t10_ParamLimits

0x880d,	// (0x0007a8cf) main_cset6_slider_pane_t10

0x8831,	// (0x0007a8f3) main_cset6_slider_pane_t11_ParamLimits

0x8831,	// (0x0007a8f3) main_cset6_slider_pane_t11

0xd1d9,	// (0x0007f29b) main_cset6_slider_pane_t14_ParamLimits

0xd1d9,	// (0x0007f29b) main_cset6_slider_pane_t14

0xd212,	// (0x0007f2d4) main_cset6_slider_pane_t15_ParamLimits

0xd212,	// (0x0007f2d4) main_cset6_slider_pane_t15

0x000b,

0xfad6,	// (0x00081b98) main_cset6_slider_pane_t_ParamLimits

0xfad6,	// (0x00081b98) main_cset6_slider_pane_t

0xee12,	// (0x00080ed4) cset_slider_pane_g1_copy1

0xee1b,	// (0x00080edd) cset_slider_pane_g2_copy1

0xee24,	// (0x00080ee6) cset_slider_pane_g3_copy1

0x162a,	// (0x000736ec) bg_popup_sub_pane_cp011_copy1

0xd24b,	// (0x0007f30d) main_cset_text_pane_g1_copy1

0xcca0,	// (0x0007ed62) main_cset_text_pane_t1_copy1

0xccae,	// (0x0007ed70) main_cset_text_pane_t2_copy1

0xccbc,	// (0x0007ed7e) main_cset_text_pane_t3_copy1

0xccca,	// (0x0007ed8c) main_cset_text_pane_t4_copy1

0xccd8,	// (0x0007ed9a) main_cset_text_pane_t5_copy1

0xd253,	// (0x0007f315) main_cset_text_pane_t6_copy1

0xd261,	// (0x0007f323) main_cset_text_pane_t7_copy1

0x85fb,	// (0x0007a6bd) main_cset_text2_pane_t1_copy1

0x1855,	// (0x00073917) main_ncimui_pane

0x5924,	// (0x000779e6) popup_query_ncimui_window_ParamLimits

0x5924,	// (0x000779e6) popup_query_ncimui_window

0xc39c,	// (0x0007e45e) field_cale_ev2_pane_g4_ParamLimits

0xc39c,	// (0x0007e45e) field_cale_ev2_pane_g4

0x6b4c,	// (0x00078c0e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6b4c,	// (0x00078c0e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7f4,	// (0x000818b6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7f4,	// (0x000818b6) cell_video_dialer_keypad_pane_g

0x6b64,	// (0x00078c26) cell_video_dialer_keypad_pane_t1

0x162a,	// (0x000736ec) bg_popup_window_pane_cp012

0xbb9e,	// (0x0007dc60) heading_pane_cp06

0xd28d,	// (0x0007f34f) ncim_query_content_pane

0x162a,	// (0x000736ec) bg_popup_heading_pane_cp01

0xd295,	// (0x0007f357) ncim_heading_pane_t1

0xd2a3,	// (0x0007f365) ncim_indicator_popup_pane

0xd2b5,	// (0x0007f377) ncim_query_button_pane

0xd2c9,	// (0x0007f38b) ncim_query_content_pane_t1

0xd2db,	// (0x0007f39d) ncim_query_content_pane_t2

0x0005,

0xfb1a,	// (0x00081bdc) ncim_query_content_pane_t

0xd315,	// (0x0007f3d7) ncim_query_list_pane

0xd327,	// (0x0007f3e9) ncim_query_popup_pane

0xd2a3,	// (0x0007f365) ncim_indicator_popup_pane_ParamLimits

0x897e,	// (0x0007aa40) ncim_query_content_pane_g1_ParamLimits

0x897e,	// (0x0007aa40) ncim_query_content_pane_g1

0xd2c9,	// (0x0007f38b) ncim_query_content_pane_t1_ParamLimits

0xd2db,	// (0x0007f39d) ncim_query_content_pane_t2_ParamLimits

0x898a,	// (0x0007aa4c) ncim_query_content_pane_t3_ParamLimits

0x898a,	// (0x0007aa4c) ncim_query_content_pane_t3

0x89b2,	// (0x0007aa74) ncim_query_content_pane_t4_ParamLimits

0x89b2,	// (0x0007aa74) ncim_query_content_pane_t4

0x89da,	// (0x0007aa9c) ncim_query_content_pane_t5_ParamLimits

0x89da,	// (0x0007aa9c) ncim_query_content_pane_t5

0xd2ed,	// (0x0007f3af) ncim_query_content_pane_t6_ParamLimits

0xd2ed,	// (0x0007f3af) ncim_query_content_pane_t6

0xfb1a,	// (0x00081bdc) ncim_query_content_pane_t_ParamLimits

0xd315,	// (0x0007f3d7) ncim_query_list_pane_ParamLimits

0xd327,	// (0x0007f3e9) ncim_query_popup_pane_ParamLimits

0xd33b,	// (0x0007f3fd) wait_bar_pane_cp04

0x162a,	// (0x000736ec) input_focus_pane_cp011

0xd343,	// (0x0007f405) ncim_query_popup_pane_t1

0xd351,	// (0x0007f413) ncim_list_query_list_pane_ParamLimits

0xd351,	// (0x0007f413) ncim_list_query_list_pane

0x162a,	// (0x000736ec) bg_button_pane_cp027

0xd35e,	// (0x0007f420) ncim_query_button_pane_g1

0x162a,	// (0x000736ec) list_highlight_pane_cp012

0xd368,	// (0x0007f42a) ncim_list_query_list_pane_g1

0xd370,	// (0x0007f432) ncim_list_query_list_pane_t1

0xec0c,	// (0x00080cce) cam4_indicators_pane_g3_ParamLimits

0xec0c,	// (0x00080cce) cam4_indicators_pane_g3

0xec8c,	// (0x00080d4e) vid4_indicators_pane_g5_ParamLimits

0xec8c,	// (0x00080d4e) vid4_indicators_pane_g5

0xed51,	// (0x00080e13) vid4_progress_pane_g5_ParamLimits

0xed51,	// (0x00080e13) vid4_progress_pane_g5

0x8869,	// (0x0007a92b) main_ncimui_pane_g1

0x88d2,	// (0x0007a994) ncimui_group_query_pane_ParamLimits

0x88d2,	// (0x0007a994) ncimui_group_query_pane

0x891a,	// (0x0007a9dc) ncimui_list_pane_ParamLimits

0x891a,	// (0x0007a9dc) ncimui_list_pane

0x8941,	// (0x0007aa03) ncimui_text_pane_ParamLimits

0x8941,	// (0x0007aa03) ncimui_text_pane

0x8a02,	// (0x0007aac4) ncimui_text_pane_t1_ParamLimits

0x8a02,	// (0x0007aac4) ncimui_text_pane_t1

0xd37e,	// (0x0007f440) ncimui_list_single_graphic_pane_ParamLimits

0xd37e,	// (0x0007f440) ncimui_list_single_graphic_pane

0x8a20,	// (0x0007aae2) ncimui_query_pane_ParamLimits

0x8a20,	// (0x0007aae2) ncimui_query_pane

0x162a,	// (0x000736ec) list_highlight_pane_cp013

0xd38e,	// (0x0007f450) ncim_list_query_list_pane_t1_copy1

0xd368,	// (0x0007f42a) ncim_list_single_graphic_pane_g1

0x8a33,	// (0x0007aaf5) ncim_query_button_pane_cp01

0x8a3f,	// (0x0007ab01) ncim_query_entry_pane_ParamLimits

0x8a3f,	// (0x0007ab01) ncim_query_entry_pane

0x8a52,	// (0x0007ab14) ncimui_query_pane_g1

0x8a5e,	// (0x0007ab20) ncimui_query_pane_t1_ParamLimits

0x8a5e,	// (0x0007ab20) ncimui_query_pane_t1

0x1855,	// (0x00073917) input_focus_pane_cp012

0xd39c,	// (0x0007f45e) ncim_query_entry_pane_t1

0x21f2,	// (0x000742b4) main_im_pane_ParamLimits

0x1855,	// (0x00073917) main_mobtv_pane_ParamLimits

0x1855,	// (0x00073917) main_mobtv_pane

0x8701,	// (0x0007a7c3) main_cset6_slider_pane_g18_ParamLimits

0x8701,	// (0x0007a7c3) main_cset6_slider_pane_g18

0x870d,	// (0x0007a7cf) main_cset6_slider_pane_g19_ParamLimits

0x870d,	// (0x0007a7cf) main_cset6_slider_pane_g19

0x201e,	// (0x000740e0) bg_main_mobtv_pane_ParamLimits

0x201e,	// (0x000740e0) bg_main_mobtv_pane

0x8a77,	// (0x0007ab39) main_mobtv_info_pane

0x8a80,	// (0x0007ab42) main_mobtv_loading_pane_ParamLimits

0x8a80,	// (0x0007ab42) main_mobtv_loading_pane

0xd3ae,	// (0x0007f470) main_mobtv_pg_channel_list_pane

0xd3b8,	// (0x0007f47a) main_mobtv_pg_hdr_pane

0x8a8d,	// (0x0007ab4f) main_mobtv_programe_curr_pane_ParamLimits

0x8a8d,	// (0x0007ab4f) main_mobtv_programe_curr_pane

0x8a9a,	// (0x0007ab5c) main_mobtv_programe_next_pane_ParamLimits

0x8a9a,	// (0x0007ab5c) main_mobtv_programe_next_pane

0xd3c1,	// (0x0007f483) popup_mobtv_noti_window

0x2cb3,	// (0x00074d75) main_tv_pg_hdr_pane_g1

0xd3c9,	// (0x0007f48b) main_tv_pg_hdr_pane_g2

0xd3d1,	// (0x0007f493) main_tv_pg_hdr_pane_g3

0xd3d9,	// (0x0007f49b) main_tv_pg_hdr_pane_g4

0xd3e1,	// (0x0007f4a3) main_tv_pg_hdr_pane_g5

0xd3eb,	// (0x0007f4ad) main_tv_pg_hdr_pane_g6

0xd3f5,	// (0x0007f4b7) main_tv_pg_hdr_pane_g7

0xd3ff,	// (0x0007f4c1) main_tv_pg_hdr_pane_g8

0xd409,	// (0x0007f4cb) main_tv_pg_hdr_pane_g9

0xd413,	// (0x0007f4d5) main_tv_pg_hdr_pane_g10

0xd41d,	// (0x0007f4df) main_tv_pg_hdr_pane_g11

0x000a,

0xfb27,	// (0x00081be9) main_tv_pg_hdr_pane_g

0xd427,	// (0x0007f4e9) main_tv_pg_hdr_pane_t1

0xd435,	// (0x0007f4f7) main_tv_pg_hdr_pane_t2

0xd443,	// (0x0007f505) main_tv_pg_hdr_pane_t3

0xd453,	// (0x0007f515) main_tv_pg_hdr_pane_t4

0xd463,	// (0x0007f525) main_tv_pg_hdr_pane_t5

0x0004,

0xfb3e,	// (0x00081c00) main_tv_pg_hdr_pane_t

0xd473,	// (0x0007f535) single_mobtv_pg_channel_pane_ParamLimits

0xd473,	// (0x0007f535) single_mobtv_pg_channel_pane

0xd485,	// (0x0007f547) single_mobtv_pg_channel_table_pane

0xd48e,	// (0x0007f550) single_mobtv_pg_channel_thumb_pane

0xd497,	// (0x0007f559) single_tv_pg_channel_pane_g1

0xd4a0,	// (0x0007f562) single_tv_pg_channel_pane_g2

0x0001,

0xfb49,	// (0x00081c0b) single_tv_pg_channel_pane_g

0x2002,	// (0x000740c4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2002,	// (0x000740c4) bg_single_mobtv_pg_channel_thumb_pane

0xd4a9,	// (0x0007f56b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd4a9,	// (0x0007f56b) single_mobtv_pg_channel_thumb_pane_g1

0xd4b7,	// (0x0007f579) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd4b7,	// (0x0007f579) single_mobtv_pg_channel_thumb_pane_g2

0xd4c3,	// (0x0007f585) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd4c3,	// (0x0007f585) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb4e,	// (0x00081c10) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb4e,	// (0x00081c10) single_mobtv_pg_channel_thumb_pane_g

0xd4cf,	// (0x0007f591) single_mobtv_pg_channel_thumb_pane_t1

0xd4dd,	// (0x0007f59f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb55,	// (0x00081c17) single_mobtv_pg_channel_thumb_pane_t

0x2cb3,	// (0x00074d75) bg_single_mobtv_pg_channel_table_pane_g1

0x2cb3,	// (0x00074d75) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3b9,	// (0x0008147b) bg_single_mobtv_pg_channel_table_pane_g

0xd4eb,	// (0x0007f5ad) single_mobtv_pg_channel_table_pane_t1

0xd4f9,	// (0x0007f5bb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb5a,	// (0x00081c1c) single_mobtv_pg_channel_table_pane_t

0x8aaf,	// (0x0007ab71) main_mobtv_info_pane_g1_ParamLimits

0x8aaf,	// (0x0007ab71) main_mobtv_info_pane_g1

0x8acd,	// (0x0007ab8f) main_mobtv_info_pane_t1_ParamLimits

0x8acd,	// (0x0007ab8f) main_mobtv_info_pane_t1

0x8b45,	// (0x0007ac07) main_mobtv_info_pane_t2_ParamLimits

0x8b45,	// (0x0007ac07) main_mobtv_info_pane_t2

0x0002,

0xfb64,	// (0x00081c26) main_mobtv_info_pane_t_ParamLimits

0xfb64,	// (0x00081c26) main_mobtv_info_pane_t

0x8bd4,	// (0x0007ac96) wait_bar_pane_cp05

0x8be6,	// (0x0007aca8) main_mobtv_loading_pane_g1_ParamLimits

0x8be6,	// (0x0007aca8) main_mobtv_loading_pane_g1

0x8bf9,	// (0x0007acbb) main_mobtv_loading_pane_g2_ParamLimits

0x8bf9,	// (0x0007acbb) main_mobtv_loading_pane_g2

0x8c05,	// (0x0007acc7) main_mobtv_loading_pane_g3_ParamLimits

0x8c05,	// (0x0007acc7) main_mobtv_loading_pane_g3

0x0002,

0xfb6b,	// (0x00081c2d) main_mobtv_loading_pane_g_ParamLimits

0xfb6b,	// (0x00081c2d) main_mobtv_loading_pane_g

0xd507,	// (0x0007f5c9) main_mobtv_loading_pane_t1_ParamLimits

0xd507,	// (0x0007f5c9) main_mobtv_loading_pane_t1

0xd51f,	// (0x0007f5e1) main_mobtv_loading_pane_t2_ParamLimits

0xd51f,	// (0x0007f5e1) main_mobtv_loading_pane_t2

0x0001,

0xfb72,	// (0x00081c34) main_mobtv_loading_pane_t_ParamLimits

0xfb72,	// (0x00081c34) main_mobtv_loading_pane_t

0x8c18,	// (0x0007acda) wait_bar_pane_cp06_ParamLimits

0x8c18,	// (0x0007acda) wait_bar_pane_cp06

0xd543,	// (0x0007f605) main_mobtv_programe_curr_pane_t1

0xd551,	// (0x0007f613) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb77,	// (0x00081c39) main_mobtv_programe_curr_pane_t

0xd55f,	// (0x0007f621) main_mobtv_programe_next_pane_t1

0xd56d,	// (0x0007f62f) main_mobtv_programe_next_pane_t2

0xd57b,	// (0x0007f63d) main_mobtv_programe_next_pane_t3

0x0002,

0xfb7c,	// (0x00081c3e) main_mobtv_programe_next_pane_t

0x162a,	// (0x000736ec) bg_popup_mobtv_noti_window_pane

0xd589,	// (0x0007f64b) popup_mobtv_noti_window_g1

0xd591,	// (0x0007f653) popup_mobtv_noti_window_t1

0xd59f,	// (0x0007f661) popup_mobtv_noti_window_t2

0x0001,

0xfb83,	// (0x00081c45) popup_mobtv_noti_window_t

0x2cb3,	// (0x00074d75) bg_popup_mobtv_noti_window_pane_g1

0x162a,	// (0x000736ec) sc_clock_pane

0x162a,	// (0x000736ec) main_fs_bigclock_pane

0x834f,	// (0x0007a411) blid2_tripm_pane_t4_ParamLimits

0x834f,	// (0x0007a411) blid2_tripm_pane_t4

0x8c27,	// (0x0007ace9) sc_clock_pane_g1_ParamLimits

0x8c27,	// (0x0007ace9) sc_clock_pane_g1

0x8c39,	// (0x0007acfb) sc_clock_pane_t1_ParamLimits

0x8c39,	// (0x0007acfb) sc_clock_pane_t1

0x8c5b,	// (0x0007ad1d) sc_clock_pane_t2_ParamLimits

0x8c5b,	// (0x0007ad1d) sc_clock_pane_t2

0x8c73,	// (0x0007ad35) sc_clock_pane_t3_ParamLimits

0x8c73,	// (0x0007ad35) sc_clock_pane_t3

0x0004,

0xfb88,	// (0x00081c4a) sc_clock_pane_t_ParamLimits

0xfb88,	// (0x00081c4a) sc_clock_pane_t

0x963c,	// (0x0007b6fe) main_fs_bigclock_indicator_pane_ParamLimits

0x963c,	// (0x0007b6fe) main_fs_bigclock_indicator_pane

0x8d19,	// (0x0007addb) main_fs_bigclock_pane_g1_ParamLimits

0x8d19,	// (0x0007addb) main_fs_bigclock_pane_g1

0x9648,	// (0x0007b70a) main_fs_bigclock_pane_t1_ParamLimits

0x9648,	// (0x0007b70a) main_fs_bigclock_pane_t1

0x965a,	// (0x0007b71c) main_fs_bigclock_pane_t2_ParamLimits

0x965a,	// (0x0007b71c) main_fs_bigclock_pane_t2

0x966e,	// (0x0007b730) main_fs_bigclock_pane_t3_ParamLimits

0x966e,	// (0x0007b730) main_fs_bigclock_pane_t3

0x0002,

0xfd19,	// (0x00081ddb) main_fs_bigclock_pane_t_ParamLimits

0xfd19,	// (0x00081ddb) main_fs_bigclock_pane_t

0xe132,	// (0x000801f4) main_fs_bigclock_indicator_pane_g1

0xd2bd,	// (0x0007f37f) ncim_query_content_pane_g2_ParamLimits

0xd2bd,	// (0x0007f37f) ncim_query_content_pane_g2

0x0001,

0xfb15,	// (0x00081bd7) ncim_query_content_pane_g_ParamLimits

0xfb15,	// (0x00081bd7) ncim_query_content_pane_g

0x8c8c,	// (0x0007ad4e) sc_clock_pane_t4_ParamLimits

0x8c8c,	// (0x0007ad4e) sc_clock_pane_t4

0x1855,	// (0x00073917) main_radioblah_pane

0xeb7e,	// (0x00080c40) cell_call4_button_pane_t1_copy1_ParamLimits

0xeb7e,	// (0x00080c40) cell_call4_button_pane_t1_copy1

0x8881,	// (0x0007a943) main_ncimui_pane_t1_ParamLimits

0x8881,	// (0x0007a943) main_ncimui_pane_t1

0x889b,	// (0x0007a95d) main_ncimui_pane_t2_ParamLimits

0x889b,	// (0x0007a95d) main_ncimui_pane_t2

0x0002,

0xfb0e,	// (0x00081bd0) main_ncimui_pane_t_ParamLimits

0xfb0e,	// (0x00081bd0) main_ncimui_pane_t

0xd6e4,	// (0x0007f7a6) main_radioblah_anim_pane_ParamLimits

0xd6e4,	// (0x0007f7a6) main_radioblah_anim_pane

0xd6f5,	// (0x0007f7b7) main_radioblah_info_pane_ParamLimits

0xd6f5,	// (0x0007f7b7) main_radioblah_info_pane

0xd709,	// (0x0007f7cb) main_radioblah_pane_t1_ParamLimits

0xd709,	// (0x0007f7cb) main_radioblah_pane_t1

0xd725,	// (0x0007f7e7) main_radioblah_pane_t2_ParamLimits

0xd725,	// (0x0007f7e7) main_radioblah_pane_t2

0x0003,

0xfba9,	// (0x00081c6b) main_radioblah_pane_t_ParamLimits

0xfba9,	// (0x00081c6b) main_radioblah_pane_t

0x8d78,	// (0x0007ae3a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8d78,	// (0x0007ae3a) main_radioblah_rocker_ctrl_pane

0xd76d,	// (0x0007f82f) main_radioblah_info_pane_t1_ParamLimits

0xd76d,	// (0x0007f82f) main_radioblah_info_pane_t1

0x8dd0,	// (0x0007ae92) main_radioblah_info_pane_t2_ParamLimits

0x8dd0,	// (0x0007ae92) main_radioblah_info_pane_t2

0x0003,

0xfbb2,	// (0x00081c74) main_radioblah_info_pane_t_ParamLimits

0xfbb2,	// (0x00081c74) main_radioblah_info_pane_t

0x2cb3,	// (0x00074d75) main_radioblah_rocker_ctrl_pane_g1

0x8e80,	// (0x0007af42) main_radioblah_rocker_ctrl_pane_g2

0x8e88,	// (0x0007af4a) main_radioblah_rocker_ctrl_pane_g3

0x8e90,	// (0x0007af52) main_radioblah_rocker_ctrl_pane_g4

0x8e98,	// (0x0007af5a) main_radioblah_rocker_ctrl_pane_g5

0x8ea0,	// (0x0007af62) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbbb,	// (0x00081c7d) main_radioblah_rocker_ctrl_pane_g

0x85fb,	// (0x0007a6bd) main_cset_text2_pane_t1_copy1_ParamLimits

0xebdc,	// (0x00080c9e) cam4_image_uncrop_qvga_pane

0xec35,	// (0x00080cf7) vid4_image_uncrop_qcif_pane

0xed8f,	// (0x00080e51) cam6_image_uncrop_qvga_pane_ParamLimits

0xed8f,	// (0x00080e51) cam6_image_uncrop_qvga_pane

0xcfc4,	// (0x0007f086) vid6_image_uncrop_qcif_pane_ParamLimits

0xcfc4,	// (0x0007f086) vid6_image_uncrop_qcif_pane

0x162a,	// (0x000736ec) bg_popup_preview_window_pane_cp03

0xd26f,	// (0x0007f331) list_cset_text2_pane

0xd277,	// (0x0007f339) main_cset6_text2_pane_g1

0xd27f,	// (0x0007f341) main_cset6_text2_pane_t1

0x8ea8,	// (0x0007af6a) list_cset_text2_pane_t1_ParamLimits

0x8ea8,	// (0x0007af6a) list_cset_text2_pane_t1

0x1855,	// (0x00073917) main_radioblah_pane_ParamLimits

0x8bc0,	// (0x0007ac82) main_mobtv_info_pane_t3_ParamLimits

0x8bc0,	// (0x0007ac82) main_mobtv_info_pane_t3

0x8d66,	// (0x0007ae28) main_radioblah_pane_g1

0x8da0,	// (0x0007ae62) main_radioblah_info_pane_g1

0x8e25,	// (0x0007aee7) main_radioblah_info_pane_t3_ParamLimits

0x8e25,	// (0x0007aee7) main_radioblah_info_pane_t3

0x3f1c,	// (0x00075fde) highlight_cell_cale_month_pane_ParamLimits

0x3f1c,	// (0x00075fde) highlight_cell_cale_month_pane

0x162a,	// (0x000736ec) main_phob_fisheye_pane

0xc43d,	// (0x0007e4ff) scroll_pane_cp0031_ParamLimits

0xc43d,	// (0x0007e4ff) scroll_pane_cp0031

0xd0d2,	// (0x0007f194) wait_bar_pane_cp08_ParamLimits

0x8680,	// (0x0007a742) cset_list_set_pane_copy1_ParamLimits

0xd7a7,	// (0x0007f869) highlight_cell_cale_month_pane_g1

0x8ec1,	// (0x0007af83) highlight_cell_cale_month_pane_t1

0xee75,	// (0x00080f37) list_gen_pane_cp01

0xcb19,	// (0x0007ebdb) scroll_pane_01

0x8ecf,	// (0x0007af91) list_single_double_fisheye_pane

0x11b2,	// (0x00073274) list_double_fisheye_pane_g1_ParamLimits

0x11b2,	// (0x00073274) list_double_fisheye_pane_g1

0x11be,	// (0x00073280) list_double_fisheye_pane_g2_ParamLimits

0x11be,	// (0x00073280) list_double_fisheye_pane_g2

0x8ed8,	// (0x0007af9a) list_double_fisheye_pane_g3_ParamLimits

0x8ed8,	// (0x0007af9a) list_double_fisheye_pane_g3

0x0004,

0xfbc8,	// (0x00081c8a) list_double_fisheye_pane_g_ParamLimits

0xfbc8,	// (0x00081c8a) list_double_fisheye_pane_g

0x11ef,	// (0x000732b1) list_double_fisheye_pane_t1_ParamLimits

0x11ef,	// (0x000732b1) list_double_fisheye_pane_t1

0x120a,	// (0x000732cc) list_double_fisheye_pane_t2_ParamLimits

0x120a,	// (0x000732cc) list_double_fisheye_pane_t2

0x0001,

0xfbd3,	// (0x00081c95) list_double_fisheye_pane_t_ParamLimits

0xfbd3,	// (0x00081c95) list_double_fisheye_pane_t

0x162a,	// (0x000736ec) main_call5_pane

0x8cb7,	// (0x0007ad79) sc_swipe_pane_ParamLimits

0x8cb7,	// (0x0007ad79) sc_swipe_pane

0x8ef7,	// (0x0007afb9) call5_image_pane_ParamLimits

0x8ef7,	// (0x0007afb9) call5_image_pane

0x8f14,	// (0x0007afd6) call5_swipe_1_pane_ParamLimits

0x8f14,	// (0x0007afd6) call5_swipe_1_pane

0x8f27,	// (0x0007afe9) call5_swipe_2_pane_ParamLimits

0x8f27,	// (0x0007afe9) call5_swipe_2_pane

0x8f52,	// (0x0007b014) popup_call5_audio_first_window_ParamLimits

0x8f52,	// (0x0007b014) popup_call5_audio_first_window

0x2002,	// (0x000740c4) call5_swipe_1_pane_g1_ParamLimits

0x2002,	// (0x000740c4) call5_swipe_1_pane_g1

0xd7af,	// (0x0007f871) call5_swipe_1_pane_g2_ParamLimits

0xd7af,	// (0x0007f871) call5_swipe_1_pane_g2

0x0001,

0xfbd8,	// (0x00081c9a) call5_swipe_1_pane_g_ParamLimits

0xfbd8,	// (0x00081c9a) call5_swipe_1_pane_g

0xd7bb,	// (0x0007f87d) call5_swipe_1_pane_t1_ParamLimits

0xd7bb,	// (0x0007f87d) call5_swipe_1_pane_t1

0x2002,	// (0x000740c4) call5_swipe_2_pane_g1_ParamLimits

0x2002,	// (0x000740c4) call5_swipe_2_pane_g1

0xd7d0,	// (0x0007f892) call5_swipe_2_pane_g2_ParamLimits

0xd7d0,	// (0x0007f892) call5_swipe_2_pane_g2

0x0001,

0xfbdd,	// (0x00081c9f) call5_swipe_2_pane_g_ParamLimits

0xfbdd,	// (0x00081c9f) call5_swipe_2_pane_g

0xd7dc,	// (0x0007f89e) call5_swipe_2_pane_t1_ParamLimits

0xd7dc,	// (0x0007f89e) call5_swipe_2_pane_t1

0xd7f1,	// (0x0007f8b3) sc_swipe_pane_g1_ParamLimits

0xd7f1,	// (0x0007f8b3) sc_swipe_pane_g1

0xd7fe,	// (0x0007f8c0) sc_swipe_pane_g2_ParamLimits

0xd7fe,	// (0x0007f8c0) sc_swipe_pane_g2

0x0001,

0xfbe2,	// (0x00081ca4) sc_swipe_pane_g_ParamLimits

0xfbe2,	// (0x00081ca4) sc_swipe_pane_g

0xd80a,	// (0x0007f8cc) sc_swipe_pane_t1_ParamLimits

0xd80a,	// (0x0007f8cc) sc_swipe_pane_t1

0x162a,	// (0x000736ec) main_cmail_launcher_pane

0x8f63,	// (0x0007b025) aid_size_cell_cmail_l_ParamLimits

0x8f63,	// (0x0007b025) aid_size_cell_cmail_l

0x8f71,	// (0x0007b033) grid_cmail_l_pane_ParamLimits

0x8f71,	// (0x0007b033) grid_cmail_l_pane

0x8f8b,	// (0x0007b04d) cell_cmail_l_pane_ParamLimits

0x8f8b,	// (0x0007b04d) cell_cmail_l_pane

0xd81f,	// (0x0007f8e1) cell_cmail_l_pane_g1_ParamLimits

0xd81f,	// (0x0007f8e1) cell_cmail_l_pane_g1

0xd82b,	// (0x0007f8ed) cell_cmail_l_pane_t1_ParamLimits

0xd82b,	// (0x0007f8ed) cell_cmail_l_pane_t1

0xd841,	// (0x0007f903) cell_cmail_l_pane_t2_ParamLimits

0xd841,	// (0x0007f903) cell_cmail_l_pane_t2

0x0001,

0xfbe7,	// (0x00081ca9) cell_cmail_l_pane_t_ParamLimits

0xfbe7,	// (0x00081ca9) cell_cmail_l_pane_t

0x1855,	// (0x00073917) grid_highlight_pane_cp018_ParamLimits

0x1855,	// (0x00073917) grid_highlight_pane_cp018

0x16fa,	// (0x000737bc) main2_pane_ParamLimits

0x16fa,	// (0x000737bc) main2_pane

0x2419,	// (0x000744db) popup_sp_fs_action_menu_bg_pane_g1

0x2421,	// (0x000744e3) popup_sp_fs_action_menu_bg_pane_g2

0x2429,	// (0x000744eb) popup_sp_fs_action_menu_bg_pane_g3

0x2431,	// (0x000744f3) popup_sp_fs_action_menu_bg_pane_g4

0x2439,	// (0x000744fb) popup_sp_fs_action_menu_bg_pane_g5

0x2441,	// (0x00074503) popup_sp_fs_action_menu_bg_pane_g6

0x2449,	// (0x0007450b) popup_sp_fs_action_menu_bg_pane_g7

0x2451,	// (0x00074513) popup_sp_fs_action_menu_bg_pane_g8

0x2459,	// (0x0007451b) popup_sp_fs_action_menu_bg_pane_g9

0x2461,	// (0x00074523) popup_sp_fs_action_menu_bg_pane_g10

0x2461,	// (0x00074523) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x000811ed) popup_sp_fs_action_menu_bg_pane_g

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g3_g1

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g3_g2

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x0008129b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x0008129b) list_medium_line_x2_t3_g3_g

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g3_t1

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g3_t2

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x000812a2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x000812a2) list_medium_line_x2_t3_g3_t

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g2_g1

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1ad,	// (0x0008126f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1ad,	// (0x0008126f) list_medium_line_x2_t3_g2_g

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g2_t1

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g2_t2

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x000812a2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x000812a2) list_medium_line_x2_t3_g2_t

0x2002,	// (0x000740c4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t4_g4_g1

0x2002,	// (0x000740c4) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t4_g4_g2

0x2002,	// (0x000740c4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t4_g4_g3

0x2002,	// (0x000740c4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1e7,	// (0x000812a9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1e7,	// (0x000812a9) list_medium_line_x2_t4_g4_g

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g4_t1

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g4_t2

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g4_t3

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f0,	// (0x000812b2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f0,	// (0x000812b2) list_medium_line_x2_t4_g4_t

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g4_g1

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g4_g2

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g4_g3

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1e7,	// (0x000812a9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1e7,	// (0x000812a9) list_medium_line_x2_t2_g4_g

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t2_g4_t1

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x0008127e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x0008127e) list_medium_line_x2_t2_g4_t

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g3_g1

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g3_g2

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x0008129b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x0008129b) list_medium_line_x2_t2_g3_g

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t2_g3_t1

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x0008127e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x0008127e) list_medium_line_x2_t2_g3_t

0x42ad,	// (0x0007636f) main_sp_fs_list_pane_ParamLimits

0x42ad,	// (0x0007636f) main_sp_fs_list_pane

0x42b9,	// (0x0007637b) sp_fs_scroll_pane_ParamLimits

0x42b9,	// (0x0007637b) sp_fs_scroll_pane

0x42c5,	// (0x00076387) list_medium_line_x2_t3_t1

0x42c5,	// (0x00076387) list_medium_line_x2_t3_t2

0x42c5,	// (0x00076387) list_medium_line_x2_t3_t3

0x0002,

0xf29d,	// (0x0008135f) list_medium_line_x2_t3_t

0x42c5,	// (0x00076387) list_medium_line_x3_t4_t1

0x42c5,	// (0x00076387) list_medium_line_x3_t4_t2

0x42c5,	// (0x00076387) list_medium_line_x3_t4_t3

0x42c5,	// (0x00076387) list_medium_line_x3_t4_t4

0x0003,

0xf2a4,	// (0x00081366) list_medium_line_x3_t4_t

0x42c5,	// (0x00076387) list_medium_line_x4_t5_t1

0x42c5,	// (0x00076387) list_medium_line_x4_t5_t2

0x42c5,	// (0x00076387) list_medium_line_x4_t5_t3

0x42c5,	// (0x00076387) list_medium_line_x4_t5_t4

0x42c5,	// (0x00076387) list_medium_line_x4_t5_t5

0x0004,

0xf2ad,	// (0x0008136f) list_medium_line_x4_t5_t

0x2002,	// (0x000740c4) list_medium_line_t4_g4_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t4_g4_g1

0x2002,	// (0x000740c4) list_medium_line_t4_g4_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t4_g4_g2

0x2002,	// (0x000740c4) list_medium_line_t4_g4_g3_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t4_g4_g3

0x2002,	// (0x000740c4) list_medium_line_t4_g4_g4_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t4_g4_g4

0x0003,

0xf1e7,	// (0x000812a9) list_medium_line_t4_g4_g_ParamLimits

0xf1e7,	// (0x000812a9) list_medium_line_t4_g4_g

0x2b2f,	// (0x00074bf1) list_medium_line_t4_g4_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t4_g4_t1

0x2b2f,	// (0x00074bf1) list_medium_line_t4_g4_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t4_g4_t2

0x2b2f,	// (0x00074bf1) list_medium_line_t4_g4_t3_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t4_g4_t3

0x2b2f,	// (0x00074bf1) list_medium_line_t4_g4_t4_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t4_g4_t4

0x0003,

0xf1f0,	// (0x000812b2) list_medium_line_t4_g4_t_ParamLimits

0xf1f0,	// (0x000812b2) list_medium_line_t4_g4_t

0x45da,	// (0x0007669c) chi_dic_find_pane_g1

0x56ee,	// (0x000777b0) main_tport_pane

0x42c5,	// (0x00076387) list_medium_line_plain_t1

0x2002,	// (0x000740c4) list_medium_line_t2_g2_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t2_g2_g1

0x2002,	// (0x000740c4) list_medium_line_t2_g2_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t2_g2_g2

0x0001,

0xf1ad,	// (0x0008126f) list_medium_line_t2_g2_g_ParamLimits

0xf1ad,	// (0x0008126f) list_medium_line_t2_g2_g

0x2b2f,	// (0x00074bf1) list_medium_line_t2_g2_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t2_g2_t1

0x2b2f,	// (0x00074bf1) list_medium_line_t2_g2_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x0008127e) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x0008127e) list_medium_line_t2_g2_t

0xcf20,	// (0x0007efe2) aid_sp_fs_list_icon_a_sm

0xed87,	// (0x00080e49) aid_sp_fs_list_icon_d

0xcf28,	// (0x0007efea) aid_sp_fs_text_primary

0xcf31,	// (0x0007eff3) aid_sp_fs_text_secondary

0x162a,	// (0x000736ec) list_medium_line

0x162a,	// (0x000736ec) list_medium_line_g2

0x162a,	// (0x000736ec) list_medium_line_g3

0x162a,	// (0x000736ec) list_medium_line_plain

0x162a,	// (0x000736ec) list_medium_line_plain_t2

0x162a,	// (0x000736ec) list_medium_line_plain_t3

0x162a,	// (0x000736ec) list_medium_line_right_icon

0x162a,	// (0x000736ec) list_medium_line_right_iconx2

0x162a,	// (0x000736ec) list_medium_line_t2

0x162a,	// (0x000736ec) list_medium_line_t2_g2

0x162a,	// (0x000736ec) list_medium_line_t2_g3

0x162a,	// (0x000736ec) list_medium_line_t2_right_icon

0x162a,	// (0x000736ec) list_medium_line_t2_right_iconx2

0x162a,	// (0x000736ec) list_medium_line_t3

0x162a,	// (0x000736ec) list_medium_line_t3_g2

0x162a,	// (0x000736ec) list_medium_line_t3_g3

0x162a,	// (0x000736ec) list_medium_line_t3_right_iconx2

0x162a,	// (0x000736ec) list_medium_line_t4_g4

0x162a,	// (0x000736ec) list_medium_line_x2

0x162a,	// (0x000736ec) list_medium_line_x2_t2_g2

0x162a,	// (0x000736ec) list_medium_line_x2_t2_g3

0x162a,	// (0x000736ec) list_medium_line_x2_t2_g4

0x162a,	// (0x000736ec) list_medium_line_x2_t3

0x162a,	// (0x000736ec) list_medium_line_x2_t3_g2

0x162a,	// (0x000736ec) list_medium_line_x2_t3_g3

0x162a,	// (0x000736ec) list_medium_line_x2_t3_g4

0x162a,	// (0x000736ec) list_medium_line_x2_t4_g2

0x162a,	// (0x000736ec) list_medium_line_x2_t4_g4

0x162a,	// (0x000736ec) list_medium_line_x3

0x162a,	// (0x000736ec) list_medium_line_x3_t4

0x162a,	// (0x000736ec) list_medium_line_x3_t4_g4

0x162a,	// (0x000736ec) list_medium_line_x4_t4

0x162a,	// (0x000736ec) list_medium_line_x4_t4_g7

0x162a,	// (0x000736ec) list_medium_line_x4_t5

0x115d,	// (0x0007321f) list_single_fs_dyc_pane_ParamLimits

0x115d,	// (0x0007321f) list_single_fs_dyc_pane

0x2002,	// (0x000740c4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x4_t4_g7_g1

0x2002,	// (0x000740c4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x4_t4_g7_g2

0x2002,	// (0x000740c4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x4_t4_g7_g3

0x2002,	// (0x000740c4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x4_t4_g7_g4

0x2002,	// (0x000740c4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x4_t4_g7_g5

0x2002,	// (0x000740c4) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x4_t4_g7_g6

0x2010,	// (0x000740d2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2010,	// (0x000740d2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaef,	// (0x00081bb1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaef,	// (0x00081bb1) list_medium_line_x4_t4_g7_g

0x2b2f,	// (0x00074bf1) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x4_t4_g7_t1

0x2b2f,	// (0x00074bf1) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x4_t4_g7_t2

0x2b2f,	// (0x00074bf1) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x4_t4_g7_t3

0xa98f,	// (0x0007ca51) list_medium_line_x4_t4_g7_t4_ParamLimits

0xa98f,	// (0x0007ca51) list_medium_line_x4_t4_g7_t4

0xa98f,	// (0x0007ca51) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa98f,	// (0x0007ca51) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafe,	// (0x00081bc0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafe,	// (0x00081bc0) list_medium_line_x4_t4_g7_t

0x1195,	// (0x00073257) list_single_dyc_row_pane_ParamLimits

0x1195,	// (0x00073257) list_single_dyc_row_pane

0x8ee4,	// (0x0007afa6) call5_gesture_pane_ParamLimits

0x8ee4,	// (0x0007afa6) call5_gesture_pane

0x8f3a,	// (0x0007affc) call5_windows_pane_ParamLimits

0x8f3a,	// (0x0007affc) call5_windows_pane

0x8fa5,	// (0x0007b067) call5_swipe_1_pane_cp_ParamLimits

0x8fa5,	// (0x0007b067) call5_swipe_1_pane_cp

0x8fb1,	// (0x0007b073) call5_swipe_2_pane_cp_ParamLimits

0x8fb1,	// (0x0007b073) call5_swipe_2_pane_cp

0x2ac6,	// (0x00074b88) call5_image_pane_cp

0x8fbd,	// (0x0007b07f) popup_call5_audio_first_window_cp_ParamLimits

0x8fbd,	// (0x0007b07f) popup_call5_audio_first_window_cp

0xd7f1,	// (0x0007f8b3) call5_swipe_1_pane_g1_cp_ParamLimits

0xd7f1,	// (0x0007f8b3) call5_swipe_1_pane_g1_cp

0xd85e,	// (0x0007f920) call5_swipe_1_pane_g2_cp

0xd80a,	// (0x0007f8cc) call5_swipe_1_pane_t1_cp_ParamLimits

0xd80a,	// (0x0007f8cc) call5_swipe_1_pane_t1_cp

0xd7f1,	// (0x0007f8b3) call5_swipe_2_pane_g1_cp_ParamLimits

0xd7f1,	// (0x0007f8b3) call5_swipe_2_pane_g1_cp

0xd866,	// (0x0007f928) call5_swipe_2_pane_g2_cp

0xd86e,	// (0x0007f930) call5_swipe_2_pane_t1_cp_ParamLimits

0xd86e,	// (0x0007f930) call5_swipe_2_pane_t1_cp

0x1855,	// (0x00073917) main_sp_fs_email_pane

0xd883,	// (0x0007f945) main_sp_fs_listscroll_pane_te

0xed9d,	// (0x00080e5f) popup_sp_fs_action_menu_pane_ParamLimits

0xed9d,	// (0x00080e5f) popup_sp_fs_action_menu_pane

0x2cb3,	// (0x00074d75) bg_sp_fs_ctrlbar_pane_g1

0xd88c,	// (0x0007f94e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd895,	// (0x0007f957) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd89e,	// (0x0007f960) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2cb3,	// (0x00074d75) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbec,	// (0x00081cae) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbda9,	// (0x0007de6b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbda9,	// (0x0007de6b) bg_sp_fs_ctrlbar_ddmenu_pane

0xd8a7,	// (0x0007f969) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd8a7,	// (0x0007f969) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd8b3,	// (0x0007f975) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd8b3,	// (0x0007f975) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbf5,	// (0x00081cb7) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbf5,	// (0x00081cb7) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd8bf,	// (0x0007f981) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd8bf,	// (0x0007f981) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2cb3,	// (0x00074d75) list_medium_line_t2_right_icon_g1

0x42c5,	// (0x00076387) list_medium_line_t2_right_icon_t1

0x42c5,	// (0x00076387) list_medium_line_t2_right_icon_t2

0x0001,

0xfbfa,	// (0x00081cbc) list_medium_line_t2_right_icon_t

0xa9a3,	// (0x0007ca65) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa9a3,	// (0x0007ca65) bg_sp_fs_ctrlbar_pane

0x9013,	// (0x0007b0d5) main_sp_fs_ctrlbar_button_pane_cp01

0x901d,	// (0x0007b0df) main_sp_fs_ctrlbar_ddmenu_pane

0xd911,	// (0x0007f9d3) main_sp_fs_ctrlbar_pane_g1

0xd91d,	// (0x0007f9df) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbff,	// (0x00081cc1) main_sp_fs_ctrlbar_pane_g

0x905b,	// (0x0007b11d) main_sp_fs_ctrlbar_pane_t1

0x909a,	// (0x0007b15c) main_sp_fs_ctrlbar_pane

0x90be,	// (0x0007b180) main_sp_fs_listscroll_pane_te_cp01

0x122c,	// (0x000732ee) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x122c,	// (0x000732ee) popup_sp_fs_action_menu_pane_cp01

0x1855,	// (0x00073917) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1855,	// (0x00073917) bg_sp_fs_highlight_list_pane_cp01

0xd944,	// (0x0007fa06) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd944,	// (0x0007fa06) sp_fs_action_menu_list_gene_pane_g1

0xd953,	// (0x0007fa15) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd953,	// (0x0007fa15) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc0d,	// (0x00081ccf) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc0d,	// (0x00081ccf) sp_fs_action_menu_list_gene_pane_g

0xd960,	// (0x0007fa22) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd960,	// (0x0007fa22) sp_fs_action_menu_list_gene_pane_t1

0xd978,	// (0x0007fa3a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd978,	// (0x0007fa3a) sp_fs_action_menu_list_gene_pane

0xd999,	// (0x0007fa5b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd999,	// (0x0007fa5b) popup_sp_fs_action_menu_bg_pane

0xd9a7,	// (0x0007fa69) sp_fs_action_menu_list_pane_ParamLimits

0xd9a7,	// (0x0007fa69) sp_fs_action_menu_list_pane

0xd9c9,	// (0x0007fa8b) sp_fs_scroll_pane_cp01_ParamLimits

0xd9c9,	// (0x0007fa8b) sp_fs_scroll_pane_cp01

0x42c5,	// (0x00076387) list_medium_line_plain_t2_t1

0x42c5,	// (0x00076387) list_medium_line_plain_t2_t2

0x0001,

0xfbfa,	// (0x00081cbc) list_medium_line_plain_t2_t

0x42c5,	// (0x00076387) list_medium_line_plain_t3_t1

0x42c5,	// (0x00076387) list_medium_line_plain_t3_t2

0x42c5,	// (0x00076387) list_medium_line_plain_t3_t3

0x0002,

0xf29d,	// (0x0008135f) list_medium_line_plain_t3_t

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g2_g1

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1ad,	// (0x0008126f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1ad,	// (0x0008126f) list_medium_line_x2_t2_g2_g

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t2_g2_t1

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x0008127e) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x0008127e) list_medium_line_x2_t2_g2_t

0x2002,	// (0x000740c4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t4_g2_g1

0x2002,	// (0x000740c4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1ad,	// (0x0008126f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1ad,	// (0x0008126f) list_medium_line_x2_t4_g2_g

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g2_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g2_t1

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g2_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g2_t2

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g2_t3

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f0,	// (0x000812b2) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f0,	// (0x000812b2) list_medium_line_x2_t4_g2_t

0x2cb3,	// (0x00074d75) list_medium_line_t3_right_iconx2_g1

0x2cb3,	// (0x00074d75) list_medium_line_t3_right_iconx2_g2

0x2cb3,	// (0x00074d75) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3be,	// (0x00081480) list_medium_line_t3_right_iconx2_g

0x42c5,	// (0x00076387) list_medium_line_t3_right_iconx2_t1

0x42c5,	// (0x00076387) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbfa,	// (0x00081cbc) list_medium_line_t3_right_iconx2_t

0x2002,	// (0x000740c4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x3_t4_g4_g1

0x2002,	// (0x000740c4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x3_t4_g4_g2

0x2002,	// (0x000740c4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x3_t4_g4_g3

0x2002,	// (0x000740c4) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1e7,	// (0x000812a9) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1e7,	// (0x000812a9) list_medium_line_x3_t4_g4_g

0x2b2f,	// (0x00074bf1) list_medium_line_x3_t4_g4_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x3_t4_g4_t1

0x2b2f,	// (0x00074bf1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x3_t4_g4_t2

0x2b2f,	// (0x00074bf1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x3_t4_g4_t3

0x2b2f,	// (0x00074bf1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f0,	// (0x000812b2) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f0,	// (0x000812b2) list_medium_line_x3_t4_g4_t

0x1251,	// (0x00073313) list_single_dyc_row_text_pane_t1_ParamLimits

0x1251,	// (0x00073313) list_single_dyc_row_text_pane_t1

0x129a,	// (0x0007335c) list_single_dyc_row_text_pane_t2_ParamLimits

0x129a,	// (0x0007335c) list_single_dyc_row_text_pane_t2

0xd9ef,	// (0x0007fab1) list_single_dyc_row_text_pane_t3_ParamLimits

0xd9ef,	// (0x0007fab1) list_single_dyc_row_text_pane_t3

0x0005,

0xfc12,	// (0x00081cd4) list_single_dyc_row_text_pane_t_ParamLimits

0xfc12,	// (0x00081cd4) list_single_dyc_row_text_pane_t

0xda13,	// (0x0007fad5) list_single_dyc_row_pane_g1_ParamLimits

0xda13,	// (0x0007fad5) list_single_dyc_row_pane_g1

0xda1f,	// (0x0007fae1) list_single_dyc_row_pane_g2_ParamLimits

0xda1f,	// (0x0007fae1) list_single_dyc_row_pane_g2

0xda2b,	// (0x0007faed) list_single_dyc_row_pane_g3_ParamLimits

0xda2b,	// (0x0007faed) list_single_dyc_row_pane_g3

0xda37,	// (0x0007faf9) list_single_dyc_row_pane_g4_ParamLimits

0xda37,	// (0x0007faf9) list_single_dyc_row_pane_g4

0x0003,

0xfc1f,	// (0x00081ce1) list_single_dyc_row_pane_g_ParamLimits

0xfc1f,	// (0x00081ce1) list_single_dyc_row_pane_g

0xda43,	// (0x0007fb05) list_single_dyc_row_text_pane_ParamLimits

0xda43,	// (0x0007fb05) list_single_dyc_row_text_pane

0x162a,	// (0x000736ec) bg_sp_fs_scroll_pane

0xda62,	// (0x0007fb24) thumb_sp_fs_scroll_pane

0x2002,	// (0x000740c4) list_medium_line_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_g1

0x2b2f,	// (0x00074bf1) list_medium_line_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t1

0x2002,	// (0x000740c4) list_medium_line_x2_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_g1

0x2002,	// (0x000740c4) list_medium_line_x2_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_g2

0x0001,

0xf1ad,	// (0x0008126f) list_medium_line_x2_g_ParamLimits

0xf1ad,	// (0x0008126f) list_medium_line_x2_g

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t1

0x2002,	// (0x000740c4) list_medium_line_x3_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x3_g1

0xda6b,	// (0x0007fb2d) list_medium_line_x3_g2_ParamLimits

0xda6b,	// (0x0007fb2d) list_medium_line_x3_g2

0x0001,

0xfc28,	// (0x00081cea) list_medium_line_x3_g_ParamLimits

0xfc28,	// (0x00081cea) list_medium_line_x3_g

0xda79,	// (0x0007fb3b) list_medium_line_x3_t1_ParamLimits

0xda79,	// (0x0007fb3b) list_medium_line_x3_t1

0xda8d,	// (0x0007fb4f) thumb_sp_fs_scroll_pane_g1

0xda96,	// (0x0007fb58) thumb_sp_fs_scroll_pane_g2

0xda9f,	// (0x0007fb61) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc2d,	// (0x00081cef) thumb_sp_fs_scroll_pane_g

0xda8d,	// (0x0007fb4f) bg_sp_fs_scroll_pane_g1

0xda96,	// (0x0007fb58) bg_sp_fs_scroll_pane_g2

0xda9f,	// (0x0007fb61) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc2d,	// (0x00081cef) bg_sp_fs_scroll_pane_g

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g4_g1

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g4_g2

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g4_g3

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1e7,	// (0x000812a9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1e7,	// (0x000812a9) list_medium_line_x2_t3_g4_g

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g4_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g4_t1

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g4_t2

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x000812a2) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x000812a2) list_medium_line_x2_t3_g4_t

0x2002,	// (0x000740c4) list_medium_line_g2_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_g2_g1

0x2002,	// (0x000740c4) list_medium_line_g2_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_g2_g2

0x0001,

0xf1ad,	// (0x0008126f) list_medium_line_g2_g_ParamLimits

0xf1ad,	// (0x0008126f) list_medium_line_g2_g

0x2b2f,	// (0x00074bf1) list_medium_line_g2_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_g2_t1

0x2002,	// (0x000740c4) list_medium_line_t3_g2_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t3_g2_g1

0x2002,	// (0x000740c4) list_medium_line_t3_g2_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t3_g2_g2

0x0001,

0xf1ad,	// (0x0008126f) list_medium_line_t3_g2_g_ParamLimits

0xf1ad,	// (0x0008126f) list_medium_line_t3_g2_g

0x2b2f,	// (0x00074bf1) list_medium_line_t3_g2_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t3_g2_t1

0x2b2f,	// (0x00074bf1) list_medium_line_t3_g2_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t3_g2_t2

0x2b2f,	// (0x00074bf1) list_medium_line_t3_g2_t3_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x000812a2) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x000812a2) list_medium_line_t3_g2_t

0x2cb3,	// (0x00074d75) list_medium_line_right_icon_g1

0x42c5,	// (0x00076387) list_medium_line_right_icon_t1

0x2002,	// (0x000740c4) list_medium_line_t2_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t2_g1

0x2b2f,	// (0x00074bf1) list_medium_line_t2_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t2_t1

0x2b2f,	// (0x00074bf1) list_medium_line_t2_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x0008127e) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x0008127e) list_medium_line_t2_t

0x2002,	// (0x000740c4) list_medium_line_t3_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t3_g1

0x2b2f,	// (0x00074bf1) list_medium_line_t3_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t3_t1

0x2b2f,	// (0x00074bf1) list_medium_line_t3_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t3_t2

0x2b2f,	// (0x00074bf1) list_medium_line_t3_t3_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x000812a2) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x000812a2) list_medium_line_t3_t

0x2002,	// (0x000740c4) list_medium_line_g3_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_g3_g1

0x2002,	// (0x000740c4) list_medium_line_g3_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_g3_g2

0x2002,	// (0x000740c4) list_medium_line_g3_g3_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x0008129b) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x0008129b) list_medium_line_g3_g

0x2b2f,	// (0x00074bf1) list_medium_line_g3_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_g3_t1

0x2002,	// (0x000740c4) list_medium_line_t2_g3_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t2_g3_g1

0x2002,	// (0x000740c4) list_medium_line_t2_g3_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t2_g3_g2

0x2002,	// (0x000740c4) list_medium_line_t2_g3_g3_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x0008129b) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x0008129b) list_medium_line_t2_g3_g

0x2b2f,	// (0x00074bf1) list_medium_line_t2_g3_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t2_g3_t1

0x2b2f,	// (0x00074bf1) list_medium_line_t2_g3_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x0008127e) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x0008127e) list_medium_line_t2_g3_t

0x2002,	// (0x000740c4) list_medium_line_t3_g3_g1_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t3_g3_g1

0x2002,	// (0x000740c4) list_medium_line_t3_g3_g2_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t3_g3_g2

0x2002,	// (0x000740c4) list_medium_line_t3_g3_g3_ParamLimits

0x2002,	// (0x000740c4) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x0008129b) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x0008129b) list_medium_line_t3_g3_g

0x2b2f,	// (0x00074bf1) list_medium_line_t3_g3_t1_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t3_g3_t1

0x2b2f,	// (0x00074bf1) list_medium_line_t3_g3_t2_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t3_g3_t2

0x2b2f,	// (0x00074bf1) list_medium_line_t3_g3_t3_ParamLimits

0x2b2f,	// (0x00074bf1) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x000812a2) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x000812a2) list_medium_line_t3_g3_t

0x2cb3,	// (0x00074d75) list_medium_line_right_iconx2_g1

0x2cb3,	// (0x00074d75) list_medium_line_right_iconx2_g2

0x0001,

0xf3b9,	// (0x0008147b) list_medium_line_right_iconx2_g

0x42c5,	// (0x00076387) list_medium_line_right_iconx2_t1

0x2cb3,	// (0x00074d75) list_medium_line_t2_right_iconx2_g1

0x2cb3,	// (0x00074d75) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3b9,	// (0x0008147b) list_medium_line_t2_right_iconx2_g

0x42c5,	// (0x00076387) list_medium_line_t2_right_iconx2_t1

0x42c5,	// (0x00076387) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbfa,	// (0x00081cbc) list_medium_line_t2_right_iconx2_t

0x42c5,	// (0x00076387) list_medium_line_x4_t4_t1

0x42c5,	// (0x00076387) list_medium_line_x4_t4_t2

0x42c5,	// (0x00076387) list_medium_line_x4_t4_t3

0x42c5,	// (0x00076387) list_medium_line_x4_t4_t4

0x0003,

0xf2a4,	// (0x00081366) list_medium_line_x4_t4_t

0x9121,	// (0x0007b1e3) tport_appsw_pane_ParamLimits

0x9121,	// (0x0007b1e3) tport_appsw_pane

0x9139,	// (0x0007b1fb) tport_contact_pane_ParamLimits

0x9139,	// (0x0007b1fb) tport_contact_pane

0x9151,	// (0x0007b213) tport_listscroll_pane_ParamLimits

0x9151,	// (0x0007b213) tport_listscroll_pane

0x916b,	// (0x0007b22d) cell_tport_appsw_pane_ParamLimits

0x916b,	// (0x0007b22d) cell_tport_appsw_pane

0x4b23,	// (0x00076be5) tport_appsw_pane_g1_ParamLimits

0x4b23,	// (0x00076be5) tport_appsw_pane_g1

0xdaa8,	// (0x0007fb6a) tport_contact_pane_g1

0xd343,	// (0x0007f405) tport_contact_pane_t1

0xdab1,	// (0x0007fb73) tport_contact_pane_t2

0x0001,

0xfc34,	// (0x00081cf6) tport_contact_pane_t

0xdabf,	// (0x0007fb81) list_tport_pane

0xdac8,	// (0x0007fb8a) scroll_pane_cp_030

0x91b3,	// (0x0007b275) cell_tport_appsw_pane_g1

0x91c3,	// (0x0007b285) cell_tport_appsw_pane_t1

0x91d1,	// (0x0007b293) grid_highlight_pane_cp019

0x91d9,	// (0x0007b29b) list_tport_double_graphic_pane_ParamLimits

0x91d9,	// (0x0007b29b) list_tport_double_graphic_pane

0x1855,	// (0x00073917) list_highlight_pane_cp023_ParamLimits

0x1855,	// (0x00073917) list_highlight_pane_cp023

0x91e6,	// (0x0007b2a8) list_tport_double_graphic_pane_g1_ParamLimits

0x91e6,	// (0x0007b2a8) list_tport_double_graphic_pane_g1

0x91f3,	// (0x0007b2b5) list_tport_double_graphic_pane_t1_ParamLimits

0x91f3,	// (0x0007b2b5) list_tport_double_graphic_pane_t1

0x9208,	// (0x0007b2ca) list_tport_double_graphic_pane_t2_ParamLimits

0x9208,	// (0x0007b2ca) list_tport_double_graphic_pane_t2

0x0001,

0xfc40,	// (0x00081d02) list_tport_double_graphic_pane_t_ParamLimits

0xfc40,	// (0x00081d02) list_tport_double_graphic_pane_t

0x162a,	// (0x000736ec) main_cale_note_pane

0x7490,	// (0x00079552) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7490,	// (0x00079552) cell_vitu2_function_top_wide_pane_cp01

0x8bd4,	// (0x0007ac96) wait_bar_pane_cp05_ParamLimits

0x1855,	// (0x00073917) listscroll_cmail_pane

0xdad1,	// (0x0007fb93) list_cmail_pane

0x921a,	// (0x0007b2dc) list_cmail_body_pane

0x922f,	// (0x0007b2f1) list_single_cmail_header_caption_pane

0x9245,	// (0x0007b307) list_single_cmail_header_detail_pane_ParamLimits

0x9245,	// (0x0007b307) list_single_cmail_header_detail_pane

0xdae1,	// (0x0007fba3) list_single_cmail_header_caption_pane_t1

0x13cf,	// (0x00073491) list_single_cmail_header_detail_pane_g1_ParamLimits

0x13cf,	// (0x00073491) list_single_cmail_header_detail_pane_g1

0xede1,	// (0x00080ea3) list_single_cmail_header_detail_pane_g2_ParamLimits

0xede1,	// (0x00080ea3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc45,	// (0x00081d07) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc45,	// (0x00081d07) list_single_cmail_header_detail_pane_g

0xdb05,	// (0x0007fbc7) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdb05,	// (0x0007fbc7) list_single_cmail_header_detail_pane_t1

0xdb65,	// (0x0007fc27) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdb65,	// (0x0007fc27) list_single_cmail_header_editor_pane_bg

0xd4a0,	// (0x0007f562) list_cmail_body_pane_g1

0xdb7c,	// (0x0007fc3e) list_cmail_body_pane_t1

0xc9ff,	// (0x0007eac1) list_single_cmail_header_editor_pane_bg_g1

0x3385,	// (0x00075447) list_single_cmail_header_editor_pane_bg_g1_copy1

0xca0f,	// (0x0007ead1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xca07,	// (0x0007eac9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcc51,	// (0x0007ed13) list_single_cmail_header_editor_pane_bg_g1_copy4

0xca2f,	// (0x0007eaf1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xca1f,	// (0x0007eae1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xca27,	// (0x0007eae9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3365,	// (0x00075427) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x926e,	// (0x0007b330) calenote_gesture_pane_ParamLimits

0x926e,	// (0x0007b330) calenote_gesture_pane

0x928e,	// (0x0007b350) calenote_window_pane_ParamLimits

0x928e,	// (0x0007b350) calenote_window_pane

0xdb8a,	// (0x0007fc4c) popup_note_window_cp01

0x92aa,	// (0x0007b36c) calenote_swipe_1_pane_ParamLimits

0x92aa,	// (0x0007b36c) calenote_swipe_1_pane

0x8fb1,	// (0x0007b073) calenote_swipe_2_pane_ParamLimits

0x8fb1,	// (0x0007b073) calenote_swipe_2_pane

0xd7f1,	// (0x0007f8b3) calenote_swipe_1_pane_g1_ParamLimits

0xd7f1,	// (0x0007f8b3) calenote_swipe_1_pane_g1

0xd7fe,	// (0x0007f8c0) calenote_swipe_1_pane_g2_ParamLimits

0xd7fe,	// (0x0007f8c0) calenote_swipe_1_pane_g2

0x0001,

0xfbe2,	// (0x00081ca4) calenote_swipe_1_pane_g_ParamLimits

0xfbe2,	// (0x00081ca4) calenote_swipe_1_pane_g

0xdb9c,	// (0x0007fc5e) calenote_swipe_1_pane_t1_ParamLimits

0xdb9c,	// (0x0007fc5e) calenote_swipe_1_pane_t1

0xd7f1,	// (0x0007f8b3) calenote_swipe_2_pane_g1_ParamLimits

0xd7f1,	// (0x0007f8b3) calenote_swipe_2_pane_g1

0xdbbb,	// (0x0007fc7d) calenote_swipe_2_pane_g2_ParamLimits

0xdbbb,	// (0x0007fc7d) calenote_swipe_2_pane_g2

0x0001,

0xfc51,	// (0x00081d13) calenote_swipe_2_pane_g_ParamLimits

0xfc51,	// (0x00081d13) calenote_swipe_2_pane_g

0xdbc7,	// (0x0007fc89) calenote_swipe_2_pane_t1_ParamLimits

0xdbc7,	// (0x0007fc89) calenote_swipe_2_pane_t1

0x162a,	// (0x000736ec) main_mup_navstr_pane

0x632d,	// (0x000783ef) main_mup3_pane_t7_ParamLimits

0x632d,	// (0x000783ef) main_mup3_pane_t7

0xe9aa,	// (0x00080a6c) main_mp4_pane_g6_ParamLimits

0xe9aa,	// (0x00080a6c) main_mp4_pane_g6

0xeb6c,	// (0x00080c2e) main_image3_pane_t4_ParamLimits

0xeb6c,	// (0x00080c2e) main_image3_pane_t4

0x92bf,	// (0x0007b381) popup_navstr_preview_pane_ParamLimits

0x92bf,	// (0x0007b381) popup_navstr_preview_pane

0x92d3,	// (0x0007b395) scroll_navstr_pane_ParamLimits

0x92d3,	// (0x0007b395) scroll_navstr_pane

0x162a,	// (0x000736ec) bg_popup_preview_window_pane_cp04

0xdbee,	// (0x0007fcb0) popup_navstr_preview_pane_t1

0x92e7,	// (0x0007b3a9) scroll_navstr_pane_g1_ParamLimits

0x92e7,	// (0x0007b3a9) scroll_navstr_pane_g1

0x92fb,	// (0x0007b3bd) scroll_navstr_pane_t1_ParamLimits

0x92fb,	// (0x0007b3bd) scroll_navstr_pane_t1

0xdb93,	// (0x0007fc55) bg_button_pane_cp014

0xdb93,	// (0x0007fc55) bg_button_pane_cp030

0x11d2,	// (0x00073294) list_double_fisheye_pane_g4_ParamLimits

0x11d2,	// (0x00073294) list_double_fisheye_pane_g4

0x11de,	// (0x000732a0) list_double_fisheye_pane_g5_ParamLimits

0x11de,	// (0x000732a0) list_double_fisheye_pane_g5

0x42b9,	// (0x0007637b) sp_fs_scroll_pane_cp03

0xd911,	// (0x0007f9d3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd91d,	// (0x0007f9df) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbff,	// (0x00081cc1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x905b,	// (0x0007b11d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdad9,	// (0x0007fb9b) sp_fs_scroll_pane_cp02

0x24b7,	// (0x00074579) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x24b7,	// (0x00074579) popup_sp_fs_calendar_preview_list_single_pane

0x162a,	// (0x000736ec) main_cam6_pano_pane

0x1855,	// (0x00073917) main_mup3_pane_ParamLimits

0x162a,	// (0x000736ec) main_phacti_pane

0x8aa7,	// (0x0007ab69) bg_button_pane_cp11

0x8ac1,	// (0x0007ab83) main_mobtv_info_pane_g2_ParamLimits

0x8ac1,	// (0x0007ab83) main_mobtv_info_pane_g2

0x0001,

0xfb5f,	// (0x00081c21) main_mobtv_info_pane_g_ParamLimits

0xfb5f,	// (0x00081c21) main_mobtv_info_pane_g

0x8c9e,	// (0x0007ad60) sc_clock_pane_t5_ParamLimits

0x8c9e,	// (0x0007ad60) sc_clock_pane_t5

0x8d66,	// (0x0007ae28) main_radioblah_pane_g1_ParamLimits

0xd73d,	// (0x0007f7ff) main_radioblah_pane_t3_ParamLimits

0xd73d,	// (0x0007f7ff) main_radioblah_pane_t3

0xd755,	// (0x0007f817) main_radioblah_pane_t4_ParamLimits

0xd755,	// (0x0007f817) main_radioblah_pane_t4

0x8d8e,	// (0x0007ae50) main_radioblah_text_pane_ParamLimits

0x8d8e,	// (0x0007ae50) main_radioblah_text_pane

0x8da0,	// (0x0007ae62) main_radioblah_info_pane_g1_ParamLimits

0x8e39,	// (0x0007aefb) main_radioblah_info_pane_t4_ParamLimits

0x8e39,	// (0x0007aefb) main_radioblah_info_pane_t4

0x1855,	// (0x00073917) main_sp_fs_calendar_pane

0x9312,	// (0x0007b3d4) main_phacti_pane_g1

0x931a,	// (0x0007b3dc) phacti_note_pane_ParamLimits

0x931a,	// (0x0007b3dc) phacti_note_pane

0xdc05,	// (0x0007fcc7) phacti_term_pane_ParamLimits

0xdc05,	// (0x0007fcc7) phacti_term_pane

0xdc1a,	// (0x0007fcdc) phacti_note_pane_t1_ParamLimits

0xdc1a,	// (0x0007fcdc) phacti_note_pane_t1

0xdc31,	// (0x0007fcf3) phacti_term_pane_g1

0xdc39,	// (0x0007fcfb) phacti_term_pane_t1_ParamLimits

0xdc39,	// (0x0007fcfb) phacti_term_pane_t1

0xdc63,	// (0x0007fd25) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2aa5,	// (0x00074b67) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5b,	// (0x00081d1d) popup_sp_fs_calendar_preview_list_single_pane_g

0xdc6b,	// (0x0007fd2d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdc6b,	// (0x0007fd2d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdc81,	// (0x0007fd43) aid_popup_sp_fs_bg_corner_pane

0x2cb3,	// (0x00074d75) popup_sp_fs_calendar_preview_bg_pane_g1

0x162a,	// (0x000736ec) popup_sp_fs_calendar_preview_bg_pane

0xdc89,	// (0x0007fd4b) popup_sp_fs_calendar_preview_list_pane

0xa9a3,	// (0x0007ca65) bg_main_sp_fs_cale_pane_ParamLimits

0xa9a3,	// (0x0007ca65) bg_main_sp_fs_cale_pane

0xdc9a,	// (0x0007fd5c) listscroll_cale_mrui_pane_ParamLimits

0xdc9a,	// (0x0007fd5c) listscroll_cale_mrui_pane

0xdcaf,	// (0x0007fd71) listscroll_sp_fs_schedule_track_pane

0xdcb8,	// (0x0007fd7a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdcb8,	// (0x0007fd7a) main_sp_fs_ctrlbar_pane_cp01

0xdccb,	// (0x0007fd8d) main_sp_fs_ribbon_pane

0xdcd3,	// (0x0007fd95) popup_sp_fs_cale_preview_window

0x938f,	// (0x0007b451) list_single_sp_fs_schedule_track_pane_ParamLimits

0x938f,	// (0x0007b451) list_single_sp_fs_schedule_track_pane

0x1855,	// (0x00073917) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1855,	// (0x00073917) bg_sp_fs_highlight_list_pane_cp03

0x93a2,	// (0x0007b464) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x93a2,	// (0x0007b464) list_single_sp_fs_schedule_track_pane_g1

0x93ae,	// (0x0007b470) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x93ae,	// (0x0007b470) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc60,	// (0x00081d22) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc60,	// (0x00081d22) list_single_sp_fs_schedule_track_pane_g

0x93ba,	// (0x0007b47c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x93ba,	// (0x0007b47c) list_single_sp_fs_schedule_track_pane_t1

0x93d4,	// (0x0007b496) sp_fs_schedule_track_pane_ParamLimits

0x93d4,	// (0x0007b496) sp_fs_schedule_track_pane

0xdce5,	// (0x0007fda7) sp_fs_schedule_track_pane_g1

0xdced,	// (0x0007fdaf) sp_fs_schedule_track_pane_g2

0xdcf5,	// (0x0007fdb7) sp_fs_schedule_track_pane_g3

0xdcfd,	// (0x0007fdbf) sp_fs_schedule_track_pane_g4

0xdd05,	// (0x0007fdc7) sp_fs_schedule_track_pane_g5

0x0004,

0xfc65,	// (0x00081d27) sp_fs_schedule_track_pane_g

0xc9ff,	// (0x0007eac1) bg_sp_fs_schedule_viewer_highlight_g1

0x3385,	// (0x00075447) bg_sp_fs_schedule_viewer_highlight_g2

0xca07,	// (0x0007eac9) bg_sp_fs_schedule_viewer_highlight_g3

0xca0f,	// (0x0007ead1) bg_sp_fs_schedule_viewer_highlight_g4

0xcc51,	// (0x0007ed13) bg_sp_fs_schedule_viewer_highlight_g5

0xca1f,	// (0x0007eae1) bg_sp_fs_schedule_viewer_highlight_g6

0xca27,	// (0x0007eae9) bg_sp_fs_schedule_viewer_highlight_g7

0xca2f,	// (0x0007eaf1) bg_sp_fs_schedule_viewer_highlight_g8

0x3365,	// (0x00075427) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc70,	// (0x00081d32) bg_sp_fs_schedule_viewer_highlight_g

0x162a,	// (0x000736ec) bg_main_sp_fs_ribbon_pane

0x93e5,	// (0x0007b4a7) main_sp_fs_ribbon_pane_g1

0xdd0d,	// (0x0007fdcf) main_sp_fs_ribbon_pane_t1

0x93ee,	// (0x0007b4b0) main_sp_fs_ribbon_pane_t2

0xdd1c,	// (0x0007fdde) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc83,	// (0x00081d45) main_sp_fs_ribbon_pane_t

0xdd2b,	// (0x0007fded) main_sp_fs_ribbon_scheduler_pane

0xdd33,	// (0x0007fdf5) bg_main_sp_fs_ribbon_pane_g1

0xdd3c,	// (0x0007fdfe) bg_main_sp_fs_ribbon_pane_g2

0xdd45,	// (0x0007fe07) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc8a,	// (0x00081d4c) bg_main_sp_fs_ribbon_pane_g

0xdd4d,	// (0x0007fe0f) main_sp_fs_ribbon_scheduler_pane_g1

0xdd56,	// (0x0007fe18) main_sp_fs_ribbon_scheduler_pane_g2

0xdd5f,	// (0x0007fe21) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc91,	// (0x00081d53) main_sp_fs_ribbon_scheduler_pane_g

0xdd68,	// (0x0007fe2a) list_cale_mrui_pane

0x93fd,	// (0x0007b4bf) sp_fs_scroll_pane_cp07_ParamLimits

0x93fd,	// (0x0007b4bf) sp_fs_scroll_pane_cp07

0x9419,	// (0x0007b4db) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9419,	// (0x0007b4db) bg_sp_fs_schedule_viewer_highlight

0xdd75,	// (0x0007fe37) list_single_sp_fs_schedule_track_pane_cp01

0xdd7d,	// (0x0007fe3f) list_sp_fs_schedule_track_pane

0xdd85,	// (0x0007fe47) sp_fs_scroll_pane_cp06_ParamLimits

0xdd85,	// (0x0007fe47) sp_fs_scroll_pane_cp06

0x2cb3,	// (0x00074d75) bgmain_sp_fs_calendar_pane_g1

0x13e7,	// (0x000734a9) list_single_cale_mrui_pane_ParamLimits

0x13e7,	// (0x000734a9) list_single_cale_mrui_pane

0xdd97,	// (0x0007fe59) list_single_cale_mrui_row_pane_ParamLimits

0xdd97,	// (0x0007fe59) list_single_cale_mrui_row_pane

0xdda4,	// (0x0007fe66) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdda4,	// (0x0007fe66) list_single_cale_mrui_row_pane_g1

0xdde9,	// (0x0007feab) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdde9,	// (0x0007feab) list_single_cale_mrui_row_pane_t1

0x1407,	// (0x000734c9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1407,	// (0x000734c9) list_single_cale_mrui_row_pane_t2

0xddfb,	// (0x0007febd) list_single_cale_mrui_row_pane_t3_ParamLimits

0xddfb,	// (0x0007febd) list_single_cale_mrui_row_pane_t3

0xde2a,	// (0x0007feec) list_single_cale_mrui_row_pane_t4_ParamLimits

0xde2a,	// (0x0007feec) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc9f,	// (0x00081d61) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc9f,	// (0x00081d61) list_single_cale_mrui_row_pane_t

0x146f,	// (0x00073531) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x146f,	// (0x00073531) list_single_cmail_header_editor_pane_bg_cp01

0x1495,	// (0x00073557) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1495,	// (0x00073557) list_single_cmail_header_editor_pane_bg_cp02

0x9429,	// (0x0007b4eb) main_radioblah_text_pane_t1_ParamLimits

0x9429,	// (0x0007b4eb) main_radioblah_text_pane_t1

0xde59,	// (0x0007ff1b) cam6_indi_pane_cp01

0xde61,	// (0x0007ff23) cam6_mode_pane_cp01

0xde69,	// (0x0007ff2b) cam6_pano_pane

0xde72,	// (0x0007ff34) cam6_zoom_pane_cp01

0xde7a,	// (0x0007ff3c) cam6_pano_image_pane

0xde85,	// (0x0007ff47) cam6_pano_pane_g1

0xd4a0,	// (0x0007f562) cam6_pano_pane_g2

0xde8e,	// (0x0007ff50) cam6_pano_pane_g3

0xde97,	// (0x0007ff59) cam6_pano_pane_g4

0xc69e,	// (0x0007e760) cam6_pano_pane_g5

0xdea0,	// (0x0007ff62) cam6_pano_pane_g6

0xdeaa,	// (0x0007ff6c) cam6_pano_pane_g7

0xdeb2,	// (0x0007ff74) cam6_pano_pane_g8

0xdebb,	// (0x0007ff7d) cam6_pano_pane_g9

0x0008,

0xfca8,	// (0x00081d6a) cam6_pano_pane_g

0x162a,	// (0x000736ec) main_browser_tag_pane

0xdbe6,	// (0x0007fca8) grid_navstr_albumart_pane

0xdec6,	// (0x0007ff88) cell_navstr_albumart_pane_ParamLimits

0xdec6,	// (0x0007ff88) cell_navstr_albumart_pane

0xdee6,	// (0x0007ffa8) cell_navstr_albumart_pane_g1

0xbade,	// (0x0007dba0) cell_navstr_albumart_pane_g2

0xbaee,	// (0x0007dbb0) cell_navstr_albumart_pane_g3

0xbae6,	// (0x0007dba8) cell_navstr_albumart_pane_g4

0x0003,

0xfcbb,	// (0x00081d7d) cell_navstr_albumart_pane_g

0x9443,	// (0x0007b505) bt_list_pane_ParamLimits

0x9443,	// (0x0007b505) bt_list_pane

0x9457,	// (0x0007b519) bt_list_pane_t1

0x9466,	// (0x0007b528) bt_list_pane_t2

0x0001,

0xfcc4,	// (0x00081d86) bt_list_pane_t

0x162a,	// (0x000736ec) main_cale_prevew_pane

0x9475,	// (0x0007b537) popup_cale_preview_window_ParamLimits

0x9475,	// (0x0007b537) popup_cale_preview_window

0x1855,	// (0x00073917) bg_popup_preview_window_pane_cp05_ParamLimits

0x1855,	// (0x00073917) bg_popup_preview_window_pane_cp05

0xdeee,	// (0x0007ffb0) list_cale_preview_pane_ParamLimits

0xdeee,	// (0x0007ffb0) list_cale_preview_pane

0x9490,	// (0x0007b552) list_double_cale_preview_pane_ParamLimits

0x9490,	// (0x0007b552) list_double_cale_preview_pane

0x94a2,	// (0x0007b564) list_single_cale_preview_pane_ParamLimits

0x94a2,	// (0x0007b564) list_single_cale_preview_pane

0x94b8,	// (0x0007b57a) list_single_cale_preview_pane_g1

0x94c0,	// (0x0007b582) list_single_cale_preview_pane_t1_ParamLimits

0x94c0,	// (0x0007b582) list_single_cale_preview_pane_t1

0x94d5,	// (0x0007b597) list_double_cale_preview_pane_g1

0x94dd,	// (0x0007b59f) list_double_cale_preview_pane_t1_ParamLimits

0x94dd,	// (0x0007b59f) list_double_cale_preview_pane_t1

0x94f2,	// (0x0007b5b4) list_double_cale_preview_pane_t2_ParamLimits

0x94f2,	// (0x0007b5b4) list_double_cale_preview_pane_t2

0x0001,

0xfcc9,	// (0x00081d8b) list_double_cale_preview_pane_t_ParamLimits

0xfcc9,	// (0x00081d8b) list_double_cale_preview_pane_t

0x162a,	// (0x000736ec) main_ezdial_pane

0x1855,	// (0x00073917) main_sp_fs_email_pane_ParamLimits

0x8fcb,	// (0x0007b08d) cmail_ddmenu_btn01_pane_ParamLimits

0x8fcb,	// (0x0007b08d) cmail_ddmenu_btn01_pane

0x8fde,	// (0x0007b0a0) cmail_ddmenu_btn02_pane_ParamLimits

0x8fde,	// (0x0007b0a0) cmail_ddmenu_btn02_pane

0x9001,	// (0x0007b0c3) cmail_ddmenu_btn03_pane_ParamLimits

0x9001,	// (0x0007b0c3) cmail_ddmenu_btn03_pane

0x909a,	// (0x0007b15c) main_sp_fs_ctrlbar_pane_ParamLimits

0x90be,	// (0x0007b180) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x921a,	// (0x0007b2dc) list_cmail_body_pane_ParamLimits

0xdaef,	// (0x0007fbb1) bg_button_pane_cp12

0xdaf8,	// (0x0007fbba) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdaf8,	// (0x0007fbba) list_single_cmail_header_detail_pane_g3

0xdb41,	// (0x0007fc03) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdb41,	// (0x0007fc03) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc4c,	// (0x00081d0e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc4c,	// (0x00081d0e) list_single_cmail_header_detail_pane_t

0xdc4e,	// (0x0007fd10) phacti_term_pane_t2_ParamLimits

0xdc4e,	// (0x0007fd10) phacti_term_pane_t2

0x0001,

0xfc56,	// (0x00081d18) phacti_term_pane_t_ParamLimits

0xfc56,	// (0x00081d18) phacti_term_pane_t

0xdefa,	// (0x0007ffbc) aid_size_list_single_double

0x950a,	// (0x0007b5cc) popup_ezdial_listscroll_window

0x9526,	// (0x0007b5e8) popup_number_entry_window_cp01

0x2ac6,	// (0x00074b88) bg_popup_call_pane_cp09

0xdf06,	// (0x0007ffc8) ezdial_list_pane

0xdf0e,	// (0x0007ffd0) scroll_pane_cp23

0xa9a3,	// (0x0007ca65) bg_button_pane_cp028_ParamLimits

0xa9a3,	// (0x0007ca65) bg_button_pane_cp028

0x9534,	// (0x0007b5f6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9534,	// (0x0007b5f6) cmail_ddmenu_btn01_pane_g1

0x9540,	// (0x0007b602) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9540,	// (0x0007b602) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcce,	// (0x00081d90) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcce,	// (0x00081d90) cmail_ddmenu_btn01_pane_g

0xdf16,	// (0x0007ffd8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xdf16,	// (0x0007ffd8) cmail_ddmenu_btn01_pane_t1

0xa9a3,	// (0x0007ca65) bg_button_pane_cp029_ParamLimits

0xa9a3,	// (0x0007ca65) bg_button_pane_cp029

0x9554,	// (0x0007b616) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9554,	// (0x0007b616) cmail_ddmenu_btn02_pane_g1

0x956c,	// (0x0007b62e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x956c,	// (0x0007b62e) cmail_ddmenu_btn02_pane_t1

0x1855,	// (0x00073917) bg_button_pane_cp031_ParamLimits

0x1855,	// (0x00073917) bg_button_pane_cp031

0x9554,	// (0x0007b616) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9554,	// (0x0007b616) cmail_ddmenu_btn03_pane_g1

0x956c,	// (0x0007b62e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x956c,	// (0x0007b62e) cmail_ddmenu_btn03_pane_t1

0x6c88,	// (0x00078d4a) cell_dialer2_keypad_pane_t1_ParamLimits

0x6ca2,	// (0x00078d64) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6ca2,	// (0x00078d64) cell_dialer2_keypad_pane_t1_copy1

0x88ca,	// (0x0007a98c) ncimui_group_button_pane

0x1855,	// (0x00073917) main_sp_fs_calendar_pane_ParamLimits

0x922f,	// (0x0007b2f1) list_single_cmail_header_caption_pane_ParamLimits

0xdc91,	// (0x0007fd53) aid_recal_txt_sm_pane

0x162a,	// (0x000736ec) mian_recal_day_pane

0xdcd3,	// (0x0007fd95) popup_sp_fs_cale_preview_window_ParamLimits

0xdf2c,	// (0x0007ffee) list_recal_day_pane

0xdf6e,	// (0x00080030) list_single_recal_day_pane_ParamLimits

0xdf6e,	// (0x00080030) list_single_recal_day_pane

0xdf80,	// (0x00080042) list_single_recal_day_pane_g1_ParamLimits

0xdf80,	// (0x00080042) list_single_recal_day_pane_g1

0xdf8c,	// (0x0008004e) list_single_recal_day_pane_g2_ParamLimits

0xdf8c,	// (0x0008004e) list_single_recal_day_pane_g2

0xdf98,	// (0x0008005a) list_single_recal_day_pane_g3_ParamLimits

0xdf98,	// (0x0008005a) list_single_recal_day_pane_g3

0x14b5,	// (0x00073577) list_single_recal_day_pane_g4_ParamLimits

0x14b5,	// (0x00073577) list_single_recal_day_pane_g4

0xdfa4,	// (0x00080066) list_single_recal_day_pane_g5_ParamLimits

0xdfa4,	// (0x00080066) list_single_recal_day_pane_g5

0xdfb0,	// (0x00080072) list_single_recal_day_pane_g6_ParamLimits

0xdfb0,	// (0x00080072) list_single_recal_day_pane_g6

0x0004,

0xfcdd,	// (0x00081d9f) list_single_recal_day_pane_g_ParamLimits

0xfcdd,	// (0x00081d9f) list_single_recal_day_pane_g

0xdfc4,	// (0x00080086) list_single_recal_day_pane_t1

0xdfd6,	// (0x00080098) list_single_recal_day_pane_t2

0x0001,

0xfce8,	// (0x00081daa) list_single_recal_day_pane_t

0x9590,	// (0x0007b652) ncimui_query_button_pane_ParamLimits

0x9590,	// (0x0007b652) ncimui_query_button_pane

0x95a0,	// (0x0007b662) ncimui_query_button_pane_t1_ParamLimits

0x95a0,	// (0x0007b662) ncimui_query_button_pane_t1

0xdfe8,	// (0x000800aa) ncimui_query_button_pane_t2_ParamLimits

0xdfe8,	// (0x000800aa) ncimui_query_button_pane_t2

0x0001,

0xfced,	// (0x00081daf) ncimui_query_button_pane_t_ParamLimits

0xfced,	// (0x00081daf) ncimui_query_button_pane_t

0x95b3,	// (0x0007b675) query_button_pane_ParamLimits

0x95b3,	// (0x0007b675) query_button_pane

0x162a,	// (0x000736ec) bg_button_pane_cp0028

0xdffb,	// (0x000800bd) query_button_pane_t1

0x56ee,	// (0x000777b0) main_tport_pane_ParamLimits

0x90de,	// (0x0007b1a0) bg_popup_window_pane_cp01_ParamLimits

0x90de,	// (0x0007b1a0) bg_popup_window_pane_cp01

0x90f9,	// (0x0007b1bb) heading_pane_cp08_ParamLimits

0x90f9,	// (0x0007b1bb) heading_pane_cp08

0x910c,	// (0x0007b1ce) heading_pane_cp07_ParamLimits

0x910c,	// (0x0007b1ce) heading_pane_cp07

0x91b3,	// (0x0007b275) cell_tport_appsw_pane_g2

0x0002,

0xfc39,	// (0x00081cfb) cell_tport_appsw_pane_g

0x0e0e,	// (0x00072ed0) input_candi_list_open_g1

0x40e7,	// (0x000761a9) list_cale_time_pane_g6_ParamLimits

0x40e7,	// (0x000761a9) list_cale_time_pane_g6

0x5d01,	// (0x00077dc3) aid_size_touch_calib_1_ParamLimits

0x5d01,	// (0x00077dc3) aid_size_touch_calib_1

0x5d13,	// (0x00077dd5) aid_size_touch_calib_2_ParamLimits

0x5d13,	// (0x00077dd5) aid_size_touch_calib_2

0x5d2b,	// (0x00077ded) aid_size_touch_calib_3_ParamLimits

0x5d2b,	// (0x00077ded) aid_size_touch_calib_3

0x5d49,	// (0x00077e0b) aid_size_touch_calib_4_ParamLimits

0x5d49,	// (0x00077e0b) aid_size_touch_calib_4

0x5d61,	// (0x00077e23) main_touch_calib_button_group_pane_ParamLimits

0x5d61,	// (0x00077e23) main_touch_calib_button_group_pane

0x5d79,	// (0x00077e3b) main_touch_calib_pane_g1_ParamLimits

0x5d8b,	// (0x00077e4d) main_touch_calib_pane_g2_ParamLimits

0x5d9d,	// (0x00077e5f) main_touch_calib_pane_g3_ParamLimits

0x5daf,	// (0x00077e71) main_touch_calib_pane_g4_ParamLimits

0xf6ba,	// (0x0008177c) main_touch_calib_pane_g_ParamLimits

0x5dc1,	// (0x00077e83) main_touch_calib_pane_t1_ParamLimits

0x5ddb,	// (0x00077e9d) main_touch_calib_pane_t2_ParamLimits

0x5df5,	// (0x00077eb7) main_touch_calib_pane_t3_ParamLimits

0x5e09,	// (0x00077ecb) main_touch_calib_pane_t4_ParamLimits

0x5e1d,	// (0x00077edf) main_touch_calib_pane_t5_ParamLimits

0xf6c3,	// (0x00081785) main_touch_calib_pane_t_ParamLimits

0xc461,	// (0x0007e523) list_single_fp_cale_pane_g3_ParamLimits

0xc461,	// (0x0007e523) list_single_fp_cale_pane_g3

0x1855,	// (0x00073917) bg_button_pane_cp012_ParamLimits

0x1855,	// (0x00073917) bg_vkb2_func_pane_cp03_ParamLimits

0x7c4d,	// (0x00079d0f) cell_vitu2_function_top_pane_g1_ParamLimits

0x1855,	// (0x00073917) bg_vkb2_func_pane_cp04_ParamLimits

0x8855,	// (0x0007a917) main_ncimui_button_group_pane_ParamLimits

0x8855,	// (0x0007a917) main_ncimui_button_group_pane

0x88b5,	// (0x0007a977) main_ncimui_pane_t3_ParamLimits

0x88b5,	// (0x0007a977) main_ncimui_pane_t3

0xdbfc,	// (0x0007fcbe) phacti_button_group_pane

0xdefa,	// (0x0007ffbc) aid_size_list_single_double_ParamLimits

0x950a,	// (0x0007b5cc) popup_ezdial_listscroll_window_ParamLimits

0x9526,	// (0x0007b5e8) popup_number_entry_window_cp01_ParamLimits

0x95c6,	// (0x0007b688) phacti_button_pane_ParamLimits

0x95c6,	// (0x0007b688) phacti_button_pane

0x162a,	// (0x000736ec) bg_button_pane_cp14

0xe009,	// (0x000800cb) phacti_button_pane_t1

0x95d7,	// (0x0007b699) main_touch_calib_button_pane_ParamLimits

0x95d7,	// (0x0007b699) main_touch_calib_button_pane

0x21f2,	// (0x000742b4) bg_button_pane_cp18_ParamLimits

0x21f2,	// (0x000742b4) bg_button_pane_cp18

0xe017,	// (0x000800d9) main_touch_calib_button_pane_t1_ParamLimits

0xe017,	// (0x000800d9) main_touch_calib_button_pane_t1

0xe02d,	// (0x000800ef) main_touch_calib_button_pane_t2_ParamLimits

0xe02d,	// (0x000800ef) main_touch_calib_button_pane_t2

0x0001,

0xfcf2,	// (0x00081db4) main_touch_calib_button_pane_t_ParamLimits

0xfcf2,	// (0x00081db4) main_touch_calib_button_pane_t

0x162a,	// (0x000736ec) cell_ncimui_button_pane

0x162a,	// (0x000736ec) bg_button_pane_cp032

0xe04b,	// (0x0008010d) cell_ncimui_button_pane_t1

0xeb4c,	// (0x00080c0e) image3_infobar_pane_ParamLimits

0xeb4c,	// (0x00080c0e) image3_infobar_pane

0x8cca,	// (0x0007ad8c) fs_bigclock_status_pane_ParamLimits

0x8cca,	// (0x0007ad8c) fs_bigclock_status_pane

0x8cd7,	// (0x0007ad99) main_fs_bigclock_clock_pane_ParamLimits

0x8cd7,	// (0x0007ad99) main_fs_bigclock_clock_pane

0x8cf5,	// (0x0007adb7) main_fs_bigclock_indi_pane_ParamLimits

0x8cf5,	// (0x0007adb7) main_fs_bigclock_indi_pane

0x8d27,	// (0x0007ade9) main_fs_bigclock_swipe_pane_ParamLimits

0x8d27,	// (0x0007ade9) main_fs_bigclock_swipe_pane

0x162a,	// (0x000736ec) main_fs_clock_dumped_data

0xd5ad,	// (0x0007f66f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd5ad,	// (0x0007f66f) list_single_fs_bigclock_indicator_pane_g1

0xd5c8,	// (0x0007f68a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd5c8,	// (0x0007f68a) list_single_fs_bigclock_indicator_pane_g2

0xd5e2,	// (0x0007f6a4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd5e2,	// (0x0007f6a4) list_single_fs_bigclock_indicator_pane_g3

0xd5fc,	// (0x0007f6be) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd5fc,	// (0x0007f6be) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb93,	// (0x00081c55) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb93,	// (0x00081c55) list_single_fs_bigclock_indicator_pane_g

0xd627,	// (0x0007f6e9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd627,	// (0x0007f6e9) list_single_fs_bigclock_indicator_pane_t1

0xd64f,	// (0x0007f711) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd64f,	// (0x0007f711) list_single_fs_bigclock_indicator_pane_t2

0xd677,	// (0x0007f739) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd677,	// (0x0007f739) list_single_fs_bigclock_indicator_pane_t3

0xd69f,	// (0x0007f761) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd69f,	// (0x0007f761) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb9e,	// (0x00081c60) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb9e,	// (0x00081c60) list_single_fs_bigclock_indicator_pane_t

0xe059,	// (0x0008011b) image3_infobar_fav_pane_ParamLimits

0xe059,	// (0x0008011b) image3_infobar_fav_pane

0xe069,	// (0x0008012b) image3_infobar_loc_pane_ParamLimits

0xe069,	// (0x0008012b) image3_infobar_loc_pane

0xe07d,	// (0x0008013f) image3_infobar_time_pane_ParamLimits

0xe07d,	// (0x0008013f) image3_infobar_time_pane

0x2cb3,	// (0x00074d75) image3_infobar_time_pane_g1

0xe08d,	// (0x0008014f) image3_infobar_time_pane_t1

0x2cb3,	// (0x00074d75) image3_infobar_loc_pane_g1

0xe09b,	// (0x0008015d) image3_infobar_loc_pane_g2

0x0001,

0xfcf7,	// (0x00081db9) image3_infobar_loc_pane_g

0xe0a3,	// (0x00080165) image3_infobar_loc_pane_t1

0x2cb3,	// (0x00074d75) image3_infobar_fav_pane_g1

0xe0b1,	// (0x00080173) image3_infobar_fav_pane_g2

0x0001,

0xfcfc,	// (0x00081dbe) image3_infobar_fav_pane_g

0xe0b9,	// (0x0008017b) fs_bigclock_status_battery_pane

0xe0c2,	// (0x00080184) fs_bigclock_status_signal_pane

0xe0cb,	// (0x0008018d) fs_bigclock_status_title_pane

0xe0d4,	// (0x00080196) fs_bigclock_status_signal_pane_g1

0xe0dd,	// (0x0008019f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd01,	// (0x00081dc3) fs_bigclock_status_signal_pane_g

0xe0e5,	// (0x000801a7) fs_bigclock_status_battery_pane_g1

0xe0ee,	// (0x000801b0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd06,	// (0x00081dc8) fs_bigclock_status_battery_pane_g

0xe0f6,	// (0x000801b8) fs_bigclock_status_title_pane_t1

0x95ec,	// (0x0007b6ae) main_fs_bigclock_clock_pane_g1

0x95ec,	// (0x0007b6ae) main_fs_bigclock_clock_pane_g2

0x95fd,	// (0x0007b6bf) main_fs_bigclock_clock_pane_g3

0x95fd,	// (0x0007b6bf) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0b,	// (0x00081dcd) main_fs_bigclock_clock_pane_g

0x9610,	// (0x0007b6d2) main_fs_bigclock_clock_pane_t1

0x9626,	// (0x0007b6e8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd14,	// (0x00081dd6) main_fs_bigclock_clock_pane_t

0xe104,	// (0x000801c6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe104,	// (0x000801c6) list_single_fs_bigclock_indicator_pane

0xe115,	// (0x000801d7) list_single_fs_bigclock_pane_ParamLimits

0xe115,	// (0x000801d7) list_single_fs_bigclock_pane

0xe13b,	// (0x000801fd) main_fs_bigclock_indicator_pane_t1

0xe14a,	// (0x0008020c) list_single_fs_bigclock_pane_g1

0xe152,	// (0x00080214) list_single_fs_bigclock_pane_t1

0x2cb3,	// (0x00074d75) main_fs_bigclock_swipe_pane_g1

0xe195,	// (0x00080257) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd25,	// (0x00081de7) main_fs_bigclock_swipe_pane_g

0xe19d,	// (0x0008025f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe19d,	// (0x0008025f) main_fs_bigclock_swipe_pane_t1

0x43e3,	// (0x000764a5) call_type_pane_ParamLimits

0x162a,	// (0x000736ec) main_btmg_pane

0xddd0,	// (0x0007fe92) list_single_cale_mrui_row_pane_g2_ParamLimits

0xddd0,	// (0x0007fe92) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc98,	// (0x00081d5a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc98,	// (0x00081d5a) list_single_cale_mrui_row_pane_g

0xdf55,	// (0x00080017) list_recal_vselct_arw_lo_pane

0xdf5d,	// (0x0008001f) list_recal_vselct_arw_up_pane

0xdf65,	// (0x00080027) list_recal_vselct_pane

0x9680,	// (0x0007b742) btmg_button_pane

0x968a,	// (0x0007b74c) main_btmg_pane_g1

0x162a,	// (0x000736ec) bg_button_pane_cp044

0xe1ba,	// (0x0008027c) btmg_button_pane_t1

0xbc2e,	// (0x0007dcf0) aid_listscroll_gen

0x1855,	// (0x00073917) main_cntbar_detail_pane

0xdad1,	// (0x0007fb93) list_cmail_folder_pane

0x42b9,	// (0x0007637b) sp_fs_scroll_pane_cp03_ParamLimits

0x14cd,	// (0x0007358f) list_single_fs_dyc_pane_cp01_ParamLimits

0x14cd,	// (0x0007358f) list_single_fs_dyc_pane_cp01

0xe1c8,	// (0x0008028a) aid_size_cmail_indent

0xe1d1,	// (0x00080293) list_single_dyc_row_pane_cp01

0x96c0,	// (0x0007b782) cntbar_detail_list_pane_ParamLimits

0x96c0,	// (0x0007b782) cntbar_detail_list_pane

0x970c,	// (0x0007b7ce) main_cntbar_detail_cont_pane_ParamLimits

0x970c,	// (0x0007b7ce) main_cntbar_detail_cont_pane

0x42b9,	// (0x0007637b) scroll_pane_cp032_ParamLimits

0x42b9,	// (0x0007637b) scroll_pane_cp032

0x9720,	// (0x0007b7e2) cntbar_detail_list_event_pane_ParamLimits

0x9720,	// (0x0007b7e2) cntbar_detail_list_event_pane

0x96d0,	// (0x0007b792) cntbar_detail_list_shct_pane

0x33db,	// (0x0007549d) aid_list_gen

0xe1da,	// (0x0008029c) aid_scroll

0xe1e3,	// (0x000802a5) aid_size_touch_scroll_bar

0x8ecf,	// (0x0007af91) aid_list_double

0xe1ec,	// (0x000802ae) aid_list_single

0xe1ec,	// (0x000802ae) aid_list_single_lg

0xe1f5,	// (0x000802b7) aid_list_z_g_a_sm

0xeded,	// (0x00080eaf) aid_list_z_g_d

0xe1fd,	// (0x000802bf) aid_txt_z_prm

0x14e2,	// (0x000735a4) aid_txt_z_prm_cp01

0x14f0,	// (0x000735b2) aid_txt_z_sec

0x9730,	// (0x0007b7f2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9730,	// (0x0007b7f2) main_cntbar_detail_cont_pane_g1

0x9744,	// (0x0007b806) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9744,	// (0x0007b806) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd2a,	// (0x00081dec) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd2a,	// (0x00081dec) main_cntbar_detail_cont_pane_g

0xe20b,	// (0x000802cd) main_cntbar_detail_cont_pane_t1

0xe219,	// (0x000802db) main_cntbar_detail_cont_pane_t2

0xe227,	// (0x000802e9) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd2f,	// (0x00081df1) main_cntbar_detail_cont_pane_t

0x9754,	// (0x0007b816) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9754,	// (0x0007b816) cell_cntbar_detail_list_shct_pane

0xe235,	// (0x000802f7) cntbar_detail_list_shct_pane_g1

0xe23e,	// (0x00080300) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd36,	// (0x00081df8) cntbar_detail_list_shct_pane_g

0x9768,	// (0x0007b82a) cntbar_detail_list_event_pane_g1_ParamLimits

0x9768,	// (0x0007b82a) cntbar_detail_list_event_pane_g1

0x9774,	// (0x0007b836) cntbar_detail_list_event_pane_g2_ParamLimits

0x9774,	// (0x0007b836) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3b,	// (0x00081dfd) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3b,	// (0x00081dfd) cntbar_detail_list_event_pane_g

0x97e0,	// (0x0007b8a2) cntbar_detail_list_event_pane_t1_ParamLimits

0x97e0,	// (0x0007b8a2) cntbar_detail_list_event_pane_t1

0x97f5,	// (0x0007b8b7) cntbar_detail_list_event_pane_t2_ParamLimits

0x97f5,	// (0x0007b8b7) cntbar_detail_list_event_pane_t2

0x0002,

0xfd48,	// (0x00081e0a) cntbar_detail_list_event_pane_t_ParamLimits

0xfd48,	// (0x00081e0a) cntbar_detail_list_event_pane_t

0x2cb3,	// (0x00074d75) cell_cntbar_detail_list_shct_pane_g1

0x49d2,	// (0x00076a94) navi_pane_mv_g3

0x1855,	// (0x00073917) main_cntbar_detail_pane_ParamLimits

0x162a,	// (0x000736ec) main_notif_wgt_pane

0xe938,	// (0x000809fa) aid_tch_main_mp4_pane_g4

0xeb44,	// (0x00080c06) popup_slider_window_cp02

0xdf4b,	// (0x0008000d) list_recal_day_event_pane

0x9694,	// (0x0007b756) cntbar_detail_btn_pane_ParamLimits

0x9694,	// (0x0007b756) cntbar_detail_btn_pane

0x96aa,	// (0x0007b76c) cntbar_detail_btn_pane_cp01_ParamLimits

0x96aa,	// (0x0007b76c) cntbar_detail_btn_pane_cp01

0x96d0,	// (0x0007b792) cntbar_detail_list_shct_pane_ParamLimits

0x96e0,	// (0x0007b7a2) cntbar_detail_pane_g1_ParamLimits

0x96e0,	// (0x0007b7a2) cntbar_detail_pane_g1

0x96f0,	// (0x0007b7b2) cntbar_detail_pane_t1_ParamLimits

0x96f0,	// (0x0007b7b2) cntbar_detail_pane_t1

0x9780,	// (0x0007b842) cntbar_detail_list_event_pane_g3_ParamLimits

0x9780,	// (0x0007b842) cntbar_detail_list_event_pane_g3

0x9798,	// (0x0007b85a) cntbar_detail_list_event_pane_g4_ParamLimits

0x9798,	// (0x0007b85a) cntbar_detail_list_event_pane_g4

0x97b0,	// (0x0007b872) cntbar_detail_list_event_pane_g5_ParamLimits

0x97b0,	// (0x0007b872) cntbar_detail_list_event_pane_g5

0x97c8,	// (0x0007b88a) cntbar_detail_list_event_pane_g6_ParamLimits

0x97c8,	// (0x0007b88a) cntbar_detail_list_event_pane_g6

0x980a,	// (0x0007b8cc) cntbar_detail_list_event_pane_t3_ParamLimits

0x980a,	// (0x0007b8cc) cntbar_detail_list_event_pane_t3

0x981c,	// (0x0007b8de) popup_notif_wgt_window_ParamLimits

0x981c,	// (0x0007b8de) popup_notif_wgt_window

0x9835,	// (0x0007b8f7) popup_submenu_window_cp01_ParamLimits

0x9835,	// (0x0007b8f7) popup_submenu_window_cp01

0x2ac6,	// (0x00074b88) bg_popup_window_pane_cp10

0xe247,	// (0x00080309) listscroll_notif_wgt_pane

0xe259,	// (0x0008031b) list_notif_wgt_window

0xe262,	// (0x00080324) scroll_pane_cp033

0x984b,	// (0x0007b90d) list_notif_wgt_row_pane_ParamLimits

0x984b,	// (0x0007b90d) list_notif_wgt_row_pane

0xe26b,	// (0x0008032d) aid_size_list_notif_wgt_del

0xe278,	// (0x0008033a) list_notif_wgt_row_pane_g1

0xe284,	// (0x00080346) list_notif_wgt_row_pane_g2

0xe293,	// (0x00080355) list_notif_wgt_row_pane_g3

0x0002,

0xfd4f,	// (0x00081e11) list_notif_wgt_row_pane_g

0xe2a0,	// (0x00080362) list_notif_wgt_row_pane_t1

0xe2b6,	// (0x00080378) list_notif_wgt_row_pane_t2

0xe2c8,	// (0x0008038a) list_notif_wgt_row_pane_t3

0x0002,

0xfd56,	// (0x00081e18) list_notif_wgt_row_pane_t

0xcc59,	// (0x0007ed1b) list_recal_day_event_pane_g1

0xe2da,	// (0x0008039c) list_recal_day_event_pane_t1

0x162a,	// (0x000736ec) bg_button_pane_cp045

0xe2e9,	// (0x000803ab) cntbar_detail_btn_pane_t1

0xa9a3,	// (0x0007ca65) main_callh_pane_ParamLimits

0xa9a3,	// (0x0007ca65) main_callh_pane

0x162a,	// (0x000736ec) main_coverflow0_pane

0x162a,	// (0x000736ec) main_wgtman_pane

0x8d3f,	// (0x0007ae01) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8d3f,	// (0x0007ae01) main_fs_bigclock_unlock_btn_pane

0x91ab,	// (0x0007b26d) bg_button_pane_cp16

0x91bb,	// (0x0007b27d) cell_tport_appsw_pane_g3

0x985b,	// (0x0007b91d) cf0_flow_pane_ParamLimits

0x985b,	// (0x0007b91d) cf0_flow_pane

0xe2f7,	// (0x000803b9) listscroll_cf0_pane

0xe302,	// (0x000803c4) main_cf0_pane_g1

0x9870,	// (0x0007b932) main_cf0_pane_t1_ParamLimits

0x9870,	// (0x0007b932) main_cf0_pane_t1

0x9887,	// (0x0007b949) main_cf0_pane_t2_ParamLimits

0x9887,	// (0x0007b949) main_cf0_pane_t2

0x0001,

0xfd62,	// (0x00081e24) main_cf0_pane_t_ParamLimits

0xfd62,	// (0x00081e24) main_cf0_pane_t

0xe314,	// (0x000803d6) scroll_pane_cp11

0x989e,	// (0x0007b960) cf0_flow_pane_g1

0x98a6,	// (0x0007b968) cf0_flow_pane_g2

0x0001,

0xfd67,	// (0x00081e29) cf0_flow_pane_g

0x98ae,	// (0x0007b970) cf0_flow_pane_t1

0x162a,	// (0x000736ec) main_call6_pane

0x162a,	// (0x000736ec) main_calllock_pane

0x98bc,	// (0x0007b97e) call6_btn_grp_pane_ParamLimits

0x98bc,	// (0x0007b97e) call6_btn_grp_pane

0x98d6,	// (0x0007b998) call6_pane_g1_ParamLimits

0x98d6,	// (0x0007b998) call6_pane_g1

0x98ec,	// (0x0007b9ae) popup_call6_1st_window_ParamLimits

0x98ec,	// (0x0007b9ae) popup_call6_1st_window

0x98fd,	// (0x0007b9bf) popup_call6_2nd_window_ParamLimits

0x98fd,	// (0x0007b9bf) popup_call6_2nd_window

0x990e,	// (0x0007b9d0) cell_call6_btn_pane_ParamLimits

0x990e,	// (0x0007b9d0) cell_call6_btn_pane

0x2ac6,	// (0x00074b88) bg_popup_call2_in_pane_cp03

0xe31f,	// (0x000803e1) popup_call6_1st_window_g1

0xe327,	// (0x000803e9) popup_call6_1st_window_g2

0xe32f,	// (0x000803f1) popup_call6_1st_window_g3

0x0002,

0xfd6c,	// (0x00081e2e) popup_call6_1st_window_g

0xe337,	// (0x000803f9) popup_call6_1st_window_t1

0xe346,	// (0x00080408) popup_call6_1st_window_t2

0xe354,	// (0x00080416) popup_call6_1st_window_t3

0x0002,

0xfd73,	// (0x00081e35) popup_call6_1st_window_t

0x2ac6,	// (0x00074b88) bg_popup_call2_in_pane_cp04

0xe362,	// (0x00080424) popup_call6_2nd_window_g1

0xe36a,	// (0x0008042c) popup_call6_2nd_window_g2

0xe372,	// (0x00080434) popup_call6_2nd_window_g3

0x0002,

0xfd7a,	// (0x00081e3c) popup_call6_2nd_window_g

0xe37a,	// (0x0008043c) popup_call6_2nd_window_t1

0x162a,	// (0x000736ec) bg_button_pane_cp15

0xe389,	// (0x0008044b) cell_call6_btn_pane_g1

0xedf5,	// (0x00080eb7) cell_call6_btn_pane_t1

0x9921,	// (0x0007b9e3) listscroll_wgtman_pane_ParamLimits

0x9921,	// (0x0007b9e3) listscroll_wgtman_pane

0x9942,	// (0x0007ba04) wgtman_btn_pane_ParamLimits

0x9942,	// (0x0007ba04) wgtman_btn_pane

0x460d,	// (0x000766cf) aid_scroll_copy1

0xe392,	// (0x00080454) list_wgtman_pane

0x9985,	// (0x0007ba47) wgtman_btn_pane_g1_ParamLimits

0x9985,	// (0x0007ba47) wgtman_btn_pane_g1

0x99b1,	// (0x0007ba73) wgtman_btn_pane_t1_ParamLimits

0x99b1,	// (0x0007ba73) wgtman_btn_pane_t1

0xe39c,	// (0x0008045e) wgtman_btn_pane_t2_ParamLimits

0xe39c,	// (0x0008045e) wgtman_btn_pane_t2

0x0001,

0xfd81,	// (0x00081e43) wgtman_btn_pane_t_ParamLimits

0xfd81,	// (0x00081e43) wgtman_btn_pane_t

0x99ee,	// (0x0007bab0) listrow_wgtman_pane_ParamLimits

0x99ee,	// (0x0007bab0) listrow_wgtman_pane

0x9a00,	// (0x0007bac2) listrow_wgtman_pane_g1

0x9a0d,	// (0x0007bacf) listrow_wgtman_pane_g2

0x0001,

0xfd86,	// (0x00081e48) listrow_wgtman_pane_g

0x14fe,	// (0x000735c0) listrow_wgtman_pane_t1

0x1516,	// (0x000735d8) listrow_wgtman_pane_t2

0x0001,

0xfd8b,	// (0x00081e4d) listrow_wgtman_pane_t

0x153c,	// (0x000735fe) wait_bar_pane_cp09

0xe3b3,	// (0x00080475) main_calllock_btn_pane

0xe3bd,	// (0x0008047f) main_calllock_pane_g1

0x162a,	// (0x000736ec) bg_button_pane_cp17

0xe389,	// (0x0008044b) main_calllock_btn_pane_g1

0xe3c5,	// (0x00080487) main_calllock_btn_pane_t1

0x162a,	// (0x000736ec) main_dialer3_pane

0x162a,	// (0x000736ec) main_fmrd2_pane

0x2cb3,	// (0x00074d75) main_fs_bigclock_unlock_btn_pane_g1

0x9a33,	// (0x0007baf5) main_fs_bigclock_unlock_btn_pane_t1

0x9a41,	// (0x0007bb03) area_fmrd2_info_pane_ParamLimits

0x9a41,	// (0x0007bb03) area_fmrd2_info_pane

0x9a52,	// (0x0007bb14) area_fmrd2_visual_pane_ParamLimits

0x9a52,	// (0x0007bb14) area_fmrd2_visual_pane

0x9a60,	// (0x0007bb22) fmrd2_indi_pane_ParamLimits

0x9a60,	// (0x0007bb22) fmrd2_indi_pane

0x9a6d,	// (0x0007bb2f) area_fmrd2_visual_pane_g1

0x9a75,	// (0x0007bb37) area_fmrd2_visual_pane_t1

0x9a85,	// (0x0007bb47) area_fmrd2_visual_pane_t2

0x9a95,	// (0x0007bb57) area_fmrd2_visual_pane_t3

0x0002,

0xfd95,	// (0x00081e57) area_fmrd2_visual_pane_t

0x9aa5,	// (0x0007bb67) area_fmrd2_info_pane_g1

0x9aad,	// (0x0007bb6f) area_fmrd2_info_pane_t1

0x9abd,	// (0x0007bb7f) area_fmrd2_info_pane_t2

0x9acd,	// (0x0007bb8f) area_fmrd2_info_pane_t3

0x9add,	// (0x0007bb9f) area_fmrd2_info_pane_t4

0x0003,

0xfd9c,	// (0x00081e5e) area_fmrd2_info_pane_t

0x9aeb,	// (0x0007bbad) fmrd2_indi_pane_t1

0x9afb,	// (0x0007bbbd) fmrd2_indi_pane_t2

0x9b0b,	// (0x0007bbcd) fmrd2_indi_pane_t3

0x0002,

0xfda5,	// (0x00081e67) fmrd2_indi_pane_t

0xd60b,	// (0x0007f6cd) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd60b,	// (0x0007f6cd) list_single_fs_bigclock_indicator_pane_g5

0xd6bc,	// (0x0007f77e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd6bc,	// (0x0007f77e) list_single_fs_bigclock_indicator_pane_t5

0x932e,	// (0x0007b3f0) aid_cell_bcale_month_pane_ParamLimits

0x932e,	// (0x0007b3f0) aid_cell_bcale_month_pane

0x934c,	// (0x0007b40e) bcale_month_pane_ParamLimits

0x934c,	// (0x0007b40e) bcale_month_pane

0x9370,	// (0x0007b432) bcale_preview_pane_ParamLimits

0x9370,	// (0x0007b432) bcale_preview_pane

0xe152,	// (0x00080214) list_single_fs_bigclock_pane_t1_ParamLimits

0xe171,	// (0x00080233) list_single_fs_bigclock_pane_t2_ParamLimits

0xe171,	// (0x00080233) list_single_fs_bigclock_pane_t2

0x0001,

0xfd20,	// (0x00081de2) list_single_fs_bigclock_pane_t_ParamLimits

0xfd20,	// (0x00081de2) list_single_fs_bigclock_pane_t

0x9a2b,	// (0x0007baed) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd90,	// (0x00081e52) main_fs_bigclock_unlock_btn_pane_g

0x9b1b,	// (0x0007bbdd) aid_dia3_key_size_ParamLimits

0x9b1b,	// (0x0007bbdd) aid_dia3_key_size

0x9b2a,	// (0x0007bbec) aid_dia3_listrow_size_ParamLimits

0x9b2a,	// (0x0007bbec) aid_dia3_listrow_size

0x9b3f,	// (0x0007bc01) dia3_keypad_fun_pane_ParamLimits

0x9b3f,	// (0x0007bc01) dia3_keypad_fun_pane

0x9b5b,	// (0x0007bc1d) dia3_keypad_num_pane_ParamLimits

0x9b5b,	// (0x0007bc1d) dia3_keypad_num_pane

0x9b76,	// (0x0007bc38) dia3_listscroll_pane_ParamLimits

0x9b76,	// (0x0007bc38) dia3_listscroll_pane

0x9b89,	// (0x0007bc4b) dia3_numentry_pane_ParamLimits

0x9b89,	// (0x0007bc4b) dia3_numentry_pane

0xe3d4,	// (0x00080496) dia3_list_pane

0xe3df,	// (0x000804a1) scroll_pane_cp12

0x162a,	// (0x000736ec) bg_dia3_numentry_pane

0x9ba1,	// (0x0007bc63) dia3_numentry_pane_t1

0x9bb0,	// (0x0007bc72) cell_dia3_key_num_pane

0x9bb8,	// (0x0007bc7a) cell_dia3_key0_fun_pane_ParamLimits

0x9bb8,	// (0x0007bc7a) cell_dia3_key0_fun_pane

0x9bcc,	// (0x0007bc8e) cell_dia3_key1_fun_pane_ParamLimits

0x9bcc,	// (0x0007bc8e) cell_dia3_key1_fun_pane

0x9be4,	// (0x0007bca6) dia3_listrow_pane

0xd35e,	// (0x0007f420) bg_dia3_numentry_pane_g1

0x162a,	// (0x000736ec) bg_button_pane_cp21

0xe3ea,	// (0x000804ac) cell_dia3_key_num_pane_t1

0xe3f8,	// (0x000804ba) cell_dia3_key_num_pane_t2

0xe407,	// (0x000804c9) cell_dia3_key_num_pane_t3

0xe416,	// (0x000804d8) cell_dia3_key_num_pane_t4

0x0003,

0xfdac,	// (0x00081e6e) cell_dia3_key_num_pane_t

0x162a,	// (0x000736ec) bg_button_pane_cp19

0x9bf6,	// (0x0007bcb8) cell_dia3_key0_fun_pane_g1

0x162a,	// (0x000736ec) bg_button_pane_cp20

0x9bfe,	// (0x0007bcc0) cell_dia3_key1_fun_pane_g1

0x9c06,	// (0x0007bcc8) area_left_week_number_pane

0x9c12,	// (0x0007bcd4) area_top_day_name_pane

0x9c25,	// (0x0007bce7) frame_month_view_pane

0xe425,	// (0x000804e7) grid_month_view_pane

0x9c38,	// (0x0007bcfa) cell_top_day_name_pane_ParamLimits

0x9c38,	// (0x0007bcfa) cell_top_day_name_pane

0x9c65,	// (0x0007bd27) cell_area_left_week_number_pane_ParamLimits

0x9c65,	// (0x0007bd27) cell_area_left_week_number_pane

0x9c79,	// (0x0007bd3b) cell_month_view_pane_ParamLimits

0x9c79,	// (0x0007bd3b) cell_month_view_pane

0xe433,	// (0x000804f5) frm_month_g1

0x9ca6,	// (0x0007bd68) frm_month_g2

0x9cb9,	// (0x0007bd7b) frm_month_g3

0x9ccc,	// (0x0007bd8e) frm_month_g4

0x9cdf,	// (0x0007bda1) frm_month_g5

0x9cf2,	// (0x0007bdb4) frm_month_g6

0x9d05,	// (0x0007bdc7) frm_month_g7

0xe440,	// (0x00080502) frm_month_g8

0x9d18,	// (0x0007bdda) frm_month_g9

0x9d28,	// (0x0007bdea) frm_month_g10

0x9d38,	// (0x0007bdfa) frm_month_g11

0x9d48,	// (0x0007be0a) frm_month_g12

0x9d5a,	// (0x0007be1c) frm_month_g13

0x9d6c,	// (0x0007be2e) frm_month_g14

0x9d80,	// (0x0007be42) frm_month_g15

0x9d94,	// (0x0007be56) frm_month_g16

0x000f,

0xfdb5,	// (0x00081e77) frm_month_g

0xe44d,	// (0x0008050f) cell_top_day_name_pane_t1

0x9da8,	// (0x0007be6a) cell_area_left_week_number_pane_g1

0x9db4,	// (0x0007be76) cell_area_left_week_number_pane_t1

0x2002,	// (0x000740c4) cell_month_view_pane_g1

0x9dc7,	// (0x0007be89) cell_month_view_pane_t1

0x162a,	// (0x000736ec) main_fps_pane

0xd8d9,	// (0x0007f99b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd8d9,	// (0x0007f99b) cmail_ddmenu_btn02_pane_cp1

0xd8f5,	// (0x0007f9b7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd8f5,	// (0x0007f9b7) cmail_ddmenu_btn02_pane_cp2

0x9560,	// (0x0007b622) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9560,	// (0x0007b622) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd3,	// (0x00081d95) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd3,	// (0x00081d95) cmail_ddmenu_btn02_pane_g

0x957e,	// (0x0007b640) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x957e,	// (0x0007b640) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcd8,	// (0x00081d9a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcd8,	// (0x00081d9a) cmail_ddmenu_btn02_pane_t

0x9dda,	// (0x0007be9c) fps_text_pane_ParamLimits

0x9dda,	// (0x0007be9c) fps_text_pane

0x9df1,	// (0x0007beb3) main_fps_pane_g1_ParamLimits

0x9df1,	// (0x0007beb3) main_fps_pane_g1

0x9e0b,	// (0x0007becd) wait_bar_pane_cp010_ParamLimits

0x9e0b,	// (0x0007becd) wait_bar_pane_cp010

0x9e1c,	// (0x0007bede) fps_text_pane_t1_ParamLimits

0x9e1c,	// (0x0007bede) fps_text_pane_t1

0xc98f,	// (0x0007ea51) cam4_image_uncrop_pane_g1

0xc998,	// (0x0007ea5a) cam4_image_uncrop_pane_g2

0x71bd,	// (0x0007927f) cam4_image_uncrop_pane_g3

0x71c6,	// (0x00079288) cam4_image_uncrop_pane_g4

0x0003,

0xf851,	// (0x00081913) cam4_image_uncrop_pane_g

0x9be4,	// (0x0007bca6) dia3_listrow_pane_ParamLimits

0x162a,	// (0x000736ec) main_phob2_pane

0x917c,	// (0x0007b23e) cell_tport_appsw_pane_cp02_ParamLimits

0x917c,	// (0x0007b23e) cell_tport_appsw_pane_cp02

0x9190,	// (0x0007b252) cell_tport_appsw_pane_cp03_ParamLimits

0x9190,	// (0x0007b252) cell_tport_appsw_pane_cp03

0x162a,	// (0x000736ec) phob2_contact_card_pane

0x162a,	// (0x000736ec) phob2_listscroll_pane

0xe460,	// (0x00080522) phob2_list_pane

0xe468,	// (0x0008052a) scroll_pane_cp034

0x9e34,	// (0x0007bef6) phob2_cc_data_pane_ParamLimits

0x9e34,	// (0x0007bef6) phob2_cc_data_pane

0x9e53,	// (0x0007bf15) phob2_cc_listscroll_pane_ParamLimits

0x9e53,	// (0x0007bf15) phob2_cc_listscroll_pane

0x99ee,	// (0x0007bab0) list_double_large_graphic_phob2_pane_ParamLimits

0x99ee,	// (0x0007bab0) list_double_large_graphic_phob2_pane

0x9e71,	// (0x0007bf33) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9e71,	// (0x0007bf33) list_double_large_graphic_phob2_pane_g1

0x154e,	// (0x00073610) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x154e,	// (0x00073610) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdd6,	// (0x00081e98) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdd6,	// (0x00081e98) list_double_large_graphic_phob2_pane_g

0x1566,	// (0x00073628) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1566,	// (0x00073628) list_double_large_graphic_phob2_pane_t1

0x157b,	// (0x0007363d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x157b,	// (0x0007363d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfddf,	// (0x00081ea1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfddf,	// (0x00081ea1) list_double_large_graphic_phob2_pane_t

0x162a,	// (0x000736ec) list_highlight_pane_cp024

0xe470,	// (0x00080532) phob2_cc_button_pane

0x9e8c,	// (0x0007bf4e) phob2_cc_data_pane_g1_ParamLimits

0x9e8c,	// (0x0007bf4e) phob2_cc_data_pane_g1

0x9ea3,	// (0x0007bf65) phob2_cc_data_pane_g2_ParamLimits

0x9ea3,	// (0x0007bf65) phob2_cc_data_pane_g2

0x0001,

0xfde4,	// (0x00081ea6) phob2_cc_data_pane_g_ParamLimits

0xfde4,	// (0x00081ea6) phob2_cc_data_pane_g

0x9eb5,	// (0x0007bf77) phob2_cc_data_pane_t1_ParamLimits

0x9eb5,	// (0x0007bf77) phob2_cc_data_pane_t1

0x9ecd,	// (0x0007bf8f) phob2_cc_data_pane_t2_ParamLimits

0x9ecd,	// (0x0007bf8f) phob2_cc_data_pane_t2

0x9ee5,	// (0x0007bfa7) phob2_cc_data_pane_t3_ParamLimits

0x9ee5,	// (0x0007bfa7) phob2_cc_data_pane_t3

0x0002,

0xfde9,	// (0x00081eab) phob2_cc_data_pane_t_ParamLimits

0xfde9,	// (0x00081eab) phob2_cc_data_pane_t

0xe478,	// (0x0008053a) phob2_cc_list_pane_ParamLimits

0xe478,	// (0x0008053a) phob2_cc_list_pane

0xcd02,	// (0x0007edc4) scroll_pane_cp035_ParamLimits

0xcd02,	// (0x0007edc4) scroll_pane_cp035

0x1855,	// (0x00073917) bg_button_pane_cp033

0xe484,	// (0x00080546) phob2_cc_button_pane_g1

0xe490,	// (0x00080552) phob2_cc_button_pane_t1

0xe4a5,	// (0x00080567) phob2_cc_button_pane_t2

0x0001,

0xfdf0,	// (0x00081eb2) phob2_cc_button_pane_t

0x9efd,	// (0x0007bfbf) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9efd,	// (0x0007bfbf) list_double_large_graphic_phob2_cc_pane

0x9f2d,	// (0x0007bfef) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f2d,	// (0x0007bfef) list_double_large_graphic_phob2_cc_pane_g1

0x1590,	// (0x00073652) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1590,	// (0x00073652) list_double_large_graphic_phob2_cc_pane_g2

0x159c,	// (0x0007365e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x159c,	// (0x0007365e) list_double_large_graphic_phob2_cc_pane_g3

0x15a8,	// (0x0007366a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x15a8,	// (0x0007366a) list_double_large_graphic_phob2_cc_pane_g4

0x15b4,	// (0x00073676) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x15b4,	// (0x00073676) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf5,	// (0x00081eb7) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf5,	// (0x00081eb7) list_double_large_graphic_phob2_cc_pane_g

0x15c0,	// (0x00073682) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x15c0,	// (0x00073682) list_double_large_graphic_phob2_cc_pane_t1

0x15e9,	// (0x000736ab) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x15e9,	// (0x000736ab) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe00,	// (0x00081ec2) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe00,	// (0x00081ec2) list_double_large_graphic_phob2_cc_pane_t

0xe4b7,	// (0x00080579) list_highlight_pane_cp025_ParamLimits

0xe4b7,	// (0x00080579) list_highlight_pane_cp025

0x1855,	// (0x00073917) bg_button_pane_cp033_ParamLimits

0xe484,	// (0x00080546) phob2_cc_button_pane_g1_ParamLimits

0xe490,	// (0x00080552) phob2_cc_button_pane_t1_ParamLimits

0xe4a5,	// (0x00080567) phob2_cc_button_pane_t2_ParamLimits

0xfdf0,	// (0x00081eb2) phob2_cc_button_pane_t_ParamLimits

0x1863,	// (0x00073925) popup_wgtman_window

0xcb19,	// (0x0007ebdb) scroll_pane_cp038

0x9967,	// (0x0007ba29) wgtman_btn_pane_cp_01_ParamLimits

0x9967,	// (0x0007ba29) wgtman_btn_pane_cp_01

0xe4c5,	// (0x00080587) wgtman_content_pane

0xe4ce,	// (0x00080590) wgtman_heading_pane

0x162a,	// (0x000736ec) bg_heading_pane_cp02

0xe4d7,	// (0x00080599) wgtman_heading_pane_g1

0xe4df,	// (0x000805a1) wgtman_heading_pane_t1

0xe4ed,	// (0x000805af) scroll_pane_cp036

0xe4f5,	// (0x000805b7) wgtman_list_pane

0xe4fd,	// (0x000805bf) wgtman_list_pane_t1_ParamLimits

0xe4fd,	// (0x000805bf) wgtman_list_pane_t1

0xebd0,	// (0x00080c92) cam4_grid_pane

0x0fea,	// (0x000730ac) bg_button_pane_cp015_ParamLimits

0x7dda,	// (0x00079e9c) bg_button_pane_cp016_ParamLimits

0x7de6,	// (0x00079ea8) bg_button_pane_cp017_ParamLimits

0x7e01,	// (0x00079ec3) popup_vitu2_query_window_g3_ParamLimits

0x7e01,	// (0x00079ec3) popup_vitu2_query_window_g3

0x10a1,	// (0x00073163) popup_vitu2_query_window_t6_ParamLimits

0x10a1,	// (0x00073163) popup_vitu2_query_window_t6

0x10cc,	// (0x0007318e) popup_vitu2_query_window_t7_ParamLimits

0x10cc,	// (0x0007318e) popup_vitu2_query_window_t7

0xc98f,	// (0x0007ea51) cam4_grid_pane_g1

0xc998,	// (0x0007ea5a) cam4_grid_pane_g2

0xe517,	// (0x000805d9) cam4_grid_pane_g3

0xe520,	// (0x000805e2) cam4_grid_pane_g4

0x0003,

0xfe05,	// (0x00081ec7) cam4_grid_pane_g

0x2dd5,	// (0x00074e97) aid_placing_vt_slider_lsc_ParamLimits

0x3130,	// (0x000751f2) vidtel_button_pane_ParamLimits

0x3130,	// (0x000751f2) vidtel_button_pane

0x162a,	// (0x000736ec) bg_button_pane_cp034

0xe52b,	// (0x000805ed) vidtel_button_pane_g1

0xe533,	// (0x000805f5) vidtel_button_pane_t1

0xcc49,	// (0x0007ed0b) aid_size_vtel_slider_touch

0xcd02,	// (0x0007edc4) scroll_pane_cp039

0x8a33,	// (0x0007aaf5) ncim_query_button_pane_cp01_ParamLimits

0x8a52,	// (0x0007ab14) ncimui_query_pane_g1_ParamLimits

0x1855,	// (0x00073917) input_focus_pane_cp012_ParamLimits

0xd39c,	// (0x0007f45e) ncim_query_entry_pane_t1_ParamLimits

0xcd02,	// (0x0007edc4) scroll_pane_cp039_ParamLimits

0x48bd,	// (0x0007697f) navi_pane_bcale_mc_g1

0x48c5,	// (0x00076987) navi_pane_bcale_mc_t1

0xd929,	// (0x0007f9eb) main_sp_fs_email_pane_g1

0xd935,	// (0x0007f9f7) main_sp_fs_email_pane_g2

0x0001,

0xfc08,	// (0x00081cca) main_sp_fs_email_pane_g

0xdddc,	// (0x0007fe9e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdddc,	// (0x0007fe9e) list_single_cale_mrui_row_pane_g3

0x14c3,	// (0x00073585) list_single_recal_day_pane_g5_event_pane

0xdfbc,	// (0x0008007e) list_single_recal_day_pane_g7

0xe549,	// (0x0008060b) list_recal_day_event_pane_cp01

0xe552,	// (0x00080614) list_recal_vselct_arw_lo_pane_cp01

0xe55a,	// (0x0008061c) list_recal_vselct_arw_up_pane_cp01

0xe562,	// (0x00080624) list_recal_vselct_pane_cp01

0xcc59,	// (0x0007ed1b) list_recal_day_event_pane_cp01_g1

0xe56c,	// (0x0008062e) list_recal_day_event_pane_cp01_t1

0xdfc4,	// (0x00080086) list_single_recal_day_pane_t1_ParamLimits

0xdfd6,	// (0x00080098) list_single_recal_day_pane_t2_ParamLimits

0xfce8,	// (0x00081daa) list_single_recal_day_pane_t_ParamLimits

0x1f87,	// (0x00074049) bg_notes_pane_ParamLimits

0x21bc,	// (0x0007427e) list_notes_pane_ParamLimits

0x21ca,	// (0x0007428c) scroll_pane_cp06_ParamLimits

0x21f2,	// (0x000742b4) main_notes_pane_ParamLimits

0x1855,	// (0x00073917) main_welc_pane

0x9f68,	// (0x0007c02a) main_welc_body_pane_ParamLimits

0x9f68,	// (0x0007c02a) main_welc_body_pane

0x9f86,	// (0x0007c048) main_welc_opti_pane_ParamLimits

0x9f86,	// (0x0007c048) main_welc_opti_pane

0xa001,	// (0x0007c0c3) main_welc_pane_t1_ParamLimits

0xa001,	// (0x0007c0c3) main_welc_pane_t1

0xa1e5,	// (0x0007c2a7) main_welc_body_row_pane_ParamLimits

0xa1e5,	// (0x0007c2a7) main_welc_body_row_pane

0x1ff4,	// (0x000740b6) main_welc_opti_row_pane_ParamLimits

0x1ff4,	// (0x000740b6) main_welc_opti_row_pane

0xe58a,	// (0x0008064c) main_welc_opti_row_pane_g1

0xa1f9,	// (0x0007c2bb) main_welc_opti_row_pane_t1

0xe592,	// (0x00080654) main_welc_body_row_pane_t1

0xe251,	// (0x00080313) popup_notif_wgt_heading_pane

0xe26b,	// (0x0008032d) aid_size_list_notif_wgt_del_ParamLimits

0xe278,	// (0x0008033a) list_notif_wgt_row_pane_g1_ParamLimits

0xe284,	// (0x00080346) list_notif_wgt_row_pane_g2_ParamLimits

0xe293,	// (0x00080355) list_notif_wgt_row_pane_g3_ParamLimits

0xfd4f,	// (0x00081e11) list_notif_wgt_row_pane_g_ParamLimits

0xe2a0,	// (0x00080362) list_notif_wgt_row_pane_t1_ParamLimits

0xe2b6,	// (0x00080378) list_notif_wgt_row_pane_t2_ParamLimits

0xe2c8,	// (0x0008038a) list_notif_wgt_row_pane_t3_ParamLimits

0xfd56,	// (0x00081e18) list_notif_wgt_row_pane_t_ParamLimits

0x9a00,	// (0x0007bac2) listrow_wgtman_pane_g1_ParamLimits

0x9a0d,	// (0x0007bacf) listrow_wgtman_pane_g2_ParamLimits

0xfd86,	// (0x00081e48) listrow_wgtman_pane_g_ParamLimits

0x14fe,	// (0x000735c0) listrow_wgtman_pane_t1_ParamLimits

0x1516,	// (0x000735d8) listrow_wgtman_pane_t2_ParamLimits

0xfd8b,	// (0x00081e4d) listrow_wgtman_pane_t_ParamLimits

0x153c,	// (0x000735fe) wait_bar_pane_cp09_ParamLimits

0x162a,	// (0x000736ec) bg_popup_heading_pane_cp02

0xe5a1,	// (0x00080663) popup_notif_wgt_heading_pane_g1

0xe5a9,	// (0x0008066b) popup_notif_wgt_heading_pane_t1

0x162a,	// (0x000736ec) main_vids_pane

0x162a,	// (0x000736ec) vids_listscroll_pane

0xa208,	// (0x0007c2ca) scroll_pane_cp040

0x162a,	// (0x000736ec) vids_list_pane

0xa213,	// (0x0007c2d5) vids_list_double_pane_ParamLimits

0xa213,	// (0x0007c2d5) vids_list_double_pane

0xa224,	// (0x0007c2e6) vids_list_double_pane_g1

0xa22d,	// (0x0007c2ef) vids_list_double_pane_t1

0xa23d,	// (0x0007c2ff) vids_list_double_pane_t2

0x0001,

0xfe24,	// (0x00081ee6) vids_list_double_pane_t

0x1855,	// (0x00073917) main_ncimui_pane_ParamLimits

0x8869,	// (0x0007a92b) main_ncimui_pane_g1_ParamLimits

0x8875,	// (0x0007a937) main_ncimui_pane_g2_ParamLimits

0x8875,	// (0x0007a937) main_ncimui_pane_g2

0x0001,

0xfb09,	// (0x00081bcb) main_ncimui_pane_g_ParamLimits

0xfb09,	// (0x00081bcb) main_ncimui_pane_g

0x9fa1,	// (0x0007c063) main_welc_pane_g1_ParamLimits

0x9fa1,	// (0x0007c063) main_welc_pane_g1

0x9fb6,	// (0x0007c078) main_welc_pane_g2_ParamLimits

0x9fb6,	// (0x0007c078) main_welc_pane_g2

0x0003,

0xfe0e,	// (0x00081ed0) main_welc_pane_g_ParamLimits

0xfe0e,	// (0x00081ed0) main_welc_pane_g

0x21a2,	// (0x00074264) listscroll_mce_pane_ParamLimits

0x4a54,	// (0x00076b16) wait_bar_pane_cp10

0xbc36,	// (0x0007dcf8) main_cale_day_pane_ParamLimits

0xbc36,	// (0x0007dcf8) main_cale_week_pane_ParamLimits

0x1f87,	// (0x00074049) main_messa_pane_ParamLimits

0x65d8,	// (0x0007869a) main_clock2_btn_pane_ParamLimits

0x65d8,	// (0x0007869a) main_clock2_btn_pane

0xc4db,	// (0x0007e59d) main_clock2_btn_pane_cp01_ParamLimits

0xc4db,	// (0x0007e59d) main_clock2_btn_pane_cp01

0xdd68,	// (0x0007fe2a) list_cale_mrui_pane_ParamLimits

0xe30c,	// (0x000803ce) main_cf0_pane_g2

0x0001,

0xfd5d,	// (0x00081e1f) main_cf0_pane_g

0x9c06,	// (0x0007bcc8) area_left_week_number_pane_ParamLimits

0x9c12,	// (0x0007bcd4) area_top_day_name_pane_ParamLimits

0x9c25,	// (0x0007bce7) frame_month_view_pane_ParamLimits

0xe425,	// (0x000804e7) grid_month_view_pane_ParamLimits

0xe433,	// (0x000804f5) frm_month_g1_ParamLimits

0x9ca6,	// (0x0007bd68) frm_month_g2_ParamLimits

0x9cb9,	// (0x0007bd7b) frm_month_g3_ParamLimits

0x9ccc,	// (0x0007bd8e) frm_month_g4_ParamLimits

0x9cdf,	// (0x0007bda1) frm_month_g5_ParamLimits

0x9cf2,	// (0x0007bdb4) frm_month_g6_ParamLimits

0x9d05,	// (0x0007bdc7) frm_month_g7_ParamLimits

0xe440,	// (0x00080502) frm_month_g8_ParamLimits

0x9d18,	// (0x0007bdda) frm_month_g9_ParamLimits

0x9d28,	// (0x0007bdea) frm_month_g10_ParamLimits

0x9d38,	// (0x0007bdfa) frm_month_g11_ParamLimits

0x9d48,	// (0x0007be0a) frm_month_g12_ParamLimits

0x9d5a,	// (0x0007be1c) frm_month_g13_ParamLimits

0x9d6c,	// (0x0007be2e) frm_month_g14_ParamLimits

0x9d80,	// (0x0007be42) frm_month_g15_ParamLimits

0x9d94,	// (0x0007be56) frm_month_g16_ParamLimits

0xfdb5,	// (0x00081e77) frm_month_g_ParamLimits

0xe44d,	// (0x0008050f) cell_top_day_name_pane_t1_ParamLimits

0x9da8,	// (0x0007be6a) cell_area_left_week_number_pane_g1_ParamLimits

0x9db4,	// (0x0007be76) cell_area_left_week_number_pane_t1_ParamLimits

0x2002,	// (0x000740c4) cell_month_view_pane_g1_ParamLimits

0x9dc7,	// (0x0007be89) cell_month_view_pane_t1_ParamLimits

0x1f7f,	// (0x00074041) main_clock2_btn_pane_g1

0xe5b7,	// (0x00080679) main_clock2_btn_pane_t1

0x1855,	// (0x00073917) listscroll_cmail_pane_ParamLimits

0xd929,	// (0x0007f9eb) main_sp_fs_email_pane_g1_ParamLimits

0xd935,	// (0x0007f9f7) main_sp_fs_email_pane_g2_ParamLimits

0xfc08,	// (0x00081cca) main_sp_fs_email_pane_g_ParamLimits

0xdf2c,	// (0x0007ffee) list_recal_day_pane_ParamLimits

0xdf3d,	// (0x0007ffff) mian_recal_day_pane_t1

0x1310,	// (0x000733d2) list_single_dyc_row_text_pane_t4_ParamLimits

0x1310,	// (0x000733d2) list_single_dyc_row_text_pane_t4

0x1359,	// (0x0007341b) list_single_dyc_row_text_pane_t5_ParamLimits

0x1359,	// (0x0007341b) list_single_dyc_row_text_pane_t5

0xda01,	// (0x0007fac3) list_single_dyc_row_text_pane_t6_ParamLimits

0xda01,	// (0x0007fac3) list_single_dyc_row_text_pane_t6

0x4087,	// (0x00076149) aid_mgn_list_cale_time_pane

0x1855,	// (0x00073917) main_gallery2_pane_ParamLimits

0xc4f1,	// (0x0007e5b3) main_clock2_pane_cp01_t1

0xc501,	// (0x0007e5c3) main_clock2_pane_cp01_t3

0x0001,

0xf72d,	// (0x000817ef) main_clock2_pane_cp01_t

0x26c5,	// (0x00074787) cale_week_scroll_pane_g16_ParamLimits

0x26c5,	// (0x00074787) cale_week_scroll_pane_g16

0x2ac6,	// (0x00074b88) vorec_slider_pane

0xe533,	// (0x000805f5) vidtel_button_pane_t1_ParamLimits

0x95ec,	// (0x0007b6ae) main_fs_bigclock_clock_pane_g1_ParamLimits

0x95ec,	// (0x0007b6ae) main_fs_bigclock_clock_pane_g2_ParamLimits

0x95fd,	// (0x0007b6bf) main_fs_bigclock_clock_pane_g3_ParamLimits

0x95fd,	// (0x0007b6bf) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0b,	// (0x00081dcd) main_fs_bigclock_clock_pane_g_ParamLimits

0x9610,	// (0x0007b6d2) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9626,	// (0x0007b6e8) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd14,	// (0x00081dd6) main_fs_bigclock_clock_pane_t_ParamLimits

0x5ead,	// (0x00077f6f) main_mup3_lyrics_pane_ParamLimits

0x5ead,	// (0x00077f6f) main_mup3_lyrics_pane

0xa273,	// (0x0007c335) main_mup3_lyrics_pane_t1_ParamLimits

0xa273,	// (0x0007c335) main_mup3_lyrics_pane_t1

0xe922,	// (0x000809e4) aid_main_mp4_pane_t1_area

0xe92c,	// (0x000809ee) aid_main_mp4_pane_t2_area

0xe9d8,	// (0x00080a9a) main_mp4_pane_g7_ParamLimits

0xe9d8,	// (0x00080a9a) main_mp4_pane_g7

0xe9e4,	// (0x00080aa6) main_mp4_pane_g8_ParamLimits

0xe9e4,	// (0x00080aa6) main_mp4_pane_g8

0x6f90,	// (0x00079052) aid_call6_pane_g1_size

0x9f17,	// (0x0007bfd9) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9f17,	// (0x0007bfd9) list_double_large_graphic_phob2_other_pane

0x403f,	// (0x00076101) list_double_large_graphic_phob2_other_pane_g1

0x162a,	// (0x000736ec) list_highlight_pane_cp026

0x1855,	// (0x00073917) main_welc_pane_ParamLimits

0x9027,	// (0x0007b0e9) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9027,	// (0x0007b0e9) main_sp_fs_ctrlbar_pane_g3

0x9041,	// (0x0007b103) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9041,	// (0x0007b103) main_sp_fs_ctrlbar_pane_g4

0x9075,	// (0x0007b137) toolbar2_fixed_button_pane_cp01

0x9080,	// (0x0007b142) toolbar2_fixed_button_pane_cp02

0x908d,	// (0x0007b14f) toolbar2_fixed_button_pane_cp03

0x9f4c,	// (0x0007c00e) list_welc_entry_pane_ParamLimits

0x9f4c,	// (0x0007c00e) list_welc_entry_pane

0x9fcb,	// (0x0007c08d) main_welc_pane_g3_ParamLimits

0x9fcb,	// (0x0007c08d) main_welc_pane_g3

0xa01f,	// (0x0007c0e1) main_welc_pane_t2_ParamLimits

0xa01f,	// (0x0007c0e1) main_welc_pane_t2

0xa039,	// (0x0007c0fb) main_welc_pane_t3_ParamLimits

0xa039,	// (0x0007c0fb) main_welc_pane_t3

0x0005,

0xfe17,	// (0x00081ed9) main_welc_pane_t_ParamLimits

0xfe17,	// (0x00081ed9) main_welc_pane_t

0xa168,	// (0x0007c22a) welc_button_pane_ParamLimits

0xa168,	// (0x0007c22a) welc_button_pane

0xa1d0,	// (0x0007c292) welc_service_logo_pane_ParamLimits

0xa1d0,	// (0x0007c292) welc_service_logo_pane

0xa28f,	// (0x0007c351) list_single_welc_entry_pane_ParamLimits

0xa28f,	// (0x0007c351) list_single_welc_entry_pane

0xa2a0,	// (0x0007c362) list_single_welc_entry_pane_g1

0xa2a8,	// (0x0007c36a) list_single_welc_entry_pane_t1

0xa2b6,	// (0x0007c378) list_single_welc_entry_pane_t2

0x0001,

0xfe29,	// (0x00081eeb) list_single_welc_entry_pane_t

0x162a,	// (0x000736ec) bg_button_pane_cp035

0xe5c5,	// (0x00080687) welc_button_pane_t1

0xe5d3,	// (0x00080695) welc_service_logo_pane_g1

0xe5dc,	// (0x0008069e) welc_service_logo_pane_g2

0x0001,

0xfe2e,	// (0x00081ef0) welc_service_logo_pane_g

0x162a,	// (0x000736ec) main_int_radio_pane

0x2356,	// (0x00074418) list_single_fs_dyc_pane_g1

0x155a,	// (0x0007361c) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x155a,	// (0x0007361c) list_double_large_graphic_phob2_pane_g3

0x9e7e,	// (0x0007bf40) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9e7e,	// (0x0007bf40) list_double_large_graphic_phob2_pane_g4

0xa2c4,	// (0x0007c386) main_int_radio1_pane_ParamLimits

0xa2c4,	// (0x0007c386) main_int_radio1_pane

0xe5e5,	// (0x000806a7) find_pane_cp02

0xa2e1,	// (0x0007c3a3) input_focus_pane_cp12_ParamLimits

0xa2e1,	// (0x0007c3a3) input_focus_pane_cp12

0xa2f1,	// (0x0007c3b3) input_focus_pane_cp13_ParamLimits

0xa2f1,	// (0x0007c3b3) input_focus_pane_cp13

0xa305,	// (0x0007c3c7) input_focus_pane_cp14_ParamLimits

0xa305,	// (0x0007c3c7) input_focus_pane_cp14

0xe5ee,	// (0x000806b0) int_radio1_listscroll_pane

0xa319,	// (0x0007c3db) main_int_radio1_pane_g1_ParamLimits

0xa319,	// (0x0007c3db) main_int_radio1_pane_g1

0xa331,	// (0x0007c3f3) main_int_radio1_pane_t1_ParamLimits

0xa331,	// (0x0007c3f3) main_int_radio1_pane_t1

0xa34c,	// (0x0007c40e) main_int_radio1_pane_t2_ParamLimits

0xa34c,	// (0x0007c40e) main_int_radio1_pane_t2

0xa367,	// (0x0007c429) main_int_radio1_pane_t3_ParamLimits

0xa367,	// (0x0007c429) main_int_radio1_pane_t3

0xa382,	// (0x0007c444) main_int_radio1_pane_t4_ParamLimits

0xa382,	// (0x0007c444) main_int_radio1_pane_t4

0xe5f8,	// (0x000806ba) main_int_radio1_pane_t5_ParamLimits

0xe5f8,	// (0x000806ba) main_int_radio1_pane_t5

0xa394,	// (0x0007c456) main_int_radio1_pane_t6_ParamLimits

0xa394,	// (0x0007c456) main_int_radio1_pane_t6

0xa3a9,	// (0x0007c46b) main_int_radio1_pane_t7_ParamLimits

0xa3a9,	// (0x0007c46b) main_int_radio1_pane_t7

0xa3be,	// (0x0007c480) main_int_radio1_pane_t8_ParamLimits

0xa3be,	// (0x0007c480) main_int_radio1_pane_t8

0xa3dd,	// (0x0007c49f) main_int_radio1_pane_t9_ParamLimits

0xa3dd,	// (0x0007c49f) main_int_radio1_pane_t9

0xa3ef,	// (0x0007c4b1) main_int_radio1_pane_t10_ParamLimits

0xa3ef,	// (0x0007c4b1) main_int_radio1_pane_t10

0xa415,	// (0x0007c4d7) main_int_radio1_pane_t11_ParamLimits

0xa415,	// (0x0007c4d7) main_int_radio1_pane_t11

0xa43b,	// (0x0007c4fd) main_int_radio1_pane_t12_ParamLimits

0xa43b,	// (0x0007c4fd) main_int_radio1_pane_t12

0x000b,

0xfe33,	// (0x00081ef5) main_int_radio1_pane_t_ParamLimits

0xfe33,	// (0x00081ef5) main_int_radio1_pane_t

0xe60a,	// (0x000806cc) int_radio_list_pane

0xe468,	// (0x0008052a) scroll_pane_cp037

0xe612,	// (0x000806d4) list_double_large_graphic_int_radio_pane_ParamLimits

0xe612,	// (0x000806d4) list_double_large_graphic_int_radio_pane

0xe62a,	// (0x000806ec) list_double_large_graphic_int_radio_pane_g1

0xe633,	// (0x000806f5) list_double_large_graphic_int_radio_pane_t1

0xe641,	// (0x00080703) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe4c,	// (0x00081f0e) list_double_large_graphic_int_radio_pane_t

0x162a,	// (0x000736ec) list_highlight_pane_cp027

0xe57a,	// (0x0008063c) main_button_pane_4

0x9fdb,	// (0x0007c09d) main_welc_pane_g4_ParamLimits

0x9fdb,	// (0x0007c09d) main_welc_pane_g4

0xa051,	// (0x0007c113) main_welc_pane_t4_ParamLimits

0xa051,	// (0x0007c113) main_welc_pane_t4

0xa068,	// (0x0007c12a) main_welc_pane_t5_ParamLimits

0xa068,	// (0x0007c12a) main_welc_pane_t5

0xa0a5,	// (0x0007c167) main_welc_pane_t6_ParamLimits

0xa0a5,	// (0x0007c167) main_welc_pane_t6

0xa17f,	// (0x0007c241) welc_button_pane_2_ParamLimits

0xa17f,	// (0x0007c241) welc_button_pane_2

0xa19b,	// (0x0007c25d) welc_button_pane_3_ParamLimits

0xa19b,	// (0x0007c25d) welc_button_pane_3

0xe582,	// (0x00080644) welc_button_pane_4

0xa1ba,	// (0x0007c27c) welc_button_pane_5_ParamLimits

0xa1ba,	// (0x0007c27c) welc_button_pane_5

0x1658,	// (0x0007371a) main_popup_welc_pane

0xe65e,	// (0x00080720) main_welc_sk_g3

0xe668,	// (0x0008072a) main_welc_sk_g4

0xe672,	// (0x00080734) main_welc_sk_t3

0xe682,	// (0x00080744) main_welc_sk_t4

0xe692,	// (0x00080754) popup_welc_pane_t4

0xe6a0,	// (0x00080762) popup_welc_pane_t5

0xe6b0,	// (0x00080772) popup_welc_pane_t6

0x162a,	// (0x000736ec) main_acti_pane

0x162a,	// (0x000736ec) main_sso_pane

0xa44d,	// (0x0007c50f) sso_body_pane_ParamLimits

0xa44d,	// (0x0007c50f) sso_body_pane

0xa461,	// (0x0007c523) sso_logo_pane_ParamLimits

0xa461,	// (0x0007c523) sso_logo_pane

0xa48d,	// (0x0007c54f) sso_sk_pane_ParamLimits

0xa48d,	// (0x0007c54f) sso_sk_pane

0x2cb3,	// (0x00074d75) main_sso_logo_pane_g1

0xa49f,	// (0x0007c561) sso_sk_pane_t1_ParamLimits

0xa49f,	// (0x0007c561) sso_sk_pane_t1

0xa4b9,	// (0x0007c57b) sso_sk_pane_t2_ParamLimits

0xa4b9,	// (0x0007c57b) sso_sk_pane_t2

0x0001,

0xfe51,	// (0x00081f13) sso_sk_pane_t_ParamLimits

0xfe51,	// (0x00081f13) sso_sk_pane_t

0xe6ee,	// (0x000807b0) aid_sso_gap

0xe6f7,	// (0x000807b9) aid_sso_txt1

0xe701,	// (0x000807c3) aid_sso_txt2

0xe70b,	// (0x000807cd) aid_sso_txt3

0x0002,

0xfe56,	// (0x00081f18) aid_sso_txt

0xe715,	// (0x000807d7) aid_sso_widget

0xa523,	// (0x0007c5e5) sso_btn_pane_ParamLimits

0xa523,	// (0x0007c5e5) sso_btn_pane

0xa5ab,	// (0x0007c66d) sso_option_pane_ParamLimits

0xa5ab,	// (0x0007c66d) sso_option_pane

0xa62b,	// (0x0007c6ed) sso_query_pane_ParamLimits

0xa62b,	// (0x0007c6ed) sso_query_pane

0xa681,	// (0x0007c743) sso_query_pane_cp01_ParamLimits

0xa681,	// (0x0007c743) sso_query_pane_cp01

0xa6db,	// (0x0007c79d) sso_t_hdr_pane_ParamLimits

0xa6db,	// (0x0007c79d) sso_t_hdr_pane

0xa6ff,	// (0x0007c7c1) sso_t_nml_pane_ParamLimits

0xa6ff,	// (0x0007c7c1) sso_t_nml_pane

0xe70b,	// (0x000807cd) sso_t_sub_pane

0xa46e,	// (0x0007c530) sso_popup_window_ParamLimits

0xa46e,	// (0x0007c530) sso_popup_window

0xa4cf,	// (0x0007c591) sso_apps_pane_ParamLimits

0xa4cf,	// (0x0007c591) sso_apps_pane

0xa4f9,	// (0x0007c5bb) sso_body_pane_g1

0xa503,	// (0x0007c5c5) sso_body_pane_t1

0xa513,	// (0x0007c5d5) sso_body_pane_t2

0x0001,

0xfe5d,	// (0x00081f1f) sso_body_pane_t

0xa575,	// (0x0007c637) sso_btn_pane_cp01_ParamLimits

0xa575,	// (0x0007c637) sso_btn_pane_cp01

0xa5ff,	// (0x0007c6c1) sso_prog_pane_ParamLimits

0xa5ff,	// (0x0007c6c1) sso_prog_pane

0xe71f,	// (0x000807e1) sso_t_hdr_pane_t1_ParamLimits

0xe71f,	// (0x000807e1) sso_t_hdr_pane_t1

0xe732,	// (0x000807f4) input_focus_pane_cp10_ParamLimits

0xe732,	// (0x000807f4) input_focus_pane_cp10

0xe748,	// (0x0008080a) sso_query_pane_t1_ParamLimits

0xe748,	// (0x0008080a) sso_query_pane_t1

0xe75b,	// (0x0008081d) sso_query_pane_t2_ParamLimits

0xe75b,	// (0x0008081d) sso_query_pane_t2

0xe776,	// (0x00080838) sso_query_pane_t3_ParamLimits

0xe776,	// (0x00080838) sso_query_pane_t3

0xe7a0,	// (0x00080862) sso_query_pane_t4_ParamLimits

0xe7a0,	// (0x00080862) sso_query_pane_t4

0x0003,

0xfe62,	// (0x00081f24) sso_query_pane_t_ParamLimits

0xfe62,	// (0x00081f24) sso_query_pane_t

0x162a,	// (0x000736ec) bg_button_pane_cp22

0xe64f,	// (0x00080711) sso_btn_pane_t1

0xa755,	// (0x0007c817) sso_t_nml_pane_t1_ParamLimits

0xa755,	// (0x0007c817) sso_t_nml_pane_t1

0xe7c4,	// (0x00080886) sso_option_row_pane_ParamLimits

0xe7c4,	// (0x00080886) sso_option_row_pane

0xe7d1,	// (0x00080893) sso_t_sub_pane_t1_ParamLimits

0xe7d1,	// (0x00080893) sso_t_sub_pane_t1

0x1855,	// (0x00073917) bg_popup_window_pane_cp11_ParamLimits

0x1855,	// (0x00073917) bg_popup_window_pane_cp11

0xe7e4,	// (0x000808a6) popup_sk_window_cp01_ParamLimits

0xe7e4,	// (0x000808a6) popup_sk_window_cp01

0xe7f1,	// (0x000808b3) sso_popup_body_pane_ParamLimits

0xe7f1,	// (0x000808b3) sso_popup_body_pane

0xe7fe,	// (0x000808c0) scroll_pane_cp21_ParamLimits

0xe7fe,	// (0x000808c0) scroll_pane_cp21

0xe80b,	// (0x000808cd) sso_popup_body_t_pane_ParamLimits

0xe80b,	// (0x000808cd) sso_popup_body_t_pane

0xe818,	// (0x000808da) sso_popup_body_t_hdr_pane_ParamLimits

0xe818,	// (0x000808da) sso_popup_body_t_hdr_pane

0xe826,	// (0x000808e8) sso_popup_body_t_nml_pane_ParamLimits

0xe826,	// (0x000808e8) sso_popup_body_t_nml_pane

0xe841,	// (0x00080903) sso_popup_body_t_sub_pane_ParamLimits

0xe841,	// (0x00080903) sso_popup_body_t_sub_pane

0xe864,	// (0x00080926) sso_popup_body_t_hdr_pane_t1

0xa770,	// (0x0007c832) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa770,	// (0x0007c832) sso_popup_body_t_nml_pane_t1

0xe874,	// (0x00080936) sso_popup_body_t_sub_pane_t1_ParamLimits

0xe874,	// (0x00080936) sso_popup_body_t_sub_pane_t1

0x2cb3,	// (0x00074d75) sso_prog_pane_g1

0xa7a9,	// (0x0007c86b) sso_apps_pane_comp1_ParamLimits

0xa7a9,	// (0x0007c86b) sso_apps_pane_comp1

0xe899,	// (0x0008095b) sso_apps_pane_comp1_g1

0xe8a1,	// (0x00080963) sso_apps_pane_comp1_t1

0xe8af,	// (0x00080971) sso_option_row_pane_g1

0xe8b7,	// (0x00080979) sso_option_row_pane_t1

0x9f39,	// (0x0007bffb) bg_welc_area_ParamLimits

0x9f39,	// (0x0007bffb) bg_welc_area

0xa0e3,	// (0x0007c1a5) sso_t_hdr_pane_a_t1_ParamLimits

0xa0e3,	// (0x0007c1a5) sso_t_hdr_pane_a_t1

0xa0fe,	// (0x0007c1c0) sso_t_nml_pane_a_t1_ParamLimits

0xa0fe,	// (0x0007c1c0) sso_t_nml_pane_a_t1

0xa12d,	// (0x0007c1ef) sso_t_sub_pane_a_t1_ParamLimits

0xa12d,	// (0x0007c1ef) sso_t_sub_pane_a_t1

0xe64f,	// (0x00080711) sso_btn_pane_t1_copy1

0x162a,	// (0x000736ec) welc_button_pane_2_comp1

0xe6be,	// (0x00080780) sso_t_hdr_pane_p_t1

0xe6ce,	// (0x00080790) sso_t_nml_pane_p_t1

0xe6de,	// (0x000807a0) sso_t_sub_pane_p_t1
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
