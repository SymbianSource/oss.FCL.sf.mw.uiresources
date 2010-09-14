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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005dbe9 };

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
0x07d4,	// (0x0005e3bd) Screen

0x07e0,	// (0x0005e3c9) application_window

0x081c,	// (0x0005e405) area_bottom_pane_ParamLimits

0x081c,	// (0x0005e405) area_bottom_pane

0x0855,	// (0x0005e43e) area_top_pane_ParamLimits

0x0855,	// (0x0005e43e) area_top_pane

0x9e95,	// (0x00067a7e) call_video_uplink_pane_ParamLimits

0x9e95,	// (0x00067a7e) call_video_uplink_pane

0x08e3,	// (0x0005e4cc) main_pane_ParamLimits

0x08e3,	// (0x0005e4cc) main_pane

0xbe41,	// (0x00069a2a) context_pane

0x3bb5,	// (0x0006179e) navi_pane

0x3bec,	// (0x000617d5) popup_cale_events_window_ParamLimits

0x3bec,	// (0x000617d5) popup_cale_events_window

0xbe54,	// (0x00069a3d) popup_mup_playback_window

0x3c04,	// (0x000617ed) signal_pane

0xef71,	// (0x0006cb5a) main_browser_pane

0xa006,	// (0x00067bef) main_burst_pane

0x38bd,	// (0x000614a6) main_calc_pane

0xbddd,	// (0x000699c6) main_cale_day_pane

0x38d1,	// (0x000614ba) main_cale_month_pane

0xbddd,	// (0x000699c6) main_cale_week_pane

0xa006,	// (0x00067bef) main_call_pane

0xec29,	// (0x0006c812) main_call_poc_pane

0xa006,	// (0x00067bef) main_camera_pane

0xa006,	// (0x00067bef) main_chi_dic_pane

0xa8d0,	// (0x000684b9) main_clock_pane

0xec29,	// (0x0006c812) main_fmradio_pane

0xa006,	// (0x00067bef) main_graph_messa_pane

0xec29,	// (0x0006c812) main_help_pane

0xef71,	// (0x0006cb5a) main_im_pane

0xee84,	// (0x0006ca6d) main_image_pane_ParamLimits

0xee84,	// (0x0006ca6d) main_image_pane

0xec29,	// (0x0006c812) main_location2_pane

0xa006,	// (0x00067bef) main_location_pane

0xee84,	// (0x0006ca6d) main_messa_pane

0xec29,	// (0x0006c812) main_mp2_pane

0xa006,	// (0x00067bef) main_mp_pane

0xec29,	// (0x0006c812) main_msg_pane

0xec29,	// (0x0006c812) main_mup_eq_pane

0xec29,	// (0x0006c812) main_mup_pane

0xef71,	// (0x0006cb5a) main_notes_pane

0xec29,	// (0x0006c812) main_pec_pane

0xec29,	// (0x0006c812) main_phob_pane

0xec29,	// (0x0006c812) main_pinb_pane

0xec29,	// (0x0006c812) main_postcard_pane

0xec29,	// (0x0006c812) main_qdial_pane

0xa006,	// (0x00067bef) main_skin_pane

0xec29,	// (0x0006c812) main_smil2_pane

0xa006,	// (0x00067bef) main_smil_pane

0xa006,	// (0x00067bef) main_video_pane

0xa006,	// (0x00067bef) main_video_tele_pane

0xee84,	// (0x0006ca6d) main_viewer_pane_ParamLimits

0xee84,	// (0x0006ca6d) main_viewer_pane

0xa006,	// (0x00067bef) main_vorec_pane

0x3923,	// (0x0006150c) popup_blid_sat_info_window_ParamLimits

0x3923,	// (0x0006150c) popup_blid_sat_info_window

0x3987,	// (0x00061570) popup_dyc_status_message_window_ParamLimits

0x3987,	// (0x00061570) popup_dyc_status_message_window

0x39a1,	// (0x0006158a) popup_grid_large_graphic_window_ParamLimits

0x39a1,	// (0x0006158a) popup_grid_large_graphic_window

0x3a63,	// (0x0006164c) popup_loc_request_window_ParamLimits

0x3a63,	// (0x0006164c) popup_loc_request_window

0x3b89,	// (0x00061772) popup_wml_address_window_ParamLimits

0x3b89,	// (0x00061772) popup_wml_address_window

0x36fb,	// (0x000612e4) call_muted_g1

0x3349,	// (0x00060f32) popup_call_audio_conf_window_ParamLimits

0x3349,	// (0x00060f32) popup_call_audio_conf_window

0x370b,	// (0x000612f4) popup_call_audio_first_window_ParamLimits

0x370b,	// (0x000612f4) popup_call_audio_first_window

0x3781,	// (0x0006136a) popup_call_audio_in_window_ParamLimits

0x3781,	// (0x0006136a) popup_call_audio_in_window

0x37bd,	// (0x000613a6) popup_call_audio_out_window_ParamLimits

0x37bd,	// (0x000613a6) popup_call_audio_out_window

0x37f7,	// (0x000613e0) popup_call_audio_second_window_ParamLimits

0x37f7,	// (0x000613e0) popup_call_audio_second_window

0x384d,	// (0x00061436) popup_call_audio_wait_window_ParamLimits

0x384d,	// (0x00061436) popup_call_audio_wait_window

0x3882,	// (0x0006146b) popup_number_entry_window_ParamLimits

0x3882,	// (0x0006146b) popup_number_entry_window

0xe3e8,	// (0x0006bfd1) bg_popup_call_pane_cp05_ParamLimits

0xe3e8,	// (0x0006bfd1) bg_popup_call_pane_cp05

0xe408,	// (0x0006bff1) popup_number_entry_window_t1

0xe41b,	// (0x0006c004) popup_number_entry_window_t2

0xe42d,	// (0x0006c016) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x0006cc54) popup_number_entry_window_t

0xe474,	// (0x0006c05d) text_title_cp2

0xe487,	// (0x0006c070) bg_popup_call_pane_cp_ParamLimits

0xe487,	// (0x0006c070) bg_popup_call_pane_cp

0xe495,	// (0x0006c07e) call_thumbnail_pane

0xe49d,	// (0x0006c086) popup_call_audio_in_window_g1_ParamLimits

0xe49d,	// (0x0006c086) popup_call_audio_in_window_g1

0xe4a9,	// (0x0006c092) popup_call_audio_in_window_g2_ParamLimits

0xe4a9,	// (0x0006c092) popup_call_audio_in_window_g2

0xe4b5,	// (0x0006c09e) popup_call_audio_in_window_g3_ParamLimits

0xe4b5,	// (0x0006c09e) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0006cc5d) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0006cc5d) popup_call_audio_in_window_g

0xe4c1,	// (0x0006c0aa) popup_call_audio_in_window_t1_ParamLimits

0xe4c1,	// (0x0006c0aa) popup_call_audio_in_window_t1

0xe4dd,	// (0x0006c0c6) popup_call_audio_in_window_t2_ParamLimits

0xe4dd,	// (0x0006c0c6) popup_call_audio_in_window_t2

0xe4f9,	// (0x0006c0e2) popup_call_audio_in_window_t3_ParamLimits

0xe4f9,	// (0x0006c0e2) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0006cc64) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0006cc64) popup_call_audio_in_window_t

0xe487,	// (0x0006c070) bg_popup_call_pane_cp01_ParamLimits

0xe487,	// (0x0006c070) bg_popup_call_pane_cp01

0xe495,	// (0x0006c07e) call_thumbnail_pane_cp02

0xe50c,	// (0x0006c0f5) call_type_pane_cp022

0xe514,	// (0x0006c0fd) popup_call_audio_out_window_g1_ParamLimits

0xe514,	// (0x0006c0fd) popup_call_audio_out_window_g1

0xe526,	// (0x0006c10f) popup_call_audio_out_window_g2_ParamLimits

0xe526,	// (0x0006c10f) popup_call_audio_out_window_g2

0xe532,	// (0x0006c11b) popup_call_audio_out_window_g3_ParamLimits

0xe532,	// (0x0006c11b) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0006cc6b) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0006cc6b) popup_call_audio_out_window_g

0xe544,	// (0x0006c12d) popup_call_audio_out_window_t1_ParamLimits

0xe544,	// (0x0006c12d) popup_call_audio_out_window_t1

0xe55c,	// (0x0006c145) popup_call_audio_out_window_t2_ParamLimits

0xe55c,	// (0x0006c145) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0006cc72) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0006cc72) popup_call_audio_out_window_t

0xe571,	// (0x0006c15a) bg_popup_call_pane_ParamLimits

0xe571,	// (0x0006c15a) bg_popup_call_pane

0x0a6a,	// (0x0005e653) call_thumbnail_pane_cp_ParamLimits

0x0a6a,	// (0x0005e653) call_thumbnail_pane_cp

0xe5f5,	// (0x0006c1de) call_type_pane_cp01_ParamLimits

0xe5f5,	// (0x0006c1de) call_type_pane_cp01

0xe639,	// (0x0006c222) popup_call_audio_first_window_g1_ParamLimits

0xe639,	// (0x0006c222) popup_call_audio_first_window_g1

0xe685,	// (0x0006c26e) popup_call_audio_first_window_g2_ParamLimits

0xe685,	// (0x0006c26e) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x0006cc77) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x0006cc77) popup_call_audio_first_window_g

0xe6c9,	// (0x0006c2b2) popup_call_audio_first_window_t1_ParamLimits

0xe6c9,	// (0x0006c2b2) popup_call_audio_first_window_t1

0xeb6e,	// (0x0006c757) popup_call_audio_first_window_t4_ParamLimits

0xeb6e,	// (0x0006c757) popup_call_audio_first_window_t4

0xebfa,	// (0x0006c7e3) popup_call_audio_first_window_t5_ParamLimits

0xebfa,	// (0x0006c7e3) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0006cc7c) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0006cc7c) popup_call_audio_first_window_t

0xec29,	// (0x0006c812) bg_popup_call_pane_cp02

0xec33,	// (0x0006c81c) call_type_pane_cp023

0xec3b,	// (0x0006c824) popup_call_audio_wait_window_g1

0xec43,	// (0x0006c82c) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0006cc83) popup_call_audio_wait_window_g

0xec4b,	// (0x0006c834) popup_call_audio_wait_window_t3

0xec59,	// (0x0006c842) bg_popup_call_pane_cp03_ParamLimits

0xec59,	// (0x0006c842) bg_popup_call_pane_cp03

0xecb9,	// (0x0006c8a2) call_thumbnail_pane_cp011_ParamLimits

0xecb9,	// (0x0006c8a2) call_thumbnail_pane_cp011

0xecc5,	// (0x0006c8ae) call_type_pane_cp034_ParamLimits

0xecc5,	// (0x0006c8ae) call_type_pane_cp034

0xed01,	// (0x0006c8ea) popup_call_audio_second_window_g1_ParamLimits

0xed01,	// (0x0006c8ea) popup_call_audio_second_window_g1

0xed3d,	// (0x0006c926) popup_call_audio_second_window_g2_ParamLimits

0xed3d,	// (0x0006c926) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x0006cc88) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x0006cc88) popup_call_audio_second_window_g

0xed79,	// (0x0006c962) popup_call_audio_second_window_t1_ParamLimits

0xed79,	// (0x0006c962) popup_call_audio_second_window_t1

0xedfa,	// (0x0006c9e3) popup_call_audio_second_window_t2_ParamLimits

0xedfa,	// (0x0006c9e3) popup_call_audio_second_window_t2

0xee30,	// (0x0006ca19) popup_call_audio_second_window_t3_ParamLimits

0xee30,	// (0x0006ca19) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0006cc8d) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0006cc8d) popup_call_audio_second_window_t

0xec29,	// (0x0006c812) bg_popup_call_pane_cp04

0xee66,	// (0x0006ca4f) list_conf_pane

0xee6e,	// (0x0006ca57) popup_call_audio_conf_window_t1

0xee7c,	// (0x0006ca65) call_thumbnail_pane_g1

0xee84,	// (0x0006ca6d) bg_pinb_pane_ParamLimits

0xee84,	// (0x0006ca6d) bg_pinb_pane

0xee92,	// (0x0006ca7b) find_pinb_pane

0xee84,	// (0x0006ca6d) listscroll_pinb_pane_ParamLimits

0xee84,	// (0x0006ca6d) listscroll_pinb_pane

0xee9c,	// (0x0006ca85) pinb_bg_pane_g1

0xee9c,	// (0x0006ca85) pinb_bg_pane_g2

0xee9c,	// (0x0006ca85) pinb_bg_pane_g3

0xee9c,	// (0x0006ca85) pinb_bg_pane_g4

0xee9c,	// (0x0006ca85) pinb_bg_pane_g5

0xee9c,	// (0x0006ca85) pinb_bg_pane_g6

0xee9c,	// (0x0006ca85) pinb_bg_pane_g7

0xee9c,	// (0x0006ca85) pinb_bg_pane_g8

0xee9c,	// (0x0006ca85) pinb_bg_pane_g9

0xee9c,	// (0x0006ca85) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0006cc94) pinb_bg_pane_g

0xe3de,	// (0x0006bfc7) grid_pinb_pane

0xe3de,	// (0x0006bfc7) list_pinb_pane

0xe775,	// (0x0006c35e) scroll_pane_cp01_ParamLimits

0xe775,	// (0x0006c35e) scroll_pane_cp01

0xeea6,	// (0x0006ca8f) find_pinb_pane_g1_ParamLimits

0xeea6,	// (0x0006ca8f) find_pinb_pane_g1

0xeebe,	// (0x0006caa7) find_pinb_pane_t1

0xeed0,	// (0x0006cab9) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0006ccae) find_pinb_pane_t

0xeee5,	// (0x0006cace) input_focus_pane_cp01_ParamLimits

0xeee5,	// (0x0006cace) input_focus_pane_cp01

0xeef1,	// (0x0006cada) cell_pinb_pane_ParamLimits

0xeef1,	// (0x0006cada) cell_pinb_pane

0xeeff,	// (0x0006cae8) cell_pinb_pane_g1_ParamLimits

0xeeff,	// (0x0006cae8) cell_pinb_pane_g1

0xef0d,	// (0x0006caf6) cell_pinb_pane_g2_ParamLimits

0xef0d,	// (0x0006caf6) cell_pinb_pane_g2

0xef0d,	// (0x0006caf6) cell_pinb_pane_g3_ParamLimits

0xef0d,	// (0x0006caf6) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0006ccb3) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0006ccb3) cell_pinb_pane_g

0xec29,	// (0x0006c812) grid_highlight_pane_cp01

0xeef1,	// (0x0006cada) list_pinb_item_pane_ParamLimits

0xeef1,	// (0x0006cada) list_pinb_item_pane

0xe3de,	// (0x0006bfc7) list_highlight_pane_cp02

0xef1b,	// (0x0006cb04) list_pinb_item_pane_g1_ParamLimits

0xef1b,	// (0x0006cb04) list_pinb_item_pane_g1

0xef0d,	// (0x0006caf6) list_pinb_item_pane_g2_ParamLimits

0xef0d,	// (0x0006caf6) list_pinb_item_pane_g2

0xeeff,	// (0x0006cae8) list_pinb_item_pane_g3_ParamLimits

0xeeff,	// (0x0006cae8) list_pinb_item_pane_g3

0xef0d,	// (0x0006caf6) list_pinb_item_pane_g4_ParamLimits

0xef0d,	// (0x0006caf6) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0006ccba) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0006ccba) list_pinb_item_pane_g

0xef29,	// (0x0006cb12) list_pinb_item_pane_t1_ParamLimits

0xef29,	// (0x0006cb12) list_pinb_item_pane_t1

0x0aae,	// (0x0005e697) calc_display_pane

0x0ad3,	// (0x0005e6bc) calc_paper_pane

0x0af6,	// (0x0005e6df) grid_calc_pane

0xec29,	// (0x0006c812) bg_list_pane_cp01

0x0b24,	// (0x0005e70d) clock_g1

0x0b2c,	// (0x0005e715) clock_g2

0x0001,

0xf0da,	// (0x0006ccc3) clock_g

0x0b34,	// (0x0005e71d) clock_t1_ParamLimits

0x0b34,	// (0x0005e71d) clock_t1

0x0b49,	// (0x0005e732) clock_t2_ParamLimits

0x0b49,	// (0x0005e732) clock_t2

0x0b5b,	// (0x0005e744) clock_t3_ParamLimits

0x0b5b,	// (0x0005e744) clock_t3

0x0b6d,	// (0x0005e756) clock_t4_ParamLimits

0x0b6d,	// (0x0005e756) clock_t4

0x0b7f,	// (0x0005e768) clock_t5_ParamLimits

0x0b7f,	// (0x0005e768) clock_t5

0x0b94,	// (0x0005e77d) clock_t6_ParamLimits

0x0b94,	// (0x0005e77d) clock_t6

0x0ba6,	// (0x0005e78f) clock_t7_ParamLimits

0x0ba6,	// (0x0005e78f) clock_t7

0x0bb8,	// (0x0005e7a1) clock_t8_ParamLimits

0x0bb8,	// (0x0005e7a1) clock_t8

0x0bcc,	// (0x0005e7b5) clock_t9_ParamLimits

0x0bcc,	// (0x0005e7b5) clock_t9

0x0008,

0xf0df,	// (0x0006ccc8) clock_t_ParamLimits

0xf0df,	// (0x0006ccc8) clock_t

0xef3d,	// (0x0006cb26) popup_clock_analogue_window_cp02

0xef3d,	// (0x0006cb26) popup_clock_digital_window_cp01

0xec29,	// (0x0006c812) listscroll_help_pane

0xec29,	// (0x0006c812) phob_pre_status_pane

0xef45,	// (0x0006cb2e) grid_qdial_pane

0x0be2,	// (0x0005e7cb) listscroll_mce_pane

0xee84,	// (0x0006ca6d) bg_notes_pane

0xef4f,	// (0x0006cb38) list_notes_pane

0x0bfe,	// (0x0005e7e7) scroll_pane_cp06

0xef5d,	// (0x0006cb46) bg_calc_paper_pane

0x9ed3,	// (0x00067abc) list_calc_pane

0xef71,	// (0x0006cb5a) bg_calc_display_pane

0x0c12,	// (0x0005e7fb) calc_display_pane_t1

0x0c24,	// (0x0005e80d) calc_display_pane_t2

0x9eed,	// (0x00067ad6) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0006ccdb) calc_display_pane_t

0x0c36,	// (0x0005e81f) cell_calc_pane_ParamLimits

0x0c36,	// (0x0005e81f) cell_calc_pane

0xef7d,	// (0x0006cb66) bg_calc_paper_pane_g1

0xef89,	// (0x0006cb72) bg_calc_paper_pane_g2

0xef95,	// (0x0006cb7e) bg_calc_paper_pane_g3

0xefa1,	// (0x0006cb8a) bg_calc_paper_pane_g4

0xefad,	// (0x0006cb96) bg_calc_paper_pane_g5

0x0c71,	// (0x0005e85a) bg_calc_paper_pane_g6

0x0c7f,	// (0x0005e868) bg_calc_paper_pane_g7

0x0c8d,	// (0x0005e876) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0006cce2) bg_calc_paper_pane_g

0x0ca0,	// (0x0005e889) calc_bg_paper_pane_g9

0x0cb3,	// (0x0005e89c) list_calc_item_pane_ParamLimits

0x0cb3,	// (0x0005e89c) list_calc_item_pane

0xefb9,	// (0x0006cba2) list_calc_item_pane_g1

0x9eff,	// (0x00067ae8) list_calc_item_pane_t1_ParamLimits

0x9eff,	// (0x00067ae8) list_calc_item_pane_t1

0x0ccb,	// (0x0005e8b4) list_calc_item_pane_t2_ParamLimits

0x0ccb,	// (0x0005e8b4) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0006ccf3) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0006ccf3) list_calc_item_pane_t

0xee9c,	// (0x0006ca85) cell_calc_pane_g1

0xefc6,	// (0x0006cbaf) grid_highlight_pane_cp02

0x0cfd,	// (0x0005e8e6) bg_calc_display_pane_g1

0x0d06,	// (0x0005e8ef) bg_calc_display_pane_g2

0xefe8,	// (0x0006cbd1) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0006ccfd) bg_calc_display_pane_g

0x0d10,	// (0x0005e8f9) cell_qdial_pane_ParamLimits

0x0d10,	// (0x0005e8f9) cell_qdial_pane

0x0d24,	// (0x0005e90d) cell_qdial_pane_g1_ParamLimits

0x0d24,	// (0x0005e90d) cell_qdial_pane_g1

0x0d3a,	// (0x0005e923) cell_qdial_pane_g2_ParamLimits

0x0d3a,	// (0x0005e923) cell_qdial_pane_g2

0xeff1,	// (0x0006cbda) cell_qdial_pane_g3_ParamLimits

0xeff1,	// (0x0006cbda) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x0006cd04) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x0006cd04) cell_qdial_pane_g

0x0d61,	// (0x0005e94a) cell_qdial_pane_t1_ParamLimits

0x0d61,	// (0x0005e94a) cell_qdial_pane_t1

0x0d79,	// (0x0005e962) cell_qdial_pane_t2_ParamLimits

0x0d79,	// (0x0005e962) cell_qdial_pane_t2

0x0d8c,	// (0x0005e975) cell_qdial_pane_t3_ParamLimits

0x0d8c,	// (0x0005e975) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0006cd0d) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0006cd0d) cell_qdial_pane_t

0xec29,	// (0x0006c812) grid_highlight_pane_cp04

0xeffd,	// (0x0006cbe6) thumbnail_qdial_pane_ParamLimits

0xeffd,	// (0x0006cbe6) thumbnail_qdial_pane

0xf059,	// (0x0006cc42) list_help_pane

0xf062,	// (0x0006cc4b) scroll_pane_cp02

0x0d9f,	// (0x0005e988) help_list_pane_t1_ParamLimits

0x0d9f,	// (0x0005e988) help_list_pane_t1

0x9f11,	// (0x00067afa) bg_notes_pane_g2

0x9f19,	// (0x00067b02) bg_notes_pane_g3

0x9f21,	// (0x00067b0a) notes_bg_pane_g1

0x9f29,	// (0x00067b12) notes_bg_pane_g4

0x9f31,	// (0x00067b1a) notes_bg_pane_g5

0x9f39,	// (0x00067b22) notes_bg_pane_g6

0x9f41,	// (0x00067b2a) notes_bg_pane_g7

0x9f49,	// (0x00067b32) notes_bg_pane_g8

0x9f51,	// (0x00067b3a) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0006cd2b) notes_bg_pane_g

0x0dc3,	// (0x0005e9ac) list_notes_text_pane_ParamLimits

0x0dc3,	// (0x0005e9ac) list_notes_text_pane

0x9f59,	// (0x00067b42) list_notes_text_pane_g1

0x0dda,	// (0x0005e9c3) list_notes_text_pane_t1

0x0de8,	// (0x0005e9d1) listscroll_cale_week_pane

0x0e12,	// (0x0005e9fb) bg_cale_heading_pane

0x0e36,	// (0x0005ea1f) bg_cale_pane_cp01

0x0e53,	// (0x0005ea3c) cale_week_corner_pane

0x0e72,	// (0x0005ea5b) cale_week_day_heading_pane

0x0e9b,	// (0x0005ea84) cale_week_scroll_pane_g1

0x0eba,	// (0x0005eaa3) cale_week_scroll_pane_g2

0x0ed2,	// (0x0005eabb) cale_week_scroll_pane_g3

0x0eea,	// (0x0005ead3) cale_week_scroll_pane_g4

0x0f02,	// (0x0005eaeb) cale_week_scroll_pane_g5

0x0f22,	// (0x0005eb0b) cale_week_scroll_pane_g6

0x0f42,	// (0x0005eb2b) cale_week_scroll_pane_g7

0x0f66,	// (0x0005eb4f) cale_week_scroll_pane_g8

0x0f8a,	// (0x0005eb73) cale_week_scroll_pane_g9

0x0fa2,	// (0x0005eb8b) cale_week_scroll_pane_g10

0x0fba,	// (0x0005eba3) cale_week_scroll_pane_g11

0x0fd2,	// (0x0005ebbb) cale_week_scroll_pane_g12

0x0ff6,	// (0x0005ebdf) cale_week_scroll_pane_g13

0x0ff6,	// (0x0005ebdf) cale_week_scroll_pane_g14

0x0ff6,	// (0x0005ebdf) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x0006cd3a) cale_week_scroll_pane_g

0x103e,	// (0x0005ec27) cale_week_time_pane

0x1062,	// (0x0005ec4b) grid_cale_week_pane

0x9f8e,	// (0x00067b77) scroll_pane_cp08

0x1094,	// (0x0005ec7d) cell_cale_week_pane_ParamLimits

0x1094,	// (0x0005ec7d) cell_cale_week_pane

0x1130,	// (0x0005ed19) cale_week_day_heading_pane_t1

0x115a,	// (0x0005ed43) cale_week_day_heading_pane_t2

0x1189,	// (0x0005ed72) cale_week_day_heading_pane_t3

0x11b8,	// (0x0005eda1) cale_week_day_heading_pane_t4

0x11e7,	// (0x0005edd0) cale_week_day_heading_pane_t5

0x121a,	// (0x0005ee03) cale_week_day_heading_pane_t6

0x1251,	// (0x0005ee3a) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x0006cd5b) cale_week_day_heading_pane_t

0x9fab,	// (0x00067b94) bg_cale_side_pane

0x127b,	// (0x0005ee64) cale_week_time_pane_t1

0x1295,	// (0x0005ee7e) cale_week_time_pane_t2

0x12af,	// (0x0005ee98) cale_week_time_pane_t3

0x12c9,	// (0x0005eeb2) cale_week_time_pane_t4

0x12e3,	// (0x0005eecc) cale_week_time_pane_t5

0x12fd,	// (0x0005eee6) cale_week_time_pane_t6

0x131d,	// (0x0005ef06) cale_week_time_pane_t7

0x1343,	// (0x0005ef2c) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x0006cd6a) cale_week_time_pane_t

0x1369,	// (0x0005ef52) cell_cale_week_pane_g2

0x138d,	// (0x0005ef76) cell_cale_week_pane_g3_ParamLimits

0x138d,	// (0x0005ef76) cell_cale_week_pane_g3

0x9fb9,	// (0x00067ba2) grid_highlight_pane_cp07

0x9fc1,	// (0x00067baa) listscroll_gms_pane

0x9fcb,	// (0x00067bb4) grid_gms_pane

0x9fd4,	// (0x00067bbd) listscroll_gms_pane_g1

0x9fdc,	// (0x00067bc5) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x0006cd7b) listscroll_gms_pane_g

0x13a5,	// (0x0005ef8e) scroll_pane_cp010

0x13b0,	// (0x0005ef99) cell_gms_pane_ParamLimits

0x13b0,	// (0x0005ef99) cell_gms_pane

0x13c7,	// (0x0005efb0) cell_gms_pane_g1

0x9fe4,	// (0x00067bcd) cell_gms_pane_g2

0x9fec,	// (0x00067bd5) cell_gms_pane_g3

0x9ff5,	// (0x00067bde) cell_gms_pane_g4

0x0003,

0xf197,	// (0x0006cd80) cell_gms_pane_g

0x9ffe,	// (0x00067be7) grid_highlight_pane_cp09

0x367f,	// (0x00061268) phob_pre_status_pane_g1

0x3687,	// (0x00061270) phob_pre_status_pane_g2

0x368f,	// (0x00061278) phob_pre_status_pane_g3

0x3697,	// (0x00061280) phob_pre_status_pane_g4

0x0004,

0xf55b,	// (0x0006d144) phob_pre_status_pane_g

0x36a7,	// (0x00061290) phob_pre_status_pane_t1

0x36b7,	// (0x000612a0) phob_pre_status_pane_t2

0x36c7,	// (0x000612b0) phob_pre_status_pane_t3

0x0002,

0xf566,	// (0x0006d14f) phob_pre_status_pane_t

0xa006,	// (0x00067bef) bg_list_pane_cp05

0x13d7,	// (0x0005efc0) grid_vorec_pane

0x13e1,	// (0x0005efca) vorec_t1

0x13ef,	// (0x0005efd8) vorec_t2

0x13fd,	// (0x0005efe6) vorec_t3

0x140b,	// (0x0005eff4) vorec_t4

0x98b6,	// (0x0006749f) vorec_t5

0x98c4,	// (0x000674ad) vorec_t6

0x0004,

0xf1a0,	// (0x0006cd89) vorec_t

0x98d2,	// (0x000674bb) wait_bar_pane_cp01

0xa00e,	// (0x00067bf7) cell_vorec_pane_ParamLimits

0xa00e,	// (0x00067bf7) cell_vorec_pane

0xa023,	// (0x00067c0c) cell_vorec_pane_g1

0xec29,	// (0x0006c812) grid_highlight_pane_cp05

0xe775,	// (0x0006c35e) cams_zoom_pane

0xe775,	// (0x0006c35e) image_vga_pane

0xeeff,	// (0x0006cae8) main_camera_pane_g1

0xeeff,	// (0x0006cae8) main_camera_pane_g2

0xeeff,	// (0x0006cae8) main_camera_pane_g3

0xeeff,	// (0x0006cae8) main_camera_pane_g4

0xeeff,	// (0x0006cae8) main_camera_pane_g5

0xeeff,	// (0x0006cae8) main_camera_pane_g6

0xeeff,	// (0x0006cae8) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x0006cd94) main_camera_pane_g

0xa02d,	// (0x00067c16) main_camera_pane_t1

0xa02d,	// (0x00067c16) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x0006cda5) main_camera_pane_t

0x143b,	// (0x0005f024) cams_zoom_pane_cp_ParamLimits

0x143b,	// (0x0005f024) cams_zoom_pane_cp

0x146f,	// (0x0005f058) image_cif_pane_ParamLimits

0x146f,	// (0x0005f058) image_cif_pane

0xe3de,	// (0x0006bfc7) image_subqcif_pane

0x1481,	// (0x0005f06a) main_video_pane_g1_ParamLimits

0x1481,	// (0x0005f06a) main_video_pane_g1

0x14af,	// (0x0005f098) main_video_pane_g2_ParamLimits

0x14af,	// (0x0005f098) main_video_pane_g2

0x14e9,	// (0x0005f0d2) main_video_pane_g3_ParamLimits

0x14e9,	// (0x0005f0d2) main_video_pane_g3

0x14e9,	// (0x0005f0d2) main_video_pane_g4_ParamLimits

0x14e9,	// (0x0005f0d2) main_video_pane_g4

0x151d,	// (0x0005f106) main_video_pane_g5_ParamLimits

0x151d,	// (0x0005f106) main_video_pane_g5

0xa041,	// (0x00067c2a) main_video_pane_g6_ParamLimits

0xa041,	// (0x00067c2a) main_video_pane_g6

0x0006,

0xf1c1,	// (0x0006cdaa) main_video_pane_g_ParamLimits

0xf1c1,	// (0x0006cdaa) main_video_pane_g

0x1539,	// (0x0005f122) main_video_pane_t1_ParamLimits

0x1539,	// (0x0005f122) main_video_pane_t1

0xa05b,	// (0x00067c44) cams_zoom_pane_g1

0xa05b,	// (0x00067c44) cams_zoom_pane_g2

0xa05b,	// (0x00067c44) cams_zoom_pane_g3

0xa05b,	// (0x00067c44) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x0006cdb9) cams_zoom_pane_g

0x1591,	// (0x0005f17a) grid_cams_pane

0x15ab,	// (0x0005f194) linegrid_cams_pane

0x15bd,	// (0x0005f1a6) cell_cams_pane_ParamLimits

0x15bd,	// (0x0005f1a6) cell_cams_pane

0xa065,	// (0x00067c4e) cams_burst_image_pane

0xa06d,	// (0x00067c56) cell_cams_pane_g1

0xec29,	// (0x0006c812) grid_highlight_pane_cp03

0xee9c,	// (0x0006ca85) mp_bg_pane_g1

0xe3de,	// (0x0006bfc7) bg_list_pane_cp03

0xe3de,	// (0x0006bfc7) bg_mp_pane

0xe3de,	// (0x0006bfc7) grid_mp_pane

0xa05b,	// (0x00067c44) media_player_g1

0xa5f6,	// (0x000681df) media_player_t1

0xa5f6,	// (0x000681df) media_player_t2

0xa5f6,	// (0x000681df) media_player_t3

0xa5f6,	// (0x000681df) media_player_t4

0xa5f6,	// (0x000681df) media_player_t5

0xa5f6,	// (0x000681df) media_player_t6

0xa5f6,	// (0x000681df) media_player_t7

0x0006,

0xf545,	// (0x0006d12e) media_player_t

0xe3de,	// (0x0006bfc7) wait_bar_pane_cp02

0xf52a,	// (0x0006d113) main_usb_pane_t

0xa8d0,	// (0x000684b9) cell_mp_pane

0xee9c,	// (0x0006ca85) cell_mp_pane_g1

0xec29,	// (0x0006c812) grid_highlight_pane_cp06

0xa075,	// (0x00067c5e) grid_skin_colour_pane

0xa07d,	// (0x00067c66) list_highlight_pane_cp03

0x15df,	// (0x0005f1c8) skin_g1

0xa085,	// (0x00067c6e) skin_t1

0xa094,	// (0x00067c7d) skin_t2

0x0001,

0xf1fe,	// (0x0006cde7) skin_t

0x15e9,	// (0x0005f1d2) cell_skin_colour_pane_ParamLimits

0x15e9,	// (0x0005f1d2) cell_skin_colour_pane

0xa0a2,	// (0x00067c8b) cell_skin_colour_pane_g1

0x165c,	// (0x0005f245) call_video_g1_ParamLimits

0x165c,	// (0x0005f245) call_video_g1

0x1678,	// (0x0005f261) call_video_g2_ParamLimits

0x1678,	// (0x0005f261) call_video_g2

0x0001,

0xf203,	// (0x0006cdec) call_video_g_ParamLimits

0xf203,	// (0x0006cdec) call_video_g

0x16bd,	// (0x0005f2a6) call_video_uplink_pane_cp1_ParamLimits

0x16bd,	// (0x0005f2a6) call_video_uplink_pane_cp1

0xa0b4,	// (0x00067c9d) call_video_uplink_pane_cp2

0x175e,	// (0x0005f347) video_down_crop_pane_ParamLimits

0x175e,	// (0x0005f347) video_down_crop_pane

0x1847,	// (0x0005f430) video_down_pane_ParamLimits

0x1847,	// (0x0005f430) video_down_pane

0xa0bc,	// (0x00067ca5) video_down_subqcif_pane_ParamLimits

0xa0bc,	// (0x00067ca5) video_down_subqcif_pane

0xa0d6,	// (0x00067cbf) video_down_subqcif_pane_cp_ParamLimits

0xa0d6,	// (0x00067cbf) video_down_subqcif_pane_cp

0xa0fe,	// (0x00067ce7) im_reading_pane_ParamLimits

0xa0fe,	// (0x00067ce7) im_reading_pane

0x1952,	// (0x0005f53b) im_writing_pane_ParamLimits

0x1952,	// (0x0005f53b) im_writing_pane

0x1970,	// (0x0005f559) im_reading_pane_t1

0xa118,	// (0x00067d01) list_im_pane

0xa129,	// (0x00067d12) scroll_pane_cp07

0x19af,	// (0x0005f598) im_writing_pane_t1_ParamLimits

0x19af,	// (0x0005f598) im_writing_pane_t1

0xa142,	// (0x00067d2b) im_writing_pane_t2_ParamLimits

0xa142,	// (0x00067d2b) im_writing_pane_t2

0x0001,

0xf20d,	// (0x0006cdf6) im_writing_pane_t_ParamLimits

0xf20d,	// (0x0006cdf6) im_writing_pane_t

0xec29,	// (0x0006c812) input_focus_pane_cp04

0xec29,	// (0x0006c812) input_focus_pane_cp05

0x19c4,	// (0x0005f5ad) list_im_single_pane_ParamLimits

0x19c4,	// (0x0005f5ad) list_im_single_pane

0x19dd,	// (0x0005f5c6) list_single_im_pane_t1

0xa006,	// (0x00067bef) blid_accuracy_pane

0xa006,	// (0x00067bef) blid_compass_pane

0xbd95,	// (0x0006997e) main_location_t1

0xbd95,	// (0x0006997e) main_location_t2

0xbd95,	// (0x0006997e) main_location_t3

0x0002,

0xf554,	// (0x0006d13d) main_location_t

0xec29,	// (0x0006c812) aid_levels_location

0xee9c,	// (0x0006ca85) blid_accuracy_pane_g1

0xee9c,	// (0x0006ca85) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x0006ce45) blid_accuracy_pane_g

0xa18a,	// (0x00067d73) wml_content_pane

0xa1c8,	// (0x00067db1) wml_button_pane_ParamLimits

0xa1c8,	// (0x00067db1) wml_button_pane

0x19ec,	// (0x0005f5d5) wml_list_single_large_pane_ParamLimits

0x19ec,	// (0x0005f5d5) wml_list_single_large_pane

0x1a05,	// (0x0005f5ee) wml_list_single_medium_pane_ParamLimits

0x1a05,	// (0x0005f5ee) wml_list_single_medium_pane

0x1a1f,	// (0x0005f608) wml_list_single_small_pane_ParamLimits

0x1a1f,	// (0x0005f608) wml_list_single_small_pane

0xa1dc,	// (0x00067dc5) wml_selection_box_pane_ParamLimits

0xa1dc,	// (0x00067dc5) wml_selection_box_pane

0xa1ef,	// (0x00067dd8) wml_list_single_pane_t1

0xa1fe,	// (0x00067de7) wml_list_single_medium_pane_t1

0xa20d,	// (0x00067df6) wml_list_single_large_pane_t1

0xa21c,	// (0x00067e05) input_focus_pane_cp02_ParamLimits

0xa21c,	// (0x00067e05) input_focus_pane_cp02

0xa22f,	// (0x00067e18) wml_selection_box_pane_g1

0xa238,	// (0x00067e21) wml_selection_box_pane_t1_ParamLimits

0xa238,	// (0x00067e21) wml_selection_box_pane_t1

0xee84,	// (0x0006ca6d) bg_wml_button_pane_ParamLimits

0xee84,	// (0x0006ca6d) bg_wml_button_pane

0xa250,	// (0x00067e39) wml_button_pane_g1

0xa258,	// (0x00067e41) wml_button_pane_t1

0xa250,	// (0x00067e39) wml_button_bg_pane_g1

0xa268,	// (0x00067e51) wml_button_bg_pane_g2

0xa270,	// (0x00067e59) wml_button_bg_pane_g3

0xa278,	// (0x00067e61) wml_button_bg_pane_g4

0xa280,	// (0x00067e69) wml_button_bg_pane_g5

0xa288,	// (0x00067e71) wml_button_bg_pane_g6

0xa290,	// (0x00067e79) wml_button_bg_pane_g7

0xa298,	// (0x00067e81) wml_button_bg_pane_g8

0xa2a0,	// (0x00067e89) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x0006cdfb) wml_button_bg_pane_g

0x1a3e,	// (0x0005f627) bg_list_pane_cp02

0xa2a8,	// (0x00067e91) mce_header_pane_ParamLimits

0xa2a8,	// (0x00067e91) mce_header_pane

0xa2be,	// (0x00067ea7) mce_icon_pane

0xa2be,	// (0x00067ea7) mce_image_pane

0xa2c7,	// (0x00067eb0) mce_text_pane_ParamLimits

0xa2c7,	// (0x00067eb0) mce_text_pane

0x1a46,	// (0x0005f62f) scroll_pane_cp03

0xa1c0,	// (0x00067da9) scroll_pane_cp04

0xa2da,	// (0x00067ec3) scroll_pane_cp05_ParamLimits

0xa2da,	// (0x00067ec3) scroll_pane_cp05

0x1a4e,	// (0x0005f637) mce_header_field_pane_ParamLimits

0x1a4e,	// (0x0005f637) mce_header_field_pane

0x1a67,	// (0x0005f650) mce_header_field_pane_2_ParamLimits

0x1a67,	// (0x0005f650) mce_header_field_pane_2

0x1a7d,	// (0x0005f666) mce_header_field_pane_3

0xa2e6,	// (0x00067ecf) list_single_mce_message_pane_ParamLimits

0xa2e6,	// (0x00067ecf) list_single_mce_message_pane

0xa2f5,	// (0x00067ede) list_single_mce_smart_pane_ParamLimits

0xa2f5,	// (0x00067ede) list_single_mce_smart_pane

0xa30f,	// (0x00067ef8) input_focus_pane_cp03

0xa318,	// (0x00067f01) list_header_data_pane

0x1a85,	// (0x0005f66e) mce_header_field_pane_t1

0x1a93,	// (0x0005f67c) list_single_mce_header_pane_ParamLimits

0x1a93,	// (0x0005f67c) list_single_mce_header_pane

0xa320,	// (0x00067f09) list_single_mce_header_pane_t1

0xa32f,	// (0x00067f18) list_single_mce_message_pane_g1

0xa337,	// (0x00067f20) list_single_mce_message_pane_t1

0x1acd,	// (0x0005f6b6) bg_cale_heading_pane_cp01_ParamLimits

0x1acd,	// (0x0005f6b6) bg_cale_heading_pane_cp01

0xa345,	// (0x00067f2e) bg_cale_pane_cp02_ParamLimits

0xa345,	// (0x00067f2e) bg_cale_pane_cp02

0x1b1f,	// (0x0005f708) cale_month_corner_pane

0x1b3e,	// (0x0005f727) cale_month_day_heading_pane_ParamLimits

0x1b3e,	// (0x0005f727) cale_month_day_heading_pane

0x1ba8,	// (0x0005f791) cale_month_pane_g1_ParamLimits

0x1ba8,	// (0x0005f791) cale_month_pane_g1

0x1bef,	// (0x0005f7d8) cale_month_pane_g2_ParamLimits

0x1bef,	// (0x0005f7d8) cale_month_pane_g2

0x1c2b,	// (0x0005f814) cale_month_pane_g3_ParamLimits

0x1c2b,	// (0x0005f814) cale_month_pane_g3

0x1c7f,	// (0x0005f868) cale_month_pane_g4_ParamLimits

0x1c7f,	// (0x0005f868) cale_month_pane_g4

0x1cd3,	// (0x0005f8bc) cale_month_pane_g5_ParamLimits

0x1cd3,	// (0x0005f8bc) cale_month_pane_g5

0x1d2f,	// (0x0005f918) cale_month_pane_g6_ParamLimits

0x1d2f,	// (0x0005f918) cale_month_pane_g6

0x1d97,	// (0x0005f980) cale_month_pane_g7_ParamLimits

0x1d97,	// (0x0005f980) cale_month_pane_g7

0x1e03,	// (0x0005f9ec) cale_month_pane_g8_ParamLimits

0x1e03,	// (0x0005f9ec) cale_month_pane_g8

0x1e6f,	// (0x0005fa58) cale_month_pane_g9_ParamLimits

0x1e6f,	// (0x0005fa58) cale_month_pane_g9

0x1ed3,	// (0x0005fabc) cale_month_pane_g10_ParamLimits

0x1ed3,	// (0x0005fabc) cale_month_pane_g10

0x1f25,	// (0x0005fb0e) cale_month_pane_g11_ParamLimits

0x1f25,	// (0x0005fb0e) cale_month_pane_g11

0x1f77,	// (0x0005fb60) cale_month_pane_g12_ParamLimits

0x1f77,	// (0x0005fb60) cale_month_pane_g12

0x1fcf,	// (0x0005fbb8) cale_month_pane_g13_ParamLimits

0x1fcf,	// (0x0005fbb8) cale_month_pane_g13

0x000c,

0xf225,	// (0x0006ce0e) cale_month_pane_g_ParamLimits

0xf225,	// (0x0006ce0e) cale_month_pane_g

0x2027,	// (0x0005fc10) cale_month_week_pane

0x204b,	// (0x0005fc34) grid_cale_month_pane_ParamLimits

0x204b,	// (0x0005fc34) grid_cale_month_pane

0x20ac,	// (0x0005fc95) cale_month_day_heading_pane_t1

0x2132,	// (0x0005fd1b) cale_month_day_heading_pane_t2

0x21ab,	// (0x0005fd94) cale_month_day_heading_pane_t3

0x2224,	// (0x0005fe0d) cale_month_day_heading_pane_t4

0x22a5,	// (0x0005fe8e) cale_month_day_heading_pane_t5

0x232e,	// (0x0005ff17) cale_month_day_heading_pane_t6

0x23bf,	// (0x0005ffa8) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x0006ce29) cale_month_day_heading_pane_t

0x9fab,	// (0x00067b94) bg_cale_side_pane_cp01

0x2450,	// (0x00060039) cale_month_week_pane_t1

0x2469,	// (0x00060052) cale_month_week_pane_t2

0x2482,	// (0x0006006b) cale_month_week_pane_t3

0x249b,	// (0x00060084) cale_month_week_pane_t4

0x24b4,	// (0x0006009d) cale_month_week_pane_t5

0x24cd,	// (0x000600b6) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x0006ce38) cale_month_week_pane_t

0x24f2,	// (0x000600db) cell_cale_month_pane_ParamLimits

0x24f2,	// (0x000600db) cell_cale_month_pane

0xa384,	// (0x00067f6d) cell_cale_month_pane_g1

0x263c,	// (0x00060225) cell_cale_month_pane_t1_ParamLimits

0x263c,	// (0x00060225) cell_cale_month_pane_t1

0x9fb9,	// (0x00067ba2) grid_highlight_pane_cp08

0xee9c,	// (0x0006ca85) main_smil_g1

0x2668,	// (0x00060251) smil_status_pane

0xa390,	// (0x00067f79) smil_text_pane

0xbcab,	// (0x00069894) bg_popup_call3_rect_pane_g8

0xbcb3,	// (0x0006989c) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x0006d0d1) bg_popup_call3_rect_pane_g

0xbec9,	// (0x00069ab2) smil_status_volume_pane_g1

0xa39a,	// (0x00067f83) smil_status_pane_t1

0xbefc,	// (0x00069ae5) volume_smil_pane

0xa3b1,	// (0x00067f9a) list_smil_text_pane

0x267d,	// (0x00060266) scroll_pane_cp011

0x2688,	// (0x00060271) smil_text_list_pane_t1_ParamLimits

0x2688,	// (0x00060271) smil_text_list_pane_t1

0xa3bb,	// (0x00067fa4) aid_volume_smil_ParamLimits

0xa3bb,	// (0x00067fa4) aid_volume_smil

0xee9c,	// (0x0006ca85) smil_volume_pane_g1

0xee9c,	// (0x0006ca85) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x0006ce45) smil_volume_pane_g

0x0de8,	// (0x0005e9d1) listscroll_cale_day_pane

0xa3dd,	// (0x00067fc6) bg_cale_pane

0xa3f5,	// (0x00067fde) list_cale_pane

0xa418,	// (0x00068001) scroll_pane_cp09

0xa429,	// (0x00068012) cale_bg_pane_g1

0xa431,	// (0x0006801a) cale_bg_pane_g2

0xa439,	// (0x00068022) cale_bg_pane_g3

0xa441,	// (0x0006802a) cale_bg_pane_g4

0xa449,	// (0x00068032) cale_bg_pane_g5

0xa451,	// (0x0006803a) cale_bg_pane_g6

0xa459,	// (0x00068042) cale_bg_pane_g7

0xa461,	// (0x0006804a) cale_bg_pane_g8

0xa469,	// (0x00068052) cale_bg_pane_g9

0x0008,

0xf261,	// (0x0006ce4a) cale_bg_pane_g

0x26db,	// (0x000602c4) list_cale_time_pane_ParamLimits

0x26db,	// (0x000602c4) list_cale_time_pane

0xa471,	// (0x0006805a) list_cale_time_pane_g1_ParamLimits

0xa471,	// (0x0006805a) list_cale_time_pane_g1

0xa47d,	// (0x00068066) list_cale_time_pane_g2_ParamLimits

0xa47d,	// (0x00068066) list_cale_time_pane_g2

0x26f5,	// (0x000602de) list_cale_time_pane_g3_ParamLimits

0x26f5,	// (0x000602de) list_cale_time_pane_g3

0x2703,	// (0x000602ec) list_cale_time_pane_g4_ParamLimits

0x2703,	// (0x000602ec) list_cale_time_pane_g4

0x2711,	// (0x000602fa) list_cale_time_pane_g5_ParamLimits

0x2711,	// (0x000602fa) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x0006ce5d) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x0006ce5d) list_cale_time_pane_g

0xa497,	// (0x00068080) list_cale_time_pane_t1_ParamLimits

0xa497,	// (0x00068080) list_cale_time_pane_t1

0xa4bf,	// (0x000680a8) list_cale_time_pane_t2_ParamLimits

0xa4bf,	// (0x000680a8) list_cale_time_pane_t2

0x29c3,	// (0x000605ac) aid_blid_cardinal_pane

0x2a05,	// (0x000605ee) compass_pane_t4

0xa4e7,	// (0x000680d0) list_cale_time_pane_t4_ParamLimits

0xa4e7,	// (0x000680d0) list_cale_time_pane_t4

0x2a13,	// (0x000605fc) compass_pane_t5

0x2a23,	// (0x0006060c) compass_pane_t6

0x2a31,	// (0x0006061a) compass_pane_t7

0xa980,	// (0x00068569) navi_pane_cc_t1

0xaadf,	// (0x000686c8) aid_phob_thumbnail_center_pane

0x2fda,	// (0x00060bc3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x0006ce6a) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x0006ce6a) list_cale_time_pane_t

0xe487,	// (0x0006c070) bg_popup_window_pane_cp02_ParamLimits

0xe487,	// (0x0006c070) bg_popup_window_pane_cp02

0xa50f,	// (0x000680f8) heading_pane_cp01_ParamLimits

0xa50f,	// (0x000680f8) heading_pane_cp01

0xa51b,	// (0x00068104) loc_req_pane_ParamLimits

0xa51b,	// (0x00068104) loc_req_pane

0xa52b,	// (0x00068114) loc_type_pane_ParamLimits

0xa52b,	// (0x00068114) loc_type_pane

0xa53d,	// (0x00068126) loc_type_pane_t1_ParamLimits

0xa53d,	// (0x00068126) loc_type_pane_t1

0xa54f,	// (0x00068138) loc_type_pane_t2_ParamLimits

0xa54f,	// (0x00068138) loc_type_pane_t2

0xa561,	// (0x0006814a) loc_type_pane_t3_ParamLimits

0xa561,	// (0x0006814a) loc_type_pane_t3

0x0002,

0xf288,	// (0x0006ce71) loc_type_pane_t_ParamLimits

0xf288,	// (0x0006ce71) loc_type_pane_t

0xa573,	// (0x0006815c) list_loc_req_pane

0xa57d,	// (0x00068166) scroll_pane_cp012

0x271f,	// (0x00060308) list_single_loc_request_popup_menu_pane_ParamLimits

0x271f,	// (0x00060308) list_single_loc_request_popup_menu_pane

0xa588,	// (0x00068171) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa588,	// (0x00068171) list_single_loc_request_popup_menu_pane_g1

0xa594,	// (0x0006817d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa594,	// (0x0006817d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x0006ce78) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x0006ce78) list_single_loc_request_popup_menu_pane_g

0xa5a0,	// (0x00068189) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa5a0,	// (0x00068189) list_single_loc_request_popup_menu_pane_t1

0xee84,	// (0x0006ca6d) bg_popup_window_pane_cp03_ParamLimits

0xee84,	// (0x0006ca6d) bg_popup_window_pane_cp03

0xa5b6,	// (0x0006819f) heading_loc_req_pane_ParamLimits

0xa5b6,	// (0x0006819f) heading_loc_req_pane

0x272c,	// (0x00060315) popup_dyc_status_message_window_g1_ParamLimits

0x272c,	// (0x00060315) popup_dyc_status_message_window_g1

0x2740,	// (0x00060329) popup_dyc_status_message_window_t1_ParamLimits

0x2740,	// (0x00060329) popup_dyc_status_message_window_t1

0x2755,	// (0x0006033e) popup_dyc_status_message_window_t2_ParamLimits

0x2755,	// (0x0006033e) popup_dyc_status_message_window_t2

0x276a,	// (0x00060353) popup_dyc_status_message_window_t3_ParamLimits

0x276a,	// (0x00060353) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x0006ce7d) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x0006ce7d) popup_dyc_status_message_window_t

0xec29,	// (0x0006c812) bg_heading_pane_cp01

0xa5c2,	// (0x000681ab) heading_loc_req_pane_g1

0xa5ca,	// (0x000681b3) heading_loc_req_pane_g2

0xa5d2,	// (0x000681bb) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x0006ce84) heading_loc_req_pane_g

0xa5da,	// (0x000681c3) heading_loc_req_pane_t1

0xa606,	// (0x000681ef) bg_popup_sub_pane_cp01_ParamLimits

0xa606,	// (0x000681ef) bg_popup_sub_pane_cp01

0xa614,	// (0x000681fd) popup_cale_events_window_g1_ParamLimits

0xa614,	// (0x000681fd) popup_cale_events_window_g1

0xa634,	// (0x0006821d) popup_cale_events_window_g2_ParamLimits

0xa634,	// (0x0006821d) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x0006cea6) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x0006cea6) popup_cale_events_window_g

0xa654,	// (0x0006823d) popup_cale_events_window_t1_ParamLimits

0xa654,	// (0x0006823d) popup_cale_events_window_t1

0xa666,	// (0x0006824f) popup_cale_events_window_t2_ParamLimits

0xa666,	// (0x0006824f) popup_cale_events_window_t2

0xa6a4,	// (0x0006828d) popup_cale_events_window_t3_ParamLimits

0xa6a4,	// (0x0006828d) popup_cale_events_window_t3

0xa6de,	// (0x000682c7) popup_cale_events_window_t4_ParamLimits

0xa6de,	// (0x000682c7) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x0006ceab) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x0006ceab) popup_cale_events_window_t

0x2792,	// (0x0006037b) call_type_pane

0x27a2,	// (0x0006038b) popup_call_status_window_g1

0x27b6,	// (0x0006039f) popup_call_status_window_g2

0x27ca,	// (0x000603b3) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x0006ceb4) popup_call_status_window_g

0xa714,	// (0x000682fd) call_type_pane_g1

0xa71d,	// (0x00068306) call_type_pane_g2

0x0001,

0xf2d2,	// (0x0006cebb) call_type_pane_g

0xec29,	// (0x0006c812) bg_popup_sub_pane_cp02

0xa726,	// (0x0006830f) listscroll_popup_wml_pane

0xa72e,	// (0x00068317) list_wml_pane

0xa738,	// (0x00068321) scroll_pane_cp013

0xa743,	// (0x0006832c) list_single_graphic_popup_wml_pane_ParamLimits

0xa743,	// (0x0006832c) list_single_graphic_popup_wml_pane

0xee9c,	// (0x0006ca85) list_single_graphic_popup_wml_pane_g1

0xa757,	// (0x00068340) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x0006cec0) list_single_graphic_popup_wml_pane_g

0xa75f,	// (0x00068348) list_single_graphic_popup_wml_pane_t1

0xa775,	// (0x0006835e) aid_call_pane

0xee7c,	// (0x0006ca65) popup_clock_analogue_window_g1

0xee7c,	// (0x0006ca65) popup_clock_analogue_window_g2

0xa77d,	// (0x00068366) popup_clock_analogue_window_g3

0xa77d,	// (0x00068366) popup_clock_analogue_window_g4

0xee9c,	// (0x0006ca85) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x0006cec5) popup_clock_analogue_window_g

0xa785,	// (0x0006836e) popup_clock_analogue_window_t1

0xa793,	// (0x0006837c) clock_digital_number_pane_ParamLimits

0xa793,	// (0x0006837c) clock_digital_number_pane

0xa79f,	// (0x00068388) clock_digital_number_pane_cp02_ParamLimits

0xa79f,	// (0x00068388) clock_digital_number_pane_cp02

0xa7ab,	// (0x00068394) clock_digital_number_pane_cp03_ParamLimits

0xa7ab,	// (0x00068394) clock_digital_number_pane_cp03

0xa7b7,	// (0x000683a0) clock_digital_number_pane_cp04_ParamLimits

0xa7b7,	// (0x000683a0) clock_digital_number_pane_cp04

0xa7c3,	// (0x000683ac) clock_digital_separator_pane_ParamLimits

0xa7c3,	// (0x000683ac) clock_digital_separator_pane

0xa7cf,	// (0x000683b8) popup_clock_digital_window_t1

0xee9c,	// (0x0006ca85) clock_digital_number_pane_g1

0xee9c,	// (0x0006ca85) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x0006ce45) clock_digital_number_pane_g

0xee9c,	// (0x0006ca85) clock_digital_separator_pane_g1

0xee9c,	// (0x0006ca85) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x0006ce45) clock_digital_separator_pane_g

0xec29,	// (0x0006c812) bg_popup_window_pane_cp04

0xa7ec,	// (0x000683d5) heading_pane_cp03

0xa006,	// (0x00067bef) listscroll_popup_gms_pane

0xec29,	// (0x0006c812) grid_large_graphic_popup_pane

0xa7f5,	// (0x000683de) listscroll_popup_gms_pane_g1

0xa7fe,	// (0x000683e7) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x0006ced0) listscroll_popup_gms_pane_g

0xa807,	// (0x000683f0) scroll_pane_cp014

0xeef1,	// (0x0006cada) cell_large_graphic_popup_pane_ParamLimits

0xeef1,	// (0x0006cada) cell_large_graphic_popup_pane

0xeeff,	// (0x0006cae8) cell_large_graphic_popup_pane_g1_ParamLimits

0xeeff,	// (0x0006cae8) cell_large_graphic_popup_pane_g1

0xa810,	// (0x000683f9) cell_large_graphic_popup_pane_g2_ParamLimits

0xa810,	// (0x000683f9) cell_large_graphic_popup_pane_g2

0xa81e,	// (0x00068407) cell_large_graphic_popup_pane_g3_ParamLimits

0xa81e,	// (0x00068407) cell_large_graphic_popup_pane_g3

0xa82c,	// (0x00068415) cell_large_graphic_popup_pane_g4_ParamLimits

0xa82c,	// (0x00068415) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x0006ced5) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x0006ced5) cell_large_graphic_popup_pane_g

0xec29,	// (0x0006c812) grid_highlight_pane_cp010

0xee9c,	// (0x0006ca85) bg_popup_call_pane_g1

0xa83d,	// (0x00068426) list_single_graphic_popup_conf_pane_ParamLimits

0xa83d,	// (0x00068426) list_single_graphic_popup_conf_pane

0xa84f,	// (0x00068438) list_highlight_pane_cp01

0xa858,	// (0x00068441) list_single_graphic_popup_conf_pane_g1

0xa860,	// (0x00068449) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x0006cede) list_single_graphic_popup_conf_pane_g

0xa868,	// (0x00068451) list_single_graphic_popup_conf_pane_t1

0xa876,	// (0x0006845f) linegrid_cams_pane_g1

0x27da,	// (0x000603c3) linegrid_cams_pane_g2

0x9fec,	// (0x00067bd5) linegrid_cams_pane_g3

0xa87f,	// (0x00068468) linegrid_cams_pane_g4

0x27e3,	// (0x000603cc) linegrid_cams_pane_g5

0x27ec,	// (0x000603d5) linegrid_cams_pane_g6

0x9ff5,	// (0x00067bde) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x0006cee3) linegrid_cams_pane_g

0xa888,	// (0x00068471) popup_clock_analogue_window

0xa888,	// (0x00068471) popup_clock_digital_window

0xec29,	// (0x0006c812) popup_phob_thumbnail_window

0xee9c,	// (0x0006ca85) call_video_uplink_pane_g1

0xa891,	// (0x0006847a) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x0006cef2) call_video_uplink_pane_g

0xa899,	// (0x00068482) video_uplink_pane

0xa8a1,	// (0x0006848a) mce_image_pane_g1

0x27f7,	// (0x000603e0) mce_image_pane_g2

0x2801,	// (0x000603ea) mce_image_pane_g3

0x280b,	// (0x000603f4) mce_image_pane_g4

0x2813,	// (0x000603fc) mce_image_pane_g5

0x0004,

0xf30e,	// (0x0006cef7) mce_image_pane_g

0xa8ab,	// (0x00068494) control_top_pane_stacon_cp01_ParamLimits

0xa8ab,	// (0x00068494) control_top_pane_stacon_cp01

0xa8bf,	// (0x000684a8) uni_indicator_pane_stacon_cp01_ParamLimits

0xa8bf,	// (0x000684a8) uni_indicator_pane_stacon_cp01

0xa8d0,	// (0x000684b9) bg_popup_sub_pane_cp03

0x281b,	// (0x00060404) chi_dic_find_pane

0x2823,	// (0x0006040c) listscroll_chi_dic_pane

0x282c,	// (0x00060415) main_pane_chidic_g1

0x283f,	// (0x00060428) chi_dic_find_pane_t1

0xa8da,	// (0x000684c3) find_chidic_pane

0xa8e3,	// (0x000684cc) chi_dic_list_pane_ParamLimits

0xa8e3,	// (0x000684cc) chi_dic_list_pane

0xa8f4,	// (0x000684dd) scroll_pane_cp020

0x284d,	// (0x00060436) find_chidic_pane_t1

0xec29,	// (0x0006c812) input_focus_pane_cp06

0x285c,	// (0x00060445) list_chi_dic_pane_ParamLimits

0x285c,	// (0x00060445) list_chi_dic_pane

0x286e,	// (0x00060457) list_chi_dic_pane_t1_ParamLimits

0x286e,	// (0x00060457) list_chi_dic_pane_t1

0xec29,	// (0x0006c812) list_highlight_pane_cp020

0xa8fc,	// (0x000684e5) bg_cale_heading_pane_g1

0x2881,	// (0x0006046a) bg_cale_heading_pane_g2

0x2889,	// (0x00060472) bg_cale_heading_pane_g3

0x2891,	// (0x0006047a) bg_cale_heading_pane_g4

0x289b,	// (0x00060484) bg_cale_heading_pane_g5

0x28a5,	// (0x0006048e) bg_cale_heading_pane_g6

0x28ad,	// (0x00060496) bg_cale_heading_pane_g7

0x28b5,	// (0x0006049e) bg_cale_heading_pane_g8

0x28bf,	// (0x000604a8) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x0006cf02) bg_cale_heading_pane_g

0xa8fc,	// (0x000684e5) bg_cale_side_pane_g1

0x28c9,	// (0x000604b2) bg_cale_side_pane_g2

0x28d3,	// (0x000604bc) bg_cale_side_pane_g3

0x28dd,	// (0x000604c6) bg_cale_side_pane_g4

0x28e7,	// (0x000604d0) bg_cale_side_pane_g5

0x28f1,	// (0x000604da) bg_cale_side_pane_g6

0x28fb,	// (0x000604e4) bg_cale_side_pane_g7

0x2905,	// (0x000604ee) bg_cale_side_pane_g8

0x290d,	// (0x000604f6) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x0006cf15) bg_cale_side_pane_g

0x2915,	// (0x000604fe) popup_call_status_window_ParamLimits

0x2915,	// (0x000604fe) popup_call_status_window

0xa904,	// (0x000684ed) stacon_top_pane

0xa90c,	// (0x000684f5) status_pane_ParamLimits

0xa90c,	// (0x000684f5) status_pane

0xa921,	// (0x0006850a) status_small_pane

0xa929,	// (0x00068512) control_pane

0xec29,	// (0x0006c812) stacon_bottom_pane

0xa931,	// (0x0006851a) list_single_mce_smart_pane_t1_ParamLimits

0xa931,	// (0x0006851a) list_single_mce_smart_pane_t1

0xa944,	// (0x0006852d) list_single_mce_smart_pane_t2_ParamLimits

0xa944,	// (0x0006852d) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x0006cf28) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x0006cf28) list_single_mce_smart_pane_t

0x2962,	// (0x0006054b) compass_pane

0x296d,	// (0x00060556) main_location2_pane_t1

0x2983,	// (0x0006056c) main_location2_pane_t2

0x2999,	// (0x00060582) main_location2_pane_t3

0x0003,

0xf344,	// (0x0006cf2d) main_location2_pane_t

0xa963,	// (0x0006854c) compass_pane_g1_ParamLimits

0xa963,	// (0x0006854c) compass_pane_g1

0x29e7,	// (0x000605d0) compass_pane_t1

0x29f6,	// (0x000605df) compass_pane_t2

0x0005,

0xf34d,	// (0x0006cf36) compass_pane_t

0x2a41,	// (0x0006062a) text_secondary_cp61

0xa977,	// (0x00068560) navi_pane_cams_g5

0xa99a,	// (0x00068583) navi_pane_im_t1

0xa9a8,	// (0x00068591) navi_pane_mp_g1_ParamLimits

0xa9a8,	// (0x00068591) navi_pane_mp_g1

0xa9bc,	// (0x000685a5) navi_pane_mp_g2_ParamLimits

0xa9bc,	// (0x000685a5) navi_pane_mp_g2

0xa9c8,	// (0x000685b1) navi_pane_mp_g3_ParamLimits

0xa9c8,	// (0x000685b1) navi_pane_mp_g3

0x0002,

0xf361,	// (0x0006cf4a) navi_pane_mp_g_ParamLimits

0xf361,	// (0x0006cf4a) navi_pane_mp_g

0xa9d4,	// (0x000685bd) navi_pane_mp_t1

0xa9e2,	// (0x000685cb) navi_pane_mp_t2

0x0002,

0xf368,	// (0x0006cf51) navi_pane_mp_t

0xaa1e,	// (0x00068607) navi_pane_vt_g1

0xa9d4,	// (0x000685bd) navi_pane_vt_t1

0xaa26,	// (0x0006860f) navi_slider_pane

0xa006,	// (0x00067bef) zooming_pane

0xaa2e,	// (0x00068617) navi_slider_pane_g1

0xaa37,	// (0x00068620) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x0006cf58) navi_slider_pane_g

0xaa64,	// (0x0006864d) aid_levels_zoom

0xaa6c,	// (0x00068655) zooming_pane_g1

0xaa74,	// (0x0006865d) zooming_pane_g2

0xaa74,	// (0x0006865d) zooming_pane_g3

0x0002,

0xf37e,	// (0x0006cf67) zooming_pane_g

0xaa7c,	// (0x00068665) level_10_zoom

0xaa85,	// (0x0006866e) level_11_zoom

0xaa8e,	// (0x00068677) level_1_zoom

0xaa97,	// (0x00068680) level_2_zoom

0xaaa0,	// (0x00068689) level_3_zoom

0xaaa9,	// (0x00068692) level_4_zoom

0xaab2,	// (0x0006869b) level_5_zoom

0xaabb,	// (0x000686a4) level_6_zoom

0xaac4,	// (0x000686ad) level_7_zoom

0xaacd,	// (0x000686b6) level_8_zoom

0xaad6,	// (0x000686bf) level_9_zoom

0xaae7,	// (0x000686d0) popup_phob_thumbnail_window_g1

0xaaef,	// (0x000686d8) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x0006cf6e) popup_phob_thumbnail_window_g

0x36d7,	// (0x000612c0) level_1_location

0x36df,	// (0x000612c8) level_2_location

0x36e7,	// (0x000612d0) level_3_location

0x36f1,	// (0x000612da) level_4_location

0xa006,	// (0x00067bef) level_5_location

0x2b8a,	// (0x00060773) mce_icon_pane_g1

0x2b92,	// (0x0006077b) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x0006cf73) mce_icon_pane_g

0xaaf7,	// (0x000686e0) main_mup_pane_g1_ParamLimits

0xaaf7,	// (0x000686e0) main_mup_pane_g1

0xaaf7,	// (0x000686e0) main_mup_pane_g2_ParamLimits

0xaaf7,	// (0x000686e0) main_mup_pane_g2

0xaaf7,	// (0x000686e0) main_mup_pane_g3_ParamLimits

0xaaf7,	// (0x000686e0) main_mup_pane_g3

0xaaf7,	// (0x000686e0) main_mup_pane_g4_ParamLimits

0xaaf7,	// (0x000686e0) main_mup_pane_g4

0xaaf7,	// (0x000686e0) main_mup_pane_g5_ParamLimits

0xaaf7,	// (0x000686e0) main_mup_pane_g5

0xaaf7,	// (0x000686e0) main_mup_pane_g6_ParamLimits

0xaaf7,	// (0x000686e0) main_mup_pane_g6

0xaaf7,	// (0x000686e0) main_mup_pane_g7_ParamLimits

0xaaf7,	// (0x000686e0) main_mup_pane_g7

0xaaf7,	// (0x000686e0) main_mup_pane_g8_ParamLimits

0xaaf7,	// (0x000686e0) main_mup_pane_g8

0xaaf7,	// (0x000686e0) main_mup_pane_g9_ParamLimits

0xaaf7,	// (0x000686e0) main_mup_pane_g9

0xaaf7,	// (0x000686e0) main_mup_pane_g10_ParamLimits

0xaaf7,	// (0x000686e0) main_mup_pane_g10

0xaaf7,	// (0x000686e0) main_mup_pane_g11_ParamLimits

0xaaf7,	// (0x000686e0) main_mup_pane_g11

0xeeff,	// (0x0006cae8) main_mup_pane_g12_ParamLimits

0xeeff,	// (0x0006cae8) main_mup_pane_g12

0xaaf7,	// (0x000686e0) main_mup_pane_g13_ParamLimits

0xaaf7,	// (0x000686e0) main_mup_pane_g13

0x000c,

0xf38f,	// (0x0006cf78) main_mup_pane_g_ParamLimits

0xf38f,	// (0x0006cf78) main_mup_pane_g

0xab05,	// (0x000686ee) main_mup_pane_t1_ParamLimits

0xab05,	// (0x000686ee) main_mup_pane_t1

0xab05,	// (0x000686ee) main_mup_pane_t2_ParamLimits

0xab05,	// (0x000686ee) main_mup_pane_t2

0xab05,	// (0x000686ee) main_mup_pane_t3_ParamLimits

0xab05,	// (0x000686ee) main_mup_pane_t3

0xa02d,	// (0x00067c16) main_mup_pane_t4_ParamLimits

0xa02d,	// (0x00067c16) main_mup_pane_t4

0xa02d,	// (0x00067c16) main_mup_pane_t5_ParamLimits

0xa02d,	// (0x00067c16) main_mup_pane_t5

0xab19,	// (0x00068702) main_mup_pane_t6_ParamLimits

0xab19,	// (0x00068702) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x0006cf93) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x0006cf93) main_mup_pane_t

0xeef1,	// (0x0006cada) mup_progress_pane_ParamLimits

0xeef1,	// (0x0006cada) mup_progress_pane

0xab2d,	// (0x00068716) mup_visualizer_pane_ParamLimits

0xab2d,	// (0x00068716) mup_visualizer_pane

0xab2d,	// (0x00068716) mup_volume_pane_ParamLimits

0xab2d,	// (0x00068716) mup_volume_pane

0xef0d,	// (0x0006caf6) mup_visualizer_pane_g1_ParamLimits

0xef0d,	// (0x0006caf6) mup_visualizer_pane_g1

0xab3b,	// (0x00068724) mup_visualizer_pane_g2_ParamLimits

0xab3b,	// (0x00068724) mup_visualizer_pane_g2

0xeeff,	// (0x0006cae8) mup_visualizer_pane_g3_ParamLimits

0xeeff,	// (0x0006cae8) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x0006cfa0) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x0006cfa0) mup_visualizer_pane_g

0xa05b,	// (0x00067c44) mup_volume_pane_g1

0xa05b,	// (0x00067c44) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x0006cfa7) mup_volume_pane_g

0xa05b,	// (0x00067c44) mup_progress_pane_g1

0xa05b,	// (0x00067c44) mup_progress_pane_g2

0xa05b,	// (0x00067c44) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x0006cfac) mup_progress_pane_g

0xec29,	// (0x0006c812) bg_popup_window_pane_cp05

0xab49,	// (0x00068732) heading_pane_cp02_ParamLimits

0xab49,	// (0x00068732) heading_pane_cp02

0xab65,	// (0x0006874e) list_popup_blid_pane

0xab6d,	// (0x00068756) list_blid_sat_info_pane_ParamLimits

0xab6d,	// (0x00068756) list_blid_sat_info_pane

0xab80,	// (0x00068769) list_blid_sat_info_pane_g1

0xab88,	// (0x00068771) list_blid_sat_info_pane_t1

0x2ca6,	// (0x0006088f) mup_equalizer_pane_ParamLimits

0x2ca6,	// (0x0006088f) mup_equalizer_pane

0x2cc7,	// (0x000608b0) mup_equalizer_pane_cp1_ParamLimits

0x2cc7,	// (0x000608b0) mup_equalizer_pane_cp1

0x2ce8,	// (0x000608d1) mup_equalizer_pane_cp2_ParamLimits

0x2ce8,	// (0x000608d1) mup_equalizer_pane_cp2

0x2d0d,	// (0x000608f6) mup_equalizer_pane_cp3_ParamLimits

0x2d0d,	// (0x000608f6) mup_equalizer_pane_cp3

0x2d36,	// (0x0006091f) mup_equalizer_pane_cp4_ParamLimits

0x2d36,	// (0x0006091f) mup_equalizer_pane_cp4

0x2d5f,	// (0x00060948) mup_equalizer_pane_cp5

0x2d77,	// (0x00060960) mup_equalizer_pane_cp6

0x2d8f,	// (0x00060978) mup_equalizer_pane_cp7

0xbd2b,	// (0x00069914) bg_popup_call_poc_act_pane_g9

0xbd33,	// (0x0006991c) bg_popup_call_poc_act_pane_g10

0xbd3b,	// (0x00069924) bg_popup_call_poc_act_pane_g11

0x000a,

0xee84,	// (0x0006ca6d) mup_scale_pane

0xee9c,	// (0x0006ca85) mup_scale_pane_g1

0xab96,	// (0x0006877f) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x0006cfc8) mup_scale_pane_g

0xabba,	// (0x000687a3) msg_data_pane

0xabc2,	// (0x000687ab) scroll_pane_cp017

0x2db9,	// (0x000609a2) bg_list_pane_cp04_ParamLimits

0x2db9,	// (0x000609a2) bg_list_pane_cp04

0xabca,	// (0x000687b3) msg_data_pane_g1

0x2ddf,	// (0x000609c8) msg_data_pane_g2

0x2de9,	// (0x000609d2) msg_data_pane_g3

0x2df3,	// (0x000609dc) msg_data_pane_g4

0x2dfb,	// (0x000609e4) msg_data_pane_g5

0x2e03,	// (0x000609ec) msg_data_pane_g6

0x2e0b,	// (0x000609f4) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x0006cfd7) msg_data_pane_g

0x2e13,	// (0x000609fc) msg_text_pane_ParamLimits

0x2e13,	// (0x000609fc) msg_text_pane

0x2e4e,	// (0x00060a37) qrid_highlight_pane_cp011_ParamLimits

0x2e4e,	// (0x00060a37) qrid_highlight_pane_cp011

0xec29,	// (0x0006c812) msg_body_pane

0xec29,	// (0x0006c812) msg_header_pane

0xabdb,	// (0x000687c4) input_focus_pane_cp07

0x2e72,	// (0x00060a5b) msg_header_pane_t1_ParamLimits

0x2e72,	// (0x00060a5b) msg_header_pane_t1

0x2e88,	// (0x00060a71) msg_header_pane_t2_ParamLimits

0x2e88,	// (0x00060a71) msg_header_pane_t2

0x0001,

0xf402,	// (0x0006cfeb) msg_header_pane_t_ParamLimits

0xf402,	// (0x0006cfeb) msg_header_pane_t

0xabf0,	// (0x000687d9) msg_body_pane_g1

0x2e9f,	// (0x00060a88) msg_body_pane_t1_ParamLimits

0x2e9f,	// (0x00060a88) msg_body_pane_t1

0x2ed0,	// (0x00060ab9) msg_body_pane_t2_ParamLimits

0x2ed0,	// (0x00060ab9) msg_body_pane_t2

0x2ee2,	// (0x00060acb) msg_body_pane_t3_ParamLimits

0x2ee2,	// (0x00060acb) msg_body_pane_t3

0x0002,

0xf407,	// (0x0006cff0) msg_body_pane_t_ParamLimits

0xf407,	// (0x0006cff0) msg_body_pane_t

0x2f2e,	// (0x00060b17) main_viewer_pane_g1_ParamLimits

0x2f2e,	// (0x00060b17) main_viewer_pane_g1

0x2f3c,	// (0x00060b25) main_viewer_pane_g2_ParamLimits

0x2f3c,	// (0x00060b25) main_viewer_pane_g2

0x2f4a,	// (0x00060b33) main_viewer_pane_g3_ParamLimits

0x2f4a,	// (0x00060b33) main_viewer_pane_g3

0x2f59,	// (0x00060b42) main_viewer_pane_g4_ParamLimits

0x2f59,	// (0x00060b42) main_viewer_pane_g4

0xac10,	// (0x000687f9) main_viewer_pane_g5_ParamLimits

0xac10,	// (0x000687f9) main_viewer_pane_g5

0xac10,	// (0x000687f9) main_viewer_pane_g7_ParamLimits

0xac10,	// (0x000687f9) main_viewer_pane_g7

0xac22,	// (0x0006880b) main_viewer_pane_g8_ParamLimits

0xac22,	// (0x0006880b) main_viewer_pane_g8

0x0007,

0xf417,	// (0x0006d000) main_viewer_pane_g_ParamLimits

0xf417,	// (0x0006d000) main_viewer_pane_g

0xac3a,	// (0x00068823) viewer_content_pane_ParamLimits

0xac3a,	// (0x00068823) viewer_content_pane

0x2f97,	// (0x00060b80) main_postcard_pane_g1_ParamLimits

0x2f97,	// (0x00060b80) main_postcard_pane_g1

0x2fad,	// (0x00060b96) main_postcard_pane_g2_ParamLimits

0x2fad,	// (0x00060b96) main_postcard_pane_g2

0x2fc3,	// (0x00060bac) main_postcard_pane_g3_ParamLimits

0x2fc3,	// (0x00060bac) main_postcard_pane_g3

0x0005,

0xf428,	// (0x0006d011) main_postcard_pane_g_ParamLimits

0xf428,	// (0x0006d011) main_postcard_pane_g

0x2fda,	// (0x00060bc3) main_postcard_pane_g4

0xbedc,	// (0x00069ac5) smil_status_volume_pane_g2

0x301d,	// (0x00060c06) postcard_pane_ParamLimits

0x301d,	// (0x00060c06) postcard_pane

0xac48,	// (0x00068831) postcard_pane_g1_ParamLimits

0xac48,	// (0x00068831) postcard_pane_g1

0x306d,	// (0x00060c56) postcard_pane_g2_ParamLimits

0x306d,	// (0x00060c56) postcard_pane_g2

0x3079,	// (0x00060c62) postcard_pane_g3_ParamLimits

0x3079,	// (0x00060c62) postcard_pane_g3

0xac56,	// (0x0006883f) postcard_pane_g4_ParamLimits

0xac56,	// (0x0006883f) postcard_pane_g4

0x3085,	// (0x00060c6e) postcard_pane_g5_ParamLimits

0x3085,	// (0x00060c6e) postcard_pane_g5

0x309a,	// (0x00060c83) postcard_pane_g6_ParamLimits

0x309a,	// (0x00060c83) postcard_pane_g6

0xac48,	// (0x00068831) postcard_pane_g7_ParamLimits

0xac48,	// (0x00068831) postcard_pane_g7

0x0006,

0xf435,	// (0x0006d01e) postcard_pane_g_ParamLimits

0xf435,	// (0x0006d01e) postcard_pane_g

0x30b2,	// (0x00060c9b) main_mp2_pane_g1_ParamLimits

0x30b2,	// (0x00060c9b) main_mp2_pane_g1

0x30c0,	// (0x00060ca9) main_mp2_pane_g2_ParamLimits

0x30c0,	// (0x00060ca9) main_mp2_pane_g2

0x30cc,	// (0x00060cb5) main_mp2_pane_g3_ParamLimits

0x30cc,	// (0x00060cb5) main_mp2_pane_g3

0x0002,

0xf444,	// (0x0006d02d) main_mp2_pane_g_ParamLimits

0xf444,	// (0x0006d02d) main_mp2_pane_g

0x30d8,	// (0x00060cc1) main_mp2_pane_t1_ParamLimits

0x30d8,	// (0x00060cc1) main_mp2_pane_t1

0x30ef,	// (0x00060cd8) main_mp2_pane_t2_ParamLimits

0x30ef,	// (0x00060cd8) main_mp2_pane_t2

0x3103,	// (0x00060cec) main_mp2_pane_t3_ParamLimits

0x3103,	// (0x00060cec) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x0006d034) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x0006d034) main_mp2_pane_t

0xac64,	// (0x0006884d) pec_content_pane_ParamLimits

0xac64,	// (0x0006884d) pec_content_pane

0xa1c0,	// (0x00067da9) scroll_pane_cp015

0xac76,	// (0x0006885f) pec_attribute_pane_ParamLimits

0xac76,	// (0x0006885f) pec_attribute_pane

0x3115,	// (0x00060cfe) pec_content_pane_g1_ParamLimits

0x3115,	// (0x00060cfe) pec_content_pane_g1

0xac86,	// (0x0006886f) pec_content_pane_t1_ParamLimits

0xac86,	// (0x0006886f) pec_content_pane_t1

0xac98,	// (0x00068881) pec_content_pane_t2_ParamLimits

0xac98,	// (0x00068881) pec_content_pane_t2

0x0001,

0xf452,	// (0x0006d03b) pec_content_pane_t_ParamLimits

0xf452,	// (0x0006d03b) pec_content_pane_t

0x3121,	// (0x00060d0a) list_single_graphic_pane_cp01_ParamLimits

0x3121,	// (0x00060d0a) list_single_graphic_pane_cp01

0xee84,	// (0x0006ca6d) bg_popup_sub_pane_cp04

0xacaa,	// (0x00068893) popup_mup_playback_window_g1

0xacb6,	// (0x0006889f) popup_mup_playback_window_t1

0xaccb,	// (0x000688b4) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x0006d040) popup_mup_playback_window_t

0xad02,	// (0x000688eb) main_image_pane_g1_ParamLimits

0xad02,	// (0x000688eb) main_image_pane_g1

0xad45,	// (0x0006892e) scroll_pane_cp018_ParamLimits

0xad45,	// (0x0006892e) scroll_pane_cp018

0xad5d,	// (0x00068946) scroll_pane_cp016_ParamLimits

0xad5d,	// (0x00068946) scroll_pane_cp016

0x31f3,	// (0x00060ddc) smil2_image_pane_ParamLimits

0x31f3,	// (0x00060ddc) smil2_image_pane

0x3229,	// (0x00060e12) smil2_root_pane_ParamLimits

0x3229,	// (0x00060e12) smil2_root_pane

0x3261,	// (0x00060e4a) smil2_text_pane_ParamLimits

0x3261,	// (0x00060e4a) smil2_text_pane

0xec29,	// (0x0006c812) bg_list_pane_cp06

0xad99,	// (0x00068982) grid_radio_pane

0xec29,	// (0x0006c812) bg_popup_window_pane_cp06

0xada3,	// (0x0006898c) main_fmradio_pane_t1

0xbd43,	// (0x0006992c) heading_pane_cp04

0xadb1,	// (0x0006899a) main_fmradio_pane_t2

0xbd4b,	// (0x00069934) popup_cale_lunar_info_window_g1

0xadbf,	// (0x000689a8) main_fmradio_pane_t3

0xbd53,	// (0x0006993c) popup_cale_lunar_info_window_g2

0xadcf,	// (0x000689b8) main_fmradio_pane_t4

0x0001,

0xaddd,	// (0x000689c6) main_fmradio_pane_t5

0x0004,

0xf537,	// (0x0006d120) popup_cale_lunar_info_window_g

0xf46c,	// (0x0006d055) main_fmradio_pane_t

0xadeb,	// (0x000689d4) wait_bar_pane_cp03

0xadf3,	// (0x000689dc) cell_fmradio_pane_ParamLimits

0xadf3,	// (0x000689dc) cell_fmradio_pane

0xac48,	// (0x00068831) cell_fmradio_pane_g1_ParamLimits

0xac48,	// (0x00068831) cell_fmradio_pane_g1

0xec29,	// (0x0006c812) grid_highlight_pane_cp011

0xae08,	// (0x000689f1) poc_content_pane_ParamLimits

0xae08,	// (0x000689f1) poc_content_pane

0xae1a,	// (0x00068a03) scroll_pane_cp019

0x32f1,	// (0x00060eda) popup_call_poc_act_window_ParamLimits

0x32f1,	// (0x00060eda) popup_call_poc_act_window

0x3315,	// (0x00060efe) popup_call_poc_inact_window_ParamLimits

0x3315,	// (0x00060efe) popup_call_poc_inact_window

0xf50e,	// (0x0006d0f7) bg_popup_call_poc_act_pane_g

0xbcbb,	// (0x000698a4) bg_popup_call_poc_inact_pane_g1

0xbcc3,	// (0x000698ac) bg_popup_call_poc_inact_pane_g2

0xae22,	// (0x00068a0b) popup_call_poc_act_window_g2

0xbccb,	// (0x000698b4) bg_popup_call_poc_inact_pane_g3

0xbcd3,	// (0x000698bc) bg_popup_call_poc_inact_pane_g4

0xbcdb,	// (0x000698c4) bg_popup_call_poc_inact_pane_g5

0xae2a,	// (0x00068a13) popup_call_poc_act_window_t1_ParamLimits

0xae2a,	// (0x00068a13) popup_call_poc_act_window_t1

0xae52,	// (0x00068a3b) popup_call_poc_act_window_t2_ParamLimits

0xae52,	// (0x00068a3b) popup_call_poc_act_window_t2

0xae7a,	// (0x00068a63) popup_call_poc_act_window_t3_ParamLimits

0xae7a,	// (0x00068a63) popup_call_poc_act_window_t3

0xaea2,	// (0x00068a8b) popup_call_poc_act_window_t4_ParamLimits

0xaea2,	// (0x00068a8b) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x0006d060) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x0006d060) popup_call_poc_act_window_t

0xbce3,	// (0x000698cc) bg_popup_call_poc_inact_pane_g6

0xbceb,	// (0x000698d4) bg_popup_call_poc_inact_pane_g7

0xbcf3,	// (0x000698dc) bg_popup_call_poc_inact_pane_g8

0xaeb4,	// (0x00068a9d) popup_call_poc_inact_window_g2

0xbcfb,	// (0x000698e4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4fb,	// (0x0006d0e4) bg_popup_call_poc_inact_pane_g

0xaebc,	// (0x00068aa5) popup_call_poc_inact_window_t1_ParamLimits

0xaebc,	// (0x00068aa5) popup_call_poc_inact_window_t1

0xaed1,	// (0x00068aba) popup_call_poc_inact_window_t2_ParamLimits

0xaed1,	// (0x00068aba) popup_call_poc_inact_window_t2

0xaee6,	// (0x00068acf) popup_call_poc_inact_window_t3_ParamLimits

0xaee6,	// (0x00068acf) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x0006d069) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x0006d069) popup_call_poc_inact_window_t

0xbe41,	// (0x00069a2a) context_pane_ParamLimits

0x3c04,	// (0x000617ed) signal_pane_ParamLimits

0xa006,	// (0x00067bef) main_call2_pane

0xbe1a,	// (0x00069a03) popup_phob_thumbnail2_window_ParamLimits

0xbe1a,	// (0x00069a03) popup_phob_thumbnail2_window

0xabf8,	// (0x000687e1) aid_hotspot_pointer_arrow_pane

0xac00,	// (0x000687e9) aid_hotspot_pointer_hand_pane

0x369f,	// (0x00061288) phob_pre_status_pane_g5

0xe775,	// (0x0006c35e) cams_zoom_pane_ParamLimits

0xe775,	// (0x0006c35e) image_vga_pane_ParamLimits

0xeeff,	// (0x0006cae8) main_camera_pane_g1_ParamLimits

0xeeff,	// (0x0006cae8) main_camera_pane_g2_ParamLimits

0xeeff,	// (0x0006cae8) main_camera_pane_g3_ParamLimits

0xeeff,	// (0x0006cae8) main_camera_pane_g4_ParamLimits

0xeeff,	// (0x0006cae8) main_camera_pane_g5_ParamLimits

0xeeff,	// (0x0006cae8) main_camera_pane_g6_ParamLimits

0xeeff,	// (0x0006cae8) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x0006cd94) main_camera_pane_g_ParamLimits

0xa02d,	// (0x00067c16) main_camera_pane_t1_ParamLimits

0xa02d,	// (0x00067c16) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x0006cda5) main_camera_pane_t_ParamLimits

0xee84,	// (0x0006ca6d) bg_popup_preview_window_pane_cp01_ParamLimits

0xee84,	// (0x0006ca6d) bg_popup_preview_window_pane_cp01

0xaefb,	// (0x00068ae4) popup_phob_thumbnail2_window_g1_ParamLimits

0xaefb,	// (0x00068ae4) popup_phob_thumbnail2_window_g1

0xec29,	// (0x0006c812) call2_cli_visual_pane

0x3349,	// (0x00060f32) popup_call2_audio_conf_window_ParamLimits

0x3349,	// (0x00060f32) popup_call2_audio_conf_window

0x3371,	// (0x00060f5a) popup_call2_audio_first_window_ParamLimits

0x3371,	// (0x00060f5a) popup_call2_audio_first_window

0x3407,	// (0x00060ff0) popup_call2_audio_in_window_ParamLimits

0x3407,	// (0x00060ff0) popup_call2_audio_in_window

0x3453,	// (0x0006103c) popup_call2_audio_out_window_ParamLimits

0x3453,	// (0x0006103c) popup_call2_audio_out_window

0x34c5,	// (0x000610ae) popup_call2_audio_second_window_ParamLimits

0x34c5,	// (0x000610ae) popup_call2_audio_second_window

0x352b,	// (0x00061114) popup_call2_audio_wait_window_ParamLimits

0x352b,	// (0x00061114) popup_call2_audio_wait_window

0xec29,	// (0x0006c812) bg_popup_call2_act_pane_cp03

0xee66,	// (0x0006ca4f) list_conf_pane_cp

0xaf07,	// (0x00068af0) popup_call2_audio_conf_window_t1

0xaf15,	// (0x00068afe) list_single_graphic_popup_conf2_pane_ParamLimits

0xaf15,	// (0x00068afe) list_single_graphic_popup_conf2_pane

0xa84f,	// (0x00068438) list_highlight_pane_cp04

0xaf28,	// (0x00068b11) list_single_graphic_popup_conf2_pane_g1

0xa860,	// (0x00068449) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x0006d070) list_single_graphic_popup_conf2_pane_g

0xaf32,	// (0x00068b1b) list_single_graphic_popup_conf2_pane_t1

0xaf40,	// (0x00068b29) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf40,	// (0x00068b29) bg_popup_call2_act_pane_cp01

0xafca,	// (0x00068bb3) call_type_pane_cp05_ParamLimits

0xafca,	// (0x00068bb3) call_type_pane_cp05

0xb01e,	// (0x00068c07) popup_call2_audio_second_window_g1_ParamLimits

0xb01e,	// (0x00068c07) popup_call2_audio_second_window_g1

0xb072,	// (0x00068c5b) popup_call2_audio_second_window_g2_ParamLimits

0xb072,	// (0x00068c5b) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x0006d075) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x0006d075) popup_call2_audio_second_window_g

0xb0d7,	// (0x00068cc0) popup_call2_audio_second_window_t1_ParamLimits

0xb0d7,	// (0x00068cc0) popup_call2_audio_second_window_t1

0xb192,	// (0x00068d7b) popup_call2_audio_second_window_t2_ParamLimits

0xb192,	// (0x00068d7b) popup_call2_audio_second_window_t2

0xb1e5,	// (0x00068dce) popup_call2_audio_second_window_t3_ParamLimits

0xb1e5,	// (0x00068dce) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x0006d07c) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x0006d07c) popup_call2_audio_second_window_t

0xec29,	// (0x0006c812) bg_popup_call2_in_pane_cp02

0xec33,	// (0x0006c81c) call_type_pane_cp04

0x3565,	// (0x0006114e) popup_call2_audio_wait_window_g1

0x356d,	// (0x00061156) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x0006d085) popup_call2_audio_wait_window_g

0xec4b,	// (0x0006c834) popup_call2_audio_wait_window_t3

0xb2d8,	// (0x00068ec1) bg_popup_call2_act_pane_ParamLimits

0xb2d8,	// (0x00068ec1) bg_popup_call2_act_pane

0xb398,	// (0x00068f81) call_type_pane_cp03_ParamLimits

0xb398,	// (0x00068f81) call_type_pane_cp03

0xb3fc,	// (0x00068fe5) popup_call2_audio_first_window_g1_ParamLimits

0xb3fc,	// (0x00068fe5) popup_call2_audio_first_window_g1

0xb46c,	// (0x00069055) popup_call2_audio_first_window_g2_ParamLimits

0xb46c,	// (0x00069055) popup_call2_audio_first_window_g2

0xb4d0,	// (0x000690b9) popup_call2_audio_first_window_g3_ParamLimits

0xb4d0,	// (0x000690b9) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x0006d08a) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x0006d08a) popup_call2_audio_first_window_g

0xb558,	// (0x00069141) popup_call2_audio_first_window_t1_ParamLimits

0xb558,	// (0x00069141) popup_call2_audio_first_window_t1

0xb65b,	// (0x00069244) popup_call2_audio_first_window_t4_ParamLimits

0xb65b,	// (0x00069244) popup_call2_audio_first_window_t4

0xb73e,	// (0x00069327) popup_call2_audio_first_window_t5_ParamLimits

0xb73e,	// (0x00069327) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x0006d095) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x0006d095) popup_call2_audio_first_window_t

0xee7c,	// (0x0006ca65) bg_popup_call2_act_pane_g1

0xbd5d,	// (0x00069946) popup_cale_lunar_info_window_t1

0xbd6b,	// (0x00069954) popup_cale_lunar_info_window_t2

0xbd79,	// (0x00069962) popup_cale_lunar_info_window_t3

0xec29,	// (0x0006c812) bg_popup_call2_bubble_pane

0xb83f,	// (0x00069428) bg_popup_call2_in_pane_cp01_ParamLimits

0xb83f,	// (0x00069428) bg_popup_call2_in_pane_cp01

0xe50c,	// (0x0006c0f5) call_type_pane_cp02

0x3575,	// (0x0006115e) popup_call2_audio_out_window_g1_ParamLimits

0x3575,	// (0x0006115e) popup_call2_audio_out_window_g1

0xb887,	// (0x00069470) popup_call2_audio_out_window_g2_ParamLimits

0xb887,	// (0x00069470) popup_call2_audio_out_window_g2

0x35a1,	// (0x0006118a) popup_call2_audio_out_window_g3_ParamLimits

0x35a1,	// (0x0006118a) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x0006d09e) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x0006d09e) popup_call2_audio_out_window_g

0xb8be,	// (0x000694a7) popup_call2_audio_out_window_t1_ParamLimits

0xb8be,	// (0x000694a7) popup_call2_audio_out_window_t1

0xb91d,	// (0x00069506) popup_call2_audio_out_window_t2_ParamLimits

0xb91d,	// (0x00069506) popup_call2_audio_out_window_t2

0xb971,	// (0x0006955a) popup_call2_audio_out_window_t3_ParamLimits

0xb971,	// (0x0006955a) popup_call2_audio_out_window_t3

0xb987,	// (0x00069570) popup_call2_audio_out_window_t4_ParamLimits

0xb987,	// (0x00069570) popup_call2_audio_out_window_t4

0xb99d,	// (0x00069586) popup_call2_audio_out_window_t5_ParamLimits

0xb99d,	// (0x00069586) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x0006d0a7) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x0006d0a7) popup_call2_audio_out_window_t

0xba01,	// (0x000695ea) bg_popup_call2_in_pane_ParamLimits

0xba01,	// (0x000695ea) bg_popup_call2_in_pane

0xba5d,	// (0x00069646) popup_call2_audio_in_window_g1_ParamLimits

0xba5d,	// (0x00069646) popup_call2_audio_in_window_g1

0xba95,	// (0x0006967e) popup_call2_audio_in_window_g2_ParamLimits

0xba95,	// (0x0006967e) popup_call2_audio_in_window_g2

0xbacd,	// (0x000696b6) popup_call2_audio_in_window_g3_ParamLimits

0xbacd,	// (0x000696b6) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x0006d0b4) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x0006d0b4) popup_call2_audio_in_window_g

0xbb25,	// (0x0006970e) popup_call2_audio_in_window_t1_ParamLimits

0xbb25,	// (0x0006970e) popup_call2_audio_in_window_t1

0xbba5,	// (0x0006978e) popup_call2_audio_in_window_t2_ParamLimits

0xbba5,	// (0x0006978e) popup_call2_audio_in_window_t2

0xbc25,	// (0x0006980e) popup_call2_audio_in_window_t3_ParamLimits

0xbc25,	// (0x0006980e) popup_call2_audio_in_window_t3

0xbc3f,	// (0x00069828) popup_call2_audio_in_window_t4_ParamLimits

0xbc3f,	// (0x00069828) popup_call2_audio_in_window_t4

0xbc51,	// (0x0006983a) popup_call2_audio_in_window_t5_ParamLimits

0xbc51,	// (0x0006983a) popup_call2_audio_in_window_t5

0xbc66,	// (0x0006984f) popup_call2_audio_in_window_t6_ParamLimits

0xbc66,	// (0x0006984f) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x0006d0bd) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x0006d0bd) popup_call2_audio_in_window_t

0xee7c,	// (0x0006ca65) bg_popup_call2_in_pane_g1

0xbd87,	// (0x00069970) popup_cale_lunar_info_window_t4

0x0003,

0xf53c,	// (0x0006d125) popup_cale_lunar_info_window_t

0xee84,	// (0x0006ca6d) bg_popup_call2_rect_pane_ParamLimits

0xee84,	// (0x0006ca6d) bg_popup_call2_rect_pane

0xec29,	// (0x0006c812) call2_cli_visual_graphic_pane

0xec29,	// (0x0006c812) call2_cli_visual_text_pane

0xbeef,	// (0x00069ad8) smil_status_volume_pane_g3

0x0002,

0xee9c,	// (0x0006ca85) call2_cli_visual_graphic_pane_g1

0xee9c,	// (0x0006ca85) call2_cli_visual_graphic_pane_g2

0xee9c,	// (0x0006ca85) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x0006d0ca) call2_cli_visual_graphic_pane_g

0xbc7b,	// (0x00069864) bg_popup_call2_rect_pane_g1

0xf051,	// (0x0006cc3a) bg_popup_call2_rect_pane_g2

0xbc83,	// (0x0006986c) bg_popup_call2_rect_pane_g3

0xbc8b,	// (0x00069874) bg_popup_call2_rect_pane_g4

0xbc93,	// (0x0006987c) bg_popup_call2_rect_pane_g5

0xbc9b,	// (0x00069884) bg_popup_call2_rect_pane_g6

0xbca3,	// (0x0006988c) bg_popup_call2_rect_pane_g7

0xbcab,	// (0x00069894) bg_popup_call2_rect_pane_g8

0xbcb3,	// (0x0006989c) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x0006d0d1) bg_popup_call2_rect_pane_g

0xbcbb,	// (0x000698a4) bg_popup_call2_bubble_pane_g1

0xbcc3,	// (0x000698ac) bg_popup_call2_bubble_pane_g2

0xbccb,	// (0x000698b4) bg_popup_call2_bubble_pane_g3

0xbcd3,	// (0x000698bc) bg_popup_call2_bubble_pane_g4

0xbcdb,	// (0x000698c4) bg_popup_call2_bubble_pane_g5

0xbce3,	// (0x000698cc) bg_popup_call2_bubble_pane_g6

0xbceb,	// (0x000698d4) bg_popup_call2_bubble_pane_g7

0xbcf3,	// (0x000698dc) bg_popup_call2_bubble_pane_g8

0xbcfb,	// (0x000698e4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x0006d0e4) bg_popup_call2_bubble_pane_g

0x0df8,	// (0x0005e9e1) aid_cale_week_size_cell_pane

0x1427,	// (0x0005f010) aid_cams_cif_uncrop_pane_ParamLimits

0x1427,	// (0x0005f010) aid_cams_cif_uncrop_pane

0x157d,	// (0x0005f166) aid_cams_size_cell_ParamLimits

0x157d,	// (0x0005f166) aid_cams_size_cell

0x1591,	// (0x0005f17a) grid_cams_pane_ParamLimits

0x15ab,	// (0x0005f194) linegrid_cams_pane_ParamLimits

0x1689,	// (0x0005f272) call_video_pane_t1

0x16a3,	// (0x0005f28c) call_video_pane_t2

0x0001,

0xf208,	// (0x0006cdf1) call_video_pane_t

0x1aa7,	// (0x0005f690) aid_cale_month_size_cell_pane_ParamLimits

0x1aa7,	// (0x0005f690) aid_cale_month_size_cell_pane

0xf580,	// (0x0006d169) smil_status_volume_pane_g

0xbefc,	// (0x00069ae5) volume_smil_pane_ParamLimits

0x9e48,	// (0x00067a31) aid_popup2_width_pane

0x0d4b,	// (0x0005e934) cell_qdial_pane_g4_ParamLimits

0x0d4b,	// (0x0005e934) cell_qdial_pane_g4

0x29c3,	// (0x000605ac) aid_blid_cardinal_pane_ParamLimits

0x29d3,	// (0x000605bc) aid_blid_destination_pane_ParamLimits

0x29d3,	// (0x000605bc) aid_blid_destination_pane

0xee84,	// (0x0006ca6d) bg_popup_call_poc_act_pane_ParamLimits

0xee84,	// (0x0006ca6d) bg_popup_call_poc_act_pane

0xee84,	// (0x0006ca6d) bg_popup_call_poc_inact_pane_ParamLimits

0xee84,	// (0x0006ca6d) bg_popup_call_poc_inact_pane

0xbd03,	// (0x000698ec) bg_popup_call_poc_act_pane_g1

0xbd0b,	// (0x000698f4) bg_popup_call_poc_act_pane_g2

0xbd13,	// (0x000698fc) bg_popup_call_poc_act_pane_g3

0xbcd3,	// (0x000698bc) bg_popup_call_poc_act_pane_g4

0xbcdb,	// (0x000698c4) bg_popup_call_poc_act_pane_g5

0xbd1b,	// (0x00069904) bg_popup_call_poc_act_pane_g6

0xbceb,	// (0x000698d4) bg_popup_call_poc_act_pane_g7

0xbd23,	// (0x0006990c) bg_popup_call_poc_act_pane_g8

0xec29,	// (0x0006c812) main_usb_pane

0xbdf1,	// (0x000699da) popup_cale_lunar_info_window

0x1970,	// (0x0005f559) im_reading_pane_t1_ParamLimits

0xa118,	// (0x00067d01) list_im_pane_ParamLimits

0xa129,	// (0x00067d12) scroll_pane_cp07_ParamLimits

0xec29,	// (0x0006c812) grid_highlight_pane_cp012

0xee84,	// (0x0006ca6d) mup_scale_pane_ParamLimits

0xac48,	// (0x00068831) main_usb_pane_g1_ParamLimits

0xac48,	// (0x00068831) main_usb_pane_g1

0x35f4,	// (0x000611dd) main_usb_pane_g2_ParamLimits

0x35f4,	// (0x000611dd) main_usb_pane_g2

0x0001,

0xf525,	// (0x0006d10e) main_usb_pane_g_ParamLimits

0xf525,	// (0x0006d10e) main_usb_pane_g

0x360a,	// (0x000611f3) main_usb_pane_t1_ParamLimits

0x360a,	// (0x000611f3) main_usb_pane_t1

0x361c,	// (0x00061205) main_usb_pane_t2_ParamLimits

0x361c,	// (0x00061205) main_usb_pane_t2

0x362e,	// (0x00061217) main_usb_pane_t3_ParamLimits

0x362e,	// (0x00061217) main_usb_pane_t3

0x3640,	// (0x00061229) main_usb_pane_t4_ParamLimits

0x3640,	// (0x00061229) main_usb_pane_t4

0x3655,	// (0x0006123e) main_usb_pane_t5_ParamLimits

0x3655,	// (0x0006123e) main_usb_pane_t5

0x366a,	// (0x00061253) main_usb_pane_t6_ParamLimits

0x366a,	// (0x00061253) main_usb_pane_t6

0x0005,

0xf52a,	// (0x0006d113) main_usb_pane_t_ParamLimits

0x2962,	// (0x0006054b) aid_text_placing

0x296d,	// (0x00060556) main_location2_pane_t1_ParamLimits

0x2983,	// (0x0006056c) main_location2_pane_t2_ParamLimits

0x2999,	// (0x00060582) main_location2_pane_t3_ParamLimits

0x29af,	// (0x00060598) main_location2_pane_t4_ParamLimits

0x29af,	// (0x00060598) main_location2_pane_t4

0xf344,	// (0x0006cf2d) main_location2_pane_t_ParamLimits

0xeeb2,	// (0x0006ca9b) find_pinb_pane_g2_ParamLimits

0xeeb2,	// (0x0006ca9b) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x0006cca9) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x0006cca9) find_pinb_pane_g

0xeebe,	// (0x0006caa7) find_pinb_pane_t1_ParamLimits

0xeed0,	// (0x0006cab9) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0006ccae) find_pinb_pane_t_ParamLimits

0xec29,	// (0x0006c812) main_call3_pane

0x20ac,	// (0x0005fc95) cale_month_day_heading_pane_t1_ParamLimits

0x2132,	// (0x0005fd1b) cale_month_day_heading_pane_t2_ParamLimits

0x21ab,	// (0x0005fd94) cale_month_day_heading_pane_t3_ParamLimits

0x2224,	// (0x0005fe0d) cale_month_day_heading_pane_t4_ParamLimits

0x22a5,	// (0x0005fe8e) cale_month_day_heading_pane_t5_ParamLimits

0x232e,	// (0x0005ff17) cale_month_day_heading_pane_t6_ParamLimits

0x23bf,	// (0x0005ffa8) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x0006ce29) cale_month_day_heading_pane_t_ParamLimits

0xa3a8,	// (0x00067f91) smil_status_volume_pane

0x3041,	// (0x00060c2a) postcard_address_pane_ParamLimits

0x3041,	// (0x00060c2a) postcard_address_pane

0x3057,	// (0x00060c40) postcard_message_pane_ParamLimits

0x3057,	// (0x00060c40) postcard_message_pane

0x35cd,	// (0x000611b6) call2_cli_visual_pane_t1_ParamLimits

0x35cd,	// (0x000611b6) call2_cli_visual_pane_t1

0xbf29,	// (0x00069b12) postcard_message_pane_t1_ParamLimits

0xbf29,	// (0x00069b12) postcard_message_pane_t1

0xbf11,	// (0x00069afa) postcard_address_pane_t1_ParamLimits

0xbf11,	// (0x00069afa) postcard_address_pane_t1

0x3db0,	// (0x00061999) popup_call3_audio_in_window_ParamLimits

0x3db0,	// (0x00061999) popup_call3_audio_in_window

0x3c35,	// (0x0006181e) bg_popup_call3_in_pane_ParamLimits

0x3c35,	// (0x0006181e) bg_popup_call3_in_pane

0x3cb1,	// (0x0006189a) popup_call3_audio_in_window_g1_ParamLimits

0x3cb1,	// (0x0006189a) popup_call3_audio_in_window_g1

0x3cd1,	// (0x000618ba) popup_call3_audio_in_window_g2_ParamLimits

0x3cd1,	// (0x000618ba) popup_call3_audio_in_window_g2

0x3cf1,	// (0x000618da) popup_call3_audio_in_window_g3_ParamLimits

0x3cf1,	// (0x000618da) popup_call3_audio_in_window_g3

0x0003,

0xf587,	// (0x0006d170) popup_call3_audio_in_window_g_ParamLimits

0xf587,	// (0x0006d170) popup_call3_audio_in_window_g

0x3d22,	// (0x0006190b) popup_call3_audio_in_window_t1_ParamLimits

0x3d22,	// (0x0006190b) popup_call3_audio_in_window_t1

0x3d60,	// (0x00061949) popup_call3_audio_in_window_t2_ParamLimits

0x3d60,	// (0x00061949) popup_call3_audio_in_window_t2

0x3d9e,	// (0x00061987) popup_call3_audio_in_window_t3_ParamLimits

0x3d9e,	// (0x00061987) popup_call3_audio_in_window_t3

0x0002,

0xf590,	// (0x0006d179) popup_call3_audio_in_window_t_ParamLimits

0xf590,	// (0x0006d179) popup_call3_audio_in_window_t

0xa006,	// (0x00067bef) bg_popup_call3_rect_pane

0xbc7b,	// (0x00069864) bg_popup_call3_rect_pane_g1

0xf051,	// (0x0006cc3a) bg_popup_call3_rect_pane_g2

0xbc83,	// (0x0006986c) bg_popup_call3_rect_pane_g3

0xbc8b,	// (0x00069874) bg_popup_call3_rect_pane_g4

0xbc93,	// (0x0006987c) bg_popup_call3_rect_pane_g5

0xbc9b,	// (0x00069884) bg_popup_call3_rect_pane_g6

0xbca3,	// (0x0006988c) bg_popup_call3_rect_pane_g7

0xe3de,	// (0x0006bfc7) mup_visualizer_osc_pane

0xe3de,	// (0x0006bfc7) mup_visualizer_spec_pane

0x3c65,	// (0x0006184e) call3_video_qcif_pane_ParamLimits

0x3c65,	// (0x0006184e) call3_video_qcif_pane

0x3c78,	// (0x00061861) call3_video_qcif_uncrop_pane_ParamLimits

0x3c78,	// (0x00061861) call3_video_qcif_uncrop_pane

0x3c88,	// (0x00061871) call3_video_subqcif_pane_ParamLimits

0x3c88,	// (0x00061871) call3_video_subqcif_pane

0x3c9e,	// (0x00061887) call3_video_subqcif_uncrop_pane_ParamLimits

0x3c9e,	// (0x00061887) call3_video_subqcif_uncrop_pane

0x3d11,	// (0x000618fa) popup_call3_audio_in_window_g4_ParamLimits

0x3d11,	// (0x000618fa) popup_call3_audio_in_window_g4

0xe3de,	// (0x0006bfc7) mup_spec_half_pane

0xe3de,	// (0x0006bfc7) mup_spec_half_pane_cp

0xe3de,	// (0x0006bfc7) mup_osc_middle_pane

0xa05b,	// (0x00067c44) mup_visualizer_osc_pane_g1

0xbea2,	// (0x00069a8b) mup_spec_bar_pane_ParamLimits

0xbea2,	// (0x00069a8b) mup_spec_bar_pane

0xa05b,	// (0x00067c44) mup_spec_bar_pane_g1

0xa05b,	// (0x00067c44) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x0006cfa7) mup_spec_bar_pane_g

0x0df8,	// (0x0005e9e1) aid_cale_week_size_cell_pane_ParamLimits

0x0e12,	// (0x0005e9fb) bg_cale_heading_pane_ParamLimits

0x0e36,	// (0x0005ea1f) bg_cale_pane_cp01_ParamLimits

0x0e53,	// (0x0005ea3c) cale_week_corner_pane_ParamLimits

0x0e72,	// (0x0005ea5b) cale_week_day_heading_pane_ParamLimits

0x0e9b,	// (0x0005ea84) cale_week_scroll_pane_g1_ParamLimits

0x0eba,	// (0x0005eaa3) cale_week_scroll_pane_g2_ParamLimits

0x0ed2,	// (0x0005eabb) cale_week_scroll_pane_g3_ParamLimits

0x0eea,	// (0x0005ead3) cale_week_scroll_pane_g4_ParamLimits

0x0f02,	// (0x0005eaeb) cale_week_scroll_pane_g5_ParamLimits

0x0f22,	// (0x0005eb0b) cale_week_scroll_pane_g6_ParamLimits

0x0f42,	// (0x0005eb2b) cale_week_scroll_pane_g7_ParamLimits

0x0f66,	// (0x0005eb4f) cale_week_scroll_pane_g8_ParamLimits

0x0f8a,	// (0x0005eb73) cale_week_scroll_pane_g9_ParamLimits

0x0fa2,	// (0x0005eb8b) cale_week_scroll_pane_g10_ParamLimits

0x0fba,	// (0x0005eba3) cale_week_scroll_pane_g11_ParamLimits

0x0fd2,	// (0x0005ebbb) cale_week_scroll_pane_g12_ParamLimits

0x0ff6,	// (0x0005ebdf) cale_week_scroll_pane_g13_ParamLimits

0x0ff6,	// (0x0005ebdf) cale_week_scroll_pane_g14_ParamLimits

0x0ff6,	// (0x0005ebdf) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x0006cd3a) cale_week_scroll_pane_g_ParamLimits

0x103e,	// (0x0005ec27) cale_week_time_pane_ParamLimits

0x1062,	// (0x0005ec4b) grid_cale_week_pane_ParamLimits

0x9f7c,	// (0x00067b65) listscroll_cale_week_pane_t1

0x9f8e,	// (0x00067b77) scroll_pane_cp08_ParamLimits

0x1b1f,	// (0x0005f708) cale_month_corner_pane_ParamLimits

0xa372,	// (0x00067f5b) cale_month_pane_t1

0x2027,	// (0x0005fc10) cale_month_week_pane_ParamLimits

0x27a2,	// (0x0006038b) popup_call_status_window_g1_ParamLimits

0x27b6,	// (0x0006039f) popup_call_status_window_g2_ParamLimits

0x27ca,	// (0x000603b3) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x0006ceb4) popup_call_status_window_g_ParamLimits

0xa76d,	// (0x00068356) aid_call2_pane

0x2e64,	// (0x00060a4d) msg_header_pane_g1

0x3041,	// (0x00060c2a) postcard_address2_pane_ParamLimits

0x3041,	// (0x00060c2a) postcard_address2_pane

0x3057,	// (0x00060c40) postcard_message2_pane_ParamLimits

0x3057,	// (0x00060c40) postcard_message2_pane

0x3c12,	// (0x000617fb) message2_row_pane_ParamLimits

0x3c12,	// (0x000617fb) message2_row_pane

0xbe5c,	// (0x00069a45) address2_row_pane_ParamLimits

0xbe5c,	// (0x00069a45) address2_row_pane

0xbe6f,	// (0x00069a58) postcard_message2_row_pane_g1

0xbe77,	// (0x00069a60) postcard_message2_row_pane_t1

0xbe6f,	// (0x00069a58) address2_row_pane_g1

0xbe77,	// (0x00069a60) address2_row_pane_t1

0x13cf,	// (0x0005efb8) aid_size_cell_vorec

0xec29,	// (0x0006c812) main_rss_pane

0xbe85,	// (0x00069a6e) rss_list_single_pane_ParamLimits

0xbe85,	// (0x00069a6e) rss_list_single_pane

0xbe93,	// (0x00069a7c) rss_list_single_pane_t1

0xbe93,	// (0x00069a7c) rss_list_single_pane_t2

0x0001,

0xf57b,	// (0x0006d164) rss_list_single_pane_t

0xec29,	// (0x0006c812) main_camera2_pane

0xec29,	// (0x0006c812) main_video2_pane

0xbf45,	// (0x00069b2e) cams_zoom_pane_cp2_ParamLimits

0xbf45,	// (0x00069b2e) cams_zoom_pane_cp2

0xbf45,	// (0x00069b2e) image2_vga_pane_ParamLimits

0xbf45,	// (0x00069b2e) image2_vga_pane

0xbf53,	// (0x00069b3c) main_camera2_pane_g1_ParamLimits

0xbf53,	// (0x00069b3c) main_camera2_pane_g1

0xbf53,	// (0x00069b3c) main_camera2_pane_g2_ParamLimits

0xbf53,	// (0x00069b3c) main_camera2_pane_g2

0xbf53,	// (0x00069b3c) main_camera2_pane_g3_ParamLimits

0xbf53,	// (0x00069b3c) main_camera2_pane_g3

0xbf53,	// (0x00069b3c) main_camera2_pane_g4_ParamLimits

0xbf53,	// (0x00069b3c) main_camera2_pane_g4

0xbf53,	// (0x00069b3c) main_camera2_pane_g5_ParamLimits

0xbf53,	// (0x00069b3c) main_camera2_pane_g5

0xbf53,	// (0x00069b3c) main_camera2_pane_g6_ParamLimits

0xbf53,	// (0x00069b3c) main_camera2_pane_g6

0xbf53,	// (0x00069b3c) main_camera2_pane_g7_ParamLimits

0xbf53,	// (0x00069b3c) main_camera2_pane_g7

0xbf53,	// (0x00069b3c) main_camera2_pane_g8_ParamLimits

0xbf53,	// (0x00069b3c) main_camera2_pane_g8

0x0008,

0xf597,	// (0x0006d180) main_camera2_pane_g_ParamLimits

0xf597,	// (0x0006d180) main_camera2_pane_g

0x3dd2,	// (0x000619bb) main_camera2_pane_t1_ParamLimits

0x3dd2,	// (0x000619bb) main_camera2_pane_t1

0x3dd2,	// (0x000619bb) main_camera2_pane_t2_ParamLimits

0x3dd2,	// (0x000619bb) main_camera2_pane_t2

0x3dd2,	// (0x000619bb) main_camera2_pane_t3_ParamLimits

0x3dd2,	// (0x000619bb) main_camera2_pane_t3

0x3dd2,	// (0x000619bb) main_camera2_pane_t4_ParamLimits

0x3dd2,	// (0x000619bb) main_camera2_pane_t4

0x0006,

0xf5aa,	// (0x0006d193) main_camera2_pane_t_ParamLimits

0xf5aa,	// (0x0006d193) main_camera2_pane_t

0xbf97,	// (0x00069b80) cams_zoom_pane_cp4_ParamLimits

0xbf97,	// (0x00069b80) cams_zoom_pane_cp4

0x3de6,	// (0x000619cf) image2_cif_pane_ParamLimits

0x3de6,	// (0x000619cf) image2_cif_pane

0x9eb3,	// (0x00067a9c) image2_subqcif_pane_ParamLimits

0x9eb3,	// (0x00067a9c) image2_subqcif_pane

0x3df4,	// (0x000619dd) main_video2_pane_g1_ParamLimits

0x3df4,	// (0x000619dd) main_video2_pane_g1

0x3df4,	// (0x000619dd) main_video2_pane_g2_ParamLimits

0x3df4,	// (0x000619dd) main_video2_pane_g2

0x3df4,	// (0x000619dd) main_video2_pane_g3_ParamLimits

0x3df4,	// (0x000619dd) main_video2_pane_g3

0x3df4,	// (0x000619dd) main_video2_pane_g4_ParamLimits

0x3df4,	// (0x000619dd) main_video2_pane_g4

0x3df4,	// (0x000619dd) main_video2_pane_g5_ParamLimits

0x3df4,	// (0x000619dd) main_video2_pane_g5

0x3df4,	// (0x000619dd) main_video2_pane_g6_ParamLimits

0x3df4,	// (0x000619dd) main_video2_pane_g6

0x0005,

0xf5b9,	// (0x0006d1a2) main_video2_pane_g_ParamLimits

0xf5b9,	// (0x0006d1a2) main_video2_pane_g

0x3e02,	// (0x000619eb) main_video2_pane_t1_ParamLimits

0x3e02,	// (0x000619eb) main_video2_pane_t1

0x3e02,	// (0x000619eb) main_video2_pane_t2_ParamLimits

0x3e02,	// (0x000619eb) main_video2_pane_t2

0x3e02,	// (0x000619eb) main_video2_pane_t3_ParamLimits

0x3e02,	// (0x000619eb) main_video2_pane_t3

0x0002,

0xf5c6,	// (0x0006d1af) main_video2_pane_t_ParamLimits

0xf5c6,	// (0x0006d1af) main_video2_pane_t

0x3703,	// (0x000612ec) call_muted_g2

0x0001,

0xf56d,	// (0x0006d156) call_muted_g

0xec29,	// (0x0006c812) main_mup2_pane

0xaaf7,	// (0x000686e0) main_mup2_pane_g1_ParamLimits

0xaaf7,	// (0x000686e0) main_mup2_pane_g1

0xaaf7,	// (0x000686e0) main_mup2_pane_g2_ParamLimits

0xaaf7,	// (0x000686e0) main_mup2_pane_g2

0xc08f,	// (0x00069c78) main_mup_pane_g13_cp1

0x9ec1,	// (0x00067aaa) mup_volume_pane_cp1

0xaaf7,	// (0x000686e0) main_mup2_pane_g4_ParamLimits

0xaaf7,	// (0x000686e0) main_mup2_pane_g4

0xaaf7,	// (0x000686e0) main_mup2_pane_g5_ParamLimits

0xaaf7,	// (0x000686e0) main_mup2_pane_g5

0xaaf7,	// (0x000686e0) main_mup2_pane_g6_ParamLimits

0xaaf7,	// (0x000686e0) main_mup2_pane_g6

0xaaf7,	// (0x000686e0) main_mup2_pane_g7_ParamLimits

0xaaf7,	// (0x000686e0) main_mup2_pane_g7

0x0006,

0xf5cd,	// (0x0006d1b6) main_mup2_pane_g_ParamLimits

0xf5cd,	// (0x0006d1b6) main_mup2_pane_g

0xab05,	// (0x000686ee) main_mup2_pane_t1_ParamLimits

0xab05,	// (0x000686ee) main_mup2_pane_t1

0xab05,	// (0x000686ee) main_mup2_pane_t2_ParamLimits

0xab05,	// (0x000686ee) main_mup2_pane_t2

0xab05,	// (0x000686ee) main_mup2_pane_t3_ParamLimits

0xab05,	// (0x000686ee) main_mup2_pane_t3

0xab05,	// (0x000686ee) main_mup2_pane_t4_ParamLimits

0xab05,	// (0x000686ee) main_mup2_pane_t4

0xab05,	// (0x000686ee) main_mup2_pane_t5_ParamLimits

0xab05,	// (0x000686ee) main_mup2_pane_t5

0xab05,	// (0x000686ee) main_mup2_pane_t6_ParamLimits

0xab05,	// (0x000686ee) main_mup2_pane_t6

0x0005,

0xf5dc,	// (0x0006d1c5) main_mup2_pane_t_ParamLimits

0xf5dc,	// (0x0006d1c5) main_mup2_pane_t

0xab2d,	// (0x00068716) mup2_visualizer_pane_ParamLimits

0xab2d,	// (0x00068716) mup2_visualizer_pane

0xab2d,	// (0x00068716) mup_progress_pane_cp_ParamLimits

0xab2d,	// (0x00068716) mup_progress_pane_cp

0xc070,	// (0x00069c59) mup_volume_pane_cp_ParamLimits

0xc070,	// (0x00069c59) mup_volume_pane_cp

0xeeff,	// (0x0006cae8) mup2_visualizer_pane_g1_ParamLimits

0xeeff,	// (0x0006cae8) mup2_visualizer_pane_g1

0xef0d,	// (0x0006caf6) mup2_visualizer_pane_g2_ParamLimits

0xef0d,	// (0x0006caf6) mup2_visualizer_pane_g2

0xef0d,	// (0x0006caf6) mup2_visualizer_pane_g3_ParamLimits

0xef0d,	// (0x0006caf6) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0006ccb3) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0006ccb3) mup2_visualizer_pane_g

0xad91,	// (0x0006897a) aid_size_cell_fmradio

0x38b3,	// (0x0006149c) aid_height_parent_landcape

0xa1a7,	// (0x00067d90) wml_content_pane_cp

0xa1af,	// (0x00067d98) wml_tabs_pane

0xa1b8,	// (0x00067da1) popup_wml_miniature_window

0xa1c0,	// (0x00067da9) scroll_pane_cp021

0xa1d4,	// (0x00067dbd) wml_content_pane_comp8

0xec29,	// (0x0006c812) bg_popup_sub_pane_cp05

0xbfbb,	// (0x00069ba4) popup_wml_miniature_window_g1

0xbfc3,	// (0x00069bac) wml_miniature_view_pane

0x3e16,	// (0x000619ff) aid_size_wml_view

0x3e1e,	// (0x00061a07) wml_miniature_view_pane_g1

0x3e27,	// (0x00061a10) wml_miniature_view_pane_g2

0x3e30,	// (0x00061a19) wml_miniature_view_pane_g3

0x3e38,	// (0x00061a21) wml_miniature_view_pane_g4

0x3e40,	// (0x00061a29) wml_miniature_view_pane_g5

0x3e48,	// (0x00061a31) wml_miniature_view_pane_g6

0x3e50,	// (0x00061a39) wml_miniature_view_pane_g7

0x3e58,	// (0x00061a41) wml_miniature_view_pane_g8

0x0007,

0xf5e9,	// (0x0006d1d2) wml_miniature_view_pane_g

0xbfcb,	// (0x00069bb4) background_graphic_ParamLimits

0xbfcb,	// (0x00069bb4) background_graphic

0xbfd7,	// (0x00069bc0) wml_tabs_2_pane

0xbfe0,	// (0x00069bc9) wml_tabs_3_pane_ParamLimits

0xbfe0,	// (0x00069bc9) wml_tabs_3_pane

0xbff2,	// (0x00069bdb) wml_tabs_4_pane_ParamLimits

0xbff2,	// (0x00069bdb) wml_tabs_4_pane

0xc008,	// (0x00069bf1) wml_tabs_5_pane_ParamLimits

0xc008,	// (0x00069bf1) wml_tabs_5_pane

0xc022,	// (0x00069c0b) wml_tabs_pane_g2_ParamLimits

0xc022,	// (0x00069c0b) wml_tabs_pane_g2

0xc037,	// (0x00069c20) wml_tabs_pane_g3_ParamLimits

0xc037,	// (0x00069c20) wml_tabs_pane_g3

0xc04c,	// (0x00069c35) wml_tabs_2_active_pane_ParamLimits

0xc04c,	// (0x00069c35) wml_tabs_2_active_pane

0xc04c,	// (0x00069c35) wml_tabs_2_passive_pane_ParamLimits

0xc04c,	// (0x00069c35) wml_tabs_2_passive_pane

0x3e60,	// (0x00061a49) wml_tabs_3_active_pane_cp_ParamLimits

0x3e60,	// (0x00061a49) wml_tabs_3_active_pane_cp

0x3e75,	// (0x00061a5e) wml_tabs_3_passive_pane_ParamLimits

0x3e75,	// (0x00061a5e) wml_tabs_3_passive_pane

0x3e88,	// (0x00061a71) wml_tabs_3_passive_pane_cp_ParamLimits

0x3e88,	// (0x00061a71) wml_tabs_3_passive_pane_cp

0x3e9f,	// (0x00061a88) tabs_4_active_pane

0x3ea7,	// (0x00061a90) tabs_4_passive_pane

0x3eb1,	// (0x00061a9a) tabs_4_passive_pane_cp

0x3eb9,	// (0x00061aa2) tabs_4_passive_pane_cp2

0x35ec,	// (0x000611d5) aid_height_text

0xab2d,	// (0x00068716) mup_volume_cont_pane_ParamLimits

0xab2d,	// (0x00068716) mup_volume_cont_pane

0xe3de,	// (0x0006bfc7) aid_size_cell_pinb

0xe3de,	// (0x0006bfc7) aid_size_list_pinb

0xab2d,	// (0x00068716) mup2_volume_cont_pane_ParamLimits

0xab2d,	// (0x00068716) mup2_volume_cont_pane

0xc05a,	// (0x00069c43) mup2_volume_cont_pane_g1_ParamLimits

0xc05a,	// (0x00069c43) mup2_volume_cont_pane_g1

0x07ec,	// (0x0005e3d5) aid_size_cell_touch_ParamLimits

0x07ec,	// (0x0005e3d5) aid_size_cell_touch

0x0a18,	// (0x0005e601) touch_pane_ParamLimits

0x0a18,	// (0x0005e601) touch_pane

0x9ec1,	// (0x00067aaa) main_rss2_pane

0xc099,	// (0x00069c82) listscroll_rss2_pane

0xc0a2,	// (0x00069c8b) rss2_navigation_pane

0xc0aa,	// (0x00069c93) list_rss2_pane

0xa8f4,	// (0x000684dd) scroll_pane_cp22

0xc0b2,	// (0x00069c9b) rss2_navigation_pane_g1

0xc0bb,	// (0x00069ca4) rss2_navigation_pane_g2

0xc0c3,	// (0x00069cac) rss2_navigation_pane_g3

0x0002,

0xf5fa,	// (0x0006d1e3) rss2_navigation_pane_g

0xc0cb,	// (0x00069cb4) rss2_navigation_pane_t1

0x3ec3,	// (0x00061aac) rss2_list_single_pane_ParamLimits

0x3ec3,	// (0x00061aac) rss2_list_single_pane

0xc0d9,	// (0x00069cc2) rss2_list_single_pane_t2

0xc0e7,	// (0x00069cd0) rss2_list_single_pane_t3_ParamLimits

0xc0e7,	// (0x00069cd0) rss2_list_single_pane_t3

0xc104,	// (0x00069ced) rss2_list_single_pane_t4

0x2673,	// (0x0006025c) smil_status_pane_g1

0x9eb3,	// (0x00067a9c) main_image2_pane_ParamLimits

0x9eb3,	// (0x00067a9c) main_image2_pane

0xbf53,	// (0x00069b3c) main_camera2_pane_g9_ParamLimits

0xbf53,	// (0x00069b3c) main_camera2_pane_g9

0x3dd2,	// (0x000619bb) main_camera2_pane_t5_ParamLimits

0x3dd2,	// (0x000619bb) main_camera2_pane_t5

0xbf61,	// (0x00069b4a) main_camera2_pane_t6_ParamLimits

0xbf61,	// (0x00069b4a) main_camera2_pane_t6

0x3edd,	// (0x00061ac6) main_image2_pane_g1_ParamLimits

0x3edd,	// (0x00061ac6) main_image2_pane_g1

0x329b,	// (0x00060e84) smil2_video_pane_ParamLimits

0x329b,	// (0x00060e84) smil2_video_pane

0x9e64,	// (0x00067a4d) aid_zoom_text_primary_cp

0x9ea9,	// (0x00067a92) popup_preview_fixed_window

0xa110,	// (0x00067cf9) im_reading_pane_g1

0x3dc4,	// (0x000619ad) cams2_bc_adjust_pane_cp_ParamLimits

0x3dc4,	// (0x000619ad) cams2_bc_adjust_pane_cp

0xbf89,	// (0x00069b72) cams2_bc_adjust_pane_ParamLimits

0xbf89,	// (0x00069b72) cams2_bc_adjust_pane

0xc08f,	// (0x00069c78) cams2_bc_adjust_pane_g1

0x9ec1,	// (0x00067aaa) cams2_slider_pane

0xc08f,	// (0x00069c78) cams2_slider_pane_g1

0xc08f,	// (0x00069c78) cams2_slider_pane_g2

0x0006,

0xf601,	// (0x0006d1ea) cams2_slider_pane_g

0x0aae,	// (0x0005e697) calc_display_pane_ParamLimits

0x0ad3,	// (0x0005e6bc) calc_paper_pane_ParamLimits

0x0af6,	// (0x0005e6df) grid_calc_pane_ParamLimits

0xa7cf,	// (0x000683b8) popup_clock_digital_window_t1_ParamLimits

0xad2e,	// (0x00068917) main_image_pane_t1

0x0a8e,	// (0x0005e677) aid_size_cell_calc_ParamLimits

0x0a8e,	// (0x0005e677) aid_size_cell_calc

0x3909,	// (0x000614f2) popup_blid_sat_info2_window_ParamLimits

0x3909,	// (0x000614f2) popup_blid_sat_info2_window

0xc112,	// (0x00069cfb) aid_size_cell_blid

0xc11a,	// (0x00069d03) bg_popup_window_pane_cp07

0xc13d,	// (0x00069d26) grid_popup_blid_pane

0xc147,	// (0x00069d30) heading_pane_cp05_ParamLimits

0xc147,	// (0x00069d30) heading_pane_cp05

0xc211,	// (0x00069dfa) cell_popup_blid_pane_ParamLimits

0xc211,	// (0x00069dfa) cell_popup_blid_pane

0xc23b,	// (0x00069e24) cell_popup_blid_pane_g1

0xc243,	// (0x00069e2c) cell_popup_blid_pane_t1

0xab2d,	// (0x00068716) mup2_indicator_pane_ParamLimits

0xab2d,	// (0x00068716) mup2_indicator_pane

0xe3de,	// (0x0006bfc7) mup2_visualizer_osc_pane

0xbfa5,	// (0x00069b8e) mup2_visualizer_spec_pane_ParamLimits

0xbfa5,	// (0x00069b8e) mup2_visualizer_spec_pane

0xe3de,	// (0x0006bfc7) mup2_spec_half_pane

0xe3de,	// (0x0006bfc7) mup2_spec_half_pane_cp

0xc251,	// (0x00069e3a) mup2_spec_bar_pane_ParamLimits

0xc251,	// (0x00069e3a) mup2_spec_bar_pane

0xa05b,	// (0x00067c44) mup2_spec_bar_pane_g1

0xc270,	// (0x00069e59) mup2_spec_bar_pane_g2

0x0001,

0xf627,	// (0x0006d210) mup2_spec_bar_pane_g

0xe3de,	// (0x0006bfc7) mup2_osc_middle_pane

0xa05b,	// (0x00067c44) mup2_visualizer_osc_pane_g1

0xe408,	// (0x0006bff1) popup_number_entry_window_t1_ParamLimits

0xe41b,	// (0x0006c004) popup_number_entry_window_t2_ParamLimits

0xe42d,	// (0x0006c016) popup_number_entry_window_t3_ParamLimits

0xe43f,	// (0x0006c028) popup_number_entry_window_t5_ParamLimits

0xe43f,	// (0x0006c028) popup_number_entry_window_t5

0xf06b,	// (0x0006cc54) popup_number_entry_window_t_ParamLimits

0xe474,	// (0x0006c05d) text_title_cp2_ParamLimits

0xac08,	// (0x000687f1) aid_hotspot_pointer_text2_pane

0xac2e,	// (0x00068817) main_viewer_pane_g9_ParamLimits

0xac2e,	// (0x00068817) main_viewer_pane_g9

0xa372,	// (0x00067f5b) cale_month_pane_t1_ParamLimits

0xa3dd,	// (0x00067fc6) bg_cale_pane_ParamLimits

0xa3f5,	// (0x00067fde) list_cale_pane_ParamLimits

0xa406,	// (0x00067fef) listscroll_cale_day_pane_t1

0xa418,	// (0x00068001) scroll_pane_cp09_ParamLimits

0x2b9a,	// (0x00060783) main_mup_eq_pane_t1_ParamLimits

0x2b9a,	// (0x00060783) main_mup_eq_pane_t1

0x2bb6,	// (0x0006079f) main_mup_eq_pane_t2_ParamLimits

0x2bb6,	// (0x0006079f) main_mup_eq_pane_t2

0x2bd2,	// (0x000607bb) main_mup_eq_pane_t3_ParamLimits

0x2bd2,	// (0x000607bb) main_mup_eq_pane_t3

0x2bf0,	// (0x000607d9) main_mup_eq_pane_t4_ParamLimits

0x2bf0,	// (0x000607d9) main_mup_eq_pane_t4

0x2c0e,	// (0x000607f7) main_mup_eq_pane_t5_ParamLimits

0x2c0e,	// (0x000607f7) main_mup_eq_pane_t5

0x2c2c,	// (0x00060815) main_mup_eq_pane_t6_ParamLimits

0x2c2c,	// (0x00060815) main_mup_eq_pane_t6

0x2c42,	// (0x0006082b) main_mup_eq_pane_t7_ParamLimits

0x2c42,	// (0x0006082b) main_mup_eq_pane_t7

0x2c58,	// (0x00060841) main_mup_eq_pane_t8_ParamLimits

0x2c58,	// (0x00060841) main_mup_eq_pane_t8

0x2c6e,	// (0x00060857) main_mup_eq_pane_t9_ParamLimits

0x2c6e,	// (0x00060857) main_mup_eq_pane_t9

0x2c8a,	// (0x00060873) main_mup_eq_pane_t10_ParamLimits

0x2c8a,	// (0x00060873) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x0006cfb3) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x0006cfb3) main_mup_eq_pane_t

0x2d5f,	// (0x00060948) mup_equalizer_pane_cp5_ParamLimits

0x2d77,	// (0x00060960) mup_equalizer_pane_cp6_ParamLimits

0x2d8f,	// (0x00060978) mup_equalizer_pane_cp7_ParamLimits

0x9ec1,	// (0x00067aaa) main_gallery_pane

0xbec1,	// (0x00069aaa) smil2_volume_pane

0xbec9,	// (0x00069ab2) smil_status_volume_pane_g1_ParamLimits

0xbedc,	// (0x00069ac5) smil_status_volume_pane_g2_ParamLimits

0xbeef,	// (0x00069ad8) smil_status_volume_pane_g3_ParamLimits

0xf580,	// (0x0006d169) smil_status_volume_pane_g_ParamLimits

0xc11a,	// (0x00069d03) bg_popup_window_pane_cp07_ParamLimits

0xc128,	// (0x00069d11) blid_firmament_pane

0xe775,	// (0x0006c35e) aid_size_cell_gallery_ParamLimits

0xe775,	// (0x0006c35e) aid_size_cell_gallery

0xe775,	// (0x0006c35e) grid_gallery_pane_ParamLimits

0xe775,	// (0x0006c35e) grid_gallery_pane

0xc11a,	// (0x00069d03) cell_gallery_pane_ParamLimits

0xc11a,	// (0x00069d03) cell_gallery_pane

0xe775,	// (0x0006c35e) bg_cell_gallery_focus_pane_ParamLimits

0xe775,	// (0x0006c35e) bg_cell_gallery_focus_pane

0xeeff,	// (0x0006cae8) cell_gallery_pane_g1_ParamLimits

0xeeff,	// (0x0006cae8) cell_gallery_pane_g1

0xeeff,	// (0x0006cae8) cell_gallery_pane_g2_ParamLimits

0xeeff,	// (0x0006cae8) cell_gallery_pane_g2

0xeeff,	// (0x0006cae8) cell_gallery_pane_g3_ParamLimits

0xeeff,	// (0x0006cae8) cell_gallery_pane_g3

0xef0d,	// (0x0006caf6) cell_gallery_pane_g4_ParamLimits

0xef0d,	// (0x0006caf6) cell_gallery_pane_g4

0x0003,

0xf62c,	// (0x0006d215) cell_gallery_pane_g_ParamLimits

0xf62c,	// (0x0006d215) cell_gallery_pane_g

0xc27a,	// (0x00069e63) bg_cell_gallery_focus_pane_g1

0xc282,	// (0x00069e6b) bg_cell_gallery_focus_pane_g2

0xc28a,	// (0x00069e73) bg_cell_gallery_focus_pane_g3

0xc292,	// (0x00069e7b) bg_cell_gallery_focus_pane_g4

0xc29a,	// (0x00069e83) bg_cell_gallery_focus_pane_g5

0xc2a2,	// (0x00069e8b) bg_cell_gallery_focus_pane_g6

0xc2aa,	// (0x00069e93) bg_cell_gallery_focus_pane_g7

0xc2b2,	// (0x00069e9b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf635,	// (0x0006d21e) bg_cell_gallery_focus_pane_g

0xc2ba,	// (0x00069ea3) aid_firma_cardinal

0xc2ce,	// (0x00069eb7) blid_firmament_pane_t1

0xc2e5,	// (0x00069ece) blid_firmament_pane_t2

0xc2fc,	// (0x00069ee5) blid_firmament_pane_t3

0xc313,	// (0x00069efc) blid_firmament_pane_t4

0x0003,

0xf646,	// (0x0006d22f) blid_firmament_pane_t

0xc32a,	// (0x00069f13) blid_sat_info_pane

0xa05b,	// (0x00067c44) blid_sat_info_pane_g1

0xa05b,	// (0x00067c44) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x0006cfa7) blid_sat_info_pane_g

0xc33a,	// (0x00069f23) blid_sat_info_pane_t1

0xc348,	// (0x00069f31) smil2_volume_content_pane

0xc351,	// (0x00069f3a) smil2_volume_pane_g1

0xefe8,	// (0x0006cbd1) smil2_volume_content_pane_g1

0xc359,	// (0x00069f42) smil2_volume_content_pane_g2

0xc362,	// (0x00069f4b) smil2_volume_content_pane_g3

0xc36b,	// (0x00069f54) smil2_volume_content_pane_g4

0xc374,	// (0x00069f5d) smil2_volume_content_pane_g5

0xc37d,	// (0x00069f66) smil2_volume_content_pane_g6

0xc386,	// (0x00069f6f) smil2_volume_content_pane_g7

0xc38f,	// (0x00069f78) smil2_volume_content_pane_g8

0xc398,	// (0x00069f81) smil2_volume_content_pane_g9

0xc3a1,	// (0x00069f8a) smil2_volume_content_pane_g10

0x0009,

0xf64f,	// (0x0006d238) smil2_volume_content_pane_g

0x1130,	// (0x0005ed19) cale_week_day_heading_pane_t1_ParamLimits

0x115a,	// (0x0005ed43) cale_week_day_heading_pane_t2_ParamLimits

0x1189,	// (0x0005ed72) cale_week_day_heading_pane_t3_ParamLimits

0x11b8,	// (0x0005eda1) cale_week_day_heading_pane_t4_ParamLimits

0x11e7,	// (0x0005edd0) cale_week_day_heading_pane_t5_ParamLimits

0x121a,	// (0x0005ee03) cale_week_day_heading_pane_t6_ParamLimits

0x1251,	// (0x0005ee3a) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x0006cd5b) cale_week_day_heading_pane_t_ParamLimits

0x9fab,	// (0x00067b94) bg_cale_side_pane_ParamLimits

0x127b,	// (0x0005ee64) cale_week_time_pane_t1_ParamLimits

0x1295,	// (0x0005ee7e) cale_week_time_pane_t2_ParamLimits

0x12af,	// (0x0005ee98) cale_week_time_pane_t3_ParamLimits

0x12c9,	// (0x0005eeb2) cale_week_time_pane_t4_ParamLimits

0x12e3,	// (0x0005eecc) cale_week_time_pane_t5_ParamLimits

0x12fd,	// (0x0005eee6) cale_week_time_pane_t6_ParamLimits

0x131d,	// (0x0005ef06) cale_week_time_pane_t7_ParamLimits

0x1343,	// (0x0005ef2c) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x0006cd6a) cale_week_time_pane_t_ParamLimits

0x1369,	// (0x0005ef52) cell_cale_week_pane_g2_ParamLimits

0x9fab,	// (0x00067b94) bg_cale_side_pane_cp01_ParamLimits

0x2450,	// (0x00060039) cale_month_week_pane_t1_ParamLimits

0x2469,	// (0x00060052) cale_month_week_pane_t2_ParamLimits

0x2482,	// (0x0006006b) cale_month_week_pane_t3_ParamLimits

0x249b,	// (0x00060084) cale_month_week_pane_t4_ParamLimits

0x24b4,	// (0x0006009d) cale_month_week_pane_t5_ParamLimits

0x24cd,	// (0x000600b6) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x0006ce38) cale_month_week_pane_t_ParamLimits

0xa384,	// (0x00067f6d) cell_cale_month_pane_g1_ParamLimits

0x9ec1,	// (0x00067aaa) main_cale_event_viewer_pane

0xe3de,	// (0x0006bfc7) listscroll_cale_event_viewer_pane

0xc3aa,	// (0x00069f93) list_cale_ev_pane

0xc3b2,	// (0x00069f9b) scroll_pane_cp023

0x3ef3,	// (0x00061adc) field_cale_ev_pane_ParamLimits

0x3ef3,	// (0x00061adc) field_cale_ev_pane

0xc3be,	// (0x00069fa7) field_cale_ev_content_pane_ParamLimits

0xc3be,	// (0x00069fa7) field_cale_ev_content_pane

0xc3ca,	// (0x00069fb3) field_cale_ev_pane_g1_ParamLimits

0xc3ca,	// (0x00069fb3) field_cale_ev_pane_g1

0xc3d6,	// (0x00069fbf) field_cale_ev_pane_g2_ParamLimits

0xc3d6,	// (0x00069fbf) field_cale_ev_pane_g2

0xc3ee,	// (0x00069fd7) field_cale_ev_pane_g3_ParamLimits

0xc3ee,	// (0x00069fd7) field_cale_ev_pane_g3

0x0002,

0xf664,	// (0x0006d24d) field_cale_ev_pane_g_ParamLimits

0xf664,	// (0x0006d24d) field_cale_ev_pane_g

0xc406,	// (0x00069fef) field_cale_ev_pane_t1_ParamLimits

0xc406,	// (0x00069fef) field_cale_ev_pane_t1

0x3f17,	// (0x00061b00) field_cale_ev_content_pane_t1_ParamLimits

0x3f17,	// (0x00061b00) field_cale_ev_content_pane_t1

0xabd2,	// (0x000687bb) bg_button_pane_cp01

0x0de8,	// (0x0005e9d1) listscroll_cale_week_pane_ParamLimits

0x9f73,	// (0x00067b5c) popup_toolbar_window_cp01

0x9f7c,	// (0x00067b65) listscroll_cale_week_pane_t1_ParamLimits

0x0de8,	// (0x0005e9d1) listscroll_cale_day_pane_ParamLimits

0x9f73,	// (0x00067b5c) popup_toolbar_window_cp02

0xa406,	// (0x00067fef) listscroll_cale_day_pane_t1_ParamLimits

0x38d1,	// (0x000614ba) main_cale_month_pane_ParamLimits

0xbe2c,	// (0x00069a15) popup_toolbar_window_cp03_ParamLimits

0xbe2c,	// (0x00069a15) popup_toolbar_window_cp03

0x3159,	// (0x00060d42) main_image_pane_g2_ParamLimits

0x3159,	// (0x00060d42) main_image_pane_g2

0x316a,	// (0x00060d53) main_image_pane_g3_ParamLimits

0x316a,	// (0x00060d53) main_image_pane_g3

0x0002,

0xf45c,	// (0x0006d045) main_image_pane_g_ParamLimits

0xf45c,	// (0x0006d045) main_image_pane_g

0xad2e,	// (0x00068917) main_image_pane_t1_ParamLimits

0x317b,	// (0x00060d64) main_image_pane_t2_ParamLimits

0x317b,	// (0x00060d64) main_image_pane_t2

0x318d,	// (0x00060d76) main_image_pane_t3_ParamLimits

0x318d,	// (0x00060d76) main_image_pane_t3

0x31b5,	// (0x00060d9e) main_image_pane_t4_ParamLimits

0x31b5,	// (0x00060d9e) main_image_pane_t4

0x0003,

0xf463,	// (0x0006d04c) main_image_pane_t_ParamLimits

0xf463,	// (0x0006d04c) main_image_pane_t

0x31d5,	// (0x00060dbe) popup_image_details_window_cp01

0x31df,	// (0x00060dc8) popup_toobar_trans_pane_cp01_ParamLimits

0x31df,	// (0x00060dc8) popup_toobar_trans_pane_cp01

0x39fc,	// (0x000615e5) popup_image_details_window_ParamLimits

0x39fc,	// (0x000615e5) popup_image_details_window

0xbdfd,	// (0x000699e6) popup_image_focus_window

0xbf45,	// (0x00069b2e) camera2_autofocus_pane_ParamLimits

0xbf45,	// (0x00069b2e) camera2_autofocus_pane

0xe3de,	// (0x0006bfc7) bg_popup_sub_pane_cp06

0xc41d,	// (0x0006a006) popup_image_focus_window_g1

0xc425,	// (0x0006a00e) popup_image_focus_window_g2

0xc42d,	// (0x0006a016) popup_image_focus_window_g3

0xc435,	// (0x0006a01e) popup_image_focus_window_g4

0x0003,

0xf66b,	// (0x0006d254) popup_image_focus_window_g

0xc43d,	// (0x0006a026) popup_image_focus_window_t1

0xc44b,	// (0x0006a034) popup_image_focus_window_t2

0xc45b,	// (0x0006a044) popup_image_focus_window_t3

0x0002,

0xf674,	// (0x0006d25d) popup_image_focus_window_t

0xeeff,	// (0x0006cae8) camera2_autofocus_pane_g1

0xe775,	// (0x0006c35e) bg_tb_trans_pane_cp01

0xc469,	// (0x0006a052) popup_image_details_window_g1

0xc47c,	// (0x0006a065) popup_image_details_window_g2

0x0002,

0xf686,	// (0x0006d26f) popup_image_details_window_g

0xc4a5,	// (0x0006a08e) popup_image_details_window_t1

0xc4b7,	// (0x0006a0a0) popup_image_details_window_t2

0xc4d0,	// (0x0006a0b9) popup_image_details_window_t3

0xc4e4,	// (0x0006a0cd) popup_image_details_window_t4

0xc4ff,	// (0x0006a0e8) popup_image_details_window_t5

0x0004,

0xf68d,	// (0x0006d276) popup_image_details_window_t

0xef5d,	// (0x0006cb46) bg_calc_paper_pane_ParamLimits

0x9ec1,	// (0x00067aaa) grid_highlight_pane_cp013

0x9ed3,	// (0x00067abc) list_calc_pane_ParamLimits

0x9ee5,	// (0x00067ace) scroll_pane_cp024

0xef71,	// (0x0006cb5a) bg_calc_display_pane_ParamLimits

0x0c12,	// (0x0005e7fb) calc_display_pane_t1_ParamLimits

0x0c24,	// (0x0005e80d) calc_display_pane_t2_ParamLimits

0x9eed,	// (0x00067ad6) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0006ccdb) calc_display_pane_t_ParamLimits

0x0ce5,	// (0x0005e8ce) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x0006ccf8) cell_calc_pane_g

0x0cee,	// (0x0005e8d7) cell_calc_pane_t1

0xefc6,	// (0x0006cbaf) grid_highlight_pane_cp02_ParamLimits

0xefdc,	// (0x0006cbc5) toolbar_button_pane_cp01_ParamLimits

0xefdc,	// (0x0006cbc5) toolbar_button_pane_cp01

0xad73,	// (0x0006895c) temp_image_control_pane_ParamLimits

0xad73,	// (0x0006895c) temp_image_control_pane

0x9eb3,	// (0x00067a9c) main_mp3_pane

0xc519,	// (0x0006a102) temp_image_control_pane_g1_ParamLimits

0xc519,	// (0x0006a102) temp_image_control_pane_g1

0xc527,	// (0x0006a110) temp_image_control_pane_g2_ParamLimits

0xc527,	// (0x0006a110) temp_image_control_pane_g2

0xc539,	// (0x0006a122) temp_image_control_pane_g3_ParamLimits

0xc539,	// (0x0006a122) temp_image_control_pane_g3

0x3f38,	// (0x00061b21) temp_image_control_pane_g4_ParamLimits

0x3f38,	// (0x00061b21) temp_image_control_pane_g4

0x0003,

0xf698,	// (0x0006d281) temp_image_control_pane_g_ParamLimits

0xf698,	// (0x0006d281) temp_image_control_pane_g

0xc519,	// (0x0006a102) main_mp3_pane_g1

0x3f4b,	// (0x00061b34) main_mp3_pane_g2

0x0007,

0xf6a1,	// (0x0006d28a) main_mp3_pane_g

0xc56e,	// (0x0006a157) main_mp3_pane_t1

0xef0d,	// (0x0006caf6) main_camera_pane_g8_ParamLimits

0xef0d,	// (0x0006caf6) main_camera_pane_g8

0x152b,	// (0x0005f114) main_video_pane_g7_ParamLimits

0x152b,	// (0x0005f114) main_video_pane_g7

0xbf75,	// (0x00069b5e) main_camera2_pane_t7_ParamLimits

0xbf75,	// (0x00069b5e) main_camera2_pane_t7

0xa167,	// (0x00067d50) scroll_pane_cp025_ParamLimits

0xa167,	// (0x00067d50) scroll_pane_cp025

0xa17b,	// (0x00067d64) scroll_pane_cp026_ParamLimits

0xa17b,	// (0x00067d64) scroll_pane_cp026

0xa18a,	// (0x00067d73) wml_content_pane_ParamLimits

0x9ec1,	// (0x00067aaa) main_touch_calib_pane

0x401d,	// (0x00061c06) main_touch_calib_pane_g1

0x402f,	// (0x00061c18) main_touch_calib_pane_g2

0x4041,	// (0x00061c2a) main_touch_calib_pane_g3

0x4053,	// (0x00061c3c) main_touch_calib_pane_g4

0x0003,

0xf6bf,	// (0x0006d2a8) main_touch_calib_pane_g

0x4065,	// (0x00061c4e) main_touch_calib_pane_t1

0x407f,	// (0x00061c68) main_touch_calib_pane_t2

0x0004,

0xf6c8,	// (0x0006d2b1) main_touch_calib_pane_t

0xa96f,	// (0x00068558) mup_progress_pane_cp02

0xa98e,	// (0x00068577) navi_pane_g1

0xa9f0,	// (0x000685d9) navi_pane_mp_t3

0x9eb3,	// (0x00067a9c) main_mp3_pane_ParamLimits

0x3bb5,	// (0x0006179e) navi_pane_ParamLimits

0xc519,	// (0x0006a102) main_mp3_pane_g1_ParamLimits

0x3f4b,	// (0x00061b34) main_mp3_pane_g2_ParamLimits

0x3f57,	// (0x00061b40) main_mp3_pane_g3_ParamLimits

0x3f57,	// (0x00061b40) main_mp3_pane_g3

0x3f65,	// (0x00061b4e) main_mp3_pane_g4_ParamLimits

0x3f65,	// (0x00061b4e) main_mp3_pane_g4

0xeeff,	// (0x0006cae8) main_mp3_pane_g5_ParamLimits

0xeeff,	// (0x0006cae8) main_mp3_pane_g5

0xc549,	// (0x0006a132) main_mp3_pane_g6_ParamLimits

0xc549,	// (0x0006a132) main_mp3_pane_g6

0xc556,	// (0x0006a13f) main_mp3_pane_g7_ParamLimits

0xc556,	// (0x0006a13f) main_mp3_pane_g7

0xc562,	// (0x0006a14b) main_mp3_pane_g8_ParamLimits

0xc562,	// (0x0006a14b) main_mp3_pane_g8

0xf6a1,	// (0x0006d28a) main_mp3_pane_g_ParamLimits

0x3f71,	// (0x00061b5a) main_mp3_pane_t2

0x3f7f,	// (0x00061b68) main_mp3_pane_t3

0xc57c,	// (0x0006a165) main_mp3_pane_t4

0xc58a,	// (0x0006a173) main_mp3_pane_t5

0x0005,

0xf6b2,	// (0x0006d29b) main_mp3_pane_t

0xc598,	// (0x0006a181) mup_progress_pane_cp01

0x9e64,	// (0x00067a4d) aid_zoom_text_secondary2

0xc3aa,	// (0x00069f93) list_cale_ev2_pane

0xc3b2,	// (0x00069f9b) scroll_pane_cp023_ParamLimits

0x40d9,	// (0x00061cc2) field_cale_ev2_pane_ParamLimits

0x40d9,	// (0x00061cc2) field_cale_ev2_pane

0x40fd,	// (0x00061ce6) field_cale_ev2_pane_g1_ParamLimits

0x40fd,	// (0x00061ce6) field_cale_ev2_pane_g1

0x4109,	// (0x00061cf2) field_cale_ev2_pane_g2_ParamLimits

0x4109,	// (0x00061cf2) field_cale_ev2_pane_g2

0x4121,	// (0x00061d0a) field_cale_ev2_pane_g3_ParamLimits

0x4121,	// (0x00061d0a) field_cale_ev2_pane_g3

0x0003,

0xf6d3,	// (0x0006d2bc) field_cale_ev2_pane_g_ParamLimits

0xf6d3,	// (0x0006d2bc) field_cale_ev2_pane_g

0x4145,	// (0x00061d2e) field_cale_ev2_pane_t1_ParamLimits

0x4145,	// (0x00061d2e) field_cale_ev2_pane_t1

0x415c,	// (0x00061d45) field_cale_ev2_pane_t2_ParamLimits

0x415c,	// (0x00061d45) field_cale_ev2_pane_t2

0x0001,

0xf6dc,	// (0x0006d2c5) field_cale_ev2_pane_t_ParamLimits

0xf6dc,	// (0x0006d2c5) field_cale_ev2_pane_t

0x2ff1,	// (0x00060bda) main_postcard_pane_g5_ParamLimits

0x2ff1,	// (0x00060bda) main_postcard_pane_g5

0x3007,	// (0x00060bf0) main_postcard_pane_g6_ParamLimits

0x3007,	// (0x00060bf0) main_postcard_pane_g6

0xe775,	// (0x0006c35e) camera2_autofocus_pane_cp_ParamLimits

0xe775,	// (0x0006c35e) camera2_autofocus_pane_cp

0x9eb3,	// (0x00067a9c) main_mup3_pane

0x41bb,	// (0x00061da4) main_mup3_pane_g1_ParamLimits

0x41bb,	// (0x00061da4) main_mup3_pane_g1

0x41dd,	// (0x00061dc6) main_mup3_pane_g2_ParamLimits

0x41dd,	// (0x00061dc6) main_mup3_pane_g2

0x4258,	// (0x00061e41) main_mup3_pane_g3_ParamLimits

0x4258,	// (0x00061e41) main_mup3_pane_g3

0x42c2,	// (0x00061eab) main_mup3_pane_g4_ParamLimits

0x42c2,	// (0x00061eab) main_mup3_pane_g4

0x432c,	// (0x00061f15) main_mup3_pane_g5_ParamLimits

0x432c,	// (0x00061f15) main_mup3_pane_g5

0x4396,	// (0x00061f7f) main_mup3_pane_g6_ParamLimits

0x4396,	// (0x00061f7f) main_mup3_pane_g6

0xef0d,	// (0x0006caf6) main_mup3_pane_g7_ParamLimits

0xef0d,	// (0x0006caf6) main_mup3_pane_g7

0x0007,

0xf6ec,	// (0x0006d2d5) main_mup3_pane_g_ParamLimits

0xf6ec,	// (0x0006d2d5) main_mup3_pane_g

0x441a,	// (0x00062003) main_mup3_pane_t1_ParamLimits

0x441a,	// (0x00062003) main_mup3_pane_t1

0x448c,	// (0x00062075) main_mup3_pane_t2_ParamLimits

0x448c,	// (0x00062075) main_mup3_pane_t2

0x4562,	// (0x0006214b) main_mup3_pane_t4_ParamLimits

0x4562,	// (0x0006214b) main_mup3_pane_t4

0x45c0,	// (0x000621a9) main_mup3_pane_t5_ParamLimits

0x45c0,	// (0x000621a9) main_mup3_pane_t5

0x4684,	// (0x0006226d) main_mup3_pane_t6_ParamLimits

0x4684,	// (0x0006226d) main_mup3_pane_t6

0x0005,

0xf6fd,	// (0x0006d2e6) main_mup3_pane_t_ParamLimits

0xf6fd,	// (0x0006d2e6) main_mup3_pane_t

0x473c,	// (0x00062325) mup3_progress_pane_ParamLimits

0x473c,	// (0x00062325) mup3_progress_pane

0x47d4,	// (0x000623bd) popup_mup3_control_window_ParamLimits

0x47d4,	// (0x000623bd) popup_mup3_control_window

0xc5a0,	// (0x0006a189) popup_mup3_text_window

0x480a,	// (0x000623f3) mup3_progress_pane_t1

0x4829,	// (0x00062412) mup3_progress_pane_t2

0xc5a8,	// (0x0006a191) mup3_progress_pane_t3

0x0002,

0xf70a,	// (0x0006d2f3) mup3_progress_pane_t

0xc5c5,	// (0x0006a1ae) mup_progress_pane_cp03

0xe3de,	// (0x0006bfc7) bg_tb_trans_pane_cp04

0x4848,	// (0x00062431) mup3_volume_pane

0x4850,	// (0x00062439) popup_mup3_control_window_g1

0x4859,	// (0x00062442) mup3_volume_pane_g1

0x4862,	// (0x0006244b) mup3_volume_pane_g2

0x486b,	// (0x00062454) mup3_volume_pane_g3

0x0002,

0xf711,	// (0x0006d2fa) mup3_volume_pane_g

0xe3de,	// (0x0006bfc7) bg_tb_trans_pane_cp03

0xc5d5,	// (0x0006a1be) popup_mup3_text_window_g1

0xc5dd,	// (0x0006a1c6) popup_mup3_text_window_t1

0xefb9,	// (0x0006cba2) list_calc_item_pane_g1_ParamLimits

0xc086,	// (0x00069c6f) mup_volume_pane_cp_g1

0x4099,	// (0x00061c82) main_touch_calib_pane_t3

0x40ad,	// (0x00061c96) main_touch_calib_pane_t4

0x40c3,	// (0x00061cac) main_touch_calib_pane_t5

0x9e40,	// (0x00067a29) aid_cell_size_toolbar2

0x9e48,	// (0x00067a31) aid_popup3_width_pane

0x9e54,	// (0x00067a3d) aid_zoom_text_msg_primary

0x1419,	// (0x0005f002) vorec_t7

0xef7d,	// (0x0006cb66) bg_calc_paper_pane_g1_ParamLimits

0xef89,	// (0x0006cb72) bg_calc_paper_pane_g2_ParamLimits

0xef95,	// (0x0006cb7e) bg_calc_paper_pane_g3_ParamLimits

0xefa1,	// (0x0006cb8a) bg_calc_paper_pane_g4_ParamLimits

0xefad,	// (0x0006cb96) bg_calc_paper_pane_g5_ParamLimits

0x0c71,	// (0x0005e85a) bg_calc_paper_pane_g6_ParamLimits

0x0c7f,	// (0x0005e868) bg_calc_paper_pane_g7_ParamLimits

0x0c8d,	// (0x0005e876) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0006cce2) bg_calc_paper_pane_g_ParamLimits

0x0ca0,	// (0x0005e889) calc_bg_paper_pane_g9_ParamLimits

0xe775,	// (0x0006c35e) image_qvga_pane_ParamLimits

0xe775,	// (0x0006c35e) image_qvga_pane

0xee84,	// (0x0006ca6d) bg_popup_sub_pane_cp04_ParamLimits

0xacaa,	// (0x00068893) popup_mup_playback_window_g1_ParamLimits

0xacb6,	// (0x0006889f) popup_mup_playback_window_t1_ParamLimits

0xaccb,	// (0x000688b4) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x0006d040) popup_mup_playback_window_t_ParamLimits

0xef0d,	// (0x0006caf6) main_mup2_pane_g3_ParamLimits

0xef0d,	// (0x0006caf6) main_mup2_pane_g3

0x1722,	// (0x0005f30b) popup_toolbar_window_cp04

0xb0c6,	// (0x00068caf) popup_call2_audio_second_window_g3_ParamLimits

0xb0c6,	// (0x00068caf) popup_call2_audio_second_window_g3

0xb4de,	// (0x000690c7) popup_call2_audio_first_window_g4_ParamLimits

0xb4de,	// (0x000690c7) popup_call2_audio_first_window_g4

0xbb05,	// (0x000696ee) popup_call2_audio_in_window_g4_ParamLimits

0xbb05,	// (0x000696ee) popup_call2_audio_in_window_g4

0x313b,	// (0x00060d24) aid_area_sk_bg_cut_ParamLimits

0x313b,	// (0x00060d24) aid_area_sk_bg_cut

0xace0,	// (0x000688c9) aid_area_sk_bg_cut_2_ParamLimits

0xace0,	// (0x000688c9) aid_area_sk_bg_cut_2

0xe3de,	// (0x0006bfc7) aid_placing_details_win

0xe3de,	// (0x0006bfc7) aid_placing_details_win_2

0xeeff,	// (0x0006cae8) camera2_autofocus_pane_g1_ParamLimits

0x09b3,	// (0x0005e59c) popup_fixed_preview_cale_window_ParamLimits

0x09b3,	// (0x0005e59c) popup_fixed_preview_cale_window

0xaa40,	// (0x00068629) navi_slider_pane_g3

0xaa49,	// (0x00068632) navi_slider_pane_g4

0xaa52,	// (0x0006863b) navi_slider_pane_g5

0xaa40,	// (0x00068629) navi_slider_pane_g6

0xaa5b,	// (0x00068644) navi_slider_pane_g7

0xab9f,	// (0x00068788) mup_scale_pane_g3

0xaba8,	// (0x00068791) mup_scale_pane_g4

0xabb1,	// (0x0006879a) mup_scale_pane_g5

0x2da7,	// (0x00060990) mup_scale_pane_g6

0x2db0,	// (0x00060999) mup_scale_pane_g7

0xc08f,	// (0x00069c78) cams2_slider_pane_g3

0xc08f,	// (0x00069c78) cams2_slider_pane_g4

0xc08f,	// (0x00069c78) cams2_slider_pane_g5

0xc08f,	// (0x00069c78) cams2_slider_pane_g6

0xc08f,	// (0x00069c78) cams2_slider_pane_g7

0xa05b,	// (0x00067c44) camera2_autofocus_pane_cp_g1

0xbddd,	// (0x000699c6) bg_popup_preview_window_pane_cp02_ParamLimits

0xbddd,	// (0x000699c6) bg_popup_preview_window_pane_cp02

0xc5eb,	// (0x0006a1d4) list_fp_cale_pane_ParamLimits

0xc5eb,	// (0x0006a1d4) list_fp_cale_pane

0xc5f7,	// (0x0006a1e0) popup_fixed_preview_cale_window_t1_ParamLimits

0xc5f7,	// (0x0006a1e0) popup_fixed_preview_cale_window_t1

0x4874,	// (0x0006245d) popup_fixed_preview_cale_window_t2_ParamLimits

0x4874,	// (0x0006245d) popup_fixed_preview_cale_window_t2

0x4889,	// (0x00062472) popup_fixed_preview_cale_window_t3_ParamLimits

0x4889,	// (0x00062472) popup_fixed_preview_cale_window_t3

0x0002,

0xf718,	// (0x0006d301) popup_fixed_preview_cale_window_t_ParamLimits

0xf718,	// (0x0006d301) popup_fixed_preview_cale_window_t

0x48a0,	// (0x00062489) list_single_fp_cale_pane_ParamLimits

0x48a0,	// (0x00062489) list_single_fp_cale_pane

0xc615,	// (0x0006a1fe) list_single_fp_cale_pane_g1_ParamLimits

0xc615,	// (0x0006a1fe) list_single_fp_cale_pane_g1

0xc621,	// (0x0006a20a) list_single_fp_cale_pane_g2_ParamLimits

0xc621,	// (0x0006a20a) list_single_fp_cale_pane_g2

0x0002,

0xf71f,	// (0x0006d308) list_single_fp_cale_pane_g_ParamLimits

0xf71f,	// (0x0006d308) list_single_fp_cale_pane_g

0xc63a,	// (0x0006a223) list_single_fp_cale_pane_t1_ParamLimits

0xc63a,	// (0x0006a223) list_single_fp_cale_pane_t1

0xc64c,	// (0x0006a235) list_single_fp_cale_pane_t2_ParamLimits

0xc64c,	// (0x0006a235) list_single_fp_cale_pane_t2

0x0001,

0xf726,	// (0x0006d30f) list_single_fp_cale_pane_t_ParamLimits

0xf726,	// (0x0006d30f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9ec1,	// (0x00067aaa) main_dialer_pane

0xe3de,	// (0x0006bfc7) aid_cell_size_keypad

0xe3de,	// (0x0006bfc7) dialer_ne_pane

0xe3de,	// (0x0006bfc7) grid_dialer_command_1_pane

0xe3de,	// (0x0006bfc7) grid_dialer_command_2_pane

0xe3de,	// (0x0006bfc7) grid_dialer_keypad_pane

0x48b8,	// (0x000624a1) bg_popup_call_pane_cp06_ParamLimits

0x48b8,	// (0x000624a1) bg_popup_call_pane_cp06

0x48b8,	// (0x000624a1) dialer_ne_clear_pane_ParamLimits

0x48b8,	// (0x000624a1) dialer_ne_clear_pane

0xa05b,	// (0x00067c44) dialer_ne_pane_g1

0xab19,	// (0x00068702) dialer_ne_pane_t1_ParamLimits

0xab19,	// (0x00068702) dialer_ne_pane_t1

0x48c6,	// (0x000624af) dialer_ne_pane_t2_ParamLimits

0x48c6,	// (0x000624af) dialer_ne_pane_t2

0x48ee,	// (0x000624d7) dialer_ne_pane_t3_ParamLimits

0x48ee,	// (0x000624d7) dialer_ne_pane_t3

0x0002,

0xf72b,	// (0x0006d314) dialer_ne_pane_t_ParamLimits

0xf72b,	// (0x0006d314) dialer_ne_pane_t

0x48ee,	// (0x000624d7) dialer_ne_pane_t3_copy1_ParamLimits

0x48ee,	// (0x000624d7) dialer_ne_pane_t3_copy1

0xc67f,	// (0x0006a268) cell_dialer_keypad_pane_ParamLimits

0xc67f,	// (0x0006a268) cell_dialer_keypad_pane

0xe775,	// (0x0006c35e) cell_dialer_command_1_pane_ParamLimits

0xe775,	// (0x0006c35e) cell_dialer_command_1_pane

0xc696,	// (0x0006a27f) cell_dialer_command_2_pane_ParamLimits

0xc696,	// (0x0006a27f) cell_dialer_command_2_pane

0xe775,	// (0x0006c35e) bg_button_pane_cp02_ParamLimits

0xe775,	// (0x0006c35e) bg_button_pane_cp02

0xeeff,	// (0x0006cae8) cell_dialer_keypad_pane_g1_ParamLimits

0xeeff,	// (0x0006cae8) cell_dialer_keypad_pane_g1

0xe775,	// (0x0006c35e) bg_button_pane_cp03_ParamLimits

0xe775,	// (0x0006c35e) bg_button_pane_cp03

0xeeff,	// (0x0006cae8) cell_dialer_command_1_pane_g1_ParamLimits

0xeeff,	// (0x0006cae8) cell_dialer_command_1_pane_g1

0xe3de,	// (0x0006bfc7) bg_button_pane_cp04

0xa05b,	// (0x00067c44) cell_dialer_command_2_pane_g1

0xe3de,	// (0x0006bfc7) bg_button_pane_cp06

0xa05b,	// (0x00067c44) dialer_ne_clear_pane_g1

0x2ab8,	// (0x000606a1) navi_pane_g2

0x2ae6,	// (0x000606cf) navi_pane_g3

0x0002,

0xf35a,	// (0x0006cf43) navi_pane_g

0x2b11,	// (0x000606fa) navi_pane_mv_g2

0x2b38,	// (0x00060721) navi_pane_mv_g5

0x2b40,	// (0x00060729) navi_pane_mv_t1

0xef71,	// (0x0006cb5a) main_clock2_pane

0xe775,	// (0x0006c35e) main_clock2_list_pane_ParamLimits

0xe775,	// (0x0006c35e) main_clock2_list_pane

0x497f,	// (0x00062568) main_clock2_pane_t1_ParamLimits

0x497f,	// (0x00062568) main_clock2_pane_t1

0x49ba,	// (0x000625a3) main_clock2_pane_t2_ParamLimits

0x49ba,	// (0x000625a3) main_clock2_pane_t2

0x0004,

0xf737,	// (0x0006d320) main_clock2_pane_t_ParamLimits

0xf737,	// (0x0006d320) main_clock2_pane_t

0x4a59,	// (0x00062642) popup_clock_analogue_window_cp03_ParamLimits

0x4a59,	// (0x00062642) popup_clock_analogue_window_cp03

0x4a7e,	// (0x00062667) popup_clock_digital_window_cp02_ParamLimits

0x4a7e,	// (0x00062667) popup_clock_digital_window_cp02

0x4af7,	// (0x000626e0) main_clock2_list_single_pane_ParamLimits

0x4af7,	// (0x000626e0) main_clock2_list_single_pane

0xa006,	// (0x00067bef) list_highlight_pane_cp05

0xc6d7,	// (0x0006a2c0) main_clock2_list_single_pane_t1

0x1722,	// (0x0005f30b) popup_toolbar_window_cp04_ParamLimits

0xef0d,	// (0x0006caf6) camera2_autofocus_pane_g2_ParamLimits

0xef0d,	// (0x0006caf6) camera2_autofocus_pane_g2

0xef0d,	// (0x0006caf6) camera2_autofocus_pane_g3_ParamLimits

0xef0d,	// (0x0006caf6) camera2_autofocus_pane_g3

0xef0d,	// (0x0006caf6) camera2_autofocus_pane_g4_ParamLimits

0xef0d,	// (0x0006caf6) camera2_autofocus_pane_g4

0xef0d,	// (0x0006caf6) camera2_autofocus_pane_g5_ParamLimits

0xef0d,	// (0x0006caf6) camera2_autofocus_pane_g5

0x0004,

0xf67b,	// (0x0006d264) camera2_autofocus_pane_g_ParamLimits

0xf67b,	// (0x0006d264) camera2_autofocus_pane_g

0x4171,	// (0x00061d5a) camera2_autofocus_pane_cp_g2

0x4179,	// (0x00061d62) camera2_autofocus_pane_cp_g3

0x4181,	// (0x00061d6a) camera2_autofocus_pane_cp_g4

0x4189,	// (0x00061d72) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e1,	// (0x0006d2ca) camera2_autofocus_pane_cp_g

0xe3de,	// (0x0006bfc7) popup_dialer_spcha_window

0xe3de,	// (0x0006bfc7) bg_popup_sub_pane_cp07

0xe3de,	// (0x0006bfc7) list_spcha_pane

0xc6e5,	// (0x0006a2ce) list_single_spcha_pane_ParamLimits

0xc6e5,	// (0x0006a2ce) list_single_spcha_pane

0xe3de,	// (0x0006bfc7) list_highlight_pane_cp06

0xa5f6,	// (0x000681df) list_single_spcha_pane_t1

0xb8af,	// (0x00069498) popup_call2_audio_out_window_g4_ParamLimits

0xb8af,	// (0x00069498) popup_call2_audio_out_window_g4

0x9ec1,	// (0x00067aaa) main_imed2_pane

0xbe07,	// (0x000699f0) popup_imed_adjust2_window

0x3a14,	// (0x000615fd) popup_imed_trans_window_ParamLimits

0x3a14,	// (0x000615fd) popup_imed_trans_window

0xc173,	// (0x00069d5c) popup_blid_sat_info2_window_t1

0xc181,	// (0x00069d6a) popup_blid_sat_info2_window_t2

0x000a,

0xf610,	// (0x0006d1f9) popup_blid_sat_info2_window_t

0x4bb2,	// (0x0006279b) aid_size_cell_colour_35

0x4bd2,	// (0x000627bb) aid_size_cell_colour_112

0x4bf2,	// (0x000627db) aid_size_cell_effect

0xab2d,	// (0x00068716) bg_tb_trans_pane_cp02

0xa50f,	// (0x000680f8) heading_imed_pane

0x4c12,	// (0x000627fb) listscroll_imed_pane

0xc6f7,	// (0x0006a2e0) heading_imed_pane_g1

0xc6ff,	// (0x0006a2e8) heading_imed_pane_t1

0xc70d,	// (0x0006a2f6) grid_imed_colour_35_pane_ParamLimits

0xc70d,	// (0x0006a2f6) grid_imed_colour_35_pane

0x4c1e,	// (0x00062807) grid_imed_effect_pane

0xc729,	// (0x0006a312) list_imed_aspect_pane

0x4c35,	// (0x0006281e) scroll_pane_cp027_ParamLimits

0x4c35,	// (0x0006281e) scroll_pane_cp027

0x4c46,	// (0x0006282f) cell_imed_effect_pane_ParamLimits

0x4c46,	// (0x0006282f) cell_imed_effect_pane

0xc731,	// (0x0006a31a) cell_imed_colour_pane_ParamLimits

0xc731,	// (0x0006a31a) cell_imed_colour_pane

0xc77b,	// (0x0006a364) cell_imed_colour_pane_g1_ParamLimits

0xc77b,	// (0x0006a364) cell_imed_colour_pane_g1

0xc78c,	// (0x0006a375) hgihlgiht_grid_pane_cp016_ParamLimits

0xc78c,	// (0x0006a375) hgihlgiht_grid_pane_cp016

0x4c71,	// (0x0006285a) cell_imed_effect_pane_g1

0x4c79,	// (0x00062862) grid_highlight_pane_cp017

0xc79d,	// (0x0006a386) list_imed_single_pane_ParamLimits

0xc79d,	// (0x0006a386) list_imed_single_pane

0xe3de,	// (0x0006bfc7) list_highlight_pane_cp07

0xc7b1,	// (0x0006a39a) list_imed_aspect_pane_comp1_t1

0xab2d,	// (0x00068716) bg_tb_trans_pane_cp05

0xc7d3,	// (0x0006a3bc) popup_imed_adjust2_window_g1

0xc7fa,	// (0x0006a3e3) popup_imed_adjust2_window_t1

0xc812,	// (0x0006a3fb) slider_imed_adjust_pane

0xc826,	// (0x0006a40f) slider_imed_adjust_pane_g1

0xc836,	// (0x0006a41f) slider_imed_adjust_pane_g2

0xc846,	// (0x0006a42f) slider_imed_adjust_pane_g3

0xc857,	// (0x0006a440) slider_imed_adjust_pane_g4

0x0003,

0xf754,	// (0x0006d33d) slider_imed_adjust_pane_g

0x4c82,	// (0x0006286b) aid_size_cell_clipart2

0xc868,	// (0x0006a451) grid_imed_clipart_pane

0xc872,	// (0x0006a45b) scroll_pane_cp031

0x4c8e,	// (0x00062877) cell_imed_clipart_pane_ParamLimits

0x4c8e,	// (0x00062877) cell_imed_clipart_pane

0x4cab,	// (0x00062894) cell_imed_clipart_pane_g1

0xe3de,	// (0x0006bfc7) grid_highlight_pane_cp014

0x495d,	// (0x00062546) main_clock2_pane_g1_ParamLimits

0x495d,	// (0x00062546) main_clock2_pane_g1

0x4a9e,	// (0x00062687) aid_call2_pane_cp10

0x4ab0,	// (0x00062699) aid_call_pane_cp10

0xa963,	// (0x0006854c) popup_clock_analogue_window_cp10_g1

0xa963,	// (0x0006854c) popup_clock_analogue_window_cp10_g2

0x4ac2,	// (0x000626ab) popup_clock_analogue_window_cp10_g3

0x4ac2,	// (0x000626ab) popup_clock_analogue_window_cp10_g4

0xa963,	// (0x0006854c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf742,	// (0x0006d32b) popup_clock_analogue_window_cp10_g

0x4ad8,	// (0x000626c1) popup_clock_analogue_window_cp10_t1

0x4b09,	// (0x000626f2) clock_digital_number_pane_cp10_ParamLimits

0x4b09,	// (0x000626f2) clock_digital_number_pane_cp10

0x4b23,	// (0x0006270c) clock_digital_number_pane_cp11_ParamLimits

0x4b23,	// (0x0006270c) clock_digital_number_pane_cp11

0x4b3d,	// (0x00062726) clock_digital_number_pane_cp12_ParamLimits

0x4b3d,	// (0x00062726) clock_digital_number_pane_cp12

0x4b59,	// (0x00062742) clock_digital_number_pane_cp13_ParamLimits

0x4b59,	// (0x00062742) clock_digital_number_pane_cp13

0x4b75,	// (0x0006275e) clock_digital_separator_pane_cp10_ParamLimits

0x4b75,	// (0x0006275e) clock_digital_separator_pane_cp10

0x4b91,	// (0x0006277a) popup_clock_digital_window_cp02_t1_ParamLimits

0x4b91,	// (0x0006277a) popup_clock_digital_window_cp02_t1

0xee7c,	// (0x0006ca65) clock_digital_number_pane_cp10_g1

0xee7c,	// (0x0006ca65) clock_digital_number_pane_cp10_g2

0x0001,

0xf75d,	// (0x0006d346) clock_digital_number_pane_cp10_g

0xee7c,	// (0x0006ca65) clock_digital_separator_pane_cp10_g1

0xee7c,	// (0x0006ca65) clock_digital_separator_pane_g2_cp10

0xa9fe,	// (0x000685e7) navi_pane_vded_g4

0xaa07,	// (0x000685f0) navi_pane_vded_g5

0xaa10,	// (0x000685f9) navi_pane_vded_t1

0x9ec1,	// (0x00067aaa) main_vded_pane

0x4cb4,	// (0x0006289d) main_vded_pane_g1

0x4cc0,	// (0x000628a9) main_vded_pane_g2

0x4ccc,	// (0x000628b5) main_vded_pane_g3

0x0002,

0xf762,	// (0x0006d34b) main_vded_pane_g

0x4cd8,	// (0x000628c1) main_vded_pane_t1

0x4ce6,	// (0x000628cf) main_vded_pane_t2

0x0001,

0xf769,	// (0x0006d352) main_vded_pane_t

0x4cf4,	// (0x000628dd) vded_slider_pane

0x4cfe,	// (0x000628e7) vded_video_pane

0xc87a,	// (0x0006a463) vded_video_pane_g1

0x4d0a,	// (0x000628f3) vded_video_pane_g2

0xa05b,	// (0x00067c44) vded_video_pane_g3

0x0002,

0xf76e,	// (0x0006d357) vded_video_pane_g

0xc884,	// (0x0006a46d) vded_slider_pane_g1

0xc086,	// (0x00069c6f) vded_slider_pane_g2

0xc88d,	// (0x0006a476) vded_slider_pane_g3

0xc896,	// (0x0006a47f) vded_slider_pane_g4

0xc89f,	// (0x0006a488) vded_slider_pane_g5

0x0004,

0xf775,	// (0x0006d35e) vded_slider_pane_g

0x47be,	// (0x000623a7) mup3_rocker_pane_ParamLimits

0x47be,	// (0x000623a7) mup3_rocker_pane

0x4d13,	// (0x000628fc) mup3_control_keys_pane_g1

0x4d1b,	// (0x00062904) mup3_control_keys_pane_g2

0x4d23,	// (0x0006290c) mup3_control_keys_pane_g3

0x4d2b,	// (0x00062914) mup3_control_keys_pane_g4

0x0003,

0xf780,	// (0x0006d369) mup3_control_keys_pane_g

0x09e8,	// (0x0005e5d1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x09e8,	// (0x0005e5d1) popup_toolbar2_fixed_window_cp01

0x47f4,	// (0x000623dd) popup_toolbar2_fixed_window_cp02_ParamLimits

0x47f4,	// (0x000623dd) popup_toolbar2_fixed_window_cp02

0xb238,	// (0x00068e21) popup_call2_audio_second_window_t4_ParamLimits

0xb238,	// (0x00068e21) popup_call2_audio_second_window_t4

0xb774,	// (0x0006935d) popup_call2_audio_first_window_t6_ParamLimits

0xb774,	// (0x0006935d) popup_call2_audio_first_window_t6

0xb9b2,	// (0x0006959b) popup_call2_audio_out_window_t6_ParamLimits

0xb9b2,	// (0x0006959b) popup_call2_audio_out_window_t6

0x9ec1,	// (0x00067aaa) main_vitu_pane

0xe775,	// (0x0006c35e) aid_size_cell_itu_ParamLimits

0xe775,	// (0x0006c35e) aid_size_cell_itu

0xe775,	// (0x0006c35e) bg_popup_window_pane_cp08_ParamLimits

0xe775,	// (0x0006c35e) bg_popup_window_pane_cp08

0xe775,	// (0x0006c35e) field_vitu_entry_pane_ParamLimits

0xe775,	// (0x0006c35e) field_vitu_entry_pane

0xe775,	// (0x0006c35e) grid_vitu_function_pane_ParamLimits

0xe775,	// (0x0006c35e) grid_vitu_function_pane

0xe775,	// (0x0006c35e) grid_vitu_itu_pane_ParamLimits

0xe775,	// (0x0006c35e) grid_vitu_itu_pane

0xe775,	// (0x0006c35e) cell_vitu_itu_pane_ParamLimits

0xe775,	// (0x0006c35e) cell_vitu_itu_pane

0xe775,	// (0x0006c35e) cell_vitu_function_pane_ParamLimits

0xe775,	// (0x0006c35e) cell_vitu_function_pane

0xe775,	// (0x0006c35e) bg_popup_sub_pane_cp08_ParamLimits

0xe775,	// (0x0006c35e) bg_popup_sub_pane_cp08

0xa02d,	// (0x00067c16) field_vitu_entry_pane_t1_ParamLimits

0xa02d,	// (0x00067c16) field_vitu_entry_pane_t1

0xc8a8,	// (0x0006a491) field_vitu_entry_pane_t2_ParamLimits

0xc8a8,	// (0x0006a491) field_vitu_entry_pane_t2

0x0001,

0xf789,	// (0x0006d372) field_vitu_entry_pane_t_ParamLimits

0xf789,	// (0x0006d372) field_vitu_entry_pane_t

0xc11a,	// (0x00069d03) bg_button_pane_cp05_ParamLimits

0xc11a,	// (0x00069d03) bg_button_pane_cp05

0xc8c5,	// (0x0006a4ae) cell_vitu_itu_pane_g1

0xab05,	// (0x000686ee) cell_vitu_itu_pane_t1_ParamLimits

0xab05,	// (0x000686ee) cell_vitu_itu_pane_t1

0xab05,	// (0x000686ee) cell_vitu_itu_pane_t2_ParamLimits

0xab05,	// (0x000686ee) cell_vitu_itu_pane_t2

0x0002,

0xf78e,	// (0x0006d377) cell_vitu_itu_pane_t_ParamLimits

0xf78e,	// (0x0006d377) cell_vitu_itu_pane_t

0xe3de,	// (0x0006bfc7) bg_button_pane_cp07

0xa05b,	// (0x00067c44) cell_vitu_function_pane_g1

0x9ecb,	// (0x00067ab4) main_calc_pane_g1

0x0810,	// (0x0005e3f9) aid_visual_content_pane

0x9ec1,	// (0x00067aaa) main_vradio_pane

0xeeff,	// (0x0006cae8) main_vradio_pane_g1_ParamLimits

0xeeff,	// (0x0006cae8) main_vradio_pane_g1

0xef0d,	// (0x0006caf6) main_vradio_pane_g2_ParamLimits

0xef0d,	// (0x0006caf6) main_vradio_pane_g2

0x0001,

0xf795,	// (0x0006d37e) main_vradio_pane_g_ParamLimits

0xf795,	// (0x0006d37e) main_vradio_pane_g

0xa02d,	// (0x00067c16) main_vradio_pane_t1_ParamLimits

0xa02d,	// (0x00067c16) main_vradio_pane_t1

0xa02d,	// (0x00067c16) main_vradio_pane_t2_ParamLimits

0xa02d,	// (0x00067c16) main_vradio_pane_t2

0xab19,	// (0x00068702) main_vradio_pane_t3_ParamLimits

0xab19,	// (0x00068702) main_vradio_pane_t3

0x0002,

0xf79a,	// (0x0006d383) main_vradio_pane_t_ParamLimits

0xf79a,	// (0x0006d383) main_vradio_pane_t

0xe775,	// (0x0006c35e) vradio_rocker_control_pane_ParamLimits

0xe775,	// (0x0006c35e) vradio_rocker_control_pane

0xe775,	// (0x0006c35e) vradio_station_info_pane_ParamLimits

0xe775,	// (0x0006c35e) vradio_station_info_pane

0xe775,	// (0x0006c35e) vradio_frequency_info_pane_ParamLimits

0xe775,	// (0x0006c35e) vradio_frequency_info_pane

0xa05b,	// (0x00067c44) vradio_station_info_pane_g1

0xab05,	// (0x000686ee) vradio_station_info_pane_t1_ParamLimits

0xab05,	// (0x000686ee) vradio_station_info_pane_t1

0xab19,	// (0x00068702) vradio_station_info_pane_t2_ParamLimits

0xab19,	// (0x00068702) vradio_station_info_pane_t2

0x0001,

0xf7a1,	// (0x0006d38a) vradio_station_info_pane_t_ParamLimits

0xf7a1,	// (0x0006d38a) vradio_station_info_pane_t

0xe3de,	// (0x0006bfc7) vradio_tuning_pane

0x4d3b,	// (0x00062924) vradio_rocker_control_pane_g1

0xc8e1,	// (0x0006a4ca) vradio_rocker_control_pane_g2

0x4d45,	// (0x0006292e) vradio_rocker_control_pane_g3

0x4d4f,	// (0x00062938) vradio_rocker_control_pane_g4

0x4d59,	// (0x00062942) vradio_rocker_control_pane_g5

0x0004,

0xf7a6,	// (0x0006d38f) vradio_rocker_control_pane_g

0xa05b,	// (0x00067c44) vradio_frequency_info_pane_g1

0xa02d,	// (0x00067c16) vradio_frequency_info_pane_t1_ParamLimits

0xa02d,	// (0x00067c16) vradio_frequency_info_pane_t1

0x4d63,	// (0x0006294c) vradio_tuning_pane_g1

0x4d6e,	// (0x00062957) vradio_tuning_pane_t1

0x9e6c,	// (0x00067a55) area_side_right_pane_ParamLimits

0x9e6c,	// (0x00067a55) area_side_right_pane

0xbda4,	// (0x0006998d) status_small_pane_g1

0xbdac,	// (0x00069995) status_small_pane_g2

0xbdb5,	// (0x0006999e) status_small_pane_g3

0xbdbe,	// (0x000699a7) status_small_pane_g4

0x0003,

0xf572,	// (0x0006d15b) status_small_pane_g

0xbdc7,	// (0x000699b0) status_small_pane_t1

0x9ec1,	// (0x00067aaa) main_video3_pane

0xc8e9,	// (0x0006a4d2) cams_zoom_vslider_pane

0xc8f1,	// (0x0006a4da) image3_wide_pane_ParamLimits

0xc8f1,	// (0x0006a4da) image3_wide_pane

0xc90b,	// (0x0006a4f4) image3_wide_small_pane

0xc917,	// (0x0006a500) main_video3_pane_g1_ParamLimits

0xc917,	// (0x0006a500) main_video3_pane_g1

0xc933,	// (0x0006a51c) main_video3_pane_g2_ParamLimits

0xc933,	// (0x0006a51c) main_video3_pane_g2

0x0001,

0xf7b1,	// (0x0006d39a) main_video3_pane_g_ParamLimits

0xf7b1,	// (0x0006d39a) main_video3_pane_g

0xc94f,	// (0x0006a538) main_video3_pane_t1_ParamLimits

0xc94f,	// (0x0006a538) main_video3_pane_t1

0xc97a,	// (0x0006a563) main_video3_pane_t2_ParamLimits

0xc97a,	// (0x0006a563) main_video3_pane_t2

0xc9a7,	// (0x0006a590) main_video3_pane_t3_ParamLimits

0xc9a7,	// (0x0006a590) main_video3_pane_t3

0x0002,

0xf7b6,	// (0x0006d39f) main_video3_pane_t_ParamLimits

0xf7b6,	// (0x0006d39f) main_video3_pane_t

0xc9d4,	// (0x0006a5bd) cams_zoom_vslider_pane_g1

0xc9dd,	// (0x0006a5c6) cams_zoom_vslider_pane_g2

0x0001,

0xf7bd,	// (0x0006d3a6) cams_zoom_vslider_pane_g

0xc9e5,	// (0x0006a5ce) small_slider_vertical_pane

0xa05b,	// (0x00067c44) small_slider_vertical_pane_g1

0xa05b,	// (0x00067c44) small_slider_vertical_pane_g2

0xc9ed,	// (0x0006a5d6) small_slider_vertical_pane_g3

0x0002,

0xf7c2,	// (0x0006d3ab) small_slider_vertical_pane_g

0x9ec1,	// (0x00067aaa) main_hwr_training_pane

0xc9f6,	// (0x0006a5df) hwr_training_instruct_pane_ParamLimits

0xc9f6,	// (0x0006a5df) hwr_training_instruct_pane

0x4d7d,	// (0x00062966) hwr_training_navi_pane_ParamLimits

0x4d7d,	// (0x00062966) hwr_training_navi_pane

0x4d9c,	// (0x00062985) hwr_training_write_pane_ParamLimits

0x4d9c,	// (0x00062985) hwr_training_write_pane

0xe3de,	// (0x0006bfc7) bg_frame_shadow_pane

0xca2d,	// (0x0006a616) hwr_training_write_pane_g1

0xca35,	// (0x0006a61e) hwr_training_write_pane_g2

0xca3d,	// (0x0006a626) hwr_training_write_pane_g3

0xca45,	// (0x0006a62e) hwr_training_write_pane_g4

0xca4d,	// (0x0006a636) hwr_training_write_pane_g5

0xca55,	// (0x0006a63e) hwr_training_write_pane_g6

0xca5d,	// (0x0006a646) hwr_training_write_pane_g7

0x0006,

0xf7c9,	// (0x0006d3b2) hwr_training_write_pane_g

0xca65,	// (0x0006a64e) hwr_training_navi_pane_g1_ParamLimits

0xca65,	// (0x0006a64e) hwr_training_navi_pane_g1

0xca77,	// (0x0006a660) hwr_training_navi_pane_g2_ParamLimits

0xca77,	// (0x0006a660) hwr_training_navi_pane_g2

0xca89,	// (0x0006a672) hwr_training_navi_pane_g3_ParamLimits

0xca89,	// (0x0006a672) hwr_training_navi_pane_g3

0xca99,	// (0x0006a682) hwr_training_navi_pane_g4_ParamLimits

0xca99,	// (0x0006a682) hwr_training_navi_pane_g4

0x0004,

0xf7d8,	// (0x0006d3c1) hwr_training_navi_pane_g_ParamLimits

0xf7d8,	// (0x0006d3c1) hwr_training_navi_pane_g

0xcaa6,	// (0x0006a68f) hwr_training_navi_pane_t1

0x4de4,	// (0x000629cd) list_single_hwr_training_instruct_pane_ParamLimits

0x4de4,	// (0x000629cd) list_single_hwr_training_instruct_pane

0xcab4,	// (0x0006a69d) list_single_hwr_training_instruct_pane_t1

0xc27a,	// (0x00069e63) bg_frame_shadow_pane_g1

0xcac3,	// (0x0006a6ac) bg_frame_shadow_pane_g2

0xcacb,	// (0x0006a6b4) bg_frame_shadow_pane_g3

0xcad3,	// (0x0006a6bc) bg_frame_shadow_pane_g4

0xcadb,	// (0x0006a6c4) bg_frame_shadow_pane_g5

0xcae3,	// (0x0006a6cc) bg_frame_shadow_pane_g6

0xcaeb,	// (0x0006a6d4) bg_frame_shadow_pane_g7

0xf029,	// (0x0006cc12) bg_frame_shadow_pane_g8

0x0007,

0xf7e3,	// (0x0006d3cc) bg_frame_shadow_pane_g

0x9ec1,	// (0x00067aaa) main_video_tele_dialer_pane

0x4e00,	// (0x000629e9) aid_size_cell_video_keypad_ParamLimits

0x4e00,	// (0x000629e9) aid_size_cell_video_keypad

0x4e1a,	// (0x00062a03) grid_video_dialer_keypad_pane_ParamLimits

0x4e1a,	// (0x00062a03) grid_video_dialer_keypad_pane

0x4e66,	// (0x00062a4f) video_down_pane_cp_ParamLimits

0x4e66,	// (0x00062a4f) video_down_pane_cp

0x4e98,	// (0x00062a81) cell_video_dialer_keypad_pane_ParamLimits

0x4e98,	// (0x00062a81) cell_video_dialer_keypad_pane

0xcaf3,	// (0x0006a6dc) bg_button_pane_cp08_ParamLimits

0xcaf3,	// (0x0006a6dc) bg_button_pane_cp08

0x4ebe,	// (0x00062aa7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4ebe,	// (0x00062aa7) cell_video_dialer_keypad_pane_g1

0x47a8,	// (0x00062391) mup3_rocker2_pane_ParamLimits

0x47a8,	// (0x00062391) mup3_rocker2_pane

0xa05b,	// (0x00067c44) mup3_rocker2_pane_g1

0x38e1,	// (0x000614ca) main_dialer2_pane

0x9ec1,	// (0x00067aaa) main_mp4_pane

0xcb1d,	// (0x0006a706) main_mp4_pane_g1_ParamLimits

0xcb1d,	// (0x0006a706) main_mp4_pane_g1

0xcb1d,	// (0x0006a706) main_mp4_pane_g2_ParamLimits

0xcb1d,	// (0x0006a706) main_mp4_pane_g2

0x4ef9,	// (0x00062ae2) main_mp4_pane_g3_ParamLimits

0x4ef9,	// (0x00062ae2) main_mp4_pane_g3

0xcb2b,	// (0x0006a714) main_mp4_pane_g4_ParamLimits

0xcb2b,	// (0x0006a714) main_mp4_pane_g4

0xcb59,	// (0x0006a742) main_mp4_pane_g5_ParamLimits

0xcb59,	// (0x0006a742) main_mp4_pane_g5

0x0007,

0xf803,	// (0x0006d3ec) main_mp4_pane_g_ParamLimits

0xf803,	// (0x0006d3ec) main_mp4_pane_g

0xcbcd,	// (0x0006a7b6) main_mp4_pane_t1_ParamLimits

0xcbcd,	// (0x0006a7b6) main_mp4_pane_t1

0xcc29,	// (0x0006a812) main_mp4_pane_t2_ParamLimits

0xcc29,	// (0x0006a812) main_mp4_pane_t2

0xd51e,	// (0x0006b107) main_mp4_pane_t3_ParamLimits

0xd51e,	// (0x0006b107) main_mp4_pane_t3

0xcc7b,	// (0x0006a864) main_mp4_pane_t4_ParamLimits

0xcc7b,	// (0x0006a864) main_mp4_pane_t4

0x0003,

0xf814,	// (0x0006d3fd) main_mp4_pane_t_ParamLimits

0xf814,	// (0x0006d3fd) main_mp4_pane_t

0xccbb,	// (0x0006a8a4) mp4_progress_pane_ParamLimits

0xccbb,	// (0x0006a8a4) mp4_progress_pane

0xcd05,	// (0x0006a8ee) mp4_rocker_pane_ParamLimits

0xcd05,	// (0x0006a8ee) mp4_rocker_pane

0xd54c,	// (0x0006b135) mp4_progress_pane_t1

0xd565,	// (0x0006b14e) mp4_progress_pane_t2

0x0001,

0xf81d,	// (0x0006d406) mp4_progress_pane_t

0xd57e,	// (0x0006b167) mup_progress_pane_cp04

0xc08f,	// (0x00069c78) mp4_rocker_pane_g1

0x4f43,	// (0x00062b2c) aid_cell_size_keypad2_ParamLimits

0x4f43,	// (0x00062b2c) aid_cell_size_keypad2

0x4f59,	// (0x00062b42) dialer2_ne_pane_ParamLimits

0x4f59,	// (0x00062b42) dialer2_ne_pane

0x4f71,	// (0x00062b5a) grid_dialer2_keypad_pane_ParamLimits

0x4f71,	// (0x00062b5a) grid_dialer2_keypad_pane

0xc11a,	// (0x00069d03) bg_popup_call_pane_cp07_ParamLimits

0xc11a,	// (0x00069d03) bg_popup_call_pane_cp07

0x4f8d,	// (0x00062b76) dialer2_ne_pane_t1_ParamLimits

0x4f8d,	// (0x00062b76) dialer2_ne_pane_t1

0x4fcd,	// (0x00062bb6) cell_dialer2_keypad_pane_ParamLimits

0x4fcd,	// (0x00062bb6) cell_dialer2_keypad_pane

0xd5a3,	// (0x0006b18c) bg_button_pane_pane_cp04_ParamLimits

0xd5a3,	// (0x0006b18c) bg_button_pane_pane_cp04

0x4ff3,	// (0x00062bdc) cell_dialer2_keypad_pane_g1_ParamLimits

0x4ff3,	// (0x00062bdc) cell_dialer2_keypad_pane_g1

0x1609,	// (0x0005f1f2) aid_placing_vt_set_content_ParamLimits

0x1609,	// (0x0005f1f2) aid_placing_vt_set_content

0x162d,	// (0x0005f216) aid_placing_vt_set_title_ParamLimits

0x162d,	// (0x0005f216) aid_placing_vt_set_title

0x9ec1,	// (0x00067aaa) main_image3_pane

0x50b9,	// (0x00062ca2) area_side_right_pane_cp01_ParamLimits

0x50b9,	// (0x00062ca2) area_side_right_pane_cp01

0xcb1d,	// (0x0006a706) main_image3_pane_g1_ParamLimits

0xcb1d,	// (0x0006a706) main_image3_pane_g1

0x50d2,	// (0x00062cbb) main_image3_pane_g2_ParamLimits

0x50d2,	// (0x00062cbb) main_image3_pane_g2

0x50fa,	// (0x00062ce3) main_image3_pane_g3_ParamLimits

0x50fa,	// (0x00062ce3) main_image3_pane_g3

0x5124,	// (0x00062d0d) main_image3_pane_g4_ParamLimits

0x5124,	// (0x00062d0d) main_image3_pane_g4

0x0003,

0xf82c,	// (0x0006d415) main_image3_pane_g_ParamLimits

0xf82c,	// (0x0006d415) main_image3_pane_g

0x514e,	// (0x00062d37) main_image3_pane_t1_ParamLimits

0x514e,	// (0x00062d37) main_image3_pane_t1

0x51a6,	// (0x00062d8f) main_image3_pane_t2_ParamLimits

0x51a6,	// (0x00062d8f) main_image3_pane_t2

0x51f8,	// (0x00062de1) main_image3_pane_t3_ParamLimits

0x51f8,	// (0x00062de1) main_image3_pane_t3

0x0003,

0xf835,	// (0x0006d41e) main_image3_pane_t_ParamLimits

0xf835,	// (0x0006d41e) main_image3_pane_t

0xe775,	// (0x0006c35e) grid_sctrl_middle_pane_cp01_ParamLimits

0xe775,	// (0x0006c35e) grid_sctrl_middle_pane_cp01

0x5280,	// (0x00062e69) cell_sctrl_middle_pane_cp01_ParamLimits

0x5280,	// (0x00062e69) cell_sctrl_middle_pane_cp01

0x529d,	// (0x00062e86) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x529d,	// (0x00062e86) cell_sctrl_middle_pane_cp01_g1

0x9ec1,	// (0x00067aaa) main_call4_pane

0x52b2,	// (0x00062e9b) aid_size_button_call4_ParamLimits

0x52b2,	// (0x00062e9b) aid_size_button_call4

0x52e5,	// (0x00062ece) call4_windows_pane_ParamLimits

0x52e5,	// (0x00062ece) call4_windows_pane

0x5304,	// (0x00062eed) grid_call4_button_pane_ParamLimits

0x5304,	// (0x00062eed) grid_call4_button_pane

0x533b,	// (0x00062f24) call4_windows_conf_pane

0x5354,	// (0x00062f3d) popup_call4_audio_first_window_ParamLimits

0x5354,	// (0x00062f3d) popup_call4_audio_first_window

0x53a4,	// (0x00062f8d) popup_call4_audio_second_window_ParamLimits

0x53a4,	// (0x00062f8d) popup_call4_audio_second_window

0x53bd,	// (0x00062fa6) popup_call4_audio_wait_window_ParamLimits

0x53bd,	// (0x00062fa6) popup_call4_audio_wait_window

0x53cb,	// (0x00062fb4) cell_call4_button_pane_ParamLimits

0x53cb,	// (0x00062fb4) cell_call4_button_pane

0x53f2,	// (0x00062fdb) bg_button_pane_cp09_ParamLimits

0x53f2,	// (0x00062fdb) bg_button_pane_cp09

0x53fe,	// (0x00062fe7) cell_call4_button_pane_g1_ParamLimits

0x53fe,	// (0x00062fe7) cell_call4_button_pane_g1

0x5424,	// (0x0006300d) cell_call4_button_pane_t1_ParamLimits

0x5424,	// (0x0006300d) cell_call4_button_pane_t1

0xd5b7,	// (0x0006b1a0) popup_call4_audio_conf_window_ParamLimits

0xd5b7,	// (0x0006b1a0) popup_call4_audio_conf_window

0x480a,	// (0x000623f3) mup3_progress_pane_t1_ParamLimits

0x4829,	// (0x00062412) mup3_progress_pane_t2_ParamLimits

0xc5a8,	// (0x0006a191) mup3_progress_pane_t3_ParamLimits

0xf70a,	// (0x0006d2f3) mup3_progress_pane_t_ParamLimits

0xc5c5,	// (0x0006a1ae) mup_progress_pane_cp03_ParamLimits

0x4d33,	// (0x0006291c) mup3_control_keys_pane_g4_copy1

0xcce9,	// (0x0006a8d2) mp4_rocker2_pane_ParamLimits

0xcce9,	// (0x0006a8d2) mp4_rocker2_pane

0xd5d1,	// (0x0006b1ba) mp4_rocker2_pane_g1

0xd5d9,	// (0x0006b1c2) mp4_rocker2_pane_g2

0xcd8b,	// (0x0006a974) mp4_rocker2_pane_g3

0xcd93,	// (0x0006a97c) mp4_rocker2_pane_g4

0xcd9b,	// (0x0006a984) mp4_rocker2_pane_g5

0x0004,

0xf83e,	// (0x0006d427) mp4_rocker2_pane_g

0x9ec1,	// (0x00067aaa) main_camera4_pane

0x9ec1,	// (0x00067aaa) main_video4_pane

0x4e34,	// (0x00062a1d) main_video_tele_dialer_pane_t1_ParamLimits

0x4e34,	// (0x00062a1d) main_video_tele_dialer_pane_t1

0x4e4d,	// (0x00062a36) main_video_tele_dialer_pane_t2_ParamLimits

0x4e4d,	// (0x00062a36) main_video_tele_dialer_pane_t2

0x0001,

0xf7f4,	// (0x0006d3dd) main_video_tele_dialer_pane_t_ParamLimits

0xf7f4,	// (0x0006d3dd) main_video_tele_dialer_pane_t

0x5462,	// (0x0006304b) cam4_autofocus_pane_ParamLimits

0x5462,	// (0x0006304b) cam4_autofocus_pane

0x5478,	// (0x00063061) cam4_image_uncrop_pane_ParamLimits

0x5478,	// (0x00063061) cam4_image_uncrop_pane

0x5491,	// (0x0006307a) cam4_indicators_pane_ParamLimits

0x5491,	// (0x0006307a) cam4_indicators_pane

0x54c1,	// (0x000630aa) main_camera4_pane_g1_ParamLimits

0x54c1,	// (0x000630aa) main_camera4_pane_g1

0x54d3,	// (0x000630bc) main_camera4_pane_g2_ParamLimits

0x54d3,	// (0x000630bc) main_camera4_pane_g2

0x54e6,	// (0x000630cf) main_camera4_pane_g3_ParamLimits

0x54e6,	// (0x000630cf) main_camera4_pane_g3

0x54f9,	// (0x000630e2) main_camera4_pane_g4_ParamLimits

0x54f9,	// (0x000630e2) main_camera4_pane_g4

0x550c,	// (0x000630f5) main_camera4_pane_g5_ParamLimits

0x550c,	// (0x000630f5) main_camera4_pane_g5

0x0005,

0xf849,	// (0x0006d432) main_camera4_pane_g_ParamLimits

0xf849,	// (0x0006d432) main_camera4_pane_g

0x5530,	// (0x00063119) main_camera4_pane_t1_ParamLimits

0x5530,	// (0x00063119) main_camera4_pane_t1

0xd5e1,	// (0x0006b1ca) bg_tb_trans_pane_cp06

0xcdc9,	// (0x0006a9b2) cam4_indicators_pane_g1

0xcdda,	// (0x0006a9c3) cam4_indicators_pane_g2

0x0002,

0xf864,	// (0x0006d44d) cam4_indicators_pane_g

0xcdf2,	// (0x0006a9db) cam4_indicators_pane_t1

0x5594,	// (0x0006317d) main_video4_pane_g1_ParamLimits

0x5594,	// (0x0006317d) main_video4_pane_g1

0x55a3,	// (0x0006318c) main_video4_pane_g2_ParamLimits

0x55a3,	// (0x0006318c) main_video4_pane_g2

0x55b3,	// (0x0006319c) main_video4_pane_g3_ParamLimits

0x55b3,	// (0x0006319c) main_video4_pane_g3

0x55c3,	// (0x000631ac) main_video4_pane_g4_ParamLimits

0x55c3,	// (0x000631ac) main_video4_pane_g4

0x0004,

0xf86b,	// (0x0006d454) main_video4_pane_g_ParamLimits

0xf86b,	// (0x0006d454) main_video4_pane_g

0x55e3,	// (0x000631cc) vid4_indicators_pane_ParamLimits

0x55e3,	// (0x000631cc) vid4_indicators_pane

0x560d,	// (0x000631f6) video4_image_uncrop_cif_pane_ParamLimits

0x560d,	// (0x000631f6) video4_image_uncrop_cif_pane

0x5627,	// (0x00063210) video4_image_uncrop_nhd_pane_ParamLimits

0x5627,	// (0x00063210) video4_image_uncrop_nhd_pane

0x5478,	// (0x00063061) video4_image_uncrop_vga_pane_ParamLimits

0x5478,	// (0x00063061) video4_image_uncrop_vga_pane

0x9eb3,	// (0x00067a9c) bg_tb_trans_pane_cp07

0xce20,	// (0x0006aa09) vid4_indicators_pane_g1

0xce36,	// (0x0006aa1f) vid4_indicators_pane_g2

0xce4a,	// (0x0006aa33) vid4_indicators_pane_g3

0x0004,

0xf876,	// (0x0006d45f) vid4_indicators_pane_g

0xce7b,	// (0x0006aa64) vid4_indicators_pane_t1

0x563e,	// (0x00063227) cam4_autofocus_pane_g1

0x5646,	// (0x0006322f) cam4_autofocus_pane_g2

0x564e,	// (0x00063237) cam4_autofocus_pane_g3

0x0002,

0xf881,	// (0x0006d46a) cam4_autofocus_pane_g

0x5656,	// (0x0006323f) cam4_autofocus_pane_g3_copy1

0x4e7c,	// (0x00062a65) video_down_pane_cp_t1

0x4e8a,	// (0x00062a73) video_down_pane_cp_t2

0x0001,

0xf7f9,	// (0x0006d3e2) video_down_pane_cp_t

0x9eb3,	// (0x00067a9c) popup_vitu2_window_ParamLimits

0x9eb3,	// (0x00067a9c) popup_vitu2_window

0x565e,	// (0x00063247) aid_size_cell2_itu2_ParamLimits

0x565e,	// (0x00063247) aid_size_cell2_itu2

0x5684,	// (0x0006326d) aid_size_cell_itu2_ParamLimits

0x5684,	// (0x0006326d) aid_size_cell_itu2

0x56e2,	// (0x000632cb) bg_popup_window_pane_cp09_ParamLimits

0x56e2,	// (0x000632cb) bg_popup_window_pane_cp09

0x56f0,	// (0x000632d9) field_vitu2_entry_pane_ParamLimits

0x56f0,	// (0x000632d9) field_vitu2_entry_pane

0x5718,	// (0x00063301) grid_vitu2_function_pane_ParamLimits

0x5718,	// (0x00063301) grid_vitu2_function_pane

0x5769,	// (0x00063352) grid_vitu2_itu_pane_ParamLimits

0x5769,	// (0x00063352) grid_vitu2_itu_pane

0x57f9,	// (0x000633e2) cell_vitu2_itu_pane_ParamLimits

0x57f9,	// (0x000633e2) cell_vitu2_itu_pane

0x5827,	// (0x00063410) cell_vitu2_function_pane_ParamLimits

0x5827,	// (0x00063410) cell_vitu2_function_pane

0xd5ef,	// (0x0006b1d8) bg_popup_call_pane_cp08_ParamLimits

0xd5ef,	// (0x0006b1d8) bg_popup_call_pane_cp08

0xd606,	// (0x0006b1ef) field_vitu2_entry_pane_g1

0xd612,	// (0x0006b1fb) field_vitu2_entry_pane_g2

0x0002,

0xf888,	// (0x0006d471) field_vitu2_entry_pane_g

0x586b,	// (0x00063454) field_vitu2_entry_pane_t1_ParamLimits

0x586b,	// (0x00063454) field_vitu2_entry_pane_t1

0x589b,	// (0x00063484) field_vitu2_entry_pane_t2_ParamLimits

0x589b,	// (0x00063484) field_vitu2_entry_pane_t2

0x0001,

0xf88f,	// (0x0006d478) field_vitu2_entry_pane_t_ParamLimits

0xf88f,	// (0x0006d478) field_vitu2_entry_pane_t

0x58b8,	// (0x000634a1) bg_button_pane_cp010_ParamLimits

0x58b8,	// (0x000634a1) bg_button_pane_cp010

0x58c6,	// (0x000634af) cell_vitu2_itu_pane_g1

0x58ec,	// (0x000634d5) cell_vitu2_itu_pane_t1_ParamLimits

0x58ec,	// (0x000634d5) cell_vitu2_itu_pane_t1

0x06e8,	// (0x0005e2d1) cell_vitu2_itu_pane_t2_ParamLimits

0x06e8,	// (0x0005e2d1) cell_vitu2_itu_pane_t2

0x0002,

0xf899,	// (0x0006d482) cell_vitu2_itu_pane_t_ParamLimits

0xf899,	// (0x0006d482) cell_vitu2_itu_pane_t

0x9eb3,	// (0x00067a9c) bg_button_pane_cp011

0x594a,	// (0x00063533) cell_vitu2_function_pane_g1

0x9ec1,	// (0x00067aaa) main_myfav_hc_pane

0x5248,	// (0x00062e31) popup_image3_note_pane_ParamLimits

0x5248,	// (0x00062e31) popup_image3_note_pane

0x5264,	// (0x00062e4d) popup_image3_tool_bar_pane_ParamLimits

0x5264,	// (0x00062e4d) popup_image3_tool_bar_pane

0x0776,	// (0x0005e35f) cell_vitu2_itu_pane_t3_ParamLimits

0x0776,	// (0x0005e35f) cell_vitu2_itu_pane_t3

0xe3de,	// (0x0006bfc7) bg_popup_trans_pane

0xd626,	// (0x0006b20f) grid_image3_tool_bar_pane

0xd630,	// (0x0006b219) bg_popup_trans_pane_g1

0xa270,	// (0x00067e59) bg_popup_trans_pane_g2

0xd638,	// (0x0006b221) bg_popup_trans_pane_g3

0xd640,	// (0x0006b229) bg_popup_trans_pane_g4

0xd648,	// (0x0006b231) bg_popup_trans_pane_g5

0xd650,	// (0x0006b239) bg_popup_trans_pane_g6

0xd658,	// (0x0006b241) bg_popup_trans_pane_g7

0xd660,	// (0x0006b249) bg_popup_trans_pane_g8

0xa250,	// (0x00067e39) bg_popup_trans_pane_g9

0x0008,

0xf8a0,	// (0x0006d489) bg_popup_trans_pane_g

0xd668,	// (0x0006b251) cell_image3_tool_bar_pane_ParamLimits

0xd668,	// (0x0006b251) cell_image3_tool_bar_pane

0xa05b,	// (0x00067c44) cell_image3_tool_bar_pane_g1

0xe3de,	// (0x0006bfc7) bg_popup_trans_pane_cp1

0xd67e,	// (0x0006b267) popup_image3_note_pane_t1

0xd68c,	// (0x0006b275) popup_image3_note_pane_t2

0xd69a,	// (0x0006b283) popup_image3_note_pane_t3

0x0002,

0xf8b3,	// (0x0006d49c) popup_image3_note_pane_t

0xd6aa,	// (0x0006b293) popup_image3_note_pane_t3_copy1

0x595e,	// (0x00063547) bg_myfav_hc_instruction_pane_ParamLimits

0x595e,	// (0x00063547) bg_myfav_hc_instruction_pane

0x5976,	// (0x0006355f) cell_myfav_contact_pane_ParamLimits

0x5976,	// (0x0006355f) cell_myfav_contact_pane

0x5992,	// (0x0006357b) cell_myfav_contact_pane_cp1_ParamLimits

0x5992,	// (0x0006357b) cell_myfav_contact_pane_cp1

0x59aa,	// (0x00063593) cell_myfav_contact_pane_cp2_ParamLimits

0x59aa,	// (0x00063593) cell_myfav_contact_pane_cp2

0x59c2,	// (0x000635ab) cell_myfav_contact_pane_cp3_ParamLimits

0x59c2,	// (0x000635ab) cell_myfav_contact_pane_cp3

0x59d9,	// (0x000635c2) cell_myfav_contact_pane_cp4_ParamLimits

0x59d9,	// (0x000635c2) cell_myfav_contact_pane_cp4

0x59f1,	// (0x000635da) cell_myfav_contact_pane_cp5_ParamLimits

0x59f1,	// (0x000635da) cell_myfav_contact_pane_cp5

0x5a05,	// (0x000635ee) cell_myfav_contact_pane_cp6_ParamLimits

0x5a05,	// (0x000635ee) cell_myfav_contact_pane_cp6

0x5a1b,	// (0x00063604) cell_myfav_contact_pane_cp7_ParamLimits

0x5a1b,	// (0x00063604) cell_myfav_contact_pane_cp7

0xd6b8,	// (0x0006b2a1) listscroll_gen_pane_cp05

0x5a33,	// (0x0006361c) main_myfav_hc_pane_g1_ParamLimits

0x5a33,	// (0x0006361c) main_myfav_hc_pane_g1

0x5a4d,	// (0x00063636) main_myfav_hc_pane_g2_ParamLimits

0x5a4d,	// (0x00063636) main_myfav_hc_pane_g2

0x0002,

0xf8ba,	// (0x0006d4a3) main_myfav_hc_pane_g_ParamLimits

0xf8ba,	// (0x0006d4a3) main_myfav_hc_pane_g

0x5a81,	// (0x0006366a) main_myfav_hc_pane_t1_ParamLimits

0x5a81,	// (0x0006366a) main_myfav_hc_pane_t1

0xd6c1,	// (0x0006b2aa) main_myfav_hc_pane_t2_ParamLimits

0xd6c1,	// (0x0006b2aa) main_myfav_hc_pane_t2

0xd6d3,	// (0x0006b2bc) main_myfav_hc_pane_t3_ParamLimits

0xd6d3,	// (0x0006b2bc) main_myfav_hc_pane_t3

0x5a98,	// (0x00063681) main_myfav_hc_pane_t4_ParamLimits

0x5a98,	// (0x00063681) main_myfav_hc_pane_t4

0x0004,

0xf8c1,	// (0x0006d4aa) main_myfav_hc_pane_t_ParamLimits

0xf8c1,	// (0x0006d4aa) main_myfav_hc_pane_t

0xa05b,	// (0x00067c44) bg_myfav_hc_instruction_pane_g1

0xd6e5,	// (0x0006b2ce) cell_myfav_contact_pane_g1_ParamLimits

0xd6e5,	// (0x0006b2ce) cell_myfav_contact_pane_g1

0xd6e5,	// (0x0006b2ce) cell_myfav_contact_pane_g2_ParamLimits

0xd6e5,	// (0x0006b2ce) cell_myfav_contact_pane_g2

0xd6f1,	// (0x0006b2da) cell_myfav_contact_pane_g3_ParamLimits

0xd6f1,	// (0x0006b2da) cell_myfav_contact_pane_g3

0xef0d,	// (0x0006caf6) cell_myfav_contact_pane_g4_ParamLimits

0xef0d,	// (0x0006caf6) cell_myfav_contact_pane_g4

0xd6fe,	// (0x0006b2e7) cell_myfav_contact_pane_g5_ParamLimits

0xd6fe,	// (0x0006b2e7) cell_myfav_contact_pane_g5

0x0004,

0xf8cc,	// (0x0006d4b5) cell_myfav_contact_pane_g_ParamLimits

0xf8cc,	// (0x0006d4b5) cell_myfav_contact_pane_g

0x5a67,	// (0x00063650) main_myfav_hc_pane_g3_ParamLimits

0x5a67,	// (0x00063650) main_myfav_hc_pane_g3

0x094b,	// (0x0005e534) popup_adpt_find_window

0x5ac2,	// (0x000636ab) afind_page_pane_ParamLimits

0x5ac2,	// (0x000636ab) afind_page_pane

0x5ad7,	// (0x000636c0) aid_size_cell_afind_ParamLimits

0x5ad7,	// (0x000636c0) aid_size_cell_afind

0x5af5,	// (0x000636de) bg_popup_sub_pane_cp09_ParamLimits

0x5af5,	// (0x000636de) bg_popup_sub_pane_cp09

0x5b02,	// (0x000636eb) find_pane_cp01_ParamLimits

0x5b02,	// (0x000636eb) find_pane_cp01

0xd70a,	// (0x0006b2f3) grid_afind_control_pane_ParamLimits

0xd70a,	// (0x0006b2f3) grid_afind_control_pane

0x5b0f,	// (0x000636f8) grid_afind_pane_ParamLimits

0x5b0f,	// (0x000636f8) grid_afind_pane

0x5b31,	// (0x0006371a) cell_afind_pane_ParamLimits

0x5b31,	// (0x0006371a) cell_afind_pane

0xa05b,	// (0x00067c44) afind_page_pane_g1

0x5b9e,	// (0x00063787) afind_page_pane_g2

0x5ba7,	// (0x00063790) afind_page_pane_g3

0x0002,

0xf8d7,	// (0x0006d4c0) afind_page_pane_g

0x5bb0,	// (0x00063799) afind_page_pane_t1

0xd71e,	// (0x0006b307) cell_afind_grid_control_pane_ParamLimits

0xd71e,	// (0x0006b307) cell_afind_grid_control_pane

0xd5a3,	// (0x0006b18c) bg_button_pane_cp69_ParamLimits

0xd5a3,	// (0x0006b18c) bg_button_pane_cp69

0x5bd0,	// (0x000637b9) cell_afind_pane_g1_ParamLimits

0x5bd0,	// (0x000637b9) cell_afind_pane_g1

0x5bdd,	// (0x000637c6) cell_afind_pane_t1_ParamLimits

0x5bdd,	// (0x000637c6) cell_afind_pane_t1

0xa065,	// (0x00067c4e) bg_button_pane_cp72

0xd72d,	// (0x0006b316) cell_afind_grid_control_pane_g1

0x332e,	// (0x00060f17) aid_image_placing_area_ParamLimits

0x332e,	// (0x00060f17) aid_image_placing_area

0xeeff,	// (0x0006cae8) field_vitu_entry_pane_g1_ParamLimits

0xeeff,	// (0x0006cae8) field_vitu_entry_pane_g1

0xeeff,	// (0x0006cae8) field_vitu_entry_pane_g2_ParamLimits

0xeeff,	// (0x0006cae8) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x0006cdd0) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x0006cdd0) field_vitu_entry_pane_g

0xc8c5,	// (0x0006a4ae) cell_vitu_itu_pane_g1_ParamLimits

0xc8a8,	// (0x0006a491) cell_vitu_itu_pane_t3_ParamLimits

0xc8a8,	// (0x0006a491) cell_vitu_itu_pane_t3

0xd54c,	// (0x0006b135) mp4_progress_pane_t1_ParamLimits

0xd565,	// (0x0006b14e) mp4_progress_pane_t2_ParamLimits

0xf81d,	// (0x0006d406) mp4_progress_pane_t_ParamLimits

0xd57e,	// (0x0006b167) mup_progress_pane_cp04_ParamLimits

0x5aac,	// (0x00063695) main_myfav_hc_pane_t5_ParamLimits

0x5aac,	// (0x00063695) main_myfav_hc_pane_t5

0x9e5c,	// (0x00067a45) aid_zoom_text_primary

0x094b,	// (0x0005e534) popup_adpt_find_window_ParamLimits

0x9eb3,	// (0x00067a9c) main_cam_set_pane

0x54aa,	// (0x00063093) cam4_zoom_pane_ParamLimits

0x54aa,	// (0x00063093) cam4_zoom_pane

0x5bef,	// (0x000637d8) main_cam_set_pane_g1_ParamLimits

0x5bef,	// (0x000637d8) main_cam_set_pane_g1

0x5bfd,	// (0x000637e6) main_cam_set_pane_g2_ParamLimits

0x5bfd,	// (0x000637e6) main_cam_set_pane_g2

0x0001,

0xf8de,	// (0x0006d4c7) main_cam_set_pane_g_ParamLimits

0xf8de,	// (0x0006d4c7) main_cam_set_pane_g

0x5c1e,	// (0x00063807) main_cam_set_pane_t1_ParamLimits

0x5c1e,	// (0x00063807) main_cam_set_pane_t1

0x5c39,	// (0x00063822) main_cset_listscroll_pane_ParamLimits

0x5c39,	// (0x00063822) main_cset_listscroll_pane

0x5c61,	// (0x0006384a) main_cset_slider_pane_ParamLimits

0x5c61,	// (0x0006384a) main_cset_slider_pane

0xd73e,	// (0x0006b327) main_cset_list_pane_ParamLimits

0xd73e,	// (0x0006b327) main_cset_list_pane

0xd74e,	// (0x0006b337) scroll_pane_cp028

0x5c8b,	// (0x00063874) aid_area_touch_slider

0x5ca7,	// (0x00063890) cset_slider_pane

0x5cca,	// (0x000638b3) main_cset_slider_pane_g1

0x5cdf,	// (0x000638c8) main_cset_slider_pane_g2

0x0011,

0xf8e3,	// (0x0006d4cc) main_cset_slider_pane_g

0xd787,	// (0x0006b370) main_cset_slider_pane_t1

0x5da1,	// (0x0006398a) main_cset_slider_pane_t2

0x5dbb,	// (0x000639a4) main_cset_slider_pane_t3

0x5dd5,	// (0x000639be) main_cset_slider_pane_t4

0x5def,	// (0x000639d8) main_cset_slider_pane_t5

0x5e0d,	// (0x000639f6) main_cset_slider_pane_t6

0x5e24,	// (0x00063a0d) main_cset_slider_pane_t7

0x000e,

0xf908,	// (0x0006d4f1) main_cset_slider_pane_t

0x5f30,	// (0x00063b19) cset_list_set_pane_ParamLimits

0x5f30,	// (0x00063b19) cset_list_set_pane

0xd821,	// (0x0006b40a) aid_position_infowindow_above

0xd829,	// (0x0006b412) aid_position_infowindow_below

0x5f44,	// (0x00063b2d) cset_list_set_pane_g1_ParamLimits

0x5f44,	// (0x00063b2d) cset_list_set_pane_g1

0x5f50,	// (0x00063b39) cset_list_set_pane_g3_ParamLimits

0x5f50,	// (0x00063b39) cset_list_set_pane_g3

0x0001,

0xf927,	// (0x0006d510) cset_list_set_pane_g_ParamLimits

0xf927,	// (0x0006d510) cset_list_set_pane_g

0x5f5f,	// (0x00063b48) cset_list_set_pane_t1_ParamLimits

0x5f5f,	// (0x00063b48) cset_list_set_pane_t1

0xe775,	// (0x0006c35e) list_highlight_pane_cp021_ParamLimits

0xe775,	// (0x0006c35e) list_highlight_pane_cp021

0xab9f,	// (0x00068788) cset_slider_pane_g1

0xabb1,	// (0x0006879a) cset_slider_pane_g2

0xaba8,	// (0x00068791) cset_slider_pane_g3

0x0002,

0xf92c,	// (0x0006d515) cset_slider_pane_g

0xa807,	// (0x000683f0) aid_area_touch_cam4_zoom

0x5f74,	// (0x00063b5d) cam4_zoom_cont_pane

0x5f7c,	// (0x00063b65) cam4_zoom_pane_g1

0x5f84,	// (0x00063b6d) cam4_zoom_pane_g2

0x5f8c,	// (0x00063b75) cam4_zoom_pane_g3

0x0002,

0xf933,	// (0x0006d51c) cam4_zoom_pane_g

0xce92,	// (0x0006aa7b) cam4_zoom_cont_pane_g1

0xce9b,	// (0x0006aa84) cam4_zoom_cont_pane_g2

0xcea4,	// (0x0006aa8d) cam4_zoom_cont_pane_g3

0x0002,

0xf93a,	// (0x0006d523) cam4_zoom_cont_pane_g

0x52d0,	// (0x00062eb9) call4_image_pane_ParamLimits

0x52d0,	// (0x00062eb9) call4_image_pane

0x533b,	// (0x00062f24) call4_windows_conf_pane_ParamLimits

0x5382,	// (0x00062f6b) popup_call4_audio_in_window_ParamLimits

0x5382,	// (0x00062f6b) popup_call4_audio_in_window

0xe3de,	// (0x0006bfc7) bg_popup_call2_act_pane_cp02

0xd5af,	// (0x0006b198) call4_list_conf_pane

0xa05b,	// (0x00067c44) call4_image_pane_g1

0xa05b,	// (0x00067c44) call4_image_pane_g2

0x0001,

0xf3be,	// (0x0006cfa7) call4_image_pane_g

0xd831,	// (0x0006b41a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd831,	// (0x0006b41a) list_single_graphic_popup_conf4_pane

0xe3de,	// (0x0006bfc7) list_highlight_pane_cp022

0xd846,	// (0x0006b42f) list_single_graphic_popup_conf4_pane_g1

0xa860,	// (0x00068449) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf941,	// (0x0006d52a) list_single_graphic_popup_conf4_pane_g

0xd84e,	// (0x0006b437) list_single_graphic_popup_conf4_pane_t1

0x1744,	// (0x0005f32d) popup_vtel_slider_window_ParamLimits

0x1744,	// (0x0005f32d) popup_vtel_slider_window

0xd591,	// (0x0006b17a) dialer2_ne_pane_t2_ParamLimits

0xd591,	// (0x0006b17a) dialer2_ne_pane_t2

0x0001,

0xf822,	// (0x0006d40b) dialer2_ne_pane_t_ParamLimits

0xf822,	// (0x0006d40b) dialer2_ne_pane_t

0xc11a,	// (0x00069d03) bg_popup_sub_pane_cp010_ParamLimits

0xc11a,	// (0x00069d03) bg_popup_sub_pane_cp010

0x5f94,	// (0x00063b7d) popup_vtel_slider_window_g1_ParamLimits

0x5f94,	// (0x00063b7d) popup_vtel_slider_window_g1

0x5fa7,	// (0x00063b90) popup_vtel_slider_window_g2_ParamLimits

0x5fa7,	// (0x00063b90) popup_vtel_slider_window_g2

0x0003,

0xf946,	// (0x0006d52f) popup_vtel_slider_window_g_ParamLimits

0xf946,	// (0x0006d52f) popup_vtel_slider_window_g

0x5ffd,	// (0x00063be6) vtel_slider_pane_ParamLimits

0x5ffd,	// (0x00063be6) vtel_slider_pane

0x601f,	// (0x00063c08) vtel_slider_pane_g1_ParamLimits

0x601f,	// (0x00063c08) vtel_slider_pane_g1

0x6033,	// (0x00063c1c) vtel_slider_pane_g2_ParamLimits

0x6033,	// (0x00063c1c) vtel_slider_pane_g2

0x604b,	// (0x00063c34) vtel_slider_pane_g3_ParamLimits

0x604b,	// (0x00063c34) vtel_slider_pane_g3

0x601f,	// (0x00063c08) vtel_slider_pane_g4_ParamLimits

0x601f,	// (0x00063c08) vtel_slider_pane_g4

0x6061,	// (0x00063c4a) vtel_slider_pane_g5_ParamLimits

0x6061,	// (0x00063c4a) vtel_slider_pane_g5

0x0004,

0xf94f,	// (0x0006d538) vtel_slider_pane_g_ParamLimits

0xf94f,	// (0x0006d538) vtel_slider_pane_g

0x9eb3,	// (0x00067a9c) main_gallery2_pane

0x56b0,	// (0x00063299) aid_size_row_itut2_dropdow_list_ParamLimits

0x56b0,	// (0x00063299) aid_size_row_itut2_dropdow_list

0x5740,	// (0x00063329) grid_vitu2_function_top_pane_ParamLimits

0x5740,	// (0x00063329) grid_vitu2_function_top_pane

0x57a4,	// (0x0006338d) popup_vitu2_dropdown_list_window_ParamLimits

0x57a4,	// (0x0006338d) popup_vitu2_dropdown_list_window

0x57cb,	// (0x000633b4) popup_vitu2_match_list_window

0x6077,	// (0x00063c60) cell_vitu2_function_top_pane_ParamLimits

0x6077,	// (0x00063c60) cell_vitu2_function_top_pane

0x6091,	// (0x00063c7a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6091,	// (0x00063c7a) cell_vitu2_function_top_pane_cp01

0x60ad,	// (0x00063c96) cell_vitu2_function_top_wide_pane_ParamLimits

0x60ad,	// (0x00063c96) cell_vitu2_function_top_wide_pane

0x9eb3,	// (0x00067a9c) bg_button_pane_cp012

0x60cb,	// (0x00063cb4) cell_vitu2_function_top_pane_g1

0xcead,	// (0x0006aa96) bg_button_pane_cp013_ParamLimits

0xcead,	// (0x0006aa96) bg_button_pane_cp013

0x60df,	// (0x00063cc8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x60df,	// (0x00063cc8) cell_vitu2_function_top_wide_pane_g1

0x9eb3,	// (0x00067a9c) bg_popup_sub_pane_cp20

0x60f7,	// (0x00063ce0) list_vitu2_match_list_pane

0xd630,	// (0x0006b219) bg_popup_sub_pane_cp20_g1

0xd638,	// (0x0006b221) bg_popup_sub_pane_cp20_g2

0xa270,	// (0x00067e59) bg_popup_sub_pane_cp20_g3

0xd640,	// (0x0006b229) bg_popup_sub_pane_cp20_g4

0xa250,	// (0x00067e39) bg_popup_sub_pane_cp20_g5

0xd864,	// (0x0006b44d) bg_popup_sub_pane_cp20_g6

0xd650,	// (0x0006b239) bg_popup_sub_pane_cp20_g7

0xd658,	// (0x0006b241) bg_popup_sub_pane_cp20_g8

0xd660,	// (0x0006b249) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95a,	// (0x0006d543) bg_popup_sub_pane_cp20_g

0xcec9,	// (0x0006aab2) list_vitu2_match_list_item_pane_ParamLimits

0xcec9,	// (0x0006aab2) list_vitu2_match_list_item_pane

0xcedb,	// (0x0006aac4) list_vitu2_match_list_item_pane_t1

0x9ec1,	// (0x00067aaa) bg_popup_sub_pane_cp21

0xa006,	// (0x00067bef) grid_vitu2_dropdown_list_pane

0x610f,	// (0x00063cf8) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x610f,	// (0x00063cf8) cell_vitu2_dropdown_list_char_pane

0x6131,	// (0x00063d1a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6131,	// (0x00063d1a) cell_vitu2_dropdown_list_ctrl_pane

0xd86c,	// (0x0006b455) cell_vitu2_dropdown_list_char_pane_g1

0xd875,	// (0x0006b45e) cell_vitu2_dropdown_list_char_pane_g2

0xd87e,	// (0x0006b467) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf96d,	// (0x0006d556) cell_vitu2_dropdown_list_char_pane_g

0x615b,	// (0x00063d44) cell_vitu2_dropdown_list_char_pane_t1

0x6169,	// (0x00063d52) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6169,	// (0x00063d52) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6179,	// (0x00063d62) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6179,	// (0x00063d62) cell_vitu2_dropdown_list_ctrl_pane_g2

0x618a,	// (0x00063d73) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x618a,	// (0x00063d73) cell_vitu2_dropdown_list_ctrl_pane_g3

0x619a,	// (0x00063d83) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x619a,	// (0x00063d83) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd5e1,	// (0x0006b1ca) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd5e1,	// (0x0006b1ca) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf974,	// (0x0006d55d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf974,	// (0x0006d55d) cell_vitu2_dropdown_list_ctrl_pane_g

0x61b6,	// (0x00063d9f) aid_size_cell_gallery2_ParamLimits

0x61b6,	// (0x00063d9f) aid_size_cell_gallery2

0x61d4,	// (0x00063dbd) grid_gallery2_pane_ParamLimits

0x61d4,	// (0x00063dbd) grid_gallery2_pane

0x61ee,	// (0x00063dd7) scroll_pane_cp029_ParamLimits

0x61ee,	// (0x00063dd7) scroll_pane_cp029

0x61ff,	// (0x00063de8) cell_gallery2_pane_ParamLimits

0x61ff,	// (0x00063de8) cell_gallery2_pane

0xd887,	// (0x0006b470) cell_gallery2_pane_g2

0x6263,	// (0x00063e4c) cell_gallery2_pane_g3

0xd88f,	// (0x0006b478) cell_gallery2_pane_g4

0xd897,	// (0x0006b480) cell_gallery2_pane_g5

0xa006,	// (0x00067bef) grid_highlight_pane_cp10

0x57cb,	// (0x000633b4) popup_vitu2_match_list_window_ParamLimits

0x57e2,	// (0x000633cb) popup_vitu2_query_window_ParamLimits

0x57e2,	// (0x000633cb) popup_vitu2_query_window

0x9ec1,	// (0x00067aaa) bg_vitu2_candi_button_pane

0xd86c,	// (0x0006b455) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd875,	// (0x0006b45e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd87e,	// (0x0006b467) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x626b,	// (0x00063e54) bg_button_pane_cp015

0x6282,	// (0x00063e6b) bg_button_pane_cp016

0x628e,	// (0x00063e77) bg_button_pane_cp017

0xab2d,	// (0x00068716) bg_popup_sub_pane_cp22

0xd89f,	// (0x0006b488) popup_vitu2_query_window_g1

0x62cf,	// (0x00063eb8) popup_vitu2_query_window_g2

0x0002,

0xf97f,	// (0x0006d568) popup_vitu2_query_window_g

0x62f5,	// (0x00063ede) popup_vitu2_query_window_t1_ParamLimits

0x62f5,	// (0x00063ede) popup_vitu2_query_window_t1

0x632a,	// (0x00063f13) popup_vitu2_query_window_t2_ParamLimits

0x632a,	// (0x00063f13) popup_vitu2_query_window_t2

0x633c,	// (0x00063f25) popup_vitu2_query_window_t3_ParamLimits

0x633c,	// (0x00063f25) popup_vitu2_query_window_t3

0x6364,	// (0x00063f4d) popup_vitu2_query_window_t4_ParamLimits

0x6364,	// (0x00063f4d) popup_vitu2_query_window_t4

0x6378,	// (0x00063f61) popup_vitu2_query_window_t5_ParamLimits

0x6378,	// (0x00063f61) popup_vitu2_query_window_t5

0x0006,

0xf986,	// (0x0006d56f) popup_vitu2_query_window_t_ParamLimits

0xf986,	// (0x0006d56f) popup_vitu2_query_window_t

0xd736,	// (0x0006b31f) main_cset_text_pane

0x5c8b,	// (0x00063874) aid_area_touch_slider_ParamLimits

0x5ca7,	// (0x00063890) cset_slider_pane_ParamLimits

0x5cca,	// (0x000638b3) main_cset_slider_pane_g1_ParamLimits

0x5cdf,	// (0x000638c8) main_cset_slider_pane_g2_ParamLimits

0xd757,	// (0x0006b340) main_cset_slider_pane_g3_ParamLimits

0xd757,	// (0x0006b340) main_cset_slider_pane_g3

0x5cf4,	// (0x000638dd) main_cset_slider_pane_g4_ParamLimits

0x5cf4,	// (0x000638dd) main_cset_slider_pane_g4

0x5d03,	// (0x000638ec) main_cset_slider_pane_g5_ParamLimits

0x5d03,	// (0x000638ec) main_cset_slider_pane_g5

0x5d11,	// (0x000638fa) main_cset_slider_pane_g6_ParamLimits

0x5d11,	// (0x000638fa) main_cset_slider_pane_g6

0xf8e3,	// (0x0006d4cc) main_cset_slider_pane_g_ParamLimits

0xd787,	// (0x0006b370) main_cset_slider_pane_t1_ParamLimits

0x5da1,	// (0x0006398a) main_cset_slider_pane_t2_ParamLimits

0x5dbb,	// (0x000639a4) main_cset_slider_pane_t3_ParamLimits

0x5dd5,	// (0x000639be) main_cset_slider_pane_t4_ParamLimits

0x5def,	// (0x000639d8) main_cset_slider_pane_t5_ParamLimits

0x5e0d,	// (0x000639f6) main_cset_slider_pane_t6_ParamLimits

0x5e24,	// (0x00063a0d) main_cset_slider_pane_t7_ParamLimits

0x5e52,	// (0x00063a3b) main_cset_slider_pane_t8_ParamLimits

0x5e52,	// (0x00063a3b) main_cset_slider_pane_t8

0x5e7a,	// (0x00063a63) main_cset_slider_pane_t9_ParamLimits

0x5e7a,	// (0x00063a63) main_cset_slider_pane_t9

0x5ea2,	// (0x00063a8b) main_cset_slider_pane_t10_ParamLimits

0x5ea2,	// (0x00063a8b) main_cset_slider_pane_t10

0x5eca,	// (0x00063ab3) main_cset_slider_pane_t11_ParamLimits

0x5eca,	// (0x00063ab3) main_cset_slider_pane_t11

0x5ef4,	// (0x00063add) main_cset_slider_pane_t12_ParamLimits

0x5ef4,	// (0x00063add) main_cset_slider_pane_t12

0x5f11,	// (0x00063afa) main_cset_slider_pane_t13_ParamLimits

0x5f11,	// (0x00063afa) main_cset_slider_pane_t13

0xf908,	// (0x0006d4f1) main_cset_slider_pane_t_ParamLimits

0xe3de,	// (0x0006bfc7) bg_popup_sub_pane_cp011

0xd8ab,	// (0x0006b494) main_cset_text_pane_g1

0xd8b3,	// (0x0006b49c) main_cset_text_pane_t1

0xd8c1,	// (0x0006b4aa) main_cset_text_pane_t2

0xd8cf,	// (0x0006b4b8) main_cset_text_pane_t3

0xd8dd,	// (0x0006b4c6) main_cset_text_pane_t4

0xd8eb,	// (0x0006b4d4) main_cset_text_pane_t5

0xd8f9,	// (0x0006b4e2) main_cset_text_pane_t6

0xd907,	// (0x0006b4f0) main_cset_text_pane_t7

0x0006,

0xf995,	// (0x0006d57e) main_cset_text_pane_t

0x9ec1,	// (0x00067aaa) main_cam4_burst_pane

0x9ec1,	// (0x00067aaa) main_cam5_pane

0x5bbe,	// (0x000637a7) bg_button_pane_cp019

0x5bc7,	// (0x000637b0) bg_button_pane_cp020

0xd763,	// (0x0006b34c) main_cset_slider_pane_g7_ParamLimits

0xd763,	// (0x0006b34c) main_cset_slider_pane_g7

0xd76f,	// (0x0006b358) main_cset_slider_pane_g8_ParamLimits

0xd76f,	// (0x0006b358) main_cset_slider_pane_g8

0x5d25,	// (0x0006390e) main_cset_slider_pane_g9_ParamLimits

0x5d25,	// (0x0006390e) main_cset_slider_pane_g9

0x5d31,	// (0x0006391a) main_cset_slider_pane_g10_ParamLimits

0x5d31,	// (0x0006391a) main_cset_slider_pane_g10

0x5d3d,	// (0x00063926) main_cset_slider_pane_g11_ParamLimits

0x5d3d,	// (0x00063926) main_cset_slider_pane_g11

0x5d49,	// (0x00063932) main_cset_slider_pane_g12_ParamLimits

0x5d49,	// (0x00063932) main_cset_slider_pane_g12

0x5d55,	// (0x0006393e) main_cset_slider_pane_g13_ParamLimits

0x5d55,	// (0x0006393e) main_cset_slider_pane_g13

0x5d61,	// (0x0006394a) main_cset_slider_pane_g14_ParamLimits

0x5d61,	// (0x0006394a) main_cset_slider_pane_g14

0x5d6d,	// (0x00063956) main_cset_slider_pane_g15_ParamLimits

0x5d6d,	// (0x00063956) main_cset_slider_pane_g15

0xd7af,	// (0x0006b398) main_cset_slider_pane_t14_ParamLimits

0xd7af,	// (0x0006b398) main_cset_slider_pane_t14

0xd7e8,	// (0x0006b3d1) main_cset_slider_pane_t15_ParamLimits

0xd7e8,	// (0x0006b3d1) main_cset_slider_pane_t15

0x63e2,	// (0x00063fcb) aid_cam4_burst_size_cell_ParamLimits

0x63e2,	// (0x00063fcb) aid_cam4_burst_size_cell

0x6402,	// (0x00063feb) grid_cam4_burst_pane_ParamLimits

0x6402,	// (0x00063feb) grid_cam4_burst_pane

0x643c,	// (0x00064025) linegrid_cam4_burst_pane_ParamLimits

0x643c,	// (0x00064025) linegrid_cam4_burst_pane

0xdc7f,	// (0x0006b868) scroll_pane_cp30_ParamLimits

0xdc7f,	// (0x0006b868) scroll_pane_cp30

0x645e,	// (0x00064047) cell_cam4_burst_pane_ParamLimits

0x645e,	// (0x00064047) cell_cam4_burst_pane

0xd915,	// (0x0006b4fe) linegrid_cam4_burst_pane_g1_ParamLimits

0xd915,	// (0x0006b4fe) linegrid_cam4_burst_pane_g1

0x64b3,	// (0x0006409c) linegrid_cam4_burst_pane_g2_ParamLimits

0x64b3,	// (0x0006409c) linegrid_cam4_burst_pane_g2

0xd922,	// (0x0006b50b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd922,	// (0x0006b50b) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a4,	// (0x0006d58d) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a4,	// (0x0006d58d) linegrid_cam4_burst_pane_g

0x64c4,	// (0x000640ad) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x64c4,	// (0x000640ad) linegrid_cam4_burst_pane_g3_copy1

0xd92f,	// (0x0006b518) linegrid_cam4_burst_pane_g4_ParamLimits

0xd92f,	// (0x0006b518) linegrid_cam4_burst_pane_g4

0x64e2,	// (0x000640cb) linegrid_cam4_burst_pane_g5_ParamLimits

0x64e2,	// (0x000640cb) linegrid_cam4_burst_pane_g5

0x64f3,	// (0x000640dc) linegrid_cam4_burst_pane_g6_ParamLimits

0x64f3,	// (0x000640dc) linegrid_cam4_burst_pane_g6

0xd93c,	// (0x0006b525) linegrid_cam4_burst_pane_g7_ParamLimits

0xd93c,	// (0x0006b525) linegrid_cam4_burst_pane_g7

0x650a,	// (0x000640f3) cell_cam4_burst_pane_g1

0xd955,	// (0x0006b53e) main_cam5_pane_t1_ParamLimits

0xd955,	// (0x0006b53e) main_cam5_pane_t1

0xd967,	// (0x0006b550) main_cam5_pane_t2_ParamLimits

0xd967,	// (0x0006b550) main_cam5_pane_t2

0xd979,	// (0x0006b562) main_cam5_pane_t3_ParamLimits

0xd979,	// (0x0006b562) main_cam5_pane_t3

0xd98b,	// (0x0006b574) main_cam5_pane_t4_ParamLimits

0xd98b,	// (0x0006b574) main_cam5_pane_t4

0xd9a3,	// (0x0006b58c) main_cam5_pane_t5_ParamLimits

0xd9a3,	// (0x0006b58c) main_cam5_pane_t5

0xd9b7,	// (0x0006b5a0) main_cam5_pane_t6_ParamLimits

0xd9b7,	// (0x0006b5a0) main_cam5_pane_t6

0xd9cb,	// (0x0006b5b4) main_cam5_pane_t7_ParamLimits

0xd9cb,	// (0x0006b5b4) main_cam5_pane_t7

0xd9dd,	// (0x0006b5c6) main_cam5_pane_t8_ParamLimits

0xd9dd,	// (0x0006b5c6) main_cam5_pane_t8

0xd9fb,	// (0x0006b5e4) main_cam5_pane_t9_ParamLimits

0xd9fb,	// (0x0006b5e4) main_cam5_pane_t9

0xda0d,	// (0x0006b5f6) main_cam5_pane_t10_ParamLimits

0xda0d,	// (0x0006b5f6) main_cam5_pane_t10

0xda1f,	// (0x0006b608) main_cam5_pane_t11_ParamLimits

0xda1f,	// (0x0006b608) main_cam5_pane_t11

0xda33,	// (0x0006b61c) main_cam5_pane_t12_ParamLimits

0xda33,	// (0x0006b61c) main_cam5_pane_t12

0xda4a,	// (0x0006b633) main_cam5_pane_t13_ParamLimits

0xda4a,	// (0x0006b633) main_cam5_pane_t13

0x000c,

0xf9b0,	// (0x0006d599) main_cam5_pane_t_ParamLimits

0xf9b0,	// (0x0006d599) main_cam5_pane_t

0x09cc,	// (0x0005e5b5) popup_scut_keymap_window_ParamLimits

0x09cc,	// (0x0005e5b5) popup_scut_keymap_window

0x651d,	// (0x00064106) aid_size_cell_brow_shortcut

0xa006,	// (0x00067bef) bg_popup_window_pane_cp010

0x6529,	// (0x00064112) grid_scut_pane

0x6535,	// (0x0006411e) cell_scut_pane_ParamLimits

0x6535,	// (0x0006411e) cell_scut_pane

0x654e,	// (0x00064137) cell_scut_pane_g1

0xda6d,	// (0x0006b656) cell_scut_pane_t1

0xda7c,	// (0x0006b665) cell_scut_pane_t2

0x6557,	// (0x00064140) cell_scut_pane_t3

0x0002,

0xf9cb,	// (0x0006d5b4) cell_scut_pane_t

0x43a9,	// (0x00061f92) main_mup3_pane_g8_ParamLimits

0x43a9,	// (0x00061f92) main_mup3_pane_g8

0x56ca,	// (0x000632b3) area_vitu2_query_pane_ParamLimits

0x56ca,	// (0x000632b3) area_vitu2_query_pane

0x629a,	// (0x00063e83) input_focus_pane_cp08

0xda8b,	// (0x0006b674) area_vitu2_query_pane_g1

0x6565,	// (0x0006414e) area_vitu2_query_pane_g2

0x0001,

0xf9d2,	// (0x0006d5bb) area_vitu2_query_pane_g

0x657a,	// (0x00064163) area_vitu2_query_pane_t1_ParamLimits

0x657a,	// (0x00064163) area_vitu2_query_pane_t1

0x658e,	// (0x00064177) area_vitu2_query_pane_t2_ParamLimits

0x658e,	// (0x00064177) area_vitu2_query_pane_t2

0x65a2,	// (0x0006418b) area_vitu2_query_pane_t3_ParamLimits

0x65a2,	// (0x0006418b) area_vitu2_query_pane_t3

0x65ce,	// (0x000641b7) area_vitu2_query_pane_t4_ParamLimits

0x65ce,	// (0x000641b7) area_vitu2_query_pane_t4

0x65f6,	// (0x000641df) area_vitu2_query_pane_t5_ParamLimits

0x65f6,	// (0x000641df) area_vitu2_query_pane_t5

0x661e,	// (0x00064207) area_vitu2_query_pane_t6_ParamLimits

0x661e,	// (0x00064207) area_vitu2_query_pane_t6

0x0006,

0xf9d7,	// (0x0006d5c0) area_vitu2_query_pane_t_ParamLimits

0xf9d7,	// (0x0006d5c0) area_vitu2_query_pane_t

0x666a,	// (0x00064253) bg_button_pane_cp018

0x6676,	// (0x0006425f) bg_button_pane_cp021

0x6682,	// (0x0006426b) bg_button_pane_cp022

0x66a9,	// (0x00064292) input_focus_pane_cp09

0x2a50,	// (0x00060639) aid_size_touch_mv_arrow_left

0x2a79,	// (0x00060662) aid_size_touch_mv_arrow_right

0x5d85,	// (0x0006396e) main_cset_slider_pane_g16_ParamLimits

0x5d85,	// (0x0006396e) main_cset_slider_pane_g16

0x5d93,	// (0x0006397c) main_cset_slider_pane_g17_ParamLimits

0x5d93,	// (0x0006397c) main_cset_slider_pane_g17

0x650a,	// (0x000640f3) cell_cam4_burst_pane_g1_ParamLimits

0xe3de,	// (0x0006bfc7) compa_mode_pane

0x5fb7,	// (0x00063ba0) popup_vtel_slider_window_g3_ParamLimits

0x5fb7,	// (0x00063ba0) popup_vtel_slider_window_g3

0x5fce,	// (0x00063bb7) popup_vtel_slider_window_g4_ParamLimits

0x5fce,	// (0x00063bb7) popup_vtel_slider_window_g4

0x5fe5,	// (0x00063bce) popup_vtel_slider_window_t1_ParamLimits

0x5fe5,	// (0x00063bce) popup_vtel_slider_window_t1

0x9ec1,	// (0x00067aaa) main_cl_pane

0xbe07,	// (0x000699f0) popup_imed_adjust2_window_ParamLimits

0xab2d,	// (0x00068716) bg_tb_trans_pane_cp05_ParamLimits

0xc7d3,	// (0x0006a3bc) popup_imed_adjust2_window_g1_ParamLimits

0xc7e2,	// (0x0006a3cb) popup_imed_adjust2_window_g2_ParamLimits

0xc7e2,	// (0x0006a3cb) popup_imed_adjust2_window_g2

0xc7ee,	// (0x0006a3d7) popup_imed_adjust2_window_g3_ParamLimits

0xc7ee,	// (0x0006a3d7) popup_imed_adjust2_window_g3

0x0002,

0xf74d,	// (0x0006d336) popup_imed_adjust2_window_g_ParamLimits

0xf74d,	// (0x0006d336) popup_imed_adjust2_window_g

0xc7fa,	// (0x0006a3e3) popup_imed_adjust2_window_t1_ParamLimits

0xc812,	// (0x0006a3fb) slider_imed_adjust_pane_ParamLimits

0xc826,	// (0x0006a40f) slider_imed_adjust_pane_g1_ParamLimits

0xc836,	// (0x0006a41f) slider_imed_adjust_pane_g2_ParamLimits

0xc846,	// (0x0006a42f) slider_imed_adjust_pane_g3_ParamLimits

0xc857,	// (0x0006a440) slider_imed_adjust_pane_g4_ParamLimits

0xf754,	// (0x0006d33d) slider_imed_adjust_pane_g_ParamLimits

0x544a,	// (0x00063033) aid_touch_area_cam4_ParamLimits

0x544a,	// (0x00063033) aid_touch_area_cam4

0xcda3,	// (0x0006a98c) battery_pane_cp01

0x551d,	// (0x00063106) main_camera4_pane_g6_ParamLimits

0x551d,	// (0x00063106) main_camera4_pane_g6

0x5547,	// (0x00063130) main_camera4_pane_t2_ParamLimits

0x5547,	// (0x00063130) main_camera4_pane_t2

0x0001,

0xf856,	// (0x0006d43f) main_camera4_pane_t_ParamLimits

0xf856,	// (0x0006d43f) main_camera4_pane_t

0x557c,	// (0x00063165) aid_touch_area_vid4_ParamLimits

0x557c,	// (0x00063165) aid_touch_area_vid4

0x55d3,	// (0x000631bc) main_video4_pane_g5_ParamLimits

0x55d3,	// (0x000631bc) main_video4_pane_g5

0x55f9,	// (0x000631e2) vid4_progress_pane_ParamLimits

0x55f9,	// (0x000631e2) vid4_progress_pane

0xd77b,	// (0x0006b364) main_cset_slider_pane_g18_ParamLimits

0xd77b,	// (0x0006b364) main_cset_slider_pane_g18

0xd949,	// (0x0006b532) cell_cam4_burst_pane_g2_ParamLimits

0xd949,	// (0x0006b532) cell_cam4_burst_pane_g2

0x0001,

0xf9ab,	// (0x0006d594) cell_cam4_burst_pane_g_ParamLimits

0xf9ab,	// (0x0006d594) cell_cam4_burst_pane_g

0xef71,	// (0x0006cb5a) bg_cl_pane_ParamLimits

0xef71,	// (0x0006cb5a) bg_cl_pane

0x66ba,	// (0x000642a3) cl_header_pane_ParamLimits

0x66ba,	// (0x000642a3) cl_header_pane

0x66ce,	// (0x000642b7) cl_listscroll_pane_ParamLimits

0x66ce,	// (0x000642b7) cl_listscroll_pane

0xda97,	// (0x0006b680) bg_cl_pane_g1

0xda9f,	// (0x0006b688) bg_cl_pane_g2

0xdaa7,	// (0x0006b690) bg_cl_pane_g3

0xdaaf,	// (0x0006b698) bg_cl_pane_g4

0xdab7,	// (0x0006b6a0) bg_cl_pane_g5

0xdabf,	// (0x0006b6a8) bg_cl_pane_g6

0xdac7,	// (0x0006b6b0) bg_cl_pane_g7

0xdacf,	// (0x0006b6b8) bg_cl_pane_g8

0xdad7,	// (0x0006b6c0) bg_cl_pane_g9

0x0008,

0xf9e6,	// (0x0006d5cf) bg_cl_pane_g

0x66de,	// (0x000642c7) aid_height_cl_leading_ParamLimits

0x66de,	// (0x000642c7) aid_height_cl_leading

0x66ea,	// (0x000642d3) aid_height_cl_text_ParamLimits

0x66ea,	// (0x000642d3) aid_height_cl_text

0xe775,	// (0x0006c35e) bg_cl_header_pane_ParamLimits

0xe775,	// (0x0006c35e) bg_cl_header_pane

0x6709,	// (0x000642f2) cl_header_pane_g1_ParamLimits

0x6709,	// (0x000642f2) cl_header_pane_g1

0x671f,	// (0x00064308) cl_header_pane_t1_ParamLimits

0x671f,	// (0x00064308) cl_header_pane_t1

0xdadf,	// (0x0006b6c8) cl_list_pane

0xd74e,	// (0x0006b337) hc_scroll_pane_cp01

0xa250,	// (0x00067e39) bg_cl_header_pane_g1

0xd630,	// (0x0006b219) bg_cl_header_pane_g2

0xa270,	// (0x00067e59) bg_cl_header_pane_g3

0xd640,	// (0x0006b229) bg_cl_header_pane_g4

0xd638,	// (0x0006b221) bg_cl_header_pane_g5

0xd864,	// (0x0006b44d) bg_cl_header_pane_g6

0xd658,	// (0x0006b241) bg_cl_header_pane_g7

0xd660,	// (0x0006b249) bg_cl_header_pane_g8

0xd650,	// (0x0006b239) bg_cl_header_pane_g9

0x0008,

0xf9f9,	// (0x0006d5e2) bg_cl_header_pane_g

0x6738,	// (0x00064321) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6738,	// (0x00064321) hc_cl_list_double_graphic_heading_pane

0x674b,	// (0x00064334) hc_cl_list_single_graphic_pane_ParamLimits

0x674b,	// (0x00064334) hc_cl_list_single_graphic_pane

0x6763,	// (0x0006434c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6763,	// (0x0006434c) hc_cl_list_single_graphic_pane_g1

0x676f,	// (0x00064358) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x676f,	// (0x00064358) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa0c,	// (0x0006d5f5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa0c,	// (0x0006d5f5) hc_cl_list_single_graphic_pane_g

0x6783,	// (0x0006436c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6783,	// (0x0006436c) hc_cl_list_single_graphic_pane_t1

0x6763,	// (0x0006434c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6763,	// (0x0006434c) hc_cl_list_double_graphic_heading_pane_g1

0x6798,	// (0x00064381) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6798,	// (0x00064381) hc_cl_list_double_graphic_heading_pane_g2

0x67ac,	// (0x00064395) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x67ac,	// (0x00064395) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa11,	// (0x0006d5fa) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa11,	// (0x0006d5fa) hc_cl_list_double_graphic_heading_pane_g

0x67c0,	// (0x000643a9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x67c0,	// (0x000643a9) hc_cl_list_double_graphic_heading_pane_t1

0x67d5,	// (0x000643be) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x67d5,	// (0x000643be) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa18,	// (0x0006d601) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa18,	// (0x0006d601) hc_cl_list_double_graphic_heading_pane_t

0xdaf0,	// (0x0006b6d9) vid4_progress_pane_g1

0xdb00,	// (0x0006b6e9) vid4_progress_pane_g2

0x67ea,	// (0x000643d3) vid4_progress_pane_g3

0xdb10,	// (0x0006b6f9) vid4_progress_pane_g4

0x0004,

0xfa1d,	// (0x0006d606) vid4_progress_pane_g

0x67fc,	// (0x000643e5) vid4_progress_pane_t1

0xdb2e,	// (0x0006b717) vid4_progress_pane_t2

0x0002,

0xfa28,	// (0x0006d611) vid4_progress_pane_t

0x6816,	// (0x000643ff) wait_bar_pane_cp07

0xc128,	// (0x00069d11) blid_firmament_pane_ParamLimits

0xc16b,	// (0x00069d54) popup_blid_sat_info2_window_g1

0xc18f,	// (0x00069d78) popup_blid_sat_info2_window_t3

0xc19d,	// (0x00069d86) popup_blid_sat_info2_window_t4

0xc1ab,	// (0x00069d94) popup_blid_sat_info2_window_t5

0xc1b9,	// (0x00069da2) popup_blid_sat_info2_window_t6

0xc1c9,	// (0x00069db2) popup_blid_sat_info2_window_t7

0xc1d7,	// (0x00069dc0) popup_blid_sat_info2_window_t8

0xc1e5,	// (0x00069dce) popup_blid_sat_info2_window_t9

0xc1f3,	// (0x00069ddc) popup_blid_sat_info2_window_t10

0xc2ba,	// (0x00069ea3) aid_firma_cardinal_ParamLimits

0xc2ce,	// (0x00069eb7) blid_firmament_pane_t1_ParamLimits

0xc2e5,	// (0x00069ece) blid_firmament_pane_t2_ParamLimits

0xc2fc,	// (0x00069ee5) blid_firmament_pane_t3_ParamLimits

0xc313,	// (0x00069efc) blid_firmament_pane_t4_ParamLimits

0xf646,	// (0x0006d22f) blid_firmament_pane_t_ParamLimits

0xc32a,	// (0x00069f13) blid_sat_info_pane_ParamLimits

0x9eb3,	// (0x00067a9c) main_cam_set_pane_ParamLimits

0x4bb2,	// (0x0006279b) aid_size_cell_colour_35_ParamLimits

0x4bd2,	// (0x000627bb) aid_size_cell_colour_112_ParamLimits

0x4bf2,	// (0x000627db) aid_size_cell_effect_ParamLimits

0xab2d,	// (0x00068716) bg_tb_trans_pane_cp02_ParamLimits

0xa50f,	// (0x000680f8) heading_imed_pane_ParamLimits

0x4c12,	// (0x000627fb) listscroll_imed_pane_ParamLimits

0xb4f0,	// (0x000690d9) popup_call2_audio_first_window_g5_ParamLimits

0xb4f0,	// (0x000690d9) popup_call2_audio_first_window_g5

0x505b,	// (0x00062c44) aid_size_touch_image3_arrow_left_ParamLimits

0x505b,	// (0x00062c44) aid_size_touch_image3_arrow_left

0x5087,	// (0x00062c70) aid_size_touch_image3_arrow_right_ParamLimits

0x5087,	// (0x00062c70) aid_size_touch_image3_arrow_right

0xdb44,	// (0x0006b72d) vid4_progress_pane_t3

0x4db7,	// (0x000629a0) main_hwr_training_symbol_option_pane_ParamLimits

0x4db7,	// (0x000629a0) main_hwr_training_symbol_option_pane

0xca18,	// (0x0006a601) popup_hwr_training_preview_window_ParamLimits

0xca18,	// (0x0006a601) popup_hwr_training_preview_window

0x4dd7,	// (0x000629c0) hwr_training_navi_pane_g5_ParamLimits

0x4dd7,	// (0x000629c0) hwr_training_navi_pane_g5

0xd61e,	// (0x0006b207) popup_char_count_window

0x9eb3,	// (0x00067a9c) bg_popup_sub_pane_cp20_ParamLimits

0x60f7,	// (0x00063ce0) list_vitu2_match_list_pane_ParamLimits

0x6103,	// (0x00063cec) vitu2_page_scroll_pane_ParamLimits

0x6103,	// (0x00063cec) vitu2_page_scroll_pane

0xdb59,	// (0x0006b742) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb59,	// (0x0006b742) list_single_hwr_training_symbol_option_pane

0xdb6c,	// (0x0006b755) list_single_hwr_training_symbol_option_pane_g1

0xdb74,	// (0x0006b75d) list_single_hwr_training_symbol_option_pane_t1

0xdb82,	// (0x0006b76b) bg_button_pane_cp023

0xdb8b,	// (0x0006b774) bg_button_pane_cp024

0xdbbe,	// (0x0006b7a7) vitu2_page_scroll_pane_g1

0xdbc6,	// (0x0006b7af) vitu2_page_scroll_pane_g2

0x0001,

0xfa2f,	// (0x0006d618) vitu2_page_scroll_pane_g

0xdbce,	// (0x0006b7b7) vitu2_page_scroll_pane_t1

0xdbdd,	// (0x0006b7c6) popup_char_count_window_g1

0xdbe6,	// (0x0006b7cf) popup_char_count_window_g2

0xdbef,	// (0x0006b7d8) popup_char_count_window_g3

0x0002,

0xfa34,	// (0x0006d61d) popup_char_count_window_g

0xdbf8,	// (0x0006b7e1) popup_char_count_window_t1

0x9ec1,	// (0x00067aaa) main_vded2_pane

0xc7bf,	// (0x0006a3a8) aid_size_cell_imed_line

0xc7c9,	// (0x0006a3b2) grid_imed_line_width_pane

0xce5d,	// (0x0006aa46) vid4_indicators_pane_g4

0xdc06,	// (0x0006b7ef) cell_imed_line_width_pane_ParamLimits

0xdc06,	// (0x0006b7ef) cell_imed_line_width_pane

0xdc1c,	// (0x0006b805) cell_imed_line_width_pane_g1

0xdc25,	// (0x0006b80e) cell_imed_line_width_pane_g2

0x0001,

0xfa3b,	// (0x0006d624) cell_imed_line_width_pane_g

0x685f,	// (0x00064448) main_vded2_pane_g1_ParamLimits

0x685f,	// (0x00064448) main_vded2_pane_g1

0x687a,	// (0x00064463) main_vded2_pane_g2_ParamLimits

0x687a,	// (0x00064463) main_vded2_pane_g2

0x0001,

0xfa40,	// (0x0006d629) main_vded2_pane_g_ParamLimits

0xfa40,	// (0x0006d629) main_vded2_pane_g

0x688c,	// (0x00064475) vded2_slider_pane_ParamLimits

0x688c,	// (0x00064475) vded2_slider_pane

0x689c,	// (0x00064485) aid_size_touch_vded2_end

0x68a6,	// (0x0006448f) aid_size_touch_vded2_playhead

0xdc2d,	// (0x0006b816) aid_size_touch_vded2_start

0xdc35,	// (0x0006b81e) vded2_slider_bg_pane

0xdc8b,	// (0x0006b874) vded2_slider_pane_g1

0xdc94,	// (0x0006b87d) vded2_slider_pane_g2

0x68b0,	// (0x00064499) vded2_slider_pane_g3

0x0002,

0xfa45,	// (0x0006d62e) vded2_slider_pane_g

0xdc3e,	// (0x0006b827) vded2_slider_bg_pane_g1

0xdc47,	// (0x0006b830) vded2_slider_bg_pane_g2

0xdc50,	// (0x0006b839) vded2_slider_bg_pane_g3

0x0002,

0xfa4c,	// (0x0006d635) vded2_slider_bg_pane_g

0x2f68,	// (0x00060b51) aid_postcard_touch_down_pane_ParamLimits

0x2f68,	// (0x00060b51) aid_postcard_touch_down_pane

0x2f80,	// (0x00060b69) aid_postcard_touch_up_pane_ParamLimits

0x2f80,	// (0x00060b69) aid_postcard_touch_up_pane

0x9ec1,	// (0x00067aaa) main_blid2_pane

0xbde9,	// (0x000699d2) popup_blid2_search_window

0xe3de,	// (0x0006bfc7) blid2_gps_pane

0xe3de,	// (0x0006bfc7) blid2_navig_pane

0xe3de,	// (0x0006bfc7) blid2_search_pane

0xe3de,	// (0x0006bfc7) blid2_tripm_pane

0x68bb,	// (0x000644a4) blid2_search_pane_g1_ParamLimits

0x68bb,	// (0x000644a4) blid2_search_pane_g1

0x68ce,	// (0x000644b7) blid2_search_pane_t1_ParamLimits

0x68ce,	// (0x000644b7) blid2_search_pane_t1

0x68e0,	// (0x000644c9) aid_size_cell_blid2_gps_ParamLimits

0x68e0,	// (0x000644c9) aid_size_cell_blid2_gps

0x68f8,	// (0x000644e1) blid2_gps_pane_g1_ParamLimits

0x68f8,	// (0x000644e1) blid2_gps_pane_g1

0x690c,	// (0x000644f5) grid_blid2_satellite_pane_ParamLimits

0x690c,	// (0x000644f5) grid_blid2_satellite_pane

0x6924,	// (0x0006450d) blid2_navig_pane_g1_ParamLimits

0x6924,	// (0x0006450d) blid2_navig_pane_g1

0x6930,	// (0x00064519) blid2_navig_pane_t1_ParamLimits

0x6930,	// (0x00064519) blid2_navig_pane_t1

0x694b,	// (0x00064534) blid2_navig_pane_t2_ParamLimits

0x694b,	// (0x00064534) blid2_navig_pane_t2

0x0001,

0xfa53,	// (0x0006d63c) blid2_navig_pane_t_ParamLimits

0xfa53,	// (0x0006d63c) blid2_navig_pane_t

0x6966,	// (0x0006454f) blid2_navig_ring_pane_ParamLimits

0x6966,	// (0x0006454f) blid2_navig_ring_pane

0x6981,	// (0x0006456a) blid2_speed_pane_ParamLimits

0x6981,	// (0x0006456a) blid2_speed_pane

0x698d,	// (0x00064576) blid2_tripm_pane_g1_ParamLimits

0x698d,	// (0x00064576) blid2_tripm_pane_g1

0x69a8,	// (0x00064591) blid2_tripm_pane_g2_ParamLimits

0x69a8,	// (0x00064591) blid2_tripm_pane_g2

0x69bc,	// (0x000645a5) blid2_tripm_pane_g3_ParamLimits

0x69bc,	// (0x000645a5) blid2_tripm_pane_g3

0x69d0,	// (0x000645b9) blid2_tripm_pane_g4_ParamLimits

0x69d0,	// (0x000645b9) blid2_tripm_pane_g4

0x69e4,	// (0x000645cd) blid2_tripm_pane_g5_ParamLimits

0x69e4,	// (0x000645cd) blid2_tripm_pane_g5

0x0005,

0xfa58,	// (0x0006d641) blid2_tripm_pane_g_ParamLimits

0xfa58,	// (0x0006d641) blid2_tripm_pane_g

0x6a0a,	// (0x000645f3) blid2_tripm_pane_t1_ParamLimits

0x6a0a,	// (0x000645f3) blid2_tripm_pane_t1

0x6a23,	// (0x0006460c) blid2_tripm_pane_t2_ParamLimits

0x6a23,	// (0x0006460c) blid2_tripm_pane_t2

0x6a3c,	// (0x00064625) blid2_tripm_pane_t3_ParamLimits

0x6a3c,	// (0x00064625) blid2_tripm_pane_t3

0x0003,

0xfa65,	// (0x0006d64e) blid2_tripm_pane_t_ParamLimits

0xfa65,	// (0x0006d64e) blid2_tripm_pane_t

0x6a83,	// (0x0006466c) cell_blid2_satellite_pane_ParamLimits

0x6a83,	// (0x0006466c) cell_blid2_satellite_pane

0x6a9f,	// (0x00064688) cell_blid2_satellite_pane_g1

0xdc9c,	// (0x0006b885) cell_blid2_satellite_pane_t1

0xa05b,	// (0x00067c44) blid2_speed_pane_g1

0xdcaa,	// (0x0006b893) blid2_speed_pane_t1

0xdcb8,	// (0x0006b8a1) blid2_speed_pane_t2

0x0001,

0xfa6e,	// (0x0006d657) blid2_speed_pane_t

0xa05b,	// (0x00067c44) blid2_navig_ring_pane_g1

0x6aa8,	// (0x00064691) blid2_navig_ring_pane_g2

0x6ab0,	// (0x00064699) blid2_navig_ring_pane_g3

0x6ab8,	// (0x000646a1) blid2_navig_ring_pane_g4

0x6ac0,	// (0x000646a9) blid2_navig_ring_pane_g5

0x0004,

0xfa73,	// (0x0006d65c) blid2_navig_ring_pane_g

0xe3de,	// (0x0006bfc7) bg_popup_window_pane_cp011

0xdcc6,	// (0x0006b8af) popup_blid2_search_window_g1

0xdcce,	// (0x0006b8b7) popup_blid2_search_window_t1

0xdcdc,	// (0x0006b8c5) popup_blid2_search_window_t2

0x0001,

0xfa7e,	// (0x0006d667) popup_blid2_search_window_t

0xa15f,	// (0x00067d48) main_browser_pane_g1

0xef71,	// (0x0006cb5a) main_browser_pane_ParamLimits

0x9eb3,	// (0x00067a9c) bg_button_pane_cp011_ParamLimits

0x594a,	// (0x00063533) cell_vitu2_function_pane_g1_ParamLimits

0xab2d,	// (0x00068716) bg_popup_sub_pane_cp22_ParamLimits

0x629a,	// (0x00063e83) input_focus_pane_cp08_ParamLimits

0x62b6,	// (0x00063e9f) popup_vitu2_query_button_pane_ParamLimits

0x62b6,	// (0x00063e9f) popup_vitu2_query_button_pane

0x62c5,	// (0x00063eae) popup_vitu2_query_input_button_pane

0xd89f,	// (0x0006b488) popup_vitu2_query_window_g1_ParamLimits

0x62cf,	// (0x00063eb8) popup_vitu2_query_window_g2_ParamLimits

0xf97f,	// (0x0006d568) popup_vitu2_query_window_g_ParamLimits

0xe3de,	// (0x0006bfc7) bg_button_pane_cp026

0x6ac8,	// (0x000646b1) popup_vitu2_query_input_button_pane_g1

0xe3de,	// (0x0006bfc7) bg_button_pane_cp025

0xdcea,	// (0x0006b8d3) popup_vitu2_query_button_pane_t1

0x3f8d,	// (0x00061b76) main_mp3_pane_t6

0x3f9b,	// (0x00061b84) popup_slider_window_cp01

0xcdc1,	// (0x0006a9aa) cam4_battery_pane

0xce16,	// (0x0006a9ff) cam4_battery_pane_cp02

0xdae8,	// (0x0006b6d1) cam4_battery_pane_cp01

0xdae8,	// (0x0006b6d1) cam4_battery_pane_cp03

0xc08f,	// (0x00069c78) cam4_battery_pane_g1

0xa05b,	// (0x00067c44) cam4_battery_pane_g2

0x0001,

0xfa83,	// (0x0006d66c) cam4_battery_pane_g

0xc201,	// (0x00069dea) popup_blid_sat_info2_window_t11

0x2a50,	// (0x00060639) aid_size_touch_mv_arrow_left_ParamLimits

0x2a79,	// (0x00060662) aid_size_touch_mv_arrow_right_ParamLimits

0xa98e,	// (0x00068577) navi_pane_g1_ParamLimits

0x2ab8,	// (0x000606a1) navi_pane_g2_ParamLimits

0x2ae6,	// (0x000606cf) navi_pane_g3_ParamLimits

0xf35a,	// (0x0006cf43) navi_pane_g_ParamLimits

0x2b40,	// (0x00060729) navi_pane_mv_t1_ParamLimits

0x4c1e,	// (0x00062807) grid_imed_effect_pane_ParamLimits

0x164c,	// (0x0005f235) aid_placing_vt_slider_lsc

0xa0aa,	// (0x00067c93) aid_placing_vt_slider_prt

0xe775,	// (0x0006c35e) bg_tb_trans_pane_cp01_ParamLimits

0xc469,	// (0x0006a052) popup_image_details_window_g1_ParamLimits

0xc47c,	// (0x0006a065) popup_image_details_window_g2_ParamLimits

0xc491,	// (0x0006a07a) popup_image_details_window_g3_ParamLimits

0xc491,	// (0x0006a07a) popup_image_details_window_g3

0xf686,	// (0x0006d26f) popup_image_details_window_g_ParamLimits

0xc4a5,	// (0x0006a08e) popup_image_details_window_t1_ParamLimits

0xc4b7,	// (0x0006a0a0) popup_image_details_window_t2_ParamLimits

0xc4d0,	// (0x0006a0b9) popup_image_details_window_t3_ParamLimits

0xc4e4,	// (0x0006a0cd) popup_image_details_window_t4_ParamLimits

0xc4ff,	// (0x0006a0e8) popup_image_details_window_t5_ParamLimits

0xf68d,	// (0x0006d276) popup_image_details_window_t_ParamLimits

0x66f6,	// (0x000642df) cl_header_name_pane_ParamLimits

0x66f6,	// (0x000642df) cl_header_name_pane

0x6ad0,	// (0x000646b9) cl_header_name_pane_t1_ParamLimits

0x6ad0,	// (0x000646b9) cl_header_name_pane_t1

0x6af1,	// (0x000646da) cl_header_name_pane_t2_ParamLimits

0x6af1,	// (0x000646da) cl_header_name_pane_t2

0x6b33,	// (0x0006471c) cl_header_name_pane_t3_ParamLimits

0x6b33,	// (0x0006471c) cl_header_name_pane_t3

0x0002,

0xfa88,	// (0x0006d671) cl_header_name_pane_t_ParamLimits

0xfa88,	// (0x0006d671) cl_header_name_pane_t

0x2b11,	// (0x000606fa) navi_pane_mv_g2_ParamLimits

0xd606,	// (0x0006b1ef) field_vitu2_entry_pane_g1_ParamLimits

0xd612,	// (0x0006b1fb) field_vitu2_entry_pane_g2_ParamLimits

0xaaf7,	// (0x000686e0) field_vitu2_entry_pane_g3_ParamLimits

0xaaf7,	// (0x000686e0) field_vitu2_entry_pane_g3

0xf888,	// (0x0006d471) field_vitu2_entry_pane_g_ParamLimits

0x58c6,	// (0x000634af) cell_vitu2_itu_pane_g1_ParamLimits

0x58de,	// (0x000634c7) cell_vitu2_itu_pane_g2_ParamLimits

0x58de,	// (0x000634c7) cell_vitu2_itu_pane_g2

0x0001,

0xf894,	// (0x0006d47d) cell_vitu2_itu_pane_g_ParamLimits

0xf894,	// (0x0006d47d) cell_vitu2_itu_pane_g

0x9eb3,	// (0x00067a9c) bg_vkb2_func_pane_cp05_ParamLimits

0x9eb3,	// (0x00067a9c) bg_vkb2_func_pane_cp05

0x9eb3,	// (0x00067a9c) bg_vkb2_func_pane_cp03

0x9eb3,	// (0x00067a9c) bg_vkb2_func_pane_cp04

0x9eb3,	// (0x00067a9c) bg_vkb2_func_pane_cp10_ParamLimits

0x9eb3,	// (0x00067a9c) bg_vkb2_func_pane_cp10

0x6695,	// (0x0006427e) bg_vkb2_func_pane_cp08

0x666a,	// (0x00064253) bg_vkb2_func_pane_cp06

0x6676,	// (0x0006425f) bg_vkb2_func_pane_cp07

0xdb94,	// (0x0006b77d) bg_vkb2_func_pane_cp11_ParamLimits

0xdb94,	// (0x0006b77d) bg_vkb2_func_pane_cp11

0xdba9,	// (0x0006b792) bg_vkb2_func_pane_cp12_ParamLimits

0xdba9,	// (0x0006b792) bg_vkb2_func_pane_cp12

0xe3de,	// (0x0006bfc7) bg_vkb2_func_pane_cp09

0xd630,	// (0x0006b219) bg_vkb2_func_pane_g1

0xa270,	// (0x00067e59) bg_vkb2_func_pane_g2

0xd638,	// (0x0006b221) bg_vkb2_func_pane_g3

0xd640,	// (0x0006b229) bg_vkb2_func_pane_g4

0xd864,	// (0x0006b44d) bg_vkb2_func_pane_g5

0xd658,	// (0x0006b241) bg_vkb2_func_pane_g6

0xd660,	// (0x0006b249) bg_vkb2_func_pane_g7

0xd650,	// (0x0006b239) bg_vkb2_func_pane_g8

0xa250,	// (0x00067e39) bg_vkb2_func_pane_g9

0x0008,

0xfa8f,	// (0x0006d678) bg_vkb2_func_pane_g

0x69f8,	// (0x000645e1) blid2_tripm_pane_g6_ParamLimits

0x69f8,	// (0x000645e1) blid2_tripm_pane_g6

0xd544,	// (0x0006b12d) mp4_progress_pane_g1

0x6a6f,	// (0x00064658) blid2_tripm_values_pane_ParamLimits

0x6a6f,	// (0x00064658) blid2_tripm_values_pane

0x6b64,	// (0x0006474d) blid2_tripm_values_pane_t1

0x6b72,	// (0x0006475b) blid2_tripm_values_pane_t2

0x6b80,	// (0x00064769) blid2_tripm_values_pane_t3

0x6b8e,	// (0x00064777) blid2_tripm_values_pane_t4

0x6b9c,	// (0x00064785) blid2_tripm_values_pane_t5

0x6baa,	// (0x00064793) blid2_tripm_values_pane_t6

0x6bb8,	// (0x000647a1) blid2_tripm_values_pane_t7

0x6bc6,	// (0x000647af) blid2_tripm_values_pane_t8

0x6bd4,	// (0x000647bd) blid2_tripm_values_pane_t9

0x0008,

0xfaa2,	// (0x0006d68b) blid2_tripm_values_pane_t

0x1689,	// (0x0005f272) call_video_pane_t1_ParamLimits

0x16a3,	// (0x0005f28c) call_video_pane_t2_ParamLimits

0xf208,	// (0x0006cdf1) call_video_pane_t_ParamLimits

0x2e64,	// (0x00060a4d) msg_header_pane_g1_ParamLimits

0xabe4,	// (0x000687cd) msg_header_pane_g2_ParamLimits

0xabe4,	// (0x000687cd) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x0006cfe6) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x0006cfe6) msg_header_pane_g

0xef71,	// (0x0006cb5a) main_clock2_pane_ParamLimits

0x491b,	// (0x00062504) grid_clock2_toolbar_pane_ParamLimits

0x491b,	// (0x00062504) grid_clock2_toolbar_pane

0x491b,	// (0x00062504) listscroll_clock2_pane_ParamLimits

0x491b,	// (0x00062504) listscroll_clock2_pane

0x49fa,	// (0x000625e3) main_clock2_pane_t3_ParamLimits

0x49fa,	// (0x000625e3) main_clock2_pane_t3

0x4a1d,	// (0x00062606) main_clock2_pane_t4_ParamLimits

0x4a1d,	// (0x00062606) main_clock2_pane_t4

0xdcf8,	// (0x0006b8e1) cell_clock2_toolbar_pane

0xdd00,	// (0x0006b8e9) cell_clock2_toolbar_pane_cp01

0xdd00,	// (0x0006b8e9) cell_clock2_toolbar_pane_cp02

0xdd08,	// (0x0006b8f1) cell_clock2_toolbar_pane_cp03

0xdd10,	// (0x0006b8f9) list_clock2_pane

0xa8f4,	// (0x000684dd) scroll_pane_cp10

0xdd18,	// (0x0006b901) list_single_clock2_pane_ParamLimits

0xdd18,	// (0x0006b901) list_single_clock2_pane

0xa006,	// (0x00067bef) list_highlight_pane_cp08

0xdd25,	// (0x0006b90e) list_single_clock2_pane_t1

0xdd33,	// (0x0006b91c) list_single_clock2_pane_t2

0x0001,

0xfab5,	// (0x0006d69e) list_single_clock2_pane_t

0xe3de,	// (0x0006bfc7) bg_button_pane_cp10

0xdd41,	// (0x0006b92a) cell_clock2_toolbar_pane_g1

0x2ef4,	// (0x00060add) aid_main_viewer_pane_g1_ParamLimits

0x2ef4,	// (0x00060add) aid_main_viewer_pane_g1

0x2f02,	// (0x00060aeb) aid_main_viewer_pane_g2_ParamLimits

0x2f02,	// (0x00060aeb) aid_main_viewer_pane_g2

0x2f10,	// (0x00060af9) aid_main_viewer_pane_g3_ParamLimits

0x2f10,	// (0x00060af9) aid_main_viewer_pane_g3

0x2f1f,	// (0x00060b08) aid_main_viewer_pane_g4_ParamLimits

0x2f1f,	// (0x00060b08) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x0006cff7) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x0006cff7) aid_main_viewer_pane_g

0x38bd,	// (0x000614a6) main_calc_pane_ParamLimits

0x38e1,	// (0x000614ca) main_dialer2_pane_ParamLimits

0x9ec1,	// (0x00067aaa) main_cam6_pane

0x9ec1,	// (0x00067aaa) main_vid6_pane

0x4927,	// (0x00062510) listscroll_gen_pane_cp06_ParamLimits

0x4927,	// (0x00062510) listscroll_gen_pane_cp06

0x4a40,	// (0x00062629) main_clock2_pane_t5_ParamLimits

0x4a40,	// (0x00062629) main_clock2_pane_t5

0x4a9e,	// (0x00062687) aid_call2_pane_cp10_ParamLimits

0x4ab0,	// (0x00062699) aid_call_pane_cp10_ParamLimits

0xa963,	// (0x0006854c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa963,	// (0x0006854c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ac2,	// (0x000626ab) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ac2,	// (0x000626ab) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa963,	// (0x0006854c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf742,	// (0x0006d32b) popup_clock_analogue_window_cp10_g_ParamLimits

0x4ad8,	// (0x000626c1) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5008,	// (0x00062bf1) cell_dialer2_keypad_pane_g2_ParamLimits

0x5008,	// (0x00062bf1) cell_dialer2_keypad_pane_g2

0x0001,

0xf827,	// (0x0006d410) cell_dialer2_keypad_pane_g_ParamLimits

0xf827,	// (0x0006d410) cell_dialer2_keypad_pane_g

0x5024,	// (0x00062c0d) cell_dialer2_keypad_pane_t1

0x5c7d,	// (0x00063866) main_cset_text2_pane_ParamLimits

0x5c7d,	// (0x00063866) main_cset_text2_pane

0xda8b,	// (0x0006b674) area_vitu2_query_pane_g1_ParamLimits

0x6565,	// (0x0006414e) area_vitu2_query_pane_g2_ParamLimits

0xf9d2,	// (0x0006d5bb) area_vitu2_query_pane_g_ParamLimits

0x6646,	// (0x0006422f) area_vitu2_query_pane_t7_ParamLimits

0x6646,	// (0x0006422f) area_vitu2_query_pane_t7

0x666a,	// (0x00064253) bg_button_pane_cp018_ParamLimits

0x6676,	// (0x0006425f) bg_button_pane_cp021_ParamLimits

0x6682,	// (0x0006426b) bg_button_pane_cp022_ParamLimits

0x6695,	// (0x0006427e) bg_vkb2_func_pane_cp08_ParamLimits

0x666a,	// (0x00064253) bg_vkb2_func_pane_cp06_ParamLimits

0x6676,	// (0x0006425f) bg_vkb2_func_pane_cp07_ParamLimits

0x66a9,	// (0x00064292) input_focus_pane_cp09_ParamLimits

0xdc59,	// (0x0006b842) cam6_autofocus_pane_ParamLimits

0xdc59,	// (0x0006b842) cam6_autofocus_pane

0x6be2,	// (0x000647cb) cam6_image_uncrop_pane_ParamLimits

0x6be2,	// (0x000647cb) cam6_image_uncrop_pane

0x6bf1,	// (0x000647da) cam6_indi_pane_ParamLimits

0x6bf1,	// (0x000647da) cam6_indi_pane

0x6c07,	// (0x000647f0) cam6_mode_pane_ParamLimits

0x6c07,	// (0x000647f0) cam6_mode_pane

0x6c19,	// (0x00064802) cam6_timer_pane_ParamLimits

0x6c19,	// (0x00064802) cam6_timer_pane

0x6c25,	// (0x0006480e) cam6_zoom_pane_ParamLimits

0x6c25,	// (0x0006480e) cam6_zoom_pane

0x6c33,	// (0x0006481c) cam6_mode_pane_g1_ParamLimits

0x6c33,	// (0x0006481c) cam6_mode_pane_g1

0x6c43,	// (0x0006482c) cam6_mode_pane_g2_ParamLimits

0x6c43,	// (0x0006482c) cam6_mode_pane_g2

0x6c53,	// (0x0006483c) cam6_mode_pane_g3_ParamLimits

0x6c53,	// (0x0006483c) cam6_mode_pane_g3

0x6c63,	// (0x0006484c) cam6_mode_pane_g4_ParamLimits

0x6c63,	// (0x0006484c) cam6_mode_pane_g4

0x0003,

0xfaba,	// (0x0006d6a3) cam6_mode_pane_g_ParamLimits

0xfaba,	// (0x0006d6a3) cam6_mode_pane_g

0xcee9,	// (0x0006aad2) bg_tb_trans_pane_cp08_ParamLimits

0xcee9,	// (0x0006aad2) bg_tb_trans_pane_cp08

0xdd49,	// (0x0006b932) cam6_battery_pane_ParamLimits

0xdd49,	// (0x0006b932) cam6_battery_pane

0xdd5f,	// (0x0006b948) cam6_indi_pane_g1_ParamLimits

0xdd5f,	// (0x0006b948) cam6_indi_pane_g1

0xdd71,	// (0x0006b95a) cam6_indi_pane_g2_ParamLimits

0xdd71,	// (0x0006b95a) cam6_indi_pane_g2

0xdd83,	// (0x0006b96c) cam6_indi_pane_g3_ParamLimits

0xdd83,	// (0x0006b96c) cam6_indi_pane_g3

0x0002,

0xfac3,	// (0x0006d6ac) cam6_indi_pane_g_ParamLimits

0xfac3,	// (0x0006d6ac) cam6_indi_pane_g

0xdd95,	// (0x0006b97e) cam6_indi_pane_t1_ParamLimits

0xdd95,	// (0x0006b97e) cam6_indi_pane_t1

0x5646,	// (0x0006322f) cam6_autofocus_pane_g1

0x563e,	// (0x00063227) cam6_autofocus_pane_g2

0x5656,	// (0x0006323f) cam6_autofocus_pane_g3

0x564e,	// (0x00063237) cam6_autofocus_pane_g4

0x0003,

0xfaca,	// (0x0006d6b3) cam6_autofocus_pane_g

0xddbb,	// (0x0006b9a4) cam6_timer_pane_g1

0xddc3,	// (0x0006b9ac) cam6_timer_pane_t1

0xddd1,	// (0x0006b9ba) cam6_zoom_cont_pane

0xddd9,	// (0x0006b9c2) cam6_zoom_pane_g1

0xdde1,	// (0x0006b9ca) cam6_zoom_pane_g2

0x6c73,	// (0x0006485c) cam6_zoom_pane_g3

0x0002,

0xfad3,	// (0x0006d6bc) cam6_zoom_pane_g

0xa05b,	// (0x00067c44) cam6_battery_pane_g1

0xa05b,	// (0x00067c44) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x0006cfa7) cam6_battery_pane_g

0xdde9,	// (0x0006b9d2) cam6_zoom_cont_pane_g1

0xddf2,	// (0x0006b9db) cam6_zoom_cont_pane_g2

0xddfb,	// (0x0006b9e4) cam6_zoom_cont_pane_g3

0x0002,

0xfada,	// (0x0006d6c3) cam6_zoom_cont_pane_g

0x6c90,	// (0x00064879) cam6_mode_pane_cp_ParamLimits

0x6c90,	// (0x00064879) cam6_mode_pane_cp

0x6ca2,	// (0x0006488b) cam6_zoom_pane_cp_ParamLimits

0x6ca2,	// (0x0006488b) cam6_zoom_pane_cp

0x6cb0,	// (0x00064899) vid6_image_uncrop_cif_pane_ParamLimits

0x6cb0,	// (0x00064899) vid6_image_uncrop_cif_pane

0x6cc0,	// (0x000648a9) vid6_image_uncrop_nhd_pane_ParamLimits

0x6cc0,	// (0x000648a9) vid6_image_uncrop_nhd_pane

0x6ccf,	// (0x000648b8) vid6_image_uncrop_vga_pane_ParamLimits

0x6ccf,	// (0x000648b8) vid6_image_uncrop_vga_pane

0x6cde,	// (0x000648c7) vid6_image_uncrop_wvga_pane_ParamLimits

0x6cde,	// (0x000648c7) vid6_image_uncrop_wvga_pane

0x6ced,	// (0x000648d6) vid6_indi_pane_ParamLimits

0x6ced,	// (0x000648d6) vid6_indi_pane

0xcee9,	// (0x0006aad2) bg_tb_trans_pane_cp09_ParamLimits

0xcee9,	// (0x0006aad2) bg_tb_trans_pane_cp09

0xde13,	// (0x0006b9fc) cam6_battery_pane_cp_ParamLimits

0xde13,	// (0x0006b9fc) cam6_battery_pane_cp

0xde1f,	// (0x0006ba08) vid6_indi_pane_g1_ParamLimits

0xde1f,	// (0x0006ba08) vid6_indi_pane_g1

0xde31,	// (0x0006ba1a) vid6_indi_pane_g2_ParamLimits

0xde31,	// (0x0006ba1a) vid6_indi_pane_g2

0xde43,	// (0x0006ba2c) vid6_indi_pane_g3_ParamLimits

0xde43,	// (0x0006ba2c) vid6_indi_pane_g3

0xde5a,	// (0x0006ba43) vid6_indi_pane_g4_ParamLimits

0xde5a,	// (0x0006ba43) vid6_indi_pane_g4

0xde71,	// (0x0006ba5a) vid6_indi_pane_g5_ParamLimits

0xde71,	// (0x0006ba5a) vid6_indi_pane_g5

0x0004,

0xfae1,	// (0x0006d6ca) vid6_indi_pane_g_ParamLimits

0xfae1,	// (0x0006d6ca) vid6_indi_pane_g

0xde8b,	// (0x0006ba74) vid6_indi_pane_t1_ParamLimits

0xde8b,	// (0x0006ba74) vid6_indi_pane_t1

0xdea1,	// (0x0006ba8a) vid6_indi_pane_t2_ParamLimits

0xdea1,	// (0x0006ba8a) vid6_indi_pane_t2

0xdec9,	// (0x0006bab2) vid6_indi_pane_t3_ParamLimits

0xdec9,	// (0x0006bab2) vid6_indi_pane_t3

0xdef1,	// (0x0006bada) vid6_indi_pane_t4_ParamLimits

0xdef1,	// (0x0006bada) vid6_indi_pane_t4

0x0003,

0xfaec,	// (0x0006d6d5) vid6_indi_pane_t_ParamLimits

0xfaec,	// (0x0006d6d5) vid6_indi_pane_t

0xdf15,	// (0x0006bafe) wait_bar_pane_cp08

0x6d05,	// (0x000648ee) main_cset_text2_pane_t1_ParamLimits

0x6d05,	// (0x000648ee) main_cset_text2_pane_t1

0x6c7b,	// (0x00064864) listscroll_gen_pane_cp06_t1_ParamLimits

0x6c7b,	// (0x00064864) listscroll_gen_pane_cp06_t1

0x9ec1,	// (0x00067aaa) main_cam6_set_pane

0xd5e1,	// (0x0006b1ca) bg_tb_trans_pane_cp06_ParamLimits

0xcdc9,	// (0x0006a9b2) cam4_indicators_pane_g1_ParamLimits

0xcdda,	// (0x0006a9c3) cam4_indicators_pane_g2_ParamLimits

0xf864,	// (0x0006d44d) cam4_indicators_pane_g_ParamLimits

0xcdf2,	// (0x0006a9db) cam4_indicators_pane_t1_ParamLimits

0x9eb3,	// (0x00067a9c) bg_tb_trans_pane_cp07_ParamLimits

0xce20,	// (0x0006aa09) vid4_indicators_pane_g1_ParamLimits

0xce36,	// (0x0006aa1f) vid4_indicators_pane_g2_ParamLimits

0xce4a,	// (0x0006aa33) vid4_indicators_pane_g3_ParamLimits

0xce5d,	// (0x0006aa46) vid4_indicators_pane_g4_ParamLimits

0xf876,	// (0x0006d45f) vid4_indicators_pane_g_ParamLimits

0xce7b,	// (0x0006aa64) vid4_indicators_pane_t1_ParamLimits

0xdaf0,	// (0x0006b6d9) vid4_progress_pane_g1_ParamLimits

0xdb00,	// (0x0006b6e9) vid4_progress_pane_g2_ParamLimits

0x67ea,	// (0x000643d3) vid4_progress_pane_g3_ParamLimits

0xdb10,	// (0x0006b6f9) vid4_progress_pane_g4_ParamLimits

0xfa1d,	// (0x0006d606) vid4_progress_pane_g_ParamLimits

0x67fc,	// (0x000643e5) vid4_progress_pane_t1_ParamLimits

0xdb2e,	// (0x0006b717) vid4_progress_pane_t2_ParamLimits

0xdb44,	// (0x0006b72d) vid4_progress_pane_t3_ParamLimits

0xfa28,	// (0x0006d611) vid4_progress_pane_t_ParamLimits

0x6816,	// (0x000643ff) wait_bar_pane_cp07_ParamLimits

0x6d26,	// (0x0006490f) main_cam6_set_pane_g2_ParamLimits

0x6d26,	// (0x0006490f) main_cam6_set_pane_g2

0x6d4c,	// (0x00064935) main_cset6_listscroll_pane_ParamLimits

0x6d4c,	// (0x00064935) main_cset6_listscroll_pane

0x6d6a,	// (0x00064953) main_cset6_slider_pane_ParamLimits

0x6d6a,	// (0x00064953) main_cset6_slider_pane

0x6d80,	// (0x00064969) main_cset6_text2_pane_ParamLimits

0x6d80,	// (0x00064969) main_cset6_text2_pane

0xdf24,	// (0x0006bb0d) main_cset6_text_pane

0xdf2c,	// (0x0006bb15) main_cset_list_pane_copy1_ParamLimits

0xdf2c,	// (0x0006bb15) main_cset_list_pane_copy1

0xdf3c,	// (0x0006bb25) scroll_pane_cp028_copy1

0x6d8e,	// (0x00064977) cset_list_set_pane_copy1

0x6da2,	// (0x0006498b) aid_position_infowindow_above_copy1

0x6daa,	// (0x00064993) aid_position_infowindow_below_copy1

0x6db2,	// (0x0006499b) cset_list_set_pane_g1_copy1

0x6dba,	// (0x000649a3) cset_list_set_pane_g3_copy1_ParamLimits

0x6dba,	// (0x000649a3) cset_list_set_pane_g3_copy1

0x6dc9,	// (0x000649b2) cset_list_set_pane_t1_copy1_ParamLimits

0x6dc9,	// (0x000649b2) cset_list_set_pane_t1_copy1

0xe775,	// (0x0006c35e) list_highlight_pane_cp021_copy1_ParamLimits

0xe775,	// (0x0006c35e) list_highlight_pane_cp021_copy1

0xdf45,	// (0x0006bb2e) cset6_slider_pane_ParamLimits

0xdf45,	// (0x0006bb2e) cset6_slider_pane

0xdf71,	// (0x0006bb5a) main_cset6_slider_pane_g1_ParamLimits

0xdf71,	// (0x0006bb5a) main_cset6_slider_pane_g1

0x6dde,	// (0x000649c7) main_cset6_slider_pane_g2_ParamLimits

0x6dde,	// (0x000649c7) main_cset6_slider_pane_g2

0xdf99,	// (0x0006bb82) main_cset6_slider_pane_g3_ParamLimits

0xdf99,	// (0x0006bb82) main_cset6_slider_pane_g3

0x6e06,	// (0x000649ef) main_cset6_slider_pane_g4_ParamLimits

0x6e06,	// (0x000649ef) main_cset6_slider_pane_g4

0x6e12,	// (0x000649fb) main_cset6_slider_pane_g5_ParamLimits

0x6e12,	// (0x000649fb) main_cset6_slider_pane_g5

0xd763,	// (0x0006b34c) main_cset6_slider_pane_g7_ParamLimits

0xd763,	// (0x0006b34c) main_cset6_slider_pane_g7

0xd76f,	// (0x0006b358) main_cset6_slider_pane_g8_ParamLimits

0xd76f,	// (0x0006b358) main_cset6_slider_pane_g8

0x5d25,	// (0x0006390e) main_cset6_slider_pane_g9_ParamLimits

0x5d25,	// (0x0006390e) main_cset6_slider_pane_g9

0x5d31,	// (0x0006391a) main_cset6_slider_pane_g10_ParamLimits

0x5d31,	// (0x0006391a) main_cset6_slider_pane_g10

0x5d3d,	// (0x00063926) main_cset6_slider_pane_g11_ParamLimits

0x5d3d,	// (0x00063926) main_cset6_slider_pane_g11

0x5d49,	// (0x00063932) main_cset6_slider_pane_g12_ParamLimits

0x5d49,	// (0x00063932) main_cset6_slider_pane_g12

0x5d55,	// (0x0006393e) main_cset6_slider_pane_g13_ParamLimits

0x5d55,	// (0x0006393e) main_cset6_slider_pane_g13

0x5d61,	// (0x0006394a) main_cset6_slider_pane_g14_ParamLimits

0x5d61,	// (0x0006394a) main_cset6_slider_pane_g14

0x6e20,	// (0x00064a09) main_cset6_slider_pane_g15_ParamLimits

0x6e20,	// (0x00064a09) main_cset6_slider_pane_g15

0x5d85,	// (0x0006396e) main_cset6_slider_pane_g16_ParamLimits

0x5d85,	// (0x0006396e) main_cset6_slider_pane_g16

0x5d93,	// (0x0006397c) main_cset6_slider_pane_g17_ParamLimits

0x5d93,	// (0x0006397c) main_cset6_slider_pane_g17

0x0011,

0xfaf5,	// (0x0006d6de) main_cset6_slider_pane_g_ParamLimits

0xfaf5,	// (0x0006d6de) main_cset6_slider_pane_g

0xdfa5,	// (0x0006bb8e) main_cset6_slider_pane_t1_ParamLimits

0xdfa5,	// (0x0006bb8e) main_cset6_slider_pane_t1

0x6e50,	// (0x00064a39) main_cset6_slider_pane_t2_ParamLimits

0x6e50,	// (0x00064a39) main_cset6_slider_pane_t2

0x6e7b,	// (0x00064a64) main_cset6_slider_pane_t3_ParamLimits

0x6e7b,	// (0x00064a64) main_cset6_slider_pane_t3

0x6ea6,	// (0x00064a8f) main_cset6_slider_pane_t4_ParamLimits

0x6ea6,	// (0x00064a8f) main_cset6_slider_pane_t4

0x6ed3,	// (0x00064abc) main_cset6_slider_pane_t5_ParamLimits

0x6ed3,	// (0x00064abc) main_cset6_slider_pane_t5

0xdfe6,	// (0x0006bbcf) main_cset6_slider_pane_t7_ParamLimits

0xdfe6,	// (0x0006bbcf) main_cset6_slider_pane_t7

0x6f00,	// (0x00064ae9) main_cset6_slider_pane_t8_ParamLimits

0x6f00,	// (0x00064ae9) main_cset6_slider_pane_t8

0x6f24,	// (0x00064b0d) main_cset6_slider_pane_t9_ParamLimits

0x6f24,	// (0x00064b0d) main_cset6_slider_pane_t9

0x6f48,	// (0x00064b31) main_cset6_slider_pane_t10_ParamLimits

0x6f48,	// (0x00064b31) main_cset6_slider_pane_t10

0x6f6c,	// (0x00064b55) main_cset6_slider_pane_t11_ParamLimits

0x6f6c,	// (0x00064b55) main_cset6_slider_pane_t11

0xe01c,	// (0x0006bc05) main_cset6_slider_pane_t14_ParamLimits

0xe01c,	// (0x0006bc05) main_cset6_slider_pane_t14

0xe055,	// (0x0006bc3e) main_cset6_slider_pane_t15_ParamLimits

0xe055,	// (0x0006bc3e) main_cset6_slider_pane_t15

0x000b,

0xfb1a,	// (0x0006d703) main_cset6_slider_pane_t_ParamLimits

0xfb1a,	// (0x0006d703) main_cset6_slider_pane_t

0xe08e,	// (0x0006bc77) cset_slider_pane_g1_copy1

0xe097,	// (0x0006bc80) cset_slider_pane_g2_copy1

0xe0a0,	// (0x0006bc89) cset_slider_pane_g3_copy1

0xe3de,	// (0x0006bfc7) bg_popup_sub_pane_cp011_copy1

0xe0b2,	// (0x0006bc9b) main_cset_text_pane_g1_copy1

0xd8b3,	// (0x0006b49c) main_cset_text_pane_t1_copy1

0xd8c1,	// (0x0006b4aa) main_cset_text_pane_t2_copy1

0xd8cf,	// (0x0006b4b8) main_cset_text_pane_t3_copy1

0xd8dd,	// (0x0006b4c6) main_cset_text_pane_t4_copy1

0xd8eb,	// (0x0006b4d4) main_cset_text_pane_t5_copy1

0xe0ba,	// (0x0006bca3) main_cset_text_pane_t6_copy1

0xe0c8,	// (0x0006bcb1) main_cset_text_pane_t7_copy1

0x6d05,	// (0x000648ee) main_cset_text2_pane_t1_copy1

0x9eb3,	// (0x00067a9c) main_ncimui_pane

0x3b6f,	// (0x00061758) popup_query_ncimui_window_ParamLimits

0x3b6f,	// (0x00061758) popup_query_ncimui_window

0x4139,	// (0x00061d22) field_cale_ev2_pane_g4_ParamLimits

0x4139,	// (0x00061d22) field_cale_ev2_pane_g4

0x4ed3,	// (0x00062abc) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4ed3,	// (0x00062abc) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7fe,	// (0x0006d3e7) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7fe,	// (0x0006d3e7) cell_video_dialer_keypad_pane_g

0x4eeb,	// (0x00062ad4) cell_video_dialer_keypad_pane_t1

0xe3de,	// (0x0006bfc7) bg_popup_window_pane_cp012

0xbd43,	// (0x0006992c) heading_pane_cp06

0xe0f4,	// (0x0006bcdd) ncim_query_content_pane

0xe3de,	// (0x0006bfc7) bg_popup_heading_pane_cp01

0xe0fc,	// (0x0006bce5) ncim_heading_pane_t1

0xe10a,	// (0x0006bcf3) ncim_indicator_popup_pane

0xe11c,	// (0x0006bd05) ncim_query_button_pane

0xe132,	// (0x0006bd1b) ncim_query_content_pane_t1

0xe144,	// (0x0006bd2d) ncim_query_content_pane_t2

0x0005,

0xfb4f,	// (0x0006d738) ncim_query_content_pane_t

0xe17e,	// (0x0006bd67) ncim_query_list_pane

0xe190,	// (0x0006bd79) ncim_query_popup_pane

0xe10a,	// (0x0006bcf3) ncim_indicator_popup_pane_ParamLimits

0x70d8,	// (0x00064cc1) ncim_query_content_pane_g1_ParamLimits

0x70d8,	// (0x00064cc1) ncim_query_content_pane_g1

0xe132,	// (0x0006bd1b) ncim_query_content_pane_t1_ParamLimits

0xe144,	// (0x0006bd2d) ncim_query_content_pane_t2_ParamLimits

0x70e4,	// (0x00064ccd) ncim_query_content_pane_t3_ParamLimits

0x70e4,	// (0x00064ccd) ncim_query_content_pane_t3

0x710c,	// (0x00064cf5) ncim_query_content_pane_t4_ParamLimits

0x710c,	// (0x00064cf5) ncim_query_content_pane_t4

0x7134,	// (0x00064d1d) ncim_query_content_pane_t5_ParamLimits

0x7134,	// (0x00064d1d) ncim_query_content_pane_t5

0xe156,	// (0x0006bd3f) ncim_query_content_pane_t6_ParamLimits

0xe156,	// (0x0006bd3f) ncim_query_content_pane_t6

0xfb4f,	// (0x0006d738) ncim_query_content_pane_t_ParamLimits

0xe17e,	// (0x0006bd67) ncim_query_list_pane_ParamLimits

0xe190,	// (0x0006bd79) ncim_query_popup_pane_ParamLimits

0xe1a4,	// (0x0006bd8d) wait_bar_pane_cp04

0xe3de,	// (0x0006bfc7) input_focus_pane_cp011

0xe1ac,	// (0x0006bd95) ncim_query_popup_pane_t1

0xe1ba,	// (0x0006bda3) ncim_list_query_list_pane_ParamLimits

0xe1ba,	// (0x0006bda3) ncim_list_query_list_pane

0xe3de,	// (0x0006bfc7) bg_button_pane_cp027

0xe1cd,	// (0x0006bdb6) ncim_query_button_pane_g1

0xe3de,	// (0x0006bfc7) list_highlight_pane_cp012

0xe1d7,	// (0x0006bdc0) ncim_list_query_list_pane_g1

0xe1df,	// (0x0006bdc8) ncim_list_query_list_pane_t1

0xcde6,	// (0x0006a9cf) cam4_indicators_pane_g3_ParamLimits

0xcde6,	// (0x0006a9cf) cam4_indicators_pane_g3

0xce69,	// (0x0006aa52) vid4_indicators_pane_g5_ParamLimits

0xce69,	// (0x0006aa52) vid4_indicators_pane_g5

0xdb1f,	// (0x0006b708) vid4_progress_pane_g5_ParamLimits

0xdb1f,	// (0x0006b708) vid4_progress_pane_g5

0x6fc3,	// (0x00064bac) main_ncimui_pane_g1

0x702c,	// (0x00064c15) ncimui_group_query_pane_ParamLimits

0x702c,	// (0x00064c15) ncimui_group_query_pane

0x7074,	// (0x00064c5d) ncimui_list_pane_ParamLimits

0x7074,	// (0x00064c5d) ncimui_list_pane

0x709b,	// (0x00064c84) ncimui_text_pane_ParamLimits

0x709b,	// (0x00064c84) ncimui_text_pane

0x715c,	// (0x00064d45) ncimui_text_pane_t1_ParamLimits

0x715c,	// (0x00064d45) ncimui_text_pane_t1

0xe1ed,	// (0x0006bdd6) ncimui_list_single_graphic_pane_ParamLimits

0xe1ed,	// (0x0006bdd6) ncimui_list_single_graphic_pane

0x717a,	// (0x00064d63) ncimui_query_pane_ParamLimits

0x717a,	// (0x00064d63) ncimui_query_pane

0xe3de,	// (0x0006bfc7) list_highlight_pane_cp013

0xe1fd,	// (0x0006bde6) ncim_list_query_list_pane_t1_copy1

0xe1d7,	// (0x0006bdc0) ncim_list_single_graphic_pane_g1

0x718d,	// (0x00064d76) ncim_query_button_pane_cp01

0x7199,	// (0x00064d82) ncim_query_entry_pane_ParamLimits

0x7199,	// (0x00064d82) ncim_query_entry_pane

0x71ac,	// (0x00064d95) ncimui_query_pane_g1

0x71b8,	// (0x00064da1) ncimui_query_pane_t1_ParamLimits

0x71b8,	// (0x00064da1) ncimui_query_pane_t1

0xe775,	// (0x0006c35e) input_focus_pane_cp012

0xe20b,	// (0x0006bdf4) ncim_query_entry_pane_t1

0xef71,	// (0x0006cb5a) main_im_pane_ParamLimits

0x9eb3,	// (0x00067a9c) main_mobtv_pane_ParamLimits

0x9eb3,	// (0x00067a9c) main_mobtv_pane

0x6e38,	// (0x00064a21) main_cset6_slider_pane_g18_ParamLimits

0x6e38,	// (0x00064a21) main_cset6_slider_pane_g18

0x6e44,	// (0x00064a2d) main_cset6_slider_pane_g19_ParamLimits

0x6e44,	// (0x00064a2d) main_cset6_slider_pane_g19

0xef1b,	// (0x0006cb04) bg_main_mobtv_pane_ParamLimits

0xef1b,	// (0x0006cb04) bg_main_mobtv_pane

0x71d1,	// (0x00064dba) main_mobtv_info_pane

0x71dc,	// (0x00064dc5) main_mobtv_loading_pane_ParamLimits

0x71dc,	// (0x00064dc5) main_mobtv_loading_pane

0xe21d,	// (0x0006be06) main_mobtv_pg_channel_list_pane

0xe227,	// (0x0006be10) main_mobtv_pg_hdr_pane

0x71e9,	// (0x00064dd2) main_mobtv_programe_curr_pane_ParamLimits

0x71e9,	// (0x00064dd2) main_mobtv_programe_curr_pane

0x71f6,	// (0x00064ddf) main_mobtv_programe_next_pane_ParamLimits

0x71f6,	// (0x00064ddf) main_mobtv_programe_next_pane

0xe230,	// (0x0006be19) popup_mobtv_noti_window

0xa05b,	// (0x00067c44) main_tv_pg_hdr_pane_g1

0xe23a,	// (0x0006be23) main_tv_pg_hdr_pane_g2

0xe242,	// (0x0006be2b) main_tv_pg_hdr_pane_g3

0xe24a,	// (0x0006be33) main_tv_pg_hdr_pane_g4

0xe252,	// (0x0006be3b) main_tv_pg_hdr_pane_g5

0xe25c,	// (0x0006be45) main_tv_pg_hdr_pane_g6

0xe266,	// (0x0006be4f) main_tv_pg_hdr_pane_g7

0xe270,	// (0x0006be59) main_tv_pg_hdr_pane_g8

0xe27a,	// (0x0006be63) main_tv_pg_hdr_pane_g9

0xe284,	// (0x0006be6d) main_tv_pg_hdr_pane_g10

0xe28e,	// (0x0006be77) main_tv_pg_hdr_pane_g11

0x000a,

0xfb5c,	// (0x0006d745) main_tv_pg_hdr_pane_g

0xe298,	// (0x0006be81) main_tv_pg_hdr_pane_t1

0xe2a6,	// (0x0006be8f) main_tv_pg_hdr_pane_t2

0xe2b4,	// (0x0006be9d) main_tv_pg_hdr_pane_t3

0xe2c4,	// (0x0006bead) main_tv_pg_hdr_pane_t4

0xe2d4,	// (0x0006bebd) main_tv_pg_hdr_pane_t5

0x0004,

0x03bb,	// (0x0005dfa4) main_tv_pg_hdr_pane_t

0xe2e4,	// (0x0006becd) single_mobtv_pg_channel_pane_ParamLimits

0xe2e4,	// (0x0006becd) single_mobtv_pg_channel_pane

0xe2f6,	// (0x0006bedf) single_mobtv_pg_channel_table_pane

0xe2ff,	// (0x0006bee8) single_mobtv_pg_channel_thumb_pane

0xe308,	// (0x0006bef1) single_tv_pg_channel_pane_g1

0xe311,	// (0x0006befa) single_tv_pg_channel_pane_g2

0x0001,

0x03c6,	// (0x0005dfaf) single_tv_pg_channel_pane_g

0xeeff,	// (0x0006cae8) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeeff,	// (0x0006cae8) bg_single_mobtv_pg_channel_thumb_pane

0xe31a,	// (0x0006bf03) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe31a,	// (0x0006bf03) single_mobtv_pg_channel_thumb_pane_g1

0xe328,	// (0x0006bf11) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe328,	// (0x0006bf11) single_mobtv_pg_channel_thumb_pane_g2

0xe334,	// (0x0006bf1d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe334,	// (0x0006bf1d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x03cb,	// (0x0005dfb4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x03cb,	// (0x0005dfb4) single_mobtv_pg_channel_thumb_pane_g

0xe340,	// (0x0006bf29) single_mobtv_pg_channel_thumb_pane_t1

0xe34e,	// (0x0006bf37) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x03d2,	// (0x0005dfbb) single_mobtv_pg_channel_thumb_pane_t

0xa05b,	// (0x00067c44) bg_single_mobtv_pg_channel_table_pane_g1

0xa05b,	// (0x00067c44) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x0006cfa7) bg_single_mobtv_pg_channel_table_pane_g

0xe35c,	// (0x0006bf45) single_mobtv_pg_channel_table_pane_t1

0xe36a,	// (0x0006bf53) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x03d7,	// (0x0005dfc0) single_mobtv_pg_channel_table_pane_t

0x720b,	// (0x00064df4) main_mobtv_info_pane_g1_ParamLimits

0x720b,	// (0x00064df4) main_mobtv_info_pane_g1

0x7229,	// (0x00064e12) main_mobtv_info_pane_t1_ParamLimits

0x7229,	// (0x00064e12) main_mobtv_info_pane_t1

0x72a1,	// (0x00064e8a) main_mobtv_info_pane_t2_ParamLimits

0x72a1,	// (0x00064e8a) main_mobtv_info_pane_t2

0x0002,

0xfb78,	// (0x0006d761) main_mobtv_info_pane_t_ParamLimits

0xfb78,	// (0x0006d761) main_mobtv_info_pane_t

0x7332,	// (0x00064f1b) wait_bar_pane_cp05

0x7344,	// (0x00064f2d) main_mobtv_loading_pane_g1_ParamLimits

0x7344,	// (0x00064f2d) main_mobtv_loading_pane_g1

0x7355,	// (0x00064f3e) main_mobtv_loading_pane_g2_ParamLimits

0x7355,	// (0x00064f3e) main_mobtv_loading_pane_g2

0x7361,	// (0x00064f4a) main_mobtv_loading_pane_g3_ParamLimits

0x7361,	// (0x00064f4a) main_mobtv_loading_pane_g3

0x0002,

0xfb7f,	// (0x0006d768) main_mobtv_loading_pane_g_ParamLimits

0xfb7f,	// (0x0006d768) main_mobtv_loading_pane_g

0xe378,	// (0x0006bf61) main_mobtv_loading_pane_t1_ParamLimits

0xe378,	// (0x0006bf61) main_mobtv_loading_pane_t1

0xe390,	// (0x0006bf79) main_mobtv_loading_pane_t2_ParamLimits

0xe390,	// (0x0006bf79) main_mobtv_loading_pane_t2

0x0001,

0x03ef,	// (0x0005dfd8) main_mobtv_loading_pane_t_ParamLimits

0x03ef,	// (0x0005dfd8) main_mobtv_loading_pane_t

0x7374,	// (0x00064f5d) wait_bar_pane_cp06_ParamLimits

0x7374,	// (0x00064f5d) wait_bar_pane_cp06

0xe3b4,	// (0x0006bf9d) main_mobtv_programe_curr_pane_t1

0xe3c2,	// (0x0006bfab) main_mobtv_programe_curr_pane_t2

0x0001,

0x03f4,	// (0x0005dfdd) main_mobtv_programe_curr_pane_t

0xe3d0,	// (0x0006bfb9) main_mobtv_programe_next_pane_t1

0xe797,	// (0x0006c380) main_mobtv_programe_next_pane_t2

0xe7a5,	// (0x0006c38e) main_mobtv_programe_next_pane_t3

0x0002,

0xfb86,	// (0x0006d76f) main_mobtv_programe_next_pane_t

0xe3de,	// (0x0006bfc7) bg_popup_mobtv_noti_window_pane

0xe7b3,	// (0x0006c39c) popup_mobtv_noti_window_g1

0xe7bb,	// (0x0006c3a4) popup_mobtv_noti_window_t1

0xe7c9,	// (0x0006c3b2) popup_mobtv_noti_window_t2

0x0001,

0xfb8d,	// (0x0006d776) popup_mobtv_noti_window_t

0xa05b,	// (0x00067c44) bg_popup_mobtv_noti_window_pane_g1

0x9ec1,	// (0x00067aaa) sc_clock_pane

0x9ec1,	// (0x00067aaa) main_fs_bigclock_pane

0x6a59,	// (0x00064642) blid2_tripm_pane_t4_ParamLimits

0x6a59,	// (0x00064642) blid2_tripm_pane_t4

0x7383,	// (0x00064f6c) sc_clock_pane_g1_ParamLimits

0x7383,	// (0x00064f6c) sc_clock_pane_g1

0x7395,	// (0x00064f7e) sc_clock_pane_t1_ParamLimits

0x7395,	// (0x00064f7e) sc_clock_pane_t1

0x73b9,	// (0x00064fa2) sc_clock_pane_t2_ParamLimits

0x73b9,	// (0x00064fa2) sc_clock_pane_t2

0x73d1,	// (0x00064fba) sc_clock_pane_t3_ParamLimits

0x73d1,	// (0x00064fba) sc_clock_pane_t3

0x0004,

0xfb92,	// (0x0006d77b) sc_clock_pane_t_ParamLimits

0xfb92,	// (0x0006d77b) sc_clock_pane_t

0x898f,	// (0x00066578) main_fs_bigclock_indicator_pane_ParamLimits

0x898f,	// (0x00066578) main_fs_bigclock_indicator_pane

0x7497,	// (0x00065080) main_fs_bigclock_pane_g1_ParamLimits

0x7497,	// (0x00065080) main_fs_bigclock_pane_g1

0x899b,	// (0x00066584) main_fs_bigclock_pane_t1_ParamLimits

0x899b,	// (0x00066584) main_fs_bigclock_pane_t1

0x89ad,	// (0x00066596) main_fs_bigclock_pane_t2_ParamLimits

0x89ad,	// (0x00066596) main_fs_bigclock_pane_t2

0x89c1,	// (0x000665aa) main_fs_bigclock_pane_t3_ParamLimits

0x89c1,	// (0x000665aa) main_fs_bigclock_pane_t3

0x0002,

0xfd23,	// (0x0006d90c) main_fs_bigclock_pane_t_ParamLimits

0xfd23,	// (0x0006d90c) main_fs_bigclock_pane_t

0x89d3,	// (0x000665bc) main_fs_bigclock_indicator_pane_g1

0xe124,	// (0x0006bd0d) ncim_query_content_pane_g2_ParamLimits

0xe124,	// (0x0006bd0d) ncim_query_content_pane_g2

0x0001,

0xfb4a,	// (0x0006d733) ncim_query_content_pane_g_ParamLimits

0xfb4a,	// (0x0006d733) ncim_query_content_pane_g

0x73e8,	// (0x00064fd1) sc_clock_pane_t4_ParamLimits

0x73e8,	// (0x00064fd1) sc_clock_pane_t4

0x9eb3,	// (0x00067a9c) main_radioblah_pane

0xcd59,	// (0x0006a942) cell_call4_button_pane_t1_copy1_ParamLimits

0xcd59,	// (0x0006a942) cell_call4_button_pane_t1_copy1

0x6fdb,	// (0x00064bc4) main_ncimui_pane_t1_ParamLimits

0x6fdb,	// (0x00064bc4) main_ncimui_pane_t1

0x6ff5,	// (0x00064bde) main_ncimui_pane_t2_ParamLimits

0x6ff5,	// (0x00064bde) main_ncimui_pane_t2

0x0002,

0xfb43,	// (0x0006d72c) main_ncimui_pane_t_ParamLimits

0xfb43,	// (0x0006d72c) main_ncimui_pane_t

0xe7d7,	// (0x0006c3c0) main_radioblah_anim_pane_ParamLimits

0xe7d7,	// (0x0006c3c0) main_radioblah_anim_pane

0xe7e8,	// (0x0006c3d1) main_radioblah_info_pane_ParamLimits

0xe7e8,	// (0x0006c3d1) main_radioblah_info_pane

0xe7fc,	// (0x0006c3e5) main_radioblah_pane_t1_ParamLimits

0xe7fc,	// (0x0006c3e5) main_radioblah_pane_t1

0xe818,	// (0x0006c401) main_radioblah_pane_t2_ParamLimits

0xe818,	// (0x0006c401) main_radioblah_pane_t2

0x0003,

0xfbb3,	// (0x0006d79c) main_radioblah_pane_t_ParamLimits

0xfbb3,	// (0x0006d79c) main_radioblah_pane_t

0x7640,	// (0x00065229) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7640,	// (0x00065229) main_radioblah_rocker_ctrl_pane

0xe860,	// (0x0006c449) main_radioblah_info_pane_t1_ParamLimits

0xe860,	// (0x0006c449) main_radioblah_info_pane_t1

0x7698,	// (0x00065281) main_radioblah_info_pane_t2_ParamLimits

0x7698,	// (0x00065281) main_radioblah_info_pane_t2

0x0003,

0xfbbc,	// (0x0006d7a5) main_radioblah_info_pane_t_ParamLimits

0xfbbc,	// (0x0006d7a5) main_radioblah_info_pane_t

0xa05b,	// (0x00067c44) main_radioblah_rocker_ctrl_pane_g1

0x7748,	// (0x00065331) main_radioblah_rocker_ctrl_pane_g2

0x7750,	// (0x00065339) main_radioblah_rocker_ctrl_pane_g3

0x7758,	// (0x00065341) main_radioblah_rocker_ctrl_pane_g4

0x7760,	// (0x00065349) main_radioblah_rocker_ctrl_pane_g5

0x7768,	// (0x00065351) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbc5,	// (0x0006d7ae) main_radioblah_rocker_ctrl_pane_g

0x6d05,	// (0x000648ee) main_cset_text2_pane_t1_copy1_ParamLimits

0xcdb7,	// (0x0006a9a0) cam4_image_uncrop_qvga_pane

0xce0c,	// (0x0006a9f5) vid4_image_uncrop_qcif_pane

0xdc59,	// (0x0006b842) cam6_image_uncrop_qvga_pane_ParamLimits

0xdc59,	// (0x0006b842) cam6_image_uncrop_qvga_pane

0xde03,	// (0x0006b9ec) vid6_image_uncrop_qcif_pane_ParamLimits

0xde03,	// (0x0006b9ec) vid6_image_uncrop_qcif_pane

0xe3de,	// (0x0006bfc7) bg_popup_preview_window_pane_cp03

0xe0d6,	// (0x0006bcbf) list_cset_text2_pane

0xe0de,	// (0x0006bcc7) main_cset6_text2_pane_g1

0xe0e6,	// (0x0006bccf) main_cset6_text2_pane_t1

0xe89a,	// (0x0006c483) list_cset_text2_pane_t1_ParamLimits

0xe89a,	// (0x0006c483) list_cset_text2_pane_t1

0x9eb3,	// (0x00067a9c) main_radioblah_pane_ParamLimits

0x731e,	// (0x00064f07) main_mobtv_info_pane_t3_ParamLimits

0x731e,	// (0x00064f07) main_mobtv_info_pane_t3

0x762e,	// (0x00065217) main_radioblah_pane_g1

0x7668,	// (0x00065251) main_radioblah_info_pane_g1

0x76ed,	// (0x000652d6) main_radioblah_info_pane_t3_ParamLimits

0x76ed,	// (0x000652d6) main_radioblah_info_pane_t3

0x2616,	// (0x000601ff) highlight_cell_cale_month_pane_ParamLimits

0x2616,	// (0x000601ff) highlight_cell_cale_month_pane

0x9ec1,	// (0x00067aaa) main_phob_fisheye_pane

0xc609,	// (0x0006a1f2) scroll_pane_cp0031_ParamLimits

0xc609,	// (0x0006a1f2) scroll_pane_cp0031

0xdf15,	// (0x0006bafe) wait_bar_pane_cp08_ParamLimits

0x6d8e,	// (0x00064977) cset_list_set_pane_copy1_ParamLimits

0xe8b4,	// (0x0006c49d) highlight_cell_cale_month_pane_g1

0x7770,	// (0x00065359) highlight_cell_cale_month_pane_t1

0xdadf,	// (0x0006b6c8) list_gen_pane_cp01

0xd74e,	// (0x0006b337) scroll_pane_01

0x777e,	// (0x00065367) list_single_double_fisheye_pane

0x7787,	// (0x00065370) list_double_fisheye_pane_g1_ParamLimits

0x7787,	// (0x00065370) list_double_fisheye_pane_g1

0x7793,	// (0x0006537c) list_double_fisheye_pane_g2_ParamLimits

0x7793,	// (0x0006537c) list_double_fisheye_pane_g2

0x77a7,	// (0x00065390) list_double_fisheye_pane_g3_ParamLimits

0x77a7,	// (0x00065390) list_double_fisheye_pane_g3

0x0004,

0xfbd2,	// (0x0006d7bb) list_double_fisheye_pane_g_ParamLimits

0xfbd2,	// (0x0006d7bb) list_double_fisheye_pane_g

0x77d0,	// (0x000653b9) list_double_fisheye_pane_t1_ParamLimits

0x77d0,	// (0x000653b9) list_double_fisheye_pane_t1

0x77eb,	// (0x000653d4) list_double_fisheye_pane_t2_ParamLimits

0x77eb,	// (0x000653d4) list_double_fisheye_pane_t2

0x0001,

0xfbdd,	// (0x0006d7c6) list_double_fisheye_pane_t_ParamLimits

0xfbdd,	// (0x0006d7c6) list_double_fisheye_pane_t

0x9ec1,	// (0x00067aaa) main_call5_pane

0x7413,	// (0x00064ffc) sc_swipe_pane_ParamLimits

0x7413,	// (0x00064ffc) sc_swipe_pane

0x7820,	// (0x00065409) call5_image_pane_ParamLimits

0x7820,	// (0x00065409) call5_image_pane

0x783d,	// (0x00065426) call5_swipe_1_pane_ParamLimits

0x783d,	// (0x00065426) call5_swipe_1_pane

0x7850,	// (0x00065439) call5_swipe_2_pane_ParamLimits

0x7850,	// (0x00065439) call5_swipe_2_pane

0x787b,	// (0x00065464) popup_call5_audio_first_window_ParamLimits

0x787b,	// (0x00065464) popup_call5_audio_first_window

0xeeff,	// (0x0006cae8) call5_swipe_1_pane_g1_ParamLimits

0xeeff,	// (0x0006cae8) call5_swipe_1_pane_g1

0xe8bc,	// (0x0006c4a5) call5_swipe_1_pane_g2_ParamLimits

0xe8bc,	// (0x0006c4a5) call5_swipe_1_pane_g2

0x0001,

0xfbe2,	// (0x0006d7cb) call5_swipe_1_pane_g_ParamLimits

0xfbe2,	// (0x0006d7cb) call5_swipe_1_pane_g

0xe8c8,	// (0x0006c4b1) call5_swipe_1_pane_t1_ParamLimits

0xe8c8,	// (0x0006c4b1) call5_swipe_1_pane_t1

0xeeff,	// (0x0006cae8) call5_swipe_2_pane_g1_ParamLimits

0xeeff,	// (0x0006cae8) call5_swipe_2_pane_g1

0xe8dd,	// (0x0006c4c6) call5_swipe_2_pane_g2_ParamLimits

0xe8dd,	// (0x0006c4c6) call5_swipe_2_pane_g2

0x0001,

0xfbe7,	// (0x0006d7d0) call5_swipe_2_pane_g_ParamLimits

0xfbe7,	// (0x0006d7d0) call5_swipe_2_pane_g

0xe8e9,	// (0x0006c4d2) call5_swipe_2_pane_t1_ParamLimits

0xe8e9,	// (0x0006c4d2) call5_swipe_2_pane_t1

0xe8fe,	// (0x0006c4e7) sc_swipe_pane_g1_ParamLimits

0xe8fe,	// (0x0006c4e7) sc_swipe_pane_g1

0xe90b,	// (0x0006c4f4) sc_swipe_pane_g2_ParamLimits

0xe90b,	// (0x0006c4f4) sc_swipe_pane_g2

0x0001,

0xfbec,	// (0x0006d7d5) sc_swipe_pane_g_ParamLimits

0xfbec,	// (0x0006d7d5) sc_swipe_pane_g

0xe917,	// (0x0006c500) sc_swipe_pane_t1_ParamLimits

0xe917,	// (0x0006c500) sc_swipe_pane_t1

0x9ec1,	// (0x00067aaa) main_cmail_launcher_pane

0x7890,	// (0x00065479) aid_size_cell_cmail_l_ParamLimits

0x7890,	// (0x00065479) aid_size_cell_cmail_l

0x78a6,	// (0x0006548f) grid_cmail_l_pane_ParamLimits

0x78a6,	// (0x0006548f) grid_cmail_l_pane

0x78c0,	// (0x000654a9) cell_cmail_l_pane_ParamLimits

0x78c0,	// (0x000654a9) cell_cmail_l_pane

0x78e5,	// (0x000654ce) cell_cmail_l_pane_g1_ParamLimits

0x78e5,	// (0x000654ce) cell_cmail_l_pane_g1

0x78f1,	// (0x000654da) cell_cmail_l_pane_t1_ParamLimits

0x78f1,	// (0x000654da) cell_cmail_l_pane_t1

0x7907,	// (0x000654f0) cell_cmail_l_pane_t2_ParamLimits

0x7907,	// (0x000654f0) cell_cmail_l_pane_t2

0x0001,

0xfbf1,	// (0x0006d7da) cell_cmail_l_pane_t_ParamLimits

0xfbf1,	// (0x0006d7da) cell_cmail_l_pane_t

0xe775,	// (0x0006c35e) grid_highlight_pane_cp018_ParamLimits

0xe775,	// (0x0006c35e) grid_highlight_pane_cp018

0x08b2,	// (0x0005e49b) main2_pane_ParamLimits

0x08b2,	// (0x0005e49b) main2_pane

0xf009,	// (0x0006cbf2) popup_sp_fs_action_menu_bg_pane_g1

0xf011,	// (0x0006cbfa) popup_sp_fs_action_menu_bg_pane_g2

0xf019,	// (0x0006cc02) popup_sp_fs_action_menu_bg_pane_g3

0xf021,	// (0x0006cc0a) popup_sp_fs_action_menu_bg_pane_g4

0xf029,	// (0x0006cc12) popup_sp_fs_action_menu_bg_pane_g5

0xf031,	// (0x0006cc1a) popup_sp_fs_action_menu_bg_pane_g6

0xf039,	// (0x0006cc22) popup_sp_fs_action_menu_bg_pane_g7

0xf041,	// (0x0006cc2a) popup_sp_fs_action_menu_bg_pane_g8

0xf049,	// (0x0006cc32) popup_sp_fs_action_menu_bg_pane_g9

0xf051,	// (0x0006cc3a) popup_sp_fs_action_menu_bg_pane_g10

0xf051,	// (0x0006cc3a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x0006cd14) popup_sp_fs_action_menu_bg_pane_g

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g3_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g3_g1

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g3_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g3_g2

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g3_g3_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x0006cdc2) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x0006cdc2) list_medium_line_x2_t3_g3_g

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g3_t1

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g3_t2

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x0006cdc9) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x0006cdc9) list_medium_line_x2_t3_g3_t

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g2_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g2_g1

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g2_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x0006cdd0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x0006cdd0) list_medium_line_x2_t3_g2_g

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g2_t1

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g2_t2

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x0006cdc9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x0006cdc9) list_medium_line_x2_t3_g2_t

0xeeff,	// (0x0006cae8) list_medium_line_x2_t4_g4_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t4_g4_g1

0xeeff,	// (0x0006cae8) list_medium_line_x2_t4_g4_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t4_g4_g2

0xeeff,	// (0x0006cae8) list_medium_line_x2_t4_g4_g3_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t4_g4_g3

0xeeff,	// (0x0006cae8) list_medium_line_x2_t4_g4_g4_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x0006cdd5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x0006cdd5) list_medium_line_x2_t4_g4_g

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g4_t1

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g4_t2

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g4_t3

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x0006cdde) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x0006cdde) list_medium_line_x2_t4_g4_t

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g4_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g4_g1

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g4_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g4_g2

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g4_g3_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g4_g3

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g4_g4_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x0006cdd5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x0006cdd5) list_medium_line_x2_t2_g4_g

0xa02d,	// (0x00067c16) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t2_g4_t1

0xa02d,	// (0x00067c16) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x0006cda5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x0006cda5) list_medium_line_x2_t2_g4_t

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g3_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g3_g1

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g3_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g3_g2

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g3_g3_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x0006cdc2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x0006cdc2) list_medium_line_x2_t2_g3_g

0xa02d,	// (0x00067c16) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t2_g3_t1

0xa02d,	// (0x00067c16) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x0006cda5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x0006cda5) list_medium_line_x2_t2_g3_t

0x2786,	// (0x0006036f) main_sp_fs_list_pane_ParamLimits

0x2786,	// (0x0006036f) main_sp_fs_list_pane

0xa5ea,	// (0x000681d3) sp_fs_scroll_pane_ParamLimits

0xa5ea,	// (0x000681d3) sp_fs_scroll_pane

0xa5f6,	// (0x000681df) list_medium_line_x2_t3_t1

0xa5f6,	// (0x000681df) list_medium_line_x2_t3_t2

0xa5f6,	// (0x000681df) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x0006ce8b) list_medium_line_x2_t3_t

0xa5f6,	// (0x000681df) list_medium_line_x3_t4_t1

0xa5f6,	// (0x000681df) list_medium_line_x3_t4_t2

0xa5f6,	// (0x000681df) list_medium_line_x3_t4_t3

0xa5f6,	// (0x000681df) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x0006ce92) list_medium_line_x3_t4_t

0xa5f6,	// (0x000681df) list_medium_line_x4_t5_t1

0xa5f6,	// (0x000681df) list_medium_line_x4_t5_t2

0xa5f6,	// (0x000681df) list_medium_line_x4_t5_t3

0xa5f6,	// (0x000681df) list_medium_line_x4_t5_t4

0xa5f6,	// (0x000681df) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x0006ce9b) list_medium_line_x4_t5_t

0xeeff,	// (0x0006cae8) list_medium_line_t4_g4_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t4_g4_g1

0xeeff,	// (0x0006cae8) list_medium_line_t4_g4_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t4_g4_g2

0xeeff,	// (0x0006cae8) list_medium_line_t4_g4_g3_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t4_g4_g3

0xeeff,	// (0x0006cae8) list_medium_line_t4_g4_g4_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x0006cdd5) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x0006cdd5) list_medium_line_t4_g4_g

0xa02d,	// (0x00067c16) list_medium_line_t4_g4_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t4_g4_t1

0xa02d,	// (0x00067c16) list_medium_line_t4_g4_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t4_g4_t2

0xa02d,	// (0x00067c16) list_medium_line_t4_g4_t3_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t4_g4_t3

0xa02d,	// (0x00067c16) list_medium_line_t4_g4_t4_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x0006cdde) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x0006cdde) list_medium_line_t4_g4_t

0x2834,	// (0x0006041d) chi_dic_find_pane_g1

0x38f5,	// (0x000614de) main_tport_pane

0xa5f6,	// (0x000681df) list_medium_line_plain_t1

0xeeff,	// (0x0006cae8) list_medium_line_t2_g2_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t2_g2_g1

0xeeff,	// (0x0006cae8) list_medium_line_t2_g2_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x0006cdd0) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x0006cdd0) list_medium_line_t2_g2_g

0xa02d,	// (0x00067c16) list_medium_line_t2_g2_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t2_g2_t1

0xa02d,	// (0x00067c16) list_medium_line_t2_g2_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x0006cda5) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x0006cda5) list_medium_line_t2_g2_t

0x6829,	// (0x00064412) aid_sp_fs_list_icon_a_sm

0x6831,	// (0x0006441a) aid_sp_fs_list_icon_d

0x6839,	// (0x00064422) aid_sp_fs_text_primary

0x6842,	// (0x0006442b) aid_sp_fs_text_secondary

0xe3de,	// (0x0006bfc7) list_medium_line

0xe3de,	// (0x0006bfc7) list_medium_line_g2

0xe3de,	// (0x0006bfc7) list_medium_line_g3

0xe3de,	// (0x0006bfc7) list_medium_line_plain

0xe3de,	// (0x0006bfc7) list_medium_line_plain_t2

0xe3de,	// (0x0006bfc7) list_medium_line_plain_t3

0xe3de,	// (0x0006bfc7) list_medium_line_right_icon

0xe3de,	// (0x0006bfc7) list_medium_line_right_iconx2

0xe3de,	// (0x0006bfc7) list_medium_line_t2

0xe3de,	// (0x0006bfc7) list_medium_line_t2_g2

0xe3de,	// (0x0006bfc7) list_medium_line_t2_g3

0xe3de,	// (0x0006bfc7) list_medium_line_t2_right_icon

0xe3de,	// (0x0006bfc7) list_medium_line_t2_right_iconx2

0xe3de,	// (0x0006bfc7) list_medium_line_t3

0xe3de,	// (0x0006bfc7) list_medium_line_t3_g2

0xe3de,	// (0x0006bfc7) list_medium_line_t3_g3

0xe3de,	// (0x0006bfc7) list_medium_line_t3_right_iconx2

0xe3de,	// (0x0006bfc7) list_medium_line_t4_g4

0xe3de,	// (0x0006bfc7) list_medium_line_x2

0xe3de,	// (0x0006bfc7) list_medium_line_x2_t2_g2

0xe3de,	// (0x0006bfc7) list_medium_line_x2_t2_g3

0xe3de,	// (0x0006bfc7) list_medium_line_x2_t2_g4

0xe3de,	// (0x0006bfc7) list_medium_line_x2_t3

0xe3de,	// (0x0006bfc7) list_medium_line_x2_t3_g2

0xe3de,	// (0x0006bfc7) list_medium_line_x2_t3_g3

0xe3de,	// (0x0006bfc7) list_medium_line_x2_t3_g4

0xe3de,	// (0x0006bfc7) list_medium_line_x2_t4_g2

0xe3de,	// (0x0006bfc7) list_medium_line_x2_t4_g4

0xe3de,	// (0x0006bfc7) list_medium_line_x3

0xe3de,	// (0x0006bfc7) list_medium_line_x3_t4

0xe3de,	// (0x0006bfc7) list_medium_line_x3_t4_g4

0xe3de,	// (0x0006bfc7) list_medium_line_x4_t4

0xe3de,	// (0x0006bfc7) list_medium_line_x4_t4_g7

0xe3de,	// (0x0006bfc7) list_medium_line_x4_t5

0x684b,	// (0x00064434) list_single_fs_dyc_pane_ParamLimits

0x684b,	// (0x00064434) list_single_fs_dyc_pane

0xeeff,	// (0x0006cae8) list_medium_line_x4_t4_g7_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x4_t4_g7_g1

0xeeff,	// (0x0006cae8) list_medium_line_x4_t4_g7_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x4_t4_g7_g2

0xeeff,	// (0x0006cae8) list_medium_line_x4_t4_g7_g3_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x4_t4_g7_g3

0xeeff,	// (0x0006cae8) list_medium_line_x4_t4_g7_g4_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x4_t4_g7_g4

0xeeff,	// (0x0006cae8) list_medium_line_x4_t4_g7_g5_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x4_t4_g7_g5

0xeeff,	// (0x0006cae8) list_medium_line_x4_t4_g7_g6_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x4_t4_g7_g6

0xef0d,	// (0x0006caf6) list_medium_line_x4_t4_g7_g7_ParamLimits

0xef0d,	// (0x0006caf6) list_medium_line_x4_t4_g7_g7

0x0006,

0x036c,	// (0x0005df55) list_medium_line_x4_t4_g7_g_ParamLimits

0x036c,	// (0x0005df55) list_medium_line_x4_t4_g7_g

0xa02d,	// (0x00067c16) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x4_t4_g7_t1

0xa02d,	// (0x00067c16) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x4_t4_g7_t2

0xa02d,	// (0x00067c16) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x4_t4_g7_t3

0xab19,	// (0x00068702) list_medium_line_x4_t4_g7_t4_ParamLimits

0xab19,	// (0x00068702) list_medium_line_x4_t4_g7_t4

0xab19,	// (0x00068702) list_medium_line_x4_t4_g7_t5_ParamLimits

0xab19,	// (0x00068702) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb33,	// (0x0006d71c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb33,	// (0x0006d71c) list_medium_line_x4_t4_g7_t

0x6f92,	// (0x00064b7b) list_single_dyc_row_pane_ParamLimits

0x6f92,	// (0x00064b7b) list_single_dyc_row_pane

0x780d,	// (0x000653f6) call5_gesture_pane_ParamLimits

0x780d,	// (0x000653f6) call5_gesture_pane

0x7863,	// (0x0006544c) call5_windows_pane_ParamLimits

0x7863,	// (0x0006544c) call5_windows_pane

0x7924,	// (0x0006550d) call5_swipe_1_pane_cp_ParamLimits

0x7924,	// (0x0006550d) call5_swipe_1_pane_cp

0x7930,	// (0x00065519) call5_swipe_2_pane_cp_ParamLimits

0x7930,	// (0x00065519) call5_swipe_2_pane_cp

0xa006,	// (0x00067bef) call5_image_pane_cp

0x793c,	// (0x00065525) popup_call5_audio_first_window_cp_ParamLimits

0x793c,	// (0x00065525) popup_call5_audio_first_window_cp

0xe8fe,	// (0x0006c4e7) call5_swipe_1_pane_g1_cp_ParamLimits

0xe8fe,	// (0x0006c4e7) call5_swipe_1_pane_g1_cp

0xe92c,	// (0x0006c515) call5_swipe_1_pane_g2_cp

0xe917,	// (0x0006c500) call5_swipe_1_pane_t1_cp_ParamLimits

0xe917,	// (0x0006c500) call5_swipe_1_pane_t1_cp

0xe8fe,	// (0x0006c4e7) call5_swipe_2_pane_g1_cp_ParamLimits

0xe8fe,	// (0x0006c4e7) call5_swipe_2_pane_g1_cp

0xe934,	// (0x0006c51d) call5_swipe_2_pane_g2_cp

0xe93c,	// (0x0006c525) call5_swipe_2_pane_t1_cp_ParamLimits

0xe93c,	// (0x0006c525) call5_swipe_2_pane_t1_cp

0xe775,	// (0x0006c35e) main_sp_fs_email_pane

0xe951,	// (0x0006c53a) main_sp_fs_listscroll_pane_te

0x794a,	// (0x00065533) popup_sp_fs_action_menu_pane_ParamLimits

0x794a,	// (0x00065533) popup_sp_fs_action_menu_pane

0xa05b,	// (0x00067c44) bg_sp_fs_ctrlbar_pane_g1

0xe95a,	// (0x0006c543) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe963,	// (0x0006c54c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe96c,	// (0x0006c555) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa05b,	// (0x00067c44) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbf6,	// (0x0006d7df) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc11a,	// (0x00069d03) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc11a,	// (0x00069d03) bg_sp_fs_ctrlbar_ddmenu_pane

0xe975,	// (0x0006c55e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe975,	// (0x0006c55e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe981,	// (0x0006c56a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe981,	// (0x0006c56a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbff,	// (0x0006d7e8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbff,	// (0x0006d7e8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe98d,	// (0x0006c576) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe98d,	// (0x0006c576) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa05b,	// (0x00067c44) list_medium_line_t2_right_icon_g1

0xa5f6,	// (0x000681df) list_medium_line_t2_right_icon_t1

0xa5f6,	// (0x000681df) list_medium_line_t2_right_icon_t2

0x0001,

0xfc04,	// (0x0006d7ed) list_medium_line_t2_right_icon_t

0xab2d,	// (0x00068716) bg_sp_fs_ctrlbar_pane_ParamLimits

0xab2d,	// (0x00068716) bg_sp_fs_ctrlbar_pane

0x79dd,	// (0x000655c6) main_sp_fs_ctrlbar_button_pane_cp01

0x79e7,	// (0x000655d0) main_sp_fs_ctrlbar_ddmenu_pane

0xe9e1,	// (0x0006c5ca) main_sp_fs_ctrlbar_pane_g1

0xe9ed,	// (0x0006c5d6) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc09,	// (0x0006d7f2) main_sp_fs_ctrlbar_pane_g

0x7a25,	// (0x0006560e) main_sp_fs_ctrlbar_pane_t1

0x7a64,	// (0x0006564d) main_sp_fs_ctrlbar_pane

0x7a88,	// (0x00065671) main_sp_fs_listscroll_pane_te_cp01

0x7aa8,	// (0x00065691) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7aa8,	// (0x00065691) popup_sp_fs_action_menu_pane_cp01

0xe775,	// (0x0006c35e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe775,	// (0x0006c35e) bg_sp_fs_highlight_list_pane_cp01

0x7acd,	// (0x000656b6) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x7acd,	// (0x000656b6) sp_fs_action_menu_list_gene_pane_g1

0xea14,	// (0x0006c5fd) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xea14,	// (0x0006c5fd) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc17,	// (0x0006d800) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc17,	// (0x0006d800) sp_fs_action_menu_list_gene_pane_g

0x7adc,	// (0x000656c5) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7adc,	// (0x000656c5) sp_fs_action_menu_list_gene_pane_t1

0x7af4,	// (0x000656dd) sp_fs_action_menu_list_gene_pane_ParamLimits

0x7af4,	// (0x000656dd) sp_fs_action_menu_list_gene_pane

0xea21,	// (0x0006c60a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xea21,	// (0x0006c60a) popup_sp_fs_action_menu_bg_pane

0x7b17,	// (0x00065700) sp_fs_action_menu_list_pane_ParamLimits

0x7b17,	// (0x00065700) sp_fs_action_menu_list_pane

0x7b3b,	// (0x00065724) sp_fs_scroll_pane_cp01_ParamLimits

0x7b3b,	// (0x00065724) sp_fs_scroll_pane_cp01

0xa5f6,	// (0x000681df) list_medium_line_plain_t2_t1

0xa5f6,	// (0x000681df) list_medium_line_plain_t2_t2

0x0001,

0xfc04,	// (0x0006d7ed) list_medium_line_plain_t2_t

0xa5f6,	// (0x000681df) list_medium_line_plain_t3_t1

0xa5f6,	// (0x000681df) list_medium_line_plain_t3_t2

0xa5f6,	// (0x000681df) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x0006ce8b) list_medium_line_plain_t3_t

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g2_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g2_g1

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g2_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x0006cdd0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x0006cdd0) list_medium_line_x2_t2_g2_g

0xa02d,	// (0x00067c16) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t2_g2_t1

0xa02d,	// (0x00067c16) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x0006cda5) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x0006cda5) list_medium_line_x2_t2_g2_t

0xeeff,	// (0x0006cae8) list_medium_line_x2_t4_g2_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t4_g2_g1

0xeeff,	// (0x0006cae8) list_medium_line_x2_t4_g2_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x0006cdd0) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x0006cdd0) list_medium_line_x2_t4_g2_g

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g2_t1

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g2_t2

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g2_t3

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x0006cdde) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x0006cdde) list_medium_line_x2_t4_g2_t

0xa05b,	// (0x00067c44) list_medium_line_t3_right_iconx2_g1

0xa05b,	// (0x00067c44) list_medium_line_t3_right_iconx2_g2

0xa05b,	// (0x00067c44) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x0006cfac) list_medium_line_t3_right_iconx2_g

0xa5f6,	// (0x000681df) list_medium_line_t3_right_iconx2_t1

0xa5f6,	// (0x000681df) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc04,	// (0x0006d7ed) list_medium_line_t3_right_iconx2_t

0xeeff,	// (0x0006cae8) list_medium_line_x3_t4_g4_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x3_t4_g4_g1

0xeeff,	// (0x0006cae8) list_medium_line_x3_t4_g4_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x3_t4_g4_g2

0xeeff,	// (0x0006cae8) list_medium_line_x3_t4_g4_g3_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x3_t4_g4_g3

0xeeff,	// (0x0006cae8) list_medium_line_x3_t4_g4_g4_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x0006cdd5) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x0006cdd5) list_medium_line_x3_t4_g4_g

0xa02d,	// (0x00067c16) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x3_t4_g4_t1

0xa02d,	// (0x00067c16) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x3_t4_g4_t2

0xa02d,	// (0x00067c16) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x3_t4_g4_t3

0xa02d,	// (0x00067c16) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x0006cdde) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x0006cdde) list_medium_line_x3_t4_g4_t

0x7b61,	// (0x0006574a) list_single_dyc_row_text_pane_t1_ParamLimits

0x7b61,	// (0x0006574a) list_single_dyc_row_text_pane_t1

0x7baa,	// (0x00065793) list_single_dyc_row_text_pane_t2_ParamLimits

0x7baa,	// (0x00065793) list_single_dyc_row_text_pane_t2

0x7c20,	// (0x00065809) list_single_dyc_row_text_pane_t3_ParamLimits

0x7c20,	// (0x00065809) list_single_dyc_row_text_pane_t3

0x0005,

0xfc1c,	// (0x0006d805) list_single_dyc_row_text_pane_t_ParamLimits

0xfc1c,	// (0x0006d805) list_single_dyc_row_text_pane_t

0x7d03,	// (0x000658ec) list_single_dyc_row_pane_g1_ParamLimits

0x7d03,	// (0x000658ec) list_single_dyc_row_pane_g1

0x7d0f,	// (0x000658f8) list_single_dyc_row_pane_g2_ParamLimits

0x7d0f,	// (0x000658f8) list_single_dyc_row_pane_g2

0x7d1b,	// (0x00065904) list_single_dyc_row_pane_g3_ParamLimits

0x7d1b,	// (0x00065904) list_single_dyc_row_pane_g3

0x7d27,	// (0x00065910) list_single_dyc_row_pane_g4_ParamLimits

0x7d27,	// (0x00065910) list_single_dyc_row_pane_g4

0x0003,

0xfc29,	// (0x0006d812) list_single_dyc_row_pane_g_ParamLimits

0xfc29,	// (0x0006d812) list_single_dyc_row_pane_g

0x7d33,	// (0x0006591c) list_single_dyc_row_text_pane_ParamLimits

0x7d33,	// (0x0006591c) list_single_dyc_row_text_pane

0xe3de,	// (0x0006bfc7) bg_sp_fs_scroll_pane

0xea2f,	// (0x0006c618) thumb_sp_fs_scroll_pane

0xeeff,	// (0x0006cae8) list_medium_line_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_g1

0xa02d,	// (0x00067c16) list_medium_line_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t1

0xeeff,	// (0x0006cae8) list_medium_line_x2_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_g1

0xeeff,	// (0x0006cae8) list_medium_line_x2_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x0006cdd0) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x0006cdd0) list_medium_line_x2_g

0xa02d,	// (0x00067c16) list_medium_line_x2_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t1

0xeeff,	// (0x0006cae8) list_medium_line_x3_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x3_g1

0xd5e1,	// (0x0006b1ca) list_medium_line_x3_g2_ParamLimits

0xd5e1,	// (0x0006b1ca) list_medium_line_x3_g2

0x0001,

0xfc32,	// (0x0006d81b) list_medium_line_x3_g_ParamLimits

0xfc32,	// (0x0006d81b) list_medium_line_x3_g

0xea38,	// (0x0006c621) list_medium_line_x3_t1_ParamLimits

0xea38,	// (0x0006c621) list_medium_line_x3_t1

0xea4c,	// (0x0006c635) thumb_sp_fs_scroll_pane_g1

0xea55,	// (0x0006c63e) thumb_sp_fs_scroll_pane_g2

0xea5e,	// (0x0006c647) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc37,	// (0x0006d820) thumb_sp_fs_scroll_pane_g

0xea4c,	// (0x0006c635) bg_sp_fs_scroll_pane_g1

0xea55,	// (0x0006c63e) bg_sp_fs_scroll_pane_g2

0xea5e,	// (0x0006c647) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc37,	// (0x0006d820) bg_sp_fs_scroll_pane_g

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g4_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g4_g1

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g4_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g4_g2

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g4_g3_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g4_g3

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g4_g4_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x0006cdd5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x0006cdd5) list_medium_line_x2_t3_g4_g

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g4_t1

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g4_t2

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x0006cdc9) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x0006cdc9) list_medium_line_x2_t3_g4_t

0xeeff,	// (0x0006cae8) list_medium_line_g2_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_g2_g1

0xeeff,	// (0x0006cae8) list_medium_line_g2_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x0006cdd0) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x0006cdd0) list_medium_line_g2_g

0xa02d,	// (0x00067c16) list_medium_line_g2_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_g2_t1

0xeeff,	// (0x0006cae8) list_medium_line_t3_g2_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t3_g2_g1

0xeeff,	// (0x0006cae8) list_medium_line_t3_g2_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x0006cdd0) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x0006cdd0) list_medium_line_t3_g2_g

0xa02d,	// (0x00067c16) list_medium_line_t3_g2_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t3_g2_t1

0xa02d,	// (0x00067c16) list_medium_line_t3_g2_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t3_g2_t2

0xa02d,	// (0x00067c16) list_medium_line_t3_g2_t3_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x0006cdc9) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x0006cdc9) list_medium_line_t3_g2_t

0xa05b,	// (0x00067c44) list_medium_line_right_icon_g1

0xa5f6,	// (0x000681df) list_medium_line_right_icon_t1

0xeeff,	// (0x0006cae8) list_medium_line_t2_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t2_g1

0xa02d,	// (0x00067c16) list_medium_line_t2_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t2_t1

0xa02d,	// (0x00067c16) list_medium_line_t2_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x0006cda5) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x0006cda5) list_medium_line_t2_t

0xeeff,	// (0x0006cae8) list_medium_line_t3_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t3_g1

0xa02d,	// (0x00067c16) list_medium_line_t3_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t3_t1

0xa02d,	// (0x00067c16) list_medium_line_t3_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t3_t2

0xa02d,	// (0x00067c16) list_medium_line_t3_t3_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x0006cdc9) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x0006cdc9) list_medium_line_t3_t

0xeeff,	// (0x0006cae8) list_medium_line_g3_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_g3_g1

0xeeff,	// (0x0006cae8) list_medium_line_g3_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_g3_g2

0xeeff,	// (0x0006cae8) list_medium_line_g3_g3_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x0006cdc2) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x0006cdc2) list_medium_line_g3_g

0xa02d,	// (0x00067c16) list_medium_line_g3_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_g3_t1

0xeeff,	// (0x0006cae8) list_medium_line_t2_g3_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t2_g3_g1

0xeeff,	// (0x0006cae8) list_medium_line_t2_g3_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t2_g3_g2

0xeeff,	// (0x0006cae8) list_medium_line_t2_g3_g3_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x0006cdc2) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x0006cdc2) list_medium_line_t2_g3_g

0xa02d,	// (0x00067c16) list_medium_line_t2_g3_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t2_g3_t1

0xa02d,	// (0x00067c16) list_medium_line_t2_g3_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x0006cda5) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x0006cda5) list_medium_line_t2_g3_t

0xeeff,	// (0x0006cae8) list_medium_line_t3_g3_g1_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t3_g3_g1

0xeeff,	// (0x0006cae8) list_medium_line_t3_g3_g2_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t3_g3_g2

0xeeff,	// (0x0006cae8) list_medium_line_t3_g3_g3_ParamLimits

0xeeff,	// (0x0006cae8) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x0006cdc2) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x0006cdc2) list_medium_line_t3_g3_g

0xa02d,	// (0x00067c16) list_medium_line_t3_g3_t1_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t3_g3_t1

0xa02d,	// (0x00067c16) list_medium_line_t3_g3_t2_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t3_g3_t2

0xa02d,	// (0x00067c16) list_medium_line_t3_g3_t3_ParamLimits

0xa02d,	// (0x00067c16) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x0006cdc9) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x0006cdc9) list_medium_line_t3_g3_t

0xa05b,	// (0x00067c44) list_medium_line_right_iconx2_g1

0xa05b,	// (0x00067c44) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x0006cfa7) list_medium_line_right_iconx2_g

0xa5f6,	// (0x000681df) list_medium_line_right_iconx2_t1

0xa05b,	// (0x00067c44) list_medium_line_t2_right_iconx2_g1

0xa05b,	// (0x00067c44) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x0006cfa7) list_medium_line_t2_right_iconx2_g

0xa5f6,	// (0x000681df) list_medium_line_t2_right_iconx2_t1

0xa5f6,	// (0x000681df) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc04,	// (0x0006d7ed) list_medium_line_t2_right_iconx2_t

0xa5f6,	// (0x000681df) list_medium_line_x4_t4_t1

0xa5f6,	// (0x000681df) list_medium_line_x4_t4_t2

0xa5f6,	// (0x000681df) list_medium_line_x4_t4_t3

0xa5f6,	// (0x000681df) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x0006ce92) list_medium_line_x4_t4_t

0x7d93,	// (0x0006597c) tport_appsw_pane_ParamLimits

0x7d93,	// (0x0006597c) tport_appsw_pane

0x7daa,	// (0x00065993) tport_contact_pane_ParamLimits

0x7daa,	// (0x00065993) tport_contact_pane

0x7dc2,	// (0x000659ab) tport_listscroll_pane_ParamLimits

0x7dc2,	// (0x000659ab) tport_listscroll_pane

0x7dd6,	// (0x000659bf) cell_tport_appsw_pane_ParamLimits

0x7dd6,	// (0x000659bf) cell_tport_appsw_pane

0xaaf7,	// (0x000686e0) tport_appsw_pane_g1_ParamLimits

0xaaf7,	// (0x000686e0) tport_appsw_pane_g1

0xea67,	// (0x0006c650) tport_contact_pane_g1

0xea70,	// (0x0006c659) tport_contact_pane_t1

0xea7e,	// (0x0006c667) tport_contact_pane_t2

0x0001,

0xfc3e,	// (0x0006d827) tport_contact_pane_t

0xea8c,	// (0x0006c675) list_tport_pane

0xea95,	// (0x0006c67e) scroll_pane_cp_030

0x7e20,	// (0x00065a09) cell_tport_appsw_pane_g1

0x7e30,	// (0x00065a19) cell_tport_appsw_pane_t1

0x7e3e,	// (0x00065a27) grid_highlight_pane_cp019

0x7e46,	// (0x00065a2f) list_tport_double_graphic_pane_ParamLimits

0x7e46,	// (0x00065a2f) list_tport_double_graphic_pane

0xe775,	// (0x0006c35e) list_highlight_pane_cp023_ParamLimits

0xe775,	// (0x0006c35e) list_highlight_pane_cp023

0x7e5d,	// (0x00065a46) list_tport_double_graphic_pane_g1_ParamLimits

0x7e5d,	// (0x00065a46) list_tport_double_graphic_pane_g1

0x7e6a,	// (0x00065a53) list_tport_double_graphic_pane_t1_ParamLimits

0x7e6a,	// (0x00065a53) list_tport_double_graphic_pane_t1

0x7e7f,	// (0x00065a68) list_tport_double_graphic_pane_t2_ParamLimits

0x7e7f,	// (0x00065a68) list_tport_double_graphic_pane_t2

0x0001,

0xfc4a,	// (0x0006d833) list_tport_double_graphic_pane_t_ParamLimits

0xfc4a,	// (0x0006d833) list_tport_double_graphic_pane_t

0xe3de,	// (0x0006bfc7) main_cale_note_pane

0x5850,	// (0x00063439) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5850,	// (0x00063439) cell_vitu2_function_top_wide_pane_cp01

0x7332,	// (0x00064f1b) wait_bar_pane_cp05_ParamLimits

0xe775,	// (0x0006c35e) listscroll_cmail_pane

0xea9e,	// (0x0006c687) list_cmail_pane

0x7e91,	// (0x00065a7a) list_cmail_body_pane

0x7ea8,	// (0x00065a91) list_single_cmail_header_caption_pane

0xeaae,	// (0x0006c697) list_single_cmail_header_detail_pane_ParamLimits

0xeaae,	// (0x0006c697) list_single_cmail_header_detail_pane

0xeae0,	// (0x0006c6c9) list_single_cmail_header_caption_pane_t1

0x7ec5,	// (0x00065aae) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7ec5,	// (0x00065aae) list_single_cmail_header_detail_pane_g1

0x7edd,	// (0x00065ac6) list_single_cmail_header_detail_pane_g2_ParamLimits

0x7edd,	// (0x00065ac6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc4f,	// (0x0006d838) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc4f,	// (0x0006d838) list_single_cmail_header_detail_pane_g

0x7ee9,	// (0x00065ad2) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7ee9,	// (0x00065ad2) list_single_cmail_header_detail_pane_t1

0x7f49,	// (0x00065b32) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7f49,	// (0x00065b32) list_single_cmail_header_editor_pane_bg

0xe311,	// (0x0006befa) list_cmail_body_pane_g1

0xeb04,	// (0x0006c6ed) list_cmail_body_pane_t1

0xd630,	// (0x0006b219) list_single_cmail_header_editor_pane_bg_g1

0xa270,	// (0x00067e59) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd640,	// (0x0006b229) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd638,	// (0x0006b221) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd864,	// (0x0006b44d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd660,	// (0x0006b249) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd650,	// (0x0006b239) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd658,	// (0x0006b241) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa250,	// (0x00067e39) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7f60,	// (0x00065b49) calenote_gesture_pane_ParamLimits

0x7f60,	// (0x00065b49) calenote_gesture_pane

0x7f80,	// (0x00065b69) calenote_window_pane_ParamLimits

0x7f80,	// (0x00065b69) calenote_window_pane

0xeb12,	// (0x0006c6fb) popup_note_window_cp01

0x7f9c,	// (0x00065b85) calenote_swipe_1_pane_ParamLimits

0x7f9c,	// (0x00065b85) calenote_swipe_1_pane

0x7930,	// (0x00065519) calenote_swipe_2_pane_ParamLimits

0x7930,	// (0x00065519) calenote_swipe_2_pane

0xe8fe,	// (0x0006c4e7) calenote_swipe_1_pane_g1_ParamLimits

0xe8fe,	// (0x0006c4e7) calenote_swipe_1_pane_g1

0xe90b,	// (0x0006c4f4) calenote_swipe_1_pane_g2_ParamLimits

0xe90b,	// (0x0006c4f4) calenote_swipe_1_pane_g2

0x0001,

0xfbec,	// (0x0006d7d5) calenote_swipe_1_pane_g_ParamLimits

0xfbec,	// (0x0006d7d5) calenote_swipe_1_pane_g

0xeb24,	// (0x0006c70d) calenote_swipe_1_pane_t1_ParamLimits

0xeb24,	// (0x0006c70d) calenote_swipe_1_pane_t1

0xe8fe,	// (0x0006c4e7) calenote_swipe_2_pane_g1_ParamLimits

0xe8fe,	// (0x0006c4e7) calenote_swipe_2_pane_g1

0xeb43,	// (0x0006c72c) calenote_swipe_2_pane_g2_ParamLimits

0xeb43,	// (0x0006c72c) calenote_swipe_2_pane_g2

0x0001,

0xfc5b,	// (0x0006d844) calenote_swipe_2_pane_g_ParamLimits

0xfc5b,	// (0x0006d844) calenote_swipe_2_pane_g

0xeb4f,	// (0x0006c738) calenote_swipe_2_pane_t1_ParamLimits

0xeb4f,	// (0x0006c738) calenote_swipe_2_pane_t1

0xe3de,	// (0x0006bfc7) main_mup_navstr_pane

0x4696,	// (0x0006227f) main_mup3_pane_t7_ParamLimits

0x4696,	// (0x0006227f) main_mup3_pane_t7

0xcb87,	// (0x0006a770) main_mp4_pane_g6_ParamLimits

0xcb87,	// (0x0006a770) main_mp4_pane_g6

0xcd47,	// (0x0006a930) main_image3_pane_t4_ParamLimits

0xcd47,	// (0x0006a930) main_image3_pane_t4

0x7fb9,	// (0x00065ba2) popup_navstr_preview_pane_ParamLimits

0x7fb9,	// (0x00065ba2) popup_navstr_preview_pane

0x7fc9,	// (0x00065bb2) scroll_navstr_pane_ParamLimits

0x7fc9,	// (0x00065bb2) scroll_navstr_pane

0xe3de,	// (0x0006bfc7) bg_popup_preview_window_pane_cp04

0x7fdd,	// (0x00065bc6) popup_navstr_preview_pane_t1

0x7feb,	// (0x00065bd4) scroll_navstr_pane_g1_ParamLimits

0x7feb,	// (0x00065bd4) scroll_navstr_pane_g1

0x7fff,	// (0x00065be8) scroll_navstr_pane_t1_ParamLimits

0x7fff,	// (0x00065be8) scroll_navstr_pane_t1

0xeb1b,	// (0x0006c704) bg_button_pane_cp014

0xeb1b,	// (0x0006c704) bg_button_pane_cp030

0x77b3,	// (0x0006539c) list_double_fisheye_pane_g4_ParamLimits

0x77b3,	// (0x0006539c) list_double_fisheye_pane_g4

0x77bf,	// (0x000653a8) list_double_fisheye_pane_g5_ParamLimits

0x77bf,	// (0x000653a8) list_double_fisheye_pane_g5

0xa5ea,	// (0x000681d3) sp_fs_scroll_pane_cp03

0xe9e1,	// (0x0006c5ca) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe9ed,	// (0x0006c5d6) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc09,	// (0x0006d7f2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7a25,	// (0x0006560e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xeaa6,	// (0x0006c68f) sp_fs_scroll_pane_cp02

0x9f62,	// (0x00067b4b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9f62,	// (0x00067b4b) popup_sp_fs_calendar_preview_list_single_pane

0xe3de,	// (0x0006bfc7) main_cam6_pano_pane

0x9eb3,	// (0x00067a9c) main_mup3_pane_ParamLimits

0xe3de,	// (0x0006bfc7) main_phacti_pane

0x7203,	// (0x00064dec) bg_button_pane_cp11

0x721d,	// (0x00064e06) main_mobtv_info_pane_g2_ParamLimits

0x721d,	// (0x00064e06) main_mobtv_info_pane_g2

0x0001,

0xfb73,	// (0x0006d75c) main_mobtv_info_pane_g_ParamLimits

0xfb73,	// (0x0006d75c) main_mobtv_info_pane_g

0x73fa,	// (0x00064fe3) sc_clock_pane_t5_ParamLimits

0x73fa,	// (0x00064fe3) sc_clock_pane_t5

0x762e,	// (0x00065217) main_radioblah_pane_g1_ParamLimits

0xe830,	// (0x0006c419) main_radioblah_pane_t3_ParamLimits

0xe830,	// (0x0006c419) main_radioblah_pane_t3

0xe848,	// (0x0006c431) main_radioblah_pane_t4_ParamLimits

0xe848,	// (0x0006c431) main_radioblah_pane_t4

0x7656,	// (0x0006523f) main_radioblah_text_pane_ParamLimits

0x7656,	// (0x0006523f) main_radioblah_text_pane

0x7668,	// (0x00065251) main_radioblah_info_pane_g1_ParamLimits

0x7701,	// (0x000652ea) main_radioblah_info_pane_t4_ParamLimits

0x7701,	// (0x000652ea) main_radioblah_info_pane_t4

0xe775,	// (0x0006c35e) main_sp_fs_calendar_pane

0x8016,	// (0x00065bff) main_phacti_pane_g1

0x8027,	// (0x00065c10) phacti_note_pane_ParamLimits

0x8027,	// (0x00065c10) phacti_note_pane

0x803b,	// (0x00065c24) phacti_term_pane_ParamLimits

0x803b,	// (0x00065c24) phacti_term_pane

0x8050,	// (0x00065c39) phacti_note_pane_t1_ParamLimits

0x8050,	// (0x00065c39) phacti_note_pane_t1

0x8067,	// (0x00065c50) phacti_term_pane_g1

0x806f,	// (0x00065c58) phacti_term_pane_t1_ParamLimits

0x806f,	// (0x00065c58) phacti_term_pane_t1

0x8099,	// (0x00065c82) popup_sp_fs_calendar_preview_list_single_pane_g1

0x80a1,	// (0x00065c8a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc65,	// (0x0006d84e) popup_sp_fs_calendar_preview_list_single_pane_g

0x80a9,	// (0x00065c92) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x80a9,	// (0x00065c92) popup_sp_fs_calendar_preview_list_single_pane_t1

0x80bf,	// (0x00065ca8) aid_popup_sp_fs_bg_corner_pane

0xa05b,	// (0x00067c44) popup_sp_fs_calendar_preview_bg_pane_g1

0xe3de,	// (0x0006bfc7) popup_sp_fs_calendar_preview_bg_pane

0x80c7,	// (0x00065cb0) popup_sp_fs_calendar_preview_list_pane

0xab2d,	// (0x00068716) bg_main_sp_fs_cale_pane_ParamLimits

0xab2d,	// (0x00068716) bg_main_sp_fs_cale_pane

0x8139,	// (0x00065d22) listscroll_cale_mrui_pane_ParamLimits

0x8139,	// (0x00065d22) listscroll_cale_mrui_pane

0x814e,	// (0x00065d37) listscroll_sp_fs_schedule_track_pane

0x8157,	// (0x00065d40) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8157,	// (0x00065d40) main_sp_fs_ctrlbar_pane_cp01

0x816a,	// (0x00065d53) main_sp_fs_ribbon_pane

0x8172,	// (0x00065d5b) popup_sp_fs_cale_preview_window

0x8184,	// (0x00065d6d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8184,	// (0x00065d6d) list_single_sp_fs_schedule_track_pane

0xe775,	// (0x0006c35e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe775,	// (0x0006c35e) bg_sp_fs_highlight_list_pane_cp03

0x8198,	// (0x00065d81) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8198,	// (0x00065d81) list_single_sp_fs_schedule_track_pane_g1

0x81a4,	// (0x00065d8d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x81a4,	// (0x00065d8d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc6a,	// (0x0006d853) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc6a,	// (0x0006d853) list_single_sp_fs_schedule_track_pane_g

0x81b0,	// (0x00065d99) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x81b0,	// (0x00065d99) list_single_sp_fs_schedule_track_pane_t1

0x81d2,	// (0x00065dbb) sp_fs_schedule_track_pane_ParamLimits

0x81d2,	// (0x00065dbb) sp_fs_schedule_track_pane

0x81e7,	// (0x00065dd0) sp_fs_schedule_track_pane_g1

0x81ef,	// (0x00065dd8) sp_fs_schedule_track_pane_g2

0x81f7,	// (0x00065de0) sp_fs_schedule_track_pane_g3

0x81ff,	// (0x00065de8) sp_fs_schedule_track_pane_g4

0x8207,	// (0x00065df0) sp_fs_schedule_track_pane_g5

0x0004,

0xfc6f,	// (0x0006d858) sp_fs_schedule_track_pane_g

0xd630,	// (0x0006b219) bg_sp_fs_schedule_viewer_highlight_g1

0xa270,	// (0x00067e59) bg_sp_fs_schedule_viewer_highlight_g2

0xd638,	// (0x0006b221) bg_sp_fs_schedule_viewer_highlight_g3

0xd640,	// (0x0006b229) bg_sp_fs_schedule_viewer_highlight_g4

0xd864,	// (0x0006b44d) bg_sp_fs_schedule_viewer_highlight_g5

0xd650,	// (0x0006b239) bg_sp_fs_schedule_viewer_highlight_g6

0xd658,	// (0x0006b241) bg_sp_fs_schedule_viewer_highlight_g7

0xd660,	// (0x0006b249) bg_sp_fs_schedule_viewer_highlight_g8

0xa250,	// (0x00067e39) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc7a,	// (0x0006d863) bg_sp_fs_schedule_viewer_highlight_g

0xe3de,	// (0x0006bfc7) bg_main_sp_fs_ribbon_pane

0x820f,	// (0x00065df8) main_sp_fs_ribbon_pane_g1

0x8218,	// (0x00065e01) main_sp_fs_ribbon_pane_t1

0x8227,	// (0x00065e10) main_sp_fs_ribbon_pane_t2

0x8236,	// (0x00065e1f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc8d,	// (0x0006d876) main_sp_fs_ribbon_pane_t

0x8245,	// (0x00065e2e) main_sp_fs_ribbon_scheduler_pane

0x824d,	// (0x00065e36) bg_main_sp_fs_ribbon_pane_g1

0x8256,	// (0x00065e3f) bg_main_sp_fs_ribbon_pane_g2

0x825f,	// (0x00065e48) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc94,	// (0x0006d87d) bg_main_sp_fs_ribbon_pane_g

0x8267,	// (0x00065e50) main_sp_fs_ribbon_scheduler_pane_g1

0x8270,	// (0x00065e59) main_sp_fs_ribbon_scheduler_pane_g2

0x8279,	// (0x00065e62) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc9b,	// (0x0006d884) main_sp_fs_ribbon_scheduler_pane_g

0x8282,	// (0x00065e6b) list_cale_mrui_pane

0x828f,	// (0x00065e78) sp_fs_scroll_pane_cp07_ParamLimits

0x828f,	// (0x00065e78) sp_fs_scroll_pane_cp07

0x82ab,	// (0x00065e94) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x82ab,	// (0x00065e94) bg_sp_fs_schedule_viewer_highlight

0x82bd,	// (0x00065ea6) list_single_sp_fs_schedule_track_pane_cp01

0x82c5,	// (0x00065eae) list_sp_fs_schedule_track_pane

0x82cd,	// (0x00065eb6) sp_fs_scroll_pane_cp06_ParamLimits

0x82cd,	// (0x00065eb6) sp_fs_scroll_pane_cp06

0xa05b,	// (0x00067c44) bgmain_sp_fs_calendar_pane_g1

0x82df,	// (0x00065ec8) list_single_cale_mrui_pane_ParamLimits

0x82df,	// (0x00065ec8) list_single_cale_mrui_pane

0x8302,	// (0x00065eeb) list_single_cale_mrui_row_pane_ParamLimits

0x8302,	// (0x00065eeb) list_single_cale_mrui_row_pane

0x830f,	// (0x00065ef8) list_single_cale_mrui_row_pane_g1_ParamLimits

0x830f,	// (0x00065ef8) list_single_cale_mrui_row_pane_g1

0x8354,	// (0x00065f3d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8354,	// (0x00065f3d) list_single_cale_mrui_row_pane_t1

0x8366,	// (0x00065f4f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8366,	// (0x00065f4f) list_single_cale_mrui_row_pane_t2

0x83cc,	// (0x00065fb5) list_single_cale_mrui_row_pane_t3_ParamLimits

0x83cc,	// (0x00065fb5) list_single_cale_mrui_row_pane_t3

0x83fb,	// (0x00065fe4) list_single_cale_mrui_row_pane_t4_ParamLimits

0x83fb,	// (0x00065fe4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfca9,	// (0x0006d892) list_single_cale_mrui_row_pane_t_ParamLimits

0xfca9,	// (0x0006d892) list_single_cale_mrui_row_pane_t

0x842a,	// (0x00066013) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x842a,	// (0x00066013) list_single_cmail_header_editor_pane_bg_cp01

0x844e,	// (0x00066037) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x844e,	// (0x00066037) list_single_cmail_header_editor_pane_bg_cp02

0x846c,	// (0x00066055) main_radioblah_text_pane_t1_ParamLimits

0x846c,	// (0x00066055) main_radioblah_text_pane_t1

0x8487,	// (0x00066070) cam6_indi_pane_cp01

0x848f,	// (0x00066078) cam6_mode_pane_cp01

0x8497,	// (0x00066080) cam6_pano_pane

0x84a0,	// (0x00066089) cam6_zoom_pane_cp01

0x84aa,	// (0x00066093) cam6_pano_image_pane

0x84b3,	// (0x0006609c) cam6_pano_pane_g1

0xe311,	// (0x0006befa) cam6_pano_pane_g2

0x84bc,	// (0x000660a5) cam6_pano_pane_g3

0x84c5,	// (0x000660ae) cam6_pano_pane_g4

0xc87a,	// (0x0006a463) cam6_pano_pane_g5

0x84ce,	// (0x000660b7) cam6_pano_pane_g6

0x84d6,	// (0x000660bf) cam6_pano_pane_g7

0x84de,	// (0x000660c7) cam6_pano_pane_g8

0x84e7,	// (0x000660d0) cam6_pano_pane_g9

0x0008,

0xfcb2,	// (0x0006d89b) cam6_pano_pane_g

0xe3de,	// (0x0006bfc7) main_browser_tag_pane

0x7fb1,	// (0x00065b9a) grid_navstr_albumart_pane

0x84f2,	// (0x000660db) cell_navstr_albumart_pane_ParamLimits

0x84f2,	// (0x000660db) cell_navstr_albumart_pane

0x850e,	// (0x000660f7) cell_navstr_albumart_pane_g1

0xbc83,	// (0x0006986c) cell_navstr_albumart_pane_g2

0xbc93,	// (0x0006987c) cell_navstr_albumart_pane_g3

0xbc8b,	// (0x00069874) cell_navstr_albumart_pane_g4

0x0003,

0xfcc5,	// (0x0006d8ae) cell_navstr_albumart_pane_g

0x8516,	// (0x000660ff) bt_list_pane_ParamLimits

0x8516,	// (0x000660ff) bt_list_pane

0x852c,	// (0x00066115) bt_list_pane_t1

0x853b,	// (0x00066124) bt_list_pane_t2

0x0001,

0xfcce,	// (0x0006d8b7) bt_list_pane_t

0xe3de,	// (0x0006bfc7) main_cale_prevew_pane

0x854a,	// (0x00066133) popup_cale_preview_window_ParamLimits

0x854a,	// (0x00066133) popup_cale_preview_window

0xe775,	// (0x0006c35e) bg_popup_preview_window_pane_cp05_ParamLimits

0xe775,	// (0x0006c35e) bg_popup_preview_window_pane_cp05

0x8567,	// (0x00066150) list_cale_preview_pane_ParamLimits

0x8567,	// (0x00066150) list_cale_preview_pane

0x8573,	// (0x0006615c) list_double_cale_preview_pane_ParamLimits

0x8573,	// (0x0006615c) list_double_cale_preview_pane

0x8587,	// (0x00066170) list_single_cale_preview_pane_ParamLimits

0x8587,	// (0x00066170) list_single_cale_preview_pane

0x859f,	// (0x00066188) list_single_cale_preview_pane_g1

0x85a7,	// (0x00066190) list_single_cale_preview_pane_t1_ParamLimits

0x85a7,	// (0x00066190) list_single_cale_preview_pane_t1

0x85bc,	// (0x000661a5) list_double_cale_preview_pane_g1

0x85c4,	// (0x000661ad) list_double_cale_preview_pane_t1_ParamLimits

0x85c4,	// (0x000661ad) list_double_cale_preview_pane_t1

0x85d9,	// (0x000661c2) list_double_cale_preview_pane_t2_ParamLimits

0x85d9,	// (0x000661c2) list_double_cale_preview_pane_t2

0x0001,

0xfcd3,	// (0x0006d8bc) list_double_cale_preview_pane_t_ParamLimits

0xfcd3,	// (0x0006d8bc) list_double_cale_preview_pane_t

0xe3de,	// (0x0006bfc7) main_ezdial_pane

0xe775,	// (0x0006c35e) main_sp_fs_email_pane_ParamLimits

0x7990,	// (0x00065579) cmail_ddmenu_btn01_pane_ParamLimits

0x7990,	// (0x00065579) cmail_ddmenu_btn01_pane

0x79a3,	// (0x0006558c) cmail_ddmenu_btn02_pane_ParamLimits

0x79a3,	// (0x0006558c) cmail_ddmenu_btn02_pane

0x79c6,	// (0x000655af) cmail_ddmenu_btn03_pane_ParamLimits

0x79c6,	// (0x000655af) cmail_ddmenu_btn03_pane

0x7a64,	// (0x0006564d) main_sp_fs_ctrlbar_pane_ParamLimits

0x7a88,	// (0x00065671) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7e91,	// (0x00065a7a) list_cmail_body_pane_ParamLimits

0xeaee,	// (0x0006c6d7) bg_button_pane_cp12

0xeaf7,	// (0x0006c6e0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xeaf7,	// (0x0006c6e0) list_single_cmail_header_detail_pane_g3

0x7f25,	// (0x00065b0e) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7f25,	// (0x00065b0e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc56,	// (0x0006d83f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc56,	// (0x0006d83f) list_single_cmail_header_detail_pane_t

0x8084,	// (0x00065c6d) phacti_term_pane_t2_ParamLimits

0x8084,	// (0x00065c6d) phacti_term_pane_t2

0x0001,

0xfc60,	// (0x0006d849) phacti_term_pane_t_ParamLimits

0xfc60,	// (0x0006d849) phacti_term_pane_t

0x85f1,	// (0x000661da) aid_size_list_single_double

0x85fd,	// (0x000661e6) popup_ezdial_listscroll_window

0x8619,	// (0x00066202) popup_number_entry_window_cp01

0xa006,	// (0x00067bef) bg_popup_call_pane_cp09

0x8627,	// (0x00066210) ezdial_list_pane

0x862f,	// (0x00066218) scroll_pane_cp23

0xab2d,	// (0x00068716) bg_button_pane_cp028_ParamLimits

0xab2d,	// (0x00068716) bg_button_pane_cp028

0x8637,	// (0x00066220) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8637,	// (0x00066220) cmail_ddmenu_btn01_pane_g1

0x8646,	// (0x0006622f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8646,	// (0x0006622f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcd8,	// (0x0006d8c1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcd8,	// (0x0006d8c1) cmail_ddmenu_btn01_pane_g

0x865c,	// (0x00066245) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x865c,	// (0x00066245) cmail_ddmenu_btn01_pane_t1

0xab2d,	// (0x00068716) bg_button_pane_cp029_ParamLimits

0xab2d,	// (0x00068716) bg_button_pane_cp029

0x8672,	// (0x0006625b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8672,	// (0x0006625b) cmail_ddmenu_btn02_pane_g1

0x868d,	// (0x00066276) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x868d,	// (0x00066276) cmail_ddmenu_btn02_pane_t1

0xe775,	// (0x0006c35e) bg_button_pane_cp031_ParamLimits

0xe775,	// (0x0006c35e) bg_button_pane_cp031

0x8672,	// (0x0006625b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8672,	// (0x0006625b) cmail_ddmenu_btn03_pane_g1

0x868d,	// (0x00066276) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x868d,	// (0x00066276) cmail_ddmenu_btn03_pane_t1

0x5024,	// (0x00062c0d) cell_dialer2_keypad_pane_t1_ParamLimits

0x503e,	// (0x00062c27) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x503e,	// (0x00062c27) cell_dialer2_keypad_pane_t1_copy1

0x7024,	// (0x00064c0d) ncimui_group_button_pane

0xe775,	// (0x0006c35e) main_sp_fs_calendar_pane_ParamLimits

0x7ea8,	// (0x00065a91) list_single_cmail_header_caption_pane_ParamLimits

0x80ed,	// (0x00065cd6) aid_recal_txt_sm_pane

0xe3de,	// (0x0006bfc7) mian_recal_day_pane

0x8172,	// (0x00065d5b) popup_sp_fs_cale_preview_window_ParamLimits

0x86b4,	// (0x0006629d) list_recal_day_pane

0x86f7,	// (0x000662e0) list_single_recal_day_pane_ParamLimits

0x86f7,	// (0x000662e0) list_single_recal_day_pane

0x8709,	// (0x000662f2) list_single_recal_day_pane_g1_ParamLimits

0x8709,	// (0x000662f2) list_single_recal_day_pane_g1

0x8715,	// (0x000662fe) list_single_recal_day_pane_g2_ParamLimits

0x8715,	// (0x000662fe) list_single_recal_day_pane_g2

0x8721,	// (0x0006630a) list_single_recal_day_pane_g3_ParamLimits

0x8721,	// (0x0006630a) list_single_recal_day_pane_g3

0x872d,	// (0x00066316) list_single_recal_day_pane_g4_ParamLimits

0x872d,	// (0x00066316) list_single_recal_day_pane_g4

0x873b,	// (0x00066324) list_single_recal_day_pane_g5_ParamLimits

0x873b,	// (0x00066324) list_single_recal_day_pane_g5

0x8751,	// (0x0006633a) list_single_recal_day_pane_g6_ParamLimits

0x8751,	// (0x0006633a) list_single_recal_day_pane_g6

0x0004,

0xfce7,	// (0x0006d8d0) list_single_recal_day_pane_g_ParamLimits

0xfce7,	// (0x0006d8d0) list_single_recal_day_pane_g

0x8765,	// (0x0006634e) list_single_recal_day_pane_t1

0x8777,	// (0x00066360) list_single_recal_day_pane_t2

0x0001,

0xfcf2,	// (0x0006d8db) list_single_recal_day_pane_t

0x8789,	// (0x00066372) ncimui_query_button_pane_ParamLimits

0x8789,	// (0x00066372) ncimui_query_button_pane

0x8799,	// (0x00066382) ncimui_query_button_pane_t1_ParamLimits

0x8799,	// (0x00066382) ncimui_query_button_pane_t1

0x87ac,	// (0x00066395) ncimui_query_button_pane_t2_ParamLimits

0x87ac,	// (0x00066395) ncimui_query_button_pane_t2

0x0001,

0xfcf7,	// (0x0006d8e0) ncimui_query_button_pane_t_ParamLimits

0xfcf7,	// (0x0006d8e0) ncimui_query_button_pane_t

0x87bf,	// (0x000663a8) query_button_pane_ParamLimits

0x87bf,	// (0x000663a8) query_button_pane

0xe3de,	// (0x0006bfc7) bg_button_pane_cp0028

0x87d2,	// (0x000663bb) query_button_pane_t1

0x38f5,	// (0x000614de) main_tport_pane_ParamLimits

0x7d52,	// (0x0006593b) bg_popup_window_pane_cp01_ParamLimits

0x7d52,	// (0x0006593b) bg_popup_window_pane_cp01

0x7d6b,	// (0x00065954) heading_pane_cp08_ParamLimits

0x7d6b,	// (0x00065954) heading_pane_cp08

0x7d7e,	// (0x00065967) heading_pane_cp07_ParamLimits

0x7d7e,	// (0x00065967) heading_pane_cp07

0x7e20,	// (0x00065a09) cell_tport_appsw_pane_g2

0x0002,

0xfc43,	// (0x0006d82c) cell_tport_appsw_pane_g

0x2dd7,	// (0x000609c0) input_candi_list_open_g1

0xa48a,	// (0x00068073) list_cale_time_pane_g6_ParamLimits

0xa48a,	// (0x00068073) list_cale_time_pane_g6

0x3fa5,	// (0x00061b8e) aid_size_touch_calib_1_ParamLimits

0x3fa5,	// (0x00061b8e) aid_size_touch_calib_1

0x3fb7,	// (0x00061ba0) aid_size_touch_calib_2_ParamLimits

0x3fb7,	// (0x00061ba0) aid_size_touch_calib_2

0x3fcf,	// (0x00061bb8) aid_size_touch_calib_3_ParamLimits

0x3fcf,	// (0x00061bb8) aid_size_touch_calib_3

0x3fed,	// (0x00061bd6) aid_size_touch_calib_4_ParamLimits

0x3fed,	// (0x00061bd6) aid_size_touch_calib_4

0x4005,	// (0x00061bee) main_touch_calib_button_group_pane_ParamLimits

0x4005,	// (0x00061bee) main_touch_calib_button_group_pane

0x401d,	// (0x00061c06) main_touch_calib_pane_g1_ParamLimits

0x402f,	// (0x00061c18) main_touch_calib_pane_g2_ParamLimits

0x4041,	// (0x00061c2a) main_touch_calib_pane_g3_ParamLimits

0x4053,	// (0x00061c3c) main_touch_calib_pane_g4_ParamLimits

0xf6bf,	// (0x0006d2a8) main_touch_calib_pane_g_ParamLimits

0x4065,	// (0x00061c4e) main_touch_calib_pane_t1_ParamLimits

0x407f,	// (0x00061c68) main_touch_calib_pane_t2_ParamLimits

0x4099,	// (0x00061c82) main_touch_calib_pane_t3_ParamLimits

0x40ad,	// (0x00061c96) main_touch_calib_pane_t4_ParamLimits

0x40c3,	// (0x00061cac) main_touch_calib_pane_t5_ParamLimits

0xf6c8,	// (0x0006d2b1) main_touch_calib_pane_t_ParamLimits

0xc62d,	// (0x0006a216) list_single_fp_cale_pane_g3_ParamLimits

0xc62d,	// (0x0006a216) list_single_fp_cale_pane_g3

0x9eb3,	// (0x00067a9c) bg_button_pane_cp012_ParamLimits

0x9eb3,	// (0x00067a9c) bg_vkb2_func_pane_cp03_ParamLimits

0x60cb,	// (0x00063cb4) cell_vitu2_function_top_pane_g1_ParamLimits

0x9eb3,	// (0x00067a9c) bg_vkb2_func_pane_cp04_ParamLimits

0x6faf,	// (0x00064b98) main_ncimui_button_group_pane_ParamLimits

0x6faf,	// (0x00064b98) main_ncimui_button_group_pane

0x700f,	// (0x00064bf8) main_ncimui_pane_t3_ParamLimits

0x700f,	// (0x00064bf8) main_ncimui_pane_t3

0x801e,	// (0x00065c07) phacti_button_group_pane

0x85f1,	// (0x000661da) aid_size_list_single_double_ParamLimits

0x85fd,	// (0x000661e6) popup_ezdial_listscroll_window_ParamLimits

0x8619,	// (0x00066202) popup_number_entry_window_cp01_ParamLimits

0x87e0,	// (0x000663c9) phacti_button_pane_ParamLimits

0x87e0,	// (0x000663c9) phacti_button_pane

0xe3de,	// (0x0006bfc7) bg_button_pane_cp14

0x87f1,	// (0x000663da) phacti_button_pane_t1

0x87ff,	// (0x000663e8) main_touch_calib_button_pane_ParamLimits

0x87ff,	// (0x000663e8) main_touch_calib_button_pane

0xef71,	// (0x0006cb5a) bg_button_pane_cp18_ParamLimits

0xef71,	// (0x0006cb5a) bg_button_pane_cp18

0x8814,	// (0x000663fd) main_touch_calib_button_pane_t1_ParamLimits

0x8814,	// (0x000663fd) main_touch_calib_button_pane_t1

0x882a,	// (0x00066413) main_touch_calib_button_pane_t2_ParamLimits

0x882a,	// (0x00066413) main_touch_calib_button_pane_t2

0x0001,

0xfcfc,	// (0x0006d8e5) main_touch_calib_button_pane_t_ParamLimits

0xfcfc,	// (0x0006d8e5) main_touch_calib_button_pane_t

0xe3de,	// (0x0006bfc7) cell_ncimui_button_pane

0xe3de,	// (0x0006bfc7) bg_button_pane_cp032

0x8848,	// (0x00066431) cell_ncimui_button_pane_t1

0xcd25,	// (0x0006a90e) image3_infobar_pane_ParamLimits

0xcd25,	// (0x0006a90e) image3_infobar_pane

0x7426,	// (0x0006500f) fs_bigclock_status_pane_ParamLimits

0x7426,	// (0x0006500f) fs_bigclock_status_pane

0x7433,	// (0x0006501c) main_fs_bigclock_clock_pane_ParamLimits

0x7433,	// (0x0006501c) main_fs_bigclock_clock_pane

0x7465,	// (0x0006504e) main_fs_bigclock_indi_pane_ParamLimits

0x7465,	// (0x0006504e) main_fs_bigclock_indi_pane

0x74a5,	// (0x0006508e) main_fs_bigclock_swipe_pane_ParamLimits

0x74a5,	// (0x0006508e) main_fs_bigclock_swipe_pane

0xe3de,	// (0x0006bfc7) main_fs_clock_dumped_data

0x74f1,	// (0x000650da) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x74f1,	// (0x000650da) list_single_fs_bigclock_indicator_pane_g1

0x750a,	// (0x000650f3) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x750a,	// (0x000650f3) list_single_fs_bigclock_indicator_pane_g2

0x7524,	// (0x0006510d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7524,	// (0x0006510d) list_single_fs_bigclock_indicator_pane_g3

0x753e,	// (0x00065127) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x753e,	// (0x00065127) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb9d,	// (0x0006d786) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb9d,	// (0x0006d786) list_single_fs_bigclock_indicator_pane_g

0x756d,	// (0x00065156) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x756d,	// (0x00065156) list_single_fs_bigclock_indicator_pane_t1

0x7595,	// (0x0006517e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7595,	// (0x0006517e) list_single_fs_bigclock_indicator_pane_t2

0x75bd,	// (0x000651a6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x75bd,	// (0x000651a6) list_single_fs_bigclock_indicator_pane_t3

0x75e5,	// (0x000651ce) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x75e5,	// (0x000651ce) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfba8,	// (0x0006d791) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfba8,	// (0x0006d791) list_single_fs_bigclock_indicator_pane_t

0x8856,	// (0x0006643f) image3_infobar_fav_pane_ParamLimits

0x8856,	// (0x0006643f) image3_infobar_fav_pane

0x8866,	// (0x0006644f) image3_infobar_loc_pane_ParamLimits

0x8866,	// (0x0006644f) image3_infobar_loc_pane

0x887c,	// (0x00066465) image3_infobar_time_pane_ParamLimits

0x887c,	// (0x00066465) image3_infobar_time_pane

0xa05b,	// (0x00067c44) image3_infobar_time_pane_g1

0x888c,	// (0x00066475) image3_infobar_time_pane_t1

0xa05b,	// (0x00067c44) image3_infobar_loc_pane_g1

0x889a,	// (0x00066483) image3_infobar_loc_pane_g2

0x0001,

0xfd01,	// (0x0006d8ea) image3_infobar_loc_pane_g

0x88a2,	// (0x0006648b) image3_infobar_loc_pane_t1

0xa05b,	// (0x00067c44) image3_infobar_fav_pane_g1

0x88b0,	// (0x00066499) image3_infobar_fav_pane_g2

0x0001,

0xfd06,	// (0x0006d8ef) image3_infobar_fav_pane_g

0x88b8,	// (0x000664a1) fs_bigclock_status_battery_pane

0x88c1,	// (0x000664aa) fs_bigclock_status_signal_pane

0x88ca,	// (0x000664b3) fs_bigclock_status_title_pane

0x88d3,	// (0x000664bc) fs_bigclock_status_signal_pane_g1

0x88dc,	// (0x000664c5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd0b,	// (0x0006d8f4) fs_bigclock_status_signal_pane_g

0x88e4,	// (0x000664cd) fs_bigclock_status_battery_pane_g1

0x88ed,	// (0x000664d6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd10,	// (0x0006d8f9) fs_bigclock_status_battery_pane_g

0x88f5,	// (0x000664de) fs_bigclock_status_title_pane_t1

0x8903,	// (0x000664ec) main_fs_bigclock_clock_pane_g1

0x8903,	// (0x000664ec) main_fs_bigclock_clock_pane_g2

0x8916,	// (0x000664ff) main_fs_bigclock_clock_pane_g3

0x8916,	// (0x000664ff) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd15,	// (0x0006d8fe) main_fs_bigclock_clock_pane_g

0x892d,	// (0x00066516) main_fs_bigclock_clock_pane_t1

0x8943,	// (0x0006652c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd1e,	// (0x0006d907) main_fs_bigclock_clock_pane_t

0x8961,	// (0x0006654a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8961,	// (0x0006654a) list_single_fs_bigclock_indicator_pane

0x8972,	// (0x0006655b) list_single_fs_bigclock_pane_ParamLimits

0x8972,	// (0x0006655b) list_single_fs_bigclock_pane

0x89dc,	// (0x000665c5) main_fs_bigclock_indicator_pane_t1

0x89eb,	// (0x000665d4) list_single_fs_bigclock_pane_g1

0x89f3,	// (0x000665dc) list_single_fs_bigclock_pane_t1

0xa05b,	// (0x00067c44) main_fs_bigclock_swipe_pane_g1

0x8a36,	// (0x0006661f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd2f,	// (0x0006d918) main_fs_bigclock_swipe_pane_g

0x8a3e,	// (0x00066627) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x8a3e,	// (0x00066627) main_fs_bigclock_swipe_pane_t1

0x2792,	// (0x0006037b) call_type_pane_ParamLimits

0xe3de,	// (0x0006bfc7) main_btmg_pane

0x833b,	// (0x00065f24) list_single_cale_mrui_row_pane_g2_ParamLimits

0x833b,	// (0x00065f24) list_single_cale_mrui_row_pane_g2

0x0002,

0xfca2,	// (0x0006d88b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfca2,	// (0x0006d88b) list_single_cale_mrui_row_pane_g

0x86dd,	// (0x000662c6) list_recal_vselct_arw_lo_pane

0x86e5,	// (0x000662ce) list_recal_vselct_arw_up_pane

0x86ed,	// (0x000662d6) list_recal_vselct_pane

0x8a5b,	// (0x00066644) btmg_button_pane

0x8a65,	// (0x0006664e) main_btmg_pane_g1

0xe3de,	// (0x0006bfc7) bg_button_pane_cp044

0x8a6f,	// (0x00066658) btmg_button_pane_t1

0xbdd5,	// (0x000699be) aid_listscroll_gen

0xe775,	// (0x0006c35e) main_cntbar_detail_pane

0xea9e,	// (0x0006c687) list_cmail_folder_pane

0xa5ea,	// (0x000681d3) sp_fs_scroll_pane_cp03_ParamLimits

0x8a7d,	// (0x00066666) list_single_fs_dyc_pane_cp01_ParamLimits

0x8a7d,	// (0x00066666) list_single_fs_dyc_pane_cp01

0x8a98,	// (0x00066681) aid_size_cmail_indent

0x8aa1,	// (0x0006668a) list_single_dyc_row_pane_cp01

0x8ade,	// (0x000666c7) cntbar_detail_list_pane_ParamLimits

0x8ade,	// (0x000666c7) cntbar_detail_list_pane

0x8b30,	// (0x00066719) main_cntbar_detail_cont_pane_ParamLimits

0x8b30,	// (0x00066719) main_cntbar_detail_cont_pane

0xa5ea,	// (0x000681d3) scroll_pane_cp032_ParamLimits

0xa5ea,	// (0x000681d3) scroll_pane_cp032

0x8b44,	// (0x0006672d) cntbar_detail_list_event_pane_ParamLimits

0x8b44,	// (0x0006672d) cntbar_detail_list_event_pane

0x8af0,	// (0x000666d9) cntbar_detail_list_shct_pane

0xa2be,	// (0x00067ea7) aid_list_gen

0x8b54,	// (0x0006673d) aid_scroll

0x8b5d,	// (0x00066746) aid_size_touch_scroll_bar

0x8b66,	// (0x0006674f) aid_list_double

0x8b6f,	// (0x00066758) aid_list_single

0x8b6f,	// (0x00066758) aid_list_single_lg

0x8b78,	// (0x00066761) aid_list_z_g_a_sm

0x8b80,	// (0x00066769) aid_list_z_g_d

0x8b88,	// (0x00066771) aid_txt_z_prm

0x8b96,	// (0x0006677f) aid_txt_z_prm_cp01

0x8ba4,	// (0x0006678d) aid_txt_z_sec

0x8bb2,	// (0x0006679b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8bb2,	// (0x0006679b) main_cntbar_detail_cont_pane_g1

0x8bc6,	// (0x000667af) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8bc6,	// (0x000667af) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd34,	// (0x0006d91d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd34,	// (0x0006d91d) main_cntbar_detail_cont_pane_g

0x8bd6,	// (0x000667bf) main_cntbar_detail_cont_pane_t1

0x8be4,	// (0x000667cd) main_cntbar_detail_cont_pane_t2

0x8bf2,	// (0x000667db) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd39,	// (0x0006d922) main_cntbar_detail_cont_pane_t

0x8c00,	// (0x000667e9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8c00,	// (0x000667e9) cell_cntbar_detail_list_shct_pane

0x8c12,	// (0x000667fb) cntbar_detail_list_shct_pane_g1

0xcef7,	// (0x0006aae0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd40,	// (0x0006d929) cntbar_detail_list_shct_pane_g

0x8c1b,	// (0x00066804) cntbar_detail_list_event_pane_g1_ParamLimits

0x8c1b,	// (0x00066804) cntbar_detail_list_event_pane_g1

0x8c27,	// (0x00066810) cntbar_detail_list_event_pane_g2_ParamLimits

0x8c27,	// (0x00066810) cntbar_detail_list_event_pane_g2

0x0005,

0xfd45,	// (0x0006d92e) cntbar_detail_list_event_pane_g_ParamLimits

0xfd45,	// (0x0006d92e) cntbar_detail_list_event_pane_g

0x8c95,	// (0x0006687e) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c95,	// (0x0006687e) cntbar_detail_list_event_pane_t1

0x8caa,	// (0x00066893) cntbar_detail_list_event_pane_t2_ParamLimits

0x8caa,	// (0x00066893) cntbar_detail_list_event_pane_t2

0x0002,

0xfd52,	// (0x0006d93b) cntbar_detail_list_event_pane_t_ParamLimits

0xfd52,	// (0x0006d93b) cntbar_detail_list_event_pane_t

0xa05b,	// (0x00067c44) cell_cntbar_detail_list_shct_pane_g1

0x2b30,	// (0x00060719) navi_pane_mv_g3

0xe775,	// (0x0006c35e) main_cntbar_detail_pane_ParamLimits

0xe3de,	// (0x0006bfc7) main_notif_wgt_pane

0xcb15,	// (0x0006a6fe) aid_tch_main_mp4_pane_g4

0xcd1d,	// (0x0006a906) popup_slider_window_cp02

0x86d3,	// (0x000662bc) list_recal_day_event_pane

0x8aaa,	// (0x00066693) cntbar_detail_btn_pane_ParamLimits

0x8aaa,	// (0x00066693) cntbar_detail_btn_pane

0x8ac3,	// (0x000666ac) cntbar_detail_btn_pane_cp01_ParamLimits

0x8ac3,	// (0x000666ac) cntbar_detail_btn_pane_cp01

0x8af0,	// (0x000666d9) cntbar_detail_list_shct_pane_ParamLimits

0x8b00,	// (0x000666e9) cntbar_detail_pane_g1_ParamLimits

0x8b00,	// (0x000666e9) cntbar_detail_pane_g1

0x8b14,	// (0x000666fd) cntbar_detail_pane_t1_ParamLimits

0x8b14,	// (0x000666fd) cntbar_detail_pane_t1

0x8c33,	// (0x0006681c) cntbar_detail_list_event_pane_g3_ParamLimits

0x8c33,	// (0x0006681c) cntbar_detail_list_event_pane_g3

0x8c4b,	// (0x00066834) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c4b,	// (0x00066834) cntbar_detail_list_event_pane_g4

0x8c63,	// (0x0006684c) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c63,	// (0x0006684c) cntbar_detail_list_event_pane_g5

0x8c7b,	// (0x00066864) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c7b,	// (0x00066864) cntbar_detail_list_event_pane_g6

0x8cbf,	// (0x000668a8) cntbar_detail_list_event_pane_t3_ParamLimits

0x8cbf,	// (0x000668a8) cntbar_detail_list_event_pane_t3

0x8cd1,	// (0x000668ba) popup_notif_wgt_window_ParamLimits

0x8cd1,	// (0x000668ba) popup_notif_wgt_window

0x8cea,	// (0x000668d3) popup_submenu_window_cp01_ParamLimits

0x8cea,	// (0x000668d3) popup_submenu_window_cp01

0xa006,	// (0x00067bef) bg_popup_window_pane_cp10

0xcf00,	// (0x0006aae9) listscroll_notif_wgt_pane

0xcf12,	// (0x0006aafb) list_notif_wgt_window

0xcf1b,	// (0x0006ab04) scroll_pane_cp033

0x8cfe,	// (0x000668e7) list_notif_wgt_row_pane_ParamLimits

0x8cfe,	// (0x000668e7) list_notif_wgt_row_pane

0xcf24,	// (0x0006ab0d) aid_size_list_notif_wgt_del

0xcf31,	// (0x0006ab1a) list_notif_wgt_row_pane_g1

0xcf3d,	// (0x0006ab26) list_notif_wgt_row_pane_g2

0xcf4c,	// (0x0006ab35) list_notif_wgt_row_pane_g3

0x0002,

0xfd59,	// (0x0006d942) list_notif_wgt_row_pane_g

0xcf59,	// (0x0006ab42) list_notif_wgt_row_pane_t1

0xcf6f,	// (0x0006ab58) list_notif_wgt_row_pane_t2

0xcf81,	// (0x0006ab6a) list_notif_wgt_row_pane_t3

0x0002,

0xfd60,	// (0x0006d949) list_notif_wgt_row_pane_t

0xd87e,	// (0x0006b467) list_recal_day_event_pane_g1

0xcf93,	// (0x0006ab7c) list_recal_day_event_pane_t1

0xe3de,	// (0x0006bfc7) bg_button_pane_cp045

0x8d0e,	// (0x000668f7) cntbar_detail_btn_pane_t1

0xab2d,	// (0x00068716) main_callh_pane_ParamLimits

0xab2d,	// (0x00068716) main_callh_pane

0xe3de,	// (0x0006bfc7) main_coverflow0_pane

0xe3de,	// (0x0006bfc7) main_wgtman_pane

0x74c6,	// (0x000650af) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x74c6,	// (0x000650af) main_fs_bigclock_unlock_btn_pane

0x7e18,	// (0x00065a01) bg_button_pane_cp16

0x7e28,	// (0x00065a11) cell_tport_appsw_pane_g3

0x8d1c,	// (0x00066905) cf0_flow_pane_ParamLimits

0x8d1c,	// (0x00066905) cf0_flow_pane

0xcfa2,	// (0x0006ab8b) listscroll_cf0_pane

0xcfad,	// (0x0006ab96) main_cf0_pane_g1

0x8d31,	// (0x0006691a) main_cf0_pane_t1_ParamLimits

0x8d31,	// (0x0006691a) main_cf0_pane_t1

0x8d48,	// (0x00066931) main_cf0_pane_t2_ParamLimits

0x8d48,	// (0x00066931) main_cf0_pane_t2

0x0001,

0xfd6c,	// (0x0006d955) main_cf0_pane_t_ParamLimits

0xfd6c,	// (0x0006d955) main_cf0_pane_t

0xcfbf,	// (0x0006aba8) scroll_pane_cp11

0x8d5f,	// (0x00066948) cf0_flow_pane_g1

0x8d6b,	// (0x00066954) cf0_flow_pane_g2

0x0001,

0xfd71,	// (0x0006d95a) cf0_flow_pane_g

0x8d77,	// (0x00066960) cf0_flow_pane_t1

0xe3de,	// (0x0006bfc7) main_call6_pane

0xe3de,	// (0x0006bfc7) main_calllock_pane

0x8d89,	// (0x00066972) call6_btn_grp_pane_ParamLimits

0x8d89,	// (0x00066972) call6_btn_grp_pane

0x8da3,	// (0x0006698c) call6_pane_g1_ParamLimits

0x8da3,	// (0x0006698c) call6_pane_g1

0x8dbc,	// (0x000669a5) popup_call6_1st_window_ParamLimits

0x8dbc,	// (0x000669a5) popup_call6_1st_window

0x8dd0,	// (0x000669b9) popup_call6_2nd_window_ParamLimits

0x8dd0,	// (0x000669b9) popup_call6_2nd_window

0x8de4,	// (0x000669cd) cell_call6_btn_pane_ParamLimits

0x8de4,	// (0x000669cd) cell_call6_btn_pane

0xa006,	// (0x00067bef) bg_popup_call2_in_pane_cp03

0xcfca,	// (0x0006abb3) popup_call6_1st_window_g1

0xcfd2,	// (0x0006abbb) popup_call6_1st_window_g2

0xcfda,	// (0x0006abc3) popup_call6_1st_window_g3

0x0002,

0xfd76,	// (0x0006d95f) popup_call6_1st_window_g

0xcfe2,	// (0x0006abcb) popup_call6_1st_window_t1

0xcff1,	// (0x0006abda) popup_call6_1st_window_t2

0xd001,	// (0x0006abea) popup_call6_1st_window_t3

0x0002,

0xfd7d,	// (0x0006d966) popup_call6_1st_window_t

0xa006,	// (0x00067bef) bg_popup_call2_in_pane_cp04

0xd011,	// (0x0006abfa) popup_call6_2nd_window_g1

0xd019,	// (0x0006ac02) popup_call6_2nd_window_g2

0xd021,	// (0x0006ac0a) popup_call6_2nd_window_g3

0x0002,

0xfd84,	// (0x0006d96d) popup_call6_2nd_window_g

0xd029,	// (0x0006ac12) popup_call6_2nd_window_t1

0x9ec1,	// (0x00067aaa) bg_button_pane_cp15

0xdc67,	// (0x0006b850) cell_call6_btn_pane_g1

0xdc70,	// (0x0006b859) cell_call6_btn_pane_t1

0x8df8,	// (0x000669e1) listscroll_wgtman_pane_ParamLimits

0x8df8,	// (0x000669e1) listscroll_wgtman_pane

0x8e19,	// (0x00066a02) wgtman_btn_pane_ParamLimits

0x8e19,	// (0x00066a02) wgtman_btn_pane

0xa8f4,	// (0x000684dd) aid_scroll_copy1

0xd038,	// (0x0006ac21) list_wgtman_pane

0x8e5c,	// (0x00066a45) wgtman_btn_pane_g1_ParamLimits

0x8e5c,	// (0x00066a45) wgtman_btn_pane_g1

0x8e88,	// (0x00066a71) wgtman_btn_pane_t1_ParamLimits

0x8e88,	// (0x00066a71) wgtman_btn_pane_t1

0xd042,	// (0x0006ac2b) wgtman_btn_pane_t2_ParamLimits

0xd042,	// (0x0006ac2b) wgtman_btn_pane_t2

0x0001,

0xfd8b,	// (0x0006d974) wgtman_btn_pane_t_ParamLimits

0xfd8b,	// (0x0006d974) wgtman_btn_pane_t

0x8ec5,	// (0x00066aae) listrow_wgtman_pane_ParamLimits

0x8ec5,	// (0x00066aae) listrow_wgtman_pane

0x8ed9,	// (0x00066ac2) listrow_wgtman_pane_g1

0x8ee6,	// (0x00066acf) listrow_wgtman_pane_g2

0x0001,

0xfd90,	// (0x0006d979) listrow_wgtman_pane_g

0x8f04,	// (0x00066aed) listrow_wgtman_pane_t1

0x8f1c,	// (0x00066b05) listrow_wgtman_pane_t2

0x0001,

0xfd95,	// (0x0006d97e) listrow_wgtman_pane_t

0x8f42,	// (0x00066b2b) wait_bar_pane_cp09

0xd059,	// (0x0006ac42) main_calllock_btn_pane

0xd063,	// (0x0006ac4c) main_calllock_pane_g1

0xe3de,	// (0x0006bfc7) bg_button_pane_cp17

0xd06f,	// (0x0006ac58) main_calllock_btn_pane_g1

0xd078,	// (0x0006ac61) main_calllock_btn_pane_t1

0xe3de,	// (0x0006bfc7) main_dialer3_pane

0xe3de,	// (0x0006bfc7) main_fmrd2_pane

0xa05b,	// (0x00067c44) main_fs_bigclock_unlock_btn_pane_g1

0x8f5c,	// (0x00066b45) main_fs_bigclock_unlock_btn_pane_t1

0x8f6a,	// (0x00066b53) area_fmrd2_info_pane_ParamLimits

0x8f6a,	// (0x00066b53) area_fmrd2_info_pane

0x8f7b,	// (0x00066b64) area_fmrd2_visual_pane_ParamLimits

0x8f7b,	// (0x00066b64) area_fmrd2_visual_pane

0x8f89,	// (0x00066b72) fmrd2_indi_pane_ParamLimits

0x8f89,	// (0x00066b72) fmrd2_indi_pane

0x8f96,	// (0x00066b7f) area_fmrd2_visual_pane_g1

0x8f9e,	// (0x00066b87) area_fmrd2_visual_pane_t1

0x8fae,	// (0x00066b97) area_fmrd2_visual_pane_t2

0x8fbe,	// (0x00066ba7) area_fmrd2_visual_pane_t3

0x0002,

0xfd9f,	// (0x0006d988) area_fmrd2_visual_pane_t

0x8fce,	// (0x00066bb7) area_fmrd2_info_pane_g1

0x8fd6,	// (0x00066bbf) area_fmrd2_info_pane_t1

0x8fe6,	// (0x00066bcf) area_fmrd2_info_pane_t2

0x8ff6,	// (0x00066bdf) area_fmrd2_info_pane_t3

0x9006,	// (0x00066bef) area_fmrd2_info_pane_t4

0x0003,

0xfda6,	// (0x0006d98f) area_fmrd2_info_pane_t

0x9016,	// (0x00066bff) fmrd2_indi_pane_t1

0x9026,	// (0x00066c0f) fmrd2_indi_pane_t2

0x9036,	// (0x00066c1f) fmrd2_indi_pane_t3

0x0002,

0xfdaf,	// (0x0006d998) fmrd2_indi_pane_t

0x754f,	// (0x00065138) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x754f,	// (0x00065138) list_single_fs_bigclock_indicator_pane_g5

0x7604,	// (0x000651ed) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7604,	// (0x000651ed) list_single_fs_bigclock_indicator_pane_t5

0x80cf,	// (0x00065cb8) aid_cell_bcale_month_pane_ParamLimits

0x80cf,	// (0x00065cb8) aid_cell_bcale_month_pane

0x80f6,	// (0x00065cdf) bcale_month_pane_ParamLimits

0x80f6,	// (0x00065cdf) bcale_month_pane

0x811a,	// (0x00065d03) bcale_preview_pane_ParamLimits

0x811a,	// (0x00065d03) bcale_preview_pane

0x89f3,	// (0x000665dc) list_single_fs_bigclock_pane_t1_ParamLimits

0x8a12,	// (0x000665fb) list_single_fs_bigclock_pane_t2_ParamLimits

0x8a12,	// (0x000665fb) list_single_fs_bigclock_pane_t2

0x0001,

0xfd2a,	// (0x0006d913) list_single_fs_bigclock_pane_t_ParamLimits

0xfd2a,	// (0x0006d913) list_single_fs_bigclock_pane_t

0x8f54,	// (0x00066b3d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd9a,	// (0x0006d983) main_fs_bigclock_unlock_btn_pane_g

0x9046,	// (0x00066c2f) aid_dia3_key_size_ParamLimits

0x9046,	// (0x00066c2f) aid_dia3_key_size

0x905a,	// (0x00066c43) aid_dia3_listrow_size_ParamLimits

0x905a,	// (0x00066c43) aid_dia3_listrow_size

0x9074,	// (0x00066c5d) dia3_keypad_fun_pane_ParamLimits

0x9074,	// (0x00066c5d) dia3_keypad_fun_pane

0x908e,	// (0x00066c77) dia3_keypad_num_pane_ParamLimits

0x908e,	// (0x00066c77) dia3_keypad_num_pane

0x90a8,	// (0x00066c91) dia3_listscroll_pane_ParamLimits

0x90a8,	// (0x00066c91) dia3_listscroll_pane

0x90be,	// (0x00066ca7) dia3_numentry_pane_ParamLimits

0x90be,	// (0x00066ca7) dia3_numentry_pane

0xd087,	// (0x0006ac70) dia3_list_pane

0x90d8,	// (0x00066cc1) scroll_pane_cp12

0xe3de,	// (0x0006bfc7) bg_dia3_numentry_pane

0x90e3,	// (0x00066ccc) dia3_numentry_pane_t1

0x90f2,	// (0x00066cdb) cell_dia3_key_num_pane

0x90fa,	// (0x00066ce3) cell_dia3_key0_fun_pane_ParamLimits

0x90fa,	// (0x00066ce3) cell_dia3_key0_fun_pane

0x910e,	// (0x00066cf7) cell_dia3_key1_fun_pane_ParamLimits

0x910e,	// (0x00066cf7) cell_dia3_key1_fun_pane

0x9123,	// (0x00066d0c) dia3_listrow_pane

0xe1cd,	// (0x0006bdb6) bg_dia3_numentry_pane_g1

0xe3de,	// (0x0006bfc7) bg_button_pane_cp21

0x9135,	// (0x00066d1e) cell_dia3_key_num_pane_t1

0x9143,	// (0x00066d2c) cell_dia3_key_num_pane_t2

0x9143,	// (0x00066d2c) cell_dia3_key_num_pane_t3

0x9143,	// (0x00066d2c) cell_dia3_key_num_pane_t4

0x0003,

0xfdb6,	// (0x0006d99f) cell_dia3_key_num_pane_t

0xe3de,	// (0x0006bfc7) bg_button_pane_cp19

0x9152,	// (0x00066d3b) cell_dia3_key0_fun_pane_g1

0xe3de,	// (0x0006bfc7) bg_button_pane_cp20

0x915a,	// (0x00066d43) cell_dia3_key1_fun_pane_g1

0x9162,	// (0x00066d4b) area_left_week_number_pane

0x9170,	// (0x00066d59) area_top_day_name_pane

0x9183,	// (0x00066d6c) frame_month_view_pane

0xd092,	// (0x0006ac7b) grid_month_view_pane

0x9198,	// (0x00066d81) cell_top_day_name_pane_ParamLimits

0x9198,	// (0x00066d81) cell_top_day_name_pane

0x91c7,	// (0x00066db0) cell_area_left_week_number_pane_ParamLimits

0x91c7,	// (0x00066db0) cell_area_left_week_number_pane

0x91dd,	// (0x00066dc6) cell_month_view_pane_ParamLimits

0x91dd,	// (0x00066dc6) cell_month_view_pane

0xd0a0,	// (0x0006ac89) frm_month_g1

0x920e,	// (0x00066df7) frm_month_g2

0x9221,	// (0x00066e0a) frm_month_g3

0x9234,	// (0x00066e1d) frm_month_g4

0x9247,	// (0x00066e30) frm_month_g5

0x925a,	// (0x00066e43) frm_month_g6

0x926f,	// (0x00066e58) frm_month_g7

0xd0ad,	// (0x0006ac96) frm_month_g8

0x9284,	// (0x00066e6d) frm_month_g9

0x9294,	// (0x00066e7d) frm_month_g10

0x92a4,	// (0x00066e8d) frm_month_g11

0x92b4,	// (0x00066e9d) frm_month_g12

0x92c6,	// (0x00066eaf) frm_month_g13

0x92da,	// (0x00066ec3) frm_month_g14

0x92ee,	// (0x00066ed7) frm_month_g15

0x9302,	// (0x00066eeb) frm_month_g16

0x000f,

0xfdbf,	// (0x0006d9a8) frm_month_g

0xd0ba,	// (0x0006aca3) cell_top_day_name_pane_t1

0x9316,	// (0x00066eff) cell_area_left_week_number_pane_g1

0x9322,	// (0x00066f0b) cell_area_left_week_number_pane_t1

0xeeff,	// (0x0006cae8) cell_month_view_pane_g1

0x9335,	// (0x00066f1e) cell_month_view_pane_t1

0xe3de,	// (0x0006bfc7) main_fps_pane

0xe9a7,	// (0x0006c590) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe9a7,	// (0x0006c590) cmail_ddmenu_btn02_pane_cp1

0xe9c3,	// (0x0006c5ac) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe9c3,	// (0x0006c5ac) cmail_ddmenu_btn02_pane_cp2

0x8681,	// (0x0006626a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8681,	// (0x0006626a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcdd,	// (0x0006d8c6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcdd,	// (0x0006d8c6) cmail_ddmenu_btn02_pane_g

0x86a2,	// (0x0006628b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x86a2,	// (0x0006628b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfce2,	// (0x0006d8cb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfce2,	// (0x0006d8cb) cmail_ddmenu_btn02_pane_t

0x9348,	// (0x00066f31) fps_text_pane_ParamLimits

0x9348,	// (0x00066f31) fps_text_pane

0x935f,	// (0x00066f48) main_fps_pane_g1_ParamLimits

0x935f,	// (0x00066f48) main_fps_pane_g1

0x9377,	// (0x00066f60) wait_bar_pane_cp010_ParamLimits

0x9377,	// (0x00066f60) wait_bar_pane_cp010

0x938a,	// (0x00066f73) fps_text_pane_t1_ParamLimits

0x938a,	// (0x00066f73) fps_text_pane_t1

0xe783,	// (0x0006c36c) cam4_image_uncrop_pane_g1

0xe78c,	// (0x0006c375) cam4_image_uncrop_pane_g2

0x5568,	// (0x00063151) cam4_image_uncrop_pane_g3

0x5571,	// (0x0006315a) cam4_image_uncrop_pane_g4

0x0003,

0xf85b,	// (0x0006d444) cam4_image_uncrop_pane_g

0x9123,	// (0x00066d0c) dia3_listrow_pane_ParamLimits

0xe3de,	// (0x0006bfc7) main_phob2_pane

0x7deb,	// (0x000659d4) cell_tport_appsw_pane_cp02_ParamLimits

0x7deb,	// (0x000659d4) cell_tport_appsw_pane_cp02

0x7dff,	// (0x000659e8) cell_tport_appsw_pane_cp03_ParamLimits

0x7dff,	// (0x000659e8) cell_tport_appsw_pane_cp03

0xe3de,	// (0x0006bfc7) phob2_contact_card_pane

0xe3de,	// (0x0006bfc7) phob2_listscroll_pane

0xd0cd,	// (0x0006acb6) phob2_list_pane

0xd0d5,	// (0x0006acbe) scroll_pane_cp034

0x93a2,	// (0x00066f8b) phob2_cc_data_pane_ParamLimits

0x93a2,	// (0x00066f8b) phob2_cc_data_pane

0x93bb,	// (0x00066fa4) phob2_cc_listscroll_pane_ParamLimits

0x93bb,	// (0x00066fa4) phob2_cc_listscroll_pane

0x8ec5,	// (0x00066aae) list_double_large_graphic_phob2_pane_ParamLimits

0x8ec5,	// (0x00066aae) list_double_large_graphic_phob2_pane

0x93dd,	// (0x00066fc6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x93dd,	// (0x00066fc6) list_double_large_graphic_phob2_pane_g1

0x93ea,	// (0x00066fd3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x93ea,	// (0x00066fd3) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfde0,	// (0x0006d9c9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfde0,	// (0x0006d9c9) list_double_large_graphic_phob2_pane_g

0x9410,	// (0x00066ff9) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9410,	// (0x00066ff9) list_double_large_graphic_phob2_pane_t1

0x9425,	// (0x0006700e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9425,	// (0x0006700e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfde9,	// (0x0006d9d2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfde9,	// (0x0006d9d2) list_double_large_graphic_phob2_pane_t

0xe3de,	// (0x0006bfc7) list_highlight_pane_cp024

0x943a,	// (0x00067023) phob2_cc_button_pane

0x9444,	// (0x0006702d) phob2_cc_data_pane_g1_ParamLimits

0x9444,	// (0x0006702d) phob2_cc_data_pane_g1

0x945e,	// (0x00067047) phob2_cc_data_pane_g2_ParamLimits

0x945e,	// (0x00067047) phob2_cc_data_pane_g2

0x0001,

0xfdee,	// (0x0006d9d7) phob2_cc_data_pane_g_ParamLimits

0xfdee,	// (0x0006d9d7) phob2_cc_data_pane_g

0x9470,	// (0x00067059) phob2_cc_data_pane_t1_ParamLimits

0x9470,	// (0x00067059) phob2_cc_data_pane_t1

0x9490,	// (0x00067079) phob2_cc_data_pane_t2_ParamLimits

0x9490,	// (0x00067079) phob2_cc_data_pane_t2

0x94b0,	// (0x00067099) phob2_cc_data_pane_t3_ParamLimits

0x94b0,	// (0x00067099) phob2_cc_data_pane_t3

0x0002,

0xfdf3,	// (0x0006d9dc) phob2_cc_data_pane_t_ParamLimits

0xfdf3,	// (0x0006d9dc) phob2_cc_data_pane_t

0xd0dd,	// (0x0006acc6) phob2_cc_list_pane_ParamLimits

0xd0dd,	// (0x0006acc6) phob2_cc_list_pane

0xdc7f,	// (0x0006b868) scroll_pane_cp035_ParamLimits

0xdc7f,	// (0x0006b868) scroll_pane_cp035

0xe775,	// (0x0006c35e) bg_button_pane_cp033

0xd0e9,	// (0x0006acd2) phob2_cc_button_pane_g1

0xd0f5,	// (0x0006acde) phob2_cc_button_pane_t1

0xd10a,	// (0x0006acf3) phob2_cc_button_pane_t2

0x0001,

0xfdfa,	// (0x0006d9e3) phob2_cc_button_pane_t

0x94d0,	// (0x000670b9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x94d0,	// (0x000670b9) list_double_large_graphic_phob2_cc_pane

0x950e,	// (0x000670f7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x950e,	// (0x000670f7) list_double_large_graphic_phob2_cc_pane_g1

0x951a,	// (0x00067103) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x951a,	// (0x00067103) list_double_large_graphic_phob2_cc_pane_g2

0x9526,	// (0x0006710f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9526,	// (0x0006710f) list_double_large_graphic_phob2_cc_pane_g3

0x9532,	// (0x0006711b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9532,	// (0x0006711b) list_double_large_graphic_phob2_cc_pane_g4

0x953e,	// (0x00067127) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x953e,	// (0x00067127) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdff,	// (0x0006d9e8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdff,	// (0x0006d9e8) list_double_large_graphic_phob2_cc_pane_g

0x954a,	// (0x00067133) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x954a,	// (0x00067133) list_double_large_graphic_phob2_cc_pane_t1

0x9573,	// (0x0006715c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9573,	// (0x0006715c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe0a,	// (0x0006d9f3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe0a,	// (0x0006d9f3) list_double_large_graphic_phob2_cc_pane_t

0xd11c,	// (0x0006ad05) list_highlight_pane_cp025_ParamLimits

0xd11c,	// (0x0006ad05) list_highlight_pane_cp025

0xe775,	// (0x0006c35e) bg_button_pane_cp033_ParamLimits

0xd0e9,	// (0x0006acd2) phob2_cc_button_pane_g1_ParamLimits

0xd0f5,	// (0x0006acde) phob2_cc_button_pane_t1_ParamLimits

0xd10a,	// (0x0006acf3) phob2_cc_button_pane_t2_ParamLimits

0xfdfa,	// (0x0006d9e3) phob2_cc_button_pane_t_ParamLimits

0x0a0c,	// (0x0005e5f5) popup_wgtman_window

0xd74e,	// (0x0006b337) scroll_pane_cp038

0x8e3e,	// (0x00066a27) wgtman_btn_pane_cp_01_ParamLimits

0x8e3e,	// (0x00066a27) wgtman_btn_pane_cp_01

0xd12a,	// (0x0006ad13) wgtman_content_pane

0xd133,	// (0x0006ad1c) wgtman_heading_pane

0xe3de,	// (0x0006bfc7) bg_heading_pane_cp02

0xd13c,	// (0x0006ad25) wgtman_heading_pane_g1

0xd144,	// (0x0006ad2d) wgtman_heading_pane_t1

0xd152,	// (0x0006ad3b) scroll_pane_cp036

0xd15a,	// (0x0006ad43) wgtman_list_pane

0xe89a,	// (0x0006c483) wgtman_list_pane_t1_ParamLimits

0xe89a,	// (0x0006c483) wgtman_list_pane_t1

0xcdab,	// (0x0006a994) cam4_grid_pane

0x626b,	// (0x00063e54) bg_button_pane_cp015_ParamLimits

0x6282,	// (0x00063e6b) bg_button_pane_cp016_ParamLimits

0x628e,	// (0x00063e77) bg_button_pane_cp017_ParamLimits

0x62e9,	// (0x00063ed2) popup_vitu2_query_window_g3_ParamLimits

0x62e9,	// (0x00063ed2) popup_vitu2_query_window_g3

0x638c,	// (0x00063f75) popup_vitu2_query_window_t6_ParamLimits

0x638c,	// (0x00063f75) popup_vitu2_query_window_t6

0x63b7,	// (0x00063fa0) popup_vitu2_query_window_t7_ParamLimits

0x63b7,	// (0x00063fa0) popup_vitu2_query_window_t7

0xe783,	// (0x0006c36c) cam4_grid_pane_g1

0xe78c,	// (0x0006c375) cam4_grid_pane_g2

0xd162,	// (0x0006ad4b) cam4_grid_pane_g3

0xd16b,	// (0x0006ad54) cam4_grid_pane_g4

0x0003,

0xfe0f,	// (0x0006d9f8) cam4_grid_pane_g

0x164c,	// (0x0005f235) aid_placing_vt_slider_lsc_ParamLimits

0x1939,	// (0x0005f522) vidtel_button_pane_ParamLimits

0x1939,	// (0x0005f522) vidtel_button_pane

0xe3de,	// (0x0006bfc7) bg_button_pane_cp034

0xd176,	// (0x0006ad5f) vidtel_button_pane_g1

0xd17e,	// (0x0006ad67) vidtel_button_pane_t1

0xd85c,	// (0x0006b445) aid_size_vtel_slider_touch

0xdc7f,	// (0x0006b868) scroll_pane_cp039

0x718d,	// (0x00064d76) ncim_query_button_pane_cp01_ParamLimits

0x71ac,	// (0x00064d95) ncimui_query_pane_g1_ParamLimits

0xe775,	// (0x0006c35e) input_focus_pane_cp012_ParamLimits

0xe20b,	// (0x0006bdf4) ncim_query_entry_pane_t1_ParamLimits

0xdc7f,	// (0x0006b868) scroll_pane_cp039_ParamLimits

0x2aa2,	// (0x0006068b) navi_pane_bcale_mc_g1

0x2aaa,	// (0x00060693) navi_pane_bcale_mc_t1

0xe9f9,	// (0x0006c5e2) main_sp_fs_email_pane_g1

0xea05,	// (0x0006c5ee) main_sp_fs_email_pane_g2

0x0001,

0xfc12,	// (0x0006d7fb) main_sp_fs_email_pane_g

0x8347,	// (0x00065f30) list_single_cale_mrui_row_pane_g3_ParamLimits

0x8347,	// (0x00065f30) list_single_cale_mrui_row_pane_g3

0x8747,	// (0x00066330) list_single_recal_day_pane_g5_event_pane

0x875d,	// (0x00066346) list_single_recal_day_pane_g7

0xd194,	// (0x0006ad7d) list_recal_day_event_pane_cp01

0xd19d,	// (0x0006ad86) list_recal_vselct_arw_lo_pane_cp01

0xd1a5,	// (0x0006ad8e) list_recal_vselct_arw_up_pane_cp01

0xd1ad,	// (0x0006ad96) list_recal_vselct_pane_cp01

0xd87e,	// (0x0006b467) list_recal_day_event_pane_cp01_g1

0xd1b7,	// (0x0006ada0) list_recal_day_event_pane_cp01_t1

0x8765,	// (0x0006634e) list_single_recal_day_pane_t1_ParamLimits

0x8777,	// (0x00066360) list_single_recal_day_pane_t2_ParamLimits

0xfcf2,	// (0x0006d8db) list_single_recal_day_pane_t_ParamLimits

0xee84,	// (0x0006ca6d) bg_notes_pane_ParamLimits

0xef4f,	// (0x0006cb38) list_notes_pane_ParamLimits

0x0bfe,	// (0x0005e7e7) scroll_pane_cp06_ParamLimits

0xef71,	// (0x0006cb5a) main_notes_pane_ParamLimits

0xe775,	// (0x0006c35e) main_welc_pane

0x95cb,	// (0x000671b4) main_welc_body_pane_ParamLimits

0x95cb,	// (0x000671b4) main_welc_body_pane

0x95ea,	// (0x000671d3) main_welc_opti_pane_ParamLimits

0x95ea,	// (0x000671d3) main_welc_opti_pane

0x966b,	// (0x00067254) main_welc_pane_t1_ParamLimits

0x966b,	// (0x00067254) main_welc_pane_t1

0xd1d5,	// (0x0006adbe) main_welc_body_row_pane_ParamLimits

0xd1d5,	// (0x0006adbe) main_welc_body_row_pane

0xeef1,	// (0x0006cada) main_welc_opti_row_pane_ParamLimits

0xeef1,	// (0x0006cada) main_welc_opti_row_pane

0xd1ec,	// (0x0006add5) main_welc_opti_row_pane_g1

0x9860,	// (0x00067449) main_welc_opti_row_pane_t1

0xd1f4,	// (0x0006addd) main_welc_body_row_pane_t1

0xcf0a,	// (0x0006aaf3) popup_notif_wgt_heading_pane

0xcf24,	// (0x0006ab0d) aid_size_list_notif_wgt_del_ParamLimits

0xcf31,	// (0x0006ab1a) list_notif_wgt_row_pane_g1_ParamLimits

0xcf3d,	// (0x0006ab26) list_notif_wgt_row_pane_g2_ParamLimits

0xcf4c,	// (0x0006ab35) list_notif_wgt_row_pane_g3_ParamLimits

0xfd59,	// (0x0006d942) list_notif_wgt_row_pane_g_ParamLimits

0xcf59,	// (0x0006ab42) list_notif_wgt_row_pane_t1_ParamLimits

0xcf6f,	// (0x0006ab58) list_notif_wgt_row_pane_t2_ParamLimits

0xcf81,	// (0x0006ab6a) list_notif_wgt_row_pane_t3_ParamLimits

0xfd60,	// (0x0006d949) list_notif_wgt_row_pane_t_ParamLimits

0x8ed9,	// (0x00066ac2) listrow_wgtman_pane_g1_ParamLimits

0x8ee6,	// (0x00066acf) listrow_wgtman_pane_g2_ParamLimits

0xfd90,	// (0x0006d979) listrow_wgtman_pane_g_ParamLimits

0x8f04,	// (0x00066aed) listrow_wgtman_pane_t1_ParamLimits

0x8f1c,	// (0x00066b05) listrow_wgtman_pane_t2_ParamLimits

0xfd95,	// (0x0006d97e) listrow_wgtman_pane_t_ParamLimits

0x8f42,	// (0x00066b2b) wait_bar_pane_cp09_ParamLimits

0xe3de,	// (0x0006bfc7) bg_popup_heading_pane_cp02

0xd203,	// (0x0006adec) popup_notif_wgt_heading_pane_g1

0xd20b,	// (0x0006adf4) popup_notif_wgt_heading_pane_t1

0xe3de,	// (0x0006bfc7) main_vids_pane

0xe3de,	// (0x0006bfc7) vids_listscroll_pane

0x986f,	// (0x00067458) scroll_pane_cp040

0xe3de,	// (0x0006bfc7) vids_list_pane

0x987a,	// (0x00067463) vids_list_double_pane_ParamLimits

0x987a,	// (0x00067463) vids_list_double_pane

0x988d,	// (0x00067476) vids_list_double_pane_g1

0x9896,	// (0x0006747f) vids_list_double_pane_t1

0x98a6,	// (0x0006748f) vids_list_double_pane_t2

0x0001,

0xfe2e,	// (0x0006da17) vids_list_double_pane_t

0x9eb3,	// (0x00067a9c) main_ncimui_pane_ParamLimits

0x6fc3,	// (0x00064bac) main_ncimui_pane_g1_ParamLimits

0x6fcf,	// (0x00064bb8) main_ncimui_pane_g2_ParamLimits

0x6fcf,	// (0x00064bb8) main_ncimui_pane_g2

0x0001,

0xfb3e,	// (0x0006d727) main_ncimui_pane_g_ParamLimits

0xfb3e,	// (0x0006d727) main_ncimui_pane_g

0x9609,	// (0x000671f2) main_welc_pane_g1_ParamLimits

0x9609,	// (0x000671f2) main_welc_pane_g1

0x961e,	// (0x00067207) main_welc_pane_g2_ParamLimits

0x961e,	// (0x00067207) main_welc_pane_g2

0x0003,

0xfe18,	// (0x0006da01) main_welc_pane_g_ParamLimits

0xfe18,	// (0x0006da01) main_welc_pane_g

0x0be2,	// (0x0005e7cb) listscroll_mce_pane_ParamLimits

0x2b82,	// (0x0006076b) wait_bar_pane_cp10

0xbddd,	// (0x000699c6) main_cale_day_pane_ParamLimits

0xbddd,	// (0x000699c6) main_cale_week_pane_ParamLimits

0xee84,	// (0x0006ca6d) main_messa_pane_ParamLimits

0x494b,	// (0x00062534) main_clock2_btn_pane_ParamLimits

0x494b,	// (0x00062534) main_clock2_btn_pane

0xc6a7,	// (0x0006a290) main_clock2_btn_pane_cp01_ParamLimits

0xc6a7,	// (0x0006a290) main_clock2_btn_pane_cp01

0x8282,	// (0x00065e6b) list_cale_mrui_pane_ParamLimits

0xcfb7,	// (0x0006aba0) main_cf0_pane_g2

0x0001,

0xfd67,	// (0x0006d950) main_cf0_pane_g

0x9162,	// (0x00066d4b) area_left_week_number_pane_ParamLimits

0x9170,	// (0x00066d59) area_top_day_name_pane_ParamLimits

0x9183,	// (0x00066d6c) frame_month_view_pane_ParamLimits

0xd092,	// (0x0006ac7b) grid_month_view_pane_ParamLimits

0xd0a0,	// (0x0006ac89) frm_month_g1_ParamLimits

0x920e,	// (0x00066df7) frm_month_g2_ParamLimits

0x9221,	// (0x00066e0a) frm_month_g3_ParamLimits

0x9234,	// (0x00066e1d) frm_month_g4_ParamLimits

0x9247,	// (0x00066e30) frm_month_g5_ParamLimits

0x925a,	// (0x00066e43) frm_month_g6_ParamLimits

0x926f,	// (0x00066e58) frm_month_g7_ParamLimits

0xd0ad,	// (0x0006ac96) frm_month_g8_ParamLimits

0x9284,	// (0x00066e6d) frm_month_g9_ParamLimits

0x9294,	// (0x00066e7d) frm_month_g10_ParamLimits

0x92a4,	// (0x00066e8d) frm_month_g11_ParamLimits

0x92b4,	// (0x00066e9d) frm_month_g12_ParamLimits

0x92c6,	// (0x00066eaf) frm_month_g13_ParamLimits

0x92da,	// (0x00066ec3) frm_month_g14_ParamLimits

0x92ee,	// (0x00066ed7) frm_month_g15_ParamLimits

0x9302,	// (0x00066eeb) frm_month_g16_ParamLimits

0xfdbf,	// (0x0006d9a8) frm_month_g_ParamLimits

0xd0ba,	// (0x0006aca3) cell_top_day_name_pane_t1_ParamLimits

0x9316,	// (0x00066eff) cell_area_left_week_number_pane_g1_ParamLimits

0x9322,	// (0x00066f0b) cell_area_left_week_number_pane_t1_ParamLimits

0xeeff,	// (0x0006cae8) cell_month_view_pane_g1_ParamLimits

0x9335,	// (0x00066f1e) cell_month_view_pane_t1_ParamLimits

0xee7c,	// (0x0006ca65) main_clock2_btn_pane_g1

0xd219,	// (0x0006ae02) main_clock2_btn_pane_t1

0xe775,	// (0x0006c35e) listscroll_cmail_pane_ParamLimits

0xe9f9,	// (0x0006c5e2) main_sp_fs_email_pane_g1_ParamLimits

0xea05,	// (0x0006c5ee) main_sp_fs_email_pane_g2_ParamLimits

0xfc12,	// (0x0006d7fb) main_sp_fs_email_pane_g_ParamLimits

0x86b4,	// (0x0006629d) list_recal_day_pane_ParamLimits

0x86c5,	// (0x000662ae) mian_recal_day_pane_t1

0x7c32,	// (0x0006581b) list_single_dyc_row_text_pane_t4_ParamLimits

0x7c32,	// (0x0006581b) list_single_dyc_row_text_pane_t4

0x7c7b,	// (0x00065864) list_single_dyc_row_text_pane_t5_ParamLimits

0x7c7b,	// (0x00065864) list_single_dyc_row_text_pane_t5

0x7cf1,	// (0x000658da) list_single_dyc_row_text_pane_t6_ParamLimits

0x7cf1,	// (0x000658da) list_single_dyc_row_text_pane_t6

0x26d3,	// (0x000602bc) aid_mgn_list_cale_time_pane

0x9eb3,	// (0x00067a9c) main_gallery2_pane_ParamLimits

0xc6bb,	// (0x0006a2a4) main_clock2_pane_cp01_t1

0xc6c9,	// (0x0006a2b2) main_clock2_pane_cp01_t3

0x0001,

0xf732,	// (0x0006d31b) main_clock2_pane_cp01_t

0x101a,	// (0x0005ec03) cale_week_scroll_pane_g16_ParamLimits

0x101a,	// (0x0005ec03) cale_week_scroll_pane_g16

0xa006,	// (0x00067bef) vorec_slider_pane

0xd17e,	// (0x0006ad67) vidtel_button_pane_t1_ParamLimits

0x8903,	// (0x000664ec) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8903,	// (0x000664ec) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8916,	// (0x000664ff) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8916,	// (0x000664ff) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd15,	// (0x0006d8fe) main_fs_bigclock_clock_pane_g_ParamLimits

0x892d,	// (0x00066516) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8943,	// (0x0006652c) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd1e,	// (0x0006d907) main_fs_bigclock_clock_pane_t_ParamLimits

0x4191,	// (0x00061d7a) main_mup3_lyrics_pane_ParamLimits

0x4191,	// (0x00061d7a) main_mup3_lyrics_pane

0x98dc,	// (0x000674c5) main_mup3_lyrics_pane_t1_ParamLimits

0x98dc,	// (0x000674c5) main_mup3_lyrics_pane_t1

0xcaff,	// (0x0006a6e8) aid_main_mp4_pane_t1_area

0xcb09,	// (0x0006a6f2) aid_main_mp4_pane_t2_area

0xcbb5,	// (0x0006a79e) main_mp4_pane_g7_ParamLimits

0xcbb5,	// (0x0006a79e) main_mp4_pane_g7

0xcbc1,	// (0x0006a7aa) main_mp4_pane_g8_ParamLimits

0xcbc1,	// (0x0006a7aa) main_mp4_pane_g8

0x532f,	// (0x00062f18) aid_call6_pane_g1_size

0x94fe,	// (0x000670e7) list_double_large_graphic_phob2_other_pane_ParamLimits

0x94fe,	// (0x000670e7) list_double_large_graphic_phob2_other_pane

0x98f7,	// (0x000674e0) list_double_large_graphic_phob2_other_pane_g1

0xe3de,	// (0x0006bfc7) list_highlight_pane_cp026

0xe775,	// (0x0006c35e) main_welc_pane_ParamLimits

0x79f1,	// (0x000655da) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x79f1,	// (0x000655da) main_sp_fs_ctrlbar_pane_g3

0x7a0b,	// (0x000655f4) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7a0b,	// (0x000655f4) main_sp_fs_ctrlbar_pane_g4

0x7a3f,	// (0x00065628) toolbar2_fixed_button_pane_cp01

0x7a4a,	// (0x00065633) toolbar2_fixed_button_pane_cp02

0x7a57,	// (0x00065640) toolbar2_fixed_button_pane_cp03

0x95af,	// (0x00067198) list_welc_entry_pane_ParamLimits

0x95af,	// (0x00067198) list_welc_entry_pane

0x9633,	// (0x0006721c) main_welc_pane_g3_ParamLimits

0x9633,	// (0x0006721c) main_welc_pane_g3

0x968d,	// (0x00067276) main_welc_pane_t2_ParamLimits

0x968d,	// (0x00067276) main_welc_pane_t2

0x96a8,	// (0x00067291) main_welc_pane_t3_ParamLimits

0x96a8,	// (0x00067291) main_welc_pane_t3

0x0005,

0xfe21,	// (0x0006da0a) main_welc_pane_t_ParamLimits

0xfe21,	// (0x0006da0a) main_welc_pane_t

0x97e4,	// (0x000673cd) welc_button_pane_ParamLimits

0x97e4,	// (0x000673cd) welc_button_pane

0x984c,	// (0x00067435) welc_service_logo_pane_ParamLimits

0x984c,	// (0x00067435) welc_service_logo_pane

0x98ff,	// (0x000674e8) list_single_welc_entry_pane_ParamLimits

0x98ff,	// (0x000674e8) list_single_welc_entry_pane

0x9912,	// (0x000674fb) list_single_welc_entry_pane_g1

0x991a,	// (0x00067503) list_single_welc_entry_pane_t1

0x9928,	// (0x00067511) list_single_welc_entry_pane_t2

0x0001,

0xfe33,	// (0x0006da1c) list_single_welc_entry_pane_t

0xe3de,	// (0x0006bfc7) bg_button_pane_cp035

0xd227,	// (0x0006ae10) welc_button_pane_t1

0xd235,	// (0x0006ae1e) welc_service_logo_pane_g1

0xd23e,	// (0x0006ae27) welc_service_logo_pane_g2

0x0001,

0xfe38,	// (0x0006da21) welc_service_logo_pane_g

0x9ec1,	// (0x00067aaa) main_int_radio_pane

0xe0a9,	// (0x0006bc92) list_single_fs_dyc_pane_g1

0x93f6,	// (0x00066fdf) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x93f6,	// (0x00066fdf) list_double_large_graphic_phob2_pane_g3

0x9402,	// (0x00066feb) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9402,	// (0x00066feb) list_double_large_graphic_phob2_pane_g4

0x9936,	// (0x0006751f) main_int_radio1_pane_ParamLimits

0x9936,	// (0x0006751f) main_int_radio1_pane

0xd247,	// (0x0006ae30) find_pane_cp02

0x9953,	// (0x0006753c) input_focus_pane_cp12_ParamLimits

0x9953,	// (0x0006753c) input_focus_pane_cp12

0x9963,	// (0x0006754c) input_focus_pane_cp13_ParamLimits

0x9963,	// (0x0006754c) input_focus_pane_cp13

0x9977,	// (0x00067560) input_focus_pane_cp14_ParamLimits

0x9977,	// (0x00067560) input_focus_pane_cp14

0xd250,	// (0x0006ae39) int_radio1_listscroll_pane

0x998b,	// (0x00067574) main_int_radio1_pane_g1_ParamLimits

0x998b,	// (0x00067574) main_int_radio1_pane_g1

0x99a1,	// (0x0006758a) main_int_radio1_pane_t1_ParamLimits

0x99a1,	// (0x0006758a) main_int_radio1_pane_t1

0x99ba,	// (0x000675a3) main_int_radio1_pane_t2_ParamLimits

0x99ba,	// (0x000675a3) main_int_radio1_pane_t2

0x99d5,	// (0x000675be) main_int_radio1_pane_t3_ParamLimits

0x99d5,	// (0x000675be) main_int_radio1_pane_t3

0x99f0,	// (0x000675d9) main_int_radio1_pane_t4_ParamLimits

0x99f0,	// (0x000675d9) main_int_radio1_pane_t4

0xd25a,	// (0x0006ae43) main_int_radio1_pane_t5_ParamLimits

0xd25a,	// (0x0006ae43) main_int_radio1_pane_t5

0x9a02,	// (0x000675eb) main_int_radio1_pane_t6_ParamLimits

0x9a02,	// (0x000675eb) main_int_radio1_pane_t6

0x9a17,	// (0x00067600) main_int_radio1_pane_t7_ParamLimits

0x9a17,	// (0x00067600) main_int_radio1_pane_t7

0x9a2c,	// (0x00067615) main_int_radio1_pane_t8_ParamLimits

0x9a2c,	// (0x00067615) main_int_radio1_pane_t8

0x9a49,	// (0x00067632) main_int_radio1_pane_t9_ParamLimits

0x9a49,	// (0x00067632) main_int_radio1_pane_t9

0x9a5b,	// (0x00067644) main_int_radio1_pane_t10_ParamLimits

0x9a5b,	// (0x00067644) main_int_radio1_pane_t10

0x9a81,	// (0x0006766a) main_int_radio1_pane_t11_ParamLimits

0x9a81,	// (0x0006766a) main_int_radio1_pane_t11

0x9aa7,	// (0x00067690) main_int_radio1_pane_t12_ParamLimits

0x9aa7,	// (0x00067690) main_int_radio1_pane_t12

0x000b,

0xfe3d,	// (0x0006da26) main_int_radio1_pane_t_ParamLimits

0xfe3d,	// (0x0006da26) main_int_radio1_pane_t

0xd0cd,	// (0x0006acb6) int_radio_list_pane

0xd0d5,	// (0x0006acbe) scroll_pane_cp037

0xd26c,	// (0x0006ae55) list_double_large_graphic_int_radio_pane_ParamLimits

0xd26c,	// (0x0006ae55) list_double_large_graphic_int_radio_pane

0xd280,	// (0x0006ae69) list_double_large_graphic_int_radio_pane_g1

0xd289,	// (0x0006ae72) list_double_large_graphic_int_radio_pane_t1

0xd297,	// (0x0006ae80) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe56,	// (0x0006da3f) list_double_large_graphic_int_radio_pane_t

0xe3de,	// (0x0006bfc7) list_highlight_pane_cp027

0xd1c5,	// (0x0006adae) main_button_pane_4

0x9647,	// (0x00067230) main_welc_pane_g4_ParamLimits

0x9647,	// (0x00067230) main_welc_pane_g4

0x96c5,	// (0x000672ae) main_welc_pane_t4_ParamLimits

0x96c5,	// (0x000672ae) main_welc_pane_t4

0x96dc,	// (0x000672c5) main_welc_pane_t5_ParamLimits

0x96dc,	// (0x000672c5) main_welc_pane_t5

0x971d,	// (0x00067306) main_welc_pane_t6_ParamLimits

0x971d,	// (0x00067306) main_welc_pane_t6

0x97fb,	// (0x000673e4) welc_button_pane_2_ParamLimits

0x97fb,	// (0x000673e4) welc_button_pane_2

0x9815,	// (0x000673fe) welc_button_pane_3_ParamLimits

0x9815,	// (0x000673fe) welc_button_pane_3

0xd1cd,	// (0x0006adb6) welc_button_pane_4

0x9834,	// (0x0006741d) welc_button_pane_5_ParamLimits

0x9834,	// (0x0006741d) welc_button_pane_5

0x0810,	// (0x0005e3f9) main_popup_welc_pane

0xd2b4,	// (0x0006ae9d) main_welc_sk_g3

0xd2be,	// (0x0006aea7) main_welc_sk_g4

0xd2c8,	// (0x0006aeb1) main_welc_sk_t3

0xd2d8,	// (0x0006aec1) main_welc_sk_t4

0xd2e8,	// (0x0006aed1) popup_welc_pane_t4

0xd2f6,	// (0x0006aedf) popup_welc_pane_t5

0xd306,	// (0x0006aeef) popup_welc_pane_t6

0x9ec1,	// (0x00067aaa) main_acti_pane

0xe3de,	// (0x0006bfc7) main_sso_pane

0x9ab9,	// (0x000676a2) sso_body_pane_ParamLimits

0x9ab9,	// (0x000676a2) sso_body_pane

0x9ace,	// (0x000676b7) sso_logo_pane_ParamLimits

0x9ace,	// (0x000676b7) sso_logo_pane

0x9afe,	// (0x000676e7) sso_sk_pane_ParamLimits

0x9afe,	// (0x000676e7) sso_sk_pane

0xa05b,	// (0x00067c44) main_sso_logo_pane_g1

0x9b10,	// (0x000676f9) sso_sk_pane_t1_ParamLimits

0x9b10,	// (0x000676f9) sso_sk_pane_t1

0x9b2a,	// (0x00067713) sso_sk_pane_t2_ParamLimits

0x9b2a,	// (0x00067713) sso_sk_pane_t2

0x0001,

0xfe5b,	// (0x0006da44) sso_sk_pane_t_ParamLimits

0xfe5b,	// (0x0006da44) sso_sk_pane_t

0xd348,	// (0x0006af31) aid_sso_gap

0xd351,	// (0x0006af3a) aid_sso_txt1

0xd35b,	// (0x0006af44) aid_sso_txt2

0xd365,	// (0x0006af4e) aid_sso_txt3

0x0002,

0xfe60,	// (0x0006da49) aid_sso_txt

0xd36f,	// (0x0006af58) aid_sso_widget

0x9b94,	// (0x0006777d) sso_btn_pane_ParamLimits

0x9b94,	// (0x0006777d) sso_btn_pane

0x9c1c,	// (0x00067805) sso_option_pane_ParamLimits

0x9c1c,	// (0x00067805) sso_option_pane

0x9ca0,	// (0x00067889) sso_query_pane_ParamLimits

0x9ca0,	// (0x00067889) sso_query_pane

0x9cf8,	// (0x000678e1) sso_query_pane_cp01_ParamLimits

0x9cf8,	// (0x000678e1) sso_query_pane_cp01

0x9d56,	// (0x0006793f) sso_t_hdr_pane_ParamLimits

0x9d56,	// (0x0006793f) sso_t_hdr_pane

0x9d7a,	// (0x00067963) sso_t_nml_pane_ParamLimits

0x9d7a,	// (0x00067963) sso_t_nml_pane

0xd365,	// (0x0006af4e) sso_t_sub_pane

0x9adb,	// (0x000676c4) sso_popup_window_ParamLimits

0x9adb,	// (0x000676c4) sso_popup_window

0x9b40,	// (0x00067729) sso_apps_pane_ParamLimits

0x9b40,	// (0x00067729) sso_apps_pane

0x9b6a,	// (0x00067753) sso_body_pane_g1

0x9b74,	// (0x0006775d) sso_body_pane_t1

0x9b84,	// (0x0006776d) sso_body_pane_t2

0x0001,

0xfe67,	// (0x0006da50) sso_body_pane_t

0x9be6,	// (0x000677cf) sso_btn_pane_cp01_ParamLimits

0x9be6,	// (0x000677cf) sso_btn_pane_cp01

0x9c74,	// (0x0006785d) sso_prog_pane_ParamLimits

0x9c74,	// (0x0006785d) sso_prog_pane

0xd379,	// (0x0006af62) sso_t_hdr_pane_t1_ParamLimits

0xd379,	// (0x0006af62) sso_t_hdr_pane_t1

0xd38c,	// (0x0006af75) input_focus_pane_cp10_ParamLimits

0xd38c,	// (0x0006af75) input_focus_pane_cp10

0xd3a2,	// (0x0006af8b) sso_query_pane_t1_ParamLimits

0xd3a2,	// (0x0006af8b) sso_query_pane_t1

0xd3b5,	// (0x0006af9e) sso_query_pane_t2_ParamLimits

0xd3b5,	// (0x0006af9e) sso_query_pane_t2

0xd3cf,	// (0x0006afb8) sso_query_pane_t3_ParamLimits

0xd3cf,	// (0x0006afb8) sso_query_pane_t3

0xd3f9,	// (0x0006afe2) sso_query_pane_t4_ParamLimits

0xd3f9,	// (0x0006afe2) sso_query_pane_t4

0x0003,

0xfe6c,	// (0x0006da55) sso_query_pane_t_ParamLimits

0xfe6c,	// (0x0006da55) sso_query_pane_t

0xe3de,	// (0x0006bfc7) bg_button_pane_cp22

0xd2a5,	// (0x0006ae8e) sso_btn_pane_t1

0x9dd0,	// (0x000679b9) sso_t_nml_pane_t1_ParamLimits

0x9dd0,	// (0x000679b9) sso_t_nml_pane_t1

0xd41d,	// (0x0006b006) sso_option_row_pane_ParamLimits

0xd41d,	// (0x0006b006) sso_option_row_pane

0xd42a,	// (0x0006b013) sso_t_sub_pane_t1_ParamLimits

0xd42a,	// (0x0006b013) sso_t_sub_pane_t1

0xe775,	// (0x0006c35e) bg_popup_window_pane_cp11_ParamLimits

0xe775,	// (0x0006c35e) bg_popup_window_pane_cp11

0xd43d,	// (0x0006b026) popup_sk_window_cp01_ParamLimits

0xd43d,	// (0x0006b026) popup_sk_window_cp01

0xd44a,	// (0x0006b033) sso_popup_body_pane_ParamLimits

0xd44a,	// (0x0006b033) sso_popup_body_pane

0xd457,	// (0x0006b040) scroll_pane_cp21_ParamLimits

0xd457,	// (0x0006b040) scroll_pane_cp21

0xd464,	// (0x0006b04d) sso_popup_body_t_pane_ParamLimits

0xd464,	// (0x0006b04d) sso_popup_body_t_pane

0xd471,	// (0x0006b05a) sso_popup_body_t_hdr_pane_ParamLimits

0xd471,	// (0x0006b05a) sso_popup_body_t_hdr_pane

0xd47f,	// (0x0006b068) sso_popup_body_t_nml_pane_ParamLimits

0xd47f,	// (0x0006b068) sso_popup_body_t_nml_pane

0xd49a,	// (0x0006b083) sso_popup_body_t_sub_pane_ParamLimits

0xd49a,	// (0x0006b083) sso_popup_body_t_sub_pane

0xd4bd,	// (0x0006b0a6) sso_popup_body_t_hdr_pane_t1

0x9deb,	// (0x000679d4) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9deb,	// (0x000679d4) sso_popup_body_t_nml_pane_t1

0xd4cd,	// (0x0006b0b6) sso_popup_body_t_sub_pane_t1_ParamLimits

0xd4cd,	// (0x0006b0b6) sso_popup_body_t_sub_pane_t1

0xa05b,	// (0x00067c44) sso_prog_pane_g1

0x9e26,	// (0x00067a0f) sso_apps_pane_comp1_ParamLimits

0x9e26,	// (0x00067a0f) sso_apps_pane_comp1

0xd4f2,	// (0x0006b0db) sso_apps_pane_comp1_g1

0xd4fa,	// (0x0006b0e3) sso_apps_pane_comp1_t1

0xd508,	// (0x0006b0f1) sso_option_row_pane_g1

0xd510,	// (0x0006b0f9) sso_option_row_pane_t1

0x959c,	// (0x00067185) bg_welc_area_ParamLimits

0x959c,	// (0x00067185) bg_welc_area

0x975b,	// (0x00067344) sso_t_hdr_pane_a_t1_ParamLimits

0x975b,	// (0x00067344) sso_t_hdr_pane_a_t1

0x9776,	// (0x0006735f) sso_t_nml_pane_a_t1_ParamLimits

0x9776,	// (0x0006735f) sso_t_nml_pane_a_t1

0x97a9,	// (0x00067392) sso_t_sub_pane_a_t1_ParamLimits

0x97a9,	// (0x00067392) sso_t_sub_pane_a_t1

0xd2a5,	// (0x0006ae8e) sso_btn_pane_t1_copy1

0xe3de,	// (0x0006bfc7) welc_button_pane_2_comp1

0xd316,	// (0x0006aeff) sso_t_hdr_pane_p_t1

0xd326,	// (0x0006af0f) sso_t_nml_pane_p_t1

0xd336,	// (0x0006af1f) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
