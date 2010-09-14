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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00091d14 };

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
0x07de,	// (0x000924f2) Screen

0x07ea,	// (0x000924fe) application_window

0x0826,	// (0x0009253a) area_bottom_pane_ParamLimits

0x0826,	// (0x0009253a) area_bottom_pane

0x085f,	// (0x00092573) area_top_pane_ParamLimits

0x085f,	// (0x00092573) area_top_pane

0xa2ab,	// (0x0009bfbf) call_video_uplink_pane_ParamLimits

0xa2ab,	// (0x0009bfbf) call_video_uplink_pane

0x08ed,	// (0x00092601) main_pane_ParamLimits

0x08ed,	// (0x00092601) main_pane

0x444a,	// (0x0009615e) context_pane

0x445d,	// (0x00096171) navi_pane

0x4494,	// (0x000961a8) popup_cale_events_window_ParamLimits

0x4494,	// (0x000961a8) popup_cale_events_window

0x44ac,	// (0x000961c0) popup_mup_playback_window

0x44b4,	// (0x000961c8) signal_pane

0xef71,	// (0x000a0c85) main_browser_pane

0xd34c,	// (0x0009f060) main_burst_pane

0x4146,	// (0x00095e5a) main_calc_pane

0x415a,	// (0x00095e6e) main_cale_day_pane

0x4166,	// (0x00095e7a) main_cale_month_pane

0x415a,	// (0x00095e6e) main_cale_week_pane

0xd34c,	// (0x0009f060) main_call_pane

0xec29,	// (0x000a093d) main_call_poc_pane

0xd34c,	// (0x0009f060) main_camera_pane

0xd34c,	// (0x0009f060) main_chi_dic_pane

0xdb91,	// (0x0009f8a5) main_clock_pane

0xec29,	// (0x000a093d) main_fmradio_pane

0xd34c,	// (0x0009f060) main_graph_messa_pane

0xec29,	// (0x000a093d) main_help_pane

0xef71,	// (0x000a0c85) main_im_pane

0xee84,	// (0x000a0b98) main_image_pane_ParamLimits

0xee84,	// (0x000a0b98) main_image_pane

0xec29,	// (0x000a093d) main_location2_pane

0xd34c,	// (0x0009f060) main_location_pane

0xee84,	// (0x000a0b98) main_messa_pane

0xec29,	// (0x000a093d) main_mp2_pane

0xd34c,	// (0x0009f060) main_mp_pane

0xec29,	// (0x000a093d) main_msg_pane

0xec29,	// (0x000a093d) main_mup_eq_pane

0xec29,	// (0x000a093d) main_mup_pane

0xef71,	// (0x000a0c85) main_notes_pane

0xec29,	// (0x000a093d) main_pec_pane

0xec29,	// (0x000a093d) main_phob_pane

0xec29,	// (0x000a093d) main_pinb_pane

0xec29,	// (0x000a093d) main_postcard_pane

0xec29,	// (0x000a093d) main_qdial_pane

0xd34c,	// (0x0009f060) main_skin_pane

0xec29,	// (0x000a093d) main_smil2_pane

0xd34c,	// (0x0009f060) main_smil_pane

0xd34c,	// (0x0009f060) main_video_pane

0xd34c,	// (0x0009f060) main_video_tele_pane

0xee84,	// (0x000a0b98) main_viewer_pane_ParamLimits

0xee84,	// (0x000a0b98) main_viewer_pane

0xd34c,	// (0x0009f060) main_vorec_pane

0x41b8,	// (0x00095ecc) popup_blid_sat_info_window_ParamLimits

0x41b8,	// (0x00095ecc) popup_blid_sat_info_window

0x421c,	// (0x00095f30) popup_dyc_status_message_window_ParamLimits

0x421c,	// (0x00095f30) popup_dyc_status_message_window

0x4236,	// (0x00095f4a) popup_grid_large_graphic_window_ParamLimits

0x4236,	// (0x00095f4a) popup_grid_large_graphic_window

0x42f8,	// (0x0009600c) popup_loc_request_window_ParamLimits

0x42f8,	// (0x0009600c) popup_loc_request_window

0x441e,	// (0x00096132) popup_wml_address_window_ParamLimits

0x441e,	// (0x00096132) popup_wml_address_window

0x3f4b,	// (0x00095c5f) call_muted_g1

0x334d,	// (0x00095061) popup_call_audio_conf_window_ParamLimits

0x334d,	// (0x00095061) popup_call_audio_conf_window

0x3f5b,	// (0x00095c6f) popup_call_audio_first_window_ParamLimits

0x3f5b,	// (0x00095c6f) popup_call_audio_first_window

0x3fd1,	// (0x00095ce5) popup_call_audio_in_window_ParamLimits

0x3fd1,	// (0x00095ce5) popup_call_audio_in_window

0x400d,	// (0x00095d21) popup_call_audio_out_window_ParamLimits

0x400d,	// (0x00095d21) popup_call_audio_out_window

0x4047,	// (0x00095d5b) popup_call_audio_second_window_ParamLimits

0x4047,	// (0x00095d5b) popup_call_audio_second_window

0x409d,	// (0x00095db1) popup_call_audio_wait_window_ParamLimits

0x409d,	// (0x00095db1) popup_call_audio_wait_window

0x40d2,	// (0x00095de6) popup_number_entry_window_ParamLimits

0x40d2,	// (0x00095de6) popup_number_entry_window

0xe156,	// (0x0009fe6a) bg_popup_call_pane_cp05_ParamLimits

0xe156,	// (0x0009fe6a) bg_popup_call_pane_cp05

0xe176,	// (0x0009fe8a) popup_number_entry_window_t1

0xe189,	// (0x0009fe9d) popup_number_entry_window_t2

0xe19b,	// (0x0009feaf) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x000a0d7f) popup_number_entry_window_t

0xe1e2,	// (0x0009fef6) text_title_cp2

0xe1f5,	// (0x0009ff09) bg_popup_call_pane_cp_ParamLimits

0xe1f5,	// (0x0009ff09) bg_popup_call_pane_cp

0xe203,	// (0x0009ff17) call_thumbnail_pane

0xe20b,	// (0x0009ff1f) popup_call_audio_in_window_g1_ParamLimits

0xe20b,	// (0x0009ff1f) popup_call_audio_in_window_g1

0xe8a2,	// (0x000a05b6) popup_call_audio_in_window_g2_ParamLimits

0xe8a2,	// (0x000a05b6) popup_call_audio_in_window_g2

0xe8ae,	// (0x000a05c2) popup_call_audio_in_window_g3_ParamLimits

0xe8ae,	// (0x000a05c2) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x000a0d88) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x000a0d88) popup_call_audio_in_window_g

0xe8ba,	// (0x000a05ce) popup_call_audio_in_window_t1_ParamLimits

0xe8ba,	// (0x000a05ce) popup_call_audio_in_window_t1

0xe8d6,	// (0x000a05ea) popup_call_audio_in_window_t2_ParamLimits

0xe8d6,	// (0x000a05ea) popup_call_audio_in_window_t2

0xe8f2,	// (0x000a0606) popup_call_audio_in_window_t3_ParamLimits

0xe8f2,	// (0x000a0606) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x000a0d8f) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x000a0d8f) popup_call_audio_in_window_t

0xe1f5,	// (0x0009ff09) bg_popup_call_pane_cp01_ParamLimits

0xe1f5,	// (0x0009ff09) bg_popup_call_pane_cp01

0xe203,	// (0x0009ff17) call_thumbnail_pane_cp02

0xe905,	// (0x000a0619) call_type_pane_cp022

0xe90d,	// (0x000a0621) popup_call_audio_out_window_g1_ParamLimits

0xe90d,	// (0x000a0621) popup_call_audio_out_window_g1

0xe91f,	// (0x000a0633) popup_call_audio_out_window_g2_ParamLimits

0xe91f,	// (0x000a0633) popup_call_audio_out_window_g2

0xe92b,	// (0x000a063f) popup_call_audio_out_window_g3_ParamLimits

0xe92b,	// (0x000a063f) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x000a0d96) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x000a0d96) popup_call_audio_out_window_g

0xe93d,	// (0x000a0651) popup_call_audio_out_window_t1_ParamLimits

0xe93d,	// (0x000a0651) popup_call_audio_out_window_t1

0xe955,	// (0x000a0669) popup_call_audio_out_window_t2_ParamLimits

0xe955,	// (0x000a0669) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x000a0d9d) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x000a0d9d) popup_call_audio_out_window_t

0xe96a,	// (0x000a067e) bg_popup_call_pane_ParamLimits

0xe96a,	// (0x000a067e) bg_popup_call_pane

0x0a74,	// (0x00092788) call_thumbnail_pane_cp_ParamLimits

0x0a74,	// (0x00092788) call_thumbnail_pane_cp

0xe9ee,	// (0x000a0702) call_type_pane_cp01_ParamLimits

0xe9ee,	// (0x000a0702) call_type_pane_cp01

0xea32,	// (0x000a0746) popup_call_audio_first_window_g1_ParamLimits

0xea32,	// (0x000a0746) popup_call_audio_first_window_g1

0xea7e,	// (0x000a0792) popup_call_audio_first_window_g2_ParamLimits

0xea7e,	// (0x000a0792) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x000a0da2) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x000a0da2) popup_call_audio_first_window_g

0xeac2,	// (0x000a07d6) popup_call_audio_first_window_t1_ParamLimits

0xeac2,	// (0x000a07d6) popup_call_audio_first_window_t1

0xeb6e,	// (0x000a0882) popup_call_audio_first_window_t4_ParamLimits

0xeb6e,	// (0x000a0882) popup_call_audio_first_window_t4

0xebfa,	// (0x000a090e) popup_call_audio_first_window_t5_ParamLimits

0xebfa,	// (0x000a090e) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x000a0da7) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x000a0da7) popup_call_audio_first_window_t

0xec29,	// (0x000a093d) bg_popup_call_pane_cp02

0xec33,	// (0x000a0947) call_type_pane_cp023

0xec3b,	// (0x000a094f) popup_call_audio_wait_window_g1

0xec43,	// (0x000a0957) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x000a0dae) popup_call_audio_wait_window_g

0xec4b,	// (0x000a095f) popup_call_audio_wait_window_t3

0xec59,	// (0x000a096d) bg_popup_call_pane_cp03_ParamLimits

0xec59,	// (0x000a096d) bg_popup_call_pane_cp03

0xecb9,	// (0x000a09cd) call_thumbnail_pane_cp011_ParamLimits

0xecb9,	// (0x000a09cd) call_thumbnail_pane_cp011

0xecc5,	// (0x000a09d9) call_type_pane_cp034_ParamLimits

0xecc5,	// (0x000a09d9) call_type_pane_cp034

0xed01,	// (0x000a0a15) popup_call_audio_second_window_g1_ParamLimits

0xed01,	// (0x000a0a15) popup_call_audio_second_window_g1

0xed3d,	// (0x000a0a51) popup_call_audio_second_window_g2_ParamLimits

0xed3d,	// (0x000a0a51) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x000a0db3) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x000a0db3) popup_call_audio_second_window_g

0xed79,	// (0x000a0a8d) popup_call_audio_second_window_t1_ParamLimits

0xed79,	// (0x000a0a8d) popup_call_audio_second_window_t1

0xedfa,	// (0x000a0b0e) popup_call_audio_second_window_t2_ParamLimits

0xedfa,	// (0x000a0b0e) popup_call_audio_second_window_t2

0xee30,	// (0x000a0b44) popup_call_audio_second_window_t3_ParamLimits

0xee30,	// (0x000a0b44) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x000a0db8) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x000a0db8) popup_call_audio_second_window_t

0xec29,	// (0x000a093d) bg_popup_call_pane_cp04

0xee66,	// (0x000a0b7a) list_conf_pane

0xee6e,	// (0x000a0b82) popup_call_audio_conf_window_t1

0xee7c,	// (0x000a0b90) call_thumbnail_pane_g1

0xee84,	// (0x000a0b98) bg_pinb_pane_ParamLimits

0xee84,	// (0x000a0b98) bg_pinb_pane

0xee92,	// (0x000a0ba6) find_pinb_pane

0xee84,	// (0x000a0b98) listscroll_pinb_pane_ParamLimits

0xee84,	// (0x000a0b98) listscroll_pinb_pane

0xee9c,	// (0x000a0bb0) pinb_bg_pane_g1

0xee9c,	// (0x000a0bb0) pinb_bg_pane_g2

0xee9c,	// (0x000a0bb0) pinb_bg_pane_g3

0xee9c,	// (0x000a0bb0) pinb_bg_pane_g4

0xee9c,	// (0x000a0bb0) pinb_bg_pane_g5

0xee9c,	// (0x000a0bb0) pinb_bg_pane_g6

0xee9c,	// (0x000a0bb0) pinb_bg_pane_g7

0xee9c,	// (0x000a0bb0) pinb_bg_pane_g8

0xee9c,	// (0x000a0bb0) pinb_bg_pane_g9

0xee9c,	// (0x000a0bb0) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x000a0dbf) pinb_bg_pane_g

0xe14c,	// (0x0009fe60) grid_pinb_pane

0xe14c,	// (0x0009fe60) list_pinb_pane

0xe217,	// (0x0009ff2b) scroll_pane_cp01_ParamLimits

0xe217,	// (0x0009ff2b) scroll_pane_cp01

0xeea6,	// (0x000a0bba) find_pinb_pane_g1_ParamLimits

0xeea6,	// (0x000a0bba) find_pinb_pane_g1

0xeebe,	// (0x000a0bd2) find_pinb_pane_t1

0xeed0,	// (0x000a0be4) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x000a0dd9) find_pinb_pane_t

0xeee5,	// (0x000a0bf9) input_focus_pane_cp01_ParamLimits

0xeee5,	// (0x000a0bf9) input_focus_pane_cp01

0xeef1,	// (0x000a0c05) cell_pinb_pane_ParamLimits

0xeef1,	// (0x000a0c05) cell_pinb_pane

0xeeff,	// (0x000a0c13) cell_pinb_pane_g1_ParamLimits

0xeeff,	// (0x000a0c13) cell_pinb_pane_g1

0xef0d,	// (0x000a0c21) cell_pinb_pane_g2_ParamLimits

0xef0d,	// (0x000a0c21) cell_pinb_pane_g2

0xef0d,	// (0x000a0c21) cell_pinb_pane_g3_ParamLimits

0xef0d,	// (0x000a0c21) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x000a0dde) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x000a0dde) cell_pinb_pane_g

0xec29,	// (0x000a093d) grid_highlight_pane_cp01

0xeef1,	// (0x000a0c05) list_pinb_item_pane_ParamLimits

0xeef1,	// (0x000a0c05) list_pinb_item_pane

0xe14c,	// (0x0009fe60) list_highlight_pane_cp02

0xef1b,	// (0x000a0c2f) list_pinb_item_pane_g1_ParamLimits

0xef1b,	// (0x000a0c2f) list_pinb_item_pane_g1

0xef0d,	// (0x000a0c21) list_pinb_item_pane_g2_ParamLimits

0xef0d,	// (0x000a0c21) list_pinb_item_pane_g2

0xeeff,	// (0x000a0c13) list_pinb_item_pane_g3_ParamLimits

0xeeff,	// (0x000a0c13) list_pinb_item_pane_g3

0xef0d,	// (0x000a0c21) list_pinb_item_pane_g4_ParamLimits

0xef0d,	// (0x000a0c21) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x000a0de5) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x000a0de5) list_pinb_item_pane_g

0xef29,	// (0x000a0c3d) list_pinb_item_pane_t1_ParamLimits

0xef29,	// (0x000a0c3d) list_pinb_item_pane_t1

0x0ab8,	// (0x000927cc) calc_display_pane

0x0add,	// (0x000927f1) calc_paper_pane

0x0b00,	// (0x00092814) grid_calc_pane

0xec29,	// (0x000a093d) bg_list_pane_cp01

0x0b2e,	// (0x00092842) clock_g1

0x0b36,	// (0x0009284a) clock_g2

0x0001,

0xf0da,	// (0x000a0dee) clock_g

0x0b3e,	// (0x00092852) clock_t1_ParamLimits

0x0b3e,	// (0x00092852) clock_t1

0x0b53,	// (0x00092867) clock_t2_ParamLimits

0x0b53,	// (0x00092867) clock_t2

0x0b65,	// (0x00092879) clock_t3_ParamLimits

0x0b65,	// (0x00092879) clock_t3

0x0b77,	// (0x0009288b) clock_t4_ParamLimits

0x0b77,	// (0x0009288b) clock_t4

0x0b89,	// (0x0009289d) clock_t5_ParamLimits

0x0b89,	// (0x0009289d) clock_t5

0x0b9e,	// (0x000928b2) clock_t6_ParamLimits

0x0b9e,	// (0x000928b2) clock_t6

0x0bb0,	// (0x000928c4) clock_t7_ParamLimits

0x0bb0,	// (0x000928c4) clock_t7

0x0bc2,	// (0x000928d6) clock_t8_ParamLimits

0x0bc2,	// (0x000928d6) clock_t8

0x0bd6,	// (0x000928ea) clock_t9_ParamLimits

0x0bd6,	// (0x000928ea) clock_t9

0x0008,

0xf0df,	// (0x000a0df3) clock_t_ParamLimits

0xf0df,	// (0x000a0df3) clock_t

0xef3d,	// (0x000a0c51) popup_clock_analogue_window_cp02

0xef3d,	// (0x000a0c51) popup_clock_digital_window_cp01

0xec29,	// (0x000a093d) listscroll_help_pane

0xec29,	// (0x000a093d) phob_pre_status_pane

0xef45,	// (0x000a0c59) grid_qdial_pane

0x0bec,	// (0x00092900) listscroll_mce_pane

0xee84,	// (0x000a0b98) bg_notes_pane

0xef4f,	// (0x000a0c63) list_notes_pane

0x0c08,	// (0x0009291c) scroll_pane_cp06

0xef5d,	// (0x000a0c71) bg_calc_paper_pane

0xa2e9,	// (0x0009bffd) list_calc_pane

0xef71,	// (0x000a0c85) bg_calc_display_pane

0x0c1c,	// (0x00092930) calc_display_pane_t1

0x0c2e,	// (0x00092942) calc_display_pane_t2

0xa303,	// (0x0009c017) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x000a0e06) calc_display_pane_t

0x0c40,	// (0x00092954) cell_calc_pane_ParamLimits

0x0c40,	// (0x00092954) cell_calc_pane

0xef7d,	// (0x000a0c91) bg_calc_paper_pane_g1

0xef89,	// (0x000a0c9d) bg_calc_paper_pane_g2

0xef95,	// (0x000a0ca9) bg_calc_paper_pane_g3

0xefa1,	// (0x000a0cb5) bg_calc_paper_pane_g4

0xefad,	// (0x000a0cc1) bg_calc_paper_pane_g5

0x0c7b,	// (0x0009298f) bg_calc_paper_pane_g6

0x0c89,	// (0x0009299d) bg_calc_paper_pane_g7

0x0c97,	// (0x000929ab) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x000a0e0d) bg_calc_paper_pane_g

0x0caa,	// (0x000929be) calc_bg_paper_pane_g9

0x0cbd,	// (0x000929d1) list_calc_item_pane_ParamLimits

0x0cbd,	// (0x000929d1) list_calc_item_pane

0xefb9,	// (0x000a0ccd) list_calc_item_pane_g1

0xa315,	// (0x0009c029) list_calc_item_pane_t1_ParamLimits

0xa315,	// (0x0009c029) list_calc_item_pane_t1

0x0cd5,	// (0x000929e9) list_calc_item_pane_t2_ParamLimits

0x0cd5,	// (0x000929e9) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x000a0e1e) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x000a0e1e) list_calc_item_pane_t

0xee9c,	// (0x000a0bb0) cell_calc_pane_g1

0xefc6,	// (0x000a0cda) grid_highlight_pane_cp02

0x0d07,	// (0x00092a1b) bg_calc_display_pane_g1

0x0d10,	// (0x00092a24) bg_calc_display_pane_g2

0xeff4,	// (0x000a0d08) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x000a0e28) bg_calc_display_pane_g

0x0d1a,	// (0x00092a2e) cell_qdial_pane_ParamLimits

0x0d1a,	// (0x00092a2e) cell_qdial_pane

0x0d2e,	// (0x00092a42) cell_qdial_pane_g1_ParamLimits

0x0d2e,	// (0x00092a42) cell_qdial_pane_g1

0x0d44,	// (0x00092a58) cell_qdial_pane_g2_ParamLimits

0x0d44,	// (0x00092a58) cell_qdial_pane_g2

0xefe8,	// (0x000a0cfc) cell_qdial_pane_g3_ParamLimits

0xefe8,	// (0x000a0cfc) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x000a0e2f) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x000a0e2f) cell_qdial_pane_g

0x0d6b,	// (0x00092a7f) cell_qdial_pane_t1_ParamLimits

0x0d6b,	// (0x00092a7f) cell_qdial_pane_t1

0x0d83,	// (0x00092a97) cell_qdial_pane_t2_ParamLimits

0x0d83,	// (0x00092a97) cell_qdial_pane_t2

0x0d96,	// (0x00092aaa) cell_qdial_pane_t3_ParamLimits

0x0d96,	// (0x00092aaa) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x000a0e38) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x000a0e38) cell_qdial_pane_t

0xec29,	// (0x000a093d) grid_highlight_pane_cp04

0xeffd,	// (0x000a0d11) thumbnail_qdial_pane_ParamLimits

0xeffd,	// (0x000a0d11) thumbnail_qdial_pane

0xf059,	// (0x000a0d6d) list_help_pane

0xf062,	// (0x000a0d76) scroll_pane_cp02

0x0da9,	// (0x00092abd) help_list_pane_t1_ParamLimits

0x0da9,	// (0x00092abd) help_list_pane_t1

0xa327,	// (0x0009c03b) bg_notes_pane_g2

0xa32f,	// (0x0009c043) bg_notes_pane_g3

0xa337,	// (0x0009c04b) notes_bg_pane_g1

0xa33f,	// (0x0009c053) notes_bg_pane_g4

0xa347,	// (0x0009c05b) notes_bg_pane_g5

0xa34f,	// (0x0009c063) notes_bg_pane_g6

0xa357,	// (0x0009c06b) notes_bg_pane_g7

0xa35f,	// (0x0009c073) notes_bg_pane_g8

0xa367,	// (0x0009c07b) notes_bg_pane_g9

0x0006,

0xf142,	// (0x000a0e56) notes_bg_pane_g

0x0dcd,	// (0x00092ae1) list_notes_text_pane_ParamLimits

0x0dcd,	// (0x00092ae1) list_notes_text_pane

0xd29f,	// (0x0009efb3) list_notes_text_pane_g1

0x0de4,	// (0x00092af8) list_notes_text_pane_t1

0x0df2,	// (0x00092b06) listscroll_cale_week_pane

0x0e1c,	// (0x00092b30) bg_cale_heading_pane

0x0e40,	// (0x00092b54) bg_cale_pane_cp01

0x0e5d,	// (0x00092b71) cale_week_corner_pane

0x0e7c,	// (0x00092b90) cale_week_day_heading_pane

0x0ea5,	// (0x00092bb9) cale_week_scroll_pane_g1

0x0ec4,	// (0x00092bd8) cale_week_scroll_pane_g2

0x0edc,	// (0x00092bf0) cale_week_scroll_pane_g3

0x0ef4,	// (0x00092c08) cale_week_scroll_pane_g4

0x0f0c,	// (0x00092c20) cale_week_scroll_pane_g5

0x0f2c,	// (0x00092c40) cale_week_scroll_pane_g6

0x0f4c,	// (0x00092c60) cale_week_scroll_pane_g7

0x0f70,	// (0x00092c84) cale_week_scroll_pane_g8

0x0f94,	// (0x00092ca8) cale_week_scroll_pane_g9

0x0fac,	// (0x00092cc0) cale_week_scroll_pane_g10

0x0fc4,	// (0x00092cd8) cale_week_scroll_pane_g11

0x0fdc,	// (0x00092cf0) cale_week_scroll_pane_g12

0x1000,	// (0x00092d14) cale_week_scroll_pane_g13

0x1000,	// (0x00092d14) cale_week_scroll_pane_g14

0x1000,	// (0x00092d14) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x000a0e65) cale_week_scroll_pane_g

0x1048,	// (0x00092d5c) cale_week_time_pane

0x106c,	// (0x00092d80) grid_cale_week_pane

0xd2d4,	// (0x0009efe8) scroll_pane_cp08

0x109e,	// (0x00092db2) cell_cale_week_pane_ParamLimits

0x109e,	// (0x00092db2) cell_cale_week_pane

0x113a,	// (0x00092e4e) cale_week_day_heading_pane_t1

0x1164,	// (0x00092e78) cale_week_day_heading_pane_t2

0x1193,	// (0x00092ea7) cale_week_day_heading_pane_t3

0x11c2,	// (0x00092ed6) cale_week_day_heading_pane_t4

0x11f1,	// (0x00092f05) cale_week_day_heading_pane_t5

0x1224,	// (0x00092f38) cale_week_day_heading_pane_t6

0x125b,	// (0x00092f6f) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x000a0e86) cale_week_day_heading_pane_t

0xd2f1,	// (0x0009f005) bg_cale_side_pane

0x1285,	// (0x00092f99) cale_week_time_pane_t1

0x129f,	// (0x00092fb3) cale_week_time_pane_t2

0x12b9,	// (0x00092fcd) cale_week_time_pane_t3

0x12d3,	// (0x00092fe7) cale_week_time_pane_t4

0x12ed,	// (0x00093001) cale_week_time_pane_t5

0x1307,	// (0x0009301b) cale_week_time_pane_t6

0x1327,	// (0x0009303b) cale_week_time_pane_t7

0x134d,	// (0x00093061) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x000a0e95) cale_week_time_pane_t

0x1373,	// (0x00093087) cell_cale_week_pane_g2

0x1397,	// (0x000930ab) cell_cale_week_pane_g3_ParamLimits

0x1397,	// (0x000930ab) cell_cale_week_pane_g3

0xd2ff,	// (0x0009f013) grid_highlight_pane_cp07

0xd307,	// (0x0009f01b) listscroll_gms_pane

0xd311,	// (0x0009f025) grid_gms_pane

0xd31a,	// (0x0009f02e) listscroll_gms_pane_g1

0xd322,	// (0x0009f036) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x000a0ea6) listscroll_gms_pane_g

0x13af,	// (0x000930c3) scroll_pane_cp010

0x13ba,	// (0x000930ce) cell_gms_pane_ParamLimits

0x13ba,	// (0x000930ce) cell_gms_pane

0x13d1,	// (0x000930e5) cell_gms_pane_g1

0xd32a,	// (0x0009f03e) cell_gms_pane_g2

0xd332,	// (0x0009f046) cell_gms_pane_g3

0xd33b,	// (0x0009f04f) cell_gms_pane_g4

0x0003,

0xf197,	// (0x000a0eab) cell_gms_pane_g

0xd344,	// (0x0009f058) grid_highlight_pane_cp09

0x3ecf,	// (0x00095be3) phob_pre_status_pane_g1

0x3ed7,	// (0x00095beb) phob_pre_status_pane_g2

0x3edf,	// (0x00095bf3) phob_pre_status_pane_g3

0x3ee7,	// (0x00095bfb) phob_pre_status_pane_g4

0x0004,

0xf55b,	// (0x000a126f) phob_pre_status_pane_g

0x3ef7,	// (0x00095c0b) phob_pre_status_pane_t1

0x3f07,	// (0x00095c1b) phob_pre_status_pane_t2

0x3f17,	// (0x00095c2b) phob_pre_status_pane_t3

0x0002,

0xf566,	// (0x000a127a) phob_pre_status_pane_t

0xd34c,	// (0x0009f060) bg_list_pane_cp05

0x13e1,	// (0x000930f5) grid_vorec_pane

0x13eb,	// (0x000930ff) vorec_t1

0x13f9,	// (0x0009310d) vorec_t2

0x1407,	// (0x0009311b) vorec_t3

0x1415,	// (0x00093129) vorec_t4

0x9ccc,	// (0x0009b9e0) vorec_t5

0x9cda,	// (0x0009b9ee) vorec_t6

0x0004,

0xf1a0,	// (0x000a0eb4) vorec_t

0x9ce8,	// (0x0009b9fc) wait_bar_pane_cp01

0xd9f9,	// (0x0009f70d) cell_vorec_pane_ParamLimits

0xd9f9,	// (0x0009f70d) cell_vorec_pane

0xa36f,	// (0x0009c083) cell_vorec_pane_g1

0xec29,	// (0x000a093d) grid_highlight_pane_cp05

0xe217,	// (0x0009ff2b) cams_zoom_pane

0xe217,	// (0x0009ff2b) image_vga_pane

0xeeff,	// (0x000a0c13) main_camera_pane_g1

0xeeff,	// (0x000a0c13) main_camera_pane_g2

0xeeff,	// (0x000a0c13) main_camera_pane_g3

0xeeff,	// (0x000a0c13) main_camera_pane_g4

0xeeff,	// (0x000a0c13) main_camera_pane_g5

0xeeff,	// (0x000a0c13) main_camera_pane_g6

0xeeff,	// (0x000a0c13) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x000a0ebf) main_camera_pane_g

0xd354,	// (0x0009f068) main_camera_pane_t1

0xd354,	// (0x0009f068) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x000a0ed0) main_camera_pane_t

0x1445,	// (0x00093159) cams_zoom_pane_cp_ParamLimits

0x1445,	// (0x00093159) cams_zoom_pane_cp

0x1479,	// (0x0009318d) image_cif_pane_ParamLimits

0x1479,	// (0x0009318d) image_cif_pane

0xe14c,	// (0x0009fe60) image_subqcif_pane

0x148b,	// (0x0009319f) main_video_pane_g1_ParamLimits

0x148b,	// (0x0009319f) main_video_pane_g1

0x14b9,	// (0x000931cd) main_video_pane_g2_ParamLimits

0x14b9,	// (0x000931cd) main_video_pane_g2

0x14f3,	// (0x00093207) main_video_pane_g3_ParamLimits

0x14f3,	// (0x00093207) main_video_pane_g3

0x14f3,	// (0x00093207) main_video_pane_g4_ParamLimits

0x14f3,	// (0x00093207) main_video_pane_g4

0x1527,	// (0x0009323b) main_video_pane_g5_ParamLimits

0x1527,	// (0x0009323b) main_video_pane_g5

0xd368,	// (0x0009f07c) main_video_pane_g6_ParamLimits

0xd368,	// (0x0009f07c) main_video_pane_g6

0x0006,

0xf1c1,	// (0x000a0ed5) main_video_pane_g_ParamLimits

0xf1c1,	// (0x000a0ed5) main_video_pane_g

0x1543,	// (0x00093257) main_video_pane_t1_ParamLimits

0x1543,	// (0x00093257) main_video_pane_t1

0xd382,	// (0x0009f096) cams_zoom_pane_g1

0xd382,	// (0x0009f096) cams_zoom_pane_g2

0xd382,	// (0x0009f096) cams_zoom_pane_g3

0xd382,	// (0x0009f096) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x000a0ee4) cams_zoom_pane_g

0x159b,	// (0x000932af) grid_cams_pane

0x15b5,	// (0x000932c9) linegrid_cams_pane

0x15c7,	// (0x000932db) cell_cams_pane_ParamLimits

0x15c7,	// (0x000932db) cell_cams_pane

0xd38c,	// (0x0009f0a0) cams_burst_image_pane

0xd394,	// (0x0009f0a8) cell_cams_pane_g1

0xec29,	// (0x000a093d) grid_highlight_pane_cp03

0xee9c,	// (0x000a0bb0) mp_bg_pane_g1

0xe14c,	// (0x0009fe60) bg_list_pane_cp03

0xe14c,	// (0x0009fe60) bg_mp_pane

0xe14c,	// (0x0009fe60) grid_mp_pane

0xd382,	// (0x0009f096) media_player_g1

0xd8d7,	// (0x0009f5eb) media_player_t1

0xd8d7,	// (0x0009f5eb) media_player_t2

0xd8d7,	// (0x0009f5eb) media_player_t3

0xd8d7,	// (0x0009f5eb) media_player_t4

0xd8d7,	// (0x0009f5eb) media_player_t5

0xd8d7,	// (0x0009f5eb) media_player_t6

0xd8d7,	// (0x0009f5eb) media_player_t7

0x0006,

0xf545,	// (0x000a1259) media_player_t

0xe14c,	// (0x0009fe60) wait_bar_pane_cp02

0xf52a,	// (0x000a123e) main_usb_pane_t

0xdb91,	// (0x0009f8a5) cell_mp_pane

0xee9c,	// (0x000a0bb0) cell_mp_pane_g1

0xec29,	// (0x000a093d) grid_highlight_pane_cp06

0xd39c,	// (0x0009f0b0) grid_skin_colour_pane

0xd3a4,	// (0x0009f0b8) list_highlight_pane_cp03

0x15e9,	// (0x000932fd) skin_g1

0xd3ac,	// (0x0009f0c0) skin_t1

0xd3bb,	// (0x0009f0cf) skin_t2

0x0001,

0xf1fe,	// (0x000a0f12) skin_t

0x15f3,	// (0x00093307) cell_skin_colour_pane_ParamLimits

0x15f3,	// (0x00093307) cell_skin_colour_pane

0xd3c9,	// (0x0009f0dd) cell_skin_colour_pane_g1

0x1666,	// (0x0009337a) call_video_g1_ParamLimits

0x1666,	// (0x0009337a) call_video_g1

0x1682,	// (0x00093396) call_video_g2_ParamLimits

0x1682,	// (0x00093396) call_video_g2

0x0001,

0xf203,	// (0x000a0f17) call_video_g_ParamLimits

0xf203,	// (0x000a0f17) call_video_g

0x16c7,	// (0x000933db) call_video_uplink_pane_cp1_ParamLimits

0x16c7,	// (0x000933db) call_video_uplink_pane_cp1

0xd3db,	// (0x0009f0ef) call_video_uplink_pane_cp2

0x1768,	// (0x0009347c) video_down_crop_pane_ParamLimits

0x1768,	// (0x0009347c) video_down_crop_pane

0x1851,	// (0x00093565) video_down_pane_ParamLimits

0x1851,	// (0x00093565) video_down_pane

0xd3e3,	// (0x0009f0f7) video_down_subqcif_pane_ParamLimits

0xd3e3,	// (0x0009f0f7) video_down_subqcif_pane

0xd3fd,	// (0x0009f111) video_down_subqcif_pane_cp_ParamLimits

0xd3fd,	// (0x0009f111) video_down_subqcif_pane_cp

0xd425,	// (0x0009f139) im_reading_pane_ParamLimits

0xd425,	// (0x0009f139) im_reading_pane

0x195c,	// (0x00093670) im_writing_pane_ParamLimits

0x195c,	// (0x00093670) im_writing_pane

0x197a,	// (0x0009368e) im_reading_pane_t1

0xd43f,	// (0x0009f153) list_im_pane

0xd450,	// (0x0009f164) scroll_pane_cp07

0x19b9,	// (0x000936cd) im_writing_pane_t1_ParamLimits

0x19b9,	// (0x000936cd) im_writing_pane_t1

0xd469,	// (0x0009f17d) im_writing_pane_t2_ParamLimits

0xd469,	// (0x0009f17d) im_writing_pane_t2

0x0001,

0xf20d,	// (0x000a0f21) im_writing_pane_t_ParamLimits

0xf20d,	// (0x000a0f21) im_writing_pane_t

0xec29,	// (0x000a093d) input_focus_pane_cp04

0xec29,	// (0x000a093d) input_focus_pane_cp05

0x19ce,	// (0x000936e2) list_im_single_pane_ParamLimits

0x19ce,	// (0x000936e2) list_im_single_pane

0x19e7,	// (0x000936fb) list_single_im_pane_t1

0xd34c,	// (0x0009f060) blid_accuracy_pane

0xd34c,	// (0x0009f060) blid_compass_pane

0x3ec0,	// (0x00095bd4) main_location_t1

0x3ec0,	// (0x00095bd4) main_location_t2

0x3ec0,	// (0x00095bd4) main_location_t3

0x0002,

0xf554,	// (0x000a1268) main_location_t

0xec29,	// (0x000a093d) aid_levels_location

0xee9c,	// (0x000a0bb0) blid_accuracy_pane_g1

0xee9c,	// (0x000a0bb0) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x000a0f70) blid_accuracy_pane_g

0xd4b1,	// (0x0009f1c5) wml_content_pane

0xd4ef,	// (0x0009f203) wml_button_pane_ParamLimits

0xd4ef,	// (0x0009f203) wml_button_pane

0x19f6,	// (0x0009370a) wml_list_single_large_pane_ParamLimits

0x19f6,	// (0x0009370a) wml_list_single_large_pane

0x1a0f,	// (0x00093723) wml_list_single_medium_pane_ParamLimits

0x1a0f,	// (0x00093723) wml_list_single_medium_pane

0x1a29,	// (0x0009373d) wml_list_single_small_pane_ParamLimits

0x1a29,	// (0x0009373d) wml_list_single_small_pane

0xd503,	// (0x0009f217) wml_selection_box_pane_ParamLimits

0xd503,	// (0x0009f217) wml_selection_box_pane

0xd516,	// (0x0009f22a) wml_list_single_pane_t1

0xd525,	// (0x0009f239) wml_list_single_medium_pane_t1

0xd534,	// (0x0009f248) wml_list_single_large_pane_t1

0xd543,	// (0x0009f257) input_focus_pane_cp02_ParamLimits

0xd543,	// (0x0009f257) input_focus_pane_cp02

0xd556,	// (0x0009f26a) wml_selection_box_pane_g1

0xd55f,	// (0x0009f273) wml_selection_box_pane_t1_ParamLimits

0xd55f,	// (0x0009f273) wml_selection_box_pane_t1

0xee84,	// (0x000a0b98) bg_wml_button_pane_ParamLimits

0xee84,	// (0x000a0b98) bg_wml_button_pane

0xd577,	// (0x0009f28b) wml_button_pane_g1

0xd57f,	// (0x0009f293) wml_button_pane_t1

0xd577,	// (0x0009f28b) wml_button_bg_pane_g1

0xd58f,	// (0x0009f2a3) wml_button_bg_pane_g2

0xd597,	// (0x0009f2ab) wml_button_bg_pane_g3

0xd59f,	// (0x0009f2b3) wml_button_bg_pane_g4

0xd5a7,	// (0x0009f2bb) wml_button_bg_pane_g5

0xd5af,	// (0x0009f2c3) wml_button_bg_pane_g6

0xd5b7,	// (0x0009f2cb) wml_button_bg_pane_g7

0xd5bf,	// (0x0009f2d3) wml_button_bg_pane_g8

0xd5c7,	// (0x0009f2db) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x000a0f26) wml_button_bg_pane_g

0x1a48,	// (0x0009375c) bg_list_pane_cp02

0xd5cf,	// (0x0009f2e3) mce_header_pane_ParamLimits

0xd5cf,	// (0x0009f2e3) mce_header_pane

0xd5e5,	// (0x0009f2f9) mce_icon_pane

0xd5e5,	// (0x0009f2f9) mce_image_pane

0xd5ee,	// (0x0009f302) mce_text_pane_ParamLimits

0xd5ee,	// (0x0009f302) mce_text_pane

0x1a50,	// (0x00093764) scroll_pane_cp03

0xd4e7,	// (0x0009f1fb) scroll_pane_cp04

0xd601,	// (0x0009f315) scroll_pane_cp05_ParamLimits

0xd601,	// (0x0009f315) scroll_pane_cp05

0x1a58,	// (0x0009376c) mce_header_field_pane_ParamLimits

0x1a58,	// (0x0009376c) mce_header_field_pane

0x1a71,	// (0x00093785) mce_header_field_pane_2_ParamLimits

0x1a71,	// (0x00093785) mce_header_field_pane_2

0x1a87,	// (0x0009379b) mce_header_field_pane_3

0xd60d,	// (0x0009f321) list_single_mce_message_pane_ParamLimits

0xd60d,	// (0x0009f321) list_single_mce_message_pane

0xd61c,	// (0x0009f330) list_single_mce_smart_pane_ParamLimits

0xd61c,	// (0x0009f330) list_single_mce_smart_pane

0xd636,	// (0x0009f34a) input_focus_pane_cp03

0xd63f,	// (0x0009f353) list_header_data_pane

0x1a8f,	// (0x000937a3) mce_header_field_pane_t1

0x1a9d,	// (0x000937b1) list_single_mce_header_pane_ParamLimits

0x1a9d,	// (0x000937b1) list_single_mce_header_pane

0xd647,	// (0x0009f35b) list_single_mce_header_pane_t1

0xd656,	// (0x0009f36a) list_single_mce_message_pane_g1

0xd65e,	// (0x0009f372) list_single_mce_message_pane_t1

0x1ad7,	// (0x000937eb) bg_cale_heading_pane_cp01_ParamLimits

0x1ad7,	// (0x000937eb) bg_cale_heading_pane_cp01

0xd66c,	// (0x0009f380) bg_cale_pane_cp02_ParamLimits

0xd66c,	// (0x0009f380) bg_cale_pane_cp02

0x1b29,	// (0x0009383d) cale_month_corner_pane

0x1b48,	// (0x0009385c) cale_month_day_heading_pane_ParamLimits

0x1b48,	// (0x0009385c) cale_month_day_heading_pane

0x1bb2,	// (0x000938c6) cale_month_pane_g1_ParamLimits

0x1bb2,	// (0x000938c6) cale_month_pane_g1

0x1bf9,	// (0x0009390d) cale_month_pane_g2_ParamLimits

0x1bf9,	// (0x0009390d) cale_month_pane_g2

0x1c35,	// (0x00093949) cale_month_pane_g3_ParamLimits

0x1c35,	// (0x00093949) cale_month_pane_g3

0x1c89,	// (0x0009399d) cale_month_pane_g4_ParamLimits

0x1c89,	// (0x0009399d) cale_month_pane_g4

0x1cdd,	// (0x000939f1) cale_month_pane_g5_ParamLimits

0x1cdd,	// (0x000939f1) cale_month_pane_g5

0x1d39,	// (0x00093a4d) cale_month_pane_g6_ParamLimits

0x1d39,	// (0x00093a4d) cale_month_pane_g6

0x1da1,	// (0x00093ab5) cale_month_pane_g7_ParamLimits

0x1da1,	// (0x00093ab5) cale_month_pane_g7

0x1e0d,	// (0x00093b21) cale_month_pane_g8_ParamLimits

0x1e0d,	// (0x00093b21) cale_month_pane_g8

0x1e79,	// (0x00093b8d) cale_month_pane_g9_ParamLimits

0x1e79,	// (0x00093b8d) cale_month_pane_g9

0x1edd,	// (0x00093bf1) cale_month_pane_g10_ParamLimits

0x1edd,	// (0x00093bf1) cale_month_pane_g10

0x1f2f,	// (0x00093c43) cale_month_pane_g11_ParamLimits

0x1f2f,	// (0x00093c43) cale_month_pane_g11

0x1f81,	// (0x00093c95) cale_month_pane_g12_ParamLimits

0x1f81,	// (0x00093c95) cale_month_pane_g12

0x1fd9,	// (0x00093ced) cale_month_pane_g13_ParamLimits

0x1fd9,	// (0x00093ced) cale_month_pane_g13

0x000c,

0xf225,	// (0x000a0f39) cale_month_pane_g_ParamLimits

0xf225,	// (0x000a0f39) cale_month_pane_g

0x2031,	// (0x00093d45) cale_month_week_pane

0x2055,	// (0x00093d69) grid_cale_month_pane_ParamLimits

0x2055,	// (0x00093d69) grid_cale_month_pane

0x20b6,	// (0x00093dca) cale_month_day_heading_pane_t1

0x213c,	// (0x00093e50) cale_month_day_heading_pane_t2

0x21b5,	// (0x00093ec9) cale_month_day_heading_pane_t3

0x222e,	// (0x00093f42) cale_month_day_heading_pane_t4

0x22af,	// (0x00093fc3) cale_month_day_heading_pane_t5

0x2338,	// (0x0009404c) cale_month_day_heading_pane_t6

0x23c9,	// (0x000940dd) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x000a0f54) cale_month_day_heading_pane_t

0xd2f1,	// (0x0009f005) bg_cale_side_pane_cp01

0x245a,	// (0x0009416e) cale_month_week_pane_t1

0x2473,	// (0x00094187) cale_month_week_pane_t2

0x248c,	// (0x000941a0) cale_month_week_pane_t3

0x24a5,	// (0x000941b9) cale_month_week_pane_t4

0x24be,	// (0x000941d2) cale_month_week_pane_t5

0x24d7,	// (0x000941eb) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x000a0f63) cale_month_week_pane_t

0x24fc,	// (0x00094210) cell_cale_month_pane_ParamLimits

0x24fc,	// (0x00094210) cell_cale_month_pane

0xa379,	// (0x0009c08d) cell_cale_month_pane_g1

0x2646,	// (0x0009435a) cell_cale_month_pane_t1_ParamLimits

0x2646,	// (0x0009435a) cell_cale_month_pane_t1

0xd2ff,	// (0x0009f013) grid_highlight_pane_cp08

0xee9c,	// (0x000a0bb0) main_smil_g1

0x2672,	// (0x00094386) smil_status_pane

0xd6ab,	// (0x0009f3bf) smil_text_pane

0x3d43,	// (0x00095a57) bg_popup_call3_rect_pane_g8

0x3d4b,	// (0x00095a5f) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x000a11fc) bg_popup_call3_rect_pane_g

0x4552,	// (0x00096266) smil_status_volume_pane_g1

0xd6b5,	// (0x0009f3c9) smil_status_pane_t1

0xa4cf,	// (0x0009c1e3) volume_smil_pane

0xd6cc,	// (0x0009f3e0) list_smil_text_pane

0x2687,	// (0x0009439b) scroll_pane_cp011

0x2692,	// (0x000943a6) smil_text_list_pane_t1_ParamLimits

0x2692,	// (0x000943a6) smil_text_list_pane_t1

0xa385,	// (0x0009c099) aid_volume_smil_ParamLimits

0xa385,	// (0x0009c099) aid_volume_smil

0xee9c,	// (0x000a0bb0) smil_volume_pane_g1

0xee9c,	// (0x000a0bb0) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x000a0f70) smil_volume_pane_g

0x0df2,	// (0x00092b06) listscroll_cale_day_pane

0xd6d6,	// (0x0009f3ea) bg_cale_pane

0xd6ee,	// (0x0009f402) list_cale_pane

0xd711,	// (0x0009f425) scroll_pane_cp09

0xd722,	// (0x0009f436) cale_bg_pane_g1

0xd72a,	// (0x0009f43e) cale_bg_pane_g2

0xd732,	// (0x0009f446) cale_bg_pane_g3

0xd73a,	// (0x0009f44e) cale_bg_pane_g4

0xd742,	// (0x0009f456) cale_bg_pane_g5

0xd74a,	// (0x0009f45e) cale_bg_pane_g6

0xd752,	// (0x0009f466) cale_bg_pane_g7

0xd75a,	// (0x0009f46e) cale_bg_pane_g8

0xd762,	// (0x0009f476) cale_bg_pane_g9

0x0008,

0xf261,	// (0x000a0f75) cale_bg_pane_g

0x26e5,	// (0x000943f9) list_cale_time_pane_ParamLimits

0x26e5,	// (0x000943f9) list_cale_time_pane

0xd76a,	// (0x0009f47e) list_cale_time_pane_g1_ParamLimits

0xd76a,	// (0x0009f47e) list_cale_time_pane_g1

0xd776,	// (0x0009f48a) list_cale_time_pane_g2_ParamLimits

0xd776,	// (0x0009f48a) list_cale_time_pane_g2

0x26ff,	// (0x00094413) list_cale_time_pane_g3_ParamLimits

0x26ff,	// (0x00094413) list_cale_time_pane_g3

0x270d,	// (0x00094421) list_cale_time_pane_g4_ParamLimits

0x270d,	// (0x00094421) list_cale_time_pane_g4

0x271b,	// (0x0009442f) list_cale_time_pane_g5_ParamLimits

0x271b,	// (0x0009442f) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x000a0f88) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x000a0f88) list_cale_time_pane_g

0xd790,	// (0x0009f4a4) list_cale_time_pane_t1_ParamLimits

0xd790,	// (0x0009f4a4) list_cale_time_pane_t1

0xd7b8,	// (0x0009f4cc) list_cale_time_pane_t2_ParamLimits

0xd7b8,	// (0x0009f4cc) list_cale_time_pane_t2

0x29cd,	// (0x000946e1) aid_blid_cardinal_pane

0x2a0f,	// (0x00094723) compass_pane_t4

0xd7e0,	// (0x0009f4f4) list_cale_time_pane_t4_ParamLimits

0xd7e0,	// (0x0009f4f4) list_cale_time_pane_t4

0x2a1d,	// (0x00094731) compass_pane_t5

0x2a2d,	// (0x00094741) compass_pane_t6

0x2a3b,	// (0x0009474f) compass_pane_t7

0xdc41,	// (0x0009f955) navi_pane_cc_t1

0xdd8e,	// (0x0009faa2) aid_phob_thumbnail_center_pane

0x2fde,	// (0x00094cf2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x000a0f95) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x000a0f95) list_cale_time_pane_t

0xe1f5,	// (0x0009ff09) bg_popup_window_pane_cp02_ParamLimits

0xe1f5,	// (0x0009ff09) bg_popup_window_pane_cp02

0xd808,	// (0x0009f51c) heading_pane_cp01_ParamLimits

0xd808,	// (0x0009f51c) heading_pane_cp01

0xd814,	// (0x0009f528) loc_req_pane_ParamLimits

0xd814,	// (0x0009f528) loc_req_pane

0xd824,	// (0x0009f538) loc_type_pane_ParamLimits

0xd824,	// (0x0009f538) loc_type_pane

0xd836,	// (0x0009f54a) loc_type_pane_t1_ParamLimits

0xd836,	// (0x0009f54a) loc_type_pane_t1

0xd848,	// (0x0009f55c) loc_type_pane_t2_ParamLimits

0xd848,	// (0x0009f55c) loc_type_pane_t2

0xd85a,	// (0x0009f56e) loc_type_pane_t3_ParamLimits

0xd85a,	// (0x0009f56e) loc_type_pane_t3

0x0002,

0xf288,	// (0x000a0f9c) loc_type_pane_t_ParamLimits

0xf288,	// (0x000a0f9c) loc_type_pane_t

0xd86c,	// (0x0009f580) list_loc_req_pane

0xd876,	// (0x0009f58a) scroll_pane_cp012

0x2729,	// (0x0009443d) list_single_loc_request_popup_menu_pane_ParamLimits

0x2729,	// (0x0009443d) list_single_loc_request_popup_menu_pane

0xd881,	// (0x0009f595) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd881,	// (0x0009f595) list_single_loc_request_popup_menu_pane_g1

0xd88d,	// (0x0009f5a1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd88d,	// (0x0009f5a1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x000a0fa3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x000a0fa3) list_single_loc_request_popup_menu_pane_g

0xd899,	// (0x0009f5ad) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd899,	// (0x0009f5ad) list_single_loc_request_popup_menu_pane_t1

0xee84,	// (0x000a0b98) bg_popup_window_pane_cp03_ParamLimits

0xee84,	// (0x000a0b98) bg_popup_window_pane_cp03

0xe225,	// (0x0009ff39) heading_loc_req_pane_ParamLimits

0xe225,	// (0x0009ff39) heading_loc_req_pane

0x2736,	// (0x0009444a) popup_dyc_status_message_window_g1_ParamLimits

0x2736,	// (0x0009444a) popup_dyc_status_message_window_g1

0x274a,	// (0x0009445e) popup_dyc_status_message_window_t1_ParamLimits

0x274a,	// (0x0009445e) popup_dyc_status_message_window_t1

0x275f,	// (0x00094473) popup_dyc_status_message_window_t2_ParamLimits

0x275f,	// (0x00094473) popup_dyc_status_message_window_t2

0x2774,	// (0x00094488) popup_dyc_status_message_window_t3_ParamLimits

0x2774,	// (0x00094488) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x000a0fa8) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x000a0fa8) popup_dyc_status_message_window_t

0xec29,	// (0x000a093d) bg_heading_pane_cp01

0xd8af,	// (0x0009f5c3) heading_loc_req_pane_g1

0xd8b7,	// (0x0009f5cb) heading_loc_req_pane_g2

0xd8bf,	// (0x0009f5d3) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x000a0faf) heading_loc_req_pane_g

0xd8c7,	// (0x0009f5db) heading_loc_req_pane_t1

0xd8e7,	// (0x0009f5fb) bg_popup_sub_pane_cp01_ParamLimits

0xd8e7,	// (0x0009f5fb) bg_popup_sub_pane_cp01

0xd8f5,	// (0x0009f609) popup_cale_events_window_g1_ParamLimits

0xd8f5,	// (0x0009f609) popup_cale_events_window_g1

0xd915,	// (0x0009f629) popup_cale_events_window_g2_ParamLimits

0xd915,	// (0x0009f629) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x000a0fd1) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x000a0fd1) popup_cale_events_window_g

0xd935,	// (0x0009f649) popup_cale_events_window_t1_ParamLimits

0xd935,	// (0x0009f649) popup_cale_events_window_t1

0xd947,	// (0x0009f65b) popup_cale_events_window_t2_ParamLimits

0xd947,	// (0x0009f65b) popup_cale_events_window_t2

0xd985,	// (0x0009f699) popup_cale_events_window_t3_ParamLimits

0xd985,	// (0x0009f699) popup_cale_events_window_t3

0xda0e,	// (0x0009f722) popup_cale_events_window_t4_ParamLimits

0xda0e,	// (0x0009f722) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x000a0fd6) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x000a0fd6) popup_cale_events_window_t

0x279c,	// (0x000944b0) call_type_pane

0x27ac,	// (0x000944c0) popup_call_status_window_g1

0x27c0,	// (0x000944d4) popup_call_status_window_g2

0x27d4,	// (0x000944e8) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x000a0fdf) popup_call_status_window_g

0xda44,	// (0x0009f758) call_type_pane_g1

0xda4d,	// (0x0009f761) call_type_pane_g2

0x0001,

0xf2d2,	// (0x000a0fe6) call_type_pane_g

0xec29,	// (0x000a093d) bg_popup_sub_pane_cp02

0xda56,	// (0x0009f76a) listscroll_popup_wml_pane

0xda5e,	// (0x0009f772) list_wml_pane

0xda68,	// (0x0009f77c) scroll_pane_cp013

0xda73,	// (0x0009f787) list_single_graphic_popup_wml_pane_ParamLimits

0xda73,	// (0x0009f787) list_single_graphic_popup_wml_pane

0xee9c,	// (0x000a0bb0) list_single_graphic_popup_wml_pane_g1

0xda87,	// (0x0009f79b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x000a0feb) list_single_graphic_popup_wml_pane_g

0xda8f,	// (0x0009f7a3) list_single_graphic_popup_wml_pane_t1

0xdaa5,	// (0x0009f7b9) aid_call_pane

0xee7c,	// (0x000a0b90) popup_clock_analogue_window_g1

0xee7c,	// (0x000a0b90) popup_clock_analogue_window_g2

0xa3a7,	// (0x0009c0bb) popup_clock_analogue_window_g3

0xa3a7,	// (0x0009c0bb) popup_clock_analogue_window_g4

0xee9c,	// (0x000a0bb0) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x000a0ff0) popup_clock_analogue_window_g

0xa3af,	// (0x0009c0c3) popup_clock_analogue_window_t1

0xa3bd,	// (0x0009c0d1) clock_digital_number_pane_ParamLimits

0xa3bd,	// (0x0009c0d1) clock_digital_number_pane

0xa3c9,	// (0x0009c0dd) clock_digital_number_pane_cp02_ParamLimits

0xa3c9,	// (0x0009c0dd) clock_digital_number_pane_cp02

0xa3d5,	// (0x0009c0e9) clock_digital_number_pane_cp03_ParamLimits

0xa3d5,	// (0x0009c0e9) clock_digital_number_pane_cp03

0xa3e1,	// (0x0009c0f5) clock_digital_number_pane_cp04_ParamLimits

0xa3e1,	// (0x0009c0f5) clock_digital_number_pane_cp04

0xa3ed,	// (0x0009c101) clock_digital_separator_pane_ParamLimits

0xa3ed,	// (0x0009c101) clock_digital_separator_pane

0xa3f9,	// (0x0009c10d) popup_clock_digital_window_t1

0xee9c,	// (0x000a0bb0) clock_digital_number_pane_g1

0xee9c,	// (0x000a0bb0) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x000a0f70) clock_digital_number_pane_g

0xee9c,	// (0x000a0bb0) clock_digital_separator_pane_g1

0xee9c,	// (0x000a0bb0) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x000a0f70) clock_digital_separator_pane_g

0xec29,	// (0x000a093d) bg_popup_window_pane_cp04

0xdaad,	// (0x0009f7c1) heading_pane_cp03

0xd34c,	// (0x0009f060) listscroll_popup_gms_pane

0xec29,	// (0x000a093d) grid_large_graphic_popup_pane

0xdab6,	// (0x0009f7ca) listscroll_popup_gms_pane_g1

0xdabf,	// (0x0009f7d3) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x000a0ffb) listscroll_popup_gms_pane_g

0xdac8,	// (0x0009f7dc) scroll_pane_cp014

0xeef1,	// (0x000a0c05) cell_large_graphic_popup_pane_ParamLimits

0xeef1,	// (0x000a0c05) cell_large_graphic_popup_pane

0xeeff,	// (0x000a0c13) cell_large_graphic_popup_pane_g1_ParamLimits

0xeeff,	// (0x000a0c13) cell_large_graphic_popup_pane_g1

0xdad1,	// (0x0009f7e5) cell_large_graphic_popup_pane_g2_ParamLimits

0xdad1,	// (0x0009f7e5) cell_large_graphic_popup_pane_g2

0xdadf,	// (0x0009f7f3) cell_large_graphic_popup_pane_g3_ParamLimits

0xdadf,	// (0x0009f7f3) cell_large_graphic_popup_pane_g3

0xdaed,	// (0x0009f801) cell_large_graphic_popup_pane_g4_ParamLimits

0xdaed,	// (0x0009f801) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x000a1000) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x000a1000) cell_large_graphic_popup_pane_g

0xec29,	// (0x000a093d) grid_highlight_pane_cp010

0xee9c,	// (0x000a0bb0) bg_popup_call_pane_g1

0xdafe,	// (0x0009f812) list_single_graphic_popup_conf_pane_ParamLimits

0xdafe,	// (0x0009f812) list_single_graphic_popup_conf_pane

0xdb10,	// (0x0009f824) list_highlight_pane_cp01

0xdb19,	// (0x0009f82d) list_single_graphic_popup_conf_pane_g1

0xdb21,	// (0x0009f835) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x000a1009) list_single_graphic_popup_conf_pane_g

0xdb29,	// (0x0009f83d) list_single_graphic_popup_conf_pane_t1

0xdb37,	// (0x0009f84b) linegrid_cams_pane_g1

0x27e4,	// (0x000944f8) linegrid_cams_pane_g2

0xd332,	// (0x0009f046) linegrid_cams_pane_g3

0xdb40,	// (0x0009f854) linegrid_cams_pane_g4

0x27ed,	// (0x00094501) linegrid_cams_pane_g5

0x27f6,	// (0x0009450a) linegrid_cams_pane_g6

0xd33b,	// (0x0009f04f) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x000a100e) linegrid_cams_pane_g

0xdb49,	// (0x0009f85d) popup_clock_analogue_window

0xdb49,	// (0x0009f85d) popup_clock_digital_window

0xec29,	// (0x000a093d) popup_phob_thumbnail_window

0xee9c,	// (0x000a0bb0) call_video_uplink_pane_g1

0xdb52,	// (0x0009f866) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x000a101d) call_video_uplink_pane_g

0xdb5a,	// (0x0009f86e) video_uplink_pane

0xdb62,	// (0x0009f876) mce_image_pane_g1

0x2801,	// (0x00094515) mce_image_pane_g2

0x280b,	// (0x0009451f) mce_image_pane_g3

0x2815,	// (0x00094529) mce_image_pane_g4

0x281d,	// (0x00094531) mce_image_pane_g5

0x0004,

0xf30e,	// (0x000a1022) mce_image_pane_g

0xdb6c,	// (0x0009f880) control_top_pane_stacon_cp01_ParamLimits

0xdb6c,	// (0x0009f880) control_top_pane_stacon_cp01

0xdb80,	// (0x0009f894) uni_indicator_pane_stacon_cp01_ParamLimits

0xdb80,	// (0x0009f894) uni_indicator_pane_stacon_cp01

0xdb91,	// (0x0009f8a5) bg_popup_sub_pane_cp03

0x2825,	// (0x00094539) chi_dic_find_pane

0x282d,	// (0x00094541) listscroll_chi_dic_pane

0x2836,	// (0x0009454a) main_pane_chidic_g1

0x2849,	// (0x0009455d) chi_dic_find_pane_t1

0xdb9b,	// (0x0009f8af) find_chidic_pane

0xdba4,	// (0x0009f8b8) chi_dic_list_pane_ParamLimits

0xdba4,	// (0x0009f8b8) chi_dic_list_pane

0xdbb5,	// (0x0009f8c9) scroll_pane_cp020

0x2857,	// (0x0009456b) find_chidic_pane_t1

0xec29,	// (0x000a093d) input_focus_pane_cp06

0x2866,	// (0x0009457a) list_chi_dic_pane_ParamLimits

0x2866,	// (0x0009457a) list_chi_dic_pane

0x2878,	// (0x0009458c) list_chi_dic_pane_t1_ParamLimits

0x2878,	// (0x0009458c) list_chi_dic_pane_t1

0xec29,	// (0x000a093d) list_highlight_pane_cp020

0xdbbd,	// (0x0009f8d1) bg_cale_heading_pane_g1

0x288b,	// (0x0009459f) bg_cale_heading_pane_g2

0x2893,	// (0x000945a7) bg_cale_heading_pane_g3

0x289b,	// (0x000945af) bg_cale_heading_pane_g4

0x28a5,	// (0x000945b9) bg_cale_heading_pane_g5

0x28af,	// (0x000945c3) bg_cale_heading_pane_g6

0x28b7,	// (0x000945cb) bg_cale_heading_pane_g7

0x28bf,	// (0x000945d3) bg_cale_heading_pane_g8

0x28c9,	// (0x000945dd) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x000a102d) bg_cale_heading_pane_g

0xdbbd,	// (0x0009f8d1) bg_cale_side_pane_g1

0x28d3,	// (0x000945e7) bg_cale_side_pane_g2

0x28dd,	// (0x000945f1) bg_cale_side_pane_g3

0x28e7,	// (0x000945fb) bg_cale_side_pane_g4

0x28f1,	// (0x00094605) bg_cale_side_pane_g5

0x28fb,	// (0x0009460f) bg_cale_side_pane_g6

0x2905,	// (0x00094619) bg_cale_side_pane_g7

0x290f,	// (0x00094623) bg_cale_side_pane_g8

0x2917,	// (0x0009462b) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x000a1040) bg_cale_side_pane_g

0x291f,	// (0x00094633) popup_call_status_window_ParamLimits

0x291f,	// (0x00094633) popup_call_status_window

0xdbc5,	// (0x0009f8d9) stacon_top_pane

0xdbcd,	// (0x0009f8e1) status_pane_ParamLimits

0xdbcd,	// (0x0009f8e1) status_pane

0xdbe2,	// (0x0009f8f6) status_small_pane

0xdbea,	// (0x0009f8fe) control_pane

0xec29,	// (0x000a093d) stacon_bottom_pane

0xdbf2,	// (0x0009f906) list_single_mce_smart_pane_t1_ParamLimits

0xdbf2,	// (0x0009f906) list_single_mce_smart_pane_t1

0xdc05,	// (0x0009f919) list_single_mce_smart_pane_t2_ParamLimits

0xdc05,	// (0x0009f919) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x000a1053) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x000a1053) list_single_mce_smart_pane_t

0x296c,	// (0x00094680) compass_pane

0x2977,	// (0x0009468b) main_location2_pane_t1

0x298d,	// (0x000946a1) main_location2_pane_t2

0x29a3,	// (0x000946b7) main_location2_pane_t3

0x0003,

0xf344,	// (0x000a1058) main_location2_pane_t

0xdc24,	// (0x0009f938) compass_pane_g1_ParamLimits

0xdc24,	// (0x0009f938) compass_pane_g1

0x29f1,	// (0x00094705) compass_pane_t1

0x2a00,	// (0x00094714) compass_pane_t2

0x0005,

0xf34d,	// (0x000a1061) compass_pane_t

0x2a4b,	// (0x0009475f) text_secondary_cp61

0xdc38,	// (0x0009f94c) navi_pane_cams_g5

0xdc5b,	// (0x0009f96f) navi_pane_im_t1

0xdc69,	// (0x0009f97d) navi_pane_mp_g1_ParamLimits

0xdc69,	// (0x0009f97d) navi_pane_mp_g1

0xdc7d,	// (0x0009f991) navi_pane_mp_g2_ParamLimits

0xdc7d,	// (0x0009f991) navi_pane_mp_g2

0xdc89,	// (0x0009f99d) navi_pane_mp_g3_ParamLimits

0xdc89,	// (0x0009f99d) navi_pane_mp_g3

0x0002,

0xf361,	// (0x000a1075) navi_pane_mp_g_ParamLimits

0xf361,	// (0x000a1075) navi_pane_mp_g

0xdc95,	// (0x0009f9a9) navi_pane_mp_t1

0xdca3,	// (0x0009f9b7) navi_pane_mp_t2

0x0002,

0xf368,	// (0x000a107c) navi_pane_mp_t

0xdcdf,	// (0x0009f9f3) navi_pane_vt_g1

0xdc95,	// (0x0009f9a9) navi_pane_vt_t1

0xdce7,	// (0x0009f9fb) navi_slider_pane

0xd34c,	// (0x0009f060) zooming_pane

0xdcef,	// (0x0009fa03) navi_slider_pane_g1

0xa416,	// (0x0009c12a) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x000a1083) navi_slider_pane_g

0xdd13,	// (0x0009fa27) aid_levels_zoom

0xdd1b,	// (0x0009fa2f) zooming_pane_g1

0xdd23,	// (0x0009fa37) zooming_pane_g2

0xdd23,	// (0x0009fa37) zooming_pane_g3

0x0002,

0xf37e,	// (0x000a1092) zooming_pane_g

0xdd2b,	// (0x0009fa3f) level_10_zoom

0xdd34,	// (0x0009fa48) level_11_zoom

0xdd3d,	// (0x0009fa51) level_1_zoom

0xdd46,	// (0x0009fa5a) level_2_zoom

0xdd4f,	// (0x0009fa63) level_3_zoom

0xdd58,	// (0x0009fa6c) level_4_zoom

0xdd61,	// (0x0009fa75) level_5_zoom

0xdd6a,	// (0x0009fa7e) level_6_zoom

0xdd73,	// (0x0009fa87) level_7_zoom

0xdd7c,	// (0x0009fa90) level_8_zoom

0xdd85,	// (0x0009fa99) level_9_zoom

0xdd96,	// (0x0009faaa) popup_phob_thumbnail_window_g1

0xdd9e,	// (0x0009fab2) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x000a1099) popup_phob_thumbnail_window_g

0x3f27,	// (0x00095c3b) level_1_location

0x3f2f,	// (0x00095c43) level_2_location

0x3f37,	// (0x00095c4b) level_3_location

0x3f41,	// (0x00095c55) level_4_location

0xd34c,	// (0x0009f060) level_5_location

0x2b94,	// (0x000948a8) mce_icon_pane_g1

0x2b9c,	// (0x000948b0) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x000a109e) mce_icon_pane_g

0xe23d,	// (0x0009ff51) main_mup_pane_g1_ParamLimits

0xe23d,	// (0x0009ff51) main_mup_pane_g1

0xe23d,	// (0x0009ff51) main_mup_pane_g2_ParamLimits

0xe23d,	// (0x0009ff51) main_mup_pane_g2

0xe23d,	// (0x0009ff51) main_mup_pane_g3_ParamLimits

0xe23d,	// (0x0009ff51) main_mup_pane_g3

0xe23d,	// (0x0009ff51) main_mup_pane_g4_ParamLimits

0xe23d,	// (0x0009ff51) main_mup_pane_g4

0xe23d,	// (0x0009ff51) main_mup_pane_g5_ParamLimits

0xe23d,	// (0x0009ff51) main_mup_pane_g5

0xe23d,	// (0x0009ff51) main_mup_pane_g6_ParamLimits

0xe23d,	// (0x0009ff51) main_mup_pane_g6

0xe23d,	// (0x0009ff51) main_mup_pane_g7_ParamLimits

0xe23d,	// (0x0009ff51) main_mup_pane_g7

0xe23d,	// (0x0009ff51) main_mup_pane_g8_ParamLimits

0xe23d,	// (0x0009ff51) main_mup_pane_g8

0xe23d,	// (0x0009ff51) main_mup_pane_g9_ParamLimits

0xe23d,	// (0x0009ff51) main_mup_pane_g9

0xe23d,	// (0x0009ff51) main_mup_pane_g10_ParamLimits

0xe23d,	// (0x0009ff51) main_mup_pane_g10

0xe23d,	// (0x0009ff51) main_mup_pane_g11_ParamLimits

0xe23d,	// (0x0009ff51) main_mup_pane_g11

0xeeff,	// (0x000a0c13) main_mup_pane_g12_ParamLimits

0xeeff,	// (0x000a0c13) main_mup_pane_g12

0xe23d,	// (0x0009ff51) main_mup_pane_g13_ParamLimits

0xe23d,	// (0x0009ff51) main_mup_pane_g13

0x000c,

0xf38f,	// (0x000a10a3) main_mup_pane_g_ParamLimits

0xf38f,	// (0x000a10a3) main_mup_pane_g

0xe24b,	// (0x0009ff5f) main_mup_pane_t1_ParamLimits

0xe24b,	// (0x0009ff5f) main_mup_pane_t1

0xe24b,	// (0x0009ff5f) main_mup_pane_t2_ParamLimits

0xe24b,	// (0x0009ff5f) main_mup_pane_t2

0xe24b,	// (0x0009ff5f) main_mup_pane_t3_ParamLimits

0xe24b,	// (0x0009ff5f) main_mup_pane_t3

0xd354,	// (0x0009f068) main_mup_pane_t4_ParamLimits

0xd354,	// (0x0009f068) main_mup_pane_t4

0xd354,	// (0x0009f068) main_mup_pane_t5_ParamLimits

0xd354,	// (0x0009f068) main_mup_pane_t5

0xd9bf,	// (0x0009f6d3) main_mup_pane_t6_ParamLimits

0xd9bf,	// (0x0009f6d3) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x000a10be) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x000a10be) main_mup_pane_t

0xeef1,	// (0x000a0c05) mup_progress_pane_ParamLimits

0xeef1,	// (0x000a0c05) mup_progress_pane

0xe25f,	// (0x0009ff73) mup_visualizer_pane_ParamLimits

0xe25f,	// (0x0009ff73) mup_visualizer_pane

0xe25f,	// (0x0009ff73) mup_volume_pane_ParamLimits

0xe25f,	// (0x0009ff73) mup_volume_pane

0xef0d,	// (0x000a0c21) mup_visualizer_pane_g1_ParamLimits

0xef0d,	// (0x000a0c21) mup_visualizer_pane_g1

0xdda6,	// (0x0009faba) mup_visualizer_pane_g2_ParamLimits

0xdda6,	// (0x0009faba) mup_visualizer_pane_g2

0xeeff,	// (0x000a0c13) mup_visualizer_pane_g3_ParamLimits

0xeeff,	// (0x000a0c13) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x000a10cb) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x000a10cb) mup_visualizer_pane_g

0xd382,	// (0x0009f096) mup_volume_pane_g1

0xd382,	// (0x0009f096) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x000a10d2) mup_volume_pane_g

0xd382,	// (0x0009f096) mup_progress_pane_g1

0xd382,	// (0x0009f096) mup_progress_pane_g2

0xd382,	// (0x0009f096) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x000a10d7) mup_progress_pane_g

0xec29,	// (0x000a093d) bg_popup_window_pane_cp05

0xddb4,	// (0x0009fac8) heading_pane_cp02_ParamLimits

0xddb4,	// (0x0009fac8) heading_pane_cp02

0xddd0,	// (0x0009fae4) list_popup_blid_pane

0xddd8,	// (0x0009faec) list_blid_sat_info_pane_ParamLimits

0xddd8,	// (0x0009faec) list_blid_sat_info_pane

0xddeb,	// (0x0009faff) list_blid_sat_info_pane_g1

0xddf3,	// (0x0009fb07) list_blid_sat_info_pane_t1

0x2cb0,	// (0x000949c4) mup_equalizer_pane_ParamLimits

0x2cb0,	// (0x000949c4) mup_equalizer_pane

0x2cd1,	// (0x000949e5) mup_equalizer_pane_cp1_ParamLimits

0x2cd1,	// (0x000949e5) mup_equalizer_pane_cp1

0x2cf2,	// (0x00094a06) mup_equalizer_pane_cp2_ParamLimits

0x2cf2,	// (0x00094a06) mup_equalizer_pane_cp2

0x2d17,	// (0x00094a2b) mup_equalizer_pane_cp3_ParamLimits

0x2d17,	// (0x00094a2b) mup_equalizer_pane_cp3

0x2d40,	// (0x00094a54) mup_equalizer_pane_cp4_ParamLimits

0x2d40,	// (0x00094a54) mup_equalizer_pane_cp4

0x2d69,	// (0x00094a7d) mup_equalizer_pane_cp5

0x2d81,	// (0x00094a95) mup_equalizer_pane_cp6

0x2d99,	// (0x00094aad) mup_equalizer_pane_cp7

0x3dcb,	// (0x00095adf) bg_popup_call_poc_act_pane_g9

0x3dd3,	// (0x00095ae7) bg_popup_call_poc_act_pane_g10

0x3ddb,	// (0x00095aef) bg_popup_call_poc_act_pane_g11

0x000a,

0xee84,	// (0x000a0b98) mup_scale_pane

0xee9c,	// (0x000a0bb0) mup_scale_pane_g1

0xde01,	// (0x0009fb15) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x000a10f3) mup_scale_pane_g

0xde25,	// (0x0009fb39) msg_data_pane

0xde2d,	// (0x0009fb41) scroll_pane_cp017

0x2dc3,	// (0x00094ad7) bg_list_pane_cp04_ParamLimits

0x2dc3,	// (0x00094ad7) bg_list_pane_cp04

0xde35,	// (0x0009fb49) msg_data_pane_g1

0x2deb,	// (0x00094aff) msg_data_pane_g2

0x2df5,	// (0x00094b09) msg_data_pane_g3

0x2dff,	// (0x00094b13) msg_data_pane_g4

0x2e07,	// (0x00094b1b) msg_data_pane_g5

0x2e0f,	// (0x00094b23) msg_data_pane_g6

0x2e17,	// (0x00094b2b) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x000a1102) msg_data_pane_g

0x2e1f,	// (0x00094b33) msg_text_pane_ParamLimits

0x2e1f,	// (0x00094b33) msg_text_pane

0x2e52,	// (0x00094b66) qrid_highlight_pane_cp011_ParamLimits

0x2e52,	// (0x00094b66) qrid_highlight_pane_cp011

0xec29,	// (0x000a093d) msg_body_pane

0xec29,	// (0x000a093d) msg_header_pane

0xde46,	// (0x0009fb5a) input_focus_pane_cp07

0x2e76,	// (0x00094b8a) msg_header_pane_t1_ParamLimits

0x2e76,	// (0x00094b8a) msg_header_pane_t1

0x2e8c,	// (0x00094ba0) msg_header_pane_t2_ParamLimits

0x2e8c,	// (0x00094ba0) msg_header_pane_t2

0x0001,

0xf402,	// (0x000a1116) msg_header_pane_t_ParamLimits

0xf402,	// (0x000a1116) msg_header_pane_t

0xde5b,	// (0x0009fb6f) msg_body_pane_g1

0x2ea3,	// (0x00094bb7) msg_body_pane_t1_ParamLimits

0x2ea3,	// (0x00094bb7) msg_body_pane_t1

0x2ed4,	// (0x00094be8) msg_body_pane_t2_ParamLimits

0x2ed4,	// (0x00094be8) msg_body_pane_t2

0x2ee6,	// (0x00094bfa) msg_body_pane_t3_ParamLimits

0x2ee6,	// (0x00094bfa) msg_body_pane_t3

0x0002,

0xf407,	// (0x000a111b) msg_body_pane_t_ParamLimits

0xf407,	// (0x000a111b) msg_body_pane_t

0x2f32,	// (0x00094c46) main_viewer_pane_g1_ParamLimits

0x2f32,	// (0x00094c46) main_viewer_pane_g1

0x2f40,	// (0x00094c54) main_viewer_pane_g2_ParamLimits

0x2f40,	// (0x00094c54) main_viewer_pane_g2

0x2f4e,	// (0x00094c62) main_viewer_pane_g3_ParamLimits

0x2f4e,	// (0x00094c62) main_viewer_pane_g3

0x2f5d,	// (0x00094c71) main_viewer_pane_g4_ParamLimits

0x2f5d,	// (0x00094c71) main_viewer_pane_g4

0xa440,	// (0x0009c154) main_viewer_pane_g5_ParamLimits

0xa440,	// (0x0009c154) main_viewer_pane_g5

0xa440,	// (0x0009c154) main_viewer_pane_g7_ParamLimits

0xa440,	// (0x0009c154) main_viewer_pane_g7

0xa452,	// (0x0009c166) main_viewer_pane_g8_ParamLimits

0xa452,	// (0x0009c166) main_viewer_pane_g8

0x0007,

0xf417,	// (0x000a112b) main_viewer_pane_g_ParamLimits

0xf417,	// (0x000a112b) main_viewer_pane_g

0xde63,	// (0x0009fb77) viewer_content_pane_ParamLimits

0xde63,	// (0x0009fb77) viewer_content_pane

0x2f9b,	// (0x00094caf) main_postcard_pane_g1_ParamLimits

0x2f9b,	// (0x00094caf) main_postcard_pane_g1

0x2fb1,	// (0x00094cc5) main_postcard_pane_g2_ParamLimits

0x2fb1,	// (0x00094cc5) main_postcard_pane_g2

0x2fc7,	// (0x00094cdb) main_postcard_pane_g3_ParamLimits

0x2fc7,	// (0x00094cdb) main_postcard_pane_g3

0x0005,

0xf428,	// (0x000a113c) main_postcard_pane_g_ParamLimits

0xf428,	// (0x000a113c) main_postcard_pane_g

0x2fde,	// (0x00094cf2) main_postcard_pane_g4

0x4565,	// (0x00096279) smil_status_volume_pane_g2

0x3021,	// (0x00094d35) postcard_pane_ParamLimits

0x3021,	// (0x00094d35) postcard_pane

0xde71,	// (0x0009fb85) postcard_pane_g1_ParamLimits

0xde71,	// (0x0009fb85) postcard_pane_g1

0x3071,	// (0x00094d85) postcard_pane_g2_ParamLimits

0x3071,	// (0x00094d85) postcard_pane_g2

0x307d,	// (0x00094d91) postcard_pane_g3_ParamLimits

0x307d,	// (0x00094d91) postcard_pane_g3

0xde7f,	// (0x0009fb93) postcard_pane_g4_ParamLimits

0xde7f,	// (0x0009fb93) postcard_pane_g4

0x3089,	// (0x00094d9d) postcard_pane_g5_ParamLimits

0x3089,	// (0x00094d9d) postcard_pane_g5

0x309e,	// (0x00094db2) postcard_pane_g6_ParamLimits

0x309e,	// (0x00094db2) postcard_pane_g6

0xde71,	// (0x0009fb85) postcard_pane_g7_ParamLimits

0xde71,	// (0x0009fb85) postcard_pane_g7

0x0006,

0xf435,	// (0x000a1149) postcard_pane_g_ParamLimits

0xf435,	// (0x000a1149) postcard_pane_g

0x30b6,	// (0x00094dca) main_mp2_pane_g1_ParamLimits

0x30b6,	// (0x00094dca) main_mp2_pane_g1

0x30c4,	// (0x00094dd8) main_mp2_pane_g2_ParamLimits

0x30c4,	// (0x00094dd8) main_mp2_pane_g2

0x30d0,	// (0x00094de4) main_mp2_pane_g3_ParamLimits

0x30d0,	// (0x00094de4) main_mp2_pane_g3

0x0002,

0xf444,	// (0x000a1158) main_mp2_pane_g_ParamLimits

0xf444,	// (0x000a1158) main_mp2_pane_g

0x30dc,	// (0x00094df0) main_mp2_pane_t1_ParamLimits

0x30dc,	// (0x00094df0) main_mp2_pane_t1

0x30f3,	// (0x00094e07) main_mp2_pane_t2_ParamLimits

0x30f3,	// (0x00094e07) main_mp2_pane_t2

0x3107,	// (0x00094e1b) main_mp2_pane_t3_ParamLimits

0x3107,	// (0x00094e1b) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x000a115f) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x000a115f) main_mp2_pane_t

0xde8d,	// (0x0009fba1) pec_content_pane_ParamLimits

0xde8d,	// (0x0009fba1) pec_content_pane

0xd4e7,	// (0x0009f1fb) scroll_pane_cp015

0xde9f,	// (0x0009fbb3) pec_attribute_pane_ParamLimits

0xde9f,	// (0x0009fbb3) pec_attribute_pane

0x3119,	// (0x00094e2d) pec_content_pane_g1_ParamLimits

0x3119,	// (0x00094e2d) pec_content_pane_g1

0xdeaf,	// (0x0009fbc3) pec_content_pane_t1_ParamLimits

0xdeaf,	// (0x0009fbc3) pec_content_pane_t1

0xdec1,	// (0x0009fbd5) pec_content_pane_t2_ParamLimits

0xdec1,	// (0x0009fbd5) pec_content_pane_t2

0x0001,

0xf452,	// (0x000a1166) pec_content_pane_t_ParamLimits

0xf452,	// (0x000a1166) pec_content_pane_t

0x3125,	// (0x00094e39) list_single_graphic_pane_cp01_ParamLimits

0x3125,	// (0x00094e39) list_single_graphic_pane_cp01

0xee84,	// (0x000a0b98) bg_popup_sub_pane_cp04

0xded3,	// (0x0009fbe7) popup_mup_playback_window_g1

0xdedf,	// (0x0009fbf3) popup_mup_playback_window_t1

0xdef4,	// (0x0009fc08) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x000a116b) popup_mup_playback_window_t

0xdf2b,	// (0x0009fc3f) main_image_pane_g1_ParamLimits

0xdf2b,	// (0x0009fc3f) main_image_pane_g1

0xdf6e,	// (0x0009fc82) scroll_pane_cp018_ParamLimits

0xdf6e,	// (0x0009fc82) scroll_pane_cp018

0xdf86,	// (0x0009fc9a) scroll_pane_cp016_ParamLimits

0xdf86,	// (0x0009fc9a) scroll_pane_cp016

0x31f7,	// (0x00094f0b) smil2_image_pane_ParamLimits

0x31f7,	// (0x00094f0b) smil2_image_pane

0x322d,	// (0x00094f41) smil2_root_pane_ParamLimits

0x322d,	// (0x00094f41) smil2_root_pane

0x3265,	// (0x00094f79) smil2_text_pane_ParamLimits

0x3265,	// (0x00094f79) smil2_text_pane

0xec29,	// (0x000a093d) bg_list_pane_cp06

0xdfc2,	// (0x0009fcd6) grid_radio_pane

0xec29,	// (0x000a093d) bg_popup_window_pane_cp06

0xdfcc,	// (0x0009fce0) main_fmradio_pane_t1

0x3e6e,	// (0x00095b82) heading_pane_cp04

0xdfda,	// (0x0009fcee) main_fmradio_pane_t2

0x3e76,	// (0x00095b8a) popup_cale_lunar_info_window_g1

0xdfe8,	// (0x0009fcfc) main_fmradio_pane_t3

0x3e7e,	// (0x00095b92) popup_cale_lunar_info_window_g2

0xdff8,	// (0x0009fd0c) main_fmradio_pane_t4

0x0001,

0xe006,	// (0x0009fd1a) main_fmradio_pane_t5

0x0004,

0xf537,	// (0x000a124b) popup_cale_lunar_info_window_g

0xf46c,	// (0x000a1180) main_fmradio_pane_t

0xe014,	// (0x0009fd28) wait_bar_pane_cp03

0xe01c,	// (0x0009fd30) cell_fmradio_pane_ParamLimits

0xe01c,	// (0x0009fd30) cell_fmradio_pane

0xde71,	// (0x0009fb85) cell_fmradio_pane_g1_ParamLimits

0xde71,	// (0x0009fb85) cell_fmradio_pane_g1

0xec29,	// (0x000a093d) grid_highlight_pane_cp011

0xe031,	// (0x0009fd45) poc_content_pane_ParamLimits

0xe031,	// (0x0009fd45) poc_content_pane

0xe043,	// (0x0009fd57) scroll_pane_cp019

0x32f5,	// (0x00095009) popup_call_poc_act_window_ParamLimits

0x32f5,	// (0x00095009) popup_call_poc_act_window

0x3319,	// (0x0009502d) popup_call_poc_inact_window_ParamLimits

0x3319,	// (0x0009502d) popup_call_poc_inact_window

0xf50e,	// (0x000a1222) bg_popup_call_poc_act_pane_g

0x3d53,	// (0x00095a67) bg_popup_call_poc_inact_pane_g1

0x3d5b,	// (0x00095a6f) bg_popup_call_poc_inact_pane_g2

0xe04b,	// (0x0009fd5f) popup_call_poc_act_window_g2

0x3d63,	// (0x00095a77) bg_popup_call_poc_inact_pane_g3

0x3d6b,	// (0x00095a7f) bg_popup_call_poc_inact_pane_g4

0x3d73,	// (0x00095a87) bg_popup_call_poc_inact_pane_g5

0xe053,	// (0x0009fd67) popup_call_poc_act_window_t1_ParamLimits

0xe053,	// (0x0009fd67) popup_call_poc_act_window_t1

0xe07b,	// (0x0009fd8f) popup_call_poc_act_window_t2_ParamLimits

0xe07b,	// (0x0009fd8f) popup_call_poc_act_window_t2

0xe0a3,	// (0x0009fdb7) popup_call_poc_act_window_t3_ParamLimits

0xe0a3,	// (0x0009fdb7) popup_call_poc_act_window_t3

0xe0cb,	// (0x0009fddf) popup_call_poc_act_window_t4_ParamLimits

0xe0cb,	// (0x0009fddf) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x000a118b) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x000a118b) popup_call_poc_act_window_t

0x3d7b,	// (0x00095a8f) bg_popup_call_poc_inact_pane_g6

0x3d83,	// (0x00095a97) bg_popup_call_poc_inact_pane_g7

0x3d8b,	// (0x00095a9f) bg_popup_call_poc_inact_pane_g8

0xe0dd,	// (0x0009fdf1) popup_call_poc_inact_window_g2

0x3d93,	// (0x00095aa7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4fb,	// (0x000a120f) bg_popup_call_poc_inact_pane_g

0xe0e5,	// (0x0009fdf9) popup_call_poc_inact_window_t1_ParamLimits

0xe0e5,	// (0x0009fdf9) popup_call_poc_inact_window_t1

0xe0fa,	// (0x0009fe0e) popup_call_poc_inact_window_t2_ParamLimits

0xe0fa,	// (0x0009fe0e) popup_call_poc_inact_window_t2

0xe10f,	// (0x0009fe23) popup_call_poc_inact_window_t3_ParamLimits

0xe10f,	// (0x0009fe23) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x000a1194) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x000a1194) popup_call_poc_inact_window_t

0x444a,	// (0x0009615e) context_pane_ParamLimits

0x44b4,	// (0x000961c8) signal_pane_ParamLimits

0xd34c,	// (0x0009f060) main_call2_pane

0xa49b,	// (0x0009c1af) popup_phob_thumbnail2_window_ParamLimits

0xa49b,	// (0x0009c1af) popup_phob_thumbnail2_window

0xa428,	// (0x0009c13c) aid_hotspot_pointer_arrow_pane

0xa430,	// (0x0009c144) aid_hotspot_pointer_hand_pane

0x3eef,	// (0x00095c03) phob_pre_status_pane_g5

0xe217,	// (0x0009ff2b) cams_zoom_pane_ParamLimits

0xe217,	// (0x0009ff2b) image_vga_pane_ParamLimits

0xeeff,	// (0x000a0c13) main_camera_pane_g1_ParamLimits

0xeeff,	// (0x000a0c13) main_camera_pane_g2_ParamLimits

0xeeff,	// (0x000a0c13) main_camera_pane_g3_ParamLimits

0xeeff,	// (0x000a0c13) main_camera_pane_g4_ParamLimits

0xeeff,	// (0x000a0c13) main_camera_pane_g5_ParamLimits

0xeeff,	// (0x000a0c13) main_camera_pane_g6_ParamLimits

0xeeff,	// (0x000a0c13) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x000a0ebf) main_camera_pane_g_ParamLimits

0xd354,	// (0x0009f068) main_camera_pane_t1_ParamLimits

0xd354,	// (0x0009f068) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x000a0ed0) main_camera_pane_t_ParamLimits

0xee84,	// (0x000a0b98) bg_popup_preview_window_pane_cp01_ParamLimits

0xee84,	// (0x000a0b98) bg_popup_preview_window_pane_cp01

0xe124,	// (0x0009fe38) popup_phob_thumbnail2_window_g1_ParamLimits

0xe124,	// (0x0009fe38) popup_phob_thumbnail2_window_g1

0xec29,	// (0x000a093d) call2_cli_visual_pane

0x334d,	// (0x00095061) popup_call2_audio_conf_window_ParamLimits

0x334d,	// (0x00095061) popup_call2_audio_conf_window

0x3375,	// (0x00095089) popup_call2_audio_first_window_ParamLimits

0x3375,	// (0x00095089) popup_call2_audio_first_window

0x340b,	// (0x0009511f) popup_call2_audio_in_window_ParamLimits

0x340b,	// (0x0009511f) popup_call2_audio_in_window

0x3457,	// (0x0009516b) popup_call2_audio_out_window_ParamLimits

0x3457,	// (0x0009516b) popup_call2_audio_out_window

0x34c9,	// (0x000951dd) popup_call2_audio_second_window_ParamLimits

0x34c9,	// (0x000951dd) popup_call2_audio_second_window

0x352f,	// (0x00095243) popup_call2_audio_wait_window_ParamLimits

0x352f,	// (0x00095243) popup_call2_audio_wait_window

0xec29,	// (0x000a093d) bg_popup_call2_act_pane_cp03

0xee66,	// (0x000a0b7a) list_conf_pane_cp

0xe130,	// (0x0009fe44) popup_call2_audio_conf_window_t1

0xe26d,	// (0x0009ff81) list_single_graphic_popup_conf2_pane_ParamLimits

0xe26d,	// (0x0009ff81) list_single_graphic_popup_conf2_pane

0xdb10,	// (0x0009f824) list_highlight_pane_cp04

0xe280,	// (0x0009ff94) list_single_graphic_popup_conf2_pane_g1

0xdb21,	// (0x0009f835) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x000a119b) list_single_graphic_popup_conf2_pane_g

0xe28a,	// (0x0009ff9e) list_single_graphic_popup_conf2_pane_t1

0xe298,	// (0x0009ffac) bg_popup_call2_act_pane_cp01_ParamLimits

0xe298,	// (0x0009ffac) bg_popup_call2_act_pane_cp01

0xe322,	// (0x000a0036) call_type_pane_cp05_ParamLimits

0xe322,	// (0x000a0036) call_type_pane_cp05

0xe376,	// (0x000a008a) popup_call2_audio_second_window_g1_ParamLimits

0xe376,	// (0x000a008a) popup_call2_audio_second_window_g1

0xe3ca,	// (0x000a00de) popup_call2_audio_second_window_g2_ParamLimits

0xe3ca,	// (0x000a00de) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x000a11a0) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x000a11a0) popup_call2_audio_second_window_g

0xe42f,	// (0x000a0143) popup_call2_audio_second_window_t1_ParamLimits

0xe42f,	// (0x000a0143) popup_call2_audio_second_window_t1

0xe4ea,	// (0x000a01fe) popup_call2_audio_second_window_t2_ParamLimits

0xe4ea,	// (0x000a01fe) popup_call2_audio_second_window_t2

0xe53d,	// (0x000a0251) popup_call2_audio_second_window_t3_ParamLimits

0xe53d,	// (0x000a0251) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x000a11a7) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x000a11a7) popup_call2_audio_second_window_t

0xec29,	// (0x000a093d) bg_popup_call2_in_pane_cp02

0xec33,	// (0x000a0947) call_type_pane_cp04

0x3569,	// (0x0009527d) popup_call2_audio_wait_window_g1

0x3571,	// (0x00095285) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x000a11b0) popup_call2_audio_wait_window_g

0xec4b,	// (0x000a095f) popup_call2_audio_wait_window_t3

0xe630,	// (0x000a0344) bg_popup_call2_act_pane_ParamLimits

0xe630,	// (0x000a0344) bg_popup_call2_act_pane

0xe6f0,	// (0x000a0404) call_type_pane_cp03_ParamLimits

0xe6f0,	// (0x000a0404) call_type_pane_cp03

0xe754,	// (0x000a0468) popup_call2_audio_first_window_g1_ParamLimits

0xe754,	// (0x000a0468) popup_call2_audio_first_window_g1

0xe7c4,	// (0x000a04d8) popup_call2_audio_first_window_g2_ParamLimits

0xe7c4,	// (0x000a04d8) popup_call2_audio_first_window_g2

0xe13e,	// (0x0009fe52) popup_call2_audio_first_window_g3_ParamLimits

0xe13e,	// (0x0009fe52) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x000a11b5) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x000a11b5) popup_call2_audio_first_window_g

0x3579,	// (0x0009528d) popup_call2_audio_first_window_t1_ParamLimits

0x3579,	// (0x0009528d) popup_call2_audio_first_window_t1

0x367c,	// (0x00095390) popup_call2_audio_first_window_t4_ParamLimits

0x367c,	// (0x00095390) popup_call2_audio_first_window_t4

0x375f,	// (0x00095473) popup_call2_audio_first_window_t5_ParamLimits

0x375f,	// (0x00095473) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x000a11c0) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x000a11c0) popup_call2_audio_first_window_t

0xee7c,	// (0x000a0b90) bg_popup_call2_act_pane_g1

0x3e88,	// (0x00095b9c) popup_cale_lunar_info_window_t1

0x3e96,	// (0x00095baa) popup_cale_lunar_info_window_t2

0x3ea4,	// (0x00095bb8) popup_cale_lunar_info_window_t3

0xec29,	// (0x000a093d) bg_popup_call2_bubble_pane

0x3860,	// (0x00095574) bg_popup_call2_in_pane_cp01_ParamLimits

0x3860,	// (0x00095574) bg_popup_call2_in_pane_cp01

0xe905,	// (0x000a0619) call_type_pane_cp02

0x38a8,	// (0x000955bc) popup_call2_audio_out_window_g1_ParamLimits

0x38a8,	// (0x000955bc) popup_call2_audio_out_window_g1

0x38d4,	// (0x000955e8) popup_call2_audio_out_window_g2_ParamLimits

0x38d4,	// (0x000955e8) popup_call2_audio_out_window_g2

0x38fc,	// (0x00095610) popup_call2_audio_out_window_g3_ParamLimits

0x38fc,	// (0x00095610) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x000a11c9) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x000a11c9) popup_call2_audio_out_window_g

0x3937,	// (0x0009564b) popup_call2_audio_out_window_t1_ParamLimits

0x3937,	// (0x0009564b) popup_call2_audio_out_window_t1

0x3996,	// (0x000956aa) popup_call2_audio_out_window_t2_ParamLimits

0x3996,	// (0x000956aa) popup_call2_audio_out_window_t2

0x39ea,	// (0x000956fe) popup_call2_audio_out_window_t3_ParamLimits

0x39ea,	// (0x000956fe) popup_call2_audio_out_window_t3

0x3a00,	// (0x00095714) popup_call2_audio_out_window_t4_ParamLimits

0x3a00,	// (0x00095714) popup_call2_audio_out_window_t4

0x3a16,	// (0x0009572a) popup_call2_audio_out_window_t5_ParamLimits

0x3a16,	// (0x0009572a) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x000a11d2) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x000a11d2) popup_call2_audio_out_window_t

0x3a7a,	// (0x0009578e) bg_popup_call2_in_pane_ParamLimits

0x3a7a,	// (0x0009578e) bg_popup_call2_in_pane

0x3ad6,	// (0x000957ea) popup_call2_audio_in_window_g1_ParamLimits

0x3ad6,	// (0x000957ea) popup_call2_audio_in_window_g1

0x3b0e,	// (0x00095822) popup_call2_audio_in_window_g2_ParamLimits

0x3b0e,	// (0x00095822) popup_call2_audio_in_window_g2

0x3b46,	// (0x0009585a) popup_call2_audio_in_window_g3_ParamLimits

0x3b46,	// (0x0009585a) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x000a11df) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x000a11df) popup_call2_audio_in_window_g

0x3b9e,	// (0x000958b2) popup_call2_audio_in_window_t1_ParamLimits

0x3b9e,	// (0x000958b2) popup_call2_audio_in_window_t1

0x3c1e,	// (0x00095932) popup_call2_audio_in_window_t2_ParamLimits

0x3c1e,	// (0x00095932) popup_call2_audio_in_window_t2

0x3c9e,	// (0x000959b2) popup_call2_audio_in_window_t3_ParamLimits

0x3c9e,	// (0x000959b2) popup_call2_audio_in_window_t3

0x3cb8,	// (0x000959cc) popup_call2_audio_in_window_t4_ParamLimits

0x3cb8,	// (0x000959cc) popup_call2_audio_in_window_t4

0x3cca,	// (0x000959de) popup_call2_audio_in_window_t5_ParamLimits

0x3cca,	// (0x000959de) popup_call2_audio_in_window_t5

0x3cdf,	// (0x000959f3) popup_call2_audio_in_window_t6_ParamLimits

0x3cdf,	// (0x000959f3) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x000a11e8) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x000a11e8) popup_call2_audio_in_window_t

0xee7c,	// (0x000a0b90) bg_popup_call2_in_pane_g1

0x3eb2,	// (0x00095bc6) popup_cale_lunar_info_window_t4

0x0003,

0xf53c,	// (0x000a1250) popup_cale_lunar_info_window_t

0xee84,	// (0x000a0b98) bg_popup_call2_rect_pane_ParamLimits

0xee84,	// (0x000a0b98) bg_popup_call2_rect_pane

0xec29,	// (0x000a093d) call2_cli_visual_graphic_pane

0xec29,	// (0x000a093d) call2_cli_visual_text_pane

0xa4c2,	// (0x0009c1d6) smil_status_volume_pane_g3

0x0002,

0xee9c,	// (0x000a0bb0) call2_cli_visual_graphic_pane_g1

0xee9c,	// (0x000a0bb0) call2_cli_visual_graphic_pane_g2

0xee9c,	// (0x000a0bb0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x000a11f5) call2_cli_visual_graphic_pane_g

0x3d13,	// (0x00095a27) bg_popup_call2_rect_pane_g1

0xf051,	// (0x000a0d65) bg_popup_call2_rect_pane_g2

0x3d1b,	// (0x00095a2f) bg_popup_call2_rect_pane_g3

0x3d23,	// (0x00095a37) bg_popup_call2_rect_pane_g4

0x3d2b,	// (0x00095a3f) bg_popup_call2_rect_pane_g5

0x3d33,	// (0x00095a47) bg_popup_call2_rect_pane_g6

0x3d3b,	// (0x00095a4f) bg_popup_call2_rect_pane_g7

0x3d43,	// (0x00095a57) bg_popup_call2_rect_pane_g8

0x3d4b,	// (0x00095a5f) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x000a11fc) bg_popup_call2_rect_pane_g

0x3d53,	// (0x00095a67) bg_popup_call2_bubble_pane_g1

0x3d5b,	// (0x00095a6f) bg_popup_call2_bubble_pane_g2

0x3d63,	// (0x00095a77) bg_popup_call2_bubble_pane_g3

0x3d6b,	// (0x00095a7f) bg_popup_call2_bubble_pane_g4

0x3d73,	// (0x00095a87) bg_popup_call2_bubble_pane_g5

0x3d7b,	// (0x00095a8f) bg_popup_call2_bubble_pane_g6

0x3d83,	// (0x00095a97) bg_popup_call2_bubble_pane_g7

0x3d8b,	// (0x00095a9f) bg_popup_call2_bubble_pane_g8

0x3d93,	// (0x00095aa7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x000a120f) bg_popup_call2_bubble_pane_g

0x0e02,	// (0x00092b16) aid_cale_week_size_cell_pane

0x1431,	// (0x00093145) aid_cams_cif_uncrop_pane_ParamLimits

0x1431,	// (0x00093145) aid_cams_cif_uncrop_pane

0x1587,	// (0x0009329b) aid_cams_size_cell_ParamLimits

0x1587,	// (0x0009329b) aid_cams_size_cell

0x159b,	// (0x000932af) grid_cams_pane_ParamLimits

0x15b5,	// (0x000932c9) linegrid_cams_pane_ParamLimits

0x1693,	// (0x000933a7) call_video_pane_t1

0x16ad,	// (0x000933c1) call_video_pane_t2

0x0001,

0xf208,	// (0x000a0f1c) call_video_pane_t

0x1ab1,	// (0x000937c5) aid_cale_month_size_cell_pane_ParamLimits

0x1ab1,	// (0x000937c5) aid_cale_month_size_cell_pane

0xf580,	// (0x000a1294) smil_status_volume_pane_g

0xa4cf,	// (0x0009c1e3) volume_smil_pane_ParamLimits

0xa25e,	// (0x0009bf72) aid_popup2_width_pane

0x0d55,	// (0x00092a69) cell_qdial_pane_g4_ParamLimits

0x0d55,	// (0x00092a69) cell_qdial_pane_g4

0x29cd,	// (0x000946e1) aid_blid_cardinal_pane_ParamLimits

0x29dd,	// (0x000946f1) aid_blid_destination_pane_ParamLimits

0x29dd,	// (0x000946f1) aid_blid_destination_pane

0xee84,	// (0x000a0b98) bg_popup_call_poc_act_pane_ParamLimits

0xee84,	// (0x000a0b98) bg_popup_call_poc_act_pane

0xee84,	// (0x000a0b98) bg_popup_call_poc_inact_pane_ParamLimits

0xee84,	// (0x000a0b98) bg_popup_call_poc_inact_pane

0x3da3,	// (0x00095ab7) bg_popup_call_poc_act_pane_g1

0x3dab,	// (0x00095abf) bg_popup_call_poc_act_pane_g2

0x3db3,	// (0x00095ac7) bg_popup_call_poc_act_pane_g3

0x3d6b,	// (0x00095a7f) bg_popup_call_poc_act_pane_g4

0x3d73,	// (0x00095a87) bg_popup_call_poc_act_pane_g5

0x3dbb,	// (0x00095acf) bg_popup_call_poc_act_pane_g6

0x3d83,	// (0x00095a97) bg_popup_call_poc_act_pane_g7

0x3dc3,	// (0x00095ad7) bg_popup_call_poc_act_pane_g8

0xec29,	// (0x000a093d) main_usb_pane

0xa472,	// (0x0009c186) popup_cale_lunar_info_window

0x197a,	// (0x0009368e) im_reading_pane_t1_ParamLimits

0xd43f,	// (0x0009f153) list_im_pane_ParamLimits

0xd450,	// (0x0009f164) scroll_pane_cp07_ParamLimits

0xec29,	// (0x000a093d) grid_highlight_pane_cp012

0xee84,	// (0x000a0b98) mup_scale_pane_ParamLimits

0xde71,	// (0x0009fb85) main_usb_pane_g1_ParamLimits

0xde71,	// (0x0009fb85) main_usb_pane_g1

0x3de3,	// (0x00095af7) main_usb_pane_g2_ParamLimits

0x3de3,	// (0x00095af7) main_usb_pane_g2

0x0001,

0xf525,	// (0x000a1239) main_usb_pane_g_ParamLimits

0xf525,	// (0x000a1239) main_usb_pane_g

0x3df9,	// (0x00095b0d) main_usb_pane_t1_ParamLimits

0x3df9,	// (0x00095b0d) main_usb_pane_t1

0x3e0b,	// (0x00095b1f) main_usb_pane_t2_ParamLimits

0x3e0b,	// (0x00095b1f) main_usb_pane_t2

0x3e1d,	// (0x00095b31) main_usb_pane_t3_ParamLimits

0x3e1d,	// (0x00095b31) main_usb_pane_t3

0x3e2f,	// (0x00095b43) main_usb_pane_t4_ParamLimits

0x3e2f,	// (0x00095b43) main_usb_pane_t4

0x3e44,	// (0x00095b58) main_usb_pane_t5_ParamLimits

0x3e44,	// (0x00095b58) main_usb_pane_t5

0x3e59,	// (0x00095b6d) main_usb_pane_t6_ParamLimits

0x3e59,	// (0x00095b6d) main_usb_pane_t6

0x0005,

0xf52a,	// (0x000a123e) main_usb_pane_t_ParamLimits

0x296c,	// (0x00094680) aid_text_placing

0x2977,	// (0x0009468b) main_location2_pane_t1_ParamLimits

0x298d,	// (0x000946a1) main_location2_pane_t2_ParamLimits

0x29a3,	// (0x000946b7) main_location2_pane_t3_ParamLimits

0x29b9,	// (0x000946cd) main_location2_pane_t4_ParamLimits

0x29b9,	// (0x000946cd) main_location2_pane_t4

0xf344,	// (0x000a1058) main_location2_pane_t_ParamLimits

0xeeb2,	// (0x000a0bc6) find_pinb_pane_g2_ParamLimits

0xeeb2,	// (0x000a0bc6) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x000a0dd4) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x000a0dd4) find_pinb_pane_g

0xeebe,	// (0x000a0bd2) find_pinb_pane_t1_ParamLimits

0xeed0,	// (0x000a0be4) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x000a0dd9) find_pinb_pane_t_ParamLimits

0xec29,	// (0x000a093d) main_call3_pane

0x20b6,	// (0x00093dca) cale_month_day_heading_pane_t1_ParamLimits

0x213c,	// (0x00093e50) cale_month_day_heading_pane_t2_ParamLimits

0x21b5,	// (0x00093ec9) cale_month_day_heading_pane_t3_ParamLimits

0x222e,	// (0x00093f42) cale_month_day_heading_pane_t4_ParamLimits

0x22af,	// (0x00093fc3) cale_month_day_heading_pane_t5_ParamLimits

0x2338,	// (0x0009404c) cale_month_day_heading_pane_t6_ParamLimits

0x23c9,	// (0x000940dd) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x000a0f54) cale_month_day_heading_pane_t_ParamLimits

0xd6c3,	// (0x0009f3d7) smil_status_volume_pane

0x3045,	// (0x00094d59) postcard_address_pane_ParamLimits

0x3045,	// (0x00094d59) postcard_address_pane

0x305b,	// (0x00094d6f) postcard_message_pane_ParamLimits

0x305b,	// (0x00094d6f) postcard_message_pane

0x3cf4,	// (0x00095a08) call2_cli_visual_pane_t1_ParamLimits

0x3cf4,	// (0x00095a08) call2_cli_visual_pane_t1

0x471f,	// (0x00096433) postcard_message_pane_t1_ParamLimits

0x471f,	// (0x00096433) postcard_message_pane_t1

0x4707,	// (0x0009641b) postcard_address_pane_t1_ParamLimits

0x4707,	// (0x0009641b) postcard_address_pane_t1

0x46f3,	// (0x00096407) popup_call3_audio_in_window_ParamLimits

0x46f3,	// (0x00096407) popup_call3_audio_in_window

0x4578,	// (0x0009628c) bg_popup_call3_in_pane_ParamLimits

0x4578,	// (0x0009628c) bg_popup_call3_in_pane

0x45f4,	// (0x00096308) popup_call3_audio_in_window_g1_ParamLimits

0x45f4,	// (0x00096308) popup_call3_audio_in_window_g1

0x4614,	// (0x00096328) popup_call3_audio_in_window_g2_ParamLimits

0x4614,	// (0x00096328) popup_call3_audio_in_window_g2

0x4634,	// (0x00096348) popup_call3_audio_in_window_g3_ParamLimits

0x4634,	// (0x00096348) popup_call3_audio_in_window_g3

0x0003,

0xf587,	// (0x000a129b) popup_call3_audio_in_window_g_ParamLimits

0xf587,	// (0x000a129b) popup_call3_audio_in_window_g

0x4665,	// (0x00096379) popup_call3_audio_in_window_t1_ParamLimits

0x4665,	// (0x00096379) popup_call3_audio_in_window_t1

0x46a3,	// (0x000963b7) popup_call3_audio_in_window_t2_ParamLimits

0x46a3,	// (0x000963b7) popup_call3_audio_in_window_t2

0x46e1,	// (0x000963f5) popup_call3_audio_in_window_t3_ParamLimits

0x46e1,	// (0x000963f5) popup_call3_audio_in_window_t3

0x0002,

0xf590,	// (0x000a12a4) popup_call3_audio_in_window_t_ParamLimits

0xf590,	// (0x000a12a4) popup_call3_audio_in_window_t

0xd34c,	// (0x0009f060) bg_popup_call3_rect_pane

0x3d13,	// (0x00095a27) bg_popup_call3_rect_pane_g1

0xf051,	// (0x000a0d65) bg_popup_call3_rect_pane_g2

0x3d1b,	// (0x00095a2f) bg_popup_call3_rect_pane_g3

0x3d23,	// (0x00095a37) bg_popup_call3_rect_pane_g4

0x3d2b,	// (0x00095a3f) bg_popup_call3_rect_pane_g5

0x3d33,	// (0x00095a47) bg_popup_call3_rect_pane_g6

0x3d3b,	// (0x00095a4f) bg_popup_call3_rect_pane_g7

0xe14c,	// (0x0009fe60) mup_visualizer_osc_pane

0xe14c,	// (0x0009fe60) mup_visualizer_spec_pane

0x45a8,	// (0x000962bc) call3_video_qcif_pane_ParamLimits

0x45a8,	// (0x000962bc) call3_video_qcif_pane

0x45bb,	// (0x000962cf) call3_video_qcif_uncrop_pane_ParamLimits

0x45bb,	// (0x000962cf) call3_video_qcif_uncrop_pane

0x45cb,	// (0x000962df) call3_video_subqcif_pane_ParamLimits

0x45cb,	// (0x000962df) call3_video_subqcif_pane

0x45e1,	// (0x000962f5) call3_video_subqcif_uncrop_pane_ParamLimits

0x45e1,	// (0x000962f5) call3_video_subqcif_uncrop_pane

0x4654,	// (0x00096368) popup_call3_audio_in_window_g4_ParamLimits

0x4654,	// (0x00096368) popup_call3_audio_in_window_g4

0xe14c,	// (0x0009fe60) mup_spec_half_pane

0xe14c,	// (0x0009fe60) mup_spec_half_pane_cp

0xe14c,	// (0x0009fe60) mup_osc_middle_pane

0xd382,	// (0x0009f096) mup_visualizer_osc_pane_g1

0x452b,	// (0x0009623f) mup_spec_bar_pane_ParamLimits

0x452b,	// (0x0009623f) mup_spec_bar_pane

0xd382,	// (0x0009f096) mup_spec_bar_pane_g1

0xd382,	// (0x0009f096) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x000a10d2) mup_spec_bar_pane_g

0x0e02,	// (0x00092b16) aid_cale_week_size_cell_pane_ParamLimits

0x0e1c,	// (0x00092b30) bg_cale_heading_pane_ParamLimits

0x0e40,	// (0x00092b54) bg_cale_pane_cp01_ParamLimits

0x0e5d,	// (0x00092b71) cale_week_corner_pane_ParamLimits

0x0e7c,	// (0x00092b90) cale_week_day_heading_pane_ParamLimits

0x0ea5,	// (0x00092bb9) cale_week_scroll_pane_g1_ParamLimits

0x0ec4,	// (0x00092bd8) cale_week_scroll_pane_g2_ParamLimits

0x0edc,	// (0x00092bf0) cale_week_scroll_pane_g3_ParamLimits

0x0ef4,	// (0x00092c08) cale_week_scroll_pane_g4_ParamLimits

0x0f0c,	// (0x00092c20) cale_week_scroll_pane_g5_ParamLimits

0x0f2c,	// (0x00092c40) cale_week_scroll_pane_g6_ParamLimits

0x0f4c,	// (0x00092c60) cale_week_scroll_pane_g7_ParamLimits

0x0f70,	// (0x00092c84) cale_week_scroll_pane_g8_ParamLimits

0x0f94,	// (0x00092ca8) cale_week_scroll_pane_g9_ParamLimits

0x0fac,	// (0x00092cc0) cale_week_scroll_pane_g10_ParamLimits

0x0fc4,	// (0x00092cd8) cale_week_scroll_pane_g11_ParamLimits

0x0fdc,	// (0x00092cf0) cale_week_scroll_pane_g12_ParamLimits

0x1000,	// (0x00092d14) cale_week_scroll_pane_g13_ParamLimits

0x1000,	// (0x00092d14) cale_week_scroll_pane_g14_ParamLimits

0x1000,	// (0x00092d14) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x000a0e65) cale_week_scroll_pane_g_ParamLimits

0x1048,	// (0x00092d5c) cale_week_time_pane_ParamLimits

0x106c,	// (0x00092d80) grid_cale_week_pane_ParamLimits

0xd2c2,	// (0x0009efd6) listscroll_cale_week_pane_t1

0xd2d4,	// (0x0009efe8) scroll_pane_cp08_ParamLimits

0x1b29,	// (0x0009383d) cale_month_corner_pane_ParamLimits

0xd699,	// (0x0009f3ad) cale_month_pane_t1

0x2031,	// (0x00093d45) cale_month_week_pane_ParamLimits

0x27ac,	// (0x000944c0) popup_call_status_window_g1_ParamLimits

0x27c0,	// (0x000944d4) popup_call_status_window_g2_ParamLimits

0x27d4,	// (0x000944e8) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x000a0fdf) popup_call_status_window_g_ParamLimits

0xda9d,	// (0x0009f7b1) aid_call2_pane

0x2e68,	// (0x00094b7c) msg_header_pane_g1

0x3045,	// (0x00094d59) postcard_address2_pane_ParamLimits

0x3045,	// (0x00094d59) postcard_address2_pane

0x305b,	// (0x00094d6f) postcard_message2_pane_ParamLimits

0x305b,	// (0x00094d6f) postcard_message2_pane

0x44c2,	// (0x000961d6) message2_row_pane_ParamLimits

0x44c2,	// (0x000961d6) message2_row_pane

0x44e5,	// (0x000961f9) address2_row_pane_ParamLimits

0x44e5,	// (0x000961f9) address2_row_pane

0x44f8,	// (0x0009620c) postcard_message2_row_pane_g1

0x4500,	// (0x00096214) postcard_message2_row_pane_t1

0x44f8,	// (0x0009620c) address2_row_pane_g1

0x4500,	// (0x00096214) address2_row_pane_t1

0x13d9,	// (0x000930ed) aid_size_cell_vorec

0xec29,	// (0x000a093d) main_rss_pane

0x450e,	// (0x00096222) rss_list_single_pane_ParamLimits

0x450e,	// (0x00096222) rss_list_single_pane

0x451c,	// (0x00096230) rss_list_single_pane_t1

0x451c,	// (0x00096230) rss_list_single_pane_t2

0x0001,

0xf57b,	// (0x000a128f) rss_list_single_pane_t

0xec29,	// (0x000a093d) main_camera2_pane

0xec29,	// (0x000a093d) main_video2_pane

0xa4e4,	// (0x0009c1f8) cams_zoom_pane_cp2_ParamLimits

0xa4e4,	// (0x0009c1f8) cams_zoom_pane_cp2

0xa4e4,	// (0x0009c1f8) image2_vga_pane_ParamLimits

0xa4e4,	// (0x0009c1f8) image2_vga_pane

0xa4f2,	// (0x0009c206) main_camera2_pane_g1_ParamLimits

0xa4f2,	// (0x0009c206) main_camera2_pane_g1

0xa4f2,	// (0x0009c206) main_camera2_pane_g2_ParamLimits

0xa4f2,	// (0x0009c206) main_camera2_pane_g2

0xa4f2,	// (0x0009c206) main_camera2_pane_g3_ParamLimits

0xa4f2,	// (0x0009c206) main_camera2_pane_g3

0xa4f2,	// (0x0009c206) main_camera2_pane_g4_ParamLimits

0xa4f2,	// (0x0009c206) main_camera2_pane_g4

0xa4f2,	// (0x0009c206) main_camera2_pane_g5_ParamLimits

0xa4f2,	// (0x0009c206) main_camera2_pane_g5

0xa4f2,	// (0x0009c206) main_camera2_pane_g6_ParamLimits

0xa4f2,	// (0x0009c206) main_camera2_pane_g6

0xa4f2,	// (0x0009c206) main_camera2_pane_g7_ParamLimits

0xa4f2,	// (0x0009c206) main_camera2_pane_g7

0xa4f2,	// (0x0009c206) main_camera2_pane_g8_ParamLimits

0xa4f2,	// (0x0009c206) main_camera2_pane_g8

0x0008,

0xf597,	// (0x000a12ab) main_camera2_pane_g_ParamLimits

0xf597,	// (0x000a12ab) main_camera2_pane_g

0x4749,	// (0x0009645d) main_camera2_pane_t1_ParamLimits

0x4749,	// (0x0009645d) main_camera2_pane_t1

0x4749,	// (0x0009645d) main_camera2_pane_t2_ParamLimits

0x4749,	// (0x0009645d) main_camera2_pane_t2

0x4749,	// (0x0009645d) main_camera2_pane_t3_ParamLimits

0x4749,	// (0x0009645d) main_camera2_pane_t3

0x4749,	// (0x0009645d) main_camera2_pane_t4_ParamLimits

0x4749,	// (0x0009645d) main_camera2_pane_t4

0x0006,

0xf5aa,	// (0x000a12be) main_camera2_pane_t_ParamLimits

0xf5aa,	// (0x000a12be) main_camera2_pane_t

0xa536,	// (0x0009c24a) cams_zoom_pane_cp4_ParamLimits

0xa536,	// (0x0009c24a) cams_zoom_pane_cp4

0x475d,	// (0x00096471) image2_cif_pane_ParamLimits

0x475d,	// (0x00096471) image2_cif_pane

0xa2c9,	// (0x0009bfdd) image2_subqcif_pane_ParamLimits

0xa2c9,	// (0x0009bfdd) image2_subqcif_pane

0x476b,	// (0x0009647f) main_video2_pane_g1_ParamLimits

0x476b,	// (0x0009647f) main_video2_pane_g1

0x476b,	// (0x0009647f) main_video2_pane_g2_ParamLimits

0x476b,	// (0x0009647f) main_video2_pane_g2

0x476b,	// (0x0009647f) main_video2_pane_g3_ParamLimits

0x476b,	// (0x0009647f) main_video2_pane_g3

0x476b,	// (0x0009647f) main_video2_pane_g4_ParamLimits

0x476b,	// (0x0009647f) main_video2_pane_g4

0x476b,	// (0x0009647f) main_video2_pane_g5_ParamLimits

0x476b,	// (0x0009647f) main_video2_pane_g5

0x476b,	// (0x0009647f) main_video2_pane_g6_ParamLimits

0x476b,	// (0x0009647f) main_video2_pane_g6

0x0005,

0xf5b9,	// (0x000a12cd) main_video2_pane_g_ParamLimits

0xf5b9,	// (0x000a12cd) main_video2_pane_g

0x4779,	// (0x0009648d) main_video2_pane_t1_ParamLimits

0x4779,	// (0x0009648d) main_video2_pane_t1

0x4779,	// (0x0009648d) main_video2_pane_t2_ParamLimits

0x4779,	// (0x0009648d) main_video2_pane_t2

0x4779,	// (0x0009648d) main_video2_pane_t3_ParamLimits

0x4779,	// (0x0009648d) main_video2_pane_t3

0x0002,

0xf5c6,	// (0x000a12da) main_video2_pane_t_ParamLimits

0xf5c6,	// (0x000a12da) main_video2_pane_t

0x3f53,	// (0x00095c67) call_muted_g2

0x0001,

0xf56d,	// (0x000a1281) call_muted_g

0xec29,	// (0x000a093d) main_mup2_pane

0xe23d,	// (0x0009ff51) main_mup2_pane_g1_ParamLimits

0xe23d,	// (0x0009ff51) main_mup2_pane_g1

0xe23d,	// (0x0009ff51) main_mup2_pane_g2_ParamLimits

0xe23d,	// (0x0009ff51) main_mup2_pane_g2

0xa570,	// (0x0009c284) main_mup_pane_g13_cp1

0xa2d7,	// (0x0009bfeb) mup_volume_pane_cp1

0xe23d,	// (0x0009ff51) main_mup2_pane_g4_ParamLimits

0xe23d,	// (0x0009ff51) main_mup2_pane_g4

0xe23d,	// (0x0009ff51) main_mup2_pane_g5_ParamLimits

0xe23d,	// (0x0009ff51) main_mup2_pane_g5

0xe23d,	// (0x0009ff51) main_mup2_pane_g6_ParamLimits

0xe23d,	// (0x0009ff51) main_mup2_pane_g6

0xe23d,	// (0x0009ff51) main_mup2_pane_g7_ParamLimits

0xe23d,	// (0x0009ff51) main_mup2_pane_g7

0x0006,

0xf5cd,	// (0x000a12e1) main_mup2_pane_g_ParamLimits

0xf5cd,	// (0x000a12e1) main_mup2_pane_g

0xe24b,	// (0x0009ff5f) main_mup2_pane_t1_ParamLimits

0xe24b,	// (0x0009ff5f) main_mup2_pane_t1

0xe24b,	// (0x0009ff5f) main_mup2_pane_t2_ParamLimits

0xe24b,	// (0x0009ff5f) main_mup2_pane_t2

0xe24b,	// (0x0009ff5f) main_mup2_pane_t3_ParamLimits

0xe24b,	// (0x0009ff5f) main_mup2_pane_t3

0xe24b,	// (0x0009ff5f) main_mup2_pane_t4_ParamLimits

0xe24b,	// (0x0009ff5f) main_mup2_pane_t4

0xe24b,	// (0x0009ff5f) main_mup2_pane_t5_ParamLimits

0xe24b,	// (0x0009ff5f) main_mup2_pane_t5

0xe24b,	// (0x0009ff5f) main_mup2_pane_t6_ParamLimits

0xe24b,	// (0x0009ff5f) main_mup2_pane_t6

0x0005,

0xf5dc,	// (0x000a12f0) main_mup2_pane_t_ParamLimits

0xf5dc,	// (0x000a12f0) main_mup2_pane_t

0xe25f,	// (0x0009ff73) mup2_visualizer_pane_ParamLimits

0xe25f,	// (0x0009ff73) mup2_visualizer_pane

0xe25f,	// (0x0009ff73) mup_progress_pane_cp_ParamLimits

0xe25f,	// (0x0009ff73) mup_progress_pane_cp

0xa55a,	// (0x0009c26e) mup_volume_pane_cp_ParamLimits

0xa55a,	// (0x0009c26e) mup_volume_pane_cp

0xeeff,	// (0x000a0c13) mup2_visualizer_pane_g1_ParamLimits

0xeeff,	// (0x000a0c13) mup2_visualizer_pane_g1

0xef0d,	// (0x000a0c21) mup2_visualizer_pane_g2_ParamLimits

0xef0d,	// (0x000a0c21) mup2_visualizer_pane_g2

0xef0d,	// (0x000a0c21) mup2_visualizer_pane_g3_ParamLimits

0xef0d,	// (0x000a0c21) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x000a0dde) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x000a0dde) mup2_visualizer_pane_g

0xdfba,	// (0x0009fcce) aid_size_cell_fmradio

0x4134,	// (0x00095e48) aid_height_parent_landcape

0xd4ce,	// (0x0009f1e2) wml_content_pane_cp

0xd4d6,	// (0x0009f1ea) wml_tabs_pane

0xd4df,	// (0x0009f1f3) popup_wml_miniature_window

0xd4e7,	// (0x0009f1fb) scroll_pane_cp021

0xd4fb,	// (0x0009f20f) wml_content_pane_comp8

0xec29,	// (0x000a093d) bg_popup_sub_pane_cp05

0x47a3,	// (0x000964b7) popup_wml_miniature_window_g1

0x47ab,	// (0x000964bf) wml_miniature_view_pane

0x47b3,	// (0x000964c7) aid_size_wml_view

0x47bb,	// (0x000964cf) wml_miniature_view_pane_g1

0x47c4,	// (0x000964d8) wml_miniature_view_pane_g2

0x47cd,	// (0x000964e1) wml_miniature_view_pane_g3

0x47d5,	// (0x000964e9) wml_miniature_view_pane_g4

0x47dd,	// (0x000964f1) wml_miniature_view_pane_g5

0x47e5,	// (0x000964f9) wml_miniature_view_pane_g6

0x47ed,	// (0x00096501) wml_miniature_view_pane_g7

0x47f5,	// (0x00096509) wml_miniature_view_pane_g8

0x0007,

0xf5e9,	// (0x000a12fd) wml_miniature_view_pane_g

0x47fd,	// (0x00096511) background_graphic_ParamLimits

0x47fd,	// (0x00096511) background_graphic

0x4809,	// (0x0009651d) wml_tabs_2_pane

0x4812,	// (0x00096526) wml_tabs_3_pane_ParamLimits

0x4812,	// (0x00096526) wml_tabs_3_pane

0x4824,	// (0x00096538) wml_tabs_4_pane_ParamLimits

0x4824,	// (0x00096538) wml_tabs_4_pane

0x483a,	// (0x0009654e) wml_tabs_5_pane_ParamLimits

0x483a,	// (0x0009654e) wml_tabs_5_pane

0x4854,	// (0x00096568) wml_tabs_pane_g2_ParamLimits

0x4854,	// (0x00096568) wml_tabs_pane_g2

0x4869,	// (0x0009657d) wml_tabs_pane_g3_ParamLimits

0x4869,	// (0x0009657d) wml_tabs_pane_g3

0x487e,	// (0x00096592) wml_tabs_2_active_pane_ParamLimits

0x487e,	// (0x00096592) wml_tabs_2_active_pane

0x487e,	// (0x00096592) wml_tabs_2_passive_pane_ParamLimits

0x487e,	// (0x00096592) wml_tabs_2_passive_pane

0x488c,	// (0x000965a0) wml_tabs_3_active_pane_cp_ParamLimits

0x488c,	// (0x000965a0) wml_tabs_3_active_pane_cp

0x48a1,	// (0x000965b5) wml_tabs_3_passive_pane_ParamLimits

0x48a1,	// (0x000965b5) wml_tabs_3_passive_pane

0x48b4,	// (0x000965c8) wml_tabs_3_passive_pane_cp_ParamLimits

0x48b4,	// (0x000965c8) wml_tabs_3_passive_pane_cp

0x48cb,	// (0x000965df) tabs_4_active_pane

0x48d3,	// (0x000965e7) tabs_4_passive_pane

0x48dd,	// (0x000965f1) tabs_4_passive_pane_cp

0x48e5,	// (0x000965f9) tabs_4_passive_pane_cp2

0x3d9b,	// (0x00095aaf) aid_height_text

0xe25f,	// (0x0009ff73) mup_volume_cont_pane_ParamLimits

0xe25f,	// (0x0009ff73) mup_volume_cont_pane

0xe14c,	// (0x0009fe60) aid_size_cell_pinb

0xe14c,	// (0x0009fe60) aid_size_list_pinb

0xe25f,	// (0x0009ff73) mup2_volume_cont_pane_ParamLimits

0xe25f,	// (0x0009ff73) mup2_volume_cont_pane

0xa544,	// (0x0009c258) mup2_volume_cont_pane_g1_ParamLimits

0xa544,	// (0x0009c258) mup2_volume_cont_pane_g1

0x07f6,	// (0x0009250a) aid_size_cell_touch_ParamLimits

0x07f6,	// (0x0009250a) aid_size_cell_touch

0x0a22,	// (0x00092736) touch_pane_ParamLimits

0x0a22,	// (0x00092736) touch_pane

0xa2d7,	// (0x0009bfeb) main_rss2_pane

0x48f8,	// (0x0009660c) listscroll_rss2_pane

0x4901,	// (0x00096615) rss2_navigation_pane

0x4909,	// (0x0009661d) list_rss2_pane

0xdbb5,	// (0x0009f8c9) scroll_pane_cp22

0x4911,	// (0x00096625) rss2_navigation_pane_g1

0x491a,	// (0x0009662e) rss2_navigation_pane_g2

0x4922,	// (0x00096636) rss2_navigation_pane_g3

0x0002,

0xf5fa,	// (0x000a130e) rss2_navigation_pane_g

0x492a,	// (0x0009663e) rss2_navigation_pane_t1

0x4938,	// (0x0009664c) rss2_list_single_pane_ParamLimits

0x4938,	// (0x0009664c) rss2_list_single_pane

0x4952,	// (0x00096666) rss2_list_single_pane_t2

0x4960,	// (0x00096674) rss2_list_single_pane_t3_ParamLimits

0x4960,	// (0x00096674) rss2_list_single_pane_t3

0x497d,	// (0x00096691) rss2_list_single_pane_t4

0x267d,	// (0x00094391) smil_status_pane_g1

0xa2c9,	// (0x0009bfdd) main_image2_pane_ParamLimits

0xa2c9,	// (0x0009bfdd) main_image2_pane

0xa4f2,	// (0x0009c206) main_camera2_pane_g9_ParamLimits

0xa4f2,	// (0x0009c206) main_camera2_pane_g9

0x4749,	// (0x0009645d) main_camera2_pane_t5_ParamLimits

0x4749,	// (0x0009645d) main_camera2_pane_t5

0xa500,	// (0x0009c214) main_camera2_pane_t6_ParamLimits

0xa500,	// (0x0009c214) main_camera2_pane_t6

0x498b,	// (0x0009669f) main_image2_pane_g1_ParamLimits

0x498b,	// (0x0009669f) main_image2_pane_g1

0x329f,	// (0x00094fb3) smil2_video_pane_ParamLimits

0x329f,	// (0x00094fb3) smil2_video_pane

0xa27a,	// (0x0009bf8e) aid_zoom_text_primary_cp

0xa2bf,	// (0x0009bfd3) popup_preview_fixed_window

0xd437,	// (0x0009f14b) im_reading_pane_g1

0x473b,	// (0x0009644f) cams2_bc_adjust_pane_cp_ParamLimits

0x473b,	// (0x0009644f) cams2_bc_adjust_pane_cp

0xa528,	// (0x0009c23c) cams2_bc_adjust_pane_ParamLimits

0xa528,	// (0x0009c23c) cams2_bc_adjust_pane

0xa570,	// (0x0009c284) cams2_bc_adjust_pane_g1

0xa2d7,	// (0x0009bfeb) cams2_slider_pane

0xa570,	// (0x0009c284) cams2_slider_pane_g1

0xa570,	// (0x0009c284) cams2_slider_pane_g2

0x0006,

0xf601,	// (0x000a1315) cams2_slider_pane_g

0x0ab8,	// (0x000927cc) calc_display_pane_ParamLimits

0x0add,	// (0x000927f1) calc_paper_pane_ParamLimits

0x0b00,	// (0x00092814) grid_calc_pane_ParamLimits

0xa3f9,	// (0x0009c10d) popup_clock_digital_window_t1_ParamLimits

0xdf57,	// (0x0009fc6b) main_image_pane_t1

0x0a98,	// (0x000927ac) aid_size_cell_calc_ParamLimits

0x0a98,	// (0x000927ac) aid_size_cell_calc

0x419e,	// (0x00095eb2) popup_blid_sat_info2_window_ParamLimits

0x419e,	// (0x00095eb2) popup_blid_sat_info2_window

0x49a1,	// (0x000966b5) aid_size_cell_blid

0x49a9,	// (0x000966bd) bg_popup_window_pane_cp07

0x49cc,	// (0x000966e0) grid_popup_blid_pane

0x49d6,	// (0x000966ea) heading_pane_cp05_ParamLimits

0x49d6,	// (0x000966ea) heading_pane_cp05

0x4aa0,	// (0x000967b4) cell_popup_blid_pane_ParamLimits

0x4aa0,	// (0x000967b4) cell_popup_blid_pane

0x4aca,	// (0x000967de) cell_popup_blid_pane_g1

0x4ad2,	// (0x000967e6) cell_popup_blid_pane_t1

0xe25f,	// (0x0009ff73) mup2_indicator_pane_ParamLimits

0xe25f,	// (0x0009ff73) mup2_indicator_pane

0xe14c,	// (0x0009fe60) mup2_visualizer_osc_pane

0x478d,	// (0x000964a1) mup2_visualizer_spec_pane_ParamLimits

0x478d,	// (0x000964a1) mup2_visualizer_spec_pane

0xe14c,	// (0x0009fe60) mup2_spec_half_pane

0xe14c,	// (0x0009fe60) mup2_spec_half_pane_cp

0x4ae0,	// (0x000967f4) mup2_spec_bar_pane_ParamLimits

0x4ae0,	// (0x000967f4) mup2_spec_bar_pane

0xd382,	// (0x0009f096) mup2_spec_bar_pane_g1

0x4aff,	// (0x00096813) mup2_spec_bar_pane_g2

0x0001,

0xf627,	// (0x000a133b) mup2_spec_bar_pane_g

0xe14c,	// (0x0009fe60) mup2_osc_middle_pane

0xd382,	// (0x0009f096) mup2_visualizer_osc_pane_g1

0xe176,	// (0x0009fe8a) popup_number_entry_window_t1_ParamLimits

0xe189,	// (0x0009fe9d) popup_number_entry_window_t2_ParamLimits

0xe19b,	// (0x0009feaf) popup_number_entry_window_t3_ParamLimits

0xe1ad,	// (0x0009fec1) popup_number_entry_window_t5_ParamLimits

0xe1ad,	// (0x0009fec1) popup_number_entry_window_t5

0xf06b,	// (0x000a0d7f) popup_number_entry_window_t_ParamLimits

0xe1e2,	// (0x0009fef6) text_title_cp2_ParamLimits

0xa438,	// (0x0009c14c) aid_hotspot_pointer_text2_pane

0xa45e,	// (0x0009c172) main_viewer_pane_g9_ParamLimits

0xa45e,	// (0x0009c172) main_viewer_pane_g9

0xd699,	// (0x0009f3ad) cale_month_pane_t1_ParamLimits

0xd6d6,	// (0x0009f3ea) bg_cale_pane_ParamLimits

0xd6ee,	// (0x0009f402) list_cale_pane_ParamLimits

0xd6ff,	// (0x0009f413) listscroll_cale_day_pane_t1

0xd711,	// (0x0009f425) scroll_pane_cp09_ParamLimits

0x2ba4,	// (0x000948b8) main_mup_eq_pane_t1_ParamLimits

0x2ba4,	// (0x000948b8) main_mup_eq_pane_t1

0x2bc0,	// (0x000948d4) main_mup_eq_pane_t2_ParamLimits

0x2bc0,	// (0x000948d4) main_mup_eq_pane_t2

0x2bdc,	// (0x000948f0) main_mup_eq_pane_t3_ParamLimits

0x2bdc,	// (0x000948f0) main_mup_eq_pane_t3

0x2bfa,	// (0x0009490e) main_mup_eq_pane_t4_ParamLimits

0x2bfa,	// (0x0009490e) main_mup_eq_pane_t4

0x2c18,	// (0x0009492c) main_mup_eq_pane_t5_ParamLimits

0x2c18,	// (0x0009492c) main_mup_eq_pane_t5

0x2c36,	// (0x0009494a) main_mup_eq_pane_t6_ParamLimits

0x2c36,	// (0x0009494a) main_mup_eq_pane_t6

0x2c4c,	// (0x00094960) main_mup_eq_pane_t7_ParamLimits

0x2c4c,	// (0x00094960) main_mup_eq_pane_t7

0x2c62,	// (0x00094976) main_mup_eq_pane_t8_ParamLimits

0x2c62,	// (0x00094976) main_mup_eq_pane_t8

0x2c78,	// (0x0009498c) main_mup_eq_pane_t9_ParamLimits

0x2c78,	// (0x0009498c) main_mup_eq_pane_t9

0x2c94,	// (0x000949a8) main_mup_eq_pane_t10_ParamLimits

0x2c94,	// (0x000949a8) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x000a10de) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x000a10de) main_mup_eq_pane_t

0x2d69,	// (0x00094a7d) mup_equalizer_pane_cp5_ParamLimits

0x2d81,	// (0x00094a95) mup_equalizer_pane_cp6_ParamLimits

0x2d99,	// (0x00094aad) mup_equalizer_pane_cp7_ParamLimits

0xa2d7,	// (0x0009bfeb) main_gallery_pane

0x454a,	// (0x0009625e) smil2_volume_pane

0x4552,	// (0x00096266) smil_status_volume_pane_g1_ParamLimits

0x4565,	// (0x00096279) smil_status_volume_pane_g2_ParamLimits

0xa4c2,	// (0x0009c1d6) smil_status_volume_pane_g3_ParamLimits

0xf580,	// (0x000a1294) smil_status_volume_pane_g_ParamLimits

0x49a9,	// (0x000966bd) bg_popup_window_pane_cp07_ParamLimits

0x49b7,	// (0x000966cb) blid_firmament_pane

0xe217,	// (0x0009ff2b) aid_size_cell_gallery_ParamLimits

0xe217,	// (0x0009ff2b) aid_size_cell_gallery

0xe217,	// (0x0009ff2b) grid_gallery_pane_ParamLimits

0xe217,	// (0x0009ff2b) grid_gallery_pane

0x49a9,	// (0x000966bd) cell_gallery_pane_ParamLimits

0x49a9,	// (0x000966bd) cell_gallery_pane

0xe217,	// (0x0009ff2b) bg_cell_gallery_focus_pane_ParamLimits

0xe217,	// (0x0009ff2b) bg_cell_gallery_focus_pane

0xeeff,	// (0x000a0c13) cell_gallery_pane_g1_ParamLimits

0xeeff,	// (0x000a0c13) cell_gallery_pane_g1

0xeeff,	// (0x000a0c13) cell_gallery_pane_g2_ParamLimits

0xeeff,	// (0x000a0c13) cell_gallery_pane_g2

0xeeff,	// (0x000a0c13) cell_gallery_pane_g3_ParamLimits

0xeeff,	// (0x000a0c13) cell_gallery_pane_g3

0xef0d,	// (0x000a0c21) cell_gallery_pane_g4_ParamLimits

0xef0d,	// (0x000a0c21) cell_gallery_pane_g4

0x0003,

0xf62c,	// (0x000a1340) cell_gallery_pane_g_ParamLimits

0xf62c,	// (0x000a1340) cell_gallery_pane_g

0x4b09,	// (0x0009681d) bg_cell_gallery_focus_pane_g1

0x4b11,	// (0x00096825) bg_cell_gallery_focus_pane_g2

0x4b19,	// (0x0009682d) bg_cell_gallery_focus_pane_g3

0x4b21,	// (0x00096835) bg_cell_gallery_focus_pane_g4

0x4b29,	// (0x0009683d) bg_cell_gallery_focus_pane_g5

0x4b31,	// (0x00096845) bg_cell_gallery_focus_pane_g6

0x4b39,	// (0x0009684d) bg_cell_gallery_focus_pane_g7

0x4b41,	// (0x00096855) bg_cell_gallery_focus_pane_g8

0x0007,

0xf635,	// (0x000a1349) bg_cell_gallery_focus_pane_g

0x4b49,	// (0x0009685d) aid_firma_cardinal

0x4b5d,	// (0x00096871) blid_firmament_pane_t1

0x4b74,	// (0x00096888) blid_firmament_pane_t2

0x4b8b,	// (0x0009689f) blid_firmament_pane_t3

0x4ba2,	// (0x000968b6) blid_firmament_pane_t4

0x0003,

0xf646,	// (0x000a135a) blid_firmament_pane_t

0xa57a,	// (0x0009c28e) blid_sat_info_pane

0xd382,	// (0x0009f096) blid_sat_info_pane_g1

0xd382,	// (0x0009f096) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x000a10d2) blid_sat_info_pane_g

0xa58a,	// (0x0009c29e) blid_sat_info_pane_t1

0xa598,	// (0x0009c2ac) smil2_volume_content_pane

0xa5a1,	// (0x0009c2b5) smil2_volume_pane_g1

0xeff4,	// (0x000a0d08) smil2_volume_content_pane_g1

0xa5a9,	// (0x0009c2bd) smil2_volume_content_pane_g2

0xa5b2,	// (0x0009c2c6) smil2_volume_content_pane_g3

0xa5bb,	// (0x0009c2cf) smil2_volume_content_pane_g4

0xa5c4,	// (0x0009c2d8) smil2_volume_content_pane_g5

0xa5cd,	// (0x0009c2e1) smil2_volume_content_pane_g6

0xa5d6,	// (0x0009c2ea) smil2_volume_content_pane_g7

0xa5df,	// (0x0009c2f3) smil2_volume_content_pane_g8

0xa5e8,	// (0x0009c2fc) smil2_volume_content_pane_g9

0xa5f1,	// (0x0009c305) smil2_volume_content_pane_g10

0x0009,

0xf64f,	// (0x000a1363) smil2_volume_content_pane_g

0x113a,	// (0x00092e4e) cale_week_day_heading_pane_t1_ParamLimits

0x1164,	// (0x00092e78) cale_week_day_heading_pane_t2_ParamLimits

0x1193,	// (0x00092ea7) cale_week_day_heading_pane_t3_ParamLimits

0x11c2,	// (0x00092ed6) cale_week_day_heading_pane_t4_ParamLimits

0x11f1,	// (0x00092f05) cale_week_day_heading_pane_t5_ParamLimits

0x1224,	// (0x00092f38) cale_week_day_heading_pane_t6_ParamLimits

0x125b,	// (0x00092f6f) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x000a0e86) cale_week_day_heading_pane_t_ParamLimits

0xd2f1,	// (0x0009f005) bg_cale_side_pane_ParamLimits

0x1285,	// (0x00092f99) cale_week_time_pane_t1_ParamLimits

0x129f,	// (0x00092fb3) cale_week_time_pane_t2_ParamLimits

0x12b9,	// (0x00092fcd) cale_week_time_pane_t3_ParamLimits

0x12d3,	// (0x00092fe7) cale_week_time_pane_t4_ParamLimits

0x12ed,	// (0x00093001) cale_week_time_pane_t5_ParamLimits

0x1307,	// (0x0009301b) cale_week_time_pane_t6_ParamLimits

0x1327,	// (0x0009303b) cale_week_time_pane_t7_ParamLimits

0x134d,	// (0x00093061) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x000a0e95) cale_week_time_pane_t_ParamLimits

0x1373,	// (0x00093087) cell_cale_week_pane_g2_ParamLimits

0xd2f1,	// (0x0009f005) bg_cale_side_pane_cp01_ParamLimits

0x245a,	// (0x0009416e) cale_month_week_pane_t1_ParamLimits

0x2473,	// (0x00094187) cale_month_week_pane_t2_ParamLimits

0x248c,	// (0x000941a0) cale_month_week_pane_t3_ParamLimits

0x24a5,	// (0x000941b9) cale_month_week_pane_t4_ParamLimits

0x24be,	// (0x000941d2) cale_month_week_pane_t5_ParamLimits

0x24d7,	// (0x000941eb) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x000a0f63) cale_month_week_pane_t_ParamLimits

0xa379,	// (0x0009c08d) cell_cale_month_pane_g1_ParamLimits

0xa2d7,	// (0x0009bfeb) main_cale_event_viewer_pane

0xe14c,	// (0x0009fe60) listscroll_cale_event_viewer_pane

0xa5fa,	// (0x0009c30e) list_cale_ev_pane

0xa602,	// (0x0009c316) scroll_pane_cp023

0x4bb9,	// (0x000968cd) field_cale_ev_pane_ParamLimits

0x4bb9,	// (0x000968cd) field_cale_ev_pane

0xa60e,	// (0x0009c322) field_cale_ev_content_pane_ParamLimits

0xa60e,	// (0x0009c322) field_cale_ev_content_pane

0xa61a,	// (0x0009c32e) field_cale_ev_pane_g1_ParamLimits

0xa61a,	// (0x0009c32e) field_cale_ev_pane_g1

0xa626,	// (0x0009c33a) field_cale_ev_pane_g2_ParamLimits

0xa626,	// (0x0009c33a) field_cale_ev_pane_g2

0xa63e,	// (0x0009c352) field_cale_ev_pane_g3_ParamLimits

0xa63e,	// (0x0009c352) field_cale_ev_pane_g3

0x0002,

0xf664,	// (0x000a1378) field_cale_ev_pane_g_ParamLimits

0xf664,	// (0x000a1378) field_cale_ev_pane_g

0xa656,	// (0x0009c36a) field_cale_ev_pane_t1_ParamLimits

0xa656,	// (0x0009c36a) field_cale_ev_pane_t1

0x4bdd,	// (0x000968f1) field_cale_ev_content_pane_t1_ParamLimits

0x4bdd,	// (0x000968f1) field_cale_ev_content_pane_t1

0xde3d,	// (0x0009fb51) bg_button_pane_cp01

0x0df2,	// (0x00092b06) listscroll_cale_week_pane_ParamLimits

0xd2b9,	// (0x0009efcd) popup_toolbar_window_cp01

0xd2c2,	// (0x0009efd6) listscroll_cale_week_pane_t1_ParamLimits

0x0df2,	// (0x00092b06) listscroll_cale_day_pane_ParamLimits

0xd2b9,	// (0x0009efcd) popup_toolbar_window_cp02

0xd6ff,	// (0x0009f413) listscroll_cale_day_pane_t1_ParamLimits

0x4166,	// (0x00095e7a) main_cale_month_pane_ParamLimits

0xa4ad,	// (0x0009c1c1) popup_toolbar_window_cp03_ParamLimits

0xa4ad,	// (0x0009c1c1) popup_toolbar_window_cp03

0x315d,	// (0x00094e71) main_image_pane_g2_ParamLimits

0x315d,	// (0x00094e71) main_image_pane_g2

0x316e,	// (0x00094e82) main_image_pane_g3_ParamLimits

0x316e,	// (0x00094e82) main_image_pane_g3

0x0002,

0xf45c,	// (0x000a1170) main_image_pane_g_ParamLimits

0xf45c,	// (0x000a1170) main_image_pane_g

0xdf57,	// (0x0009fc6b) main_image_pane_t1_ParamLimits

0x317f,	// (0x00094e93) main_image_pane_t2_ParamLimits

0x317f,	// (0x00094e93) main_image_pane_t2

0x3191,	// (0x00094ea5) main_image_pane_t3_ParamLimits

0x3191,	// (0x00094ea5) main_image_pane_t3

0x31b9,	// (0x00094ecd) main_image_pane_t4_ParamLimits

0x31b9,	// (0x00094ecd) main_image_pane_t4

0x0003,

0xf463,	// (0x000a1177) main_image_pane_t_ParamLimits

0xf463,	// (0x000a1177) main_image_pane_t

0x31d9,	// (0x00094eed) popup_image_details_window_cp01

0x31e3,	// (0x00094ef7) popup_toobar_trans_pane_cp01_ParamLimits

0x31e3,	// (0x00094ef7) popup_toobar_trans_pane_cp01

0x4291,	// (0x00095fa5) popup_image_details_window_ParamLimits

0x4291,	// (0x00095fa5) popup_image_details_window

0xa47e,	// (0x0009c192) popup_image_focus_window

0xa4e4,	// (0x0009c1f8) camera2_autofocus_pane_ParamLimits

0xa4e4,	// (0x0009c1f8) camera2_autofocus_pane

0xe14c,	// (0x0009fe60) bg_popup_sub_pane_cp06

0xa66d,	// (0x0009c381) popup_image_focus_window_g1

0xa675,	// (0x0009c389) popup_image_focus_window_g2

0xa67d,	// (0x0009c391) popup_image_focus_window_g3

0xa685,	// (0x0009c399) popup_image_focus_window_g4

0x0003,

0xf66b,	// (0x000a137f) popup_image_focus_window_g

0xa68d,	// (0x0009c3a1) popup_image_focus_window_t1

0xa69b,	// (0x0009c3af) popup_image_focus_window_t2

0xa6ab,	// (0x0009c3bf) popup_image_focus_window_t3

0x0002,

0xf674,	// (0x000a1388) popup_image_focus_window_t

0xeeff,	// (0x000a0c13) camera2_autofocus_pane_g1

0xe217,	// (0x0009ff2b) bg_tb_trans_pane_cp01

0xa6b9,	// (0x0009c3cd) popup_image_details_window_g1

0xa6cc,	// (0x0009c3e0) popup_image_details_window_g2

0x0002,

0xf686,	// (0x000a139a) popup_image_details_window_g

0xa6f5,	// (0x0009c409) popup_image_details_window_t1

0xa707,	// (0x0009c41b) popup_image_details_window_t2

0xa720,	// (0x0009c434) popup_image_details_window_t3

0xa734,	// (0x0009c448) popup_image_details_window_t4

0xa74f,	// (0x0009c463) popup_image_details_window_t5

0x0004,

0xf68d,	// (0x000a13a1) popup_image_details_window_t

0xef5d,	// (0x000a0c71) bg_calc_paper_pane_ParamLimits

0xa2d7,	// (0x0009bfeb) grid_highlight_pane_cp013

0xa2e9,	// (0x0009bffd) list_calc_pane_ParamLimits

0xa2fb,	// (0x0009c00f) scroll_pane_cp024

0xef71,	// (0x000a0c85) bg_calc_display_pane_ParamLimits

0x0c1c,	// (0x00092930) calc_display_pane_t1_ParamLimits

0x0c2e,	// (0x00092942) calc_display_pane_t2_ParamLimits

0xa303,	// (0x0009c017) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x000a0e06) calc_display_pane_t_ParamLimits

0x0cef,	// (0x00092a03) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x000a0e23) cell_calc_pane_g

0x0cf8,	// (0x00092a0c) cell_calc_pane_t1

0xefc6,	// (0x000a0cda) grid_highlight_pane_cp02_ParamLimits

0xefdc,	// (0x000a0cf0) toolbar_button_pane_cp01_ParamLimits

0xefdc,	// (0x000a0cf0) toolbar_button_pane_cp01

0xdf9c,	// (0x0009fcb0) temp_image_control_pane_ParamLimits

0xdf9c,	// (0x0009fcb0) temp_image_control_pane

0xa2c9,	// (0x0009bfdd) main_mp3_pane

0xa769,	// (0x0009c47d) temp_image_control_pane_g1_ParamLimits

0xa769,	// (0x0009c47d) temp_image_control_pane_g1

0xa777,	// (0x0009c48b) temp_image_control_pane_g2_ParamLimits

0xa777,	// (0x0009c48b) temp_image_control_pane_g2

0xa789,	// (0x0009c49d) temp_image_control_pane_g3_ParamLimits

0xa789,	// (0x0009c49d) temp_image_control_pane_g3

0x4bfe,	// (0x00096912) temp_image_control_pane_g4_ParamLimits

0x4bfe,	// (0x00096912) temp_image_control_pane_g4

0x0003,

0xf698,	// (0x000a13ac) temp_image_control_pane_g_ParamLimits

0xf698,	// (0x000a13ac) temp_image_control_pane_g

0xa769,	// (0x0009c47d) main_mp3_pane_g1

0x4c11,	// (0x00096925) main_mp3_pane_g2

0x0007,

0xf6a1,	// (0x000a13b5) main_mp3_pane_g

0xa7be,	// (0x0009c4d2) main_mp3_pane_t1

0xef0d,	// (0x000a0c21) main_camera_pane_g8_ParamLimits

0xef0d,	// (0x000a0c21) main_camera_pane_g8

0x1535,	// (0x00093249) main_video_pane_g7_ParamLimits

0x1535,	// (0x00093249) main_video_pane_g7

0xa514,	// (0x0009c228) main_camera2_pane_t7_ParamLimits

0xa514,	// (0x0009c228) main_camera2_pane_t7

0xd48e,	// (0x0009f1a2) scroll_pane_cp025_ParamLimits

0xd48e,	// (0x0009f1a2) scroll_pane_cp025

0xd4a2,	// (0x0009f1b6) scroll_pane_cp026_ParamLimits

0xd4a2,	// (0x0009f1b6) scroll_pane_cp026

0xd4b1,	// (0x0009f1c5) wml_content_pane_ParamLimits

0xa2d7,	// (0x0009bfeb) main_touch_calib_pane

0x4ce3,	// (0x000969f7) main_touch_calib_pane_g1

0x4cf5,	// (0x00096a09) main_touch_calib_pane_g2

0x4d07,	// (0x00096a1b) main_touch_calib_pane_g3

0x4d19,	// (0x00096a2d) main_touch_calib_pane_g4

0x0003,

0xf6bf,	// (0x000a13d3) main_touch_calib_pane_g

0x4d2b,	// (0x00096a3f) main_touch_calib_pane_t1

0x4d45,	// (0x00096a59) main_touch_calib_pane_t2

0x0004,

0xf6c8,	// (0x000a13dc) main_touch_calib_pane_t

0xdc30,	// (0x0009f944) mup_progress_pane_cp02

0xdc4f,	// (0x0009f963) navi_pane_g1

0xdcb1,	// (0x0009f9c5) navi_pane_mp_t3

0xa2c9,	// (0x0009bfdd) main_mp3_pane_ParamLimits

0x445d,	// (0x00096171) navi_pane_ParamLimits

0xa769,	// (0x0009c47d) main_mp3_pane_g1_ParamLimits

0x4c11,	// (0x00096925) main_mp3_pane_g2_ParamLimits

0x4c1d,	// (0x00096931) main_mp3_pane_g3_ParamLimits

0x4c1d,	// (0x00096931) main_mp3_pane_g3

0x4c2b,	// (0x0009693f) main_mp3_pane_g4_ParamLimits

0x4c2b,	// (0x0009693f) main_mp3_pane_g4

0xeeff,	// (0x000a0c13) main_mp3_pane_g5_ParamLimits

0xeeff,	// (0x000a0c13) main_mp3_pane_g5

0xa799,	// (0x0009c4ad) main_mp3_pane_g6_ParamLimits

0xa799,	// (0x0009c4ad) main_mp3_pane_g6

0xa7a6,	// (0x0009c4ba) main_mp3_pane_g7_ParamLimits

0xa7a6,	// (0x0009c4ba) main_mp3_pane_g7

0xa7b2,	// (0x0009c4c6) main_mp3_pane_g8_ParamLimits

0xa7b2,	// (0x0009c4c6) main_mp3_pane_g8

0xf6a1,	// (0x000a13b5) main_mp3_pane_g_ParamLimits

0x4c37,	// (0x0009694b) main_mp3_pane_t2

0x4c45,	// (0x00096959) main_mp3_pane_t3

0xa7cc,	// (0x0009c4e0) main_mp3_pane_t4

0xa7da,	// (0x0009c4ee) main_mp3_pane_t5

0x0005,

0xf6b2,	// (0x000a13c6) main_mp3_pane_t

0xa7e8,	// (0x0009c4fc) mup_progress_pane_cp01

0xa27a,	// (0x0009bf8e) aid_zoom_text_secondary2

0xa5fa,	// (0x0009c30e) list_cale_ev2_pane

0xa602,	// (0x0009c316) scroll_pane_cp023_ParamLimits

0x4d9f,	// (0x00096ab3) field_cale_ev2_pane_ParamLimits

0x4d9f,	// (0x00096ab3) field_cale_ev2_pane

0x4dc3,	// (0x00096ad7) field_cale_ev2_pane_g1_ParamLimits

0x4dc3,	// (0x00096ad7) field_cale_ev2_pane_g1

0x4dcf,	// (0x00096ae3) field_cale_ev2_pane_g2_ParamLimits

0x4dcf,	// (0x00096ae3) field_cale_ev2_pane_g2

0x4de7,	// (0x00096afb) field_cale_ev2_pane_g3_ParamLimits

0x4de7,	// (0x00096afb) field_cale_ev2_pane_g3

0x0003,

0xf6d3,	// (0x000a13e7) field_cale_ev2_pane_g_ParamLimits

0xf6d3,	// (0x000a13e7) field_cale_ev2_pane_g

0x4dff,	// (0x00096b13) field_cale_ev2_pane_t1_ParamLimits

0x4dff,	// (0x00096b13) field_cale_ev2_pane_t1

0x4e16,	// (0x00096b2a) field_cale_ev2_pane_t2_ParamLimits

0x4e16,	// (0x00096b2a) field_cale_ev2_pane_t2

0x0001,

0xf6dc,	// (0x000a13f0) field_cale_ev2_pane_t_ParamLimits

0xf6dc,	// (0x000a13f0) field_cale_ev2_pane_t

0x2ff5,	// (0x00094d09) main_postcard_pane_g5_ParamLimits

0x2ff5,	// (0x00094d09) main_postcard_pane_g5

0x300b,	// (0x00094d1f) main_postcard_pane_g6_ParamLimits

0x300b,	// (0x00094d1f) main_postcard_pane_g6

0xe217,	// (0x0009ff2b) camera2_autofocus_pane_cp_ParamLimits

0xe217,	// (0x0009ff2b) camera2_autofocus_pane_cp

0xa2c9,	// (0x0009bfdd) main_mup3_pane

0x4e75,	// (0x00096b89) main_mup3_pane_g1_ParamLimits

0x4e75,	// (0x00096b89) main_mup3_pane_g1

0x4e97,	// (0x00096bab) main_mup3_pane_g2_ParamLimits

0x4e97,	// (0x00096bab) main_mup3_pane_g2

0x4f12,	// (0x00096c26) main_mup3_pane_g3_ParamLimits

0x4f12,	// (0x00096c26) main_mup3_pane_g3

0x4f7c,	// (0x00096c90) main_mup3_pane_g4_ParamLimits

0x4f7c,	// (0x00096c90) main_mup3_pane_g4

0x4fe6,	// (0x00096cfa) main_mup3_pane_g5_ParamLimits

0x4fe6,	// (0x00096cfa) main_mup3_pane_g5

0x5050,	// (0x00096d64) main_mup3_pane_g6_ParamLimits

0x5050,	// (0x00096d64) main_mup3_pane_g6

0xef0d,	// (0x000a0c21) main_mup3_pane_g7_ParamLimits

0xef0d,	// (0x000a0c21) main_mup3_pane_g7

0x0007,

0xf6ec,	// (0x000a1400) main_mup3_pane_g_ParamLimits

0xf6ec,	// (0x000a1400) main_mup3_pane_g

0x50d4,	// (0x00096de8) main_mup3_pane_t1_ParamLimits

0x50d4,	// (0x00096de8) main_mup3_pane_t1

0x5146,	// (0x00096e5a) main_mup3_pane_t2_ParamLimits

0x5146,	// (0x00096e5a) main_mup3_pane_t2

0x521c,	// (0x00096f30) main_mup3_pane_t4_ParamLimits

0x521c,	// (0x00096f30) main_mup3_pane_t4

0x527a,	// (0x00096f8e) main_mup3_pane_t5_ParamLimits

0x527a,	// (0x00096f8e) main_mup3_pane_t5

0x533e,	// (0x00097052) main_mup3_pane_t6_ParamLimits

0x533e,	// (0x00097052) main_mup3_pane_t6

0x0005,

0xf6fd,	// (0x000a1411) main_mup3_pane_t_ParamLimits

0xf6fd,	// (0x000a1411) main_mup3_pane_t

0x53f6,	// (0x0009710a) mup3_progress_pane_ParamLimits

0x53f6,	// (0x0009710a) mup3_progress_pane

0x548e,	// (0x000971a2) popup_mup3_control_window_ParamLimits

0x548e,	// (0x000971a2) popup_mup3_control_window

0xa7fc,	// (0x0009c510) popup_mup3_text_window

0x54c4,	// (0x000971d8) mup3_progress_pane_t1

0x54e3,	// (0x000971f7) mup3_progress_pane_t2

0xa804,	// (0x0009c518) mup3_progress_pane_t3

0x0002,

0xf70a,	// (0x000a141e) mup3_progress_pane_t

0xa821,	// (0x0009c535) mup_progress_pane_cp03

0xe14c,	// (0x0009fe60) bg_tb_trans_pane_cp04

0x5502,	// (0x00097216) mup3_volume_pane

0x550a,	// (0x0009721e) popup_mup3_control_window_g1

0x5513,	// (0x00097227) mup3_volume_pane_g1

0x551c,	// (0x00097230) mup3_volume_pane_g2

0x5525,	// (0x00097239) mup3_volume_pane_g3

0x0002,

0xf711,	// (0x000a1425) mup3_volume_pane_g

0xe14c,	// (0x0009fe60) bg_tb_trans_pane_cp03

0xa831,	// (0x0009c545) popup_mup3_text_window_g1

0xa839,	// (0x0009c54d) popup_mup3_text_window_t1

0xefb9,	// (0x000a0ccd) list_calc_item_pane_g1_ParamLimits

0x48ef,	// (0x00096603) mup_volume_pane_cp_g1

0x4d5f,	// (0x00096a73) main_touch_calib_pane_t3

0x4d73,	// (0x00096a87) main_touch_calib_pane_t4

0x4d89,	// (0x00096a9d) main_touch_calib_pane_t5

0xa256,	// (0x0009bf6a) aid_cell_size_toolbar2

0xa25e,	// (0x0009bf72) aid_popup3_width_pane

0xa26a,	// (0x0009bf7e) aid_zoom_text_msg_primary

0x1423,	// (0x00093137) vorec_t7

0xef7d,	// (0x000a0c91) bg_calc_paper_pane_g1_ParamLimits

0xef89,	// (0x000a0c9d) bg_calc_paper_pane_g2_ParamLimits

0xef95,	// (0x000a0ca9) bg_calc_paper_pane_g3_ParamLimits

0xefa1,	// (0x000a0cb5) bg_calc_paper_pane_g4_ParamLimits

0xefad,	// (0x000a0cc1) bg_calc_paper_pane_g5_ParamLimits

0x0c7b,	// (0x0009298f) bg_calc_paper_pane_g6_ParamLimits

0x0c89,	// (0x0009299d) bg_calc_paper_pane_g7_ParamLimits

0x0c97,	// (0x000929ab) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x000a0e0d) bg_calc_paper_pane_g_ParamLimits

0x0caa,	// (0x000929be) calc_bg_paper_pane_g9_ParamLimits

0xe217,	// (0x0009ff2b) image_qvga_pane_ParamLimits

0xe217,	// (0x0009ff2b) image_qvga_pane

0xee84,	// (0x000a0b98) bg_popup_sub_pane_cp04_ParamLimits

0xded3,	// (0x0009fbe7) popup_mup_playback_window_g1_ParamLimits

0xdedf,	// (0x0009fbf3) popup_mup_playback_window_t1_ParamLimits

0xdef4,	// (0x0009fc08) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x000a116b) popup_mup_playback_window_t_ParamLimits

0xef0d,	// (0x000a0c21) main_mup2_pane_g3_ParamLimits

0xef0d,	// (0x000a0c21) main_mup2_pane_g3

0x172c,	// (0x00093440) popup_toolbar_window_cp04

0xe41e,	// (0x000a0132) popup_call2_audio_second_window_g3_ParamLimits

0xe41e,	// (0x000a0132) popup_call2_audio_second_window_g3

0xe828,	// (0x000a053c) popup_call2_audio_first_window_g4_ParamLimits

0xe828,	// (0x000a053c) popup_call2_audio_first_window_g4

0x3b7e,	// (0x00095892) popup_call2_audio_in_window_g4_ParamLimits

0x3b7e,	// (0x00095892) popup_call2_audio_in_window_g4

0x313f,	// (0x00094e53) aid_area_sk_bg_cut_ParamLimits

0x313f,	// (0x00094e53) aid_area_sk_bg_cut

0xdf09,	// (0x0009fc1d) aid_area_sk_bg_cut_2_ParamLimits

0xdf09,	// (0x0009fc1d) aid_area_sk_bg_cut_2

0xe14c,	// (0x0009fe60) aid_placing_details_win

0xe14c,	// (0x0009fe60) aid_placing_details_win_2

0xeeff,	// (0x000a0c13) camera2_autofocus_pane_g1_ParamLimits

0x09bd,	// (0x000926d1) popup_fixed_preview_cale_window_ParamLimits

0x09bd,	// (0x000926d1) popup_fixed_preview_cale_window

0xdcf8,	// (0x0009fa0c) navi_slider_pane_g3

0xdd01,	// (0x0009fa15) navi_slider_pane_g4

0xdd0a,	// (0x0009fa1e) navi_slider_pane_g5

0xdcf8,	// (0x0009fa0c) navi_slider_pane_g6

0xa41f,	// (0x0009c133) navi_slider_pane_g7

0xde0a,	// (0x0009fb1e) mup_scale_pane_g3

0xde13,	// (0x0009fb27) mup_scale_pane_g4

0xde1c,	// (0x0009fb30) mup_scale_pane_g5

0x2db1,	// (0x00094ac5) mup_scale_pane_g6

0x2dba,	// (0x00094ace) mup_scale_pane_g7

0xa570,	// (0x0009c284) cams2_slider_pane_g3

0xa570,	// (0x0009c284) cams2_slider_pane_g4

0xa570,	// (0x0009c284) cams2_slider_pane_g5

0xa570,	// (0x0009c284) cams2_slider_pane_g6

0xa570,	// (0x0009c284) cams2_slider_pane_g7

0xd382,	// (0x0009f096) camera2_autofocus_pane_cp_g1

0x415a,	// (0x00095e6e) bg_popup_preview_window_pane_cp02_ParamLimits

0x415a,	// (0x00095e6e) bg_popup_preview_window_pane_cp02

0xa847,	// (0x0009c55b) list_fp_cale_pane_ParamLimits

0xa847,	// (0x0009c55b) list_fp_cale_pane

0xa853,	// (0x0009c567) popup_fixed_preview_cale_window_t1_ParamLimits

0xa853,	// (0x0009c567) popup_fixed_preview_cale_window_t1

0x552e,	// (0x00097242) popup_fixed_preview_cale_window_t2_ParamLimits

0x552e,	// (0x00097242) popup_fixed_preview_cale_window_t2

0x5543,	// (0x00097257) popup_fixed_preview_cale_window_t3_ParamLimits

0x5543,	// (0x00097257) popup_fixed_preview_cale_window_t3

0x0002,

0xf718,	// (0x000a142c) popup_fixed_preview_cale_window_t_ParamLimits

0xf718,	// (0x000a142c) popup_fixed_preview_cale_window_t

0x555a,	// (0x0009726e) list_single_fp_cale_pane_ParamLimits

0x555a,	// (0x0009726e) list_single_fp_cale_pane

0xa871,	// (0x0009c585) list_single_fp_cale_pane_g1_ParamLimits

0xa871,	// (0x0009c585) list_single_fp_cale_pane_g1

0xa87d,	// (0x0009c591) list_single_fp_cale_pane_g2_ParamLimits

0xa87d,	// (0x0009c591) list_single_fp_cale_pane_g2

0x0002,

0xf71f,	// (0x000a1433) list_single_fp_cale_pane_g_ParamLimits

0xf71f,	// (0x000a1433) list_single_fp_cale_pane_g

0xa896,	// (0x0009c5aa) list_single_fp_cale_pane_t1_ParamLimits

0xa896,	// (0x0009c5aa) list_single_fp_cale_pane_t1

0xa8a8,	// (0x0009c5bc) list_single_fp_cale_pane_t2_ParamLimits

0xa8a8,	// (0x0009c5bc) list_single_fp_cale_pane_t2

0x0001,

0xf726,	// (0x000a143a) list_single_fp_cale_pane_t_ParamLimits

0xf726,	// (0x000a143a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa2d7,	// (0x0009bfeb) main_dialer_pane

0xe14c,	// (0x0009fe60) aid_cell_size_keypad

0xe14c,	// (0x0009fe60) dialer_ne_pane

0xe14c,	// (0x0009fe60) grid_dialer_command_1_pane

0xe14c,	// (0x0009fe60) grid_dialer_command_2_pane

0xe14c,	// (0x0009fe60) grid_dialer_keypad_pane

0x5572,	// (0x00097286) bg_popup_call_pane_cp06_ParamLimits

0x5572,	// (0x00097286) bg_popup_call_pane_cp06

0x5572,	// (0x00097286) dialer_ne_clear_pane_ParamLimits

0x5572,	// (0x00097286) dialer_ne_clear_pane

0xd382,	// (0x0009f096) dialer_ne_pane_g1

0xd9bf,	// (0x0009f6d3) dialer_ne_pane_t1_ParamLimits

0xd9bf,	// (0x0009f6d3) dialer_ne_pane_t1

0x5580,	// (0x00097294) dialer_ne_pane_t2_ParamLimits

0x5580,	// (0x00097294) dialer_ne_pane_t2

0x55a8,	// (0x000972bc) dialer_ne_pane_t3_ParamLimits

0x55a8,	// (0x000972bc) dialer_ne_pane_t3

0x0002,

0xf72b,	// (0x000a143f) dialer_ne_pane_t_ParamLimits

0xf72b,	// (0x000a143f) dialer_ne_pane_t

0x55a8,	// (0x000972bc) dialer_ne_pane_t3_copy1_ParamLimits

0x55a8,	// (0x000972bc) dialer_ne_pane_t3_copy1

0xa8db,	// (0x0009c5ef) cell_dialer_keypad_pane_ParamLimits

0xa8db,	// (0x0009c5ef) cell_dialer_keypad_pane

0xe217,	// (0x0009ff2b) cell_dialer_command_1_pane_ParamLimits

0xe217,	// (0x0009ff2b) cell_dialer_command_1_pane

0xa8f2,	// (0x0009c606) cell_dialer_command_2_pane_ParamLimits

0xa8f2,	// (0x0009c606) cell_dialer_command_2_pane

0xe217,	// (0x0009ff2b) bg_button_pane_cp02_ParamLimits

0xe217,	// (0x0009ff2b) bg_button_pane_cp02

0xeeff,	// (0x000a0c13) cell_dialer_keypad_pane_g1_ParamLimits

0xeeff,	// (0x000a0c13) cell_dialer_keypad_pane_g1

0xe217,	// (0x0009ff2b) bg_button_pane_cp03_ParamLimits

0xe217,	// (0x0009ff2b) bg_button_pane_cp03

0xeeff,	// (0x000a0c13) cell_dialer_command_1_pane_g1_ParamLimits

0xeeff,	// (0x000a0c13) cell_dialer_command_1_pane_g1

0xe14c,	// (0x0009fe60) bg_button_pane_cp04

0xd382,	// (0x0009f096) cell_dialer_command_2_pane_g1

0xe14c,	// (0x0009fe60) bg_button_pane_cp06

0xd382,	// (0x0009f096) dialer_ne_clear_pane_g1

0x2ac2,	// (0x000947d6) navi_pane_g2

0x2af0,	// (0x00094804) navi_pane_g3

0x0002,

0xf35a,	// (0x000a106e) navi_pane_g

0x2b1b,	// (0x0009482f) navi_pane_mv_g2

0x2b42,	// (0x00094856) navi_pane_mv_g5

0x2b4a,	// (0x0009485e) navi_pane_mv_t1

0xef71,	// (0x000a0c85) main_clock2_pane

0xe217,	// (0x0009ff2b) main_clock2_list_pane_ParamLimits

0xe217,	// (0x0009ff2b) main_clock2_list_pane

0x5639,	// (0x0009734d) main_clock2_pane_t1_ParamLimits

0x5639,	// (0x0009734d) main_clock2_pane_t1

0x5674,	// (0x00097388) main_clock2_pane_t2_ParamLimits

0x5674,	// (0x00097388) main_clock2_pane_t2

0x0004,

0xf737,	// (0x000a144b) main_clock2_pane_t_ParamLimits

0xf737,	// (0x000a144b) main_clock2_pane_t

0x5713,	// (0x00097427) popup_clock_analogue_window_cp03_ParamLimits

0x5713,	// (0x00097427) popup_clock_analogue_window_cp03

0x5738,	// (0x0009744c) popup_clock_digital_window_cp02_ParamLimits

0x5738,	// (0x0009744c) popup_clock_digital_window_cp02

0x57b1,	// (0x000974c5) main_clock2_list_single_pane_ParamLimits

0x57b1,	// (0x000974c5) main_clock2_list_single_pane

0xd34c,	// (0x0009f060) list_highlight_pane_cp05

0xa933,	// (0x0009c647) main_clock2_list_single_pane_t1

0x172c,	// (0x00093440) popup_toolbar_window_cp04_ParamLimits

0xef0d,	// (0x000a0c21) camera2_autofocus_pane_g2_ParamLimits

0xef0d,	// (0x000a0c21) camera2_autofocus_pane_g2

0xef0d,	// (0x000a0c21) camera2_autofocus_pane_g3_ParamLimits

0xef0d,	// (0x000a0c21) camera2_autofocus_pane_g3

0xef0d,	// (0x000a0c21) camera2_autofocus_pane_g4_ParamLimits

0xef0d,	// (0x000a0c21) camera2_autofocus_pane_g4

0xef0d,	// (0x000a0c21) camera2_autofocus_pane_g5_ParamLimits

0xef0d,	// (0x000a0c21) camera2_autofocus_pane_g5

0x0004,

0xf67b,	// (0x000a138f) camera2_autofocus_pane_g_ParamLimits

0xf67b,	// (0x000a138f) camera2_autofocus_pane_g

0x4e2b,	// (0x00096b3f) camera2_autofocus_pane_cp_g2

0x4e33,	// (0x00096b47) camera2_autofocus_pane_cp_g3

0x4e3b,	// (0x00096b4f) camera2_autofocus_pane_cp_g4

0x4e43,	// (0x00096b57) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e1,	// (0x000a13f5) camera2_autofocus_pane_cp_g

0xe14c,	// (0x0009fe60) popup_dialer_spcha_window

0xe14c,	// (0x0009fe60) bg_popup_sub_pane_cp07

0xe14c,	// (0x0009fe60) list_spcha_pane

0xa941,	// (0x0009c655) list_single_spcha_pane_ParamLimits

0xa941,	// (0x0009c655) list_single_spcha_pane

0xe14c,	// (0x0009fe60) list_highlight_pane_cp06

0xd8d7,	// (0x0009f5eb) list_single_spcha_pane_t1

0x3928,	// (0x0009563c) popup_call2_audio_out_window_g4_ParamLimits

0x3928,	// (0x0009563c) popup_call2_audio_out_window_g4

0xa2d7,	// (0x0009bfeb) main_imed2_pane

0xa488,	// (0x0009c19c) popup_imed_adjust2_window

0x42a9,	// (0x00095fbd) popup_imed_trans_window_ParamLimits

0x42a9,	// (0x00095fbd) popup_imed_trans_window

0x4a02,	// (0x00096716) popup_blid_sat_info2_window_t1

0x4a10,	// (0x00096724) popup_blid_sat_info2_window_t2

0x000a,

0xf610,	// (0x000a1324) popup_blid_sat_info2_window_t

0x586c,	// (0x00097580) aid_size_cell_colour_35

0x588c,	// (0x000975a0) aid_size_cell_colour_112

0x58ac,	// (0x000975c0) aid_size_cell_effect

0xe25f,	// (0x0009ff73) bg_tb_trans_pane_cp02

0xd808,	// (0x0009f51c) heading_imed_pane

0x58cc,	// (0x000975e0) listscroll_imed_pane

0xa953,	// (0x0009c667) heading_imed_pane_g1

0xa95b,	// (0x0009c66f) heading_imed_pane_t1

0xa969,	// (0x0009c67d) grid_imed_colour_35_pane_ParamLimits

0xa969,	// (0x0009c67d) grid_imed_colour_35_pane

0x58d8,	// (0x000975ec) grid_imed_effect_pane

0xa985,	// (0x0009c699) list_imed_aspect_pane

0x58ef,	// (0x00097603) scroll_pane_cp027_ParamLimits

0x58ef,	// (0x00097603) scroll_pane_cp027

0x5900,	// (0x00097614) cell_imed_effect_pane_ParamLimits

0x5900,	// (0x00097614) cell_imed_effect_pane

0xa98d,	// (0x0009c6a1) cell_imed_colour_pane_ParamLimits

0xa98d,	// (0x0009c6a1) cell_imed_colour_pane

0xa9d7,	// (0x0009c6eb) cell_imed_colour_pane_g1_ParamLimits

0xa9d7,	// (0x0009c6eb) cell_imed_colour_pane_g1

0xa9e8,	// (0x0009c6fc) hgihlgiht_grid_pane_cp016_ParamLimits

0xa9e8,	// (0x0009c6fc) hgihlgiht_grid_pane_cp016

0x592b,	// (0x0009763f) cell_imed_effect_pane_g1

0x5933,	// (0x00097647) grid_highlight_pane_cp017

0xa9f9,	// (0x0009c70d) list_imed_single_pane_ParamLimits

0xa9f9,	// (0x0009c70d) list_imed_single_pane

0xe14c,	// (0x0009fe60) list_highlight_pane_cp07

0xaa0d,	// (0x0009c721) list_imed_aspect_pane_comp1_t1

0xe25f,	// (0x0009ff73) bg_tb_trans_pane_cp05

0xaa2f,	// (0x0009c743) popup_imed_adjust2_window_g1

0xaa56,	// (0x0009c76a) popup_imed_adjust2_window_t1

0xaa6e,	// (0x0009c782) slider_imed_adjust_pane

0xaa82,	// (0x0009c796) slider_imed_adjust_pane_g1

0xaa92,	// (0x0009c7a6) slider_imed_adjust_pane_g2

0xaaa2,	// (0x0009c7b6) slider_imed_adjust_pane_g3

0xaab3,	// (0x0009c7c7) slider_imed_adjust_pane_g4

0x0003,

0xf754,	// (0x000a1468) slider_imed_adjust_pane_g

0x593c,	// (0x00097650) aid_size_cell_clipart2

0xaac4,	// (0x0009c7d8) grid_imed_clipart_pane

0xaace,	// (0x0009c7e2) scroll_pane_cp031

0x5948,	// (0x0009765c) cell_imed_clipart_pane_ParamLimits

0x5948,	// (0x0009765c) cell_imed_clipart_pane

0x5965,	// (0x00097679) cell_imed_clipart_pane_g1

0xe14c,	// (0x0009fe60) grid_highlight_pane_cp014

0x5617,	// (0x0009732b) main_clock2_pane_g1_ParamLimits

0x5617,	// (0x0009732b) main_clock2_pane_g1

0x5758,	// (0x0009746c) aid_call2_pane_cp10

0x576a,	// (0x0009747e) aid_call_pane_cp10

0xdc24,	// (0x0009f938) popup_clock_analogue_window_cp10_g1

0xdc24,	// (0x0009f938) popup_clock_analogue_window_cp10_g2

0x577c,	// (0x00097490) popup_clock_analogue_window_cp10_g3

0x577c,	// (0x00097490) popup_clock_analogue_window_cp10_g4

0xdc24,	// (0x0009f938) popup_clock_analogue_window_cp10_g5

0x0004,

0xf742,	// (0x000a1456) popup_clock_analogue_window_cp10_g

0x5792,	// (0x000974a6) popup_clock_analogue_window_cp10_t1

0x57c3,	// (0x000974d7) clock_digital_number_pane_cp10_ParamLimits

0x57c3,	// (0x000974d7) clock_digital_number_pane_cp10

0x57dd,	// (0x000974f1) clock_digital_number_pane_cp11_ParamLimits

0x57dd,	// (0x000974f1) clock_digital_number_pane_cp11

0x57f7,	// (0x0009750b) clock_digital_number_pane_cp12_ParamLimits

0x57f7,	// (0x0009750b) clock_digital_number_pane_cp12

0x5813,	// (0x00097527) clock_digital_number_pane_cp13_ParamLimits

0x5813,	// (0x00097527) clock_digital_number_pane_cp13

0x582f,	// (0x00097543) clock_digital_separator_pane_cp10_ParamLimits

0x582f,	// (0x00097543) clock_digital_separator_pane_cp10

0x584b,	// (0x0009755f) popup_clock_digital_window_cp02_t1_ParamLimits

0x584b,	// (0x0009755f) popup_clock_digital_window_cp02_t1

0xee7c,	// (0x000a0b90) clock_digital_number_pane_cp10_g1

0xee7c,	// (0x000a0b90) clock_digital_number_pane_cp10_g2

0x0001,

0xf75d,	// (0x000a1471) clock_digital_number_pane_cp10_g

0xee7c,	// (0x000a0b90) clock_digital_separator_pane_cp10_g1

0xee7c,	// (0x000a0b90) clock_digital_separator_pane_g2_cp10

0xdcbf,	// (0x0009f9d3) navi_pane_vded_g4

0xdcc8,	// (0x0009f9dc) navi_pane_vded_g5

0xdcd1,	// (0x0009f9e5) navi_pane_vded_t1

0xa2d7,	// (0x0009bfeb) main_vded_pane

0x596e,	// (0x00097682) main_vded_pane_g1

0x597a,	// (0x0009768e) main_vded_pane_g2

0x5986,	// (0x0009769a) main_vded_pane_g3

0x0002,

0xf762,	// (0x000a1476) main_vded_pane_g

0x5992,	// (0x000976a6) main_vded_pane_t1

0x59a0,	// (0x000976b4) main_vded_pane_t2

0x0001,

0xf769,	// (0x000a147d) main_vded_pane_t

0x59ae,	// (0x000976c2) vded_slider_pane

0x59b8,	// (0x000976cc) vded_video_pane

0xaad6,	// (0x0009c7ea) vded_video_pane_g1

0x59c4,	// (0x000976d8) vded_video_pane_g2

0xd382,	// (0x0009f096) vded_video_pane_g3

0x0002,

0xf76e,	// (0x000a1482) vded_video_pane_g

0xaae0,	// (0x0009c7f4) vded_slider_pane_g1

0x48ef,	// (0x00096603) vded_slider_pane_g2

0xaae9,	// (0x0009c7fd) vded_slider_pane_g3

0xaaf2,	// (0x0009c806) vded_slider_pane_g4

0xaafb,	// (0x0009c80f) vded_slider_pane_g5

0x0004,

0xf775,	// (0x000a1489) vded_slider_pane_g

0x5478,	// (0x0009718c) mup3_rocker_pane_ParamLimits

0x5478,	// (0x0009718c) mup3_rocker_pane

0x59cd,	// (0x000976e1) mup3_control_keys_pane_g1

0x59d5,	// (0x000976e9) mup3_control_keys_pane_g2

0x59dd,	// (0x000976f1) mup3_control_keys_pane_g3

0x59e5,	// (0x000976f9) mup3_control_keys_pane_g4

0x0003,

0xf780,	// (0x000a1494) mup3_control_keys_pane_g

0x09f2,	// (0x00092706) popup_toolbar2_fixed_window_cp01_ParamLimits

0x09f2,	// (0x00092706) popup_toolbar2_fixed_window_cp01

0x54ae,	// (0x000971c2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x54ae,	// (0x000971c2) popup_toolbar2_fixed_window_cp02

0xe590,	// (0x000a02a4) popup_call2_audio_second_window_t4_ParamLimits

0xe590,	// (0x000a02a4) popup_call2_audio_second_window_t4

0x3795,	// (0x000954a9) popup_call2_audio_first_window_t6_ParamLimits

0x3795,	// (0x000954a9) popup_call2_audio_first_window_t6

0x3a2b,	// (0x0009573f) popup_call2_audio_out_window_t6_ParamLimits

0x3a2b,	// (0x0009573f) popup_call2_audio_out_window_t6

0xa2d7,	// (0x0009bfeb) main_vitu_pane

0xe217,	// (0x0009ff2b) aid_size_cell_itu_ParamLimits

0xe217,	// (0x0009ff2b) aid_size_cell_itu

0xe217,	// (0x0009ff2b) bg_popup_window_pane_cp08_ParamLimits

0xe217,	// (0x0009ff2b) bg_popup_window_pane_cp08

0xe217,	// (0x0009ff2b) field_vitu_entry_pane_ParamLimits

0xe217,	// (0x0009ff2b) field_vitu_entry_pane

0xe217,	// (0x0009ff2b) grid_vitu_function_pane_ParamLimits

0xe217,	// (0x0009ff2b) grid_vitu_function_pane

0xe217,	// (0x0009ff2b) grid_vitu_itu_pane_ParamLimits

0xe217,	// (0x0009ff2b) grid_vitu_itu_pane

0xe217,	// (0x0009ff2b) cell_vitu_itu_pane_ParamLimits

0xe217,	// (0x0009ff2b) cell_vitu_itu_pane

0xe217,	// (0x0009ff2b) cell_vitu_function_pane_ParamLimits

0xe217,	// (0x0009ff2b) cell_vitu_function_pane

0xe217,	// (0x0009ff2b) bg_popup_sub_pane_cp08_ParamLimits

0xe217,	// (0x0009ff2b) bg_popup_sub_pane_cp08

0xd354,	// (0x0009f068) field_vitu_entry_pane_t1_ParamLimits

0xd354,	// (0x0009f068) field_vitu_entry_pane_t1

0xab04,	// (0x0009c818) field_vitu_entry_pane_t2_ParamLimits

0xab04,	// (0x0009c818) field_vitu_entry_pane_t2

0x0001,

0xf789,	// (0x000a149d) field_vitu_entry_pane_t_ParamLimits

0xf789,	// (0x000a149d) field_vitu_entry_pane_t

0x49a9,	// (0x000966bd) bg_button_pane_cp05_ParamLimits

0x49a9,	// (0x000966bd) bg_button_pane_cp05

0xab21,	// (0x0009c835) cell_vitu_itu_pane_g1

0xe24b,	// (0x0009ff5f) cell_vitu_itu_pane_t1_ParamLimits

0xe24b,	// (0x0009ff5f) cell_vitu_itu_pane_t1

0xe24b,	// (0x0009ff5f) cell_vitu_itu_pane_t2_ParamLimits

0xe24b,	// (0x0009ff5f) cell_vitu_itu_pane_t2

0x0002,

0xf78e,	// (0x000a14a2) cell_vitu_itu_pane_t_ParamLimits

0xf78e,	// (0x000a14a2) cell_vitu_itu_pane_t

0xe14c,	// (0x0009fe60) bg_button_pane_cp07

0xd382,	// (0x0009f096) cell_vitu_function_pane_g1

0xa2e1,	// (0x0009bff5) main_calc_pane_g1

0x081a,	// (0x0009252e) aid_visual_content_pane

0xa2d7,	// (0x0009bfeb) main_vradio_pane

0xeeff,	// (0x000a0c13) main_vradio_pane_g1_ParamLimits

0xeeff,	// (0x000a0c13) main_vradio_pane_g1

0xef0d,	// (0x000a0c21) main_vradio_pane_g2_ParamLimits

0xef0d,	// (0x000a0c21) main_vradio_pane_g2

0x0001,

0xf795,	// (0x000a14a9) main_vradio_pane_g_ParamLimits

0xf795,	// (0x000a14a9) main_vradio_pane_g

0xd354,	// (0x0009f068) main_vradio_pane_t1_ParamLimits

0xd354,	// (0x0009f068) main_vradio_pane_t1

0xd354,	// (0x0009f068) main_vradio_pane_t2_ParamLimits

0xd354,	// (0x0009f068) main_vradio_pane_t2

0xd9bf,	// (0x0009f6d3) main_vradio_pane_t3_ParamLimits

0xd9bf,	// (0x0009f6d3) main_vradio_pane_t3

0x0002,

0xf79a,	// (0x000a14ae) main_vradio_pane_t_ParamLimits

0xf79a,	// (0x000a14ae) main_vradio_pane_t

0xe217,	// (0x0009ff2b) vradio_rocker_control_pane_ParamLimits

0xe217,	// (0x0009ff2b) vradio_rocker_control_pane

0xe217,	// (0x0009ff2b) vradio_station_info_pane_ParamLimits

0xe217,	// (0x0009ff2b) vradio_station_info_pane

0xe217,	// (0x0009ff2b) vradio_frequency_info_pane_ParamLimits

0xe217,	// (0x0009ff2b) vradio_frequency_info_pane

0xd382,	// (0x0009f096) vradio_station_info_pane_g1

0xe24b,	// (0x0009ff5f) vradio_station_info_pane_t1_ParamLimits

0xe24b,	// (0x0009ff5f) vradio_station_info_pane_t1

0xd9bf,	// (0x0009f6d3) vradio_station_info_pane_t2_ParamLimits

0xd9bf,	// (0x0009f6d3) vradio_station_info_pane_t2

0x0001,

0xf7a1,	// (0x000a14b5) vradio_station_info_pane_t_ParamLimits

0xf7a1,	// (0x000a14b5) vradio_station_info_pane_t

0xe14c,	// (0x0009fe60) vradio_tuning_pane

0x59f5,	// (0x00097709) vradio_rocker_control_pane_g1

0xab3d,	// (0x0009c851) vradio_rocker_control_pane_g2

0x59ff,	// (0x00097713) vradio_rocker_control_pane_g3

0x5a09,	// (0x0009771d) vradio_rocker_control_pane_g4

0x5a13,	// (0x00097727) vradio_rocker_control_pane_g5

0x0004,

0xf7a6,	// (0x000a14ba) vradio_rocker_control_pane_g

0xd382,	// (0x0009f096) vradio_frequency_info_pane_g1

0xd354,	// (0x0009f068) vradio_frequency_info_pane_t1_ParamLimits

0xd354,	// (0x0009f068) vradio_frequency_info_pane_t1

0x5a1d,	// (0x00097731) vradio_tuning_pane_g1

0x5a28,	// (0x0009773c) vradio_tuning_pane_t1

0xa282,	// (0x0009bf96) area_side_right_pane_ParamLimits

0xa282,	// (0x0009bf96) area_side_right_pane

0x4103,	// (0x00095e17) status_small_pane_g1

0x410b,	// (0x00095e1f) status_small_pane_g2

0x4114,	// (0x00095e28) status_small_pane_g3

0x411d,	// (0x00095e31) status_small_pane_g4

0x0003,

0xf572,	// (0x000a1286) status_small_pane_g

0x4126,	// (0x00095e3a) status_small_pane_t1

0xa2d7,	// (0x0009bfeb) main_video3_pane

0xab45,	// (0x0009c859) cams_zoom_vslider_pane

0xab4d,	// (0x0009c861) image3_wide_pane_ParamLimits

0xab4d,	// (0x0009c861) image3_wide_pane

0xab67,	// (0x0009c87b) image3_wide_small_pane

0xab73,	// (0x0009c887) main_video3_pane_g1_ParamLimits

0xab73,	// (0x0009c887) main_video3_pane_g1

0xab8f,	// (0x0009c8a3) main_video3_pane_g2_ParamLimits

0xab8f,	// (0x0009c8a3) main_video3_pane_g2

0x0001,

0xf7b1,	// (0x000a14c5) main_video3_pane_g_ParamLimits

0xf7b1,	// (0x000a14c5) main_video3_pane_g

0xabab,	// (0x0009c8bf) main_video3_pane_t1_ParamLimits

0xabab,	// (0x0009c8bf) main_video3_pane_t1

0xabd6,	// (0x0009c8ea) main_video3_pane_t2_ParamLimits

0xabd6,	// (0x0009c8ea) main_video3_pane_t2

0xac03,	// (0x0009c917) main_video3_pane_t3_ParamLimits

0xac03,	// (0x0009c917) main_video3_pane_t3

0x0002,

0xf7b6,	// (0x000a14ca) main_video3_pane_t_ParamLimits

0xf7b6,	// (0x000a14ca) main_video3_pane_t

0xac30,	// (0x0009c944) cams_zoom_vslider_pane_g1

0xac39,	// (0x0009c94d) cams_zoom_vslider_pane_g2

0x0001,

0xf7bd,	// (0x000a14d1) cams_zoom_vslider_pane_g

0xac41,	// (0x0009c955) small_slider_vertical_pane

0xd382,	// (0x0009f096) small_slider_vertical_pane_g1

0xd382,	// (0x0009f096) small_slider_vertical_pane_g2

0xac49,	// (0x0009c95d) small_slider_vertical_pane_g3

0x0002,

0xf7c2,	// (0x000a14d6) small_slider_vertical_pane_g

0xa2d7,	// (0x0009bfeb) main_hwr_training_pane

0xac52,	// (0x0009c966) hwr_training_instruct_pane_ParamLimits

0xac52,	// (0x0009c966) hwr_training_instruct_pane

0x5a37,	// (0x0009774b) hwr_training_navi_pane_ParamLimits

0x5a37,	// (0x0009774b) hwr_training_navi_pane

0x5a56,	// (0x0009776a) hwr_training_write_pane_ParamLimits

0x5a56,	// (0x0009776a) hwr_training_write_pane

0xe14c,	// (0x0009fe60) bg_frame_shadow_pane

0xac89,	// (0x0009c99d) hwr_training_write_pane_g1

0xac91,	// (0x0009c9a5) hwr_training_write_pane_g2

0xac99,	// (0x0009c9ad) hwr_training_write_pane_g3

0xaca1,	// (0x0009c9b5) hwr_training_write_pane_g4

0xaca9,	// (0x0009c9bd) hwr_training_write_pane_g5

0xacb1,	// (0x0009c9c5) hwr_training_write_pane_g6

0xacb9,	// (0x0009c9cd) hwr_training_write_pane_g7

0x0006,

0xf7c9,	// (0x000a14dd) hwr_training_write_pane_g

0xacc1,	// (0x0009c9d5) hwr_training_navi_pane_g1_ParamLimits

0xacc1,	// (0x0009c9d5) hwr_training_navi_pane_g1

0xacd3,	// (0x0009c9e7) hwr_training_navi_pane_g2_ParamLimits

0xacd3,	// (0x0009c9e7) hwr_training_navi_pane_g2

0xace5,	// (0x0009c9f9) hwr_training_navi_pane_g3_ParamLimits

0xace5,	// (0x0009c9f9) hwr_training_navi_pane_g3

0xacf5,	// (0x0009ca09) hwr_training_navi_pane_g4_ParamLimits

0xacf5,	// (0x0009ca09) hwr_training_navi_pane_g4

0x0004,

0xf7d8,	// (0x000a14ec) hwr_training_navi_pane_g_ParamLimits

0xf7d8,	// (0x000a14ec) hwr_training_navi_pane_g

0xad02,	// (0x0009ca16) hwr_training_navi_pane_t1

0x5a9e,	// (0x000977b2) list_single_hwr_training_instruct_pane_ParamLimits

0x5a9e,	// (0x000977b2) list_single_hwr_training_instruct_pane

0xad10,	// (0x0009ca24) list_single_hwr_training_instruct_pane_t1

0x4b09,	// (0x0009681d) bg_frame_shadow_pane_g1

0xad1f,	// (0x0009ca33) bg_frame_shadow_pane_g2

0xad27,	// (0x0009ca3b) bg_frame_shadow_pane_g3

0xad2f,	// (0x0009ca43) bg_frame_shadow_pane_g4

0xad37,	// (0x0009ca4b) bg_frame_shadow_pane_g5

0xad3f,	// (0x0009ca53) bg_frame_shadow_pane_g6

0xad47,	// (0x0009ca5b) bg_frame_shadow_pane_g7

0xf029,	// (0x000a0d3d) bg_frame_shadow_pane_g8

0x0007,

0xf7e3,	// (0x000a14f7) bg_frame_shadow_pane_g

0xa2d7,	// (0x0009bfeb) main_video_tele_dialer_pane

0x5aba,	// (0x000977ce) aid_size_cell_video_keypad_ParamLimits

0x5aba,	// (0x000977ce) aid_size_cell_video_keypad

0x5ad4,	// (0x000977e8) grid_video_dialer_keypad_pane_ParamLimits

0x5ad4,	// (0x000977e8) grid_video_dialer_keypad_pane

0x5b20,	// (0x00097834) video_down_pane_cp_ParamLimits

0x5b20,	// (0x00097834) video_down_pane_cp

0x5b52,	// (0x00097866) cell_video_dialer_keypad_pane_ParamLimits

0x5b52,	// (0x00097866) cell_video_dialer_keypad_pane

0xad4f,	// (0x0009ca63) bg_button_pane_cp08_ParamLimits

0xad4f,	// (0x0009ca63) bg_button_pane_cp08

0x5b78,	// (0x0009788c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5b78,	// (0x0009788c) cell_video_dialer_keypad_pane_g1

0x5462,	// (0x00097176) mup3_rocker2_pane_ParamLimits

0x5462,	// (0x00097176) mup3_rocker2_pane

0xd382,	// (0x0009f096) mup3_rocker2_pane_g1

0x4176,	// (0x00095e8a) main_dialer2_pane

0xa2d7,	// (0x0009bfeb) main_mp4_pane

0xad79,	// (0x0009ca8d) main_mp4_pane_g1_ParamLimits

0xad79,	// (0x0009ca8d) main_mp4_pane_g1

0xad79,	// (0x0009ca8d) main_mp4_pane_g2_ParamLimits

0xad79,	// (0x0009ca8d) main_mp4_pane_g2

0x5bb3,	// (0x000978c7) main_mp4_pane_g3_ParamLimits

0x5bb3,	// (0x000978c7) main_mp4_pane_g3

0xad87,	// (0x0009ca9b) main_mp4_pane_g4_ParamLimits

0xad87,	// (0x0009ca9b) main_mp4_pane_g4

0xadb5,	// (0x0009cac9) main_mp4_pane_g5_ParamLimits

0xadb5,	// (0x0009cac9) main_mp4_pane_g5

0x0007,

0xf803,	// (0x000a1517) main_mp4_pane_g_ParamLimits

0xf803,	// (0x000a1517) main_mp4_pane_g

0xae29,	// (0x0009cb3d) main_mp4_pane_t1_ParamLimits

0xae29,	// (0x0009cb3d) main_mp4_pane_t1

0xae85,	// (0x0009cb99) main_mp4_pane_t2_ParamLimits

0xae85,	// (0x0009cb99) main_mp4_pane_t2

0xaed7,	// (0x0009cbeb) main_mp4_pane_t3_ParamLimits

0xaed7,	// (0x0009cbeb) main_mp4_pane_t3

0xaefd,	// (0x0009cc11) main_mp4_pane_t4_ParamLimits

0xaefd,	// (0x0009cc11) main_mp4_pane_t4

0x0003,

0xf814,	// (0x000a1528) main_mp4_pane_t_ParamLimits

0xf814,	// (0x000a1528) main_mp4_pane_t

0xaf3d,	// (0x0009cc51) mp4_progress_pane_ParamLimits

0xaf3d,	// (0x0009cc51) mp4_progress_pane

0xaf87,	// (0x0009cc9b) mp4_rocker_pane_ParamLimits

0xaf87,	// (0x0009cc9b) mp4_rocker_pane

0xafaf,	// (0x0009ccc3) mp4_progress_pane_t1

0xafc8,	// (0x0009ccdc) mp4_progress_pane_t2

0x0001,

0xf81d,	// (0x000a1531) mp4_progress_pane_t

0xafe1,	// (0x0009ccf5) mup_progress_pane_cp04

0xa570,	// (0x0009c284) mp4_rocker_pane_g1

0x5bfd,	// (0x00097911) aid_cell_size_keypad2_ParamLimits

0x5bfd,	// (0x00097911) aid_cell_size_keypad2

0x5c13,	// (0x00097927) dialer2_ne_pane_ParamLimits

0x5c13,	// (0x00097927) dialer2_ne_pane

0x5c2b,	// (0x0009793f) grid_dialer2_keypad_pane_ParamLimits

0x5c2b,	// (0x0009793f) grid_dialer2_keypad_pane

0x49a9,	// (0x000966bd) bg_popup_call_pane_cp07_ParamLimits

0x49a9,	// (0x000966bd) bg_popup_call_pane_cp07

0x5c47,	// (0x0009795b) dialer2_ne_pane_t1_ParamLimits

0x5c47,	// (0x0009795b) dialer2_ne_pane_t1

0x5c87,	// (0x0009799b) cell_dialer2_keypad_pane_ParamLimits

0x5c87,	// (0x0009799b) cell_dialer2_keypad_pane

0xb006,	// (0x0009cd1a) bg_button_pane_pane_cp04_ParamLimits

0xb006,	// (0x0009cd1a) bg_button_pane_pane_cp04

0x5cad,	// (0x000979c1) cell_dialer2_keypad_pane_g1_ParamLimits

0x5cad,	// (0x000979c1) cell_dialer2_keypad_pane_g1

0x1613,	// (0x00093327) aid_placing_vt_set_content_ParamLimits

0x1613,	// (0x00093327) aid_placing_vt_set_content

0x1637,	// (0x0009334b) aid_placing_vt_set_title_ParamLimits

0x1637,	// (0x0009334b) aid_placing_vt_set_title

0xa2d7,	// (0x0009bfeb) main_image3_pane

0x5d73,	// (0x00097a87) area_side_right_pane_cp01_ParamLimits

0x5d73,	// (0x00097a87) area_side_right_pane_cp01

0xad79,	// (0x0009ca8d) main_image3_pane_g1_ParamLimits

0xad79,	// (0x0009ca8d) main_image3_pane_g1

0x5d8c,	// (0x00097aa0) main_image3_pane_g2_ParamLimits

0x5d8c,	// (0x00097aa0) main_image3_pane_g2

0x5db4,	// (0x00097ac8) main_image3_pane_g3_ParamLimits

0x5db4,	// (0x00097ac8) main_image3_pane_g3

0x5dde,	// (0x00097af2) main_image3_pane_g4_ParamLimits

0x5dde,	// (0x00097af2) main_image3_pane_g4

0x0003,

0xf82c,	// (0x000a1540) main_image3_pane_g_ParamLimits

0xf82c,	// (0x000a1540) main_image3_pane_g

0x5e08,	// (0x00097b1c) main_image3_pane_t1_ParamLimits

0x5e08,	// (0x00097b1c) main_image3_pane_t1

0x5e60,	// (0x00097b74) main_image3_pane_t2_ParamLimits

0x5e60,	// (0x00097b74) main_image3_pane_t2

0x5eb2,	// (0x00097bc6) main_image3_pane_t3_ParamLimits

0x5eb2,	// (0x00097bc6) main_image3_pane_t3

0x0003,

0xf835,	// (0x000a1549) main_image3_pane_t_ParamLimits

0xf835,	// (0x000a1549) main_image3_pane_t

0xe217,	// (0x0009ff2b) grid_sctrl_middle_pane_cp01_ParamLimits

0xe217,	// (0x0009ff2b) grid_sctrl_middle_pane_cp01

0x5f3a,	// (0x00097c4e) cell_sctrl_middle_pane_cp01_ParamLimits

0x5f3a,	// (0x00097c4e) cell_sctrl_middle_pane_cp01

0x5f57,	// (0x00097c6b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5f57,	// (0x00097c6b) cell_sctrl_middle_pane_cp01_g1

0xa2d7,	// (0x0009bfeb) main_call4_pane

0x5f6c,	// (0x00097c80) aid_size_button_call4_ParamLimits

0x5f6c,	// (0x00097c80) aid_size_button_call4

0x5f9f,	// (0x00097cb3) call4_windows_pane_ParamLimits

0x5f9f,	// (0x00097cb3) call4_windows_pane

0x5fbe,	// (0x00097cd2) grid_call4_button_pane_ParamLimits

0x5fbe,	// (0x00097cd2) grid_call4_button_pane

0x5ff5,	// (0x00097d09) call4_windows_conf_pane

0x600e,	// (0x00097d22) popup_call4_audio_first_window_ParamLimits

0x600e,	// (0x00097d22) popup_call4_audio_first_window

0x605e,	// (0x00097d72) popup_call4_audio_second_window_ParamLimits

0x605e,	// (0x00097d72) popup_call4_audio_second_window

0x6077,	// (0x00097d8b) popup_call4_audio_wait_window_ParamLimits

0x6077,	// (0x00097d8b) popup_call4_audio_wait_window

0x6085,	// (0x00097d99) cell_call4_button_pane_ParamLimits

0x6085,	// (0x00097d99) cell_call4_button_pane

0x60ac,	// (0x00097dc0) bg_button_pane_cp09_ParamLimits

0x60ac,	// (0x00097dc0) bg_button_pane_cp09

0x60b8,	// (0x00097dcc) cell_call4_button_pane_g1_ParamLimits

0x60b8,	// (0x00097dcc) cell_call4_button_pane_g1

0x60de,	// (0x00097df2) cell_call4_button_pane_t1_ParamLimits

0x60de,	// (0x00097df2) cell_call4_button_pane_t1

0xb080,	// (0x0009cd94) popup_call4_audio_conf_window_ParamLimits

0xb080,	// (0x0009cd94) popup_call4_audio_conf_window

0x54c4,	// (0x000971d8) mup3_progress_pane_t1_ParamLimits

0x54e3,	// (0x000971f7) mup3_progress_pane_t2_ParamLimits

0xa804,	// (0x0009c518) mup3_progress_pane_t3_ParamLimits

0xf70a,	// (0x000a141e) mup3_progress_pane_t_ParamLimits

0xa821,	// (0x0009c535) mup_progress_pane_cp03_ParamLimits

0x59ed,	// (0x00097701) mup3_control_keys_pane_g4_copy1

0xaf6b,	// (0x0009cc7f) mp4_rocker2_pane_ParamLimits

0xaf6b,	// (0x0009cc7f) mp4_rocker2_pane

0xb09a,	// (0x0009cdae) mp4_rocker2_pane_g1

0xb0a2,	// (0x0009cdb6) mp4_rocker2_pane_g2

0xb0aa,	// (0x0009cdbe) mp4_rocker2_pane_g3

0xb0b2,	// (0x0009cdc6) mp4_rocker2_pane_g4

0xb0ba,	// (0x0009cdce) mp4_rocker2_pane_g5

0x0004,

0xf83e,	// (0x000a1552) mp4_rocker2_pane_g

0xa2d7,	// (0x0009bfeb) main_camera4_pane

0xa2d7,	// (0x0009bfeb) main_video4_pane

0x5aee,	// (0x00097802) main_video_tele_dialer_pane_t1_ParamLimits

0x5aee,	// (0x00097802) main_video_tele_dialer_pane_t1

0x5b07,	// (0x0009781b) main_video_tele_dialer_pane_t2_ParamLimits

0x5b07,	// (0x0009781b) main_video_tele_dialer_pane_t2

0x0001,

0xf7f4,	// (0x000a1508) main_video_tele_dialer_pane_t_ParamLimits

0xf7f4,	// (0x000a1508) main_video_tele_dialer_pane_t

0x611c,	// (0x00097e30) cam4_autofocus_pane_ParamLimits

0x611c,	// (0x00097e30) cam4_autofocus_pane

0x6132,	// (0x00097e46) cam4_image_uncrop_pane_ParamLimits

0x6132,	// (0x00097e46) cam4_image_uncrop_pane

0x614b,	// (0x00097e5f) cam4_indicators_pane_ParamLimits

0x614b,	// (0x00097e5f) cam4_indicators_pane

0x617b,	// (0x00097e8f) main_camera4_pane_g1_ParamLimits

0x617b,	// (0x00097e8f) main_camera4_pane_g1

0x618d,	// (0x00097ea1) main_camera4_pane_g2_ParamLimits

0x618d,	// (0x00097ea1) main_camera4_pane_g2

0x61a0,	// (0x00097eb4) main_camera4_pane_g3_ParamLimits

0x61a0,	// (0x00097eb4) main_camera4_pane_g3

0x61b3,	// (0x00097ec7) main_camera4_pane_g4_ParamLimits

0x61b3,	// (0x00097ec7) main_camera4_pane_g4

0x61c6,	// (0x00097eda) main_camera4_pane_g5_ParamLimits

0x61c6,	// (0x00097eda) main_camera4_pane_g5

0x0005,

0xf849,	// (0x000a155d) main_camera4_pane_g_ParamLimits

0xf849,	// (0x000a155d) main_camera4_pane_g

0x61ea,	// (0x00097efe) main_camera4_pane_t1_ParamLimits

0x61ea,	// (0x00097efe) main_camera4_pane_t1

0xb0f4,	// (0x0009ce08) bg_tb_trans_pane_cp06

0xb10a,	// (0x0009ce1e) cam4_indicators_pane_g1

0xb11b,	// (0x0009ce2f) cam4_indicators_pane_g2

0x0002,

0xf864,	// (0x000a1578) cam4_indicators_pane_g

0xb133,	// (0x0009ce47) cam4_indicators_pane_t1

0x624e,	// (0x00097f62) main_video4_pane_g1_ParamLimits

0x624e,	// (0x00097f62) main_video4_pane_g1

0x625d,	// (0x00097f71) main_video4_pane_g2_ParamLimits

0x625d,	// (0x00097f71) main_video4_pane_g2

0x626d,	// (0x00097f81) main_video4_pane_g3_ParamLimits

0x626d,	// (0x00097f81) main_video4_pane_g3

0x627d,	// (0x00097f91) main_video4_pane_g4_ParamLimits

0x627d,	// (0x00097f91) main_video4_pane_g4

0x0004,

0xf86b,	// (0x000a157f) main_video4_pane_g_ParamLimits

0xf86b,	// (0x000a157f) main_video4_pane_g

0x629d,	// (0x00097fb1) vid4_indicators_pane_ParamLimits

0x629d,	// (0x00097fb1) vid4_indicators_pane

0x62c7,	// (0x00097fdb) video4_image_uncrop_cif_pane_ParamLimits

0x62c7,	// (0x00097fdb) video4_image_uncrop_cif_pane

0x62e1,	// (0x00097ff5) video4_image_uncrop_nhd_pane_ParamLimits

0x62e1,	// (0x00097ff5) video4_image_uncrop_nhd_pane

0x6132,	// (0x00097e46) video4_image_uncrop_vga_pane_ParamLimits

0x6132,	// (0x00097e46) video4_image_uncrop_vga_pane

0xa2c9,	// (0x0009bfdd) bg_tb_trans_pane_cp07

0xb161,	// (0x0009ce75) vid4_indicators_pane_g1

0xb177,	// (0x0009ce8b) vid4_indicators_pane_g2

0xb18b,	// (0x0009ce9f) vid4_indicators_pane_g3

0x0004,

0xf876,	// (0x000a158a) vid4_indicators_pane_g

0xb1bc,	// (0x0009ced0) vid4_indicators_pane_t1

0x62f8,	// (0x0009800c) cam4_autofocus_pane_g1

0x6300,	// (0x00098014) cam4_autofocus_pane_g2

0x6308,	// (0x0009801c) cam4_autofocus_pane_g3

0x0002,

0xf881,	// (0x000a1595) cam4_autofocus_pane_g

0x6310,	// (0x00098024) cam4_autofocus_pane_g3_copy1

0x5b36,	// (0x0009784a) video_down_pane_cp_t1

0x5b44,	// (0x00097858) video_down_pane_cp_t2

0x0001,

0xf7f9,	// (0x000a150d) video_down_pane_cp_t

0xa2c9,	// (0x0009bfdd) popup_vitu2_window_ParamLimits

0xa2c9,	// (0x0009bfdd) popup_vitu2_window

0x6318,	// (0x0009802c) aid_size_cell2_itu2_ParamLimits

0x6318,	// (0x0009802c) aid_size_cell2_itu2

0x633e,	// (0x00098052) aid_size_cell_itu2_ParamLimits

0x633e,	// (0x00098052) aid_size_cell_itu2

0x639c,	// (0x000980b0) bg_popup_window_pane_cp09_ParamLimits

0x639c,	// (0x000980b0) bg_popup_window_pane_cp09

0x63aa,	// (0x000980be) field_vitu2_entry_pane_ParamLimits

0x63aa,	// (0x000980be) field_vitu2_entry_pane

0x63d2,	// (0x000980e6) grid_vitu2_function_pane_ParamLimits

0x63d2,	// (0x000980e6) grid_vitu2_function_pane

0x6423,	// (0x00098137) grid_vitu2_itu_pane_ParamLimits

0x6423,	// (0x00098137) grid_vitu2_itu_pane

0x64b3,	// (0x000981c7) cell_vitu2_itu_pane_ParamLimits

0x64b3,	// (0x000981c7) cell_vitu2_itu_pane

0x64e1,	// (0x000981f5) cell_vitu2_function_pane_ParamLimits

0x64e1,	// (0x000981f5) cell_vitu2_function_pane

0xb1d3,	// (0x0009cee7) bg_popup_call_pane_cp08_ParamLimits

0xb1d3,	// (0x0009cee7) bg_popup_call_pane_cp08

0xb1ea,	// (0x0009cefe) field_vitu2_entry_pane_g1

0xb1f6,	// (0x0009cf0a) field_vitu2_entry_pane_g2

0x0002,

0xf888,	// (0x000a159c) field_vitu2_entry_pane_g

0xb202,	// (0x0009cf16) field_vitu2_entry_pane_t1_ParamLimits

0xb202,	// (0x0009cf16) field_vitu2_entry_pane_t1

0xb231,	// (0x0009cf45) field_vitu2_entry_pane_t2_ParamLimits

0xb231,	// (0x0009cf45) field_vitu2_entry_pane_t2

0x0001,

0xf88f,	// (0x000a15a3) field_vitu2_entry_pane_t_ParamLimits

0xf88f,	// (0x000a15a3) field_vitu2_entry_pane_t

0x6525,	// (0x00098239) bg_button_pane_cp010_ParamLimits

0x6525,	// (0x00098239) bg_button_pane_cp010

0x6533,	// (0x00098247) cell_vitu2_itu_pane_g1

0x6559,	// (0x0009826d) cell_vitu2_itu_pane_t1_ParamLimits

0x6559,	// (0x0009826d) cell_vitu2_itu_pane_t1

0x06f2,	// (0x00092406) cell_vitu2_itu_pane_t2_ParamLimits

0x06f2,	// (0x00092406) cell_vitu2_itu_pane_t2

0x0002,

0xf899,	// (0x000a15ad) cell_vitu2_itu_pane_t_ParamLimits

0xf899,	// (0x000a15ad) cell_vitu2_itu_pane_t

0xa2c9,	// (0x0009bfdd) bg_button_pane_cp011

0x65b7,	// (0x000982cb) cell_vitu2_function_pane_g1

0xa2d7,	// (0x0009bfeb) main_myfav_hc_pane

0x5f02,	// (0x00097c16) popup_image3_note_pane_ParamLimits

0x5f02,	// (0x00097c16) popup_image3_note_pane

0x5f1e,	// (0x00097c32) popup_image3_tool_bar_pane_ParamLimits

0x5f1e,	// (0x00097c32) popup_image3_tool_bar_pane

0x0780,	// (0x00092494) cell_vitu2_itu_pane_t3_ParamLimits

0x0780,	// (0x00092494) cell_vitu2_itu_pane_t3

0xe14c,	// (0x0009fe60) bg_popup_trans_pane

0xb256,	// (0x0009cf6a) grid_image3_tool_bar_pane

0xb260,	// (0x0009cf74) bg_popup_trans_pane_g1

0xd597,	// (0x0009f2ab) bg_popup_trans_pane_g2

0xb268,	// (0x0009cf7c) bg_popup_trans_pane_g3

0xb270,	// (0x0009cf84) bg_popup_trans_pane_g4

0xb278,	// (0x0009cf8c) bg_popup_trans_pane_g5

0xb280,	// (0x0009cf94) bg_popup_trans_pane_g6

0xb288,	// (0x0009cf9c) bg_popup_trans_pane_g7

0xb290,	// (0x0009cfa4) bg_popup_trans_pane_g8

0xd577,	// (0x0009f28b) bg_popup_trans_pane_g9

0x0008,

0xf8a0,	// (0x000a15b4) bg_popup_trans_pane_g

0xb298,	// (0x0009cfac) cell_image3_tool_bar_pane_ParamLimits

0xb298,	// (0x0009cfac) cell_image3_tool_bar_pane

0xd382,	// (0x0009f096) cell_image3_tool_bar_pane_g1

0xe14c,	// (0x0009fe60) bg_popup_trans_pane_cp1

0xb2ae,	// (0x0009cfc2) popup_image3_note_pane_t1

0xb2bc,	// (0x0009cfd0) popup_image3_note_pane_t2

0xb2ca,	// (0x0009cfde) popup_image3_note_pane_t3

0x0002,

0xf8b3,	// (0x000a15c7) popup_image3_note_pane_t

0xb2da,	// (0x0009cfee) popup_image3_note_pane_t3_copy1

0x65cb,	// (0x000982df) bg_myfav_hc_instruction_pane_ParamLimits

0x65cb,	// (0x000982df) bg_myfav_hc_instruction_pane

0x65e3,	// (0x000982f7) cell_myfav_contact_pane_ParamLimits

0x65e3,	// (0x000982f7) cell_myfav_contact_pane

0x65ff,	// (0x00098313) cell_myfav_contact_pane_cp1_ParamLimits

0x65ff,	// (0x00098313) cell_myfav_contact_pane_cp1

0x6617,	// (0x0009832b) cell_myfav_contact_pane_cp2_ParamLimits

0x6617,	// (0x0009832b) cell_myfav_contact_pane_cp2

0x662f,	// (0x00098343) cell_myfav_contact_pane_cp3_ParamLimits

0x662f,	// (0x00098343) cell_myfav_contact_pane_cp3

0x6646,	// (0x0009835a) cell_myfav_contact_pane_cp4_ParamLimits

0x6646,	// (0x0009835a) cell_myfav_contact_pane_cp4

0x665e,	// (0x00098372) cell_myfav_contact_pane_cp5_ParamLimits

0x665e,	// (0x00098372) cell_myfav_contact_pane_cp5

0x6672,	// (0x00098386) cell_myfav_contact_pane_cp6_ParamLimits

0x6672,	// (0x00098386) cell_myfav_contact_pane_cp6

0x6688,	// (0x0009839c) cell_myfav_contact_pane_cp7_ParamLimits

0x6688,	// (0x0009839c) cell_myfav_contact_pane_cp7

0xb2e8,	// (0x0009cffc) listscroll_gen_pane_cp05

0x66a0,	// (0x000983b4) main_myfav_hc_pane_g1_ParamLimits

0x66a0,	// (0x000983b4) main_myfav_hc_pane_g1

0x66ba,	// (0x000983ce) main_myfav_hc_pane_g2_ParamLimits

0x66ba,	// (0x000983ce) main_myfav_hc_pane_g2

0x0002,

0xf8ba,	// (0x000a15ce) main_myfav_hc_pane_g_ParamLimits

0xf8ba,	// (0x000a15ce) main_myfav_hc_pane_g

0x66ee,	// (0x00098402) main_myfav_hc_pane_t1_ParamLimits

0x66ee,	// (0x00098402) main_myfav_hc_pane_t1

0xb2f1,	// (0x0009d005) main_myfav_hc_pane_t2_ParamLimits

0xb2f1,	// (0x0009d005) main_myfav_hc_pane_t2

0xb303,	// (0x0009d017) main_myfav_hc_pane_t3_ParamLimits

0xb303,	// (0x0009d017) main_myfav_hc_pane_t3

0x6705,	// (0x00098419) main_myfav_hc_pane_t4_ParamLimits

0x6705,	// (0x00098419) main_myfav_hc_pane_t4

0x0004,

0xf8c1,	// (0x000a15d5) main_myfav_hc_pane_t_ParamLimits

0xf8c1,	// (0x000a15d5) main_myfav_hc_pane_t

0xd382,	// (0x0009f096) bg_myfav_hc_instruction_pane_g1

0xb315,	// (0x0009d029) cell_myfav_contact_pane_g1_ParamLimits

0xb315,	// (0x0009d029) cell_myfav_contact_pane_g1

0xb315,	// (0x0009d029) cell_myfav_contact_pane_g2_ParamLimits

0xb315,	// (0x0009d029) cell_myfav_contact_pane_g2

0xb321,	// (0x0009d035) cell_myfav_contact_pane_g3_ParamLimits

0xb321,	// (0x0009d035) cell_myfav_contact_pane_g3

0xef0d,	// (0x000a0c21) cell_myfav_contact_pane_g4_ParamLimits

0xef0d,	// (0x000a0c21) cell_myfav_contact_pane_g4

0xb32e,	// (0x0009d042) cell_myfav_contact_pane_g5_ParamLimits

0xb32e,	// (0x0009d042) cell_myfav_contact_pane_g5

0x0004,

0xf8cc,	// (0x000a15e0) cell_myfav_contact_pane_g_ParamLimits

0xf8cc,	// (0x000a15e0) cell_myfav_contact_pane_g

0x66d4,	// (0x000983e8) main_myfav_hc_pane_g3_ParamLimits

0x66d4,	// (0x000983e8) main_myfav_hc_pane_g3

0x0955,	// (0x00092669) popup_adpt_find_window

0x672f,	// (0x00098443) afind_page_pane_ParamLimits

0x672f,	// (0x00098443) afind_page_pane

0x6744,	// (0x00098458) aid_size_cell_afind_ParamLimits

0x6744,	// (0x00098458) aid_size_cell_afind

0x6762,	// (0x00098476) bg_popup_sub_pane_cp09_ParamLimits

0x6762,	// (0x00098476) bg_popup_sub_pane_cp09

0x676f,	// (0x00098483) find_pane_cp01_ParamLimits

0x676f,	// (0x00098483) find_pane_cp01

0xb33a,	// (0x0009d04e) grid_afind_control_pane_ParamLimits

0xb33a,	// (0x0009d04e) grid_afind_control_pane

0x677c,	// (0x00098490) grid_afind_pane_ParamLimits

0x677c,	// (0x00098490) grid_afind_pane

0x679e,	// (0x000984b2) cell_afind_pane_ParamLimits

0x679e,	// (0x000984b2) cell_afind_pane

0xd382,	// (0x0009f096) afind_page_pane_g1

0x680b,	// (0x0009851f) afind_page_pane_g2

0x6814,	// (0x00098528) afind_page_pane_g3

0x0002,

0xf8d7,	// (0x000a15eb) afind_page_pane_g

0x681d,	// (0x00098531) afind_page_pane_t1

0xb34e,	// (0x0009d062) cell_afind_grid_control_pane_ParamLimits

0xb34e,	// (0x0009d062) cell_afind_grid_control_pane

0xb006,	// (0x0009cd1a) bg_button_pane_cp69_ParamLimits

0xb006,	// (0x0009cd1a) bg_button_pane_cp69

0x683d,	// (0x00098551) cell_afind_pane_g1_ParamLimits

0x683d,	// (0x00098551) cell_afind_pane_g1

0x684a,	// (0x0009855e) cell_afind_pane_t1_ParamLimits

0x684a,	// (0x0009855e) cell_afind_pane_t1

0xd38c,	// (0x0009f0a0) bg_button_pane_cp72

0xb35d,	// (0x0009d071) cell_afind_grid_control_pane_g1

0x3332,	// (0x00095046) aid_image_placing_area_ParamLimits

0x3332,	// (0x00095046) aid_image_placing_area

0xeeff,	// (0x000a0c13) field_vitu_entry_pane_g1_ParamLimits

0xeeff,	// (0x000a0c13) field_vitu_entry_pane_g1

0xeeff,	// (0x000a0c13) field_vitu_entry_pane_g2_ParamLimits

0xeeff,	// (0x000a0c13) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x000a0efb) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x000a0efb) field_vitu_entry_pane_g

0xab21,	// (0x0009c835) cell_vitu_itu_pane_g1_ParamLimits

0xab04,	// (0x0009c818) cell_vitu_itu_pane_t3_ParamLimits

0xab04,	// (0x0009c818) cell_vitu_itu_pane_t3

0xafaf,	// (0x0009ccc3) mp4_progress_pane_t1_ParamLimits

0xafc8,	// (0x0009ccdc) mp4_progress_pane_t2_ParamLimits

0xf81d,	// (0x000a1531) mp4_progress_pane_t_ParamLimits

0xafe1,	// (0x0009ccf5) mup_progress_pane_cp04_ParamLimits

0x6719,	// (0x0009842d) main_myfav_hc_pane_t5_ParamLimits

0x6719,	// (0x0009842d) main_myfav_hc_pane_t5

0xa272,	// (0x0009bf86) aid_zoom_text_primary

0x0955,	// (0x00092669) popup_adpt_find_window_ParamLimits

0xa2c9,	// (0x0009bfdd) main_cam_set_pane

0x6164,	// (0x00097e78) cam4_zoom_pane_ParamLimits

0x6164,	// (0x00097e78) cam4_zoom_pane

0x685c,	// (0x00098570) main_cam_set_pane_g1_ParamLimits

0x685c,	// (0x00098570) main_cam_set_pane_g1

0x686a,	// (0x0009857e) main_cam_set_pane_g2_ParamLimits

0x686a,	// (0x0009857e) main_cam_set_pane_g2

0x0001,

0xf8de,	// (0x000a15f2) main_cam_set_pane_g_ParamLimits

0xf8de,	// (0x000a15f2) main_cam_set_pane_g

0x688b,	// (0x0009859f) main_cam_set_pane_t1_ParamLimits

0x688b,	// (0x0009859f) main_cam_set_pane_t1

0x68a6,	// (0x000985ba) main_cset_listscroll_pane_ParamLimits

0x68a6,	// (0x000985ba) main_cset_listscroll_pane

0x68ce,	// (0x000985e2) main_cset_slider_pane_ParamLimits

0x68ce,	// (0x000985e2) main_cset_slider_pane

0xb36e,	// (0x0009d082) main_cset_list_pane_ParamLimits

0xb36e,	// (0x0009d082) main_cset_list_pane

0xb37e,	// (0x0009d092) scroll_pane_cp028

0x68f8,	// (0x0009860c) aid_area_touch_slider

0x6914,	// (0x00098628) cset_slider_pane

0x6937,	// (0x0009864b) main_cset_slider_pane_g1

0x694c,	// (0x00098660) main_cset_slider_pane_g2

0x0011,

0xf8e3,	// (0x000a15f7) main_cset_slider_pane_g

0xb3b7,	// (0x0009d0cb) main_cset_slider_pane_t1

0x6a0e,	// (0x00098722) main_cset_slider_pane_t2

0x6a28,	// (0x0009873c) main_cset_slider_pane_t3

0x6a42,	// (0x00098756) main_cset_slider_pane_t4

0x6a5c,	// (0x00098770) main_cset_slider_pane_t5

0x6a7a,	// (0x0009878e) main_cset_slider_pane_t6

0x6a91,	// (0x000987a5) main_cset_slider_pane_t7

0x000e,

0xf908,	// (0x000a161c) main_cset_slider_pane_t

0x6b9d,	// (0x000988b1) cset_list_set_pane_ParamLimits

0x6b9d,	// (0x000988b1) cset_list_set_pane

0xb451,	// (0x0009d165) aid_position_infowindow_above

0xb459,	// (0x0009d16d) aid_position_infowindow_below

0x6bb1,	// (0x000988c5) cset_list_set_pane_g1_ParamLimits

0x6bb1,	// (0x000988c5) cset_list_set_pane_g1

0x6bbd,	// (0x000988d1) cset_list_set_pane_g3_ParamLimits

0x6bbd,	// (0x000988d1) cset_list_set_pane_g3

0x0001,

0xf927,	// (0x000a163b) cset_list_set_pane_g_ParamLimits

0xf927,	// (0x000a163b) cset_list_set_pane_g

0x6bcc,	// (0x000988e0) cset_list_set_pane_t1_ParamLimits

0x6bcc,	// (0x000988e0) cset_list_set_pane_t1

0xe217,	// (0x0009ff2b) list_highlight_pane_cp021_ParamLimits

0xe217,	// (0x0009ff2b) list_highlight_pane_cp021

0xde0a,	// (0x0009fb1e) cset_slider_pane_g1

0xde1c,	// (0x0009fb30) cset_slider_pane_g2

0xde13,	// (0x0009fb27) cset_slider_pane_g3

0x0002,

0xf92c,	// (0x000a1640) cset_slider_pane_g

0xdac8,	// (0x0009f7dc) aid_area_touch_cam4_zoom

0x6be1,	// (0x000988f5) cam4_zoom_cont_pane

0x6be9,	// (0x000988fd) cam4_zoom_pane_g1

0x6bf1,	// (0x00098905) cam4_zoom_pane_g2

0x6bf9,	// (0x0009890d) cam4_zoom_pane_g3

0x0002,

0xf933,	// (0x000a1647) cam4_zoom_pane_g

0xb461,	// (0x0009d175) cam4_zoom_cont_pane_g1

0xb46a,	// (0x0009d17e) cam4_zoom_cont_pane_g2

0xb473,	// (0x0009d187) cam4_zoom_cont_pane_g3

0x0002,

0xf93a,	// (0x000a164e) cam4_zoom_cont_pane_g

0x5f8a,	// (0x00097c9e) call4_image_pane_ParamLimits

0x5f8a,	// (0x00097c9e) call4_image_pane

0x5ff5,	// (0x00097d09) call4_windows_conf_pane_ParamLimits

0x603c,	// (0x00097d50) popup_call4_audio_in_window_ParamLimits

0x603c,	// (0x00097d50) popup_call4_audio_in_window

0xe14c,	// (0x0009fe60) bg_popup_call2_act_pane_cp02

0xb078,	// (0x0009cd8c) call4_list_conf_pane

0xd382,	// (0x0009f096) call4_image_pane_g1

0xd382,	// (0x0009f096) call4_image_pane_g2

0x0001,

0xf3be,	// (0x000a10d2) call4_image_pane_g

0xb47c,	// (0x0009d190) list_single_graphic_popup_conf4_pane_ParamLimits

0xb47c,	// (0x0009d190) list_single_graphic_popup_conf4_pane

0xe14c,	// (0x0009fe60) list_highlight_pane_cp022

0xb491,	// (0x0009d1a5) list_single_graphic_popup_conf4_pane_g1

0xdb21,	// (0x0009f835) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf941,	// (0x000a1655) list_single_graphic_popup_conf4_pane_g

0xb499,	// (0x0009d1ad) list_single_graphic_popup_conf4_pane_t1

0x174e,	// (0x00093462) popup_vtel_slider_window_ParamLimits

0x174e,	// (0x00093462) popup_vtel_slider_window

0xaff4,	// (0x0009cd08) dialer2_ne_pane_t2_ParamLimits

0xaff4,	// (0x0009cd08) dialer2_ne_pane_t2

0x0001,

0xf822,	// (0x000a1536) dialer2_ne_pane_t_ParamLimits

0xf822,	// (0x000a1536) dialer2_ne_pane_t

0x49a9,	// (0x000966bd) bg_popup_sub_pane_cp010_ParamLimits

0x49a9,	// (0x000966bd) bg_popup_sub_pane_cp010

0x6c01,	// (0x00098915) popup_vtel_slider_window_g1_ParamLimits

0x6c01,	// (0x00098915) popup_vtel_slider_window_g1

0x6c14,	// (0x00098928) popup_vtel_slider_window_g2_ParamLimits

0x6c14,	// (0x00098928) popup_vtel_slider_window_g2

0x0003,

0xf946,	// (0x000a165a) popup_vtel_slider_window_g_ParamLimits

0xf946,	// (0x000a165a) popup_vtel_slider_window_g

0x6c6a,	// (0x0009897e) vtel_slider_pane_ParamLimits

0x6c6a,	// (0x0009897e) vtel_slider_pane

0x6c8c,	// (0x000989a0) vtel_slider_pane_g1_ParamLimits

0x6c8c,	// (0x000989a0) vtel_slider_pane_g1

0x6ca0,	// (0x000989b4) vtel_slider_pane_g2_ParamLimits

0x6ca0,	// (0x000989b4) vtel_slider_pane_g2

0x6cb8,	// (0x000989cc) vtel_slider_pane_g3_ParamLimits

0x6cb8,	// (0x000989cc) vtel_slider_pane_g3

0x6c8c,	// (0x000989a0) vtel_slider_pane_g4_ParamLimits

0x6c8c,	// (0x000989a0) vtel_slider_pane_g4

0x6cce,	// (0x000989e2) vtel_slider_pane_g5_ParamLimits

0x6cce,	// (0x000989e2) vtel_slider_pane_g5

0x0004,

0xf94f,	// (0x000a1663) vtel_slider_pane_g_ParamLimits

0xf94f,	// (0x000a1663) vtel_slider_pane_g

0xa2c9,	// (0x0009bfdd) main_gallery2_pane

0x636a,	// (0x0009807e) aid_size_row_itut2_dropdow_list_ParamLimits

0x636a,	// (0x0009807e) aid_size_row_itut2_dropdow_list

0x63fa,	// (0x0009810e) grid_vitu2_function_top_pane_ParamLimits

0x63fa,	// (0x0009810e) grid_vitu2_function_top_pane

0x645e,	// (0x00098172) popup_vitu2_dropdown_list_window_ParamLimits

0x645e,	// (0x00098172) popup_vitu2_dropdown_list_window

0x6485,	// (0x00098199) popup_vitu2_match_list_window

0x6ce4,	// (0x000989f8) cell_vitu2_function_top_pane_ParamLimits

0x6ce4,	// (0x000989f8) cell_vitu2_function_top_pane

0x6cfe,	// (0x00098a12) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6cfe,	// (0x00098a12) cell_vitu2_function_top_pane_cp01

0x6d1a,	// (0x00098a2e) cell_vitu2_function_top_wide_pane_ParamLimits

0x6d1a,	// (0x00098a2e) cell_vitu2_function_top_wide_pane

0xa2c9,	// (0x0009bfdd) bg_button_pane_cp012

0x6d38,	// (0x00098a4c) cell_vitu2_function_top_pane_g1

0xb4af,	// (0x0009d1c3) bg_button_pane_cp013_ParamLimits

0xb4af,	// (0x0009d1c3) bg_button_pane_cp013

0x6d4c,	// (0x00098a60) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6d4c,	// (0x00098a60) cell_vitu2_function_top_wide_pane_g1

0xa2c9,	// (0x0009bfdd) bg_popup_sub_pane_cp20

0x6d64,	// (0x00098a78) list_vitu2_match_list_pane

0xb260,	// (0x0009cf74) bg_popup_sub_pane_cp20_g1

0xb268,	// (0x0009cf7c) bg_popup_sub_pane_cp20_g2

0xd597,	// (0x0009f2ab) bg_popup_sub_pane_cp20_g3

0xb270,	// (0x0009cf84) bg_popup_sub_pane_cp20_g4

0xd577,	// (0x0009f28b) bg_popup_sub_pane_cp20_g5

0xb4cb,	// (0x0009d1df) bg_popup_sub_pane_cp20_g6

0xb280,	// (0x0009cf94) bg_popup_sub_pane_cp20_g7

0xb288,	// (0x0009cf9c) bg_popup_sub_pane_cp20_g8

0xb290,	// (0x0009cfa4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95a,	// (0x000a166e) bg_popup_sub_pane_cp20_g

0xb4d3,	// (0x0009d1e7) list_vitu2_match_list_item_pane_ParamLimits

0xb4d3,	// (0x0009d1e7) list_vitu2_match_list_item_pane

0xb4e5,	// (0x0009d1f9) list_vitu2_match_list_item_pane_t1

0xa2d7,	// (0x0009bfeb) bg_popup_sub_pane_cp21

0xd34c,	// (0x0009f060) grid_vitu2_dropdown_list_pane

0x6d7c,	// (0x00098a90) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6d7c,	// (0x00098a90) cell_vitu2_dropdown_list_char_pane

0x6d9e,	// (0x00098ab2) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6d9e,	// (0x00098ab2) cell_vitu2_dropdown_list_ctrl_pane

0xb4f3,	// (0x0009d207) cell_vitu2_dropdown_list_char_pane_g1

0xb4fc,	// (0x0009d210) cell_vitu2_dropdown_list_char_pane_g2

0xb505,	// (0x0009d219) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf96d,	// (0x000a1681) cell_vitu2_dropdown_list_char_pane_g

0x6dc8,	// (0x00098adc) cell_vitu2_dropdown_list_char_pane_t1

0x6dd6,	// (0x00098aea) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6dd6,	// (0x00098aea) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6de6,	// (0x00098afa) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6de6,	// (0x00098afa) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6df7,	// (0x00098b0b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6df7,	// (0x00098b0b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6e07,	// (0x00098b1b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6e07,	// (0x00098b1b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb0f4,	// (0x0009ce08) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb0f4,	// (0x0009ce08) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf974,	// (0x000a1688) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf974,	// (0x000a1688) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e23,	// (0x00098b37) aid_size_cell_gallery2_ParamLimits

0x6e23,	// (0x00098b37) aid_size_cell_gallery2

0x6e41,	// (0x00098b55) grid_gallery2_pane_ParamLimits

0x6e41,	// (0x00098b55) grid_gallery2_pane

0x6e5b,	// (0x00098b6f) scroll_pane_cp029_ParamLimits

0x6e5b,	// (0x00098b6f) scroll_pane_cp029

0x6e6c,	// (0x00098b80) cell_gallery2_pane_ParamLimits

0x6e6c,	// (0x00098b80) cell_gallery2_pane

0xb50e,	// (0x0009d222) cell_gallery2_pane_g2

0x6ed0,	// (0x00098be4) cell_gallery2_pane_g3

0xb516,	// (0x0009d22a) cell_gallery2_pane_g4

0xb51e,	// (0x0009d232) cell_gallery2_pane_g5

0xd34c,	// (0x0009f060) grid_highlight_pane_cp10

0x6485,	// (0x00098199) popup_vitu2_match_list_window_ParamLimits

0x649c,	// (0x000981b0) popup_vitu2_query_window_ParamLimits

0x649c,	// (0x000981b0) popup_vitu2_query_window

0xa2d7,	// (0x0009bfeb) bg_vitu2_candi_button_pane

0xb4f3,	// (0x0009d207) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb4fc,	// (0x0009d210) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb505,	// (0x0009d219) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6ed8,	// (0x00098bec) bg_button_pane_cp015

0x6eef,	// (0x00098c03) bg_button_pane_cp016

0x6efb,	// (0x00098c0f) bg_button_pane_cp017

0xe25f,	// (0x0009ff73) bg_popup_sub_pane_cp22

0xb526,	// (0x0009d23a) popup_vitu2_query_window_g1

0x6f3c,	// (0x00098c50) popup_vitu2_query_window_g2

0x0002,

0xf97f,	// (0x000a1693) popup_vitu2_query_window_g

0x6f62,	// (0x00098c76) popup_vitu2_query_window_t1_ParamLimits

0x6f62,	// (0x00098c76) popup_vitu2_query_window_t1

0x6f97,	// (0x00098cab) popup_vitu2_query_window_t2_ParamLimits

0x6f97,	// (0x00098cab) popup_vitu2_query_window_t2

0x6fa9,	// (0x00098cbd) popup_vitu2_query_window_t3_ParamLimits

0x6fa9,	// (0x00098cbd) popup_vitu2_query_window_t3

0x6fd1,	// (0x00098ce5) popup_vitu2_query_window_t4_ParamLimits

0x6fd1,	// (0x00098ce5) popup_vitu2_query_window_t4

0x6fe5,	// (0x00098cf9) popup_vitu2_query_window_t5_ParamLimits

0x6fe5,	// (0x00098cf9) popup_vitu2_query_window_t5

0x0006,

0xf986,	// (0x000a169a) popup_vitu2_query_window_t_ParamLimits

0xf986,	// (0x000a169a) popup_vitu2_query_window_t

0xb366,	// (0x0009d07a) main_cset_text_pane

0x68f8,	// (0x0009860c) aid_area_touch_slider_ParamLimits

0x6914,	// (0x00098628) cset_slider_pane_ParamLimits

0x6937,	// (0x0009864b) main_cset_slider_pane_g1_ParamLimits

0x694c,	// (0x00098660) main_cset_slider_pane_g2_ParamLimits

0xb387,	// (0x0009d09b) main_cset_slider_pane_g3_ParamLimits

0xb387,	// (0x0009d09b) main_cset_slider_pane_g3

0x6961,	// (0x00098675) main_cset_slider_pane_g4_ParamLimits

0x6961,	// (0x00098675) main_cset_slider_pane_g4

0x6970,	// (0x00098684) main_cset_slider_pane_g5_ParamLimits

0x6970,	// (0x00098684) main_cset_slider_pane_g5

0x697e,	// (0x00098692) main_cset_slider_pane_g6_ParamLimits

0x697e,	// (0x00098692) main_cset_slider_pane_g6

0xf8e3,	// (0x000a15f7) main_cset_slider_pane_g_ParamLimits

0xb3b7,	// (0x0009d0cb) main_cset_slider_pane_t1_ParamLimits

0x6a0e,	// (0x00098722) main_cset_slider_pane_t2_ParamLimits

0x6a28,	// (0x0009873c) main_cset_slider_pane_t3_ParamLimits

0x6a42,	// (0x00098756) main_cset_slider_pane_t4_ParamLimits

0x6a5c,	// (0x00098770) main_cset_slider_pane_t5_ParamLimits

0x6a7a,	// (0x0009878e) main_cset_slider_pane_t6_ParamLimits

0x6a91,	// (0x000987a5) main_cset_slider_pane_t7_ParamLimits

0x6abf,	// (0x000987d3) main_cset_slider_pane_t8_ParamLimits

0x6abf,	// (0x000987d3) main_cset_slider_pane_t8

0x6ae7,	// (0x000987fb) main_cset_slider_pane_t9_ParamLimits

0x6ae7,	// (0x000987fb) main_cset_slider_pane_t9

0x6b0f,	// (0x00098823) main_cset_slider_pane_t10_ParamLimits

0x6b0f,	// (0x00098823) main_cset_slider_pane_t10

0x6b37,	// (0x0009884b) main_cset_slider_pane_t11_ParamLimits

0x6b37,	// (0x0009884b) main_cset_slider_pane_t11

0x6b61,	// (0x00098875) main_cset_slider_pane_t12_ParamLimits

0x6b61,	// (0x00098875) main_cset_slider_pane_t12

0x6b7e,	// (0x00098892) main_cset_slider_pane_t13_ParamLimits

0x6b7e,	// (0x00098892) main_cset_slider_pane_t13

0xf908,	// (0x000a161c) main_cset_slider_pane_t_ParamLimits

0xe14c,	// (0x0009fe60) bg_popup_sub_pane_cp011

0xb532,	// (0x0009d246) main_cset_text_pane_g1

0xb53a,	// (0x0009d24e) main_cset_text_pane_t1

0xb548,	// (0x0009d25c) main_cset_text_pane_t2

0xb556,	// (0x0009d26a) main_cset_text_pane_t3

0xb564,	// (0x0009d278) main_cset_text_pane_t4

0xb572,	// (0x0009d286) main_cset_text_pane_t5

0xb580,	// (0x0009d294) main_cset_text_pane_t6

0xb58e,	// (0x0009d2a2) main_cset_text_pane_t7

0x0006,

0xf995,	// (0x000a16a9) main_cset_text_pane_t

0xa2d7,	// (0x0009bfeb) main_cam4_burst_pane

0xa2d7,	// (0x0009bfeb) main_cam5_pane

0x682b,	// (0x0009853f) bg_button_pane_cp019

0x6834,	// (0x00098548) bg_button_pane_cp020

0xb393,	// (0x0009d0a7) main_cset_slider_pane_g7_ParamLimits

0xb393,	// (0x0009d0a7) main_cset_slider_pane_g7

0xb39f,	// (0x0009d0b3) main_cset_slider_pane_g8_ParamLimits

0xb39f,	// (0x0009d0b3) main_cset_slider_pane_g8

0x6992,	// (0x000986a6) main_cset_slider_pane_g9_ParamLimits

0x6992,	// (0x000986a6) main_cset_slider_pane_g9

0x699e,	// (0x000986b2) main_cset_slider_pane_g10_ParamLimits

0x699e,	// (0x000986b2) main_cset_slider_pane_g10

0x69aa,	// (0x000986be) main_cset_slider_pane_g11_ParamLimits

0x69aa,	// (0x000986be) main_cset_slider_pane_g11

0x69b6,	// (0x000986ca) main_cset_slider_pane_g12_ParamLimits

0x69b6,	// (0x000986ca) main_cset_slider_pane_g12

0x69c2,	// (0x000986d6) main_cset_slider_pane_g13_ParamLimits

0x69c2,	// (0x000986d6) main_cset_slider_pane_g13

0x69ce,	// (0x000986e2) main_cset_slider_pane_g14_ParamLimits

0x69ce,	// (0x000986e2) main_cset_slider_pane_g14

0x69da,	// (0x000986ee) main_cset_slider_pane_g15_ParamLimits

0x69da,	// (0x000986ee) main_cset_slider_pane_g15

0xb3df,	// (0x0009d0f3) main_cset_slider_pane_t14_ParamLimits

0xb3df,	// (0x0009d0f3) main_cset_slider_pane_t14

0xb418,	// (0x0009d12c) main_cset_slider_pane_t15_ParamLimits

0xb418,	// (0x0009d12c) main_cset_slider_pane_t15

0x704f,	// (0x00098d63) aid_cam4_burst_size_cell_ParamLimits

0x704f,	// (0x00098d63) aid_cam4_burst_size_cell

0x706f,	// (0x00098d83) grid_cam4_burst_pane_ParamLimits

0x706f,	// (0x00098d83) grid_cam4_burst_pane

0x70a9,	// (0x00098dbd) linegrid_cam4_burst_pane_ParamLimits

0x70a9,	// (0x00098dbd) linegrid_cam4_burst_pane

0xb59c,	// (0x0009d2b0) scroll_pane_cp30_ParamLimits

0xb59c,	// (0x0009d2b0) scroll_pane_cp30

0x70cb,	// (0x00098ddf) cell_cam4_burst_pane_ParamLimits

0x70cb,	// (0x00098ddf) cell_cam4_burst_pane

0xb5a8,	// (0x0009d2bc) linegrid_cam4_burst_pane_g1_ParamLimits

0xb5a8,	// (0x0009d2bc) linegrid_cam4_burst_pane_g1

0x7120,	// (0x00098e34) linegrid_cam4_burst_pane_g2_ParamLimits

0x7120,	// (0x00098e34) linegrid_cam4_burst_pane_g2

0xb5b5,	// (0x0009d2c9) linegrid_cam4_burst_pane_g3_ParamLimits

0xb5b5,	// (0x0009d2c9) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a4,	// (0x000a16b8) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a4,	// (0x000a16b8) linegrid_cam4_burst_pane_g

0x7131,	// (0x00098e45) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7131,	// (0x00098e45) linegrid_cam4_burst_pane_g3_copy1

0xb5c2,	// (0x0009d2d6) linegrid_cam4_burst_pane_g4_ParamLimits

0xb5c2,	// (0x0009d2d6) linegrid_cam4_burst_pane_g4

0x714f,	// (0x00098e63) linegrid_cam4_burst_pane_g5_ParamLimits

0x714f,	// (0x00098e63) linegrid_cam4_burst_pane_g5

0x7160,	// (0x00098e74) linegrid_cam4_burst_pane_g6_ParamLimits

0x7160,	// (0x00098e74) linegrid_cam4_burst_pane_g6

0xb5cf,	// (0x0009d2e3) linegrid_cam4_burst_pane_g7_ParamLimits

0xb5cf,	// (0x0009d2e3) linegrid_cam4_burst_pane_g7

0x7177,	// (0x00098e8b) cell_cam4_burst_pane_g1

0xb5e8,	// (0x0009d2fc) main_cam5_pane_t1_ParamLimits

0xb5e8,	// (0x0009d2fc) main_cam5_pane_t1

0xb5fa,	// (0x0009d30e) main_cam5_pane_t2_ParamLimits

0xb5fa,	// (0x0009d30e) main_cam5_pane_t2

0xb60c,	// (0x0009d320) main_cam5_pane_t3_ParamLimits

0xb60c,	// (0x0009d320) main_cam5_pane_t3

0xb61e,	// (0x0009d332) main_cam5_pane_t4_ParamLimits

0xb61e,	// (0x0009d332) main_cam5_pane_t4

0xb636,	// (0x0009d34a) main_cam5_pane_t5_ParamLimits

0xb636,	// (0x0009d34a) main_cam5_pane_t5

0xb64a,	// (0x0009d35e) main_cam5_pane_t6_ParamLimits

0xb64a,	// (0x0009d35e) main_cam5_pane_t6

0xb65e,	// (0x0009d372) main_cam5_pane_t7_ParamLimits

0xb65e,	// (0x0009d372) main_cam5_pane_t7

0xb670,	// (0x0009d384) main_cam5_pane_t8_ParamLimits

0xb670,	// (0x0009d384) main_cam5_pane_t8

0xb68e,	// (0x0009d3a2) main_cam5_pane_t9_ParamLimits

0xb68e,	// (0x0009d3a2) main_cam5_pane_t9

0xb6a0,	// (0x0009d3b4) main_cam5_pane_t10_ParamLimits

0xb6a0,	// (0x0009d3b4) main_cam5_pane_t10

0xb6b2,	// (0x0009d3c6) main_cam5_pane_t11_ParamLimits

0xb6b2,	// (0x0009d3c6) main_cam5_pane_t11

0xb6c6,	// (0x0009d3da) main_cam5_pane_t12_ParamLimits

0xb6c6,	// (0x0009d3da) main_cam5_pane_t12

0xb6dd,	// (0x0009d3f1) main_cam5_pane_t13_ParamLimits

0xb6dd,	// (0x0009d3f1) main_cam5_pane_t13

0x000c,

0xf9b0,	// (0x000a16c4) main_cam5_pane_t_ParamLimits

0xf9b0,	// (0x000a16c4) main_cam5_pane_t

0x09d6,	// (0x000926ea) popup_scut_keymap_window_ParamLimits

0x09d6,	// (0x000926ea) popup_scut_keymap_window

0x718a,	// (0x00098e9e) aid_size_cell_brow_shortcut

0xd34c,	// (0x0009f060) bg_popup_window_pane_cp010

0x7196,	// (0x00098eaa) grid_scut_pane

0x71a2,	// (0x00098eb6) cell_scut_pane_ParamLimits

0x71a2,	// (0x00098eb6) cell_scut_pane

0x71bb,	// (0x00098ecf) cell_scut_pane_g1

0xb700,	// (0x0009d414) cell_scut_pane_t1

0xb70f,	// (0x0009d423) cell_scut_pane_t2

0x71c4,	// (0x00098ed8) cell_scut_pane_t3

0x0002,

0xf9cb,	// (0x000a16df) cell_scut_pane_t

0x5063,	// (0x00096d77) main_mup3_pane_g8_ParamLimits

0x5063,	// (0x00096d77) main_mup3_pane_g8

0x6384,	// (0x00098098) area_vitu2_query_pane_ParamLimits

0x6384,	// (0x00098098) area_vitu2_query_pane

0x6f07,	// (0x00098c1b) input_focus_pane_cp08

0xb71e,	// (0x0009d432) area_vitu2_query_pane_g1

0x71d2,	// (0x00098ee6) area_vitu2_query_pane_g2

0x0001,

0xf9d2,	// (0x000a16e6) area_vitu2_query_pane_g

0x71e7,	// (0x00098efb) area_vitu2_query_pane_t1_ParamLimits

0x71e7,	// (0x00098efb) area_vitu2_query_pane_t1

0x71fb,	// (0x00098f0f) area_vitu2_query_pane_t2_ParamLimits

0x71fb,	// (0x00098f0f) area_vitu2_query_pane_t2

0x720f,	// (0x00098f23) area_vitu2_query_pane_t3_ParamLimits

0x720f,	// (0x00098f23) area_vitu2_query_pane_t3

0xb72a,	// (0x0009d43e) area_vitu2_query_pane_t4_ParamLimits

0xb72a,	// (0x0009d43e) area_vitu2_query_pane_t4

0xb752,	// (0x0009d466) area_vitu2_query_pane_t5_ParamLimits

0xb752,	// (0x0009d466) area_vitu2_query_pane_t5

0xb77a,	// (0x0009d48e) area_vitu2_query_pane_t6_ParamLimits

0xb77a,	// (0x0009d48e) area_vitu2_query_pane_t6

0x0006,

0xf9d7,	// (0x000a16eb) area_vitu2_query_pane_t_ParamLimits

0xf9d7,	// (0x000a16eb) area_vitu2_query_pane_t

0x723b,	// (0x00098f4f) bg_button_pane_cp018

0x7247,	// (0x00098f5b) bg_button_pane_cp021

0x7253,	// (0x00098f67) bg_button_pane_cp022

0x727e,	// (0x00098f92) input_focus_pane_cp09

0x2a5a,	// (0x0009476e) aid_size_touch_mv_arrow_left

0x2a83,	// (0x00094797) aid_size_touch_mv_arrow_right

0x69f2,	// (0x00098706) main_cset_slider_pane_g16_ParamLimits

0x69f2,	// (0x00098706) main_cset_slider_pane_g16

0x6a00,	// (0x00098714) main_cset_slider_pane_g17_ParamLimits

0x6a00,	// (0x00098714) main_cset_slider_pane_g17

0x7177,	// (0x00098e8b) cell_cam4_burst_pane_g1_ParamLimits

0xe14c,	// (0x0009fe60) compa_mode_pane

0x6c24,	// (0x00098938) popup_vtel_slider_window_g3_ParamLimits

0x6c24,	// (0x00098938) popup_vtel_slider_window_g3

0x6c3b,	// (0x0009894f) popup_vtel_slider_window_g4_ParamLimits

0x6c3b,	// (0x0009894f) popup_vtel_slider_window_g4

0x6c52,	// (0x00098966) popup_vtel_slider_window_t1_ParamLimits

0x6c52,	// (0x00098966) popup_vtel_slider_window_t1

0xa2d7,	// (0x0009bfeb) main_cl_pane

0xa488,	// (0x0009c19c) popup_imed_adjust2_window_ParamLimits

0xe25f,	// (0x0009ff73) bg_tb_trans_pane_cp05_ParamLimits

0xaa2f,	// (0x0009c743) popup_imed_adjust2_window_g1_ParamLimits

0xaa3e,	// (0x0009c752) popup_imed_adjust2_window_g2_ParamLimits

0xaa3e,	// (0x0009c752) popup_imed_adjust2_window_g2

0xaa4a,	// (0x0009c75e) popup_imed_adjust2_window_g3_ParamLimits

0xaa4a,	// (0x0009c75e) popup_imed_adjust2_window_g3

0x0002,

0xf74d,	// (0x000a1461) popup_imed_adjust2_window_g_ParamLimits

0xf74d,	// (0x000a1461) popup_imed_adjust2_window_g

0xaa56,	// (0x0009c76a) popup_imed_adjust2_window_t1_ParamLimits

0xaa6e,	// (0x0009c782) slider_imed_adjust_pane_ParamLimits

0xaa82,	// (0x0009c796) slider_imed_adjust_pane_g1_ParamLimits

0xaa92,	// (0x0009c7a6) slider_imed_adjust_pane_g2_ParamLimits

0xaaa2,	// (0x0009c7b6) slider_imed_adjust_pane_g3_ParamLimits

0xaab3,	// (0x0009c7c7) slider_imed_adjust_pane_g4_ParamLimits

0xf754,	// (0x000a1468) slider_imed_adjust_pane_g_ParamLimits

0x6104,	// (0x00097e18) aid_touch_area_cam4_ParamLimits

0x6104,	// (0x00097e18) aid_touch_area_cam4

0xb0c2,	// (0x0009cdd6) battery_pane_cp01

0x61d7,	// (0x00097eeb) main_camera4_pane_g6_ParamLimits

0x61d7,	// (0x00097eeb) main_camera4_pane_g6

0x6201,	// (0x00097f15) main_camera4_pane_t2_ParamLimits

0x6201,	// (0x00097f15) main_camera4_pane_t2

0x0001,

0xf856,	// (0x000a156a) main_camera4_pane_t_ParamLimits

0xf856,	// (0x000a156a) main_camera4_pane_t

0x6236,	// (0x00097f4a) aid_touch_area_vid4_ParamLimits

0x6236,	// (0x00097f4a) aid_touch_area_vid4

0x628d,	// (0x00097fa1) main_video4_pane_g5_ParamLimits

0x628d,	// (0x00097fa1) main_video4_pane_g5

0x62b3,	// (0x00097fc7) vid4_progress_pane_ParamLimits

0x62b3,	// (0x00097fc7) vid4_progress_pane

0xb3ab,	// (0x0009d0bf) main_cset_slider_pane_g18_ParamLimits

0xb3ab,	// (0x0009d0bf) main_cset_slider_pane_g18

0xb5dc,	// (0x0009d2f0) cell_cam4_burst_pane_g2_ParamLimits

0xb5dc,	// (0x0009d2f0) cell_cam4_burst_pane_g2

0x0001,

0xf9ab,	// (0x000a16bf) cell_cam4_burst_pane_g_ParamLimits

0xf9ab,	// (0x000a16bf) cell_cam4_burst_pane_g

0xef71,	// (0x000a0c85) bg_cl_pane_ParamLimits

0xef71,	// (0x000a0c85) bg_cl_pane

0x728f,	// (0x00098fa3) cl_header_pane_ParamLimits

0x728f,	// (0x00098fa3) cl_header_pane

0x72a3,	// (0x00098fb7) cl_listscroll_pane_ParamLimits

0x72a3,	// (0x00098fb7) cl_listscroll_pane

0xb7c6,	// (0x0009d4da) bg_cl_pane_g1

0xb7ce,	// (0x0009d4e2) bg_cl_pane_g2

0xb7d6,	// (0x0009d4ea) bg_cl_pane_g3

0xb7de,	// (0x0009d4f2) bg_cl_pane_g4

0xb7e6,	// (0x0009d4fa) bg_cl_pane_g5

0xb7ee,	// (0x0009d502) bg_cl_pane_g6

0xb7f6,	// (0x0009d50a) bg_cl_pane_g7

0xb7fe,	// (0x0009d512) bg_cl_pane_g8

0xb806,	// (0x0009d51a) bg_cl_pane_g9

0x0008,

0xf9e6,	// (0x000a16fa) bg_cl_pane_g

0x72b3,	// (0x00098fc7) aid_height_cl_leading_ParamLimits

0x72b3,	// (0x00098fc7) aid_height_cl_leading

0x72bf,	// (0x00098fd3) aid_height_cl_text_ParamLimits

0x72bf,	// (0x00098fd3) aid_height_cl_text

0xe217,	// (0x0009ff2b) bg_cl_header_pane_ParamLimits

0xe217,	// (0x0009ff2b) bg_cl_header_pane

0x72de,	// (0x00098ff2) cl_header_pane_g1_ParamLimits

0x72de,	// (0x00098ff2) cl_header_pane_g1

0x72f4,	// (0x00099008) cl_header_pane_t1_ParamLimits

0x72f4,	// (0x00099008) cl_header_pane_t1

0xb80e,	// (0x0009d522) cl_list_pane

0xb37e,	// (0x0009d092) hc_scroll_pane_cp01

0xd577,	// (0x0009f28b) bg_cl_header_pane_g1

0xb260,	// (0x0009cf74) bg_cl_header_pane_g2

0xd597,	// (0x0009f2ab) bg_cl_header_pane_g3

0xb270,	// (0x0009cf84) bg_cl_header_pane_g4

0xb268,	// (0x0009cf7c) bg_cl_header_pane_g5

0xb4cb,	// (0x0009d1df) bg_cl_header_pane_g6

0xb288,	// (0x0009cf9c) bg_cl_header_pane_g7

0xb290,	// (0x0009cfa4) bg_cl_header_pane_g8

0xb280,	// (0x0009cf94) bg_cl_header_pane_g9

0x0008,

0xf9f9,	// (0x000a170d) bg_cl_header_pane_g

0x730d,	// (0x00099021) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x730d,	// (0x00099021) hc_cl_list_double_graphic_heading_pane

0x7320,	// (0x00099034) hc_cl_list_single_graphic_pane_ParamLimits

0x7320,	// (0x00099034) hc_cl_list_single_graphic_pane

0x7338,	// (0x0009904c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7338,	// (0x0009904c) hc_cl_list_single_graphic_pane_g1

0x7344,	// (0x00099058) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7344,	// (0x00099058) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa0c,	// (0x000a1720) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa0c,	// (0x000a1720) hc_cl_list_single_graphic_pane_g

0x7358,	// (0x0009906c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7358,	// (0x0009906c) hc_cl_list_single_graphic_pane_t1

0x7338,	// (0x0009904c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7338,	// (0x0009904c) hc_cl_list_double_graphic_heading_pane_g1

0x736d,	// (0x00099081) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x736d,	// (0x00099081) hc_cl_list_double_graphic_heading_pane_g2

0x7381,	// (0x00099095) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7381,	// (0x00099095) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa11,	// (0x000a1725) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa11,	// (0x000a1725) hc_cl_list_double_graphic_heading_pane_g

0x7395,	// (0x000990a9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7395,	// (0x000990a9) hc_cl_list_double_graphic_heading_pane_t1

0x73aa,	// (0x000990be) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73aa,	// (0x000990be) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa18,	// (0x000a172c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa18,	// (0x000a172c) hc_cl_list_double_graphic_heading_pane_t

0xb81f,	// (0x0009d533) vid4_progress_pane_g1

0xb82f,	// (0x0009d543) vid4_progress_pane_g2

0x73bf,	// (0x000990d3) vid4_progress_pane_g3

0xb83f,	// (0x0009d553) vid4_progress_pane_g4

0x0004,

0xfa1d,	// (0x000a1731) vid4_progress_pane_g

0x73d1,	// (0x000990e5) vid4_progress_pane_t1

0xb85d,	// (0x0009d571) vid4_progress_pane_t2

0x0002,

0xfa28,	// (0x000a173c) vid4_progress_pane_t

0x73eb,	// (0x000990ff) wait_bar_pane_cp07

0x49b7,	// (0x000966cb) blid_firmament_pane_ParamLimits

0x49fa,	// (0x0009670e) popup_blid_sat_info2_window_g1

0x4a1e,	// (0x00096732) popup_blid_sat_info2_window_t3

0x4a2c,	// (0x00096740) popup_blid_sat_info2_window_t4

0x4a3a,	// (0x0009674e) popup_blid_sat_info2_window_t5

0x4a48,	// (0x0009675c) popup_blid_sat_info2_window_t6

0x4a58,	// (0x0009676c) popup_blid_sat_info2_window_t7

0x4a66,	// (0x0009677a) popup_blid_sat_info2_window_t8

0x4a74,	// (0x00096788) popup_blid_sat_info2_window_t9

0x4a82,	// (0x00096796) popup_blid_sat_info2_window_t10

0x4b49,	// (0x0009685d) aid_firma_cardinal_ParamLimits

0x4b5d,	// (0x00096871) blid_firmament_pane_t1_ParamLimits

0x4b74,	// (0x00096888) blid_firmament_pane_t2_ParamLimits

0x4b8b,	// (0x0009689f) blid_firmament_pane_t3_ParamLimits

0x4ba2,	// (0x000968b6) blid_firmament_pane_t4_ParamLimits

0xf646,	// (0x000a135a) blid_firmament_pane_t_ParamLimits

0xa57a,	// (0x0009c28e) blid_sat_info_pane_ParamLimits

0xa2c9,	// (0x0009bfdd) main_cam_set_pane_ParamLimits

0x586c,	// (0x00097580) aid_size_cell_colour_35_ParamLimits

0x588c,	// (0x000975a0) aid_size_cell_colour_112_ParamLimits

0x58ac,	// (0x000975c0) aid_size_cell_effect_ParamLimits

0xe25f,	// (0x0009ff73) bg_tb_trans_pane_cp02_ParamLimits

0xd808,	// (0x0009f51c) heading_imed_pane_ParamLimits

0x58cc,	// (0x000975e0) listscroll_imed_pane_ParamLimits

0xe83a,	// (0x000a054e) popup_call2_audio_first_window_g5_ParamLimits

0xe83a,	// (0x000a054e) popup_call2_audio_first_window_g5

0x5d15,	// (0x00097a29) aid_size_touch_image3_arrow_left_ParamLimits

0x5d15,	// (0x00097a29) aid_size_touch_image3_arrow_left

0x5d41,	// (0x00097a55) aid_size_touch_image3_arrow_right_ParamLimits

0x5d41,	// (0x00097a55) aid_size_touch_image3_arrow_right

0xb873,	// (0x0009d587) vid4_progress_pane_t3

0x5a71,	// (0x00097785) main_hwr_training_symbol_option_pane_ParamLimits

0x5a71,	// (0x00097785) main_hwr_training_symbol_option_pane

0xac74,	// (0x0009c988) popup_hwr_training_preview_window_ParamLimits

0xac74,	// (0x0009c988) popup_hwr_training_preview_window

0x5a91,	// (0x000977a5) hwr_training_navi_pane_g5_ParamLimits

0x5a91,	// (0x000977a5) hwr_training_navi_pane_g5

0xb24e,	// (0x0009cf62) popup_char_count_window

0xa2c9,	// (0x0009bfdd) bg_popup_sub_pane_cp20_ParamLimits

0x6d64,	// (0x00098a78) list_vitu2_match_list_pane_ParamLimits

0x6d70,	// (0x00098a84) vitu2_page_scroll_pane_ParamLimits

0x6d70,	// (0x00098a84) vitu2_page_scroll_pane

0xb8aa,	// (0x0009d5be) list_single_hwr_training_symbol_option_pane_ParamLimits

0xb8aa,	// (0x0009d5be) list_single_hwr_training_symbol_option_pane

0xb8bd,	// (0x0009d5d1) list_single_hwr_training_symbol_option_pane_g1

0xb8c5,	// (0x0009d5d9) list_single_hwr_training_symbol_option_pane_t1

0xb8d3,	// (0x0009d5e7) bg_button_pane_cp023

0xb8dc,	// (0x0009d5f0) bg_button_pane_cp024

0xb90f,	// (0x0009d623) vitu2_page_scroll_pane_g1

0xb917,	// (0x0009d62b) vitu2_page_scroll_pane_g2

0x0001,

0xfa2f,	// (0x000a1743) vitu2_page_scroll_pane_g

0xb91f,	// (0x0009d633) vitu2_page_scroll_pane_t1

0xb92e,	// (0x0009d642) popup_char_count_window_g1

0xb937,	// (0x0009d64b) popup_char_count_window_g2

0xb940,	// (0x0009d654) popup_char_count_window_g3

0x0002,

0xfa34,	// (0x000a1748) popup_char_count_window_g

0xb949,	// (0x0009d65d) popup_char_count_window_t1

0xa2d7,	// (0x0009bfeb) main_vded2_pane

0xaa1b,	// (0x0009c72f) aid_size_cell_imed_line

0xaa25,	// (0x0009c739) grid_imed_line_width_pane

0xb19e,	// (0x0009ceb2) vid4_indicators_pane_g4

0xb957,	// (0x0009d66b) cell_imed_line_width_pane_ParamLimits

0xb957,	// (0x0009d66b) cell_imed_line_width_pane

0xb96d,	// (0x0009d681) cell_imed_line_width_pane_g1

0xb976,	// (0x0009d68a) cell_imed_line_width_pane_g2

0x0001,

0xfa3b,	// (0x000a174f) cell_imed_line_width_pane_g

0x7412,	// (0x00099126) main_vded2_pane_g1_ParamLimits

0x7412,	// (0x00099126) main_vded2_pane_g1

0x742d,	// (0x00099141) main_vded2_pane_g2_ParamLimits

0x742d,	// (0x00099141) main_vded2_pane_g2

0x0001,

0xfa40,	// (0x000a1754) main_vded2_pane_g_ParamLimits

0xfa40,	// (0x000a1754) main_vded2_pane_g

0x743f,	// (0x00099153) vded2_slider_pane_ParamLimits

0x743f,	// (0x00099153) vded2_slider_pane

0x744f,	// (0x00099163) aid_size_touch_vded2_end

0x7459,	// (0x0009916d) aid_size_touch_vded2_playhead

0xb97e,	// (0x0009d692) aid_size_touch_vded2_start

0xb986,	// (0x0009d69a) vded2_slider_bg_pane

0xb98f,	// (0x0009d6a3) vded2_slider_pane_g1

0xb998,	// (0x0009d6ac) vded2_slider_pane_g2

0x7463,	// (0x00099177) vded2_slider_pane_g3

0x0002,

0xfa45,	// (0x000a1759) vded2_slider_pane_g

0xb9a0,	// (0x0009d6b4) vded2_slider_bg_pane_g1

0xb9a9,	// (0x0009d6bd) vded2_slider_bg_pane_g2

0xb9b2,	// (0x0009d6c6) vded2_slider_bg_pane_g3

0x0002,

0xfa4c,	// (0x000a1760) vded2_slider_bg_pane_g

0x2f6c,	// (0x00094c80) aid_postcard_touch_down_pane_ParamLimits

0x2f6c,	// (0x00094c80) aid_postcard_touch_down_pane

0x2f84,	// (0x00094c98) aid_postcard_touch_up_pane_ParamLimits

0x2f84,	// (0x00094c98) aid_postcard_touch_up_pane

0xa2d7,	// (0x0009bfeb) main_blid2_pane

0xa46a,	// (0x0009c17e) popup_blid2_search_window

0xe14c,	// (0x0009fe60) blid2_gps_pane

0xe14c,	// (0x0009fe60) blid2_navig_pane

0xe14c,	// (0x0009fe60) blid2_search_pane

0xe14c,	// (0x0009fe60) blid2_tripm_pane

0x746e,	// (0x00099182) blid2_search_pane_g1_ParamLimits

0x746e,	// (0x00099182) blid2_search_pane_g1

0x7481,	// (0x00099195) blid2_search_pane_t1_ParamLimits

0x7481,	// (0x00099195) blid2_search_pane_t1

0x7493,	// (0x000991a7) aid_size_cell_blid2_gps_ParamLimits

0x7493,	// (0x000991a7) aid_size_cell_blid2_gps

0x74ab,	// (0x000991bf) blid2_gps_pane_g1_ParamLimits

0x74ab,	// (0x000991bf) blid2_gps_pane_g1

0x74bf,	// (0x000991d3) grid_blid2_satellite_pane_ParamLimits

0x74bf,	// (0x000991d3) grid_blid2_satellite_pane

0x74d7,	// (0x000991eb) blid2_navig_pane_g1_ParamLimits

0x74d7,	// (0x000991eb) blid2_navig_pane_g1

0x74e3,	// (0x000991f7) blid2_navig_pane_t1_ParamLimits

0x74e3,	// (0x000991f7) blid2_navig_pane_t1

0x74fe,	// (0x00099212) blid2_navig_pane_t2_ParamLimits

0x74fe,	// (0x00099212) blid2_navig_pane_t2

0x0001,

0xfa53,	// (0x000a1767) blid2_navig_pane_t_ParamLimits

0xfa53,	// (0x000a1767) blid2_navig_pane_t

0x7519,	// (0x0009922d) blid2_navig_ring_pane_ParamLimits

0x7519,	// (0x0009922d) blid2_navig_ring_pane

0x7534,	// (0x00099248) blid2_speed_pane_ParamLimits

0x7534,	// (0x00099248) blid2_speed_pane

0x7540,	// (0x00099254) blid2_tripm_pane_g1_ParamLimits

0x7540,	// (0x00099254) blid2_tripm_pane_g1

0x755b,	// (0x0009926f) blid2_tripm_pane_g2_ParamLimits

0x755b,	// (0x0009926f) blid2_tripm_pane_g2

0x756f,	// (0x00099283) blid2_tripm_pane_g3_ParamLimits

0x756f,	// (0x00099283) blid2_tripm_pane_g3

0x7583,	// (0x00099297) blid2_tripm_pane_g4_ParamLimits

0x7583,	// (0x00099297) blid2_tripm_pane_g4

0x7597,	// (0x000992ab) blid2_tripm_pane_g5_ParamLimits

0x7597,	// (0x000992ab) blid2_tripm_pane_g5

0x0005,

0xfa58,	// (0x000a176c) blid2_tripm_pane_g_ParamLimits

0xfa58,	// (0x000a176c) blid2_tripm_pane_g

0x75bd,	// (0x000992d1) blid2_tripm_pane_t1_ParamLimits

0x75bd,	// (0x000992d1) blid2_tripm_pane_t1

0x75d6,	// (0x000992ea) blid2_tripm_pane_t2_ParamLimits

0x75d6,	// (0x000992ea) blid2_tripm_pane_t2

0x75ef,	// (0x00099303) blid2_tripm_pane_t3_ParamLimits

0x75ef,	// (0x00099303) blid2_tripm_pane_t3

0x0003,

0xfa65,	// (0x000a1779) blid2_tripm_pane_t_ParamLimits

0xfa65,	// (0x000a1779) blid2_tripm_pane_t

0x7636,	// (0x0009934a) cell_blid2_satellite_pane_ParamLimits

0x7636,	// (0x0009934a) cell_blid2_satellite_pane

0x7652,	// (0x00099366) cell_blid2_satellite_pane_g1

0xb9bb,	// (0x0009d6cf) cell_blid2_satellite_pane_t1

0xd382,	// (0x0009f096) blid2_speed_pane_g1

0xb9c9,	// (0x0009d6dd) blid2_speed_pane_t1

0xb9d7,	// (0x0009d6eb) blid2_speed_pane_t2

0x0001,

0xfa6e,	// (0x000a1782) blid2_speed_pane_t

0xd382,	// (0x0009f096) blid2_navig_ring_pane_g1

0x765b,	// (0x0009936f) blid2_navig_ring_pane_g2

0x7663,	// (0x00099377) blid2_navig_ring_pane_g3

0x766b,	// (0x0009937f) blid2_navig_ring_pane_g4

0x7673,	// (0x00099387) blid2_navig_ring_pane_g5

0x0004,

0xfa73,	// (0x000a1787) blid2_navig_ring_pane_g

0xe14c,	// (0x0009fe60) bg_popup_window_pane_cp011

0xb9e5,	// (0x0009d6f9) popup_blid2_search_window_g1

0xb9ed,	// (0x0009d701) popup_blid2_search_window_t1

0xb9fb,	// (0x0009d70f) popup_blid2_search_window_t2

0x0001,

0xfa7e,	// (0x000a1792) popup_blid2_search_window_t

0xd486,	// (0x0009f19a) main_browser_pane_g1

0xef71,	// (0x000a0c85) main_browser_pane_ParamLimits

0xa2c9,	// (0x0009bfdd) bg_button_pane_cp011_ParamLimits

0x65b7,	// (0x000982cb) cell_vitu2_function_pane_g1_ParamLimits

0xe25f,	// (0x0009ff73) bg_popup_sub_pane_cp22_ParamLimits

0x6f07,	// (0x00098c1b) input_focus_pane_cp08_ParamLimits

0x6f23,	// (0x00098c37) popup_vitu2_query_button_pane_ParamLimits

0x6f23,	// (0x00098c37) popup_vitu2_query_button_pane

0x6f32,	// (0x00098c46) popup_vitu2_query_input_button_pane

0xb526,	// (0x0009d23a) popup_vitu2_query_window_g1_ParamLimits

0x6f3c,	// (0x00098c50) popup_vitu2_query_window_g2_ParamLimits

0xf97f,	// (0x000a1693) popup_vitu2_query_window_g_ParamLimits

0xe14c,	// (0x0009fe60) bg_button_pane_cp026

0x767b,	// (0x0009938f) popup_vitu2_query_input_button_pane_g1

0xe14c,	// (0x0009fe60) bg_button_pane_cp025

0xba09,	// (0x0009d71d) popup_vitu2_query_button_pane_t1

0x4c53,	// (0x00096967) main_mp3_pane_t6

0x4c61,	// (0x00096975) popup_slider_window_cp01

0xb102,	// (0x0009ce16) cam4_battery_pane

0xb157,	// (0x0009ce6b) cam4_battery_pane_cp02

0xb817,	// (0x0009d52b) cam4_battery_pane_cp01

0xb817,	// (0x0009d52b) cam4_battery_pane_cp03

0xa570,	// (0x0009c284) cam4_battery_pane_g1

0xd382,	// (0x0009f096) cam4_battery_pane_g2

0x0001,

0xfa83,	// (0x000a1797) cam4_battery_pane_g

0x4a90,	// (0x000967a4) popup_blid_sat_info2_window_t11

0x2a5a,	// (0x0009476e) aid_size_touch_mv_arrow_left_ParamLimits

0x2a83,	// (0x00094797) aid_size_touch_mv_arrow_right_ParamLimits

0xdc4f,	// (0x0009f963) navi_pane_g1_ParamLimits

0x2ac2,	// (0x000947d6) navi_pane_g2_ParamLimits

0x2af0,	// (0x00094804) navi_pane_g3_ParamLimits

0xf35a,	// (0x000a106e) navi_pane_g_ParamLimits

0x2b4a,	// (0x0009485e) navi_pane_mv_t1_ParamLimits

0x58d8,	// (0x000975ec) grid_imed_effect_pane_ParamLimits

0x1656,	// (0x0009336a) aid_placing_vt_slider_lsc

0xd3d1,	// (0x0009f0e5) aid_placing_vt_slider_prt

0xe217,	// (0x0009ff2b) bg_tb_trans_pane_cp01_ParamLimits

0xa6b9,	// (0x0009c3cd) popup_image_details_window_g1_ParamLimits

0xa6cc,	// (0x0009c3e0) popup_image_details_window_g2_ParamLimits

0xa6e1,	// (0x0009c3f5) popup_image_details_window_g3_ParamLimits

0xa6e1,	// (0x0009c3f5) popup_image_details_window_g3

0xf686,	// (0x000a139a) popup_image_details_window_g_ParamLimits

0xa6f5,	// (0x0009c409) popup_image_details_window_t1_ParamLimits

0xa707,	// (0x0009c41b) popup_image_details_window_t2_ParamLimits

0xa720,	// (0x0009c434) popup_image_details_window_t3_ParamLimits

0xa734,	// (0x0009c448) popup_image_details_window_t4_ParamLimits

0xa74f,	// (0x0009c463) popup_image_details_window_t5_ParamLimits

0xf68d,	// (0x000a13a1) popup_image_details_window_t_ParamLimits

0x72cb,	// (0x00098fdf) cl_header_name_pane_ParamLimits

0x72cb,	// (0x00098fdf) cl_header_name_pane

0x7683,	// (0x00099397) cl_header_name_pane_t1_ParamLimits

0x7683,	// (0x00099397) cl_header_name_pane_t1

0x76a4,	// (0x000993b8) cl_header_name_pane_t2_ParamLimits

0x76a4,	// (0x000993b8) cl_header_name_pane_t2

0x76e6,	// (0x000993fa) cl_header_name_pane_t3_ParamLimits

0x76e6,	// (0x000993fa) cl_header_name_pane_t3

0x0002,

0xfa88,	// (0x000a179c) cl_header_name_pane_t_ParamLimits

0xfa88,	// (0x000a179c) cl_header_name_pane_t

0x2b1b,	// (0x0009482f) navi_pane_mv_g2_ParamLimits

0xb1ea,	// (0x0009cefe) field_vitu2_entry_pane_g1_ParamLimits

0xb1f6,	// (0x0009cf0a) field_vitu2_entry_pane_g2_ParamLimits

0xe23d,	// (0x0009ff51) field_vitu2_entry_pane_g3_ParamLimits

0xe23d,	// (0x0009ff51) field_vitu2_entry_pane_g3

0xf888,	// (0x000a159c) field_vitu2_entry_pane_g_ParamLimits

0x6533,	// (0x00098247) cell_vitu2_itu_pane_g1_ParamLimits

0x654b,	// (0x0009825f) cell_vitu2_itu_pane_g2_ParamLimits

0x654b,	// (0x0009825f) cell_vitu2_itu_pane_g2

0x0001,

0xf894,	// (0x000a15a8) cell_vitu2_itu_pane_g_ParamLimits

0xf894,	// (0x000a15a8) cell_vitu2_itu_pane_g

0xa2c9,	// (0x0009bfdd) bg_vkb2_func_pane_cp05_ParamLimits

0xa2c9,	// (0x0009bfdd) bg_vkb2_func_pane_cp05

0xa2c9,	// (0x0009bfdd) bg_vkb2_func_pane_cp03

0xa2c9,	// (0x0009bfdd) bg_vkb2_func_pane_cp04

0xa2c9,	// (0x0009bfdd) bg_vkb2_func_pane_cp10_ParamLimits

0xa2c9,	// (0x0009bfdd) bg_vkb2_func_pane_cp10

0x7268,	// (0x00098f7c) bg_vkb2_func_pane_cp08

0x723b,	// (0x00098f4f) bg_vkb2_func_pane_cp06

0x7247,	// (0x00098f5b) bg_vkb2_func_pane_cp07

0xb8e5,	// (0x0009d5f9) bg_vkb2_func_pane_cp11_ParamLimits

0xb8e5,	// (0x0009d5f9) bg_vkb2_func_pane_cp11

0xb8fa,	// (0x0009d60e) bg_vkb2_func_pane_cp12_ParamLimits

0xb8fa,	// (0x0009d60e) bg_vkb2_func_pane_cp12

0xe14c,	// (0x0009fe60) bg_vkb2_func_pane_cp09

0xb260,	// (0x0009cf74) bg_vkb2_func_pane_g1

0xd597,	// (0x0009f2ab) bg_vkb2_func_pane_g2

0xb268,	// (0x0009cf7c) bg_vkb2_func_pane_g3

0xb270,	// (0x0009cf84) bg_vkb2_func_pane_g4

0xb4cb,	// (0x0009d1df) bg_vkb2_func_pane_g5

0xb288,	// (0x0009cf9c) bg_vkb2_func_pane_g6

0xb290,	// (0x0009cfa4) bg_vkb2_func_pane_g7

0xb280,	// (0x0009cf94) bg_vkb2_func_pane_g8

0xd577,	// (0x0009f28b) bg_vkb2_func_pane_g9

0x0008,

0xfa8f,	// (0x000a17a3) bg_vkb2_func_pane_g

0x75ab,	// (0x000992bf) blid2_tripm_pane_g6_ParamLimits

0x75ab,	// (0x000992bf) blid2_tripm_pane_g6

0xafa7,	// (0x0009ccbb) mp4_progress_pane_g1

0x7622,	// (0x00099336) blid2_tripm_values_pane_ParamLimits

0x7622,	// (0x00099336) blid2_tripm_values_pane

0x7717,	// (0x0009942b) blid2_tripm_values_pane_t1

0x7725,	// (0x00099439) blid2_tripm_values_pane_t2

0x7733,	// (0x00099447) blid2_tripm_values_pane_t3

0x7741,	// (0x00099455) blid2_tripm_values_pane_t4

0x774f,	// (0x00099463) blid2_tripm_values_pane_t5

0x775d,	// (0x00099471) blid2_tripm_values_pane_t6

0x776b,	// (0x0009947f) blid2_tripm_values_pane_t7

0x7779,	// (0x0009948d) blid2_tripm_values_pane_t8

0x7787,	// (0x0009949b) blid2_tripm_values_pane_t9

0x0008,

0xfaa2,	// (0x000a17b6) blid2_tripm_values_pane_t

0x1693,	// (0x000933a7) call_video_pane_t1_ParamLimits

0x16ad,	// (0x000933c1) call_video_pane_t2_ParamLimits

0xf208,	// (0x000a0f1c) call_video_pane_t_ParamLimits

0x2e68,	// (0x00094b7c) msg_header_pane_g1_ParamLimits

0xde4f,	// (0x0009fb63) msg_header_pane_g2_ParamLimits

0xde4f,	// (0x0009fb63) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x000a1111) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x000a1111) msg_header_pane_g

0xef71,	// (0x000a0c85) main_clock2_pane_ParamLimits

0x55d5,	// (0x000972e9) grid_clock2_toolbar_pane_ParamLimits

0x55d5,	// (0x000972e9) grid_clock2_toolbar_pane

0x55d5,	// (0x000972e9) listscroll_clock2_pane_ParamLimits

0x55d5,	// (0x000972e9) listscroll_clock2_pane

0x56b4,	// (0x000973c8) main_clock2_pane_t3_ParamLimits

0x56b4,	// (0x000973c8) main_clock2_pane_t3

0x56d7,	// (0x000973eb) main_clock2_pane_t4_ParamLimits

0x56d7,	// (0x000973eb) main_clock2_pane_t4

0xba17,	// (0x0009d72b) cell_clock2_toolbar_pane

0xba1f,	// (0x0009d733) cell_clock2_toolbar_pane_cp01

0xba1f,	// (0x0009d733) cell_clock2_toolbar_pane_cp02

0xba27,	// (0x0009d73b) cell_clock2_toolbar_pane_cp03

0xba2f,	// (0x0009d743) list_clock2_pane

0xdbb5,	// (0x0009f8c9) scroll_pane_cp10

0xba37,	// (0x0009d74b) list_single_clock2_pane_ParamLimits

0xba37,	// (0x0009d74b) list_single_clock2_pane

0xd34c,	// (0x0009f060) list_highlight_pane_cp08

0xba44,	// (0x0009d758) list_single_clock2_pane_t1

0xba52,	// (0x0009d766) list_single_clock2_pane_t2

0x0001,

0xfab5,	// (0x000a17c9) list_single_clock2_pane_t

0xe14c,	// (0x0009fe60) bg_button_pane_cp10

0xba60,	// (0x0009d774) cell_clock2_toolbar_pane_g1

0x2ef8,	// (0x00094c0c) aid_main_viewer_pane_g1_ParamLimits

0x2ef8,	// (0x00094c0c) aid_main_viewer_pane_g1

0x2f06,	// (0x00094c1a) aid_main_viewer_pane_g2_ParamLimits

0x2f06,	// (0x00094c1a) aid_main_viewer_pane_g2

0x2f14,	// (0x00094c28) aid_main_viewer_pane_g3_ParamLimits

0x2f14,	// (0x00094c28) aid_main_viewer_pane_g3

0x2f23,	// (0x00094c37) aid_main_viewer_pane_g4_ParamLimits

0x2f23,	// (0x00094c37) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x000a1122) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x000a1122) aid_main_viewer_pane_g

0x4146,	// (0x00095e5a) main_calc_pane_ParamLimits

0x4176,	// (0x00095e8a) main_dialer2_pane_ParamLimits

0xa2d7,	// (0x0009bfeb) main_cam6_pane

0xa2d7,	// (0x0009bfeb) main_vid6_pane

0x55e1,	// (0x000972f5) listscroll_gen_pane_cp06_ParamLimits

0x55e1,	// (0x000972f5) listscroll_gen_pane_cp06

0x56fa,	// (0x0009740e) main_clock2_pane_t5_ParamLimits

0x56fa,	// (0x0009740e) main_clock2_pane_t5

0x5758,	// (0x0009746c) aid_call2_pane_cp10_ParamLimits

0x576a,	// (0x0009747e) aid_call_pane_cp10_ParamLimits

0xdc24,	// (0x0009f938) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdc24,	// (0x0009f938) popup_clock_analogue_window_cp10_g2_ParamLimits

0x577c,	// (0x00097490) popup_clock_analogue_window_cp10_g3_ParamLimits

0x577c,	// (0x00097490) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdc24,	// (0x0009f938) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf742,	// (0x000a1456) popup_clock_analogue_window_cp10_g_ParamLimits

0x5792,	// (0x000974a6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5cc2,	// (0x000979d6) cell_dialer2_keypad_pane_g2_ParamLimits

0x5cc2,	// (0x000979d6) cell_dialer2_keypad_pane_g2

0x0001,

0xf827,	// (0x000a153b) cell_dialer2_keypad_pane_g_ParamLimits

0xf827,	// (0x000a153b) cell_dialer2_keypad_pane_g

0x5cde,	// (0x000979f2) cell_dialer2_keypad_pane_t1

0x68ea,	// (0x000985fe) main_cset_text2_pane_ParamLimits

0x68ea,	// (0x000985fe) main_cset_text2_pane

0xb71e,	// (0x0009d432) area_vitu2_query_pane_g1_ParamLimits

0x71d2,	// (0x00098ee6) area_vitu2_query_pane_g2_ParamLimits

0xf9d2,	// (0x000a16e6) area_vitu2_query_pane_g_ParamLimits

0xb7a2,	// (0x0009d4b6) area_vitu2_query_pane_t7_ParamLimits

0xb7a2,	// (0x0009d4b6) area_vitu2_query_pane_t7

0x723b,	// (0x00098f4f) bg_button_pane_cp018_ParamLimits

0x7247,	// (0x00098f5b) bg_button_pane_cp021_ParamLimits

0x7253,	// (0x00098f67) bg_button_pane_cp022_ParamLimits

0x7268,	// (0x00098f7c) bg_vkb2_func_pane_cp08_ParamLimits

0x723b,	// (0x00098f4f) bg_vkb2_func_pane_cp06_ParamLimits

0x7247,	// (0x00098f5b) bg_vkb2_func_pane_cp07_ParamLimits

0x727e,	// (0x00098f92) input_focus_pane_cp09_ParamLimits

0xd9d3,	// (0x0009f6e7) cam6_autofocus_pane_ParamLimits

0xd9d3,	// (0x0009f6e7) cam6_autofocus_pane

0x7795,	// (0x000994a9) cam6_image_uncrop_pane_ParamLimits

0x7795,	// (0x000994a9) cam6_image_uncrop_pane

0x77a4,	// (0x000994b8) cam6_indi_pane_ParamLimits

0x77a4,	// (0x000994b8) cam6_indi_pane

0x77ba,	// (0x000994ce) cam6_mode_pane_ParamLimits

0x77ba,	// (0x000994ce) cam6_mode_pane

0x77cc,	// (0x000994e0) cam6_timer_pane_ParamLimits

0x77cc,	// (0x000994e0) cam6_timer_pane

0x77d8,	// (0x000994ec) cam6_zoom_pane_ParamLimits

0x77d8,	// (0x000994ec) cam6_zoom_pane

0x77e6,	// (0x000994fa) cam6_mode_pane_g1_ParamLimits

0x77e6,	// (0x000994fa) cam6_mode_pane_g1

0x77f6,	// (0x0009950a) cam6_mode_pane_g2_ParamLimits

0x77f6,	// (0x0009950a) cam6_mode_pane_g2

0x7806,	// (0x0009951a) cam6_mode_pane_g3_ParamLimits

0x7806,	// (0x0009951a) cam6_mode_pane_g3

0x7816,	// (0x0009952a) cam6_mode_pane_g4_ParamLimits

0x7816,	// (0x0009952a) cam6_mode_pane_g4

0x0003,

0xfaba,	// (0x000a17ce) cam6_mode_pane_g_ParamLimits

0xfaba,	// (0x000a17ce) cam6_mode_pane_g

0x7826,	// (0x0009953a) bg_tb_trans_pane_cp08_ParamLimits

0x7826,	// (0x0009953a) bg_tb_trans_pane_cp08

0xba68,	// (0x0009d77c) cam6_battery_pane_ParamLimits

0xba68,	// (0x0009d77c) cam6_battery_pane

0xba7e,	// (0x0009d792) cam6_indi_pane_g1_ParamLimits

0xba7e,	// (0x0009d792) cam6_indi_pane_g1

0xba90,	// (0x0009d7a4) cam6_indi_pane_g2_ParamLimits

0xba90,	// (0x0009d7a4) cam6_indi_pane_g2

0xbaa2,	// (0x0009d7b6) cam6_indi_pane_g3_ParamLimits

0xbaa2,	// (0x0009d7b6) cam6_indi_pane_g3

0x0002,

0xfac3,	// (0x000a17d7) cam6_indi_pane_g_ParamLimits

0xfac3,	// (0x000a17d7) cam6_indi_pane_g

0xbab4,	// (0x0009d7c8) cam6_indi_pane_t1_ParamLimits

0xbab4,	// (0x0009d7c8) cam6_indi_pane_t1

0x6300,	// (0x00098014) cam6_autofocus_pane_g1

0x62f8,	// (0x0009800c) cam6_autofocus_pane_g2

0x6310,	// (0x00098024) cam6_autofocus_pane_g3

0x6308,	// (0x0009801c) cam6_autofocus_pane_g4

0x0003,

0xfaca,	// (0x000a17de) cam6_autofocus_pane_g

0xbada,	// (0x0009d7ee) cam6_timer_pane_g1

0xbae2,	// (0x0009d7f6) cam6_timer_pane_t1

0xbaf0,	// (0x0009d804) cam6_zoom_cont_pane

0xbaf8,	// (0x0009d80c) cam6_zoom_pane_g1

0xbb00,	// (0x0009d814) cam6_zoom_pane_g2

0x7834,	// (0x00099548) cam6_zoom_pane_g3

0x0002,

0xfad3,	// (0x000a17e7) cam6_zoom_pane_g

0xd382,	// (0x0009f096) cam6_battery_pane_g1

0xd382,	// (0x0009f096) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x000a10d2) cam6_battery_pane_g

0xbb08,	// (0x0009d81c) cam6_zoom_cont_pane_g1

0xbb11,	// (0x0009d825) cam6_zoom_cont_pane_g2

0xbb1a,	// (0x0009d82e) cam6_zoom_cont_pane_g3

0x0002,

0xfada,	// (0x000a17ee) cam6_zoom_cont_pane_g

0x7851,	// (0x00099565) cam6_mode_pane_cp_ParamLimits

0x7851,	// (0x00099565) cam6_mode_pane_cp

0x7863,	// (0x00099577) cam6_zoom_pane_cp_ParamLimits

0x7863,	// (0x00099577) cam6_zoom_pane_cp

0x7871,	// (0x00099585) vid6_image_uncrop_cif_pane_ParamLimits

0x7871,	// (0x00099585) vid6_image_uncrop_cif_pane

0x7881,	// (0x00099595) vid6_image_uncrop_nhd_pane_ParamLimits

0x7881,	// (0x00099595) vid6_image_uncrop_nhd_pane

0x7890,	// (0x000995a4) vid6_image_uncrop_vga_pane_ParamLimits

0x7890,	// (0x000995a4) vid6_image_uncrop_vga_pane

0x789f,	// (0x000995b3) vid6_image_uncrop_wvga_pane_ParamLimits

0x789f,	// (0x000995b3) vid6_image_uncrop_wvga_pane

0x78ae,	// (0x000995c2) vid6_indi_pane_ParamLimits

0x78ae,	// (0x000995c2) vid6_indi_pane

0x7826,	// (0x0009953a) bg_tb_trans_pane_cp09_ParamLimits

0x7826,	// (0x0009953a) bg_tb_trans_pane_cp09

0xbb32,	// (0x0009d846) cam6_battery_pane_cp_ParamLimits

0xbb32,	// (0x0009d846) cam6_battery_pane_cp

0xbb3e,	// (0x0009d852) vid6_indi_pane_g1_ParamLimits

0xbb3e,	// (0x0009d852) vid6_indi_pane_g1

0xbb50,	// (0x0009d864) vid6_indi_pane_g2_ParamLimits

0xbb50,	// (0x0009d864) vid6_indi_pane_g2

0xbb62,	// (0x0009d876) vid6_indi_pane_g3_ParamLimits

0xbb62,	// (0x0009d876) vid6_indi_pane_g3

0xbb79,	// (0x0009d88d) vid6_indi_pane_g4_ParamLimits

0xbb79,	// (0x0009d88d) vid6_indi_pane_g4

0xbb90,	// (0x0009d8a4) vid6_indi_pane_g5_ParamLimits

0xbb90,	// (0x0009d8a4) vid6_indi_pane_g5

0x0004,

0xfae1,	// (0x000a17f5) vid6_indi_pane_g_ParamLimits

0xfae1,	// (0x000a17f5) vid6_indi_pane_g

0xbbaa,	// (0x0009d8be) vid6_indi_pane_t1_ParamLimits

0xbbaa,	// (0x0009d8be) vid6_indi_pane_t1

0xbbc0,	// (0x0009d8d4) vid6_indi_pane_t2_ParamLimits

0xbbc0,	// (0x0009d8d4) vid6_indi_pane_t2

0xbbe8,	// (0x0009d8fc) vid6_indi_pane_t3_ParamLimits

0xbbe8,	// (0x0009d8fc) vid6_indi_pane_t3

0xbc10,	// (0x0009d924) vid6_indi_pane_t4_ParamLimits

0xbc10,	// (0x0009d924) vid6_indi_pane_t4

0x0003,

0xfaec,	// (0x000a1800) vid6_indi_pane_t_ParamLimits

0xfaec,	// (0x000a1800) vid6_indi_pane_t

0xbc34,	// (0x0009d948) wait_bar_pane_cp08

0x78c6,	// (0x000995da) main_cset_text2_pane_t1_ParamLimits

0x78c6,	// (0x000995da) main_cset_text2_pane_t1

0x783c,	// (0x00099550) listscroll_gen_pane_cp06_t1_ParamLimits

0x783c,	// (0x00099550) listscroll_gen_pane_cp06_t1

0xa2d7,	// (0x0009bfeb) main_cam6_set_pane

0xb0f4,	// (0x0009ce08) bg_tb_trans_pane_cp06_ParamLimits

0xb10a,	// (0x0009ce1e) cam4_indicators_pane_g1_ParamLimits

0xb11b,	// (0x0009ce2f) cam4_indicators_pane_g2_ParamLimits

0xf864,	// (0x000a1578) cam4_indicators_pane_g_ParamLimits

0xb133,	// (0x0009ce47) cam4_indicators_pane_t1_ParamLimits

0xa2c9,	// (0x0009bfdd) bg_tb_trans_pane_cp07_ParamLimits

0xb161,	// (0x0009ce75) vid4_indicators_pane_g1_ParamLimits

0xb177,	// (0x0009ce8b) vid4_indicators_pane_g2_ParamLimits

0xb18b,	// (0x0009ce9f) vid4_indicators_pane_g3_ParamLimits

0xb19e,	// (0x0009ceb2) vid4_indicators_pane_g4_ParamLimits

0xf876,	// (0x000a158a) vid4_indicators_pane_g_ParamLimits

0xb1bc,	// (0x0009ced0) vid4_indicators_pane_t1_ParamLimits

0xb81f,	// (0x0009d533) vid4_progress_pane_g1_ParamLimits

0xb82f,	// (0x0009d543) vid4_progress_pane_g2_ParamLimits

0x73bf,	// (0x000990d3) vid4_progress_pane_g3_ParamLimits

0xb83f,	// (0x0009d553) vid4_progress_pane_g4_ParamLimits

0xfa1d,	// (0x000a1731) vid4_progress_pane_g_ParamLimits

0x73d1,	// (0x000990e5) vid4_progress_pane_t1_ParamLimits

0xb85d,	// (0x0009d571) vid4_progress_pane_t2_ParamLimits

0xb873,	// (0x0009d587) vid4_progress_pane_t3_ParamLimits

0xfa28,	// (0x000a173c) vid4_progress_pane_t_ParamLimits

0x73eb,	// (0x000990ff) wait_bar_pane_cp07_ParamLimits

0x78e7,	// (0x000995fb) main_cam6_set_pane_g2_ParamLimits

0x78e7,	// (0x000995fb) main_cam6_set_pane_g2

0x790d,	// (0x00099621) main_cset6_listscroll_pane_ParamLimits

0x790d,	// (0x00099621) main_cset6_listscroll_pane

0x792b,	// (0x0009963f) main_cset6_slider_pane_ParamLimits

0x792b,	// (0x0009963f) main_cset6_slider_pane

0x7941,	// (0x00099655) main_cset6_text2_pane_ParamLimits

0x7941,	// (0x00099655) main_cset6_text2_pane

0xbc43,	// (0x0009d957) main_cset6_text_pane

0xbc4b,	// (0x0009d95f) main_cset_list_pane_copy1_ParamLimits

0xbc4b,	// (0x0009d95f) main_cset_list_pane_copy1

0xbc5b,	// (0x0009d96f) scroll_pane_cp028_copy1

0x794f,	// (0x00099663) cset_list_set_pane_copy1

0x7963,	// (0x00099677) aid_position_infowindow_above_copy1

0x796b,	// (0x0009967f) aid_position_infowindow_below_copy1

0x7973,	// (0x00099687) cset_list_set_pane_g1_copy1

0x797b,	// (0x0009968f) cset_list_set_pane_g3_copy1_ParamLimits

0x797b,	// (0x0009968f) cset_list_set_pane_g3_copy1

0x798a,	// (0x0009969e) cset_list_set_pane_t1_copy1_ParamLimits

0x798a,	// (0x0009969e) cset_list_set_pane_t1_copy1

0xe217,	// (0x0009ff2b) list_highlight_pane_cp021_copy1_ParamLimits

0xe217,	// (0x0009ff2b) list_highlight_pane_cp021_copy1

0xbc64,	// (0x0009d978) cset6_slider_pane_ParamLimits

0xbc64,	// (0x0009d978) cset6_slider_pane

0xbc90,	// (0x0009d9a4) main_cset6_slider_pane_g1_ParamLimits

0xbc90,	// (0x0009d9a4) main_cset6_slider_pane_g1

0x799f,	// (0x000996b3) main_cset6_slider_pane_g2_ParamLimits

0x799f,	// (0x000996b3) main_cset6_slider_pane_g2

0xbcb8,	// (0x0009d9cc) main_cset6_slider_pane_g3_ParamLimits

0xbcb8,	// (0x0009d9cc) main_cset6_slider_pane_g3

0x79c7,	// (0x000996db) main_cset6_slider_pane_g4_ParamLimits

0x79c7,	// (0x000996db) main_cset6_slider_pane_g4

0x79d3,	// (0x000996e7) main_cset6_slider_pane_g5_ParamLimits

0x79d3,	// (0x000996e7) main_cset6_slider_pane_g5

0xb393,	// (0x0009d0a7) main_cset6_slider_pane_g7_ParamLimits

0xb393,	// (0x0009d0a7) main_cset6_slider_pane_g7

0xb39f,	// (0x0009d0b3) main_cset6_slider_pane_g8_ParamLimits

0xb39f,	// (0x0009d0b3) main_cset6_slider_pane_g8

0x6992,	// (0x000986a6) main_cset6_slider_pane_g9_ParamLimits

0x6992,	// (0x000986a6) main_cset6_slider_pane_g9

0x699e,	// (0x000986b2) main_cset6_slider_pane_g10_ParamLimits

0x699e,	// (0x000986b2) main_cset6_slider_pane_g10

0x69aa,	// (0x000986be) main_cset6_slider_pane_g11_ParamLimits

0x69aa,	// (0x000986be) main_cset6_slider_pane_g11

0x69b6,	// (0x000986ca) main_cset6_slider_pane_g12_ParamLimits

0x69b6,	// (0x000986ca) main_cset6_slider_pane_g12

0x69c2,	// (0x000986d6) main_cset6_slider_pane_g13_ParamLimits

0x69c2,	// (0x000986d6) main_cset6_slider_pane_g13

0x69ce,	// (0x000986e2) main_cset6_slider_pane_g14_ParamLimits

0x69ce,	// (0x000986e2) main_cset6_slider_pane_g14

0x79e1,	// (0x000996f5) main_cset6_slider_pane_g15_ParamLimits

0x79e1,	// (0x000996f5) main_cset6_slider_pane_g15

0x69f2,	// (0x00098706) main_cset6_slider_pane_g16_ParamLimits

0x69f2,	// (0x00098706) main_cset6_slider_pane_g16

0x6a00,	// (0x00098714) main_cset6_slider_pane_g17_ParamLimits

0x6a00,	// (0x00098714) main_cset6_slider_pane_g17

0x0011,

0xfaf5,	// (0x000a1809) main_cset6_slider_pane_g_ParamLimits

0xfaf5,	// (0x000a1809) main_cset6_slider_pane_g

0xbcc4,	// (0x0009d9d8) main_cset6_slider_pane_t1_ParamLimits

0xbcc4,	// (0x0009d9d8) main_cset6_slider_pane_t1

0x7a11,	// (0x00099725) main_cset6_slider_pane_t2_ParamLimits

0x7a11,	// (0x00099725) main_cset6_slider_pane_t2

0x7a3c,	// (0x00099750) main_cset6_slider_pane_t3_ParamLimits

0x7a3c,	// (0x00099750) main_cset6_slider_pane_t3

0x7a67,	// (0x0009977b) main_cset6_slider_pane_t4_ParamLimits

0x7a67,	// (0x0009977b) main_cset6_slider_pane_t4

0x7a94,	// (0x000997a8) main_cset6_slider_pane_t5_ParamLimits

0x7a94,	// (0x000997a8) main_cset6_slider_pane_t5

0xbd05,	// (0x0009da19) main_cset6_slider_pane_t7_ParamLimits

0xbd05,	// (0x0009da19) main_cset6_slider_pane_t7

0x7ac1,	// (0x000997d5) main_cset6_slider_pane_t8_ParamLimits

0x7ac1,	// (0x000997d5) main_cset6_slider_pane_t8

0x7ae5,	// (0x000997f9) main_cset6_slider_pane_t9_ParamLimits

0x7ae5,	// (0x000997f9) main_cset6_slider_pane_t9

0x7b09,	// (0x0009981d) main_cset6_slider_pane_t10_ParamLimits

0x7b09,	// (0x0009981d) main_cset6_slider_pane_t10

0x7b2d,	// (0x00099841) main_cset6_slider_pane_t11_ParamLimits

0x7b2d,	// (0x00099841) main_cset6_slider_pane_t11

0xbd3b,	// (0x0009da4f) main_cset6_slider_pane_t14_ParamLimits

0xbd3b,	// (0x0009da4f) main_cset6_slider_pane_t14

0xbd74,	// (0x0009da88) main_cset6_slider_pane_t15_ParamLimits

0xbd74,	// (0x0009da88) main_cset6_slider_pane_t15

0x000b,

0xfb1a,	// (0x000a182e) main_cset6_slider_pane_t_ParamLimits

0xfb1a,	// (0x000a182e) main_cset6_slider_pane_t

0xbdad,	// (0x0009dac1) cset_slider_pane_g1_copy1

0xbdb6,	// (0x0009daca) cset_slider_pane_g2_copy1

0xbdbf,	// (0x0009dad3) cset_slider_pane_g3_copy1

0xe14c,	// (0x0009fe60) bg_popup_sub_pane_cp011_copy1

0xbdd1,	// (0x0009dae5) main_cset_text_pane_g1_copy1

0xb53a,	// (0x0009d24e) main_cset_text_pane_t1_copy1

0xb548,	// (0x0009d25c) main_cset_text_pane_t2_copy1

0xb556,	// (0x0009d26a) main_cset_text_pane_t3_copy1

0xb564,	// (0x0009d278) main_cset_text_pane_t4_copy1

0xb572,	// (0x0009d286) main_cset_text_pane_t5_copy1

0xbdd9,	// (0x0009daed) main_cset_text_pane_t6_copy1

0xbde7,	// (0x0009dafb) main_cset_text_pane_t7_copy1

0x78c6,	// (0x000995da) main_cset_text2_pane_t1_copy1

0xa2c9,	// (0x0009bfdd) main_ncimui_pane

0x4404,	// (0x00096118) popup_query_ncimui_window_ParamLimits

0x4404,	// (0x00096118) popup_query_ncimui_window

0xa7f0,	// (0x0009c504) field_cale_ev2_pane_g4_ParamLimits

0xa7f0,	// (0x0009c504) field_cale_ev2_pane_g4

0x5b8d,	// (0x000978a1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5b8d,	// (0x000978a1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7fe,	// (0x000a1512) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7fe,	// (0x000a1512) cell_video_dialer_keypad_pane_g

0x5ba5,	// (0x000978b9) cell_video_dialer_keypad_pane_t1

0xe14c,	// (0x0009fe60) bg_popup_window_pane_cp012

0x3e6e,	// (0x00095b82) heading_pane_cp06

0xbe13,	// (0x0009db27) ncim_query_content_pane

0xe14c,	// (0x0009fe60) bg_popup_heading_pane_cp01

0xbe1b,	// (0x0009db2f) ncim_heading_pane_t1

0xbe29,	// (0x0009db3d) ncim_indicator_popup_pane

0xbe3b,	// (0x0009db4f) ncim_query_button_pane

0xbe51,	// (0x0009db65) ncim_query_content_pane_t1

0xbe63,	// (0x0009db77) ncim_query_content_pane_t2

0x0005,

0xfb4f,	// (0x000a1863) ncim_query_content_pane_t

0xbe9d,	// (0x0009dbb1) ncim_query_list_pane

0xbeaf,	// (0x0009dbc3) ncim_query_popup_pane

0xbe29,	// (0x0009db3d) ncim_indicator_popup_pane_ParamLimits

0x7c99,	// (0x000999ad) ncim_query_content_pane_g1_ParamLimits

0x7c99,	// (0x000999ad) ncim_query_content_pane_g1

0xbe51,	// (0x0009db65) ncim_query_content_pane_t1_ParamLimits

0xbe63,	// (0x0009db77) ncim_query_content_pane_t2_ParamLimits

0x7ca5,	// (0x000999b9) ncim_query_content_pane_t3_ParamLimits

0x7ca5,	// (0x000999b9) ncim_query_content_pane_t3

0x7ccd,	// (0x000999e1) ncim_query_content_pane_t4_ParamLimits

0x7ccd,	// (0x000999e1) ncim_query_content_pane_t4

0x7cf5,	// (0x00099a09) ncim_query_content_pane_t5_ParamLimits

0x7cf5,	// (0x00099a09) ncim_query_content_pane_t5

0xbe75,	// (0x0009db89) ncim_query_content_pane_t6_ParamLimits

0xbe75,	// (0x0009db89) ncim_query_content_pane_t6

0xfb4f,	// (0x000a1863) ncim_query_content_pane_t_ParamLimits

0xbe9d,	// (0x0009dbb1) ncim_query_list_pane_ParamLimits

0xbeaf,	// (0x0009dbc3) ncim_query_popup_pane_ParamLimits

0xbec3,	// (0x0009dbd7) wait_bar_pane_cp04

0xe14c,	// (0x0009fe60) input_focus_pane_cp011

0xbecb,	// (0x0009dbdf) ncim_query_popup_pane_t1

0xbed9,	// (0x0009dbed) ncim_list_query_list_pane_ParamLimits

0xbed9,	// (0x0009dbed) ncim_list_query_list_pane

0xe14c,	// (0x0009fe60) bg_button_pane_cp027

0xbeec,	// (0x0009dc00) ncim_query_button_pane_g1

0xe14c,	// (0x0009fe60) list_highlight_pane_cp012

0xbef6,	// (0x0009dc0a) ncim_list_query_list_pane_g1

0xbefe,	// (0x0009dc12) ncim_list_query_list_pane_t1

0xb127,	// (0x0009ce3b) cam4_indicators_pane_g3_ParamLimits

0xb127,	// (0x0009ce3b) cam4_indicators_pane_g3

0xb1aa,	// (0x0009cebe) vid4_indicators_pane_g5_ParamLimits

0xb1aa,	// (0x0009cebe) vid4_indicators_pane_g5

0xb84e,	// (0x0009d562) vid4_progress_pane_g5_ParamLimits

0xb84e,	// (0x0009d562) vid4_progress_pane_g5

0x7b84,	// (0x00099898) main_ncimui_pane_g1

0x7bed,	// (0x00099901) ncimui_group_query_pane_ParamLimits

0x7bed,	// (0x00099901) ncimui_group_query_pane

0x7c35,	// (0x00099949) ncimui_list_pane_ParamLimits

0x7c35,	// (0x00099949) ncimui_list_pane

0x7c5c,	// (0x00099970) ncimui_text_pane_ParamLimits

0x7c5c,	// (0x00099970) ncimui_text_pane

0x7d1d,	// (0x00099a31) ncimui_text_pane_t1_ParamLimits

0x7d1d,	// (0x00099a31) ncimui_text_pane_t1

0xbf0c,	// (0x0009dc20) ncimui_list_single_graphic_pane_ParamLimits

0xbf0c,	// (0x0009dc20) ncimui_list_single_graphic_pane

0x7d3b,	// (0x00099a4f) ncimui_query_pane_ParamLimits

0x7d3b,	// (0x00099a4f) ncimui_query_pane

0xe14c,	// (0x0009fe60) list_highlight_pane_cp013

0xbf1c,	// (0x0009dc30) ncim_list_query_list_pane_t1_copy1

0xbef6,	// (0x0009dc0a) ncim_list_single_graphic_pane_g1

0x7d4e,	// (0x00099a62) ncim_query_button_pane_cp01

0x7d5a,	// (0x00099a6e) ncim_query_entry_pane_ParamLimits

0x7d5a,	// (0x00099a6e) ncim_query_entry_pane

0x7d6d,	// (0x00099a81) ncimui_query_pane_g1

0x7d79,	// (0x00099a8d) ncimui_query_pane_t1_ParamLimits

0x7d79,	// (0x00099a8d) ncimui_query_pane_t1

0xe217,	// (0x0009ff2b) input_focus_pane_cp012

0xbf2a,	// (0x0009dc3e) ncim_query_entry_pane_t1

0xef71,	// (0x000a0c85) main_im_pane_ParamLimits

0xa2c9,	// (0x0009bfdd) main_mobtv_pane_ParamLimits

0xa2c9,	// (0x0009bfdd) main_mobtv_pane

0x79f9,	// (0x0009970d) main_cset6_slider_pane_g18_ParamLimits

0x79f9,	// (0x0009970d) main_cset6_slider_pane_g18

0x7a05,	// (0x00099719) main_cset6_slider_pane_g19_ParamLimits

0x7a05,	// (0x00099719) main_cset6_slider_pane_g19

0xef1b,	// (0x000a0c2f) bg_main_mobtv_pane_ParamLimits

0xef1b,	// (0x000a0c2f) bg_main_mobtv_pane

0x7d92,	// (0x00099aa6) main_mobtv_info_pane

0x7d9d,	// (0x00099ab1) main_mobtv_loading_pane_ParamLimits

0x7d9d,	// (0x00099ab1) main_mobtv_loading_pane

0xbf3c,	// (0x0009dc50) main_mobtv_pg_channel_list_pane

0xbf46,	// (0x0009dc5a) main_mobtv_pg_hdr_pane

0x7daa,	// (0x00099abe) main_mobtv_programe_curr_pane_ParamLimits

0x7daa,	// (0x00099abe) main_mobtv_programe_curr_pane

0x7db7,	// (0x00099acb) main_mobtv_programe_next_pane_ParamLimits

0x7db7,	// (0x00099acb) main_mobtv_programe_next_pane

0xbf4f,	// (0x0009dc63) popup_mobtv_noti_window

0xd382,	// (0x0009f096) main_tv_pg_hdr_pane_g1

0xbf59,	// (0x0009dc6d) main_tv_pg_hdr_pane_g2

0xbf61,	// (0x0009dc75) main_tv_pg_hdr_pane_g3

0xbf69,	// (0x0009dc7d) main_tv_pg_hdr_pane_g4

0xbf71,	// (0x0009dc85) main_tv_pg_hdr_pane_g5

0xbf7b,	// (0x0009dc8f) main_tv_pg_hdr_pane_g6

0xbf85,	// (0x0009dc99) main_tv_pg_hdr_pane_g7

0xbf8f,	// (0x0009dca3) main_tv_pg_hdr_pane_g8

0xbf99,	// (0x0009dcad) main_tv_pg_hdr_pane_g9

0xbfa3,	// (0x0009dcb7) main_tv_pg_hdr_pane_g10

0xbfad,	// (0x0009dcc1) main_tv_pg_hdr_pane_g11

0x000a,

0xfb5c,	// (0x000a1870) main_tv_pg_hdr_pane_g

0xbfb7,	// (0x0009dccb) main_tv_pg_hdr_pane_t1

0xbfc5,	// (0x0009dcd9) main_tv_pg_hdr_pane_t2

0xbfd3,	// (0x0009dce7) main_tv_pg_hdr_pane_t3

0xbfe3,	// (0x0009dcf7) main_tv_pg_hdr_pane_t4

0xbff3,	// (0x0009dd07) main_tv_pg_hdr_pane_t5

0x0004,

0xfb73,	// (0x000a1887) main_tv_pg_hdr_pane_t

0xc003,	// (0x0009dd17) single_mobtv_pg_channel_pane_ParamLimits

0xc003,	// (0x0009dd17) single_mobtv_pg_channel_pane

0xc015,	// (0x0009dd29) single_mobtv_pg_channel_table_pane

0xc01e,	// (0x0009dd32) single_mobtv_pg_channel_thumb_pane

0xc027,	// (0x0009dd3b) single_tv_pg_channel_pane_g1

0xc030,	// (0x0009dd44) single_tv_pg_channel_pane_g2

0x0001,

0xfb7e,	// (0x000a1892) single_tv_pg_channel_pane_g

0xeeff,	// (0x000a0c13) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeeff,	// (0x000a0c13) bg_single_mobtv_pg_channel_thumb_pane

0xc039,	// (0x0009dd4d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc039,	// (0x0009dd4d) single_mobtv_pg_channel_thumb_pane_g1

0xc047,	// (0x0009dd5b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc047,	// (0x0009dd5b) single_mobtv_pg_channel_thumb_pane_g2

0xc053,	// (0x0009dd67) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc053,	// (0x0009dd67) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb83,	// (0x000a1897) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb83,	// (0x000a1897) single_mobtv_pg_channel_thumb_pane_g

0xc05f,	// (0x0009dd73) single_mobtv_pg_channel_thumb_pane_t1

0xc06d,	// (0x0009dd81) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb8a,	// (0x000a189e) single_mobtv_pg_channel_thumb_pane_t

0xd382,	// (0x0009f096) bg_single_mobtv_pg_channel_table_pane_g1

0xd382,	// (0x0009f096) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x000a10d2) bg_single_mobtv_pg_channel_table_pane_g

0xc07b,	// (0x0009dd8f) single_mobtv_pg_channel_table_pane_t1

0xc089,	// (0x0009dd9d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb8f,	// (0x000a18a3) single_mobtv_pg_channel_table_pane_t

0x7dcc,	// (0x00099ae0) main_mobtv_info_pane_g1_ParamLimits

0x7dcc,	// (0x00099ae0) main_mobtv_info_pane_g1

0x7dea,	// (0x00099afe) main_mobtv_info_pane_t1_ParamLimits

0x7dea,	// (0x00099afe) main_mobtv_info_pane_t1

0x7e62,	// (0x00099b76) main_mobtv_info_pane_t2_ParamLimits

0x7e62,	// (0x00099b76) main_mobtv_info_pane_t2

0x0002,

0xfb99,	// (0x000a18ad) main_mobtv_info_pane_t_ParamLimits

0xfb99,	// (0x000a18ad) main_mobtv_info_pane_t

0x7ef3,	// (0x00099c07) wait_bar_pane_cp05

0x7f05,	// (0x00099c19) main_mobtv_loading_pane_g1_ParamLimits

0x7f05,	// (0x00099c19) main_mobtv_loading_pane_g1

0x7f16,	// (0x00099c2a) main_mobtv_loading_pane_g2_ParamLimits

0x7f16,	// (0x00099c2a) main_mobtv_loading_pane_g2

0x7f22,	// (0x00099c36) main_mobtv_loading_pane_g3_ParamLimits

0x7f22,	// (0x00099c36) main_mobtv_loading_pane_g3

0x0002,

0xfba0,	// (0x000a18b4) main_mobtv_loading_pane_g_ParamLimits

0xfba0,	// (0x000a18b4) main_mobtv_loading_pane_g

0xc097,	// (0x0009ddab) main_mobtv_loading_pane_t1_ParamLimits

0xc097,	// (0x0009ddab) main_mobtv_loading_pane_t1

0xc0af,	// (0x0009ddc3) main_mobtv_loading_pane_t2_ParamLimits

0xc0af,	// (0x0009ddc3) main_mobtv_loading_pane_t2

0x0001,

0xfba7,	// (0x000a18bb) main_mobtv_loading_pane_t_ParamLimits

0xfba7,	// (0x000a18bb) main_mobtv_loading_pane_t

0x7f35,	// (0x00099c49) wait_bar_pane_cp06_ParamLimits

0x7f35,	// (0x00099c49) wait_bar_pane_cp06

0xc0d3,	// (0x0009dde7) main_mobtv_programe_curr_pane_t1

0xc0e1,	// (0x0009ddf5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbac,	// (0x000a18c0) main_mobtv_programe_curr_pane_t

0xc0ef,	// (0x0009de03) main_mobtv_programe_next_pane_t1

0xc0fd,	// (0x0009de11) main_mobtv_programe_next_pane_t2

0xc10b,	// (0x0009de1f) main_mobtv_programe_next_pane_t3

0x0002,

0xfbb1,	// (0x000a18c5) main_mobtv_programe_next_pane_t

0xe14c,	// (0x0009fe60) bg_popup_mobtv_noti_window_pane

0xc119,	// (0x0009de2d) popup_mobtv_noti_window_g1

0xc121,	// (0x0009de35) popup_mobtv_noti_window_t1

0xc12f,	// (0x0009de43) popup_mobtv_noti_window_t2

0x0001,

0xfbb8,	// (0x000a18cc) popup_mobtv_noti_window_t

0xd382,	// (0x0009f096) bg_popup_mobtv_noti_window_pane_g1

0xa2d7,	// (0x0009bfeb) sc_clock_pane

0xa2d7,	// (0x0009bfeb) main_fs_bigclock_pane

0x760c,	// (0x00099320) blid2_tripm_pane_t4_ParamLimits

0x760c,	// (0x00099320) blid2_tripm_pane_t4

0x7f44,	// (0x00099c58) sc_clock_pane_g1_ParamLimits

0x7f44,	// (0x00099c58) sc_clock_pane_g1

0x7f56,	// (0x00099c6a) sc_clock_pane_t1_ParamLimits

0x7f56,	// (0x00099c6a) sc_clock_pane_t1

0x7f7a,	// (0x00099c8e) sc_clock_pane_t2_ParamLimits

0x7f7a,	// (0x00099c8e) sc_clock_pane_t2

0x7f92,	// (0x00099ca6) sc_clock_pane_t3_ParamLimits

0x7f92,	// (0x00099ca6) sc_clock_pane_t3

0x0004,

0xfbbd,	// (0x000a18d1) sc_clock_pane_t_ParamLimits

0xfbbd,	// (0x000a18d1) sc_clock_pane_t

0x8e9c,	// (0x0009abb0) main_fs_bigclock_indicator_pane_ParamLimits

0x8e9c,	// (0x0009abb0) main_fs_bigclock_indicator_pane

0x8058,	// (0x00099d6c) main_fs_bigclock_pane_g1_ParamLimits

0x8058,	// (0x00099d6c) main_fs_bigclock_pane_g1

0x8ea8,	// (0x0009abbc) main_fs_bigclock_pane_t1_ParamLimits

0x8ea8,	// (0x0009abbc) main_fs_bigclock_pane_t1

0x8eba,	// (0x0009abce) main_fs_bigclock_pane_t2_ParamLimits

0x8eba,	// (0x0009abce) main_fs_bigclock_pane_t2

0x8ece,	// (0x0009abe2) main_fs_bigclock_pane_t3_ParamLimits

0x8ece,	// (0x0009abe2) main_fs_bigclock_pane_t3

0x0002,

0xfd4e,	// (0x000a1a62) main_fs_bigclock_pane_t_ParamLimits

0xfd4e,	// (0x000a1a62) main_fs_bigclock_pane_t

0xcb8b,	// (0x0009e89f) main_fs_bigclock_indicator_pane_g1

0xbe43,	// (0x0009db57) ncim_query_content_pane_g2_ParamLimits

0xbe43,	// (0x0009db57) ncim_query_content_pane_g2

0x0001,

0xfb4a,	// (0x000a185e) ncim_query_content_pane_g_ParamLimits

0xfb4a,	// (0x000a185e) ncim_query_content_pane_g

0x7fa9,	// (0x00099cbd) sc_clock_pane_t4_ParamLimits

0x7fa9,	// (0x00099cbd) sc_clock_pane_t4

0xa2c9,	// (0x0009bfdd) main_radioblah_pane

0xb046,	// (0x0009cd5a) cell_call4_button_pane_t1_copy1_ParamLimits

0xb046,	// (0x0009cd5a) cell_call4_button_pane_t1_copy1

0x7b9c,	// (0x000998b0) main_ncimui_pane_t1_ParamLimits

0x7b9c,	// (0x000998b0) main_ncimui_pane_t1

0x7bb6,	// (0x000998ca) main_ncimui_pane_t2_ParamLimits

0x7bb6,	// (0x000998ca) main_ncimui_pane_t2

0x0002,

0xfb43,	// (0x000a1857) main_ncimui_pane_t_ParamLimits

0xfb43,	// (0x000a1857) main_ncimui_pane_t

0xc13d,	// (0x0009de51) main_radioblah_anim_pane_ParamLimits

0xc13d,	// (0x0009de51) main_radioblah_anim_pane

0xc14e,	// (0x0009de62) main_radioblah_info_pane_ParamLimits

0xc14e,	// (0x0009de62) main_radioblah_info_pane

0xc162,	// (0x0009de76) main_radioblah_pane_t1_ParamLimits

0xc162,	// (0x0009de76) main_radioblah_pane_t1

0xc17e,	// (0x0009de92) main_radioblah_pane_t2_ParamLimits

0xc17e,	// (0x0009de92) main_radioblah_pane_t2

0x0003,

0xfbde,	// (0x000a18f2) main_radioblah_pane_t_ParamLimits

0xfbde,	// (0x000a18f2) main_radioblah_pane_t

0x8201,	// (0x00099f15) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8201,	// (0x00099f15) main_radioblah_rocker_ctrl_pane

0xc1c6,	// (0x0009deda) main_radioblah_info_pane_t1_ParamLimits

0xc1c6,	// (0x0009deda) main_radioblah_info_pane_t1

0x8259,	// (0x00099f6d) main_radioblah_info_pane_t2_ParamLimits

0x8259,	// (0x00099f6d) main_radioblah_info_pane_t2

0x0003,

0xfbe7,	// (0x000a18fb) main_radioblah_info_pane_t_ParamLimits

0xfbe7,	// (0x000a18fb) main_radioblah_info_pane_t

0xd382,	// (0x0009f096) main_radioblah_rocker_ctrl_pane_g1

0x8309,	// (0x0009a01d) main_radioblah_rocker_ctrl_pane_g2

0x8311,	// (0x0009a025) main_radioblah_rocker_ctrl_pane_g3

0x8319,	// (0x0009a02d) main_radioblah_rocker_ctrl_pane_g4

0x8321,	// (0x0009a035) main_radioblah_rocker_ctrl_pane_g5

0x8329,	// (0x0009a03d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbf0,	// (0x000a1904) main_radioblah_rocker_ctrl_pane_g

0x78c6,	// (0x000995da) main_cset_text2_pane_t1_copy1_ParamLimits

0xb0d6,	// (0x0009cdea) cam4_image_uncrop_qvga_pane

0xb14d,	// (0x0009ce61) vid4_image_uncrop_qcif_pane

0xd9d3,	// (0x0009f6e7) cam6_image_uncrop_qvga_pane_ParamLimits

0xd9d3,	// (0x0009f6e7) cam6_image_uncrop_qvga_pane

0xbb22,	// (0x0009d836) vid6_image_uncrop_qcif_pane_ParamLimits

0xbb22,	// (0x0009d836) vid6_image_uncrop_qcif_pane

0xe14c,	// (0x0009fe60) bg_popup_preview_window_pane_cp03

0xbdf5,	// (0x0009db09) list_cset_text2_pane

0xbdfd,	// (0x0009db11) main_cset6_text2_pane_g1

0xbe05,	// (0x0009db19) main_cset6_text2_pane_t1

0xc200,	// (0x0009df14) list_cset_text2_pane_t1_ParamLimits

0xc200,	// (0x0009df14) list_cset_text2_pane_t1

0xa2c9,	// (0x0009bfdd) main_radioblah_pane_ParamLimits

0x7edf,	// (0x00099bf3) main_mobtv_info_pane_t3_ParamLimits

0x7edf,	// (0x00099bf3) main_mobtv_info_pane_t3

0x81ef,	// (0x00099f03) main_radioblah_pane_g1

0x8229,	// (0x00099f3d) main_radioblah_info_pane_g1

0x82ae,	// (0x00099fc2) main_radioblah_info_pane_t3_ParamLimits

0x82ae,	// (0x00099fc2) main_radioblah_info_pane_t3

0x2620,	// (0x00094334) highlight_cell_cale_month_pane_ParamLimits

0x2620,	// (0x00094334) highlight_cell_cale_month_pane

0xa2d7,	// (0x0009bfeb) main_phob_fisheye_pane

0xa865,	// (0x0009c579) scroll_pane_cp0031_ParamLimits

0xa865,	// (0x0009c579) scroll_pane_cp0031

0xbc34,	// (0x0009d948) wait_bar_pane_cp08_ParamLimits

0x794f,	// (0x00099663) cset_list_set_pane_copy1_ParamLimits

0xc21a,	// (0x0009df2e) highlight_cell_cale_month_pane_g1

0x8331,	// (0x0009a045) highlight_cell_cale_month_pane_t1

0xb80e,	// (0x0009d522) list_gen_pane_cp01

0xb37e,	// (0x0009d092) scroll_pane_01

0x833f,	// (0x0009a053) list_single_double_fisheye_pane

0x8348,	// (0x0009a05c) list_double_fisheye_pane_g1_ParamLimits

0x8348,	// (0x0009a05c) list_double_fisheye_pane_g1

0x8354,	// (0x0009a068) list_double_fisheye_pane_g2_ParamLimits

0x8354,	// (0x0009a068) list_double_fisheye_pane_g2

0x8368,	// (0x0009a07c) list_double_fisheye_pane_g3_ParamLimits

0x8368,	// (0x0009a07c) list_double_fisheye_pane_g3

0x0004,

0xfbfd,	// (0x000a1911) list_double_fisheye_pane_g_ParamLimits

0xfbfd,	// (0x000a1911) list_double_fisheye_pane_g

0x8391,	// (0x0009a0a5) list_double_fisheye_pane_t1_ParamLimits

0x8391,	// (0x0009a0a5) list_double_fisheye_pane_t1

0x83ac,	// (0x0009a0c0) list_double_fisheye_pane_t2_ParamLimits

0x83ac,	// (0x0009a0c0) list_double_fisheye_pane_t2

0x0001,

0xfc08,	// (0x000a191c) list_double_fisheye_pane_t_ParamLimits

0xfc08,	// (0x000a191c) list_double_fisheye_pane_t

0xa2d7,	// (0x0009bfeb) main_call5_pane

0x7fd4,	// (0x00099ce8) sc_swipe_pane_ParamLimits

0x7fd4,	// (0x00099ce8) sc_swipe_pane

0x83e1,	// (0x0009a0f5) call5_image_pane_ParamLimits

0x83e1,	// (0x0009a0f5) call5_image_pane

0x83fe,	// (0x0009a112) call5_swipe_1_pane_ParamLimits

0x83fe,	// (0x0009a112) call5_swipe_1_pane

0x8411,	// (0x0009a125) call5_swipe_2_pane_ParamLimits

0x8411,	// (0x0009a125) call5_swipe_2_pane

0x843c,	// (0x0009a150) popup_call5_audio_first_window_ParamLimits

0x843c,	// (0x0009a150) popup_call5_audio_first_window

0xeeff,	// (0x000a0c13) call5_swipe_1_pane_g1_ParamLimits

0xeeff,	// (0x000a0c13) call5_swipe_1_pane_g1

0xc222,	// (0x0009df36) call5_swipe_1_pane_g2_ParamLimits

0xc222,	// (0x0009df36) call5_swipe_1_pane_g2

0x0001,

0xfc0d,	// (0x000a1921) call5_swipe_1_pane_g_ParamLimits

0xfc0d,	// (0x000a1921) call5_swipe_1_pane_g

0xc22e,	// (0x0009df42) call5_swipe_1_pane_t1_ParamLimits

0xc22e,	// (0x0009df42) call5_swipe_1_pane_t1

0xeeff,	// (0x000a0c13) call5_swipe_2_pane_g1_ParamLimits

0xeeff,	// (0x000a0c13) call5_swipe_2_pane_g1

0xc243,	// (0x0009df57) call5_swipe_2_pane_g2_ParamLimits

0xc243,	// (0x0009df57) call5_swipe_2_pane_g2

0x0001,

0xfc12,	// (0x000a1926) call5_swipe_2_pane_g_ParamLimits

0xfc12,	// (0x000a1926) call5_swipe_2_pane_g

0xc24f,	// (0x0009df63) call5_swipe_2_pane_t1_ParamLimits

0xc24f,	// (0x0009df63) call5_swipe_2_pane_t1

0xc264,	// (0x0009df78) sc_swipe_pane_g1_ParamLimits

0xc264,	// (0x0009df78) sc_swipe_pane_g1

0xc271,	// (0x0009df85) sc_swipe_pane_g2_ParamLimits

0xc271,	// (0x0009df85) sc_swipe_pane_g2

0x0001,

0xfc17,	// (0x000a192b) sc_swipe_pane_g_ParamLimits

0xfc17,	// (0x000a192b) sc_swipe_pane_g

0xc27d,	// (0x0009df91) sc_swipe_pane_t1_ParamLimits

0xc27d,	// (0x0009df91) sc_swipe_pane_t1

0xa2d7,	// (0x0009bfeb) main_cmail_launcher_pane

0x8451,	// (0x0009a165) aid_size_cell_cmail_l_ParamLimits

0x8451,	// (0x0009a165) aid_size_cell_cmail_l

0x8467,	// (0x0009a17b) grid_cmail_l_pane_ParamLimits

0x8467,	// (0x0009a17b) grid_cmail_l_pane

0x8481,	// (0x0009a195) cell_cmail_l_pane_ParamLimits

0x8481,	// (0x0009a195) cell_cmail_l_pane

0x84a6,	// (0x0009a1ba) cell_cmail_l_pane_g1_ParamLimits

0x84a6,	// (0x0009a1ba) cell_cmail_l_pane_g1

0x84b2,	// (0x0009a1c6) cell_cmail_l_pane_t1_ParamLimits

0x84b2,	// (0x0009a1c6) cell_cmail_l_pane_t1

0x84c8,	// (0x0009a1dc) cell_cmail_l_pane_t2_ParamLimits

0x84c8,	// (0x0009a1dc) cell_cmail_l_pane_t2

0x0001,

0xfc1c,	// (0x000a1930) cell_cmail_l_pane_t_ParamLimits

0xfc1c,	// (0x000a1930) cell_cmail_l_pane_t

0xe217,	// (0x0009ff2b) grid_highlight_pane_cp018_ParamLimits

0xe217,	// (0x0009ff2b) grid_highlight_pane_cp018

0x08bc,	// (0x000925d0) main2_pane_ParamLimits

0x08bc,	// (0x000925d0) main2_pane

0xf009,	// (0x000a0d1d) popup_sp_fs_action_menu_bg_pane_g1

0xf011,	// (0x000a0d25) popup_sp_fs_action_menu_bg_pane_g2

0xf019,	// (0x000a0d2d) popup_sp_fs_action_menu_bg_pane_g3

0xf021,	// (0x000a0d35) popup_sp_fs_action_menu_bg_pane_g4

0xf029,	// (0x000a0d3d) popup_sp_fs_action_menu_bg_pane_g5

0xf031,	// (0x000a0d45) popup_sp_fs_action_menu_bg_pane_g6

0xf039,	// (0x000a0d4d) popup_sp_fs_action_menu_bg_pane_g7

0xf041,	// (0x000a0d55) popup_sp_fs_action_menu_bg_pane_g8

0xf049,	// (0x000a0d5d) popup_sp_fs_action_menu_bg_pane_g9

0xf051,	// (0x000a0d65) popup_sp_fs_action_menu_bg_pane_g10

0xf051,	// (0x000a0d65) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x000a0e3f) popup_sp_fs_action_menu_bg_pane_g

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g3_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g3_g1

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g3_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g3_g2

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g3_g3_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x000a0eed) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x000a0eed) list_medium_line_x2_t3_g3_g

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g3_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g3_t1

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g3_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g3_t2

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g3_t3_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x000a0ef4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x000a0ef4) list_medium_line_x2_t3_g3_t

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g2_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g2_g1

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g2_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x000a0efb) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x000a0efb) list_medium_line_x2_t3_g2_g

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g2_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g2_t1

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g2_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g2_t2

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g2_t3_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x000a0ef4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x000a0ef4) list_medium_line_x2_t3_g2_t

0xeeff,	// (0x000a0c13) list_medium_line_x2_t4_g4_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t4_g4_g1

0xeeff,	// (0x000a0c13) list_medium_line_x2_t4_g4_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t4_g4_g2

0xeeff,	// (0x000a0c13) list_medium_line_x2_t4_g4_g3_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t4_g4_g3

0xeeff,	// (0x000a0c13) list_medium_line_x2_t4_g4_g4_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x000a0f00) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x000a0f00) list_medium_line_x2_t4_g4_g

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g4_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g4_t1

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g4_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g4_t2

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g4_t3_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g4_t3

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g4_t4_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x000a0f09) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x000a0f09) list_medium_line_x2_t4_g4_t

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g4_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g4_g1

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g4_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g4_g2

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g4_g3_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g4_g3

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g4_g4_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x000a0f00) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x000a0f00) list_medium_line_x2_t2_g4_g

0xd354,	// (0x0009f068) list_medium_line_x2_t2_g4_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t2_g4_t1

0xd354,	// (0x0009f068) list_medium_line_x2_t2_g4_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x000a0ed0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x000a0ed0) list_medium_line_x2_t2_g4_t

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g3_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g3_g1

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g3_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g3_g2

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g3_g3_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x000a0eed) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x000a0eed) list_medium_line_x2_t2_g3_g

0xd354,	// (0x0009f068) list_medium_line_x2_t2_g3_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t2_g3_t1

0xd354,	// (0x0009f068) list_medium_line_x2_t2_g3_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x000a0ed0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x000a0ed0) list_medium_line_x2_t2_g3_t

0x2790,	// (0x000944a4) main_sp_fs_list_pane_ParamLimits

0x2790,	// (0x000944a4) main_sp_fs_list_pane

0xe231,	// (0x0009ff45) sp_fs_scroll_pane_ParamLimits

0xe231,	// (0x0009ff45) sp_fs_scroll_pane

0xd8d7,	// (0x0009f5eb) list_medium_line_x2_t3_t1

0xd8d7,	// (0x0009f5eb) list_medium_line_x2_t3_t2

0xd8d7,	// (0x0009f5eb) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x000a0fb6) list_medium_line_x2_t3_t

0xd8d7,	// (0x0009f5eb) list_medium_line_x3_t4_t1

0xd8d7,	// (0x0009f5eb) list_medium_line_x3_t4_t2

0xd8d7,	// (0x0009f5eb) list_medium_line_x3_t4_t3

0xd8d7,	// (0x0009f5eb) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x000a0fbd) list_medium_line_x3_t4_t

0xd8d7,	// (0x0009f5eb) list_medium_line_x4_t5_t1

0xd8d7,	// (0x0009f5eb) list_medium_line_x4_t5_t2

0xd8d7,	// (0x0009f5eb) list_medium_line_x4_t5_t3

0xd8d7,	// (0x0009f5eb) list_medium_line_x4_t5_t4

0xd8d7,	// (0x0009f5eb) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x000a0fc6) list_medium_line_x4_t5_t

0xeeff,	// (0x000a0c13) list_medium_line_t4_g4_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t4_g4_g1

0xeeff,	// (0x000a0c13) list_medium_line_t4_g4_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t4_g4_g2

0xeeff,	// (0x000a0c13) list_medium_line_t4_g4_g3_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t4_g4_g3

0xeeff,	// (0x000a0c13) list_medium_line_t4_g4_g4_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x000a0f00) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x000a0f00) list_medium_line_t4_g4_g

0xd354,	// (0x0009f068) list_medium_line_t4_g4_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t4_g4_t1

0xd354,	// (0x0009f068) list_medium_line_t4_g4_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t4_g4_t2

0xd354,	// (0x0009f068) list_medium_line_t4_g4_t3_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t4_g4_t3

0xd354,	// (0x0009f068) list_medium_line_t4_g4_t4_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x000a0f09) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x000a0f09) list_medium_line_t4_g4_t

0x283e,	// (0x00094552) chi_dic_find_pane_g1

0x418a,	// (0x00095e9e) main_tport_pane

0xd8d7,	// (0x0009f5eb) list_medium_line_plain_t1

0xeeff,	// (0x000a0c13) list_medium_line_t2_g2_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t2_g2_g1

0xeeff,	// (0x000a0c13) list_medium_line_t2_g2_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x000a0efb) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x000a0efb) list_medium_line_t2_g2_g

0xd354,	// (0x0009f068) list_medium_line_t2_g2_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t2_g2_t1

0xd354,	// (0x0009f068) list_medium_line_t2_g2_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x000a0ed0) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x000a0ed0) list_medium_line_t2_g2_t

0xb888,	// (0x0009d59c) aid_sp_fs_list_icon_a_sm

0xb890,	// (0x0009d5a4) aid_sp_fs_list_icon_d

0xb898,	// (0x0009d5ac) aid_sp_fs_text_primary

0xb8a1,	// (0x0009d5b5) aid_sp_fs_text_secondary

0xe14c,	// (0x0009fe60) list_medium_line

0xe14c,	// (0x0009fe60) list_medium_line_g2

0xe14c,	// (0x0009fe60) list_medium_line_g3

0xe14c,	// (0x0009fe60) list_medium_line_plain

0xe14c,	// (0x0009fe60) list_medium_line_plain_t2

0xe14c,	// (0x0009fe60) list_medium_line_plain_t3

0xe14c,	// (0x0009fe60) list_medium_line_right_icon

0xe14c,	// (0x0009fe60) list_medium_line_right_iconx2

0xe14c,	// (0x0009fe60) list_medium_line_t2

0xe14c,	// (0x0009fe60) list_medium_line_t2_g2

0xe14c,	// (0x0009fe60) list_medium_line_t2_g3

0xe14c,	// (0x0009fe60) list_medium_line_t2_right_icon

0xe14c,	// (0x0009fe60) list_medium_line_t2_right_iconx2

0xe14c,	// (0x0009fe60) list_medium_line_t3

0xe14c,	// (0x0009fe60) list_medium_line_t3_g2

0xe14c,	// (0x0009fe60) list_medium_line_t3_g3

0xe14c,	// (0x0009fe60) list_medium_line_t3_right_iconx2

0xe14c,	// (0x0009fe60) list_medium_line_t4_g4

0xe14c,	// (0x0009fe60) list_medium_line_x2

0xe14c,	// (0x0009fe60) list_medium_line_x2_t2_g2

0xe14c,	// (0x0009fe60) list_medium_line_x2_t2_g3

0xe14c,	// (0x0009fe60) list_medium_line_x2_t2_g4

0xe14c,	// (0x0009fe60) list_medium_line_x2_t3

0xe14c,	// (0x0009fe60) list_medium_line_x2_t3_g2

0xe14c,	// (0x0009fe60) list_medium_line_x2_t3_g3

0xe14c,	// (0x0009fe60) list_medium_line_x2_t3_g4

0xe14c,	// (0x0009fe60) list_medium_line_x2_t4_g2

0xe14c,	// (0x0009fe60) list_medium_line_x2_t4_g4

0xe14c,	// (0x0009fe60) list_medium_line_x3

0xe14c,	// (0x0009fe60) list_medium_line_x3_t4

0xe14c,	// (0x0009fe60) list_medium_line_x3_t4_g4

0xe14c,	// (0x0009fe60) list_medium_line_x4_t4

0xe14c,	// (0x0009fe60) list_medium_line_x4_t4_g7

0xe14c,	// (0x0009fe60) list_medium_line_x4_t5

0x73fe,	// (0x00099112) list_single_fs_dyc_pane_ParamLimits

0x73fe,	// (0x00099112) list_single_fs_dyc_pane

0xeeff,	// (0x000a0c13) list_medium_line_x4_t4_g7_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x4_t4_g7_g1

0xeeff,	// (0x000a0c13) list_medium_line_x4_t4_g7_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x4_t4_g7_g2

0xeeff,	// (0x000a0c13) list_medium_line_x4_t4_g7_g3_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x4_t4_g7_g3

0xeeff,	// (0x000a0c13) list_medium_line_x4_t4_g7_g4_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x4_t4_g7_g4

0xeeff,	// (0x000a0c13) list_medium_line_x4_t4_g7_g5_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x4_t4_g7_g5

0xeeff,	// (0x000a0c13) list_medium_line_x4_t4_g7_g6_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x4_t4_g7_g6

0xef0d,	// (0x000a0c21) list_medium_line_x4_t4_g7_g7_ParamLimits

0xef0d,	// (0x000a0c21) list_medium_line_x4_t4_g7_g7

0x0006,

0x0376,	// (0x0009208a) list_medium_line_x4_t4_g7_g_ParamLimits

0x0376,	// (0x0009208a) list_medium_line_x4_t4_g7_g

0xd354,	// (0x0009f068) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x4_t4_g7_t1

0xd354,	// (0x0009f068) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x4_t4_g7_t2

0xd354,	// (0x0009f068) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x4_t4_g7_t3

0xd9bf,	// (0x0009f6d3) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd9bf,	// (0x0009f6d3) list_medium_line_x4_t4_g7_t4

0xd9bf,	// (0x0009f6d3) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd9bf,	// (0x0009f6d3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb33,	// (0x000a1847) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb33,	// (0x000a1847) list_medium_line_x4_t4_g7_t

0x7b53,	// (0x00099867) list_single_dyc_row_pane_ParamLimits

0x7b53,	// (0x00099867) list_single_dyc_row_pane

0x83ce,	// (0x0009a0e2) call5_gesture_pane_ParamLimits

0x83ce,	// (0x0009a0e2) call5_gesture_pane

0x8424,	// (0x0009a138) call5_windows_pane_ParamLimits

0x8424,	// (0x0009a138) call5_windows_pane

0x84e5,	// (0x0009a1f9) call5_swipe_1_pane_cp_ParamLimits

0x84e5,	// (0x0009a1f9) call5_swipe_1_pane_cp

0x84f1,	// (0x0009a205) call5_swipe_2_pane_cp_ParamLimits

0x84f1,	// (0x0009a205) call5_swipe_2_pane_cp

0xd34c,	// (0x0009f060) call5_image_pane_cp

0x84fd,	// (0x0009a211) popup_call5_audio_first_window_cp_ParamLimits

0x84fd,	// (0x0009a211) popup_call5_audio_first_window_cp

0xc264,	// (0x0009df78) call5_swipe_1_pane_g1_cp_ParamLimits

0xc264,	// (0x0009df78) call5_swipe_1_pane_g1_cp

0xc292,	// (0x0009dfa6) call5_swipe_1_pane_g2_cp

0xc27d,	// (0x0009df91) call5_swipe_1_pane_t1_cp_ParamLimits

0xc27d,	// (0x0009df91) call5_swipe_1_pane_t1_cp

0xc264,	// (0x0009df78) call5_swipe_2_pane_g1_cp_ParamLimits

0xc264,	// (0x0009df78) call5_swipe_2_pane_g1_cp

0xc29a,	// (0x0009dfae) call5_swipe_2_pane_g2_cp

0xc2a2,	// (0x0009dfb6) call5_swipe_2_pane_t1_cp_ParamLimits

0xc2a2,	// (0x0009dfb6) call5_swipe_2_pane_t1_cp

0xe217,	// (0x0009ff2b) main_sp_fs_email_pane

0xc2b7,	// (0x0009dfcb) main_sp_fs_listscroll_pane_te

0x850b,	// (0x0009a21f) popup_sp_fs_action_menu_pane_ParamLimits

0x850b,	// (0x0009a21f) popup_sp_fs_action_menu_pane

0xd382,	// (0x0009f096) bg_sp_fs_ctrlbar_pane_g1

0xc2c0,	// (0x0009dfd4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc2c9,	// (0x0009dfdd) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc2d2,	// (0x0009dfe6) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd382,	// (0x0009f096) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc21,	// (0x000a1935) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x49a9,	// (0x000966bd) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x49a9,	// (0x000966bd) bg_sp_fs_ctrlbar_ddmenu_pane

0xc2db,	// (0x0009dfef) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc2db,	// (0x0009dfef) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc2e7,	// (0x0009dffb) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc2e7,	// (0x0009dffb) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc2a,	// (0x000a193e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc2a,	// (0x000a193e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc2f3,	// (0x0009e007) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc2f3,	// (0x0009e007) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd382,	// (0x0009f096) list_medium_line_t2_right_icon_g1

0xd8d7,	// (0x0009f5eb) list_medium_line_t2_right_icon_t1

0xd8d7,	// (0x0009f5eb) list_medium_line_t2_right_icon_t2

0x0001,

0xfc2f,	// (0x000a1943) list_medium_line_t2_right_icon_t

0xe25f,	// (0x0009ff73) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe25f,	// (0x0009ff73) bg_sp_fs_ctrlbar_pane

0x85a0,	// (0x0009a2b4) main_sp_fs_ctrlbar_button_pane_cp01

0x85aa,	// (0x0009a2be) main_sp_fs_ctrlbar_ddmenu_pane

0xc347,	// (0x0009e05b) main_sp_fs_ctrlbar_pane_g1

0xc353,	// (0x0009e067) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc34,	// (0x000a1948) main_sp_fs_ctrlbar_pane_g

0x85e8,	// (0x0009a2fc) main_sp_fs_ctrlbar_pane_t1

0x8627,	// (0x0009a33b) main_sp_fs_ctrlbar_pane

0x864b,	// (0x0009a35f) main_sp_fs_listscroll_pane_te_cp01

0x866b,	// (0x0009a37f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x866b,	// (0x0009a37f) popup_sp_fs_action_menu_pane_cp01

0xe217,	// (0x0009ff2b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe217,	// (0x0009ff2b) bg_sp_fs_highlight_list_pane_cp01

0xc37a,	// (0x0009e08e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc37a,	// (0x0009e08e) sp_fs_action_menu_list_gene_pane_g1

0xc389,	// (0x0009e09d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc389,	// (0x0009e09d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc42,	// (0x000a1956) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc42,	// (0x000a1956) sp_fs_action_menu_list_gene_pane_g

0xc396,	// (0x0009e0aa) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc396,	// (0x0009e0aa) sp_fs_action_menu_list_gene_pane_t1

0xc3ae,	// (0x0009e0c2) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc3ae,	// (0x0009e0c2) sp_fs_action_menu_list_gene_pane

0xc3d1,	// (0x0009e0e5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc3d1,	// (0x0009e0e5) popup_sp_fs_action_menu_bg_pane

0xc3df,	// (0x0009e0f3) sp_fs_action_menu_list_pane_ParamLimits

0xc3df,	// (0x0009e0f3) sp_fs_action_menu_list_pane

0x8690,	// (0x0009a3a4) sp_fs_scroll_pane_cp01_ParamLimits

0x8690,	// (0x0009a3a4) sp_fs_scroll_pane_cp01

0xd8d7,	// (0x0009f5eb) list_medium_line_plain_t2_t1

0xd8d7,	// (0x0009f5eb) list_medium_line_plain_t2_t2

0x0001,

0xfc2f,	// (0x000a1943) list_medium_line_plain_t2_t

0xd8d7,	// (0x0009f5eb) list_medium_line_plain_t3_t1

0xd8d7,	// (0x0009f5eb) list_medium_line_plain_t3_t2

0xd8d7,	// (0x0009f5eb) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x000a0fb6) list_medium_line_plain_t3_t

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g2_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g2_g1

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g2_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x000a0efb) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x000a0efb) list_medium_line_x2_t2_g2_g

0xd354,	// (0x0009f068) list_medium_line_x2_t2_g2_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t2_g2_t1

0xd354,	// (0x0009f068) list_medium_line_x2_t2_g2_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x000a0ed0) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x000a0ed0) list_medium_line_x2_t2_g2_t

0xeeff,	// (0x000a0c13) list_medium_line_x2_t4_g2_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t4_g2_g1

0xeeff,	// (0x000a0c13) list_medium_line_x2_t4_g2_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x000a0efb) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x000a0efb) list_medium_line_x2_t4_g2_g

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g2_t1

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g2_t2

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g2_t3

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g2_t4_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x000a0f09) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x000a0f09) list_medium_line_x2_t4_g2_t

0xd382,	// (0x0009f096) list_medium_line_t3_right_iconx2_g1

0xd382,	// (0x0009f096) list_medium_line_t3_right_iconx2_g2

0xd382,	// (0x0009f096) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x000a10d7) list_medium_line_t3_right_iconx2_g

0xd8d7,	// (0x0009f5eb) list_medium_line_t3_right_iconx2_t1

0xd8d7,	// (0x0009f5eb) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc2f,	// (0x000a1943) list_medium_line_t3_right_iconx2_t

0xeeff,	// (0x000a0c13) list_medium_line_x3_t4_g4_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x3_t4_g4_g1

0xeeff,	// (0x000a0c13) list_medium_line_x3_t4_g4_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x3_t4_g4_g2

0xeeff,	// (0x000a0c13) list_medium_line_x3_t4_g4_g3_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x3_t4_g4_g3

0xeeff,	// (0x000a0c13) list_medium_line_x3_t4_g4_g4_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x000a0f00) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x000a0f00) list_medium_line_x3_t4_g4_g

0xd354,	// (0x0009f068) list_medium_line_x3_t4_g4_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x3_t4_g4_t1

0xd354,	// (0x0009f068) list_medium_line_x3_t4_g4_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x3_t4_g4_t2

0xd354,	// (0x0009f068) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x3_t4_g4_t3

0xd354,	// (0x0009f068) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x000a0f09) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x000a0f09) list_medium_line_x3_t4_g4_t

0x86b6,	// (0x0009a3ca) list_single_dyc_row_text_pane_t1_ParamLimits

0x86b6,	// (0x0009a3ca) list_single_dyc_row_text_pane_t1

0x86ff,	// (0x0009a413) list_single_dyc_row_text_pane_t2_ParamLimits

0x86ff,	// (0x0009a413) list_single_dyc_row_text_pane_t2

0xc403,	// (0x0009e117) list_single_dyc_row_text_pane_t3_ParamLimits

0xc403,	// (0x0009e117) list_single_dyc_row_text_pane_t3

0x0005,

0xfc47,	// (0x000a195b) list_single_dyc_row_text_pane_t_ParamLimits

0xfc47,	// (0x000a195b) list_single_dyc_row_text_pane_t

0xc427,	// (0x0009e13b) list_single_dyc_row_pane_g1_ParamLimits

0xc427,	// (0x0009e13b) list_single_dyc_row_pane_g1

0xc433,	// (0x0009e147) list_single_dyc_row_pane_g2_ParamLimits

0xc433,	// (0x0009e147) list_single_dyc_row_pane_g2

0xc43f,	// (0x0009e153) list_single_dyc_row_pane_g3_ParamLimits

0xc43f,	// (0x0009e153) list_single_dyc_row_pane_g3

0xc44b,	// (0x0009e15f) list_single_dyc_row_pane_g4_ParamLimits

0xc44b,	// (0x0009e15f) list_single_dyc_row_pane_g4

0x0003,

0xfc54,	// (0x000a1968) list_single_dyc_row_pane_g_ParamLimits

0xfc54,	// (0x000a1968) list_single_dyc_row_pane_g

0xc457,	// (0x0009e16b) list_single_dyc_row_text_pane_ParamLimits

0xc457,	// (0x0009e16b) list_single_dyc_row_text_pane

0xe14c,	// (0x0009fe60) bg_sp_fs_scroll_pane

0xc476,	// (0x0009e18a) thumb_sp_fs_scroll_pane

0xeeff,	// (0x000a0c13) list_medium_line_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_g1

0xd354,	// (0x0009f068) list_medium_line_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t1

0xeeff,	// (0x000a0c13) list_medium_line_x2_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_g1

0xeeff,	// (0x000a0c13) list_medium_line_x2_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x000a0efb) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x000a0efb) list_medium_line_x2_g

0xd354,	// (0x0009f068) list_medium_line_x2_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t1

0xeeff,	// (0x000a0c13) list_medium_line_x3_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x3_g1

0xb0f4,	// (0x0009ce08) list_medium_line_x3_g2_ParamLimits

0xb0f4,	// (0x0009ce08) list_medium_line_x3_g2

0x0001,

0xfc5d,	// (0x000a1971) list_medium_line_x3_g_ParamLimits

0xfc5d,	// (0x000a1971) list_medium_line_x3_g

0xc47f,	// (0x0009e193) list_medium_line_x3_t1_ParamLimits

0xc47f,	// (0x0009e193) list_medium_line_x3_t1

0xc493,	// (0x0009e1a7) thumb_sp_fs_scroll_pane_g1

0xc49c,	// (0x0009e1b0) thumb_sp_fs_scroll_pane_g2

0xc4a5,	// (0x0009e1b9) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc62,	// (0x000a1976) thumb_sp_fs_scroll_pane_g

0xc493,	// (0x0009e1a7) bg_sp_fs_scroll_pane_g1

0xc49c,	// (0x0009e1b0) bg_sp_fs_scroll_pane_g2

0xc4a5,	// (0x0009e1b9) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc62,	// (0x000a1976) bg_sp_fs_scroll_pane_g

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g4_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g4_g1

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g4_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g4_g2

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g4_g3_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g4_g3

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g4_g4_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x000a0f00) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x000a0f00) list_medium_line_x2_t3_g4_g

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g4_t1

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g4_t2

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g4_t3_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x000a0ef4) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x000a0ef4) list_medium_line_x2_t3_g4_t

0xeeff,	// (0x000a0c13) list_medium_line_g2_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_g2_g1

0xeeff,	// (0x000a0c13) list_medium_line_g2_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x000a0efb) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x000a0efb) list_medium_line_g2_g

0xd354,	// (0x0009f068) list_medium_line_g2_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_g2_t1

0xeeff,	// (0x000a0c13) list_medium_line_t3_g2_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t3_g2_g1

0xeeff,	// (0x000a0c13) list_medium_line_t3_g2_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x000a0efb) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x000a0efb) list_medium_line_t3_g2_g

0xd354,	// (0x0009f068) list_medium_line_t3_g2_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t3_g2_t1

0xd354,	// (0x0009f068) list_medium_line_t3_g2_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t3_g2_t2

0xd354,	// (0x0009f068) list_medium_line_t3_g2_t3_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x000a0ef4) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x000a0ef4) list_medium_line_t3_g2_t

0xd382,	// (0x0009f096) list_medium_line_right_icon_g1

0xd8d7,	// (0x0009f5eb) list_medium_line_right_icon_t1

0xeeff,	// (0x000a0c13) list_medium_line_t2_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t2_g1

0xd354,	// (0x0009f068) list_medium_line_t2_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t2_t1

0xd354,	// (0x0009f068) list_medium_line_t2_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x000a0ed0) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x000a0ed0) list_medium_line_t2_t

0xeeff,	// (0x000a0c13) list_medium_line_t3_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t3_g1

0xd354,	// (0x0009f068) list_medium_line_t3_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t3_t1

0xd354,	// (0x0009f068) list_medium_line_t3_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t3_t2

0xd354,	// (0x0009f068) list_medium_line_t3_t3_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x000a0ef4) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x000a0ef4) list_medium_line_t3_t

0xeeff,	// (0x000a0c13) list_medium_line_g3_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_g3_g1

0xeeff,	// (0x000a0c13) list_medium_line_g3_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_g3_g2

0xeeff,	// (0x000a0c13) list_medium_line_g3_g3_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x000a0eed) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x000a0eed) list_medium_line_g3_g

0xd354,	// (0x0009f068) list_medium_line_g3_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_g3_t1

0xeeff,	// (0x000a0c13) list_medium_line_t2_g3_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t2_g3_g1

0xeeff,	// (0x000a0c13) list_medium_line_t2_g3_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t2_g3_g2

0xeeff,	// (0x000a0c13) list_medium_line_t2_g3_g3_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x000a0eed) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x000a0eed) list_medium_line_t2_g3_g

0xd354,	// (0x0009f068) list_medium_line_t2_g3_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t2_g3_t1

0xd354,	// (0x0009f068) list_medium_line_t2_g3_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x000a0ed0) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x000a0ed0) list_medium_line_t2_g3_t

0xeeff,	// (0x000a0c13) list_medium_line_t3_g3_g1_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t3_g3_g1

0xeeff,	// (0x000a0c13) list_medium_line_t3_g3_g2_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t3_g3_g2

0xeeff,	// (0x000a0c13) list_medium_line_t3_g3_g3_ParamLimits

0xeeff,	// (0x000a0c13) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x000a0eed) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x000a0eed) list_medium_line_t3_g3_g

0xd354,	// (0x0009f068) list_medium_line_t3_g3_t1_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t3_g3_t1

0xd354,	// (0x0009f068) list_medium_line_t3_g3_t2_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t3_g3_t2

0xd354,	// (0x0009f068) list_medium_line_t3_g3_t3_ParamLimits

0xd354,	// (0x0009f068) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x000a0ef4) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x000a0ef4) list_medium_line_t3_g3_t

0xd382,	// (0x0009f096) list_medium_line_right_iconx2_g1

0xd382,	// (0x0009f096) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x000a10d2) list_medium_line_right_iconx2_g

0xd8d7,	// (0x0009f5eb) list_medium_line_right_iconx2_t1

0xd382,	// (0x0009f096) list_medium_line_t2_right_iconx2_g1

0xd382,	// (0x0009f096) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x000a10d2) list_medium_line_t2_right_iconx2_g

0xd8d7,	// (0x0009f5eb) list_medium_line_t2_right_iconx2_t1

0xd8d7,	// (0x0009f5eb) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc2f,	// (0x000a1943) list_medium_line_t2_right_iconx2_t

0xd8d7,	// (0x0009f5eb) list_medium_line_x4_t4_t1

0xd8d7,	// (0x0009f5eb) list_medium_line_x4_t4_t2

0xd8d7,	// (0x0009f5eb) list_medium_line_x4_t4_t3

0xd8d7,	// (0x0009f5eb) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x000a0fbd) list_medium_line_x4_t4_t

0x8875,	// (0x0009a589) tport_appsw_pane_ParamLimits

0x8875,	// (0x0009a589) tport_appsw_pane

0x888c,	// (0x0009a5a0) tport_contact_pane_ParamLimits

0x888c,	// (0x0009a5a0) tport_contact_pane

0x88a4,	// (0x0009a5b8) tport_listscroll_pane_ParamLimits

0x88a4,	// (0x0009a5b8) tport_listscroll_pane

0x88b8,	// (0x0009a5cc) cell_tport_appsw_pane_ParamLimits

0x88b8,	// (0x0009a5cc) cell_tport_appsw_pane

0xe23d,	// (0x0009ff51) tport_appsw_pane_g1_ParamLimits

0xe23d,	// (0x0009ff51) tport_appsw_pane_g1

0xc4ae,	// (0x0009e1c2) tport_contact_pane_g1

0xc4b7,	// (0x0009e1cb) tport_contact_pane_t1

0xc4c5,	// (0x0009e1d9) tport_contact_pane_t2

0x0001,

0xfc69,	// (0x000a197d) tport_contact_pane_t

0xc4d3,	// (0x0009e1e7) list_tport_pane

0xc4dc,	// (0x0009e1f0) scroll_pane_cp_030

0x8902,	// (0x0009a616) cell_tport_appsw_pane_g1

0x8912,	// (0x0009a626) cell_tport_appsw_pane_t1

0x8920,	// (0x0009a634) grid_highlight_pane_cp019

0x8928,	// (0x0009a63c) list_tport_double_graphic_pane_ParamLimits

0x8928,	// (0x0009a63c) list_tport_double_graphic_pane

0xe217,	// (0x0009ff2b) list_highlight_pane_cp023_ParamLimits

0xe217,	// (0x0009ff2b) list_highlight_pane_cp023

0x893f,	// (0x0009a653) list_tport_double_graphic_pane_g1_ParamLimits

0x893f,	// (0x0009a653) list_tport_double_graphic_pane_g1

0x894c,	// (0x0009a660) list_tport_double_graphic_pane_t1_ParamLimits

0x894c,	// (0x0009a660) list_tport_double_graphic_pane_t1

0x8961,	// (0x0009a675) list_tport_double_graphic_pane_t2_ParamLimits

0x8961,	// (0x0009a675) list_tport_double_graphic_pane_t2

0x0001,

0xfc75,	// (0x000a1989) list_tport_double_graphic_pane_t_ParamLimits

0xfc75,	// (0x000a1989) list_tport_double_graphic_pane_t

0xe14c,	// (0x0009fe60) main_cale_note_pane

0x650a,	// (0x0009821e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x650a,	// (0x0009821e) cell_vitu2_function_top_wide_pane_cp01

0x7ef3,	// (0x00099c07) wait_bar_pane_cp05_ParamLimits

0xe217,	// (0x0009ff2b) listscroll_cmail_pane

0xc4e5,	// (0x0009e1f9) list_cmail_pane

0x8973,	// (0x0009a687) list_cmail_body_pane

0x898a,	// (0x0009a69e) list_single_cmail_header_caption_pane

0xc4f5,	// (0x0009e209) list_single_cmail_header_detail_pane_ParamLimits

0xc4f5,	// (0x0009e209) list_single_cmail_header_detail_pane

0xc527,	// (0x0009e23b) list_single_cmail_header_caption_pane_t1

0x89a7,	// (0x0009a6bb) list_single_cmail_header_detail_pane_g1_ParamLimits

0x89a7,	// (0x0009a6bb) list_single_cmail_header_detail_pane_g1

0xc53e,	// (0x0009e252) list_single_cmail_header_detail_pane_g2_ParamLimits

0xc53e,	// (0x0009e252) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc7a,	// (0x000a198e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc7a,	// (0x000a198e) list_single_cmail_header_detail_pane_g

0xc557,	// (0x0009e26b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xc557,	// (0x0009e26b) list_single_cmail_header_detail_pane_t1

0xc5b7,	// (0x0009e2cb) list_single_cmail_header_editor_pane_bg_ParamLimits

0xc5b7,	// (0x0009e2cb) list_single_cmail_header_editor_pane_bg

0xc030,	// (0x0009dd44) list_cmail_body_pane_g1

0xc5ce,	// (0x0009e2e2) list_cmail_body_pane_t1

0xb260,	// (0x0009cf74) list_single_cmail_header_editor_pane_bg_g1

0xd597,	// (0x0009f2ab) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb270,	// (0x0009cf84) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb268,	// (0x0009cf7c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb4cb,	// (0x0009d1df) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb290,	// (0x0009cfa4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb280,	// (0x0009cf94) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb288,	// (0x0009cf9c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd577,	// (0x0009f28b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x89bf,	// (0x0009a6d3) calenote_gesture_pane_ParamLimits

0x89bf,	// (0x0009a6d3) calenote_gesture_pane

0x89df,	// (0x0009a6f3) calenote_window_pane_ParamLimits

0x89df,	// (0x0009a6f3) calenote_window_pane

0xc5dc,	// (0x0009e2f0) popup_note_window_cp01

0x89fb,	// (0x0009a70f) calenote_swipe_1_pane_ParamLimits

0x89fb,	// (0x0009a70f) calenote_swipe_1_pane

0x84f1,	// (0x0009a205) calenote_swipe_2_pane_ParamLimits

0x84f1,	// (0x0009a205) calenote_swipe_2_pane

0xc264,	// (0x0009df78) calenote_swipe_1_pane_g1_ParamLimits

0xc264,	// (0x0009df78) calenote_swipe_1_pane_g1

0xc271,	// (0x0009df85) calenote_swipe_1_pane_g2_ParamLimits

0xc271,	// (0x0009df85) calenote_swipe_1_pane_g2

0x0001,

0xfc17,	// (0x000a192b) calenote_swipe_1_pane_g_ParamLimits

0xfc17,	// (0x000a192b) calenote_swipe_1_pane_g

0xc5ee,	// (0x0009e302) calenote_swipe_1_pane_t1_ParamLimits

0xc5ee,	// (0x0009e302) calenote_swipe_1_pane_t1

0xc264,	// (0x0009df78) calenote_swipe_2_pane_g1_ParamLimits

0xc264,	// (0x0009df78) calenote_swipe_2_pane_g1

0xc60d,	// (0x0009e321) calenote_swipe_2_pane_g2_ParamLimits

0xc60d,	// (0x0009e321) calenote_swipe_2_pane_g2

0x0001,

0xfc86,	// (0x000a199a) calenote_swipe_2_pane_g_ParamLimits

0xfc86,	// (0x000a199a) calenote_swipe_2_pane_g

0xc619,	// (0x0009e32d) calenote_swipe_2_pane_t1_ParamLimits

0xc619,	// (0x0009e32d) calenote_swipe_2_pane_t1

0xe14c,	// (0x0009fe60) main_mup_navstr_pane

0x5350,	// (0x00097064) main_mup3_pane_t7_ParamLimits

0x5350,	// (0x00097064) main_mup3_pane_t7

0xade3,	// (0x0009caf7) main_mp4_pane_g6_ParamLimits

0xade3,	// (0x0009caf7) main_mp4_pane_g6

0xb034,	// (0x0009cd48) main_image3_pane_t4_ParamLimits

0xb034,	// (0x0009cd48) main_image3_pane_t4

0x8a10,	// (0x0009a724) popup_navstr_preview_pane_ParamLimits

0x8a10,	// (0x0009a724) popup_navstr_preview_pane

0x8a20,	// (0x0009a734) scroll_navstr_pane_ParamLimits

0x8a20,	// (0x0009a734) scroll_navstr_pane

0xe14c,	// (0x0009fe60) bg_popup_preview_window_pane_cp04

0xc640,	// (0x0009e354) popup_navstr_preview_pane_t1

0x8a34,	// (0x0009a748) scroll_navstr_pane_g1_ParamLimits

0x8a34,	// (0x0009a748) scroll_navstr_pane_g1

0x8a48,	// (0x0009a75c) scroll_navstr_pane_t1_ParamLimits

0x8a48,	// (0x0009a75c) scroll_navstr_pane_t1

0xc5e5,	// (0x0009e2f9) bg_button_pane_cp014

0xc5e5,	// (0x0009e2f9) bg_button_pane_cp030

0x8374,	// (0x0009a088) list_double_fisheye_pane_g4_ParamLimits

0x8374,	// (0x0009a088) list_double_fisheye_pane_g4

0x8380,	// (0x0009a094) list_double_fisheye_pane_g5_ParamLimits

0x8380,	// (0x0009a094) list_double_fisheye_pane_g5

0xe231,	// (0x0009ff45) sp_fs_scroll_pane_cp03

0xc347,	// (0x0009e05b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc353,	// (0x0009e067) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc34,	// (0x000a1948) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x85e8,	// (0x0009a2fc) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc4ed,	// (0x0009e201) sp_fs_scroll_pane_cp02

0xd2a8,	// (0x0009efbc) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd2a8,	// (0x0009efbc) popup_sp_fs_calendar_preview_list_single_pane

0xe14c,	// (0x0009fe60) main_cam6_pano_pane

0xa2c9,	// (0x0009bfdd) main_mup3_pane_ParamLimits

0xe14c,	// (0x0009fe60) main_phacti_pane

0x7dc4,	// (0x00099ad8) bg_button_pane_cp11

0x7dde,	// (0x00099af2) main_mobtv_info_pane_g2_ParamLimits

0x7dde,	// (0x00099af2) main_mobtv_info_pane_g2

0x0001,

0xfb94,	// (0x000a18a8) main_mobtv_info_pane_g_ParamLimits

0xfb94,	// (0x000a18a8) main_mobtv_info_pane_g

0x7fbb,	// (0x00099ccf) sc_clock_pane_t5_ParamLimits

0x7fbb,	// (0x00099ccf) sc_clock_pane_t5

0x81ef,	// (0x00099f03) main_radioblah_pane_g1_ParamLimits

0xc196,	// (0x0009deaa) main_radioblah_pane_t3_ParamLimits

0xc196,	// (0x0009deaa) main_radioblah_pane_t3

0xc1ae,	// (0x0009dec2) main_radioblah_pane_t4_ParamLimits

0xc1ae,	// (0x0009dec2) main_radioblah_pane_t4

0x8217,	// (0x00099f2b) main_radioblah_text_pane_ParamLimits

0x8217,	// (0x00099f2b) main_radioblah_text_pane

0x8229,	// (0x00099f3d) main_radioblah_info_pane_g1_ParamLimits

0x82c2,	// (0x00099fd6) main_radioblah_info_pane_t4_ParamLimits

0x82c2,	// (0x00099fd6) main_radioblah_info_pane_t4

0xe217,	// (0x0009ff2b) main_sp_fs_calendar_pane

0x8a5f,	// (0x0009a773) main_phacti_pane_g1

0x8a67,	// (0x0009a77b) phacti_note_pane_ParamLimits

0x8a67,	// (0x0009a77b) phacti_note_pane

0xc657,	// (0x0009e36b) phacti_term_pane_ParamLimits

0xc657,	// (0x0009e36b) phacti_term_pane

0xc66c,	// (0x0009e380) phacti_note_pane_t1_ParamLimits

0xc66c,	// (0x0009e380) phacti_note_pane_t1

0xc683,	// (0x0009e397) phacti_term_pane_g1

0xc68b,	// (0x0009e39f) phacti_term_pane_t1_ParamLimits

0xc68b,	// (0x0009e39f) phacti_term_pane_t1

0xc6b5,	// (0x0009e3c9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc6bd,	// (0x0009e3d1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc90,	// (0x000a19a4) popup_sp_fs_calendar_preview_list_single_pane_g

0xc6c5,	// (0x0009e3d9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc6c5,	// (0x0009e3d9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc6db,	// (0x0009e3ef) aid_popup_sp_fs_bg_corner_pane

0xd382,	// (0x0009f096) popup_sp_fs_calendar_preview_bg_pane_g1

0xe14c,	// (0x0009fe60) popup_sp_fs_calendar_preview_bg_pane

0xc6e3,	// (0x0009e3f7) popup_sp_fs_calendar_preview_list_pane

0xe25f,	// (0x0009ff73) bg_main_sp_fs_cale_pane_ParamLimits

0xe25f,	// (0x0009ff73) bg_main_sp_fs_cale_pane

0xc6f4,	// (0x0009e408) listscroll_cale_mrui_pane_ParamLimits

0xc6f4,	// (0x0009e408) listscroll_cale_mrui_pane

0xc709,	// (0x0009e41d) listscroll_sp_fs_schedule_track_pane

0xc712,	// (0x0009e426) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xc712,	// (0x0009e426) main_sp_fs_ctrlbar_pane_cp01

0xc725,	// (0x0009e439) main_sp_fs_ribbon_pane

0xc72d,	// (0x0009e441) popup_sp_fs_cale_preview_window

0x8adc,	// (0x0009a7f0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8adc,	// (0x0009a7f0) list_single_sp_fs_schedule_track_pane

0xe217,	// (0x0009ff2b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe217,	// (0x0009ff2b) bg_sp_fs_highlight_list_pane_cp03

0x8af0,	// (0x0009a804) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8af0,	// (0x0009a804) list_single_sp_fs_schedule_track_pane_g1

0x8afc,	// (0x0009a810) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8afc,	// (0x0009a810) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc95,	// (0x000a19a9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc95,	// (0x000a19a9) list_single_sp_fs_schedule_track_pane_g

0x8b08,	// (0x0009a81c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8b08,	// (0x0009a81c) list_single_sp_fs_schedule_track_pane_t1

0x8b2a,	// (0x0009a83e) sp_fs_schedule_track_pane_ParamLimits

0x8b2a,	// (0x0009a83e) sp_fs_schedule_track_pane

0xc73f,	// (0x0009e453) sp_fs_schedule_track_pane_g1

0xc747,	// (0x0009e45b) sp_fs_schedule_track_pane_g2

0xc74f,	// (0x0009e463) sp_fs_schedule_track_pane_g3

0xc757,	// (0x0009e46b) sp_fs_schedule_track_pane_g4

0xc75f,	// (0x0009e473) sp_fs_schedule_track_pane_g5

0x0004,

0xfc9a,	// (0x000a19ae) sp_fs_schedule_track_pane_g

0xb260,	// (0x0009cf74) bg_sp_fs_schedule_viewer_highlight_g1

0xd597,	// (0x0009f2ab) bg_sp_fs_schedule_viewer_highlight_g2

0xb268,	// (0x0009cf7c) bg_sp_fs_schedule_viewer_highlight_g3

0xb270,	// (0x0009cf84) bg_sp_fs_schedule_viewer_highlight_g4

0xb4cb,	// (0x0009d1df) bg_sp_fs_schedule_viewer_highlight_g5

0xb280,	// (0x0009cf94) bg_sp_fs_schedule_viewer_highlight_g6

0xb288,	// (0x0009cf9c) bg_sp_fs_schedule_viewer_highlight_g7

0xb290,	// (0x0009cfa4) bg_sp_fs_schedule_viewer_highlight_g8

0xd577,	// (0x0009f28b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfca5,	// (0x000a19b9) bg_sp_fs_schedule_viewer_highlight_g

0xe14c,	// (0x0009fe60) bg_main_sp_fs_ribbon_pane

0x8b3f,	// (0x0009a853) main_sp_fs_ribbon_pane_g1

0xc767,	// (0x0009e47b) main_sp_fs_ribbon_pane_t1

0x8b48,	// (0x0009a85c) main_sp_fs_ribbon_pane_t2

0xc776,	// (0x0009e48a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcb8,	// (0x000a19cc) main_sp_fs_ribbon_pane_t

0xc785,	// (0x0009e499) main_sp_fs_ribbon_scheduler_pane

0xc78d,	// (0x0009e4a1) bg_main_sp_fs_ribbon_pane_g1

0xc796,	// (0x0009e4aa) bg_main_sp_fs_ribbon_pane_g2

0xc79f,	// (0x0009e4b3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcbf,	// (0x000a19d3) bg_main_sp_fs_ribbon_pane_g

0xc7a7,	// (0x0009e4bb) main_sp_fs_ribbon_scheduler_pane_g1

0xc7b0,	// (0x0009e4c4) main_sp_fs_ribbon_scheduler_pane_g2

0xc7b9,	// (0x0009e4cd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcc6,	// (0x000a19da) main_sp_fs_ribbon_scheduler_pane_g

0xc7c2,	// (0x0009e4d6) list_cale_mrui_pane

0x8b57,	// (0x0009a86b) sp_fs_scroll_pane_cp07_ParamLimits

0x8b57,	// (0x0009a86b) sp_fs_scroll_pane_cp07

0x8b73,	// (0x0009a887) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b73,	// (0x0009a887) bg_sp_fs_schedule_viewer_highlight

0xc7cf,	// (0x0009e4e3) list_single_sp_fs_schedule_track_pane_cp01

0xc7d7,	// (0x0009e4eb) list_sp_fs_schedule_track_pane

0xc7df,	// (0x0009e4f3) sp_fs_scroll_pane_cp06_ParamLimits

0xc7df,	// (0x0009e4f3) sp_fs_scroll_pane_cp06

0xd382,	// (0x0009f096) bgmain_sp_fs_calendar_pane_g1

0x8b85,	// (0x0009a899) list_single_cale_mrui_pane_ParamLimits

0x8b85,	// (0x0009a899) list_single_cale_mrui_pane

0xc7f1,	// (0x0009e505) list_single_cale_mrui_row_pane_ParamLimits

0xc7f1,	// (0x0009e505) list_single_cale_mrui_row_pane

0xc7fe,	// (0x0009e512) list_single_cale_mrui_row_pane_g1_ParamLimits

0xc7fe,	// (0x0009e512) list_single_cale_mrui_row_pane_g1

0xc843,	// (0x0009e557) list_single_cale_mrui_row_pane_t1_ParamLimits

0xc843,	// (0x0009e557) list_single_cale_mrui_row_pane_t1

0x8ba5,	// (0x0009a8b9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8ba5,	// (0x0009a8b9) list_single_cale_mrui_row_pane_t2

0xc855,	// (0x0009e569) list_single_cale_mrui_row_pane_t3_ParamLimits

0xc855,	// (0x0009e569) list_single_cale_mrui_row_pane_t3

0xc884,	// (0x0009e598) list_single_cale_mrui_row_pane_t4_ParamLimits

0xc884,	// (0x0009e598) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcd4,	// (0x000a19e8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcd4,	// (0x000a19e8) list_single_cale_mrui_row_pane_t

0x8c0b,	// (0x0009a91f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8c0b,	// (0x0009a91f) list_single_cmail_header_editor_pane_bg_cp01

0x8c2f,	// (0x0009a943) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8c2f,	// (0x0009a943) list_single_cmail_header_editor_pane_bg_cp02

0x8c4f,	// (0x0009a963) main_radioblah_text_pane_t1_ParamLimits

0x8c4f,	// (0x0009a963) main_radioblah_text_pane_t1

0xc8b5,	// (0x0009e5c9) cam6_indi_pane_cp01

0xc8bd,	// (0x0009e5d1) cam6_mode_pane_cp01

0xc8c5,	// (0x0009e5d9) cam6_pano_pane

0xc8ce,	// (0x0009e5e2) cam6_zoom_pane_cp01

0xc8d8,	// (0x0009e5ec) cam6_pano_image_pane

0xc8e1,	// (0x0009e5f5) cam6_pano_pane_g1

0xc030,	// (0x0009dd44) cam6_pano_pane_g2

0xc8ea,	// (0x0009e5fe) cam6_pano_pane_g3

0xc8f3,	// (0x0009e607) cam6_pano_pane_g4

0xaad6,	// (0x0009c7ea) cam6_pano_pane_g5

0xc8fc,	// (0x0009e610) cam6_pano_pane_g6

0xc904,	// (0x0009e618) cam6_pano_pane_g7

0xc90c,	// (0x0009e620) cam6_pano_pane_g8

0xc915,	// (0x0009e629) cam6_pano_pane_g9

0x0008,

0xfcdd,	// (0x000a19f1) cam6_pano_pane_g

0xe14c,	// (0x0009fe60) main_browser_tag_pane

0xc638,	// (0x0009e34c) grid_navstr_albumart_pane

0xc920,	// (0x0009e634) cell_navstr_albumart_pane_ParamLimits

0xc920,	// (0x0009e634) cell_navstr_albumart_pane

0xc93c,	// (0x0009e650) cell_navstr_albumart_pane_g1

0x3d1b,	// (0x00095a2f) cell_navstr_albumart_pane_g2

0x3d2b,	// (0x00095a3f) cell_navstr_albumart_pane_g3

0x3d23,	// (0x00095a37) cell_navstr_albumart_pane_g4

0x0003,

0xfcf0,	// (0x000a1a04) cell_navstr_albumart_pane_g

0x8c6a,	// (0x0009a97e) bt_list_pane_ParamLimits

0x8c6a,	// (0x0009a97e) bt_list_pane

0x8c80,	// (0x0009a994) bt_list_pane_t1

0x8c8f,	// (0x0009a9a3) bt_list_pane_t2

0x0001,

0xfcf9,	// (0x000a1a0d) bt_list_pane_t

0xe14c,	// (0x0009fe60) main_cale_prevew_pane

0x8c9e,	// (0x0009a9b2) popup_cale_preview_window_ParamLimits

0x8c9e,	// (0x0009a9b2) popup_cale_preview_window

0xe217,	// (0x0009ff2b) bg_popup_preview_window_pane_cp05_ParamLimits

0xe217,	// (0x0009ff2b) bg_popup_preview_window_pane_cp05

0xc944,	// (0x0009e658) list_cale_preview_pane_ParamLimits

0xc944,	// (0x0009e658) list_cale_preview_pane

0x8cbb,	// (0x0009a9cf) list_double_cale_preview_pane_ParamLimits

0x8cbb,	// (0x0009a9cf) list_double_cale_preview_pane

0x8ccf,	// (0x0009a9e3) list_single_cale_preview_pane_ParamLimits

0x8ccf,	// (0x0009a9e3) list_single_cale_preview_pane

0x8ce7,	// (0x0009a9fb) list_single_cale_preview_pane_g1

0x8cef,	// (0x0009aa03) list_single_cale_preview_pane_t1_ParamLimits

0x8cef,	// (0x0009aa03) list_single_cale_preview_pane_t1

0x8d04,	// (0x0009aa18) list_double_cale_preview_pane_g1

0x8d0c,	// (0x0009aa20) list_double_cale_preview_pane_t1_ParamLimits

0x8d0c,	// (0x0009aa20) list_double_cale_preview_pane_t1

0x8d21,	// (0x0009aa35) list_double_cale_preview_pane_t2_ParamLimits

0x8d21,	// (0x0009aa35) list_double_cale_preview_pane_t2

0x0001,

0xfcfe,	// (0x000a1a12) list_double_cale_preview_pane_t_ParamLimits

0xfcfe,	// (0x000a1a12) list_double_cale_preview_pane_t

0xe14c,	// (0x0009fe60) main_ezdial_pane

0xe217,	// (0x0009ff2b) main_sp_fs_email_pane_ParamLimits

0x8553,	// (0x0009a267) cmail_ddmenu_btn01_pane_ParamLimits

0x8553,	// (0x0009a267) cmail_ddmenu_btn01_pane

0x8566,	// (0x0009a27a) cmail_ddmenu_btn02_pane_ParamLimits

0x8566,	// (0x0009a27a) cmail_ddmenu_btn02_pane

0x8589,	// (0x0009a29d) cmail_ddmenu_btn03_pane_ParamLimits

0x8589,	// (0x0009a29d) cmail_ddmenu_btn03_pane

0x8627,	// (0x0009a33b) main_sp_fs_ctrlbar_pane_ParamLimits

0x864b,	// (0x0009a35f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8973,	// (0x0009a687) list_cmail_body_pane_ParamLimits

0xc535,	// (0x0009e249) bg_button_pane_cp12

0xc54a,	// (0x0009e25e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xc54a,	// (0x0009e25e) list_single_cmail_header_detail_pane_g3

0xc593,	// (0x0009e2a7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc593,	// (0x0009e2a7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc81,	// (0x000a1995) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc81,	// (0x000a1995) list_single_cmail_header_detail_pane_t

0xc6a0,	// (0x0009e3b4) phacti_term_pane_t2_ParamLimits

0xc6a0,	// (0x0009e3b4) phacti_term_pane_t2

0x0001,

0xfc8b,	// (0x000a199f) phacti_term_pane_t_ParamLimits

0xfc8b,	// (0x000a199f) phacti_term_pane_t

0xc950,	// (0x0009e664) aid_size_list_single_double

0x8d39,	// (0x0009aa4d) popup_ezdial_listscroll_window

0x8d55,	// (0x0009aa69) popup_number_entry_window_cp01

0xd34c,	// (0x0009f060) bg_popup_call_pane_cp09

0xc95c,	// (0x0009e670) ezdial_list_pane

0xc964,	// (0x0009e678) scroll_pane_cp23

0xe25f,	// (0x0009ff73) bg_button_pane_cp028_ParamLimits

0xe25f,	// (0x0009ff73) bg_button_pane_cp028

0x8d63,	// (0x0009aa77) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8d63,	// (0x0009aa77) cmail_ddmenu_btn01_pane_g1

0x8d72,	// (0x0009aa86) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8d72,	// (0x0009aa86) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd03,	// (0x000a1a17) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd03,	// (0x000a1a17) cmail_ddmenu_btn01_pane_g

0xc96c,	// (0x0009e680) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc96c,	// (0x0009e680) cmail_ddmenu_btn01_pane_t1

0xe25f,	// (0x0009ff73) bg_button_pane_cp029_ParamLimits

0xe25f,	// (0x0009ff73) bg_button_pane_cp029

0x8d88,	// (0x0009aa9c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8d88,	// (0x0009aa9c) cmail_ddmenu_btn02_pane_g1

0x8da3,	// (0x0009aab7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8da3,	// (0x0009aab7) cmail_ddmenu_btn02_pane_t1

0xe217,	// (0x0009ff2b) bg_button_pane_cp031_ParamLimits

0xe217,	// (0x0009ff2b) bg_button_pane_cp031

0x8d88,	// (0x0009aa9c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8d88,	// (0x0009aa9c) cmail_ddmenu_btn03_pane_g1

0x8da3,	// (0x0009aab7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8da3,	// (0x0009aab7) cmail_ddmenu_btn03_pane_t1

0x5cde,	// (0x000979f2) cell_dialer2_keypad_pane_t1_ParamLimits

0x5cf8,	// (0x00097a0c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5cf8,	// (0x00097a0c) cell_dialer2_keypad_pane_t1_copy1

0x7be5,	// (0x000998f9) ncimui_group_button_pane

0xe217,	// (0x0009ff2b) main_sp_fs_calendar_pane_ParamLimits

0x898a,	// (0x0009a69e) list_single_cmail_header_caption_pane_ParamLimits

0xc6eb,	// (0x0009e3ff) aid_recal_txt_sm_pane

0xe14c,	// (0x0009fe60) mian_recal_day_pane

0xc72d,	// (0x0009e441) popup_sp_fs_cale_preview_window_ParamLimits

0xc982,	// (0x0009e696) list_recal_day_pane

0xc9c5,	// (0x0009e6d9) list_single_recal_day_pane_ParamLimits

0xc9c5,	// (0x0009e6d9) list_single_recal_day_pane

0xc9d7,	// (0x0009e6eb) list_single_recal_day_pane_g1_ParamLimits

0xc9d7,	// (0x0009e6eb) list_single_recal_day_pane_g1

0xc9e3,	// (0x0009e6f7) list_single_recal_day_pane_g2_ParamLimits

0xc9e3,	// (0x0009e6f7) list_single_recal_day_pane_g2

0xc9ef,	// (0x0009e703) list_single_recal_day_pane_g3_ParamLimits

0xc9ef,	// (0x0009e703) list_single_recal_day_pane_g3

0x8dca,	// (0x0009aade) list_single_recal_day_pane_g4_ParamLimits

0x8dca,	// (0x0009aade) list_single_recal_day_pane_g4

0xc9fb,	// (0x0009e70f) list_single_recal_day_pane_g5_ParamLimits

0xc9fb,	// (0x0009e70f) list_single_recal_day_pane_g5

0xca07,	// (0x0009e71b) list_single_recal_day_pane_g6_ParamLimits

0xca07,	// (0x0009e71b) list_single_recal_day_pane_g6

0x0004,

0xfd12,	// (0x000a1a26) list_single_recal_day_pane_g_ParamLimits

0xfd12,	// (0x000a1a26) list_single_recal_day_pane_g

0xca1b,	// (0x0009e72f) list_single_recal_day_pane_t1

0xca2d,	// (0x0009e741) list_single_recal_day_pane_t2

0x0001,

0xfd1d,	// (0x000a1a31) list_single_recal_day_pane_t

0x8de2,	// (0x0009aaf6) ncimui_query_button_pane_ParamLimits

0x8de2,	// (0x0009aaf6) ncimui_query_button_pane

0x8df2,	// (0x0009ab06) ncimui_query_button_pane_t1_ParamLimits

0x8df2,	// (0x0009ab06) ncimui_query_button_pane_t1

0xca3f,	// (0x0009e753) ncimui_query_button_pane_t2_ParamLimits

0xca3f,	// (0x0009e753) ncimui_query_button_pane_t2

0x0001,

0xfd22,	// (0x000a1a36) ncimui_query_button_pane_t_ParamLimits

0xfd22,	// (0x000a1a36) ncimui_query_button_pane_t

0x8e05,	// (0x0009ab19) query_button_pane_ParamLimits

0x8e05,	// (0x0009ab19) query_button_pane

0xe14c,	// (0x0009fe60) bg_button_pane_cp0028

0xca52,	// (0x0009e766) query_button_pane_t1

0x418a,	// (0x00095e9e) main_tport_pane_ParamLimits

0x8834,	// (0x0009a548) bg_popup_window_pane_cp01_ParamLimits

0x8834,	// (0x0009a548) bg_popup_window_pane_cp01

0x884d,	// (0x0009a561) heading_pane_cp08_ParamLimits

0x884d,	// (0x0009a561) heading_pane_cp08

0x8860,	// (0x0009a574) heading_pane_cp07_ParamLimits

0x8860,	// (0x0009a574) heading_pane_cp07

0x8902,	// (0x0009a616) cell_tport_appsw_pane_g2

0x0002,

0xfc6e,	// (0x000a1982) cell_tport_appsw_pane_g

0x2de3,	// (0x00094af7) input_candi_list_open_g1

0xd783,	// (0x0009f497) list_cale_time_pane_g6_ParamLimits

0xd783,	// (0x0009f497) list_cale_time_pane_g6

0x4c6b,	// (0x0009697f) aid_size_touch_calib_1_ParamLimits

0x4c6b,	// (0x0009697f) aid_size_touch_calib_1

0x4c7d,	// (0x00096991) aid_size_touch_calib_2_ParamLimits

0x4c7d,	// (0x00096991) aid_size_touch_calib_2

0x4c95,	// (0x000969a9) aid_size_touch_calib_3_ParamLimits

0x4c95,	// (0x000969a9) aid_size_touch_calib_3

0x4cb3,	// (0x000969c7) aid_size_touch_calib_4_ParamLimits

0x4cb3,	// (0x000969c7) aid_size_touch_calib_4

0x4ccb,	// (0x000969df) main_touch_calib_button_group_pane_ParamLimits

0x4ccb,	// (0x000969df) main_touch_calib_button_group_pane

0x4ce3,	// (0x000969f7) main_touch_calib_pane_g1_ParamLimits

0x4cf5,	// (0x00096a09) main_touch_calib_pane_g2_ParamLimits

0x4d07,	// (0x00096a1b) main_touch_calib_pane_g3_ParamLimits

0x4d19,	// (0x00096a2d) main_touch_calib_pane_g4_ParamLimits

0xf6bf,	// (0x000a13d3) main_touch_calib_pane_g_ParamLimits

0x4d2b,	// (0x00096a3f) main_touch_calib_pane_t1_ParamLimits

0x4d45,	// (0x00096a59) main_touch_calib_pane_t2_ParamLimits

0x4d5f,	// (0x00096a73) main_touch_calib_pane_t3_ParamLimits

0x4d73,	// (0x00096a87) main_touch_calib_pane_t4_ParamLimits

0x4d89,	// (0x00096a9d) main_touch_calib_pane_t5_ParamLimits

0xf6c8,	// (0x000a13dc) main_touch_calib_pane_t_ParamLimits

0xa889,	// (0x0009c59d) list_single_fp_cale_pane_g3_ParamLimits

0xa889,	// (0x0009c59d) list_single_fp_cale_pane_g3

0xa2c9,	// (0x0009bfdd) bg_button_pane_cp012_ParamLimits

0xa2c9,	// (0x0009bfdd) bg_vkb2_func_pane_cp03_ParamLimits

0x6d38,	// (0x00098a4c) cell_vitu2_function_top_pane_g1_ParamLimits

0xa2c9,	// (0x0009bfdd) bg_vkb2_func_pane_cp04_ParamLimits

0x7b70,	// (0x00099884) main_ncimui_button_group_pane_ParamLimits

0x7b70,	// (0x00099884) main_ncimui_button_group_pane

0x7bd0,	// (0x000998e4) main_ncimui_pane_t3_ParamLimits

0x7bd0,	// (0x000998e4) main_ncimui_pane_t3

0xc64e,	// (0x0009e362) phacti_button_group_pane

0xc950,	// (0x0009e664) aid_size_list_single_double_ParamLimits

0x8d39,	// (0x0009aa4d) popup_ezdial_listscroll_window_ParamLimits

0x8d55,	// (0x0009aa69) popup_number_entry_window_cp01_ParamLimits

0x8e18,	// (0x0009ab2c) phacti_button_pane_ParamLimits

0x8e18,	// (0x0009ab2c) phacti_button_pane

0xe14c,	// (0x0009fe60) bg_button_pane_cp14

0xca60,	// (0x0009e774) phacti_button_pane_t1

0x8e29,	// (0x0009ab3d) main_touch_calib_button_pane_ParamLimits

0x8e29,	// (0x0009ab3d) main_touch_calib_button_pane

0xef71,	// (0x000a0c85) bg_button_pane_cp18_ParamLimits

0xef71,	// (0x000a0c85) bg_button_pane_cp18

0xca6e,	// (0x0009e782) main_touch_calib_button_pane_t1_ParamLimits

0xca6e,	// (0x0009e782) main_touch_calib_button_pane_t1

0xca84,	// (0x0009e798) main_touch_calib_button_pane_t2_ParamLimits

0xca84,	// (0x0009e798) main_touch_calib_button_pane_t2

0x0001,

0xfd27,	// (0x000a1a3b) main_touch_calib_button_pane_t_ParamLimits

0xfd27,	// (0x000a1a3b) main_touch_calib_button_pane_t

0xe14c,	// (0x0009fe60) cell_ncimui_button_pane

0xe14c,	// (0x0009fe60) bg_button_pane_cp032

0xcaa2,	// (0x0009e7b6) cell_ncimui_button_pane_t1

0xb012,	// (0x0009cd26) image3_infobar_pane_ParamLimits

0xb012,	// (0x0009cd26) image3_infobar_pane

0x7fe7,	// (0x00099cfb) fs_bigclock_status_pane_ParamLimits

0x7fe7,	// (0x00099cfb) fs_bigclock_status_pane

0x7ff4,	// (0x00099d08) main_fs_bigclock_clock_pane_ParamLimits

0x7ff4,	// (0x00099d08) main_fs_bigclock_clock_pane

0x8026,	// (0x00099d3a) main_fs_bigclock_indi_pane_ParamLimits

0x8026,	// (0x00099d3a) main_fs_bigclock_indi_pane

0x8066,	// (0x00099d7a) main_fs_bigclock_swipe_pane_ParamLimits

0x8066,	// (0x00099d7a) main_fs_bigclock_swipe_pane

0xe14c,	// (0x0009fe60) main_fs_clock_dumped_data

0x80b2,	// (0x00099dc6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x80b2,	// (0x00099dc6) list_single_fs_bigclock_indicator_pane_g1

0x80cb,	// (0x00099ddf) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x80cb,	// (0x00099ddf) list_single_fs_bigclock_indicator_pane_g2

0x80e5,	// (0x00099df9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x80e5,	// (0x00099df9) list_single_fs_bigclock_indicator_pane_g3

0x80ff,	// (0x00099e13) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x80ff,	// (0x00099e13) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbc8,	// (0x000a18dc) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbc8,	// (0x000a18dc) list_single_fs_bigclock_indicator_pane_g

0x812e,	// (0x00099e42) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x812e,	// (0x00099e42) list_single_fs_bigclock_indicator_pane_t1

0x8156,	// (0x00099e6a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8156,	// (0x00099e6a) list_single_fs_bigclock_indicator_pane_t2

0x817e,	// (0x00099e92) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x817e,	// (0x00099e92) list_single_fs_bigclock_indicator_pane_t3

0x81a6,	// (0x00099eba) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x81a6,	// (0x00099eba) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbd3,	// (0x000a18e7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbd3,	// (0x000a18e7) list_single_fs_bigclock_indicator_pane_t

0xcab0,	// (0x0009e7c4) image3_infobar_fav_pane_ParamLimits

0xcab0,	// (0x0009e7c4) image3_infobar_fav_pane

0xcac0,	// (0x0009e7d4) image3_infobar_loc_pane_ParamLimits

0xcac0,	// (0x0009e7d4) image3_infobar_loc_pane

0xcad6,	// (0x0009e7ea) image3_infobar_time_pane_ParamLimits

0xcad6,	// (0x0009e7ea) image3_infobar_time_pane

0xd382,	// (0x0009f096) image3_infobar_time_pane_g1

0xcae6,	// (0x0009e7fa) image3_infobar_time_pane_t1

0xd382,	// (0x0009f096) image3_infobar_loc_pane_g1

0xcaf4,	// (0x0009e808) image3_infobar_loc_pane_g2

0x0001,

0xfd2c,	// (0x000a1a40) image3_infobar_loc_pane_g

0xcafc,	// (0x0009e810) image3_infobar_loc_pane_t1

0xd382,	// (0x0009f096) image3_infobar_fav_pane_g1

0xcb0a,	// (0x0009e81e) image3_infobar_fav_pane_g2

0x0001,

0xfd31,	// (0x000a1a45) image3_infobar_fav_pane_g

0xcb12,	// (0x0009e826) fs_bigclock_status_battery_pane

0xcb1b,	// (0x0009e82f) fs_bigclock_status_signal_pane

0xcb24,	// (0x0009e838) fs_bigclock_status_title_pane

0xcb2d,	// (0x0009e841) fs_bigclock_status_signal_pane_g1

0xcb36,	// (0x0009e84a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd36,	// (0x000a1a4a) fs_bigclock_status_signal_pane_g

0xcb3e,	// (0x0009e852) fs_bigclock_status_battery_pane_g1

0xcb47,	// (0x0009e85b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd3b,	// (0x000a1a4f) fs_bigclock_status_battery_pane_g

0xcb4f,	// (0x0009e863) fs_bigclock_status_title_pane_t1

0x8e3e,	// (0x0009ab52) main_fs_bigclock_clock_pane_g1

0x8e3e,	// (0x0009ab52) main_fs_bigclock_clock_pane_g2

0x8e51,	// (0x0009ab65) main_fs_bigclock_clock_pane_g3

0x8e51,	// (0x0009ab65) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd40,	// (0x000a1a54) main_fs_bigclock_clock_pane_g

0x8e68,	// (0x0009ab7c) main_fs_bigclock_clock_pane_t1

0x8e7e,	// (0x0009ab92) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd49,	// (0x000a1a5d) main_fs_bigclock_clock_pane_t

0xcb5d,	// (0x0009e871) list_single_fs_bigclock_indicator_pane_ParamLimits

0xcb5d,	// (0x0009e871) list_single_fs_bigclock_indicator_pane

0xcb6e,	// (0x0009e882) list_single_fs_bigclock_pane_ParamLimits

0xcb6e,	// (0x0009e882) list_single_fs_bigclock_pane

0xcb94,	// (0x0009e8a8) main_fs_bigclock_indicator_pane_t1

0xcba3,	// (0x0009e8b7) list_single_fs_bigclock_pane_g1

0xcbab,	// (0x0009e8bf) list_single_fs_bigclock_pane_t1

0xd382,	// (0x0009f096) main_fs_bigclock_swipe_pane_g1

0xcbee,	// (0x0009e902) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd5a,	// (0x000a1a6e) main_fs_bigclock_swipe_pane_g

0xcbf6,	// (0x0009e90a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xcbf6,	// (0x0009e90a) main_fs_bigclock_swipe_pane_t1

0x279c,	// (0x000944b0) call_type_pane_ParamLimits

0xe14c,	// (0x0009fe60) main_btmg_pane

0xc82a,	// (0x0009e53e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xc82a,	// (0x0009e53e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfccd,	// (0x000a19e1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfccd,	// (0x000a19e1) list_single_cale_mrui_row_pane_g

0xc9ab,	// (0x0009e6bf) list_recal_vselct_arw_lo_pane

0xc9b3,	// (0x0009e6c7) list_recal_vselct_arw_up_pane

0xc9bb,	// (0x0009e6cf) list_recal_vselct_pane

0x8ee0,	// (0x0009abf4) btmg_button_pane

0x8eea,	// (0x0009abfe) main_btmg_pane_g1

0xe14c,	// (0x0009fe60) bg_button_pane_cp044

0xcc13,	// (0x0009e927) btmg_button_pane_t1

0x413e,	// (0x00095e52) aid_listscroll_gen

0xe217,	// (0x0009ff2b) main_cntbar_detail_pane

0xc4e5,	// (0x0009e1f9) list_cmail_folder_pane

0xe231,	// (0x0009ff45) sp_fs_scroll_pane_cp03_ParamLimits

0x8ef4,	// (0x0009ac08) list_single_fs_dyc_pane_cp01_ParamLimits

0x8ef4,	// (0x0009ac08) list_single_fs_dyc_pane_cp01

0xcc21,	// (0x0009e935) aid_size_cmail_indent

0xcc2a,	// (0x0009e93e) list_single_dyc_row_pane_cp01

0x8f42,	// (0x0009ac56) cntbar_detail_list_pane_ParamLimits

0x8f42,	// (0x0009ac56) cntbar_detail_list_pane

0x8f94,	// (0x0009aca8) main_cntbar_detail_cont_pane_ParamLimits

0x8f94,	// (0x0009aca8) main_cntbar_detail_cont_pane

0xe231,	// (0x0009ff45) scroll_pane_cp032_ParamLimits

0xe231,	// (0x0009ff45) scroll_pane_cp032

0x8fa8,	// (0x0009acbc) cntbar_detail_list_event_pane_ParamLimits

0x8fa8,	// (0x0009acbc) cntbar_detail_list_event_pane

0x8f54,	// (0x0009ac68) cntbar_detail_list_shct_pane

0xd5e5,	// (0x0009f2f9) aid_list_gen

0xcc33,	// (0x0009e947) aid_scroll

0xcc3c,	// (0x0009e950) aid_size_touch_scroll_bar

0x833f,	// (0x0009a053) aid_list_double

0x8fb8,	// (0x0009accc) aid_list_single

0x8fb8,	// (0x0009accc) aid_list_single_lg

0x8fc1,	// (0x0009acd5) aid_list_z_g_a_sm

0x8fc9,	// (0x0009acdd) aid_list_z_g_d

0x8fd1,	// (0x0009ace5) aid_txt_z_prm

0x8fdf,	// (0x0009acf3) aid_txt_z_prm_cp01

0x8fed,	// (0x0009ad01) aid_txt_z_sec

0x8ffb,	// (0x0009ad0f) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8ffb,	// (0x0009ad0f) main_cntbar_detail_cont_pane_g1

0x900f,	// (0x0009ad23) main_cntbar_detail_cont_pane_g2_ParamLimits

0x900f,	// (0x0009ad23) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd5f,	// (0x000a1a73) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd5f,	// (0x000a1a73) main_cntbar_detail_cont_pane_g

0xcc45,	// (0x0009e959) main_cntbar_detail_cont_pane_t1

0xcc53,	// (0x0009e967) main_cntbar_detail_cont_pane_t2

0xcc61,	// (0x0009e975) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd64,	// (0x000a1a78) main_cntbar_detail_cont_pane_t

0x901f,	// (0x0009ad33) cell_cntbar_detail_list_shct_pane_ParamLimits

0x901f,	// (0x0009ad33) cell_cntbar_detail_list_shct_pane

0xcc6f,	// (0x0009e983) cntbar_detail_list_shct_pane_g1

0xcc78,	// (0x0009e98c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd6b,	// (0x000a1a7f) cntbar_detail_list_shct_pane_g

0x9031,	// (0x0009ad45) cntbar_detail_list_event_pane_g1_ParamLimits

0x9031,	// (0x0009ad45) cntbar_detail_list_event_pane_g1

0x903d,	// (0x0009ad51) cntbar_detail_list_event_pane_g2_ParamLimits

0x903d,	// (0x0009ad51) cntbar_detail_list_event_pane_g2

0x0005,

0xfd70,	// (0x000a1a84) cntbar_detail_list_event_pane_g_ParamLimits

0xfd70,	// (0x000a1a84) cntbar_detail_list_event_pane_g

0x90ab,	// (0x0009adbf) cntbar_detail_list_event_pane_t1_ParamLimits

0x90ab,	// (0x0009adbf) cntbar_detail_list_event_pane_t1

0x90c0,	// (0x0009add4) cntbar_detail_list_event_pane_t2_ParamLimits

0x90c0,	// (0x0009add4) cntbar_detail_list_event_pane_t2

0x0002,

0xfd7d,	// (0x000a1a91) cntbar_detail_list_event_pane_t_ParamLimits

0xfd7d,	// (0x000a1a91) cntbar_detail_list_event_pane_t

0xd382,	// (0x0009f096) cell_cntbar_detail_list_shct_pane_g1

0x2b3a,	// (0x0009484e) navi_pane_mv_g3

0xe217,	// (0x0009ff2b) main_cntbar_detail_pane_ParamLimits

0xe14c,	// (0x0009fe60) main_notif_wgt_pane

0xad71,	// (0x0009ca85) aid_tch_main_mp4_pane_g4

0xaf9f,	// (0x0009ccb3) popup_slider_window_cp02

0xc9a1,	// (0x0009e6b5) list_recal_day_event_pane

0x8f0e,	// (0x0009ac22) cntbar_detail_btn_pane_ParamLimits

0x8f0e,	// (0x0009ac22) cntbar_detail_btn_pane

0x8f27,	// (0x0009ac3b) cntbar_detail_btn_pane_cp01_ParamLimits

0x8f27,	// (0x0009ac3b) cntbar_detail_btn_pane_cp01

0x8f54,	// (0x0009ac68) cntbar_detail_list_shct_pane_ParamLimits

0x8f64,	// (0x0009ac78) cntbar_detail_pane_g1_ParamLimits

0x8f64,	// (0x0009ac78) cntbar_detail_pane_g1

0x8f78,	// (0x0009ac8c) cntbar_detail_pane_t1_ParamLimits

0x8f78,	// (0x0009ac8c) cntbar_detail_pane_t1

0x9049,	// (0x0009ad5d) cntbar_detail_list_event_pane_g3_ParamLimits

0x9049,	// (0x0009ad5d) cntbar_detail_list_event_pane_g3

0x9061,	// (0x0009ad75) cntbar_detail_list_event_pane_g4_ParamLimits

0x9061,	// (0x0009ad75) cntbar_detail_list_event_pane_g4

0x9079,	// (0x0009ad8d) cntbar_detail_list_event_pane_g5_ParamLimits

0x9079,	// (0x0009ad8d) cntbar_detail_list_event_pane_g5

0x9091,	// (0x0009ada5) cntbar_detail_list_event_pane_g6_ParamLimits

0x9091,	// (0x0009ada5) cntbar_detail_list_event_pane_g6

0x90d5,	// (0x0009ade9) cntbar_detail_list_event_pane_t3_ParamLimits

0x90d5,	// (0x0009ade9) cntbar_detail_list_event_pane_t3

0x90e7,	// (0x0009adfb) popup_notif_wgt_window_ParamLimits

0x90e7,	// (0x0009adfb) popup_notif_wgt_window

0x9100,	// (0x0009ae14) popup_submenu_window_cp01_ParamLimits

0x9100,	// (0x0009ae14) popup_submenu_window_cp01

0xd34c,	// (0x0009f060) bg_popup_window_pane_cp10

0xcc81,	// (0x0009e995) listscroll_notif_wgt_pane

0xcc93,	// (0x0009e9a7) list_notif_wgt_window

0xcc9c,	// (0x0009e9b0) scroll_pane_cp033

0x9114,	// (0x0009ae28) list_notif_wgt_row_pane_ParamLimits

0x9114,	// (0x0009ae28) list_notif_wgt_row_pane

0xcca5,	// (0x0009e9b9) aid_size_list_notif_wgt_del

0xccb2,	// (0x0009e9c6) list_notif_wgt_row_pane_g1

0xccbe,	// (0x0009e9d2) list_notif_wgt_row_pane_g2

0xcccd,	// (0x0009e9e1) list_notif_wgt_row_pane_g3

0x0002,

0xfd84,	// (0x000a1a98) list_notif_wgt_row_pane_g

0xccda,	// (0x0009e9ee) list_notif_wgt_row_pane_t1

0xccf0,	// (0x0009ea04) list_notif_wgt_row_pane_t2

0xcd02,	// (0x0009ea16) list_notif_wgt_row_pane_t3

0x0002,

0xfd8b,	// (0x000a1a9f) list_notif_wgt_row_pane_t

0xb505,	// (0x0009d219) list_recal_day_event_pane_g1

0xcd14,	// (0x0009ea28) list_recal_day_event_pane_t1

0xe14c,	// (0x0009fe60) bg_button_pane_cp045

0x9124,	// (0x0009ae38) cntbar_detail_btn_pane_t1

0xe25f,	// (0x0009ff73) main_callh_pane_ParamLimits

0xe25f,	// (0x0009ff73) main_callh_pane

0xe14c,	// (0x0009fe60) main_coverflow0_pane

0xe14c,	// (0x0009fe60) main_wgtman_pane

0x8087,	// (0x00099d9b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8087,	// (0x00099d9b) main_fs_bigclock_unlock_btn_pane

0x88fa,	// (0x0009a60e) bg_button_pane_cp16

0x890a,	// (0x0009a61e) cell_tport_appsw_pane_g3

0x9132,	// (0x0009ae46) cf0_flow_pane_ParamLimits

0x9132,	// (0x0009ae46) cf0_flow_pane

0xcd23,	// (0x0009ea37) listscroll_cf0_pane

0xcd2e,	// (0x0009ea42) main_cf0_pane_g1

0x9147,	// (0x0009ae5b) main_cf0_pane_t1_ParamLimits

0x9147,	// (0x0009ae5b) main_cf0_pane_t1

0x915e,	// (0x0009ae72) main_cf0_pane_t2_ParamLimits

0x915e,	// (0x0009ae72) main_cf0_pane_t2

0x0001,

0xfd97,	// (0x000a1aab) main_cf0_pane_t_ParamLimits

0xfd97,	// (0x000a1aab) main_cf0_pane_t

0xcd40,	// (0x0009ea54) scroll_pane_cp11

0x9175,	// (0x0009ae89) cf0_flow_pane_g1

0x9181,	// (0x0009ae95) cf0_flow_pane_g2

0x0001,

0xfd9c,	// (0x000a1ab0) cf0_flow_pane_g

0x918d,	// (0x0009aea1) cf0_flow_pane_t1

0xe14c,	// (0x0009fe60) main_call6_pane

0xe14c,	// (0x0009fe60) main_calllock_pane

0x919f,	// (0x0009aeb3) call6_btn_grp_pane_ParamLimits

0x919f,	// (0x0009aeb3) call6_btn_grp_pane

0x91b9,	// (0x0009aecd) call6_pane_g1_ParamLimits

0x91b9,	// (0x0009aecd) call6_pane_g1

0x91d2,	// (0x0009aee6) popup_call6_1st_window_ParamLimits

0x91d2,	// (0x0009aee6) popup_call6_1st_window

0x91e6,	// (0x0009aefa) popup_call6_2nd_window_ParamLimits

0x91e6,	// (0x0009aefa) popup_call6_2nd_window

0x91fa,	// (0x0009af0e) cell_call6_btn_pane_ParamLimits

0x91fa,	// (0x0009af0e) cell_call6_btn_pane

0xd34c,	// (0x0009f060) bg_popup_call2_in_pane_cp03

0xcd4b,	// (0x0009ea5f) popup_call6_1st_window_g1

0xcd53,	// (0x0009ea67) popup_call6_1st_window_g2

0xcd5b,	// (0x0009ea6f) popup_call6_1st_window_g3

0x0002,

0xfda1,	// (0x000a1ab5) popup_call6_1st_window_g

0xcd63,	// (0x0009ea77) popup_call6_1st_window_t1

0xcd72,	// (0x0009ea86) popup_call6_1st_window_t2

0xcd82,	// (0x0009ea96) popup_call6_1st_window_t3

0x0002,

0xfda8,	// (0x000a1abc) popup_call6_1st_window_t

0xd34c,	// (0x0009f060) bg_popup_call2_in_pane_cp04

0xcd92,	// (0x0009eaa6) popup_call6_2nd_window_g1

0xcd9a,	// (0x0009eaae) popup_call6_2nd_window_g2

0xcda2,	// (0x0009eab6) popup_call6_2nd_window_g3

0x0002,

0xfdaf,	// (0x000a1ac3) popup_call6_2nd_window_g

0xcdaa,	// (0x0009eabe) popup_call6_2nd_window_t1

0xa2d7,	// (0x0009bfeb) bg_button_pane_cp15

0xd9e1,	// (0x0009f6f5) cell_call6_btn_pane_g1

0xd9ea,	// (0x0009f6fe) cell_call6_btn_pane_t1

0x920e,	// (0x0009af22) listscroll_wgtman_pane_ParamLimits

0x920e,	// (0x0009af22) listscroll_wgtman_pane

0x922f,	// (0x0009af43) wgtman_btn_pane_ParamLimits

0x922f,	// (0x0009af43) wgtman_btn_pane

0xdbb5,	// (0x0009f8c9) aid_scroll_copy1

0xcdb9,	// (0x0009eacd) list_wgtman_pane

0x9272,	// (0x0009af86) wgtman_btn_pane_g1_ParamLimits

0x9272,	// (0x0009af86) wgtman_btn_pane_g1

0x929e,	// (0x0009afb2) wgtman_btn_pane_t1_ParamLimits

0x929e,	// (0x0009afb2) wgtman_btn_pane_t1

0xcdc3,	// (0x0009ead7) wgtman_btn_pane_t2_ParamLimits

0xcdc3,	// (0x0009ead7) wgtman_btn_pane_t2

0x0001,

0xfdb6,	// (0x000a1aca) wgtman_btn_pane_t_ParamLimits

0xfdb6,	// (0x000a1aca) wgtman_btn_pane_t

0x92db,	// (0x0009afef) listrow_wgtman_pane_ParamLimits

0x92db,	// (0x0009afef) listrow_wgtman_pane

0x92ef,	// (0x0009b003) listrow_wgtman_pane_g1

0x92fc,	// (0x0009b010) listrow_wgtman_pane_g2

0x0001,

0xfdbb,	// (0x000a1acf) listrow_wgtman_pane_g

0x931a,	// (0x0009b02e) listrow_wgtman_pane_t1

0x9332,	// (0x0009b046) listrow_wgtman_pane_t2

0x0001,

0xfdc0,	// (0x000a1ad4) listrow_wgtman_pane_t

0x9358,	// (0x0009b06c) wait_bar_pane_cp09

0xcdda,	// (0x0009eaee) main_calllock_btn_pane

0xcde4,	// (0x0009eaf8) main_calllock_pane_g1

0xe14c,	// (0x0009fe60) bg_button_pane_cp17

0xcdf0,	// (0x0009eb04) main_calllock_btn_pane_g1

0xcdf9,	// (0x0009eb0d) main_calllock_btn_pane_t1

0xe14c,	// (0x0009fe60) main_dialer3_pane

0xe14c,	// (0x0009fe60) main_fmrd2_pane

0xd382,	// (0x0009f096) main_fs_bigclock_unlock_btn_pane_g1

0x9372,	// (0x0009b086) main_fs_bigclock_unlock_btn_pane_t1

0x9380,	// (0x0009b094) area_fmrd2_info_pane_ParamLimits

0x9380,	// (0x0009b094) area_fmrd2_info_pane

0x9391,	// (0x0009b0a5) area_fmrd2_visual_pane_ParamLimits

0x9391,	// (0x0009b0a5) area_fmrd2_visual_pane

0x939f,	// (0x0009b0b3) fmrd2_indi_pane_ParamLimits

0x939f,	// (0x0009b0b3) fmrd2_indi_pane

0x93ac,	// (0x0009b0c0) area_fmrd2_visual_pane_g1

0x93b4,	// (0x0009b0c8) area_fmrd2_visual_pane_t1

0x93c4,	// (0x0009b0d8) area_fmrd2_visual_pane_t2

0x93d4,	// (0x0009b0e8) area_fmrd2_visual_pane_t3

0x0002,

0xfdca,	// (0x000a1ade) area_fmrd2_visual_pane_t

0x93e4,	// (0x0009b0f8) area_fmrd2_info_pane_g1

0x93ec,	// (0x0009b100) area_fmrd2_info_pane_t1

0x93fc,	// (0x0009b110) area_fmrd2_info_pane_t2

0x940c,	// (0x0009b120) area_fmrd2_info_pane_t3

0x941c,	// (0x0009b130) area_fmrd2_info_pane_t4

0x0003,

0xfdd1,	// (0x000a1ae5) area_fmrd2_info_pane_t

0x942c,	// (0x0009b140) fmrd2_indi_pane_t1

0x943c,	// (0x0009b150) fmrd2_indi_pane_t2

0x944c,	// (0x0009b160) fmrd2_indi_pane_t3

0x0002,

0xfdda,	// (0x000a1aee) fmrd2_indi_pane_t

0x8110,	// (0x00099e24) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8110,	// (0x00099e24) list_single_fs_bigclock_indicator_pane_g5

0x81c5,	// (0x00099ed9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x81c5,	// (0x00099ed9) list_single_fs_bigclock_indicator_pane_t5

0x8a7b,	// (0x0009a78f) aid_cell_bcale_month_pane_ParamLimits

0x8a7b,	// (0x0009a78f) aid_cell_bcale_month_pane

0x8a99,	// (0x0009a7ad) bcale_month_pane_ParamLimits

0x8a99,	// (0x0009a7ad) bcale_month_pane

0x8abd,	// (0x0009a7d1) bcale_preview_pane_ParamLimits

0x8abd,	// (0x0009a7d1) bcale_preview_pane

0xcbab,	// (0x0009e8bf) list_single_fs_bigclock_pane_t1_ParamLimits

0xcbca,	// (0x0009e8de) list_single_fs_bigclock_pane_t2_ParamLimits

0xcbca,	// (0x0009e8de) list_single_fs_bigclock_pane_t2

0x0001,

0xfd55,	// (0x000a1a69) list_single_fs_bigclock_pane_t_ParamLimits

0xfd55,	// (0x000a1a69) list_single_fs_bigclock_pane_t

0x936a,	// (0x0009b07e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc5,	// (0x000a1ad9) main_fs_bigclock_unlock_btn_pane_g

0x945c,	// (0x0009b170) aid_dia3_key_size_ParamLimits

0x945c,	// (0x0009b170) aid_dia3_key_size

0x9470,	// (0x0009b184) aid_dia3_listrow_size_ParamLimits

0x9470,	// (0x0009b184) aid_dia3_listrow_size

0x948a,	// (0x0009b19e) dia3_keypad_fun_pane_ParamLimits

0x948a,	// (0x0009b19e) dia3_keypad_fun_pane

0x94a4,	// (0x0009b1b8) dia3_keypad_num_pane_ParamLimits

0x94a4,	// (0x0009b1b8) dia3_keypad_num_pane

0x94be,	// (0x0009b1d2) dia3_listscroll_pane_ParamLimits

0x94be,	// (0x0009b1d2) dia3_listscroll_pane

0x94d4,	// (0x0009b1e8) dia3_numentry_pane_ParamLimits

0x94d4,	// (0x0009b1e8) dia3_numentry_pane

0xce08,	// (0x0009eb1c) dia3_list_pane

0x94ee,	// (0x0009b202) scroll_pane_cp12

0xe14c,	// (0x0009fe60) bg_dia3_numentry_pane

0x94f9,	// (0x0009b20d) dia3_numentry_pane_t1

0x9508,	// (0x0009b21c) cell_dia3_key_num_pane

0x9510,	// (0x0009b224) cell_dia3_key0_fun_pane_ParamLimits

0x9510,	// (0x0009b224) cell_dia3_key0_fun_pane

0x9524,	// (0x0009b238) cell_dia3_key1_fun_pane_ParamLimits

0x9524,	// (0x0009b238) cell_dia3_key1_fun_pane

0x9539,	// (0x0009b24d) dia3_listrow_pane

0xbeec,	// (0x0009dc00) bg_dia3_numentry_pane_g1

0xe14c,	// (0x0009fe60) bg_button_pane_cp21

0x954b,	// (0x0009b25f) cell_dia3_key_num_pane_t1

0x9559,	// (0x0009b26d) cell_dia3_key_num_pane_t2

0x9559,	// (0x0009b26d) cell_dia3_key_num_pane_t3

0x9559,	// (0x0009b26d) cell_dia3_key_num_pane_t4

0x0003,

0xfde1,	// (0x000a1af5) cell_dia3_key_num_pane_t

0xe14c,	// (0x0009fe60) bg_button_pane_cp19

0x9568,	// (0x0009b27c) cell_dia3_key0_fun_pane_g1

0xe14c,	// (0x0009fe60) bg_button_pane_cp20

0x9570,	// (0x0009b284) cell_dia3_key1_fun_pane_g1

0x9578,	// (0x0009b28c) area_left_week_number_pane

0x9586,	// (0x0009b29a) area_top_day_name_pane

0x9599,	// (0x0009b2ad) frame_month_view_pane

0xce13,	// (0x0009eb27) grid_month_view_pane

0x95ae,	// (0x0009b2c2) cell_top_day_name_pane_ParamLimits

0x95ae,	// (0x0009b2c2) cell_top_day_name_pane

0x95dd,	// (0x0009b2f1) cell_area_left_week_number_pane_ParamLimits

0x95dd,	// (0x0009b2f1) cell_area_left_week_number_pane

0x95f3,	// (0x0009b307) cell_month_view_pane_ParamLimits

0x95f3,	// (0x0009b307) cell_month_view_pane

0xce21,	// (0x0009eb35) frm_month_g1

0x9624,	// (0x0009b338) frm_month_g2

0x9637,	// (0x0009b34b) frm_month_g3

0x964a,	// (0x0009b35e) frm_month_g4

0x965d,	// (0x0009b371) frm_month_g5

0x9670,	// (0x0009b384) frm_month_g6

0x9685,	// (0x0009b399) frm_month_g7

0xce2e,	// (0x0009eb42) frm_month_g8

0x969a,	// (0x0009b3ae) frm_month_g9

0x96aa,	// (0x0009b3be) frm_month_g10

0x96ba,	// (0x0009b3ce) frm_month_g11

0x96ca,	// (0x0009b3de) frm_month_g12

0x96dc,	// (0x0009b3f0) frm_month_g13

0x96f0,	// (0x0009b404) frm_month_g14

0x9704,	// (0x0009b418) frm_month_g15

0x9718,	// (0x0009b42c) frm_month_g16

0x000f,

0xfdea,	// (0x000a1afe) frm_month_g

0xce3b,	// (0x0009eb4f) cell_top_day_name_pane_t1

0x972c,	// (0x0009b440) cell_area_left_week_number_pane_g1

0x9738,	// (0x0009b44c) cell_area_left_week_number_pane_t1

0xeeff,	// (0x000a0c13) cell_month_view_pane_g1

0x974b,	// (0x0009b45f) cell_month_view_pane_t1

0xe14c,	// (0x0009fe60) main_fps_pane

0xc30d,	// (0x0009e021) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc30d,	// (0x0009e021) cmail_ddmenu_btn02_pane_cp1

0xc329,	// (0x0009e03d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc329,	// (0x0009e03d) cmail_ddmenu_btn02_pane_cp2

0x8d97,	// (0x0009aaab) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8d97,	// (0x0009aaab) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd08,	// (0x000a1a1c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd08,	// (0x000a1a1c) cmail_ddmenu_btn02_pane_g

0x8db8,	// (0x0009aacc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8db8,	// (0x0009aacc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd0d,	// (0x000a1a21) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd0d,	// (0x000a1a21) cmail_ddmenu_btn02_pane_t

0x975e,	// (0x0009b472) fps_text_pane_ParamLimits

0x975e,	// (0x0009b472) fps_text_pane

0x9775,	// (0x0009b489) main_fps_pane_g1_ParamLimits

0x9775,	// (0x0009b489) main_fps_pane_g1

0x978d,	// (0x0009b4a1) wait_bar_pane_cp010_ParamLimits

0x978d,	// (0x0009b4a1) wait_bar_pane_cp010

0x97a0,	// (0x0009b4b4) fps_text_pane_t1_ParamLimits

0x97a0,	// (0x0009b4b4) fps_text_pane_t1

0xb0e0,	// (0x0009cdf4) cam4_image_uncrop_pane_g1

0xb0e9,	// (0x0009cdfd) cam4_image_uncrop_pane_g2

0x6222,	// (0x00097f36) cam4_image_uncrop_pane_g3

0x622b,	// (0x00097f3f) cam4_image_uncrop_pane_g4

0x0003,

0xf85b,	// (0x000a156f) cam4_image_uncrop_pane_g

0x9539,	// (0x0009b24d) dia3_listrow_pane_ParamLimits

0xe14c,	// (0x0009fe60) main_phob2_pane

0x88cd,	// (0x0009a5e1) cell_tport_appsw_pane_cp02_ParamLimits

0x88cd,	// (0x0009a5e1) cell_tport_appsw_pane_cp02

0x88e1,	// (0x0009a5f5) cell_tport_appsw_pane_cp03_ParamLimits

0x88e1,	// (0x0009a5f5) cell_tport_appsw_pane_cp03

0xe14c,	// (0x0009fe60) phob2_contact_card_pane

0xe14c,	// (0x0009fe60) phob2_listscroll_pane

0xce4e,	// (0x0009eb62) phob2_list_pane

0xce56,	// (0x0009eb6a) scroll_pane_cp034

0x97b8,	// (0x0009b4cc) phob2_cc_data_pane_ParamLimits

0x97b8,	// (0x0009b4cc) phob2_cc_data_pane

0x97d1,	// (0x0009b4e5) phob2_cc_listscroll_pane_ParamLimits

0x97d1,	// (0x0009b4e5) phob2_cc_listscroll_pane

0x92db,	// (0x0009afef) list_double_large_graphic_phob2_pane_ParamLimits

0x92db,	// (0x0009afef) list_double_large_graphic_phob2_pane

0x97f3,	// (0x0009b507) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x97f3,	// (0x0009b507) list_double_large_graphic_phob2_pane_g1

0x9800,	// (0x0009b514) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9800,	// (0x0009b514) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe0b,	// (0x000a1b1f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe0b,	// (0x000a1b1f) list_double_large_graphic_phob2_pane_g

0x9826,	// (0x0009b53a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9826,	// (0x0009b53a) list_double_large_graphic_phob2_pane_t1

0x983b,	// (0x0009b54f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x983b,	// (0x0009b54f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe14,	// (0x000a1b28) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe14,	// (0x000a1b28) list_double_large_graphic_phob2_pane_t

0xe14c,	// (0x0009fe60) list_highlight_pane_cp024

0x9850,	// (0x0009b564) phob2_cc_button_pane

0x985a,	// (0x0009b56e) phob2_cc_data_pane_g1_ParamLimits

0x985a,	// (0x0009b56e) phob2_cc_data_pane_g1

0x9874,	// (0x0009b588) phob2_cc_data_pane_g2_ParamLimits

0x9874,	// (0x0009b588) phob2_cc_data_pane_g2

0x0001,

0xfe19,	// (0x000a1b2d) phob2_cc_data_pane_g_ParamLimits

0xfe19,	// (0x000a1b2d) phob2_cc_data_pane_g

0x9886,	// (0x0009b59a) phob2_cc_data_pane_t1_ParamLimits

0x9886,	// (0x0009b59a) phob2_cc_data_pane_t1

0x98a6,	// (0x0009b5ba) phob2_cc_data_pane_t2_ParamLimits

0x98a6,	// (0x0009b5ba) phob2_cc_data_pane_t2

0x98c6,	// (0x0009b5da) phob2_cc_data_pane_t3_ParamLimits

0x98c6,	// (0x0009b5da) phob2_cc_data_pane_t3

0x0002,

0xfe1e,	// (0x000a1b32) phob2_cc_data_pane_t_ParamLimits

0xfe1e,	// (0x000a1b32) phob2_cc_data_pane_t

0xce5e,	// (0x0009eb72) phob2_cc_list_pane_ParamLimits

0xce5e,	// (0x0009eb72) phob2_cc_list_pane

0xb59c,	// (0x0009d2b0) scroll_pane_cp035_ParamLimits

0xb59c,	// (0x0009d2b0) scroll_pane_cp035

0xe217,	// (0x0009ff2b) bg_button_pane_cp033

0xce6a,	// (0x0009eb7e) phob2_cc_button_pane_g1

0xce76,	// (0x0009eb8a) phob2_cc_button_pane_t1

0xce8b,	// (0x0009eb9f) phob2_cc_button_pane_t2

0x0001,

0xfe25,	// (0x000a1b39) phob2_cc_button_pane_t

0x98e6,	// (0x0009b5fa) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98e6,	// (0x0009b5fa) list_double_large_graphic_phob2_cc_pane

0x9924,	// (0x0009b638) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9924,	// (0x0009b638) list_double_large_graphic_phob2_cc_pane_g1

0x9930,	// (0x0009b644) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9930,	// (0x0009b644) list_double_large_graphic_phob2_cc_pane_g2

0x993c,	// (0x0009b650) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x993c,	// (0x0009b650) list_double_large_graphic_phob2_cc_pane_g3

0x9948,	// (0x0009b65c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9948,	// (0x0009b65c) list_double_large_graphic_phob2_cc_pane_g4

0x9954,	// (0x0009b668) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9954,	// (0x0009b668) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe2a,	// (0x000a1b3e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe2a,	// (0x000a1b3e) list_double_large_graphic_phob2_cc_pane_g

0x9960,	// (0x0009b674) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9960,	// (0x0009b674) list_double_large_graphic_phob2_cc_pane_t1

0x9989,	// (0x0009b69d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9989,	// (0x0009b69d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe35,	// (0x000a1b49) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe35,	// (0x000a1b49) list_double_large_graphic_phob2_cc_pane_t

0xce9d,	// (0x0009ebb1) list_highlight_pane_cp025_ParamLimits

0xce9d,	// (0x0009ebb1) list_highlight_pane_cp025

0xe217,	// (0x0009ff2b) bg_button_pane_cp033_ParamLimits

0xce6a,	// (0x0009eb7e) phob2_cc_button_pane_g1_ParamLimits

0xce76,	// (0x0009eb8a) phob2_cc_button_pane_t1_ParamLimits

0xce8b,	// (0x0009eb9f) phob2_cc_button_pane_t2_ParamLimits

0xfe25,	// (0x000a1b39) phob2_cc_button_pane_t_ParamLimits

0x0a16,	// (0x0009272a) popup_wgtman_window

0xb37e,	// (0x0009d092) scroll_pane_cp038

0x9254,	// (0x0009af68) wgtman_btn_pane_cp_01_ParamLimits

0x9254,	// (0x0009af68) wgtman_btn_pane_cp_01

0xceab,	// (0x0009ebbf) wgtman_content_pane

0xceb4,	// (0x0009ebc8) wgtman_heading_pane

0xe14c,	// (0x0009fe60) bg_heading_pane_cp02

0xcebd,	// (0x0009ebd1) wgtman_heading_pane_g1

0xcec5,	// (0x0009ebd9) wgtman_heading_pane_t1

0xced3,	// (0x0009ebe7) scroll_pane_cp036

0xcedb,	// (0x0009ebef) wgtman_list_pane

0xc200,	// (0x0009df14) wgtman_list_pane_t1_ParamLimits

0xc200,	// (0x0009df14) wgtman_list_pane_t1

0xb0ca,	// (0x0009cdde) cam4_grid_pane

0x6ed8,	// (0x00098bec) bg_button_pane_cp015_ParamLimits

0x6eef,	// (0x00098c03) bg_button_pane_cp016_ParamLimits

0x6efb,	// (0x00098c0f) bg_button_pane_cp017_ParamLimits

0x6f56,	// (0x00098c6a) popup_vitu2_query_window_g3_ParamLimits

0x6f56,	// (0x00098c6a) popup_vitu2_query_window_g3

0x6ff9,	// (0x00098d0d) popup_vitu2_query_window_t6_ParamLimits

0x6ff9,	// (0x00098d0d) popup_vitu2_query_window_t6

0x7024,	// (0x00098d38) popup_vitu2_query_window_t7_ParamLimits

0x7024,	// (0x00098d38) popup_vitu2_query_window_t7

0xb0e0,	// (0x0009cdf4) cam4_grid_pane_g1

0xb0e9,	// (0x0009cdfd) cam4_grid_pane_g2

0xcee3,	// (0x0009ebf7) cam4_grid_pane_g3

0xceec,	// (0x0009ec00) cam4_grid_pane_g4

0x0003,

0xfe3a,	// (0x000a1b4e) cam4_grid_pane_g

0x1656,	// (0x0009336a) aid_placing_vt_slider_lsc_ParamLimits

0x1943,	// (0x00093657) vidtel_button_pane_ParamLimits

0x1943,	// (0x00093657) vidtel_button_pane

0xe14c,	// (0x0009fe60) bg_button_pane_cp034

0xcef7,	// (0x0009ec0b) vidtel_button_pane_g1

0xceff,	// (0x0009ec13) vidtel_button_pane_t1

0xb4a7,	// (0x0009d1bb) aid_size_vtel_slider_touch

0xb59c,	// (0x0009d2b0) scroll_pane_cp039

0x7d4e,	// (0x00099a62) ncim_query_button_pane_cp01_ParamLimits

0x7d6d,	// (0x00099a81) ncimui_query_pane_g1_ParamLimits

0xe217,	// (0x0009ff2b) input_focus_pane_cp012_ParamLimits

0xbf2a,	// (0x0009dc3e) ncim_query_entry_pane_t1_ParamLimits

0xb59c,	// (0x0009d2b0) scroll_pane_cp039_ParamLimits

0x2aac,	// (0x000947c0) navi_pane_bcale_mc_g1

0x2ab4,	// (0x000947c8) navi_pane_bcale_mc_t1

0xc35f,	// (0x0009e073) main_sp_fs_email_pane_g1

0xc36b,	// (0x0009e07f) main_sp_fs_email_pane_g2

0x0001,

0xfc3d,	// (0x000a1951) main_sp_fs_email_pane_g

0xc836,	// (0x0009e54a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xc836,	// (0x0009e54a) list_single_cale_mrui_row_pane_g3

0x8dd8,	// (0x0009aaec) list_single_recal_day_pane_g5_event_pane

0xca13,	// (0x0009e727) list_single_recal_day_pane_g7

0xcf15,	// (0x0009ec29) list_recal_day_event_pane_cp01

0xcf1e,	// (0x0009ec32) list_recal_vselct_arw_lo_pane_cp01

0xcf26,	// (0x0009ec3a) list_recal_vselct_arw_up_pane_cp01

0xcf2e,	// (0x0009ec42) list_recal_vselct_pane_cp01

0xb505,	// (0x0009d219) list_recal_day_event_pane_cp01_g1

0xcf38,	// (0x0009ec4c) list_recal_day_event_pane_cp01_t1

0xca1b,	// (0x0009e72f) list_single_recal_day_pane_t1_ParamLimits

0xca2d,	// (0x0009e741) list_single_recal_day_pane_t2_ParamLimits

0xfd1d,	// (0x000a1a31) list_single_recal_day_pane_t_ParamLimits

0xee84,	// (0x000a0b98) bg_notes_pane_ParamLimits

0xef4f,	// (0x000a0c63) list_notes_pane_ParamLimits

0x0c08,	// (0x0009291c) scroll_pane_cp06_ParamLimits

0xef71,	// (0x000a0c85) main_notes_pane_ParamLimits

0xe217,	// (0x0009ff2b) main_welc_pane

0x99e1,	// (0x0009b6f5) main_welc_body_pane_ParamLimits

0x99e1,	// (0x0009b6f5) main_welc_body_pane

0x9a00,	// (0x0009b714) main_welc_opti_pane_ParamLimits

0x9a00,	// (0x0009b714) main_welc_opti_pane

0x9a81,	// (0x0009b795) main_welc_pane_t1_ParamLimits

0x9a81,	// (0x0009b795) main_welc_pane_t1

0xcf56,	// (0x0009ec6a) main_welc_body_row_pane_ParamLimits

0xcf56,	// (0x0009ec6a) main_welc_body_row_pane

0xeef1,	// (0x000a0c05) main_welc_opti_row_pane_ParamLimits

0xeef1,	// (0x000a0c05) main_welc_opti_row_pane

0xcf6d,	// (0x0009ec81) main_welc_opti_row_pane_g1

0x9c76,	// (0x0009b98a) main_welc_opti_row_pane_t1

0xcf75,	// (0x0009ec89) main_welc_body_row_pane_t1

0xcc8b,	// (0x0009e99f) popup_notif_wgt_heading_pane

0xcca5,	// (0x0009e9b9) aid_size_list_notif_wgt_del_ParamLimits

0xccb2,	// (0x0009e9c6) list_notif_wgt_row_pane_g1_ParamLimits

0xccbe,	// (0x0009e9d2) list_notif_wgt_row_pane_g2_ParamLimits

0xcccd,	// (0x0009e9e1) list_notif_wgt_row_pane_g3_ParamLimits

0xfd84,	// (0x000a1a98) list_notif_wgt_row_pane_g_ParamLimits

0xccda,	// (0x0009e9ee) list_notif_wgt_row_pane_t1_ParamLimits

0xccf0,	// (0x0009ea04) list_notif_wgt_row_pane_t2_ParamLimits

0xcd02,	// (0x0009ea16) list_notif_wgt_row_pane_t3_ParamLimits

0xfd8b,	// (0x000a1a9f) list_notif_wgt_row_pane_t_ParamLimits

0x92ef,	// (0x0009b003) listrow_wgtman_pane_g1_ParamLimits

0x92fc,	// (0x0009b010) listrow_wgtman_pane_g2_ParamLimits

0xfdbb,	// (0x000a1acf) listrow_wgtman_pane_g_ParamLimits

0x931a,	// (0x0009b02e) listrow_wgtman_pane_t1_ParamLimits

0x9332,	// (0x0009b046) listrow_wgtman_pane_t2_ParamLimits

0xfdc0,	// (0x000a1ad4) listrow_wgtman_pane_t_ParamLimits

0x9358,	// (0x0009b06c) wait_bar_pane_cp09_ParamLimits

0xe14c,	// (0x0009fe60) bg_popup_heading_pane_cp02

0xcf84,	// (0x0009ec98) popup_notif_wgt_heading_pane_g1

0xcf8c,	// (0x0009eca0) popup_notif_wgt_heading_pane_t1

0xe14c,	// (0x0009fe60) main_vids_pane

0xe14c,	// (0x0009fe60) vids_listscroll_pane

0x9c85,	// (0x0009b999) scroll_pane_cp040

0xe14c,	// (0x0009fe60) vids_list_pane

0x9c90,	// (0x0009b9a4) vids_list_double_pane_ParamLimits

0x9c90,	// (0x0009b9a4) vids_list_double_pane

0x9ca3,	// (0x0009b9b7) vids_list_double_pane_g1

0x9cac,	// (0x0009b9c0) vids_list_double_pane_t1

0x9cbc,	// (0x0009b9d0) vids_list_double_pane_t2

0x0001,

0xfe59,	// (0x000a1b6d) vids_list_double_pane_t

0xa2c9,	// (0x0009bfdd) main_ncimui_pane_ParamLimits

0x7b84,	// (0x00099898) main_ncimui_pane_g1_ParamLimits

0x7b90,	// (0x000998a4) main_ncimui_pane_g2_ParamLimits

0x7b90,	// (0x000998a4) main_ncimui_pane_g2

0x0001,

0xfb3e,	// (0x000a1852) main_ncimui_pane_g_ParamLimits

0xfb3e,	// (0x000a1852) main_ncimui_pane_g

0x9a1f,	// (0x0009b733) main_welc_pane_g1_ParamLimits

0x9a1f,	// (0x0009b733) main_welc_pane_g1

0x9a34,	// (0x0009b748) main_welc_pane_g2_ParamLimits

0x9a34,	// (0x0009b748) main_welc_pane_g2

0x0003,

0xfe43,	// (0x000a1b57) main_welc_pane_g_ParamLimits

0xfe43,	// (0x000a1b57) main_welc_pane_g

0x0bec,	// (0x00092900) listscroll_mce_pane_ParamLimits

0x2b8c,	// (0x000948a0) wait_bar_pane_cp10

0x415a,	// (0x00095e6e) main_cale_day_pane_ParamLimits

0x415a,	// (0x00095e6e) main_cale_week_pane_ParamLimits

0xee84,	// (0x000a0b98) main_messa_pane_ParamLimits

0x5605,	// (0x00097319) main_clock2_btn_pane_ParamLimits

0x5605,	// (0x00097319) main_clock2_btn_pane

0xa903,	// (0x0009c617) main_clock2_btn_pane_cp01_ParamLimits

0xa903,	// (0x0009c617) main_clock2_btn_pane_cp01

0xc7c2,	// (0x0009e4d6) list_cale_mrui_pane_ParamLimits

0xcd38,	// (0x0009ea4c) main_cf0_pane_g2

0x0001,

0xfd92,	// (0x000a1aa6) main_cf0_pane_g

0x9578,	// (0x0009b28c) area_left_week_number_pane_ParamLimits

0x9586,	// (0x0009b29a) area_top_day_name_pane_ParamLimits

0x9599,	// (0x0009b2ad) frame_month_view_pane_ParamLimits

0xce13,	// (0x0009eb27) grid_month_view_pane_ParamLimits

0xce21,	// (0x0009eb35) frm_month_g1_ParamLimits

0x9624,	// (0x0009b338) frm_month_g2_ParamLimits

0x9637,	// (0x0009b34b) frm_month_g3_ParamLimits

0x964a,	// (0x0009b35e) frm_month_g4_ParamLimits

0x965d,	// (0x0009b371) frm_month_g5_ParamLimits

0x9670,	// (0x0009b384) frm_month_g6_ParamLimits

0x9685,	// (0x0009b399) frm_month_g7_ParamLimits

0xce2e,	// (0x0009eb42) frm_month_g8_ParamLimits

0x969a,	// (0x0009b3ae) frm_month_g9_ParamLimits

0x96aa,	// (0x0009b3be) frm_month_g10_ParamLimits

0x96ba,	// (0x0009b3ce) frm_month_g11_ParamLimits

0x96ca,	// (0x0009b3de) frm_month_g12_ParamLimits

0x96dc,	// (0x0009b3f0) frm_month_g13_ParamLimits

0x96f0,	// (0x0009b404) frm_month_g14_ParamLimits

0x9704,	// (0x0009b418) frm_month_g15_ParamLimits

0x9718,	// (0x0009b42c) frm_month_g16_ParamLimits

0xfdea,	// (0x000a1afe) frm_month_g_ParamLimits

0xce3b,	// (0x0009eb4f) cell_top_day_name_pane_t1_ParamLimits

0x972c,	// (0x0009b440) cell_area_left_week_number_pane_g1_ParamLimits

0x9738,	// (0x0009b44c) cell_area_left_week_number_pane_t1_ParamLimits

0xeeff,	// (0x000a0c13) cell_month_view_pane_g1_ParamLimits

0x974b,	// (0x0009b45f) cell_month_view_pane_t1_ParamLimits

0xee7c,	// (0x000a0b90) main_clock2_btn_pane_g1

0xcf9a,	// (0x0009ecae) main_clock2_btn_pane_t1

0xe217,	// (0x0009ff2b) listscroll_cmail_pane_ParamLimits

0xc35f,	// (0x0009e073) main_sp_fs_email_pane_g1_ParamLimits

0xc36b,	// (0x0009e07f) main_sp_fs_email_pane_g2_ParamLimits

0xfc3d,	// (0x000a1951) main_sp_fs_email_pane_g_ParamLimits

0xc982,	// (0x0009e696) list_recal_day_pane_ParamLimits

0xc993,	// (0x0009e6a7) mian_recal_day_pane_t1

0x8775,	// (0x0009a489) list_single_dyc_row_text_pane_t4_ParamLimits

0x8775,	// (0x0009a489) list_single_dyc_row_text_pane_t4

0x87be,	// (0x0009a4d2) list_single_dyc_row_text_pane_t5_ParamLimits

0x87be,	// (0x0009a4d2) list_single_dyc_row_text_pane_t5

0xc415,	// (0x0009e129) list_single_dyc_row_text_pane_t6_ParamLimits

0xc415,	// (0x0009e129) list_single_dyc_row_text_pane_t6

0x26dd,	// (0x000943f1) aid_mgn_list_cale_time_pane

0xa2c9,	// (0x0009bfdd) main_gallery2_pane_ParamLimits

0xa917,	// (0x0009c62b) main_clock2_pane_cp01_t1

0xa925,	// (0x0009c639) main_clock2_pane_cp01_t3

0x0001,

0xf732,	// (0x000a1446) main_clock2_pane_cp01_t

0x1024,	// (0x00092d38) cale_week_scroll_pane_g16_ParamLimits

0x1024,	// (0x00092d38) cale_week_scroll_pane_g16

0xd34c,	// (0x0009f060) vorec_slider_pane

0xceff,	// (0x0009ec13) vidtel_button_pane_t1_ParamLimits

0x8e3e,	// (0x0009ab52) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8e3e,	// (0x0009ab52) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8e51,	// (0x0009ab65) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8e51,	// (0x0009ab65) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd40,	// (0x000a1a54) main_fs_bigclock_clock_pane_g_ParamLimits

0x8e68,	// (0x0009ab7c) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8e7e,	// (0x0009ab92) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd49,	// (0x000a1a5d) main_fs_bigclock_clock_pane_t_ParamLimits

0x4e4b,	// (0x00096b5f) main_mup3_lyrics_pane_ParamLimits

0x4e4b,	// (0x00096b5f) main_mup3_lyrics_pane

0x9cf2,	// (0x0009ba06) main_mup3_lyrics_pane_t1_ParamLimits

0x9cf2,	// (0x0009ba06) main_mup3_lyrics_pane_t1

0xad5b,	// (0x0009ca6f) aid_main_mp4_pane_t1_area

0xad65,	// (0x0009ca79) aid_main_mp4_pane_t2_area

0xae11,	// (0x0009cb25) main_mp4_pane_g7_ParamLimits

0xae11,	// (0x0009cb25) main_mp4_pane_g7

0xae1d,	// (0x0009cb31) main_mp4_pane_g8_ParamLimits

0xae1d,	// (0x0009cb31) main_mp4_pane_g8

0x5fe9,	// (0x00097cfd) aid_call6_pane_g1_size

0x9914,	// (0x0009b628) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9914,	// (0x0009b628) list_double_large_graphic_phob2_other_pane

0x9d0d,	// (0x0009ba21) list_double_large_graphic_phob2_other_pane_g1

0xe14c,	// (0x0009fe60) list_highlight_pane_cp026

0xe217,	// (0x0009ff2b) main_welc_pane_ParamLimits

0x85b4,	// (0x0009a2c8) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x85b4,	// (0x0009a2c8) main_sp_fs_ctrlbar_pane_g3

0x85ce,	// (0x0009a2e2) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x85ce,	// (0x0009a2e2) main_sp_fs_ctrlbar_pane_g4

0x8602,	// (0x0009a316) toolbar2_fixed_button_pane_cp01

0x860d,	// (0x0009a321) toolbar2_fixed_button_pane_cp02

0x861a,	// (0x0009a32e) toolbar2_fixed_button_pane_cp03

0x99c5,	// (0x0009b6d9) list_welc_entry_pane_ParamLimits

0x99c5,	// (0x0009b6d9) list_welc_entry_pane

0x9a49,	// (0x0009b75d) main_welc_pane_g3_ParamLimits

0x9a49,	// (0x0009b75d) main_welc_pane_g3

0x9aa3,	// (0x0009b7b7) main_welc_pane_t2_ParamLimits

0x9aa3,	// (0x0009b7b7) main_welc_pane_t2

0x9abe,	// (0x0009b7d2) main_welc_pane_t3_ParamLimits

0x9abe,	// (0x0009b7d2) main_welc_pane_t3

0x0005,

0xfe4c,	// (0x000a1b60) main_welc_pane_t_ParamLimits

0xfe4c,	// (0x000a1b60) main_welc_pane_t

0x9bfa,	// (0x0009b90e) welc_button_pane_ParamLimits

0x9bfa,	// (0x0009b90e) welc_button_pane

0x9c62,	// (0x0009b976) welc_service_logo_pane_ParamLimits

0x9c62,	// (0x0009b976) welc_service_logo_pane

0x9d15,	// (0x0009ba29) list_single_welc_entry_pane_ParamLimits

0x9d15,	// (0x0009ba29) list_single_welc_entry_pane

0x9d28,	// (0x0009ba3c) list_single_welc_entry_pane_g1

0x9d30,	// (0x0009ba44) list_single_welc_entry_pane_t1

0x9d3e,	// (0x0009ba52) list_single_welc_entry_pane_t2

0x0001,

0xfe5e,	// (0x000a1b72) list_single_welc_entry_pane_t

0xe14c,	// (0x0009fe60) bg_button_pane_cp035

0xcfa8,	// (0x0009ecbc) welc_button_pane_t1

0xcfb6,	// (0x0009ecca) welc_service_logo_pane_g1

0xcfbf,	// (0x0009ecd3) welc_service_logo_pane_g2

0x0001,

0xfe63,	// (0x000a1b77) welc_service_logo_pane_g

0xa2d7,	// (0x0009bfeb) main_int_radio_pane

0xbdc8,	// (0x0009dadc) list_single_fs_dyc_pane_g1

0x980c,	// (0x0009b520) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x980c,	// (0x0009b520) list_double_large_graphic_phob2_pane_g3

0x9818,	// (0x0009b52c) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9818,	// (0x0009b52c) list_double_large_graphic_phob2_pane_g4

0x9d4c,	// (0x0009ba60) main_int_radio1_pane_ParamLimits

0x9d4c,	// (0x0009ba60) main_int_radio1_pane

0xcfc8,	// (0x0009ecdc) find_pane_cp02

0x9d69,	// (0x0009ba7d) input_focus_pane_cp12_ParamLimits

0x9d69,	// (0x0009ba7d) input_focus_pane_cp12

0x9d79,	// (0x0009ba8d) input_focus_pane_cp13_ParamLimits

0x9d79,	// (0x0009ba8d) input_focus_pane_cp13

0x9d8d,	// (0x0009baa1) input_focus_pane_cp14_ParamLimits

0x9d8d,	// (0x0009baa1) input_focus_pane_cp14

0xcfd1,	// (0x0009ece5) int_radio1_listscroll_pane

0x9da1,	// (0x0009bab5) main_int_radio1_pane_g1_ParamLimits

0x9da1,	// (0x0009bab5) main_int_radio1_pane_g1

0x9db7,	// (0x0009bacb) main_int_radio1_pane_t1_ParamLimits

0x9db7,	// (0x0009bacb) main_int_radio1_pane_t1

0x9dd0,	// (0x0009bae4) main_int_radio1_pane_t2_ParamLimits

0x9dd0,	// (0x0009bae4) main_int_radio1_pane_t2

0x9deb,	// (0x0009baff) main_int_radio1_pane_t3_ParamLimits

0x9deb,	// (0x0009baff) main_int_radio1_pane_t3

0x9e06,	// (0x0009bb1a) main_int_radio1_pane_t4_ParamLimits

0x9e06,	// (0x0009bb1a) main_int_radio1_pane_t4

0xcfdb,	// (0x0009ecef) main_int_radio1_pane_t5_ParamLimits

0xcfdb,	// (0x0009ecef) main_int_radio1_pane_t5

0x9e18,	// (0x0009bb2c) main_int_radio1_pane_t6_ParamLimits

0x9e18,	// (0x0009bb2c) main_int_radio1_pane_t6

0x9e2d,	// (0x0009bb41) main_int_radio1_pane_t7_ParamLimits

0x9e2d,	// (0x0009bb41) main_int_radio1_pane_t7

0x9e42,	// (0x0009bb56) main_int_radio1_pane_t8_ParamLimits

0x9e42,	// (0x0009bb56) main_int_radio1_pane_t8

0x9e5f,	// (0x0009bb73) main_int_radio1_pane_t9_ParamLimits

0x9e5f,	// (0x0009bb73) main_int_radio1_pane_t9

0x9e71,	// (0x0009bb85) main_int_radio1_pane_t10_ParamLimits

0x9e71,	// (0x0009bb85) main_int_radio1_pane_t10

0x9e97,	// (0x0009bbab) main_int_radio1_pane_t11_ParamLimits

0x9e97,	// (0x0009bbab) main_int_radio1_pane_t11

0x9ebd,	// (0x0009bbd1) main_int_radio1_pane_t12_ParamLimits

0x9ebd,	// (0x0009bbd1) main_int_radio1_pane_t12

0x000b,

0xfe68,	// (0x000a1b7c) main_int_radio1_pane_t_ParamLimits

0xfe68,	// (0x000a1b7c) main_int_radio1_pane_t

0xce4e,	// (0x0009eb62) int_radio_list_pane

0xce56,	// (0x0009eb6a) scroll_pane_cp037

0xcfed,	// (0x0009ed01) list_double_large_graphic_int_radio_pane_ParamLimits

0xcfed,	// (0x0009ed01) list_double_large_graphic_int_radio_pane

0xd001,	// (0x0009ed15) list_double_large_graphic_int_radio_pane_g1

0xd00a,	// (0x0009ed1e) list_double_large_graphic_int_radio_pane_t1

0xd018,	// (0x0009ed2c) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe81,	// (0x000a1b95) list_double_large_graphic_int_radio_pane_t

0xe14c,	// (0x0009fe60) list_highlight_pane_cp027

0xcf46,	// (0x0009ec5a) main_button_pane_4

0x9a5d,	// (0x0009b771) main_welc_pane_g4_ParamLimits

0x9a5d,	// (0x0009b771) main_welc_pane_g4

0x9adb,	// (0x0009b7ef) main_welc_pane_t4_ParamLimits

0x9adb,	// (0x0009b7ef) main_welc_pane_t4

0x9af2,	// (0x0009b806) main_welc_pane_t5_ParamLimits

0x9af2,	// (0x0009b806) main_welc_pane_t5

0x9b33,	// (0x0009b847) main_welc_pane_t6_ParamLimits

0x9b33,	// (0x0009b847) main_welc_pane_t6

0x9c11,	// (0x0009b925) welc_button_pane_2_ParamLimits

0x9c11,	// (0x0009b925) welc_button_pane_2

0x9c2b,	// (0x0009b93f) welc_button_pane_3_ParamLimits

0x9c2b,	// (0x0009b93f) welc_button_pane_3

0xcf4e,	// (0x0009ec62) welc_button_pane_4

0x9c4a,	// (0x0009b95e) welc_button_pane_5_ParamLimits

0x9c4a,	// (0x0009b95e) welc_button_pane_5

0x081a,	// (0x0009252e) main_popup_welc_pane

0xd035,	// (0x0009ed49) main_welc_sk_g3

0xd03f,	// (0x0009ed53) main_welc_sk_g4

0xd049,	// (0x0009ed5d) main_welc_sk_t3

0xd059,	// (0x0009ed6d) main_welc_sk_t4

0xd069,	// (0x0009ed7d) popup_welc_pane_t4

0xd077,	// (0x0009ed8b) popup_welc_pane_t5

0xd087,	// (0x0009ed9b) popup_welc_pane_t6

0xa2d7,	// (0x0009bfeb) main_acti_pane

0xe14c,	// (0x0009fe60) main_sso_pane

0x9ecf,	// (0x0009bbe3) sso_body_pane_ParamLimits

0x9ecf,	// (0x0009bbe3) sso_body_pane

0x9ee4,	// (0x0009bbf8) sso_logo_pane_ParamLimits

0x9ee4,	// (0x0009bbf8) sso_logo_pane

0x9f14,	// (0x0009bc28) sso_sk_pane_ParamLimits

0x9f14,	// (0x0009bc28) sso_sk_pane

0xd382,	// (0x0009f096) main_sso_logo_pane_g1

0x9f26,	// (0x0009bc3a) sso_sk_pane_t1_ParamLimits

0x9f26,	// (0x0009bc3a) sso_sk_pane_t1

0x9f40,	// (0x0009bc54) sso_sk_pane_t2_ParamLimits

0x9f40,	// (0x0009bc54) sso_sk_pane_t2

0x0001,

0xfe86,	// (0x000a1b9a) sso_sk_pane_t_ParamLimits

0xfe86,	// (0x000a1b9a) sso_sk_pane_t

0xd0c9,	// (0x0009eddd) aid_sso_gap

0xd0d2,	// (0x0009ede6) aid_sso_txt1

0xd0dc,	// (0x0009edf0) aid_sso_txt2

0xd0e6,	// (0x0009edfa) aid_sso_txt3

0x0002,

0xfe8b,	// (0x000a1b9f) aid_sso_txt

0xd0f0,	// (0x0009ee04) aid_sso_widget

0x9faa,	// (0x0009bcbe) sso_btn_pane_ParamLimits

0x9faa,	// (0x0009bcbe) sso_btn_pane

0xa032,	// (0x0009bd46) sso_option_pane_ParamLimits

0xa032,	// (0x0009bd46) sso_option_pane

0xa0b6,	// (0x0009bdca) sso_query_pane_ParamLimits

0xa0b6,	// (0x0009bdca) sso_query_pane

0xa10e,	// (0x0009be22) sso_query_pane_cp01_ParamLimits

0xa10e,	// (0x0009be22) sso_query_pane_cp01

0xa16c,	// (0x0009be80) sso_t_hdr_pane_ParamLimits

0xa16c,	// (0x0009be80) sso_t_hdr_pane

0xa190,	// (0x0009bea4) sso_t_nml_pane_ParamLimits

0xa190,	// (0x0009bea4) sso_t_nml_pane

0xd0e6,	// (0x0009edfa) sso_t_sub_pane

0x9ef1,	// (0x0009bc05) sso_popup_window_ParamLimits

0x9ef1,	// (0x0009bc05) sso_popup_window

0x9f56,	// (0x0009bc6a) sso_apps_pane_ParamLimits

0x9f56,	// (0x0009bc6a) sso_apps_pane

0x9f80,	// (0x0009bc94) sso_body_pane_g1

0x9f8a,	// (0x0009bc9e) sso_body_pane_t1

0x9f9a,	// (0x0009bcae) sso_body_pane_t2

0x0001,

0xfe92,	// (0x000a1ba6) sso_body_pane_t

0x9ffc,	// (0x0009bd10) sso_btn_pane_cp01_ParamLimits

0x9ffc,	// (0x0009bd10) sso_btn_pane_cp01

0xa08a,	// (0x0009bd9e) sso_prog_pane_ParamLimits

0xa08a,	// (0x0009bd9e) sso_prog_pane

0xd0fa,	// (0x0009ee0e) sso_t_hdr_pane_t1_ParamLimits

0xd0fa,	// (0x0009ee0e) sso_t_hdr_pane_t1

0xd10d,	// (0x0009ee21) input_focus_pane_cp10_ParamLimits

0xd10d,	// (0x0009ee21) input_focus_pane_cp10

0xd123,	// (0x0009ee37) sso_query_pane_t1_ParamLimits

0xd123,	// (0x0009ee37) sso_query_pane_t1

0xd136,	// (0x0009ee4a) sso_query_pane_t2_ParamLimits

0xd136,	// (0x0009ee4a) sso_query_pane_t2

0xd150,	// (0x0009ee64) sso_query_pane_t3_ParamLimits

0xd150,	// (0x0009ee64) sso_query_pane_t3

0xd17a,	// (0x0009ee8e) sso_query_pane_t4_ParamLimits

0xd17a,	// (0x0009ee8e) sso_query_pane_t4

0x0003,

0xfe97,	// (0x000a1bab) sso_query_pane_t_ParamLimits

0xfe97,	// (0x000a1bab) sso_query_pane_t

0xe14c,	// (0x0009fe60) bg_button_pane_cp22

0xd026,	// (0x0009ed3a) sso_btn_pane_t1

0xa1e6,	// (0x0009befa) sso_t_nml_pane_t1_ParamLimits

0xa1e6,	// (0x0009befa) sso_t_nml_pane_t1

0xd19e,	// (0x0009eeb2) sso_option_row_pane_ParamLimits

0xd19e,	// (0x0009eeb2) sso_option_row_pane

0xd1ab,	// (0x0009eebf) sso_t_sub_pane_t1_ParamLimits

0xd1ab,	// (0x0009eebf) sso_t_sub_pane_t1

0xe217,	// (0x0009ff2b) bg_popup_window_pane_cp11_ParamLimits

0xe217,	// (0x0009ff2b) bg_popup_window_pane_cp11

0xd1be,	// (0x0009eed2) popup_sk_window_cp01_ParamLimits

0xd1be,	// (0x0009eed2) popup_sk_window_cp01

0xd1cb,	// (0x0009eedf) sso_popup_body_pane_ParamLimits

0xd1cb,	// (0x0009eedf) sso_popup_body_pane

0xd1d8,	// (0x0009eeec) scroll_pane_cp21_ParamLimits

0xd1d8,	// (0x0009eeec) scroll_pane_cp21

0xd1e5,	// (0x0009eef9) sso_popup_body_t_pane_ParamLimits

0xd1e5,	// (0x0009eef9) sso_popup_body_t_pane

0xd1f2,	// (0x0009ef06) sso_popup_body_t_hdr_pane_ParamLimits

0xd1f2,	// (0x0009ef06) sso_popup_body_t_hdr_pane

0xd200,	// (0x0009ef14) sso_popup_body_t_nml_pane_ParamLimits

0xd200,	// (0x0009ef14) sso_popup_body_t_nml_pane

0xd21b,	// (0x0009ef2f) sso_popup_body_t_sub_pane_ParamLimits

0xd21b,	// (0x0009ef2f) sso_popup_body_t_sub_pane

0xd23e,	// (0x0009ef52) sso_popup_body_t_hdr_pane_t1

0xa201,	// (0x0009bf15) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa201,	// (0x0009bf15) sso_popup_body_t_nml_pane_t1

0xd24e,	// (0x0009ef62) sso_popup_body_t_sub_pane_t1_ParamLimits

0xd24e,	// (0x0009ef62) sso_popup_body_t_sub_pane_t1

0xd382,	// (0x0009f096) sso_prog_pane_g1

0xa23c,	// (0x0009bf50) sso_apps_pane_comp1_ParamLimits

0xa23c,	// (0x0009bf50) sso_apps_pane_comp1

0xd273,	// (0x0009ef87) sso_apps_pane_comp1_g1

0xd27b,	// (0x0009ef8f) sso_apps_pane_comp1_t1

0xd289,	// (0x0009ef9d) sso_option_row_pane_g1

0xd291,	// (0x0009efa5) sso_option_row_pane_t1

0x99b2,	// (0x0009b6c6) bg_welc_area_ParamLimits

0x99b2,	// (0x0009b6c6) bg_welc_area

0x9b71,	// (0x0009b885) sso_t_hdr_pane_a_t1_ParamLimits

0x9b71,	// (0x0009b885) sso_t_hdr_pane_a_t1

0x9b8c,	// (0x0009b8a0) sso_t_nml_pane_a_t1_ParamLimits

0x9b8c,	// (0x0009b8a0) sso_t_nml_pane_a_t1

0x9bbf,	// (0x0009b8d3) sso_t_sub_pane_a_t1_ParamLimits

0x9bbf,	// (0x0009b8d3) sso_t_sub_pane_a_t1

0xd026,	// (0x0009ed3a) sso_btn_pane_t1_copy1

0xe14c,	// (0x0009fe60) welc_button_pane_2_comp1

0xd097,	// (0x0009edab) sso_t_hdr_pane_p_t1

0xd0a7,	// (0x0009edbb) sso_t_nml_pane_p_t1

0xd0b7,	// (0x0009edcb) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
