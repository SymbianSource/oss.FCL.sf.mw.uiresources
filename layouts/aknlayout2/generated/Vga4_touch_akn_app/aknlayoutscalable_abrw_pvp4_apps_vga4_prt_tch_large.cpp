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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0009da1f };

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
0x0aae,	// (0x0009e4cd) Screen

0x0aba,	// (0x0009e4d9) application_window

0x0b0e,	// (0x0009e52d) area_bottom_pane_ParamLimits

0x0b0e,	// (0x0009e52d) area_bottom_pane

0x0b6c,	// (0x0009e58b) area_top_pane_ParamLimits

0x0b6c,	// (0x0009e58b) area_top_pane

0x0bd0,	// (0x0009e5ef) call_video_uplink_pane_ParamLimits

0x0bd0,	// (0x0009e5ef) call_video_uplink_pane

0x0c0f,	// (0x0009e62e) main_pane_ParamLimits

0x0c0f,	// (0x0009e62e) main_pane

0xca18,	// (0x000aa437) context_pane

0x4228,	// (0x000a1c47) navi_pane

0x4250,	// (0x000a1c6f) popup_cale_events_window_ParamLimits

0x4250,	// (0x000a1c6f) popup_cale_events_window

0xca2b,	// (0x000aa44a) popup_mup_playback_window

0x4268,	// (0x000a1c87) signal_pane

0xa500,	// (0x000a7f1f) main_browser_pane

0xab43,	// (0x000a8562) main_burst_pane

0x4078,	// (0x000a1a97) main_calc_pane

0xc9fe,	// (0x000aa41d) main_cale_day_pane

0x4085,	// (0x000a1aa4) main_cale_month_pane

0xc9fe,	// (0x000aa41d) main_cale_week_pane

0xab43,	// (0x000a8562) main_call_pane

0xa1e0,	// (0x000a7bff) main_call_poc_pane

0xab43,	// (0x000a8562) main_camera_pane

0xab43,	// (0x000a8562) main_chi_dic_pane

0xb36f,	// (0x000a8d8e) main_clock_pane

0xa1e0,	// (0x000a7bff) main_fmradio_pane

0xab43,	// (0x000a8562) main_graph_messa_pane

0xa1e0,	// (0x000a7bff) main_help_pane

0xa500,	// (0x000a7f1f) main_im_pane

0xa43b,	// (0x000a7e5a) main_image_pane_ParamLimits

0xa43b,	// (0x000a7e5a) main_image_pane

0xa1e0,	// (0x000a7bff) main_location2_pane

0xab43,	// (0x000a8562) main_location_pane

0xa43b,	// (0x000a7e5a) main_messa_pane

0xa1e0,	// (0x000a7bff) main_mp2_pane

0xab43,	// (0x000a8562) main_mp_pane

0xa1e0,	// (0x000a7bff) main_msg_pane

0xa1e0,	// (0x000a7bff) main_mup_eq_pane

0xa1e0,	// (0x000a7bff) main_mup_pane

0xa500,	// (0x000a7f1f) main_notes_pane

0xa1e0,	// (0x000a7bff) main_pec_pane

0xa1e0,	// (0x000a7bff) main_phob_pane

0xa1e0,	// (0x000a7bff) main_pinb_pane

0xa1e0,	// (0x000a7bff) main_postcard_pane

0xa1e0,	// (0x000a7bff) main_qdial_pane

0xab43,	// (0x000a8562) main_skin_pane

0xa1e0,	// (0x000a7bff) main_smil2_pane

0xab43,	// (0x000a8562) main_smil_pane

0xab43,	// (0x000a8562) main_video_pane

0xab43,	// (0x000a8562) main_video_tele_pane

0xa43b,	// (0x000a7e5a) main_viewer_pane_ParamLimits

0xa43b,	// (0x000a7e5a) main_viewer_pane

0xab43,	// (0x000a8562) main_vorec_pane

0x40d8,	// (0x000a1af7) popup_blid_sat_info_window_ParamLimits

0x40d8,	// (0x000a1af7) popup_blid_sat_info_window

0x40fe,	// (0x000a1b1d) popup_dyc_status_message_window_ParamLimits

0x40fe,	// (0x000a1b1d) popup_dyc_status_message_window

0x410e,	// (0x000a1b2d) popup_grid_large_graphic_window_ParamLimits

0x410e,	// (0x000a1b2d) popup_grid_large_graphic_window

0x41a3,	// (0x000a1bc2) popup_loc_request_window_ParamLimits

0x41a3,	// (0x000a1bc2) popup_loc_request_window

0x41fc,	// (0x000a1c1b) popup_wml_address_window_ParamLimits

0x41fc,	// (0x000a1c1b) popup_wml_address_window

0x3f50,	// (0x000a196f) call_muted_g1

0x3c0f,	// (0x000a162e) popup_call_audio_conf_window_ParamLimits

0x3c0f,	// (0x000a162e) popup_call_audio_conf_window

0x3f60,	// (0x000a197f) popup_call_audio_first_window_ParamLimits

0x3f60,	// (0x000a197f) popup_call_audio_first_window

0x3fa0,	// (0x000a19bf) popup_call_audio_in_window_ParamLimits

0x3fa0,	// (0x000a19bf) popup_call_audio_in_window

0x3fc4,	// (0x000a19e3) popup_call_audio_out_window_ParamLimits

0x3fc4,	// (0x000a19e3) popup_call_audio_out_window

0x3fe6,	// (0x000a1a05) popup_call_audio_second_window_ParamLimits

0x3fe6,	// (0x000a1a05) popup_call_audio_second_window

0x4016,	// (0x000a1a35) popup_call_audio_wait_window_ParamLimits

0x4016,	// (0x000a1a35) popup_call_audio_wait_window

0x4037,	// (0x000a1a56) popup_number_entry_window_ParamLimits

0x4037,	// (0x000a1a56) popup_number_entry_window

0x9d98,	// (0x000a77b7) bg_popup_call_pane_cp05_ParamLimits

0x9d98,	// (0x000a77b7) bg_popup_call_pane_cp05

0x9db8,	// (0x000a77d7) popup_number_entry_window_t1

0x9dcb,	// (0x000a77ea) popup_number_entry_window_t2

0x9ddd,	// (0x000a77fc) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x000acace) popup_number_entry_window_t

0x9e24,	// (0x000a7843) text_title_cp2

0x9e37,	// (0x000a7856) bg_popup_call_pane_cp_ParamLimits

0x9e37,	// (0x000a7856) bg_popup_call_pane_cp

0x9e45,	// (0x000a7864) call_thumbnail_pane

0x9e4d,	// (0x000a786c) popup_call_audio_in_window_g1_ParamLimits

0x9e4d,	// (0x000a786c) popup_call_audio_in_window_g1

0x9e59,	// (0x000a7878) popup_call_audio_in_window_g2_ParamLimits

0x9e59,	// (0x000a7878) popup_call_audio_in_window_g2

0x9e65,	// (0x000a7884) popup_call_audio_in_window_g3_ParamLimits

0x9e65,	// (0x000a7884) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x000acad7) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x000acad7) popup_call_audio_in_window_g

0x9e71,	// (0x000a7890) popup_call_audio_in_window_t1_ParamLimits

0x9e71,	// (0x000a7890) popup_call_audio_in_window_t1

0x9e8d,	// (0x000a78ac) popup_call_audio_in_window_t2_ParamLimits

0x9e8d,	// (0x000a78ac) popup_call_audio_in_window_t2

0x9ea9,	// (0x000a78c8) popup_call_audio_in_window_t3_ParamLimits

0x9ea9,	// (0x000a78c8) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x000acade) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x000acade) popup_call_audio_in_window_t

0x9e37,	// (0x000a7856) bg_popup_call_pane_cp01_ParamLimits

0x9e37,	// (0x000a7856) bg_popup_call_pane_cp01

0x9e45,	// (0x000a7864) call_thumbnail_pane_cp02

0x9ebc,	// (0x000a78db) call_type_pane_cp022

0x9ec4,	// (0x000a78e3) popup_call_audio_out_window_g1_ParamLimits

0x9ec4,	// (0x000a78e3) popup_call_audio_out_window_g1

0x9ed6,	// (0x000a78f5) popup_call_audio_out_window_g2_ParamLimits

0x9ed6,	// (0x000a78f5) popup_call_audio_out_window_g2

0x9ee2,	// (0x000a7901) popup_call_audio_out_window_g3_ParamLimits

0x9ee2,	// (0x000a7901) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x000acae5) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x000acae5) popup_call_audio_out_window_g

0x9ef4,	// (0x000a7913) popup_call_audio_out_window_t1_ParamLimits

0x9ef4,	// (0x000a7913) popup_call_audio_out_window_t1

0x9f0c,	// (0x000a792b) popup_call_audio_out_window_t2_ParamLimits

0x9f0c,	// (0x000a792b) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x000acaec) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x000acaec) popup_call_audio_out_window_t

0x9f21,	// (0x000a7940) bg_popup_call_pane_ParamLimits

0x9f21,	// (0x000a7940) bg_popup_call_pane

0x0df2,	// (0x0009e811) call_thumbnail_pane_cp_ParamLimits

0x0df2,	// (0x0009e811) call_thumbnail_pane_cp

0x9fa5,	// (0x000a79c4) call_type_pane_cp01_ParamLimits

0x9fa5,	// (0x000a79c4) call_type_pane_cp01

0x9fe9,	// (0x000a7a08) popup_call_audio_first_window_g1_ParamLimits

0x9fe9,	// (0x000a7a08) popup_call_audio_first_window_g1

0xa035,	// (0x000a7a54) popup_call_audio_first_window_g2_ParamLimits

0xa035,	// (0x000a7a54) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x000acaf1) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x000acaf1) popup_call_audio_first_window_g

0xa079,	// (0x000a7a98) popup_call_audio_first_window_t1_ParamLimits

0xa079,	// (0x000a7a98) popup_call_audio_first_window_t1

0xa125,	// (0x000a7b44) popup_call_audio_first_window_t4_ParamLimits

0xa125,	// (0x000a7b44) popup_call_audio_first_window_t4

0xa1b1,	// (0x000a7bd0) popup_call_audio_first_window_t5_ParamLimits

0xa1b1,	// (0x000a7bd0) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x000acaf6) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x000acaf6) popup_call_audio_first_window_t

0xa1e0,	// (0x000a7bff) bg_popup_call_pane_cp02

0xa1ea,	// (0x000a7c09) call_type_pane_cp023

0xa1f2,	// (0x000a7c11) popup_call_audio_wait_window_g1

0xa1fa,	// (0x000a7c19) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000acafd) popup_call_audio_wait_window_g

0xa202,	// (0x000a7c21) popup_call_audio_wait_window_t3

0xa210,	// (0x000a7c2f) bg_popup_call_pane_cp03_ParamLimits

0xa210,	// (0x000a7c2f) bg_popup_call_pane_cp03

0xa270,	// (0x000a7c8f) call_thumbnail_pane_cp011_ParamLimits

0xa270,	// (0x000a7c8f) call_thumbnail_pane_cp011

0xa27c,	// (0x000a7c9b) call_type_pane_cp034_ParamLimits

0xa27c,	// (0x000a7c9b) call_type_pane_cp034

0xa2b8,	// (0x000a7cd7) popup_call_audio_second_window_g1_ParamLimits

0xa2b8,	// (0x000a7cd7) popup_call_audio_second_window_g1

0xa2f4,	// (0x000a7d13) popup_call_audio_second_window_g2_ParamLimits

0xa2f4,	// (0x000a7d13) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x000acb02) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x000acb02) popup_call_audio_second_window_g

0xa330,	// (0x000a7d4f) popup_call_audio_second_window_t1_ParamLimits

0xa330,	// (0x000a7d4f) popup_call_audio_second_window_t1

0xa3b1,	// (0x000a7dd0) popup_call_audio_second_window_t2_ParamLimits

0xa3b1,	// (0x000a7dd0) popup_call_audio_second_window_t2

0xa3e7,	// (0x000a7e06) popup_call_audio_second_window_t3_ParamLimits

0xa3e7,	// (0x000a7e06) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x000acb07) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x000acb07) popup_call_audio_second_window_t

0xa1e0,	// (0x000a7bff) bg_popup_call_pane_cp04

0xa41d,	// (0x000a7e3c) list_conf_pane

0xa425,	// (0x000a7e44) popup_call_audio_conf_window_t1

0xa433,	// (0x000a7e52) call_thumbnail_pane_g1

0xa43b,	// (0x000a7e5a) bg_pinb_pane_ParamLimits

0xa43b,	// (0x000a7e5a) bg_pinb_pane

0xa449,	// (0x000a7e68) find_pinb_pane

0xa452,	// (0x000a7e71) listscroll_pinb_pane_ParamLimits

0xa452,	// (0x000a7e71) listscroll_pinb_pane

0xa461,	// (0x000a7e80) pinb_bg_pane_g1

0x0e16,	// (0x0009e835) pinb_bg_pane_g2

0x0e22,	// (0x0009e841) pinb_bg_pane_g3

0x0e2e,	// (0x0009e84d) pinb_bg_pane_g4

0x0e3a,	// (0x0009e859) pinb_bg_pane_g5

0x0e46,	// (0x0009e865) pinb_bg_pane_g6

0x0e51,	// (0x0009e870) pinb_bg_pane_g7

0x0e5c,	// (0x0009e87b) pinb_bg_pane_g8

0x0e67,	// (0x0009e886) pinb_bg_pane_g9

0x0e71,	// (0x0009e890) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x000acb0e) pinb_bg_pane_g

0x0e8e,	// (0x0009e8ad) grid_pinb_pane

0x0e99,	// (0x0009e8b8) list_pinb_pane

0x0ea4,	// (0x0009e8c3) scroll_pane_cp01_ParamLimits

0x0ea4,	// (0x0009e8c3) scroll_pane_cp01

0xa46b,	// (0x000a7e8a) find_pinb_pane_g1_ParamLimits

0xa46b,	// (0x000a7e8a) find_pinb_pane_g1

0xa483,	// (0x000a7ea2) find_pinb_pane_t1

0xa495,	// (0x000a7eb4) find_pinb_pane_t2

0x0001,

0xf109,	// (0x000acb28) find_pinb_pane_t

0xa4aa,	// (0x000a7ec9) input_focus_pane_cp01_ParamLimits

0xa4aa,	// (0x000a7ec9) input_focus_pane_cp01

0x0eb6,	// (0x0009e8d5) cell_pinb_pane_ParamLimits

0x0eb6,	// (0x0009e8d5) cell_pinb_pane

0x0edb,	// (0x0009e8fa) cell_pinb_pane_g1_ParamLimits

0x0edb,	// (0x0009e8fa) cell_pinb_pane_g1

0x0ef0,	// (0x0009e90f) cell_pinb_pane_g2_ParamLimits

0x0ef0,	// (0x0009e90f) cell_pinb_pane_g2

0xa4b6,	// (0x000a7ed5) cell_pinb_pane_g3_ParamLimits

0xa4b6,	// (0x000a7ed5) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x000acb2d) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x000acb2d) cell_pinb_pane_g

0xa1e0,	// (0x000a7bff) grid_highlight_pane_cp01

0x0efc,	// (0x0009e91b) list_pinb_item_pane_ParamLimits

0x0efc,	// (0x0009e91b) list_pinb_item_pane

0xa1e0,	// (0x000a7bff) list_highlight_pane_cp02

0x0f1a,	// (0x0009e939) list_pinb_item_pane_g1_ParamLimits

0x0f1a,	// (0x0009e939) list_pinb_item_pane_g1

0x0f27,	// (0x0009e946) list_pinb_item_pane_g2_ParamLimits

0x0f27,	// (0x0009e946) list_pinb_item_pane_g2

0x0f33,	// (0x0009e952) list_pinb_item_pane_g3_ParamLimits

0x0f33,	// (0x0009e952) list_pinb_item_pane_g3

0x0f44,	// (0x0009e963) list_pinb_item_pane_g4_ParamLimits

0x0f44,	// (0x0009e963) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x000acb34) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x000acb34) list_pinb_item_pane_g

0x0f50,	// (0x0009e96f) list_pinb_item_pane_t1_ParamLimits

0x0f50,	// (0x0009e96f) list_pinb_item_pane_t1

0x0f81,	// (0x0009e9a0) calc_display_pane

0x0f9f,	// (0x0009e9be) calc_paper_pane

0x0fbb,	// (0x0009e9da) grid_calc_pane

0xa1e0,	// (0x000a7bff) bg_list_pane_cp01

0x0fe7,	// (0x0009ea06) clock_g1

0x0fef,	// (0x0009ea0e) clock_g2

0x0001,

0xf11e,	// (0x000acb3d) clock_g

0x0ff9,	// (0x0009ea18) clock_t1_ParamLimits

0x0ff9,	// (0x0009ea18) clock_t1

0x100e,	// (0x0009ea2d) clock_t2_ParamLimits

0x100e,	// (0x0009ea2d) clock_t2

0x1020,	// (0x0009ea3f) clock_t3_ParamLimits

0x1020,	// (0x0009ea3f) clock_t3

0x1032,	// (0x0009ea51) clock_t4_ParamLimits

0x1032,	// (0x0009ea51) clock_t4

0x1044,	// (0x0009ea63) clock_t5_ParamLimits

0x1044,	// (0x0009ea63) clock_t5

0x1059,	// (0x0009ea78) clock_t6_ParamLimits

0x1059,	// (0x0009ea78) clock_t6

0x106b,	// (0x0009ea8a) clock_t7_ParamLimits

0x106b,	// (0x0009ea8a) clock_t7

0x107d,	// (0x0009ea9c) clock_t8_ParamLimits

0x107d,	// (0x0009ea9c) clock_t8

0x1093,	// (0x0009eab2) clock_t9_ParamLimits

0x1093,	// (0x0009eab2) clock_t9

0x0008,

0xf123,	// (0x000acb42) clock_t_ParamLimits

0xf123,	// (0x000acb42) clock_t

0xa4c2,	// (0x000a7ee1) popup_clock_analogue_window_cp02

0xa4c2,	// (0x000a7ee1) popup_clock_digital_window_cp01

0xa4ca,	// (0x000a7ee9) listscroll_help_pane

0xa1e0,	// (0x000a7bff) phob_pre_status_pane

0xa4d4,	// (0x000a7ef3) grid_qdial_pane

0xa43b,	// (0x000a7e5a) listscroll_mce_pane

0xa43b,	// (0x000a7e5a) bg_notes_pane

0xa4de,	// (0x000a7efd) list_notes_pane

0x10a9,	// (0x0009eac8) scroll_pane_cp06

0xa4ec,	// (0x000a7f0b) bg_calc_paper_pane

0x10b8,	// (0x0009ead7) list_calc_pane

0xa500,	// (0x000a7f1f) bg_calc_display_pane

0x10d2,	// (0x0009eaf1) calc_display_pane_t1

0x10e7,	// (0x0009eb06) calc_display_pane_t2

0x10fc,	// (0x0009eb1b) calc_display_pane_t3

0x0002,

0xf136,	// (0x000acb55) calc_display_pane_t

0x110e,	// (0x0009eb2d) cell_calc_pane_ParamLimits

0x110e,	// (0x0009eb2d) cell_calc_pane

0xa50c,	// (0x000a7f2b) bg_calc_paper_pane_g1

0xa518,	// (0x000a7f37) bg_calc_paper_pane_g2

0xa524,	// (0x000a7f43) bg_calc_paper_pane_g3

0xa530,	// (0x000a7f4f) bg_calc_paper_pane_g4

0xa53c,	// (0x000a7f5b) bg_calc_paper_pane_g5

0x113d,	// (0x0009eb5c) bg_calc_paper_pane_g6

0x114e,	// (0x0009eb6d) bg_calc_paper_pane_g7

0x115f,	// (0x0009eb7e) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x000acb5c) bg_calc_paper_pane_g

0x1170,	// (0x0009eb8f) calc_bg_paper_pane_g9

0x1181,	// (0x0009eba0) list_calc_item_pane_ParamLimits

0x1181,	// (0x0009eba0) list_calc_item_pane

0xa548,	// (0x000a7f67) list_calc_item_pane_g1

0x11a2,	// (0x0009ebc1) list_calc_item_pane_t1_ParamLimits

0x11a2,	// (0x0009ebc1) list_calc_item_pane_t1

0x11b4,	// (0x0009ebd3) list_calc_item_pane_t2_ParamLimits

0x11b4,	// (0x0009ebd3) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x000acb6d) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x000acb6d) list_calc_item_pane_t

0xa555,	// (0x000a7f74) cell_calc_pane_g1

0xa55f,	// (0x000a7f7e) grid_highlight_pane_cp02

0xd288,	// (0x000aaca7) bg_calc_display_pane_g1

0x11e4,	// (0x0009ec03) bg_calc_display_pane_g2

0xd291,	// (0x000aacb0) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x000acb77) bg_calc_display_pane_g

0x11ee,	// (0x0009ec0d) cell_qdial_pane_ParamLimits

0x11ee,	// (0x0009ec0d) cell_qdial_pane

0x1204,	// (0x0009ec23) cell_qdial_pane_g1_ParamLimits

0x1204,	// (0x0009ec23) cell_qdial_pane_g1

0x1211,	// (0x0009ec30) cell_qdial_pane_g2_ParamLimits

0x1211,	// (0x0009ec30) cell_qdial_pane_g2

0xa581,	// (0x000a7fa0) cell_qdial_pane_g3_ParamLimits

0xa581,	// (0x000a7fa0) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x000acb7e) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x000acb7e) cell_qdial_pane_g

0x122f,	// (0x0009ec4e) cell_qdial_pane_t1_ParamLimits

0x122f,	// (0x0009ec4e) cell_qdial_pane_t1

0x1247,	// (0x0009ec66) cell_qdial_pane_t2_ParamLimits

0x1247,	// (0x0009ec66) cell_qdial_pane_t2

0x125a,	// (0x0009ec79) cell_qdial_pane_t3_ParamLimits

0x125a,	// (0x0009ec79) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x000acb87) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x000acb87) cell_qdial_pane_t

0xa1e0,	// (0x000a7bff) grid_highlight_pane_cp04

0xa58d,	// (0x000a7fac) thumbnail_qdial_pane_ParamLimits

0xa58d,	// (0x000a7fac) thumbnail_qdial_pane

0xaa84,	// (0x000a84a3) list_help_pane

0xaa8d,	// (0x000a84ac) scroll_pane_cp02

0x126d,	// (0x0009ec8c) help_list_pane_t1_ParamLimits

0x126d,	// (0x0009ec8c) help_list_pane_t1

0x1294,	// (0x0009ecb3) bg_notes_pane_g2

0x129c,	// (0x0009ecbb) bg_notes_pane_g3

0x12a4,	// (0x0009ecc3) notes_bg_pane_g1

0x12ac,	// (0x0009eccb) notes_bg_pane_g4

0x12b4,	// (0x0009ecd3) notes_bg_pane_g5

0x12bc,	// (0x0009ecdb) notes_bg_pane_g6

0x12c4,	// (0x0009ece3) notes_bg_pane_g7

0x12cc,	// (0x0009eceb) notes_bg_pane_g8

0x12d4,	// (0x0009ecf3) notes_bg_pane_g9

0x0006,

0xf186,	// (0x000acba5) notes_bg_pane_g

0x12dc,	// (0x0009ecfb) list_notes_text_pane_ParamLimits

0x12dc,	// (0x0009ecfb) list_notes_text_pane

0xaa96,	// (0x000a84b5) list_notes_text_pane_g1

0x1304,	// (0x0009ed23) list_notes_text_pane_t1

0x1312,	// (0x0009ed31) listscroll_cale_week_pane

0x133e,	// (0x0009ed5d) bg_cale_heading_pane

0x1367,	// (0x0009ed86) bg_cale_pane_cp01

0x1389,	// (0x0009eda8) cale_week_corner_pane

0x13a8,	// (0x0009edc7) cale_week_day_heading_pane

0x13d6,	// (0x0009edf5) cale_week_scroll_pane_g1

0x13fa,	// (0x0009ee19) cale_week_scroll_pane_g2

0x1412,	// (0x0009ee31) cale_week_scroll_pane_g3

0x142a,	// (0x0009ee49) cale_week_scroll_pane_g4

0x1442,	// (0x0009ee61) cale_week_scroll_pane_g5

0x145a,	// (0x0009ee79) cale_week_scroll_pane_g6

0x147a,	// (0x0009ee99) cale_week_scroll_pane_g7

0x149a,	// (0x0009eeb9) cale_week_scroll_pane_g8

0x14ba,	// (0x0009eed9) cale_week_scroll_pane_g9

0x14d7,	// (0x0009eef6) cale_week_scroll_pane_g10

0x14f4,	// (0x0009ef13) cale_week_scroll_pane_g11

0x1513,	// (0x0009ef32) cale_week_scroll_pane_g12

0x1538,	// (0x0009ef57) cale_week_scroll_pane_g13

0x1561,	// (0x0009ef80) cale_week_scroll_pane_g14

0x158a,	// (0x0009efa9) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x000acbb4) cale_week_scroll_pane_g

0x15d3,	// (0x0009eff2) cale_week_time_pane

0x15f3,	// (0x0009f012) grid_cale_week_pane

0xaacb,	// (0x000a84ea) scroll_pane_cp08

0x1624,	// (0x0009f043) cell_cale_week_pane_ParamLimits

0x1624,	// (0x0009f043) cell_cale_week_pane

0x16b4,	// (0x0009f0d3) cale_week_day_heading_pane_t1

0x16dc,	// (0x0009f0fb) cale_week_day_heading_pane_t2

0x1709,	// (0x0009f128) cale_week_day_heading_pane_t3

0x1736,	// (0x0009f155) cale_week_day_heading_pane_t4

0x1763,	// (0x0009f182) cale_week_day_heading_pane_t5

0x1790,	// (0x0009f1af) cale_week_day_heading_pane_t6

0x17bd,	// (0x0009f1dc) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x000acbd5) cale_week_day_heading_pane_t

0xaae8,	// (0x000a8507) bg_cale_side_pane

0x17e5,	// (0x0009f204) cale_week_time_pane_t1

0x1809,	// (0x0009f228) cale_week_time_pane_t2

0x182d,	// (0x0009f24c) cale_week_time_pane_t3

0x1851,	// (0x0009f270) cale_week_time_pane_t4

0x1875,	// (0x0009f294) cale_week_time_pane_t5

0x189b,	// (0x0009f2ba) cale_week_time_pane_t6

0x18c3,	// (0x0009f2e2) cale_week_time_pane_t7

0x18ef,	// (0x0009f30e) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x000acbe4) cale_week_time_pane_t

0x191f,	// (0x0009f33e) cell_cale_week_pane_g2

0x1943,	// (0x0009f362) cell_cale_week_pane_g3_ParamLimits

0x1943,	// (0x0009f362) cell_cale_week_pane_g3

0xaaf6,	// (0x000a8515) grid_highlight_pane_cp07

0xaafe,	// (0x000a851d) listscroll_gms_pane

0xab08,	// (0x000a8527) grid_gms_pane

0xab11,	// (0x000a8530) listscroll_gms_pane_g1

0xab19,	// (0x000a8538) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x000acbf5) listscroll_gms_pane_g

0x195b,	// (0x0009f37a) scroll_pane_cp010

0x1966,	// (0x0009f385) cell_gms_pane_ParamLimits

0x1966,	// (0x0009f385) cell_gms_pane

0x1979,	// (0x0009f398) cell_gms_pane_g1

0xab21,	// (0x000a8540) cell_gms_pane_g2

0xab29,	// (0x000a8548) cell_gms_pane_g3

0xab32,	// (0x000a8551) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x000acbfa) cell_gms_pane_g

0xab3b,	// (0x000a855a) grid_highlight_pane_cp09

0x3ef8,	// (0x000a1917) phob_pre_status_pane_g1

0x3f00,	// (0x000a191f) phob_pre_status_pane_g2

0x3f08,	// (0x000a1927) phob_pre_status_pane_g3

0x3f10,	// (0x000a192f) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x000acfe5) phob_pre_status_pane_g

0x3f20,	// (0x000a193f) phob_pre_status_pane_t1

0x3f30,	// (0x000a194f) phob_pre_status_pane_t2

0x3f40,	// (0x000a195f) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x000acff0) phob_pre_status_pane_t

0xab43,	// (0x000a8562) bg_list_pane_cp05

0x1989,	// (0x0009f3a8) grid_vorec_pane

0x1993,	// (0x0009f3b2) vorec_t1

0x19a1,	// (0x0009f3c0) vorec_t2

0x19af,	// (0x0009f3ce) vorec_t3

0x19bd,	// (0x0009f3dc) vorec_t4

0x9d39,	// (0x000a7758) vorec_t5

0x9d47,	// (0x000a7766) vorec_t6

0x0004,

0xf1e4,	// (0x000acc03) vorec_t

0x9d55,	// (0x000a7774) wait_bar_pane_cp01

0x19d9,	// (0x0009f3f8) cell_vorec_pane_ParamLimits

0x19d9,	// (0x0009f3f8) cell_vorec_pane

0x19ee,	// (0x0009f40d) cell_vorec_pane_g1

0xa1e0,	// (0x000a7bff) grid_highlight_pane_cp05

0x1a06,	// (0x0009f425) cams_zoom_pane

0x1a12,	// (0x0009f431) image_vga_pane

0x1a21,	// (0x0009f440) main_camera_pane_g1

0x1a2f,	// (0x0009f44e) main_camera_pane_g2

0x1a3b,	// (0x0009f45a) main_camera_pane_g3

0x1a49,	// (0x0009f468) main_camera_pane_g4

0x1a57,	// (0x0009f476) main_camera_pane_g5

0x1a65,	// (0x0009f484) main_camera_pane_g6

0x1a73,	// (0x0009f492) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x000acc0e) main_camera_pane_g

0x1a81,	// (0x0009f4a0) main_camera_pane_t1

0x1a93,	// (0x0009f4b2) main_camera_pane_t2

0x0001,

0xf200,	// (0x000acc1f) main_camera_pane_t

0x1ab6,	// (0x0009f4d5) cams_zoom_pane_cp_ParamLimits

0x1ab6,	// (0x0009f4d5) cams_zoom_pane_cp

0x1ada,	// (0x0009f4f9) image_cif_pane_ParamLimits

0x1ada,	// (0x0009f4f9) image_cif_pane

0x1af8,	// (0x0009f517) image_subqcif_pane

0x1b02,	// (0x0009f521) main_video_pane_g1_ParamLimits

0x1b02,	// (0x0009f521) main_video_pane_g1

0x1b22,	// (0x0009f541) main_video_pane_g2_ParamLimits

0x1b22,	// (0x0009f541) main_video_pane_g2

0x1b52,	// (0x0009f571) main_video_pane_g3_ParamLimits

0x1b52,	// (0x0009f571) main_video_pane_g3

0x1b7b,	// (0x0009f59a) main_video_pane_g4_ParamLimits

0x1b7b,	// (0x0009f59a) main_video_pane_g4

0x1ba4,	// (0x0009f5c3) main_video_pane_g5_ParamLimits

0x1ba4,	// (0x0009f5c3) main_video_pane_g5

0xab57,	// (0x000a8576) main_video_pane_g6_ParamLimits

0xab57,	// (0x000a8576) main_video_pane_g6

0x0006,

0xf205,	// (0x000acc24) main_video_pane_g_ParamLimits

0xf205,	// (0x000acc24) main_video_pane_g

0x1bc6,	// (0x0009f5e5) main_video_pane_t1_ParamLimits

0x1bc6,	// (0x0009f5e5) main_video_pane_t1

0xab71,	// (0x000a8590) cams_zoom_pane_g1

0xab7a,	// (0x000a8599) cams_zoom_pane_g2

0xab83,	// (0x000a85a2) cams_zoom_pane_g3

0xab8c,	// (0x000a85ab) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x000acc33) cams_zoom_pane_g

0x1c10,	// (0x0009f62f) grid_cams_pane

0x1c1e,	// (0x0009f63d) linegrid_cams_pane

0x1c2a,	// (0x0009f649) cell_cams_pane_ParamLimits

0x1c2a,	// (0x0009f649) cell_cams_pane

0xab95,	// (0x000a85b4) cams_burst_image_pane

0xab9d,	// (0x000a85bc) cell_cams_pane_g1

0xa1e0,	// (0x000a7bff) grid_highlight_pane_cp03

0xa555,	// (0x000a7f74) mp_bg_pane_g1

0xa1e0,	// (0x000a7bff) bg_list_pane_cp03

0xc921,	// (0x000aa340) bg_mp_pane

0xc929,	// (0x000aa348) grid_mp_pane

0xc931,	// (0x000aa350) media_player_g1

0xc93b,	// (0x000aa35a) media_player_t1

0xc949,	// (0x000aa368) media_player_t2

0xc957,	// (0x000aa376) media_player_t3

0xc965,	// (0x000aa384) media_player_t4

0xc973,	// (0x000aa392) media_player_t5

0xc981,	// (0x000aa3a0) media_player_t6

0xc98f,	// (0x000aa3ae) media_player_t7

0x0006,

0xf5b0,	// (0x000acfcf) media_player_t

0xc99d,	// (0x000aa3bc) wait_bar_pane_cp02

0xf595,	// (0x000acfb4) main_usb_pane_t

0x3eef,	// (0x000a190e) cell_mp_pane

0xa555,	// (0x000a7f74) cell_mp_pane_g1

0xa1e0,	// (0x000a7bff) grid_highlight_pane_cp06

0xaba5,	// (0x000a85c4) grid_skin_colour_pane

0xabad,	// (0x000a85cc) list_highlight_pane_cp03

0x1d36,	// (0x0009f755) skin_g1

0xabb5,	// (0x000a85d4) skin_t1

0xabc4,	// (0x000a85e3) skin_t2

0x0001,

0xf249,	// (0x000acc68) skin_t

0x1d40,	// (0x0009f75f) cell_skin_colour_pane_ParamLimits

0x1d40,	// (0x0009f75f) cell_skin_colour_pane

0xabd2,	// (0x000a85f1) cell_skin_colour_pane_g1

0x1dc0,	// (0x0009f7df) call_video_g1_ParamLimits

0x1dc0,	// (0x0009f7df) call_video_g1

0x1dd0,	// (0x0009f7ef) call_video_g2_ParamLimits

0x1dd0,	// (0x0009f7ef) call_video_g2

0x0001,

0xf24e,	// (0x000acc6d) call_video_g_ParamLimits

0xf24e,	// (0x000acc6d) call_video_g

0x1e20,	// (0x0009f83f) call_video_uplink_pane_cp1_ParamLimits

0x1e20,	// (0x0009f83f) call_video_uplink_pane_cp1

0xabe4,	// (0x000a8603) call_video_uplink_pane_cp2

0x1eee,	// (0x0009f90d) video_down_crop_pane_ParamLimits

0x1eee,	// (0x0009f90d) video_down_crop_pane

0x1fe0,	// (0x0009f9ff) video_down_pane_ParamLimits

0x1fe0,	// (0x0009f9ff) video_down_pane

0xabec,	// (0x000a860b) video_down_subqcif_pane_ParamLimits

0xabec,	// (0x000a860b) video_down_subqcif_pane

0xac06,	// (0x000a8625) video_down_subqcif_pane_cp_ParamLimits

0xac06,	// (0x000a8625) video_down_subqcif_pane_cp

0xac2e,	// (0x000a864d) im_reading_pane_ParamLimits

0xac2e,	// (0x000a864d) im_reading_pane

0x20fd,	// (0x0009fb1c) im_writing_pane_ParamLimits

0x20fd,	// (0x0009fb1c) im_writing_pane

0x211b,	// (0x0009fb3a) im_reading_pane_t1

0xac48,	// (0x000a8667) list_im_pane

0xac59,	// (0x000a8678) scroll_pane_cp07

0x215d,	// (0x0009fb7c) im_writing_pane_t1_ParamLimits

0x215d,	// (0x0009fb7c) im_writing_pane_t1

0xac72,	// (0x000a8691) im_writing_pane_t2_ParamLimits

0xac72,	// (0x000a8691) im_writing_pane_t2

0x0001,

0xf258,	// (0x000acc77) im_writing_pane_t_ParamLimits

0xf258,	// (0x000acc77) im_writing_pane_t

0xa1e0,	// (0x000a7bff) input_focus_pane_cp04

0xa1e0,	// (0x000a7bff) input_focus_pane_cp05

0x216f,	// (0x0009fb8e) list_im_single_pane_ParamLimits

0x216f,	// (0x0009fb8e) list_im_single_pane

0x2188,	// (0x0009fba7) list_single_im_pane_t1

0x3eb3,	// (0x000a18d2) blid_accuracy_pane

0x3ebb,	// (0x000a18da) blid_compass_pane

0x3ec5,	// (0x000a18e4) main_location_t1

0x3ed3,	// (0x000a18f2) main_location_t2

0x3ee1,	// (0x000a1900) main_location_t3

0x0002,

0xf5bf,	// (0x000acfde) main_location_t

0xa1e0,	// (0x000a7bff) aid_levels_location

0xa555,	// (0x000a7f74) blid_accuracy_pane_g1

0xa555,	// (0x000a7f74) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x000accd9) blid_accuracy_pane_g

0xacba,	// (0x000a86d9) wml_content_pane

0xacf8,	// (0x000a8717) wml_button_pane_ParamLimits

0xacf8,	// (0x000a8717) wml_button_pane

0x2197,	// (0x0009fbb6) wml_list_single_large_pane_ParamLimits

0x2197,	// (0x0009fbb6) wml_list_single_large_pane

0x21b9,	// (0x0009fbd8) wml_list_single_medium_pane_ParamLimits

0x21b9,	// (0x0009fbd8) wml_list_single_medium_pane

0x21dc,	// (0x0009fbfb) wml_list_single_small_pane_ParamLimits

0x21dc,	// (0x0009fbfb) wml_list_single_small_pane

0xad0c,	// (0x000a872b) wml_selection_box_pane_ParamLimits

0xad0c,	// (0x000a872b) wml_selection_box_pane

0xad1f,	// (0x000a873e) wml_list_single_pane_t1

0xad2e,	// (0x000a874d) wml_list_single_medium_pane_t1

0xad3d,	// (0x000a875c) wml_list_single_large_pane_t1

0xad4c,	// (0x000a876b) input_focus_pane_cp02_ParamLimits

0xad4c,	// (0x000a876b) input_focus_pane_cp02

0xad5f,	// (0x000a877e) wml_selection_box_pane_g1

0xad68,	// (0x000a8787) wml_selection_box_pane_t1_ParamLimits

0xad68,	// (0x000a8787) wml_selection_box_pane_t1

0xa43b,	// (0x000a7e5a) bg_wml_button_pane_ParamLimits

0xa43b,	// (0x000a7e5a) bg_wml_button_pane

0xad80,	// (0x000a879f) wml_button_pane_g1

0xad88,	// (0x000a87a7) wml_button_pane_t1

0xad80,	// (0x000a879f) wml_button_bg_pane_g1

0xad98,	// (0x000a87b7) wml_button_bg_pane_g2

0xada0,	// (0x000a87bf) wml_button_bg_pane_g3

0xada8,	// (0x000a87c7) wml_button_bg_pane_g4

0xadb0,	// (0x000a87cf) wml_button_bg_pane_g5

0xadb8,	// (0x000a87d7) wml_button_bg_pane_g6

0xadc0,	// (0x000a87df) wml_button_bg_pane_g7

0xadc8,	// (0x000a87e7) wml_button_bg_pane_g8

0xadd0,	// (0x000a87ef) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x000acc7c) wml_button_bg_pane_g

0x2204,	// (0x0009fc23) bg_list_pane_cp02

0xadd8,	// (0x000a87f7) mce_header_pane_ParamLimits

0xadd8,	// (0x000a87f7) mce_header_pane

0xadee,	// (0x000a880d) mce_icon_pane

0xadee,	// (0x000a880d) mce_image_pane

0xadf7,	// (0x000a8816) mce_text_pane_ParamLimits

0xadf7,	// (0x000a8816) mce_text_pane

0x220e,	// (0x0009fc2d) scroll_pane_cp03

0xacf0,	// (0x000a870f) scroll_pane_cp04

0xae0a,	// (0x000a8829) scroll_pane_cp05_ParamLimits

0xae0a,	// (0x000a8829) scroll_pane_cp05

0x2218,	// (0x0009fc37) mce_header_field_pane_ParamLimits

0x2218,	// (0x0009fc37) mce_header_field_pane

0x223a,	// (0x0009fc59) mce_header_field_pane_2_ParamLimits

0x223a,	// (0x0009fc59) mce_header_field_pane_2

0x2250,	// (0x0009fc6f) mce_header_field_pane_3

0x2258,	// (0x0009fc77) list_single_mce_message_pane_ParamLimits

0x2258,	// (0x0009fc77) list_single_mce_message_pane

0x2277,	// (0x0009fc96) list_single_mce_smart_pane_ParamLimits

0x2277,	// (0x0009fc96) list_single_mce_smart_pane

0xae16,	// (0x000a8835) input_focus_pane_cp03

0xae1f,	// (0x000a883e) list_header_data_pane

0x22a1,	// (0x0009fcc0) mce_header_field_pane_t1

0x22b1,	// (0x0009fcd0) list_single_mce_header_pane_ParamLimits

0x22b1,	// (0x0009fcd0) list_single_mce_header_pane

0xae27,	// (0x000a8846) list_single_mce_header_pane_t1

0xae36,	// (0x000a8855) list_single_mce_message_pane_g1

0xae3e,	// (0x000a885d) list_single_mce_message_pane_t1

0x22f5,	// (0x0009fd14) bg_cale_heading_pane_cp01_ParamLimits

0x22f5,	// (0x0009fd14) bg_cale_heading_pane_cp01

0xae4c,	// (0x000a886b) bg_cale_pane_cp02_ParamLimits

0xae4c,	// (0x000a886b) bg_cale_pane_cp02

0x2347,	// (0x0009fd66) cale_month_corner_pane

0x2366,	// (0x0009fd85) cale_month_day_heading_pane_ParamLimits

0x2366,	// (0x0009fd85) cale_month_day_heading_pane

0x23c8,	// (0x0009fde7) cale_month_pane_g1_ParamLimits

0x23c8,	// (0x0009fde7) cale_month_pane_g1

0x240f,	// (0x0009fe2e) cale_month_pane_g2_ParamLimits

0x240f,	// (0x0009fe2e) cale_month_pane_g2

0x2447,	// (0x0009fe66) cale_month_pane_g3_ParamLimits

0x2447,	// (0x0009fe66) cale_month_pane_g3

0x249b,	// (0x0009feba) cale_month_pane_g4_ParamLimits

0x249b,	// (0x0009feba) cale_month_pane_g4

0x24ef,	// (0x0009ff0e) cale_month_pane_g5_ParamLimits

0x24ef,	// (0x0009ff0e) cale_month_pane_g5

0x2543,	// (0x0009ff62) cale_month_pane_g6_ParamLimits

0x2543,	// (0x0009ff62) cale_month_pane_g6

0x25a7,	// (0x0009ffc6) cale_month_pane_g7_ParamLimits

0x25a7,	// (0x0009ffc6) cale_month_pane_g7

0x260b,	// (0x000a002a) cale_month_pane_g8_ParamLimits

0x260b,	// (0x000a002a) cale_month_pane_g8

0x266f,	// (0x000a008e) cale_month_pane_g9_ParamLimits

0x266f,	// (0x000a008e) cale_month_pane_g9

0x26c9,	// (0x000a00e8) cale_month_pane_g10_ParamLimits

0x26c9,	// (0x000a00e8) cale_month_pane_g10

0x271b,	// (0x000a013a) cale_month_pane_g11_ParamLimits

0x271b,	// (0x000a013a) cale_month_pane_g11

0x2769,	// (0x000a0188) cale_month_pane_g12_ParamLimits

0x2769,	// (0x000a0188) cale_month_pane_g12

0x27b9,	// (0x000a01d8) cale_month_pane_g13_ParamLimits

0x27b9,	// (0x000a01d8) cale_month_pane_g13

0x000c,

0xf270,	// (0x000acc8f) cale_month_pane_g_ParamLimits

0xf270,	// (0x000acc8f) cale_month_pane_g

0x2809,	// (0x000a0228) cale_month_week_pane

0x2829,	// (0x000a0248) grid_cale_month_pane_ParamLimits

0x2829,	// (0x000a0248) grid_cale_month_pane

0x2882,	// (0x000a02a1) cale_month_day_heading_pane_t1

0x2904,	// (0x000a0323) cale_month_day_heading_pane_t2

0x297d,	// (0x000a039c) cale_month_day_heading_pane_t3

0x29f6,	// (0x000a0415) cale_month_day_heading_pane_t4

0x2a6f,	// (0x000a048e) cale_month_day_heading_pane_t5

0x2af0,	// (0x000a050f) cale_month_day_heading_pane_t6

0x2b79,	// (0x000a0598) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x000accaa) cale_month_day_heading_pane_t

0xaae8,	// (0x000a8507) bg_cale_side_pane_cp01

0x2c02,	// (0x000a0621) cale_month_week_pane_t1

0x2c1b,	// (0x000a063a) cale_month_week_pane_t2

0x2c34,	// (0x000a0653) cale_month_week_pane_t3

0x2c4d,	// (0x000a066c) cale_month_week_pane_t4

0x2c66,	// (0x000a0685) cale_month_week_pane_t5

0x2c83,	// (0x000a06a2) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x000accb9) cale_month_week_pane_t

0x2ca6,	// (0x000a06c5) cell_cale_month_pane_ParamLimits

0x2ca6,	// (0x000a06c5) cell_cale_month_pane

0x2dfe,	// (0x000a081d) cell_cale_month_pane_g1

0x2e0a,	// (0x000a0829) cell_cale_month_pane_t1_ParamLimits

0x2e0a,	// (0x000a0829) cell_cale_month_pane_t1

0xaaf6,	// (0x000a8515) grid_highlight_pane_cp08

0xa555,	// (0x000a7f74) main_smil_g1

0x2e36,	// (0x000a0855) smil_status_pane

0xae8b,	// (0x000a88aa) smil_text_pane

0xc83f,	// (0x000aa25e) bg_popup_call3_rect_pane_g8

0xc847,	// (0x000aa266) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x000acf72) bg_popup_call3_rect_pane_g

0xcaa5,	// (0x000aa4c4) smil_status_volume_pane_g1

0xae95,	// (0x000a88b4) smil_status_pane_t1

0x42fa,	// (0x000a1d19) volume_smil_pane

0xaeac,	// (0x000a88cb) list_smil_text_pane

0x2e49,	// (0x000a0868) scroll_pane_cp011

0x2e54,	// (0x000a0873) smil_text_list_pane_t1_ParamLimits

0x2e54,	// (0x000a0873) smil_text_list_pane_t1

0x2ea8,	// (0x000a08c7) aid_volume_smil_ParamLimits

0x2ea8,	// (0x000a08c7) aid_volume_smil

0xa555,	// (0x000a7f74) smil_volume_pane_g1

0xa555,	// (0x000a7f74) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x000accd9) smil_volume_pane_g

0x1312,	// (0x0009ed31) listscroll_cale_day_pane

0xaeb6,	// (0x000a88d5) bg_cale_pane

0xaece,	// (0x000a88ed) list_cale_pane

0xaef1,	// (0x000a8910) scroll_pane_cp09

0xaf02,	// (0x000a8921) cale_bg_pane_g1

0xaf0a,	// (0x000a8929) cale_bg_pane_g2

0xaf12,	// (0x000a8931) cale_bg_pane_g3

0xaf1a,	// (0x000a8939) cale_bg_pane_g4

0xaf22,	// (0x000a8941) cale_bg_pane_g5

0xaf2a,	// (0x000a8949) cale_bg_pane_g6

0xaf32,	// (0x000a8951) cale_bg_pane_g7

0xaf3a,	// (0x000a8959) cale_bg_pane_g8

0xaf42,	// (0x000a8961) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x000accde) cale_bg_pane_g

0x2ed2,	// (0x000a08f1) list_cale_time_pane_ParamLimits

0x2ed2,	// (0x000a08f1) list_cale_time_pane

0xaf4a,	// (0x000a8969) list_cale_time_pane_g1_ParamLimits

0xaf4a,	// (0x000a8969) list_cale_time_pane_g1

0xaf56,	// (0x000a8975) list_cale_time_pane_g2_ParamLimits

0xaf56,	// (0x000a8975) list_cale_time_pane_g2

0x2ee9,	// (0x000a0908) list_cale_time_pane_g3_ParamLimits

0x2ee9,	// (0x000a0908) list_cale_time_pane_g3

0x2ef7,	// (0x000a0916) list_cale_time_pane_g4_ParamLimits

0x2ef7,	// (0x000a0916) list_cale_time_pane_g4

0x2f05,	// (0x000a0924) list_cale_time_pane_g5_ParamLimits

0x2f05,	// (0x000a0924) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x000accf1) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x000accf1) list_cale_time_pane_g

0xaf70,	// (0x000a898f) list_cale_time_pane_t1_ParamLimits

0xaf70,	// (0x000a898f) list_cale_time_pane_t1

0xafe9,	// (0x000a8a08) list_cale_time_pane_t2_ParamLimits

0xafe9,	// (0x000a8a08) list_cale_time_pane_t2

0x32b7,	// (0x000a0cd6) aid_blid_cardinal_pane

0x32f9,	// (0x000a0d18) compass_pane_t4

0xb011,	// (0x000a8a30) list_cale_time_pane_t4_ParamLimits

0xb011,	// (0x000a8a30) list_cale_time_pane_t4

0x3307,	// (0x000a0d26) compass_pane_t5

0x3317,	// (0x000a0d36) compass_pane_t6

0x3325,	// (0x000a0d44) compass_pane_t7

0xb489,	// (0x000a8ea8) navi_pane_cc_t1

0xb68e,	// (0x000a90ad) aid_phob_thumbnail_center_pane

0x39af,	// (0x000a13ce) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x000accfe) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x000accfe) list_cale_time_pane_t

0x9e37,	// (0x000a7856) bg_popup_window_pane_cp02_ParamLimits

0x9e37,	// (0x000a7856) bg_popup_window_pane_cp02

0xb039,	// (0x000a8a58) heading_pane_cp01_ParamLimits

0xb039,	// (0x000a8a58) heading_pane_cp01

0xb045,	// (0x000a8a64) loc_req_pane_ParamLimits

0xb045,	// (0x000a8a64) loc_req_pane

0xb055,	// (0x000a8a74) loc_type_pane_ParamLimits

0xb055,	// (0x000a8a74) loc_type_pane

0xb067,	// (0x000a8a86) loc_type_pane_t1_ParamLimits

0xb067,	// (0x000a8a86) loc_type_pane_t1

0xb079,	// (0x000a8a98) loc_type_pane_t2_ParamLimits

0xb079,	// (0x000a8a98) loc_type_pane_t2

0xb08b,	// (0x000a8aaa) loc_type_pane_t3_ParamLimits

0xb08b,	// (0x000a8aaa) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x000acd05) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x000acd05) loc_type_pane_t

0xb09d,	// (0x000a8abc) list_loc_req_pane

0xb0a7,	// (0x000a8ac6) scroll_pane_cp012

0x2f13,	// (0x000a0932) list_single_loc_request_popup_menu_pane_ParamLimits

0x2f13,	// (0x000a0932) list_single_loc_request_popup_menu_pane

0xb0b2,	// (0x000a8ad1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb0b2,	// (0x000a8ad1) list_single_loc_request_popup_menu_pane_g1

0xb0be,	// (0x000a8add) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb0be,	// (0x000a8add) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x000acd0c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x000acd0c) list_single_loc_request_popup_menu_pane_g

0xb0ca,	// (0x000a8ae9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb0ca,	// (0x000a8ae9) list_single_loc_request_popup_menu_pane_t1

0x2f25,	// (0x000a0944) bg_popup_window_pane_cp03_ParamLimits

0x2f25,	// (0x000a0944) bg_popup_window_pane_cp03

0x2f33,	// (0x000a0952) heading_loc_req_pane_ParamLimits

0x2f33,	// (0x000a0952) heading_loc_req_pane

0x2f3f,	// (0x000a095e) popup_dyc_status_message_window_g1_ParamLimits

0x2f3f,	// (0x000a095e) popup_dyc_status_message_window_g1

0x2f4b,	// (0x000a096a) popup_dyc_status_message_window_t1_ParamLimits

0x2f4b,	// (0x000a096a) popup_dyc_status_message_window_t1

0x2f5d,	// (0x000a097c) popup_dyc_status_message_window_t2_ParamLimits

0x2f5d,	// (0x000a097c) popup_dyc_status_message_window_t2

0x2f6f,	// (0x000a098e) popup_dyc_status_message_window_t3_ParamLimits

0x2f6f,	// (0x000a098e) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x000acd11) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x000acd11) popup_dyc_status_message_window_t

0xa1e0,	// (0x000a7bff) bg_heading_pane_cp01

0xb0e0,	// (0x000a8aff) heading_loc_req_pane_g1

0xb0e8,	// (0x000a8b07) heading_loc_req_pane_g2

0xb0f0,	// (0x000a8b0f) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x000acd18) heading_loc_req_pane_g

0xb0f8,	// (0x000a8b17) heading_loc_req_pane_t1

0xb108,	// (0x000a8b27) bg_popup_sub_pane_cp01_ParamLimits

0xb108,	// (0x000a8b27) bg_popup_sub_pane_cp01

0xb116,	// (0x000a8b35) popup_cale_events_window_g1_ParamLimits

0xb116,	// (0x000a8b35) popup_cale_events_window_g1

0xb136,	// (0x000a8b55) popup_cale_events_window_g2_ParamLimits

0xb136,	// (0x000a8b55) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x000acd4c) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x000acd4c) popup_cale_events_window_g

0xb156,	// (0x000a8b75) popup_cale_events_window_t1_ParamLimits

0xb156,	// (0x000a8b75) popup_cale_events_window_t1

0xb168,	// (0x000a8b87) popup_cale_events_window_t2_ParamLimits

0xb168,	// (0x000a8b87) popup_cale_events_window_t2

0xb1a6,	// (0x000a8bc5) popup_cale_events_window_t3_ParamLimits

0xb1a6,	// (0x000a8bc5) popup_cale_events_window_t3

0xb1e0,	// (0x000a8bff) popup_cale_events_window_t4_ParamLimits

0xb1e0,	// (0x000a8bff) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x000acd51) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x000acd51) popup_cale_events_window_t

0x3068,	// (0x000a0a87) call_type_pane

0xb599,	// (0x000a8fb8) popup_call_status_window_g1

0x3074,	// (0x000a0a93) popup_call_status_window_g2

0x3080,	// (0x000a0a9f) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x000acd5a) popup_call_status_window_g

0xb216,	// (0x000a8c35) call_type_pane_g1

0xb21f,	// (0x000a8c3e) call_type_pane_g2

0x0001,

0xf342,	// (0x000acd61) call_type_pane_g

0xa1e0,	// (0x000a7bff) bg_popup_sub_pane_cp02

0xb228,	// (0x000a8c47) listscroll_popup_wml_pane

0xb230,	// (0x000a8c4f) list_wml_pane

0xb23a,	// (0x000a8c59) scroll_pane_cp013

0xb245,	// (0x000a8c64) list_single_graphic_popup_wml_pane_ParamLimits

0xb245,	// (0x000a8c64) list_single_graphic_popup_wml_pane

0xa555,	// (0x000a7f74) list_single_graphic_popup_wml_pane_g1

0xb259,	// (0x000a8c78) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x000acd66) list_single_graphic_popup_wml_pane_g

0xb261,	// (0x000a8c80) list_single_graphic_popup_wml_pane_t1

0xb277,	// (0x000a8c96) aid_call_pane

0xa433,	// (0x000a7e52) popup_clock_analogue_window_g1

0xa433,	// (0x000a7e52) popup_clock_analogue_window_g2

0x308c,	// (0x000a0aab) popup_clock_analogue_window_g3

0x308c,	// (0x000a0aab) popup_clock_analogue_window_g4

0xa555,	// (0x000a7f74) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x000acd6b) popup_clock_analogue_window_g

0x3094,	// (0x000a0ab3) popup_clock_analogue_window_t1

0x30a2,	// (0x000a0ac1) clock_digital_number_pane_ParamLimits

0x30a2,	// (0x000a0ac1) clock_digital_number_pane

0x30ae,	// (0x000a0acd) clock_digital_number_pane_cp02_ParamLimits

0x30ae,	// (0x000a0acd) clock_digital_number_pane_cp02

0x30ba,	// (0x000a0ad9) clock_digital_number_pane_cp03_ParamLimits

0x30ba,	// (0x000a0ad9) clock_digital_number_pane_cp03

0x30c6,	// (0x000a0ae5) clock_digital_number_pane_cp04_ParamLimits

0x30c6,	// (0x000a0ae5) clock_digital_number_pane_cp04

0x30d2,	// (0x000a0af1) clock_digital_separator_pane_ParamLimits

0x30d2,	// (0x000a0af1) clock_digital_separator_pane

0x30de,	// (0x000a0afd) popup_clock_digital_window_t1

0xa555,	// (0x000a7f74) clock_digital_number_pane_g1

0xa555,	// (0x000a7f74) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x000accd9) clock_digital_number_pane_g

0xa555,	// (0x000a7f74) clock_digital_separator_pane_g1

0xa555,	// (0x000a7f74) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x000accd9) clock_digital_separator_pane_g

0xa1e0,	// (0x000a7bff) bg_popup_window_pane_cp04

0xb27f,	// (0x000a8c9e) heading_pane_cp03

0xb287,	// (0x000a8ca6) listscroll_popup_gms_pane

0xb28f,	// (0x000a8cae) grid_large_graphic_popup_pane

0xb299,	// (0x000a8cb8) listscroll_popup_gms_pane_g1

0xb2a1,	// (0x000a8cc0) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x000acd76) listscroll_popup_gms_pane_g

0xacf0,	// (0x000a870f) scroll_pane_cp014

0x30fb,	// (0x000a0b1a) cell_large_graphic_popup_pane_ParamLimits

0x30fb,	// (0x000a0b1a) cell_large_graphic_popup_pane

0x3115,	// (0x000a0b34) cell_large_graphic_popup_pane_g1_ParamLimits

0x3115,	// (0x000a0b34) cell_large_graphic_popup_pane_g1

0xb2a9,	// (0x000a8cc8) cell_large_graphic_popup_pane_g2_ParamLimits

0xb2a9,	// (0x000a8cc8) cell_large_graphic_popup_pane_g2

0xb2b5,	// (0x000a8cd4) cell_large_graphic_popup_pane_g3_ParamLimits

0xb2b5,	// (0x000a8cd4) cell_large_graphic_popup_pane_g3

0xb2c2,	// (0x000a8ce1) cell_large_graphic_popup_pane_g4_ParamLimits

0xb2c2,	// (0x000a8ce1) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x000acd7b) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x000acd7b) cell_large_graphic_popup_pane_g

0xb2d2,	// (0x000a8cf1) grid_highlight_pane_cp010

0xa555,	// (0x000a7f74) bg_popup_call_pane_g1

0xb2dc,	// (0x000a8cfb) list_single_graphic_popup_conf_pane_ParamLimits

0xb2dc,	// (0x000a8cfb) list_single_graphic_popup_conf_pane

0xb2ee,	// (0x000a8d0d) list_highlight_pane_cp01

0xb2f7,	// (0x000a8d16) list_single_graphic_popup_conf_pane_g1

0xb2ff,	// (0x000a8d1e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x000acd84) list_single_graphic_popup_conf_pane_g

0xb307,	// (0x000a8d26) list_single_graphic_popup_conf_pane_t1

0xb315,	// (0x000a8d34) linegrid_cams_pane_g1

0x3121,	// (0x000a0b40) linegrid_cams_pane_g2

0xab29,	// (0x000a8548) linegrid_cams_pane_g3

0xb31e,	// (0x000a8d3d) linegrid_cams_pane_g4

0x312a,	// (0x000a0b49) linegrid_cams_pane_g5

0x3133,	// (0x000a0b52) linegrid_cams_pane_g6

0xab32,	// (0x000a8551) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x000acd89) linegrid_cams_pane_g

0xb327,	// (0x000a8d46) popup_clock_analogue_window

0xb327,	// (0x000a8d46) popup_clock_digital_window

0xa1e0,	// (0x000a7bff) popup_phob_thumbnail_window

0xa555,	// (0x000a7f74) call_video_uplink_pane_g1

0xb330,	// (0x000a8d4f) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x000acd98) call_video_uplink_pane_g

0xb338,	// (0x000a8d57) video_uplink_pane

0xb340,	// (0x000a8d5f) mce_image_pane_g1

0x313e,	// (0x000a0b5d) mce_image_pane_g2

0x3148,	// (0x000a0b67) mce_image_pane_g3

0x3152,	// (0x000a0b71) mce_image_pane_g4

0x315a,	// (0x000a0b79) mce_image_pane_g5

0x0004,

0xf37e,	// (0x000acd9d) mce_image_pane_g

0xb34a,	// (0x000a8d69) control_top_pane_stacon_cp01_ParamLimits

0xb34a,	// (0x000a8d69) control_top_pane_stacon_cp01

0xb35e,	// (0x000a8d7d) uni_indicator_pane_stacon_cp01_ParamLimits

0xb35e,	// (0x000a8d7d) uni_indicator_pane_stacon_cp01

0xb36f,	// (0x000a8d8e) bg_popup_sub_pane_cp03

0x3162,	// (0x000a0b81) chi_dic_find_pane

0x316a,	// (0x000a0b89) listscroll_chi_dic_pane

0x3173,	// (0x000a0b92) main_pane_chidic_g1

0x3186,	// (0x000a0ba5) chi_dic_find_pane_t1

0xb379,	// (0x000a8d98) find_chidic_pane

0xb382,	// (0x000a8da1) chi_dic_list_pane_ParamLimits

0xb382,	// (0x000a8da1) chi_dic_list_pane

0xb393,	// (0x000a8db2) scroll_pane_cp020

0x3194,	// (0x000a0bb3) find_chidic_pane_t1

0xa1e0,	// (0x000a7bff) input_focus_pane_cp06

0xaf98,	// (0x000a89b7) list_chi_dic_pane_ParamLimits

0xaf98,	// (0x000a89b7) list_chi_dic_pane

0x31a3,	// (0x000a0bc2) list_chi_dic_pane_t1_ParamLimits

0x31a3,	// (0x000a0bc2) list_chi_dic_pane_t1

0xa1e0,	// (0x000a7bff) list_highlight_pane_cp020

0xb39b,	// (0x000a8dba) bg_cale_heading_pane_g1

0x31b6,	// (0x000a0bd5) bg_cale_heading_pane_g2

0x31be,	// (0x000a0bdd) bg_cale_heading_pane_g3

0x31c6,	// (0x000a0be5) bg_cale_heading_pane_g4

0x31d0,	// (0x000a0bef) bg_cale_heading_pane_g5

0x31da,	// (0x000a0bf9) bg_cale_heading_pane_g6

0x31e2,	// (0x000a0c01) bg_cale_heading_pane_g7

0x31ea,	// (0x000a0c09) bg_cale_heading_pane_g8

0x31f4,	// (0x000a0c13) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x000acda8) bg_cale_heading_pane_g

0xb39b,	// (0x000a8dba) bg_cale_side_pane_g1

0x31fe,	// (0x000a0c1d) bg_cale_side_pane_g2

0x3208,	// (0x000a0c27) bg_cale_side_pane_g3

0x3212,	// (0x000a0c31) bg_cale_side_pane_g4

0x321c,	// (0x000a0c3b) bg_cale_side_pane_g5

0x3226,	// (0x000a0c45) bg_cale_side_pane_g6

0x3230,	// (0x000a0c4f) bg_cale_side_pane_g7

0x323a,	// (0x000a0c59) bg_cale_side_pane_g8

0x3242,	// (0x000a0c61) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x000acdbb) bg_cale_side_pane_g

0x324a,	// (0x000a0c69) popup_call_status_window_ParamLimits

0x324a,	// (0x000a0c69) popup_call_status_window

0xb3a3,	// (0x000a8dc2) stacon_top_pane

0xb3ab,	// (0x000a8dca) status_pane_ParamLimits

0xb3ab,	// (0x000a8dca) status_pane

0xb3c0,	// (0x000a8ddf) status_small_pane

0xb3c8,	// (0x000a8de7) control_pane

0xa1e0,	// (0x000a7bff) stacon_bottom_pane

0xb3d0,	// (0x000a8def) list_single_mce_smart_pane_t1_ParamLimits

0xb3d0,	// (0x000a8def) list_single_mce_smart_pane_t1

0xb3e3,	// (0x000a8e02) list_single_mce_smart_pane_t2_ParamLimits

0xb3e3,	// (0x000a8e02) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x000acdce) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x000acdce) list_single_mce_smart_pane_t

0x3256,	// (0x000a0c75) compass_pane

0x3261,	// (0x000a0c80) main_location2_pane_t1

0x3277,	// (0x000a0c96) main_location2_pane_t2

0x328d,	// (0x000a0cac) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x000acdd3) main_location2_pane_t

0xb402,	// (0x000a8e21) compass_pane_g1_ParamLimits

0xb402,	// (0x000a8e21) compass_pane_g1

0x32db,	// (0x000a0cfa) compass_pane_t1

0x32ea,	// (0x000a0d09) compass_pane_t2

0x0005,

0xf3bd,	// (0x000acddc) compass_pane_t

0x3335,	// (0x000a0d54) text_secondary_cp61

0xb480,	// (0x000a8e9f) navi_pane_cams_g5

0xb4fc,	// (0x000a8f1b) navi_pane_im_t1

0xb50a,	// (0x000a8f29) navi_pane_mp_g1_ParamLimits

0xb50a,	// (0x000a8f29) navi_pane_mp_g1

0xb51e,	// (0x000a8f3d) navi_pane_mp_g2_ParamLimits

0xb51e,	// (0x000a8f3d) navi_pane_mp_g2

0xb52a,	// (0x000a8f49) navi_pane_mp_g3_ParamLimits

0xb52a,	// (0x000a8f49) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x000acdf0) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x000acdf0) navi_pane_mp_g

0xb536,	// (0x000a8f55) navi_pane_mp_t1

0xb544,	// (0x000a8f63) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x000acdf7) navi_pane_mp_t

0xb5d7,	// (0x000a8ff6) navi_pane_vt_g1

0xb536,	// (0x000a8f55) navi_pane_vt_t1

0xb5df,	// (0x000a8ffe) navi_slider_pane

0xab43,	// (0x000a8562) zooming_pane

0xb5ef,	// (0x000a900e) navi_slider_pane_g1

0x3370,	// (0x000a0d8f) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x000acdfe) navi_slider_pane_g

0xb613,	// (0x000a9032) aid_levels_zoom

0xb61b,	// (0x000a903a) zooming_pane_g1

0xb623,	// (0x000a9042) zooming_pane_g2

0xb623,	// (0x000a9042) zooming_pane_g3

0x0002,

0xf3ee,	// (0x000ace0d) zooming_pane_g

0xb62b,	// (0x000a904a) level_10_zoom

0xb634,	// (0x000a9053) level_11_zoom

0xb63d,	// (0x000a905c) level_1_zoom

0xb646,	// (0x000a9065) level_2_zoom

0xb64f,	// (0x000a906e) level_3_zoom

0xb658,	// (0x000a9077) level_4_zoom

0xb661,	// (0x000a9080) level_5_zoom

0xb66a,	// (0x000a9089) level_6_zoom

0xb673,	// (0x000a9092) level_7_zoom

0xb67c,	// (0x000a909b) level_8_zoom

0xb685,	// (0x000a90a4) level_9_zoom

0xb696,	// (0x000a90b5) popup_phob_thumbnail_window_g1

0xb69e,	// (0x000a90bd) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x000ace14) popup_phob_thumbnail_window_g

0xc9a5,	// (0x000aa3c4) level_1_location

0xc9ad,	// (0x000aa3cc) level_2_location

0xc9b5,	// (0x000aa3d4) level_3_location

0xc9bd,	// (0x000aa3dc) level_4_location

0xab43,	// (0x000a8562) level_5_location

0x3382,	// (0x000a0da1) mce_icon_pane_g1

0x338a,	// (0x000a0da9) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x000ace19) mce_icon_pane_g

0x3392,	// (0x000a0db1) main_mup_pane_g1_ParamLimits

0x3392,	// (0x000a0db1) main_mup_pane_g1

0x33aa,	// (0x000a0dc9) main_mup_pane_g2_ParamLimits

0x33aa,	// (0x000a0dc9) main_mup_pane_g2

0x33c6,	// (0x000a0de5) main_mup_pane_g3_ParamLimits

0x33c6,	// (0x000a0de5) main_mup_pane_g3

0x33e2,	// (0x000a0e01) main_mup_pane_g4_ParamLimits

0x33e2,	// (0x000a0e01) main_mup_pane_g4

0x33f6,	// (0x000a0e15) main_mup_pane_g5_ParamLimits

0x33f6,	// (0x000a0e15) main_mup_pane_g5

0x3417,	// (0x000a0e36) main_mup_pane_g6_ParamLimits

0x3417,	// (0x000a0e36) main_mup_pane_g6

0x3437,	// (0x000a0e56) main_mup_pane_g7_ParamLimits

0x3437,	// (0x000a0e56) main_mup_pane_g7

0x345b,	// (0x000a0e7a) main_mup_pane_g8_ParamLimits

0x345b,	// (0x000a0e7a) main_mup_pane_g8

0x347f,	// (0x000a0e9e) main_mup_pane_g9_ParamLimits

0x347f,	// (0x000a0e9e) main_mup_pane_g9

0x34a2,	// (0x000a0ec1) main_mup_pane_g10_ParamLimits

0x34a2,	// (0x000a0ec1) main_mup_pane_g10

0x34c5,	// (0x000a0ee4) main_mup_pane_g11_ParamLimits

0x34c5,	// (0x000a0ee4) main_mup_pane_g11

0x34e5,	// (0x000a0f04) main_mup_pane_g12_ParamLimits

0x34e5,	// (0x000a0f04) main_mup_pane_g12

0x34f3,	// (0x000a0f12) main_mup_pane_g13_ParamLimits

0x34f3,	// (0x000a0f12) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x000ace1e) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x000ace1e) main_mup_pane_g

0x3509,	// (0x000a0f28) main_mup_pane_t1_ParamLimits

0x3509,	// (0x000a0f28) main_mup_pane_t1

0x3528,	// (0x000a0f47) main_mup_pane_t2_ParamLimits

0x3528,	// (0x000a0f47) main_mup_pane_t2

0x3542,	// (0x000a0f61) main_mup_pane_t3_ParamLimits

0x3542,	// (0x000a0f61) main_mup_pane_t3

0x355c,	// (0x000a0f7b) main_mup_pane_t4_ParamLimits

0x355c,	// (0x000a0f7b) main_mup_pane_t4

0x356e,	// (0x000a0f8d) main_mup_pane_t5_ParamLimits

0x356e,	// (0x000a0f8d) main_mup_pane_t5

0x3580,	// (0x000a0f9f) main_mup_pane_t6_ParamLimits

0x3580,	// (0x000a0f9f) main_mup_pane_t6

0x0005,

0xf41a,	// (0x000ace39) main_mup_pane_t_ParamLimits

0xf41a,	// (0x000ace39) main_mup_pane_t

0x3596,	// (0x000a0fb5) mup_progress_pane_ParamLimits

0x3596,	// (0x000a0fb5) mup_progress_pane

0x35a2,	// (0x000a0fc1) mup_visualizer_pane_ParamLimits

0x35a2,	// (0x000a0fc1) mup_visualizer_pane

0x35e0,	// (0x000a0fff) mup_volume_pane_ParamLimits

0x35e0,	// (0x000a0fff) mup_volume_pane

0xb599,	// (0x000a8fb8) mup_visualizer_pane_g1_ParamLimits

0xb599,	// (0x000a8fb8) mup_visualizer_pane_g1

0xb599,	// (0x000a8fb8) mup_visualizer_pane_g2_ParamLimits

0xb599,	// (0x000a8fb8) mup_visualizer_pane_g2

0xb402,	// (0x000a8e21) mup_visualizer_pane_g3_ParamLimits

0xb402,	// (0x000a8e21) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x000ace46) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x000ace46) mup_visualizer_pane_g

0xa555,	// (0x000a7f74) mup_volume_pane_g1

0xb6ae,	// (0x000a90cd) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x000ace4d) mup_volume_pane_g

0xa555,	// (0x000a7f74) mup_progress_pane_g1

0xb6b7,	// (0x000a90d6) mup_progress_pane_g2

0xb6c0,	// (0x000a90df) mup_progress_pane_g3

0x0002,

0xf433,	// (0x000ace52) mup_progress_pane_g

0xa1e0,	// (0x000a7bff) bg_popup_window_pane_cp05

0xb6c9,	// (0x000a90e8) heading_pane_cp02_ParamLimits

0xb6c9,	// (0x000a90e8) heading_pane_cp02

0xb6e5,	// (0x000a9104) list_popup_blid_pane

0xb6ed,	// (0x000a910c) list_blid_sat_info_pane_ParamLimits

0xb6ed,	// (0x000a910c) list_blid_sat_info_pane

0xb700,	// (0x000a911f) list_blid_sat_info_pane_g1

0xb708,	// (0x000a9127) list_blid_sat_info_pane_t1

0x36ff,	// (0x000a111e) mup_equalizer_pane_ParamLimits

0x36ff,	// (0x000a111e) mup_equalizer_pane

0x3720,	// (0x000a113f) mup_equalizer_pane_cp1_ParamLimits

0x3720,	// (0x000a113f) mup_equalizer_pane_cp1

0x3741,	// (0x000a1160) mup_equalizer_pane_cp2_ParamLimits

0x3741,	// (0x000a1160) mup_equalizer_pane_cp2

0x3762,	// (0x000a1181) mup_equalizer_pane_cp3_ParamLimits

0x3762,	// (0x000a1181) mup_equalizer_pane_cp3

0x3787,	// (0x000a11a6) mup_equalizer_pane_cp4_ParamLimits

0x3787,	// (0x000a11a6) mup_equalizer_pane_cp4

0x37ac,	// (0x000a11cb) mup_equalizer_pane_cp5

0x37c4,	// (0x000a11e3) mup_equalizer_pane_cp6

0x37dc,	// (0x000a11fb) mup_equalizer_pane_cp7

0xc8bf,	// (0x000aa2de) bg_popup_call_poc_act_pane_g9

0xc8c7,	// (0x000aa2e6) bg_popup_call_poc_act_pane_g10

0xc8cf,	// (0x000aa2ee) bg_popup_call_poc_act_pane_g11

0x000a,

0xa43b,	// (0x000a7e5a) mup_scale_pane

0xa555,	// (0x000a7f74) mup_scale_pane_g1

0xb716,	// (0x000a9135) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x000ace6e) mup_scale_pane_g

0xb73a,	// (0x000a9159) msg_data_pane

0xb742,	// (0x000a9161) scroll_pane_cp017

0x3806,	// (0x000a1225) bg_list_pane_cp04_ParamLimits

0x3806,	// (0x000a1225) bg_list_pane_cp04

0xb74a,	// (0x000a9169) msg_data_pane_g1

0x3826,	// (0x000a1245) msg_data_pane_g2

0x3830,	// (0x000a124f) msg_data_pane_g3

0x383a,	// (0x000a1259) msg_data_pane_g4

0x3842,	// (0x000a1261) msg_data_pane_g5

0x384a,	// (0x000a1269) msg_data_pane_g6

0x3852,	// (0x000a1271) msg_data_pane_g7

0x0006,

0xf45e,	// (0x000ace7d) msg_data_pane_g

0x385a,	// (0x000a1279) msg_text_pane_ParamLimits

0x385a,	// (0x000a1279) msg_text_pane

0x3889,	// (0x000a12a8) qrid_highlight_pane_cp011_ParamLimits

0x3889,	// (0x000a12a8) qrid_highlight_pane_cp011

0xa1e0,	// (0x000a7bff) msg_body_pane

0xa1e0,	// (0x000a7bff) msg_header_pane

0xb75b,	// (0x000a917a) input_focus_pane_cp07

0xa5b1,	// (0x000a7fd0) msg_header_pane_t1_ParamLimits

0xa5b1,	// (0x000a7fd0) msg_header_pane_t1

0xa5c3,	// (0x000a7fe2) msg_header_pane_t2_ParamLimits

0xa5c3,	// (0x000a7fe2) msg_header_pane_t2

0x0001,

0xf472,	// (0x000ace91) msg_header_pane_t_ParamLimits

0xf472,	// (0x000ace91) msg_header_pane_t

0xb770,	// (0x000a918f) msg_body_pane_g1

0xa5d5,	// (0x000a7ff4) msg_body_pane_t1_ParamLimits

0xa5d5,	// (0x000a7ff4) msg_body_pane_t1

0xa606,	// (0x000a8025) msg_body_pane_t2_ParamLimits

0xa606,	// (0x000a8025) msg_body_pane_t2

0xa618,	// (0x000a8037) msg_body_pane_t3_ParamLimits

0xa618,	// (0x000a8037) msg_body_pane_t3

0x0002,

0xf477,	// (0x000ace96) msg_body_pane_t_ParamLimits

0xf477,	// (0x000ace96) msg_body_pane_t

0x38ff,	// (0x000a131e) main_viewer_pane_g1_ParamLimits

0x38ff,	// (0x000a131e) main_viewer_pane_g1

0x390b,	// (0x000a132a) main_viewer_pane_g2_ParamLimits

0x390b,	// (0x000a132a) main_viewer_pane_g2

0x3917,	// (0x000a1336) main_viewer_pane_g3_ParamLimits

0x3917,	// (0x000a1336) main_viewer_pane_g3

0x3928,	// (0x000a1347) main_viewer_pane_g4_ParamLimits

0x3928,	// (0x000a1347) main_viewer_pane_g4

0x3939,	// (0x000a1358) main_viewer_pane_g5_ParamLimits

0x3939,	// (0x000a1358) main_viewer_pane_g5

0x3939,	// (0x000a1358) main_viewer_pane_g7_ParamLimits

0x3939,	// (0x000a1358) main_viewer_pane_g7

0x394b,	// (0x000a136a) main_viewer_pane_g8_ParamLimits

0x394b,	// (0x000a136a) main_viewer_pane_g8

0x0007,

0xf487,	// (0x000acea6) main_viewer_pane_g_ParamLimits

0xf487,	// (0x000acea6) main_viewer_pane_g

0xb778,	// (0x000a9197) viewer_content_pane_ParamLimits

0xb778,	// (0x000a9197) viewer_content_pane

0x3983,	// (0x000a13a2) main_postcard_pane_g1_ParamLimits

0x3983,	// (0x000a13a2) main_postcard_pane_g1

0x3991,	// (0x000a13b0) main_postcard_pane_g2_ParamLimits

0x3991,	// (0x000a13b0) main_postcard_pane_g2

0x399f,	// (0x000a13be) main_postcard_pane_g3_ParamLimits

0x399f,	// (0x000a13be) main_postcard_pane_g3

0x0005,

0xf498,	// (0x000aceb7) main_postcard_pane_g_ParamLimits

0xf498,	// (0x000aceb7) main_postcard_pane_g

0x39af,	// (0x000a13ce) main_postcard_pane_g4

0xcab8,	// (0x000aa4d7) smil_status_volume_pane_g2

0x39db,	// (0x000a13fa) postcard_pane_ParamLimits

0x39db,	// (0x000a13fa) postcard_pane

0xb599,	// (0x000a8fb8) postcard_pane_g1_ParamLimits

0xb599,	// (0x000a8fb8) postcard_pane_g1

0x3a15,	// (0x000a1434) postcard_pane_g2_ParamLimits

0x3a15,	// (0x000a1434) postcard_pane_g2

0x3a21,	// (0x000a1440) postcard_pane_g3_ParamLimits

0x3a21,	// (0x000a1440) postcard_pane_g3

0xb786,	// (0x000a91a5) postcard_pane_g4_ParamLimits

0xb786,	// (0x000a91a5) postcard_pane_g4

0x3a2d,	// (0x000a144c) postcard_pane_g5_ParamLimits

0x3a2d,	// (0x000a144c) postcard_pane_g5

0x3a39,	// (0x000a1458) postcard_pane_g6_ParamLimits

0x3a39,	// (0x000a1458) postcard_pane_g6

0xb794,	// (0x000a91b3) postcard_pane_g7_ParamLimits

0xb794,	// (0x000a91b3) postcard_pane_g7

0x0006,

0xf4a5,	// (0x000acec4) postcard_pane_g_ParamLimits

0xf4a5,	// (0x000acec4) postcard_pane_g

0x3a47,	// (0x000a1466) main_mp2_pane_g1_ParamLimits

0x3a47,	// (0x000a1466) main_mp2_pane_g1

0x3a55,	// (0x000a1474) main_mp2_pane_g2_ParamLimits

0x3a55,	// (0x000a1474) main_mp2_pane_g2

0x3a61,	// (0x000a1480) main_mp2_pane_g3_ParamLimits

0x3a61,	// (0x000a1480) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x000aced3) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x000aced3) main_mp2_pane_g

0x3a6d,	// (0x000a148c) main_mp2_pane_t1_ParamLimits

0x3a6d,	// (0x000a148c) main_mp2_pane_t1

0x3a84,	// (0x000a14a3) main_mp2_pane_t2_ParamLimits

0x3a84,	// (0x000a14a3) main_mp2_pane_t2

0x3a98,	// (0x000a14b7) main_mp2_pane_t3_ParamLimits

0x3a98,	// (0x000a14b7) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x000aceda) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x000aceda) main_mp2_pane_t

0xb7a2,	// (0x000a91c1) pec_content_pane_ParamLimits

0xb7a2,	// (0x000a91c1) pec_content_pane

0xacf0,	// (0x000a870f) scroll_pane_cp015

0xb7b4,	// (0x000a91d3) pec_attribute_pane_ParamLimits

0xb7b4,	// (0x000a91d3) pec_attribute_pane

0x3aaa,	// (0x000a14c9) pec_content_pane_g1_ParamLimits

0x3aaa,	// (0x000a14c9) pec_content_pane_g1

0xb7c4,	// (0x000a91e3) pec_content_pane_t1_ParamLimits

0xb7c4,	// (0x000a91e3) pec_content_pane_t1

0xb7d6,	// (0x000a91f5) pec_content_pane_t2_ParamLimits

0xb7d6,	// (0x000a91f5) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x000acee1) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x000acee1) pec_content_pane_t

0x3ab6,	// (0x000a14d5) list_single_graphic_pane_cp01_ParamLimits

0x3ab6,	// (0x000a14d5) list_single_graphic_pane_cp01

0xa43b,	// (0x000a7e5a) bg_popup_sub_pane_cp04

0xb7e8,	// (0x000a9207) popup_mup_playback_window_g1

0xb7f4,	// (0x000a9213) popup_mup_playback_window_t1

0xb809,	// (0x000a9228) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x000acee6) popup_mup_playback_window_t

0xb840,	// (0x000a925f) main_image_pane_g1_ParamLimits

0xb840,	// (0x000a925f) main_image_pane_g1

0xb883,	// (0x000a92a2) scroll_pane_cp018_ParamLimits

0xb883,	// (0x000a92a2) scroll_pane_cp018

0xb89b,	// (0x000a92ba) scroll_pane_cp016_ParamLimits

0xb89b,	// (0x000a92ba) scroll_pane_cp016

0x3b44,	// (0x000a1563) smil2_image_pane_ParamLimits

0x3b44,	// (0x000a1563) smil2_image_pane

0x3b7a,	// (0x000a1599) smil2_root_pane_ParamLimits

0x3b7a,	// (0x000a1599) smil2_root_pane

0x3ba6,	// (0x000a15c5) smil2_text_pane_ParamLimits

0x3ba6,	// (0x000a15c5) smil2_text_pane

0xa1e0,	// (0x000a7bff) bg_list_pane_cp06

0xb8d7,	// (0x000a92f6) grid_radio_pane

0xa1e0,	// (0x000a7bff) bg_popup_window_pane_cp06

0xb8e1,	// (0x000a9300) main_fmradio_pane_t1

0xb27f,	// (0x000a8c9e) heading_pane_cp04

0xb8ef,	// (0x000a930e) main_fmradio_pane_t2

0xc8d7,	// (0x000aa2f6) popup_cale_lunar_info_window_g1

0xb8fd,	// (0x000a931c) main_fmradio_pane_t3

0xc8df,	// (0x000aa2fe) popup_cale_lunar_info_window_g2

0xb90d,	// (0x000a932c) main_fmradio_pane_t4

0x0001,

0xb91b,	// (0x000a933a) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x000acfc1) popup_cale_lunar_info_window_g

0xf4dc,	// (0x000acefb) main_fmradio_pane_t

0xb929,	// (0x000a9348) wait_bar_pane_cp03

0xb931,	// (0x000a9350) cell_fmradio_pane_ParamLimits

0xb931,	// (0x000a9350) cell_fmradio_pane

0xb794,	// (0x000a91b3) cell_fmradio_pane_g1_ParamLimits

0xb794,	// (0x000a91b3) cell_fmradio_pane_g1

0xa1e0,	// (0x000a7bff) grid_highlight_pane_cp011

0xb946,	// (0x000a9365) poc_content_pane_ParamLimits

0xb946,	// (0x000a9365) poc_content_pane

0xb958,	// (0x000a9377) scroll_pane_cp019

0x3be6,	// (0x000a1605) popup_call_poc_act_window_ParamLimits

0x3be6,	// (0x000a1605) popup_call_poc_act_window

0x3bf3,	// (0x000a1612) popup_call_poc_inact_window_ParamLimits

0x3bf3,	// (0x000a1612) popup_call_poc_inact_window

0xf579,	// (0x000acf98) bg_popup_call_poc_act_pane_g

0xc84f,	// (0x000aa26e) bg_popup_call_poc_inact_pane_g1

0xc857,	// (0x000aa276) bg_popup_call_poc_inact_pane_g2

0xb960,	// (0x000a937f) popup_call_poc_act_window_g2

0xc85f,	// (0x000aa27e) bg_popup_call_poc_inact_pane_g3

0xc867,	// (0x000aa286) bg_popup_call_poc_inact_pane_g4

0xc86f,	// (0x000aa28e) bg_popup_call_poc_inact_pane_g5

0xb968,	// (0x000a9387) popup_call_poc_act_window_t1_ParamLimits

0xb968,	// (0x000a9387) popup_call_poc_act_window_t1

0xb990,	// (0x000a93af) popup_call_poc_act_window_t2_ParamLimits

0xb990,	// (0x000a93af) popup_call_poc_act_window_t2

0xb9b8,	// (0x000a93d7) popup_call_poc_act_window_t3_ParamLimits

0xb9b8,	// (0x000a93d7) popup_call_poc_act_window_t3

0xb9e0,	// (0x000a93ff) popup_call_poc_act_window_t4_ParamLimits

0xb9e0,	// (0x000a93ff) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x000acf06) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x000acf06) popup_call_poc_act_window_t

0xc877,	// (0x000aa296) bg_popup_call_poc_inact_pane_g6

0xc87f,	// (0x000aa29e) bg_popup_call_poc_inact_pane_g7

0xc887,	// (0x000aa2a6) bg_popup_call_poc_inact_pane_g8

0xb9f2,	// (0x000a9411) popup_call_poc_inact_window_g2

0xc88f,	// (0x000aa2ae) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x000acf85) bg_popup_call_poc_inact_pane_g

0xb9fa,	// (0x000a9419) popup_call_poc_inact_window_t1_ParamLimits

0xb9fa,	// (0x000a9419) popup_call_poc_inact_window_t1

0xba0f,	// (0x000a942e) popup_call_poc_inact_window_t2_ParamLimits

0xba0f,	// (0x000a942e) popup_call_poc_inact_window_t2

0xba24,	// (0x000a9443) popup_call_poc_inact_window_t3_ParamLimits

0xba24,	// (0x000a9443) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x000acf0f) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x000acf0f) popup_call_poc_inact_window_t

0xca18,	// (0x000aa437) context_pane_ParamLimits

0x4268,	// (0x000a1c87) signal_pane_ParamLimits

0xab43,	// (0x000a8562) main_call2_pane

0x41d5,	// (0x000a1bf4) popup_phob_thumbnail2_window_ParamLimits

0x41d5,	// (0x000a1bf4) popup_phob_thumbnail2_window

0x38ad,	// (0x000a12cc) aid_hotspot_pointer_arrow_pane

0x38b5,	// (0x000a12d4) aid_hotspot_pointer_hand_pane

0x3f18,	// (0x000a1937) phob_pre_status_pane_g5

0x1a06,	// (0x0009f425) cams_zoom_pane_ParamLimits

0x1a12,	// (0x0009f431) image_vga_pane_ParamLimits

0x1a21,	// (0x0009f440) main_camera_pane_g1_ParamLimits

0x1a2f,	// (0x0009f44e) main_camera_pane_g2_ParamLimits

0x1a3b,	// (0x0009f45a) main_camera_pane_g3_ParamLimits

0x1a49,	// (0x0009f468) main_camera_pane_g4_ParamLimits

0x1a57,	// (0x0009f476) main_camera_pane_g5_ParamLimits

0x1a65,	// (0x0009f484) main_camera_pane_g6_ParamLimits

0x1a73,	// (0x0009f492) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x000acc0e) main_camera_pane_g_ParamLimits

0x1a81,	// (0x0009f4a0) main_camera_pane_t1_ParamLimits

0x1a93,	// (0x0009f4b2) main_camera_pane_t2_ParamLimits

0xf200,	// (0x000acc1f) main_camera_pane_t_ParamLimits

0xa43b,	// (0x000a7e5a) bg_popup_preview_window_pane_cp01_ParamLimits

0xa43b,	// (0x000a7e5a) bg_popup_preview_window_pane_cp01

0xba39,	// (0x000a9458) popup_phob_thumbnail2_window_g1_ParamLimits

0xba39,	// (0x000a9458) popup_phob_thumbnail2_window_g1

0xa1e0,	// (0x000a7bff) call2_cli_visual_pane

0x3c0f,	// (0x000a162e) popup_call2_audio_conf_window_ParamLimits

0x3c0f,	// (0x000a162e) popup_call2_audio_conf_window

0x3c28,	// (0x000a1647) popup_call2_audio_first_window_ParamLimits

0x3c28,	// (0x000a1647) popup_call2_audio_first_window

0x3cc6,	// (0x000a16e5) popup_call2_audio_in_window_ParamLimits

0x3cc6,	// (0x000a16e5) popup_call2_audio_in_window

0x3d0a,	// (0x000a1729) popup_call2_audio_out_window_ParamLimits

0x3d0a,	// (0x000a1729) popup_call2_audio_out_window

0x3d74,	// (0x000a1793) popup_call2_audio_second_window_ParamLimits

0x3d74,	// (0x000a1793) popup_call2_audio_second_window

0x3dd2,	// (0x000a17f1) popup_call2_audio_wait_window_ParamLimits

0x3dd2,	// (0x000a17f1) popup_call2_audio_wait_window

0xa1e0,	// (0x000a7bff) bg_popup_call2_act_pane_cp03

0xa41d,	// (0x000a7e3c) list_conf_pane_cp

0xba45,	// (0x000a9464) popup_call2_audio_conf_window_t1

0xba53,	// (0x000a9472) list_single_graphic_popup_conf2_pane_ParamLimits

0xba53,	// (0x000a9472) list_single_graphic_popup_conf2_pane

0xb2ee,	// (0x000a8d0d) list_highlight_pane_cp04

0xba66,	// (0x000a9485) list_single_graphic_popup_conf2_pane_g1

0xb2ff,	// (0x000a8d1e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x000acf16) list_single_graphic_popup_conf2_pane_g

0xba70,	// (0x000a948f) list_single_graphic_popup_conf2_pane_t1

0xba7e,	// (0x000a949d) bg_popup_call2_act_pane_cp01_ParamLimits

0xba7e,	// (0x000a949d) bg_popup_call2_act_pane_cp01

0xbb08,	// (0x000a9527) call_type_pane_cp05_ParamLimits

0xbb08,	// (0x000a9527) call_type_pane_cp05

0xbb5c,	// (0x000a957b) popup_call2_audio_second_window_g1_ParamLimits

0xbb5c,	// (0x000a957b) popup_call2_audio_second_window_g1

0xbbb0,	// (0x000a95cf) popup_call2_audio_second_window_g2_ParamLimits

0xbbb0,	// (0x000a95cf) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x000acf1b) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x000acf1b) popup_call2_audio_second_window_g

0xbc15,	// (0x000a9634) popup_call2_audio_second_window_t1_ParamLimits

0xbc15,	// (0x000a9634) popup_call2_audio_second_window_t1

0xbcd0,	// (0x000a96ef) popup_call2_audio_second_window_t2_ParamLimits

0xbcd0,	// (0x000a96ef) popup_call2_audio_second_window_t2

0xbd23,	// (0x000a9742) popup_call2_audio_second_window_t3_ParamLimits

0xbd23,	// (0x000a9742) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x000acf22) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x000acf22) popup_call2_audio_second_window_t

0xa1e0,	// (0x000a7bff) bg_popup_call2_in_pane_cp02

0xa1ea,	// (0x000a7c09) call_type_pane_cp04

0xa1f2,	// (0x000a7c11) popup_call2_audio_wait_window_g1

0xa1fa,	// (0x000a7c19) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000acafd) popup_call2_audio_wait_window_g

0xa202,	// (0x000a7c21) popup_call2_audio_wait_window_t3

0xbe16,	// (0x000a9835) bg_popup_call2_act_pane_ParamLimits

0xbe16,	// (0x000a9835) bg_popup_call2_act_pane

0xbed6,	// (0x000a98f5) call_type_pane_cp03_ParamLimits

0xbed6,	// (0x000a98f5) call_type_pane_cp03

0xbf3a,	// (0x000a9959) popup_call2_audio_first_window_g1_ParamLimits

0xbf3a,	// (0x000a9959) popup_call2_audio_first_window_g1

0xbfaa,	// (0x000a99c9) popup_call2_audio_first_window_g2_ParamLimits

0xbfaa,	// (0x000a99c9) popup_call2_audio_first_window_g2

0xb599,	// (0x000a8fb8) popup_call2_audio_first_window_g3_ParamLimits

0xb599,	// (0x000a8fb8) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x000acf2b) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x000acf2b) popup_call2_audio_first_window_g

0xc088,	// (0x000a9aa7) popup_call2_audio_first_window_t1_ParamLimits

0xc088,	// (0x000a9aa7) popup_call2_audio_first_window_t1

0xc18b,	// (0x000a9baa) popup_call2_audio_first_window_t4_ParamLimits

0xc18b,	// (0x000a9baa) popup_call2_audio_first_window_t4

0xc26e,	// (0x000a9c8d) popup_call2_audio_first_window_t5_ParamLimits

0xc26e,	// (0x000a9c8d) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x000acf36) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x000acf36) popup_call2_audio_first_window_t

0xa433,	// (0x000a7e52) bg_popup_call2_act_pane_g1

0xc8e9,	// (0x000aa308) popup_cale_lunar_info_window_t1

0xc8f7,	// (0x000aa316) popup_cale_lunar_info_window_t2

0xc905,	// (0x000aa324) popup_cale_lunar_info_window_t3

0xa1e0,	// (0x000a7bff) bg_popup_call2_bubble_pane

0xc36f,	// (0x000a9d8e) bg_popup_call2_in_pane_cp01_ParamLimits

0xc36f,	// (0x000a9d8e) bg_popup_call2_in_pane_cp01

0x9ebc,	// (0x000a78db) call_type_pane_cp02

0xc3b7,	// (0x000a9dd6) popup_call2_audio_out_window_g1_ParamLimits

0xc3b7,	// (0x000a9dd6) popup_call2_audio_out_window_g1

0xc3e3,	// (0x000a9e02) popup_call2_audio_out_window_g2_ParamLimits

0xc3e3,	// (0x000a9e02) popup_call2_audio_out_window_g2

0xc40b,	// (0x000a9e2a) popup_call2_audio_out_window_g3_ParamLimits

0xc40b,	// (0x000a9e2a) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x000acf3f) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x000acf3f) popup_call2_audio_out_window_g

0xc446,	// (0x000a9e65) popup_call2_audio_out_window_t1_ParamLimits

0xc446,	// (0x000a9e65) popup_call2_audio_out_window_t1

0xc4a5,	// (0x000a9ec4) popup_call2_audio_out_window_t2_ParamLimits

0xc4a5,	// (0x000a9ec4) popup_call2_audio_out_window_t2

0xc4f9,	// (0x000a9f18) popup_call2_audio_out_window_t3_ParamLimits

0xc4f9,	// (0x000a9f18) popup_call2_audio_out_window_t3

0xc50f,	// (0x000a9f2e) popup_call2_audio_out_window_t4_ParamLimits

0xc50f,	// (0x000a9f2e) popup_call2_audio_out_window_t4

0xc525,	// (0x000a9f44) popup_call2_audio_out_window_t5_ParamLimits

0xc525,	// (0x000a9f44) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x000acf48) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x000acf48) popup_call2_audio_out_window_t

0xc589,	// (0x000a9fa8) bg_popup_call2_in_pane_ParamLimits

0xc589,	// (0x000a9fa8) bg_popup_call2_in_pane

0xc5e5,	// (0x000aa004) popup_call2_audio_in_window_g1_ParamLimits

0xc5e5,	// (0x000aa004) popup_call2_audio_in_window_g1

0xc61d,	// (0x000aa03c) popup_call2_audio_in_window_g2_ParamLimits

0xc61d,	// (0x000aa03c) popup_call2_audio_in_window_g2

0xc655,	// (0x000aa074) popup_call2_audio_in_window_g3_ParamLimits

0xc655,	// (0x000aa074) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x000acf55) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x000acf55) popup_call2_audio_in_window_g

0xc6ad,	// (0x000aa0cc) popup_call2_audio_in_window_t1_ParamLimits

0xc6ad,	// (0x000aa0cc) popup_call2_audio_in_window_t1

0xc73f,	// (0x000aa15e) popup_call2_audio_in_window_t2_ParamLimits

0xc73f,	// (0x000aa15e) popup_call2_audio_in_window_t2

0xc7bf,	// (0x000aa1de) popup_call2_audio_in_window_t3_ParamLimits

0xc7bf,	// (0x000aa1de) popup_call2_audio_in_window_t3

0xc7d9,	// (0x000aa1f8) popup_call2_audio_in_window_t4_ParamLimits

0xc7d9,	// (0x000aa1f8) popup_call2_audio_in_window_t4

0xc7eb,	// (0x000aa20a) popup_call2_audio_in_window_t5_ParamLimits

0xc7eb,	// (0x000aa20a) popup_call2_audio_in_window_t5

0xc7fd,	// (0x000aa21c) popup_call2_audio_in_window_t6_ParamLimits

0xc7fd,	// (0x000aa21c) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x000acf5e) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x000acf5e) popup_call2_audio_in_window_t

0xa433,	// (0x000a7e52) bg_popup_call2_in_pane_g1

0xc913,	// (0x000aa332) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x000acfc6) popup_cale_lunar_info_window_t

0xa43b,	// (0x000a7e5a) bg_popup_call2_rect_pane_ParamLimits

0xa43b,	// (0x000a7e5a) bg_popup_call2_rect_pane

0xa1e0,	// (0x000a7bff) call2_cli_visual_graphic_pane

0xa1e0,	// (0x000a7bff) call2_cli_visual_text_pane

0x42ed,	// (0x000a1d0c) smil_status_volume_pane_g3

0x0002,

0xa555,	// (0x000a7f74) call2_cli_visual_graphic_pane_g1

0xa555,	// (0x000a7f74) call2_cli_visual_graphic_pane_g2

0xa555,	// (0x000a7f74) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x000acf6b) call2_cli_visual_graphic_pane_g

0xc80f,	// (0x000aa22e) bg_popup_call2_rect_pane_g1

0xaa7c,	// (0x000a849b) bg_popup_call2_rect_pane_g2

0xc817,	// (0x000aa236) bg_popup_call2_rect_pane_g3

0xc81f,	// (0x000aa23e) bg_popup_call2_rect_pane_g4

0xc827,	// (0x000aa246) bg_popup_call2_rect_pane_g5

0xc82f,	// (0x000aa24e) bg_popup_call2_rect_pane_g6

0xc837,	// (0x000aa256) bg_popup_call2_rect_pane_g7

0xc83f,	// (0x000aa25e) bg_popup_call2_rect_pane_g8

0xc847,	// (0x000aa266) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x000acf72) bg_popup_call2_rect_pane_g

0xc84f,	// (0x000aa26e) bg_popup_call2_bubble_pane_g1

0xc857,	// (0x000aa276) bg_popup_call2_bubble_pane_g2

0xc85f,	// (0x000aa27e) bg_popup_call2_bubble_pane_g3

0xc867,	// (0x000aa286) bg_popup_call2_bubble_pane_g4

0xc86f,	// (0x000aa28e) bg_popup_call2_bubble_pane_g5

0xc877,	// (0x000aa296) bg_popup_call2_bubble_pane_g6

0xc87f,	// (0x000aa29e) bg_popup_call2_bubble_pane_g7

0xc887,	// (0x000aa2a6) bg_popup_call2_bubble_pane_g8

0xc88f,	// (0x000aa2ae) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x000acf85) bg_popup_call2_bubble_pane_g

0x1324,	// (0x0009ed43) aid_cale_week_size_cell_pane

0x1aa7,	// (0x0009f4c6) aid_cams_cif_uncrop_pane_ParamLimits

0x1aa7,	// (0x0009f4c6) aid_cams_cif_uncrop_pane

0x1c04,	// (0x0009f623) aid_cams_size_cell_ParamLimits

0x1c04,	// (0x0009f623) aid_cams_size_cell

0x1c10,	// (0x0009f62f) grid_cams_pane_ParamLimits

0x1c1e,	// (0x0009f63d) linegrid_cams_pane_ParamLimits

0x1de6,	// (0x0009f805) call_video_pane_t1

0x1e03,	// (0x0009f822) call_video_pane_t2

0x0001,

0xf253,	// (0x000acc72) call_video_pane_t

0x22cf,	// (0x0009fcee) aid_cale_month_size_cell_pane_ParamLimits

0x22cf,	// (0x0009fcee) aid_cale_month_size_cell_pane

0xf5f0,	// (0x000ad00f) smil_status_volume_pane_g

0x42fa,	// (0x000a1d19) volume_smil_pane_ParamLimits

0x0ace,	// (0x0009e4ed) aid_popup2_width_pane

0x1222,	// (0x0009ec41) cell_qdial_pane_g4_ParamLimits

0x1222,	// (0x0009ec41) cell_qdial_pane_g4

0x32b7,	// (0x000a0cd6) aid_blid_cardinal_pane_ParamLimits

0x32c7,	// (0x000a0ce6) aid_blid_destination_pane_ParamLimits

0x32c7,	// (0x000a0ce6) aid_blid_destination_pane

0xa43b,	// (0x000a7e5a) bg_popup_call_poc_act_pane_ParamLimits

0xa43b,	// (0x000a7e5a) bg_popup_call_poc_act_pane

0xa43b,	// (0x000a7e5a) bg_popup_call_poc_inact_pane_ParamLimits

0xa43b,	// (0x000a7e5a) bg_popup_call_poc_inact_pane

0xc897,	// (0x000aa2b6) bg_popup_call_poc_act_pane_g1

0xc89f,	// (0x000aa2be) bg_popup_call_poc_act_pane_g2

0xc8a7,	// (0x000aa2c6) bg_popup_call_poc_act_pane_g3

0xc867,	// (0x000aa286) bg_popup_call_poc_act_pane_g4

0xc86f,	// (0x000aa28e) bg_popup_call_poc_act_pane_g5

0xc8af,	// (0x000aa2ce) bg_popup_call_poc_act_pane_g6

0xc87f,	// (0x000aa29e) bg_popup_call_poc_act_pane_g7

0xc8b7,	// (0x000aa2d6) bg_popup_call_poc_act_pane_g8

0xa1e0,	// (0x000a7bff) main_usb_pane

0x40f2,	// (0x000a1b11) popup_cale_lunar_info_window

0x211b,	// (0x0009fb3a) im_reading_pane_t1_ParamLimits

0xac48,	// (0x000a8667) list_im_pane_ParamLimits

0xac59,	// (0x000a8678) scroll_pane_cp07_ParamLimits

0xa1e0,	// (0x000a7bff) grid_highlight_pane_cp012

0xa43b,	// (0x000a7e5a) mup_scale_pane_ParamLimits

0xb599,	// (0x000a8fb8) main_usb_pane_g1_ParamLimits

0xb599,	// (0x000a8fb8) main_usb_pane_g1

0x3e3b,	// (0x000a185a) main_usb_pane_g2_ParamLimits

0x3e3b,	// (0x000a185a) main_usb_pane_g2

0x0001,

0xf590,	// (0x000acfaf) main_usb_pane_g_ParamLimits

0xf590,	// (0x000acfaf) main_usb_pane_g

0x3e47,	// (0x000a1866) main_usb_pane_t1_ParamLimits

0x3e47,	// (0x000a1866) main_usb_pane_t1

0x3e59,	// (0x000a1878) main_usb_pane_t2_ParamLimits

0x3e59,	// (0x000a1878) main_usb_pane_t2

0x3e6b,	// (0x000a188a) main_usb_pane_t3_ParamLimits

0x3e6b,	// (0x000a188a) main_usb_pane_t3

0x3e7d,	// (0x000a189c) main_usb_pane_t4_ParamLimits

0x3e7d,	// (0x000a189c) main_usb_pane_t4

0x3e8f,	// (0x000a18ae) main_usb_pane_t5_ParamLimits

0x3e8f,	// (0x000a18ae) main_usb_pane_t5

0x3ea1,	// (0x000a18c0) main_usb_pane_t6_ParamLimits

0x3ea1,	// (0x000a18c0) main_usb_pane_t6

0x0005,

0xf595,	// (0x000acfb4) main_usb_pane_t_ParamLimits

0x3256,	// (0x000a0c75) aid_text_placing

0x3261,	// (0x000a0c80) main_location2_pane_t1_ParamLimits

0x3277,	// (0x000a0c96) main_location2_pane_t2_ParamLimits

0x328d,	// (0x000a0cac) main_location2_pane_t3_ParamLimits

0x32a3,	// (0x000a0cc2) main_location2_pane_t4_ParamLimits

0x32a3,	// (0x000a0cc2) main_location2_pane_t4

0xf3b4,	// (0x000acdd3) main_location2_pane_t_ParamLimits

0xa477,	// (0x000a7e96) find_pinb_pane_g2_ParamLimits

0xa477,	// (0x000a7e96) find_pinb_pane_g2

0x0001,

0xf104,	// (0x000acb23) find_pinb_pane_g_ParamLimits

0xf104,	// (0x000acb23) find_pinb_pane_g

0xa483,	// (0x000a7ea2) find_pinb_pane_t1_ParamLimits

0xa495,	// (0x000a7eb4) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x000acb28) find_pinb_pane_t_ParamLimits

0xa1e0,	// (0x000a7bff) main_call3_pane

0x2882,	// (0x000a02a1) cale_month_day_heading_pane_t1_ParamLimits

0x2904,	// (0x000a0323) cale_month_day_heading_pane_t2_ParamLimits

0x297d,	// (0x000a039c) cale_month_day_heading_pane_t3_ParamLimits

0x29f6,	// (0x000a0415) cale_month_day_heading_pane_t4_ParamLimits

0x2a6f,	// (0x000a048e) cale_month_day_heading_pane_t5_ParamLimits

0x2af0,	// (0x000a050f) cale_month_day_heading_pane_t6_ParamLimits

0x2b79,	// (0x000a0598) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x000accaa) cale_month_day_heading_pane_t_ParamLimits

0xaea3,	// (0x000a88c2) smil_status_volume_pane

0x39f9,	// (0x000a1418) postcard_address_pane_ParamLimits

0x39f9,	// (0x000a1418) postcard_address_pane

0x3a07,	// (0x000a1426) postcard_message_pane_ParamLimits

0x3a07,	// (0x000a1426) postcard_message_pane

0x3e11,	// (0x000a1830) call2_cli_visual_pane_t1_ParamLimits

0x3e11,	// (0x000a1830) call2_cli_visual_pane_t1

0x4440,	// (0x000a1e5f) postcard_message_pane_t1_ParamLimits

0x4440,	// (0x000a1e5f) postcard_message_pane_t1

0xcacb,	// (0x000aa4ea) postcard_address_pane_t1_ParamLimits

0xcacb,	// (0x000aa4ea) postcard_address_pane_t1

0x4431,	// (0x000a1e50) popup_call3_audio_in_window_ParamLimits

0x4431,	// (0x000a1e50) popup_call3_audio_in_window

0x430f,	// (0x000a1d2e) bg_popup_call3_in_pane_ParamLimits

0x430f,	// (0x000a1d2e) bg_popup_call3_in_pane

0x4377,	// (0x000a1d96) popup_call3_audio_in_window_g1_ParamLimits

0x4377,	// (0x000a1d96) popup_call3_audio_in_window_g1

0x438f,	// (0x000a1dae) popup_call3_audio_in_window_g2_ParamLimits

0x438f,	// (0x000a1dae) popup_call3_audio_in_window_g2

0x43a7,	// (0x000a1dc6) popup_call3_audio_in_window_g3_ParamLimits

0x43a7,	// (0x000a1dc6) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x000ad016) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x000ad016) popup_call3_audio_in_window_g

0x43cf,	// (0x000a1dee) popup_call3_audio_in_window_t1_ParamLimits

0x43cf,	// (0x000a1dee) popup_call3_audio_in_window_t1

0x43f7,	// (0x000a1e16) popup_call3_audio_in_window_t2_ParamLimits

0x43f7,	// (0x000a1e16) popup_call3_audio_in_window_t2

0x441f,	// (0x000a1e3e) popup_call3_audio_in_window_t3_ParamLimits

0x441f,	// (0x000a1e3e) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x000ad01f) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x000ad01f) popup_call3_audio_in_window_t

0xab43,	// (0x000a8562) bg_popup_call3_rect_pane

0xc80f,	// (0x000aa22e) bg_popup_call3_rect_pane_g1

0xaa7c,	// (0x000a849b) bg_popup_call3_rect_pane_g2

0xc817,	// (0x000aa236) bg_popup_call3_rect_pane_g3

0xc81f,	// (0x000aa23e) bg_popup_call3_rect_pane_g4

0xc827,	// (0x000aa246) bg_popup_call3_rect_pane_g5

0xc82f,	// (0x000aa24e) bg_popup_call3_rect_pane_g6

0xc837,	// (0x000aa256) bg_popup_call3_rect_pane_g7

0x35fb,	// (0x000a101a) mup_visualizer_osc_pane

0xb6a6,	// (0x000a90c5) mup_visualizer_spec_pane

0x432f,	// (0x000a1d4e) call3_video_qcif_pane_ParamLimits

0x432f,	// (0x000a1d4e) call3_video_qcif_pane

0x4341,	// (0x000a1d60) call3_video_qcif_uncrop_pane_ParamLimits

0x4341,	// (0x000a1d60) call3_video_qcif_uncrop_pane

0x4351,	// (0x000a1d70) call3_video_subqcif_pane_ParamLimits

0x4351,	// (0x000a1d70) call3_video_subqcif_pane

0x4365,	// (0x000a1d84) call3_video_subqcif_uncrop_pane_ParamLimits

0x4365,	// (0x000a1d84) call3_video_subqcif_uncrop_pane

0x43bf,	// (0x000a1dde) popup_call3_audio_in_window_g4_ParamLimits

0x43bf,	// (0x000a1dde) popup_call3_audio_in_window_g4

0x42dc,	// (0x000a1cfb) mup_spec_half_pane

0x42e5,	// (0x000a1d04) mup_spec_half_pane_cp

0xca8b,	// (0x000aa4aa) mup_osc_middle_pane

0xca94,	// (0x000aa4b3) mup_visualizer_osc_pane_g1

0x42bc,	// (0x000a1cdb) mup_spec_bar_pane_ParamLimits

0x42bc,	// (0x000a1cdb) mup_spec_bar_pane

0xca78,	// (0x000aa497) mup_spec_bar_pane_g1

0xca82,	// (0x000aa4a1) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x000ad00a) mup_spec_bar_pane_g

0x1324,	// (0x0009ed43) aid_cale_week_size_cell_pane_ParamLimits

0x133e,	// (0x0009ed5d) bg_cale_heading_pane_ParamLimits

0x1367,	// (0x0009ed86) bg_cale_pane_cp01_ParamLimits

0x1389,	// (0x0009eda8) cale_week_corner_pane_ParamLimits

0x13a8,	// (0x0009edc7) cale_week_day_heading_pane_ParamLimits

0x13d6,	// (0x0009edf5) cale_week_scroll_pane_g1_ParamLimits

0x13fa,	// (0x0009ee19) cale_week_scroll_pane_g2_ParamLimits

0x1412,	// (0x0009ee31) cale_week_scroll_pane_g3_ParamLimits

0x142a,	// (0x0009ee49) cale_week_scroll_pane_g4_ParamLimits

0x1442,	// (0x0009ee61) cale_week_scroll_pane_g5_ParamLimits

0x145a,	// (0x0009ee79) cale_week_scroll_pane_g6_ParamLimits

0x147a,	// (0x0009ee99) cale_week_scroll_pane_g7_ParamLimits

0x149a,	// (0x0009eeb9) cale_week_scroll_pane_g8_ParamLimits

0x14ba,	// (0x0009eed9) cale_week_scroll_pane_g9_ParamLimits

0x14d7,	// (0x0009eef6) cale_week_scroll_pane_g10_ParamLimits

0x14f4,	// (0x0009ef13) cale_week_scroll_pane_g11_ParamLimits

0x1513,	// (0x0009ef32) cale_week_scroll_pane_g12_ParamLimits

0x1538,	// (0x0009ef57) cale_week_scroll_pane_g13_ParamLimits

0x1561,	// (0x0009ef80) cale_week_scroll_pane_g14_ParamLimits

0x158a,	// (0x0009efa9) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x000acbb4) cale_week_scroll_pane_g_ParamLimits

0x15d3,	// (0x0009eff2) cale_week_time_pane_ParamLimits

0x15f3,	// (0x0009f012) grid_cale_week_pane_ParamLimits

0xaab9,	// (0x000a84d8) listscroll_cale_week_pane_t1

0xaacb,	// (0x000a84ea) scroll_pane_cp08_ParamLimits

0x2347,	// (0x0009fd66) cale_month_corner_pane_ParamLimits

0xae79,	// (0x000a8898) cale_month_pane_t1

0x2809,	// (0x000a0228) cale_month_week_pane_ParamLimits

0xb599,	// (0x000a8fb8) popup_call_status_window_g1_ParamLimits

0x3074,	// (0x000a0a93) popup_call_status_window_g2_ParamLimits

0x3080,	// (0x000a0a9f) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x000acd5a) popup_call_status_window_g_ParamLimits

0xb26f,	// (0x000a8c8e) aid_call2_pane

0x389f,	// (0x000a12be) msg_header_pane_g1

0x39f9,	// (0x000a1418) postcard_address2_pane_ParamLimits

0x39f9,	// (0x000a1418) postcard_address2_pane

0x3a07,	// (0x000a1426) postcard_message2_pane_ParamLimits

0x3a07,	// (0x000a1426) postcard_message2_pane

0x4276,	// (0x000a1c95) message2_row_pane_ParamLimits

0x4276,	// (0x000a1c95) message2_row_pane

0xca33,	// (0x000aa452) address2_row_pane_ParamLimits

0xca33,	// (0x000aa452) address2_row_pane

0xca46,	// (0x000aa465) postcard_message2_row_pane_g1

0xca4e,	// (0x000aa46d) postcard_message2_row_pane_t1

0xca46,	// (0x000aa465) address2_row_pane_g1

0xca4e,	// (0x000aa46d) address2_row_pane_t1

0x1981,	// (0x0009f3a0) aid_size_cell_vorec

0xa1e0,	// (0x000a7bff) main_rss_pane

0x4290,	// (0x000a1caf) rss_list_single_pane_ParamLimits

0x4290,	// (0x000a1caf) rss_list_single_pane

0xca5c,	// (0x000aa47b) rss_list_single_pane_t1

0xca6a,	// (0x000aa489) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x000ad005) rss_list_single_pane_t

0xa1e0,	// (0x000a7bff) main_camera2_pane

0xa1e0,	// (0x000a7bff) main_video2_pane

0x44a4,	// (0x000a1ec3) cams_zoom_pane_cp2_ParamLimits

0x44a4,	// (0x000a1ec3) cams_zoom_pane_cp2

0x44b0,	// (0x000a1ecf) image2_vga_pane_ParamLimits

0x44b0,	// (0x000a1ecf) image2_vga_pane

0x44bf,	// (0x000a1ede) main_camera2_pane_g1_ParamLimits

0x44bf,	// (0x000a1ede) main_camera2_pane_g1

0x44cb,	// (0x000a1eea) main_camera2_pane_g2_ParamLimits

0x44cb,	// (0x000a1eea) main_camera2_pane_g2

0x44d7,	// (0x000a1ef6) main_camera2_pane_g3_ParamLimits

0x44d7,	// (0x000a1ef6) main_camera2_pane_g3

0x44e3,	// (0x000a1f02) main_camera2_pane_g4_ParamLimits

0x44e3,	// (0x000a1f02) main_camera2_pane_g4

0x44ef,	// (0x000a1f0e) main_camera2_pane_g5_ParamLimits

0x44ef,	// (0x000a1f0e) main_camera2_pane_g5

0x44fb,	// (0x000a1f1a) main_camera2_pane_g6_ParamLimits

0x44fb,	// (0x000a1f1a) main_camera2_pane_g6

0x4507,	// (0x000a1f26) main_camera2_pane_g7_ParamLimits

0x4507,	// (0x000a1f26) main_camera2_pane_g7

0x4513,	// (0x000a1f32) main_camera2_pane_g8_ParamLimits

0x4513,	// (0x000a1f32) main_camera2_pane_g8

0x0008,

0xf607,	// (0x000ad026) main_camera2_pane_g_ParamLimits

0xf607,	// (0x000ad026) main_camera2_pane_g

0x452b,	// (0x000a1f4a) main_camera2_pane_t1_ParamLimits

0x452b,	// (0x000a1f4a) main_camera2_pane_t1

0x453d,	// (0x000a1f5c) main_camera2_pane_t2_ParamLimits

0x453d,	// (0x000a1f5c) main_camera2_pane_t2

0x454f,	// (0x000a1f6e) main_camera2_pane_t3_ParamLimits

0x454f,	// (0x000a1f6e) main_camera2_pane_t3

0x4561,	// (0x000a1f80) main_camera2_pane_t4_ParamLimits

0x4561,	// (0x000a1f80) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x000ad039) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x000ad039) main_camera2_pane_t

0x45be,	// (0x000a1fdd) cams_zoom_pane_cp4_ParamLimits

0x45be,	// (0x000a1fdd) cams_zoom_pane_cp4

0x45ce,	// (0x000a1fed) image2_cif_pane_ParamLimits

0x45ce,	// (0x000a1fed) image2_cif_pane

0x45e3,	// (0x000a2002) image2_subqcif_pane_ParamLimits

0x45e3,	// (0x000a2002) image2_subqcif_pane

0x45f2,	// (0x000a2011) main_video2_pane_g1_ParamLimits

0x45f2,	// (0x000a2011) main_video2_pane_g1

0x4604,	// (0x000a2023) main_video2_pane_g2_ParamLimits

0x4604,	// (0x000a2023) main_video2_pane_g2

0x4614,	// (0x000a2033) main_video2_pane_g3_ParamLimits

0x4614,	// (0x000a2033) main_video2_pane_g3

0x4624,	// (0x000a2043) main_video2_pane_g4_ParamLimits

0x4624,	// (0x000a2043) main_video2_pane_g4

0x4634,	// (0x000a2053) main_video2_pane_g5_ParamLimits

0x4634,	// (0x000a2053) main_video2_pane_g5

0x4644,	// (0x000a2063) main_video2_pane_g6_ParamLimits

0x4644,	// (0x000a2063) main_video2_pane_g6

0x0005,

0xf629,	// (0x000ad048) main_video2_pane_g_ParamLimits

0xf629,	// (0x000ad048) main_video2_pane_g

0x4656,	// (0x000a2075) main_video2_pane_t1_ParamLimits

0x4656,	// (0x000a2075) main_video2_pane_t1

0x4670,	// (0x000a208f) main_video2_pane_t2_ParamLimits

0x4670,	// (0x000a208f) main_video2_pane_t2

0x4696,	// (0x000a20b5) main_video2_pane_t3_ParamLimits

0x4696,	// (0x000a20b5) main_video2_pane_t3

0x0002,

0xf636,	// (0x000ad055) main_video2_pane_t_ParamLimits

0xf636,	// (0x000ad055) main_video2_pane_t

0x3f58,	// (0x000a1977) call_muted_g2

0x0001,

0xf5d8,	// (0x000acff7) call_muted_g

0xa1e0,	// (0x000a7bff) main_mup2_pane

0xcae2,	// (0x000aa501) main_mup2_pane_g1_ParamLimits

0xcae2,	// (0x000aa501) main_mup2_pane_g1

0x46bc,	// (0x000a20db) main_mup2_pane_g2_ParamLimits

0x46bc,	// (0x000a20db) main_mup2_pane_g2

0x494e,	// (0x000a236d) main_mup_pane_g13_cp1

0x4956,	// (0x000a2375) mup_volume_pane_cp1

0x46de,	// (0x000a20fd) main_mup2_pane_g4_ParamLimits

0x46de,	// (0x000a20fd) main_mup2_pane_g4

0x46f3,	// (0x000a2112) main_mup2_pane_g5_ParamLimits

0x46f3,	// (0x000a2112) main_mup2_pane_g5

0x4708,	// (0x000a2127) main_mup2_pane_g6_ParamLimits

0x4708,	// (0x000a2127) main_mup2_pane_g6

0x471d,	// (0x000a213c) main_mup2_pane_g7_ParamLimits

0x471d,	// (0x000a213c) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x000ad05c) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x000ad05c) main_mup2_pane_g

0x4739,	// (0x000a2158) main_mup2_pane_t1_ParamLimits

0x4739,	// (0x000a2158) main_mup2_pane_t1

0x4750,	// (0x000a216f) main_mup2_pane_t2_ParamLimits

0x4750,	// (0x000a216f) main_mup2_pane_t2

0x4767,	// (0x000a2186) main_mup2_pane_t3_ParamLimits

0x4767,	// (0x000a2186) main_mup2_pane_t3

0x477e,	// (0x000a219d) main_mup2_pane_t4_ParamLimits

0x477e,	// (0x000a219d) main_mup2_pane_t4

0x4798,	// (0x000a21b7) main_mup2_pane_t5_ParamLimits

0x4798,	// (0x000a21b7) main_mup2_pane_t5

0x47b2,	// (0x000a21d1) main_mup2_pane_t6_ParamLimits

0x47b2,	// (0x000a21d1) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x000ad06b) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x000ad06b) main_mup2_pane_t

0x47ea,	// (0x000a2209) mup2_visualizer_pane_ParamLimits

0x47ea,	// (0x000a2209) mup2_visualizer_pane

0x4820,	// (0x000a223f) mup_progress_pane_cp_ParamLimits

0x4820,	// (0x000a223f) mup_progress_pane_cp

0x4939,	// (0x000a2358) mup_volume_pane_cp_ParamLimits

0x4939,	// (0x000a2358) mup_volume_pane_cp

0x4839,	// (0x000a2258) mup2_visualizer_pane_g1_ParamLimits

0x4839,	// (0x000a2258) mup2_visualizer_pane_g1

0xcaee,	// (0x000aa50d) mup2_visualizer_pane_g2_ParamLimits

0xcaee,	// (0x000aa50d) mup2_visualizer_pane_g2

0x484e,	// (0x000a226d) mup2_visualizer_pane_g3_ParamLimits

0x484e,	// (0x000a226d) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x000ad078) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x000ad078) mup2_visualizer_pane_g

0xb8cf,	// (0x000a92ee) aid_size_cell_fmradio

0x406e,	// (0x000a1a8d) aid_height_parent_landcape

0xacd7,	// (0x000a86f6) wml_content_pane_cp

0xacdf,	// (0x000a86fe) wml_tabs_pane

0xace8,	// (0x000a8707) popup_wml_miniature_window

0xacf0,	// (0x000a870f) scroll_pane_cp021

0xad04,	// (0x000a8723) wml_content_pane_comp8

0xa1e0,	// (0x000a7bff) bg_popup_sub_pane_cp05

0xcb0c,	// (0x000aa52b) popup_wml_miniature_window_g1

0xcb14,	// (0x000aa533) wml_miniature_view_pane

0x485c,	// (0x000a227b) aid_size_wml_view

0x4864,	// (0x000a2283) wml_miniature_view_pane_g1

0x486d,	// (0x000a228c) wml_miniature_view_pane_g2

0x4876,	// (0x000a2295) wml_miniature_view_pane_g3

0x487e,	// (0x000a229d) wml_miniature_view_pane_g4

0x4886,	// (0x000a22a5) wml_miniature_view_pane_g5

0x488e,	// (0x000a22ad) wml_miniature_view_pane_g6

0x4896,	// (0x000a22b5) wml_miniature_view_pane_g7

0x489e,	// (0x000a22bd) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x000ad07f) wml_miniature_view_pane_g

0xcae2,	// (0x000aa501) background_graphic_ParamLimits

0xcae2,	// (0x000aa501) background_graphic

0xcb1c,	// (0x000aa53b) wml_tabs_2_pane

0xcb25,	// (0x000aa544) wml_tabs_3_pane_ParamLimits

0xcb25,	// (0x000aa544) wml_tabs_3_pane

0xcb37,	// (0x000aa556) wml_tabs_4_pane_ParamLimits

0xcb37,	// (0x000aa556) wml_tabs_4_pane

0xcb4d,	// (0x000aa56c) wml_tabs_5_pane_ParamLimits

0xcb4d,	// (0x000aa56c) wml_tabs_5_pane

0xcb67,	// (0x000aa586) wml_tabs_pane_g2_ParamLimits

0xcb67,	// (0x000aa586) wml_tabs_pane_g2

0xcb7b,	// (0x000aa59a) wml_tabs_pane_g3_ParamLimits

0xcb7b,	// (0x000aa59a) wml_tabs_pane_g3

0x48a6,	// (0x000a22c5) wml_tabs_2_active_pane_ParamLimits

0x48a6,	// (0x000a22c5) wml_tabs_2_active_pane

0x48b8,	// (0x000a22d7) wml_tabs_2_passive_pane_ParamLimits

0x48b8,	// (0x000a22d7) wml_tabs_2_passive_pane

0x48ca,	// (0x000a22e9) wml_tabs_3_active_pane_cp_ParamLimits

0x48ca,	// (0x000a22e9) wml_tabs_3_active_pane_cp

0x48dd,	// (0x000a22fc) wml_tabs_3_passive_pane_ParamLimits

0x48dd,	// (0x000a22fc) wml_tabs_3_passive_pane

0x48ee,	// (0x000a230d) wml_tabs_3_passive_pane_cp_ParamLimits

0x48ee,	// (0x000a230d) wml_tabs_3_passive_pane_cp

0x4903,	// (0x000a2322) tabs_4_active_pane

0x490b,	// (0x000a232a) tabs_4_passive_pane

0x4913,	// (0x000a2332) tabs_4_passive_pane_cp

0x491b,	// (0x000a233a) tabs_4_passive_pane_cp2

0x3e33,	// (0x000a1852) aid_height_text

0x35c4,	// (0x000a0fe3) mup_volume_cont_pane_ParamLimits

0x35c4,	// (0x000a0fe3) mup_volume_cont_pane

0x0e7c,	// (0x0009e89b) aid_size_cell_pinb

0x0e86,	// (0x0009e8a5) aid_size_list_pinb

0x4809,	// (0x000a2228) mup2_volume_cont_pane_ParamLimits

0x4809,	// (0x000a2228) mup2_volume_cont_pane

0x4925,	// (0x000a2344) mup2_volume_cont_pane_g1_ParamLimits

0x4925,	// (0x000a2344) mup2_volume_cont_pane_g1

0x0ada,	// (0x0009e4f9) aid_size_cell_touch_ParamLimits

0x0ada,	// (0x0009e4f9) aid_size_cell_touch

0x0d9b,	// (0x0009e7ba) touch_pane_ParamLimits

0x0d9b,	// (0x0009e7ba) touch_pane

0x0d91,	// (0x0009e7b0) main_rss2_pane

0xcb98,	// (0x000aa5b7) listscroll_rss2_pane

0xcba1,	// (0x000aa5c0) rss2_navigation_pane

0xcba9,	// (0x000aa5c8) list_rss2_pane

0xb393,	// (0x000a8db2) scroll_pane_cp22

0xcbb1,	// (0x000aa5d0) rss2_navigation_pane_g1

0xcbba,	// (0x000aa5d9) rss2_navigation_pane_g2

0xcbc2,	// (0x000aa5e1) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x000ad090) rss2_navigation_pane_g

0xcbca,	// (0x000aa5e9) rss2_navigation_pane_t1

0x495e,	// (0x000a237d) rss2_list_single_pane_ParamLimits

0x495e,	// (0x000a237d) rss2_list_single_pane

0xcbd8,	// (0x000aa5f7) rss2_list_single_pane_t2

0xcbe6,	// (0x000aa605) rss2_list_single_pane_t3_ParamLimits

0xcbe6,	// (0x000aa605) rss2_list_single_pane_t3

0xcc03,	// (0x000aa622) rss2_list_single_pane_t4

0x2e41,	// (0x000a0860) smil_status_pane_g1

0x4097,	// (0x000a1ab6) main_image2_pane_ParamLimits

0x4097,	// (0x000a1ab6) main_image2_pane

0x451f,	// (0x000a1f3e) main_camera2_pane_g9_ParamLimits

0x451f,	// (0x000a1f3e) main_camera2_pane_g9

0x4573,	// (0x000a1f92) main_camera2_pane_t5_ParamLimits

0x4573,	// (0x000a1f92) main_camera2_pane_t5

0x4585,	// (0x000a1fa4) main_camera2_pane_t6_ParamLimits

0x4585,	// (0x000a1fa4) main_camera2_pane_t6

0x4981,	// (0x000a23a0) main_image2_pane_g1_ParamLimits

0x4981,	// (0x000a23a0) main_image2_pane_g1

0x3bd0,	// (0x000a15ef) smil2_video_pane_ParamLimits

0x3bd0,	// (0x000a15ef) smil2_video_pane

0x09de,	// (0x0009e3fd) aid_zoom_text_primary_cp

0x0d2c,	// (0x0009e74b) popup_preview_fixed_window

0xac40,	// (0x000a865f) im_reading_pane_g1

0x4469,	// (0x000a1e88) cams2_bc_adjust_pane_cp_ParamLimits

0x4469,	// (0x000a1e88) cams2_bc_adjust_pane_cp

0x45b0,	// (0x000a1fcf) cams2_bc_adjust_pane_ParamLimits

0x45b0,	// (0x000a1fcf) cams2_bc_adjust_pane

0xd29a,	// (0x000aacb9) cams2_bc_adjust_pane_g1

0x498d,	// (0x000a23ac) cams2_slider_pane

0x4996,	// (0x000a23b5) cams2_slider_pane_g1

0x499f,	// (0x000a23be) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x000ad097) cams2_slider_pane_g

0x0f81,	// (0x0009e9a0) calc_display_pane_ParamLimits

0x0f9f,	// (0x0009e9be) calc_paper_pane_ParamLimits

0x0fbb,	// (0x0009e9da) grid_calc_pane_ParamLimits

0x30de,	// (0x000a0afd) popup_clock_digital_window_t1_ParamLimits

0xb86c,	// (0x000a928b) main_image_pane_t1

0x0f67,	// (0x0009e986) aid_size_cell_calc_ParamLimits

0x0f67,	// (0x0009e986) aid_size_cell_calc

0x40c8,	// (0x000a1ae7) popup_blid_sat_info2_window_ParamLimits

0x40c8,	// (0x000a1ae7) popup_blid_sat_info2_window

0xcc19,	// (0x000aa638) aid_size_cell_blid

0xcc21,	// (0x000aa640) bg_popup_window_pane_cp07

0xcc44,	// (0x000aa663) grid_popup_blid_pane

0xcc4e,	// (0x000aa66d) heading_pane_cp05_ParamLimits

0xcc4e,	// (0x000aa66d) heading_pane_cp05

0xcd18,	// (0x000aa737) cell_popup_blid_pane_ParamLimits

0xcd18,	// (0x000aa737) cell_popup_blid_pane

0xcd42,	// (0x000aa761) cell_popup_blid_pane_g1

0xcd4a,	// (0x000aa769) cell_popup_blid_pane_t1

0x47cf,	// (0x000a21ee) mup2_indicator_pane_ParamLimits

0x47cf,	// (0x000a21ee) mup2_indicator_pane

0xab43,	// (0x000a8562) mup2_visualizer_osc_pane

0xcafa,	// (0x000aa519) mup2_visualizer_spec_pane_ParamLimits

0xcafa,	// (0x000aa519) mup2_visualizer_spec_pane

0x49b9,	// (0x000a23d8) mup2_spec_half_pane

0x49c2,	// (0x000a23e1) mup2_spec_half_pane_cp

0x49cc,	// (0x000a23eb) mup2_spec_bar_pane_ParamLimits

0x49cc,	// (0x000a23eb) mup2_spec_bar_pane

0xca78,	// (0x000aa497) mup2_spec_bar_pane_g1

0xca82,	// (0x000aa4a1) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x000ad00a) mup2_spec_bar_pane_g

0x49eb,	// (0x000a240a) mup2_osc_middle_pane

0xca94,	// (0x000aa4b3) mup2_visualizer_osc_pane_g1

0x9db8,	// (0x000a77d7) popup_number_entry_window_t1_ParamLimits

0x9dcb,	// (0x000a77ea) popup_number_entry_window_t2_ParamLimits

0x9ddd,	// (0x000a77fc) popup_number_entry_window_t3_ParamLimits

0x9def,	// (0x000a780e) popup_number_entry_window_t5_ParamLimits

0x9def,	// (0x000a780e) popup_number_entry_window_t5

0xf0af,	// (0x000acace) popup_number_entry_window_t_ParamLimits

0x9e24,	// (0x000a7843) text_title_cp2_ParamLimits

0x38bd,	// (0x000a12dc) aid_hotspot_pointer_text2_pane

0x3957,	// (0x000a1376) main_viewer_pane_g9_ParamLimits

0x3957,	// (0x000a1376) main_viewer_pane_g9

0xae79,	// (0x000a8898) cale_month_pane_t1_ParamLimits

0xaeb6,	// (0x000a88d5) bg_cale_pane_ParamLimits

0xaece,	// (0x000a88ed) list_cale_pane_ParamLimits

0xaedf,	// (0x000a88fe) listscroll_cale_day_pane_t1

0xaef1,	// (0x000a8910) scroll_pane_cp09_ParamLimits

0x3603,	// (0x000a1022) main_mup_eq_pane_t1_ParamLimits

0x3603,	// (0x000a1022) main_mup_eq_pane_t1

0x361f,	// (0x000a103e) main_mup_eq_pane_t2_ParamLimits

0x361f,	// (0x000a103e) main_mup_eq_pane_t2

0x363b,	// (0x000a105a) main_mup_eq_pane_t3_ParamLimits

0x363b,	// (0x000a105a) main_mup_eq_pane_t3

0x3655,	// (0x000a1074) main_mup_eq_pane_t4_ParamLimits

0x3655,	// (0x000a1074) main_mup_eq_pane_t4

0x366f,	// (0x000a108e) main_mup_eq_pane_t5_ParamLimits

0x366f,	// (0x000a108e) main_mup_eq_pane_t5

0x3689,	// (0x000a10a8) main_mup_eq_pane_t6_ParamLimits

0x3689,	// (0x000a10a8) main_mup_eq_pane_t6

0x369f,	// (0x000a10be) main_mup_eq_pane_t7_ParamLimits

0x369f,	// (0x000a10be) main_mup_eq_pane_t7

0x36b5,	// (0x000a10d4) main_mup_eq_pane_t8_ParamLimits

0x36b5,	// (0x000a10d4) main_mup_eq_pane_t8

0x36cb,	// (0x000a10ea) main_mup_eq_pane_t9_ParamLimits

0x36cb,	// (0x000a10ea) main_mup_eq_pane_t9

0x36e7,	// (0x000a1106) main_mup_eq_pane_t10_ParamLimits

0x36e7,	// (0x000a1106) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x000ace59) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x000ace59) main_mup_eq_pane_t

0x37ac,	// (0x000a11cb) mup_equalizer_pane_cp5_ParamLimits

0x37c4,	// (0x000a11e3) mup_equalizer_pane_cp6_ParamLimits

0x37dc,	// (0x000a11fb) mup_equalizer_pane_cp7_ParamLimits

0x0d91,	// (0x0009e7b0) main_gallery_pane

0xca9d,	// (0x000aa4bc) smil2_volume_pane

0xcaa5,	// (0x000aa4c4) smil_status_volume_pane_g1_ParamLimits

0xcab8,	// (0x000aa4d7) smil_status_volume_pane_g2_ParamLimits

0x42ed,	// (0x000a1d0c) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x000ad00f) smil_status_volume_pane_g_ParamLimits

0xcc21,	// (0x000aa640) bg_popup_window_pane_cp07_ParamLimits

0xcc2f,	// (0x000aa64e) blid_firmament_pane

0x49f4,	// (0x000a2413) aid_size_cell_gallery_ParamLimits

0x49f4,	// (0x000a2413) aid_size_cell_gallery

0x4a02,	// (0x000a2421) grid_gallery_pane_ParamLimits

0x4a02,	// (0x000a2421) grid_gallery_pane

0x4a12,	// (0x000a2431) cell_gallery_pane_ParamLimits

0x4a12,	// (0x000a2431) cell_gallery_pane

0xcd58,	// (0x000aa777) bg_cell_gallery_focus_pane_ParamLimits

0xcd58,	// (0x000aa777) bg_cell_gallery_focus_pane

0xcd6a,	// (0x000aa789) cell_gallery_pane_g1_ParamLimits

0xcd6a,	// (0x000aa789) cell_gallery_pane_g1

0x4a5d,	// (0x000a247c) cell_gallery_pane_g2_ParamLimits

0x4a5d,	// (0x000a247c) cell_gallery_pane_g2

0x4a6a,	// (0x000a2489) cell_gallery_pane_g3_ParamLimits

0x4a6a,	// (0x000a2489) cell_gallery_pane_g3

0xcd76,	// (0x000aa795) cell_gallery_pane_g4_ParamLimits

0xcd76,	// (0x000aa795) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x000ad0bd) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x000ad0bd) cell_gallery_pane_g

0xcd82,	// (0x000aa7a1) bg_cell_gallery_focus_pane_g1

0xcd8a,	// (0x000aa7a9) bg_cell_gallery_focus_pane_g2

0xcd92,	// (0x000aa7b1) bg_cell_gallery_focus_pane_g3

0xcd9a,	// (0x000aa7b9) bg_cell_gallery_focus_pane_g4

0xcda2,	// (0x000aa7c1) bg_cell_gallery_focus_pane_g5

0xcdaa,	// (0x000aa7c9) bg_cell_gallery_focus_pane_g6

0xcdb2,	// (0x000aa7d1) bg_cell_gallery_focus_pane_g7

0xcdba,	// (0x000aa7d9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x000ad0c6) bg_cell_gallery_focus_pane_g

0xcdc2,	// (0x000aa7e1) aid_firma_cardinal

0xcdd6,	// (0x000aa7f5) blid_firmament_pane_t1

0xcded,	// (0x000aa80c) blid_firmament_pane_t2

0xce04,	// (0x000aa823) blid_firmament_pane_t3

0xce1b,	// (0x000aa83a) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x000ad0d7) blid_firmament_pane_t

0xce32,	// (0x000aa851) blid_sat_info_pane

0xce42,	// (0x000aa861) blid_sat_info_pane_g1

0xce42,	// (0x000aa861) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x000ad0e0) blid_sat_info_pane_g

0xce4c,	// (0x000aa86b) blid_sat_info_pane_t1

0xce5a,	// (0x000aa879) smil2_volume_content_pane

0xce63,	// (0x000aa882) smil2_volume_pane_g1

0xa62a,	// (0x000a8049) smil2_volume_content_pane_g1

0xce6b,	// (0x000aa88a) smil2_volume_content_pane_g2

0xce74,	// (0x000aa893) smil2_volume_content_pane_g3

0xce7d,	// (0x000aa89c) smil2_volume_content_pane_g4

0xce86,	// (0x000aa8a5) smil2_volume_content_pane_g5

0xce8f,	// (0x000aa8ae) smil2_volume_content_pane_g6

0xce98,	// (0x000aa8b7) smil2_volume_content_pane_g7

0xcea1,	// (0x000aa8c0) smil2_volume_content_pane_g8

0xceaa,	// (0x000aa8c9) smil2_volume_content_pane_g9

0xceb3,	// (0x000aa8d2) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x000ad0e5) smil2_volume_content_pane_g

0x16b4,	// (0x0009f0d3) cale_week_day_heading_pane_t1_ParamLimits

0x16dc,	// (0x0009f0fb) cale_week_day_heading_pane_t2_ParamLimits

0x1709,	// (0x0009f128) cale_week_day_heading_pane_t3_ParamLimits

0x1736,	// (0x0009f155) cale_week_day_heading_pane_t4_ParamLimits

0x1763,	// (0x0009f182) cale_week_day_heading_pane_t5_ParamLimits

0x1790,	// (0x0009f1af) cale_week_day_heading_pane_t6_ParamLimits

0x17bd,	// (0x0009f1dc) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x000acbd5) cale_week_day_heading_pane_t_ParamLimits

0xaae8,	// (0x000a8507) bg_cale_side_pane_ParamLimits

0x17e5,	// (0x0009f204) cale_week_time_pane_t1_ParamLimits

0x1809,	// (0x0009f228) cale_week_time_pane_t2_ParamLimits

0x182d,	// (0x0009f24c) cale_week_time_pane_t3_ParamLimits

0x1851,	// (0x0009f270) cale_week_time_pane_t4_ParamLimits

0x1875,	// (0x0009f294) cale_week_time_pane_t5_ParamLimits

0x189b,	// (0x0009f2ba) cale_week_time_pane_t6_ParamLimits

0x18c3,	// (0x0009f2e2) cale_week_time_pane_t7_ParamLimits

0x18ef,	// (0x0009f30e) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x000acbe4) cale_week_time_pane_t_ParamLimits

0x191f,	// (0x0009f33e) cell_cale_week_pane_g2_ParamLimits

0xaae8,	// (0x000a8507) bg_cale_side_pane_cp01_ParamLimits

0x2c02,	// (0x000a0621) cale_month_week_pane_t1_ParamLimits

0x2c1b,	// (0x000a063a) cale_month_week_pane_t2_ParamLimits

0x2c34,	// (0x000a0653) cale_month_week_pane_t3_ParamLimits

0x2c4d,	// (0x000a066c) cale_month_week_pane_t4_ParamLimits

0x2c66,	// (0x000a0685) cale_month_week_pane_t5_ParamLimits

0x2c83,	// (0x000a06a2) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x000accb9) cale_month_week_pane_t_ParamLimits

0x2dfe,	// (0x000a081d) cell_cale_month_pane_g1_ParamLimits

0x0d91,	// (0x0009e7b0) main_cale_event_viewer_pane

0x9d8e,	// (0x000a77ad) listscroll_cale_event_viewer_pane

0xcebc,	// (0x000aa8db) list_cale_ev_pane

0xcec4,	// (0x000aa8e3) scroll_pane_cp023

0x4a77,	// (0x000a2496) field_cale_ev_pane_ParamLimits

0x4a77,	// (0x000a2496) field_cale_ev_pane

0xced0,	// (0x000aa8ef) field_cale_ev_content_pane_ParamLimits

0xced0,	// (0x000aa8ef) field_cale_ev_content_pane

0xcedc,	// (0x000aa8fb) field_cale_ev_pane_g1_ParamLimits

0xcedc,	// (0x000aa8fb) field_cale_ev_pane_g1

0xcee8,	// (0x000aa907) field_cale_ev_pane_g2_ParamLimits

0xcee8,	// (0x000aa907) field_cale_ev_pane_g2

0xcf00,	// (0x000aa91f) field_cale_ev_pane_g3_ParamLimits

0xcf00,	// (0x000aa91f) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x000ad0fa) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x000ad0fa) field_cale_ev_pane_g

0xcf18,	// (0x000aa937) field_cale_ev_pane_t1_ParamLimits

0xcf18,	// (0x000aa937) field_cale_ev_pane_t1

0x4a9b,	// (0x000a24ba) field_cale_ev_content_pane_t1_ParamLimits

0x4a9b,	// (0x000a24ba) field_cale_ev_content_pane_t1

0xb752,	// (0x000a9171) bg_button_pane_cp01

0x1312,	// (0x0009ed31) listscroll_cale_week_pane_ParamLimits

0xaab0,	// (0x000a84cf) popup_toolbar_window_cp01

0xaab9,	// (0x000a84d8) listscroll_cale_week_pane_t1_ParamLimits

0x1312,	// (0x0009ed31) listscroll_cale_day_pane_ParamLimits

0xaab0,	// (0x000a84cf) popup_toolbar_window_cp02

0xaedf,	// (0x000a88fe) listscroll_cale_day_pane_t1_ParamLimits

0x4085,	// (0x000a1aa4) main_cale_month_pane_ParamLimits

0x41e7,	// (0x000a1c06) popup_toolbar_window_cp03_ParamLimits

0x41e7,	// (0x000a1c06) popup_toolbar_window_cp03

0x3ae0,	// (0x000a14ff) main_image_pane_g2_ParamLimits

0x3ae0,	// (0x000a14ff) main_image_pane_g2

0x3aec,	// (0x000a150b) main_image_pane_g3_ParamLimits

0x3aec,	// (0x000a150b) main_image_pane_g3

0x0002,

0xf4cc,	// (0x000aceeb) main_image_pane_g_ParamLimits

0xf4cc,	// (0x000aceeb) main_image_pane_g

0xb86c,	// (0x000a928b) main_image_pane_t1_ParamLimits

0x3af8,	// (0x000a1517) main_image_pane_t2_ParamLimits

0x3af8,	// (0x000a1517) main_image_pane_t2

0x3b0a,	// (0x000a1529) main_image_pane_t3_ParamLimits

0x3b0a,	// (0x000a1529) main_image_pane_t3

0x3b1c,	// (0x000a153b) main_image_pane_t4_ParamLimits

0x3b1c,	// (0x000a153b) main_image_pane_t4

0x0003,

0xf4d3,	// (0x000acef2) main_image_pane_t_ParamLimits

0xf4d3,	// (0x000acef2) main_image_pane_t

0x3b2e,	// (0x000a154d) popup_image_details_window_cp01

0x3b38,	// (0x000a1557) popup_toobar_trans_pane_cp01_ParamLimits

0x3b38,	// (0x000a1557) popup_toobar_trans_pane_cp01

0x4129,	// (0x000a1b48) popup_image_details_window_ParamLimits

0x4129,	// (0x000a1b48) popup_image_details_window

0x4137,	// (0x000a1b56) popup_image_focus_window

0x445b,	// (0x000a1e7a) camera2_autofocus_pane_ParamLimits

0x445b,	// (0x000a1e7a) camera2_autofocus_pane

0x9d8e,	// (0x000a77ad) bg_popup_sub_pane_cp06

0xcf2f,	// (0x000aa94e) popup_image_focus_window_g1

0xcf37,	// (0x000aa956) popup_image_focus_window_g2

0xcf3f,	// (0x000aa95e) popup_image_focus_window_g3

0xcf47,	// (0x000aa966) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x000ad101) popup_image_focus_window_g

0xcf4f,	// (0x000aa96e) popup_image_focus_window_t1

0xcf5d,	// (0x000aa97c) popup_image_focus_window_t2

0xcf6d,	// (0x000aa98c) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x000ad10a) popup_image_focus_window_t

0xcf7b,	// (0x000aa99a) camera2_autofocus_pane_g1

0xafad,	// (0x000a89cc) bg_tb_trans_pane_cp01

0xcf89,	// (0x000aa9a8) popup_image_details_window_g1

0xcf9c,	// (0x000aa9bb) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x000ad11c) popup_image_details_window_g

0xcfc5,	// (0x000aa9e4) popup_image_details_window_t1

0xcfd7,	// (0x000aa9f6) popup_image_details_window_t2

0xcff0,	// (0x000aaa0f) popup_image_details_window_t3

0xd004,	// (0x000aaa23) popup_image_details_window_t4

0xd01f,	// (0x000aaa3e) popup_image_details_window_t5

0x0004,

0xf704,	// (0x000ad123) popup_image_details_window_t

0xa4ec,	// (0x000a7f0b) bg_calc_paper_pane_ParamLimits

0x0d91,	// (0x0009e7b0) grid_highlight_pane_cp013

0x10b8,	// (0x0009ead7) list_calc_pane_ParamLimits

0x10ca,	// (0x0009eae9) scroll_pane_cp024

0xa500,	// (0x000a7f1f) bg_calc_display_pane_ParamLimits

0x10d2,	// (0x0009eaf1) calc_display_pane_t1_ParamLimits

0x10e7,	// (0x0009eb06) calc_display_pane_t2_ParamLimits

0x10fc,	// (0x0009eb1b) calc_display_pane_t3_ParamLimits

0xf136,	// (0x000acb55) calc_display_pane_t_ParamLimits

0x11cc,	// (0x0009ebeb) cell_calc_pane_g2

0x0001,

0xf153,	// (0x000acb72) cell_calc_pane_g

0x11d5,	// (0x0009ebf4) cell_calc_pane_t1

0xa55f,	// (0x000a7f7e) grid_highlight_pane_cp02_ParamLimits

0xa575,	// (0x000a7f94) toolbar_button_pane_cp01_ParamLimits

0xa575,	// (0x000a7f94) toolbar_button_pane_cp01

0xb8b1,	// (0x000a92d0) temp_image_control_pane_ParamLimits

0xb8b1,	// (0x000a92d0) temp_image_control_pane

0x4097,	// (0x000a1ab6) main_mp3_pane

0xd039,	// (0x000aaa58) temp_image_control_pane_g1_ParamLimits

0xd039,	// (0x000aaa58) temp_image_control_pane_g1

0xd047,	// (0x000aaa66) temp_image_control_pane_g2_ParamLimits

0xd047,	// (0x000aaa66) temp_image_control_pane_g2

0xd059,	// (0x000aaa78) temp_image_control_pane_g3_ParamLimits

0xd059,	// (0x000aaa78) temp_image_control_pane_g3

0x4ae6,	// (0x000a2505) temp_image_control_pane_g4_ParamLimits

0x4ae6,	// (0x000a2505) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x000ad12e) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x000ad12e) temp_image_control_pane_g

0xd039,	// (0x000aaa58) main_mp3_pane_g1

0x4af7,	// (0x000a2516) main_mp3_pane_g2

0x0007,

0xf718,	// (0x000ad137) main_mp3_pane_g

0xd09c,	// (0x000aaabb) main_mp3_pane_t1

0xab4b,	// (0x000a856a) main_camera_pane_g8_ParamLimits

0xab4b,	// (0x000a856a) main_camera_pane_g8

0x1bba,	// (0x0009f5d9) main_video_pane_g7_ParamLimits

0x1bba,	// (0x0009f5d9) main_video_pane_g7

0x459e,	// (0x000a1fbd) main_camera2_pane_t7_ParamLimits

0x459e,	// (0x000a1fbd) main_camera2_pane_t7

0xac97,	// (0x000a86b6) scroll_pane_cp025_ParamLimits

0xac97,	// (0x000a86b6) scroll_pane_cp025

0xacab,	// (0x000a86ca) scroll_pane_cp026_ParamLimits

0xacab,	// (0x000a86ca) scroll_pane_cp026

0xacba,	// (0x000a86d9) wml_content_pane_ParamLimits

0x0d91,	// (0x0009e7b0) main_touch_calib_pane

0x4b9b,	// (0x000a25ba) main_touch_calib_pane_g1

0x4ba7,	// (0x000a25c6) main_touch_calib_pane_g2

0x4bb3,	// (0x000a25d2) main_touch_calib_pane_g3

0x4bbf,	// (0x000a25de) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x000ad155) main_touch_calib_pane_g

0x4bcb,	// (0x000a25ea) main_touch_calib_pane_t1

0x4be2,	// (0x000a2601) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x000ad15e) main_touch_calib_pane_t

0xb462,	// (0x000a8e81) mup_progress_pane_cp02

0xb497,	// (0x000a8eb6) navi_pane_g1

0xb552,	// (0x000a8f71) navi_pane_mp_t3

0x4097,	// (0x000a1ab6) main_mp3_pane_ParamLimits

0x4228,	// (0x000a1c47) navi_pane_ParamLimits

0xd039,	// (0x000aaa58) main_mp3_pane_g1_ParamLimits

0x4af7,	// (0x000a2516) main_mp3_pane_g2_ParamLimits

0x4b03,	// (0x000a2522) main_mp3_pane_g3_ParamLimits

0x4b03,	// (0x000a2522) main_mp3_pane_g3

0x4b0f,	// (0x000a252e) main_mp3_pane_g4_ParamLimits

0x4b0f,	// (0x000a252e) main_mp3_pane_g4

0xd069,	// (0x000aaa88) main_mp3_pane_g5_ParamLimits

0xd069,	// (0x000aaa88) main_mp3_pane_g5

0xd077,	// (0x000aaa96) main_mp3_pane_g6_ParamLimits

0xd077,	// (0x000aaa96) main_mp3_pane_g6

0xd084,	// (0x000aaaa3) main_mp3_pane_g7_ParamLimits

0xd084,	// (0x000aaaa3) main_mp3_pane_g7

0xd090,	// (0x000aaaaf) main_mp3_pane_g8_ParamLimits

0xd090,	// (0x000aaaaf) main_mp3_pane_g8

0xf718,	// (0x000ad137) main_mp3_pane_g_ParamLimits

0x4b1b,	// (0x000a253a) main_mp3_pane_t2

0x4b2b,	// (0x000a254a) main_mp3_pane_t3

0xd0aa,	// (0x000aaac9) main_mp3_pane_t4

0xd0b8,	// (0x000aaad7) main_mp3_pane_t5

0x0005,

0xf729,	// (0x000ad148) main_mp3_pane_t

0xd0c6,	// (0x000aaae5) mup_progress_pane_cp01

0x09de,	// (0x0009e3fd) aid_zoom_text_secondary2

0xcebc,	// (0x000aa8db) list_cale_ev2_pane

0xcec4,	// (0x000aa8e3) scroll_pane_cp023_ParamLimits

0x4c3d,	// (0x000a265c) field_cale_ev2_pane_ParamLimits

0x4c3d,	// (0x000a265c) field_cale_ev2_pane

0x4c58,	// (0x000a2677) field_cale_ev2_pane_g1_ParamLimits

0x4c58,	// (0x000a2677) field_cale_ev2_pane_g1

0x4c64,	// (0x000a2683) field_cale_ev2_pane_g2_ParamLimits

0x4c64,	// (0x000a2683) field_cale_ev2_pane_g2

0x4c7c,	// (0x000a269b) field_cale_ev2_pane_g3_ParamLimits

0x4c7c,	// (0x000a269b) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x000ad169) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x000ad169) field_cale_ev2_pane_g

0x4c94,	// (0x000a26b3) field_cale_ev2_pane_t1_ParamLimits

0x4c94,	// (0x000a26b3) field_cale_ev2_pane_t1

0x4cab,	// (0x000a26ca) field_cale_ev2_pane_t2_ParamLimits

0x4cab,	// (0x000a26ca) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x000ad172) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x000ad172) field_cale_ev2_pane_t

0x39bf,	// (0x000a13de) main_postcard_pane_g5_ParamLimits

0x39bf,	// (0x000a13de) main_postcard_pane_g5

0x39cd,	// (0x000a13ec) main_postcard_pane_g6_ParamLimits

0x39cd,	// (0x000a13ec) main_postcard_pane_g6

0x19f8,	// (0x0009f417) camera2_autofocus_pane_cp_ParamLimits

0x19f8,	// (0x0009f417) camera2_autofocus_pane_cp

0x4097,	// (0x000a1ab6) main_mup3_pane

0x4d03,	// (0x000a2722) main_mup3_pane_g1_ParamLimits

0x4d03,	// (0x000a2722) main_mup3_pane_g1

0x4d24,	// (0x000a2743) main_mup3_pane_g2_ParamLimits

0x4d24,	// (0x000a2743) main_mup3_pane_g2

0x4d98,	// (0x000a27b7) main_mup3_pane_g3_ParamLimits

0x4d98,	// (0x000a27b7) main_mup3_pane_g3

0x4dfd,	// (0x000a281c) main_mup3_pane_g4_ParamLimits

0x4dfd,	// (0x000a281c) main_mup3_pane_g4

0x4e62,	// (0x000a2881) main_mup3_pane_g5_ParamLimits

0x4e62,	// (0x000a2881) main_mup3_pane_g5

0x4ec7,	// (0x000a28e6) main_mup3_pane_g6_ParamLimits

0x4ec7,	// (0x000a28e6) main_mup3_pane_g6

0xd0ce,	// (0x000aaaed) main_mup3_pane_g7_ParamLimits

0xd0ce,	// (0x000aaaed) main_mup3_pane_g7

0x0007,

0xf763,	// (0x000ad182) main_mup3_pane_g_ParamLimits

0xf763,	// (0x000ad182) main_mup3_pane_g

0x4f3d,	// (0x000a295c) main_mup3_pane_t1_ParamLimits

0x4f3d,	// (0x000a295c) main_mup3_pane_t1

0x4fa8,	// (0x000a29c7) main_mup3_pane_t2_ParamLimits

0x4fa8,	// (0x000a29c7) main_mup3_pane_t2

0x506d,	// (0x000a2a8c) main_mup3_pane_t4_ParamLimits

0x506d,	// (0x000a2a8c) main_mup3_pane_t4

0x50c1,	// (0x000a2ae0) main_mup3_pane_t5_ParamLimits

0x50c1,	// (0x000a2ae0) main_mup3_pane_t5

0x5171,	// (0x000a2b90) main_mup3_pane_t6_ParamLimits

0x5171,	// (0x000a2b90) main_mup3_pane_t6

0x0005,

0xf774,	// (0x000ad193) main_mup3_pane_t_ParamLimits

0xf774,	// (0x000ad193) main_mup3_pane_t

0x521b,	// (0x000a2c3a) mup3_progress_pane_ParamLimits

0x521b,	// (0x000a2c3a) mup3_progress_pane

0x5299,	// (0x000a2cb8) popup_mup3_control_window_ParamLimits

0x5299,	// (0x000a2cb8) popup_mup3_control_window

0xd0dc,	// (0x000aaafb) popup_mup3_text_window

0x52b6,	// (0x000a2cd5) mup3_progress_pane_t1

0x52d5,	// (0x000a2cf4) mup3_progress_pane_t2

0xd0e4,	// (0x000aab03) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x000ad1a0) mup3_progress_pane_t

0xd101,	// (0x000aab20) mup_progress_pane_cp03

0x9d8e,	// (0x000a77ad) bg_tb_trans_pane_cp04

0x52f4,	// (0x000a2d13) mup3_volume_pane

0x52fc,	// (0x000a2d1b) popup_mup3_control_window_g1

0xd2a2,	// (0x000aacc1) mup3_volume_pane_g1

0xd2ab,	// (0x000aacca) mup3_volume_pane_g2

0xd2b4,	// (0x000aacd3) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x000ad1a7) mup3_volume_pane_g

0x9d8e,	// (0x000a77ad) bg_tb_trans_pane_cp03

0xd111,	// (0x000aab30) popup_mup3_text_window_g1

0xd119,	// (0x000aab38) popup_mup3_text_window_t1

0xa548,	// (0x000a7f67) list_calc_item_pane_g1_ParamLimits

0xcb8f,	// (0x000aa5ae) mup_volume_pane_cp_g1

0x4bfb,	// (0x000a261a) main_touch_calib_pane_t3

0x4c11,	// (0x000a2630) main_touch_calib_pane_t4

0x4c27,	// (0x000a2646) main_touch_calib_pane_t5

0x0ac6,	// (0x0009e4e5) aid_cell_size_toolbar2

0x0ace,	// (0x0009e4ed) aid_popup3_width_pane

0x09ce,	// (0x0009e3ed) aid_zoom_text_msg_primary

0x19cb,	// (0x0009f3ea) vorec_t7

0xa50c,	// (0x000a7f2b) bg_calc_paper_pane_g1_ParamLimits

0xa518,	// (0x000a7f37) bg_calc_paper_pane_g2_ParamLimits

0xa524,	// (0x000a7f43) bg_calc_paper_pane_g3_ParamLimits

0xa530,	// (0x000a7f4f) bg_calc_paper_pane_g4_ParamLimits

0xa53c,	// (0x000a7f5b) bg_calc_paper_pane_g5_ParamLimits

0x113d,	// (0x0009eb5c) bg_calc_paper_pane_g6_ParamLimits

0x114e,	// (0x0009eb6d) bg_calc_paper_pane_g7_ParamLimits

0x115f,	// (0x0009eb7e) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x000acb5c) bg_calc_paper_pane_g_ParamLimits

0x1170,	// (0x0009eb8f) calc_bg_paper_pane_g9_ParamLimits

0x1ae9,	// (0x0009f508) image_qvga_pane_ParamLimits

0x1ae9,	// (0x0009f508) image_qvga_pane

0xa43b,	// (0x000a7e5a) bg_popup_sub_pane_cp04_ParamLimits

0xb7e8,	// (0x000a9207) popup_mup_playback_window_g1_ParamLimits

0xb7f4,	// (0x000a9213) popup_mup_playback_window_t1_ParamLimits

0xb809,	// (0x000a9228) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x000acee6) popup_mup_playback_window_t_ParamLimits

0x46cd,	// (0x000a20ec) main_mup2_pane_g3_ParamLimits

0x46cd,	// (0x000a20ec) main_mup2_pane_g3

0x1e8c,	// (0x0009f8ab) popup_toolbar_window_cp04

0xbc04,	// (0x000a9623) popup_call2_audio_second_window_g3_ParamLimits

0xbc04,	// (0x000a9623) popup_call2_audio_second_window_g3

0xc00e,	// (0x000a9a2d) popup_call2_audio_first_window_g4_ParamLimits

0xc00e,	// (0x000a9a2d) popup_call2_audio_first_window_g4

0xc68d,	// (0x000aa0ac) popup_call2_audio_in_window_g4_ParamLimits

0xc68d,	// (0x000aa0ac) popup_call2_audio_in_window_g4

0x3ad3,	// (0x000a14f2) aid_area_sk_bg_cut_ParamLimits

0x3ad3,	// (0x000a14f2) aid_area_sk_bg_cut

0xb81e,	// (0x000a923d) aid_area_sk_bg_cut_2_ParamLimits

0xb81e,	// (0x000a923d) aid_area_sk_bg_cut_2

0x4a4d,	// (0x000a246c) aid_placing_details_win

0x4a55,	// (0x000a2474) aid_placing_details_win_2

0xcf7b,	// (0x000aa99a) camera2_autofocus_pane_g1_ParamLimits

0x0d1d,	// (0x0009e73c) popup_fixed_preview_cale_window_ParamLimits

0x0d1d,	// (0x0009e73c) popup_fixed_preview_cale_window

0xb5f8,	// (0x000a9017) navi_slider_pane_g3

0xb601,	// (0x000a9020) navi_slider_pane_g4

0xb60a,	// (0x000a9029) navi_slider_pane_g5

0xb5f8,	// (0x000a9017) navi_slider_pane_g6

0x3379,	// (0x000a0d98) navi_slider_pane_g7

0xb71f,	// (0x000a913e) mup_scale_pane_g3

0xb728,	// (0x000a9147) mup_scale_pane_g4

0xb731,	// (0x000a9150) mup_scale_pane_g5

0x37f4,	// (0x000a1213) mup_scale_pane_g6

0x37fd,	// (0x000a121c) mup_scale_pane_g7

0xb5f8,	// (0x000a9017) cams2_slider_pane_g3

0xcc11,	// (0x000aa630) cams2_slider_pane_g4

0x49a8,	// (0x000a23c7) cams2_slider_pane_g5

0xb5f8,	// (0x000a9017) cams2_slider_pane_g6

0x49b0,	// (0x000a23cf) cams2_slider_pane_g7

0xce42,	// (0x000aa861) camera2_autofocus_pane_cp_g1

0xc9fe,	// (0x000aa41d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc9fe,	// (0x000aa41d) bg_popup_preview_window_pane_cp02

0xd127,	// (0x000aab46) list_fp_cale_pane_ParamLimits

0xd127,	// (0x000aab46) list_fp_cale_pane

0xd133,	// (0x000aab52) popup_fixed_preview_cale_window_t1_ParamLimits

0xd133,	// (0x000aab52) popup_fixed_preview_cale_window_t1

0x5305,	// (0x000a2d24) popup_fixed_preview_cale_window_t2_ParamLimits

0x5305,	// (0x000a2d24) popup_fixed_preview_cale_window_t2

0x531a,	// (0x000a2d39) popup_fixed_preview_cale_window_t3_ParamLimits

0x531a,	// (0x000a2d39) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x000ad1ae) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x000ad1ae) popup_fixed_preview_cale_window_t

0x532f,	// (0x000a2d4e) list_single_fp_cale_pane_ParamLimits

0x532f,	// (0x000a2d4e) list_single_fp_cale_pane

0xd151,	// (0x000aab70) list_single_fp_cale_pane_g1_ParamLimits

0xd151,	// (0x000aab70) list_single_fp_cale_pane_g1

0xd15d,	// (0x000aab7c) list_single_fp_cale_pane_g2_ParamLimits

0xd15d,	// (0x000aab7c) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x000ad1b5) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x000ad1b5) list_single_fp_cale_pane_g

0xd176,	// (0x000aab95) list_single_fp_cale_pane_t1_ParamLimits

0xd176,	// (0x000aab95) list_single_fp_cale_pane_t1

0xd188,	// (0x000aaba7) list_single_fp_cale_pane_t2_ParamLimits

0xd188,	// (0x000aaba7) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x000ad1bc) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x000ad1bc) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0d91,	// (0x0009e7b0) main_dialer_pane

0x533f,	// (0x000a2d5e) aid_cell_size_keypad

0x5349,	// (0x000a2d68) dialer_ne_pane

0x5353,	// (0x000a2d72) grid_dialer_command_1_pane

0x535b,	// (0x000a2d7a) grid_dialer_command_2_pane

0x5363,	// (0x000a2d82) grid_dialer_keypad_pane

0x5377,	// (0x000a2d96) bg_popup_call_pane_cp06_ParamLimits

0x5377,	// (0x000a2d96) bg_popup_call_pane_cp06

0x5383,	// (0x000a2da2) dialer_ne_clear_pane_ParamLimits

0x5383,	// (0x000a2da2) dialer_ne_clear_pane

0xd1bb,	// (0x000aabda) dialer_ne_pane_g1

0xd1c3,	// (0x000aabe2) dialer_ne_pane_t1_ParamLimits

0xd1c3,	// (0x000aabe2) dialer_ne_pane_t1

0x538f,	// (0x000a2dae) dialer_ne_pane_t2_ParamLimits

0x538f,	// (0x000a2dae) dialer_ne_pane_t2

0x53ac,	// (0x000a2dcb) dialer_ne_pane_t3_ParamLimits

0x53ac,	// (0x000a2dcb) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x000ad1c1) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x000ad1c1) dialer_ne_pane_t

0x53d0,	// (0x000a2def) dialer_ne_pane_t3_copy1_ParamLimits

0x53d0,	// (0x000a2def) dialer_ne_pane_t3_copy1

0x53f4,	// (0x000a2e13) cell_dialer_keypad_pane_ParamLimits

0x53f4,	// (0x000a2e13) cell_dialer_keypad_pane

0x540b,	// (0x000a2e2a) cell_dialer_command_1_pane_ParamLimits

0x540b,	// (0x000a2e2a) cell_dialer_command_1_pane

0x5421,	// (0x000a2e40) cell_dialer_command_2_pane_ParamLimits

0x5421,	// (0x000a2e40) cell_dialer_command_2_pane

0xd1d5,	// (0x000aabf4) bg_button_pane_cp02_ParamLimits

0xd1d5,	// (0x000aabf4) bg_button_pane_cp02

0x5430,	// (0x000a2e4f) cell_dialer_keypad_pane_g1_ParamLimits

0x5430,	// (0x000a2e4f) cell_dialer_keypad_pane_g1

0xd1d5,	// (0x000aabf4) bg_button_pane_cp03_ParamLimits

0xd1d5,	// (0x000aabf4) bg_button_pane_cp03

0x5445,	// (0x000a2e64) cell_dialer_command_1_pane_g1_ParamLimits

0x5445,	// (0x000a2e64) cell_dialer_command_1_pane_g1

0xd1e1,	// (0x000aac00) bg_button_pane_cp04

0x5459,	// (0x000a2e78) cell_dialer_command_2_pane_g1

0xab43,	// (0x000a8562) bg_button_pane_cp06

0xd1e9,	// (0x000aac08) dialer_ne_clear_pane_g1

0xb4a3,	// (0x000a8ec2) navi_pane_g2

0xb4d1,	// (0x000a8ef0) navi_pane_g3

0x0002,

0xf3ca,	// (0x000acde9) navi_pane_g

0xb560,	// (0x000a8f7f) navi_pane_mv_g2

0xb5af,	// (0x000a8fce) navi_pane_mv_g5

0x3344,	// (0x000a0d63) navi_pane_mv_t1

0xa500,	// (0x000a7f1f) main_clock2_pane

0xd2bd,	// (0x000aacdc) main_clock2_list_pane_ParamLimits

0xd2bd,	// (0x000aacdc) main_clock2_list_pane

0x54b4,	// (0x000a2ed3) main_clock2_pane_t1_ParamLimits

0x54b4,	// (0x000a2ed3) main_clock2_pane_t1

0x54e2,	// (0x000a2f01) main_clock2_pane_t2_ParamLimits

0x54e2,	// (0x000a2f01) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x000ad1cd) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x000ad1cd) main_clock2_pane_t

0x5547,	// (0x000a2f66) popup_clock_analogue_window_cp03_ParamLimits

0x5547,	// (0x000a2f66) popup_clock_analogue_window_cp03

0x5565,	// (0x000a2f84) popup_clock_digital_window_cp02_ParamLimits

0x5565,	// (0x000a2f84) popup_clock_digital_window_cp02

0x55da,	// (0x000a2ff9) main_clock2_list_single_pane_ParamLimits

0x55da,	// (0x000a2ff9) main_clock2_list_single_pane

0xab43,	// (0x000a8562) list_highlight_pane_cp05

0xd221,	// (0x000aac40) main_clock2_list_single_pane_t1

0x1e8c,	// (0x0009f8ab) popup_toolbar_window_cp04_ParamLimits

0x4ab6,	// (0x000a24d5) camera2_autofocus_pane_g2_ParamLimits

0x4ab6,	// (0x000a24d5) camera2_autofocus_pane_g2

0x4ac2,	// (0x000a24e1) camera2_autofocus_pane_g3_ParamLimits

0x4ac2,	// (0x000a24e1) camera2_autofocus_pane_g3

0x4ace,	// (0x000a24ed) camera2_autofocus_pane_g4_ParamLimits

0x4ace,	// (0x000a24ed) camera2_autofocus_pane_g4

0x4ada,	// (0x000a24f9) camera2_autofocus_pane_g5_ParamLimits

0x4ada,	// (0x000a24f9) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x000ad111) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x000ad111) camera2_autofocus_pane_g

0x4cc0,	// (0x000a26df) camera2_autofocus_pane_cp_g2

0x4cc8,	// (0x000a26e7) camera2_autofocus_pane_cp_g3

0x4cd0,	// (0x000a26ef) camera2_autofocus_pane_cp_g4

0x4cd8,	// (0x000a26f7) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x000ad177) camera2_autofocus_pane_cp_g

0x536f,	// (0x000a2d8e) popup_dialer_spcha_window

0x9d8e,	// (0x000a77ad) bg_popup_sub_pane_cp07

0xd22f,	// (0x000aac4e) list_spcha_pane

0xd237,	// (0x000aac56) list_single_spcha_pane_ParamLimits

0xd237,	// (0x000aac56) list_single_spcha_pane

0x9d8e,	// (0x000a77ad) list_highlight_pane_cp06

0xd248,	// (0x000aac67) list_single_spcha_pane_t1

0xc437,	// (0x000a9e56) popup_call2_audio_out_window_g4_ParamLimits

0xc437,	// (0x000a9e56) popup_call2_audio_out_window_g4

0x0d91,	// (0x0009e7b0) main_imed2_pane

0x4141,	// (0x000a1b60) popup_imed_adjust2_window

0x4154,	// (0x000a1b73) popup_imed_trans_window_ParamLimits

0x4154,	// (0x000a1b73) popup_imed_trans_window

0xcc7a,	// (0x000aa699) popup_blid_sat_info2_window_t1

0xcc88,	// (0x000aa6a7) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x000ad0a6) popup_blid_sat_info2_window_t

0x5691,	// (0x000a30b0) aid_size_cell_colour_35

0x56ab,	// (0x000a30ca) aid_size_cell_colour_112

0x56c2,	// (0x000a30e1) aid_size_cell_effect

0xafad,	// (0x000a89cc) bg_tb_trans_pane_cp02

0xb581,	// (0x000a8fa0) heading_imed_pane

0x56dc,	// (0x000a30fb) listscroll_imed_pane

0xd256,	// (0x000aac75) heading_imed_pane_g1

0xd25e,	// (0x000aac7d) heading_imed_pane_t1

0xd26c,	// (0x000aac8b) grid_imed_colour_35_pane_ParamLimits

0xd26c,	// (0x000aac8b) grid_imed_colour_35_pane

0x56e8,	// (0x000a3107) grid_imed_effect_pane

0xd2cb,	// (0x000aacea) list_imed_aspect_pane

0x56f8,	// (0x000a3117) scroll_pane_cp027_ParamLimits

0x56f8,	// (0x000a3117) scroll_pane_cp027

0x5704,	// (0x000a3123) cell_imed_effect_pane_ParamLimits

0x5704,	// (0x000a3123) cell_imed_effect_pane

0xd2d3,	// (0x000aacf2) cell_imed_colour_pane_ParamLimits

0xd2d3,	// (0x000aacf2) cell_imed_colour_pane

0xd31d,	// (0x000aad3c) cell_imed_colour_pane_g1_ParamLimits

0xd31d,	// (0x000aad3c) cell_imed_colour_pane_g1

0xd32e,	// (0x000aad4d) hgihlgiht_grid_pane_cp016_ParamLimits

0xd32e,	// (0x000aad4d) hgihlgiht_grid_pane_cp016

0x5720,	// (0x000a313f) cell_imed_effect_pane_g1

0x5728,	// (0x000a3147) grid_highlight_pane_cp017

0xd33f,	// (0x000aad5e) list_imed_single_pane_ParamLimits

0xd33f,	// (0x000aad5e) list_imed_single_pane

0x9d8e,	// (0x000a77ad) list_highlight_pane_cp07

0xd353,	// (0x000aad72) list_imed_aspect_pane_comp1_t1

0xca0a,	// (0x000aa429) bg_tb_trans_pane_cp05

0xd375,	// (0x000aad94) popup_imed_adjust2_window_g1

0xd39c,	// (0x000aadbb) popup_imed_adjust2_window_t1

0xd3b4,	// (0x000aadd3) slider_imed_adjust_pane

0xd3c8,	// (0x000aade7) slider_imed_adjust_pane_g1

0xd3d8,	// (0x000aadf7) slider_imed_adjust_pane_g2

0xd3e8,	// (0x000aae07) slider_imed_adjust_pane_g3

0xd3f9,	// (0x000aae18) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x000ad1ea) slider_imed_adjust_pane_g

0x5731,	// (0x000a3150) aid_size_cell_clipart2

0xd40a,	// (0x000aae29) grid_imed_clipart_pane

0xd414,	// (0x000aae33) scroll_pane_cp031

0x573d,	// (0x000a315c) cell_imed_clipart_pane_ParamLimits

0x573d,	// (0x000a315c) cell_imed_clipart_pane

0x575b,	// (0x000a317a) cell_imed_clipart_pane_g1

0x9d8e,	// (0x000a77ad) grid_highlight_pane_cp014

0x5496,	// (0x000a2eb5) main_clock2_pane_g1_ParamLimits

0x5496,	// (0x000a2eb5) main_clock2_pane_g1

0x5581,	// (0x000a2fa0) aid_call2_pane_cp10

0x5593,	// (0x000a2fb2) aid_call_pane_cp10

0xb402,	// (0x000a8e21) popup_clock_analogue_window_cp10_g1

0xb402,	// (0x000a8e21) popup_clock_analogue_window_cp10_g2

0x55a5,	// (0x000a2fc4) popup_clock_analogue_window_cp10_g3

0x55a5,	// (0x000a2fc4) popup_clock_analogue_window_cp10_g4

0xb402,	// (0x000a8e21) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x000ad1d8) popup_clock_analogue_window_cp10_g

0x55bb,	// (0x000a2fda) popup_clock_analogue_window_cp10_t1

0x55ec,	// (0x000a300b) clock_digital_number_pane_cp10_ParamLimits

0x55ec,	// (0x000a300b) clock_digital_number_pane_cp10

0x5606,	// (0x000a3025) clock_digital_number_pane_cp11_ParamLimits

0x5606,	// (0x000a3025) clock_digital_number_pane_cp11

0x5620,	// (0x000a303f) clock_digital_number_pane_cp12_ParamLimits

0x5620,	// (0x000a303f) clock_digital_number_pane_cp12

0x563a,	// (0x000a3059) clock_digital_number_pane_cp13_ParamLimits

0x563a,	// (0x000a3059) clock_digital_number_pane_cp13

0x5656,	// (0x000a3075) clock_digital_separator_pane_cp10_ParamLimits

0x5656,	// (0x000a3075) clock_digital_separator_pane_cp10

0x5670,	// (0x000a308f) popup_clock_digital_window_cp02_t1_ParamLimits

0x5670,	// (0x000a308f) popup_clock_digital_window_cp02_t1

0xa433,	// (0x000a7e52) clock_digital_number_pane_cp10_g1

0xa433,	// (0x000a7e52) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x000ad1f3) clock_digital_number_pane_cp10_g

0xa433,	// (0x000a7e52) clock_digital_separator_pane_cp10_g1

0xa433,	// (0x000a7e52) clock_digital_separator_pane_g2_cp10

0xb5b7,	// (0x000a8fd6) navi_pane_vded_g4

0xb5c0,	// (0x000a8fdf) navi_pane_vded_g5

0xb5c9,	// (0x000a8fe8) navi_pane_vded_t1

0x0d91,	// (0x0009e7b0) main_vded_pane

0x5764,	// (0x000a3183) main_vded_pane_g1

0x5770,	// (0x000a318f) main_vded_pane_g2

0x577a,	// (0x000a3199) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x000ad1f8) main_vded_pane_g

0x5784,	// (0x000a31a3) main_vded_pane_t1

0x5792,	// (0x000a31b1) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x000ad1ff) main_vded_pane_t

0x57a0,	// (0x000a31bf) vded_slider_pane

0x57aa,	// (0x000a31c9) vded_video_pane

0xd41c,	// (0x000aae3b) vded_video_pane_g1

0x57b6,	// (0x000a31d5) vded_video_pane_g2

0xce42,	// (0x000aa861) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x000ad204) vded_video_pane_g

0xd426,	// (0x000aae45) vded_slider_pane_g1

0xcb8f,	// (0x000aa5ae) vded_slider_pane_g2

0xd42f,	// (0x000aae4e) vded_slider_pane_g3

0xd438,	// (0x000aae57) vded_slider_pane_g4

0xd441,	// (0x000aae60) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x000ad20b) vded_slider_pane_g

0x528d,	// (0x000a2cac) mup3_rocker_pane_ParamLimits

0x528d,	// (0x000a2cac) mup3_rocker_pane

0x57bf,	// (0x000a31de) mup3_control_keys_pane_g1

0x57c7,	// (0x000a31e6) mup3_control_keys_pane_g2

0x57cf,	// (0x000a31ee) mup3_control_keys_pane_g3

0x57d7,	// (0x000a31f6) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x000ad216) mup3_control_keys_pane_g

0x0d45,	// (0x0009e764) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0d45,	// (0x0009e764) popup_toolbar2_fixed_window_cp01

0x52a9,	// (0x000a2cc8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x52a9,	// (0x000a2cc8) popup_toolbar2_fixed_window_cp02

0xbd76,	// (0x000a9795) popup_call2_audio_second_window_t4_ParamLimits

0xbd76,	// (0x000a9795) popup_call2_audio_second_window_t4

0xc2a4,	// (0x000a9cc3) popup_call2_audio_first_window_t6_ParamLimits

0xc2a4,	// (0x000a9cc3) popup_call2_audio_first_window_t6

0xc53a,	// (0x000a9f59) popup_call2_audio_out_window_t6_ParamLimits

0xc53a,	// (0x000a9f59) popup_call2_audio_out_window_t6

0x0d91,	// (0x0009e7b0) main_vitu_pane

0x57e7,	// (0x000a3206) aid_size_cell_itu_ParamLimits

0x57e7,	// (0x000a3206) aid_size_cell_itu

0xd2bd,	// (0x000aacdc) bg_popup_window_pane_cp08_ParamLimits

0xd2bd,	// (0x000aacdc) bg_popup_window_pane_cp08

0x57f5,	// (0x000a3214) field_vitu_entry_pane_ParamLimits

0x57f5,	// (0x000a3214) field_vitu_entry_pane

0x5804,	// (0x000a3223) grid_vitu_function_pane_ParamLimits

0x5804,	// (0x000a3223) grid_vitu_function_pane

0x5814,	// (0x000a3233) grid_vitu_itu_pane_ParamLimits

0x5814,	// (0x000a3233) grid_vitu_itu_pane

0x5824,	// (0x000a3243) cell_vitu_itu_pane_ParamLimits

0x5824,	// (0x000a3243) cell_vitu_itu_pane

0x583b,	// (0x000a325a) cell_vitu_function_pane_ParamLimits

0x583b,	// (0x000a325a) cell_vitu_function_pane

0xafad,	// (0x000a89cc) bg_popup_sub_pane_cp08_ParamLimits

0xafad,	// (0x000a89cc) bg_popup_sub_pane_cp08

0x584f,	// (0x000a326e) field_vitu_entry_pane_t1_ParamLimits

0x584f,	// (0x000a326e) field_vitu_entry_pane_t1

0xd462,	// (0x000aae81) field_vitu_entry_pane_t2_ParamLimits

0xd462,	// (0x000aae81) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x000ad224) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x000ad224) field_vitu_entry_pane_t

0xd47f,	// (0x000aae9e) bg_button_pane_cp05_ParamLimits

0xd47f,	// (0x000aae9e) bg_button_pane_cp05

0x5869,	// (0x000a3288) cell_vitu_itu_pane_g1

0x5881,	// (0x000a32a0) cell_vitu_itu_pane_t1_ParamLimits

0x5881,	// (0x000a32a0) cell_vitu_itu_pane_t1

0x5893,	// (0x000a32b2) cell_vitu_itu_pane_t2_ParamLimits

0x5893,	// (0x000a32b2) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x000ad229) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x000ad229) cell_vitu_itu_pane_t

0xd48d,	// (0x000aaeac) bg_button_pane_cp07

0x58d6,	// (0x000a32f5) cell_vitu_function_pane_g1

0x0fdf,	// (0x0009e9fe) main_calc_pane_g1

0x0b02,	// (0x0009e521) aid_visual_content_pane

0x0d91,	// (0x0009e7b0) main_vradio_pane

0x58df,	// (0x000a32fe) main_vradio_pane_g1_ParamLimits

0x58df,	// (0x000a32fe) main_vradio_pane_g1

0xd497,	// (0x000aaeb6) main_vradio_pane_g2_ParamLimits

0xd497,	// (0x000aaeb6) main_vradio_pane_g2

0x0001,

0xf811,	// (0x000ad230) main_vradio_pane_g_ParamLimits

0xf811,	// (0x000ad230) main_vradio_pane_g

0x58ed,	// (0x000a330c) main_vradio_pane_t1_ParamLimits

0x58ed,	// (0x000a330c) main_vradio_pane_t1

0x58ff,	// (0x000a331e) main_vradio_pane_t2_ParamLimits

0x58ff,	// (0x000a331e) main_vradio_pane_t2

0xd4a4,	// (0x000aaec3) main_vradio_pane_t3_ParamLimits

0xd4a4,	// (0x000aaec3) main_vradio_pane_t3

0x0002,

0xf816,	// (0x000ad235) main_vradio_pane_t_ParamLimits

0xf816,	// (0x000ad235) main_vradio_pane_t

0x5911,	// (0x000a3330) vradio_rocker_control_pane_ParamLimits

0x5911,	// (0x000a3330) vradio_rocker_control_pane

0x591d,	// (0x000a333c) vradio_station_info_pane_ParamLimits

0x591d,	// (0x000a333c) vradio_station_info_pane

0xd4b8,	// (0x000aaed7) vradio_frequency_info_pane_ParamLimits

0xd4b8,	// (0x000aaed7) vradio_frequency_info_pane

0xce42,	// (0x000aa861) vradio_station_info_pane_g1

0xd4c7,	// (0x000aaee6) vradio_station_info_pane_t1_ParamLimits

0xd4c7,	// (0x000aaee6) vradio_station_info_pane_t1

0xd4e9,	// (0x000aaf08) vradio_station_info_pane_t2_ParamLimits

0xd4e9,	// (0x000aaf08) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x000ad23c) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x000ad23c) vradio_station_info_pane_t

0xd4fb,	// (0x000aaf1a) vradio_tuning_pane

0xd503,	// (0x000aaf22) vradio_rocker_control_pane_g1

0xd50b,	// (0x000aaf2a) vradio_rocker_control_pane_g2

0xd513,	// (0x000aaf32) vradio_rocker_control_pane_g3

0xd51b,	// (0x000aaf3a) vradio_rocker_control_pane_g4

0xd523,	// (0x000aaf42) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x000ad241) vradio_rocker_control_pane_g

0x592a,	// (0x000a3349) vradio_frequency_info_pane_g1

0xd52b,	// (0x000aaf4a) vradio_frequency_info_pane_t1_ParamLimits

0xd52b,	// (0x000aaf4a) vradio_frequency_info_pane_t1

0x5934,	// (0x000a3353) vradio_tuning_pane_g1

0x593f,	// (0x000a335e) vradio_tuning_pane_t1

0x0b43,	// (0x0009e562) area_side_right_pane_ParamLimits

0x0b43,	// (0x0009e562) area_side_right_pane

0xc9c5,	// (0x000aa3e4) status_small_pane_g1

0xc9cd,	// (0x000aa3ec) status_small_pane_g2

0xc9d6,	// (0x000aa3f5) status_small_pane_g3

0xc9df,	// (0x000aa3fe) status_small_pane_g4

0x0003,

0xf5dd,	// (0x000acffc) status_small_pane_g

0xc9e8,	// (0x000aa407) status_small_pane_t1

0x0d91,	// (0x0009e7b0) main_video3_pane

0xd53f,	// (0x000aaf5e) cams_zoom_vslider_pane

0xd547,	// (0x000aaf66) image3_wide_pane_ParamLimits

0xd547,	// (0x000aaf66) image3_wide_pane

0xd561,	// (0x000aaf80) image3_wide_small_pane

0xd56d,	// (0x000aaf8c) main_video3_pane_g1_ParamLimits

0xd56d,	// (0x000aaf8c) main_video3_pane_g1

0xd589,	// (0x000aafa8) main_video3_pane_g2_ParamLimits

0xd589,	// (0x000aafa8) main_video3_pane_g2

0x0001,

0xf82d,	// (0x000ad24c) main_video3_pane_g_ParamLimits

0xf82d,	// (0x000ad24c) main_video3_pane_g

0xd5a5,	// (0x000aafc4) main_video3_pane_t1_ParamLimits

0xd5a5,	// (0x000aafc4) main_video3_pane_t1

0xd5d0,	// (0x000aafef) main_video3_pane_t2_ParamLimits

0xd5d0,	// (0x000aafef) main_video3_pane_t2

0xd5fd,	// (0x000ab01c) main_video3_pane_t3_ParamLimits

0xd5fd,	// (0x000ab01c) main_video3_pane_t3

0x0002,

0xf832,	// (0x000ad251) main_video3_pane_t_ParamLimits

0xf832,	// (0x000ad251) main_video3_pane_t

0xd62a,	// (0x000ab049) cams_zoom_vslider_pane_g1

0xd633,	// (0x000ab052) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x000ad258) cams_zoom_vslider_pane_g

0xd63b,	// (0x000ab05a) small_slider_vertical_pane

0xce42,	// (0x000aa861) small_slider_vertical_pane_g1

0xce42,	// (0x000aa861) small_slider_vertical_pane_g2

0xd643,	// (0x000ab062) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x000ad25d) small_slider_vertical_pane_g

0x0d91,	// (0x0009e7b0) main_hwr_training_pane

0xd64c,	// (0x000ab06b) hwr_training_instruct_pane_ParamLimits

0xd64c,	// (0x000ab06b) hwr_training_instruct_pane

0x594e,	// (0x000a336d) hwr_training_navi_pane_ParamLimits

0x594e,	// (0x000a336d) hwr_training_navi_pane

0x5968,	// (0x000a3387) hwr_training_write_pane_ParamLimits

0x5968,	// (0x000a3387) hwr_training_write_pane

0x9d8e,	// (0x000a77ad) bg_frame_shadow_pane

0xd683,	// (0x000ab0a2) hwr_training_write_pane_g1

0xd68b,	// (0x000ab0aa) hwr_training_write_pane_g2

0xd693,	// (0x000ab0b2) hwr_training_write_pane_g3

0xd69b,	// (0x000ab0ba) hwr_training_write_pane_g4

0xd6a3,	// (0x000ab0c2) hwr_training_write_pane_g5

0xd6ab,	// (0x000ab0ca) hwr_training_write_pane_g6

0xd6b3,	// (0x000ab0d2) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x000ad264) hwr_training_write_pane_g

0x59a0,	// (0x000a33bf) hwr_training_navi_pane_g1_ParamLimits

0x59a0,	// (0x000a33bf) hwr_training_navi_pane_g1

0x59b2,	// (0x000a33d1) hwr_training_navi_pane_g2_ParamLimits

0x59b2,	// (0x000a33d1) hwr_training_navi_pane_g2

0x59c4,	// (0x000a33e3) hwr_training_navi_pane_g3_ParamLimits

0x59c4,	// (0x000a33e3) hwr_training_navi_pane_g3

0x59d4,	// (0x000a33f3) hwr_training_navi_pane_g4_ParamLimits

0x59d4,	// (0x000a33f3) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x000ad273) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x000ad273) hwr_training_navi_pane_g

0x59ee,	// (0x000a340d) hwr_training_navi_pane_t1

0x59fc,	// (0x000a341b) list_single_hwr_training_instruct_pane_ParamLimits

0x59fc,	// (0x000a341b) list_single_hwr_training_instruct_pane

0xd6bb,	// (0x000ab0da) list_single_hwr_training_instruct_pane_t1

0xcd82,	// (0x000aa7a1) bg_frame_shadow_pane_g1

0xd6ca,	// (0x000ab0e9) bg_frame_shadow_pane_g2

0xd6d2,	// (0x000ab0f1) bg_frame_shadow_pane_g3

0xd6da,	// (0x000ab0f9) bg_frame_shadow_pane_g4

0xd6e2,	// (0x000ab101) bg_frame_shadow_pane_g5

0xd6ea,	// (0x000ab109) bg_frame_shadow_pane_g6

0xd6f2,	// (0x000ab111) bg_frame_shadow_pane_g7

0xaa54,	// (0x000a8473) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x000ad27e) bg_frame_shadow_pane_g

0x0d91,	// (0x0009e7b0) main_video_tele_dialer_pane

0x5a15,	// (0x000a3434) aid_size_cell_video_keypad_ParamLimits

0x5a15,	// (0x000a3434) aid_size_cell_video_keypad

0x5a25,	// (0x000a3444) grid_video_dialer_keypad_pane_ParamLimits

0x5a25,	// (0x000a3444) grid_video_dialer_keypad_pane

0x5a57,	// (0x000a3476) video_down_pane_cp_ParamLimits

0x5a57,	// (0x000a3476) video_down_pane_cp

0x5a81,	// (0x000a34a0) cell_video_dialer_keypad_pane_ParamLimits

0x5a81,	// (0x000a34a0) cell_video_dialer_keypad_pane

0xd6fa,	// (0x000ab119) bg_button_pane_cp08_ParamLimits

0xd6fa,	// (0x000ab119) bg_button_pane_cp08

0x5a98,	// (0x000a34b7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5a98,	// (0x000a34b7) cell_video_dialer_keypad_pane_g1

0x5281,	// (0x000a2ca0) mup3_rocker2_pane_ParamLimits

0x5281,	// (0x000a2ca0) mup3_rocker2_pane

0xce42,	// (0x000aa861) mup3_rocker2_pane_g1

0x40a5,	// (0x000a1ac4) main_dialer2_pane

0x0d91,	// (0x0009e7b0) main_mp4_pane

0x5af1,	// (0x000a3510) main_mp4_pane_g1_ParamLimits

0x5af1,	// (0x000a3510) main_mp4_pane_g1

0x5aff,	// (0x000a351e) main_mp4_pane_g2_ParamLimits

0x5aff,	// (0x000a351e) main_mp4_pane_g2

0x5b0d,	// (0x000a352c) main_mp4_pane_g3_ParamLimits

0x5b0d,	// (0x000a352c) main_mp4_pane_g3

0x5b60,	// (0x000a357f) main_mp4_pane_g4_ParamLimits

0x5b60,	// (0x000a357f) main_mp4_pane_g4

0x5b8e,	// (0x000a35ad) main_mp4_pane_g5_ParamLimits

0x5b8e,	// (0x000a35ad) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x000ad29e) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x000ad29e) main_mp4_pane_g

0x5c02,	// (0x000a3621) main_mp4_pane_t1_ParamLimits

0x5c02,	// (0x000a3621) main_mp4_pane_t1

0x5c5e,	// (0x000a367d) main_mp4_pane_t2_ParamLimits

0x5c5e,	// (0x000a367d) main_mp4_pane_t2

0xd706,	// (0x000ab125) main_mp4_pane_t3_ParamLimits

0xd706,	// (0x000ab125) main_mp4_pane_t3

0x5cb0,	// (0x000a36cf) main_mp4_pane_t4_ParamLimits

0x5cb0,	// (0x000a36cf) main_mp4_pane_t4

0x0003,

0xf890,	// (0x000ad2af) main_mp4_pane_t_ParamLimits

0xf890,	// (0x000ad2af) main_mp4_pane_t

0x5cf0,	// (0x000a370f) mp4_progress_pane_ParamLimits

0x5cf0,	// (0x000a370f) mp4_progress_pane

0x5d3a,	// (0x000a3759) mp4_rocker_pane_ParamLimits

0x5d3a,	// (0x000a3759) mp4_rocker_pane

0xd734,	// (0x000ab153) mp4_progress_pane_t1

0xd74d,	// (0x000ab16c) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x000ad2b8) mp4_progress_pane_t

0xd766,	// (0x000ab185) mup_progress_pane_cp04

0xddac,	// (0x000ab7cb) mp4_rocker_pane_g1

0x5d5a,	// (0x000a3779) aid_cell_size_keypad2_ParamLimits

0x5d5a,	// (0x000a3779) aid_cell_size_keypad2

0x5d6a,	// (0x000a3789) dialer2_ne_pane_ParamLimits

0x5d6a,	// (0x000a3789) dialer2_ne_pane

0x5d76,	// (0x000a3795) grid_dialer2_keypad_pane_ParamLimits

0x5d76,	// (0x000a3795) grid_dialer2_keypad_pane

0xddb6,	// (0x000ab7d5) bg_popup_call_pane_cp07_ParamLimits

0xddb6,	// (0x000ab7d5) bg_popup_call_pane_cp07

0x5d84,	// (0x000a37a3) dialer2_ne_pane_t1_ParamLimits

0x5d84,	// (0x000a37a3) dialer2_ne_pane_t1

0x5da9,	// (0x000a37c8) cell_dialer2_keypad_pane_ParamLimits

0x5da9,	// (0x000a37c8) cell_dialer2_keypad_pane

0xd78b,	// (0x000ab1aa) bg_button_pane_pane_cp04_ParamLimits

0xd78b,	// (0x000ab1aa) bg_button_pane_pane_cp04

0x5dc0,	// (0x000a37df) cell_dialer2_keypad_pane_g1_ParamLimits

0x5dc0,	// (0x000a37df) cell_dialer2_keypad_pane_g1

0x1d5e,	// (0x0009f77d) aid_placing_vt_set_content_ParamLimits

0x1d5e,	// (0x0009f77d) aid_placing_vt_set_content

0x1d86,	// (0x0009f7a5) aid_placing_vt_set_title_ParamLimits

0x1d86,	// (0x0009f7a5) aid_placing_vt_set_title

0x0d91,	// (0x0009e7b0) main_image3_pane

0x5e5a,	// (0x000a3879) area_side_right_pane_cp01_ParamLimits

0x5e5a,	// (0x000a3879) area_side_right_pane_cp01

0x5e89,	// (0x000a38a8) main_image3_pane_g1_ParamLimits

0x5e89,	// (0x000a38a8) main_image3_pane_g1

0x5e97,	// (0x000a38b6) main_image3_pane_g2_ParamLimits

0x5e97,	// (0x000a38b6) main_image3_pane_g2

0x5eb0,	// (0x000a38cf) main_image3_pane_g3_ParamLimits

0x5eb0,	// (0x000a38cf) main_image3_pane_g3

0x5ec9,	// (0x000a38e8) main_image3_pane_g4_ParamLimits

0x5ec9,	// (0x000a38e8) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x000ad2c7) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x000ad2c7) main_image3_pane_g

0x5ee2,	// (0x000a3901) main_image3_pane_t1_ParamLimits

0x5ee2,	// (0x000a3901) main_image3_pane_t1

0x5f07,	// (0x000a3926) main_image3_pane_t2_ParamLimits

0x5f07,	// (0x000a3926) main_image3_pane_t2

0x5f26,	// (0x000a3945) main_image3_pane_t3_ParamLimits

0x5f26,	// (0x000a3945) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x000ad2d0) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x000ad2d0) main_image3_pane_t

0xd2bd,	// (0x000aacdc) grid_sctrl_middle_pane_cp01_ParamLimits

0xd2bd,	// (0x000aacdc) grid_sctrl_middle_pane_cp01

0x5f87,	// (0x000a39a6) cell_sctrl_middle_pane_cp01_ParamLimits

0x5f87,	// (0x000a39a6) cell_sctrl_middle_pane_cp01

0x5f98,	// (0x000a39b7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5f98,	// (0x000a39b7) cell_sctrl_middle_pane_cp01_g1

0x0d91,	// (0x0009e7b0) main_call4_pane

0x5fa5,	// (0x000a39c4) aid_size_button_call4_ParamLimits

0x5fa5,	// (0x000a39c4) aid_size_button_call4

0x5fdb,	// (0x000a39fa) call4_windows_pane_ParamLimits

0x5fdb,	// (0x000a39fa) call4_windows_pane

0x5ff0,	// (0x000a3a0f) grid_call4_button_pane_ParamLimits

0x5ff0,	// (0x000a3a0f) grid_call4_button_pane

0x6020,	// (0x000a3a3f) call4_windows_conf_pane

0x603b,	// (0x000a3a5a) popup_call4_audio_first_window_ParamLimits

0x603b,	// (0x000a3a5a) popup_call4_audio_first_window

0x608d,	// (0x000a3aac) popup_call4_audio_second_window_ParamLimits

0x608d,	// (0x000a3aac) popup_call4_audio_second_window

0x60a6,	// (0x000a3ac5) popup_call4_audio_wait_window_ParamLimits

0x60a6,	// (0x000a3ac5) popup_call4_audio_wait_window

0x60b4,	// (0x000a3ad3) cell_call4_button_pane_ParamLimits

0x60b4,	// (0x000a3ad3) cell_call4_button_pane

0x60d7,	// (0x000a3af6) bg_button_pane_cp09_ParamLimits

0x60d7,	// (0x000a3af6) bg_button_pane_cp09

0x60e3,	// (0x000a3b02) cell_call4_button_pane_g1_ParamLimits

0x60e3,	// (0x000a3b02) cell_call4_button_pane_g1

0x60f0,	// (0x000a3b0f) cell_call4_button_pane_t1_ParamLimits

0x60f0,	// (0x000a3b0f) cell_call4_button_pane_t1

0xd79f,	// (0x000ab1be) popup_call4_audio_conf_window_ParamLimits

0xd79f,	// (0x000ab1be) popup_call4_audio_conf_window

0x52b6,	// (0x000a2cd5) mup3_progress_pane_t1_ParamLimits

0x52d5,	// (0x000a2cf4) mup3_progress_pane_t2_ParamLimits

0xd0e4,	// (0x000aab03) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x000ad1a0) mup3_progress_pane_t_ParamLimits

0xd101,	// (0x000aab20) mup_progress_pane_cp03_ParamLimits

0x57df,	// (0x000a31fe) mup3_control_keys_pane_g4_copy1

0x5d1e,	// (0x000a373d) mp4_rocker2_pane_ParamLimits

0x5d1e,	// (0x000a373d) mp4_rocker2_pane

0xd7b9,	// (0x000ab1d8) mp4_rocker2_pane_g1

0xd7c1,	// (0x000ab1e0) mp4_rocker2_pane_g2

0x6134,	// (0x000a3b53) mp4_rocker2_pane_g3

0x613c,	// (0x000a3b5b) mp4_rocker2_pane_g4

0x6144,	// (0x000a3b63) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x000ad2d9) mp4_rocker2_pane_g

0x0d91,	// (0x0009e7b0) main_camera4_pane

0x0d91,	// (0x0009e7b0) main_video4_pane

0x5a33,	// (0x000a3452) main_video_tele_dialer_pane_t1_ParamLimits

0x5a33,	// (0x000a3452) main_video_tele_dialer_pane_t1

0x5a45,	// (0x000a3464) main_video_tele_dialer_pane_t2_ParamLimits

0x5a45,	// (0x000a3464) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x000ad28f) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x000ad28f) main_video_tele_dialer_pane_t

0x6164,	// (0x000a3b83) cam4_autofocus_pane_ParamLimits

0x6164,	// (0x000a3b83) cam4_autofocus_pane

0x617c,	// (0x000a3b9b) cam4_image_uncrop_pane_ParamLimits

0x617c,	// (0x000a3b9b) cam4_image_uncrop_pane

0x6195,	// (0x000a3bb4) cam4_indicators_pane_ParamLimits

0x6195,	// (0x000a3bb4) cam4_indicators_pane

0x61b1,	// (0x000a3bd0) main_camera4_pane_g1_ParamLimits

0x61b1,	// (0x000a3bd0) main_camera4_pane_g1

0x61bd,	// (0x000a3bdc) main_camera4_pane_g2_ParamLimits

0x61bd,	// (0x000a3bdc) main_camera4_pane_g2

0x61bd,	// (0x000a3bdc) main_camera4_pane_g3_ParamLimits

0x61bd,	// (0x000a3bdc) main_camera4_pane_g3

0x61c9,	// (0x000a3be8) main_camera4_pane_g4_ParamLimits

0x61c9,	// (0x000a3be8) main_camera4_pane_g4

0x61d5,	// (0x000a3bf4) main_camera4_pane_g5_ParamLimits

0x61d5,	// (0x000a3bf4) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x000ad2e4) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x000ad2e4) main_camera4_pane_g

0x61ef,	// (0x000a3c0e) main_camera4_pane_t1_ParamLimits

0x61ef,	// (0x000a3c0e) main_camera4_pane_t1

0x6239,	// (0x000a3c58) bg_tb_trans_pane_cp06

0x624f,	// (0x000a3c6e) cam4_indicators_pane_g1

0x6260,	// (0x000a3c7f) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x000ad2ff) cam4_indicators_pane_g

0x6278,	// (0x000a3c97) cam4_indicators_pane_t1

0x62a2,	// (0x000a3cc1) main_video4_pane_g1_ParamLimits

0x62a2,	// (0x000a3cc1) main_video4_pane_g1

0x62ae,	// (0x000a3ccd) main_video4_pane_g2_ParamLimits

0x62ae,	// (0x000a3ccd) main_video4_pane_g2

0x62ba,	// (0x000a3cd9) main_video4_pane_g3_ParamLimits

0x62ba,	// (0x000a3cd9) main_video4_pane_g3

0x62c6,	// (0x000a3ce5) main_video4_pane_g4_ParamLimits

0x62c6,	// (0x000a3ce5) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x000ad306) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x000ad306) main_video4_pane_g

0x62e8,	// (0x000a3d07) vid4_indicators_pane_ParamLimits

0x62e8,	// (0x000a3d07) vid4_indicators_pane

0x6307,	// (0x000a3d26) video4_image_uncrop_cif_pane_ParamLimits

0x6307,	// (0x000a3d26) video4_image_uncrop_cif_pane

0x6316,	// (0x000a3d35) video4_image_uncrop_nhd_pane_ParamLimits

0x6316,	// (0x000a3d35) video4_image_uncrop_nhd_pane

0x617c,	// (0x000a3b9b) video4_image_uncrop_vga_pane_ParamLimits

0x617c,	// (0x000a3b9b) video4_image_uncrop_vga_pane

0x4097,	// (0x000a1ab6) bg_tb_trans_pane_cp07

0x632f,	// (0x000a3d4e) vid4_indicators_pane_g1

0x6345,	// (0x000a3d64) vid4_indicators_pane_g2

0x6359,	// (0x000a3d78) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x000ad311) vid4_indicators_pane_g

0x638a,	// (0x000a3da9) vid4_indicators_pane_t1

0x63a1,	// (0x000a3dc0) cam4_autofocus_pane_g1

0x63a9,	// (0x000a3dc8) cam4_autofocus_pane_g2

0x63b1,	// (0x000a3dd0) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x000ad31c) cam4_autofocus_pane_g

0x63b9,	// (0x000a3dd8) cam4_autofocus_pane_g3_copy1

0x5a65,	// (0x000a3484) video_down_pane_cp_t1

0x5a73,	// (0x000a3492) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x000ad294) video_down_pane_cp_t

0x0d77,	// (0x0009e796) popup_vitu2_window_ParamLimits

0x0d77,	// (0x0009e796) popup_vitu2_window

0x63c1,	// (0x000a3de0) aid_size_cell2_itu2_ParamLimits

0x63c1,	// (0x000a3de0) aid_size_cell2_itu2

0x63e3,	// (0x000a3e02) aid_size_cell_itu2_ParamLimits

0x63e3,	// (0x000a3e02) aid_size_cell_itu2

0x6429,	// (0x000a3e48) bg_popup_window_pane_cp09_ParamLimits

0x6429,	// (0x000a3e48) bg_popup_window_pane_cp09

0x6437,	// (0x000a3e56) field_vitu2_entry_pane_ParamLimits

0x6437,	// (0x000a3e56) field_vitu2_entry_pane

0x6457,	// (0x000a3e76) grid_vitu2_function_pane_ParamLimits

0x6457,	// (0x000a3e76) grid_vitu2_function_pane

0x649b,	// (0x000a3eba) grid_vitu2_itu_pane_ParamLimits

0x649b,	// (0x000a3eba) grid_vitu2_itu_pane

0x6513,	// (0x000a3f32) cell_vitu2_itu_pane_ParamLimits

0x6513,	// (0x000a3f32) cell_vitu2_itu_pane

0x652e,	// (0x000a3f4d) cell_vitu2_function_pane_ParamLimits

0x652e,	// (0x000a3f4d) cell_vitu2_function_pane

0xd7c9,	// (0x000ab1e8) bg_popup_call_pane_cp08_ParamLimits

0xd7c9,	// (0x000ab1e8) bg_popup_call_pane_cp08

0xd7e0,	// (0x000ab1ff) field_vitu2_entry_pane_g1

0xd7ec,	// (0x000ab20b) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x000ad323) field_vitu2_entry_pane_g

0x6572,	// (0x000a3f91) field_vitu2_entry_pane_t1_ParamLimits

0x6572,	// (0x000a3f91) field_vitu2_entry_pane_t1

0xa633,	// (0x000a8052) field_vitu2_entry_pane_t2_ParamLimits

0xa633,	// (0x000a8052) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x000ad32a) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x000ad32a) field_vitu2_entry_pane_t

0x65a0,	// (0x000a3fbf) bg_button_pane_cp010_ParamLimits

0x65a0,	// (0x000a3fbf) bg_button_pane_cp010

0x65ae,	// (0x000a3fcd) cell_vitu2_itu_pane_g1

0x65ce,	// (0x000a3fed) cell_vitu2_itu_pane_t1_ParamLimits

0x65ce,	// (0x000a3fed) cell_vitu2_itu_pane_t1

0x09e6,	// (0x0009e405) cell_vitu2_itu_pane_t2_ParamLimits

0x09e6,	// (0x0009e405) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x000ad334) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x000ad334) cell_vitu2_itu_pane_t

0x4097,	// (0x000a1ab6) bg_button_pane_cp011

0x661a,	// (0x000a4039) cell_vitu2_function_pane_g1

0x0d91,	// (0x0009e7b0) main_myfav_hc_pane

0x5f68,	// (0x000a3987) popup_image3_note_pane_ParamLimits

0x5f68,	// (0x000a3987) popup_image3_note_pane

0x5f76,	// (0x000a3995) popup_image3_tool_bar_pane_ParamLimits

0x5f76,	// (0x000a3995) popup_image3_tool_bar_pane

0x0a5c,	// (0x0009e47b) cell_vitu2_itu_pane_t3_ParamLimits

0x0a5c,	// (0x0009e47b) cell_vitu2_itu_pane_t3

0x9d8e,	// (0x000a77ad) bg_popup_trans_pane

0xd822,	// (0x000ab241) grid_image3_tool_bar_pane

0xd82c,	// (0x000ab24b) bg_popup_trans_pane_g1

0xada0,	// (0x000a87bf) bg_popup_trans_pane_g2

0xd834,	// (0x000ab253) bg_popup_trans_pane_g3

0xd83c,	// (0x000ab25b) bg_popup_trans_pane_g4

0xd844,	// (0x000ab263) bg_popup_trans_pane_g5

0xd84c,	// (0x000ab26b) bg_popup_trans_pane_g6

0xd854,	// (0x000ab273) bg_popup_trans_pane_g7

0xd85c,	// (0x000ab27b) bg_popup_trans_pane_g8

0xad80,	// (0x000a879f) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x000ad33b) bg_popup_trans_pane_g

0xd864,	// (0x000ab283) cell_image3_tool_bar_pane_ParamLimits

0xd864,	// (0x000ab283) cell_image3_tool_bar_pane

0xce42,	// (0x000aa861) cell_image3_tool_bar_pane_g1

0x9d8e,	// (0x000a77ad) bg_popup_trans_pane_cp1

0xd87a,	// (0x000ab299) popup_image3_note_pane_t1

0xd888,	// (0x000ab2a7) popup_image3_note_pane_t2

0xd896,	// (0x000ab2b5) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x000ad34e) popup_image3_note_pane_t

0xd8a6,	// (0x000ab2c5) popup_image3_note_pane_t3_copy1

0x662e,	// (0x000a404d) bg_myfav_hc_instruction_pane_ParamLimits

0x662e,	// (0x000a404d) bg_myfav_hc_instruction_pane

0x6646,	// (0x000a4065) cell_myfav_contact_pane_ParamLimits

0x6646,	// (0x000a4065) cell_myfav_contact_pane

0x6660,	// (0x000a407f) cell_myfav_contact_pane_cp1_ParamLimits

0x6660,	// (0x000a407f) cell_myfav_contact_pane_cp1

0x6678,	// (0x000a4097) cell_myfav_contact_pane_cp2_ParamLimits

0x6678,	// (0x000a4097) cell_myfav_contact_pane_cp2

0x6690,	// (0x000a40af) cell_myfav_contact_pane_cp3_ParamLimits

0x6690,	// (0x000a40af) cell_myfav_contact_pane_cp3

0x66a7,	// (0x000a40c6) cell_myfav_contact_pane_cp4_ParamLimits

0x66a7,	// (0x000a40c6) cell_myfav_contact_pane_cp4

0x66bd,	// (0x000a40dc) cell_myfav_contact_pane_cp5_ParamLimits

0x66bd,	// (0x000a40dc) cell_myfav_contact_pane_cp5

0x66d1,	// (0x000a40f0) cell_myfav_contact_pane_cp6_ParamLimits

0x66d1,	// (0x000a40f0) cell_myfav_contact_pane_cp6

0x66e5,	// (0x000a4104) cell_myfav_contact_pane_cp7_ParamLimits

0x66e5,	// (0x000a4104) cell_myfav_contact_pane_cp7

0xd8b4,	// (0x000ab2d3) listscroll_gen_pane_cp05

0x66fd,	// (0x000a411c) main_myfav_hc_pane_g1_ParamLimits

0x66fd,	// (0x000a411c) main_myfav_hc_pane_g1

0x6717,	// (0x000a4136) main_myfav_hc_pane_g2_ParamLimits

0x6717,	// (0x000a4136) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x000ad355) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x000ad355) main_myfav_hc_pane_g

0x6749,	// (0x000a4168) main_myfav_hc_pane_t1_ParamLimits

0x6749,	// (0x000a4168) main_myfav_hc_pane_t1

0xd8bd,	// (0x000ab2dc) main_myfav_hc_pane_t2_ParamLimits

0xd8bd,	// (0x000ab2dc) main_myfav_hc_pane_t2

0xd8cf,	// (0x000ab2ee) main_myfav_hc_pane_t3_ParamLimits

0xd8cf,	// (0x000ab2ee) main_myfav_hc_pane_t3

0x6760,	// (0x000a417f) main_myfav_hc_pane_t4_ParamLimits

0x6760,	// (0x000a417f) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x000ad35c) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x000ad35c) main_myfav_hc_pane_t

0xce42,	// (0x000aa861) bg_myfav_hc_instruction_pane_g1

0xd8e1,	// (0x000ab300) cell_myfav_contact_pane_g1_ParamLimits

0xd8e1,	// (0x000ab300) cell_myfav_contact_pane_g1

0xd8e1,	// (0x000ab300) cell_myfav_contact_pane_g2_ParamLimits

0xd8e1,	// (0x000ab300) cell_myfav_contact_pane_g2

0xd8ed,	// (0x000ab30c) cell_myfav_contact_pane_g3_ParamLimits

0xd8ed,	// (0x000ab30c) cell_myfav_contact_pane_g3

0xd0ce,	// (0x000aaaed) cell_myfav_contact_pane_g4_ParamLimits

0xd0ce,	// (0x000aaaed) cell_myfav_contact_pane_g4

0xd8fa,	// (0x000ab319) cell_myfav_contact_pane_g5_ParamLimits

0xd8fa,	// (0x000ab319) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x000ad367) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x000ad367) cell_myfav_contact_pane_g

0x6731,	// (0x000a4150) main_myfav_hc_pane_g3_ParamLimits

0x6731,	// (0x000a4150) main_myfav_hc_pane_g3

0x0c7f,	// (0x0009e69e) popup_adpt_find_window

0x678a,	// (0x000a41a9) afind_page_pane_ParamLimits

0x678a,	// (0x000a41a9) afind_page_pane

0x6797,	// (0x000a41b6) aid_size_cell_afind_ParamLimits

0x6797,	// (0x000a41b6) aid_size_cell_afind

0x67b1,	// (0x000a41d0) bg_popup_sub_pane_cp09_ParamLimits

0x67b1,	// (0x000a41d0) bg_popup_sub_pane_cp09

0x67be,	// (0x000a41dd) find_pane_cp01_ParamLimits

0x67be,	// (0x000a41dd) find_pane_cp01

0xd906,	// (0x000ab325) grid_afind_control_pane_ParamLimits

0xd906,	// (0x000ab325) grid_afind_control_pane

0x67cb,	// (0x000a41ea) grid_afind_pane_ParamLimits

0x67cb,	// (0x000a41ea) grid_afind_pane

0x67e7,	// (0x000a4206) cell_afind_pane_ParamLimits

0x67e7,	// (0x000a4206) cell_afind_pane

0xce42,	// (0x000aa861) afind_page_pane_g1

0x6833,	// (0x000a4252) afind_page_pane_g2

0x683c,	// (0x000a425b) afind_page_pane_g3

0x0002,

0xf953,	// (0x000ad372) afind_page_pane_g

0x6845,	// (0x000a4264) afind_page_pane_t1

0xd91a,	// (0x000ab339) cell_afind_grid_control_pane_ParamLimits

0xd91a,	// (0x000ab339) cell_afind_grid_control_pane

0xd78b,	// (0x000ab1aa) bg_button_pane_cp69_ParamLimits

0xd78b,	// (0x000ab1aa) bg_button_pane_cp69

0x6865,	// (0x000a4284) cell_afind_pane_g1_ParamLimits

0x6865,	// (0x000a4284) cell_afind_pane_g1

0x6872,	// (0x000a4291) cell_afind_pane_t1_ParamLimits

0x6872,	// (0x000a4291) cell_afind_pane_t1

0xab95,	// (0x000a85b4) bg_button_pane_cp72

0xd929,	// (0x000ab348) cell_afind_grid_control_pane_g1

0x3c00,	// (0x000a161f) aid_image_placing_area_ParamLimits

0x3c00,	// (0x000a161f) aid_image_placing_area

0xd44a,	// (0x000aae69) field_vitu_entry_pane_g1_ParamLimits

0xd44a,	// (0x000aae69) field_vitu_entry_pane_g1

0xd456,	// (0x000aae75) field_vitu_entry_pane_g2_ParamLimits

0xd456,	// (0x000aae75) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x000ad21f) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x000ad21f) field_vitu_entry_pane_g

0x5869,	// (0x000a3288) cell_vitu_itu_pane_g1_ParamLimits

0x58b9,	// (0x000a32d8) cell_vitu_itu_pane_t3_ParamLimits

0x58b9,	// (0x000a32d8) cell_vitu_itu_pane_t3

0xd734,	// (0x000ab153) mp4_progress_pane_t1_ParamLimits

0xd74d,	// (0x000ab16c) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x000ad2b8) mp4_progress_pane_t_ParamLimits

0xd766,	// (0x000ab185) mup_progress_pane_cp04_ParamLimits

0x6774,	// (0x000a4193) main_myfav_hc_pane_t5_ParamLimits

0x6774,	// (0x000a4193) main_myfav_hc_pane_t5

0x09d6,	// (0x0009e3f5) aid_zoom_text_primary

0x0c7f,	// (0x0009e69e) popup_adpt_find_window_ParamLimits

0x4097,	// (0x000a1ab6) main_cam_set_pane

0x61a3,	// (0x000a3bc2) cam4_zoom_pane_ParamLimits

0x61a3,	// (0x000a3bc2) cam4_zoom_pane

0x6884,	// (0x000a42a3) main_cam_set_pane_g1_ParamLimits

0x6884,	// (0x000a42a3) main_cam_set_pane_g1

0x6892,	// (0x000a42b1) main_cam_set_pane_g2_ParamLimits

0x6892,	// (0x000a42b1) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x000ad379) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x000ad379) main_cam_set_pane_g

0x689e,	// (0x000a42bd) main_cam_set_pane_t1_ParamLimits

0x689e,	// (0x000a42bd) main_cam_set_pane_t1

0x68ba,	// (0x000a42d9) main_cset_listscroll_pane_ParamLimits

0x68ba,	// (0x000a42d9) main_cset_listscroll_pane

0x68e9,	// (0x000a4308) main_cset_slider_pane_ParamLimits

0x68e9,	// (0x000a4308) main_cset_slider_pane

0xd93a,	// (0x000ab359) main_cset_list_pane_ParamLimits

0xd93a,	// (0x000ab359) main_cset_list_pane

0xd94a,	// (0x000ab369) scroll_pane_cp028

0x690a,	// (0x000a4329) aid_area_touch_slider

0x6926,	// (0x000a4345) cset_slider_pane

0x6950,	// (0x000a436f) main_cset_slider_pane_g1

0x6965,	// (0x000a4384) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x000ad37e) main_cset_slider_pane_g

0xd983,	// (0x000ab3a2) main_cset_slider_pane_t1

0x6a21,	// (0x000a4440) main_cset_slider_pane_t2

0x6a3b,	// (0x000a445a) main_cset_slider_pane_t3

0x6a55,	// (0x000a4474) main_cset_slider_pane_t4

0x6a6f,	// (0x000a448e) main_cset_slider_pane_t5

0x6a89,	// (0x000a44a8) main_cset_slider_pane_t6

0x6a9e,	// (0x000a44bd) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x000ad3a3) main_cset_slider_pane_t

0x6ba2,	// (0x000a45c1) cset_list_set_pane_ParamLimits

0x6ba2,	// (0x000a45c1) cset_list_set_pane

0x6bb3,	// (0x000a45d2) aid_position_infowindow_above

0x6bbb,	// (0x000a45da) aid_position_infowindow_below

0x6bc3,	// (0x000a45e2) cset_list_set_pane_g1_ParamLimits

0x6bc3,	// (0x000a45e2) cset_list_set_pane_g1

0x6bcf,	// (0x000a45ee) cset_list_set_pane_g3_ParamLimits

0x6bcf,	// (0x000a45ee) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x000ad3c2) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x000ad3c2) cset_list_set_pane_g

0x6bde,	// (0x000a45fd) cset_list_set_pane_t1_ParamLimits

0x6bde,	// (0x000a45fd) cset_list_set_pane_t1

0xafad,	// (0x000a89cc) list_highlight_pane_cp021_ParamLimits

0xafad,	// (0x000a89cc) list_highlight_pane_cp021

0xb71f,	// (0x000a913e) cset_slider_pane_g1

0xb731,	// (0x000a9150) cset_slider_pane_g2

0xb728,	// (0x000a9147) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x000ad3c7) cset_slider_pane_g

0x6bf3,	// (0x000a4612) aid_area_touch_cam4_zoom

0x6bfc,	// (0x000a461b) cam4_zoom_cont_pane

0x6c04,	// (0x000a4623) cam4_zoom_pane_g1

0x6c0c,	// (0x000a462b) cam4_zoom_pane_g2

0x6c14,	// (0x000a4633) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x000ad3ce) cam4_zoom_pane_g

0x6c1d,	// (0x000a463c) cam4_zoom_cont_pane_g1

0x6c26,	// (0x000a4645) cam4_zoom_cont_pane_g2

0x6c2f,	// (0x000a464e) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x000ad3d5) cam4_zoom_cont_pane_g

0x5fbf,	// (0x000a39de) call4_image_pane_ParamLimits

0x5fbf,	// (0x000a39de) call4_image_pane

0x6020,	// (0x000a3a3f) call4_windows_conf_pane_ParamLimits

0x606b,	// (0x000a3a8a) popup_call4_audio_in_window_ParamLimits

0x606b,	// (0x000a3a8a) popup_call4_audio_in_window

0x9d8e,	// (0x000a77ad) bg_popup_call2_act_pane_cp02

0xd797,	// (0x000ab1b6) call4_list_conf_pane

0xce42,	// (0x000aa861) call4_image_pane_g1

0xce42,	// (0x000aa861) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x000ad0e0) call4_image_pane_g

0xda23,	// (0x000ab442) list_single_graphic_popup_conf4_pane_ParamLimits

0xda23,	// (0x000ab442) list_single_graphic_popup_conf4_pane

0x9d8e,	// (0x000a77ad) list_highlight_pane_cp022

0xda38,	// (0x000ab457) list_single_graphic_popup_conf4_pane_g1

0xb2ff,	// (0x000a8d1e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x000ad3dc) list_single_graphic_popup_conf4_pane_g

0xda40,	// (0x000ab45f) list_single_graphic_popup_conf4_pane_t1

0x1ee0,	// (0x0009f8ff) popup_vtel_slider_window_ParamLimits

0x1ee0,	// (0x0009f8ff) popup_vtel_slider_window

0xd779,	// (0x000ab198) dialer2_ne_pane_t2_ParamLimits

0xd779,	// (0x000ab198) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x000ad2bd) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x000ad2bd) dialer2_ne_pane_t

0xafad,	// (0x000a89cc) bg_popup_sub_pane_cp010_ParamLimits

0xafad,	// (0x000a89cc) bg_popup_sub_pane_cp010

0x6c38,	// (0x000a4657) popup_vtel_slider_window_g1_ParamLimits

0x6c38,	// (0x000a4657) popup_vtel_slider_window_g1

0x6c44,	// (0x000a4663) popup_vtel_slider_window_g2_ParamLimits

0x6c44,	// (0x000a4663) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x000ad3e1) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x000ad3e1) popup_vtel_slider_window_g

0x6c8c,	// (0x000a46ab) vtel_slider_pane_ParamLimits

0x6c8c,	// (0x000a46ab) vtel_slider_pane

0x6c9b,	// (0x000a46ba) vtel_slider_pane_g1_ParamLimits

0x6c9b,	// (0x000a46ba) vtel_slider_pane_g1

0x6ca8,	// (0x000a46c7) vtel_slider_pane_g2_ParamLimits

0x6ca8,	// (0x000a46c7) vtel_slider_pane_g2

0x6cb5,	// (0x000a46d4) vtel_slider_pane_g3_ParamLimits

0x6cb5,	// (0x000a46d4) vtel_slider_pane_g3

0x6c9b,	// (0x000a46ba) vtel_slider_pane_g4_ParamLimits

0x6c9b,	// (0x000a46ba) vtel_slider_pane_g4

0x6cc2,	// (0x000a46e1) vtel_slider_pane_g5_ParamLimits

0x6cc2,	// (0x000a46e1) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x000ad3ea) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x000ad3ea) vtel_slider_pane_g

0x4097,	// (0x000a1ab6) main_gallery2_pane

0x6409,	// (0x000a3e28) aid_size_row_itut2_dropdow_list_ParamLimits

0x6409,	// (0x000a3e28) aid_size_row_itut2_dropdow_list

0x6479,	// (0x000a3e98) grid_vitu2_function_top_pane_ParamLimits

0x6479,	// (0x000a3e98) grid_vitu2_function_top_pane

0x64cf,	// (0x000a3eee) popup_vitu2_dropdown_list_window_ParamLimits

0x64cf,	// (0x000a3eee) popup_vitu2_dropdown_list_window

0x64ef,	// (0x000a3f0e) popup_vitu2_match_list_window

0x6cdd,	// (0x000a46fc) cell_vitu2_function_top_pane_ParamLimits

0x6cdd,	// (0x000a46fc) cell_vitu2_function_top_pane

0x6d01,	// (0x000a4720) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6d01,	// (0x000a4720) cell_vitu2_function_top_pane_cp01

0x6d1d,	// (0x000a473c) cell_vitu2_function_top_wide_pane_ParamLimits

0x6d1d,	// (0x000a473c) cell_vitu2_function_top_wide_pane

0x4097,	// (0x000a1ab6) bg_button_pane_cp012

0x6d39,	// (0x000a4758) cell_vitu2_function_top_pane_g1

0x6d4d,	// (0x000a476c) bg_button_pane_cp013_ParamLimits

0x6d4d,	// (0x000a476c) bg_button_pane_cp013

0x6d69,	// (0x000a4788) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6d69,	// (0x000a4788) cell_vitu2_function_top_wide_pane_g1

0x0d77,	// (0x0009e796) bg_popup_sub_pane_cp20

0x6d81,	// (0x000a47a0) list_vitu2_match_list_pane

0xd82c,	// (0x000ab24b) bg_popup_sub_pane_cp20_g1

0xd834,	// (0x000ab253) bg_popup_sub_pane_cp20_g2

0xada0,	// (0x000a87bf) bg_popup_sub_pane_cp20_g3

0xd83c,	// (0x000ab25b) bg_popup_sub_pane_cp20_g4

0xad80,	// (0x000a879f) bg_popup_sub_pane_cp20_g5

0xda56,	// (0x000ab475) bg_popup_sub_pane_cp20_g6

0xd84c,	// (0x000ab26b) bg_popup_sub_pane_cp20_g7

0xd854,	// (0x000ab273) bg_popup_sub_pane_cp20_g8

0xd85c,	// (0x000ab27b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x000ad3f5) bg_popup_sub_pane_cp20_g

0x6d99,	// (0x000a47b8) list_vitu2_match_list_item_pane_ParamLimits

0x6d99,	// (0x000a47b8) list_vitu2_match_list_item_pane

0x6dab,	// (0x000a47ca) list_vitu2_match_list_item_pane_t1

0x0d91,	// (0x0009e7b0) bg_popup_sub_pane_cp21

0x6e01,	// (0x000a4820) grid_vitu2_dropdown_list_pane

0x6e09,	// (0x000a4828) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6e09,	// (0x000a4828) cell_vitu2_dropdown_list_char_pane

0x6e2e,	// (0x000a484d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6e2e,	// (0x000a484d) cell_vitu2_dropdown_list_ctrl_pane

0xda5e,	// (0x000ab47d) cell_vitu2_dropdown_list_char_pane_g1

0xda67,	// (0x000ab486) cell_vitu2_dropdown_list_char_pane_g2

0xda70,	// (0x000ab48f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x000ad412) cell_vitu2_dropdown_list_char_pane_g

0x6e5c,	// (0x000a487b) cell_vitu2_dropdown_list_char_pane_t1

0x6e6a,	// (0x000a4889) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e6a,	// (0x000a4889) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e7a,	// (0x000a4899) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e7a,	// (0x000a4899) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6e8b,	// (0x000a48aa) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6e8b,	// (0x000a48aa) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6e9b,	// (0x000a48ba) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6e9b,	// (0x000a48ba) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6239,	// (0x000a3c58) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6239,	// (0x000a3c58) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x000ad419) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x000ad419) cell_vitu2_dropdown_list_ctrl_pane_g

0x6eb4,	// (0x000a48d3) aid_size_cell_gallery2_ParamLimits

0x6eb4,	// (0x000a48d3) aid_size_cell_gallery2

0x6ece,	// (0x000a48ed) grid_gallery2_pane_ParamLimits

0x6ece,	// (0x000a48ed) grid_gallery2_pane

0x6ee5,	// (0x000a4904) scroll_pane_cp029_ParamLimits

0x6ee5,	// (0x000a4904) scroll_pane_cp029

0x6ef5,	// (0x000a4914) cell_gallery2_pane_ParamLimits

0x6ef5,	// (0x000a4914) cell_gallery2_pane

0xda79,	// (0x000ab498) cell_gallery2_pane_g2

0x6f4c,	// (0x000a496b) cell_gallery2_pane_g3

0xda81,	// (0x000ab4a0) cell_gallery2_pane_g4

0xda89,	// (0x000ab4a8) cell_gallery2_pane_g5

0xab43,	// (0x000a8562) grid_highlight_pane_cp10

0x64ef,	// (0x000a3f0e) popup_vitu2_match_list_window_ParamLimits

0x6503,	// (0x000a3f22) popup_vitu2_query_window_ParamLimits

0x6503,	// (0x000a3f22) popup_vitu2_query_window

0x0d91,	// (0x0009e7b0) bg_vitu2_candi_button_pane

0xda5e,	// (0x000ab47d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xda67,	// (0x000ab486) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xda70,	// (0x000ab48f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f54,	// (0x000a4973) bg_button_pane_cp015

0x6f66,	// (0x000a4985) bg_button_pane_cp016

0x6f79,	// (0x000a4998) bg_button_pane_cp017

0xca0a,	// (0x000aa429) bg_popup_sub_pane_cp22

0xda91,	// (0x000ab4b0) popup_vitu2_query_window_g1

0x6fbe,	// (0x000a49dd) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x000ad424) popup_vitu2_query_window_g

0x6fdb,	// (0x000a49fa) popup_vitu2_query_window_t1_ParamLimits

0x6fdb,	// (0x000a49fa) popup_vitu2_query_window_t1

0x700e,	// (0x000a4a2d) popup_vitu2_query_window_t2_ParamLimits

0x700e,	// (0x000a4a2d) popup_vitu2_query_window_t2

0x7020,	// (0x000a4a3f) popup_vitu2_query_window_t3_ParamLimits

0x7020,	// (0x000a4a3f) popup_vitu2_query_window_t3

0x7048,	// (0x000a4a67) popup_vitu2_query_window_t4_ParamLimits

0x7048,	// (0x000a4a67) popup_vitu2_query_window_t4

0x706b,	// (0x000a4a8a) popup_vitu2_query_window_t5_ParamLimits

0x706b,	// (0x000a4a8a) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x000ad42b) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x000ad42b) popup_vitu2_query_window_t

0xd932,	// (0x000ab351) main_cset_text_pane

0x690a,	// (0x000a4329) aid_area_touch_slider_ParamLimits

0x6926,	// (0x000a4345) cset_slider_pane_ParamLimits

0x6950,	// (0x000a436f) main_cset_slider_pane_g1_ParamLimits

0x6965,	// (0x000a4384) main_cset_slider_pane_g2_ParamLimits

0xd953,	// (0x000ab372) main_cset_slider_pane_g3_ParamLimits

0xd953,	// (0x000ab372) main_cset_slider_pane_g3

0x697a,	// (0x000a4399) main_cset_slider_pane_g4_ParamLimits

0x697a,	// (0x000a4399) main_cset_slider_pane_g4

0x6989,	// (0x000a43a8) main_cset_slider_pane_g5_ParamLimits

0x6989,	// (0x000a43a8) main_cset_slider_pane_g5

0x6995,	// (0x000a43b4) main_cset_slider_pane_g6_ParamLimits

0x6995,	// (0x000a43b4) main_cset_slider_pane_g6

0xf95f,	// (0x000ad37e) main_cset_slider_pane_g_ParamLimits

0xd983,	// (0x000ab3a2) main_cset_slider_pane_t1_ParamLimits

0x6a21,	// (0x000a4440) main_cset_slider_pane_t2_ParamLimits

0x6a3b,	// (0x000a445a) main_cset_slider_pane_t3_ParamLimits

0x6a55,	// (0x000a4474) main_cset_slider_pane_t4_ParamLimits

0x6a6f,	// (0x000a448e) main_cset_slider_pane_t5_ParamLimits

0x6a89,	// (0x000a44a8) main_cset_slider_pane_t6_ParamLimits

0x6a9e,	// (0x000a44bd) main_cset_slider_pane_t7_ParamLimits

0x6ac8,	// (0x000a44e7) main_cset_slider_pane_t8_ParamLimits

0x6ac8,	// (0x000a44e7) main_cset_slider_pane_t8

0x6af0,	// (0x000a450f) main_cset_slider_pane_t9_ParamLimits

0x6af0,	// (0x000a450f) main_cset_slider_pane_t9

0x6b18,	// (0x000a4537) main_cset_slider_pane_t10_ParamLimits

0x6b18,	// (0x000a4537) main_cset_slider_pane_t10

0x6b40,	// (0x000a455f) main_cset_slider_pane_t11_ParamLimits

0x6b40,	// (0x000a455f) main_cset_slider_pane_t11

0x6b68,	// (0x000a4587) main_cset_slider_pane_t12_ParamLimits

0x6b68,	// (0x000a4587) main_cset_slider_pane_t12

0x6b85,	// (0x000a45a4) main_cset_slider_pane_t13_ParamLimits

0x6b85,	// (0x000a45a4) main_cset_slider_pane_t13

0xf984,	// (0x000ad3a3) main_cset_slider_pane_t_ParamLimits

0x9d8e,	// (0x000a77ad) bg_popup_sub_pane_cp011

0xda9d,	// (0x000ab4bc) main_cset_text_pane_g1

0xdaa5,	// (0x000ab4c4) main_cset_text_pane_t1

0xdab3,	// (0x000ab4d2) main_cset_text_pane_t2

0xdac1,	// (0x000ab4e0) main_cset_text_pane_t3

0xdacf,	// (0x000ab4ee) main_cset_text_pane_t4

0xdadd,	// (0x000ab4fc) main_cset_text_pane_t5

0xdaeb,	// (0x000ab50a) main_cset_text_pane_t6

0xdaf9,	// (0x000ab518) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x000ad43a) main_cset_text_pane_t

0x0d91,	// (0x0009e7b0) main_cam4_burst_pane

0x0d91,	// (0x0009e7b0) main_cam5_pane

0x6853,	// (0x000a4272) bg_button_pane_cp019

0x685c,	// (0x000a427b) bg_button_pane_cp020

0xd95f,	// (0x000ab37e) main_cset_slider_pane_g7_ParamLimits

0xd95f,	// (0x000ab37e) main_cset_slider_pane_g7

0xd96b,	// (0x000ab38a) main_cset_slider_pane_g8_ParamLimits

0xd96b,	// (0x000ab38a) main_cset_slider_pane_g8

0x69a9,	// (0x000a43c8) main_cset_slider_pane_g9_ParamLimits

0x69a9,	// (0x000a43c8) main_cset_slider_pane_g9

0x69b5,	// (0x000a43d4) main_cset_slider_pane_g10_ParamLimits

0x69b5,	// (0x000a43d4) main_cset_slider_pane_g10

0x69c1,	// (0x000a43e0) main_cset_slider_pane_g11_ParamLimits

0x69c1,	// (0x000a43e0) main_cset_slider_pane_g11

0x69cd,	// (0x000a43ec) main_cset_slider_pane_g12_ParamLimits

0x69cd,	// (0x000a43ec) main_cset_slider_pane_g12

0x69d9,	// (0x000a43f8) main_cset_slider_pane_g13_ParamLimits

0x69d9,	// (0x000a43f8) main_cset_slider_pane_g13

0x69e5,	// (0x000a4404) main_cset_slider_pane_g14_ParamLimits

0x69e5,	// (0x000a4404) main_cset_slider_pane_g14

0x69f1,	// (0x000a4410) main_cset_slider_pane_g15_ParamLimits

0x69f1,	// (0x000a4410) main_cset_slider_pane_g15

0xd9b1,	// (0x000ab3d0) main_cset_slider_pane_t14_ParamLimits

0xd9b1,	// (0x000ab3d0) main_cset_slider_pane_t14

0xd9ea,	// (0x000ab409) main_cset_slider_pane_t15_ParamLimits

0xd9ea,	// (0x000ab409) main_cset_slider_pane_t15

0x70e4,	// (0x000a4b03) aid_cam4_burst_size_cell_ParamLimits

0x70e4,	// (0x000a4b03) aid_cam4_burst_size_cell

0x7100,	// (0x000a4b1f) grid_cam4_burst_pane_ParamLimits

0x7100,	// (0x000a4b1f) grid_cam4_burst_pane

0x7132,	// (0x000a4b51) linegrid_cam4_burst_pane_ParamLimits

0x7132,	// (0x000a4b51) linegrid_cam4_burst_pane

0x7150,	// (0x000a4b6f) scroll_pane_cp30_ParamLimits

0x7150,	// (0x000a4b6f) scroll_pane_cp30

0x715c,	// (0x000a4b7b) cell_cam4_burst_pane_ParamLimits

0x715c,	// (0x000a4b7b) cell_cam4_burst_pane

0xdb07,	// (0x000ab526) linegrid_cam4_burst_pane_g1_ParamLimits

0xdb07,	// (0x000ab526) linegrid_cam4_burst_pane_g1

0x719c,	// (0x000a4bbb) linegrid_cam4_burst_pane_g2_ParamLimits

0x719c,	// (0x000a4bbb) linegrid_cam4_burst_pane_g2

0xdb14,	// (0x000ab533) linegrid_cam4_burst_pane_g3_ParamLimits

0xdb14,	// (0x000ab533) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x000ad449) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x000ad449) linegrid_cam4_burst_pane_g

0x71ad,	// (0x000a4bcc) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x71ad,	// (0x000a4bcc) linegrid_cam4_burst_pane_g3_copy1

0xdb21,	// (0x000ab540) linegrid_cam4_burst_pane_g4_ParamLimits

0xdb21,	// (0x000ab540) linegrid_cam4_burst_pane_g4

0x71c7,	// (0x000a4be6) linegrid_cam4_burst_pane_g5_ParamLimits

0x71c7,	// (0x000a4be6) linegrid_cam4_burst_pane_g5

0x71d8,	// (0x000a4bf7) linegrid_cam4_burst_pane_g6_ParamLimits

0x71d8,	// (0x000a4bf7) linegrid_cam4_burst_pane_g6

0xdb2e,	// (0x000ab54d) linegrid_cam4_burst_pane_g7_ParamLimits

0xdb2e,	// (0x000ab54d) linegrid_cam4_burst_pane_g7

0x71ef,	// (0x000a4c0e) cell_cam4_burst_pane_g1

0xdb47,	// (0x000ab566) main_cam5_pane_t1_ParamLimits

0xdb47,	// (0x000ab566) main_cam5_pane_t1

0xdb59,	// (0x000ab578) main_cam5_pane_t2_ParamLimits

0xdb59,	// (0x000ab578) main_cam5_pane_t2

0xdb6b,	// (0x000ab58a) main_cam5_pane_t3_ParamLimits

0xdb6b,	// (0x000ab58a) main_cam5_pane_t3

0xdb7d,	// (0x000ab59c) main_cam5_pane_t4_ParamLimits

0xdb7d,	// (0x000ab59c) main_cam5_pane_t4

0xdb95,	// (0x000ab5b4) main_cam5_pane_t5_ParamLimits

0xdb95,	// (0x000ab5b4) main_cam5_pane_t5

0xdba9,	// (0x000ab5c8) main_cam5_pane_t6_ParamLimits

0xdba9,	// (0x000ab5c8) main_cam5_pane_t6

0xdbbd,	// (0x000ab5dc) main_cam5_pane_t7_ParamLimits

0xdbbd,	// (0x000ab5dc) main_cam5_pane_t7

0xdbcf,	// (0x000ab5ee) main_cam5_pane_t8_ParamLimits

0xdbcf,	// (0x000ab5ee) main_cam5_pane_t8

0xdbed,	// (0x000ab60c) main_cam5_pane_t9_ParamLimits

0xdbed,	// (0x000ab60c) main_cam5_pane_t9

0xdbff,	// (0x000ab61e) main_cam5_pane_t10_ParamLimits

0xdbff,	// (0x000ab61e) main_cam5_pane_t10

0xdc11,	// (0x000ab630) main_cam5_pane_t11_ParamLimits

0xdc11,	// (0x000ab630) main_cam5_pane_t11

0xdc25,	// (0x000ab644) main_cam5_pane_t12_ParamLimits

0xdc25,	// (0x000ab644) main_cam5_pane_t12

0xdc3c,	// (0x000ab65b) main_cam5_pane_t13_ParamLimits

0xdc3c,	// (0x000ab65b) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x000ad455) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x000ad455) main_cam5_pane_t

0x0d36,	// (0x0009e755) popup_scut_keymap_window_ParamLimits

0x0d36,	// (0x0009e755) popup_scut_keymap_window

0x7202,	// (0x000a4c21) aid_size_cell_brow_shortcut

0xab43,	// (0x000a8562) bg_popup_window_pane_cp010

0x720e,	// (0x000a4c2d) grid_scut_pane

0x721a,	// (0x000a4c39) cell_scut_pane_ParamLimits

0x721a,	// (0x000a4c39) cell_scut_pane

0x7235,	// (0x000a4c54) cell_scut_pane_g1

0xdc5f,	// (0x000ab67e) cell_scut_pane_t1

0xdc6e,	// (0x000ab68d) cell_scut_pane_t2

0x723e,	// (0x000a4c5d) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x000ad470) cell_scut_pane_t

0x4ed5,	// (0x000a28f4) main_mup3_pane_g8_ParamLimits

0x4ed5,	// (0x000a28f4) main_mup3_pane_g8

0x6419,	// (0x000a3e38) area_vitu2_query_pane_ParamLimits

0x6419,	// (0x000a3e38) area_vitu2_query_pane

0x6f8c,	// (0x000a49ab) input_focus_pane_cp08

0xdc7d,	// (0x000ab69c) area_vitu2_query_pane_g1

0x724c,	// (0x000a4c6b) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x000ad477) area_vitu2_query_pane_g

0x725d,	// (0x000a4c7c) area_vitu2_query_pane_t1_ParamLimits

0x725d,	// (0x000a4c7c) area_vitu2_query_pane_t1

0x7271,	// (0x000a4c90) area_vitu2_query_pane_t2_ParamLimits

0x7271,	// (0x000a4c90) area_vitu2_query_pane_t2

0x7285,	// (0x000a4ca4) area_vitu2_query_pane_t3_ParamLimits

0x7285,	// (0x000a4ca4) area_vitu2_query_pane_t3

0xa650,	// (0x000a806f) area_vitu2_query_pane_t4_ParamLimits

0xa650,	// (0x000a806f) area_vitu2_query_pane_t4

0xa678,	// (0x000a8097) area_vitu2_query_pane_t5_ParamLimits

0xa678,	// (0x000a8097) area_vitu2_query_pane_t5

0xa6a0,	// (0x000a80bf) area_vitu2_query_pane_t6_ParamLimits

0xa6a0,	// (0x000a80bf) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x000ad47c) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x000ad47c) area_vitu2_query_pane_t

0x72ad,	// (0x000a4ccc) bg_button_pane_cp018

0x72bb,	// (0x000a4cda) bg_button_pane_cp021

0x72c7,	// (0x000a4ce6) bg_button_pane_cp022

0x72d8,	// (0x000a4cf7) input_focus_pane_cp09

0xb40e,	// (0x000a8e2d) aid_size_touch_mv_arrow_left

0xb439,	// (0x000a8e58) aid_size_touch_mv_arrow_right

0x6a09,	// (0x000a4428) main_cset_slider_pane_g16_ParamLimits

0x6a09,	// (0x000a4428) main_cset_slider_pane_g16

0x6a15,	// (0x000a4434) main_cset_slider_pane_g17_ParamLimits

0x6a15,	// (0x000a4434) main_cset_slider_pane_g17

0x71ef,	// (0x000a4c0e) cell_cam4_burst_pane_g1_ParamLimits

0x9d8e,	// (0x000a77ad) compa_mode_pane

0x6c50,	// (0x000a466f) popup_vtel_slider_window_g3_ParamLimits

0x6c50,	// (0x000a466f) popup_vtel_slider_window_g3

0x6c64,	// (0x000a4683) popup_vtel_slider_window_g4_ParamLimits

0x6c64,	// (0x000a4683) popup_vtel_slider_window_g4

0x6c78,	// (0x000a4697) popup_vtel_slider_window_t1_ParamLimits

0x6c78,	// (0x000a4697) popup_vtel_slider_window_t1

0x0d91,	// (0x0009e7b0) main_cl_pane

0x4141,	// (0x000a1b60) popup_imed_adjust2_window_ParamLimits

0xca0a,	// (0x000aa429) bg_tb_trans_pane_cp05_ParamLimits

0xd375,	// (0x000aad94) popup_imed_adjust2_window_g1_ParamLimits

0xd384,	// (0x000aada3) popup_imed_adjust2_window_g2_ParamLimits

0xd384,	// (0x000aada3) popup_imed_adjust2_window_g2

0xd390,	// (0x000aadaf) popup_imed_adjust2_window_g3_ParamLimits

0xd390,	// (0x000aadaf) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x000ad1e3) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x000ad1e3) popup_imed_adjust2_window_g

0xd39c,	// (0x000aadbb) popup_imed_adjust2_window_t1_ParamLimits

0xd3b4,	// (0x000aadd3) slider_imed_adjust_pane_ParamLimits

0xd3c8,	// (0x000aade7) slider_imed_adjust_pane_g1_ParamLimits

0xd3d8,	// (0x000aadf7) slider_imed_adjust_pane_g2_ParamLimits

0xd3e8,	// (0x000aae07) slider_imed_adjust_pane_g3_ParamLimits

0xd3f9,	// (0x000aae18) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x000ad1ea) slider_imed_adjust_pane_g_ParamLimits

0x614c,	// (0x000a3b6b) aid_touch_area_cam4_ParamLimits

0x614c,	// (0x000a3b6b) aid_touch_area_cam4

0x615c,	// (0x000a3b7b) battery_pane_cp01

0x61e3,	// (0x000a3c02) main_camera4_pane_g6_ParamLimits

0x61e3,	// (0x000a3c02) main_camera4_pane_g6

0x6201,	// (0x000a3c20) main_camera4_pane_t2_ParamLimits

0x6201,	// (0x000a3c20) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x000ad2f1) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x000ad2f1) main_camera4_pane_t

0x6292,	// (0x000a3cb1) aid_touch_area_vid4_ParamLimits

0x6292,	// (0x000a3cb1) aid_touch_area_vid4

0x62d2,	// (0x000a3cf1) main_video4_pane_g5_ParamLimits

0x62d2,	// (0x000a3cf1) main_video4_pane_g5

0x62f8,	// (0x000a3d17) vid4_progress_pane_ParamLimits

0x62f8,	// (0x000a3d17) vid4_progress_pane

0xd977,	// (0x000ab396) main_cset_slider_pane_g18_ParamLimits

0xd977,	// (0x000ab396) main_cset_slider_pane_g18

0xdb3b,	// (0x000ab55a) cell_cam4_burst_pane_g2_ParamLimits

0xdb3b,	// (0x000ab55a) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x000ad450) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x000ad450) cell_cam4_burst_pane_g

0x72e9,	// (0x000a4d08) bg_cl_pane_ParamLimits

0x72e9,	// (0x000a4d08) bg_cl_pane

0x72f5,	// (0x000a4d14) cl_header_pane_ParamLimits

0x72f5,	// (0x000a4d14) cl_header_pane

0x7301,	// (0x000a4d20) cl_listscroll_pane_ParamLimits

0x7301,	// (0x000a4d20) cl_listscroll_pane

0xdc89,	// (0x000ab6a8) bg_cl_pane_g1

0xdc91,	// (0x000ab6b0) bg_cl_pane_g2

0xdc99,	// (0x000ab6b8) bg_cl_pane_g3

0xdca1,	// (0x000ab6c0) bg_cl_pane_g4

0xdca9,	// (0x000ab6c8) bg_cl_pane_g5

0xdcb1,	// (0x000ab6d0) bg_cl_pane_g6

0xdcb9,	// (0x000ab6d8) bg_cl_pane_g7

0xdcc1,	// (0x000ab6e0) bg_cl_pane_g8

0xdcc9,	// (0x000ab6e8) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x000ad48b) bg_cl_pane_g

0x730d,	// (0x000a4d2c) aid_height_cl_leading_ParamLimits

0x730d,	// (0x000a4d2c) aid_height_cl_leading

0x7319,	// (0x000a4d38) aid_height_cl_text_ParamLimits

0x7319,	// (0x000a4d38) aid_height_cl_text

0xd2bd,	// (0x000aacdc) bg_cl_header_pane_ParamLimits

0xd2bd,	// (0x000aacdc) bg_cl_header_pane

0x7331,	// (0x000a4d50) cl_header_pane_g1_ParamLimits

0x7331,	// (0x000a4d50) cl_header_pane_g1

0x733e,	// (0x000a4d5d) cl_header_pane_t1_ParamLimits

0x733e,	// (0x000a4d5d) cl_header_pane_t1

0xdcd1,	// (0x000ab6f0) cl_list_pane

0xd94a,	// (0x000ab369) hc_scroll_pane_cp01

0xad80,	// (0x000a879f) bg_cl_header_pane_g1

0xd82c,	// (0x000ab24b) bg_cl_header_pane_g2

0xada0,	// (0x000a87bf) bg_cl_header_pane_g3

0xd83c,	// (0x000ab25b) bg_cl_header_pane_g4

0xd834,	// (0x000ab253) bg_cl_header_pane_g5

0xda56,	// (0x000ab475) bg_cl_header_pane_g6

0xd854,	// (0x000ab273) bg_cl_header_pane_g7

0xd85c,	// (0x000ab27b) bg_cl_header_pane_g8

0xd84c,	// (0x000ab26b) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x000ad49e) bg_cl_header_pane_g

0x7350,	// (0x000a4d6f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7350,	// (0x000a4d6f) hc_cl_list_double_graphic_heading_pane

0x7360,	// (0x000a4d7f) hc_cl_list_single_graphic_pane_ParamLimits

0x7360,	// (0x000a4d7f) hc_cl_list_single_graphic_pane

0x7372,	// (0x000a4d91) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7372,	// (0x000a4d91) hc_cl_list_single_graphic_pane_g1

0x737e,	// (0x000a4d9d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x737e,	// (0x000a4d9d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x000ad4b1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x000ad4b1) hc_cl_list_single_graphic_pane_g

0x7392,	// (0x000a4db1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7392,	// (0x000a4db1) hc_cl_list_single_graphic_pane_t1

0x7372,	// (0x000a4d91) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7372,	// (0x000a4d91) hc_cl_list_double_graphic_heading_pane_g1

0x73a7,	// (0x000a4dc6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x73a7,	// (0x000a4dc6) hc_cl_list_double_graphic_heading_pane_g2

0x73bb,	// (0x000a4dda) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x73bb,	// (0x000a4dda) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x000ad4b6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x000ad4b6) hc_cl_list_double_graphic_heading_pane_g

0x73cf,	// (0x000a4dee) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x73cf,	// (0x000a4dee) hc_cl_list_double_graphic_heading_pane_t1

0x73e4,	// (0x000a4e03) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73e4,	// (0x000a4e03) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x000ad4bd) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x000ad4bd) hc_cl_list_double_graphic_heading_pane_t

0x7401,	// (0x000a4e20) vid4_progress_pane_g1

0x7411,	// (0x000a4e30) vid4_progress_pane_g2

0x7421,	// (0x000a4e40) vid4_progress_pane_g3

0x6260,	// (0x000a3c7f) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x000ad4c2) vid4_progress_pane_g

0x7433,	// (0x000a4e52) vid4_progress_pane_t1

0x7449,	// (0x000a4e68) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x000ad4cd) vid4_progress_pane_t

0x7473,	// (0x000a4e92) wait_bar_pane_cp07

0xcc2f,	// (0x000aa64e) blid_firmament_pane_ParamLimits

0xcc72,	// (0x000aa691) popup_blid_sat_info2_window_g1

0xcc96,	// (0x000aa6b5) popup_blid_sat_info2_window_t3

0xcca4,	// (0x000aa6c3) popup_blid_sat_info2_window_t4

0xccb2,	// (0x000aa6d1) popup_blid_sat_info2_window_t5

0xccc0,	// (0x000aa6df) popup_blid_sat_info2_window_t6

0xccd0,	// (0x000aa6ef) popup_blid_sat_info2_window_t7

0xccde,	// (0x000aa6fd) popup_blid_sat_info2_window_t8

0xccec,	// (0x000aa70b) popup_blid_sat_info2_window_t9

0xccfa,	// (0x000aa719) popup_blid_sat_info2_window_t10

0xcdc2,	// (0x000aa7e1) aid_firma_cardinal_ParamLimits

0xcdd6,	// (0x000aa7f5) blid_firmament_pane_t1_ParamLimits

0xcded,	// (0x000aa80c) blid_firmament_pane_t2_ParamLimits

0xce04,	// (0x000aa823) blid_firmament_pane_t3_ParamLimits

0xce1b,	// (0x000aa83a) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x000ad0d7) blid_firmament_pane_t_ParamLimits

0xce32,	// (0x000aa851) blid_sat_info_pane_ParamLimits

0x4097,	// (0x000a1ab6) main_cam_set_pane_ParamLimits

0x5691,	// (0x000a30b0) aid_size_cell_colour_35_ParamLimits

0x56ab,	// (0x000a30ca) aid_size_cell_colour_112_ParamLimits

0x56c2,	// (0x000a30e1) aid_size_cell_effect_ParamLimits

0xafad,	// (0x000a89cc) bg_tb_trans_pane_cp02_ParamLimits

0xb581,	// (0x000a8fa0) heading_imed_pane_ParamLimits

0x56dc,	// (0x000a30fb) listscroll_imed_pane_ParamLimits

0xc020,	// (0x000a9a3f) popup_call2_audio_first_window_g5_ParamLimits

0xc020,	// (0x000a9a3f) popup_call2_audio_first_window_g5

0x5e28,	// (0x000a3847) aid_size_touch_image3_arrow_left_ParamLimits

0x5e28,	// (0x000a3847) aid_size_touch_image3_arrow_left

0x5e3e,	// (0x000a385d) aid_size_touch_image3_arrow_right_ParamLimits

0x5e3e,	// (0x000a385d) aid_size_touch_image3_arrow_right

0x745e,	// (0x000a4e7d) vid4_progress_pane_t3

0x5980,	// (0x000a339f) main_hwr_training_symbol_option_pane_ParamLimits

0x5980,	// (0x000a339f) main_hwr_training_symbol_option_pane

0xd66e,	// (0x000ab08d) popup_hwr_training_preview_window_ParamLimits

0xd66e,	// (0x000ab08d) popup_hwr_training_preview_window

0x59e1,	// (0x000a3400) hwr_training_navi_pane_g5_ParamLimits

0x59e1,	// (0x000a3400) hwr_training_navi_pane_g5

0xd81a,	// (0x000ab239) popup_char_count_window

0x0d77,	// (0x0009e796) bg_popup_sub_pane_cp20_ParamLimits

0x6d81,	// (0x000a47a0) list_vitu2_match_list_pane_ParamLimits

0x6d8d,	// (0x000a47ac) vitu2_page_scroll_pane_ParamLimits

0x6d8d,	// (0x000a47ac) vitu2_page_scroll_pane

0xdcda,	// (0x000ab6f9) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdcda,	// (0x000ab6f9) list_single_hwr_training_symbol_option_pane

0xdced,	// (0x000ab70c) list_single_hwr_training_symbol_option_pane_g1

0xdcf5,	// (0x000ab714) list_single_hwr_training_symbol_option_pane_t1

0xdd03,	// (0x000ab722) bg_button_pane_cp023

0xdd0c,	// (0x000ab72b) bg_button_pane_cp024

0x74be,	// (0x000a4edd) vitu2_page_scroll_pane_g1

0x74c6,	// (0x000a4ee5) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x000ad4d4) vitu2_page_scroll_pane_g

0x74d0,	// (0x000a4eef) vitu2_page_scroll_pane_t1

0xd291,	// (0x000aacb0) popup_char_count_window_g1

0xdd3f,	// (0x000ab75e) popup_char_count_window_g2

0xd288,	// (0x000aaca7) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x000ad4d9) popup_char_count_window_g

0xdd48,	// (0x000ab767) popup_char_count_window_t1

0x0d91,	// (0x0009e7b0) main_vded2_pane

0xd361,	// (0x000aad80) aid_size_cell_imed_line

0xd36b,	// (0x000aad8a) grid_imed_line_width_pane

0x636c,	// (0x000a3d8b) vid4_indicators_pane_g4

0xdd56,	// (0x000ab775) cell_imed_line_width_pane_ParamLimits

0xdd56,	// (0x000ab775) cell_imed_line_width_pane

0xdd6c,	// (0x000ab78b) cell_imed_line_width_pane_g1

0xd29a,	// (0x000aacb9) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x000ad4e0) cell_imed_line_width_pane_g

0x74df,	// (0x000a4efe) main_vded2_pane_g1_ParamLimits

0x74df,	// (0x000a4efe) main_vded2_pane_g1

0x74ee,	// (0x000a4f0d) main_vded2_pane_g2_ParamLimits

0x74ee,	// (0x000a4f0d) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x000ad4e5) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x000ad4e5) main_vded2_pane_g

0x74fc,	// (0x000a4f1b) vded2_slider_pane_ParamLimits

0x74fc,	// (0x000a4f1b) vded2_slider_pane

0x7509,	// (0x000a4f28) aid_size_touch_vded2_end

0x7513,	// (0x000a4f32) aid_size_touch_vded2_playhead

0xdd75,	// (0x000ab794) aid_size_touch_vded2_start

0xdd7d,	// (0x000ab79c) vded2_slider_bg_pane

0xdd86,	// (0x000ab7a5) vded2_slider_pane_g1

0xdd8f,	// (0x000ab7ae) vded2_slider_pane_g2

0x751b,	// (0x000a4f3a) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x000ad4ea) vded2_slider_pane_g

0xd2a2,	// (0x000aacc1) vded2_slider_bg_pane_g1

0xd2ab,	// (0x000aacca) vded2_slider_bg_pane_g2

0xd2b4,	// (0x000aacd3) vded2_slider_bg_pane_g3

0x0002,

0xf788,	// (0x000ad1a7) vded2_slider_bg_pane_g

0x3963,	// (0x000a1382) aid_postcard_touch_down_pane_ParamLimits

0x3963,	// (0x000a1382) aid_postcard_touch_down_pane

0x3973,	// (0x000a1392) aid_postcard_touch_up_pane_ParamLimits

0x3973,	// (0x000a1392) aid_postcard_touch_up_pane

0x0d91,	// (0x0009e7b0) main_blid2_pane

0x40c0,	// (0x000a1adf) popup_blid2_search_window

0x9d8e,	// (0x000a77ad) blid2_gps_pane

0x9d8e,	// (0x000a77ad) blid2_navig_pane

0x9d8e,	// (0x000a77ad) blid2_search_pane

0x9d8e,	// (0x000a77ad) blid2_tripm_pane

0x7524,	// (0x000a4f43) blid2_search_pane_g1_ParamLimits

0x7524,	// (0x000a4f43) blid2_search_pane_g1

0x7530,	// (0x000a4f4f) blid2_search_pane_t1_ParamLimits

0x7530,	// (0x000a4f4f) blid2_search_pane_t1

0x7542,	// (0x000a4f61) aid_size_cell_blid2_gps_ParamLimits

0x7542,	// (0x000a4f61) aid_size_cell_blid2_gps

0x7552,	// (0x000a4f71) blid2_gps_pane_g1_ParamLimits

0x7552,	// (0x000a4f71) blid2_gps_pane_g1

0x755e,	// (0x000a4f7d) grid_blid2_satellite_pane_ParamLimits

0x755e,	// (0x000a4f7d) grid_blid2_satellite_pane

0x756c,	// (0x000a4f8b) blid2_navig_pane_g1_ParamLimits

0x756c,	// (0x000a4f8b) blid2_navig_pane_g1

0x7578,	// (0x000a4f97) blid2_navig_pane_t1_ParamLimits

0x7578,	// (0x000a4f97) blid2_navig_pane_t1

0x758a,	// (0x000a4fa9) blid2_navig_pane_t2_ParamLimits

0x758a,	// (0x000a4fa9) blid2_navig_pane_t2

0x0001,

0xfad2,	// (0x000ad4f1) blid2_navig_pane_t_ParamLimits

0xfad2,	// (0x000ad4f1) blid2_navig_pane_t

0x759c,	// (0x000a4fbb) blid2_navig_ring_pane_ParamLimits

0x759c,	// (0x000a4fbb) blid2_navig_ring_pane

0x75ac,	// (0x000a4fcb) blid2_speed_pane_ParamLimits

0x75ac,	// (0x000a4fcb) blid2_speed_pane

0x75b8,	// (0x000a4fd7) blid2_tripm_pane_g1_ParamLimits

0x75b8,	// (0x000a4fd7) blid2_tripm_pane_g1

0x75c8,	// (0x000a4fe7) blid2_tripm_pane_g2_ParamLimits

0x75c8,	// (0x000a4fe7) blid2_tripm_pane_g2

0x75d4,	// (0x000a4ff3) blid2_tripm_pane_g3_ParamLimits

0x75d4,	// (0x000a4ff3) blid2_tripm_pane_g3

0x75e0,	// (0x000a4fff) blid2_tripm_pane_g4_ParamLimits

0x75e0,	// (0x000a4fff) blid2_tripm_pane_g4

0x75ec,	// (0x000a500b) blid2_tripm_pane_g5_ParamLimits

0x75ec,	// (0x000a500b) blid2_tripm_pane_g5

0x0005,

0xfad7,	// (0x000ad4f6) blid2_tripm_pane_g_ParamLimits

0xfad7,	// (0x000ad4f6) blid2_tripm_pane_g

0x7608,	// (0x000a5027) blid2_tripm_pane_t1_ParamLimits

0x7608,	// (0x000a5027) blid2_tripm_pane_t1

0x761a,	// (0x000a5039) blid2_tripm_pane_t2_ParamLimits

0x761a,	// (0x000a5039) blid2_tripm_pane_t2

0x762c,	// (0x000a504b) blid2_tripm_pane_t3_ParamLimits

0x762c,	// (0x000a504b) blid2_tripm_pane_t3

0x0003,

0xfae4,	// (0x000ad503) blid2_tripm_pane_t_ParamLimits

0xfae4,	// (0x000ad503) blid2_tripm_pane_t

0x765e,	// (0x000a507d) cell_blid2_satellite_pane_ParamLimits

0x765e,	// (0x000a507d) cell_blid2_satellite_pane

0x767c,	// (0x000a509b) cell_blid2_satellite_pane_g1

0xddc4,	// (0x000ab7e3) cell_blid2_satellite_pane_t1

0xce42,	// (0x000aa861) blid2_speed_pane_g1

0xddd2,	// (0x000ab7f1) blid2_speed_pane_t1

0xdde0,	// (0x000ab7ff) blid2_speed_pane_t2

0x0001,

0xfaed,	// (0x000ad50c) blid2_speed_pane_t

0xce42,	// (0x000aa861) blid2_navig_ring_pane_g1

0x7685,	// (0x000a50a4) blid2_navig_ring_pane_g2

0x768d,	// (0x000a50ac) blid2_navig_ring_pane_g3

0x7695,	// (0x000a50b4) blid2_navig_ring_pane_g4

0x769d,	// (0x000a50bc) blid2_navig_ring_pane_g5

0x0004,

0xfaf2,	// (0x000ad511) blid2_navig_ring_pane_g

0x9d8e,	// (0x000a77ad) bg_popup_window_pane_cp011

0xddee,	// (0x000ab80d) popup_blid2_search_window_g1

0xddf6,	// (0x000ab815) popup_blid2_search_window_t1

0xde04,	// (0x000ab823) popup_blid2_search_window_t2

0x0001,

0xfafd,	// (0x000ad51c) popup_blid2_search_window_t

0xac8f,	// (0x000a86ae) main_browser_pane_g1

0xa500,	// (0x000a7f1f) main_browser_pane_ParamLimits

0x4097,	// (0x000a1ab6) bg_button_pane_cp011_ParamLimits

0x661a,	// (0x000a4039) cell_vitu2_function_pane_g1_ParamLimits

0xca0a,	// (0x000aa429) bg_popup_sub_pane_cp22_ParamLimits

0x6f8c,	// (0x000a49ab) input_focus_pane_cp08_ParamLimits

0x6fa3,	// (0x000a49c2) popup_vitu2_query_button_pane_ParamLimits

0x6fa3,	// (0x000a49c2) popup_vitu2_query_button_pane

0x6fb4,	// (0x000a49d3) popup_vitu2_query_input_button_pane

0xda91,	// (0x000ab4b0) popup_vitu2_query_window_g1_ParamLimits

0x6fbe,	// (0x000a49dd) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x000ad424) popup_vitu2_query_window_g_ParamLimits

0x9d8e,	// (0x000a77ad) bg_button_pane_cp026

0x76a5,	// (0x000a50c4) popup_vitu2_query_input_button_pane_g1

0x9d8e,	// (0x000a77ad) bg_button_pane_cp025

0xde12,	// (0x000ab831) popup_vitu2_query_button_pane_t1

0x4b3b,	// (0x000a255a) main_mp3_pane_t6

0x4b4b,	// (0x000a256a) popup_slider_window_cp01

0x6247,	// (0x000a3c66) cam4_battery_pane

0x6325,	// (0x000a3d44) cam4_battery_pane_cp02

0x73f9,	// (0x000a4e18) cam4_battery_pane_cp01

0x73f9,	// (0x000a4e18) cam4_battery_pane_cp03

0xddac,	// (0x000ab7cb) cam4_battery_pane_g1

0xce42,	// (0x000aa861) cam4_battery_pane_g2

0x0001,

0xfb02,	// (0x000ad521) cam4_battery_pane_g

0xcd08,	// (0x000aa727) popup_blid_sat_info2_window_t11

0xb40e,	// (0x000a8e2d) aid_size_touch_mv_arrow_left_ParamLimits

0xb439,	// (0x000a8e58) aid_size_touch_mv_arrow_right_ParamLimits

0xb497,	// (0x000a8eb6) navi_pane_g1_ParamLimits

0xb4a3,	// (0x000a8ec2) navi_pane_g2_ParamLimits

0xb4d1,	// (0x000a8ef0) navi_pane_g3_ParamLimits

0xf3ca,	// (0x000acde9) navi_pane_g_ParamLimits

0x3344,	// (0x000a0d63) navi_pane_mv_t1_ParamLimits

0x56e8,	// (0x000a3107) grid_imed_effect_pane_ParamLimits

0x1da8,	// (0x0009f7c7) aid_placing_vt_slider_lsc

0xabda,	// (0x000a85f9) aid_placing_vt_slider_prt

0xafad,	// (0x000a89cc) bg_tb_trans_pane_cp01_ParamLimits

0xcf89,	// (0x000aa9a8) popup_image_details_window_g1_ParamLimits

0xcf9c,	// (0x000aa9bb) popup_image_details_window_g2_ParamLimits

0xcfb1,	// (0x000aa9d0) popup_image_details_window_g3_ParamLimits

0xcfb1,	// (0x000aa9d0) popup_image_details_window_g3

0xf6fd,	// (0x000ad11c) popup_image_details_window_g_ParamLimits

0xcfc5,	// (0x000aa9e4) popup_image_details_window_t1_ParamLimits

0xcfd7,	// (0x000aa9f6) popup_image_details_window_t2_ParamLimits

0xcff0,	// (0x000aaa0f) popup_image_details_window_t3_ParamLimits

0xd004,	// (0x000aaa23) popup_image_details_window_t4_ParamLimits

0xd01f,	// (0x000aaa3e) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x000ad123) popup_image_details_window_t_ParamLimits

0x7325,	// (0x000a4d44) cl_header_name_pane_ParamLimits

0x7325,	// (0x000a4d44) cl_header_name_pane

0x76ad,	// (0x000a50cc) cl_header_name_pane_t1_ParamLimits

0x76ad,	// (0x000a50cc) cl_header_name_pane_t1

0x76c4,	// (0x000a50e3) cl_header_name_pane_t2_ParamLimits

0x76c4,	// (0x000a50e3) cl_header_name_pane_t2

0x76ee,	// (0x000a510d) cl_header_name_pane_t3_ParamLimits

0x76ee,	// (0x000a510d) cl_header_name_pane_t3

0x0002,

0xfb07,	// (0x000ad526) cl_header_name_pane_t_ParamLimits

0xfb07,	// (0x000ad526) cl_header_name_pane_t

0xb560,	// (0x000a8f7f) navi_pane_mv_g2_ParamLimits

0xd7e0,	// (0x000ab1ff) field_vitu2_entry_pane_g1_ParamLimits

0xd7ec,	// (0x000ab20b) field_vitu2_entry_pane_g2_ParamLimits

0xd7f8,	// (0x000ab217) field_vitu2_entry_pane_g3_ParamLimits

0xd7f8,	// (0x000ab217) field_vitu2_entry_pane_g3

0xf904,	// (0x000ad323) field_vitu2_entry_pane_g_ParamLimits

0x65ae,	// (0x000a3fcd) cell_vitu2_itu_pane_g1_ParamLimits

0x65c0,	// (0x000a3fdf) cell_vitu2_itu_pane_g2_ParamLimits

0x65c0,	// (0x000a3fdf) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x000ad32f) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x000ad32f) cell_vitu2_itu_pane_g

0x4097,	// (0x000a1ab6) bg_vkb2_func_pane_cp05_ParamLimits

0x4097,	// (0x000a1ab6) bg_vkb2_func_pane_cp05

0x4097,	// (0x000a1ab6) bg_vkb2_func_pane_cp03

0x4097,	// (0x000a1ab6) bg_vkb2_func_pane_cp04

0x4097,	// (0x000a1ab6) bg_vkb2_func_pane_cp10_ParamLimits

0x4097,	// (0x000a1ab6) bg_vkb2_func_pane_cp10

0x72c7,	// (0x000a4ce6) bg_vkb2_func_pane_cp08

0x72ad,	// (0x000a4ccc) bg_vkb2_func_pane_cp06

0x72bb,	// (0x000a4cda) bg_vkb2_func_pane_cp07

0xdd15,	// (0x000ab734) bg_vkb2_func_pane_cp11_ParamLimits

0xdd15,	// (0x000ab734) bg_vkb2_func_pane_cp11

0xdd2a,	// (0x000ab749) bg_vkb2_func_pane_cp12_ParamLimits

0xdd2a,	// (0x000ab749) bg_vkb2_func_pane_cp12

0x9d8e,	// (0x000a77ad) bg_vkb2_func_pane_cp09

0xd82c,	// (0x000ab24b) bg_vkb2_func_pane_g1

0xada0,	// (0x000a87bf) bg_vkb2_func_pane_g2

0xd834,	// (0x000ab253) bg_vkb2_func_pane_g3

0xd83c,	// (0x000ab25b) bg_vkb2_func_pane_g4

0xda56,	// (0x000ab475) bg_vkb2_func_pane_g5

0xd854,	// (0x000ab273) bg_vkb2_func_pane_g6

0xd85c,	// (0x000ab27b) bg_vkb2_func_pane_g7

0xd84c,	// (0x000ab26b) bg_vkb2_func_pane_g8

0xad80,	// (0x000a879f) bg_vkb2_func_pane_g9

0x0008,

0xfb0e,	// (0x000ad52d) bg_vkb2_func_pane_g

0x75fa,	// (0x000a5019) blid2_tripm_pane_g6_ParamLimits

0x75fa,	// (0x000a5019) blid2_tripm_pane_g6

0xd72c,	// (0x000ab14b) mp4_progress_pane_g1

0x7652,	// (0x000a5071) blid2_tripm_values_pane_ParamLimits

0x7652,	// (0x000a5071) blid2_tripm_values_pane

0x7713,	// (0x000a5132) blid2_tripm_values_pane_t1

0x7721,	// (0x000a5140) blid2_tripm_values_pane_t2

0x772f,	// (0x000a514e) blid2_tripm_values_pane_t3

0x773d,	// (0x000a515c) blid2_tripm_values_pane_t4

0x774b,	// (0x000a516a) blid2_tripm_values_pane_t5

0x7759,	// (0x000a5178) blid2_tripm_values_pane_t6

0x7767,	// (0x000a5186) blid2_tripm_values_pane_t7

0x7775,	// (0x000a5194) blid2_tripm_values_pane_t8

0x7783,	// (0x000a51a2) blid2_tripm_values_pane_t9

0x0008,

0xfb21,	// (0x000ad540) blid2_tripm_values_pane_t

0x1de6,	// (0x0009f805) call_video_pane_t1_ParamLimits

0x1e03,	// (0x0009f822) call_video_pane_t2_ParamLimits

0xf253,	// (0x000acc72) call_video_pane_t_ParamLimits

0x389f,	// (0x000a12be) msg_header_pane_g1_ParamLimits

0xb764,	// (0x000a9183) msg_header_pane_g2_ParamLimits

0xb764,	// (0x000a9183) msg_header_pane_g2

0x0001,

0xf46d,	// (0x000ace8c) msg_header_pane_g_ParamLimits

0xf46d,	// (0x000ace8c) msg_header_pane_g

0xa500,	// (0x000a7f1f) main_clock2_pane_ParamLimits

0x5461,	// (0x000a2e80) grid_clock2_toolbar_pane_ParamLimits

0x5461,	// (0x000a2e80) grid_clock2_toolbar_pane

0x5461,	// (0x000a2e80) listscroll_clock2_pane_ParamLimits

0x5461,	// (0x000a2e80) listscroll_clock2_pane

0x5510,	// (0x000a2f2f) main_clock2_pane_t3_ParamLimits

0x5510,	// (0x000a2f2f) main_clock2_pane_t3

0x5522,	// (0x000a2f41) main_clock2_pane_t4_ParamLimits

0x5522,	// (0x000a2f41) main_clock2_pane_t4

0xde20,	// (0x000ab83f) cell_clock2_toolbar_pane

0xde28,	// (0x000ab847) cell_clock2_toolbar_pane_cp01

0xde28,	// (0x000ab847) cell_clock2_toolbar_pane_cp02

0xde30,	// (0x000ab84f) cell_clock2_toolbar_pane_cp03

0xde38,	// (0x000ab857) list_clock2_pane

0xb393,	// (0x000a8db2) scroll_pane_cp10

0xde40,	// (0x000ab85f) list_single_clock2_pane_ParamLimits

0xde40,	// (0x000ab85f) list_single_clock2_pane

0xab43,	// (0x000a8562) list_highlight_pane_cp08

0xde4d,	// (0x000ab86c) list_single_clock2_pane_t1

0xde5b,	// (0x000ab87a) list_single_clock2_pane_t2

0x0001,

0xfb34,	// (0x000ad553) list_single_clock2_pane_t

0x9d8e,	// (0x000a77ad) bg_button_pane_cp10

0xde69,	// (0x000ab888) cell_clock2_toolbar_pane_g1

0x38c5,	// (0x000a12e4) aid_main_viewer_pane_g1_ParamLimits

0x38c5,	// (0x000a12e4) aid_main_viewer_pane_g1

0x38d1,	// (0x000a12f0) aid_main_viewer_pane_g2_ParamLimits

0x38d1,	// (0x000a12f0) aid_main_viewer_pane_g2

0x38dd,	// (0x000a12fc) aid_main_viewer_pane_g3_ParamLimits

0x38dd,	// (0x000a12fc) aid_main_viewer_pane_g3

0x38ee,	// (0x000a130d) aid_main_viewer_pane_g4_ParamLimits

0x38ee,	// (0x000a130d) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x000ace9d) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x000ace9d) aid_main_viewer_pane_g

0x4078,	// (0x000a1a97) main_calc_pane_ParamLimits

0x40a5,	// (0x000a1ac4) main_dialer2_pane_ParamLimits

0x0d91,	// (0x0009e7b0) main_cam6_pane

0x0d91,	// (0x0009e7b0) main_vid6_pane

0x546d,	// (0x000a2e8c) listscroll_gen_pane_cp06_ParamLimits

0x546d,	// (0x000a2e8c) listscroll_gen_pane_cp06

0x5534,	// (0x000a2f53) main_clock2_pane_t5_ParamLimits

0x5534,	// (0x000a2f53) main_clock2_pane_t5

0x5581,	// (0x000a2fa0) aid_call2_pane_cp10_ParamLimits

0x5593,	// (0x000a2fb2) aid_call_pane_cp10_ParamLimits

0xb402,	// (0x000a8e21) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb402,	// (0x000a8e21) popup_clock_analogue_window_cp10_g2_ParamLimits

0x55a5,	// (0x000a2fc4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x55a5,	// (0x000a2fc4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb402,	// (0x000a8e21) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x000ad1d8) popup_clock_analogue_window_cp10_g_ParamLimits

0x55bb,	// (0x000a2fda) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5dd5,	// (0x000a37f4) cell_dialer2_keypad_pane_g2_ParamLimits

0x5dd5,	// (0x000a37f4) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x000ad2c2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x000ad2c2) cell_dialer2_keypad_pane_g

0x5df1,	// (0x000a3810) cell_dialer2_keypad_pane_t1

0x68f7,	// (0x000a4316) main_cset_text2_pane_ParamLimits

0x68f7,	// (0x000a4316) main_cset_text2_pane

0xdc7d,	// (0x000ab69c) area_vitu2_query_pane_g1_ParamLimits

0x724c,	// (0x000a4c6b) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x000ad477) area_vitu2_query_pane_g_ParamLimits

0xa6c8,	// (0x000a80e7) area_vitu2_query_pane_t7_ParamLimits

0xa6c8,	// (0x000a80e7) area_vitu2_query_pane_t7

0x72ad,	// (0x000a4ccc) bg_button_pane_cp018_ParamLimits

0x72bb,	// (0x000a4cda) bg_button_pane_cp021_ParamLimits

0x72c7,	// (0x000a4ce6) bg_button_pane_cp022_ParamLimits

0x72c7,	// (0x000a4ce6) bg_vkb2_func_pane_cp08_ParamLimits

0x72ad,	// (0x000a4ccc) bg_vkb2_func_pane_cp06_ParamLimits

0x72bb,	// (0x000a4cda) bg_vkb2_func_pane_cp07_ParamLimits

0x72d8,	// (0x000a4cf7) input_focus_pane_cp09_ParamLimits

0x7791,	// (0x000a51b0) cam6_autofocus_pane_ParamLimits

0x7791,	// (0x000a51b0) cam6_autofocus_pane

0x77b3,	// (0x000a51d2) cam6_image_uncrop_pane_ParamLimits

0x77b3,	// (0x000a51d2) cam6_image_uncrop_pane

0x77e0,	// (0x000a51ff) cam6_indi_pane_ParamLimits

0x77e0,	// (0x000a51ff) cam6_indi_pane

0x77fa,	// (0x000a5219) cam6_mode_pane_ParamLimits

0x77fa,	// (0x000a5219) cam6_mode_pane

0x780e,	// (0x000a522d) cam6_timer_pane_ParamLimits

0x780e,	// (0x000a522d) cam6_timer_pane

0x781a,	// (0x000a5239) cam6_zoom_pane_ParamLimits

0x781a,	// (0x000a5239) cam6_zoom_pane

0x7836,	// (0x000a5255) cam6_mode_pane_g1_ParamLimits

0x7836,	// (0x000a5255) cam6_mode_pane_g1

0x7842,	// (0x000a5261) cam6_mode_pane_g2_ParamLimits

0x7842,	// (0x000a5261) cam6_mode_pane_g2

0x784e,	// (0x000a526d) cam6_mode_pane_g3_ParamLimits

0x784e,	// (0x000a526d) cam6_mode_pane_g3

0x785a,	// (0x000a5279) cam6_mode_pane_g4_ParamLimits

0x785a,	// (0x000a5279) cam6_mode_pane_g4

0x0003,

0xfb39,	// (0x000ad558) cam6_mode_pane_g_ParamLimits

0xfb39,	// (0x000ad558) cam6_mode_pane_g

0xddb6,	// (0x000ab7d5) bg_tb_trans_pane_cp08_ParamLimits

0xddb6,	// (0x000ab7d5) bg_tb_trans_pane_cp08

0xde71,	// (0x000ab890) cam6_battery_pane_ParamLimits

0xde71,	// (0x000ab890) cam6_battery_pane

0xde87,	// (0x000ab8a6) cam6_indi_pane_g1_ParamLimits

0xde87,	// (0x000ab8a6) cam6_indi_pane_g1

0xde99,	// (0x000ab8b8) cam6_indi_pane_g2_ParamLimits

0xde99,	// (0x000ab8b8) cam6_indi_pane_g2

0xdeab,	// (0x000ab8ca) cam6_indi_pane_g3_ParamLimits

0xdeab,	// (0x000ab8ca) cam6_indi_pane_g3

0x0002,

0xfb42,	// (0x000ad561) cam6_indi_pane_g_ParamLimits

0xfb42,	// (0x000ad561) cam6_indi_pane_g

0xdebd,	// (0x000ab8dc) cam6_indi_pane_t1_ParamLimits

0xdebd,	// (0x000ab8dc) cam6_indi_pane_t1

0x63a9,	// (0x000a3dc8) cam6_autofocus_pane_g1

0x63a1,	// (0x000a3dc0) cam6_autofocus_pane_g2

0x63b9,	// (0x000a3dd8) cam6_autofocus_pane_g3

0x63b1,	// (0x000a3dd0) cam6_autofocus_pane_g4

0x0003,

0xfb49,	// (0x000ad568) cam6_autofocus_pane_g

0xdee3,	// (0x000ab902) cam6_timer_pane_g1

0xdeeb,	// (0x000ab90a) cam6_timer_pane_t1

0xdef9,	// (0x000ab918) cam6_zoom_cont_pane

0xdf01,	// (0x000ab920) cam6_zoom_pane_g1

0xdf09,	// (0x000ab928) cam6_zoom_pane_g2

0x7866,	// (0x000a5285) cam6_zoom_pane_g3

0x0002,

0xfb52,	// (0x000ad571) cam6_zoom_pane_g

0xce42,	// (0x000aa861) cam6_battery_pane_g1

0xce42,	// (0x000aa861) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x000ad0e0) cam6_battery_pane_g

0xdf11,	// (0x000ab930) cam6_zoom_cont_pane_g1

0xdf1a,	// (0x000ab939) cam6_zoom_cont_pane_g2

0xdf23,	// (0x000ab942) cam6_zoom_cont_pane_g3

0x0002,

0xfb59,	// (0x000ad578) cam6_zoom_cont_pane_g

0x7883,	// (0x000a52a2) cam6_mode_pane_cp_ParamLimits

0x7883,	// (0x000a52a2) cam6_mode_pane_cp

0x7897,	// (0x000a52b6) cam6_zoom_pane_cp_ParamLimits

0x7897,	// (0x000a52b6) cam6_zoom_pane_cp

0x78b3,	// (0x000a52d2) vid6_image_uncrop_cif_pane_ParamLimits

0x78b3,	// (0x000a52d2) vid6_image_uncrop_cif_pane

0x78df,	// (0x000a52fe) vid6_image_uncrop_nhd_pane_ParamLimits

0x78df,	// (0x000a52fe) vid6_image_uncrop_nhd_pane

0x78fe,	// (0x000a531d) vid6_image_uncrop_vga_pane_ParamLimits

0x78fe,	// (0x000a531d) vid6_image_uncrop_vga_pane

0x791d,	// (0x000a533c) vid6_image_uncrop_wvga_pane_ParamLimits

0x791d,	// (0x000a533c) vid6_image_uncrop_wvga_pane

0x793c,	// (0x000a535b) vid6_indi_pane_ParamLimits

0x793c,	// (0x000a535b) vid6_indi_pane

0xddb6,	// (0x000ab7d5) bg_tb_trans_pane_cp09_ParamLimits

0xddb6,	// (0x000ab7d5) bg_tb_trans_pane_cp09

0xdf3b,	// (0x000ab95a) cam6_battery_pane_cp_ParamLimits

0xdf3b,	// (0x000ab95a) cam6_battery_pane_cp

0xdf47,	// (0x000ab966) vid6_indi_pane_g1_ParamLimits

0xdf47,	// (0x000ab966) vid6_indi_pane_g1

0xdf59,	// (0x000ab978) vid6_indi_pane_g2_ParamLimits

0xdf59,	// (0x000ab978) vid6_indi_pane_g2

0xdf6b,	// (0x000ab98a) vid6_indi_pane_g3_ParamLimits

0xdf6b,	// (0x000ab98a) vid6_indi_pane_g3

0xdf82,	// (0x000ab9a1) vid6_indi_pane_g4_ParamLimits

0xdf82,	// (0x000ab9a1) vid6_indi_pane_g4

0xdf99,	// (0x000ab9b8) vid6_indi_pane_g5_ParamLimits

0xdf99,	// (0x000ab9b8) vid6_indi_pane_g5

0x0004,

0xfb60,	// (0x000ad57f) vid6_indi_pane_g_ParamLimits

0xfb60,	// (0x000ad57f) vid6_indi_pane_g

0xdfb3,	// (0x000ab9d2) vid6_indi_pane_t1_ParamLimits

0xdfb3,	// (0x000ab9d2) vid6_indi_pane_t1

0xdfc9,	// (0x000ab9e8) vid6_indi_pane_t2_ParamLimits

0xdfc9,	// (0x000ab9e8) vid6_indi_pane_t2

0xdff1,	// (0x000aba10) vid6_indi_pane_t3_ParamLimits

0xdff1,	// (0x000aba10) vid6_indi_pane_t3

0xe019,	// (0x000aba38) vid6_indi_pane_t4_ParamLimits

0xe019,	// (0x000aba38) vid6_indi_pane_t4

0x0003,

0xfb6b,	// (0x000ad58a) vid6_indi_pane_t_ParamLimits

0xfb6b,	// (0x000ad58a) vid6_indi_pane_t

0xe03d,	// (0x000aba5c) wait_bar_pane_cp08

0x7961,	// (0x000a5380) main_cset_text2_pane_t1_ParamLimits

0x7961,	// (0x000a5380) main_cset_text2_pane_t1

0x786e,	// (0x000a528d) listscroll_gen_pane_cp06_t1_ParamLimits

0x786e,	// (0x000a528d) listscroll_gen_pane_cp06_t1

0x0d91,	// (0x0009e7b0) main_cam6_set_pane

0x6239,	// (0x000a3c58) bg_tb_trans_pane_cp06_ParamLimits

0x624f,	// (0x000a3c6e) cam4_indicators_pane_g1_ParamLimits

0x6260,	// (0x000a3c7f) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x000ad2ff) cam4_indicators_pane_g_ParamLimits

0x6278,	// (0x000a3c97) cam4_indicators_pane_t1_ParamLimits

0x4097,	// (0x000a1ab6) bg_tb_trans_pane_cp07_ParamLimits

0x632f,	// (0x000a3d4e) vid4_indicators_pane_g1_ParamLimits

0x6345,	// (0x000a3d64) vid4_indicators_pane_g2_ParamLimits

0x6359,	// (0x000a3d78) vid4_indicators_pane_g3_ParamLimits

0x636c,	// (0x000a3d8b) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x000ad311) vid4_indicators_pane_g_ParamLimits

0x638a,	// (0x000a3da9) vid4_indicators_pane_t1_ParamLimits

0x7401,	// (0x000a4e20) vid4_progress_pane_g1_ParamLimits

0x7411,	// (0x000a4e30) vid4_progress_pane_g2_ParamLimits

0x7421,	// (0x000a4e40) vid4_progress_pane_g3_ParamLimits

0x6260,	// (0x000a3c7f) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x000ad4c2) vid4_progress_pane_g_ParamLimits

0x7433,	// (0x000a4e52) vid4_progress_pane_t1_ParamLimits

0x7449,	// (0x000a4e68) vid4_progress_pane_t2_ParamLimits

0x745e,	// (0x000a4e7d) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x000ad4cd) vid4_progress_pane_t_ParamLimits

0x7473,	// (0x000a4e92) wait_bar_pane_cp07_ParamLimits

0x7988,	// (0x000a53a7) main_cam6_set_pane_g2_ParamLimits

0x7988,	// (0x000a53a7) main_cam6_set_pane_g2

0x7994,	// (0x000a53b3) main_cset6_listscroll_pane_ParamLimits

0x7994,	// (0x000a53b3) main_cset6_listscroll_pane

0x79c1,	// (0x000a53e0) main_cset6_slider_pane_ParamLimits

0x79c1,	// (0x000a53e0) main_cset6_slider_pane

0x79cd,	// (0x000a53ec) main_cset6_text2_pane_ParamLimits

0x79cd,	// (0x000a53ec) main_cset6_text2_pane

0xe04c,	// (0x000aba6b) main_cset6_text_pane

0xe054,	// (0x000aba73) main_cset_list_pane_copy1_ParamLimits

0xe054,	// (0x000aba73) main_cset_list_pane_copy1

0xe064,	// (0x000aba83) scroll_pane_cp028_copy1

0x79e0,	// (0x000a53ff) cset_list_set_pane_copy1

0x79f0,	// (0x000a540f) aid_position_infowindow_above_copy1

0x79f8,	// (0x000a5417) aid_position_infowindow_below_copy1

0x7a00,	// (0x000a541f) cset_list_set_pane_g1_copy1

0x7a08,	// (0x000a5427) cset_list_set_pane_g3_copy1_ParamLimits

0x7a08,	// (0x000a5427) cset_list_set_pane_g3_copy1

0x7a17,	// (0x000a5436) cset_list_set_pane_t1_copy1_ParamLimits

0x7a17,	// (0x000a5436) cset_list_set_pane_t1_copy1

0xafad,	// (0x000a89cc) list_highlight_pane_cp021_copy1_ParamLimits

0xafad,	// (0x000a89cc) list_highlight_pane_cp021_copy1

0xe06d,	// (0x000aba8c) cset6_slider_pane_ParamLimits

0xe06d,	// (0x000aba8c) cset6_slider_pane

0xe099,	// (0x000abab8) main_cset6_slider_pane_g1_ParamLimits

0xe099,	// (0x000abab8) main_cset6_slider_pane_g1

0x7a2c,	// (0x000a544b) main_cset6_slider_pane_g2_ParamLimits

0x7a2c,	// (0x000a544b) main_cset6_slider_pane_g2

0xe0c1,	// (0x000abae0) main_cset6_slider_pane_g3_ParamLimits

0xe0c1,	// (0x000abae0) main_cset6_slider_pane_g3

0x7a54,	// (0x000a5473) main_cset6_slider_pane_g4_ParamLimits

0x7a54,	// (0x000a5473) main_cset6_slider_pane_g4

0x7a60,	// (0x000a547f) main_cset6_slider_pane_g5_ParamLimits

0x7a60,	// (0x000a547f) main_cset6_slider_pane_g5

0xd95f,	// (0x000ab37e) main_cset6_slider_pane_g7_ParamLimits

0xd95f,	// (0x000ab37e) main_cset6_slider_pane_g7

0xd96b,	// (0x000ab38a) main_cset6_slider_pane_g8_ParamLimits

0xd96b,	// (0x000ab38a) main_cset6_slider_pane_g8

0x7a6c,	// (0x000a548b) main_cset6_slider_pane_g9_ParamLimits

0x7a6c,	// (0x000a548b) main_cset6_slider_pane_g9

0x7a78,	// (0x000a5497) main_cset6_slider_pane_g10_ParamLimits

0x7a78,	// (0x000a5497) main_cset6_slider_pane_g10

0x7a84,	// (0x000a54a3) main_cset6_slider_pane_g11_ParamLimits

0x7a84,	// (0x000a54a3) main_cset6_slider_pane_g11

0x7a90,	// (0x000a54af) main_cset6_slider_pane_g12_ParamLimits

0x7a90,	// (0x000a54af) main_cset6_slider_pane_g12

0x7a9c,	// (0x000a54bb) main_cset6_slider_pane_g13_ParamLimits

0x7a9c,	// (0x000a54bb) main_cset6_slider_pane_g13

0x7aa8,	// (0x000a54c7) main_cset6_slider_pane_g14_ParamLimits

0x7aa8,	// (0x000a54c7) main_cset6_slider_pane_g14

0x7ab4,	// (0x000a54d3) main_cset6_slider_pane_g15_ParamLimits

0x7ab4,	// (0x000a54d3) main_cset6_slider_pane_g15

0x7acc,	// (0x000a54eb) main_cset6_slider_pane_g16_ParamLimits

0x7acc,	// (0x000a54eb) main_cset6_slider_pane_g16

0x7ad8,	// (0x000a54f7) main_cset6_slider_pane_g17_ParamLimits

0x7ad8,	// (0x000a54f7) main_cset6_slider_pane_g17

0x0011,

0xfb74,	// (0x000ad593) main_cset6_slider_pane_g_ParamLimits

0xfb74,	// (0x000ad593) main_cset6_slider_pane_g

0xe0cd,	// (0x000abaec) main_cset6_slider_pane_t1_ParamLimits

0xe0cd,	// (0x000abaec) main_cset6_slider_pane_t1

0x7afc,	// (0x000a551b) main_cset6_slider_pane_t2_ParamLimits

0x7afc,	// (0x000a551b) main_cset6_slider_pane_t2

0x7b27,	// (0x000a5546) main_cset6_slider_pane_t3_ParamLimits

0x7b27,	// (0x000a5546) main_cset6_slider_pane_t3

0x7b52,	// (0x000a5571) main_cset6_slider_pane_t4_ParamLimits

0x7b52,	// (0x000a5571) main_cset6_slider_pane_t4

0x7b7d,	// (0x000a559c) main_cset6_slider_pane_t5_ParamLimits

0x7b7d,	// (0x000a559c) main_cset6_slider_pane_t5

0xe10e,	// (0x000abb2d) main_cset6_slider_pane_t7_ParamLimits

0xe10e,	// (0x000abb2d) main_cset6_slider_pane_t7

0x7ba8,	// (0x000a55c7) main_cset6_slider_pane_t8_ParamLimits

0x7ba8,	// (0x000a55c7) main_cset6_slider_pane_t8

0x7bcc,	// (0x000a55eb) main_cset6_slider_pane_t9_ParamLimits

0x7bcc,	// (0x000a55eb) main_cset6_slider_pane_t9

0x7bf0,	// (0x000a560f) main_cset6_slider_pane_t10_ParamLimits

0x7bf0,	// (0x000a560f) main_cset6_slider_pane_t10

0x7c14,	// (0x000a5633) main_cset6_slider_pane_t11_ParamLimits

0x7c14,	// (0x000a5633) main_cset6_slider_pane_t11

0xe144,	// (0x000abb63) main_cset6_slider_pane_t14_ParamLimits

0xe144,	// (0x000abb63) main_cset6_slider_pane_t14

0xe17d,	// (0x000abb9c) main_cset6_slider_pane_t15_ParamLimits

0xe17d,	// (0x000abb9c) main_cset6_slider_pane_t15

0x000b,

0xfb99,	// (0x000ad5b8) main_cset6_slider_pane_t_ParamLimits

0xfb99,	// (0x000ad5b8) main_cset6_slider_pane_t

0xe1b6,	// (0x000abbd5) cset_slider_pane_g1_copy1

0xe1bf,	// (0x000abbde) cset_slider_pane_g2_copy1

0xe1c8,	// (0x000abbe7) cset_slider_pane_g3_copy1

0x9d8e,	// (0x000a77ad) bg_popup_sub_pane_cp011_copy1

0xe1d1,	// (0x000abbf0) main_cset_text_pane_g1_copy1

0xdaa5,	// (0x000ab4c4) main_cset_text_pane_t1_copy1

0xdab3,	// (0x000ab4d2) main_cset_text_pane_t2_copy1

0xdac1,	// (0x000ab4e0) main_cset_text_pane_t3_copy1

0xdacf,	// (0x000ab4ee) main_cset_text_pane_t4_copy1

0xdadd,	// (0x000ab4fc) main_cset_text_pane_t5_copy1

0xe1d9,	// (0x000abbf8) main_cset_text_pane_t6_copy1

0xe1e7,	// (0x000abc06) main_cset_text_pane_t7_copy1

0x7d0e,	// (0x000a572d) main_cset_text2_pane_t1_copy1

0x4097,	// (0x000a1ab6) main_ncimui_pane

0x40fe,	// (0x000a1b1d) popup_query_ncimui_window_ParamLimits

0x40fe,	// (0x000a1b1d) popup_query_ncimui_window

0xafbb,	// (0x000a89da) field_cale_ev2_pane_g4_ParamLimits

0xafbb,	// (0x000a89da) field_cale_ev2_pane_g4

0x5aad,	// (0x000a34cc) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5aad,	// (0x000a34cc) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x000ad299) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x000ad299) cell_video_dialer_keypad_pane_g

0x5ac5,	// (0x000a34e4) cell_video_dialer_keypad_pane_t1

0x9d8e,	// (0x000a77ad) bg_popup_window_pane_cp012

0xb27f,	// (0x000a8c9e) heading_pane_cp06

0xe213,	// (0x000abc32) ncim_query_content_pane

0x9d8e,	// (0x000a77ad) bg_popup_heading_pane_cp01

0xe21b,	// (0x000abc3a) ncim_heading_pane_t1

0xe229,	// (0x000abc48) ncim_indicator_popup_pane

0xe23b,	// (0x000abc5a) ncim_query_button_pane

0xe251,	// (0x000abc70) ncim_query_content_pane_t1

0xe263,	// (0x000abc82) ncim_query_content_pane_t2

0x0005,

0xfbdd,	// (0x000ad5fc) ncim_query_content_pane_t

0xe29d,	// (0x000abcbc) ncim_query_list_pane

0xe2af,	// (0x000abcce) ncim_query_popup_pane

0xe229,	// (0x000abc48) ncim_indicator_popup_pane_ParamLimits

0x7e6a,	// (0x000a5889) ncim_query_content_pane_g1_ParamLimits

0x7e6a,	// (0x000a5889) ncim_query_content_pane_g1

0xe251,	// (0x000abc70) ncim_query_content_pane_t1_ParamLimits

0xe263,	// (0x000abc82) ncim_query_content_pane_t2_ParamLimits

0x7e76,	// (0x000a5895) ncim_query_content_pane_t3_ParamLimits

0x7e76,	// (0x000a5895) ncim_query_content_pane_t3

0x7e93,	// (0x000a58b2) ncim_query_content_pane_t4_ParamLimits

0x7e93,	// (0x000a58b2) ncim_query_content_pane_t4

0x7eb0,	// (0x000a58cf) ncim_query_content_pane_t5_ParamLimits

0x7eb0,	// (0x000a58cf) ncim_query_content_pane_t5

0xe275,	// (0x000abc94) ncim_query_content_pane_t6_ParamLimits

0xe275,	// (0x000abc94) ncim_query_content_pane_t6

0xfbdd,	// (0x000ad5fc) ncim_query_content_pane_t_ParamLimits

0xe29d,	// (0x000abcbc) ncim_query_list_pane_ParamLimits

0xe2af,	// (0x000abcce) ncim_query_popup_pane_ParamLimits

0xe2c3,	// (0x000abce2) wait_bar_pane_cp04

0x9d8e,	// (0x000a77ad) input_focus_pane_cp011

0xe2cb,	// (0x000abcea) ncim_query_popup_pane_t1

0xe2d9,	// (0x000abcf8) ncim_list_query_list_pane_ParamLimits

0xe2d9,	// (0x000abcf8) ncim_list_query_list_pane

0x9d8e,	// (0x000a77ad) bg_button_pane_cp027

0xe2ec,	// (0x000abd0b) ncim_query_button_pane_g1

0x9d8e,	// (0x000a77ad) list_highlight_pane_cp012

0xe2f6,	// (0x000abd15) ncim_list_query_list_pane_g1

0xe2fe,	// (0x000abd1d) ncim_list_query_list_pane_t1

0x626c,	// (0x000a3c8b) cam4_indicators_pane_g3_ParamLimits

0x626c,	// (0x000a3c8b) cam4_indicators_pane_g3

0x6378,	// (0x000a3d97) vid4_indicators_pane_g5_ParamLimits

0x6378,	// (0x000a3d97) vid4_indicators_pane_g5

0x626c,	// (0x000a3c8b) vid4_progress_pane_g5_ParamLimits

0x626c,	// (0x000a3c8b) vid4_progress_pane_g5

0x7d40,	// (0x000a575f) main_ncimui_pane_g1

0x7dac,	// (0x000a57cb) ncimui_group_query_pane_ParamLimits

0x7dac,	// (0x000a57cb) ncimui_group_query_pane

0x7e06,	// (0x000a5825) ncimui_list_pane_ParamLimits

0x7e06,	// (0x000a5825) ncimui_list_pane

0x7e2d,	// (0x000a584c) ncimui_text_pane_ParamLimits

0x7e2d,	// (0x000a584c) ncimui_text_pane

0x7ecd,	// (0x000a58ec) ncimui_text_pane_t1_ParamLimits

0x7ecd,	// (0x000a58ec) ncimui_text_pane_t1

0xe30c,	// (0x000abd2b) ncimui_list_single_graphic_pane_ParamLimits

0xe30c,	// (0x000abd2b) ncimui_list_single_graphic_pane

0x7eec,	// (0x000a590b) ncimui_query_pane_ParamLimits

0x7eec,	// (0x000a590b) ncimui_query_pane

0x9d8e,	// (0x000a77ad) list_highlight_pane_cp013

0xe31c,	// (0x000abd3b) ncim_list_query_list_pane_t1_copy1

0xe2f6,	// (0x000abd15) ncim_list_single_graphic_pane_g1

0x7eff,	// (0x000a591e) ncim_query_button_pane_cp01

0x7f0b,	// (0x000a592a) ncim_query_entry_pane_ParamLimits

0x7f0b,	// (0x000a592a) ncim_query_entry_pane

0x7f1e,	// (0x000a593d) ncimui_query_pane_g1

0x7f2a,	// (0x000a5949) ncimui_query_pane_t1_ParamLimits

0x7f2a,	// (0x000a5949) ncimui_query_pane_t1

0xafad,	// (0x000a89cc) input_focus_pane_cp012

0xe32a,	// (0x000abd49) ncim_query_entry_pane_t1

0xa500,	// (0x000a7f1f) main_im_pane_ParamLimits

0x4097,	// (0x000a1ab6) main_mobtv_pane_ParamLimits

0x4097,	// (0x000a1ab6) main_mobtv_pane

0x7ae4,	// (0x000a5503) main_cset6_slider_pane_g18_ParamLimits

0x7ae4,	// (0x000a5503) main_cset6_slider_pane_g18

0x7af0,	// (0x000a550f) main_cset6_slider_pane_g19_ParamLimits

0x7af0,	// (0x000a550f) main_cset6_slider_pane_g19

0xd7f8,	// (0x000ab217) bg_main_mobtv_pane_ParamLimits

0xd7f8,	// (0x000ab217) bg_main_mobtv_pane

0x7f43,	// (0x000a5962) main_mobtv_info_pane

0x7f4e,	// (0x000a596d) main_mobtv_loading_pane_ParamLimits

0x7f4e,	// (0x000a596d) main_mobtv_loading_pane

0xe33c,	// (0x000abd5b) main_mobtv_pg_channel_list_pane

0xe346,	// (0x000abd65) main_mobtv_pg_hdr_pane

0x7f5b,	// (0x000a597a) main_mobtv_programe_curr_pane_ParamLimits

0x7f5b,	// (0x000a597a) main_mobtv_programe_curr_pane

0x7f68,	// (0x000a5987) main_mobtv_programe_next_pane_ParamLimits

0x7f68,	// (0x000a5987) main_mobtv_programe_next_pane

0xe34f,	// (0x000abd6e) popup_mobtv_noti_window

0xce42,	// (0x000aa861) main_tv_pg_hdr_pane_g1

0xe359,	// (0x000abd78) main_tv_pg_hdr_pane_g2

0xe361,	// (0x000abd80) main_tv_pg_hdr_pane_g3

0xe369,	// (0x000abd88) main_tv_pg_hdr_pane_g4

0xe371,	// (0x000abd90) main_tv_pg_hdr_pane_g5

0xe37b,	// (0x000abd9a) main_tv_pg_hdr_pane_g6

0xe385,	// (0x000abda4) main_tv_pg_hdr_pane_g7

0xe38f,	// (0x000abdae) main_tv_pg_hdr_pane_g8

0xe399,	// (0x000abdb8) main_tv_pg_hdr_pane_g9

0xe3a3,	// (0x000abdc2) main_tv_pg_hdr_pane_g10

0xe3ad,	// (0x000abdcc) main_tv_pg_hdr_pane_g11

0x000a,

0xfbea,	// (0x000ad609) main_tv_pg_hdr_pane_g

0xe3b7,	// (0x000abdd6) main_tv_pg_hdr_pane_t1

0xe3c5,	// (0x000abde4) main_tv_pg_hdr_pane_t2

0xe3d3,	// (0x000abdf2) main_tv_pg_hdr_pane_t3

0xe3e3,	// (0x000abe02) main_tv_pg_hdr_pane_t4

0xe3f3,	// (0x000abe12) main_tv_pg_hdr_pane_t5

0x0004,

0xfc01,	// (0x000ad620) main_tv_pg_hdr_pane_t

0xe403,	// (0x000abe22) single_mobtv_pg_channel_pane_ParamLimits

0xe403,	// (0x000abe22) single_mobtv_pg_channel_pane

0xe415,	// (0x000abe34) single_mobtv_pg_channel_table_pane

0xe41e,	// (0x000abe3d) single_mobtv_pg_channel_thumb_pane

0xe427,	// (0x000abe46) single_tv_pg_channel_pane_g1

0xe430,	// (0x000abe4f) single_tv_pg_channel_pane_g2

0x0001,

0xfc0c,	// (0x000ad62b) single_tv_pg_channel_pane_g

0xd069,	// (0x000aaa88) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd069,	// (0x000aaa88) bg_single_mobtv_pg_channel_thumb_pane

0xe439,	// (0x000abe58) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe439,	// (0x000abe58) single_mobtv_pg_channel_thumb_pane_g1

0xe447,	// (0x000abe66) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe447,	// (0x000abe66) single_mobtv_pg_channel_thumb_pane_g2

0xe453,	// (0x000abe72) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe453,	// (0x000abe72) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc11,	// (0x000ad630) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc11,	// (0x000ad630) single_mobtv_pg_channel_thumb_pane_g

0xe45f,	// (0x000abe7e) single_mobtv_pg_channel_thumb_pane_t1

0xe46d,	// (0x000abe8c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc18,	// (0x000ad637) single_mobtv_pg_channel_thumb_pane_t

0xce42,	// (0x000aa861) bg_single_mobtv_pg_channel_table_pane_g1

0xce42,	// (0x000aa861) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x000ad0e0) bg_single_mobtv_pg_channel_table_pane_g

0xe47b,	// (0x000abe9a) single_mobtv_pg_channel_table_pane_t1

0xe489,	// (0x000abea8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc1d,	// (0x000ad63c) single_mobtv_pg_channel_table_pane_t

0x7f7d,	// (0x000a599c) main_mobtv_info_pane_g1_ParamLimits

0x7f7d,	// (0x000a599c) main_mobtv_info_pane_g1

0x7f99,	// (0x000a59b8) main_mobtv_info_pane_t1_ParamLimits

0x7f99,	// (0x000a59b8) main_mobtv_info_pane_t1

0x8011,	// (0x000a5a30) main_mobtv_info_pane_t2_ParamLimits

0x8011,	// (0x000a5a30) main_mobtv_info_pane_t2

0x0002,

0xfc27,	// (0x000ad646) main_mobtv_info_pane_t_ParamLimits

0xfc27,	// (0x000ad646) main_mobtv_info_pane_t

0x80a2,	// (0x000a5ac1) wait_bar_pane_cp05

0x80b4,	// (0x000a5ad3) main_mobtv_loading_pane_g1_ParamLimits

0x80b4,	// (0x000a5ad3) main_mobtv_loading_pane_g1

0x80c0,	// (0x000a5adf) main_mobtv_loading_pane_g2_ParamLimits

0x80c0,	// (0x000a5adf) main_mobtv_loading_pane_g2

0x80cc,	// (0x000a5aeb) main_mobtv_loading_pane_g3_ParamLimits

0x80cc,	// (0x000a5aeb) main_mobtv_loading_pane_g3

0x0002,

0xfc2e,	// (0x000ad64d) main_mobtv_loading_pane_g_ParamLimits

0xfc2e,	// (0x000ad64d) main_mobtv_loading_pane_g

0xe497,	// (0x000abeb6) main_mobtv_loading_pane_t1_ParamLimits

0xe497,	// (0x000abeb6) main_mobtv_loading_pane_t1

0xe4af,	// (0x000abece) main_mobtv_loading_pane_t2_ParamLimits

0xe4af,	// (0x000abece) main_mobtv_loading_pane_t2

0x0001,

0xfc35,	// (0x000ad654) main_mobtv_loading_pane_t_ParamLimits

0xfc35,	// (0x000ad654) main_mobtv_loading_pane_t

0x80da,	// (0x000a5af9) wait_bar_pane_cp06_ParamLimits

0x80da,	// (0x000a5af9) wait_bar_pane_cp06

0xe4d3,	// (0x000abef2) main_mobtv_programe_curr_pane_t1

0xe4e1,	// (0x000abf00) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc3a,	// (0x000ad659) main_mobtv_programe_curr_pane_t

0xe4ef,	// (0x000abf0e) main_mobtv_programe_next_pane_t1

0xe4fd,	// (0x000abf1c) main_mobtv_programe_next_pane_t2

0xe50b,	// (0x000abf2a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc3f,	// (0x000ad65e) main_mobtv_programe_next_pane_t

0x9d8e,	// (0x000a77ad) bg_popup_mobtv_noti_window_pane

0xe519,	// (0x000abf38) popup_mobtv_noti_window_g1

0xe521,	// (0x000abf40) popup_mobtv_noti_window_t1

0xe52f,	// (0x000abf4e) popup_mobtv_noti_window_t2

0x0001,

0xfc46,	// (0x000ad665) popup_mobtv_noti_window_t

0xce42,	// (0x000aa861) bg_popup_mobtv_noti_window_pane_g1

0x0d91,	// (0x0009e7b0) sc_clock_pane

0x0d91,	// (0x0009e7b0) main_fs_bigclock_pane

0x7640,	// (0x000a505f) blid2_tripm_pane_t4_ParamLimits

0x7640,	// (0x000a505f) blid2_tripm_pane_t4

0x80e6,	// (0x000a5b05) sc_clock_pane_g1_ParamLimits

0x80e6,	// (0x000a5b05) sc_clock_pane_g1

0x80f4,	// (0x000a5b13) sc_clock_pane_t1_ParamLimits

0x80f4,	// (0x000a5b13) sc_clock_pane_t1

0x8109,	// (0x000a5b28) sc_clock_pane_t2_ParamLimits

0x8109,	// (0x000a5b28) sc_clock_pane_t2

0x811b,	// (0x000a5b3a) sc_clock_pane_t3_ParamLimits

0x811b,	// (0x000a5b3a) sc_clock_pane_t3

0x0004,

0xfc4b,	// (0x000ad66a) sc_clock_pane_t_ParamLimits

0xfc4b,	// (0x000ad66a) sc_clock_pane_t

0x91ff,	// (0x000a6c1e) main_fs_bigclock_indicator_pane_ParamLimits

0x91ff,	// (0x000a6c1e) main_fs_bigclock_indicator_pane

0x81aa,	// (0x000a5bc9) main_fs_bigclock_pane_g1_ParamLimits

0x81aa,	// (0x000a5bc9) main_fs_bigclock_pane_g1

0x920b,	// (0x000a6c2a) main_fs_bigclock_pane_t1_ParamLimits

0x920b,	// (0x000a6c2a) main_fs_bigclock_pane_t1

0x921d,	// (0x000a6c3c) main_fs_bigclock_pane_t2_ParamLimits

0x921d,	// (0x000a6c3c) main_fs_bigclock_pane_t2

0x9231,	// (0x000a6c50) main_fs_bigclock_pane_t3_ParamLimits

0x9231,	// (0x000a6c50) main_fs_bigclock_pane_t3

0x0002,

0xfe59,	// (0x000ad878) main_fs_bigclock_pane_t_ParamLimits

0xfe59,	// (0x000ad878) main_fs_bigclock_pane_t

0xec89,	// (0x000ac6a8) main_fs_bigclock_indicator_pane_g1

0xe243,	// (0x000abc62) ncim_query_content_pane_g2_ParamLimits

0xe243,	// (0x000abc62) ncim_query_content_pane_g2

0x0001,

0xfbd8,	// (0x000ad5f7) ncim_query_content_pane_g_ParamLimits

0xfbd8,	// (0x000ad5f7) ncim_query_content_pane_g

0x812d,	// (0x000a5b4c) sc_clock_pane_t4_ParamLimits

0x812d,	// (0x000a5b4c) sc_clock_pane_t4

0x4097,	// (0x000a1ab6) main_radioblah_pane

0x6102,	// (0x000a3b21) cell_call4_button_pane_t1_copy1_ParamLimits

0x6102,	// (0x000a3b21) cell_call4_button_pane_t1_copy1

0x7d5c,	// (0x000a577b) main_ncimui_pane_t1_ParamLimits

0x7d5c,	// (0x000a577b) main_ncimui_pane_t1

0x7d76,	// (0x000a5795) main_ncimui_pane_t2_ParamLimits

0x7d76,	// (0x000a5795) main_ncimui_pane_t2

0x0002,

0xfbd1,	// (0x000ad5f0) main_ncimui_pane_t_ParamLimits

0xfbd1,	// (0x000ad5f0) main_ncimui_pane_t

0xe53d,	// (0x000abf5c) main_radioblah_anim_pane_ParamLimits

0xe53d,	// (0x000abf5c) main_radioblah_anim_pane

0xe54e,	// (0x000abf6d) main_radioblah_info_pane_ParamLimits

0xe54e,	// (0x000abf6d) main_radioblah_info_pane

0xe562,	// (0x000abf81) main_radioblah_pane_t1_ParamLimits

0xe562,	// (0x000abf81) main_radioblah_pane_t1

0xe57e,	// (0x000abf9d) main_radioblah_pane_t2_ParamLimits

0xe57e,	// (0x000abf9d) main_radioblah_pane_t2

0x0003,

0xfc6c,	// (0x000ad68b) main_radioblah_pane_t_ParamLimits

0xfc6c,	// (0x000ad68b) main_radioblah_pane_t

0x8349,	// (0x000a5d68) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8349,	// (0x000a5d68) main_radioblah_rocker_ctrl_pane

0xe5c6,	// (0x000abfe5) main_radioblah_info_pane_t1_ParamLimits

0xe5c6,	// (0x000abfe5) main_radioblah_info_pane_t1

0x8392,	// (0x000a5db1) main_radioblah_info_pane_t2_ParamLimits

0x8392,	// (0x000a5db1) main_radioblah_info_pane_t2

0x0003,

0xfc75,	// (0x000ad694) main_radioblah_info_pane_t_ParamLimits

0xfc75,	// (0x000ad694) main_radioblah_info_pane_t

0xce42,	// (0x000aa861) main_radioblah_rocker_ctrl_pane_g1

0x8442,	// (0x000a5e61) main_radioblah_rocker_ctrl_pane_g2

0x844a,	// (0x000a5e69) main_radioblah_rocker_ctrl_pane_g3

0x8452,	// (0x000a5e71) main_radioblah_rocker_ctrl_pane_g4

0x845a,	// (0x000a5e79) main_radioblah_rocker_ctrl_pane_g5

0x8462,	// (0x000a5e81) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc7e,	// (0x000ad69d) main_radioblah_rocker_ctrl_pane_g

0x7d0e,	// (0x000a572d) main_cset_text2_pane_t1_copy1_ParamLimits

0x618b,	// (0x000a3baa) cam4_image_uncrop_qvga_pane

0x62de,	// (0x000a3cfd) vid4_image_uncrop_qcif_pane

0x77d2,	// (0x000a51f1) cam6_image_uncrop_qvga_pane_ParamLimits

0x77d2,	// (0x000a51f1) cam6_image_uncrop_qvga_pane

0xdf2b,	// (0x000ab94a) vid6_image_uncrop_qcif_pane_ParamLimits

0xdf2b,	// (0x000ab94a) vid6_image_uncrop_qcif_pane

0x9d8e,	// (0x000a77ad) bg_popup_preview_window_pane_cp03

0xe1f5,	// (0x000abc14) list_cset_text2_pane

0xe1fd,	// (0x000abc1c) main_cset6_text2_pane_g1

0xe205,	// (0x000abc24) main_cset6_text2_pane_t1

0x846a,	// (0x000a5e89) list_cset_text2_pane_t1_ParamLimits

0x846a,	// (0x000a5e89) list_cset_text2_pane_t1

0x4097,	// (0x000a1ab6) main_radioblah_pane_ParamLimits

0x808e,	// (0x000a5aad) main_mobtv_info_pane_t3_ParamLimits

0x808e,	// (0x000a5aad) main_mobtv_info_pane_t3

0x8337,	// (0x000a5d56) main_radioblah_pane_g1

0x8362,	// (0x000a5d81) main_radioblah_info_pane_g1

0x83e7,	// (0x000a5e06) main_radioblah_info_pane_t3_ParamLimits

0x83e7,	// (0x000a5e06) main_radioblah_info_pane_t3

0x2dae,	// (0x000a07cd) highlight_cell_cale_month_pane_ParamLimits

0x2dae,	// (0x000a07cd) highlight_cell_cale_month_pane

0x0d91,	// (0x0009e7b0) main_phob_fisheye_pane

0xd145,	// (0x000aab64) scroll_pane_cp0031_ParamLimits

0xd145,	// (0x000aab64) scroll_pane_cp0031

0xe03d,	// (0x000aba5c) wait_bar_pane_cp08_ParamLimits

0x79e0,	// (0x000a53ff) cset_list_set_pane_copy1_ParamLimits

0xe600,	// (0x000ac01f) highlight_cell_cale_month_pane_g1

0x8481,	// (0x000a5ea0) highlight_cell_cale_month_pane_t1

0xdcd1,	// (0x000ab6f0) list_gen_pane_cp01

0xd94a,	// (0x000ab369) scroll_pane_01

0x848f,	// (0x000a5eae) list_single_double_fisheye_pane

0x8498,	// (0x000a5eb7) list_double_fisheye_pane_g1_ParamLimits

0x8498,	// (0x000a5eb7) list_double_fisheye_pane_g1

0x84a4,	// (0x000a5ec3) list_double_fisheye_pane_g2_ParamLimits

0x84a4,	// (0x000a5ec3) list_double_fisheye_pane_g2

0x84b8,	// (0x000a5ed7) list_double_fisheye_pane_g3_ParamLimits

0x84b8,	// (0x000a5ed7) list_double_fisheye_pane_g3

0x0004,

0xfc8b,	// (0x000ad6aa) list_double_fisheye_pane_g_ParamLimits

0xfc8b,	// (0x000ad6aa) list_double_fisheye_pane_g

0x84e1,	// (0x000a5f00) list_double_fisheye_pane_t1_ParamLimits

0x84e1,	// (0x000a5f00) list_double_fisheye_pane_t1

0x84fc,	// (0x000a5f1b) list_double_fisheye_pane_t2_ParamLimits

0x84fc,	// (0x000a5f1b) list_double_fisheye_pane_t2

0x0001,

0xfc96,	// (0x000ad6b5) list_double_fisheye_pane_t_ParamLimits

0xfc96,	// (0x000ad6b5) list_double_fisheye_pane_t

0x0d91,	// (0x0009e7b0) main_call5_pane

0x8153,	// (0x000a5b72) sc_swipe_pane_ParamLimits

0x8153,	// (0x000a5b72) sc_swipe_pane

0x852a,	// (0x000a5f49) call5_image_pane_ParamLimits

0x852a,	// (0x000a5f49) call5_image_pane

0x853c,	// (0x000a5f5b) call5_swipe_1_pane_ParamLimits

0x853c,	// (0x000a5f5b) call5_swipe_1_pane

0x8548,	// (0x000a5f67) call5_swipe_2_pane_ParamLimits

0x8548,	// (0x000a5f67) call5_swipe_2_pane

0x8562,	// (0x000a5f81) popup_call5_audio_first_window_ParamLimits

0x8562,	// (0x000a5f81) popup_call5_audio_first_window

0xd069,	// (0x000aaa88) call5_swipe_1_pane_g1_ParamLimits

0xd069,	// (0x000aaa88) call5_swipe_1_pane_g1

0xe608,	// (0x000ac027) call5_swipe_1_pane_g2_ParamLimits

0xe608,	// (0x000ac027) call5_swipe_1_pane_g2

0x0001,

0xfc9b,	// (0x000ad6ba) call5_swipe_1_pane_g_ParamLimits

0xfc9b,	// (0x000ad6ba) call5_swipe_1_pane_g

0xe614,	// (0x000ac033) call5_swipe_1_pane_t1_ParamLimits

0xe614,	// (0x000ac033) call5_swipe_1_pane_t1

0xd069,	// (0x000aaa88) call5_swipe_2_pane_g1_ParamLimits

0xd069,	// (0x000aaa88) call5_swipe_2_pane_g1

0xe629,	// (0x000ac048) call5_swipe_2_pane_g2_ParamLimits

0xe629,	// (0x000ac048) call5_swipe_2_pane_g2

0x0001,

0xfca0,	// (0x000ad6bf) call5_swipe_2_pane_g_ParamLimits

0xfca0,	// (0x000ad6bf) call5_swipe_2_pane_g

0xe635,	// (0x000ac054) call5_swipe_2_pane_t1_ParamLimits

0xe635,	// (0x000ac054) call5_swipe_2_pane_t1

0xe64a,	// (0x000ac069) sc_swipe_pane_g1_ParamLimits

0xe64a,	// (0x000ac069) sc_swipe_pane_g1

0xe657,	// (0x000ac076) sc_swipe_pane_g2_ParamLimits

0xe657,	// (0x000ac076) sc_swipe_pane_g2

0x0001,

0xfca5,	// (0x000ad6c4) sc_swipe_pane_g_ParamLimits

0xfca5,	// (0x000ad6c4) sc_swipe_pane_g

0xe663,	// (0x000ac082) sc_swipe_pane_t1_ParamLimits

0xe663,	// (0x000ac082) sc_swipe_pane_t1

0x0d91,	// (0x0009e7b0) main_cmail_launcher_pane

0x8572,	// (0x000a5f91) aid_size_cell_cmail_l_ParamLimits

0x8572,	// (0x000a5f91) aid_size_cell_cmail_l

0x8580,	// (0x000a5f9f) grid_cmail_l_pane_ParamLimits

0x8580,	// (0x000a5f9f) grid_cmail_l_pane

0x8590,	// (0x000a5faf) cell_cmail_l_pane_ParamLimits

0x8590,	// (0x000a5faf) cell_cmail_l_pane

0xe678,	// (0x000ac097) cell_cmail_l_pane_g1_ParamLimits

0xe678,	// (0x000ac097) cell_cmail_l_pane_g1

0xe684,	// (0x000ac0a3) cell_cmail_l_pane_t1_ParamLimits

0xe684,	// (0x000ac0a3) cell_cmail_l_pane_t1

0xe69a,	// (0x000ac0b9) cell_cmail_l_pane_t2_ParamLimits

0xe69a,	// (0x000ac0b9) cell_cmail_l_pane_t2

0x0001,

0xfcaa,	// (0x000ad6c9) cell_cmail_l_pane_t_ParamLimits

0xfcaa,	// (0x000ad6c9) cell_cmail_l_pane_t

0xafad,	// (0x000a89cc) grid_highlight_pane_cp018_ParamLimits

0xafad,	// (0x000a89cc) grid_highlight_pane_cp018

0x0be4,	// (0x0009e603) main2_pane_ParamLimits

0x0be4,	// (0x0009e603) main2_pane

0xa599,	// (0x000a7fb8) popup_sp_fs_action_menu_bg_pane_g1

0xa5a1,	// (0x000a7fc0) popup_sp_fs_action_menu_bg_pane_g2

0xaa44,	// (0x000a8463) popup_sp_fs_action_menu_bg_pane_g3

0xaa4c,	// (0x000a846b) popup_sp_fs_action_menu_bg_pane_g4

0xaa54,	// (0x000a8473) popup_sp_fs_action_menu_bg_pane_g5

0xaa5c,	// (0x000a847b) popup_sp_fs_action_menu_bg_pane_g6

0xaa64,	// (0x000a8483) popup_sp_fs_action_menu_bg_pane_g7

0xaa6c,	// (0x000a848b) popup_sp_fs_action_menu_bg_pane_g8

0xaa74,	// (0x000a8493) popup_sp_fs_action_menu_bg_pane_g9

0xaa7c,	// (0x000a849b) popup_sp_fs_action_menu_bg_pane_g10

0xaa7c,	// (0x000a849b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x000acb8e) popup_sp_fs_action_menu_bg_pane_g

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t3_g3_g1

0x1c4b,	// (0x0009f66a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1c4b,	// (0x0009f66a) list_medium_line_x2_t3_g3_g2

0x1c57,	// (0x0009f676) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1c57,	// (0x0009f676) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x000acc3c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x000acc3c) list_medium_line_x2_t3_g3_g

0x1c63,	// (0x0009f682) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1c63,	// (0x0009f682) list_medium_line_x2_t3_g3_t1

0x1c78,	// (0x0009f697) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1c78,	// (0x0009f697) list_medium_line_x2_t3_g3_t2

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x000acc43) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x000acc43) list_medium_line_x2_t3_g3_t

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t3_g2_g1

0x1c57,	// (0x0009f676) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1c57,	// (0x0009f676) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x000acc4a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x000acc4a) list_medium_line_x2_t3_g2_g

0x1c9f,	// (0x0009f6be) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1c9f,	// (0x0009f6be) list_medium_line_x2_t3_g2_t1

0x1cb5,	// (0x0009f6d4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1cb5,	// (0x0009f6d4) list_medium_line_x2_t3_g2_t2

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x000acc4f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x000acc4f) list_medium_line_x2_t3_g2_t

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t4_g4_g1

0x1cc7,	// (0x0009f6e6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1cc7,	// (0x0009f6e6) list_medium_line_x2_t4_g4_g2

0x1c4b,	// (0x0009f66a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1c4b,	// (0x0009f66a) list_medium_line_x2_t4_g4_g3

0x1cd3,	// (0x0009f6f2) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1cd3,	// (0x0009f6f2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x000acc56) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x000acc56) list_medium_line_x2_t4_g4_g

0x1cdf,	// (0x0009f6fe) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1cdf,	// (0x0009f6fe) list_medium_line_x2_t4_g4_t1

0x1cf9,	// (0x0009f718) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1cf9,	// (0x0009f718) list_medium_line_x2_t4_g4_t2

0x1d0f,	// (0x0009f72e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1d0f,	// (0x0009f72e) list_medium_line_x2_t4_g4_t3

0x1d24,	// (0x0009f743) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d24,	// (0x0009f743) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x000acc5f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x000acc5f) list_medium_line_x2_t4_g4_t

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t2_g4_g1

0x1cc7,	// (0x0009f6e6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1cc7,	// (0x0009f6e6) list_medium_line_x2_t2_g4_g2

0x1c4b,	// (0x0009f66a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1c4b,	// (0x0009f66a) list_medium_line_x2_t2_g4_g3

0x1c57,	// (0x0009f676) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1c57,	// (0x0009f676) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x000accc6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x000accc6) list_medium_line_x2_t2_g4_g

0x2dd4,	// (0x000a07f3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2dd4,	// (0x000a07f3) list_medium_line_x2_t2_g4_t1

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x000acccf) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x000acccf) list_medium_line_x2_t2_g4_t

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t2_g3_g1

0x1c4b,	// (0x0009f66a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1c4b,	// (0x0009f66a) list_medium_line_x2_t2_g3_g2

0x1c57,	// (0x0009f676) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1c57,	// (0x0009f676) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x000acc3c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x000acc3c) list_medium_line_x2_t2_g3_g

0x2de9,	// (0x000a0808) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2de9,	// (0x000a0808) list_medium_line_x2_t2_g3_t1

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x000accd4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x000accd4) list_medium_line_x2_t2_g3_t

0x2f81,	// (0x000a09a0) main_sp_fs_list_pane_ParamLimits

0x2f81,	// (0x000a09a0) main_sp_fs_list_pane

0x2f8d,	// (0x000a09ac) sp_fs_scroll_pane_ParamLimits

0x2f8d,	// (0x000a09ac) sp_fs_scroll_pane

0x2f99,	// (0x000a09b8) list_medium_line_x2_t3_t1

0x2fa9,	// (0x000a09c8) list_medium_line_x2_t3_t2

0x2fb7,	// (0x000a09d6) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x000acd1f) list_medium_line_x2_t3_t

0x2fc5,	// (0x000a09e4) list_medium_line_x3_t4_t1

0x2fd5,	// (0x000a09f4) list_medium_line_x3_t4_t2

0x2fe3,	// (0x000a0a02) list_medium_line_x3_t4_t3

0x2fb7,	// (0x000a09d6) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x000acd26) list_medium_line_x3_t4_t

0x2ff1,	// (0x000a0a10) list_medium_line_x4_t5_t1

0x3001,	// (0x000a0a20) list_medium_line_x4_t5_t2

0x2fe3,	// (0x000a0a02) list_medium_line_x4_t5_t3

0x300f,	// (0x000a0a2e) list_medium_line_x4_t5_t4

0x2fb7,	// (0x000a09d6) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x000acd2f) list_medium_line_x4_t5_t

0x1c3f,	// (0x0009f65e) list_medium_line_t4_g4_g1_ParamLimits

0x1c3f,	// (0x0009f65e) list_medium_line_t4_g4_g1

0x1cd3,	// (0x0009f6f2) list_medium_line_t4_g4_g2_ParamLimits

0x1cd3,	// (0x0009f6f2) list_medium_line_t4_g4_g2

0x301d,	// (0x000a0a3c) list_medium_line_t4_g4_g3_ParamLimits

0x301d,	// (0x000a0a3c) list_medium_line_t4_g4_g3

0x1c57,	// (0x0009f676) list_medium_line_t4_g4_g4_ParamLimits

0x1c57,	// (0x0009f676) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x000acd3a) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x000acd3a) list_medium_line_t4_g4_g

0x3029,	// (0x000a0a48) list_medium_line_t4_g4_t1_ParamLimits

0x3029,	// (0x000a0a48) list_medium_line_t4_g4_t1

0x303e,	// (0x000a0a5d) list_medium_line_t4_g4_t2_ParamLimits

0x303e,	// (0x000a0a5d) list_medium_line_t4_g4_t2

0x3053,	// (0x000a0a72) list_medium_line_t4_g4_t3_ParamLimits

0x3053,	// (0x000a0a72) list_medium_line_t4_g4_t3

0x1c8a,	// (0x0009f6a9) list_medium_line_t4_g4_t4_ParamLimits

0x1c8a,	// (0x0009f6a9) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x000acd43) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x000acd43) list_medium_line_t4_g4_t

0x317b,	// (0x000a0b9a) chi_dic_find_pane_g1

0x40b3,	// (0x000a1ad2) main_tport_pane

0x6ccf,	// (0x000a46ee) list_medium_line_plain_t1

0x6db9,	// (0x000a47d8) list_medium_line_t2_g2_g1_ParamLimits

0x6db9,	// (0x000a47d8) list_medium_line_t2_g2_g1

0x6dc5,	// (0x000a47e4) list_medium_line_t2_g2_g2_ParamLimits

0x6dc5,	// (0x000a47e4) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x000ad408) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x000ad408) list_medium_line_t2_g2_g

0x6dd1,	// (0x000a47f0) list_medium_line_t2_g2_t1_ParamLimits

0x6dd1,	// (0x000a47f0) list_medium_line_t2_g2_t1

0x6deb,	// (0x000a480a) list_medium_line_t2_g2_t2_ParamLimits

0x6deb,	// (0x000a480a) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x000ad40d) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x000ad40d) list_medium_line_t2_g2_t

0xa6ec,	// (0x000a810b) aid_sp_fs_list_icon_a_sm

0xafc7,	// (0x000a89e6) aid_sp_fs_list_icon_d

0xc72d,	// (0x000aa14c) aid_sp_fs_text_primary

0xc736,	// (0x000aa155) aid_sp_fs_text_secondary

0x7486,	// (0x000a4ea5) list_medium_line

0x7486,	// (0x000a4ea5) list_medium_line_g2

0x7486,	// (0x000a4ea5) list_medium_line_g3

0x7486,	// (0x000a4ea5) list_medium_line_plain

0x7486,	// (0x000a4ea5) list_medium_line_plain_t2

0x7486,	// (0x000a4ea5) list_medium_line_plain_t3

0x7486,	// (0x000a4ea5) list_medium_line_right_icon

0x7486,	// (0x000a4ea5) list_medium_line_right_iconx2

0x7486,	// (0x000a4ea5) list_medium_line_t2

0x7486,	// (0x000a4ea5) list_medium_line_t2_g2

0x7486,	// (0x000a4ea5) list_medium_line_t2_g3

0x7486,	// (0x000a4ea5) list_medium_line_t2_right_icon

0x7486,	// (0x000a4ea5) list_medium_line_t2_right_iconx2

0x7486,	// (0x000a4ea5) list_medium_line_t3

0x7486,	// (0x000a4ea5) list_medium_line_t3_g2

0x7486,	// (0x000a4ea5) list_medium_line_t3_g3

0x7486,	// (0x000a4ea5) list_medium_line_t3_right_iconx2

0x748f,	// (0x000a4eae) list_medium_line_t4_g4

0x7498,	// (0x000a4eb7) list_medium_line_x2

0x7498,	// (0x000a4eb7) list_medium_line_x2_t2_g2

0x7498,	// (0x000a4eb7) list_medium_line_x2_t2_g3

0x7498,	// (0x000a4eb7) list_medium_line_x2_t2_g4

0x7498,	// (0x000a4eb7) list_medium_line_x2_t3

0x7498,	// (0x000a4eb7) list_medium_line_x2_t3_g2

0x7498,	// (0x000a4eb7) list_medium_line_x2_t3_g3

0x7498,	// (0x000a4eb7) list_medium_line_x2_t3_g4

0x7498,	// (0x000a4eb7) list_medium_line_x2_t4_g2

0x7498,	// (0x000a4eb7) list_medium_line_x2_t4_g4

0x74a1,	// (0x000a4ec0) list_medium_line_x3

0x74a1,	// (0x000a4ec0) list_medium_line_x3_t4

0x74a1,	// (0x000a4ec0) list_medium_line_x3_t4_g4

0x748f,	// (0x000a4eae) list_medium_line_x4_t4

0x748f,	// (0x000a4eae) list_medium_line_x4_t4_g7

0x748f,	// (0x000a4eae) list_medium_line_x4_t5

0x74aa,	// (0x000a4ec9) list_single_fs_dyc_pane_ParamLimits

0x74aa,	// (0x000a4ec9) list_single_fs_dyc_pane

0x1c3f,	// (0x0009f65e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1c3f,	// (0x0009f65e) list_medium_line_x4_t4_g7_g1

0x7c38,	// (0x000a5657) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7c38,	// (0x000a5657) list_medium_line_x4_t4_g7_g2

0x7c44,	// (0x000a5663) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7c44,	// (0x000a5663) list_medium_line_x4_t4_g7_g3

0x7c53,	// (0x000a5672) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7c53,	// (0x000a5672) list_medium_line_x4_t4_g7_g4

0x7c5f,	// (0x000a567e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7c5f,	// (0x000a567e) list_medium_line_x4_t4_g7_g5

0x7c6e,	// (0x000a568d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7c6e,	// (0x000a568d) list_medium_line_x4_t4_g7_g6

0x7c7d,	// (0x000a569c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7c7d,	// (0x000a569c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb2,	// (0x000ad5d1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb2,	// (0x000ad5d1) list_medium_line_x4_t4_g7_g

0x7c89,	// (0x000a56a8) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7c89,	// (0x000a56a8) list_medium_line_x4_t4_g7_t1

0x7c9e,	// (0x000a56bd) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c9e,	// (0x000a56bd) list_medium_line_x4_t4_g7_t2

0x7cb3,	// (0x000a56d2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7cb3,	// (0x000a56d2) list_medium_line_x4_t4_g7_t3

0x7cc8,	// (0x000a56e7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7cc8,	// (0x000a56e7) list_medium_line_x4_t4_g7_t4

0x7cda,	// (0x000a56f9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7cda,	// (0x000a56f9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc1,	// (0x000ad5e0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc1,	// (0x000ad5e0) list_medium_line_x4_t4_g7_t

0x7cec,	// (0x000a570b) list_single_dyc_row_pane_ParamLimits

0x7cec,	// (0x000a570b) list_single_dyc_row_pane

0x851e,	// (0x000a5f3d) call5_gesture_pane_ParamLimits

0x851e,	// (0x000a5f3d) call5_gesture_pane

0x8554,	// (0x000a5f73) call5_windows_pane_ParamLimits

0x8554,	// (0x000a5f73) call5_windows_pane

0x85a5,	// (0x000a5fc4) call5_swipe_1_pane_cp_ParamLimits

0x85a5,	// (0x000a5fc4) call5_swipe_1_pane_cp

0x85b1,	// (0x000a5fd0) call5_swipe_2_pane_cp_ParamLimits

0x85b1,	// (0x000a5fd0) call5_swipe_2_pane_cp

0xab43,	// (0x000a8562) call5_image_pane_cp

0x85bd,	// (0x000a5fdc) popup_call5_audio_first_window_cp_ParamLimits

0x85bd,	// (0x000a5fdc) popup_call5_audio_first_window_cp

0xe64a,	// (0x000ac069) call5_swipe_1_pane_g1_cp_ParamLimits

0xe64a,	// (0x000ac069) call5_swipe_1_pane_g1_cp

0xe6b7,	// (0x000ac0d6) call5_swipe_1_pane_g2_cp

0xe663,	// (0x000ac082) call5_swipe_1_pane_t1_cp_ParamLimits

0xe663,	// (0x000ac082) call5_swipe_1_pane_t1_cp

0xe64a,	// (0x000ac069) call5_swipe_2_pane_g1_cp_ParamLimits

0xe64a,	// (0x000ac069) call5_swipe_2_pane_g1_cp

0xe6bf,	// (0x000ac0de) call5_swipe_2_pane_g2_cp

0xe6c7,	// (0x000ac0e6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6c7,	// (0x000ac0e6) call5_swipe_2_pane_t1_cp

0xafad,	// (0x000a89cc) main_sp_fs_email_pane

0xdda3,	// (0x000ab7c2) main_sp_fs_listscroll_pane_te

0x85cb,	// (0x000a5fea) popup_sp_fs_action_menu_pane_ParamLimits

0x85cb,	// (0x000a5fea) popup_sp_fs_action_menu_pane

0xce42,	// (0x000aa861) bg_sp_fs_ctrlbar_pane_g1

0xe6dc,	// (0x000ac0fb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e5,	// (0x000ac104) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6ee,	// (0x000ac10d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce42,	// (0x000aa861) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcaf,	// (0x000ad6ce) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcc21,	// (0x000aa640) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcc21,	// (0x000aa640) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6f7,	// (0x000ac116) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6f7,	// (0x000ac116) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe703,	// (0x000ac122) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe703,	// (0x000ac122) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcb8,	// (0x000ad6d7) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcb8,	// (0x000ad6d7) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe70f,	// (0x000ac12e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe70f,	// (0x000ac12e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8611,	// (0x000a6030) list_medium_line_t2_right_icon_g1

0x8619,	// (0x000a6038) list_medium_line_t2_right_icon_t1

0x8629,	// (0x000a6048) list_medium_line_t2_right_icon_t2

0x0001,

0xfcbd,	// (0x000ad6dc) list_medium_line_t2_right_icon_t

0xca0a,	// (0x000aa429) bg_sp_fs_ctrlbar_pane_ParamLimits

0xca0a,	// (0x000aa429) bg_sp_fs_ctrlbar_pane

0x8690,	// (0x000a60af) main_sp_fs_ctrlbar_button_pane_cp01

0x8698,	// (0x000a60b7) main_sp_fs_ctrlbar_ddmenu_pane

0xe763,	// (0x000ac182) main_sp_fs_ctrlbar_pane_g1

0xe76f,	// (0x000ac18e) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc2,	// (0x000ad6e1) main_sp_fs_ctrlbar_pane_g

0x86d6,	// (0x000a60f5) main_sp_fs_ctrlbar_pane_t1

0x8713,	// (0x000a6132) main_sp_fs_ctrlbar_pane

0x872d,	// (0x000a614c) main_sp_fs_listscroll_pane_te_cp01

0x873e,	// (0x000a615d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x873e,	// (0x000a615d) popup_sp_fs_action_menu_pane_cp01

0xafad,	// (0x000a89cc) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xafad,	// (0x000a89cc) bg_sp_fs_highlight_list_pane_cp01

0xa6f4,	// (0x000a8113) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa6f4,	// (0x000a8113) sp_fs_action_menu_list_gene_pane_g1

0xe796,	// (0x000ac1b5) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe796,	// (0x000ac1b5) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd0,	// (0x000ad6ef) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd0,	// (0x000ad6ef) sp_fs_action_menu_list_gene_pane_g

0xa703,	// (0x000a8122) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa703,	// (0x000a8122) sp_fs_action_menu_list_gene_pane_t1

0xa71b,	// (0x000a813a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa71b,	// (0x000a813a) sp_fs_action_menu_list_gene_pane

0xe7a3,	// (0x000ac1c2) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7a3,	// (0x000ac1c2) popup_sp_fs_action_menu_bg_pane

0xa73e,	// (0x000a815d) sp_fs_action_menu_list_pane_ParamLimits

0xa73e,	// (0x000a815d) sp_fs_action_menu_list_pane

0x876c,	// (0x000a618b) sp_fs_scroll_pane_cp01_ParamLimits

0x876c,	// (0x000a618b) sp_fs_scroll_pane_cp01

0x8792,	// (0x000a61b1) list_medium_line_plain_t2_t1

0x87a2,	// (0x000a61c1) list_medium_line_plain_t2_t2

0x0001,

0xfcd5,	// (0x000ad6f4) list_medium_line_plain_t2_t

0x87b0,	// (0x000a61cf) list_medium_line_plain_t3_t1

0x87c0,	// (0x000a61df) list_medium_line_plain_t3_t2

0x87ce,	// (0x000a61ed) list_medium_line_plain_t3_t3

0x0002,

0xfcda,	// (0x000ad6f9) list_medium_line_plain_t3_t

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t2_g2_g1

0x1c57,	// (0x0009f676) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1c57,	// (0x0009f676) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x000acc4a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x000acc4a) list_medium_line_x2_t2_g2_g

0x3029,	// (0x000a0a48) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3029,	// (0x000a0a48) list_medium_line_x2_t2_g2_t1

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce1,	// (0x000ad700) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce1,	// (0x000ad700) list_medium_line_x2_t2_g2_t

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t4_g2_g1

0x87dc,	// (0x000a61fb) list_medium_line_x2_t4_g2_g2_ParamLimits

0x87dc,	// (0x000a61fb) list_medium_line_x2_t4_g2_g2

0x0001,

0xfce6,	// (0x000ad705) list_medium_line_x2_t4_g2_g_ParamLimits

0xfce6,	// (0x000ad705) list_medium_line_x2_t4_g2_g

0x87ee,	// (0x000a620d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87ee,	// (0x000a620d) list_medium_line_x2_t4_g2_t1

0x8808,	// (0x000a6227) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8808,	// (0x000a6227) list_medium_line_x2_t4_g2_t2

0x881e,	// (0x000a623d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x881e,	// (0x000a623d) list_medium_line_x2_t4_g2_t3

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfceb,	// (0x000ad70a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfceb,	// (0x000ad70a) list_medium_line_x2_t4_g2_t

0x8833,	// (0x000a6252) list_medium_line_t3_right_iconx2_g1

0x8611,	// (0x000a6030) list_medium_line_t3_right_iconx2_g2

0x883b,	// (0x000a625a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf4,	// (0x000ad713) list_medium_line_t3_right_iconx2_g

0x8843,	// (0x000a6262) list_medium_line_t3_right_iconx2_t1

0x8853,	// (0x000a6272) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcfb,	// (0x000ad71a) list_medium_line_t3_right_iconx2_t

0x1c3f,	// (0x0009f65e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1c3f,	// (0x0009f65e) list_medium_line_x3_t4_g4_g1

0x1c4b,	// (0x0009f66a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1c4b,	// (0x0009f66a) list_medium_line_x3_t4_g4_g2

0x1cd3,	// (0x0009f6f2) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1cd3,	// (0x0009f6f2) list_medium_line_x3_t4_g4_g3

0x8861,	// (0x000a6280) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8861,	// (0x000a6280) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd00,	// (0x000ad71f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd00,	// (0x000ad71f) list_medium_line_x3_t4_g4_g

0x886d,	// (0x000a628c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x886d,	// (0x000a628c) list_medium_line_x3_t4_g4_t1

0x8884,	// (0x000a62a3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8884,	// (0x000a62a3) list_medium_line_x3_t4_g4_t2

0x303e,	// (0x000a0a5d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x303e,	// (0x000a0a5d) list_medium_line_x3_t4_g4_t3

0x8899,	// (0x000a62b8) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8899,	// (0x000a62b8) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd09,	// (0x000ad728) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd09,	// (0x000ad728) list_medium_line_x3_t4_g4_t

0x88b6,	// (0x000a62d5) list_single_dyc_row_text_pane_t1_ParamLimits

0x88b6,	// (0x000a62d5) list_single_dyc_row_text_pane_t1

0x88f9,	// (0x000a6318) list_single_dyc_row_text_pane_t2_ParamLimits

0x88f9,	// (0x000a6318) list_single_dyc_row_text_pane_t2

0xa762,	// (0x000a8181) list_single_dyc_row_text_pane_t3_ParamLimits

0xa762,	// (0x000a8181) list_single_dyc_row_text_pane_t3

0x0005,

0xfd12,	// (0x000ad731) list_single_dyc_row_text_pane_t_ParamLimits

0xfd12,	// (0x000ad731) list_single_dyc_row_text_pane_t

0xa786,	// (0x000a81a5) list_single_dyc_row_pane_g1_ParamLimits

0xa786,	// (0x000a81a5) list_single_dyc_row_pane_g1

0xa792,	// (0x000a81b1) list_single_dyc_row_pane_g2_ParamLimits

0xa792,	// (0x000a81b1) list_single_dyc_row_pane_g2

0xa79e,	// (0x000a81bd) list_single_dyc_row_pane_g3_ParamLimits

0xa79e,	// (0x000a81bd) list_single_dyc_row_pane_g3

0xa7aa,	// (0x000a81c9) list_single_dyc_row_pane_g4_ParamLimits

0xa7aa,	// (0x000a81c9) list_single_dyc_row_pane_g4

0x0003,

0xfd1f,	// (0x000ad73e) list_single_dyc_row_pane_g_ParamLimits

0xfd1f,	// (0x000ad73e) list_single_dyc_row_pane_g

0xa7b6,	// (0x000a81d5) list_single_dyc_row_text_pane_ParamLimits

0xa7b6,	// (0x000a81d5) list_single_dyc_row_text_pane

0x9d8e,	// (0x000a77ad) bg_sp_fs_scroll_pane

0xe7b1,	// (0x000ac1d0) thumb_sp_fs_scroll_pane

0x6db9,	// (0x000a47d8) list_medium_line_g1_ParamLimits

0x6db9,	// (0x000a47d8) list_medium_line_g1

0x8a2a,	// (0x000a6449) list_medium_line_t1_ParamLimits

0x8a2a,	// (0x000a6449) list_medium_line_t1

0x1c3f,	// (0x0009f65e) list_medium_line_x2_g1_ParamLimits

0x1c3f,	// (0x0009f65e) list_medium_line_x2_g1

0x1c4b,	// (0x0009f66a) list_medium_line_x2_g2_ParamLimits

0x1c4b,	// (0x0009f66a) list_medium_line_x2_g2

0x0001,

0xfd28,	// (0x000ad747) list_medium_line_x2_g_ParamLimits

0xfd28,	// (0x000ad747) list_medium_line_x2_g

0xa7d5,	// (0x000a81f4) list_medium_line_x2_t1_ParamLimits

0xa7d5,	// (0x000a81f4) list_medium_line_x2_t1

0x1c3f,	// (0x0009f65e) list_medium_line_x3_g1_ParamLimits

0x1c3f,	// (0x0009f65e) list_medium_line_x3_g1

0x1c4b,	// (0x0009f66a) list_medium_line_x3_g2_ParamLimits

0x1c4b,	// (0x0009f66a) list_medium_line_x3_g2

0x0001,

0xfd28,	// (0x000ad747) list_medium_line_x3_g_ParamLimits

0xfd28,	// (0x000ad747) list_medium_line_x3_g

0xa7d5,	// (0x000a81f4) list_medium_line_x3_t1_ParamLimits

0xa7d5,	// (0x000a81f4) list_medium_line_x3_t1

0xe7ba,	// (0x000ac1d9) thumb_sp_fs_scroll_pane_g1

0xe7c3,	// (0x000ac1e2) thumb_sp_fs_scroll_pane_g2

0xe7cc,	// (0x000ac1eb) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd2d,	// (0x000ad74c) thumb_sp_fs_scroll_pane_g

0xe7ba,	// (0x000ac1d9) bg_sp_fs_scroll_pane_g1

0xe7c3,	// (0x000ac1e2) bg_sp_fs_scroll_pane_g2

0xe7cc,	// (0x000ac1eb) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd2d,	// (0x000ad74c) bg_sp_fs_scroll_pane_g

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1c3f,	// (0x0009f65e) list_medium_line_x2_t3_g4_g1

0x1cc7,	// (0x0009f6e6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1cc7,	// (0x0009f6e6) list_medium_line_x2_t3_g4_g2

0x1c4b,	// (0x0009f66a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1c4b,	// (0x0009f66a) list_medium_line_x2_t3_g4_g3

0x1c57,	// (0x0009f676) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1c57,	// (0x0009f676) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x000accc6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x000accc6) list_medium_line_x2_t3_g4_g

0x8a3f,	// (0x000a645e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a3f,	// (0x000a645e) list_medium_line_x2_t3_g4_t1

0x8a55,	// (0x000a6474) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a55,	// (0x000a6474) list_medium_line_x2_t3_g4_t2

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1c8a,	// (0x0009f6a9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd34,	// (0x000ad753) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd34,	// (0x000ad753) list_medium_line_x2_t3_g4_t

0x6db9,	// (0x000a47d8) list_medium_line_g2_g1_ParamLimits

0x6db9,	// (0x000a47d8) list_medium_line_g2_g1

0x6dc5,	// (0x000a47e4) list_medium_line_g2_g2_ParamLimits

0x6dc5,	// (0x000a47e4) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x000ad408) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x000ad408) list_medium_line_g2_g

0x8a6f,	// (0x000a648e) list_medium_line_g2_t1_ParamLimits

0x8a6f,	// (0x000a648e) list_medium_line_g2_t1

0x6db9,	// (0x000a47d8) list_medium_line_t3_g2_g1_ParamLimits

0x6db9,	// (0x000a47d8) list_medium_line_t3_g2_g1

0x6dc5,	// (0x000a47e4) list_medium_line_t3_g2_g2_ParamLimits

0x6dc5,	// (0x000a47e4) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x000ad408) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x000ad408) list_medium_line_t3_g2_g

0x8a84,	// (0x000a64a3) list_medium_line_t3_g2_t1_ParamLimits

0x8a84,	// (0x000a64a3) list_medium_line_t3_g2_t1

0x8a9e,	// (0x000a64bd) list_medium_line_t3_g2_t2_ParamLimits

0x8a9e,	// (0x000a64bd) list_medium_line_t3_g2_t2

0x8ab4,	// (0x000a64d3) list_medium_line_t3_g2_t3_ParamLimits

0x8ab4,	// (0x000a64d3) list_medium_line_t3_g2_t3

0x0002,

0xfd3b,	// (0x000ad75a) list_medium_line_t3_g2_t_ParamLimits

0xfd3b,	// (0x000ad75a) list_medium_line_t3_g2_t

0x8611,	// (0x000a6030) list_medium_line_right_icon_g1

0x8ace,	// (0x000a64ed) list_medium_line_right_icon_t1

0x6db9,	// (0x000a47d8) list_medium_line_t2_g1_ParamLimits

0x6db9,	// (0x000a47d8) list_medium_line_t2_g1

0x8adc,	// (0x000a64fb) list_medium_line_t2_t1_ParamLimits

0x8adc,	// (0x000a64fb) list_medium_line_t2_t1

0x8af6,	// (0x000a6515) list_medium_line_t2_t2_ParamLimits

0x8af6,	// (0x000a6515) list_medium_line_t2_t2

0x0001,

0xfd42,	// (0x000ad761) list_medium_line_t2_t_ParamLimits

0xfd42,	// (0x000ad761) list_medium_line_t2_t

0x6db9,	// (0x000a47d8) list_medium_line_t3_g1_ParamLimits

0x6db9,	// (0x000a47d8) list_medium_line_t3_g1

0x8b0b,	// (0x000a652a) list_medium_line_t3_t1_ParamLimits

0x8b0b,	// (0x000a652a) list_medium_line_t3_t1

0x8b25,	// (0x000a6544) list_medium_line_t3_t2_ParamLimits

0x8b25,	// (0x000a6544) list_medium_line_t3_t2

0x8b3b,	// (0x000a655a) list_medium_line_t3_t3_ParamLimits

0x8b3b,	// (0x000a655a) list_medium_line_t3_t3

0x0002,

0xfd47,	// (0x000ad766) list_medium_line_t3_t_ParamLimits

0xfd47,	// (0x000ad766) list_medium_line_t3_t

0x6db9,	// (0x000a47d8) list_medium_line_g3_g1_ParamLimits

0x6db9,	// (0x000a47d8) list_medium_line_g3_g1

0x8b50,	// (0x000a656f) list_medium_line_g3_g2_ParamLimits

0x8b50,	// (0x000a656f) list_medium_line_g3_g2

0x6dc5,	// (0x000a47e4) list_medium_line_g3_g3_ParamLimits

0x6dc5,	// (0x000a47e4) list_medium_line_g3_g3

0x0002,

0xfd4e,	// (0x000ad76d) list_medium_line_g3_g_ParamLimits

0xfd4e,	// (0x000ad76d) list_medium_line_g3_g

0x8b5c,	// (0x000a657b) list_medium_line_g3_t1_ParamLimits

0x8b5c,	// (0x000a657b) list_medium_line_g3_t1

0x6db9,	// (0x000a47d8) list_medium_line_t2_g3_g1_ParamLimits

0x6db9,	// (0x000a47d8) list_medium_line_t2_g3_g1

0x8b50,	// (0x000a656f) list_medium_line_t2_g3_g2_ParamLimits

0x8b50,	// (0x000a656f) list_medium_line_t2_g3_g2

0x6dc5,	// (0x000a47e4) list_medium_line_t2_g3_g3_ParamLimits

0x6dc5,	// (0x000a47e4) list_medium_line_t2_g3_g3

0x0002,

0xfd4e,	// (0x000ad76d) list_medium_line_t2_g3_g_ParamLimits

0xfd4e,	// (0x000ad76d) list_medium_line_t2_g3_g

0x8b71,	// (0x000a6590) list_medium_line_t2_g3_t1_ParamLimits

0x8b71,	// (0x000a6590) list_medium_line_t2_g3_t1

0x8b8b,	// (0x000a65aa) list_medium_line_t2_g3_t2_ParamLimits

0x8b8b,	// (0x000a65aa) list_medium_line_t2_g3_t2

0x0001,

0xfd55,	// (0x000ad774) list_medium_line_t2_g3_t_ParamLimits

0xfd55,	// (0x000ad774) list_medium_line_t2_g3_t

0x6db9,	// (0x000a47d8) list_medium_line_t3_g3_g1_ParamLimits

0x6db9,	// (0x000a47d8) list_medium_line_t3_g3_g1

0x8b50,	// (0x000a656f) list_medium_line_t3_g3_g2_ParamLimits

0x8b50,	// (0x000a656f) list_medium_line_t3_g3_g2

0x6dc5,	// (0x000a47e4) list_medium_line_t3_g3_g3_ParamLimits

0x6dc5,	// (0x000a47e4) list_medium_line_t3_g3_g3

0x0002,

0xfd4e,	// (0x000ad76d) list_medium_line_t3_g3_g_ParamLimits

0xfd4e,	// (0x000ad76d) list_medium_line_t3_g3_g

0x8ba1,	// (0x000a65c0) list_medium_line_t3_g3_t1_ParamLimits

0x8ba1,	// (0x000a65c0) list_medium_line_t3_g3_t1

0x8bba,	// (0x000a65d9) list_medium_line_t3_g3_t2_ParamLimits

0x8bba,	// (0x000a65d9) list_medium_line_t3_g3_t2

0x8bd0,	// (0x000a65ef) list_medium_line_t3_g3_t3_ParamLimits

0x8bd0,	// (0x000a65ef) list_medium_line_t3_g3_t3

0x0002,

0xfd5a,	// (0x000ad779) list_medium_line_t3_g3_t_ParamLimits

0xfd5a,	// (0x000ad779) list_medium_line_t3_g3_t

0x8833,	// (0x000a6252) list_medium_line_right_iconx2_g1

0x8611,	// (0x000a6030) list_medium_line_right_iconx2_g2

0x0001,

0xfd61,	// (0x000ad780) list_medium_line_right_iconx2_g

0x8bea,	// (0x000a6609) list_medium_line_right_iconx2_t1

0x8833,	// (0x000a6252) list_medium_line_t2_right_iconx2_g1

0x8611,	// (0x000a6030) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd61,	// (0x000ad780) list_medium_line_t2_right_iconx2_g

0x8bf8,	// (0x000a6617) list_medium_line_t2_right_iconx2_t1

0x8c08,	// (0x000a6627) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd66,	// (0x000ad785) list_medium_line_t2_right_iconx2_t

0x8c16,	// (0x000a6635) list_medium_line_x4_t4_t1

0x8c24,	// (0x000a6643) list_medium_line_x4_t4_t2

0x8c34,	// (0x000a6653) list_medium_line_x4_t4_t3

0x8c44,	// (0x000a6663) list_medium_line_x4_t4_t4

0x0003,

0xfd6b,	// (0x000ad78a) list_medium_line_x4_t4_t

0x8c7e,	// (0x000a669d) tport_appsw_pane_ParamLimits

0x8c7e,	// (0x000a669d) tport_appsw_pane

0x8c8c,	// (0x000a66ab) tport_contact_pane_ParamLimits

0x8c8c,	// (0x000a66ab) tport_contact_pane

0x8c9c,	// (0x000a66bb) tport_listscroll_pane_ParamLimits

0x8c9c,	// (0x000a66bb) tport_listscroll_pane

0x8cab,	// (0x000a66ca) cell_tport_appsw_pane_ParamLimits

0x8cab,	// (0x000a66ca) cell_tport_appsw_pane

0xd0ce,	// (0x000aaaed) tport_appsw_pane_g1_ParamLimits

0xd0ce,	// (0x000aaaed) tport_appsw_pane_g1

0xe7d5,	// (0x000ac1f4) tport_contact_pane_g1

0xe7de,	// (0x000ac1fd) tport_contact_pane_t1

0xe7ec,	// (0x000ac20b) tport_contact_pane_t2

0x0001,

0xfd74,	// (0x000ad793) tport_contact_pane_t

0xe7fa,	// (0x000ac219) list_tport_pane

0xe803,	// (0x000ac222) scroll_pane_cp_030

0x8ce0,	// (0x000a66ff) cell_tport_appsw_pane_g1

0x8cf0,	// (0x000a670f) cell_tport_appsw_pane_t1

0x8cfe,	// (0x000a671d) grid_highlight_pane_cp019

0x8d06,	// (0x000a6725) list_tport_double_graphic_pane_ParamLimits

0x8d06,	// (0x000a6725) list_tport_double_graphic_pane

0xafad,	// (0x000a89cc) list_highlight_pane_cp023_ParamLimits

0xafad,	// (0x000a89cc) list_highlight_pane_cp023

0x8d23,	// (0x000a6742) list_tport_double_graphic_pane_g1_ParamLimits

0x8d23,	// (0x000a6742) list_tport_double_graphic_pane_g1

0x8d30,	// (0x000a674f) list_tport_double_graphic_pane_t1_ParamLimits

0x8d30,	// (0x000a674f) list_tport_double_graphic_pane_t1

0x8d45,	// (0x000a6764) list_tport_double_graphic_pane_t2_ParamLimits

0x8d45,	// (0x000a6764) list_tport_double_graphic_pane_t2

0x0001,

0xfd80,	// (0x000ad79f) list_tport_double_graphic_pane_t_ParamLimits

0xfd80,	// (0x000ad79f) list_tport_double_graphic_pane_t

0x9d8e,	// (0x000a77ad) main_cale_note_pane

0x6557,	// (0x000a3f76) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6557,	// (0x000a3f76) cell_vitu2_function_top_wide_pane_cp01

0x80a2,	// (0x000a5ac1) wait_bar_pane_cp05_ParamLimits

0xafad,	// (0x000a89cc) listscroll_cmail_pane

0xe80c,	// (0x000ac22b) list_cmail_pane

0x8d57,	// (0x000a6776) list_cmail_body_pane

0x8d71,	// (0x000a6790) list_single_cmail_header_caption_pane

0xe81c,	// (0x000ac23b) list_single_cmail_header_detail_pane_ParamLimits

0xe81c,	// (0x000ac23b) list_single_cmail_header_detail_pane

0xe84e,	// (0x000ac26d) list_single_cmail_header_caption_pane_t1

0x8d91,	// (0x000a67b0) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d91,	// (0x000a67b0) list_single_cmail_header_detail_pane_g1

0xafcf,	// (0x000a89ee) list_single_cmail_header_detail_pane_g2_ParamLimits

0xafcf,	// (0x000a89ee) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd85,	// (0x000ad7a4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd85,	// (0x000ad7a4) list_single_cmail_header_detail_pane_g

0xa7eb,	// (0x000a820a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa7eb,	// (0x000a820a) list_single_cmail_header_detail_pane_t1

0xa84b,	// (0x000a826a) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa84b,	// (0x000a826a) list_single_cmail_header_editor_pane_bg

0xe430,	// (0x000abe4f) list_cmail_body_pane_g1

0xe872,	// (0x000ac291) list_cmail_body_pane_t1

0xd82c,	// (0x000ab24b) list_single_cmail_header_editor_pane_bg_g1

0xada0,	// (0x000a87bf) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd83c,	// (0x000ab25b) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd834,	// (0x000ab253) list_single_cmail_header_editor_pane_bg_g1_copy3

0xda56,	// (0x000ab475) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd85c,	// (0x000ab27b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd84c,	// (0x000ab26b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd854,	// (0x000ab273) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad80,	// (0x000a879f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8da9,	// (0x000a67c8) calenote_gesture_pane_ParamLimits

0x8da9,	// (0x000a67c8) calenote_gesture_pane

0x8dc3,	// (0x000a67e2) calenote_window_pane_ParamLimits

0x8dc3,	// (0x000a67e2) calenote_window_pane

0xe880,	// (0x000ac29f) popup_note_window_cp01

0x8ddb,	// (0x000a67fa) calenote_swipe_1_pane_ParamLimits

0x8ddb,	// (0x000a67fa) calenote_swipe_1_pane

0x85b1,	// (0x000a5fd0) calenote_swipe_2_pane_ParamLimits

0x85b1,	// (0x000a5fd0) calenote_swipe_2_pane

0xe64a,	// (0x000ac069) calenote_swipe_1_pane_g1_ParamLimits

0xe64a,	// (0x000ac069) calenote_swipe_1_pane_g1

0xe657,	// (0x000ac076) calenote_swipe_1_pane_g2_ParamLimits

0xe657,	// (0x000ac076) calenote_swipe_1_pane_g2

0x0001,

0xfca5,	// (0x000ad6c4) calenote_swipe_1_pane_g_ParamLimits

0xfca5,	// (0x000ad6c4) calenote_swipe_1_pane_g

0xe892,	// (0x000ac2b1) calenote_swipe_1_pane_t1_ParamLimits

0xe892,	// (0x000ac2b1) calenote_swipe_1_pane_t1

0xe64a,	// (0x000ac069) calenote_swipe_2_pane_g1_ParamLimits

0xe64a,	// (0x000ac069) calenote_swipe_2_pane_g1

0xe8b1,	// (0x000ac2d0) calenote_swipe_2_pane_g2_ParamLimits

0xe8b1,	// (0x000ac2d0) calenote_swipe_2_pane_g2

0x0001,

0xfd91,	// (0x000ad7b0) calenote_swipe_2_pane_g_ParamLimits

0xfd91,	// (0x000ad7b0) calenote_swipe_2_pane_g

0xe8bd,	// (0x000ac2dc) calenote_swipe_2_pane_t1_ParamLimits

0xe8bd,	// (0x000ac2dc) calenote_swipe_2_pane_t1

0x9d8e,	// (0x000a77ad) main_mup_navstr_pane

0x5183,	// (0x000a2ba2) main_mup3_pane_t7_ParamLimits

0x5183,	// (0x000a2ba2) main_mup3_pane_t7

0x5bbc,	// (0x000a35db) main_mp4_pane_g6_ParamLimits

0x5bbc,	// (0x000a35db) main_mp4_pane_g6

0x5f56,	// (0x000a3975) main_image3_pane_t4_ParamLimits

0x5f56,	// (0x000a3975) main_image3_pane_t4

0x8dee,	// (0x000a680d) popup_navstr_preview_pane_ParamLimits

0x8dee,	// (0x000a680d) popup_navstr_preview_pane

0x8dfa,	// (0x000a6819) scroll_navstr_pane_ParamLimits

0x8dfa,	// (0x000a6819) scroll_navstr_pane

0x9d8e,	// (0x000a77ad) bg_popup_preview_window_pane_cp04

0xe8fe,	// (0x000ac31d) popup_navstr_preview_pane_t1

0x8e06,	// (0x000a6825) scroll_navstr_pane_g1_ParamLimits

0x8e06,	// (0x000a6825) scroll_navstr_pane_g1

0x8e13,	// (0x000a6832) scroll_navstr_pane_t1_ParamLimits

0x8e13,	// (0x000a6832) scroll_navstr_pane_t1

0xe889,	// (0x000ac2a8) bg_button_pane_cp014

0xe889,	// (0x000ac2a8) bg_button_pane_cp030

0x84c4,	// (0x000a5ee3) list_double_fisheye_pane_g4_ParamLimits

0x84c4,	// (0x000a5ee3) list_double_fisheye_pane_g4

0x84d0,	// (0x000a5eef) list_double_fisheye_pane_g5_ParamLimits

0x84d0,	// (0x000a5eef) list_double_fisheye_pane_g5

0xb58d,	// (0x000a8fac) sp_fs_scroll_pane_cp03

0xe763,	// (0x000ac182) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe76f,	// (0x000ac18e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc2,	// (0x000ad6e1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x86d6,	// (0x000a60f5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe814,	// (0x000ac233) sp_fs_scroll_pane_cp02

0xaa9f,	// (0x000a84be) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa9f,	// (0x000a84be) popup_sp_fs_calendar_preview_list_single_pane

0x9d8e,	// (0x000a77ad) main_cam6_pano_pane

0x4097,	// (0x000a1ab6) main_mup3_pane_ParamLimits

0x9d8e,	// (0x000a77ad) main_phacti_pane

0x7f75,	// (0x000a5994) bg_button_pane_cp11

0x7f8d,	// (0x000a59ac) main_mobtv_info_pane_g2_ParamLimits

0x7f8d,	// (0x000a59ac) main_mobtv_info_pane_g2

0x0001,

0xfc22,	// (0x000ad641) main_mobtv_info_pane_g_ParamLimits

0xfc22,	// (0x000ad641) main_mobtv_info_pane_g

0x813f,	// (0x000a5b5e) sc_clock_pane_t5_ParamLimits

0x813f,	// (0x000a5b5e) sc_clock_pane_t5

0x8337,	// (0x000a5d56) main_radioblah_pane_g1_ParamLimits

0xe596,	// (0x000abfb5) main_radioblah_pane_t3_ParamLimits

0xe596,	// (0x000abfb5) main_radioblah_pane_t3

0xe5ae,	// (0x000abfcd) main_radioblah_pane_t4_ParamLimits

0xe5ae,	// (0x000abfcd) main_radioblah_pane_t4

0x8355,	// (0x000a5d74) main_radioblah_text_pane_ParamLimits

0x8355,	// (0x000a5d74) main_radioblah_text_pane

0x8362,	// (0x000a5d81) main_radioblah_info_pane_g1_ParamLimits

0x83fb,	// (0x000a5e1a) main_radioblah_info_pane_t4_ParamLimits

0x83fb,	// (0x000a5e1a) main_radioblah_info_pane_t4

0xafad,	// (0x000a89cc) main_sp_fs_calendar_pane

0x8e25,	// (0x000a6844) main_phacti_pane_g1

0x8e2d,	// (0x000a684c) phacti_note_pane_ParamLimits

0x8e2d,	// (0x000a684c) phacti_note_pane

0xe915,	// (0x000ac334) phacti_term_pane_ParamLimits

0xe915,	// (0x000ac334) phacti_term_pane

0xe92a,	// (0x000ac349) phacti_note_pane_t1_ParamLimits

0xe92a,	// (0x000ac349) phacti_note_pane_t1

0xa862,	// (0x000a8281) phacti_term_pane_g1

0xa86a,	// (0x000a8289) phacti_term_pane_t1_ParamLimits

0xa86a,	// (0x000a8289) phacti_term_pane_t1

0xe941,	// (0x000ac360) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe949,	// (0x000ac368) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd9b,	// (0x000ad7ba) popup_sp_fs_calendar_preview_list_single_pane_g

0xe951,	// (0x000ac370) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe951,	// (0x000ac370) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe967,	// (0x000ac386) aid_popup_sp_fs_bg_corner_pane

0xce42,	// (0x000aa861) popup_sp_fs_calendar_preview_bg_pane_g1

0x9d8e,	// (0x000a77ad) popup_sp_fs_calendar_preview_bg_pane

0xe96f,	// (0x000ac38e) popup_sp_fs_calendar_preview_list_pane

0xca0a,	// (0x000aa429) bg_main_sp_fs_cale_pane_ParamLimits

0xca0a,	// (0x000aa429) bg_main_sp_fs_cale_pane

0xa89d,	// (0x000a82bc) listscroll_cale_mrui_pane_ParamLimits

0xa89d,	// (0x000a82bc) listscroll_cale_mrui_pane

0xa8b2,	// (0x000a82d1) listscroll_sp_fs_schedule_track_pane

0xa8bb,	// (0x000a82da) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa8bb,	// (0x000a82da) main_sp_fs_ctrlbar_pane_cp01

0xe977,	// (0x000ac396) main_sp_fs_ribbon_pane

0xa8ce,	// (0x000a82ed) popup_sp_fs_cale_preview_window

0xee90,	// (0x000ac8af) list_single_sp_fs_schedule_track_pane_ParamLimits

0xee90,	// (0x000ac8af) list_single_sp_fs_schedule_track_pane

0xd2bd,	// (0x000aacdc) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd2bd,	// (0x000aacdc) bg_sp_fs_highlight_list_pane_cp03

0x8e90,	// (0x000a68af) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e90,	// (0x000a68af) list_single_sp_fs_schedule_track_pane_g1

0x8e9c,	// (0x000a68bb) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e9c,	// (0x000a68bb) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda0,	// (0x000ad7bf) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda0,	// (0x000ad7bf) list_single_sp_fs_schedule_track_pane_g

0x8ea8,	// (0x000a68c7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ea8,	// (0x000a68c7) list_single_sp_fs_schedule_track_pane_t1

0x8ec6,	// (0x000a68e5) sp_fs_schedule_track_pane_ParamLimits

0x8ec6,	// (0x000a68e5) sp_fs_schedule_track_pane

0xe97f,	// (0x000ac39e) sp_fs_schedule_track_pane_g1

0xe987,	// (0x000ac3a6) sp_fs_schedule_track_pane_g2

0xe98f,	// (0x000ac3ae) sp_fs_schedule_track_pane_g3

0xe997,	// (0x000ac3b6) sp_fs_schedule_track_pane_g4

0xe99f,	// (0x000ac3be) sp_fs_schedule_track_pane_g5

0x0004,

0xfda5,	// (0x000ad7c4) sp_fs_schedule_track_pane_g

0xd82c,	// (0x000ab24b) bg_sp_fs_schedule_viewer_highlight_g1

0xada0,	// (0x000a87bf) bg_sp_fs_schedule_viewer_highlight_g2

0xd834,	// (0x000ab253) bg_sp_fs_schedule_viewer_highlight_g3

0xd83c,	// (0x000ab25b) bg_sp_fs_schedule_viewer_highlight_g4

0xda56,	// (0x000ab475) bg_sp_fs_schedule_viewer_highlight_g5

0xd84c,	// (0x000ab26b) bg_sp_fs_schedule_viewer_highlight_g6

0xd854,	// (0x000ab273) bg_sp_fs_schedule_viewer_highlight_g7

0xd85c,	// (0x000ab27b) bg_sp_fs_schedule_viewer_highlight_g8

0xad80,	// (0x000a879f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb0,	// (0x000ad7cf) bg_sp_fs_schedule_viewer_highlight_g

0x9d8e,	// (0x000a77ad) bg_main_sp_fs_ribbon_pane

0x8ed8,	// (0x000a68f7) main_sp_fs_ribbon_pane_g1

0xe9a7,	// (0x000ac3c6) main_sp_fs_ribbon_pane_t1

0x8ee1,	// (0x000a6900) main_sp_fs_ribbon_pane_t2

0xe9b6,	// (0x000ac3d5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc3,	// (0x000ad7e2) main_sp_fs_ribbon_pane_t

0xe9c5,	// (0x000ac3e4) main_sp_fs_ribbon_scheduler_pane

0xe9cd,	// (0x000ac3ec) bg_main_sp_fs_ribbon_pane_g1

0xe9d6,	// (0x000ac3f5) bg_main_sp_fs_ribbon_pane_g2

0xe9df,	// (0x000ac3fe) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdca,	// (0x000ad7e9) bg_main_sp_fs_ribbon_pane_g

0xe9e7,	// (0x000ac406) main_sp_fs_ribbon_scheduler_pane_g1

0xe9f0,	// (0x000ac40f) main_sp_fs_ribbon_scheduler_pane_g2

0xe9f9,	// (0x000ac418) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd1,	// (0x000ad7f0) main_sp_fs_ribbon_scheduler_pane_g

0xea02,	// (0x000ac421) list_cale_mrui_pane

0x8ef0,	// (0x000a690f) sp_fs_scroll_pane_cp07_ParamLimits

0x8ef0,	// (0x000a690f) sp_fs_scroll_pane_cp07

0x8f0c,	// (0x000a692b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f0c,	// (0x000a692b) bg_sp_fs_schedule_viewer_highlight

0xea0f,	// (0x000ac42e) list_single_sp_fs_schedule_track_pane_cp01

0xea17,	// (0x000ac436) list_sp_fs_schedule_track_pane

0xea1f,	// (0x000ac43e) sp_fs_scroll_pane_cp06_ParamLimits

0xea1f,	// (0x000ac43e) sp_fs_scroll_pane_cp06

0xce42,	// (0x000aa861) bgmain_sp_fs_calendar_pane_g1

0x8f19,	// (0x000a6938) list_single_cale_mrui_pane_ParamLimits

0x8f19,	// (0x000a6938) list_single_cale_mrui_pane

0xa8e0,	// (0x000a82ff) list_single_cale_mrui_row_pane_ParamLimits

0xa8e0,	// (0x000a82ff) list_single_cale_mrui_row_pane

0xa8ed,	// (0x000a830c) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa8ed,	// (0x000a830c) list_single_cale_mrui_row_pane_g1

0xa925,	// (0x000a8344) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa925,	// (0x000a8344) list_single_cale_mrui_row_pane_t1

0x8f3f,	// (0x000a695e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f3f,	// (0x000a695e) list_single_cale_mrui_row_pane_t2

0xa937,	// (0x000a8356) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa937,	// (0x000a8356) list_single_cale_mrui_row_pane_t3

0xa966,	// (0x000a8385) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa966,	// (0x000a8385) list_single_cale_mrui_row_pane_t4

0x0003,

0xfddf,	// (0x000ad7fe) list_single_cale_mrui_row_pane_t_ParamLimits

0xfddf,	// (0x000ad7fe) list_single_cale_mrui_row_pane_t

0x8fa5,	// (0x000a69c4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fa5,	// (0x000a69c4) list_single_cmail_header_editor_pane_bg_cp01

0x8fc7,	// (0x000a69e6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fc7,	// (0x000a69e6) list_single_cmail_header_editor_pane_bg_cp02

0x8fe5,	// (0x000a6a04) main_radioblah_text_pane_t1_ParamLimits

0x8fe5,	// (0x000a6a04) main_radioblah_text_pane_t1

0xea3e,	// (0x000ac45d) cam6_indi_pane_cp01

0xea46,	// (0x000ac465) cam6_mode_pane_cp01

0xea4e,	// (0x000ac46d) cam6_pano_pane

0xea57,	// (0x000ac476) cam6_zoom_pane_cp01

0xea61,	// (0x000ac480) cam6_pano_image_pane

0xea6a,	// (0x000ac489) cam6_pano_pane_g1

0xe430,	// (0x000abe4f) cam6_pano_pane_g2

0xea73,	// (0x000ac492) cam6_pano_pane_g3

0xea7c,	// (0x000ac49b) cam6_pano_pane_g4

0xd41c,	// (0x000aae3b) cam6_pano_pane_g5

0xea85,	// (0x000ac4a4) cam6_pano_pane_g6

0xea8d,	// (0x000ac4ac) cam6_pano_pane_g7

0xea95,	// (0x000ac4b4) cam6_pano_pane_g8

0xea9e,	// (0x000ac4bd) cam6_pano_pane_g9

0x0008,

0xfde8,	// (0x000ad807) cam6_pano_pane_g

0x9d8e,	// (0x000a77ad) main_browser_tag_pane

0xe8f6,	// (0x000ac315) grid_navstr_albumart_pane

0xeaa9,	// (0x000ac4c8) cell_navstr_albumart_pane_ParamLimits

0xeaa9,	// (0x000ac4c8) cell_navstr_albumart_pane

0xeac5,	// (0x000ac4e4) cell_navstr_albumart_pane_g1

0xc817,	// (0x000aa236) cell_navstr_albumart_pane_g2

0xc827,	// (0x000aa246) cell_navstr_albumart_pane_g3

0xc81f,	// (0x000aa23e) cell_navstr_albumart_pane_g4

0x0003,

0xfdfb,	// (0x000ad81a) cell_navstr_albumart_pane_g

0x8fff,	// (0x000a6a1e) bt_list_pane_ParamLimits

0x8fff,	// (0x000a6a1e) bt_list_pane

0x9018,	// (0x000a6a37) bt_list_pane_t1

0x9027,	// (0x000a6a46) bt_list_pane_t2

0x0001,

0xfe04,	// (0x000ad823) bt_list_pane_t

0x9d8e,	// (0x000a77ad) main_cale_prevew_pane

0x9036,	// (0x000a6a55) popup_cale_preview_window_ParamLimits

0x9036,	// (0x000a6a55) popup_cale_preview_window

0xafad,	// (0x000a89cc) bg_popup_preview_window_pane_cp05_ParamLimits

0xafad,	// (0x000a89cc) bg_popup_preview_window_pane_cp05

0xeacd,	// (0x000ac4ec) list_cale_preview_pane_ParamLimits

0xeacd,	// (0x000ac4ec) list_cale_preview_pane

0x9053,	// (0x000a6a72) list_double_cale_preview_pane_ParamLimits

0x9053,	// (0x000a6a72) list_double_cale_preview_pane

0x9067,	// (0x000a6a86) list_single_cale_preview_pane_ParamLimits

0x9067,	// (0x000a6a86) list_single_cale_preview_pane

0x907f,	// (0x000a6a9e) list_single_cale_preview_pane_g1

0x9087,	// (0x000a6aa6) list_single_cale_preview_pane_t1_ParamLimits

0x9087,	// (0x000a6aa6) list_single_cale_preview_pane_t1

0x909c,	// (0x000a6abb) list_double_cale_preview_pane_g1

0x90a4,	// (0x000a6ac3) list_double_cale_preview_pane_t1_ParamLimits

0x90a4,	// (0x000a6ac3) list_double_cale_preview_pane_t1

0x90b9,	// (0x000a6ad8) list_double_cale_preview_pane_t2_ParamLimits

0x90b9,	// (0x000a6ad8) list_double_cale_preview_pane_t2

0x0001,

0xfe09,	// (0x000ad828) list_double_cale_preview_pane_t_ParamLimits

0xfe09,	// (0x000ad828) list_double_cale_preview_pane_t

0x9d8e,	// (0x000a77ad) main_ezdial_pane

0xafad,	// (0x000a89cc) main_sp_fs_email_pane_ParamLimits

0x8637,	// (0x000a6056) cmail_ddmenu_btn01_pane_ParamLimits

0x8637,	// (0x000a6056) cmail_ddmenu_btn01_pane

0x8654,	// (0x000a6073) cmail_ddmenu_btn02_pane_ParamLimits

0x8654,	// (0x000a6073) cmail_ddmenu_btn02_pane

0x8672,	// (0x000a6091) cmail_ddmenu_btn03_pane_ParamLimits

0x8672,	// (0x000a6091) cmail_ddmenu_btn03_pane

0x8713,	// (0x000a6132) main_sp_fs_ctrlbar_pane_ParamLimits

0x872d,	// (0x000a614c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d57,	// (0x000a6776) list_cmail_body_pane_ParamLimits

0xe85c,	// (0x000ac27b) bg_button_pane_cp12

0xe865,	// (0x000ac284) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe865,	// (0x000ac284) list_single_cmail_header_detail_pane_g3

0xa827,	// (0x000a8246) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa827,	// (0x000a8246) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd8c,	// (0x000ad7ab) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd8c,	// (0x000ad7ab) list_single_cmail_header_detail_pane_t

0xa87f,	// (0x000a829e) phacti_term_pane_t2_ParamLimits

0xa87f,	// (0x000a829e) phacti_term_pane_t2

0x0001,

0xfd96,	// (0x000ad7b5) phacti_term_pane_t_ParamLimits

0xfd96,	// (0x000ad7b5) phacti_term_pane_t

0xead9,	// (0x000ac4f8) aid_size_list_single_double

0x90d1,	// (0x000a6af0) popup_ezdial_listscroll_window

0x90f3,	// (0x000a6b12) popup_number_entry_window_cp01

0xab43,	// (0x000a8562) bg_popup_call_pane_cp09

0xeae5,	// (0x000ac504) ezdial_list_pane

0xeaed,	// (0x000ac50c) scroll_pane_cp23

0xcc21,	// (0x000aa640) bg_button_pane_cp028_ParamLimits

0xcc21,	// (0x000aa640) bg_button_pane_cp028

0x9101,	// (0x000a6b20) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9101,	// (0x000a6b20) cmail_ddmenu_btn01_pane_g1

0x9113,	// (0x000a6b32) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9113,	// (0x000a6b32) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe0e,	// (0x000ad82d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe0e,	// (0x000ad82d) cmail_ddmenu_btn01_pane_g

0xeaf5,	// (0x000ac514) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaf5,	// (0x000ac514) cmail_ddmenu_btn01_pane_t1

0xca0a,	// (0x000aa429) bg_button_pane_cp029_ParamLimits

0xca0a,	// (0x000aa429) bg_button_pane_cp029

0x9113,	// (0x000a6b32) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9113,	// (0x000a6b32) cmail_ddmenu_btn02_pane_g1

0x912b,	// (0x000a6b4a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x912b,	// (0x000a6b4a) cmail_ddmenu_btn02_pane_t1

0xd2bd,	// (0x000aacdc) bg_button_pane_cp031_ParamLimits

0xd2bd,	// (0x000aacdc) bg_button_pane_cp031

0x9113,	// (0x000a6b32) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9113,	// (0x000a6b32) cmail_ddmenu_btn03_pane_g1

0x912b,	// (0x000a6b4a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x912b,	// (0x000a6b4a) cmail_ddmenu_btn03_pane_t1

0x5df1,	// (0x000a3810) cell_dialer2_keypad_pane_t1_ParamLimits

0x5e0b,	// (0x000a382a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5e0b,	// (0x000a382a) cell_dialer2_keypad_pane_t1_copy1

0x7da2,	// (0x000a57c1) ncimui_group_button_pane

0xafad,	// (0x000a89cc) main_sp_fs_calendar_pane_ParamLimits

0x8d71,	// (0x000a6790) list_single_cmail_header_caption_pane_ParamLimits

0xa894,	// (0x000a82b3) aid_recal_txt_sm_pane

0x9d8e,	// (0x000a77ad) mian_recal_day_pane

0xa8ce,	// (0x000a82ed) popup_sp_fs_cale_preview_window_ParamLimits

0xeb0a,	// (0x000ac529) list_recal_day_pane

0xa9b3,	// (0x000a83d2) list_single_recal_day_pane_ParamLimits

0xa9b3,	// (0x000a83d2) list_single_recal_day_pane

0xeb31,	// (0x000ac550) list_single_recal_day_pane_g1_ParamLimits

0xeb31,	// (0x000ac550) list_single_recal_day_pane_g1

0xa9c5,	// (0x000a83e4) list_single_recal_day_pane_g2_ParamLimits

0xa9c5,	// (0x000a83e4) list_single_recal_day_pane_g2

0xa9d1,	// (0x000a83f0) list_single_recal_day_pane_g3_ParamLimits

0xa9d1,	// (0x000a83f0) list_single_recal_day_pane_g3

0x914f,	// (0x000a6b6e) list_single_recal_day_pane_g4_ParamLimits

0x914f,	// (0x000a6b6e) list_single_recal_day_pane_g4

0xa9dd,	// (0x000a83fc) list_single_recal_day_pane_g5_ParamLimits

0xa9dd,	// (0x000a83fc) list_single_recal_day_pane_g5

0xa9e9,	// (0x000a8408) list_single_recal_day_pane_g6_ParamLimits

0xa9e9,	// (0x000a8408) list_single_recal_day_pane_g6

0x0004,

0xfe1d,	// (0x000ad83c) list_single_recal_day_pane_g_ParamLimits

0xfe1d,	// (0x000ad83c) list_single_recal_day_pane_g

0xa9fd,	// (0x000a841c) list_single_recal_day_pane_t1

0xaa0f,	// (0x000a842e) list_single_recal_day_pane_t2

0x0001,

0xfe28,	// (0x000ad847) list_single_recal_day_pane_t

0x9167,	// (0x000a6b86) ncimui_query_button_pane_ParamLimits

0x9167,	// (0x000a6b86) ncimui_query_button_pane

0x9177,	// (0x000a6b96) ncimui_query_button_pane_t1_ParamLimits

0x9177,	// (0x000a6b96) ncimui_query_button_pane_t1

0xeb3d,	// (0x000ac55c) ncimui_query_button_pane_t2_ParamLimits

0xeb3d,	// (0x000ac55c) ncimui_query_button_pane_t2

0x0001,

0xfe2d,	// (0x000ad84c) ncimui_query_button_pane_t_ParamLimits

0xfe2d,	// (0x000ad84c) ncimui_query_button_pane_t

0x918a,	// (0x000a6ba9) query_button_pane_ParamLimits

0x918a,	// (0x000a6ba9) query_button_pane

0x9d8e,	// (0x000a77ad) bg_button_pane_cp0028

0xeb50,	// (0x000ac56f) query_button_pane_t1

0x40b3,	// (0x000a1ad2) main_tport_pane_ParamLimits

0x8c54,	// (0x000a6673) bg_popup_window_pane_cp01_ParamLimits

0x8c54,	// (0x000a6673) bg_popup_window_pane_cp01

0x8c62,	// (0x000a6681) heading_pane_cp08_ParamLimits

0x8c62,	// (0x000a6681) heading_pane_cp08

0x8c70,	// (0x000a668f) heading_pane_cp07_ParamLimits

0x8c70,	// (0x000a668f) heading_pane_cp07

0x8ce0,	// (0x000a66ff) cell_tport_appsw_pane_g2

0x0002,

0xfd79,	// (0x000ad798) cell_tport_appsw_pane_g

0xa5a9,	// (0x000a7fc8) input_candi_list_open_g1

0xaf63,	// (0x000a8982) list_cale_time_pane_g6_ParamLimits

0xaf63,	// (0x000a8982) list_cale_time_pane_g6

0x4b55,	// (0x000a2574) aid_size_touch_calib_1_ParamLimits

0x4b55,	// (0x000a2574) aid_size_touch_calib_1

0x4b61,	// (0x000a2580) aid_size_touch_calib_2_ParamLimits

0x4b61,	// (0x000a2580) aid_size_touch_calib_2

0x4b6f,	// (0x000a258e) aid_size_touch_calib_3_ParamLimits

0x4b6f,	// (0x000a258e) aid_size_touch_calib_3

0x4b7f,	// (0x000a259e) aid_size_touch_calib_4_ParamLimits

0x4b7f,	// (0x000a259e) aid_size_touch_calib_4

0x4b8d,	// (0x000a25ac) main_touch_calib_button_group_pane_ParamLimits

0x4b8d,	// (0x000a25ac) main_touch_calib_button_group_pane

0x4b9b,	// (0x000a25ba) main_touch_calib_pane_g1_ParamLimits

0x4ba7,	// (0x000a25c6) main_touch_calib_pane_g2_ParamLimits

0x4bb3,	// (0x000a25d2) main_touch_calib_pane_g3_ParamLimits

0x4bbf,	// (0x000a25de) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x000ad155) main_touch_calib_pane_g_ParamLimits

0x4bcb,	// (0x000a25ea) main_touch_calib_pane_t1_ParamLimits

0x4be2,	// (0x000a2601) main_touch_calib_pane_t2_ParamLimits

0x4bfb,	// (0x000a261a) main_touch_calib_pane_t3_ParamLimits

0x4c11,	// (0x000a2630) main_touch_calib_pane_t4_ParamLimits

0x4c27,	// (0x000a2646) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x000ad15e) main_touch_calib_pane_t_ParamLimits

0xd169,	// (0x000aab88) list_single_fp_cale_pane_g3_ParamLimits

0xd169,	// (0x000aab88) list_single_fp_cale_pane_g3

0x4097,	// (0x000a1ab6) bg_button_pane_cp012_ParamLimits

0x4097,	// (0x000a1ab6) bg_vkb2_func_pane_cp03_ParamLimits

0x6d39,	// (0x000a4758) cell_vitu2_function_top_pane_g1_ParamLimits

0x4097,	// (0x000a1ab6) bg_vkb2_func_pane_cp04_ParamLimits

0x7d28,	// (0x000a5747) main_ncimui_button_group_pane_ParamLimits

0x7d28,	// (0x000a5747) main_ncimui_button_group_pane

0x7d90,	// (0x000a57af) main_ncimui_pane_t3_ParamLimits

0x7d90,	// (0x000a57af) main_ncimui_pane_t3

0xe90c,	// (0x000ac32b) phacti_button_group_pane

0xead9,	// (0x000ac4f8) aid_size_list_single_double_ParamLimits

0x90d1,	// (0x000a6af0) popup_ezdial_listscroll_window_ParamLimits

0x90f3,	// (0x000a6b12) popup_number_entry_window_cp01_ParamLimits

0x9197,	// (0x000a6bb6) phacti_button_pane_ParamLimits

0x9197,	// (0x000a6bb6) phacti_button_pane

0x9d8e,	// (0x000a77ad) bg_button_pane_cp14

0xeb5e,	// (0x000ac57d) phacti_button_pane_t1

0x91a8,	// (0x000a6bc7) main_touch_calib_button_pane_ParamLimits

0x91a8,	// (0x000a6bc7) main_touch_calib_button_pane

0xa500,	// (0x000a7f1f) bg_button_pane_cp18_ParamLimits

0xa500,	// (0x000a7f1f) bg_button_pane_cp18

0xeb6c,	// (0x000ac58b) main_touch_calib_button_pane_t1_ParamLimits

0xeb6c,	// (0x000ac58b) main_touch_calib_button_pane_t1

0xeb82,	// (0x000ac5a1) main_touch_calib_button_pane_t2_ParamLimits

0xeb82,	// (0x000ac5a1) main_touch_calib_button_pane_t2

0x0001,

0xfe32,	// (0x000ad851) main_touch_calib_button_pane_t_ParamLimits

0xfe32,	// (0x000ad851) main_touch_calib_button_pane_t

0x9d8e,	// (0x000a77ad) cell_ncimui_button_pane

0x9d8e,	// (0x000a77ad) bg_button_pane_cp032

0xeba0,	// (0x000ac5bf) cell_ncimui_button_pane_t1

0x5e67,	// (0x000a3886) image3_infobar_pane_ParamLimits

0x5e67,	// (0x000a3886) image3_infobar_pane

0x8161,	// (0x000a5b80) fs_bigclock_status_pane_ParamLimits

0x8161,	// (0x000a5b80) fs_bigclock_status_pane

0x816e,	// (0x000a5b8d) main_fs_bigclock_clock_pane_ParamLimits

0x816e,	// (0x000a5b8d) main_fs_bigclock_clock_pane

0x818a,	// (0x000a5ba9) main_fs_bigclock_indi_pane_ParamLimits

0x818a,	// (0x000a5ba9) main_fs_bigclock_indi_pane

0x81b8,	// (0x000a5bd7) main_fs_bigclock_swipe_pane_ParamLimits

0x81b8,	// (0x000a5bd7) main_fs_bigclock_swipe_pane

0x9d8e,	// (0x000a77ad) main_fs_clock_dumped_data

0x81f2,	// (0x000a5c11) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x81f2,	// (0x000a5c11) list_single_fs_bigclock_indicator_pane_g1

0x8211,	// (0x000a5c30) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8211,	// (0x000a5c30) list_single_fs_bigclock_indicator_pane_g2

0x822b,	// (0x000a5c4a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x822b,	// (0x000a5c4a) list_single_fs_bigclock_indicator_pane_g3

0x8247,	// (0x000a5c66) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8247,	// (0x000a5c66) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc56,	// (0x000ad675) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc56,	// (0x000ad675) list_single_fs_bigclock_indicator_pane_g

0x8276,	// (0x000a5c95) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8276,	// (0x000a5c95) list_single_fs_bigclock_indicator_pane_t1

0x829e,	// (0x000a5cbd) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x829e,	// (0x000a5cbd) list_single_fs_bigclock_indicator_pane_t2

0x82c6,	// (0x000a5ce5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x82c6,	// (0x000a5ce5) list_single_fs_bigclock_indicator_pane_t3

0x82ee,	// (0x000a5d0d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x82ee,	// (0x000a5d0d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc61,	// (0x000ad680) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc61,	// (0x000ad680) list_single_fs_bigclock_indicator_pane_t

0xebae,	// (0x000ac5cd) image3_infobar_fav_pane_ParamLimits

0xebae,	// (0x000ac5cd) image3_infobar_fav_pane

0xebbe,	// (0x000ac5dd) image3_infobar_loc_pane_ParamLimits

0xebbe,	// (0x000ac5dd) image3_infobar_loc_pane

0xebd4,	// (0x000ac5f3) image3_infobar_time_pane_ParamLimits

0xebd4,	// (0x000ac5f3) image3_infobar_time_pane

0xce42,	// (0x000aa861) image3_infobar_time_pane_g1

0xebe4,	// (0x000ac603) image3_infobar_time_pane_t1

0xce42,	// (0x000aa861) image3_infobar_loc_pane_g1

0xebf2,	// (0x000ac611) image3_infobar_loc_pane_g2

0x0001,

0xfe37,	// (0x000ad856) image3_infobar_loc_pane_g

0xebfa,	// (0x000ac619) image3_infobar_loc_pane_t1

0xce42,	// (0x000aa861) image3_infobar_fav_pane_g1

0xec08,	// (0x000ac627) image3_infobar_fav_pane_g2

0x0001,

0xfe3c,	// (0x000ad85b) image3_infobar_fav_pane_g

0xec10,	// (0x000ac62f) fs_bigclock_status_battery_pane

0xec19,	// (0x000ac638) fs_bigclock_status_signal_pane

0xec22,	// (0x000ac641) fs_bigclock_status_title_pane

0xec2b,	// (0x000ac64a) fs_bigclock_status_signal_pane_g1

0xec34,	// (0x000ac653) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe41,	// (0x000ad860) fs_bigclock_status_signal_pane_g

0xec3c,	// (0x000ac65b) fs_bigclock_status_battery_pane_g1

0xec45,	// (0x000ac664) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe46,	// (0x000ad865) fs_bigclock_status_battery_pane_g

0xec4d,	// (0x000ac66c) fs_bigclock_status_title_pane_t1

0x91b8,	// (0x000a6bd7) main_fs_bigclock_clock_pane_g1

0x91b8,	// (0x000a6bd7) main_fs_bigclock_clock_pane_g2

0x91c7,	// (0x000a6be6) main_fs_bigclock_clock_pane_g3

0x91c7,	// (0x000a6be6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4b,	// (0x000ad86a) main_fs_bigclock_clock_pane_g

0x91d7,	// (0x000a6bf6) main_fs_bigclock_clock_pane_t1

0x91ec,	// (0x000a6c0b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe54,	// (0x000ad873) main_fs_bigclock_clock_pane_t

0xec5b,	// (0x000ac67a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec5b,	// (0x000ac67a) list_single_fs_bigclock_indicator_pane

0xec6c,	// (0x000ac68b) list_single_fs_bigclock_pane_ParamLimits

0xec6c,	// (0x000ac68b) list_single_fs_bigclock_pane

0xec92,	// (0x000ac6b1) main_fs_bigclock_indicator_pane_t1

0xeca1,	// (0x000ac6c0) list_single_fs_bigclock_pane_g1

0xeca9,	// (0x000ac6c8) list_single_fs_bigclock_pane_t1

0xce42,	// (0x000aa861) main_fs_bigclock_swipe_pane_g1

0xecec,	// (0x000ac70b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe65,	// (0x000ad884) main_fs_bigclock_swipe_pane_g

0xecf4,	// (0x000ac713) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf4,	// (0x000ac713) main_fs_bigclock_swipe_pane_t1

0x3068,	// (0x000a0a87) call_type_pane_ParamLimits

0x9d8e,	// (0x000a77ad) main_btmg_pane

0xa919,	// (0x000a8338) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa919,	// (0x000a8338) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdd8,	// (0x000ad7f7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdd8,	// (0x000ad7f7) list_single_cale_mrui_row_pane_g

0xa9a1,	// (0x000a83c0) list_recal_vselct_arw_lo_pane

0xeb29,	// (0x000ac548) list_recal_vselct_arw_up_pane

0xa9a9,	// (0x000a83c8) list_recal_vselct_pane

0x9243,	// (0x000a6c62) btmg_button_pane

0x924f,	// (0x000a6c6e) main_btmg_pane_g1

0x9d8e,	// (0x000a77ad) bg_button_pane_cp044

0xed11,	// (0x000ac730) btmg_button_pane_t1

0xc9f6,	// (0x000aa415) aid_listscroll_gen

0xafad,	// (0x000a89cc) main_cntbar_detail_pane

0xe80c,	// (0x000ac22b) list_cmail_folder_pane

0xb58d,	// (0x000a8fac) sp_fs_scroll_pane_cp03_ParamLimits

0xaa21,	// (0x000a8440) list_single_fs_dyc_pane_cp01_ParamLimits

0xaa21,	// (0x000a8440) list_single_fs_dyc_pane_cp01

0xed1f,	// (0x000ac73e) aid_size_cmail_indent

0xaa3b,	// (0x000a845a) list_single_dyc_row_pane_cp01

0x9277,	// (0x000a6c96) cntbar_detail_list_pane_ParamLimits

0x9277,	// (0x000a6c96) cntbar_detail_list_pane

0x92b7,	// (0x000a6cd6) main_cntbar_detail_cont_pane_ParamLimits

0x92b7,	// (0x000a6cd6) main_cntbar_detail_cont_pane

0x2f8d,	// (0x000a09ac) scroll_pane_cp032_ParamLimits

0x2f8d,	// (0x000a09ac) scroll_pane_cp032

0x92c3,	// (0x000a6ce2) cntbar_detail_list_event_pane_ParamLimits

0x92c3,	// (0x000a6ce2) cntbar_detail_list_event_pane

0x9285,	// (0x000a6ca4) cntbar_detail_list_shct_pane

0xadee,	// (0x000a880d) aid_list_gen

0xed28,	// (0x000ac747) aid_scroll

0xed31,	// (0x000ac750) aid_size_touch_scroll_bar

0x7498,	// (0x000a4eb7) aid_list_double

0x92d3,	// (0x000a6cf2) aid_list_single

0x7486,	// (0x000a4ea5) aid_list_single_lg

0x92dc,	// (0x000a6cfb) aid_list_z_g_a_sm

0x92e4,	// (0x000a6d03) aid_list_z_g_d

0x92ec,	// (0x000a6d0b) aid_txt_z_prm

0x92fa,	// (0x000a6d19) aid_txt_z_prm_cp01

0x9308,	// (0x000a6d27) aid_txt_z_sec

0x9316,	// (0x000a6d35) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9316,	// (0x000a6d35) main_cntbar_detail_cont_pane_g1

0x9323,	// (0x000a6d42) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9323,	// (0x000a6d42) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6a,	// (0x000ad889) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6a,	// (0x000ad889) main_cntbar_detail_cont_pane_g

0xed3a,	// (0x000ac759) main_cntbar_detail_cont_pane_t1

0xed48,	// (0x000ac767) main_cntbar_detail_cont_pane_t2

0xed56,	// (0x000ac775) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe6f,	// (0x000ad88e) main_cntbar_detail_cont_pane_t

0x932f,	// (0x000a6d4e) cell_cntbar_detail_list_shct_pane_ParamLimits

0x932f,	// (0x000a6d4e) cell_cntbar_detail_list_shct_pane

0xed64,	// (0x000ac783) cntbar_detail_list_shct_pane_g1

0xed6d,	// (0x000ac78c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe76,	// (0x000ad895) cntbar_detail_list_shct_pane_g

0x9343,	// (0x000a6d62) cntbar_detail_list_event_pane_g1_ParamLimits

0x9343,	// (0x000a6d62) cntbar_detail_list_event_pane_g1

0x934f,	// (0x000a6d6e) cntbar_detail_list_event_pane_g2_ParamLimits

0x934f,	// (0x000a6d6e) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7b,	// (0x000ad89a) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7b,	// (0x000ad89a) cntbar_detail_list_event_pane_g

0x93bd,	// (0x000a6ddc) cntbar_detail_list_event_pane_t1_ParamLimits

0x93bd,	// (0x000a6ddc) cntbar_detail_list_event_pane_t1

0x93d2,	// (0x000a6df1) cntbar_detail_list_event_pane_t2_ParamLimits

0x93d2,	// (0x000a6df1) cntbar_detail_list_event_pane_t2

0x0002,

0xfe88,	// (0x000ad8a7) cntbar_detail_list_event_pane_t_ParamLimits

0xfe88,	// (0x000ad8a7) cntbar_detail_list_event_pane_t

0xce42,	// (0x000aa861) cell_cntbar_detail_list_shct_pane_g1

0xb5a7,	// (0x000a8fc6) navi_pane_mv_g3

0xafad,	// (0x000a89cc) main_cntbar_detail_pane_ParamLimits

0x9d8e,	// (0x000a77ad) main_notif_wgt_pane

0x5ae9,	// (0x000a3508) aid_tch_main_mp4_pane_g4

0x5d52,	// (0x000a3771) popup_slider_window_cp02

0xa997,	// (0x000a83b6) list_recal_day_event_pane

0x9257,	// (0x000a6c76) cntbar_detail_btn_pane_ParamLimits

0x9257,	// (0x000a6c76) cntbar_detail_btn_pane

0x9267,	// (0x000a6c86) cntbar_detail_btn_pane_cp01_ParamLimits

0x9267,	// (0x000a6c86) cntbar_detail_btn_pane_cp01

0x9285,	// (0x000a6ca4) cntbar_detail_list_shct_pane_ParamLimits

0x9291,	// (0x000a6cb0) cntbar_detail_pane_g1_ParamLimits

0x9291,	// (0x000a6cb0) cntbar_detail_pane_g1

0x92a1,	// (0x000a6cc0) cntbar_detail_pane_t1_ParamLimits

0x92a1,	// (0x000a6cc0) cntbar_detail_pane_t1

0x935b,	// (0x000a6d7a) cntbar_detail_list_event_pane_g3_ParamLimits

0x935b,	// (0x000a6d7a) cntbar_detail_list_event_pane_g3

0x9373,	// (0x000a6d92) cntbar_detail_list_event_pane_g4_ParamLimits

0x9373,	// (0x000a6d92) cntbar_detail_list_event_pane_g4

0x938b,	// (0x000a6daa) cntbar_detail_list_event_pane_g5_ParamLimits

0x938b,	// (0x000a6daa) cntbar_detail_list_event_pane_g5

0x93a3,	// (0x000a6dc2) cntbar_detail_list_event_pane_g6_ParamLimits

0x93a3,	// (0x000a6dc2) cntbar_detail_list_event_pane_g6

0x93e7,	// (0x000a6e06) cntbar_detail_list_event_pane_t3_ParamLimits

0x93e7,	// (0x000a6e06) cntbar_detail_list_event_pane_t3

0x93f9,	// (0x000a6e18) popup_notif_wgt_window_ParamLimits

0x93f9,	// (0x000a6e18) popup_notif_wgt_window

0x9409,	// (0x000a6e28) popup_submenu_window_cp01_ParamLimits

0x9409,	// (0x000a6e28) popup_submenu_window_cp01

0xab43,	// (0x000a8562) bg_popup_window_pane_cp10

0xed76,	// (0x000ac795) listscroll_notif_wgt_pane

0xed88,	// (0x000ac7a7) list_notif_wgt_window

0xed91,	// (0x000ac7b0) scroll_pane_cp033

0x9419,	// (0x000a6e38) list_notif_wgt_row_pane_ParamLimits

0x9419,	// (0x000a6e38) list_notif_wgt_row_pane

0xed9a,	// (0x000ac7b9) aid_size_list_notif_wgt_del

0xeda7,	// (0x000ac7c6) list_notif_wgt_row_pane_g1

0xedb3,	// (0x000ac7d2) list_notif_wgt_row_pane_g2

0xedc2,	// (0x000ac7e1) list_notif_wgt_row_pane_g3

0x0002,

0xfe8f,	// (0x000ad8ae) list_notif_wgt_row_pane_g

0xedcf,	// (0x000ac7ee) list_notif_wgt_row_pane_t1

0xede5,	// (0x000ac804) list_notif_wgt_row_pane_t2

0xedf7,	// (0x000ac816) list_notif_wgt_row_pane_t3

0x0002,

0xfe96,	// (0x000ad8b5) list_notif_wgt_row_pane_t

0xda70,	// (0x000ab48f) list_recal_day_event_pane_g1

0xee09,	// (0x000ac828) list_recal_day_event_pane_t1

0x9d8e,	// (0x000a77ad) bg_button_pane_cp045

0x942d,	// (0x000a6e4c) cntbar_detail_btn_pane_t1

0xca0a,	// (0x000aa429) main_callh_pane_ParamLimits

0xca0a,	// (0x000aa429) main_callh_pane

0x9d8e,	// (0x000a77ad) main_coverflow0_pane

0x9d8e,	// (0x000a77ad) main_wgtman_pane

0x81d0,	// (0x000a5bef) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x81d0,	// (0x000a5bef) main_fs_bigclock_unlock_btn_pane

0x8cd8,	// (0x000a66f7) bg_button_pane_cp16

0x8ce8,	// (0x000a6707) cell_tport_appsw_pane_g3

0x943b,	// (0x000a6e5a) cf0_flow_pane_ParamLimits

0x943b,	// (0x000a6e5a) cf0_flow_pane

0xee18,	// (0x000ac837) listscroll_cf0_pane

0xee23,	// (0x000ac842) main_cf0_pane_g1

0x944a,	// (0x000a6e69) main_cf0_pane_t1_ParamLimits

0x944a,	// (0x000a6e69) main_cf0_pane_t1

0x945e,	// (0x000a6e7d) main_cf0_pane_t2_ParamLimits

0x945e,	// (0x000a6e7d) main_cf0_pane_t2

0x0001,

0xfea2,	// (0x000ad8c1) main_cf0_pane_t_ParamLimits

0xfea2,	// (0x000ad8c1) main_cf0_pane_t

0xee35,	// (0x000ac854) scroll_pane_cp11

0x9472,	// (0x000a6e91) cf0_flow_pane_g1

0x947a,	// (0x000a6e99) cf0_flow_pane_g2

0x0001,

0xfea7,	// (0x000ad8c6) cf0_flow_pane_g

0x9482,	// (0x000a6ea1) cf0_flow_pane_t1

0x9d8e,	// (0x000a77ad) main_call6_pane

0x9d8e,	// (0x000a77ad) main_calllock_pane

0x9490,	// (0x000a6eaf) call6_btn_grp_pane_ParamLimits

0x9490,	// (0x000a6eaf) call6_btn_grp_pane

0x949d,	// (0x000a6ebc) call6_pane_g1_ParamLimits

0x949d,	// (0x000a6ebc) call6_pane_g1

0x94ad,	// (0x000a6ecc) popup_call6_1st_window_ParamLimits

0x94ad,	// (0x000a6ecc) popup_call6_1st_window

0x94bd,	// (0x000a6edc) popup_call6_2nd_window_ParamLimits

0x94bd,	// (0x000a6edc) popup_call6_2nd_window

0x94cd,	// (0x000a6eec) cell_call6_btn_pane_ParamLimits

0x94cd,	// (0x000a6eec) cell_call6_btn_pane

0xab43,	// (0x000a8562) bg_popup_call2_in_pane_cp03

0xee40,	// (0x000ac85f) popup_call6_1st_window_g1

0xee48,	// (0x000ac867) popup_call6_1st_window_g2

0xee50,	// (0x000ac86f) popup_call6_1st_window_g3

0x0002,

0xfeac,	// (0x000ad8cb) popup_call6_1st_window_g

0xee58,	// (0x000ac877) popup_call6_1st_window_t1

0xee67,	// (0x000ac886) popup_call6_1st_window_t2

0xee77,	// (0x000ac896) popup_call6_1st_window_t3

0x0002,

0xfeb3,	// (0x000ad8d2) popup_call6_1st_window_t

0xab43,	// (0x000a8562) bg_popup_call2_in_pane_cp04

0xee40,	// (0x000ac85f) popup_call6_2nd_window_g1

0xee48,	// (0x000ac867) popup_call6_2nd_window_g2

0xee50,	// (0x000ac86f) popup_call6_2nd_window_g3

0x0002,

0xfeac,	// (0x000ad8cb) popup_call6_2nd_window_g

0xee58,	// (0x000ac877) popup_call6_2nd_window_t1

0x0d91,	// (0x0009e7b0) bg_button_pane_cp15

0x94de,	// (0x000a6efd) cell_call6_btn_pane_g1

0x94e7,	// (0x000a6f06) cell_call6_btn_pane_t1

0x94f6,	// (0x000a6f15) listscroll_wgtman_pane_ParamLimits

0x94f6,	// (0x000a6f15) listscroll_wgtman_pane

0x9512,	// (0x000a6f31) wgtman_btn_pane_ParamLimits

0x9512,	// (0x000a6f31) wgtman_btn_pane

0xb393,	// (0x000a8db2) aid_scroll_copy1

0xeea7,	// (0x000ac8c6) list_wgtman_pane

0x9547,	// (0x000a6f66) wgtman_btn_pane_g1_ParamLimits

0x9547,	// (0x000a6f66) wgtman_btn_pane_g1

0x956f,	// (0x000a6f8e) wgtman_btn_pane_t1_ParamLimits

0x956f,	// (0x000a6f8e) wgtman_btn_pane_t1

0xeeb1,	// (0x000ac8d0) wgtman_btn_pane_t2_ParamLimits

0xeeb1,	// (0x000ac8d0) wgtman_btn_pane_t2

0x0001,

0xfeba,	// (0x000ad8d9) wgtman_btn_pane_t_ParamLimits

0xfeba,	// (0x000ad8d9) wgtman_btn_pane_t

0x95a6,	// (0x000a6fc5) listrow_wgtman_pane_ParamLimits

0x95a6,	// (0x000a6fc5) listrow_wgtman_pane

0x95bb,	// (0x000a6fda) listrow_wgtman_pane_g1

0x95c8,	// (0x000a6fe7) listrow_wgtman_pane_g2

0x0001,

0xfebf,	// (0x000ad8de) listrow_wgtman_pane_g

0x95e6,	// (0x000a7005) listrow_wgtman_pane_t1

0x95fe,	// (0x000a701d) listrow_wgtman_pane_t2

0x0001,

0xfec4,	// (0x000ad8e3) listrow_wgtman_pane_t

0x9624,	// (0x000a7043) wait_bar_pane_cp09

0xeec8,	// (0x000ac8e7) main_calllock_btn_pane

0xeed2,	// (0x000ac8f1) main_calllock_pane_g1

0x9d8e,	// (0x000a77ad) bg_button_pane_cp17

0xee87,	// (0x000ac8a6) main_calllock_btn_pane_g1

0xeede,	// (0x000ac8fd) main_calllock_btn_pane_t1

0x9d8e,	// (0x000a77ad) main_dialer3_pane

0x9d8e,	// (0x000a77ad) main_fmrd2_pane

0xce42,	// (0x000aa861) main_fs_bigclock_unlock_btn_pane_g1

0x963e,	// (0x000a705d) main_fs_bigclock_unlock_btn_pane_t1

0x964c,	// (0x000a706b) area_fmrd2_info_pane_ParamLimits

0x964c,	// (0x000a706b) area_fmrd2_info_pane

0x9658,	// (0x000a7077) area_fmrd2_visual_pane_ParamLimits

0x9658,	// (0x000a7077) area_fmrd2_visual_pane

0x9666,	// (0x000a7085) fmrd2_indi_pane_ParamLimits

0x9666,	// (0x000a7085) fmrd2_indi_pane

0x9673,	// (0x000a7092) area_fmrd2_visual_pane_g1

0x967b,	// (0x000a709a) area_fmrd2_visual_pane_t1

0x968b,	// (0x000a70aa) area_fmrd2_visual_pane_t2

0x969b,	// (0x000a70ba) area_fmrd2_visual_pane_t3

0x0002,

0xfece,	// (0x000ad8ed) area_fmrd2_visual_pane_t

0x96ab,	// (0x000a70ca) area_fmrd2_info_pane_g1

0x96b3,	// (0x000a70d2) area_fmrd2_info_pane_t1

0x96c3,	// (0x000a70e2) area_fmrd2_info_pane_t2

0x96d3,	// (0x000a70f2) area_fmrd2_info_pane_t3

0x96e3,	// (0x000a7102) area_fmrd2_info_pane_t4

0x0003,

0xfed5,	// (0x000ad8f4) area_fmrd2_info_pane_t

0x96f3,	// (0x000a7112) fmrd2_indi_pane_t1

0x9703,	// (0x000a7122) fmrd2_indi_pane_t2

0x9713,	// (0x000a7132) fmrd2_indi_pane_t3

0x0002,

0xfede,	// (0x000ad8fd) fmrd2_indi_pane_t

0x8258,	// (0x000a5c77) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8258,	// (0x000a5c77) list_single_fs_bigclock_indicator_pane_g5

0x830d,	// (0x000a5d2c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x830d,	// (0x000a5d2c) list_single_fs_bigclock_indicator_pane_t5

0x8e43,	// (0x000a6862) aid_cell_bcale_month_pane_ParamLimits

0x8e43,	// (0x000a6862) aid_cell_bcale_month_pane

0x8e61,	// (0x000a6880) bcale_month_pane_ParamLimits

0x8e61,	// (0x000a6880) bcale_month_pane

0x8e7f,	// (0x000a689e) bcale_preview_pane_ParamLimits

0x8e7f,	// (0x000a689e) bcale_preview_pane

0xeca9,	// (0x000ac6c8) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc8,	// (0x000ac6e7) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc8,	// (0x000ac6e7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe60,	// (0x000ad87f) list_single_fs_bigclock_pane_t_ParamLimits

0xfe60,	// (0x000ad87f) list_single_fs_bigclock_pane_t

0x9636,	// (0x000a7055) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfec9,	// (0x000ad8e8) main_fs_bigclock_unlock_btn_pane_g

0x9723,	// (0x000a7142) aid_dia3_key_size_ParamLimits

0x9723,	// (0x000a7142) aid_dia3_key_size

0x972f,	// (0x000a714e) aid_dia3_listrow_size_ParamLimits

0x972f,	// (0x000a714e) aid_dia3_listrow_size

0x973f,	// (0x000a715e) dia3_keypad_fun_pane_ParamLimits

0x973f,	// (0x000a715e) dia3_keypad_fun_pane

0x974f,	// (0x000a716e) dia3_keypad_num_pane_ParamLimits

0x974f,	// (0x000a716e) dia3_keypad_num_pane

0x975f,	// (0x000a717e) dia3_listscroll_pane_ParamLimits

0x975f,	// (0x000a717e) dia3_listscroll_pane

0x976d,	// (0x000a718c) dia3_numentry_pane_ParamLimits

0x976d,	// (0x000a718c) dia3_numentry_pane

0xeeed,	// (0x000ac90c) dia3_list_pane

0x977b,	// (0x000a719a) scroll_pane_cp12

0x9d8e,	// (0x000a77ad) bg_dia3_numentry_pane

0x9786,	// (0x000a71a5) dia3_numentry_pane_t1

0x9795,	// (0x000a71b4) cell_dia3_key_num_pane

0x979d,	// (0x000a71bc) cell_dia3_key0_fun_pane_ParamLimits

0x979d,	// (0x000a71bc) cell_dia3_key0_fun_pane

0x97aa,	// (0x000a71c9) cell_dia3_key1_fun_pane_ParamLimits

0x97aa,	// (0x000a71c9) cell_dia3_key1_fun_pane

0x97b7,	// (0x000a71d6) dia3_listrow_pane

0xe2ec,	// (0x000abd0b) bg_dia3_numentry_pane_g1

0x9d8e,	// (0x000a77ad) bg_button_pane_cp21

0x97c4,	// (0x000a71e3) cell_dia3_key_num_pane_t1

0x97d2,	// (0x000a71f1) cell_dia3_key_num_pane_t2

0x97e1,	// (0x000a7200) cell_dia3_key_num_pane_t3

0x97f0,	// (0x000a720f) cell_dia3_key_num_pane_t4

0x0003,

0xfee5,	// (0x000ad904) cell_dia3_key_num_pane_t

0x9d8e,	// (0x000a77ad) bg_button_pane_cp19

0x97ff,	// (0x000a721e) cell_dia3_key0_fun_pane_g1

0x9d8e,	// (0x000a77ad) bg_button_pane_cp20

0x9807,	// (0x000a7226) cell_dia3_key1_fun_pane_g1

0x980f,	// (0x000a722e) area_left_week_number_pane

0x9822,	// (0x000a7241) area_top_day_name_pane

0x9830,	// (0x000a724f) frame_month_view_pane

0xeef8,	// (0x000ac917) grid_month_view_pane

0x9845,	// (0x000a7264) cell_top_day_name_pane_ParamLimits

0x9845,	// (0x000a7264) cell_top_day_name_pane

0x9861,	// (0x000a7280) cell_area_left_week_number_pane_ParamLimits

0x9861,	// (0x000a7280) cell_area_left_week_number_pane

0x9882,	// (0x000a72a1) cell_month_view_pane_ParamLimits

0x9882,	// (0x000a72a1) cell_month_view_pane

0xef06,	// (0x000ac925) frm_month_g1

0x98ae,	// (0x000a72cd) frm_month_g2

0x98bf,	// (0x000a72de) frm_month_g3

0x98d0,	// (0x000a72ef) frm_month_g4

0x98e1,	// (0x000a7300) frm_month_g5

0x98f2,	// (0x000a7311) frm_month_g6

0x9905,	// (0x000a7324) frm_month_g7

0xef13,	// (0x000ac932) frm_month_g8

0x9918,	// (0x000a7337) frm_month_g9

0x9925,	// (0x000a7344) frm_month_g10

0x9932,	// (0x000a7351) frm_month_g11

0x993f,	// (0x000a735e) frm_month_g12

0x994c,	// (0x000a736b) frm_month_g13

0x995b,	// (0x000a737a) frm_month_g14

0x996a,	// (0x000a7389) frm_month_g15

0x9979,	// (0x000a7398) frm_month_g16

0x000f,

0xfeee,	// (0x000ad90d) frm_month_g

0xef20,	// (0x000ac93f) cell_top_day_name_pane_t1

0x9988,	// (0x000a73a7) cell_area_left_week_number_pane_g1

0x9997,	// (0x000a73b6) cell_area_left_week_number_pane_t1

0xd069,	// (0x000aaa88) cell_month_view_pane_g1

0x99ad,	// (0x000a73cc) cell_month_view_pane_t1

0x9d8e,	// (0x000a77ad) main_fps_pane

0xe729,	// (0x000ac148) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe729,	// (0x000ac148) cmail_ddmenu_btn02_pane_cp1

0xe745,	// (0x000ac164) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe745,	// (0x000ac164) cmail_ddmenu_btn02_pane_cp2

0x911f,	// (0x000a6b3e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x911f,	// (0x000a6b3e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe13,	// (0x000ad832) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe13,	// (0x000ad832) cmail_ddmenu_btn02_pane_g

0x913d,	// (0x000a6b5c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x913d,	// (0x000a6b5c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe18,	// (0x000ad837) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe18,	// (0x000ad837) cmail_ddmenu_btn02_pane_t

0x99c3,	// (0x000a73e2) fps_text_pane_ParamLimits

0x99c3,	// (0x000a73e2) fps_text_pane

0x99d0,	// (0x000a73ef) main_fps_pane_g1_ParamLimits

0x99d0,	// (0x000a73ef) main_fps_pane_g1

0x99dc,	// (0x000a73fb) wait_bar_pane_cp010_ParamLimits

0x99dc,	// (0x000a73fb) wait_bar_pane_cp010

0x99e8,	// (0x000a7407) fps_text_pane_t1_ParamLimits

0x99e8,	// (0x000a7407) fps_text_pane_t1

0x6213,	// (0x000a3c32) cam4_image_uncrop_pane_g1

0x621c,	// (0x000a3c3b) cam4_image_uncrop_pane_g2

0x6225,	// (0x000a3c44) cam4_image_uncrop_pane_g3

0x622e,	// (0x000a3c4d) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x000ad2f6) cam4_image_uncrop_pane_g

0x97b7,	// (0x000a71d6) dia3_listrow_pane_ParamLimits

0x9d8e,	// (0x000a77ad) main_phob2_pane

0x8cba,	// (0x000a66d9) cell_tport_appsw_pane_cp02_ParamLimits

0x8cba,	// (0x000a66d9) cell_tport_appsw_pane_cp02

0x8cc9,	// (0x000a66e8) cell_tport_appsw_pane_cp03_ParamLimits

0x8cc9,	// (0x000a66e8) cell_tport_appsw_pane_cp03

0x9d8e,	// (0x000a77ad) phob2_contact_card_pane

0x9d8e,	// (0x000a77ad) phob2_listscroll_pane

0xef33,	// (0x000ac952) phob2_list_pane

0xef3b,	// (0x000ac95a) scroll_pane_cp034

0x9a01,	// (0x000a7420) phob2_cc_data_pane_ParamLimits

0x9a01,	// (0x000a7420) phob2_cc_data_pane

0x9a18,	// (0x000a7437) phob2_cc_listscroll_pane_ParamLimits

0x9a18,	// (0x000a7437) phob2_cc_listscroll_pane

0x9a34,	// (0x000a7453) list_double_large_graphic_phob2_pane_ParamLimits

0x9a34,	// (0x000a7453) list_double_large_graphic_phob2_pane

0x9a4c,	// (0x000a746b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a4c,	// (0x000a746b) list_double_large_graphic_phob2_pane_g1

0x9a62,	// (0x000a7481) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a62,	// (0x000a7481) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff0f,	// (0x000ad92e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff0f,	// (0x000ad92e) list_double_large_graphic_phob2_pane_g

0x9a6e,	// (0x000a748d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a6e,	// (0x000a748d) list_double_large_graphic_phob2_pane_t1

0x9a83,	// (0x000a74a2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a83,	// (0x000a74a2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff14,	// (0x000ad933) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff14,	// (0x000ad933) list_double_large_graphic_phob2_pane_t

0x9d8e,	// (0x000a77ad) list_highlight_pane_cp024

0x9a95,	// (0x000a74b4) phob2_cc_button_pane

0x9a9d,	// (0x000a74bc) phob2_cc_data_pane_g1_ParamLimits

0x9a9d,	// (0x000a74bc) phob2_cc_data_pane_g1

0x9ab1,	// (0x000a74d0) phob2_cc_data_pane_g2_ParamLimits

0x9ab1,	// (0x000a74d0) phob2_cc_data_pane_g2

0x0001,

0xff19,	// (0x000ad938) phob2_cc_data_pane_g_ParamLimits

0xff19,	// (0x000ad938) phob2_cc_data_pane_g

0x9ac0,	// (0x000a74df) phob2_cc_data_pane_t1_ParamLimits

0x9ac0,	// (0x000a74df) phob2_cc_data_pane_t1

0x9ad9,	// (0x000a74f8) phob2_cc_data_pane_t2_ParamLimits

0x9ad9,	// (0x000a74f8) phob2_cc_data_pane_t2

0x9af2,	// (0x000a7511) phob2_cc_data_pane_t3_ParamLimits

0x9af2,	// (0x000a7511) phob2_cc_data_pane_t3

0x0002,

0xff1e,	// (0x000ad93d) phob2_cc_data_pane_t_ParamLimits

0xff1e,	// (0x000ad93d) phob2_cc_data_pane_t

0xef43,	// (0x000ac962) phob2_cc_list_pane_ParamLimits

0xef43,	// (0x000ac962) phob2_cc_list_pane

0xdd97,	// (0x000ab7b6) scroll_pane_cp035_ParamLimits

0xdd97,	// (0x000ab7b6) scroll_pane_cp035

0xafad,	// (0x000a89cc) bg_button_pane_cp033

0xef4f,	// (0x000ac96e) phob2_cc_button_pane_g1

0xef5b,	// (0x000ac97a) phob2_cc_button_pane_t1

0xef70,	// (0x000ac98f) phob2_cc_button_pane_t2

0x0001,

0xff25,	// (0x000ad944) phob2_cc_button_pane_t

0x9b0b,	// (0x000a752a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9b0b,	// (0x000a752a) list_double_large_graphic_phob2_cc_pane

0x9b5a,	// (0x000a7579) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b5a,	// (0x000a7579) list_double_large_graphic_phob2_cc_pane_g1

0x9b6b,	// (0x000a758a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9b6b,	// (0x000a758a) list_double_large_graphic_phob2_cc_pane_g2

0x9b7a,	// (0x000a7599) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b7a,	// (0x000a7599) list_double_large_graphic_phob2_cc_pane_g3

0x9b89,	// (0x000a75a8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b89,	// (0x000a75a8) list_double_large_graphic_phob2_cc_pane_g4

0x9b9a,	// (0x000a75b9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b9a,	// (0x000a75b9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2a,	// (0x000ad949) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2a,	// (0x000ad949) list_double_large_graphic_phob2_cc_pane_g

0x9ba9,	// (0x000a75c8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ba9,	// (0x000a75c8) list_double_large_graphic_phob2_cc_pane_t1

0x9bd2,	// (0x000a75f1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9bd2,	// (0x000a75f1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff35,	// (0x000ad954) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff35,	// (0x000ad954) list_double_large_graphic_phob2_cc_pane_t

0xef82,	// (0x000ac9a1) list_highlight_pane_cp025_ParamLimits

0xef82,	// (0x000ac9a1) list_highlight_pane_cp025

0xafad,	// (0x000a89cc) bg_button_pane_cp033_ParamLimits

0xef4f,	// (0x000ac96e) phob2_cc_button_pane_g1_ParamLimits

0xef5b,	// (0x000ac97a) phob2_cc_button_pane_t1_ParamLimits

0xef70,	// (0x000ac98f) phob2_cc_button_pane_t2_ParamLimits

0xff25,	// (0x000ad944) phob2_cc_button_pane_t_ParamLimits

0x0d85,	// (0x0009e7a4) popup_wgtman_window

0xd94a,	// (0x000ab369) scroll_pane_cp038

0x952f,	// (0x000a6f4e) wgtman_btn_pane_cp_01_ParamLimits

0x952f,	// (0x000a6f4e) wgtman_btn_pane_cp_01

0xef90,	// (0x000ac9af) wgtman_content_pane

0xef99,	// (0x000ac9b8) wgtman_heading_pane

0x9d8e,	// (0x000a77ad) bg_heading_pane_cp02

0xefa2,	// (0x000ac9c1) wgtman_heading_pane_g1

0xefaa,	// (0x000ac9c9) wgtman_heading_pane_t1

0xefb8,	// (0x000ac9d7) scroll_pane_cp036

0xefc0,	// (0x000ac9df) wgtman_list_pane

0xe8dc,	// (0x000ac2fb) wgtman_list_pane_t1_ParamLimits

0xe8dc,	// (0x000ac2fb) wgtman_list_pane_t1

0x6170,	// (0x000a3b8f) cam4_grid_pane

0x6f54,	// (0x000a4973) bg_button_pane_cp015_ParamLimits

0x6f66,	// (0x000a4985) bg_button_pane_cp016_ParamLimits

0x6f79,	// (0x000a4998) bg_button_pane_cp017_ParamLimits

0x6fcf,	// (0x000a49ee) popup_vitu2_query_window_g3_ParamLimits

0x6fcf,	// (0x000a49ee) popup_vitu2_query_window_g3

0x708e,	// (0x000a4aad) popup_vitu2_query_window_t6_ParamLimits

0x708e,	// (0x000a4aad) popup_vitu2_query_window_t6

0x70b9,	// (0x000a4ad8) popup_vitu2_query_window_t7_ParamLimits

0x70b9,	// (0x000a4ad8) popup_vitu2_query_window_t7

0xd806,	// (0x000ab225) cam4_grid_pane_g1

0xd80f,	// (0x000ab22e) cam4_grid_pane_g2

0xefc8,	// (0x000ac9e7) cam4_grid_pane_g3

0xefd1,	// (0x000ac9f0) cam4_grid_pane_g4

0x0003,

0xff3a,	// (0x000ad959) cam4_grid_pane_g

0x1da8,	// (0x0009f7c7) aid_placing_vt_slider_lsc_ParamLimits

0x20db,	// (0x0009fafa) vidtel_button_pane_ParamLimits

0x20db,	// (0x0009fafa) vidtel_button_pane

0x9d8e,	// (0x000a77ad) bg_button_pane_cp034

0xefdc,	// (0x000ac9fb) vidtel_button_pane_g1

0xefe4,	// (0x000aca03) vidtel_button_pane_t1

0xda4e,	// (0x000ab46d) aid_size_vtel_slider_touch

0xdd97,	// (0x000ab7b6) scroll_pane_cp039

0x7eff,	// (0x000a591e) ncim_query_button_pane_cp01_ParamLimits

0x7f1e,	// (0x000a593d) ncimui_query_pane_g1_ParamLimits

0xafad,	// (0x000a89cc) input_focus_pane_cp012_ParamLimits

0xe32a,	// (0x000abd49) ncim_query_entry_pane_t1_ParamLimits

0xdd97,	// (0x000ab7b6) scroll_pane_cp039_ParamLimits

0xb46a,	// (0x000a8e89) navi_pane_bcale_mc_g1

0xb472,	// (0x000a8e91) navi_pane_bcale_mc_t1

0xe77b,	// (0x000ac19a) main_sp_fs_email_pane_g1

0xe787,	// (0x000ac1a6) main_sp_fs_email_pane_g2

0x0001,

0xfccb,	// (0x000ad6ea) main_sp_fs_email_pane_g

0xea31,	// (0x000ac450) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea31,	// (0x000ac450) list_single_cale_mrui_row_pane_g3

0x915d,	// (0x000a6b7c) list_single_recal_day_pane_g5_event_pane

0xa9f5,	// (0x000a8414) list_single_recal_day_pane_g7

0xeffa,	// (0x000aca19) list_recal_day_event_pane_cp01

0xf003,	// (0x000aca22) list_recal_vselct_arw_lo_pane_cp01

0xf00b,	// (0x000aca2a) list_recal_vselct_arw_up_pane_cp01

0xf013,	// (0x000aca32) list_recal_vselct_pane_cp01

0xda70,	// (0x000ab48f) list_recal_day_event_pane_cp01_g1

0xafdb,	// (0x000a89fa) list_recal_day_event_pane_cp01_t1

0xa9fd,	// (0x000a841c) list_single_recal_day_pane_t1_ParamLimits

0xaa0f,	// (0x000a842e) list_single_recal_day_pane_t2_ParamLimits

0xfe28,	// (0x000ad847) list_single_recal_day_pane_t_ParamLimits

0xa43b,	// (0x000a7e5a) bg_notes_pane_ParamLimits

0xa4de,	// (0x000a7efd) list_notes_pane_ParamLimits

0x10a9,	// (0x0009eac8) scroll_pane_cp06_ParamLimits

0xa500,	// (0x000a7f1f) main_notes_pane_ParamLimits

0xafad,	// (0x000a89cc) main_welc_pane

0x9c0a,	// (0x000a7629) main_welc_body_pane_ParamLimits

0x9c0a,	// (0x000a7629) main_welc_body_pane

0x9c25,	// (0x000a7644) main_welc_opti_pane_ParamLimits

0x9c25,	// (0x000a7644) main_welc_opti_pane

0x9c66,	// (0x000a7685) main_welc_pane_t1_ParamLimits

0x9c66,	// (0x000a7685) main_welc_pane_t1

0x9cc8,	// (0x000a76e7) main_welc_body_row_pane_ParamLimits

0x9cc8,	// (0x000a76e7) main_welc_body_row_pane

0xd2bd,	// (0x000aacdc) main_welc_opti_row_pane_ParamLimits

0xd2bd,	// (0x000aacdc) main_welc_opti_row_pane

0xf01d,	// (0x000aca3c) main_welc_opti_row_pane_g1

0x9ce2,	// (0x000a7701) main_welc_opti_row_pane_t1

0xf025,	// (0x000aca44) main_welc_body_row_pane_t1

0xed80,	// (0x000ac79f) popup_notif_wgt_heading_pane

0xed9a,	// (0x000ac7b9) aid_size_list_notif_wgt_del_ParamLimits

0xeda7,	// (0x000ac7c6) list_notif_wgt_row_pane_g1_ParamLimits

0xedb3,	// (0x000ac7d2) list_notif_wgt_row_pane_g2_ParamLimits

0xedc2,	// (0x000ac7e1) list_notif_wgt_row_pane_g3_ParamLimits

0xfe8f,	// (0x000ad8ae) list_notif_wgt_row_pane_g_ParamLimits

0xedcf,	// (0x000ac7ee) list_notif_wgt_row_pane_t1_ParamLimits

0xede5,	// (0x000ac804) list_notif_wgt_row_pane_t2_ParamLimits

0xedf7,	// (0x000ac816) list_notif_wgt_row_pane_t3_ParamLimits

0xfe96,	// (0x000ad8b5) list_notif_wgt_row_pane_t_ParamLimits

0x95bb,	// (0x000a6fda) listrow_wgtman_pane_g1_ParamLimits

0x95c8,	// (0x000a6fe7) listrow_wgtman_pane_g2_ParamLimits

0xfebf,	// (0x000ad8de) listrow_wgtman_pane_g_ParamLimits

0x95e6,	// (0x000a7005) listrow_wgtman_pane_t1_ParamLimits

0x95fe,	// (0x000a701d) listrow_wgtman_pane_t2_ParamLimits

0xfec4,	// (0x000ad8e3) listrow_wgtman_pane_t_ParamLimits

0x9624,	// (0x000a7043) wait_bar_pane_cp09_ParamLimits

0x9d8e,	// (0x000a77ad) bg_popup_heading_pane_cp02

0xf034,	// (0x000aca53) popup_notif_wgt_heading_pane_g1

0xf03c,	// (0x000aca5b) popup_notif_wgt_heading_pane_t1

0x9d8e,	// (0x000a77ad) main_vids_pane

0x9d8e,	// (0x000a77ad) vids_listscroll_pane

0x9cf1,	// (0x000a7710) scroll_pane_cp040

0x9d8e,	// (0x000a77ad) vids_list_pane

0x9cfc,	// (0x000a771b) vids_list_double_pane_ParamLimits

0x9cfc,	// (0x000a771b) vids_list_double_pane

0x9d10,	// (0x000a772f) vids_list_double_pane_g1

0x9d19,	// (0x000a7738) vids_list_double_pane_t1

0x9d29,	// (0x000a7748) vids_list_double_pane_t2

0x0001,

0xff51,	// (0x000ad970) vids_list_double_pane_t

0x4097,	// (0x000a1ab6) main_ncimui_pane_ParamLimits

0x7d40,	// (0x000a575f) main_ncimui_pane_g1_ParamLimits

0x7d4e,	// (0x000a576d) main_ncimui_pane_g2_ParamLimits

0x7d4e,	// (0x000a576d) main_ncimui_pane_g2

0x0001,

0xfbcc,	// (0x000ad5eb) main_ncimui_pane_g_ParamLimits

0xfbcc,	// (0x000ad5eb) main_ncimui_pane_g

0x9c40,	// (0x000a765f) main_welc_pane_g1_ParamLimits

0x9c40,	// (0x000a765f) main_welc_pane_g1

0x9c4c,	// (0x000a766b) main_welc_pane_g2_ParamLimits

0x9c4c,	// (0x000a766b) main_welc_pane_g2

0x0002,

0xff43,	// (0x000ad962) main_welc_pane_g_ParamLimits

0xff43,	// (0x000ad962) main_welc_pane_g

0xa43b,	// (0x000a7e5a) listscroll_mce_pane_ParamLimits

0xb5e7,	// (0x000a9006) wait_bar_pane_cp10

0xc9fe,	// (0x000aa41d) main_cale_day_pane_ParamLimits

0xc9fe,	// (0x000aa41d) main_cale_week_pane_ParamLimits

0xa43b,	// (0x000a7e5a) main_messa_pane_ParamLimits

0x548a,	// (0x000a2ea9) main_clock2_btn_pane_ParamLimits

0x548a,	// (0x000a2ea9) main_clock2_btn_pane

0xd1f1,	// (0x000aac10) main_clock2_btn_pane_cp01_ParamLimits

0xd1f1,	// (0x000aac10) main_clock2_btn_pane_cp01

0xea02,	// (0x000ac421) list_cale_mrui_pane_ParamLimits

0xee2d,	// (0x000ac84c) main_cf0_pane_g2

0x0001,

0xfe9d,	// (0x000ad8bc) main_cf0_pane_g

0x980f,	// (0x000a722e) area_left_week_number_pane_ParamLimits

0x9822,	// (0x000a7241) area_top_day_name_pane_ParamLimits

0x9830,	// (0x000a724f) frame_month_view_pane_ParamLimits

0xeef8,	// (0x000ac917) grid_month_view_pane_ParamLimits

0xef06,	// (0x000ac925) frm_month_g1_ParamLimits

0x98ae,	// (0x000a72cd) frm_month_g2_ParamLimits

0x98bf,	// (0x000a72de) frm_month_g3_ParamLimits

0x98d0,	// (0x000a72ef) frm_month_g4_ParamLimits

0x98e1,	// (0x000a7300) frm_month_g5_ParamLimits

0x98f2,	// (0x000a7311) frm_month_g6_ParamLimits

0x9905,	// (0x000a7324) frm_month_g7_ParamLimits

0xef13,	// (0x000ac932) frm_month_g8_ParamLimits

0x9918,	// (0x000a7337) frm_month_g9_ParamLimits

0x9925,	// (0x000a7344) frm_month_g10_ParamLimits

0x9932,	// (0x000a7351) frm_month_g11_ParamLimits

0x993f,	// (0x000a735e) frm_month_g12_ParamLimits

0x994c,	// (0x000a736b) frm_month_g13_ParamLimits

0x995b,	// (0x000a737a) frm_month_g14_ParamLimits

0x996a,	// (0x000a7389) frm_month_g15_ParamLimits

0x9979,	// (0x000a7398) frm_month_g16_ParamLimits

0xfeee,	// (0x000ad90d) frm_month_g_ParamLimits

0xef20,	// (0x000ac93f) cell_top_day_name_pane_t1_ParamLimits

0x9988,	// (0x000a73a7) cell_area_left_week_number_pane_g1_ParamLimits

0x9997,	// (0x000a73b6) cell_area_left_week_number_pane_t1_ParamLimits

0xd069,	// (0x000aaa88) cell_month_view_pane_g1_ParamLimits

0x99ad,	// (0x000a73cc) cell_month_view_pane_t1_ParamLimits

0xa433,	// (0x000a7e52) main_clock2_btn_pane_g1

0xf04a,	// (0x000aca69) main_clock2_btn_pane_t1

0xafad,	// (0x000a89cc) listscroll_cmail_pane_ParamLimits

0xe77b,	// (0x000ac19a) main_sp_fs_email_pane_g1_ParamLimits

0xe787,	// (0x000ac1a6) main_sp_fs_email_pane_g2_ParamLimits

0xfccb,	// (0x000ad6ea) main_sp_fs_email_pane_g_ParamLimits

0xeb0a,	// (0x000ac529) list_recal_day_pane_ParamLimits

0xeb1b,	// (0x000ac53a) mian_recal_day_pane_t1

0x896f,	// (0x000a638e) list_single_dyc_row_text_pane_t4_ParamLimits

0x896f,	// (0x000a638e) list_single_dyc_row_text_pane_t4

0x89b4,	// (0x000a63d3) list_single_dyc_row_text_pane_t5_ParamLimits

0x89b4,	// (0x000a63d3) list_single_dyc_row_text_pane_t5

0xa774,	// (0x000a8193) list_single_dyc_row_text_pane_t6_ParamLimits

0xa774,	// (0x000a8193) list_single_dyc_row_text_pane_t6

0x2eca,	// (0x000a08e9) aid_mgn_list_cale_time_pane

0x4097,	// (0x000a1ab6) main_gallery2_pane_ParamLimits

0xd205,	// (0x000aac24) main_clock2_pane_cp01_t1

0xd213,	// (0x000aac32) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x000ad1c8) main_clock2_pane_cp01_t

0x15b3,	// (0x0009efd2) cale_week_scroll_pane_g16_ParamLimits

0x15b3,	// (0x0009efd2) cale_week_scroll_pane_g16

0xab43,	// (0x000a8562) vorec_slider_pane

0xefe4,	// (0x000aca03) vidtel_button_pane_t1_ParamLimits

0x91b8,	// (0x000a6bd7) main_fs_bigclock_clock_pane_g1_ParamLimits

0x91b8,	// (0x000a6bd7) main_fs_bigclock_clock_pane_g2_ParamLimits

0x91c7,	// (0x000a6be6) main_fs_bigclock_clock_pane_g3_ParamLimits

0x91c7,	// (0x000a6be6) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe4b,	// (0x000ad86a) main_fs_bigclock_clock_pane_g_ParamLimits

0x91d7,	// (0x000a6bf6) main_fs_bigclock_clock_pane_t1_ParamLimits

0x91ec,	// (0x000a6c0b) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe54,	// (0x000ad873) main_fs_bigclock_clock_pane_t_ParamLimits

0x4ce0,	// (0x000a26ff) main_mup3_lyrics_pane_ParamLimits

0x4ce0,	// (0x000a26ff) main_mup3_lyrics_pane

0x9d5f,	// (0x000a777e) main_mup3_lyrics_pane_t1_ParamLimits

0x9d5f,	// (0x000a777e) main_mup3_lyrics_pane_t1

0x5ad3,	// (0x000a34f2) aid_main_mp4_pane_t1_area

0x5add,	// (0x000a34fc) aid_main_mp4_pane_t2_area

0x5bea,	// (0x000a3609) main_mp4_pane_g7_ParamLimits

0x5bea,	// (0x000a3609) main_mp4_pane_g7

0x5bf6,	// (0x000a3615) main_mp4_pane_g8_ParamLimits

0x5bf6,	// (0x000a3615) main_mp4_pane_g8

0x6014,	// (0x000a3a33) aid_call6_pane_g1_size

0x9b39,	// (0x000a7558) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9b39,	// (0x000a7558) list_double_large_graphic_phob2_other_pane

0x9d86,	// (0x000a77a5) list_double_large_graphic_phob2_other_pane_g1

0x9d8e,	// (0x000a77ad) list_highlight_pane_cp026

0xafad,	// (0x000a89cc) main_welc_pane_ParamLimits

0x86a2,	// (0x000a60c1) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x86a2,	// (0x000a60c1) main_sp_fs_ctrlbar_pane_g3

0x86bc,	// (0x000a60db) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x86bc,	// (0x000a60db) main_sp_fs_ctrlbar_pane_g4

0x86ee,	// (0x000a610d) toolbar2_fixed_button_pane_cp01

0x86f9,	// (0x000a6118) toolbar2_fixed_button_pane_cp02

0x8706,	// (0x000a6125) toolbar2_fixed_button_pane_cp03

0x9bfb,	// (0x000a761a) list_welc_entry_pane_ParamLimits

0x9bfb,	// (0x000a761a) list_welc_entry_pane

0x9c5a,	// (0x000a7679) main_welc_pane_g3_ParamLimits

0x9c5a,	// (0x000a7679) main_welc_pane_g3

0x9c84,	// (0x000a76a3) main_welc_pane_t2_ParamLimits

0x9c84,	// (0x000a76a3) main_welc_pane_t2

0x9c98,	// (0x000a76b7) main_welc_pane_t3_ParamLimits

0x9c98,	// (0x000a76b7) main_welc_pane_t3

0x0002,

0xff4a,	// (0x000ad969) main_welc_pane_t_ParamLimits

0xff4a,	// (0x000ad969) main_welc_pane_t

0x9cac,	// (0x000a76cb) welc_button_pane_ParamLimits

0x9cac,	// (0x000a76cb) welc_button_pane

0x9cba,	// (0x000a76d9) welc_service_logo_pane_ParamLimits

0x9cba,	// (0x000a76d9) welc_service_logo_pane

0xf058,	// (0x000aca77) list_single_welc_entry_pane_ParamLimits

0xf058,	// (0x000aca77) list_single_welc_entry_pane

0xf06b,	// (0x000aca8a) list_single_welc_entry_pane_g1

0xf073,	// (0x000aca92) list_single_welc_entry_pane_t1

0xf081,	// (0x000acaa0) list_single_welc_entry_pane_t2

0x0001,

0xff56,	// (0x000ad975) list_single_welc_entry_pane_t

0x9d8e,	// (0x000a77ad) bg_button_pane_cp035

0xf08f,	// (0x000acaae) welc_button_pane_t1

0xf09d,	// (0x000acabc) welc_service_logo_pane_g1

0xf0a6,	// (0x000acac5) welc_service_logo_pane_g2

0x0001,

0xff5b,	// (0x000ad97a) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
