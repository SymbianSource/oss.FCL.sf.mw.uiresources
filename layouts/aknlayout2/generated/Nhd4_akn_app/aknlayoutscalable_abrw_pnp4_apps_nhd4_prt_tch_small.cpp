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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004a893 };

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
0x3467,	// (0x0004dcfa) Screen

0x3473,	// (0x0004dd06) application_window

0x34d9,	// (0x0004dd6c) area_bottom_pane_ParamLimits

0x34d9,	// (0x0004dd6c) area_bottom_pane

0x3531,	// (0x0004ddc4) area_top_pane_ParamLimits

0x3531,	// (0x0004ddc4) area_top_pane

0x3595,	// (0x0004de28) call_video_uplink_pane_ParamLimits

0x3595,	// (0x0004de28) call_video_uplink_pane

0x35d4,	// (0x0004de67) main_pane_ParamLimits

0x35d4,	// (0x0004de67) main_pane

0xde47,	// (0x000586da) context_pane

0x7166,	// (0x000519f9) navi_pane

0x718c,	// (0x00051a1f) popup_cale_events_window_ParamLimits

0x718c,	// (0x00051a1f) popup_cale_events_window

0xde5a,	// (0x000586ed) popup_mup_playback_window

0x71a4,	// (0x00051a37) signal_pane

0x4106,	// (0x0004e999) main_browser_pane

0x49a9,	// (0x0004f23c) main_burst_pane

0x6fe8,	// (0x0005187b) main_calc_pane

0xde2d,	// (0x000586c0) main_cale_day_pane

0x4481,	// (0x0004ed14) main_cale_month_pane

0xde2d,	// (0x000586c0) main_cale_week_pane

0x49a9,	// (0x0004f23c) main_call_pane

0x3c27,	// (0x0004e4ba) main_call_poc_pane

0x49a9,	// (0x0004f23c) main_camera_pane

0x49a9,	// (0x0004f23c) main_chi_dic_pane

0xc88e,	// (0x00057121) main_clock_pane

0x3c27,	// (0x0004e4ba) main_fmradio_pane

0x49a9,	// (0x0004f23c) main_graph_messa_pane

0x3c27,	// (0x0004e4ba) main_help_pane

0x4106,	// (0x0004e999) main_im_pane

0x3e82,	// (0x0004e715) main_image_pane_ParamLimits

0x3e82,	// (0x0004e715) main_image_pane

0x3c27,	// (0x0004e4ba) main_location2_pane

0x49a9,	// (0x0004f23c) main_location_pane

0x3e82,	// (0x0004e715) main_messa_pane

0x3c27,	// (0x0004e4ba) main_mp2_pane

0x49a9,	// (0x0004f23c) main_mp_pane

0x3c27,	// (0x0004e4ba) main_msg_pane

0x3c27,	// (0x0004e4ba) main_mup_eq_pane

0x3c27,	// (0x0004e4ba) main_mup_pane

0x4106,	// (0x0004e999) main_notes_pane

0x3c27,	// (0x0004e4ba) main_pec_pane

0x3c27,	// (0x0004e4ba) main_phob_pane

0x3c27,	// (0x0004e4ba) main_pinb_pane

0x3c27,	// (0x0004e4ba) main_postcard_pane

0x3c27,	// (0x0004e4ba) main_qdial_pane

0x49a9,	// (0x0004f23c) main_skin_pane

0x3c27,	// (0x0004e4ba) main_smil2_pane

0x49a9,	// (0x0004f23c) main_smil_pane

0x49a9,	// (0x0004f23c) main_video_pane

0x49a9,	// (0x0004f23c) main_video_tele_pane

0x3e82,	// (0x0004e715) main_viewer_pane_ParamLimits

0x3e82,	// (0x0004e715) main_viewer_pane

0x49a9,	// (0x0004f23c) main_vorec_pane

0x7034,	// (0x000518c7) popup_blid_sat_info_window_ParamLimits

0x7034,	// (0x000518c7) popup_blid_sat_info_window

0x7054,	// (0x000518e7) popup_dyc_status_message_window_ParamLimits

0x7054,	// (0x000518e7) popup_dyc_status_message_window

0x7062,	// (0x000518f5) popup_grid_large_graphic_window_ParamLimits

0x7062,	// (0x000518f5) popup_grid_large_graphic_window

0x70f1,	// (0x00051984) popup_loc_request_window_ParamLimits

0x70f1,	// (0x00051984) popup_loc_request_window

0x713e,	// (0x000519d1) popup_wml_address_window_ParamLimits

0x713e,	// (0x000519d1) popup_wml_address_window

0x6ec0,	// (0x00051753) call_muted_g1

0x6b35,	// (0x000513c8) popup_call_audio_conf_window_ParamLimits

0x6b35,	// (0x000513c8) popup_call_audio_conf_window

0x6ed0,	// (0x00051763) popup_call_audio_first_window_ParamLimits

0x6ed0,	// (0x00051763) popup_call_audio_first_window

0x6f10,	// (0x000517a3) popup_call_audio_in_window_ParamLimits

0x6f10,	// (0x000517a3) popup_call_audio_in_window

0x6f34,	// (0x000517c7) popup_call_audio_out_window_ParamLimits

0x6f34,	// (0x000517c7) popup_call_audio_out_window

0x6f56,	// (0x000517e9) popup_call_audio_second_window_ParamLimits

0x6f56,	// (0x000517e9) popup_call_audio_second_window

0x6f86,	// (0x00051819) popup_call_audio_wait_window_ParamLimits

0x6f86,	// (0x00051819) popup_call_audio_wait_window

0x6fa7,	// (0x0005183a) popup_number_entry_window_ParamLimits

0x6fa7,	// (0x0005183a) popup_number_entry_window

0x37b4,	// (0x0004e047) bg_popup_call_pane_cp05_ParamLimits

0x37b4,	// (0x0004e047) bg_popup_call_pane_cp05

0x37d4,	// (0x0004e067) popup_number_entry_window_t1

0x37e7,	// (0x0004e07a) popup_number_entry_window_t2

0x37f9,	// (0x0004e08c) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x000598fe) popup_number_entry_window_t

0x3847,	// (0x0004e0da) text_title_cp2

0x385a,	// (0x0004e0ed) bg_popup_call_pane_cp_ParamLimits

0x385a,	// (0x0004e0ed) bg_popup_call_pane_cp

0x3868,	// (0x0004e0fb) call_thumbnail_pane

0x3870,	// (0x0004e103) popup_call_audio_in_window_g1_ParamLimits

0x3870,	// (0x0004e103) popup_call_audio_in_window_g1

0x387c,	// (0x0004e10f) popup_call_audio_in_window_g2_ParamLimits

0x387c,	// (0x0004e10f) popup_call_audio_in_window_g2

0x3888,	// (0x0004e11b) popup_call_audio_in_window_g3_ParamLimits

0x3888,	// (0x0004e11b) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x00059907) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x00059907) popup_call_audio_in_window_g

0x3894,	// (0x0004e127) popup_call_audio_in_window_t1_ParamLimits

0x3894,	// (0x0004e127) popup_call_audio_in_window_t1

0x38b0,	// (0x0004e143) popup_call_audio_in_window_t2_ParamLimits

0x38b0,	// (0x0004e143) popup_call_audio_in_window_t2

0x38cc,	// (0x0004e15f) popup_call_audio_in_window_t3_ParamLimits

0x38cc,	// (0x0004e15f) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0005990e) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0005990e) popup_call_audio_in_window_t

0x385a,	// (0x0004e0ed) bg_popup_call_pane_cp01_ParamLimits

0x385a,	// (0x0004e0ed) bg_popup_call_pane_cp01

0x3868,	// (0x0004e0fb) call_thumbnail_pane_cp02

0x38df,	// (0x0004e172) call_type_pane_cp022

0x38e7,	// (0x0004e17a) popup_call_audio_out_window_g1_ParamLimits

0x38e7,	// (0x0004e17a) popup_call_audio_out_window_g1

0x38f9,	// (0x0004e18c) popup_call_audio_out_window_g2_ParamLimits

0x38f9,	// (0x0004e18c) popup_call_audio_out_window_g2

0x3905,	// (0x0004e198) popup_call_audio_out_window_g3_ParamLimits

0x3905,	// (0x0004e198) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x00059915) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x00059915) popup_call_audio_out_window_g

0x3917,	// (0x0004e1aa) popup_call_audio_out_window_t1_ParamLimits

0x3917,	// (0x0004e1aa) popup_call_audio_out_window_t1

0x392f,	// (0x0004e1c2) popup_call_audio_out_window_t2_ParamLimits

0x392f,	// (0x0004e1c2) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0005991c) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0005991c) popup_call_audio_out_window_t

0x3944,	// (0x0004e1d7) bg_popup_call_pane_ParamLimits

0x3944,	// (0x0004e1d7) bg_popup_call_pane

0x39c8,	// (0x0004e25b) call_thumbnail_pane_cp_ParamLimits

0x39c8,	// (0x0004e25b) call_thumbnail_pane_cp

0x39ec,	// (0x0004e27f) call_type_pane_cp01_ParamLimits

0x39ec,	// (0x0004e27f) call_type_pane_cp01

0x3a30,	// (0x0004e2c3) popup_call_audio_first_window_g1_ParamLimits

0x3a30,	// (0x0004e2c3) popup_call_audio_first_window_g1

0x3a7c,	// (0x0004e30f) popup_call_audio_first_window_g2_ParamLimits

0x3a7c,	// (0x0004e30f) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x00059921) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x00059921) popup_call_audio_first_window_g

0x3ac0,	// (0x0004e353) popup_call_audio_first_window_t1_ParamLimits

0x3ac0,	// (0x0004e353) popup_call_audio_first_window_t1

0x3b6c,	// (0x0004e3ff) popup_call_audio_first_window_t4_ParamLimits

0x3b6c,	// (0x0004e3ff) popup_call_audio_first_window_t4

0x3bf8,	// (0x0004e48b) popup_call_audio_first_window_t5_ParamLimits

0x3bf8,	// (0x0004e48b) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x00059926) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x00059926) popup_call_audio_first_window_t

0x3c27,	// (0x0004e4ba) bg_popup_call_pane_cp02

0x3c31,	// (0x0004e4c4) call_type_pane_cp023

0x3c39,	// (0x0004e4cc) popup_call_audio_wait_window_g1

0x3c41,	// (0x0004e4d4) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0005992d) popup_call_audio_wait_window_g

0x3c49,	// (0x0004e4dc) popup_call_audio_wait_window_t3

0x3c57,	// (0x0004e4ea) bg_popup_call_pane_cp03_ParamLimits

0x3c57,	// (0x0004e4ea) bg_popup_call_pane_cp03

0x3cb7,	// (0x0004e54a) call_thumbnail_pane_cp011_ParamLimits

0x3cb7,	// (0x0004e54a) call_thumbnail_pane_cp011

0x3cc3,	// (0x0004e556) call_type_pane_cp034_ParamLimits

0x3cc3,	// (0x0004e556) call_type_pane_cp034

0x3cff,	// (0x0004e592) popup_call_audio_second_window_g1_ParamLimits

0x3cff,	// (0x0004e592) popup_call_audio_second_window_g1

0x3d3b,	// (0x0004e5ce) popup_call_audio_second_window_g2_ParamLimits

0x3d3b,	// (0x0004e5ce) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00059932) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00059932) popup_call_audio_second_window_g

0x3d77,	// (0x0004e60a) popup_call_audio_second_window_t1_ParamLimits

0x3d77,	// (0x0004e60a) popup_call_audio_second_window_t1

0x3df8,	// (0x0004e68b) popup_call_audio_second_window_t2_ParamLimits

0x3df8,	// (0x0004e68b) popup_call_audio_second_window_t2

0x3e2e,	// (0x0004e6c1) popup_call_audio_second_window_t3_ParamLimits

0x3e2e,	// (0x0004e6c1) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x00059937) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x00059937) popup_call_audio_second_window_t

0x3c27,	// (0x0004e4ba) bg_popup_call_pane_cp04

0x3e64,	// (0x0004e6f7) list_conf_pane

0x3e6c,	// (0x0004e6ff) popup_call_audio_conf_window_t1

0x3e7a,	// (0x0004e70d) call_thumbnail_pane_g1

0x3e82,	// (0x0004e715) bg_pinb_pane_ParamLimits

0x3e82,	// (0x0004e715) bg_pinb_pane

0x3e90,	// (0x0004e723) find_pinb_pane

0x3e82,	// (0x0004e715) listscroll_pinb_pane_ParamLimits

0x3e82,	// (0x0004e715) listscroll_pinb_pane

0x3e9a,	// (0x0004e72d) pinb_bg_pane_g1

0x3e9a,	// (0x0004e72d) pinb_bg_pane_g2

0x3e9a,	// (0x0004e72d) pinb_bg_pane_g3

0x3e9a,	// (0x0004e72d) pinb_bg_pane_g4

0x3e9a,	// (0x0004e72d) pinb_bg_pane_g5

0x3e9a,	// (0x0004e72d) pinb_bg_pane_g6

0x3e9a,	// (0x0004e72d) pinb_bg_pane_g7

0x3e9a,	// (0x0004e72d) pinb_bg_pane_g8

0x3e9a,	// (0x0004e72d) pinb_bg_pane_g9

0x3e9a,	// (0x0004e72d) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0005993e) pinb_bg_pane_g

0x347f,	// (0x0004dd12) grid_pinb_pane

0x347f,	// (0x0004dd12) list_pinb_pane

0x3ea4,	// (0x0004e737) scroll_pane_cp01_ParamLimits

0x3ea4,	// (0x0004e737) scroll_pane_cp01

0x3eb2,	// (0x0004e745) find_pinb_pane_g1_ParamLimits

0x3eb2,	// (0x0004e745) find_pinb_pane_g1

0x3eca,	// (0x0004e75d) find_pinb_pane_t1

0x3edc,	// (0x0004e76f) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x00059958) find_pinb_pane_t

0x3ef1,	// (0x0004e784) input_focus_pane_cp01_ParamLimits

0x3ef1,	// (0x0004e784) input_focus_pane_cp01

0x3efd,	// (0x0004e790) cell_pinb_pane_ParamLimits

0x3efd,	// (0x0004e790) cell_pinb_pane

0x3f0b,	// (0x0004e79e) cell_pinb_pane_g1_ParamLimits

0x3f0b,	// (0x0004e79e) cell_pinb_pane_g1

0x3f19,	// (0x0004e7ac) cell_pinb_pane_g2_ParamLimits

0x3f19,	// (0x0004e7ac) cell_pinb_pane_g2

0x3f19,	// (0x0004e7ac) cell_pinb_pane_g3_ParamLimits

0x3f19,	// (0x0004e7ac) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0005995d) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0005995d) cell_pinb_pane_g

0x3c27,	// (0x0004e4ba) grid_highlight_pane_cp01

0x3efd,	// (0x0004e790) list_pinb_item_pane_ParamLimits

0x3efd,	// (0x0004e790) list_pinb_item_pane

0x347f,	// (0x0004dd12) list_highlight_pane_cp02

0x3f27,	// (0x0004e7ba) list_pinb_item_pane_g1_ParamLimits

0x3f27,	// (0x0004e7ba) list_pinb_item_pane_g1

0x3f19,	// (0x0004e7ac) list_pinb_item_pane_g2_ParamLimits

0x3f19,	// (0x0004e7ac) list_pinb_item_pane_g2

0x3f0b,	// (0x0004e79e) list_pinb_item_pane_g3_ParamLimits

0x3f0b,	// (0x0004e79e) list_pinb_item_pane_g3

0x3f19,	// (0x0004e7ac) list_pinb_item_pane_g4_ParamLimits

0x3f19,	// (0x0004e7ac) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x00059964) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x00059964) list_pinb_item_pane_g

0x3f35,	// (0x0004e7c8) list_pinb_item_pane_t1_ParamLimits

0x3f35,	// (0x0004e7c8) list_pinb_item_pane_t1

0x3f63,	// (0x0004e7f6) calc_display_pane

0x3f81,	// (0x0004e814) calc_paper_pane

0x3f9d,	// (0x0004e830) grid_calc_pane

0x3c27,	// (0x0004e4ba) bg_list_pane_cp01

0x3fc9,	// (0x0004e85c) clock_g1

0x3fd1,	// (0x0004e864) clock_g2

0x0001,

0xf0da,	// (0x0005996d) clock_g

0x3fdb,	// (0x0004e86e) clock_t1_ParamLimits

0x3fdb,	// (0x0004e86e) clock_t1

0x3ff0,	// (0x0004e883) clock_t2_ParamLimits

0x3ff0,	// (0x0004e883) clock_t2

0x4002,	// (0x0004e895) clock_t3_ParamLimits

0x4002,	// (0x0004e895) clock_t3

0x4014,	// (0x0004e8a7) clock_t4_ParamLimits

0x4014,	// (0x0004e8a7) clock_t4

0x4026,	// (0x0004e8b9) clock_t5_ParamLimits

0x4026,	// (0x0004e8b9) clock_t5

0x403b,	// (0x0004e8ce) clock_t6_ParamLimits

0x403b,	// (0x0004e8ce) clock_t6

0x404d,	// (0x0004e8e0) clock_t7_ParamLimits

0x404d,	// (0x0004e8e0) clock_t7

0x405f,	// (0x0004e8f2) clock_t8_ParamLimits

0x405f,	// (0x0004e8f2) clock_t8

0x4075,	// (0x0004e908) clock_t9_ParamLimits

0x4075,	// (0x0004e908) clock_t9

0x0008,

0xf0df,	// (0x00059972) clock_t_ParamLimits

0xf0df,	// (0x00059972) clock_t

0x408b,	// (0x0004e91e) popup_clock_analogue_window_cp02

0x408b,	// (0x0004e91e) popup_clock_digital_window_cp01

0x3c27,	// (0x0004e4ba) listscroll_help_pane

0x3c27,	// (0x0004e4ba) phob_pre_status_pane

0x4093,	// (0x0004e926) grid_qdial_pane

0x409d,	// (0x0004e930) listscroll_mce_pane

0x3e82,	// (0x0004e715) bg_notes_pane

0x40bb,	// (0x0004e94e) list_notes_pane

0x40c9,	// (0x0004e95c) scroll_pane_cp06

0x40d8,	// (0x0004e96b) bg_calc_paper_pane

0x40ec,	// (0x0004e97f) list_calc_pane

0x4106,	// (0x0004e999) bg_calc_display_pane

0x4112,	// (0x0004e9a5) calc_display_pane_t1

0x4127,	// (0x0004e9ba) calc_display_pane_t2

0x413c,	// (0x0004e9cf) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x00059985) calc_display_pane_t

0x414e,	// (0x0004e9e1) cell_calc_pane_ParamLimits

0x414e,	// (0x0004e9e1) cell_calc_pane

0x417b,	// (0x0004ea0e) bg_calc_paper_pane_g1

0x4187,	// (0x0004ea1a) bg_calc_paper_pane_g2

0x4193,	// (0x0004ea26) bg_calc_paper_pane_g3

0x419f,	// (0x0004ea32) bg_calc_paper_pane_g4

0x41ab,	// (0x0004ea3e) bg_calc_paper_pane_g5

0x41b7,	// (0x0004ea4a) bg_calc_paper_pane_g6

0x41c8,	// (0x0004ea5b) bg_calc_paper_pane_g7

0x41d9,	// (0x0004ea6c) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0005998c) bg_calc_paper_pane_g

0x41ea,	// (0x0004ea7d) calc_bg_paper_pane_g9

0x41fb,	// (0x0004ea8e) list_calc_item_pane_ParamLimits

0x41fb,	// (0x0004ea8e) list_calc_item_pane

0x4228,	// (0x0004eabb) list_calc_item_pane_g1

0x4235,	// (0x0004eac8) list_calc_item_pane_t1_ParamLimits

0x4235,	// (0x0004eac8) list_calc_item_pane_t1

0x4247,	// (0x0004eada) list_calc_item_pane_t2_ParamLimits

0x4247,	// (0x0004eada) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0005999d) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0005999d) list_calc_item_pane_t

0x3e9a,	// (0x0004e72d) cell_calc_pane_g1

0x4277,	// (0x0004eb0a) grid_highlight_pane_cp02

0x4299,	// (0x0004eb2c) bg_calc_display_pane_g1

0x42a2,	// (0x0004eb35) bg_calc_display_pane_g2

0x42ac,	// (0x0004eb3f) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x000599a7) bg_calc_display_pane_g

0x42b5,	// (0x0004eb48) cell_qdial_pane_ParamLimits

0x42b5,	// (0x0004eb48) cell_qdial_pane

0x42c9,	// (0x0004eb5c) cell_qdial_pane_g1_ParamLimits

0x42c9,	// (0x0004eb5c) cell_qdial_pane_g1

0x42d6,	// (0x0004eb69) cell_qdial_pane_g2_ParamLimits

0x42d6,	// (0x0004eb69) cell_qdial_pane_g2

0x42e6,	// (0x0004eb79) cell_qdial_pane_g3_ParamLimits

0x42e6,	// (0x0004eb79) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x000599ae) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x000599ae) cell_qdial_pane_g

0x42ff,	// (0x0004eb92) cell_qdial_pane_t1_ParamLimits

0x42ff,	// (0x0004eb92) cell_qdial_pane_t1

0x4317,	// (0x0004ebaa) cell_qdial_pane_t2_ParamLimits

0x4317,	// (0x0004ebaa) cell_qdial_pane_t2

0x432a,	// (0x0004ebbd) cell_qdial_pane_t3_ParamLimits

0x432a,	// (0x0004ebbd) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x000599b7) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x000599b7) cell_qdial_pane_t

0x3c27,	// (0x0004e4ba) grid_highlight_pane_cp04

0x433d,	// (0x0004ebd0) thumbnail_qdial_pane_ParamLimits

0x433d,	// (0x0004ebd0) thumbnail_qdial_pane

0x4399,	// (0x0004ec2c) list_help_pane

0x43a2,	// (0x0004ec35) scroll_pane_cp02

0x43ab,	// (0x0004ec3e) help_list_pane_t1_ParamLimits

0x43ab,	// (0x0004ec3e) help_list_pane_t1

0x43e5,	// (0x0004ec78) bg_notes_pane_g2

0x43ed,	// (0x0004ec80) bg_notes_pane_g3

0x43f5,	// (0x0004ec88) notes_bg_pane_g1

0x43fd,	// (0x0004ec90) notes_bg_pane_g4

0x4405,	// (0x0004ec98) notes_bg_pane_g5

0x440d,	// (0x0004eca0) notes_bg_pane_g6

0x4415,	// (0x0004eca8) notes_bg_pane_g7

0x441d,	// (0x0004ecb0) notes_bg_pane_g8

0x4425,	// (0x0004ecb8) notes_bg_pane_g9

0x0006,

0xf142,	// (0x000599d5) notes_bg_pane_g

0x442d,	// (0x0004ecc0) list_notes_text_pane_ParamLimits

0x442d,	// (0x0004ecc0) list_notes_text_pane

0x4459,	// (0x0004ecec) list_notes_text_pane_g1

0x4462,	// (0x0004ecf5) list_notes_text_pane_t1

0x4481,	// (0x0004ed14) listscroll_cale_week_pane

0x44af,	// (0x0004ed42) bg_cale_heading_pane

0x44d1,	// (0x0004ed64) bg_cale_pane_cp01

0x44ee,	// (0x0004ed81) cale_week_corner_pane

0x4508,	// (0x0004ed9b) cale_week_day_heading_pane

0x452a,	// (0x0004edbd) cale_week_scroll_pane_g1

0x4547,	// (0x0004edda) cale_week_scroll_pane_g2

0x455a,	// (0x0004eded) cale_week_scroll_pane_g3

0x456d,	// (0x0004ee00) cale_week_scroll_pane_g4

0x4580,	// (0x0004ee13) cale_week_scroll_pane_g5

0x4593,	// (0x0004ee26) cale_week_scroll_pane_g6

0x45a6,	// (0x0004ee39) cale_week_scroll_pane_g7

0x45bb,	// (0x0004ee4e) cale_week_scroll_pane_g8

0x45d0,	// (0x0004ee63) cale_week_scroll_pane_g9

0x45e3,	// (0x0004ee76) cale_week_scroll_pane_g10

0x45f6,	// (0x0004ee89) cale_week_scroll_pane_g11

0x4609,	// (0x0004ee9c) cale_week_scroll_pane_g12

0x4620,	// (0x0004eeb3) cale_week_scroll_pane_g13

0x463b,	// (0x0004eece) cale_week_scroll_pane_g14

0x4656,	// (0x0004eee9) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x000599e4) cale_week_scroll_pane_g

0x4686,	// (0x0004ef19) cale_week_time_pane

0x469b,	// (0x0004ef2e) grid_cale_week_pane

0x46cc,	// (0x0004ef5f) scroll_pane_cp08

0x46e9,	// (0x0004ef7c) cell_cale_week_pane_ParamLimits

0x46e9,	// (0x0004ef7c) cell_cale_week_pane

0x474b,	// (0x0004efde) cale_week_day_heading_pane_t1

0x4766,	// (0x0004eff9) cale_week_day_heading_pane_t2

0x4781,	// (0x0004f014) cale_week_day_heading_pane_t3

0x479c,	// (0x0004f02f) cale_week_day_heading_pane_t4

0x47b7,	// (0x0004f04a) cale_week_day_heading_pane_t5

0x47d2,	// (0x0004f065) cale_week_day_heading_pane_t6

0x47ed,	// (0x0004f080) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x00059a05) cale_week_day_heading_pane_t

0x4808,	// (0x0004f09b) bg_cale_side_pane

0x4816,	// (0x0004f0a9) cale_week_time_pane_t1

0x4830,	// (0x0004f0c3) cale_week_time_pane_t2

0x484a,	// (0x0004f0dd) cale_week_time_pane_t3

0x4864,	// (0x0004f0f7) cale_week_time_pane_t4

0x487e,	// (0x0004f111) cale_week_time_pane_t5

0x4898,	// (0x0004f12b) cale_week_time_pane_t6

0x48b8,	// (0x0004f14b) cale_week_time_pane_t7

0x48da,	// (0x0004f16d) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x00059a14) cale_week_time_pane_t

0x48fe,	// (0x0004f191) cell_cale_week_pane_g2

0x4922,	// (0x0004f1b5) cell_cale_week_pane_g3_ParamLimits

0x4922,	// (0x0004f1b5) cell_cale_week_pane_g3

0x493a,	// (0x0004f1cd) grid_highlight_pane_cp07

0x4942,	// (0x0004f1d5) listscroll_gms_pane

0x494c,	// (0x0004f1df) grid_gms_pane

0x4955,	// (0x0004f1e8) listscroll_gms_pane_g1

0x495d,	// (0x0004f1f0) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x00059a25) listscroll_gms_pane_g

0x4965,	// (0x0004f1f8) scroll_pane_cp010

0x4970,	// (0x0004f203) cell_gms_pane_ParamLimits

0x4970,	// (0x0004f203) cell_gms_pane

0x4980,	// (0x0004f213) cell_gms_pane_g1

0x4988,	// (0x0004f21b) cell_gms_pane_g2

0x4459,	// (0x0004ecec) cell_gms_pane_g3

0x4990,	// (0x0004f223) cell_gms_pane_g4

0x0003,

0xf197,	// (0x00059a2a) cell_gms_pane_g

0x4999,	// (0x0004f22c) grid_highlight_pane_cp09

0x6e44,	// (0x000516d7) phob_pre_status_pane_g1

0x6e4c,	// (0x000516df) phob_pre_status_pane_g2

0x6e54,	// (0x000516e7) phob_pre_status_pane_g3

0x6e5c,	// (0x000516ef) phob_pre_status_pane_g4

0x0004,

0xf573,	// (0x00059e06) phob_pre_status_pane_g

0x6e6c,	// (0x000516ff) phob_pre_status_pane_t1

0x6e7c,	// (0x0005170f) phob_pre_status_pane_t2

0x6e8c,	// (0x0005171f) phob_pre_status_pane_t3

0x0002,

0xf57e,	// (0x00059e11) phob_pre_status_pane_t

0x49a9,	// (0x0004f23c) bg_list_pane_cp05

0x49b1,	// (0x0004f244) grid_vorec_pane

0x49bb,	// (0x0004f24e) vorec_t1

0x49c9,	// (0x0004f25c) vorec_t2

0x49d7,	// (0x0004f26a) vorec_t3

0x49e5,	// (0x0004f278) vorec_t4

0xbe54,	// (0x000566e7) vorec_t5

0xbe62,	// (0x000566f5) vorec_t6

0x0004,

0xf1a0,	// (0x00059a33) vorec_t

0xbe70,	// (0x00056703) wait_bar_pane_cp01

0x4a01,	// (0x0004f294) cell_vorec_pane_ParamLimits

0x4a01,	// (0x0004f294) cell_vorec_pane

0x4a14,	// (0x0004f2a7) cell_vorec_pane_g1

0x3c27,	// (0x0004e4ba) grid_highlight_pane_cp05

0x3efd,	// (0x0004e790) cams_zoom_pane

0x3efd,	// (0x0004e790) image_vga_pane

0x3f19,	// (0x0004e7ac) main_camera_pane_g1

0x3f19,	// (0x0004e7ac) main_camera_pane_g2

0x3f19,	// (0x0004e7ac) main_camera_pane_g3

0x3f19,	// (0x0004e7ac) main_camera_pane_g4

0x3f19,	// (0x0004e7ac) main_camera_pane_g5

0x3f19,	// (0x0004e7ac) main_camera_pane_g6

0x3f19,	// (0x0004e7ac) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x00059a3e) main_camera_pane_g

0x4a1e,	// (0x0004f2b1) main_camera_pane_t1

0x4a1e,	// (0x0004f2b1) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00059a4f) main_camera_pane_t

0x4a32,	// (0x0004f2c5) cams_zoom_pane_cp_ParamLimits

0x4a32,	// (0x0004f2c5) cams_zoom_pane_cp

0x4a60,	// (0x0004f2f3) image_cif_pane_ParamLimits

0x4a60,	// (0x0004f2f3) image_cif_pane

0x347f,	// (0x0004dd12) image_subqcif_pane

0x4a6e,	// (0x0004f301) main_video_pane_g1_ParamLimits

0x4a6e,	// (0x0004f301) main_video_pane_g1

0x4a96,	// (0x0004f329) main_video_pane_g2_ParamLimits

0x4a96,	// (0x0004f329) main_video_pane_g2

0x4ac9,	// (0x0004f35c) main_video_pane_g3_ParamLimits

0x4ac9,	// (0x0004f35c) main_video_pane_g3

0x4ac9,	// (0x0004f35c) main_video_pane_g4_ParamLimits

0x4ac9,	// (0x0004f35c) main_video_pane_g4

0x4af7,	// (0x0004f38a) main_video_pane_g5_ParamLimits

0x4af7,	// (0x0004f38a) main_video_pane_g5

0x4b05,	// (0x0004f398) main_video_pane_g6_ParamLimits

0x4b05,	// (0x0004f398) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00059a54) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00059a54) main_video_pane_g

0x4b2d,	// (0x0004f3c0) main_video_pane_t1_ParamLimits

0x4b2d,	// (0x0004f3c0) main_video_pane_t1

0x4b67,	// (0x0004f3fa) cams_zoom_pane_g1

0x4b67,	// (0x0004f3fa) cams_zoom_pane_g2

0x4b67,	// (0x0004f3fa) cams_zoom_pane_g3

0x4b67,	// (0x0004f3fa) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00059a63) cams_zoom_pane_g

0x4b7d,	// (0x0004f410) grid_cams_pane

0x4b8b,	// (0x0004f41e) linegrid_cams_pane

0x4b99,	// (0x0004f42c) cell_cams_pane_ParamLimits

0x4b99,	// (0x0004f42c) cell_cams_pane

0x4bac,	// (0x0004f43f) cams_burst_image_pane

0x4bb4,	// (0x0004f447) cell_cams_pane_g1

0x3c27,	// (0x0004e4ba) grid_highlight_pane_cp03

0x3e9a,	// (0x0004e72d) mp_bg_pane_g1

0x347f,	// (0x0004dd12) bg_list_pane_cp03

0x347f,	// (0x0004dd12) bg_mp_pane

0x347f,	// (0x0004dd12) grid_mp_pane

0x4b67,	// (0x0004f3fa) media_player_g1

0xc614,	// (0x00056ea7) media_player_t1

0xc614,	// (0x00056ea7) media_player_t2

0xc614,	// (0x00056ea7) media_player_t3

0xc614,	// (0x00056ea7) media_player_t4

0xc614,	// (0x00056ea7) media_player_t5

0xc614,	// (0x00056ea7) media_player_t6

0xc614,	// (0x00056ea7) media_player_t7

0x0006,

0xf55d,	// (0x00059df0) media_player_t

0x347f,	// (0x0004dd12) wait_bar_pane_cp02

0xf542,	// (0x00059dd5) main_usb_pane_t

0xc88e,	// (0x00057121) cell_mp_pane

0x3e9a,	// (0x0004e72d) cell_mp_pane_g1

0x3c27,	// (0x0004e4ba) grid_highlight_pane_cp06

0x4bd0,	// (0x0004f463) grid_skin_colour_pane

0x4bd8,	// (0x0004f46b) list_highlight_pane_cp03

0x4be0,	// (0x0004f473) skin_g1

0x4bea,	// (0x0004f47d) skin_t1

0x4bf9,	// (0x0004f48c) skin_t2

0x0001,

0xf1fe,	// (0x00059a91) skin_t

0x4c07,	// (0x0004f49a) cell_skin_colour_pane_ParamLimits

0x4c07,	// (0x0004f49a) cell_skin_colour_pane

0x4c23,	// (0x0004f4b6) cell_skin_colour_pane_g1

0x4c9d,	// (0x0004f530) call_video_g1_ParamLimits

0x4c9d,	// (0x0004f530) call_video_g1

0x4cad,	// (0x0004f540) call_video_g2_ParamLimits

0x4cad,	// (0x0004f540) call_video_g2

0x0001,

0xf203,	// (0x00059a96) call_video_g_ParamLimits

0xf203,	// (0x00059a96) call_video_g

0x4d07,	// (0x0004f59a) call_video_uplink_pane_cp1_ParamLimits

0x4d07,	// (0x0004f59a) call_video_uplink_pane_cp1

0x4d73,	// (0x0004f606) call_video_uplink_pane_cp2

0x4ddb,	// (0x0004f66e) video_down_crop_pane_ParamLimits

0x4ddb,	// (0x0004f66e) video_down_crop_pane

0x4ecd,	// (0x0004f760) video_down_pane_ParamLimits

0x4ecd,	// (0x0004f760) video_down_pane

0x4fcd,	// (0x0004f860) video_down_subqcif_pane_ParamLimits

0x4fcd,	// (0x0004f860) video_down_subqcif_pane

0x4fe5,	// (0x0004f878) video_down_subqcif_pane_cp_ParamLimits

0x4fe5,	// (0x0004f878) video_down_subqcif_pane_cp

0x502b,	// (0x0004f8be) im_reading_pane_ParamLimits

0x502b,	// (0x0004f8be) im_reading_pane

0x503d,	// (0x0004f8d0) im_writing_pane_ParamLimits

0x503d,	// (0x0004f8d0) im_writing_pane

0x5063,	// (0x0004f8f6) im_reading_pane_t1

0x50bb,	// (0x0004f94e) list_im_pane

0x50cc,	// (0x0004f95f) scroll_pane_cp07

0x50e5,	// (0x0004f978) im_writing_pane_t1_ParamLimits

0x50e5,	// (0x0004f978) im_writing_pane_t1

0x50f7,	// (0x0004f98a) im_writing_pane_t2_ParamLimits

0x50f7,	// (0x0004f98a) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00059aa0) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00059aa0) im_writing_pane_t

0x3c27,	// (0x0004e4ba) input_focus_pane_cp04

0x3c27,	// (0x0004e4ba) input_focus_pane_cp05

0x5114,	// (0x0004f9a7) list_im_single_pane_ParamLimits

0x5114,	// (0x0004f9a7) list_im_single_pane

0x513b,	// (0x0004f9ce) list_single_im_pane_t1

0x49a9,	// (0x0004f23c) blid_accuracy_pane

0x49a9,	// (0x0004f23c) blid_compass_pane

0xdde5,	// (0x00058678) main_location_t1

0xdde5,	// (0x00058678) main_location_t2

0xdde5,	// (0x00058678) main_location_t3

0x0002,

0xf56c,	// (0x00059dff) main_location_t

0x3c27,	// (0x0004e4ba) aid_levels_location

0x3e9a,	// (0x0004e72d) blid_accuracy_pane_g1

0x3e9a,	// (0x0004e72d) blid_accuracy_pane_g2

0x0001,

0xf261,	// (0x00059af4) blid_accuracy_pane_g

0x5175,	// (0x0004fa08) wml_content_pane

0x51b3,	// (0x0004fa46) wml_button_pane_ParamLimits

0x51b3,	// (0x0004fa46) wml_button_pane

0x51c7,	// (0x0004fa5a) wml_list_single_large_pane_ParamLimits

0x51c7,	// (0x0004fa5a) wml_list_single_large_pane

0x51f2,	// (0x0004fa85) wml_list_single_medium_pane_ParamLimits

0x51f2,	// (0x0004fa85) wml_list_single_medium_pane

0x5224,	// (0x0004fab7) wml_list_single_small_pane_ParamLimits

0x5224,	// (0x0004fab7) wml_list_single_small_pane

0x5261,	// (0x0004faf4) wml_selection_box_pane_ParamLimits

0x5261,	// (0x0004faf4) wml_selection_box_pane

0x5274,	// (0x0004fb07) wml_list_single_pane_t1

0x5283,	// (0x0004fb16) wml_list_single_medium_pane_t1

0x5292,	// (0x0004fb25) wml_list_single_large_pane_t1

0x52a1,	// (0x0004fb34) input_focus_pane_cp02_ParamLimits

0x52a1,	// (0x0004fb34) input_focus_pane_cp02

0x52b4,	// (0x0004fb47) wml_selection_box_pane_g1

0x52bd,	// (0x0004fb50) wml_selection_box_pane_t1_ParamLimits

0x52bd,	// (0x0004fb50) wml_selection_box_pane_t1

0x3e82,	// (0x0004e715) bg_wml_button_pane_ParamLimits

0x3e82,	// (0x0004e715) bg_wml_button_pane

0x52d5,	// (0x0004fb68) wml_button_pane_g1

0x52dd,	// (0x0004fb70) wml_button_pane_t1

0x52d5,	// (0x0004fb68) wml_button_bg_pane_g1

0x52ed,	// (0x0004fb80) wml_button_bg_pane_g2

0x52f5,	// (0x0004fb88) wml_button_bg_pane_g3

0x52fd,	// (0x0004fb90) wml_button_bg_pane_g4

0x5305,	// (0x0004fb98) wml_button_bg_pane_g5

0x530d,	// (0x0004fba0) wml_button_bg_pane_g6

0x5315,	// (0x0004fba8) wml_button_bg_pane_g7

0x531d,	// (0x0004fbb0) wml_button_bg_pane_g8

0x5325,	// (0x0004fbb8) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x00059aa5) wml_button_bg_pane_g

0x532d,	// (0x0004fbc0) bg_list_pane_cp02

0x5335,	// (0x0004fbc8) mce_header_pane_ParamLimits

0x5335,	// (0x0004fbc8) mce_header_pane

0x534b,	// (0x0004fbde) mce_icon_pane

0x534b,	// (0x0004fbde) mce_image_pane

0x5354,	// (0x0004fbe7) mce_text_pane_ParamLimits

0x5354,	// (0x0004fbe7) mce_text_pane

0x5367,	// (0x0004fbfa) scroll_pane_cp03

0x51ab,	// (0x0004fa3e) scroll_pane_cp04

0x536f,	// (0x0004fc02) scroll_pane_cp05_ParamLimits

0x536f,	// (0x0004fc02) scroll_pane_cp05

0x537b,	// (0x0004fc0e) mce_header_field_pane_ParamLimits

0x537b,	// (0x0004fc0e) mce_header_field_pane

0x539b,	// (0x0004fc2e) mce_header_field_pane_2_ParamLimits

0x539b,	// (0x0004fc2e) mce_header_field_pane_2

0x53b1,	// (0x0004fc44) mce_header_field_pane_3

0x53b9,	// (0x0004fc4c) list_single_mce_message_pane_ParamLimits

0x53b9,	// (0x0004fc4c) list_single_mce_message_pane

0x53ca,	// (0x0004fc5d) list_single_mce_smart_pane_ParamLimits

0x53ca,	// (0x0004fc5d) list_single_mce_smart_pane

0x53e6,	// (0x0004fc79) input_focus_pane_cp03

0x53ef,	// (0x0004fc82) list_header_data_pane

0x53f7,	// (0x0004fc8a) mce_header_field_pane_t1

0x5405,	// (0x0004fc98) list_single_mce_header_pane_ParamLimits

0x5405,	// (0x0004fc98) list_single_mce_header_pane

0x5417,	// (0x0004fcaa) list_single_mce_header_pane_t1

0x5426,	// (0x0004fcb9) list_single_mce_message_pane_g1

0x542e,	// (0x0004fcc1) list_single_mce_message_pane_t1

0x5462,	// (0x0004fcf5) bg_cale_heading_pane_cp01_ParamLimits

0x5462,	// (0x0004fcf5) bg_cale_heading_pane_cp01

0x54b0,	// (0x0004fd43) bg_cale_pane_cp02_ParamLimits

0x54b0,	// (0x0004fd43) bg_cale_pane_cp02

0x54dd,	// (0x0004fd70) cale_month_corner_pane

0x54fc,	// (0x0004fd8f) cale_month_day_heading_pane_ParamLimits

0x54fc,	// (0x0004fd8f) cale_month_day_heading_pane

0x5562,	// (0x0004fdf5) cale_month_pane_g1_ParamLimits

0x5562,	// (0x0004fdf5) cale_month_pane_g1

0x55a5,	// (0x0004fe38) cale_month_pane_g2_ParamLimits

0x55a5,	// (0x0004fe38) cale_month_pane_g2

0x55df,	// (0x0004fe72) cale_month_pane_g3_ParamLimits

0x55df,	// (0x0004fe72) cale_month_pane_g3

0x562f,	// (0x0004fec2) cale_month_pane_g4_ParamLimits

0x562f,	// (0x0004fec2) cale_month_pane_g4

0x567f,	// (0x0004ff12) cale_month_pane_g5_ParamLimits

0x567f,	// (0x0004ff12) cale_month_pane_g5

0x56cf,	// (0x0004ff62) cale_month_pane_g6_ParamLimits

0x56cf,	// (0x0004ff62) cale_month_pane_g6

0x571f,	// (0x0004ffb2) cale_month_pane_g7_ParamLimits

0x571f,	// (0x0004ffb2) cale_month_pane_g7

0x5787,	// (0x0005001a) cale_month_pane_g8_ParamLimits

0x5787,	// (0x0005001a) cale_month_pane_g8

0x57ef,	// (0x00050082) cale_month_pane_g9_ParamLimits

0x57ef,	// (0x00050082) cale_month_pane_g9

0x584d,	// (0x000500e0) cale_month_pane_g10_ParamLimits

0x584d,	// (0x000500e0) cale_month_pane_g10

0x58ab,	// (0x0005013e) cale_month_pane_g11_ParamLimits

0x58ab,	// (0x0005013e) cale_month_pane_g11

0x58ff,	// (0x00050192) cale_month_pane_g12_ParamLimits

0x58ff,	// (0x00050192) cale_month_pane_g12

0x5955,	// (0x000501e8) cale_month_pane_g13_ParamLimits

0x5955,	// (0x000501e8) cale_month_pane_g13

0x000c,

0xf225,	// (0x00059ab8) cale_month_pane_g_ParamLimits

0xf225,	// (0x00059ab8) cale_month_pane_g

0x59bd,	// (0x00050250) cale_month_week_pane

0x59e1,	// (0x00050274) grid_cale_month_pane_ParamLimits

0x59e1,	// (0x00050274) grid_cale_month_pane

0x5a3e,	// (0x000502d1) cale_month_day_heading_pane_t1

0x5ac4,	// (0x00050357) cale_month_day_heading_pane_t2

0x5b3d,	// (0x000503d0) cale_month_day_heading_pane_t3

0x5bb6,	// (0x00050449) cale_month_day_heading_pane_t4

0x5c2f,	// (0x000504c2) cale_month_day_heading_pane_t5

0x5ca8,	// (0x0005053b) cale_month_day_heading_pane_t6

0x5d21,	// (0x000505b4) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00059ad3) cale_month_day_heading_pane_t

0x4808,	// (0x0004f09b) bg_cale_side_pane_cp01

0x5db2,	// (0x00050645) cale_month_week_pane_t1

0x5dcb,	// (0x0005065e) cale_month_week_pane_t2

0x5de4,	// (0x00050677) cale_month_week_pane_t3

0x5dfd,	// (0x00050690) cale_month_week_pane_t4

0x5e18,	// (0x000506ab) cale_month_week_pane_t5

0x5e39,	// (0x000506cc) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00059ae2) cale_month_week_pane_t

0x5e5a,	// (0x000506ed) cell_cale_month_pane_ParamLimits

0x5e5a,	// (0x000506ed) cell_cale_month_pane

0x5f80,	// (0x00050813) cell_cale_month_pane_g1

0x5f8c,	// (0x0005081f) cell_cale_month_pane_t1_ParamLimits

0x5f8c,	// (0x0005081f) cell_cale_month_pane_t1

0x493a,	// (0x0004f1cd) grid_highlight_pane_cp08

0x3e9a,	// (0x0004e72d) main_smil_g1

0x5fb8,	// (0x0005084b) smil_status_pane

0x5fc3,	// (0x00050856) smil_text_pane

0xdcbd,	// (0x00058550) bg_popup_call3_rect_pane_g8

0xdcc5,	// (0x00058558) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ed,	// (0x00059d80) bg_popup_call3_rect_pane_g

0xdebc,	// (0x0005874f) smil_status_volume_pane_g1

0x5fd5,	// (0x00050868) smil_status_pane_t1

0x71ed,	// (0x00051a80) volume_smil_pane

0x5fec,	// (0x0005087f) list_smil_text_pane

0x5ff6,	// (0x00050889) scroll_pane_cp011

0x6001,	// (0x00050894) smil_text_list_pane_t1_ParamLimits

0x6001,	// (0x00050894) smil_text_list_pane_t1

0x608e,	// (0x00050921) aid_volume_smil_ParamLimits

0x608e,	// (0x00050921) aid_volume_smil

0x3e9a,	// (0x0004e72d) smil_volume_pane_g1

0x3e9a,	// (0x0004e72d) smil_volume_pane_g2

0x0001,

0xf261,	// (0x00059af4) smil_volume_pane_g

0x4481,	// (0x0004ed14) listscroll_cale_day_pane

0x60b0,	// (0x00050943) bg_cale_pane

0x60c8,	// (0x0005095b) list_cale_pane

0x60eb,	// (0x0005097e) scroll_pane_cp09

0x60fc,	// (0x0005098f) cale_bg_pane_g1

0x6104,	// (0x00050997) cale_bg_pane_g2

0x610c,	// (0x0005099f) cale_bg_pane_g3

0x6114,	// (0x000509a7) cale_bg_pane_g4

0x611c,	// (0x000509af) cale_bg_pane_g5

0x6124,	// (0x000509b7) cale_bg_pane_g6

0xc490,	// (0x00056d23) cale_bg_pane_g7

0xc498,	// (0x00056d2b) cale_bg_pane_g8

0xc4a0,	// (0x00056d33) cale_bg_pane_g9

0x0008,

0xf266,	// (0x00059af9) cale_bg_pane_g

0x6134,	// (0x000509c7) list_cale_time_pane_ParamLimits

0x6134,	// (0x000509c7) list_cale_time_pane

0xc4a8,	// (0x00056d3b) list_cale_time_pane_g1_ParamLimits

0xc4a8,	// (0x00056d3b) list_cale_time_pane_g1

0xc4b4,	// (0x00056d47) list_cale_time_pane_g2_ParamLimits

0xc4b4,	// (0x00056d47) list_cale_time_pane_g2

0x615c,	// (0x000509ef) list_cale_time_pane_g3_ParamLimits

0x615c,	// (0x000509ef) list_cale_time_pane_g3

0x616a,	// (0x000509fd) list_cale_time_pane_g4_ParamLimits

0x616a,	// (0x000509fd) list_cale_time_pane_g4

0x6178,	// (0x00050a0b) list_cale_time_pane_g5_ParamLimits

0x6178,	// (0x00050a0b) list_cale_time_pane_g5

0x0005,

0xf279,	// (0x00059b0c) list_cale_time_pane_g_ParamLimits

0xf279,	// (0x00059b0c) list_cale_time_pane_g

0xc4ce,	// (0x00056d61) list_cale_time_pane_t1_ParamLimits

0xc4ce,	// (0x00056d61) list_cale_time_pane_t1

0xc4f6,	// (0x00056d89) list_cale_time_pane_t2_ParamLimits

0xc4f6,	// (0x00056d89) list_cale_time_pane_t2

0x644c,	// (0x00050cdf) aid_blid_cardinal_pane

0x648e,	// (0x00050d21) compass_pane_t4

0xc51e,	// (0x00056db1) list_cale_time_pane_t4_ParamLimits

0xc51e,	// (0x00056db1) list_cale_time_pane_t4

0x649c,	// (0x00050d2f) compass_pane_t5

0x64ac,	// (0x00050d3f) compass_pane_t6

0x64ba,	// (0x00050d4d) compass_pane_t7

0xc9a8,	// (0x0005723b) navi_pane_cc_t1

0xcb85,	// (0x00057418) aid_phob_thumbnail_center_pane

0x68dd,	// (0x00051170) main_postcard_pane_g4_ParamLimits

0x0002,

0xf286,	// (0x00059b19) list_cale_time_pane_t_ParamLimits

0xf286,	// (0x00059b19) list_cale_time_pane_t

0x385a,	// (0x0004e0ed) bg_popup_window_pane_cp02_ParamLimits

0x385a,	// (0x0004e0ed) bg_popup_window_pane_cp02

0xc546,	// (0x00056dd9) heading_pane_cp01_ParamLimits

0xc546,	// (0x00056dd9) heading_pane_cp01

0xc552,	// (0x00056de5) loc_req_pane_ParamLimits

0xc552,	// (0x00056de5) loc_req_pane

0xc562,	// (0x00056df5) loc_type_pane_ParamLimits

0xc562,	// (0x00056df5) loc_type_pane

0xc574,	// (0x00056e07) loc_type_pane_t1_ParamLimits

0xc574,	// (0x00056e07) loc_type_pane_t1

0xc586,	// (0x00056e19) loc_type_pane_t2_ParamLimits

0xc586,	// (0x00056e19) loc_type_pane_t2

0xc598,	// (0x00056e2b) loc_type_pane_t3_ParamLimits

0xc598,	// (0x00056e2b) loc_type_pane_t3

0x0002,

0xf28d,	// (0x00059b20) loc_type_pane_t_ParamLimits

0xf28d,	// (0x00059b20) loc_type_pane_t

0xc5aa,	// (0x00056e3d) list_loc_req_pane

0xc5b4,	// (0x00056e47) scroll_pane_cp012

0x6186,	// (0x00050a19) list_single_loc_request_popup_menu_pane_ParamLimits

0x6186,	// (0x00050a19) list_single_loc_request_popup_menu_pane

0xc5bf,	// (0x00056e52) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc5bf,	// (0x00056e52) list_single_loc_request_popup_menu_pane_g1

0xc5cb,	// (0x00056e5e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc5cb,	// (0x00056e5e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf294,	// (0x00059b27) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf294,	// (0x00059b27) list_single_loc_request_popup_menu_pane_g

0xc5d7,	// (0x00056e6a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc5d7,	// (0x00056e6a) list_single_loc_request_popup_menu_pane_t1

0x619f,	// (0x00050a32) bg_popup_window_pane_cp03_ParamLimits

0x619f,	// (0x00050a32) bg_popup_window_pane_cp03

0x61ad,	// (0x00050a40) heading_loc_req_pane_ParamLimits

0x61ad,	// (0x00050a40) heading_loc_req_pane

0x61b9,	// (0x00050a4c) popup_dyc_status_message_window_g1_ParamLimits

0x61b9,	// (0x00050a4c) popup_dyc_status_message_window_g1

0x61c5,	// (0x00050a58) popup_dyc_status_message_window_t1_ParamLimits

0x61c5,	// (0x00050a58) popup_dyc_status_message_window_t1

0x61d7,	// (0x00050a6a) popup_dyc_status_message_window_t2_ParamLimits

0x61d7,	// (0x00050a6a) popup_dyc_status_message_window_t2

0x61e9,	// (0x00050a7c) popup_dyc_status_message_window_t3_ParamLimits

0x61e9,	// (0x00050a7c) popup_dyc_status_message_window_t3

0x0002,

0xf299,	// (0x00059b2c) popup_dyc_status_message_window_t_ParamLimits

0xf299,	// (0x00059b2c) popup_dyc_status_message_window_t

0x3c27,	// (0x0004e4ba) bg_heading_pane_cp01

0xc5ed,	// (0x00056e80) heading_loc_req_pane_g1

0xc5f5,	// (0x00056e88) heading_loc_req_pane_g2

0xc5fd,	// (0x00056e90) heading_loc_req_pane_g3

0x0002,

0xf2a0,	// (0x00059b33) heading_loc_req_pane_g

0xc605,	// (0x00056e98) heading_loc_req_pane_t1

0xc624,	// (0x00056eb7) bg_popup_sub_pane_cp01_ParamLimits

0xc624,	// (0x00056eb7) bg_popup_sub_pane_cp01

0xc632,	// (0x00056ec5) popup_cale_events_window_g1_ParamLimits

0xc632,	// (0x00056ec5) popup_cale_events_window_g1

0xc652,	// (0x00056ee5) popup_cale_events_window_g2_ParamLimits

0xc652,	// (0x00056ee5) popup_cale_events_window_g2

0x0001,

0xf2c2,	// (0x00059b55) popup_cale_events_window_g_ParamLimits

0xf2c2,	// (0x00059b55) popup_cale_events_window_g

0xc672,	// (0x00056f05) popup_cale_events_window_t1_ParamLimits

0xc672,	// (0x00056f05) popup_cale_events_window_t1

0xc684,	// (0x00056f17) popup_cale_events_window_t2_ParamLimits

0xc684,	// (0x00056f17) popup_cale_events_window_t2

0xc6c2,	// (0x00056f55) popup_cale_events_window_t3_ParamLimits

0xc6c2,	// (0x00056f55) popup_cale_events_window_t3

0xc6fc,	// (0x00056f8f) popup_cale_events_window_t4_ParamLimits

0xc6fc,	// (0x00056f8f) popup_cale_events_window_t4

0x0003,

0xf2c7,	// (0x00059b5a) popup_cale_events_window_t_ParamLimits

0xf2c7,	// (0x00059b5a) popup_cale_events_window_t

0x6213,	// (0x00050aa6) call_type_pane

0xc732,	// (0x00056fc5) popup_call_status_window_g1

0x621f,	// (0x00050ab2) popup_call_status_window_g2

0x622b,	// (0x00050abe) popup_call_status_window_g3

0x0002,

0xf2d0,	// (0x00059b63) popup_call_status_window_g

0xc740,	// (0x00056fd3) call_type_pane_g1

0xc749,	// (0x00056fdc) call_type_pane_g2

0x0001,

0xf2d7,	// (0x00059b6a) call_type_pane_g

0x3c27,	// (0x0004e4ba) bg_popup_sub_pane_cp02

0xc752,	// (0x00056fe5) listscroll_popup_wml_pane

0xc75a,	// (0x00056fed) list_wml_pane

0xc764,	// (0x00056ff7) scroll_pane_cp013

0xc76f,	// (0x00057002) list_single_graphic_popup_wml_pane_ParamLimits

0xc76f,	// (0x00057002) list_single_graphic_popup_wml_pane

0x3e9a,	// (0x0004e72d) list_single_graphic_popup_wml_pane_g1

0xc783,	// (0x00057016) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2dc,	// (0x00059b6f) list_single_graphic_popup_wml_pane_g

0xc78b,	// (0x0005701e) list_single_graphic_popup_wml_pane_t1

0xc7a1,	// (0x00057034) aid_call_pane

0x3e7a,	// (0x0004e70d) popup_clock_analogue_window_g1

0x3e7a,	// (0x0004e70d) popup_clock_analogue_window_g2

0x6237,	// (0x00050aca) popup_clock_analogue_window_g3

0x6237,	// (0x00050aca) popup_clock_analogue_window_g4

0x3e9a,	// (0x0004e72d) popup_clock_analogue_window_g5

0x0004,

0xf2e1,	// (0x00059b74) popup_clock_analogue_window_g

0x623f,	// (0x00050ad2) popup_clock_analogue_window_t1

0x624d,	// (0x00050ae0) clock_digital_number_pane_ParamLimits

0x624d,	// (0x00050ae0) clock_digital_number_pane

0x6259,	// (0x00050aec) clock_digital_number_pane_cp02_ParamLimits

0x6259,	// (0x00050aec) clock_digital_number_pane_cp02

0x6265,	// (0x00050af8) clock_digital_number_pane_cp03_ParamLimits

0x6265,	// (0x00050af8) clock_digital_number_pane_cp03

0x6271,	// (0x00050b04) clock_digital_number_pane_cp04_ParamLimits

0x6271,	// (0x00050b04) clock_digital_number_pane_cp04

0x627d,	// (0x00050b10) clock_digital_separator_pane_ParamLimits

0x627d,	// (0x00050b10) clock_digital_separator_pane

0x6289,	// (0x00050b1c) popup_clock_digital_window_t1

0x3e9a,	// (0x0004e72d) clock_digital_number_pane_g1

0x3e9a,	// (0x0004e72d) clock_digital_number_pane_g2

0x0001,

0xf261,	// (0x00059af4) clock_digital_number_pane_g

0x3e9a,	// (0x0004e72d) clock_digital_separator_pane_g1

0x3e9a,	// (0x0004e72d) clock_digital_separator_pane_g2

0x0001,

0xf261,	// (0x00059af4) clock_digital_separator_pane_g

0x3c27,	// (0x0004e4ba) bg_popup_window_pane_cp04

0xc7a9,	// (0x0005703c) heading_pane_cp03

0x49a9,	// (0x0004f23c) listscroll_popup_gms_pane

0x3c27,	// (0x0004e4ba) grid_large_graphic_popup_pane

0xc7b2,	// (0x00057045) listscroll_popup_gms_pane_g1

0xc7bb,	// (0x0005704e) listscroll_popup_gms_pane_g2

0x0001,

0xf2ec,	// (0x00059b7f) listscroll_popup_gms_pane_g

0xc7c4,	// (0x00057057) scroll_pane_cp014

0x3efd,	// (0x0004e790) cell_large_graphic_popup_pane_ParamLimits

0x3efd,	// (0x0004e790) cell_large_graphic_popup_pane

0x3f0b,	// (0x0004e79e) cell_large_graphic_popup_pane_g1_ParamLimits

0x3f0b,	// (0x0004e79e) cell_large_graphic_popup_pane_g1

0xc7cd,	// (0x00057060) cell_large_graphic_popup_pane_g2_ParamLimits

0xc7cd,	// (0x00057060) cell_large_graphic_popup_pane_g2

0xc7db,	// (0x0005706e) cell_large_graphic_popup_pane_g3_ParamLimits

0xc7db,	// (0x0005706e) cell_large_graphic_popup_pane_g3

0xc7e9,	// (0x0005707c) cell_large_graphic_popup_pane_g4_ParamLimits

0xc7e9,	// (0x0005707c) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f1,	// (0x00059b84) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f1,	// (0x00059b84) cell_large_graphic_popup_pane_g

0x3c27,	// (0x0004e4ba) grid_highlight_pane_cp010

0x3e9a,	// (0x0004e72d) bg_popup_call_pane_g1

0xc7fa,	// (0x0005708d) list_single_graphic_popup_conf_pane_ParamLimits

0xc7fa,	// (0x0005708d) list_single_graphic_popup_conf_pane

0xc80d,	// (0x000570a0) list_highlight_pane_cp01

0xc816,	// (0x000570a9) list_single_graphic_popup_conf_pane_g1

0xc81e,	// (0x000570b1) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2fa,	// (0x00059b8d) list_single_graphic_popup_conf_pane_g

0xc826,	// (0x000570b9) list_single_graphic_popup_conf_pane_t1

0xc834,	// (0x000570c7) linegrid_cams_pane_g1

0x62a6,	// (0x00050b39) linegrid_cams_pane_g2

0x4459,	// (0x0004ecec) linegrid_cams_pane_g3

0xc83d,	// (0x000570d0) linegrid_cams_pane_g4

0x62af,	// (0x00050b42) linegrid_cams_pane_g5

0x62b8,	// (0x00050b4b) linegrid_cams_pane_g6

0x4990,	// (0x0004f223) linegrid_cams_pane_g7

0x0006,

0xf2ff,	// (0x00059b92) linegrid_cams_pane_g

0xc846,	// (0x000570d9) popup_clock_analogue_window

0xc846,	// (0x000570d9) popup_clock_digital_window

0x3c27,	// (0x0004e4ba) popup_phob_thumbnail_window

0x3e9a,	// (0x0004e72d) call_video_uplink_pane_g1

0xc84f,	// (0x000570e2) call_video_uplink_pane_g2

0x0001,

0xf30e,	// (0x00059ba1) call_video_uplink_pane_g

0xc857,	// (0x000570ea) video_uplink_pane

0xc85f,	// (0x000570f2) mce_image_pane_g1

0x62c1,	// (0x00050b54) mce_image_pane_g2

0x62c9,	// (0x00050b5c) mce_image_pane_g3

0x62d1,	// (0x00050b64) mce_image_pane_g4

0x62d9,	// (0x00050b6c) mce_image_pane_g5

0x0004,

0xf313,	// (0x00059ba6) mce_image_pane_g

0xc869,	// (0x000570fc) control_top_pane_stacon_cp01_ParamLimits

0xc869,	// (0x000570fc) control_top_pane_stacon_cp01

0xc87d,	// (0x00057110) uni_indicator_pane_stacon_cp01_ParamLimits

0xc87d,	// (0x00057110) uni_indicator_pane_stacon_cp01

0xc88e,	// (0x00057121) bg_popup_sub_pane_cp03

0x62e1,	// (0x00050b74) chi_dic_find_pane

0x62e9,	// (0x00050b7c) listscroll_chi_dic_pane

0x62f2,	// (0x00050b85) main_pane_chidic_g1

0x6305,	// (0x00050b98) chi_dic_find_pane_t1

0xc898,	// (0x0005712b) find_chidic_pane

0xc8a1,	// (0x00057134) chi_dic_list_pane_ParamLimits

0xc8a1,	// (0x00057134) chi_dic_list_pane

0xc8b2,	// (0x00057145) scroll_pane_cp020

0x6313,	// (0x00050ba6) find_chidic_pane_t1

0x3c27,	// (0x0004e4ba) input_focus_pane_cp06

0x6322,	// (0x00050bb5) list_chi_dic_pane_ParamLimits

0x6322,	// (0x00050bb5) list_chi_dic_pane

0x633f,	// (0x00050bd2) list_chi_dic_pane_t1_ParamLimits

0x633f,	// (0x00050bd2) list_chi_dic_pane_t1

0x3c27,	// (0x0004e4ba) list_highlight_pane_cp020

0xc8ba,	// (0x0005714d) bg_cale_heading_pane_g1

0x6352,	// (0x00050be5) bg_cale_heading_pane_g2

0x635a,	// (0x00050bed) bg_cale_heading_pane_g3

0x6362,	// (0x00050bf5) bg_cale_heading_pane_g4

0x636c,	// (0x00050bff) bg_cale_heading_pane_g5

0x6376,	// (0x00050c09) bg_cale_heading_pane_g6

0x637e,	// (0x00050c11) bg_cale_heading_pane_g7

0x6386,	// (0x00050c19) bg_cale_heading_pane_g8

0x6390,	// (0x00050c23) bg_cale_heading_pane_g9

0x0008,

0xf31e,	// (0x00059bb1) bg_cale_heading_pane_g

0xc8ba,	// (0x0005714d) bg_cale_side_pane_g1

0x639a,	// (0x00050c2d) bg_cale_side_pane_g2

0x63a4,	// (0x00050c37) bg_cale_side_pane_g3

0x63ae,	// (0x00050c41) bg_cale_side_pane_g4

0x63b8,	// (0x00050c4b) bg_cale_side_pane_g5

0x63c2,	// (0x00050c55) bg_cale_side_pane_g6

0x63cc,	// (0x00050c5f) bg_cale_side_pane_g7

0x63d6,	// (0x00050c69) bg_cale_side_pane_g8

0x63de,	// (0x00050c71) bg_cale_side_pane_g9

0x0008,

0xf331,	// (0x00059bc4) bg_cale_side_pane_g

0x63e6,	// (0x00050c79) popup_call_status_window_ParamLimits

0x63e6,	// (0x00050c79) popup_call_status_window

0xc8c2,	// (0x00057155) stacon_top_pane

0xc8ca,	// (0x0005715d) status_pane_ParamLimits

0xc8ca,	// (0x0005715d) status_pane

0xc8df,	// (0x00057172) status_small_pane

0xc8e7,	// (0x0005717a) control_pane

0x3c27,	// (0x0004e4ba) stacon_bottom_pane

0xc8ef,	// (0x00057182) list_single_mce_smart_pane_t1_ParamLimits

0xc8ef,	// (0x00057182) list_single_mce_smart_pane_t1

0xc902,	// (0x00057195) list_single_mce_smart_pane_t2_ParamLimits

0xc902,	// (0x00057195) list_single_mce_smart_pane_t2

0x0001,

0xf344,	// (0x00059bd7) list_single_mce_smart_pane_t_ParamLimits

0xf344,	// (0x00059bd7) list_single_mce_smart_pane_t

0x63f2,	// (0x00050c85) compass_pane

0x63fe,	// (0x00050c91) main_location2_pane_t1

0x6412,	// (0x00050ca5) main_location2_pane_t2

0x6426,	// (0x00050cb9) main_location2_pane_t3

0x0003,

0xf349,	// (0x00059bdc) main_location2_pane_t

0xc921,	// (0x000571b4) compass_pane_g1_ParamLimits

0xc921,	// (0x000571b4) compass_pane_g1

0x6470,	// (0x00050d03) compass_pane_t1

0x647f,	// (0x00050d12) compass_pane_t2

0x0005,

0xf352,	// (0x00059be5) compass_pane_t

0x64ca,	// (0x00050d5d) text_secondary_cp61

0xc99f,	// (0x00057232) navi_pane_cams_g5

0xca1b,	// (0x000572ae) navi_pane_im_t1

0xca29,	// (0x000572bc) navi_pane_mp_g1_ParamLimits

0xca29,	// (0x000572bc) navi_pane_mp_g1

0xca3d,	// (0x000572d0) navi_pane_mp_g2_ParamLimits

0xca3d,	// (0x000572d0) navi_pane_mp_g2

0xca49,	// (0x000572dc) navi_pane_mp_g3_ParamLimits

0xca49,	// (0x000572dc) navi_pane_mp_g3

0x0002,

0xf366,	// (0x00059bf9) navi_pane_mp_g_ParamLimits

0xf366,	// (0x00059bf9) navi_pane_mp_g

0xca55,	// (0x000572e8) navi_pane_mp_t1

0xca63,	// (0x000572f6) navi_pane_mp_t2

0x0002,

0xf36d,	// (0x00059c00) navi_pane_mp_t

0xcace,	// (0x00057361) navi_pane_vt_g1

0xca55,	// (0x000572e8) navi_pane_vt_t1

0xcad6,	// (0x00057369) navi_slider_pane

0x49a9,	// (0x0004f23c) zooming_pane

0xcae6,	// (0x00057379) navi_slider_pane_g1

0x6505,	// (0x00050d98) navi_slider_pane_g2

0x0006,

0xf374,	// (0x00059c07) navi_slider_pane_g

0xcb0a,	// (0x0005739d) aid_levels_zoom

0xcb12,	// (0x000573a5) zooming_pane_g1

0xcb1a,	// (0x000573ad) zooming_pane_g2

0xcb1a,	// (0x000573ad) zooming_pane_g3

0x0002,

0xf383,	// (0x00059c16) zooming_pane_g

0xcb22,	// (0x000573b5) level_10_zoom

0xcb2b,	// (0x000573be) level_11_zoom

0xcb34,	// (0x000573c7) level_1_zoom

0xcb3d,	// (0x000573d0) level_2_zoom

0xcb46,	// (0x000573d9) level_3_zoom

0xcb4f,	// (0x000573e2) level_4_zoom

0xcb58,	// (0x000573eb) level_5_zoom

0xcb61,	// (0x000573f4) level_6_zoom

0xcb6a,	// (0x000573fd) level_7_zoom

0xcb73,	// (0x00057406) level_8_zoom

0xcb7c,	// (0x0005740f) level_9_zoom

0xcb8d,	// (0x00057420) popup_phob_thumbnail_window_g1

0xcb95,	// (0x00057428) popup_phob_thumbnail_window_g2

0x0001,

0xf38a,	// (0x00059c1d) popup_phob_thumbnail_window_g

0x6e9c,	// (0x0005172f) level_1_location

0x6ea4,	// (0x00051737) level_2_location

0x6eac,	// (0x0005173f) level_3_location

0x6eb6,	// (0x00051749) level_4_location

0x49a9,	// (0x0004f23c) level_5_location

0x6517,	// (0x00050daa) mce_icon_pane_g1

0x651f,	// (0x00050db2) mce_icon_pane_g2

0x0001,

0xf38f,	// (0x00059c22) mce_icon_pane_g

0x6527,	// (0x00050dba) main_mup_pane_g1_ParamLimits

0x6527,	// (0x00050dba) main_mup_pane_g1

0x3f27,	// (0x0004e7ba) main_mup_pane_g2_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup_pane_g2

0x3f27,	// (0x0004e7ba) main_mup_pane_g3_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup_pane_g3

0x3f27,	// (0x0004e7ba) main_mup_pane_g4_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup_pane_g4

0x3f27,	// (0x0004e7ba) main_mup_pane_g5_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup_pane_g5

0x3f27,	// (0x0004e7ba) main_mup_pane_g6_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup_pane_g6

0x3f27,	// (0x0004e7ba) main_mup_pane_g7_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup_pane_g7

0x3f27,	// (0x0004e7ba) main_mup_pane_g8_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup_pane_g8

0x3f27,	// (0x0004e7ba) main_mup_pane_g9_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup_pane_g9

0x3f27,	// (0x0004e7ba) main_mup_pane_g10_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup_pane_g10

0x3f27,	// (0x0004e7ba) main_mup_pane_g11_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup_pane_g11

0x3f19,	// (0x0004e7ac) main_mup_pane_g12_ParamLimits

0x3f19,	// (0x0004e7ac) main_mup_pane_g12

0x3f27,	// (0x0004e7ba) main_mup_pane_g13_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup_pane_g13

0x000c,

0xf394,	// (0x00059c27) main_mup_pane_g_ParamLimits

0xf394,	// (0x00059c27) main_mup_pane_g

0x3f35,	// (0x0004e7c8) main_mup_pane_t1_ParamLimits

0x3f35,	// (0x0004e7c8) main_mup_pane_t1

0x3f35,	// (0x0004e7c8) main_mup_pane_t2_ParamLimits

0x3f35,	// (0x0004e7c8) main_mup_pane_t2

0x3f35,	// (0x0004e7c8) main_mup_pane_t3_ParamLimits

0x3f35,	// (0x0004e7c8) main_mup_pane_t3

0x4a1e,	// (0x0004f2b1) main_mup_pane_t4_ParamLimits

0x4a1e,	// (0x0004f2b1) main_mup_pane_t4

0x4a1e,	// (0x0004f2b1) main_mup_pane_t5_ParamLimits

0x4a1e,	// (0x0004f2b1) main_mup_pane_t5

0x4bbc,	// (0x0004f44f) main_mup_pane_t6_ParamLimits

0x4bbc,	// (0x0004f44f) main_mup_pane_t6

0x0005,

0xf3af,	// (0x00059c42) main_mup_pane_t_ParamLimits

0xf3af,	// (0x00059c42) main_mup_pane_t

0x3ea4,	// (0x0004e737) mup_progress_pane_ParamLimits

0x3ea4,	// (0x0004e737) mup_progress_pane

0xcb9d,	// (0x00057430) mup_visualizer_pane_ParamLimits

0xcb9d,	// (0x00057430) mup_visualizer_pane

0xcb9d,	// (0x00057430) mup_volume_pane_ParamLimits

0xcb9d,	// (0x00057430) mup_volume_pane

0x3f19,	// (0x0004e7ac) mup_visualizer_pane_g1_ParamLimits

0x3f19,	// (0x0004e7ac) mup_visualizer_pane_g1

0xcbab,	// (0x0005743e) mup_visualizer_pane_g2_ParamLimits

0xcbab,	// (0x0005743e) mup_visualizer_pane_g2

0x3f0b,	// (0x0004e79e) mup_visualizer_pane_g3_ParamLimits

0x3f0b,	// (0x0004e79e) mup_visualizer_pane_g3

0x0002,

0xf3bc,	// (0x00059c4f) mup_visualizer_pane_g_ParamLimits

0xf3bc,	// (0x00059c4f) mup_visualizer_pane_g

0x4b67,	// (0x0004f3fa) mup_volume_pane_g1

0x4b67,	// (0x0004f3fa) mup_volume_pane_g2

0x0001,

0xf3c3,	// (0x00059c56) mup_volume_pane_g

0x4b67,	// (0x0004f3fa) mup_progress_pane_g1

0x4b67,	// (0x0004f3fa) mup_progress_pane_g2

0x4b67,	// (0x0004f3fa) mup_progress_pane_g3

0x0002,

0xf3c8,	// (0x00059c5b) mup_progress_pane_g

0x3c27,	// (0x0004e4ba) bg_popup_window_pane_cp05

0xcbb9,	// (0x0005744c) heading_pane_cp02_ParamLimits

0xcbb9,	// (0x0005744c) heading_pane_cp02

0xcbd3,	// (0x00057466) list_popup_blid_pane

0xcbdb,	// (0x0005746e) list_blid_sat_info_pane_ParamLimits

0xcbdb,	// (0x0005746e) list_blid_sat_info_pane

0xcbee,	// (0x00057481) list_blid_sat_info_pane_g1

0xcbf6,	// (0x00057489) list_blid_sat_info_pane_t1

0x6622,	// (0x00050eb5) mup_equalizer_pane_ParamLimits

0x6622,	// (0x00050eb5) mup_equalizer_pane

0x6643,	// (0x00050ed6) mup_equalizer_pane_cp1_ParamLimits

0x6643,	// (0x00050ed6) mup_equalizer_pane_cp1

0x6664,	// (0x00050ef7) mup_equalizer_pane_cp2_ParamLimits

0x6664,	// (0x00050ef7) mup_equalizer_pane_cp2

0x6685,	// (0x00050f18) mup_equalizer_pane_cp3_ParamLimits

0x6685,	// (0x00050f18) mup_equalizer_pane_cp3

0x66a6,	// (0x00050f39) mup_equalizer_pane_cp4_ParamLimits

0x66a6,	// (0x00050f39) mup_equalizer_pane_cp4

0x66c7,	// (0x00050f5a) mup_equalizer_pane_cp5

0x66dd,	// (0x00050f70) mup_equalizer_pane_cp6

0x66f5,	// (0x00050f88) mup_equalizer_pane_cp7

0xdd3d,	// (0x000585d0) bg_popup_call_poc_act_pane_g9

0xdd45,	// (0x000585d8) bg_popup_call_poc_act_pane_g10

0xdd4d,	// (0x000585e0) bg_popup_call_poc_act_pane_g11

0x000a,

0x3e82,	// (0x0004e715) mup_scale_pane

0x3e9a,	// (0x0004e72d) mup_scale_pane_g1

0xcc04,	// (0x00057497) mup_scale_pane_g2

0x0006,

0xf3e4,	// (0x00059c77) mup_scale_pane_g

0xcc28,	// (0x000574bb) msg_data_pane

0xcc30,	// (0x000574c3) scroll_pane_cp017

0x671f,	// (0x00050fb2) bg_list_pane_cp04_ParamLimits

0x671f,	// (0x00050fb2) bg_list_pane_cp04

0xcc38,	// (0x000574cb) msg_data_pane_g1

0x6737,	// (0x00050fca) msg_data_pane_g2

0x673f,	// (0x00050fd2) msg_data_pane_g3

0x6747,	// (0x00050fda) msg_data_pane_g4

0x674f,	// (0x00050fe2) msg_data_pane_g5

0x6757,	// (0x00050fea) msg_data_pane_g6

0x675f,	// (0x00050ff2) msg_data_pane_g7

0x0006,

0xf3f3,	// (0x00059c86) msg_data_pane_g

0x6767,	// (0x00050ffa) msg_text_pane_ParamLimits

0x6767,	// (0x00050ffa) msg_text_pane

0x67bf,	// (0x00051052) qrid_highlight_pane_cp011_ParamLimits

0x67bf,	// (0x00051052) qrid_highlight_pane_cp011

0x3c27,	// (0x0004e4ba) msg_body_pane

0x3c27,	// (0x0004e4ba) msg_header_pane

0xcc49,	// (0x000574dc) input_focus_pane_cp07

0x0327,	// (0x0004abba) msg_header_pane_t1_ParamLimits

0x0327,	// (0x0004abba) msg_header_pane_t1

0x033d,	// (0x0004abd0) msg_header_pane_t2_ParamLimits

0x033d,	// (0x0004abd0) msg_header_pane_t2

0x0001,

0xf407,	// (0x00059c9a) msg_header_pane_t_ParamLimits

0xf407,	// (0x00059c9a) msg_header_pane_t

0xcc5e,	// (0x000574f1) msg_body_pane_g1

0x0354,	// (0x0004abe7) msg_body_pane_t1_ParamLimits

0x0354,	// (0x0004abe7) msg_body_pane_t1

0x0385,	// (0x0004ac18) msg_body_pane_t2_ParamLimits

0x0385,	// (0x0004ac18) msg_body_pane_t2

0x0397,	// (0x0004ac2a) msg_body_pane_t3_ParamLimits

0x0397,	// (0x0004ac2a) msg_body_pane_t3

0x0002,

0xf40c,	// (0x00059c9f) msg_body_pane_t_ParamLimits

0xf40c,	// (0x00059c9f) msg_body_pane_t

0x6839,	// (0x000510cc) main_viewer_pane_g1_ParamLimits

0x6839,	// (0x000510cc) main_viewer_pane_g1

0x6845,	// (0x000510d8) main_viewer_pane_g2_ParamLimits

0x6845,	// (0x000510d8) main_viewer_pane_g2

0x6851,	// (0x000510e4) main_viewer_pane_g3_ParamLimits

0x6851,	// (0x000510e4) main_viewer_pane_g3

0x6862,	// (0x000510f5) main_viewer_pane_g4_ParamLimits

0x6862,	// (0x000510f5) main_viewer_pane_g4

0x6873,	// (0x00051106) main_viewer_pane_g5_ParamLimits

0x6873,	// (0x00051106) main_viewer_pane_g5

0x6873,	// (0x00051106) main_viewer_pane_g7_ParamLimits

0x6873,	// (0x00051106) main_viewer_pane_g7

0xc5bf,	// (0x00056e52) main_viewer_pane_g8_ParamLimits

0xc5bf,	// (0x00056e52) main_viewer_pane_g8

0x0007,

0xf41c,	// (0x00059caf) main_viewer_pane_g_ParamLimits

0xf41c,	// (0x00059caf) main_viewer_pane_g

0xcc66,	// (0x000574f9) viewer_content_pane_ParamLimits

0xcc66,	// (0x000574f9) viewer_content_pane

0x68b1,	// (0x00051144) main_postcard_pane_g1_ParamLimits

0x68b1,	// (0x00051144) main_postcard_pane_g1

0x68bf,	// (0x00051152) main_postcard_pane_g2_ParamLimits

0x68bf,	// (0x00051152) main_postcard_pane_g2

0x68cd,	// (0x00051160) main_postcard_pane_g3_ParamLimits

0x68cd,	// (0x00051160) main_postcard_pane_g3

0x0005,

0xf42d,	// (0x00059cc0) main_postcard_pane_g_ParamLimits

0xf42d,	// (0x00059cc0) main_postcard_pane_g

0x68dd,	// (0x00051170) main_postcard_pane_g4

0xdecf,	// (0x00058762) smil_status_volume_pane_g2

0x6909,	// (0x0005119c) postcard_pane_ParamLimits

0x6909,	// (0x0005119c) postcard_pane

0xc732,	// (0x00056fc5) postcard_pane_g1_ParamLimits

0xc732,	// (0x00056fc5) postcard_pane_g1

0x693b,	// (0x000511ce) postcard_pane_g2_ParamLimits

0x693b,	// (0x000511ce) postcard_pane_g2

0x6947,	// (0x000511da) postcard_pane_g3_ParamLimits

0x6947,	// (0x000511da) postcard_pane_g3

0xcc74,	// (0x00057507) postcard_pane_g4_ParamLimits

0xcc74,	// (0x00057507) postcard_pane_g4

0x6953,	// (0x000511e6) postcard_pane_g5_ParamLimits

0x6953,	// (0x000511e6) postcard_pane_g5

0x695f,	// (0x000511f2) postcard_pane_g6_ParamLimits

0x695f,	// (0x000511f2) postcard_pane_g6

0xcc82,	// (0x00057515) postcard_pane_g7_ParamLimits

0xcc82,	// (0x00057515) postcard_pane_g7

0x0006,

0xf43a,	// (0x00059ccd) postcard_pane_g_ParamLimits

0xf43a,	// (0x00059ccd) postcard_pane_g

0x696b,	// (0x000511fe) main_mp2_pane_g1_ParamLimits

0x696b,	// (0x000511fe) main_mp2_pane_g1

0x6977,	// (0x0005120a) main_mp2_pane_g2_ParamLimits

0x6977,	// (0x0005120a) main_mp2_pane_g2

0x6983,	// (0x00051216) main_mp2_pane_g3_ParamLimits

0x6983,	// (0x00051216) main_mp2_pane_g3

0x0002,

0xf449,	// (0x00059cdc) main_mp2_pane_g_ParamLimits

0xf449,	// (0x00059cdc) main_mp2_pane_g

0x698f,	// (0x00051222) main_mp2_pane_t1_ParamLimits

0x698f,	// (0x00051222) main_mp2_pane_t1

0x69a6,	// (0x00051239) main_mp2_pane_t2_ParamLimits

0x69a6,	// (0x00051239) main_mp2_pane_t2

0x69b8,	// (0x0005124b) main_mp2_pane_t3_ParamLimits

0x69b8,	// (0x0005124b) main_mp2_pane_t3

0x0002,

0xf450,	// (0x00059ce3) main_mp2_pane_t_ParamLimits

0xf450,	// (0x00059ce3) main_mp2_pane_t

0xcc90,	// (0x00057523) pec_content_pane_ParamLimits

0xcc90,	// (0x00057523) pec_content_pane

0x51ab,	// (0x0004fa3e) scroll_pane_cp015

0xcca2,	// (0x00057535) pec_attribute_pane_ParamLimits

0xcca2,	// (0x00057535) pec_attribute_pane

0x69ca,	// (0x0005125d) pec_content_pane_g1_ParamLimits

0x69ca,	// (0x0005125d) pec_content_pane_g1

0xccb2,	// (0x00057545) pec_content_pane_t1_ParamLimits

0xccb2,	// (0x00057545) pec_content_pane_t1

0xccc4,	// (0x00057557) pec_content_pane_t2_ParamLimits

0xccc4,	// (0x00057557) pec_content_pane_t2

0x0001,

0xf457,	// (0x00059cea) pec_content_pane_t_ParamLimits

0xf457,	// (0x00059cea) pec_content_pane_t

0x69d6,	// (0x00051269) list_single_graphic_pane_cp01_ParamLimits

0x69d6,	// (0x00051269) list_single_graphic_pane_cp01

0x3e82,	// (0x0004e715) bg_popup_sub_pane_cp04

0xccd6,	// (0x00057569) popup_mup_playback_window_g1

0xcce2,	// (0x00057575) popup_mup_playback_window_t1

0xccf7,	// (0x0005758a) popup_mup_playback_window_t2

0x0001,

0xf45c,	// (0x00059cef) popup_mup_playback_window_t

0xcd2e,	// (0x000575c1) main_image_pane_g1_ParamLimits

0xcd2e,	// (0x000575c1) main_image_pane_g1

0xcd71,	// (0x00057604) scroll_pane_cp018_ParamLimits

0xcd71,	// (0x00057604) scroll_pane_cp018

0xcd89,	// (0x0005761c) scroll_pane_cp016_ParamLimits

0xcd89,	// (0x0005761c) scroll_pane_cp016

0x6a70,	// (0x00051303) smil2_image_pane_ParamLimits

0x6a70,	// (0x00051303) smil2_image_pane

0x6aa0,	// (0x00051333) smil2_root_pane_ParamLimits

0x6aa0,	// (0x00051333) smil2_root_pane

0x6acc,	// (0x0005135f) smil2_text_pane_ParamLimits

0x6acc,	// (0x0005135f) smil2_text_pane

0x3c27,	// (0x0004e4ba) bg_list_pane_cp06

0xcdc5,	// (0x00057658) grid_radio_pane

0x3c27,	// (0x0004e4ba) bg_popup_window_pane_cp06

0xcdcd,	// (0x00057660) main_fmradio_pane_t1

0xdd95,	// (0x00058628) heading_pane_cp04

0xcddb,	// (0x0005766e) main_fmradio_pane_t2

0xdd9d,	// (0x00058630) popup_cale_lunar_info_window_g1

0xcde9,	// (0x0005767c) main_fmradio_pane_t3

0xdda5,	// (0x00058638) popup_cale_lunar_info_window_g2

0xcdf7,	// (0x0005768a) main_fmradio_pane_t4

0x0001,

0xce05,	// (0x00057698) main_fmradio_pane_t5

0x0004,

0xf54f,	// (0x00059de2) popup_cale_lunar_info_window_g

0xf471,	// (0x00059d04) main_fmradio_pane_t

0xce13,	// (0x000576a6) wait_bar_pane_cp03

0xce1b,	// (0x000576ae) cell_fmradio_pane_ParamLimits

0xce1b,	// (0x000576ae) cell_fmradio_pane

0xcc82,	// (0x00057515) cell_fmradio_pane_g1_ParamLimits

0xcc82,	// (0x00057515) cell_fmradio_pane_g1

0x3c27,	// (0x0004e4ba) grid_highlight_pane_cp011

0xce2e,	// (0x000576c1) poc_content_pane_ParamLimits

0xce2e,	// (0x000576c1) poc_content_pane

0xce40,	// (0x000576d3) scroll_pane_cp019

0x6b0c,	// (0x0005139f) popup_call_poc_act_window_ParamLimits

0x6b0c,	// (0x0005139f) popup_call_poc_act_window

0x6b19,	// (0x000513ac) popup_call_poc_inact_window_ParamLimits

0x6b19,	// (0x000513ac) popup_call_poc_inact_window

0xf513,	// (0x00059da6) bg_popup_call_poc_act_pane_g

0xdd55,	// (0x000585e8) bg_popup_call_poc_inact_pane_g1

0xdd5d,	// (0x000585f0) bg_popup_call_poc_inact_pane_g2

0xce48,	// (0x000576db) popup_call_poc_act_window_g2

0xdd65,	// (0x000585f8) bg_popup_call_poc_inact_pane_g3

0xdce5,	// (0x00058578) bg_popup_call_poc_inact_pane_g4

0xdd6d,	// (0x00058600) bg_popup_call_poc_inact_pane_g5

0xce50,	// (0x000576e3) popup_call_poc_act_window_t1_ParamLimits

0xce50,	// (0x000576e3) popup_call_poc_act_window_t1

0xce78,	// (0x0005770b) popup_call_poc_act_window_t2_ParamLimits

0xce78,	// (0x0005770b) popup_call_poc_act_window_t2

0xcea0,	// (0x00057733) popup_call_poc_act_window_t3_ParamLimits

0xcea0,	// (0x00057733) popup_call_poc_act_window_t3

0xcec8,	// (0x0005775b) popup_call_poc_act_window_t4_ParamLimits

0xcec8,	// (0x0005775b) popup_call_poc_act_window_t4

0x0003,

0xf47c,	// (0x00059d0f) popup_call_poc_act_window_t_ParamLimits

0xf47c,	// (0x00059d0f) popup_call_poc_act_window_t

0xdd75,	// (0x00058608) bg_popup_call_poc_inact_pane_g6

0xdd7d,	// (0x00058610) bg_popup_call_poc_inact_pane_g7

0xdd85,	// (0x00058618) bg_popup_call_poc_inact_pane_g8

0xceda,	// (0x0005776d) popup_call_poc_inact_window_g2

0xdd8d,	// (0x00058620) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf52a,	// (0x00059dbd) bg_popup_call_poc_inact_pane_g

0xcee2,	// (0x00057775) popup_call_poc_inact_window_t1_ParamLimits

0xcee2,	// (0x00057775) popup_call_poc_inact_window_t1

0xcef7,	// (0x0005778a) popup_call_poc_inact_window_t2_ParamLimits

0xcef7,	// (0x0005778a) popup_call_poc_inact_window_t2

0xcf0c,	// (0x0005779f) popup_call_poc_inact_window_t3_ParamLimits

0xcf0c,	// (0x0005779f) popup_call_poc_inact_window_t3

0x0002,

0xf485,	// (0x00059d18) popup_call_poc_inact_window_t_ParamLimits

0xf485,	// (0x00059d18) popup_call_poc_inact_window_t

0xde47,	// (0x000586da) context_pane_ParamLimits

0x71a4,	// (0x00051a37) signal_pane_ParamLimits

0x49a9,	// (0x0004f23c) main_call2_pane

0x7117,	// (0x000519aa) popup_phob_thumbnail2_window_ParamLimits

0x7117,	// (0x000519aa) popup_phob_thumbnail2_window

0x67e7,	// (0x0005107a) aid_hotspot_pointer_arrow_pane

0x67ef,	// (0x00051082) aid_hotspot_pointer_hand_pane

0x6e64,	// (0x000516f7) phob_pre_status_pane_g5

0x3efd,	// (0x0004e790) cams_zoom_pane_ParamLimits

0x3efd,	// (0x0004e790) image_vga_pane_ParamLimits

0x3f19,	// (0x0004e7ac) main_camera_pane_g1_ParamLimits

0x3f19,	// (0x0004e7ac) main_camera_pane_g2_ParamLimits

0x3f19,	// (0x0004e7ac) main_camera_pane_g3_ParamLimits

0x3f19,	// (0x0004e7ac) main_camera_pane_g4_ParamLimits

0x3f19,	// (0x0004e7ac) main_camera_pane_g5_ParamLimits

0x3f19,	// (0x0004e7ac) main_camera_pane_g6_ParamLimits

0x3f19,	// (0x0004e7ac) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x00059a3e) main_camera_pane_g_ParamLimits

0x4a1e,	// (0x0004f2b1) main_camera_pane_t1_ParamLimits

0x4a1e,	// (0x0004f2b1) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00059a4f) main_camera_pane_t_ParamLimits

0x3e82,	// (0x0004e715) bg_popup_preview_window_pane_cp01_ParamLimits

0x3e82,	// (0x0004e715) bg_popup_preview_window_pane_cp01

0xcf21,	// (0x000577b4) popup_phob_thumbnail2_window_g1_ParamLimits

0xcf21,	// (0x000577b4) popup_phob_thumbnail2_window_g1

0x3c27,	// (0x0004e4ba) call2_cli_visual_pane

0x6b35,	// (0x000513c8) popup_call2_audio_conf_window_ParamLimits

0x6b35,	// (0x000513c8) popup_call2_audio_conf_window

0x6b4a,	// (0x000513dd) popup_call2_audio_first_window_ParamLimits

0x6b4a,	// (0x000513dd) popup_call2_audio_first_window

0x6be8,	// (0x0005147b) popup_call2_audio_in_window_ParamLimits

0x6be8,	// (0x0005147b) popup_call2_audio_in_window

0x6c2a,	// (0x000514bd) popup_call2_audio_out_window_ParamLimits

0x6c2a,	// (0x000514bd) popup_call2_audio_out_window

0x6c8c,	// (0x0005151f) popup_call2_audio_second_window_ParamLimits

0x6c8c,	// (0x0005151f) popup_call2_audio_second_window

0x6cea,	// (0x0005157d) popup_call2_audio_wait_window_ParamLimits

0x6cea,	// (0x0005157d) popup_call2_audio_wait_window

0x3c27,	// (0x0004e4ba) bg_popup_call2_act_pane_cp03

0x3e64,	// (0x0004e6f7) list_conf_pane_cp

0xcf2d,	// (0x000577c0) popup_call2_audio_conf_window_t1

0xcf3b,	// (0x000577ce) list_single_graphic_popup_conf2_pane_ParamLimits

0xcf3b,	// (0x000577ce) list_single_graphic_popup_conf2_pane

0xc80d,	// (0x000570a0) list_highlight_pane_cp04

0xcf4e,	// (0x000577e1) list_single_graphic_popup_conf2_pane_g1

0xc81e,	// (0x000570b1) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf48c,	// (0x00059d1f) list_single_graphic_popup_conf2_pane_g

0xcf58,	// (0x000577eb) list_single_graphic_popup_conf2_pane_t1

0xcf66,	// (0x000577f9) bg_popup_call2_act_pane_cp01_ParamLimits

0xcf66,	// (0x000577f9) bg_popup_call2_act_pane_cp01

0xcff0,	// (0x00057883) call_type_pane_cp05_ParamLimits

0xcff0,	// (0x00057883) call_type_pane_cp05

0xd044,	// (0x000578d7) popup_call2_audio_second_window_g1_ParamLimits

0xd044,	// (0x000578d7) popup_call2_audio_second_window_g1

0xd098,	// (0x0005792b) popup_call2_audio_second_window_g2_ParamLimits

0xd098,	// (0x0005792b) popup_call2_audio_second_window_g2

0x0002,

0xf491,	// (0x00059d24) popup_call2_audio_second_window_g_ParamLimits

0xf491,	// (0x00059d24) popup_call2_audio_second_window_g

0xd0fd,	// (0x00057990) popup_call2_audio_second_window_t1_ParamLimits

0xd0fd,	// (0x00057990) popup_call2_audio_second_window_t1

0xd1b8,	// (0x00057a4b) popup_call2_audio_second_window_t2_ParamLimits

0xd1b8,	// (0x00057a4b) popup_call2_audio_second_window_t2

0xd20b,	// (0x00057a9e) popup_call2_audio_second_window_t3_ParamLimits

0xd20b,	// (0x00057a9e) popup_call2_audio_second_window_t3

0x0003,

0xf498,	// (0x00059d2b) popup_call2_audio_second_window_t_ParamLimits

0xf498,	// (0x00059d2b) popup_call2_audio_second_window_t

0x3c27,	// (0x0004e4ba) bg_popup_call2_in_pane_cp02

0x3c31,	// (0x0004e4c4) call_type_pane_cp04

0x6d29,	// (0x000515bc) popup_call2_audio_wait_window_g1

0x6d31,	// (0x000515c4) popup_call2_audio_wait_window_g2

0x0001,

0xf4a1,	// (0x00059d34) popup_call2_audio_wait_window_g

0x3c49,	// (0x0004e4dc) popup_call2_audio_wait_window_t3

0xd2fe,	// (0x00057b91) bg_popup_call2_act_pane_ParamLimits

0xd2fe,	// (0x00057b91) bg_popup_call2_act_pane

0xd3be,	// (0x00057c51) call_type_pane_cp03_ParamLimits

0xd3be,	// (0x00057c51) call_type_pane_cp03

0xd422,	// (0x00057cb5) popup_call2_audio_first_window_g1_ParamLimits

0xd422,	// (0x00057cb5) popup_call2_audio_first_window_g1

0xd492,	// (0x00057d25) popup_call2_audio_first_window_g2_ParamLimits

0xd492,	// (0x00057d25) popup_call2_audio_first_window_g2

0xc732,	// (0x00056fc5) popup_call2_audio_first_window_g3_ParamLimits

0xc732,	// (0x00056fc5) popup_call2_audio_first_window_g3

0x0004,

0xf4a6,	// (0x00059d39) popup_call2_audio_first_window_g_ParamLimits

0xf4a6,	// (0x00059d39) popup_call2_audio_first_window_g

0xd570,	// (0x00057e03) popup_call2_audio_first_window_t1_ParamLimits

0xd570,	// (0x00057e03) popup_call2_audio_first_window_t1

0xd673,	// (0x00057f06) popup_call2_audio_first_window_t4_ParamLimits

0xd673,	// (0x00057f06) popup_call2_audio_first_window_t4

0xd756,	// (0x00057fe9) popup_call2_audio_first_window_t5_ParamLimits

0xd756,	// (0x00057fe9) popup_call2_audio_first_window_t5

0x0003,

0xf4b1,	// (0x00059d44) popup_call2_audio_first_window_t_ParamLimits

0xf4b1,	// (0x00059d44) popup_call2_audio_first_window_t

0x3e7a,	// (0x0004e70d) bg_popup_call2_act_pane_g1

0xddad,	// (0x00058640) popup_cale_lunar_info_window_t1

0xddbb,	// (0x0005864e) popup_cale_lunar_info_window_t2

0xddc9,	// (0x0005865c) popup_cale_lunar_info_window_t3

0x3c27,	// (0x0004e4ba) bg_popup_call2_bubble_pane

0xd857,	// (0x000580ea) bg_popup_call2_in_pane_cp01_ParamLimits

0xd857,	// (0x000580ea) bg_popup_call2_in_pane_cp01

0x38df,	// (0x0004e172) call_type_pane_cp02

0x6d39,	// (0x000515cc) popup_call2_audio_out_window_g1_ParamLimits

0x6d39,	// (0x000515cc) popup_call2_audio_out_window_g1

0xd89f,	// (0x00058132) popup_call2_audio_out_window_g2_ParamLimits

0xd89f,	// (0x00058132) popup_call2_audio_out_window_g2

0x6d65,	// (0x000515f8) popup_call2_audio_out_window_g3_ParamLimits

0x6d65,	// (0x000515f8) popup_call2_audio_out_window_g3

0x0003,

0xf4ba,	// (0x00059d4d) popup_call2_audio_out_window_g_ParamLimits

0xf4ba,	// (0x00059d4d) popup_call2_audio_out_window_g

0xd8d6,	// (0x00058169) popup_call2_audio_out_window_t1_ParamLimits

0xd8d6,	// (0x00058169) popup_call2_audio_out_window_t1

0xd935,	// (0x000581c8) popup_call2_audio_out_window_t2_ParamLimits

0xd935,	// (0x000581c8) popup_call2_audio_out_window_t2

0xd989,	// (0x0005821c) popup_call2_audio_out_window_t3_ParamLimits

0xd989,	// (0x0005821c) popup_call2_audio_out_window_t3

0xd99f,	// (0x00058232) popup_call2_audio_out_window_t4_ParamLimits

0xd99f,	// (0x00058232) popup_call2_audio_out_window_t4

0xd9b5,	// (0x00058248) popup_call2_audio_out_window_t5_ParamLimits

0xd9b5,	// (0x00058248) popup_call2_audio_out_window_t5

0x0005,

0xf4c3,	// (0x00059d56) popup_call2_audio_out_window_t_ParamLimits

0xf4c3,	// (0x00059d56) popup_call2_audio_out_window_t

0xda19,	// (0x000582ac) bg_popup_call2_in_pane_ParamLimits

0xda19,	// (0x000582ac) bg_popup_call2_in_pane

0xda75,	// (0x00058308) popup_call2_audio_in_window_g1_ParamLimits

0xda75,	// (0x00058308) popup_call2_audio_in_window_g1

0xdaad,	// (0x00058340) popup_call2_audio_in_window_g2_ParamLimits

0xdaad,	// (0x00058340) popup_call2_audio_in_window_g2

0xdae5,	// (0x00058378) popup_call2_audio_in_window_g3_ParamLimits

0xdae5,	// (0x00058378) popup_call2_audio_in_window_g3

0x0003,

0xf4d0,	// (0x00059d63) popup_call2_audio_in_window_g_ParamLimits

0xf4d0,	// (0x00059d63) popup_call2_audio_in_window_g

0xdb3d,	// (0x000583d0) popup_call2_audio_in_window_t1_ParamLimits

0xdb3d,	// (0x000583d0) popup_call2_audio_in_window_t1

0xdbbd,	// (0x00058450) popup_call2_audio_in_window_t2_ParamLimits

0xdbbd,	// (0x00058450) popup_call2_audio_in_window_t2

0xdc3d,	// (0x000584d0) popup_call2_audio_in_window_t3_ParamLimits

0xdc3d,	// (0x000584d0) popup_call2_audio_in_window_t3

0xdc57,	// (0x000584ea) popup_call2_audio_in_window_t4_ParamLimits

0xdc57,	// (0x000584ea) popup_call2_audio_in_window_t4

0xdc69,	// (0x000584fc) popup_call2_audio_in_window_t5_ParamLimits

0xdc69,	// (0x000584fc) popup_call2_audio_in_window_t5

0xdc7b,	// (0x0005850e) popup_call2_audio_in_window_t6_ParamLimits

0xdc7b,	// (0x0005850e) popup_call2_audio_in_window_t6

0x0005,

0xf4d9,	// (0x00059d6c) popup_call2_audio_in_window_t_ParamLimits

0xf4d9,	// (0x00059d6c) popup_call2_audio_in_window_t

0x3e7a,	// (0x0004e70d) bg_popup_call2_in_pane_g1

0xddd7,	// (0x0005866a) popup_cale_lunar_info_window_t4

0x0003,

0xf554,	// (0x00059de7) popup_cale_lunar_info_window_t

0x3e82,	// (0x0004e715) bg_popup_call2_rect_pane_ParamLimits

0x3e82,	// (0x0004e715) bg_popup_call2_rect_pane

0x3c27,	// (0x0004e4ba) call2_cli_visual_graphic_pane

0x3c27,	// (0x0004e4ba) call2_cli_visual_text_pane

0x71e0,	// (0x00051a73) smil_status_volume_pane_g3

0x0002,

0x3e9a,	// (0x0004e72d) call2_cli_visual_graphic_pane_g1

0x3e9a,	// (0x0004e72d) call2_cli_visual_graphic_pane_g2

0x3e9a,	// (0x0004e72d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e6,	// (0x00059d79) call2_cli_visual_graphic_pane_g

0xdc8d,	// (0x00058520) bg_popup_call2_rect_pane_g1

0x4391,	// (0x0004ec24) bg_popup_call2_rect_pane_g2

0xdc95,	// (0x00058528) bg_popup_call2_rect_pane_g3

0xdc9d,	// (0x00058530) bg_popup_call2_rect_pane_g4

0xdca5,	// (0x00058538) bg_popup_call2_rect_pane_g5

0xdcad,	// (0x00058540) bg_popup_call2_rect_pane_g6

0xdcb5,	// (0x00058548) bg_popup_call2_rect_pane_g7

0xdcbd,	// (0x00058550) bg_popup_call2_rect_pane_g8

0xdcc5,	// (0x00058558) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ed,	// (0x00059d80) bg_popup_call2_rect_pane_g

0xdccd,	// (0x00058560) bg_popup_call2_bubble_pane_g1

0xdcd5,	// (0x00058568) bg_popup_call2_bubble_pane_g2

0xdcdd,	// (0x00058570) bg_popup_call2_bubble_pane_g3

0xdce5,	// (0x00058578) bg_popup_call2_bubble_pane_g4

0xdced,	// (0x00058580) bg_popup_call2_bubble_pane_g5

0xdcf5,	// (0x00058588) bg_popup_call2_bubble_pane_g6

0xdcfd,	// (0x00058590) bg_popup_call2_bubble_pane_g7

0xdd05,	// (0x00058598) bg_popup_call2_bubble_pane_g8

0xdd0d,	// (0x000585a0) bg_popup_call2_bubble_pane_g9

0x0008,

0xf500,	// (0x00059d93) bg_popup_call2_bubble_pane_g

0x449a,	// (0x0004ed2d) aid_cale_week_size_cell_pane

0x3e82,	// (0x0004e715) aid_cams_cif_uncrop_pane_ParamLimits

0x3e82,	// (0x0004e715) aid_cams_cif_uncrop_pane

0x4b71,	// (0x0004f404) aid_cams_size_cell_ParamLimits

0x4b71,	// (0x0004f404) aid_cams_size_cell

0x4b7d,	// (0x0004f410) grid_cams_pane_ParamLimits

0x4b8b,	// (0x0004f41e) linegrid_cams_pane_ParamLimits

0x4cc5,	// (0x0004f558) call_video_pane_t1

0x4ce6,	// (0x0004f579) call_video_pane_t2

0x0001,

0xf208,	// (0x00059a9b) call_video_pane_t

0x543c,	// (0x0004fccf) aid_cale_month_size_cell_pane_ParamLimits

0x543c,	// (0x0004fccf) aid_cale_month_size_cell_pane

0xf598,	// (0x00059e2b) smil_status_volume_pane_g

0x71ed,	// (0x00051a80) volume_smil_pane_ParamLimits

0x3491,	// (0x0004dd24) aid_popup2_width_pane

0x42f2,	// (0x0004eb85) cell_qdial_pane_g4_ParamLimits

0x42f2,	// (0x0004eb85) cell_qdial_pane_g4

0x644c,	// (0x00050cdf) aid_blid_cardinal_pane_ParamLimits

0x645c,	// (0x00050cef) aid_blid_destination_pane_ParamLimits

0x645c,	// (0x00050cef) aid_blid_destination_pane

0x3e82,	// (0x0004e715) bg_popup_call_poc_act_pane_ParamLimits

0x3e82,	// (0x0004e715) bg_popup_call_poc_act_pane

0x3e82,	// (0x0004e715) bg_popup_call_poc_inact_pane_ParamLimits

0x3e82,	// (0x0004e715) bg_popup_call_poc_inact_pane

0xdd15,	// (0x000585a8) bg_popup_call_poc_act_pane_g1

0xdd1d,	// (0x000585b0) bg_popup_call_poc_act_pane_g2

0xdd25,	// (0x000585b8) bg_popup_call_poc_act_pane_g3

0xdce5,	// (0x00058578) bg_popup_call_poc_act_pane_g4

0xdced,	// (0x00058580) bg_popup_call_poc_act_pane_g5

0xdd2d,	// (0x000585c0) bg_popup_call_poc_act_pane_g6

0xdcfd,	// (0x00058590) bg_popup_call_poc_act_pane_g7

0xdd35,	// (0x000585c8) bg_popup_call_poc_act_pane_g8

0x3c27,	// (0x0004e4ba) main_usb_pane

0x704a,	// (0x000518dd) popup_cale_lunar_info_window

0x5063,	// (0x0004f8f6) im_reading_pane_t1_ParamLimits

0x50bb,	// (0x0004f94e) list_im_pane_ParamLimits

0x50cc,	// (0x0004f95f) scroll_pane_cp07_ParamLimits

0x3c27,	// (0x0004e4ba) grid_highlight_pane_cp012

0x3e82,	// (0x0004e715) mup_scale_pane_ParamLimits

0xc732,	// (0x00056fc5) main_usb_pane_g1_ParamLimits

0xc732,	// (0x00056fc5) main_usb_pane_g1

0x6dcc,	// (0x0005165f) main_usb_pane_g2_ParamLimits

0x6dcc,	// (0x0005165f) main_usb_pane_g2

0x0001,

0xf53d,	// (0x00059dd0) main_usb_pane_g_ParamLimits

0xf53d,	// (0x00059dd0) main_usb_pane_g

0x6dd8,	// (0x0005166b) main_usb_pane_t1_ParamLimits

0x6dd8,	// (0x0005166b) main_usb_pane_t1

0x6dea,	// (0x0005167d) main_usb_pane_t2_ParamLimits

0x6dea,	// (0x0005167d) main_usb_pane_t2

0x6dfc,	// (0x0005168f) main_usb_pane_t3_ParamLimits

0x6dfc,	// (0x0005168f) main_usb_pane_t3

0x6e0e,	// (0x000516a1) main_usb_pane_t4_ParamLimits

0x6e0e,	// (0x000516a1) main_usb_pane_t4

0x6e20,	// (0x000516b3) main_usb_pane_t5_ParamLimits

0x6e20,	// (0x000516b3) main_usb_pane_t5

0x6e32,	// (0x000516c5) main_usb_pane_t6_ParamLimits

0x6e32,	// (0x000516c5) main_usb_pane_t6

0x0005,

0xf542,	// (0x00059dd5) main_usb_pane_t_ParamLimits

0x63f2,	// (0x00050c85) aid_text_placing

0x63fe,	// (0x00050c91) main_location2_pane_t1_ParamLimits

0x6412,	// (0x00050ca5) main_location2_pane_t2_ParamLimits

0x6426,	// (0x00050cb9) main_location2_pane_t3_ParamLimits

0x643a,	// (0x00050ccd) main_location2_pane_t4_ParamLimits

0x643a,	// (0x00050ccd) main_location2_pane_t4

0xf349,	// (0x00059bdc) main_location2_pane_t_ParamLimits

0x3ebe,	// (0x0004e751) find_pinb_pane_g2_ParamLimits

0x3ebe,	// (0x0004e751) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00059953) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00059953) find_pinb_pane_g

0x3eca,	// (0x0004e75d) find_pinb_pane_t1_ParamLimits

0x3edc,	// (0x0004e76f) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x00059958) find_pinb_pane_t_ParamLimits

0x3c27,	// (0x0004e4ba) main_call3_pane

0x5a3e,	// (0x000502d1) cale_month_day_heading_pane_t1_ParamLimits

0x5ac4,	// (0x00050357) cale_month_day_heading_pane_t2_ParamLimits

0x5b3d,	// (0x000503d0) cale_month_day_heading_pane_t3_ParamLimits

0x5bb6,	// (0x00050449) cale_month_day_heading_pane_t4_ParamLimits

0x5c2f,	// (0x000504c2) cale_month_day_heading_pane_t5_ParamLimits

0x5ca8,	// (0x0005053b) cale_month_day_heading_pane_t6_ParamLimits

0x5d21,	// (0x000505b4) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00059ad3) cale_month_day_heading_pane_t_ParamLimits

0x5fe3,	// (0x00050876) smil_status_volume_pane

0x6923,	// (0x000511b6) postcard_address_pane_ParamLimits

0x6923,	// (0x000511b6) postcard_address_pane

0x692f,	// (0x000511c2) postcard_message_pane_ParamLimits

0x692f,	// (0x000511c2) postcard_message_pane

0x6d91,	// (0x00051624) call2_cli_visual_pane_t1_ParamLimits

0x6d91,	// (0x00051624) call2_cli_visual_pane_t1

0xdefa,	// (0x0005878d) postcard_message_pane_t1_ParamLimits

0xdefa,	// (0x0005878d) postcard_message_pane_t1

0xdee2,	// (0x00058775) postcard_address_pane_t1_ParamLimits

0xdee2,	// (0x00058775) postcard_address_pane_t1

0x731e,	// (0x00051bb1) popup_call3_audio_in_window_ParamLimits

0x731e,	// (0x00051bb1) popup_call3_audio_in_window

0x7202,	// (0x00051a95) bg_popup_call3_in_pane_ParamLimits

0x7202,	// (0x00051a95) bg_popup_call3_in_pane

0x7264,	// (0x00051af7) popup_call3_audio_in_window_g1_ParamLimits

0x7264,	// (0x00051af7) popup_call3_audio_in_window_g1

0x727c,	// (0x00051b0f) popup_call3_audio_in_window_g2_ParamLimits

0x727c,	// (0x00051b0f) popup_call3_audio_in_window_g2

0x7294,	// (0x00051b27) popup_call3_audio_in_window_g3_ParamLimits

0x7294,	// (0x00051b27) popup_call3_audio_in_window_g3

0x0003,

0xf59f,	// (0x00059e32) popup_call3_audio_in_window_g_ParamLimits

0xf59f,	// (0x00059e32) popup_call3_audio_in_window_g

0x72bc,	// (0x00051b4f) popup_call3_audio_in_window_t1_ParamLimits

0x72bc,	// (0x00051b4f) popup_call3_audio_in_window_t1

0x72e4,	// (0x00051b77) popup_call3_audio_in_window_t2_ParamLimits

0x72e4,	// (0x00051b77) popup_call3_audio_in_window_t2

0x730c,	// (0x00051b9f) popup_call3_audio_in_window_t3_ParamLimits

0x730c,	// (0x00051b9f) popup_call3_audio_in_window_t3

0x0002,

0xf5a8,	// (0x00059e3b) popup_call3_audio_in_window_t_ParamLimits

0xf5a8,	// (0x00059e3b) popup_call3_audio_in_window_t

0x49a9,	// (0x0004f23c) bg_popup_call3_rect_pane

0xdc8d,	// (0x00058520) bg_popup_call3_rect_pane_g1

0x4391,	// (0x0004ec24) bg_popup_call3_rect_pane_g2

0xdc95,	// (0x00058528) bg_popup_call3_rect_pane_g3

0xdc9d,	// (0x00058530) bg_popup_call3_rect_pane_g4

0xdca5,	// (0x00058538) bg_popup_call3_rect_pane_g5

0xdcad,	// (0x00058540) bg_popup_call3_rect_pane_g6

0xdcb5,	// (0x00058548) bg_popup_call3_rect_pane_g7

0x347f,	// (0x0004dd12) mup_visualizer_osc_pane

0x347f,	// (0x0004dd12) mup_visualizer_spec_pane

0x7222,	// (0x00051ab5) call3_video_qcif_pane_ParamLimits

0x7222,	// (0x00051ab5) call3_video_qcif_pane

0x7234,	// (0x00051ac7) call3_video_qcif_uncrop_pane_ParamLimits

0x7234,	// (0x00051ac7) call3_video_qcif_uncrop_pane

0x7242,	// (0x00051ad5) call3_video_subqcif_pane_ParamLimits

0x7242,	// (0x00051ad5) call3_video_subqcif_pane

0x7254,	// (0x00051ae7) call3_video_subqcif_uncrop_pane_ParamLimits

0x7254,	// (0x00051ae7) call3_video_subqcif_uncrop_pane

0x72ac,	// (0x00051b3f) popup_call3_audio_in_window_g4_ParamLimits

0x72ac,	// (0x00051b3f) popup_call3_audio_in_window_g4

0x347f,	// (0x0004dd12) mup_spec_half_pane

0x347f,	// (0x0004dd12) mup_spec_half_pane_cp

0x347f,	// (0x0004dd12) mup_osc_middle_pane

0x4b67,	// (0x0004f3fa) mup_visualizer_osc_pane_g1

0xde95,	// (0x00058728) mup_spec_bar_pane_ParamLimits

0xde95,	// (0x00058728) mup_spec_bar_pane

0x4b67,	// (0x0004f3fa) mup_spec_bar_pane_g1

0x4b67,	// (0x0004f3fa) mup_spec_bar_pane_g2

0x0001,

0xf3c3,	// (0x00059c56) mup_spec_bar_pane_g

0x449a,	// (0x0004ed2d) aid_cale_week_size_cell_pane_ParamLimits

0x44af,	// (0x0004ed42) bg_cale_heading_pane_ParamLimits

0x44d1,	// (0x0004ed64) bg_cale_pane_cp01_ParamLimits

0x44ee,	// (0x0004ed81) cale_week_corner_pane_ParamLimits

0x4508,	// (0x0004ed9b) cale_week_day_heading_pane_ParamLimits

0x452a,	// (0x0004edbd) cale_week_scroll_pane_g1_ParamLimits

0x4547,	// (0x0004edda) cale_week_scroll_pane_g2_ParamLimits

0x455a,	// (0x0004eded) cale_week_scroll_pane_g3_ParamLimits

0x456d,	// (0x0004ee00) cale_week_scroll_pane_g4_ParamLimits

0x4580,	// (0x0004ee13) cale_week_scroll_pane_g5_ParamLimits

0x4593,	// (0x0004ee26) cale_week_scroll_pane_g6_ParamLimits

0x45a6,	// (0x0004ee39) cale_week_scroll_pane_g7_ParamLimits

0x45bb,	// (0x0004ee4e) cale_week_scroll_pane_g8_ParamLimits

0x45d0,	// (0x0004ee63) cale_week_scroll_pane_g9_ParamLimits

0x45e3,	// (0x0004ee76) cale_week_scroll_pane_g10_ParamLimits

0x45f6,	// (0x0004ee89) cale_week_scroll_pane_g11_ParamLimits

0x4609,	// (0x0004ee9c) cale_week_scroll_pane_g12_ParamLimits

0x4620,	// (0x0004eeb3) cale_week_scroll_pane_g13_ParamLimits

0x463b,	// (0x0004eece) cale_week_scroll_pane_g14_ParamLimits

0x4656,	// (0x0004eee9) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x000599e4) cale_week_scroll_pane_g_ParamLimits

0x4686,	// (0x0004ef19) cale_week_time_pane_ParamLimits

0x469b,	// (0x0004ef2e) grid_cale_week_pane_ParamLimits

0x46ba,	// (0x0004ef4d) listscroll_cale_week_pane_t1

0x46cc,	// (0x0004ef5f) scroll_pane_cp08_ParamLimits

0x54dd,	// (0x0004fd70) cale_month_corner_pane_ParamLimits

0x59ab,	// (0x0005023e) cale_month_pane_t1

0x59bd,	// (0x00050250) cale_month_week_pane_ParamLimits

0xc732,	// (0x00056fc5) popup_call_status_window_g1_ParamLimits

0x621f,	// (0x00050ab2) popup_call_status_window_g2_ParamLimits

0x622b,	// (0x00050abe) popup_call_status_window_g3_ParamLimits

0xf2d0,	// (0x00059b63) popup_call_status_window_g_ParamLimits

0xc799,	// (0x0005702c) aid_call2_pane

0x67db,	// (0x0005106e) msg_header_pane_g1

0x6923,	// (0x000511b6) postcard_address2_pane_ParamLimits

0x6923,	// (0x000511b6) postcard_address2_pane

0x692f,	// (0x000511c2) postcard_message2_pane_ParamLimits

0x692f,	// (0x000511c2) postcard_message2_pane

0x71b2,	// (0x00051a45) message2_row_pane_ParamLimits

0x71b2,	// (0x00051a45) message2_row_pane

0x71cd,	// (0x00051a60) address2_row_pane_ParamLimits

0x71cd,	// (0x00051a60) address2_row_pane

0xde62,	// (0x000586f5) postcard_message2_row_pane_g1

0xde6a,	// (0x000586fd) postcard_message2_row_pane_t1

0xde62,	// (0x000586f5) address2_row_pane_g1

0xde6a,	// (0x000586fd) address2_row_pane_t1

0x49a1,	// (0x0004f234) aid_size_cell_vorec

0x3c27,	// (0x0004e4ba) main_rss_pane

0xde78,	// (0x0005870b) rss_list_single_pane_ParamLimits

0xde78,	// (0x0005870b) rss_list_single_pane

0xde86,	// (0x00058719) rss_list_single_pane_t1

0xde86,	// (0x00058719) rss_list_single_pane_t2

0x0001,

0xf593,	// (0x00059e26) rss_list_single_pane_t

0x3c27,	// (0x0004e4ba) main_camera2_pane

0x3c27,	// (0x0004e4ba) main_video2_pane

0x3739,	// (0x0004dfcc) cams_zoom_pane_cp2_ParamLimits

0x3739,	// (0x0004dfcc) cams_zoom_pane_cp2

0x3739,	// (0x0004dfcc) image2_vga_pane_ParamLimits

0x3739,	// (0x0004dfcc) image2_vga_pane

0xc7cd,	// (0x00057060) main_camera2_pane_g1_ParamLimits

0xc7cd,	// (0x00057060) main_camera2_pane_g1

0xc7cd,	// (0x00057060) main_camera2_pane_g2_ParamLimits

0xc7cd,	// (0x00057060) main_camera2_pane_g2

0xc7cd,	// (0x00057060) main_camera2_pane_g3_ParamLimits

0xc7cd,	// (0x00057060) main_camera2_pane_g3

0xc7cd,	// (0x00057060) main_camera2_pane_g4_ParamLimits

0xc7cd,	// (0x00057060) main_camera2_pane_g4

0xc7cd,	// (0x00057060) main_camera2_pane_g5_ParamLimits

0xc7cd,	// (0x00057060) main_camera2_pane_g5

0xc7cd,	// (0x00057060) main_camera2_pane_g6_ParamLimits

0xc7cd,	// (0x00057060) main_camera2_pane_g6

0xc7cd,	// (0x00057060) main_camera2_pane_g7_ParamLimits

0xc7cd,	// (0x00057060) main_camera2_pane_g7

0xc7cd,	// (0x00057060) main_camera2_pane_g8_ParamLimits

0xc7cd,	// (0x00057060) main_camera2_pane_g8

0x0008,

0xf5af,	// (0x00059e42) main_camera2_pane_g_ParamLimits

0xf5af,	// (0x00059e42) main_camera2_pane_g

0x733b,	// (0x00051bce) main_camera2_pane_t1_ParamLimits

0x733b,	// (0x00051bce) main_camera2_pane_t1

0x733b,	// (0x00051bce) main_camera2_pane_t2_ParamLimits

0x733b,	// (0x00051bce) main_camera2_pane_t2

0x733b,	// (0x00051bce) main_camera2_pane_t3_ParamLimits

0x733b,	// (0x00051bce) main_camera2_pane_t3

0x733b,	// (0x00051bce) main_camera2_pane_t4_ParamLimits

0x733b,	// (0x00051bce) main_camera2_pane_t4

0x0006,

0xf5c2,	// (0x00059e55) main_camera2_pane_t_ParamLimits

0xf5c2,	// (0x00059e55) main_camera2_pane_t

0x7363,	// (0x00051bf6) cams_zoom_pane_cp4_ParamLimits

0x7363,	// (0x00051bf6) cams_zoom_pane_cp4

0x6ff5,	// (0x00051888) image2_cif_pane_ParamLimits

0x6ff5,	// (0x00051888) image2_cif_pane

0x3739,	// (0x0004dfcc) image2_subqcif_pane_ParamLimits

0x3739,	// (0x0004dfcc) image2_subqcif_pane

0x7371,	// (0x00051c04) main_video2_pane_g1_ParamLimits

0x7371,	// (0x00051c04) main_video2_pane_g1

0x7371,	// (0x00051c04) main_video2_pane_g2_ParamLimits

0x7371,	// (0x00051c04) main_video2_pane_g2

0x7371,	// (0x00051c04) main_video2_pane_g3_ParamLimits

0x7371,	// (0x00051c04) main_video2_pane_g3

0x7371,	// (0x00051c04) main_video2_pane_g4_ParamLimits

0x7371,	// (0x00051c04) main_video2_pane_g4

0x7371,	// (0x00051c04) main_video2_pane_g5_ParamLimits

0x7371,	// (0x00051c04) main_video2_pane_g5

0x7371,	// (0x00051c04) main_video2_pane_g6_ParamLimits

0x7371,	// (0x00051c04) main_video2_pane_g6

0x0005,

0xf5d1,	// (0x00059e64) main_video2_pane_g_ParamLimits

0xf5d1,	// (0x00059e64) main_video2_pane_g

0x737f,	// (0x00051c12) main_video2_pane_t1_ParamLimits

0x737f,	// (0x00051c12) main_video2_pane_t1

0x737f,	// (0x00051c12) main_video2_pane_t2_ParamLimits

0x737f,	// (0x00051c12) main_video2_pane_t2

0x737f,	// (0x00051c12) main_video2_pane_t3_ParamLimits

0x737f,	// (0x00051c12) main_video2_pane_t3

0x0002,

0xf5de,	// (0x00059e71) main_video2_pane_t_ParamLimits

0xf5de,	// (0x00059e71) main_video2_pane_t

0x6ec8,	// (0x0005175b) call_muted_g2

0x0001,

0xf585,	// (0x00059e18) call_muted_g

0x3c27,	// (0x0004e4ba) main_mup2_pane

0x3f27,	// (0x0004e7ba) main_mup2_pane_g1_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup2_pane_g1

0x3f27,	// (0x0004e7ba) main_mup2_pane_g2_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup2_pane_g2

0xedf2,	// (0x00059685) main_mup_pane_g13_cp1

0x3753,	// (0x0004dfe6) mup_volume_pane_cp1

0x3f27,	// (0x0004e7ba) main_mup2_pane_g4_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup2_pane_g4

0x3f27,	// (0x0004e7ba) main_mup2_pane_g5_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup2_pane_g5

0x3f27,	// (0x0004e7ba) main_mup2_pane_g6_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup2_pane_g6

0x3f27,	// (0x0004e7ba) main_mup2_pane_g7_ParamLimits

0x3f27,	// (0x0004e7ba) main_mup2_pane_g7

0x0006,

0xf5e5,	// (0x00059e78) main_mup2_pane_g_ParamLimits

0xf5e5,	// (0x00059e78) main_mup2_pane_g

0x3f35,	// (0x0004e7c8) main_mup2_pane_t1_ParamLimits

0x3f35,	// (0x0004e7c8) main_mup2_pane_t1

0x3f35,	// (0x0004e7c8) main_mup2_pane_t2_ParamLimits

0x3f35,	// (0x0004e7c8) main_mup2_pane_t2

0x3f35,	// (0x0004e7c8) main_mup2_pane_t3_ParamLimits

0x3f35,	// (0x0004e7c8) main_mup2_pane_t3

0x3f35,	// (0x0004e7c8) main_mup2_pane_t4_ParamLimits

0x3f35,	// (0x0004e7c8) main_mup2_pane_t4

0x3f35,	// (0x0004e7c8) main_mup2_pane_t5_ParamLimits

0x3f35,	// (0x0004e7c8) main_mup2_pane_t5

0x3f35,	// (0x0004e7c8) main_mup2_pane_t6_ParamLimits

0x3f35,	// (0x0004e7c8) main_mup2_pane_t6

0x0005,

0xf5f4,	// (0x00059e87) main_mup2_pane_t_ParamLimits

0xf5f4,	// (0x00059e87) main_mup2_pane_t

0xcb9d,	// (0x00057430) mup2_visualizer_pane_ParamLimits

0xcb9d,	// (0x00057430) mup2_visualizer_pane

0xcb9d,	// (0x00057430) mup_progress_pane_cp_ParamLimits

0xcb9d,	// (0x00057430) mup_progress_pane_cp

0x7446,	// (0x00051cd9) mup_volume_pane_cp_ParamLimits

0x7446,	// (0x00051cd9) mup_volume_pane_cp

0x3f0b,	// (0x0004e79e) mup2_visualizer_pane_g1_ParamLimits

0x3f0b,	// (0x0004e79e) mup2_visualizer_pane_g1

0x3f19,	// (0x0004e7ac) mup2_visualizer_pane_g2_ParamLimits

0x3f19,	// (0x0004e7ac) mup2_visualizer_pane_g2

0x3f19,	// (0x0004e7ac) mup2_visualizer_pane_g3_ParamLimits

0x3f19,	// (0x0004e7ac) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0005995d) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0005995d) mup2_visualizer_pane_g

0xcdbd,	// (0x00057650) aid_size_cell_fmradio

0x6fde,	// (0x00051871) aid_height_parent_landcape

0x5192,	// (0x0004fa25) wml_content_pane_cp

0x519a,	// (0x0004fa2d) wml_tabs_pane

0x51a3,	// (0x0004fa36) popup_wml_miniature_window

0x51ab,	// (0x0004fa3e) scroll_pane_cp021

0x51bf,	// (0x0004fa52) wml_content_pane_comp8

0x3c27,	// (0x0004e4ba) bg_popup_sub_pane_cp05

0xdf2c,	// (0x000587bf) popup_wml_miniature_window_g1

0xdf34,	// (0x000587c7) wml_miniature_view_pane

0x7393,	// (0x00051c26) aid_size_wml_view

0x739b,	// (0x00051c2e) wml_miniature_view_pane_g1

0x73a4,	// (0x00051c37) wml_miniature_view_pane_g2

0x73ad,	// (0x00051c40) wml_miniature_view_pane_g3

0x73b5,	// (0x00051c48) wml_miniature_view_pane_g4

0x73bd,	// (0x00051c50) wml_miniature_view_pane_g5

0x73c5,	// (0x00051c58) wml_miniature_view_pane_g6

0x73cd,	// (0x00051c60) wml_miniature_view_pane_g7

0x73d5,	// (0x00051c68) wml_miniature_view_pane_g8

0x0007,

0xf601,	// (0x00059e94) wml_miniature_view_pane_g

0xdf3c,	// (0x000587cf) background_graphic_ParamLimits

0xdf3c,	// (0x000587cf) background_graphic

0xdf48,	// (0x000587db) wml_tabs_2_pane

0xdf51,	// (0x000587e4) wml_tabs_3_pane_ParamLimits

0xdf51,	// (0x000587e4) wml_tabs_3_pane

0xdf63,	// (0x000587f6) wml_tabs_4_pane_ParamLimits

0xdf63,	// (0x000587f6) wml_tabs_4_pane

0xdf79,	// (0x0005880c) wml_tabs_5_pane_ParamLimits

0xdf79,	// (0x0005880c) wml_tabs_5_pane

0xdf93,	// (0x00058826) wml_tabs_pane_g2_ParamLimits

0xdf93,	// (0x00058826) wml_tabs_pane_g2

0xdfa8,	// (0x0005883b) wml_tabs_pane_g3_ParamLimits

0xdfa8,	// (0x0005883b) wml_tabs_pane_g3

0xdfbd,	// (0x00058850) wml_tabs_2_active_pane_ParamLimits

0xdfbd,	// (0x00058850) wml_tabs_2_active_pane

0xdfbd,	// (0x00058850) wml_tabs_2_passive_pane_ParamLimits

0xdfbd,	// (0x00058850) wml_tabs_2_passive_pane

0x73dd,	// (0x00051c70) wml_tabs_3_active_pane_cp_ParamLimits

0x73dd,	// (0x00051c70) wml_tabs_3_active_pane_cp

0x73ee,	// (0x00051c81) wml_tabs_3_passive_pane_ParamLimits

0x73ee,	// (0x00051c81) wml_tabs_3_passive_pane

0x73ff,	// (0x00051c92) wml_tabs_3_passive_pane_cp_ParamLimits

0x73ff,	// (0x00051c92) wml_tabs_3_passive_pane_cp

0x7410,	// (0x00051ca3) tabs_4_active_pane

0x7418,	// (0x00051cab) tabs_4_passive_pane

0x7420,	// (0x00051cb3) tabs_4_passive_pane_cp

0x7428,	// (0x00051cbb) tabs_4_passive_pane_cp2

0x6dc4,	// (0x00051657) aid_height_text

0xcb9d,	// (0x00057430) mup_volume_cont_pane_ParamLimits

0xcb9d,	// (0x00057430) mup_volume_cont_pane

0x347f,	// (0x0004dd12) aid_size_cell_pinb

0x347f,	// (0x0004dd12) aid_size_list_pinb

0xcb9d,	// (0x00057430) mup2_volume_cont_pane_ParamLimits

0xcb9d,	// (0x00057430) mup2_volume_cont_pane

0x7430,	// (0x00051cc3) mup2_volume_cont_pane_g1_ParamLimits

0x7430,	// (0x00051cc3) mup2_volume_cont_pane_g1

0x349d,	// (0x0004dd30) aid_size_cell_touch_ParamLimits

0x349d,	// (0x0004dd30) aid_size_cell_touch

0x375d,	// (0x0004dff0) touch_pane_ParamLimits

0x375d,	// (0x0004dff0) touch_pane

0x3753,	// (0x0004dfe6) main_rss2_pane

0xdfd4,	// (0x00058867) listscroll_rss2_pane

0xdfdd,	// (0x00058870) rss2_navigation_pane

0xdfe5,	// (0x00058878) list_rss2_pane

0xc8b2,	// (0x00057145) scroll_pane_cp22

0xdfed,	// (0x00058880) rss2_navigation_pane_g1

0xdff6,	// (0x00058889) rss2_navigation_pane_g2

0xdffe,	// (0x00058891) rss2_navigation_pane_g3

0x0002,

0xf612,	// (0x00059ea5) rss2_navigation_pane_g

0xe006,	// (0x00058899) rss2_navigation_pane_t1

0x745c,	// (0x00051cef) rss2_list_single_pane_ParamLimits

0x745c,	// (0x00051cef) rss2_list_single_pane

0xe014,	// (0x000588a7) rss2_list_single_pane_t2

0xe022,	// (0x000588b5) rss2_list_single_pane_t3_ParamLimits

0xe022,	// (0x000588b5) rss2_list_single_pane_t3

0xe03f,	// (0x000588d2) rss2_list_single_pane_t4

0x5fcd,	// (0x00050860) smil_status_pane_g1

0x6ff5,	// (0x00051888) main_image2_pane_ParamLimits

0x6ff5,	// (0x00051888) main_image2_pane

0xc7cd,	// (0x00057060) main_camera2_pane_g9_ParamLimits

0xc7cd,	// (0x00057060) main_camera2_pane_g9

0x733b,	// (0x00051bce) main_camera2_pane_t5_ParamLimits

0x733b,	// (0x00051bce) main_camera2_pane_t5

0x734f,	// (0x00051be2) main_camera2_pane_t6_ParamLimits

0x734f,	// (0x00051be2) main_camera2_pane_t6

0x7490,	// (0x00051d23) main_image2_pane_g1_ParamLimits

0x7490,	// (0x00051d23) main_image2_pane_g1

0x6af6,	// (0x00051389) smil2_video_pane_ParamLimits

0x6af6,	// (0x00051389) smil2_video_pane

0x3397,	// (0x0004dc2a) aid_zoom_text_primary_cp

0x36ee,	// (0x0004df81) popup_preview_fixed_window

0x505b,	// (0x0004f8ee) im_reading_pane_g1

0x732d,	// (0x00051bc0) cams2_bc_adjust_pane_cp_ParamLimits

0x732d,	// (0x00051bc0) cams2_bc_adjust_pane_cp

0x3739,	// (0x0004dfcc) cams2_bc_adjust_pane_ParamLimits

0x3739,	// (0x0004dfcc) cams2_bc_adjust_pane

0xedf2,	// (0x00059685) cams2_bc_adjust_pane_g1

0x3753,	// (0x0004dfe6) cams2_slider_pane

0xedf2,	// (0x00059685) cams2_slider_pane_g1

0xedf2,	// (0x00059685) cams2_slider_pane_g2

0x0006,

0xf619,	// (0x00059eac) cams2_slider_pane_g

0x3f63,	// (0x0004e7f6) calc_display_pane_ParamLimits

0x3f81,	// (0x0004e814) calc_paper_pane_ParamLimits

0x3f9d,	// (0x0004e830) grid_calc_pane_ParamLimits

0x6289,	// (0x00050b1c) popup_clock_digital_window_t1_ParamLimits

0xcd5a,	// (0x000575ed) main_image_pane_t1

0x3f49,	// (0x0004e7dc) aid_size_cell_calc_ParamLimits

0x3f49,	// (0x0004e7dc) aid_size_cell_calc

0x7026,	// (0x000518b9) popup_blid_sat_info2_window_ParamLimits

0x7026,	// (0x000518b9) popup_blid_sat_info2_window

0xe04d,	// (0x000588e0) aid_size_cell_blid

0xcb9d,	// (0x00057430) bg_popup_window_pane_cp07

0xe06a,	// (0x000588fd) grid_popup_blid_pane

0xe074,	// (0x00058907) heading_pane_cp05_ParamLimits

0xe074,	// (0x00058907) heading_pane_cp05

0xe13e,	// (0x000589d1) cell_popup_blid_pane_ParamLimits

0xe13e,	// (0x000589d1) cell_popup_blid_pane

0xe162,	// (0x000589f5) cell_popup_blid_pane_g1

0xe16a,	// (0x000589fd) cell_popup_blid_pane_t1

0xcb9d,	// (0x00057430) mup2_indicator_pane_ParamLimits

0xcb9d,	// (0x00057430) mup2_indicator_pane

0x347f,	// (0x0004dd12) mup2_visualizer_osc_pane

0xdf16,	// (0x000587a9) mup2_visualizer_spec_pane_ParamLimits

0xdf16,	// (0x000587a9) mup2_visualizer_spec_pane

0x347f,	// (0x0004dd12) mup2_spec_half_pane

0x347f,	// (0x0004dd12) mup2_spec_half_pane_cp

0xe178,	// (0x00058a0b) mup2_spec_bar_pane_ParamLimits

0xe178,	// (0x00058a0b) mup2_spec_bar_pane

0x4b67,	// (0x0004f3fa) mup2_spec_bar_pane_g1

0xe197,	// (0x00058a2a) mup2_spec_bar_pane_g2

0x0001,

0xf63f,	// (0x00059ed2) mup2_spec_bar_pane_g

0x347f,	// (0x0004dd12) mup2_osc_middle_pane

0x4b67,	// (0x0004f3fa) mup2_visualizer_osc_pane_g1

0x37d4,	// (0x0004e067) popup_number_entry_window_t1_ParamLimits

0x37e7,	// (0x0004e07a) popup_number_entry_window_t2_ParamLimits

0x37f9,	// (0x0004e08c) popup_number_entry_window_t3_ParamLimits

0x380b,	// (0x0004e09e) popup_number_entry_window_t5_ParamLimits

0x380b,	// (0x0004e09e) popup_number_entry_window_t5

0xf06b,	// (0x000598fe) popup_number_entry_window_t_ParamLimits

0x3847,	// (0x0004e0da) text_title_cp2_ParamLimits

0x67f7,	// (0x0005108a) aid_hotspot_pointer_text2_pane

0x6885,	// (0x00051118) main_viewer_pane_g9_ParamLimits

0x6885,	// (0x00051118) main_viewer_pane_g9

0x59ab,	// (0x0005023e) cale_month_pane_t1_ParamLimits

0x60b0,	// (0x00050943) bg_cale_pane_ParamLimits

0x60c8,	// (0x0005095b) list_cale_pane_ParamLimits

0x60d9,	// (0x0005096c) listscroll_cale_day_pane_t1

0x60eb,	// (0x0005097e) scroll_pane_cp09_ParamLimits

0x653a,	// (0x00050dcd) main_mup_eq_pane_t1_ParamLimits

0x653a,	// (0x00050dcd) main_mup_eq_pane_t1

0x6554,	// (0x00050de7) main_mup_eq_pane_t2_ParamLimits

0x6554,	// (0x00050de7) main_mup_eq_pane_t2

0x656c,	// (0x00050dff) main_mup_eq_pane_t3_ParamLimits

0x656c,	// (0x00050dff) main_mup_eq_pane_t3

0x6584,	// (0x00050e17) main_mup_eq_pane_t4_ParamLimits

0x6584,	// (0x00050e17) main_mup_eq_pane_t4

0x659c,	// (0x00050e2f) main_mup_eq_pane_t5_ParamLimits

0x659c,	// (0x00050e2f) main_mup_eq_pane_t5

0x65b4,	// (0x00050e47) main_mup_eq_pane_t6_ParamLimits

0x65b4,	// (0x00050e47) main_mup_eq_pane_t6

0x65c8,	// (0x00050e5b) main_mup_eq_pane_t7_ParamLimits

0x65c8,	// (0x00050e5b) main_mup_eq_pane_t7

0x65dc,	// (0x00050e6f) main_mup_eq_pane_t8_ParamLimits

0x65dc,	// (0x00050e6f) main_mup_eq_pane_t8

0x65f2,	// (0x00050e85) main_mup_eq_pane_t9_ParamLimits

0x65f2,	// (0x00050e85) main_mup_eq_pane_t9

0x660a,	// (0x00050e9d) main_mup_eq_pane_t10_ParamLimits

0x660a,	// (0x00050e9d) main_mup_eq_pane_t10

0x0009,

0xf3cf,	// (0x00059c62) main_mup_eq_pane_t_ParamLimits

0xf3cf,	// (0x00059c62) main_mup_eq_pane_t

0x66c7,	// (0x00050f5a) mup_equalizer_pane_cp5_ParamLimits

0x66dd,	// (0x00050f70) mup_equalizer_pane_cp6_ParamLimits

0x66f5,	// (0x00050f88) mup_equalizer_pane_cp7_ParamLimits

0x3753,	// (0x0004dfe6) main_gallery_pane

0xdeb4,	// (0x00058747) smil2_volume_pane

0xdebc,	// (0x0005874f) smil_status_volume_pane_g1_ParamLimits

0xdecf,	// (0x00058762) smil_status_volume_pane_g2_ParamLimits

0x71e0,	// (0x00051a73) smil_status_volume_pane_g3_ParamLimits

0xf598,	// (0x00059e2b) smil_status_volume_pane_g_ParamLimits

0xcb9d,	// (0x00057430) bg_popup_window_pane_cp07_ParamLimits

0xe055,	// (0x000588e8) blid_firmament_pane

0x3efd,	// (0x0004e790) aid_size_cell_gallery_ParamLimits

0x3efd,	// (0x0004e790) aid_size_cell_gallery

0x3efd,	// (0x0004e790) grid_gallery_pane_ParamLimits

0x3efd,	// (0x0004e790) grid_gallery_pane

0xde39,	// (0x000586cc) cell_gallery_pane_ParamLimits

0xde39,	// (0x000586cc) cell_gallery_pane

0x3ea4,	// (0x0004e737) bg_cell_gallery_focus_pane_ParamLimits

0x3ea4,	// (0x0004e737) bg_cell_gallery_focus_pane

0x3f0b,	// (0x0004e79e) cell_gallery_pane_g1_ParamLimits

0x3f0b,	// (0x0004e79e) cell_gallery_pane_g1

0x3f0b,	// (0x0004e79e) cell_gallery_pane_g2_ParamLimits

0x3f0b,	// (0x0004e79e) cell_gallery_pane_g2

0x3f0b,	// (0x0004e79e) cell_gallery_pane_g3_ParamLimits

0x3f0b,	// (0x0004e79e) cell_gallery_pane_g3

0x3f19,	// (0x0004e7ac) cell_gallery_pane_g4_ParamLimits

0x3f19,	// (0x0004e7ac) cell_gallery_pane_g4

0x0003,

0xf644,	// (0x00059ed7) cell_gallery_pane_g_ParamLimits

0xf644,	// (0x00059ed7) cell_gallery_pane_g

0xe1a1,	// (0x00058a34) bg_cell_gallery_focus_pane_g1

0xe1a9,	// (0x00058a3c) bg_cell_gallery_focus_pane_g2

0xe1b1,	// (0x00058a44) bg_cell_gallery_focus_pane_g3

0xe1b9,	// (0x00058a4c) bg_cell_gallery_focus_pane_g4

0xe1c1,	// (0x00058a54) bg_cell_gallery_focus_pane_g5

0xe1c9,	// (0x00058a5c) bg_cell_gallery_focus_pane_g6

0xe1d1,	// (0x00058a64) bg_cell_gallery_focus_pane_g7

0xe1d9,	// (0x00058a6c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64d,	// (0x00059ee0) bg_cell_gallery_focus_pane_g

0xe1e1,	// (0x00058a74) aid_firma_cardinal

0xe1f5,	// (0x00058a88) blid_firmament_pane_t1

0xe20c,	// (0x00058a9f) blid_firmament_pane_t2

0xe223,	// (0x00058ab6) blid_firmament_pane_t3

0xe23a,	// (0x00058acd) blid_firmament_pane_t4

0x0003,

0xf65e,	// (0x00059ef1) blid_firmament_pane_t

0xe251,	// (0x00058ae4) blid_sat_info_pane

0x4b67,	// (0x0004f3fa) blid_sat_info_pane_g1

0x4b67,	// (0x0004f3fa) blid_sat_info_pane_g2

0x0001,

0xf3c3,	// (0x00059c56) blid_sat_info_pane_g

0xe261,	// (0x00058af4) blid_sat_info_pane_t1

0xe26f,	// (0x00058b02) smil2_volume_content_pane

0xe278,	// (0x00058b0b) smil2_volume_pane_g1

0xe280,	// (0x00058b13) smil2_volume_content_pane_g1

0xe289,	// (0x00058b1c) smil2_volume_content_pane_g2

0xe292,	// (0x00058b25) smil2_volume_content_pane_g3

0xe29b,	// (0x00058b2e) smil2_volume_content_pane_g4

0xe2a4,	// (0x00058b37) smil2_volume_content_pane_g5

0xe2ad,	// (0x00058b40) smil2_volume_content_pane_g6

0xe2b6,	// (0x00058b49) smil2_volume_content_pane_g7

0xe2bf,	// (0x00058b52) smil2_volume_content_pane_g8

0xe2c8,	// (0x00058b5b) smil2_volume_content_pane_g9

0xe2d1,	// (0x00058b64) smil2_volume_content_pane_g10

0x0009,

0xf667,	// (0x00059efa) smil2_volume_content_pane_g

0x474b,	// (0x0004efde) cale_week_day_heading_pane_t1_ParamLimits

0x4766,	// (0x0004eff9) cale_week_day_heading_pane_t2_ParamLimits

0x4781,	// (0x0004f014) cale_week_day_heading_pane_t3_ParamLimits

0x479c,	// (0x0004f02f) cale_week_day_heading_pane_t4_ParamLimits

0x47b7,	// (0x0004f04a) cale_week_day_heading_pane_t5_ParamLimits

0x47d2,	// (0x0004f065) cale_week_day_heading_pane_t6_ParamLimits

0x47ed,	// (0x0004f080) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x00059a05) cale_week_day_heading_pane_t_ParamLimits

0x4808,	// (0x0004f09b) bg_cale_side_pane_ParamLimits

0x4816,	// (0x0004f0a9) cale_week_time_pane_t1_ParamLimits

0x4830,	// (0x0004f0c3) cale_week_time_pane_t2_ParamLimits

0x484a,	// (0x0004f0dd) cale_week_time_pane_t3_ParamLimits

0x4864,	// (0x0004f0f7) cale_week_time_pane_t4_ParamLimits

0x487e,	// (0x0004f111) cale_week_time_pane_t5_ParamLimits

0x4898,	// (0x0004f12b) cale_week_time_pane_t6_ParamLimits

0x48b8,	// (0x0004f14b) cale_week_time_pane_t7_ParamLimits

0x48da,	// (0x0004f16d) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x00059a14) cale_week_time_pane_t_ParamLimits

0x48fe,	// (0x0004f191) cell_cale_week_pane_g2_ParamLimits

0x4808,	// (0x0004f09b) bg_cale_side_pane_cp01_ParamLimits

0x5db2,	// (0x00050645) cale_month_week_pane_t1_ParamLimits

0x5dcb,	// (0x0005065e) cale_month_week_pane_t2_ParamLimits

0x5de4,	// (0x00050677) cale_month_week_pane_t3_ParamLimits

0x5dfd,	// (0x00050690) cale_month_week_pane_t4_ParamLimits

0x5e18,	// (0x000506ab) cale_month_week_pane_t5_ParamLimits

0x5e39,	// (0x000506cc) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00059ae2) cale_month_week_pane_t_ParamLimits

0x5f80,	// (0x00050813) cell_cale_month_pane_g1_ParamLimits

0x3753,	// (0x0004dfe6) main_cale_event_viewer_pane

0x347f,	// (0x0004dd12) listscroll_cale_event_viewer_pane

0xe2da,	// (0x00058b6d) list_cale_ev_pane

0xe2e2,	// (0x00058b75) scroll_pane_cp023

0xe2ee,	// (0x00058b81) field_cale_ev_pane_ParamLimits

0xe2ee,	// (0x00058b81) field_cale_ev_pane

0xe30c,	// (0x00058b9f) field_cale_ev_content_pane_ParamLimits

0xe30c,	// (0x00058b9f) field_cale_ev_content_pane

0xe318,	// (0x00058bab) field_cale_ev_pane_g1_ParamLimits

0xe318,	// (0x00058bab) field_cale_ev_pane_g1

0xe324,	// (0x00058bb7) field_cale_ev_pane_g2_ParamLimits

0xe324,	// (0x00058bb7) field_cale_ev_pane_g2

0xe33c,	// (0x00058bcf) field_cale_ev_pane_g3_ParamLimits

0xe33c,	// (0x00058bcf) field_cale_ev_pane_g3

0x0002,

0xf67c,	// (0x00059f0f) field_cale_ev_pane_g_ParamLimits

0xf67c,	// (0x00059f0f) field_cale_ev_pane_g

0xe354,	// (0x00058be7) field_cale_ev_pane_t1_ParamLimits

0xe354,	// (0x00058be7) field_cale_ev_pane_t1

0xe36b,	// (0x00058bfe) field_cale_ev_content_pane_t1_ParamLimits

0xe36b,	// (0x00058bfe) field_cale_ev_content_pane_t1

0xcc40,	// (0x000574d3) bg_button_pane_cp01

0x4481,	// (0x0004ed14) listscroll_cale_week_pane_ParamLimits

0x4491,	// (0x0004ed24) popup_toolbar_window_cp01

0x46ba,	// (0x0004ef4d) listscroll_cale_week_pane_t1_ParamLimits

0x4481,	// (0x0004ed14) listscroll_cale_day_pane_ParamLimits

0x4491,	// (0x0004ed24) popup_toolbar_window_cp02

0x60d9,	// (0x0005096c) listscroll_cale_day_pane_t1_ParamLimits

0x4481,	// (0x0004ed14) main_cale_month_pane_ParamLimits

0x7129,	// (0x000519bc) popup_toolbar_window_cp03_ParamLimits

0x7129,	// (0x000519bc) popup_toolbar_window_cp03

0x6a0c,	// (0x0005129f) main_image_pane_g2_ParamLimits

0x6a0c,	// (0x0005129f) main_image_pane_g2

0x6a18,	// (0x000512ab) main_image_pane_g3_ParamLimits

0x6a18,	// (0x000512ab) main_image_pane_g3

0x0002,

0xf461,	// (0x00059cf4) main_image_pane_g_ParamLimits

0xf461,	// (0x00059cf4) main_image_pane_g

0xcd5a,	// (0x000575ed) main_image_pane_t1_ParamLimits

0x6a24,	// (0x000512b7) main_image_pane_t2_ParamLimits

0x6a24,	// (0x000512b7) main_image_pane_t2

0x6a36,	// (0x000512c9) main_image_pane_t3_ParamLimits

0x6a36,	// (0x000512c9) main_image_pane_t3

0x6a48,	// (0x000512db) main_image_pane_t4_ParamLimits

0x6a48,	// (0x000512db) main_image_pane_t4

0x0003,

0xf468,	// (0x00059cfb) main_image_pane_t_ParamLimits

0xf468,	// (0x00059cfb) main_image_pane_t

0x6a5a,	// (0x000512ed) popup_image_details_window_cp01

0x6a64,	// (0x000512f7) popup_toobar_trans_pane_cp01_ParamLimits

0x6a64,	// (0x000512f7) popup_toobar_trans_pane_cp01

0x7079,	// (0x0005190c) popup_image_details_window_ParamLimits

0x7079,	// (0x0005190c) popup_image_details_window

0x7087,	// (0x0005191a) popup_image_focus_window

0x3739,	// (0x0004dfcc) camera2_autofocus_pane_ParamLimits

0x3739,	// (0x0004dfcc) camera2_autofocus_pane

0x347f,	// (0x0004dd12) bg_popup_sub_pane_cp06

0xe389,	// (0x00058c1c) popup_image_focus_window_g1

0xe391,	// (0x00058c24) popup_image_focus_window_g2

0xe399,	// (0x00058c2c) popup_image_focus_window_g3

0xe3a1,	// (0x00058c34) popup_image_focus_window_g4

0x0003,

0xf683,	// (0x00059f16) popup_image_focus_window_g

0xe3a9,	// (0x00058c3c) popup_image_focus_window_t1

0xe3b7,	// (0x00058c4a) popup_image_focus_window_t2

0xe3c7,	// (0x00058c5a) popup_image_focus_window_t3

0x0002,

0xf68c,	// (0x00059f1f) popup_image_focus_window_t

0x3f0b,	// (0x0004e79e) camera2_autofocus_pane_g1

0x3ea4,	// (0x0004e737) bg_tb_trans_pane_cp01

0xe3d5,	// (0x00058c68) popup_image_details_window_g1

0xe3e8,	// (0x00058c7b) popup_image_details_window_g2

0x0002,

0xf69e,	// (0x00059f31) popup_image_details_window_g

0xe411,	// (0x00058ca4) popup_image_details_window_t1

0xe423,	// (0x00058cb6) popup_image_details_window_t2

0xe43c,	// (0x00058ccf) popup_image_details_window_t3

0xe450,	// (0x00058ce3) popup_image_details_window_t4

0xe46b,	// (0x00058cfe) popup_image_details_window_t5

0x0004,

0xf6a5,	// (0x00059f38) popup_image_details_window_t

0x40d8,	// (0x0004e96b) bg_calc_paper_pane_ParamLimits

0x3753,	// (0x0004dfe6) grid_highlight_pane_cp013

0x40ec,	// (0x0004e97f) list_calc_pane_ParamLimits

0x40fe,	// (0x0004e991) scroll_pane_cp024

0x4106,	// (0x0004e999) bg_calc_display_pane_ParamLimits

0x4112,	// (0x0004e9a5) calc_display_pane_t1_ParamLimits

0x4127,	// (0x0004e9ba) calc_display_pane_t2_ParamLimits

0x413c,	// (0x0004e9cf) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x00059985) calc_display_pane_t_ParamLimits

0x425f,	// (0x0004eaf2) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x000599a2) cell_calc_pane_g

0x4268,	// (0x0004eafb) cell_calc_pane_t1

0x4277,	// (0x0004eb0a) grid_highlight_pane_cp02_ParamLimits

0x428d,	// (0x0004eb20) toolbar_button_pane_cp01_ParamLimits

0x428d,	// (0x0004eb20) toolbar_button_pane_cp01

0xcd9f,	// (0x00057632) temp_image_control_pane_ParamLimits

0xcd9f,	// (0x00057632) temp_image_control_pane

0x6ff5,	// (0x00051888) main_mp3_pane

0xe485,	// (0x00058d18) temp_image_control_pane_g1_ParamLimits

0xe485,	// (0x00058d18) temp_image_control_pane_g1

0xe493,	// (0x00058d26) temp_image_control_pane_g2_ParamLimits

0xe493,	// (0x00058d26) temp_image_control_pane_g2

0xe4a5,	// (0x00058d38) temp_image_control_pane_g3_ParamLimits

0xe4a5,	// (0x00058d38) temp_image_control_pane_g3

0x749c,	// (0x00051d2f) temp_image_control_pane_g4_ParamLimits

0x749c,	// (0x00051d2f) temp_image_control_pane_g4

0x0003,

0xf6b0,	// (0x00059f43) temp_image_control_pane_g_ParamLimits

0xf6b0,	// (0x00059f43) temp_image_control_pane_g

0xe485,	// (0x00058d18) main_mp3_pane_g1

0x74ad,	// (0x00051d40) main_mp3_pane_g2

0x0007,

0xf6b9,	// (0x00059f4c) main_mp3_pane_g

0xe4da,	// (0x00058d6d) main_mp3_pane_t1

0x3f19,	// (0x0004e7ac) main_camera_pane_g8_ParamLimits

0x3f19,	// (0x0004e7ac) main_camera_pane_g8

0x4b1f,	// (0x0004f3b2) main_video_pane_g7_ParamLimits

0x4b1f,	// (0x0004f3b2) main_video_pane_g7

0x733b,	// (0x00051bce) main_camera2_pane_t7_ParamLimits

0x733b,	// (0x00051bce) main_camera2_pane_t7

0x5152,	// (0x0004f9e5) scroll_pane_cp025_ParamLimits

0x5152,	// (0x0004f9e5) scroll_pane_cp025

0x5166,	// (0x0004f9f9) scroll_pane_cp026_ParamLimits

0x5166,	// (0x0004f9f9) scroll_pane_cp026

0x5175,	// (0x0004fa08) wml_content_pane_ParamLimits

0x3753,	// (0x0004dfe6) main_touch_calib_pane

0x7551,	// (0x00051de4) main_touch_calib_pane_g1

0x755d,	// (0x00051df0) main_touch_calib_pane_g2

0x7569,	// (0x00051dfc) main_touch_calib_pane_g3

0x7575,	// (0x00051e08) main_touch_calib_pane_g4

0x0003,

0xf6d7,	// (0x00059f6a) main_touch_calib_pane_g

0x7581,	// (0x00051e14) main_touch_calib_pane_t1

0x759a,	// (0x00051e2d) main_touch_calib_pane_t2

0x0004,

0xf6e0,	// (0x00059f73) main_touch_calib_pane_t

0xc981,	// (0x00057214) mup_progress_pane_cp02

0xc9b6,	// (0x00057249) navi_pane_g1

0xca71,	// (0x00057304) navi_pane_mp_t3

0x6ff5,	// (0x00051888) main_mp3_pane_ParamLimits

0x7166,	// (0x000519f9) navi_pane_ParamLimits

0xe485,	// (0x00058d18) main_mp3_pane_g1_ParamLimits

0x74ad,	// (0x00051d40) main_mp3_pane_g2_ParamLimits

0x74b9,	// (0x00051d4c) main_mp3_pane_g3_ParamLimits

0x74b9,	// (0x00051d4c) main_mp3_pane_g3

0x74c5,	// (0x00051d58) main_mp3_pane_g4_ParamLimits

0x74c5,	// (0x00051d58) main_mp3_pane_g4

0x3f0b,	// (0x0004e79e) main_mp3_pane_g5_ParamLimits

0x3f0b,	// (0x0004e79e) main_mp3_pane_g5

0xe4b5,	// (0x00058d48) main_mp3_pane_g6_ParamLimits

0xe4b5,	// (0x00058d48) main_mp3_pane_g6

0xe4c2,	// (0x00058d55) main_mp3_pane_g7_ParamLimits

0xe4c2,	// (0x00058d55) main_mp3_pane_g7

0xe4ce,	// (0x00058d61) main_mp3_pane_g8_ParamLimits

0xe4ce,	// (0x00058d61) main_mp3_pane_g8

0xf6b9,	// (0x00059f4c) main_mp3_pane_g_ParamLimits

0x74d1,	// (0x00051d64) main_mp3_pane_t2

0x74e1,	// (0x00051d74) main_mp3_pane_t3

0xe4e8,	// (0x00058d7b) main_mp3_pane_t4

0xe4f6,	// (0x00058d89) main_mp3_pane_t5

0x0005,

0xf6ca,	// (0x00059f5d) main_mp3_pane_t

0xe504,	// (0x00058d97) mup_progress_pane_cp01

0x3397,	// (0x0004dc2a) aid_zoom_text_secondary2

0xe2da,	// (0x00058b6d) list_cale_ev2_pane

0xe2e2,	// (0x00058b75) scroll_pane_cp023_ParamLimits

0x75f5,	// (0x00051e88) field_cale_ev2_pane_ParamLimits

0x75f5,	// (0x00051e88) field_cale_ev2_pane

0x04b5,	// (0x0004ad48) field_cale_ev2_pane_g1_ParamLimits

0x04b5,	// (0x0004ad48) field_cale_ev2_pane_g1

0x04c1,	// (0x0004ad54) field_cale_ev2_pane_g2_ParamLimits

0x04c1,	// (0x0004ad54) field_cale_ev2_pane_g2

0x04d9,	// (0x0004ad6c) field_cale_ev2_pane_g3_ParamLimits

0x04d9,	// (0x0004ad6c) field_cale_ev2_pane_g3

0x0003,

0xf6eb,	// (0x00059f7e) field_cale_ev2_pane_g_ParamLimits

0xf6eb,	// (0x00059f7e) field_cale_ev2_pane_g

0x04fd,	// (0x0004ad90) field_cale_ev2_pane_t1_ParamLimits

0x04fd,	// (0x0004ad90) field_cale_ev2_pane_t1

0x0514,	// (0x0004ada7) field_cale_ev2_pane_t2_ParamLimits

0x0514,	// (0x0004ada7) field_cale_ev2_pane_t2

0x0001,

0xf6f4,	// (0x00059f87) field_cale_ev2_pane_t_ParamLimits

0xf6f4,	// (0x00059f87) field_cale_ev2_pane_t

0x68ed,	// (0x00051180) main_postcard_pane_g5_ParamLimits

0x68ed,	// (0x00051180) main_postcard_pane_g5

0x68fb,	// (0x0005118e) main_postcard_pane_g6_ParamLimits

0x68fb,	// (0x0005118e) main_postcard_pane_g6

0x3efd,	// (0x0004e790) camera2_autofocus_pane_cp_ParamLimits

0x3efd,	// (0x0004e790) camera2_autofocus_pane_cp

0x6ff5,	// (0x00051888) main_mup3_pane

0x765e,	// (0x00051ef1) main_mup3_pane_g1_ParamLimits

0x765e,	// (0x00051ef1) main_mup3_pane_g1

0x767f,	// (0x00051f12) main_mup3_pane_g2_ParamLimits

0x767f,	// (0x00051f12) main_mup3_pane_g2

0x76f9,	// (0x00051f8c) main_mup3_pane_g3_ParamLimits

0x76f9,	// (0x00051f8c) main_mup3_pane_g3

0x773c,	// (0x00051fcf) main_mup3_pane_g4_ParamLimits

0x773c,	// (0x00051fcf) main_mup3_pane_g4

0x777f,	// (0x00052012) main_mup3_pane_g5_ParamLimits

0x777f,	// (0x00052012) main_mup3_pane_g5

0x77c2,	// (0x00052055) main_mup3_pane_g6_ParamLimits

0x77c2,	// (0x00052055) main_mup3_pane_g6

0x3f19,	// (0x0004e7ac) main_mup3_pane_g7_ParamLimits

0x3f19,	// (0x0004e7ac) main_mup3_pane_g7

0x0007,

0xf704,	// (0x00059f97) main_mup3_pane_g_ParamLimits

0xf704,	// (0x00059f97) main_mup3_pane_g

0x7838,	// (0x000520cb) main_mup3_pane_t1_ParamLimits

0x7838,	// (0x000520cb) main_mup3_pane_t1

0x78a7,	// (0x0005213a) main_mup3_pane_t2_ParamLimits

0x78a7,	// (0x0005213a) main_mup3_pane_t2

0x7970,	// (0x00052203) main_mup3_pane_t4_ParamLimits

0x7970,	// (0x00052203) main_mup3_pane_t4

0x79be,	// (0x00052251) main_mup3_pane_t5_ParamLimits

0x79be,	// (0x00052251) main_mup3_pane_t5

0x7a6e,	// (0x00052301) main_mup3_pane_t6_ParamLimits

0x7a6e,	// (0x00052301) main_mup3_pane_t6

0x0005,

0xf715,	// (0x00059fa8) main_mup3_pane_t_ParamLimits

0xf715,	// (0x00059fa8) main_mup3_pane_t

0x7b1a,	// (0x000523ad) mup3_progress_pane_ParamLimits

0x7b1a,	// (0x000523ad) mup3_progress_pane

0x7b8e,	// (0x00052421) popup_mup3_control_window_ParamLimits

0x7b8e,	// (0x00052421) popup_mup3_control_window

0xe50c,	// (0x00058d9f) popup_mup3_text_window

0x7ba7,	// (0x0005243a) mup3_progress_pane_t1

0x7bc6,	// (0x00052459) mup3_progress_pane_t2

0xe514,	// (0x00058da7) mup3_progress_pane_t3

0x0002,

0xf722,	// (0x00059fb5) mup3_progress_pane_t

0xe531,	// (0x00058dc4) mup_progress_pane_cp03

0x347f,	// (0x0004dd12) bg_tb_trans_pane_cp04

0x7be5,	// (0x00052478) mup3_volume_pane

0x7bed,	// (0x00052480) popup_mup3_control_window_g1

0x7bf6,	// (0x00052489) mup3_volume_pane_g1

0x7bff,	// (0x00052492) mup3_volume_pane_g2

0x7c08,	// (0x0005249b) mup3_volume_pane_g3

0x0002,

0xf729,	// (0x00059fbc) mup3_volume_pane_g

0x347f,	// (0x0004dd12) bg_tb_trans_pane_cp03

0xe541,	// (0x00058dd4) popup_mup3_text_window_g1

0xe549,	// (0x00058ddc) popup_mup3_text_window_t1

0x4228,	// (0x0004eabb) list_calc_item_pane_g1_ParamLimits

0xdfcb,	// (0x0005885e) mup_volume_pane_cp_g1

0x75b3,	// (0x00051e46) main_touch_calib_pane_t3

0x75c9,	// (0x00051e5c) main_touch_calib_pane_t4

0x75df,	// (0x00051e72) main_touch_calib_pane_t5

0x3489,	// (0x0004dd1c) aid_cell_size_toolbar2

0x3491,	// (0x0004dd24) aid_popup3_width_pane

0x338f,	// (0x0004dc22) aid_zoom_text_msg_primary

0x49f3,	// (0x0004f286) vorec_t7

0x417b,	// (0x0004ea0e) bg_calc_paper_pane_g1_ParamLimits

0x4187,	// (0x0004ea1a) bg_calc_paper_pane_g2_ParamLimits

0x4193,	// (0x0004ea26) bg_calc_paper_pane_g3_ParamLimits

0x419f,	// (0x0004ea32) bg_calc_paper_pane_g4_ParamLimits

0x41ab,	// (0x0004ea3e) bg_calc_paper_pane_g5_ParamLimits

0x41b7,	// (0x0004ea4a) bg_calc_paper_pane_g6_ParamLimits

0x41c8,	// (0x0004ea5b) bg_calc_paper_pane_g7_ParamLimits

0x41d9,	// (0x0004ea6c) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0005998c) bg_calc_paper_pane_g_ParamLimits

0x41ea,	// (0x0004ea7d) calc_bg_paper_pane_g9_ParamLimits

0x3efd,	// (0x0004e790) image_qvga_pane_ParamLimits

0x3efd,	// (0x0004e790) image_qvga_pane

0x3e82,	// (0x0004e715) bg_popup_sub_pane_cp04_ParamLimits

0xccd6,	// (0x00057569) popup_mup_playback_window_g1_ParamLimits

0xcce2,	// (0x00057575) popup_mup_playback_window_t1_ParamLimits

0xccf7,	// (0x0005758a) popup_mup_playback_window_t2_ParamLimits

0xf45c,	// (0x00059cef) popup_mup_playback_window_t_ParamLimits

0x3f0b,	// (0x0004e79e) main_mup2_pane_g3_ParamLimits

0x3f0b,	// (0x0004e79e) main_mup2_pane_g3

0x4d7b,	// (0x0004f60e) popup_toolbar_window_cp04

0xd0ec,	// (0x0005797f) popup_call2_audio_second_window_g3_ParamLimits

0xd0ec,	// (0x0005797f) popup_call2_audio_second_window_g3

0xd4f6,	// (0x00057d89) popup_call2_audio_first_window_g4_ParamLimits

0xd4f6,	// (0x00057d89) popup_call2_audio_first_window_g4

0xdb1d,	// (0x000583b0) popup_call2_audio_in_window_g4_ParamLimits

0xdb1d,	// (0x000583b0) popup_call2_audio_in_window_g4

0x69ff,	// (0x00051292) aid_area_sk_bg_cut_ParamLimits

0x69ff,	// (0x00051292) aid_area_sk_bg_cut

0xcd0c,	// (0x0005759f) aid_area_sk_bg_cut_2_ParamLimits

0xcd0c,	// (0x0005759f) aid_area_sk_bg_cut_2

0x347f,	// (0x0004dd12) aid_placing_details_win

0x347f,	// (0x0004dd12) aid_placing_details_win_2

0x3f0b,	// (0x0004e79e) camera2_autofocus_pane_g1_ParamLimits

0x36df,	// (0x0004df72) popup_fixed_preview_cale_window_ParamLimits

0x36df,	// (0x0004df72) popup_fixed_preview_cale_window

0xcaef,	// (0x00057382) navi_slider_pane_g3

0xcaf8,	// (0x0005738b) navi_slider_pane_g4

0xcb01,	// (0x00057394) navi_slider_pane_g5

0xcaef,	// (0x00057382) navi_slider_pane_g6

0x650e,	// (0x00050da1) navi_slider_pane_g7

0xcc0d,	// (0x000574a0) mup_scale_pane_g3

0xcc16,	// (0x000574a9) mup_scale_pane_g4

0xcc1f,	// (0x000574b2) mup_scale_pane_g5

0x670d,	// (0x00050fa0) mup_scale_pane_g6

0x6716,	// (0x00050fa9) mup_scale_pane_g7

0xedf2,	// (0x00059685) cams2_slider_pane_g3

0xedf2,	// (0x00059685) cams2_slider_pane_g4

0xedf2,	// (0x00059685) cams2_slider_pane_g5

0xedf2,	// (0x00059685) cams2_slider_pane_g6

0xedf2,	// (0x00059685) cams2_slider_pane_g7

0x4b67,	// (0x0004f3fa) camera2_autofocus_pane_cp_g1

0xde2d,	// (0x000586c0) bg_popup_preview_window_pane_cp02_ParamLimits

0xde2d,	// (0x000586c0) bg_popup_preview_window_pane_cp02

0xe557,	// (0x00058dea) list_fp_cale_pane_ParamLimits

0xe557,	// (0x00058dea) list_fp_cale_pane

0xe563,	// (0x00058df6) popup_fixed_preview_cale_window_t1_ParamLimits

0xe563,	// (0x00058df6) popup_fixed_preview_cale_window_t1

0x7c11,	// (0x000524a4) popup_fixed_preview_cale_window_t2_ParamLimits

0x7c11,	// (0x000524a4) popup_fixed_preview_cale_window_t2

0x7c26,	// (0x000524b9) popup_fixed_preview_cale_window_t3_ParamLimits

0x7c26,	// (0x000524b9) popup_fixed_preview_cale_window_t3

0x0002,

0xf730,	// (0x00059fc3) popup_fixed_preview_cale_window_t_ParamLimits

0xf730,	// (0x00059fc3) popup_fixed_preview_cale_window_t

0x7c3b,	// (0x000524ce) list_single_fp_cale_pane_ParamLimits

0x7c3b,	// (0x000524ce) list_single_fp_cale_pane

0xe581,	// (0x00058e14) list_single_fp_cale_pane_g1_ParamLimits

0xe581,	// (0x00058e14) list_single_fp_cale_pane_g1

0xe58d,	// (0x00058e20) list_single_fp_cale_pane_g2_ParamLimits

0xe58d,	// (0x00058e20) list_single_fp_cale_pane_g2

0x0002,

0xf737,	// (0x00059fca) list_single_fp_cale_pane_g_ParamLimits

0xf737,	// (0x00059fca) list_single_fp_cale_pane_g

0xe5a6,	// (0x00058e39) list_single_fp_cale_pane_t1_ParamLimits

0xe5a6,	// (0x00058e39) list_single_fp_cale_pane_t1

0xe5b8,	// (0x00058e4b) list_single_fp_cale_pane_t2_ParamLimits

0xe5b8,	// (0x00058e4b) list_single_fp_cale_pane_t2

0x0001,

0xf73e,	// (0x00059fd1) list_single_fp_cale_pane_t_ParamLimits

0xf73e,	// (0x00059fd1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3753,	// (0x0004dfe6) main_dialer_pane

0x347f,	// (0x0004dd12) aid_cell_size_keypad

0x347f,	// (0x0004dd12) dialer_ne_pane

0x347f,	// (0x0004dd12) grid_dialer_command_1_pane

0x347f,	// (0x0004dd12) grid_dialer_command_2_pane

0x347f,	// (0x0004dd12) grid_dialer_keypad_pane

0xcb9d,	// (0x00057430) bg_popup_call_pane_cp06_ParamLimits

0xcb9d,	// (0x00057430) bg_popup_call_pane_cp06

0xcb9d,	// (0x00057430) dialer_ne_clear_pane_ParamLimits

0xcb9d,	// (0x00057430) dialer_ne_clear_pane

0x4b67,	// (0x0004f3fa) dialer_ne_pane_g1

0x4a1e,	// (0x0004f2b1) dialer_ne_pane_t1_ParamLimits

0x4a1e,	// (0x0004f2b1) dialer_ne_pane_t1

0xe5eb,	// (0x00058e7e) dialer_ne_pane_t2_ParamLimits

0xe5eb,	// (0x00058e7e) dialer_ne_pane_t2

0x7c4e,	// (0x000524e1) dialer_ne_pane_t3_ParamLimits

0x7c4e,	// (0x000524e1) dialer_ne_pane_t3

0x0002,

0xf743,	// (0x00059fd6) dialer_ne_pane_t_ParamLimits

0xf743,	// (0x00059fd6) dialer_ne_pane_t

0x7c4e,	// (0x000524e1) dialer_ne_pane_t3_copy1_ParamLimits

0x7c4e,	// (0x000524e1) dialer_ne_pane_t3_copy1

0xe608,	// (0x00058e9b) cell_dialer_keypad_pane_ParamLimits

0xe608,	// (0x00058e9b) cell_dialer_keypad_pane

0x3ea4,	// (0x0004e737) cell_dialer_command_1_pane_ParamLimits

0x3ea4,	// (0x0004e737) cell_dialer_command_1_pane

0xe61f,	// (0x00058eb2) cell_dialer_command_2_pane_ParamLimits

0xe61f,	// (0x00058eb2) cell_dialer_command_2_pane

0x3ea4,	// (0x0004e737) bg_button_pane_cp02_ParamLimits

0x3ea4,	// (0x0004e737) bg_button_pane_cp02

0x3f0b,	// (0x0004e79e) cell_dialer_keypad_pane_g1_ParamLimits

0x3f0b,	// (0x0004e79e) cell_dialer_keypad_pane_g1

0x3ea4,	// (0x0004e737) bg_button_pane_cp03_ParamLimits

0x3ea4,	// (0x0004e737) bg_button_pane_cp03

0x3f0b,	// (0x0004e79e) cell_dialer_command_1_pane_g1_ParamLimits

0x3f0b,	// (0x0004e79e) cell_dialer_command_1_pane_g1

0x347f,	// (0x0004dd12) bg_button_pane_cp04

0x4b67,	// (0x0004f3fa) cell_dialer_command_2_pane_g1

0x347f,	// (0x0004dd12) bg_button_pane_cp06

0x4b67,	// (0x0004f3fa) dialer_ne_clear_pane_g1

0xc9c2,	// (0x00057255) navi_pane_g2

0xc9f0,	// (0x00057283) navi_pane_g3

0x0002,

0xf35f,	// (0x00059bf2) navi_pane_g

0xca7f,	// (0x00057312) navi_pane_mv_g2

0xcaa6,	// (0x00057339) navi_pane_mv_g5

0x64d9,	// (0x00050d6c) navi_pane_mv_t1

0x4106,	// (0x0004e999) main_clock2_pane

0x3efd,	// (0x0004e790) main_clock2_list_pane_ParamLimits

0x3efd,	// (0x0004e790) main_clock2_list_pane

0x7cc4,	// (0x00052557) main_clock2_pane_t1_ParamLimits

0x7cc4,	// (0x00052557) main_clock2_pane_t1

0x7cf2,	// (0x00052585) main_clock2_pane_t2_ParamLimits

0x7cf2,	// (0x00052585) main_clock2_pane_t2

0x0004,

0xf74f,	// (0x00059fe2) main_clock2_pane_t_ParamLimits

0xf74f,	// (0x00059fe2) main_clock2_pane_t

0x7d57,	// (0x000525ea) popup_clock_analogue_window_cp03_ParamLimits

0x7d57,	// (0x000525ea) popup_clock_analogue_window_cp03

0x7d75,	// (0x00052608) popup_clock_digital_window_cp02_ParamLimits

0x7d75,	// (0x00052608) popup_clock_digital_window_cp02

0x7dea,	// (0x0005267d) main_clock2_list_single_pane_ParamLimits

0x7dea,	// (0x0005267d) main_clock2_list_single_pane

0x49a9,	// (0x0004f23c) list_highlight_pane_cp05

0xe662,	// (0x00058ef5) main_clock2_list_single_pane_t1

0x4d7b,	// (0x0004f60e) popup_toolbar_window_cp04_ParamLimits

0x3f19,	// (0x0004e7ac) camera2_autofocus_pane_g2_ParamLimits

0x3f19,	// (0x0004e7ac) camera2_autofocus_pane_g2

0x3f19,	// (0x0004e7ac) camera2_autofocus_pane_g3_ParamLimits

0x3f19,	// (0x0004e7ac) camera2_autofocus_pane_g3

0x3f19,	// (0x0004e7ac) camera2_autofocus_pane_g4_ParamLimits

0x3f19,	// (0x0004e7ac) camera2_autofocus_pane_g4

0x3f19,	// (0x0004e7ac) camera2_autofocus_pane_g5_ParamLimits

0x3f19,	// (0x0004e7ac) camera2_autofocus_pane_g5

0x0004,

0xf693,	// (0x00059f26) camera2_autofocus_pane_g_ParamLimits

0xf693,	// (0x00059f26) camera2_autofocus_pane_g

0x761f,	// (0x00051eb2) camera2_autofocus_pane_cp_g2

0x7627,	// (0x00051eba) camera2_autofocus_pane_cp_g3

0x762f,	// (0x00051ec2) camera2_autofocus_pane_cp_g4

0x7637,	// (0x00051eca) camera2_autofocus_pane_cp_g5

0x0004,

0xf6f9,	// (0x00059f8c) camera2_autofocus_pane_cp_g

0x347f,	// (0x0004dd12) popup_dialer_spcha_window

0x347f,	// (0x0004dd12) bg_popup_sub_pane_cp07

0x347f,	// (0x0004dd12) list_spcha_pane

0xe670,	// (0x00058f03) list_single_spcha_pane_ParamLimits

0xe670,	// (0x00058f03) list_single_spcha_pane

0x347f,	// (0x0004dd12) list_highlight_pane_cp06

0xc614,	// (0x00056ea7) list_single_spcha_pane_t1

0xd8c7,	// (0x0005815a) popup_call2_audio_out_window_g4_ParamLimits

0xd8c7,	// (0x0005815a) popup_call2_audio_out_window_g4

0x3753,	// (0x0004dfe6) main_imed2_pane

0x708f,	// (0x00051922) popup_imed_adjust2_window

0x70a2,	// (0x00051935) popup_imed_trans_window_ParamLimits

0x70a2,	// (0x00051935) popup_imed_trans_window

0xe0a0,	// (0x00058933) popup_blid_sat_info2_window_t1

0xe0ae,	// (0x00058941) popup_blid_sat_info2_window_t2

0x000a,

0xf628,	// (0x00059ebb) popup_blid_sat_info2_window_t

0x7e9f,	// (0x00052732) aid_size_cell_colour_35

0x7eb9,	// (0x0005274c) aid_size_cell_colour_112

0x7ed0,	// (0x00052763) aid_size_cell_effect

0x3ea4,	// (0x0004e737) bg_tb_trans_pane_cp02

0xe682,	// (0x00058f15) heading_imed_pane

0x7eea,	// (0x0005277d) listscroll_imed_pane

0xe68e,	// (0x00058f21) heading_imed_pane_g1

0xe696,	// (0x00058f29) heading_imed_pane_t1

0xe6a4,	// (0x00058f37) grid_imed_colour_35_pane_ParamLimits

0xe6a4,	// (0x00058f37) grid_imed_colour_35_pane

0x7ef6,	// (0x00052789) grid_imed_effect_pane

0xe6bc,	// (0x00058f4f) list_imed_aspect_pane

0x7f06,	// (0x00052799) scroll_pane_cp027_ParamLimits

0x7f06,	// (0x00052799) scroll_pane_cp027

0x7f12,	// (0x000527a5) cell_imed_effect_pane_ParamLimits

0x7f12,	// (0x000527a5) cell_imed_effect_pane

0xe6c4,	// (0x00058f57) cell_imed_colour_pane_ParamLimits

0xe6c4,	// (0x00058f57) cell_imed_colour_pane

0xe706,	// (0x00058f99) cell_imed_colour_pane_g1_ParamLimits

0xe706,	// (0x00058f99) cell_imed_colour_pane_g1

0xe717,	// (0x00058faa) hgihlgiht_grid_pane_cp016_ParamLimits

0xe717,	// (0x00058faa) hgihlgiht_grid_pane_cp016

0x7f2a,	// (0x000527bd) cell_imed_effect_pane_g1

0x7f32,	// (0x000527c5) grid_highlight_pane_cp017

0xe728,	// (0x00058fbb) list_imed_single_pane_ParamLimits

0xe728,	// (0x00058fbb) list_imed_single_pane

0x347f,	// (0x0004dd12) list_highlight_pane_cp07

0xe73d,	// (0x00058fd0) list_imed_aspect_pane_comp1_t1

0xde39,	// (0x000586cc) bg_tb_trans_pane_cp05

0xe75f,	// (0x00058ff2) popup_imed_adjust2_window_g1

0xe786,	// (0x00059019) popup_imed_adjust2_window_t1

0xe79e,	// (0x00059031) slider_imed_adjust_pane

0xe7b2,	// (0x00059045) slider_imed_adjust_pane_g1

0xe7c2,	// (0x00059055) slider_imed_adjust_pane_g2

0xe7d2,	// (0x00059065) slider_imed_adjust_pane_g3

0xe7e3,	// (0x00059076) slider_imed_adjust_pane_g4

0x0003,

0xf76c,	// (0x00059fff) slider_imed_adjust_pane_g

0x7f3b,	// (0x000527ce) aid_size_cell_clipart2

0x7f47,	// (0x000527da) grid_imed_clipart_pane

0xe7f4,	// (0x00059087) scroll_pane_cp031

0x7f51,	// (0x000527e4) cell_imed_clipart_pane_ParamLimits

0x7f51,	// (0x000527e4) cell_imed_clipart_pane

0x7f74,	// (0x00052807) cell_imed_clipart_pane_g1

0x347f,	// (0x0004dd12) grid_highlight_pane_cp014

0x7ca6,	// (0x00052539) main_clock2_pane_g1_ParamLimits

0x7ca6,	// (0x00052539) main_clock2_pane_g1

0x7d91,	// (0x00052624) aid_call2_pane_cp10

0x7da3,	// (0x00052636) aid_call_pane_cp10

0xc921,	// (0x000571b4) popup_clock_analogue_window_cp10_g1

0xc921,	// (0x000571b4) popup_clock_analogue_window_cp10_g2

0x7db5,	// (0x00052648) popup_clock_analogue_window_cp10_g3

0x7db5,	// (0x00052648) popup_clock_analogue_window_cp10_g4

0xc921,	// (0x000571b4) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75a,	// (0x00059fed) popup_clock_analogue_window_cp10_g

0x7dcb,	// (0x0005265e) popup_clock_analogue_window_cp10_t1

0x7dfc,	// (0x0005268f) clock_digital_number_pane_cp10_ParamLimits

0x7dfc,	// (0x0005268f) clock_digital_number_pane_cp10

0x7e16,	// (0x000526a9) clock_digital_number_pane_cp11_ParamLimits

0x7e16,	// (0x000526a9) clock_digital_number_pane_cp11

0x7e30,	// (0x000526c3) clock_digital_number_pane_cp12_ParamLimits

0x7e30,	// (0x000526c3) clock_digital_number_pane_cp12

0x7e4a,	// (0x000526dd) clock_digital_number_pane_cp13_ParamLimits

0x7e4a,	// (0x000526dd) clock_digital_number_pane_cp13

0x7e64,	// (0x000526f7) clock_digital_separator_pane_cp10_ParamLimits

0x7e64,	// (0x000526f7) clock_digital_separator_pane_cp10

0x7e7e,	// (0x00052711) popup_clock_digital_window_cp02_t1_ParamLimits

0x7e7e,	// (0x00052711) popup_clock_digital_window_cp02_t1

0x3e7a,	// (0x0004e70d) clock_digital_number_pane_cp10_g1

0x3e7a,	// (0x0004e70d) clock_digital_number_pane_cp10_g2

0x0001,

0xf775,	// (0x0005a008) clock_digital_number_pane_cp10_g

0x3e7a,	// (0x0004e70d) clock_digital_separator_pane_cp10_g1

0x3e7a,	// (0x0004e70d) clock_digital_separator_pane_g2_cp10

0xcaae,	// (0x00057341) navi_pane_vded_g4

0xcab7,	// (0x0005734a) navi_pane_vded_g5

0xcac0,	// (0x00057353) navi_pane_vded_t1

0x3753,	// (0x0004dfe6) main_vded_pane

0x7f7d,	// (0x00052810) main_vded_pane_g1

0x7f89,	// (0x0005281c) main_vded_pane_g2

0x7f93,	// (0x00052826) main_vded_pane_g3

0x0002,

0xf77a,	// (0x0005a00d) main_vded_pane_g

0x7f9d,	// (0x00052830) main_vded_pane_t1

0x7fab,	// (0x0005283e) main_vded_pane_t2

0x0001,

0xf781,	// (0x0005a014) main_vded_pane_t

0x7fb9,	// (0x0005284c) vded_slider_pane

0x7fc3,	// (0x00052856) vded_video_pane

0xe7fc,	// (0x0005908f) vded_video_pane_g1

0x7fcd,	// (0x00052860) vded_video_pane_g2

0x4b67,	// (0x0004f3fa) vded_video_pane_g3

0x0002,

0xf786,	// (0x0005a019) vded_video_pane_g

0xe806,	// (0x00059099) vded_slider_pane_g1

0xdfcb,	// (0x0005885e) vded_slider_pane_g2

0xe80f,	// (0x000590a2) vded_slider_pane_g3

0xe818,	// (0x000590ab) vded_slider_pane_g4

0xe821,	// (0x000590b4) vded_slider_pane_g5

0x0004,

0xf78d,	// (0x0005a020) vded_slider_pane_g

0x7b80,	// (0x00052413) mup3_rocker_pane_ParamLimits

0x7b80,	// (0x00052413) mup3_rocker_pane

0x7fd6,	// (0x00052869) mup3_control_keys_pane_g1

0x7fde,	// (0x00052871) mup3_control_keys_pane_g2

0x7fe6,	// (0x00052879) mup3_control_keys_pane_g3

0x7fee,	// (0x00052881) mup3_control_keys_pane_g4

0x0003,

0xf798,	// (0x0005a02b) mup3_control_keys_pane_g

0x3707,	// (0x0004df9a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3707,	// (0x0004df9a) popup_toolbar2_fixed_window_cp01

0x7b9a,	// (0x0005242d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7b9a,	// (0x0005242d) popup_toolbar2_fixed_window_cp02

0xd25e,	// (0x00057af1) popup_call2_audio_second_window_t4_ParamLimits

0xd25e,	// (0x00057af1) popup_call2_audio_second_window_t4

0xd78c,	// (0x0005801f) popup_call2_audio_first_window_t6_ParamLimits

0xd78c,	// (0x0005801f) popup_call2_audio_first_window_t6

0xd9ca,	// (0x0005825d) popup_call2_audio_out_window_t6_ParamLimits

0xd9ca,	// (0x0005825d) popup_call2_audio_out_window_t6

0x3753,	// (0x0004dfe6) main_vitu_pane

0x3efd,	// (0x0004e790) aid_size_cell_itu_ParamLimits

0x3efd,	// (0x0004e790) aid_size_cell_itu

0x3efd,	// (0x0004e790) bg_popup_window_pane_cp08_ParamLimits

0x3efd,	// (0x0004e790) bg_popup_window_pane_cp08

0x3efd,	// (0x0004e790) field_vitu_entry_pane_ParamLimits

0x3efd,	// (0x0004e790) field_vitu_entry_pane

0x3efd,	// (0x0004e790) grid_vitu_function_pane_ParamLimits

0x3efd,	// (0x0004e790) grid_vitu_function_pane

0x3efd,	// (0x0004e790) grid_vitu_itu_pane_ParamLimits

0x3efd,	// (0x0004e790) grid_vitu_itu_pane

0x3efd,	// (0x0004e790) cell_vitu_itu_pane_ParamLimits

0x3efd,	// (0x0004e790) cell_vitu_itu_pane

0x3efd,	// (0x0004e790) cell_vitu_function_pane_ParamLimits

0x3efd,	// (0x0004e790) cell_vitu_function_pane

0x3ea4,	// (0x0004e737) bg_popup_sub_pane_cp08_ParamLimits

0x3ea4,	// (0x0004e737) bg_popup_sub_pane_cp08

0x4bbc,	// (0x0004f44f) field_vitu_entry_pane_t1_ParamLimits

0x4bbc,	// (0x0004f44f) field_vitu_entry_pane_t1

0xe5eb,	// (0x00058e7e) field_vitu_entry_pane_t2_ParamLimits

0xe5eb,	// (0x00058e7e) field_vitu_entry_pane_t2

0x0001,

0xf7a1,	// (0x0005a034) field_vitu_entry_pane_t_ParamLimits

0xf7a1,	// (0x0005a034) field_vitu_entry_pane_t

0xcb9d,	// (0x00057430) bg_button_pane_cp05_ParamLimits

0xcb9d,	// (0x00057430) bg_button_pane_cp05

0xe82a,	// (0x000590bd) cell_vitu_itu_pane_g1

0xe846,	// (0x000590d9) cell_vitu_itu_pane_t1_ParamLimits

0xe846,	// (0x000590d9) cell_vitu_itu_pane_t1

0xe846,	// (0x000590d9) cell_vitu_itu_pane_t2_ParamLimits

0xe846,	// (0x000590d9) cell_vitu_itu_pane_t2

0x0002,

0xf7a6,	// (0x0005a039) cell_vitu_itu_pane_t_ParamLimits

0xf7a6,	// (0x0005a039) cell_vitu_itu_pane_t

0x347f,	// (0x0004dd12) bg_button_pane_cp07

0x4b67,	// (0x0004f3fa) cell_vitu_function_pane_g1

0x3fc1,	// (0x0004e854) main_calc_pane_g1

0x34c5,	// (0x0004dd58) aid_visual_content_pane

0x3753,	// (0x0004dfe6) main_vradio_pane

0x3f19,	// (0x0004e7ac) main_vradio_pane_g1_ParamLimits

0x3f19,	// (0x0004e7ac) main_vradio_pane_g1

0x3f19,	// (0x0004e7ac) main_vradio_pane_g2_ParamLimits

0x3f19,	// (0x0004e7ac) main_vradio_pane_g2

0x0001,

0xf7ad,	// (0x0005a040) main_vradio_pane_g_ParamLimits

0xf7ad,	// (0x0005a040) main_vradio_pane_g

0x4a1e,	// (0x0004f2b1) main_vradio_pane_t1_ParamLimits

0x4a1e,	// (0x0004f2b1) main_vradio_pane_t1

0x4a1e,	// (0x0004f2b1) main_vradio_pane_t2_ParamLimits

0x4a1e,	// (0x0004f2b1) main_vradio_pane_t2

0x4a1e,	// (0x0004f2b1) main_vradio_pane_t3_ParamLimits

0x4a1e,	// (0x0004f2b1) main_vradio_pane_t3

0x0002,

0xf7b2,	// (0x0005a045) main_vradio_pane_t_ParamLimits

0xf7b2,	// (0x0005a045) main_vradio_pane_t

0x3efd,	// (0x0004e790) vradio_rocker_control_pane_ParamLimits

0x3efd,	// (0x0004e790) vradio_rocker_control_pane

0x3efd,	// (0x0004e790) vradio_station_info_pane_ParamLimits

0x3efd,	// (0x0004e790) vradio_station_info_pane

0x3ea4,	// (0x0004e737) vradio_frequency_info_pane_ParamLimits

0x3ea4,	// (0x0004e737) vradio_frequency_info_pane

0x4b67,	// (0x0004f3fa) vradio_station_info_pane_g1

0xe846,	// (0x000590d9) vradio_station_info_pane_t1_ParamLimits

0xe846,	// (0x000590d9) vradio_station_info_pane_t1

0x4a1e,	// (0x0004f2b1) vradio_station_info_pane_t2_ParamLimits

0x4a1e,	// (0x0004f2b1) vradio_station_info_pane_t2

0x0001,

0xf7b9,	// (0x0005a04c) vradio_station_info_pane_t_ParamLimits

0xf7b9,	// (0x0005a04c) vradio_station_info_pane_t

0x347f,	// (0x0004dd12) vradio_tuning_pane

0x7ffe,	// (0x00052891) vradio_rocker_control_pane_g1

0xe85a,	// (0x000590ed) vradio_rocker_control_pane_g2

0x8006,	// (0x00052899) vradio_rocker_control_pane_g3

0x800e,	// (0x000528a1) vradio_rocker_control_pane_g4

0x8016,	// (0x000528a9) vradio_rocker_control_pane_g5

0x0004,

0xf7be,	// (0x0005a051) vradio_rocker_control_pane_g

0x4b67,	// (0x0004f3fa) vradio_frequency_info_pane_g1

0x4bbc,	// (0x0004f44f) vradio_frequency_info_pane_t1_ParamLimits

0x4bbc,	// (0x0004f44f) vradio_frequency_info_pane_t1

0x801e,	// (0x000528b1) vradio_tuning_pane_g1

0x802b,	// (0x000528be) vradio_tuning_pane_t1

0x350e,	// (0x0004dda1) area_side_right_pane_ParamLimits

0x350e,	// (0x0004dda1) area_side_right_pane

0xddf4,	// (0x00058687) status_small_pane_g1

0xddfc,	// (0x0005868f) status_small_pane_g2

0xde05,	// (0x00058698) status_small_pane_g3

0xde0e,	// (0x000586a1) status_small_pane_g4

0x0003,

0xf58a,	// (0x00059e1d) status_small_pane_g

0xde17,	// (0x000586aa) status_small_pane_t1

0x3753,	// (0x0004dfe6) main_video3_pane

0xe862,	// (0x000590f5) cams_zoom_vslider_pane

0xe86a,	// (0x000590fd) image3_wide_pane_ParamLimits

0xe86a,	// (0x000590fd) image3_wide_pane

0xe884,	// (0x00059117) image3_wide_small_pane

0xe890,	// (0x00059123) main_video3_pane_g1_ParamLimits

0xe890,	// (0x00059123) main_video3_pane_g1

0xe8ac,	// (0x0005913f) main_video3_pane_g2_ParamLimits

0xe8ac,	// (0x0005913f) main_video3_pane_g2

0x0001,

0xf7c9,	// (0x0005a05c) main_video3_pane_g_ParamLimits

0xf7c9,	// (0x0005a05c) main_video3_pane_g

0xe8c8,	// (0x0005915b) main_video3_pane_t1_ParamLimits

0xe8c8,	// (0x0005915b) main_video3_pane_t1

0xe8f3,	// (0x00059186) main_video3_pane_t2_ParamLimits

0xe8f3,	// (0x00059186) main_video3_pane_t2

0xe91e,	// (0x000591b1) main_video3_pane_t3_ParamLimits

0xe91e,	// (0x000591b1) main_video3_pane_t3

0x0002,

0xf7ce,	// (0x0005a061) main_video3_pane_t_ParamLimits

0xf7ce,	// (0x0005a061) main_video3_pane_t

0xe94b,	// (0x000591de) cams_zoom_vslider_pane_g1

0xe954,	// (0x000591e7) cams_zoom_vslider_pane_g2

0x0001,

0xf7d5,	// (0x0005a068) cams_zoom_vslider_pane_g

0xe95c,	// (0x000591ef) small_slider_vertical_pane

0x4b67,	// (0x0004f3fa) small_slider_vertical_pane_g1

0x4b67,	// (0x0004f3fa) small_slider_vertical_pane_g2

0xe964,	// (0x000591f7) small_slider_vertical_pane_g3

0x0002,

0xf7da,	// (0x0005a06d) small_slider_vertical_pane_g

0x3753,	// (0x0004dfe6) main_hwr_training_pane

0xe96d,	// (0x00059200) hwr_training_instruct_pane_ParamLimits

0xe96d,	// (0x00059200) hwr_training_instruct_pane

0x803a,	// (0x000528cd) hwr_training_navi_pane_ParamLimits

0x803a,	// (0x000528cd) hwr_training_navi_pane

0x8054,	// (0x000528e7) hwr_training_write_pane_ParamLimits

0x8054,	// (0x000528e7) hwr_training_write_pane

0x347f,	// (0x0004dd12) bg_frame_shadow_pane

0xe9a4,	// (0x00059237) hwr_training_write_pane_g1

0xe9ac,	// (0x0005923f) hwr_training_write_pane_g2

0xe9b4,	// (0x00059247) hwr_training_write_pane_g3

0xe9bc,	// (0x0005924f) hwr_training_write_pane_g4

0xe9c4,	// (0x00059257) hwr_training_write_pane_g5

0xe9cc,	// (0x0005925f) hwr_training_write_pane_g6

0xe9d4,	// (0x00059267) hwr_training_write_pane_g7

0x0006,

0xf7e1,	// (0x0005a074) hwr_training_write_pane_g

0x808c,	// (0x0005291f) hwr_training_navi_pane_g1_ParamLimits

0x808c,	// (0x0005291f) hwr_training_navi_pane_g1

0x809e,	// (0x00052931) hwr_training_navi_pane_g2_ParamLimits

0x809e,	// (0x00052931) hwr_training_navi_pane_g2

0x80b0,	// (0x00052943) hwr_training_navi_pane_g3_ParamLimits

0x80b0,	// (0x00052943) hwr_training_navi_pane_g3

0x80c0,	// (0x00052953) hwr_training_navi_pane_g4_ParamLimits

0x80c0,	// (0x00052953) hwr_training_navi_pane_g4

0x0004,

0xf7f0,	// (0x0005a083) hwr_training_navi_pane_g_ParamLimits

0xf7f0,	// (0x0005a083) hwr_training_navi_pane_g

0x80da,	// (0x0005296d) hwr_training_navi_pane_t1

0x80e8,	// (0x0005297b) list_single_hwr_training_instruct_pane_ParamLimits

0x80e8,	// (0x0005297b) list_single_hwr_training_instruct_pane

0xe9dc,	// (0x0005926f) list_single_hwr_training_instruct_pane_t1

0xe1a1,	// (0x00058a34) bg_frame_shadow_pane_g1

0xe9eb,	// (0x0005927e) bg_frame_shadow_pane_g2

0xe9f3,	// (0x00059286) bg_frame_shadow_pane_g3

0xe9fb,	// (0x0005928e) bg_frame_shadow_pane_g4

0xea03,	// (0x00059296) bg_frame_shadow_pane_g5

0xea0b,	// (0x0005929e) bg_frame_shadow_pane_g6

0xea13,	// (0x000592a6) bg_frame_shadow_pane_g7

0x4369,	// (0x0004ebfc) bg_frame_shadow_pane_g8

0x0007,

0xf7fb,	// (0x0005a08e) bg_frame_shadow_pane_g

0x3753,	// (0x0004dfe6) main_video_tele_dialer_pane

0x8111,	// (0x000529a4) aid_size_cell_video_keypad_ParamLimits

0x8111,	// (0x000529a4) aid_size_cell_video_keypad

0x8121,	// (0x000529b4) grid_video_dialer_keypad_pane_ParamLimits

0x8121,	// (0x000529b4) grid_video_dialer_keypad_pane

0x8155,	// (0x000529e8) video_down_pane_cp_ParamLimits

0x8155,	// (0x000529e8) video_down_pane_cp

0x817f,	// (0x00052a12) cell_video_dialer_keypad_pane_ParamLimits

0x817f,	// (0x00052a12) cell_video_dialer_keypad_pane

0xea1b,	// (0x000592ae) bg_button_pane_cp08_ParamLimits

0xea1b,	// (0x000592ae) bg_button_pane_cp08

0x8194,	// (0x00052a27) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8194,	// (0x00052a27) cell_video_dialer_keypad_pane_g1

0x7b74,	// (0x00052407) mup3_rocker2_pane_ParamLimits

0x7b74,	// (0x00052407) mup3_rocker2_pane

0x4b67,	// (0x0004f3fa) mup3_rocker2_pane_g1

0x7003,	// (0x00051896) main_dialer2_pane

0x3753,	// (0x0004dfe6) main_mp4_pane

0x81ec,	// (0x00052a7f) main_mp4_pane_g1_ParamLimits

0x81ec,	// (0x00052a7f) main_mp4_pane_g1

0x81fa,	// (0x00052a8d) main_mp4_pane_g2_ParamLimits

0x81fa,	// (0x00052a8d) main_mp4_pane_g2

0x8208,	// (0x00052a9b) main_mp4_pane_g3_ParamLimits

0x8208,	// (0x00052a9b) main_mp4_pane_g3

0x824d,	// (0x00052ae0) main_mp4_pane_g4_ParamLimits

0x824d,	// (0x00052ae0) main_mp4_pane_g4

0x827b,	// (0x00052b0e) main_mp4_pane_g5_ParamLimits

0x827b,	// (0x00052b0e) main_mp4_pane_g5

0x0007,

0xf81b,	// (0x0005a0ae) main_mp4_pane_g_ParamLimits

0xf81b,	// (0x0005a0ae) main_mp4_pane_g

0x82ef,	// (0x00052b82) main_mp4_pane_t1_ParamLimits

0x82ef,	// (0x00052b82) main_mp4_pane_t1

0x834b,	// (0x00052bde) main_mp4_pane_t2_ParamLimits

0x834b,	// (0x00052bde) main_mp4_pane_t2

0xea27,	// (0x000592ba) main_mp4_pane_t3_ParamLimits

0xea27,	// (0x000592ba) main_mp4_pane_t3

0x839d,	// (0x00052c30) main_mp4_pane_t4_ParamLimits

0x839d,	// (0x00052c30) main_mp4_pane_t4

0x0003,

0xf82c,	// (0x0005a0bf) main_mp4_pane_t_ParamLimits

0xf82c,	// (0x0005a0bf) main_mp4_pane_t

0x83e1,	// (0x00052c74) mp4_progress_pane_ParamLimits

0x83e1,	// (0x00052c74) mp4_progress_pane

0x842b,	// (0x00052cbe) mp4_rocker_pane_ParamLimits

0x842b,	// (0x00052cbe) mp4_rocker_pane

0xea55,	// (0x000592e8) mp4_progress_pane_t1

0xea6e,	// (0x00059301) mp4_progress_pane_t2

0x0001,

0xf835,	// (0x0005a0c8) mp4_progress_pane_t

0xea87,	// (0x0005931a) mup_progress_pane_cp04

0xedf2,	// (0x00059685) mp4_rocker_pane_g1

0x844b,	// (0x00052cde) aid_cell_size_keypad2_ParamLimits

0x844b,	// (0x00052cde) aid_cell_size_keypad2

0x845b,	// (0x00052cee) dialer2_ne_pane_ParamLimits

0x845b,	// (0x00052cee) dialer2_ne_pane

0x8469,	// (0x00052cfc) grid_dialer2_keypad_pane_ParamLimits

0x8469,	// (0x00052cfc) grid_dialer2_keypad_pane

0x0491,	// (0x0004ad24) bg_popup_call_pane_cp07_ParamLimits

0x0491,	// (0x0004ad24) bg_popup_call_pane_cp07

0x8479,	// (0x00052d0c) dialer2_ne_pane_t1_ParamLimits

0x8479,	// (0x00052d0c) dialer2_ne_pane_t1

0x849e,	// (0x00052d31) cell_dialer2_keypad_pane_ParamLimits

0x849e,	// (0x00052d31) cell_dialer2_keypad_pane

0xeaac,	// (0x0005933f) bg_button_pane_pane_cp04_ParamLimits

0xeaac,	// (0x0005933f) bg_button_pane_pane_cp04

0x84b3,	// (0x00052d46) cell_dialer2_keypad_pane_g1_ParamLimits

0x84b3,	// (0x00052d46) cell_dialer2_keypad_pane_g1

0x4c2b,	// (0x0004f4be) aid_placing_vt_set_content_ParamLimits

0x4c2b,	// (0x0004f4be) aid_placing_vt_set_content

0x4c57,	// (0x0004f4ea) aid_placing_vt_set_title_ParamLimits

0x4c57,	// (0x0004f4ea) aid_placing_vt_set_title

0x3753,	// (0x0004dfe6) main_image3_pane

0x854d,	// (0x00052de0) area_side_right_pane_cp01_ParamLimits

0x854d,	// (0x00052de0) area_side_right_pane_cp01

0x857a,	// (0x00052e0d) main_image3_pane_g1_ParamLimits

0x857a,	// (0x00052e0d) main_image3_pane_g1

0x8588,	// (0x00052e1b) main_image3_pane_g2_ParamLimits

0x8588,	// (0x00052e1b) main_image3_pane_g2

0x85a1,	// (0x00052e34) main_image3_pane_g3_ParamLimits

0x85a1,	// (0x00052e34) main_image3_pane_g3

0x85ba,	// (0x00052e4d) main_image3_pane_g4_ParamLimits

0x85ba,	// (0x00052e4d) main_image3_pane_g4

0x0003,

0xf844,	// (0x0005a0d7) main_image3_pane_g_ParamLimits

0xf844,	// (0x0005a0d7) main_image3_pane_g

0x85d3,	// (0x00052e66) main_image3_pane_t1_ParamLimits

0x85d3,	// (0x00052e66) main_image3_pane_t1

0x85f8,	// (0x00052e8b) main_image3_pane_t2_ParamLimits

0x85f8,	// (0x00052e8b) main_image3_pane_t2

0x8617,	// (0x00052eaa) main_image3_pane_t3_ParamLimits

0x8617,	// (0x00052eaa) main_image3_pane_t3

0x0003,

0xf84d,	// (0x0005a0e0) main_image3_pane_t_ParamLimits

0xf84d,	// (0x0005a0e0) main_image3_pane_t

0x3efd,	// (0x0004e790) grid_sctrl_middle_pane_cp01_ParamLimits

0x3efd,	// (0x0004e790) grid_sctrl_middle_pane_cp01

0x8678,	// (0x00052f0b) cell_sctrl_middle_pane_cp01_ParamLimits

0x8678,	// (0x00052f0b) cell_sctrl_middle_pane_cp01

0x8689,	// (0x00052f1c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8689,	// (0x00052f1c) cell_sctrl_middle_pane_cp01_g1

0x3753,	// (0x0004dfe6) main_call4_pane

0x8696,	// (0x00052f29) aid_size_button_call4_ParamLimits

0x8696,	// (0x00052f29) aid_size_button_call4

0x86cc,	// (0x00052f5f) call4_windows_pane_ParamLimits

0x86cc,	// (0x00052f5f) call4_windows_pane

0x86e1,	// (0x00052f74) grid_call4_button_pane_ParamLimits

0x86e1,	// (0x00052f74) grid_call4_button_pane

0x870f,	// (0x00052fa2) call4_windows_conf_pane

0x8724,	// (0x00052fb7) popup_call4_audio_first_window_ParamLimits

0x8724,	// (0x00052fb7) popup_call4_audio_first_window

0x8774,	// (0x00053007) popup_call4_audio_second_window_ParamLimits

0x8774,	// (0x00053007) popup_call4_audio_second_window

0x878d,	// (0x00053020) popup_call4_audio_wait_window_ParamLimits

0x878d,	// (0x00053020) popup_call4_audio_wait_window

0x879b,	// (0x0005302e) cell_call4_button_pane_ParamLimits

0x879b,	// (0x0005302e) cell_call4_button_pane

0x87be,	// (0x00053051) bg_button_pane_cp09_ParamLimits

0x87be,	// (0x00053051) bg_button_pane_cp09

0x87ca,	// (0x0005305d) cell_call4_button_pane_g1_ParamLimits

0x87ca,	// (0x0005305d) cell_call4_button_pane_g1

0x87d7,	// (0x0005306a) cell_call4_button_pane_t1_ParamLimits

0x87d7,	// (0x0005306a) cell_call4_button_pane_t1

0xeac0,	// (0x00059353) popup_call4_audio_conf_window_ParamLimits

0xeac0,	// (0x00059353) popup_call4_audio_conf_window

0x7ba7,	// (0x0005243a) mup3_progress_pane_t1_ParamLimits

0x7bc6,	// (0x00052459) mup3_progress_pane_t2_ParamLimits

0xe514,	// (0x00058da7) mup3_progress_pane_t3_ParamLimits

0xf722,	// (0x00059fb5) mup3_progress_pane_t_ParamLimits

0xe531,	// (0x00058dc4) mup_progress_pane_cp03_ParamLimits

0x7ff6,	// (0x00052889) mup3_control_keys_pane_g4_copy1

0x840f,	// (0x00052ca2) mp4_rocker2_pane_ParamLimits

0x840f,	// (0x00052ca2) mp4_rocker2_pane

0xead4,	// (0x00059367) mp4_rocker2_pane_g1

0xeadc,	// (0x0005936f) mp4_rocker2_pane_g2

0x881b,	// (0x000530ae) mp4_rocker2_pane_g3

0x8823,	// (0x000530b6) mp4_rocker2_pane_g4

0x882b,	// (0x000530be) mp4_rocker2_pane_g5

0x0004,

0xf856,	// (0x0005a0e9) mp4_rocker2_pane_g

0x3753,	// (0x0004dfe6) main_camera4_pane

0x3753,	// (0x0004dfe6) main_video4_pane

0x8131,	// (0x000529c4) main_video_tele_dialer_pane_t1_ParamLimits

0x8131,	// (0x000529c4) main_video_tele_dialer_pane_t1

0x8143,	// (0x000529d6) main_video_tele_dialer_pane_t2_ParamLimits

0x8143,	// (0x000529d6) main_video_tele_dialer_pane_t2

0x0001,

0xf80c,	// (0x0005a09f) main_video_tele_dialer_pane_t_ParamLimits

0xf80c,	// (0x0005a09f) main_video_tele_dialer_pane_t

0x884b,	// (0x000530de) cam4_autofocus_pane_ParamLimits

0x884b,	// (0x000530de) cam4_autofocus_pane

0x8865,	// (0x000530f8) cam4_image_uncrop_pane_ParamLimits

0x8865,	// (0x000530f8) cam4_image_uncrop_pane

0x887c,	// (0x0005310f) cam4_indicators_pane_ParamLimits

0x887c,	// (0x0005310f) cam4_indicators_pane

0x8898,	// (0x0005312b) main_camera4_pane_g1_ParamLimits

0x8898,	// (0x0005312b) main_camera4_pane_g1

0x88a4,	// (0x00053137) main_camera4_pane_g2_ParamLimits

0x88a4,	// (0x00053137) main_camera4_pane_g2

0x88a4,	// (0x00053137) main_camera4_pane_g3_ParamLimits

0x88a4,	// (0x00053137) main_camera4_pane_g3

0x88b0,	// (0x00053143) main_camera4_pane_g4_ParamLimits

0x88b0,	// (0x00053143) main_camera4_pane_g4

0x88bc,	// (0x0005314f) main_camera4_pane_g5_ParamLimits

0x88bc,	// (0x0005314f) main_camera4_pane_g5

0x0005,

0xf861,	// (0x0005a0f4) main_camera4_pane_g_ParamLimits

0xf861,	// (0x0005a0f4) main_camera4_pane_g

0x88d6,	// (0x00053169) main_camera4_pane_t1_ParamLimits

0x88d6,	// (0x00053169) main_camera4_pane_t1

0xedfc,	// (0x0005968f) bg_tb_trans_pane_cp06

0x8926,	// (0x000531b9) cam4_indicators_pane_g1

0x8937,	// (0x000531ca) cam4_indicators_pane_g2

0x0002,

0xf87c,	// (0x0005a10f) cam4_indicators_pane_g

0x894f,	// (0x000531e2) cam4_indicators_pane_t1

0x8979,	// (0x0005320c) main_video4_pane_g1_ParamLimits

0x8979,	// (0x0005320c) main_video4_pane_g1

0x8985,	// (0x00053218) main_video4_pane_g2_ParamLimits

0x8985,	// (0x00053218) main_video4_pane_g2

0x8991,	// (0x00053224) main_video4_pane_g3_ParamLimits

0x8991,	// (0x00053224) main_video4_pane_g3

0x899d,	// (0x00053230) main_video4_pane_g4_ParamLimits

0x899d,	// (0x00053230) main_video4_pane_g4

0x0004,

0xf883,	// (0x0005a116) main_video4_pane_g_ParamLimits

0xf883,	// (0x0005a116) main_video4_pane_g

0x89bd,	// (0x00053250) vid4_indicators_pane_ParamLimits

0x89bd,	// (0x00053250) vid4_indicators_pane

0x89dc,	// (0x0005326f) video4_image_uncrop_cif_pane_ParamLimits

0x89dc,	// (0x0005326f) video4_image_uncrop_cif_pane

0x89eb,	// (0x0005327e) video4_image_uncrop_nhd_pane_ParamLimits

0x89eb,	// (0x0005327e) video4_image_uncrop_nhd_pane

0x8865,	// (0x000530f8) video4_image_uncrop_vga_pane_ParamLimits

0x8865,	// (0x000530f8) video4_image_uncrop_vga_pane

0x6ff5,	// (0x00051888) bg_tb_trans_pane_cp07

0x8a00,	// (0x00053293) vid4_indicators_pane_g1

0x8a14,	// (0x000532a7) vid4_indicators_pane_g2

0x8a28,	// (0x000532bb) vid4_indicators_pane_g3

0x0004,

0xf88e,	// (0x0005a121) vid4_indicators_pane_g

0x8a55,	// (0x000532e8) vid4_indicators_pane_t1

0x8a6c,	// (0x000532ff) cam4_autofocus_pane_g1

0x8a74,	// (0x00053307) cam4_autofocus_pane_g2

0x8a7c,	// (0x0005330f) cam4_autofocus_pane_g3

0x0002,

0xf899,	// (0x0005a12c) cam4_autofocus_pane_g

0x8a84,	// (0x00053317) cam4_autofocus_pane_g3_copy1

0x8163,	// (0x000529f6) video_down_pane_cp_t1

0x8171,	// (0x00052a04) video_down_pane_cp_t2

0x0001,

0xf811,	// (0x0005a0a4) video_down_pane_cp_t

0x3739,	// (0x0004dfcc) popup_vitu2_window_ParamLimits

0x3739,	// (0x0004dfcc) popup_vitu2_window

0x8a8c,	// (0x0005331f) aid_size_cell2_itu2_ParamLimits

0x8a8c,	// (0x0005331f) aid_size_cell2_itu2

0x8aae,	// (0x00053341) aid_size_cell_itu2_ParamLimits

0x8aae,	// (0x00053341) aid_size_cell_itu2

0x8af2,	// (0x00053385) bg_popup_window_pane_cp09_ParamLimits

0x8af2,	// (0x00053385) bg_popup_window_pane_cp09

0x8b00,	// (0x00053393) field_vitu2_entry_pane_ParamLimits

0x8b00,	// (0x00053393) field_vitu2_entry_pane

0x8b20,	// (0x000533b3) grid_vitu2_function_pane_ParamLimits

0x8b20,	// (0x000533b3) grid_vitu2_function_pane

0x8b64,	// (0x000533f7) grid_vitu2_itu_pane_ParamLimits

0x8b64,	// (0x000533f7) grid_vitu2_itu_pane

0x8bdc,	// (0x0005346f) cell_vitu2_itu_pane_ParamLimits

0x8bdc,	// (0x0005346f) cell_vitu2_itu_pane

0x8bf5,	// (0x00053488) cell_vitu2_function_pane_ParamLimits

0x8bf5,	// (0x00053488) cell_vitu2_function_pane

0xeae4,	// (0x00059377) bg_popup_call_pane_cp08_ParamLimits

0xeae4,	// (0x00059377) bg_popup_call_pane_cp08

0xeafb,	// (0x0005938e) field_vitu2_entry_pane_g1

0xeb07,	// (0x0005939a) field_vitu2_entry_pane_g2

0x0002,

0xf8a0,	// (0x0005a133) field_vitu2_entry_pane_g

0x8c36,	// (0x000534c9) field_vitu2_entry_pane_t1_ParamLimits

0x8c36,	// (0x000534c9) field_vitu2_entry_pane_t1

0x0901,	// (0x0004b194) field_vitu2_entry_pane_t2_ParamLimits

0x0901,	// (0x0004b194) field_vitu2_entry_pane_t2

0x0001,

0xf8a7,	// (0x0005a13a) field_vitu2_entry_pane_t_ParamLimits

0xf8a7,	// (0x0005a13a) field_vitu2_entry_pane_t

0x732d,	// (0x00051bc0) bg_button_pane_cp010_ParamLimits

0x732d,	// (0x00051bc0) bg_button_pane_cp010

0x8c6b,	// (0x000534fe) cell_vitu2_itu_pane_g1

0x8c91,	// (0x00053524) cell_vitu2_itu_pane_t1_ParamLimits

0x8c91,	// (0x00053524) cell_vitu2_itu_pane_t1

0x339f,	// (0x0004dc32) cell_vitu2_itu_pane_t2_ParamLimits

0x339f,	// (0x0004dc32) cell_vitu2_itu_pane_t2

0x0002,

0xf8b1,	// (0x0005a144) cell_vitu2_itu_pane_t_ParamLimits

0xf8b1,	// (0x0005a144) cell_vitu2_itu_pane_t

0x6ff5,	// (0x00051888) bg_button_pane_cp011

0x8cdd,	// (0x00053570) cell_vitu2_function_pane_g1

0x3753,	// (0x0004dfe6) main_myfav_hc_pane

0x8659,	// (0x00052eec) popup_image3_note_pane_ParamLimits

0x8659,	// (0x00052eec) popup_image3_note_pane

0x8667,	// (0x00052efa) popup_image3_tool_bar_pane_ParamLimits

0x8667,	// (0x00052efa) popup_image3_tool_bar_pane

0x3415,	// (0x0004dca8) cell_vitu2_itu_pane_t3_ParamLimits

0x3415,	// (0x0004dca8) cell_vitu2_itu_pane_t3

0x347f,	// (0x0004dd12) bg_popup_trans_pane

0xeb29,	// (0x000593bc) grid_image3_tool_bar_pane

0xeb33,	// (0x000593c6) bg_popup_trans_pane_g1

0x52f5,	// (0x0004fb88) bg_popup_trans_pane_g2

0xeb3b,	// (0x000593ce) bg_popup_trans_pane_g3

0xeb43,	// (0x000593d6) bg_popup_trans_pane_g4

0xeb4b,	// (0x000593de) bg_popup_trans_pane_g5

0xeb53,	// (0x000593e6) bg_popup_trans_pane_g6

0xeb5b,	// (0x000593ee) bg_popup_trans_pane_g7

0xeb63,	// (0x000593f6) bg_popup_trans_pane_g8

0x52d5,	// (0x0004fb68) bg_popup_trans_pane_g9

0x0008,

0xf8b8,	// (0x0005a14b) bg_popup_trans_pane_g

0xeb6b,	// (0x000593fe) cell_image3_tool_bar_pane_ParamLimits

0xeb6b,	// (0x000593fe) cell_image3_tool_bar_pane

0x4b67,	// (0x0004f3fa) cell_image3_tool_bar_pane_g1

0x347f,	// (0x0004dd12) bg_popup_trans_pane_cp1

0xeb7f,	// (0x00059412) popup_image3_note_pane_t1

0xeb8d,	// (0x00059420) popup_image3_note_pane_t2

0xeb9b,	// (0x0005942e) popup_image3_note_pane_t3

0x0002,

0xf8cb,	// (0x0005a15e) popup_image3_note_pane_t

0xeba9,	// (0x0005943c) popup_image3_note_pane_t3_copy1

0x8cf1,	// (0x00053584) bg_myfav_hc_instruction_pane_ParamLimits

0x8cf1,	// (0x00053584) bg_myfav_hc_instruction_pane

0x8d09,	// (0x0005359c) cell_myfav_contact_pane_ParamLimits

0x8d09,	// (0x0005359c) cell_myfav_contact_pane

0x8d23,	// (0x000535b6) cell_myfav_contact_pane_cp1_ParamLimits

0x8d23,	// (0x000535b6) cell_myfav_contact_pane_cp1

0x8d3b,	// (0x000535ce) cell_myfav_contact_pane_cp2_ParamLimits

0x8d3b,	// (0x000535ce) cell_myfav_contact_pane_cp2

0x8d53,	// (0x000535e6) cell_myfav_contact_pane_cp3_ParamLimits

0x8d53,	// (0x000535e6) cell_myfav_contact_pane_cp3

0x8d6a,	// (0x000535fd) cell_myfav_contact_pane_cp4_ParamLimits

0x8d6a,	// (0x000535fd) cell_myfav_contact_pane_cp4

0x8d80,	// (0x00053613) cell_myfav_contact_pane_cp5_ParamLimits

0x8d80,	// (0x00053613) cell_myfav_contact_pane_cp5

0x8d94,	// (0x00053627) cell_myfav_contact_pane_cp6_ParamLimits

0x8d94,	// (0x00053627) cell_myfav_contact_pane_cp6

0x8da8,	// (0x0005363b) cell_myfav_contact_pane_cp7_ParamLimits

0x8da8,	// (0x0005363b) cell_myfav_contact_pane_cp7

0xebb7,	// (0x0005944a) listscroll_gen_pane_cp05

0x8dc0,	// (0x00053653) main_myfav_hc_pane_g1_ParamLimits

0x8dc0,	// (0x00053653) main_myfav_hc_pane_g1

0x8dd6,	// (0x00053669) main_myfav_hc_pane_g2_ParamLimits

0x8dd6,	// (0x00053669) main_myfav_hc_pane_g2

0x0002,

0xf8d2,	// (0x0005a165) main_myfav_hc_pane_g_ParamLimits

0xf8d2,	// (0x0005a165) main_myfav_hc_pane_g

0x8e06,	// (0x00053699) main_myfav_hc_pane_t1_ParamLimits

0x8e06,	// (0x00053699) main_myfav_hc_pane_t1

0xebc0,	// (0x00059453) main_myfav_hc_pane_t2_ParamLimits

0xebc0,	// (0x00059453) main_myfav_hc_pane_t2

0xebd2,	// (0x00059465) main_myfav_hc_pane_t3_ParamLimits

0xebd2,	// (0x00059465) main_myfav_hc_pane_t3

0x8e1d,	// (0x000536b0) main_myfav_hc_pane_t4_ParamLimits

0x8e1d,	// (0x000536b0) main_myfav_hc_pane_t4

0x0004,

0xf8d9,	// (0x0005a16c) main_myfav_hc_pane_t_ParamLimits

0xf8d9,	// (0x0005a16c) main_myfav_hc_pane_t

0x4b67,	// (0x0004f3fa) bg_myfav_hc_instruction_pane_g1

0xebe4,	// (0x00059477) cell_myfav_contact_pane_g1_ParamLimits

0xebe4,	// (0x00059477) cell_myfav_contact_pane_g1

0xebe4,	// (0x00059477) cell_myfav_contact_pane_g2_ParamLimits

0xebe4,	// (0x00059477) cell_myfav_contact_pane_g2

0xebf0,	// (0x00059483) cell_myfav_contact_pane_g3_ParamLimits

0xebf0,	// (0x00059483) cell_myfav_contact_pane_g3

0x3f19,	// (0x0004e7ac) cell_myfav_contact_pane_g4_ParamLimits

0x3f19,	// (0x0004e7ac) cell_myfav_contact_pane_g4

0xebfd,	// (0x00059490) cell_myfav_contact_pane_g5_ParamLimits

0xebfd,	// (0x00059490) cell_myfav_contact_pane_g5

0x0004,

0xf8e4,	// (0x0005a177) cell_myfav_contact_pane_g_ParamLimits

0xf8e4,	// (0x0005a177) cell_myfav_contact_pane_g

0x8dee,	// (0x00053681) main_myfav_hc_pane_g3_ParamLimits

0x8dee,	// (0x00053681) main_myfav_hc_pane_g3

0x3642,	// (0x0004ded5) popup_adpt_find_window

0x8e47,	// (0x000536da) afind_page_pane_ParamLimits

0x8e47,	// (0x000536da) afind_page_pane

0x8e54,	// (0x000536e7) aid_size_cell_afind_ParamLimits

0x8e54,	// (0x000536e7) aid_size_cell_afind

0x8e6e,	// (0x00053701) bg_popup_sub_pane_cp09_ParamLimits

0x8e6e,	// (0x00053701) bg_popup_sub_pane_cp09

0x8e7b,	// (0x0005370e) find_pane_cp01_ParamLimits

0x8e7b,	// (0x0005370e) find_pane_cp01

0xec09,	// (0x0005949c) grid_afind_control_pane_ParamLimits

0xec09,	// (0x0005949c) grid_afind_control_pane

0x8e88,	// (0x0005371b) grid_afind_pane_ParamLimits

0x8e88,	// (0x0005371b) grid_afind_pane

0x8ea2,	// (0x00053735) cell_afind_pane_ParamLimits

0x8ea2,	// (0x00053735) cell_afind_pane

0x4b67,	// (0x0004f3fa) afind_page_pane_g1

0x8eea,	// (0x0005377d) afind_page_pane_g2

0x8ef3,	// (0x00053786) afind_page_pane_g3

0x0002,

0xf8ef,	// (0x0005a182) afind_page_pane_g

0x8efc,	// (0x0005378f) afind_page_pane_t1

0xec1d,	// (0x000594b0) cell_afind_grid_control_pane_ParamLimits

0xec1d,	// (0x000594b0) cell_afind_grid_control_pane

0xeaac,	// (0x0005933f) bg_button_pane_cp69_ParamLimits

0xeaac,	// (0x0005933f) bg_button_pane_cp69

0x8f1c,	// (0x000537af) cell_afind_pane_g1_ParamLimits

0x8f1c,	// (0x000537af) cell_afind_pane_g1

0x8f29,	// (0x000537bc) cell_afind_pane_t1_ParamLimits

0x8f29,	// (0x000537bc) cell_afind_pane_t1

0x4bac,	// (0x0004f43f) bg_button_pane_cp72

0xec2c,	// (0x000594bf) cell_afind_grid_control_pane_g1

0x6b26,	// (0x000513b9) aid_image_placing_area_ParamLimits

0x6b26,	// (0x000513b9) aid_image_placing_area

0x3f0b,	// (0x0004e79e) field_vitu_entry_pane_g1_ParamLimits

0x3f0b,	// (0x0004e79e) field_vitu_entry_pane_g1

0x3f0b,	// (0x0004e79e) field_vitu_entry_pane_g2_ParamLimits

0x3f0b,	// (0x0004e79e) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x00059a7a) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x00059a7a) field_vitu_entry_pane_g

0xe82a,	// (0x000590bd) cell_vitu_itu_pane_g1_ParamLimits

0xe5eb,	// (0x00058e7e) cell_vitu_itu_pane_t3_ParamLimits

0xe5eb,	// (0x00058e7e) cell_vitu_itu_pane_t3

0xea55,	// (0x000592e8) mp4_progress_pane_t1_ParamLimits

0xea6e,	// (0x00059301) mp4_progress_pane_t2_ParamLimits

0xf835,	// (0x0005a0c8) mp4_progress_pane_t_ParamLimits

0xea87,	// (0x0005931a) mup_progress_pane_cp04_ParamLimits

0x8e31,	// (0x000536c4) main_myfav_hc_pane_t5_ParamLimits

0x8e31,	// (0x000536c4) main_myfav_hc_pane_t5

0x34d1,	// (0x0004dd64) aid_zoom_text_primary

0x3642,	// (0x0004ded5) popup_adpt_find_window_ParamLimits

0x6ff5,	// (0x00051888) main_cam_set_pane

0x888a,	// (0x0005311d) cam4_zoom_pane_ParamLimits

0x888a,	// (0x0005311d) cam4_zoom_pane

0x8f3b,	// (0x000537ce) main_cam_set_pane_g1_ParamLimits

0x8f3b,	// (0x000537ce) main_cam_set_pane_g1

0x8f49,	// (0x000537dc) main_cam_set_pane_g2_ParamLimits

0x8f49,	// (0x000537dc) main_cam_set_pane_g2

0x0001,

0xf8f6,	// (0x0005a189) main_cam_set_pane_g_ParamLimits

0xf8f6,	// (0x0005a189) main_cam_set_pane_g

0x8f55,	// (0x000537e8) main_cam_set_pane_t1_ParamLimits

0x8f55,	// (0x000537e8) main_cam_set_pane_t1

0x8f71,	// (0x00053804) main_cset_listscroll_pane_ParamLimits

0x8f71,	// (0x00053804) main_cset_listscroll_pane

0x8fa3,	// (0x00053836) main_cset_slider_pane_ParamLimits

0x8fa3,	// (0x00053836) main_cset_slider_pane

0xec3d,	// (0x000594d0) main_cset_list_pane_ParamLimits

0xec3d,	// (0x000594d0) main_cset_list_pane

0xec4d,	// (0x000594e0) scroll_pane_cp028

0x8fc2,	// (0x00053855) aid_area_touch_slider

0x8fde,	// (0x00053871) cset_slider_pane

0x9001,	// (0x00053894) main_cset_slider_pane_g1

0x9016,	// (0x000538a9) main_cset_slider_pane_g2

0x0011,

0xf8fb,	// (0x0005a18e) main_cset_slider_pane_g

0xec86,	// (0x00059519) main_cset_slider_pane_t1

0x90dc,	// (0x0005396f) main_cset_slider_pane_t2

0x90f6,	// (0x00053989) main_cset_slider_pane_t3

0x9110,	// (0x000539a3) main_cset_slider_pane_t4

0x912e,	// (0x000539c1) main_cset_slider_pane_t5

0x914c,	// (0x000539df) main_cset_slider_pane_t6

0x9163,	// (0x000539f6) main_cset_slider_pane_t7

0x000e,

0xf920,	// (0x0005a1b3) main_cset_slider_pane_t

0x9271,	// (0x00053b04) cset_list_set_pane_ParamLimits

0x9271,	// (0x00053b04) cset_list_set_pane

0xed20,	// (0x000595b3) aid_position_infowindow_above

0xed28,	// (0x000595bb) aid_position_infowindow_below

0x928a,	// (0x00053b1d) cset_list_set_pane_g1_ParamLimits

0x928a,	// (0x00053b1d) cset_list_set_pane_g1

0x9296,	// (0x00053b29) cset_list_set_pane_g3_ParamLimits

0x9296,	// (0x00053b29) cset_list_set_pane_g3

0x0001,

0xf93f,	// (0x0005a1d2) cset_list_set_pane_g_ParamLimits

0xf93f,	// (0x0005a1d2) cset_list_set_pane_g

0x92a5,	// (0x00053b38) cset_list_set_pane_t1_ParamLimits

0x92a5,	// (0x00053b38) cset_list_set_pane_t1

0x3ea4,	// (0x0004e737) list_highlight_pane_cp021_ParamLimits

0x3ea4,	// (0x0004e737) list_highlight_pane_cp021

0xcc0d,	// (0x000574a0) cset_slider_pane_g1

0xcc1f,	// (0x000574b2) cset_slider_pane_g2

0xcc16,	// (0x000574a9) cset_slider_pane_g3

0x0002,

0xf944,	// (0x0005a1d7) cset_slider_pane_g

0x92ba,	// (0x00053b4d) aid_area_touch_cam4_zoom

0x92c2,	// (0x00053b55) cam4_zoom_cont_pane

0x92ca,	// (0x00053b5d) cam4_zoom_pane_g1

0x92d2,	// (0x00053b65) cam4_zoom_pane_g2

0x92da,	// (0x00053b6d) cam4_zoom_pane_g3

0x0002,

0xf94b,	// (0x0005a1de) cam4_zoom_pane_g

0x92e2,	// (0x00053b75) cam4_zoom_cont_pane_g1

0x92eb,	// (0x00053b7e) cam4_zoom_cont_pane_g2

0x92f4,	// (0x00053b87) cam4_zoom_cont_pane_g3

0x0002,

0xf952,	// (0x0005a1e5) cam4_zoom_cont_pane_g

0x86b0,	// (0x00052f43) call4_image_pane_ParamLimits

0x86b0,	// (0x00052f43) call4_image_pane

0x870f,	// (0x00052fa2) call4_windows_conf_pane_ParamLimits

0x8752,	// (0x00052fe5) popup_call4_audio_in_window_ParamLimits

0x8752,	// (0x00052fe5) popup_call4_audio_in_window

0x347f,	// (0x0004dd12) bg_popup_call2_act_pane_cp02

0xeab8,	// (0x0005934b) call4_list_conf_pane

0x4b67,	// (0x0004f3fa) call4_image_pane_g1

0x4b67,	// (0x0004f3fa) call4_image_pane_g2

0x0001,

0xf3c3,	// (0x00059c56) call4_image_pane_g

0xed30,	// (0x000595c3) list_single_graphic_popup_conf4_pane_ParamLimits

0xed30,	// (0x000595c3) list_single_graphic_popup_conf4_pane

0x347f,	// (0x0004dd12) list_highlight_pane_cp022

0xed43,	// (0x000595d6) list_single_graphic_popup_conf4_pane_g1

0xc81e,	// (0x000570b1) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf959,	// (0x0005a1ec) list_single_graphic_popup_conf4_pane_g

0xed4b,	// (0x000595de) list_single_graphic_popup_conf4_pane_t1

0x4dcd,	// (0x0004f660) popup_vtel_slider_window_ParamLimits

0x4dcd,	// (0x0004f660) popup_vtel_slider_window

0xea9a,	// (0x0005932d) dialer2_ne_pane_t2_ParamLimits

0xea9a,	// (0x0005932d) dialer2_ne_pane_t2

0x0001,

0xf83a,	// (0x0005a0cd) dialer2_ne_pane_t_ParamLimits

0xf83a,	// (0x0005a0cd) dialer2_ne_pane_t

0x3ea4,	// (0x0004e737) bg_popup_sub_pane_cp010_ParamLimits

0x3ea4,	// (0x0004e737) bg_popup_sub_pane_cp010

0x92fd,	// (0x00053b90) popup_vtel_slider_window_g1_ParamLimits

0x92fd,	// (0x00053b90) popup_vtel_slider_window_g1

0x9309,	// (0x00053b9c) popup_vtel_slider_window_g2_ParamLimits

0x9309,	// (0x00053b9c) popup_vtel_slider_window_g2

0x0003,

0xf95e,	// (0x0005a1f1) popup_vtel_slider_window_g_ParamLimits

0xf95e,	// (0x0005a1f1) popup_vtel_slider_window_g

0x9351,	// (0x00053be4) vtel_slider_pane_ParamLimits

0x9351,	// (0x00053be4) vtel_slider_pane

0x9360,	// (0x00053bf3) vtel_slider_pane_g1_ParamLimits

0x9360,	// (0x00053bf3) vtel_slider_pane_g1

0x936d,	// (0x00053c00) vtel_slider_pane_g2_ParamLimits

0x936d,	// (0x00053c00) vtel_slider_pane_g2

0x937a,	// (0x00053c0d) vtel_slider_pane_g3_ParamLimits

0x937a,	// (0x00053c0d) vtel_slider_pane_g3

0x9360,	// (0x00053bf3) vtel_slider_pane_g4_ParamLimits

0x9360,	// (0x00053bf3) vtel_slider_pane_g4

0x9387,	// (0x00053c1a) vtel_slider_pane_g5_ParamLimits

0x9387,	// (0x00053c1a) vtel_slider_pane_g5

0x0004,

0xf967,	// (0x0005a1fa) vtel_slider_pane_g_ParamLimits

0xf967,	// (0x0005a1fa) vtel_slider_pane_g

0x6ff5,	// (0x00051888) main_gallery2_pane

0x8ad4,	// (0x00053367) aid_size_row_itut2_dropdow_list_ParamLimits

0x8ad4,	// (0x00053367) aid_size_row_itut2_dropdow_list

0x8b42,	// (0x000533d5) grid_vitu2_function_top_pane_ParamLimits

0x8b42,	// (0x000533d5) grid_vitu2_function_top_pane

0x8b9c,	// (0x0005342f) popup_vitu2_dropdown_list_window_ParamLimits

0x8b9c,	// (0x0005342f) popup_vitu2_dropdown_list_window

0x8bba,	// (0x0005344d) popup_vitu2_match_list_window

0x9394,	// (0x00053c27) cell_vitu2_function_top_pane_ParamLimits

0x9394,	// (0x00053c27) cell_vitu2_function_top_pane

0x93ae,	// (0x00053c41) cell_vitu2_function_top_pane_cp01_ParamLimits

0x93ae,	// (0x00053c41) cell_vitu2_function_top_pane_cp01

0x93ca,	// (0x00053c5d) cell_vitu2_function_top_wide_pane_ParamLimits

0x93ca,	// (0x00053c5d) cell_vitu2_function_top_wide_pane

0x6ff5,	// (0x00051888) bg_button_pane_cp012

0x93e8,	// (0x00053c7b) cell_vitu2_function_top_pane_g1

0x93fc,	// (0x00053c8f) bg_button_pane_cp013_ParamLimits

0x93fc,	// (0x00053c8f) bg_button_pane_cp013

0x9418,	// (0x00053cab) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9418,	// (0x00053cab) cell_vitu2_function_top_wide_pane_g1

0x3739,	// (0x0004dfcc) bg_popup_sub_pane_cp20

0x9430,	// (0x00053cc3) list_vitu2_match_list_pane

0xeb33,	// (0x000593c6) bg_popup_sub_pane_cp20_g1

0xeb3b,	// (0x000593ce) bg_popup_sub_pane_cp20_g2

0x52f5,	// (0x0004fb88) bg_popup_sub_pane_cp20_g3

0xeb43,	// (0x000593d6) bg_popup_sub_pane_cp20_g4

0x52d5,	// (0x0004fb68) bg_popup_sub_pane_cp20_g5

0xed61,	// (0x000595f4) bg_popup_sub_pane_cp20_g6

0xeb53,	// (0x000593e6) bg_popup_sub_pane_cp20_g7

0xeb5b,	// (0x000593ee) bg_popup_sub_pane_cp20_g8

0xeb63,	// (0x000593f6) bg_popup_sub_pane_cp20_g9

0x0008,

0xf972,	// (0x0005a205) bg_popup_sub_pane_cp20_g

0x9448,	// (0x00053cdb) list_vitu2_match_list_item_pane_ParamLimits

0x9448,	// (0x00053cdb) list_vitu2_match_list_item_pane

0x945a,	// (0x00053ced) list_vitu2_match_list_item_pane_t1

0x3753,	// (0x0004dfe6) bg_popup_sub_pane_cp21

0x49a9,	// (0x0004f23c) grid_vitu2_dropdown_list_pane

0x9468,	// (0x00053cfb) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9468,	// (0x00053cfb) cell_vitu2_dropdown_list_char_pane

0x9488,	// (0x00053d1b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9488,	// (0x00053d1b) cell_vitu2_dropdown_list_ctrl_pane

0xed69,	// (0x000595fc) cell_vitu2_dropdown_list_char_pane_g1

0xed72,	// (0x00059605) cell_vitu2_dropdown_list_char_pane_g2

0xed7b,	// (0x0005960e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf985,	// (0x0005a218) cell_vitu2_dropdown_list_char_pane_g

0x94b0,	// (0x00053d43) cell_vitu2_dropdown_list_char_pane_t1

0x94be,	// (0x00053d51) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x94be,	// (0x00053d51) cell_vitu2_dropdown_list_ctrl_pane_g1

0x94cb,	// (0x00053d5e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x94cb,	// (0x00053d5e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x94d8,	// (0x00053d6b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x94d8,	// (0x00053d6b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x94e5,	// (0x00053d78) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x94e5,	// (0x00053d78) cell_vitu2_dropdown_list_ctrl_pane_g4

0xedfc,	// (0x0005968f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xedfc,	// (0x0005968f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf98c,	// (0x0005a21f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf98c,	// (0x0005a21f) cell_vitu2_dropdown_list_ctrl_pane_g

0x9501,	// (0x00053d94) aid_size_cell_gallery2_ParamLimits

0x9501,	// (0x00053d94) aid_size_cell_gallery2

0x951b,	// (0x00053dae) grid_gallery2_pane_ParamLimits

0x951b,	// (0x00053dae) grid_gallery2_pane

0x9532,	// (0x00053dc5) scroll_pane_cp029_ParamLimits

0x9532,	// (0x00053dc5) scroll_pane_cp029

0x9542,	// (0x00053dd5) cell_gallery2_pane_ParamLimits

0x9542,	// (0x00053dd5) cell_gallery2_pane

0xee0a,	// (0x0005969d) cell_gallery2_pane_g2

0x9597,	// (0x00053e2a) cell_gallery2_pane_g3

0xee12,	// (0x000596a5) cell_gallery2_pane_g4

0xee1a,	// (0x000596ad) cell_gallery2_pane_g5

0x49a9,	// (0x0004f23c) grid_highlight_pane_cp10

0x8bba,	// (0x0005344d) popup_vitu2_match_list_window_ParamLimits

0x8bcc,	// (0x0005345f) popup_vitu2_query_window_ParamLimits

0x8bcc,	// (0x0005345f) popup_vitu2_query_window

0x3753,	// (0x0004dfe6) bg_vitu2_candi_button_pane

0xed69,	// (0x000595fc) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xed72,	// (0x00059605) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xed7b,	// (0x0005960e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x959f,	// (0x00053e32) bg_button_pane_cp015

0x95b4,	// (0x00053e47) bg_button_pane_cp016

0x95c0,	// (0x00053e53) bg_button_pane_cp017

0xde39,	// (0x000586cc) bg_popup_sub_pane_cp22

0xee22,	// (0x000596b5) popup_vitu2_query_window_g1

0x9600,	// (0x00053e93) popup_vitu2_query_window_g2

0x0002,

0xf997,	// (0x0005a22a) popup_vitu2_query_window_g

0x9624,	// (0x00053eb7) popup_vitu2_query_window_t1_ParamLimits

0x9624,	// (0x00053eb7) popup_vitu2_query_window_t1

0x9657,	// (0x00053eea) popup_vitu2_query_window_t2_ParamLimits

0x9657,	// (0x00053eea) popup_vitu2_query_window_t2

0x9669,	// (0x00053efc) popup_vitu2_query_window_t3_ParamLimits

0x9669,	// (0x00053efc) popup_vitu2_query_window_t3

0x9691,	// (0x00053f24) popup_vitu2_query_window_t4_ParamLimits

0x9691,	// (0x00053f24) popup_vitu2_query_window_t4

0x96a5,	// (0x00053f38) popup_vitu2_query_window_t5_ParamLimits

0x96a5,	// (0x00053f38) popup_vitu2_query_window_t5

0x0006,

0xf99e,	// (0x0005a231) popup_vitu2_query_window_t_ParamLimits

0xf99e,	// (0x0005a231) popup_vitu2_query_window_t

0xec35,	// (0x000594c8) main_cset_text_pane

0x8fc2,	// (0x00053855) aid_area_touch_slider_ParamLimits

0x8fde,	// (0x00053871) cset_slider_pane_ParamLimits

0x9001,	// (0x00053894) main_cset_slider_pane_g1_ParamLimits

0x9016,	// (0x000538a9) main_cset_slider_pane_g2_ParamLimits

0xec56,	// (0x000594e9) main_cset_slider_pane_g3_ParamLimits

0xec56,	// (0x000594e9) main_cset_slider_pane_g3

0x902b,	// (0x000538be) main_cset_slider_pane_g4_ParamLimits

0x902b,	// (0x000538be) main_cset_slider_pane_g4

0x903a,	// (0x000538cd) main_cset_slider_pane_g5_ParamLimits

0x903a,	// (0x000538cd) main_cset_slider_pane_g5

0x9048,	// (0x000538db) main_cset_slider_pane_g6_ParamLimits

0x9048,	// (0x000538db) main_cset_slider_pane_g6

0xf8fb,	// (0x0005a18e) main_cset_slider_pane_g_ParamLimits

0xec86,	// (0x00059519) main_cset_slider_pane_t1_ParamLimits

0x90dc,	// (0x0005396f) main_cset_slider_pane_t2_ParamLimits

0x90f6,	// (0x00053989) main_cset_slider_pane_t3_ParamLimits

0x9110,	// (0x000539a3) main_cset_slider_pane_t4_ParamLimits

0x912e,	// (0x000539c1) main_cset_slider_pane_t5_ParamLimits

0x914c,	// (0x000539df) main_cset_slider_pane_t6_ParamLimits

0x9163,	// (0x000539f6) main_cset_slider_pane_t7_ParamLimits

0x9191,	// (0x00053a24) main_cset_slider_pane_t8_ParamLimits

0x9191,	// (0x00053a24) main_cset_slider_pane_t8

0x91b9,	// (0x00053a4c) main_cset_slider_pane_t9_ParamLimits

0x91b9,	// (0x00053a4c) main_cset_slider_pane_t9

0x91e1,	// (0x00053a74) main_cset_slider_pane_t10_ParamLimits

0x91e1,	// (0x00053a74) main_cset_slider_pane_t10

0x9209,	// (0x00053a9c) main_cset_slider_pane_t11_ParamLimits

0x9209,	// (0x00053a9c) main_cset_slider_pane_t11

0x9233,	// (0x00053ac6) main_cset_slider_pane_t12_ParamLimits

0x9233,	// (0x00053ac6) main_cset_slider_pane_t12

0x9252,	// (0x00053ae5) main_cset_slider_pane_t13_ParamLimits

0x9252,	// (0x00053ae5) main_cset_slider_pane_t13

0xf920,	// (0x0005a1b3) main_cset_slider_pane_t_ParamLimits

0x347f,	// (0x0004dd12) bg_popup_sub_pane_cp011

0xee2e,	// (0x000596c1) main_cset_text_pane_g1

0xee36,	// (0x000596c9) main_cset_text_pane_t1

0xee44,	// (0x000596d7) main_cset_text_pane_t2

0xee52,	// (0x000596e5) main_cset_text_pane_t3

0xee60,	// (0x000596f3) main_cset_text_pane_t4

0xee6e,	// (0x00059701) main_cset_text_pane_t5

0xee7c,	// (0x0005970f) main_cset_text_pane_t6

0xee8a,	// (0x0005971d) main_cset_text_pane_t7

0x0006,

0xf9ad,	// (0x0005a240) main_cset_text_pane_t

0x3753,	// (0x0004dfe6) main_cam4_burst_pane

0x3753,	// (0x0004dfe6) main_cam5_pane

0x8f0a,	// (0x0005379d) bg_button_pane_cp019

0x8f13,	// (0x000537a6) bg_button_pane_cp020

0xec62,	// (0x000594f5) main_cset_slider_pane_g7_ParamLimits

0xec62,	// (0x000594f5) main_cset_slider_pane_g7

0xec6e,	// (0x00059501) main_cset_slider_pane_g8_ParamLimits

0xec6e,	// (0x00059501) main_cset_slider_pane_g8

0x905c,	// (0x000538ef) main_cset_slider_pane_g9_ParamLimits

0x905c,	// (0x000538ef) main_cset_slider_pane_g9

0x9068,	// (0x000538fb) main_cset_slider_pane_g10_ParamLimits

0x9068,	// (0x000538fb) main_cset_slider_pane_g10

0x9074,	// (0x00053907) main_cset_slider_pane_g11_ParamLimits

0x9074,	// (0x00053907) main_cset_slider_pane_g11

0x9080,	// (0x00053913) main_cset_slider_pane_g12_ParamLimits

0x9080,	// (0x00053913) main_cset_slider_pane_g12

0x908c,	// (0x0005391f) main_cset_slider_pane_g13_ParamLimits

0x908c,	// (0x0005391f) main_cset_slider_pane_g13

0x909a,	// (0x0005392d) main_cset_slider_pane_g14_ParamLimits

0x909a,	// (0x0005392d) main_cset_slider_pane_g14

0x90a8,	// (0x0005393b) main_cset_slider_pane_g15_ParamLimits

0x90a8,	// (0x0005393b) main_cset_slider_pane_g15

0xecae,	// (0x00059541) main_cset_slider_pane_t14_ParamLimits

0xecae,	// (0x00059541) main_cset_slider_pane_t14

0xece7,	// (0x0005957a) main_cset_slider_pane_t15_ParamLimits

0xece7,	// (0x0005957a) main_cset_slider_pane_t15

0x970f,	// (0x00053fa2) aid_cam4_burst_size_cell_ParamLimits

0x970f,	// (0x00053fa2) aid_cam4_burst_size_cell

0x972b,	// (0x00053fbe) grid_cam4_burst_pane_ParamLimits

0x972b,	// (0x00053fbe) grid_cam4_burst_pane

0x975b,	// (0x00053fee) linegrid_cam4_burst_pane_ParamLimits

0x975b,	// (0x00053fee) linegrid_cam4_burst_pane

0x977b,	// (0x0005400e) scroll_pane_cp30_ParamLimits

0x977b,	// (0x0005400e) scroll_pane_cp30

0x9787,	// (0x0005401a) cell_cam4_burst_pane_ParamLimits

0x9787,	// (0x0005401a) cell_cam4_burst_pane

0xee98,	// (0x0005972b) linegrid_cam4_burst_pane_g1_ParamLimits

0xee98,	// (0x0005972b) linegrid_cam4_burst_pane_g1

0x97c3,	// (0x00054056) linegrid_cam4_burst_pane_g2_ParamLimits

0x97c3,	// (0x00054056) linegrid_cam4_burst_pane_g2

0xeea5,	// (0x00059738) linegrid_cam4_burst_pane_g3_ParamLimits

0xeea5,	// (0x00059738) linegrid_cam4_burst_pane_g3

0x0002,

0xf9bc,	// (0x0005a24f) linegrid_cam4_burst_pane_g_ParamLimits

0xf9bc,	// (0x0005a24f) linegrid_cam4_burst_pane_g

0x97d4,	// (0x00054067) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x97d4,	// (0x00054067) linegrid_cam4_burst_pane_g3_copy1

0xeeb2,	// (0x00059745) linegrid_cam4_burst_pane_g4_ParamLimits

0xeeb2,	// (0x00059745) linegrid_cam4_burst_pane_g4

0x97ee,	// (0x00054081) linegrid_cam4_burst_pane_g5_ParamLimits

0x97ee,	// (0x00054081) linegrid_cam4_burst_pane_g5

0x97ff,	// (0x00054092) linegrid_cam4_burst_pane_g6_ParamLimits

0x97ff,	// (0x00054092) linegrid_cam4_burst_pane_g6

0xeebf,	// (0x00059752) linegrid_cam4_burst_pane_g7_ParamLimits

0xeebf,	// (0x00059752) linegrid_cam4_burst_pane_g7

0x9810,	// (0x000540a3) cell_cam4_burst_pane_g1

0xeed8,	// (0x0005976b) main_cam5_pane_t1_ParamLimits

0xeed8,	// (0x0005976b) main_cam5_pane_t1

0xeeea,	// (0x0005977d) main_cam5_pane_t2_ParamLimits

0xeeea,	// (0x0005977d) main_cam5_pane_t2

0xeefc,	// (0x0005978f) main_cam5_pane_t3_ParamLimits

0xeefc,	// (0x0005978f) main_cam5_pane_t3

0xef0e,	// (0x000597a1) main_cam5_pane_t4_ParamLimits

0xef0e,	// (0x000597a1) main_cam5_pane_t4

0xef26,	// (0x000597b9) main_cam5_pane_t5_ParamLimits

0xef26,	// (0x000597b9) main_cam5_pane_t5

0xef3a,	// (0x000597cd) main_cam5_pane_t6_ParamLimits

0xef3a,	// (0x000597cd) main_cam5_pane_t6

0xef4e,	// (0x000597e1) main_cam5_pane_t7_ParamLimits

0xef4e,	// (0x000597e1) main_cam5_pane_t7

0xef60,	// (0x000597f3) main_cam5_pane_t8_ParamLimits

0xef60,	// (0x000597f3) main_cam5_pane_t8

0xef7c,	// (0x0005980f) main_cam5_pane_t9_ParamLimits

0xef7c,	// (0x0005980f) main_cam5_pane_t9

0xef8e,	// (0x00059821) main_cam5_pane_t10_ParamLimits

0xef8e,	// (0x00059821) main_cam5_pane_t10

0xefa0,	// (0x00059833) main_cam5_pane_t11_ParamLimits

0xefa0,	// (0x00059833) main_cam5_pane_t11

0xefb2,	// (0x00059845) main_cam5_pane_t12_ParamLimits

0xefb2,	// (0x00059845) main_cam5_pane_t12

0xefc7,	// (0x0005985a) main_cam5_pane_t13_ParamLimits

0xefc7,	// (0x0005985a) main_cam5_pane_t13

0x000c,

0xf9c8,	// (0x0005a25b) main_cam5_pane_t_ParamLimits

0xf9c8,	// (0x0005a25b) main_cam5_pane_t

0x36f8,	// (0x0004df8b) popup_scut_keymap_window_ParamLimits

0x36f8,	// (0x0004df8b) popup_scut_keymap_window

0x9823,	// (0x000540b6) aid_size_cell_brow_shortcut

0x49a9,	// (0x0004f23c) bg_popup_window_pane_cp010

0x982f,	// (0x000540c2) grid_scut_pane

0x983b,	// (0x000540ce) cell_scut_pane_ParamLimits

0x983b,	// (0x000540ce) cell_scut_pane

0x9852,	// (0x000540e5) cell_scut_pane_g1

0xefe4,	// (0x00059877) cell_scut_pane_t1

0xeff3,	// (0x00059886) cell_scut_pane_t2

0x985b,	// (0x000540ee) cell_scut_pane_t3

0x0002,

0xf9e3,	// (0x0005a276) cell_scut_pane_t

0x77d0,	// (0x00052063) main_mup3_pane_g8_ParamLimits

0x77d0,	// (0x00052063) main_mup3_pane_g8

0x8ae2,	// (0x00053375) area_vitu2_query_pane_ParamLimits

0x8ae2,	// (0x00053375) area_vitu2_query_pane

0x95cc,	// (0x00053e5f) input_focus_pane_cp08

0xf002,	// (0x00059895) area_vitu2_query_pane_g1

0x9869,	// (0x000540fc) area_vitu2_query_pane_g2

0x0001,

0xf9ea,	// (0x0005a27d) area_vitu2_query_pane_g

0x987a,	// (0x0005410d) area_vitu2_query_pane_t1_ParamLimits

0x987a,	// (0x0005410d) area_vitu2_query_pane_t1

0x988e,	// (0x00054121) area_vitu2_query_pane_t2_ParamLimits

0x988e,	// (0x00054121) area_vitu2_query_pane_t2

0x98a2,	// (0x00054135) area_vitu2_query_pane_t3_ParamLimits

0x98a2,	// (0x00054135) area_vitu2_query_pane_t3

0x098c,	// (0x0004b21f) area_vitu2_query_pane_t4_ParamLimits

0x098c,	// (0x0004b21f) area_vitu2_query_pane_t4

0x09b4,	// (0x0004b247) area_vitu2_query_pane_t5_ParamLimits

0x09b4,	// (0x0004b247) area_vitu2_query_pane_t5

0x09dc,	// (0x0004b26f) area_vitu2_query_pane_t6_ParamLimits

0x09dc,	// (0x0004b26f) area_vitu2_query_pane_t6

0x0006,

0xf9ef,	// (0x0005a282) area_vitu2_query_pane_t_ParamLimits

0xf9ef,	// (0x0005a282) area_vitu2_query_pane_t

0x95b4,	// (0x00053e47) bg_button_pane_cp018

0x98ca,	// (0x0005415d) bg_button_pane_cp021

0x98d6,	// (0x00054169) bg_button_pane_cp022

0x98f9,	// (0x0005418c) input_focus_pane_cp09

0xc92d,	// (0x000571c0) aid_size_touch_mv_arrow_left

0xc958,	// (0x000571eb) aid_size_touch_mv_arrow_right

0x90c0,	// (0x00053953) main_cset_slider_pane_g16_ParamLimits

0x90c0,	// (0x00053953) main_cset_slider_pane_g16

0x90ce,	// (0x00053961) main_cset_slider_pane_g17_ParamLimits

0x90ce,	// (0x00053961) main_cset_slider_pane_g17

0x9810,	// (0x000540a3) cell_cam4_burst_pane_g1_ParamLimits

0x347f,	// (0x0004dd12) compa_mode_pane

0x9315,	// (0x00053ba8) popup_vtel_slider_window_g3_ParamLimits

0x9315,	// (0x00053ba8) popup_vtel_slider_window_g3

0x9329,	// (0x00053bbc) popup_vtel_slider_window_g4_ParamLimits

0x9329,	// (0x00053bbc) popup_vtel_slider_window_g4

0x933d,	// (0x00053bd0) popup_vtel_slider_window_t1_ParamLimits

0x933d,	// (0x00053bd0) popup_vtel_slider_window_t1

0x3753,	// (0x0004dfe6) main_cl_pane

0x708f,	// (0x00051922) popup_imed_adjust2_window_ParamLimits

0xde39,	// (0x000586cc) bg_tb_trans_pane_cp05_ParamLimits

0xe75f,	// (0x00058ff2) popup_imed_adjust2_window_g1_ParamLimits

0xe76e,	// (0x00059001) popup_imed_adjust2_window_g2_ParamLimits

0xe76e,	// (0x00059001) popup_imed_adjust2_window_g2

0xe77a,	// (0x0005900d) popup_imed_adjust2_window_g3_ParamLimits

0xe77a,	// (0x0005900d) popup_imed_adjust2_window_g3

0x0002,

0xf765,	// (0x00059ff8) popup_imed_adjust2_window_g_ParamLimits

0xf765,	// (0x00059ff8) popup_imed_adjust2_window_g

0xe786,	// (0x00059019) popup_imed_adjust2_window_t1_ParamLimits

0xe79e,	// (0x00059031) slider_imed_adjust_pane_ParamLimits

0xe7b2,	// (0x00059045) slider_imed_adjust_pane_g1_ParamLimits

0xe7c2,	// (0x00059055) slider_imed_adjust_pane_g2_ParamLimits

0xe7d2,	// (0x00059065) slider_imed_adjust_pane_g3_ParamLimits

0xe7e3,	// (0x00059076) slider_imed_adjust_pane_g4_ParamLimits

0xf76c,	// (0x00059fff) slider_imed_adjust_pane_g_ParamLimits

0x8833,	// (0x000530c6) aid_touch_area_cam4_ParamLimits

0x8833,	// (0x000530c6) aid_touch_area_cam4

0x8843,	// (0x000530d6) battery_pane_cp01

0x88ca,	// (0x0005315d) main_camera4_pane_g6_ParamLimits

0x88ca,	// (0x0005315d) main_camera4_pane_g6

0x88e8,	// (0x0005317b) main_camera4_pane_t2_ParamLimits

0x88e8,	// (0x0005317b) main_camera4_pane_t2

0x0001,

0xf86e,	// (0x0005a101) main_camera4_pane_t_ParamLimits

0xf86e,	// (0x0005a101) main_camera4_pane_t

0x8969,	// (0x000531fc) aid_touch_area_vid4_ParamLimits

0x8969,	// (0x000531fc) aid_touch_area_vid4

0x89a9,	// (0x0005323c) main_video4_pane_g5_ParamLimits

0x89a9,	// (0x0005323c) main_video4_pane_g5

0x89cd,	// (0x00053260) vid4_progress_pane_ParamLimits

0x89cd,	// (0x00053260) vid4_progress_pane

0xec7a,	// (0x0005950d) main_cset_slider_pane_g18_ParamLimits

0xec7a,	// (0x0005950d) main_cset_slider_pane_g18

0xeecc,	// (0x0005975f) cell_cam4_burst_pane_g2_ParamLimits

0xeecc,	// (0x0005975f) cell_cam4_burst_pane_g2

0x0001,

0xf9c3,	// (0x0005a256) cell_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x0005a256) cell_cam4_burst_pane_g

0x9909,	// (0x0005419c) bg_cl_pane_ParamLimits

0x9909,	// (0x0005419c) bg_cl_pane

0x9915,	// (0x000541a8) cl_header_pane_ParamLimits

0x9915,	// (0x000541a8) cl_header_pane

0x9921,	// (0x000541b4) cl_listscroll_pane_ParamLimits

0x9921,	// (0x000541b4) cl_listscroll_pane

0xf00e,	// (0x000598a1) bg_cl_pane_g1

0xf016,	// (0x000598a9) bg_cl_pane_g2

0xf01e,	// (0x000598b1) bg_cl_pane_g3

0xf026,	// (0x000598b9) bg_cl_pane_g4

0xf02e,	// (0x000598c1) bg_cl_pane_g5

0xf036,	// (0x000598c9) bg_cl_pane_g6

0xf03e,	// (0x000598d1) bg_cl_pane_g7

0xf046,	// (0x000598d9) bg_cl_pane_g8

0xf04e,	// (0x000598e1) bg_cl_pane_g9

0x0008,

0xf9fe,	// (0x0005a291) bg_cl_pane_g

0x992d,	// (0x000541c0) aid_height_cl_leading_ParamLimits

0x992d,	// (0x000541c0) aid_height_cl_leading

0x9939,	// (0x000541cc) aid_height_cl_text_ParamLimits

0x9939,	// (0x000541cc) aid_height_cl_text

0x3efd,	// (0x0004e790) bg_cl_header_pane_ParamLimits

0x3efd,	// (0x0004e790) bg_cl_header_pane

0x9951,	// (0x000541e4) cl_header_pane_g1_ParamLimits

0x9951,	// (0x000541e4) cl_header_pane_g1

0x995e,	// (0x000541f1) cl_header_pane_t1_ParamLimits

0x995e,	// (0x000541f1) cl_header_pane_t1

0xf056,	// (0x000598e9) cl_list_pane

0xec4d,	// (0x000594e0) hc_scroll_pane_cp01

0x52d5,	// (0x0004fb68) bg_cl_header_pane_g1

0xeb33,	// (0x000593c6) bg_cl_header_pane_g2

0x52f5,	// (0x0004fb88) bg_cl_header_pane_g3

0xeb43,	// (0x000593d6) bg_cl_header_pane_g4

0xeb3b,	// (0x000593ce) bg_cl_header_pane_g5

0xed61,	// (0x000595f4) bg_cl_header_pane_g6

0xeb5b,	// (0x000593ee) bg_cl_header_pane_g7

0xeb63,	// (0x000593f6) bg_cl_header_pane_g8

0xeb53,	// (0x000593e6) bg_cl_header_pane_g9

0x0008,

0xfa11,	// (0x0005a2a4) bg_cl_header_pane_g

0x9970,	// (0x00054203) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9970,	// (0x00054203) hc_cl_list_double_graphic_heading_pane

0x9984,	// (0x00054217) hc_cl_list_single_graphic_pane_ParamLimits

0x9984,	// (0x00054217) hc_cl_list_single_graphic_pane

0x999e,	// (0x00054231) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x999e,	// (0x00054231) hc_cl_list_single_graphic_pane_g1

0x99aa,	// (0x0005423d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x99aa,	// (0x0005423d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa24,	// (0x0005a2b7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa24,	// (0x0005a2b7) hc_cl_list_single_graphic_pane_g

0x99be,	// (0x00054251) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x99be,	// (0x00054251) hc_cl_list_single_graphic_pane_t1

0x999e,	// (0x00054231) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x999e,	// (0x00054231) hc_cl_list_double_graphic_heading_pane_g1

0x99d3,	// (0x00054266) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x99d3,	// (0x00054266) hc_cl_list_double_graphic_heading_pane_g2

0x99e7,	// (0x0005427a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x99e7,	// (0x0005427a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa29,	// (0x0005a2bc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa29,	// (0x0005a2bc) hc_cl_list_double_graphic_heading_pane_g

0x99fb,	// (0x0005428e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x99fb,	// (0x0005428e) hc_cl_list_double_graphic_heading_pane_t1

0x9a10,	// (0x000542a3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9a10,	// (0x000542a3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa30,	// (0x0005a2c3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa30,	// (0x0005a2c3) hc_cl_list_double_graphic_heading_pane_t

0x9a2d,	// (0x000542c0) vid4_progress_pane_g1

0x9a3d,	// (0x000542d0) vid4_progress_pane_g2

0x9a4d,	// (0x000542e0) vid4_progress_pane_g3

0x9a5f,	// (0x000542f2) vid4_progress_pane_g4

0x0004,

0xfa35,	// (0x0005a2c8) vid4_progress_pane_g

0x9a77,	// (0x0005430a) vid4_progress_pane_t1

0x9a8d,	// (0x00054320) vid4_progress_pane_t2

0x0002,

0xfa40,	// (0x0005a2d3) vid4_progress_pane_t

0x9ab8,	// (0x0005434b) wait_bar_pane_cp07

0xe055,	// (0x000588e8) blid_firmament_pane_ParamLimits

0xe098,	// (0x0005892b) popup_blid_sat_info2_window_g1

0xe0bc,	// (0x0005894f) popup_blid_sat_info2_window_t3

0xe0ca,	// (0x0005895d) popup_blid_sat_info2_window_t4

0xe0d8,	// (0x0005896b) popup_blid_sat_info2_window_t5

0xe0e6,	// (0x00058979) popup_blid_sat_info2_window_t6

0xe0f6,	// (0x00058989) popup_blid_sat_info2_window_t7

0xe104,	// (0x00058997) popup_blid_sat_info2_window_t8

0xe112,	// (0x000589a5) popup_blid_sat_info2_window_t9

0xe120,	// (0x000589b3) popup_blid_sat_info2_window_t10

0xe1e1,	// (0x00058a74) aid_firma_cardinal_ParamLimits

0xe1f5,	// (0x00058a88) blid_firmament_pane_t1_ParamLimits

0xe20c,	// (0x00058a9f) blid_firmament_pane_t2_ParamLimits

0xe223,	// (0x00058ab6) blid_firmament_pane_t3_ParamLimits

0xe23a,	// (0x00058acd) blid_firmament_pane_t4_ParamLimits

0xf65e,	// (0x00059ef1) blid_firmament_pane_t_ParamLimits

0xe251,	// (0x00058ae4) blid_sat_info_pane_ParamLimits

0x6ff5,	// (0x00051888) main_cam_set_pane_ParamLimits

0x7e9f,	// (0x00052732) aid_size_cell_colour_35_ParamLimits

0x7eb9,	// (0x0005274c) aid_size_cell_colour_112_ParamLimits

0x7ed0,	// (0x00052763) aid_size_cell_effect_ParamLimits

0x3ea4,	// (0x0004e737) bg_tb_trans_pane_cp02_ParamLimits

0xe682,	// (0x00058f15) heading_imed_pane_ParamLimits

0x7eea,	// (0x0005277d) listscroll_imed_pane_ParamLimits

0xd508,	// (0x00057d9b) popup_call2_audio_first_window_g5_ParamLimits

0xd508,	// (0x00057d9b) popup_call2_audio_first_window_g5

0x851b,	// (0x00052dae) aid_size_touch_image3_arrow_left_ParamLimits

0x851b,	// (0x00052dae) aid_size_touch_image3_arrow_left

0x8531,	// (0x00052dc4) aid_size_touch_image3_arrow_right_ParamLimits

0x8531,	// (0x00052dc4) aid_size_touch_image3_arrow_right

0x9aa2,	// (0x00054335) vid4_progress_pane_t3

0x806c,	// (0x000528ff) main_hwr_training_symbol_option_pane_ParamLimits

0x806c,	// (0x000528ff) main_hwr_training_symbol_option_pane

0xe98f,	// (0x00059222) popup_hwr_training_preview_window_ParamLimits

0xe98f,	// (0x00059222) popup_hwr_training_preview_window

0x80cd,	// (0x00052960) hwr_training_navi_pane_g5_ParamLimits

0x80cd,	// (0x00052960) hwr_training_navi_pane_g5

0xeb21,	// (0x000593b4) popup_char_count_window

0x3739,	// (0x0004dfcc) bg_popup_sub_pane_cp20_ParamLimits

0x9430,	// (0x00053cc3) list_vitu2_match_list_pane_ParamLimits

0x943c,	// (0x00053ccf) vitu2_page_scroll_pane_ParamLimits

0x943c,	// (0x00053ccf) vitu2_page_scroll_pane

0x0a4a,	// (0x0004b2dd) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0a4a,	// (0x0004b2dd) list_single_hwr_training_symbol_option_pane

0x0a5d,	// (0x0004b2f0) list_single_hwr_training_symbol_option_pane_g1

0x0a65,	// (0x0004b2f8) list_single_hwr_training_symbol_option_pane_t1

0x0a73,	// (0x0004b306) bg_button_pane_cp023

0x0a7c,	// (0x0004b30f) bg_button_pane_cp024

0x0aaf,	// (0x0004b342) vitu2_page_scroll_pane_g1

0x0ab7,	// (0x0004b34a) vitu2_page_scroll_pane_g2

0x0001,

0xfa47,	// (0x0005a2da) vitu2_page_scroll_pane_g

0x0abf,	// (0x0004b352) vitu2_page_scroll_pane_t1

0xe280,	// (0x00058b13) popup_char_count_window_g1

0x0ace,	// (0x0004b361) popup_char_count_window_g2

0xed84,	// (0x00059617) popup_char_count_window_g3

0x0002,

0xfa4c,	// (0x0005a2df) popup_char_count_window_g

0x0ad7,	// (0x0004b36a) popup_char_count_window_t1

0x3753,	// (0x0004dfe6) main_vded2_pane

0xe74b,	// (0x00058fde) aid_size_cell_imed_line

0xe755,	// (0x00058fe8) grid_imed_line_width_pane

0x8a39,	// (0x000532cc) vid4_indicators_pane_g4

0x0ae5,	// (0x0004b378) cell_imed_line_width_pane_ParamLimits

0x0ae5,	// (0x0004b378) cell_imed_line_width_pane

0x0af9,	// (0x0004b38c) cell_imed_line_width_pane_g1

0x0b02,	// (0x0004b395) cell_imed_line_width_pane_g2

0x0001,

0xfa53,	// (0x0005a2e6) cell_imed_line_width_pane_g

0x9add,	// (0x00054370) main_vded2_pane_g1_ParamLimits

0x9add,	// (0x00054370) main_vded2_pane_g1

0x9aea,	// (0x0005437d) main_vded2_pane_g2_ParamLimits

0x9aea,	// (0x0005437d) main_vded2_pane_g2

0x0001,

0xfa58,	// (0x0005a2eb) main_vded2_pane_g_ParamLimits

0xfa58,	// (0x0005a2eb) main_vded2_pane_g

0x9af8,	// (0x0005438b) vded2_slider_pane_ParamLimits

0x9af8,	// (0x0005438b) vded2_slider_pane

0x9b05,	// (0x00054398) aid_size_touch_vded2_end

0x9b0f,	// (0x000543a2) aid_size_touch_vded2_playhead

0x0b0a,	// (0x0004b39d) aid_size_touch_vded2_start

0x0b12,	// (0x0004b3a5) vded2_slider_bg_pane

0x0b1b,	// (0x0004b3ae) vded2_slider_pane_g1

0x0b24,	// (0x0004b3b7) vded2_slider_pane_g2

0x9b17,	// (0x000543aa) vded2_slider_pane_g3

0x0002,

0xfa5d,	// (0x0005a2f0) vded2_slider_pane_g

0x0b2c,	// (0x0004b3bf) vded2_slider_bg_pane_g1

0x0b35,	// (0x0004b3c8) vded2_slider_bg_pane_g2

0x0b3e,	// (0x0004b3d1) vded2_slider_bg_pane_g3

0x0002,

0xfa64,	// (0x0005a2f7) vded2_slider_bg_pane_g

0x6891,	// (0x00051124) aid_postcard_touch_down_pane_ParamLimits

0x6891,	// (0x00051124) aid_postcard_touch_down_pane

0x68a1,	// (0x00051134) aid_postcard_touch_up_pane_ParamLimits

0x68a1,	// (0x00051134) aid_postcard_touch_up_pane

0x3753,	// (0x0004dfe6) main_blid2_pane

0x701e,	// (0x000518b1) popup_blid2_search_window

0x347f,	// (0x0004dd12) blid2_gps_pane

0x347f,	// (0x0004dd12) blid2_navig_pane

0x347f,	// (0x0004dd12) blid2_search_pane

0x347f,	// (0x0004dd12) blid2_tripm_pane

0x9b20,	// (0x000543b3) blid2_search_pane_g1_ParamLimits

0x9b20,	// (0x000543b3) blid2_search_pane_g1

0x9b30,	// (0x000543c3) blid2_search_pane_t1_ParamLimits

0x9b30,	// (0x000543c3) blid2_search_pane_t1

0x9b42,	// (0x000543d5) aid_size_cell_blid2_gps_ParamLimits

0x9b42,	// (0x000543d5) aid_size_cell_blid2_gps

0x9b52,	// (0x000543e5) blid2_gps_pane_g1_ParamLimits

0x9b52,	// (0x000543e5) blid2_gps_pane_g1

0x9b5e,	// (0x000543f1) grid_blid2_satellite_pane_ParamLimits

0x9b5e,	// (0x000543f1) grid_blid2_satellite_pane

0x9b6e,	// (0x00054401) blid2_navig_pane_g1_ParamLimits

0x9b6e,	// (0x00054401) blid2_navig_pane_g1

0x9b7a,	// (0x0005440d) blid2_navig_pane_t1_ParamLimits

0x9b7a,	// (0x0005440d) blid2_navig_pane_t1

0x9b8c,	// (0x0005441f) blid2_navig_pane_t2_ParamLimits

0x9b8c,	// (0x0005441f) blid2_navig_pane_t2

0x0001,

0xfa6b,	// (0x0005a2fe) blid2_navig_pane_t_ParamLimits

0xfa6b,	// (0x0005a2fe) blid2_navig_pane_t

0x9b9e,	// (0x00054431) blid2_navig_ring_pane_ParamLimits

0x9b9e,	// (0x00054431) blid2_navig_ring_pane

0x9bae,	// (0x00054441) blid2_speed_pane_ParamLimits

0x9bae,	// (0x00054441) blid2_speed_pane

0x9bba,	// (0x0005444d) blid2_tripm_pane_g1_ParamLimits

0x9bba,	// (0x0005444d) blid2_tripm_pane_g1

0x9bca,	// (0x0005445d) blid2_tripm_pane_g2_ParamLimits

0x9bca,	// (0x0005445d) blid2_tripm_pane_g2

0x9bd6,	// (0x00054469) blid2_tripm_pane_g3_ParamLimits

0x9bd6,	// (0x00054469) blid2_tripm_pane_g3

0x9be2,	// (0x00054475) blid2_tripm_pane_g4_ParamLimits

0x9be2,	// (0x00054475) blid2_tripm_pane_g4

0x9bee,	// (0x00054481) blid2_tripm_pane_g5_ParamLimits

0x9bee,	// (0x00054481) blid2_tripm_pane_g5

0x0005,

0xfa70,	// (0x0005a303) blid2_tripm_pane_g_ParamLimits

0xfa70,	// (0x0005a303) blid2_tripm_pane_g

0x9c0a,	// (0x0005449d) blid2_tripm_pane_t1_ParamLimits

0x9c0a,	// (0x0005449d) blid2_tripm_pane_t1

0x9c1e,	// (0x000544b1) blid2_tripm_pane_t2_ParamLimits

0x9c1e,	// (0x000544b1) blid2_tripm_pane_t2

0x9c30,	// (0x000544c3) blid2_tripm_pane_t3_ParamLimits

0x9c30,	// (0x000544c3) blid2_tripm_pane_t3

0x0003,

0xfa7d,	// (0x0005a310) blid2_tripm_pane_t_ParamLimits

0xfa7d,	// (0x0005a310) blid2_tripm_pane_t

0x9c62,	// (0x000544f5) cell_blid2_satellite_pane_ParamLimits

0x9c62,	// (0x000544f5) cell_blid2_satellite_pane

0x9c7c,	// (0x0005450f) cell_blid2_satellite_pane_g1

0x0b47,	// (0x0004b3da) cell_blid2_satellite_pane_t1

0x4b67,	// (0x0004f3fa) blid2_speed_pane_g1

0x0b55,	// (0x0004b3e8) blid2_speed_pane_t1

0x0b63,	// (0x0004b3f6) blid2_speed_pane_t2

0x0001,

0xfa86,	// (0x0005a319) blid2_speed_pane_t

0x4b67,	// (0x0004f3fa) blid2_navig_ring_pane_g1

0x9c85,	// (0x00054518) blid2_navig_ring_pane_g2

0x9c8d,	// (0x00054520) blid2_navig_ring_pane_g3

0x9c95,	// (0x00054528) blid2_navig_ring_pane_g4

0x9c9d,	// (0x00054530) blid2_navig_ring_pane_g5

0x0004,

0xfa8b,	// (0x0005a31e) blid2_navig_ring_pane_g

0x347f,	// (0x0004dd12) bg_popup_window_pane_cp011

0x0b71,	// (0x0004b404) popup_blid2_search_window_g1

0x0b79,	// (0x0004b40c) popup_blid2_search_window_t1

0x0b87,	// (0x0004b41a) popup_blid2_search_window_t2

0x0001,

0xfa96,	// (0x0005a329) popup_blid2_search_window_t

0x514a,	// (0x0004f9dd) main_browser_pane_g1

0x4106,	// (0x0004e999) main_browser_pane_ParamLimits

0x6ff5,	// (0x00051888) bg_button_pane_cp011_ParamLimits

0x8cdd,	// (0x00053570) cell_vitu2_function_pane_g1_ParamLimits

0xde39,	// (0x000586cc) bg_popup_sub_pane_cp22_ParamLimits

0x95cc,	// (0x00053e5f) input_focus_pane_cp08_ParamLimits

0x95e7,	// (0x00053e7a) popup_vitu2_query_button_pane_ParamLimits

0x95e7,	// (0x00053e7a) popup_vitu2_query_button_pane

0x95f6,	// (0x00053e89) popup_vitu2_query_input_button_pane

0xee22,	// (0x000596b5) popup_vitu2_query_window_g1_ParamLimits

0x9600,	// (0x00053e93) popup_vitu2_query_window_g2_ParamLimits

0xf997,	// (0x0005a22a) popup_vitu2_query_window_g_ParamLimits

0x347f,	// (0x0004dd12) bg_button_pane_cp026

0x9ca5,	// (0x00054538) popup_vitu2_query_input_button_pane_g1

0x347f,	// (0x0004dd12) bg_button_pane_cp025

0x0b95,	// (0x0004b428) popup_vitu2_query_button_pane_t1

0x74f1,	// (0x00051d84) main_mp3_pane_t6

0x7501,	// (0x00051d94) popup_slider_window_cp01

0x891e,	// (0x000531b1) cam4_battery_pane

0x89f8,	// (0x0005328b) cam4_battery_pane_cp02

0x9a25,	// (0x000542b8) cam4_battery_pane_cp01

0x9a25,	// (0x000542b8) cam4_battery_pane_cp03

0xedf2,	// (0x00059685) cam4_battery_pane_g1

0x4b67,	// (0x0004f3fa) cam4_battery_pane_g2

0x0001,

0xfa9b,	// (0x0005a32e) cam4_battery_pane_g

0xe12e,	// (0x000589c1) popup_blid_sat_info2_window_t11

0xc92d,	// (0x000571c0) aid_size_touch_mv_arrow_left_ParamLimits

0xc958,	// (0x000571eb) aid_size_touch_mv_arrow_right_ParamLimits

0xc9b6,	// (0x00057249) navi_pane_g1_ParamLimits

0xc9c2,	// (0x00057255) navi_pane_g2_ParamLimits

0xc9f0,	// (0x00057283) navi_pane_g3_ParamLimits

0xf35f,	// (0x00059bf2) navi_pane_g_ParamLimits

0x64d9,	// (0x00050d6c) navi_pane_mv_t1_ParamLimits

0x7ef6,	// (0x00052789) grid_imed_effect_pane_ParamLimits

0x4c7b,	// (0x0004f50e) aid_placing_vt_slider_lsc

0x4c93,	// (0x0004f526) aid_placing_vt_slider_prt

0x3ea4,	// (0x0004e737) bg_tb_trans_pane_cp01_ParamLimits

0xe3d5,	// (0x00058c68) popup_image_details_window_g1_ParamLimits

0xe3e8,	// (0x00058c7b) popup_image_details_window_g2_ParamLimits

0xe3fd,	// (0x00058c90) popup_image_details_window_g3_ParamLimits

0xe3fd,	// (0x00058c90) popup_image_details_window_g3

0xf69e,	// (0x00059f31) popup_image_details_window_g_ParamLimits

0xe411,	// (0x00058ca4) popup_image_details_window_t1_ParamLimits

0xe423,	// (0x00058cb6) popup_image_details_window_t2_ParamLimits

0xe43c,	// (0x00058ccf) popup_image_details_window_t3_ParamLimits

0xe450,	// (0x00058ce3) popup_image_details_window_t4_ParamLimits

0xe46b,	// (0x00058cfe) popup_image_details_window_t5_ParamLimits

0xf6a5,	// (0x00059f38) popup_image_details_window_t_ParamLimits

0x9945,	// (0x000541d8) cl_header_name_pane_ParamLimits

0x9945,	// (0x000541d8) cl_header_name_pane

0x9cad,	// (0x00054540) cl_header_name_pane_t1_ParamLimits

0x9cad,	// (0x00054540) cl_header_name_pane_t1

0x9cc4,	// (0x00054557) cl_header_name_pane_t2_ParamLimits

0x9cc4,	// (0x00054557) cl_header_name_pane_t2

0x9cee,	// (0x00054581) cl_header_name_pane_t3_ParamLimits

0x9cee,	// (0x00054581) cl_header_name_pane_t3

0x0002,

0xfaa0,	// (0x0005a333) cl_header_name_pane_t_ParamLimits

0xfaa0,	// (0x0005a333) cl_header_name_pane_t

0xca7f,	// (0x00057312) navi_pane_mv_g2_ParamLimits

0xeafb,	// (0x0005938e) field_vitu2_entry_pane_g1_ParamLimits

0xeb07,	// (0x0005939a) field_vitu2_entry_pane_g2_ParamLimits

0xeb13,	// (0x000593a6) field_vitu2_entry_pane_g3_ParamLimits

0xeb13,	// (0x000593a6) field_vitu2_entry_pane_g3

0xf8a0,	// (0x0005a133) field_vitu2_entry_pane_g_ParamLimits

0x8c6b,	// (0x000534fe) cell_vitu2_itu_pane_g1_ParamLimits

0x8c83,	// (0x00053516) cell_vitu2_itu_pane_g2_ParamLimits

0x8c83,	// (0x00053516) cell_vitu2_itu_pane_g2

0x0001,

0xf8ac,	// (0x0005a13f) cell_vitu2_itu_pane_g_ParamLimits

0xf8ac,	// (0x0005a13f) cell_vitu2_itu_pane_g

0x6ff5,	// (0x00051888) bg_vkb2_func_pane_cp05_ParamLimits

0x6ff5,	// (0x00051888) bg_vkb2_func_pane_cp05

0x6ff5,	// (0x00051888) bg_vkb2_func_pane_cp03

0x6ff5,	// (0x00051888) bg_vkb2_func_pane_cp04

0x6ff5,	// (0x00051888) bg_vkb2_func_pane_cp10_ParamLimits

0x6ff5,	// (0x00051888) bg_vkb2_func_pane_cp10

0x98e7,	// (0x0005417a) bg_vkb2_func_pane_cp08

0x95b4,	// (0x00053e47) bg_vkb2_func_pane_cp06

0x98ca,	// (0x0005415d) bg_vkb2_func_pane_cp07

0x0a85,	// (0x0004b318) bg_vkb2_func_pane_cp11_ParamLimits

0x0a85,	// (0x0004b318) bg_vkb2_func_pane_cp11

0x0a9a,	// (0x0004b32d) bg_vkb2_func_pane_cp12_ParamLimits

0x0a9a,	// (0x0004b32d) bg_vkb2_func_pane_cp12

0x347f,	// (0x0004dd12) bg_vkb2_func_pane_cp09

0xeb33,	// (0x000593c6) bg_vkb2_func_pane_g1

0x52f5,	// (0x0004fb88) bg_vkb2_func_pane_g2

0xeb3b,	// (0x000593ce) bg_vkb2_func_pane_g3

0xeb43,	// (0x000593d6) bg_vkb2_func_pane_g4

0xed61,	// (0x000595f4) bg_vkb2_func_pane_g5

0xeb5b,	// (0x000593ee) bg_vkb2_func_pane_g6

0xeb63,	// (0x000593f6) bg_vkb2_func_pane_g7

0xeb53,	// (0x000593e6) bg_vkb2_func_pane_g8

0x52d5,	// (0x0004fb68) bg_vkb2_func_pane_g9

0x0008,

0xfaa7,	// (0x0005a33a) bg_vkb2_func_pane_g

0x9bfc,	// (0x0005448f) blid2_tripm_pane_g6_ParamLimits

0x9bfc,	// (0x0005448f) blid2_tripm_pane_g6

0xea4d,	// (0x000592e0) mp4_progress_pane_g1

0x9c56,	// (0x000544e9) blid2_tripm_values_pane_ParamLimits

0x9c56,	// (0x000544e9) blid2_tripm_values_pane

0x9d13,	// (0x000545a6) blid2_tripm_values_pane_t1

0x9d21,	// (0x000545b4) blid2_tripm_values_pane_t2

0x9d2f,	// (0x000545c2) blid2_tripm_values_pane_t3

0x9d3d,	// (0x000545d0) blid2_tripm_values_pane_t4

0x9d4b,	// (0x000545de) blid2_tripm_values_pane_t5

0x9d59,	// (0x000545ec) blid2_tripm_values_pane_t6

0x9d67,	// (0x000545fa) blid2_tripm_values_pane_t7

0x9d75,	// (0x00054608) blid2_tripm_values_pane_t8

0x9d83,	// (0x00054616) blid2_tripm_values_pane_t9

0x0008,

0xfaba,	// (0x0005a34d) blid2_tripm_values_pane_t

0x4cc5,	// (0x0004f558) call_video_pane_t1_ParamLimits

0x4ce6,	// (0x0004f579) call_video_pane_t2_ParamLimits

0xf208,	// (0x00059a9b) call_video_pane_t_ParamLimits

0x67db,	// (0x0005106e) msg_header_pane_g1_ParamLimits

0xcc52,	// (0x000574e5) msg_header_pane_g2_ParamLimits

0xcc52,	// (0x000574e5) msg_header_pane_g2

0x0001,

0xf402,	// (0x00059c95) msg_header_pane_g_ParamLimits

0xf402,	// (0x00059c95) msg_header_pane_g

0x4106,	// (0x0004e999) main_clock2_pane_ParamLimits

0x7c70,	// (0x00052503) grid_clock2_toolbar_pane_ParamLimits

0x7c70,	// (0x00052503) grid_clock2_toolbar_pane

0x7c70,	// (0x00052503) listscroll_clock2_pane_ParamLimits

0x7c70,	// (0x00052503) listscroll_clock2_pane

0x7d20,	// (0x000525b3) main_clock2_pane_t3_ParamLimits

0x7d20,	// (0x000525b3) main_clock2_pane_t3

0x7d32,	// (0x000525c5) main_clock2_pane_t4_ParamLimits

0x7d32,	// (0x000525c5) main_clock2_pane_t4

0x0ba3,	// (0x0004b436) cell_clock2_toolbar_pane

0x0bab,	// (0x0004b43e) cell_clock2_toolbar_pane_cp01

0x0bab,	// (0x0004b43e) cell_clock2_toolbar_pane_cp02

0x0bb3,	// (0x0004b446) cell_clock2_toolbar_pane_cp03

0x0bbb,	// (0x0004b44e) list_clock2_pane

0xc8b2,	// (0x00057145) scroll_pane_cp10

0x0bc3,	// (0x0004b456) list_single_clock2_pane_ParamLimits

0x0bc3,	// (0x0004b456) list_single_clock2_pane

0x49a9,	// (0x0004f23c) list_highlight_pane_cp08

0x0bd0,	// (0x0004b463) list_single_clock2_pane_t1

0x0bde,	// (0x0004b471) list_single_clock2_pane_t2

0x0001,

0xfacd,	// (0x0005a360) list_single_clock2_pane_t

0x347f,	// (0x0004dd12) bg_button_pane_cp10

0x0bec,	// (0x0004b47f) cell_clock2_toolbar_pane_g1

0x67ff,	// (0x00051092) aid_main_viewer_pane_g1_ParamLimits

0x67ff,	// (0x00051092) aid_main_viewer_pane_g1

0x680b,	// (0x0005109e) aid_main_viewer_pane_g2_ParamLimits

0x680b,	// (0x0005109e) aid_main_viewer_pane_g2

0x6817,	// (0x000510aa) aid_main_viewer_pane_g3_ParamLimits

0x6817,	// (0x000510aa) aid_main_viewer_pane_g3

0x6828,	// (0x000510bb) aid_main_viewer_pane_g4_ParamLimits

0x6828,	// (0x000510bb) aid_main_viewer_pane_g4

0x0003,

0xf413,	// (0x00059ca6) aid_main_viewer_pane_g_ParamLimits

0xf413,	// (0x00059ca6) aid_main_viewer_pane_g

0x6fe8,	// (0x0005187b) main_calc_pane_ParamLimits

0x7003,	// (0x00051896) main_dialer2_pane_ParamLimits

0x3753,	// (0x0004dfe6) main_cam6_pane

0x3753,	// (0x0004dfe6) main_vid6_pane

0x7c7c,	// (0x0005250f) listscroll_gen_pane_cp06_ParamLimits

0x7c7c,	// (0x0005250f) listscroll_gen_pane_cp06

0x7d44,	// (0x000525d7) main_clock2_pane_t5_ParamLimits

0x7d44,	// (0x000525d7) main_clock2_pane_t5

0x7d91,	// (0x00052624) aid_call2_pane_cp10_ParamLimits

0x7da3,	// (0x00052636) aid_call_pane_cp10_ParamLimits

0xc921,	// (0x000571b4) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc921,	// (0x000571b4) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7db5,	// (0x00052648) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7db5,	// (0x00052648) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc921,	// (0x000571b4) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75a,	// (0x00059fed) popup_clock_analogue_window_cp10_g_ParamLimits

0x7dcb,	// (0x0005265e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x84c8,	// (0x00052d5b) cell_dialer2_keypad_pane_g2_ParamLimits

0x84c8,	// (0x00052d5b) cell_dialer2_keypad_pane_g2

0x0001,

0xf83f,	// (0x0005a0d2) cell_dialer2_keypad_pane_g_ParamLimits

0xf83f,	// (0x0005a0d2) cell_dialer2_keypad_pane_g

0x84e4,	// (0x00052d77) cell_dialer2_keypad_pane_t1

0x8faf,	// (0x00053842) main_cset_text2_pane_ParamLimits

0x8faf,	// (0x00053842) main_cset_text2_pane

0xf002,	// (0x00059895) area_vitu2_query_pane_g1_ParamLimits

0x9869,	// (0x000540fc) area_vitu2_query_pane_g2_ParamLimits

0xf9ea,	// (0x0005a27d) area_vitu2_query_pane_g_ParamLimits

0x0a04,	// (0x0004b297) area_vitu2_query_pane_t7_ParamLimits

0x0a04,	// (0x0004b297) area_vitu2_query_pane_t7

0x95b4,	// (0x00053e47) bg_button_pane_cp018_ParamLimits

0x98ca,	// (0x0005415d) bg_button_pane_cp021_ParamLimits

0x98d6,	// (0x00054169) bg_button_pane_cp022_ParamLimits

0x98e7,	// (0x0005417a) bg_vkb2_func_pane_cp08_ParamLimits

0x95b4,	// (0x00053e47) bg_vkb2_func_pane_cp06_ParamLimits

0x98ca,	// (0x0005415d) bg_vkb2_func_pane_cp07_ParamLimits

0x98f9,	// (0x0005418c) input_focus_pane_cp09_ParamLimits

0x9d91,	// (0x00054624) cam6_autofocus_pane_ParamLimits

0x9d91,	// (0x00054624) cam6_autofocus_pane

0x9db3,	// (0x00054646) cam6_image_uncrop_pane_ParamLimits

0x9db3,	// (0x00054646) cam6_image_uncrop_pane

0x9de0,	// (0x00054673) cam6_indi_pane_ParamLimits

0x9de0,	// (0x00054673) cam6_indi_pane

0x9dfa,	// (0x0005468d) cam6_mode_pane_ParamLimits

0x9dfa,	// (0x0005468d) cam6_mode_pane

0x9e0e,	// (0x000546a1) cam6_timer_pane_ParamLimits

0x9e0e,	// (0x000546a1) cam6_timer_pane

0x9e1f,	// (0x000546b2) cam6_zoom_pane_ParamLimits

0x9e1f,	// (0x000546b2) cam6_zoom_pane

0x9e37,	// (0x000546ca) cam6_mode_pane_g1_ParamLimits

0x9e37,	// (0x000546ca) cam6_mode_pane_g1

0x9e43,	// (0x000546d6) cam6_mode_pane_g2_ParamLimits

0x9e43,	// (0x000546d6) cam6_mode_pane_g2

0x9e4f,	// (0x000546e2) cam6_mode_pane_g3_ParamLimits

0x9e4f,	// (0x000546e2) cam6_mode_pane_g3

0x9e5b,	// (0x000546ee) cam6_mode_pane_g4_ParamLimits

0x9e5b,	// (0x000546ee) cam6_mode_pane_g4

0x0003,

0xfad2,	// (0x0005a365) cam6_mode_pane_g_ParamLimits

0xfad2,	// (0x0005a365) cam6_mode_pane_g

0x0491,	// (0x0004ad24) bg_tb_trans_pane_cp08_ParamLimits

0x0491,	// (0x0004ad24) bg_tb_trans_pane_cp08

0x0bf4,	// (0x0004b487) cam6_battery_pane_ParamLimits

0x0bf4,	// (0x0004b487) cam6_battery_pane

0x0c0a,	// (0x0004b49d) cam6_indi_pane_g1_ParamLimits

0x0c0a,	// (0x0004b49d) cam6_indi_pane_g1

0x0c1c,	// (0x0004b4af) cam6_indi_pane_g2_ParamLimits

0x0c1c,	// (0x0004b4af) cam6_indi_pane_g2

0x0c2e,	// (0x0004b4c1) cam6_indi_pane_g3_ParamLimits

0x0c2e,	// (0x0004b4c1) cam6_indi_pane_g3

0x0002,

0xfadb,	// (0x0005a36e) cam6_indi_pane_g_ParamLimits

0xfadb,	// (0x0005a36e) cam6_indi_pane_g

0x0c40,	// (0x0004b4d3) cam6_indi_pane_t1_ParamLimits

0x0c40,	// (0x0004b4d3) cam6_indi_pane_t1

0x8a74,	// (0x00053307) cam6_autofocus_pane_g1

0x8a6c,	// (0x000532ff) cam6_autofocus_pane_g2

0x8a84,	// (0x00053317) cam6_autofocus_pane_g3

0x8a7c,	// (0x0005330f) cam6_autofocus_pane_g4

0x0003,

0xfae2,	// (0x0005a375) cam6_autofocus_pane_g

0x0c66,	// (0x0004b4f9) cam6_timer_pane_g1

0x0c6e,	// (0x0004b501) cam6_timer_pane_t1

0x0c7c,	// (0x0004b50f) cam6_zoom_cont_pane

0x0c84,	// (0x0004b517) cam6_zoom_pane_g1

0x0c8c,	// (0x0004b51f) cam6_zoom_pane_g2

0x9e67,	// (0x000546fa) cam6_zoom_pane_g3

0x0002,

0xfaeb,	// (0x0005a37e) cam6_zoom_pane_g

0x4b67,	// (0x0004f3fa) cam6_battery_pane_g1

0x4b67,	// (0x0004f3fa) cam6_battery_pane_g2

0x0001,

0xf3c3,	// (0x00059c56) cam6_battery_pane_g

0x0c94,	// (0x0004b527) cam6_zoom_cont_pane_g1

0x0c9d,	// (0x0004b530) cam6_zoom_cont_pane_g2

0x0ca6,	// (0x0004b539) cam6_zoom_cont_pane_g3

0x0002,

0xfaf2,	// (0x0005a385) cam6_zoom_cont_pane_g

0x9e84,	// (0x00054717) cam6_mode_pane_cp_ParamLimits

0x9e84,	// (0x00054717) cam6_mode_pane_cp

0x9e98,	// (0x0005472b) cam6_zoom_pane_cp_ParamLimits

0x9e98,	// (0x0005472b) cam6_zoom_pane_cp

0x9eb0,	// (0x00054743) vid6_image_uncrop_cif_pane_ParamLimits

0x9eb0,	// (0x00054743) vid6_image_uncrop_cif_pane

0x9edc,	// (0x0005476f) vid6_image_uncrop_nhd_pane_ParamLimits

0x9edc,	// (0x0005476f) vid6_image_uncrop_nhd_pane

0x9ef9,	// (0x0005478c) vid6_image_uncrop_vga_pane_ParamLimits

0x9ef9,	// (0x0005478c) vid6_image_uncrop_vga_pane

0x9f18,	// (0x000547ab) vid6_image_uncrop_wvga_pane_ParamLimits

0x9f18,	// (0x000547ab) vid6_image_uncrop_wvga_pane

0x9f35,	// (0x000547c8) vid6_indi_pane_ParamLimits

0x9f35,	// (0x000547c8) vid6_indi_pane

0x0491,	// (0x0004ad24) bg_tb_trans_pane_cp09_ParamLimits

0x0491,	// (0x0004ad24) bg_tb_trans_pane_cp09

0x0cbe,	// (0x0004b551) cam6_battery_pane_cp_ParamLimits

0x0cbe,	// (0x0004b551) cam6_battery_pane_cp

0x0cca,	// (0x0004b55d) vid6_indi_pane_g1_ParamLimits

0x0cca,	// (0x0004b55d) vid6_indi_pane_g1

0x0cdc,	// (0x0004b56f) vid6_indi_pane_g2_ParamLimits

0x0cdc,	// (0x0004b56f) vid6_indi_pane_g2

0x0cee,	// (0x0004b581) vid6_indi_pane_g3_ParamLimits

0x0cee,	// (0x0004b581) vid6_indi_pane_g3

0x0d03,	// (0x0004b596) vid6_indi_pane_g4_ParamLimits

0x0d03,	// (0x0004b596) vid6_indi_pane_g4

0x0d18,	// (0x0004b5ab) vid6_indi_pane_g5_ParamLimits

0x0d18,	// (0x0004b5ab) vid6_indi_pane_g5

0x0004,

0xfaf9,	// (0x0005a38c) vid6_indi_pane_g_ParamLimits

0xfaf9,	// (0x0005a38c) vid6_indi_pane_g

0x0d32,	// (0x0004b5c5) vid6_indi_pane_t1_ParamLimits

0x0d32,	// (0x0004b5c5) vid6_indi_pane_t1

0x0d48,	// (0x0004b5db) vid6_indi_pane_t2_ParamLimits

0x0d48,	// (0x0004b5db) vid6_indi_pane_t2

0x0d70,	// (0x0004b603) vid6_indi_pane_t3_ParamLimits

0x0d70,	// (0x0004b603) vid6_indi_pane_t3

0x0d98,	// (0x0004b62b) vid6_indi_pane_t4_ParamLimits

0x0d98,	// (0x0004b62b) vid6_indi_pane_t4

0x0003,

0xfb04,	// (0x0005a397) vid6_indi_pane_t_ParamLimits

0xfb04,	// (0x0005a397) vid6_indi_pane_t

0x0dbc,	// (0x0004b64f) wait_bar_pane_cp08

0x9f58,	// (0x000547eb) main_cset_text2_pane_t1_ParamLimits

0x9f58,	// (0x000547eb) main_cset_text2_pane_t1

0x9e6f,	// (0x00054702) listscroll_gen_pane_cp06_t1_ParamLimits

0x9e6f,	// (0x00054702) listscroll_gen_pane_cp06_t1

0x3753,	// (0x0004dfe6) main_cam6_set_pane

0xedfc,	// (0x0005968f) bg_tb_trans_pane_cp06_ParamLimits

0x8926,	// (0x000531b9) cam4_indicators_pane_g1_ParamLimits

0x8937,	// (0x000531ca) cam4_indicators_pane_g2_ParamLimits

0xf87c,	// (0x0005a10f) cam4_indicators_pane_g_ParamLimits

0x894f,	// (0x000531e2) cam4_indicators_pane_t1_ParamLimits

0x6ff5,	// (0x00051888) bg_tb_trans_pane_cp07_ParamLimits

0x8a00,	// (0x00053293) vid4_indicators_pane_g1_ParamLimits

0x8a14,	// (0x000532a7) vid4_indicators_pane_g2_ParamLimits

0x8a28,	// (0x000532bb) vid4_indicators_pane_g3_ParamLimits

0x8a39,	// (0x000532cc) vid4_indicators_pane_g4_ParamLimits

0xf88e,	// (0x0005a121) vid4_indicators_pane_g_ParamLimits

0x8a55,	// (0x000532e8) vid4_indicators_pane_t1_ParamLimits

0x9a2d,	// (0x000542c0) vid4_progress_pane_g1_ParamLimits

0x9a3d,	// (0x000542d0) vid4_progress_pane_g2_ParamLimits

0x9a4d,	// (0x000542e0) vid4_progress_pane_g3_ParamLimits

0x9a5f,	// (0x000542f2) vid4_progress_pane_g4_ParamLimits

0xfa35,	// (0x0005a2c8) vid4_progress_pane_g_ParamLimits

0x9a77,	// (0x0005430a) vid4_progress_pane_t1_ParamLimits

0x9a8d,	// (0x00054320) vid4_progress_pane_t2_ParamLimits

0x9aa2,	// (0x00054335) vid4_progress_pane_t3_ParamLimits

0xfa40,	// (0x0005a2d3) vid4_progress_pane_t_ParamLimits

0x9ab8,	// (0x0005434b) wait_bar_pane_cp07_ParamLimits

0x9f8f,	// (0x00054822) main_cam6_set_pane_g2_ParamLimits

0x9f8f,	// (0x00054822) main_cam6_set_pane_g2

0x9f9b,	// (0x0005482e) main_cset6_listscroll_pane_ParamLimits

0x9f9b,	// (0x0005482e) main_cset6_listscroll_pane

0x9fc6,	// (0x00054859) main_cset6_slider_pane_ParamLimits

0x9fc6,	// (0x00054859) main_cset6_slider_pane

0x9fd2,	// (0x00054865) main_cset6_text2_pane_ParamLimits

0x9fd2,	// (0x00054865) main_cset6_text2_pane

0x0dcb,	// (0x0004b65e) main_cset6_text_pane

0x0dd3,	// (0x0004b666) main_cset_list_pane_copy1_ParamLimits

0x0dd3,	// (0x0004b666) main_cset_list_pane_copy1

0x0de3,	// (0x0004b676) scroll_pane_cp028_copy1

0x9fe5,	// (0x00054878) cset_list_set_pane_copy1

0x9ffb,	// (0x0005488e) aid_position_infowindow_above_copy1

0xa003,	// (0x00054896) aid_position_infowindow_below_copy1

0xa00b,	// (0x0005489e) cset_list_set_pane_g1_copy1

0x9296,	// (0x00053b29) cset_list_set_pane_g3_copy1_ParamLimits

0x9296,	// (0x00053b29) cset_list_set_pane_g3_copy1

0x92a5,	// (0x00053b38) cset_list_set_pane_t1_copy1_ParamLimits

0x92a5,	// (0x00053b38) cset_list_set_pane_t1_copy1

0x3ea4,	// (0x0004e737) list_highlight_pane_cp021_copy1_ParamLimits

0x3ea4,	// (0x0004e737) list_highlight_pane_cp021_copy1

0x0dec,	// (0x0004b67f) cset6_slider_pane_ParamLimits

0x0dec,	// (0x0004b67f) cset6_slider_pane

0x0e18,	// (0x0004b6ab) main_cset6_slider_pane_g1_ParamLimits

0x0e18,	// (0x0004b6ab) main_cset6_slider_pane_g1

0xa013,	// (0x000548a6) main_cset6_slider_pane_g2_ParamLimits

0xa013,	// (0x000548a6) main_cset6_slider_pane_g2

0x0e40,	// (0x0004b6d3) main_cset6_slider_pane_g3_ParamLimits

0x0e40,	// (0x0004b6d3) main_cset6_slider_pane_g3

0xa03b,	// (0x000548ce) main_cset6_slider_pane_g4_ParamLimits

0xa03b,	// (0x000548ce) main_cset6_slider_pane_g4

0xa047,	// (0x000548da) main_cset6_slider_pane_g5_ParamLimits

0xa047,	// (0x000548da) main_cset6_slider_pane_g5

0xec62,	// (0x000594f5) main_cset6_slider_pane_g7_ParamLimits

0xec62,	// (0x000594f5) main_cset6_slider_pane_g7

0xec6e,	// (0x00059501) main_cset6_slider_pane_g8_ParamLimits

0xec6e,	// (0x00059501) main_cset6_slider_pane_g8

0xa055,	// (0x000548e8) main_cset6_slider_pane_g9_ParamLimits

0xa055,	// (0x000548e8) main_cset6_slider_pane_g9

0xa061,	// (0x000548f4) main_cset6_slider_pane_g10_ParamLimits

0xa061,	// (0x000548f4) main_cset6_slider_pane_g10

0xa06d,	// (0x00054900) main_cset6_slider_pane_g11_ParamLimits

0xa06d,	// (0x00054900) main_cset6_slider_pane_g11

0xa079,	// (0x0005490c) main_cset6_slider_pane_g12_ParamLimits

0xa079,	// (0x0005490c) main_cset6_slider_pane_g12

0xed8d,	// (0x00059620) main_cset6_slider_pane_g13_ParamLimits

0xed8d,	// (0x00059620) main_cset6_slider_pane_g13

0xed99,	// (0x0005962c) main_cset6_slider_pane_g14_ParamLimits

0xed99,	// (0x0005962c) main_cset6_slider_pane_g14

0xa085,	// (0x00054918) main_cset6_slider_pane_g15_ParamLimits

0xa085,	// (0x00054918) main_cset6_slider_pane_g15

0xa09d,	// (0x00054930) main_cset6_slider_pane_g16_ParamLimits

0xa09d,	// (0x00054930) main_cset6_slider_pane_g16

0xa0ab,	// (0x0005493e) main_cset6_slider_pane_g17_ParamLimits

0xa0ab,	// (0x0005493e) main_cset6_slider_pane_g17

0x0011,

0xfb0d,	// (0x0005a3a0) main_cset6_slider_pane_g_ParamLimits

0xfb0d,	// (0x0005a3a0) main_cset6_slider_pane_g

0x0e58,	// (0x0004b6eb) main_cset6_slider_pane_t1_ParamLimits

0x0e58,	// (0x0004b6eb) main_cset6_slider_pane_t1

0xa0c5,	// (0x00054958) main_cset6_slider_pane_t2_ParamLimits

0xa0c5,	// (0x00054958) main_cset6_slider_pane_t2

0xa0f0,	// (0x00054983) main_cset6_slider_pane_t3_ParamLimits

0xa0f0,	// (0x00054983) main_cset6_slider_pane_t3

0xa11b,	// (0x000549ae) main_cset6_slider_pane_t4_ParamLimits

0xa11b,	// (0x000549ae) main_cset6_slider_pane_t4

0xa146,	// (0x000549d9) main_cset6_slider_pane_t5_ParamLimits

0xa146,	// (0x000549d9) main_cset6_slider_pane_t5

0x0e99,	// (0x0004b72c) main_cset6_slider_pane_t7_ParamLimits

0x0e99,	// (0x0004b72c) main_cset6_slider_pane_t7

0xa173,	// (0x00054a06) main_cset6_slider_pane_t8_ParamLimits

0xa173,	// (0x00054a06) main_cset6_slider_pane_t8

0xa197,	// (0x00054a2a) main_cset6_slider_pane_t9_ParamLimits

0xa197,	// (0x00054a2a) main_cset6_slider_pane_t9

0xa1bb,	// (0x00054a4e) main_cset6_slider_pane_t10_ParamLimits

0xa1bb,	// (0x00054a4e) main_cset6_slider_pane_t10

0xa1df,	// (0x00054a72) main_cset6_slider_pane_t11_ParamLimits

0xa1df,	// (0x00054a72) main_cset6_slider_pane_t11

0x0ecf,	// (0x0004b762) main_cset6_slider_pane_t14_ParamLimits

0x0ecf,	// (0x0004b762) main_cset6_slider_pane_t14

0x0f08,	// (0x0004b79b) main_cset6_slider_pane_t15_ParamLimits

0x0f08,	// (0x0004b79b) main_cset6_slider_pane_t15

0x000b,

0xfb32,	// (0x0005a3c5) main_cset6_slider_pane_t_ParamLimits

0xfb32,	// (0x0005a3c5) main_cset6_slider_pane_t

0xe964,	// (0x000591f7) cset_slider_pane_g1_copy1

0x093e,	// (0x0004b1d1) cset_slider_pane_g2_copy1

0x0947,	// (0x0004b1da) cset_slider_pane_g3_copy1

0x347f,	// (0x0004dd12) bg_popup_sub_pane_cp011_copy1

0x0f4a,	// (0x0004b7dd) main_cset_text_pane_g1_copy1

0xee36,	// (0x000596c9) main_cset_text_pane_t1_copy1

0xee44,	// (0x000596d7) main_cset_text_pane_t2_copy1

0xee52,	// (0x000596e5) main_cset_text_pane_t3_copy1

0xee60,	// (0x000596f3) main_cset_text_pane_t4_copy1

0xee6e,	// (0x00059701) main_cset_text_pane_t5_copy1

0x0f52,	// (0x0004b7e5) main_cset_text_pane_t6_copy1

0x0f60,	// (0x0004b7f3) main_cset_text_pane_t7_copy1

0xa222,	// (0x00054ab5) main_cset_text2_pane_t1_copy1

0x6ff5,	// (0x00051888) main_ncimui_pane

0x7054,	// (0x000518e7) popup_query_ncimui_window_ParamLimits

0x7054,	// (0x000518e7) popup_query_ncimui_window

0x04f1,	// (0x0004ad84) field_cale_ev2_pane_g4_ParamLimits

0x04f1,	// (0x0004ad84) field_cale_ev2_pane_g4

0x81a8,	// (0x00052a3b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x81a8,	// (0x00052a3b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf816,	// (0x0005a0a9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf816,	// (0x0005a0a9) cell_video_dialer_keypad_pane_g

0x81c0,	// (0x00052a53) cell_video_dialer_keypad_pane_t1

0x347f,	// (0x0004dd12) bg_popup_window_pane_cp012

0xdd95,	// (0x00058628) heading_pane_cp06

0x0f8c,	// (0x0004b81f) ncim_query_content_pane

0x347f,	// (0x0004dd12) bg_popup_heading_pane_cp01

0x0f94,	// (0x0004b827) ncim_heading_pane_t1

0x0fa2,	// (0x0004b835) ncim_indicator_popup_pane

0x0fb4,	// (0x0004b847) ncim_query_button_pane

0x0fc8,	// (0x0004b85b) ncim_query_content_pane_t1

0x0fda,	// (0x0004b86d) ncim_query_content_pane_t2

0x0005,

0xfb76,	// (0x0005a409) ncim_query_content_pane_t

0x1014,	// (0x0004b8a7) ncim_query_list_pane

0x1026,	// (0x0004b8b9) ncim_query_popup_pane

0x0fa2,	// (0x0004b835) ncim_indicator_popup_pane_ParamLimits

0xa376,	// (0x00054c09) ncim_query_content_pane_g1_ParamLimits

0xa376,	// (0x00054c09) ncim_query_content_pane_g1

0x0fc8,	// (0x0004b85b) ncim_query_content_pane_t1_ParamLimits

0x0fda,	// (0x0004b86d) ncim_query_content_pane_t2_ParamLimits

0xa382,	// (0x00054c15) ncim_query_content_pane_t3_ParamLimits

0xa382,	// (0x00054c15) ncim_query_content_pane_t3

0xa39f,	// (0x00054c32) ncim_query_content_pane_t4_ParamLimits

0xa39f,	// (0x00054c32) ncim_query_content_pane_t4

0xa3bc,	// (0x00054c4f) ncim_query_content_pane_t5_ParamLimits

0xa3bc,	// (0x00054c4f) ncim_query_content_pane_t5

0x0fec,	// (0x0004b87f) ncim_query_content_pane_t6_ParamLimits

0x0fec,	// (0x0004b87f) ncim_query_content_pane_t6

0xfb76,	// (0x0005a409) ncim_query_content_pane_t_ParamLimits

0x1014,	// (0x0004b8a7) ncim_query_list_pane_ParamLimits

0x1026,	// (0x0004b8b9) ncim_query_popup_pane_ParamLimits

0x103a,	// (0x0004b8cd) wait_bar_pane_cp04

0x347f,	// (0x0004dd12) input_focus_pane_cp011

0x1042,	// (0x0004b8d5) ncim_query_popup_pane_t1

0x1050,	// (0x0004b8e3) ncim_list_query_list_pane_ParamLimits

0x1050,	// (0x0004b8e3) ncim_list_query_list_pane

0x347f,	// (0x0004dd12) bg_button_pane_cp027

0x105d,	// (0x0004b8f0) ncim_query_button_pane_g1

0x347f,	// (0x0004dd12) list_highlight_pane_cp012

0x1067,	// (0x0004b8fa) ncim_list_query_list_pane_g1

0x106f,	// (0x0004b902) ncim_list_query_list_pane_t1

0x8943,	// (0x000531d6) cam4_indicators_pane_g3_ParamLimits

0x8943,	// (0x000531d6) cam4_indicators_pane_g3

0x8a45,	// (0x000532d8) vid4_indicators_pane_g5_ParamLimits

0x8a45,	// (0x000532d8) vid4_indicators_pane_g5

0x9a6b,	// (0x000542fe) vid4_progress_pane_g5_ParamLimits

0x9a6b,	// (0x000542fe) vid4_progress_pane_g5

0xa262,	// (0x00054af5) main_ncimui_pane_g1

0xa2ca,	// (0x00054b5d) ncimui_group_query_pane_ParamLimits

0xa2ca,	// (0x00054b5d) ncimui_group_query_pane

0xa312,	// (0x00054ba5) ncimui_list_pane_ParamLimits

0xa312,	// (0x00054ba5) ncimui_list_pane

0xa339,	// (0x00054bcc) ncimui_text_pane_ParamLimits

0xa339,	// (0x00054bcc) ncimui_text_pane

0xa3d9,	// (0x00054c6c) ncimui_text_pane_t1_ParamLimits

0xa3d9,	// (0x00054c6c) ncimui_text_pane_t1

0x107d,	// (0x0004b910) ncimui_list_single_graphic_pane_ParamLimits

0x107d,	// (0x0004b910) ncimui_list_single_graphic_pane

0xa3f8,	// (0x00054c8b) ncimui_query_pane_ParamLimits

0xa3f8,	// (0x00054c8b) ncimui_query_pane

0x347f,	// (0x0004dd12) list_highlight_pane_cp013

0x108d,	// (0x0004b920) ncim_list_query_list_pane_t1_copy1

0x109b,	// (0x0004b92e) ncim_list_single_graphic_pane_g1

0xa40b,	// (0x00054c9e) ncim_query_button_pane_cp01

0xa417,	// (0x00054caa) ncim_query_entry_pane_ParamLimits

0xa417,	// (0x00054caa) ncim_query_entry_pane

0xa42a,	// (0x00054cbd) ncimui_query_pane_g1

0xa436,	// (0x00054cc9) ncimui_query_pane_t1_ParamLimits

0xa436,	// (0x00054cc9) ncimui_query_pane_t1

0x3ea4,	// (0x0004e737) input_focus_pane_cp012

0x10a3,	// (0x0004b936) ncim_query_entry_pane_t1

0x4106,	// (0x0004e999) main_im_pane_ParamLimits

0x6ff5,	// (0x00051888) main_mobtv_pane_ParamLimits

0x6ff5,	// (0x00051888) main_mobtv_pane

0xa0b9,	// (0x0005494c) main_cset6_slider_pane_g18_ParamLimits

0xa0b9,	// (0x0005494c) main_cset6_slider_pane_g18

0x0e4c,	// (0x0004b6df) main_cset6_slider_pane_g19_ParamLimits

0x0e4c,	// (0x0004b6df) main_cset6_slider_pane_g19

0xeb13,	// (0x000593a6) bg_main_mobtv_pane_ParamLimits

0xeb13,	// (0x000593a6) bg_main_mobtv_pane

0xa44f,	// (0x00054ce2) main_mobtv_info_pane

0xa45a,	// (0x00054ced) main_mobtv_loading_pane_ParamLimits

0xa45a,	// (0x00054ced) main_mobtv_loading_pane

0x10b5,	// (0x0004b948) main_mobtv_pg_channel_list_pane

0x10bf,	// (0x0004b952) main_mobtv_pg_hdr_pane

0xa467,	// (0x00054cfa) main_mobtv_programe_curr_pane_ParamLimits

0xa467,	// (0x00054cfa) main_mobtv_programe_curr_pane

0xa474,	// (0x00054d07) main_mobtv_programe_next_pane_ParamLimits

0xa474,	// (0x00054d07) main_mobtv_programe_next_pane

0x10c8,	// (0x0004b95b) popup_mobtv_noti_window

0x4b67,	// (0x0004f3fa) main_tv_pg_hdr_pane_g1

0x10d0,	// (0x0004b963) main_tv_pg_hdr_pane_g2

0x10d8,	// (0x0004b96b) main_tv_pg_hdr_pane_g3

0x10e0,	// (0x0004b973) main_tv_pg_hdr_pane_g4

0x10e8,	// (0x0004b97b) main_tv_pg_hdr_pane_g5

0x10f2,	// (0x0004b985) main_tv_pg_hdr_pane_g6

0x10fc,	// (0x0004b98f) main_tv_pg_hdr_pane_g7

0x1106,	// (0x0004b999) main_tv_pg_hdr_pane_g8

0x1110,	// (0x0004b9a3) main_tv_pg_hdr_pane_g9

0x111a,	// (0x0004b9ad) main_tv_pg_hdr_pane_g10

0x1124,	// (0x0004b9b7) main_tv_pg_hdr_pane_g11

0x000a,

0xfb83,	// (0x0005a416) main_tv_pg_hdr_pane_g

0x112e,	// (0x0004b9c1) main_tv_pg_hdr_pane_t1

0x113c,	// (0x0004b9cf) main_tv_pg_hdr_pane_t2

0x114a,	// (0x0004b9dd) main_tv_pg_hdr_pane_t3

0x115a,	// (0x0004b9ed) main_tv_pg_hdr_pane_t4

0x116a,	// (0x0004b9fd) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9a,	// (0x0005a42d) main_tv_pg_hdr_pane_t

0x117a,	// (0x0004ba0d) single_mobtv_pg_channel_pane_ParamLimits

0x117a,	// (0x0004ba0d) single_mobtv_pg_channel_pane

0x118c,	// (0x0004ba1f) single_mobtv_pg_channel_table_pane

0x5fe3,	// (0x00050876) single_mobtv_pg_channel_thumb_pane

0x1195,	// (0x0004ba28) single_tv_pg_channel_pane_g1

0x119e,	// (0x0004ba31) single_tv_pg_channel_pane_g2

0x0001,

0xfba5,	// (0x0005a438) single_tv_pg_channel_pane_g

0x3f0b,	// (0x0004e79e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3f0b,	// (0x0004e79e) bg_single_mobtv_pg_channel_thumb_pane

0x11a7,	// (0x0004ba3a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x11a7,	// (0x0004ba3a) single_mobtv_pg_channel_thumb_pane_g1

0x11b5,	// (0x0004ba48) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x11b5,	// (0x0004ba48) single_mobtv_pg_channel_thumb_pane_g2

0x11c1,	// (0x0004ba54) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x11c1,	// (0x0004ba54) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbaa,	// (0x0005a43d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbaa,	// (0x0005a43d) single_mobtv_pg_channel_thumb_pane_g

0x11cd,	// (0x0004ba60) single_mobtv_pg_channel_thumb_pane_t1

0x11db,	// (0x0004ba6e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb1,	// (0x0005a444) single_mobtv_pg_channel_thumb_pane_t

0x4b67,	// (0x0004f3fa) bg_single_mobtv_pg_channel_table_pane_g1

0x4b67,	// (0x0004f3fa) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c3,	// (0x00059c56) bg_single_mobtv_pg_channel_table_pane_g

0x11e9,	// (0x0004ba7c) single_mobtv_pg_channel_table_pane_t1

0x11f7,	// (0x0004ba8a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb6,	// (0x0005a449) single_mobtv_pg_channel_table_pane_t

0xa489,	// (0x00054d1c) main_mobtv_info_pane_g1_ParamLimits

0xa489,	// (0x00054d1c) main_mobtv_info_pane_g1

0xa4a5,	// (0x00054d38) main_mobtv_info_pane_t1_ParamLimits

0xa4a5,	// (0x00054d38) main_mobtv_info_pane_t1

0xa51d,	// (0x00054db0) main_mobtv_info_pane_t2_ParamLimits

0xa51d,	// (0x00054db0) main_mobtv_info_pane_t2

0x0002,

0xfbc0,	// (0x0005a453) main_mobtv_info_pane_t_ParamLimits

0xfbc0,	// (0x0005a453) main_mobtv_info_pane_t

0xa5ac,	// (0x00054e3f) wait_bar_pane_cp05

0xa5be,	// (0x00054e51) main_mobtv_loading_pane_g1_ParamLimits

0xa5be,	// (0x00054e51) main_mobtv_loading_pane_g1

0xa5cc,	// (0x00054e5f) main_mobtv_loading_pane_g2_ParamLimits

0xa5cc,	// (0x00054e5f) main_mobtv_loading_pane_g2

0xa5d8,	// (0x00054e6b) main_mobtv_loading_pane_g3_ParamLimits

0xa5d8,	// (0x00054e6b) main_mobtv_loading_pane_g3

0x0002,

0xfbc7,	// (0x0005a45a) main_mobtv_loading_pane_g_ParamLimits

0xfbc7,	// (0x0005a45a) main_mobtv_loading_pane_g

0x1205,	// (0x0004ba98) main_mobtv_loading_pane_t1_ParamLimits

0x1205,	// (0x0004ba98) main_mobtv_loading_pane_t1

0x121d,	// (0x0004bab0) main_mobtv_loading_pane_t2_ParamLimits

0x121d,	// (0x0004bab0) main_mobtv_loading_pane_t2

0x0001,

0xfbce,	// (0x0005a461) main_mobtv_loading_pane_t_ParamLimits

0xfbce,	// (0x0005a461) main_mobtv_loading_pane_t

0xa5e6,	// (0x00054e79) wait_bar_pane_cp06_ParamLimits

0xa5e6,	// (0x00054e79) wait_bar_pane_cp06

0x1241,	// (0x0004bad4) main_mobtv_programe_curr_pane_t1

0x124f,	// (0x0004bae2) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd3,	// (0x0005a466) main_mobtv_programe_curr_pane_t

0x125d,	// (0x0004baf0) main_mobtv_programe_next_pane_t1

0x126b,	// (0x0004bafe) main_mobtv_programe_next_pane_t2

0x1279,	// (0x0004bb0c) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd8,	// (0x0005a46b) main_mobtv_programe_next_pane_t

0x347f,	// (0x0004dd12) bg_popup_mobtv_noti_window_pane

0x1287,	// (0x0004bb1a) popup_mobtv_noti_window_g1

0x128f,	// (0x0004bb22) popup_mobtv_noti_window_t1

0x129d,	// (0x0004bb30) popup_mobtv_noti_window_t2

0x0001,

0xfbdf,	// (0x0005a472) popup_mobtv_noti_window_t

0x4b67,	// (0x0004f3fa) bg_popup_mobtv_noti_window_pane_g1

0x3753,	// (0x0004dfe6) sc_clock_pane

0x3753,	// (0x0004dfe6) main_fs_bigclock_pane

0x9c44,	// (0x000544d7) blid2_tripm_pane_t4_ParamLimits

0x9c44,	// (0x000544d7) blid2_tripm_pane_t4

0xa5f2,	// (0x00054e85) sc_clock_pane_g1_ParamLimits

0xa5f2,	// (0x00054e85) sc_clock_pane_g1

0xa600,	// (0x00054e93) sc_clock_pane_t1_ParamLimits

0xa600,	// (0x00054e93) sc_clock_pane_t1

0xa613,	// (0x00054ea6) sc_clock_pane_t2_ParamLimits

0xa613,	// (0x00054ea6) sc_clock_pane_t2

0xa625,	// (0x00054eb8) sc_clock_pane_t3_ParamLimits

0xa625,	// (0x00054eb8) sc_clock_pane_t3

0x0004,

0xfbe4,	// (0x0005a477) sc_clock_pane_t_ParamLimits

0xfbe4,	// (0x0005a477) sc_clock_pane_t

0xb236,	// (0x00055ac9) main_fs_bigclock_indicator_pane_ParamLimits

0xb236,	// (0x00055ac9) main_fs_bigclock_indicator_pane

0xa6a8,	// (0x00054f3b) main_fs_bigclock_pane_g1_ParamLimits

0xa6a8,	// (0x00054f3b) main_fs_bigclock_pane_g1

0xb242,	// (0x00055ad5) main_fs_bigclock_pane_t1_ParamLimits

0xb242,	// (0x00055ad5) main_fs_bigclock_pane_t1

0xb254,	// (0x00055ae7) main_fs_bigclock_pane_t2_ParamLimits

0xb254,	// (0x00055ae7) main_fs_bigclock_pane_t2

0xb268,	// (0x00055afb) main_fs_bigclock_pane_t3_ParamLimits

0xb268,	// (0x00055afb) main_fs_bigclock_pane_t3

0x0002,

0xfd75,	// (0x0005a608) main_fs_bigclock_pane_t_ParamLimits

0xfd75,	// (0x0005a608) main_fs_bigclock_pane_t

0x1e2c,	// (0x0004c6bf) main_fs_bigclock_indicator_pane_g1

0x0fbc,	// (0x0004b84f) ncim_query_content_pane_g2_ParamLimits

0x0fbc,	// (0x0004b84f) ncim_query_content_pane_g2

0x0001,

0xfb71,	// (0x0005a404) ncim_query_content_pane_g_ParamLimits

0xfb71,	// (0x0005a404) ncim_query_content_pane_g

0xa639,	// (0x00054ecc) sc_clock_pane_t4_ParamLimits

0xa639,	// (0x00054ecc) sc_clock_pane_t4

0x6ff5,	// (0x00051888) main_radioblah_pane

0x87e9,	// (0x0005307c) cell_call4_button_pane_t1_copy1_ParamLimits

0x87e9,	// (0x0005307c) cell_call4_button_pane_t1_copy1

0xa27c,	// (0x00054b0f) main_ncimui_pane_t1_ParamLimits

0xa27c,	// (0x00054b0f) main_ncimui_pane_t1

0xa296,	// (0x00054b29) main_ncimui_pane_t2_ParamLimits

0xa296,	// (0x00054b29) main_ncimui_pane_t2

0x0002,

0xfb6a,	// (0x0005a3fd) main_ncimui_pane_t_ParamLimits

0xfb6a,	// (0x0005a3fd) main_ncimui_pane_t

0x13e3,	// (0x0004bc76) main_radioblah_anim_pane_ParamLimits

0x13e3,	// (0x0004bc76) main_radioblah_anim_pane

0x13f4,	// (0x0004bc87) main_radioblah_info_pane_ParamLimits

0x13f4,	// (0x0004bc87) main_radioblah_info_pane

0x1408,	// (0x0004bc9b) main_radioblah_pane_t1_ParamLimits

0x1408,	// (0x0004bc9b) main_radioblah_pane_t1

0x1424,	// (0x0004bcb7) main_radioblah_pane_t2_ParamLimits

0x1424,	// (0x0004bcb7) main_radioblah_pane_t2

0x0003,

0xfc05,	// (0x0005a498) main_radioblah_pane_t_ParamLimits

0xfc05,	// (0x0005a498) main_radioblah_pane_t

0xa6fe,	// (0x00054f91) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa6fe,	// (0x00054f91) main_radioblah_rocker_ctrl_pane

0x146c,	// (0x0004bcff) main_radioblah_info_pane_t1_ParamLimits

0x146c,	// (0x0004bcff) main_radioblah_info_pane_t1

0xa743,	// (0x00054fd6) main_radioblah_info_pane_t2_ParamLimits

0xa743,	// (0x00054fd6) main_radioblah_info_pane_t2

0x0003,

0xfc0e,	// (0x0005a4a1) main_radioblah_info_pane_t_ParamLimits

0xfc0e,	// (0x0005a4a1) main_radioblah_info_pane_t

0x4b67,	// (0x0004f3fa) main_radioblah_rocker_ctrl_pane_g1

0xa7f3,	// (0x00055086) main_radioblah_rocker_ctrl_pane_g2

0xa7fb,	// (0x0005508e) main_radioblah_rocker_ctrl_pane_g3

0xa803,	// (0x00055096) main_radioblah_rocker_ctrl_pane_g4

0xa80b,	// (0x0005509e) main_radioblah_rocker_ctrl_pane_g5

0xa813,	// (0x000550a6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc17,	// (0x0005a4aa) main_radioblah_rocker_ctrl_pane_g

0xa222,	// (0x00054ab5) main_cset_text2_pane_t1_copy1_ParamLimits

0x8874,	// (0x00053107) cam4_image_uncrop_qvga_pane

0x89b5,	// (0x00053248) vid4_image_uncrop_qcif_pane

0x9dd2,	// (0x00054665) cam6_image_uncrop_qvga_pane_ParamLimits

0x9dd2,	// (0x00054665) cam6_image_uncrop_qvga_pane

0x0cae,	// (0x0004b541) vid6_image_uncrop_qcif_pane_ParamLimits

0x0cae,	// (0x0004b541) vid6_image_uncrop_qcif_pane

0x347f,	// (0x0004dd12) bg_popup_preview_window_pane_cp03

0x0f6e,	// (0x0004b801) list_cset_text2_pane

0x0f76,	// (0x0004b809) main_cset6_text2_pane_g1

0x0f7e,	// (0x0004b811) main_cset6_text2_pane_t1

0xa81b,	// (0x000550ae) list_cset_text2_pane_t1_ParamLimits

0xa81b,	// (0x000550ae) list_cset_text2_pane_t1

0x6ff5,	// (0x00051888) main_radioblah_pane_ParamLimits

0xa598,	// (0x00054e2b) main_mobtv_info_pane_t3_ParamLimits

0xa598,	// (0x00054e2b) main_mobtv_info_pane_t3

0xa6ec,	// (0x00054f7f) main_radioblah_pane_g1

0xa717,	// (0x00054faa) main_radioblah_info_pane_g1

0xa798,	// (0x0005502b) main_radioblah_info_pane_t3_ParamLimits

0xa798,	// (0x0005502b) main_radioblah_info_pane_t3

0x5f5a,	// (0x000507ed) highlight_cell_cale_month_pane_ParamLimits

0x5f5a,	// (0x000507ed) highlight_cell_cale_month_pane

0x3753,	// (0x0004dfe6) main_phob_fisheye_pane

0xe575,	// (0x00058e08) scroll_pane_cp0031_ParamLimits

0xe575,	// (0x00058e08) scroll_pane_cp0031

0x0dbc,	// (0x0004b64f) wait_bar_pane_cp08_ParamLimits

0x9fe5,	// (0x00054878) cset_list_set_pane_copy1_ParamLimits

0x14c1,	// (0x0004bd54) highlight_cell_cale_month_pane_g1

0xa83c,	// (0x000550cf) highlight_cell_cale_month_pane_t1

0xf056,	// (0x000598e9) list_gen_pane_cp01

0xec4d,	// (0x000594e0) scroll_pane_01

0xa84a,	// (0x000550dd) list_single_double_fisheye_pane

0xa853,	// (0x000550e6) list_double_fisheye_pane_g1_ParamLimits

0xa853,	// (0x000550e6) list_double_fisheye_pane_g1

0xa85f,	// (0x000550f2) list_double_fisheye_pane_g2_ParamLimits

0xa85f,	// (0x000550f2) list_double_fisheye_pane_g2

0xa873,	// (0x00055106) list_double_fisheye_pane_g3_ParamLimits

0xa873,	// (0x00055106) list_double_fisheye_pane_g3

0x0004,

0xfc24,	// (0x0005a4b7) list_double_fisheye_pane_g_ParamLimits

0xfc24,	// (0x0005a4b7) list_double_fisheye_pane_g

0xa89c,	// (0x0005512f) list_double_fisheye_pane_t1_ParamLimits

0xa89c,	// (0x0005512f) list_double_fisheye_pane_t1

0xa8b7,	// (0x0005514a) list_double_fisheye_pane_t2_ParamLimits

0xa8b7,	// (0x0005514a) list_double_fisheye_pane_t2

0x0001,

0xfc2f,	// (0x0005a4c2) list_double_fisheye_pane_t_ParamLimits

0xfc2f,	// (0x0005a4c2) list_double_fisheye_pane_t

0x3753,	// (0x0004dfe6) main_call5_pane

0xa65f,	// (0x00054ef2) sc_swipe_pane_ParamLimits

0xa65f,	// (0x00054ef2) sc_swipe_pane

0xa8e5,	// (0x00055178) call5_image_pane_ParamLimits

0xa8e5,	// (0x00055178) call5_image_pane

0xa8f5,	// (0x00055188) call5_swipe_1_pane_ParamLimits

0xa8f5,	// (0x00055188) call5_swipe_1_pane

0xa901,	// (0x00055194) call5_swipe_2_pane_ParamLimits

0xa901,	// (0x00055194) call5_swipe_2_pane

0xa91b,	// (0x000551ae) popup_call5_audio_first_window_ParamLimits

0xa91b,	// (0x000551ae) popup_call5_audio_first_window

0x3f0b,	// (0x0004e79e) call5_swipe_1_pane_g1_ParamLimits

0x3f0b,	// (0x0004e79e) call5_swipe_1_pane_g1

0x14c9,	// (0x0004bd5c) call5_swipe_1_pane_g2_ParamLimits

0x14c9,	// (0x0004bd5c) call5_swipe_1_pane_g2

0x0001,

0xfc34,	// (0x0005a4c7) call5_swipe_1_pane_g_ParamLimits

0xfc34,	// (0x0005a4c7) call5_swipe_1_pane_g

0x14d5,	// (0x0004bd68) call5_swipe_1_pane_t1_ParamLimits

0x14d5,	// (0x0004bd68) call5_swipe_1_pane_t1

0x3f0b,	// (0x0004e79e) call5_swipe_2_pane_g1_ParamLimits

0x3f0b,	// (0x0004e79e) call5_swipe_2_pane_g1

0x14ea,	// (0x0004bd7d) call5_swipe_2_pane_g2_ParamLimits

0x14ea,	// (0x0004bd7d) call5_swipe_2_pane_g2

0x0001,

0xfc39,	// (0x0005a4cc) call5_swipe_2_pane_g_ParamLimits

0xfc39,	// (0x0005a4cc) call5_swipe_2_pane_g

0x14f6,	// (0x0004bd89) call5_swipe_2_pane_t1_ParamLimits

0x14f6,	// (0x0004bd89) call5_swipe_2_pane_t1

0x150b,	// (0x0004bd9e) sc_swipe_pane_g1_ParamLimits

0x150b,	// (0x0004bd9e) sc_swipe_pane_g1

0x1518,	// (0x0004bdab) sc_swipe_pane_g2_ParamLimits

0x1518,	// (0x0004bdab) sc_swipe_pane_g2

0x0001,

0xfc3e,	// (0x0005a4d1) sc_swipe_pane_g_ParamLimits

0xfc3e,	// (0x0005a4d1) sc_swipe_pane_g

0x1524,	// (0x0004bdb7) sc_swipe_pane_t1_ParamLimits

0x1524,	// (0x0004bdb7) sc_swipe_pane_t1

0x3753,	// (0x0004dfe6) main_cmail_launcher_pane

0xa929,	// (0x000551bc) aid_size_cell_cmail_l_ParamLimits

0xa929,	// (0x000551bc) aid_size_cell_cmail_l

0xa937,	// (0x000551ca) grid_cmail_l_pane_ParamLimits

0xa937,	// (0x000551ca) grid_cmail_l_pane

0xa947,	// (0x000551da) cell_cmail_l_pane_ParamLimits

0xa947,	// (0x000551da) cell_cmail_l_pane

0x1539,	// (0x0004bdcc) cell_cmail_l_pane_g1_ParamLimits

0x1539,	// (0x0004bdcc) cell_cmail_l_pane_g1

0x1545,	// (0x0004bdd8) cell_cmail_l_pane_t1_ParamLimits

0x1545,	// (0x0004bdd8) cell_cmail_l_pane_t1

0x155b,	// (0x0004bdee) cell_cmail_l_pane_t2_ParamLimits

0x155b,	// (0x0004bdee) cell_cmail_l_pane_t2

0x0001,

0xfc43,	// (0x0005a4d6) cell_cmail_l_pane_t_ParamLimits

0xfc43,	// (0x0005a4d6) cell_cmail_l_pane_t

0x3ea4,	// (0x0004e737) grid_highlight_pane_cp018_ParamLimits

0x3ea4,	// (0x0004e737) grid_highlight_pane_cp018

0x35a9,	// (0x0004de3c) main2_pane_ParamLimits

0x35a9,	// (0x0004de3c) main2_pane

0x4349,	// (0x0004ebdc) popup_sp_fs_action_menu_bg_pane_g1

0x4351,	// (0x0004ebe4) popup_sp_fs_action_menu_bg_pane_g2

0x4359,	// (0x0004ebec) popup_sp_fs_action_menu_bg_pane_g3

0x4361,	// (0x0004ebf4) popup_sp_fs_action_menu_bg_pane_g4

0x4369,	// (0x0004ebfc) popup_sp_fs_action_menu_bg_pane_g5

0x4371,	// (0x0004ec04) popup_sp_fs_action_menu_bg_pane_g6

0x4379,	// (0x0004ec0c) popup_sp_fs_action_menu_bg_pane_g7

0x4381,	// (0x0004ec14) popup_sp_fs_action_menu_bg_pane_g8

0x4389,	// (0x0004ec1c) popup_sp_fs_action_menu_bg_pane_g9

0x4391,	// (0x0004ec24) popup_sp_fs_action_menu_bg_pane_g10

0x4391,	// (0x0004ec24) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x000599be) popup_sp_fs_action_menu_bg_pane_g

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g3_g1

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g3_g2

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00059a6c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00059a6c) list_medium_line_x2_t3_g3_g

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g3_t1

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g3_t2

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00059a73) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00059a73) list_medium_line_x2_t3_g3_t

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g2_g1

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x00059a7a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x00059a7a) list_medium_line_x2_t3_g2_g

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g2_t1

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g2_t2

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00059a73) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00059a73) list_medium_line_x2_t3_g2_t

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t4_g4_g1

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t4_g4_g2

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t4_g4_g3

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00059a7f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00059a7f) list_medium_line_x2_t4_g4_g

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g4_t1

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g4_t2

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g4_t3

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x00059a88) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x00059a88) list_medium_line_x2_t4_g4_t

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g4_g1

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g4_g2

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g4_g3

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00059a7f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00059a7f) list_medium_line_x2_t2_g4_g

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t2_g4_t1

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf25c,	// (0x00059aef) list_medium_line_x2_t2_g4_t_ParamLimits

0xf25c,	// (0x00059aef) list_medium_line_x2_t2_g4_t

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g3_g1

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g3_g2

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00059a6c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00059a6c) list_medium_line_x2_t2_g3_g

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t2_g3_t1

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf25c,	// (0x00059aef) list_medium_line_x2_t2_g3_t_ParamLimits

0xf25c,	// (0x00059aef) list_medium_line_x2_t2_g3_t

0x61fb,	// (0x00050a8e) main_sp_fs_list_pane_ParamLimits

0x61fb,	// (0x00050a8e) main_sp_fs_list_pane

0x6207,	// (0x00050a9a) sp_fs_scroll_pane_ParamLimits

0x6207,	// (0x00050a9a) sp_fs_scroll_pane

0xc614,	// (0x00056ea7) list_medium_line_x2_t3_t1

0xc614,	// (0x00056ea7) list_medium_line_x2_t3_t2

0xc614,	// (0x00056ea7) list_medium_line_x2_t3_t3

0x0002,

0xf2a7,	// (0x00059b3a) list_medium_line_x2_t3_t

0xc614,	// (0x00056ea7) list_medium_line_x3_t4_t1

0xc614,	// (0x00056ea7) list_medium_line_x3_t4_t2

0xc614,	// (0x00056ea7) list_medium_line_x3_t4_t3

0xc614,	// (0x00056ea7) list_medium_line_x3_t4_t4

0x0003,

0xf2ae,	// (0x00059b41) list_medium_line_x3_t4_t

0xc614,	// (0x00056ea7) list_medium_line_x4_t5_t1

0xc614,	// (0x00056ea7) list_medium_line_x4_t5_t2

0xc614,	// (0x00056ea7) list_medium_line_x4_t5_t3

0xc614,	// (0x00056ea7) list_medium_line_x4_t5_t4

0xc614,	// (0x00056ea7) list_medium_line_x4_t5_t5

0x0004,

0xf2b7,	// (0x00059b4a) list_medium_line_x4_t5_t

0x3f0b,	// (0x0004e79e) list_medium_line_t4_g4_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t4_g4_g1

0x3f0b,	// (0x0004e79e) list_medium_line_t4_g4_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t4_g4_g2

0x3f0b,	// (0x0004e79e) list_medium_line_t4_g4_g3_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t4_g4_g3

0x3f0b,	// (0x0004e79e) list_medium_line_t4_g4_g4_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00059a7f) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00059a7f) list_medium_line_t4_g4_g

0x4bbc,	// (0x0004f44f) list_medium_line_t4_g4_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t4_g4_t1

0x4bbc,	// (0x0004f44f) list_medium_line_t4_g4_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t4_g4_t2

0x4bbc,	// (0x0004f44f) list_medium_line_t4_g4_t3_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t4_g4_t3

0x4bbc,	// (0x0004f44f) list_medium_line_t4_g4_t4_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x00059a88) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x00059a88) list_medium_line_t4_g4_t

0x62fa,	// (0x00050b8d) chi_dic_find_pane_g1

0x7011,	// (0x000518a4) main_tport_pane

0xc614,	// (0x00056ea7) list_medium_line_plain_t1

0x3f0b,	// (0x0004e79e) list_medium_line_t2_g2_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t2_g2_g1

0x3f0b,	// (0x0004e79e) list_medium_line_t2_g2_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x00059a7a) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x00059a7a) list_medium_line_t2_g2_g

0x4bbc,	// (0x0004f44f) list_medium_line_t2_g2_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t2_g2_t1

0x4bbc,	// (0x0004f44f) list_medium_line_t2_g2_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t2_g2_t2

0x0001,

0xf25c,	// (0x00059aef) list_medium_line_t2_g2_t_ParamLimits

0xf25c,	// (0x00059aef) list_medium_line_t2_g2_t

0x0a28,	// (0x0004b2bb) aid_sp_fs_list_icon_a_sm

0x0a30,	// (0x0004b2c3) aid_sp_fs_list_icon_d

0x0a38,	// (0x0004b2cb) aid_sp_fs_text_primary

0x0a41,	// (0x0004b2d4) aid_sp_fs_text_secondary

0x347f,	// (0x0004dd12) list_medium_line

0x347f,	// (0x0004dd12) list_medium_line_g2

0x347f,	// (0x0004dd12) list_medium_line_g3

0x347f,	// (0x0004dd12) list_medium_line_plain

0x347f,	// (0x0004dd12) list_medium_line_plain_t2

0x347f,	// (0x0004dd12) list_medium_line_plain_t3

0x347f,	// (0x0004dd12) list_medium_line_right_icon

0x347f,	// (0x0004dd12) list_medium_line_right_iconx2

0x347f,	// (0x0004dd12) list_medium_line_t2

0x347f,	// (0x0004dd12) list_medium_line_t2_g2

0x347f,	// (0x0004dd12) list_medium_line_t2_g3

0x347f,	// (0x0004dd12) list_medium_line_t2_right_icon

0x347f,	// (0x0004dd12) list_medium_line_t2_right_iconx2

0x347f,	// (0x0004dd12) list_medium_line_t3

0x347f,	// (0x0004dd12) list_medium_line_t3_g2

0x347f,	// (0x0004dd12) list_medium_line_t3_g3

0x347f,	// (0x0004dd12) list_medium_line_t3_right_iconx2

0x347f,	// (0x0004dd12) list_medium_line_t4_g4

0x347f,	// (0x0004dd12) list_medium_line_x2

0x347f,	// (0x0004dd12) list_medium_line_x2_t2_g2

0x347f,	// (0x0004dd12) list_medium_line_x2_t2_g3

0x347f,	// (0x0004dd12) list_medium_line_x2_t2_g4

0x347f,	// (0x0004dd12) list_medium_line_x2_t3

0x347f,	// (0x0004dd12) list_medium_line_x2_t3_g2

0x347f,	// (0x0004dd12) list_medium_line_x2_t3_g3

0x347f,	// (0x0004dd12) list_medium_line_x2_t3_g4

0x347f,	// (0x0004dd12) list_medium_line_x2_t4_g2

0x347f,	// (0x0004dd12) list_medium_line_x2_t4_g4

0x347f,	// (0x0004dd12) list_medium_line_x3

0x347f,	// (0x0004dd12) list_medium_line_x3_t4

0x347f,	// (0x0004dd12) list_medium_line_x3_t4_g4

0x347f,	// (0x0004dd12) list_medium_line_x4_t4

0x347f,	// (0x0004dd12) list_medium_line_x4_t4_g7

0x347f,	// (0x0004dd12) list_medium_line_x4_t5

0x9ac9,	// (0x0005435c) list_single_fs_dyc_pane_ParamLimits

0x9ac9,	// (0x0005435c) list_single_fs_dyc_pane

0x3f0b,	// (0x0004e79e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x4_t4_g7_g1

0x3f0b,	// (0x0004e79e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x4_t4_g7_g2

0x3f0b,	// (0x0004e79e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x4_t4_g7_g3

0x3f0b,	// (0x0004e79e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x4_t4_g7_g4

0x3f0b,	// (0x0004e79e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x4_t4_g7_g5

0x3f0b,	// (0x0004e79e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x4_t4_g7_g6

0x3f19,	// (0x0004e7ac) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3f19,	// (0x0004e7ac) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4b,	// (0x0005a3de) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4b,	// (0x0005a3de) list_medium_line_x4_t4_g7_g

0x4bbc,	// (0x0004f44f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x4_t4_g7_t1

0x4bbc,	// (0x0004f44f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x4_t4_g7_t2

0x4bbc,	// (0x0004f44f) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x4_t4_g7_t3

0x4a1e,	// (0x0004f2b1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4a1e,	// (0x0004f2b1) list_medium_line_x4_t4_g7_t4

0x4a1e,	// (0x0004f2b1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4a1e,	// (0x0004f2b1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5a,	// (0x0005a3ed) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5a,	// (0x0005a3ed) list_medium_line_x4_t4_g7_t

0xa205,	// (0x00054a98) list_single_dyc_row_pane_ParamLimits

0xa205,	// (0x00054a98) list_single_dyc_row_pane

0xa8d9,	// (0x0005516c) call5_gesture_pane_ParamLimits

0xa8d9,	// (0x0005516c) call5_gesture_pane

0xa90d,	// (0x000551a0) call5_windows_pane_ParamLimits

0xa90d,	// (0x000551a0) call5_windows_pane

0xa960,	// (0x000551f3) call5_swipe_1_pane_cp_ParamLimits

0xa960,	// (0x000551f3) call5_swipe_1_pane_cp

0xa96c,	// (0x000551ff) call5_swipe_2_pane_cp_ParamLimits

0xa96c,	// (0x000551ff) call5_swipe_2_pane_cp

0x49a9,	// (0x0004f23c) call5_image_pane_cp

0xa978,	// (0x0005520b) popup_call5_audio_first_window_cp_ParamLimits

0xa978,	// (0x0005520b) popup_call5_audio_first_window_cp

0x150b,	// (0x0004bd9e) call5_swipe_1_pane_g1_cp_ParamLimits

0x150b,	// (0x0004bd9e) call5_swipe_1_pane_g1_cp

0x1578,	// (0x0004be0b) call5_swipe_1_pane_g2_cp

0x1524,	// (0x0004bdb7) call5_swipe_1_pane_t1_cp_ParamLimits

0x1524,	// (0x0004bdb7) call5_swipe_1_pane_t1_cp

0x150b,	// (0x0004bd9e) call5_swipe_2_pane_g1_cp_ParamLimits

0x150b,	// (0x0004bd9e) call5_swipe_2_pane_g1_cp

0x1580,	// (0x0004be13) call5_swipe_2_pane_g2_cp

0x1588,	// (0x0004be1b) call5_swipe_2_pane_t1_cp_ParamLimits

0x1588,	// (0x0004be1b) call5_swipe_2_pane_t1_cp

0x3ea4,	// (0x0004e737) main_sp_fs_email_pane

0x159d,	// (0x0004be30) main_sp_fs_listscroll_pane_te

0xa986,	// (0x00055219) popup_sp_fs_action_menu_pane_ParamLimits

0xa986,	// (0x00055219) popup_sp_fs_action_menu_pane

0x4b67,	// (0x0004f3fa) bg_sp_fs_ctrlbar_pane_g1

0x15a6,	// (0x0004be39) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x15af,	// (0x0004be42) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xde0e,	// (0x000586a1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x4b67,	// (0x0004f3fa) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc48,	// (0x0005a4db) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb9d,	// (0x00057430) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb9d,	// (0x00057430) bg_sp_fs_ctrlbar_ddmenu_pane

0x15b8,	// (0x0004be4b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x15b8,	// (0x0004be4b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x15c4,	// (0x0004be57) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x15c4,	// (0x0004be57) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc51,	// (0x0005a4e4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc51,	// (0x0005a4e4) main_sp_fs_ctrlbar_ddmenu_pane_g

0x15d0,	// (0x0004be63) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x15d0,	// (0x0004be63) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x4b67,	// (0x0004f3fa) list_medium_line_t2_right_icon_g1

0xc614,	// (0x00056ea7) list_medium_line_t2_right_icon_t1

0xc614,	// (0x00056ea7) list_medium_line_t2_right_icon_t2

0x0001,

0xfc56,	// (0x0005a4e9) list_medium_line_t2_right_icon_t

0xde39,	// (0x000586cc) bg_sp_fs_ctrlbar_pane_ParamLimits

0xde39,	// (0x000586cc) bg_sp_fs_ctrlbar_pane

0xaa0b,	// (0x0005529e) main_sp_fs_ctrlbar_button_pane_cp01

0xaa13,	// (0x000552a6) main_sp_fs_ctrlbar_ddmenu_pane

0x1622,	// (0x0004beb5) main_sp_fs_ctrlbar_pane_g1

0x162e,	// (0x0004bec1) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5b,	// (0x0005a4ee) main_sp_fs_ctrlbar_pane_g

0xaa4f,	// (0x000552e2) main_sp_fs_ctrlbar_pane_t1

0xaa8a,	// (0x0005531d) main_sp_fs_ctrlbar_pane

0xaaa0,	// (0x00055333) main_sp_fs_listscroll_pane_te_cp01

0xaab1,	// (0x00055344) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xaab1,	// (0x00055344) popup_sp_fs_action_menu_pane_cp01

0x3ea4,	// (0x0004e737) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x3ea4,	// (0x0004e737) bg_sp_fs_highlight_list_pane_cp01

0x1655,	// (0x0004bee8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1655,	// (0x0004bee8) sp_fs_action_menu_list_gene_pane_g1

0x1664,	// (0x0004bef7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1664,	// (0x0004bef7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc69,	// (0x0005a4fc) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc69,	// (0x0005a4fc) sp_fs_action_menu_list_gene_pane_g

0x1671,	// (0x0004bf04) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1671,	// (0x0004bf04) sp_fs_action_menu_list_gene_pane_t1

0x1689,	// (0x0004bf1c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1689,	// (0x0004bf1c) sp_fs_action_menu_list_gene_pane

0x16a8,	// (0x0004bf3b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x16a8,	// (0x0004bf3b) popup_sp_fs_action_menu_bg_pane

0x16b6,	// (0x0004bf49) sp_fs_action_menu_list_pane_ParamLimits

0x16b6,	// (0x0004bf49) sp_fs_action_menu_list_pane

0xeda5,	// (0x00059638) sp_fs_scroll_pane_cp01_ParamLimits

0xeda5,	// (0x00059638) sp_fs_scroll_pane_cp01

0xc614,	// (0x00056ea7) list_medium_line_plain_t2_t1

0xc614,	// (0x00056ea7) list_medium_line_plain_t2_t2

0x0001,

0xfc56,	// (0x0005a4e9) list_medium_line_plain_t2_t

0xc614,	// (0x00056ea7) list_medium_line_plain_t3_t1

0xc614,	// (0x00056ea7) list_medium_line_plain_t3_t2

0xc614,	// (0x00056ea7) list_medium_line_plain_t3_t3

0x0002,

0xf2a7,	// (0x00059b3a) list_medium_line_plain_t3_t

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g2_g1

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x00059a7a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x00059a7a) list_medium_line_x2_t2_g2_g

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t2_g2_t1

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t2_g2_t2

0x0001,

0xf25c,	// (0x00059aef) list_medium_line_x2_t2_g2_t_ParamLimits

0xf25c,	// (0x00059aef) list_medium_line_x2_t2_g2_t

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t4_g2_g1

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x00059a7a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x00059a7a) list_medium_line_x2_t4_g2_g

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g2_t1

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g2_t2

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g2_t3

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x00059a88) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x00059a88) list_medium_line_x2_t4_g2_t

0x4b67,	// (0x0004f3fa) list_medium_line_t3_right_iconx2_g1

0x4b67,	// (0x0004f3fa) list_medium_line_t3_right_iconx2_g2

0x4b67,	// (0x0004f3fa) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c8,	// (0x00059c5b) list_medium_line_t3_right_iconx2_g

0xc614,	// (0x00056ea7) list_medium_line_t3_right_iconx2_t1

0xc614,	// (0x00056ea7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc56,	// (0x0005a4e9) list_medium_line_t3_right_iconx2_t

0x3f0b,	// (0x0004e79e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x3_t4_g4_g1

0x3f0b,	// (0x0004e79e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x3_t4_g4_g2

0x3f0b,	// (0x0004e79e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x3_t4_g4_g3

0x3f0b,	// (0x0004e79e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00059a7f) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00059a7f) list_medium_line_x3_t4_g4_g

0x4bbc,	// (0x0004f44f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x3_t4_g4_t1

0x4bbc,	// (0x0004f44f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x3_t4_g4_t2

0x4bbc,	// (0x0004f44f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x3_t4_g4_t3

0x4bbc,	// (0x0004f44f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x00059a88) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x00059a88) list_medium_line_x3_t4_g4_t

0xaad1,	// (0x00055364) list_single_dyc_row_text_pane_t1_ParamLimits

0xaad1,	// (0x00055364) list_single_dyc_row_text_pane_t1

0xab08,	// (0x0005539b) list_single_dyc_row_text_pane_t2_ParamLimits

0xab08,	// (0x0005539b) list_single_dyc_row_text_pane_t2

0x16d6,	// (0x0004bf69) list_single_dyc_row_text_pane_t3_ParamLimits

0x16d6,	// (0x0004bf69) list_single_dyc_row_text_pane_t3

0x0005,

0xfc6e,	// (0x0005a501) list_single_dyc_row_text_pane_t_ParamLimits

0xfc6e,	// (0x0005a501) list_single_dyc_row_text_pane_t

0x16fa,	// (0x0004bf8d) list_single_dyc_row_pane_g1_ParamLimits

0x16fa,	// (0x0004bf8d) list_single_dyc_row_pane_g1

0x1706,	// (0x0004bf99) list_single_dyc_row_pane_g2_ParamLimits

0x1706,	// (0x0004bf99) list_single_dyc_row_pane_g2

0x1712,	// (0x0004bfa5) list_single_dyc_row_pane_g3_ParamLimits

0x1712,	// (0x0004bfa5) list_single_dyc_row_pane_g3

0x171e,	// (0x0004bfb1) list_single_dyc_row_pane_g4_ParamLimits

0x171e,	// (0x0004bfb1) list_single_dyc_row_pane_g4

0x0003,

0xfc7b,	// (0x0005a50e) list_single_dyc_row_pane_g_ParamLimits

0xfc7b,	// (0x0005a50e) list_single_dyc_row_pane_g

0x172a,	// (0x0004bfbd) list_single_dyc_row_text_pane_ParamLimits

0x172a,	// (0x0004bfbd) list_single_dyc_row_text_pane

0x347f,	// (0x0004dd12) bg_sp_fs_scroll_pane

0x1749,	// (0x0004bfdc) thumb_sp_fs_scroll_pane

0x3f0b,	// (0x0004e79e) list_medium_line_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_g1

0x4bbc,	// (0x0004f44f) list_medium_line_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t1

0x3f0b,	// (0x0004e79e) list_medium_line_x2_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_g1

0x3f0b,	// (0x0004e79e) list_medium_line_x2_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x00059a7a) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x00059a7a) list_medium_line_x2_g

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t1

0x3f0b,	// (0x0004e79e) list_medium_line_x3_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x3_g1

0xedfc,	// (0x0005968f) list_medium_line_x3_g2_ParamLimits

0xedfc,	// (0x0005968f) list_medium_line_x3_g2

0x0001,

0xfc84,	// (0x0005a517) list_medium_line_x3_g_ParamLimits

0xfc84,	// (0x0005a517) list_medium_line_x3_g

0x1752,	// (0x0004bfe5) list_medium_line_x3_t1_ParamLimits

0x1752,	// (0x0004bfe5) list_medium_line_x3_t1

0x1766,	// (0x0004bff9) thumb_sp_fs_scroll_pane_g1

0x176f,	// (0x0004c002) thumb_sp_fs_scroll_pane_g2

0x1778,	// (0x0004c00b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x0005a51c) thumb_sp_fs_scroll_pane_g

0x1766,	// (0x0004bff9) bg_sp_fs_scroll_pane_g1

0x176f,	// (0x0004c002) bg_sp_fs_scroll_pane_g2

0x1778,	// (0x0004c00b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x0005a51c) bg_sp_fs_scroll_pane_g

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g4_g1

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g4_g2

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g4_g3

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00059a7f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00059a7f) list_medium_line_x2_t3_g4_g

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g4_t1

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g4_t2

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00059a73) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00059a73) list_medium_line_x2_t3_g4_t

0x3f0b,	// (0x0004e79e) list_medium_line_g2_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_g2_g1

0x3f0b,	// (0x0004e79e) list_medium_line_g2_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x00059a7a) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x00059a7a) list_medium_line_g2_g

0x4bbc,	// (0x0004f44f) list_medium_line_g2_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_g2_t1

0x3f0b,	// (0x0004e79e) list_medium_line_t3_g2_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t3_g2_g1

0x3f0b,	// (0x0004e79e) list_medium_line_t3_g2_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x00059a7a) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x00059a7a) list_medium_line_t3_g2_g

0x4bbc,	// (0x0004f44f) list_medium_line_t3_g2_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t3_g2_t1

0x4bbc,	// (0x0004f44f) list_medium_line_t3_g2_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t3_g2_t2

0x4bbc,	// (0x0004f44f) list_medium_line_t3_g2_t3_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00059a73) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00059a73) list_medium_line_t3_g2_t

0x4b67,	// (0x0004f3fa) list_medium_line_right_icon_g1

0xc614,	// (0x00056ea7) list_medium_line_right_icon_t1

0x3f0b,	// (0x0004e79e) list_medium_line_t2_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t2_g1

0x4bbc,	// (0x0004f44f) list_medium_line_t2_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t2_t1

0x4bbc,	// (0x0004f44f) list_medium_line_t2_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t2_t2

0x0001,

0xf25c,	// (0x00059aef) list_medium_line_t2_t_ParamLimits

0xf25c,	// (0x00059aef) list_medium_line_t2_t

0x3f0b,	// (0x0004e79e) list_medium_line_t3_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t3_g1

0x4bbc,	// (0x0004f44f) list_medium_line_t3_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t3_t1

0x4bbc,	// (0x0004f44f) list_medium_line_t3_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t3_t2

0x4bbc,	// (0x0004f44f) list_medium_line_t3_t3_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00059a73) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00059a73) list_medium_line_t3_t

0x3f0b,	// (0x0004e79e) list_medium_line_g3_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_g3_g1

0x3f0b,	// (0x0004e79e) list_medium_line_g3_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_g3_g2

0x3f0b,	// (0x0004e79e) list_medium_line_g3_g3_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00059a6c) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00059a6c) list_medium_line_g3_g

0x4bbc,	// (0x0004f44f) list_medium_line_g3_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_g3_t1

0x3f0b,	// (0x0004e79e) list_medium_line_t2_g3_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t2_g3_g1

0x3f0b,	// (0x0004e79e) list_medium_line_t2_g3_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t2_g3_g2

0x3f0b,	// (0x0004e79e) list_medium_line_t2_g3_g3_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00059a6c) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00059a6c) list_medium_line_t2_g3_g

0x4bbc,	// (0x0004f44f) list_medium_line_t2_g3_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t2_g3_t1

0x4bbc,	// (0x0004f44f) list_medium_line_t2_g3_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t2_g3_t2

0x0001,

0xf25c,	// (0x00059aef) list_medium_line_t2_g3_t_ParamLimits

0xf25c,	// (0x00059aef) list_medium_line_t2_g3_t

0x3f0b,	// (0x0004e79e) list_medium_line_t3_g3_g1_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t3_g3_g1

0x3f0b,	// (0x0004e79e) list_medium_line_t3_g3_g2_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t3_g3_g2

0x3f0b,	// (0x0004e79e) list_medium_line_t3_g3_g3_ParamLimits

0x3f0b,	// (0x0004e79e) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00059a6c) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00059a6c) list_medium_line_t3_g3_g

0x4bbc,	// (0x0004f44f) list_medium_line_t3_g3_t1_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t3_g3_t1

0x4bbc,	// (0x0004f44f) list_medium_line_t3_g3_t2_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t3_g3_t2

0x4bbc,	// (0x0004f44f) list_medium_line_t3_g3_t3_ParamLimits

0x4bbc,	// (0x0004f44f) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00059a73) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00059a73) list_medium_line_t3_g3_t

0x4b67,	// (0x0004f3fa) list_medium_line_right_iconx2_g1

0x4b67,	// (0x0004f3fa) list_medium_line_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00059c56) list_medium_line_right_iconx2_g

0xc614,	// (0x00056ea7) list_medium_line_right_iconx2_t1

0x4b67,	// (0x0004f3fa) list_medium_line_t2_right_iconx2_g1

0x4b67,	// (0x0004f3fa) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00059c56) list_medium_line_t2_right_iconx2_g

0xc614,	// (0x00056ea7) list_medium_line_t2_right_iconx2_t1

0xc614,	// (0x00056ea7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc56,	// (0x0005a4e9) list_medium_line_t2_right_iconx2_t

0xc614,	// (0x00056ea7) list_medium_line_x4_t4_t1

0xc614,	// (0x00056ea7) list_medium_line_x4_t4_t2

0xc614,	// (0x00056ea7) list_medium_line_x4_t4_t3

0xc614,	// (0x00056ea7) list_medium_line_x4_t4_t4

0x0003,

0xf2ae,	// (0x00059b41) list_medium_line_x4_t4_t

0xac55,	// (0x000554e8) tport_appsw_pane_ParamLimits

0xac55,	// (0x000554e8) tport_appsw_pane

0xac63,	// (0x000554f6) tport_contact_pane_ParamLimits

0xac63,	// (0x000554f6) tport_contact_pane

0xac73,	// (0x00055506) tport_listscroll_pane_ParamLimits

0xac73,	// (0x00055506) tport_listscroll_pane

0xac83,	// (0x00055516) cell_tport_appsw_pane_ParamLimits

0xac83,	// (0x00055516) cell_tport_appsw_pane

0x3f19,	// (0x0004e7ac) tport_appsw_pane_g1_ParamLimits

0x3f19,	// (0x0004e7ac) tport_appsw_pane_g1

0x1781,	// (0x0004c014) tport_contact_pane_g1

0x178a,	// (0x0004c01d) tport_contact_pane_t1

0x1798,	// (0x0004c02b) tport_contact_pane_t2

0x0001,

0xfc90,	// (0x0005a523) tport_contact_pane_t

0x17a6,	// (0x0004c039) list_tport_pane

0x17af,	// (0x0004c042) scroll_pane_cp_030

0xacb6,	// (0x00055549) cell_tport_appsw_pane_g1

0xacc6,	// (0x00055559) cell_tport_appsw_pane_t1

0xacd4,	// (0x00055567) grid_highlight_pane_cp019

0xacdc,	// (0x0005556f) list_tport_double_graphic_pane_ParamLimits

0xacdc,	// (0x0005556f) list_tport_double_graphic_pane

0x3ea4,	// (0x0004e737) list_highlight_pane_cp023_ParamLimits

0x3ea4,	// (0x0004e737) list_highlight_pane_cp023

0xaced,	// (0x00055580) list_tport_double_graphic_pane_g1_ParamLimits

0xaced,	// (0x00055580) list_tport_double_graphic_pane_g1

0xacfa,	// (0x0005558d) list_tport_double_graphic_pane_t1_ParamLimits

0xacfa,	// (0x0005558d) list_tport_double_graphic_pane_t1

0xad0f,	// (0x000555a2) list_tport_double_graphic_pane_t2_ParamLimits

0xad0f,	// (0x000555a2) list_tport_double_graphic_pane_t2

0x0001,

0xfc9c,	// (0x0005a52f) list_tport_double_graphic_pane_t_ParamLimits

0xfc9c,	// (0x0005a52f) list_tport_double_graphic_pane_t

0x347f,	// (0x0004dd12) main_cale_note_pane

0x8c1c,	// (0x000534af) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8c1c,	// (0x000534af) cell_vitu2_function_top_wide_pane_cp01

0xa5ac,	// (0x00054e3f) wait_bar_pane_cp05_ParamLimits

0x3ea4,	// (0x0004e737) listscroll_cmail_pane

0x17b8,	// (0x0004c04b) list_cmail_pane

0xad21,	// (0x000555b4) list_cmail_body_pane

0xad49,	// (0x000555dc) list_single_cmail_header_caption_pane

0xad78,	// (0x0005560b) list_single_cmail_header_detail_pane_ParamLimits

0xad78,	// (0x0005560b) list_single_cmail_header_detail_pane

0x17c8,	// (0x0004c05b) list_single_cmail_header_caption_pane_t1

0xadb1,	// (0x00055644) list_single_cmail_header_detail_pane_g1_ParamLimits

0xadb1,	// (0x00055644) list_single_cmail_header_detail_pane_g1

0x17df,	// (0x0004c072) list_single_cmail_header_detail_pane_g2_ParamLimits

0x17df,	// (0x0004c072) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca1,	// (0x0005a534) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca1,	// (0x0005a534) list_single_cmail_header_detail_pane_g

0x17f8,	// (0x0004c08b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x17f8,	// (0x0004c08b) list_single_cmail_header_detail_pane_t1

0x1858,	// (0x0004c0eb) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1858,	// (0x0004c0eb) list_single_cmail_header_editor_pane_bg

0x119e,	// (0x0004ba31) list_cmail_body_pane_g1

0x186f,	// (0x0004c102) list_cmail_body_pane_t1

0xeb33,	// (0x000593c6) list_single_cmail_header_editor_pane_bg_g1

0x52f5,	// (0x0004fb88) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeb43,	// (0x000593d6) list_single_cmail_header_editor_pane_bg_g1_copy2

0xeb3b,	// (0x000593ce) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed61,	// (0x000595f4) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeb63,	// (0x000593f6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeb53,	// (0x000593e6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeb5b,	// (0x000593ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x52d5,	// (0x0004fb68) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xadc7,	// (0x0005565a) calenote_gesture_pane_ParamLimits

0xadc7,	// (0x0005565a) calenote_gesture_pane

0xade1,	// (0x00055674) calenote_window_pane_ParamLimits

0xade1,	// (0x00055674) calenote_window_pane

0x187d,	// (0x0004c110) popup_note_window_cp01

0xadf9,	// (0x0005568c) calenote_swipe_1_pane_ParamLimits

0xadf9,	// (0x0005568c) calenote_swipe_1_pane

0xa96c,	// (0x000551ff) calenote_swipe_2_pane_ParamLimits

0xa96c,	// (0x000551ff) calenote_swipe_2_pane

0x150b,	// (0x0004bd9e) calenote_swipe_1_pane_g1_ParamLimits

0x150b,	// (0x0004bd9e) calenote_swipe_1_pane_g1

0x1518,	// (0x0004bdab) calenote_swipe_1_pane_g2_ParamLimits

0x1518,	// (0x0004bdab) calenote_swipe_1_pane_g2

0x0001,

0xfc3e,	// (0x0005a4d1) calenote_swipe_1_pane_g_ParamLimits

0xfc3e,	// (0x0005a4d1) calenote_swipe_1_pane_g

0x188f,	// (0x0004c122) calenote_swipe_1_pane_t1_ParamLimits

0x188f,	// (0x0004c122) calenote_swipe_1_pane_t1

0x150b,	// (0x0004bd9e) calenote_swipe_2_pane_g1_ParamLimits

0x150b,	// (0x0004bd9e) calenote_swipe_2_pane_g1

0x18ae,	// (0x0004c141) calenote_swipe_2_pane_g2_ParamLimits

0x18ae,	// (0x0004c141) calenote_swipe_2_pane_g2

0x0001,

0xfcad,	// (0x0005a540) calenote_swipe_2_pane_g_ParamLimits

0xfcad,	// (0x0005a540) calenote_swipe_2_pane_g

0x18ba,	// (0x0004c14d) calenote_swipe_2_pane_t1_ParamLimits

0x18ba,	// (0x0004c14d) calenote_swipe_2_pane_t1

0x347f,	// (0x0004dd12) main_mup_navstr_pane

0x7a80,	// (0x00052313) main_mup3_pane_t7_ParamLimits

0x7a80,	// (0x00052313) main_mup3_pane_t7

0x82a9,	// (0x00052b3c) main_mp4_pane_g6_ParamLimits

0x82a9,	// (0x00052b3c) main_mp4_pane_g6

0x8647,	// (0x00052eda) main_image3_pane_t4_ParamLimits

0x8647,	// (0x00052eda) main_image3_pane_t4

0xae0c,	// (0x0005569f) popup_navstr_preview_pane_ParamLimits

0xae0c,	// (0x0005569f) popup_navstr_preview_pane

0xae18,	// (0x000556ab) scroll_navstr_pane_ParamLimits

0xae18,	// (0x000556ab) scroll_navstr_pane

0x347f,	// (0x0004dd12) bg_popup_preview_window_pane_cp04

0x18e1,	// (0x0004c174) popup_navstr_preview_pane_t1

0xae24,	// (0x000556b7) scroll_navstr_pane_g1_ParamLimits

0xae24,	// (0x000556b7) scroll_navstr_pane_g1

0xae31,	// (0x000556c4) scroll_navstr_pane_t1_ParamLimits

0xae31,	// (0x000556c4) scroll_navstr_pane_t1

0x1886,	// (0x0004c119) bg_button_pane_cp014

0x1886,	// (0x0004c119) bg_button_pane_cp030

0xa87f,	// (0x00055112) list_double_fisheye_pane_g4_ParamLimits

0xa87f,	// (0x00055112) list_double_fisheye_pane_g4

0xa88b,	// (0x0005511e) list_double_fisheye_pane_g5_ParamLimits

0xa88b,	// (0x0005511e) list_double_fisheye_pane_g5

0xedcb,	// (0x0005965e) sp_fs_scroll_pane_cp03

0x1622,	// (0x0004beb5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x162e,	// (0x0004bec1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5b,	// (0x0005a4ee) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xaa4f,	// (0x000552e2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x17c0,	// (0x0004c053) sp_fs_scroll_pane_cp02

0x4470,	// (0x0004ed03) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x4470,	// (0x0004ed03) popup_sp_fs_calendar_preview_list_single_pane

0x347f,	// (0x0004dd12) main_cam6_pano_pane

0x6ff5,	// (0x00051888) main_mup3_pane_ParamLimits

0x347f,	// (0x0004dd12) main_phacti_pane

0xa481,	// (0x00054d14) bg_button_pane_cp11

0xa499,	// (0x00054d2c) main_mobtv_info_pane_g2_ParamLimits

0xa499,	// (0x00054d2c) main_mobtv_info_pane_g2

0x0001,

0xfbbb,	// (0x0005a44e) main_mobtv_info_pane_g_ParamLimits

0xfbbb,	// (0x0005a44e) main_mobtv_info_pane_g

0xa64b,	// (0x00054ede) sc_clock_pane_t5_ParamLimits

0xa64b,	// (0x00054ede) sc_clock_pane_t5

0xa6ec,	// (0x00054f7f) main_radioblah_pane_g1_ParamLimits

0x143c,	// (0x0004bccf) main_radioblah_pane_t3_ParamLimits

0x143c,	// (0x0004bccf) main_radioblah_pane_t3

0x1454,	// (0x0004bce7) main_radioblah_pane_t4_ParamLimits

0x1454,	// (0x0004bce7) main_radioblah_pane_t4

0xa70a,	// (0x00054f9d) main_radioblah_text_pane_ParamLimits

0xa70a,	// (0x00054f9d) main_radioblah_text_pane

0xa717,	// (0x00054faa) main_radioblah_info_pane_g1_ParamLimits

0xa7ac,	// (0x0005503f) main_radioblah_info_pane_t4_ParamLimits

0xa7ac,	// (0x0005503f) main_radioblah_info_pane_t4

0x3ea4,	// (0x0004e737) main_sp_fs_calendar_pane

0xae43,	// (0x000556d6) main_phacti_pane_g1

0xae4b,	// (0x000556de) phacti_note_pane_ParamLimits

0xae4b,	// (0x000556de) phacti_note_pane

0x18f8,	// (0x0004c18b) phacti_term_pane_ParamLimits

0x18f8,	// (0x0004c18b) phacti_term_pane

0x190d,	// (0x0004c1a0) phacti_note_pane_t1_ParamLimits

0x190d,	// (0x0004c1a0) phacti_note_pane_t1

0x1924,	// (0x0004c1b7) phacti_term_pane_g1

0x192c,	// (0x0004c1bf) phacti_term_pane_t1_ParamLimits

0x192c,	// (0x0004c1bf) phacti_term_pane_t1

0x1956,	// (0x0004c1e9) popup_sp_fs_calendar_preview_list_single_pane_g1

0x195e,	// (0x0004c1f1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb7,	// (0x0005a54a) popup_sp_fs_calendar_preview_list_single_pane_g

0x1966,	// (0x0004c1f9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1966,	// (0x0004c1f9) popup_sp_fs_calendar_preview_list_single_pane_t1

0x197c,	// (0x0004c20f) aid_popup_sp_fs_bg_corner_pane

0x4b67,	// (0x0004f3fa) popup_sp_fs_calendar_preview_bg_pane_g1

0x347f,	// (0x0004dd12) popup_sp_fs_calendar_preview_bg_pane

0x1984,	// (0x0004c217) popup_sp_fs_calendar_preview_list_pane

0xde39,	// (0x000586cc) bg_main_sp_fs_cale_pane_ParamLimits

0xde39,	// (0x000586cc) bg_main_sp_fs_cale_pane

0x1995,	// (0x0004c228) listscroll_cale_mrui_pane_ParamLimits

0x1995,	// (0x0004c228) listscroll_cale_mrui_pane

0x19aa,	// (0x0004c23d) listscroll_sp_fs_schedule_track_pane

0x19b3,	// (0x0004c246) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x19b3,	// (0x0004c246) main_sp_fs_ctrlbar_pane_cp01

0x19c6,	// (0x0004c259) main_sp_fs_ribbon_pane

0x19ce,	// (0x0004c261) popup_sp_fs_cale_preview_window

0xaeae,	// (0x00055741) list_single_sp_fs_schedule_track_pane_ParamLimits

0xaeae,	// (0x00055741) list_single_sp_fs_schedule_track_pane

0x3efd,	// (0x0004e790) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3efd,	// (0x0004e790) bg_sp_fs_highlight_list_pane_cp03

0xaed4,	// (0x00055767) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xaed4,	// (0x00055767) list_single_sp_fs_schedule_track_pane_g1

0xaee0,	// (0x00055773) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xaee0,	// (0x00055773) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbc,	// (0x0005a54f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbc,	// (0x0005a54f) list_single_sp_fs_schedule_track_pane_g

0xaeec,	// (0x0005577f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xaeec,	// (0x0005577f) list_single_sp_fs_schedule_track_pane_t1

0xaf04,	// (0x00055797) sp_fs_schedule_track_pane_ParamLimits

0xaf04,	// (0x00055797) sp_fs_schedule_track_pane

0x19e0,	// (0x0004c273) sp_fs_schedule_track_pane_g1

0x19e8,	// (0x0004c27b) sp_fs_schedule_track_pane_g2

0x19f0,	// (0x0004c283) sp_fs_schedule_track_pane_g3

0x19f8,	// (0x0004c28b) sp_fs_schedule_track_pane_g4

0x1a00,	// (0x0004c293) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc1,	// (0x0005a554) sp_fs_schedule_track_pane_g

0xeb33,	// (0x000593c6) bg_sp_fs_schedule_viewer_highlight_g1

0x52f5,	// (0x0004fb88) bg_sp_fs_schedule_viewer_highlight_g2

0xeb3b,	// (0x000593ce) bg_sp_fs_schedule_viewer_highlight_g3

0xeb43,	// (0x000593d6) bg_sp_fs_schedule_viewer_highlight_g4

0xed61,	// (0x000595f4) bg_sp_fs_schedule_viewer_highlight_g5

0xeb53,	// (0x000593e6) bg_sp_fs_schedule_viewer_highlight_g6

0xeb5b,	// (0x000593ee) bg_sp_fs_schedule_viewer_highlight_g7

0xeb63,	// (0x000593f6) bg_sp_fs_schedule_viewer_highlight_g8

0x52d5,	// (0x0004fb68) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfccc,	// (0x0005a55f) bg_sp_fs_schedule_viewer_highlight_g

0x347f,	// (0x0004dd12) bg_main_sp_fs_ribbon_pane

0xaf14,	// (0x000557a7) main_sp_fs_ribbon_pane_g1

0x1a08,	// (0x0004c29b) main_sp_fs_ribbon_pane_t1

0xaf1d,	// (0x000557b0) main_sp_fs_ribbon_pane_t2

0x1a17,	// (0x0004c2aa) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcdf,	// (0x0005a572) main_sp_fs_ribbon_pane_t

0x1a26,	// (0x0004c2b9) main_sp_fs_ribbon_scheduler_pane

0x1a2e,	// (0x0004c2c1) bg_main_sp_fs_ribbon_pane_g1

0x1a37,	// (0x0004c2ca) bg_main_sp_fs_ribbon_pane_g2

0x1a40,	// (0x0004c2d3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce6,	// (0x0005a579) bg_main_sp_fs_ribbon_pane_g

0x1a48,	// (0x0004c2db) main_sp_fs_ribbon_scheduler_pane_g1

0x1a51,	// (0x0004c2e4) main_sp_fs_ribbon_scheduler_pane_g2

0x1a5a,	// (0x0004c2ed) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfced,	// (0x0005a580) main_sp_fs_ribbon_scheduler_pane_g

0x1a63,	// (0x0004c2f6) list_cale_mrui_pane

0xaf2c,	// (0x000557bf) sp_fs_scroll_pane_cp07_ParamLimits

0xaf2c,	// (0x000557bf) sp_fs_scroll_pane_cp07

0xaf48,	// (0x000557db) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xaf48,	// (0x000557db) bg_sp_fs_schedule_viewer_highlight

0x1a70,	// (0x0004c303) list_single_sp_fs_schedule_track_pane_cp01

0x1a78,	// (0x0004c30b) list_sp_fs_schedule_track_pane

0x1a80,	// (0x0004c313) sp_fs_scroll_pane_cp06_ParamLimits

0x1a80,	// (0x0004c313) sp_fs_scroll_pane_cp06

0x4b67,	// (0x0004f3fa) bgmain_sp_fs_calendar_pane_g1

0xaf55,	// (0x000557e8) list_single_cale_mrui_pane_ParamLimits

0xaf55,	// (0x000557e8) list_single_cale_mrui_pane

0x1a92,	// (0x0004c325) list_single_cale_mrui_row_pane_ParamLimits

0x1a92,	// (0x0004c325) list_single_cale_mrui_row_pane

0x1a9f,	// (0x0004c332) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1a9f,	// (0x0004c332) list_single_cale_mrui_row_pane_g1

0x1ae4,	// (0x0004c377) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1ae4,	// (0x0004c377) list_single_cale_mrui_row_pane_t1

0xaf83,	// (0x00055816) list_single_cale_mrui_row_pane_t2_ParamLimits

0xaf83,	// (0x00055816) list_single_cale_mrui_row_pane_t2

0x1af6,	// (0x0004c389) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1af6,	// (0x0004c389) list_single_cale_mrui_row_pane_t3

0x1b25,	// (0x0004c3b8) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1b25,	// (0x0004c3b8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfb,	// (0x0005a58e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfb,	// (0x0005a58e) list_single_cale_mrui_row_pane_t

0xafe9,	// (0x0005587c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xafe9,	// (0x0005587c) list_single_cmail_header_editor_pane_bg_cp01

0xb009,	// (0x0005589c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xb009,	// (0x0005589c) list_single_cmail_header_editor_pane_bg_cp02

0xb025,	// (0x000558b8) main_radioblah_text_pane_t1_ParamLimits

0xb025,	// (0x000558b8) main_radioblah_text_pane_t1

0x1b54,	// (0x0004c3e7) cam6_indi_pane_cp01

0x1b5c,	// (0x0004c3ef) cam6_mode_pane_cp01

0x1b64,	// (0x0004c3f7) cam6_pano_pane

0x1b6d,	// (0x0004c400) cam6_zoom_pane_cp01

0x1b75,	// (0x0004c408) cam6_pano_image_pane

0x1b80,	// (0x0004c413) cam6_pano_pane_g1

0x119e,	// (0x0004ba31) cam6_pano_pane_g2

0x1b89,	// (0x0004c41c) cam6_pano_pane_g3

0x1b92,	// (0x0004c425) cam6_pano_pane_g4

0xe7fc,	// (0x0005908f) cam6_pano_pane_g5

0x1b9b,	// (0x0004c42e) cam6_pano_pane_g6

0x1ba5,	// (0x0004c438) cam6_pano_pane_g7

0x1bad,	// (0x0004c440) cam6_pano_pane_g8

0x1bb6,	// (0x0004c449) cam6_pano_pane_g9

0x0008,

0xfd04,	// (0x0005a597) cam6_pano_pane_g

0x347f,	// (0x0004dd12) main_browser_tag_pane

0x18d9,	// (0x0004c16c) grid_navstr_albumart_pane

0x1bc1,	// (0x0004c454) cell_navstr_albumart_pane_ParamLimits

0x1bc1,	// (0x0004c454) cell_navstr_albumart_pane

0x1be1,	// (0x0004c474) cell_navstr_albumart_pane_g1

0xdc95,	// (0x00058528) cell_navstr_albumart_pane_g2

0xdca5,	// (0x00058538) cell_navstr_albumart_pane_g3

0xdc9d,	// (0x00058530) cell_navstr_albumart_pane_g4

0x0003,

0xfd17,	// (0x0005a5aa) cell_navstr_albumart_pane_g

0xb040,	// (0x000558d3) bt_list_pane_ParamLimits

0xb040,	// (0x000558d3) bt_list_pane

0xb061,	// (0x000558f4) bt_list_pane_t1

0xb070,	// (0x00055903) bt_list_pane_t2

0x0001,

0xfd20,	// (0x0005a5b3) bt_list_pane_t

0x347f,	// (0x0004dd12) main_cale_prevew_pane

0xb07f,	// (0x00055912) popup_cale_preview_window_ParamLimits

0xb07f,	// (0x00055912) popup_cale_preview_window

0x3ea4,	// (0x0004e737) bg_popup_preview_window_pane_cp05_ParamLimits

0x3ea4,	// (0x0004e737) bg_popup_preview_window_pane_cp05

0x1be9,	// (0x0004c47c) list_cale_preview_pane_ParamLimits

0x1be9,	// (0x0004c47c) list_cale_preview_pane

0xb098,	// (0x0005592b) list_double_cale_preview_pane_ParamLimits

0xb098,	// (0x0005592b) list_double_cale_preview_pane

0xb0aa,	// (0x0005593d) list_single_cale_preview_pane_ParamLimits

0xb0aa,	// (0x0005593d) list_single_cale_preview_pane

0xb0be,	// (0x00055951) list_single_cale_preview_pane_g1

0xb0c6,	// (0x00055959) list_single_cale_preview_pane_t1_ParamLimits

0xb0c6,	// (0x00055959) list_single_cale_preview_pane_t1

0xb0db,	// (0x0005596e) list_double_cale_preview_pane_g1

0xb0e3,	// (0x00055976) list_double_cale_preview_pane_t1_ParamLimits

0xb0e3,	// (0x00055976) list_double_cale_preview_pane_t1

0xb0f8,	// (0x0005598b) list_double_cale_preview_pane_t2_ParamLimits

0xb0f8,	// (0x0005598b) list_double_cale_preview_pane_t2

0x0001,

0xfd25,	// (0x0005a5b8) list_double_cale_preview_pane_t_ParamLimits

0xfd25,	// (0x0005a5b8) list_double_cale_preview_pane_t

0x347f,	// (0x0004dd12) main_ezdial_pane

0x3ea4,	// (0x0004e737) main_sp_fs_email_pane_ParamLimits

0xa9c8,	// (0x0005525b) cmail_ddmenu_btn01_pane_ParamLimits

0xa9c8,	// (0x0005525b) cmail_ddmenu_btn01_pane

0xa9dd,	// (0x00055270) cmail_ddmenu_btn02_pane_ParamLimits

0xa9dd,	// (0x00055270) cmail_ddmenu_btn02_pane

0xa9f5,	// (0x00055288) cmail_ddmenu_btn03_pane_ParamLimits

0xa9f5,	// (0x00055288) cmail_ddmenu_btn03_pane

0xaa8a,	// (0x0005531d) main_sp_fs_ctrlbar_pane_ParamLimits

0xaaa0,	// (0x00055333) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xad21,	// (0x000555b4) list_cmail_body_pane_ParamLimits

0x17d6,	// (0x0004c069) bg_button_pane_cp12

0x17eb,	// (0x0004c07e) list_single_cmail_header_detail_pane_g3_ParamLimits

0x17eb,	// (0x0004c07e) list_single_cmail_header_detail_pane_g3

0x1834,	// (0x0004c0c7) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1834,	// (0x0004c0c7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca8,	// (0x0005a53b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca8,	// (0x0005a53b) list_single_cmail_header_detail_pane_t

0x1941,	// (0x0004c1d4) phacti_term_pane_t2_ParamLimits

0x1941,	// (0x0004c1d4) phacti_term_pane_t2

0x0001,

0xfcb2,	// (0x0005a545) phacti_term_pane_t_ParamLimits

0xfcb2,	// (0x0005a545) phacti_term_pane_t

0x1bf5,	// (0x0004c488) aid_size_list_single_double

0xb110,	// (0x000559a3) popup_ezdial_listscroll_window

0xb134,	// (0x000559c7) popup_number_entry_window_cp01

0x49a9,	// (0x0004f23c) bg_popup_call_pane_cp09

0x1c01,	// (0x0004c494) ezdial_list_pane

0x1c09,	// (0x0004c49c) scroll_pane_cp23

0xcb9d,	// (0x00057430) bg_button_pane_cp028_ParamLimits

0xcb9d,	// (0x00057430) bg_button_pane_cp028

0xb142,	// (0x000559d5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb142,	// (0x000559d5) cmail_ddmenu_btn01_pane_g1

0xb152,	// (0x000559e5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb152,	// (0x000559e5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2a,	// (0x0005a5bd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2a,	// (0x0005a5bd) cmail_ddmenu_btn01_pane_g

0x1c11,	// (0x0004c4a4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1c11,	// (0x0004c4a4) cmail_ddmenu_btn01_pane_t1

0xde39,	// (0x000586cc) bg_button_pane_cp029_ParamLimits

0xde39,	// (0x000586cc) bg_button_pane_cp029

0xb152,	// (0x000559e5) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb152,	// (0x000559e5) cmail_ddmenu_btn02_pane_g1

0xb16a,	// (0x000559fd) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb16a,	// (0x000559fd) cmail_ddmenu_btn02_pane_t1

0x3efd,	// (0x0004e790) bg_button_pane_cp031_ParamLimits

0x3efd,	// (0x0004e790) bg_button_pane_cp031

0xb152,	// (0x000559e5) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb152,	// (0x000559e5) cmail_ddmenu_btn03_pane_g1

0xb16a,	// (0x000559fd) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb16a,	// (0x000559fd) cmail_ddmenu_btn03_pane_t1

0x84e4,	// (0x00052d77) cell_dialer2_keypad_pane_t1_ParamLimits

0x84fe,	// (0x00052d91) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x84fe,	// (0x00052d91) cell_dialer2_keypad_pane_t1_copy1

0xa2c2,	// (0x00054b55) ncimui_group_button_pane

0x3ea4,	// (0x0004e737) main_sp_fs_calendar_pane_ParamLimits

0xad49,	// (0x000555dc) list_single_cmail_header_caption_pane_ParamLimits

0x198c,	// (0x0004c21f) aid_recal_txt_sm_pane

0x347f,	// (0x0004dd12) mian_recal_day_pane

0x19ce,	// (0x0004c261) popup_sp_fs_cale_preview_window_ParamLimits

0x1c26,	// (0x0004c4b9) list_recal_day_pane

0x1c68,	// (0x0004c4fb) list_single_recal_day_pane_ParamLimits

0x1c68,	// (0x0004c4fb) list_single_recal_day_pane

0x1c7a,	// (0x0004c50d) list_single_recal_day_pane_g1_ParamLimits

0x1c7a,	// (0x0004c50d) list_single_recal_day_pane_g1

0x1c86,	// (0x0004c519) list_single_recal_day_pane_g2_ParamLimits

0x1c86,	// (0x0004c519) list_single_recal_day_pane_g2

0x1c92,	// (0x0004c525) list_single_recal_day_pane_g3_ParamLimits

0x1c92,	// (0x0004c525) list_single_recal_day_pane_g3

0xb18e,	// (0x00055a21) list_single_recal_day_pane_g4_ParamLimits

0xb18e,	// (0x00055a21) list_single_recal_day_pane_g4

0x1c9e,	// (0x0004c531) list_single_recal_day_pane_g5_ParamLimits

0x1c9e,	// (0x0004c531) list_single_recal_day_pane_g5

0x1caa,	// (0x0004c53d) list_single_recal_day_pane_g6_ParamLimits

0x1caa,	// (0x0004c53d) list_single_recal_day_pane_g6

0x0004,

0xfd39,	// (0x0005a5cc) list_single_recal_day_pane_g_ParamLimits

0xfd39,	// (0x0005a5cc) list_single_recal_day_pane_g

0x1cbe,	// (0x0004c551) list_single_recal_day_pane_t1

0x1cd0,	// (0x0004c563) list_single_recal_day_pane_t2

0x0001,

0xfd44,	// (0x0005a5d7) list_single_recal_day_pane_t

0xb1a6,	// (0x00055a39) ncimui_query_button_pane_ParamLimits

0xb1a6,	// (0x00055a39) ncimui_query_button_pane

0xb1b6,	// (0x00055a49) ncimui_query_button_pane_t1_ParamLimits

0xb1b6,	// (0x00055a49) ncimui_query_button_pane_t1

0x1ce2,	// (0x0004c575) ncimui_query_button_pane_t2_ParamLimits

0x1ce2,	// (0x0004c575) ncimui_query_button_pane_t2

0x0001,

0xfd49,	// (0x0005a5dc) ncimui_query_button_pane_t_ParamLimits

0xfd49,	// (0x0005a5dc) ncimui_query_button_pane_t

0xb1c9,	// (0x00055a5c) query_button_pane_ParamLimits

0xb1c9,	// (0x00055a5c) query_button_pane

0x347f,	// (0x0004dd12) bg_button_pane_cp0028

0x1cf5,	// (0x0004c588) query_button_pane_t1

0x7011,	// (0x000518a4) main_tport_pane_ParamLimits

0xac2b,	// (0x000554be) bg_popup_window_pane_cp01_ParamLimits

0xac2b,	// (0x000554be) bg_popup_window_pane_cp01

0xac39,	// (0x000554cc) heading_pane_cp08_ParamLimits

0xac39,	// (0x000554cc) heading_pane_cp08

0xac47,	// (0x000554da) heading_pane_cp07_ParamLimits

0xac47,	// (0x000554da) heading_pane_cp07

0xacb6,	// (0x00055549) cell_tport_appsw_pane_g2

0x0002,

0xfc95,	// (0x0005a528) cell_tport_appsw_pane_g

0x031f,	// (0x0004abb2) input_candi_list_open_g1

0xc4c1,	// (0x00056d54) list_cale_time_pane_g6_ParamLimits

0xc4c1,	// (0x00056d54) list_cale_time_pane_g6

0x750b,	// (0x00051d9e) aid_size_touch_calib_1_ParamLimits

0x750b,	// (0x00051d9e) aid_size_touch_calib_1

0x7517,	// (0x00051daa) aid_size_touch_calib_2_ParamLimits

0x7517,	// (0x00051daa) aid_size_touch_calib_2

0x7525,	// (0x00051db8) aid_size_touch_calib_3_ParamLimits

0x7525,	// (0x00051db8) aid_size_touch_calib_3

0x7535,	// (0x00051dc8) aid_size_touch_calib_4_ParamLimits

0x7535,	// (0x00051dc8) aid_size_touch_calib_4

0x7543,	// (0x00051dd6) main_touch_calib_button_group_pane_ParamLimits

0x7543,	// (0x00051dd6) main_touch_calib_button_group_pane

0x7551,	// (0x00051de4) main_touch_calib_pane_g1_ParamLimits

0x755d,	// (0x00051df0) main_touch_calib_pane_g2_ParamLimits

0x7569,	// (0x00051dfc) main_touch_calib_pane_g3_ParamLimits

0x7575,	// (0x00051e08) main_touch_calib_pane_g4_ParamLimits

0xf6d7,	// (0x00059f6a) main_touch_calib_pane_g_ParamLimits

0x7581,	// (0x00051e14) main_touch_calib_pane_t1_ParamLimits

0x759a,	// (0x00051e2d) main_touch_calib_pane_t2_ParamLimits

0x75b3,	// (0x00051e46) main_touch_calib_pane_t3_ParamLimits

0x75c9,	// (0x00051e5c) main_touch_calib_pane_t4_ParamLimits

0x75df,	// (0x00051e72) main_touch_calib_pane_t5_ParamLimits

0xf6e0,	// (0x00059f73) main_touch_calib_pane_t_ParamLimits

0xe599,	// (0x00058e2c) list_single_fp_cale_pane_g3_ParamLimits

0xe599,	// (0x00058e2c) list_single_fp_cale_pane_g3

0x6ff5,	// (0x00051888) bg_button_pane_cp012_ParamLimits

0x6ff5,	// (0x00051888) bg_vkb2_func_pane_cp03_ParamLimits

0x93e8,	// (0x00053c7b) cell_vitu2_function_top_pane_g1_ParamLimits

0x6ff5,	// (0x00051888) bg_vkb2_func_pane_cp04_ParamLimits

0xa24a,	// (0x00054add) main_ncimui_button_group_pane_ParamLimits

0xa24a,	// (0x00054add) main_ncimui_button_group_pane

0xa2b0,	// (0x00054b43) main_ncimui_pane_t3_ParamLimits

0xa2b0,	// (0x00054b43) main_ncimui_pane_t3

0x18ef,	// (0x0004c182) phacti_button_group_pane

0x1bf5,	// (0x0004c488) aid_size_list_single_double_ParamLimits

0xb110,	// (0x000559a3) popup_ezdial_listscroll_window_ParamLimits

0xb134,	// (0x000559c7) popup_number_entry_window_cp01_ParamLimits

0xb1d6,	// (0x00055a69) phacti_button_pane_ParamLimits

0xb1d6,	// (0x00055a69) phacti_button_pane

0x347f,	// (0x0004dd12) bg_button_pane_cp14

0x1d03,	// (0x0004c596) phacti_button_pane_t1

0xb1e7,	// (0x00055a7a) main_touch_calib_button_pane_ParamLimits

0xb1e7,	// (0x00055a7a) main_touch_calib_button_pane

0x4106,	// (0x0004e999) bg_button_pane_cp18_ParamLimits

0x4106,	// (0x0004e999) bg_button_pane_cp18

0x1d11,	// (0x0004c5a4) main_touch_calib_button_pane_t1_ParamLimits

0x1d11,	// (0x0004c5a4) main_touch_calib_button_pane_t1

0x1d27,	// (0x0004c5ba) main_touch_calib_button_pane_t2_ParamLimits

0x1d27,	// (0x0004c5ba) main_touch_calib_button_pane_t2

0x0001,

0xfd4e,	// (0x0005a5e1) main_touch_calib_button_pane_t_ParamLimits

0xfd4e,	// (0x0005a5e1) main_touch_calib_button_pane_t

0x347f,	// (0x0004dd12) cell_ncimui_button_pane

0x347f,	// (0x0004dd12) bg_button_pane_cp032

0x1d45,	// (0x0004c5d8) cell_ncimui_button_pane_t1

0x855a,	// (0x00052ded) image3_infobar_pane_ParamLimits

0x855a,	// (0x00052ded) image3_infobar_pane

0xa66d,	// (0x00054f00) fs_bigclock_status_pane_ParamLimits

0xa66d,	// (0x00054f00) fs_bigclock_status_pane

0xa67a,	// (0x00054f0d) main_fs_bigclock_clock_pane_ParamLimits

0xa67a,	// (0x00054f0d) main_fs_bigclock_clock_pane

0xa68e,	// (0x00054f21) main_fs_bigclock_indi_pane_ParamLimits

0xa68e,	// (0x00054f21) main_fs_bigclock_indi_pane

0xa6b6,	// (0x00054f49) main_fs_bigclock_swipe_pane_ParamLimits

0xa6b6,	// (0x00054f49) main_fs_bigclock_swipe_pane

0x347f,	// (0x0004dd12) main_fs_clock_dumped_data

0x12ab,	// (0x0004bb3e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x12ab,	// (0x0004bb3e) list_single_fs_bigclock_indicator_pane_g1

0x12c7,	// (0x0004bb5a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x12c7,	// (0x0004bb5a) list_single_fs_bigclock_indicator_pane_g2

0x12e1,	// (0x0004bb74) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x12e1,	// (0x0004bb74) list_single_fs_bigclock_indicator_pane_g3

0x12fb,	// (0x0004bb8e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x12fb,	// (0x0004bb8e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbef,	// (0x0005a482) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbef,	// (0x0005a482) list_single_fs_bigclock_indicator_pane_g

0x1326,	// (0x0004bbb9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1326,	// (0x0004bbb9) list_single_fs_bigclock_indicator_pane_t1

0x134e,	// (0x0004bbe1) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x134e,	// (0x0004bbe1) list_single_fs_bigclock_indicator_pane_t2

0x1376,	// (0x0004bc09) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1376,	// (0x0004bc09) list_single_fs_bigclock_indicator_pane_t3

0x139e,	// (0x0004bc31) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x139e,	// (0x0004bc31) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfa,	// (0x0005a48d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfa,	// (0x0005a48d) list_single_fs_bigclock_indicator_pane_t

0x1d53,	// (0x0004c5e6) image3_infobar_fav_pane_ParamLimits

0x1d53,	// (0x0004c5e6) image3_infobar_fav_pane

0x1d63,	// (0x0004c5f6) image3_infobar_loc_pane_ParamLimits

0x1d63,	// (0x0004c5f6) image3_infobar_loc_pane

0x1d77,	// (0x0004c60a) image3_infobar_time_pane_ParamLimits

0x1d77,	// (0x0004c60a) image3_infobar_time_pane

0x4b67,	// (0x0004f3fa) image3_infobar_time_pane_g1

0x1d87,	// (0x0004c61a) image3_infobar_time_pane_t1

0x4b67,	// (0x0004f3fa) image3_infobar_loc_pane_g1

0x1d95,	// (0x0004c628) image3_infobar_loc_pane_g2

0x0001,

0xfd53,	// (0x0005a5e6) image3_infobar_loc_pane_g

0x1d9d,	// (0x0004c630) image3_infobar_loc_pane_t1

0x4b67,	// (0x0004f3fa) image3_infobar_fav_pane_g1

0x1dab,	// (0x0004c63e) image3_infobar_fav_pane_g2

0x0001,

0xfd58,	// (0x0005a5eb) image3_infobar_fav_pane_g

0x1db3,	// (0x0004c646) fs_bigclock_status_battery_pane

0x1dbc,	// (0x0004c64f) fs_bigclock_status_signal_pane

0x1dc5,	// (0x0004c658) fs_bigclock_status_title_pane

0x1dce,	// (0x0004c661) fs_bigclock_status_signal_pane_g1

0x1dd7,	// (0x0004c66a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5d,	// (0x0005a5f0) fs_bigclock_status_signal_pane_g

0x1ddf,	// (0x0004c672) fs_bigclock_status_battery_pane_g1

0x1de8,	// (0x0004c67b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd62,	// (0x0005a5f5) fs_bigclock_status_battery_pane_g

0x1df0,	// (0x0004c683) fs_bigclock_status_title_pane_t1

0xb1f7,	// (0x00055a8a) main_fs_bigclock_clock_pane_g1

0xb1f7,	// (0x00055a8a) main_fs_bigclock_clock_pane_g2

0xb204,	// (0x00055a97) main_fs_bigclock_clock_pane_g3

0xb204,	// (0x00055a97) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd67,	// (0x0005a5fa) main_fs_bigclock_clock_pane_g

0xb210,	// (0x00055aa3) main_fs_bigclock_clock_pane_t1

0xb223,	// (0x00055ab6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd70,	// (0x0005a603) main_fs_bigclock_clock_pane_t

0x1dfe,	// (0x0004c691) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1dfe,	// (0x0004c691) list_single_fs_bigclock_indicator_pane

0x1e0f,	// (0x0004c6a2) list_single_fs_bigclock_pane_ParamLimits

0x1e0f,	// (0x0004c6a2) list_single_fs_bigclock_pane

0x1e35,	// (0x0004c6c8) main_fs_bigclock_indicator_pane_t1

0x1e44,	// (0x0004c6d7) list_single_fs_bigclock_pane_g1

0x1e4c,	// (0x0004c6df) list_single_fs_bigclock_pane_t1

0x4b67,	// (0x0004f3fa) main_fs_bigclock_swipe_pane_g1

0x1e8f,	// (0x0004c722) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd81,	// (0x0005a614) main_fs_bigclock_swipe_pane_g

0x1e97,	// (0x0004c72a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1e97,	// (0x0004c72a) main_fs_bigclock_swipe_pane_t1

0x6213,	// (0x00050aa6) call_type_pane_ParamLimits

0x347f,	// (0x0004dd12) main_btmg_pane

0x1acb,	// (0x0004c35e) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1acb,	// (0x0004c35e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf4,	// (0x0005a587) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf4,	// (0x0005a587) list_single_cale_mrui_row_pane_g

0x1c4f,	// (0x0004c4e2) list_recal_vselct_arw_lo_pane

0x1c57,	// (0x0004c4ea) list_recal_vselct_arw_up_pane

0x1c5f,	// (0x0004c4f2) list_recal_vselct_pane

0xb27a,	// (0x00055b0d) btmg_button_pane

0xb286,	// (0x00055b19) main_btmg_pane_g1

0x347f,	// (0x0004dd12) bg_button_pane_cp044

0x1eb4,	// (0x0004c747) btmg_button_pane_t1

0xde25,	// (0x000586b8) aid_listscroll_gen

0x3ea4,	// (0x0004e737) main_cntbar_detail_pane

0x17b8,	// (0x0004c04b) list_cmail_folder_pane

0xedcb,	// (0x0005965e) sp_fs_scroll_pane_cp03_ParamLimits

0xad49,	// (0x000555dc) list_single_fs_dyc_pane_cp01_ParamLimits

0xad49,	// (0x000555dc) list_single_fs_dyc_pane_cp01

0x1ec2,	// (0x0004c755) aid_size_cmail_indent

0x1ecb,	// (0x0004c75e) list_single_dyc_row_pane_cp01

0xb2ae,	// (0x00055b41) cntbar_detail_list_pane_ParamLimits

0xb2ae,	// (0x00055b41) cntbar_detail_list_pane

0xb2e8,	// (0x00055b7b) main_cntbar_detail_cont_pane_ParamLimits

0xb2e8,	// (0x00055b7b) main_cntbar_detail_cont_pane

0x6207,	// (0x00050a9a) scroll_pane_cp032_ParamLimits

0x6207,	// (0x00050a9a) scroll_pane_cp032

0xb2f4,	// (0x00055b87) cntbar_detail_list_event_pane_ParamLimits

0xb2f4,	// (0x00055b87) cntbar_detail_list_event_pane

0xb2ba,	// (0x00055b4d) cntbar_detail_list_shct_pane

0x534b,	// (0x0004fbde) aid_list_gen

0x1ed4,	// (0x0004c767) aid_scroll

0x1edd,	// (0x0004c770) aid_size_touch_scroll_bar

0xedd7,	// (0x0005966a) aid_list_double

0xb308,	// (0x00055b9b) aid_list_single

0xb311,	// (0x00055ba4) aid_list_single_lg

0x1ee6,	// (0x0004c779) aid_list_z_g_a_sm

0x1eee,	// (0x0004c781) aid_list_z_g_d

0x1ef6,	// (0x0004c789) aid_txt_z_prm

0x1f04,	// (0x0004c797) aid_txt_z_prm_cp01

0x1f12,	// (0x0004c7a5) aid_txt_z_sec

0xb31a,	// (0x00055bad) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb31a,	// (0x00055bad) main_cntbar_detail_cont_pane_g1

0xb327,	// (0x00055bba) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb327,	// (0x00055bba) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd86,	// (0x0005a619) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd86,	// (0x0005a619) main_cntbar_detail_cont_pane_g

0x1f20,	// (0x0004c7b3) main_cntbar_detail_cont_pane_t1

0x1f2e,	// (0x0004c7c1) main_cntbar_detail_cont_pane_t2

0x1f3c,	// (0x0004c7cf) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8b,	// (0x0005a61e) main_cntbar_detail_cont_pane_t

0xb333,	// (0x00055bc6) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb333,	// (0x00055bc6) cell_cntbar_detail_list_shct_pane

0x1f4a,	// (0x0004c7dd) cntbar_detail_list_shct_pane_g1

0x1f53,	// (0x0004c7e6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd92,	// (0x0005a625) cntbar_detail_list_shct_pane_g

0xb347,	// (0x00055bda) cntbar_detail_list_event_pane_g1_ParamLimits

0xb347,	// (0x00055bda) cntbar_detail_list_event_pane_g1

0xb353,	// (0x00055be6) cntbar_detail_list_event_pane_g2_ParamLimits

0xb353,	// (0x00055be6) cntbar_detail_list_event_pane_g2

0x0005,

0xfd97,	// (0x0005a62a) cntbar_detail_list_event_pane_g_ParamLimits

0xfd97,	// (0x0005a62a) cntbar_detail_list_event_pane_g

0xb3bf,	// (0x00055c52) cntbar_detail_list_event_pane_t1_ParamLimits

0xb3bf,	// (0x00055c52) cntbar_detail_list_event_pane_t1

0xb3d4,	// (0x00055c67) cntbar_detail_list_event_pane_t2_ParamLimits

0xb3d4,	// (0x00055c67) cntbar_detail_list_event_pane_t2

0x0002,

0xfda4,	// (0x0005a637) cntbar_detail_list_event_pane_t_ParamLimits

0xfda4,	// (0x0005a637) cntbar_detail_list_event_pane_t

0x4b67,	// (0x0004f3fa) cell_cntbar_detail_list_shct_pane_g1

0xca9e,	// (0x00057331) navi_pane_mv_g3

0x3ea4,	// (0x0004e737) main_cntbar_detail_pane_ParamLimits

0x347f,	// (0x0004dd12) main_notif_wgt_pane

0x81e4,	// (0x00052a77) aid_tch_main_mp4_pane_g4

0x8443,	// (0x00052cd6) popup_slider_window_cp02

0x1c45,	// (0x0004c4d8) list_recal_day_event_pane

0xb28e,	// (0x00055b21) cntbar_detail_btn_pane_ParamLimits

0xb28e,	// (0x00055b21) cntbar_detail_btn_pane

0xb29e,	// (0x00055b31) cntbar_detail_btn_pane_cp01_ParamLimits

0xb29e,	// (0x00055b31) cntbar_detail_btn_pane_cp01

0xb2ba,	// (0x00055b4d) cntbar_detail_list_shct_pane_ParamLimits

0xb2c6,	// (0x00055b59) cntbar_detail_pane_g1_ParamLimits

0xb2c6,	// (0x00055b59) cntbar_detail_pane_g1

0xb2d2,	// (0x00055b65) cntbar_detail_pane_t1_ParamLimits

0xb2d2,	// (0x00055b65) cntbar_detail_pane_t1

0xb35f,	// (0x00055bf2) cntbar_detail_list_event_pane_g3_ParamLimits

0xb35f,	// (0x00055bf2) cntbar_detail_list_event_pane_g3

0xb377,	// (0x00055c0a) cntbar_detail_list_event_pane_g4_ParamLimits

0xb377,	// (0x00055c0a) cntbar_detail_list_event_pane_g4

0xb38f,	// (0x00055c22) cntbar_detail_list_event_pane_g5_ParamLimits

0xb38f,	// (0x00055c22) cntbar_detail_list_event_pane_g5

0xb3a7,	// (0x00055c3a) cntbar_detail_list_event_pane_g6_ParamLimits

0xb3a7,	// (0x00055c3a) cntbar_detail_list_event_pane_g6

0xb3e9,	// (0x00055c7c) cntbar_detail_list_event_pane_t3_ParamLimits

0xb3e9,	// (0x00055c7c) cntbar_detail_list_event_pane_t3

0xb3fb,	// (0x00055c8e) popup_notif_wgt_window_ParamLimits

0xb3fb,	// (0x00055c8e) popup_notif_wgt_window

0xb40b,	// (0x00055c9e) popup_submenu_window_cp01_ParamLimits

0xb40b,	// (0x00055c9e) popup_submenu_window_cp01

0x49a9,	// (0x0004f23c) bg_popup_window_pane_cp10

0x1f5c,	// (0x0004c7ef) listscroll_notif_wgt_pane

0x1f6e,	// (0x0004c801) list_notif_wgt_window

0x1f77,	// (0x0004c80a) scroll_pane_cp033

0xb419,	// (0x00055cac) list_notif_wgt_row_pane_ParamLimits

0xb419,	// (0x00055cac) list_notif_wgt_row_pane

0x1f80,	// (0x0004c813) aid_size_list_notif_wgt_del

0x1f8d,	// (0x0004c820) list_notif_wgt_row_pane_g1

0x1f99,	// (0x0004c82c) list_notif_wgt_row_pane_g2

0x1fa8,	// (0x0004c83b) list_notif_wgt_row_pane_g3

0x0002,

0xfdab,	// (0x0005a63e) list_notif_wgt_row_pane_g

0x1fb5,	// (0x0004c848) list_notif_wgt_row_pane_t1

0x1fcb,	// (0x0004c85e) list_notif_wgt_row_pane_t2

0x1fdd,	// (0x0004c870) list_notif_wgt_row_pane_t3

0x0002,

0xfdb2,	// (0x0005a645) list_notif_wgt_row_pane_t

0xed7b,	// (0x0005960e) list_recal_day_event_pane_g1

0x1fef,	// (0x0004c882) list_recal_day_event_pane_t1

0x347f,	// (0x0004dd12) bg_button_pane_cp045

0xb42b,	// (0x00055cbe) cntbar_detail_btn_pane_t1

0xde39,	// (0x000586cc) main_callh_pane_ParamLimits

0xde39,	// (0x000586cc) main_callh_pane

0x347f,	// (0x0004dd12) main_coverflow0_pane

0x347f,	// (0x0004dd12) main_wgtman_pane

0xa6ce,	// (0x00054f61) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa6ce,	// (0x00054f61) main_fs_bigclock_unlock_btn_pane

0xacae,	// (0x00055541) bg_button_pane_cp16

0xacbe,	// (0x00055551) cell_tport_appsw_pane_g3

0xb439,	// (0x00055ccc) cf0_flow_pane_ParamLimits

0xb439,	// (0x00055ccc) cf0_flow_pane

0x1ffe,	// (0x0004c891) listscroll_cf0_pane

0x2009,	// (0x0004c89c) main_cf0_pane_g1

0xb448,	// (0x00055cdb) main_cf0_pane_t1_ParamLimits

0xb448,	// (0x00055cdb) main_cf0_pane_t1

0xb45c,	// (0x00055cef) main_cf0_pane_t2_ParamLimits

0xb45c,	// (0x00055cef) main_cf0_pane_t2

0x0001,

0xfdbe,	// (0x0005a651) main_cf0_pane_t_ParamLimits

0xfdbe,	// (0x0005a651) main_cf0_pane_t

0x201b,	// (0x0004c8ae) scroll_pane_cp11

0xb470,	// (0x00055d03) cf0_flow_pane_g1

0xb478,	// (0x00055d0b) cf0_flow_pane_g2

0x0001,

0xfdc3,	// (0x0005a656) cf0_flow_pane_g

0xb480,	// (0x00055d13) cf0_flow_pane_t1

0x347f,	// (0x0004dd12) main_call6_pane

0x347f,	// (0x0004dd12) main_calllock_pane

0xb48e,	// (0x00055d21) call6_btn_grp_pane_ParamLimits

0xb48e,	// (0x00055d21) call6_btn_grp_pane

0xb49d,	// (0x00055d30) call6_pane_g1_ParamLimits

0xb49d,	// (0x00055d30) call6_pane_g1

0xb4ad,	// (0x00055d40) popup_call6_1st_window_ParamLimits

0xb4ad,	// (0x00055d40) popup_call6_1st_window

0xb4bb,	// (0x00055d4e) popup_call6_2nd_window_ParamLimits

0xb4bb,	// (0x00055d4e) popup_call6_2nd_window

0xb4c9,	// (0x00055d5c) cell_call6_btn_pane_ParamLimits

0xb4c9,	// (0x00055d5c) cell_call6_btn_pane

0x49a9,	// (0x0004f23c) bg_popup_call2_in_pane_cp03

0x2026,	// (0x0004c8b9) popup_call6_1st_window_g1

0x202e,	// (0x0004c8c1) popup_call6_1st_window_g2

0x2036,	// (0x0004c8c9) popup_call6_1st_window_g3

0x0002,

0xfdc8,	// (0x0005a65b) popup_call6_1st_window_g

0x203e,	// (0x0004c8d1) popup_call6_1st_window_t1

0x204d,	// (0x0004c8e0) popup_call6_1st_window_t2

0x205b,	// (0x0004c8ee) popup_call6_1st_window_t3

0x0002,

0xfdcf,	// (0x0005a662) popup_call6_1st_window_t

0x49a9,	// (0x0004f23c) bg_popup_call2_in_pane_cp04

0x2069,	// (0x0004c8fc) popup_call6_2nd_window_g1

0x2071,	// (0x0004c904) popup_call6_2nd_window_g2

0x2079,	// (0x0004c90c) popup_call6_2nd_window_g3

0x0002,

0xfdd6,	// (0x0005a669) popup_call6_2nd_window_g

0x2081,	// (0x0004c914) popup_call6_2nd_window_t1

0x3753,	// (0x0004dfe6) bg_button_pane_cp15

0xb4d8,	// (0x00055d6b) cell_call6_btn_pane_g1

0xb4e1,	// (0x00055d74) cell_call6_btn_pane_t1

0xb4f0,	// (0x00055d83) listscroll_wgtman_pane_ParamLimits

0xb4f0,	// (0x00055d83) listscroll_wgtman_pane

0xb50c,	// (0x00055d9f) wgtman_btn_pane_ParamLimits

0xb50c,	// (0x00055d9f) wgtman_btn_pane

0xc8b2,	// (0x00057145) aid_scroll_copy1

0x2099,	// (0x0004c92c) list_wgtman_pane

0xb541,	// (0x00055dd4) wgtman_btn_pane_g1_ParamLimits

0xb541,	// (0x00055dd4) wgtman_btn_pane_g1

0xb569,	// (0x00055dfc) wgtman_btn_pane_t1_ParamLimits

0xb569,	// (0x00055dfc) wgtman_btn_pane_t1

0x20a3,	// (0x0004c936) wgtman_btn_pane_t2_ParamLimits

0x20a3,	// (0x0004c936) wgtman_btn_pane_t2

0x0001,

0xfddd,	// (0x0005a670) wgtman_btn_pane_t_ParamLimits

0xfddd,	// (0x0005a670) wgtman_btn_pane_t

0xb5a0,	// (0x00055e33) listrow_wgtman_pane_ParamLimits

0xb5a0,	// (0x00055e33) listrow_wgtman_pane

0xb5bc,	// (0x00055e4f) listrow_wgtman_pane_g1

0xb5c9,	// (0x00055e5c) listrow_wgtman_pane_g2

0x0001,

0xfde2,	// (0x0005a675) listrow_wgtman_pane_g

0xb5e7,	// (0x00055e7a) listrow_wgtman_pane_t1

0xb5ff,	// (0x00055e92) listrow_wgtman_pane_t2

0x0001,

0xfde7,	// (0x0005a67a) listrow_wgtman_pane_t

0xb625,	// (0x00055eb8) wait_bar_pane_cp09

0x20ba,	// (0x0004c94d) main_calllock_btn_pane

0x20c4,	// (0x0004c957) main_calllock_pane_g1

0x347f,	// (0x0004dd12) bg_button_pane_cp17

0x2090,	// (0x0004c923) main_calllock_btn_pane_g1

0x20cc,	// (0x0004c95f) main_calllock_btn_pane_t1

0x347f,	// (0x0004dd12) main_dialer3_pane

0x347f,	// (0x0004dd12) main_fmrd2_pane

0x4b67,	// (0x0004f3fa) main_fs_bigclock_unlock_btn_pane_g1

0xb63f,	// (0x00055ed2) main_fs_bigclock_unlock_btn_pane_t1

0xb64d,	// (0x00055ee0) area_fmrd2_info_pane_ParamLimits

0xb64d,	// (0x00055ee0) area_fmrd2_info_pane

0xb65b,	// (0x00055eee) area_fmrd2_visual_pane_ParamLimits

0xb65b,	// (0x00055eee) area_fmrd2_visual_pane

0xb669,	// (0x00055efc) fmrd2_indi_pane_ParamLimits

0xb669,	// (0x00055efc) fmrd2_indi_pane

0xb676,	// (0x00055f09) area_fmrd2_visual_pane_g1

0xb67e,	// (0x00055f11) area_fmrd2_visual_pane_t1

0xb68e,	// (0x00055f21) area_fmrd2_visual_pane_t2

0xb69e,	// (0x00055f31) area_fmrd2_visual_pane_t3

0x0002,

0xfdf1,	// (0x0005a684) area_fmrd2_visual_pane_t

0xb6ae,	// (0x00055f41) area_fmrd2_info_pane_g1

0xb6b6,	// (0x00055f49) area_fmrd2_info_pane_t1

0xb6c6,	// (0x00055f59) area_fmrd2_info_pane_t2

0xb6d6,	// (0x00055f69) area_fmrd2_info_pane_t3

0xb6e6,	// (0x00055f79) area_fmrd2_info_pane_t4

0x0003,

0xfdf8,	// (0x0005a68b) area_fmrd2_info_pane_t

0xb6f4,	// (0x00055f87) fmrd2_indi_pane_t1

0xb704,	// (0x00055f97) fmrd2_indi_pane_t2

0xb714,	// (0x00055fa7) fmrd2_indi_pane_t3

0x0002,

0xfe01,	// (0x0005a694) fmrd2_indi_pane_t

0x130a,	// (0x0004bb9d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x130a,	// (0x0004bb9d) list_single_fs_bigclock_indicator_pane_g5

0x13bb,	// (0x0004bc4e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x13bb,	// (0x0004bc4e) list_single_fs_bigclock_indicator_pane_t5

0xae61,	// (0x000556f4) aid_cell_bcale_month_pane_ParamLimits

0xae61,	// (0x000556f4) aid_cell_bcale_month_pane

0xae7f,	// (0x00055712) bcale_month_pane_ParamLimits

0xae7f,	// (0x00055712) bcale_month_pane

0xae9d,	// (0x00055730) bcale_preview_pane_ParamLimits

0xae9d,	// (0x00055730) bcale_preview_pane

0x1e4c,	// (0x0004c6df) list_single_fs_bigclock_pane_t1_ParamLimits

0x1e6b,	// (0x0004c6fe) list_single_fs_bigclock_pane_t2_ParamLimits

0x1e6b,	// (0x0004c6fe) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7c,	// (0x0005a60f) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x0005a60f) list_single_fs_bigclock_pane_t

0xb637,	// (0x00055eca) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdec,	// (0x0005a67f) main_fs_bigclock_unlock_btn_pane_g

0xb722,	// (0x00055fb5) aid_dia3_key_size_ParamLimits

0xb722,	// (0x00055fb5) aid_dia3_key_size

0xb72e,	// (0x00055fc1) aid_dia3_listrow_size_ParamLimits

0xb72e,	// (0x00055fc1) aid_dia3_listrow_size

0xb73e,	// (0x00055fd1) dia3_keypad_fun_pane_ParamLimits

0xb73e,	// (0x00055fd1) dia3_keypad_fun_pane

0xb750,	// (0x00055fe3) dia3_keypad_num_pane_ParamLimits

0xb750,	// (0x00055fe3) dia3_keypad_num_pane

0xb762,	// (0x00055ff5) dia3_listscroll_pane_ParamLimits

0xb762,	// (0x00055ff5) dia3_listscroll_pane

0xb770,	// (0x00056003) dia3_numentry_pane_ParamLimits

0xb770,	// (0x00056003) dia3_numentry_pane

0x20db,	// (0x0004c96e) dia3_list_pane

0x20e6,	// (0x0004c979) scroll_pane_cp12

0x347f,	// (0x0004dd12) bg_dia3_numentry_pane

0xb77e,	// (0x00056011) dia3_numentry_pane_t1

0xb78d,	// (0x00056020) cell_dia3_key_num_pane

0xb795,	// (0x00056028) cell_dia3_key0_fun_pane_ParamLimits

0xb795,	// (0x00056028) cell_dia3_key0_fun_pane

0xb7a2,	// (0x00056035) cell_dia3_key1_fun_pane_ParamLimits

0xb7a2,	// (0x00056035) cell_dia3_key1_fun_pane

0xb7af,	// (0x00056042) dia3_listrow_pane

0x105d,	// (0x0004b8f0) bg_dia3_numentry_pane_g1

0x347f,	// (0x0004dd12) bg_button_pane_cp21

0x20f1,	// (0x0004c984) cell_dia3_key_num_pane_t1

0x20ff,	// (0x0004c992) cell_dia3_key_num_pane_t2

0x210e,	// (0x0004c9a1) cell_dia3_key_num_pane_t3

0x211d,	// (0x0004c9b0) cell_dia3_key_num_pane_t4

0x0003,

0xfe08,	// (0x0005a69b) cell_dia3_key_num_pane_t

0x347f,	// (0x0004dd12) bg_button_pane_cp19

0xb7bc,	// (0x0005604f) cell_dia3_key0_fun_pane_g1

0x347f,	// (0x0004dd12) bg_button_pane_cp20

0xb7c4,	// (0x00056057) cell_dia3_key1_fun_pane_g1

0xb7cc,	// (0x0005605f) area_left_week_number_pane

0xb7df,	// (0x00056072) area_top_day_name_pane

0xb7ed,	// (0x00056080) frame_month_view_pane

0x212c,	// (0x0004c9bf) grid_month_view_pane

0xb802,	// (0x00056095) cell_top_day_name_pane_ParamLimits

0xb802,	// (0x00056095) cell_top_day_name_pane

0xb81c,	// (0x000560af) cell_area_left_week_number_pane_ParamLimits

0xb81c,	// (0x000560af) cell_area_left_week_number_pane

0xb83f,	// (0x000560d2) cell_month_view_pane_ParamLimits

0xb83f,	// (0x000560d2) cell_month_view_pane

0x213a,	// (0x0004c9cd) frm_month_g1

0xb86b,	// (0x000560fe) frm_month_g2

0xb87c,	// (0x0005610f) frm_month_g3

0xb88d,	// (0x00056120) frm_month_g4

0xb89e,	// (0x00056131) frm_month_g5

0xb8b1,	// (0x00056144) frm_month_g6

0xb8c4,	// (0x00056157) frm_month_g7

0x2147,	// (0x0004c9da) frm_month_g8

0xb8d7,	// (0x0005616a) frm_month_g9

0xb8e4,	// (0x00056177) frm_month_g10

0xb8f1,	// (0x00056184) frm_month_g11

0xb8fe,	// (0x00056191) frm_month_g12

0xb90b,	// (0x0005619e) frm_month_g13

0xb918,	// (0x000561ab) frm_month_g14

0xb927,	// (0x000561ba) frm_month_g15

0xb936,	// (0x000561c9) frm_month_g16

0x000f,

0xfe11,	// (0x0005a6a4) frm_month_g

0x2154,	// (0x0004c9e7) cell_top_day_name_pane_t1

0xb945,	// (0x000561d8) cell_area_left_week_number_pane_g1

0xb954,	// (0x000561e7) cell_area_left_week_number_pane_t1

0x3f0b,	// (0x0004e79e) cell_month_view_pane_g1

0xb96a,	// (0x000561fd) cell_month_view_pane_t1

0x347f,	// (0x0004dd12) main_fps_pane

0x15ea,	// (0x0004be7d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x15ea,	// (0x0004be7d) cmail_ddmenu_btn02_pane_cp1

0x1606,	// (0x0004be99) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1606,	// (0x0004be99) cmail_ddmenu_btn02_pane_cp2

0xb15e,	// (0x000559f1) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb15e,	// (0x000559f1) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2f,	// (0x0005a5c2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2f,	// (0x0005a5c2) cmail_ddmenu_btn02_pane_g

0xb17c,	// (0x00055a0f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb17c,	// (0x00055a0f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd34,	// (0x0005a5c7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd34,	// (0x0005a5c7) cmail_ddmenu_btn02_pane_t

0xb980,	// (0x00056213) fps_text_pane_ParamLimits

0xb980,	// (0x00056213) fps_text_pane

0xb98d,	// (0x00056220) main_fps_pane_g1_ParamLimits

0xb98d,	// (0x00056220) main_fps_pane_g1

0xb99b,	// (0x0005622e) wait_bar_pane_cp010_ParamLimits

0xb99b,	// (0x0005622e) wait_bar_pane_cp010

0xb9a7,	// (0x0005623a) fps_text_pane_t1_ParamLimits

0xb9a7,	// (0x0005623a) fps_text_pane_t1

0x88fa,	// (0x0005318d) cam4_image_uncrop_pane_g1

0x8903,	// (0x00053196) cam4_image_uncrop_pane_g2

0x890c,	// (0x0005319f) cam4_image_uncrop_pane_g3

0x8915,	// (0x000531a8) cam4_image_uncrop_pane_g4

0x0003,

0xf873,	// (0x0005a106) cam4_image_uncrop_pane_g

0xb7af,	// (0x00056042) dia3_listrow_pane_ParamLimits

0x347f,	// (0x0004dd12) main_phob2_pane

0xac90,	// (0x00055523) cell_tport_appsw_pane_cp02_ParamLimits

0xac90,	// (0x00055523) cell_tport_appsw_pane_cp02

0xac9f,	// (0x00055532) cell_tport_appsw_pane_cp03_ParamLimits

0xac9f,	// (0x00055532) cell_tport_appsw_pane_cp03

0x347f,	// (0x0004dd12) phob2_contact_card_pane

0x347f,	// (0x0004dd12) phob2_listscroll_pane

0x2167,	// (0x0004c9fa) phob2_list_pane

0x216f,	// (0x0004ca02) scroll_pane_cp034

0xb9c0,	// (0x00056253) phob2_cc_data_pane_ParamLimits

0xb9c0,	// (0x00056253) phob2_cc_data_pane

0xb9da,	// (0x0005626d) phob2_cc_listscroll_pane_ParamLimits

0xb9da,	// (0x0005626d) phob2_cc_listscroll_pane

0xb5a0,	// (0x00055e33) list_double_large_graphic_phob2_pane_ParamLimits

0xb5a0,	// (0x00055e33) list_double_large_graphic_phob2_pane

0xb9f4,	// (0x00056287) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb9f4,	// (0x00056287) list_double_large_graphic_phob2_pane_g1

0xba01,	// (0x00056294) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xba01,	// (0x00056294) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe32,	// (0x0005a6c5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe32,	// (0x0005a6c5) list_double_large_graphic_phob2_pane_g

0xba27,	// (0x000562ba) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xba27,	// (0x000562ba) list_double_large_graphic_phob2_pane_t1

0xba3c,	// (0x000562cf) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xba3c,	// (0x000562cf) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3b,	// (0x0005a6ce) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3b,	// (0x0005a6ce) list_double_large_graphic_phob2_pane_t

0x347f,	// (0x0004dd12) list_highlight_pane_cp024

0x2177,	// (0x0004ca0a) phob2_cc_button_pane

0xba51,	// (0x000562e4) phob2_cc_data_pane_g1_ParamLimits

0xba51,	// (0x000562e4) phob2_cc_data_pane_g1

0xba60,	// (0x000562f3) phob2_cc_data_pane_g2_ParamLimits

0xba60,	// (0x000562f3) phob2_cc_data_pane_g2

0x0001,

0xfe40,	// (0x0005a6d3) phob2_cc_data_pane_g_ParamLimits

0xfe40,	// (0x0005a6d3) phob2_cc_data_pane_g

0xba6f,	// (0x00056302) phob2_cc_data_pane_t1_ParamLimits

0xba6f,	// (0x00056302) phob2_cc_data_pane_t1

0xba84,	// (0x00056317) phob2_cc_data_pane_t2_ParamLimits

0xba84,	// (0x00056317) phob2_cc_data_pane_t2

0xba99,	// (0x0005632c) phob2_cc_data_pane_t3_ParamLimits

0xba99,	// (0x0005632c) phob2_cc_data_pane_t3

0x0002,

0xfe45,	// (0x0005a6d8) phob2_cc_data_pane_t_ParamLimits

0xfe45,	// (0x0005a6d8) phob2_cc_data_pane_t

0x217f,	// (0x0004ca12) phob2_cc_list_pane_ParamLimits

0x217f,	// (0x0004ca12) phob2_cc_list_pane

0xf05f,	// (0x000598f2) scroll_pane_cp035_ParamLimits

0xf05f,	// (0x000598f2) scroll_pane_cp035

0x3ea4,	// (0x0004e737) bg_button_pane_cp033

0x218b,	// (0x0004ca1e) phob2_cc_button_pane_g1

0x2197,	// (0x0004ca2a) phob2_cc_button_pane_t1

0x21ac,	// (0x0004ca3f) phob2_cc_button_pane_t2

0x0001,

0xfe4c,	// (0x0005a6df) phob2_cc_button_pane_t

0xbaae,	// (0x00056341) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbaae,	// (0x00056341) list_double_large_graphic_phob2_cc_pane

0xbb22,	// (0x000563b5) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbb22,	// (0x000563b5) list_double_large_graphic_phob2_cc_pane_g1

0xbb33,	// (0x000563c6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xbb33,	// (0x000563c6) list_double_large_graphic_phob2_cc_pane_g2

0xbb3f,	// (0x000563d2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xbb3f,	// (0x000563d2) list_double_large_graphic_phob2_cc_pane_g3

0xbb4b,	// (0x000563de) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xbb4b,	// (0x000563de) list_double_large_graphic_phob2_cc_pane_g4

0xbb57,	// (0x000563ea) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xbb57,	// (0x000563ea) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe51,	// (0x0005a6e4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe51,	// (0x0005a6e4) list_double_large_graphic_phob2_cc_pane_g

0xbb63,	// (0x000563f6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xbb63,	// (0x000563f6) list_double_large_graphic_phob2_cc_pane_t1

0xbb8c,	// (0x0005641f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xbb8c,	// (0x0005641f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5c,	// (0x0005a6ef) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5c,	// (0x0005a6ef) list_double_large_graphic_phob2_cc_pane_t

0x21be,	// (0x0004ca51) list_highlight_pane_cp025_ParamLimits

0x21be,	// (0x0004ca51) list_highlight_pane_cp025

0x3ea4,	// (0x0004e737) bg_button_pane_cp033_ParamLimits

0x218b,	// (0x0004ca1e) phob2_cc_button_pane_g1_ParamLimits

0x2197,	// (0x0004ca2a) phob2_cc_button_pane_t1_ParamLimits

0x21ac,	// (0x0004ca3f) phob2_cc_button_pane_t2_ParamLimits

0xfe4c,	// (0x0005a6df) phob2_cc_button_pane_t_ParamLimits

0x3747,	// (0x0004dfda) popup_wgtman_window

0xec4d,	// (0x000594e0) scroll_pane_cp038

0xb529,	// (0x00055dbc) wgtman_btn_pane_cp_01_ParamLimits

0xb529,	// (0x00055dbc) wgtman_btn_pane_cp_01

0x21cc,	// (0x0004ca5f) wgtman_content_pane

0x21d5,	// (0x0004ca68) wgtman_heading_pane

0x347f,	// (0x0004dd12) bg_heading_pane_cp02

0x21de,	// (0x0004ca71) wgtman_heading_pane_g1

0x21e6,	// (0x0004ca79) wgtman_heading_pane_t1

0x21f4,	// (0x0004ca87) scroll_pane_cp036

0x21fc,	// (0x0004ca8f) wgtman_list_pane

0x14a6,	// (0x0004bd39) wgtman_list_pane_t1_ParamLimits

0x14a6,	// (0x0004bd39) wgtman_list_pane_t1

0x8859,	// (0x000530ec) cam4_grid_pane

0x959f,	// (0x00053e32) bg_button_pane_cp015_ParamLimits

0x95b4,	// (0x00053e47) bg_button_pane_cp016_ParamLimits

0x95c0,	// (0x00053e53) bg_button_pane_cp017_ParamLimits

0x9618,	// (0x00053eab) popup_vitu2_query_window_g3_ParamLimits

0x9618,	// (0x00053eab) popup_vitu2_query_window_g3

0x96b9,	// (0x00053f4c) popup_vitu2_query_window_t6_ParamLimits

0x96b9,	// (0x00053f4c) popup_vitu2_query_window_t6

0x96e4,	// (0x00053f77) popup_vitu2_query_window_t7_ParamLimits

0x96e4,	// (0x00053f77) popup_vitu2_query_window_t7

0xede0,	// (0x00059673) cam4_grid_pane_g1

0xede9,	// (0x0005967c) cam4_grid_pane_g2

0x2204,	// (0x0004ca97) cam4_grid_pane_g3

0x220d,	// (0x0004caa0) cam4_grid_pane_g4

0x0003,

0xfe61,	// (0x0005a6f4) cam4_grid_pane_g

0x4c7b,	// (0x0004f50e) aid_placing_vt_slider_lsc_ParamLimits

0x500b,	// (0x0004f89e) vidtel_button_pane_ParamLimits

0x500b,	// (0x0004f89e) vidtel_button_pane

0x347f,	// (0x0004dd12) bg_button_pane_cp034

0x2218,	// (0x0004caab) vidtel_button_pane_g1

0x2220,	// (0x0004cab3) vidtel_button_pane_t1

0xed59,	// (0x000595ec) aid_size_vtel_slider_touch

0xf05f,	// (0x000598f2) scroll_pane_cp039

0xa40b,	// (0x00054c9e) ncim_query_button_pane_cp01_ParamLimits

0xa42a,	// (0x00054cbd) ncimui_query_pane_g1_ParamLimits

0x3ea4,	// (0x0004e737) input_focus_pane_cp012_ParamLimits

0x10a3,	// (0x0004b936) ncim_query_entry_pane_t1_ParamLimits

0xf05f,	// (0x000598f2) scroll_pane_cp039_ParamLimits

0xc989,	// (0x0005721c) navi_pane_bcale_mc_g1

0xc991,	// (0x00057224) navi_pane_bcale_mc_t1

0x163a,	// (0x0004becd) main_sp_fs_email_pane_g1

0x1646,	// (0x0004bed9) main_sp_fs_email_pane_g2

0x0001,

0xfc64,	// (0x0005a4f7) main_sp_fs_email_pane_g

0x1ad7,	// (0x0004c36a) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1ad7,	// (0x0004c36a) list_single_cale_mrui_row_pane_g3

0xb19c,	// (0x00055a2f) list_single_recal_day_pane_g5_event_pane

0x1cb6,	// (0x0004c549) list_single_recal_day_pane_g7

0x2236,	// (0x0004cac9) list_recal_day_event_pane_cp01

0x223f,	// (0x0004cad2) list_recal_vselct_arw_lo_pane_cp01

0x2247,	// (0x0004cada) list_recal_vselct_arw_up_pane_cp01

0x224f,	// (0x0004cae2) list_recal_vselct_pane_cp01

0xed7b,	// (0x0005960e) list_recal_day_event_pane_cp01_g1

0x2259,	// (0x0004caec) list_recal_day_event_pane_cp01_t1

0x1cbe,	// (0x0004c551) list_single_recal_day_pane_t1_ParamLimits

0x1cd0,	// (0x0004c563) list_single_recal_day_pane_t2_ParamLimits

0xfd44,	// (0x0005a5d7) list_single_recal_day_pane_t_ParamLimits

0x3e82,	// (0x0004e715) bg_notes_pane_ParamLimits

0x40bb,	// (0x0004e94e) list_notes_pane_ParamLimits

0x40c9,	// (0x0004e95c) scroll_pane_cp06_ParamLimits

0x4106,	// (0x0004e999) main_notes_pane_ParamLimits

0x3ea4,	// (0x0004e737) main_welc_pane

0xbbd6,	// (0x00056469) main_welc_body_pane_ParamLimits

0xbbd6,	// (0x00056469) main_welc_body_pane

0xbbef,	// (0x00056482) main_welc_opti_pane_ParamLimits

0xbbef,	// (0x00056482) main_welc_opti_pane

0xbc4a,	// (0x000564dd) main_welc_pane_t1_ParamLimits

0xbc4a,	// (0x000564dd) main_welc_pane_t1

0xbdd2,	// (0x00056665) main_welc_body_row_pane_ParamLimits

0xbdd2,	// (0x00056665) main_welc_body_row_pane

0x3efd,	// (0x0004e790) main_welc_opti_row_pane_ParamLimits

0x3efd,	// (0x0004e790) main_welc_opti_row_pane

0x2277,	// (0x0004cb0a) main_welc_opti_row_pane_g1

0xbdfb,	// (0x0005668e) main_welc_opti_row_pane_t1

0x227f,	// (0x0004cb12) main_welc_body_row_pane_t1

0x1f66,	// (0x0004c7f9) popup_notif_wgt_heading_pane

0x1f80,	// (0x0004c813) aid_size_list_notif_wgt_del_ParamLimits

0x1f8d,	// (0x0004c820) list_notif_wgt_row_pane_g1_ParamLimits

0x1f99,	// (0x0004c82c) list_notif_wgt_row_pane_g2_ParamLimits

0x1fa8,	// (0x0004c83b) list_notif_wgt_row_pane_g3_ParamLimits

0xfdab,	// (0x0005a63e) list_notif_wgt_row_pane_g_ParamLimits

0x1fb5,	// (0x0004c848) list_notif_wgt_row_pane_t1_ParamLimits

0x1fcb,	// (0x0004c85e) list_notif_wgt_row_pane_t2_ParamLimits

0x1fdd,	// (0x0004c870) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb2,	// (0x0005a645) list_notif_wgt_row_pane_t_ParamLimits

0xb5bc,	// (0x00055e4f) listrow_wgtman_pane_g1_ParamLimits

0xb5c9,	// (0x00055e5c) listrow_wgtman_pane_g2_ParamLimits

0xfde2,	// (0x0005a675) listrow_wgtman_pane_g_ParamLimits

0xb5e7,	// (0x00055e7a) listrow_wgtman_pane_t1_ParamLimits

0xb5ff,	// (0x00055e92) listrow_wgtman_pane_t2_ParamLimits

0xfde7,	// (0x0005a67a) listrow_wgtman_pane_t_ParamLimits

0xb625,	// (0x00055eb8) wait_bar_pane_cp09_ParamLimits

0x347f,	// (0x0004dd12) bg_popup_heading_pane_cp02

0x228e,	// (0x0004cb21) popup_notif_wgt_heading_pane_g1

0x2296,	// (0x0004cb29) popup_notif_wgt_heading_pane_t1

0x347f,	// (0x0004dd12) main_vids_pane

0x347f,	// (0x0004dd12) vids_listscroll_pane

0xbe0a,	// (0x0005669d) scroll_pane_cp040

0x347f,	// (0x0004dd12) vids_list_pane

0xbe15,	// (0x000566a8) vids_list_double_pane_ParamLimits

0xbe15,	// (0x000566a8) vids_list_double_pane

0xbe2d,	// (0x000566c0) vids_list_double_pane_g1

0xbe36,	// (0x000566c9) vids_list_double_pane_t1

0xbe46,	// (0x000566d9) vids_list_double_pane_t2

0x0001,

0xfe80,	// (0x0005a713) vids_list_double_pane_t

0x6ff5,	// (0x00051888) main_ncimui_pane_ParamLimits

0xa262,	// (0x00054af5) main_ncimui_pane_g1_ParamLimits

0xa26e,	// (0x00054b01) main_ncimui_pane_g2_ParamLimits

0xa26e,	// (0x00054b01) main_ncimui_pane_g2

0x0001,

0xfb65,	// (0x0005a3f8) main_ncimui_pane_g_ParamLimits

0xfb65,	// (0x0005a3f8) main_ncimui_pane_g

0xbc08,	// (0x0005649b) main_welc_pane_g1_ParamLimits

0xbc08,	// (0x0005649b) main_welc_pane_g1

0xbc14,	// (0x000564a7) main_welc_pane_g2_ParamLimits

0xbc14,	// (0x000564a7) main_welc_pane_g2

0x0003,

0xfe6a,	// (0x0005a6fd) main_welc_pane_g_ParamLimits

0xfe6a,	// (0x0005a6fd) main_welc_pane_g

0x409d,	// (0x0004e930) listscroll_mce_pane_ParamLimits

0xcade,	// (0x00057371) wait_bar_pane_cp10

0xde2d,	// (0x000586c0) main_cale_day_pane_ParamLimits

0xde2d,	// (0x000586c0) main_cale_week_pane_ParamLimits

0x3e82,	// (0x0004e715) main_messa_pane_ParamLimits

0x7c9a,	// (0x0005252d) main_clock2_btn_pane_ParamLimits

0x7c9a,	// (0x0005252d) main_clock2_btn_pane

0xe630,	// (0x00058ec3) main_clock2_btn_pane_cp01_ParamLimits

0xe630,	// (0x00058ec3) main_clock2_btn_pane_cp01

0x1a63,	// (0x0004c2f6) list_cale_mrui_pane_ParamLimits

0x2013,	// (0x0004c8a6) main_cf0_pane_g2

0x0001,

0xfdb9,	// (0x0005a64c) main_cf0_pane_g

0xb7cc,	// (0x0005605f) area_left_week_number_pane_ParamLimits

0xb7df,	// (0x00056072) area_top_day_name_pane_ParamLimits

0xb7ed,	// (0x00056080) frame_month_view_pane_ParamLimits

0x212c,	// (0x0004c9bf) grid_month_view_pane_ParamLimits

0x213a,	// (0x0004c9cd) frm_month_g1_ParamLimits

0xb86b,	// (0x000560fe) frm_month_g2_ParamLimits

0xb87c,	// (0x0005610f) frm_month_g3_ParamLimits

0xb88d,	// (0x00056120) frm_month_g4_ParamLimits

0xb89e,	// (0x00056131) frm_month_g5_ParamLimits

0xb8b1,	// (0x00056144) frm_month_g6_ParamLimits

0xb8c4,	// (0x00056157) frm_month_g7_ParamLimits

0x2147,	// (0x0004c9da) frm_month_g8_ParamLimits

0xb8d7,	// (0x0005616a) frm_month_g9_ParamLimits

0xb8e4,	// (0x00056177) frm_month_g10_ParamLimits

0xb8f1,	// (0x00056184) frm_month_g11_ParamLimits

0xb8fe,	// (0x00056191) frm_month_g12_ParamLimits

0xb90b,	// (0x0005619e) frm_month_g13_ParamLimits

0xb918,	// (0x000561ab) frm_month_g14_ParamLimits

0xb927,	// (0x000561ba) frm_month_g15_ParamLimits

0xb936,	// (0x000561c9) frm_month_g16_ParamLimits

0xfe11,	// (0x0005a6a4) frm_month_g_ParamLimits

0x2154,	// (0x0004c9e7) cell_top_day_name_pane_t1_ParamLimits

0xb945,	// (0x000561d8) cell_area_left_week_number_pane_g1_ParamLimits

0xb954,	// (0x000561e7) cell_area_left_week_number_pane_t1_ParamLimits

0x3f0b,	// (0x0004e79e) cell_month_view_pane_g1_ParamLimits

0xb96a,	// (0x000561fd) cell_month_view_pane_t1_ParamLimits

0x3e7a,	// (0x0004e70d) main_clock2_btn_pane_g1

0x22a4,	// (0x0004cb37) main_clock2_btn_pane_t1

0x3ea4,	// (0x0004e737) listscroll_cmail_pane_ParamLimits

0x163a,	// (0x0004becd) main_sp_fs_email_pane_g1_ParamLimits

0x1646,	// (0x0004bed9) main_sp_fs_email_pane_g2_ParamLimits

0xfc64,	// (0x0005a4f7) main_sp_fs_email_pane_g_ParamLimits

0x1c26,	// (0x0004c4b9) list_recal_day_pane_ParamLimits

0x1c37,	// (0x0004c4ca) mian_recal_day_pane_t1

0xab7e,	// (0x00055411) list_single_dyc_row_text_pane_t4_ParamLimits

0xab7e,	// (0x00055411) list_single_dyc_row_text_pane_t4

0xabb5,	// (0x00055448) list_single_dyc_row_text_pane_t5_ParamLimits

0xabb5,	// (0x00055448) list_single_dyc_row_text_pane_t5

0x16e8,	// (0x0004bf7b) list_single_dyc_row_text_pane_t6_ParamLimits

0x16e8,	// (0x0004bf7b) list_single_dyc_row_text_pane_t6

0x612c,	// (0x000509bf) aid_mgn_list_cale_time_pane

0x6ff5,	// (0x00051888) main_gallery2_pane_ParamLimits

0xe646,	// (0x00058ed9) main_clock2_pane_cp01_t1

0xe654,	// (0x00058ee7) main_clock2_pane_cp01_t3

0x0001,

0xf74a,	// (0x00059fdd) main_clock2_pane_cp01_t

0x4671,	// (0x0004ef04) cale_week_scroll_pane_g16_ParamLimits

0x4671,	// (0x0004ef04) cale_week_scroll_pane_g16

0x49a9,	// (0x0004f23c) vorec_slider_pane

0x2220,	// (0x0004cab3) vidtel_button_pane_t1_ParamLimits

0xb1f7,	// (0x00055a8a) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb1f7,	// (0x00055a8a) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb204,	// (0x00055a97) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb204,	// (0x00055a97) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd67,	// (0x0005a5fa) main_fs_bigclock_clock_pane_g_ParamLimits

0xb210,	// (0x00055aa3) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb223,	// (0x00055ab6) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd70,	// (0x0005a603) main_fs_bigclock_clock_pane_t_ParamLimits

0x763f,	// (0x00051ed2) main_mup3_lyrics_pane_ParamLimits

0x763f,	// (0x00051ed2) main_mup3_lyrics_pane

0xbe7a,	// (0x0005670d) main_mup3_lyrics_pane_t1_ParamLimits

0xbe7a,	// (0x0005670d) main_mup3_lyrics_pane_t1

0x81ce,	// (0x00052a61) aid_main_mp4_pane_t1_area

0x81d8,	// (0x00052a6b) aid_main_mp4_pane_t2_area

0x82d7,	// (0x00052b6a) main_mp4_pane_g7_ParamLimits

0x82d7,	// (0x00052b6a) main_mp4_pane_g7

0x82e3,	// (0x00052b76) main_mp4_pane_g8_ParamLimits

0x82e3,	// (0x00052b76) main_mp4_pane_g8

0x8703,	// (0x00052f96) aid_call6_pane_g1_size

0xbaf4,	// (0x00056387) list_double_large_graphic_phob2_other_pane_ParamLimits

0xbaf4,	// (0x00056387) list_double_large_graphic_phob2_other_pane

0x60fc,	// (0x0005098f) list_double_large_graphic_phob2_other_pane_g1

0x347f,	// (0x0004dd12) list_highlight_pane_cp026

0x3ea4,	// (0x0004e737) main_welc_pane_ParamLimits

0xaa1d,	// (0x000552b0) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xaa1d,	// (0x000552b0) main_sp_fs_ctrlbar_pane_g3

0xaa35,	// (0x000552c8) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xaa35,	// (0x000552c8) main_sp_fs_ctrlbar_pane_g4

0xaa67,	// (0x000552fa) toolbar2_fixed_button_pane_cp01

0xaa72,	// (0x00055305) toolbar2_fixed_button_pane_cp02

0xaa7d,	// (0x00055310) toolbar2_fixed_button_pane_cp03

0xbbc7,	// (0x0005645a) list_welc_entry_pane_ParamLimits

0xbbc7,	// (0x0005645a) list_welc_entry_pane

0xbc22,	// (0x000564b5) main_welc_pane_g3_ParamLimits

0xbc22,	// (0x000564b5) main_welc_pane_g3

0xbc64,	// (0x000564f7) main_welc_pane_t2_ParamLimits

0xbc64,	// (0x000564f7) main_welc_pane_t2

0xbc78,	// (0x0005650b) main_welc_pane_t3_ParamLimits

0xbc78,	// (0x0005650b) main_welc_pane_t3

0x0005,

0xfe73,	// (0x0005a706) main_welc_pane_t_ParamLimits

0xfe73,	// (0x0005a706) main_welc_pane_t

0xbd74,	// (0x00056607) welc_button_pane_ParamLimits

0xbd74,	// (0x00056607) welc_button_pane

0xbdc4,	// (0x00056657) welc_service_logo_pane_ParamLimits

0xbdc4,	// (0x00056657) welc_service_logo_pane

0xbeb0,	// (0x00056743) list_single_welc_entry_pane_ParamLimits

0xbeb0,	// (0x00056743) list_single_welc_entry_pane

0xbec1,	// (0x00056754) list_single_welc_entry_pane_g1

0xbec9,	// (0x0005675c) list_single_welc_entry_pane_t1

0xbed7,	// (0x0005676a) list_single_welc_entry_pane_t2

0x0001,

0xfe85,	// (0x0005a718) list_single_welc_entry_pane_t

0x347f,	// (0x0004dd12) bg_button_pane_cp035

0x22b2,	// (0x0004cb45) welc_button_pane_t1

0x22c0,	// (0x0004cb53) welc_service_logo_pane_g1

0x22c9,	// (0x0004cb5c) welc_service_logo_pane_g2

0x0001,

0xfe8a,	// (0x0005a71d) welc_service_logo_pane_g

0x3753,	// (0x0004dfe6) main_int_radio_pane

0x0f41,	// (0x0004b7d4) list_single_fs_dyc_pane_g1

0xba0d,	// (0x000562a0) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xba0d,	// (0x000562a0) list_double_large_graphic_phob2_pane_g3

0xba19,	// (0x000562ac) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xba19,	// (0x000562ac) list_double_large_graphic_phob2_pane_g4

0xbee5,	// (0x00056778) main_int_radio1_pane_ParamLimits

0xbee5,	// (0x00056778) main_int_radio1_pane

0x22d2,	// (0x0004cb65) find_pane_cp02

0xbef7,	// (0x0005678a) input_focus_pane_cp12_ParamLimits

0xbef7,	// (0x0005678a) input_focus_pane_cp12

0xbf03,	// (0x00056796) input_focus_pane_cp13_ParamLimits

0xbf03,	// (0x00056796) input_focus_pane_cp13

0xbf1b,	// (0x000567ae) input_focus_pane_cp14_ParamLimits

0xbf1b,	// (0x000567ae) input_focus_pane_cp14

0x22db,	// (0x0004cb6e) int_radio1_listscroll_pane

0xbf33,	// (0x000567c6) main_int_radio1_pane_g1_ParamLimits

0xbf33,	// (0x000567c6) main_int_radio1_pane_g1

0xbf43,	// (0x000567d6) main_int_radio1_pane_t1_ParamLimits

0xbf43,	// (0x000567d6) main_int_radio1_pane_t1

0xbf57,	// (0x000567ea) main_int_radio1_pane_t2_ParamLimits

0xbf57,	// (0x000567ea) main_int_radio1_pane_t2

0xbf6b,	// (0x000567fe) main_int_radio1_pane_t3_ParamLimits

0xbf6b,	// (0x000567fe) main_int_radio1_pane_t3

0xbf7f,	// (0x00056812) main_int_radio1_pane_t4_ParamLimits

0xbf7f,	// (0x00056812) main_int_radio1_pane_t4

0x22e5,	// (0x0004cb78) main_int_radio1_pane_t5_ParamLimits

0x22e5,	// (0x0004cb78) main_int_radio1_pane_t5

0xbf96,	// (0x00056829) main_int_radio1_pane_t6_ParamLimits

0xbf96,	// (0x00056829) main_int_radio1_pane_t6

0xbfa8,	// (0x0005683b) main_int_radio1_pane_t7_ParamLimits

0xbfa8,	// (0x0005683b) main_int_radio1_pane_t7

0xbfba,	// (0x0005684d) main_int_radio1_pane_t8_ParamLimits

0xbfba,	// (0x0005684d) main_int_radio1_pane_t8

0xbfce,	// (0x00056861) main_int_radio1_pane_t9_ParamLimits

0xbfce,	// (0x00056861) main_int_radio1_pane_t9

0xbfe0,	// (0x00056873) main_int_radio1_pane_t10_ParamLimits

0xbfe0,	// (0x00056873) main_int_radio1_pane_t10

0xc011,	// (0x000568a4) main_int_radio1_pane_t11_ParamLimits

0xc011,	// (0x000568a4) main_int_radio1_pane_t11

0xc042,	// (0x000568d5) main_int_radio1_pane_t12_ParamLimits

0xc042,	// (0x000568d5) main_int_radio1_pane_t12

0x000b,

0xfe8f,	// (0x0005a722) main_int_radio1_pane_t_ParamLimits

0xfe8f,	// (0x0005a722) main_int_radio1_pane_t

0x22f7,	// (0x0004cb8a) int_radio_list_pane

0x216f,	// (0x0004ca02) scroll_pane_cp037

0x22ff,	// (0x0004cb92) list_double_large_graphic_int_radio_pane_ParamLimits

0x22ff,	// (0x0004cb92) list_double_large_graphic_int_radio_pane

0x2318,	// (0x0004cbab) list_double_large_graphic_int_radio_pane_g1

0x2321,	// (0x0004cbb4) list_double_large_graphic_int_radio_pane_t1

0x232f,	// (0x0004cbc2) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea8,	// (0x0005a73b) list_double_large_graphic_int_radio_pane_t

0x347f,	// (0x0004dd12) list_highlight_pane_cp027

0x2267,	// (0x0004cafa) main_button_pane_4

0xbc2e,	// (0x000564c1) main_welc_pane_g4_ParamLimits

0xbc2e,	// (0x000564c1) main_welc_pane_g4

0xbc8a,	// (0x0005651d) main_welc_pane_t4_ParamLimits

0xbc8a,	// (0x0005651d) main_welc_pane_t4

0xbc9c,	// (0x0005652f) main_welc_pane_t5_ParamLimits

0xbc9c,	// (0x0005652f) main_welc_pane_t5

0xbccc,	// (0x0005655f) main_welc_pane_t6_ParamLimits

0xbccc,	// (0x0005655f) main_welc_pane_t6

0xbd82,	// (0x00056615) welc_button_pane_2_ParamLimits

0xbd82,	// (0x00056615) welc_button_pane_2

0xbd9a,	// (0x0005662d) welc_button_pane_3_ParamLimits

0xbd9a,	// (0x0005662d) welc_button_pane_3

0x226f,	// (0x0004cb02) welc_button_pane_4

0xbdb4,	// (0x00056647) welc_button_pane_5_ParamLimits

0xbdb4,	// (0x00056647) welc_button_pane_5

0x34c5,	// (0x0004dd58) main_popup_welc_pane

0x234c,	// (0x0004cbdf) main_welc_sk_g3

0x2356,	// (0x0004cbe9) main_welc_sk_g4

0x2360,	// (0x0004cbf3) main_welc_sk_t3

0x2370,	// (0x0004cc03) main_welc_sk_t4

0x2380,	// (0x0004cc13) popup_welc_pane_t4

0x238e,	// (0x0004cc21) popup_welc_pane_t5

0x239e,	// (0x0004cc31) popup_welc_pane_t6

0x3753,	// (0x0004dfe6) main_acti_pane

0x347f,	// (0x0004dd12) main_sso_pane

0xc059,	// (0x000568ec) sso_body_pane_ParamLimits

0xc059,	// (0x000568ec) sso_body_pane

0xc067,	// (0x000568fa) sso_logo_pane_ParamLimits

0xc067,	// (0x000568fa) sso_logo_pane

0xc08e,	// (0x00056921) sso_sk_pane_ParamLimits

0xc08e,	// (0x00056921) sso_sk_pane

0x4b67,	// (0x0004f3fa) main_sso_logo_pane_g1

0xc09b,	// (0x0005692e) sso_sk_pane_t1_ParamLimits

0xc09b,	// (0x0005692e) sso_sk_pane_t1

0xc0af,	// (0x00056942) sso_sk_pane_t2_ParamLimits

0xc0af,	// (0x00056942) sso_sk_pane_t2

0x0001,

0xfead,	// (0x0005a740) sso_sk_pane_t_ParamLimits

0xfead,	// (0x0005a740) sso_sk_pane_t

0x23dc,	// (0x0004cc6f) aid_sso_gap

0x23e5,	// (0x0004cc78) aid_sso_txt1

0x23ef,	// (0x0004cc82) aid_sso_txt2

0x23f9,	// (0x0004cc8c) aid_sso_txt3

0x0002,

0xfeb2,	// (0x0005a745) aid_sso_txt

0x2403,	// (0x0004cc96) aid_sso_widget

0xc10e,	// (0x000569a1) sso_btn_pane_ParamLimits

0xc10e,	// (0x000569a1) sso_btn_pane

0xc187,	// (0x00056a1a) sso_option_pane_ParamLimits

0xc187,	// (0x00056a1a) sso_option_pane

0xc201,	// (0x00056a94) sso_query_pane_ParamLimits

0xc201,	// (0x00056a94) sso_query_pane

0xc251,	// (0x00056ae4) sso_query_pane_cp01_ParamLimits

0xc251,	// (0x00056ae4) sso_query_pane_cp01

0xc2a3,	// (0x00056b36) sso_t_hdr_pane_ParamLimits

0xc2a3,	// (0x00056b36) sso_t_hdr_pane

0xc2c2,	// (0x00056b55) sso_t_nml_pane_ParamLimits

0xc2c2,	// (0x00056b55) sso_t_nml_pane

0x23f9,	// (0x0004cc8c) sso_t_sub_pane

0xc074,	// (0x00056907) sso_popup_window_ParamLimits

0xc074,	// (0x00056907) sso_popup_window

0xc0c1,	// (0x00056954) sso_apps_pane_ParamLimits

0xc0c1,	// (0x00056954) sso_apps_pane

0xc0e4,	// (0x00056977) sso_body_pane_g1

0xc0ee,	// (0x00056981) sso_body_pane_t1

0xc0fe,	// (0x00056991) sso_body_pane_t2

0x0001,

0xfeb9,	// (0x0005a74c) sso_body_pane_t

0xc159,	// (0x000569ec) sso_btn_pane_cp01_ParamLimits

0xc159,	// (0x000569ec) sso_btn_pane_cp01

0xc1d3,	// (0x00056a66) sso_prog_pane_ParamLimits

0xc1d3,	// (0x00056a66) sso_prog_pane

0x240d,	// (0x0004cca0) sso_t_hdr_pane_t1_ParamLimits

0x240d,	// (0x0004cca0) sso_t_hdr_pane_t1

0x2420,	// (0x0004ccb3) input_focus_pane_cp10_ParamLimits

0x2420,	// (0x0004ccb3) input_focus_pane_cp10

0x2436,	// (0x0004ccc9) sso_query_pane_t1_ParamLimits

0x2436,	// (0x0004ccc9) sso_query_pane_t1

0x2449,	// (0x0004ccdc) sso_query_pane_t2_ParamLimits

0x2449,	// (0x0004ccdc) sso_query_pane_t2

0x2462,	// (0x0004ccf5) sso_query_pane_t3_ParamLimits

0x2462,	// (0x0004ccf5) sso_query_pane_t3

0x248c,	// (0x0004cd1f) sso_query_pane_t4_ParamLimits

0x248c,	// (0x0004cd1f) sso_query_pane_t4

0x0003,

0xfebe,	// (0x0005a751) sso_query_pane_t_ParamLimits

0xfebe,	// (0x0005a751) sso_query_pane_t

0x347f,	// (0x0004dd12) bg_button_pane_cp22

0x233d,	// (0x0004cbd0) sso_btn_pane_t1

0xc312,	// (0x00056ba5) sso_t_nml_pane_t1_ParamLimits

0xc312,	// (0x00056ba5) sso_t_nml_pane_t1

0xc32f,	// (0x00056bc2) sso_option_row_pane_ParamLimits

0xc32f,	// (0x00056bc2) sso_option_row_pane

0xc33c,	// (0x00056bcf) sso_t_sub_pane_t1_ParamLimits

0xc33c,	// (0x00056bcf) sso_t_sub_pane_t1

0x3ea4,	// (0x0004e737) bg_popup_window_pane_cp11_ParamLimits

0x3ea4,	// (0x0004e737) bg_popup_window_pane_cp11

0xc34f,	// (0x00056be2) popup_sk_window_cp01_ParamLimits

0xc34f,	// (0x00056be2) popup_sk_window_cp01

0xc35c,	// (0x00056bef) sso_popup_body_pane_ParamLimits

0xc35c,	// (0x00056bef) sso_popup_body_pane

0xc369,	// (0x00056bfc) scroll_pane_cp21_ParamLimits

0xc369,	// (0x00056bfc) scroll_pane_cp21

0xc376,	// (0x00056c09) sso_popup_body_t_pane_ParamLimits

0xc376,	// (0x00056c09) sso_popup_body_t_pane

0xc383,	// (0x00056c16) sso_popup_body_t_hdr_pane_ParamLimits

0xc383,	// (0x00056c16) sso_popup_body_t_hdr_pane

0xc391,	// (0x00056c24) sso_popup_body_t_nml_pane_ParamLimits

0xc391,	// (0x00056c24) sso_popup_body_t_nml_pane

0xc3ac,	// (0x00056c3f) sso_popup_body_t_sub_pane_ParamLimits

0xc3ac,	// (0x00056c3f) sso_popup_body_t_sub_pane

0xc3cf,	// (0x00056c62) sso_popup_body_t_hdr_pane_t1

0xc3df,	// (0x00056c72) sso_popup_body_t_nml_pane_t1_ParamLimits

0xc3df,	// (0x00056c72) sso_popup_body_t_nml_pane_t1

0xc423,	// (0x00056cb6) sso_popup_body_t_sub_pane_t1_ParamLimits

0xc423,	// (0x00056cb6) sso_popup_body_t_sub_pane_t1

0x4b67,	// (0x0004f3fa) sso_prog_pane_g1

0xc448,	// (0x00056cdb) sso_apps_pane_comp1_ParamLimits

0xc448,	// (0x00056cdb) sso_apps_pane_comp1

0xc464,	// (0x00056cf7) sso_apps_pane_comp1_g1

0xc46c,	// (0x00056cff) sso_apps_pane_comp1_t1

0xc47a,	// (0x00056d0d) sso_option_row_pane_g1

0xc482,	// (0x00056d15) sso_option_row_pane_t1

0xbbb5,	// (0x00056448) bg_welc_area_ParamLimits

0xbbb5,	// (0x00056448) bg_welc_area

0xbd02,	// (0x00056595) sso_t_hdr_pane_a_t1_ParamLimits

0xbd02,	// (0x00056595) sso_t_hdr_pane_a_t1

0xbd16,	// (0x000565a9) sso_t_nml_pane_a_t1_ParamLimits

0xbd16,	// (0x000565a9) sso_t_nml_pane_a_t1

0xbd40,	// (0x000565d3) sso_t_sub_pane_a_t1_ParamLimits

0xbd40,	// (0x000565d3) sso_t_sub_pane_a_t1

0x233d,	// (0x0004cbd0) sso_btn_pane_t1_copy1

0x347f,	// (0x0004dd12) welc_button_pane_2_comp1

0x23ac,	// (0x0004cc3f) sso_t_hdr_pane_p_t1

0x23bc,	// (0x0004cc4f) sso_t_nml_pane_p_t1

0x23cc,	// (0x0004cc5f) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
