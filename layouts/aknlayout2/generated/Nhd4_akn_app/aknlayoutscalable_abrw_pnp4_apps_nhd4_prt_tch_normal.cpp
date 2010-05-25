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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0001dea1 };

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
0x2686,	// (0x00020527) Screen

0x2692,	// (0x00020533) application_window

0x269e,	// (0x0002053f) area_bottom_pane_ParamLimits

0x269e,	// (0x0002053f) area_bottom_pane

0x0e5c,	// (0x0001ecfd) area_top_pane_ParamLimits

0x0e5c,	// (0x0001ecfd) area_top_pane

0x0ec0,	// (0x0001ed61) call_video_uplink_pane_ParamLimits

0x0ec0,	// (0x0001ed61) call_video_uplink_pane

0x0eff,	// (0x0001eda0) main_pane_ParamLimits

0x0eff,	// (0x0001eda0) main_pane

0xc3b8,	// (0x0002a259) context_pane

0x5518,	// (0x000233b9) navi_pane

0x553e,	// (0x000233df) popup_cale_events_window_ParamLimits

0x553e,	// (0x000233df) popup_cale_events_window

0xc3cb,	// (0x0002a26c) popup_mup_playback_window

0x5556,	// (0x000233f7) signal_pane

0xa30d,	// (0x000281ae) main_browser_pane

0xa500,	// (0x000283a1) main_burst_pane

0x14bb,	// (0x0001f35c) main_calc_pane

0xc39e,	// (0x0002a23f) main_cale_day_pane

0x2aa5,	// (0x00020946) main_cale_month_pane

0xc39e,	// (0x0002a23f) main_cale_week_pane

0xa500,	// (0x000283a1) main_call_pane

0x9fe1,	// (0x00027e82) main_call_poc_pane

0xa500,	// (0x000283a1) main_camera_pane

0xa500,	// (0x000283a1) main_chi_dic_pane

0xad03,	// (0x00028ba4) main_clock_pane

0x9fe1,	// (0x00027e82) main_fmradio_pane

0xa500,	// (0x000283a1) main_graph_messa_pane

0x9fe1,	// (0x00027e82) main_help_pane

0xa30d,	// (0x000281ae) main_im_pane

0xa23c,	// (0x000280dd) main_image_pane_ParamLimits

0xa23c,	// (0x000280dd) main_image_pane

0x9fe1,	// (0x00027e82) main_location2_pane

0xa500,	// (0x000283a1) main_location_pane

0xa23c,	// (0x000280dd) main_messa_pane

0x9fe1,	// (0x00027e82) main_mp2_pane

0xa500,	// (0x000283a1) main_mp_pane

0x9fe1,	// (0x00027e82) main_msg_pane

0x9fe1,	// (0x00027e82) main_mup_eq_pane

0x9fe1,	// (0x00027e82) main_mup_pane

0xa30d,	// (0x000281ae) main_notes_pane

0x9fe1,	// (0x00027e82) main_pec_pane

0x9fe1,	// (0x00027e82) main_phob_pane

0x9fe1,	// (0x00027e82) main_pinb_pane

0x9fe1,	// (0x00027e82) main_postcard_pane

0x9fe1,	// (0x00027e82) main_qdial_pane

0xa500,	// (0x000283a1) main_skin_pane

0x9fe1,	// (0x00027e82) main_smil2_pane

0xa500,	// (0x000283a1) main_smil_pane

0xa500,	// (0x000283a1) main_video_pane

0xa500,	// (0x000283a1) main_video_tele_pane

0xa23c,	// (0x000280dd) main_viewer_pane_ParamLimits

0xa23c,	// (0x000280dd) main_viewer_pane

0xa500,	// (0x000283a1) main_vorec_pane

0x1507,	// (0x0001f3a8) popup_blid_sat_info_window_ParamLimits

0x1507,	// (0x0001f3a8) popup_blid_sat_info_window

0x1527,	// (0x0001f3c8) popup_dyc_status_message_window_ParamLimits

0x1527,	// (0x0001f3c8) popup_dyc_status_message_window

0x1535,	// (0x0001f3d6) popup_grid_large_graphic_window_ParamLimits

0x1535,	// (0x0001f3d6) popup_grid_large_graphic_window

0x15c4,	// (0x0001f465) popup_loc_request_window_ParamLimits

0x15c4,	// (0x0001f465) popup_loc_request_window

0x1611,	// (0x0001f4b2) popup_wml_address_window_ParamLimits

0x1611,	// (0x0001f4b2) popup_wml_address_window

0x53fa,	// (0x0002329b) call_muted_g1

0x50b6,	// (0x00022f57) popup_call_audio_conf_window_ParamLimits

0x50b6,	// (0x00022f57) popup_call_audio_conf_window

0x540a,	// (0x000232ab) popup_call_audio_first_window_ParamLimits

0x540a,	// (0x000232ab) popup_call_audio_first_window

0x544a,	// (0x000232eb) popup_call_audio_in_window_ParamLimits

0x544a,	// (0x000232eb) popup_call_audio_in_window

0x546e,	// (0x0002330f) popup_call_audio_out_window_ParamLimits

0x546e,	// (0x0002330f) popup_call_audio_out_window

0x5490,	// (0x00023331) popup_call_audio_second_window_ParamLimits

0x5490,	// (0x00023331) popup_call_audio_second_window

0x54c0,	// (0x00023361) popup_call_audio_wait_window_ParamLimits

0x54c0,	// (0x00023361) popup_call_audio_wait_window

0x54e1,	// (0x00023382) popup_number_entry_window_ParamLimits

0x54e1,	// (0x00023382) popup_number_entry_window

0x9bce,	// (0x00027a6f) bg_popup_call_pane_cp05_ParamLimits

0x9bce,	// (0x00027a6f) bg_popup_call_pane_cp05

0x9bee,	// (0x00027a8f) popup_number_entry_window_t1

0x9c01,	// (0x00027aa2) popup_number_entry_window_t2

0x9c13,	// (0x00027ab4) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0002cf6b) popup_number_entry_window_t

0x9c25,	// (0x00027ac6) text_title_cp2

0x9c38,	// (0x00027ad9) bg_popup_call_pane_cp_ParamLimits

0x9c38,	// (0x00027ad9) bg_popup_call_pane_cp

0x9c46,	// (0x00027ae7) call_thumbnail_pane

0x9c4e,	// (0x00027aef) popup_call_audio_in_window_g1_ParamLimits

0x9c4e,	// (0x00027aef) popup_call_audio_in_window_g1

0x9c5a,	// (0x00027afb) popup_call_audio_in_window_g2_ParamLimits

0x9c5a,	// (0x00027afb) popup_call_audio_in_window_g2

0x9c66,	// (0x00027b07) popup_call_audio_in_window_g3_ParamLimits

0x9c66,	// (0x00027b07) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0002cf74) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0002cf74) popup_call_audio_in_window_g

0x9c72,	// (0x00027b13) popup_call_audio_in_window_t1_ParamLimits

0x9c72,	// (0x00027b13) popup_call_audio_in_window_t1

0x9c8e,	// (0x00027b2f) popup_call_audio_in_window_t2_ParamLimits

0x9c8e,	// (0x00027b2f) popup_call_audio_in_window_t2

0x9caa,	// (0x00027b4b) popup_call_audio_in_window_t3_ParamLimits

0x9caa,	// (0x00027b4b) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0002cf7b) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0002cf7b) popup_call_audio_in_window_t

0x9c38,	// (0x00027ad9) bg_popup_call_pane_cp01_ParamLimits

0x9c38,	// (0x00027ad9) bg_popup_call_pane_cp01

0x9c46,	// (0x00027ae7) call_thumbnail_pane_cp02

0x9cbd,	// (0x00027b5e) call_type_pane_cp022

0x9cc5,	// (0x00027b66) popup_call_audio_out_window_g1_ParamLimits

0x9cc5,	// (0x00027b66) popup_call_audio_out_window_g1

0x9cd7,	// (0x00027b78) popup_call_audio_out_window_g2_ParamLimits

0x9cd7,	// (0x00027b78) popup_call_audio_out_window_g2

0x9ce3,	// (0x00027b84) popup_call_audio_out_window_g3_ParamLimits

0x9ce3,	// (0x00027b84) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0002cf82) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0002cf82) popup_call_audio_out_window_g

0x9cf5,	// (0x00027b96) popup_call_audio_out_window_t1_ParamLimits

0x9cf5,	// (0x00027b96) popup_call_audio_out_window_t1

0x9d0d,	// (0x00027bae) popup_call_audio_out_window_t2_ParamLimits

0x9d0d,	// (0x00027bae) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0002cf89) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0002cf89) popup_call_audio_out_window_t

0x9d22,	// (0x00027bc3) bg_popup_call_pane_ParamLimits

0x9d22,	// (0x00027bc3) bg_popup_call_pane

0x271b,	// (0x000205bc) call_thumbnail_pane_cp_ParamLimits

0x271b,	// (0x000205bc) call_thumbnail_pane_cp

0x9da6,	// (0x00027c47) call_type_pane_cp01_ParamLimits

0x9da6,	// (0x00027c47) call_type_pane_cp01

0x9dea,	// (0x00027c8b) popup_call_audio_first_window_g1_ParamLimits

0x9dea,	// (0x00027c8b) popup_call_audio_first_window_g1

0x9e36,	// (0x00027cd7) popup_call_audio_first_window_g2_ParamLimits

0x9e36,	// (0x00027cd7) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0002cf8e) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0002cf8e) popup_call_audio_first_window_g

0x9e7a,	// (0x00027d1b) popup_call_audio_first_window_t1_ParamLimits

0x9e7a,	// (0x00027d1b) popup_call_audio_first_window_t1

0x9f26,	// (0x00027dc7) popup_call_audio_first_window_t4_ParamLimits

0x9f26,	// (0x00027dc7) popup_call_audio_first_window_t4

0x9fb2,	// (0x00027e53) popup_call_audio_first_window_t5_ParamLimits

0x9fb2,	// (0x00027e53) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0002cf93) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0002cf93) popup_call_audio_first_window_t

0x9fe1,	// (0x00027e82) bg_popup_call_pane_cp02

0x9feb,	// (0x00027e8c) call_type_pane_cp023

0x9ff3,	// (0x00027e94) popup_call_audio_wait_window_g1

0x9ffb,	// (0x00027e9c) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002cf9a) popup_call_audio_wait_window_g

0xa003,	// (0x00027ea4) popup_call_audio_wait_window_t3

0xa011,	// (0x00027eb2) bg_popup_call_pane_cp03_ParamLimits

0xa011,	// (0x00027eb2) bg_popup_call_pane_cp03

0xa071,	// (0x00027f12) call_thumbnail_pane_cp011_ParamLimits

0xa071,	// (0x00027f12) call_thumbnail_pane_cp011

0xa07d,	// (0x00027f1e) call_type_pane_cp034_ParamLimits

0xa07d,	// (0x00027f1e) call_type_pane_cp034

0xa0b9,	// (0x00027f5a) popup_call_audio_second_window_g1_ParamLimits

0xa0b9,	// (0x00027f5a) popup_call_audio_second_window_g1

0xa0f5,	// (0x00027f96) popup_call_audio_second_window_g2_ParamLimits

0xa0f5,	// (0x00027f96) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0002cf9f) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0002cf9f) popup_call_audio_second_window_g

0xa131,	// (0x00027fd2) popup_call_audio_second_window_t1_ParamLimits

0xa131,	// (0x00027fd2) popup_call_audio_second_window_t1

0xa1b2,	// (0x00028053) popup_call_audio_second_window_t2_ParamLimits

0xa1b2,	// (0x00028053) popup_call_audio_second_window_t2

0xa1e8,	// (0x00028089) popup_call_audio_second_window_t3_ParamLimits

0xa1e8,	// (0x00028089) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0002cfa4) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0002cfa4) popup_call_audio_second_window_t

0x9fe1,	// (0x00027e82) bg_popup_call_pane_cp04

0xa21e,	// (0x000280bf) list_conf_pane

0xa226,	// (0x000280c7) popup_call_audio_conf_window_t1

0xa234,	// (0x000280d5) call_thumbnail_pane_g1

0xa23c,	// (0x000280dd) bg_pinb_pane_ParamLimits

0xa23c,	// (0x000280dd) bg_pinb_pane

0xa24a,	// (0x000280eb) find_pinb_pane

0xa253,	// (0x000280f4) listscroll_pinb_pane_ParamLimits

0xa253,	// (0x000280f4) listscroll_pinb_pane

0xa262,	// (0x00028103) pinb_bg_pane_g1

0x273f,	// (0x000205e0) pinb_bg_pane_g2

0x274b,	// (0x000205ec) pinb_bg_pane_g3

0x2757,	// (0x000205f8) pinb_bg_pane_g4

0x2763,	// (0x00020604) pinb_bg_pane_g5

0x276f,	// (0x00020610) pinb_bg_pane_g6

0x277a,	// (0x0002061b) pinb_bg_pane_g7

0x2785,	// (0x00020626) pinb_bg_pane_g8

0x2790,	// (0x00020631) pinb_bg_pane_g9

0x279a,	// (0x0002063b) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0002cfab) pinb_bg_pane_g

0x27b7,	// (0x00020658) grid_pinb_pane

0x27c2,	// (0x00020663) list_pinb_pane

0x27cd,	// (0x0002066e) scroll_pane_cp01_ParamLimits

0x27cd,	// (0x0002066e) scroll_pane_cp01

0xa26c,	// (0x0002810d) find_pinb_pane_g1_ParamLimits

0xa26c,	// (0x0002810d) find_pinb_pane_g1

0xa284,	// (0x00028125) find_pinb_pane_t1

0xa296,	// (0x00028137) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0002cfc5) find_pinb_pane_t

0xa2ab,	// (0x0002814c) input_focus_pane_cp01_ParamLimits

0xa2ab,	// (0x0002814c) input_focus_pane_cp01

0x27df,	// (0x00020680) cell_pinb_pane_ParamLimits

0x27df,	// (0x00020680) cell_pinb_pane

0x280a,	// (0x000206ab) cell_pinb_pane_g1_ParamLimits

0x280a,	// (0x000206ab) cell_pinb_pane_g1

0xa2b7,	// (0x00028158) cell_pinb_pane_g2_ParamLimits

0xa2b7,	// (0x00028158) cell_pinb_pane_g2

0xa2c3,	// (0x00028164) cell_pinb_pane_g3_ParamLimits

0xa2c3,	// (0x00028164) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0002cfca) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0002cfca) cell_pinb_pane_g

0x9fe1,	// (0x00027e82) grid_highlight_pane_cp01

0x281f,	// (0x000206c0) list_pinb_item_pane_ParamLimits

0x281f,	// (0x000206c0) list_pinb_item_pane

0x9fe1,	// (0x00027e82) list_highlight_pane_cp02

0x2848,	// (0x000206e9) list_pinb_item_pane_g1_ParamLimits

0x2848,	// (0x000206e9) list_pinb_item_pane_g1

0x2855,	// (0x000206f6) list_pinb_item_pane_g2_ParamLimits

0x2855,	// (0x000206f6) list_pinb_item_pane_g2

0x2861,	// (0x00020702) list_pinb_item_pane_g3_ParamLimits

0x2861,	// (0x00020702) list_pinb_item_pane_g3

0x2872,	// (0x00020713) list_pinb_item_pane_g4_ParamLimits

0x2872,	// (0x00020713) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0002cfd1) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0002cfd1) list_pinb_item_pane_g

0x287e,	// (0x0002071f) list_pinb_item_pane_t1_ParamLimits

0x287e,	// (0x0002071f) list_pinb_item_pane_t1

0x10ed,	// (0x0001ef8e) calc_display_pane

0x110b,	// (0x0001efac) calc_paper_pane

0x1127,	// (0x0001efc8) grid_calc_pane

0x9fe1,	// (0x00027e82) bg_list_pane_cp01

0x2895,	// (0x00020736) clock_g1

0x289d,	// (0x0002073e) clock_g2

0x0001,

0xf139,	// (0x0002cfda) clock_g

0x28a7,	// (0x00020748) clock_t1_ParamLimits

0x28a7,	// (0x00020748) clock_t1

0x28bc,	// (0x0002075d) clock_t2_ParamLimits

0x28bc,	// (0x0002075d) clock_t2

0x28ce,	// (0x0002076f) clock_t3_ParamLimits

0x28ce,	// (0x0002076f) clock_t3

0x28e0,	// (0x00020781) clock_t4_ParamLimits

0x28e0,	// (0x00020781) clock_t4

0x28f2,	// (0x00020793) clock_t5_ParamLimits

0x28f2,	// (0x00020793) clock_t5

0x2907,	// (0x000207a8) clock_t6_ParamLimits

0x2907,	// (0x000207a8) clock_t6

0x2919,	// (0x000207ba) clock_t7_ParamLimits

0x2919,	// (0x000207ba) clock_t7

0x292b,	// (0x000207cc) clock_t8_ParamLimits

0x292b,	// (0x000207cc) clock_t8

0x2941,	// (0x000207e2) clock_t9_ParamLimits

0x2941,	// (0x000207e2) clock_t9

0x0008,

0xf13e,	// (0x0002cfdf) clock_t_ParamLimits

0xf13e,	// (0x0002cfdf) clock_t

0xa2cf,	// (0x00028170) popup_clock_analogue_window_cp02

0xa2cf,	// (0x00028170) popup_clock_digital_window_cp01

0xa2d7,	// (0x00028178) listscroll_help_pane

0x9fe1,	// (0x00027e82) phob_pre_status_pane

0xa2e1,	// (0x00028182) grid_qdial_pane

0xa23c,	// (0x000280dd) listscroll_mce_pane

0xa23c,	// (0x000280dd) bg_notes_pane

0xa2eb,	// (0x0002818c) list_notes_pane

0x2957,	// (0x000207f8) scroll_pane_cp06

0xa2f9,	// (0x0002819a) bg_calc_paper_pane

0x1153,	// (0x0001eff4) list_calc_pane

0xa30d,	// (0x000281ae) bg_calc_display_pane

0x116d,	// (0x0001f00e) calc_display_pane_t1

0x1182,	// (0x0001f023) calc_display_pane_t2

0x1197,	// (0x0001f038) calc_display_pane_t3

0x0002,

0xf151,	// (0x0002cff2) calc_display_pane_t

0x11a9,	// (0x0001f04a) cell_calc_pane_ParamLimits

0x11a9,	// (0x0001f04a) cell_calc_pane

0xa319,	// (0x000281ba) bg_calc_paper_pane_g1

0xa325,	// (0x000281c6) bg_calc_paper_pane_g2

0xa331,	// (0x000281d2) bg_calc_paper_pane_g3

0xa33d,	// (0x000281de) bg_calc_paper_pane_g4

0xa349,	// (0x000281ea) bg_calc_paper_pane_g5

0x2966,	// (0x00020807) bg_calc_paper_pane_g6

0x2977,	// (0x00020818) bg_calc_paper_pane_g7

0x2988,	// (0x00020829) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0002cff9) bg_calc_paper_pane_g

0x2999,	// (0x0002083a) calc_bg_paper_pane_g9

0x29aa,	// (0x0002084b) list_calc_item_pane_ParamLimits

0x29aa,	// (0x0002084b) list_calc_item_pane

0xa363,	// (0x00028204) list_calc_item_pane_g1

0x11d6,	// (0x0001f077) list_calc_item_pane_t1_ParamLimits

0x11d6,	// (0x0001f077) list_calc_item_pane_t1

0x11e8,	// (0x0001f089) list_calc_item_pane_t2_ParamLimits

0x11e8,	// (0x0001f089) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0002d00a) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0002d00a) list_calc_item_pane_t

0xa370,	// (0x00028211) cell_calc_pane_g1

0xa37a,	// (0x0002821b) grid_highlight_pane_cp02

0xa39c,	// (0x0002823d) bg_calc_display_pane_g1

0x1218,	// (0x0001f0b9) bg_calc_display_pane_g2

0xa3a5,	// (0x00028246) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0002d014) bg_calc_display_pane_g

0x1222,	// (0x0001f0c3) cell_qdial_pane_ParamLimits

0x1222,	// (0x0001f0c3) cell_qdial_pane

0x29da,	// (0x0002087b) cell_qdial_pane_g1_ParamLimits

0x29da,	// (0x0002087b) cell_qdial_pane_g1

0x29e7,	// (0x00020888) cell_qdial_pane_g2_ParamLimits

0x29e7,	// (0x00020888) cell_qdial_pane_g2

0xa3ae,	// (0x0002824f) cell_qdial_pane_g3_ParamLimits

0xa3ae,	// (0x0002824f) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0002d01b) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0002d01b) cell_qdial_pane_g

0x2a04,	// (0x000208a5) cell_qdial_pane_t1_ParamLimits

0x2a04,	// (0x000208a5) cell_qdial_pane_t1

0x2a1c,	// (0x000208bd) cell_qdial_pane_t2_ParamLimits

0x2a1c,	// (0x000208bd) cell_qdial_pane_t2

0x2a2f,	// (0x000208d0) cell_qdial_pane_t3_ParamLimits

0x2a2f,	// (0x000208d0) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0002d024) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0002d024) cell_qdial_pane_t

0x9fe1,	// (0x00027e82) grid_highlight_pane_cp04

0xa3ba,	// (0x0002825b) thumbnail_qdial_pane_ParamLimits

0xa3ba,	// (0x0002825b) thumbnail_qdial_pane

0xa416,	// (0x000282b7) list_help_pane

0xa41f,	// (0x000282c0) scroll_pane_cp02

0x2a42,	// (0x000208e3) help_list_pane_t1_ParamLimits

0x2a42,	// (0x000208e3) help_list_pane_t1

0x1236,	// (0x0001f0d7) bg_notes_pane_g2

0x123e,	// (0x0001f0df) bg_notes_pane_g3

0x1246,	// (0x0001f0e7) notes_bg_pane_g1

0x124e,	// (0x0001f0ef) notes_bg_pane_g4

0x1256,	// (0x0001f0f7) notes_bg_pane_g5

0x125e,	// (0x0001f0ff) notes_bg_pane_g6

0x1266,	// (0x0001f107) notes_bg_pane_g7

0x126e,	// (0x0001f10f) notes_bg_pane_g8

0x1276,	// (0x0001f117) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0002d042) notes_bg_pane_g

0x2a79,	// (0x0002091a) list_notes_text_pane_ParamLimits

0x2a79,	// (0x0002091a) list_notes_text_pane

0xa428,	// (0x000282c9) list_notes_text_pane_g1

0xa431,	// (0x000282d2) list_notes_text_pane_t1

0x2aa5,	// (0x00020946) listscroll_cale_week_pane

0x2aca,	// (0x0002096b) bg_cale_heading_pane

0xa459,	// (0x000282fa) bg_cale_pane_cp01

0x2aec,	// (0x0002098d) cale_week_corner_pane

0x2b06,	// (0x000209a7) cale_week_day_heading_pane

0x2b28,	// (0x000209c9) cale_week_scroll_pane_g1

0x2b45,	// (0x000209e6) cale_week_scroll_pane_g2

0x2b58,	// (0x000209f9) cale_week_scroll_pane_g3

0x2b6b,	// (0x00020a0c) cale_week_scroll_pane_g4

0x2b7e,	// (0x00020a1f) cale_week_scroll_pane_g5

0x2b91,	// (0x00020a32) cale_week_scroll_pane_g6

0x2ba4,	// (0x00020a45) cale_week_scroll_pane_g7

0x2bb9,	// (0x00020a5a) cale_week_scroll_pane_g8

0x2bce,	// (0x00020a6f) cale_week_scroll_pane_g9

0x2be1,	// (0x00020a82) cale_week_scroll_pane_g10

0x2bf4,	// (0x00020a95) cale_week_scroll_pane_g11

0x2c07,	// (0x00020aa8) cale_week_scroll_pane_g12

0x2c1e,	// (0x00020abf) cale_week_scroll_pane_g13

0x2c39,	// (0x00020ada) cale_week_scroll_pane_g14

0x2c54,	// (0x00020af5) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0002d051) cale_week_scroll_pane_g

0x2c84,	// (0x00020b25) cale_week_time_pane

0x2c99,	// (0x00020b3a) grid_cale_week_pane

0xa488,	// (0x00028329) scroll_pane_cp08

0x2cb8,	// (0x00020b59) cell_cale_week_pane_ParamLimits

0x2cb8,	// (0x00020b59) cell_cale_week_pane

0x2d1a,	// (0x00020bbb) cale_week_day_heading_pane_t1

0x2d35,	// (0x00020bd6) cale_week_day_heading_pane_t2

0x2d50,	// (0x00020bf1) cale_week_day_heading_pane_t3

0x2d6b,	// (0x00020c0c) cale_week_day_heading_pane_t4

0x2d86,	// (0x00020c27) cale_week_day_heading_pane_t5

0x2da1,	// (0x00020c42) cale_week_day_heading_pane_t6

0x2dbc,	// (0x00020c5d) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0002d072) cale_week_day_heading_pane_t

0xa4a5,	// (0x00028346) bg_cale_side_pane

0x127e,	// (0x0001f11f) cale_week_time_pane_t1

0x1298,	// (0x0001f139) cale_week_time_pane_t2

0x12b2,	// (0x0001f153) cale_week_time_pane_t3

0x12cc,	// (0x0001f16d) cale_week_time_pane_t4

0x12e6,	// (0x0001f187) cale_week_time_pane_t5

0x1300,	// (0x0001f1a1) cale_week_time_pane_t6

0x1320,	// (0x0001f1c1) cale_week_time_pane_t7

0x1342,	// (0x0001f1e3) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0002d081) cale_week_time_pane_t

0x2dd7,	// (0x00020c78) cell_cale_week_pane_g2

0x2dfb,	// (0x00020c9c) cell_cale_week_pane_g3_ParamLimits

0x2dfb,	// (0x00020c9c) cell_cale_week_pane_g3

0xa4b3,	// (0x00028354) grid_highlight_pane_cp07

0xa4bb,	// (0x0002835c) listscroll_gms_pane

0xa4c5,	// (0x00028366) grid_gms_pane

0xa4ce,	// (0x0002836f) listscroll_gms_pane_g1

0xa4d6,	// (0x00028377) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0002d092) listscroll_gms_pane_g

0x2e13,	// (0x00020cb4) scroll_pane_cp010

0x2e1e,	// (0x00020cbf) cell_gms_pane_ParamLimits

0x2e1e,	// (0x00020cbf) cell_gms_pane

0x2e2e,	// (0x00020ccf) cell_gms_pane_g1

0xa4de,	// (0x0002837f) cell_gms_pane_g2

0xa4e6,	// (0x00028387) cell_gms_pane_g3

0xa4ef,	// (0x00028390) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0002d097) cell_gms_pane_g

0xa4f8,	// (0x00028399) grid_highlight_pane_cp09

0x53a2,	// (0x00023243) phob_pre_status_pane_g1

0x53aa,	// (0x0002324b) phob_pre_status_pane_g2

0x53b2,	// (0x00023253) phob_pre_status_pane_g3

0x53ba,	// (0x0002325b) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0002d495) phob_pre_status_pane_g

0x53ca,	// (0x0002326b) phob_pre_status_pane_t1

0x53da,	// (0x0002327b) phob_pre_status_pane_t2

0x53ea,	// (0x0002328b) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0002d4a0) phob_pre_status_pane_t

0xa500,	// (0x000283a1) bg_list_pane_cp05

0x2e3e,	// (0x00020cdf) grid_vorec_pane

0x2e48,	// (0x00020ce9) vorec_t1

0x2e56,	// (0x00020cf7) vorec_t2

0x2e64,	// (0x00020d05) vorec_t3

0x2e72,	// (0x00020d13) vorec_t4

0x2660,	// (0x00020501) vorec_t5

0x266e,	// (0x0002050f) vorec_t6

0x0004,

0xf1ff,	// (0x0002d0a0) vorec_t

0x267c,	// (0x0002051d) wait_bar_pane_cp01

0x2e8e,	// (0x00020d2f) cell_vorec_pane_ParamLimits

0x2e8e,	// (0x00020d2f) cell_vorec_pane

0x1366,	// (0x0001f207) cell_vorec_pane_g1

0x9fe1,	// (0x00027e82) grid_highlight_pane_cp05

0x2eb1,	// (0x00020d52) cams_zoom_pane

0x2ebd,	// (0x00020d5e) image_vga_pane

0x2ecc,	// (0x00020d6d) main_camera_pane_g1

0x2eda,	// (0x00020d7b) main_camera_pane_g2

0x2ee6,	// (0x00020d87) main_camera_pane_g3

0x2ef2,	// (0x00020d93) main_camera_pane_g4

0x2efe,	// (0x00020d9f) main_camera_pane_g5

0x2f0a,	// (0x00020dab) main_camera_pane_g6

0x2f16,	// (0x00020db7) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0002d0ab) main_camera_pane_g

0x2f22,	// (0x00020dc3) main_camera_pane_t1

0x2f34,	// (0x00020dd5) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0002d0bc) main_camera_pane_t

0x2f55,	// (0x00020df6) cams_zoom_pane_cp_ParamLimits

0x2f55,	// (0x00020df6) cams_zoom_pane_cp

0x2f79,	// (0x00020e1a) image_cif_pane_ParamLimits

0x2f79,	// (0x00020e1a) image_cif_pane

0x2f97,	// (0x00020e38) image_subqcif_pane

0x2f9f,	// (0x00020e40) main_video_pane_g1_ParamLimits

0x2f9f,	// (0x00020e40) main_video_pane_g1

0x2fbf,	// (0x00020e60) main_video_pane_g2_ParamLimits

0x2fbf,	// (0x00020e60) main_video_pane_g2

0x2fef,	// (0x00020e90) main_video_pane_g3_ParamLimits

0x2fef,	// (0x00020e90) main_video_pane_g3

0x3018,	// (0x00020eb9) main_video_pane_g4_ParamLimits

0x3018,	// (0x00020eb9) main_video_pane_g4

0x3041,	// (0x00020ee2) main_video_pane_g5_ParamLimits

0x3041,	// (0x00020ee2) main_video_pane_g5

0xa514,	// (0x000283b5) main_video_pane_g6_ParamLimits

0xa514,	// (0x000283b5) main_video_pane_g6

0x0006,

0xf220,	// (0x0002d0c1) main_video_pane_g_ParamLimits

0xf220,	// (0x0002d0c1) main_video_pane_g

0x3063,	// (0x00020f04) main_video_pane_t1_ParamLimits

0x3063,	// (0x00020f04) main_video_pane_t1

0xa52e,	// (0x000283cf) cams_zoom_pane_g1

0xa537,	// (0x000283d8) cams_zoom_pane_g2

0xa540,	// (0x000283e1) cams_zoom_pane_g3

0xa549,	// (0x000283ea) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002d0d0) cams_zoom_pane_g

0x30ad,	// (0x00020f4e) grid_cams_pane

0x30bb,	// (0x00020f5c) linegrid_cams_pane

0x30c9,	// (0x00020f6a) cell_cams_pane_ParamLimits

0x30c9,	// (0x00020f6a) cell_cams_pane

0xa552,	// (0x000283f3) cams_burst_image_pane

0xa55a,	// (0x000283fb) cell_cams_pane_g1

0x9fe1,	// (0x00027e82) grid_highlight_pane_cp03

0xa370,	// (0x00028211) mp_bg_pane_g1

0x9fe1,	// (0x00027e82) bg_list_pane_cp03

0xc2c3,	// (0x0002a164) bg_mp_pane

0xc2cb,	// (0x0002a16c) grid_mp_pane

0xc2d3,	// (0x0002a174) media_player_g1

0xc2db,	// (0x0002a17c) media_player_t1

0xc2e9,	// (0x0002a18a) media_player_t2

0xc2f7,	// (0x0002a198) media_player_t3

0xc305,	// (0x0002a1a6) media_player_t4

0xc313,	// (0x0002a1b4) media_player_t5

0xc321,	// (0x0002a1c2) media_player_t6

0xc32f,	// (0x0002a1d0) media_player_t7

0x0006,

0xf5de,	// (0x0002d47f) media_player_t

0xc33d,	// (0x0002a1de) wait_bar_pane_cp02

0xf5c3,	// (0x0002d464) main_usb_pane_t

0x5399,	// (0x0002323a) cell_mp_pane

0xa370,	// (0x00028211) cell_mp_pane_g1

0x9fe1,	// (0x00027e82) grid_highlight_pane_cp06

0xa562,	// (0x00028403) grid_skin_colour_pane

0xa56a,	// (0x0002840b) list_highlight_pane_cp03

0x31f1,	// (0x00021092) skin_g1

0xa572,	// (0x00028413) skin_t1

0xa581,	// (0x00028422) skin_t2

0x0001,

0xf264,	// (0x0002d105) skin_t

0x31fb,	// (0x0002109c) cell_skin_colour_pane_ParamLimits

0x31fb,	// (0x0002109c) cell_skin_colour_pane

0xa58f,	// (0x00028430) cell_skin_colour_pane_g1

0x327f,	// (0x00021120) call_video_g1_ParamLimits

0x327f,	// (0x00021120) call_video_g1

0x328f,	// (0x00021130) call_video_g2_ParamLimits

0x328f,	// (0x00021130) call_video_g2

0x0001,

0xf269,	// (0x0002d10a) call_video_g_ParamLimits

0xf269,	// (0x0002d10a) call_video_g

0x32e9,	// (0x0002118a) call_video_uplink_pane_cp1_ParamLimits

0x32e9,	// (0x0002118a) call_video_uplink_pane_cp1

0xa5a1,	// (0x00028442) call_video_uplink_pane_cp2

0x33b5,	// (0x00021256) video_down_crop_pane_ParamLimits

0x33b5,	// (0x00021256) video_down_crop_pane

0x34a7,	// (0x00021348) video_down_pane_ParamLimits

0x34a7,	// (0x00021348) video_down_pane

0xa5a9,	// (0x0002844a) video_down_subqcif_pane_ParamLimits

0xa5a9,	// (0x0002844a) video_down_subqcif_pane

0xa5c1,	// (0x00028462) video_down_subqcif_pane_cp_ParamLimits

0xa5c1,	// (0x00028462) video_down_subqcif_pane_cp

0xa5e7,	// (0x00028488) im_reading_pane_ParamLimits

0xa5e7,	// (0x00028488) im_reading_pane

0x35c7,	// (0x00021468) im_writing_pane_ParamLimits

0x35c7,	// (0x00021468) im_writing_pane

0x35e5,	// (0x00021486) im_reading_pane_t1

0xa601,	// (0x000284a2) list_im_pane

0xa612,	// (0x000284b3) scroll_pane_cp07

0x363d,	// (0x000214de) im_writing_pane_t1_ParamLimits

0x363d,	// (0x000214de) im_writing_pane_t1

0xa62b,	// (0x000284cc) im_writing_pane_t2_ParamLimits

0xa62b,	// (0x000284cc) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002d114) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002d114) im_writing_pane_t

0x9fe1,	// (0x00027e82) input_focus_pane_cp04

0x9fe1,	// (0x00027e82) input_focus_pane_cp05

0x364f,	// (0x000214f0) list_im_single_pane_ParamLimits

0x364f,	// (0x000214f0) list_im_single_pane

0x3676,	// (0x00021517) list_single_im_pane_t1

0x535d,	// (0x000231fe) blid_accuracy_pane

0x5365,	// (0x00023206) blid_compass_pane

0x536f,	// (0x00023210) main_location_t1

0x537d,	// (0x0002321e) main_location_t2

0x538b,	// (0x0002322c) main_location_t3

0x0002,

0xf5ed,	// (0x0002d48e) main_location_t

0x9fe1,	// (0x00027e82) aid_levels_location

0xa370,	// (0x00028211) blid_accuracy_pane_g1

0xa370,	// (0x00028211) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0002d176) blid_accuracy_pane_g

0xa673,	// (0x00028514) wml_content_pane

0xa6b1,	// (0x00028552) wml_button_pane_ParamLimits

0xa6b1,	// (0x00028552) wml_button_pane

0x3685,	// (0x00021526) wml_list_single_large_pane_ParamLimits

0x3685,	// (0x00021526) wml_list_single_large_pane

0x36b0,	// (0x00021551) wml_list_single_medium_pane_ParamLimits

0x36b0,	// (0x00021551) wml_list_single_medium_pane

0x36e2,	// (0x00021583) wml_list_single_small_pane_ParamLimits

0x36e2,	// (0x00021583) wml_list_single_small_pane

0xa6c5,	// (0x00028566) wml_selection_box_pane_ParamLimits

0xa6c5,	// (0x00028566) wml_selection_box_pane

0xa6d8,	// (0x00028579) wml_list_single_pane_t1

0xa6e7,	// (0x00028588) wml_list_single_medium_pane_t1

0xa6f6,	// (0x00028597) wml_list_single_large_pane_t1

0xa705,	// (0x000285a6) input_focus_pane_cp02_ParamLimits

0xa705,	// (0x000285a6) input_focus_pane_cp02

0xa718,	// (0x000285b9) wml_selection_box_pane_g1

0xa721,	// (0x000285c2) wml_selection_box_pane_t1_ParamLimits

0xa721,	// (0x000285c2) wml_selection_box_pane_t1

0xa23c,	// (0x000280dd) bg_wml_button_pane_ParamLimits

0xa23c,	// (0x000280dd) bg_wml_button_pane

0xa739,	// (0x000285da) wml_button_pane_g1

0xa741,	// (0x000285e2) wml_button_pane_t1

0xa739,	// (0x000285da) wml_button_bg_pane_g1

0xa751,	// (0x000285f2) wml_button_bg_pane_g2

0xa759,	// (0x000285fa) wml_button_bg_pane_g3

0xa761,	// (0x00028602) wml_button_bg_pane_g4

0xa769,	// (0x0002860a) wml_button_bg_pane_g5

0xa771,	// (0x00028612) wml_button_bg_pane_g6

0xa779,	// (0x0002861a) wml_button_bg_pane_g7

0xa781,	// (0x00028622) wml_button_bg_pane_g8

0xa789,	// (0x0002862a) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0002d119) wml_button_bg_pane_g

0x371f,	// (0x000215c0) bg_list_pane_cp02

0xa791,	// (0x00028632) mce_header_pane_ParamLimits

0xa791,	// (0x00028632) mce_header_pane

0xa7a7,	// (0x00028648) mce_icon_pane

0xa7a7,	// (0x00028648) mce_image_pane

0xa7b0,	// (0x00028651) mce_text_pane_ParamLimits

0xa7b0,	// (0x00028651) mce_text_pane

0x3729,	// (0x000215ca) scroll_pane_cp03

0xa6a9,	// (0x0002854a) scroll_pane_cp04

0xa7c3,	// (0x00028664) scroll_pane_cp05_ParamLimits

0xa7c3,	// (0x00028664) scroll_pane_cp05

0x3733,	// (0x000215d4) mce_header_field_pane_ParamLimits

0x3733,	// (0x000215d4) mce_header_field_pane

0x3753,	// (0x000215f4) mce_header_field_pane_2_ParamLimits

0x3753,	// (0x000215f4) mce_header_field_pane_2

0x3769,	// (0x0002160a) mce_header_field_pane_3

0x3771,	// (0x00021612) list_single_mce_message_pane_ParamLimits

0x3771,	// (0x00021612) list_single_mce_message_pane

0x379f,	// (0x00021640) list_single_mce_smart_pane_ParamLimits

0x379f,	// (0x00021640) list_single_mce_smart_pane

0xa7cf,	// (0x00028670) input_focus_pane_cp03

0xa7d8,	// (0x00028679) list_header_data_pane

0x37d8,	// (0x00021679) mce_header_field_pane_t1

0x37e6,	// (0x00021687) list_single_mce_header_pane_ParamLimits

0x37e6,	// (0x00021687) list_single_mce_header_pane

0xa7e0,	// (0x00028681) list_single_mce_header_pane_t1

0xa7ef,	// (0x00028690) list_single_mce_message_pane_g1

0xa7f7,	// (0x00028698) list_single_mce_message_pane_t1

0x383c,	// (0x000216dd) bg_cale_heading_pane_cp01_ParamLimits

0x383c,	// (0x000216dd) bg_cale_heading_pane_cp01

0xa805,	// (0x000286a6) bg_cale_pane_cp02_ParamLimits

0xa805,	// (0x000286a6) bg_cale_pane_cp02

0x388a,	// (0x0002172b) cale_month_corner_pane

0x38a9,	// (0x0002174a) cale_month_day_heading_pane_ParamLimits

0x38a9,	// (0x0002174a) cale_month_day_heading_pane

0x390f,	// (0x000217b0) cale_month_pane_g1_ParamLimits

0x390f,	// (0x000217b0) cale_month_pane_g1

0x3952,	// (0x000217f3) cale_month_pane_g2_ParamLimits

0x3952,	// (0x000217f3) cale_month_pane_g2

0x398c,	// (0x0002182d) cale_month_pane_g3_ParamLimits

0x398c,	// (0x0002182d) cale_month_pane_g3

0x39dc,	// (0x0002187d) cale_month_pane_g4_ParamLimits

0x39dc,	// (0x0002187d) cale_month_pane_g4

0x3a2c,	// (0x000218cd) cale_month_pane_g5_ParamLimits

0x3a2c,	// (0x000218cd) cale_month_pane_g5

0x3a7c,	// (0x0002191d) cale_month_pane_g6_ParamLimits

0x3a7c,	// (0x0002191d) cale_month_pane_g6

0x3acc,	// (0x0002196d) cale_month_pane_g7_ParamLimits

0x3acc,	// (0x0002196d) cale_month_pane_g7

0x3b34,	// (0x000219d5) cale_month_pane_g8_ParamLimits

0x3b34,	// (0x000219d5) cale_month_pane_g8

0x3b9c,	// (0x00021a3d) cale_month_pane_g9_ParamLimits

0x3b9c,	// (0x00021a3d) cale_month_pane_g9

0x3bfa,	// (0x00021a9b) cale_month_pane_g10_ParamLimits

0x3bfa,	// (0x00021a9b) cale_month_pane_g10

0x3c58,	// (0x00021af9) cale_month_pane_g11_ParamLimits

0x3c58,	// (0x00021af9) cale_month_pane_g11

0x3cac,	// (0x00021b4d) cale_month_pane_g12_ParamLimits

0x3cac,	// (0x00021b4d) cale_month_pane_g12

0x3d02,	// (0x00021ba3) cale_month_pane_g13_ParamLimits

0x3d02,	// (0x00021ba3) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0002d12c) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0002d12c) cale_month_pane_g

0x3d58,	// (0x00021bf9) cale_month_week_pane

0x3d7c,	// (0x00021c1d) grid_cale_month_pane_ParamLimits

0x3d7c,	// (0x00021c1d) grid_cale_month_pane

0x3dd9,	// (0x00021c7a) cale_month_day_heading_pane_t1

0x3e5f,	// (0x00021d00) cale_month_day_heading_pane_t2

0x3ed8,	// (0x00021d79) cale_month_day_heading_pane_t3

0x3f51,	// (0x00021df2) cale_month_day_heading_pane_t4

0x3fca,	// (0x00021e6b) cale_month_day_heading_pane_t5

0x4043,	// (0x00021ee4) cale_month_day_heading_pane_t6

0x40bc,	// (0x00021f5d) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0002d147) cale_month_day_heading_pane_t

0xa4a5,	// (0x00028346) bg_cale_side_pane_cp01

0x414d,	// (0x00021fee) cale_month_week_pane_t1

0x4166,	// (0x00022007) cale_month_week_pane_t2

0x417f,	// (0x00022020) cale_month_week_pane_t3

0x4198,	// (0x00022039) cale_month_week_pane_t4

0x41b3,	// (0x00022054) cale_month_week_pane_t5

0x41d4,	// (0x00022075) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0002d156) cale_month_week_pane_t

0x41f5,	// (0x00022096) cell_cale_month_pane_ParamLimits

0x41f5,	// (0x00022096) cell_cale_month_pane

0x1370,	// (0x0001f211) cell_cale_month_pane_g1

0x137c,	// (0x0001f21d) cell_cale_month_pane_t1_ParamLimits

0x137c,	// (0x0001f21d) cell_cale_month_pane_t1

0xa4b3,	// (0x00028354) grid_highlight_pane_cp08

0xa370,	// (0x00028211) main_smil_g1

0x4345,	// (0x000221e6) smil_status_pane

0xa844,	// (0x000286e5) smil_text_pane

0xc1a3,	// (0x0002a044) bg_popup_call3_rect_pane_g8

0xc1ab,	// (0x0002a04c) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0002d40f) bg_popup_call3_rect_pane_g

0xc432,	// (0x0002a2d3) smil_status_volume_pane_g1

0xa84e,	// (0x000286ef) smil_status_pane_t1

0x1646,	// (0x0001f4e7) volume_smil_pane

0xa865,	// (0x00028706) list_smil_text_pane

0x4358,	// (0x000221f9) scroll_pane_cp011

0x4363,	// (0x00022204) smil_text_list_pane_t1_ParamLimits

0x4363,	// (0x00022204) smil_text_list_pane_t1

0x13a8,	// (0x0001f249) aid_volume_smil_ParamLimits

0x13a8,	// (0x0001f249) aid_volume_smil

0xa370,	// (0x00028211) smil_volume_pane_g1

0xa370,	// (0x00028211) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0002d176) smil_volume_pane_g

0x2aa5,	// (0x00020946) listscroll_cale_day_pane

0xa86f,	// (0x00028710) bg_cale_pane

0xa887,	// (0x00028728) list_cale_pane

0xa8aa,	// (0x0002874b) scroll_pane_cp09

0xa8bb,	// (0x0002875c) cale_bg_pane_g1

0xa8c3,	// (0x00028764) cale_bg_pane_g2

0xa8cb,	// (0x0002876c) cale_bg_pane_g3

0xa8d3,	// (0x00028774) cale_bg_pane_g4

0xa8db,	// (0x0002877c) cale_bg_pane_g5

0xa8e3,	// (0x00028784) cale_bg_pane_g6

0xa8eb,	// (0x0002878c) cale_bg_pane_g7

0xa8f3,	// (0x00028794) cale_bg_pane_g8

0xa8fb,	// (0x0002879c) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0002d17b) cale_bg_pane_g

0x43f8,	// (0x00022299) list_cale_time_pane_ParamLimits

0x43f8,	// (0x00022299) list_cale_time_pane

0xa903,	// (0x000287a4) list_cale_time_pane_g1_ParamLimits

0xa903,	// (0x000287a4) list_cale_time_pane_g1

0xa90f,	// (0x000287b0) list_cale_time_pane_g2_ParamLimits

0xa90f,	// (0x000287b0) list_cale_time_pane_g2

0x4420,	// (0x000222c1) list_cale_time_pane_g3_ParamLimits

0x4420,	// (0x000222c1) list_cale_time_pane_g3

0x442e,	// (0x000222cf) list_cale_time_pane_g4_ParamLimits

0x442e,	// (0x000222cf) list_cale_time_pane_g4

0x443c,	// (0x000222dd) list_cale_time_pane_g5_ParamLimits

0x443c,	// (0x000222dd) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0002d18e) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0002d18e) list_cale_time_pane_g

0xa929,	// (0x000287ca) list_cale_time_pane_t1_ParamLimits

0xa929,	// (0x000287ca) list_cale_time_pane_t1

0xa951,	// (0x000287f2) list_cale_time_pane_t2_ParamLimits

0xa951,	// (0x000287f2) list_cale_time_pane_t2

0x4795,	// (0x00022636) aid_blid_cardinal_pane

0x47d7,	// (0x00022678) compass_pane_t4

0xa979,	// (0x0002881a) list_cale_time_pane_t4_ParamLimits

0xa979,	// (0x0002881a) list_cale_time_pane_t4

0x47e5,	// (0x00022686) compass_pane_t5

0x47f5,	// (0x00022696) compass_pane_t6

0x4803,	// (0x000226a4) compass_pane_t7

0xae1d,	// (0x00028cbe) navi_pane_cc_t1

0xaffa,	// (0x00028e9b) aid_phob_thumbnail_center_pane

0x4e5e,	// (0x00022cff) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0002d19b) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0002d19b) list_cale_time_pane_t

0x9c38,	// (0x00027ad9) bg_popup_window_pane_cp02_ParamLimits

0x9c38,	// (0x00027ad9) bg_popup_window_pane_cp02

0xa9a1,	// (0x00028842) heading_pane_cp01_ParamLimits

0xa9a1,	// (0x00028842) heading_pane_cp01

0xa9ad,	// (0x0002884e) loc_req_pane_ParamLimits

0xa9ad,	// (0x0002884e) loc_req_pane

0xa9bd,	// (0x0002885e) loc_type_pane_ParamLimits

0xa9bd,	// (0x0002885e) loc_type_pane

0xa9cf,	// (0x00028870) loc_type_pane_t1_ParamLimits

0xa9cf,	// (0x00028870) loc_type_pane_t1

0xa9e1,	// (0x00028882) loc_type_pane_t2_ParamLimits

0xa9e1,	// (0x00028882) loc_type_pane_t2

0xa9f3,	// (0x00028894) loc_type_pane_t3_ParamLimits

0xa9f3,	// (0x00028894) loc_type_pane_t3

0x0002,

0xf301,	// (0x0002d1a2) loc_type_pane_t_ParamLimits

0xf301,	// (0x0002d1a2) loc_type_pane_t

0xaa05,	// (0x000288a6) list_loc_req_pane

0xaa0f,	// (0x000288b0) scroll_pane_cp012

0x444a,	// (0x000222eb) list_single_loc_request_popup_menu_pane_ParamLimits

0x444a,	// (0x000222eb) list_single_loc_request_popup_menu_pane

0xaa1a,	// (0x000288bb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa1a,	// (0x000288bb) list_single_loc_request_popup_menu_pane_g1

0xaa26,	// (0x000288c7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa26,	// (0x000288c7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0002d1a9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0002d1a9) list_single_loc_request_popup_menu_pane_g

0xaa32,	// (0x000288d3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa32,	// (0x000288d3) list_single_loc_request_popup_menu_pane_t1

0x4462,	// (0x00022303) bg_popup_window_pane_cp03_ParamLimits

0x4462,	// (0x00022303) bg_popup_window_pane_cp03

0x4470,	// (0x00022311) heading_loc_req_pane_ParamLimits

0x4470,	// (0x00022311) heading_loc_req_pane

0x447c,	// (0x0002231d) popup_dyc_status_message_window_g1_ParamLimits

0x447c,	// (0x0002231d) popup_dyc_status_message_window_g1

0x4488,	// (0x00022329) popup_dyc_status_message_window_t1_ParamLimits

0x4488,	// (0x00022329) popup_dyc_status_message_window_t1

0x449a,	// (0x0002233b) popup_dyc_status_message_window_t2_ParamLimits

0x449a,	// (0x0002233b) popup_dyc_status_message_window_t2

0x44ac,	// (0x0002234d) popup_dyc_status_message_window_t3_ParamLimits

0x44ac,	// (0x0002234d) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0002d1ae) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0002d1ae) popup_dyc_status_message_window_t

0x9fe1,	// (0x00027e82) bg_heading_pane_cp01

0xaa66,	// (0x00028907) heading_loc_req_pane_g1

0xaa6e,	// (0x0002890f) heading_loc_req_pane_g2

0xaa76,	// (0x00028917) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0002d1b5) heading_loc_req_pane_g

0xaa7e,	// (0x0002891f) heading_loc_req_pane_t1

0xaa8d,	// (0x0002892e) bg_popup_sub_pane_cp01_ParamLimits

0xaa8d,	// (0x0002892e) bg_popup_sub_pane_cp01

0xaa9b,	// (0x0002893c) popup_cale_events_window_g1_ParamLimits

0xaa9b,	// (0x0002893c) popup_cale_events_window_g1

0xaabb,	// (0x0002895c) popup_cale_events_window_g2_ParamLimits

0xaabb,	// (0x0002895c) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0002d1e9) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0002d1e9) popup_cale_events_window_g

0xaadb,	// (0x0002897c) popup_cale_events_window_t1_ParamLimits

0xaadb,	// (0x0002897c) popup_cale_events_window_t1

0xaaed,	// (0x0002898e) popup_cale_events_window_t2_ParamLimits

0xaaed,	// (0x0002898e) popup_cale_events_window_t2

0xab2b,	// (0x000289cc) popup_cale_events_window_t3_ParamLimits

0xab2b,	// (0x000289cc) popup_cale_events_window_t3

0xab65,	// (0x00028a06) popup_cale_events_window_t4_ParamLimits

0xab65,	// (0x00028a06) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0002d1ee) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0002d1ee) popup_cale_events_window_t

0x45a7,	// (0x00022448) call_type_pane

0xab9b,	// (0x00028a3c) popup_call_status_window_g1

0x45b3,	// (0x00022454) popup_call_status_window_g2

0x45bf,	// (0x00022460) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0002d1f7) popup_call_status_window_g

0xaba9,	// (0x00028a4a) call_type_pane_g1

0xabb2,	// (0x00028a53) call_type_pane_g2

0x0001,

0xf35d,	// (0x0002d1fe) call_type_pane_g

0x9fe1,	// (0x00027e82) bg_popup_sub_pane_cp02

0xabbb,	// (0x00028a5c) listscroll_popup_wml_pane

0xabc3,	// (0x00028a64) list_wml_pane

0xabcd,	// (0x00028a6e) scroll_pane_cp013

0xabd8,	// (0x00028a79) list_single_graphic_popup_wml_pane_ParamLimits

0xabd8,	// (0x00028a79) list_single_graphic_popup_wml_pane

0xa370,	// (0x00028211) list_single_graphic_popup_wml_pane_g1

0xabec,	// (0x00028a8d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002d203) list_single_graphic_popup_wml_pane_g

0xabf4,	// (0x00028a95) list_single_graphic_popup_wml_pane_t1

0xac0a,	// (0x00028aab) aid_call_pane

0xa234,	// (0x000280d5) popup_clock_analogue_window_g1

0xa234,	// (0x000280d5) popup_clock_analogue_window_g2

0x13ca,	// (0x0001f26b) popup_clock_analogue_window_g3

0x13ca,	// (0x0001f26b) popup_clock_analogue_window_g4

0xa370,	// (0x00028211) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0002d208) popup_clock_analogue_window_g

0x13d2,	// (0x0001f273) popup_clock_analogue_window_t1

0x13e0,	// (0x0001f281) clock_digital_number_pane_ParamLimits

0x13e0,	// (0x0001f281) clock_digital_number_pane

0x13ec,	// (0x0001f28d) clock_digital_number_pane_cp02_ParamLimits

0x13ec,	// (0x0001f28d) clock_digital_number_pane_cp02

0x13f8,	// (0x0001f299) clock_digital_number_pane_cp03_ParamLimits

0x13f8,	// (0x0001f299) clock_digital_number_pane_cp03

0x1404,	// (0x0001f2a5) clock_digital_number_pane_cp04_ParamLimits

0x1404,	// (0x0001f2a5) clock_digital_number_pane_cp04

0x1410,	// (0x0001f2b1) clock_digital_separator_pane_ParamLimits

0x1410,	// (0x0001f2b1) clock_digital_separator_pane

0x141c,	// (0x0001f2bd) popup_clock_digital_window_t1

0xa370,	// (0x00028211) clock_digital_number_pane_g1

0xa370,	// (0x00028211) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0002d176) clock_digital_number_pane_g

0xa370,	// (0x00028211) clock_digital_separator_pane_g1

0xa370,	// (0x00028211) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0002d176) clock_digital_separator_pane_g

0x9fe1,	// (0x00027e82) bg_popup_window_pane_cp04

0xac12,	// (0x00028ab3) heading_pane_cp03

0xac1a,	// (0x00028abb) listscroll_popup_gms_pane

0xac22,	// (0x00028ac3) grid_large_graphic_popup_pane

0xac2c,	// (0x00028acd) listscroll_popup_gms_pane_g1

0xac34,	// (0x00028ad5) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002d213) listscroll_popup_gms_pane_g

0xa6a9,	// (0x0002854a) scroll_pane_cp014

0x45cb,	// (0x0002246c) cell_large_graphic_popup_pane_ParamLimits

0x45cb,	// (0x0002246c) cell_large_graphic_popup_pane

0x45e3,	// (0x00022484) cell_large_graphic_popup_pane_g1_ParamLimits

0x45e3,	// (0x00022484) cell_large_graphic_popup_pane_g1

0xac3c,	// (0x00028add) cell_large_graphic_popup_pane_g2_ParamLimits

0xac3c,	// (0x00028add) cell_large_graphic_popup_pane_g2

0xac48,	// (0x00028ae9) cell_large_graphic_popup_pane_g3_ParamLimits

0xac48,	// (0x00028ae9) cell_large_graphic_popup_pane_g3

0xac55,	// (0x00028af6) cell_large_graphic_popup_pane_g4_ParamLimits

0xac55,	// (0x00028af6) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0002d218) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0002d218) cell_large_graphic_popup_pane_g

0xac65,	// (0x00028b06) grid_highlight_pane_cp010

0xa370,	// (0x00028211) bg_popup_call_pane_g1

0xac6f,	// (0x00028b10) list_single_graphic_popup_conf_pane_ParamLimits

0xac6f,	// (0x00028b10) list_single_graphic_popup_conf_pane

0xac82,	// (0x00028b23) list_highlight_pane_cp01

0xac8b,	// (0x00028b2c) list_single_graphic_popup_conf_pane_g1

0xac93,	// (0x00028b34) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002d221) list_single_graphic_popup_conf_pane_g

0xac9b,	// (0x00028b3c) list_single_graphic_popup_conf_pane_t1

0xaca9,	// (0x00028b4a) linegrid_cams_pane_g1

0x45ef,	// (0x00022490) linegrid_cams_pane_g2

0xa4e6,	// (0x00028387) linegrid_cams_pane_g3

0xacb2,	// (0x00028b53) linegrid_cams_pane_g4

0x45f8,	// (0x00022499) linegrid_cams_pane_g5

0x4601,	// (0x000224a2) linegrid_cams_pane_g6

0xa4ef,	// (0x00028390) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0002d226) linegrid_cams_pane_g

0xacbb,	// (0x00028b5c) popup_clock_analogue_window

0xacbb,	// (0x00028b5c) popup_clock_digital_window

0x9fe1,	// (0x00027e82) popup_phob_thumbnail_window

0xa370,	// (0x00028211) call_video_uplink_pane_g1

0xacc4,	// (0x00028b65) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0002d235) call_video_uplink_pane_g

0xaccc,	// (0x00028b6d) video_uplink_pane

0xacd4,	// (0x00028b75) mce_image_pane_g1

0x460a,	// (0x000224ab) mce_image_pane_g2

0x4612,	// (0x000224b3) mce_image_pane_g3

0x461a,	// (0x000224bb) mce_image_pane_g4

0x4622,	// (0x000224c3) mce_image_pane_g5

0x0004,

0xf399,	// (0x0002d23a) mce_image_pane_g

0xacde,	// (0x00028b7f) control_top_pane_stacon_cp01_ParamLimits

0xacde,	// (0x00028b7f) control_top_pane_stacon_cp01

0xacf2,	// (0x00028b93) uni_indicator_pane_stacon_cp01_ParamLimits

0xacf2,	// (0x00028b93) uni_indicator_pane_stacon_cp01

0xad03,	// (0x00028ba4) bg_popup_sub_pane_cp03

0x462a,	// (0x000224cb) chi_dic_find_pane

0x4632,	// (0x000224d3) listscroll_chi_dic_pane

0x463b,	// (0x000224dc) main_pane_chidic_g1

0x464e,	// (0x000224ef) chi_dic_find_pane_t1

0xad0d,	// (0x00028bae) find_chidic_pane

0xad16,	// (0x00028bb7) chi_dic_list_pane_ParamLimits

0xad16,	// (0x00028bb7) chi_dic_list_pane

0xad27,	// (0x00028bc8) scroll_pane_cp020

0x465c,	// (0x000224fd) find_chidic_pane_t1

0x9fe1,	// (0x00027e82) input_focus_pane_cp06

0x466b,	// (0x0002250c) list_chi_dic_pane_ParamLimits

0x466b,	// (0x0002250c) list_chi_dic_pane

0x4688,	// (0x00022529) list_chi_dic_pane_t1_ParamLimits

0x4688,	// (0x00022529) list_chi_dic_pane_t1

0x9fe1,	// (0x00027e82) list_highlight_pane_cp020

0xad2f,	// (0x00028bd0) bg_cale_heading_pane_g1

0x469b,	// (0x0002253c) bg_cale_heading_pane_g2

0x46a3,	// (0x00022544) bg_cale_heading_pane_g3

0x46ab,	// (0x0002254c) bg_cale_heading_pane_g4

0x46b5,	// (0x00022556) bg_cale_heading_pane_g5

0x46bf,	// (0x00022560) bg_cale_heading_pane_g6

0x46c7,	// (0x00022568) bg_cale_heading_pane_g7

0x46cf,	// (0x00022570) bg_cale_heading_pane_g8

0x46d9,	// (0x0002257a) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0002d245) bg_cale_heading_pane_g

0xad2f,	// (0x00028bd0) bg_cale_side_pane_g1

0x46e3,	// (0x00022584) bg_cale_side_pane_g2

0x46ed,	// (0x0002258e) bg_cale_side_pane_g3

0x46f7,	// (0x00022598) bg_cale_side_pane_g4

0x4701,	// (0x000225a2) bg_cale_side_pane_g5

0x470b,	// (0x000225ac) bg_cale_side_pane_g6

0x4715,	// (0x000225b6) bg_cale_side_pane_g7

0x471f,	// (0x000225c0) bg_cale_side_pane_g8

0x4727,	// (0x000225c8) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0002d258) bg_cale_side_pane_g

0x472f,	// (0x000225d0) popup_call_status_window_ParamLimits

0x472f,	// (0x000225d0) popup_call_status_window

0xad37,	// (0x00028bd8) stacon_top_pane

0xad3f,	// (0x00028be0) status_pane_ParamLimits

0xad3f,	// (0x00028be0) status_pane

0xad54,	// (0x00028bf5) status_small_pane

0xad5c,	// (0x00028bfd) control_pane

0x9fe1,	// (0x00027e82) stacon_bottom_pane

0xad64,	// (0x00028c05) list_single_mce_smart_pane_t1_ParamLimits

0xad64,	// (0x00028c05) list_single_mce_smart_pane_t1

0xad77,	// (0x00028c18) list_single_mce_smart_pane_t2_ParamLimits

0xad77,	// (0x00028c18) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0002d26b) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0002d26b) list_single_mce_smart_pane_t

0x473b,	// (0x000225dc) compass_pane

0x4747,	// (0x000225e8) main_location2_pane_t1

0x475b,	// (0x000225fc) main_location2_pane_t2

0x476f,	// (0x00022610) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0002d270) main_location2_pane_t

0xad96,	// (0x00028c37) compass_pane_g1_ParamLimits

0xad96,	// (0x00028c37) compass_pane_g1

0x47b9,	// (0x0002265a) compass_pane_t1

0x47c8,	// (0x00022669) compass_pane_t2

0x0005,

0xf3d8,	// (0x0002d279) compass_pane_t

0x4813,	// (0x000226b4) text_secondary_cp61

0xae14,	// (0x00028cb5) navi_pane_cams_g5

0xae90,	// (0x00028d31) navi_pane_im_t1

0xae9e,	// (0x00028d3f) navi_pane_mp_g1_ParamLimits

0xae9e,	// (0x00028d3f) navi_pane_mp_g1

0xaeb2,	// (0x00028d53) navi_pane_mp_g2_ParamLimits

0xaeb2,	// (0x00028d53) navi_pane_mp_g2

0xaebe,	// (0x00028d5f) navi_pane_mp_g3_ParamLimits

0xaebe,	// (0x00028d5f) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0002d28d) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0002d28d) navi_pane_mp_g

0xaeca,	// (0x00028d6b) navi_pane_mp_t1

0xaed8,	// (0x00028d79) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0002d294) navi_pane_mp_t

0xaf43,	// (0x00028de4) navi_pane_vt_g1

0xaeca,	// (0x00028d6b) navi_pane_vt_t1

0xaf4b,	// (0x00028dec) navi_slider_pane

0xa500,	// (0x000283a1) zooming_pane

0xaf5b,	// (0x00028dfc) navi_slider_pane_g1

0x1439,	// (0x0001f2da) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0002d29b) navi_slider_pane_g

0xaf7f,	// (0x00028e20) aid_levels_zoom

0xaf87,	// (0x00028e28) zooming_pane_g1

0xaf8f,	// (0x00028e30) zooming_pane_g2

0xaf8f,	// (0x00028e30) zooming_pane_g3

0x0002,

0xf409,	// (0x0002d2aa) zooming_pane_g

0xaf97,	// (0x00028e38) level_10_zoom

0xafa0,	// (0x00028e41) level_11_zoom

0xafa9,	// (0x00028e4a) level_1_zoom

0xafb2,	// (0x00028e53) level_2_zoom

0xafbb,	// (0x00028e5c) level_3_zoom

0xafc4,	// (0x00028e65) level_4_zoom

0xafcd,	// (0x00028e6e) level_5_zoom

0xafd6,	// (0x00028e77) level_6_zoom

0xafdf,	// (0x00028e80) level_7_zoom

0xafe8,	// (0x00028e89) level_8_zoom

0xaff1,	// (0x00028e92) level_9_zoom

0xb002,	// (0x00028ea3) popup_phob_thumbnail_window_g1

0xb00a,	// (0x00028eab) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002d2b1) popup_phob_thumbnail_window_g

0xc345,	// (0x0002a1e6) level_1_location

0xc34d,	// (0x0002a1ee) level_2_location

0xc355,	// (0x0002a1f6) level_3_location

0xc35d,	// (0x0002a1fe) level_4_location

0xa500,	// (0x000283a1) level_5_location

0x484e,	// (0x000226ef) mce_icon_pane_g1

0x4856,	// (0x000226f7) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0002d2b6) mce_icon_pane_g

0x485e,	// (0x000226ff) main_mup_pane_g1_ParamLimits

0x485e,	// (0x000226ff) main_mup_pane_g1

0x4876,	// (0x00022717) main_mup_pane_g2_ParamLimits

0x4876,	// (0x00022717) main_mup_pane_g2

0x488a,	// (0x0002272b) main_mup_pane_g3_ParamLimits

0x488a,	// (0x0002272b) main_mup_pane_g3

0x489e,	// (0x0002273f) main_mup_pane_g4_ParamLimits

0x489e,	// (0x0002273f) main_mup_pane_g4

0x48ba,	// (0x0002275b) main_mup_pane_g5_ParamLimits

0x48ba,	// (0x0002275b) main_mup_pane_g5

0x48db,	// (0x0002277c) main_mup_pane_g6_ParamLimits

0x48db,	// (0x0002277c) main_mup_pane_g6

0x48f7,	// (0x00022798) main_mup_pane_g7_ParamLimits

0x48f7,	// (0x00022798) main_mup_pane_g7

0x4913,	// (0x000227b4) main_mup_pane_g8_ParamLimits

0x4913,	// (0x000227b4) main_mup_pane_g8

0x492f,	// (0x000227d0) main_mup_pane_g9_ParamLimits

0x492f,	// (0x000227d0) main_mup_pane_g9

0x494e,	// (0x000227ef) main_mup_pane_g10_ParamLimits

0x494e,	// (0x000227ef) main_mup_pane_g10

0x496d,	// (0x0002280e) main_mup_pane_g11_ParamLimits

0x496d,	// (0x0002280e) main_mup_pane_g11

0x4985,	// (0x00022826) main_mup_pane_g12_ParamLimits

0x4985,	// (0x00022826) main_mup_pane_g12

0x4993,	// (0x00022834) main_mup_pane_g13_ParamLimits

0x4993,	// (0x00022834) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0002d2bb) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0002d2bb) main_mup_pane_g

0x49a9,	// (0x0002284a) main_mup_pane_t1_ParamLimits

0x49a9,	// (0x0002284a) main_mup_pane_t1

0x49c6,	// (0x00022867) main_mup_pane_t2_ParamLimits

0x49c6,	// (0x00022867) main_mup_pane_t2

0x49e0,	// (0x00022881) main_mup_pane_t3_ParamLimits

0x49e0,	// (0x00022881) main_mup_pane_t3

0x49fa,	// (0x0002289b) main_mup_pane_t4_ParamLimits

0x49fa,	// (0x0002289b) main_mup_pane_t4

0x4a0c,	// (0x000228ad) main_mup_pane_t5_ParamLimits

0x4a0c,	// (0x000228ad) main_mup_pane_t5

0x4a1e,	// (0x000228bf) main_mup_pane_t6_ParamLimits

0x4a1e,	// (0x000228bf) main_mup_pane_t6

0x0005,

0xf435,	// (0x0002d2d6) main_mup_pane_t_ParamLimits

0xf435,	// (0x0002d2d6) main_mup_pane_t

0x4a34,	// (0x000228d5) mup_progress_pane_ParamLimits

0x4a34,	// (0x000228d5) mup_progress_pane

0x4a40,	// (0x000228e1) mup_visualizer_pane_ParamLimits

0x4a40,	// (0x000228e1) mup_visualizer_pane

0x4a7e,	// (0x0002291f) mup_volume_pane_ParamLimits

0x4a7e,	// (0x0002291f) mup_volume_pane

0xab9b,	// (0x00028a3c) mup_visualizer_pane_g1_ParamLimits

0xab9b,	// (0x00028a3c) mup_visualizer_pane_g1

0xab9b,	// (0x00028a3c) mup_visualizer_pane_g2_ParamLimits

0xab9b,	// (0x00028a3c) mup_visualizer_pane_g2

0xad96,	// (0x00028c37) mup_visualizer_pane_g3_ParamLimits

0xad96,	// (0x00028c37) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002d2e3) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002d2e3) mup_visualizer_pane_g

0xa370,	// (0x00028211) mup_volume_pane_g1

0xb01a,	// (0x00028ebb) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0002d2ea) mup_volume_pane_g

0xa370,	// (0x00028211) mup_progress_pane_g1

0xb023,	// (0x00028ec4) mup_progress_pane_g2

0xb02c,	// (0x00028ecd) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002d2ef) mup_progress_pane_g

0x9fe1,	// (0x00027e82) bg_popup_window_pane_cp05

0xb035,	// (0x00028ed6) heading_pane_cp02_ParamLimits

0xb035,	// (0x00028ed6) heading_pane_cp02

0xb04f,	// (0x00028ef0) list_popup_blid_pane

0xb057,	// (0x00028ef8) list_blid_sat_info_pane_ParamLimits

0xb057,	// (0x00028ef8) list_blid_sat_info_pane

0xb06a,	// (0x00028f0b) list_blid_sat_info_pane_g1

0xb072,	// (0x00028f13) list_blid_sat_info_pane_t1

0x4b89,	// (0x00022a2a) mup_equalizer_pane_ParamLimits

0x4b89,	// (0x00022a2a) mup_equalizer_pane

0x4baa,	// (0x00022a4b) mup_equalizer_pane_cp1_ParamLimits

0x4baa,	// (0x00022a4b) mup_equalizer_pane_cp1

0x4bcb,	// (0x00022a6c) mup_equalizer_pane_cp2_ParamLimits

0x4bcb,	// (0x00022a6c) mup_equalizer_pane_cp2

0x4bec,	// (0x00022a8d) mup_equalizer_pane_cp3_ParamLimits

0x4bec,	// (0x00022a8d) mup_equalizer_pane_cp3

0x4c0d,	// (0x00022aae) mup_equalizer_pane_cp4_ParamLimits

0x4c0d,	// (0x00022aae) mup_equalizer_pane_cp4

0x4c2e,	// (0x00022acf) mup_equalizer_pane_cp5

0x4c44,	// (0x00022ae5) mup_equalizer_pane_cp6

0x4c5c,	// (0x00022afd) mup_equalizer_pane_cp7

0xc223,	// (0x0002a0c4) bg_popup_call_poc_act_pane_g9

0xc22b,	// (0x0002a0cc) bg_popup_call_poc_act_pane_g10

0xc233,	// (0x0002a0d4) bg_popup_call_poc_act_pane_g11

0x000a,

0xa23c,	// (0x000280dd) mup_scale_pane

0xa370,	// (0x00028211) mup_scale_pane_g1

0xb080,	// (0x00028f21) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0002d30b) mup_scale_pane_g

0xb0a4,	// (0x00028f45) msg_data_pane

0xb0ac,	// (0x00028f4d) scroll_pane_cp017

0x4c86,	// (0x00022b27) bg_list_pane_cp04_ParamLimits

0x4c86,	// (0x00022b27) bg_list_pane_cp04

0xb0b4,	// (0x00028f55) msg_data_pane_g1

0x4caa,	// (0x00022b4b) msg_data_pane_g2

0x4cb2,	// (0x00022b53) msg_data_pane_g3

0x4cba,	// (0x00022b5b) msg_data_pane_g4

0x4cc2,	// (0x00022b63) msg_data_pane_g5

0x4cca,	// (0x00022b6b) msg_data_pane_g6

0x4cd2,	// (0x00022b73) msg_data_pane_g7

0x0006,

0xf479,	// (0x0002d31a) msg_data_pane_g

0x4cda,	// (0x00022b7b) msg_text_pane_ParamLimits

0x4cda,	// (0x00022b7b) msg_text_pane

0x4d2d,	// (0x00022bce) qrid_highlight_pane_cp011_ParamLimits

0x4d2d,	// (0x00022bce) qrid_highlight_pane_cp011

0x9fe1,	// (0x00027e82) msg_body_pane

0x9fe1,	// (0x00027e82) msg_header_pane

0xb0c5,	// (0x00028f66) input_focus_pane_cp07

0x4d55,	// (0x00022bf6) msg_header_pane_t1_ParamLimits

0x4d55,	// (0x00022bf6) msg_header_pane_t1

0x4d67,	// (0x00022c08) msg_header_pane_t2_ParamLimits

0x4d67,	// (0x00022c08) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0002d32e) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0002d32e) msg_header_pane_t

0xb0e6,	// (0x00028f87) msg_body_pane_g1

0x4d79,	// (0x00022c1a) msg_body_pane_t1_ParamLimits

0x4d79,	// (0x00022c1a) msg_body_pane_t1

0x4daa,	// (0x00022c4b) msg_body_pane_t2_ParamLimits

0x4daa,	// (0x00022c4b) msg_body_pane_t2

0x4dbc,	// (0x00022c5d) msg_body_pane_t3_ParamLimits

0x4dbc,	// (0x00022c5d) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002d333) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002d333) msg_body_pane_t

0x147b,	// (0x0001f31c) main_viewer_pane_g1_ParamLimits

0x147b,	// (0x0001f31c) main_viewer_pane_g1

0x1487,	// (0x0001f328) main_viewer_pane_g2_ParamLimits

0x1487,	// (0x0001f328) main_viewer_pane_g2

0x4df0,	// (0x00022c91) main_viewer_pane_g3_ParamLimits

0x4df0,	// (0x00022c91) main_viewer_pane_g3

0x4e01,	// (0x00022ca2) main_viewer_pane_g4_ParamLimits

0x4e01,	// (0x00022ca2) main_viewer_pane_g4

0x1493,	// (0x0001f334) main_viewer_pane_g5_ParamLimits

0x1493,	// (0x0001f334) main_viewer_pane_g5

0x1493,	// (0x0001f334) main_viewer_pane_g7_ParamLimits

0x1493,	// (0x0001f334) main_viewer_pane_g7

0xaa1a,	// (0x000288bb) main_viewer_pane_g8_ParamLimits

0xaa1a,	// (0x000288bb) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002d343) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002d343) main_viewer_pane_g

0xb0ee,	// (0x00028f8f) viewer_content_pane_ParamLimits

0xb0ee,	// (0x00028f8f) viewer_content_pane

0x4e32,	// (0x00022cd3) main_postcard_pane_g1_ParamLimits

0x4e32,	// (0x00022cd3) main_postcard_pane_g1

0x4e40,	// (0x00022ce1) main_postcard_pane_g2_ParamLimits

0x4e40,	// (0x00022ce1) main_postcard_pane_g2

0x4e4e,	// (0x00022cef) main_postcard_pane_g3_ParamLimits

0x4e4e,	// (0x00022cef) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0002d354) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0002d354) main_postcard_pane_g

0x4e5e,	// (0x00022cff) main_postcard_pane_g4

0xc445,	// (0x0002a2e6) smil_status_volume_pane_g2

0x4e8a,	// (0x00022d2b) postcard_pane_ParamLimits

0x4e8a,	// (0x00022d2b) postcard_pane

0xab9b,	// (0x00028a3c) postcard_pane_g1_ParamLimits

0xab9b,	// (0x00028a3c) postcard_pane_g1

0x4ebc,	// (0x00022d5d) postcard_pane_g2_ParamLimits

0x4ebc,	// (0x00022d5d) postcard_pane_g2

0x4ec8,	// (0x00022d69) postcard_pane_g3_ParamLimits

0x4ec8,	// (0x00022d69) postcard_pane_g3

0xb0fc,	// (0x00028f9d) postcard_pane_g4_ParamLimits

0xb0fc,	// (0x00028f9d) postcard_pane_g4

0x4ed4,	// (0x00022d75) postcard_pane_g5_ParamLimits

0x4ed4,	// (0x00022d75) postcard_pane_g5

0x4ee0,	// (0x00022d81) postcard_pane_g6_ParamLimits

0x4ee0,	// (0x00022d81) postcard_pane_g6

0xb10a,	// (0x00028fab) postcard_pane_g7_ParamLimits

0xb10a,	// (0x00028fab) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0002d361) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0002d361) postcard_pane_g

0x4eec,	// (0x00022d8d) main_mp2_pane_g1_ParamLimits

0x4eec,	// (0x00022d8d) main_mp2_pane_g1

0x4ef8,	// (0x00022d99) main_mp2_pane_g2_ParamLimits

0x4ef8,	// (0x00022d99) main_mp2_pane_g2

0x4f04,	// (0x00022da5) main_mp2_pane_g3_ParamLimits

0x4f04,	// (0x00022da5) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0002d370) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0002d370) main_mp2_pane_g

0x4f10,	// (0x00022db1) main_mp2_pane_t1_ParamLimits

0x4f10,	// (0x00022db1) main_mp2_pane_t1

0x4f27,	// (0x00022dc8) main_mp2_pane_t2_ParamLimits

0x4f27,	// (0x00022dc8) main_mp2_pane_t2

0x4f39,	// (0x00022dda) main_mp2_pane_t3_ParamLimits

0x4f39,	// (0x00022dda) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0002d377) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0002d377) main_mp2_pane_t

0xb118,	// (0x00028fb9) pec_content_pane_ParamLimits

0xb118,	// (0x00028fb9) pec_content_pane

0xa6a9,	// (0x0002854a) scroll_pane_cp015

0xb12a,	// (0x00028fcb) pec_attribute_pane_ParamLimits

0xb12a,	// (0x00028fcb) pec_attribute_pane

0x4f4b,	// (0x00022dec) pec_content_pane_g1_ParamLimits

0x4f4b,	// (0x00022dec) pec_content_pane_g1

0xb13a,	// (0x00028fdb) pec_content_pane_t1_ParamLimits

0xb13a,	// (0x00028fdb) pec_content_pane_t1

0xb14c,	// (0x00028fed) pec_content_pane_t2_ParamLimits

0xb14c,	// (0x00028fed) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0002d37e) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0002d37e) pec_content_pane_t

0x4f57,	// (0x00022df8) list_single_graphic_pane_cp01_ParamLimits

0x4f57,	// (0x00022df8) list_single_graphic_pane_cp01

0xa23c,	// (0x000280dd) bg_popup_sub_pane_cp04

0xb15e,	// (0x00028fff) popup_mup_playback_window_g1

0xb16a,	// (0x0002900b) popup_mup_playback_window_t1

0xb17f,	// (0x00029020) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0002d383) popup_mup_playback_window_t

0xb1b6,	// (0x00029057) main_image_pane_g1_ParamLimits

0xb1b6,	// (0x00029057) main_image_pane_g1

0xb1f9,	// (0x0002909a) scroll_pane_cp018_ParamLimits

0xb1f9,	// (0x0002909a) scroll_pane_cp018

0xb211,	// (0x000290b2) scroll_pane_cp016_ParamLimits

0xb211,	// (0x000290b2) scroll_pane_cp016

0x4ff1,	// (0x00022e92) smil2_image_pane_ParamLimits

0x4ff1,	// (0x00022e92) smil2_image_pane

0x5021,	// (0x00022ec2) smil2_root_pane_ParamLimits

0x5021,	// (0x00022ec2) smil2_root_pane

0x504d,	// (0x00022eee) smil2_text_pane_ParamLimits

0x504d,	// (0x00022eee) smil2_text_pane

0x9fe1,	// (0x00027e82) bg_list_pane_cp06

0xb24d,	// (0x000290ee) grid_radio_pane

0x9fe1,	// (0x00027e82) bg_popup_window_pane_cp06

0xb255,	// (0x000290f6) main_fmradio_pane_t1

0xac12,	// (0x00028ab3) heading_pane_cp04

0xb263,	// (0x00029104) main_fmradio_pane_t2

0xc27b,	// (0x0002a11c) popup_cale_lunar_info_window_g1

0xb271,	// (0x00029112) main_fmradio_pane_t3

0xc283,	// (0x0002a124) popup_cale_lunar_info_window_g2

0xb27f,	// (0x00029120) main_fmradio_pane_t4

0x0001,

0xb28d,	// (0x0002912e) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0002d471) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0002d398) main_fmradio_pane_t

0xb29b,	// (0x0002913c) wait_bar_pane_cp03

0xb2a3,	// (0x00029144) cell_fmradio_pane_ParamLimits

0xb2a3,	// (0x00029144) cell_fmradio_pane

0xb10a,	// (0x00028fab) cell_fmradio_pane_g1_ParamLimits

0xb10a,	// (0x00028fab) cell_fmradio_pane_g1

0x9fe1,	// (0x00027e82) grid_highlight_pane_cp011

0xb2b6,	// (0x00029157) poc_content_pane_ParamLimits

0xb2b6,	// (0x00029157) poc_content_pane

0xb2c8,	// (0x00029169) scroll_pane_cp019

0x508d,	// (0x00022f2e) popup_call_poc_act_window_ParamLimits

0x508d,	// (0x00022f2e) popup_call_poc_act_window

0x509a,	// (0x00022f3b) popup_call_poc_inact_window_ParamLimits

0x509a,	// (0x00022f3b) popup_call_poc_inact_window

0xf594,	// (0x0002d435) bg_popup_call_poc_act_pane_g

0xc23b,	// (0x0002a0dc) bg_popup_call_poc_inact_pane_g1

0xc243,	// (0x0002a0e4) bg_popup_call_poc_inact_pane_g2

0xb2d0,	// (0x00029171) popup_call_poc_act_window_g2

0xc24b,	// (0x0002a0ec) bg_popup_call_poc_inact_pane_g3

0xc1cb,	// (0x0002a06c) bg_popup_call_poc_inact_pane_g4

0xc253,	// (0x0002a0f4) bg_popup_call_poc_inact_pane_g5

0xb2d8,	// (0x00029179) popup_call_poc_act_window_t1_ParamLimits

0xb2d8,	// (0x00029179) popup_call_poc_act_window_t1

0xb300,	// (0x000291a1) popup_call_poc_act_window_t2_ParamLimits

0xb300,	// (0x000291a1) popup_call_poc_act_window_t2

0xb328,	// (0x000291c9) popup_call_poc_act_window_t3_ParamLimits

0xb328,	// (0x000291c9) popup_call_poc_act_window_t3

0xb350,	// (0x000291f1) popup_call_poc_act_window_t4_ParamLimits

0xb350,	// (0x000291f1) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0002d3a3) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0002d3a3) popup_call_poc_act_window_t

0xc25b,	// (0x0002a0fc) bg_popup_call_poc_inact_pane_g6

0xc263,	// (0x0002a104) bg_popup_call_poc_inact_pane_g7

0xc26b,	// (0x0002a10c) bg_popup_call_poc_inact_pane_g8

0xb362,	// (0x00029203) popup_call_poc_inact_window_g2

0xc273,	// (0x0002a114) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0002d44c) bg_popup_call_poc_inact_pane_g

0xb36a,	// (0x0002920b) popup_call_poc_inact_window_t1_ParamLimits

0xb36a,	// (0x0002920b) popup_call_poc_inact_window_t1

0xb37f,	// (0x00029220) popup_call_poc_inact_window_t2_ParamLimits

0xb37f,	// (0x00029220) popup_call_poc_inact_window_t2

0xb394,	// (0x00029235) popup_call_poc_inact_window_t3_ParamLimits

0xb394,	// (0x00029235) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0002d3ac) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0002d3ac) popup_call_poc_inact_window_t

0xc3b8,	// (0x0002a259) context_pane_ParamLimits

0x5556,	// (0x000233f7) signal_pane_ParamLimits

0xa500,	// (0x000283a1) main_call2_pane

0x15ea,	// (0x0001f48b) popup_phob_thumbnail2_window_ParamLimits

0x15ea,	// (0x0001f48b) popup_phob_thumbnail2_window

0x144b,	// (0x0001f2ec) aid_hotspot_pointer_arrow_pane

0x1453,	// (0x0001f2f4) aid_hotspot_pointer_hand_pane

0x53c2,	// (0x00023263) phob_pre_status_pane_g5

0x2eb1,	// (0x00020d52) cams_zoom_pane_ParamLimits

0x2ebd,	// (0x00020d5e) image_vga_pane_ParamLimits

0x2ecc,	// (0x00020d6d) main_camera_pane_g1_ParamLimits

0x2eda,	// (0x00020d7b) main_camera_pane_g2_ParamLimits

0x2ee6,	// (0x00020d87) main_camera_pane_g3_ParamLimits

0x2ef2,	// (0x00020d93) main_camera_pane_g4_ParamLimits

0x2efe,	// (0x00020d9f) main_camera_pane_g5_ParamLimits

0x2f0a,	// (0x00020dab) main_camera_pane_g6_ParamLimits

0x2f16,	// (0x00020db7) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0002d0ab) main_camera_pane_g_ParamLimits

0x2f22,	// (0x00020dc3) main_camera_pane_t1_ParamLimits

0x2f34,	// (0x00020dd5) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0002d0bc) main_camera_pane_t_ParamLimits

0xa23c,	// (0x000280dd) bg_popup_preview_window_pane_cp01_ParamLimits

0xa23c,	// (0x000280dd) bg_popup_preview_window_pane_cp01

0xb3a9,	// (0x0002924a) popup_phob_thumbnail2_window_g1_ParamLimits

0xb3a9,	// (0x0002924a) popup_phob_thumbnail2_window_g1

0x9fe1,	// (0x00027e82) call2_cli_visual_pane

0x50b6,	// (0x00022f57) popup_call2_audio_conf_window_ParamLimits

0x50b6,	// (0x00022f57) popup_call2_audio_conf_window

0x50cb,	// (0x00022f6c) popup_call2_audio_first_window_ParamLimits

0x50cb,	// (0x00022f6c) popup_call2_audio_first_window

0x5169,	// (0x0002300a) popup_call2_audio_in_window_ParamLimits

0x5169,	// (0x0002300a) popup_call2_audio_in_window

0x51ab,	// (0x0002304c) popup_call2_audio_out_window_ParamLimits

0x51ab,	// (0x0002304c) popup_call2_audio_out_window

0x520d,	// (0x000230ae) popup_call2_audio_second_window_ParamLimits

0x520d,	// (0x000230ae) popup_call2_audio_second_window

0x526b,	// (0x0002310c) popup_call2_audio_wait_window_ParamLimits

0x526b,	// (0x0002310c) popup_call2_audio_wait_window

0x9fe1,	// (0x00027e82) bg_popup_call2_act_pane_cp03

0xa21e,	// (0x000280bf) list_conf_pane_cp

0xb3b5,	// (0x00029256) popup_call2_audio_conf_window_t1

0xb3c3,	// (0x00029264) list_single_graphic_popup_conf2_pane_ParamLimits

0xb3c3,	// (0x00029264) list_single_graphic_popup_conf2_pane

0xac82,	// (0x00028b23) list_highlight_pane_cp04

0xb3d6,	// (0x00029277) list_single_graphic_popup_conf2_pane_g1

0xac93,	// (0x00028b34) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0002d3b3) list_single_graphic_popup_conf2_pane_g

0xb3e0,	// (0x00029281) list_single_graphic_popup_conf2_pane_t1

0xb3ee,	// (0x0002928f) bg_popup_call2_act_pane_cp01_ParamLimits

0xb3ee,	// (0x0002928f) bg_popup_call2_act_pane_cp01

0xb478,	// (0x00029319) call_type_pane_cp05_ParamLimits

0xb478,	// (0x00029319) call_type_pane_cp05

0xb4cc,	// (0x0002936d) popup_call2_audio_second_window_g1_ParamLimits

0xb4cc,	// (0x0002936d) popup_call2_audio_second_window_g1

0xb520,	// (0x000293c1) popup_call2_audio_second_window_g2_ParamLimits

0xb520,	// (0x000293c1) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0002d3b8) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0002d3b8) popup_call2_audio_second_window_g

0xb585,	// (0x00029426) popup_call2_audio_second_window_t1_ParamLimits

0xb585,	// (0x00029426) popup_call2_audio_second_window_t1

0xb640,	// (0x000294e1) popup_call2_audio_second_window_t2_ParamLimits

0xb640,	// (0x000294e1) popup_call2_audio_second_window_t2

0xb693,	// (0x00029534) popup_call2_audio_second_window_t3_ParamLimits

0xb693,	// (0x00029534) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0002d3bf) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0002d3bf) popup_call2_audio_second_window_t

0x9fe1,	// (0x00027e82) bg_popup_call2_in_pane_cp02

0x9feb,	// (0x00027e8c) call_type_pane_cp04

0x9ff3,	// (0x00027e94) popup_call2_audio_wait_window_g1

0x9ffb,	// (0x00027e9c) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002cf9a) popup_call2_audio_wait_window_g

0xa003,	// (0x00027ea4) popup_call2_audio_wait_window_t3

0xb786,	// (0x00029627) bg_popup_call2_act_pane_ParamLimits

0xb786,	// (0x00029627) bg_popup_call2_act_pane

0xb846,	// (0x000296e7) call_type_pane_cp03_ParamLimits

0xb846,	// (0x000296e7) call_type_pane_cp03

0xb8aa,	// (0x0002974b) popup_call2_audio_first_window_g1_ParamLimits

0xb8aa,	// (0x0002974b) popup_call2_audio_first_window_g1

0xb91a,	// (0x000297bb) popup_call2_audio_first_window_g2_ParamLimits

0xb91a,	// (0x000297bb) popup_call2_audio_first_window_g2

0xab9b,	// (0x00028a3c) popup_call2_audio_first_window_g3_ParamLimits

0xab9b,	// (0x00028a3c) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0002d3c8) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0002d3c8) popup_call2_audio_first_window_g

0xb9f8,	// (0x00029899) popup_call2_audio_first_window_t1_ParamLimits

0xb9f8,	// (0x00029899) popup_call2_audio_first_window_t1

0xbafb,	// (0x0002999c) popup_call2_audio_first_window_t4_ParamLimits

0xbafb,	// (0x0002999c) popup_call2_audio_first_window_t4

0xbbde,	// (0x00029a7f) popup_call2_audio_first_window_t5_ParamLimits

0xbbde,	// (0x00029a7f) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0002d3d3) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0002d3d3) popup_call2_audio_first_window_t

0xa234,	// (0x000280d5) bg_popup_call2_act_pane_g1

0xc28b,	// (0x0002a12c) popup_cale_lunar_info_window_t1

0xc299,	// (0x0002a13a) popup_cale_lunar_info_window_t2

0xc2a7,	// (0x0002a148) popup_cale_lunar_info_window_t3

0x9fe1,	// (0x00027e82) bg_popup_call2_bubble_pane

0xbcdf,	// (0x00029b80) bg_popup_call2_in_pane_cp01_ParamLimits

0xbcdf,	// (0x00029b80) bg_popup_call2_in_pane_cp01

0x9cbd,	// (0x00027b5e) call_type_pane_cp02

0xbd27,	// (0x00029bc8) popup_call2_audio_out_window_g1_ParamLimits

0xbd27,	// (0x00029bc8) popup_call2_audio_out_window_g1

0xbd53,	// (0x00029bf4) popup_call2_audio_out_window_g2_ParamLimits

0xbd53,	// (0x00029bf4) popup_call2_audio_out_window_g2

0xbd7b,	// (0x00029c1c) popup_call2_audio_out_window_g3_ParamLimits

0xbd7b,	// (0x00029c1c) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0002d3dc) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0002d3dc) popup_call2_audio_out_window_g

0xbdb6,	// (0x00029c57) popup_call2_audio_out_window_t1_ParamLimits

0xbdb6,	// (0x00029c57) popup_call2_audio_out_window_t1

0xbe15,	// (0x00029cb6) popup_call2_audio_out_window_t2_ParamLimits

0xbe15,	// (0x00029cb6) popup_call2_audio_out_window_t2

0xbe69,	// (0x00029d0a) popup_call2_audio_out_window_t3_ParamLimits

0xbe69,	// (0x00029d0a) popup_call2_audio_out_window_t3

0xbe7f,	// (0x00029d20) popup_call2_audio_out_window_t4_ParamLimits

0xbe7f,	// (0x00029d20) popup_call2_audio_out_window_t4

0xbe95,	// (0x00029d36) popup_call2_audio_out_window_t5_ParamLimits

0xbe95,	// (0x00029d36) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0002d3e5) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0002d3e5) popup_call2_audio_out_window_t

0xbef9,	// (0x00029d9a) bg_popup_call2_in_pane_ParamLimits

0xbef9,	// (0x00029d9a) bg_popup_call2_in_pane

0xbf55,	// (0x00029df6) popup_call2_audio_in_window_g1_ParamLimits

0xbf55,	// (0x00029df6) popup_call2_audio_in_window_g1

0xbf8d,	// (0x00029e2e) popup_call2_audio_in_window_g2_ParamLimits

0xbf8d,	// (0x00029e2e) popup_call2_audio_in_window_g2

0xbfc5,	// (0x00029e66) popup_call2_audio_in_window_g3_ParamLimits

0xbfc5,	// (0x00029e66) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0002d3f2) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0002d3f2) popup_call2_audio_in_window_g

0xc01d,	// (0x00029ebe) popup_call2_audio_in_window_t1_ParamLimits

0xc01d,	// (0x00029ebe) popup_call2_audio_in_window_t1

0xc09d,	// (0x00029f3e) popup_call2_audio_in_window_t2_ParamLimits

0xc09d,	// (0x00029f3e) popup_call2_audio_in_window_t2

0xc11d,	// (0x00029fbe) popup_call2_audio_in_window_t3_ParamLimits

0xc11d,	// (0x00029fbe) popup_call2_audio_in_window_t3

0xc137,	// (0x00029fd8) popup_call2_audio_in_window_t4_ParamLimits

0xc137,	// (0x00029fd8) popup_call2_audio_in_window_t4

0xc149,	// (0x00029fea) popup_call2_audio_in_window_t5_ParamLimits

0xc149,	// (0x00029fea) popup_call2_audio_in_window_t5

0xc15e,	// (0x00029fff) popup_call2_audio_in_window_t6_ParamLimits

0xc15e,	// (0x00029fff) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0002d3fb) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002d3fb) popup_call2_audio_in_window_t

0xa234,	// (0x000280d5) bg_popup_call2_in_pane_g1

0xc2b5,	// (0x0002a156) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0002d476) popup_cale_lunar_info_window_t

0xa23c,	// (0x000280dd) bg_popup_call2_rect_pane_ParamLimits

0xa23c,	// (0x000280dd) bg_popup_call2_rect_pane

0x9fe1,	// (0x00027e82) call2_cli_visual_graphic_pane

0x9fe1,	// (0x00027e82) call2_cli_visual_text_pane

0x1639,	// (0x0001f4da) smil_status_volume_pane_g3

0x0002,

0xa370,	// (0x00028211) call2_cli_visual_graphic_pane_g1

0xa370,	// (0x00028211) call2_cli_visual_graphic_pane_g2

0xa370,	// (0x00028211) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0002d408) call2_cli_visual_graphic_pane_g

0xc173,	// (0x0002a014) bg_popup_call2_rect_pane_g1

0xa40e,	// (0x000282af) bg_popup_call2_rect_pane_g2

0xc17b,	// (0x0002a01c) bg_popup_call2_rect_pane_g3

0xc183,	// (0x0002a024) bg_popup_call2_rect_pane_g4

0xc18b,	// (0x0002a02c) bg_popup_call2_rect_pane_g5

0xc193,	// (0x0002a034) bg_popup_call2_rect_pane_g6

0xc19b,	// (0x0002a03c) bg_popup_call2_rect_pane_g7

0xc1a3,	// (0x0002a044) bg_popup_call2_rect_pane_g8

0xc1ab,	// (0x0002a04c) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0002d40f) bg_popup_call2_rect_pane_g

0xc1b3,	// (0x0002a054) bg_popup_call2_bubble_pane_g1

0xc1bb,	// (0x0002a05c) bg_popup_call2_bubble_pane_g2

0xc1c3,	// (0x0002a064) bg_popup_call2_bubble_pane_g3

0xc1cb,	// (0x0002a06c) bg_popup_call2_bubble_pane_g4

0xc1d3,	// (0x0002a074) bg_popup_call2_bubble_pane_g5

0xc1db,	// (0x0002a07c) bg_popup_call2_bubble_pane_g6

0xc1e3,	// (0x0002a084) bg_popup_call2_bubble_pane_g7

0xc1eb,	// (0x0002a08c) bg_popup_call2_bubble_pane_g8

0xc1f3,	// (0x0002a094) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0002d422) bg_popup_call2_bubble_pane_g

0x2ab5,	// (0x00020956) aid_cale_week_size_cell_pane

0x2f46,	// (0x00020de7) aid_cams_cif_uncrop_pane_ParamLimits

0x2f46,	// (0x00020de7) aid_cams_cif_uncrop_pane

0x30a1,	// (0x00020f42) aid_cams_size_cell_ParamLimits

0x30a1,	// (0x00020f42) aid_cams_size_cell

0x30ad,	// (0x00020f4e) grid_cams_pane_ParamLimits

0x30bb,	// (0x00020f5c) linegrid_cams_pane_ParamLimits

0x32a7,	// (0x00021148) call_video_pane_t1

0x32c8,	// (0x00021169) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002d10f) call_video_pane_t

0x3816,	// (0x000216b7) aid_cale_month_size_cell_pane_ParamLimits

0x3816,	// (0x000216b7) aid_cale_month_size_cell_pane

0xf61e,	// (0x0002d4bf) smil_status_volume_pane_g

0x1646,	// (0x0001f4e7) volume_smil_pane_ParamLimits

0x0de8,	// (0x0001ec89) aid_popup2_width_pane

0x29f7,	// (0x00020898) cell_qdial_pane_g4_ParamLimits

0x29f7,	// (0x00020898) cell_qdial_pane_g4

0x4795,	// (0x00022636) aid_blid_cardinal_pane_ParamLimits

0x47a5,	// (0x00022646) aid_blid_destination_pane_ParamLimits

0x47a5,	// (0x00022646) aid_blid_destination_pane

0xa23c,	// (0x000280dd) bg_popup_call_poc_act_pane_ParamLimits

0xa23c,	// (0x000280dd) bg_popup_call_poc_act_pane

0xa23c,	// (0x000280dd) bg_popup_call_poc_inact_pane_ParamLimits

0xa23c,	// (0x000280dd) bg_popup_call_poc_inact_pane

0xc1fb,	// (0x0002a09c) bg_popup_call_poc_act_pane_g1

0xc203,	// (0x0002a0a4) bg_popup_call_poc_act_pane_g2

0xc20b,	// (0x0002a0ac) bg_popup_call_poc_act_pane_g3

0xc1cb,	// (0x0002a06c) bg_popup_call_poc_act_pane_g4

0xc1d3,	// (0x0002a074) bg_popup_call_poc_act_pane_g5

0xc213,	// (0x0002a0b4) bg_popup_call_poc_act_pane_g6

0xc1e3,	// (0x0002a084) bg_popup_call_poc_act_pane_g7

0xc21b,	// (0x0002a0bc) bg_popup_call_poc_act_pane_g8

0x9fe1,	// (0x00027e82) main_usb_pane

0x151d,	// (0x0001f3be) popup_cale_lunar_info_window

0x35e5,	// (0x00021486) im_reading_pane_t1_ParamLimits

0xa601,	// (0x000284a2) list_im_pane_ParamLimits

0xa612,	// (0x000284b3) scroll_pane_cp07_ParamLimits

0x9fe1,	// (0x00027e82) grid_highlight_pane_cp012

0xa23c,	// (0x000280dd) mup_scale_pane_ParamLimits

0xab9b,	// (0x00028a3c) main_usb_pane_g1_ParamLimits

0xab9b,	// (0x00028a3c) main_usb_pane_g1

0x52e5,	// (0x00023186) main_usb_pane_g2_ParamLimits

0x52e5,	// (0x00023186) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0002d45f) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0002d45f) main_usb_pane_g

0x52f1,	// (0x00023192) main_usb_pane_t1_ParamLimits

0x52f1,	// (0x00023192) main_usb_pane_t1

0x5303,	// (0x000231a4) main_usb_pane_t2_ParamLimits

0x5303,	// (0x000231a4) main_usb_pane_t2

0x5315,	// (0x000231b6) main_usb_pane_t3_ParamLimits

0x5315,	// (0x000231b6) main_usb_pane_t3

0x5327,	// (0x000231c8) main_usb_pane_t4_ParamLimits

0x5327,	// (0x000231c8) main_usb_pane_t4

0x5339,	// (0x000231da) main_usb_pane_t5_ParamLimits

0x5339,	// (0x000231da) main_usb_pane_t5

0x534b,	// (0x000231ec) main_usb_pane_t6_ParamLimits

0x534b,	// (0x000231ec) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0002d464) main_usb_pane_t_ParamLimits

0x473b,	// (0x000225dc) aid_text_placing

0x4747,	// (0x000225e8) main_location2_pane_t1_ParamLimits

0x475b,	// (0x000225fc) main_location2_pane_t2_ParamLimits

0x476f,	// (0x00022610) main_location2_pane_t3_ParamLimits

0x4783,	// (0x00022624) main_location2_pane_t4_ParamLimits

0x4783,	// (0x00022624) main_location2_pane_t4

0xf3cf,	// (0x0002d270) main_location2_pane_t_ParamLimits

0xa278,	// (0x00028119) find_pinb_pane_g2_ParamLimits

0xa278,	// (0x00028119) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0002cfc0) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0002cfc0) find_pinb_pane_g

0xa284,	// (0x00028125) find_pinb_pane_t1_ParamLimits

0xa296,	// (0x00028137) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0002cfc5) find_pinb_pane_t_ParamLimits

0x9fe1,	// (0x00027e82) main_call3_pane

0x3dd9,	// (0x00021c7a) cale_month_day_heading_pane_t1_ParamLimits

0x3e5f,	// (0x00021d00) cale_month_day_heading_pane_t2_ParamLimits

0x3ed8,	// (0x00021d79) cale_month_day_heading_pane_t3_ParamLimits

0x3f51,	// (0x00021df2) cale_month_day_heading_pane_t4_ParamLimits

0x3fca,	// (0x00021e6b) cale_month_day_heading_pane_t5_ParamLimits

0x4043,	// (0x00021ee4) cale_month_day_heading_pane_t6_ParamLimits

0x40bc,	// (0x00021f5d) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0002d147) cale_month_day_heading_pane_t_ParamLimits

0xa85c,	// (0x000286fd) smil_status_volume_pane

0x4ea4,	// (0x00022d45) postcard_address_pane_ParamLimits

0x4ea4,	// (0x00022d45) postcard_address_pane

0x4eb0,	// (0x00022d51) postcard_message_pane_ParamLimits

0x4eb0,	// (0x00022d51) postcard_message_pane

0x52aa,	// (0x0002314b) call2_cli_visual_pane_t1_ParamLimits

0x52aa,	// (0x0002314b) call2_cli_visual_pane_t1

0x5741,	// (0x000235e2) postcard_message_pane_t1_ParamLimits

0x5741,	// (0x000235e2) postcard_message_pane_t1

0x572a,	// (0x000235cb) postcard_address_pane_t1_ParamLimits

0x572a,	// (0x000235cb) postcard_address_pane_t1

0x571b,	// (0x000235bc) popup_call3_audio_in_window_ParamLimits

0x571b,	// (0x000235bc) popup_call3_audio_in_window

0x55ff,	// (0x000234a0) bg_popup_call3_in_pane_ParamLimits

0x55ff,	// (0x000234a0) bg_popup_call3_in_pane

0x5661,	// (0x00023502) popup_call3_audio_in_window_g1_ParamLimits

0x5661,	// (0x00023502) popup_call3_audio_in_window_g1

0x5679,	// (0x0002351a) popup_call3_audio_in_window_g2_ParamLimits

0x5679,	// (0x0002351a) popup_call3_audio_in_window_g2

0x5691,	// (0x00023532) popup_call3_audio_in_window_g3_ParamLimits

0x5691,	// (0x00023532) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0002d4c6) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0002d4c6) popup_call3_audio_in_window_g

0x56b9,	// (0x0002355a) popup_call3_audio_in_window_t1_ParamLimits

0x56b9,	// (0x0002355a) popup_call3_audio_in_window_t1

0x56e1,	// (0x00023582) popup_call3_audio_in_window_t2_ParamLimits

0x56e1,	// (0x00023582) popup_call3_audio_in_window_t2

0x5709,	// (0x000235aa) popup_call3_audio_in_window_t3_ParamLimits

0x5709,	// (0x000235aa) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0002d4cf) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0002d4cf) popup_call3_audio_in_window_t

0xa500,	// (0x000283a1) bg_popup_call3_rect_pane

0xc173,	// (0x0002a014) bg_popup_call3_rect_pane_g1

0xa40e,	// (0x000282af) bg_popup_call3_rect_pane_g2

0xc17b,	// (0x0002a01c) bg_popup_call3_rect_pane_g3

0xc183,	// (0x0002a024) bg_popup_call3_rect_pane_g4

0xc18b,	// (0x0002a02c) bg_popup_call3_rect_pane_g5

0xc193,	// (0x0002a034) bg_popup_call3_rect_pane_g6

0xc19b,	// (0x0002a03c) bg_popup_call3_rect_pane_g7

0x4a99,	// (0x0002293a) mup_visualizer_osc_pane

0xb012,	// (0x00028eb3) mup_visualizer_spec_pane

0x561f,	// (0x000234c0) call3_video_qcif_pane_ParamLimits

0x561f,	// (0x000234c0) call3_video_qcif_pane

0x5631,	// (0x000234d2) call3_video_qcif_uncrop_pane_ParamLimits

0x5631,	// (0x000234d2) call3_video_qcif_uncrop_pane

0x563f,	// (0x000234e0) call3_video_subqcif_pane_ParamLimits

0x563f,	// (0x000234e0) call3_video_subqcif_pane

0x5651,	// (0x000234f2) call3_video_subqcif_uncrop_pane_ParamLimits

0x5651,	// (0x000234f2) call3_video_subqcif_uncrop_pane

0x56a9,	// (0x0002354a) popup_call3_audio_in_window_g4_ParamLimits

0x56a9,	// (0x0002354a) popup_call3_audio_in_window_g4

0x55ec,	// (0x0002348d) mup_spec_half_pane

0x55f5,	// (0x00023496) mup_spec_half_pane_cp

0xc418,	// (0x0002a2b9) mup_osc_middle_pane

0xc421,	// (0x0002a2c2) mup_visualizer_osc_pane_g1

0x55cd,	// (0x0002346e) mup_spec_bar_pane_ParamLimits

0x55cd,	// (0x0002346e) mup_spec_bar_pane

0xc405,	// (0x0002a2a6) mup_spec_bar_pane_g1

0xc40f,	// (0x0002a2b0) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0002d4ba) mup_spec_bar_pane_g

0x2ab5,	// (0x00020956) aid_cale_week_size_cell_pane_ParamLimits

0x2aca,	// (0x0002096b) bg_cale_heading_pane_ParamLimits

0xa459,	// (0x000282fa) bg_cale_pane_cp01_ParamLimits

0x2aec,	// (0x0002098d) cale_week_corner_pane_ParamLimits

0x2b06,	// (0x000209a7) cale_week_day_heading_pane_ParamLimits

0x2b28,	// (0x000209c9) cale_week_scroll_pane_g1_ParamLimits

0x2b45,	// (0x000209e6) cale_week_scroll_pane_g2_ParamLimits

0x2b58,	// (0x000209f9) cale_week_scroll_pane_g3_ParamLimits

0x2b6b,	// (0x00020a0c) cale_week_scroll_pane_g4_ParamLimits

0x2b7e,	// (0x00020a1f) cale_week_scroll_pane_g5_ParamLimits

0x2b91,	// (0x00020a32) cale_week_scroll_pane_g6_ParamLimits

0x2ba4,	// (0x00020a45) cale_week_scroll_pane_g7_ParamLimits

0x2bb9,	// (0x00020a5a) cale_week_scroll_pane_g8_ParamLimits

0x2bce,	// (0x00020a6f) cale_week_scroll_pane_g9_ParamLimits

0x2be1,	// (0x00020a82) cale_week_scroll_pane_g10_ParamLimits

0x2bf4,	// (0x00020a95) cale_week_scroll_pane_g11_ParamLimits

0x2c07,	// (0x00020aa8) cale_week_scroll_pane_g12_ParamLimits

0x2c1e,	// (0x00020abf) cale_week_scroll_pane_g13_ParamLimits

0x2c39,	// (0x00020ada) cale_week_scroll_pane_g14_ParamLimits

0x2c54,	// (0x00020af5) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0002d051) cale_week_scroll_pane_g_ParamLimits

0x2c84,	// (0x00020b25) cale_week_time_pane_ParamLimits

0x2c99,	// (0x00020b3a) grid_cale_week_pane_ParamLimits

0xa476,	// (0x00028317) listscroll_cale_week_pane_t1

0xa488,	// (0x00028329) scroll_pane_cp08_ParamLimits

0x388a,	// (0x0002172b) cale_month_corner_pane_ParamLimits

0xa832,	// (0x000286d3) cale_month_pane_t1

0x3d58,	// (0x00021bf9) cale_month_week_pane_ParamLimits

0xab9b,	// (0x00028a3c) popup_call_status_window_g1_ParamLimits

0x45b3,	// (0x00022454) popup_call_status_window_g2_ParamLimits

0x45bf,	// (0x00022460) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0002d1f7) popup_call_status_window_g_ParamLimits

0xac02,	// (0x00028aa3) aid_call2_pane

0x4d49,	// (0x00022bea) msg_header_pane_g1

0x4ea4,	// (0x00022d45) postcard_address2_pane_ParamLimits

0x4ea4,	// (0x00022d45) postcard_address2_pane

0x4eb0,	// (0x00022d51) postcard_message2_pane_ParamLimits

0x4eb0,	// (0x00022d51) postcard_message2_pane

0x5564,	// (0x00023405) message2_row_pane_ParamLimits

0x5564,	// (0x00023405) message2_row_pane

0x557f,	// (0x00023420) address2_row_pane_ParamLimits

0x557f,	// (0x00023420) address2_row_pane

0xc3d3,	// (0x0002a274) postcard_message2_row_pane_g1

0xc3db,	// (0x0002a27c) postcard_message2_row_pane_t1

0xc3d3,	// (0x0002a274) address2_row_pane_g1

0xc3db,	// (0x0002a27c) address2_row_pane_t1

0x2e36,	// (0x00020cd7) aid_size_cell_vorec

0x9fe1,	// (0x00027e82) main_rss_pane

0x5592,	// (0x00023433) rss_list_single_pane_ParamLimits

0x5592,	// (0x00023433) rss_list_single_pane

0xc3e9,	// (0x0002a28a) rss_list_single_pane_t1

0xc3f7,	// (0x0002a298) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0002d4b5) rss_list_single_pane_t

0x9fe1,	// (0x00027e82) main_camera2_pane

0x9fe1,	// (0x00027e82) main_video2_pane

0x16a4,	// (0x0001f545) cams_zoom_pane_cp2_ParamLimits

0x16a4,	// (0x0001f545) cams_zoom_pane_cp2

0x16b0,	// (0x0001f551) image2_vga_pane_ParamLimits

0x16b0,	// (0x0001f551) image2_vga_pane

0x16bf,	// (0x0001f560) main_camera2_pane_g1_ParamLimits

0x16bf,	// (0x0001f560) main_camera2_pane_g1

0x16cb,	// (0x0001f56c) main_camera2_pane_g2_ParamLimits

0x16cb,	// (0x0001f56c) main_camera2_pane_g2

0x16d7,	// (0x0001f578) main_camera2_pane_g3_ParamLimits

0x16d7,	// (0x0001f578) main_camera2_pane_g3

0x16e3,	// (0x0001f584) main_camera2_pane_g4_ParamLimits

0x16e3,	// (0x0001f584) main_camera2_pane_g4

0x16ef,	// (0x0001f590) main_camera2_pane_g5_ParamLimits

0x16ef,	// (0x0001f590) main_camera2_pane_g5

0x16fb,	// (0x0001f59c) main_camera2_pane_g6_ParamLimits

0x16fb,	// (0x0001f59c) main_camera2_pane_g6

0x1707,	// (0x0001f5a8) main_camera2_pane_g7_ParamLimits

0x1707,	// (0x0001f5a8) main_camera2_pane_g7

0x1713,	// (0x0001f5b4) main_camera2_pane_g8_ParamLimits

0x1713,	// (0x0001f5b4) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0002d4d6) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0002d4d6) main_camera2_pane_g

0x172b,	// (0x0001f5cc) main_camera2_pane_t1_ParamLimits

0x172b,	// (0x0001f5cc) main_camera2_pane_t1

0x173d,	// (0x0001f5de) main_camera2_pane_t2_ParamLimits

0x173d,	// (0x0001f5de) main_camera2_pane_t2

0x174f,	// (0x0001f5f0) main_camera2_pane_t3_ParamLimits

0x174f,	// (0x0001f5f0) main_camera2_pane_t3

0x1761,	// (0x0001f602) main_camera2_pane_t4_ParamLimits

0x1761,	// (0x0001f602) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0002d4e9) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0002d4e9) main_camera2_pane_t

0x17c3,	// (0x0001f664) cams_zoom_pane_cp4_ParamLimits

0x17c3,	// (0x0001f664) cams_zoom_pane_cp4

0x17d3,	// (0x0001f674) image2_cif_pane_ParamLimits

0x17d3,	// (0x0001f674) image2_cif_pane

0x17e8,	// (0x0001f689) image2_subqcif_pane_ParamLimits

0x17e8,	// (0x0001f689) image2_subqcif_pane

0x17f7,	// (0x0001f698) main_video2_pane_g1_ParamLimits

0x17f7,	// (0x0001f698) main_video2_pane_g1

0x1809,	// (0x0001f6aa) main_video2_pane_g2_ParamLimits

0x1809,	// (0x0001f6aa) main_video2_pane_g2

0x1819,	// (0x0001f6ba) main_video2_pane_g3_ParamLimits

0x1819,	// (0x0001f6ba) main_video2_pane_g3

0x1829,	// (0x0001f6ca) main_video2_pane_g4_ParamLimits

0x1829,	// (0x0001f6ca) main_video2_pane_g4

0x1839,	// (0x0001f6da) main_video2_pane_g5_ParamLimits

0x1839,	// (0x0001f6da) main_video2_pane_g5

0x1849,	// (0x0001f6ea) main_video2_pane_g6_ParamLimits

0x1849,	// (0x0001f6ea) main_video2_pane_g6

0x0005,

0xf657,	// (0x0002d4f8) main_video2_pane_g_ParamLimits

0xf657,	// (0x0002d4f8) main_video2_pane_g

0x185b,	// (0x0001f6fc) main_video2_pane_t1_ParamLimits

0x185b,	// (0x0001f6fc) main_video2_pane_t1

0x1875,	// (0x0001f716) main_video2_pane_t2_ParamLimits

0x1875,	// (0x0001f716) main_video2_pane_t2

0x189b,	// (0x0001f73c) main_video2_pane_t3_ParamLimits

0x189b,	// (0x0001f73c) main_video2_pane_t3

0x0002,

0xf664,	// (0x0002d505) main_video2_pane_t_ParamLimits

0xf664,	// (0x0002d505) main_video2_pane_t

0x5402,	// (0x000232a3) call_muted_g2

0x0001,

0xf606,	// (0x0002d4a7) call_muted_g

0x9fe1,	// (0x00027e82) main_mup2_pane

0xc458,	// (0x0002a2f9) main_mup2_pane_g1_ParamLimits

0xc458,	// (0x0002a2f9) main_mup2_pane_g1

0x575c,	// (0x000235fd) main_mup2_pane_g2_ParamLimits

0x575c,	// (0x000235fd) main_mup2_pane_g2

0x18ea,	// (0x0001f78b) main_mup_pane_g13_cp1

0x18f2,	// (0x0001f793) mup_volume_pane_cp1

0x577c,	// (0x0002361d) main_mup2_pane_g4_ParamLimits

0x577c,	// (0x0002361d) main_mup2_pane_g4

0x5791,	// (0x00023632) main_mup2_pane_g5_ParamLimits

0x5791,	// (0x00023632) main_mup2_pane_g5

0x57a6,	// (0x00023647) main_mup2_pane_g6_ParamLimits

0x57a6,	// (0x00023647) main_mup2_pane_g6

0x57bb,	// (0x0002365c) main_mup2_pane_g7_ParamLimits

0x57bb,	// (0x0002365c) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0002d50c) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0002d50c) main_mup2_pane_g

0x57d7,	// (0x00023678) main_mup2_pane_t1_ParamLimits

0x57d7,	// (0x00023678) main_mup2_pane_t1

0x57ee,	// (0x0002368f) main_mup2_pane_t2_ParamLimits

0x57ee,	// (0x0002368f) main_mup2_pane_t2

0x5805,	// (0x000236a6) main_mup2_pane_t3_ParamLimits

0x5805,	// (0x000236a6) main_mup2_pane_t3

0x581c,	// (0x000236bd) main_mup2_pane_t4_ParamLimits

0x581c,	// (0x000236bd) main_mup2_pane_t4

0x5836,	// (0x000236d7) main_mup2_pane_t5_ParamLimits

0x5836,	// (0x000236d7) main_mup2_pane_t5

0x5850,	// (0x000236f1) main_mup2_pane_t6_ParamLimits

0x5850,	// (0x000236f1) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0002d51b) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0002d51b) main_mup2_pane_t

0x5888,	// (0x00023729) mup2_visualizer_pane_ParamLimits

0x5888,	// (0x00023729) mup2_visualizer_pane

0x58be,	// (0x0002375f) mup_progress_pane_cp_ParamLimits

0x58be,	// (0x0002375f) mup_progress_pane_cp

0x18d5,	// (0x0001f776) mup_volume_pane_cp_ParamLimits

0x18d5,	// (0x0001f776) mup_volume_pane_cp

0x58d5,	// (0x00023776) mup2_visualizer_pane_g1_ParamLimits

0x58d5,	// (0x00023776) mup2_visualizer_pane_g1

0xc464,	// (0x0002a305) mup2_visualizer_pane_g2_ParamLimits

0xc464,	// (0x0002a305) mup2_visualizer_pane_g2

0x58ea,	// (0x0002378b) mup2_visualizer_pane_g3_ParamLimits

0x58ea,	// (0x0002378b) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0002d528) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0002d528) mup2_visualizer_pane_g

0xb245,	// (0x000290e6) aid_size_cell_fmradio

0x14b1,	// (0x0001f352) aid_height_parent_landcape

0xa690,	// (0x00028531) wml_content_pane_cp

0xa698,	// (0x00028539) wml_tabs_pane

0xa6a1,	// (0x00028542) popup_wml_miniature_window

0xa6a9,	// (0x0002854a) scroll_pane_cp021

0xa6bd,	// (0x0002855e) wml_content_pane_comp8

0x9fe1,	// (0x00027e82) bg_popup_sub_pane_cp05

0xc482,	// (0x0002a323) popup_wml_miniature_window_g1

0xc48a,	// (0x0002a32b) wml_miniature_view_pane

0x58f8,	// (0x00023799) aid_size_wml_view

0x5900,	// (0x000237a1) wml_miniature_view_pane_g1

0x5909,	// (0x000237aa) wml_miniature_view_pane_g2

0x5912,	// (0x000237b3) wml_miniature_view_pane_g3

0x591a,	// (0x000237bb) wml_miniature_view_pane_g4

0x5922,	// (0x000237c3) wml_miniature_view_pane_g5

0x592a,	// (0x000237cb) wml_miniature_view_pane_g6

0x5932,	// (0x000237d3) wml_miniature_view_pane_g7

0x593a,	// (0x000237db) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0002d52f) wml_miniature_view_pane_g

0xc458,	// (0x0002a2f9) background_graphic_ParamLimits

0xc458,	// (0x0002a2f9) background_graphic

0xc492,	// (0x0002a333) wml_tabs_2_pane

0xc49b,	// (0x0002a33c) wml_tabs_3_pane_ParamLimits

0xc49b,	// (0x0002a33c) wml_tabs_3_pane

0xc4ad,	// (0x0002a34e) wml_tabs_4_pane_ParamLimits

0xc4ad,	// (0x0002a34e) wml_tabs_4_pane

0xc4c3,	// (0x0002a364) wml_tabs_5_pane_ParamLimits

0xc4c3,	// (0x0002a364) wml_tabs_5_pane

0xc4dd,	// (0x0002a37e) wml_tabs_pane_g2_ParamLimits

0xc4dd,	// (0x0002a37e) wml_tabs_pane_g2

0xc4f1,	// (0x0002a392) wml_tabs_pane_g3_ParamLimits

0xc4f1,	// (0x0002a392) wml_tabs_pane_g3

0x5942,	// (0x000237e3) wml_tabs_2_active_pane_ParamLimits

0x5942,	// (0x000237e3) wml_tabs_2_active_pane

0x5952,	// (0x000237f3) wml_tabs_2_passive_pane_ParamLimits

0x5952,	// (0x000237f3) wml_tabs_2_passive_pane

0x5962,	// (0x00023803) wml_tabs_3_active_pane_cp_ParamLimits

0x5962,	// (0x00023803) wml_tabs_3_active_pane_cp

0x5973,	// (0x00023814) wml_tabs_3_passive_pane_ParamLimits

0x5973,	// (0x00023814) wml_tabs_3_passive_pane

0x5984,	// (0x00023825) wml_tabs_3_passive_pane_cp_ParamLimits

0x5984,	// (0x00023825) wml_tabs_3_passive_pane_cp

0x5995,	// (0x00023836) tabs_4_active_pane

0x599d,	// (0x0002383e) tabs_4_passive_pane

0x59a5,	// (0x00023846) tabs_4_passive_pane_cp

0x59ad,	// (0x0002384e) tabs_4_passive_pane_cp2

0x52dd,	// (0x0002317e) aid_height_text

0x4a62,	// (0x00022903) mup_volume_cont_pane_ParamLimits

0x4a62,	// (0x00022903) mup_volume_cont_pane

0x27a5,	// (0x00020646) aid_size_cell_pinb

0x27af,	// (0x00020650) aid_size_list_pinb

0x58a7,	// (0x00023748) mup2_volume_cont_pane_ParamLimits

0x58a7,	// (0x00023748) mup2_volume_cont_pane

0x18c1,	// (0x0001f762) mup2_volume_cont_pane_g1_ParamLimits

0x18c1,	// (0x0001f762) mup2_volume_cont_pane_g1

0x0df4,	// (0x0001ec95) aid_size_cell_touch_ParamLimits

0x0df4,	// (0x0001ec95) aid_size_cell_touch

0x107c,	// (0x0001ef1d) touch_pane_ParamLimits

0x107c,	// (0x0001ef1d) touch_pane

0x1072,	// (0x0001ef13) main_rss2_pane

0xc50e,	// (0x0002a3af) listscroll_rss2_pane

0xc517,	// (0x0002a3b8) rss2_navigation_pane

0xc51f,	// (0x0002a3c0) list_rss2_pane

0xad27,	// (0x00028bc8) scroll_pane_cp22

0xc527,	// (0x0002a3c8) rss2_navigation_pane_g1

0xc530,	// (0x0002a3d1) rss2_navigation_pane_g2

0xc538,	// (0x0002a3d9) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0002d540) rss2_navigation_pane_g

0xc540,	// (0x0002a3e1) rss2_navigation_pane_t1

0x59b5,	// (0x00023856) rss2_list_single_pane_ParamLimits

0x59b5,	// (0x00023856) rss2_list_single_pane

0xc54e,	// (0x0002a3ef) rss2_list_single_pane_t2

0xc55c,	// (0x0002a3fd) rss2_list_single_pane_t3_ParamLimits

0xc55c,	// (0x0002a3fd) rss2_list_single_pane_t3

0xc579,	// (0x0002a41a) rss2_list_single_pane_t4

0x4350,	// (0x000221f1) smil_status_pane_g1

0x14c8,	// (0x0001f369) main_image2_pane_ParamLimits

0x14c8,	// (0x0001f369) main_image2_pane

0x171f,	// (0x0001f5c0) main_camera2_pane_g9_ParamLimits

0x171f,	// (0x0001f5c0) main_camera2_pane_g9

0x1773,	// (0x0001f614) main_camera2_pane_t5_ParamLimits

0x1773,	// (0x0001f614) main_camera2_pane_t5

0x1785,	// (0x0001f626) main_camera2_pane_t6_ParamLimits

0x1785,	// (0x0001f626) main_camera2_pane_t6

0x59e9,	// (0x0002388a) main_image2_pane_g1_ParamLimits

0x59e9,	// (0x0002388a) main_image2_pane_g1

0x5077,	// (0x00022f18) smil2_video_pane_ParamLimits

0x5077,	// (0x00022f18) smil2_video_pane

0x0e28,	// (0x0001ecc9) aid_zoom_text_primary_cp

0x1019,	// (0x0001eeba) popup_preview_fixed_window

0xa5f9,	// (0x0002849a) im_reading_pane_g1

0x1669,	// (0x0001f50a) cams2_bc_adjust_pane_cp_ParamLimits

0x1669,	// (0x0001f50a) cams2_bc_adjust_pane_cp

0x17b5,	// (0x0001f656) cams2_bc_adjust_pane_ParamLimits

0x17b5,	// (0x0001f656) cams2_bc_adjust_pane

0xd830,	// (0x0002b6d1) cams2_bc_adjust_pane_g1

0x18fa,	// (0x0001f79b) cams2_slider_pane

0x1903,	// (0x0001f7a4) cams2_slider_pane_g1

0x190c,	// (0x0001f7ad) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0002d547) cams2_slider_pane_g

0x10ed,	// (0x0001ef8e) calc_display_pane_ParamLimits

0x110b,	// (0x0001efac) calc_paper_pane_ParamLimits

0x1127,	// (0x0001efc8) grid_calc_pane_ParamLimits

0x141c,	// (0x0001f2bd) popup_clock_digital_window_t1_ParamLimits

0xb1e2,	// (0x00029083) main_image_pane_t1

0x10d3,	// (0x0001ef74) aid_size_cell_calc_ParamLimits

0x10d3,	// (0x0001ef74) aid_size_cell_calc

0x14f9,	// (0x0001f39a) popup_blid_sat_info2_window_ParamLimits

0x14f9,	// (0x0001f39a) popup_blid_sat_info2_window

0xc58f,	// (0x0002a430) aid_size_cell_blid

0xc597,	// (0x0002a438) bg_popup_window_pane_cp07

0xc5ba,	// (0x0002a45b) grid_popup_blid_pane

0xc5c4,	// (0x0002a465) heading_pane_cp05_ParamLimits

0xc5c4,	// (0x0002a465) heading_pane_cp05

0xc68e,	// (0x0002a52f) cell_popup_blid_pane_ParamLimits

0xc68e,	// (0x0002a52f) cell_popup_blid_pane

0xc6b2,	// (0x0002a553) cell_popup_blid_pane_g1

0xc6ba,	// (0x0002a55b) cell_popup_blid_pane_t1

0x586d,	// (0x0002370e) mup2_indicator_pane_ParamLimits

0x586d,	// (0x0002370e) mup2_indicator_pane

0xa500,	// (0x000283a1) mup2_visualizer_osc_pane

0xc470,	// (0x0002a311) mup2_visualizer_spec_pane_ParamLimits

0xc470,	// (0x0002a311) mup2_visualizer_spec_pane

0x59f5,	// (0x00023896) mup2_spec_half_pane

0x59fe,	// (0x0002389f) mup2_spec_half_pane_cp

0x5a08,	// (0x000238a9) mup2_spec_bar_pane_ParamLimits

0x5a08,	// (0x000238a9) mup2_spec_bar_pane

0xc405,	// (0x0002a2a6) mup2_spec_bar_pane_g1

0xc40f,	// (0x0002a2b0) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0002d4ba) mup2_spec_bar_pane_g

0x5a27,	// (0x000238c8) mup2_osc_middle_pane

0xc421,	// (0x0002a2c2) mup2_visualizer_osc_pane_g1

0x9bee,	// (0x00027a8f) popup_number_entry_window_t1_ParamLimits

0x9c01,	// (0x00027aa2) popup_number_entry_window_t2_ParamLimits

0x9c13,	// (0x00027ab4) popup_number_entry_window_t3_ParamLimits

0x26df,	// (0x00020580) popup_number_entry_window_t5_ParamLimits

0x26df,	// (0x00020580) popup_number_entry_window_t5

0xf0ca,	// (0x0002cf6b) popup_number_entry_window_t_ParamLimits

0x9c25,	// (0x00027ac6) text_title_cp2_ParamLimits

0x145b,	// (0x0001f2fc) aid_hotspot_pointer_text2_pane

0x14a5,	// (0x0001f346) main_viewer_pane_g9_ParamLimits

0x14a5,	// (0x0001f346) main_viewer_pane_g9

0xa832,	// (0x000286d3) cale_month_pane_t1_ParamLimits

0xa86f,	// (0x00028710) bg_cale_pane_ParamLimits

0xa887,	// (0x00028728) list_cale_pane_ParamLimits

0xa898,	// (0x00028739) listscroll_cale_day_pane_t1

0xa8aa,	// (0x0002874b) scroll_pane_cp09_ParamLimits

0x4aa1,	// (0x00022942) main_mup_eq_pane_t1_ParamLimits

0x4aa1,	// (0x00022942) main_mup_eq_pane_t1

0x4abb,	// (0x0002295c) main_mup_eq_pane_t2_ParamLimits

0x4abb,	// (0x0002295c) main_mup_eq_pane_t2

0x4ad3,	// (0x00022974) main_mup_eq_pane_t3_ParamLimits

0x4ad3,	// (0x00022974) main_mup_eq_pane_t3

0x4aeb,	// (0x0002298c) main_mup_eq_pane_t4_ParamLimits

0x4aeb,	// (0x0002298c) main_mup_eq_pane_t4

0x4b03,	// (0x000229a4) main_mup_eq_pane_t5_ParamLimits

0x4b03,	// (0x000229a4) main_mup_eq_pane_t5

0x4b1b,	// (0x000229bc) main_mup_eq_pane_t6_ParamLimits

0x4b1b,	// (0x000229bc) main_mup_eq_pane_t6

0x4b2f,	// (0x000229d0) main_mup_eq_pane_t7_ParamLimits

0x4b2f,	// (0x000229d0) main_mup_eq_pane_t7

0x4b43,	// (0x000229e4) main_mup_eq_pane_t8_ParamLimits

0x4b43,	// (0x000229e4) main_mup_eq_pane_t8

0x4b59,	// (0x000229fa) main_mup_eq_pane_t9_ParamLimits

0x4b59,	// (0x000229fa) main_mup_eq_pane_t9

0x4b71,	// (0x00022a12) main_mup_eq_pane_t10_ParamLimits

0x4b71,	// (0x00022a12) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0002d2f6) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0002d2f6) main_mup_eq_pane_t

0x4c2e,	// (0x00022acf) mup_equalizer_pane_cp5_ParamLimits

0x4c44,	// (0x00022ae5) mup_equalizer_pane_cp6_ParamLimits

0x4c5c,	// (0x00022afd) mup_equalizer_pane_cp7_ParamLimits

0x1072,	// (0x0001ef13) main_gallery_pane

0xc42a,	// (0x0002a2cb) smil2_volume_pane

0xc432,	// (0x0002a2d3) smil_status_volume_pane_g1_ParamLimits

0xc445,	// (0x0002a2e6) smil_status_volume_pane_g2_ParamLimits

0x1639,	// (0x0001f4da) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0002d4bf) smil_status_volume_pane_g_ParamLimits

0xc597,	// (0x0002a438) bg_popup_window_pane_cp07_ParamLimits

0xc5a5,	// (0x0002a446) blid_firmament_pane

0x5a30,	// (0x000238d1) aid_size_cell_gallery_ParamLimits

0x5a30,	// (0x000238d1) aid_size_cell_gallery

0x5a3e,	// (0x000238df) grid_gallery_pane_ParamLimits

0x5a3e,	// (0x000238df) grid_gallery_pane

0x5a4e,	// (0x000238ef) cell_gallery_pane_ParamLimits

0x5a4e,	// (0x000238ef) cell_gallery_pane

0xc6c8,	// (0x0002a569) bg_cell_gallery_focus_pane_ParamLimits

0xc6c8,	// (0x0002a569) bg_cell_gallery_focus_pane

0xc6da,	// (0x0002a57b) cell_gallery_pane_g1_ParamLimits

0xc6da,	// (0x0002a57b) cell_gallery_pane_g1

0x5a9c,	// (0x0002393d) cell_gallery_pane_g2_ParamLimits

0x5a9c,	// (0x0002393d) cell_gallery_pane_g2

0x5aa9,	// (0x0002394a) cell_gallery_pane_g3_ParamLimits

0x5aa9,	// (0x0002394a) cell_gallery_pane_g3

0xc6e6,	// (0x0002a587) cell_gallery_pane_g4_ParamLimits

0xc6e6,	// (0x0002a587) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0002d56d) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0002d56d) cell_gallery_pane_g

0xc6f2,	// (0x0002a593) bg_cell_gallery_focus_pane_g1

0xc6fa,	// (0x0002a59b) bg_cell_gallery_focus_pane_g2

0xc702,	// (0x0002a5a3) bg_cell_gallery_focus_pane_g3

0xc70a,	// (0x0002a5ab) bg_cell_gallery_focus_pane_g4

0xc712,	// (0x0002a5b3) bg_cell_gallery_focus_pane_g5

0xc71a,	// (0x0002a5bb) bg_cell_gallery_focus_pane_g6

0xc722,	// (0x0002a5c3) bg_cell_gallery_focus_pane_g7

0xc72a,	// (0x0002a5cb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0002d576) bg_cell_gallery_focus_pane_g

0xc732,	// (0x0002a5d3) aid_firma_cardinal

0xc746,	// (0x0002a5e7) blid_firmament_pane_t1

0xc75d,	// (0x0002a5fe) blid_firmament_pane_t2

0xc774,	// (0x0002a615) blid_firmament_pane_t3

0xc78b,	// (0x0002a62c) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0002d587) blid_firmament_pane_t

0xc7a2,	// (0x0002a643) blid_sat_info_pane

0xc7b2,	// (0x0002a653) blid_sat_info_pane_g1

0xc7b2,	// (0x0002a653) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0002d590) blid_sat_info_pane_g

0xc7bc,	// (0x0002a65d) blid_sat_info_pane_t1

0xc7ca,	// (0x0002a66b) smil2_volume_content_pane

0xc7d3,	// (0x0002a674) smil2_volume_pane_g1

0xc7db,	// (0x0002a67c) smil2_volume_content_pane_g1

0xc7e4,	// (0x0002a685) smil2_volume_content_pane_g2

0xc7ed,	// (0x0002a68e) smil2_volume_content_pane_g3

0xc7f6,	// (0x0002a697) smil2_volume_content_pane_g4

0xc7ff,	// (0x0002a6a0) smil2_volume_content_pane_g5

0xc808,	// (0x0002a6a9) smil2_volume_content_pane_g6

0xc811,	// (0x0002a6b2) smil2_volume_content_pane_g7

0xc81a,	// (0x0002a6bb) smil2_volume_content_pane_g8

0xc823,	// (0x0002a6c4) smil2_volume_content_pane_g9

0xc82c,	// (0x0002a6cd) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0002d595) smil2_volume_content_pane_g

0x2d1a,	// (0x00020bbb) cale_week_day_heading_pane_t1_ParamLimits

0x2d35,	// (0x00020bd6) cale_week_day_heading_pane_t2_ParamLimits

0x2d50,	// (0x00020bf1) cale_week_day_heading_pane_t3_ParamLimits

0x2d6b,	// (0x00020c0c) cale_week_day_heading_pane_t4_ParamLimits

0x2d86,	// (0x00020c27) cale_week_day_heading_pane_t5_ParamLimits

0x2da1,	// (0x00020c42) cale_week_day_heading_pane_t6_ParamLimits

0x2dbc,	// (0x00020c5d) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0002d072) cale_week_day_heading_pane_t_ParamLimits

0xa4a5,	// (0x00028346) bg_cale_side_pane_ParamLimits

0x127e,	// (0x0001f11f) cale_week_time_pane_t1_ParamLimits

0x1298,	// (0x0001f139) cale_week_time_pane_t2_ParamLimits

0x12b2,	// (0x0001f153) cale_week_time_pane_t3_ParamLimits

0x12cc,	// (0x0001f16d) cale_week_time_pane_t4_ParamLimits

0x12e6,	// (0x0001f187) cale_week_time_pane_t5_ParamLimits

0x1300,	// (0x0001f1a1) cale_week_time_pane_t6_ParamLimits

0x1320,	// (0x0001f1c1) cale_week_time_pane_t7_ParamLimits

0x1342,	// (0x0001f1e3) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0002d081) cale_week_time_pane_t_ParamLimits

0x2dd7,	// (0x00020c78) cell_cale_week_pane_g2_ParamLimits

0xa4a5,	// (0x00028346) bg_cale_side_pane_cp01_ParamLimits

0x414d,	// (0x00021fee) cale_month_week_pane_t1_ParamLimits

0x4166,	// (0x00022007) cale_month_week_pane_t2_ParamLimits

0x417f,	// (0x00022020) cale_month_week_pane_t3_ParamLimits

0x4198,	// (0x00022039) cale_month_week_pane_t4_ParamLimits

0x41b3,	// (0x00022054) cale_month_week_pane_t5_ParamLimits

0x41d4,	// (0x00022075) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0002d156) cale_month_week_pane_t_ParamLimits

0x1370,	// (0x0001f211) cell_cale_month_pane_g1_ParamLimits

0x1072,	// (0x0001ef13) main_cale_event_viewer_pane

0x9bc4,	// (0x00027a65) listscroll_cale_event_viewer_pane

0xc835,	// (0x0002a6d6) list_cale_ev_pane

0xc83d,	// (0x0002a6de) scroll_pane_cp023

0xc849,	// (0x0002a6ea) field_cale_ev_pane_ParamLimits

0xc849,	// (0x0002a6ea) field_cale_ev_pane

0xc867,	// (0x0002a708) field_cale_ev_content_pane_ParamLimits

0xc867,	// (0x0002a708) field_cale_ev_content_pane

0xc873,	// (0x0002a714) field_cale_ev_pane_g1_ParamLimits

0xc873,	// (0x0002a714) field_cale_ev_pane_g1

0xc87f,	// (0x0002a720) field_cale_ev_pane_g2_ParamLimits

0xc87f,	// (0x0002a720) field_cale_ev_pane_g2

0xc897,	// (0x0002a738) field_cale_ev_pane_g3_ParamLimits

0xc897,	// (0x0002a738) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0002d5aa) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0002d5aa) field_cale_ev_pane_g

0xc8af,	// (0x0002a750) field_cale_ev_pane_t1_ParamLimits

0xc8af,	// (0x0002a750) field_cale_ev_pane_t1

0xaa48,	// (0x000288e9) field_cale_ev_content_pane_t1_ParamLimits

0xaa48,	// (0x000288e9) field_cale_ev_content_pane_t1

0xb0bc,	// (0x00028f5d) bg_button_pane_cp01

0x2aa5,	// (0x00020946) listscroll_cale_week_pane_ParamLimits

0xa450,	// (0x000282f1) popup_toolbar_window_cp01

0xa476,	// (0x00028317) listscroll_cale_week_pane_t1_ParamLimits

0x2aa5,	// (0x00020946) listscroll_cale_day_pane_ParamLimits

0xa450,	// (0x000282f1) popup_toolbar_window_cp02

0xa898,	// (0x00028739) listscroll_cale_day_pane_t1_ParamLimits

0x2aa5,	// (0x00020946) main_cale_month_pane_ParamLimits

0x15fc,	// (0x0001f49d) popup_toolbar_window_cp03_ParamLimits

0x15fc,	// (0x0001f49d) popup_toolbar_window_cp03

0x4f8d,	// (0x00022e2e) main_image_pane_g2_ParamLimits

0x4f8d,	// (0x00022e2e) main_image_pane_g2

0x4f99,	// (0x00022e3a) main_image_pane_g3_ParamLimits

0x4f99,	// (0x00022e3a) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0002d388) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0002d388) main_image_pane_g

0xb1e2,	// (0x00029083) main_image_pane_t1_ParamLimits

0x4fa5,	// (0x00022e46) main_image_pane_t2_ParamLimits

0x4fa5,	// (0x00022e46) main_image_pane_t2

0x4fb7,	// (0x00022e58) main_image_pane_t3_ParamLimits

0x4fb7,	// (0x00022e58) main_image_pane_t3

0x4fc9,	// (0x00022e6a) main_image_pane_t4_ParamLimits

0x4fc9,	// (0x00022e6a) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0002d38f) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0002d38f) main_image_pane_t

0x4fdb,	// (0x00022e7c) popup_image_details_window_cp01

0x4fe5,	// (0x00022e86) popup_toobar_trans_pane_cp01_ParamLimits

0x4fe5,	// (0x00022e86) popup_toobar_trans_pane_cp01

0x154c,	// (0x0001f3ed) popup_image_details_window_ParamLimits

0x154c,	// (0x0001f3ed) popup_image_details_window

0x155a,	// (0x0001f3fb) popup_image_focus_window

0x165b,	// (0x0001f4fc) camera2_autofocus_pane_ParamLimits

0x165b,	// (0x0001f4fc) camera2_autofocus_pane

0x9bc4,	// (0x00027a65) bg_popup_sub_pane_cp06

0xc8c6,	// (0x0002a767) popup_image_focus_window_g1

0xc8ce,	// (0x0002a76f) popup_image_focus_window_g2

0xc8d6,	// (0x0002a777) popup_image_focus_window_g3

0xc8de,	// (0x0002a77f) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0002d5b1) popup_image_focus_window_g

0xc8e6,	// (0x0002a787) popup_image_focus_window_t1

0xc8f4,	// (0x0002a795) popup_image_focus_window_t2

0xc904,	// (0x0002a7a5) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0002d5ba) popup_image_focus_window_t

0xc912,	// (0x0002a7b3) camera2_autofocus_pane_g1

0xa355,	// (0x000281f6) bg_tb_trans_pane_cp01

0xc920,	// (0x0002a7c1) popup_image_details_window_g1

0xc933,	// (0x0002a7d4) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0002d5cc) popup_image_details_window_g

0xc95c,	// (0x0002a7fd) popup_image_details_window_t1

0xc96e,	// (0x0002a80f) popup_image_details_window_t2

0xc987,	// (0x0002a828) popup_image_details_window_t3

0xc99b,	// (0x0002a83c) popup_image_details_window_t4

0xc9b6,	// (0x0002a857) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0002d5d3) popup_image_details_window_t

0xa2f9,	// (0x0002819a) bg_calc_paper_pane_ParamLimits

0x1072,	// (0x0001ef13) grid_highlight_pane_cp013

0x1153,	// (0x0001eff4) list_calc_pane_ParamLimits

0x1165,	// (0x0001f006) scroll_pane_cp024

0xa30d,	// (0x000281ae) bg_calc_display_pane_ParamLimits

0x116d,	// (0x0001f00e) calc_display_pane_t1_ParamLimits

0x1182,	// (0x0001f023) calc_display_pane_t2_ParamLimits

0x1197,	// (0x0001f038) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0002cff2) calc_display_pane_t_ParamLimits

0x1200,	// (0x0001f0a1) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0002d00f) cell_calc_pane_g

0x1209,	// (0x0001f0aa) cell_calc_pane_t1

0xa37a,	// (0x0002821b) grid_highlight_pane_cp02_ParamLimits

0xa390,	// (0x00028231) toolbar_button_pane_cp01_ParamLimits

0xa390,	// (0x00028231) toolbar_button_pane_cp01

0xb227,	// (0x000290c8) temp_image_control_pane_ParamLimits

0xb227,	// (0x000290c8) temp_image_control_pane

0x14c8,	// (0x0001f369) main_mp3_pane

0xc9d0,	// (0x0002a871) temp_image_control_pane_g1_ParamLimits

0xc9d0,	// (0x0002a871) temp_image_control_pane_g1

0xc9de,	// (0x0002a87f) temp_image_control_pane_g2_ParamLimits

0xc9de,	// (0x0002a87f) temp_image_control_pane_g2

0xc9f0,	// (0x0002a891) temp_image_control_pane_g3_ParamLimits

0xc9f0,	// (0x0002a891) temp_image_control_pane_g3

0x5ae6,	// (0x00023987) temp_image_control_pane_g4_ParamLimits

0x5ae6,	// (0x00023987) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0002d5de) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0002d5de) temp_image_control_pane_g

0xc9d0,	// (0x0002a871) main_mp3_pane_g1

0x5af7,	// (0x00023998) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0002d5e7) main_mp3_pane_g

0xca33,	// (0x0002a8d4) main_mp3_pane_t1

0xa508,	// (0x000283a9) main_camera_pane_g8_ParamLimits

0xa508,	// (0x000283a9) main_camera_pane_g8

0x3057,	// (0x00020ef8) main_video_pane_g7_ParamLimits

0x3057,	// (0x00020ef8) main_video_pane_g7

0x17a3,	// (0x0001f644) main_camera2_pane_t7_ParamLimits

0x17a3,	// (0x0001f644) main_camera2_pane_t7

0xa650,	// (0x000284f1) scroll_pane_cp025_ParamLimits

0xa650,	// (0x000284f1) scroll_pane_cp025

0xa664,	// (0x00028505) scroll_pane_cp026_ParamLimits

0xa664,	// (0x00028505) scroll_pane_cp026

0xa673,	// (0x00028514) wml_content_pane_ParamLimits

0x1072,	// (0x0001ef13) main_touch_calib_pane

0x5b9b,	// (0x00023a3c) main_touch_calib_pane_g1

0x5ba7,	// (0x00023a48) main_touch_calib_pane_g2

0x5bb3,	// (0x00023a54) main_touch_calib_pane_g3

0x5bbf,	// (0x00023a60) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0002d605) main_touch_calib_pane_g

0x5bcb,	// (0x00023a6c) main_touch_calib_pane_t1

0x5be4,	// (0x00023a85) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0002d60e) main_touch_calib_pane_t

0xadf6,	// (0x00028c97) mup_progress_pane_cp02

0xae2b,	// (0x00028ccc) navi_pane_g1

0xaee6,	// (0x00028d87) navi_pane_mp_t3

0x14c8,	// (0x0001f369) main_mp3_pane_ParamLimits

0x5518,	// (0x000233b9) navi_pane_ParamLimits

0xc9d0,	// (0x0002a871) main_mp3_pane_g1_ParamLimits

0x5af7,	// (0x00023998) main_mp3_pane_g2_ParamLimits

0x5b03,	// (0x000239a4) main_mp3_pane_g3_ParamLimits

0x5b03,	// (0x000239a4) main_mp3_pane_g3

0x5b0f,	// (0x000239b0) main_mp3_pane_g4_ParamLimits

0x5b0f,	// (0x000239b0) main_mp3_pane_g4

0xca00,	// (0x0002a8a1) main_mp3_pane_g5_ParamLimits

0xca00,	// (0x0002a8a1) main_mp3_pane_g5

0xca0e,	// (0x0002a8af) main_mp3_pane_g6_ParamLimits

0xca0e,	// (0x0002a8af) main_mp3_pane_g6

0xca1b,	// (0x0002a8bc) main_mp3_pane_g7_ParamLimits

0xca1b,	// (0x0002a8bc) main_mp3_pane_g7

0xca27,	// (0x0002a8c8) main_mp3_pane_g8_ParamLimits

0xca27,	// (0x0002a8c8) main_mp3_pane_g8

0xf746,	// (0x0002d5e7) main_mp3_pane_g_ParamLimits

0x5b1b,	// (0x000239bc) main_mp3_pane_t2

0x5b2b,	// (0x000239cc) main_mp3_pane_t3

0xca41,	// (0x0002a8e2) main_mp3_pane_t4

0xca4f,	// (0x0002a8f0) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0002d5f8) main_mp3_pane_t

0xca5d,	// (0x0002a8fe) mup_progress_pane_cp01

0x0e28,	// (0x0001ecc9) aid_zoom_text_secondary2

0xc835,	// (0x0002a6d6) list_cale_ev2_pane

0xc83d,	// (0x0002a6de) scroll_pane_cp023_ParamLimits

0x5c3f,	// (0x00023ae0) field_cale_ev2_pane_ParamLimits

0x5c3f,	// (0x00023ae0) field_cale_ev2_pane

0xca65,	// (0x0002a906) field_cale_ev2_pane_g1_ParamLimits

0xca65,	// (0x0002a906) field_cale_ev2_pane_g1

0xca71,	// (0x0002a912) field_cale_ev2_pane_g2_ParamLimits

0xca71,	// (0x0002a912) field_cale_ev2_pane_g2

0xca89,	// (0x0002a92a) field_cale_ev2_pane_g3_ParamLimits

0xca89,	// (0x0002a92a) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0002d619) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0002d619) field_cale_ev2_pane_g

0xcaad,	// (0x0002a94e) field_cale_ev2_pane_t1_ParamLimits

0xcaad,	// (0x0002a94e) field_cale_ev2_pane_t1

0xcac4,	// (0x0002a965) field_cale_ev2_pane_t2_ParamLimits

0xcac4,	// (0x0002a965) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0002d622) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0002d622) field_cale_ev2_pane_t

0x4e6e,	// (0x00022d0f) main_postcard_pane_g5_ParamLimits

0x4e6e,	// (0x00022d0f) main_postcard_pane_g5

0x4e7c,	// (0x00022d1d) main_postcard_pane_g6_ParamLimits

0x4e7c,	// (0x00022d1d) main_postcard_pane_g6

0x2ea1,	// (0x00020d42) camera2_autofocus_pane_cp_ParamLimits

0x2ea1,	// (0x00020d42) camera2_autofocus_pane_cp

0x14c8,	// (0x0001f369) main_mup3_pane

0x5c89,	// (0x00023b2a) main_mup3_pane_g1_ParamLimits

0x5c89,	// (0x00023b2a) main_mup3_pane_g1

0x5caa,	// (0x00023b4b) main_mup3_pane_g2_ParamLimits

0x5caa,	// (0x00023b4b) main_mup3_pane_g2

0x5d24,	// (0x00023bc5) main_mup3_pane_g3_ParamLimits

0x5d24,	// (0x00023bc5) main_mup3_pane_g3

0x5d67,	// (0x00023c08) main_mup3_pane_g4_ParamLimits

0x5d67,	// (0x00023c08) main_mup3_pane_g4

0x5daa,	// (0x00023c4b) main_mup3_pane_g5_ParamLimits

0x5daa,	// (0x00023c4b) main_mup3_pane_g5

0x5ded,	// (0x00023c8e) main_mup3_pane_g6_ParamLimits

0x5ded,	// (0x00023c8e) main_mup3_pane_g6

0xcad9,	// (0x0002a97a) main_mup3_pane_g7_ParamLimits

0xcad9,	// (0x0002a97a) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0002d632) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0002d632) main_mup3_pane_g

0x5e63,	// (0x00023d04) main_mup3_pane_t1_ParamLimits

0x5e63,	// (0x00023d04) main_mup3_pane_t1

0x5ed2,	// (0x00023d73) main_mup3_pane_t2_ParamLimits

0x5ed2,	// (0x00023d73) main_mup3_pane_t2

0x5f9b,	// (0x00023e3c) main_mup3_pane_t4_ParamLimits

0x5f9b,	// (0x00023e3c) main_mup3_pane_t4

0x5fe9,	// (0x00023e8a) main_mup3_pane_t5_ParamLimits

0x5fe9,	// (0x00023e8a) main_mup3_pane_t5

0x6099,	// (0x00023f3a) main_mup3_pane_t6_ParamLimits

0x6099,	// (0x00023f3a) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0002d643) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0002d643) main_mup3_pane_t

0x6145,	// (0x00023fe6) mup3_progress_pane_ParamLimits

0x6145,	// (0x00023fe6) mup3_progress_pane

0x61b9,	// (0x0002405a) popup_mup3_control_window_ParamLimits

0x61b9,	// (0x0002405a) popup_mup3_control_window

0xcae7,	// (0x0002a988) popup_mup3_text_window

0x61d2,	// (0x00024073) mup3_progress_pane_t1

0x61f1,	// (0x00024092) mup3_progress_pane_t2

0xcaef,	// (0x0002a990) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0002d650) mup3_progress_pane_t

0xcb0c,	// (0x0002a9ad) mup_progress_pane_cp03

0x9bc4,	// (0x00027a65) bg_tb_trans_pane_cp04

0x6210,	// (0x000240b1) mup3_volume_pane

0x6218,	// (0x000240b9) popup_mup3_control_window_g1

0x6221,	// (0x000240c2) mup3_volume_pane_g1

0x622a,	// (0x000240cb) mup3_volume_pane_g2

0x6233,	// (0x000240d4) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0002d657) mup3_volume_pane_g

0x9bc4,	// (0x00027a65) bg_tb_trans_pane_cp03

0xcb1c,	// (0x0002a9bd) popup_mup3_text_window_g1

0xcb24,	// (0x0002a9c5) popup_mup3_text_window_t1

0xa363,	// (0x00028204) list_calc_item_pane_g1_ParamLimits

0xc505,	// (0x0002a3a6) mup_volume_pane_cp_g1

0x5bfd,	// (0x00023a9e) main_touch_calib_pane_t3

0x5c13,	// (0x00023ab4) main_touch_calib_pane_t4

0x5c29,	// (0x00023aca) main_touch_calib_pane_t5

0x0de0,	// (0x0001ec81) aid_cell_size_toolbar2

0x0de8,	// (0x0001ec89) aid_popup3_width_pane

0x0e28,	// (0x0001ecc9) aid_zoom_text_msg_primary

0x2e80,	// (0x00020d21) vorec_t7

0xa319,	// (0x000281ba) bg_calc_paper_pane_g1_ParamLimits

0xa325,	// (0x000281c6) bg_calc_paper_pane_g2_ParamLimits

0xa331,	// (0x000281d2) bg_calc_paper_pane_g3_ParamLimits

0xa33d,	// (0x000281de) bg_calc_paper_pane_g4_ParamLimits

0xa349,	// (0x000281ea) bg_calc_paper_pane_g5_ParamLimits

0x2966,	// (0x00020807) bg_calc_paper_pane_g6_ParamLimits

0x2977,	// (0x00020818) bg_calc_paper_pane_g7_ParamLimits

0x2988,	// (0x00020829) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0002cff9) bg_calc_paper_pane_g_ParamLimits

0x2999,	// (0x0002083a) calc_bg_paper_pane_g9_ParamLimits

0x2f88,	// (0x00020e29) image_qvga_pane_ParamLimits

0x2f88,	// (0x00020e29) image_qvga_pane

0xa23c,	// (0x000280dd) bg_popup_sub_pane_cp04_ParamLimits

0xb15e,	// (0x00028fff) popup_mup_playback_window_g1_ParamLimits

0xb16a,	// (0x0002900b) popup_mup_playback_window_t1_ParamLimits

0xb17f,	// (0x00029020) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0002d383) popup_mup_playback_window_t_ParamLimits

0x576d,	// (0x0002360e) main_mup2_pane_g3_ParamLimits

0x576d,	// (0x0002360e) main_mup2_pane_g3

0x3355,	// (0x000211f6) popup_toolbar_window_cp04

0xb574,	// (0x00029415) popup_call2_audio_second_window_g3_ParamLimits

0xb574,	// (0x00029415) popup_call2_audio_second_window_g3

0xb97e,	// (0x0002981f) popup_call2_audio_first_window_g4_ParamLimits

0xb97e,	// (0x0002981f) popup_call2_audio_first_window_g4

0xbffd,	// (0x00029e9e) popup_call2_audio_in_window_g4_ParamLimits

0xbffd,	// (0x00029e9e) popup_call2_audio_in_window_g4

0x4f80,	// (0x00022e21) aid_area_sk_bg_cut_ParamLimits

0x4f80,	// (0x00022e21) aid_area_sk_bg_cut

0xb194,	// (0x00029035) aid_area_sk_bg_cut_2_ParamLimits

0xb194,	// (0x00029035) aid_area_sk_bg_cut_2

0x5a8c,	// (0x0002392d) aid_placing_details_win

0x5a94,	// (0x00023935) aid_placing_details_win_2

0xc912,	// (0x0002a7b3) camera2_autofocus_pane_g1_ParamLimits

0x100a,	// (0x0001eeab) popup_fixed_preview_cale_window_ParamLimits

0x100a,	// (0x0001eeab) popup_fixed_preview_cale_window

0xaf64,	// (0x00028e05) navi_slider_pane_g3

0xaf6d,	// (0x00028e0e) navi_slider_pane_g4

0xaf76,	// (0x00028e17) navi_slider_pane_g5

0xaf64,	// (0x00028e05) navi_slider_pane_g6

0x1442,	// (0x0001f2e3) navi_slider_pane_g7

0xb089,	// (0x00028f2a) mup_scale_pane_g3

0xb092,	// (0x00028f33) mup_scale_pane_g4

0xb09b,	// (0x00028f3c) mup_scale_pane_g5

0x4c74,	// (0x00022b15) mup_scale_pane_g6

0x4c7d,	// (0x00022b1e) mup_scale_pane_g7

0xaf64,	// (0x00028e05) cams2_slider_pane_g3

0xc587,	// (0x0002a428) cams2_slider_pane_g4

0x1915,	// (0x0001f7b6) cams2_slider_pane_g5

0xaf64,	// (0x00028e05) cams2_slider_pane_g6

0x191d,	// (0x0001f7be) cams2_slider_pane_g7

0xc7b2,	// (0x0002a653) camera2_autofocus_pane_cp_g1

0xc39e,	// (0x0002a23f) bg_popup_preview_window_pane_cp02_ParamLimits

0xc39e,	// (0x0002a23f) bg_popup_preview_window_pane_cp02

0xcb32,	// (0x0002a9d3) list_fp_cale_pane_ParamLimits

0xcb32,	// (0x0002a9d3) list_fp_cale_pane

0xcb3e,	// (0x0002a9df) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb3e,	// (0x0002a9df) popup_fixed_preview_cale_window_t1

0x623c,	// (0x000240dd) popup_fixed_preview_cale_window_t2_ParamLimits

0x623c,	// (0x000240dd) popup_fixed_preview_cale_window_t2

0x6251,	// (0x000240f2) popup_fixed_preview_cale_window_t3_ParamLimits

0x6251,	// (0x000240f2) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0002d65e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0002d65e) popup_fixed_preview_cale_window_t

0x6266,	// (0x00024107) list_single_fp_cale_pane_ParamLimits

0x6266,	// (0x00024107) list_single_fp_cale_pane

0xcb5c,	// (0x0002a9fd) list_single_fp_cale_pane_g1_ParamLimits

0xcb5c,	// (0x0002a9fd) list_single_fp_cale_pane_g1

0xcb68,	// (0x0002aa09) list_single_fp_cale_pane_g2_ParamLimits

0xcb68,	// (0x0002aa09) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0002d665) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0002d665) list_single_fp_cale_pane_g

0xcb81,	// (0x0002aa22) list_single_fp_cale_pane_t1_ParamLimits

0xcb81,	// (0x0002aa22) list_single_fp_cale_pane_t1

0xcb93,	// (0x0002aa34) list_single_fp_cale_pane_t2_ParamLimits

0xcb93,	// (0x0002aa34) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0002d66c) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0002d66c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1072,	// (0x0001ef13) main_dialer_pane

0x6279,	// (0x0002411a) aid_cell_size_keypad

0x6283,	// (0x00024124) dialer_ne_pane

0x628d,	// (0x0002412e) grid_dialer_command_1_pane

0x6295,	// (0x00024136) grid_dialer_command_2_pane

0x629d,	// (0x0002413e) grid_dialer_keypad_pane

0x62b1,	// (0x00024152) bg_popup_call_pane_cp06_ParamLimits

0x62b1,	// (0x00024152) bg_popup_call_pane_cp06

0x62bd,	// (0x0002415e) dialer_ne_clear_pane_ParamLimits

0x62bd,	// (0x0002415e) dialer_ne_clear_pane

0xcbc6,	// (0x0002aa67) dialer_ne_pane_g1

0xcbce,	// (0x0002aa6f) dialer_ne_pane_t1_ParamLimits

0xcbce,	// (0x0002aa6f) dialer_ne_pane_t1

0x62c9,	// (0x0002416a) dialer_ne_pane_t2_ParamLimits

0x62c9,	// (0x0002416a) dialer_ne_pane_t2

0x62e6,	// (0x00024187) dialer_ne_pane_t3_ParamLimits

0x62e6,	// (0x00024187) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0002d671) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0002d671) dialer_ne_pane_t

0x630a,	// (0x000241ab) dialer_ne_pane_t3_copy1_ParamLimits

0x630a,	// (0x000241ab) dialer_ne_pane_t3_copy1

0x632e,	// (0x000241cf) cell_dialer_keypad_pane_ParamLimits

0x632e,	// (0x000241cf) cell_dialer_keypad_pane

0x6345,	// (0x000241e6) cell_dialer_command_1_pane_ParamLimits

0x6345,	// (0x000241e6) cell_dialer_command_1_pane

0x635b,	// (0x000241fc) cell_dialer_command_2_pane_ParamLimits

0x635b,	// (0x000241fc) cell_dialer_command_2_pane

0xcbe0,	// (0x0002aa81) bg_button_pane_cp02_ParamLimits

0xcbe0,	// (0x0002aa81) bg_button_pane_cp02

0x636a,	// (0x0002420b) cell_dialer_keypad_pane_g1_ParamLimits

0x636a,	// (0x0002420b) cell_dialer_keypad_pane_g1

0xcbe0,	// (0x0002aa81) bg_button_pane_cp03_ParamLimits

0xcbe0,	// (0x0002aa81) bg_button_pane_cp03

0x637f,	// (0x00024220) cell_dialer_command_1_pane_g1_ParamLimits

0x637f,	// (0x00024220) cell_dialer_command_1_pane_g1

0xcbec,	// (0x0002aa8d) bg_button_pane_cp04

0x6393,	// (0x00024234) cell_dialer_command_2_pane_g1

0xa500,	// (0x000283a1) bg_button_pane_cp06

0xcbf4,	// (0x0002aa95) dialer_ne_clear_pane_g1

0xae37,	// (0x00028cd8) navi_pane_g2

0xae65,	// (0x00028d06) navi_pane_g3

0x0002,

0xf3e5,	// (0x0002d286) navi_pane_g

0xaef4,	// (0x00028d95) navi_pane_mv_g2

0xaf1b,	// (0x00028dbc) navi_pane_mv_g5

0x4822,	// (0x000226c3) navi_pane_mv_t1

0xa30d,	// (0x000281ae) main_clock2_pane

0x63d3,	// (0x00024274) main_clock2_list_pane_ParamLimits

0x63d3,	// (0x00024274) main_clock2_list_pane

0x63fd,	// (0x0002429e) main_clock2_pane_t1_ParamLimits

0x63fd,	// (0x0002429e) main_clock2_pane_t1

0x6421,	// (0x000242c2) main_clock2_pane_t2_ParamLimits

0x6421,	// (0x000242c2) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0002d67d) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0002d67d) main_clock2_pane_t

0x647c,	// (0x0002431d) popup_clock_analogue_window_cp03_ParamLimits

0x647c,	// (0x0002431d) popup_clock_analogue_window_cp03

0x649a,	// (0x0002433b) popup_clock_digital_window_cp02_ParamLimits

0x649a,	// (0x0002433b) popup_clock_digital_window_cp02

0x6507,	// (0x000243a8) main_clock2_list_single_pane_ParamLimits

0x6507,	// (0x000243a8) main_clock2_list_single_pane

0xa500,	// (0x000283a1) list_highlight_pane_cp05

0xcc2e,	// (0x0002aacf) main_clock2_list_single_pane_t1

0x3355,	// (0x000211f6) popup_toolbar_window_cp04_ParamLimits

0x5ab6,	// (0x00023957) camera2_autofocus_pane_g2_ParamLimits

0x5ab6,	// (0x00023957) camera2_autofocus_pane_g2

0x5ac2,	// (0x00023963) camera2_autofocus_pane_g3_ParamLimits

0x5ac2,	// (0x00023963) camera2_autofocus_pane_g3

0x5ace,	// (0x0002396f) camera2_autofocus_pane_g4_ParamLimits

0x5ace,	// (0x0002396f) camera2_autofocus_pane_g4

0x5ada,	// (0x0002397b) camera2_autofocus_pane_g5_ParamLimits

0x5ada,	// (0x0002397b) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0002d5c1) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0002d5c1) camera2_autofocus_pane_g

0x5c69,	// (0x00023b0a) camera2_autofocus_pane_cp_g2

0x5c71,	// (0x00023b12) camera2_autofocus_pane_cp_g3

0x5c79,	// (0x00023b1a) camera2_autofocus_pane_cp_g4

0x5c81,	// (0x00023b22) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0002d627) camera2_autofocus_pane_cp_g

0x62a9,	// (0x0002414a) popup_dialer_spcha_window

0x9bc4,	// (0x00027a65) bg_popup_sub_pane_cp07

0xcc3c,	// (0x0002aadd) list_spcha_pane

0xcc44,	// (0x0002aae5) list_single_spcha_pane_ParamLimits

0xcc44,	// (0x0002aae5) list_single_spcha_pane

0x9bc4,	// (0x00027a65) list_highlight_pane_cp06

0xcc55,	// (0x0002aaf6) list_single_spcha_pane_t1

0xbda7,	// (0x00029c48) popup_call2_audio_out_window_g4_ParamLimits

0xbda7,	// (0x00029c48) popup_call2_audio_out_window_g4

0x1072,	// (0x0001ef13) main_imed2_pane

0x1562,	// (0x0001f403) popup_imed_adjust2_window

0x1575,	// (0x0001f416) popup_imed_trans_window_ParamLimits

0x1575,	// (0x0001f416) popup_imed_trans_window

0xc5f0,	// (0x0002a491) popup_blid_sat_info2_window_t1

0xc5fe,	// (0x0002a49f) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0002d556) popup_blid_sat_info2_window_t

0x6519,	// (0x000243ba) aid_size_cell_colour_35

0x6533,	// (0x000243d4) aid_size_cell_colour_112

0x654a,	// (0x000243eb) aid_size_cell_effect

0xa355,	// (0x000281f6) bg_tb_trans_pane_cp02

0xb0da,	// (0x00028f7b) heading_imed_pane

0x6564,	// (0x00024405) listscroll_imed_pane

0xcc63,	// (0x0002ab04) heading_imed_pane_g1

0xcc6b,	// (0x0002ab0c) heading_imed_pane_t1

0xcc79,	// (0x0002ab1a) grid_imed_colour_35_pane_ParamLimits

0xcc79,	// (0x0002ab1a) grid_imed_colour_35_pane

0x6570,	// (0x00024411) grid_imed_effect_pane

0xcc91,	// (0x0002ab32) list_imed_aspect_pane

0x6580,	// (0x00024421) scroll_pane_cp027_ParamLimits

0x6580,	// (0x00024421) scroll_pane_cp027

0x658c,	// (0x0002442d) cell_imed_effect_pane_ParamLimits

0x658c,	// (0x0002442d) cell_imed_effect_pane

0xcc99,	// (0x0002ab3a) cell_imed_colour_pane_ParamLimits

0xcc99,	// (0x0002ab3a) cell_imed_colour_pane

0xccdb,	// (0x0002ab7c) cell_imed_colour_pane_g1_ParamLimits

0xccdb,	// (0x0002ab7c) cell_imed_colour_pane_g1

0xccec,	// (0x0002ab8d) hgihlgiht_grid_pane_cp016_ParamLimits

0xccec,	// (0x0002ab8d) hgihlgiht_grid_pane_cp016

0x65a4,	// (0x00024445) cell_imed_effect_pane_g1

0x65ac,	// (0x0002444d) grid_highlight_pane_cp017

0xccfd,	// (0x0002ab9e) list_imed_single_pane_ParamLimits

0xccfd,	// (0x0002ab9e) list_imed_single_pane

0x9bc4,	// (0x00027a65) list_highlight_pane_cp07

0xcd12,	// (0x0002abb3) list_imed_aspect_pane_comp1_t1

0xc3aa,	// (0x0002a24b) bg_tb_trans_pane_cp05

0xcd34,	// (0x0002abd5) popup_imed_adjust2_window_g1

0xcd5b,	// (0x0002abfc) popup_imed_adjust2_window_t1

0xcd73,	// (0x0002ac14) slider_imed_adjust_pane

0xcd87,	// (0x0002ac28) slider_imed_adjust_pane_g1

0xcd97,	// (0x0002ac38) slider_imed_adjust_pane_g2

0xcda7,	// (0x0002ac48) slider_imed_adjust_pane_g3

0xcdb8,	// (0x0002ac59) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0002d69a) slider_imed_adjust_pane_g

0x65b5,	// (0x00024456) aid_size_cell_clipart2

0x65c1,	// (0x00024462) grid_imed_clipart_pane

0xcdc9,	// (0x0002ac6a) scroll_pane_cp031

0x65cb,	// (0x0002446c) cell_imed_clipart_pane_ParamLimits

0x65cb,	// (0x0002446c) cell_imed_clipart_pane

0x65ee,	// (0x0002448f) cell_imed_clipart_pane_g1

0x9bc4,	// (0x00027a65) grid_highlight_pane_cp014

0x63df,	// (0x00024280) main_clock2_pane_g1_ParamLimits

0x63df,	// (0x00024280) main_clock2_pane_g1

0x64b2,	// (0x00024353) aid_call2_pane_cp10

0x64c4,	// (0x00024365) aid_call_pane_cp10

0xad96,	// (0x00028c37) popup_clock_analogue_window_cp10_g1

0xad96,	// (0x00028c37) popup_clock_analogue_window_cp10_g2

0x64d6,	// (0x00024377) popup_clock_analogue_window_cp10_g3

0x64d6,	// (0x00024377) popup_clock_analogue_window_cp10_g4

0xad96,	// (0x00028c37) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0002d688) popup_clock_analogue_window_cp10_g

0x64e8,	// (0x00024389) popup_clock_analogue_window_cp10_t1

0x1926,	// (0x0001f7c7) clock_digital_number_pane_cp10_ParamLimits

0x1926,	// (0x0001f7c7) clock_digital_number_pane_cp10

0x193e,	// (0x0001f7df) clock_digital_number_pane_cp11_ParamLimits

0x193e,	// (0x0001f7df) clock_digital_number_pane_cp11

0x1956,	// (0x0001f7f7) clock_digital_number_pane_cp12_ParamLimits

0x1956,	// (0x0001f7f7) clock_digital_number_pane_cp12

0x196e,	// (0x0001f80f) clock_digital_number_pane_cp13_ParamLimits

0x196e,	// (0x0001f80f) clock_digital_number_pane_cp13

0x1986,	// (0x0001f827) clock_digital_separator_pane_cp10_ParamLimits

0x1986,	// (0x0001f827) clock_digital_separator_pane_cp10

0x199e,	// (0x0001f83f) popup_clock_digital_window_cp02_t1_ParamLimits

0x199e,	// (0x0001f83f) popup_clock_digital_window_cp02_t1

0xa234,	// (0x000280d5) clock_digital_number_pane_cp10_g1

0xa234,	// (0x000280d5) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0002d6a3) clock_digital_number_pane_cp10_g

0xa234,	// (0x000280d5) clock_digital_separator_pane_cp10_g1

0xa234,	// (0x000280d5) clock_digital_separator_pane_g2_cp10

0xaf23,	// (0x00028dc4) navi_pane_vded_g4

0xaf2c,	// (0x00028dcd) navi_pane_vded_g5

0xaf35,	// (0x00028dd6) navi_pane_vded_t1

0x1072,	// (0x0001ef13) main_vded_pane

0x65f7,	// (0x00024498) main_vded_pane_g1

0x6603,	// (0x000244a4) main_vded_pane_g2

0x660d,	// (0x000244ae) main_vded_pane_g3

0x0002,

0xf807,	// (0x0002d6a8) main_vded_pane_g

0x6617,	// (0x000244b8) main_vded_pane_t1

0x6625,	// (0x000244c6) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0002d6af) main_vded_pane_t

0x6633,	// (0x000244d4) vded_slider_pane

0x663d,	// (0x000244de) vded_video_pane

0xcdd1,	// (0x0002ac72) vded_video_pane_g1

0x6647,	// (0x000244e8) vded_video_pane_g2

0xc7b2,	// (0x0002a653) vded_video_pane_g3

0x0002,

0xf813,	// (0x0002d6b4) vded_video_pane_g

0xcddb,	// (0x0002ac7c) vded_slider_pane_g1

0xc505,	// (0x0002a3a6) vded_slider_pane_g2

0xcde4,	// (0x0002ac85) vded_slider_pane_g3

0xcded,	// (0x0002ac8e) vded_slider_pane_g4

0xcdf6,	// (0x0002ac97) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0002d6bb) vded_slider_pane_g

0x61ab,	// (0x0002404c) mup3_rocker_pane_ParamLimits

0x61ab,	// (0x0002404c) mup3_rocker_pane

0x6650,	// (0x000244f1) mup3_control_keys_pane_g1

0x6658,	// (0x000244f9) mup3_control_keys_pane_g2

0x6660,	// (0x00024501) mup3_control_keys_pane_g3

0x6668,	// (0x00024509) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0002d6c6) mup3_control_keys_pane_g

0x1032,	// (0x0001eed3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1032,	// (0x0001eed3) popup_toolbar2_fixed_window_cp01

0x61c5,	// (0x00024066) popup_toolbar2_fixed_window_cp02_ParamLimits

0x61c5,	// (0x00024066) popup_toolbar2_fixed_window_cp02

0xb6e6,	// (0x00029587) popup_call2_audio_second_window_t4_ParamLimits

0xb6e6,	// (0x00029587) popup_call2_audio_second_window_t4

0xbc14,	// (0x00029ab5) popup_call2_audio_first_window_t6_ParamLimits

0xbc14,	// (0x00029ab5) popup_call2_audio_first_window_t6

0xbeaa,	// (0x00029d4b) popup_call2_audio_out_window_t6_ParamLimits

0xbeaa,	// (0x00029d4b) popup_call2_audio_out_window_t6

0x1072,	// (0x0001ef13) main_vitu_pane

0x6678,	// (0x00024519) aid_size_cell_itu_ParamLimits

0x6678,	// (0x00024519) aid_size_cell_itu

0xd13d,	// (0x0002afde) bg_popup_window_pane_cp08_ParamLimits

0xd13d,	// (0x0002afde) bg_popup_window_pane_cp08

0x6686,	// (0x00024527) field_vitu_entry_pane_ParamLimits

0x6686,	// (0x00024527) field_vitu_entry_pane

0x6695,	// (0x00024536) grid_vitu_function_pane_ParamLimits

0x6695,	// (0x00024536) grid_vitu_function_pane

0x66a5,	// (0x00024546) grid_vitu_itu_pane_ParamLimits

0x66a5,	// (0x00024546) grid_vitu_itu_pane

0x66b5,	// (0x00024556) cell_vitu_itu_pane_ParamLimits

0x66b5,	// (0x00024556) cell_vitu_itu_pane

0x66ca,	// (0x0002456b) cell_vitu_function_pane_ParamLimits

0x66ca,	// (0x0002456b) cell_vitu_function_pane

0xa355,	// (0x000281f6) bg_popup_sub_pane_cp08_ParamLimits

0xa355,	// (0x000281f6) bg_popup_sub_pane_cp08

0x66dc,	// (0x0002457d) field_vitu_entry_pane_t1_ParamLimits

0x66dc,	// (0x0002457d) field_vitu_entry_pane_t1

0xce17,	// (0x0002acb8) field_vitu_entry_pane_t2_ParamLimits

0xce17,	// (0x0002acb8) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0002d6d4) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0002d6d4) field_vitu_entry_pane_t

0xce34,	// (0x0002acd5) bg_button_pane_cp05_ParamLimits

0xce34,	// (0x0002acd5) bg_button_pane_cp05

0x66f9,	// (0x0002459a) cell_vitu_itu_pane_g1

0x6711,	// (0x000245b2) cell_vitu_itu_pane_t1_ParamLimits

0x6711,	// (0x000245b2) cell_vitu_itu_pane_t1

0x6723,	// (0x000245c4) cell_vitu_itu_pane_t2_ParamLimits

0x6723,	// (0x000245c4) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0002d6d9) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0002d6d9) cell_vitu_itu_pane_t

0xce42,	// (0x0002ace3) bg_button_pane_cp07

0x6758,	// (0x000245f9) cell_vitu_function_pane_g1

0x114b,	// (0x0001efec) main_calc_pane_g1

0x0e1c,	// (0x0001ecbd) aid_visual_content_pane

0x1072,	// (0x0001ef13) main_vradio_pane

0x6761,	// (0x00024602) main_vradio_pane_g1_ParamLimits

0x6761,	// (0x00024602) main_vradio_pane_g1

0xce4c,	// (0x0002aced) main_vradio_pane_g2_ParamLimits

0xce4c,	// (0x0002aced) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0002d6e0) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0002d6e0) main_vradio_pane_g

0x6771,	// (0x00024612) main_vradio_pane_t1_ParamLimits

0x6771,	// (0x00024612) main_vradio_pane_t1

0x6783,	// (0x00024624) main_vradio_pane_t2_ParamLimits

0x6783,	// (0x00024624) main_vradio_pane_t2

0xce59,	// (0x0002acfa) main_vradio_pane_t3_ParamLimits

0xce59,	// (0x0002acfa) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0002d6e5) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0002d6e5) main_vradio_pane_t

0x6795,	// (0x00024636) vradio_rocker_control_pane_ParamLimits

0x6795,	// (0x00024636) vradio_rocker_control_pane

0x67a1,	// (0x00024642) vradio_station_info_pane_ParamLimits

0x67a1,	// (0x00024642) vradio_station_info_pane

0xce6d,	// (0x0002ad0e) vradio_frequency_info_pane_ParamLimits

0xce6d,	// (0x0002ad0e) vradio_frequency_info_pane

0xc7b2,	// (0x0002a653) vradio_station_info_pane_g1

0xce7c,	// (0x0002ad1d) vradio_station_info_pane_t1_ParamLimits

0xce7c,	// (0x0002ad1d) vradio_station_info_pane_t1

0xce9e,	// (0x0002ad3f) vradio_station_info_pane_t2_ParamLimits

0xce9e,	// (0x0002ad3f) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0002d6ec) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0002d6ec) vradio_station_info_pane_t

0xceb0,	// (0x0002ad51) vradio_tuning_pane

0xceb8,	// (0x0002ad59) vradio_rocker_control_pane_g1

0xcec0,	// (0x0002ad61) vradio_rocker_control_pane_g2

0xcec8,	// (0x0002ad69) vradio_rocker_control_pane_g3

0xced0,	// (0x0002ad71) vradio_rocker_control_pane_g4

0xced8,	// (0x0002ad79) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0002d6f1) vradio_rocker_control_pane_g

0x67b0,	// (0x00024651) vradio_frequency_info_pane_g1

0xcee0,	// (0x0002ad81) vradio_frequency_info_pane_t1_ParamLimits

0xcee0,	// (0x0002ad81) vradio_frequency_info_pane_t1

0x67ba,	// (0x0002465b) vradio_tuning_pane_g1

0x67c3,	// (0x00024664) vradio_tuning_pane_t1

0x0e38,	// (0x0001ecd9) area_side_right_pane_ParamLimits

0x0e38,	// (0x0001ecd9) area_side_right_pane

0xc365,	// (0x0002a206) status_small_pane_g1

0xc36d,	// (0x0002a20e) status_small_pane_g2

0xc376,	// (0x0002a217) status_small_pane_g3

0xc37f,	// (0x0002a220) status_small_pane_g4

0x0003,

0xf60b,	// (0x0002d4ac) status_small_pane_g

0xc388,	// (0x0002a229) status_small_pane_t1

0x1072,	// (0x0001ef13) main_video3_pane

0xcef4,	// (0x0002ad95) cams_zoom_vslider_pane

0xcefc,	// (0x0002ad9d) image3_wide_pane_ParamLimits

0xcefc,	// (0x0002ad9d) image3_wide_pane

0xcf16,	// (0x0002adb7) image3_wide_small_pane

0xcf22,	// (0x0002adc3) main_video3_pane_g1_ParamLimits

0xcf22,	// (0x0002adc3) main_video3_pane_g1

0xcf3e,	// (0x0002addf) main_video3_pane_g2_ParamLimits

0xcf3e,	// (0x0002addf) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0002d6fc) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0002d6fc) main_video3_pane_g

0xcf5a,	// (0x0002adfb) main_video3_pane_t1_ParamLimits

0xcf5a,	// (0x0002adfb) main_video3_pane_t1

0xcf85,	// (0x0002ae26) main_video3_pane_t2_ParamLimits

0xcf85,	// (0x0002ae26) main_video3_pane_t2

0xcfb0,	// (0x0002ae51) main_video3_pane_t3_ParamLimits

0xcfb0,	// (0x0002ae51) main_video3_pane_t3

0x0002,

0xf860,	// (0x0002d701) main_video3_pane_t_ParamLimits

0xf860,	// (0x0002d701) main_video3_pane_t

0xcfdd,	// (0x0002ae7e) cams_zoom_vslider_pane_g1

0xcfe6,	// (0x0002ae87) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0002d708) cams_zoom_vslider_pane_g

0xcfee,	// (0x0002ae8f) small_slider_vertical_pane

0xc7b2,	// (0x0002a653) small_slider_vertical_pane_g1

0xc7b2,	// (0x0002a653) small_slider_vertical_pane_g2

0xcff6,	// (0x0002ae97) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0002d70d) small_slider_vertical_pane_g

0x1072,	// (0x0001ef13) main_hwr_training_pane

0xcfff,	// (0x0002aea0) hwr_training_instruct_pane_ParamLimits

0xcfff,	// (0x0002aea0) hwr_training_instruct_pane

0x67d2,	// (0x00024673) hwr_training_navi_pane_ParamLimits

0x67d2,	// (0x00024673) hwr_training_navi_pane

0x67ec,	// (0x0002468d) hwr_training_write_pane_ParamLimits

0x67ec,	// (0x0002468d) hwr_training_write_pane

0x9bc4,	// (0x00027a65) bg_frame_shadow_pane

0xd036,	// (0x0002aed7) hwr_training_write_pane_g1

0xd03e,	// (0x0002aedf) hwr_training_write_pane_g2

0xd046,	// (0x0002aee7) hwr_training_write_pane_g3

0xd04e,	// (0x0002aeef) hwr_training_write_pane_g4

0xd056,	// (0x0002aef7) hwr_training_write_pane_g5

0xd05e,	// (0x0002aeff) hwr_training_write_pane_g6

0xd066,	// (0x0002af07) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0002d714) hwr_training_write_pane_g

0x19bd,	// (0x0001f85e) hwr_training_navi_pane_g1_ParamLimits

0x19bd,	// (0x0001f85e) hwr_training_navi_pane_g1

0x19cf,	// (0x0001f870) hwr_training_navi_pane_g2_ParamLimits

0x19cf,	// (0x0001f870) hwr_training_navi_pane_g2

0x19e1,	// (0x0001f882) hwr_training_navi_pane_g3_ParamLimits

0x19e1,	// (0x0001f882) hwr_training_navi_pane_g3

0x19f1,	// (0x0001f892) hwr_training_navi_pane_g4_ParamLimits

0x19f1,	// (0x0001f892) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0002d723) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0002d723) hwr_training_navi_pane_g

0x1a0b,	// (0x0001f8ac) hwr_training_navi_pane_t1

0x6824,	// (0x000246c5) list_single_hwr_training_instruct_pane_ParamLimits

0x6824,	// (0x000246c5) list_single_hwr_training_instruct_pane

0xd06e,	// (0x0002af0f) list_single_hwr_training_instruct_pane_t1

0xc6f2,	// (0x0002a593) bg_frame_shadow_pane_g1

0xd07d,	// (0x0002af1e) bg_frame_shadow_pane_g2

0xd085,	// (0x0002af26) bg_frame_shadow_pane_g3

0xd08d,	// (0x0002af2e) bg_frame_shadow_pane_g4

0xd095,	// (0x0002af36) bg_frame_shadow_pane_g5

0xd09d,	// (0x0002af3e) bg_frame_shadow_pane_g6

0xd0a5,	// (0x0002af46) bg_frame_shadow_pane_g7

0xa3e6,	// (0x00028287) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0002d72e) bg_frame_shadow_pane_g

0x1072,	// (0x0001ef13) main_video_tele_dialer_pane

0x1a19,	// (0x0001f8ba) aid_size_cell_video_keypad_ParamLimits

0x1a19,	// (0x0001f8ba) aid_size_cell_video_keypad

0x1a29,	// (0x0001f8ca) grid_video_dialer_keypad_pane_ParamLimits

0x1a29,	// (0x0001f8ca) grid_video_dialer_keypad_pane

0x1a5d,	// (0x0001f8fe) video_down_pane_cp_ParamLimits

0x1a5d,	// (0x0001f8fe) video_down_pane_cp

0x1a6b,	// (0x0001f90c) cell_video_dialer_keypad_pane_ParamLimits

0x1a6b,	// (0x0001f90c) cell_video_dialer_keypad_pane

0xd0ad,	// (0x0002af4e) bg_button_pane_cp08_ParamLimits

0xd0ad,	// (0x0002af4e) bg_button_pane_cp08

0x6869,	// (0x0002470a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6869,	// (0x0002470a) cell_video_dialer_keypad_pane_g1

0x619f,	// (0x00024040) mup3_rocker2_pane_ParamLimits

0x619f,	// (0x00024040) mup3_rocker2_pane

0xc7b2,	// (0x0002a653) mup3_rocker2_pane_g1

0x14d6,	// (0x0001f377) main_dialer2_pane

0x1072,	// (0x0001ef13) main_mp4_pane

0x1a88,	// (0x0001f929) main_mp4_pane_g1_ParamLimits

0x1a88,	// (0x0001f929) main_mp4_pane_g1

0x1a96,	// (0x0001f937) main_mp4_pane_g2_ParamLimits

0x1a96,	// (0x0001f937) main_mp4_pane_g2

0x1aa4,	// (0x0001f945) main_mp4_pane_g3_ParamLimits

0x1aa4,	// (0x0001f945) main_mp4_pane_g3

0x1ae9,	// (0x0001f98a) main_mp4_pane_g4_ParamLimits

0x1ae9,	// (0x0001f98a) main_mp4_pane_g4

0x1b11,	// (0x0001f9b2) main_mp4_pane_g5_ParamLimits

0x1b11,	// (0x0001f9b2) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0002d74e) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0002d74e) main_mp4_pane_g

0x1b61,	// (0x0001fa02) main_mp4_pane_t1_ParamLimits

0x1b61,	// (0x0001fa02) main_mp4_pane_t1

0x1bbd,	// (0x0001fa5e) main_mp4_pane_t2_ParamLimits

0x1bbd,	// (0x0001fa5e) main_mp4_pane_t2

0xd0b9,	// (0x0002af5a) main_mp4_pane_t3_ParamLimits

0xd0b9,	// (0x0002af5a) main_mp4_pane_t3

0x1c0f,	// (0x0001fab0) main_mp4_pane_t4_ParamLimits

0x1c0f,	// (0x0001fab0) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0002d75b) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0002d75b) main_mp4_pane_t

0x1c53,	// (0x0001faf4) mp4_progress_pane_ParamLimits

0x1c53,	// (0x0001faf4) mp4_progress_pane

0x1c9d,	// (0x0001fb3e) mp4_rocker_pane_ParamLimits

0x1c9d,	// (0x0001fb3e) mp4_rocker_pane

0xd0e1,	// (0x0002af82) mp4_progress_pane_t1

0xd0fa,	// (0x0002af9b) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0002d764) mp4_progress_pane_t

0xd113,	// (0x0002afb4) mup_progress_pane_cp04

0xd90d,	// (0x0002b7ae) mp4_rocker_pane_g1

0x1cbd,	// (0x0001fb5e) aid_cell_size_keypad2_ParamLimits

0x1cbd,	// (0x0001fb5e) aid_cell_size_keypad2

0x1ccd,	// (0x0001fb6e) dialer2_ne_pane_ParamLimits

0x1ccd,	// (0x0001fb6e) dialer2_ne_pane

0x1cdb,	// (0x0001fb7c) grid_dialer2_keypad_pane_ParamLimits

0x1cdb,	// (0x0001fb7c) grid_dialer2_keypad_pane

0xd14b,	// (0x0002afec) bg_popup_call_pane_cp07_ParamLimits

0xd14b,	// (0x0002afec) bg_popup_call_pane_cp07

0x68a3,	// (0x00024744) dialer2_ne_pane_t1_ParamLimits

0x68a3,	// (0x00024744) dialer2_ne_pane_t1

0x1ceb,	// (0x0001fb8c) cell_dialer2_keypad_pane_ParamLimits

0x1ceb,	// (0x0001fb8c) cell_dialer2_keypad_pane

0xd131,	// (0x0002afd2) bg_button_pane_pane_cp04_ParamLimits

0xd131,	// (0x0002afd2) bg_button_pane_pane_cp04

0x68c8,	// (0x00024769) cell_dialer2_keypad_pane_g1_ParamLimits

0x68c8,	// (0x00024769) cell_dialer2_keypad_pane_g1

0x3217,	// (0x000210b8) aid_placing_vt_set_content_ParamLimits

0x3217,	// (0x000210b8) aid_placing_vt_set_content

0x3243,	// (0x000210e4) aid_placing_vt_set_title_ParamLimits

0x3243,	// (0x000210e4) aid_placing_vt_set_title

0x1072,	// (0x0001ef13) main_image3_pane

0x1d32,	// (0x0001fbd3) area_side_right_pane_cp01_ParamLimits

0x1d32,	// (0x0001fbd3) area_side_right_pane_cp01

0x1d5f,	// (0x0001fc00) main_image3_pane_g1_ParamLimits

0x1d5f,	// (0x0001fc00) main_image3_pane_g1

0x1d6d,	// (0x0001fc0e) main_image3_pane_g2_ParamLimits

0x1d6d,	// (0x0001fc0e) main_image3_pane_g2

0x1d86,	// (0x0001fc27) main_image3_pane_g3_ParamLimits

0x1d86,	// (0x0001fc27) main_image3_pane_g3

0x1d9f,	// (0x0001fc40) main_image3_pane_g4_ParamLimits

0x1d9f,	// (0x0001fc40) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0002d773) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0002d773) main_image3_pane_g

0x1db8,	// (0x0001fc59) main_image3_pane_t1_ParamLimits

0x1db8,	// (0x0001fc59) main_image3_pane_t1

0x1ddd,	// (0x0001fc7e) main_image3_pane_t2_ParamLimits

0x1ddd,	// (0x0001fc7e) main_image3_pane_t2

0x1dfc,	// (0x0001fc9d) main_image3_pane_t3_ParamLimits

0x1dfc,	// (0x0001fc9d) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0002d77c) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0002d77c) main_image3_pane_t

0xd13d,	// (0x0002afde) grid_sctrl_middle_pane_cp01_ParamLimits

0xd13d,	// (0x0002afde) grid_sctrl_middle_pane_cp01

0x6930,	// (0x000247d1) cell_sctrl_middle_pane_cp01_ParamLimits

0x6930,	// (0x000247d1) cell_sctrl_middle_pane_cp01

0x6941,	// (0x000247e2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6941,	// (0x000247e2) cell_sctrl_middle_pane_cp01_g1

0x1072,	// (0x0001ef13) main_call4_pane

0x694e,	// (0x000247ef) aid_size_button_call4_ParamLimits

0x694e,	// (0x000247ef) aid_size_button_call4

0x697e,	// (0x0002481f) call4_windows_pane_ParamLimits

0x697e,	// (0x0002481f) call4_windows_pane

0x6998,	// (0x00024839) grid_call4_button_pane_ParamLimits

0x6998,	// (0x00024839) grid_call4_button_pane

0xd159,	// (0x0002affa) call4_windows_conf_pane

0xd170,	// (0x0002b011) popup_call4_audio_first_window_ParamLimits

0xd170,	// (0x0002b011) popup_call4_audio_first_window

0xd1bc,	// (0x0002b05d) popup_call4_audio_second_window_ParamLimits

0xd1bc,	// (0x0002b05d) popup_call4_audio_second_window

0xd1d0,	// (0x0002b071) popup_call4_audio_wait_window_ParamLimits

0xd1d0,	// (0x0002b071) popup_call4_audio_wait_window

0x69bc,	// (0x0002485d) cell_call4_button_pane_ParamLimits

0x69bc,	// (0x0002485d) cell_call4_button_pane

0x69e1,	// (0x00024882) bg_button_pane_cp09_ParamLimits

0x69e1,	// (0x00024882) bg_button_pane_cp09

0x69ed,	// (0x0002488e) cell_call4_button_pane_g1_ParamLimits

0x69ed,	// (0x0002488e) cell_call4_button_pane_g1

0x69fa,	// (0x0002489b) cell_call4_button_pane_t1_ParamLimits

0x69fa,	// (0x0002489b) cell_call4_button_pane_t1

0xd218,	// (0x0002b0b9) popup_call4_audio_conf_window_ParamLimits

0xd218,	// (0x0002b0b9) popup_call4_audio_conf_window

0x61d2,	// (0x00024073) mup3_progress_pane_t1_ParamLimits

0x61f1,	// (0x00024092) mup3_progress_pane_t2_ParamLimits

0xcaef,	// (0x0002a990) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0002d650) mup3_progress_pane_t_ParamLimits

0xcb0c,	// (0x0002a9ad) mup_progress_pane_cp03_ParamLimits

0x6670,	// (0x00024511) mup3_control_keys_pane_g4_copy1

0x1c81,	// (0x0001fb22) mp4_rocker2_pane_ParamLimits

0x1c81,	// (0x0001fb22) mp4_rocker2_pane

0xd22c,	// (0x0002b0cd) mp4_rocker2_pane_g1

0xd234,	// (0x0002b0d5) mp4_rocker2_pane_g2

0x1e5d,	// (0x0001fcfe) mp4_rocker2_pane_g3

0x1e65,	// (0x0001fd06) mp4_rocker2_pane_g4

0x1e6d,	// (0x0001fd0e) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0002d785) mp4_rocker2_pane_g

0x1072,	// (0x0001ef13) main_camera4_pane

0x1072,	// (0x0001ef13) main_video4_pane

0x1a39,	// (0x0001f8da) main_video_tele_dialer_pane_t1_ParamLimits

0x1a39,	// (0x0001f8da) main_video_tele_dialer_pane_t1

0x1a4b,	// (0x0001f8ec) main_video_tele_dialer_pane_t2_ParamLimits

0x1a4b,	// (0x0001f8ec) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0002d73f) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0002d73f) main_video_tele_dialer_pane_t

0x1e8d,	// (0x0001fd2e) cam4_autofocus_pane_ParamLimits

0x1e8d,	// (0x0001fd2e) cam4_autofocus_pane

0x1ea7,	// (0x0001fd48) cam4_image_uncrop_pane_ParamLimits

0x1ea7,	// (0x0001fd48) cam4_image_uncrop_pane

0x1ebe,	// (0x0001fd5f) cam4_indicators_pane_ParamLimits

0x1ebe,	// (0x0001fd5f) cam4_indicators_pane

0x1eda,	// (0x0001fd7b) main_camera4_pane_g1_ParamLimits

0x1eda,	// (0x0001fd7b) main_camera4_pane_g1

0x1ee6,	// (0x0001fd87) main_camera4_pane_g2_ParamLimits

0x1ee6,	// (0x0001fd87) main_camera4_pane_g2

0x1ee6,	// (0x0001fd87) main_camera4_pane_g3_ParamLimits

0x1ee6,	// (0x0001fd87) main_camera4_pane_g3

0x1ef2,	// (0x0001fd93) main_camera4_pane_g4_ParamLimits

0x1ef2,	// (0x0001fd93) main_camera4_pane_g4

0x1efe,	// (0x0001fd9f) main_camera4_pane_g5_ParamLimits

0x1efe,	// (0x0001fd9f) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0002d790) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0002d790) main_camera4_pane_g

0x1f18,	// (0x0001fdb9) main_camera4_pane_t1_ParamLimits

0x1f18,	// (0x0001fdb9) main_camera4_pane_t1

0x1f3c,	// (0x0001fddd) bg_tb_trans_pane_cp06

0x1f52,	// (0x0001fdf3) cam4_indicators_pane_g1

0x1f63,	// (0x0001fe04) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0002d7ab) cam4_indicators_pane_g

0x1f7b,	// (0x0001fe1c) cam4_indicators_pane_t1

0x1fa5,	// (0x0001fe46) main_video4_pane_g1_ParamLimits

0x1fa5,	// (0x0001fe46) main_video4_pane_g1

0x1fb1,	// (0x0001fe52) main_video4_pane_g2_ParamLimits

0x1fb1,	// (0x0001fe52) main_video4_pane_g2

0x1fbd,	// (0x0001fe5e) main_video4_pane_g3_ParamLimits

0x1fbd,	// (0x0001fe5e) main_video4_pane_g3

0x1fc9,	// (0x0001fe6a) main_video4_pane_g4_ParamLimits

0x1fc9,	// (0x0001fe6a) main_video4_pane_g4

0x0004,

0xf911,	// (0x0002d7b2) main_video4_pane_g_ParamLimits

0xf911,	// (0x0002d7b2) main_video4_pane_g

0x1fe9,	// (0x0001fe8a) vid4_indicators_pane_ParamLimits

0x1fe9,	// (0x0001fe8a) vid4_indicators_pane

0x2008,	// (0x0001fea9) video4_image_uncrop_cif_pane_ParamLimits

0x2008,	// (0x0001fea9) video4_image_uncrop_cif_pane

0x2017,	// (0x0001feb8) video4_image_uncrop_nhd_pane_ParamLimits

0x2017,	// (0x0001feb8) video4_image_uncrop_nhd_pane

0x1ea7,	// (0x0001fd48) video4_image_uncrop_vga_pane_ParamLimits

0x1ea7,	// (0x0001fd48) video4_image_uncrop_vga_pane

0x14c8,	// (0x0001f369) bg_tb_trans_pane_cp07

0x202c,	// (0x0001fecd) vid4_indicators_pane_g1

0x2040,	// (0x0001fee1) vid4_indicators_pane_g2

0x2054,	// (0x0001fef5) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0002d7bd) vid4_indicators_pane_g

0x2081,	// (0x0001ff22) vid4_indicators_pane_t1

0x6a30,	// (0x000248d1) cam4_autofocus_pane_g1

0x6a38,	// (0x000248d9) cam4_autofocus_pane_g2

0x6a40,	// (0x000248e1) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0002d7c8) cam4_autofocus_pane_g

0x6a48,	// (0x000248e9) cam4_autofocus_pane_g3_copy1

0x684d,	// (0x000246ee) video_down_pane_cp_t1

0x685b,	// (0x000246fc) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0002d744) video_down_pane_cp_t

0x1064,	// (0x0001ef05) popup_vitu2_window_ParamLimits

0x1064,	// (0x0001ef05) popup_vitu2_window

0x2098,	// (0x0001ff39) aid_size_cell2_itu2_ParamLimits

0x2098,	// (0x0001ff39) aid_size_cell2_itu2

0x20ba,	// (0x0001ff5b) aid_size_cell_itu2_ParamLimits

0x20ba,	// (0x0001ff5b) aid_size_cell_itu2

0x20fe,	// (0x0001ff9f) bg_popup_window_pane_cp09_ParamLimits

0x20fe,	// (0x0001ff9f) bg_popup_window_pane_cp09

0x210c,	// (0x0001ffad) field_vitu2_entry_pane_ParamLimits

0x210c,	// (0x0001ffad) field_vitu2_entry_pane

0x212c,	// (0x0001ffcd) grid_vitu2_function_pane_ParamLimits

0x212c,	// (0x0001ffcd) grid_vitu2_function_pane

0x2170,	// (0x00020011) grid_vitu2_itu_pane_ParamLimits

0x2170,	// (0x00020011) grid_vitu2_itu_pane

0x21ea,	// (0x0002008b) cell_vitu2_itu_pane_ParamLimits

0x21ea,	// (0x0002008b) cell_vitu2_itu_pane

0x2203,	// (0x000200a4) cell_vitu2_function_pane_ParamLimits

0x2203,	// (0x000200a4) cell_vitu2_function_pane

0xd23c,	// (0x0002b0dd) bg_popup_call_pane_cp08_ParamLimits

0xd23c,	// (0x0002b0dd) bg_popup_call_pane_cp08

0xd253,	// (0x0002b0f4) field_vitu2_entry_pane_g1

0xd25f,	// (0x0002b100) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0002d7cf) field_vitu2_entry_pane_g

0x6a50,	// (0x000248f1) field_vitu2_entry_pane_t1_ParamLimits

0x6a50,	// (0x000248f1) field_vitu2_entry_pane_t1

0xd279,	// (0x0002b11a) field_vitu2_entry_pane_t2_ParamLimits

0xd279,	// (0x0002b11a) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0002d7d6) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0002d7d6) field_vitu2_entry_pane_t

0x2244,	// (0x000200e5) bg_button_pane_cp010_ParamLimits

0x2244,	// (0x000200e5) bg_button_pane_cp010

0x2252,	// (0x000200f3) cell_vitu2_itu_pane_g1

0x2272,	// (0x00020113) cell_vitu2_itu_pane_t1_ParamLimits

0x2272,	// (0x00020113) cell_vitu2_itu_pane_t1

0x22be,	// (0x0002015f) cell_vitu2_itu_pane_t2_ParamLimits

0x22be,	// (0x0002015f) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0002d7e0) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0002d7e0) cell_vitu2_itu_pane_t

0x14c8,	// (0x0001f369) bg_button_pane_cp011

0x2386,	// (0x00020227) cell_vitu2_function_pane_g1

0x1072,	// (0x0001ef13) main_myfav_hc_pane

0x1e3e,	// (0x0001fcdf) popup_image3_note_pane_ParamLimits

0x1e3e,	// (0x0001fcdf) popup_image3_note_pane

0x1e4c,	// (0x0001fced) popup_image3_tool_bar_pane_ParamLimits

0x1e4c,	// (0x0001fced) popup_image3_tool_bar_pane

0x2334,	// (0x000201d5) cell_vitu2_itu_pane_t3_ParamLimits

0x2334,	// (0x000201d5) cell_vitu2_itu_pane_t3

0x9bc4,	// (0x00027a65) bg_popup_trans_pane

0xd29e,	// (0x0002b13f) grid_image3_tool_bar_pane

0xd2a8,	// (0x0002b149) bg_popup_trans_pane_g1

0xa759,	// (0x000285fa) bg_popup_trans_pane_g2

0xd2b0,	// (0x0002b151) bg_popup_trans_pane_g3

0xd2b8,	// (0x0002b159) bg_popup_trans_pane_g4

0xd2c0,	// (0x0002b161) bg_popup_trans_pane_g5

0xd2c8,	// (0x0002b169) bg_popup_trans_pane_g6

0xd2d0,	// (0x0002b171) bg_popup_trans_pane_g7

0xd2d8,	// (0x0002b179) bg_popup_trans_pane_g8

0xa739,	// (0x000285da) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0002d7e7) bg_popup_trans_pane_g

0xd2e0,	// (0x0002b181) cell_image3_tool_bar_pane_ParamLimits

0xd2e0,	// (0x0002b181) cell_image3_tool_bar_pane

0xc7b2,	// (0x0002a653) cell_image3_tool_bar_pane_g1

0x9bc4,	// (0x00027a65) bg_popup_trans_pane_cp1

0xd2f4,	// (0x0002b195) popup_image3_note_pane_t1

0xd302,	// (0x0002b1a3) popup_image3_note_pane_t2

0xd310,	// (0x0002b1b1) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0002d7fa) popup_image3_note_pane_t

0xd31e,	// (0x0002b1bf) popup_image3_note_pane_t3_copy1

0x6a81,	// (0x00024922) bg_myfav_hc_instruction_pane_ParamLimits

0x6a81,	// (0x00024922) bg_myfav_hc_instruction_pane

0x6a99,	// (0x0002493a) cell_myfav_contact_pane_ParamLimits

0x6a99,	// (0x0002493a) cell_myfav_contact_pane

0x6ab3,	// (0x00024954) cell_myfav_contact_pane_cp1_ParamLimits

0x6ab3,	// (0x00024954) cell_myfav_contact_pane_cp1

0x6acb,	// (0x0002496c) cell_myfav_contact_pane_cp2_ParamLimits

0x6acb,	// (0x0002496c) cell_myfav_contact_pane_cp2

0x6ae3,	// (0x00024984) cell_myfav_contact_pane_cp3_ParamLimits

0x6ae3,	// (0x00024984) cell_myfav_contact_pane_cp3

0x6afa,	// (0x0002499b) cell_myfav_contact_pane_cp4_ParamLimits

0x6afa,	// (0x0002499b) cell_myfav_contact_pane_cp4

0x6b10,	// (0x000249b1) cell_myfav_contact_pane_cp5_ParamLimits

0x6b10,	// (0x000249b1) cell_myfav_contact_pane_cp5

0x6b24,	// (0x000249c5) cell_myfav_contact_pane_cp6_ParamLimits

0x6b24,	// (0x000249c5) cell_myfav_contact_pane_cp6

0x6b38,	// (0x000249d9) cell_myfav_contact_pane_cp7_ParamLimits

0x6b38,	// (0x000249d9) cell_myfav_contact_pane_cp7

0xd32c,	// (0x0002b1cd) listscroll_gen_pane_cp05

0x6b50,	// (0x000249f1) main_myfav_hc_pane_g1_ParamLimits

0x6b50,	// (0x000249f1) main_myfav_hc_pane_g1

0x6b66,	// (0x00024a07) main_myfav_hc_pane_g2_ParamLimits

0x6b66,	// (0x00024a07) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0002d801) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0002d801) main_myfav_hc_pane_g

0x6b96,	// (0x00024a37) main_myfav_hc_pane_t1_ParamLimits

0x6b96,	// (0x00024a37) main_myfav_hc_pane_t1

0xd335,	// (0x0002b1d6) main_myfav_hc_pane_t2_ParamLimits

0xd335,	// (0x0002b1d6) main_myfav_hc_pane_t2

0xd347,	// (0x0002b1e8) main_myfav_hc_pane_t3_ParamLimits

0xd347,	// (0x0002b1e8) main_myfav_hc_pane_t3

0x6bad,	// (0x00024a4e) main_myfav_hc_pane_t4_ParamLimits

0x6bad,	// (0x00024a4e) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0002d808) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0002d808) main_myfav_hc_pane_t

0xc7b2,	// (0x0002a653) bg_myfav_hc_instruction_pane_g1

0xd359,	// (0x0002b1fa) cell_myfav_contact_pane_g1_ParamLimits

0xd359,	// (0x0002b1fa) cell_myfav_contact_pane_g1

0xd359,	// (0x0002b1fa) cell_myfav_contact_pane_g2_ParamLimits

0xd359,	// (0x0002b1fa) cell_myfav_contact_pane_g2

0xd365,	// (0x0002b206) cell_myfav_contact_pane_g3_ParamLimits

0xd365,	// (0x0002b206) cell_myfav_contact_pane_g3

0xcad9,	// (0x0002a97a) cell_myfav_contact_pane_g4_ParamLimits

0xcad9,	// (0x0002a97a) cell_myfav_contact_pane_g4

0xd372,	// (0x0002b213) cell_myfav_contact_pane_g5_ParamLimits

0xd372,	// (0x0002b213) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0002d813) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0002d813) cell_myfav_contact_pane_g

0x6b7e,	// (0x00024a1f) main_myfav_hc_pane_g3_ParamLimits

0x6b7e,	// (0x00024a1f) main_myfav_hc_pane_g3

0x0f6d,	// (0x0001ee0e) popup_adpt_find_window

0x6bd7,	// (0x00024a78) afind_page_pane_ParamLimits

0x6bd7,	// (0x00024a78) afind_page_pane

0x6be4,	// (0x00024a85) aid_size_cell_afind_ParamLimits

0x6be4,	// (0x00024a85) aid_size_cell_afind

0x6bfe,	// (0x00024a9f) bg_popup_sub_pane_cp09_ParamLimits

0x6bfe,	// (0x00024a9f) bg_popup_sub_pane_cp09

0x6c0b,	// (0x00024aac) find_pane_cp01_ParamLimits

0x6c0b,	// (0x00024aac) find_pane_cp01

0xd37e,	// (0x0002b21f) grid_afind_control_pane_ParamLimits

0xd37e,	// (0x0002b21f) grid_afind_control_pane

0x6c18,	// (0x00024ab9) grid_afind_pane_ParamLimits

0x6c18,	// (0x00024ab9) grid_afind_pane

0x6c32,	// (0x00024ad3) cell_afind_pane_ParamLimits

0x6c32,	// (0x00024ad3) cell_afind_pane

0xc7b2,	// (0x0002a653) afind_page_pane_g1

0x6c7a,	// (0x00024b1b) afind_page_pane_g2

0x6c83,	// (0x00024b24) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0002d81e) afind_page_pane_g

0x6c8c,	// (0x00024b2d) afind_page_pane_t1

0xd392,	// (0x0002b233) cell_afind_grid_control_pane_ParamLimits

0xd392,	// (0x0002b233) cell_afind_grid_control_pane

0xd131,	// (0x0002afd2) bg_button_pane_cp69_ParamLimits

0xd131,	// (0x0002afd2) bg_button_pane_cp69

0x6cac,	// (0x00024b4d) cell_afind_pane_g1_ParamLimits

0x6cac,	// (0x00024b4d) cell_afind_pane_g1

0x6cb9,	// (0x00024b5a) cell_afind_pane_t1_ParamLimits

0x6cb9,	// (0x00024b5a) cell_afind_pane_t1

0xa552,	// (0x000283f3) bg_button_pane_cp72

0xd3a1,	// (0x0002b242) cell_afind_grid_control_pane_g1

0x50a7,	// (0x00022f48) aid_image_placing_area_ParamLimits

0x50a7,	// (0x00022f48) aid_image_placing_area

0xcdff,	// (0x0002aca0) field_vitu_entry_pane_g1_ParamLimits

0xcdff,	// (0x0002aca0) field_vitu_entry_pane_g1

0xce0b,	// (0x0002acac) field_vitu_entry_pane_g2_ParamLimits

0xce0b,	// (0x0002acac) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0002d6cf) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0002d6cf) field_vitu_entry_pane_g

0x66f9,	// (0x0002459a) cell_vitu_itu_pane_g1_ParamLimits

0x673b,	// (0x000245dc) cell_vitu_itu_pane_t3_ParamLimits

0x673b,	// (0x000245dc) cell_vitu_itu_pane_t3

0xd0e1,	// (0x0002af82) mp4_progress_pane_t1_ParamLimits

0xd0fa,	// (0x0002af9b) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0002d764) mp4_progress_pane_t_ParamLimits

0xd113,	// (0x0002afb4) mup_progress_pane_cp04_ParamLimits

0x6bc1,	// (0x00024a62) main_myfav_hc_pane_t5_ParamLimits

0x6bc1,	// (0x00024a62) main_myfav_hc_pane_t5

0x0e30,	// (0x0001ecd1) aid_zoom_text_primary

0x0f6d,	// (0x0001ee0e) popup_adpt_find_window_ParamLimits

0x14c8,	// (0x0001f369) main_cam_set_pane

0x1ecc,	// (0x0001fd6d) cam4_zoom_pane_ParamLimits

0x1ecc,	// (0x0001fd6d) cam4_zoom_pane

0x6ccb,	// (0x00024b6c) main_cam_set_pane_g1_ParamLimits

0x6ccb,	// (0x00024b6c) main_cam_set_pane_g1

0x6cd9,	// (0x00024b7a) main_cam_set_pane_g2_ParamLimits

0x6cd9,	// (0x00024b7a) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0002d825) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0002d825) main_cam_set_pane_g

0x6ce5,	// (0x00024b86) main_cam_set_pane_t1_ParamLimits

0x6ce5,	// (0x00024b86) main_cam_set_pane_t1

0x6d01,	// (0x00024ba2) main_cset_listscroll_pane_ParamLimits

0x6d01,	// (0x00024ba2) main_cset_listscroll_pane

0x6d2c,	// (0x00024bcd) main_cset_slider_pane_ParamLimits

0x6d2c,	// (0x00024bcd) main_cset_slider_pane

0xd3b2,	// (0x0002b253) main_cset_list_pane_ParamLimits

0xd3b2,	// (0x0002b253) main_cset_list_pane

0xd3c2,	// (0x0002b263) scroll_pane_cp028

0x6d4b,	// (0x00024bec) aid_area_touch_slider

0x6d67,	// (0x00024c08) cset_slider_pane

0x6d91,	// (0x00024c32) main_cset_slider_pane_g1

0x6da6,	// (0x00024c47) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0002d82a) main_cset_slider_pane_g

0xd3fb,	// (0x0002b29c) main_cset_slider_pane_t1

0x6e6c,	// (0x00024d0d) main_cset_slider_pane_t2

0x6e86,	// (0x00024d27) main_cset_slider_pane_t3

0x6ea0,	// (0x00024d41) main_cset_slider_pane_t4

0x6ebe,	// (0x00024d5f) main_cset_slider_pane_t5

0x6edc,	// (0x00024d7d) main_cset_slider_pane_t6

0x6ef3,	// (0x00024d94) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0002d84f) main_cset_slider_pane_t

0x7001,	// (0x00024ea2) cset_list_set_pane_ParamLimits

0x7001,	// (0x00024ea2) cset_list_set_pane

0x701a,	// (0x00024ebb) aid_position_infowindow_above

0x7022,	// (0x00024ec3) aid_position_infowindow_below

0x702a,	// (0x00024ecb) cset_list_set_pane_g1_ParamLimits

0x702a,	// (0x00024ecb) cset_list_set_pane_g1

0x7036,	// (0x00024ed7) cset_list_set_pane_g3_ParamLimits

0x7036,	// (0x00024ed7) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0002d86e) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0002d86e) cset_list_set_pane_g

0x7045,	// (0x00024ee6) cset_list_set_pane_t1_ParamLimits

0x7045,	// (0x00024ee6) cset_list_set_pane_t1

0xa355,	// (0x000281f6) list_highlight_pane_cp021_ParamLimits

0xa355,	// (0x000281f6) list_highlight_pane_cp021

0xb089,	// (0x00028f2a) cset_slider_pane_g1

0xb09b,	// (0x00028f3c) cset_slider_pane_g2

0xb092,	// (0x00028f33) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0002d873) cset_slider_pane_g

0x239a,	// (0x0002023b) aid_area_touch_cam4_zoom

0x23a2,	// (0x00020243) cam4_zoom_cont_pane

0x23aa,	// (0x0002024b) cam4_zoom_pane_g1

0x23b2,	// (0x00020253) cam4_zoom_pane_g2

0x23ba,	// (0x0002025b) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0002d87a) cam4_zoom_pane_g

0x23c2,	// (0x00020263) cam4_zoom_cont_pane_g1

0x23cb,	// (0x0002026c) cam4_zoom_cont_pane_g2

0x23d4,	// (0x00020275) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0002d881) cam4_zoom_cont_pane_g

0x6968,	// (0x00024809) call4_image_pane_ParamLimits

0x6968,	// (0x00024809) call4_image_pane

0xd159,	// (0x0002affa) call4_windows_conf_pane_ParamLimits

0xd19a,	// (0x0002b03b) popup_call4_audio_in_window_ParamLimits

0xd19a,	// (0x0002b03b) popup_call4_audio_in_window

0x9bc4,	// (0x00027a65) bg_popup_call2_act_pane_cp02

0xd210,	// (0x0002b0b1) call4_list_conf_pane

0xc7b2,	// (0x0002a653) call4_image_pane_g1

0xc7b2,	// (0x0002a653) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0002d590) call4_image_pane_g

0xd4bf,	// (0x0002b360) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4bf,	// (0x0002b360) list_single_graphic_popup_conf4_pane

0x9bc4,	// (0x00027a65) list_highlight_pane_cp022

0xd4d2,	// (0x0002b373) list_single_graphic_popup_conf4_pane_g1

0xac93,	// (0x00028b34) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0002d888) list_single_graphic_popup_conf4_pane_g

0xd4da,	// (0x0002b37b) list_single_graphic_popup_conf4_pane_t1

0x33a7,	// (0x00021248) popup_vtel_slider_window_ParamLimits

0x33a7,	// (0x00021248) popup_vtel_slider_window

0xd11f,	// (0x0002afc0) dialer2_ne_pane_t2_ParamLimits

0xd11f,	// (0x0002afc0) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0002d769) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0002d769) dialer2_ne_pane_t

0xa355,	// (0x000281f6) bg_popup_sub_pane_cp010_ParamLimits

0xa355,	// (0x000281f6) bg_popup_sub_pane_cp010

0x705a,	// (0x00024efb) popup_vtel_slider_window_g1_ParamLimits

0x705a,	// (0x00024efb) popup_vtel_slider_window_g1

0x7066,	// (0x00024f07) popup_vtel_slider_window_g2_ParamLimits

0x7066,	// (0x00024f07) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0002d88d) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0002d88d) popup_vtel_slider_window_g

0x70ae,	// (0x00024f4f) vtel_slider_pane_ParamLimits

0x70ae,	// (0x00024f4f) vtel_slider_pane

0x70bd,	// (0x00024f5e) vtel_slider_pane_g1_ParamLimits

0x70bd,	// (0x00024f5e) vtel_slider_pane_g1

0x70ca,	// (0x00024f6b) vtel_slider_pane_g2_ParamLimits

0x70ca,	// (0x00024f6b) vtel_slider_pane_g2

0x70d7,	// (0x00024f78) vtel_slider_pane_g3_ParamLimits

0x70d7,	// (0x00024f78) vtel_slider_pane_g3

0x70bd,	// (0x00024f5e) vtel_slider_pane_g4_ParamLimits

0x70bd,	// (0x00024f5e) vtel_slider_pane_g4

0x70e4,	// (0x00024f85) vtel_slider_pane_g5_ParamLimits

0x70e4,	// (0x00024f85) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0002d896) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0002d896) vtel_slider_pane_g

0x14c8,	// (0x0001f369) main_gallery2_pane

0x20e0,	// (0x0001ff81) aid_size_row_itut2_dropdow_list_ParamLimits

0x20e0,	// (0x0001ff81) aid_size_row_itut2_dropdow_list

0x214e,	// (0x0001ffef) grid_vitu2_function_top_pane_ParamLimits

0x214e,	// (0x0001ffef) grid_vitu2_function_top_pane

0x21a8,	// (0x00020049) popup_vitu2_dropdown_list_window_ParamLimits

0x21a8,	// (0x00020049) popup_vitu2_dropdown_list_window

0x21c8,	// (0x00020069) popup_vitu2_match_list_window

0x23dd,	// (0x0002027e) cell_vitu2_function_top_pane_ParamLimits

0x23dd,	// (0x0002027e) cell_vitu2_function_top_pane

0x23f7,	// (0x00020298) cell_vitu2_function_top_pane_cp01_ParamLimits

0x23f7,	// (0x00020298) cell_vitu2_function_top_pane_cp01

0x2413,	// (0x000202b4) cell_vitu2_function_top_wide_pane_ParamLimits

0x2413,	// (0x000202b4) cell_vitu2_function_top_wide_pane

0x14c8,	// (0x0001f369) bg_button_pane_cp012

0x242f,	// (0x000202d0) cell_vitu2_function_top_pane_g1

0x2443,	// (0x000202e4) bg_button_pane_cp013_ParamLimits

0x2443,	// (0x000202e4) bg_button_pane_cp013

0x70f1,	// (0x00024f92) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x70f1,	// (0x00024f92) cell_vitu2_function_top_wide_pane_g1

0x1064,	// (0x0001ef05) bg_popup_sub_pane_cp20

0x245f,	// (0x00020300) list_vitu2_match_list_pane

0xd2a8,	// (0x0002b149) bg_popup_sub_pane_cp20_g1

0xd2b0,	// (0x0002b151) bg_popup_sub_pane_cp20_g2

0xa759,	// (0x000285fa) bg_popup_sub_pane_cp20_g3

0xd2b8,	// (0x0002b159) bg_popup_sub_pane_cp20_g4

0xa739,	// (0x000285da) bg_popup_sub_pane_cp20_g5

0xd4fe,	// (0x0002b39f) bg_popup_sub_pane_cp20_g6

0xd2c8,	// (0x0002b169) bg_popup_sub_pane_cp20_g7

0xd2d0,	// (0x0002b171) bg_popup_sub_pane_cp20_g8

0xd2d8,	// (0x0002b179) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0002d8a1) bg_popup_sub_pane_cp20_g

0x2477,	// (0x00020318) list_vitu2_match_list_item_pane_ParamLimits

0x2477,	// (0x00020318) list_vitu2_match_list_item_pane

0x2489,	// (0x0002032a) list_vitu2_match_list_item_pane_t1

0x1072,	// (0x0001ef13) bg_popup_sub_pane_cp21

0x2497,	// (0x00020338) grid_vitu2_dropdown_list_pane

0x249f,	// (0x00020340) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x249f,	// (0x00020340) cell_vitu2_dropdown_list_char_pane

0x24c0,	// (0x00020361) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x24c0,	// (0x00020361) cell_vitu2_dropdown_list_ctrl_pane

0xd506,	// (0x0002b3a7) cell_vitu2_dropdown_list_char_pane_g1

0xd50f,	// (0x0002b3b0) cell_vitu2_dropdown_list_char_pane_g2

0xd518,	// (0x0002b3b9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0002d8be) cell_vitu2_dropdown_list_char_pane_g

0x24ec,	// (0x0002038d) cell_vitu2_dropdown_list_char_pane_t1

0x7151,	// (0x00024ff2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7151,	// (0x00024ff2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7161,	// (0x00025002) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7161,	// (0x00025002) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7172,	// (0x00025013) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7172,	// (0x00025013) cell_vitu2_dropdown_list_ctrl_pane_g3

0x24fa,	// (0x0002039b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x24fa,	// (0x0002039b) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1f3c,	// (0x0001fddd) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1f3c,	// (0x0001fddd) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0002d8c5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0002d8c5) cell_vitu2_dropdown_list_ctrl_pane_g

0x7182,	// (0x00025023) aid_size_cell_gallery2_ParamLimits

0x7182,	// (0x00025023) aid_size_cell_gallery2

0x719c,	// (0x0002503d) grid_gallery2_pane_ParamLimits

0x719c,	// (0x0002503d) grid_gallery2_pane

0x6580,	// (0x00024421) scroll_pane_cp029_ParamLimits

0x6580,	// (0x00024421) scroll_pane_cp029

0x71b3,	// (0x00025054) cell_gallery2_pane_ParamLimits

0x71b3,	// (0x00025054) cell_gallery2_pane

0xd521,	// (0x0002b3c2) cell_gallery2_pane_g2

0x7205,	// (0x000250a6) cell_gallery2_pane_g3

0xd529,	// (0x0002b3ca) cell_gallery2_pane_g4

0xd531,	// (0x0002b3d2) cell_gallery2_pane_g5

0xa500,	// (0x000283a1) grid_highlight_pane_cp10

0x21c8,	// (0x00020069) popup_vitu2_match_list_window_ParamLimits

0x21da,	// (0x0002007b) popup_vitu2_query_window_ParamLimits

0x21da,	// (0x0002007b) popup_vitu2_query_window

0x1072,	// (0x0001ef13) bg_vitu2_candi_button_pane

0xd506,	// (0x0002b3a7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd50f,	// (0x0002b3b0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd518,	// (0x0002b3b9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x720d,	// (0x000250ae) bg_button_pane_cp015

0x721f,	// (0x000250c0) bg_button_pane_cp016

0x7232,	// (0x000250d3) bg_button_pane_cp017

0xc3aa,	// (0x0002a24b) bg_popup_sub_pane_cp22

0xd539,	// (0x0002b3da) popup_vitu2_query_window_g1

0x7277,	// (0x00025118) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0002d8d0) popup_vitu2_query_window_g

0x7294,	// (0x00025135) popup_vitu2_query_window_t1_ParamLimits

0x7294,	// (0x00025135) popup_vitu2_query_window_t1

0x72c7,	// (0x00025168) popup_vitu2_query_window_t2_ParamLimits

0x72c7,	// (0x00025168) popup_vitu2_query_window_t2

0x72d9,	// (0x0002517a) popup_vitu2_query_window_t3_ParamLimits

0x72d9,	// (0x0002517a) popup_vitu2_query_window_t3

0x7301,	// (0x000251a2) popup_vitu2_query_window_t4_ParamLimits

0x7301,	// (0x000251a2) popup_vitu2_query_window_t4

0x7322,	// (0x000251c3) popup_vitu2_query_window_t5_ParamLimits

0x7322,	// (0x000251c3) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0002d8d7) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0002d8d7) popup_vitu2_query_window_t

0xd3aa,	// (0x0002b24b) main_cset_text_pane

0x6d4b,	// (0x00024bec) aid_area_touch_slider_ParamLimits

0x6d67,	// (0x00024c08) cset_slider_pane_ParamLimits

0x6d91,	// (0x00024c32) main_cset_slider_pane_g1_ParamLimits

0x6da6,	// (0x00024c47) main_cset_slider_pane_g2_ParamLimits

0xd3cb,	// (0x0002b26c) main_cset_slider_pane_g3_ParamLimits

0xd3cb,	// (0x0002b26c) main_cset_slider_pane_g3

0x6dbb,	// (0x00024c5c) main_cset_slider_pane_g4_ParamLimits

0x6dbb,	// (0x00024c5c) main_cset_slider_pane_g4

0x6dca,	// (0x00024c6b) main_cset_slider_pane_g5_ParamLimits

0x6dca,	// (0x00024c6b) main_cset_slider_pane_g5

0x6dd8,	// (0x00024c79) main_cset_slider_pane_g6_ParamLimits

0x6dd8,	// (0x00024c79) main_cset_slider_pane_g6

0xf989,	// (0x0002d82a) main_cset_slider_pane_g_ParamLimits

0xd3fb,	// (0x0002b29c) main_cset_slider_pane_t1_ParamLimits

0x6e6c,	// (0x00024d0d) main_cset_slider_pane_t2_ParamLimits

0x6e86,	// (0x00024d27) main_cset_slider_pane_t3_ParamLimits

0x6ea0,	// (0x00024d41) main_cset_slider_pane_t4_ParamLimits

0x6ebe,	// (0x00024d5f) main_cset_slider_pane_t5_ParamLimits

0x6edc,	// (0x00024d7d) main_cset_slider_pane_t6_ParamLimits

0x6ef3,	// (0x00024d94) main_cset_slider_pane_t7_ParamLimits

0x6f21,	// (0x00024dc2) main_cset_slider_pane_t8_ParamLimits

0x6f21,	// (0x00024dc2) main_cset_slider_pane_t8

0x6f49,	// (0x00024dea) main_cset_slider_pane_t9_ParamLimits

0x6f49,	// (0x00024dea) main_cset_slider_pane_t9

0x6f71,	// (0x00024e12) main_cset_slider_pane_t10_ParamLimits

0x6f71,	// (0x00024e12) main_cset_slider_pane_t10

0x6f99,	// (0x00024e3a) main_cset_slider_pane_t11_ParamLimits

0x6f99,	// (0x00024e3a) main_cset_slider_pane_t11

0x6fc3,	// (0x00024e64) main_cset_slider_pane_t12_ParamLimits

0x6fc3,	// (0x00024e64) main_cset_slider_pane_t12

0x6fe2,	// (0x00024e83) main_cset_slider_pane_t13_ParamLimits

0x6fe2,	// (0x00024e83) main_cset_slider_pane_t13

0xf9ae,	// (0x0002d84f) main_cset_slider_pane_t_ParamLimits

0x9bc4,	// (0x00027a65) bg_popup_sub_pane_cp011

0xd545,	// (0x0002b3e6) main_cset_text_pane_g1

0xd54d,	// (0x0002b3ee) main_cset_text_pane_t1

0xd55b,	// (0x0002b3fc) main_cset_text_pane_t2

0xd569,	// (0x0002b40a) main_cset_text_pane_t3

0xd577,	// (0x0002b418) main_cset_text_pane_t4

0xd585,	// (0x0002b426) main_cset_text_pane_t5

0xd593,	// (0x0002b434) main_cset_text_pane_t6

0xd5a1,	// (0x0002b442) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0002d8e6) main_cset_text_pane_t

0x1072,	// (0x0001ef13) main_cam4_burst_pane

0x1072,	// (0x0001ef13) main_cam5_pane

0x6c9a,	// (0x00024b3b) bg_button_pane_cp019

0x6ca3,	// (0x00024b44) bg_button_pane_cp020

0xd3d7,	// (0x0002b278) main_cset_slider_pane_g7_ParamLimits

0xd3d7,	// (0x0002b278) main_cset_slider_pane_g7

0xd3e3,	// (0x0002b284) main_cset_slider_pane_g8_ParamLimits

0xd3e3,	// (0x0002b284) main_cset_slider_pane_g8

0x6dec,	// (0x00024c8d) main_cset_slider_pane_g9_ParamLimits

0x6dec,	// (0x00024c8d) main_cset_slider_pane_g9

0x6df8,	// (0x00024c99) main_cset_slider_pane_g10_ParamLimits

0x6df8,	// (0x00024c99) main_cset_slider_pane_g10

0x6e04,	// (0x00024ca5) main_cset_slider_pane_g11_ParamLimits

0x6e04,	// (0x00024ca5) main_cset_slider_pane_g11

0x6e10,	// (0x00024cb1) main_cset_slider_pane_g12_ParamLimits

0x6e10,	// (0x00024cb1) main_cset_slider_pane_g12

0x6e1c,	// (0x00024cbd) main_cset_slider_pane_g13_ParamLimits

0x6e1c,	// (0x00024cbd) main_cset_slider_pane_g13

0x6e2a,	// (0x00024ccb) main_cset_slider_pane_g14_ParamLimits

0x6e2a,	// (0x00024ccb) main_cset_slider_pane_g14

0x6e38,	// (0x00024cd9) main_cset_slider_pane_g15_ParamLimits

0x6e38,	// (0x00024cd9) main_cset_slider_pane_g15

0xd429,	// (0x0002b2ca) main_cset_slider_pane_t14_ParamLimits

0xd429,	// (0x0002b2ca) main_cset_slider_pane_t14

0xd486,	// (0x0002b327) main_cset_slider_pane_t15_ParamLimits

0xd486,	// (0x0002b327) main_cset_slider_pane_t15

0x7399,	// (0x0002523a) aid_cam4_burst_size_cell_ParamLimits

0x7399,	// (0x0002523a) aid_cam4_burst_size_cell

0x73b5,	// (0x00025256) grid_cam4_burst_pane_ParamLimits

0x73b5,	// (0x00025256) grid_cam4_burst_pane

0x73e5,	// (0x00025286) linegrid_cam4_burst_pane_ParamLimits

0x73e5,	// (0x00025286) linegrid_cam4_burst_pane

0x7405,	// (0x000252a6) scroll_pane_cp30_ParamLimits

0x7405,	// (0x000252a6) scroll_pane_cp30

0x7411,	// (0x000252b2) cell_cam4_burst_pane_ParamLimits

0x7411,	// (0x000252b2) cell_cam4_burst_pane

0xd5cd,	// (0x0002b46e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5cd,	// (0x0002b46e) linegrid_cam4_burst_pane_g1

0x744d,	// (0x000252ee) linegrid_cam4_burst_pane_g2_ParamLimits

0x744d,	// (0x000252ee) linegrid_cam4_burst_pane_g2

0xd5da,	// (0x0002b47b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5da,	// (0x0002b47b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0002d8f5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0002d8f5) linegrid_cam4_burst_pane_g

0x745e,	// (0x000252ff) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x745e,	// (0x000252ff) linegrid_cam4_burst_pane_g3_copy1

0xd5e7,	// (0x0002b488) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5e7,	// (0x0002b488) linegrid_cam4_burst_pane_g4

0x7478,	// (0x00025319) linegrid_cam4_burst_pane_g5_ParamLimits

0x7478,	// (0x00025319) linegrid_cam4_burst_pane_g5

0x7489,	// (0x0002532a) linegrid_cam4_burst_pane_g6_ParamLimits

0x7489,	// (0x0002532a) linegrid_cam4_burst_pane_g6

0xd5f4,	// (0x0002b495) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5f4,	// (0x0002b495) linegrid_cam4_burst_pane_g7

0x749a,	// (0x0002533b) cell_cam4_burst_pane_g1

0xd60d,	// (0x0002b4ae) main_cam5_pane_t1_ParamLimits

0xd60d,	// (0x0002b4ae) main_cam5_pane_t1

0xd61f,	// (0x0002b4c0) main_cam5_pane_t2_ParamLimits

0xd61f,	// (0x0002b4c0) main_cam5_pane_t2

0xd631,	// (0x0002b4d2) main_cam5_pane_t3_ParamLimits

0xd631,	// (0x0002b4d2) main_cam5_pane_t3

0xd643,	// (0x0002b4e4) main_cam5_pane_t4_ParamLimits

0xd643,	// (0x0002b4e4) main_cam5_pane_t4

0xd65b,	// (0x0002b4fc) main_cam5_pane_t5_ParamLimits

0xd65b,	// (0x0002b4fc) main_cam5_pane_t5

0xd66f,	// (0x0002b510) main_cam5_pane_t6_ParamLimits

0xd66f,	// (0x0002b510) main_cam5_pane_t6

0xd683,	// (0x0002b524) main_cam5_pane_t7_ParamLimits

0xd683,	// (0x0002b524) main_cam5_pane_t7

0xd695,	// (0x0002b536) main_cam5_pane_t8_ParamLimits

0xd695,	// (0x0002b536) main_cam5_pane_t8

0xd6b1,	// (0x0002b552) main_cam5_pane_t9_ParamLimits

0xd6b1,	// (0x0002b552) main_cam5_pane_t9

0xd6c3,	// (0x0002b564) main_cam5_pane_t10_ParamLimits

0xd6c3,	// (0x0002b564) main_cam5_pane_t10

0xd6d5,	// (0x0002b576) main_cam5_pane_t11_ParamLimits

0xd6d5,	// (0x0002b576) main_cam5_pane_t11

0xd6e7,	// (0x0002b588) main_cam5_pane_t12_ParamLimits

0xd6e7,	// (0x0002b588) main_cam5_pane_t12

0xd6fc,	// (0x0002b59d) main_cam5_pane_t13_ParamLimits

0xd6fc,	// (0x0002b59d) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0002d901) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0002d901) main_cam5_pane_t

0x1023,	// (0x0001eec4) popup_scut_keymap_window_ParamLimits

0x1023,	// (0x0001eec4) popup_scut_keymap_window

0x74ad,	// (0x0002534e) aid_size_cell_brow_shortcut

0xa500,	// (0x000283a1) bg_popup_window_pane_cp010

0x74b9,	// (0x0002535a) grid_scut_pane

0x74c5,	// (0x00025366) cell_scut_pane_ParamLimits

0x74c5,	// (0x00025366) cell_scut_pane

0x74dc,	// (0x0002537d) cell_scut_pane_g1

0xd719,	// (0x0002b5ba) cell_scut_pane_t1

0xd728,	// (0x0002b5c9) cell_scut_pane_t2

0x74e5,	// (0x00025386) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0002d91c) cell_scut_pane_t

0x5dfb,	// (0x00023c9c) main_mup3_pane_g8_ParamLimits

0x5dfb,	// (0x00023c9c) main_mup3_pane_g8

0x20ee,	// (0x0001ff8f) area_vitu2_query_pane_ParamLimits

0x20ee,	// (0x0001ff8f) area_vitu2_query_pane

0x7245,	// (0x000250e6) input_focus_pane_cp08

0xd737,	// (0x0002b5d8) area_vitu2_query_pane_g1

0x74f3,	// (0x00025394) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0002d923) area_vitu2_query_pane_g

0x7504,	// (0x000253a5) area_vitu2_query_pane_t1_ParamLimits

0x7504,	// (0x000253a5) area_vitu2_query_pane_t1

0x7518,	// (0x000253b9) area_vitu2_query_pane_t2_ParamLimits

0x7518,	// (0x000253b9) area_vitu2_query_pane_t2

0x752c,	// (0x000253cd) area_vitu2_query_pane_t3_ParamLimits

0x752c,	// (0x000253cd) area_vitu2_query_pane_t3

0xd743,	// (0x0002b5e4) area_vitu2_query_pane_t4_ParamLimits

0xd743,	// (0x0002b5e4) area_vitu2_query_pane_t4

0xd76b,	// (0x0002b60c) area_vitu2_query_pane_t5_ParamLimits

0xd76b,	// (0x0002b60c) area_vitu2_query_pane_t5

0xd793,	// (0x0002b634) area_vitu2_query_pane_t6_ParamLimits

0xd793,	// (0x0002b634) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0002d928) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0002d928) area_vitu2_query_pane_t

0x7554,	// (0x000253f5) bg_button_pane_cp018

0x7562,	// (0x00025403) bg_button_pane_cp021

0x756e,	// (0x0002540f) bg_button_pane_cp022

0x757f,	// (0x00025420) input_focus_pane_cp09

0xada2,	// (0x00028c43) aid_size_touch_mv_arrow_left

0xadcd,	// (0x00028c6e) aid_size_touch_mv_arrow_right

0x6e50,	// (0x00024cf1) main_cset_slider_pane_g16_ParamLimits

0x6e50,	// (0x00024cf1) main_cset_slider_pane_g16

0x6e5e,	// (0x00024cff) main_cset_slider_pane_g17_ParamLimits

0x6e5e,	// (0x00024cff) main_cset_slider_pane_g17

0x749a,	// (0x0002533b) cell_cam4_burst_pane_g1_ParamLimits

0x9bc4,	// (0x00027a65) compa_mode_pane

0x7072,	// (0x00024f13) popup_vtel_slider_window_g3_ParamLimits

0x7072,	// (0x00024f13) popup_vtel_slider_window_g3

0x7086,	// (0x00024f27) popup_vtel_slider_window_g4_ParamLimits

0x7086,	// (0x00024f27) popup_vtel_slider_window_g4

0x709a,	// (0x00024f3b) popup_vtel_slider_window_t1_ParamLimits

0x709a,	// (0x00024f3b) popup_vtel_slider_window_t1

0x1072,	// (0x0001ef13) main_cl_pane

0x1562,	// (0x0001f403) popup_imed_adjust2_window_ParamLimits

0xc3aa,	// (0x0002a24b) bg_tb_trans_pane_cp05_ParamLimits

0xcd34,	// (0x0002abd5) popup_imed_adjust2_window_g1_ParamLimits

0xcd43,	// (0x0002abe4) popup_imed_adjust2_window_g2_ParamLimits

0xcd43,	// (0x0002abe4) popup_imed_adjust2_window_g2

0xcd4f,	// (0x0002abf0) popup_imed_adjust2_window_g3_ParamLimits

0xcd4f,	// (0x0002abf0) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0002d693) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0002d693) popup_imed_adjust2_window_g

0xcd5b,	// (0x0002abfc) popup_imed_adjust2_window_t1_ParamLimits

0xcd73,	// (0x0002ac14) slider_imed_adjust_pane_ParamLimits

0xcd87,	// (0x0002ac28) slider_imed_adjust_pane_g1_ParamLimits

0xcd97,	// (0x0002ac38) slider_imed_adjust_pane_g2_ParamLimits

0xcda7,	// (0x0002ac48) slider_imed_adjust_pane_g3_ParamLimits

0xcdb8,	// (0x0002ac59) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0002d69a) slider_imed_adjust_pane_g_ParamLimits

0x1e75,	// (0x0001fd16) aid_touch_area_cam4_ParamLimits

0x1e75,	// (0x0001fd16) aid_touch_area_cam4

0x1e85,	// (0x0001fd26) battery_pane_cp01

0x1f0c,	// (0x0001fdad) main_camera4_pane_g6_ParamLimits

0x1f0c,	// (0x0001fdad) main_camera4_pane_g6

0x1f2a,	// (0x0001fdcb) main_camera4_pane_t2_ParamLimits

0x1f2a,	// (0x0001fdcb) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0002d79d) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0002d79d) main_camera4_pane_t

0x1f95,	// (0x0001fe36) aid_touch_area_vid4_ParamLimits

0x1f95,	// (0x0001fe36) aid_touch_area_vid4

0x1fd5,	// (0x0001fe76) main_video4_pane_g5_ParamLimits

0x1fd5,	// (0x0001fe76) main_video4_pane_g5

0x1ff9,	// (0x0001fe9a) vid4_progress_pane_ParamLimits

0x1ff9,	// (0x0001fe9a) vid4_progress_pane

0xd3ef,	// (0x0002b290) main_cset_slider_pane_g18_ParamLimits

0xd3ef,	// (0x0002b290) main_cset_slider_pane_g18

0xd601,	// (0x0002b4a2) cell_cam4_burst_pane_g2_ParamLimits

0xd601,	// (0x0002b4a2) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0002d8fc) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0002d8fc) cell_cam4_burst_pane_g

0x7590,	// (0x00025431) bg_cl_pane_ParamLimits

0x7590,	// (0x00025431) bg_cl_pane

0x759c,	// (0x0002543d) cl_header_pane_ParamLimits

0x759c,	// (0x0002543d) cl_header_pane

0x75a8,	// (0x00025449) cl_listscroll_pane_ParamLimits

0x75a8,	// (0x00025449) cl_listscroll_pane

0xd7df,	// (0x0002b680) bg_cl_pane_g1

0xd7e7,	// (0x0002b688) bg_cl_pane_g2

0xd7ef,	// (0x0002b690) bg_cl_pane_g3

0xd7f7,	// (0x0002b698) bg_cl_pane_g4

0xd7ff,	// (0x0002b6a0) bg_cl_pane_g5

0xd807,	// (0x0002b6a8) bg_cl_pane_g6

0xd80f,	// (0x0002b6b0) bg_cl_pane_g7

0xd817,	// (0x0002b6b8) bg_cl_pane_g8

0xd81f,	// (0x0002b6c0) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0002d937) bg_cl_pane_g

0x75b4,	// (0x00025455) aid_height_cl_leading_ParamLimits

0x75b4,	// (0x00025455) aid_height_cl_leading

0x75c0,	// (0x00025461) aid_height_cl_text_ParamLimits

0x75c0,	// (0x00025461) aid_height_cl_text

0xd13d,	// (0x0002afde) bg_cl_header_pane_ParamLimits

0xd13d,	// (0x0002afde) bg_cl_header_pane

0x75d8,	// (0x00025479) cl_header_pane_g1_ParamLimits

0x75d8,	// (0x00025479) cl_header_pane_g1

0x75e5,	// (0x00025486) cl_header_pane_t1_ParamLimits

0x75e5,	// (0x00025486) cl_header_pane_t1

0xd827,	// (0x0002b6c8) cl_list_pane

0xd3c2,	// (0x0002b263) hc_scroll_pane_cp01

0xa739,	// (0x000285da) bg_cl_header_pane_g1

0xd2a8,	// (0x0002b149) bg_cl_header_pane_g2

0xa759,	// (0x000285fa) bg_cl_header_pane_g3

0xd2b8,	// (0x0002b159) bg_cl_header_pane_g4

0xd2b0,	// (0x0002b151) bg_cl_header_pane_g5

0xd4fe,	// (0x0002b39f) bg_cl_header_pane_g6

0xd2d0,	// (0x0002b171) bg_cl_header_pane_g7

0xd2d8,	// (0x0002b179) bg_cl_header_pane_g8

0xd2c8,	// (0x0002b169) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0002d94a) bg_cl_header_pane_g

0x75f7,	// (0x00025498) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x75f7,	// (0x00025498) hc_cl_list_double_graphic_heading_pane

0x760b,	// (0x000254ac) hc_cl_list_single_graphic_pane_ParamLimits

0x760b,	// (0x000254ac) hc_cl_list_single_graphic_pane

0x7625,	// (0x000254c6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7625,	// (0x000254c6) hc_cl_list_single_graphic_pane_g1

0x7631,	// (0x000254d2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7631,	// (0x000254d2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0002d95d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0002d95d) hc_cl_list_single_graphic_pane_g

0x7645,	// (0x000254e6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7645,	// (0x000254e6) hc_cl_list_single_graphic_pane_t1

0x7625,	// (0x000254c6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7625,	// (0x000254c6) hc_cl_list_double_graphic_heading_pane_g1

0x765a,	// (0x000254fb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x765a,	// (0x000254fb) hc_cl_list_double_graphic_heading_pane_g2

0x766e,	// (0x0002550f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x766e,	// (0x0002550f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0002d962) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0002d962) hc_cl_list_double_graphic_heading_pane_g

0x7682,	// (0x00025523) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7682,	// (0x00025523) hc_cl_list_double_graphic_heading_pane_t1

0x7697,	// (0x00025538) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7697,	// (0x00025538) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0002d969) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0002d969) hc_cl_list_double_graphic_heading_pane_t

0x251e,	// (0x000203bf) vid4_progress_pane_g1

0x252e,	// (0x000203cf) vid4_progress_pane_g2

0x253e,	// (0x000203df) vid4_progress_pane_g3

0x2550,	// (0x000203f1) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0002d96e) vid4_progress_pane_g

0x2568,	// (0x00020409) vid4_progress_pane_t1

0x257e,	// (0x0002041f) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0002d979) vid4_progress_pane_t

0x25a9,	// (0x0002044a) wait_bar_pane_cp07

0xc5a5,	// (0x0002a446) blid_firmament_pane_ParamLimits

0xc5e8,	// (0x0002a489) popup_blid_sat_info2_window_g1

0xc60c,	// (0x0002a4ad) popup_blid_sat_info2_window_t3

0xc61a,	// (0x0002a4bb) popup_blid_sat_info2_window_t4

0xc628,	// (0x0002a4c9) popup_blid_sat_info2_window_t5

0xc636,	// (0x0002a4d7) popup_blid_sat_info2_window_t6

0xc646,	// (0x0002a4e7) popup_blid_sat_info2_window_t7

0xc654,	// (0x0002a4f5) popup_blid_sat_info2_window_t8

0xc662,	// (0x0002a503) popup_blid_sat_info2_window_t9

0xc670,	// (0x0002a511) popup_blid_sat_info2_window_t10

0xc732,	// (0x0002a5d3) aid_firma_cardinal_ParamLimits

0xc746,	// (0x0002a5e7) blid_firmament_pane_t1_ParamLimits

0xc75d,	// (0x0002a5fe) blid_firmament_pane_t2_ParamLimits

0xc774,	// (0x0002a615) blid_firmament_pane_t3_ParamLimits

0xc78b,	// (0x0002a62c) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0002d587) blid_firmament_pane_t_ParamLimits

0xc7a2,	// (0x0002a643) blid_sat_info_pane_ParamLimits

0x14c8,	// (0x0001f369) main_cam_set_pane_ParamLimits

0x6519,	// (0x000243ba) aid_size_cell_colour_35_ParamLimits

0x6533,	// (0x000243d4) aid_size_cell_colour_112_ParamLimits

0x654a,	// (0x000243eb) aid_size_cell_effect_ParamLimits

0xa355,	// (0x000281f6) bg_tb_trans_pane_cp02_ParamLimits

0xb0da,	// (0x00028f7b) heading_imed_pane_ParamLimits

0x6564,	// (0x00024405) listscroll_imed_pane_ParamLimits

0xb990,	// (0x00029831) popup_call2_audio_first_window_g5_ParamLimits

0xb990,	// (0x00029831) popup_call2_audio_first_window_g5

0x1d00,	// (0x0001fba1) aid_size_touch_image3_arrow_left_ParamLimits

0x1d00,	// (0x0001fba1) aid_size_touch_image3_arrow_left

0x1d16,	// (0x0001fbb7) aid_size_touch_image3_arrow_right_ParamLimits

0x1d16,	// (0x0001fbb7) aid_size_touch_image3_arrow_right

0x2593,	// (0x00020434) vid4_progress_pane_t3

0x6804,	// (0x000246a5) main_hwr_training_symbol_option_pane_ParamLimits

0x6804,	// (0x000246a5) main_hwr_training_symbol_option_pane

0xd021,	// (0x0002aec2) popup_hwr_training_preview_window_ParamLimits

0xd021,	// (0x0002aec2) popup_hwr_training_preview_window

0x19fe,	// (0x0001f89f) hwr_training_navi_pane_g5_ParamLimits

0x19fe,	// (0x0001f89f) hwr_training_navi_pane_g5

0xd296,	// (0x0002b137) popup_char_count_window

0x1064,	// (0x0001ef05) bg_popup_sub_pane_cp20_ParamLimits

0x245f,	// (0x00020300) list_vitu2_match_list_pane_ParamLimits

0x246b,	// (0x0002030c) vitu2_page_scroll_pane_ParamLimits

0x246b,	// (0x0002030c) vitu2_page_scroll_pane

0xd85a,	// (0x0002b6fb) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd85a,	// (0x0002b6fb) list_single_hwr_training_symbol_option_pane

0xd86d,	// (0x0002b70e) list_single_hwr_training_symbol_option_pane_g1

0xd875,	// (0x0002b716) list_single_hwr_training_symbol_option_pane_t1

0xd883,	// (0x0002b724) bg_button_pane_cp023

0xd88c,	// (0x0002b72d) bg_button_pane_cp024

0x76e4,	// (0x00025585) vitu2_page_scroll_pane_g1

0x76ec,	// (0x0002558d) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0002d980) vitu2_page_scroll_pane_g

0x76f4,	// (0x00025595) vitu2_page_scroll_pane_t1

0xc7db,	// (0x0002a67c) popup_char_count_window_g1

0xd8bf,	// (0x0002b760) popup_char_count_window_g2

0xd8c8,	// (0x0002b769) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0002d985) popup_char_count_window_g

0xd8d1,	// (0x0002b772) popup_char_count_window_t1

0x1072,	// (0x0001ef13) main_vded2_pane

0xcd20,	// (0x0002abc1) aid_size_cell_imed_line

0xcd2a,	// (0x0002abcb) grid_imed_line_width_pane

0x2065,	// (0x0001ff06) vid4_indicators_pane_g4

0xd8df,	// (0x0002b780) cell_imed_line_width_pane_ParamLimits

0xd8df,	// (0x0002b780) cell_imed_line_width_pane

0xd8f3,	// (0x0002b794) cell_imed_line_width_pane_g1

0xd830,	// (0x0002b6d1) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0002d98c) cell_imed_line_width_pane_g

0x7703,	// (0x000255a4) main_vded2_pane_g1_ParamLimits

0x7703,	// (0x000255a4) main_vded2_pane_g1

0x7710,	// (0x000255b1) main_vded2_pane_g2_ParamLimits

0x7710,	// (0x000255b1) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0002d991) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0002d991) main_vded2_pane_g

0x771e,	// (0x000255bf) vded2_slider_pane_ParamLimits

0x771e,	// (0x000255bf) vded2_slider_pane

0x772b,	// (0x000255cc) aid_size_touch_vded2_end

0x7735,	// (0x000255d6) aid_size_touch_vded2_playhead

0xd8fc,	// (0x0002b79d) aid_size_touch_vded2_start

0xd904,	// (0x0002b7a5) vded2_slider_bg_pane

0xd917,	// (0x0002b7b8) vded2_slider_pane_g1

0xd920,	// (0x0002b7c1) vded2_slider_pane_g2

0x773d,	// (0x000255de) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0002d996) vded2_slider_pane_g

0xd928,	// (0x0002b7c9) vded2_slider_bg_pane_g1

0xd931,	// (0x0002b7d2) vded2_slider_bg_pane_g2

0xd93a,	// (0x0002b7db) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0002d99d) vded2_slider_bg_pane_g

0x4e12,	// (0x00022cb3) aid_postcard_touch_down_pane_ParamLimits

0x4e12,	// (0x00022cb3) aid_postcard_touch_down_pane

0x4e22,	// (0x00022cc3) aid_postcard_touch_up_pane_ParamLimits

0x4e22,	// (0x00022cc3) aid_postcard_touch_up_pane

0x1072,	// (0x0001ef13) main_blid2_pane

0x14f1,	// (0x0001f392) popup_blid2_search_window

0x9bc4,	// (0x00027a65) blid2_gps_pane

0x9bc4,	// (0x00027a65) blid2_navig_pane

0x9bc4,	// (0x00027a65) blid2_search_pane

0x9bc4,	// (0x00027a65) blid2_tripm_pane

0x7746,	// (0x000255e7) blid2_search_pane_g1_ParamLimits

0x7746,	// (0x000255e7) blid2_search_pane_g1

0x7756,	// (0x000255f7) blid2_search_pane_t1_ParamLimits

0x7756,	// (0x000255f7) blid2_search_pane_t1

0x7768,	// (0x00025609) aid_size_cell_blid2_gps_ParamLimits

0x7768,	// (0x00025609) aid_size_cell_blid2_gps

0x7778,	// (0x00025619) blid2_gps_pane_g1_ParamLimits

0x7778,	// (0x00025619) blid2_gps_pane_g1

0x7784,	// (0x00025625) grid_blid2_satellite_pane_ParamLimits

0x7784,	// (0x00025625) grid_blid2_satellite_pane

0x7794,	// (0x00025635) blid2_navig_pane_g1_ParamLimits

0x7794,	// (0x00025635) blid2_navig_pane_g1

0x77a0,	// (0x00025641) blid2_navig_pane_t1_ParamLimits

0x77a0,	// (0x00025641) blid2_navig_pane_t1

0x77b2,	// (0x00025653) blid2_navig_pane_t2_ParamLimits

0x77b2,	// (0x00025653) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0002d9a4) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0002d9a4) blid2_navig_pane_t

0x77c4,	// (0x00025665) blid2_navig_ring_pane_ParamLimits

0x77c4,	// (0x00025665) blid2_navig_ring_pane

0x77d4,	// (0x00025675) blid2_speed_pane_ParamLimits

0x77d4,	// (0x00025675) blid2_speed_pane

0x77e0,	// (0x00025681) blid2_tripm_pane_g1_ParamLimits

0x77e0,	// (0x00025681) blid2_tripm_pane_g1

0x77f0,	// (0x00025691) blid2_tripm_pane_g2_ParamLimits

0x77f0,	// (0x00025691) blid2_tripm_pane_g2

0x77fc,	// (0x0002569d) blid2_tripm_pane_g3_ParamLimits

0x77fc,	// (0x0002569d) blid2_tripm_pane_g3

0x7808,	// (0x000256a9) blid2_tripm_pane_g4_ParamLimits

0x7808,	// (0x000256a9) blid2_tripm_pane_g4

0x7814,	// (0x000256b5) blid2_tripm_pane_g5_ParamLimits

0x7814,	// (0x000256b5) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0002d9a9) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0002d9a9) blid2_tripm_pane_g

0x7830,	// (0x000256d1) blid2_tripm_pane_t1_ParamLimits

0x7830,	// (0x000256d1) blid2_tripm_pane_t1

0x7844,	// (0x000256e5) blid2_tripm_pane_t2_ParamLimits

0x7844,	// (0x000256e5) blid2_tripm_pane_t2

0x7856,	// (0x000256f7) blid2_tripm_pane_t3_ParamLimits

0x7856,	// (0x000256f7) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0002d9b6) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0002d9b6) blid2_tripm_pane_t

0x7888,	// (0x00025729) cell_blid2_satellite_pane_ParamLimits

0x7888,	// (0x00025729) cell_blid2_satellite_pane

0x78a2,	// (0x00025743) cell_blid2_satellite_pane_g1

0xd943,	// (0x0002b7e4) cell_blid2_satellite_pane_t1

0xc7b2,	// (0x0002a653) blid2_speed_pane_g1

0xd951,	// (0x0002b7f2) blid2_speed_pane_t1

0xd95f,	// (0x0002b800) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0002d9bf) blid2_speed_pane_t

0xc7b2,	// (0x0002a653) blid2_navig_ring_pane_g1

0x78ab,	// (0x0002574c) blid2_navig_ring_pane_g2

0x78b3,	// (0x00025754) blid2_navig_ring_pane_g3

0x78bb,	// (0x0002575c) blid2_navig_ring_pane_g4

0x78c3,	// (0x00025764) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0002d9c4) blid2_navig_ring_pane_g

0x9bc4,	// (0x00027a65) bg_popup_window_pane_cp011

0xd96d,	// (0x0002b80e) popup_blid2_search_window_g1

0xd975,	// (0x0002b816) popup_blid2_search_window_t1

0xd983,	// (0x0002b824) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0002d9cf) popup_blid2_search_window_t

0xa648,	// (0x000284e9) main_browser_pane_g1

0xa30d,	// (0x000281ae) main_browser_pane_ParamLimits

0x14c8,	// (0x0001f369) bg_button_pane_cp011_ParamLimits

0x2386,	// (0x00020227) cell_vitu2_function_pane_g1_ParamLimits

0xc3aa,	// (0x0002a24b) bg_popup_sub_pane_cp22_ParamLimits

0x7245,	// (0x000250e6) input_focus_pane_cp08_ParamLimits

0x725c,	// (0x000250fd) popup_vitu2_query_button_pane_ParamLimits

0x725c,	// (0x000250fd) popup_vitu2_query_button_pane

0x726d,	// (0x0002510e) popup_vitu2_query_input_button_pane

0xd539,	// (0x0002b3da) popup_vitu2_query_window_g1_ParamLimits

0x7277,	// (0x00025118) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0002d8d0) popup_vitu2_query_window_g_ParamLimits

0x9bc4,	// (0x00027a65) bg_button_pane_cp026

0x78cb,	// (0x0002576c) popup_vitu2_query_input_button_pane_g1

0x9bc4,	// (0x00027a65) bg_button_pane_cp025

0xd991,	// (0x0002b832) popup_vitu2_query_button_pane_t1

0x5b3b,	// (0x000239dc) main_mp3_pane_t6

0x5b4b,	// (0x000239ec) popup_slider_window_cp01

0x1f4a,	// (0x0001fdeb) cam4_battery_pane

0x2024,	// (0x0001fec5) cam4_battery_pane_cp02

0x2516,	// (0x000203b7) cam4_battery_pane_cp01

0x2516,	// (0x000203b7) cam4_battery_pane_cp03

0xd90d,	// (0x0002b7ae) cam4_battery_pane_g1

0xc7b2,	// (0x0002a653) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0002d9d4) cam4_battery_pane_g

0xc67e,	// (0x0002a51f) popup_blid_sat_info2_window_t11

0xada2,	// (0x00028c43) aid_size_touch_mv_arrow_left_ParamLimits

0xadcd,	// (0x00028c6e) aid_size_touch_mv_arrow_right_ParamLimits

0xae2b,	// (0x00028ccc) navi_pane_g1_ParamLimits

0xae37,	// (0x00028cd8) navi_pane_g2_ParamLimits

0xae65,	// (0x00028d06) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0002d286) navi_pane_g_ParamLimits

0x4822,	// (0x000226c3) navi_pane_mv_t1_ParamLimits

0x6570,	// (0x00024411) grid_imed_effect_pane_ParamLimits

0x3267,	// (0x00021108) aid_placing_vt_slider_lsc

0xa597,	// (0x00028438) aid_placing_vt_slider_prt

0xa355,	// (0x000281f6) bg_tb_trans_pane_cp01_ParamLimits

0xc920,	// (0x0002a7c1) popup_image_details_window_g1_ParamLimits

0xc933,	// (0x0002a7d4) popup_image_details_window_g2_ParamLimits

0xc948,	// (0x0002a7e9) popup_image_details_window_g3_ParamLimits

0xc948,	// (0x0002a7e9) popup_image_details_window_g3

0xf72b,	// (0x0002d5cc) popup_image_details_window_g_ParamLimits

0xc95c,	// (0x0002a7fd) popup_image_details_window_t1_ParamLimits

0xc96e,	// (0x0002a80f) popup_image_details_window_t2_ParamLimits

0xc987,	// (0x0002a828) popup_image_details_window_t3_ParamLimits

0xc99b,	// (0x0002a83c) popup_image_details_window_t4_ParamLimits

0xc9b6,	// (0x0002a857) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0002d5d3) popup_image_details_window_t_ParamLimits

0x75cc,	// (0x0002546d) cl_header_name_pane_ParamLimits

0x75cc,	// (0x0002546d) cl_header_name_pane

0x78d3,	// (0x00025774) cl_header_name_pane_t1_ParamLimits

0x78d3,	// (0x00025774) cl_header_name_pane_t1

0x78ea,	// (0x0002578b) cl_header_name_pane_t2_ParamLimits

0x78ea,	// (0x0002578b) cl_header_name_pane_t2

0x7914,	// (0x000257b5) cl_header_name_pane_t3_ParamLimits

0x7914,	// (0x000257b5) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0002d9d9) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0002d9d9) cl_header_name_pane_t

0xaef4,	// (0x00028d95) navi_pane_mv_g2_ParamLimits

0xd253,	// (0x0002b0f4) field_vitu2_entry_pane_g1_ParamLimits

0xd25f,	// (0x0002b100) field_vitu2_entry_pane_g2_ParamLimits

0xd26b,	// (0x0002b10c) field_vitu2_entry_pane_g3_ParamLimits

0xd26b,	// (0x0002b10c) field_vitu2_entry_pane_g3

0xf92e,	// (0x0002d7cf) field_vitu2_entry_pane_g_ParamLimits

0x2252,	// (0x000200f3) cell_vitu2_itu_pane_g1_ParamLimits

0x2264,	// (0x00020105) cell_vitu2_itu_pane_g2_ParamLimits

0x2264,	// (0x00020105) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0002d7db) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0002d7db) cell_vitu2_itu_pane_g

0x14c8,	// (0x0001f369) bg_vkb2_func_pane_cp05_ParamLimits

0x14c8,	// (0x0001f369) bg_vkb2_func_pane_cp05

0x14c8,	// (0x0001f369) bg_vkb2_func_pane_cp03

0x14c8,	// (0x0001f369) bg_vkb2_func_pane_cp04

0x14c8,	// (0x0001f369) bg_vkb2_func_pane_cp10_ParamLimits

0x14c8,	// (0x0001f369) bg_vkb2_func_pane_cp10

0x756e,	// (0x0002540f) bg_vkb2_func_pane_cp08

0x7554,	// (0x000253f5) bg_vkb2_func_pane_cp06

0x7562,	// (0x00025403) bg_vkb2_func_pane_cp07

0xd895,	// (0x0002b736) bg_vkb2_func_pane_cp11_ParamLimits

0xd895,	// (0x0002b736) bg_vkb2_func_pane_cp11

0xd8aa,	// (0x0002b74b) bg_vkb2_func_pane_cp12_ParamLimits

0xd8aa,	// (0x0002b74b) bg_vkb2_func_pane_cp12

0x9bc4,	// (0x00027a65) bg_vkb2_func_pane_cp09

0xd2a8,	// (0x0002b149) bg_vkb2_func_pane_g1

0xa759,	// (0x000285fa) bg_vkb2_func_pane_g2

0xd2b0,	// (0x0002b151) bg_vkb2_func_pane_g3

0xd2b8,	// (0x0002b159) bg_vkb2_func_pane_g4

0xd4fe,	// (0x0002b39f) bg_vkb2_func_pane_g5

0xd2d0,	// (0x0002b171) bg_vkb2_func_pane_g6

0xd2d8,	// (0x0002b179) bg_vkb2_func_pane_g7

0xd2c8,	// (0x0002b169) bg_vkb2_func_pane_g8

0xa739,	// (0x000285da) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0002d9e0) bg_vkb2_func_pane_g

0x7822,	// (0x000256c3) blid2_tripm_pane_g6_ParamLimits

0x7822,	// (0x000256c3) blid2_tripm_pane_g6

0xd0d9,	// (0x0002af7a) mp4_progress_pane_g1

0x787c,	// (0x0002571d) blid2_tripm_values_pane_ParamLimits

0x787c,	// (0x0002571d) blid2_tripm_values_pane

0x7939,	// (0x000257da) blid2_tripm_values_pane_t1

0x7947,	// (0x000257e8) blid2_tripm_values_pane_t2

0x7955,	// (0x000257f6) blid2_tripm_values_pane_t3

0x7963,	// (0x00025804) blid2_tripm_values_pane_t4

0x7971,	// (0x00025812) blid2_tripm_values_pane_t5

0x797f,	// (0x00025820) blid2_tripm_values_pane_t6

0x798d,	// (0x0002582e) blid2_tripm_values_pane_t7

0x799b,	// (0x0002583c) blid2_tripm_values_pane_t8

0x79a9,	// (0x0002584a) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0002d9f3) blid2_tripm_values_pane_t

0x32a7,	// (0x00021148) call_video_pane_t1_ParamLimits

0x32c8,	// (0x00021169) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002d10f) call_video_pane_t_ParamLimits

0x4d49,	// (0x00022bea) msg_header_pane_g1_ParamLimits

0xb0ce,	// (0x00028f6f) msg_header_pane_g2_ParamLimits

0xb0ce,	// (0x00028f6f) msg_header_pane_g2

0x0001,

0xf488,	// (0x0002d329) msg_header_pane_g_ParamLimits

0xf488,	// (0x0002d329) msg_header_pane_g

0xa30d,	// (0x000281ae) main_clock2_pane_ParamLimits

0x639b,	// (0x0002423c) grid_clock2_toolbar_pane_ParamLimits

0x639b,	// (0x0002423c) grid_clock2_toolbar_pane

0x639b,	// (0x0002423c) listscroll_clock2_pane_ParamLimits

0x639b,	// (0x0002423c) listscroll_clock2_pane

0x6445,	// (0x000242e6) main_clock2_pane_t3_ParamLimits

0x6445,	// (0x000242e6) main_clock2_pane_t3

0x6457,	// (0x000242f8) main_clock2_pane_t4_ParamLimits

0x6457,	// (0x000242f8) main_clock2_pane_t4

0xd99f,	// (0x0002b840) cell_clock2_toolbar_pane

0xd9a7,	// (0x0002b848) cell_clock2_toolbar_pane_cp01

0xd9a7,	// (0x0002b848) cell_clock2_toolbar_pane_cp02

0xd9af,	// (0x0002b850) cell_clock2_toolbar_pane_cp03

0xd9b7,	// (0x0002b858) list_clock2_pane

0xad27,	// (0x00028bc8) scroll_pane_cp10

0xd9bf,	// (0x0002b860) list_single_clock2_pane_ParamLimits

0xd9bf,	// (0x0002b860) list_single_clock2_pane

0xa500,	// (0x000283a1) list_highlight_pane_cp08

0xd9cc,	// (0x0002b86d) list_single_clock2_pane_t1

0xd9da,	// (0x0002b87b) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0002da06) list_single_clock2_pane_t

0x9bc4,	// (0x00027a65) bg_button_pane_cp10

0xd9e8,	// (0x0002b889) cell_clock2_toolbar_pane_g1

0x1463,	// (0x0001f304) aid_main_viewer_pane_g1_ParamLimits

0x1463,	// (0x0001f304) aid_main_viewer_pane_g1

0x146f,	// (0x0001f310) aid_main_viewer_pane_g2_ParamLimits

0x146f,	// (0x0001f310) aid_main_viewer_pane_g2

0x4dce,	// (0x00022c6f) aid_main_viewer_pane_g3_ParamLimits

0x4dce,	// (0x00022c6f) aid_main_viewer_pane_g3

0x4ddf,	// (0x00022c80) aid_main_viewer_pane_g4_ParamLimits

0x4ddf,	// (0x00022c80) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0002d33a) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0002d33a) aid_main_viewer_pane_g

0x14bb,	// (0x0001f35c) main_calc_pane_ParamLimits

0x14d6,	// (0x0001f377) main_dialer2_pane_ParamLimits

0x1072,	// (0x0001ef13) main_cam6_pane

0x1072,	// (0x0001ef13) main_vid6_pane

0x63a7,	// (0x00024248) listscroll_gen_pane_cp06_ParamLimits

0x63a7,	// (0x00024248) listscroll_gen_pane_cp06

0x6469,	// (0x0002430a) main_clock2_pane_t5_ParamLimits

0x6469,	// (0x0002430a) main_clock2_pane_t5

0x64b2,	// (0x00024353) aid_call2_pane_cp10_ParamLimits

0x64c4,	// (0x00024365) aid_call_pane_cp10_ParamLimits

0xad96,	// (0x00028c37) popup_clock_analogue_window_cp10_g1_ParamLimits

0xad96,	// (0x00028c37) popup_clock_analogue_window_cp10_g2_ParamLimits

0x64d6,	// (0x00024377) popup_clock_analogue_window_cp10_g3_ParamLimits

0x64d6,	// (0x00024377) popup_clock_analogue_window_cp10_g4_ParamLimits

0xad96,	// (0x00028c37) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0002d688) popup_clock_analogue_window_cp10_g_ParamLimits

0x64e8,	// (0x00024389) popup_clock_analogue_window_cp10_t1_ParamLimits

0x68dd,	// (0x0002477e) cell_dialer2_keypad_pane_g2_ParamLimits

0x68dd,	// (0x0002477e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0002d76e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0002d76e) cell_dialer2_keypad_pane_g

0x68f9,	// (0x0002479a) cell_dialer2_keypad_pane_t1

0x6d38,	// (0x00024bd9) main_cset_text2_pane_ParamLimits

0x6d38,	// (0x00024bd9) main_cset_text2_pane

0xd737,	// (0x0002b5d8) area_vitu2_query_pane_g1_ParamLimits

0x74f3,	// (0x00025394) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0002d923) area_vitu2_query_pane_g_ParamLimits

0xd7bb,	// (0x0002b65c) area_vitu2_query_pane_t7_ParamLimits

0xd7bb,	// (0x0002b65c) area_vitu2_query_pane_t7

0x7554,	// (0x000253f5) bg_button_pane_cp018_ParamLimits

0x7562,	// (0x00025403) bg_button_pane_cp021_ParamLimits

0x756e,	// (0x0002540f) bg_button_pane_cp022_ParamLimits

0x756e,	// (0x0002540f) bg_vkb2_func_pane_cp08_ParamLimits

0x7554,	// (0x000253f5) bg_vkb2_func_pane_cp06_ParamLimits

0x7562,	// (0x00025403) bg_vkb2_func_pane_cp07_ParamLimits

0x757f,	// (0x00025420) input_focus_pane_cp09_ParamLimits

0x25ba,	// (0x0002045b) cam6_autofocus_pane_ParamLimits

0x25ba,	// (0x0002045b) cam6_autofocus_pane

0x25dc,	// (0x0002047d) cam6_image_uncrop_pane_ParamLimits

0x25dc,	// (0x0002047d) cam6_image_uncrop_pane

0x2609,	// (0x000204aa) cam6_indi_pane_ParamLimits

0x2609,	// (0x000204aa) cam6_indi_pane

0x2623,	// (0x000204c4) cam6_mode_pane_ParamLimits

0x2623,	// (0x000204c4) cam6_mode_pane

0x2637,	// (0x000204d8) cam6_timer_pane_ParamLimits

0x2637,	// (0x000204d8) cam6_timer_pane

0x2648,	// (0x000204e9) cam6_zoom_pane_ParamLimits

0x2648,	// (0x000204e9) cam6_zoom_pane

0x79b7,	// (0x00025858) cam6_mode_pane_g1_ParamLimits

0x79b7,	// (0x00025858) cam6_mode_pane_g1

0x79c3,	// (0x00025864) cam6_mode_pane_g2_ParamLimits

0x79c3,	// (0x00025864) cam6_mode_pane_g2

0x79cf,	// (0x00025870) cam6_mode_pane_g3_ParamLimits

0x79cf,	// (0x00025870) cam6_mode_pane_g3

0x79db,	// (0x0002587c) cam6_mode_pane_g4_ParamLimits

0x79db,	// (0x0002587c) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0002da0b) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0002da0b) cam6_mode_pane_g

0xd14b,	// (0x0002afec) bg_tb_trans_pane_cp08_ParamLimits

0xd14b,	// (0x0002afec) bg_tb_trans_pane_cp08

0xd9f0,	// (0x0002b891) cam6_battery_pane_ParamLimits

0xd9f0,	// (0x0002b891) cam6_battery_pane

0xda06,	// (0x0002b8a7) cam6_indi_pane_g1_ParamLimits

0xda06,	// (0x0002b8a7) cam6_indi_pane_g1

0xda18,	// (0x0002b8b9) cam6_indi_pane_g2_ParamLimits

0xda18,	// (0x0002b8b9) cam6_indi_pane_g2

0xda2a,	// (0x0002b8cb) cam6_indi_pane_g3_ParamLimits

0xda2a,	// (0x0002b8cb) cam6_indi_pane_g3

0x0002,

0x09de,	// (0x0001e87f) cam6_indi_pane_g_ParamLimits

0x09de,	// (0x0001e87f) cam6_indi_pane_g

0xda3c,	// (0x0002b8dd) cam6_indi_pane_t1_ParamLimits

0xda3c,	// (0x0002b8dd) cam6_indi_pane_t1

0x6a38,	// (0x000248d9) cam6_autofocus_pane_g1

0x6a30,	// (0x000248d1) cam6_autofocus_pane_g2

0x6a48,	// (0x000248e9) cam6_autofocus_pane_g3

0x6a40,	// (0x000248e1) cam6_autofocus_pane_g4

0x0003,

0xfb73,	// (0x0002da14) cam6_autofocus_pane_g

0xda62,	// (0x0002b903) cam6_timer_pane_g1

0xda6a,	// (0x0002b90b) cam6_timer_pane_t1

0xda78,	// (0x0002b919) cam6_zoom_cont_pane

0xda80,	// (0x0002b921) cam6_zoom_pane_g1

0xda88,	// (0x0002b929) cam6_zoom_pane_g2

0x79e7,	// (0x00025888) cam6_zoom_pane_g3

0x0002,

0xfb7c,	// (0x0002da1d) cam6_zoom_pane_g

0xc7b2,	// (0x0002a653) cam6_battery_pane_g1

0xc7b2,	// (0x0002a653) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0002d590) cam6_battery_pane_g

0xda90,	// (0x0002b931) cam6_zoom_cont_pane_g1

0xda99,	// (0x0002b93a) cam6_zoom_cont_pane_g2

0xdaa2,	// (0x0002b943) cam6_zoom_cont_pane_g3

0x0002,

0x09f5,	// (0x0001e896) cam6_zoom_cont_pane_g

0x7a04,	// (0x000258a5) cam6_mode_pane_cp_ParamLimits

0x7a04,	// (0x000258a5) cam6_mode_pane_cp

0x7a18,	// (0x000258b9) cam6_zoom_pane_cp_ParamLimits

0x7a18,	// (0x000258b9) cam6_zoom_pane_cp

0x7a30,	// (0x000258d1) vid6_image_uncrop_cif_pane_ParamLimits

0x7a30,	// (0x000258d1) vid6_image_uncrop_cif_pane

0x7a5c,	// (0x000258fd) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a5c,	// (0x000258fd) vid6_image_uncrop_nhd_pane

0x7a79,	// (0x0002591a) vid6_image_uncrop_vga_pane_ParamLimits

0x7a79,	// (0x0002591a) vid6_image_uncrop_vga_pane

0x7a98,	// (0x00025939) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a98,	// (0x00025939) vid6_image_uncrop_wvga_pane

0x7ab5,	// (0x00025956) vid6_indi_pane_ParamLimits

0x7ab5,	// (0x00025956) vid6_indi_pane

0xd14b,	// (0x0002afec) bg_tb_trans_pane_cp09_ParamLimits

0xd14b,	// (0x0002afec) bg_tb_trans_pane_cp09

0xdaba,	// (0x0002b95b) cam6_battery_pane_cp_ParamLimits

0xdaba,	// (0x0002b95b) cam6_battery_pane_cp

0xdac6,	// (0x0002b967) vid6_indi_pane_g1_ParamLimits

0xdac6,	// (0x0002b967) vid6_indi_pane_g1

0xdad8,	// (0x0002b979) vid6_indi_pane_g2_ParamLimits

0xdad8,	// (0x0002b979) vid6_indi_pane_g2

0xdaea,	// (0x0002b98b) vid6_indi_pane_g3_ParamLimits

0xdaea,	// (0x0002b98b) vid6_indi_pane_g3

0xdaff,	// (0x0002b9a0) vid6_indi_pane_g4_ParamLimits

0xdaff,	// (0x0002b9a0) vid6_indi_pane_g4

0xdb14,	// (0x0002b9b5) vid6_indi_pane_g5_ParamLimits

0xdb14,	// (0x0002b9b5) vid6_indi_pane_g5

0x0004,

0x09fc,	// (0x0001e89d) vid6_indi_pane_g_ParamLimits

0x09fc,	// (0x0001e89d) vid6_indi_pane_g

0xdb2e,	// (0x0002b9cf) vid6_indi_pane_t1_ParamLimits

0xdb2e,	// (0x0002b9cf) vid6_indi_pane_t1

0xdb44,	// (0x0002b9e5) vid6_indi_pane_t2_ParamLimits

0xdb44,	// (0x0002b9e5) vid6_indi_pane_t2

0xdb6c,	// (0x0002ba0d) vid6_indi_pane_t3_ParamLimits

0xdb6c,	// (0x0002ba0d) vid6_indi_pane_t3

0xdb94,	// (0x0002ba35) vid6_indi_pane_t4_ParamLimits

0xdb94,	// (0x0002ba35) vid6_indi_pane_t4

0x0003,

0x0a07,	// (0x0001e8a8) vid6_indi_pane_t_ParamLimits

0x0a07,	// (0x0001e8a8) vid6_indi_pane_t

0xdbb8,	// (0x0002ba59) wait_bar_pane_cp08

0x7ad8,	// (0x00025979) main_cset_text2_pane_t1_ParamLimits

0x7ad8,	// (0x00025979) main_cset_text2_pane_t1

0x79ef,	// (0x00025890) listscroll_gen_pane_cp06_t1_ParamLimits

0x79ef,	// (0x00025890) listscroll_gen_pane_cp06_t1

0x1072,	// (0x0001ef13) main_cam6_set_pane

0x1f3c,	// (0x0001fddd) bg_tb_trans_pane_cp06_ParamLimits

0x1f52,	// (0x0001fdf3) cam4_indicators_pane_g1_ParamLimits

0x1f63,	// (0x0001fe04) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0002d7ab) cam4_indicators_pane_g_ParamLimits

0x1f7b,	// (0x0001fe1c) cam4_indicators_pane_t1_ParamLimits

0x14c8,	// (0x0001f369) bg_tb_trans_pane_cp07_ParamLimits

0x202c,	// (0x0001fecd) vid4_indicators_pane_g1_ParamLimits

0x2040,	// (0x0001fee1) vid4_indicators_pane_g2_ParamLimits

0x2054,	// (0x0001fef5) vid4_indicators_pane_g3_ParamLimits

0x2065,	// (0x0001ff06) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0002d7bd) vid4_indicators_pane_g_ParamLimits

0x2081,	// (0x0001ff22) vid4_indicators_pane_t1_ParamLimits

0x251e,	// (0x000203bf) vid4_progress_pane_g1_ParamLimits

0x252e,	// (0x000203cf) vid4_progress_pane_g2_ParamLimits

0x253e,	// (0x000203df) vid4_progress_pane_g3_ParamLimits

0x2550,	// (0x000203f1) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0002d96e) vid4_progress_pane_g_ParamLimits

0x2568,	// (0x00020409) vid4_progress_pane_t1_ParamLimits

0x257e,	// (0x0002041f) vid4_progress_pane_t2_ParamLimits

0x2593,	// (0x00020434) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0002d979) vid4_progress_pane_t_ParamLimits

0x25a9,	// (0x0002044a) wait_bar_pane_cp07_ParamLimits

0x7b0f,	// (0x000259b0) main_cam6_set_pane_g2_ParamLimits

0x7b0f,	// (0x000259b0) main_cam6_set_pane_g2

0x7b1b,	// (0x000259bc) main_cset6_listscroll_pane_ParamLimits

0x7b1b,	// (0x000259bc) main_cset6_listscroll_pane

0x7b46,	// (0x000259e7) main_cset6_slider_pane_ParamLimits

0x7b46,	// (0x000259e7) main_cset6_slider_pane

0x7b52,	// (0x000259f3) main_cset6_text2_pane_ParamLimits

0x7b52,	// (0x000259f3) main_cset6_text2_pane

0xdbc7,	// (0x0002ba68) main_cset6_text_pane

0xdbcf,	// (0x0002ba70) main_cset_list_pane_copy1_ParamLimits

0xdbcf,	// (0x0002ba70) main_cset_list_pane_copy1

0xdbdf,	// (0x0002ba80) scroll_pane_cp028_copy1

0x7b65,	// (0x00025a06) cset_list_set_pane_copy1

0x7b7b,	// (0x00025a1c) aid_position_infowindow_above_copy1

0x7b83,	// (0x00025a24) aid_position_infowindow_below_copy1

0xdbe8,	// (0x0002ba89) cset_list_set_pane_g1_copy1

0xdbf0,	// (0x0002ba91) cset_list_set_pane_g3_copy1_ParamLimits

0xdbf0,	// (0x0002ba91) cset_list_set_pane_g3_copy1

0xdbff,	// (0x0002baa0) cset_list_set_pane_t1_copy1_ParamLimits

0xdbff,	// (0x0002baa0) cset_list_set_pane_t1_copy1

0xa355,	// (0x000281f6) list_highlight_pane_cp021_copy1_ParamLimits

0xa355,	// (0x000281f6) list_highlight_pane_cp021_copy1

0xdc14,	// (0x0002bab5) cset6_slider_pane_ParamLimits

0xdc14,	// (0x0002bab5) cset6_slider_pane

0xdc40,	// (0x0002bae1) main_cset6_slider_pane_g1_ParamLimits

0xdc40,	// (0x0002bae1) main_cset6_slider_pane_g1

0x7b8b,	// (0x00025a2c) main_cset6_slider_pane_g2_ParamLimits

0x7b8b,	// (0x00025a2c) main_cset6_slider_pane_g2

0xdc68,	// (0x0002bb09) main_cset6_slider_pane_g3_ParamLimits

0xdc68,	// (0x0002bb09) main_cset6_slider_pane_g3

0x7bb3,	// (0x00025a54) main_cset6_slider_pane_g4_ParamLimits

0x7bb3,	// (0x00025a54) main_cset6_slider_pane_g4

0x7bbf,	// (0x00025a60) main_cset6_slider_pane_g5_ParamLimits

0x7bbf,	// (0x00025a60) main_cset6_slider_pane_g5

0xd3d7,	// (0x0002b278) main_cset6_slider_pane_g7_ParamLimits

0xd3d7,	// (0x0002b278) main_cset6_slider_pane_g7

0xd3e3,	// (0x0002b284) main_cset6_slider_pane_g8_ParamLimits

0xd3e3,	// (0x0002b284) main_cset6_slider_pane_g8

0x7bcd,	// (0x00025a6e) main_cset6_slider_pane_g9_ParamLimits

0x7bcd,	// (0x00025a6e) main_cset6_slider_pane_g9

0x7bd9,	// (0x00025a7a) main_cset6_slider_pane_g10_ParamLimits

0x7bd9,	// (0x00025a7a) main_cset6_slider_pane_g10

0x7be5,	// (0x00025a86) main_cset6_slider_pane_g11_ParamLimits

0x7be5,	// (0x00025a86) main_cset6_slider_pane_g11

0x7bf1,	// (0x00025a92) main_cset6_slider_pane_g12_ParamLimits

0x7bf1,	// (0x00025a92) main_cset6_slider_pane_g12

0xd462,	// (0x0002b303) main_cset6_slider_pane_g13_ParamLimits

0xd462,	// (0x0002b303) main_cset6_slider_pane_g13

0xd46e,	// (0x0002b30f) main_cset6_slider_pane_g14_ParamLimits

0xd46e,	// (0x0002b30f) main_cset6_slider_pane_g14

0x7bfd,	// (0x00025a9e) main_cset6_slider_pane_g15_ParamLimits

0x7bfd,	// (0x00025a9e) main_cset6_slider_pane_g15

0x7c15,	// (0x00025ab6) main_cset6_slider_pane_g16_ParamLimits

0x7c15,	// (0x00025ab6) main_cset6_slider_pane_g16

0x7c23,	// (0x00025ac4) main_cset6_slider_pane_g17_ParamLimits

0x7c23,	// (0x00025ac4) main_cset6_slider_pane_g17

0x0011,

0xfb83,	// (0x0002da24) main_cset6_slider_pane_g_ParamLimits

0xfb83,	// (0x0002da24) main_cset6_slider_pane_g

0xdc80,	// (0x0002bb21) main_cset6_slider_pane_t1_ParamLimits

0xdc80,	// (0x0002bb21) main_cset6_slider_pane_t1

0x7c3d,	// (0x00025ade) main_cset6_slider_pane_t2_ParamLimits

0x7c3d,	// (0x00025ade) main_cset6_slider_pane_t2

0x7c68,	// (0x00025b09) main_cset6_slider_pane_t3_ParamLimits

0x7c68,	// (0x00025b09) main_cset6_slider_pane_t3

0x7c93,	// (0x00025b34) main_cset6_slider_pane_t4_ParamLimits

0x7c93,	// (0x00025b34) main_cset6_slider_pane_t4

0x7cbe,	// (0x00025b5f) main_cset6_slider_pane_t5_ParamLimits

0x7cbe,	// (0x00025b5f) main_cset6_slider_pane_t5

0xdcc1,	// (0x0002bb62) main_cset6_slider_pane_t7_ParamLimits

0xdcc1,	// (0x0002bb62) main_cset6_slider_pane_t7

0x7ceb,	// (0x00025b8c) main_cset6_slider_pane_t8_ParamLimits

0x7ceb,	// (0x00025b8c) main_cset6_slider_pane_t8

0x7d0f,	// (0x00025bb0) main_cset6_slider_pane_t9_ParamLimits

0x7d0f,	// (0x00025bb0) main_cset6_slider_pane_t9

0x7d33,	// (0x00025bd4) main_cset6_slider_pane_t10_ParamLimits

0x7d33,	// (0x00025bd4) main_cset6_slider_pane_t10

0x7d57,	// (0x00025bf8) main_cset6_slider_pane_t11_ParamLimits

0x7d57,	// (0x00025bf8) main_cset6_slider_pane_t11

0xdcf7,	// (0x0002bb98) main_cset6_slider_pane_t14_ParamLimits

0xdcf7,	// (0x0002bb98) main_cset6_slider_pane_t14

0xdd30,	// (0x0002bbd1) main_cset6_slider_pane_t15_ParamLimits

0xdd30,	// (0x0002bbd1) main_cset6_slider_pane_t15

0x000b,

0xfba8,	// (0x0002da49) main_cset6_slider_pane_t_ParamLimits

0xfba8,	// (0x0002da49) main_cset6_slider_pane_t

0xcff6,	// (0x0002ae97) cset_slider_pane_g1_copy1

0xd5af,	// (0x0002b450) cset_slider_pane_g2_copy1

0xd5b8,	// (0x0002b459) cset_slider_pane_g3_copy1

0x9bc4,	// (0x00027a65) bg_popup_sub_pane_cp011_copy1

0xdd69,	// (0x0002bc0a) main_cset_text_pane_g1_copy1

0xd54d,	// (0x0002b3ee) main_cset_text_pane_t1_copy1

0xd55b,	// (0x0002b3fc) main_cset_text_pane_t2_copy1

0xd569,	// (0x0002b40a) main_cset_text_pane_t3_copy1

0xd577,	// (0x0002b418) main_cset_text_pane_t4_copy1

0xd585,	// (0x0002b426) main_cset_text_pane_t5_copy1

0xdd71,	// (0x0002bc12) main_cset_text_pane_t6_copy1

0xdd7f,	// (0x0002bc20) main_cset_text_pane_t7_copy1

0x7e4c,	// (0x00025ced) main_cset_text2_pane_t1_copy1

0x14c8,	// (0x0001f369) main_ncimui_pane

0x1527,	// (0x0001f3c8) popup_query_ncimui_window_ParamLimits

0x1527,	// (0x0001f3c8) popup_query_ncimui_window

0xcaa1,	// (0x0002a942) field_cale_ev2_pane_g4_ParamLimits

0xcaa1,	// (0x0002a942) field_cale_ev2_pane_g4

0x687d,	// (0x0002471e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x687d,	// (0x0002471e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0002d749) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0002d749) cell_video_dialer_keypad_pane_g

0x6895,	// (0x00024736) cell_video_dialer_keypad_pane_t1

0x9bc4,	// (0x00027a65) bg_popup_window_pane_cp012

0xac12,	// (0x00028ab3) heading_pane_cp06

0xddab,	// (0x0002bc4c) ncim_query_content_pane

0x9bc4,	// (0x00027a65) bg_popup_heading_pane_cp01

0xddb3,	// (0x0002bc54) ncim_heading_pane_t1

0xddc1,	// (0x0002bc62) ncim_indicator_popup_pane

0xddd3,	// (0x0002bc74) ncim_query_button_pane

0xdde7,	// (0x0002bc88) ncim_query_content_pane_t1

0xddf9,	// (0x0002bc9a) ncim_query_content_pane_t2

0x0005,

0xfbec,	// (0x0002da8d) ncim_query_content_pane_t

0xde33,	// (0x0002bcd4) ncim_query_list_pane

0xde45,	// (0x0002bce6) ncim_query_popup_pane

0xddc1,	// (0x0002bc62) ncim_indicator_popup_pane_ParamLimits

0x7fa0,	// (0x00025e41) ncim_query_content_pane_g1_ParamLimits

0x7fa0,	// (0x00025e41) ncim_query_content_pane_g1

0xdde7,	// (0x0002bc88) ncim_query_content_pane_t1_ParamLimits

0xddf9,	// (0x0002bc9a) ncim_query_content_pane_t2_ParamLimits

0x7fac,	// (0x00025e4d) ncim_query_content_pane_t3_ParamLimits

0x7fac,	// (0x00025e4d) ncim_query_content_pane_t3

0x7fc9,	// (0x00025e6a) ncim_query_content_pane_t4_ParamLimits

0x7fc9,	// (0x00025e6a) ncim_query_content_pane_t4

0x7fe6,	// (0x00025e87) ncim_query_content_pane_t5_ParamLimits

0x7fe6,	// (0x00025e87) ncim_query_content_pane_t5

0xde0b,	// (0x0002bcac) ncim_query_content_pane_t6_ParamLimits

0xde0b,	// (0x0002bcac) ncim_query_content_pane_t6

0xfbec,	// (0x0002da8d) ncim_query_content_pane_t_ParamLimits

0xde33,	// (0x0002bcd4) ncim_query_list_pane_ParamLimits

0xde45,	// (0x0002bce6) ncim_query_popup_pane_ParamLimits

0xde59,	// (0x0002bcfa) wait_bar_pane_cp04

0x9bc4,	// (0x00027a65) input_focus_pane_cp011

0xde61,	// (0x0002bd02) ncim_query_popup_pane_t1

0xde6f,	// (0x0002bd10) ncim_list_query_list_pane_ParamLimits

0xde6f,	// (0x0002bd10) ncim_list_query_list_pane

0x9bc4,	// (0x00027a65) bg_button_pane_cp027

0xde7c,	// (0x0002bd1d) ncim_query_button_pane_g1

0x9bc4,	// (0x00027a65) list_highlight_pane_cp012

0xde86,	// (0x0002bd27) ncim_list_query_list_pane_g1

0xde8e,	// (0x0002bd2f) ncim_list_query_list_pane_t1

0x1f6f,	// (0x0001fe10) cam4_indicators_pane_g3_ParamLimits

0x1f6f,	// (0x0001fe10) cam4_indicators_pane_g3

0x2071,	// (0x0001ff12) vid4_indicators_pane_g5_ParamLimits

0x2071,	// (0x0001ff12) vid4_indicators_pane_g5

0x255c,	// (0x000203fd) vid4_progress_pane_g5_ParamLimits

0x255c,	// (0x000203fd) vid4_progress_pane_g5

0x7e8c,	// (0x00025d2d) main_ncimui_pane_g1

0x7ef4,	// (0x00025d95) ncimui_group_query_pane_ParamLimits

0x7ef4,	// (0x00025d95) ncimui_group_query_pane

0x7f3c,	// (0x00025ddd) ncimui_list_pane_ParamLimits

0x7f3c,	// (0x00025ddd) ncimui_list_pane

0x7f63,	// (0x00025e04) ncimui_text_pane_ParamLimits

0x7f63,	// (0x00025e04) ncimui_text_pane

0x8003,	// (0x00025ea4) ncimui_text_pane_t1_ParamLimits

0x8003,	// (0x00025ea4) ncimui_text_pane_t1

0xde9c,	// (0x0002bd3d) ncimui_list_single_graphic_pane_ParamLimits

0xde9c,	// (0x0002bd3d) ncimui_list_single_graphic_pane

0x8022,	// (0x00025ec3) ncimui_query_pane_ParamLimits

0x8022,	// (0x00025ec3) ncimui_query_pane

0x9bc4,	// (0x00027a65) list_highlight_pane_cp013

0xdeac,	// (0x0002bd4d) ncim_list_query_list_pane_t1_copy1

0xdeba,	// (0x0002bd5b) ncim_list_single_graphic_pane_g1

0x8035,	// (0x00025ed6) ncim_query_button_pane_cp01

0x8041,	// (0x00025ee2) ncim_query_entry_pane_ParamLimits

0x8041,	// (0x00025ee2) ncim_query_entry_pane

0x8054,	// (0x00025ef5) ncimui_query_pane_g1

0x8060,	// (0x00025f01) ncimui_query_pane_t1_ParamLimits

0x8060,	// (0x00025f01) ncimui_query_pane_t1

0xa355,	// (0x000281f6) input_focus_pane_cp012

0xdec2,	// (0x0002bd63) ncim_query_entry_pane_t1

0xa30d,	// (0x000281ae) main_im_pane_ParamLimits

0x14c8,	// (0x0001f369) main_mobtv_pane_ParamLimits

0x14c8,	// (0x0001f369) main_mobtv_pane

0x7c31,	// (0x00025ad2) main_cset6_slider_pane_g18_ParamLimits

0x7c31,	// (0x00025ad2) main_cset6_slider_pane_g18

0xdc74,	// (0x0002bb15) main_cset6_slider_pane_g19_ParamLimits

0xdc74,	// (0x0002bb15) main_cset6_slider_pane_g19

0xd26b,	// (0x0002b10c) bg_main_mobtv_pane_ParamLimits

0xd26b,	// (0x0002b10c) bg_main_mobtv_pane

0x8079,	// (0x00025f1a) main_mobtv_info_pane

0x8084,	// (0x00025f25) main_mobtv_loading_pane_ParamLimits

0x8084,	// (0x00025f25) main_mobtv_loading_pane

0xded4,	// (0x0002bd75) main_mobtv_pg_channel_list_pane

0xdede,	// (0x0002bd7f) main_mobtv_pg_hdr_pane

0x8091,	// (0x00025f32) main_mobtv_programe_curr_pane_ParamLimits

0x8091,	// (0x00025f32) main_mobtv_programe_curr_pane

0x809e,	// (0x00025f3f) main_mobtv_programe_next_pane_ParamLimits

0x809e,	// (0x00025f3f) main_mobtv_programe_next_pane

0xdee7,	// (0x0002bd88) popup_mobtv_noti_window

0xc7b2,	// (0x0002a653) main_tv_pg_hdr_pane_g1

0xdeef,	// (0x0002bd90) main_tv_pg_hdr_pane_g2

0xdef7,	// (0x0002bd98) main_tv_pg_hdr_pane_g3

0xdeff,	// (0x0002bda0) main_tv_pg_hdr_pane_g4

0xdf07,	// (0x0002bda8) main_tv_pg_hdr_pane_g5

0xdf11,	// (0x0002bdb2) main_tv_pg_hdr_pane_g6

0xdf1b,	// (0x0002bdbc) main_tv_pg_hdr_pane_g7

0xdf25,	// (0x0002bdc6) main_tv_pg_hdr_pane_g8

0xdf2f,	// (0x0002bdd0) main_tv_pg_hdr_pane_g9

0xdf39,	// (0x0002bdda) main_tv_pg_hdr_pane_g10

0xdf43,	// (0x0002bde4) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf9,	// (0x0002da9a) main_tv_pg_hdr_pane_g

0xdf4d,	// (0x0002bdee) main_tv_pg_hdr_pane_t1

0xdf5b,	// (0x0002bdfc) main_tv_pg_hdr_pane_t2

0xdf69,	// (0x0002be0a) main_tv_pg_hdr_pane_t3

0xdf79,	// (0x0002be1a) main_tv_pg_hdr_pane_t4

0xdf89,	// (0x0002be2a) main_tv_pg_hdr_pane_t5

0x0004,

0x0a9d,	// (0x0001e93e) main_tv_pg_hdr_pane_t

0xdf99,	// (0x0002be3a) single_mobtv_pg_channel_pane_ParamLimits

0xdf99,	// (0x0002be3a) single_mobtv_pg_channel_pane

0xdfab,	// (0x0002be4c) single_mobtv_pg_channel_table_pane

0xa85c,	// (0x000286fd) single_mobtv_pg_channel_thumb_pane

0xdfb4,	// (0x0002be55) single_tv_pg_channel_pane_g1

0xdfbd,	// (0x0002be5e) single_tv_pg_channel_pane_g2

0x0001,

0x0aa8,	// (0x0001e949) single_tv_pg_channel_pane_g

0xca00,	// (0x0002a8a1) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca00,	// (0x0002a8a1) bg_single_mobtv_pg_channel_thumb_pane

0xdfc6,	// (0x0002be67) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfc6,	// (0x0002be67) single_mobtv_pg_channel_thumb_pane_g1

0xdfd4,	// (0x0002be75) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfd4,	// (0x0002be75) single_mobtv_pg_channel_thumb_pane_g2

0xdfe0,	// (0x0002be81) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfe0,	// (0x0002be81) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0aad,	// (0x0001e94e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0aad,	// (0x0001e94e) single_mobtv_pg_channel_thumb_pane_g

0xdfec,	// (0x0002be8d) single_mobtv_pg_channel_thumb_pane_t1

0xdffa,	// (0x0002be9b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0ab4,	// (0x0001e955) single_mobtv_pg_channel_thumb_pane_t

0xc7b2,	// (0x0002a653) bg_single_mobtv_pg_channel_table_pane_g1

0xc7b2,	// (0x0002a653) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0002d590) bg_single_mobtv_pg_channel_table_pane_g

0xe008,	// (0x0002bea9) single_mobtv_pg_channel_table_pane_t1

0xe016,	// (0x0002beb7) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0ab9,	// (0x0001e95a) single_mobtv_pg_channel_table_pane_t

0x80b3,	// (0x00025f54) main_mobtv_info_pane_g1_ParamLimits

0x80b3,	// (0x00025f54) main_mobtv_info_pane_g1

0x80cf,	// (0x00025f70) main_mobtv_info_pane_t1_ParamLimits

0x80cf,	// (0x00025f70) main_mobtv_info_pane_t1

0x8147,	// (0x00025fe8) main_mobtv_info_pane_t2_ParamLimits

0x8147,	// (0x00025fe8) main_mobtv_info_pane_t2

0x0002,

0xfc15,	// (0x0002dab6) main_mobtv_info_pane_t_ParamLimits

0xfc15,	// (0x0002dab6) main_mobtv_info_pane_t

0x81d6,	// (0x00026077) wait_bar_pane_cp05

0x81e8,	// (0x00026089) main_mobtv_loading_pane_g1_ParamLimits

0x81e8,	// (0x00026089) main_mobtv_loading_pane_g1

0x81f6,	// (0x00026097) main_mobtv_loading_pane_g2_ParamLimits

0x81f6,	// (0x00026097) main_mobtv_loading_pane_g2

0x8202,	// (0x000260a3) main_mobtv_loading_pane_g3_ParamLimits

0x8202,	// (0x000260a3) main_mobtv_loading_pane_g3

0x0002,

0xfc1c,	// (0x0002dabd) main_mobtv_loading_pane_g_ParamLimits

0xfc1c,	// (0x0002dabd) main_mobtv_loading_pane_g

0xe024,	// (0x0002bec5) main_mobtv_loading_pane_t1_ParamLimits

0xe024,	// (0x0002bec5) main_mobtv_loading_pane_t1

0xe03c,	// (0x0002bedd) main_mobtv_loading_pane_t2_ParamLimits

0xe03c,	// (0x0002bedd) main_mobtv_loading_pane_t2

0x0001,

0x0ad1,	// (0x0001e972) main_mobtv_loading_pane_t_ParamLimits

0x0ad1,	// (0x0001e972) main_mobtv_loading_pane_t

0x8210,	// (0x000260b1) wait_bar_pane_cp06_ParamLimits

0x8210,	// (0x000260b1) wait_bar_pane_cp06

0xe060,	// (0x0002bf01) main_mobtv_programe_curr_pane_t1

0xe06e,	// (0x0002bf0f) main_mobtv_programe_curr_pane_t2

0x0001,

0x0ad6,	// (0x0001e977) main_mobtv_programe_curr_pane_t

0xe07c,	// (0x0002bf1d) main_mobtv_programe_next_pane_t1

0xe08a,	// (0x0002bf2b) main_mobtv_programe_next_pane_t2

0xe098,	// (0x0002bf39) main_mobtv_programe_next_pane_t3

0x0002,

0x0adb,	// (0x0001e97c) main_mobtv_programe_next_pane_t

0x9bc4,	// (0x00027a65) bg_popup_mobtv_noti_window_pane

0xe0a6,	// (0x0002bf47) popup_mobtv_noti_window_g1

0xe0ae,	// (0x0002bf4f) popup_mobtv_noti_window_t1

0xe0bc,	// (0x0002bf5d) popup_mobtv_noti_window_t2

0x0001,

0x0ae2,	// (0x0001e983) popup_mobtv_noti_window_t

0xc7b2,	// (0x0002a653) bg_popup_mobtv_noti_window_pane_g1

0x1072,	// (0x0001ef13) sc_clock_pane

0x1072,	// (0x0001ef13) main_fs_bigclock_pane

0x786a,	// (0x0002570b) blid2_tripm_pane_t4_ParamLimits

0x786a,	// (0x0002570b) blid2_tripm_pane_t4

0x821c,	// (0x000260bd) sc_clock_pane_g1_ParamLimits

0x821c,	// (0x000260bd) sc_clock_pane_g1

0x822a,	// (0x000260cb) sc_clock_pane_t1_ParamLimits

0x822a,	// (0x000260cb) sc_clock_pane_t1

0x823d,	// (0x000260de) sc_clock_pane_t2_ParamLimits

0x823d,	// (0x000260de) sc_clock_pane_t2

0x824f,	// (0x000260f0) sc_clock_pane_t3_ParamLimits

0x824f,	// (0x000260f0) sc_clock_pane_t3

0x0004,

0xfc23,	// (0x0002dac4) sc_clock_pane_t_ParamLimits

0xfc23,	// (0x0002dac4) sc_clock_pane_t

0x9160,	// (0x00027001) main_fs_bigclock_indicator_pane_ParamLimits

0x9160,	// (0x00027001) main_fs_bigclock_indicator_pane

0x82d2,	// (0x00026173) main_fs_bigclock_pane_g1_ParamLimits

0x82d2,	// (0x00026173) main_fs_bigclock_pane_g1

0x916c,	// (0x0002700d) main_fs_bigclock_pane_t1_ParamLimits

0x916c,	// (0x0002700d) main_fs_bigclock_pane_t1

0x917e,	// (0x0002701f) main_fs_bigclock_pane_t2_ParamLimits

0x917e,	// (0x0002701f) main_fs_bigclock_pane_t2

0x9192,	// (0x00027033) main_fs_bigclock_pane_t3_ParamLimits

0x9192,	// (0x00027033) main_fs_bigclock_pane_t3

0x0002,

0xfd93,	// (0x0002dc34) main_fs_bigclock_pane_t_ParamLimits

0xfd93,	// (0x0002dc34) main_fs_bigclock_pane_t

0xec9a,	// (0x0002cb3b) main_fs_bigclock_indicator_pane_g1

0xdddb,	// (0x0002bc7c) ncim_query_content_pane_g2_ParamLimits

0xdddb,	// (0x0002bc7c) ncim_query_content_pane_g2

0x0001,

0xfbe7,	// (0x0002da88) ncim_query_content_pane_g_ParamLimits

0xfbe7,	// (0x0002da88) ncim_query_content_pane_g

0x8263,	// (0x00026104) sc_clock_pane_t4_ParamLimits

0x8263,	// (0x00026104) sc_clock_pane_t4

0x14c8,	// (0x0001f369) main_radioblah_pane

0xd1de,	// (0x0002b07f) cell_call4_button_pane_t1_copy1_ParamLimits

0xd1de,	// (0x0002b07f) cell_call4_button_pane_t1_copy1

0x7ea6,	// (0x00025d47) main_ncimui_pane_t1_ParamLimits

0x7ea6,	// (0x00025d47) main_ncimui_pane_t1

0x7ec0,	// (0x00025d61) main_ncimui_pane_t2_ParamLimits

0x7ec0,	// (0x00025d61) main_ncimui_pane_t2

0x0002,

0xfbe0,	// (0x0002da81) main_ncimui_pane_t_ParamLimits

0xfbe0,	// (0x0002da81) main_ncimui_pane_t

0xe202,	// (0x0002c0a3) main_radioblah_anim_pane_ParamLimits

0xe202,	// (0x0002c0a3) main_radioblah_anim_pane

0xe213,	// (0x0002c0b4) main_radioblah_info_pane_ParamLimits

0xe213,	// (0x0002c0b4) main_radioblah_info_pane

0xe227,	// (0x0002c0c8) main_radioblah_pane_t1_ParamLimits

0xe227,	// (0x0002c0c8) main_radioblah_pane_t1

0xe243,	// (0x0002c0e4) main_radioblah_pane_t2_ParamLimits

0xe243,	// (0x0002c0e4) main_radioblah_pane_t2

0x0003,

0x0b08,	// (0x0001e9a9) main_radioblah_pane_t_ParamLimits

0x0b08,	// (0x0001e9a9) main_radioblah_pane_t

0x8328,	// (0x000261c9) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8328,	// (0x000261c9) main_radioblah_rocker_ctrl_pane

0xe28b,	// (0x0002c12c) main_radioblah_info_pane_t1_ParamLimits

0xe28b,	// (0x0002c12c) main_radioblah_info_pane_t1

0x836d,	// (0x0002620e) main_radioblah_info_pane_t2_ParamLimits

0x836d,	// (0x0002620e) main_radioblah_info_pane_t2

0x0003,

0xfc2e,	// (0x0002dacf) main_radioblah_info_pane_t_ParamLimits

0xfc2e,	// (0x0002dacf) main_radioblah_info_pane_t

0xc7b2,	// (0x0002a653) main_radioblah_rocker_ctrl_pane_g1

0x841d,	// (0x000262be) main_radioblah_rocker_ctrl_pane_g2

0x8425,	// (0x000262c6) main_radioblah_rocker_ctrl_pane_g3

0x842d,	// (0x000262ce) main_radioblah_rocker_ctrl_pane_g4

0x8435,	// (0x000262d6) main_radioblah_rocker_ctrl_pane_g5

0x843d,	// (0x000262de) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc37,	// (0x0002dad8) main_radioblah_rocker_ctrl_pane_g

0x7e4c,	// (0x00025ced) main_cset_text2_pane_t1_copy1_ParamLimits

0x1eb6,	// (0x0001fd57) cam4_image_uncrop_qvga_pane

0x1fe1,	// (0x0001fe82) vid4_image_uncrop_qcif_pane

0x25fb,	// (0x0002049c) cam6_image_uncrop_qvga_pane_ParamLimits

0x25fb,	// (0x0002049c) cam6_image_uncrop_qvga_pane

0xdaaa,	// (0x0002b94b) vid6_image_uncrop_qcif_pane_ParamLimits

0xdaaa,	// (0x0002b94b) vid6_image_uncrop_qcif_pane

0x9bc4,	// (0x00027a65) bg_popup_preview_window_pane_cp03

0xdd8d,	// (0x0002bc2e) list_cset_text2_pane

0xdd95,	// (0x0002bc36) main_cset6_text2_pane_g1

0xdd9d,	// (0x0002bc3e) main_cset6_text2_pane_t1

0x8445,	// (0x000262e6) list_cset_text2_pane_t1_ParamLimits

0x8445,	// (0x000262e6) list_cset_text2_pane_t1

0x14c8,	// (0x0001f369) main_radioblah_pane_ParamLimits

0x81c2,	// (0x00026063) main_mobtv_info_pane_t3_ParamLimits

0x81c2,	// (0x00026063) main_mobtv_info_pane_t3

0x8316,	// (0x000261b7) main_radioblah_pane_g1

0x8341,	// (0x000261e2) main_radioblah_info_pane_g1

0x83c2,	// (0x00026263) main_radioblah_info_pane_t3_ParamLimits

0x83c2,	// (0x00026263) main_radioblah_info_pane_t3

0x42f5,	// (0x00022196) highlight_cell_cale_month_pane_ParamLimits

0x42f5,	// (0x00022196) highlight_cell_cale_month_pane

0x1072,	// (0x0001ef13) main_phob_fisheye_pane

0xcb50,	// (0x0002a9f1) scroll_pane_cp0031_ParamLimits

0xcb50,	// (0x0002a9f1) scroll_pane_cp0031

0xdbb8,	// (0x0002ba59) wait_bar_pane_cp08_ParamLimits

0x7b65,	// (0x00025a06) cset_list_set_pane_copy1_ParamLimits

0xe2c5,	// (0x0002c166) highlight_cell_cale_month_pane_g1

0x8466,	// (0x00026307) highlight_cell_cale_month_pane_t1

0xd827,	// (0x0002b6c8) list_gen_pane_cp01

0xd3c2,	// (0x0002b263) scroll_pane_01

0x8474,	// (0x00026315) list_single_double_fisheye_pane

0x847d,	// (0x0002631e) list_double_fisheye_pane_g1_ParamLimits

0x847d,	// (0x0002631e) list_double_fisheye_pane_g1

0x8489,	// (0x0002632a) list_double_fisheye_pane_g2_ParamLimits

0x8489,	// (0x0002632a) list_double_fisheye_pane_g2

0x849d,	// (0x0002633e) list_double_fisheye_pane_g3_ParamLimits

0x849d,	// (0x0002633e) list_double_fisheye_pane_g3

0x0004,

0xfc44,	// (0x0002dae5) list_double_fisheye_pane_g_ParamLimits

0xfc44,	// (0x0002dae5) list_double_fisheye_pane_g

0x84c6,	// (0x00026367) list_double_fisheye_pane_t1_ParamLimits

0x84c6,	// (0x00026367) list_double_fisheye_pane_t1

0x84e1,	// (0x00026382) list_double_fisheye_pane_t2_ParamLimits

0x84e1,	// (0x00026382) list_double_fisheye_pane_t2

0x0001,

0xfc4f,	// (0x0002daf0) list_double_fisheye_pane_t_ParamLimits

0xfc4f,	// (0x0002daf0) list_double_fisheye_pane_t

0x1072,	// (0x0001ef13) main_call5_pane

0x8289,	// (0x0002612a) sc_swipe_pane_ParamLimits

0x8289,	// (0x0002612a) sc_swipe_pane

0x850f,	// (0x000263b0) call5_image_pane_ParamLimits

0x850f,	// (0x000263b0) call5_image_pane

0x851f,	// (0x000263c0) call5_swipe_1_pane_ParamLimits

0x851f,	// (0x000263c0) call5_swipe_1_pane

0x852b,	// (0x000263cc) call5_swipe_2_pane_ParamLimits

0x852b,	// (0x000263cc) call5_swipe_2_pane

0x8545,	// (0x000263e6) popup_call5_audio_first_window_ParamLimits

0x8545,	// (0x000263e6) popup_call5_audio_first_window

0xca00,	// (0x0002a8a1) call5_swipe_1_pane_g1_ParamLimits

0xca00,	// (0x0002a8a1) call5_swipe_1_pane_g1

0xe2cd,	// (0x0002c16e) call5_swipe_1_pane_g2_ParamLimits

0xe2cd,	// (0x0002c16e) call5_swipe_1_pane_g2

0x0001,

0xfc54,	// (0x0002daf5) call5_swipe_1_pane_g_ParamLimits

0xfc54,	// (0x0002daf5) call5_swipe_1_pane_g

0xe2d9,	// (0x0002c17a) call5_swipe_1_pane_t1_ParamLimits

0xe2d9,	// (0x0002c17a) call5_swipe_1_pane_t1

0xca00,	// (0x0002a8a1) call5_swipe_2_pane_g1_ParamLimits

0xca00,	// (0x0002a8a1) call5_swipe_2_pane_g1

0xe2ee,	// (0x0002c18f) call5_swipe_2_pane_g2_ParamLimits

0xe2ee,	// (0x0002c18f) call5_swipe_2_pane_g2

0x0001,

0xfc59,	// (0x0002dafa) call5_swipe_2_pane_g_ParamLimits

0xfc59,	// (0x0002dafa) call5_swipe_2_pane_g

0xe2fa,	// (0x0002c19b) call5_swipe_2_pane_t1_ParamLimits

0xe2fa,	// (0x0002c19b) call5_swipe_2_pane_t1

0xe30f,	// (0x0002c1b0) sc_swipe_pane_g1_ParamLimits

0xe30f,	// (0x0002c1b0) sc_swipe_pane_g1

0xe31c,	// (0x0002c1bd) sc_swipe_pane_g2_ParamLimits

0xe31c,	// (0x0002c1bd) sc_swipe_pane_g2

0x0001,

0x0b41,	// (0x0001e9e2) sc_swipe_pane_g_ParamLimits

0x0b41,	// (0x0001e9e2) sc_swipe_pane_g

0xe328,	// (0x0002c1c9) sc_swipe_pane_t1_ParamLimits

0xe328,	// (0x0002c1c9) sc_swipe_pane_t1

0x1072,	// (0x0001ef13) main_cmail_launcher_pane

0x8553,	// (0x000263f4) aid_size_cell_cmail_l_ParamLimits

0x8553,	// (0x000263f4) aid_size_cell_cmail_l

0x8563,	// (0x00026404) grid_cmail_l_pane_ParamLimits

0x8563,	// (0x00026404) grid_cmail_l_pane

0x8573,	// (0x00026414) cell_cmail_l_pane_ParamLimits

0x8573,	// (0x00026414) cell_cmail_l_pane

0x8587,	// (0x00026428) cell_cmail_l_pane_g1_ParamLimits

0x8587,	// (0x00026428) cell_cmail_l_pane_g1

0x8598,	// (0x00026439) cell_cmail_l_pane_t1_ParamLimits

0x8598,	// (0x00026439) cell_cmail_l_pane_t1

0xe33d,	// (0x0002c1de) cell_cmail_l_pane_t2_ParamLimits

0xe33d,	// (0x0002c1de) cell_cmail_l_pane_t2

0x0001,

0xfc5e,	// (0x0002daff) cell_cmail_l_pane_t_ParamLimits

0xfc5e,	// (0x0002daff) cell_cmail_l_pane_t

0xa355,	// (0x000281f6) grid_highlight_pane_cp018_ParamLimits

0xa355,	// (0x000281f6) grid_highlight_pane_cp018

0x0ed4,	// (0x0001ed75) main2_pane_ParamLimits

0x0ed4,	// (0x0001ed75) main2_pane

0xa3c6,	// (0x00028267) popup_sp_fs_action_menu_bg_pane_g1

0xa3ce,	// (0x0002826f) popup_sp_fs_action_menu_bg_pane_g2

0xa3d6,	// (0x00028277) popup_sp_fs_action_menu_bg_pane_g3

0xa3de,	// (0x0002827f) popup_sp_fs_action_menu_bg_pane_g4

0xa3e6,	// (0x00028287) popup_sp_fs_action_menu_bg_pane_g5

0xa3ee,	// (0x0002828f) popup_sp_fs_action_menu_bg_pane_g6

0xa3f6,	// (0x00028297) popup_sp_fs_action_menu_bg_pane_g7

0xa3fe,	// (0x0002829f) popup_sp_fs_action_menu_bg_pane_g8

0xa406,	// (0x000282a7) popup_sp_fs_action_menu_bg_pane_g9

0xa40e,	// (0x000282af) popup_sp_fs_action_menu_bg_pane_g10

0xa40e,	// (0x000282af) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0002d02b) popup_sp_fs_action_menu_bg_pane_g

0x30dc,	// (0x00020f7d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x30dc,	// (0x00020f7d) list_medium_line_x2_t3_g3_g1

0x30e8,	// (0x00020f89) list_medium_line_x2_t3_g3_g2_ParamLimits

0x30e8,	// (0x00020f89) list_medium_line_x2_t3_g3_g2

0x30f4,	// (0x00020f95) list_medium_line_x2_t3_g3_g3_ParamLimits

0x30f4,	// (0x00020f95) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0002d0d9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0002d0d9) list_medium_line_x2_t3_g3_g

0x3100,	// (0x00020fa1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3100,	// (0x00020fa1) list_medium_line_x2_t3_g3_t1

0x3115,	// (0x00020fb6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3115,	// (0x00020fb6) list_medium_line_x2_t3_g3_t2

0x3127,	// (0x00020fc8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3127,	// (0x00020fc8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002d0e0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002d0e0) list_medium_line_x2_t3_g3_t

0x30dc,	// (0x00020f7d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x30dc,	// (0x00020f7d) list_medium_line_x2_t3_g2_g1

0x30f4,	// (0x00020f95) list_medium_line_x2_t3_g2_g2_ParamLimits

0x30f4,	// (0x00020f95) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0002d0e7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0002d0e7) list_medium_line_x2_t3_g2_g

0x313c,	// (0x00020fdd) list_medium_line_x2_t3_g2_t1_ParamLimits

0x313c,	// (0x00020fdd) list_medium_line_x2_t3_g2_t1

0x3152,	// (0x00020ff3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3152,	// (0x00020ff3) list_medium_line_x2_t3_g2_t2

0x3164,	// (0x00021005) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3164,	// (0x00021005) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0002d0ec) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0002d0ec) list_medium_line_x2_t3_g2_t

0x30dc,	// (0x00020f7d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x30dc,	// (0x00020f7d) list_medium_line_x2_t4_g4_g1

0x3182,	// (0x00021023) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3182,	// (0x00021023) list_medium_line_x2_t4_g4_g2

0x30e8,	// (0x00020f89) list_medium_line_x2_t4_g4_g3_ParamLimits

0x30e8,	// (0x00020f89) list_medium_line_x2_t4_g4_g3

0x318e,	// (0x0002102f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x318e,	// (0x0002102f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002d0f3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002d0f3) list_medium_line_x2_t4_g4_g

0x319a,	// (0x0002103b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x319a,	// (0x0002103b) list_medium_line_x2_t4_g4_t1

0x31b4,	// (0x00021055) list_medium_line_x2_t4_g4_t2_ParamLimits

0x31b4,	// (0x00021055) list_medium_line_x2_t4_g4_t2

0x31ca,	// (0x0002106b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x31ca,	// (0x0002106b) list_medium_line_x2_t4_g4_t3

0x31df,	// (0x00021080) list_medium_line_x2_t4_g4_t4_ParamLimits

0x31df,	// (0x00021080) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0002d0fc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0002d0fc) list_medium_line_x2_t4_g4_t

0x30dc,	// (0x00020f7d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x30dc,	// (0x00020f7d) list_medium_line_x2_t2_g4_g1

0x3182,	// (0x00021023) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3182,	// (0x00021023) list_medium_line_x2_t2_g4_g2

0x30e8,	// (0x00020f89) list_medium_line_x2_t2_g4_g3_ParamLimits

0x30e8,	// (0x00020f89) list_medium_line_x2_t2_g4_g3

0x30f4,	// (0x00020f95) list_medium_line_x2_t2_g4_g4_ParamLimits

0x30f4,	// (0x00020f95) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0002d163) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0002d163) list_medium_line_x2_t2_g4_g

0x431b,	// (0x000221bc) list_medium_line_x2_t2_g4_t1_ParamLimits

0x431b,	// (0x000221bc) list_medium_line_x2_t2_g4_t1

0x3127,	// (0x00020fc8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3127,	// (0x00020fc8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0002d16c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0002d16c) list_medium_line_x2_t2_g4_t

0x30dc,	// (0x00020f7d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x30dc,	// (0x00020f7d) list_medium_line_x2_t2_g3_g1

0x30e8,	// (0x00020f89) list_medium_line_x2_t2_g3_g2_ParamLimits

0x30e8,	// (0x00020f89) list_medium_line_x2_t2_g3_g2

0x30f4,	// (0x00020f95) list_medium_line_x2_t2_g3_g3_ParamLimits

0x30f4,	// (0x00020f95) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0002d0d9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0002d0d9) list_medium_line_x2_t2_g3_g

0x4330,	// (0x000221d1) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4330,	// (0x000221d1) list_medium_line_x2_t2_g3_t1

0x3127,	// (0x00020fc8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3127,	// (0x00020fc8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0002d171) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0002d171) list_medium_line_x2_t2_g3_t

0x44be,	// (0x0002235f) main_sp_fs_list_pane_ParamLimits

0x44be,	// (0x0002235f) main_sp_fs_list_pane

0x44ca,	// (0x0002236b) sp_fs_scroll_pane_ParamLimits

0x44ca,	// (0x0002236b) sp_fs_scroll_pane

0x44d6,	// (0x00022377) list_medium_line_x2_t3_t1

0x44e6,	// (0x00022387) list_medium_line_x2_t3_t2

0x44f4,	// (0x00022395) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0002d1bc) list_medium_line_x2_t3_t

0x4502,	// (0x000223a3) list_medium_line_x3_t4_t1

0x4512,	// (0x000223b3) list_medium_line_x3_t4_t2

0x4520,	// (0x000223c1) list_medium_line_x3_t4_t3

0x44f4,	// (0x00022395) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002d1c3) list_medium_line_x3_t4_t

0x452e,	// (0x000223cf) list_medium_line_x4_t5_t1

0x453e,	// (0x000223df) list_medium_line_x4_t5_t2

0x4520,	// (0x000223c1) list_medium_line_x4_t5_t3

0x454c,	// (0x000223ed) list_medium_line_x4_t5_t4

0x44f4,	// (0x00022395) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0002d1cc) list_medium_line_x4_t5_t

0x30dc,	// (0x00020f7d) list_medium_line_t4_g4_g1_ParamLimits

0x30dc,	// (0x00020f7d) list_medium_line_t4_g4_g1

0x318e,	// (0x0002102f) list_medium_line_t4_g4_g2_ParamLimits

0x318e,	// (0x0002102f) list_medium_line_t4_g4_g2

0x455a,	// (0x000223fb) list_medium_line_t4_g4_g3_ParamLimits

0x455a,	// (0x000223fb) list_medium_line_t4_g4_g3

0x30f4,	// (0x00020f95) list_medium_line_t4_g4_g4_ParamLimits

0x30f4,	// (0x00020f95) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0002d1d7) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0002d1d7) list_medium_line_t4_g4_g

0x4566,	// (0x00022407) list_medium_line_t4_g4_t1_ParamLimits

0x4566,	// (0x00022407) list_medium_line_t4_g4_t1

0x457b,	// (0x0002241c) list_medium_line_t4_g4_t2_ParamLimits

0x457b,	// (0x0002241c) list_medium_line_t4_g4_t2

0x4591,	// (0x00022432) list_medium_line_t4_g4_t3_ParamLimits

0x4591,	// (0x00022432) list_medium_line_t4_g4_t3

0x3127,	// (0x00020fc8) list_medium_line_t4_g4_t4_ParamLimits

0x3127,	// (0x00020fc8) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002d1e0) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002d1e0) list_medium_line_t4_g4_t

0x4643,	// (0x000224e4) chi_dic_find_pane_g1

0x14e4,	// (0x0001f385) main_tport_pane

0xd4f0,	// (0x0002b391) list_medium_line_plain_t1

0x7109,	// (0x00024faa) list_medium_line_t2_g2_g1_ParamLimits

0x7109,	// (0x00024faa) list_medium_line_t2_g2_g1

0x7115,	// (0x00024fb6) list_medium_line_t2_g2_g2_ParamLimits

0x7115,	// (0x00024fb6) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0002d8b4) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0002d8b4) list_medium_line_t2_g2_g

0x7121,	// (0x00024fc2) list_medium_line_t2_g2_t1_ParamLimits

0x7121,	// (0x00024fc2) list_medium_line_t2_g2_t1

0x713b,	// (0x00024fdc) list_medium_line_t2_g2_t2_ParamLimits

0x713b,	// (0x00024fdc) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0002d8b9) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0002d8b9) list_medium_line_t2_g2_t

0xd838,	// (0x0002b6d9) aid_sp_fs_list_icon_a_sm

0xd840,	// (0x0002b6e1) aid_sp_fs_list_icon_d

0xd848,	// (0x0002b6e9) aid_sp_fs_text_primary

0xd851,	// (0x0002b6f2) aid_sp_fs_text_secondary

0x76ac,	// (0x0002554d) list_medium_line

0x76ac,	// (0x0002554d) list_medium_line_g2

0x76ac,	// (0x0002554d) list_medium_line_g3

0x76ac,	// (0x0002554d) list_medium_line_plain

0x76ac,	// (0x0002554d) list_medium_line_plain_t2

0x76ac,	// (0x0002554d) list_medium_line_plain_t3

0x76ac,	// (0x0002554d) list_medium_line_right_icon

0x76ac,	// (0x0002554d) list_medium_line_right_iconx2

0x76ac,	// (0x0002554d) list_medium_line_t2

0x76ac,	// (0x0002554d) list_medium_line_t2_g2

0x76ac,	// (0x0002554d) list_medium_line_t2_g3

0x76ac,	// (0x0002554d) list_medium_line_t2_right_icon

0x76ac,	// (0x0002554d) list_medium_line_t2_right_iconx2

0x76ac,	// (0x0002554d) list_medium_line_t3

0x76ac,	// (0x0002554d) list_medium_line_t3_g2

0x76ac,	// (0x0002554d) list_medium_line_t3_g3

0x76ac,	// (0x0002554d) list_medium_line_t3_right_iconx2

0x76b5,	// (0x00025556) list_medium_line_t4_g4

0x76be,	// (0x0002555f) list_medium_line_x2

0x76be,	// (0x0002555f) list_medium_line_x2_t2_g2

0x76be,	// (0x0002555f) list_medium_line_x2_t2_g3

0x76be,	// (0x0002555f) list_medium_line_x2_t2_g4

0x76be,	// (0x0002555f) list_medium_line_x2_t3

0x76be,	// (0x0002555f) list_medium_line_x2_t3_g2

0x76be,	// (0x0002555f) list_medium_line_x2_t3_g3

0x76be,	// (0x0002555f) list_medium_line_x2_t3_g4

0x76be,	// (0x0002555f) list_medium_line_x2_t4_g2

0x76be,	// (0x0002555f) list_medium_line_x2_t4_g4

0x76c7,	// (0x00025568) list_medium_line_x3

0x76c7,	// (0x00025568) list_medium_line_x3_t4

0x76c7,	// (0x00025568) list_medium_line_x3_t4_g4

0x76b5,	// (0x00025556) list_medium_line_x4_t4

0x76b5,	// (0x00025556) list_medium_line_x4_t4_g7

0x76b5,	// (0x00025556) list_medium_line_x4_t5

0x76d0,	// (0x00025571) list_single_fs_dyc_pane_ParamLimits

0x76d0,	// (0x00025571) list_single_fs_dyc_pane

0x30dc,	// (0x00020f7d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x30dc,	// (0x00020f7d) list_medium_line_x4_t4_g7_g1

0x7d7d,	// (0x00025c1e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d7d,	// (0x00025c1e) list_medium_line_x4_t4_g7_g2

0x7d89,	// (0x00025c2a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d89,	// (0x00025c2a) list_medium_line_x4_t4_g7_g3

0x7d98,	// (0x00025c39) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d98,	// (0x00025c39) list_medium_line_x4_t4_g7_g4

0x7da4,	// (0x00025c45) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7da4,	// (0x00025c45) list_medium_line_x4_t4_g7_g5

0x7db3,	// (0x00025c54) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7db3,	// (0x00025c54) list_medium_line_x4_t4_g7_g6

0x7dc2,	// (0x00025c63) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7dc2,	// (0x00025c63) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc1,	// (0x0002da62) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc1,	// (0x0002da62) list_medium_line_x4_t4_g7_g

0x7dce,	// (0x00025c6f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7dce,	// (0x00025c6f) list_medium_line_x4_t4_g7_t1

0x7de3,	// (0x00025c84) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7de3,	// (0x00025c84) list_medium_line_x4_t4_g7_t2

0x7df8,	// (0x00025c99) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7df8,	// (0x00025c99) list_medium_line_x4_t4_g7_t3

0x7e0d,	// (0x00025cae) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e0d,	// (0x00025cae) list_medium_line_x4_t4_g7_t4

0x7e1f,	// (0x00025cc0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e1f,	// (0x00025cc0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd0,	// (0x0002da71) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd0,	// (0x0002da71) list_medium_line_x4_t4_g7_t

0x7e31,	// (0x00025cd2) list_single_dyc_row_pane_ParamLimits

0x7e31,	// (0x00025cd2) list_single_dyc_row_pane

0x8503,	// (0x000263a4) call5_gesture_pane_ParamLimits

0x8503,	// (0x000263a4) call5_gesture_pane

0x8537,	// (0x000263d8) call5_windows_pane_ParamLimits

0x8537,	// (0x000263d8) call5_windows_pane

0x85ae,	// (0x0002644f) call5_swipe_1_pane_cp_ParamLimits

0x85ae,	// (0x0002644f) call5_swipe_1_pane_cp

0x85ba,	// (0x0002645b) call5_swipe_2_pane_cp_ParamLimits

0x85ba,	// (0x0002645b) call5_swipe_2_pane_cp

0xa500,	// (0x000283a1) call5_image_pane_cp

0x85c6,	// (0x00026467) popup_call5_audio_first_window_cp_ParamLimits

0x85c6,	// (0x00026467) popup_call5_audio_first_window_cp

0xe30f,	// (0x0002c1b0) call5_swipe_1_pane_g1_cp_ParamLimits

0xe30f,	// (0x0002c1b0) call5_swipe_1_pane_g1_cp

0xe34f,	// (0x0002c1f0) call5_swipe_1_pane_g2_cp

0xe328,	// (0x0002c1c9) call5_swipe_1_pane_t1_cp_ParamLimits

0xe328,	// (0x0002c1c9) call5_swipe_1_pane_t1_cp

0xe30f,	// (0x0002c1b0) call5_swipe_2_pane_g1_cp_ParamLimits

0xe30f,	// (0x0002c1b0) call5_swipe_2_pane_g1_cp

0xe357,	// (0x0002c1f8) call5_swipe_2_pane_g2_cp

0xe35f,	// (0x0002c200) call5_swipe_2_pane_t1_cp_ParamLimits

0xe35f,	// (0x0002c200) call5_swipe_2_pane_t1_cp

0xa355,	// (0x000281f6) main_sp_fs_email_pane

0xe374,	// (0x0002c215) main_sp_fs_listscroll_pane_te

0x85d4,	// (0x00026475) popup_sp_fs_action_menu_pane_ParamLimits

0x85d4,	// (0x00026475) popup_sp_fs_action_menu_pane

0xc7b2,	// (0x0002a653) bg_sp_fs_ctrlbar_pane_g1

0xe37d,	// (0x0002c21e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe386,	// (0x0002c227) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe38f,	// (0x0002c230) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7b2,	// (0x0002a653) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc63,	// (0x0002db04) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc597,	// (0x0002a438) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc597,	// (0x0002a438) bg_sp_fs_ctrlbar_ddmenu_pane

0xe398,	// (0x0002c239) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe398,	// (0x0002c239) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3a4,	// (0x0002c245) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3a4,	// (0x0002c245) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0b54,	// (0x0001e9f5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0b54,	// (0x0001e9f5) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3b0,	// (0x0002c251) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3b0,	// (0x0002c251) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8618,	// (0x000264b9) list_medium_line_t2_right_icon_g1

0x8620,	// (0x000264c1) list_medium_line_t2_right_icon_t1

0x8630,	// (0x000264d1) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6c,	// (0x0002db0d) list_medium_line_t2_right_icon_t

0xc3aa,	// (0x0002a24b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc3aa,	// (0x0002a24b) bg_sp_fs_ctrlbar_pane

0x8681,	// (0x00026522) main_sp_fs_ctrlbar_button_pane_cp01

0x8689,	// (0x0002652a) main_sp_fs_ctrlbar_ddmenu_pane

0xe402,	// (0x0002c2a3) main_sp_fs_ctrlbar_pane_g1

0xe40e,	// (0x0002c2af) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0b5e,	// (0x0001e9ff) main_sp_fs_ctrlbar_pane_g

0xe41a,	// (0x0002c2bb) main_sp_fs_ctrlbar_pane_t1

0x8693,	// (0x00026534) main_sp_fs_ctrlbar_pane

0x86a9,	// (0x0002654a) main_sp_fs_listscroll_pane_te_cp01

0x86ba,	// (0x0002655b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x86ba,	// (0x0002655b) popup_sp_fs_action_menu_pane_cp01

0xa355,	// (0x000281f6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa355,	// (0x000281f6) bg_sp_fs_highlight_list_pane_cp01

0xe44a,	// (0x0002c2eb) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe44a,	// (0x0002c2eb) sp_fs_action_menu_list_gene_pane_g1

0xe459,	// (0x0002c2fa) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe459,	// (0x0002c2fa) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x0b68,	// (0x0001ea09) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x0b68,	// (0x0001ea09) sp_fs_action_menu_list_gene_pane_g

0xe466,	// (0x0002c307) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe466,	// (0x0002c307) sp_fs_action_menu_list_gene_pane_t1

0xe47e,	// (0x0002c31f) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe47e,	// (0x0002c31f) sp_fs_action_menu_list_gene_pane

0xe49d,	// (0x0002c33e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe49d,	// (0x0002c33e) popup_sp_fs_action_menu_bg_pane

0xe4ab,	// (0x0002c34c) sp_fs_action_menu_list_pane_ParamLimits

0xe4ab,	// (0x0002c34c) sp_fs_action_menu_list_pane

0x86e4,	// (0x00026585) sp_fs_scroll_pane_cp01_ParamLimits

0x86e4,	// (0x00026585) sp_fs_scroll_pane_cp01

0x870a,	// (0x000265ab) list_medium_line_plain_t2_t1

0x871a,	// (0x000265bb) list_medium_line_plain_t2_t2

0x0001,

0xfc71,	// (0x0002db12) list_medium_line_plain_t2_t

0x8728,	// (0x000265c9) list_medium_line_plain_t3_t1

0x8738,	// (0x000265d9) list_medium_line_plain_t3_t2

0x8746,	// (0x000265e7) list_medium_line_plain_t3_t3

0x0002,

0xfc76,	// (0x0002db17) list_medium_line_plain_t3_t

0x30dc,	// (0x00020f7d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x30dc,	// (0x00020f7d) list_medium_line_x2_t2_g2_g1

0x30f4,	// (0x00020f95) list_medium_line_x2_t2_g2_g2_ParamLimits

0x30f4,	// (0x00020f95) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0002d0e7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0002d0e7) list_medium_line_x2_t2_g2_g

0x4566,	// (0x00022407) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4566,	// (0x00022407) list_medium_line_x2_t2_g2_t1

0x3127,	// (0x00020fc8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3127,	// (0x00020fc8) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc7d,	// (0x0002db1e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc7d,	// (0x0002db1e) list_medium_line_x2_t2_g2_t

0x30dc,	// (0x00020f7d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x30dc,	// (0x00020f7d) list_medium_line_x2_t4_g2_g1

0x30f4,	// (0x00020f95) list_medium_line_x2_t4_g2_g2_ParamLimits

0x30f4,	// (0x00020f95) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0002d0e7) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0002d0e7) list_medium_line_x2_t4_g2_g

0x8754,	// (0x000265f5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8754,	// (0x000265f5) list_medium_line_x2_t4_g2_t1

0x876e,	// (0x0002660f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x876e,	// (0x0002660f) list_medium_line_x2_t4_g2_t2

0x8784,	// (0x00026625) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8784,	// (0x00026625) list_medium_line_x2_t4_g2_t3

0x3127,	// (0x00020fc8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3127,	// (0x00020fc8) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc82,	// (0x0002db23) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc82,	// (0x0002db23) list_medium_line_x2_t4_g2_t

0x8799,	// (0x0002663a) list_medium_line_t3_right_iconx2_g1

0x8618,	// (0x000264b9) list_medium_line_t3_right_iconx2_g2

0x87a1,	// (0x00026642) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8b,	// (0x0002db2c) list_medium_line_t3_right_iconx2_g

0x87a9,	// (0x0002664a) list_medium_line_t3_right_iconx2_t1

0x87b9,	// (0x0002665a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc92,	// (0x0002db33) list_medium_line_t3_right_iconx2_t

0x30dc,	// (0x00020f7d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x30dc,	// (0x00020f7d) list_medium_line_x3_t4_g4_g1

0x30e8,	// (0x00020f89) list_medium_line_x3_t4_g4_g2_ParamLimits

0x30e8,	// (0x00020f89) list_medium_line_x3_t4_g4_g2

0x318e,	// (0x0002102f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x318e,	// (0x0002102f) list_medium_line_x3_t4_g4_g3

0x87c7,	// (0x00026668) list_medium_line_x3_t4_g4_g4_ParamLimits

0x87c7,	// (0x00026668) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc97,	// (0x0002db38) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc97,	// (0x0002db38) list_medium_line_x3_t4_g4_g

0x87d3,	// (0x00026674) list_medium_line_x3_t4_g4_t1_ParamLimits

0x87d3,	// (0x00026674) list_medium_line_x3_t4_g4_t1

0x87ea,	// (0x0002668b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x87ea,	// (0x0002668b) list_medium_line_x3_t4_g4_t2

0x87ff,	// (0x000266a0) list_medium_line_x3_t4_g4_t3_ParamLimits

0x87ff,	// (0x000266a0) list_medium_line_x3_t4_g4_t3

0x8814,	// (0x000266b5) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8814,	// (0x000266b5) list_medium_line_x3_t4_g4_t4

0x0003,

0xfca0,	// (0x0002db41) list_medium_line_x3_t4_g4_t_ParamLimits

0xfca0,	// (0x0002db41) list_medium_line_x3_t4_g4_t

0x8831,	// (0x000266d2) list_single_dyc_row_text_pane_t1_ParamLimits

0x8831,	// (0x000266d2) list_single_dyc_row_text_pane_t1

0x8868,	// (0x00026709) list_single_dyc_row_text_pane_t2_ParamLimits

0x8868,	// (0x00026709) list_single_dyc_row_text_pane_t2

0xe4cb,	// (0x0002c36c) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4cb,	// (0x0002c36c) list_single_dyc_row_text_pane_t3

0x0005,

0xfca9,	// (0x0002db4a) list_single_dyc_row_text_pane_t_ParamLimits

0xfca9,	// (0x0002db4a) list_single_dyc_row_text_pane_t

0xe4ef,	// (0x0002c390) list_single_dyc_row_pane_g1_ParamLimits

0xe4ef,	// (0x0002c390) list_single_dyc_row_pane_g1

0xe4fb,	// (0x0002c39c) list_single_dyc_row_pane_g2_ParamLimits

0xe4fb,	// (0x0002c39c) list_single_dyc_row_pane_g2

0xe507,	// (0x0002c3a8) list_single_dyc_row_pane_g3_ParamLimits

0xe507,	// (0x0002c3a8) list_single_dyc_row_pane_g3

0xe513,	// (0x0002c3b4) list_single_dyc_row_pane_g4_ParamLimits

0xe513,	// (0x0002c3b4) list_single_dyc_row_pane_g4

0x0003,

0x0bb2,	// (0x0001ea53) list_single_dyc_row_pane_g_ParamLimits

0x0bb2,	// (0x0001ea53) list_single_dyc_row_pane_g

0xe51f,	// (0x0002c3c0) list_single_dyc_row_text_pane_ParamLimits

0xe51f,	// (0x0002c3c0) list_single_dyc_row_text_pane

0x9bc4,	// (0x00027a65) bg_sp_fs_scroll_pane

0xe53e,	// (0x0002c3df) thumb_sp_fs_scroll_pane

0x7109,	// (0x00024faa) list_medium_line_g1_ParamLimits

0x7109,	// (0x00024faa) list_medium_line_g1

0xe547,	// (0x0002c3e8) list_medium_line_t1_ParamLimits

0xe547,	// (0x0002c3e8) list_medium_line_t1

0x30dc,	// (0x00020f7d) list_medium_line_x2_g1_ParamLimits

0x30dc,	// (0x00020f7d) list_medium_line_x2_g1

0x30e8,	// (0x00020f89) list_medium_line_x2_g2_ParamLimits

0x30e8,	// (0x00020f89) list_medium_line_x2_g2

0x0001,

0xfcb6,	// (0x0002db57) list_medium_line_x2_g_ParamLimits

0xfcb6,	// (0x0002db57) list_medium_line_x2_g

0xe55c,	// (0x0002c3fd) list_medium_line_x2_t1_ParamLimits

0xe55c,	// (0x0002c3fd) list_medium_line_x2_t1

0x30dc,	// (0x00020f7d) list_medium_line_x3_g1_ParamLimits

0x30dc,	// (0x00020f7d) list_medium_line_x3_g1

0x30e8,	// (0x00020f89) list_medium_line_x3_g2_ParamLimits

0x30e8,	// (0x00020f89) list_medium_line_x3_g2

0x0001,

0xfcb6,	// (0x0002db57) list_medium_line_x3_g_ParamLimits

0xfcb6,	// (0x0002db57) list_medium_line_x3_g

0xe55c,	// (0x0002c3fd) list_medium_line_x3_t1_ParamLimits

0xe55c,	// (0x0002c3fd) list_medium_line_x3_t1

0xe572,	// (0x0002c413) thumb_sp_fs_scroll_pane_g1

0xe57b,	// (0x0002c41c) thumb_sp_fs_scroll_pane_g2

0xe584,	// (0x0002c425) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0bc0,	// (0x0001ea61) thumb_sp_fs_scroll_pane_g

0xe572,	// (0x0002c413) bg_sp_fs_scroll_pane_g1

0xe57b,	// (0x0002c41c) bg_sp_fs_scroll_pane_g2

0xe584,	// (0x0002c425) bg_sp_fs_scroll_pane_g3

0x0002,

0x0bc0,	// (0x0001ea61) bg_sp_fs_scroll_pane_g

0x30dc,	// (0x00020f7d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x30dc,	// (0x00020f7d) list_medium_line_x2_t3_g4_g1

0x3182,	// (0x00021023) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3182,	// (0x00021023) list_medium_line_x2_t3_g4_g2

0x30e8,	// (0x00020f89) list_medium_line_x2_t3_g4_g3_ParamLimits

0x30e8,	// (0x00020f89) list_medium_line_x2_t3_g4_g3

0x30f4,	// (0x00020f95) list_medium_line_x2_t3_g4_g4_ParamLimits

0x30f4,	// (0x00020f95) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0002d163) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0002d163) list_medium_line_x2_t3_g4_g

0x898b,	// (0x0002682c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x898b,	// (0x0002682c) list_medium_line_x2_t3_g4_t1

0x89a1,	// (0x00026842) list_medium_line_x2_t3_g4_t2_ParamLimits

0x89a1,	// (0x00026842) list_medium_line_x2_t3_g4_t2

0x3127,	// (0x00020fc8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3127,	// (0x00020fc8) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcbb,	// (0x0002db5c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcbb,	// (0x0002db5c) list_medium_line_x2_t3_g4_t

0x7109,	// (0x00024faa) list_medium_line_g2_g1_ParamLimits

0x7109,	// (0x00024faa) list_medium_line_g2_g1

0x7115,	// (0x00024fb6) list_medium_line_g2_g2_ParamLimits

0x7115,	// (0x00024fb6) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0002d8b4) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0002d8b4) list_medium_line_g2_g

0xe58d,	// (0x0002c42e) list_medium_line_g2_t1_ParamLimits

0xe58d,	// (0x0002c42e) list_medium_line_g2_t1

0x7109,	// (0x00024faa) list_medium_line_t3_g2_g1_ParamLimits

0x7109,	// (0x00024faa) list_medium_line_t3_g2_g1

0x7115,	// (0x00024fb6) list_medium_line_t3_g2_g2_ParamLimits

0x7115,	// (0x00024fb6) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0002d8b4) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0002d8b4) list_medium_line_t3_g2_g

0x89bb,	// (0x0002685c) list_medium_line_t3_g2_t1_ParamLimits

0x89bb,	// (0x0002685c) list_medium_line_t3_g2_t1

0x89d5,	// (0x00026876) list_medium_line_t3_g2_t2_ParamLimits

0x89d5,	// (0x00026876) list_medium_line_t3_g2_t2

0x89eb,	// (0x0002688c) list_medium_line_t3_g2_t3_ParamLimits

0x89eb,	// (0x0002688c) list_medium_line_t3_g2_t3

0x0002,

0xfcc2,	// (0x0002db63) list_medium_line_t3_g2_t_ParamLimits

0xfcc2,	// (0x0002db63) list_medium_line_t3_g2_t

0x8618,	// (0x000264b9) list_medium_line_right_icon_g1

0xe5a2,	// (0x0002c443) list_medium_line_right_icon_t1

0x7109,	// (0x00024faa) list_medium_line_t2_g1_ParamLimits

0x7109,	// (0x00024faa) list_medium_line_t2_g1

0x8a01,	// (0x000268a2) list_medium_line_t2_t1_ParamLimits

0x8a01,	// (0x000268a2) list_medium_line_t2_t1

0x8a1b,	// (0x000268bc) list_medium_line_t2_t2_ParamLimits

0x8a1b,	// (0x000268bc) list_medium_line_t2_t2

0x0001,

0xfcc9,	// (0x0002db6a) list_medium_line_t2_t_ParamLimits

0xfcc9,	// (0x0002db6a) list_medium_line_t2_t

0x7109,	// (0x00024faa) list_medium_line_t3_g1_ParamLimits

0x7109,	// (0x00024faa) list_medium_line_t3_g1

0x8a30,	// (0x000268d1) list_medium_line_t3_t1_ParamLimits

0x8a30,	// (0x000268d1) list_medium_line_t3_t1

0x8a4a,	// (0x000268eb) list_medium_line_t3_t2_ParamLimits

0x8a4a,	// (0x000268eb) list_medium_line_t3_t2

0x8a60,	// (0x00026901) list_medium_line_t3_t3_ParamLimits

0x8a60,	// (0x00026901) list_medium_line_t3_t3

0x0002,

0xfcce,	// (0x0002db6f) list_medium_line_t3_t_ParamLimits

0xfcce,	// (0x0002db6f) list_medium_line_t3_t

0x7109,	// (0x00024faa) list_medium_line_g3_g1_ParamLimits

0x7109,	// (0x00024faa) list_medium_line_g3_g1

0x8a75,	// (0x00026916) list_medium_line_g3_g2_ParamLimits

0x8a75,	// (0x00026916) list_medium_line_g3_g2

0x7115,	// (0x00024fb6) list_medium_line_g3_g3_ParamLimits

0x7115,	// (0x00024fb6) list_medium_line_g3_g3

0x0002,

0xfcd5,	// (0x0002db76) list_medium_line_g3_g_ParamLimits

0xfcd5,	// (0x0002db76) list_medium_line_g3_g

0xe5b0,	// (0x0002c451) list_medium_line_g3_t1_ParamLimits

0xe5b0,	// (0x0002c451) list_medium_line_g3_t1

0x7109,	// (0x00024faa) list_medium_line_t2_g3_g1_ParamLimits

0x7109,	// (0x00024faa) list_medium_line_t2_g3_g1

0x8a75,	// (0x00026916) list_medium_line_t2_g3_g2_ParamLimits

0x8a75,	// (0x00026916) list_medium_line_t2_g3_g2

0x7115,	// (0x00024fb6) list_medium_line_t2_g3_g3_ParamLimits

0x7115,	// (0x00024fb6) list_medium_line_t2_g3_g3

0x0002,

0xfcd5,	// (0x0002db76) list_medium_line_t2_g3_g_ParamLimits

0xfcd5,	// (0x0002db76) list_medium_line_t2_g3_g

0x8a81,	// (0x00026922) list_medium_line_t2_g3_t1_ParamLimits

0x8a81,	// (0x00026922) list_medium_line_t2_g3_t1

0x8a9b,	// (0x0002693c) list_medium_line_t2_g3_t2_ParamLimits

0x8a9b,	// (0x0002693c) list_medium_line_t2_g3_t2

0x0001,

0xfcdc,	// (0x0002db7d) list_medium_line_t2_g3_t_ParamLimits

0xfcdc,	// (0x0002db7d) list_medium_line_t2_g3_t

0x7109,	// (0x00024faa) list_medium_line_t3_g3_g1_ParamLimits

0x7109,	// (0x00024faa) list_medium_line_t3_g3_g1

0x8a75,	// (0x00026916) list_medium_line_t3_g3_g2_ParamLimits

0x8a75,	// (0x00026916) list_medium_line_t3_g3_g2

0x7115,	// (0x00024fb6) list_medium_line_t3_g3_g3_ParamLimits

0x7115,	// (0x00024fb6) list_medium_line_t3_g3_g3

0x0002,

0xfcd5,	// (0x0002db76) list_medium_line_t3_g3_g_ParamLimits

0xfcd5,	// (0x0002db76) list_medium_line_t3_g3_g

0x8ab1,	// (0x00026952) list_medium_line_t3_g3_t1_ParamLimits

0x8ab1,	// (0x00026952) list_medium_line_t3_g3_t1

0x8aca,	// (0x0002696b) list_medium_line_t3_g3_t2_ParamLimits

0x8aca,	// (0x0002696b) list_medium_line_t3_g3_t2

0x8ae0,	// (0x00026981) list_medium_line_t3_g3_t3_ParamLimits

0x8ae0,	// (0x00026981) list_medium_line_t3_g3_t3

0x0002,

0xfce1,	// (0x0002db82) list_medium_line_t3_g3_t_ParamLimits

0xfce1,	// (0x0002db82) list_medium_line_t3_g3_t

0x8799,	// (0x0002663a) list_medium_line_right_iconx2_g1

0x8618,	// (0x000264b9) list_medium_line_right_iconx2_g2

0x0001,

0xfce8,	// (0x0002db89) list_medium_line_right_iconx2_g

0xe5c5,	// (0x0002c466) list_medium_line_right_iconx2_t1

0x8799,	// (0x0002663a) list_medium_line_t2_right_iconx2_g1

0x8618,	// (0x000264b9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfce8,	// (0x0002db89) list_medium_line_t2_right_iconx2_g

0x8af6,	// (0x00026997) list_medium_line_t2_right_iconx2_t1

0x8b06,	// (0x000269a7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfced,	// (0x0002db8e) list_medium_line_t2_right_iconx2_t

0x8b14,	// (0x000269b5) list_medium_line_x4_t4_t1

0x8b22,	// (0x000269c3) list_medium_line_x4_t4_t2

0x8b32,	// (0x000269d3) list_medium_line_x4_t4_t3

0x8b42,	// (0x000269e3) list_medium_line_x4_t4_t4

0x0003,

0xfcf2,	// (0x0002db93) list_medium_line_x4_t4_t

0x8b7c,	// (0x00026a1d) tport_appsw_pane_ParamLimits

0x8b7c,	// (0x00026a1d) tport_appsw_pane

0x8b8a,	// (0x00026a2b) tport_contact_pane_ParamLimits

0x8b8a,	// (0x00026a2b) tport_contact_pane

0x8b9a,	// (0x00026a3b) tport_listscroll_pane_ParamLimits

0x8b9a,	// (0x00026a3b) tport_listscroll_pane

0x8baa,	// (0x00026a4b) cell_tport_appsw_pane_ParamLimits

0x8baa,	// (0x00026a4b) cell_tport_appsw_pane

0xcad9,	// (0x0002a97a) tport_appsw_pane_g1_ParamLimits

0xcad9,	// (0x0002a97a) tport_appsw_pane_g1

0xe5d3,	// (0x0002c474) tport_contact_pane_g1

0xe5dc,	// (0x0002c47d) tport_contact_pane_t1

0xe5ea,	// (0x0002c48b) tport_contact_pane_t2

0x0001,

0x0c07,	// (0x0001eaa8) tport_contact_pane_t

0xe5f8,	// (0x0002c499) list_tport_pane

0xe601,	// (0x0002c4a2) scroll_pane_cp_030

0x8bdd,	// (0x00026a7e) cell_tport_appsw_pane_g1

0x8bed,	// (0x00026a8e) cell_tport_appsw_pane_t1

0x8bfb,	// (0x00026a9c) grid_highlight_pane_cp019

0x8c03,	// (0x00026aa4) list_tport_double_graphic_pane_ParamLimits

0x8c03,	// (0x00026aa4) list_tport_double_graphic_pane

0xa355,	// (0x000281f6) list_highlight_pane_cp023_ParamLimits

0xa355,	// (0x000281f6) list_highlight_pane_cp023

0x8c14,	// (0x00026ab5) list_tport_double_graphic_pane_g1_ParamLimits

0x8c14,	// (0x00026ab5) list_tport_double_graphic_pane_g1

0x8c21,	// (0x00026ac2) list_tport_double_graphic_pane_t1_ParamLimits

0x8c21,	// (0x00026ac2) list_tport_double_graphic_pane_t1

0x8c36,	// (0x00026ad7) list_tport_double_graphic_pane_t2_ParamLimits

0x8c36,	// (0x00026ad7) list_tport_double_graphic_pane_t2

0x0001,

0xfd02,	// (0x0002dba3) list_tport_double_graphic_pane_t_ParamLimits

0xfd02,	// (0x0002dba3) list_tport_double_graphic_pane_t

0x9bc4,	// (0x00027a65) main_cale_note_pane

0x222a,	// (0x000200cb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x222a,	// (0x000200cb) cell_vitu2_function_top_wide_pane_cp01

0x81d6,	// (0x00026077) wait_bar_pane_cp05_ParamLimits

0xa355,	// (0x000281f6) listscroll_cmail_pane

0xe60a,	// (0x0002c4ab) list_cmail_pane

0x8c48,	// (0x00026ae9) list_cmail_body_pane

0x8c70,	// (0x00026b11) list_single_cmail_header_caption_pane

0x8c9c,	// (0x00026b3d) list_single_cmail_header_detail_pane_ParamLimits

0x8c9c,	// (0x00026b3d) list_single_cmail_header_detail_pane

0xe61a,	// (0x0002c4bb) list_single_cmail_header_caption_pane_t1

0x8cd5,	// (0x00026b76) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8cd5,	// (0x00026b76) list_single_cmail_header_detail_pane_g1

0xe631,	// (0x0002c4d2) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe631,	// (0x0002c4d2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd07,	// (0x0002dba8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd07,	// (0x0002dba8) list_single_cmail_header_detail_pane_g

0xe64a,	// (0x0002c4eb) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe64a,	// (0x0002c4eb) list_single_cmail_header_detail_pane_t1

0xe6aa,	// (0x0002c54b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6aa,	// (0x0002c54b) list_single_cmail_header_editor_pane_bg

0xdfbd,	// (0x0002be5e) list_cmail_body_pane_g1

0xe6c1,	// (0x0002c562) list_cmail_body_pane_t1

0xd2a8,	// (0x0002b149) list_single_cmail_header_editor_pane_bg_g1

0xa759,	// (0x000285fa) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2b8,	// (0x0002b159) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2b0,	// (0x0002b151) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4fe,	// (0x0002b39f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2d8,	// (0x0002b179) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2c8,	// (0x0002b169) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2d0,	// (0x0002b171) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa739,	// (0x000285da) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8ceb,	// (0x00026b8c) calenote_gesture_pane_ParamLimits

0x8ceb,	// (0x00026b8c) calenote_gesture_pane

0x8d05,	// (0x00026ba6) calenote_window_pane_ParamLimits

0x8d05,	// (0x00026ba6) calenote_window_pane

0xe6cf,	// (0x0002c570) popup_note_window_cp01

0x8d1d,	// (0x00026bbe) calenote_swipe_1_pane_ParamLimits

0x8d1d,	// (0x00026bbe) calenote_swipe_1_pane

0x85ba,	// (0x0002645b) calenote_swipe_2_pane_ParamLimits

0x85ba,	// (0x0002645b) calenote_swipe_2_pane

0xe30f,	// (0x0002c1b0) calenote_swipe_1_pane_g1_ParamLimits

0xe30f,	// (0x0002c1b0) calenote_swipe_1_pane_g1

0xe31c,	// (0x0002c1bd) calenote_swipe_1_pane_g2_ParamLimits

0xe31c,	// (0x0002c1bd) calenote_swipe_1_pane_g2

0x0001,

0x0b41,	// (0x0001e9e2) calenote_swipe_1_pane_g_ParamLimits

0x0b41,	// (0x0001e9e2) calenote_swipe_1_pane_g

0xe6e1,	// (0x0002c582) calenote_swipe_1_pane_t1_ParamLimits

0xe6e1,	// (0x0002c582) calenote_swipe_1_pane_t1

0xe30f,	// (0x0002c1b0) calenote_swipe_2_pane_g1_ParamLimits

0xe30f,	// (0x0002c1b0) calenote_swipe_2_pane_g1

0xe700,	// (0x0002c5a1) calenote_swipe_2_pane_g2_ParamLimits

0xe700,	// (0x0002c5a1) calenote_swipe_2_pane_g2

0x0001,

0x0c24,	// (0x0001eac5) calenote_swipe_2_pane_g_ParamLimits

0x0c24,	// (0x0001eac5) calenote_swipe_2_pane_g

0xe70c,	// (0x0002c5ad) calenote_swipe_2_pane_t1_ParamLimits

0xe70c,	// (0x0002c5ad) calenote_swipe_2_pane_t1

0x9bc4,	// (0x00027a65) main_mup_navstr_pane

0x60ab,	// (0x00023f4c) main_mup3_pane_t7_ParamLimits

0x60ab,	// (0x00023f4c) main_mup3_pane_t7

0x1b39,	// (0x0001f9da) main_mp4_pane_g6_ParamLimits

0x1b39,	// (0x0001f9da) main_mp4_pane_g6

0x1e2c,	// (0x0001fccd) main_image3_pane_t4_ParamLimits

0x1e2c,	// (0x0001fccd) main_image3_pane_t4

0x8d30,	// (0x00026bd1) popup_navstr_preview_pane_ParamLimits

0x8d30,	// (0x00026bd1) popup_navstr_preview_pane

0x8d3c,	// (0x00026bdd) scroll_navstr_pane_ParamLimits

0x8d3c,	// (0x00026bdd) scroll_navstr_pane

0x9bc4,	// (0x00027a65) bg_popup_preview_window_pane_cp04

0xe733,	// (0x0002c5d4) popup_navstr_preview_pane_t1

0x8d48,	// (0x00026be9) scroll_navstr_pane_g1_ParamLimits

0x8d48,	// (0x00026be9) scroll_navstr_pane_g1

0x8d55,	// (0x00026bf6) scroll_navstr_pane_t1_ParamLimits

0x8d55,	// (0x00026bf6) scroll_navstr_pane_t1

0xe6d8,	// (0x0002c579) bg_button_pane_cp014

0xe6d8,	// (0x0002c579) bg_button_pane_cp030

0x84a9,	// (0x0002634a) list_double_fisheye_pane_g4_ParamLimits

0x84a9,	// (0x0002634a) list_double_fisheye_pane_g4

0x84b5,	// (0x00026356) list_double_fisheye_pane_g5_ParamLimits

0x84b5,	// (0x00026356) list_double_fisheye_pane_g5

0xd47a,	// (0x0002b31b) sp_fs_scroll_pane_cp03

0xe402,	// (0x0002c2a3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe40e,	// (0x0002c2af) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0b5e,	// (0x0001e9ff) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe41a,	// (0x0002c2bb) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe612,	// (0x0002c4b3) sp_fs_scroll_pane_cp02

0xa43f,	// (0x000282e0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa43f,	// (0x000282e0) popup_sp_fs_calendar_preview_list_single_pane

0x9bc4,	// (0x00027a65) main_cam6_pano_pane

0x14c8,	// (0x0001f369) main_mup3_pane_ParamLimits

0x9bc4,	// (0x00027a65) main_phacti_pane

0x80ab,	// (0x00025f4c) bg_button_pane_cp11

0x80c3,	// (0x00025f64) main_mobtv_info_pane_g2_ParamLimits

0x80c3,	// (0x00025f64) main_mobtv_info_pane_g2

0x0001,

0xfc10,	// (0x0002dab1) main_mobtv_info_pane_g_ParamLimits

0xfc10,	// (0x0002dab1) main_mobtv_info_pane_g

0x8275,	// (0x00026116) sc_clock_pane_t5_ParamLimits

0x8275,	// (0x00026116) sc_clock_pane_t5

0x8316,	// (0x000261b7) main_radioblah_pane_g1_ParamLimits

0xe25b,	// (0x0002c0fc) main_radioblah_pane_t3_ParamLimits

0xe25b,	// (0x0002c0fc) main_radioblah_pane_t3

0xe273,	// (0x0002c114) main_radioblah_pane_t4_ParamLimits

0xe273,	// (0x0002c114) main_radioblah_pane_t4

0x8334,	// (0x000261d5) main_radioblah_text_pane_ParamLimits

0x8334,	// (0x000261d5) main_radioblah_text_pane

0x8341,	// (0x000261e2) main_radioblah_info_pane_g1_ParamLimits

0x83d6,	// (0x00026277) main_radioblah_info_pane_t4_ParamLimits

0x83d6,	// (0x00026277) main_radioblah_info_pane_t4

0xa355,	// (0x000281f6) main_sp_fs_calendar_pane

0x8d67,	// (0x00026c08) main_phacti_pane_g1

0x8d6f,	// (0x00026c10) phacti_note_pane_ParamLimits

0x8d6f,	// (0x00026c10) phacti_note_pane

0xe74a,	// (0x0002c5eb) phacti_term_pane_ParamLimits

0xe74a,	// (0x0002c5eb) phacti_term_pane

0xe75f,	// (0x0002c600) phacti_note_pane_t1_ParamLimits

0xe75f,	// (0x0002c600) phacti_note_pane_t1

0xe776,	// (0x0002c617) phacti_term_pane_g1

0xe77e,	// (0x0002c61f) phacti_term_pane_t1_ParamLimits

0xe77e,	// (0x0002c61f) phacti_term_pane_t1

0xe7a8,	// (0x0002c649) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7b0,	// (0x0002c651) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0c2e,	// (0x0001eacf) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7b8,	// (0x0002c659) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7b8,	// (0x0002c659) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7ce,	// (0x0002c66f) aid_popup_sp_fs_bg_corner_pane

0xc7b2,	// (0x0002a653) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bc4,	// (0x00027a65) popup_sp_fs_calendar_preview_bg_pane

0x8d85,	// (0x00026c26) popup_sp_fs_calendar_preview_list_pane

0xc3aa,	// (0x0002a24b) bg_main_sp_fs_cale_pane_ParamLimits

0xc3aa,	// (0x0002a24b) bg_main_sp_fs_cale_pane

0xe7df,	// (0x0002c680) listscroll_cale_mrui_pane_ParamLimits

0xe7df,	// (0x0002c680) listscroll_cale_mrui_pane

0xd32c,	// (0x0002b1cd) listscroll_sp_fs_schedule_track_pane

0xe7f4,	// (0x0002c695) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7f4,	// (0x0002c695) main_sp_fs_ctrlbar_pane_cp01

0xe807,	// (0x0002c6a8) main_sp_fs_ribbon_pane

0xe80f,	// (0x0002c6b0) popup_sp_fs_cale_preview_window

0x8dda,	// (0x00026c7b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8dda,	// (0x00026c7b) list_single_sp_fs_schedule_track_pane

0xd13d,	// (0x0002afde) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd13d,	// (0x0002afde) bg_sp_fs_highlight_list_pane_cp03

0x8dfd,	// (0x00026c9e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8dfd,	// (0x00026c9e) list_single_sp_fs_schedule_track_pane_g1

0x8e09,	// (0x00026caa) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e09,	// (0x00026caa) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd0e,	// (0x0002dbaf) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd0e,	// (0x0002dbaf) list_single_sp_fs_schedule_track_pane_g

0x8e15,	// (0x00026cb6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e15,	// (0x00026cb6) list_single_sp_fs_schedule_track_pane_t1

0x8e2d,	// (0x00026cce) sp_fs_schedule_track_pane_ParamLimits

0x8e2d,	// (0x00026cce) sp_fs_schedule_track_pane

0xe821,	// (0x0002c6c2) sp_fs_schedule_track_pane_g1

0xe829,	// (0x0002c6ca) sp_fs_schedule_track_pane_g2

0xe831,	// (0x0002c6d2) sp_fs_schedule_track_pane_g3

0xe839,	// (0x0002c6da) sp_fs_schedule_track_pane_g4

0xe841,	// (0x0002c6e2) sp_fs_schedule_track_pane_g5

0x0004,

0x0c38,	// (0x0001ead9) sp_fs_schedule_track_pane_g

0xd2a8,	// (0x0002b149) bg_sp_fs_schedule_viewer_highlight_g1

0xa759,	// (0x000285fa) bg_sp_fs_schedule_viewer_highlight_g2

0xd2b0,	// (0x0002b151) bg_sp_fs_schedule_viewer_highlight_g3

0xd2b8,	// (0x0002b159) bg_sp_fs_schedule_viewer_highlight_g4

0xd4fe,	// (0x0002b39f) bg_sp_fs_schedule_viewer_highlight_g5

0xd2c8,	// (0x0002b169) bg_sp_fs_schedule_viewer_highlight_g6

0xd2d0,	// (0x0002b171) bg_sp_fs_schedule_viewer_highlight_g7

0xd2d8,	// (0x0002b179) bg_sp_fs_schedule_viewer_highlight_g8

0xa739,	// (0x000285da) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd13,	// (0x0002dbb4) bg_sp_fs_schedule_viewer_highlight_g

0x9bc4,	// (0x00027a65) bg_main_sp_fs_ribbon_pane

0x8e3d,	// (0x00026cde) main_sp_fs_ribbon_pane_g1

0xe849,	// (0x0002c6ea) main_sp_fs_ribbon_pane_t1

0x8e46,	// (0x00026ce7) main_sp_fs_ribbon_pane_t2

0xe858,	// (0x0002c6f9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd26,	// (0x0002dbc7) main_sp_fs_ribbon_pane_t

0xe867,	// (0x0002c708) main_sp_fs_ribbon_scheduler_pane

0xe86f,	// (0x0002c710) bg_main_sp_fs_ribbon_pane_g1

0xe878,	// (0x0002c719) bg_main_sp_fs_ribbon_pane_g2

0xe881,	// (0x0002c722) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0c5d,	// (0x0001eafe) bg_main_sp_fs_ribbon_pane_g

0xe889,	// (0x0002c72a) main_sp_fs_ribbon_scheduler_pane_g1

0xe892,	// (0x0002c733) main_sp_fs_ribbon_scheduler_pane_g2

0xe89b,	// (0x0002c73c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0c64,	// (0x0001eb05) main_sp_fs_ribbon_scheduler_pane_g

0xe8a4,	// (0x0002c745) list_cale_mrui_pane

0x8e55,	// (0x00026cf6) sp_fs_scroll_pane_cp07_ParamLimits

0x8e55,	// (0x00026cf6) sp_fs_scroll_pane_cp07

0x8e71,	// (0x00026d12) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e71,	// (0x00026d12) bg_sp_fs_schedule_viewer_highlight

0xe8b1,	// (0x0002c752) list_single_sp_fs_schedule_track_pane_cp01

0xe8b9,	// (0x0002c75a) list_sp_fs_schedule_track_pane

0xe8c1,	// (0x0002c762) sp_fs_scroll_pane_cp06_ParamLimits

0xe8c1,	// (0x0002c762) sp_fs_scroll_pane_cp06

0xc7b2,	// (0x0002a653) bgmain_sp_fs_calendar_pane_g1

0x8e7e,	// (0x00026d1f) list_single_cale_mrui_pane_ParamLimits

0x8e7e,	// (0x00026d1f) list_single_cale_mrui_pane

0xe8d3,	// (0x0002c774) list_single_cale_mrui_row_pane_ParamLimits

0xe8d3,	// (0x0002c774) list_single_cale_mrui_row_pane

0xe8e0,	// (0x0002c781) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8e0,	// (0x0002c781) list_single_cale_mrui_row_pane_g1

0xe925,	// (0x0002c7c6) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe925,	// (0x0002c7c6) list_single_cale_mrui_row_pane_t1

0x8eac,	// (0x00026d4d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8eac,	// (0x00026d4d) list_single_cale_mrui_row_pane_t2

0xe937,	// (0x0002c7d8) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe937,	// (0x0002c7d8) list_single_cale_mrui_row_pane_t3

0xe966,	// (0x0002c807) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe966,	// (0x0002c807) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd2d,	// (0x0002dbce) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd2d,	// (0x0002dbce) list_single_cale_mrui_row_pane_t

0x8f12,	// (0x00026db3) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f12,	// (0x00026db3) list_single_cmail_header_editor_pane_bg_cp01

0x8f32,	// (0x00026dd3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f32,	// (0x00026dd3) list_single_cmail_header_editor_pane_bg_cp02

0x8f4e,	// (0x00026def) main_radioblah_text_pane_t1_ParamLimits

0x8f4e,	// (0x00026def) main_radioblah_text_pane_t1

0xe995,	// (0x0002c836) cam6_indi_pane_cp01

0xe99d,	// (0x0002c83e) cam6_mode_pane_cp01

0xe9a5,	// (0x0002c846) cam6_pano_pane

0xe9db,	// (0x0002c87c) cam6_zoom_pane_cp01

0xe9e3,	// (0x0002c884) cam6_pano_image_pane

0xe9ee,	// (0x0002c88f) cam6_pano_pane_g1

0xdfbd,	// (0x0002be5e) cam6_pano_pane_g2

0xe9f7,	// (0x0002c898) cam6_pano_pane_g3

0xea00,	// (0x0002c8a1) cam6_pano_pane_g4

0xcdd1,	// (0x0002ac72) cam6_pano_pane_g5

0xea09,	// (0x0002c8aa) cam6_pano_pane_g6

0xea13,	// (0x0002c8b4) cam6_pano_pane_g7

0xea1b,	// (0x0002c8bc) cam6_pano_pane_g8

0xea24,	// (0x0002c8c5) cam6_pano_pane_g9

0x0008,

0xfd36,	// (0x0002dbd7) cam6_pano_pane_g

0x9bc4,	// (0x00027a65) main_browser_tag_pane

0xe72b,	// (0x0002c5cc) grid_navstr_albumart_pane

0xea2f,	// (0x0002c8d0) cell_navstr_albumart_pane_ParamLimits

0xea2f,	// (0x0002c8d0) cell_navstr_albumart_pane

0xea4f,	// (0x0002c8f0) cell_navstr_albumart_pane_g1

0xc17b,	// (0x0002a01c) cell_navstr_albumart_pane_g2

0xc18b,	// (0x0002a02c) cell_navstr_albumart_pane_g3

0xc183,	// (0x0002a024) cell_navstr_albumart_pane_g4

0x0003,

0xfd49,	// (0x0002dbea) cell_navstr_albumart_pane_g

0x8f69,	// (0x00026e0a) bt_list_pane_ParamLimits

0x8f69,	// (0x00026e0a) bt_list_pane

0x8f8a,	// (0x00026e2b) bt_list_pane_t1

0x8f99,	// (0x00026e3a) bt_list_pane_t2

0x0001,

0xfd52,	// (0x0002dbf3) bt_list_pane_t

0x9bc4,	// (0x00027a65) main_cale_prevew_pane

0x8fa8,	// (0x00026e49) popup_cale_preview_window_ParamLimits

0x8fa8,	// (0x00026e49) popup_cale_preview_window

0xa355,	// (0x000281f6) bg_popup_preview_window_pane_cp05_ParamLimits

0xa355,	// (0x000281f6) bg_popup_preview_window_pane_cp05

0xea57,	// (0x0002c8f8) list_cale_preview_pane_ParamLimits

0xea57,	// (0x0002c8f8) list_cale_preview_pane

0x8fc1,	// (0x00026e62) list_double_cale_preview_pane_ParamLimits

0x8fc1,	// (0x00026e62) list_double_cale_preview_pane

0x8fd3,	// (0x00026e74) list_single_cale_preview_pane_ParamLimits

0x8fd3,	// (0x00026e74) list_single_cale_preview_pane

0x8fe7,	// (0x00026e88) list_single_cale_preview_pane_g1

0x8fef,	// (0x00026e90) list_single_cale_preview_pane_t1_ParamLimits

0x8fef,	// (0x00026e90) list_single_cale_preview_pane_t1

0x9004,	// (0x00026ea5) list_double_cale_preview_pane_g1

0x900c,	// (0x00026ead) list_double_cale_preview_pane_t1_ParamLimits

0x900c,	// (0x00026ead) list_double_cale_preview_pane_t1

0x9021,	// (0x00026ec2) list_double_cale_preview_pane_t2_ParamLimits

0x9021,	// (0x00026ec2) list_double_cale_preview_pane_t2

0x0001,

0xfd57,	// (0x0002dbf8) list_double_cale_preview_pane_t_ParamLimits

0xfd57,	// (0x0002dbf8) list_double_cale_preview_pane_t

0x9bc4,	// (0x00027a65) main_ezdial_pane

0xa355,	// (0x000281f6) main_sp_fs_email_pane_ParamLimits

0x863e,	// (0x000264df) cmail_ddmenu_btn01_pane_ParamLimits

0x863e,	// (0x000264df) cmail_ddmenu_btn01_pane

0x8653,	// (0x000264f4) cmail_ddmenu_btn02_pane_ParamLimits

0x8653,	// (0x000264f4) cmail_ddmenu_btn02_pane

0x866b,	// (0x0002650c) cmail_ddmenu_btn03_pane_ParamLimits

0x866b,	// (0x0002650c) cmail_ddmenu_btn03_pane

0x8693,	// (0x00026534) main_sp_fs_ctrlbar_pane_ParamLimits

0x86a9,	// (0x0002654a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8c48,	// (0x00026ae9) list_cmail_body_pane_ParamLimits

0xe628,	// (0x0002c4c9) bg_button_pane_cp12

0xe63d,	// (0x0002c4de) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe63d,	// (0x0002c4de) list_single_cmail_header_detail_pane_g3

0xe686,	// (0x0002c527) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe686,	// (0x0002c527) list_single_cmail_header_detail_pane_t2

0x0001,

0x0c1f,	// (0x0001eac0) list_single_cmail_header_detail_pane_t_ParamLimits

0x0c1f,	// (0x0001eac0) list_single_cmail_header_detail_pane_t

0xe793,	// (0x0002c634) phacti_term_pane_t2_ParamLimits

0xe793,	// (0x0002c634) phacti_term_pane_t2

0x0001,

0x0c29,	// (0x0001eaca) phacti_term_pane_t_ParamLimits

0x0c29,	// (0x0001eaca) phacti_term_pane_t

0xea63,	// (0x0002c904) aid_size_list_single_double

0x9039,	// (0x00026eda) popup_ezdial_listscroll_window

0x905d,	// (0x00026efe) popup_number_entry_window_cp01

0xa500,	// (0x000283a1) bg_popup_call_pane_cp09

0xea6f,	// (0x0002c910) ezdial_list_pane

0xea77,	// (0x0002c918) scroll_pane_cp23

0xc597,	// (0x0002a438) bg_button_pane_cp028_ParamLimits

0xc597,	// (0x0002a438) bg_button_pane_cp028

0x906b,	// (0x00026f0c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x906b,	// (0x00026f0c) cmail_ddmenu_btn01_pane_g1

0x907b,	// (0x00026f1c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x907b,	// (0x00026f1c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd5c,	// (0x0002dbfd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd5c,	// (0x0002dbfd) cmail_ddmenu_btn01_pane_g

0xea7f,	// (0x0002c920) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea7f,	// (0x0002c920) cmail_ddmenu_btn01_pane_t1

0xc3aa,	// (0x0002a24b) bg_button_pane_cp029_ParamLimits

0xc3aa,	// (0x0002a24b) bg_button_pane_cp029

0x907b,	// (0x00026f1c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x907b,	// (0x00026f1c) cmail_ddmenu_btn02_pane_g1

0x9094,	// (0x00026f35) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9094,	// (0x00026f35) cmail_ddmenu_btn02_pane_t1

0xd13d,	// (0x0002afde) bg_button_pane_cp031_ParamLimits

0xd13d,	// (0x0002afde) bg_button_pane_cp031

0x907b,	// (0x00026f1c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x907b,	// (0x00026f1c) cmail_ddmenu_btn03_pane_g1

0x9094,	// (0x00026f35) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9094,	// (0x00026f35) cmail_ddmenu_btn03_pane_t1

0x68f9,	// (0x0002479a) cell_dialer2_keypad_pane_t1_ParamLimits

0x6913,	// (0x000247b4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6913,	// (0x000247b4) cell_dialer2_keypad_pane_t1_copy1

0x7eec,	// (0x00025d8d) ncimui_group_button_pane

0xa355,	// (0x000281f6) main_sp_fs_calendar_pane_ParamLimits

0x8c70,	// (0x00026b11) list_single_cmail_header_caption_pane_ParamLimits

0xe7d6,	// (0x0002c677) aid_recal_txt_sm_pane

0x9bc4,	// (0x00027a65) mian_recal_day_pane

0xe80f,	// (0x0002c6b0) popup_sp_fs_cale_preview_window_ParamLimits

0xea94,	// (0x0002c935) list_recal_day_pane

0xead6,	// (0x0002c977) list_single_recal_day_pane_ParamLimits

0xead6,	// (0x0002c977) list_single_recal_day_pane

0xeae8,	// (0x0002c989) list_single_recal_day_pane_g1_ParamLimits

0xeae8,	// (0x0002c989) list_single_recal_day_pane_g1

0xeaf4,	// (0x0002c995) list_single_recal_day_pane_g2_ParamLimits

0xeaf4,	// (0x0002c995) list_single_recal_day_pane_g2

0xeb00,	// (0x0002c9a1) list_single_recal_day_pane_g3_ParamLimits

0xeb00,	// (0x0002c9a1) list_single_recal_day_pane_g3

0x90b8,	// (0x00026f59) list_single_recal_day_pane_g4_ParamLimits

0x90b8,	// (0x00026f59) list_single_recal_day_pane_g4

0xeb0c,	// (0x0002c9ad) list_single_recal_day_pane_g5_ParamLimits

0xeb0c,	// (0x0002c9ad) list_single_recal_day_pane_g5

0xeb18,	// (0x0002c9b9) list_single_recal_day_pane_g6_ParamLimits

0xeb18,	// (0x0002c9b9) list_single_recal_day_pane_g6

0x0004,

0xfd6b,	// (0x0002dc0c) list_single_recal_day_pane_g_ParamLimits

0xfd6b,	// (0x0002dc0c) list_single_recal_day_pane_g

0xeb2c,	// (0x0002c9cd) list_single_recal_day_pane_t1

0xeb3e,	// (0x0002c9df) list_single_recal_day_pane_t2

0x0001,

0x0cbb,	// (0x0001eb5c) list_single_recal_day_pane_t

0x90d0,	// (0x00026f71) ncimui_query_button_pane_ParamLimits

0x90d0,	// (0x00026f71) ncimui_query_button_pane

0x90e0,	// (0x00026f81) ncimui_query_button_pane_t1_ParamLimits

0x90e0,	// (0x00026f81) ncimui_query_button_pane_t1

0xeb50,	// (0x0002c9f1) ncimui_query_button_pane_t2_ParamLimits

0xeb50,	// (0x0002c9f1) ncimui_query_button_pane_t2

0x0001,

0xfd76,	// (0x0002dc17) ncimui_query_button_pane_t_ParamLimits

0xfd76,	// (0x0002dc17) ncimui_query_button_pane_t

0x90f3,	// (0x00026f94) query_button_pane_ParamLimits

0x90f3,	// (0x00026f94) query_button_pane

0x9bc4,	// (0x00027a65) bg_button_pane_cp0028

0xeb63,	// (0x0002ca04) query_button_pane_t1

0x14e4,	// (0x0001f385) main_tport_pane_ParamLimits

0x8b52,	// (0x000269f3) bg_popup_window_pane_cp01_ParamLimits

0x8b52,	// (0x000269f3) bg_popup_window_pane_cp01

0x8b60,	// (0x00026a01) heading_pane_cp08_ParamLimits

0x8b60,	// (0x00026a01) heading_pane_cp08

0x8b6e,	// (0x00026a0f) heading_pane_cp07_ParamLimits

0x8b6e,	// (0x00026a0f) heading_pane_cp07

0x8bdd,	// (0x00026a7e) cell_tport_appsw_pane_g2

0x0002,

0xfcfb,	// (0x0002db9c) cell_tport_appsw_pane_g

0x4ca2,	// (0x00022b43) input_candi_list_open_g1

0xa91c,	// (0x000287bd) list_cale_time_pane_g6_ParamLimits

0xa91c,	// (0x000287bd) list_cale_time_pane_g6

0x5b55,	// (0x000239f6) aid_size_touch_calib_1_ParamLimits

0x5b55,	// (0x000239f6) aid_size_touch_calib_1

0x5b61,	// (0x00023a02) aid_size_touch_calib_2_ParamLimits

0x5b61,	// (0x00023a02) aid_size_touch_calib_2

0x5b6f,	// (0x00023a10) aid_size_touch_calib_3_ParamLimits

0x5b6f,	// (0x00023a10) aid_size_touch_calib_3

0x5b7f,	// (0x00023a20) aid_size_touch_calib_4_ParamLimits

0x5b7f,	// (0x00023a20) aid_size_touch_calib_4

0x5b8d,	// (0x00023a2e) main_touch_calib_button_group_pane_ParamLimits

0x5b8d,	// (0x00023a2e) main_touch_calib_button_group_pane

0x5b9b,	// (0x00023a3c) main_touch_calib_pane_g1_ParamLimits

0x5ba7,	// (0x00023a48) main_touch_calib_pane_g2_ParamLimits

0x5bb3,	// (0x00023a54) main_touch_calib_pane_g3_ParamLimits

0x5bbf,	// (0x00023a60) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0002d605) main_touch_calib_pane_g_ParamLimits

0x5bcb,	// (0x00023a6c) main_touch_calib_pane_t1_ParamLimits

0x5be4,	// (0x00023a85) main_touch_calib_pane_t2_ParamLimits

0x5bfd,	// (0x00023a9e) main_touch_calib_pane_t3_ParamLimits

0x5c13,	// (0x00023ab4) main_touch_calib_pane_t4_ParamLimits

0x5c29,	// (0x00023aca) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0002d60e) main_touch_calib_pane_t_ParamLimits

0xcb74,	// (0x0002aa15) list_single_fp_cale_pane_g3_ParamLimits

0xcb74,	// (0x0002aa15) list_single_fp_cale_pane_g3

0x14c8,	// (0x0001f369) bg_button_pane_cp012_ParamLimits

0x14c8,	// (0x0001f369) bg_vkb2_func_pane_cp03_ParamLimits

0x242f,	// (0x000202d0) cell_vitu2_function_top_pane_g1_ParamLimits

0x14c8,	// (0x0001f369) bg_vkb2_func_pane_cp04_ParamLimits

0x7e74,	// (0x00025d15) main_ncimui_button_group_pane_ParamLimits

0x7e74,	// (0x00025d15) main_ncimui_button_group_pane

0x7eda,	// (0x00025d7b) main_ncimui_pane_t3_ParamLimits

0x7eda,	// (0x00025d7b) main_ncimui_pane_t3

0xe741,	// (0x0002c5e2) phacti_button_group_pane

0xea63,	// (0x0002c904) aid_size_list_single_double_ParamLimits

0x9039,	// (0x00026eda) popup_ezdial_listscroll_window_ParamLimits

0x905d,	// (0x00026efe) popup_number_entry_window_cp01_ParamLimits

0x9100,	// (0x00026fa1) phacti_button_pane_ParamLimits

0x9100,	// (0x00026fa1) phacti_button_pane

0x9bc4,	// (0x00027a65) bg_button_pane_cp14

0xeb71,	// (0x0002ca12) phacti_button_pane_t1

0x9111,	// (0x00026fb2) main_touch_calib_button_pane_ParamLimits

0x9111,	// (0x00026fb2) main_touch_calib_button_pane

0xa30d,	// (0x000281ae) bg_button_pane_cp18_ParamLimits

0xa30d,	// (0x000281ae) bg_button_pane_cp18

0xeb7f,	// (0x0002ca20) main_touch_calib_button_pane_t1_ParamLimits

0xeb7f,	// (0x0002ca20) main_touch_calib_button_pane_t1

0xeb95,	// (0x0002ca36) main_touch_calib_button_pane_t2_ParamLimits

0xeb95,	// (0x0002ca36) main_touch_calib_button_pane_t2

0x0001,

0x0cc5,	// (0x0001eb66) main_touch_calib_button_pane_t_ParamLimits

0x0cc5,	// (0x0001eb66) main_touch_calib_button_pane_t

0x9bc4,	// (0x00027a65) cell_ncimui_button_pane

0x9bc4,	// (0x00027a65) bg_button_pane_cp032

0xebb3,	// (0x0002ca54) cell_ncimui_button_pane_t1

0x1d3f,	// (0x0001fbe0) image3_infobar_pane_ParamLimits

0x1d3f,	// (0x0001fbe0) image3_infobar_pane

0x8297,	// (0x00026138) fs_bigclock_status_pane_ParamLimits

0x8297,	// (0x00026138) fs_bigclock_status_pane

0x82a4,	// (0x00026145) main_fs_bigclock_clock_pane_ParamLimits

0x82a4,	// (0x00026145) main_fs_bigclock_clock_pane

0x82b8,	// (0x00026159) main_fs_bigclock_indi_pane_ParamLimits

0x82b8,	// (0x00026159) main_fs_bigclock_indi_pane

0x82e0,	// (0x00026181) main_fs_bigclock_swipe_pane_ParamLimits

0x82e0,	// (0x00026181) main_fs_bigclock_swipe_pane

0x9bc4,	// (0x00027a65) main_fs_clock_dumped_data

0xe0ca,	// (0x0002bf6b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0ca,	// (0x0002bf6b) list_single_fs_bigclock_indicator_pane_g1

0xe0e6,	// (0x0002bf87) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0e6,	// (0x0002bf87) list_single_fs_bigclock_indicator_pane_g2

0xe100,	// (0x0002bfa1) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe100,	// (0x0002bfa1) list_single_fs_bigclock_indicator_pane_g3

0xe11a,	// (0x0002bfbb) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe11a,	// (0x0002bfbb) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0af2,	// (0x0001e993) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0af2,	// (0x0001e993) list_single_fs_bigclock_indicator_pane_g

0xe145,	// (0x0002bfe6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe145,	// (0x0002bfe6) list_single_fs_bigclock_indicator_pane_t1

0xe16d,	// (0x0002c00e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe16d,	// (0x0002c00e) list_single_fs_bigclock_indicator_pane_t2

0xe195,	// (0x0002c036) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe195,	// (0x0002c036) list_single_fs_bigclock_indicator_pane_t3

0xe1bd,	// (0x0002c05e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1bd,	// (0x0002c05e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0afd,	// (0x0001e99e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0afd,	// (0x0001e99e) list_single_fs_bigclock_indicator_pane_t

0xebc1,	// (0x0002ca62) image3_infobar_fav_pane_ParamLimits

0xebc1,	// (0x0002ca62) image3_infobar_fav_pane

0xebd1,	// (0x0002ca72) image3_infobar_loc_pane_ParamLimits

0xebd1,	// (0x0002ca72) image3_infobar_loc_pane

0xebe5,	// (0x0002ca86) image3_infobar_time_pane_ParamLimits

0xebe5,	// (0x0002ca86) image3_infobar_time_pane

0xc7b2,	// (0x0002a653) image3_infobar_time_pane_g1

0xebf5,	// (0x0002ca96) image3_infobar_time_pane_t1

0xc7b2,	// (0x0002a653) image3_infobar_loc_pane_g1

0xec03,	// (0x0002caa4) image3_infobar_loc_pane_g2

0x0001,

0xfd7b,	// (0x0002dc1c) image3_infobar_loc_pane_g

0xec0b,	// (0x0002caac) image3_infobar_loc_pane_t1

0xc7b2,	// (0x0002a653) image3_infobar_fav_pane_g1

0xec19,	// (0x0002caba) image3_infobar_fav_pane_g2

0x0001,

0xfd80,	// (0x0002dc21) image3_infobar_fav_pane_g

0xec21,	// (0x0002cac2) fs_bigclock_status_battery_pane

0xec2a,	// (0x0002cacb) fs_bigclock_status_signal_pane

0xec33,	// (0x0002cad4) fs_bigclock_status_title_pane

0xec3c,	// (0x0002cadd) fs_bigclock_status_signal_pane_g1

0xec45,	// (0x0002cae6) fs_bigclock_status_signal_pane_g2

0x0001,

0x0cd4,	// (0x0001eb75) fs_bigclock_status_signal_pane_g

0xec4d,	// (0x0002caee) fs_bigclock_status_battery_pane_g1

0xec56,	// (0x0002caf7) fs_bigclock_status_battery_pane_g2

0x0001,

0x0cd9,	// (0x0001eb7a) fs_bigclock_status_battery_pane_g

0xec5e,	// (0x0002caff) fs_bigclock_status_title_pane_t1

0x9121,	// (0x00026fc2) main_fs_bigclock_clock_pane_g1

0x9121,	// (0x00026fc2) main_fs_bigclock_clock_pane_g2

0x912e,	// (0x00026fcf) main_fs_bigclock_clock_pane_g3

0x912e,	// (0x00026fcf) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd85,	// (0x0002dc26) main_fs_bigclock_clock_pane_g

0x913a,	// (0x00026fdb) main_fs_bigclock_clock_pane_t1

0x914d,	// (0x00026fee) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd8e,	// (0x0002dc2f) main_fs_bigclock_clock_pane_t

0xec6c,	// (0x0002cb0d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec6c,	// (0x0002cb0d) list_single_fs_bigclock_indicator_pane

0xec7d,	// (0x0002cb1e) list_single_fs_bigclock_pane_ParamLimits

0xec7d,	// (0x0002cb1e) list_single_fs_bigclock_pane

0xeca3,	// (0x0002cb44) main_fs_bigclock_indicator_pane_t1

0xecb2,	// (0x0002cb53) list_single_fs_bigclock_pane_g1

0xecba,	// (0x0002cb5b) list_single_fs_bigclock_pane_t1

0xc7b2,	// (0x0002a653) main_fs_bigclock_swipe_pane_g1

0xecfd,	// (0x0002cb9e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd9a,	// (0x0002dc3b) main_fs_bigclock_swipe_pane_g

0xed05,	// (0x0002cba6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed05,	// (0x0002cba6) main_fs_bigclock_swipe_pane_t1

0x45a7,	// (0x00022448) call_type_pane_ParamLimits

0x9bc4,	// (0x00027a65) main_btmg_pane

0xe90c,	// (0x0002c7ad) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe90c,	// (0x0002c7ad) list_single_cale_mrui_row_pane_g2

0x0002,

0x0c6b,	// (0x0001eb0c) list_single_cale_mrui_row_pane_g_ParamLimits

0x0c6b,	// (0x0001eb0c) list_single_cale_mrui_row_pane_g

0xeabd,	// (0x0002c95e) list_recal_vselct_arw_lo_pane

0xeac5,	// (0x0002c966) list_recal_vselct_arw_up_pane

0xeacd,	// (0x0002c96e) list_recal_vselct_pane

0x91a4,	// (0x00027045) btmg_button_pane

0x91b0,	// (0x00027051) main_btmg_pane_g1

0x9bc4,	// (0x00027a65) bg_button_pane_cp044

0xed22,	// (0x0002cbc3) btmg_button_pane_t1

0xc396,	// (0x0002a237) aid_listscroll_gen

0xa355,	// (0x000281f6) main_cntbar_detail_pane

0xe60a,	// (0x0002c4ab) list_cmail_folder_pane

0xd47a,	// (0x0002b31b) sp_fs_scroll_pane_cp03_ParamLimits

0x91b8,	// (0x00027059) list_single_fs_dyc_pane_cp01_ParamLimits

0x91b8,	// (0x00027059) list_single_fs_dyc_pane_cp01

0xed30,	// (0x0002cbd1) aid_size_cmail_indent

0xed39,	// (0x0002cbda) list_single_dyc_row_pane_cp01

0x9204,	// (0x000270a5) cntbar_detail_list_pane_ParamLimits

0x9204,	// (0x000270a5) cntbar_detail_list_pane

0x923e,	// (0x000270df) main_cntbar_detail_cont_pane_ParamLimits

0x923e,	// (0x000270df) main_cntbar_detail_cont_pane

0x44ca,	// (0x0002236b) scroll_pane_cp032_ParamLimits

0x44ca,	// (0x0002236b) scroll_pane_cp032

0x924a,	// (0x000270eb) cntbar_detail_list_event_pane_ParamLimits

0x924a,	// (0x000270eb) cntbar_detail_list_event_pane

0x9210,	// (0x000270b1) cntbar_detail_list_shct_pane

0xa7a7,	// (0x00028648) aid_list_gen

0xed42,	// (0x0002cbe3) aid_scroll

0xed4b,	// (0x0002cbec) aid_size_touch_scroll_bar

0x76be,	// (0x0002555f) aid_list_double

0x925e,	// (0x000270ff) aid_list_single

0x76ac,	// (0x0002554d) aid_list_single_lg

0x9267,	// (0x00027108) aid_list_z_g_a_sm

0x926f,	// (0x00027110) aid_list_z_g_d

0x9277,	// (0x00027118) aid_txt_z_prm

0x9285,	// (0x00027126) aid_txt_z_prm_cp01

0x9293,	// (0x00027134) aid_txt_z_sec

0x92a1,	// (0x00027142) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92a1,	// (0x00027142) main_cntbar_detail_cont_pane_g1

0x92ae,	// (0x0002714f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x92ae,	// (0x0002714f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd9f,	// (0x0002dc40) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd9f,	// (0x0002dc40) main_cntbar_detail_cont_pane_g

0xed54,	// (0x0002cbf5) main_cntbar_detail_cont_pane_t1

0xed62,	// (0x0002cc03) main_cntbar_detail_cont_pane_t2

0xed70,	// (0x0002cc11) main_cntbar_detail_cont_pane_t3

0x0002,

0x0d02,	// (0x0001eba3) main_cntbar_detail_cont_pane_t

0x92ba,	// (0x0002715b) cell_cntbar_detail_list_shct_pane_ParamLimits

0x92ba,	// (0x0002715b) cell_cntbar_detail_list_shct_pane

0xed7e,	// (0x0002cc1f) cntbar_detail_list_shct_pane_g1

0xed87,	// (0x0002cc28) cntbar_detail_list_shct_pane_g2

0x0001,

0x0d09,	// (0x0001ebaa) cntbar_detail_list_shct_pane_g

0x92ce,	// (0x0002716f) cntbar_detail_list_event_pane_g1_ParamLimits

0x92ce,	// (0x0002716f) cntbar_detail_list_event_pane_g1

0x92da,	// (0x0002717b) cntbar_detail_list_event_pane_g2_ParamLimits

0x92da,	// (0x0002717b) cntbar_detail_list_event_pane_g2

0x0005,

0xfda4,	// (0x0002dc45) cntbar_detail_list_event_pane_g_ParamLimits

0xfda4,	// (0x0002dc45) cntbar_detail_list_event_pane_g

0x9346,	// (0x000271e7) cntbar_detail_list_event_pane_t1_ParamLimits

0x9346,	// (0x000271e7) cntbar_detail_list_event_pane_t1

0x935b,	// (0x000271fc) cntbar_detail_list_event_pane_t2_ParamLimits

0x935b,	// (0x000271fc) cntbar_detail_list_event_pane_t2

0x0002,

0xfdb1,	// (0x0002dc52) cntbar_detail_list_event_pane_t_ParamLimits

0xfdb1,	// (0x0002dc52) cntbar_detail_list_event_pane_t

0xc7b2,	// (0x0002a653) cell_cntbar_detail_list_shct_pane_g1

0xaf13,	// (0x00028db4) navi_pane_mv_g3

0xa355,	// (0x000281f6) main_cntbar_detail_pane_ParamLimits

0x9bc4,	// (0x00027a65) main_notif_wgt_pane

0x1a80,	// (0x0001f921) aid_tch_main_mp4_pane_g4

0x1cb5,	// (0x0001fb56) popup_slider_window_cp02

0xeab3,	// (0x0002c954) list_recal_day_event_pane

0x91e4,	// (0x00027085) cntbar_detail_btn_pane_ParamLimits

0x91e4,	// (0x00027085) cntbar_detail_btn_pane

0x91f4,	// (0x00027095) cntbar_detail_btn_pane_cp01_ParamLimits

0x91f4,	// (0x00027095) cntbar_detail_btn_pane_cp01

0x9210,	// (0x000270b1) cntbar_detail_list_shct_pane_ParamLimits

0x921c,	// (0x000270bd) cntbar_detail_pane_g1_ParamLimits

0x921c,	// (0x000270bd) cntbar_detail_pane_g1

0x9228,	// (0x000270c9) cntbar_detail_pane_t1_ParamLimits

0x9228,	// (0x000270c9) cntbar_detail_pane_t1

0x92e6,	// (0x00027187) cntbar_detail_list_event_pane_g3_ParamLimits

0x92e6,	// (0x00027187) cntbar_detail_list_event_pane_g3

0x92fe,	// (0x0002719f) cntbar_detail_list_event_pane_g4_ParamLimits

0x92fe,	// (0x0002719f) cntbar_detail_list_event_pane_g4

0x9316,	// (0x000271b7) cntbar_detail_list_event_pane_g5_ParamLimits

0x9316,	// (0x000271b7) cntbar_detail_list_event_pane_g5

0x932e,	// (0x000271cf) cntbar_detail_list_event_pane_g6_ParamLimits

0x932e,	// (0x000271cf) cntbar_detail_list_event_pane_g6

0x9370,	// (0x00027211) cntbar_detail_list_event_pane_t3_ParamLimits

0x9370,	// (0x00027211) cntbar_detail_list_event_pane_t3

0x9382,	// (0x00027223) popup_notif_wgt_window_ParamLimits

0x9382,	// (0x00027223) popup_notif_wgt_window

0x9392,	// (0x00027233) popup_submenu_window_cp01_ParamLimits

0x9392,	// (0x00027233) popup_submenu_window_cp01

0xa500,	// (0x000283a1) bg_popup_window_pane_cp10

0xed90,	// (0x0002cc31) listscroll_notif_wgt_pane

0xeda2,	// (0x0002cc43) list_notif_wgt_window

0xedab,	// (0x0002cc4c) scroll_pane_cp033

0x93a0,	// (0x00027241) list_notif_wgt_row_pane_ParamLimits

0x93a0,	// (0x00027241) list_notif_wgt_row_pane

0xedb4,	// (0x0002cc55) aid_size_list_notif_wgt_del

0xedc1,	// (0x0002cc62) list_notif_wgt_row_pane_g1

0xedcd,	// (0x0002cc6e) list_notif_wgt_row_pane_g2

0xeddc,	// (0x0002cc7d) list_notif_wgt_row_pane_g3

0x0002,

0x0d22,	// (0x0001ebc3) list_notif_wgt_row_pane_g

0xede9,	// (0x0002cc8a) list_notif_wgt_row_pane_t1

0xedff,	// (0x0002cca0) list_notif_wgt_row_pane_t2

0xee11,	// (0x0002ccb2) list_notif_wgt_row_pane_t3

0x0002,

0x0d29,	// (0x0001ebca) list_notif_wgt_row_pane_t

0xd518,	// (0x0002b3b9) list_recal_day_event_pane_g1

0xee23,	// (0x0002ccc4) list_recal_day_event_pane_t1

0x9bc4,	// (0x00027a65) bg_button_pane_cp045

0x93b2,	// (0x00027253) cntbar_detail_btn_pane_t1

0xc3aa,	// (0x0002a24b) main_callh_pane_ParamLimits

0xc3aa,	// (0x0002a24b) main_callh_pane

0x9bc4,	// (0x00027a65) main_coverflow0_pane

0x9bc4,	// (0x00027a65) main_wgtman_pane

0x82f8,	// (0x00026199) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x82f8,	// (0x00026199) main_fs_bigclock_unlock_btn_pane

0x8bd5,	// (0x00026a76) bg_button_pane_cp16

0x8be5,	// (0x00026a86) cell_tport_appsw_pane_g3

0x93c0,	// (0x00027261) cf0_flow_pane_ParamLimits

0x93c0,	// (0x00027261) cf0_flow_pane

0xee32,	// (0x0002ccd3) listscroll_cf0_pane

0xee3d,	// (0x0002ccde) main_cf0_pane_g1

0x93cf,	// (0x00027270) main_cf0_pane_t1_ParamLimits

0x93cf,	// (0x00027270) main_cf0_pane_t1

0x93e3,	// (0x00027284) main_cf0_pane_t2_ParamLimits

0x93e3,	// (0x00027284) main_cf0_pane_t2

0x0001,

0xfdb8,	// (0x0002dc59) main_cf0_pane_t_ParamLimits

0xfdb8,	// (0x0002dc59) main_cf0_pane_t

0xee4f,	// (0x0002ccf0) scroll_pane_cp11

0x93f7,	// (0x00027298) cf0_flow_pane_g1

0x93ff,	// (0x000272a0) cf0_flow_pane_g2

0x0001,

0xfdbd,	// (0x0002dc5e) cf0_flow_pane_g

0x9407,	// (0x000272a8) cf0_flow_pane_t1

0x9bc4,	// (0x00027a65) main_call6_pane

0x9bc4,	// (0x00027a65) main_calllock_pane

0x9415,	// (0x000272b6) call6_btn_grp_pane_ParamLimits

0x9415,	// (0x000272b6) call6_btn_grp_pane

0x9424,	// (0x000272c5) call6_pane_g1_ParamLimits

0x9424,	// (0x000272c5) call6_pane_g1

0x9433,	// (0x000272d4) popup_call6_1st_window_ParamLimits

0x9433,	// (0x000272d4) popup_call6_1st_window

0x9441,	// (0x000272e2) popup_call6_2nd_window_ParamLimits

0x9441,	// (0x000272e2) popup_call6_2nd_window

0x944f,	// (0x000272f0) cell_call6_btn_pane_ParamLimits

0x944f,	// (0x000272f0) cell_call6_btn_pane

0xa500,	// (0x000283a1) bg_popup_call2_in_pane_cp03

0xee5a,	// (0x0002ccfb) popup_call6_1st_window_g1

0xee62,	// (0x0002cd03) popup_call6_1st_window_g2

0xee6a,	// (0x0002cd0b) popup_call6_1st_window_g3

0x0002,

0x0d3f,	// (0x0001ebe0) popup_call6_1st_window_g

0xee72,	// (0x0002cd13) popup_call6_1st_window_t1

0xee81,	// (0x0002cd22) popup_call6_1st_window_t2

0xee91,	// (0x0002cd32) popup_call6_1st_window_t3

0x0002,

0x0d46,	// (0x0001ebe7) popup_call6_1st_window_t

0xa500,	// (0x000283a1) bg_popup_call2_in_pane_cp04

0xee5a,	// (0x0002ccfb) popup_call6_2nd_window_g1

0xee62,	// (0x0002cd03) popup_call6_2nd_window_g2

0xee6a,	// (0x0002cd0b) popup_call6_2nd_window_g3

0x0002,

0x0d3f,	// (0x0001ebe0) popup_call6_2nd_window_g

0xee72,	// (0x0002cd13) popup_call6_2nd_window_t1

0x9bc4,	// (0x00027a65) bg_button_pane_cp15

0xeea1,	// (0x0002cd42) cell_call6_btn_pane_g1

0xeeaa,	// (0x0002cd4b) cell_call6_btn_pane_t1

0x945e,	// (0x000272ff) listscroll_wgtman_pane_ParamLimits

0x945e,	// (0x000272ff) listscroll_wgtman_pane

0x947a,	// (0x0002731b) wgtman_btn_pane_ParamLimits

0x947a,	// (0x0002731b) wgtman_btn_pane

0xad27,	// (0x00028bc8) aid_scroll_copy1

0xeeb9,	// (0x0002cd5a) list_wgtman_pane

0x94af,	// (0x00027350) wgtman_btn_pane_g1_ParamLimits

0x94af,	// (0x00027350) wgtman_btn_pane_g1

0x94d7,	// (0x00027378) wgtman_btn_pane_t1_ParamLimits

0x94d7,	// (0x00027378) wgtman_btn_pane_t1

0xeec3,	// (0x0002cd64) wgtman_btn_pane_t2_ParamLimits

0xeec3,	// (0x0002cd64) wgtman_btn_pane_t2

0x0001,

0xfdc2,	// (0x0002dc63) wgtman_btn_pane_t_ParamLimits

0xfdc2,	// (0x0002dc63) wgtman_btn_pane_t

0x950e,	// (0x000273af) listrow_wgtman_pane_ParamLimits

0x950e,	// (0x000273af) listrow_wgtman_pane

0x952a,	// (0x000273cb) listrow_wgtman_pane_g1

0x9537,	// (0x000273d8) listrow_wgtman_pane_g2

0x0001,

0xfdc7,	// (0x0002dc68) listrow_wgtman_pane_g

0x9555,	// (0x000273f6) listrow_wgtman_pane_t1

0x956d,	// (0x0002740e) listrow_wgtman_pane_t2

0x0001,

0xfdcc,	// (0x0002dc6d) listrow_wgtman_pane_t

0x9593,	// (0x00027434) wait_bar_pane_cp09

0xeeda,	// (0x0002cd7b) main_calllock_btn_pane

0xeee4,	// (0x0002cd85) main_calllock_pane_g1

0x9bc4,	// (0x00027a65) bg_button_pane_cp17

0xeeef,	// (0x0002cd90) main_calllock_btn_pane_g1

0xeef8,	// (0x0002cd99) main_calllock_btn_pane_t1

0x9bc4,	// (0x00027a65) main_dialer3_pane

0x9bc4,	// (0x00027a65) main_fmrd2_pane

0xc7b2,	// (0x0002a653) main_fs_bigclock_unlock_btn_pane_g1

0x95ad,	// (0x0002744e) main_fs_bigclock_unlock_btn_pane_t1

0x95bb,	// (0x0002745c) area_fmrd2_info_pane_ParamLimits

0x95bb,	// (0x0002745c) area_fmrd2_info_pane

0x95c9,	// (0x0002746a) area_fmrd2_visual_pane_ParamLimits

0x95c9,	// (0x0002746a) area_fmrd2_visual_pane

0x95d7,	// (0x00027478) fmrd2_indi_pane_ParamLimits

0x95d7,	// (0x00027478) fmrd2_indi_pane

0x95e4,	// (0x00027485) area_fmrd2_visual_pane_g1

0x95ec,	// (0x0002748d) area_fmrd2_visual_pane_t1

0x95fc,	// (0x0002749d) area_fmrd2_visual_pane_t2

0x960c,	// (0x000274ad) area_fmrd2_visual_pane_t3

0x0002,

0xfdd6,	// (0x0002dc77) area_fmrd2_visual_pane_t

0x961c,	// (0x000274bd) area_fmrd2_info_pane_g1

0x9624,	// (0x000274c5) area_fmrd2_info_pane_t1

0x9634,	// (0x000274d5) area_fmrd2_info_pane_t2

0x9644,	// (0x000274e5) area_fmrd2_info_pane_t3

0x9654,	// (0x000274f5) area_fmrd2_info_pane_t4

0x0003,

0xfddd,	// (0x0002dc7e) area_fmrd2_info_pane_t

0x9662,	// (0x00027503) fmrd2_indi_pane_t1

0x9672,	// (0x00027513) fmrd2_indi_pane_t2

0x9682,	// (0x00027523) fmrd2_indi_pane_t3

0x0002,

0xfde6,	// (0x0002dc87) fmrd2_indi_pane_t

0xe129,	// (0x0002bfca) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe129,	// (0x0002bfca) list_single_fs_bigclock_indicator_pane_g5

0xe1da,	// (0x0002c07b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1da,	// (0x0002c07b) list_single_fs_bigclock_indicator_pane_t5

0x8d8d,	// (0x00026c2e) aid_cell_bcale_month_pane_ParamLimits

0x8d8d,	// (0x00026c2e) aid_cell_bcale_month_pane

0x8dab,	// (0x00026c4c) bcale_month_pane_ParamLimits

0x8dab,	// (0x00026c4c) bcale_month_pane

0x8dc9,	// (0x00026c6a) bcale_preview_pane_ParamLimits

0x8dc9,	// (0x00026c6a) bcale_preview_pane

0xecba,	// (0x0002cb5b) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd9,	// (0x0002cb7a) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd9,	// (0x0002cb7a) list_single_fs_bigclock_pane_t2

0x0001,

0x0cf3,	// (0x0001eb94) list_single_fs_bigclock_pane_t_ParamLimits

0x0cf3,	// (0x0001eb94) list_single_fs_bigclock_pane_t

0x95a5,	// (0x00027446) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd1,	// (0x0002dc72) main_fs_bigclock_unlock_btn_pane_g

0x9690,	// (0x00027531) aid_dia3_key_size_ParamLimits

0x9690,	// (0x00027531) aid_dia3_key_size

0x969c,	// (0x0002753d) aid_dia3_listrow_size_ParamLimits

0x969c,	// (0x0002753d) aid_dia3_listrow_size

0x96ac,	// (0x0002754d) dia3_keypad_fun_pane_ParamLimits

0x96ac,	// (0x0002754d) dia3_keypad_fun_pane

0x96be,	// (0x0002755f) dia3_keypad_num_pane_ParamLimits

0x96be,	// (0x0002755f) dia3_keypad_num_pane

0x96d0,	// (0x00027571) dia3_listscroll_pane_ParamLimits

0x96d0,	// (0x00027571) dia3_listscroll_pane

0x96de,	// (0x0002757f) dia3_numentry_pane_ParamLimits

0x96de,	// (0x0002757f) dia3_numentry_pane

0xef07,	// (0x0002cda8) dia3_list_pane

0xef12,	// (0x0002cdb3) scroll_pane_cp12

0x9bc4,	// (0x00027a65) bg_dia3_numentry_pane

0x96ec,	// (0x0002758d) dia3_numentry_pane_t1

0x96fb,	// (0x0002759c) cell_dia3_key_num_pane

0x9703,	// (0x000275a4) cell_dia3_key0_fun_pane_ParamLimits

0x9703,	// (0x000275a4) cell_dia3_key0_fun_pane

0x9710,	// (0x000275b1) cell_dia3_key1_fun_pane_ParamLimits

0x9710,	// (0x000275b1) cell_dia3_key1_fun_pane

0x971d,	// (0x000275be) dia3_listrow_pane

0xde7c,	// (0x0002bd1d) bg_dia3_numentry_pane_g1

0x9bc4,	// (0x00027a65) bg_button_pane_cp21

0xef1d,	// (0x0002cdbe) cell_dia3_key_num_pane_t1

0xef2b,	// (0x0002cdcc) cell_dia3_key_num_pane_t2

0xef3a,	// (0x0002cddb) cell_dia3_key_num_pane_t3

0xef49,	// (0x0002cdea) cell_dia3_key_num_pane_t4

0x0003,

0x0d78,	// (0x0001ec19) cell_dia3_key_num_pane_t

0x9bc4,	// (0x00027a65) bg_button_pane_cp19

0x972a,	// (0x000275cb) cell_dia3_key0_fun_pane_g1

0x9bc4,	// (0x00027a65) bg_button_pane_cp20

0x9732,	// (0x000275d3) cell_dia3_key1_fun_pane_g1

0x973a,	// (0x000275db) area_left_week_number_pane

0x974d,	// (0x000275ee) area_top_day_name_pane

0x975b,	// (0x000275fc) frame_month_view_pane

0xef58,	// (0x0002cdf9) grid_month_view_pane

0x9770,	// (0x00027611) cell_top_day_name_pane_ParamLimits

0x9770,	// (0x00027611) cell_top_day_name_pane

0x978a,	// (0x0002762b) cell_area_left_week_number_pane_ParamLimits

0x978a,	// (0x0002762b) cell_area_left_week_number_pane

0x97ad,	// (0x0002764e) cell_month_view_pane_ParamLimits

0x97ad,	// (0x0002764e) cell_month_view_pane

0xef66,	// (0x0002ce07) frm_month_g1

0x97d9,	// (0x0002767a) frm_month_g2

0x97ea,	// (0x0002768b) frm_month_g3

0x97fb,	// (0x0002769c) frm_month_g4

0x980c,	// (0x000276ad) frm_month_g5

0x981f,	// (0x000276c0) frm_month_g6

0x9832,	// (0x000276d3) frm_month_g7

0xef73,	// (0x0002ce14) frm_month_g8

0x9845,	// (0x000276e6) frm_month_g9

0x9852,	// (0x000276f3) frm_month_g10

0x985f,	// (0x00027700) frm_month_g11

0x986c,	// (0x0002770d) frm_month_g12

0x9879,	// (0x0002771a) frm_month_g13

0x9886,	// (0x00027727) frm_month_g14

0x9895,	// (0x00027736) frm_month_g15

0x98a4,	// (0x00027745) frm_month_g16

0x000f,

0xfded,	// (0x0002dc8e) frm_month_g

0xef80,	// (0x0002ce21) cell_top_day_name_pane_t1

0x98b3,	// (0x00027754) cell_area_left_week_number_pane_g1

0x98c2,	// (0x00027763) cell_area_left_week_number_pane_t1

0xca00,	// (0x0002a8a1) cell_month_view_pane_g1

0x98d8,	// (0x00027779) cell_month_view_pane_t1

0x9bc4,	// (0x00027a65) main_fps_pane

0xe3ca,	// (0x0002c26b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3ca,	// (0x0002c26b) cmail_ddmenu_btn02_pane_cp1

0xe3e6,	// (0x0002c287) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3e6,	// (0x0002c287) cmail_ddmenu_btn02_pane_cp2

0x9087,	// (0x00026f28) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9087,	// (0x00026f28) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd61,	// (0x0002dc02) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd61,	// (0x0002dc02) cmail_ddmenu_btn02_pane_g

0x90a6,	// (0x00026f47) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x90a6,	// (0x00026f47) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd66,	// (0x0002dc07) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd66,	// (0x0002dc07) cmail_ddmenu_btn02_pane_t

0x98ee,	// (0x0002778f) fps_text_pane_ParamLimits

0x98ee,	// (0x0002778f) fps_text_pane

0x98fb,	// (0x0002779c) main_fps_pane_g1_ParamLimits

0x98fb,	// (0x0002779c) main_fps_pane_g1

0x9909,	// (0x000277aa) wait_bar_pane_cp010_ParamLimits

0x9909,	// (0x000277aa) wait_bar_pane_cp010

0x9915,	// (0x000277b6) fps_text_pane_t1_ParamLimits

0x9915,	// (0x000277b6) fps_text_pane_t1

0x6a0c,	// (0x000248ad) cam4_image_uncrop_pane_g1

0x6a15,	// (0x000248b6) cam4_image_uncrop_pane_g2

0x6a1e,	// (0x000248bf) cam4_image_uncrop_pane_g3

0x6a27,	// (0x000248c8) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0002d7a2) cam4_image_uncrop_pane_g

0x971d,	// (0x000275be) dia3_listrow_pane_ParamLimits

0x9bc4,	// (0x00027a65) main_phob2_pane

0x8bb7,	// (0x00026a58) cell_tport_appsw_pane_cp02_ParamLimits

0x8bb7,	// (0x00026a58) cell_tport_appsw_pane_cp02

0x8bc6,	// (0x00026a67) cell_tport_appsw_pane_cp03_ParamLimits

0x8bc6,	// (0x00026a67) cell_tport_appsw_pane_cp03

0x9bc4,	// (0x00027a65) phob2_contact_card_pane

0x9bc4,	// (0x00027a65) phob2_listscroll_pane

0xef93,	// (0x0002ce34) phob2_list_pane

0xef9b,	// (0x0002ce3c) scroll_pane_cp034

0x992e,	// (0x000277cf) phob2_cc_data_pane_ParamLimits

0x992e,	// (0x000277cf) phob2_cc_data_pane

0x9948,	// (0x000277e9) phob2_cc_listscroll_pane_ParamLimits

0x9948,	// (0x000277e9) phob2_cc_listscroll_pane

0x9962,	// (0x00027803) list_double_large_graphic_phob2_pane_ParamLimits

0x9962,	// (0x00027803) list_double_large_graphic_phob2_pane

0x9981,	// (0x00027822) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9981,	// (0x00027822) list_double_large_graphic_phob2_pane_g1

0x9997,	// (0x00027838) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9997,	// (0x00027838) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe0e,	// (0x0002dcaf) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe0e,	// (0x0002dcaf) list_double_large_graphic_phob2_pane_g

0x99a3,	// (0x00027844) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99a3,	// (0x00027844) list_double_large_graphic_phob2_pane_t1

0x99b9,	// (0x0002785a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99b9,	// (0x0002785a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe13,	// (0x0002dcb4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe13,	// (0x0002dcb4) list_double_large_graphic_phob2_pane_t

0x9bc4,	// (0x00027a65) list_highlight_pane_cp024

0x99ce,	// (0x0002786f) phob2_cc_button_pane

0x99d6,	// (0x00027877) phob2_cc_data_pane_g1_ParamLimits

0x99d6,	// (0x00027877) phob2_cc_data_pane_g1

0x99e2,	// (0x00027883) phob2_cc_data_pane_g2_ParamLimits

0x99e2,	// (0x00027883) phob2_cc_data_pane_g2

0x0001,

0xfe18,	// (0x0002dcb9) phob2_cc_data_pane_g_ParamLimits

0xfe18,	// (0x0002dcb9) phob2_cc_data_pane_g

0x99ee,	// (0x0002788f) phob2_cc_data_pane_t1_ParamLimits

0x99ee,	// (0x0002788f) phob2_cc_data_pane_t1

0x9a00,	// (0x000278a1) phob2_cc_data_pane_t2_ParamLimits

0x9a00,	// (0x000278a1) phob2_cc_data_pane_t2

0x9a12,	// (0x000278b3) phob2_cc_data_pane_t3_ParamLimits

0x9a12,	// (0x000278b3) phob2_cc_data_pane_t3

0x0002,

0xfe1d,	// (0x0002dcbe) phob2_cc_data_pane_t_ParamLimits

0xfe1d,	// (0x0002dcbe) phob2_cc_data_pane_t

0xefa3,	// (0x0002ce44) phob2_cc_list_pane_ParamLimits

0xefa3,	// (0x0002ce44) phob2_cc_list_pane

0xd5c1,	// (0x0002b462) scroll_pane_cp035_ParamLimits

0xd5c1,	// (0x0002b462) scroll_pane_cp035

0xa355,	// (0x000281f6) bg_button_pane_cp033

0xefaf,	// (0x0002ce50) phob2_cc_button_pane_g1

0xefbb,	// (0x0002ce5c) phob2_cc_button_pane_t1

0xefd0,	// (0x0002ce71) phob2_cc_button_pane_t2

0x0001,

0x0db8,	// (0x0001ec59) phob2_cc_button_pane_t

0x9a24,	// (0x000278c5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a24,	// (0x000278c5) list_double_large_graphic_phob2_cc_pane

0x9a4d,	// (0x000278ee) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a4d,	// (0x000278ee) list_double_large_graphic_phob2_cc_pane_g1

0x9a5e,	// (0x000278ff) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a5e,	// (0x000278ff) list_double_large_graphic_phob2_cc_pane_g2

0x9a6a,	// (0x0002790b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a6a,	// (0x0002790b) list_double_large_graphic_phob2_cc_pane_g3

0x9a76,	// (0x00027917) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a76,	// (0x00027917) list_double_large_graphic_phob2_cc_pane_g4

0xefe2,	// (0x0002ce83) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xefe2,	// (0x0002ce83) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe24,	// (0x0002dcc5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe24,	// (0x0002dcc5) list_double_large_graphic_phob2_cc_pane_g

0x9a82,	// (0x00027923) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a82,	// (0x00027923) list_double_large_graphic_phob2_cc_pane_t1

0x9aab,	// (0x0002794c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9aab,	// (0x0002794c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe2f,	// (0x0002dcd0) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe2f,	// (0x0002dcd0) list_double_large_graphic_phob2_cc_pane_t

0xefee,	// (0x0002ce8f) list_highlight_pane_cp025_ParamLimits

0xefee,	// (0x0002ce8f) list_highlight_pane_cp025

0xa355,	// (0x000281f6) bg_button_pane_cp033_ParamLimits

0xefaf,	// (0x0002ce50) phob2_cc_button_pane_g1_ParamLimits

0xefbb,	// (0x0002ce5c) phob2_cc_button_pane_t1_ParamLimits

0xefd0,	// (0x0002ce71) phob2_cc_button_pane_t2_ParamLimits

0x0db8,	// (0x0001ec59) phob2_cc_button_pane_t_ParamLimits

0x26d3,	// (0x00020574) popup_wgtman_window

0xd3c2,	// (0x0002b263) scroll_pane_cp038

0x9497,	// (0x00027338) wgtman_btn_pane_cp_01_ParamLimits

0x9497,	// (0x00027338) wgtman_btn_pane_cp_01

0xeffc,	// (0x0002ce9d) wgtman_content_pane

0xf005,	// (0x0002cea6) wgtman_heading_pane

0x9bc4,	// (0x00027a65) bg_heading_pane_cp02

0xf00e,	// (0x0002ceaf) wgtman_heading_pane_g1

0xf016,	// (0x0002ceb7) wgtman_heading_pane_t1

0xf024,	// (0x0002cec5) scroll_pane_cp036

0xf02c,	// (0x0002cecd) wgtman_list_pane

0xe9ae,	// (0x0002c84f) wgtman_list_pane_t1_ParamLimits

0xe9ae,	// (0x0002c84f) wgtman_list_pane_t1

0x1e9b,	// (0x0001fd3c) cam4_grid_pane

0x720d,	// (0x000250ae) bg_button_pane_cp015_ParamLimits

0x721f,	// (0x000250c0) bg_button_pane_cp016_ParamLimits

0x7232,	// (0x000250d3) bg_button_pane_cp017_ParamLimits

0x7288,	// (0x00025129) popup_vitu2_query_window_g3_ParamLimits

0x7288,	// (0x00025129) popup_vitu2_query_window_g3

0x7343,	// (0x000251e4) popup_vitu2_query_window_t6_ParamLimits

0x7343,	// (0x000251e4) popup_vitu2_query_window_t6

0x736e,	// (0x0002520f) popup_vitu2_query_window_t7_ParamLimits

0x736e,	// (0x0002520f) popup_vitu2_query_window_t7

0xe9c9,	// (0x0002c86a) cam4_grid_pane_g1

0xe9d2,	// (0x0002c873) cam4_grid_pane_g2

0xf034,	// (0x0002ced5) cam4_grid_pane_g3

0xf03d,	// (0x0002cede) cam4_grid_pane_g4

0x0003,

0xfe34,	// (0x0002dcd5) cam4_grid_pane_g

0x3267,	// (0x00021108) aid_placing_vt_slider_lsc_ParamLimits

0x35a7,	// (0x00021448) vidtel_button_pane_ParamLimits

0x35a7,	// (0x00021448) vidtel_button_pane

0x9bc4,	// (0x00027a65) bg_button_pane_cp034

0x9ad4,	// (0x00027975) vidtel_button_pane_g1

0xf048,	// (0x0002cee9) vidtel_button_pane_t1

0xd4e8,	// (0x0002b389) aid_size_vtel_slider_touch

0xd5c1,	// (0x0002b462) scroll_pane_cp039

0x8035,	// (0x00025ed6) ncim_query_button_pane_cp01_ParamLimits

0x8054,	// (0x00025ef5) ncimui_query_pane_g1_ParamLimits

0xa355,	// (0x000281f6) input_focus_pane_cp012_ParamLimits

0xdec2,	// (0x0002bd63) ncim_query_entry_pane_t1_ParamLimits

0xd5c1,	// (0x0002b462) scroll_pane_cp039_ParamLimits

0xadfe,	// (0x00028c9f) navi_pane_bcale_mc_g1

0xae06,	// (0x00028ca7) navi_pane_bcale_mc_t1

0xe42f,	// (0x0002c2d0) main_sp_fs_email_pane_g1

0xe43b,	// (0x0002c2dc) main_sp_fs_email_pane_g2

0x0001,

0x0b63,	// (0x0001ea04) main_sp_fs_email_pane_g

0xe918,	// (0x0002c7b9) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe918,	// (0x0002c7b9) list_single_cale_mrui_row_pane_g3

0x90c6,	// (0x00026f67) list_single_recal_day_pane_g5_event_pane

0xeb24,	// (0x0002c9c5) list_single_recal_day_pane_g7

0xf05e,	// (0x0002ceff) list_recal_day_event_pane_cp01

0xf067,	// (0x0002cf08) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0002cf10) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0002cf18) list_recal_vselct_pane_cp01

0xd518,	// (0x0002b3b9) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0002cf22) list_recal_day_event_pane_cp01_t1

0xeb2c,	// (0x0002c9cd) list_single_recal_day_pane_t1_ParamLimits

0xeb3e,	// (0x0002c9df) list_single_recal_day_pane_t2_ParamLimits

0x0cbb,	// (0x0001eb5c) list_single_recal_day_pane_t_ParamLimits

0xa23c,	// (0x000280dd) bg_notes_pane_ParamLimits

0xa2eb,	// (0x0002818c) list_notes_pane_ParamLimits

0x2957,	// (0x000207f8) scroll_pane_cp06_ParamLimits

0xa30d,	// (0x000281ae) main_notes_pane_ParamLimits

0x9bc4,	// (0x00027a65) main_welc_pane

0x9adc,	// (0x0002797d) main_welc_body_pane_ParamLimits

0x9adc,	// (0x0002797d) main_welc_body_pane

0x9af5,	// (0x00027996) main_welc_opti_pane_ParamLimits

0x9af5,	// (0x00027996) main_welc_opti_pane

0x9b28,	// (0x000279c9) main_welc_pane_t1_ParamLimits

0x9b28,	// (0x000279c9) main_welc_pane_t1

0x9b42,	// (0x000279e3) main_welc_body_row_pane_ParamLimits

0x9b42,	// (0x000279e3) main_welc_body_row_pane

0xd13d,	// (0x0002afde) main_welc_opti_row_pane_ParamLimits

0xd13d,	// (0x0002afde) main_welc_opti_row_pane

0xf08f,	// (0x0002cf30) main_welc_opti_row_pane_g1

0x9b6b,	// (0x00027a0c) main_welc_opti_row_pane_t1

0xf097,	// (0x0002cf38) main_welc_body_row_pane_t1

0xed9a,	// (0x0002cc3b) popup_notif_wgt_heading_pane

0xedb4,	// (0x0002cc55) aid_size_list_notif_wgt_del_ParamLimits

0xedc1,	// (0x0002cc62) list_notif_wgt_row_pane_g1_ParamLimits

0xedcd,	// (0x0002cc6e) list_notif_wgt_row_pane_g2_ParamLimits

0xeddc,	// (0x0002cc7d) list_notif_wgt_row_pane_g3_ParamLimits

0x0d22,	// (0x0001ebc3) list_notif_wgt_row_pane_g_ParamLimits

0xede9,	// (0x0002cc8a) list_notif_wgt_row_pane_t1_ParamLimits

0xedff,	// (0x0002cca0) list_notif_wgt_row_pane_t2_ParamLimits

0xee11,	// (0x0002ccb2) list_notif_wgt_row_pane_t3_ParamLimits

0x0d29,	// (0x0001ebca) list_notif_wgt_row_pane_t_ParamLimits

0x952a,	// (0x000273cb) listrow_wgtman_pane_g1_ParamLimits

0x9537,	// (0x000273d8) listrow_wgtman_pane_g2_ParamLimits

0xfdc7,	// (0x0002dc68) listrow_wgtman_pane_g_ParamLimits

0x9555,	// (0x000273f6) listrow_wgtman_pane_t1_ParamLimits

0x956d,	// (0x0002740e) listrow_wgtman_pane_t2_ParamLimits

0xfdcc,	// (0x0002dc6d) listrow_wgtman_pane_t_ParamLimits

0x9593,	// (0x00027434) wait_bar_pane_cp09_ParamLimits

0x9bc4,	// (0x00027a65) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0002cf47) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0002cf4f) popup_notif_wgt_heading_pane_t1

0x9bc4,	// (0x00027a65) main_vids_pane

0x9bc4,	// (0x00027a65) vids_listscroll_pane

0x9b7a,	// (0x00027a1b) scroll_pane_cp040

0x9bc4,	// (0x00027a65) vids_list_pane

0x9b85,	// (0x00027a26) vids_list_double_pane_ParamLimits

0x9b85,	// (0x00027a26) vids_list_double_pane

0x9b9d,	// (0x00027a3e) vids_list_double_pane_g1

0x9ba6,	// (0x00027a47) vids_list_double_pane_t1

0x9bb6,	// (0x00027a57) vids_list_double_pane_t2

0x0001,

0xfe42,	// (0x0002dce3) vids_list_double_pane_t

0x14c8,	// (0x0001f369) main_ncimui_pane_ParamLimits

0x7e8c,	// (0x00025d2d) main_ncimui_pane_g1_ParamLimits

0x7e98,	// (0x00025d39) main_ncimui_pane_g2_ParamLimits

0x7e98,	// (0x00025d39) main_ncimui_pane_g2

0x0001,

0xfbdb,	// (0x0002da7c) main_ncimui_pane_g_ParamLimits

0xfbdb,	// (0x0002da7c) main_ncimui_pane_g

0x9b0e,	// (0x000279af) main_welc_pane_g1_ParamLimits

0x9b0e,	// (0x000279af) main_welc_pane_g1

0x9b1a,	// (0x000279bb) main_welc_pane_g2_ParamLimits

0x9b1a,	// (0x000279bb) main_welc_pane_g2

0x0001,

0xfe3d,	// (0x0002dcde) main_welc_pane_g_ParamLimits

0xfe3d,	// (0x0002dcde) main_welc_pane_g

0xa23c,	// (0x000280dd) listscroll_mce_pane_ParamLimits

0xaf53,	// (0x00028df4) wait_bar_pane_cp10

0xc39e,	// (0x0002a23f) main_cale_day_pane_ParamLimits

0xc39e,	// (0x0002a23f) main_cale_week_pane_ParamLimits

0xa23c,	// (0x000280dd) main_messa_pane_ParamLimits

0x63c7,	// (0x00024268) main_clock2_btn_pane_ParamLimits

0x63c7,	// (0x00024268) main_clock2_btn_pane

0xcbfc,	// (0x0002aa9d) main_clock2_btn_pane_cp01_ParamLimits

0xcbfc,	// (0x0002aa9d) main_clock2_btn_pane_cp01

0xe8a4,	// (0x0002c745) list_cale_mrui_pane_ParamLimits

0xee47,	// (0x0002cce8) main_cf0_pane_g2

0x0001,

0x0d30,	// (0x0001ebd1) main_cf0_pane_g

0x973a,	// (0x000275db) area_left_week_number_pane_ParamLimits

0x974d,	// (0x000275ee) area_top_day_name_pane_ParamLimits

0x975b,	// (0x000275fc) frame_month_view_pane_ParamLimits

0xef58,	// (0x0002cdf9) grid_month_view_pane_ParamLimits

0xef66,	// (0x0002ce07) frm_month_g1_ParamLimits

0x97d9,	// (0x0002767a) frm_month_g2_ParamLimits

0x97ea,	// (0x0002768b) frm_month_g3_ParamLimits

0x97fb,	// (0x0002769c) frm_month_g4_ParamLimits

0x980c,	// (0x000276ad) frm_month_g5_ParamLimits

0x981f,	// (0x000276c0) frm_month_g6_ParamLimits

0x9832,	// (0x000276d3) frm_month_g7_ParamLimits

0xef73,	// (0x0002ce14) frm_month_g8_ParamLimits

0x9845,	// (0x000276e6) frm_month_g9_ParamLimits

0x9852,	// (0x000276f3) frm_month_g10_ParamLimits

0x985f,	// (0x00027700) frm_month_g11_ParamLimits

0x986c,	// (0x0002770d) frm_month_g12_ParamLimits

0x9879,	// (0x0002771a) frm_month_g13_ParamLimits

0x9886,	// (0x00027727) frm_month_g14_ParamLimits

0x9895,	// (0x00027736) frm_month_g15_ParamLimits

0x98a4,	// (0x00027745) frm_month_g16_ParamLimits

0xfded,	// (0x0002dc8e) frm_month_g_ParamLimits

0xef80,	// (0x0002ce21) cell_top_day_name_pane_t1_ParamLimits

0x98b3,	// (0x00027754) cell_area_left_week_number_pane_g1_ParamLimits

0x98c2,	// (0x00027763) cell_area_left_week_number_pane_t1_ParamLimits

0xca00,	// (0x0002a8a1) cell_month_view_pane_g1_ParamLimits

0x98d8,	// (0x00027779) cell_month_view_pane_t1_ParamLimits

0xa234,	// (0x000280d5) main_clock2_btn_pane_g1

0xf0bc,	// (0x0002cf5d) main_clock2_btn_pane_t1

0xa355,	// (0x000281f6) listscroll_cmail_pane_ParamLimits

0xe42f,	// (0x0002c2d0) main_sp_fs_email_pane_g1_ParamLimits

0xe43b,	// (0x0002c2dc) main_sp_fs_email_pane_g2_ParamLimits

0x0b63,	// (0x0001ea04) main_sp_fs_email_pane_g_ParamLimits

0xea94,	// (0x0002c935) list_recal_day_pane_ParamLimits

0xeaa5,	// (0x0002c946) mian_recal_day_pane_t1

0x88de,	// (0x0002677f) list_single_dyc_row_text_pane_t4_ParamLimits

0x88de,	// (0x0002677f) list_single_dyc_row_text_pane_t4

0x8915,	// (0x000267b6) list_single_dyc_row_text_pane_t5_ParamLimits

0x8915,	// (0x000267b6) list_single_dyc_row_text_pane_t5

0xe4dd,	// (0x0002c37e) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4dd,	// (0x0002c37e) list_single_dyc_row_text_pane_t6

0x43f0,	// (0x00022291) aid_mgn_list_cale_time_pane

0x14c8,	// (0x0001f369) main_gallery2_pane_ParamLimits

0xcc12,	// (0x0002aab3) main_clock2_pane_cp01_t1

0xcc20,	// (0x0002aac1) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0002d678) main_clock2_pane_cp01_t

0x2c6f,	// (0x00020b10) cale_week_scroll_pane_g16_ParamLimits

0x2c6f,	// (0x00020b10) cale_week_scroll_pane_g16

0xa500,	// (0x000283a1) vorec_slider_pane

0xf048,	// (0x0002cee9) vidtel_button_pane_t1_ParamLimits

0x9121,	// (0x00026fc2) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9121,	// (0x00026fc2) main_fs_bigclock_clock_pane_g2_ParamLimits

0x912e,	// (0x00026fcf) main_fs_bigclock_clock_pane_g3_ParamLimits

0x912e,	// (0x00026fcf) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd85,	// (0x0002dc26) main_fs_bigclock_clock_pane_g_ParamLimits

0x913a,	// (0x00026fdb) main_fs_bigclock_clock_pane_t1_ParamLimits

0x914d,	// (0x00026fee) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd8e,	// (0x0002dc2f) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
