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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004e424 };

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
0x4dec,	// (0x00053210) Screen

0x4df8,	// (0x0005321c) application_window

0x4e54,	// (0x00053278) area_bottom_pane_ParamLimits

0x4e54,	// (0x00053278) area_bottom_pane

0x4eb2,	// (0x000532d6) area_top_pane_ParamLimits

0x4eb2,	// (0x000532d6) area_top_pane

0x4f16,	// (0x0005333a) call_video_uplink_pane_ParamLimits

0x4f16,	// (0x0005333a) call_video_uplink_pane

0x4f55,	// (0x00053379) main_pane_ParamLimits

0x4f55,	// (0x00053379) main_pane

0x3303,	// (0x00051727) context_pane

0x8042,	// (0x00056466) navi_pane

0x806b,	// (0x0005648f) popup_cale_events_window_ParamLimits

0x806b,	// (0x0005648f) popup_cale_events_window

0x3316,	// (0x0005173a) popup_mup_playback_window

0x8083,	// (0x000564a7) signal_pane

0xef71,	// (0x0005d395) main_browser_pane

0x160a,	// (0x0004fa2e) main_burst_pane

0x7e92,	// (0x000562b6) main_calc_pane

0x32f7,	// (0x0005171b) main_cale_day_pane

0x7e9f,	// (0x000562c3) main_cale_month_pane

0x32f7,	// (0x0005171b) main_cale_week_pane

0x160a,	// (0x0004fa2e) main_call_pane

0xec29,	// (0x0005d04d) main_call_poc_pane

0x160a,	// (0x0004fa2e) main_camera_pane

0x160a,	// (0x0004fa2e) main_chi_dic_pane

0x1e38,	// (0x0005025c) main_clock_pane

0xec29,	// (0x0005d04d) main_fmradio_pane

0x160a,	// (0x0004fa2e) main_graph_messa_pane

0xec29,	// (0x0005d04d) main_help_pane

0xef71,	// (0x0005d395) main_im_pane

0xee84,	// (0x0005d2a8) main_image_pane_ParamLimits

0xee84,	// (0x0005d2a8) main_image_pane

0xec29,	// (0x0005d04d) main_location2_pane

0x160a,	// (0x0004fa2e) main_location_pane

0xee84,	// (0x0005d2a8) main_messa_pane

0xec29,	// (0x0005d04d) main_mp2_pane

0x160a,	// (0x0004fa2e) main_mp_pane

0xec29,	// (0x0005d04d) main_msg_pane

0xec29,	// (0x0005d04d) main_mup_eq_pane

0xec29,	// (0x0005d04d) main_mup_pane

0xef71,	// (0x0005d395) main_notes_pane

0xec29,	// (0x0005d04d) main_pec_pane

0xec29,	// (0x0005d04d) main_phob_pane

0xec29,	// (0x0005d04d) main_pinb_pane

0xec29,	// (0x0005d04d) main_postcard_pane

0xec29,	// (0x0005d04d) main_qdial_pane

0x160a,	// (0x0004fa2e) main_skin_pane

0xec29,	// (0x0005d04d) main_smil2_pane

0x160a,	// (0x0004fa2e) main_smil_pane

0x160a,	// (0x0004fa2e) main_video_pane

0x160a,	// (0x0004fa2e) main_video_tele_pane

0xee84,	// (0x0005d2a8) main_viewer_pane_ParamLimits

0xee84,	// (0x0005d2a8) main_viewer_pane

0x160a,	// (0x0004fa2e) main_vorec_pane

0x7ef2,	// (0x00056316) popup_blid_sat_info_window_ParamLimits

0x7ef2,	// (0x00056316) popup_blid_sat_info_window

0x7f18,	// (0x0005633c) popup_dyc_status_message_window_ParamLimits

0x7f18,	// (0x0005633c) popup_dyc_status_message_window

0x7f28,	// (0x0005634c) popup_grid_large_graphic_window_ParamLimits

0x7f28,	// (0x0005634c) popup_grid_large_graphic_window

0x7fbd,	// (0x000563e1) popup_loc_request_window_ParamLimits

0x7fbd,	// (0x000563e1) popup_loc_request_window

0x8016,	// (0x0005643a) popup_wml_address_window_ParamLimits

0x8016,	// (0x0005643a) popup_wml_address_window

0x7d6a,	// (0x0005618e) call_muted_g1

0x79e2,	// (0x00055e06) popup_call_audio_conf_window_ParamLimits

0x79e2,	// (0x00055e06) popup_call_audio_conf_window

0x7d7a,	// (0x0005619e) popup_call_audio_first_window_ParamLimits

0x7d7a,	// (0x0005619e) popup_call_audio_first_window

0x7dba,	// (0x000561de) popup_call_audio_in_window_ParamLimits

0x7dba,	// (0x000561de) popup_call_audio_in_window

0x7dde,	// (0x00056202) popup_call_audio_out_window_ParamLimits

0x7dde,	// (0x00056202) popup_call_audio_out_window

0x7e00,	// (0x00056224) popup_call_audio_second_window_ParamLimits

0x7e00,	// (0x00056224) popup_call_audio_second_window

0x7e30,	// (0x00056254) popup_call_audio_wait_window_ParamLimits

0x7e30,	// (0x00056254) popup_call_audio_wait_window

0x7e51,	// (0x00056275) popup_number_entry_window_ParamLimits

0x7e51,	// (0x00056275) popup_number_entry_window

0xe7d3,	// (0x0005cbf7) bg_popup_call_pane_cp05_ParamLimits

0xe7d3,	// (0x0005cbf7) bg_popup_call_pane_cp05

0xe7f3,	// (0x0005cc17) popup_number_entry_window_t1

0xe806,	// (0x0005cc2a) popup_number_entry_window_t2

0xe826,	// (0x0005cc4a) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x0005d48f) popup_number_entry_window_t

0xe86d,	// (0x0005cc91) text_title_cp2

0xe880,	// (0x0005cca4) bg_popup_call_pane_cp_ParamLimits

0xe880,	// (0x0005cca4) bg_popup_call_pane_cp

0xe88e,	// (0x0005ccb2) call_thumbnail_pane

0xe896,	// (0x0005ccba) popup_call_audio_in_window_g1_ParamLimits

0xe896,	// (0x0005ccba) popup_call_audio_in_window_g1

0xe8a2,	// (0x0005ccc6) popup_call_audio_in_window_g2_ParamLimits

0xe8a2,	// (0x0005ccc6) popup_call_audio_in_window_g2

0xe8ae,	// (0x0005ccd2) popup_call_audio_in_window_g3_ParamLimits

0xe8ae,	// (0x0005ccd2) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0005d498) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0005d498) popup_call_audio_in_window_g

0xe8ba,	// (0x0005ccde) popup_call_audio_in_window_t1_ParamLimits

0xe8ba,	// (0x0005ccde) popup_call_audio_in_window_t1

0xe8d6,	// (0x0005ccfa) popup_call_audio_in_window_t2_ParamLimits

0xe8d6,	// (0x0005ccfa) popup_call_audio_in_window_t2

0xe8f2,	// (0x0005cd16) popup_call_audio_in_window_t3_ParamLimits

0xe8f2,	// (0x0005cd16) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0005d49f) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0005d49f) popup_call_audio_in_window_t

0xe880,	// (0x0005cca4) bg_popup_call_pane_cp01_ParamLimits

0xe880,	// (0x0005cca4) bg_popup_call_pane_cp01

0xe88e,	// (0x0005ccb2) call_thumbnail_pane_cp02

0xe905,	// (0x0005cd29) call_type_pane_cp022

0xe90d,	// (0x0005cd31) popup_call_audio_out_window_g1_ParamLimits

0xe90d,	// (0x0005cd31) popup_call_audio_out_window_g1

0xe91f,	// (0x0005cd43) popup_call_audio_out_window_g2_ParamLimits

0xe91f,	// (0x0005cd43) popup_call_audio_out_window_g2

0xe92b,	// (0x0005cd4f) popup_call_audio_out_window_g3_ParamLimits

0xe92b,	// (0x0005cd4f) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0005d4a6) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0005d4a6) popup_call_audio_out_window_g

0xe93d,	// (0x0005cd61) popup_call_audio_out_window_t1_ParamLimits

0xe93d,	// (0x0005cd61) popup_call_audio_out_window_t1

0xe955,	// (0x0005cd79) popup_call_audio_out_window_t2_ParamLimits

0xe955,	// (0x0005cd79) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0005d4ad) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0005d4ad) popup_call_audio_out_window_t

0xe96a,	// (0x0005cd8e) bg_popup_call_pane_ParamLimits

0xe96a,	// (0x0005cd8e) bg_popup_call_pane

0x5136,	// (0x0005355a) call_thumbnail_pane_cp_ParamLimits

0x5136,	// (0x0005355a) call_thumbnail_pane_cp

0xe9ee,	// (0x0005ce12) call_type_pane_cp01_ParamLimits

0xe9ee,	// (0x0005ce12) call_type_pane_cp01

0xea32,	// (0x0005ce56) popup_call_audio_first_window_g1_ParamLimits

0xea32,	// (0x0005ce56) popup_call_audio_first_window_g1

0xea7e,	// (0x0005cea2) popup_call_audio_first_window_g2_ParamLimits

0xea7e,	// (0x0005cea2) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x0005d4b2) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x0005d4b2) popup_call_audio_first_window_g

0xeac2,	// (0x0005cee6) popup_call_audio_first_window_t1_ParamLimits

0xeac2,	// (0x0005cee6) popup_call_audio_first_window_t1

0xeb6e,	// (0x0005cf92) popup_call_audio_first_window_t4_ParamLimits

0xeb6e,	// (0x0005cf92) popup_call_audio_first_window_t4

0xebfa,	// (0x0005d01e) popup_call_audio_first_window_t5_ParamLimits

0xebfa,	// (0x0005d01e) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0005d4b7) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0005d4b7) popup_call_audio_first_window_t

0xec29,	// (0x0005d04d) bg_popup_call_pane_cp02

0xec33,	// (0x0005d057) call_type_pane_cp023

0xec3b,	// (0x0005d05f) popup_call_audio_wait_window_g1

0xec43,	// (0x0005d067) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0005d4be) popup_call_audio_wait_window_g

0xec4b,	// (0x0005d06f) popup_call_audio_wait_window_t3

0xec59,	// (0x0005d07d) bg_popup_call_pane_cp03_ParamLimits

0xec59,	// (0x0005d07d) bg_popup_call_pane_cp03

0xecb9,	// (0x0005d0dd) call_thumbnail_pane_cp011_ParamLimits

0xecb9,	// (0x0005d0dd) call_thumbnail_pane_cp011

0xecc5,	// (0x0005d0e9) call_type_pane_cp034_ParamLimits

0xecc5,	// (0x0005d0e9) call_type_pane_cp034

0xed01,	// (0x0005d125) popup_call_audio_second_window_g1_ParamLimits

0xed01,	// (0x0005d125) popup_call_audio_second_window_g1

0xed3d,	// (0x0005d161) popup_call_audio_second_window_g2_ParamLimits

0xed3d,	// (0x0005d161) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x0005d4c3) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x0005d4c3) popup_call_audio_second_window_g

0xed79,	// (0x0005d19d) popup_call_audio_second_window_t1_ParamLimits

0xed79,	// (0x0005d19d) popup_call_audio_second_window_t1

0xedfa,	// (0x0005d21e) popup_call_audio_second_window_t2_ParamLimits

0xedfa,	// (0x0005d21e) popup_call_audio_second_window_t2

0xee30,	// (0x0005d254) popup_call_audio_second_window_t3_ParamLimits

0xee30,	// (0x0005d254) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0005d4c8) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0005d4c8) popup_call_audio_second_window_t

0xec29,	// (0x0005d04d) bg_popup_call_pane_cp04

0xee66,	// (0x0005d28a) list_conf_pane

0xee6e,	// (0x0005d292) popup_call_audio_conf_window_t1

0xee7c,	// (0x0005d2a0) call_thumbnail_pane_g1

0xee84,	// (0x0005d2a8) bg_pinb_pane_ParamLimits

0xee84,	// (0x0005d2a8) bg_pinb_pane

0xee92,	// (0x0005d2b6) find_pinb_pane

0xee84,	// (0x0005d2a8) listscroll_pinb_pane_ParamLimits

0xee84,	// (0x0005d2a8) listscroll_pinb_pane

0xee9c,	// (0x0005d2c0) pinb_bg_pane_g1

0xee9c,	// (0x0005d2c0) pinb_bg_pane_g2

0xee9c,	// (0x0005d2c0) pinb_bg_pane_g3

0xee9c,	// (0x0005d2c0) pinb_bg_pane_g4

0xee9c,	// (0x0005d2c0) pinb_bg_pane_g5

0xee9c,	// (0x0005d2c0) pinb_bg_pane_g6

0xee9c,	// (0x0005d2c0) pinb_bg_pane_g7

0xee9c,	// (0x0005d2c0) pinb_bg_pane_g8

0xee9c,	// (0x0005d2c0) pinb_bg_pane_g9

0xee9c,	// (0x0005d2c0) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0005d4cf) pinb_bg_pane_g

0xe7c9,	// (0x0005cbed) grid_pinb_pane

0xe7c9,	// (0x0005cbed) list_pinb_pane

0xe818,	// (0x0005cc3c) scroll_pane_cp01_ParamLimits

0xe818,	// (0x0005cc3c) scroll_pane_cp01

0xeea6,	// (0x0005d2ca) find_pinb_pane_g1_ParamLimits

0xeea6,	// (0x0005d2ca) find_pinb_pane_g1

0xeebe,	// (0x0005d2e2) find_pinb_pane_t1

0xeed0,	// (0x0005d2f4) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0005d4e9) find_pinb_pane_t

0xeee5,	// (0x0005d309) input_focus_pane_cp01_ParamLimits

0xeee5,	// (0x0005d309) input_focus_pane_cp01

0xeef1,	// (0x0005d315) cell_pinb_pane_ParamLimits

0xeef1,	// (0x0005d315) cell_pinb_pane

0xeeff,	// (0x0005d323) cell_pinb_pane_g1_ParamLimits

0xeeff,	// (0x0005d323) cell_pinb_pane_g1

0xef0d,	// (0x0005d331) cell_pinb_pane_g2_ParamLimits

0xef0d,	// (0x0005d331) cell_pinb_pane_g2

0xef0d,	// (0x0005d331) cell_pinb_pane_g3_ParamLimits

0xef0d,	// (0x0005d331) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0005d4ee) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0005d4ee) cell_pinb_pane_g

0xec29,	// (0x0005d04d) grid_highlight_pane_cp01

0xeef1,	// (0x0005d315) list_pinb_item_pane_ParamLimits

0xeef1,	// (0x0005d315) list_pinb_item_pane

0xe7c9,	// (0x0005cbed) list_highlight_pane_cp02

0xef1b,	// (0x0005d33f) list_pinb_item_pane_g1_ParamLimits

0xef1b,	// (0x0005d33f) list_pinb_item_pane_g1

0xef0d,	// (0x0005d331) list_pinb_item_pane_g2_ParamLimits

0xef0d,	// (0x0005d331) list_pinb_item_pane_g2

0xeeff,	// (0x0005d323) list_pinb_item_pane_g3_ParamLimits

0xeeff,	// (0x0005d323) list_pinb_item_pane_g3

0xef0d,	// (0x0005d331) list_pinb_item_pane_g4_ParamLimits

0xef0d,	// (0x0005d331) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0005d4f5) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0005d4f5) list_pinb_item_pane_g

0xef29,	// (0x0005d34d) list_pinb_item_pane_t1_ParamLimits

0xef29,	// (0x0005d34d) list_pinb_item_pane_t1

0x5174,	// (0x00053598) calc_display_pane

0x5192,	// (0x000535b6) calc_paper_pane

0x51ae,	// (0x000535d2) grid_calc_pane

0xec29,	// (0x0005d04d) bg_list_pane_cp01

0x51da,	// (0x000535fe) clock_g1

0x51e2,	// (0x00053606) clock_g2

0x0001,

0xf0da,	// (0x0005d4fe) clock_g

0x51ec,	// (0x00053610) clock_t1_ParamLimits

0x51ec,	// (0x00053610) clock_t1

0x5201,	// (0x00053625) clock_t2_ParamLimits

0x5201,	// (0x00053625) clock_t2

0x5213,	// (0x00053637) clock_t3_ParamLimits

0x5213,	// (0x00053637) clock_t3

0x5225,	// (0x00053649) clock_t4_ParamLimits

0x5225,	// (0x00053649) clock_t4

0x5237,	// (0x0005365b) clock_t5_ParamLimits

0x5237,	// (0x0005365b) clock_t5

0x524c,	// (0x00053670) clock_t6_ParamLimits

0x524c,	// (0x00053670) clock_t6

0x525e,	// (0x00053682) clock_t7_ParamLimits

0x525e,	// (0x00053682) clock_t7

0x5270,	// (0x00053694) clock_t8_ParamLimits

0x5270,	// (0x00053694) clock_t8

0x5286,	// (0x000536aa) clock_t9_ParamLimits

0x5286,	// (0x000536aa) clock_t9

0x0008,

0xf0df,	// (0x0005d503) clock_t_ParamLimits

0xf0df,	// (0x0005d503) clock_t

0xef3d,	// (0x0005d361) popup_clock_analogue_window_cp02

0xef3d,	// (0x0005d361) popup_clock_digital_window_cp01

0xec29,	// (0x0005d04d) listscroll_help_pane

0xec29,	// (0x0005d04d) phob_pre_status_pane

0xef45,	// (0x0005d369) grid_qdial_pane

0x529c,	// (0x000536c0) listscroll_mce_pane

0xee84,	// (0x0005d2a8) bg_notes_pane

0xef4f,	// (0x0005d373) list_notes_pane

0x52ba,	// (0x000536de) scroll_pane_cp06

0xef5d,	// (0x0005d381) bg_calc_paper_pane

0x52c9,	// (0x000536ed) list_calc_pane

0xef71,	// (0x0005d395) bg_calc_display_pane

0x52e3,	// (0x00053707) calc_display_pane_t1

0x52f8,	// (0x0005371c) calc_display_pane_t2

0x530d,	// (0x00053731) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0005d516) calc_display_pane_t

0x531f,	// (0x00053743) cell_calc_pane_ParamLimits

0x531f,	// (0x00053743) cell_calc_pane

0xef7d,	// (0x0005d3a1) bg_calc_paper_pane_g1

0xef95,	// (0x0005d3b9) bg_calc_paper_pane_g2

0xef89,	// (0x0005d3ad) bg_calc_paper_pane_g3

0xefa1,	// (0x0005d3c5) bg_calc_paper_pane_g4

0xefad,	// (0x0005d3d1) bg_calc_paper_pane_g5

0x534e,	// (0x00053772) bg_calc_paper_pane_g6

0x535f,	// (0x00053783) bg_calc_paper_pane_g7

0x5370,	// (0x00053794) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0005d51d) bg_calc_paper_pane_g

0x5381,	// (0x000537a5) calc_bg_paper_pane_g9

0x5392,	// (0x000537b6) list_calc_item_pane_ParamLimits

0x5392,	// (0x000537b6) list_calc_item_pane

0xefb9,	// (0x0005d3dd) list_calc_item_pane_g1

0x53b3,	// (0x000537d7) list_calc_item_pane_t1_ParamLimits

0x53b3,	// (0x000537d7) list_calc_item_pane_t1

0x53c5,	// (0x000537e9) list_calc_item_pane_t2_ParamLimits

0x53c5,	// (0x000537e9) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0005d52e) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0005d52e) list_calc_item_pane_t

0xee9c,	// (0x0005d2c0) cell_calc_pane_g1

0xefc6,	// (0x0005d3ea) grid_highlight_pane_cp02

0xd5b5,	// (0x0005b9d9) bg_calc_display_pane_g1

0x53f5,	// (0x00053819) bg_calc_display_pane_g2

0xd5be,	// (0x0005b9e2) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0005d538) bg_calc_display_pane_g

0x53ff,	// (0x00053823) cell_qdial_pane_ParamLimits

0x53ff,	// (0x00053823) cell_qdial_pane

0x5415,	// (0x00053839) cell_qdial_pane_g1_ParamLimits

0x5415,	// (0x00053839) cell_qdial_pane_g1

0x5422,	// (0x00053846) cell_qdial_pane_g2_ParamLimits

0x5422,	// (0x00053846) cell_qdial_pane_g2

0xeff1,	// (0x0005d415) cell_qdial_pane_g3_ParamLimits

0xeff1,	// (0x0005d415) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x0005d53f) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x0005d53f) cell_qdial_pane_g

0x5440,	// (0x00053864) cell_qdial_pane_t1_ParamLimits

0x5440,	// (0x00053864) cell_qdial_pane_t1

0x5458,	// (0x0005387c) cell_qdial_pane_t2_ParamLimits

0x5458,	// (0x0005387c) cell_qdial_pane_t2

0x546b,	// (0x0005388f) cell_qdial_pane_t3_ParamLimits

0x546b,	// (0x0005388f) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0005d548) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0005d548) cell_qdial_pane_t

0xec29,	// (0x0005d04d) grid_highlight_pane_cp04

0xeffd,	// (0x0005d421) thumbnail_qdial_pane_ParamLimits

0xeffd,	// (0x0005d421) thumbnail_qdial_pane

0xf059,	// (0x0005d47d) list_help_pane

0xf062,	// (0x0005d486) scroll_pane_cp02

0x547e,	// (0x000538a2) help_list_pane_t1_ParamLimits

0x547e,	// (0x000538a2) help_list_pane_t1

0x54a5,	// (0x000538c9) bg_notes_pane_g2

0x54ad,	// (0x000538d1) bg_notes_pane_g3

0x54b5,	// (0x000538d9) notes_bg_pane_g1

0x54bd,	// (0x000538e1) notes_bg_pane_g4

0x54c5,	// (0x000538e9) notes_bg_pane_g5

0x54cd,	// (0x000538f1) notes_bg_pane_g6

0x54d5,	// (0x000538f9) notes_bg_pane_g7

0x54dd,	// (0x00053901) notes_bg_pane_g8

0x54e5,	// (0x00053909) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0005d566) notes_bg_pane_g

0x54ed,	// (0x00053911) list_notes_text_pane_ParamLimits

0x54ed,	// (0x00053911) list_notes_text_pane

0x155d,	// (0x0004f981) list_notes_text_pane_g1

0x5515,	// (0x00053939) list_notes_text_pane_t1

0x5523,	// (0x00053947) listscroll_cale_week_pane

0x554f,	// (0x00053973) bg_cale_heading_pane

0x5578,	// (0x0005399c) bg_cale_pane_cp01

0x559a,	// (0x000539be) cale_week_corner_pane

0x55b9,	// (0x000539dd) cale_week_day_heading_pane

0x55e7,	// (0x00053a0b) cale_week_scroll_pane_g1

0x560b,	// (0x00053a2f) cale_week_scroll_pane_g2

0x5623,	// (0x00053a47) cale_week_scroll_pane_g3

0x563b,	// (0x00053a5f) cale_week_scroll_pane_g4

0x5653,	// (0x00053a77) cale_week_scroll_pane_g5

0x566b,	// (0x00053a8f) cale_week_scroll_pane_g6

0x568b,	// (0x00053aaf) cale_week_scroll_pane_g7

0x56ab,	// (0x00053acf) cale_week_scroll_pane_g8

0x56cb,	// (0x00053aef) cale_week_scroll_pane_g9

0x56e8,	// (0x00053b0c) cale_week_scroll_pane_g10

0x5705,	// (0x00053b29) cale_week_scroll_pane_g11

0x5724,	// (0x00053b48) cale_week_scroll_pane_g12

0x5749,	// (0x00053b6d) cale_week_scroll_pane_g13

0x5772,	// (0x00053b96) cale_week_scroll_pane_g14

0x579b,	// (0x00053bbf) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x0005d575) cale_week_scroll_pane_g

0x57e4,	// (0x00053c08) cale_week_time_pane

0x5804,	// (0x00053c28) grid_cale_week_pane

0x1592,	// (0x0004f9b6) scroll_pane_cp08

0x5835,	// (0x00053c59) cell_cale_week_pane_ParamLimits

0x5835,	// (0x00053c59) cell_cale_week_pane

0x58c5,	// (0x00053ce9) cale_week_day_heading_pane_t1

0x58ed,	// (0x00053d11) cale_week_day_heading_pane_t2

0x591a,	// (0x00053d3e) cale_week_day_heading_pane_t3

0x5947,	// (0x00053d6b) cale_week_day_heading_pane_t4

0x5974,	// (0x00053d98) cale_week_day_heading_pane_t5

0x59a1,	// (0x00053dc5) cale_week_day_heading_pane_t6

0x59ce,	// (0x00053df2) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x0005d596) cale_week_day_heading_pane_t

0x15af,	// (0x0004f9d3) bg_cale_side_pane

0x59f6,	// (0x00053e1a) cale_week_time_pane_t1

0x5a1a,	// (0x00053e3e) cale_week_time_pane_t2

0x5a3e,	// (0x00053e62) cale_week_time_pane_t3

0x5a62,	// (0x00053e86) cale_week_time_pane_t4

0x5a86,	// (0x00053eaa) cale_week_time_pane_t5

0x5aac,	// (0x00053ed0) cale_week_time_pane_t6

0x5ad4,	// (0x00053ef8) cale_week_time_pane_t7

0x5b00,	// (0x00053f24) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x0005d5a5) cale_week_time_pane_t

0x5b30,	// (0x00053f54) cell_cale_week_pane_g2

0x5b54,	// (0x00053f78) cell_cale_week_pane_g3_ParamLimits

0x5b54,	// (0x00053f78) cell_cale_week_pane_g3

0x15bd,	// (0x0004f9e1) grid_highlight_pane_cp07

0x15c5,	// (0x0004f9e9) listscroll_gms_pane

0x15cf,	// (0x0004f9f3) grid_gms_pane

0x15d8,	// (0x0004f9fc) listscroll_gms_pane_g1

0x15e0,	// (0x0004fa04) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x0005d5b6) listscroll_gms_pane_g

0x5b6c,	// (0x00053f90) scroll_pane_cp010

0x5b77,	// (0x00053f9b) cell_gms_pane_ParamLimits

0x5b77,	// (0x00053f9b) cell_gms_pane

0x5b8a,	// (0x00053fae) cell_gms_pane_g1

0x15e8,	// (0x0004fa0c) cell_gms_pane_g2

0x15f0,	// (0x0004fa14) cell_gms_pane_g3

0x15f9,	// (0x0004fa1d) cell_gms_pane_g4

0x0003,

0xf197,	// (0x0005d5bb) cell_gms_pane_g

0x1602,	// (0x0004fa26) grid_highlight_pane_cp09

0x7cee,	// (0x00056112) phob_pre_status_pane_g1

0x7cf6,	// (0x0005611a) phob_pre_status_pane_g2

0x7cfe,	// (0x00056122) phob_pre_status_pane_g3

0x7d06,	// (0x0005612a) phob_pre_status_pane_g4

0x0004,

0xf560,	// (0x0005d984) phob_pre_status_pane_g

0x7d16,	// (0x0005613a) phob_pre_status_pane_t1

0x7d26,	// (0x0005614a) phob_pre_status_pane_t2

0x7d36,	// (0x0005615a) phob_pre_status_pane_t3

0x0002,

0xf56b,	// (0x0005d98f) phob_pre_status_pane_t

0x160a,	// (0x0004fa2e) bg_list_pane_cp05

0x5b9a,	// (0x00053fbe) grid_vorec_pane

0x5ba4,	// (0x00053fc8) vorec_t1

0x5bb2,	// (0x00053fd6) vorec_t2

0x5bc0,	// (0x00053fe4) vorec_t3

0x5bce,	// (0x00053ff2) vorec_t4

0xd07e,	// (0x0005b4a2) vorec_t5

0xd08c,	// (0x0005b4b0) vorec_t6

0x0004,

0xf1a0,	// (0x0005d5c4) vorec_t

0xd09a,	// (0x0005b4be) wait_bar_pane_cp01

0x5bea,	// (0x0005400e) cell_vorec_pane_ParamLimits

0x5bea,	// (0x0005400e) cell_vorec_pane

0x5bff,	// (0x00054023) cell_vorec_pane_g1

0xec29,	// (0x0005d04d) grid_highlight_pane_cp05

0xeef1,	// (0x0005d315) cams_zoom_pane

0xeef1,	// (0x0005d315) image_vga_pane

0xef0d,	// (0x0005d331) main_camera_pane_g1

0xef0d,	// (0x0005d331) main_camera_pane_g2

0xef0d,	// (0x0005d331) main_camera_pane_g3

0xef0d,	// (0x0005d331) main_camera_pane_g4

0xef0d,	// (0x0005d331) main_camera_pane_g5

0xef0d,	// (0x0005d331) main_camera_pane_g6

0xef0d,	// (0x0005d331) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x0005d5cf) main_camera_pane_g

0x1c43,	// (0x00050067) main_camera_pane_t1

0x1c43,	// (0x00050067) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x0005d5e0) main_camera_pane_t

0x5c09,	// (0x0005402d) cams_zoom_pane_cp_ParamLimits

0x5c09,	// (0x0005402d) cams_zoom_pane_cp

0x5c37,	// (0x0005405b) image_cif_pane_ParamLimits

0x5c37,	// (0x0005405b) image_cif_pane

0xe7c9,	// (0x0005cbed) image_subqcif_pane

0x5c45,	// (0x00054069) main_video_pane_g1_ParamLimits

0x5c45,	// (0x00054069) main_video_pane_g1

0x5c6d,	// (0x00054091) main_video_pane_g2_ParamLimits

0x5c6d,	// (0x00054091) main_video_pane_g2

0x5ca0,	// (0x000540c4) main_video_pane_g3_ParamLimits

0x5ca0,	// (0x000540c4) main_video_pane_g3

0x5ca0,	// (0x000540c4) main_video_pane_g4_ParamLimits

0x5ca0,	// (0x000540c4) main_video_pane_g4

0x5cce,	// (0x000540f2) main_video_pane_g5_ParamLimits

0x5cce,	// (0x000540f2) main_video_pane_g5

0x1626,	// (0x0004fa4a) main_video_pane_g6_ParamLimits

0x1626,	// (0x0004fa4a) main_video_pane_g6

0x0006,

0xf1c1,	// (0x0005d5e5) main_video_pane_g_ParamLimits

0xf1c1,	// (0x0005d5e5) main_video_pane_g

0x5cea,	// (0x0005410e) main_video_pane_t1_ParamLimits

0x5cea,	// (0x0005410e) main_video_pane_t1

0x1640,	// (0x0004fa64) cams_zoom_pane_g1

0x1640,	// (0x0004fa64) cams_zoom_pane_g2

0x1640,	// (0x0004fa64) cams_zoom_pane_g3

0x1640,	// (0x0004fa64) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x0005d5f4) cams_zoom_pane_g

0x5d30,	// (0x00054154) grid_cams_pane

0x5d3e,	// (0x00054162) linegrid_cams_pane

0x5d4a,	// (0x0005416e) cell_cams_pane_ParamLimits

0x5d4a,	// (0x0005416e) cell_cams_pane

0x164a,	// (0x0004fa6e) cams_burst_image_pane

0x1652,	// (0x0004fa76) cell_cams_pane_g1

0xec29,	// (0x0005d04d) grid_highlight_pane_cp03

0xee9c,	// (0x0005d2c0) mp_bg_pane_g1

0xe7c9,	// (0x0005cbed) bg_list_pane_cp03

0xe7c9,	// (0x0005cbed) bg_mp_pane

0xe7c9,	// (0x0005cbed) grid_mp_pane

0x1640,	// (0x0004fa64) media_player_g1

0x1b95,	// (0x0004ffb9) media_player_t1

0x1b95,	// (0x0004ffb9) media_player_t2

0x1b95,	// (0x0004ffb9) media_player_t3

0x1b95,	// (0x0004ffb9) media_player_t4

0x1b95,	// (0x0004ffb9) media_player_t5

0x1b95,	// (0x0004ffb9) media_player_t6

0x1b95,	// (0x0004ffb9) media_player_t7

0x0006,

0xf54a,	// (0x0005d96e) media_player_t

0xe7c9,	// (0x0005cbed) wait_bar_pane_cp02

0xf52f,	// (0x0005d953) main_usb_pane_t

0x1e38,	// (0x0005025c) cell_mp_pane

0xee9c,	// (0x0005d2c0) cell_mp_pane_g1

0xec29,	// (0x0005d04d) grid_highlight_pane_cp06

0x165a,	// (0x0004fa7e) grid_skin_colour_pane

0x1662,	// (0x0004fa86) list_highlight_pane_cp03

0x5d5f,	// (0x00054183) skin_g1

0x166a,	// (0x0004fa8e) skin_t1

0x1679,	// (0x0004fa9d) skin_t2

0x0001,

0xf1fe,	// (0x0005d622) skin_t

0x5d69,	// (0x0005418d) cell_skin_colour_pane_ParamLimits

0x5d69,	// (0x0005418d) cell_skin_colour_pane

0x1687,	// (0x0004faab) cell_skin_colour_pane_g1

0x5de9,	// (0x0005420d) call_video_g1_ParamLimits

0x5de9,	// (0x0005420d) call_video_g1

0x5df9,	// (0x0005421d) call_video_g2_ParamLimits

0x5df9,	// (0x0005421d) call_video_g2

0x0001,

0xf203,	// (0x0005d627) call_video_g_ParamLimits

0xf203,	// (0x0005d627) call_video_g

0x5e49,	// (0x0005426d) call_video_uplink_pane_cp1_ParamLimits

0x5e49,	// (0x0005426d) call_video_uplink_pane_cp1

0x1699,	// (0x0004fabd) call_video_uplink_pane_cp2

0x5f17,	// (0x0005433b) video_down_crop_pane_ParamLimits

0x5f17,	// (0x0005433b) video_down_crop_pane

0x6009,	// (0x0005442d) video_down_pane_ParamLimits

0x6009,	// (0x0005442d) video_down_pane

0x16a1,	// (0x0004fac5) video_down_subqcif_pane_ParamLimits

0x16a1,	// (0x0004fac5) video_down_subqcif_pane

0x16bb,	// (0x0004fadf) video_down_subqcif_pane_cp_ParamLimits

0x16bb,	// (0x0004fadf) video_down_subqcif_pane_cp

0x16e3,	// (0x0004fb07) im_reading_pane_ParamLimits

0x16e3,	// (0x0004fb07) im_reading_pane

0x6126,	// (0x0005454a) im_writing_pane_ParamLimits

0x6126,	// (0x0005454a) im_writing_pane

0x6144,	// (0x00054568) im_reading_pane_t1

0x16fd,	// (0x0004fb21) list_im_pane

0x170e,	// (0x0004fb32) scroll_pane_cp07

0x6186,	// (0x000545aa) im_writing_pane_t1_ParamLimits

0x6186,	// (0x000545aa) im_writing_pane_t1

0x1727,	// (0x0004fb4b) im_writing_pane_t2_ParamLimits

0x1727,	// (0x0004fb4b) im_writing_pane_t2

0x0001,

0xf20d,	// (0x0005d631) im_writing_pane_t_ParamLimits

0xf20d,	// (0x0005d631) im_writing_pane_t

0xec29,	// (0x0005d04d) input_focus_pane_cp04

0xec29,	// (0x0005d04d) input_focus_pane_cp05

0x6198,	// (0x000545bc) list_im_single_pane_ParamLimits

0x6198,	// (0x000545bc) list_im_single_pane

0x61b1,	// (0x000545d5) list_single_im_pane_t1

0x160a,	// (0x0004fa2e) blid_accuracy_pane

0x160a,	// (0x0004fa2e) blid_compass_pane

0x32af,	// (0x000516d3) main_location_t1

0x32af,	// (0x000516d3) main_location_t2

0x32af,	// (0x000516d3) main_location_t3

0x0002,

0xf559,	// (0x0005d97d) main_location_t

0xec29,	// (0x0005d04d) aid_levels_location

0xee9c,	// (0x0005d2c0) blid_accuracy_pane_g1

0xee9c,	// (0x0005d2c0) blid_accuracy_pane_g2

0x0001,

0xf261,	// (0x0005d685) blid_accuracy_pane_g

0x176f,	// (0x0004fb93) wml_content_pane

0x17ad,	// (0x0004fbd1) wml_button_pane_ParamLimits

0x17ad,	// (0x0004fbd1) wml_button_pane

0x61c0,	// (0x000545e4) wml_list_single_large_pane_ParamLimits

0x61c0,	// (0x000545e4) wml_list_single_large_pane

0x61e2,	// (0x00054606) wml_list_single_medium_pane_ParamLimits

0x61e2,	// (0x00054606) wml_list_single_medium_pane

0x6205,	// (0x00054629) wml_list_single_small_pane_ParamLimits

0x6205,	// (0x00054629) wml_list_single_small_pane

0x17c1,	// (0x0004fbe5) wml_selection_box_pane_ParamLimits

0x17c1,	// (0x0004fbe5) wml_selection_box_pane

0x17d4,	// (0x0004fbf8) wml_list_single_pane_t1

0x17e3,	// (0x0004fc07) wml_list_single_medium_pane_t1

0x17f2,	// (0x0004fc16) wml_list_single_large_pane_t1

0x1801,	// (0x0004fc25) input_focus_pane_cp02_ParamLimits

0x1801,	// (0x0004fc25) input_focus_pane_cp02

0x1814,	// (0x0004fc38) wml_selection_box_pane_g1

0x181d,	// (0x0004fc41) wml_selection_box_pane_t1_ParamLimits

0x181d,	// (0x0004fc41) wml_selection_box_pane_t1

0xee84,	// (0x0005d2a8) bg_wml_button_pane_ParamLimits

0xee84,	// (0x0005d2a8) bg_wml_button_pane

0x1835,	// (0x0004fc59) wml_button_pane_g1

0x183d,	// (0x0004fc61) wml_button_pane_t1

0x1835,	// (0x0004fc59) wml_button_bg_pane_g1

0x184d,	// (0x0004fc71) wml_button_bg_pane_g2

0x1855,	// (0x0004fc79) wml_button_bg_pane_g3

0x185d,	// (0x0004fc81) wml_button_bg_pane_g4

0x1865,	// (0x0004fc89) wml_button_bg_pane_g5

0x186d,	// (0x0004fc91) wml_button_bg_pane_g6

0x1875,	// (0x0004fc99) wml_button_bg_pane_g7

0x187d,	// (0x0004fca1) wml_button_bg_pane_g8

0x1885,	// (0x0004fca9) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x0005d636) wml_button_bg_pane_g

0x622d,	// (0x00054651) bg_list_pane_cp02

0x188d,	// (0x0004fcb1) mce_header_pane_ParamLimits

0x188d,	// (0x0004fcb1) mce_header_pane

0x18a3,	// (0x0004fcc7) mce_icon_pane

0x18a3,	// (0x0004fcc7) mce_image_pane

0x18ac,	// (0x0004fcd0) mce_text_pane_ParamLimits

0x18ac,	// (0x0004fcd0) mce_text_pane

0x6235,	// (0x00054659) scroll_pane_cp03

0x17a5,	// (0x0004fbc9) scroll_pane_cp04

0x18bf,	// (0x0004fce3) scroll_pane_cp05_ParamLimits

0x18bf,	// (0x0004fce3) scroll_pane_cp05

0x623d,	// (0x00054661) mce_header_field_pane_ParamLimits

0x623d,	// (0x00054661) mce_header_field_pane

0x625f,	// (0x00054683) mce_header_field_pane_2_ParamLimits

0x625f,	// (0x00054683) mce_header_field_pane_2

0x6275,	// (0x00054699) mce_header_field_pane_3

0x18cb,	// (0x0004fcef) list_single_mce_message_pane_ParamLimits

0x18cb,	// (0x0004fcef) list_single_mce_message_pane

0x18da,	// (0x0004fcfe) list_single_mce_smart_pane_ParamLimits

0x18da,	// (0x0004fcfe) list_single_mce_smart_pane

0x18f4,	// (0x0004fd18) input_focus_pane_cp03

0x18fd,	// (0x0004fd21) list_header_data_pane

0x627d,	// (0x000546a1) mce_header_field_pane_t1

0x628b,	// (0x000546af) list_single_mce_header_pane_ParamLimits

0x628b,	// (0x000546af) list_single_mce_header_pane

0x1905,	// (0x0004fd29) list_single_mce_header_pane_t1

0x1914,	// (0x0004fd38) list_single_mce_message_pane_g1

0x191c,	// (0x0004fd40) list_single_mce_message_pane_t1

0x62c1,	// (0x000546e5) bg_cale_heading_pane_cp01_ParamLimits

0x62c1,	// (0x000546e5) bg_cale_heading_pane_cp01

0x192a,	// (0x0004fd4e) bg_cale_pane_cp02_ParamLimits

0x192a,	// (0x0004fd4e) bg_cale_pane_cp02

0x6313,	// (0x00054737) cale_month_corner_pane

0x6332,	// (0x00054756) cale_month_day_heading_pane_ParamLimits

0x6332,	// (0x00054756) cale_month_day_heading_pane

0x6394,	// (0x000547b8) cale_month_pane_g1_ParamLimits

0x6394,	// (0x000547b8) cale_month_pane_g1

0x63db,	// (0x000547ff) cale_month_pane_g2_ParamLimits

0x63db,	// (0x000547ff) cale_month_pane_g2

0x6413,	// (0x00054837) cale_month_pane_g3_ParamLimits

0x6413,	// (0x00054837) cale_month_pane_g3

0x6467,	// (0x0005488b) cale_month_pane_g4_ParamLimits

0x6467,	// (0x0005488b) cale_month_pane_g4

0x64bb,	// (0x000548df) cale_month_pane_g5_ParamLimits

0x64bb,	// (0x000548df) cale_month_pane_g5

0x650f,	// (0x00054933) cale_month_pane_g6_ParamLimits

0x650f,	// (0x00054933) cale_month_pane_g6

0x6573,	// (0x00054997) cale_month_pane_g7_ParamLimits

0x6573,	// (0x00054997) cale_month_pane_g7

0x65d7,	// (0x000549fb) cale_month_pane_g8_ParamLimits

0x65d7,	// (0x000549fb) cale_month_pane_g8

0x663b,	// (0x00054a5f) cale_month_pane_g9_ParamLimits

0x663b,	// (0x00054a5f) cale_month_pane_g9

0x6695,	// (0x00054ab9) cale_month_pane_g10_ParamLimits

0x6695,	// (0x00054ab9) cale_month_pane_g10

0x66e7,	// (0x00054b0b) cale_month_pane_g11_ParamLimits

0x66e7,	// (0x00054b0b) cale_month_pane_g11

0x6735,	// (0x00054b59) cale_month_pane_g12_ParamLimits

0x6735,	// (0x00054b59) cale_month_pane_g12

0x6785,	// (0x00054ba9) cale_month_pane_g13_ParamLimits

0x6785,	// (0x00054ba9) cale_month_pane_g13

0x000c,

0xf225,	// (0x0005d649) cale_month_pane_g_ParamLimits

0xf225,	// (0x0005d649) cale_month_pane_g

0x67d5,	// (0x00054bf9) cale_month_week_pane

0x67f5,	// (0x00054c19) grid_cale_month_pane_ParamLimits

0x67f5,	// (0x00054c19) grid_cale_month_pane

0x684e,	// (0x00054c72) cale_month_day_heading_pane_t1

0x68d0,	// (0x00054cf4) cale_month_day_heading_pane_t2

0x6949,	// (0x00054d6d) cale_month_day_heading_pane_t3

0x69c2,	// (0x00054de6) cale_month_day_heading_pane_t4

0x6a3b,	// (0x00054e5f) cale_month_day_heading_pane_t5

0x6abc,	// (0x00054ee0) cale_month_day_heading_pane_t6

0x6b45,	// (0x00054f69) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x0005d664) cale_month_day_heading_pane_t

0x15af,	// (0x0004f9d3) bg_cale_side_pane_cp01

0x6bce,	// (0x00054ff2) cale_month_week_pane_t1

0x6be7,	// (0x0005500b) cale_month_week_pane_t2

0x6c00,	// (0x00055024) cale_month_week_pane_t3

0x6c19,	// (0x0005503d) cale_month_week_pane_t4

0x6c32,	// (0x00055056) cale_month_week_pane_t5

0x6c4f,	// (0x00055073) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x0005d673) cale_month_week_pane_t

0x6c72,	// (0x00055096) cell_cale_month_pane_ParamLimits

0x6c72,	// (0x00055096) cell_cale_month_pane

0x6da0,	// (0x000551c4) cell_cale_month_pane_g1

0x6dac,	// (0x000551d0) cell_cale_month_pane_t1_ParamLimits

0x6dac,	// (0x000551d0) cell_cale_month_pane_t1

0x15bd,	// (0x0004f9e1) grid_highlight_pane_cp08

0xee9c,	// (0x0005d2c0) main_smil_g1

0x6dd8,	// (0x000551fc) smil_status_pane

0x1969,	// (0x0004fd8d) smil_text_pane

0x31c5,	// (0x000515e9) bg_popup_call3_rect_pane_g8

0x31cd,	// (0x000515f1) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ed,	// (0x0005d911) bg_popup_call3_rect_pane_g

0x339e,	// (0x000517c2) smil_status_volume_pane_g1

0x1973,	// (0x0004fd97) smil_status_pane_t1

0x80b8,	// (0x000564dc) volume_smil_pane

0x198a,	// (0x0004fdae) list_smil_text_pane

0x6deb,	// (0x0005520f) scroll_pane_cp011

0x6df6,	// (0x0005521a) smil_text_list_pane_t1_ParamLimits

0x6df6,	// (0x0005521a) smil_text_list_pane_t1

0x6e4a,	// (0x0005526e) aid_volume_smil_ParamLimits

0x6e4a,	// (0x0005526e) aid_volume_smil

0xee9c,	// (0x0005d2c0) smil_volume_pane_g1

0xee9c,	// (0x0005d2c0) smil_volume_pane_g2

0x0001,

0xf261,	// (0x0005d685) smil_volume_pane_g

0x5523,	// (0x00053947) listscroll_cale_day_pane

0x1994,	// (0x0004fdb8) bg_cale_pane

0x19ac,	// (0x0004fdd0) list_cale_pane

0x19cf,	// (0x0004fdf3) scroll_pane_cp09

0x19e0,	// (0x0004fe04) cale_bg_pane_g1

0x19e8,	// (0x0004fe0c) cale_bg_pane_g2

0x19f0,	// (0x0004fe14) cale_bg_pane_g3

0x19f8,	// (0x0004fe1c) cale_bg_pane_g4

0x1a00,	// (0x0004fe24) cale_bg_pane_g5

0x1a08,	// (0x0004fe2c) cale_bg_pane_g6

0x1a10,	// (0x0004fe34) cale_bg_pane_g7

0x1a18,	// (0x0004fe3c) cale_bg_pane_g8

0x1a20,	// (0x0004fe44) cale_bg_pane_g9

0x0008,

0xf266,	// (0x0005d68a) cale_bg_pane_g

0x6e74,	// (0x00055298) list_cale_time_pane_ParamLimits

0x6e74,	// (0x00055298) list_cale_time_pane

0x1a28,	// (0x0004fe4c) list_cale_time_pane_g1_ParamLimits

0x1a28,	// (0x0004fe4c) list_cale_time_pane_g1

0x1a34,	// (0x0004fe58) list_cale_time_pane_g2_ParamLimits

0x1a34,	// (0x0004fe58) list_cale_time_pane_g2

0x6e8b,	// (0x000552af) list_cale_time_pane_g3_ParamLimits

0x6e8b,	// (0x000552af) list_cale_time_pane_g3

0x6e99,	// (0x000552bd) list_cale_time_pane_g4_ParamLimits

0x6e99,	// (0x000552bd) list_cale_time_pane_g4

0x6ea7,	// (0x000552cb) list_cale_time_pane_g5_ParamLimits

0x6ea7,	// (0x000552cb) list_cale_time_pane_g5

0x0005,

0xf279,	// (0x0005d69d) list_cale_time_pane_g_ParamLimits

0xf279,	// (0x0005d69d) list_cale_time_pane_g

0x1a4e,	// (0x0004fe72) list_cale_time_pane_t1_ParamLimits

0x1a4e,	// (0x0004fe72) list_cale_time_pane_t1

0x1a76,	// (0x0004fe9a) list_cale_time_pane_t2_ParamLimits

0x1a76,	// (0x0004fe9a) list_cale_time_pane_t2

0x7164,	// (0x00055588) aid_blid_cardinal_pane

0x71a6,	// (0x000555ca) compass_pane_t4

0x1a9e,	// (0x0004fec2) list_cale_time_pane_t4_ParamLimits

0x1a9e,	// (0x0004fec2) list_cale_time_pane_t4

0x71b4,	// (0x000555d8) compass_pane_t5

0x71c4,	// (0x000555e8) compass_pane_t6

0x71d2,	// (0x000555f6) compass_pane_t7

0x1ee8,	// (0x0005030c) navi_pane_cc_t1

0x2035,	// (0x00050459) aid_phob_thumbnail_center_pane

0x7782,	// (0x00055ba6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf286,	// (0x0005d6aa) list_cale_time_pane_t_ParamLimits

0xf286,	// (0x0005d6aa) list_cale_time_pane_t

0xe880,	// (0x0005cca4) bg_popup_window_pane_cp02_ParamLimits

0xe880,	// (0x0005cca4) bg_popup_window_pane_cp02

0x1ac6,	// (0x0004feea) heading_pane_cp01_ParamLimits

0x1ac6,	// (0x0004feea) heading_pane_cp01

0x1ad2,	// (0x0004fef6) loc_req_pane_ParamLimits

0x1ad2,	// (0x0004fef6) loc_req_pane

0x1ae2,	// (0x0004ff06) loc_type_pane_ParamLimits

0x1ae2,	// (0x0004ff06) loc_type_pane

0x1af4,	// (0x0004ff18) loc_type_pane_t1_ParamLimits

0x1af4,	// (0x0004ff18) loc_type_pane_t1

0x1b06,	// (0x0004ff2a) loc_type_pane_t2_ParamLimits

0x1b06,	// (0x0004ff2a) loc_type_pane_t2

0x1b18,	// (0x0004ff3c) loc_type_pane_t3_ParamLimits

0x1b18,	// (0x0004ff3c) loc_type_pane_t3

0x0002,

0xf28d,	// (0x0005d6b1) loc_type_pane_t_ParamLimits

0xf28d,	// (0x0005d6b1) loc_type_pane_t

0x1b2a,	// (0x0004ff4e) list_loc_req_pane

0x1b34,	// (0x0004ff58) scroll_pane_cp012

0x6eb5,	// (0x000552d9) list_single_loc_request_popup_menu_pane_ParamLimits

0x6eb5,	// (0x000552d9) list_single_loc_request_popup_menu_pane

0x1b3f,	// (0x0004ff63) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1b3f,	// (0x0004ff63) list_single_loc_request_popup_menu_pane_g1

0x1b4b,	// (0x0004ff6f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1b4b,	// (0x0004ff6f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf294,	// (0x0005d6b8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf294,	// (0x0005d6b8) list_single_loc_request_popup_menu_pane_g

0x1b57,	// (0x0004ff7b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1b57,	// (0x0004ff7b) list_single_loc_request_popup_menu_pane_t1

0x6ec7,	// (0x000552eb) bg_popup_window_pane_cp03_ParamLimits

0x6ec7,	// (0x000552eb) bg_popup_window_pane_cp03

0x6ed5,	// (0x000552f9) heading_loc_req_pane_ParamLimits

0x6ed5,	// (0x000552f9) heading_loc_req_pane

0x6ee1,	// (0x00055305) popup_dyc_status_message_window_g1_ParamLimits

0x6ee1,	// (0x00055305) popup_dyc_status_message_window_g1

0x6eed,	// (0x00055311) popup_dyc_status_message_window_t1_ParamLimits

0x6eed,	// (0x00055311) popup_dyc_status_message_window_t1

0x6eff,	// (0x00055323) popup_dyc_status_message_window_t2_ParamLimits

0x6eff,	// (0x00055323) popup_dyc_status_message_window_t2

0x6f11,	// (0x00055335) popup_dyc_status_message_window_t3_ParamLimits

0x6f11,	// (0x00055335) popup_dyc_status_message_window_t3

0x0002,

0xf299,	// (0x0005d6bd) popup_dyc_status_message_window_t_ParamLimits

0xf299,	// (0x0005d6bd) popup_dyc_status_message_window_t

0xec29,	// (0x0005d04d) bg_heading_pane_cp01

0x1b6d,	// (0x0004ff91) heading_loc_req_pane_g1

0x1b75,	// (0x0004ff99) heading_loc_req_pane_g2

0x1b7d,	// (0x0004ffa1) heading_loc_req_pane_g3

0x0002,

0xf2a0,	// (0x0005d6c4) heading_loc_req_pane_g

0x1b85,	// (0x0004ffa9) heading_loc_req_pane_t1

0x1ba5,	// (0x0004ffc9) bg_popup_sub_pane_cp01_ParamLimits

0x1ba5,	// (0x0004ffc9) bg_popup_sub_pane_cp01

0x1bb3,	// (0x0004ffd7) popup_cale_events_window_g1_ParamLimits

0x1bb3,	// (0x0004ffd7) popup_cale_events_window_g1

0x1bd3,	// (0x0004fff7) popup_cale_events_window_g2_ParamLimits

0x1bd3,	// (0x0004fff7) popup_cale_events_window_g2

0x0001,

0xf2c2,	// (0x0005d6e6) popup_cale_events_window_g_ParamLimits

0xf2c2,	// (0x0005d6e6) popup_cale_events_window_g

0x1bf3,	// (0x00050017) popup_cale_events_window_t1_ParamLimits

0x1bf3,	// (0x00050017) popup_cale_events_window_t1

0x1c05,	// (0x00050029) popup_cale_events_window_t2_ParamLimits

0x1c05,	// (0x00050029) popup_cale_events_window_t2

0x1c7b,	// (0x0005009f) popup_cale_events_window_t3_ParamLimits

0x1c7b,	// (0x0005009f) popup_cale_events_window_t3

0x1cb5,	// (0x000500d9) popup_cale_events_window_t4_ParamLimits

0x1cb5,	// (0x000500d9) popup_cale_events_window_t4

0x0003,

0xf2c7,	// (0x0005d6eb) popup_cale_events_window_t_ParamLimits

0xf2c7,	// (0x0005d6eb) popup_cale_events_window_t

0x6f3b,	// (0x0005535f) call_type_pane

0x2322,	// (0x00050746) popup_call_status_window_g1

0x6f47,	// (0x0005536b) popup_call_status_window_g2

0x6f53,	// (0x00055377) popup_call_status_window_g3

0x0002,

0xf2d0,	// (0x0005d6f4) popup_call_status_window_g

0x1ceb,	// (0x0005010f) call_type_pane_g1

0x1cf4,	// (0x00050118) call_type_pane_g2

0x0001,

0xf2d7,	// (0x0005d6fb) call_type_pane_g

0xec29,	// (0x0005d04d) bg_popup_sub_pane_cp02

0x1cfd,	// (0x00050121) listscroll_popup_wml_pane

0x1d05,	// (0x00050129) list_wml_pane

0x1d0f,	// (0x00050133) scroll_pane_cp013

0x1d1a,	// (0x0005013e) list_single_graphic_popup_wml_pane_ParamLimits

0x1d1a,	// (0x0005013e) list_single_graphic_popup_wml_pane

0xee9c,	// (0x0005d2c0) list_single_graphic_popup_wml_pane_g1

0x1d2e,	// (0x00050152) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2dc,	// (0x0005d700) list_single_graphic_popup_wml_pane_g

0x1d36,	// (0x0005015a) list_single_graphic_popup_wml_pane_t1

0x1d44,	// (0x00050168) aid_call_pane

0xee7c,	// (0x0005d2a0) popup_clock_analogue_window_g1

0xee7c,	// (0x0005d2a0) popup_clock_analogue_window_g2

0x6f5f,	// (0x00055383) popup_clock_analogue_window_g3

0x6f5f,	// (0x00055383) popup_clock_analogue_window_g4

0xee9c,	// (0x0005d2c0) popup_clock_analogue_window_g5

0x0004,

0xf2e1,	// (0x0005d705) popup_clock_analogue_window_g

0x6f67,	// (0x0005538b) popup_clock_analogue_window_t1

0x6f75,	// (0x00055399) clock_digital_number_pane_ParamLimits

0x6f75,	// (0x00055399) clock_digital_number_pane

0x6f81,	// (0x000553a5) clock_digital_number_pane_cp02_ParamLimits

0x6f81,	// (0x000553a5) clock_digital_number_pane_cp02

0x6f8d,	// (0x000553b1) clock_digital_number_pane_cp03_ParamLimits

0x6f8d,	// (0x000553b1) clock_digital_number_pane_cp03

0x6f99,	// (0x000553bd) clock_digital_number_pane_cp04_ParamLimits

0x6f99,	// (0x000553bd) clock_digital_number_pane_cp04

0x6fa5,	// (0x000553c9) clock_digital_separator_pane_ParamLimits

0x6fa5,	// (0x000553c9) clock_digital_separator_pane

0x6fb1,	// (0x000553d5) popup_clock_digital_window_t1

0xee9c,	// (0x0005d2c0) clock_digital_number_pane_g1

0xee9c,	// (0x0005d2c0) clock_digital_number_pane_g2

0x0001,

0xf261,	// (0x0005d685) clock_digital_number_pane_g

0xee9c,	// (0x0005d2c0) clock_digital_separator_pane_g1

0xee9c,	// (0x0005d2c0) clock_digital_separator_pane_g2

0x0001,

0xf261,	// (0x0005d685) clock_digital_separator_pane_g

0xec29,	// (0x0005d04d) bg_popup_window_pane_cp04

0x1d54,	// (0x00050178) heading_pane_cp03

0x160a,	// (0x0004fa2e) listscroll_popup_gms_pane

0xec29,	// (0x0005d04d) grid_large_graphic_popup_pane

0x1d5d,	// (0x00050181) listscroll_popup_gms_pane_g1

0x1d66,	// (0x0005018a) listscroll_popup_gms_pane_g2

0x0001,

0xf2ec,	// (0x0005d710) listscroll_popup_gms_pane_g

0x1d6f,	// (0x00050193) scroll_pane_cp014

0xeef1,	// (0x0005d315) cell_large_graphic_popup_pane_ParamLimits

0xeef1,	// (0x0005d315) cell_large_graphic_popup_pane

0xeeff,	// (0x0005d323) cell_large_graphic_popup_pane_g1_ParamLimits

0xeeff,	// (0x0005d323) cell_large_graphic_popup_pane_g1

0x1d78,	// (0x0005019c) cell_large_graphic_popup_pane_g2_ParamLimits

0x1d78,	// (0x0005019c) cell_large_graphic_popup_pane_g2

0x1d86,	// (0x000501aa) cell_large_graphic_popup_pane_g3_ParamLimits

0x1d86,	// (0x000501aa) cell_large_graphic_popup_pane_g3

0x1d94,	// (0x000501b8) cell_large_graphic_popup_pane_g4_ParamLimits

0x1d94,	// (0x000501b8) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f1,	// (0x0005d715) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f1,	// (0x0005d715) cell_large_graphic_popup_pane_g

0xec29,	// (0x0005d04d) grid_highlight_pane_cp010

0xee9c,	// (0x0005d2c0) bg_popup_call_pane_g1

0x1da5,	// (0x000501c9) list_single_graphic_popup_conf_pane_ParamLimits

0x1da5,	// (0x000501c9) list_single_graphic_popup_conf_pane

0x1db7,	// (0x000501db) list_highlight_pane_cp01

0x1dc0,	// (0x000501e4) list_single_graphic_popup_conf_pane_g1

0x1dc8,	// (0x000501ec) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2fa,	// (0x0005d71e) list_single_graphic_popup_conf_pane_g

0x1dd0,	// (0x000501f4) list_single_graphic_popup_conf_pane_t1

0x1dde,	// (0x00050202) linegrid_cams_pane_g1

0x6fce,	// (0x000553f2) linegrid_cams_pane_g2

0x15f0,	// (0x0004fa14) linegrid_cams_pane_g3

0x1de7,	// (0x0005020b) linegrid_cams_pane_g4

0x6fd7,	// (0x000553fb) linegrid_cams_pane_g5

0x6fe0,	// (0x00055404) linegrid_cams_pane_g6

0x15f9,	// (0x0004fa1d) linegrid_cams_pane_g7

0x0006,

0xf2ff,	// (0x0005d723) linegrid_cams_pane_g

0x1df0,	// (0x00050214) popup_clock_analogue_window

0x1df0,	// (0x00050214) popup_clock_digital_window

0xec29,	// (0x0005d04d) popup_phob_thumbnail_window

0xee9c,	// (0x0005d2c0) call_video_uplink_pane_g1

0x1df9,	// (0x0005021d) call_video_uplink_pane_g2

0x0001,

0xf30e,	// (0x0005d732) call_video_uplink_pane_g

0x1e01,	// (0x00050225) video_uplink_pane

0x1e09,	// (0x0005022d) mce_image_pane_g1

0x6feb,	// (0x0005540f) mce_image_pane_g2

0x6ff5,	// (0x00055419) mce_image_pane_g3

0x6fff,	// (0x00055423) mce_image_pane_g4

0x7007,	// (0x0005542b) mce_image_pane_g5

0x0004,

0xf313,	// (0x0005d737) mce_image_pane_g

0x1e13,	// (0x00050237) control_top_pane_stacon_cp01_ParamLimits

0x1e13,	// (0x00050237) control_top_pane_stacon_cp01

0x1e27,	// (0x0005024b) uni_indicator_pane_stacon_cp01_ParamLimits

0x1e27,	// (0x0005024b) uni_indicator_pane_stacon_cp01

0x1e38,	// (0x0005025c) bg_popup_sub_pane_cp03

0x700f,	// (0x00055433) chi_dic_find_pane

0x7017,	// (0x0005543b) listscroll_chi_dic_pane

0x7020,	// (0x00055444) main_pane_chidic_g1

0x7033,	// (0x00055457) chi_dic_find_pane_t1

0x1e42,	// (0x00050266) find_chidic_pane

0x1e4b,	// (0x0005026f) chi_dic_list_pane_ParamLimits

0x1e4b,	// (0x0005026f) chi_dic_list_pane

0x1e5c,	// (0x00050280) scroll_pane_cp020

0x7041,	// (0x00055465) find_chidic_pane_t1

0xec29,	// (0x0005d04d) input_focus_pane_cp06

0x1c66,	// (0x0005008a) list_chi_dic_pane_ParamLimits

0x1c66,	// (0x0005008a) list_chi_dic_pane

0x7050,	// (0x00055474) list_chi_dic_pane_t1_ParamLimits

0x7050,	// (0x00055474) list_chi_dic_pane_t1

0xec29,	// (0x0005d04d) list_highlight_pane_cp020

0x1e64,	// (0x00050288) bg_cale_heading_pane_g1

0x7063,	// (0x00055487) bg_cale_heading_pane_g2

0x706b,	// (0x0005548f) bg_cale_heading_pane_g3

0x7073,	// (0x00055497) bg_cale_heading_pane_g4

0x707d,	// (0x000554a1) bg_cale_heading_pane_g5

0x7087,	// (0x000554ab) bg_cale_heading_pane_g6

0x708f,	// (0x000554b3) bg_cale_heading_pane_g7

0x7097,	// (0x000554bb) bg_cale_heading_pane_g8

0x70a1,	// (0x000554c5) bg_cale_heading_pane_g9

0x0008,

0xf31e,	// (0x0005d742) bg_cale_heading_pane_g

0x1e64,	// (0x00050288) bg_cale_side_pane_g1

0x70ab,	// (0x000554cf) bg_cale_side_pane_g2

0x70b5,	// (0x000554d9) bg_cale_side_pane_g3

0x70bf,	// (0x000554e3) bg_cale_side_pane_g4

0x70c9,	// (0x000554ed) bg_cale_side_pane_g5

0x70d3,	// (0x000554f7) bg_cale_side_pane_g6

0x70dd,	// (0x00055501) bg_cale_side_pane_g7

0x70e7,	// (0x0005550b) bg_cale_side_pane_g8

0x70ef,	// (0x00055513) bg_cale_side_pane_g9

0x0008,

0xf331,	// (0x0005d755) bg_cale_side_pane_g

0x70f7,	// (0x0005551b) popup_call_status_window_ParamLimits

0x70f7,	// (0x0005551b) popup_call_status_window

0x1e6c,	// (0x00050290) stacon_top_pane

0x1e74,	// (0x00050298) status_pane_ParamLimits

0x1e74,	// (0x00050298) status_pane

0x1e89,	// (0x000502ad) status_small_pane

0x1e91,	// (0x000502b5) control_pane

0xec29,	// (0x0005d04d) stacon_bottom_pane

0x1e99,	// (0x000502bd) list_single_mce_smart_pane_t1_ParamLimits

0x1e99,	// (0x000502bd) list_single_mce_smart_pane_t1

0x1eac,	// (0x000502d0) list_single_mce_smart_pane_t2_ParamLimits

0x1eac,	// (0x000502d0) list_single_mce_smart_pane_t2

0x0001,

0xf344,	// (0x0005d768) list_single_mce_smart_pane_t_ParamLimits

0xf344,	// (0x0005d768) list_single_mce_smart_pane_t

0x7103,	// (0x00055527) compass_pane

0x710e,	// (0x00055532) main_location2_pane_t1

0x7124,	// (0x00055548) main_location2_pane_t2

0x713a,	// (0x0005555e) main_location2_pane_t3

0x0003,

0xf349,	// (0x0005d76d) main_location2_pane_t

0x1ecb,	// (0x000502ef) compass_pane_g1_ParamLimits

0x1ecb,	// (0x000502ef) compass_pane_g1

0x7188,	// (0x000555ac) compass_pane_t1

0x7197,	// (0x000555bb) compass_pane_t2

0x0005,

0xf352,	// (0x0005d776) compass_pane_t

0x71e2,	// (0x00055606) text_secondary_cp61

0x1edf,	// (0x00050303) navi_pane_cams_g5

0x1f02,	// (0x00050326) navi_pane_im_t1

0x1f10,	// (0x00050334) navi_pane_mp_g1_ParamLimits

0x1f10,	// (0x00050334) navi_pane_mp_g1

0x1f24,	// (0x00050348) navi_pane_mp_g2_ParamLimits

0x1f24,	// (0x00050348) navi_pane_mp_g2

0x1f30,	// (0x00050354) navi_pane_mp_g3_ParamLimits

0x1f30,	// (0x00050354) navi_pane_mp_g3

0x0002,

0xf366,	// (0x0005d78a) navi_pane_mp_g_ParamLimits

0xf366,	// (0x0005d78a) navi_pane_mp_g

0x1f3c,	// (0x00050360) navi_pane_mp_t1

0x1f4a,	// (0x0005036e) navi_pane_mp_t2

0x0002,

0xf36d,	// (0x0005d791) navi_pane_mp_t

0x1f86,	// (0x000503aa) navi_pane_vt_g1

0x1f3c,	// (0x00050360) navi_pane_vt_t1

0x1f8e,	// (0x000503b2) navi_slider_pane

0x160a,	// (0x0004fa2e) zooming_pane

0x1f96,	// (0x000503ba) navi_slider_pane_g1

0x7317,	// (0x0005573b) navi_slider_pane_g2

0x0006,

0xf374,	// (0x0005d798) navi_slider_pane_g

0x1fba,	// (0x000503de) aid_levels_zoom

0x1fc2,	// (0x000503e6) zooming_pane_g1

0x1fca,	// (0x000503ee) zooming_pane_g2

0x1fca,	// (0x000503ee) zooming_pane_g3

0x0002,

0xf383,	// (0x0005d7a7) zooming_pane_g

0x1fd2,	// (0x000503f6) level_10_zoom

0x1fdb,	// (0x000503ff) level_11_zoom

0x1fe4,	// (0x00050408) level_1_zoom

0x1fed,	// (0x00050411) level_2_zoom

0x1ff6,	// (0x0005041a) level_3_zoom

0x1fff,	// (0x00050423) level_4_zoom

0x2008,	// (0x0005042c) level_5_zoom

0x2011,	// (0x00050435) level_6_zoom

0x201a,	// (0x0005043e) level_7_zoom

0x2023,	// (0x00050447) level_8_zoom

0x202c,	// (0x00050450) level_9_zoom

0x203d,	// (0x00050461) popup_phob_thumbnail_window_g1

0x2045,	// (0x00050469) popup_phob_thumbnail_window_g2

0x0001,

0xf38a,	// (0x0005d7ae) popup_phob_thumbnail_window_g

0x7d46,	// (0x0005616a) level_1_location

0x7d4e,	// (0x00056172) level_2_location

0x7d56,	// (0x0005617a) level_3_location

0x7d60,	// (0x00056184) level_4_location

0x160a,	// (0x0004fa2e) level_5_location

0x7329,	// (0x0005574d) mce_icon_pane_g1

0x7331,	// (0x00055755) mce_icon_pane_g2

0x0001,

0xf38f,	// (0x0005d7b3) mce_icon_pane_g

0x7339,	// (0x0005575d) main_mup_pane_g1_ParamLimits

0x7339,	// (0x0005575d) main_mup_pane_g1

0xef1b,	// (0x0005d33f) main_mup_pane_g2_ParamLimits

0xef1b,	// (0x0005d33f) main_mup_pane_g2

0xef1b,	// (0x0005d33f) main_mup_pane_g3_ParamLimits

0xef1b,	// (0x0005d33f) main_mup_pane_g3

0xef1b,	// (0x0005d33f) main_mup_pane_g4_ParamLimits

0xef1b,	// (0x0005d33f) main_mup_pane_g4

0xef1b,	// (0x0005d33f) main_mup_pane_g5_ParamLimits

0xef1b,	// (0x0005d33f) main_mup_pane_g5

0xef1b,	// (0x0005d33f) main_mup_pane_g6_ParamLimits

0xef1b,	// (0x0005d33f) main_mup_pane_g6

0xef1b,	// (0x0005d33f) main_mup_pane_g7_ParamLimits

0xef1b,	// (0x0005d33f) main_mup_pane_g7

0xef1b,	// (0x0005d33f) main_mup_pane_g8_ParamLimits

0xef1b,	// (0x0005d33f) main_mup_pane_g8

0xef1b,	// (0x0005d33f) main_mup_pane_g9_ParamLimits

0xef1b,	// (0x0005d33f) main_mup_pane_g9

0xef1b,	// (0x0005d33f) main_mup_pane_g10_ParamLimits

0xef1b,	// (0x0005d33f) main_mup_pane_g10

0xef1b,	// (0x0005d33f) main_mup_pane_g11_ParamLimits

0xef1b,	// (0x0005d33f) main_mup_pane_g11

0xef0d,	// (0x0005d331) main_mup_pane_g12_ParamLimits

0xef0d,	// (0x0005d331) main_mup_pane_g12

0xef1b,	// (0x0005d33f) main_mup_pane_g13_ParamLimits

0xef1b,	// (0x0005d33f) main_mup_pane_g13

0x000c,

0xf394,	// (0x0005d7b8) main_mup_pane_g_ParamLimits

0xf394,	// (0x0005d7b8) main_mup_pane_g

0xef29,	// (0x0005d34d) main_mup_pane_t1_ParamLimits

0xef29,	// (0x0005d34d) main_mup_pane_t1

0xef29,	// (0x0005d34d) main_mup_pane_t2_ParamLimits

0xef29,	// (0x0005d34d) main_mup_pane_t2

0xef29,	// (0x0005d34d) main_mup_pane_t3_ParamLimits

0xef29,	// (0x0005d34d) main_mup_pane_t3

0x1c43,	// (0x00050067) main_mup_pane_t4_ParamLimits

0x1c43,	// (0x00050067) main_mup_pane_t4

0x1c43,	// (0x00050067) main_mup_pane_t5_ParamLimits

0x1c43,	// (0x00050067) main_mup_pane_t5

0x1612,	// (0x0004fa36) main_mup_pane_t6_ParamLimits

0x1612,	// (0x0004fa36) main_mup_pane_t6

0x0005,

0xf3af,	// (0x0005d7d3) main_mup_pane_t_ParamLimits

0xf3af,	// (0x0005d7d3) main_mup_pane_t

0xe818,	// (0x0005cc3c) mup_progress_pane_ParamLimits

0xe818,	// (0x0005cc3c) mup_progress_pane

0x2330,	// (0x00050754) mup_visualizer_pane_ParamLimits

0x2330,	// (0x00050754) mup_visualizer_pane

0x2330,	// (0x00050754) mup_volume_pane_ParamLimits

0x2330,	// (0x00050754) mup_volume_pane

0xef0d,	// (0x0005d331) mup_visualizer_pane_g1_ParamLimits

0xef0d,	// (0x0005d331) mup_visualizer_pane_g1

0x204d,	// (0x00050471) mup_visualizer_pane_g2_ParamLimits

0x204d,	// (0x00050471) mup_visualizer_pane_g2

0xeeff,	// (0x0005d323) mup_visualizer_pane_g3_ParamLimits

0xeeff,	// (0x0005d323) mup_visualizer_pane_g3

0x0002,

0xf3bc,	// (0x0005d7e0) mup_visualizer_pane_g_ParamLimits

0xf3bc,	// (0x0005d7e0) mup_visualizer_pane_g

0x1640,	// (0x0004fa64) mup_volume_pane_g1

0x1640,	// (0x0004fa64) mup_volume_pane_g2

0x0001,

0xf3c3,	// (0x0005d7e7) mup_volume_pane_g

0x1640,	// (0x0004fa64) mup_progress_pane_g1

0x1640,	// (0x0004fa64) mup_progress_pane_g2

0x1640,	// (0x0004fa64) mup_progress_pane_g3

0x0002,

0xf3c8,	// (0x0005d7ec) mup_progress_pane_g

0xec29,	// (0x0005d04d) bg_popup_window_pane_cp05

0x205b,	// (0x0005047f) heading_pane_cp02_ParamLimits

0x205b,	// (0x0005047f) heading_pane_cp02

0x2077,	// (0x0005049b) list_popup_blid_pane

0x207f,	// (0x000504a3) list_blid_sat_info_pane_ParamLimits

0x207f,	// (0x000504a3) list_blid_sat_info_pane

0x2092,	// (0x000504b6) list_blid_sat_info_pane_g1

0x209a,	// (0x000504be) list_blid_sat_info_pane_t1

0x7448,	// (0x0005586c) mup_equalizer_pane_ParamLimits

0x7448,	// (0x0005586c) mup_equalizer_pane

0x7469,	// (0x0005588d) mup_equalizer_pane_cp1_ParamLimits

0x7469,	// (0x0005588d) mup_equalizer_pane_cp1

0x748a,	// (0x000558ae) mup_equalizer_pane_cp2_ParamLimits

0x748a,	// (0x000558ae) mup_equalizer_pane_cp2

0x74ab,	// (0x000558cf) mup_equalizer_pane_cp3_ParamLimits

0x74ab,	// (0x000558cf) mup_equalizer_pane_cp3

0x74d0,	// (0x000558f4) mup_equalizer_pane_cp4_ParamLimits

0x74d0,	// (0x000558f4) mup_equalizer_pane_cp4

0x74f5,	// (0x00055919) mup_equalizer_pane_cp5

0x750d,	// (0x00055931) mup_equalizer_pane_cp6

0x7525,	// (0x00055949) mup_equalizer_pane_cp7

0x3245,	// (0x00051669) bg_popup_call_poc_act_pane_g9

0x324d,	// (0x00051671) bg_popup_call_poc_act_pane_g10

0x3255,	// (0x00051679) bg_popup_call_poc_act_pane_g11

0x000a,

0xee84,	// (0x0005d2a8) mup_scale_pane

0xee9c,	// (0x0005d2c0) mup_scale_pane_g1

0x20a8,	// (0x000504cc) mup_scale_pane_g2

0x0006,

0xf3e4,	// (0x0005d808) mup_scale_pane_g

0x20cc,	// (0x000504f0) msg_data_pane

0x20d4,	// (0x000504f8) scroll_pane_cp017

0x754f,	// (0x00055973) bg_list_pane_cp04_ParamLimits

0x754f,	// (0x00055973) bg_list_pane_cp04

0x20dc,	// (0x00050500) msg_data_pane_g1

0x7577,	// (0x0005599b) msg_data_pane_g2

0x7581,	// (0x000559a5) msg_data_pane_g3

0x758b,	// (0x000559af) msg_data_pane_g4

0x7593,	// (0x000559b7) msg_data_pane_g5

0x759b,	// (0x000559bf) msg_data_pane_g6

0x75a3,	// (0x000559c7) msg_data_pane_g7

0x0006,

0xf3f3,	// (0x0005d817) msg_data_pane_g

0x75ab,	// (0x000559cf) msg_text_pane_ParamLimits

0x75ab,	// (0x000559cf) msg_text_pane

0x75da,	// (0x000559fe) qrid_highlight_pane_cp011_ParamLimits

0x75da,	// (0x000559fe) qrid_highlight_pane_cp011

0xec29,	// (0x0005d04d) msg_body_pane

0xec29,	// (0x0005d04d) msg_header_pane

0x20ed,	// (0x00050511) input_focus_pane_cp07

0x75fe,	// (0x00055a22) msg_header_pane_t1_ParamLimits

0x75fe,	// (0x00055a22) msg_header_pane_t1

0x7614,	// (0x00055a38) msg_header_pane_t2_ParamLimits

0x7614,	// (0x00055a38) msg_header_pane_t2

0x0001,

0xf407,	// (0x0005d82b) msg_header_pane_t_ParamLimits

0xf407,	// (0x0005d82b) msg_header_pane_t

0x2102,	// (0x00050526) msg_body_pane_g1

0x762b,	// (0x00055a4f) msg_body_pane_t1_ParamLimits

0x762b,	// (0x00055a4f) msg_body_pane_t1

0x765c,	// (0x00055a80) msg_body_pane_t2_ParamLimits

0x765c,	// (0x00055a80) msg_body_pane_t2

0x766e,	// (0x00055a92) msg_body_pane_t3_ParamLimits

0x766e,	// (0x00055a92) msg_body_pane_t3

0x0002,

0xf40c,	// (0x0005d830) msg_body_pane_t_ParamLimits

0xf40c,	// (0x0005d830) msg_body_pane_t

0x76d2,	// (0x00055af6) main_viewer_pane_g1_ParamLimits

0x76d2,	// (0x00055af6) main_viewer_pane_g1

0x76de,	// (0x00055b02) main_viewer_pane_g2_ParamLimits

0x76de,	// (0x00055b02) main_viewer_pane_g2

0x76ea,	// (0x00055b0e) main_viewer_pane_g3_ParamLimits

0x76ea,	// (0x00055b0e) main_viewer_pane_g3

0x76fb,	// (0x00055b1f) main_viewer_pane_g4_ParamLimits

0x76fb,	// (0x00055b1f) main_viewer_pane_g4

0x770c,	// (0x00055b30) main_viewer_pane_g5_ParamLimits

0x770c,	// (0x00055b30) main_viewer_pane_g5

0x770c,	// (0x00055b30) main_viewer_pane_g7_ParamLimits

0x770c,	// (0x00055b30) main_viewer_pane_g7

0x771e,	// (0x00055b42) main_viewer_pane_g8_ParamLimits

0x771e,	// (0x00055b42) main_viewer_pane_g8

0x0007,

0xf41c,	// (0x0005d840) main_viewer_pane_g_ParamLimits

0xf41c,	// (0x0005d840) main_viewer_pane_g

0x210a,	// (0x0005052e) viewer_content_pane_ParamLimits

0x210a,	// (0x0005052e) viewer_content_pane

0x7756,	// (0x00055b7a) main_postcard_pane_g1_ParamLimits

0x7756,	// (0x00055b7a) main_postcard_pane_g1

0x7764,	// (0x00055b88) main_postcard_pane_g2_ParamLimits

0x7764,	// (0x00055b88) main_postcard_pane_g2

0x7772,	// (0x00055b96) main_postcard_pane_g3_ParamLimits

0x7772,	// (0x00055b96) main_postcard_pane_g3

0x0005,

0xf42d,	// (0x0005d851) main_postcard_pane_g_ParamLimits

0xf42d,	// (0x0005d851) main_postcard_pane_g

0x7782,	// (0x00055ba6) main_postcard_pane_g4

0x338b,	// (0x000517af) smil_status_volume_pane_g2

0x77ae,	// (0x00055bd2) postcard_pane_ParamLimits

0x77ae,	// (0x00055bd2) postcard_pane

0x2322,	// (0x00050746) postcard_pane_g1_ParamLimits

0x2322,	// (0x00050746) postcard_pane_g1

0x77e8,	// (0x00055c0c) postcard_pane_g2_ParamLimits

0x77e8,	// (0x00055c0c) postcard_pane_g2

0x77f4,	// (0x00055c18) postcard_pane_g3_ParamLimits

0x77f4,	// (0x00055c18) postcard_pane_g3

0x2126,	// (0x0005054a) postcard_pane_g4_ParamLimits

0x2126,	// (0x0005054a) postcard_pane_g4

0x7800,	// (0x00055c24) postcard_pane_g5_ParamLimits

0x7800,	// (0x00055c24) postcard_pane_g5

0x780c,	// (0x00055c30) postcard_pane_g6_ParamLimits

0x780c,	// (0x00055c30) postcard_pane_g6

0x2118,	// (0x0005053c) postcard_pane_g7_ParamLimits

0x2118,	// (0x0005053c) postcard_pane_g7

0x0006,

0xf43a,	// (0x0005d85e) postcard_pane_g_ParamLimits

0xf43a,	// (0x0005d85e) postcard_pane_g

0x781a,	// (0x00055c3e) main_mp2_pane_g1_ParamLimits

0x781a,	// (0x00055c3e) main_mp2_pane_g1

0x7828,	// (0x00055c4c) main_mp2_pane_g2_ParamLimits

0x7828,	// (0x00055c4c) main_mp2_pane_g2

0x7834,	// (0x00055c58) main_mp2_pane_g3_ParamLimits

0x7834,	// (0x00055c58) main_mp2_pane_g3

0x0002,

0xf449,	// (0x0005d86d) main_mp2_pane_g_ParamLimits

0xf449,	// (0x0005d86d) main_mp2_pane_g

0x7840,	// (0x00055c64) main_mp2_pane_t1_ParamLimits

0x7840,	// (0x00055c64) main_mp2_pane_t1

0x7857,	// (0x00055c7b) main_mp2_pane_t2_ParamLimits

0x7857,	// (0x00055c7b) main_mp2_pane_t2

0x786b,	// (0x00055c8f) main_mp2_pane_t3_ParamLimits

0x786b,	// (0x00055c8f) main_mp2_pane_t3

0x0002,

0xf450,	// (0x0005d874) main_mp2_pane_t_ParamLimits

0xf450,	// (0x0005d874) main_mp2_pane_t

0x2134,	// (0x00050558) pec_content_pane_ParamLimits

0x2134,	// (0x00050558) pec_content_pane

0x17a5,	// (0x0004fbc9) scroll_pane_cp015

0x2146,	// (0x0005056a) pec_attribute_pane_ParamLimits

0x2146,	// (0x0005056a) pec_attribute_pane

0x787d,	// (0x00055ca1) pec_content_pane_g1_ParamLimits

0x787d,	// (0x00055ca1) pec_content_pane_g1

0x2156,	// (0x0005057a) pec_content_pane_t1_ParamLimits

0x2156,	// (0x0005057a) pec_content_pane_t1

0x2168,	// (0x0005058c) pec_content_pane_t2_ParamLimits

0x2168,	// (0x0005058c) pec_content_pane_t2

0x0001,

0xf457,	// (0x0005d87b) pec_content_pane_t_ParamLimits

0xf457,	// (0x0005d87b) pec_content_pane_t

0x7889,	// (0x00055cad) list_single_graphic_pane_cp01_ParamLimits

0x7889,	// (0x00055cad) list_single_graphic_pane_cp01

0xee84,	// (0x0005d2a8) bg_popup_sub_pane_cp04

0x217a,	// (0x0005059e) popup_mup_playback_window_g1

0x2186,	// (0x000505aa) popup_mup_playback_window_t1

0x219b,	// (0x000505bf) popup_mup_playback_window_t2

0x0001,

0xf45c,	// (0x0005d880) popup_mup_playback_window_t

0x21d2,	// (0x000505f6) main_image_pane_g1_ParamLimits

0x21d2,	// (0x000505f6) main_image_pane_g1

0x2215,	// (0x00050639) scroll_pane_cp018_ParamLimits

0x2215,	// (0x00050639) scroll_pane_cp018

0x222d,	// (0x00050651) scroll_pane_cp016_ParamLimits

0x222d,	// (0x00050651) scroll_pane_cp016

0x7917,	// (0x00055d3b) smil2_image_pane_ParamLimits

0x7917,	// (0x00055d3b) smil2_image_pane

0x794d,	// (0x00055d71) smil2_root_pane_ParamLimits

0x794d,	// (0x00055d71) smil2_root_pane

0x7979,	// (0x00055d9d) smil2_text_pane_ParamLimits

0x7979,	// (0x00055d9d) smil2_text_pane

0xec29,	// (0x0005d04d) bg_list_pane_cp06

0x2269,	// (0x0005068d) grid_radio_pane

0xec29,	// (0x0005d04d) bg_popup_window_pane_cp06

0x2273,	// (0x00050697) main_fmradio_pane_t1

0x325d,	// (0x00051681) heading_pane_cp04

0x2281,	// (0x000506a5) main_fmradio_pane_t2

0x3265,	// (0x00051689) popup_cale_lunar_info_window_g1

0x228f,	// (0x000506b3) main_fmradio_pane_t3

0x326d,	// (0x00051691) popup_cale_lunar_info_window_g2

0x229f,	// (0x000506c3) main_fmradio_pane_t4

0x0001,

0x22ad,	// (0x000506d1) main_fmradio_pane_t5

0x0004,

0xf53c,	// (0x0005d960) popup_cale_lunar_info_window_g

0xf471,	// (0x0005d895) main_fmradio_pane_t

0x22bb,	// (0x000506df) wait_bar_pane_cp03

0x22c3,	// (0x000506e7) cell_fmradio_pane_ParamLimits

0x22c3,	// (0x000506e7) cell_fmradio_pane

0x2118,	// (0x0005053c) cell_fmradio_pane_g1_ParamLimits

0x2118,	// (0x0005053c) cell_fmradio_pane_g1

0xec29,	// (0x0005d04d) grid_highlight_pane_cp011

0x22d8,	// (0x000506fc) poc_content_pane_ParamLimits

0x22d8,	// (0x000506fc) poc_content_pane

0x22ea,	// (0x0005070e) scroll_pane_cp019

0x79b9,	// (0x00055ddd) popup_call_poc_act_window_ParamLimits

0x79b9,	// (0x00055ddd) popup_call_poc_act_window

0x79c6,	// (0x00055dea) popup_call_poc_inact_window_ParamLimits

0x79c6,	// (0x00055dea) popup_call_poc_inact_window

0xf513,	// (0x0005d937) bg_popup_call_poc_act_pane_g

0x31d5,	// (0x000515f9) bg_popup_call_poc_inact_pane_g1

0x31dd,	// (0x00051601) bg_popup_call_poc_inact_pane_g2

0x22f2,	// (0x00050716) popup_call_poc_act_window_g2

0x31e5,	// (0x00051609) bg_popup_call_poc_inact_pane_g3

0x31ed,	// (0x00051611) bg_popup_call_poc_inact_pane_g4

0x31f5,	// (0x00051619) bg_popup_call_poc_inact_pane_g5

0x22fa,	// (0x0005071e) popup_call_poc_act_window_t1_ParamLimits

0x22fa,	// (0x0005071e) popup_call_poc_act_window_t1

0x233e,	// (0x00050762) popup_call_poc_act_window_t2_ParamLimits

0x233e,	// (0x00050762) popup_call_poc_act_window_t2

0x2366,	// (0x0005078a) popup_call_poc_act_window_t3_ParamLimits

0x2366,	// (0x0005078a) popup_call_poc_act_window_t3

0x238e,	// (0x000507b2) popup_call_poc_act_window_t4_ParamLimits

0x238e,	// (0x000507b2) popup_call_poc_act_window_t4

0x0003,

0xf47c,	// (0x0005d8a0) popup_call_poc_act_window_t_ParamLimits

0xf47c,	// (0x0005d8a0) popup_call_poc_act_window_t

0x31fd,	// (0x00051621) bg_popup_call_poc_inact_pane_g6

0x3205,	// (0x00051629) bg_popup_call_poc_inact_pane_g7

0x320d,	// (0x00051631) bg_popup_call_poc_inact_pane_g8

0x23a0,	// (0x000507c4) popup_call_poc_inact_window_g2

0x3215,	// (0x00051639) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf500,	// (0x0005d924) bg_popup_call_poc_inact_pane_g

0x23a8,	// (0x000507cc) popup_call_poc_inact_window_t1_ParamLimits

0x23a8,	// (0x000507cc) popup_call_poc_inact_window_t1

0x23bd,	// (0x000507e1) popup_call_poc_inact_window_t2_ParamLimits

0x23bd,	// (0x000507e1) popup_call_poc_inact_window_t2

0x23d2,	// (0x000507f6) popup_call_poc_inact_window_t3_ParamLimits

0x23d2,	// (0x000507f6) popup_call_poc_inact_window_t3

0x0002,

0xf485,	// (0x0005d8a9) popup_call_poc_inact_window_t_ParamLimits

0xf485,	// (0x0005d8a9) popup_call_poc_inact_window_t

0x3303,	// (0x00051727) context_pane_ParamLimits

0x8083,	// (0x000564a7) signal_pane_ParamLimits

0x160a,	// (0x0004fa2e) main_call2_pane

0x7fef,	// (0x00056413) popup_phob_thumbnail2_window_ParamLimits

0x7fef,	// (0x00056413) popup_phob_thumbnail2_window

0x7680,	// (0x00055aa4) aid_hotspot_pointer_arrow_pane

0x7688,	// (0x00055aac) aid_hotspot_pointer_hand_pane

0x7d0e,	// (0x00056132) phob_pre_status_pane_g5

0xeef1,	// (0x0005d315) cams_zoom_pane_ParamLimits

0xeef1,	// (0x0005d315) image_vga_pane_ParamLimits

0xef0d,	// (0x0005d331) main_camera_pane_g1_ParamLimits

0xef0d,	// (0x0005d331) main_camera_pane_g2_ParamLimits

0xef0d,	// (0x0005d331) main_camera_pane_g3_ParamLimits

0xef0d,	// (0x0005d331) main_camera_pane_g4_ParamLimits

0xef0d,	// (0x0005d331) main_camera_pane_g5_ParamLimits

0xef0d,	// (0x0005d331) main_camera_pane_g6_ParamLimits

0xef0d,	// (0x0005d331) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x0005d5cf) main_camera_pane_g_ParamLimits

0x1c43,	// (0x00050067) main_camera_pane_t1_ParamLimits

0x1c43,	// (0x00050067) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x0005d5e0) main_camera_pane_t_ParamLimits

0xee84,	// (0x0005d2a8) bg_popup_preview_window_pane_cp01_ParamLimits

0xee84,	// (0x0005d2a8) bg_popup_preview_window_pane_cp01

0x23e7,	// (0x0005080b) popup_phob_thumbnail2_window_g1_ParamLimits

0x23e7,	// (0x0005080b) popup_phob_thumbnail2_window_g1

0xec29,	// (0x0005d04d) call2_cli_visual_pane

0x79e2,	// (0x00055e06) popup_call2_audio_conf_window_ParamLimits

0x79e2,	// (0x00055e06) popup_call2_audio_conf_window

0x79fb,	// (0x00055e1f) popup_call2_audio_first_window_ParamLimits

0x79fb,	// (0x00055e1f) popup_call2_audio_first_window

0x7a99,	// (0x00055ebd) popup_call2_audio_in_window_ParamLimits

0x7a99,	// (0x00055ebd) popup_call2_audio_in_window

0x7add,	// (0x00055f01) popup_call2_audio_out_window_ParamLimits

0x7add,	// (0x00055f01) popup_call2_audio_out_window

0x7b47,	// (0x00055f6b) popup_call2_audio_second_window_ParamLimits

0x7b47,	// (0x00055f6b) popup_call2_audio_second_window

0x7ba5,	// (0x00055fc9) popup_call2_audio_wait_window_ParamLimits

0x7ba5,	// (0x00055fc9) popup_call2_audio_wait_window

0xec29,	// (0x0005d04d) bg_popup_call2_act_pane_cp03

0xee66,	// (0x0005d28a) list_conf_pane_cp

0x23f3,	// (0x00050817) popup_call2_audio_conf_window_t1

0x2401,	// (0x00050825) list_single_graphic_popup_conf2_pane_ParamLimits

0x2401,	// (0x00050825) list_single_graphic_popup_conf2_pane

0x1db7,	// (0x000501db) list_highlight_pane_cp04

0x2414,	// (0x00050838) list_single_graphic_popup_conf2_pane_g1

0x1dc8,	// (0x000501ec) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf48c,	// (0x0005d8b0) list_single_graphic_popup_conf2_pane_g

0x241e,	// (0x00050842) list_single_graphic_popup_conf2_pane_t1

0x242c,	// (0x00050850) bg_popup_call2_act_pane_cp01_ParamLimits

0x242c,	// (0x00050850) bg_popup_call2_act_pane_cp01

0x24b6,	// (0x000508da) call_type_pane_cp05_ParamLimits

0x24b6,	// (0x000508da) call_type_pane_cp05

0x250a,	// (0x0005092e) popup_call2_audio_second_window_g1_ParamLimits

0x250a,	// (0x0005092e) popup_call2_audio_second_window_g1

0x255e,	// (0x00050982) popup_call2_audio_second_window_g2_ParamLimits

0x255e,	// (0x00050982) popup_call2_audio_second_window_g2

0x0002,

0xf491,	// (0x0005d8b5) popup_call2_audio_second_window_g_ParamLimits

0xf491,	// (0x0005d8b5) popup_call2_audio_second_window_g

0x25c3,	// (0x000509e7) popup_call2_audio_second_window_t1_ParamLimits

0x25c3,	// (0x000509e7) popup_call2_audio_second_window_t1

0x267e,	// (0x00050aa2) popup_call2_audio_second_window_t2_ParamLimits

0x267e,	// (0x00050aa2) popup_call2_audio_second_window_t2

0x26d1,	// (0x00050af5) popup_call2_audio_second_window_t3_ParamLimits

0x26d1,	// (0x00050af5) popup_call2_audio_second_window_t3

0x0003,

0xf498,	// (0x0005d8bc) popup_call2_audio_second_window_t_ParamLimits

0xf498,	// (0x0005d8bc) popup_call2_audio_second_window_t

0xec29,	// (0x0005d04d) bg_popup_call2_in_pane_cp02

0xec33,	// (0x0005d057) call_type_pane_cp04

0x7be4,	// (0x00056008) popup_call2_audio_wait_window_g1

0x7bec,	// (0x00056010) popup_call2_audio_wait_window_g2

0x0001,

0xf4a1,	// (0x0005d8c5) popup_call2_audio_wait_window_g

0xec4b,	// (0x0005d06f) popup_call2_audio_wait_window_t3

0x27c4,	// (0x00050be8) bg_popup_call2_act_pane_ParamLimits

0x27c4,	// (0x00050be8) bg_popup_call2_act_pane

0x2884,	// (0x00050ca8) call_type_pane_cp03_ParamLimits

0x2884,	// (0x00050ca8) call_type_pane_cp03

0x28e8,	// (0x00050d0c) popup_call2_audio_first_window_g1_ParamLimits

0x28e8,	// (0x00050d0c) popup_call2_audio_first_window_g1

0x2958,	// (0x00050d7c) popup_call2_audio_first_window_g2_ParamLimits

0x2958,	// (0x00050d7c) popup_call2_audio_first_window_g2

0x2322,	// (0x00050746) popup_call2_audio_first_window_g3_ParamLimits

0x2322,	// (0x00050746) popup_call2_audio_first_window_g3

0x0004,

0xf4a6,	// (0x0005d8ca) popup_call2_audio_first_window_g_ParamLimits

0xf4a6,	// (0x0005d8ca) popup_call2_audio_first_window_g

0x2a36,	// (0x00050e5a) popup_call2_audio_first_window_t1_ParamLimits

0x2a36,	// (0x00050e5a) popup_call2_audio_first_window_t1

0x2b39,	// (0x00050f5d) popup_call2_audio_first_window_t4_ParamLimits

0x2b39,	// (0x00050f5d) popup_call2_audio_first_window_t4

0x2c1c,	// (0x00051040) popup_call2_audio_first_window_t5_ParamLimits

0x2c1c,	// (0x00051040) popup_call2_audio_first_window_t5

0x0003,

0xf4b1,	// (0x0005d8d5) popup_call2_audio_first_window_t_ParamLimits

0xf4b1,	// (0x0005d8d5) popup_call2_audio_first_window_t

0xee7c,	// (0x0005d2a0) bg_popup_call2_act_pane_g1

0x3277,	// (0x0005169b) popup_cale_lunar_info_window_t1

0x3285,	// (0x000516a9) popup_cale_lunar_info_window_t2

0x3293,	// (0x000516b7) popup_cale_lunar_info_window_t3

0xec29,	// (0x0005d04d) bg_popup_call2_bubble_pane

0x2d1d,	// (0x00051141) bg_popup_call2_in_pane_cp01_ParamLimits

0x2d1d,	// (0x00051141) bg_popup_call2_in_pane_cp01

0xe905,	// (0x0005cd29) call_type_pane_cp02

0x7bf4,	// (0x00056018) popup_call2_audio_out_window_g1_ParamLimits

0x7bf4,	// (0x00056018) popup_call2_audio_out_window_g1

0x2d65,	// (0x00051189) popup_call2_audio_out_window_g2_ParamLimits

0x2d65,	// (0x00051189) popup_call2_audio_out_window_g2

0x7c20,	// (0x00056044) popup_call2_audio_out_window_g3_ParamLimits

0x7c20,	// (0x00056044) popup_call2_audio_out_window_g3

0x0003,

0xf4ba,	// (0x0005d8de) popup_call2_audio_out_window_g_ParamLimits

0xf4ba,	// (0x0005d8de) popup_call2_audio_out_window_g

0x2d9c,	// (0x000511c0) popup_call2_audio_out_window_t1_ParamLimits

0x2d9c,	// (0x000511c0) popup_call2_audio_out_window_t1

0x2dfb,	// (0x0005121f) popup_call2_audio_out_window_t2_ParamLimits

0x2dfb,	// (0x0005121f) popup_call2_audio_out_window_t2

0x2e4f,	// (0x00051273) popup_call2_audio_out_window_t3_ParamLimits

0x2e4f,	// (0x00051273) popup_call2_audio_out_window_t3

0x2e65,	// (0x00051289) popup_call2_audio_out_window_t4_ParamLimits

0x2e65,	// (0x00051289) popup_call2_audio_out_window_t4

0x2e7b,	// (0x0005129f) popup_call2_audio_out_window_t5_ParamLimits

0x2e7b,	// (0x0005129f) popup_call2_audio_out_window_t5

0x0005,

0xf4c3,	// (0x0005d8e7) popup_call2_audio_out_window_t_ParamLimits

0xf4c3,	// (0x0005d8e7) popup_call2_audio_out_window_t

0x2edf,	// (0x00051303) bg_popup_call2_in_pane_ParamLimits

0x2edf,	// (0x00051303) bg_popup_call2_in_pane

0x2f3b,	// (0x0005135f) popup_call2_audio_in_window_g1_ParamLimits

0x2f3b,	// (0x0005135f) popup_call2_audio_in_window_g1

0x2f73,	// (0x00051397) popup_call2_audio_in_window_g2_ParamLimits

0x2f73,	// (0x00051397) popup_call2_audio_in_window_g2

0x2fab,	// (0x000513cf) popup_call2_audio_in_window_g3_ParamLimits

0x2fab,	// (0x000513cf) popup_call2_audio_in_window_g3

0x0003,

0xf4d0,	// (0x0005d8f4) popup_call2_audio_in_window_g_ParamLimits

0xf4d0,	// (0x0005d8f4) popup_call2_audio_in_window_g

0x3003,	// (0x00051427) popup_call2_audio_in_window_t1_ParamLimits

0x3003,	// (0x00051427) popup_call2_audio_in_window_t1

0x3083,	// (0x000514a7) popup_call2_audio_in_window_t2_ParamLimits

0x3083,	// (0x000514a7) popup_call2_audio_in_window_t2

0x3103,	// (0x00051527) popup_call2_audio_in_window_t3_ParamLimits

0x3103,	// (0x00051527) popup_call2_audio_in_window_t3

0x3159,	// (0x0005157d) popup_call2_audio_in_window_t4_ParamLimits

0x3159,	// (0x0005157d) popup_call2_audio_in_window_t4

0x316b,	// (0x0005158f) popup_call2_audio_in_window_t5_ParamLimits

0x316b,	// (0x0005158f) popup_call2_audio_in_window_t5

0x3180,	// (0x000515a4) popup_call2_audio_in_window_t6_ParamLimits

0x3180,	// (0x000515a4) popup_call2_audio_in_window_t6

0x0005,

0xf4d9,	// (0x0005d8fd) popup_call2_audio_in_window_t_ParamLimits

0xf4d9,	// (0x0005d8fd) popup_call2_audio_in_window_t

0xee7c,	// (0x0005d2a0) bg_popup_call2_in_pane_g1

0x32a1,	// (0x000516c5) popup_cale_lunar_info_window_t4

0x0003,

0xf541,	// (0x0005d965) popup_cale_lunar_info_window_t

0xee84,	// (0x0005d2a8) bg_popup_call2_rect_pane_ParamLimits

0xee84,	// (0x0005d2a8) bg_popup_call2_rect_pane

0xec29,	// (0x0005d04d) call2_cli_visual_graphic_pane

0xec29,	// (0x0005d04d) call2_cli_visual_text_pane

0x80ab,	// (0x000564cf) smil_status_volume_pane_g3

0x0002,

0xee9c,	// (0x0005d2c0) call2_cli_visual_graphic_pane_g1

0xee9c,	// (0x0005d2c0) call2_cli_visual_graphic_pane_g2

0xee9c,	// (0x0005d2c0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e6,	// (0x0005d90a) call2_cli_visual_graphic_pane_g

0x3195,	// (0x000515b9) bg_popup_call2_rect_pane_g1

0xf051,	// (0x0005d475) bg_popup_call2_rect_pane_g2

0x319d,	// (0x000515c1) bg_popup_call2_rect_pane_g3

0x31a5,	// (0x000515c9) bg_popup_call2_rect_pane_g4

0x31ad,	// (0x000515d1) bg_popup_call2_rect_pane_g5

0x31b5,	// (0x000515d9) bg_popup_call2_rect_pane_g6

0x31bd,	// (0x000515e1) bg_popup_call2_rect_pane_g7

0x31c5,	// (0x000515e9) bg_popup_call2_rect_pane_g8

0x31cd,	// (0x000515f1) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ed,	// (0x0005d911) bg_popup_call2_rect_pane_g

0x31d5,	// (0x000515f9) bg_popup_call2_bubble_pane_g1

0x31dd,	// (0x00051601) bg_popup_call2_bubble_pane_g2

0x31e5,	// (0x00051609) bg_popup_call2_bubble_pane_g3

0x31ed,	// (0x00051611) bg_popup_call2_bubble_pane_g4

0x31f5,	// (0x00051619) bg_popup_call2_bubble_pane_g5

0x31fd,	// (0x00051621) bg_popup_call2_bubble_pane_g6

0x3205,	// (0x00051629) bg_popup_call2_bubble_pane_g7

0x320d,	// (0x00051631) bg_popup_call2_bubble_pane_g8

0x3215,	// (0x00051639) bg_popup_call2_bubble_pane_g9

0x0008,

0xf500,	// (0x0005d924) bg_popup_call2_bubble_pane_g

0x5535,	// (0x00053959) aid_cale_week_size_cell_pane

0xee84,	// (0x0005d2a8) aid_cams_cif_uncrop_pane_ParamLimits

0xee84,	// (0x0005d2a8) aid_cams_cif_uncrop_pane

0x5d24,	// (0x00054148) aid_cams_size_cell_ParamLimits

0x5d24,	// (0x00054148) aid_cams_size_cell

0x5d30,	// (0x00054154) grid_cams_pane_ParamLimits

0x5d3e,	// (0x00054162) linegrid_cams_pane_ParamLimits

0x5e0f,	// (0x00054233) call_video_pane_t1

0x5e2c,	// (0x00054250) call_video_pane_t2

0x0001,

0xf208,	// (0x0005d62c) call_video_pane_t

0x629b,	// (0x000546bf) aid_cale_month_size_cell_pane_ParamLimits

0x629b,	// (0x000546bf) aid_cale_month_size_cell_pane

0xf585,	// (0x0005d9a9) smil_status_volume_pane_g

0x80b8,	// (0x000564dc) volume_smil_pane_ParamLimits

0x4e0c,	// (0x00053230) aid_popup2_width_pane

0x5433,	// (0x00053857) cell_qdial_pane_g4_ParamLimits

0x5433,	// (0x00053857) cell_qdial_pane_g4

0x7164,	// (0x00055588) aid_blid_cardinal_pane_ParamLimits

0x7174,	// (0x00055598) aid_blid_destination_pane_ParamLimits

0x7174,	// (0x00055598) aid_blid_destination_pane

0xee84,	// (0x0005d2a8) bg_popup_call_poc_act_pane_ParamLimits

0xee84,	// (0x0005d2a8) bg_popup_call_poc_act_pane

0xee84,	// (0x0005d2a8) bg_popup_call_poc_inact_pane_ParamLimits

0xee84,	// (0x0005d2a8) bg_popup_call_poc_inact_pane

0x321d,	// (0x00051641) bg_popup_call_poc_act_pane_g1

0x3225,	// (0x00051649) bg_popup_call_poc_act_pane_g2

0x322d,	// (0x00051651) bg_popup_call_poc_act_pane_g3

0x31ed,	// (0x00051611) bg_popup_call_poc_act_pane_g4

0x31f5,	// (0x00051619) bg_popup_call_poc_act_pane_g5

0x3235,	// (0x00051659) bg_popup_call_poc_act_pane_g6

0x3205,	// (0x00051629) bg_popup_call_poc_act_pane_g7

0x323d,	// (0x00051661) bg_popup_call_poc_act_pane_g8

0xec29,	// (0x0005d04d) main_usb_pane

0x7f0c,	// (0x00056330) popup_cale_lunar_info_window

0x6144,	// (0x00054568) im_reading_pane_t1_ParamLimits

0x16fd,	// (0x0004fb21) list_im_pane_ParamLimits

0x170e,	// (0x0004fb32) scroll_pane_cp07_ParamLimits

0xec29,	// (0x0005d04d) grid_highlight_pane_cp012

0xee84,	// (0x0005d2a8) mup_scale_pane_ParamLimits

0x2322,	// (0x00050746) main_usb_pane_g1_ParamLimits

0x2322,	// (0x00050746) main_usb_pane_g1

0x7c76,	// (0x0005609a) main_usb_pane_g2_ParamLimits

0x7c76,	// (0x0005609a) main_usb_pane_g2

0x0001,

0xf52a,	// (0x0005d94e) main_usb_pane_g_ParamLimits

0xf52a,	// (0x0005d94e) main_usb_pane_g

0x7c82,	// (0x000560a6) main_usb_pane_t1_ParamLimits

0x7c82,	// (0x000560a6) main_usb_pane_t1

0x7c94,	// (0x000560b8) main_usb_pane_t2_ParamLimits

0x7c94,	// (0x000560b8) main_usb_pane_t2

0x7ca6,	// (0x000560ca) main_usb_pane_t3_ParamLimits

0x7ca6,	// (0x000560ca) main_usb_pane_t3

0x7cb8,	// (0x000560dc) main_usb_pane_t4_ParamLimits

0x7cb8,	// (0x000560dc) main_usb_pane_t4

0x7cca,	// (0x000560ee) main_usb_pane_t5_ParamLimits

0x7cca,	// (0x000560ee) main_usb_pane_t5

0x7cdc,	// (0x00056100) main_usb_pane_t6_ParamLimits

0x7cdc,	// (0x00056100) main_usb_pane_t6

0x0005,

0xf52f,	// (0x0005d953) main_usb_pane_t_ParamLimits

0x7103,	// (0x00055527) aid_text_placing

0x710e,	// (0x00055532) main_location2_pane_t1_ParamLimits

0x7124,	// (0x00055548) main_location2_pane_t2_ParamLimits

0x713a,	// (0x0005555e) main_location2_pane_t3_ParamLimits

0x7150,	// (0x00055574) main_location2_pane_t4_ParamLimits

0x7150,	// (0x00055574) main_location2_pane_t4

0xf349,	// (0x0005d76d) main_location2_pane_t_ParamLimits

0xeeb2,	// (0x0005d2d6) find_pinb_pane_g2_ParamLimits

0xeeb2,	// (0x0005d2d6) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x0005d4e4) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x0005d4e4) find_pinb_pane_g

0xeebe,	// (0x0005d2e2) find_pinb_pane_t1_ParamLimits

0xeed0,	// (0x0005d2f4) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0005d4e9) find_pinb_pane_t_ParamLimits

0xec29,	// (0x0005d04d) main_call3_pane

0x684e,	// (0x00054c72) cale_month_day_heading_pane_t1_ParamLimits

0x68d0,	// (0x00054cf4) cale_month_day_heading_pane_t2_ParamLimits

0x6949,	// (0x00054d6d) cale_month_day_heading_pane_t3_ParamLimits

0x69c2,	// (0x00054de6) cale_month_day_heading_pane_t4_ParamLimits

0x6a3b,	// (0x00054e5f) cale_month_day_heading_pane_t5_ParamLimits

0x6abc,	// (0x00054ee0) cale_month_day_heading_pane_t6_ParamLimits

0x6b45,	// (0x00054f69) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x0005d664) cale_month_day_heading_pane_t_ParamLimits

0x1981,	// (0x0004fda5) smil_status_volume_pane

0x77cc,	// (0x00055bf0) postcard_address_pane_ParamLimits

0x77cc,	// (0x00055bf0) postcard_address_pane

0x77da,	// (0x00055bfe) postcard_message_pane_ParamLimits

0x77da,	// (0x00055bfe) postcard_message_pane

0x7c4c,	// (0x00056070) call2_cli_visual_pane_t1_ParamLimits

0x7c4c,	// (0x00056070) call2_cli_visual_pane_t1

0x33c9,	// (0x000517ed) postcard_message_pane_t1_ParamLimits

0x33c9,	// (0x000517ed) postcard_message_pane_t1

0x33b1,	// (0x000517d5) postcard_address_pane_t1_ParamLimits

0x33b1,	// (0x000517d5) postcard_address_pane_t1

0x81ef,	// (0x00056613) popup_call3_audio_in_window_ParamLimits

0x81ef,	// (0x00056613) popup_call3_audio_in_window

0x80cd,	// (0x000564f1) bg_popup_call3_in_pane_ParamLimits

0x80cd,	// (0x000564f1) bg_popup_call3_in_pane

0x8135,	// (0x00056559) popup_call3_audio_in_window_g1_ParamLimits

0x8135,	// (0x00056559) popup_call3_audio_in_window_g1

0x814d,	// (0x00056571) popup_call3_audio_in_window_g2_ParamLimits

0x814d,	// (0x00056571) popup_call3_audio_in_window_g2

0x8165,	// (0x00056589) popup_call3_audio_in_window_g3_ParamLimits

0x8165,	// (0x00056589) popup_call3_audio_in_window_g3

0x0003,

0xf58c,	// (0x0005d9b0) popup_call3_audio_in_window_g_ParamLimits

0xf58c,	// (0x0005d9b0) popup_call3_audio_in_window_g

0x818d,	// (0x000565b1) popup_call3_audio_in_window_t1_ParamLimits

0x818d,	// (0x000565b1) popup_call3_audio_in_window_t1

0x81b5,	// (0x000565d9) popup_call3_audio_in_window_t2_ParamLimits

0x81b5,	// (0x000565d9) popup_call3_audio_in_window_t2

0x81dd,	// (0x00056601) popup_call3_audio_in_window_t3_ParamLimits

0x81dd,	// (0x00056601) popup_call3_audio_in_window_t3

0x0002,

0xf595,	// (0x0005d9b9) popup_call3_audio_in_window_t_ParamLimits

0xf595,	// (0x0005d9b9) popup_call3_audio_in_window_t

0x160a,	// (0x0004fa2e) bg_popup_call3_rect_pane

0x3195,	// (0x000515b9) bg_popup_call3_rect_pane_g1

0xf051,	// (0x0005d475) bg_popup_call3_rect_pane_g2

0x319d,	// (0x000515c1) bg_popup_call3_rect_pane_g3

0x31a5,	// (0x000515c9) bg_popup_call3_rect_pane_g4

0x31ad,	// (0x000515d1) bg_popup_call3_rect_pane_g5

0x31b5,	// (0x000515d9) bg_popup_call3_rect_pane_g6

0x31bd,	// (0x000515e1) bg_popup_call3_rect_pane_g7

0xe7c9,	// (0x0005cbed) mup_visualizer_osc_pane

0xe7c9,	// (0x0005cbed) mup_visualizer_spec_pane

0x80ed,	// (0x00056511) call3_video_qcif_pane_ParamLimits

0x80ed,	// (0x00056511) call3_video_qcif_pane

0x80ff,	// (0x00056523) call3_video_qcif_uncrop_pane_ParamLimits

0x80ff,	// (0x00056523) call3_video_qcif_uncrop_pane

0x810f,	// (0x00056533) call3_video_subqcif_pane_ParamLimits

0x810f,	// (0x00056533) call3_video_subqcif_pane

0x8123,	// (0x00056547) call3_video_subqcif_uncrop_pane_ParamLimits

0x8123,	// (0x00056547) call3_video_subqcif_uncrop_pane

0x817d,	// (0x000565a1) popup_call3_audio_in_window_g4_ParamLimits

0x817d,	// (0x000565a1) popup_call3_audio_in_window_g4

0xe7c9,	// (0x0005cbed) mup_spec_half_pane

0xe7c9,	// (0x0005cbed) mup_spec_half_pane_cp

0xe7c9,	// (0x0005cbed) mup_osc_middle_pane

0x1640,	// (0x0004fa64) mup_visualizer_osc_pane_g1

0x3364,	// (0x00051788) mup_spec_bar_pane_ParamLimits

0x3364,	// (0x00051788) mup_spec_bar_pane

0x1640,	// (0x0004fa64) mup_spec_bar_pane_g1

0x1640,	// (0x0004fa64) mup_spec_bar_pane_g2

0x0001,

0xf3c3,	// (0x0005d7e7) mup_spec_bar_pane_g

0x5535,	// (0x00053959) aid_cale_week_size_cell_pane_ParamLimits

0x554f,	// (0x00053973) bg_cale_heading_pane_ParamLimits

0x5578,	// (0x0005399c) bg_cale_pane_cp01_ParamLimits

0x559a,	// (0x000539be) cale_week_corner_pane_ParamLimits

0x55b9,	// (0x000539dd) cale_week_day_heading_pane_ParamLimits

0x55e7,	// (0x00053a0b) cale_week_scroll_pane_g1_ParamLimits

0x560b,	// (0x00053a2f) cale_week_scroll_pane_g2_ParamLimits

0x5623,	// (0x00053a47) cale_week_scroll_pane_g3_ParamLimits

0x563b,	// (0x00053a5f) cale_week_scroll_pane_g4_ParamLimits

0x5653,	// (0x00053a77) cale_week_scroll_pane_g5_ParamLimits

0x566b,	// (0x00053a8f) cale_week_scroll_pane_g6_ParamLimits

0x568b,	// (0x00053aaf) cale_week_scroll_pane_g7_ParamLimits

0x56ab,	// (0x00053acf) cale_week_scroll_pane_g8_ParamLimits

0x56cb,	// (0x00053aef) cale_week_scroll_pane_g9_ParamLimits

0x56e8,	// (0x00053b0c) cale_week_scroll_pane_g10_ParamLimits

0x5705,	// (0x00053b29) cale_week_scroll_pane_g11_ParamLimits

0x5724,	// (0x00053b48) cale_week_scroll_pane_g12_ParamLimits

0x5749,	// (0x00053b6d) cale_week_scroll_pane_g13_ParamLimits

0x5772,	// (0x00053b96) cale_week_scroll_pane_g14_ParamLimits

0x579b,	// (0x00053bbf) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x0005d575) cale_week_scroll_pane_g_ParamLimits

0x57e4,	// (0x00053c08) cale_week_time_pane_ParamLimits

0x5804,	// (0x00053c28) grid_cale_week_pane_ParamLimits

0x1580,	// (0x0004f9a4) listscroll_cale_week_pane_t1

0x1592,	// (0x0004f9b6) scroll_pane_cp08_ParamLimits

0x6313,	// (0x00054737) cale_month_corner_pane_ParamLimits

0x1957,	// (0x0004fd7b) cale_month_pane_t1

0x67d5,	// (0x00054bf9) cale_month_week_pane_ParamLimits

0x2322,	// (0x00050746) popup_call_status_window_g1_ParamLimits

0x6f47,	// (0x0005536b) popup_call_status_window_g2_ParamLimits

0x6f53,	// (0x00055377) popup_call_status_window_g3_ParamLimits

0xf2d0,	// (0x0005d6f4) popup_call_status_window_g_ParamLimits

0x1d4c,	// (0x00050170) aid_call2_pane

0x75f0,	// (0x00055a14) msg_header_pane_g1

0x77cc,	// (0x00055bf0) postcard_address2_pane_ParamLimits

0x77cc,	// (0x00055bf0) postcard_address2_pane

0x77da,	// (0x00055bfe) postcard_message2_pane_ParamLimits

0x77da,	// (0x00055bfe) postcard_message2_pane

0x8091,	// (0x000564b5) message2_row_pane_ParamLimits

0x8091,	// (0x000564b5) message2_row_pane

0x331e,	// (0x00051742) address2_row_pane_ParamLimits

0x331e,	// (0x00051742) address2_row_pane

0x3331,	// (0x00051755) postcard_message2_row_pane_g1

0x3339,	// (0x0005175d) postcard_message2_row_pane_t1

0x3331,	// (0x00051755) address2_row_pane_g1

0x3339,	// (0x0005175d) address2_row_pane_t1

0x5b92,	// (0x00053fb6) aid_size_cell_vorec

0xec29,	// (0x0005d04d) main_rss_pane

0x3347,	// (0x0005176b) rss_list_single_pane_ParamLimits

0x3347,	// (0x0005176b) rss_list_single_pane

0x3355,	// (0x00051779) rss_list_single_pane_t1

0x3355,	// (0x00051779) rss_list_single_pane_t2

0x0001,

0xf580,	// (0x0005d9a4) rss_list_single_pane_t

0xec29,	// (0x0005d04d) main_camera2_pane

0xec29,	// (0x0005d04d) main_video2_pane

0x50bb,	// (0x000534df) cams_zoom_pane_cp2_ParamLimits

0x50bb,	// (0x000534df) cams_zoom_pane_cp2

0x50bb,	// (0x000534df) image2_vga_pane_ParamLimits

0x50bb,	// (0x000534df) image2_vga_pane

0x1d78,	// (0x0005019c) main_camera2_pane_g1_ParamLimits

0x1d78,	// (0x0005019c) main_camera2_pane_g1

0x1d78,	// (0x0005019c) main_camera2_pane_g2_ParamLimits

0x1d78,	// (0x0005019c) main_camera2_pane_g2

0x1d78,	// (0x0005019c) main_camera2_pane_g3_ParamLimits

0x1d78,	// (0x0005019c) main_camera2_pane_g3

0x1d78,	// (0x0005019c) main_camera2_pane_g4_ParamLimits

0x1d78,	// (0x0005019c) main_camera2_pane_g4

0x1d78,	// (0x0005019c) main_camera2_pane_g5_ParamLimits

0x1d78,	// (0x0005019c) main_camera2_pane_g5

0x1d78,	// (0x0005019c) main_camera2_pane_g6_ParamLimits

0x1d78,	// (0x0005019c) main_camera2_pane_g6

0x1d78,	// (0x0005019c) main_camera2_pane_g7_ParamLimits

0x1d78,	// (0x0005019c) main_camera2_pane_g7

0x1d78,	// (0x0005019c) main_camera2_pane_g8_ParamLimits

0x1d78,	// (0x0005019c) main_camera2_pane_g8

0x0008,

0xf59c,	// (0x0005d9c0) main_camera2_pane_g_ParamLimits

0xf59c,	// (0x0005d9c0) main_camera2_pane_g

0x820c,	// (0x00056630) main_camera2_pane_t1_ParamLimits

0x820c,	// (0x00056630) main_camera2_pane_t1

0x820c,	// (0x00056630) main_camera2_pane_t2_ParamLimits

0x820c,	// (0x00056630) main_camera2_pane_t2

0x820c,	// (0x00056630) main_camera2_pane_t3_ParamLimits

0x820c,	// (0x00056630) main_camera2_pane_t3

0x820c,	// (0x00056630) main_camera2_pane_t4_ParamLimits

0x820c,	// (0x00056630) main_camera2_pane_t4

0x0006,

0xf5af,	// (0x0005d9d3) main_camera2_pane_t_ParamLimits

0xf5af,	// (0x0005d9d3) main_camera2_pane_t

0x8234,	// (0x00056658) cams_zoom_pane_cp4_ParamLimits

0x8234,	// (0x00056658) cams_zoom_pane_cp4

0x7eb1,	// (0x000562d5) image2_cif_pane_ParamLimits

0x7eb1,	// (0x000562d5) image2_cif_pane

0x50bb,	// (0x000534df) image2_subqcif_pane_ParamLimits

0x50bb,	// (0x000534df) image2_subqcif_pane

0x8242,	// (0x00056666) main_video2_pane_g1_ParamLimits

0x8242,	// (0x00056666) main_video2_pane_g1

0x8242,	// (0x00056666) main_video2_pane_g2_ParamLimits

0x8242,	// (0x00056666) main_video2_pane_g2

0x8242,	// (0x00056666) main_video2_pane_g3_ParamLimits

0x8242,	// (0x00056666) main_video2_pane_g3

0x8242,	// (0x00056666) main_video2_pane_g4_ParamLimits

0x8242,	// (0x00056666) main_video2_pane_g4

0x8242,	// (0x00056666) main_video2_pane_g5_ParamLimits

0x8242,	// (0x00056666) main_video2_pane_g5

0x8242,	// (0x00056666) main_video2_pane_g6_ParamLimits

0x8242,	// (0x00056666) main_video2_pane_g6

0x0005,

0xf5be,	// (0x0005d9e2) main_video2_pane_g_ParamLimits

0xf5be,	// (0x0005d9e2) main_video2_pane_g

0x8250,	// (0x00056674) main_video2_pane_t1_ParamLimits

0x8250,	// (0x00056674) main_video2_pane_t1

0x8250,	// (0x00056674) main_video2_pane_t2_ParamLimits

0x8250,	// (0x00056674) main_video2_pane_t2

0x8250,	// (0x00056674) main_video2_pane_t3_ParamLimits

0x8250,	// (0x00056674) main_video2_pane_t3

0x0002,

0xf5cb,	// (0x0005d9ef) main_video2_pane_t_ParamLimits

0xf5cb,	// (0x0005d9ef) main_video2_pane_t

0x7d72,	// (0x00056196) call_muted_g2

0x0001,

0xf572,	// (0x0005d996) call_muted_g

0xec29,	// (0x0005d04d) main_mup2_pane

0xef1b,	// (0x0005d33f) main_mup2_pane_g1_ParamLimits

0xef1b,	// (0x0005d33f) main_mup2_pane_g1

0xef1b,	// (0x0005d33f) main_mup2_pane_g2_ParamLimits

0xef1b,	// (0x0005d33f) main_mup2_pane_g2

0x3e9a,	// (0x000522be) main_mup_pane_g13_cp1

0x50d5,	// (0x000534f9) mup_volume_pane_cp1

0xef1b,	// (0x0005d33f) main_mup2_pane_g4_ParamLimits

0xef1b,	// (0x0005d33f) main_mup2_pane_g4

0xef1b,	// (0x0005d33f) main_mup2_pane_g5_ParamLimits

0xef1b,	// (0x0005d33f) main_mup2_pane_g5

0xef1b,	// (0x0005d33f) main_mup2_pane_g6_ParamLimits

0xef1b,	// (0x0005d33f) main_mup2_pane_g6

0xef1b,	// (0x0005d33f) main_mup2_pane_g7_ParamLimits

0xef1b,	// (0x0005d33f) main_mup2_pane_g7

0x0006,

0xf5d2,	// (0x0005d9f6) main_mup2_pane_g_ParamLimits

0xf5d2,	// (0x0005d9f6) main_mup2_pane_g

0xef29,	// (0x0005d34d) main_mup2_pane_t1_ParamLimits

0xef29,	// (0x0005d34d) main_mup2_pane_t1

0xef29,	// (0x0005d34d) main_mup2_pane_t2_ParamLimits

0xef29,	// (0x0005d34d) main_mup2_pane_t2

0xef29,	// (0x0005d34d) main_mup2_pane_t3_ParamLimits

0xef29,	// (0x0005d34d) main_mup2_pane_t3

0xef29,	// (0x0005d34d) main_mup2_pane_t4_ParamLimits

0xef29,	// (0x0005d34d) main_mup2_pane_t4

0xef29,	// (0x0005d34d) main_mup2_pane_t5_ParamLimits

0xef29,	// (0x0005d34d) main_mup2_pane_t5

0xef29,	// (0x0005d34d) main_mup2_pane_t6_ParamLimits

0xef29,	// (0x0005d34d) main_mup2_pane_t6

0x0005,

0xf5e1,	// (0x0005da05) main_mup2_pane_t_ParamLimits

0xf5e1,	// (0x0005da05) main_mup2_pane_t

0x2330,	// (0x00050754) mup2_visualizer_pane_ParamLimits

0x2330,	// (0x00050754) mup2_visualizer_pane

0x2330,	// (0x00050754) mup_progress_pane_cp_ParamLimits

0x2330,	// (0x00050754) mup_progress_pane_cp

0x831f,	// (0x00056743) mup_volume_pane_cp_ParamLimits

0x831f,	// (0x00056743) mup_volume_pane_cp

0xeeff,	// (0x0005d323) mup2_visualizer_pane_g1_ParamLimits

0xeeff,	// (0x0005d323) mup2_visualizer_pane_g1

0xef0d,	// (0x0005d331) mup2_visualizer_pane_g2_ParamLimits

0xef0d,	// (0x0005d331) mup2_visualizer_pane_g2

0xef0d,	// (0x0005d331) mup2_visualizer_pane_g3_ParamLimits

0xef0d,	// (0x0005d331) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0005d4ee) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0005d4ee) mup2_visualizer_pane_g

0x2261,	// (0x00050685) aid_size_cell_fmradio

0x7e88,	// (0x000562ac) aid_height_parent_landcape

0x178c,	// (0x0004fbb0) wml_content_pane_cp

0x1794,	// (0x0004fbb8) wml_tabs_pane

0x179d,	// (0x0004fbc1) popup_wml_miniature_window

0x17a5,	// (0x0004fbc9) scroll_pane_cp021

0x17b9,	// (0x0004fbdd) wml_content_pane_comp8

0xec29,	// (0x0005d04d) bg_popup_sub_pane_cp05

0x3409,	// (0x0005182d) popup_wml_miniature_window_g1

0x3411,	// (0x00051835) wml_miniature_view_pane

0x8264,	// (0x00056688) aid_size_wml_view

0x826c,	// (0x00056690) wml_miniature_view_pane_g1

0x8275,	// (0x00056699) wml_miniature_view_pane_g2

0x827e,	// (0x000566a2) wml_miniature_view_pane_g3

0x8286,	// (0x000566aa) wml_miniature_view_pane_g4

0x828e,	// (0x000566b2) wml_miniature_view_pane_g5

0x8296,	// (0x000566ba) wml_miniature_view_pane_g6

0x829e,	// (0x000566c2) wml_miniature_view_pane_g7

0x82a6,	// (0x000566ca) wml_miniature_view_pane_g8

0x0007,

0xf5ee,	// (0x0005da12) wml_miniature_view_pane_g

0x3419,	// (0x0005183d) background_graphic_ParamLimits

0x3419,	// (0x0005183d) background_graphic

0x3425,	// (0x00051849) wml_tabs_2_pane

0x342e,	// (0x00051852) wml_tabs_3_pane_ParamLimits

0x342e,	// (0x00051852) wml_tabs_3_pane

0x3440,	// (0x00051864) wml_tabs_4_pane_ParamLimits

0x3440,	// (0x00051864) wml_tabs_4_pane

0x3456,	// (0x0005187a) wml_tabs_5_pane_ParamLimits

0x3456,	// (0x0005187a) wml_tabs_5_pane

0x3470,	// (0x00051894) wml_tabs_pane_g2_ParamLimits

0x3470,	// (0x00051894) wml_tabs_pane_g2

0x3485,	// (0x000518a9) wml_tabs_pane_g3_ParamLimits

0x3485,	// (0x000518a9) wml_tabs_pane_g3

0x349a,	// (0x000518be) wml_tabs_2_active_pane_ParamLimits

0x349a,	// (0x000518be) wml_tabs_2_active_pane

0x349a,	// (0x000518be) wml_tabs_2_passive_pane_ParamLimits

0x349a,	// (0x000518be) wml_tabs_2_passive_pane

0x82ae,	// (0x000566d2) wml_tabs_3_active_pane_cp_ParamLimits

0x82ae,	// (0x000566d2) wml_tabs_3_active_pane_cp

0x82c1,	// (0x000566e5) wml_tabs_3_passive_pane_ParamLimits

0x82c1,	// (0x000566e5) wml_tabs_3_passive_pane

0x82d2,	// (0x000566f6) wml_tabs_3_passive_pane_cp_ParamLimits

0x82d2,	// (0x000566f6) wml_tabs_3_passive_pane_cp

0x82e7,	// (0x0005670b) tabs_4_active_pane

0x82ef,	// (0x00056713) tabs_4_passive_pane

0x82f7,	// (0x0005671b) tabs_4_passive_pane_cp

0x82ff,	// (0x00056723) tabs_4_passive_pane_cp2

0x7c6e,	// (0x00056092) aid_height_text

0x2330,	// (0x00050754) mup_volume_cont_pane_ParamLimits

0x2330,	// (0x00050754) mup_volume_cont_pane

0xe7c9,	// (0x0005cbed) aid_size_cell_pinb

0xe7c9,	// (0x0005cbed) aid_size_list_pinb

0x2330,	// (0x00050754) mup2_volume_cont_pane_ParamLimits

0x2330,	// (0x00050754) mup2_volume_cont_pane

0x8309,	// (0x0005672d) mup2_volume_cont_pane_g1_ParamLimits

0x8309,	// (0x0005672d) mup2_volume_cont_pane_g1

0x4e18,	// (0x0005323c) aid_size_cell_touch_ParamLimits

0x4e18,	// (0x0005323c) aid_size_cell_touch

0x50df,	// (0x00053503) touch_pane_ParamLimits

0x50df,	// (0x00053503) touch_pane

0x50d5,	// (0x000534f9) main_rss2_pane

0x34b1,	// (0x000518d5) listscroll_rss2_pane

0x34ba,	// (0x000518de) rss2_navigation_pane

0x34c2,	// (0x000518e6) list_rss2_pane

0x1e5c,	// (0x00050280) scroll_pane_cp22

0x34ca,	// (0x000518ee) rss2_navigation_pane_g1

0x34d3,	// (0x000518f7) rss2_navigation_pane_g2

0x34db,	// (0x000518ff) rss2_navigation_pane_g3

0x0002,

0xf5ff,	// (0x0005da23) rss2_navigation_pane_g

0x34e3,	// (0x00051907) rss2_navigation_pane_t1

0x8335,	// (0x00056759) rss2_list_single_pane_ParamLimits

0x8335,	// (0x00056759) rss2_list_single_pane

0x34f1,	// (0x00051915) rss2_list_single_pane_t2

0x34ff,	// (0x00051923) rss2_list_single_pane_t3_ParamLimits

0x34ff,	// (0x00051923) rss2_list_single_pane_t3

0x351c,	// (0x00051940) rss2_list_single_pane_t4

0x6de3,	// (0x00055207) smil_status_pane_g1

0x7eb1,	// (0x000562d5) main_image2_pane_ParamLimits

0x7eb1,	// (0x000562d5) main_image2_pane

0x1d78,	// (0x0005019c) main_camera2_pane_g9_ParamLimits

0x1d78,	// (0x0005019c) main_camera2_pane_g9

0x820c,	// (0x00056630) main_camera2_pane_t5_ParamLimits

0x820c,	// (0x00056630) main_camera2_pane_t5

0x8220,	// (0x00056644) main_camera2_pane_t6_ParamLimits

0x8220,	// (0x00056644) main_camera2_pane_t6

0x8358,	// (0x0005677c) main_image2_pane_g1_ParamLimits

0x8358,	// (0x0005677c) main_image2_pane_g1

0x79a3,	// (0x00055dc7) smil2_video_pane_ParamLimits

0x79a3,	// (0x00055dc7) smil2_video_pane

0x4d1c,	// (0x00053140) aid_zoom_text_primary_cp

0x5070,	// (0x00053494) popup_preview_fixed_window

0x16f5,	// (0x0004fb19) im_reading_pane_g1

0x81fe,	// (0x00056622) cams2_bc_adjust_pane_cp_ParamLimits

0x81fe,	// (0x00056622) cams2_bc_adjust_pane_cp

0x50bb,	// (0x000534df) cams2_bc_adjust_pane_ParamLimits

0x50bb,	// (0x000534df) cams2_bc_adjust_pane

0x3e9a,	// (0x000522be) cams2_bc_adjust_pane_g1

0x50d5,	// (0x000534f9) cams2_slider_pane

0x3e9a,	// (0x000522be) cams2_slider_pane_g1

0x3e9a,	// (0x000522be) cams2_slider_pane_g2

0x0006,

0xf606,	// (0x0005da2a) cams2_slider_pane_g

0x5174,	// (0x00053598) calc_display_pane_ParamLimits

0x5192,	// (0x000535b6) calc_paper_pane_ParamLimits

0x51ae,	// (0x000535d2) grid_calc_pane_ParamLimits

0x6fb1,	// (0x000553d5) popup_clock_digital_window_t1_ParamLimits

0x21fe,	// (0x00050622) main_image_pane_t1

0x515a,	// (0x0005357e) aid_size_cell_calc_ParamLimits

0x515a,	// (0x0005357e) aid_size_cell_calc

0x7ee2,	// (0x00056306) popup_blid_sat_info2_window_ParamLimits

0x7ee2,	// (0x00056306) popup_blid_sat_info2_window

0x352a,	// (0x0005194e) aid_size_cell_blid

0x2330,	// (0x00050754) bg_popup_window_pane_cp07

0x3547,	// (0x0005196b) grid_popup_blid_pane

0x3551,	// (0x00051975) heading_pane_cp05_ParamLimits

0x3551,	// (0x00051975) heading_pane_cp05

0x361b,	// (0x00051a3f) cell_popup_blid_pane_ParamLimits

0x361b,	// (0x00051a3f) cell_popup_blid_pane

0x3645,	// (0x00051a69) cell_popup_blid_pane_g1

0x364d,	// (0x00051a71) cell_popup_blid_pane_t1

0x2330,	// (0x00050754) mup2_indicator_pane_ParamLimits

0x2330,	// (0x00050754) mup2_indicator_pane

0xe7c9,	// (0x0005cbed) mup2_visualizer_osc_pane

0x33f3,	// (0x00051817) mup2_visualizer_spec_pane_ParamLimits

0x33f3,	// (0x00051817) mup2_visualizer_spec_pane

0xe7c9,	// (0x0005cbed) mup2_spec_half_pane

0xe7c9,	// (0x0005cbed) mup2_spec_half_pane_cp

0x365b,	// (0x00051a7f) mup2_spec_bar_pane_ParamLimits

0x365b,	// (0x00051a7f) mup2_spec_bar_pane

0x1640,	// (0x0004fa64) mup2_spec_bar_pane_g1

0x367a,	// (0x00051a9e) mup2_spec_bar_pane_g2

0x0001,

0xf62c,	// (0x0005da50) mup2_spec_bar_pane_g

0xe7c9,	// (0x0005cbed) mup2_osc_middle_pane

0x1640,	// (0x0004fa64) mup2_visualizer_osc_pane_g1

0xe7f3,	// (0x0005cc17) popup_number_entry_window_t1_ParamLimits

0xe806,	// (0x0005cc2a) popup_number_entry_window_t2_ParamLimits

0xe826,	// (0x0005cc4a) popup_number_entry_window_t3_ParamLimits

0xe838,	// (0x0005cc5c) popup_number_entry_window_t5_ParamLimits

0xe838,	// (0x0005cc5c) popup_number_entry_window_t5

0xf06b,	// (0x0005d48f) popup_number_entry_window_t_ParamLimits

0xe86d,	// (0x0005cc91) text_title_cp2_ParamLimits

0x7690,	// (0x00055ab4) aid_hotspot_pointer_text2_pane

0x772a,	// (0x00055b4e) main_viewer_pane_g9_ParamLimits

0x772a,	// (0x00055b4e) main_viewer_pane_g9

0x1957,	// (0x0004fd7b) cale_month_pane_t1_ParamLimits

0x1994,	// (0x0004fdb8) bg_cale_pane_ParamLimits

0x19ac,	// (0x0004fdd0) list_cale_pane_ParamLimits

0x19bd,	// (0x0004fde1) listscroll_cale_day_pane_t1

0x19cf,	// (0x0004fdf3) scroll_pane_cp09_ParamLimits

0x734c,	// (0x00055770) main_mup_eq_pane_t1_ParamLimits

0x734c,	// (0x00055770) main_mup_eq_pane_t1

0x7368,	// (0x0005578c) main_mup_eq_pane_t2_ParamLimits

0x7368,	// (0x0005578c) main_mup_eq_pane_t2

0x7384,	// (0x000557a8) main_mup_eq_pane_t3_ParamLimits

0x7384,	// (0x000557a8) main_mup_eq_pane_t3

0x739e,	// (0x000557c2) main_mup_eq_pane_t4_ParamLimits

0x739e,	// (0x000557c2) main_mup_eq_pane_t4

0x73b8,	// (0x000557dc) main_mup_eq_pane_t5_ParamLimits

0x73b8,	// (0x000557dc) main_mup_eq_pane_t5

0x73d2,	// (0x000557f6) main_mup_eq_pane_t6_ParamLimits

0x73d2,	// (0x000557f6) main_mup_eq_pane_t6

0x73e8,	// (0x0005580c) main_mup_eq_pane_t7_ParamLimits

0x73e8,	// (0x0005580c) main_mup_eq_pane_t7

0x73fe,	// (0x00055822) main_mup_eq_pane_t8_ParamLimits

0x73fe,	// (0x00055822) main_mup_eq_pane_t8

0x7414,	// (0x00055838) main_mup_eq_pane_t9_ParamLimits

0x7414,	// (0x00055838) main_mup_eq_pane_t9

0x7430,	// (0x00055854) main_mup_eq_pane_t10_ParamLimits

0x7430,	// (0x00055854) main_mup_eq_pane_t10

0x0009,

0xf3cf,	// (0x0005d7f3) main_mup_eq_pane_t_ParamLimits

0xf3cf,	// (0x0005d7f3) main_mup_eq_pane_t

0x74f5,	// (0x00055919) mup_equalizer_pane_cp5_ParamLimits

0x750d,	// (0x00055931) mup_equalizer_pane_cp6_ParamLimits

0x7525,	// (0x00055949) mup_equalizer_pane_cp7_ParamLimits

0x50d5,	// (0x000534f9) main_gallery_pane

0x3383,	// (0x000517a7) smil2_volume_pane

0x339e,	// (0x000517c2) smil_status_volume_pane_g1_ParamLimits

0x338b,	// (0x000517af) smil_status_volume_pane_g2_ParamLimits

0x80ab,	// (0x000564cf) smil_status_volume_pane_g3_ParamLimits

0xf585,	// (0x0005d9a9) smil_status_volume_pane_g_ParamLimits

0x2330,	// (0x00050754) bg_popup_window_pane_cp07_ParamLimits

0x3532,	// (0x00051956) blid_firmament_pane

0xeef1,	// (0x0005d315) aid_size_cell_gallery_ParamLimits

0xeef1,	// (0x0005d315) aid_size_cell_gallery

0xeef1,	// (0x0005d315) grid_gallery_pane_ParamLimits

0xeef1,	// (0x0005d315) grid_gallery_pane

0x314b,	// (0x0005156f) cell_gallery_pane_ParamLimits

0x314b,	// (0x0005156f) cell_gallery_pane

0xe818,	// (0x0005cc3c) bg_cell_gallery_focus_pane_ParamLimits

0xe818,	// (0x0005cc3c) bg_cell_gallery_focus_pane

0xeeff,	// (0x0005d323) cell_gallery_pane_g1_ParamLimits

0xeeff,	// (0x0005d323) cell_gallery_pane_g1

0xeeff,	// (0x0005d323) cell_gallery_pane_g2_ParamLimits

0xeeff,	// (0x0005d323) cell_gallery_pane_g2

0xeeff,	// (0x0005d323) cell_gallery_pane_g3_ParamLimits

0xeeff,	// (0x0005d323) cell_gallery_pane_g3

0xef0d,	// (0x0005d331) cell_gallery_pane_g4_ParamLimits

0xef0d,	// (0x0005d331) cell_gallery_pane_g4

0x0003,

0xf631,	// (0x0005da55) cell_gallery_pane_g_ParamLimits

0xf631,	// (0x0005da55) cell_gallery_pane_g

0x3684,	// (0x00051aa8) bg_cell_gallery_focus_pane_g1

0x368c,	// (0x00051ab0) bg_cell_gallery_focus_pane_g2

0x3694,	// (0x00051ab8) bg_cell_gallery_focus_pane_g3

0x369c,	// (0x00051ac0) bg_cell_gallery_focus_pane_g4

0x36a4,	// (0x00051ac8) bg_cell_gallery_focus_pane_g5

0x36ac,	// (0x00051ad0) bg_cell_gallery_focus_pane_g6

0x36b4,	// (0x00051ad8) bg_cell_gallery_focus_pane_g7

0x36bc,	// (0x00051ae0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf63a,	// (0x0005da5e) bg_cell_gallery_focus_pane_g

0x36c4,	// (0x00051ae8) aid_firma_cardinal

0x36d8,	// (0x00051afc) blid_firmament_pane_t1

0x36ef,	// (0x00051b13) blid_firmament_pane_t2

0x3706,	// (0x00051b2a) blid_firmament_pane_t3

0x371d,	// (0x00051b41) blid_firmament_pane_t4

0x0003,

0xf64b,	// (0x0005da6f) blid_firmament_pane_t

0x3734,	// (0x00051b58) blid_sat_info_pane

0x1640,	// (0x0004fa64) blid_sat_info_pane_g1

0x1640,	// (0x0004fa64) blid_sat_info_pane_g2

0x0001,

0xf3c3,	// (0x0005d7e7) blid_sat_info_pane_g

0x3744,	// (0x00051b68) blid_sat_info_pane_t1

0x3752,	// (0x00051b76) smil2_volume_content_pane

0x375b,	// (0x00051b7f) smil2_volume_pane_g1

0xefe8,	// (0x0005d40c) smil2_volume_content_pane_g1

0x3763,	// (0x00051b87) smil2_volume_content_pane_g2

0x376c,	// (0x00051b90) smil2_volume_content_pane_g3

0x3775,	// (0x00051b99) smil2_volume_content_pane_g4

0x377e,	// (0x00051ba2) smil2_volume_content_pane_g5

0x3787,	// (0x00051bab) smil2_volume_content_pane_g6

0x3790,	// (0x00051bb4) smil2_volume_content_pane_g7

0x3799,	// (0x00051bbd) smil2_volume_content_pane_g8

0x37a2,	// (0x00051bc6) smil2_volume_content_pane_g9

0x37ab,	// (0x00051bcf) smil2_volume_content_pane_g10

0x0009,

0xf654,	// (0x0005da78) smil2_volume_content_pane_g

0x58c5,	// (0x00053ce9) cale_week_day_heading_pane_t1_ParamLimits

0x58ed,	// (0x00053d11) cale_week_day_heading_pane_t2_ParamLimits

0x591a,	// (0x00053d3e) cale_week_day_heading_pane_t3_ParamLimits

0x5947,	// (0x00053d6b) cale_week_day_heading_pane_t4_ParamLimits

0x5974,	// (0x00053d98) cale_week_day_heading_pane_t5_ParamLimits

0x59a1,	// (0x00053dc5) cale_week_day_heading_pane_t6_ParamLimits

0x59ce,	// (0x00053df2) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x0005d596) cale_week_day_heading_pane_t_ParamLimits

0x15af,	// (0x0004f9d3) bg_cale_side_pane_ParamLimits

0x59f6,	// (0x00053e1a) cale_week_time_pane_t1_ParamLimits

0x5a1a,	// (0x00053e3e) cale_week_time_pane_t2_ParamLimits

0x5a3e,	// (0x00053e62) cale_week_time_pane_t3_ParamLimits

0x5a62,	// (0x00053e86) cale_week_time_pane_t4_ParamLimits

0x5a86,	// (0x00053eaa) cale_week_time_pane_t5_ParamLimits

0x5aac,	// (0x00053ed0) cale_week_time_pane_t6_ParamLimits

0x5ad4,	// (0x00053ef8) cale_week_time_pane_t7_ParamLimits

0x5b00,	// (0x00053f24) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x0005d5a5) cale_week_time_pane_t_ParamLimits

0x5b30,	// (0x00053f54) cell_cale_week_pane_g2_ParamLimits

0x15af,	// (0x0004f9d3) bg_cale_side_pane_cp01_ParamLimits

0x6bce,	// (0x00054ff2) cale_month_week_pane_t1_ParamLimits

0x6be7,	// (0x0005500b) cale_month_week_pane_t2_ParamLimits

0x6c00,	// (0x00055024) cale_month_week_pane_t3_ParamLimits

0x6c19,	// (0x0005503d) cale_month_week_pane_t4_ParamLimits

0x6c32,	// (0x00055056) cale_month_week_pane_t5_ParamLimits

0x6c4f,	// (0x00055073) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x0005d673) cale_month_week_pane_t_ParamLimits

0x6da0,	// (0x000551c4) cell_cale_month_pane_g1_ParamLimits

0x50d5,	// (0x000534f9) main_cale_event_viewer_pane

0xe7c9,	// (0x0005cbed) listscroll_cale_event_viewer_pane

0x37b4,	// (0x00051bd8) list_cale_ev_pane

0x37bc,	// (0x00051be0) scroll_pane_cp023

0x8364,	// (0x00056788) field_cale_ev_pane_ParamLimits

0x8364,	// (0x00056788) field_cale_ev_pane

0x37c8,	// (0x00051bec) field_cale_ev_content_pane_ParamLimits

0x37c8,	// (0x00051bec) field_cale_ev_content_pane

0x37d4,	// (0x00051bf8) field_cale_ev_pane_g1_ParamLimits

0x37d4,	// (0x00051bf8) field_cale_ev_pane_g1

0x37e0,	// (0x00051c04) field_cale_ev_pane_g2_ParamLimits

0x37e0,	// (0x00051c04) field_cale_ev_pane_g2

0x3804,	// (0x00051c28) field_cale_ev_pane_g3_ParamLimits

0x3804,	// (0x00051c28) field_cale_ev_pane_g3

0x0002,

0xf669,	// (0x0005da8d) field_cale_ev_pane_g_ParamLimits

0xf669,	// (0x0005da8d) field_cale_ev_pane_g

0x381c,	// (0x00051c40) field_cale_ev_pane_t1_ParamLimits

0x381c,	// (0x00051c40) field_cale_ev_pane_t1

0x8388,	// (0x000567ac) field_cale_ev_content_pane_t1_ParamLimits

0x8388,	// (0x000567ac) field_cale_ev_content_pane_t1

0x20e4,	// (0x00050508) bg_button_pane_cp01

0x5523,	// (0x00053947) listscroll_cale_week_pane_ParamLimits

0x1577,	// (0x0004f99b) popup_toolbar_window_cp01

0x1580,	// (0x0004f9a4) listscroll_cale_week_pane_t1_ParamLimits

0x5523,	// (0x00053947) listscroll_cale_day_pane_ParamLimits

0x1577,	// (0x0004f99b) popup_toolbar_window_cp02

0x19bd,	// (0x0004fde1) listscroll_cale_day_pane_t1_ParamLimits

0x7e9f,	// (0x000562c3) main_cale_month_pane_ParamLimits

0x8001,	// (0x00056425) popup_toolbar_window_cp03_ParamLimits

0x8001,	// (0x00056425) popup_toolbar_window_cp03

0x78b3,	// (0x00055cd7) main_image_pane_g2_ParamLimits

0x78b3,	// (0x00055cd7) main_image_pane_g2

0x78bf,	// (0x00055ce3) main_image_pane_g3_ParamLimits

0x78bf,	// (0x00055ce3) main_image_pane_g3

0x0002,

0xf461,	// (0x0005d885) main_image_pane_g_ParamLimits

0xf461,	// (0x0005d885) main_image_pane_g

0x21fe,	// (0x00050622) main_image_pane_t1_ParamLimits

0x78cb,	// (0x00055cef) main_image_pane_t2_ParamLimits

0x78cb,	// (0x00055cef) main_image_pane_t2

0x78dd,	// (0x00055d01) main_image_pane_t3_ParamLimits

0x78dd,	// (0x00055d01) main_image_pane_t3

0x78ef,	// (0x00055d13) main_image_pane_t4_ParamLimits

0x78ef,	// (0x00055d13) main_image_pane_t4

0x0003,

0xf468,	// (0x0005d88c) main_image_pane_t_ParamLimits

0xf468,	// (0x0005d88c) main_image_pane_t

0x7901,	// (0x00055d25) popup_image_details_window_cp01

0x790b,	// (0x00055d2f) popup_toobar_trans_pane_cp01_ParamLimits

0x790b,	// (0x00055d2f) popup_toobar_trans_pane_cp01

0x7f43,	// (0x00056367) popup_image_details_window_ParamLimits

0x7f43,	// (0x00056367) popup_image_details_window

0x7f51,	// (0x00056375) popup_image_focus_window

0x50bb,	// (0x000534df) camera2_autofocus_pane_ParamLimits

0x50bb,	// (0x000534df) camera2_autofocus_pane

0xe7c9,	// (0x0005cbed) bg_popup_sub_pane_cp06

0x3833,	// (0x00051c57) popup_image_focus_window_g1

0x383b,	// (0x00051c5f) popup_image_focus_window_g2

0x3843,	// (0x00051c67) popup_image_focus_window_g3

0x384b,	// (0x00051c6f) popup_image_focus_window_g4

0x0003,

0xf670,	// (0x0005da94) popup_image_focus_window_g

0x3853,	// (0x00051c77) popup_image_focus_window_t1

0x3861,	// (0x00051c85) popup_image_focus_window_t2

0x3871,	// (0x00051c95) popup_image_focus_window_t3

0x0002,

0xf679,	// (0x0005da9d) popup_image_focus_window_t

0xeeff,	// (0x0005d323) camera2_autofocus_pane_g1

0xe818,	// (0x0005cc3c) bg_tb_trans_pane_cp01

0x387f,	// (0x00051ca3) popup_image_details_window_g1

0x3892,	// (0x00051cb6) popup_image_details_window_g2

0x0002,

0xf68b,	// (0x0005daaf) popup_image_details_window_g

0x38bb,	// (0x00051cdf) popup_image_details_window_t1

0x38cd,	// (0x00051cf1) popup_image_details_window_t2

0x38e6,	// (0x00051d0a) popup_image_details_window_t3

0x38fa,	// (0x00051d1e) popup_image_details_window_t4

0x3915,	// (0x00051d39) popup_image_details_window_t5

0x0004,

0xf692,	// (0x0005dab6) popup_image_details_window_t

0xef5d,	// (0x0005d381) bg_calc_paper_pane_ParamLimits

0x50d5,	// (0x000534f9) grid_highlight_pane_cp013

0x52c9,	// (0x000536ed) list_calc_pane_ParamLimits

0x52db,	// (0x000536ff) scroll_pane_cp024

0xef71,	// (0x0005d395) bg_calc_display_pane_ParamLimits

0x52e3,	// (0x00053707) calc_display_pane_t1_ParamLimits

0x52f8,	// (0x0005371c) calc_display_pane_t2_ParamLimits

0x530d,	// (0x00053731) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0005d516) calc_display_pane_t_ParamLimits

0x53dd,	// (0x00053801) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x0005d533) cell_calc_pane_g

0x53e6,	// (0x0005380a) cell_calc_pane_t1

0xefc6,	// (0x0005d3ea) grid_highlight_pane_cp02_ParamLimits

0xefdc,	// (0x0005d400) toolbar_button_pane_cp01_ParamLimits

0xefdc,	// (0x0005d400) toolbar_button_pane_cp01

0x2243,	// (0x00050667) temp_image_control_pane_ParamLimits

0x2243,	// (0x00050667) temp_image_control_pane

0x7eb1,	// (0x000562d5) main_mp3_pane

0x392f,	// (0x00051d53) temp_image_control_pane_g1_ParamLimits

0x392f,	// (0x00051d53) temp_image_control_pane_g1

0x393d,	// (0x00051d61) temp_image_control_pane_g2_ParamLimits

0x393d,	// (0x00051d61) temp_image_control_pane_g2

0x394f,	// (0x00051d73) temp_image_control_pane_g3_ParamLimits

0x394f,	// (0x00051d73) temp_image_control_pane_g3

0x83a3,	// (0x000567c7) temp_image_control_pane_g4_ParamLimits

0x83a3,	// (0x000567c7) temp_image_control_pane_g4

0x0003,

0xf69d,	// (0x0005dac1) temp_image_control_pane_g_ParamLimits

0xf69d,	// (0x0005dac1) temp_image_control_pane_g

0x392f,	// (0x00051d53) main_mp3_pane_g1

0x83b4,	// (0x000567d8) main_mp3_pane_g2

0x0007,

0xf6a6,	// (0x0005daca) main_mp3_pane_g

0x3984,	// (0x00051da8) main_mp3_pane_t1

0xef0d,	// (0x0005d331) main_camera_pane_g8_ParamLimits

0xef0d,	// (0x0005d331) main_camera_pane_g8

0x5cdc,	// (0x00054100) main_video_pane_g7_ParamLimits

0x5cdc,	// (0x00054100) main_video_pane_g7

0x820c,	// (0x00056630) main_camera2_pane_t7_ParamLimits

0x820c,	// (0x00056630) main_camera2_pane_t7

0x174c,	// (0x0004fb70) scroll_pane_cp025_ParamLimits

0x174c,	// (0x0004fb70) scroll_pane_cp025

0x1760,	// (0x0004fb84) scroll_pane_cp026_ParamLimits

0x1760,	// (0x0004fb84) scroll_pane_cp026

0x176f,	// (0x0004fb93) wml_content_pane_ParamLimits

0x50d5,	// (0x000534f9) main_touch_calib_pane

0x8458,	// (0x0005687c) main_touch_calib_pane_g1

0x8464,	// (0x00056888) main_touch_calib_pane_g2

0x8470,	// (0x00056894) main_touch_calib_pane_g3

0x847c,	// (0x000568a0) main_touch_calib_pane_g4

0x0003,

0xf6c4,	// (0x0005dae8) main_touch_calib_pane_g

0x8488,	// (0x000568ac) main_touch_calib_pane_t1

0x849f,	// (0x000568c3) main_touch_calib_pane_t2

0x0004,

0xf6cd,	// (0x0005daf1) main_touch_calib_pane_t

0x1ed7,	// (0x000502fb) mup_progress_pane_cp02

0x1ef6,	// (0x0005031a) navi_pane_g1

0x1f58,	// (0x0005037c) navi_pane_mp_t3

0x7eb1,	// (0x000562d5) main_mp3_pane_ParamLimits

0x8042,	// (0x00056466) navi_pane_ParamLimits

0x392f,	// (0x00051d53) main_mp3_pane_g1_ParamLimits

0x83b4,	// (0x000567d8) main_mp3_pane_g2_ParamLimits

0x83c0,	// (0x000567e4) main_mp3_pane_g3_ParamLimits

0x83c0,	// (0x000567e4) main_mp3_pane_g3

0x83cc,	// (0x000567f0) main_mp3_pane_g4_ParamLimits

0x83cc,	// (0x000567f0) main_mp3_pane_g4

0xeeff,	// (0x0005d323) main_mp3_pane_g5_ParamLimits

0xeeff,	// (0x0005d323) main_mp3_pane_g5

0x395f,	// (0x00051d83) main_mp3_pane_g6_ParamLimits

0x395f,	// (0x00051d83) main_mp3_pane_g6

0x396c,	// (0x00051d90) main_mp3_pane_g7_ParamLimits

0x396c,	// (0x00051d90) main_mp3_pane_g7

0x3978,	// (0x00051d9c) main_mp3_pane_g8_ParamLimits

0x3978,	// (0x00051d9c) main_mp3_pane_g8

0xf6a6,	// (0x0005daca) main_mp3_pane_g_ParamLimits

0x83d8,	// (0x000567fc) main_mp3_pane_t2

0x83e8,	// (0x0005680c) main_mp3_pane_t3

0x3992,	// (0x00051db6) main_mp3_pane_t4

0x39a0,	// (0x00051dc4) main_mp3_pane_t5

0x0005,

0xf6b7,	// (0x0005dadb) main_mp3_pane_t

0x39ae,	// (0x00051dd2) mup_progress_pane_cp01

0x4d1c,	// (0x00053140) aid_zoom_text_secondary2

0x37b4,	// (0x00051bd8) list_cale_ev2_pane

0x37bc,	// (0x00051be0) scroll_pane_cp023_ParamLimits

0x84fa,	// (0x0005691e) field_cale_ev2_pane_ParamLimits

0x84fa,	// (0x0005691e) field_cale_ev2_pane

0x8515,	// (0x00056939) field_cale_ev2_pane_g1_ParamLimits

0x8515,	// (0x00056939) field_cale_ev2_pane_g1

0x8521,	// (0x00056945) field_cale_ev2_pane_g2_ParamLimits

0x8521,	// (0x00056945) field_cale_ev2_pane_g2

0x8539,	// (0x0005695d) field_cale_ev2_pane_g3_ParamLimits

0x8539,	// (0x0005695d) field_cale_ev2_pane_g3

0x0003,

0xf6d8,	// (0x0005dafc) field_cale_ev2_pane_g_ParamLimits

0xf6d8,	// (0x0005dafc) field_cale_ev2_pane_g

0x8551,	// (0x00056975) field_cale_ev2_pane_t1_ParamLimits

0x8551,	// (0x00056975) field_cale_ev2_pane_t1

0x8568,	// (0x0005698c) field_cale_ev2_pane_t2_ParamLimits

0x8568,	// (0x0005698c) field_cale_ev2_pane_t2

0x0001,

0xf6e1,	// (0x0005db05) field_cale_ev2_pane_t_ParamLimits

0xf6e1,	// (0x0005db05) field_cale_ev2_pane_t

0x7792,	// (0x00055bb6) main_postcard_pane_g5_ParamLimits

0x7792,	// (0x00055bb6) main_postcard_pane_g5

0x77a0,	// (0x00055bc4) main_postcard_pane_g6_ParamLimits

0x77a0,	// (0x00055bc4) main_postcard_pane_g6

0xeef1,	// (0x0005d315) camera2_autofocus_pane_cp_ParamLimits

0xeef1,	// (0x0005d315) camera2_autofocus_pane_cp

0x7eb1,	// (0x000562d5) main_mup3_pane

0x85c0,	// (0x000569e4) main_mup3_pane_g1_ParamLimits

0x85c0,	// (0x000569e4) main_mup3_pane_g1

0x85e1,	// (0x00056a05) main_mup3_pane_g2_ParamLimits

0x85e1,	// (0x00056a05) main_mup3_pane_g2

0x8655,	// (0x00056a79) main_mup3_pane_g3_ParamLimits

0x8655,	// (0x00056a79) main_mup3_pane_g3

0x86ba,	// (0x00056ade) main_mup3_pane_g4_ParamLimits

0x86ba,	// (0x00056ade) main_mup3_pane_g4

0x871f,	// (0x00056b43) main_mup3_pane_g5_ParamLimits

0x871f,	// (0x00056b43) main_mup3_pane_g5

0x8784,	// (0x00056ba8) main_mup3_pane_g6_ParamLimits

0x8784,	// (0x00056ba8) main_mup3_pane_g6

0xef0d,	// (0x0005d331) main_mup3_pane_g7_ParamLimits

0xef0d,	// (0x0005d331) main_mup3_pane_g7

0x0007,

0xf6f1,	// (0x0005db15) main_mup3_pane_g_ParamLimits

0xf6f1,	// (0x0005db15) main_mup3_pane_g

0x87fe,	// (0x00056c22) main_mup3_pane_t1_ParamLimits

0x87fe,	// (0x00056c22) main_mup3_pane_t1

0x8869,	// (0x00056c8d) main_mup3_pane_t2_ParamLimits

0x8869,	// (0x00056c8d) main_mup3_pane_t2

0x8932,	// (0x00056d56) main_mup3_pane_t4_ParamLimits

0x8932,	// (0x00056d56) main_mup3_pane_t4

0x8986,	// (0x00056daa) main_mup3_pane_t5_ParamLimits

0x8986,	// (0x00056daa) main_mup3_pane_t5

0x8a3e,	// (0x00056e62) main_mup3_pane_t6_ParamLimits

0x8a3e,	// (0x00056e62) main_mup3_pane_t6

0x0005,

0xf702,	// (0x0005db26) main_mup3_pane_t_ParamLimits

0xf702,	// (0x0005db26) main_mup3_pane_t

0x8ae8,	// (0x00056f0c) mup3_progress_pane_ParamLimits

0x8ae8,	// (0x00056f0c) mup3_progress_pane

0x8b66,	// (0x00056f8a) popup_mup3_control_window_ParamLimits

0x8b66,	// (0x00056f8a) popup_mup3_control_window

0x39b6,	// (0x00051dda) popup_mup3_text_window

0x8b83,	// (0x00056fa7) mup3_progress_pane_t1

0x8ba1,	// (0x00056fc5) mup3_progress_pane_t2

0x39be,	// (0x00051de2) mup3_progress_pane_t3

0x0002,

0xf70f,	// (0x0005db33) mup3_progress_pane_t

0x39db,	// (0x00051dff) mup_progress_pane_cp03

0xe7c9,	// (0x0005cbed) bg_tb_trans_pane_cp04

0x8bbf,	// (0x00056fe3) mup3_volume_pane

0x8bc7,	// (0x00056feb) popup_mup3_control_window_g1

0xd5c7,	// (0x0005b9eb) mup3_volume_pane_g1

0xd5d0,	// (0x0005b9f4) mup3_volume_pane_g2

0xd5d9,	// (0x0005b9fd) mup3_volume_pane_g3

0x0002,

0xf716,	// (0x0005db3a) mup3_volume_pane_g

0xe7c9,	// (0x0005cbed) bg_tb_trans_pane_cp03

0x39eb,	// (0x00051e0f) popup_mup3_text_window_g1

0x39f3,	// (0x00051e17) popup_mup3_text_window_t1

0xefb9,	// (0x0005d3dd) list_calc_item_pane_g1_ParamLimits

0x34a8,	// (0x000518cc) mup_volume_pane_cp_g1

0x84b8,	// (0x000568dc) main_touch_calib_pane_t3

0x84ce,	// (0x000568f2) main_touch_calib_pane_t4

0x84e4,	// (0x00056908) main_touch_calib_pane_t5

0x4e04,	// (0x00053228) aid_cell_size_toolbar2

0x4e0c,	// (0x00053230) aid_popup3_width_pane

0x4d14,	// (0x00053138) aid_zoom_text_msg_primary

0x5bdc,	// (0x00054000) vorec_t7

0xef7d,	// (0x0005d3a1) bg_calc_paper_pane_g1_ParamLimits

0xef95,	// (0x0005d3b9) bg_calc_paper_pane_g2_ParamLimits

0xef89,	// (0x0005d3ad) bg_calc_paper_pane_g3_ParamLimits

0xefa1,	// (0x0005d3c5) bg_calc_paper_pane_g4_ParamLimits

0xefad,	// (0x0005d3d1) bg_calc_paper_pane_g5_ParamLimits

0x534e,	// (0x00053772) bg_calc_paper_pane_g6_ParamLimits

0x535f,	// (0x00053783) bg_calc_paper_pane_g7_ParamLimits

0x5370,	// (0x00053794) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0005d51d) bg_calc_paper_pane_g_ParamLimits

0x5381,	// (0x000537a5) calc_bg_paper_pane_g9_ParamLimits

0xeef1,	// (0x0005d315) image_qvga_pane_ParamLimits

0xeef1,	// (0x0005d315) image_qvga_pane

0xee84,	// (0x0005d2a8) bg_popup_sub_pane_cp04_ParamLimits

0x217a,	// (0x0005059e) popup_mup_playback_window_g1_ParamLimits

0x2186,	// (0x000505aa) popup_mup_playback_window_t1_ParamLimits

0x219b,	// (0x000505bf) popup_mup_playback_window_t2_ParamLimits

0xf45c,	// (0x0005d880) popup_mup_playback_window_t_ParamLimits

0xeeff,	// (0x0005d323) main_mup2_pane_g3_ParamLimits

0xeeff,	// (0x0005d323) main_mup2_pane_g3

0x5eb5,	// (0x000542d9) popup_toolbar_window_cp04

0x25b2,	// (0x000509d6) popup_call2_audio_second_window_g3_ParamLimits

0x25b2,	// (0x000509d6) popup_call2_audio_second_window_g3

0x29bc,	// (0x00050de0) popup_call2_audio_first_window_g4_ParamLimits

0x29bc,	// (0x00050de0) popup_call2_audio_first_window_g4

0x2fe3,	// (0x00051407) popup_call2_audio_in_window_g4_ParamLimits

0x2fe3,	// (0x00051407) popup_call2_audio_in_window_g4

0x78a6,	// (0x00055cca) aid_area_sk_bg_cut_ParamLimits

0x78a6,	// (0x00055cca) aid_area_sk_bg_cut

0x21b0,	// (0x000505d4) aid_area_sk_bg_cut_2_ParamLimits

0x21b0,	// (0x000505d4) aid_area_sk_bg_cut_2

0xe7c9,	// (0x0005cbed) aid_placing_details_win

0xe7c9,	// (0x0005cbed) aid_placing_details_win_2

0xeeff,	// (0x0005d323) camera2_autofocus_pane_g1_ParamLimits

0x5061,	// (0x00053485) popup_fixed_preview_cale_window_ParamLimits

0x5061,	// (0x00053485) popup_fixed_preview_cale_window

0x1fb1,	// (0x000503d5) navi_slider_pane_g3

0x1fa8,	// (0x000503cc) navi_slider_pane_g4

0x1f9f,	// (0x000503c3) navi_slider_pane_g5

0x1fb1,	// (0x000503d5) navi_slider_pane_g6

0x7320,	// (0x00055744) navi_slider_pane_g7

0x20b1,	// (0x000504d5) mup_scale_pane_g3

0x20ba,	// (0x000504de) mup_scale_pane_g4

0x20c3,	// (0x000504e7) mup_scale_pane_g5

0x753d,	// (0x00055961) mup_scale_pane_g6

0x7546,	// (0x0005596a) mup_scale_pane_g7

0x3e9a,	// (0x000522be) cams2_slider_pane_g3

0x3e9a,	// (0x000522be) cams2_slider_pane_g4

0x3e9a,	// (0x000522be) cams2_slider_pane_g5

0x3e9a,	// (0x000522be) cams2_slider_pane_g6

0x3e9a,	// (0x000522be) cams2_slider_pane_g7

0x1640,	// (0x0004fa64) camera2_autofocus_pane_cp_g1

0x32f7,	// (0x0005171b) bg_popup_preview_window_pane_cp02_ParamLimits

0x32f7,	// (0x0005171b) bg_popup_preview_window_pane_cp02

0x3a01,	// (0x00051e25) list_fp_cale_pane_ParamLimits

0x3a01,	// (0x00051e25) list_fp_cale_pane

0x3a0d,	// (0x00051e31) popup_fixed_preview_cale_window_t1_ParamLimits

0x3a0d,	// (0x00051e31) popup_fixed_preview_cale_window_t1

0x8bd0,	// (0x00056ff4) popup_fixed_preview_cale_window_t2_ParamLimits

0x8bd0,	// (0x00056ff4) popup_fixed_preview_cale_window_t2

0x8be5,	// (0x00057009) popup_fixed_preview_cale_window_t3_ParamLimits

0x8be5,	// (0x00057009) popup_fixed_preview_cale_window_t3

0x0002,

0xf71d,	// (0x0005db41) popup_fixed_preview_cale_window_t_ParamLimits

0xf71d,	// (0x0005db41) popup_fixed_preview_cale_window_t

0x8bfa,	// (0x0005701e) list_single_fp_cale_pane_ParamLimits

0x8bfa,	// (0x0005701e) list_single_fp_cale_pane

0x3a2b,	// (0x00051e4f) list_single_fp_cale_pane_g1_ParamLimits

0x3a2b,	// (0x00051e4f) list_single_fp_cale_pane_g1

0x3a37,	// (0x00051e5b) list_single_fp_cale_pane_g2_ParamLimits

0x3a37,	// (0x00051e5b) list_single_fp_cale_pane_g2

0x0002,

0xf724,	// (0x0005db48) list_single_fp_cale_pane_g_ParamLimits

0xf724,	// (0x0005db48) list_single_fp_cale_pane_g

0x3a50,	// (0x00051e74) list_single_fp_cale_pane_t1_ParamLimits

0x3a50,	// (0x00051e74) list_single_fp_cale_pane_t1

0x3a62,	// (0x00051e86) list_single_fp_cale_pane_t2_ParamLimits

0x3a62,	// (0x00051e86) list_single_fp_cale_pane_t2

0x0001,

0xf72b,	// (0x0005db4f) list_single_fp_cale_pane_t_ParamLimits

0xf72b,	// (0x0005db4f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x50d5,	// (0x000534f9) main_dialer_pane

0xe7c9,	// (0x0005cbed) aid_cell_size_keypad

0xe7c9,	// (0x0005cbed) dialer_ne_pane

0xe7c9,	// (0x0005cbed) grid_dialer_command_1_pane

0xe7c9,	// (0x0005cbed) grid_dialer_command_2_pane

0xe7c9,	// (0x0005cbed) grid_dialer_keypad_pane

0x2330,	// (0x00050754) bg_popup_call_pane_cp06_ParamLimits

0x2330,	// (0x00050754) bg_popup_call_pane_cp06

0x2330,	// (0x00050754) dialer_ne_clear_pane_ParamLimits

0x2330,	// (0x00050754) dialer_ne_clear_pane

0x1640,	// (0x0004fa64) dialer_ne_pane_g1

0x1c43,	// (0x00050067) dialer_ne_pane_t1_ParamLimits

0x1c43,	// (0x00050067) dialer_ne_pane_t1

0x3cbe,	// (0x000520e2) dialer_ne_pane_t2_ParamLimits

0x3cbe,	// (0x000520e2) dialer_ne_pane_t2

0x8c0a,	// (0x0005702e) dialer_ne_pane_t3_ParamLimits

0x8c0a,	// (0x0005702e) dialer_ne_pane_t3

0x0002,

0xf730,	// (0x0005db54) dialer_ne_pane_t_ParamLimits

0xf730,	// (0x0005db54) dialer_ne_pane_t

0x8c0a,	// (0x0005702e) dialer_ne_pane_t3_copy1_ParamLimits

0x8c0a,	// (0x0005702e) dialer_ne_pane_t3_copy1

0x3a95,	// (0x00051eb9) cell_dialer_keypad_pane_ParamLimits

0x3a95,	// (0x00051eb9) cell_dialer_keypad_pane

0xe818,	// (0x0005cc3c) cell_dialer_command_1_pane_ParamLimits

0xe818,	// (0x0005cc3c) cell_dialer_command_1_pane

0x3aac,	// (0x00051ed0) cell_dialer_command_2_pane_ParamLimits

0x3aac,	// (0x00051ed0) cell_dialer_command_2_pane

0xe818,	// (0x0005cc3c) bg_button_pane_cp02_ParamLimits

0xe818,	// (0x0005cc3c) bg_button_pane_cp02

0xeeff,	// (0x0005d323) cell_dialer_keypad_pane_g1_ParamLimits

0xeeff,	// (0x0005d323) cell_dialer_keypad_pane_g1

0xe818,	// (0x0005cc3c) bg_button_pane_cp03_ParamLimits

0xe818,	// (0x0005cc3c) bg_button_pane_cp03

0xeeff,	// (0x0005d323) cell_dialer_command_1_pane_g1_ParamLimits

0xeeff,	// (0x0005d323) cell_dialer_command_1_pane_g1

0xe7c9,	// (0x0005cbed) bg_button_pane_cp04

0x1640,	// (0x0004fa64) cell_dialer_command_2_pane_g1

0xe7c9,	// (0x0005cbed) bg_button_pane_cp06

0x1640,	// (0x0004fa64) dialer_ne_clear_pane_g1

0x725b,	// (0x0005567f) navi_pane_g2

0x7289,	// (0x000556ad) navi_pane_g3

0x0002,

0xf35f,	// (0x0005d783) navi_pane_g

0x72b4,	// (0x000556d8) navi_pane_mv_g2

0x72db,	// (0x000556ff) navi_pane_mv_g5

0x72e3,	// (0x00055707) navi_pane_mv_t1

0xef71,	// (0x0005d395) main_clock2_pane

0xeef1,	// (0x0005d315) main_clock2_list_pane_ParamLimits

0xeef1,	// (0x0005d315) main_clock2_list_pane

0x8c7f,	// (0x000570a3) main_clock2_pane_t1_ParamLimits

0x8c7f,	// (0x000570a3) main_clock2_pane_t1

0x8cad,	// (0x000570d1) main_clock2_pane_t2_ParamLimits

0x8cad,	// (0x000570d1) main_clock2_pane_t2

0x0004,

0xf73c,	// (0x0005db60) main_clock2_pane_t_ParamLimits

0xf73c,	// (0x0005db60) main_clock2_pane_t

0x8d12,	// (0x00057136) popup_clock_analogue_window_cp03_ParamLimits

0x8d12,	// (0x00057136) popup_clock_analogue_window_cp03

0x8d30,	// (0x00057154) popup_clock_digital_window_cp02_ParamLimits

0x8d30,	// (0x00057154) popup_clock_digital_window_cp02

0x8da5,	// (0x000571c9) main_clock2_list_single_pane_ParamLimits

0x8da5,	// (0x000571c9) main_clock2_list_single_pane

0x160a,	// (0x0004fa2e) list_highlight_pane_cp05

0x3aed,	// (0x00051f11) main_clock2_list_single_pane_t1

0x5eb5,	// (0x000542d9) popup_toolbar_window_cp04_ParamLimits

0xef0d,	// (0x0005d331) camera2_autofocus_pane_g2_ParamLimits

0xef0d,	// (0x0005d331) camera2_autofocus_pane_g2

0xef0d,	// (0x0005d331) camera2_autofocus_pane_g3_ParamLimits

0xef0d,	// (0x0005d331) camera2_autofocus_pane_g3

0xef0d,	// (0x0005d331) camera2_autofocus_pane_g4_ParamLimits

0xef0d,	// (0x0005d331) camera2_autofocus_pane_g4

0xef0d,	// (0x0005d331) camera2_autofocus_pane_g5_ParamLimits

0xef0d,	// (0x0005d331) camera2_autofocus_pane_g5

0x0004,

0xf680,	// (0x0005daa4) camera2_autofocus_pane_g_ParamLimits

0xf680,	// (0x0005daa4) camera2_autofocus_pane_g

0x857d,	// (0x000569a1) camera2_autofocus_pane_cp_g2

0x8585,	// (0x000569a9) camera2_autofocus_pane_cp_g3

0x858d,	// (0x000569b1) camera2_autofocus_pane_cp_g4

0x8595,	// (0x000569b9) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e6,	// (0x0005db0a) camera2_autofocus_pane_cp_g

0xe7c9,	// (0x0005cbed) popup_dialer_spcha_window

0xe7c9,	// (0x0005cbed) bg_popup_sub_pane_cp07

0xe7c9,	// (0x0005cbed) list_spcha_pane

0x3afb,	// (0x00051f1f) list_single_spcha_pane_ParamLimits

0x3afb,	// (0x00051f1f) list_single_spcha_pane

0xe7c9,	// (0x0005cbed) list_highlight_pane_cp06

0x1b95,	// (0x0004ffb9) list_single_spcha_pane_t1

0x2d8d,	// (0x000511b1) popup_call2_audio_out_window_g4_ParamLimits

0x2d8d,	// (0x000511b1) popup_call2_audio_out_window_g4

0x50d5,	// (0x000534f9) main_imed2_pane

0x7f5b,	// (0x0005637f) popup_imed_adjust2_window

0x7f6e,	// (0x00056392) popup_imed_trans_window_ParamLimits

0x7f6e,	// (0x00056392) popup_imed_trans_window

0x357d,	// (0x000519a1) popup_blid_sat_info2_window_t1

0x358b,	// (0x000519af) popup_blid_sat_info2_window_t2

0x000a,

0xf615,	// (0x0005da39) popup_blid_sat_info2_window_t

0x8e5c,	// (0x00057280) aid_size_cell_colour_35

0x8e76,	// (0x0005729a) aid_size_cell_colour_112

0x8e8d,	// (0x000572b1) aid_size_cell_effect

0xe818,	// (0x0005cc3c) bg_tb_trans_pane_cp02

0x311d,	// (0x00051541) heading_imed_pane

0x8ea7,	// (0x000572cb) listscroll_imed_pane

0x3b0d,	// (0x00051f31) heading_imed_pane_g1

0x3b15,	// (0x00051f39) heading_imed_pane_t1

0x3b23,	// (0x00051f47) grid_imed_colour_35_pane_ParamLimits

0x3b23,	// (0x00051f47) grid_imed_colour_35_pane

0x8eb3,	// (0x000572d7) grid_imed_effect_pane

0x3b3f,	// (0x00051f63) list_imed_aspect_pane

0x8ec3,	// (0x000572e7) scroll_pane_cp027_ParamLimits

0x8ec3,	// (0x000572e7) scroll_pane_cp027

0x8ecf,	// (0x000572f3) cell_imed_effect_pane_ParamLimits

0x8ecf,	// (0x000572f3) cell_imed_effect_pane

0x3b47,	// (0x00051f6b) cell_imed_colour_pane_ParamLimits

0x3b47,	// (0x00051f6b) cell_imed_colour_pane

0x3b91,	// (0x00051fb5) cell_imed_colour_pane_g1_ParamLimits

0x3b91,	// (0x00051fb5) cell_imed_colour_pane_g1

0x3ba2,	// (0x00051fc6) hgihlgiht_grid_pane_cp016_ParamLimits

0x3ba2,	// (0x00051fc6) hgihlgiht_grid_pane_cp016

0x8eeb,	// (0x0005730f) cell_imed_effect_pane_g1

0x8ef3,	// (0x00057317) grid_highlight_pane_cp017

0x3bb3,	// (0x00051fd7) list_imed_single_pane_ParamLimits

0x3bb3,	// (0x00051fd7) list_imed_single_pane

0xe7c9,	// (0x0005cbed) list_highlight_pane_cp07

0x3bc7,	// (0x00051feb) list_imed_aspect_pane_comp1_t1

0x314b,	// (0x0005156f) bg_tb_trans_pane_cp05

0x3be9,	// (0x0005200d) popup_imed_adjust2_window_g1

0x3c10,	// (0x00052034) popup_imed_adjust2_window_t1

0x3c28,	// (0x0005204c) slider_imed_adjust_pane

0x3c3c,	// (0x00052060) slider_imed_adjust_pane_g1

0x3c4c,	// (0x00052070) slider_imed_adjust_pane_g2

0x3c5c,	// (0x00052080) slider_imed_adjust_pane_g3

0x3c6d,	// (0x00052091) slider_imed_adjust_pane_g4

0x0003,

0xf759,	// (0x0005db7d) slider_imed_adjust_pane_g

0x8efc,	// (0x00057320) aid_size_cell_clipart2

0x3c7e,	// (0x000520a2) grid_imed_clipart_pane

0x3c88,	// (0x000520ac) scroll_pane_cp031

0x8f08,	// (0x0005732c) cell_imed_clipart_pane_ParamLimits

0x8f08,	// (0x0005732c) cell_imed_clipart_pane

0x8f26,	// (0x0005734a) cell_imed_clipart_pane_g1

0xe7c9,	// (0x0005cbed) grid_highlight_pane_cp014

0x8c61,	// (0x00057085) main_clock2_pane_g1_ParamLimits

0x8c61,	// (0x00057085) main_clock2_pane_g1

0x8d4c,	// (0x00057170) aid_call2_pane_cp10

0x8d5e,	// (0x00057182) aid_call_pane_cp10

0x1ecb,	// (0x000502ef) popup_clock_analogue_window_cp10_g1

0x1ecb,	// (0x000502ef) popup_clock_analogue_window_cp10_g2

0x8d70,	// (0x00057194) popup_clock_analogue_window_cp10_g3

0x8d70,	// (0x00057194) popup_clock_analogue_window_cp10_g4

0x1ecb,	// (0x000502ef) popup_clock_analogue_window_cp10_g5

0x0004,

0xf747,	// (0x0005db6b) popup_clock_analogue_window_cp10_g

0x8d86,	// (0x000571aa) popup_clock_analogue_window_cp10_t1

0x8db7,	// (0x000571db) clock_digital_number_pane_cp10_ParamLimits

0x8db7,	// (0x000571db) clock_digital_number_pane_cp10

0x8dd1,	// (0x000571f5) clock_digital_number_pane_cp11_ParamLimits

0x8dd1,	// (0x000571f5) clock_digital_number_pane_cp11

0x8deb,	// (0x0005720f) clock_digital_number_pane_cp12_ParamLimits

0x8deb,	// (0x0005720f) clock_digital_number_pane_cp12

0x8e05,	// (0x00057229) clock_digital_number_pane_cp13_ParamLimits

0x8e05,	// (0x00057229) clock_digital_number_pane_cp13

0x8e21,	// (0x00057245) clock_digital_separator_pane_cp10_ParamLimits

0x8e21,	// (0x00057245) clock_digital_separator_pane_cp10

0x8e3b,	// (0x0005725f) popup_clock_digital_window_cp02_t1_ParamLimits

0x8e3b,	// (0x0005725f) popup_clock_digital_window_cp02_t1

0xee7c,	// (0x0005d2a0) clock_digital_number_pane_cp10_g1

0xee7c,	// (0x0005d2a0) clock_digital_number_pane_cp10_g2

0x0001,

0xf762,	// (0x0005db86) clock_digital_number_pane_cp10_g

0xee7c,	// (0x0005d2a0) clock_digital_separator_pane_cp10_g1

0xee7c,	// (0x0005d2a0) clock_digital_separator_pane_g2_cp10

0x1f66,	// (0x0005038a) navi_pane_vded_g4

0x1f6f,	// (0x00050393) navi_pane_vded_g5

0x1f78,	// (0x0005039c) navi_pane_vded_t1

0x50d5,	// (0x000534f9) main_vded_pane

0x8f2f,	// (0x00057353) main_vded_pane_g1

0x8f3b,	// (0x0005735f) main_vded_pane_g2

0x8f45,	// (0x00057369) main_vded_pane_g3

0x0002,

0xf767,	// (0x0005db8b) main_vded_pane_g

0x8f4f,	// (0x00057373) main_vded_pane_t1

0x8f5d,	// (0x00057381) main_vded_pane_t2

0x0001,

0xf76e,	// (0x0005db92) main_vded_pane_t

0x8f6b,	// (0x0005738f) vded_slider_pane

0x8f75,	// (0x00057399) vded_video_pane

0x3c90,	// (0x000520b4) vded_video_pane_g1

0x8f81,	// (0x000573a5) vded_video_pane_g2

0x1640,	// (0x0004fa64) vded_video_pane_g3

0x0002,

0xf773,	// (0x0005db97) vded_video_pane_g

0x3c9a,	// (0x000520be) vded_slider_pane_g1

0x34a8,	// (0x000518cc) vded_slider_pane_g2

0x3ca3,	// (0x000520c7) vded_slider_pane_g3

0x3cac,	// (0x000520d0) vded_slider_pane_g4

0x3cb5,	// (0x000520d9) vded_slider_pane_g5

0x0004,

0xf77a,	// (0x0005db9e) vded_slider_pane_g

0x8b5a,	// (0x00056f7e) mup3_rocker_pane_ParamLimits

0x8b5a,	// (0x00056f7e) mup3_rocker_pane

0x8f8a,	// (0x000573ae) mup3_control_keys_pane_g1

0x8f92,	// (0x000573b6) mup3_control_keys_pane_g2

0x8f9a,	// (0x000573be) mup3_control_keys_pane_g3

0x8fa2,	// (0x000573c6) mup3_control_keys_pane_g4

0x0003,

0xf785,	// (0x0005dba9) mup3_control_keys_pane_g

0x5089,	// (0x000534ad) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5089,	// (0x000534ad) popup_toolbar2_fixed_window_cp01

0x8b76,	// (0x00056f9a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8b76,	// (0x00056f9a) popup_toolbar2_fixed_window_cp02

0x2724,	// (0x00050b48) popup_call2_audio_second_window_t4_ParamLimits

0x2724,	// (0x00050b48) popup_call2_audio_second_window_t4

0x2c52,	// (0x00051076) popup_call2_audio_first_window_t6_ParamLimits

0x2c52,	// (0x00051076) popup_call2_audio_first_window_t6

0x2e90,	// (0x000512b4) popup_call2_audio_out_window_t6_ParamLimits

0x2e90,	// (0x000512b4) popup_call2_audio_out_window_t6

0x50d5,	// (0x000534f9) main_vitu_pane

0xeef1,	// (0x0005d315) aid_size_cell_itu_ParamLimits

0xeef1,	// (0x0005d315) aid_size_cell_itu

0xeef1,	// (0x0005d315) bg_popup_window_pane_cp08_ParamLimits

0xeef1,	// (0x0005d315) bg_popup_window_pane_cp08

0xeef1,	// (0x0005d315) field_vitu_entry_pane_ParamLimits

0xeef1,	// (0x0005d315) field_vitu_entry_pane

0xeef1,	// (0x0005d315) grid_vitu_function_pane_ParamLimits

0xeef1,	// (0x0005d315) grid_vitu_function_pane

0xeef1,	// (0x0005d315) grid_vitu_itu_pane_ParamLimits

0xeef1,	// (0x0005d315) grid_vitu_itu_pane

0xeef1,	// (0x0005d315) cell_vitu_itu_pane_ParamLimits

0xeef1,	// (0x0005d315) cell_vitu_itu_pane

0xeef1,	// (0x0005d315) cell_vitu_function_pane_ParamLimits

0xeef1,	// (0x0005d315) cell_vitu_function_pane

0xe818,	// (0x0005cc3c) bg_popup_sub_pane_cp08_ParamLimits

0xe818,	// (0x0005cc3c) bg_popup_sub_pane_cp08

0x1612,	// (0x0004fa36) field_vitu_entry_pane_t1_ParamLimits

0x1612,	// (0x0004fa36) field_vitu_entry_pane_t1

0x3cbe,	// (0x000520e2) field_vitu_entry_pane_t2_ParamLimits

0x3cbe,	// (0x000520e2) field_vitu_entry_pane_t2

0x0001,

0xf78e,	// (0x0005dbb2) field_vitu_entry_pane_t_ParamLimits

0xf78e,	// (0x0005dbb2) field_vitu_entry_pane_t

0x2330,	// (0x00050754) bg_button_pane_cp05_ParamLimits

0x2330,	// (0x00050754) bg_button_pane_cp05

0x3cdb,	// (0x000520ff) cell_vitu_itu_pane_g1

0x3137,	// (0x0005155b) cell_vitu_itu_pane_t1_ParamLimits

0x3137,	// (0x0005155b) cell_vitu_itu_pane_t1

0x3137,	// (0x0005155b) cell_vitu_itu_pane_t2_ParamLimits

0x3137,	// (0x0005155b) cell_vitu_itu_pane_t2

0x0002,

0xf793,	// (0x0005dbb7) cell_vitu_itu_pane_t_ParamLimits

0xf793,	// (0x0005dbb7) cell_vitu_itu_pane_t

0xe7c9,	// (0x0005cbed) bg_button_pane_cp07

0x1640,	// (0x0004fa64) cell_vitu_function_pane_g1

0x51d2,	// (0x000535f6) main_calc_pane_g1

0x4e40,	// (0x00053264) aid_visual_content_pane

0x50d5,	// (0x000534f9) main_vradio_pane

0xef0d,	// (0x0005d331) main_vradio_pane_g1_ParamLimits

0xef0d,	// (0x0005d331) main_vradio_pane_g1

0xef0d,	// (0x0005d331) main_vradio_pane_g2_ParamLimits

0xef0d,	// (0x0005d331) main_vradio_pane_g2

0x0001,

0xf79a,	// (0x0005dbbe) main_vradio_pane_g_ParamLimits

0xf79a,	// (0x0005dbbe) main_vradio_pane_g

0x1c43,	// (0x00050067) main_vradio_pane_t1_ParamLimits

0x1c43,	// (0x00050067) main_vradio_pane_t1

0x1c43,	// (0x00050067) main_vradio_pane_t2_ParamLimits

0x1c43,	// (0x00050067) main_vradio_pane_t2

0x1c43,	// (0x00050067) main_vradio_pane_t3_ParamLimits

0x1c43,	// (0x00050067) main_vradio_pane_t3

0x0002,

0xf79f,	// (0x0005dbc3) main_vradio_pane_t_ParamLimits

0xf79f,	// (0x0005dbc3) main_vradio_pane_t

0xeef1,	// (0x0005d315) vradio_rocker_control_pane_ParamLimits

0xeef1,	// (0x0005d315) vradio_rocker_control_pane

0xeef1,	// (0x0005d315) vradio_station_info_pane_ParamLimits

0xeef1,	// (0x0005d315) vradio_station_info_pane

0xe818,	// (0x0005cc3c) vradio_frequency_info_pane_ParamLimits

0xe818,	// (0x0005cc3c) vradio_frequency_info_pane

0x1640,	// (0x0004fa64) vradio_station_info_pane_g1

0x3137,	// (0x0005155b) vradio_station_info_pane_t1_ParamLimits

0x3137,	// (0x0005155b) vradio_station_info_pane_t1

0x1c43,	// (0x00050067) vradio_station_info_pane_t2_ParamLimits

0x1c43,	// (0x00050067) vradio_station_info_pane_t2

0x0001,

0xf7a6,	// (0x0005dbca) vradio_station_info_pane_t_ParamLimits

0xf7a6,	// (0x0005dbca) vradio_station_info_pane_t

0xe7c9,	// (0x0005cbed) vradio_tuning_pane

0x8fb2,	// (0x000573d6) vradio_rocker_control_pane_g1

0x3cf7,	// (0x0005211b) vradio_rocker_control_pane_g2

0x8fba,	// (0x000573de) vradio_rocker_control_pane_g3

0x8fc2,	// (0x000573e6) vradio_rocker_control_pane_g4

0x8fcc,	// (0x000573f0) vradio_rocker_control_pane_g5

0x0004,

0xf7ab,	// (0x0005dbcf) vradio_rocker_control_pane_g

0x1640,	// (0x0004fa64) vradio_frequency_info_pane_g1

0x1612,	// (0x0004fa36) vradio_frequency_info_pane_t1_ParamLimits

0x1612,	// (0x0004fa36) vradio_frequency_info_pane_t1

0x8fd4,	// (0x000573f8) vradio_tuning_pane_g1

0x8fe1,	// (0x00057405) vradio_tuning_pane_t1

0x4e89,	// (0x000532ad) area_side_right_pane_ParamLimits

0x4e89,	// (0x000532ad) area_side_right_pane

0x32be,	// (0x000516e2) status_small_pane_g1

0x32c6,	// (0x000516ea) status_small_pane_g2

0x32cf,	// (0x000516f3) status_small_pane_g3

0x32d8,	// (0x000516fc) status_small_pane_g4

0x0003,

0xf577,	// (0x0005d99b) status_small_pane_g

0x32e1,	// (0x00051705) status_small_pane_t1

0x50d5,	// (0x000534f9) main_video3_pane

0x3cff,	// (0x00052123) cams_zoom_vslider_pane

0x3d07,	// (0x0005212b) image3_wide_pane_ParamLimits

0x3d07,	// (0x0005212b) image3_wide_pane

0x3d21,	// (0x00052145) image3_wide_small_pane

0x3d2d,	// (0x00052151) main_video3_pane_g1_ParamLimits

0x3d2d,	// (0x00052151) main_video3_pane_g1

0x3d49,	// (0x0005216d) main_video3_pane_g2_ParamLimits

0x3d49,	// (0x0005216d) main_video3_pane_g2

0x0001,

0xf7b6,	// (0x0005dbda) main_video3_pane_g_ParamLimits

0xf7b6,	// (0x0005dbda) main_video3_pane_g

0x3d65,	// (0x00052189) main_video3_pane_t1_ParamLimits

0x3d65,	// (0x00052189) main_video3_pane_t1

0x3d90,	// (0x000521b4) main_video3_pane_t2_ParamLimits

0x3d90,	// (0x000521b4) main_video3_pane_t2

0x3dbd,	// (0x000521e1) main_video3_pane_t3_ParamLimits

0x3dbd,	// (0x000521e1) main_video3_pane_t3

0x0002,

0xf7bb,	// (0x0005dbdf) main_video3_pane_t_ParamLimits

0xf7bb,	// (0x0005dbdf) main_video3_pane_t

0x3dea,	// (0x0005220e) cams_zoom_vslider_pane_g1

0x3df3,	// (0x00052217) cams_zoom_vslider_pane_g2

0x0001,

0xf7c2,	// (0x0005dbe6) cams_zoom_vslider_pane_g

0x3dfb,	// (0x0005221f) small_slider_vertical_pane

0x1640,	// (0x0004fa64) small_slider_vertical_pane_g1

0x1640,	// (0x0004fa64) small_slider_vertical_pane_g2

0x3e03,	// (0x00052227) small_slider_vertical_pane_g3

0x0002,

0xf7c7,	// (0x0005dbeb) small_slider_vertical_pane_g

0x50d5,	// (0x000534f9) main_hwr_training_pane

0x3e0c,	// (0x00052230) hwr_training_instruct_pane_ParamLimits

0x3e0c,	// (0x00052230) hwr_training_instruct_pane

0x8ff0,	// (0x00057414) hwr_training_navi_pane_ParamLimits

0x8ff0,	// (0x00057414) hwr_training_navi_pane

0x900a,	// (0x0005742e) hwr_training_write_pane_ParamLimits

0x900a,	// (0x0005742e) hwr_training_write_pane

0xe7c9,	// (0x0005cbed) bg_frame_shadow_pane

0x3e43,	// (0x00052267) hwr_training_write_pane_g1

0x3e4b,	// (0x0005226f) hwr_training_write_pane_g2

0x3e53,	// (0x00052277) hwr_training_write_pane_g3

0x3e5b,	// (0x0005227f) hwr_training_write_pane_g4

0x3e63,	// (0x00052287) hwr_training_write_pane_g5

0x3e6b,	// (0x0005228f) hwr_training_write_pane_g6

0x3e73,	// (0x00052297) hwr_training_write_pane_g7

0x0006,

0xf7ce,	// (0x0005dbf2) hwr_training_write_pane_g

0x9042,	// (0x00057466) hwr_training_navi_pane_g1_ParamLimits

0x9042,	// (0x00057466) hwr_training_navi_pane_g1

0x9054,	// (0x00057478) hwr_training_navi_pane_g2_ParamLimits

0x9054,	// (0x00057478) hwr_training_navi_pane_g2

0x9066,	// (0x0005748a) hwr_training_navi_pane_g3_ParamLimits

0x9066,	// (0x0005748a) hwr_training_navi_pane_g3

0x9076,	// (0x0005749a) hwr_training_navi_pane_g4_ParamLimits

0x9076,	// (0x0005749a) hwr_training_navi_pane_g4

0x0004,

0xf7dd,	// (0x0005dc01) hwr_training_navi_pane_g_ParamLimits

0xf7dd,	// (0x0005dc01) hwr_training_navi_pane_g

0x9090,	// (0x000574b4) hwr_training_navi_pane_t1

0x909e,	// (0x000574c2) list_single_hwr_training_instruct_pane_ParamLimits

0x909e,	// (0x000574c2) list_single_hwr_training_instruct_pane

0x3e7b,	// (0x0005229f) list_single_hwr_training_instruct_pane_t1

0x3684,	// (0x00051aa8) bg_frame_shadow_pane_g1

0x3e8a,	// (0x000522ae) bg_frame_shadow_pane_g2

0x3e92,	// (0x000522b6) bg_frame_shadow_pane_g3

0x3ea4,	// (0x000522c8) bg_frame_shadow_pane_g4

0x3eac,	// (0x000522d0) bg_frame_shadow_pane_g5

0x3eb4,	// (0x000522d8) bg_frame_shadow_pane_g6

0x3ebc,	// (0x000522e0) bg_frame_shadow_pane_g7

0xf029,	// (0x0005d44d) bg_frame_shadow_pane_g8

0x0007,

0xf7e8,	// (0x0005dc0c) bg_frame_shadow_pane_g

0x50d5,	// (0x000534f9) main_video_tele_dialer_pane

0x90b7,	// (0x000574db) aid_size_cell_video_keypad_ParamLimits

0x90b7,	// (0x000574db) aid_size_cell_video_keypad

0x90c7,	// (0x000574eb) grid_video_dialer_keypad_pane_ParamLimits

0x90c7,	// (0x000574eb) grid_video_dialer_keypad_pane

0x90f9,	// (0x0005751d) video_down_pane_cp_ParamLimits

0x90f9,	// (0x0005751d) video_down_pane_cp

0x9123,	// (0x00057547) cell_video_dialer_keypad_pane_ParamLimits

0x9123,	// (0x00057547) cell_video_dialer_keypad_pane

0x3ec4,	// (0x000522e8) bg_button_pane_cp08_ParamLimits

0x3ec4,	// (0x000522e8) bg_button_pane_cp08

0x913a,	// (0x0005755e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x913a,	// (0x0005755e) cell_video_dialer_keypad_pane_g1

0x8b4e,	// (0x00056f72) mup3_rocker2_pane_ParamLimits

0x8b4e,	// (0x00056f72) mup3_rocker2_pane

0x1640,	// (0x0004fa64) mup3_rocker2_pane_g1

0x7ebf,	// (0x000562e3) main_dialer2_pane

0x50d5,	// (0x000534f9) main_mp4_pane

0x9193,	// (0x000575b7) main_mp4_pane_g1_ParamLimits

0x9193,	// (0x000575b7) main_mp4_pane_g1

0x91a1,	// (0x000575c5) main_mp4_pane_g2_ParamLimits

0x91a1,	// (0x000575c5) main_mp4_pane_g2

0x91af,	// (0x000575d3) main_mp4_pane_g3_ParamLimits

0x91af,	// (0x000575d3) main_mp4_pane_g3

0x9202,	// (0x00057626) main_mp4_pane_g4_ParamLimits

0x9202,	// (0x00057626) main_mp4_pane_g4

0x9230,	// (0x00057654) main_mp4_pane_g5_ParamLimits

0x9230,	// (0x00057654) main_mp4_pane_g5

0x0007,

0xf808,	// (0x0005dc2c) main_mp4_pane_g_ParamLimits

0xf808,	// (0x0005dc2c) main_mp4_pane_g

0x92a4,	// (0x000576c8) main_mp4_pane_t1_ParamLimits

0x92a4,	// (0x000576c8) main_mp4_pane_t1

0x9300,	// (0x00057724) main_mp4_pane_t2_ParamLimits

0x9300,	// (0x00057724) main_mp4_pane_t2

0xd5e2,	// (0x0005ba06) main_mp4_pane_t3_ParamLimits

0xd5e2,	// (0x0005ba06) main_mp4_pane_t3

0x9352,	// (0x00057776) main_mp4_pane_t4_ParamLimits

0x9352,	// (0x00057776) main_mp4_pane_t4

0x0003,

0xf819,	// (0x0005dc3d) main_mp4_pane_t_ParamLimits

0xf819,	// (0x0005dc3d) main_mp4_pane_t

0x9392,	// (0x000577b6) mp4_progress_pane_ParamLimits

0x9392,	// (0x000577b6) mp4_progress_pane

0x93dc,	// (0x00057800) mp4_rocker_pane_ParamLimits

0x93dc,	// (0x00057800) mp4_rocker_pane

0xd610,	// (0x0005ba34) mp4_progress_pane_t1

0xd629,	// (0x0005ba4d) mp4_progress_pane_t2

0x0001,

0xf822,	// (0x0005dc46) mp4_progress_pane_t

0xd642,	// (0x0005ba66) mup_progress_pane_cp04

0x3e9a,	// (0x000522be) mp4_rocker_pane_g1

0x93fc,	// (0x00057820) aid_cell_size_keypad2_ParamLimits

0x93fc,	// (0x00057820) aid_cell_size_keypad2

0x940c,	// (0x00057830) dialer2_ne_pane_ParamLimits

0x940c,	// (0x00057830) dialer2_ne_pane

0x9418,	// (0x0005783c) grid_dialer2_keypad_pane_ParamLimits

0x9418,	// (0x0005783c) grid_dialer2_keypad_pane

0x33e5,	// (0x00051809) bg_popup_call_pane_cp07_ParamLimits

0x33e5,	// (0x00051809) bg_popup_call_pane_cp07

0x9426,	// (0x0005784a) dialer2_ne_pane_t1_ParamLimits

0x9426,	// (0x0005784a) dialer2_ne_pane_t1

0x944b,	// (0x0005786f) cell_dialer2_keypad_pane_ParamLimits

0x944b,	// (0x0005786f) cell_dialer2_keypad_pane

0xd667,	// (0x0005ba8b) bg_button_pane_pane_cp04_ParamLimits

0xd667,	// (0x0005ba8b) bg_button_pane_pane_cp04

0x9462,	// (0x00057886) cell_dialer2_keypad_pane_g1_ParamLimits

0x9462,	// (0x00057886) cell_dialer2_keypad_pane_g1

0x5d87,	// (0x000541ab) aid_placing_vt_set_content_ParamLimits

0x5d87,	// (0x000541ab) aid_placing_vt_set_content

0x5daf,	// (0x000541d3) aid_placing_vt_set_title_ParamLimits

0x5daf,	// (0x000541d3) aid_placing_vt_set_title

0x50d5,	// (0x000534f9) main_image3_pane

0x94fc,	// (0x00057920) area_side_right_pane_cp01_ParamLimits

0x94fc,	// (0x00057920) area_side_right_pane_cp01

0x952b,	// (0x0005794f) main_image3_pane_g1_ParamLimits

0x952b,	// (0x0005794f) main_image3_pane_g1

0x9539,	// (0x0005795d) main_image3_pane_g2_ParamLimits

0x9539,	// (0x0005795d) main_image3_pane_g2

0x9552,	// (0x00057976) main_image3_pane_g3_ParamLimits

0x9552,	// (0x00057976) main_image3_pane_g3

0x956b,	// (0x0005798f) main_image3_pane_g4_ParamLimits

0x956b,	// (0x0005798f) main_image3_pane_g4

0x0003,

0xf831,	// (0x0005dc55) main_image3_pane_g_ParamLimits

0xf831,	// (0x0005dc55) main_image3_pane_g

0x9584,	// (0x000579a8) main_image3_pane_t1_ParamLimits

0x9584,	// (0x000579a8) main_image3_pane_t1

0x95a9,	// (0x000579cd) main_image3_pane_t2_ParamLimits

0x95a9,	// (0x000579cd) main_image3_pane_t2

0x95c8,	// (0x000579ec) main_image3_pane_t3_ParamLimits

0x95c8,	// (0x000579ec) main_image3_pane_t3

0x0003,

0xf83a,	// (0x0005dc5e) main_image3_pane_t_ParamLimits

0xf83a,	// (0x0005dc5e) main_image3_pane_t

0xeef1,	// (0x0005d315) grid_sctrl_middle_pane_cp01_ParamLimits

0xeef1,	// (0x0005d315) grid_sctrl_middle_pane_cp01

0x9629,	// (0x00057a4d) cell_sctrl_middle_pane_cp01_ParamLimits

0x9629,	// (0x00057a4d) cell_sctrl_middle_pane_cp01

0x963a,	// (0x00057a5e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x963a,	// (0x00057a5e) cell_sctrl_middle_pane_cp01_g1

0x50d5,	// (0x000534f9) main_call4_pane

0x9647,	// (0x00057a6b) aid_size_button_call4_ParamLimits

0x9647,	// (0x00057a6b) aid_size_button_call4

0x967d,	// (0x00057aa1) call4_windows_pane_ParamLimits

0x967d,	// (0x00057aa1) call4_windows_pane

0x9692,	// (0x00057ab6) grid_call4_button_pane_ParamLimits

0x9692,	// (0x00057ab6) grid_call4_button_pane

0x96c2,	// (0x00057ae6) call4_windows_conf_pane

0x96db,	// (0x00057aff) popup_call4_audio_first_window_ParamLimits

0x96db,	// (0x00057aff) popup_call4_audio_first_window

0x972b,	// (0x00057b4f) popup_call4_audio_second_window_ParamLimits

0x972b,	// (0x00057b4f) popup_call4_audio_second_window

0x9744,	// (0x00057b68) popup_call4_audio_wait_window_ParamLimits

0x9744,	// (0x00057b68) popup_call4_audio_wait_window

0x9752,	// (0x00057b76) cell_call4_button_pane_ParamLimits

0x9752,	// (0x00057b76) cell_call4_button_pane

0x9775,	// (0x00057b99) bg_button_pane_cp09_ParamLimits

0x9775,	// (0x00057b99) bg_button_pane_cp09

0x9781,	// (0x00057ba5) cell_call4_button_pane_g1_ParamLimits

0x9781,	// (0x00057ba5) cell_call4_button_pane_g1

0x978e,	// (0x00057bb2) cell_call4_button_pane_t1_ParamLimits

0x978e,	// (0x00057bb2) cell_call4_button_pane_t1

0xd67b,	// (0x0005ba9f) popup_call4_audio_conf_window_ParamLimits

0xd67b,	// (0x0005ba9f) popup_call4_audio_conf_window

0x8b83,	// (0x00056fa7) mup3_progress_pane_t1_ParamLimits

0x8ba1,	// (0x00056fc5) mup3_progress_pane_t2_ParamLimits

0x39be,	// (0x00051de2) mup3_progress_pane_t3_ParamLimits

0xf70f,	// (0x0005db33) mup3_progress_pane_t_ParamLimits

0x39db,	// (0x00051dff) mup_progress_pane_cp03_ParamLimits

0x8faa,	// (0x000573ce) mup3_control_keys_pane_g4_copy1

0x93c0,	// (0x000577e4) mp4_rocker2_pane_ParamLimits

0x93c0,	// (0x000577e4) mp4_rocker2_pane

0xd695,	// (0x0005bab9) mp4_rocker2_pane_g1

0xd69d,	// (0x0005bac1) mp4_rocker2_pane_g2

0x97d2,	// (0x00057bf6) mp4_rocker2_pane_g3

0x97da,	// (0x00057bfe) mp4_rocker2_pane_g4

0x97e2,	// (0x00057c06) mp4_rocker2_pane_g5

0x0004,

0xf843,	// (0x0005dc67) mp4_rocker2_pane_g

0x50d5,	// (0x000534f9) main_camera4_pane

0x50d5,	// (0x000534f9) main_video4_pane

0x90d5,	// (0x000574f9) main_video_tele_dialer_pane_t1_ParamLimits

0x90d5,	// (0x000574f9) main_video_tele_dialer_pane_t1

0x90e7,	// (0x0005750b) main_video_tele_dialer_pane_t2_ParamLimits

0x90e7,	// (0x0005750b) main_video_tele_dialer_pane_t2

0x0001,

0xf7f9,	// (0x0005dc1d) main_video_tele_dialer_pane_t_ParamLimits

0xf7f9,	// (0x0005dc1d) main_video_tele_dialer_pane_t

0x9802,	// (0x00057c26) cam4_autofocus_pane_ParamLimits

0x9802,	// (0x00057c26) cam4_autofocus_pane

0x981a,	// (0x00057c3e) cam4_image_uncrop_pane_ParamLimits

0x981a,	// (0x00057c3e) cam4_image_uncrop_pane

0x9833,	// (0x00057c57) cam4_indicators_pane_ParamLimits

0x9833,	// (0x00057c57) cam4_indicators_pane

0x984f,	// (0x00057c73) main_camera4_pane_g1_ParamLimits

0x984f,	// (0x00057c73) main_camera4_pane_g1

0x985b,	// (0x00057c7f) main_camera4_pane_g2_ParamLimits

0x985b,	// (0x00057c7f) main_camera4_pane_g2

0x985b,	// (0x00057c7f) main_camera4_pane_g3_ParamLimits

0x985b,	// (0x00057c7f) main_camera4_pane_g3

0x9867,	// (0x00057c8b) main_camera4_pane_g4_ParamLimits

0x9867,	// (0x00057c8b) main_camera4_pane_g4

0x9873,	// (0x00057c97) main_camera4_pane_g5_ParamLimits

0x9873,	// (0x00057c97) main_camera4_pane_g5

0x0005,

0xf84e,	// (0x0005dc72) main_camera4_pane_g_ParamLimits

0xf84e,	// (0x0005dc72) main_camera4_pane_g

0x988d,	// (0x00057cb1) main_camera4_pane_t1_ParamLimits

0x988d,	// (0x00057cb1) main_camera4_pane_t1

0xd6a5,	// (0x0005bac9) bg_tb_trans_pane_cp06

0x98df,	// (0x00057d03) cam4_indicators_pane_g1

0x98f0,	// (0x00057d14) cam4_indicators_pane_g2

0x0002,

0xf869,	// (0x0005dc8d) cam4_indicators_pane_g

0x9908,	// (0x00057d2c) cam4_indicators_pane_t1

0x9932,	// (0x00057d56) main_video4_pane_g1_ParamLimits

0x9932,	// (0x00057d56) main_video4_pane_g1

0x993e,	// (0x00057d62) main_video4_pane_g2_ParamLimits

0x993e,	// (0x00057d62) main_video4_pane_g2

0x994a,	// (0x00057d6e) main_video4_pane_g3_ParamLimits

0x994a,	// (0x00057d6e) main_video4_pane_g3

0x9956,	// (0x00057d7a) main_video4_pane_g4_ParamLimits

0x9956,	// (0x00057d7a) main_video4_pane_g4

0x0004,

0xf870,	// (0x0005dc94) main_video4_pane_g_ParamLimits

0xf870,	// (0x0005dc94) main_video4_pane_g

0x9978,	// (0x00057d9c) vid4_indicators_pane_ParamLimits

0x9978,	// (0x00057d9c) vid4_indicators_pane

0x9997,	// (0x00057dbb) video4_image_uncrop_cif_pane_ParamLimits

0x9997,	// (0x00057dbb) video4_image_uncrop_cif_pane

0x99a6,	// (0x00057dca) video4_image_uncrop_nhd_pane_ParamLimits

0x99a6,	// (0x00057dca) video4_image_uncrop_nhd_pane

0x981a,	// (0x00057c3e) video4_image_uncrop_vga_pane_ParamLimits

0x981a,	// (0x00057c3e) video4_image_uncrop_vga_pane

0x7eb1,	// (0x000562d5) bg_tb_trans_pane_cp07

0x99bf,	// (0x00057de3) vid4_indicators_pane_g1

0x99d5,	// (0x00057df9) vid4_indicators_pane_g2

0x99e9,	// (0x00057e0d) vid4_indicators_pane_g3

0x0004,

0xf87b,	// (0x0005dc9f) vid4_indicators_pane_g

0x9a1a,	// (0x00057e3e) vid4_indicators_pane_t1

0x9a31,	// (0x00057e55) cam4_autofocus_pane_g1

0x9a39,	// (0x00057e5d) cam4_autofocus_pane_g2

0x9a41,	// (0x00057e65) cam4_autofocus_pane_g3

0x0002,

0xf886,	// (0x0005dcaa) cam4_autofocus_pane_g

0x9a49,	// (0x00057e6d) cam4_autofocus_pane_g3_copy1

0x9107,	// (0x0005752b) video_down_pane_cp_t1

0x9115,	// (0x00057539) video_down_pane_cp_t2

0x0001,

0xf7fe,	// (0x0005dc22) video_down_pane_cp_t

0x50bb,	// (0x000534df) popup_vitu2_window_ParamLimits

0x50bb,	// (0x000534df) popup_vitu2_window

0x9a51,	// (0x00057e75) aid_size_cell2_itu2_ParamLimits

0x9a51,	// (0x00057e75) aid_size_cell2_itu2

0x9a73,	// (0x00057e97) aid_size_cell_itu2_ParamLimits

0x9a73,	// (0x00057e97) aid_size_cell_itu2

0x9ab7,	// (0x00057edb) bg_popup_window_pane_cp09_ParamLimits

0x9ab7,	// (0x00057edb) bg_popup_window_pane_cp09

0x9ac5,	// (0x00057ee9) field_vitu2_entry_pane_ParamLimits

0x9ac5,	// (0x00057ee9) field_vitu2_entry_pane

0x9ae5,	// (0x00057f09) grid_vitu2_function_pane_ParamLimits

0x9ae5,	// (0x00057f09) grid_vitu2_function_pane

0x9b29,	// (0x00057f4d) grid_vitu2_itu_pane_ParamLimits

0x9b29,	// (0x00057f4d) grid_vitu2_itu_pane

0x9b9f,	// (0x00057fc3) cell_vitu2_itu_pane_ParamLimits

0x9b9f,	// (0x00057fc3) cell_vitu2_itu_pane

0x9bba,	// (0x00057fde) cell_vitu2_function_pane_ParamLimits

0x9bba,	// (0x00057fde) cell_vitu2_function_pane

0xd6b3,	// (0x0005bad7) bg_popup_call_pane_cp08_ParamLimits

0xd6b3,	// (0x0005bad7) bg_popup_call_pane_cp08

0xd6ca,	// (0x0005baee) field_vitu2_entry_pane_g1

0xd6d6,	// (0x0005bafa) field_vitu2_entry_pane_g2

0x0002,

0xf88d,	// (0x0005dcb1) field_vitu2_entry_pane_g

0x9bfe,	// (0x00058022) field_vitu2_entry_pane_t1_ParamLimits

0x9bfe,	// (0x00058022) field_vitu2_entry_pane_t1

0x05e3,	// (0x0004ea07) field_vitu2_entry_pane_t2_ParamLimits

0x05e3,	// (0x0004ea07) field_vitu2_entry_pane_t2

0x0001,

0xf894,	// (0x0005dcb8) field_vitu2_entry_pane_t_ParamLimits

0xf894,	// (0x0005dcb8) field_vitu2_entry_pane_t

0x81fe,	// (0x00056622) bg_button_pane_cp010_ParamLimits

0x81fe,	// (0x00056622) bg_button_pane_cp010

0x9c2e,	// (0x00058052) cell_vitu2_itu_pane_g1

0x9c54,	// (0x00058078) cell_vitu2_itu_pane_t1_ParamLimits

0x9c54,	// (0x00058078) cell_vitu2_itu_pane_t1

0x4d24,	// (0x00053148) cell_vitu2_itu_pane_t2_ParamLimits

0x4d24,	// (0x00053148) cell_vitu2_itu_pane_t2

0x0002,

0xf89e,	// (0x0005dcc2) cell_vitu2_itu_pane_t_ParamLimits

0xf89e,	// (0x0005dcc2) cell_vitu2_itu_pane_t

0x7eb1,	// (0x000562d5) bg_button_pane_cp011

0x9ca0,	// (0x000580c4) cell_vitu2_function_pane_g1

0x50d5,	// (0x000534f9) main_myfav_hc_pane

0x960a,	// (0x00057a2e) popup_image3_note_pane_ParamLimits

0x960a,	// (0x00057a2e) popup_image3_note_pane

0x9618,	// (0x00057a3c) popup_image3_tool_bar_pane_ParamLimits

0x9618,	// (0x00057a3c) popup_image3_tool_bar_pane

0x4d9a,	// (0x000531be) cell_vitu2_itu_pane_t3_ParamLimits

0x4d9a,	// (0x000531be) cell_vitu2_itu_pane_t3

0xe7c9,	// (0x0005cbed) bg_popup_trans_pane

0xd6ea,	// (0x0005bb0e) grid_image3_tool_bar_pane

0xd6f4,	// (0x0005bb18) bg_popup_trans_pane_g1

0x1855,	// (0x0004fc79) bg_popup_trans_pane_g2

0xd6fc,	// (0x0005bb20) bg_popup_trans_pane_g3

0xd704,	// (0x0005bb28) bg_popup_trans_pane_g4

0xd70c,	// (0x0005bb30) bg_popup_trans_pane_g5

0xd714,	// (0x0005bb38) bg_popup_trans_pane_g6

0xd71c,	// (0x0005bb40) bg_popup_trans_pane_g7

0xd724,	// (0x0005bb48) bg_popup_trans_pane_g8

0x1835,	// (0x0004fc59) bg_popup_trans_pane_g9

0x0008,

0xf8a5,	// (0x0005dcc9) bg_popup_trans_pane_g

0xd72c,	// (0x0005bb50) cell_image3_tool_bar_pane_ParamLimits

0xd72c,	// (0x0005bb50) cell_image3_tool_bar_pane

0x1640,	// (0x0004fa64) cell_image3_tool_bar_pane_g1

0xe7c9,	// (0x0005cbed) bg_popup_trans_pane_cp1

0xd742,	// (0x0005bb66) popup_image3_note_pane_t1

0xd750,	// (0x0005bb74) popup_image3_note_pane_t2

0xd75e,	// (0x0005bb82) popup_image3_note_pane_t3

0x0002,

0xf8b8,	// (0x0005dcdc) popup_image3_note_pane_t

0xd76e,	// (0x0005bb92) popup_image3_note_pane_t3_copy1

0x9cb4,	// (0x000580d8) bg_myfav_hc_instruction_pane_ParamLimits

0x9cb4,	// (0x000580d8) bg_myfav_hc_instruction_pane

0x9ccc,	// (0x000580f0) cell_myfav_contact_pane_ParamLimits

0x9ccc,	// (0x000580f0) cell_myfav_contact_pane

0x9ce6,	// (0x0005810a) cell_myfav_contact_pane_cp1_ParamLimits

0x9ce6,	// (0x0005810a) cell_myfav_contact_pane_cp1

0x9cfe,	// (0x00058122) cell_myfav_contact_pane_cp2_ParamLimits

0x9cfe,	// (0x00058122) cell_myfav_contact_pane_cp2

0x9d16,	// (0x0005813a) cell_myfav_contact_pane_cp3_ParamLimits

0x9d16,	// (0x0005813a) cell_myfav_contact_pane_cp3

0x9d2d,	// (0x00058151) cell_myfav_contact_pane_cp4_ParamLimits

0x9d2d,	// (0x00058151) cell_myfav_contact_pane_cp4

0x9d43,	// (0x00058167) cell_myfav_contact_pane_cp5_ParamLimits

0x9d43,	// (0x00058167) cell_myfav_contact_pane_cp5

0x9d57,	// (0x0005817b) cell_myfav_contact_pane_cp6_ParamLimits

0x9d57,	// (0x0005817b) cell_myfav_contact_pane_cp6

0x9d6b,	// (0x0005818f) cell_myfav_contact_pane_cp7_ParamLimits

0x9d6b,	// (0x0005818f) cell_myfav_contact_pane_cp7

0xd77c,	// (0x0005bba0) listscroll_gen_pane_cp05

0x9d83,	// (0x000581a7) main_myfav_hc_pane_g1_ParamLimits

0x9d83,	// (0x000581a7) main_myfav_hc_pane_g1

0x9d9d,	// (0x000581c1) main_myfav_hc_pane_g2_ParamLimits

0x9d9d,	// (0x000581c1) main_myfav_hc_pane_g2

0x0002,

0xf8bf,	// (0x0005dce3) main_myfav_hc_pane_g_ParamLimits

0xf8bf,	// (0x0005dce3) main_myfav_hc_pane_g

0x9dcf,	// (0x000581f3) main_myfav_hc_pane_t1_ParamLimits

0x9dcf,	// (0x000581f3) main_myfav_hc_pane_t1

0xd785,	// (0x0005bba9) main_myfav_hc_pane_t2_ParamLimits

0xd785,	// (0x0005bba9) main_myfav_hc_pane_t2

0xd797,	// (0x0005bbbb) main_myfav_hc_pane_t3_ParamLimits

0xd797,	// (0x0005bbbb) main_myfav_hc_pane_t3

0x9de6,	// (0x0005820a) main_myfav_hc_pane_t4_ParamLimits

0x9de6,	// (0x0005820a) main_myfav_hc_pane_t4

0x0004,

0xf8c6,	// (0x0005dcea) main_myfav_hc_pane_t_ParamLimits

0xf8c6,	// (0x0005dcea) main_myfav_hc_pane_t

0x1640,	// (0x0004fa64) bg_myfav_hc_instruction_pane_g1

0xd7a9,	// (0x0005bbcd) cell_myfav_contact_pane_g1_ParamLimits

0xd7a9,	// (0x0005bbcd) cell_myfav_contact_pane_g1

0xd7a9,	// (0x0005bbcd) cell_myfav_contact_pane_g2_ParamLimits

0xd7a9,	// (0x0005bbcd) cell_myfav_contact_pane_g2

0xd7b5,	// (0x0005bbd9) cell_myfav_contact_pane_g3_ParamLimits

0xd7b5,	// (0x0005bbd9) cell_myfav_contact_pane_g3

0xef0d,	// (0x0005d331) cell_myfav_contact_pane_g4_ParamLimits

0xef0d,	// (0x0005d331) cell_myfav_contact_pane_g4

0xd7c2,	// (0x0005bbe6) cell_myfav_contact_pane_g5_ParamLimits

0xd7c2,	// (0x0005bbe6) cell_myfav_contact_pane_g5

0x0004,

0xf8d1,	// (0x0005dcf5) cell_myfav_contact_pane_g_ParamLimits

0xf8d1,	// (0x0005dcf5) cell_myfav_contact_pane_g

0x9db7,	// (0x000581db) main_myfav_hc_pane_g3_ParamLimits

0x9db7,	// (0x000581db) main_myfav_hc_pane_g3

0x4fc3,	// (0x000533e7) popup_adpt_find_window

0x9e10,	// (0x00058234) afind_page_pane_ParamLimits

0x9e10,	// (0x00058234) afind_page_pane

0x9e1d,	// (0x00058241) aid_size_cell_afind_ParamLimits

0x9e1d,	// (0x00058241) aid_size_cell_afind

0x9e37,	// (0x0005825b) bg_popup_sub_pane_cp09_ParamLimits

0x9e37,	// (0x0005825b) bg_popup_sub_pane_cp09

0x9e44,	// (0x00058268) find_pane_cp01_ParamLimits

0x9e44,	// (0x00058268) find_pane_cp01

0xd7ce,	// (0x0005bbf2) grid_afind_control_pane_ParamLimits

0xd7ce,	// (0x0005bbf2) grid_afind_control_pane

0x9e51,	// (0x00058275) grid_afind_pane_ParamLimits

0x9e51,	// (0x00058275) grid_afind_pane

0x9e6d,	// (0x00058291) cell_afind_pane_ParamLimits

0x9e6d,	// (0x00058291) cell_afind_pane

0x1640,	// (0x0004fa64) afind_page_pane_g1

0x9eb9,	// (0x000582dd) afind_page_pane_g2

0x9ec2,	// (0x000582e6) afind_page_pane_g3

0x0002,

0xf8dc,	// (0x0005dd00) afind_page_pane_g

0x9ecb,	// (0x000582ef) afind_page_pane_t1

0xd7e2,	// (0x0005bc06) cell_afind_grid_control_pane_ParamLimits

0xd7e2,	// (0x0005bc06) cell_afind_grid_control_pane

0xd667,	// (0x0005ba8b) bg_button_pane_cp69_ParamLimits

0xd667,	// (0x0005ba8b) bg_button_pane_cp69

0x9eeb,	// (0x0005830f) cell_afind_pane_g1_ParamLimits

0x9eeb,	// (0x0005830f) cell_afind_pane_g1

0x9ef8,	// (0x0005831c) cell_afind_pane_t1_ParamLimits

0x9ef8,	// (0x0005831c) cell_afind_pane_t1

0x164a,	// (0x0004fa6e) bg_button_pane_cp72

0xd7f1,	// (0x0005bc15) cell_afind_grid_control_pane_g1

0x79d3,	// (0x00055df7) aid_image_placing_area_ParamLimits

0x79d3,	// (0x00055df7) aid_image_placing_area

0xeeff,	// (0x0005d323) field_vitu_entry_pane_g1_ParamLimits

0xeeff,	// (0x0005d323) field_vitu_entry_pane_g1

0xeeff,	// (0x0005d323) field_vitu_entry_pane_g2_ParamLimits

0xeeff,	// (0x0005d323) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x0005d60b) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x0005d60b) field_vitu_entry_pane_g

0x3cdb,	// (0x000520ff) cell_vitu_itu_pane_g1_ParamLimits

0x3cbe,	// (0x000520e2) cell_vitu_itu_pane_t3_ParamLimits

0x3cbe,	// (0x000520e2) cell_vitu_itu_pane_t3

0xd610,	// (0x0005ba34) mp4_progress_pane_t1_ParamLimits

0xd629,	// (0x0005ba4d) mp4_progress_pane_t2_ParamLimits

0xf822,	// (0x0005dc46) mp4_progress_pane_t_ParamLimits

0xd642,	// (0x0005ba66) mup_progress_pane_cp04_ParamLimits

0x9dfa,	// (0x0005821e) main_myfav_hc_pane_t5_ParamLimits

0x9dfa,	// (0x0005821e) main_myfav_hc_pane_t5

0x4e4c,	// (0x00053270) aid_zoom_text_primary

0x4fc3,	// (0x000533e7) popup_adpt_find_window_ParamLimits

0x7eb1,	// (0x000562d5) main_cam_set_pane

0x9841,	// (0x00057c65) cam4_zoom_pane_ParamLimits

0x9841,	// (0x00057c65) cam4_zoom_pane

0x9f0a,	// (0x0005832e) main_cam_set_pane_g1_ParamLimits

0x9f0a,	// (0x0005832e) main_cam_set_pane_g1

0x9f18,	// (0x0005833c) main_cam_set_pane_g2_ParamLimits

0x9f18,	// (0x0005833c) main_cam_set_pane_g2

0x0001,

0xf8e3,	// (0x0005dd07) main_cam_set_pane_g_ParamLimits

0xf8e3,	// (0x0005dd07) main_cam_set_pane_g

0x9f24,	// (0x00058348) main_cam_set_pane_t1_ParamLimits

0x9f24,	// (0x00058348) main_cam_set_pane_t1

0x9f40,	// (0x00058364) main_cset_listscroll_pane_ParamLimits

0x9f40,	// (0x00058364) main_cset_listscroll_pane

0x9f74,	// (0x00058398) main_cset_slider_pane_ParamLimits

0x9f74,	// (0x00058398) main_cset_slider_pane

0xd802,	// (0x0005bc26) main_cset_list_pane_ParamLimits

0xd802,	// (0x0005bc26) main_cset_list_pane

0xd812,	// (0x0005bc36) scroll_pane_cp028

0x9f95,	// (0x000583b9) aid_area_touch_slider

0x9fb1,	// (0x000583d5) cset_slider_pane

0x9fd4,	// (0x000583f8) main_cset_slider_pane_g1

0x9fe9,	// (0x0005840d) main_cset_slider_pane_g2

0x0011,

0xf8e8,	// (0x0005dd0c) main_cset_slider_pane_g

0xd84b,	// (0x0005bc6f) main_cset_slider_pane_t1

0xa0a5,	// (0x000584c9) main_cset_slider_pane_t2

0xa0bf,	// (0x000584e3) main_cset_slider_pane_t3

0xa0d9,	// (0x000584fd) main_cset_slider_pane_t4

0xa0f3,	// (0x00058517) main_cset_slider_pane_t5

0xa10d,	// (0x00058531) main_cset_slider_pane_t6

0xa122,	// (0x00058546) main_cset_slider_pane_t7

0x000e,

0xf90d,	// (0x0005dd31) main_cset_slider_pane_t

0xa226,	// (0x0005864a) cset_list_set_pane_ParamLimits

0xa226,	// (0x0005864a) cset_list_set_pane

0xd8e5,	// (0x0005bd09) aid_position_infowindow_above

0xd8ed,	// (0x0005bd11) aid_position_infowindow_below

0xa237,	// (0x0005865b) cset_list_set_pane_g1_ParamLimits

0xa237,	// (0x0005865b) cset_list_set_pane_g1

0xa243,	// (0x00058667) cset_list_set_pane_g3_ParamLimits

0xa243,	// (0x00058667) cset_list_set_pane_g3

0x0001,

0xf92c,	// (0x0005dd50) cset_list_set_pane_g_ParamLimits

0xf92c,	// (0x0005dd50) cset_list_set_pane_g

0xa252,	// (0x00058676) cset_list_set_pane_t1_ParamLimits

0xa252,	// (0x00058676) cset_list_set_pane_t1

0xe818,	// (0x0005cc3c) list_highlight_pane_cp021_ParamLimits

0xe818,	// (0x0005cc3c) list_highlight_pane_cp021

0x20b1,	// (0x000504d5) cset_slider_pane_g1

0x20c3,	// (0x000504e7) cset_slider_pane_g2

0x20ba,	// (0x000504de) cset_slider_pane_g3

0x0002,

0xf931,	// (0x0005dd55) cset_slider_pane_g

0x1d6f,	// (0x00050193) aid_area_touch_cam4_zoom

0xa267,	// (0x0005868b) cam4_zoom_cont_pane

0xa26f,	// (0x00058693) cam4_zoom_pane_g1

0xa277,	// (0x0005869b) cam4_zoom_pane_g2

0xa27f,	// (0x000586a3) cam4_zoom_pane_g3

0x0002,

0xf938,	// (0x0005dd5c) cam4_zoom_pane_g

0xa287,	// (0x000586ab) cam4_zoom_cont_pane_g1

0xa290,	// (0x000586b4) cam4_zoom_cont_pane_g2

0xa299,	// (0x000586bd) cam4_zoom_cont_pane_g3

0x0002,

0xf93f,	// (0x0005dd63) cam4_zoom_cont_pane_g

0x9661,	// (0x00057a85) call4_image_pane_ParamLimits

0x9661,	// (0x00057a85) call4_image_pane

0x96c2,	// (0x00057ae6) call4_windows_conf_pane_ParamLimits

0x9709,	// (0x00057b2d) popup_call4_audio_in_window_ParamLimits

0x9709,	// (0x00057b2d) popup_call4_audio_in_window

0xe7c9,	// (0x0005cbed) bg_popup_call2_act_pane_cp02

0xd673,	// (0x0005ba97) call4_list_conf_pane

0x1640,	// (0x0004fa64) call4_image_pane_g1

0x1640,	// (0x0004fa64) call4_image_pane_g2

0x0001,

0xf3c3,	// (0x0005d7e7) call4_image_pane_g

0xd8f5,	// (0x0005bd19) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8f5,	// (0x0005bd19) list_single_graphic_popup_conf4_pane

0xe7c9,	// (0x0005cbed) list_highlight_pane_cp022

0xd90a,	// (0x0005bd2e) list_single_graphic_popup_conf4_pane_g1

0x1dc8,	// (0x000501ec) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf946,	// (0x0005dd6a) list_single_graphic_popup_conf4_pane_g

0xd912,	// (0x0005bd36) list_single_graphic_popup_conf4_pane_t1

0x5f09,	// (0x0005432d) popup_vtel_slider_window_ParamLimits

0x5f09,	// (0x0005432d) popup_vtel_slider_window

0xd655,	// (0x0005ba79) dialer2_ne_pane_t2_ParamLimits

0xd655,	// (0x0005ba79) dialer2_ne_pane_t2

0x0001,

0xf827,	// (0x0005dc4b) dialer2_ne_pane_t_ParamLimits

0xf827,	// (0x0005dc4b) dialer2_ne_pane_t

0xe818,	// (0x0005cc3c) bg_popup_sub_pane_cp010_ParamLimits

0xe818,	// (0x0005cc3c) bg_popup_sub_pane_cp010

0xa2a2,	// (0x000586c6) popup_vtel_slider_window_g1_ParamLimits

0xa2a2,	// (0x000586c6) popup_vtel_slider_window_g1

0xa2ae,	// (0x000586d2) popup_vtel_slider_window_g2_ParamLimits

0xa2ae,	// (0x000586d2) popup_vtel_slider_window_g2

0x0003,

0xf94b,	// (0x0005dd6f) popup_vtel_slider_window_g_ParamLimits

0xf94b,	// (0x0005dd6f) popup_vtel_slider_window_g

0xa2f6,	// (0x0005871a) vtel_slider_pane_ParamLimits

0xa2f6,	// (0x0005871a) vtel_slider_pane

0xa305,	// (0x00058729) vtel_slider_pane_g1_ParamLimits

0xa305,	// (0x00058729) vtel_slider_pane_g1

0xa312,	// (0x00058736) vtel_slider_pane_g2_ParamLimits

0xa312,	// (0x00058736) vtel_slider_pane_g2

0xa31f,	// (0x00058743) vtel_slider_pane_g3_ParamLimits

0xa31f,	// (0x00058743) vtel_slider_pane_g3

0xa305,	// (0x00058729) vtel_slider_pane_g4_ParamLimits

0xa305,	// (0x00058729) vtel_slider_pane_g4

0xa32c,	// (0x00058750) vtel_slider_pane_g5_ParamLimits

0xa32c,	// (0x00058750) vtel_slider_pane_g5

0x0004,

0xf954,	// (0x0005dd78) vtel_slider_pane_g_ParamLimits

0xf954,	// (0x0005dd78) vtel_slider_pane_g

0x7eb1,	// (0x000562d5) main_gallery2_pane

0x9a99,	// (0x00057ebd) aid_size_row_itut2_dropdow_list_ParamLimits

0x9a99,	// (0x00057ebd) aid_size_row_itut2_dropdow_list

0x9b07,	// (0x00057f2b) grid_vitu2_function_top_pane_ParamLimits

0x9b07,	// (0x00057f2b) grid_vitu2_function_top_pane

0x9b5d,	// (0x00057f81) popup_vitu2_dropdown_list_window_ParamLimits

0x9b5d,	// (0x00057f81) popup_vitu2_dropdown_list_window

0x9b7b,	// (0x00057f9f) popup_vitu2_match_list_window

0xa339,	// (0x0005875d) cell_vitu2_function_top_pane_ParamLimits

0xa339,	// (0x0005875d) cell_vitu2_function_top_pane

0xa353,	// (0x00058777) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa353,	// (0x00058777) cell_vitu2_function_top_pane_cp01

0xa36f,	// (0x00058793) cell_vitu2_function_top_wide_pane_ParamLimits

0xa36f,	// (0x00058793) cell_vitu2_function_top_wide_pane

0x7eb1,	// (0x000562d5) bg_button_pane_cp012

0xa38d,	// (0x000587b1) cell_vitu2_function_top_pane_g1

0xa3a1,	// (0x000587c5) bg_button_pane_cp013_ParamLimits

0xa3a1,	// (0x000587c5) bg_button_pane_cp013

0xa3bd,	// (0x000587e1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa3bd,	// (0x000587e1) cell_vitu2_function_top_wide_pane_g1

0x50bb,	// (0x000534df) bg_popup_sub_pane_cp20

0xa3d5,	// (0x000587f9) list_vitu2_match_list_pane

0xd6f4,	// (0x0005bb18) bg_popup_sub_pane_cp20_g1

0xd6fc,	// (0x0005bb20) bg_popup_sub_pane_cp20_g2

0x1855,	// (0x0004fc79) bg_popup_sub_pane_cp20_g3

0xd704,	// (0x0005bb28) bg_popup_sub_pane_cp20_g4

0x1835,	// (0x0004fc59) bg_popup_sub_pane_cp20_g5

0xd928,	// (0x0005bd4c) bg_popup_sub_pane_cp20_g6

0xd714,	// (0x0005bb38) bg_popup_sub_pane_cp20_g7

0xd71c,	// (0x0005bb40) bg_popup_sub_pane_cp20_g8

0xd724,	// (0x0005bb48) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95f,	// (0x0005dd83) bg_popup_sub_pane_cp20_g

0xa3ed,	// (0x00058811) list_vitu2_match_list_item_pane_ParamLimits

0xa3ed,	// (0x00058811) list_vitu2_match_list_item_pane

0xa3ff,	// (0x00058823) list_vitu2_match_list_item_pane_t1

0x50d5,	// (0x000534f9) bg_popup_sub_pane_cp21

0x160a,	// (0x0004fa2e) grid_vitu2_dropdown_list_pane

0xa40d,	// (0x00058831) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa40d,	// (0x00058831) cell_vitu2_dropdown_list_char_pane

0xa431,	// (0x00058855) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa431,	// (0x00058855) cell_vitu2_dropdown_list_ctrl_pane

0xd930,	// (0x0005bd54) cell_vitu2_dropdown_list_char_pane_g1

0xd939,	// (0x0005bd5d) cell_vitu2_dropdown_list_char_pane_g2

0xd942,	// (0x0005bd66) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf972,	// (0x0005dd96) cell_vitu2_dropdown_list_char_pane_g

0xa45b,	// (0x0005887f) cell_vitu2_dropdown_list_char_pane_t1

0xa469,	// (0x0005888d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa469,	// (0x0005888d) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa479,	// (0x0005889d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa479,	// (0x0005889d) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa48a,	// (0x000588ae) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa48a,	// (0x000588ae) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa49a,	// (0x000588be) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa49a,	// (0x000588be) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd6a5,	// (0x0005bac9) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd6a5,	// (0x0005bac9) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf979,	// (0x0005dd9d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf979,	// (0x0005dd9d) cell_vitu2_dropdown_list_ctrl_pane_g

0xa4b3,	// (0x000588d7) aid_size_cell_gallery2_ParamLimits

0xa4b3,	// (0x000588d7) aid_size_cell_gallery2

0xa4cd,	// (0x000588f1) grid_gallery2_pane_ParamLimits

0xa4cd,	// (0x000588f1) grid_gallery2_pane

0xa4e4,	// (0x00058908) scroll_pane_cp029_ParamLimits

0xa4e4,	// (0x00058908) scroll_pane_cp029

0xa4f4,	// (0x00058918) cell_gallery2_pane_ParamLimits

0xa4f4,	// (0x00058918) cell_gallery2_pane

0xd94b,	// (0x0005bd6f) cell_gallery2_pane_g2

0xa54b,	// (0x0005896f) cell_gallery2_pane_g3

0xd953,	// (0x0005bd77) cell_gallery2_pane_g4

0xd95b,	// (0x0005bd7f) cell_gallery2_pane_g5

0x160a,	// (0x0004fa2e) grid_highlight_pane_cp10

0x9b7b,	// (0x00057f9f) popup_vitu2_match_list_window_ParamLimits

0x9b8f,	// (0x00057fb3) popup_vitu2_query_window_ParamLimits

0x9b8f,	// (0x00057fb3) popup_vitu2_query_window

0x50d5,	// (0x000534f9) bg_vitu2_candi_button_pane

0xd930,	// (0x0005bd54) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd939,	// (0x0005bd5d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd942,	// (0x0005bd66) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xa553,	// (0x00058977) bg_button_pane_cp015

0xa568,	// (0x0005898c) bg_button_pane_cp016

0xa574,	// (0x00058998) bg_button_pane_cp017

0x314b,	// (0x0005156f) bg_popup_sub_pane_cp22

0xd963,	// (0x0005bd87) popup_vitu2_query_window_g1

0xa5b5,	// (0x000589d9) popup_vitu2_query_window_g2

0x0002,

0xf984,	// (0x0005dda8) popup_vitu2_query_window_g

0xa5d9,	// (0x000589fd) popup_vitu2_query_window_t1_ParamLimits

0xa5d9,	// (0x000589fd) popup_vitu2_query_window_t1

0xa60c,	// (0x00058a30) popup_vitu2_query_window_t2_ParamLimits

0xa60c,	// (0x00058a30) popup_vitu2_query_window_t2

0xa61e,	// (0x00058a42) popup_vitu2_query_window_t3_ParamLimits

0xa61e,	// (0x00058a42) popup_vitu2_query_window_t3

0xa646,	// (0x00058a6a) popup_vitu2_query_window_t4_ParamLimits

0xa646,	// (0x00058a6a) popup_vitu2_query_window_t4

0xa65a,	// (0x00058a7e) popup_vitu2_query_window_t5_ParamLimits

0xa65a,	// (0x00058a7e) popup_vitu2_query_window_t5

0x0006,

0xf98b,	// (0x0005ddaf) popup_vitu2_query_window_t_ParamLimits

0xf98b,	// (0x0005ddaf) popup_vitu2_query_window_t

0xd7fa,	// (0x0005bc1e) main_cset_text_pane

0x9f95,	// (0x000583b9) aid_area_touch_slider_ParamLimits

0x9fb1,	// (0x000583d5) cset_slider_pane_ParamLimits

0x9fd4,	// (0x000583f8) main_cset_slider_pane_g1_ParamLimits

0x9fe9,	// (0x0005840d) main_cset_slider_pane_g2_ParamLimits

0xd81b,	// (0x0005bc3f) main_cset_slider_pane_g3_ParamLimits

0xd81b,	// (0x0005bc3f) main_cset_slider_pane_g3

0x9ffe,	// (0x00058422) main_cset_slider_pane_g4_ParamLimits

0x9ffe,	// (0x00058422) main_cset_slider_pane_g4

0xa00d,	// (0x00058431) main_cset_slider_pane_g5_ParamLimits

0xa00d,	// (0x00058431) main_cset_slider_pane_g5

0xa019,	// (0x0005843d) main_cset_slider_pane_g6_ParamLimits

0xa019,	// (0x0005843d) main_cset_slider_pane_g6

0xf8e8,	// (0x0005dd0c) main_cset_slider_pane_g_ParamLimits

0xd84b,	// (0x0005bc6f) main_cset_slider_pane_t1_ParamLimits

0xa0a5,	// (0x000584c9) main_cset_slider_pane_t2_ParamLimits

0xa0bf,	// (0x000584e3) main_cset_slider_pane_t3_ParamLimits

0xa0d9,	// (0x000584fd) main_cset_slider_pane_t4_ParamLimits

0xa0f3,	// (0x00058517) main_cset_slider_pane_t5_ParamLimits

0xa10d,	// (0x00058531) main_cset_slider_pane_t6_ParamLimits

0xa122,	// (0x00058546) main_cset_slider_pane_t7_ParamLimits

0xa14c,	// (0x00058570) main_cset_slider_pane_t8_ParamLimits

0xa14c,	// (0x00058570) main_cset_slider_pane_t8

0xa174,	// (0x00058598) main_cset_slider_pane_t9_ParamLimits

0xa174,	// (0x00058598) main_cset_slider_pane_t9

0xa19c,	// (0x000585c0) main_cset_slider_pane_t10_ParamLimits

0xa19c,	// (0x000585c0) main_cset_slider_pane_t10

0xa1c4,	// (0x000585e8) main_cset_slider_pane_t11_ParamLimits

0xa1c4,	// (0x000585e8) main_cset_slider_pane_t11

0xa1ec,	// (0x00058610) main_cset_slider_pane_t12_ParamLimits

0xa1ec,	// (0x00058610) main_cset_slider_pane_t12

0xa209,	// (0x0005862d) main_cset_slider_pane_t13_ParamLimits

0xa209,	// (0x0005862d) main_cset_slider_pane_t13

0xf90d,	// (0x0005dd31) main_cset_slider_pane_t_ParamLimits

0xe7c9,	// (0x0005cbed) bg_popup_sub_pane_cp011

0xd96f,	// (0x0005bd93) main_cset_text_pane_g1

0xd977,	// (0x0005bd9b) main_cset_text_pane_t1

0xd985,	// (0x0005bda9) main_cset_text_pane_t2

0xd993,	// (0x0005bdb7) main_cset_text_pane_t3

0xd9a1,	// (0x0005bdc5) main_cset_text_pane_t4

0xd9af,	// (0x0005bdd3) main_cset_text_pane_t5

0xd9bd,	// (0x0005bde1) main_cset_text_pane_t6

0xd9cb,	// (0x0005bdef) main_cset_text_pane_t7

0x0006,

0xf99a,	// (0x0005ddbe) main_cset_text_pane_t

0x50d5,	// (0x000534f9) main_cam4_burst_pane

0x50d5,	// (0x000534f9) main_cam5_pane

0x9ed9,	// (0x000582fd) bg_button_pane_cp019

0x9ee2,	// (0x00058306) bg_button_pane_cp020

0xd827,	// (0x0005bc4b) main_cset_slider_pane_g7_ParamLimits

0xd827,	// (0x0005bc4b) main_cset_slider_pane_g7

0xd833,	// (0x0005bc57) main_cset_slider_pane_g8_ParamLimits

0xd833,	// (0x0005bc57) main_cset_slider_pane_g8

0xa02d,	// (0x00058451) main_cset_slider_pane_g9_ParamLimits

0xa02d,	// (0x00058451) main_cset_slider_pane_g9

0xa039,	// (0x0005845d) main_cset_slider_pane_g10_ParamLimits

0xa039,	// (0x0005845d) main_cset_slider_pane_g10

0xa045,	// (0x00058469) main_cset_slider_pane_g11_ParamLimits

0xa045,	// (0x00058469) main_cset_slider_pane_g11

0xa051,	// (0x00058475) main_cset_slider_pane_g12_ParamLimits

0xa051,	// (0x00058475) main_cset_slider_pane_g12

0xa05d,	// (0x00058481) main_cset_slider_pane_g13_ParamLimits

0xa05d,	// (0x00058481) main_cset_slider_pane_g13

0xa069,	// (0x0005848d) main_cset_slider_pane_g14_ParamLimits

0xa069,	// (0x0005848d) main_cset_slider_pane_g14

0xa075,	// (0x00058499) main_cset_slider_pane_g15_ParamLimits

0xa075,	// (0x00058499) main_cset_slider_pane_g15

0xd873,	// (0x0005bc97) main_cset_slider_pane_t14_ParamLimits

0xd873,	// (0x0005bc97) main_cset_slider_pane_t14

0xd8ac,	// (0x0005bcd0) main_cset_slider_pane_t15_ParamLimits

0xd8ac,	// (0x0005bcd0) main_cset_slider_pane_t15

0xa6c4,	// (0x00058ae8) aid_cam4_burst_size_cell_ParamLimits

0xa6c4,	// (0x00058ae8) aid_cam4_burst_size_cell

0xa6e0,	// (0x00058b04) grid_cam4_burst_pane_ParamLimits

0xa6e0,	// (0x00058b04) grid_cam4_burst_pane

0xa712,	// (0x00058b36) linegrid_cam4_burst_pane_ParamLimits

0xa712,	// (0x00058b36) linegrid_cam4_burst_pane

0xa730,	// (0x00058b54) scroll_pane_cp30_ParamLimits

0xa730,	// (0x00058b54) scroll_pane_cp30

0xa73c,	// (0x00058b60) cell_cam4_burst_pane_ParamLimits

0xa73c,	// (0x00058b60) cell_cam4_burst_pane

0xd9d9,	// (0x0005bdfd) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9d9,	// (0x0005bdfd) linegrid_cam4_burst_pane_g1

0xa77c,	// (0x00058ba0) linegrid_cam4_burst_pane_g2_ParamLimits

0xa77c,	// (0x00058ba0) linegrid_cam4_burst_pane_g2

0xd9e6,	// (0x0005be0a) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9e6,	// (0x0005be0a) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a9,	// (0x0005ddcd) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a9,	// (0x0005ddcd) linegrid_cam4_burst_pane_g

0xa78d,	// (0x00058bb1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa78d,	// (0x00058bb1) linegrid_cam4_burst_pane_g3_copy1

0xd9f3,	// (0x0005be17) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9f3,	// (0x0005be17) linegrid_cam4_burst_pane_g4

0xa7a7,	// (0x00058bcb) linegrid_cam4_burst_pane_g5_ParamLimits

0xa7a7,	// (0x00058bcb) linegrid_cam4_burst_pane_g5

0xa7b8,	// (0x00058bdc) linegrid_cam4_burst_pane_g6_ParamLimits

0xa7b8,	// (0x00058bdc) linegrid_cam4_burst_pane_g6

0xda00,	// (0x0005be24) linegrid_cam4_burst_pane_g7_ParamLimits

0xda00,	// (0x0005be24) linegrid_cam4_burst_pane_g7

0xa7cf,	// (0x00058bf3) cell_cam4_burst_pane_g1

0xda19,	// (0x0005be3d) main_cam5_pane_t1_ParamLimits

0xda19,	// (0x0005be3d) main_cam5_pane_t1

0xda2b,	// (0x0005be4f) main_cam5_pane_t2_ParamLimits

0xda2b,	// (0x0005be4f) main_cam5_pane_t2

0xda3d,	// (0x0005be61) main_cam5_pane_t3_ParamLimits

0xda3d,	// (0x0005be61) main_cam5_pane_t3

0xda4f,	// (0x0005be73) main_cam5_pane_t4_ParamLimits

0xda4f,	// (0x0005be73) main_cam5_pane_t4

0xda67,	// (0x0005be8b) main_cam5_pane_t5_ParamLimits

0xda67,	// (0x0005be8b) main_cam5_pane_t5

0xda7b,	// (0x0005be9f) main_cam5_pane_t6_ParamLimits

0xda7b,	// (0x0005be9f) main_cam5_pane_t6

0xda8f,	// (0x0005beb3) main_cam5_pane_t7_ParamLimits

0xda8f,	// (0x0005beb3) main_cam5_pane_t7

0xdaa1,	// (0x0005bec5) main_cam5_pane_t8_ParamLimits

0xdaa1,	// (0x0005bec5) main_cam5_pane_t8

0xdabf,	// (0x0005bee3) main_cam5_pane_t9_ParamLimits

0xdabf,	// (0x0005bee3) main_cam5_pane_t9

0xdad1,	// (0x0005bef5) main_cam5_pane_t10_ParamLimits

0xdad1,	// (0x0005bef5) main_cam5_pane_t10

0xdae3,	// (0x0005bf07) main_cam5_pane_t11_ParamLimits

0xdae3,	// (0x0005bf07) main_cam5_pane_t11

0xdaf7,	// (0x0005bf1b) main_cam5_pane_t12_ParamLimits

0xdaf7,	// (0x0005bf1b) main_cam5_pane_t12

0xdb0e,	// (0x0005bf32) main_cam5_pane_t13_ParamLimits

0xdb0e,	// (0x0005bf32) main_cam5_pane_t13

0x000c,

0xf9b5,	// (0x0005ddd9) main_cam5_pane_t_ParamLimits

0xf9b5,	// (0x0005ddd9) main_cam5_pane_t

0x507a,	// (0x0005349e) popup_scut_keymap_window_ParamLimits

0x507a,	// (0x0005349e) popup_scut_keymap_window

0xa7e2,	// (0x00058c06) aid_size_cell_brow_shortcut

0x160a,	// (0x0004fa2e) bg_popup_window_pane_cp010

0xa7ee,	// (0x00058c12) grid_scut_pane

0xa7fa,	// (0x00058c1e) cell_scut_pane_ParamLimits

0xa7fa,	// (0x00058c1e) cell_scut_pane

0xa815,	// (0x00058c39) cell_scut_pane_g1

0xdb31,	// (0x0005bf55) cell_scut_pane_t1

0xdb40,	// (0x0005bf64) cell_scut_pane_t2

0xa81e,	// (0x00058c42) cell_scut_pane_t3

0x0002,

0xf9d0,	// (0x0005ddf4) cell_scut_pane_t

0x8792,	// (0x00056bb6) main_mup3_pane_g8_ParamLimits

0x8792,	// (0x00056bb6) main_mup3_pane_g8

0x9aa7,	// (0x00057ecb) area_vitu2_query_pane_ParamLimits

0x9aa7,	// (0x00057ecb) area_vitu2_query_pane

0xa580,	// (0x000589a4) input_focus_pane_cp08

0xdb4f,	// (0x0005bf73) area_vitu2_query_pane_g1

0xa82c,	// (0x00058c50) area_vitu2_query_pane_g2

0x0001,

0xf9d7,	// (0x0005ddfb) area_vitu2_query_pane_g

0xa83d,	// (0x00058c61) area_vitu2_query_pane_t1_ParamLimits

0xa83d,	// (0x00058c61) area_vitu2_query_pane_t1

0xa851,	// (0x00058c75) area_vitu2_query_pane_t2_ParamLimits

0xa851,	// (0x00058c75) area_vitu2_query_pane_t2

0xa865,	// (0x00058c89) area_vitu2_query_pane_t3_ParamLimits

0xa865,	// (0x00058c89) area_vitu2_query_pane_t3

0x0657,	// (0x0004ea7b) area_vitu2_query_pane_t4_ParamLimits

0x0657,	// (0x0004ea7b) area_vitu2_query_pane_t4

0x067f,	// (0x0004eaa3) area_vitu2_query_pane_t5_ParamLimits

0x067f,	// (0x0004eaa3) area_vitu2_query_pane_t5

0x06a7,	// (0x0004eacb) area_vitu2_query_pane_t6_ParamLimits

0x06a7,	// (0x0004eacb) area_vitu2_query_pane_t6

0x0006,

0xf9dc,	// (0x0005de00) area_vitu2_query_pane_t_ParamLimits

0xf9dc,	// (0x0005de00) area_vitu2_query_pane_t

0xa568,	// (0x0005898c) bg_button_pane_cp018

0xa88d,	// (0x00058cb1) bg_button_pane_cp021

0xa899,	// (0x00058cbd) bg_button_pane_cp022

0xa8bc,	// (0x00058ce0) input_focus_pane_cp09

0x71f1,	// (0x00055615) aid_size_touch_mv_arrow_left

0x721c,	// (0x00055640) aid_size_touch_mv_arrow_right

0xa08d,	// (0x000584b1) main_cset_slider_pane_g16_ParamLimits

0xa08d,	// (0x000584b1) main_cset_slider_pane_g16

0xa099,	// (0x000584bd) main_cset_slider_pane_g17_ParamLimits

0xa099,	// (0x000584bd) main_cset_slider_pane_g17

0xa7cf,	// (0x00058bf3) cell_cam4_burst_pane_g1_ParamLimits

0xe7c9,	// (0x0005cbed) compa_mode_pane

0xa2ba,	// (0x000586de) popup_vtel_slider_window_g3_ParamLimits

0xa2ba,	// (0x000586de) popup_vtel_slider_window_g3

0xa2ce,	// (0x000586f2) popup_vtel_slider_window_g4_ParamLimits

0xa2ce,	// (0x000586f2) popup_vtel_slider_window_g4

0xa2e2,	// (0x00058706) popup_vtel_slider_window_t1_ParamLimits

0xa2e2,	// (0x00058706) popup_vtel_slider_window_t1

0x50d5,	// (0x000534f9) main_cl_pane

0x7f5b,	// (0x0005637f) popup_imed_adjust2_window_ParamLimits

0x314b,	// (0x0005156f) bg_tb_trans_pane_cp05_ParamLimits

0x3be9,	// (0x0005200d) popup_imed_adjust2_window_g1_ParamLimits

0x3bf8,	// (0x0005201c) popup_imed_adjust2_window_g2_ParamLimits

0x3bf8,	// (0x0005201c) popup_imed_adjust2_window_g2

0x3c04,	// (0x00052028) popup_imed_adjust2_window_g3_ParamLimits

0x3c04,	// (0x00052028) popup_imed_adjust2_window_g3

0x0002,

0xf752,	// (0x0005db76) popup_imed_adjust2_window_g_ParamLimits

0xf752,	// (0x0005db76) popup_imed_adjust2_window_g

0x3c10,	// (0x00052034) popup_imed_adjust2_window_t1_ParamLimits

0x3c28,	// (0x0005204c) slider_imed_adjust_pane_ParamLimits

0x3c3c,	// (0x00052060) slider_imed_adjust_pane_g1_ParamLimits

0x3c4c,	// (0x00052070) slider_imed_adjust_pane_g2_ParamLimits

0x3c5c,	// (0x00052080) slider_imed_adjust_pane_g3_ParamLimits

0x3c6d,	// (0x00052091) slider_imed_adjust_pane_g4_ParamLimits

0xf759,	// (0x0005db7d) slider_imed_adjust_pane_g_ParamLimits

0x97ea,	// (0x00057c0e) aid_touch_area_cam4_ParamLimits

0x97ea,	// (0x00057c0e) aid_touch_area_cam4

0x97fa,	// (0x00057c1e) battery_pane_cp01

0x9881,	// (0x00057ca5) main_camera4_pane_g6_ParamLimits

0x9881,	// (0x00057ca5) main_camera4_pane_g6

0x989f,	// (0x00057cc3) main_camera4_pane_t2_ParamLimits

0x989f,	// (0x00057cc3) main_camera4_pane_t2

0x0001,

0xf85b,	// (0x0005dc7f) main_camera4_pane_t_ParamLimits

0xf85b,	// (0x0005dc7f) main_camera4_pane_t

0x9922,	// (0x00057d46) aid_touch_area_vid4_ParamLimits

0x9922,	// (0x00057d46) aid_touch_area_vid4

0x9962,	// (0x00057d86) main_video4_pane_g5_ParamLimits

0x9962,	// (0x00057d86) main_video4_pane_g5

0x9988,	// (0x00057dac) vid4_progress_pane_ParamLimits

0x9988,	// (0x00057dac) vid4_progress_pane

0xd83f,	// (0x0005bc63) main_cset_slider_pane_g18_ParamLimits

0xd83f,	// (0x0005bc63) main_cset_slider_pane_g18

0xda0d,	// (0x0005be31) cell_cam4_burst_pane_g2_ParamLimits

0xda0d,	// (0x0005be31) cell_cam4_burst_pane_g2

0x0001,

0xf9b0,	// (0x0005ddd4) cell_cam4_burst_pane_g_ParamLimits

0xf9b0,	// (0x0005ddd4) cell_cam4_burst_pane_g

0xa8cd,	// (0x00058cf1) bg_cl_pane_ParamLimits

0xa8cd,	// (0x00058cf1) bg_cl_pane

0xa8d9,	// (0x00058cfd) cl_header_pane_ParamLimits

0xa8d9,	// (0x00058cfd) cl_header_pane

0xa8e5,	// (0x00058d09) cl_listscroll_pane_ParamLimits

0xa8e5,	// (0x00058d09) cl_listscroll_pane

0xdb5b,	// (0x0005bf7f) bg_cl_pane_g1

0xdb63,	// (0x0005bf87) bg_cl_pane_g2

0xdb6b,	// (0x0005bf8f) bg_cl_pane_g3

0xdb73,	// (0x0005bf97) bg_cl_pane_g4

0xdb7b,	// (0x0005bf9f) bg_cl_pane_g5

0xdb83,	// (0x0005bfa7) bg_cl_pane_g6

0xdb8b,	// (0x0005bfaf) bg_cl_pane_g7

0xdb93,	// (0x0005bfb7) bg_cl_pane_g8

0xdb9b,	// (0x0005bfbf) bg_cl_pane_g9

0x0008,

0xf9eb,	// (0x0005de0f) bg_cl_pane_g

0xa8f1,	// (0x00058d15) aid_height_cl_leading_ParamLimits

0xa8f1,	// (0x00058d15) aid_height_cl_leading

0xa8fd,	// (0x00058d21) aid_height_cl_text_ParamLimits

0xa8fd,	// (0x00058d21) aid_height_cl_text

0xeef1,	// (0x0005d315) bg_cl_header_pane_ParamLimits

0xeef1,	// (0x0005d315) bg_cl_header_pane

0xa915,	// (0x00058d39) cl_header_pane_g1_ParamLimits

0xa915,	// (0x00058d39) cl_header_pane_g1

0xa922,	// (0x00058d46) cl_header_pane_t1_ParamLimits

0xa922,	// (0x00058d46) cl_header_pane_t1

0xdba3,	// (0x0005bfc7) cl_list_pane

0xd812,	// (0x0005bc36) hc_scroll_pane_cp01

0x1835,	// (0x0004fc59) bg_cl_header_pane_g1

0xd6f4,	// (0x0005bb18) bg_cl_header_pane_g2

0x1855,	// (0x0004fc79) bg_cl_header_pane_g3

0xd704,	// (0x0005bb28) bg_cl_header_pane_g4

0xd6fc,	// (0x0005bb20) bg_cl_header_pane_g5

0xd928,	// (0x0005bd4c) bg_cl_header_pane_g6

0xd71c,	// (0x0005bb40) bg_cl_header_pane_g7

0xd724,	// (0x0005bb48) bg_cl_header_pane_g8

0xd714,	// (0x0005bb38) bg_cl_header_pane_g9

0x0008,

0xf9fe,	// (0x0005de22) bg_cl_header_pane_g

0xa934,	// (0x00058d58) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa934,	// (0x00058d58) hc_cl_list_double_graphic_heading_pane

0xa944,	// (0x00058d68) hc_cl_list_single_graphic_pane_ParamLimits

0xa944,	// (0x00058d68) hc_cl_list_single_graphic_pane

0xa956,	// (0x00058d7a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa956,	// (0x00058d7a) hc_cl_list_single_graphic_pane_g1

0xa962,	// (0x00058d86) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa962,	// (0x00058d86) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa11,	// (0x0005de35) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa11,	// (0x0005de35) hc_cl_list_single_graphic_pane_g

0xa976,	// (0x00058d9a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa976,	// (0x00058d9a) hc_cl_list_single_graphic_pane_t1

0xa956,	// (0x00058d7a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa956,	// (0x00058d7a) hc_cl_list_double_graphic_heading_pane_g1

0xa98b,	// (0x00058daf) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa98b,	// (0x00058daf) hc_cl_list_double_graphic_heading_pane_g2

0xa99f,	// (0x00058dc3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa99f,	// (0x00058dc3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa16,	// (0x0005de3a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa16,	// (0x0005de3a) hc_cl_list_double_graphic_heading_pane_g

0xa9b3,	// (0x00058dd7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa9b3,	// (0x00058dd7) hc_cl_list_double_graphic_heading_pane_t1

0xa9c8,	// (0x00058dec) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa9c8,	// (0x00058dec) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa1d,	// (0x0005de41) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa1d,	// (0x0005de41) hc_cl_list_double_graphic_heading_pane_t

0xa9e5,	// (0x00058e09) vid4_progress_pane_g1

0xa9f5,	// (0x00058e19) vid4_progress_pane_g2

0xaa05,	// (0x00058e29) vid4_progress_pane_g3

0xaa17,	// (0x00058e3b) vid4_progress_pane_g4

0x0004,

0xfa22,	// (0x0005de46) vid4_progress_pane_g

0xaa35,	// (0x00058e59) vid4_progress_pane_t1

0xaa4f,	// (0x00058e73) vid4_progress_pane_t2

0x0002,

0xfa2d,	// (0x0005de51) vid4_progress_pane_t

0xaa7a,	// (0x00058e9e) wait_bar_pane_cp07

0x3532,	// (0x00051956) blid_firmament_pane_ParamLimits

0x3575,	// (0x00051999) popup_blid_sat_info2_window_g1

0x3599,	// (0x000519bd) popup_blid_sat_info2_window_t3

0x35a7,	// (0x000519cb) popup_blid_sat_info2_window_t4

0x35b5,	// (0x000519d9) popup_blid_sat_info2_window_t5

0x35c3,	// (0x000519e7) popup_blid_sat_info2_window_t6

0x35d3,	// (0x000519f7) popup_blid_sat_info2_window_t7

0x35e1,	// (0x00051a05) popup_blid_sat_info2_window_t8

0x35ef,	// (0x00051a13) popup_blid_sat_info2_window_t9

0x35fd,	// (0x00051a21) popup_blid_sat_info2_window_t10

0x36c4,	// (0x00051ae8) aid_firma_cardinal_ParamLimits

0x36d8,	// (0x00051afc) blid_firmament_pane_t1_ParamLimits

0x36ef,	// (0x00051b13) blid_firmament_pane_t2_ParamLimits

0x3706,	// (0x00051b2a) blid_firmament_pane_t3_ParamLimits

0x371d,	// (0x00051b41) blid_firmament_pane_t4_ParamLimits

0xf64b,	// (0x0005da6f) blid_firmament_pane_t_ParamLimits

0x3734,	// (0x00051b58) blid_sat_info_pane_ParamLimits

0x7eb1,	// (0x000562d5) main_cam_set_pane_ParamLimits

0x8e5c,	// (0x00057280) aid_size_cell_colour_35_ParamLimits

0x8e76,	// (0x0005729a) aid_size_cell_colour_112_ParamLimits

0x8e8d,	// (0x000572b1) aid_size_cell_effect_ParamLimits

0xe818,	// (0x0005cc3c) bg_tb_trans_pane_cp02_ParamLimits

0x311d,	// (0x00051541) heading_imed_pane_ParamLimits

0x8ea7,	// (0x000572cb) listscroll_imed_pane_ParamLimits

0x29ce,	// (0x00050df2) popup_call2_audio_first_window_g5_ParamLimits

0x29ce,	// (0x00050df2) popup_call2_audio_first_window_g5

0x94ca,	// (0x000578ee) aid_size_touch_image3_arrow_left_ParamLimits

0x94ca,	// (0x000578ee) aid_size_touch_image3_arrow_left

0x94e0,	// (0x00057904) aid_size_touch_image3_arrow_right_ParamLimits

0x94e0,	// (0x00057904) aid_size_touch_image3_arrow_right

0xaa65,	// (0x00058e89) vid4_progress_pane_t3

0x9022,	// (0x00057446) main_hwr_training_symbol_option_pane_ParamLimits

0x9022,	// (0x00057446) main_hwr_training_symbol_option_pane

0x3e2e,	// (0x00052252) popup_hwr_training_preview_window_ParamLimits

0x3e2e,	// (0x00052252) popup_hwr_training_preview_window

0x9083,	// (0x000574a7) hwr_training_navi_pane_g5_ParamLimits

0x9083,	// (0x000574a7) hwr_training_navi_pane_g5

0xd6e2,	// (0x0005bb06) popup_char_count_window

0x50bb,	// (0x000534df) bg_popup_sub_pane_cp20_ParamLimits

0xa3d5,	// (0x000587f9) list_vitu2_match_list_pane_ParamLimits

0xa3e1,	// (0x00058805) vitu2_page_scroll_pane_ParamLimits

0xa3e1,	// (0x00058805) vitu2_page_scroll_pane

0xdbac,	// (0x0005bfd0) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbac,	// (0x0005bfd0) list_single_hwr_training_symbol_option_pane

0xdbbf,	// (0x0005bfe3) list_single_hwr_training_symbol_option_pane_g1

0xdbc7,	// (0x0005bfeb) list_single_hwr_training_symbol_option_pane_t1

0xdbd5,	// (0x0005bff9) bg_button_pane_cp023

0xdbde,	// (0x0005c002) bg_button_pane_cp024

0xdc11,	// (0x0005c035) vitu2_page_scroll_pane_g1

0xdc19,	// (0x0005c03d) vitu2_page_scroll_pane_g2

0x0001,

0xfa34,	// (0x0005de58) vitu2_page_scroll_pane_g

0xdc21,	// (0x0005c045) vitu2_page_scroll_pane_t1

0xd5be,	// (0x0005b9e2) popup_char_count_window_g1

0xdc30,	// (0x0005c054) popup_char_count_window_g2

0xd5b5,	// (0x0005b9d9) popup_char_count_window_g3

0x0002,

0xfa39,	// (0x0005de5d) popup_char_count_window_g

0xdc39,	// (0x0005c05d) popup_char_count_window_t1

0x50d5,	// (0x000534f9) main_vded2_pane

0x3bd5,	// (0x00051ff9) aid_size_cell_imed_line

0x3bdf,	// (0x00052003) grid_imed_line_width_pane

0x99fc,	// (0x00057e20) vid4_indicators_pane_g4

0xdc47,	// (0x0005c06b) cell_imed_line_width_pane_ParamLimits

0xdc47,	// (0x0005c06b) cell_imed_line_width_pane

0xdc5d,	// (0x0005c081) cell_imed_line_width_pane_g1

0xdc66,	// (0x0005c08a) cell_imed_line_width_pane_g2

0x0001,

0xfa40,	// (0x0005de64) cell_imed_line_width_pane_g

0xaaa1,	// (0x00058ec5) main_vded2_pane_g1_ParamLimits

0xaaa1,	// (0x00058ec5) main_vded2_pane_g1

0xaab0,	// (0x00058ed4) main_vded2_pane_g2_ParamLimits

0xaab0,	// (0x00058ed4) main_vded2_pane_g2

0x0001,

0xfa45,	// (0x0005de69) main_vded2_pane_g_ParamLimits

0xfa45,	// (0x0005de69) main_vded2_pane_g

0xaabe,	// (0x00058ee2) vded2_slider_pane_ParamLimits

0xaabe,	// (0x00058ee2) vded2_slider_pane

0xaacb,	// (0x00058eef) aid_size_touch_vded2_end

0xaad5,	// (0x00058ef9) aid_size_touch_vded2_playhead

0xdc6e,	// (0x0005c092) aid_size_touch_vded2_start

0xdc76,	// (0x0005c09a) vded2_slider_bg_pane

0xdc7f,	// (0x0005c0a3) vded2_slider_pane_g1

0xdc88,	// (0x0005c0ac) vded2_slider_pane_g2

0xaadd,	// (0x00058f01) vded2_slider_pane_g3

0x0002,

0xfa4a,	// (0x0005de6e) vded2_slider_pane_g

0xd5c7,	// (0x0005b9eb) vded2_slider_bg_pane_g1

0xd5d0,	// (0x0005b9f4) vded2_slider_bg_pane_g2

0xd5d9,	// (0x0005b9fd) vded2_slider_bg_pane_g3

0x0002,

0xf716,	// (0x0005db3a) vded2_slider_bg_pane_g

0x7736,	// (0x00055b5a) aid_postcard_touch_down_pane_ParamLimits

0x7736,	// (0x00055b5a) aid_postcard_touch_down_pane

0x7746,	// (0x00055b6a) aid_postcard_touch_up_pane_ParamLimits

0x7746,	// (0x00055b6a) aid_postcard_touch_up_pane

0x50d5,	// (0x000534f9) main_blid2_pane

0x7eda,	// (0x000562fe) popup_blid2_search_window

0xe7c9,	// (0x0005cbed) blid2_gps_pane

0xe7c9,	// (0x0005cbed) blid2_navig_pane

0xe7c9,	// (0x0005cbed) blid2_search_pane

0xe7c9,	// (0x0005cbed) blid2_tripm_pane

0xaae6,	// (0x00058f0a) blid2_search_pane_g1_ParamLimits

0xaae6,	// (0x00058f0a) blid2_search_pane_g1

0xaaf2,	// (0x00058f16) blid2_search_pane_t1_ParamLimits

0xaaf2,	// (0x00058f16) blid2_search_pane_t1

0xab04,	// (0x00058f28) aid_size_cell_blid2_gps_ParamLimits

0xab04,	// (0x00058f28) aid_size_cell_blid2_gps

0xab14,	// (0x00058f38) blid2_gps_pane_g1_ParamLimits

0xab14,	// (0x00058f38) blid2_gps_pane_g1

0xab20,	// (0x00058f44) grid_blid2_satellite_pane_ParamLimits

0xab20,	// (0x00058f44) grid_blid2_satellite_pane

0xab2e,	// (0x00058f52) blid2_navig_pane_g1_ParamLimits

0xab2e,	// (0x00058f52) blid2_navig_pane_g1

0xab3a,	// (0x00058f5e) blid2_navig_pane_t1_ParamLimits

0xab3a,	// (0x00058f5e) blid2_navig_pane_t1

0xab4c,	// (0x00058f70) blid2_navig_pane_t2_ParamLimits

0xab4c,	// (0x00058f70) blid2_navig_pane_t2

0x0001,

0xfa51,	// (0x0005de75) blid2_navig_pane_t_ParamLimits

0xfa51,	// (0x0005de75) blid2_navig_pane_t

0xab5e,	// (0x00058f82) blid2_navig_ring_pane_ParamLimits

0xab5e,	// (0x00058f82) blid2_navig_ring_pane

0xab6e,	// (0x00058f92) blid2_speed_pane_ParamLimits

0xab6e,	// (0x00058f92) blid2_speed_pane

0xab7a,	// (0x00058f9e) blid2_tripm_pane_g1_ParamLimits

0xab7a,	// (0x00058f9e) blid2_tripm_pane_g1

0xab8a,	// (0x00058fae) blid2_tripm_pane_g2_ParamLimits

0xab8a,	// (0x00058fae) blid2_tripm_pane_g2

0xab96,	// (0x00058fba) blid2_tripm_pane_g3_ParamLimits

0xab96,	// (0x00058fba) blid2_tripm_pane_g3

0xaba2,	// (0x00058fc6) blid2_tripm_pane_g4_ParamLimits

0xaba2,	// (0x00058fc6) blid2_tripm_pane_g4

0xabae,	// (0x00058fd2) blid2_tripm_pane_g5_ParamLimits

0xabae,	// (0x00058fd2) blid2_tripm_pane_g5

0x0005,

0xfa56,	// (0x0005de7a) blid2_tripm_pane_g_ParamLimits

0xfa56,	// (0x0005de7a) blid2_tripm_pane_g

0xabca,	// (0x00058fee) blid2_tripm_pane_t1_ParamLimits

0xabca,	// (0x00058fee) blid2_tripm_pane_t1

0xabdc,	// (0x00059000) blid2_tripm_pane_t2_ParamLimits

0xabdc,	// (0x00059000) blid2_tripm_pane_t2

0xabee,	// (0x00059012) blid2_tripm_pane_t3_ParamLimits

0xabee,	// (0x00059012) blid2_tripm_pane_t3

0x0003,

0xfa63,	// (0x0005de87) blid2_tripm_pane_t_ParamLimits

0xfa63,	// (0x0005de87) blid2_tripm_pane_t

0xac20,	// (0x00059044) cell_blid2_satellite_pane_ParamLimits

0xac20,	// (0x00059044) cell_blid2_satellite_pane

0xac3e,	// (0x00059062) cell_blid2_satellite_pane_g1

0xdc90,	// (0x0005c0b4) cell_blid2_satellite_pane_t1

0x1640,	// (0x0004fa64) blid2_speed_pane_g1

0xdc9e,	// (0x0005c0c2) blid2_speed_pane_t1

0xdcac,	// (0x0005c0d0) blid2_speed_pane_t2

0x0001,

0xfa6c,	// (0x0005de90) blid2_speed_pane_t

0x1640,	// (0x0004fa64) blid2_navig_ring_pane_g1

0xac47,	// (0x0005906b) blid2_navig_ring_pane_g2

0xac4f,	// (0x00059073) blid2_navig_ring_pane_g3

0xac57,	// (0x0005907b) blid2_navig_ring_pane_g4

0xac5f,	// (0x00059083) blid2_navig_ring_pane_g5

0x0004,

0xfa71,	// (0x0005de95) blid2_navig_ring_pane_g

0xe7c9,	// (0x0005cbed) bg_popup_window_pane_cp011

0xdcba,	// (0x0005c0de) popup_blid2_search_window_g1

0xdcc2,	// (0x0005c0e6) popup_blid2_search_window_t1

0xdcd0,	// (0x0005c0f4) popup_blid2_search_window_t2

0x0001,

0xfa7c,	// (0x0005dea0) popup_blid2_search_window_t

0x1744,	// (0x0004fb68) main_browser_pane_g1

0xef71,	// (0x0005d395) main_browser_pane_ParamLimits

0x7eb1,	// (0x000562d5) bg_button_pane_cp011_ParamLimits

0x9ca0,	// (0x000580c4) cell_vitu2_function_pane_g1_ParamLimits

0x314b,	// (0x0005156f) bg_popup_sub_pane_cp22_ParamLimits

0xa580,	// (0x000589a4) input_focus_pane_cp08_ParamLimits

0xa59c,	// (0x000589c0) popup_vitu2_query_button_pane_ParamLimits

0xa59c,	// (0x000589c0) popup_vitu2_query_button_pane

0xa5ab,	// (0x000589cf) popup_vitu2_query_input_button_pane

0xd963,	// (0x0005bd87) popup_vitu2_query_window_g1_ParamLimits

0xa5b5,	// (0x000589d9) popup_vitu2_query_window_g2_ParamLimits

0xf984,	// (0x0005dda8) popup_vitu2_query_window_g_ParamLimits

0xe7c9,	// (0x0005cbed) bg_button_pane_cp026

0xac67,	// (0x0005908b) popup_vitu2_query_input_button_pane_g1

0xe7c9,	// (0x0005cbed) bg_button_pane_cp025

0xdcde,	// (0x0005c102) popup_vitu2_query_button_pane_t1

0x83f8,	// (0x0005681c) main_mp3_pane_t6

0x8408,	// (0x0005682c) popup_slider_window_cp01

0x98d7,	// (0x00057cfb) cam4_battery_pane

0x99b5,	// (0x00057dd9) cam4_battery_pane_cp02

0xa9dd,	// (0x00058e01) cam4_battery_pane_cp01

0xa9dd,	// (0x00058e01) cam4_battery_pane_cp03

0x3e9a,	// (0x000522be) cam4_battery_pane_g1

0x1640,	// (0x0004fa64) cam4_battery_pane_g2

0x0001,

0xfa81,	// (0x0005dea5) cam4_battery_pane_g

0x360b,	// (0x00051a2f) popup_blid_sat_info2_window_t11

0x71f1,	// (0x00055615) aid_size_touch_mv_arrow_left_ParamLimits

0x721c,	// (0x00055640) aid_size_touch_mv_arrow_right_ParamLimits

0x1ef6,	// (0x0005031a) navi_pane_g1_ParamLimits

0x725b,	// (0x0005567f) navi_pane_g2_ParamLimits

0x7289,	// (0x000556ad) navi_pane_g3_ParamLimits

0xf35f,	// (0x0005d783) navi_pane_g_ParamLimits

0x72e3,	// (0x00055707) navi_pane_mv_t1_ParamLimits

0x8eb3,	// (0x000572d7) grid_imed_effect_pane_ParamLimits

0x5dd1,	// (0x000541f5) aid_placing_vt_slider_lsc

0x168f,	// (0x0004fab3) aid_placing_vt_slider_prt

0xe818,	// (0x0005cc3c) bg_tb_trans_pane_cp01_ParamLimits

0x387f,	// (0x00051ca3) popup_image_details_window_g1_ParamLimits

0x3892,	// (0x00051cb6) popup_image_details_window_g2_ParamLimits

0x38a7,	// (0x00051ccb) popup_image_details_window_g3_ParamLimits

0x38a7,	// (0x00051ccb) popup_image_details_window_g3

0xf68b,	// (0x0005daaf) popup_image_details_window_g_ParamLimits

0x38bb,	// (0x00051cdf) popup_image_details_window_t1_ParamLimits

0x38cd,	// (0x00051cf1) popup_image_details_window_t2_ParamLimits

0x38e6,	// (0x00051d0a) popup_image_details_window_t3_ParamLimits

0x38fa,	// (0x00051d1e) popup_image_details_window_t4_ParamLimits

0x3915,	// (0x00051d39) popup_image_details_window_t5_ParamLimits

0xf692,	// (0x0005dab6) popup_image_details_window_t_ParamLimits

0xa909,	// (0x00058d2d) cl_header_name_pane_ParamLimits

0xa909,	// (0x00058d2d) cl_header_name_pane

0xac6f,	// (0x00059093) cl_header_name_pane_t1_ParamLimits

0xac6f,	// (0x00059093) cl_header_name_pane_t1

0xac86,	// (0x000590aa) cl_header_name_pane_t2_ParamLimits

0xac86,	// (0x000590aa) cl_header_name_pane_t2

0xacb0,	// (0x000590d4) cl_header_name_pane_t3_ParamLimits

0xacb0,	// (0x000590d4) cl_header_name_pane_t3

0x0002,

0xfa86,	// (0x0005deaa) cl_header_name_pane_t_ParamLimits

0xfa86,	// (0x0005deaa) cl_header_name_pane_t

0x72b4,	// (0x000556d8) navi_pane_mv_g2_ParamLimits

0xd6ca,	// (0x0005baee) field_vitu2_entry_pane_g1_ParamLimits

0xd6d6,	// (0x0005bafa) field_vitu2_entry_pane_g2_ParamLimits

0x3129,	// (0x0005154d) field_vitu2_entry_pane_g3_ParamLimits

0x3129,	// (0x0005154d) field_vitu2_entry_pane_g3

0xf88d,	// (0x0005dcb1) field_vitu2_entry_pane_g_ParamLimits

0x9c2e,	// (0x00058052) cell_vitu2_itu_pane_g1_ParamLimits

0x9c46,	// (0x0005806a) cell_vitu2_itu_pane_g2_ParamLimits

0x9c46,	// (0x0005806a) cell_vitu2_itu_pane_g2

0x0001,

0xf899,	// (0x0005dcbd) cell_vitu2_itu_pane_g_ParamLimits

0xf899,	// (0x0005dcbd) cell_vitu2_itu_pane_g

0x7eb1,	// (0x000562d5) bg_vkb2_func_pane_cp05_ParamLimits

0x7eb1,	// (0x000562d5) bg_vkb2_func_pane_cp05

0x7eb1,	// (0x000562d5) bg_vkb2_func_pane_cp03

0x7eb1,	// (0x000562d5) bg_vkb2_func_pane_cp04

0x7eb1,	// (0x000562d5) bg_vkb2_func_pane_cp10_ParamLimits

0x7eb1,	// (0x000562d5) bg_vkb2_func_pane_cp10

0xa8aa,	// (0x00058cce) bg_vkb2_func_pane_cp08

0xa568,	// (0x0005898c) bg_vkb2_func_pane_cp06

0xa88d,	// (0x00058cb1) bg_vkb2_func_pane_cp07

0xdbe7,	// (0x0005c00b) bg_vkb2_func_pane_cp11_ParamLimits

0xdbe7,	// (0x0005c00b) bg_vkb2_func_pane_cp11

0xdbfc,	// (0x0005c020) bg_vkb2_func_pane_cp12_ParamLimits

0xdbfc,	// (0x0005c020) bg_vkb2_func_pane_cp12

0xe7c9,	// (0x0005cbed) bg_vkb2_func_pane_cp09

0xd6f4,	// (0x0005bb18) bg_vkb2_func_pane_g1

0x1855,	// (0x0004fc79) bg_vkb2_func_pane_g2

0xd6fc,	// (0x0005bb20) bg_vkb2_func_pane_g3

0xd704,	// (0x0005bb28) bg_vkb2_func_pane_g4

0xd928,	// (0x0005bd4c) bg_vkb2_func_pane_g5

0xd71c,	// (0x0005bb40) bg_vkb2_func_pane_g6

0xd724,	// (0x0005bb48) bg_vkb2_func_pane_g7

0xd714,	// (0x0005bb38) bg_vkb2_func_pane_g8

0x1835,	// (0x0004fc59) bg_vkb2_func_pane_g9

0x0008,

0xfa8d,	// (0x0005deb1) bg_vkb2_func_pane_g

0xabbc,	// (0x00058fe0) blid2_tripm_pane_g6_ParamLimits

0xabbc,	// (0x00058fe0) blid2_tripm_pane_g6

0xd608,	// (0x0005ba2c) mp4_progress_pane_g1

0xac14,	// (0x00059038) blid2_tripm_values_pane_ParamLimits

0xac14,	// (0x00059038) blid2_tripm_values_pane

0xacd5,	// (0x000590f9) blid2_tripm_values_pane_t1

0xace3,	// (0x00059107) blid2_tripm_values_pane_t2

0xacf1,	// (0x00059115) blid2_tripm_values_pane_t3

0xacff,	// (0x00059123) blid2_tripm_values_pane_t4

0xad0d,	// (0x00059131) blid2_tripm_values_pane_t5

0xad1b,	// (0x0005913f) blid2_tripm_values_pane_t6

0xad29,	// (0x0005914d) blid2_tripm_values_pane_t7

0xad37,	// (0x0005915b) blid2_tripm_values_pane_t8

0xad45,	// (0x00059169) blid2_tripm_values_pane_t9

0x0008,

0xfaa0,	// (0x0005dec4) blid2_tripm_values_pane_t

0x5e0f,	// (0x00054233) call_video_pane_t1_ParamLimits

0x5e2c,	// (0x00054250) call_video_pane_t2_ParamLimits

0xf208,	// (0x0005d62c) call_video_pane_t_ParamLimits

0x75f0,	// (0x00055a14) msg_header_pane_g1_ParamLimits

0x20f6,	// (0x0005051a) msg_header_pane_g2_ParamLimits

0x20f6,	// (0x0005051a) msg_header_pane_g2

0x0001,

0xf402,	// (0x0005d826) msg_header_pane_g_ParamLimits

0xf402,	// (0x0005d826) msg_header_pane_g

0xef71,	// (0x0005d395) main_clock2_pane_ParamLimits

0x8c2c,	// (0x00057050) grid_clock2_toolbar_pane_ParamLimits

0x8c2c,	// (0x00057050) grid_clock2_toolbar_pane

0x8c2c,	// (0x00057050) listscroll_clock2_pane_ParamLimits

0x8c2c,	// (0x00057050) listscroll_clock2_pane

0x8cdb,	// (0x000570ff) main_clock2_pane_t3_ParamLimits

0x8cdb,	// (0x000570ff) main_clock2_pane_t3

0x8ced,	// (0x00057111) main_clock2_pane_t4_ParamLimits

0x8ced,	// (0x00057111) main_clock2_pane_t4

0xdcec,	// (0x0005c110) cell_clock2_toolbar_pane

0xdcf4,	// (0x0005c118) cell_clock2_toolbar_pane_cp01

0xdcf4,	// (0x0005c118) cell_clock2_toolbar_pane_cp02

0xdcfc,	// (0x0005c120) cell_clock2_toolbar_pane_cp03

0xdd04,	// (0x0005c128) list_clock2_pane

0x1e5c,	// (0x00050280) scroll_pane_cp10

0xdd0c,	// (0x0005c130) list_single_clock2_pane_ParamLimits

0xdd0c,	// (0x0005c130) list_single_clock2_pane

0x160a,	// (0x0004fa2e) list_highlight_pane_cp08

0xdd19,	// (0x0005c13d) list_single_clock2_pane_t1

0xdd27,	// (0x0005c14b) list_single_clock2_pane_t2

0x0001,

0xfab3,	// (0x0005ded7) list_single_clock2_pane_t

0xe7c9,	// (0x0005cbed) bg_button_pane_cp10

0xdd35,	// (0x0005c159) cell_clock2_toolbar_pane_g1

0x7698,	// (0x00055abc) aid_main_viewer_pane_g1_ParamLimits

0x7698,	// (0x00055abc) aid_main_viewer_pane_g1

0x76a4,	// (0x00055ac8) aid_main_viewer_pane_g2_ParamLimits

0x76a4,	// (0x00055ac8) aid_main_viewer_pane_g2

0x76b0,	// (0x00055ad4) aid_main_viewer_pane_g3_ParamLimits

0x76b0,	// (0x00055ad4) aid_main_viewer_pane_g3

0x76c1,	// (0x00055ae5) aid_main_viewer_pane_g4_ParamLimits

0x76c1,	// (0x00055ae5) aid_main_viewer_pane_g4

0x0003,

0xf413,	// (0x0005d837) aid_main_viewer_pane_g_ParamLimits

0xf413,	// (0x0005d837) aid_main_viewer_pane_g

0x7e92,	// (0x000562b6) main_calc_pane_ParamLimits

0x7ebf,	// (0x000562e3) main_dialer2_pane_ParamLimits

0x50d5,	// (0x000534f9) main_cam6_pane

0x50d5,	// (0x000534f9) main_vid6_pane

0x8c38,	// (0x0005705c) listscroll_gen_pane_cp06_ParamLimits

0x8c38,	// (0x0005705c) listscroll_gen_pane_cp06

0x8cff,	// (0x00057123) main_clock2_pane_t5_ParamLimits

0x8cff,	// (0x00057123) main_clock2_pane_t5

0x8d4c,	// (0x00057170) aid_call2_pane_cp10_ParamLimits

0x8d5e,	// (0x00057182) aid_call_pane_cp10_ParamLimits

0x1ecb,	// (0x000502ef) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1ecb,	// (0x000502ef) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8d70,	// (0x00057194) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8d70,	// (0x00057194) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1ecb,	// (0x000502ef) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf747,	// (0x0005db6b) popup_clock_analogue_window_cp10_g_ParamLimits

0x8d86,	// (0x000571aa) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9477,	// (0x0005789b) cell_dialer2_keypad_pane_g2_ParamLimits

0x9477,	// (0x0005789b) cell_dialer2_keypad_pane_g2

0x0001,

0xf82c,	// (0x0005dc50) cell_dialer2_keypad_pane_g_ParamLimits

0xf82c,	// (0x0005dc50) cell_dialer2_keypad_pane_g

0x9493,	// (0x000578b7) cell_dialer2_keypad_pane_t1

0x9f82,	// (0x000583a6) main_cset_text2_pane_ParamLimits

0x9f82,	// (0x000583a6) main_cset_text2_pane

0xdb4f,	// (0x0005bf73) area_vitu2_query_pane_g1_ParamLimits

0xa82c,	// (0x00058c50) area_vitu2_query_pane_g2_ParamLimits

0xf9d7,	// (0x0005ddfb) area_vitu2_query_pane_g_ParamLimits

0x06cf,	// (0x0004eaf3) area_vitu2_query_pane_t7_ParamLimits

0x06cf,	// (0x0004eaf3) area_vitu2_query_pane_t7

0xa568,	// (0x0005898c) bg_button_pane_cp018_ParamLimits

0xa88d,	// (0x00058cb1) bg_button_pane_cp021_ParamLimits

0xa899,	// (0x00058cbd) bg_button_pane_cp022_ParamLimits

0xa8aa,	// (0x00058cce) bg_vkb2_func_pane_cp08_ParamLimits

0xa568,	// (0x0005898c) bg_vkb2_func_pane_cp06_ParamLimits

0xa88d,	// (0x00058cb1) bg_vkb2_func_pane_cp07_ParamLimits

0xa8bc,	// (0x00058ce0) input_focus_pane_cp09_ParamLimits

0xad53,	// (0x00059177) cam6_autofocus_pane_ParamLimits

0xad53,	// (0x00059177) cam6_autofocus_pane

0xad75,	// (0x00059199) cam6_image_uncrop_pane_ParamLimits

0xad75,	// (0x00059199) cam6_image_uncrop_pane

0xada2,	// (0x000591c6) cam6_indi_pane_ParamLimits

0xada2,	// (0x000591c6) cam6_indi_pane

0xadbc,	// (0x000591e0) cam6_mode_pane_ParamLimits

0xadbc,	// (0x000591e0) cam6_mode_pane

0xadd0,	// (0x000591f4) cam6_timer_pane_ParamLimits

0xadd0,	// (0x000591f4) cam6_timer_pane

0xaddc,	// (0x00059200) cam6_zoom_pane_ParamLimits

0xaddc,	// (0x00059200) cam6_zoom_pane

0xadf8,	// (0x0005921c) cam6_mode_pane_g1_ParamLimits

0xadf8,	// (0x0005921c) cam6_mode_pane_g1

0xae04,	// (0x00059228) cam6_mode_pane_g2_ParamLimits

0xae04,	// (0x00059228) cam6_mode_pane_g2

0xae10,	// (0x00059234) cam6_mode_pane_g3_ParamLimits

0xae10,	// (0x00059234) cam6_mode_pane_g3

0xae1c,	// (0x00059240) cam6_mode_pane_g4_ParamLimits

0xae1c,	// (0x00059240) cam6_mode_pane_g4

0x0003,

0xfab8,	// (0x0005dedc) cam6_mode_pane_g_ParamLimits

0xfab8,	// (0x0005dedc) cam6_mode_pane_g

0x33e5,	// (0x00051809) bg_tb_trans_pane_cp08_ParamLimits

0x33e5,	// (0x00051809) bg_tb_trans_pane_cp08

0xdd3d,	// (0x0005c161) cam6_battery_pane_ParamLimits

0xdd3d,	// (0x0005c161) cam6_battery_pane

0xdd53,	// (0x0005c177) cam6_indi_pane_g1_ParamLimits

0xdd53,	// (0x0005c177) cam6_indi_pane_g1

0xdd65,	// (0x0005c189) cam6_indi_pane_g2_ParamLimits

0xdd65,	// (0x0005c189) cam6_indi_pane_g2

0xdd77,	// (0x0005c19b) cam6_indi_pane_g3_ParamLimits

0xdd77,	// (0x0005c19b) cam6_indi_pane_g3

0x0002,

0xfac1,	// (0x0005dee5) cam6_indi_pane_g_ParamLimits

0xfac1,	// (0x0005dee5) cam6_indi_pane_g

0xdd89,	// (0x0005c1ad) cam6_indi_pane_t1_ParamLimits

0xdd89,	// (0x0005c1ad) cam6_indi_pane_t1

0x9a39,	// (0x00057e5d) cam6_autofocus_pane_g1

0x9a31,	// (0x00057e55) cam6_autofocus_pane_g2

0x9a49,	// (0x00057e6d) cam6_autofocus_pane_g3

0x9a41,	// (0x00057e65) cam6_autofocus_pane_g4

0x0003,

0xfac8,	// (0x0005deec) cam6_autofocus_pane_g

0xddaf,	// (0x0005c1d3) cam6_timer_pane_g1

0xddb7,	// (0x0005c1db) cam6_timer_pane_t1

0xddc5,	// (0x0005c1e9) cam6_zoom_cont_pane

0xddcd,	// (0x0005c1f1) cam6_zoom_pane_g1

0xddd5,	// (0x0005c1f9) cam6_zoom_pane_g2

0xae28,	// (0x0005924c) cam6_zoom_pane_g3

0x0002,

0xfad1,	// (0x0005def5) cam6_zoom_pane_g

0x1640,	// (0x0004fa64) cam6_battery_pane_g1

0x1640,	// (0x0004fa64) cam6_battery_pane_g2

0x0001,

0xf3c3,	// (0x0005d7e7) cam6_battery_pane_g

0xdddd,	// (0x0005c201) cam6_zoom_cont_pane_g1

0xdde6,	// (0x0005c20a) cam6_zoom_cont_pane_g2

0xddef,	// (0x0005c213) cam6_zoom_cont_pane_g3

0x0002,

0xfad8,	// (0x0005defc) cam6_zoom_cont_pane_g

0xae45,	// (0x00059269) cam6_mode_pane_cp_ParamLimits

0xae45,	// (0x00059269) cam6_mode_pane_cp

0xae59,	// (0x0005927d) cam6_zoom_pane_cp_ParamLimits

0xae59,	// (0x0005927d) cam6_zoom_pane_cp

0xae75,	// (0x00059299) vid6_image_uncrop_cif_pane_ParamLimits

0xae75,	// (0x00059299) vid6_image_uncrop_cif_pane

0xaea1,	// (0x000592c5) vid6_image_uncrop_nhd_pane_ParamLimits

0xaea1,	// (0x000592c5) vid6_image_uncrop_nhd_pane

0xaec0,	// (0x000592e4) vid6_image_uncrop_vga_pane_ParamLimits

0xaec0,	// (0x000592e4) vid6_image_uncrop_vga_pane

0xaedf,	// (0x00059303) vid6_image_uncrop_wvga_pane_ParamLimits

0xaedf,	// (0x00059303) vid6_image_uncrop_wvga_pane

0xaefe,	// (0x00059322) vid6_indi_pane_ParamLimits

0xaefe,	// (0x00059322) vid6_indi_pane

0x33e5,	// (0x00051809) bg_tb_trans_pane_cp09_ParamLimits

0x33e5,	// (0x00051809) bg_tb_trans_pane_cp09

0xde07,	// (0x0005c22b) cam6_battery_pane_cp_ParamLimits

0xde07,	// (0x0005c22b) cam6_battery_pane_cp

0xde13,	// (0x0005c237) vid6_indi_pane_g1_ParamLimits

0xde13,	// (0x0005c237) vid6_indi_pane_g1

0xde25,	// (0x0005c249) vid6_indi_pane_g2_ParamLimits

0xde25,	// (0x0005c249) vid6_indi_pane_g2

0xde37,	// (0x0005c25b) vid6_indi_pane_g3_ParamLimits

0xde37,	// (0x0005c25b) vid6_indi_pane_g3

0xde4e,	// (0x0005c272) vid6_indi_pane_g4_ParamLimits

0xde4e,	// (0x0005c272) vid6_indi_pane_g4

0xde65,	// (0x0005c289) vid6_indi_pane_g5_ParamLimits

0xde65,	// (0x0005c289) vid6_indi_pane_g5

0x0004,

0xfadf,	// (0x0005df03) vid6_indi_pane_g_ParamLimits

0xfadf,	// (0x0005df03) vid6_indi_pane_g

0xde7f,	// (0x0005c2a3) vid6_indi_pane_t1_ParamLimits

0xde7f,	// (0x0005c2a3) vid6_indi_pane_t1

0xde95,	// (0x0005c2b9) vid6_indi_pane_t2_ParamLimits

0xde95,	// (0x0005c2b9) vid6_indi_pane_t2

0xdebd,	// (0x0005c2e1) vid6_indi_pane_t3_ParamLimits

0xdebd,	// (0x0005c2e1) vid6_indi_pane_t3

0xdee5,	// (0x0005c309) vid6_indi_pane_t4_ParamLimits

0xdee5,	// (0x0005c309) vid6_indi_pane_t4

0x0003,

0xfaea,	// (0x0005df0e) vid6_indi_pane_t_ParamLimits

0xfaea,	// (0x0005df0e) vid6_indi_pane_t

0xdf09,	// (0x0005c32d) wait_bar_pane_cp08

0xaf23,	// (0x00059347) main_cset_text2_pane_t1_ParamLimits

0xaf23,	// (0x00059347) main_cset_text2_pane_t1

0xae30,	// (0x00059254) listscroll_gen_pane_cp06_t1_ParamLimits

0xae30,	// (0x00059254) listscroll_gen_pane_cp06_t1

0x50d5,	// (0x000534f9) main_cam6_set_pane

0xd6a5,	// (0x0005bac9) bg_tb_trans_pane_cp06_ParamLimits

0x98df,	// (0x00057d03) cam4_indicators_pane_g1_ParamLimits

0x98f0,	// (0x00057d14) cam4_indicators_pane_g2_ParamLimits

0xf869,	// (0x0005dc8d) cam4_indicators_pane_g_ParamLimits

0x9908,	// (0x00057d2c) cam4_indicators_pane_t1_ParamLimits

0x7eb1,	// (0x000562d5) bg_tb_trans_pane_cp07_ParamLimits

0x99bf,	// (0x00057de3) vid4_indicators_pane_g1_ParamLimits

0x99d5,	// (0x00057df9) vid4_indicators_pane_g2_ParamLimits

0x99e9,	// (0x00057e0d) vid4_indicators_pane_g3_ParamLimits

0x99fc,	// (0x00057e20) vid4_indicators_pane_g4_ParamLimits

0xf87b,	// (0x0005dc9f) vid4_indicators_pane_g_ParamLimits

0x9a1a,	// (0x00057e3e) vid4_indicators_pane_t1_ParamLimits

0xa9e5,	// (0x00058e09) vid4_progress_pane_g1_ParamLimits

0xa9f5,	// (0x00058e19) vid4_progress_pane_g2_ParamLimits

0xaa05,	// (0x00058e29) vid4_progress_pane_g3_ParamLimits

0xaa17,	// (0x00058e3b) vid4_progress_pane_g4_ParamLimits

0xfa22,	// (0x0005de46) vid4_progress_pane_g_ParamLimits

0xaa35,	// (0x00058e59) vid4_progress_pane_t1_ParamLimits

0xaa4f,	// (0x00058e73) vid4_progress_pane_t2_ParamLimits

0xaa65,	// (0x00058e89) vid4_progress_pane_t3_ParamLimits

0xfa2d,	// (0x0005de51) vid4_progress_pane_t_ParamLimits

0xaa7a,	// (0x00058e9e) wait_bar_pane_cp07_ParamLimits

0xaf4a,	// (0x0005936e) main_cam6_set_pane_g2_ParamLimits

0xaf4a,	// (0x0005936e) main_cam6_set_pane_g2

0xaf56,	// (0x0005937a) main_cset6_listscroll_pane_ParamLimits

0xaf56,	// (0x0005937a) main_cset6_listscroll_pane

0xaf83,	// (0x000593a7) main_cset6_slider_pane_ParamLimits

0xaf83,	// (0x000593a7) main_cset6_slider_pane

0xaf8f,	// (0x000593b3) main_cset6_text2_pane_ParamLimits

0xaf8f,	// (0x000593b3) main_cset6_text2_pane

0xdf18,	// (0x0005c33c) main_cset6_text_pane

0xdf20,	// (0x0005c344) main_cset_list_pane_copy1_ParamLimits

0xdf20,	// (0x0005c344) main_cset_list_pane_copy1

0xdf30,	// (0x0005c354) scroll_pane_cp028_copy1

0xafa2,	// (0x000593c6) cset_list_set_pane_copy1

0xafb2,	// (0x000593d6) aid_position_infowindow_above_copy1

0xafba,	// (0x000593de) aid_position_infowindow_below_copy1

0xafc2,	// (0x000593e6) cset_list_set_pane_g1_copy1

0xafca,	// (0x000593ee) cset_list_set_pane_g3_copy1_ParamLimits

0xafca,	// (0x000593ee) cset_list_set_pane_g3_copy1

0xafd9,	// (0x000593fd) cset_list_set_pane_t1_copy1_ParamLimits

0xafd9,	// (0x000593fd) cset_list_set_pane_t1_copy1

0xe818,	// (0x0005cc3c) list_highlight_pane_cp021_copy1_ParamLimits

0xe818,	// (0x0005cc3c) list_highlight_pane_cp021_copy1

0xdf39,	// (0x0005c35d) cset6_slider_pane_ParamLimits

0xdf39,	// (0x0005c35d) cset6_slider_pane

0xdf65,	// (0x0005c389) main_cset6_slider_pane_g1_ParamLimits

0xdf65,	// (0x0005c389) main_cset6_slider_pane_g1

0xafee,	// (0x00059412) main_cset6_slider_pane_g2_ParamLimits

0xafee,	// (0x00059412) main_cset6_slider_pane_g2

0xdf8d,	// (0x0005c3b1) main_cset6_slider_pane_g3_ParamLimits

0xdf8d,	// (0x0005c3b1) main_cset6_slider_pane_g3

0xb016,	// (0x0005943a) main_cset6_slider_pane_g4_ParamLimits

0xb016,	// (0x0005943a) main_cset6_slider_pane_g4

0xb022,	// (0x00059446) main_cset6_slider_pane_g5_ParamLimits

0xb022,	// (0x00059446) main_cset6_slider_pane_g5

0xd827,	// (0x0005bc4b) main_cset6_slider_pane_g7_ParamLimits

0xd827,	// (0x0005bc4b) main_cset6_slider_pane_g7

0xd833,	// (0x0005bc57) main_cset6_slider_pane_g8_ParamLimits

0xd833,	// (0x0005bc57) main_cset6_slider_pane_g8

0xb02e,	// (0x00059452) main_cset6_slider_pane_g9_ParamLimits

0xb02e,	// (0x00059452) main_cset6_slider_pane_g9

0xb03a,	// (0x0005945e) main_cset6_slider_pane_g10_ParamLimits

0xb03a,	// (0x0005945e) main_cset6_slider_pane_g10

0xb046,	// (0x0005946a) main_cset6_slider_pane_g11_ParamLimits

0xb046,	// (0x0005946a) main_cset6_slider_pane_g11

0xb052,	// (0x00059476) main_cset6_slider_pane_g12_ParamLimits

0xb052,	// (0x00059476) main_cset6_slider_pane_g12

0xb05e,	// (0x00059482) main_cset6_slider_pane_g13_ParamLimits

0xb05e,	// (0x00059482) main_cset6_slider_pane_g13

0xb06a,	// (0x0005948e) main_cset6_slider_pane_g14_ParamLimits

0xb06a,	// (0x0005948e) main_cset6_slider_pane_g14

0xb076,	// (0x0005949a) main_cset6_slider_pane_g15_ParamLimits

0xb076,	// (0x0005949a) main_cset6_slider_pane_g15

0xb08e,	// (0x000594b2) main_cset6_slider_pane_g16_ParamLimits

0xb08e,	// (0x000594b2) main_cset6_slider_pane_g16

0xb09a,	// (0x000594be) main_cset6_slider_pane_g17_ParamLimits

0xb09a,	// (0x000594be) main_cset6_slider_pane_g17

0x0011,

0xfaf3,	// (0x0005df17) main_cset6_slider_pane_g_ParamLimits

0xfaf3,	// (0x0005df17) main_cset6_slider_pane_g

0xdf99,	// (0x0005c3bd) main_cset6_slider_pane_t1_ParamLimits

0xdf99,	// (0x0005c3bd) main_cset6_slider_pane_t1

0xb0be,	// (0x000594e2) main_cset6_slider_pane_t2_ParamLimits

0xb0be,	// (0x000594e2) main_cset6_slider_pane_t2

0xb0e9,	// (0x0005950d) main_cset6_slider_pane_t3_ParamLimits

0xb0e9,	// (0x0005950d) main_cset6_slider_pane_t3

0xb114,	// (0x00059538) main_cset6_slider_pane_t4_ParamLimits

0xb114,	// (0x00059538) main_cset6_slider_pane_t4

0xb13f,	// (0x00059563) main_cset6_slider_pane_t5_ParamLimits

0xb13f,	// (0x00059563) main_cset6_slider_pane_t5

0xdfda,	// (0x0005c3fe) main_cset6_slider_pane_t7_ParamLimits

0xdfda,	// (0x0005c3fe) main_cset6_slider_pane_t7

0xb16a,	// (0x0005958e) main_cset6_slider_pane_t8_ParamLimits

0xb16a,	// (0x0005958e) main_cset6_slider_pane_t8

0xb18e,	// (0x000595b2) main_cset6_slider_pane_t9_ParamLimits

0xb18e,	// (0x000595b2) main_cset6_slider_pane_t9

0xb1b2,	// (0x000595d6) main_cset6_slider_pane_t10_ParamLimits

0xb1b2,	// (0x000595d6) main_cset6_slider_pane_t10

0xb1d6,	// (0x000595fa) main_cset6_slider_pane_t11_ParamLimits

0xb1d6,	// (0x000595fa) main_cset6_slider_pane_t11

0xe010,	// (0x0005c434) main_cset6_slider_pane_t14_ParamLimits

0xe010,	// (0x0005c434) main_cset6_slider_pane_t14

0xe049,	// (0x0005c46d) main_cset6_slider_pane_t15_ParamLimits

0xe049,	// (0x0005c46d) main_cset6_slider_pane_t15

0x000b,

0xfb18,	// (0x0005df3c) main_cset6_slider_pane_t_ParamLimits

0xfb18,	// (0x0005df3c) main_cset6_slider_pane_t

0xe082,	// (0x0005c4a6) cset_slider_pane_g1_copy1

0xe08b,	// (0x0005c4af) cset_slider_pane_g2_copy1

0xe094,	// (0x0005c4b8) cset_slider_pane_g3_copy1

0xe7c9,	// (0x0005cbed) bg_popup_sub_pane_cp011_copy1

0xe0a6,	// (0x0005c4ca) main_cset_text_pane_g1_copy1

0xd977,	// (0x0005bd9b) main_cset_text_pane_t1_copy1

0xd985,	// (0x0005bda9) main_cset_text_pane_t2_copy1

0xd993,	// (0x0005bdb7) main_cset_text_pane_t3_copy1

0xd9a1,	// (0x0005bdc5) main_cset_text_pane_t4_copy1

0xd9af,	// (0x0005bdd3) main_cset_text_pane_t5_copy1

0xe0ae,	// (0x0005c4d2) main_cset_text_pane_t6_copy1

0xe0bc,	// (0x0005c4e0) main_cset_text_pane_t7_copy1

0xb217,	// (0x0005963b) main_cset_text2_pane_t1_copy1

0x7eb1,	// (0x000562d5) main_ncimui_pane

0x7f18,	// (0x0005633c) popup_query_ncimui_window_ParamLimits

0x7f18,	// (0x0005633c) popup_query_ncimui_window

0x01f5,	// (0x0004e619) field_cale_ev2_pane_g4_ParamLimits

0x01f5,	// (0x0004e619) field_cale_ev2_pane_g4

0x914f,	// (0x00057573) cell_video_dialer_keypad_pane_g2_ParamLimits

0x914f,	// (0x00057573) cell_video_dialer_keypad_pane_g2

0x0001,

0xf803,	// (0x0005dc27) cell_video_dialer_keypad_pane_g_ParamLimits

0xf803,	// (0x0005dc27) cell_video_dialer_keypad_pane_g

0x9167,	// (0x0005758b) cell_video_dialer_keypad_pane_t1

0xe7c9,	// (0x0005cbed) bg_popup_window_pane_cp012

0x325d,	// (0x00051681) heading_pane_cp06

0xe0f4,	// (0x0005c518) ncim_query_content_pane

0xe7c9,	// (0x0005cbed) bg_popup_heading_pane_cp01

0xe0fc,	// (0x0005c520) ncim_heading_pane_t1

0xe10a,	// (0x0005c52e) ncim_indicator_popup_pane

0xe11c,	// (0x0005c540) ncim_query_button_pane

0xe132,	// (0x0005c556) ncim_query_content_pane_t1

0xe144,	// (0x0005c568) ncim_query_content_pane_t2

0x0005,

0xfb5c,	// (0x0005df80) ncim_query_content_pane_t

0xe17e,	// (0x0005c5a2) ncim_query_list_pane

0xe190,	// (0x0005c5b4) ncim_query_popup_pane

0xe10a,	// (0x0005c52e) ncim_indicator_popup_pane_ParamLimits

0xb373,	// (0x00059797) ncim_query_content_pane_g1_ParamLimits

0xb373,	// (0x00059797) ncim_query_content_pane_g1

0xe132,	// (0x0005c556) ncim_query_content_pane_t1_ParamLimits

0xe144,	// (0x0005c568) ncim_query_content_pane_t2_ParamLimits

0xb37f,	// (0x000597a3) ncim_query_content_pane_t3_ParamLimits

0xb37f,	// (0x000597a3) ncim_query_content_pane_t3

0xb39c,	// (0x000597c0) ncim_query_content_pane_t4_ParamLimits

0xb39c,	// (0x000597c0) ncim_query_content_pane_t4

0xb3b9,	// (0x000597dd) ncim_query_content_pane_t5_ParamLimits

0xb3b9,	// (0x000597dd) ncim_query_content_pane_t5

0xe156,	// (0x0005c57a) ncim_query_content_pane_t6_ParamLimits

0xe156,	// (0x0005c57a) ncim_query_content_pane_t6

0xfb5c,	// (0x0005df80) ncim_query_content_pane_t_ParamLimits

0xe17e,	// (0x0005c5a2) ncim_query_list_pane_ParamLimits

0xe190,	// (0x0005c5b4) ncim_query_popup_pane_ParamLimits

0xe1a4,	// (0x0005c5c8) wait_bar_pane_cp04

0xe7c9,	// (0x0005cbed) input_focus_pane_cp011

0xe1ac,	// (0x0005c5d0) ncim_query_popup_pane_t1

0xe1ba,	// (0x0005c5de) ncim_list_query_list_pane_ParamLimits

0xe1ba,	// (0x0005c5de) ncim_list_query_list_pane

0xe7c9,	// (0x0005cbed) bg_button_pane_cp027

0xe1cd,	// (0x0005c5f1) ncim_query_button_pane_g1

0xe7c9,	// (0x0005cbed) list_highlight_pane_cp012

0xe1d7,	// (0x0005c5fb) ncim_list_query_list_pane_g1

0xe1df,	// (0x0005c603) ncim_list_query_list_pane_t1

0x98fc,	// (0x00057d20) cam4_indicators_pane_g3_ParamLimits

0x98fc,	// (0x00057d20) cam4_indicators_pane_g3

0x9a08,	// (0x00057e2c) vid4_indicators_pane_g5_ParamLimits

0x9a08,	// (0x00057e2c) vid4_indicators_pane_g5

0xaa26,	// (0x00058e4a) vid4_progress_pane_g5_ParamLimits

0xaa26,	// (0x00058e4a) vid4_progress_pane_g5

0xb249,	// (0x0005966d) main_ncimui_pane_g1

0xb2b5,	// (0x000596d9) ncimui_group_query_pane_ParamLimits

0xb2b5,	// (0x000596d9) ncimui_group_query_pane

0xb30f,	// (0x00059733) ncimui_list_pane_ParamLimits

0xb30f,	// (0x00059733) ncimui_list_pane

0xb336,	// (0x0005975a) ncimui_text_pane_ParamLimits

0xb336,	// (0x0005975a) ncimui_text_pane

0xb3d6,	// (0x000597fa) ncimui_text_pane_t1_ParamLimits

0xb3d6,	// (0x000597fa) ncimui_text_pane_t1

0xe1ed,	// (0x0005c611) ncimui_list_single_graphic_pane_ParamLimits

0xe1ed,	// (0x0005c611) ncimui_list_single_graphic_pane

0xb3f5,	// (0x00059819) ncimui_query_pane_ParamLimits

0xb3f5,	// (0x00059819) ncimui_query_pane

0xe7c9,	// (0x0005cbed) list_highlight_pane_cp013

0xe1fd,	// (0x0005c621) ncim_list_query_list_pane_t1_copy1

0xe1d7,	// (0x0005c5fb) ncim_list_single_graphic_pane_g1

0xb408,	// (0x0005982c) ncim_query_button_pane_cp01

0xb414,	// (0x00059838) ncim_query_entry_pane_ParamLimits

0xb414,	// (0x00059838) ncim_query_entry_pane

0xb427,	// (0x0005984b) ncimui_query_pane_g1

0xb433,	// (0x00059857) ncimui_query_pane_t1_ParamLimits

0xb433,	// (0x00059857) ncimui_query_pane_t1

0xe818,	// (0x0005cc3c) input_focus_pane_cp012

0xe20b,	// (0x0005c62f) ncim_query_entry_pane_t1

0xef71,	// (0x0005d395) main_im_pane_ParamLimits

0x7eb1,	// (0x000562d5) main_mobtv_pane_ParamLimits

0x7eb1,	// (0x000562d5) main_mobtv_pane

0xb0a6,	// (0x000594ca) main_cset6_slider_pane_g18_ParamLimits

0xb0a6,	// (0x000594ca) main_cset6_slider_pane_g18

0xb0b2,	// (0x000594d6) main_cset6_slider_pane_g19_ParamLimits

0xb0b2,	// (0x000594d6) main_cset6_slider_pane_g19

0x3129,	// (0x0005154d) bg_main_mobtv_pane_ParamLimits

0x3129,	// (0x0005154d) bg_main_mobtv_pane

0xb44c,	// (0x00059870) main_mobtv_info_pane

0xb457,	// (0x0005987b) main_mobtv_loading_pane_ParamLimits

0xb457,	// (0x0005987b) main_mobtv_loading_pane

0xe21d,	// (0x0005c641) main_mobtv_pg_channel_list_pane

0xe227,	// (0x0005c64b) main_mobtv_pg_hdr_pane

0xb464,	// (0x00059888) main_mobtv_programe_curr_pane_ParamLimits

0xb464,	// (0x00059888) main_mobtv_programe_curr_pane

0xb471,	// (0x00059895) main_mobtv_programe_next_pane_ParamLimits

0xb471,	// (0x00059895) main_mobtv_programe_next_pane

0xe230,	// (0x0005c654) popup_mobtv_noti_window

0x1640,	// (0x0004fa64) main_tv_pg_hdr_pane_g1

0xe23a,	// (0x0005c65e) main_tv_pg_hdr_pane_g2

0xe242,	// (0x0005c666) main_tv_pg_hdr_pane_g3

0xe24a,	// (0x0005c66e) main_tv_pg_hdr_pane_g4

0xe252,	// (0x0005c676) main_tv_pg_hdr_pane_g5

0xe25c,	// (0x0005c680) main_tv_pg_hdr_pane_g6

0xe266,	// (0x0005c68a) main_tv_pg_hdr_pane_g7

0xe270,	// (0x0005c694) main_tv_pg_hdr_pane_g8

0xe27a,	// (0x0005c69e) main_tv_pg_hdr_pane_g9

0xe284,	// (0x0005c6a8) main_tv_pg_hdr_pane_g10

0xe28e,	// (0x0005c6b2) main_tv_pg_hdr_pane_g11

0x000a,

0xfb69,	// (0x0005df8d) main_tv_pg_hdr_pane_g

0xe298,	// (0x0005c6bc) main_tv_pg_hdr_pane_t1

0xe2a6,	// (0x0005c6ca) main_tv_pg_hdr_pane_t2

0xe2b4,	// (0x0005c6d8) main_tv_pg_hdr_pane_t3

0xe2c4,	// (0x0005c6e8) main_tv_pg_hdr_pane_t4

0xe2d4,	// (0x0005c6f8) main_tv_pg_hdr_pane_t5

0x0004,

0xfb80,	// (0x0005dfa4) main_tv_pg_hdr_pane_t

0xe2e4,	// (0x0005c708) single_mobtv_pg_channel_pane_ParamLimits

0xe2e4,	// (0x0005c708) single_mobtv_pg_channel_pane

0xe2f6,	// (0x0005c71a) single_mobtv_pg_channel_table_pane

0xe2ff,	// (0x0005c723) single_mobtv_pg_channel_thumb_pane

0xe308,	// (0x0005c72c) single_tv_pg_channel_pane_g1

0xe311,	// (0x0005c735) single_tv_pg_channel_pane_g2

0x0001,

0xfb8b,	// (0x0005dfaf) single_tv_pg_channel_pane_g

0xeeff,	// (0x0005d323) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeeff,	// (0x0005d323) bg_single_mobtv_pg_channel_thumb_pane

0xe31a,	// (0x0005c73e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe31a,	// (0x0005c73e) single_mobtv_pg_channel_thumb_pane_g1

0xe328,	// (0x0005c74c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe328,	// (0x0005c74c) single_mobtv_pg_channel_thumb_pane_g2

0xe334,	// (0x0005c758) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe334,	// (0x0005c758) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb90,	// (0x0005dfb4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb90,	// (0x0005dfb4) single_mobtv_pg_channel_thumb_pane_g

0xe340,	// (0x0005c764) single_mobtv_pg_channel_thumb_pane_t1

0xe34e,	// (0x0005c772) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb97,	// (0x0005dfbb) single_mobtv_pg_channel_thumb_pane_t

0x1640,	// (0x0004fa64) bg_single_mobtv_pg_channel_table_pane_g1

0x1640,	// (0x0004fa64) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c3,	// (0x0005d7e7) bg_single_mobtv_pg_channel_table_pane_g

0xe35c,	// (0x0005c780) single_mobtv_pg_channel_table_pane_t1

0xe36a,	// (0x0005c78e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb9c,	// (0x0005dfc0) single_mobtv_pg_channel_table_pane_t

0xb486,	// (0x000598aa) main_mobtv_info_pane_g1_ParamLimits

0xb486,	// (0x000598aa) main_mobtv_info_pane_g1

0xb4a2,	// (0x000598c6) main_mobtv_info_pane_t1_ParamLimits

0xb4a2,	// (0x000598c6) main_mobtv_info_pane_t1

0xb51a,	// (0x0005993e) main_mobtv_info_pane_t2_ParamLimits

0xb51a,	// (0x0005993e) main_mobtv_info_pane_t2

0x0002,

0xfba6,	// (0x0005dfca) main_mobtv_info_pane_t_ParamLimits

0xfba6,	// (0x0005dfca) main_mobtv_info_pane_t

0xb5ab,	// (0x000599cf) wait_bar_pane_cp05

0xb5bd,	// (0x000599e1) main_mobtv_loading_pane_g1_ParamLimits

0xb5bd,	// (0x000599e1) main_mobtv_loading_pane_g1

0xb5c9,	// (0x000599ed) main_mobtv_loading_pane_g2_ParamLimits

0xb5c9,	// (0x000599ed) main_mobtv_loading_pane_g2

0xb5d5,	// (0x000599f9) main_mobtv_loading_pane_g3_ParamLimits

0xb5d5,	// (0x000599f9) main_mobtv_loading_pane_g3

0x0002,

0xfbad,	// (0x0005dfd1) main_mobtv_loading_pane_g_ParamLimits

0xfbad,	// (0x0005dfd1) main_mobtv_loading_pane_g

0xe378,	// (0x0005c79c) main_mobtv_loading_pane_t1_ParamLimits

0xe378,	// (0x0005c79c) main_mobtv_loading_pane_t1

0xe390,	// (0x0005c7b4) main_mobtv_loading_pane_t2_ParamLimits

0xe390,	// (0x0005c7b4) main_mobtv_loading_pane_t2

0x0001,

0xfbb4,	// (0x0005dfd8) main_mobtv_loading_pane_t_ParamLimits

0xfbb4,	// (0x0005dfd8) main_mobtv_loading_pane_t

0xb5e3,	// (0x00059a07) wait_bar_pane_cp06_ParamLimits

0xb5e3,	// (0x00059a07) wait_bar_pane_cp06

0xe3b4,	// (0x0005c7d8) main_mobtv_programe_curr_pane_t1

0xe3c2,	// (0x0005c7e6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbb9,	// (0x0005dfdd) main_mobtv_programe_curr_pane_t

0xe3d0,	// (0x0005c7f4) main_mobtv_programe_next_pane_t1

0xe3de,	// (0x0005c802) main_mobtv_programe_next_pane_t2

0xe3ec,	// (0x0005c810) main_mobtv_programe_next_pane_t3

0x0002,

0xfbbe,	// (0x0005dfe2) main_mobtv_programe_next_pane_t

0xe7c9,	// (0x0005cbed) bg_popup_mobtv_noti_window_pane

0xe3fa,	// (0x0005c81e) popup_mobtv_noti_window_g1

0xe402,	// (0x0005c826) popup_mobtv_noti_window_t1

0xe410,	// (0x0005c834) popup_mobtv_noti_window_t2

0x0001,

0xfbc5,	// (0x0005dfe9) popup_mobtv_noti_window_t

0x1640,	// (0x0004fa64) bg_popup_mobtv_noti_window_pane_g1

0x50d5,	// (0x000534f9) sc_clock_pane

0x50d5,	// (0x000534f9) main_fs_bigclock_pane

0xac02,	// (0x00059026) blid2_tripm_pane_t4_ParamLimits

0xac02,	// (0x00059026) blid2_tripm_pane_t4

0xb5ef,	// (0x00059a13) sc_clock_pane_g1_ParamLimits

0xb5ef,	// (0x00059a13) sc_clock_pane_g1

0xb5fd,	// (0x00059a21) sc_clock_pane_t1_ParamLimits

0xb5fd,	// (0x00059a21) sc_clock_pane_t1

0xb612,	// (0x00059a36) sc_clock_pane_t2_ParamLimits

0xb612,	// (0x00059a36) sc_clock_pane_t2

0xb624,	// (0x00059a48) sc_clock_pane_t3_ParamLimits

0xb624,	// (0x00059a48) sc_clock_pane_t3

0x0004,

0xfbca,	// (0x0005dfee) sc_clock_pane_t_ParamLimits

0xfbca,	// (0x0005dfee) sc_clock_pane_t

0xc3c3,	// (0x0005a7e7) main_fs_bigclock_indicator_pane_ParamLimits

0xc3c3,	// (0x0005a7e7) main_fs_bigclock_indicator_pane

0xb6b3,	// (0x00059ad7) main_fs_bigclock_pane_g1_ParamLimits

0xb6b3,	// (0x00059ad7) main_fs_bigclock_pane_g1

0xc3cf,	// (0x0005a7f3) main_fs_bigclock_pane_t1_ParamLimits

0xc3cf,	// (0x0005a7f3) main_fs_bigclock_pane_t1

0xc3e1,	// (0x0005a805) main_fs_bigclock_pane_t2_ParamLimits

0xc3e1,	// (0x0005a805) main_fs_bigclock_pane_t2

0xc3f5,	// (0x0005a819) main_fs_bigclock_pane_t3_ParamLimits

0xc3f5,	// (0x0005a819) main_fs_bigclock_pane_t3

0x0002,

0xfd5b,	// (0x0005e17f) main_fs_bigclock_pane_t_ParamLimits

0xfd5b,	// (0x0005e17f) main_fs_bigclock_pane_t

0x0e49,	// (0x0004f26d) main_fs_bigclock_indicator_pane_g1

0xe124,	// (0x0005c548) ncim_query_content_pane_g2_ParamLimits

0xe124,	// (0x0005c548) ncim_query_content_pane_g2

0x0001,

0xfb57,	// (0x0005df7b) ncim_query_content_pane_g_ParamLimits

0xfb57,	// (0x0005df7b) ncim_query_content_pane_g

0xb636,	// (0x00059a5a) sc_clock_pane_t4_ParamLimits

0xb636,	// (0x00059a5a) sc_clock_pane_t4

0x7eb1,	// (0x000562d5) main_radioblah_pane

0x97a0,	// (0x00057bc4) cell_call4_button_pane_t1_copy1_ParamLimits

0x97a0,	// (0x00057bc4) cell_call4_button_pane_t1_copy1

0xb265,	// (0x00059689) main_ncimui_pane_t1_ParamLimits

0xb265,	// (0x00059689) main_ncimui_pane_t1

0xb27f,	// (0x000596a3) main_ncimui_pane_t2_ParamLimits

0xb27f,	// (0x000596a3) main_ncimui_pane_t2

0x0002,

0xfb50,	// (0x0005df74) main_ncimui_pane_t_ParamLimits

0xfb50,	// (0x0005df74) main_ncimui_pane_t

0xe41e,	// (0x0005c842) main_radioblah_anim_pane_ParamLimits

0xe41e,	// (0x0005c842) main_radioblah_anim_pane

0xe42f,	// (0x0005c853) main_radioblah_info_pane_ParamLimits

0xe42f,	// (0x0005c853) main_radioblah_info_pane

0xe443,	// (0x0005c867) main_radioblah_pane_t1_ParamLimits

0xe443,	// (0x0005c867) main_radioblah_pane_t1

0xe45f,	// (0x0005c883) main_radioblah_pane_t2_ParamLimits

0xe45f,	// (0x0005c883) main_radioblah_pane_t2

0x0003,

0xfbeb,	// (0x0005e00f) main_radioblah_pane_t_ParamLimits

0xfbeb,	// (0x0005e00f) main_radioblah_pane_t

0xb852,	// (0x00059c76) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb852,	// (0x00059c76) main_radioblah_rocker_ctrl_pane

0xe4a7,	// (0x0005c8cb) main_radioblah_info_pane_t1_ParamLimits

0xe4a7,	// (0x0005c8cb) main_radioblah_info_pane_t1

0xb89b,	// (0x00059cbf) main_radioblah_info_pane_t2_ParamLimits

0xb89b,	// (0x00059cbf) main_radioblah_info_pane_t2

0x0003,

0xfbf4,	// (0x0005e018) main_radioblah_info_pane_t_ParamLimits

0xfbf4,	// (0x0005e018) main_radioblah_info_pane_t

0x1640,	// (0x0004fa64) main_radioblah_rocker_ctrl_pane_g1

0xb94b,	// (0x00059d6f) main_radioblah_rocker_ctrl_pane_g2

0xb953,	// (0x00059d77) main_radioblah_rocker_ctrl_pane_g3

0xb95b,	// (0x00059d7f) main_radioblah_rocker_ctrl_pane_g4

0xb963,	// (0x00059d87) main_radioblah_rocker_ctrl_pane_g5

0xb96b,	// (0x00059d8f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbfd,	// (0x0005e021) main_radioblah_rocker_ctrl_pane_g

0xb217,	// (0x0005963b) main_cset_text2_pane_t1_copy1_ParamLimits

0x9829,	// (0x00057c4d) cam4_image_uncrop_qvga_pane

0x996e,	// (0x00057d92) vid4_image_uncrop_qcif_pane

0xad94,	// (0x000591b8) cam6_image_uncrop_qvga_pane_ParamLimits

0xad94,	// (0x000591b8) cam6_image_uncrop_qvga_pane

0xddf7,	// (0x0005c21b) vid6_image_uncrop_qcif_pane_ParamLimits

0xddf7,	// (0x0005c21b) vid6_image_uncrop_qcif_pane

0xe7c9,	// (0x0005cbed) bg_popup_preview_window_pane_cp03

0xe0ca,	// (0x0005c4ee) list_cset_text2_pane

0xe0d2,	// (0x0005c4f6) main_cset6_text2_pane_g1

0xe0da,	// (0x0005c4fe) main_cset6_text2_pane_t1

0xb973,	// (0x00059d97) list_cset_text2_pane_t1_ParamLimits

0xb973,	// (0x00059d97) list_cset_text2_pane_t1

0x7eb1,	// (0x000562d5) main_radioblah_pane_ParamLimits

0xb597,	// (0x000599bb) main_mobtv_info_pane_t3_ParamLimits

0xb597,	// (0x000599bb) main_mobtv_info_pane_t3

0xb840,	// (0x00059c64) main_radioblah_pane_g1

0xb86b,	// (0x00059c8f) main_radioblah_info_pane_g1

0xb8f0,	// (0x00059d14) main_radioblah_info_pane_t3_ParamLimits

0xb8f0,	// (0x00059d14) main_radioblah_info_pane_t3

0x6d7a,	// (0x0005519e) highlight_cell_cale_month_pane_ParamLimits

0x6d7a,	// (0x0005519e) highlight_cell_cale_month_pane

0x50d5,	// (0x000534f9) main_phob_fisheye_pane

0x3a1f,	// (0x00051e43) scroll_pane_cp0031_ParamLimits

0x3a1f,	// (0x00051e43) scroll_pane_cp0031

0xdf09,	// (0x0005c32d) wait_bar_pane_cp08_ParamLimits

0xafa2,	// (0x000593c6) cset_list_set_pane_copy1_ParamLimits

0xe4e1,	// (0x0005c905) highlight_cell_cale_month_pane_g1

0xb98a,	// (0x00059dae) highlight_cell_cale_month_pane_t1

0xdba3,	// (0x0005bfc7) list_gen_pane_cp01

0xd812,	// (0x0005bc36) scroll_pane_01

0xb998,	// (0x00059dbc) list_single_double_fisheye_pane

0xb9a1,	// (0x00059dc5) list_double_fisheye_pane_g1_ParamLimits

0xb9a1,	// (0x00059dc5) list_double_fisheye_pane_g1

0xb9ad,	// (0x00059dd1) list_double_fisheye_pane_g2_ParamLimits

0xb9ad,	// (0x00059dd1) list_double_fisheye_pane_g2

0xb9c1,	// (0x00059de5) list_double_fisheye_pane_g3_ParamLimits

0xb9c1,	// (0x00059de5) list_double_fisheye_pane_g3

0x0004,

0xfc0a,	// (0x0005e02e) list_double_fisheye_pane_g_ParamLimits

0xfc0a,	// (0x0005e02e) list_double_fisheye_pane_g

0xb9ea,	// (0x00059e0e) list_double_fisheye_pane_t1_ParamLimits

0xb9ea,	// (0x00059e0e) list_double_fisheye_pane_t1

0xba05,	// (0x00059e29) list_double_fisheye_pane_t2_ParamLimits

0xba05,	// (0x00059e29) list_double_fisheye_pane_t2

0x0001,

0xfc15,	// (0x0005e039) list_double_fisheye_pane_t_ParamLimits

0xfc15,	// (0x0005e039) list_double_fisheye_pane_t

0x50d5,	// (0x000534f9) main_call5_pane

0xb65c,	// (0x00059a80) sc_swipe_pane_ParamLimits

0xb65c,	// (0x00059a80) sc_swipe_pane

0xba33,	// (0x00059e57) call5_image_pane_ParamLimits

0xba33,	// (0x00059e57) call5_image_pane

0xba45,	// (0x00059e69) call5_swipe_1_pane_ParamLimits

0xba45,	// (0x00059e69) call5_swipe_1_pane

0xba51,	// (0x00059e75) call5_swipe_2_pane_ParamLimits

0xba51,	// (0x00059e75) call5_swipe_2_pane

0xba6b,	// (0x00059e8f) popup_call5_audio_first_window_ParamLimits

0xba6b,	// (0x00059e8f) popup_call5_audio_first_window

0xeeff,	// (0x0005d323) call5_swipe_1_pane_g1_ParamLimits

0xeeff,	// (0x0005d323) call5_swipe_1_pane_g1

0xe4e9,	// (0x0005c90d) call5_swipe_1_pane_g2_ParamLimits

0xe4e9,	// (0x0005c90d) call5_swipe_1_pane_g2

0x0001,

0xfc1a,	// (0x0005e03e) call5_swipe_1_pane_g_ParamLimits

0xfc1a,	// (0x0005e03e) call5_swipe_1_pane_g

0xe4f5,	// (0x0005c919) call5_swipe_1_pane_t1_ParamLimits

0xe4f5,	// (0x0005c919) call5_swipe_1_pane_t1

0xeeff,	// (0x0005d323) call5_swipe_2_pane_g1_ParamLimits

0xeeff,	// (0x0005d323) call5_swipe_2_pane_g1

0xe50a,	// (0x0005c92e) call5_swipe_2_pane_g2_ParamLimits

0xe50a,	// (0x0005c92e) call5_swipe_2_pane_g2

0x0001,

0xfc1f,	// (0x0005e043) call5_swipe_2_pane_g_ParamLimits

0xfc1f,	// (0x0005e043) call5_swipe_2_pane_g

0xe516,	// (0x0005c93a) call5_swipe_2_pane_t1_ParamLimits

0xe516,	// (0x0005c93a) call5_swipe_2_pane_t1

0xe52b,	// (0x0005c94f) sc_swipe_pane_g1_ParamLimits

0xe52b,	// (0x0005c94f) sc_swipe_pane_g1

0xe538,	// (0x0005c95c) sc_swipe_pane_g2_ParamLimits

0xe538,	// (0x0005c95c) sc_swipe_pane_g2

0x0001,

0xfc24,	// (0x0005e048) sc_swipe_pane_g_ParamLimits

0xfc24,	// (0x0005e048) sc_swipe_pane_g

0xe544,	// (0x0005c968) sc_swipe_pane_t1_ParamLimits

0xe544,	// (0x0005c968) sc_swipe_pane_t1

0x50d5,	// (0x000534f9) main_cmail_launcher_pane

0xba7b,	// (0x00059e9f) aid_size_cell_cmail_l_ParamLimits

0xba7b,	// (0x00059e9f) aid_size_cell_cmail_l

0xba89,	// (0x00059ead) grid_cmail_l_pane_ParamLimits

0xba89,	// (0x00059ead) grid_cmail_l_pane

0xba97,	// (0x00059ebb) cell_cmail_l_pane_ParamLimits

0xba97,	// (0x00059ebb) cell_cmail_l_pane

0xbab2,	// (0x00059ed6) cell_cmail_l_pane_g1_ParamLimits

0xbab2,	// (0x00059ed6) cell_cmail_l_pane_g1

0xbabe,	// (0x00059ee2) cell_cmail_l_pane_t1_ParamLimits

0xbabe,	// (0x00059ee2) cell_cmail_l_pane_t1

0xbad4,	// (0x00059ef8) cell_cmail_l_pane_t2_ParamLimits

0xbad4,	// (0x00059ef8) cell_cmail_l_pane_t2

0x0001,

0xfc29,	// (0x0005e04d) cell_cmail_l_pane_t_ParamLimits

0xfc29,	// (0x0005e04d) cell_cmail_l_pane_t

0xe818,	// (0x0005cc3c) grid_highlight_pane_cp018_ParamLimits

0xe818,	// (0x0005cc3c) grid_highlight_pane_cp018

0x4f2a,	// (0x0005334e) main2_pane_ParamLimits

0x4f2a,	// (0x0005334e) main2_pane

0xf009,	// (0x0005d42d) popup_sp_fs_action_menu_bg_pane_g1

0xf011,	// (0x0005d435) popup_sp_fs_action_menu_bg_pane_g2

0xf019,	// (0x0005d43d) popup_sp_fs_action_menu_bg_pane_g3

0xf021,	// (0x0005d445) popup_sp_fs_action_menu_bg_pane_g4

0xf029,	// (0x0005d44d) popup_sp_fs_action_menu_bg_pane_g5

0xf031,	// (0x0005d455) popup_sp_fs_action_menu_bg_pane_g6

0xf039,	// (0x0005d45d) popup_sp_fs_action_menu_bg_pane_g7

0xf041,	// (0x0005d465) popup_sp_fs_action_menu_bg_pane_g8

0xf049,	// (0x0005d46d) popup_sp_fs_action_menu_bg_pane_g9

0xf051,	// (0x0005d475) popup_sp_fs_action_menu_bg_pane_g10

0xf051,	// (0x0005d475) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x0005d54f) popup_sp_fs_action_menu_bg_pane_g

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g3_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g3_g1

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g3_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g3_g2

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g3_g3_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x0005d5fd) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x0005d5fd) list_medium_line_x2_t3_g3_g

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g3_t1

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g3_t2

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x0005d604) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x0005d604) list_medium_line_x2_t3_g3_t

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g2_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g2_g1

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g2_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x0005d60b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x0005d60b) list_medium_line_x2_t3_g2_g

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g2_t1

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g2_t2

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x0005d604) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x0005d604) list_medium_line_x2_t3_g2_t

0xeeff,	// (0x0005d323) list_medium_line_x2_t4_g4_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t4_g4_g1

0xeeff,	// (0x0005d323) list_medium_line_x2_t4_g4_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t4_g4_g2

0xeeff,	// (0x0005d323) list_medium_line_x2_t4_g4_g3_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t4_g4_g3

0xeeff,	// (0x0005d323) list_medium_line_x2_t4_g4_g4_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x0005d610) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x0005d610) list_medium_line_x2_t4_g4_g

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g4_t1

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g4_t2

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g4_t3

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x0005d619) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x0005d619) list_medium_line_x2_t4_g4_t

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g4_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g4_g1

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g4_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g4_g2

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g4_g3_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g4_g3

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g4_g4_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x0005d610) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x0005d610) list_medium_line_x2_t2_g4_g

0x1612,	// (0x0004fa36) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t2_g4_t1

0x1612,	// (0x0004fa36) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t2_g4_t2

0x0001,

0xf25c,	// (0x0005d680) list_medium_line_x2_t2_g4_t_ParamLimits

0xf25c,	// (0x0005d680) list_medium_line_x2_t2_g4_t

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g3_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g3_g1

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g3_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g3_g2

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g3_g3_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x0005d5fd) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x0005d5fd) list_medium_line_x2_t2_g3_g

0x1612,	// (0x0004fa36) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t2_g3_t1

0x1612,	// (0x0004fa36) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t2_g3_t2

0x0001,

0xf25c,	// (0x0005d680) list_medium_line_x2_t2_g3_t_ParamLimits

0xf25c,	// (0x0005d680) list_medium_line_x2_t2_g3_t

0x6f23,	// (0x00055347) main_sp_fs_list_pane_ParamLimits

0x6f23,	// (0x00055347) main_sp_fs_list_pane

0x6f2f,	// (0x00055353) sp_fs_scroll_pane_ParamLimits

0x6f2f,	// (0x00055353) sp_fs_scroll_pane

0x1b95,	// (0x0004ffb9) list_medium_line_x2_t3_t1

0x1b95,	// (0x0004ffb9) list_medium_line_x2_t3_t2

0x1b95,	// (0x0004ffb9) list_medium_line_x2_t3_t3

0x0002,

0xf2a7,	// (0x0005d6cb) list_medium_line_x2_t3_t

0x1b95,	// (0x0004ffb9) list_medium_line_x3_t4_t1

0x1b95,	// (0x0004ffb9) list_medium_line_x3_t4_t2

0x1b95,	// (0x0004ffb9) list_medium_line_x3_t4_t3

0x1b95,	// (0x0004ffb9) list_medium_line_x3_t4_t4

0x0003,

0xf2ae,	// (0x0005d6d2) list_medium_line_x3_t4_t

0x1b95,	// (0x0004ffb9) list_medium_line_x4_t5_t1

0x1b95,	// (0x0004ffb9) list_medium_line_x4_t5_t2

0x1b95,	// (0x0004ffb9) list_medium_line_x4_t5_t3

0x1b95,	// (0x0004ffb9) list_medium_line_x4_t5_t4

0x1b95,	// (0x0004ffb9) list_medium_line_x4_t5_t5

0x0004,

0xf2b7,	// (0x0005d6db) list_medium_line_x4_t5_t

0xeeff,	// (0x0005d323) list_medium_line_t4_g4_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t4_g4_g1

0xeeff,	// (0x0005d323) list_medium_line_t4_g4_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t4_g4_g2

0xeeff,	// (0x0005d323) list_medium_line_t4_g4_g3_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t4_g4_g3

0xeeff,	// (0x0005d323) list_medium_line_t4_g4_g4_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x0005d610) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x0005d610) list_medium_line_t4_g4_g

0x1612,	// (0x0004fa36) list_medium_line_t4_g4_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t4_g4_t1

0x1612,	// (0x0004fa36) list_medium_line_t4_g4_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t4_g4_t2

0x1612,	// (0x0004fa36) list_medium_line_t4_g4_t3_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t4_g4_t3

0x1612,	// (0x0004fa36) list_medium_line_t4_g4_t4_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x0005d619) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x0005d619) list_medium_line_t4_g4_t

0x7028,	// (0x0005544c) chi_dic_find_pane_g1

0x7ecd,	// (0x000562f1) main_tport_pane

0x1b95,	// (0x0004ffb9) list_medium_line_plain_t1

0xeeff,	// (0x0005d323) list_medium_line_t2_g2_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t2_g2_g1

0xeeff,	// (0x0005d323) list_medium_line_t2_g2_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x0005d60b) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x0005d60b) list_medium_line_t2_g2_g

0x1612,	// (0x0004fa36) list_medium_line_t2_g2_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t2_g2_t1

0x1612,	// (0x0004fa36) list_medium_line_t2_g2_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t2_g2_t2

0x0001,

0xf25c,	// (0x0005d680) list_medium_line_t2_g2_t_ParamLimits

0xf25c,	// (0x0005d680) list_medium_line_t2_g2_t

0x0764,	// (0x0004eb88) aid_sp_fs_list_icon_a_sm

0x076c,	// (0x0004eb90) aid_sp_fs_list_icon_d

0x0774,	// (0x0004eb98) aid_sp_fs_text_primary

0x077d,	// (0x0004eba1) aid_sp_fs_text_secondary

0xe7c9,	// (0x0005cbed) list_medium_line

0xe7c9,	// (0x0005cbed) list_medium_line_g2

0xe7c9,	// (0x0005cbed) list_medium_line_g3

0xe7c9,	// (0x0005cbed) list_medium_line_plain

0xe7c9,	// (0x0005cbed) list_medium_line_plain_t2

0xe7c9,	// (0x0005cbed) list_medium_line_plain_t3

0xe7c9,	// (0x0005cbed) list_medium_line_right_icon

0xe7c9,	// (0x0005cbed) list_medium_line_right_iconx2

0xe7c9,	// (0x0005cbed) list_medium_line_t2

0xe7c9,	// (0x0005cbed) list_medium_line_t2_g2

0xe7c9,	// (0x0005cbed) list_medium_line_t2_g3

0xe7c9,	// (0x0005cbed) list_medium_line_t2_right_icon

0xe7c9,	// (0x0005cbed) list_medium_line_t2_right_iconx2

0xe7c9,	// (0x0005cbed) list_medium_line_t3

0xe7c9,	// (0x0005cbed) list_medium_line_t3_g2

0xe7c9,	// (0x0005cbed) list_medium_line_t3_g3

0xe7c9,	// (0x0005cbed) list_medium_line_t3_right_iconx2

0xe7c9,	// (0x0005cbed) list_medium_line_t4_g4

0xe7c9,	// (0x0005cbed) list_medium_line_x2

0xe7c9,	// (0x0005cbed) list_medium_line_x2_t2_g2

0xe7c9,	// (0x0005cbed) list_medium_line_x2_t2_g3

0xe7c9,	// (0x0005cbed) list_medium_line_x2_t2_g4

0xe7c9,	// (0x0005cbed) list_medium_line_x2_t3

0xe7c9,	// (0x0005cbed) list_medium_line_x2_t3_g2

0xe7c9,	// (0x0005cbed) list_medium_line_x2_t3_g3

0xe7c9,	// (0x0005cbed) list_medium_line_x2_t3_g4

0xe7c9,	// (0x0005cbed) list_medium_line_x2_t4_g2

0xe7c9,	// (0x0005cbed) list_medium_line_x2_t4_g4

0xe7c9,	// (0x0005cbed) list_medium_line_x3

0xe7c9,	// (0x0005cbed) list_medium_line_x3_t4

0xe7c9,	// (0x0005cbed) list_medium_line_x3_t4_g4

0xe7c9,	// (0x0005cbed) list_medium_line_x4_t4

0xe7c9,	// (0x0005cbed) list_medium_line_x4_t4_g7

0xe7c9,	// (0x0005cbed) list_medium_line_x4_t5

0xaa8d,	// (0x00058eb1) list_single_fs_dyc_pane_ParamLimits

0xaa8d,	// (0x00058eb1) list_single_fs_dyc_pane

0xeeff,	// (0x0005d323) list_medium_line_x4_t4_g7_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x4_t4_g7_g1

0xeeff,	// (0x0005d323) list_medium_line_x4_t4_g7_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x4_t4_g7_g2

0xeeff,	// (0x0005d323) list_medium_line_x4_t4_g7_g3_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x4_t4_g7_g3

0xeeff,	// (0x0005d323) list_medium_line_x4_t4_g7_g4_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x4_t4_g7_g4

0xeeff,	// (0x0005d323) list_medium_line_x4_t4_g7_g5_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x4_t4_g7_g5

0xeeff,	// (0x0005d323) list_medium_line_x4_t4_g7_g6_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x4_t4_g7_g6

0xef0d,	// (0x0005d331) list_medium_line_x4_t4_g7_g7_ParamLimits

0xef0d,	// (0x0005d331) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb31,	// (0x0005df55) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb31,	// (0x0005df55) list_medium_line_x4_t4_g7_g

0x1612,	// (0x0004fa36) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x4_t4_g7_t1

0x1612,	// (0x0004fa36) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x4_t4_g7_t2

0x1612,	// (0x0004fa36) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x4_t4_g7_t3

0x1c43,	// (0x00050067) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1c43,	// (0x00050067) list_medium_line_x4_t4_g7_t4

0x1c43,	// (0x00050067) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1c43,	// (0x00050067) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb40,	// (0x0005df64) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb40,	// (0x0005df64) list_medium_line_x4_t4_g7_t

0xb1fa,	// (0x0005961e) list_single_dyc_row_pane_ParamLimits

0xb1fa,	// (0x0005961e) list_single_dyc_row_pane

0xba27,	// (0x00059e4b) call5_gesture_pane_ParamLimits

0xba27,	// (0x00059e4b) call5_gesture_pane

0xba5d,	// (0x00059e81) call5_windows_pane_ParamLimits

0xba5d,	// (0x00059e81) call5_windows_pane

0xbaf1,	// (0x00059f15) call5_swipe_1_pane_cp_ParamLimits

0xbaf1,	// (0x00059f15) call5_swipe_1_pane_cp

0xbafd,	// (0x00059f21) call5_swipe_2_pane_cp_ParamLimits

0xbafd,	// (0x00059f21) call5_swipe_2_pane_cp

0x160a,	// (0x0004fa2e) call5_image_pane_cp

0xbb09,	// (0x00059f2d) popup_call5_audio_first_window_cp_ParamLimits

0xbb09,	// (0x00059f2d) popup_call5_audio_first_window_cp

0xe52b,	// (0x0005c94f) call5_swipe_1_pane_g1_cp_ParamLimits

0xe52b,	// (0x0005c94f) call5_swipe_1_pane_g1_cp

0xe559,	// (0x0005c97d) call5_swipe_1_pane_g2_cp

0xe544,	// (0x0005c968) call5_swipe_1_pane_t1_cp_ParamLimits

0xe544,	// (0x0005c968) call5_swipe_1_pane_t1_cp

0xe52b,	// (0x0005c94f) call5_swipe_2_pane_g1_cp_ParamLimits

0xe52b,	// (0x0005c94f) call5_swipe_2_pane_g1_cp

0xe561,	// (0x0005c985) call5_swipe_2_pane_g2_cp

0xe569,	// (0x0005c98d) call5_swipe_2_pane_t1_cp_ParamLimits

0xe569,	// (0x0005c98d) call5_swipe_2_pane_t1_cp

0xe818,	// (0x0005cc3c) main_sp_fs_email_pane

0xe57e,	// (0x0005c9a2) main_sp_fs_listscroll_pane_te

0xbb17,	// (0x00059f3b) popup_sp_fs_action_menu_pane_ParamLimits

0xbb17,	// (0x00059f3b) popup_sp_fs_action_menu_pane

0x1640,	// (0x0004fa64) bg_sp_fs_ctrlbar_pane_g1

0xe587,	// (0x0005c9ab) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe590,	// (0x0005c9b4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe599,	// (0x0005c9bd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1640,	// (0x0004fa64) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc2e,	// (0x0005e052) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2330,	// (0x00050754) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2330,	// (0x00050754) bg_sp_fs_ctrlbar_ddmenu_pane

0xe5a2,	// (0x0005c9c6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe5a2,	// (0x0005c9c6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe5ae,	// (0x0005c9d2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe5ae,	// (0x0005c9d2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc37,	// (0x0005e05b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc37,	// (0x0005e05b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe5ba,	// (0x0005c9de) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe5ba,	// (0x0005c9de) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1640,	// (0x0004fa64) list_medium_line_t2_right_icon_g1

0x1b95,	// (0x0004ffb9) list_medium_line_t2_right_icon_t1

0x1b95,	// (0x0004ffb9) list_medium_line_t2_right_icon_t2

0x0001,

0xfc3c,	// (0x0005e060) list_medium_line_t2_right_icon_t

0x314b,	// (0x0005156f) bg_sp_fs_ctrlbar_pane_ParamLimits

0x314b,	// (0x0005156f) bg_sp_fs_ctrlbar_pane

0xbbb6,	// (0x00059fda) main_sp_fs_ctrlbar_button_pane_cp01

0xbbbe,	// (0x00059fe2) main_sp_fs_ctrlbar_ddmenu_pane

0xe60e,	// (0x0005ca32) main_sp_fs_ctrlbar_pane_g1

0xe61a,	// (0x0005ca3e) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc41,	// (0x0005e065) main_sp_fs_ctrlbar_pane_g

0xbbfc,	// (0x0005a020) main_sp_fs_ctrlbar_pane_t1

0xbc39,	// (0x0005a05d) main_sp_fs_ctrlbar_pane

0xbc53,	// (0x0005a077) main_sp_fs_listscroll_pane_te_cp01

0xbc64,	// (0x0005a088) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xbc64,	// (0x0005a088) popup_sp_fs_action_menu_pane_cp01

0xe818,	// (0x0005cc3c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe818,	// (0x0005cc3c) bg_sp_fs_highlight_list_pane_cp01

0x0794,	// (0x0004ebb8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0794,	// (0x0004ebb8) sp_fs_action_menu_list_gene_pane_g1

0xe641,	// (0x0005ca65) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe641,	// (0x0005ca65) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc4f,	// (0x0005e073) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc4f,	// (0x0005e073) sp_fs_action_menu_list_gene_pane_g

0x07a3,	// (0x0004ebc7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x07a3,	// (0x0004ebc7) sp_fs_action_menu_list_gene_pane_t1

0x07bb,	// (0x0004ebdf) sp_fs_action_menu_list_gene_pane_ParamLimits

0x07bb,	// (0x0004ebdf) sp_fs_action_menu_list_gene_pane

0xe64e,	// (0x0005ca72) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe64e,	// (0x0005ca72) popup_sp_fs_action_menu_bg_pane

0x07de,	// (0x0004ec02) sp_fs_action_menu_list_pane_ParamLimits

0x07de,	// (0x0004ec02) sp_fs_action_menu_list_pane

0xbc84,	// (0x0005a0a8) sp_fs_scroll_pane_cp01_ParamLimits

0xbc84,	// (0x0005a0a8) sp_fs_scroll_pane_cp01

0x1b95,	// (0x0004ffb9) list_medium_line_plain_t2_t1

0x1b95,	// (0x0004ffb9) list_medium_line_plain_t2_t2

0x0001,

0xfc3c,	// (0x0005e060) list_medium_line_plain_t2_t

0x1b95,	// (0x0004ffb9) list_medium_line_plain_t3_t1

0x1b95,	// (0x0004ffb9) list_medium_line_plain_t3_t2

0x1b95,	// (0x0004ffb9) list_medium_line_plain_t3_t3

0x0002,

0xf2a7,	// (0x0005d6cb) list_medium_line_plain_t3_t

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g2_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g2_g1

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g2_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x0005d60b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x0005d60b) list_medium_line_x2_t2_g2_g

0x1612,	// (0x0004fa36) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t2_g2_t1

0x1612,	// (0x0004fa36) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t2_g2_t2

0x0001,

0xf25c,	// (0x0005d680) list_medium_line_x2_t2_g2_t_ParamLimits

0xf25c,	// (0x0005d680) list_medium_line_x2_t2_g2_t

0xeeff,	// (0x0005d323) list_medium_line_x2_t4_g2_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t4_g2_g1

0xeeff,	// (0x0005d323) list_medium_line_x2_t4_g2_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x0005d60b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x0005d60b) list_medium_line_x2_t4_g2_g

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g2_t1

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g2_t2

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g2_t3

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x0005d619) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x0005d619) list_medium_line_x2_t4_g2_t

0x1640,	// (0x0004fa64) list_medium_line_t3_right_iconx2_g1

0x1640,	// (0x0004fa64) list_medium_line_t3_right_iconx2_g2

0x1640,	// (0x0004fa64) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c8,	// (0x0005d7ec) list_medium_line_t3_right_iconx2_g

0x1b95,	// (0x0004ffb9) list_medium_line_t3_right_iconx2_t1

0x1b95,	// (0x0004ffb9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc3c,	// (0x0005e060) list_medium_line_t3_right_iconx2_t

0xeeff,	// (0x0005d323) list_medium_line_x3_t4_g4_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x3_t4_g4_g1

0xeeff,	// (0x0005d323) list_medium_line_x3_t4_g4_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x3_t4_g4_g2

0xeeff,	// (0x0005d323) list_medium_line_x3_t4_g4_g3_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x3_t4_g4_g3

0xeeff,	// (0x0005d323) list_medium_line_x3_t4_g4_g4_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x0005d610) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x0005d610) list_medium_line_x3_t4_g4_g

0x1612,	// (0x0004fa36) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x3_t4_g4_t1

0x1612,	// (0x0004fa36) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x3_t4_g4_t2

0x1612,	// (0x0004fa36) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x3_t4_g4_t3

0x1612,	// (0x0004fa36) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x0005d619) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x0005d619) list_medium_line_x3_t4_g4_t

0xbcaa,	// (0x0005a0ce) list_single_dyc_row_text_pane_t1_ParamLimits

0xbcaa,	// (0x0005a0ce) list_single_dyc_row_text_pane_t1

0xbce7,	// (0x0005a10b) list_single_dyc_row_text_pane_t2_ParamLimits

0xbce7,	// (0x0005a10b) list_single_dyc_row_text_pane_t2

0x0802,	// (0x0004ec26) list_single_dyc_row_text_pane_t3_ParamLimits

0x0802,	// (0x0004ec26) list_single_dyc_row_text_pane_t3

0x0005,

0xfc54,	// (0x0005e078) list_single_dyc_row_text_pane_t_ParamLimits

0xfc54,	// (0x0005e078) list_single_dyc_row_text_pane_t

0x0826,	// (0x0004ec4a) list_single_dyc_row_pane_g1_ParamLimits

0x0826,	// (0x0004ec4a) list_single_dyc_row_pane_g1

0x0832,	// (0x0004ec56) list_single_dyc_row_pane_g2_ParamLimits

0x0832,	// (0x0004ec56) list_single_dyc_row_pane_g2

0x083e,	// (0x0004ec62) list_single_dyc_row_pane_g3_ParamLimits

0x083e,	// (0x0004ec62) list_single_dyc_row_pane_g3

0x084a,	// (0x0004ec6e) list_single_dyc_row_pane_g4_ParamLimits

0x084a,	// (0x0004ec6e) list_single_dyc_row_pane_g4

0x0003,

0xfc61,	// (0x0005e085) list_single_dyc_row_pane_g_ParamLimits

0xfc61,	// (0x0005e085) list_single_dyc_row_pane_g

0x0856,	// (0x0004ec7a) list_single_dyc_row_text_pane_ParamLimits

0x0856,	// (0x0004ec7a) list_single_dyc_row_text_pane

0xe7c9,	// (0x0005cbed) bg_sp_fs_scroll_pane

0xe65c,	// (0x0005ca80) thumb_sp_fs_scroll_pane

0xeeff,	// (0x0005d323) list_medium_line_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_g1

0x1612,	// (0x0004fa36) list_medium_line_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t1

0xeeff,	// (0x0005d323) list_medium_line_x2_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_g1

0xeeff,	// (0x0005d323) list_medium_line_x2_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x0005d60b) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x0005d60b) list_medium_line_x2_g

0x1612,	// (0x0004fa36) list_medium_line_x2_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t1

0xeeff,	// (0x0005d323) list_medium_line_x3_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x3_g1

0xd6a5,	// (0x0005bac9) list_medium_line_x3_g2_ParamLimits

0xd6a5,	// (0x0005bac9) list_medium_line_x3_g2

0x0001,

0xfc6a,	// (0x0005e08e) list_medium_line_x3_g_ParamLimits

0xfc6a,	// (0x0005e08e) list_medium_line_x3_g

0xe665,	// (0x0005ca89) list_medium_line_x3_t1_ParamLimits

0xe665,	// (0x0005ca89) list_medium_line_x3_t1

0xe679,	// (0x0005ca9d) thumb_sp_fs_scroll_pane_g1

0xe682,	// (0x0005caa6) thumb_sp_fs_scroll_pane_g2

0xe68b,	// (0x0005caaf) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc6f,	// (0x0005e093) thumb_sp_fs_scroll_pane_g

0xe679,	// (0x0005ca9d) bg_sp_fs_scroll_pane_g1

0xe682,	// (0x0005caa6) bg_sp_fs_scroll_pane_g2

0xe68b,	// (0x0005caaf) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc6f,	// (0x0005e093) bg_sp_fs_scroll_pane_g

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g4_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g4_g1

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g4_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g4_g2

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g4_g3_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g4_g3

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g4_g4_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x0005d610) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x0005d610) list_medium_line_x2_t3_g4_g

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g4_t1

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g4_t2

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x0005d604) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x0005d604) list_medium_line_x2_t3_g4_t

0xeeff,	// (0x0005d323) list_medium_line_g2_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_g2_g1

0xeeff,	// (0x0005d323) list_medium_line_g2_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x0005d60b) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x0005d60b) list_medium_line_g2_g

0x1612,	// (0x0004fa36) list_medium_line_g2_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_g2_t1

0xeeff,	// (0x0005d323) list_medium_line_t3_g2_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t3_g2_g1

0xeeff,	// (0x0005d323) list_medium_line_t3_g2_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x0005d60b) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x0005d60b) list_medium_line_t3_g2_g

0x1612,	// (0x0004fa36) list_medium_line_t3_g2_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t3_g2_t1

0x1612,	// (0x0004fa36) list_medium_line_t3_g2_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t3_g2_t2

0x1612,	// (0x0004fa36) list_medium_line_t3_g2_t3_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x0005d604) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x0005d604) list_medium_line_t3_g2_t

0x1640,	// (0x0004fa64) list_medium_line_right_icon_g1

0x1b95,	// (0x0004ffb9) list_medium_line_right_icon_t1

0xeeff,	// (0x0005d323) list_medium_line_t2_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t2_g1

0x1612,	// (0x0004fa36) list_medium_line_t2_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t2_t1

0x1612,	// (0x0004fa36) list_medium_line_t2_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t2_t2

0x0001,

0xf25c,	// (0x0005d680) list_medium_line_t2_t_ParamLimits

0xf25c,	// (0x0005d680) list_medium_line_t2_t

0xeeff,	// (0x0005d323) list_medium_line_t3_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t3_g1

0x1612,	// (0x0004fa36) list_medium_line_t3_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t3_t1

0x1612,	// (0x0004fa36) list_medium_line_t3_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t3_t2

0x1612,	// (0x0004fa36) list_medium_line_t3_t3_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x0005d604) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x0005d604) list_medium_line_t3_t

0xeeff,	// (0x0005d323) list_medium_line_g3_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_g3_g1

0xeeff,	// (0x0005d323) list_medium_line_g3_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_g3_g2

0xeeff,	// (0x0005d323) list_medium_line_g3_g3_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x0005d5fd) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x0005d5fd) list_medium_line_g3_g

0x1612,	// (0x0004fa36) list_medium_line_g3_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_g3_t1

0xeeff,	// (0x0005d323) list_medium_line_t2_g3_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t2_g3_g1

0xeeff,	// (0x0005d323) list_medium_line_t2_g3_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t2_g3_g2

0xeeff,	// (0x0005d323) list_medium_line_t2_g3_g3_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x0005d5fd) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x0005d5fd) list_medium_line_t2_g3_g

0x1612,	// (0x0004fa36) list_medium_line_t2_g3_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t2_g3_t1

0x1612,	// (0x0004fa36) list_medium_line_t2_g3_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t2_g3_t2

0x0001,

0xf25c,	// (0x0005d680) list_medium_line_t2_g3_t_ParamLimits

0xf25c,	// (0x0005d680) list_medium_line_t2_g3_t

0xeeff,	// (0x0005d323) list_medium_line_t3_g3_g1_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t3_g3_g1

0xeeff,	// (0x0005d323) list_medium_line_t3_g3_g2_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t3_g3_g2

0xeeff,	// (0x0005d323) list_medium_line_t3_g3_g3_ParamLimits

0xeeff,	// (0x0005d323) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x0005d5fd) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x0005d5fd) list_medium_line_t3_g3_g

0x1612,	// (0x0004fa36) list_medium_line_t3_g3_t1_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t3_g3_t1

0x1612,	// (0x0004fa36) list_medium_line_t3_g3_t2_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t3_g3_t2

0x1612,	// (0x0004fa36) list_medium_line_t3_g3_t3_ParamLimits

0x1612,	// (0x0004fa36) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x0005d604) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x0005d604) list_medium_line_t3_g3_t

0x1640,	// (0x0004fa64) list_medium_line_right_iconx2_g1

0x1640,	// (0x0004fa64) list_medium_line_right_iconx2_g2

0x0001,

0xf3c3,	// (0x0005d7e7) list_medium_line_right_iconx2_g

0x1b95,	// (0x0004ffb9) list_medium_line_right_iconx2_t1

0x1640,	// (0x0004fa64) list_medium_line_t2_right_iconx2_g1

0x1640,	// (0x0004fa64) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3c3,	// (0x0005d7e7) list_medium_line_t2_right_iconx2_g

0x1b95,	// (0x0004ffb9) list_medium_line_t2_right_iconx2_t1

0x1b95,	// (0x0004ffb9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc3c,	// (0x0005e060) list_medium_line_t2_right_iconx2_t

0x1b95,	// (0x0004ffb9) list_medium_line_x4_t4_t1

0x1b95,	// (0x0004ffb9) list_medium_line_x4_t4_t2

0x1b95,	// (0x0004ffb9) list_medium_line_x4_t4_t3

0x1b95,	// (0x0004ffb9) list_medium_line_x4_t4_t4

0x0003,

0xf2ae,	// (0x0005d6d2) list_medium_line_x4_t4_t

0xbe3a,	// (0x0005a25e) tport_appsw_pane_ParamLimits

0xbe3a,	// (0x0005a25e) tport_appsw_pane

0xbe48,	// (0x0005a26c) tport_contact_pane_ParamLimits

0xbe48,	// (0x0005a26c) tport_contact_pane

0xbe58,	// (0x0005a27c) tport_listscroll_pane_ParamLimits

0xbe58,	// (0x0005a27c) tport_listscroll_pane

0xbe67,	// (0x0005a28b) cell_tport_appsw_pane_ParamLimits

0xbe67,	// (0x0005a28b) cell_tport_appsw_pane

0xef0d,	// (0x0005d331) tport_appsw_pane_g1_ParamLimits

0xef0d,	// (0x0005d331) tport_appsw_pane_g1

0xe694,	// (0x0005cab8) tport_contact_pane_g1

0xe69d,	// (0x0005cac1) tport_contact_pane_t1

0xe6ab,	// (0x0005cacf) tport_contact_pane_t2

0x0001,

0xfc76,	// (0x0005e09a) tport_contact_pane_t

0xe6b9,	// (0x0005cadd) list_tport_pane

0xe6c2,	// (0x0005cae6) scroll_pane_cp_030

0xbe9c,	// (0x0005a2c0) cell_tport_appsw_pane_g1

0xbeac,	// (0x0005a2d0) cell_tport_appsw_pane_t1

0xbeba,	// (0x0005a2de) grid_highlight_pane_cp019

0xbec2,	// (0x0005a2e6) list_tport_double_graphic_pane_ParamLimits

0xbec2,	// (0x0005a2e6) list_tport_double_graphic_pane

0xe818,	// (0x0005cc3c) list_highlight_pane_cp023_ParamLimits

0xe818,	// (0x0005cc3c) list_highlight_pane_cp023

0xbedf,	// (0x0005a303) list_tport_double_graphic_pane_g1_ParamLimits

0xbedf,	// (0x0005a303) list_tport_double_graphic_pane_g1

0xbeec,	// (0x0005a310) list_tport_double_graphic_pane_t1_ParamLimits

0xbeec,	// (0x0005a310) list_tport_double_graphic_pane_t1

0xbf01,	// (0x0005a325) list_tport_double_graphic_pane_t2_ParamLimits

0xbf01,	// (0x0005a325) list_tport_double_graphic_pane_t2

0x0001,

0xfc82,	// (0x0005e0a6) list_tport_double_graphic_pane_t_ParamLimits

0xfc82,	// (0x0005e0a6) list_tport_double_graphic_pane_t

0xe7c9,	// (0x0005cbed) main_cale_note_pane

0x9be3,	// (0x00058007) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9be3,	// (0x00058007) cell_vitu2_function_top_wide_pane_cp01

0xb5ab,	// (0x000599cf) wait_bar_pane_cp05_ParamLimits

0xe818,	// (0x0005cc3c) listscroll_cmail_pane

0xe6cb,	// (0x0005caef) list_cmail_pane

0xbf13,	// (0x0005a337) list_cmail_body_pane

0xbf2d,	// (0x0005a351) list_single_cmail_header_caption_pane

0xe6db,	// (0x0005caff) list_single_cmail_header_detail_pane_ParamLimits

0xe6db,	// (0x0005caff) list_single_cmail_header_detail_pane

0xe70d,	// (0x0005cb31) list_single_cmail_header_caption_pane_t1

0xbf4d,	// (0x0005a371) list_single_cmail_header_detail_pane_g1_ParamLimits

0xbf4d,	// (0x0005a371) list_single_cmail_header_detail_pane_g1

0x0875,	// (0x0004ec99) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0875,	// (0x0004ec99) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc87,	// (0x0005e0ab) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc87,	// (0x0005e0ab) list_single_cmail_header_detail_pane_g

0x0881,	// (0x0004eca5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0881,	// (0x0004eca5) list_single_cmail_header_detail_pane_t1

0x08e1,	// (0x0004ed05) list_single_cmail_header_editor_pane_bg_ParamLimits

0x08e1,	// (0x0004ed05) list_single_cmail_header_editor_pane_bg

0xe311,	// (0x0005c735) list_cmail_body_pane_g1

0xe731,	// (0x0005cb55) list_cmail_body_pane_t1

0xd6f4,	// (0x0005bb18) list_single_cmail_header_editor_pane_bg_g1

0x1855,	// (0x0004fc79) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd704,	// (0x0005bb28) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6fc,	// (0x0005bb20) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd928,	// (0x0005bd4c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd724,	// (0x0005bb48) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd714,	// (0x0005bb38) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd71c,	// (0x0005bb40) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1835,	// (0x0004fc59) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xbf65,	// (0x0005a389) calenote_gesture_pane_ParamLimits

0xbf65,	// (0x0005a389) calenote_gesture_pane

0xbf7f,	// (0x0005a3a3) calenote_window_pane_ParamLimits

0xbf7f,	// (0x0005a3a3) calenote_window_pane

0xe73f,	// (0x0005cb63) popup_note_window_cp01

0xbf97,	// (0x0005a3bb) calenote_swipe_1_pane_ParamLimits

0xbf97,	// (0x0005a3bb) calenote_swipe_1_pane

0xbafd,	// (0x00059f21) calenote_swipe_2_pane_ParamLimits

0xbafd,	// (0x00059f21) calenote_swipe_2_pane

0xe52b,	// (0x0005c94f) calenote_swipe_1_pane_g1_ParamLimits

0xe52b,	// (0x0005c94f) calenote_swipe_1_pane_g1

0xe538,	// (0x0005c95c) calenote_swipe_1_pane_g2_ParamLimits

0xe538,	// (0x0005c95c) calenote_swipe_1_pane_g2

0x0001,

0xfc24,	// (0x0005e048) calenote_swipe_1_pane_g_ParamLimits

0xfc24,	// (0x0005e048) calenote_swipe_1_pane_g

0xe751,	// (0x0005cb75) calenote_swipe_1_pane_t1_ParamLimits

0xe751,	// (0x0005cb75) calenote_swipe_1_pane_t1

0xe52b,	// (0x0005c94f) calenote_swipe_2_pane_g1_ParamLimits

0xe52b,	// (0x0005c94f) calenote_swipe_2_pane_g1

0xe770,	// (0x0005cb94) calenote_swipe_2_pane_g2_ParamLimits

0xe770,	// (0x0005cb94) calenote_swipe_2_pane_g2

0x0001,

0xfc93,	// (0x0005e0b7) calenote_swipe_2_pane_g_ParamLimits

0xfc93,	// (0x0005e0b7) calenote_swipe_2_pane_g

0xe77c,	// (0x0005cba0) calenote_swipe_2_pane_t1_ParamLimits

0xe77c,	// (0x0005cba0) calenote_swipe_2_pane_t1

0xe7c9,	// (0x0005cbed) main_mup_navstr_pane

0x8a50,	// (0x00056e74) main_mup3_pane_t7_ParamLimits

0x8a50,	// (0x00056e74) main_mup3_pane_t7

0x925e,	// (0x00057682) main_mp4_pane_g6_ParamLimits

0x925e,	// (0x00057682) main_mp4_pane_g6

0x95f8,	// (0x00057a1c) main_image3_pane_t4_ParamLimits

0x95f8,	// (0x00057a1c) main_image3_pane_t4

0xbfaa,	// (0x0005a3ce) popup_navstr_preview_pane_ParamLimits

0xbfaa,	// (0x0005a3ce) popup_navstr_preview_pane

0xbfb6,	// (0x0005a3da) scroll_navstr_pane_ParamLimits

0xbfb6,	// (0x0005a3da) scroll_navstr_pane

0xe7c9,	// (0x0005cbed) bg_popup_preview_window_pane_cp04

0x0900,	// (0x0004ed24) popup_navstr_preview_pane_t1

0xbfc2,	// (0x0005a3e6) scroll_navstr_pane_g1_ParamLimits

0xbfc2,	// (0x0005a3e6) scroll_navstr_pane_g1

0xbfcf,	// (0x0005a3f3) scroll_navstr_pane_t1_ParamLimits

0xbfcf,	// (0x0005a3f3) scroll_navstr_pane_t1

0xe748,	// (0x0005cb6c) bg_button_pane_cp014

0xe748,	// (0x0005cb6c) bg_button_pane_cp030

0xb9cd,	// (0x00059df1) list_double_fisheye_pane_g4_ParamLimits

0xb9cd,	// (0x00059df1) list_double_fisheye_pane_g4

0xb9d9,	// (0x00059dfd) list_double_fisheye_pane_g5_ParamLimits

0xb9d9,	// (0x00059dfd) list_double_fisheye_pane_g5

0x37f8,	// (0x00051c1c) sp_fs_scroll_pane_cp03

0xe60e,	// (0x0005ca32) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe61a,	// (0x0005ca3e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc41,	// (0x0005e065) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xbbfc,	// (0x0005a020) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe6d3,	// (0x0005caf7) sp_fs_scroll_pane_cp02

0x1566,	// (0x0004f98a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1566,	// (0x0004f98a) popup_sp_fs_calendar_preview_list_single_pane

0xe7c9,	// (0x0005cbed) main_cam6_pano_pane

0x7eb1,	// (0x000562d5) main_mup3_pane_ParamLimits

0xe7c9,	// (0x0005cbed) main_phacti_pane

0xb47e,	// (0x000598a2) bg_button_pane_cp11

0xb496,	// (0x000598ba) main_mobtv_info_pane_g2_ParamLimits

0xb496,	// (0x000598ba) main_mobtv_info_pane_g2

0x0001,

0xfba1,	// (0x0005dfc5) main_mobtv_info_pane_g_ParamLimits

0xfba1,	// (0x0005dfc5) main_mobtv_info_pane_g

0xb648,	// (0x00059a6c) sc_clock_pane_t5_ParamLimits

0xb648,	// (0x00059a6c) sc_clock_pane_t5

0xb840,	// (0x00059c64) main_radioblah_pane_g1_ParamLimits

0xe477,	// (0x0005c89b) main_radioblah_pane_t3_ParamLimits

0xe477,	// (0x0005c89b) main_radioblah_pane_t3

0xe48f,	// (0x0005c8b3) main_radioblah_pane_t4_ParamLimits

0xe48f,	// (0x0005c8b3) main_radioblah_pane_t4

0xb85e,	// (0x00059c82) main_radioblah_text_pane_ParamLimits

0xb85e,	// (0x00059c82) main_radioblah_text_pane

0xb86b,	// (0x00059c8f) main_radioblah_info_pane_g1_ParamLimits

0xb904,	// (0x00059d28) main_radioblah_info_pane_t4_ParamLimits

0xb904,	// (0x00059d28) main_radioblah_info_pane_t4

0xe818,	// (0x0005cc3c) main_sp_fs_calendar_pane

0xbfe1,	// (0x0005a405) main_phacti_pane_g1

0xbfe9,	// (0x0005a40d) phacti_note_pane_ParamLimits

0xbfe9,	// (0x0005a40d) phacti_note_pane

0x0917,	// (0x0004ed3b) phacti_term_pane_ParamLimits

0x0917,	// (0x0004ed3b) phacti_term_pane

0x092c,	// (0x0004ed50) phacti_note_pane_t1_ParamLimits

0x092c,	// (0x0004ed50) phacti_note_pane_t1

0x0943,	// (0x0004ed67) phacti_term_pane_g1

0x094b,	// (0x0004ed6f) phacti_term_pane_t1_ParamLimits

0x094b,	// (0x0004ed6f) phacti_term_pane_t1

0x0975,	// (0x0004ed99) popup_sp_fs_calendar_preview_list_single_pane_g1

0x097d,	// (0x0004eda1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc9d,	// (0x0005e0c1) popup_sp_fs_calendar_preview_list_single_pane_g

0x0985,	// (0x0004eda9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0985,	// (0x0004eda9) popup_sp_fs_calendar_preview_list_single_pane_t1

0x099b,	// (0x0004edbf) aid_popup_sp_fs_bg_corner_pane

0x1640,	// (0x0004fa64) popup_sp_fs_calendar_preview_bg_pane_g1

0xe7c9,	// (0x0005cbed) popup_sp_fs_calendar_preview_bg_pane

0x09a3,	// (0x0004edc7) popup_sp_fs_calendar_preview_list_pane

0x314b,	// (0x0005156f) bg_main_sp_fs_cale_pane_ParamLimits

0x314b,	// (0x0005156f) bg_main_sp_fs_cale_pane

0x09b4,	// (0x0004edd8) listscroll_cale_mrui_pane_ParamLimits

0x09b4,	// (0x0004edd8) listscroll_cale_mrui_pane

0x09c9,	// (0x0004eded) listscroll_sp_fs_schedule_track_pane

0x09d2,	// (0x0004edf6) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x09d2,	// (0x0004edf6) main_sp_fs_ctrlbar_pane_cp01

0x09e5,	// (0x0004ee09) main_sp_fs_ribbon_pane

0x09ed,	// (0x0004ee11) popup_sp_fs_cale_preview_window

0x1214,	// (0x0004f638) list_single_sp_fs_schedule_track_pane_ParamLimits

0x1214,	// (0x0004f638) list_single_sp_fs_schedule_track_pane

0xeef1,	// (0x0005d315) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xeef1,	// (0x0005d315) bg_sp_fs_highlight_list_pane_cp03

0xc04c,	// (0x0005a470) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc04c,	// (0x0005a470) list_single_sp_fs_schedule_track_pane_g1

0xc058,	// (0x0005a47c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc058,	// (0x0005a47c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfca2,	// (0x0005e0c6) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfca2,	// (0x0005e0c6) list_single_sp_fs_schedule_track_pane_g

0xc064,	// (0x0005a488) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc064,	// (0x0005a488) list_single_sp_fs_schedule_track_pane_t1

0xc082,	// (0x0005a4a6) sp_fs_schedule_track_pane_ParamLimits

0xc082,	// (0x0005a4a6) sp_fs_schedule_track_pane

0x09ff,	// (0x0004ee23) sp_fs_schedule_track_pane_g1

0x0a07,	// (0x0004ee2b) sp_fs_schedule_track_pane_g2

0x0a0f,	// (0x0004ee33) sp_fs_schedule_track_pane_g3

0x0a17,	// (0x0004ee3b) sp_fs_schedule_track_pane_g4

0x0a1f,	// (0x0004ee43) sp_fs_schedule_track_pane_g5

0x0004,

0xfca7,	// (0x0005e0cb) sp_fs_schedule_track_pane_g

0xd6f4,	// (0x0005bb18) bg_sp_fs_schedule_viewer_highlight_g1

0x1855,	// (0x0004fc79) bg_sp_fs_schedule_viewer_highlight_g2

0xd6fc,	// (0x0005bb20) bg_sp_fs_schedule_viewer_highlight_g3

0xd704,	// (0x0005bb28) bg_sp_fs_schedule_viewer_highlight_g4

0xd928,	// (0x0005bd4c) bg_sp_fs_schedule_viewer_highlight_g5

0xd714,	// (0x0005bb38) bg_sp_fs_schedule_viewer_highlight_g6

0xd71c,	// (0x0005bb40) bg_sp_fs_schedule_viewer_highlight_g7

0xd724,	// (0x0005bb48) bg_sp_fs_schedule_viewer_highlight_g8

0x1835,	// (0x0004fc59) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcb2,	// (0x0005e0d6) bg_sp_fs_schedule_viewer_highlight_g

0xe7c9,	// (0x0005cbed) bg_main_sp_fs_ribbon_pane

0xc094,	// (0x0005a4b8) main_sp_fs_ribbon_pane_g1

0x0a27,	// (0x0004ee4b) main_sp_fs_ribbon_pane_t1

0xc09d,	// (0x0005a4c1) main_sp_fs_ribbon_pane_t2

0x0a36,	// (0x0004ee5a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcc5,	// (0x0005e0e9) main_sp_fs_ribbon_pane_t

0x0a45,	// (0x0004ee69) main_sp_fs_ribbon_scheduler_pane

0x0a4d,	// (0x0004ee71) bg_main_sp_fs_ribbon_pane_g1

0x0a56,	// (0x0004ee7a) bg_main_sp_fs_ribbon_pane_g2

0x0a5f,	// (0x0004ee83) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfccc,	// (0x0005e0f0) bg_main_sp_fs_ribbon_pane_g

0x0a67,	// (0x0004ee8b) main_sp_fs_ribbon_scheduler_pane_g1

0x0a70,	// (0x0004ee94) main_sp_fs_ribbon_scheduler_pane_g2

0x0a79,	// (0x0004ee9d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcd3,	// (0x0005e0f7) main_sp_fs_ribbon_scheduler_pane_g

0x0a82,	// (0x0004eea6) list_cale_mrui_pane

0xc0ac,	// (0x0005a4d0) sp_fs_scroll_pane_cp07_ParamLimits

0xc0ac,	// (0x0005a4d0) sp_fs_scroll_pane_cp07

0xc0c8,	// (0x0005a4ec) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc0c8,	// (0x0005a4ec) bg_sp_fs_schedule_viewer_highlight

0x0a8f,	// (0x0004eeb3) list_single_sp_fs_schedule_track_pane_cp01

0x0a97,	// (0x0004eebb) list_sp_fs_schedule_track_pane

0x0a9f,	// (0x0004eec3) sp_fs_scroll_pane_cp06_ParamLimits

0x0a9f,	// (0x0004eec3) sp_fs_scroll_pane_cp06

0x1640,	// (0x0004fa64) bgmain_sp_fs_calendar_pane_g1

0xc0d5,	// (0x0005a4f9) list_single_cale_mrui_pane_ParamLimits

0xc0d5,	// (0x0005a4f9) list_single_cale_mrui_pane

0x0ab1,	// (0x0004eed5) list_single_cale_mrui_row_pane_ParamLimits

0x0ab1,	// (0x0004eed5) list_single_cale_mrui_row_pane

0x0abe,	// (0x0004eee2) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0abe,	// (0x0004eee2) list_single_cale_mrui_row_pane_g1

0x0b03,	// (0x0004ef27) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0b03,	// (0x0004ef27) list_single_cale_mrui_row_pane_t1

0xc0f9,	// (0x0005a51d) list_single_cale_mrui_row_pane_t2_ParamLimits

0xc0f9,	// (0x0005a51d) list_single_cale_mrui_row_pane_t2

0x0b15,	// (0x0004ef39) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0b15,	// (0x0004ef39) list_single_cale_mrui_row_pane_t3

0x0b44,	// (0x0004ef68) list_single_cale_mrui_row_pane_t4_ParamLimits

0x0b44,	// (0x0004ef68) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce1,	// (0x0005e105) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce1,	// (0x0005e105) list_single_cale_mrui_row_pane_t

0xc15f,	// (0x0005a583) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xc15f,	// (0x0005a583) list_single_cmail_header_editor_pane_bg_cp01

0xc181,	// (0x0005a5a5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xc181,	// (0x0005a5a5) list_single_cmail_header_editor_pane_bg_cp02

0xc19d,	// (0x0005a5c1) main_radioblah_text_pane_t1_ParamLimits

0xc19d,	// (0x0005a5c1) main_radioblah_text_pane_t1

0x0b73,	// (0x0004ef97) cam6_indi_pane_cp01

0x0b7b,	// (0x0004ef9f) cam6_mode_pane_cp01

0x0b83,	// (0x0004efa7) cam6_pano_pane

0x0b8c,	// (0x0004efb0) cam6_zoom_pane_cp01

0x0b96,	// (0x0004efba) cam6_pano_image_pane

0x0b9f,	// (0x0004efc3) cam6_pano_pane_g1

0xe311,	// (0x0005c735) cam6_pano_pane_g2

0x0ba8,	// (0x0004efcc) cam6_pano_pane_g3

0x0bb1,	// (0x0004efd5) cam6_pano_pane_g4

0x3c90,	// (0x000520b4) cam6_pano_pane_g5

0x0bba,	// (0x0004efde) cam6_pano_pane_g6

0x0bc2,	// (0x0004efe6) cam6_pano_pane_g7

0x0bca,	// (0x0004efee) cam6_pano_pane_g8

0x0bd3,	// (0x0004eff7) cam6_pano_pane_g9

0x0008,

0xfcea,	// (0x0005e10e) cam6_pano_pane_g

0xe7c9,	// (0x0005cbed) main_browser_tag_pane

0x08f8,	// (0x0004ed1c) grid_navstr_albumart_pane

0x0bde,	// (0x0004f002) cell_navstr_albumart_pane_ParamLimits

0x0bde,	// (0x0004f002) cell_navstr_albumart_pane

0x0bfa,	// (0x0004f01e) cell_navstr_albumart_pane_g1

0x319d,	// (0x000515c1) cell_navstr_albumart_pane_g2

0x31ad,	// (0x000515d1) cell_navstr_albumart_pane_g3

0x31a5,	// (0x000515c9) cell_navstr_albumart_pane_g4

0x0003,

0xfcfd,	// (0x0005e121) cell_navstr_albumart_pane_g

0xc1b7,	// (0x0005a5db) bt_list_pane_ParamLimits

0xc1b7,	// (0x0005a5db) bt_list_pane

0xc1d0,	// (0x0005a5f4) bt_list_pane_t1

0xc1df,	// (0x0005a603) bt_list_pane_t2

0x0001,

0xfd06,	// (0x0005e12a) bt_list_pane_t

0xe7c9,	// (0x0005cbed) main_cale_prevew_pane

0xc1ee,	// (0x0005a612) popup_cale_preview_window_ParamLimits

0xc1ee,	// (0x0005a612) popup_cale_preview_window

0xe818,	// (0x0005cc3c) bg_popup_preview_window_pane_cp05_ParamLimits

0xe818,	// (0x0005cc3c) bg_popup_preview_window_pane_cp05

0x0c02,	// (0x0004f026) list_cale_preview_pane_ParamLimits

0x0c02,	// (0x0004f026) list_cale_preview_pane

0xc20b,	// (0x0005a62f) list_double_cale_preview_pane_ParamLimits

0xc20b,	// (0x0005a62f) list_double_cale_preview_pane

0xc21f,	// (0x0005a643) list_single_cale_preview_pane_ParamLimits

0xc21f,	// (0x0005a643) list_single_cale_preview_pane

0xc237,	// (0x0005a65b) list_single_cale_preview_pane_g1

0xc23f,	// (0x0005a663) list_single_cale_preview_pane_t1_ParamLimits

0xc23f,	// (0x0005a663) list_single_cale_preview_pane_t1

0xc254,	// (0x0005a678) list_double_cale_preview_pane_g1

0xc25c,	// (0x0005a680) list_double_cale_preview_pane_t1_ParamLimits

0xc25c,	// (0x0005a680) list_double_cale_preview_pane_t1

0xc271,	// (0x0005a695) list_double_cale_preview_pane_t2_ParamLimits

0xc271,	// (0x0005a695) list_double_cale_preview_pane_t2

0x0001,

0xfd0b,	// (0x0005e12f) list_double_cale_preview_pane_t_ParamLimits

0xfd0b,	// (0x0005e12f) list_double_cale_preview_pane_t

0xe7c9,	// (0x0005cbed) main_ezdial_pane

0xe818,	// (0x0005cc3c) main_sp_fs_email_pane_ParamLimits

0xbb5d,	// (0x00059f81) cmail_ddmenu_btn01_pane_ParamLimits

0xbb5d,	// (0x00059f81) cmail_ddmenu_btn01_pane

0xbb7a,	// (0x00059f9e) cmail_ddmenu_btn02_pane_ParamLimits

0xbb7a,	// (0x00059f9e) cmail_ddmenu_btn02_pane

0xbb98,	// (0x00059fbc) cmail_ddmenu_btn03_pane_ParamLimits

0xbb98,	// (0x00059fbc) cmail_ddmenu_btn03_pane

0xbc39,	// (0x0005a05d) main_sp_fs_ctrlbar_pane_ParamLimits

0xbc53,	// (0x0005a077) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xbf13,	// (0x0005a337) list_cmail_body_pane_ParamLimits

0xe71b,	// (0x0005cb3f) bg_button_pane_cp12

0xe724,	// (0x0005cb48) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe724,	// (0x0005cb48) list_single_cmail_header_detail_pane_g3

0x08bd,	// (0x0004ece1) list_single_cmail_header_detail_pane_t2_ParamLimits

0x08bd,	// (0x0004ece1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc8e,	// (0x0005e0b2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc8e,	// (0x0005e0b2) list_single_cmail_header_detail_pane_t

0x0960,	// (0x0004ed84) phacti_term_pane_t2_ParamLimits

0x0960,	// (0x0004ed84) phacti_term_pane_t2

0x0001,

0xfc98,	// (0x0005e0bc) phacti_term_pane_t_ParamLimits

0xfc98,	// (0x0005e0bc) phacti_term_pane_t

0x0c0e,	// (0x0004f032) aid_size_list_single_double

0xc289,	// (0x0005a6ad) popup_ezdial_listscroll_window

0xc2ab,	// (0x0005a6cf) popup_number_entry_window_cp01

0x160a,	// (0x0004fa2e) bg_popup_call_pane_cp09

0x0c1a,	// (0x0004f03e) ezdial_list_pane

0x0c22,	// (0x0004f046) scroll_pane_cp23

0x2330,	// (0x00050754) bg_button_pane_cp028_ParamLimits

0x2330,	// (0x00050754) bg_button_pane_cp028

0xc2b9,	// (0x0005a6dd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc2b9,	// (0x0005a6dd) cmail_ddmenu_btn01_pane_g1

0xc2cb,	// (0x0005a6ef) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc2cb,	// (0x0005a6ef) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd10,	// (0x0005e134) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd10,	// (0x0005e134) cmail_ddmenu_btn01_pane_g

0x0c2a,	// (0x0004f04e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0c2a,	// (0x0004f04e) cmail_ddmenu_btn01_pane_t1

0x314b,	// (0x0005156f) bg_button_pane_cp029_ParamLimits

0x314b,	// (0x0005156f) bg_button_pane_cp029

0xc2d7,	// (0x0005a6fb) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc2d7,	// (0x0005a6fb) cmail_ddmenu_btn02_pane_g1

0xc2ef,	// (0x0005a713) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc2ef,	// (0x0005a713) cmail_ddmenu_btn02_pane_t1

0xeef1,	// (0x0005d315) bg_button_pane_cp031_ParamLimits

0xeef1,	// (0x0005d315) bg_button_pane_cp031

0xc2d7,	// (0x0005a6fb) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc2d7,	// (0x0005a6fb) cmail_ddmenu_btn03_pane_g1

0xc2ef,	// (0x0005a713) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc2ef,	// (0x0005a713) cmail_ddmenu_btn03_pane_t1

0x9493,	// (0x000578b7) cell_dialer2_keypad_pane_t1_ParamLimits

0x94ad,	// (0x000578d1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x94ad,	// (0x000578d1) cell_dialer2_keypad_pane_t1_copy1

0xb2ab,	// (0x000596cf) ncimui_group_button_pane

0xe818,	// (0x0005cc3c) main_sp_fs_calendar_pane_ParamLimits

0xbf2d,	// (0x0005a351) list_single_cmail_header_caption_pane_ParamLimits

0x09ab,	// (0x0004edcf) aid_recal_txt_sm_pane

0xe7c9,	// (0x0005cbed) mian_recal_day_pane

0x09ed,	// (0x0004ee11) popup_sp_fs_cale_preview_window_ParamLimits

0x0c40,	// (0x0004f064) list_recal_day_pane

0x0c83,	// (0x0004f0a7) list_single_recal_day_pane_ParamLimits

0x0c83,	// (0x0004f0a7) list_single_recal_day_pane

0x0c95,	// (0x0004f0b9) list_single_recal_day_pane_g1_ParamLimits

0x0c95,	// (0x0004f0b9) list_single_recal_day_pane_g1

0x0ca1,	// (0x0004f0c5) list_single_recal_day_pane_g2_ParamLimits

0x0ca1,	// (0x0004f0c5) list_single_recal_day_pane_g2

0x0cad,	// (0x0004f0d1) list_single_recal_day_pane_g3_ParamLimits

0x0cad,	// (0x0004f0d1) list_single_recal_day_pane_g3

0xc313,	// (0x0005a737) list_single_recal_day_pane_g4_ParamLimits

0xc313,	// (0x0005a737) list_single_recal_day_pane_g4

0x0cb9,	// (0x0004f0dd) list_single_recal_day_pane_g5_ParamLimits

0x0cb9,	// (0x0004f0dd) list_single_recal_day_pane_g5

0x0cc5,	// (0x0004f0e9) list_single_recal_day_pane_g6_ParamLimits

0x0cc5,	// (0x0004f0e9) list_single_recal_day_pane_g6

0x0004,

0xfd1f,	// (0x0005e143) list_single_recal_day_pane_g_ParamLimits

0xfd1f,	// (0x0005e143) list_single_recal_day_pane_g

0x0cd9,	// (0x0004f0fd) list_single_recal_day_pane_t1

0x0ceb,	// (0x0004f10f) list_single_recal_day_pane_t2

0x0001,

0xfd2a,	// (0x0005e14e) list_single_recal_day_pane_t

0xc32b,	// (0x0005a74f) ncimui_query_button_pane_ParamLimits

0xc32b,	// (0x0005a74f) ncimui_query_button_pane

0xc33b,	// (0x0005a75f) ncimui_query_button_pane_t1_ParamLimits

0xc33b,	// (0x0005a75f) ncimui_query_button_pane_t1

0x0cfd,	// (0x0004f121) ncimui_query_button_pane_t2_ParamLimits

0x0cfd,	// (0x0004f121) ncimui_query_button_pane_t2

0x0001,

0xfd2f,	// (0x0005e153) ncimui_query_button_pane_t_ParamLimits

0xfd2f,	// (0x0005e153) ncimui_query_button_pane_t

0xc34e,	// (0x0005a772) query_button_pane_ParamLimits

0xc34e,	// (0x0005a772) query_button_pane

0xe7c9,	// (0x0005cbed) bg_button_pane_cp0028

0x0d10,	// (0x0004f134) query_button_pane_t1

0x7ecd,	// (0x000562f1) main_tport_pane_ParamLimits

0xbe10,	// (0x0005a234) bg_popup_window_pane_cp01_ParamLimits

0xbe10,	// (0x0005a234) bg_popup_window_pane_cp01

0xbe1e,	// (0x0005a242) heading_pane_cp08_ParamLimits

0xbe1e,	// (0x0005a242) heading_pane_cp08

0xbe2c,	// (0x0005a250) heading_pane_cp07_ParamLimits

0xbe2c,	// (0x0005a250) heading_pane_cp07

0xbe9c,	// (0x0005a2c0) cell_tport_appsw_pane_g2

0x0002,

0xfc7b,	// (0x0005e09f) cell_tport_appsw_pane_g

0x756f,	// (0x00055993) input_candi_list_open_g1

0x1a41,	// (0x0004fe65) list_cale_time_pane_g6_ParamLimits

0x1a41,	// (0x0004fe65) list_cale_time_pane_g6

0x8412,	// (0x00056836) aid_size_touch_calib_1_ParamLimits

0x8412,	// (0x00056836) aid_size_touch_calib_1

0x841e,	// (0x00056842) aid_size_touch_calib_2_ParamLimits

0x841e,	// (0x00056842) aid_size_touch_calib_2

0x842c,	// (0x00056850) aid_size_touch_calib_3_ParamLimits

0x842c,	// (0x00056850) aid_size_touch_calib_3

0x843c,	// (0x00056860) aid_size_touch_calib_4_ParamLimits

0x843c,	// (0x00056860) aid_size_touch_calib_4

0x844a,	// (0x0005686e) main_touch_calib_button_group_pane_ParamLimits

0x844a,	// (0x0005686e) main_touch_calib_button_group_pane

0x8458,	// (0x0005687c) main_touch_calib_pane_g1_ParamLimits

0x8464,	// (0x00056888) main_touch_calib_pane_g2_ParamLimits

0x8470,	// (0x00056894) main_touch_calib_pane_g3_ParamLimits

0x847c,	// (0x000568a0) main_touch_calib_pane_g4_ParamLimits

0xf6c4,	// (0x0005dae8) main_touch_calib_pane_g_ParamLimits

0x8488,	// (0x000568ac) main_touch_calib_pane_t1_ParamLimits

0x849f,	// (0x000568c3) main_touch_calib_pane_t2_ParamLimits

0x84b8,	// (0x000568dc) main_touch_calib_pane_t3_ParamLimits

0x84ce,	// (0x000568f2) main_touch_calib_pane_t4_ParamLimits

0x84e4,	// (0x00056908) main_touch_calib_pane_t5_ParamLimits

0xf6cd,	// (0x0005daf1) main_touch_calib_pane_t_ParamLimits

0x3a43,	// (0x00051e67) list_single_fp_cale_pane_g3_ParamLimits

0x3a43,	// (0x00051e67) list_single_fp_cale_pane_g3

0x7eb1,	// (0x000562d5) bg_button_pane_cp012_ParamLimits

0x7eb1,	// (0x000562d5) bg_vkb2_func_pane_cp03_ParamLimits

0xa38d,	// (0x000587b1) cell_vitu2_function_top_pane_g1_ParamLimits

0x7eb1,	// (0x000562d5) bg_vkb2_func_pane_cp04_ParamLimits

0xb231,	// (0x00059655) main_ncimui_button_group_pane_ParamLimits

0xb231,	// (0x00059655) main_ncimui_button_group_pane

0xb299,	// (0x000596bd) main_ncimui_pane_t3_ParamLimits

0xb299,	// (0x000596bd) main_ncimui_pane_t3

0x090e,	// (0x0004ed32) phacti_button_group_pane

0x0c0e,	// (0x0004f032) aid_size_list_single_double_ParamLimits

0xc289,	// (0x0005a6ad) popup_ezdial_listscroll_window_ParamLimits

0xc2ab,	// (0x0005a6cf) popup_number_entry_window_cp01_ParamLimits

0xc35b,	// (0x0005a77f) phacti_button_pane_ParamLimits

0xc35b,	// (0x0005a77f) phacti_button_pane

0xe7c9,	// (0x0005cbed) bg_button_pane_cp14

0x0d1e,	// (0x0004f142) phacti_button_pane_t1

0xc36c,	// (0x0005a790) main_touch_calib_button_pane_ParamLimits

0xc36c,	// (0x0005a790) main_touch_calib_button_pane

0xef71,	// (0x0005d395) bg_button_pane_cp18_ParamLimits

0xef71,	// (0x0005d395) bg_button_pane_cp18

0x0d2c,	// (0x0004f150) main_touch_calib_button_pane_t1_ParamLimits

0x0d2c,	// (0x0004f150) main_touch_calib_button_pane_t1

0x0d42,	// (0x0004f166) main_touch_calib_button_pane_t2_ParamLimits

0x0d42,	// (0x0004f166) main_touch_calib_button_pane_t2

0x0001,

0xfd34,	// (0x0005e158) main_touch_calib_button_pane_t_ParamLimits

0xfd34,	// (0x0005e158) main_touch_calib_button_pane_t

0xe7c9,	// (0x0005cbed) cell_ncimui_button_pane

0xe7c9,	// (0x0005cbed) bg_button_pane_cp032

0x0d60,	// (0x0004f184) cell_ncimui_button_pane_t1

0x9509,	// (0x0005792d) image3_infobar_pane_ParamLimits

0x9509,	// (0x0005792d) image3_infobar_pane

0xb66a,	// (0x00059a8e) fs_bigclock_status_pane_ParamLimits

0xb66a,	// (0x00059a8e) fs_bigclock_status_pane

0xb677,	// (0x00059a9b) main_fs_bigclock_clock_pane_ParamLimits

0xb677,	// (0x00059a9b) main_fs_bigclock_clock_pane

0xb693,	// (0x00059ab7) main_fs_bigclock_indi_pane_ParamLimits

0xb693,	// (0x00059ab7) main_fs_bigclock_indi_pane

0xb6c1,	// (0x00059ae5) main_fs_bigclock_swipe_pane_ParamLimits

0xb6c1,	// (0x00059ae5) main_fs_bigclock_swipe_pane

0xe7c9,	// (0x0005cbed) main_fs_clock_dumped_data

0xb6fb,	// (0x00059b1f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb6fb,	// (0x00059b1f) list_single_fs_bigclock_indicator_pane_g1

0xb71a,	// (0x00059b3e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb71a,	// (0x00059b3e) list_single_fs_bigclock_indicator_pane_g2

0xb734,	// (0x00059b58) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb734,	// (0x00059b58) list_single_fs_bigclock_indicator_pane_g3

0xb750,	// (0x00059b74) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb750,	// (0x00059b74) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbd5,	// (0x0005dff9) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbd5,	// (0x0005dff9) list_single_fs_bigclock_indicator_pane_g

0xb77f,	// (0x00059ba3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb77f,	// (0x00059ba3) list_single_fs_bigclock_indicator_pane_t1

0xb7a7,	// (0x00059bcb) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb7a7,	// (0x00059bcb) list_single_fs_bigclock_indicator_pane_t2

0xb7cf,	// (0x00059bf3) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb7cf,	// (0x00059bf3) list_single_fs_bigclock_indicator_pane_t3

0xb7f7,	// (0x00059c1b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb7f7,	// (0x00059c1b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbe0,	// (0x0005e004) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbe0,	// (0x0005e004) list_single_fs_bigclock_indicator_pane_t

0x0d6e,	// (0x0004f192) image3_infobar_fav_pane_ParamLimits

0x0d6e,	// (0x0004f192) image3_infobar_fav_pane

0x0d7e,	// (0x0004f1a2) image3_infobar_loc_pane_ParamLimits

0x0d7e,	// (0x0004f1a2) image3_infobar_loc_pane

0x0d94,	// (0x0004f1b8) image3_infobar_time_pane_ParamLimits

0x0d94,	// (0x0004f1b8) image3_infobar_time_pane

0x1640,	// (0x0004fa64) image3_infobar_time_pane_g1

0x0da4,	// (0x0004f1c8) image3_infobar_time_pane_t1

0x1640,	// (0x0004fa64) image3_infobar_loc_pane_g1

0x0db2,	// (0x0004f1d6) image3_infobar_loc_pane_g2

0x0001,

0xfd39,	// (0x0005e15d) image3_infobar_loc_pane_g

0x0dba,	// (0x0004f1de) image3_infobar_loc_pane_t1

0x1640,	// (0x0004fa64) image3_infobar_fav_pane_g1

0x0dc8,	// (0x0004f1ec) image3_infobar_fav_pane_g2

0x0001,

0xfd3e,	// (0x0005e162) image3_infobar_fav_pane_g

0x0dd0,	// (0x0004f1f4) fs_bigclock_status_battery_pane

0x0dd9,	// (0x0004f1fd) fs_bigclock_status_signal_pane

0x0de2,	// (0x0004f206) fs_bigclock_status_title_pane

0x0deb,	// (0x0004f20f) fs_bigclock_status_signal_pane_g1

0x0df4,	// (0x0004f218) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd43,	// (0x0005e167) fs_bigclock_status_signal_pane_g

0x0dfc,	// (0x0004f220) fs_bigclock_status_battery_pane_g1

0x0e05,	// (0x0004f229) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd48,	// (0x0005e16c) fs_bigclock_status_battery_pane_g

0x0e0d,	// (0x0004f231) fs_bigclock_status_title_pane_t1

0xc37c,	// (0x0005a7a0) main_fs_bigclock_clock_pane_g1

0xc37c,	// (0x0005a7a0) main_fs_bigclock_clock_pane_g2

0xc38b,	// (0x0005a7af) main_fs_bigclock_clock_pane_g3

0xc38b,	// (0x0005a7af) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd4d,	// (0x0005e171) main_fs_bigclock_clock_pane_g

0xc39b,	// (0x0005a7bf) main_fs_bigclock_clock_pane_t1

0xc3b0,	// (0x0005a7d4) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd56,	// (0x0005e17a) main_fs_bigclock_clock_pane_t

0x0e1b,	// (0x0004f23f) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0e1b,	// (0x0004f23f) list_single_fs_bigclock_indicator_pane

0x0e2c,	// (0x0004f250) list_single_fs_bigclock_pane_ParamLimits

0x0e2c,	// (0x0004f250) list_single_fs_bigclock_pane

0x0e52,	// (0x0004f276) main_fs_bigclock_indicator_pane_t1

0x0e61,	// (0x0004f285) list_single_fs_bigclock_pane_g1

0x0e69,	// (0x0004f28d) list_single_fs_bigclock_pane_t1

0x1640,	// (0x0004fa64) main_fs_bigclock_swipe_pane_g1

0x0eac,	// (0x0004f2d0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd67,	// (0x0005e18b) main_fs_bigclock_swipe_pane_g

0x0eb4,	// (0x0004f2d8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0eb4,	// (0x0004f2d8) main_fs_bigclock_swipe_pane_t1

0x6f3b,	// (0x0005535f) call_type_pane_ParamLimits

0xe7c9,	// (0x0005cbed) main_btmg_pane

0x0aea,	// (0x0004ef0e) list_single_cale_mrui_row_pane_g2_ParamLimits

0x0aea,	// (0x0004ef0e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcda,	// (0x0005e0fe) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcda,	// (0x0005e0fe) list_single_cale_mrui_row_pane_g

0x0c69,	// (0x0004f08d) list_recal_vselct_arw_lo_pane

0x0c71,	// (0x0004f095) list_recal_vselct_arw_up_pane

0x0c79,	// (0x0004f09d) list_recal_vselct_pane

0xc407,	// (0x0005a82b) btmg_button_pane

0xc413,	// (0x0005a837) main_btmg_pane_g1

0xe7c9,	// (0x0005cbed) bg_button_pane_cp044

0x0ed1,	// (0x0004f2f5) btmg_button_pane_t1

0x32ef,	// (0x00051713) aid_listscroll_gen

0xe818,	// (0x0005cc3c) main_cntbar_detail_pane

0xe6cb,	// (0x0005caef) list_cmail_folder_pane

0x37f8,	// (0x00051c1c) sp_fs_scroll_pane_cp03_ParamLimits

0xc41b,	// (0x0005a83f) list_single_fs_dyc_pane_cp01_ParamLimits

0xc41b,	// (0x0005a83f) list_single_fs_dyc_pane_cp01

0x0edf,	// (0x0004f303) aid_size_cmail_indent

0x0ee8,	// (0x0004f30c) list_single_dyc_row_pane_cp01

0xc459,	// (0x0005a87d) cntbar_detail_list_pane_ParamLimits

0xc459,	// (0x0005a87d) cntbar_detail_list_pane

0xc499,	// (0x0005a8bd) main_cntbar_detail_cont_pane_ParamLimits

0xc499,	// (0x0005a8bd) main_cntbar_detail_cont_pane

0x6f2f,	// (0x00055353) scroll_pane_cp032_ParamLimits

0x6f2f,	// (0x00055353) scroll_pane_cp032

0xc4a5,	// (0x0005a8c9) cntbar_detail_list_event_pane_ParamLimits

0xc4a5,	// (0x0005a8c9) cntbar_detail_list_event_pane

0xc467,	// (0x0005a88b) cntbar_detail_list_shct_pane

0x18a3,	// (0x0004fcc7) aid_list_gen

0x0ef1,	// (0x0004f315) aid_scroll

0x0efa,	// (0x0004f31e) aid_size_touch_scroll_bar

0xb998,	// (0x00059dbc) aid_list_double

0xc4b5,	// (0x0005a8d9) aid_list_single

0xc4be,	// (0x0005a8e2) aid_list_single_lg

0xc4c7,	// (0x0005a8eb) aid_list_z_g_a_sm

0xc4cf,	// (0x0005a8f3) aid_list_z_g_d

0xc4d7,	// (0x0005a8fb) aid_txt_z_prm

0xc4e5,	// (0x0005a909) aid_txt_z_prm_cp01

0xc4f3,	// (0x0005a917) aid_txt_z_sec

0xc501,	// (0x0005a925) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc501,	// (0x0005a925) main_cntbar_detail_cont_pane_g1

0xc50e,	// (0x0005a932) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc50e,	// (0x0005a932) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd6c,	// (0x0005e190) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd6c,	// (0x0005e190) main_cntbar_detail_cont_pane_g

0x0f03,	// (0x0004f327) main_cntbar_detail_cont_pane_t1

0x0f11,	// (0x0004f335) main_cntbar_detail_cont_pane_t2

0x0f1f,	// (0x0004f343) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd71,	// (0x0005e195) main_cntbar_detail_cont_pane_t

0xc51a,	// (0x0005a93e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc51a,	// (0x0005a93e) cell_cntbar_detail_list_shct_pane

0x0f2d,	// (0x0004f351) cntbar_detail_list_shct_pane_g1

0x0f36,	// (0x0004f35a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd78,	// (0x0005e19c) cntbar_detail_list_shct_pane_g

0xc52e,	// (0x0005a952) cntbar_detail_list_event_pane_g1_ParamLimits

0xc52e,	// (0x0005a952) cntbar_detail_list_event_pane_g1

0xc53a,	// (0x0005a95e) cntbar_detail_list_event_pane_g2_ParamLimits

0xc53a,	// (0x0005a95e) cntbar_detail_list_event_pane_g2

0x0005,

0xfd7d,	// (0x0005e1a1) cntbar_detail_list_event_pane_g_ParamLimits

0xfd7d,	// (0x0005e1a1) cntbar_detail_list_event_pane_g

0xc5a8,	// (0x0005a9cc) cntbar_detail_list_event_pane_t1_ParamLimits

0xc5a8,	// (0x0005a9cc) cntbar_detail_list_event_pane_t1

0xc5bd,	// (0x0005a9e1) cntbar_detail_list_event_pane_t2_ParamLimits

0xc5bd,	// (0x0005a9e1) cntbar_detail_list_event_pane_t2

0x0002,

0xfd8a,	// (0x0005e1ae) cntbar_detail_list_event_pane_t_ParamLimits

0xfd8a,	// (0x0005e1ae) cntbar_detail_list_event_pane_t

0x1640,	// (0x0004fa64) cell_cntbar_detail_list_shct_pane_g1

0x72d3,	// (0x000556f7) navi_pane_mv_g3

0xe818,	// (0x0005cc3c) main_cntbar_detail_pane_ParamLimits

0xe7c9,	// (0x0005cbed) main_notif_wgt_pane

0x918b,	// (0x000575af) aid_tch_main_mp4_pane_g4

0x93f4,	// (0x00057818) popup_slider_window_cp02

0x0c5f,	// (0x0004f083) list_recal_day_event_pane

0xc439,	// (0x0005a85d) cntbar_detail_btn_pane_ParamLimits

0xc439,	// (0x0005a85d) cntbar_detail_btn_pane

0xc449,	// (0x0005a86d) cntbar_detail_btn_pane_cp01_ParamLimits

0xc449,	// (0x0005a86d) cntbar_detail_btn_pane_cp01

0xc467,	// (0x0005a88b) cntbar_detail_list_shct_pane_ParamLimits

0xc473,	// (0x0005a897) cntbar_detail_pane_g1_ParamLimits

0xc473,	// (0x0005a897) cntbar_detail_pane_g1

0xc483,	// (0x0005a8a7) cntbar_detail_pane_t1_ParamLimits

0xc483,	// (0x0005a8a7) cntbar_detail_pane_t1

0xc546,	// (0x0005a96a) cntbar_detail_list_event_pane_g3_ParamLimits

0xc546,	// (0x0005a96a) cntbar_detail_list_event_pane_g3

0xc55e,	// (0x0005a982) cntbar_detail_list_event_pane_g4_ParamLimits

0xc55e,	// (0x0005a982) cntbar_detail_list_event_pane_g4

0xc576,	// (0x0005a99a) cntbar_detail_list_event_pane_g5_ParamLimits

0xc576,	// (0x0005a99a) cntbar_detail_list_event_pane_g5

0xc58e,	// (0x0005a9b2) cntbar_detail_list_event_pane_g6_ParamLimits

0xc58e,	// (0x0005a9b2) cntbar_detail_list_event_pane_g6

0xc5d2,	// (0x0005a9f6) cntbar_detail_list_event_pane_t3_ParamLimits

0xc5d2,	// (0x0005a9f6) cntbar_detail_list_event_pane_t3

0xc5e4,	// (0x0005aa08) popup_notif_wgt_window_ParamLimits

0xc5e4,	// (0x0005aa08) popup_notif_wgt_window

0xc5f4,	// (0x0005aa18) popup_submenu_window_cp01_ParamLimits

0xc5f4,	// (0x0005aa18) popup_submenu_window_cp01

0x160a,	// (0x0004fa2e) bg_popup_window_pane_cp10

0x0f3f,	// (0x0004f363) listscroll_notif_wgt_pane

0x0f51,	// (0x0004f375) list_notif_wgt_window

0x0f5a,	// (0x0004f37e) scroll_pane_cp033

0xc604,	// (0x0005aa28) list_notif_wgt_row_pane_ParamLimits

0xc604,	// (0x0005aa28) list_notif_wgt_row_pane

0x0f63,	// (0x0004f387) aid_size_list_notif_wgt_del

0x0f70,	// (0x0004f394) list_notif_wgt_row_pane_g1

0x0f7c,	// (0x0004f3a0) list_notif_wgt_row_pane_g2

0x0f8b,	// (0x0004f3af) list_notif_wgt_row_pane_g3

0x0002,

0xfd91,	// (0x0005e1b5) list_notif_wgt_row_pane_g

0x0f98,	// (0x0004f3bc) list_notif_wgt_row_pane_t1

0x0fae,	// (0x0004f3d2) list_notif_wgt_row_pane_t2

0x0fc0,	// (0x0004f3e4) list_notif_wgt_row_pane_t3

0x0002,

0xfd98,	// (0x0005e1bc) list_notif_wgt_row_pane_t

0xd942,	// (0x0005bd66) list_recal_day_event_pane_g1

0x0fd2,	// (0x0004f3f6) list_recal_day_event_pane_t1

0xe7c9,	// (0x0005cbed) bg_button_pane_cp045

0xc618,	// (0x0005aa3c) cntbar_detail_btn_pane_t1

0x314b,	// (0x0005156f) main_callh_pane_ParamLimits

0x314b,	// (0x0005156f) main_callh_pane

0xe7c9,	// (0x0005cbed) main_coverflow0_pane

0xe7c9,	// (0x0005cbed) main_wgtman_pane

0xb6d9,	// (0x00059afd) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb6d9,	// (0x00059afd) main_fs_bigclock_unlock_btn_pane

0xbe94,	// (0x0005a2b8) bg_button_pane_cp16

0xbea4,	// (0x0005a2c8) cell_tport_appsw_pane_g3

0xc626,	// (0x0005aa4a) cf0_flow_pane_ParamLimits

0xc626,	// (0x0005aa4a) cf0_flow_pane

0x0fe1,	// (0x0004f405) listscroll_cf0_pane

0x0fec,	// (0x0004f410) main_cf0_pane_g1

0xc635,	// (0x0005aa59) main_cf0_pane_t1_ParamLimits

0xc635,	// (0x0005aa59) main_cf0_pane_t1

0xc649,	// (0x0005aa6d) main_cf0_pane_t2_ParamLimits

0xc649,	// (0x0005aa6d) main_cf0_pane_t2

0x0001,

0xfda4,	// (0x0005e1c8) main_cf0_pane_t_ParamLimits

0xfda4,	// (0x0005e1c8) main_cf0_pane_t

0x0ffe,	// (0x0004f422) scroll_pane_cp11

0xc65d,	// (0x0005aa81) cf0_flow_pane_g1

0xc665,	// (0x0005aa89) cf0_flow_pane_g2

0x0001,

0xfda9,	// (0x0005e1cd) cf0_flow_pane_g

0xc66d,	// (0x0005aa91) cf0_flow_pane_t1

0xe7c9,	// (0x0005cbed) main_call6_pane

0xe7c9,	// (0x0005cbed) main_calllock_pane

0xc67b,	// (0x0005aa9f) call6_btn_grp_pane_ParamLimits

0xc67b,	// (0x0005aa9f) call6_btn_grp_pane

0xc688,	// (0x0005aaac) call6_pane_g1_ParamLimits

0xc688,	// (0x0005aaac) call6_pane_g1

0xc698,	// (0x0005aabc) popup_call6_1st_window_ParamLimits

0xc698,	// (0x0005aabc) popup_call6_1st_window

0xc6a8,	// (0x0005aacc) popup_call6_2nd_window_ParamLimits

0xc6a8,	// (0x0005aacc) popup_call6_2nd_window

0xc6b8,	// (0x0005aadc) cell_call6_btn_pane_ParamLimits

0xc6b8,	// (0x0005aadc) cell_call6_btn_pane

0x160a,	// (0x0004fa2e) bg_popup_call2_in_pane_cp03

0x1009,	// (0x0004f42d) popup_call6_1st_window_g1

0x1011,	// (0x0004f435) popup_call6_1st_window_g2

0x1019,	// (0x0004f43d) popup_call6_1st_window_g3

0x0002,

0xfdae,	// (0x0005e1d2) popup_call6_1st_window_g

0x1021,	// (0x0004f445) popup_call6_1st_window_t1

0x1030,	// (0x0004f454) popup_call6_1st_window_t2

0x1040,	// (0x0004f464) popup_call6_1st_window_t3

0x0002,

0xfdb5,	// (0x0005e1d9) popup_call6_1st_window_t

0x160a,	// (0x0004fa2e) bg_popup_call2_in_pane_cp04

0x1050,	// (0x0004f474) popup_call6_2nd_window_g1

0x1058,	// (0x0004f47c) popup_call6_2nd_window_g2

0x1060,	// (0x0004f484) popup_call6_2nd_window_g3

0x0002,

0xfdbc,	// (0x0005e1e0) popup_call6_2nd_window_g

0x1068,	// (0x0004f48c) popup_call6_2nd_window_t1

0x50d5,	// (0x000534f9) bg_button_pane_cp15

0xc6c9,	// (0x0005aaed) cell_call6_btn_pane_g1

0xc6d2,	// (0x0005aaf6) cell_call6_btn_pane_t1

0xc6e1,	// (0x0005ab05) listscroll_wgtman_pane_ParamLimits

0xc6e1,	// (0x0005ab05) listscroll_wgtman_pane

0xc6fd,	// (0x0005ab21) wgtman_btn_pane_ParamLimits

0xc6fd,	// (0x0005ab21) wgtman_btn_pane

0x1e5c,	// (0x00050280) aid_scroll_copy1

0x1080,	// (0x0004f4a4) list_wgtman_pane

0xc732,	// (0x0005ab56) wgtman_btn_pane_g1_ParamLimits

0xc732,	// (0x0005ab56) wgtman_btn_pane_g1

0xc75a,	// (0x0005ab7e) wgtman_btn_pane_t1_ParamLimits

0xc75a,	// (0x0005ab7e) wgtman_btn_pane_t1

0x108a,	// (0x0004f4ae) wgtman_btn_pane_t2_ParamLimits

0x108a,	// (0x0004f4ae) wgtman_btn_pane_t2

0x0001,

0xfdc3,	// (0x0005e1e7) wgtman_btn_pane_t_ParamLimits

0xfdc3,	// (0x0005e1e7) wgtman_btn_pane_t

0xc791,	// (0x0005abb5) listrow_wgtman_pane_ParamLimits

0xc791,	// (0x0005abb5) listrow_wgtman_pane

0xc7a8,	// (0x0005abcc) listrow_wgtman_pane_g1

0xc7b5,	// (0x0005abd9) listrow_wgtman_pane_g2

0x0001,

0xfdc8,	// (0x0005e1ec) listrow_wgtman_pane_g

0xc7d3,	// (0x0005abf7) listrow_wgtman_pane_t1

0xc7eb,	// (0x0005ac0f) listrow_wgtman_pane_t2

0x0001,

0xfdcd,	// (0x0005e1f1) listrow_wgtman_pane_t

0xc811,	// (0x0005ac35) wait_bar_pane_cp09

0x10a1,	// (0x0004f4c5) main_calllock_btn_pane

0x10ab,	// (0x0004f4cf) main_calllock_pane_g1

0xe7c9,	// (0x0005cbed) bg_button_pane_cp17

0x1077,	// (0x0004f49b) main_calllock_btn_pane_g1

0x10b7,	// (0x0004f4db) main_calllock_btn_pane_t1

0xe7c9,	// (0x0005cbed) main_dialer3_pane

0xe7c9,	// (0x0005cbed) main_fmrd2_pane

0x1640,	// (0x0004fa64) main_fs_bigclock_unlock_btn_pane_g1

0xc82b,	// (0x0005ac4f) main_fs_bigclock_unlock_btn_pane_t1

0xc839,	// (0x0005ac5d) area_fmrd2_info_pane_ParamLimits

0xc839,	// (0x0005ac5d) area_fmrd2_info_pane

0xc845,	// (0x0005ac69) area_fmrd2_visual_pane_ParamLimits

0xc845,	// (0x0005ac69) area_fmrd2_visual_pane

0xc853,	// (0x0005ac77) fmrd2_indi_pane_ParamLimits

0xc853,	// (0x0005ac77) fmrd2_indi_pane

0xc860,	// (0x0005ac84) area_fmrd2_visual_pane_g1

0xc868,	// (0x0005ac8c) area_fmrd2_visual_pane_t1

0xc878,	// (0x0005ac9c) area_fmrd2_visual_pane_t2

0xc888,	// (0x0005acac) area_fmrd2_visual_pane_t3

0x0002,

0xfdd7,	// (0x0005e1fb) area_fmrd2_visual_pane_t

0xc898,	// (0x0005acbc) area_fmrd2_info_pane_g1

0xc8a0,	// (0x0005acc4) area_fmrd2_info_pane_t1

0xc8b0,	// (0x0005acd4) area_fmrd2_info_pane_t2

0xc8c0,	// (0x0005ace4) area_fmrd2_info_pane_t3

0xc8d0,	// (0x0005acf4) area_fmrd2_info_pane_t4

0x0003,

0xfdde,	// (0x0005e202) area_fmrd2_info_pane_t

0xc8e0,	// (0x0005ad04) fmrd2_indi_pane_t1

0xc8f0,	// (0x0005ad14) fmrd2_indi_pane_t2

0xc900,	// (0x0005ad24) fmrd2_indi_pane_t3

0x0002,

0xfde7,	// (0x0005e20b) fmrd2_indi_pane_t

0xb761,	// (0x00059b85) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb761,	// (0x00059b85) list_single_fs_bigclock_indicator_pane_g5

0xb816,	// (0x00059c3a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb816,	// (0x00059c3a) list_single_fs_bigclock_indicator_pane_t5

0xbfff,	// (0x0005a423) aid_cell_bcale_month_pane_ParamLimits

0xbfff,	// (0x0005a423) aid_cell_bcale_month_pane

0xc01d,	// (0x0005a441) bcale_month_pane_ParamLimits

0xc01d,	// (0x0005a441) bcale_month_pane

0xc03b,	// (0x0005a45f) bcale_preview_pane_ParamLimits

0xc03b,	// (0x0005a45f) bcale_preview_pane

0x0e69,	// (0x0004f28d) list_single_fs_bigclock_pane_t1_ParamLimits

0x0e88,	// (0x0004f2ac) list_single_fs_bigclock_pane_t2_ParamLimits

0x0e88,	// (0x0004f2ac) list_single_fs_bigclock_pane_t2

0x0001,

0xfd62,	// (0x0005e186) list_single_fs_bigclock_pane_t_ParamLimits

0xfd62,	// (0x0005e186) list_single_fs_bigclock_pane_t

0xc823,	// (0x0005ac47) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd2,	// (0x0005e1f6) main_fs_bigclock_unlock_btn_pane_g

0xc910,	// (0x0005ad34) aid_dia3_key_size_ParamLimits

0xc910,	// (0x0005ad34) aid_dia3_key_size

0xc91c,	// (0x0005ad40) aid_dia3_listrow_size_ParamLimits

0xc91c,	// (0x0005ad40) aid_dia3_listrow_size

0xc92c,	// (0x0005ad50) dia3_keypad_fun_pane_ParamLimits

0xc92c,	// (0x0005ad50) dia3_keypad_fun_pane

0xc93c,	// (0x0005ad60) dia3_keypad_num_pane_ParamLimits

0xc93c,	// (0x0005ad60) dia3_keypad_num_pane

0xc94c,	// (0x0005ad70) dia3_listscroll_pane_ParamLimits

0xc94c,	// (0x0005ad70) dia3_listscroll_pane

0xc95a,	// (0x0005ad7e) dia3_numentry_pane_ParamLimits

0xc95a,	// (0x0005ad7e) dia3_numentry_pane

0x10c6,	// (0x0004f4ea) dia3_list_pane

0xc968,	// (0x0005ad8c) scroll_pane_cp12

0xe7c9,	// (0x0005cbed) bg_dia3_numentry_pane

0xc973,	// (0x0005ad97) dia3_numentry_pane_t1

0xc982,	// (0x0005ada6) cell_dia3_key_num_pane

0xc98a,	// (0x0005adae) cell_dia3_key0_fun_pane_ParamLimits

0xc98a,	// (0x0005adae) cell_dia3_key0_fun_pane

0xc997,	// (0x0005adbb) cell_dia3_key1_fun_pane_ParamLimits

0xc997,	// (0x0005adbb) cell_dia3_key1_fun_pane

0xc9a4,	// (0x0005adc8) dia3_listrow_pane

0xe1cd,	// (0x0005c5f1) bg_dia3_numentry_pane_g1

0xe7c9,	// (0x0005cbed) bg_button_pane_cp21

0xc9b1,	// (0x0005add5) cell_dia3_key_num_pane_t1

0xc9bf,	// (0x0005ade3) cell_dia3_key_num_pane_t2

0xc9ce,	// (0x0005adf2) cell_dia3_key_num_pane_t3

0xc9dd,	// (0x0005ae01) cell_dia3_key_num_pane_t4

0x0003,

0xfdee,	// (0x0005e212) cell_dia3_key_num_pane_t

0xe7c9,	// (0x0005cbed) bg_button_pane_cp19

0xc9ec,	// (0x0005ae10) cell_dia3_key0_fun_pane_g1

0xe7c9,	// (0x0005cbed) bg_button_pane_cp20

0xc9f4,	// (0x0005ae18) cell_dia3_key1_fun_pane_g1

0xc9fc,	// (0x0005ae20) area_left_week_number_pane

0xca0f,	// (0x0005ae33) area_top_day_name_pane

0xca1d,	// (0x0005ae41) frame_month_view_pane

0x10d1,	// (0x0004f4f5) grid_month_view_pane

0xca32,	// (0x0005ae56) cell_top_day_name_pane_ParamLimits

0xca32,	// (0x0005ae56) cell_top_day_name_pane

0xca4e,	// (0x0005ae72) cell_area_left_week_number_pane_ParamLimits

0xca4e,	// (0x0005ae72) cell_area_left_week_number_pane

0xca6f,	// (0x0005ae93) cell_month_view_pane_ParamLimits

0xca6f,	// (0x0005ae93) cell_month_view_pane

0x10df,	// (0x0004f503) frm_month_g1

0xca9b,	// (0x0005aebf) frm_month_g2

0xcaac,	// (0x0005aed0) frm_month_g3

0xcabd,	// (0x0005aee1) frm_month_g4

0xcace,	// (0x0005aef2) frm_month_g5

0xcadf,	// (0x0005af03) frm_month_g6

0xcaf2,	// (0x0005af16) frm_month_g7

0x10ec,	// (0x0004f510) frm_month_g8

0xcb05,	// (0x0005af29) frm_month_g9

0xcb12,	// (0x0005af36) frm_month_g10

0xcb1f,	// (0x0005af43) frm_month_g11

0xcb2c,	// (0x0005af50) frm_month_g12

0xcb39,	// (0x0005af5d) frm_month_g13

0xcb48,	// (0x0005af6c) frm_month_g14

0xcb57,	// (0x0005af7b) frm_month_g15

0xcb66,	// (0x0005af8a) frm_month_g16

0x000f,

0xfdf7,	// (0x0005e21b) frm_month_g

0x10f9,	// (0x0004f51d) cell_top_day_name_pane_t1

0xcb75,	// (0x0005af99) cell_area_left_week_number_pane_g1

0xcb84,	// (0x0005afa8) cell_area_left_week_number_pane_t1

0xeeff,	// (0x0005d323) cell_month_view_pane_g1

0xcb9a,	// (0x0005afbe) cell_month_view_pane_t1

0xe7c9,	// (0x0005cbed) main_fps_pane

0xe5d4,	// (0x0005c9f8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe5d4,	// (0x0005c9f8) cmail_ddmenu_btn02_pane_cp1

0xe5f0,	// (0x0005ca14) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe5f0,	// (0x0005ca14) cmail_ddmenu_btn02_pane_cp2

0xc2e3,	// (0x0005a707) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc2e3,	// (0x0005a707) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd15,	// (0x0005e139) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd15,	// (0x0005e139) cmail_ddmenu_btn02_pane_g

0xc301,	// (0x0005a725) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc301,	// (0x0005a725) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd1a,	// (0x0005e13e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd1a,	// (0x0005e13e) cmail_ddmenu_btn02_pane_t

0xcbb0,	// (0x0005afd4) fps_text_pane_ParamLimits

0xcbb0,	// (0x0005afd4) fps_text_pane

0xcbbd,	// (0x0005afe1) main_fps_pane_g1_ParamLimits

0xcbbd,	// (0x0005afe1) main_fps_pane_g1

0xcbc9,	// (0x0005afed) wait_bar_pane_cp010_ParamLimits

0xcbc9,	// (0x0005afed) wait_bar_pane_cp010

0xcbd5,	// (0x0005aff9) fps_text_pane_t1_ParamLimits

0xcbd5,	// (0x0005aff9) fps_text_pane_t1

0x98b1,	// (0x00057cd5) cam4_image_uncrop_pane_g1

0x98ba,	// (0x00057cde) cam4_image_uncrop_pane_g2

0x98c3,	// (0x00057ce7) cam4_image_uncrop_pane_g3

0x98cc,	// (0x00057cf0) cam4_image_uncrop_pane_g4

0x0003,

0xf860,	// (0x0005dc84) cam4_image_uncrop_pane_g

0xc9a4,	// (0x0005adc8) dia3_listrow_pane_ParamLimits

0xe7c9,	// (0x0005cbed) main_phob2_pane

0xbe76,	// (0x0005a29a) cell_tport_appsw_pane_cp02_ParamLimits

0xbe76,	// (0x0005a29a) cell_tport_appsw_pane_cp02

0xbe85,	// (0x0005a2a9) cell_tport_appsw_pane_cp03_ParamLimits

0xbe85,	// (0x0005a2a9) cell_tport_appsw_pane_cp03

0xe7c9,	// (0x0005cbed) phob2_contact_card_pane

0xe7c9,	// (0x0005cbed) phob2_listscroll_pane

0x110c,	// (0x0004f530) phob2_list_pane

0x1114,	// (0x0004f538) scroll_pane_cp034

0xcbee,	// (0x0005b012) phob2_cc_data_pane_ParamLimits

0xcbee,	// (0x0005b012) phob2_cc_data_pane

0xcc05,	// (0x0005b029) phob2_cc_listscroll_pane_ParamLimits

0xcc05,	// (0x0005b029) phob2_cc_listscroll_pane

0xc791,	// (0x0005abb5) list_double_large_graphic_phob2_pane_ParamLimits

0xc791,	// (0x0005abb5) list_double_large_graphic_phob2_pane

0xcc21,	// (0x0005b045) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xcc21,	// (0x0005b045) list_double_large_graphic_phob2_pane_g1

0xcc2e,	// (0x0005b052) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xcc2e,	// (0x0005b052) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe18,	// (0x0005e23c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe18,	// (0x0005e23c) list_double_large_graphic_phob2_pane_g

0xcc54,	// (0x0005b078) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xcc54,	// (0x0005b078) list_double_large_graphic_phob2_pane_t1

0xcc69,	// (0x0005b08d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xcc69,	// (0x0005b08d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe21,	// (0x0005e245) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe21,	// (0x0005e245) list_double_large_graphic_phob2_pane_t

0xe7c9,	// (0x0005cbed) list_highlight_pane_cp024

0xcc7e,	// (0x0005b0a2) phob2_cc_button_pane

0xcc86,	// (0x0005b0aa) phob2_cc_data_pane_g1_ParamLimits

0xcc86,	// (0x0005b0aa) phob2_cc_data_pane_g1

0xcc9b,	// (0x0005b0bf) phob2_cc_data_pane_g2_ParamLimits

0xcc9b,	// (0x0005b0bf) phob2_cc_data_pane_g2

0x0001,

0xfe26,	// (0x0005e24a) phob2_cc_data_pane_g_ParamLimits

0xfe26,	// (0x0005e24a) phob2_cc_data_pane_g

0xccab,	// (0x0005b0cf) phob2_cc_data_pane_t1_ParamLimits

0xccab,	// (0x0005b0cf) phob2_cc_data_pane_t1

0xccc4,	// (0x0005b0e8) phob2_cc_data_pane_t2_ParamLimits

0xccc4,	// (0x0005b0e8) phob2_cc_data_pane_t2

0xccdd,	// (0x0005b101) phob2_cc_data_pane_t3_ParamLimits

0xccdd,	// (0x0005b101) phob2_cc_data_pane_t3

0x0002,

0xfe2b,	// (0x0005e24f) phob2_cc_data_pane_t_ParamLimits

0xfe2b,	// (0x0005e24f) phob2_cc_data_pane_t

0x111c,	// (0x0004f540) phob2_cc_list_pane_ParamLimits

0x111c,	// (0x0004f540) phob2_cc_list_pane

0xe0e8,	// (0x0005c50c) scroll_pane_cp035_ParamLimits

0xe0e8,	// (0x0005c50c) scroll_pane_cp035

0xe818,	// (0x0005cc3c) bg_button_pane_cp033

0x1128,	// (0x0004f54c) phob2_cc_button_pane_g1

0x1134,	// (0x0004f558) phob2_cc_button_pane_t1

0x1149,	// (0x0004f56d) phob2_cc_button_pane_t2

0x0001,

0xfe32,	// (0x0005e256) phob2_cc_button_pane_t

0xccf6,	// (0x0005b11a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xccf6,	// (0x0005b11a) list_double_large_graphic_phob2_cc_pane

0xcd45,	// (0x0005b169) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xcd45,	// (0x0005b169) list_double_large_graphic_phob2_cc_pane_g1

0xcd56,	// (0x0005b17a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xcd56,	// (0x0005b17a) list_double_large_graphic_phob2_cc_pane_g2

0xcd62,	// (0x0005b186) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xcd62,	// (0x0005b186) list_double_large_graphic_phob2_cc_pane_g3

0xcd6e,	// (0x0005b192) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xcd6e,	// (0x0005b192) list_double_large_graphic_phob2_cc_pane_g4

0xcd7a,	// (0x0005b19e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xcd7a,	// (0x0005b19e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe37,	// (0x0005e25b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe37,	// (0x0005e25b) list_double_large_graphic_phob2_cc_pane_g

0xcd86,	// (0x0005b1aa) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xcd86,	// (0x0005b1aa) list_double_large_graphic_phob2_cc_pane_t1

0xcdaf,	// (0x0005b1d3) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xcdaf,	// (0x0005b1d3) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe42,	// (0x0005e266) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe42,	// (0x0005e266) list_double_large_graphic_phob2_cc_pane_t

0x115b,	// (0x0004f57f) list_highlight_pane_cp025_ParamLimits

0x115b,	// (0x0004f57f) list_highlight_pane_cp025

0xe818,	// (0x0005cc3c) bg_button_pane_cp033_ParamLimits

0x1128,	// (0x0004f54c) phob2_cc_button_pane_g1_ParamLimits

0x1134,	// (0x0004f558) phob2_cc_button_pane_t1_ParamLimits

0x1149,	// (0x0004f56d) phob2_cc_button_pane_t2_ParamLimits

0xfe32,	// (0x0005e256) phob2_cc_button_pane_t_ParamLimits

0x50c9,	// (0x000534ed) popup_wgtman_window

0xd812,	// (0x0005bc36) scroll_pane_cp038

0xc71a,	// (0x0005ab3e) wgtman_btn_pane_cp_01_ParamLimits

0xc71a,	// (0x0005ab3e) wgtman_btn_pane_cp_01

0x1169,	// (0x0004f58d) wgtman_content_pane

0x1172,	// (0x0004f596) wgtman_heading_pane

0xe7c9,	// (0x0005cbed) bg_heading_pane_cp02

0x117b,	// (0x0004f59f) wgtman_heading_pane_g1

0x1183,	// (0x0004f5a7) wgtman_heading_pane_t1

0x1191,	// (0x0004f5b5) scroll_pane_cp036

0x1199,	// (0x0004f5bd) wgtman_list_pane

0xe79b,	// (0x0005cbbf) wgtman_list_pane_t1_ParamLimits

0xe79b,	// (0x0005cbbf) wgtman_list_pane_t1

0x980e,	// (0x00057c32) cam4_grid_pane

0xa553,	// (0x00058977) bg_button_pane_cp015_ParamLimits

0xa568,	// (0x0005898c) bg_button_pane_cp016_ParamLimits

0xa574,	// (0x00058998) bg_button_pane_cp017_ParamLimits

0xa5cd,	// (0x000589f1) popup_vitu2_query_window_g3_ParamLimits

0xa5cd,	// (0x000589f1) popup_vitu2_query_window_g3

0xa66e,	// (0x00058a92) popup_vitu2_query_window_t6_ParamLimits

0xa66e,	// (0x00058a92) popup_vitu2_query_window_t6

0xa699,	// (0x00058abd) popup_vitu2_query_window_t7_ParamLimits

0xa699,	// (0x00058abd) popup_vitu2_query_window_t7

0xe7b5,	// (0x0005cbd9) cam4_grid_pane_g1

0xe7be,	// (0x0005cbe2) cam4_grid_pane_g2

0x11a1,	// (0x0004f5c5) cam4_grid_pane_g3

0x11aa,	// (0x0004f5ce) cam4_grid_pane_g4

0x0003,

0xfe47,	// (0x0005e26b) cam4_grid_pane_g

0x5dd1,	// (0x000541f5) aid_placing_vt_slider_lsc_ParamLimits

0x6104,	// (0x00054528) vidtel_button_pane_ParamLimits

0x6104,	// (0x00054528) vidtel_button_pane

0xe7c9,	// (0x0005cbed) bg_button_pane_cp034

0x11b5,	// (0x0004f5d9) vidtel_button_pane_g1

0x11bd,	// (0x0004f5e1) vidtel_button_pane_t1

0xd920,	// (0x0005bd44) aid_size_vtel_slider_touch

0xe0e8,	// (0x0005c50c) scroll_pane_cp039

0xb408,	// (0x0005982c) ncim_query_button_pane_cp01_ParamLimits

0xb427,	// (0x0005984b) ncimui_query_pane_g1_ParamLimits

0xe818,	// (0x0005cc3c) input_focus_pane_cp012_ParamLimits

0xe20b,	// (0x0005c62f) ncim_query_entry_pane_t1_ParamLimits

0xe0e8,	// (0x0005c50c) scroll_pane_cp039_ParamLimits

0x7245,	// (0x00055669) navi_pane_bcale_mc_g1

0x724d,	// (0x00055671) navi_pane_bcale_mc_t1

0xe626,	// (0x0005ca4a) main_sp_fs_email_pane_g1

0xe632,	// (0x0005ca56) main_sp_fs_email_pane_g2

0x0001,

0xfc4a,	// (0x0005e06e) main_sp_fs_email_pane_g

0x0af6,	// (0x0004ef1a) list_single_cale_mrui_row_pane_g3_ParamLimits

0x0af6,	// (0x0004ef1a) list_single_cale_mrui_row_pane_g3

0xc321,	// (0x0005a745) list_single_recal_day_pane_g5_event_pane

0x0cd1,	// (0x0004f0f5) list_single_recal_day_pane_g7

0x11d3,	// (0x0004f5f7) list_recal_day_event_pane_cp01

0x11dc,	// (0x0004f600) list_recal_vselct_arw_lo_pane_cp01

0x11e4,	// (0x0004f608) list_recal_vselct_arw_up_pane_cp01

0x11ec,	// (0x0004f610) list_recal_vselct_pane_cp01

0xd942,	// (0x0005bd66) list_recal_day_event_pane_cp01_g1

0x11f6,	// (0x0004f61a) list_recal_day_event_pane_cp01_t1

0x0cd9,	// (0x0004f0fd) list_single_recal_day_pane_t1_ParamLimits

0x0ceb,	// (0x0004f10f) list_single_recal_day_pane_t2_ParamLimits

0xfd2a,	// (0x0005e14e) list_single_recal_day_pane_t_ParamLimits

0xee84,	// (0x0005d2a8) bg_notes_pane_ParamLimits

0xef4f,	// (0x0005d373) list_notes_pane_ParamLimits

0x52ba,	// (0x000536de) scroll_pane_cp06_ParamLimits

0xef71,	// (0x0005d395) main_notes_pane_ParamLimits

0xe818,	// (0x0005cc3c) main_welc_pane

0xcdf9,	// (0x0005b21d) main_welc_body_pane_ParamLimits

0xcdf9,	// (0x0005b21d) main_welc_body_pane

0xce14,	// (0x0005b238) main_welc_opti_pane_ParamLimits

0xce14,	// (0x0005b238) main_welc_opti_pane

0xce79,	// (0x0005b29d) main_welc_pane_t1_ParamLimits

0xce79,	// (0x0005b29d) main_welc_pane_t1

0xd00d,	// (0x0005b431) main_welc_body_row_pane_ParamLimits

0xd00d,	// (0x0005b431) main_welc_body_row_pane

0xeef1,	// (0x0005d315) main_welc_opti_row_pane_ParamLimits

0xeef1,	// (0x0005d315) main_welc_opti_row_pane

0x122b,	// (0x0004f64f) main_welc_opti_row_pane_g1

0xd027,	// (0x0005b44b) main_welc_opti_row_pane_t1

0x1233,	// (0x0004f657) main_welc_body_row_pane_t1

0x0f49,	// (0x0004f36d) popup_notif_wgt_heading_pane

0x0f63,	// (0x0004f387) aid_size_list_notif_wgt_del_ParamLimits

0x0f70,	// (0x0004f394) list_notif_wgt_row_pane_g1_ParamLimits

0x0f7c,	// (0x0004f3a0) list_notif_wgt_row_pane_g2_ParamLimits

0x0f8b,	// (0x0004f3af) list_notif_wgt_row_pane_g3_ParamLimits

0xfd91,	// (0x0005e1b5) list_notif_wgt_row_pane_g_ParamLimits

0x0f98,	// (0x0004f3bc) list_notif_wgt_row_pane_t1_ParamLimits

0x0fae,	// (0x0004f3d2) list_notif_wgt_row_pane_t2_ParamLimits

0x0fc0,	// (0x0004f3e4) list_notif_wgt_row_pane_t3_ParamLimits

0xfd98,	// (0x0005e1bc) list_notif_wgt_row_pane_t_ParamLimits

0xc7a8,	// (0x0005abcc) listrow_wgtman_pane_g1_ParamLimits

0xc7b5,	// (0x0005abd9) listrow_wgtman_pane_g2_ParamLimits

0xfdc8,	// (0x0005e1ec) listrow_wgtman_pane_g_ParamLimits

0xc7d3,	// (0x0005abf7) listrow_wgtman_pane_t1_ParamLimits

0xc7eb,	// (0x0005ac0f) listrow_wgtman_pane_t2_ParamLimits

0xfdcd,	// (0x0005e1f1) listrow_wgtman_pane_t_ParamLimits

0xc811,	// (0x0005ac35) wait_bar_pane_cp09_ParamLimits

0xe7c9,	// (0x0005cbed) bg_popup_heading_pane_cp02

0x1242,	// (0x0004f666) popup_notif_wgt_heading_pane_g1

0x124a,	// (0x0004f66e) popup_notif_wgt_heading_pane_t1

0xe7c9,	// (0x0005cbed) main_vids_pane

0xe7c9,	// (0x0005cbed) vids_listscroll_pane

0xd036,	// (0x0005b45a) scroll_pane_cp040

0xe7c9,	// (0x0005cbed) vids_list_pane

0xd041,	// (0x0005b465) vids_list_double_pane_ParamLimits

0xd041,	// (0x0005b465) vids_list_double_pane

0xd055,	// (0x0005b479) vids_list_double_pane_g1

0xd05e,	// (0x0005b482) vids_list_double_pane_t1

0xd06e,	// (0x0005b492) vids_list_double_pane_t2

0x0001,

0xfe66,	// (0x0005e28a) vids_list_double_pane_t

0x7eb1,	// (0x000562d5) main_ncimui_pane_ParamLimits

0xb249,	// (0x0005966d) main_ncimui_pane_g1_ParamLimits

0xb257,	// (0x0005967b) main_ncimui_pane_g2_ParamLimits

0xb257,	// (0x0005967b) main_ncimui_pane_g2

0x0001,

0xfb4b,	// (0x0005df6f) main_ncimui_pane_g_ParamLimits

0xfb4b,	// (0x0005df6f) main_ncimui_pane_g

0xce2f,	// (0x0005b253) main_welc_pane_g1_ParamLimits

0xce2f,	// (0x0005b253) main_welc_pane_g1

0xce3b,	// (0x0005b25f) main_welc_pane_g2_ParamLimits

0xce3b,	// (0x0005b25f) main_welc_pane_g2

0x0003,

0xfe50,	// (0x0005e274) main_welc_pane_g_ParamLimits

0xfe50,	// (0x0005e274) main_welc_pane_g

0x529c,	// (0x000536c0) listscroll_mce_pane_ParamLimits

0x730f,	// (0x00055733) wait_bar_pane_cp10

0x32f7,	// (0x0005171b) main_cale_day_pane_ParamLimits

0x32f7,	// (0x0005171b) main_cale_week_pane_ParamLimits

0xee84,	// (0x0005d2a8) main_messa_pane_ParamLimits

0x8c55,	// (0x00057079) main_clock2_btn_pane_ParamLimits

0x8c55,	// (0x00057079) main_clock2_btn_pane

0x3abd,	// (0x00051ee1) main_clock2_btn_pane_cp01_ParamLimits

0x3abd,	// (0x00051ee1) main_clock2_btn_pane_cp01

0x0a82,	// (0x0004eea6) list_cale_mrui_pane_ParamLimits

0x0ff6,	// (0x0004f41a) main_cf0_pane_g2

0x0001,

0xfd9f,	// (0x0005e1c3) main_cf0_pane_g

0xc9fc,	// (0x0005ae20) area_left_week_number_pane_ParamLimits

0xca0f,	// (0x0005ae33) area_top_day_name_pane_ParamLimits

0xca1d,	// (0x0005ae41) frame_month_view_pane_ParamLimits

0x10d1,	// (0x0004f4f5) grid_month_view_pane_ParamLimits

0x10df,	// (0x0004f503) frm_month_g1_ParamLimits

0xca9b,	// (0x0005aebf) frm_month_g2_ParamLimits

0xcaac,	// (0x0005aed0) frm_month_g3_ParamLimits

0xcabd,	// (0x0005aee1) frm_month_g4_ParamLimits

0xcace,	// (0x0005aef2) frm_month_g5_ParamLimits

0xcadf,	// (0x0005af03) frm_month_g6_ParamLimits

0xcaf2,	// (0x0005af16) frm_month_g7_ParamLimits

0x10ec,	// (0x0004f510) frm_month_g8_ParamLimits

0xcb05,	// (0x0005af29) frm_month_g9_ParamLimits

0xcb12,	// (0x0005af36) frm_month_g10_ParamLimits

0xcb1f,	// (0x0005af43) frm_month_g11_ParamLimits

0xcb2c,	// (0x0005af50) frm_month_g12_ParamLimits

0xcb39,	// (0x0005af5d) frm_month_g13_ParamLimits

0xcb48,	// (0x0005af6c) frm_month_g14_ParamLimits

0xcb57,	// (0x0005af7b) frm_month_g15_ParamLimits

0xcb66,	// (0x0005af8a) frm_month_g16_ParamLimits

0xfdf7,	// (0x0005e21b) frm_month_g_ParamLimits

0x10f9,	// (0x0004f51d) cell_top_day_name_pane_t1_ParamLimits

0xcb75,	// (0x0005af99) cell_area_left_week_number_pane_g1_ParamLimits

0xcb84,	// (0x0005afa8) cell_area_left_week_number_pane_t1_ParamLimits

0xeeff,	// (0x0005d323) cell_month_view_pane_g1_ParamLimits

0xcb9a,	// (0x0005afbe) cell_month_view_pane_t1_ParamLimits

0xee7c,	// (0x0005d2a0) main_clock2_btn_pane_g1

0x1258,	// (0x0004f67c) main_clock2_btn_pane_t1

0xe818,	// (0x0005cc3c) listscroll_cmail_pane_ParamLimits

0xe626,	// (0x0005ca4a) main_sp_fs_email_pane_g1_ParamLimits

0xe632,	// (0x0005ca56) main_sp_fs_email_pane_g2_ParamLimits

0xfc4a,	// (0x0005e06e) main_sp_fs_email_pane_g_ParamLimits

0x0c40,	// (0x0004f064) list_recal_day_pane_ParamLimits

0x0c51,	// (0x0004f075) mian_recal_day_pane_t1

0xbd5d,	// (0x0005a181) list_single_dyc_row_text_pane_t4_ParamLimits

0xbd5d,	// (0x0005a181) list_single_dyc_row_text_pane_t4

0xbd9a,	// (0x0005a1be) list_single_dyc_row_text_pane_t5_ParamLimits

0xbd9a,	// (0x0005a1be) list_single_dyc_row_text_pane_t5

0x0814,	// (0x0004ec38) list_single_dyc_row_text_pane_t6_ParamLimits

0x0814,	// (0x0004ec38) list_single_dyc_row_text_pane_t6

0x6e6c,	// (0x00055290) aid_mgn_list_cale_time_pane

0x7eb1,	// (0x000562d5) main_gallery2_pane_ParamLimits

0x3ad1,	// (0x00051ef5) main_clock2_pane_cp01_t1

0x3adf,	// (0x00051f03) main_clock2_pane_cp01_t3

0x0001,

0xf737,	// (0x0005db5b) main_clock2_pane_cp01_t

0x57c4,	// (0x00053be8) cale_week_scroll_pane_g16_ParamLimits

0x57c4,	// (0x00053be8) cale_week_scroll_pane_g16

0x160a,	// (0x0004fa2e) vorec_slider_pane

0x11bd,	// (0x0004f5e1) vidtel_button_pane_t1_ParamLimits

0xc37c,	// (0x0005a7a0) main_fs_bigclock_clock_pane_g1_ParamLimits

0xc37c,	// (0x0005a7a0) main_fs_bigclock_clock_pane_g2_ParamLimits

0xc38b,	// (0x0005a7af) main_fs_bigclock_clock_pane_g3_ParamLimits

0xc38b,	// (0x0005a7af) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd4d,	// (0x0005e171) main_fs_bigclock_clock_pane_g_ParamLimits

0xc39b,	// (0x0005a7bf) main_fs_bigclock_clock_pane_t1_ParamLimits

0xc3b0,	// (0x0005a7d4) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd56,	// (0x0005e17a) main_fs_bigclock_clock_pane_t_ParamLimits

0x859d,	// (0x000569c1) main_mup3_lyrics_pane_ParamLimits

0x859d,	// (0x000569c1) main_mup3_lyrics_pane

0xd0a4,	// (0x0005b4c8) main_mup3_lyrics_pane_t1_ParamLimits

0xd0a4,	// (0x0005b4c8) main_mup3_lyrics_pane_t1

0x9175,	// (0x00057599) aid_main_mp4_pane_t1_area

0x917f,	// (0x000575a3) aid_main_mp4_pane_t2_area

0x928c,	// (0x000576b0) main_mp4_pane_g7_ParamLimits

0x928c,	// (0x000576b0) main_mp4_pane_g7

0x9298,	// (0x000576bc) main_mp4_pane_g8_ParamLimits

0x9298,	// (0x000576bc) main_mp4_pane_g8

0x96b6,	// (0x00057ada) aid_call6_pane_g1_size

0xcd24,	// (0x0005b148) list_double_large_graphic_phob2_other_pane_ParamLimits

0xcd24,	// (0x0005b148) list_double_large_graphic_phob2_other_pane

0xd0cb,	// (0x0005b4ef) list_double_large_graphic_phob2_other_pane_g1

0xe7c9,	// (0x0005cbed) list_highlight_pane_cp026

0xe818,	// (0x0005cc3c) main_welc_pane_ParamLimits

0xbbc8,	// (0x00059fec) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xbbc8,	// (0x00059fec) main_sp_fs_ctrlbar_pane_g3

0xbbe2,	// (0x0005a006) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xbbe2,	// (0x0005a006) main_sp_fs_ctrlbar_pane_g4

0xbc14,	// (0x0005a038) toolbar2_fixed_button_pane_cp01

0xbc1f,	// (0x0005a043) toolbar2_fixed_button_pane_cp02

0xbc2c,	// (0x0005a050) toolbar2_fixed_button_pane_cp03

0xcdea,	// (0x0005b20e) list_welc_entry_pane_ParamLimits

0xcdea,	// (0x0005b20e) list_welc_entry_pane

0xce49,	// (0x0005b26d) main_welc_pane_g3_ParamLimits

0xce49,	// (0x0005b26d) main_welc_pane_g3

0xce97,	// (0x0005b2bb) main_welc_pane_t2_ParamLimits

0xce97,	// (0x0005b2bb) main_welc_pane_t2

0xceab,	// (0x0005b2cf) main_welc_pane_t3_ParamLimits

0xceab,	// (0x0005b2cf) main_welc_pane_t3

0x0005,

0xfe59,	// (0x0005e27d) main_welc_pane_t_ParamLimits

0xfe59,	// (0x0005e27d) main_welc_pane_t

0xcfb1,	// (0x0005b3d5) welc_button_pane_ParamLimits

0xcfb1,	// (0x0005b3d5) welc_button_pane

0xcfff,	// (0x0005b423) welc_service_logo_pane_ParamLimits

0xcfff,	// (0x0005b423) welc_service_logo_pane

0xd0d3,	// (0x0005b4f7) list_single_welc_entry_pane_ParamLimits

0xd0d3,	// (0x0005b4f7) list_single_welc_entry_pane

0xd0e4,	// (0x0005b508) list_single_welc_entry_pane_g1

0xd0ec,	// (0x0005b510) list_single_welc_entry_pane_t1

0xd0fa,	// (0x0005b51e) list_single_welc_entry_pane_t2

0x0001,

0xfe6b,	// (0x0005e28f) list_single_welc_entry_pane_t

0xe7c9,	// (0x0005cbed) bg_button_pane_cp035

0x1266,	// (0x0004f68a) welc_button_pane_t1

0x1274,	// (0x0004f698) welc_service_logo_pane_g1

0x127d,	// (0x0004f6a1) welc_service_logo_pane_g2

0x0001,

0xfe70,	// (0x0005e294) welc_service_logo_pane_g

0x50d5,	// (0x000534f9) main_int_radio_pane

0xe09d,	// (0x0005c4c1) list_single_fs_dyc_pane_g1

0xcc3a,	// (0x0005b05e) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xcc3a,	// (0x0005b05e) list_double_large_graphic_phob2_pane_g3

0xcc46,	// (0x0005b06a) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xcc46,	// (0x0005b06a) list_double_large_graphic_phob2_pane_g4

0xd108,	// (0x0005b52c) main_int_radio1_pane_ParamLimits

0xd108,	// (0x0005b52c) main_int_radio1_pane

0x1286,	// (0x0004f6aa) find_pane_cp02

0xd11e,	// (0x0005b542) input_focus_pane_cp12_ParamLimits

0xd11e,	// (0x0005b542) input_focus_pane_cp12

0xd12a,	// (0x0005b54e) input_focus_pane_cp13_ParamLimits

0xd12a,	// (0x0005b54e) input_focus_pane_cp13

0xd142,	// (0x0005b566) input_focus_pane_cp14_ParamLimits

0xd142,	// (0x0005b566) input_focus_pane_cp14

0x128f,	// (0x0004f6b3) int_radio1_listscroll_pane

0xd15a,	// (0x0005b57e) main_int_radio1_pane_g1_ParamLimits

0xd15a,	// (0x0005b57e) main_int_radio1_pane_g1

0xd166,	// (0x0005b58a) main_int_radio1_pane_t1_ParamLimits

0xd166,	// (0x0005b58a) main_int_radio1_pane_t1

0xd178,	// (0x0005b59c) main_int_radio1_pane_t2_ParamLimits

0xd178,	// (0x0005b59c) main_int_radio1_pane_t2

0xd18c,	// (0x0005b5b0) main_int_radio1_pane_t3_ParamLimits

0xd18c,	// (0x0005b5b0) main_int_radio1_pane_t3

0xd1a0,	// (0x0005b5c4) main_int_radio1_pane_t4_ParamLimits

0xd1a0,	// (0x0005b5c4) main_int_radio1_pane_t4

0x1299,	// (0x0004f6bd) main_int_radio1_pane_t5_ParamLimits

0x1299,	// (0x0004f6bd) main_int_radio1_pane_t5

0xd1b7,	// (0x0005b5db) main_int_radio1_pane_t6_ParamLimits

0xd1b7,	// (0x0005b5db) main_int_radio1_pane_t6

0xd1c9,	// (0x0005b5ed) main_int_radio1_pane_t7_ParamLimits

0xd1c9,	// (0x0005b5ed) main_int_radio1_pane_t7

0xd1db,	// (0x0005b5ff) main_int_radio1_pane_t8_ParamLimits

0xd1db,	// (0x0005b5ff) main_int_radio1_pane_t8

0xd1ed,	// (0x0005b611) main_int_radio1_pane_t9_ParamLimits

0xd1ed,	// (0x0005b611) main_int_radio1_pane_t9

0xd1ff,	// (0x0005b623) main_int_radio1_pane_t10_ParamLimits

0xd1ff,	// (0x0005b623) main_int_radio1_pane_t10

0xd230,	// (0x0005b654) main_int_radio1_pane_t11_ParamLimits

0xd230,	// (0x0005b654) main_int_radio1_pane_t11

0xd261,	// (0x0005b685) main_int_radio1_pane_t12_ParamLimits

0xd261,	// (0x0005b685) main_int_radio1_pane_t12

0x000b,

0xfe75,	// (0x0005e299) main_int_radio1_pane_t_ParamLimits

0xfe75,	// (0x0005e299) main_int_radio1_pane_t

0x110c,	// (0x0004f530) int_radio_list_pane

0x1114,	// (0x0004f538) scroll_pane_cp037

0x12ab,	// (0x0004f6cf) list_double_large_graphic_int_radio_pane_ParamLimits

0x12ab,	// (0x0004f6cf) list_double_large_graphic_int_radio_pane

0x12bf,	// (0x0004f6e3) list_double_large_graphic_int_radio_pane_g1

0x12c8,	// (0x0004f6ec) list_double_large_graphic_int_radio_pane_t1

0x12d6,	// (0x0004f6fa) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe8e,	// (0x0005e2b2) list_double_large_graphic_int_radio_pane_t

0xe7c9,	// (0x0005cbed) list_highlight_pane_cp027

0x1204,	// (0x0004f628) main_button_pane_4

0xce59,	// (0x0005b27d) main_welc_pane_g4_ParamLimits

0xce59,	// (0x0005b27d) main_welc_pane_g4

0xcebf,	// (0x0005b2e3) main_welc_pane_t4_ParamLimits

0xcebf,	// (0x0005b2e3) main_welc_pane_t4

0xced1,	// (0x0005b2f5) main_welc_pane_t5_ParamLimits

0xced1,	// (0x0005b2f5) main_welc_pane_t5

0xcf05,	// (0x0005b329) main_welc_pane_t6_ParamLimits

0xcf05,	// (0x0005b329) main_welc_pane_t6

0xcfbf,	// (0x0005b3e3) welc_button_pane_2_ParamLimits

0xcfbf,	// (0x0005b3e3) welc_button_pane_2

0xcfd5,	// (0x0005b3f9) welc_button_pane_3_ParamLimits

0xcfd5,	// (0x0005b3f9) welc_button_pane_3

0x120c,	// (0x0004f630) welc_button_pane_4

0xcfef,	// (0x0005b413) welc_button_pane_5_ParamLimits

0xcfef,	// (0x0005b413) welc_button_pane_5

0x4e40,	// (0x00053264) main_popup_welc_pane

0x12f3,	// (0x0004f717) main_welc_sk_g3

0x12fd,	// (0x0004f721) main_welc_sk_g4

0x1307,	// (0x0004f72b) main_welc_sk_t3

0x1317,	// (0x0004f73b) main_welc_sk_t4

0x1327,	// (0x0004f74b) popup_welc_pane_t4

0x1335,	// (0x0004f759) popup_welc_pane_t5

0x1345,	// (0x0004f769) popup_welc_pane_t6

0x50d5,	// (0x000534f9) main_acti_pane

0xe7c9,	// (0x0005cbed) main_sso_pane

0xd278,	// (0x0005b69c) sso_body_pane_ParamLimits

0xd278,	// (0x0005b69c) sso_body_pane

0xd287,	// (0x0005b6ab) sso_logo_pane_ParamLimits

0xd287,	// (0x0005b6ab) sso_logo_pane

0xd2b0,	// (0x0005b6d4) sso_sk_pane_ParamLimits

0xd2b0,	// (0x0005b6d4) sso_sk_pane

0x1640,	// (0x0004fa64) main_sso_logo_pane_g1

0xd2bd,	// (0x0005b6e1) sso_sk_pane_t1_ParamLimits

0xd2bd,	// (0x0005b6e1) sso_sk_pane_t1

0xd2d1,	// (0x0005b6f5) sso_sk_pane_t2_ParamLimits

0xd2d1,	// (0x0005b6f5) sso_sk_pane_t2

0x0001,

0xfe93,	// (0x0005e2b7) sso_sk_pane_t_ParamLimits

0xfe93,	// (0x0005e2b7) sso_sk_pane_t

0x1387,	// (0x0004f7ab) aid_sso_gap

0x1390,	// (0x0004f7b4) aid_sso_txt1

0x139a,	// (0x0004f7be) aid_sso_txt2

0x13a4,	// (0x0004f7c8) aid_sso_txt3

0x0002,

0xfe98,	// (0x0005e2bc) aid_sso_txt

0x13ae,	// (0x0004f7d2) aid_sso_widget

0xd32e,	// (0x0005b752) sso_btn_pane_ParamLimits

0xd32e,	// (0x0005b752) sso_btn_pane

0xd3a7,	// (0x0005b7cb) sso_option_pane_ParamLimits

0xd3a7,	// (0x0005b7cb) sso_option_pane

0xd425,	// (0x0005b849) sso_query_pane_ParamLimits

0xd425,	// (0x0005b849) sso_query_pane

0xd477,	// (0x0005b89b) sso_query_pane_cp01_ParamLimits

0xd477,	// (0x0005b89b) sso_query_pane_cp01

0xd4cd,	// (0x0005b8f1) sso_t_hdr_pane_ParamLimits

0xd4cd,	// (0x0005b8f1) sso_t_hdr_pane

0xd4ec,	// (0x0005b910) sso_t_nml_pane_ParamLimits

0xd4ec,	// (0x0005b910) sso_t_nml_pane

0x13a4,	// (0x0004f7c8) sso_t_sub_pane

0xd294,	// (0x0005b6b8) sso_popup_window_ParamLimits

0xd294,	// (0x0005b6b8) sso_popup_window

0xd2e3,	// (0x0005b707) sso_apps_pane_ParamLimits

0xd2e3,	// (0x0005b707) sso_apps_pane

0xd306,	// (0x0005b72a) sso_body_pane_g1

0xd30e,	// (0x0005b732) sso_body_pane_t1

0xd31e,	// (0x0005b742) sso_body_pane_t2

0x0001,

0xfe9f,	// (0x0005e2c3) sso_body_pane_t

0xd379,	// (0x0005b79d) sso_btn_pane_cp01_ParamLimits

0xd379,	// (0x0005b79d) sso_btn_pane_cp01

0xd3f7,	// (0x0005b81b) sso_prog_pane_ParamLimits

0xd3f7,	// (0x0005b81b) sso_prog_pane

0x13b8,	// (0x0004f7dc) sso_t_hdr_pane_t1_ParamLimits

0x13b8,	// (0x0004f7dc) sso_t_hdr_pane_t1

0x13cb,	// (0x0004f7ef) input_focus_pane_cp10_ParamLimits

0x13cb,	// (0x0004f7ef) input_focus_pane_cp10

0x13e1,	// (0x0004f805) sso_query_pane_t1_ParamLimits

0x13e1,	// (0x0004f805) sso_query_pane_t1

0x13f4,	// (0x0004f818) sso_query_pane_t2_ParamLimits

0x13f4,	// (0x0004f818) sso_query_pane_t2

0x140e,	// (0x0004f832) sso_query_pane_t3_ParamLimits

0x140e,	// (0x0004f832) sso_query_pane_t3

0x1438,	// (0x0004f85c) sso_query_pane_t4_ParamLimits

0x1438,	// (0x0004f85c) sso_query_pane_t4

0x0003,

0xfea4,	// (0x0005e2c8) sso_query_pane_t_ParamLimits

0xfea4,	// (0x0005e2c8) sso_query_pane_t

0xe7c9,	// (0x0005cbed) bg_button_pane_cp22

0x12e4,	// (0x0004f708) sso_btn_pane_t1

0xd53c,	// (0x0005b960) sso_t_nml_pane_t1_ParamLimits

0xd53c,	// (0x0005b960) sso_t_nml_pane_t1

0x145c,	// (0x0004f880) sso_option_row_pane_ParamLimits

0x145c,	// (0x0004f880) sso_option_row_pane

0x1469,	// (0x0004f88d) sso_t_sub_pane_t1_ParamLimits

0x1469,	// (0x0004f88d) sso_t_sub_pane_t1

0xe818,	// (0x0005cc3c) bg_popup_window_pane_cp11_ParamLimits

0xe818,	// (0x0005cc3c) bg_popup_window_pane_cp11

0x147c,	// (0x0004f8a0) popup_sk_window_cp01_ParamLimits

0x147c,	// (0x0004f8a0) popup_sk_window_cp01

0x1489,	// (0x0004f8ad) sso_popup_body_pane_ParamLimits

0x1489,	// (0x0004f8ad) sso_popup_body_pane

0x1496,	// (0x0004f8ba) scroll_pane_cp21_ParamLimits

0x1496,	// (0x0004f8ba) scroll_pane_cp21

0x14a3,	// (0x0004f8c7) sso_popup_body_t_pane_ParamLimits

0x14a3,	// (0x0004f8c7) sso_popup_body_t_pane

0x14b0,	// (0x0004f8d4) sso_popup_body_t_hdr_pane_ParamLimits

0x14b0,	// (0x0004f8d4) sso_popup_body_t_hdr_pane

0x14be,	// (0x0004f8e2) sso_popup_body_t_nml_pane_ParamLimits

0x14be,	// (0x0004f8e2) sso_popup_body_t_nml_pane

0x14d9,	// (0x0004f8fd) sso_popup_body_t_sub_pane_ParamLimits

0x14d9,	// (0x0004f8fd) sso_popup_body_t_sub_pane

0x14fc,	// (0x0004f920) sso_popup_body_t_hdr_pane_t1

0xd559,	// (0x0005b97d) sso_popup_body_t_nml_pane_t1_ParamLimits

0xd559,	// (0x0005b97d) sso_popup_body_t_nml_pane_t1

0x150c,	// (0x0004f930) sso_popup_body_t_sub_pane_t1_ParamLimits

0x150c,	// (0x0004f930) sso_popup_body_t_sub_pane_t1

0x1640,	// (0x0004fa64) sso_prog_pane_g1

0xd5a0,	// (0x0005b9c4) sso_apps_pane_comp1_ParamLimits

0xd5a0,	// (0x0005b9c4) sso_apps_pane_comp1

0x1531,	// (0x0004f955) sso_apps_pane_comp1_g1

0x1539,	// (0x0004f95d) sso_apps_pane_comp1_t1

0x1547,	// (0x0004f96b) sso_option_row_pane_g1

0x154f,	// (0x0004f973) sso_option_row_pane_t1

0xcdd8,	// (0x0005b1fc) bg_welc_area_ParamLimits

0xcdd8,	// (0x0005b1fc) bg_welc_area

0xcf3b,	// (0x0005b35f) sso_t_hdr_pane_a_t1_ParamLimits

0xcf3b,	// (0x0005b35f) sso_t_hdr_pane_a_t1

0xcf4f,	// (0x0005b373) sso_t_nml_pane_a_t1_ParamLimits

0xcf4f,	// (0x0005b373) sso_t_nml_pane_a_t1

0xcf7d,	// (0x0005b3a1) sso_t_sub_pane_a_t1_ParamLimits

0xcf7d,	// (0x0005b3a1) sso_t_sub_pane_a_t1

0x12e4,	// (0x0004f708) sso_btn_pane_t1_copy1

0xe7c9,	// (0x0005cbed) welc_button_pane_2_comp1

0x1355,	// (0x0004f779) sso_t_hdr_pane_p_t1

0x1365,	// (0x0004f789) sso_t_nml_pane_p_t1

0x1375,	// (0x0004f799) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
