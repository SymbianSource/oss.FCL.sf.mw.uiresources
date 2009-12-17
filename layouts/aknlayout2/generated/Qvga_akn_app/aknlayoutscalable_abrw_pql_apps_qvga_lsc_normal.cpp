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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00020d3f };

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
0x39ed,	// (0x0002472c) Screen

0x39f7,	// (0x00024736) application_window

0x3a50,	// (0x0002478f) area_bottom_pane_ParamLimits

0x3a50,	// (0x0002478f) area_bottom_pane

0x3a90,	// (0x000247cf) area_top_pane_ParamLimits

0x3a90,	// (0x000247cf) area_top_pane

0x3ae5,	// (0x00024824) call_video_uplink_pane_ParamLimits

0x3ae5,	// (0x00024824) call_video_uplink_pane

0x3b15,	// (0x00024854) main_pane_ParamLimits

0x3b15,	// (0x00024854) main_pane

0xcdca,	// (0x0002db09) context_pane

0x6c3a,	// (0x00027979) navi_pane

0x6c63,	// (0x000279a2) popup_cale_events_window_ParamLimits

0x6c63,	// (0x000279a2) popup_cale_events_window

0xcddd,	// (0x0002db1c) popup_mup_playback_window

0x6c7b,	// (0x000279ba) signal_pane

0x45fb,	// (0x0002533a) main_browser_pane

0xb88b,	// (0x0002c5ca) main_burst_pane

0x3c2b,	// (0x0002496a) main_calc_pane

0xb88b,	// (0x0002c5ca) main_cale_day_pane

0xabda,	// (0x0002b919) main_cale_month_pane

0xb88b,	// (0x0002c5ca) main_cale_week_pane

0xb88b,	// (0x0002c5ca) main_call_pane

0x40ea,	// (0x00024e29) main_call_poc_pane

0xb88b,	// (0x0002c5ca) main_camera_pane

0xb88b,	// (0x0002c5ca) main_chi_dic_pane

0xb68a,	// (0x0002c3c9) main_clock_pane

0x40ea,	// (0x00024e29) main_fmradio_pane

0xb88b,	// (0x0002c5ca) main_graph_messa_pane

0x40ea,	// (0x00024e29) main_help_pane

0x45fb,	// (0x0002533a) main_im_pane

0x4345,	// (0x00025084) main_image_pane_ParamLimits

0x4345,	// (0x00025084) main_image_pane

0x40ea,	// (0x00024e29) main_location2_pane

0xb88b,	// (0x0002c5ca) main_location_pane

0x40ea,	// (0x00024e29) main_messa_pane

0x40ea,	// (0x00024e29) main_mp2_pane

0xb88b,	// (0x0002c5ca) main_mp_pane

0x40ea,	// (0x00024e29) main_msg_pane

0x40ea,	// (0x00024e29) main_mup_eq_pane

0x40ea,	// (0x00024e29) main_mup_pane

0xb88b,	// (0x0002c5ca) main_notes_pane

0x40ea,	// (0x00024e29) main_pec_pane

0x40ea,	// (0x00024e29) main_phob_pane

0x40ea,	// (0x00024e29) main_pinb_pane

0x40ea,	// (0x00024e29) main_postcard_pane

0x40ea,	// (0x00024e29) main_qdial_pane

0xb88b,	// (0x0002c5ca) main_skin_pane

0x40ea,	// (0x00024e29) main_smil2_pane

0xb88b,	// (0x0002c5ca) main_smil_pane

0xb88b,	// (0x0002c5ca) main_video_pane

0xb88b,	// (0x0002c5ca) main_video_tele_pane

0x4345,	// (0x00025084) main_viewer_pane_ParamLimits

0x4345,	// (0x00025084) main_viewer_pane

0xb88b,	// (0x0002c5ca) main_vorec_pane

0x6a1a,	// (0x00027759) popup_blid_sat_info_window_ParamLimits

0x6a1a,	// (0x00027759) popup_blid_sat_info_window

0x6a70,	// (0x000277af) popup_dyc_status_message_window_ParamLimits

0x6a70,	// (0x000277af) popup_dyc_status_message_window

0x6a86,	// (0x000277c5) popup_grid_large_graphic_window_ParamLimits

0x6a86,	// (0x000277c5) popup_grid_large_graphic_window

0x6b1c,	// (0x0002785b) popup_loc_request_window_ParamLimits

0x6b1c,	// (0x0002785b) popup_loc_request_window

0x6c14,	// (0x00027953) popup_wml_address_window_ParamLimits

0x6c14,	// (0x00027953) popup_wml_address_window

0x6870,	// (0x000275af) call_muted_g1

0x6595,	// (0x000272d4) popup_call_audio_conf_window_ParamLimits

0x6595,	// (0x000272d4) popup_call_audio_conf_window

0x6880,	// (0x000275bf) popup_call_audio_first_window_ParamLimits

0x6880,	// (0x000275bf) popup_call_audio_first_window

0x68de,	// (0x0002761d) popup_call_audio_in_window_ParamLimits

0x68de,	// (0x0002761d) popup_call_audio_in_window

0x690a,	// (0x00027649) popup_call_audio_out_window_ParamLimits

0x690a,	// (0x00027649) popup_call_audio_out_window

0x6938,	// (0x00027677) popup_call_audio_second_window_ParamLimits

0x6938,	// (0x00027677) popup_call_audio_second_window

0x697e,	// (0x000276bd) popup_call_audio_wait_window_ParamLimits

0x697e,	// (0x000276bd) popup_call_audio_wait_window

0x69b1,	// (0x000276f0) popup_number_entry_window_ParamLimits

0x69b1,	// (0x000276f0) popup_number_entry_window

0x3c81,	// (0x000249c0) bg_popup_call_pane_cp05_ParamLimits

0x3c81,	// (0x000249c0) bg_popup_call_pane_cp05

0x3ca1,	// (0x000249e0) popup_number_entry_window_t1

0x3cb4,	// (0x000249f3) popup_number_entry_window_t2

0x3cc6,	// (0x00024a05) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0002fe6e) popup_number_entry_window_t

0x3d0c,	// (0x00024a4b) text_title_cp2

0x3d1f,	// (0x00024a5e) bg_popup_call_pane_cp_ParamLimits

0x3d1f,	// (0x00024a5e) bg_popup_call_pane_cp

0x3d2d,	// (0x00024a6c) call_thumbnail_pane

0x3d35,	// (0x00024a74) popup_call_audio_in_window_g1_ParamLimits

0x3d35,	// (0x00024a74) popup_call_audio_in_window_g1

0x3d41,	// (0x00024a80) popup_call_audio_in_window_g2_ParamLimits

0x3d41,	// (0x00024a80) popup_call_audio_in_window_g2

0x3d4d,	// (0x00024a8c) popup_call_audio_in_window_g3_ParamLimits

0x3d4d,	// (0x00024a8c) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0002fe77) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0002fe77) popup_call_audio_in_window_g

0x3d59,	// (0x00024a98) popup_call_audio_in_window_t1_ParamLimits

0x3d59,	// (0x00024a98) popup_call_audio_in_window_t1

0x3d74,	// (0x00024ab3) popup_call_audio_in_window_t2_ParamLimits

0x3d74,	// (0x00024ab3) popup_call_audio_in_window_t2

0x3d8f,	// (0x00024ace) popup_call_audio_in_window_t3_ParamLimits

0x3d8f,	// (0x00024ace) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0002fe7e) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0002fe7e) popup_call_audio_in_window_t

0x3d1f,	// (0x00024a5e) bg_popup_call_pane_cp01_ParamLimits

0x3d1f,	// (0x00024a5e) bg_popup_call_pane_cp01

0x3d2d,	// (0x00024a6c) call_thumbnail_pane_cp02

0x3da2,	// (0x00024ae1) call_type_pane_cp022

0x3daa,	// (0x00024ae9) popup_call_audio_out_window_g1_ParamLimits

0x3daa,	// (0x00024ae9) popup_call_audio_out_window_g1

0x3dbc,	// (0x00024afb) popup_call_audio_out_window_g2_ParamLimits

0x3dbc,	// (0x00024afb) popup_call_audio_out_window_g2

0x3dc8,	// (0x00024b07) popup_call_audio_out_window_g3_ParamLimits

0x3dc8,	// (0x00024b07) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0002fe85) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0002fe85) popup_call_audio_out_window_g

0x3dda,	// (0x00024b19) popup_call_audio_out_window_t1_ParamLimits

0x3dda,	// (0x00024b19) popup_call_audio_out_window_t1

0x3df2,	// (0x00024b31) popup_call_audio_out_window_t2_ParamLimits

0x3df2,	// (0x00024b31) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0002fe8c) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0002fe8c) popup_call_audio_out_window_t

0x3e07,	// (0x00024b46) bg_popup_call_pane_ParamLimits

0x3e07,	// (0x00024b46) bg_popup_call_pane

0x3e8b,	// (0x00024bca) call_thumbnail_pane_cp_ParamLimits

0x3e8b,	// (0x00024bca) call_thumbnail_pane_cp

0x3eaf,	// (0x00024bee) call_type_pane_cp01_ParamLimits

0x3eaf,	// (0x00024bee) call_type_pane_cp01

0x3ef3,	// (0x00024c32) popup_call_audio_first_window_g1_ParamLimits

0x3ef3,	// (0x00024c32) popup_call_audio_first_window_g1

0x3f3f,	// (0x00024c7e) popup_call_audio_first_window_g2_ParamLimits

0x3f3f,	// (0x00024c7e) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0002fe91) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0002fe91) popup_call_audio_first_window_g

0x3f83,	// (0x00024cc2) popup_call_audio_first_window_t1_ParamLimits

0x3f83,	// (0x00024cc2) popup_call_audio_first_window_t1

0x402f,	// (0x00024d6e) popup_call_audio_first_window_t4_ParamLimits

0x402f,	// (0x00024d6e) popup_call_audio_first_window_t4

0x40bb,	// (0x00024dfa) popup_call_audio_first_window_t5_ParamLimits

0x40bb,	// (0x00024dfa) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0002fe96) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0002fe96) popup_call_audio_first_window_t

0x40ea,	// (0x00024e29) bg_popup_call_pane_cp02

0x40f4,	// (0x00024e33) call_type_pane_cp023

0x40fc,	// (0x00024e3b) popup_call_audio_wait_window_g1

0x4104,	// (0x00024e43) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0002fe9d) popup_call_audio_wait_window_g

0x410c,	// (0x00024e4b) popup_call_audio_wait_window_t3

0x411a,	// (0x00024e59) bg_popup_call_pane_cp03_ParamLimits

0x411a,	// (0x00024e59) bg_popup_call_pane_cp03

0x417a,	// (0x00024eb9) call_thumbnail_pane_cp011_ParamLimits

0x417a,	// (0x00024eb9) call_thumbnail_pane_cp011

0x4186,	// (0x00024ec5) call_type_pane_cp034_ParamLimits

0x4186,	// (0x00024ec5) call_type_pane_cp034

0x41c2,	// (0x00024f01) popup_call_audio_second_window_g1_ParamLimits

0x41c2,	// (0x00024f01) popup_call_audio_second_window_g1

0x41fe,	// (0x00024f3d) popup_call_audio_second_window_g2_ParamLimits

0x41fe,	// (0x00024f3d) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0002fea2) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0002fea2) popup_call_audio_second_window_g

0x423a,	// (0x00024f79) popup_call_audio_second_window_t1_ParamLimits

0x423a,	// (0x00024f79) popup_call_audio_second_window_t1

0x42bb,	// (0x00024ffa) popup_call_audio_second_window_t2_ParamLimits

0x42bb,	// (0x00024ffa) popup_call_audio_second_window_t2

0x42f1,	// (0x00025030) popup_call_audio_second_window_t3_ParamLimits

0x42f1,	// (0x00025030) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0002fea7) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0002fea7) popup_call_audio_second_window_t

0x40ea,	// (0x00024e29) bg_popup_call_pane_cp04

0x4327,	// (0x00025066) list_conf_pane

0x432f,	// (0x0002506e) popup_call_audio_conf_window_t1

0x433d,	// (0x0002507c) call_thumbnail_pane_g1

0x4345,	// (0x00025084) bg_pinb_pane_ParamLimits

0x4345,	// (0x00025084) bg_pinb_pane

0x4353,	// (0x00025092) find_pinb_pane

0x435c,	// (0x0002509b) listscroll_pinb_pane_ParamLimits

0x435c,	// (0x0002509b) listscroll_pinb_pane

0x436b,	// (0x000250aa) pinb_bg_pane_g1

0x4375,	// (0x000250b4) pinb_bg_pane_g2

0x437f,	// (0x000250be) pinb_bg_pane_g3

0x4389,	// (0x000250c8) pinb_bg_pane_g4

0x4393,	// (0x000250d2) pinb_bg_pane_g5

0x439d,	// (0x000250dc) pinb_bg_pane_g6

0x43a6,	// (0x000250e5) pinb_bg_pane_g7

0x43af,	// (0x000250ee) pinb_bg_pane_g8

0x43ba,	// (0x000250f9) pinb_bg_pane_g9

0x43c4,	// (0x00025103) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0002feae) pinb_bg_pane_g

0x43df,	// (0x0002511e) grid_pinb_pane

0x43e8,	// (0x00025127) list_pinb_pane

0x43f1,	// (0x00025130) scroll_pane_cp01_ParamLimits

0x43f1,	// (0x00025130) scroll_pane_cp01

0x4403,	// (0x00025142) find_pinb_pane_g1_ParamLimits

0x4403,	// (0x00025142) find_pinb_pane_g1

0x441b,	// (0x0002515a) find_pinb_pane_t1

0x442d,	// (0x0002516c) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0002fec8) find_pinb_pane_t

0x4442,	// (0x00025181) input_focus_pane_cp01_ParamLimits

0x4442,	// (0x00025181) input_focus_pane_cp01

0x444e,	// (0x0002518d) cell_pinb_pane_ParamLimits

0x444e,	// (0x0002518d) cell_pinb_pane

0x4469,	// (0x000251a8) cell_pinb_pane_g1_ParamLimits

0x4469,	// (0x000251a8) cell_pinb_pane_g1

0x4479,	// (0x000251b8) cell_pinb_pane_g2_ParamLimits

0x4479,	// (0x000251b8) cell_pinb_pane_g2

0x4485,	// (0x000251c4) cell_pinb_pane_g3_ParamLimits

0x4485,	// (0x000251c4) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0002fecd) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0002fecd) cell_pinb_pane_g

0x40ea,	// (0x00024e29) grid_highlight_pane_cp01

0x4491,	// (0x000251d0) list_pinb_item_pane_ParamLimits

0x4491,	// (0x000251d0) list_pinb_item_pane

0x40ea,	// (0x00024e29) list_highlight_pane_cp02

0x44a3,	// (0x000251e2) list_pinb_item_pane_g1_ParamLimits

0x44a3,	// (0x000251e2) list_pinb_item_pane_g1

0x44b0,	// (0x000251ef) list_pinb_item_pane_g2_ParamLimits

0x44b0,	// (0x000251ef) list_pinb_item_pane_g2

0x44bc,	// (0x000251fb) list_pinb_item_pane_g3_ParamLimits

0x44bc,	// (0x000251fb) list_pinb_item_pane_g3

0x44cd,	// (0x0002520c) list_pinb_item_pane_g4_ParamLimits

0x44cd,	// (0x0002520c) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0002fed4) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0002fed4) list_pinb_item_pane_g

0x44d9,	// (0x00025218) list_pinb_item_pane_t1_ParamLimits

0x44d9,	// (0x00025218) list_pinb_item_pane_t1

0x292d,	// (0x0002366c) calc_display_pane

0x2949,	// (0x00023688) calc_paper_pane

0x296a,	// (0x000236a9) grid_calc_pane

0x40ea,	// (0x00024e29) bg_list_pane_cp01

0x44f0,	// (0x0002522f) clock_g1

0x44f8,	// (0x00025237) clock_g2

0x0001,

0xf19e,	// (0x0002fedd) clock_g

0x4500,	// (0x0002523f) clock_t1_ParamLimits

0x4500,	// (0x0002523f) clock_t1

0x4515,	// (0x00025254) clock_t2_ParamLimits

0x4515,	// (0x00025254) clock_t2

0x4527,	// (0x00025266) clock_t3_ParamLimits

0x4527,	// (0x00025266) clock_t3

0x4539,	// (0x00025278) clock_t4_ParamLimits

0x4539,	// (0x00025278) clock_t4

0x454b,	// (0x0002528a) clock_t5_ParamLimits

0x454b,	// (0x0002528a) clock_t5

0x4560,	// (0x0002529f) clock_t6_ParamLimits

0x4560,	// (0x0002529f) clock_t6

0x4572,	// (0x000252b1) clock_t7_ParamLimits

0x4572,	// (0x000252b1) clock_t7

0x4584,	// (0x000252c3) clock_t8_ParamLimits

0x4584,	// (0x000252c3) clock_t8

0x4596,	// (0x000252d5) clock_t9_ParamLimits

0x4596,	// (0x000252d5) clock_t9

0x0008,

0xf1a3,	// (0x0002fee2) clock_t_ParamLimits

0xf1a3,	// (0x0002fee2) clock_t

0x45a8,	// (0x000252e7) popup_clock_analogue_window_cp02

0x45a8,	// (0x000252e7) popup_clock_digital_window_cp01

0x45b0,	// (0x000252ef) listscroll_help_pane

0x40ea,	// (0x00024e29) phob_pre_status_pane

0x45ba,	// (0x000252f9) grid_qdial_pane

0x40ea,	// (0x00024e29) listscroll_mce_pane

0x45c4,	// (0x00025303) bg_notes_pane

0x45ce,	// (0x0002530d) list_notes_pane

0x45d8,	// (0x00025317) scroll_pane_cp06

0x45e3,	// (0x00025322) bg_calc_paper_pane

0xaad7,	// (0x0002b816) list_calc_pane

0x45fb,	// (0x0002533a) bg_calc_display_pane

0xaaf1,	// (0x0002b830) calc_display_pane_t1

0xab06,	// (0x0002b845) calc_display_pane_t2

0xab1b,	// (0x0002b85a) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0002fef5) calc_display_pane_t

0x2986,	// (0x000236c5) cell_calc_pane_ParamLimits

0x2986,	// (0x000236c5) cell_calc_pane

0x4607,	// (0x00025346) bg_calc_paper_pane_g1

0x4613,	// (0x00025352) bg_calc_paper_pane_g2

0x461f,	// (0x0002535e) bg_calc_paper_pane_g3

0x462b,	// (0x0002536a) bg_calc_paper_pane_g4

0x4637,	// (0x00025376) bg_calc_paper_pane_g5

0x4643,	// (0x00025382) bg_calc_paper_pane_g6

0x4652,	// (0x00025391) bg_calc_paper_pane_g7

0x4661,	// (0x000253a0) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0002fefc) bg_calc_paper_pane_g

0x4670,	// (0x000253af) calc_bg_paper_pane_g9

0x467f,	// (0x000253be) list_calc_item_pane_ParamLimits

0x467f,	// (0x000253be) list_calc_item_pane

0x4693,	// (0x000253d2) list_calc_item_pane_g1

0xab2d,	// (0x0002b86c) list_calc_item_pane_t1_ParamLimits

0xab2d,	// (0x0002b86c) list_calc_item_pane_t1

0x29b9,	// (0x000236f8) list_calc_item_pane_t2_ParamLimits

0x29b9,	// (0x000236f8) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0002ff0d) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0002ff0d) list_calc_item_pane_t

0x46a0,	// (0x000253df) cell_calc_pane_g1

0x46aa,	// (0x000253e9) grid_highlight_pane_cp02

0x46cc,	// (0x0002540b) bg_calc_display_pane_g1

0xab3f,	// (0x0002b87e) bg_calc_display_pane_g2

0x46d5,	// (0x00025414) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0002ff17) bg_calc_display_pane_g

0x29e7,	// (0x00023726) cell_qdial_pane_ParamLimits

0x29e7,	// (0x00023726) cell_qdial_pane

0x46de,	// (0x0002541d) cell_qdial_pane_g1_ParamLimits

0x46de,	// (0x0002541d) cell_qdial_pane_g1

0x46f4,	// (0x00025433) cell_qdial_pane_g2_ParamLimits

0x46f4,	// (0x00025433) cell_qdial_pane_g2

0x4705,	// (0x00025444) cell_qdial_pane_g3_ParamLimits

0x4705,	// (0x00025444) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0002ff1e) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0002ff1e) cell_qdial_pane_g

0x4727,	// (0x00025466) cell_qdial_pane_t1_ParamLimits

0x4727,	// (0x00025466) cell_qdial_pane_t1

0x473f,	// (0x0002547e) cell_qdial_pane_t2_ParamLimits

0x473f,	// (0x0002547e) cell_qdial_pane_t2

0x4752,	// (0x00025491) cell_qdial_pane_t3_ParamLimits

0x4752,	// (0x00025491) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0002ff27) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0002ff27) cell_qdial_pane_t

0x40ea,	// (0x00024e29) grid_highlight_pane_cp04

0x4765,	// (0x000254a4) thumbnail_qdial_pane_ParamLimits

0x4765,	// (0x000254a4) thumbnail_qdial_pane

0xab51,	// (0x0002b890) list_help_pane

0xab5b,	// (0x0002b89a) scroll_pane_cp02

0x47b9,	// (0x000254f8) help_list_pane_t1_ParamLimits

0x47b9,	// (0x000254f8) help_list_pane_t1

0xab64,	// (0x0002b8a3) bg_notes_pane_g2

0xab6c,	// (0x0002b8ab) bg_notes_pane_g3

0xab74,	// (0x0002b8b3) notes_bg_pane_g1

0xab7c,	// (0x0002b8bb) notes_bg_pane_g4

0xab84,	// (0x0002b8c3) notes_bg_pane_g5

0xab8c,	// (0x0002b8cb) notes_bg_pane_g6

0xab94,	// (0x0002b8d3) notes_bg_pane_g7

0xab9c,	// (0x0002b8db) notes_bg_pane_g8

0xaba4,	// (0x0002b8e3) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0002ff45) notes_bg_pane_g

0xabac,	// (0x0002b8eb) list_notes_text_pane_ParamLimits

0xabac,	// (0x0002b8eb) list_notes_text_pane

0xabc0,	// (0x0002b8ff) list_notes_text_pane_g1

0x47d5,	// (0x00025514) list_notes_text_pane_t1

0xabda,	// (0x0002b919) listscroll_cale_week_pane

0x47fe,	// (0x0002553d) bg_cale_heading_pane

0xabe9,	// (0x0002b928) bg_cale_pane_cp01

0x4812,	// (0x00025551) cale_week_corner_pane

0x4828,	// (0x00025567) cale_week_day_heading_pane

0x483c,	// (0x0002557b) cale_week_scroll_pane_g1

0x484d,	// (0x0002558c) cale_week_scroll_pane_g2

0x485e,	// (0x0002559d) cale_week_scroll_pane_g3

0x486f,	// (0x000255ae) cale_week_scroll_pane_g4

0x4880,	// (0x000255bf) cale_week_scroll_pane_g5

0x4891,	// (0x000255d0) cale_week_scroll_pane_g6

0x48a2,	// (0x000255e1) cale_week_scroll_pane_g7

0x48b3,	// (0x000255f2) cale_week_scroll_pane_g8

0x48c6,	// (0x00025605) cale_week_scroll_pane_g9

0x48d7,	// (0x00025616) cale_week_scroll_pane_g10

0x48e8,	// (0x00025627) cale_week_scroll_pane_g11

0x48f9,	// (0x00025638) cale_week_scroll_pane_g12

0x490a,	// (0x00025649) cale_week_scroll_pane_g13

0x491b,	// (0x0002565a) cale_week_scroll_pane_g14

0x492c,	// (0x0002566b) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0002ff54) cale_week_scroll_pane_g

0x493d,	// (0x0002567c) cale_week_time_pane

0x4950,	// (0x0002568f) grid_cale_week_pane

0x4963,	// (0x000256a2) scroll_pane_cp08

0x497d,	// (0x000256bc) cell_cale_week_pane_ParamLimits

0x497d,	// (0x000256bc) cell_cale_week_pane

0x49b9,	// (0x000256f8) cale_week_day_heading_pane_t1

0x49e3,	// (0x00025722) cale_week_day_heading_pane_t2

0x4a0d,	// (0x0002574c) cale_week_day_heading_pane_t3

0x4a37,	// (0x00025776) cale_week_day_heading_pane_t4

0x4a61,	// (0x000257a0) cale_week_day_heading_pane_t5

0x4a8b,	// (0x000257ca) cale_week_day_heading_pane_t6

0x4ab5,	// (0x000257f4) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0002ff73) cale_week_day_heading_pane_t

0xac14,	// (0x0002b953) bg_cale_side_pane

0x29f9,	// (0x00023738) cale_week_time_pane_t1

0x2a25,	// (0x00023764) cale_week_time_pane_t2

0x2a51,	// (0x00023790) cale_week_time_pane_t3

0x2a7d,	// (0x000237bc) cale_week_time_pane_t4

0x2aa9,	// (0x000237e8) cale_week_time_pane_t5

0x2ad5,	// (0x00023814) cale_week_time_pane_t6

0x2b01,	// (0x00023840) cale_week_time_pane_t7

0x2b2d,	// (0x0002386c) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0002ff82) cale_week_time_pane_t

0x4adf,	// (0x0002581e) cell_cale_week_pane_g2

0x4af8,	// (0x00025837) cell_cale_week_pane_g3_ParamLimits

0x4af8,	// (0x00025837) cell_cale_week_pane_g3

0xac22,	// (0x0002b961) grid_highlight_pane_cp07

0xac2a,	// (0x0002b969) listscroll_gms_pane

0xac34,	// (0x0002b973) grid_gms_pane

0xac3d,	// (0x0002b97c) listscroll_gms_pane_g1

0xac45,	// (0x0002b984) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0002ff93) listscroll_gms_pane_g

0x4b10,	// (0x0002584f) scroll_pane_cp010

0x4b1b,	// (0x0002585a) cell_gms_pane_ParamLimits

0x4b1b,	// (0x0002585a) cell_gms_pane

0x4b2b,	// (0x0002586a) cell_gms_pane_g1

0xac4d,	// (0x0002b98c) cell_gms_pane_g2

0xabc0,	// (0x0002b8ff) cell_gms_pane_g3

0xac55,	// (0x0002b994) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0002ff98) cell_gms_pane_g

0xac5e,	// (0x0002b99d) grid_highlight_pane_cp09

0x681e,	// (0x0002755d) phob_pre_status_pane_g1

0x6826,	// (0x00027565) phob_pre_status_pane_g2

0x682e,	// (0x0002756d) phob_pre_status_pane_g3

0x6836,	// (0x00027575) phob_pre_status_pane_g4

0x0004,

0xf65b,	// (0x0003039a) phob_pre_status_pane_g

0x6846,	// (0x00027585) phob_pre_status_pane_t1

0x6854,	// (0x00027593) phob_pre_status_pane_t2

0x6862,	// (0x000275a1) phob_pre_status_pane_t3

0x0002,

0xf666,	// (0x000303a5) phob_pre_status_pane_t

0x40ea,	// (0x00024e29) bg_list_pane_cp05

0x2b61,	// (0x000238a0) grid_vorec_pane

0xac66,	// (0x0002b9a5) vorec_t1

0xac74,	// (0x0002b9b3) vorec_t2

0xac82,	// (0x0002b9c1) vorec_t3

0xac90,	// (0x0002b9cf) vorec_t4

0xac9e,	// (0x0002b9dd) vorec_t5

0xacac,	// (0x0002b9eb) vorec_t6

0x0006,

0xf262,	// (0x0002ffa1) vorec_t

0xacc8,	// (0x0002ba07) wait_bar_pane_cp01

0x4b33,	// (0x00025872) cell_vorec_pane_ParamLimits

0x4b33,	// (0x00025872) cell_vorec_pane

0xacd0,	// (0x0002ba0f) cell_vorec_pane_g1

0x40ea,	// (0x00024e29) grid_highlight_pane_cp05

0x4b58,	// (0x00025897) cams_zoom_pane

0x4b67,	// (0x000258a6) image_vga_pane

0x4b7f,	// (0x000258be) main_camera_pane_g1

0x4b8f,	// (0x000258ce) main_camera_pane_g2

0x4b9f,	// (0x000258de) main_camera_pane_g3

0x4baf,	// (0x000258ee) main_camera_pane_g4

0x4bbf,	// (0x000258fe) main_camera_pane_g5

0x4bcf,	// (0x0002590e) main_camera_pane_g6

0x4bdf,	// (0x0002591e) main_camera_pane_g7

0x0007,

0xf271,	// (0x0002ffb0) main_camera_pane_g

0x4bef,	// (0x0002592e) main_camera_pane_t1

0x4c05,	// (0x00025944) main_camera_pane_t2

0x0001,

0xf282,	// (0x0002ffc1) main_camera_pane_t

0x4c37,	// (0x00025976) cams_zoom_pane_cp_ParamLimits

0x4c37,	// (0x00025976) cams_zoom_pane_cp

0x4c5f,	// (0x0002599e) image_cif_pane_ParamLimits

0x4c5f,	// (0x0002599e) image_cif_pane

0x4c90,	// (0x000259cf) image_subqcif_pane

0x4c98,	// (0x000259d7) main_video_pane_g1_ParamLimits

0x4c98,	// (0x000259d7) main_video_pane_g1

0x4cbc,	// (0x000259fb) main_video_pane_g2_ParamLimits

0x4cbc,	// (0x000259fb) main_video_pane_g2

0x4cf0,	// (0x00025a2f) main_video_pane_g3_ParamLimits

0x4cf0,	// (0x00025a2f) main_video_pane_g3

0x4d1e,	// (0x00025a5d) main_video_pane_g4_ParamLimits

0x4d1e,	// (0x00025a5d) main_video_pane_g4

0x4d4c,	// (0x00025a8b) main_video_pane_g5_ParamLimits

0x4d4c,	// (0x00025a8b) main_video_pane_g5

0xace6,	// (0x0002ba25) main_video_pane_g6_ParamLimits

0xace6,	// (0x0002ba25) main_video_pane_g6

0x0006,

0xf287,	// (0x0002ffc6) main_video_pane_g_ParamLimits

0xf287,	// (0x0002ffc6) main_video_pane_g

0x4d73,	// (0x00025ab2) main_video_pane_t1_ParamLimits

0x4d73,	// (0x00025ab2) main_video_pane_t1

0xad00,	// (0x0002ba3f) cams_zoom_pane_g1

0xad09,	// (0x0002ba48) cams_zoom_pane_g2

0xad12,	// (0x0002ba51) cams_zoom_pane_g3

0xad1b,	// (0x0002ba5a) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0002ffd5) cams_zoom_pane_g

0x4dd0,	// (0x00025b0f) grid_cams_pane

0x4de5,	// (0x00025b24) linegrid_cams_pane

0x4df6,	// (0x00025b35) cell_cams_pane_ParamLimits

0x4df6,	// (0x00025b35) cell_cams_pane

0xad24,	// (0x0002ba63) cams_burst_image_pane

0xad2c,	// (0x0002ba6b) cell_cams_pane_g1

0x40ea,	// (0x00024e29) grid_highlight_pane_cp03

0x46a0,	// (0x000253df) mp_bg_pane_g1

0x40ea,	// (0x00024e29) bg_list_pane_cp03

0xcca6,	// (0x0002d9e5) bg_mp_pane

0xccae,	// (0x0002d9ed) grid_mp_pane

0xccb6,	// (0x0002d9f5) media_player_g1

0xccbe,	// (0x0002d9fd) media_player_t1

0xcccc,	// (0x0002da0b) media_player_t2

0xccda,	// (0x0002da19) media_player_t3

0xcce8,	// (0x0002da27) media_player_t4

0xccf6,	// (0x0002da35) media_player_t5

0xcd04,	// (0x0002da43) media_player_t6

0xcd12,	// (0x0002da51) media_player_t7

0x0006,

0xf645,	// (0x00030384) media_player_t

0xcd20,	// (0x0002da5f) wait_bar_pane_cp02

0xf62a,	// (0x00030369) main_usb_pane_t

0x6815,	// (0x00027554) cell_mp_pane

0x46a0,	// (0x000253df) cell_mp_pane_g1

0x40ea,	// (0x00024e29) grid_highlight_pane_cp06

0xadd4,	// (0x0002bb13) grid_skin_colour_pane

0xaddc,	// (0x0002bb1b) list_highlight_pane_cp03

0x4e64,	// (0x00025ba3) skin_g1

0xade4,	// (0x0002bb23) skin_t1

0xadf3,	// (0x0002bb32) skin_t2

0x0001,

0xf2cb,	// (0x0003000a) skin_t

0x4e6c,	// (0x00025bab) cell_skin_colour_pane_ParamLimits

0x4e6c,	// (0x00025bab) cell_skin_colour_pane

0xae01,	// (0x0002bb40) cell_skin_colour_pane_g1

0x4ebe,	// (0x00025bfd) call_video_g1_ParamLimits

0x4ebe,	// (0x00025bfd) call_video_g1

0x4ed4,	// (0x00025c13) call_video_g2_ParamLimits

0x4ed4,	// (0x00025c13) call_video_g2

0x0001,

0xf2d0,	// (0x0003000f) call_video_g_ParamLimits

0xf2d0,	// (0x0003000f) call_video_g

0x4f0a,	// (0x00025c49) call_video_uplink_pane_cp1_ParamLimits

0x4f0a,	// (0x00025c49) call_video_uplink_pane_cp1

0xae1b,	// (0x0002bb5a) call_video_uplink_pane_cp2

0x4f71,	// (0x00025cb0) video_down_crop_pane_ParamLimits

0x4f71,	// (0x00025cb0) video_down_crop_pane

0x5019,	// (0x00025d58) video_down_pane_ParamLimits

0x5019,	// (0x00025d58) video_down_pane

0xae23,	// (0x0002bb62) video_down_subqcif_pane_ParamLimits

0xae23,	// (0x0002bb62) video_down_subqcif_pane

0xae3b,	// (0x0002bb7a) video_down_subqcif_pane_cp_ParamLimits

0xae3b,	// (0x0002bb7a) video_down_subqcif_pane_cp

0xae5f,	// (0x0002bb9e) im_reading_pane_ParamLimits

0xae5f,	// (0x0002bb9e) im_reading_pane

0x50a9,	// (0x00025de8) im_writing_pane_ParamLimits

0x50a9,	// (0x00025de8) im_writing_pane

0x50bf,	// (0x00025dfe) im_reading_pane_t1

0xae79,	// (0x0002bbb8) list_im_pane

0xae8a,	// (0x0002bbc9) scroll_pane_cp07

0x50f5,	// (0x00025e34) im_writing_pane_t1_ParamLimits

0x50f5,	// (0x00025e34) im_writing_pane_t1

0xaea3,	// (0x0002bbe2) im_writing_pane_t2_ParamLimits

0xaea3,	// (0x0002bbe2) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00030019) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00030019) im_writing_pane_t

0x40ea,	// (0x00024e29) input_focus_pane_cp04

0x40ea,	// (0x00024e29) input_focus_pane_cp05

0x510a,	// (0x00025e49) list_im_single_pane_ParamLimits

0x510a,	// (0x00025e49) list_im_single_pane

0xaec0,	// (0x0002bbff) list_single_im_pane_t1

0x67db,	// (0x0002751a) blid_accuracy_pane

0x67e3,	// (0x00027522) blid_compass_pane

0x67eb,	// (0x0002752a) main_location_t1

0x67f9,	// (0x00027538) main_location_t2

0x6807,	// (0x00027546) main_location_t3

0x0002,

0xf654,	// (0x00030393) main_location_t

0x40ea,	// (0x00024e29) aid_levels_location

0x46a0,	// (0x000253df) blid_accuracy_pane_g1

0x46a0,	// (0x000253df) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0003007b) blid_accuracy_pane_g

0xaefa,	// (0x0002bc39) wml_content_pane

0xaf38,	// (0x0002bc77) wml_button_pane_ParamLimits

0xaf38,	// (0x0002bc77) wml_button_pane

0x5120,	// (0x00025e5f) wml_list_single_large_pane_ParamLimits

0x5120,	// (0x00025e5f) wml_list_single_large_pane

0x5134,	// (0x00025e73) wml_list_single_medium_pane_ParamLimits

0x5134,	// (0x00025e73) wml_list_single_medium_pane

0x5149,	// (0x00025e88) wml_list_single_small_pane_ParamLimits

0x5149,	// (0x00025e88) wml_list_single_small_pane

0xaf4c,	// (0x0002bc8b) wml_selection_box_pane_ParamLimits

0xaf4c,	// (0x0002bc8b) wml_selection_box_pane

0xaf5f,	// (0x0002bc9e) wml_list_single_pane_t1

0xaf6e,	// (0x0002bcad) wml_list_single_medium_pane_t1

0xaf7d,	// (0x0002bcbc) wml_list_single_large_pane_t1

0xaf8c,	// (0x0002bccb) input_focus_pane_cp02_ParamLimits

0xaf8c,	// (0x0002bccb) input_focus_pane_cp02

0xaf9f,	// (0x0002bcde) wml_selection_box_pane_g1

0xafa8,	// (0x0002bce7) wml_selection_box_pane_t1_ParamLimits

0xafa8,	// (0x0002bce7) wml_selection_box_pane_t1

0x4345,	// (0x00025084) bg_wml_button_pane_ParamLimits

0x4345,	// (0x00025084) bg_wml_button_pane

0xafc0,	// (0x0002bcff) wml_button_pane_g1

0xafc8,	// (0x0002bd07) wml_button_pane_t1

0xafc0,	// (0x0002bcff) wml_button_bg_pane_g1

0xafd8,	// (0x0002bd17) wml_button_bg_pane_g2

0xafe0,	// (0x0002bd1f) wml_button_bg_pane_g3

0xafe8,	// (0x0002bd27) wml_button_bg_pane_g4

0xaff0,	// (0x0002bd2f) wml_button_bg_pane_g5

0xaff8,	// (0x0002bd37) wml_button_bg_pane_g6

0xb000,	// (0x0002bd3f) wml_button_bg_pane_g7

0xb008,	// (0x0002bd47) wml_button_bg_pane_g8

0xb010,	// (0x0002bd4f) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0003001e) wml_button_bg_pane_g

0x5160,	// (0x00025e9f) bg_list_pane_cp02

0xb018,	// (0x0002bd57) mce_header_pane_ParamLimits

0xb018,	// (0x0002bd57) mce_header_pane

0xb02c,	// (0x0002bd6b) mce_icon_pane

0xb02c,	// (0x0002bd6b) mce_image_pane

0xb035,	// (0x0002bd74) mce_text_pane_ParamLimits

0xb035,	// (0x0002bd74) mce_text_pane

0x5169,	// (0x00025ea8) scroll_pane_cp03

0x5169,	// (0x00025ea8) scroll_pane_cp04

0xb049,	// (0x0002bd88) scroll_pane_cp05_ParamLimits

0xb049,	// (0x0002bd88) scroll_pane_cp05

0x5173,	// (0x00025eb2) mce_header_field_pane_ParamLimits

0x5173,	// (0x00025eb2) mce_header_field_pane

0x518a,	// (0x00025ec9) mce_header_field_pane_2_ParamLimits

0x518a,	// (0x00025ec9) mce_header_field_pane_2

0x51a0,	// (0x00025edf) mce_header_field_pane_3

0x51a8,	// (0x00025ee7) list_single_mce_message_pane_ParamLimits

0x51a8,	// (0x00025ee7) list_single_mce_message_pane

0x51bd,	// (0x00025efc) list_single_mce_smart_pane_ParamLimits

0x51bd,	// (0x00025efc) list_single_mce_smart_pane

0xb055,	// (0x0002bd94) input_focus_pane_cp03

0xb05e,	// (0x0002bd9d) list_header_data_pane

0x51dd,	// (0x00025f1c) mce_header_field_pane_t1

0x51eb,	// (0x00025f2a) list_single_mce_header_pane_ParamLimits

0x51eb,	// (0x00025f2a) list_single_mce_header_pane

0xb066,	// (0x0002bda5) list_single_mce_header_pane_t1

0xb075,	// (0x0002bdb4) list_single_mce_message_pane_g1

0xb07e,	// (0x0002bdbd) list_single_mce_message_pane_t1

0x521d,	// (0x00025f5c) bg_cale_heading_pane_cp01_ParamLimits

0x521d,	// (0x00025f5c) bg_cale_heading_pane_cp01

0xb08d,	// (0x0002bdcc) bg_cale_pane_cp02_ParamLimits

0xb08d,	// (0x0002bdcc) bg_cale_pane_cp02

0x5240,	// (0x00025f7f) cale_month_corner_pane

0x5256,	// (0x00025f95) cale_month_day_heading_pane_ParamLimits

0x5256,	// (0x00025f95) cale_month_day_heading_pane

0x5289,	// (0x00025fc8) cale_month_pane_g1_ParamLimits

0x5289,	// (0x00025fc8) cale_month_pane_g1

0x52a5,	// (0x00025fe4) cale_month_pane_g2_ParamLimits

0x52a5,	// (0x00025fe4) cale_month_pane_g2

0x52c0,	// (0x00025fff) cale_month_pane_g3_ParamLimits

0x52c0,	// (0x00025fff) cale_month_pane_g3

0x52ec,	// (0x0002602b) cale_month_pane_g4_ParamLimits

0x52ec,	// (0x0002602b) cale_month_pane_g4

0x5318,	// (0x00026057) cale_month_pane_g5_ParamLimits

0x5318,	// (0x00026057) cale_month_pane_g5

0x5344,	// (0x00026083) cale_month_pane_g6_ParamLimits

0x5344,	// (0x00026083) cale_month_pane_g6

0x5370,	// (0x000260af) cale_month_pane_g7_ParamLimits

0x5370,	// (0x000260af) cale_month_pane_g7

0x539c,	// (0x000260db) cale_month_pane_g8_ParamLimits

0x539c,	// (0x000260db) cale_month_pane_g8

0x53d8,	// (0x00026117) cale_month_pane_g9_ParamLimits

0x53d8,	// (0x00026117) cale_month_pane_g9

0x5412,	// (0x00026151) cale_month_pane_g10_ParamLimits

0x5412,	// (0x00026151) cale_month_pane_g10

0x544c,	// (0x0002618b) cale_month_pane_g11_ParamLimits

0x544c,	// (0x0002618b) cale_month_pane_g11

0x5486,	// (0x000261c5) cale_month_pane_g12_ParamLimits

0x5486,	// (0x000261c5) cale_month_pane_g12

0x54c0,	// (0x000261ff) cale_month_pane_g13_ParamLimits

0x54c0,	// (0x000261ff) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00030031) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00030031) cale_month_pane_g

0x54fa,	// (0x00026239) cale_month_week_pane

0x550d,	// (0x0002624c) grid_cale_month_pane_ParamLimits

0x550d,	// (0x0002624c) grid_cale_month_pane

0x553b,	// (0x0002627a) cale_month_day_heading_pane_t1

0x5599,	// (0x000262d8) cale_month_day_heading_pane_t2

0x55fe,	// (0x0002633d) cale_month_day_heading_pane_t3

0x5663,	// (0x000263a2) cale_month_day_heading_pane_t4

0x56c8,	// (0x00026407) cale_month_day_heading_pane_t5

0x572d,	// (0x0002646c) cale_month_day_heading_pane_t6

0x5792,	// (0x000264d1) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0003004c) cale_month_day_heading_pane_t

0xac14,	// (0x0002b953) bg_cale_side_pane_cp01

0x57ff,	// (0x0002653e) cale_month_week_pane_t1

0x5816,	// (0x00026555) cale_month_week_pane_t2

0x582d,	// (0x0002656c) cale_month_week_pane_t3

0x5844,	// (0x00026583) cale_month_week_pane_t4

0x585b,	// (0x0002659a) cale_month_week_pane_t5

0x5872,	// (0x000265b1) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0003005b) cale_month_week_pane_t

0x5889,	// (0x000265c8) cell_cale_month_pane_ParamLimits

0x5889,	// (0x000265c8) cell_cale_month_pane

0xb0ec,	// (0x0002be2b) cell_cale_month_pane_g1

0x2b69,	// (0x000238a8) cell_cale_month_pane_t1_ParamLimits

0x2b69,	// (0x000238a8) cell_cale_month_pane_t1

0xac22,	// (0x0002b961) grid_highlight_pane_cp08

0x46a0,	// (0x000253df) main_smil_g1

0x5937,	// (0x00026676) smil_status_pane

0xb0f8,	// (0x0002be37) smil_text_pane

0xcb86,	// (0x0002d8c5) bg_popup_call3_rect_pane_g8

0xcb8e,	// (0x0002d8cd) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00030314) bg_popup_call3_rect_pane_g

0xce44,	// (0x0002db83) smil_status_volume_pane_g1

0xb102,	// (0x0002be41) smil_status_pane_t1

0xce77,	// (0x0002dbb6) volume_smil_pane

0xb119,	// (0x0002be58) list_smil_text_pane

0x5948,	// (0x00026687) scroll_pane_cp011

0x5953,	// (0x00026692) smil_text_list_pane_t1_ParamLimits

0x5953,	// (0x00026692) smil_text_list_pane_t1

0xb123,	// (0x0002be62) aid_volume_smil_ParamLimits

0xb123,	// (0x0002be62) aid_volume_smil

0x46a0,	// (0x000253df) smil_volume_pane_g1

0x46a0,	// (0x000253df) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0003007b) smil_volume_pane_g

0x45fb,	// (0x0002533a) listscroll_cale_day_pane

0xb145,	// (0x0002be84) bg_cale_pane

0xb15d,	// (0x0002be9c) list_cale_pane

0xb16e,	// (0x0002bead) scroll_pane_cp09

0xb17f,	// (0x0002bebe) cale_bg_pane_g1

0xb187,	// (0x0002bec6) cale_bg_pane_g2

0xb18f,	// (0x0002bece) cale_bg_pane_g3

0xb197,	// (0x0002bed6) cale_bg_pane_g4

0xb19f,	// (0x0002bede) cale_bg_pane_g5

0xb1a7,	// (0x0002bee6) cale_bg_pane_g6

0xb1af,	// (0x0002beee) cale_bg_pane_g7

0xb1b7,	// (0x0002bef6) cale_bg_pane_g8

0xb1bf,	// (0x0002befe) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00030080) cale_bg_pane_g

0x5991,	// (0x000266d0) list_cale_time_pane_ParamLimits

0x5991,	// (0x000266d0) list_cale_time_pane

0xb1c7,	// (0x0002bf06) list_cale_time_pane_g1_ParamLimits

0xb1c7,	// (0x0002bf06) list_cale_time_pane_g1

0xb1d3,	// (0x0002bf12) list_cale_time_pane_g2_ParamLimits

0xb1d3,	// (0x0002bf12) list_cale_time_pane_g2

0x59a6,	// (0x000266e5) list_cale_time_pane_g3_ParamLimits

0x59a6,	// (0x000266e5) list_cale_time_pane_g3

0x59b4,	// (0x000266f3) list_cale_time_pane_g4_ParamLimits

0x59b4,	// (0x000266f3) list_cale_time_pane_g4

0x59c2,	// (0x00026701) list_cale_time_pane_g5_ParamLimits

0x59c2,	// (0x00026701) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00030093) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00030093) list_cale_time_pane_g

0xb1ed,	// (0x0002bf2c) list_cale_time_pane_t1_ParamLimits

0xb1ed,	// (0x0002bf2c) list_cale_time_pane_t1

0xb215,	// (0x0002bf54) list_cale_time_pane_t2_ParamLimits

0xb215,	// (0x0002bf54) list_cale_time_pane_t2

0x5cc6,	// (0x00026a05) aid_blid_cardinal_pane

0x5d04,	// (0x00026a43) compass_pane_t4

0xb23d,	// (0x0002bf7c) list_cale_time_pane_t4_ParamLimits

0xb23d,	// (0x0002bf7c) list_cale_time_pane_t4

0x5d12,	// (0x00026a51) compass_pane_t5

0x5d20,	// (0x00026a5f) compass_pane_t6

0x5d2e,	// (0x00026a6d) compass_pane_t7

0xb78e,	// (0x0002c4cd) navi_pane_cc_t1

0xb944,	// (0x0002c683) aid_phob_thumbnail_center_pane

0x628d,	// (0x00026fcc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x000300a0) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x000300a0) list_cale_time_pane_t

0x3d1f,	// (0x00024a5e) bg_popup_window_pane_cp02_ParamLimits

0x3d1f,	// (0x00024a5e) bg_popup_window_pane_cp02

0xb265,	// (0x0002bfa4) heading_pane_cp01_ParamLimits

0xb265,	// (0x0002bfa4) heading_pane_cp01

0xb271,	// (0x0002bfb0) loc_req_pane_ParamLimits

0xb271,	// (0x0002bfb0) loc_req_pane

0xb281,	// (0x0002bfc0) loc_type_pane_ParamLimits

0xb281,	// (0x0002bfc0) loc_type_pane

0xb293,	// (0x0002bfd2) loc_type_pane_t1_ParamLimits

0xb293,	// (0x0002bfd2) loc_type_pane_t1

0xb2a5,	// (0x0002bfe4) loc_type_pane_t2_ParamLimits

0xb2a5,	// (0x0002bfe4) loc_type_pane_t2

0xb2b7,	// (0x0002bff6) loc_type_pane_t3_ParamLimits

0xb2b7,	// (0x0002bff6) loc_type_pane_t3

0x0002,

0xf368,	// (0x000300a7) loc_type_pane_t_ParamLimits

0xf368,	// (0x000300a7) loc_type_pane_t

0xb2c9,	// (0x0002c008) list_loc_req_pane

0xb2d3,	// (0x0002c012) scroll_pane_cp012

0x59ce,	// (0x0002670d) list_single_loc_request_popup_menu_pane_ParamLimits

0x59ce,	// (0x0002670d) list_single_loc_request_popup_menu_pane

0xb2dc,	// (0x0002c01b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb2dc,	// (0x0002c01b) list_single_loc_request_popup_menu_pane_g1

0xb2e8,	// (0x0002c027) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb2e8,	// (0x0002c027) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x000300ae) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x000300ae) list_single_loc_request_popup_menu_pane_g

0xb2f4,	// (0x0002c033) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb2f4,	// (0x0002c033) list_single_loc_request_popup_menu_pane_t1

0x4345,	// (0x00025084) bg_popup_window_pane_cp03_ParamLimits

0x4345,	// (0x00025084) bg_popup_window_pane_cp03

0xb30a,	// (0x0002c049) heading_loc_req_pane_ParamLimits

0xb30a,	// (0x0002c049) heading_loc_req_pane

0x59db,	// (0x0002671a) popup_dyc_status_message_window_g1_ParamLimits

0x59db,	// (0x0002671a) popup_dyc_status_message_window_g1

0x59ef,	// (0x0002672e) popup_dyc_status_message_window_t1_ParamLimits

0x59ef,	// (0x0002672e) popup_dyc_status_message_window_t1

0x5a04,	// (0x00026743) popup_dyc_status_message_window_t2_ParamLimits

0x5a04,	// (0x00026743) popup_dyc_status_message_window_t2

0x5a19,	// (0x00026758) popup_dyc_status_message_window_t3_ParamLimits

0x5a19,	// (0x00026758) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x000300b3) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x000300b3) popup_dyc_status_message_window_t

0x40ea,	// (0x00024e29) bg_heading_pane_cp01

0xb316,	// (0x0002c055) heading_loc_req_pane_g1

0xb31e,	// (0x0002c05d) heading_loc_req_pane_g2

0xb326,	// (0x0002c065) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x000300ba) heading_loc_req_pane_g

0xb32e,	// (0x0002c06d) heading_loc_req_pane_t1

0xb3d5,	// (0x0002c114) bg_popup_sub_pane_cp01_ParamLimits

0xb3d5,	// (0x0002c114) bg_popup_sub_pane_cp01

0xb3e3,	// (0x0002c122) popup_cale_events_window_g1_ParamLimits

0xb3e3,	// (0x0002c122) popup_cale_events_window_g1

0xb403,	// (0x0002c142) popup_cale_events_window_g2_ParamLimits

0xb403,	// (0x0002c142) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x000300ee) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x000300ee) popup_cale_events_window_g

0xb423,	// (0x0002c162) popup_cale_events_window_t1_ParamLimits

0xb423,	// (0x0002c162) popup_cale_events_window_t1

0xb435,	// (0x0002c174) popup_cale_events_window_t2_ParamLimits

0xb435,	// (0x0002c174) popup_cale_events_window_t2

0xb473,	// (0x0002c1b2) popup_cale_events_window_t3_ParamLimits

0xb473,	// (0x0002c1b2) popup_cale_events_window_t3

0xb4ad,	// (0x0002c1ec) popup_cale_events_window_t4_ParamLimits

0xb4ad,	// (0x0002c1ec) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x000300f3) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x000300f3) popup_cale_events_window_t

0x5aa9,	// (0x000267e8) call_type_pane

0x5ab9,	// (0x000267f8) popup_call_status_window_g1

0x5acd,	// (0x0002680c) popup_call_status_window_g2

0x5ae1,	// (0x00026820) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x000300fc) popup_call_status_window_g

0xb4e3,	// (0x0002c222) call_type_pane_g1

0xb4ec,	// (0x0002c22b) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00030103) call_type_pane_g

0x40ea,	// (0x00024e29) bg_popup_sub_pane_cp02

0xb4f5,	// (0x0002c234) listscroll_popup_wml_pane

0xb4fd,	// (0x0002c23c) list_wml_pane

0xb507,	// (0x0002c246) scroll_pane_cp013

0x5af1,	// (0x00026830) list_single_graphic_popup_wml_pane_ParamLimits

0x5af1,	// (0x00026830) list_single_graphic_popup_wml_pane

0x46a0,	// (0x000253df) list_single_graphic_popup_wml_pane_g1

0xb510,	// (0x0002c24f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x00030108) list_single_graphic_popup_wml_pane_g

0xb518,	// (0x0002c257) list_single_graphic_popup_wml_pane_t1

0xb52e,	// (0x0002c26d) aid_call_pane

0x433d,	// (0x0002507c) popup_clock_analogue_window_g1

0x433d,	// (0x0002507c) popup_clock_analogue_window_g2

0xb536,	// (0x0002c275) popup_clock_analogue_window_g3

0xb536,	// (0x0002c275) popup_clock_analogue_window_g4

0x46a0,	// (0x000253df) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0003010d) popup_clock_analogue_window_g

0xb53e,	// (0x0002c27d) popup_clock_analogue_window_t1

0xb54c,	// (0x0002c28b) clock_digital_number_pane_ParamLimits

0xb54c,	// (0x0002c28b) clock_digital_number_pane

0xb558,	// (0x0002c297) clock_digital_number_pane_cp02_ParamLimits

0xb558,	// (0x0002c297) clock_digital_number_pane_cp02

0xb564,	// (0x0002c2a3) clock_digital_number_pane_cp03_ParamLimits

0xb564,	// (0x0002c2a3) clock_digital_number_pane_cp03

0xb570,	// (0x0002c2af) clock_digital_number_pane_cp04_ParamLimits

0xb570,	// (0x0002c2af) clock_digital_number_pane_cp04

0xb57c,	// (0x0002c2bb) clock_digital_separator_pane_ParamLimits

0xb57c,	// (0x0002c2bb) clock_digital_separator_pane

0xb588,	// (0x0002c2c7) popup_clock_digital_window_t1

0x46a0,	// (0x000253df) clock_digital_number_pane_g1

0x46a0,	// (0x000253df) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0003007b) clock_digital_number_pane_g

0x46a0,	// (0x000253df) clock_digital_separator_pane_g1

0x46a0,	// (0x000253df) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0003007b) clock_digital_separator_pane_g

0x40ea,	// (0x00024e29) bg_popup_window_pane_cp04

0xb5a5,	// (0x0002c2e4) heading_pane_cp03

0xb5ad,	// (0x0002c2ec) listscroll_popup_gms_pane

0xb5b5,	// (0x0002c2f4) grid_large_graphic_popup_pane

0xb5bf,	// (0x0002c2fe) listscroll_popup_gms_pane_g1

0xb5c7,	// (0x0002c306) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x00030118) listscroll_popup_gms_pane_g

0xaf30,	// (0x0002bc6f) scroll_pane_cp014

0x5b04,	// (0x00026843) cell_large_graphic_popup_pane_ParamLimits

0x5b04,	// (0x00026843) cell_large_graphic_popup_pane

0x5b1a,	// (0x00026859) cell_large_graphic_popup_pane_g1_ParamLimits

0x5b1a,	// (0x00026859) cell_large_graphic_popup_pane_g1

0xb5cf,	// (0x0002c30e) cell_large_graphic_popup_pane_g2_ParamLimits

0xb5cf,	// (0x0002c30e) cell_large_graphic_popup_pane_g2

0xb5db,	// (0x0002c31a) cell_large_graphic_popup_pane_g3_ParamLimits

0xb5db,	// (0x0002c31a) cell_large_graphic_popup_pane_g3

0xb5e8,	// (0x0002c327) cell_large_graphic_popup_pane_g4_ParamLimits

0xb5e8,	// (0x0002c327) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0003011d) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0003011d) cell_large_graphic_popup_pane_g

0xb5f8,	// (0x0002c337) grid_highlight_pane_cp010

0x46a0,	// (0x000253df) bg_popup_call_pane_g1

0xb602,	// (0x0002c341) list_single_graphic_popup_conf_pane_ParamLimits

0xb602,	// (0x0002c341) list_single_graphic_popup_conf_pane

0xb615,	// (0x0002c354) list_highlight_pane_cp01

0xb61e,	// (0x0002c35d) list_single_graphic_popup_conf_pane_g1

0xb626,	// (0x0002c365) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00030126) list_single_graphic_popup_conf_pane_g

0xb62e,	// (0x0002c36d) list_single_graphic_popup_conf_pane_t1

0xb63c,	// (0x0002c37b) linegrid_cams_pane_g1

0x5b26,	// (0x00026865) linegrid_cams_pane_g2

0xabc0,	// (0x0002b8ff) linegrid_cams_pane_g3

0xb645,	// (0x0002c384) linegrid_cams_pane_g4

0x5b2f,	// (0x0002686e) linegrid_cams_pane_g5

0x5b38,	// (0x00026877) linegrid_cams_pane_g6

0xac55,	// (0x0002b994) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0003012b) linegrid_cams_pane_g

0xb64e,	// (0x0002c38d) popup_clock_analogue_window

0xb64e,	// (0x0002c38d) popup_clock_digital_window

0x40ea,	// (0x00024e29) popup_phob_thumbnail_window

0x46a0,	// (0x000253df) call_video_uplink_pane_g1

0xb657,	// (0x0002c396) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0003013a) call_video_uplink_pane_g

0xac22,	// (0x0002b961) video_uplink_pane

0xb65f,	// (0x0002c39e) mce_image_pane_g1

0x5b41,	// (0x00026880) mce_image_pane_g2

0x5b49,	// (0x00026888) mce_image_pane_g3

0x5b51,	// (0x00026890) mce_image_pane_g4

0x5b59,	// (0x00026898) mce_image_pane_g5

0x0004,

0xf400,	// (0x0003013f) mce_image_pane_g

0xb669,	// (0x0002c3a8) control_top_pane_stacon_cp01_ParamLimits

0xb669,	// (0x0002c3a8) control_top_pane_stacon_cp01

0xb679,	// (0x0002c3b8) uni_indicator_pane_stacon_cp01_ParamLimits

0xb679,	// (0x0002c3b8) uni_indicator_pane_stacon_cp01

0xb68a,	// (0x0002c3c9) bg_popup_sub_pane_cp03

0xb694,	// (0x0002c3d3) chi_dic_find_pane

0x5b61,	// (0x000268a0) listscroll_chi_dic_pane

0xb69c,	// (0x0002c3db) main_pane_chidic_g1

0xb6a4,	// (0x0002c3e3) chi_dic_find_pane_t1

0xb6b2,	// (0x0002c3f1) find_chidic_pane

0xb6bb,	// (0x0002c3fa) chi_dic_list_pane_ParamLimits

0xb6bb,	// (0x0002c3fa) chi_dic_list_pane

0xb6cc,	// (0x0002c40b) scroll_pane_cp020

0xb6d4,	// (0x0002c413) find_chidic_pane_t1

0x40ea,	// (0x00024e29) input_focus_pane_cp06

0x5b75,	// (0x000268b4) list_chi_dic_pane_ParamLimits

0x5b75,	// (0x000268b4) list_chi_dic_pane

0x5b87,	// (0x000268c6) list_chi_dic_pane_t1_ParamLimits

0x5b87,	// (0x000268c6) list_chi_dic_pane_t1

0x40ea,	// (0x00024e29) list_highlight_pane_cp020

0xb6e3,	// (0x0002c422) bg_cale_heading_pane_g1

0x5b9a,	// (0x000268d9) bg_cale_heading_pane_g2

0x5ba2,	// (0x000268e1) bg_cale_heading_pane_g3

0x5baa,	// (0x000268e9) bg_cale_heading_pane_g4

0x5bb4,	// (0x000268f3) bg_cale_heading_pane_g5

0x5bbe,	// (0x000268fd) bg_cale_heading_pane_g6

0x5bc6,	// (0x00026905) bg_cale_heading_pane_g7

0x5bce,	// (0x0002690d) bg_cale_heading_pane_g8

0x5bd8,	// (0x00026917) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0003014a) bg_cale_heading_pane_g

0xb6e3,	// (0x0002c422) bg_cale_side_pane_g1

0x5be2,	// (0x00026921) bg_cale_side_pane_g2

0x5bea,	// (0x00026929) bg_cale_side_pane_g3

0x5bf2,	// (0x00026931) bg_cale_side_pane_g4

0x5bfa,	// (0x00026939) bg_cale_side_pane_g5

0x5c02,	// (0x00026941) bg_cale_side_pane_g6

0x5c0a,	// (0x00026949) bg_cale_side_pane_g7

0x5c12,	// (0x00026951) bg_cale_side_pane_g8

0x5c1a,	// (0x00026959) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0003015d) bg_cale_side_pane_g

0x5c22,	// (0x00026961) popup_call_status_window_ParamLimits

0x5c22,	// (0x00026961) popup_call_status_window

0xb6eb,	// (0x0002c42a) stacon_top_pane

0xb6f3,	// (0x0002c432) status_pane_ParamLimits

0xb6f3,	// (0x0002c432) status_pane

0xb70d,	// (0x0002c44c) status_small_pane

0xb715,	// (0x0002c454) control_pane

0x40ea,	// (0x00024e29) stacon_bottom_pane

0xb71d,	// (0x0002c45c) list_single_mce_smart_pane_t1_ParamLimits

0xb71d,	// (0x0002c45c) list_single_mce_smart_pane_t1

0xb730,	// (0x0002c46f) list_single_mce_smart_pane_t2_ParamLimits

0xb730,	// (0x0002c46f) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x00030170) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x00030170) list_single_mce_smart_pane_t

0x5c69,	// (0x000269a8) compass_pane

0x5c72,	// (0x000269b1) main_location2_pane_t1

0x5c88,	// (0x000269c7) main_location2_pane_t2

0x5c9e,	// (0x000269dd) main_location2_pane_t3

0x0003,

0xf436,	// (0x00030175) main_location2_pane_t

0xb758,	// (0x0002c497) compass_pane_g1_ParamLimits

0xb758,	// (0x0002c497) compass_pane_g1

0x5ce6,	// (0x00026a25) compass_pane_t1

0x5cf5,	// (0x00026a34) compass_pane_t2

0x0005,

0xf43f,	// (0x0003017e) compass_pane_t

0x5d3c,	// (0x00026a7b) text_secondary_cp61

0xb785,	// (0x0002c4c4) navi_pane_cams_g5

0xb7c6,	// (0x0002c505) navi_pane_im_t1

0xb7d4,	// (0x0002c513) navi_pane_mp_g1_ParamLimits

0xb7d4,	// (0x0002c513) navi_pane_mp_g1

0xb7e8,	// (0x0002c527) navi_pane_mp_g2_ParamLimits

0xb7e8,	// (0x0002c527) navi_pane_mp_g2

0xb7f4,	// (0x0002c533) navi_pane_mp_g3_ParamLimits

0xb7f4,	// (0x0002c533) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00030192) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00030192) navi_pane_mp_g

0xb800,	// (0x0002c53f) navi_pane_mp_t1

0xb80e,	// (0x0002c54d) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x00030199) navi_pane_mp_t

0xb87b,	// (0x0002c5ba) navi_pane_vt_g1

0xb800,	// (0x0002c53f) navi_pane_vt_t1

0xb883,	// (0x0002c5c2) navi_slider_pane

0xb88b,	// (0x0002c5ca) zooming_pane

0xb893,	// (0x0002c5d2) navi_slider_pane_g1

0xb89c,	// (0x0002c5db) navi_slider_pane_g2

0x0006,

0xf461,	// (0x000301a0) navi_slider_pane_g

0xb8c9,	// (0x0002c608) aid_levels_zoom

0xb8d1,	// (0x0002c610) zooming_pane_g1

0xb8d9,	// (0x0002c618) zooming_pane_g2

0xb8d9,	// (0x0002c618) zooming_pane_g3

0x0002,

0xf470,	// (0x000301af) zooming_pane_g

0xb8e1,	// (0x0002c620) level_10_zoom

0xb8ea,	// (0x0002c629) level_11_zoom

0xb8f3,	// (0x0002c632) level_1_zoom

0xb8fc,	// (0x0002c63b) level_2_zoom

0xb905,	// (0x0002c644) level_3_zoom

0xb90e,	// (0x0002c64d) level_4_zoom

0xb917,	// (0x0002c656) level_5_zoom

0xb920,	// (0x0002c65f) level_6_zoom

0xb929,	// (0x0002c668) level_7_zoom

0xb932,	// (0x0002c671) level_8_zoom

0xb93b,	// (0x0002c67a) level_9_zoom

0xb94c,	// (0x0002c68b) popup_phob_thumbnail_window_g1

0xb954,	// (0x0002c693) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x000301b6) popup_phob_thumbnail_window_g

0xcd28,	// (0x0002da67) level_1_location

0xcd30,	// (0x0002da6f) level_2_location

0xcd38,	// (0x0002da77) level_3_location

0xcd40,	// (0x0002da7f) level_4_location

0xb88b,	// (0x0002c5ca) level_5_location

0x5dc7,	// (0x00026b06) mce_icon_pane_g1

0x5dcf,	// (0x00026b0e) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x000301bb) mce_icon_pane_g

0x5dd7,	// (0x00026b16) main_mup_pane_g1_ParamLimits

0x5dd7,	// (0x00026b16) main_mup_pane_g1

0x5ded,	// (0x00026b2c) main_mup_pane_g2_ParamLimits

0x5ded,	// (0x00026b2c) main_mup_pane_g2

0x5e05,	// (0x00026b44) main_mup_pane_g3_ParamLimits

0x5e05,	// (0x00026b44) main_mup_pane_g3

0x5e1d,	// (0x00026b5c) main_mup_pane_g4_ParamLimits

0x5e1d,	// (0x00026b5c) main_mup_pane_g4

0x5e35,	// (0x00026b74) main_mup_pane_g5_ParamLimits

0x5e35,	// (0x00026b74) main_mup_pane_g5

0x5e4f,	// (0x00026b8e) main_mup_pane_g6_ParamLimits

0x5e4f,	// (0x00026b8e) main_mup_pane_g6

0x5e67,	// (0x00026ba6) main_mup_pane_g7_ParamLimits

0x5e67,	// (0x00026ba6) main_mup_pane_g7

0x5e7f,	// (0x00026bbe) main_mup_pane_g8_ParamLimits

0x5e7f,	// (0x00026bbe) main_mup_pane_g8

0x5e97,	// (0x00026bd6) main_mup_pane_g9_ParamLimits

0x5e97,	// (0x00026bd6) main_mup_pane_g9

0x5eab,	// (0x00026bea) main_mup_pane_g10_ParamLimits

0x5eab,	// (0x00026bea) main_mup_pane_g10

0x5ebf,	// (0x00026bfe) main_mup_pane_g11_ParamLimits

0x5ebf,	// (0x00026bfe) main_mup_pane_g11

0x5ed1,	// (0x00026c10) main_mup_pane_g12_ParamLimits

0x5ed1,	// (0x00026c10) main_mup_pane_g12

0x5ee5,	// (0x00026c24) main_mup_pane_g13_ParamLimits

0x5ee5,	// (0x00026c24) main_mup_pane_g13

0x000c,

0xf481,	// (0x000301c0) main_mup_pane_g_ParamLimits

0xf481,	// (0x000301c0) main_mup_pane_g

0x5ef7,	// (0x00026c36) main_mup_pane_t1_ParamLimits

0x5ef7,	// (0x00026c36) main_mup_pane_t1

0x5f11,	// (0x00026c50) main_mup_pane_t2_ParamLimits

0x5f11,	// (0x00026c50) main_mup_pane_t2

0x5f29,	// (0x00026c68) main_mup_pane_t3_ParamLimits

0x5f29,	// (0x00026c68) main_mup_pane_t3

0x5f41,	// (0x00026c80) main_mup_pane_t4_ParamLimits

0x5f41,	// (0x00026c80) main_mup_pane_t4

0x5f5f,	// (0x00026c9e) main_mup_pane_t5_ParamLimits

0x5f5f,	// (0x00026c9e) main_mup_pane_t5

0x5f74,	// (0x00026cb3) main_mup_pane_t6_ParamLimits

0x5f74,	// (0x00026cb3) main_mup_pane_t6

0x0005,

0xf49c,	// (0x000301db) main_mup_pane_t_ParamLimits

0xf49c,	// (0x000301db) main_mup_pane_t

0x5f86,	// (0x00026cc5) mup_progress_pane_ParamLimits

0x5f86,	// (0x00026cc5) mup_progress_pane

0x5f92,	// (0x00026cd1) mup_visualizer_pane_ParamLimits

0x5f92,	// (0x00026cd1) mup_visualizer_pane

0x5fba,	// (0x00026cf9) mup_volume_pane_ParamLimits

0x5fba,	// (0x00026cf9) mup_volume_pane

0xb95c,	// (0x0002c69b) mup_visualizer_pane_g1_ParamLimits

0xb95c,	// (0x0002c69b) mup_visualizer_pane_g1

0xb95c,	// (0x0002c69b) mup_visualizer_pane_g2_ParamLimits

0xb95c,	// (0x0002c69b) mup_visualizer_pane_g2

0xb758,	// (0x0002c497) mup_visualizer_pane_g3_ParamLimits

0xb758,	// (0x0002c497) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x000301e8) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x000301e8) mup_visualizer_pane_g

0x46a0,	// (0x000253df) mup_volume_pane_g1

0xb972,	// (0x0002c6b1) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x000301ef) mup_volume_pane_g

0x46a0,	// (0x000253df) mup_progress_pane_g1

0xb97b,	// (0x0002c6ba) mup_progress_pane_g2

0xb984,	// (0x0002c6c3) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x000301f4) mup_progress_pane_g

0x40ea,	// (0x00024e29) bg_popup_window_pane_cp05

0xb98d,	// (0x0002c6cc) heading_pane_cp02_ParamLimits

0xb98d,	// (0x0002c6cc) heading_pane_cp02

0xb9a7,	// (0x0002c6e6) list_popup_blid_pane

0xb9af,	// (0x0002c6ee) list_blid_sat_info_pane_ParamLimits

0xb9af,	// (0x0002c6ee) list_blid_sat_info_pane

0xb9c2,	// (0x0002c701) list_blid_sat_info_pane_g1

0xb9ca,	// (0x0002c709) list_blid_sat_info_pane_t1

0x60aa,	// (0x00026de9) mup_equalizer_pane_ParamLimits

0x60aa,	// (0x00026de9) mup_equalizer_pane

0x60c3,	// (0x00026e02) mup_equalizer_pane_cp1_ParamLimits

0x60c3,	// (0x00026e02) mup_equalizer_pane_cp1

0x60dc,	// (0x00026e1b) mup_equalizer_pane_cp2_ParamLimits

0x60dc,	// (0x00026e1b) mup_equalizer_pane_cp2

0x60f5,	// (0x00026e34) mup_equalizer_pane_cp3_ParamLimits

0x60f5,	// (0x00026e34) mup_equalizer_pane_cp3

0x610e,	// (0x00026e4d) mup_equalizer_pane_cp4_ParamLimits

0x610e,	// (0x00026e4d) mup_equalizer_pane_cp4

0x6127,	// (0x00026e66) mup_equalizer_pane_cp5

0x6139,	// (0x00026e78) mup_equalizer_pane_cp6

0x614b,	// (0x00026e8a) mup_equalizer_pane_cp7

0xcc06,	// (0x0002d945) bg_popup_call_poc_act_pane_g9

0xcc0e,	// (0x0002d94d) bg_popup_call_poc_act_pane_g10

0xcc16,	// (0x0002d955) bg_popup_call_poc_act_pane_g11

0x000a,

0x4345,	// (0x00025084) mup_scale_pane

0x46a0,	// (0x000253df) mup_scale_pane_g1

0xb9d8,	// (0x0002c717) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00030210) mup_scale_pane_g

0xb9fc,	// (0x0002c73b) msg_data_pane

0xba04,	// (0x0002c743) scroll_pane_cp017

0x6171,	// (0x00026eb0) bg_list_pane_cp04_ParamLimits

0x6171,	// (0x00026eb0) bg_list_pane_cp04

0xba14,	// (0x0002c753) msg_data_pane_g1

0x5b41,	// (0x00026880) msg_data_pane_g2

0x5b49,	// (0x00026888) msg_data_pane_g3

0x6189,	// (0x00026ec8) msg_data_pane_g4

0x5b59,	// (0x00026898) msg_data_pane_g5

0x5dc7,	// (0x00026b06) msg_data_pane_g6

0x6191,	// (0x00026ed0) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0003021f) msg_data_pane_g

0x6199,	// (0x00026ed8) msg_text_pane_ParamLimits

0x6199,	// (0x00026ed8) msg_text_pane

0x61bd,	// (0x00026efc) qrid_highlight_pane_cp011_ParamLimits

0x61bd,	// (0x00026efc) qrid_highlight_pane_cp011

0x40ea,	// (0x00024e29) msg_body_pane

0x40ea,	// (0x00024e29) msg_header_pane

0xba25,	// (0x0002c764) input_focus_pane_cp07

0x61df,	// (0x00026f1e) msg_header_pane_t1_ParamLimits

0x61df,	// (0x00026f1e) msg_header_pane_t1

0xba3a,	// (0x0002c779) msg_header_pane_t2_ParamLimits

0xba3a,	// (0x0002c779) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00030233) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00030233) msg_header_pane_t

0xba4c,	// (0x0002c78b) msg_body_pane_g1

0xba54,	// (0x0002c793) msg_body_pane_t1_ParamLimits

0xba54,	// (0x0002c793) msg_body_pane_t1

0xba7f,	// (0x0002c7be) msg_body_pane_t2_ParamLimits

0xba7f,	// (0x0002c7be) msg_body_pane_t2

0xba91,	// (0x0002c7d0) msg_body_pane_t3_ParamLimits

0xba91,	// (0x0002c7d0) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00030238) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00030238) msg_body_pane_t

0x2b9d,	// (0x000238dc) main_viewer_pane_g1_ParamLimits

0x2b9d,	// (0x000238dc) main_viewer_pane_g1

0x2ba9,	// (0x000238e8) main_viewer_pane_g2_ParamLimits

0x2ba9,	// (0x000238e8) main_viewer_pane_g2

0x620f,	// (0x00026f4e) main_viewer_pane_g3_ParamLimits

0x620f,	// (0x00026f4e) main_viewer_pane_g3

0x621e,	// (0x00026f5d) main_viewer_pane_g4_ParamLimits

0x621e,	// (0x00026f5d) main_viewer_pane_g4

0xbabb,	// (0x0002c7fa) main_viewer_pane_g5_ParamLimits

0xbabb,	// (0x0002c7fa) main_viewer_pane_g5

0xbabb,	// (0x0002c7fa) main_viewer_pane_g7_ParamLimits

0xbabb,	// (0x0002c7fa) main_viewer_pane_g7

0xbacd,	// (0x0002c80c) main_viewer_pane_g8_ParamLimits

0xbacd,	// (0x0002c80c) main_viewer_pane_g8

0x0007,

0xf509,	// (0x00030248) main_viewer_pane_g_ParamLimits

0xf509,	// (0x00030248) main_viewer_pane_g

0xbae5,	// (0x0002c824) viewer_content_pane_ParamLimits

0xbae5,	// (0x0002c824) viewer_content_pane

0x6252,	// (0x00026f91) main_postcard_pane_g1_ParamLimits

0x6252,	// (0x00026f91) main_postcard_pane_g1

0x6266,	// (0x00026fa5) main_postcard_pane_g2_ParamLimits

0x6266,	// (0x00026fa5) main_postcard_pane_g2

0x627a,	// (0x00026fb9) main_postcard_pane_g3_ParamLimits

0x627a,	// (0x00026fb9) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00030259) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00030259) main_postcard_pane_g

0x628d,	// (0x00026fcc) main_postcard_pane_g4

0xce57,	// (0x0002db96) smil_status_volume_pane_g2

0x62c8,	// (0x00027007) postcard_pane_ParamLimits

0x62c8,	// (0x00027007) postcard_pane

0xbaf3,	// (0x0002c832) postcard_pane_g1_ParamLimits

0xbaf3,	// (0x0002c832) postcard_pane_g1

0x6308,	// (0x00027047) postcard_pane_g2_ParamLimits

0x6308,	// (0x00027047) postcard_pane_g2

0x6314,	// (0x00027053) postcard_pane_g3_ParamLimits

0x6314,	// (0x00027053) postcard_pane_g3

0xbb01,	// (0x0002c840) postcard_pane_g4_ParamLimits

0xbb01,	// (0x0002c840) postcard_pane_g4

0x6320,	// (0x0002705f) postcard_pane_g5_ParamLimits

0x6320,	// (0x0002705f) postcard_pane_g5

0x6335,	// (0x00027074) postcard_pane_g6_ParamLimits

0x6335,	// (0x00027074) postcard_pane_g6

0xbaf3,	// (0x0002c832) postcard_pane_g7_ParamLimits

0xbaf3,	// (0x0002c832) postcard_pane_g7

0x0006,

0xf527,	// (0x00030266) postcard_pane_g_ParamLimits

0xf527,	// (0x00030266) postcard_pane_g

0x6349,	// (0x00027088) main_mp2_pane_g1_ParamLimits

0x6349,	// (0x00027088) main_mp2_pane_g1

0x6355,	// (0x00027094) main_mp2_pane_g2_ParamLimits

0x6355,	// (0x00027094) main_mp2_pane_g2

0x6361,	// (0x000270a0) main_mp2_pane_g3_ParamLimits

0x6361,	// (0x000270a0) main_mp2_pane_g3

0x0002,

0xf536,	// (0x00030275) main_mp2_pane_g_ParamLimits

0xf536,	// (0x00030275) main_mp2_pane_g

0x636d,	// (0x000270ac) main_mp2_pane_t1_ParamLimits

0x636d,	// (0x000270ac) main_mp2_pane_t1

0x6382,	// (0x000270c1) main_mp2_pane_t2_ParamLimits

0x6382,	// (0x000270c1) main_mp2_pane_t2

0x6394,	// (0x000270d3) main_mp2_pane_t3_ParamLimits

0x6394,	// (0x000270d3) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0003027c) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0003027c) main_mp2_pane_t

0xbb0f,	// (0x0002c84e) pec_content_pane_ParamLimits

0xbb0f,	// (0x0002c84e) pec_content_pane

0xaf30,	// (0x0002bc6f) scroll_pane_cp015

0xbb21,	// (0x0002c860) pec_attribute_pane_ParamLimits

0xbb21,	// (0x0002c860) pec_attribute_pane

0x63a6,	// (0x000270e5) pec_content_pane_g1_ParamLimits

0x63a6,	// (0x000270e5) pec_content_pane_g1

0xbb31,	// (0x0002c870) pec_content_pane_t1_ParamLimits

0xbb31,	// (0x0002c870) pec_content_pane_t1

0xbb43,	// (0x0002c882) pec_content_pane_t2_ParamLimits

0xbb43,	// (0x0002c882) pec_content_pane_t2

0x0001,

0xf544,	// (0x00030283) pec_content_pane_t_ParamLimits

0xf544,	// (0x00030283) pec_content_pane_t

0x63b2,	// (0x000270f1) list_single_graphic_pane_cp01_ParamLimits

0x63b2,	// (0x000270f1) list_single_graphic_pane_cp01

0x4345,	// (0x00025084) bg_popup_sub_pane_cp04

0xbb55,	// (0x0002c894) popup_mup_playback_window_g1

0xbb61,	// (0x0002c8a0) popup_mup_playback_window_t1

0xbb76,	// (0x0002c8b5) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x00030288) popup_mup_playback_window_t

0xbbad,	// (0x0002c8ec) main_image_pane_g1_ParamLimits

0xbbad,	// (0x0002c8ec) main_image_pane_g1

0xbbf0,	// (0x0002c92f) scroll_pane_cp018_ParamLimits

0xbbf0,	// (0x0002c92f) scroll_pane_cp018

0xbc08,	// (0x0002c947) scroll_pane_cp016_ParamLimits

0xbc08,	// (0x0002c947) scroll_pane_cp016

0x647d,	// (0x000271bc) smil2_image_pane_ParamLimits

0x647d,	// (0x000271bc) smil2_image_pane

0x64a5,	// (0x000271e4) smil2_root_pane_ParamLimits

0x64a5,	// (0x000271e4) smil2_root_pane

0x64dd,	// (0x0002721c) smil2_text_pane_ParamLimits

0x64dd,	// (0x0002721c) smil2_text_pane

0x40ea,	// (0x00024e29) bg_list_pane_cp06

0xbc44,	// (0x0002c983) grid_radio_pane

0x40ea,	// (0x00024e29) bg_popup_window_pane_cp06

0xbc4c,	// (0x0002c98b) main_fmradio_pane_t1

0xb5a5,	// (0x0002c2e4) heading_pane_cp04

0xbc5a,	// (0x0002c999) main_fmradio_pane_t2

0xcc5e,	// (0x0002d99d) popup_cale_lunar_info_window_g1

0xbc68,	// (0x0002c9a7) main_fmradio_pane_t3

0xcc66,	// (0x0002d9a5) popup_cale_lunar_info_window_g2

0xbc76,	// (0x0002c9b5) main_fmradio_pane_t4

0x0001,

0xbc84,	// (0x0002c9c3) main_fmradio_pane_t5

0x0004,

0xf637,	// (0x00030376) popup_cale_lunar_info_window_g

0xf55e,	// (0x0003029d) main_fmradio_pane_t

0xbc92,	// (0x0002c9d1) wait_bar_pane_cp03

0xbc9a,	// (0x0002c9d9) cell_fmradio_pane_ParamLimits

0xbc9a,	// (0x0002c9d9) cell_fmradio_pane

0xbaf3,	// (0x0002c832) cell_fmradio_pane_g1_ParamLimits

0xbaf3,	// (0x0002c832) cell_fmradio_pane_g1

0x40ea,	// (0x00024e29) grid_highlight_pane_cp011

0xbcad,	// (0x0002c9ec) poc_content_pane_ParamLimits

0xbcad,	// (0x0002c9ec) poc_content_pane

0xbcc0,	// (0x0002c9ff) scroll_pane_cp019

0x6549,	// (0x00027288) popup_call_poc_act_window_ParamLimits

0x6549,	// (0x00027288) popup_call_poc_act_window

0x6569,	// (0x000272a8) popup_call_poc_inact_window_ParamLimits

0x6569,	// (0x000272a8) popup_call_poc_inact_window

0xf5fb,	// (0x0003033a) bg_popup_call_poc_act_pane_g

0xcc1e,	// (0x0002d95d) bg_popup_call_poc_inact_pane_g1

0xcc26,	// (0x0002d965) bg_popup_call_poc_inact_pane_g2

0xbcc8,	// (0x0002ca07) popup_call_poc_act_window_g2

0xcc2e,	// (0x0002d96d) bg_popup_call_poc_inact_pane_g3

0xcbae,	// (0x0002d8ed) bg_popup_call_poc_inact_pane_g4

0xcc36,	// (0x0002d975) bg_popup_call_poc_inact_pane_g5

0xbcd0,	// (0x0002ca0f) popup_call_poc_act_window_t1_ParamLimits

0xbcd0,	// (0x0002ca0f) popup_call_poc_act_window_t1

0xbcf8,	// (0x0002ca37) popup_call_poc_act_window_t2_ParamLimits

0xbcf8,	// (0x0002ca37) popup_call_poc_act_window_t2

0xbd20,	// (0x0002ca5f) popup_call_poc_act_window_t3_ParamLimits

0xbd20,	// (0x0002ca5f) popup_call_poc_act_window_t3

0xbd48,	// (0x0002ca87) popup_call_poc_act_window_t4_ParamLimits

0xbd48,	// (0x0002ca87) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x000302a8) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x000302a8) popup_call_poc_act_window_t

0xcc3e,	// (0x0002d97d) bg_popup_call_poc_inact_pane_g6

0xcc46,	// (0x0002d985) bg_popup_call_poc_inact_pane_g7

0xcc4e,	// (0x0002d98d) bg_popup_call_poc_inact_pane_g8

0xbd5a,	// (0x0002ca99) popup_call_poc_inact_window_g2

0xcc56,	// (0x0002d995) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf612,	// (0x00030351) bg_popup_call_poc_inact_pane_g

0xbd62,	// (0x0002caa1) popup_call_poc_inact_window_t1_ParamLimits

0xbd62,	// (0x0002caa1) popup_call_poc_inact_window_t1

0xbd77,	// (0x0002cab6) popup_call_poc_inact_window_t2_ParamLimits

0xbd77,	// (0x0002cab6) popup_call_poc_inact_window_t2

0xbd8c,	// (0x0002cacb) popup_call_poc_inact_window_t3_ParamLimits

0xbd8c,	// (0x0002cacb) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x000302b1) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x000302b1) popup_call_poc_inact_window_t

0xcdca,	// (0x0002db09) context_pane_ParamLimits

0x6c7b,	// (0x000279ba) signal_pane_ParamLimits

0xb88b,	// (0x0002c5ca) main_call2_pane

0xcdb8,	// (0x0002daf7) popup_phob_thumbnail2_window_ParamLimits

0xcdb8,	// (0x0002daf7) popup_phob_thumbnail2_window

0xbaa3,	// (0x0002c7e2) aid_hotspot_pointer_arrow_pane

0xbaab,	// (0x0002c7ea) aid_hotspot_pointer_hand_pane

0x683e,	// (0x0002757d) phob_pre_status_pane_g5

0x4b58,	// (0x00025897) cams_zoom_pane_ParamLimits

0x4b67,	// (0x000258a6) image_vga_pane_ParamLimits

0x4b7f,	// (0x000258be) main_camera_pane_g1_ParamLimits

0x4b8f,	// (0x000258ce) main_camera_pane_g2_ParamLimits

0x4b9f,	// (0x000258de) main_camera_pane_g3_ParamLimits

0x4baf,	// (0x000258ee) main_camera_pane_g4_ParamLimits

0x4bbf,	// (0x000258fe) main_camera_pane_g5_ParamLimits

0x4bcf,	// (0x0002590e) main_camera_pane_g6_ParamLimits

0x4bdf,	// (0x0002591e) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0002ffb0) main_camera_pane_g_ParamLimits

0x4bef,	// (0x0002592e) main_camera_pane_t1_ParamLimits

0x4c05,	// (0x00025944) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0002ffc1) main_camera_pane_t_ParamLimits

0x4345,	// (0x00025084) bg_popup_preview_window_pane_cp01_ParamLimits

0x4345,	// (0x00025084) bg_popup_preview_window_pane_cp01

0xbda1,	// (0x0002cae0) popup_phob_thumbnail2_window_g1_ParamLimits

0xbda1,	// (0x0002cae0) popup_phob_thumbnail2_window_g1

0x40ea,	// (0x00024e29) call2_cli_visual_pane

0x6595,	// (0x000272d4) popup_call2_audio_conf_window_ParamLimits

0x6595,	// (0x000272d4) popup_call2_audio_conf_window

0x65b3,	// (0x000272f2) popup_call2_audio_first_window_ParamLimits

0x65b3,	// (0x000272f2) popup_call2_audio_first_window

0x6629,	// (0x00027368) popup_call2_audio_in_window_ParamLimits

0x6629,	// (0x00027368) popup_call2_audio_in_window

0x665d,	// (0x0002739c) popup_call2_audio_out_window_ParamLimits

0x665d,	// (0x0002739c) popup_call2_audio_out_window

0x66af,	// (0x000273ee) popup_call2_audio_second_window_ParamLimits

0x66af,	// (0x000273ee) popup_call2_audio_second_window

0x6701,	// (0x00027440) popup_call2_audio_wait_window_ParamLimits

0x6701,	// (0x00027440) popup_call2_audio_wait_window

0x40ea,	// (0x00024e29) bg_popup_call2_act_pane_cp03

0x4327,	// (0x00025066) list_conf_pane_cp

0xbdad,	// (0x0002caec) popup_call2_audio_conf_window_t1

0xb602,	// (0x0002c341) list_single_graphic_popup_conf2_pane_ParamLimits

0xb602,	// (0x0002c341) list_single_graphic_popup_conf2_pane

0xb615,	// (0x0002c354) list_highlight_pane_cp04

0xbdbb,	// (0x0002cafa) list_single_graphic_popup_conf2_pane_g1

0xb626,	// (0x0002c365) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x000302b8) list_single_graphic_popup_conf2_pane_g

0xbdc3,	// (0x0002cb02) list_single_graphic_popup_conf2_pane_t1

0xbdd1,	// (0x0002cb10) bg_popup_call2_act_pane_cp01_ParamLimits

0xbdd1,	// (0x0002cb10) bg_popup_call2_act_pane_cp01

0xbe5b,	// (0x0002cb9a) call_type_pane_cp05_ParamLimits

0xbe5b,	// (0x0002cb9a) call_type_pane_cp05

0xbeaf,	// (0x0002cbee) popup_call2_audio_second_window_g1_ParamLimits

0xbeaf,	// (0x0002cbee) popup_call2_audio_second_window_g1

0xbf03,	// (0x0002cc42) popup_call2_audio_second_window_g2_ParamLimits

0xbf03,	// (0x0002cc42) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x000302bd) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x000302bd) popup_call2_audio_second_window_g

0xbf68,	// (0x0002cca7) popup_call2_audio_second_window_t1_ParamLimits

0xbf68,	// (0x0002cca7) popup_call2_audio_second_window_t1

0xc023,	// (0x0002cd62) popup_call2_audio_second_window_t2_ParamLimits

0xc023,	// (0x0002cd62) popup_call2_audio_second_window_t2

0xc076,	// (0x0002cdb5) popup_call2_audio_second_window_t3_ParamLimits

0xc076,	// (0x0002cdb5) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x000302c4) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x000302c4) popup_call2_audio_second_window_t

0x40ea,	// (0x00024e29) bg_popup_call2_in_pane_cp02

0x40f4,	// (0x00024e33) call_type_pane_cp04

0x40fc,	// (0x00024e3b) popup_call2_audio_wait_window_g1

0x4104,	// (0x00024e43) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0002fe9d) popup_call2_audio_wait_window_g

0x410c,	// (0x00024e4b) popup_call2_audio_wait_window_t3

0xc169,	// (0x0002cea8) bg_popup_call2_act_pane_ParamLimits

0xc169,	// (0x0002cea8) bg_popup_call2_act_pane

0xc229,	// (0x0002cf68) call_type_pane_cp03_ParamLimits

0xc229,	// (0x0002cf68) call_type_pane_cp03

0xc28d,	// (0x0002cfcc) popup_call2_audio_first_window_g1_ParamLimits

0xc28d,	// (0x0002cfcc) popup_call2_audio_first_window_g1

0xc2fd,	// (0x0002d03c) popup_call2_audio_first_window_g2_ParamLimits

0xc2fd,	// (0x0002d03c) popup_call2_audio_first_window_g2

0xb95c,	// (0x0002c69b) popup_call2_audio_first_window_g3_ParamLimits

0xb95c,	// (0x0002c69b) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x000302cd) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x000302cd) popup_call2_audio_first_window_g

0xc3db,	// (0x0002d11a) popup_call2_audio_first_window_t1_ParamLimits

0xc3db,	// (0x0002d11a) popup_call2_audio_first_window_t1

0xc4de,	// (0x0002d21d) popup_call2_audio_first_window_t4_ParamLimits

0xc4de,	// (0x0002d21d) popup_call2_audio_first_window_t4

0xc5c1,	// (0x0002d300) popup_call2_audio_first_window_t5_ParamLimits

0xc5c1,	// (0x0002d300) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x000302d8) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x000302d8) popup_call2_audio_first_window_t

0x433d,	// (0x0002507c) bg_popup_call2_act_pane_g1

0xcc6e,	// (0x0002d9ad) popup_cale_lunar_info_window_t1

0xcc7c,	// (0x0002d9bb) popup_cale_lunar_info_window_t2

0xcc8a,	// (0x0002d9c9) popup_cale_lunar_info_window_t3

0x40ea,	// (0x00024e29) bg_popup_call2_bubble_pane

0xc6c2,	// (0x0002d401) bg_popup_call2_in_pane_cp01_ParamLimits

0xc6c2,	// (0x0002d401) bg_popup_call2_in_pane_cp01

0x3da2,	// (0x00024ae1) call_type_pane_cp02

0xc70a,	// (0x0002d449) popup_call2_audio_out_window_g1_ParamLimits

0xc70a,	// (0x0002d449) popup_call2_audio_out_window_g1

0xc736,	// (0x0002d475) popup_call2_audio_out_window_g2_ParamLimits

0xc736,	// (0x0002d475) popup_call2_audio_out_window_g2

0xc75e,	// (0x0002d49d) popup_call2_audio_out_window_g3_ParamLimits

0xc75e,	// (0x0002d49d) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x000302e1) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x000302e1) popup_call2_audio_out_window_g

0xc799,	// (0x0002d4d8) popup_call2_audio_out_window_t1_ParamLimits

0xc799,	// (0x0002d4d8) popup_call2_audio_out_window_t1

0xc7f8,	// (0x0002d537) popup_call2_audio_out_window_t2_ParamLimits

0xc7f8,	// (0x0002d537) popup_call2_audio_out_window_t2

0xc84c,	// (0x0002d58b) popup_call2_audio_out_window_t3_ParamLimits

0xc84c,	// (0x0002d58b) popup_call2_audio_out_window_t3

0xc862,	// (0x0002d5a1) popup_call2_audio_out_window_t4_ParamLimits

0xc862,	// (0x0002d5a1) popup_call2_audio_out_window_t4

0xc878,	// (0x0002d5b7) popup_call2_audio_out_window_t5_ParamLimits

0xc878,	// (0x0002d5b7) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x000302ea) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x000302ea) popup_call2_audio_out_window_t

0xc8dc,	// (0x0002d61b) bg_popup_call2_in_pane_ParamLimits

0xc8dc,	// (0x0002d61b) bg_popup_call2_in_pane

0xc938,	// (0x0002d677) popup_call2_audio_in_window_g1_ParamLimits

0xc938,	// (0x0002d677) popup_call2_audio_in_window_g1

0xc970,	// (0x0002d6af) popup_call2_audio_in_window_g2_ParamLimits

0xc970,	// (0x0002d6af) popup_call2_audio_in_window_g2

0xc9a8,	// (0x0002d6e7) popup_call2_audio_in_window_g3_ParamLimits

0xc9a8,	// (0x0002d6e7) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x000302f7) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x000302f7) popup_call2_audio_in_window_g

0xca00,	// (0x0002d73f) popup_call2_audio_in_window_t1_ParamLimits

0xca00,	// (0x0002d73f) popup_call2_audio_in_window_t1

0xca80,	// (0x0002d7bf) popup_call2_audio_in_window_t2_ParamLimits

0xca80,	// (0x0002d7bf) popup_call2_audio_in_window_t2

0xcb00,	// (0x0002d83f) popup_call2_audio_in_window_t3_ParamLimits

0xcb00,	// (0x0002d83f) popup_call2_audio_in_window_t3

0xcb1a,	// (0x0002d859) popup_call2_audio_in_window_t4_ParamLimits

0xcb1a,	// (0x0002d859) popup_call2_audio_in_window_t4

0xcb2c,	// (0x0002d86b) popup_call2_audio_in_window_t5_ParamLimits

0xcb2c,	// (0x0002d86b) popup_call2_audio_in_window_t5

0xcb41,	// (0x0002d880) popup_call2_audio_in_window_t6_ParamLimits

0xcb41,	// (0x0002d880) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00030300) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00030300) popup_call2_audio_in_window_t

0x433d,	// (0x0002507c) bg_popup_call2_in_pane_g1

0xcc98,	// (0x0002d9d7) popup_cale_lunar_info_window_t4

0x0003,

0xf63c,	// (0x0003037b) popup_cale_lunar_info_window_t

0x4345,	// (0x00025084) bg_popup_call2_rect_pane_ParamLimits

0x4345,	// (0x00025084) bg_popup_call2_rect_pane

0x40ea,	// (0x00024e29) call2_cli_visual_graphic_pane

0x40ea,	// (0x00024e29) call2_cli_visual_text_pane

0xce6a,	// (0x0002dba9) smil_status_volume_pane_g3

0x0002,

0x46a0,	// (0x000253df) call2_cli_visual_graphic_pane_g1

0x46a0,	// (0x000253df) call2_cli_visual_graphic_pane_g2

0x46a0,	// (0x000253df) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0003030d) call2_cli_visual_graphic_pane_g

0xcb56,	// (0x0002d895) bg_popup_call2_rect_pane_g1

0xab49,	// (0x0002b888) bg_popup_call2_rect_pane_g2

0xcb5e,	// (0x0002d89d) bg_popup_call2_rect_pane_g3

0xcb66,	// (0x0002d8a5) bg_popup_call2_rect_pane_g4

0xcb6e,	// (0x0002d8ad) bg_popup_call2_rect_pane_g5

0xcb76,	// (0x0002d8b5) bg_popup_call2_rect_pane_g6

0xcb7e,	// (0x0002d8bd) bg_popup_call2_rect_pane_g7

0xcb86,	// (0x0002d8c5) bg_popup_call2_rect_pane_g8

0xcb8e,	// (0x0002d8cd) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00030314) bg_popup_call2_rect_pane_g

0xcb96,	// (0x0002d8d5) bg_popup_call2_bubble_pane_g1

0xcb9e,	// (0x0002d8dd) bg_popup_call2_bubble_pane_g2

0xcba6,	// (0x0002d8e5) bg_popup_call2_bubble_pane_g3

0xcbae,	// (0x0002d8ed) bg_popup_call2_bubble_pane_g4

0xcbb6,	// (0x0002d8f5) bg_popup_call2_bubble_pane_g5

0xcbbe,	// (0x0002d8fd) bg_popup_call2_bubble_pane_g6

0xcbc6,	// (0x0002d905) bg_popup_call2_bubble_pane_g7

0xcbce,	// (0x0002d90d) bg_popup_call2_bubble_pane_g8

0xcbd6,	// (0x0002d915) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x00030327) bg_popup_call2_bubble_pane_g

0x47eb,	// (0x0002552a) aid_cale_week_size_cell_pane

0x4c1b,	// (0x0002595a) aid_cams_cif_uncrop_pane_ParamLimits

0x4c1b,	// (0x0002595a) aid_cams_cif_uncrop_pane

0x4dbc,	// (0x00025afb) aid_cams_size_cell_ParamLimits

0x4dbc,	// (0x00025afb) aid_cams_size_cell

0x4dd0,	// (0x00025b0f) grid_cams_pane_ParamLimits

0x4de5,	// (0x00025b24) linegrid_cams_pane_ParamLimits

0x4ee6,	// (0x00025c25) call_video_pane_t1

0x4ef8,	// (0x00025c37) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00030014) call_video_pane_t

0x51ff,	// (0x00025f3e) aid_cale_month_size_cell_pane_ParamLimits

0x51ff,	// (0x00025f3e) aid_cale_month_size_cell_pane

0xf685,	// (0x000303c4) smil_status_volume_pane_g

0xce77,	// (0x0002dbb6) volume_smil_pane_ParamLimits

0x3a13,	// (0x00024752) aid_popup2_width_pane

0x4711,	// (0x00025450) cell_qdial_pane_g4_ParamLimits

0x4711,	// (0x00025450) cell_qdial_pane_g4

0x5cc6,	// (0x00026a05) aid_blid_cardinal_pane_ParamLimits

0x5cd2,	// (0x00026a11) aid_blid_destination_pane_ParamLimits

0x5cd2,	// (0x00026a11) aid_blid_destination_pane

0x4345,	// (0x00025084) bg_popup_call_poc_act_pane_ParamLimits

0x4345,	// (0x00025084) bg_popup_call_poc_act_pane

0x4345,	// (0x00025084) bg_popup_call_poc_inact_pane_ParamLimits

0x4345,	// (0x00025084) bg_popup_call_poc_inact_pane

0xcbde,	// (0x0002d91d) bg_popup_call_poc_act_pane_g1

0xcbe6,	// (0x0002d925) bg_popup_call_poc_act_pane_g2

0xcbee,	// (0x0002d92d) bg_popup_call_poc_act_pane_g3

0xcbae,	// (0x0002d8ed) bg_popup_call_poc_act_pane_g4

0xcbb6,	// (0x0002d8f5) bg_popup_call_poc_act_pane_g5

0xcbf6,	// (0x0002d935) bg_popup_call_poc_act_pane_g6

0xcbc6,	// (0x0002d905) bg_popup_call_poc_act_pane_g7

0xcbfe,	// (0x0002d93d) bg_popup_call_poc_act_pane_g8

0x40ea,	// (0x00024e29) main_usb_pane

0xcd97,	// (0x0002dad6) popup_cale_lunar_info_window

0x50bf,	// (0x00025dfe) im_reading_pane_t1_ParamLimits

0xae79,	// (0x0002bbb8) list_im_pane_ParamLimits

0xae8a,	// (0x0002bbc9) scroll_pane_cp07_ParamLimits

0x40ea,	// (0x00024e29) grid_highlight_pane_cp012

0x4345,	// (0x00025084) mup_scale_pane_ParamLimits

0xbaf3,	// (0x0002c832) main_usb_pane_g1_ParamLimits

0xbaf3,	// (0x0002c832) main_usb_pane_g1

0x675b,	// (0x0002749a) main_usb_pane_g2_ParamLimits

0x675b,	// (0x0002749a) main_usb_pane_g2

0x0001,

0xf625,	// (0x00030364) main_usb_pane_g_ParamLimits

0xf625,	// (0x00030364) main_usb_pane_g

0x676f,	// (0x000274ae) main_usb_pane_t1_ParamLimits

0x676f,	// (0x000274ae) main_usb_pane_t1

0x6781,	// (0x000274c0) main_usb_pane_t2_ParamLimits

0x6781,	// (0x000274c0) main_usb_pane_t2

0x6793,	// (0x000274d2) main_usb_pane_t3_ParamLimits

0x6793,	// (0x000274d2) main_usb_pane_t3

0x67a5,	// (0x000274e4) main_usb_pane_t4_ParamLimits

0x67a5,	// (0x000274e4) main_usb_pane_t4

0x67b7,	// (0x000274f6) main_usb_pane_t5_ParamLimits

0x67b7,	// (0x000274f6) main_usb_pane_t5

0x67c9,	// (0x00027508) main_usb_pane_t6_ParamLimits

0x67c9,	// (0x00027508) main_usb_pane_t6

0x0005,

0xf62a,	// (0x00030369) main_usb_pane_t_ParamLimits

0xb74f,	// (0x0002c48e) aid_text_placing

0x5c72,	// (0x000269b1) main_location2_pane_t1_ParamLimits

0x5c88,	// (0x000269c7) main_location2_pane_t2_ParamLimits

0x5c9e,	// (0x000269dd) main_location2_pane_t3_ParamLimits

0x5cb4,	// (0x000269f3) main_location2_pane_t4_ParamLimits

0x5cb4,	// (0x000269f3) main_location2_pane_t4

0xf436,	// (0x00030175) main_location2_pane_t_ParamLimits

0x440f,	// (0x0002514e) find_pinb_pane_g2_ParamLimits

0x440f,	// (0x0002514e) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0002fec3) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0002fec3) find_pinb_pane_g

0x441b,	// (0x0002515a) find_pinb_pane_t1_ParamLimits

0x442d,	// (0x0002516c) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0002fec8) find_pinb_pane_t_ParamLimits

0x40ea,	// (0x00024e29) main_call3_pane

0x553b,	// (0x0002627a) cale_month_day_heading_pane_t1_ParamLimits

0x5599,	// (0x000262d8) cale_month_day_heading_pane_t2_ParamLimits

0x55fe,	// (0x0002633d) cale_month_day_heading_pane_t3_ParamLimits

0x5663,	// (0x000263a2) cale_month_day_heading_pane_t4_ParamLimits

0x56c8,	// (0x00026407) cale_month_day_heading_pane_t5_ParamLimits

0x572d,	// (0x0002646c) cale_month_day_heading_pane_t6_ParamLimits

0x5792,	// (0x000264d1) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0003004c) cale_month_day_heading_pane_t_ParamLimits

0xb110,	// (0x0002be4f) smil_status_volume_pane

0x62e4,	// (0x00027023) postcard_address_pane_ParamLimits

0x62e4,	// (0x00027023) postcard_address_pane

0x62f6,	// (0x00027035) postcard_message_pane_ParamLimits

0x62f6,	// (0x00027035) postcard_message_pane

0x6739,	// (0x00027478) call2_cli_visual_pane_t1_ParamLimits

0x6739,	// (0x00027478) call2_cli_visual_pane_t1

0x6e97,	// (0x00027bd6) postcard_message_pane_t1_ParamLimits

0x6e97,	// (0x00027bd6) postcard_message_pane_t1

0x6e80,	// (0x00027bbf) postcard_address_pane_t1_ParamLimits

0x6e80,	// (0x00027bbf) postcard_address_pane_t1

0x6e6e,	// (0x00027bad) popup_call3_audio_in_window_ParamLimits

0x6e6e,	// (0x00027bad) popup_call3_audio_in_window

0x6cfd,	// (0x00027a3c) bg_popup_call3_in_pane_ParamLimits

0x6cfd,	// (0x00027a3c) bg_popup_call3_in_pane

0x6d6f,	// (0x00027aae) popup_call3_audio_in_window_g1_ParamLimits

0x6d6f,	// (0x00027aae) popup_call3_audio_in_window_g1

0x6d8f,	// (0x00027ace) popup_call3_audio_in_window_g2_ParamLimits

0x6d8f,	// (0x00027ace) popup_call3_audio_in_window_g2

0x6daf,	// (0x00027aee) popup_call3_audio_in_window_g3_ParamLimits

0x6daf,	// (0x00027aee) popup_call3_audio_in_window_g3

0x0003,

0xf68c,	// (0x000303cb) popup_call3_audio_in_window_g_ParamLimits

0xf68c,	// (0x000303cb) popup_call3_audio_in_window_g

0x6de0,	// (0x00027b1f) popup_call3_audio_in_window_t1_ParamLimits

0x6de0,	// (0x00027b1f) popup_call3_audio_in_window_t1

0x6e1e,	// (0x00027b5d) popup_call3_audio_in_window_t2_ParamLimits

0x6e1e,	// (0x00027b5d) popup_call3_audio_in_window_t2

0x6e5c,	// (0x00027b9b) popup_call3_audio_in_window_t3_ParamLimits

0x6e5c,	// (0x00027b9b) popup_call3_audio_in_window_t3

0x0002,

0xf695,	// (0x000303d4) popup_call3_audio_in_window_t_ParamLimits

0xf695,	// (0x000303d4) popup_call3_audio_in_window_t

0xb88b,	// (0x0002c5ca) bg_popup_call3_rect_pane

0xcb56,	// (0x0002d895) bg_popup_call3_rect_pane_g1

0xab49,	// (0x0002b888) bg_popup_call3_rect_pane_g2

0xcb5e,	// (0x0002d89d) bg_popup_call3_rect_pane_g3

0xcb66,	// (0x0002d8a5) bg_popup_call3_rect_pane_g4

0xcb6e,	// (0x0002d8ad) bg_popup_call3_rect_pane_g5

0xcb76,	// (0x0002d8b5) bg_popup_call3_rect_pane_g6

0xcb7e,	// (0x0002d8bd) bg_popup_call3_rect_pane_g7

0x5fd0,	// (0x00026d0f) mup_visualizer_osc_pane

0xb96a,	// (0x0002c6a9) mup_visualizer_spec_pane

0x6d2d,	// (0x00027a6c) call3_video_qcif_pane_ParamLimits

0x6d2d,	// (0x00027a6c) call3_video_qcif_pane

0x6d3e,	// (0x00027a7d) call3_video_qcif_uncrop_pane_ParamLimits

0x6d3e,	// (0x00027a7d) call3_video_qcif_uncrop_pane

0x6d4a,	// (0x00027a89) call3_video_subqcif_pane_ParamLimits

0x6d4a,	// (0x00027a89) call3_video_subqcif_pane

0x6d5e,	// (0x00027a9d) call3_video_subqcif_uncrop_pane_ParamLimits

0x6d5e,	// (0x00027a9d) call3_video_subqcif_uncrop_pane

0x6dcf,	// (0x00027b0e) popup_call3_audio_in_window_g4_ParamLimits

0x6dcf,	// (0x00027b0e) popup_call3_audio_in_window_g4

0x6cec,	// (0x00027a2b) mup_spec_half_pane

0x6cf5,	// (0x00027a34) mup_spec_half_pane_cp

0xce2a,	// (0x0002db69) mup_osc_middle_pane

0xce33,	// (0x0002db72) mup_visualizer_osc_pane_g1

0x6ccd,	// (0x00027a0c) mup_spec_bar_pane_ParamLimits

0x6ccd,	// (0x00027a0c) mup_spec_bar_pane

0xce17,	// (0x0002db56) mup_spec_bar_pane_g1

0xce21,	// (0x0002db60) mup_spec_bar_pane_g2

0x0001,

0xf680,	// (0x000303bf) mup_spec_bar_pane_g

0x47eb,	// (0x0002552a) aid_cale_week_size_cell_pane_ParamLimits

0x47fe,	// (0x0002553d) bg_cale_heading_pane_ParamLimits

0xabe9,	// (0x0002b928) bg_cale_pane_cp01_ParamLimits

0x4812,	// (0x00025551) cale_week_corner_pane_ParamLimits

0x4828,	// (0x00025567) cale_week_day_heading_pane_ParamLimits

0x483c,	// (0x0002557b) cale_week_scroll_pane_g1_ParamLimits

0x484d,	// (0x0002558c) cale_week_scroll_pane_g2_ParamLimits

0x485e,	// (0x0002559d) cale_week_scroll_pane_g3_ParamLimits

0x486f,	// (0x000255ae) cale_week_scroll_pane_g4_ParamLimits

0x4880,	// (0x000255bf) cale_week_scroll_pane_g5_ParamLimits

0x4891,	// (0x000255d0) cale_week_scroll_pane_g6_ParamLimits

0x48a2,	// (0x000255e1) cale_week_scroll_pane_g7_ParamLimits

0x48b3,	// (0x000255f2) cale_week_scroll_pane_g8_ParamLimits

0x48c6,	// (0x00025605) cale_week_scroll_pane_g9_ParamLimits

0x48d7,	// (0x00025616) cale_week_scroll_pane_g10_ParamLimits

0x48e8,	// (0x00025627) cale_week_scroll_pane_g11_ParamLimits

0x48f9,	// (0x00025638) cale_week_scroll_pane_g12_ParamLimits

0x490a,	// (0x00025649) cale_week_scroll_pane_g13_ParamLimits

0x491b,	// (0x0002565a) cale_week_scroll_pane_g14_ParamLimits

0x492c,	// (0x0002566b) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0002ff54) cale_week_scroll_pane_g_ParamLimits

0x493d,	// (0x0002567c) cale_week_time_pane_ParamLimits

0x4950,	// (0x0002568f) grid_cale_week_pane_ParamLimits

0xac02,	// (0x0002b941) listscroll_cale_week_pane_t1

0x4963,	// (0x000256a2) scroll_pane_cp08_ParamLimits

0x5240,	// (0x00025f7f) cale_month_corner_pane_ParamLimits

0xb0b0,	// (0x0002bdef) cale_month_pane_t1

0x54fa,	// (0x00026239) cale_month_week_pane_ParamLimits

0x5ab9,	// (0x000267f8) popup_call_status_window_g1_ParamLimits

0x5acd,	// (0x0002680c) popup_call_status_window_g2_ParamLimits

0x5ae1,	// (0x00026820) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x000300fc) popup_call_status_window_g_ParamLimits

0xb526,	// (0x0002c265) aid_call2_pane

0x61d3,	// (0x00026f12) msg_header_pane_g1

0x62e4,	// (0x00027023) postcard_address2_pane_ParamLimits

0x62e4,	// (0x00027023) postcard_address2_pane

0x62f6,	// (0x00027035) postcard_message2_pane_ParamLimits

0x62f6,	// (0x00027035) postcard_message2_pane

0x6c89,	// (0x000279c8) message2_row_pane_ParamLimits

0x6c89,	// (0x000279c8) message2_row_pane

0x6ca3,	// (0x000279e2) address2_row_pane_ParamLimits

0x6ca3,	// (0x000279e2) address2_row_pane

0xcde5,	// (0x0002db24) postcard_message2_row_pane_g1

0xcded,	// (0x0002db2c) postcard_message2_row_pane_t1

0xcde5,	// (0x0002db24) address2_row_pane_g1

0xcded,	// (0x0002db2c) address2_row_pane_t1

0x2b59,	// (0x00023898) aid_size_cell_vorec

0x40ea,	// (0x00024e29) main_rss_pane

0x6cb6,	// (0x000279f5) rss_list_single_pane_ParamLimits

0x6cb6,	// (0x000279f5) rss_list_single_pane

0xcdfb,	// (0x0002db3a) rss_list_single_pane_t1

0xce09,	// (0x0002db48) rss_list_single_pane_t2

0x0001,

0xf67b,	// (0x000303ba) rss_list_single_pane_t

0x40ea,	// (0x00024e29) main_camera2_pane

0x40ea,	// (0x00024e29) main_video2_pane

0x2bf3,	// (0x00023932) cams_zoom_pane_cp2_ParamLimits

0x2bf3,	// (0x00023932) cams_zoom_pane_cp2

0x2c0a,	// (0x00023949) image2_vga_pane_ParamLimits

0x2c0a,	// (0x00023949) image2_vga_pane

0x2c40,	// (0x0002397f) main_camera2_pane_g1_ParamLimits

0x2c40,	// (0x0002397f) main_camera2_pane_g1

0x2c60,	// (0x0002399f) main_camera2_pane_g2_ParamLimits

0x2c60,	// (0x0002399f) main_camera2_pane_g2

0x2c77,	// (0x000239b6) main_camera2_pane_g3_ParamLimits

0x2c77,	// (0x000239b6) main_camera2_pane_g3

0x2c8e,	// (0x000239cd) main_camera2_pane_g4_ParamLimits

0x2c8e,	// (0x000239cd) main_camera2_pane_g4

0x2ca5,	// (0x000239e4) main_camera2_pane_g5_ParamLimits

0x2ca5,	// (0x000239e4) main_camera2_pane_g5

0x2cbc,	// (0x000239fb) main_camera2_pane_g6_ParamLimits

0x2cbc,	// (0x000239fb) main_camera2_pane_g6

0x2cd3,	// (0x00023a12) main_camera2_pane_g7_ParamLimits

0x2cd3,	// (0x00023a12) main_camera2_pane_g7

0x2cea,	// (0x00023a29) main_camera2_pane_g8_ParamLimits

0x2cea,	// (0x00023a29) main_camera2_pane_g8

0x0008,

0xf69c,	// (0x000303db) main_camera2_pane_g_ParamLimits

0xf69c,	// (0x000303db) main_camera2_pane_g

0x2d18,	// (0x00023a57) main_camera2_pane_t1_ParamLimits

0x2d18,	// (0x00023a57) main_camera2_pane_t1

0x2d47,	// (0x00023a86) main_camera2_pane_t2_ParamLimits

0x2d47,	// (0x00023a86) main_camera2_pane_t2

0x2d64,	// (0x00023aa3) main_camera2_pane_t3_ParamLimits

0x2d64,	// (0x00023aa3) main_camera2_pane_t3

0x2db0,	// (0x00023aef) main_camera2_pane_t4_ParamLimits

0x2db0,	// (0x00023aef) main_camera2_pane_t4

0x0006,

0xf6af,	// (0x000303ee) main_camera2_pane_t_ParamLimits

0xf6af,	// (0x000303ee) main_camera2_pane_t

0x2e25,	// (0x00023b64) cams_zoom_pane_cp4_ParamLimits

0x2e25,	// (0x00023b64) cams_zoom_pane_cp4

0x2e3b,	// (0x00023b7a) image2_cif_pane_ParamLimits

0x2e3b,	// (0x00023b7a) image2_cif_pane

0x2e5e,	// (0x00023b9d) image2_subqcif_pane_ParamLimits

0x2e5e,	// (0x00023b9d) image2_subqcif_pane

0x2e74,	// (0x00023bb3) main_video2_pane_g1_ParamLimits

0x2e74,	// (0x00023bb3) main_video2_pane_g1

0x2e8e,	// (0x00023bcd) main_video2_pane_g2_ParamLimits

0x2e8e,	// (0x00023bcd) main_video2_pane_g2

0x2ea4,	// (0x00023be3) main_video2_pane_g3_ParamLimits

0x2ea4,	// (0x00023be3) main_video2_pane_g3

0x2eba,	// (0x00023bf9) main_video2_pane_g4_ParamLimits

0x2eba,	// (0x00023bf9) main_video2_pane_g4

0x2ed0,	// (0x00023c0f) main_video2_pane_g5_ParamLimits

0x2ed0,	// (0x00023c0f) main_video2_pane_g5

0x2ee6,	// (0x00023c25) main_video2_pane_g6_ParamLimits

0x2ee6,	// (0x00023c25) main_video2_pane_g6

0x0005,

0xf6be,	// (0x000303fd) main_video2_pane_g_ParamLimits

0xf6be,	// (0x000303fd) main_video2_pane_g

0x2f00,	// (0x00023c3f) main_video2_pane_t1_ParamLimits

0x2f00,	// (0x00023c3f) main_video2_pane_t1

0x2f24,	// (0x00023c63) main_video2_pane_t2_ParamLimits

0x2f24,	// (0x00023c63) main_video2_pane_t2

0x2f6e,	// (0x00023cad) main_video2_pane_t3_ParamLimits

0x2f6e,	// (0x00023cad) main_video2_pane_t3

0x0002,

0xf6cb,	// (0x0003040a) main_video2_pane_t_ParamLimits

0xf6cb,	// (0x0003040a) main_video2_pane_t

0x6878,	// (0x000275b7) call_muted_g2

0x0001,

0xf66d,	// (0x000303ac) call_muted_g

0x40ea,	// (0x00024e29) main_mup2_pane

0x6eb2,	// (0x00027bf1) main_mup2_pane_g1_ParamLimits

0x6eb2,	// (0x00027bf1) main_mup2_pane_g1

0x6ebe,	// (0x00027bfd) main_mup2_pane_g2_ParamLimits

0x6ebe,	// (0x00027bfd) main_mup2_pane_g2

0xcf96,	// (0x0002dcd5) main_mup_pane_g13_cp1

0xcf9e,	// (0x0002dcdd) mup_volume_pane_cp1

0x6eda,	// (0x00027c19) main_mup2_pane_g4_ParamLimits

0x6eda,	// (0x00027c19) main_mup2_pane_g4

0x6eea,	// (0x00027c29) main_mup2_pane_g5_ParamLimits

0x6eea,	// (0x00027c29) main_mup2_pane_g5

0x6efa,	// (0x00027c39) main_mup2_pane_g6_ParamLimits

0x6efa,	// (0x00027c39) main_mup2_pane_g6

0x6f0a,	// (0x00027c49) main_mup2_pane_g7_ParamLimits

0x6f0a,	// (0x00027c49) main_mup2_pane_g7

0x0006,

0xf6d2,	// (0x00030411) main_mup2_pane_g_ParamLimits

0xf6d2,	// (0x00030411) main_mup2_pane_g

0x6f22,	// (0x00027c61) main_mup2_pane_t1_ParamLimits

0x6f22,	// (0x00027c61) main_mup2_pane_t1

0x6f38,	// (0x00027c77) main_mup2_pane_t2_ParamLimits

0x6f38,	// (0x00027c77) main_mup2_pane_t2

0x6f4e,	// (0x00027c8d) main_mup2_pane_t3_ParamLimits

0x6f4e,	// (0x00027c8d) main_mup2_pane_t3

0x6f64,	// (0x00027ca3) main_mup2_pane_t4_ParamLimits

0x6f64,	// (0x00027ca3) main_mup2_pane_t4

0x6f7c,	// (0x00027cbb) main_mup2_pane_t5_ParamLimits

0x6f7c,	// (0x00027cbb) main_mup2_pane_t5

0x6f94,	// (0x00027cd3) main_mup2_pane_t6_ParamLimits

0x6f94,	// (0x00027cd3) main_mup2_pane_t6

0x0005,

0xf6e1,	// (0x00030420) main_mup2_pane_t_ParamLimits

0xf6e1,	// (0x00030420) main_mup2_pane_t

0x6fc4,	// (0x00027d03) mup2_visualizer_pane_ParamLimits

0x6fc4,	// (0x00027d03) mup2_visualizer_pane

0x6fef,	// (0x00027d2e) mup_progress_pane_cp_ParamLimits

0x6fef,	// (0x00027d2e) mup_progress_pane_cp

0xcf78,	// (0x0002dcb7) mup_volume_pane_cp_ParamLimits

0xcf78,	// (0x0002dcb7) mup_volume_pane_cp

0x7003,	// (0x00027d42) mup2_visualizer_pane_g1_ParamLimits

0x7003,	// (0x00027d42) mup2_visualizer_pane_g1

0xceb7,	// (0x0002dbf6) mup2_visualizer_pane_g2_ParamLimits

0xceb7,	// (0x0002dbf6) mup2_visualizer_pane_g2

0x7018,	// (0x00027d57) mup2_visualizer_pane_g3_ParamLimits

0x7018,	// (0x00027d57) mup2_visualizer_pane_g3

0x0002,

0xf6ee,	// (0x0003042d) mup2_visualizer_pane_g_ParamLimits

0xf6ee,	// (0x0003042d) mup2_visualizer_pane_g

0xbc3c,	// (0x0002c97b) aid_size_cell_fmradio

0x69d4,	// (0x00027713) aid_height_parent_landcape

0xaf17,	// (0x0002bc56) wml_content_pane_cp

0xaf1f,	// (0x0002bc5e) wml_tabs_pane

0xaf28,	// (0x0002bc67) popup_wml_miniature_window

0xaf30,	// (0x0002bc6f) scroll_pane_cp021

0xaf44,	// (0x0002bc83) wml_content_pane_comp8

0x40ea,	// (0x00024e29) bg_popup_sub_pane_cp05

0xced5,	// (0x0002dc14) popup_wml_miniature_window_g1

0xcedd,	// (0x0002dc1c) wml_miniature_view_pane

0x7024,	// (0x00027d63) aid_size_wml_view

0x702c,	// (0x00027d6b) wml_miniature_view_pane_g1

0x7035,	// (0x00027d74) wml_miniature_view_pane_g2

0x703e,	// (0x00027d7d) wml_miniature_view_pane_g3

0x7046,	// (0x00027d85) wml_miniature_view_pane_g4

0x704e,	// (0x00027d8d) wml_miniature_view_pane_g5

0x7056,	// (0x00027d95) wml_miniature_view_pane_g6

0x705e,	// (0x00027d9d) wml_miniature_view_pane_g7

0x7066,	// (0x00027da5) wml_miniature_view_pane_g8

0x0007,

0xf6f5,	// (0x00030434) wml_miniature_view_pane_g

0xcee5,	// (0x0002dc24) background_graphic_ParamLimits

0xcee5,	// (0x0002dc24) background_graphic

0xcef1,	// (0x0002dc30) wml_tabs_2_pane

0xcefa,	// (0x0002dc39) wml_tabs_3_pane_ParamLimits

0xcefa,	// (0x0002dc39) wml_tabs_3_pane

0xcf0c,	// (0x0002dc4b) wml_tabs_4_pane_ParamLimits

0xcf0c,	// (0x0002dc4b) wml_tabs_4_pane

0xcf22,	// (0x0002dc61) wml_tabs_5_pane_ParamLimits

0xcf22,	// (0x0002dc61) wml_tabs_5_pane

0xcf3c,	// (0x0002dc7b) wml_tabs_pane_g2_ParamLimits

0xcf3c,	// (0x0002dc7b) wml_tabs_pane_g2

0xcf50,	// (0x0002dc8f) wml_tabs_pane_g3_ParamLimits

0xcf50,	// (0x0002dc8f) wml_tabs_pane_g3

0x706e,	// (0x00027dad) wml_tabs_2_active_pane_ParamLimits

0x706e,	// (0x00027dad) wml_tabs_2_active_pane

0x707e,	// (0x00027dbd) wml_tabs_2_passive_pane_ParamLimits

0x707e,	// (0x00027dbd) wml_tabs_2_passive_pane

0x708e,	// (0x00027dcd) wml_tabs_3_active_pane_cp_ParamLimits

0x708e,	// (0x00027dcd) wml_tabs_3_active_pane_cp

0x709f,	// (0x00027dde) wml_tabs_3_passive_pane_ParamLimits

0x709f,	// (0x00027dde) wml_tabs_3_passive_pane

0x70b0,	// (0x00027def) wml_tabs_3_passive_pane_cp_ParamLimits

0x70b0,	// (0x00027def) wml_tabs_3_passive_pane_cp

0x70c1,	// (0x00027e00) tabs_4_active_pane

0x70c9,	// (0x00027e08) tabs_4_passive_pane

0x70d1,	// (0x00027e10) tabs_4_passive_pane_cp

0x70d9,	// (0x00027e18) tabs_4_passive_pane_cp2

0x6753,	// (0x00027492) aid_height_text

0x5fa6,	// (0x00026ce5) mup_volume_cont_pane_ParamLimits

0x5fa6,	// (0x00026ce5) mup_volume_cont_pane

0x43cd,	// (0x0002510c) aid_size_cell_pinb

0x43d7,	// (0x00025116) aid_size_list_pinb

0x6fdb,	// (0x00027d1a) mup2_volume_cont_pane_ParamLimits

0x6fdb,	// (0x00027d1a) mup2_volume_cont_pane

0xcf64,	// (0x0002dca3) mup2_volume_cont_pane_g1_ParamLimits

0xcf64,	// (0x0002dca3) mup2_volume_cont_pane_g1

0x3a1b,	// (0x0002475a) aid_size_cell_touch_ParamLimits

0x3a1b,	// (0x0002475a) aid_size_cell_touch

0x3c39,	// (0x00024978) touch_pane_ParamLimits

0x3c39,	// (0x00024978) touch_pane

0x3a01,	// (0x00024740) main_rss2_pane

0xcfa6,	// (0x0002dce5) listscroll_rss2_pane

0xcfaf,	// (0x0002dcee) rss2_navigation_pane

0xcfb7,	// (0x0002dcf6) list_rss2_pane

0xb6cc,	// (0x0002c40b) scroll_pane_cp22

0xcfbf,	// (0x0002dcfe) rss2_navigation_pane_g1

0xcfc8,	// (0x0002dd07) rss2_navigation_pane_g2

0xcfd0,	// (0x0002dd0f) rss2_navigation_pane_g3

0x0002,

0xf706,	// (0x00030445) rss2_navigation_pane_g

0xcfd8,	// (0x0002dd17) rss2_navigation_pane_t1

0x70e1,	// (0x00027e20) rss2_list_single_pane_ParamLimits

0x70e1,	// (0x00027e20) rss2_list_single_pane

0xcfe6,	// (0x0002dd25) rss2_list_single_pane_t2

0xcff4,	// (0x0002dd33) rss2_list_single_pane_t3_ParamLimits

0xcff4,	// (0x0002dd33) rss2_list_single_pane_t3

0xd011,	// (0x0002dd50) rss2_list_single_pane_t4

0x5940,	// (0x0002667f) smil_status_pane_g1

0x3c2b,	// (0x0002496a) main_image2_pane_ParamLimits

0x3c2b,	// (0x0002496a) main_image2_pane

0x2d01,	// (0x00023a40) main_camera2_pane_g9_ParamLimits

0x2d01,	// (0x00023a40) main_camera2_pane_g9

0x2df3,	// (0x00023b32) main_camera2_pane_t5_ParamLimits

0x2df3,	// (0x00023b32) main_camera2_pane_t5

0xce8c,	// (0x0002dbcb) main_camera2_pane_t6_ParamLimits

0xce8c,	// (0x0002dbcb) main_camera2_pane_t6

0x70f5,	// (0x00027e34) main_image2_pane_g1_ParamLimits

0x70f5,	// (0x00027e34) main_image2_pane_g1

0x650b,	// (0x0002724a) smil2_video_pane_ParamLimits

0x650b,	// (0x0002724a) smil2_video_pane

0x3a40,	// (0x0002477f) aid_zoom_text_primary_cp

0x3be9,	// (0x00024928) popup_preview_fixed_window

0xae71,	// (0x0002bbb0) im_reading_pane_g1

0x2be7,	// (0x00023926) cams2_bc_adjust_pane_cp_ParamLimits

0x2be7,	// (0x00023926) cams2_bc_adjust_pane_cp

0x2e19,	// (0x00023b58) cams2_bc_adjust_pane_ParamLimits

0x2e19,	// (0x00023b58) cams2_bc_adjust_pane

0xd01f,	// (0x0002dd5e) cams2_bc_adjust_pane_g1

0xd027,	// (0x0002dd66) cams2_slider_pane

0xd030,	// (0x0002dd6f) cams2_slider_pane_g1

0xd039,	// (0x0002dd78) cams2_slider_pane_g2

0x0006,

0xf70d,	// (0x0003044c) cams2_slider_pane_g

0x292d,	// (0x0002366c) calc_display_pane_ParamLimits

0x2949,	// (0x00023688) calc_paper_pane_ParamLimits

0x296a,	// (0x000236a9) grid_calc_pane_ParamLimits

0xb588,	// (0x0002c2c7) popup_clock_digital_window_t1_ParamLimits

0xbbd9,	// (0x0002c918) main_image_pane_t1

0x290f,	// (0x0002364e) aid_size_cell_calc_ParamLimits

0x290f,	// (0x0002364e) aid_size_cell_calc

0x6a04,	// (0x00027743) popup_blid_sat_info2_window_ParamLimits

0x6a04,	// (0x00027743) popup_blid_sat_info2_window

0xd05b,	// (0x0002dd9a) aid_size_cell_blid

0xd063,	// (0x0002dda2) bg_popup_window_pane_cp07

0xd086,	// (0x0002ddc5) grid_popup_blid_pane

0xd08e,	// (0x0002ddcd) heading_pane_cp05_ParamLimits

0xd08e,	// (0x0002ddcd) heading_pane_cp05

0xd156,	// (0x0002de95) cell_popup_blid_pane_ParamLimits

0xd156,	// (0x0002de95) cell_popup_blid_pane

0xd176,	// (0x0002deb5) cell_popup_blid_pane_g1

0xd17e,	// (0x0002debd) cell_popup_blid_pane_t1

0x6fae,	// (0x00027ced) mup2_indicator_pane_ParamLimits

0x6fae,	// (0x00027ced) mup2_indicator_pane

0xb88b,	// (0x0002c5ca) mup2_visualizer_osc_pane

0xcec3,	// (0x0002dc02) mup2_visualizer_spec_pane_ParamLimits

0xcec3,	// (0x0002dc02) mup2_visualizer_spec_pane

0x7109,	// (0x00027e48) mup2_spec_half_pane

0x7112,	// (0x00027e51) mup2_spec_half_pane_cp

0x711a,	// (0x00027e59) mup2_spec_bar_pane_ParamLimits

0x711a,	// (0x00027e59) mup2_spec_bar_pane

0xce17,	// (0x0002db56) mup2_spec_bar_pane_g1

0xce21,	// (0x0002db60) mup2_spec_bar_pane_g2

0x0001,

0xf680,	// (0x000303bf) mup2_spec_bar_pane_g

0x7139,	// (0x00027e78) mup2_osc_middle_pane

0xce33,	// (0x0002db72) mup2_visualizer_osc_pane_g1

0x3ca1,	// (0x000249e0) popup_number_entry_window_t1_ParamLimits

0x3cb4,	// (0x000249f3) popup_number_entry_window_t2_ParamLimits

0x3cc6,	// (0x00024a05) popup_number_entry_window_t3_ParamLimits

0x3cd8,	// (0x00024a17) popup_number_entry_window_t5_ParamLimits

0x3cd8,	// (0x00024a17) popup_number_entry_window_t5

0xf12f,	// (0x0002fe6e) popup_number_entry_window_t_ParamLimits

0x3d0c,	// (0x00024a4b) text_title_cp2_ParamLimits

0xbab3,	// (0x0002c7f2) aid_hotspot_pointer_text2_pane

0xbad9,	// (0x0002c818) main_viewer_pane_g9_ParamLimits

0xbad9,	// (0x0002c818) main_viewer_pane_g9

0xb0b0,	// (0x0002bdef) cale_month_pane_t1_ParamLimits

0xb145,	// (0x0002be84) bg_cale_pane_ParamLimits

0xb15d,	// (0x0002be9c) list_cale_pane_ParamLimits

0xac02,	// (0x0002b941) listscroll_cale_day_pane_t1

0xb16e,	// (0x0002bead) scroll_pane_cp09_ParamLimits

0x5fd8,	// (0x00026d17) main_mup_eq_pane_t1_ParamLimits

0x5fd8,	// (0x00026d17) main_mup_eq_pane_t1

0x5ff0,	// (0x00026d2f) main_mup_eq_pane_t2_ParamLimits

0x5ff0,	// (0x00026d2f) main_mup_eq_pane_t2

0x6006,	// (0x00026d45) main_mup_eq_pane_t3_ParamLimits

0x6006,	// (0x00026d45) main_mup_eq_pane_t3

0x601c,	// (0x00026d5b) main_mup_eq_pane_t4_ParamLimits

0x601c,	// (0x00026d5b) main_mup_eq_pane_t4

0x6032,	// (0x00026d71) main_mup_eq_pane_t5_ParamLimits

0x6032,	// (0x00026d71) main_mup_eq_pane_t5

0x6048,	// (0x00026d87) main_mup_eq_pane_t6_ParamLimits

0x6048,	// (0x00026d87) main_mup_eq_pane_t6

0x605a,	// (0x00026d99) main_mup_eq_pane_t7_ParamLimits

0x605a,	// (0x00026d99) main_mup_eq_pane_t7

0x606c,	// (0x00026dab) main_mup_eq_pane_t8_ParamLimits

0x606c,	// (0x00026dab) main_mup_eq_pane_t8

0x607e,	// (0x00026dbd) main_mup_eq_pane_t9_ParamLimits

0x607e,	// (0x00026dbd) main_mup_eq_pane_t9

0x6094,	// (0x00026dd3) main_mup_eq_pane_t10_ParamLimits

0x6094,	// (0x00026dd3) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x000301fb) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x000301fb) main_mup_eq_pane_t

0x6127,	// (0x00026e66) mup_equalizer_pane_cp5_ParamLimits

0x6139,	// (0x00026e78) mup_equalizer_pane_cp6_ParamLimits

0x614b,	// (0x00026e8a) mup_equalizer_pane_cp7_ParamLimits

0x3a01,	// (0x00024740) main_gallery_pane

0xce3c,	// (0x0002db7b) smil2_volume_pane

0xce44,	// (0x0002db83) smil_status_volume_pane_g1_ParamLimits

0xce57,	// (0x0002db96) smil_status_volume_pane_g2_ParamLimits

0xce6a,	// (0x0002dba9) smil_status_volume_pane_g3_ParamLimits

0xf685,	// (0x000303c4) smil_status_volume_pane_g_ParamLimits

0xd063,	// (0x0002dda2) bg_popup_window_pane_cp07_ParamLimits

0xd071,	// (0x0002ddb0) blid_firmament_pane

0x7142,	// (0x00027e81) aid_size_cell_gallery_ParamLimits

0x7142,	// (0x00027e81) aid_size_cell_gallery

0x7158,	// (0x00027e97) grid_gallery_pane_ParamLimits

0x7158,	// (0x00027e97) grid_gallery_pane

0x716c,	// (0x00027eab) cell_gallery_pane_ParamLimits

0x716c,	// (0x00027eab) cell_gallery_pane

0xd18c,	// (0x0002decb) bg_cell_gallery_focus_pane_ParamLimits

0xd18c,	// (0x0002decb) bg_cell_gallery_focus_pane

0xd19e,	// (0x0002dedd) cell_gallery_pane_g1_ParamLimits

0xd19e,	// (0x0002dedd) cell_gallery_pane_g1

0x71b3,	// (0x00027ef2) cell_gallery_pane_g2_ParamLimits

0x71b3,	// (0x00027ef2) cell_gallery_pane_g2

0x71c0,	// (0x00027eff) cell_gallery_pane_g3_ParamLimits

0x71c0,	// (0x00027eff) cell_gallery_pane_g3

0xd1aa,	// (0x0002dee9) cell_gallery_pane_g4_ParamLimits

0xd1aa,	// (0x0002dee9) cell_gallery_pane_g4

0x0003,

0xf733,	// (0x00030472) cell_gallery_pane_g_ParamLimits

0xf733,	// (0x00030472) cell_gallery_pane_g

0xd1b6,	// (0x0002def5) bg_cell_gallery_focus_pane_g1

0xd1be,	// (0x0002defd) bg_cell_gallery_focus_pane_g2

0xd1c6,	// (0x0002df05) bg_cell_gallery_focus_pane_g3

0xd1ce,	// (0x0002df0d) bg_cell_gallery_focus_pane_g4

0xd1d6,	// (0x0002df15) bg_cell_gallery_focus_pane_g5

0xd1de,	// (0x0002df1d) bg_cell_gallery_focus_pane_g6

0xd1e6,	// (0x0002df25) bg_cell_gallery_focus_pane_g7

0xd1ee,	// (0x0002df2d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf73c,	// (0x0003047b) bg_cell_gallery_focus_pane_g

0xd1f6,	// (0x0002df35) aid_firma_cardinal

0xd20a,	// (0x0002df49) blid_firmament_pane_t1

0xd221,	// (0x0002df60) blid_firmament_pane_t2

0xd238,	// (0x0002df77) blid_firmament_pane_t3

0xd24f,	// (0x0002df8e) blid_firmament_pane_t4

0x0003,

0xf74d,	// (0x0003048c) blid_firmament_pane_t

0xd266,	// (0x0002dfa5) blid_sat_info_pane

0xd276,	// (0x0002dfb5) blid_sat_info_pane_g1

0xd276,	// (0x0002dfb5) blid_sat_info_pane_g2

0x0001,

0xf756,	// (0x00030495) blid_sat_info_pane_g

0xd280,	// (0x0002dfbf) blid_sat_info_pane_t1

0xd28e,	// (0x0002dfcd) smil2_volume_content_pane

0xd297,	// (0x0002dfd6) smil2_volume_pane_g1

0xd29f,	// (0x0002dfde) smil2_volume_content_pane_g1

0xd2a8,	// (0x0002dfe7) smil2_volume_content_pane_g2

0xd2b1,	// (0x0002dff0) smil2_volume_content_pane_g3

0xd2ba,	// (0x0002dff9) smil2_volume_content_pane_g4

0xd2c3,	// (0x0002e002) smil2_volume_content_pane_g5

0xd2cc,	// (0x0002e00b) smil2_volume_content_pane_g6

0xd2d5,	// (0x0002e014) smil2_volume_content_pane_g7

0xd2de,	// (0x0002e01d) smil2_volume_content_pane_g8

0xd2e7,	// (0x0002e026) smil2_volume_content_pane_g9

0xd2f0,	// (0x0002e02f) smil2_volume_content_pane_g10

0x0009,

0xf75b,	// (0x0003049a) smil2_volume_content_pane_g

0x49b9,	// (0x000256f8) cale_week_day_heading_pane_t1_ParamLimits

0x49e3,	// (0x00025722) cale_week_day_heading_pane_t2_ParamLimits

0x4a0d,	// (0x0002574c) cale_week_day_heading_pane_t3_ParamLimits

0x4a37,	// (0x00025776) cale_week_day_heading_pane_t4_ParamLimits

0x4a61,	// (0x000257a0) cale_week_day_heading_pane_t5_ParamLimits

0x4a8b,	// (0x000257ca) cale_week_day_heading_pane_t6_ParamLimits

0x4ab5,	// (0x000257f4) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0002ff73) cale_week_day_heading_pane_t_ParamLimits

0xac14,	// (0x0002b953) bg_cale_side_pane_ParamLimits

0x29f9,	// (0x00023738) cale_week_time_pane_t1_ParamLimits

0x2a25,	// (0x00023764) cale_week_time_pane_t2_ParamLimits

0x2a51,	// (0x00023790) cale_week_time_pane_t3_ParamLimits

0x2a7d,	// (0x000237bc) cale_week_time_pane_t4_ParamLimits

0x2aa9,	// (0x000237e8) cale_week_time_pane_t5_ParamLimits

0x2ad5,	// (0x00023814) cale_week_time_pane_t6_ParamLimits

0x2b01,	// (0x00023840) cale_week_time_pane_t7_ParamLimits

0x2b2d,	// (0x0002386c) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0002ff82) cale_week_time_pane_t_ParamLimits

0x4adf,	// (0x0002581e) cell_cale_week_pane_g2_ParamLimits

0xac14,	// (0x0002b953) bg_cale_side_pane_cp01_ParamLimits

0x57ff,	// (0x0002653e) cale_month_week_pane_t1_ParamLimits

0x5816,	// (0x00026555) cale_month_week_pane_t2_ParamLimits

0x582d,	// (0x0002656c) cale_month_week_pane_t3_ParamLimits

0x5844,	// (0x00026583) cale_month_week_pane_t4_ParamLimits

0x585b,	// (0x0002659a) cale_month_week_pane_t5_ParamLimits

0x5872,	// (0x000265b1) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0003005b) cale_month_week_pane_t_ParamLimits

0xb0ec,	// (0x0002be2b) cell_cale_month_pane_g1_ParamLimits

0x3a01,	// (0x00024740) main_cale_event_viewer_pane

0x3a01,	// (0x00024740) listscroll_cale_event_viewer_pane

0xd2f9,	// (0x0002e038) list_cale_ev_pane

0xd301,	// (0x0002e040) scroll_pane_cp023

0x71cd,	// (0x00027f0c) field_cale_ev_pane_ParamLimits

0x71cd,	// (0x00027f0c) field_cale_ev_pane

0xd30d,	// (0x0002e04c) field_cale_ev_content_pane_ParamLimits

0xd30d,	// (0x0002e04c) field_cale_ev_content_pane

0xd319,	// (0x0002e058) field_cale_ev_pane_g1_ParamLimits

0xd319,	// (0x0002e058) field_cale_ev_pane_g1

0xd325,	// (0x0002e064) field_cale_ev_pane_g2_ParamLimits

0xd325,	// (0x0002e064) field_cale_ev_pane_g2

0xd33d,	// (0x0002e07c) field_cale_ev_pane_g3_ParamLimits

0xd33d,	// (0x0002e07c) field_cale_ev_pane_g3

0x0002,

0xf770,	// (0x000304af) field_cale_ev_pane_g_ParamLimits

0xf770,	// (0x000304af) field_cale_ev_pane_g

0xd355,	// (0x0002e094) field_cale_ev_pane_t1_ParamLimits

0xd355,	// (0x0002e094) field_cale_ev_pane_t1

0x71e7,	// (0x00027f26) field_cale_ev_content_pane_t1_ParamLimits

0x71e7,	// (0x00027f26) field_cale_ev_content_pane_t1

0xba1c,	// (0x0002c75b) bg_button_pane_cp01

0xabda,	// (0x0002b919) listscroll_cale_week_pane_ParamLimits

0x47e3,	// (0x00025522) popup_toolbar_window_cp01

0xac02,	// (0x0002b941) listscroll_cale_week_pane_t1_ParamLimits

0x45fb,	// (0x0002533a) listscroll_cale_day_pane_ParamLimits

0x47e3,	// (0x00025522) popup_toolbar_window_cp02

0xac02,	// (0x0002b941) listscroll_cale_day_pane_t1_ParamLimits

0xabda,	// (0x0002b919) main_cale_month_pane_ParamLimits

0x6c00,	// (0x0002793f) popup_toolbar_window_cp03_ParamLimits

0x6c00,	// (0x0002793f) popup_toolbar_window_cp03

0x63e5,	// (0x00027124) main_image_pane_g2_ParamLimits

0x63e5,	// (0x00027124) main_image_pane_g2

0x63f6,	// (0x00027135) main_image_pane_g3_ParamLimits

0x63f6,	// (0x00027135) main_image_pane_g3

0x0002,

0xf54e,	// (0x0003028d) main_image_pane_g_ParamLimits

0xf54e,	// (0x0003028d) main_image_pane_g

0xbbd9,	// (0x0002c918) main_image_pane_t1_ParamLimits

0x6407,	// (0x00027146) main_image_pane_t2_ParamLimits

0x6407,	// (0x00027146) main_image_pane_t2

0x6419,	// (0x00027158) main_image_pane_t3_ParamLimits

0x6419,	// (0x00027158) main_image_pane_t3

0x6441,	// (0x00027180) main_image_pane_t4_ParamLimits

0x6441,	// (0x00027180) main_image_pane_t4

0x0003,

0xf555,	// (0x00030294) main_image_pane_t_ParamLimits

0xf555,	// (0x00030294) main_image_pane_t

0x6461,	// (0x000271a0) popup_image_details_window_cp01

0x6469,	// (0x000271a8) popup_toobar_trans_pane_cp01_ParamLimits

0x6469,	// (0x000271a8) popup_toobar_trans_pane_cp01

0x6acd,	// (0x0002780c) popup_image_details_window_ParamLimits

0x6acd,	// (0x0002780c) popup_image_details_window

0xcd9f,	// (0x0002dade) popup_image_focus_window

0x2bb5,	// (0x000238f4) camera2_autofocus_pane_ParamLimits

0x2bb5,	// (0x000238f4) camera2_autofocus_pane

0x3a01,	// (0x00024740) bg_popup_sub_pane_cp06

0xd36c,	// (0x0002e0ab) popup_image_focus_window_g1

0xd374,	// (0x0002e0b3) popup_image_focus_window_g2

0xd37c,	// (0x0002e0bb) popup_image_focus_window_g3

0xd384,	// (0x0002e0c3) popup_image_focus_window_g4

0x0003,

0xf777,	// (0x000304b6) popup_image_focus_window_g

0xd38c,	// (0x0002e0cb) popup_image_focus_window_t1

0xd39a,	// (0x0002e0d9) popup_image_focus_window_t2

0xd3a9,	// (0x0002e0e8) popup_image_focus_window_t3

0x0002,

0xf780,	// (0x000304bf) popup_image_focus_window_t

0xd3b7,	// (0x0002e0f6) camera2_autofocus_pane_g1

0x3c2b,	// (0x0002496a) bg_tb_trans_pane_cp01

0xd3c5,	// (0x0002e104) popup_image_details_window_g1

0xd3d8,	// (0x0002e117) popup_image_details_window_g2

0x0002,

0xf792,	// (0x000304d1) popup_image_details_window_g

0xd401,	// (0x0002e140) popup_image_details_window_t1

0xd413,	// (0x0002e152) popup_image_details_window_t2

0xd42c,	// (0x0002e16b) popup_image_details_window_t3

0xd440,	// (0x0002e17f) popup_image_details_window_t4

0xd45b,	// (0x0002e19a) popup_image_details_window_t5

0x0004,

0xf799,	// (0x000304d8) popup_image_details_window_t

0x45e3,	// (0x00025322) bg_calc_paper_pane_ParamLimits

0xaacd,	// (0x0002b80c) grid_highlight_pane_cp013

0xaad7,	// (0x0002b816) list_calc_pane_ParamLimits

0xaae9,	// (0x0002b828) scroll_pane_cp024

0x45fb,	// (0x0002533a) bg_calc_display_pane_ParamLimits

0xaaf1,	// (0x0002b830) calc_display_pane_t1_ParamLimits

0xab06,	// (0x0002b845) calc_display_pane_t2_ParamLimits

0xab1b,	// (0x0002b85a) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0002fef5) calc_display_pane_t_ParamLimits

0x29cf,	// (0x0002370e) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0002ff12) cell_calc_pane_g

0x29d8,	// (0x00023717) cell_calc_pane_t1

0x46aa,	// (0x000253e9) grid_highlight_pane_cp02_ParamLimits

0x46c0,	// (0x000253ff) toolbar_button_pane_cp01_ParamLimits

0x46c0,	// (0x000253ff) toolbar_button_pane_cp01

0xbc1e,	// (0x0002c95d) temp_image_control_pane_ParamLimits

0xbc1e,	// (0x0002c95d) temp_image_control_pane

0x3c2b,	// (0x0002496a) main_mp3_pane

0xd475,	// (0x0002e1b4) temp_image_control_pane_g1_ParamLimits

0xd475,	// (0x0002e1b4) temp_image_control_pane_g1

0xd483,	// (0x0002e1c2) temp_image_control_pane_g2_ParamLimits

0xd483,	// (0x0002e1c2) temp_image_control_pane_g2

0xd495,	// (0x0002e1d4) temp_image_control_pane_g3_ParamLimits

0xd495,	// (0x0002e1d4) temp_image_control_pane_g3

0x7234,	// (0x00027f73) temp_image_control_pane_g4_ParamLimits

0x7234,	// (0x00027f73) temp_image_control_pane_g4

0x0003,

0xf7a4,	// (0x000304e3) temp_image_control_pane_g_ParamLimits

0xf7a4,	// (0x000304e3) temp_image_control_pane_g

0xd475,	// (0x0002e1b4) main_mp3_pane_g1

0x7245,	// (0x00027f84) main_mp3_pane_g2

0x0007,

0xf7ad,	// (0x000304ec) main_mp3_pane_g

0xd4d8,	// (0x0002e217) main_mp3_pane_t1

0xacda,	// (0x0002ba19) main_camera_pane_g8_ParamLimits

0xacda,	// (0x0002ba19) main_camera_pane_g8

0x4d64,	// (0x00025aa3) main_video_pane_g7_ParamLimits

0x4d64,	// (0x00025aa3) main_video_pane_g7

0xcea5,	// (0x0002dbe4) main_camera2_pane_t7_ParamLimits

0xcea5,	// (0x0002dbe4) main_camera2_pane_t7

0xaed7,	// (0x0002bc16) scroll_pane_cp025_ParamLimits

0xaed7,	// (0x0002bc16) scroll_pane_cp025

0xaeeb,	// (0x0002bc2a) scroll_pane_cp026_ParamLimits

0xaeeb,	// (0x0002bc2a) scroll_pane_cp026

0xaefa,	// (0x0002bc39) wml_content_pane_ParamLimits

0x3a01,	// (0x00024740) main_touch_calib_pane

0x72fb,	// (0x0002803a) main_touch_calib_pane_g1

0x7307,	// (0x00028046) main_touch_calib_pane_g2

0x7313,	// (0x00028052) main_touch_calib_pane_g3

0x731f,	// (0x0002805e) main_touch_calib_pane_g4

0x0003,

0xf7cb,	// (0x0003050a) main_touch_calib_pane_g

0x732b,	// (0x0002806a) main_touch_calib_pane_t1

0x7343,	// (0x00028082) main_touch_calib_pane_t2

0x0004,

0xf7d4,	// (0x00030513) main_touch_calib_pane_t

0xb77d,	// (0x0002c4bc) mup_progress_pane_cp02

0xb79c,	// (0x0002c4db) navi_pane_g1

0xb81c,	// (0x0002c55b) navi_pane_mp_t3

0x3c2b,	// (0x0002496a) main_mp3_pane_ParamLimits

0x6c3a,	// (0x00027979) navi_pane_ParamLimits

0xd475,	// (0x0002e1b4) main_mp3_pane_g1_ParamLimits

0x7245,	// (0x00027f84) main_mp3_pane_g2_ParamLimits

0x7251,	// (0x00027f90) main_mp3_pane_g3_ParamLimits

0x7251,	// (0x00027f90) main_mp3_pane_g3

0x725d,	// (0x00027f9c) main_mp3_pane_g4_ParamLimits

0x725d,	// (0x00027f9c) main_mp3_pane_g4

0xd4a5,	// (0x0002e1e4) main_mp3_pane_g5_ParamLimits

0xd4a5,	// (0x0002e1e4) main_mp3_pane_g5

0xd4b3,	// (0x0002e1f2) main_mp3_pane_g6_ParamLimits

0xd4b3,	// (0x0002e1f2) main_mp3_pane_g6

0xd4c0,	// (0x0002e1ff) main_mp3_pane_g7_ParamLimits

0xd4c0,	// (0x0002e1ff) main_mp3_pane_g7

0xd4cc,	// (0x0002e20b) main_mp3_pane_g8_ParamLimits

0xd4cc,	// (0x0002e20b) main_mp3_pane_g8

0xf7ad,	// (0x000304ec) main_mp3_pane_g_ParamLimits

0x7269,	// (0x00027fa8) main_mp3_pane_t2

0x7277,	// (0x00027fb6) main_mp3_pane_t3

0xd4e6,	// (0x0002e225) main_mp3_pane_t4

0xd4f4,	// (0x0002e233) main_mp3_pane_t5

0x0005,

0xf7be,	// (0x000304fd) main_mp3_pane_t

0xd502,	// (0x0002e241) mup_progress_pane_cp01

0x3a40,	// (0x0002477f) aid_zoom_text_secondary2

0xd2f9,	// (0x0002e038) list_cale_ev2_pane

0xd301,	// (0x0002e040) scroll_pane_cp023_ParamLimits

0x133b,	// (0x0002207a) field_cale_ev2_pane_ParamLimits

0x133b,	// (0x0002207a) field_cale_ev2_pane

0xd50a,	// (0x0002e249) field_cale_ev2_pane_g1_ParamLimits

0xd50a,	// (0x0002e249) field_cale_ev2_pane_g1

0xd516,	// (0x0002e255) field_cale_ev2_pane_g2_ParamLimits

0xd516,	// (0x0002e255) field_cale_ev2_pane_g2

0xd52e,	// (0x0002e26d) field_cale_ev2_pane_g3_ParamLimits

0xd52e,	// (0x0002e26d) field_cale_ev2_pane_g3

0x0003,

0xf7df,	// (0x0003051e) field_cale_ev2_pane_g_ParamLimits

0xf7df,	// (0x0003051e) field_cale_ev2_pane_g

0xd552,	// (0x0002e291) field_cale_ev2_pane_t1_ParamLimits

0xd552,	// (0x0002e291) field_cale_ev2_pane_t1

0xd569,	// (0x0002e2a8) field_cale_ev2_pane_t2_ParamLimits

0xd569,	// (0x0002e2a8) field_cale_ev2_pane_t2

0x0001,

0xf7e8,	// (0x00030527) field_cale_ev2_pane_t_ParamLimits

0xf7e8,	// (0x00030527) field_cale_ev2_pane_t

0x62a0,	// (0x00026fdf) main_postcard_pane_g5_ParamLimits

0x62a0,	// (0x00026fdf) main_postcard_pane_g5

0x62b4,	// (0x00026ff3) main_postcard_pane_g6_ParamLimits

0x62b4,	// (0x00026ff3) main_postcard_pane_g6

0x4b46,	// (0x00025885) camera2_autofocus_pane_cp_ParamLimits

0x4b46,	// (0x00025885) camera2_autofocus_pane_cp

0x3c2b,	// (0x0002496a) main_mup3_pane

0x73b1,	// (0x000280f0) main_mup3_pane_g1_ParamLimits

0x73b1,	// (0x000280f0) main_mup3_pane_g1

0x73d3,	// (0x00028112) main_mup3_pane_g2_ParamLimits

0x73d3,	// (0x00028112) main_mup3_pane_g2

0x743b,	// (0x0002817a) main_mup3_pane_g3_ParamLimits

0x743b,	// (0x0002817a) main_mup3_pane_g3

0x7479,	// (0x000281b8) main_mup3_pane_g4_ParamLimits

0x7479,	// (0x000281b8) main_mup3_pane_g4

0x74b7,	// (0x000281f6) main_mup3_pane_g5_ParamLimits

0x74b7,	// (0x000281f6) main_mup3_pane_g5

0x74f5,	// (0x00028234) main_mup3_pane_g6_ParamLimits

0x74f5,	// (0x00028234) main_mup3_pane_g6

0xd57e,	// (0x0002e2bd) main_mup3_pane_g7_ParamLimits

0xd57e,	// (0x0002e2bd) main_mup3_pane_g7

0x0007,

0xf7f8,	// (0x00030537) main_mup3_pane_g_ParamLimits

0xf7f8,	// (0x00030537) main_mup3_pane_g

0x756b,	// (0x000282aa) main_mup3_pane_t1_ParamLimits

0x756b,	// (0x000282aa) main_mup3_pane_t1

0x75d3,	// (0x00028312) main_mup3_pane_t2_ParamLimits

0x75d3,	// (0x00028312) main_mup3_pane_t2

0x769b,	// (0x000283da) main_mup3_pane_t4_ParamLimits

0x769b,	// (0x000283da) main_mup3_pane_t4

0x76e9,	// (0x00028428) main_mup3_pane_t5_ParamLimits

0x76e9,	// (0x00028428) main_mup3_pane_t5

0x7797,	// (0x000284d6) main_mup3_pane_t6_ParamLimits

0x7797,	// (0x000284d6) main_mup3_pane_t6

0x0005,

0xf809,	// (0x00030548) main_mup3_pane_t_ParamLimits

0xf809,	// (0x00030548) main_mup3_pane_t

0x784b,	// (0x0002858a) mup3_progress_pane_ParamLimits

0x784b,	// (0x0002858a) mup3_progress_pane

0x78a7,	// (0x000285e6) popup_mup3_control_window_ParamLimits

0x78a7,	// (0x000285e6) popup_mup3_control_window

0xd58c,	// (0x0002e2cb) popup_mup3_text_window

0x78d5,	// (0x00028614) mup3_progress_pane_t1

0x78eb,	// (0x0002862a) mup3_progress_pane_t2

0xd594,	// (0x0002e2d3) mup3_progress_pane_t3

0x0002,

0xf816,	// (0x00030555) mup3_progress_pane_t

0xd5ab,	// (0x0002e2ea) mup_progress_pane_cp03

0x3a01,	// (0x00024740) bg_tb_trans_pane_cp04

0x7901,	// (0x00028640) mup3_volume_pane

0x7909,	// (0x00028648) popup_mup3_control_window_g1

0x7912,	// (0x00028651) mup3_volume_pane_g1

0x791b,	// (0x0002865a) mup3_volume_pane_g2

0x7924,	// (0x00028663) mup3_volume_pane_g3

0x0002,

0xf81d,	// (0x0003055c) mup3_volume_pane_g

0x3a01,	// (0x00024740) bg_tb_trans_pane_cp03

0xd5bb,	// (0x0002e2fa) popup_mup3_text_window_g1

0xd5c3,	// (0x0002e302) popup_mup3_text_window_t1

0x4693,	// (0x000253d2) list_calc_item_pane_g1_ParamLimits

0xcf8d,	// (0x0002dccc) mup_volume_pane_cp_g1

0x735b,	// (0x0002809a) main_touch_calib_pane_t3

0x736d,	// (0x000280ac) main_touch_calib_pane_t4

0x737f,	// (0x000280be) main_touch_calib_pane_t5

0x3a0b,	// (0x0002474a) aid_cell_size_toolbar2

0x3a13,	// (0x00024752) aid_popup3_width_pane

0x3a40,	// (0x0002477f) aid_zoom_text_msg_primary

0xacba,	// (0x0002b9f9) vorec_t7

0x4607,	// (0x00025346) bg_calc_paper_pane_g1_ParamLimits

0x4613,	// (0x00025352) bg_calc_paper_pane_g2_ParamLimits

0x461f,	// (0x0002535e) bg_calc_paper_pane_g3_ParamLimits

0x462b,	// (0x0002536a) bg_calc_paper_pane_g4_ParamLimits

0x4637,	// (0x00025376) bg_calc_paper_pane_g5_ParamLimits

0x4643,	// (0x00025382) bg_calc_paper_pane_g6_ParamLimits

0x4652,	// (0x00025391) bg_calc_paper_pane_g7_ParamLimits

0x4661,	// (0x000253a0) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0002fefc) bg_calc_paper_pane_g_ParamLimits

0x4670,	// (0x000253af) calc_bg_paper_pane_g9_ParamLimits

0x4c7a,	// (0x000259b9) image_qvga_pane_ParamLimits

0x4c7a,	// (0x000259b9) image_qvga_pane

0x4345,	// (0x00025084) bg_popup_sub_pane_cp04_ParamLimits

0xbb55,	// (0x0002c894) popup_mup_playback_window_g1_ParamLimits

0xbb61,	// (0x0002c8a0) popup_mup_playback_window_t1_ParamLimits

0xbb76,	// (0x0002c8b5) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x00030288) popup_mup_playback_window_t_ParamLimits

0x6ece,	// (0x00027c0d) main_mup2_pane_g3_ParamLimits

0x6ece,	// (0x00027c0d) main_mup2_pane_g3

0x4f41,	// (0x00025c80) popup_toolbar_window_cp04

0xbf57,	// (0x0002cc96) popup_call2_audio_second_window_g3_ParamLimits

0xbf57,	// (0x0002cc96) popup_call2_audio_second_window_g3

0xc361,	// (0x0002d0a0) popup_call2_audio_first_window_g4_ParamLimits

0xc361,	// (0x0002d0a0) popup_call2_audio_first_window_g4

0xc9e0,	// (0x0002d71f) popup_call2_audio_in_window_g4_ParamLimits

0xc9e0,	// (0x0002d71f) popup_call2_audio_in_window_g4

0x63c7,	// (0x00027106) aid_area_sk_bg_cut_ParamLimits

0x63c7,	// (0x00027106) aid_area_sk_bg_cut

0xbb8b,	// (0x0002c8ca) aid_area_sk_bg_cut_2_ParamLimits

0xbb8b,	// (0x0002c8ca) aid_area_sk_bg_cut_2

0x71a3,	// (0x00027ee2) aid_placing_details_win

0x71ab,	// (0x00027eea) aid_placing_details_win_2

0xd3b7,	// (0x0002e0f6) camera2_autofocus_pane_g1_ParamLimits

0x3bd2,	// (0x00024911) popup_fixed_preview_cale_window_ParamLimits

0x3bd2,	// (0x00024911) popup_fixed_preview_cale_window

0xb8a5,	// (0x0002c5e4) navi_slider_pane_g3

0xb8ae,	// (0x0002c5ed) navi_slider_pane_g4

0xb8b7,	// (0x0002c5f6) navi_slider_pane_g5

0xb8a5,	// (0x0002c5e4) navi_slider_pane_g6

0xb8c0,	// (0x0002c5ff) navi_slider_pane_g7

0xb9e1,	// (0x0002c720) mup_scale_pane_g3

0xb9ea,	// (0x0002c729) mup_scale_pane_g4

0xb9f3,	// (0x0002c732) mup_scale_pane_g5

0x615f,	// (0x00026e9e) mup_scale_pane_g6

0x6168,	// (0x00026ea7) mup_scale_pane_g7

0xb8a5,	// (0x0002c5e4) cams2_slider_pane_g3

0xd042,	// (0x0002dd81) cams2_slider_pane_g4

0xd04a,	// (0x0002dd89) cams2_slider_pane_g5

0xb8a5,	// (0x0002c5e4) cams2_slider_pane_g6

0xd052,	// (0x0002dd91) cams2_slider_pane_g7

0xd276,	// (0x0002dfb5) camera2_autofocus_pane_cp_g1

0xd5d1,	// (0x0002e310) bg_popup_preview_window_pane_cp02_ParamLimits

0xd5d1,	// (0x0002e310) bg_popup_preview_window_pane_cp02

0x792d,	// (0x0002866c) list_fp_cale_pane_ParamLimits

0x792d,	// (0x0002866c) list_fp_cale_pane

0xd5dd,	// (0x0002e31c) popup_fixed_preview_cale_window_t1_ParamLimits

0xd5dd,	// (0x0002e31c) popup_fixed_preview_cale_window_t1

0x7939,	// (0x00028678) popup_fixed_preview_cale_window_t2_ParamLimits

0x7939,	// (0x00028678) popup_fixed_preview_cale_window_t2

0x794e,	// (0x0002868d) popup_fixed_preview_cale_window_t3_ParamLimits

0x794e,	// (0x0002868d) popup_fixed_preview_cale_window_t3

0x0002,

0xf824,	// (0x00030563) popup_fixed_preview_cale_window_t_ParamLimits

0xf824,	// (0x00030563) popup_fixed_preview_cale_window_t

0x7963,	// (0x000286a2) list_single_fp_cale_pane_ParamLimits

0x7963,	// (0x000286a2) list_single_fp_cale_pane

0x7977,	// (0x000286b6) list_single_fp_cale_pane_g1_ParamLimits

0x7977,	// (0x000286b6) list_single_fp_cale_pane_g1

0xd5fb,	// (0x0002e33a) list_single_fp_cale_pane_g2_ParamLimits

0xd5fb,	// (0x0002e33a) list_single_fp_cale_pane_g2

0x0002,

0xf82b,	// (0x0003056a) list_single_fp_cale_pane_g_ParamLimits

0xf82b,	// (0x0003056a) list_single_fp_cale_pane_g

0x7983,	// (0x000286c2) list_single_fp_cale_pane_t1_ParamLimits

0x7983,	// (0x000286c2) list_single_fp_cale_pane_t1

0x7995,	// (0x000286d4) list_single_fp_cale_pane_t2_ParamLimits

0x7995,	// (0x000286d4) list_single_fp_cale_pane_t2

0x0001,

0xf832,	// (0x00030571) list_single_fp_cale_pane_t_ParamLimits

0xf832,	// (0x00030571) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3a01,	// (0x00024740) main_dialer_pane

0x79c8,	// (0x00028707) aid_cell_size_keypad

0x79d2,	// (0x00028711) dialer_ne_pane

0x79da,	// (0x00028719) grid_dialer_command_1_pane

0x79e2,	// (0x00028721) grid_dialer_command_2_pane

0x79ea,	// (0x00028729) grid_dialer_keypad_pane

0x79fa,	// (0x00028739) bg_popup_call_pane_cp06_ParamLimits

0x79fa,	// (0x00028739) bg_popup_call_pane_cp06

0x7a06,	// (0x00028745) dialer_ne_clear_pane_ParamLimits

0x7a06,	// (0x00028745) dialer_ne_clear_pane

0xd614,	// (0x0002e353) dialer_ne_pane_g1

0xd61c,	// (0x0002e35b) dialer_ne_pane_t1_ParamLimits

0xd61c,	// (0x0002e35b) dialer_ne_pane_t1

0x7a12,	// (0x00028751) dialer_ne_pane_t2_ParamLimits

0x7a12,	// (0x00028751) dialer_ne_pane_t2

0x7a3c,	// (0x0002877b) dialer_ne_pane_t3_ParamLimits

0x7a3c,	// (0x0002877b) dialer_ne_pane_t3

0x0002,

0xf837,	// (0x00030576) dialer_ne_pane_t_ParamLimits

0xf837,	// (0x00030576) dialer_ne_pane_t

0x7a6c,	// (0x000287ab) dialer_ne_pane_t3_copy1_ParamLimits

0x7a6c,	// (0x000287ab) dialer_ne_pane_t3_copy1

0x7a9b,	// (0x000287da) cell_dialer_keypad_pane_ParamLimits

0x7a9b,	// (0x000287da) cell_dialer_keypad_pane

0x7ab0,	// (0x000287ef) cell_dialer_command_1_pane_ParamLimits

0x7ab0,	// (0x000287ef) cell_dialer_command_1_pane

0x7ac6,	// (0x00028805) cell_dialer_command_2_pane_ParamLimits

0x7ac6,	// (0x00028805) cell_dialer_command_2_pane

0xd62e,	// (0x0002e36d) bg_button_pane_cp02_ParamLimits

0xd62e,	// (0x0002e36d) bg_button_pane_cp02

0x7ad5,	// (0x00028814) cell_dialer_keypad_pane_g1_ParamLimits

0x7ad5,	// (0x00028814) cell_dialer_keypad_pane_g1

0xd62e,	// (0x0002e36d) bg_button_pane_cp03_ParamLimits

0xd62e,	// (0x0002e36d) bg_button_pane_cp03

0x7aea,	// (0x00028829) cell_dialer_command_1_pane_g1_ParamLimits

0x7aea,	// (0x00028829) cell_dialer_command_1_pane_g1

0xd63a,	// (0x0002e379) bg_button_pane_cp04

0x7afe,	// (0x0002883d) cell_dialer_command_2_pane_g1

0xb88b,	// (0x0002c5ca) bg_button_pane_cp06

0xd642,	// (0x0002e381) dialer_ne_clear_pane_g1

0xb7a8,	// (0x0002c4e7) navi_pane_g2

0x5d64,	// (0x00026aa3) navi_pane_g3

0x0002,

0xf44c,	// (0x0003018b) navi_pane_g

0xb82a,	// (0x0002c569) navi_pane_mv_g2

0xb852,	// (0x0002c591) navi_pane_mv_g5

0x5d89,	// (0x00026ac8) navi_pane_mv_t1

0x45fb,	// (0x0002533a) main_clock2_pane

0x7b32,	// (0x00028871) main_clock2_list_pane_ParamLimits

0x7b32,	// (0x00028871) main_clock2_list_pane

0x7b64,	// (0x000288a3) main_clock2_pane_t1_ParamLimits

0x7b64,	// (0x000288a3) main_clock2_pane_t1

0x7b9b,	// (0x000288da) main_clock2_pane_t2_ParamLimits

0x7b9b,	// (0x000288da) main_clock2_pane_t2

0x0004,

0xf83e,	// (0x0003057d) main_clock2_pane_t_ParamLimits

0xf83e,	// (0x0003057d) main_clock2_pane_t

0x7c1d,	// (0x0002895c) popup_clock_analogue_window_cp03_ParamLimits

0x7c1d,	// (0x0002895c) popup_clock_analogue_window_cp03

0x7c40,	// (0x0002897f) popup_clock_digital_window_cp02_ParamLimits

0x7c40,	// (0x0002897f) popup_clock_digital_window_cp02

0x7cb1,	// (0x000289f0) main_clock2_list_single_pane_ParamLimits

0x7cb1,	// (0x000289f0) main_clock2_list_single_pane

0xb88b,	// (0x0002c5ca) list_highlight_pane_cp05

0xd64a,	// (0x0002e389) main_clock2_list_single_pane_t1

0x4f41,	// (0x00025c80) popup_toolbar_window_cp04_ParamLimits

0x7204,	// (0x00027f43) camera2_autofocus_pane_g2_ParamLimits

0x7204,	// (0x00027f43) camera2_autofocus_pane_g2

0x7210,	// (0x00027f4f) camera2_autofocus_pane_g3_ParamLimits

0x7210,	// (0x00027f4f) camera2_autofocus_pane_g3

0x721c,	// (0x00027f5b) camera2_autofocus_pane_g4_ParamLimits

0x721c,	// (0x00027f5b) camera2_autofocus_pane_g4

0x7228,	// (0x00027f67) camera2_autofocus_pane_g5_ParamLimits

0x7228,	// (0x00027f67) camera2_autofocus_pane_g5

0x0004,

0xf787,	// (0x000304c6) camera2_autofocus_pane_g_ParamLimits

0xf787,	// (0x000304c6) camera2_autofocus_pane_g

0x7391,	// (0x000280d0) camera2_autofocus_pane_cp_g2

0x7399,	// (0x000280d8) camera2_autofocus_pane_cp_g3

0x73a1,	// (0x000280e0) camera2_autofocus_pane_cp_g4

0x73a9,	// (0x000280e8) camera2_autofocus_pane_cp_g5

0x0004,

0xf7ed,	// (0x0003052c) camera2_autofocus_pane_cp_g

0x79f2,	// (0x00028731) popup_dialer_spcha_window

0x3a01,	// (0x00024740) bg_popup_sub_pane_cp07

0xd658,	// (0x0002e397) list_spcha_pane

0xd660,	// (0x0002e39f) list_single_spcha_pane_ParamLimits

0xd660,	// (0x0002e39f) list_single_spcha_pane

0x3a01,	// (0x00024740) list_highlight_pane_cp06

0xd671,	// (0x0002e3b0) list_single_spcha_pane_t1

0xc78a,	// (0x0002d4c9) popup_call2_audio_out_window_g4_ParamLimits

0xc78a,	// (0x0002d4c9) popup_call2_audio_out_window_g4

0x3a01,	// (0x00024740) main_imed2_pane

0xcda7,	// (0x0002dae6) popup_imed_adjust2_window

0x6ae3,	// (0x00027822) popup_imed_trans_window_ParamLimits

0x6ae3,	// (0x00027822) popup_imed_trans_window

0xd0ba,	// (0x0002ddf9) popup_blid_sat_info2_window_t1

0xd0c8,	// (0x0002de07) popup_blid_sat_info2_window_t2

0x000a,

0xf71c,	// (0x0003045b) popup_blid_sat_info2_window_t

0x7ce3,	// (0x00028a22) aid_size_cell_colour_35

0x7d03,	// (0x00028a42) aid_size_cell_colour_112

0x7d23,	// (0x00028a62) aid_size_cell_effect

0xcd81,	// (0x0002dac0) bg_tb_trans_pane_cp02

0xb265,	// (0x0002bfa4) heading_imed_pane

0x7d43,	// (0x00028a82) listscroll_imed_pane

0xd67f,	// (0x0002e3be) heading_imed_pane_g1

0xd687,	// (0x0002e3c6) heading_imed_pane_t1

0xd695,	// (0x0002e3d4) grid_imed_colour_35_pane_ParamLimits

0xd695,	// (0x0002e3d4) grid_imed_colour_35_pane

0x7d4f,	// (0x00028a8e) grid_imed_effect_pane

0xd6a8,	// (0x0002e3e7) list_imed_aspect_pane

0x7d62,	// (0x00028aa1) scroll_pane_cp027_ParamLimits

0x7d62,	// (0x00028aa1) scroll_pane_cp027

0x7d6e,	// (0x00028aad) cell_imed_effect_pane_ParamLimits

0x7d6e,	// (0x00028aad) cell_imed_effect_pane

0xd6b0,	// (0x0002e3ef) cell_imed_colour_pane_ParamLimits

0xd6b0,	// (0x0002e3ef) cell_imed_colour_pane

0xd6ea,	// (0x0002e429) cell_imed_colour_pane_g1_ParamLimits

0xd6ea,	// (0x0002e429) cell_imed_colour_pane_g1

0xd6fb,	// (0x0002e43a) hgihlgiht_grid_pane_cp016_ParamLimits

0xd6fb,	// (0x0002e43a) hgihlgiht_grid_pane_cp016

0x7d93,	// (0x00028ad2) cell_imed_effect_pane_g1

0x7d9b,	// (0x00028ada) grid_highlight_pane_cp017

0xd70c,	// (0x0002e44b) list_imed_single_pane_ParamLimits

0xd70c,	// (0x0002e44b) list_imed_single_pane

0x3a01,	// (0x00024740) list_highlight_pane_cp07

0xd71f,	// (0x0002e45e) list_imed_aspect_pane_comp1_t1

0xcd81,	// (0x0002dac0) bg_tb_trans_pane_cp05

0xd73f,	// (0x0002e47e) popup_imed_adjust2_window_g1

0xd766,	// (0x0002e4a5) popup_imed_adjust2_window_t1

0xd77e,	// (0x0002e4bd) slider_imed_adjust_pane

0xd792,	// (0x0002e4d1) slider_imed_adjust_pane_g1

0xd7a2,	// (0x0002e4e1) slider_imed_adjust_pane_g2

0xd7b2,	// (0x0002e4f1) slider_imed_adjust_pane_g3

0xd7c3,	// (0x0002e502) slider_imed_adjust_pane_g4

0x0003,

0xf85b,	// (0x0003059a) slider_imed_adjust_pane_g

0x7da4,	// (0x00028ae3) aid_size_cell_clipart2

0x7db0,	// (0x00028aef) grid_imed_clipart_pane

0xd7d4,	// (0x0002e513) scroll_pane_cp031

0x7dba,	// (0x00028af9) cell_imed_clipart_pane_ParamLimits

0x7dba,	// (0x00028af9) cell_imed_clipart_pane

0x7dd2,	// (0x00028b11) cell_imed_clipart_pane_g1

0x3a01,	// (0x00024740) grid_highlight_pane_cp014

0x7b45,	// (0x00028884) main_clock2_pane_g1_ParamLimits

0x7b45,	// (0x00028884) main_clock2_pane_g1

0x7c5c,	// (0x0002899b) aid_call2_pane_cp10

0x7c6e,	// (0x000289ad) aid_call_pane_cp10

0xb758,	// (0x0002c497) popup_clock_analogue_window_cp10_g1

0xb758,	// (0x0002c497) popup_clock_analogue_window_cp10_g2

0x7c80,	// (0x000289bf) popup_clock_analogue_window_cp10_g3

0x7c80,	// (0x000289bf) popup_clock_analogue_window_cp10_g4

0xb758,	// (0x0002c497) popup_clock_analogue_window_cp10_g5

0x0004,

0xf849,	// (0x00030588) popup_clock_analogue_window_cp10_g

0x7c92,	// (0x000289d1) popup_clock_analogue_window_cp10_t1

0x2fb0,	// (0x00023cef) clock_digital_number_pane_cp10_ParamLimits

0x2fb0,	// (0x00023cef) clock_digital_number_pane_cp10

0x2fc8,	// (0x00023d07) clock_digital_number_pane_cp11_ParamLimits

0x2fc8,	// (0x00023d07) clock_digital_number_pane_cp11

0x2fe0,	// (0x00023d1f) clock_digital_number_pane_cp12_ParamLimits

0x2fe0,	// (0x00023d1f) clock_digital_number_pane_cp12

0x2ff8,	// (0x00023d37) clock_digital_number_pane_cp13_ParamLimits

0x2ff8,	// (0x00023d37) clock_digital_number_pane_cp13

0x3010,	// (0x00023d4f) clock_digital_separator_pane_cp10_ParamLimits

0x3010,	// (0x00023d4f) clock_digital_separator_pane_cp10

0x7cc3,	// (0x00028a02) popup_clock_digital_window_cp02_t1_ParamLimits

0x7cc3,	// (0x00028a02) popup_clock_digital_window_cp02_t1

0x433d,	// (0x0002507c) clock_digital_number_pane_cp10_g1

0x433d,	// (0x0002507c) clock_digital_number_pane_cp10_g2

0x0001,

0xf864,	// (0x000305a3) clock_digital_number_pane_cp10_g

0x433d,	// (0x0002507c) clock_digital_separator_pane_cp10_g1

0x433d,	// (0x0002507c) clock_digital_separator_pane_g2_cp10

0xb85b,	// (0x0002c59a) navi_pane_vded_g4

0xb864,	// (0x0002c5a3) navi_pane_vded_g5

0xb86d,	// (0x0002c5ac) navi_pane_vded_t1

0x3a01,	// (0x00024740) main_vded_pane

0x7ddb,	// (0x00028b1a) main_vded_pane_g1

0x7de5,	// (0x00028b24) main_vded_pane_g2

0x7ded,	// (0x00028b2c) main_vded_pane_g3

0x0002,

0xf869,	// (0x000305a8) main_vded_pane_g

0x7df5,	// (0x00028b34) main_vded_pane_t1

0x7e03,	// (0x00028b42) main_vded_pane_t2

0x0001,

0xf870,	// (0x000305af) main_vded_pane_t

0x7e11,	// (0x00028b50) vded_slider_pane

0x7e19,	// (0x00028b58) vded_video_pane

0xd7dc,	// (0x0002e51b) vded_video_pane_g1

0x7e21,	// (0x00028b60) vded_video_pane_g2

0xd276,	// (0x0002dfb5) vded_video_pane_g3

0x0002,

0xf875,	// (0x000305b4) vded_video_pane_g

0xd7e6,	// (0x0002e525) vded_slider_pane_g1

0xcf8d,	// (0x0002dccc) vded_slider_pane_g2

0xd7ef,	// (0x0002e52e) vded_slider_pane_g3

0xd7f8,	// (0x0002e537) vded_slider_pane_g4

0xd801,	// (0x0002e540) vded_slider_pane_g5

0x0004,

0xf87c,	// (0x000305bb) vded_slider_pane_g

0x7891,	// (0x000285d0) mup3_rocker_pane_ParamLimits

0x7891,	// (0x000285d0) mup3_rocker_pane

0x7e2a,	// (0x00028b69) mup3_control_keys_pane_g1

0x7e32,	// (0x00028b71) mup3_control_keys_pane_g2

0x7e3a,	// (0x00028b79) mup3_control_keys_pane_g3

0x7e42,	// (0x00028b81) mup3_control_keys_pane_g4

0x0003,

0xf887,	// (0x000305c6) mup3_control_keys_pane_g

0x3c0d,	// (0x0002494c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3c0d,	// (0x0002494c) popup_toolbar2_fixed_window_cp01

0x78bf,	// (0x000285fe) popup_toolbar2_fixed_window_cp02_ParamLimits

0x78bf,	// (0x000285fe) popup_toolbar2_fixed_window_cp02

0xc0c9,	// (0x0002ce08) popup_call2_audio_second_window_t4_ParamLimits

0xc0c9,	// (0x0002ce08) popup_call2_audio_second_window_t4

0xc5f7,	// (0x0002d336) popup_call2_audio_first_window_t6_ParamLimits

0xc5f7,	// (0x0002d336) popup_call2_audio_first_window_t6

0xc88d,	// (0x0002d5cc) popup_call2_audio_out_window_t6_ParamLimits

0xc88d,	// (0x0002d5cc) popup_call2_audio_out_window_t6

0x3a01,	// (0x00024740) main_vitu_pane

0x7e52,	// (0x00028b91) aid_size_cell_itu_ParamLimits

0x7e52,	// (0x00028b91) aid_size_cell_itu

0x3c2b,	// (0x0002496a) bg_popup_window_pane_cp08_ParamLimits

0x3c2b,	// (0x0002496a) bg_popup_window_pane_cp08

0x7e68,	// (0x00028ba7) field_vitu_entry_pane_ParamLimits

0x7e68,	// (0x00028ba7) field_vitu_entry_pane

0x7e7b,	// (0x00028bba) grid_vitu_function_pane_ParamLimits

0x7e7b,	// (0x00028bba) grid_vitu_function_pane

0x7e90,	// (0x00028bcf) grid_vitu_itu_pane_ParamLimits

0x7e90,	// (0x00028bcf) grid_vitu_itu_pane

0x7ea6,	// (0x00028be5) cell_vitu_itu_pane_ParamLimits

0x7ea6,	// (0x00028be5) cell_vitu_itu_pane

0x7ec8,	// (0x00028c07) cell_vitu_function_pane_ParamLimits

0x7ec8,	// (0x00028c07) cell_vitu_function_pane

0x3c2b,	// (0x0002496a) bg_popup_sub_pane_cp08_ParamLimits

0x3c2b,	// (0x0002496a) bg_popup_sub_pane_cp08

0x7ee1,	// (0x00028c20) field_vitu_entry_pane_t1_ParamLimits

0x7ee1,	// (0x00028c20) field_vitu_entry_pane_t1

0xd822,	// (0x0002e561) field_vitu_entry_pane_t2_ParamLimits

0xd822,	// (0x0002e561) field_vitu_entry_pane_t2

0x0001,

0xf895,	// (0x000305d4) field_vitu_entry_pane_t_ParamLimits

0xf895,	// (0x000305d4) field_vitu_entry_pane_t

0xd83f,	// (0x0002e57e) bg_button_pane_cp05_ParamLimits

0xd83f,	// (0x0002e57e) bg_button_pane_cp05

0x7efd,	// (0x00028c3c) cell_vitu_itu_pane_g1

0x7f15,	// (0x00028c54) cell_vitu_itu_pane_t1_ParamLimits

0x7f15,	// (0x00028c54) cell_vitu_itu_pane_t1

0x7f27,	// (0x00028c66) cell_vitu_itu_pane_t2_ParamLimits

0x7f27,	// (0x00028c66) cell_vitu_itu_pane_t2

0x0002,

0xf89a,	// (0x000305d9) cell_vitu_itu_pane_t_ParamLimits

0xf89a,	// (0x000305d9) cell_vitu_itu_pane_t

0xd84d,	// (0x0002e58c) bg_button_pane_cp07

0x7f5c,	// (0x00028c9b) cell_vitu_function_pane_g1

0xaac5,	// (0x0002b804) main_calc_pane_g1

0x3a38,	// (0x00024777) aid_visual_content_pane

0x3a01,	// (0x00024740) main_vradio_pane

0x7f65,	// (0x00028ca4) main_vradio_pane_g1_ParamLimits

0x7f65,	// (0x00028ca4) main_vradio_pane_g1

0xd857,	// (0x0002e596) main_vradio_pane_g2_ParamLimits

0xd857,	// (0x0002e596) main_vradio_pane_g2

0x0001,

0xf8a1,	// (0x000305e0) main_vradio_pane_g_ParamLimits

0xf8a1,	// (0x000305e0) main_vradio_pane_g

0x7f7b,	// (0x00028cba) main_vradio_pane_t1_ParamLimits

0x7f7b,	// (0x00028cba) main_vradio_pane_t1

0x7f90,	// (0x00028ccf) main_vradio_pane_t2_ParamLimits

0x7f90,	// (0x00028ccf) main_vradio_pane_t2

0xd864,	// (0x0002e5a3) main_vradio_pane_t3_ParamLimits

0xd864,	// (0x0002e5a3) main_vradio_pane_t3

0x0002,

0xf8a6,	// (0x000305e5) main_vradio_pane_t_ParamLimits

0xf8a6,	// (0x000305e5) main_vradio_pane_t

0x7fa5,	// (0x00028ce4) vradio_rocker_control_pane_ParamLimits

0x7fa5,	// (0x00028ce4) vradio_rocker_control_pane

0x7fb7,	// (0x00028cf6) vradio_station_info_pane_ParamLimits

0x7fb7,	// (0x00028cf6) vradio_station_info_pane

0xd876,	// (0x0002e5b5) vradio_frequency_info_pane_ParamLimits

0xd876,	// (0x0002e5b5) vradio_frequency_info_pane

0xd276,	// (0x0002dfb5) vradio_station_info_pane_g1

0xd885,	// (0x0002e5c4) vradio_station_info_pane_t1_ParamLimits

0xd885,	// (0x0002e5c4) vradio_station_info_pane_t1

0xd8a7,	// (0x0002e5e6) vradio_station_info_pane_t2_ParamLimits

0xd8a7,	// (0x0002e5e6) vradio_station_info_pane_t2

0x0001,

0xf8ad,	// (0x000305ec) vradio_station_info_pane_t_ParamLimits

0xf8ad,	// (0x000305ec) vradio_station_info_pane_t

0xd8b9,	// (0x0002e5f8) vradio_tuning_pane

0xd8c1,	// (0x0002e600) vradio_rocker_control_pane_g1

0xd8c9,	// (0x0002e608) vradio_rocker_control_pane_g2

0xd8d1,	// (0x0002e610) vradio_rocker_control_pane_g3

0xd8d9,	// (0x0002e618) vradio_rocker_control_pane_g4

0xd8e1,	// (0x0002e620) vradio_rocker_control_pane_g5

0x0004,

0xf8b2,	// (0x000305f1) vradio_rocker_control_pane_g

0x7fc7,	// (0x00028d06) vradio_frequency_info_pane_g1

0xd8e9,	// (0x0002e628) vradio_frequency_info_pane_t1_ParamLimits

0xd8e9,	// (0x0002e628) vradio_frequency_info_pane_t1

0x7fd1,	// (0x00028d10) vradio_tuning_pane_g1

0x7fda,	// (0x00028d19) vradio_tuning_pane_t1

0x3a83,	// (0x000247c2) area_side_right_pane_ParamLimits

0x3a83,	// (0x000247c2) area_side_right_pane

0xcd48,	// (0x0002da87) status_small_pane_g1

0xcd50,	// (0x0002da8f) status_small_pane_g2

0xcd59,	// (0x0002da98) status_small_pane_g3

0xcd62,	// (0x0002daa1) status_small_pane_g4

0x0003,

0xf672,	// (0x000303b1) status_small_pane_g

0xcd6b,	// (0x0002daaa) status_small_pane_t1

0x3a01,	// (0x00024740) main_video3_pane

0xd8fd,	// (0x0002e63c) cams_zoom_vslider_pane

0xd905,	// (0x0002e644) image3_wide_pane_ParamLimits

0xd905,	// (0x0002e644) image3_wide_pane

0xd91f,	// (0x0002e65e) image3_wide_small_pane

0xd929,	// (0x0002e668) main_video3_pane_g1_ParamLimits

0xd929,	// (0x0002e668) main_video3_pane_g1

0xd945,	// (0x0002e684) main_video3_pane_g2_ParamLimits

0xd945,	// (0x0002e684) main_video3_pane_g2

0x0001,

0xf8bd,	// (0x000305fc) main_video3_pane_g_ParamLimits

0xf8bd,	// (0x000305fc) main_video3_pane_g

0xd961,	// (0x0002e6a0) main_video3_pane_t1_ParamLimits

0xd961,	// (0x0002e6a0) main_video3_pane_t1

0xd98c,	// (0x0002e6cb) main_video3_pane_t2_ParamLimits

0xd98c,	// (0x0002e6cb) main_video3_pane_t2

0xd9b7,	// (0x0002e6f6) main_video3_pane_t3_ParamLimits

0xd9b7,	// (0x0002e6f6) main_video3_pane_t3

0x0002,

0xf8c2,	// (0x00030601) main_video3_pane_t_ParamLimits

0xf8c2,	// (0x00030601) main_video3_pane_t

0xd9e2,	// (0x0002e721) cams_zoom_vslider_pane_g1

0xd9eb,	// (0x0002e72a) cams_zoom_vslider_pane_g2

0x0001,

0xf8c9,	// (0x00030608) cams_zoom_vslider_pane_g

0xd9f3,	// (0x0002e732) small_slider_vertical_pane

0xd276,	// (0x0002dfb5) small_slider_vertical_pane_g1

0xd276,	// (0x0002dfb5) small_slider_vertical_pane_g2

0xd9fb,	// (0x0002e73a) small_slider_vertical_pane_g3

0x0002,

0xf8ce,	// (0x0003060d) small_slider_vertical_pane_g

0x3a01,	// (0x00024740) main_hwr_training_pane

0xda04,	// (0x0002e743) hwr_training_instruct_pane_ParamLimits

0xda04,	// (0x0002e743) hwr_training_instruct_pane

0x7fe9,	// (0x00028d28) hwr_training_navi_pane_ParamLimits

0x7fe9,	// (0x00028d28) hwr_training_navi_pane

0x8000,	// (0x00028d3f) hwr_training_write_pane_ParamLimits

0x8000,	// (0x00028d3f) hwr_training_write_pane

0x3a01,	// (0x00024740) bg_frame_shadow_pane

0xda33,	// (0x0002e772) hwr_training_write_pane_g1

0xda3b,	// (0x0002e77a) hwr_training_write_pane_g2

0xda43,	// (0x0002e782) hwr_training_write_pane_g3

0xda4b,	// (0x0002e78a) hwr_training_write_pane_g4

0xda53,	// (0x0002e792) hwr_training_write_pane_g5

0xda5b,	// (0x0002e79a) hwr_training_write_pane_g6

0xda63,	// (0x0002e7a2) hwr_training_write_pane_g7

0x0006,

0xf8d5,	// (0x00030614) hwr_training_write_pane_g

0xda6b,	// (0x0002e7aa) hwr_training_navi_pane_g1_ParamLimits

0xda6b,	// (0x0002e7aa) hwr_training_navi_pane_g1

0xda7d,	// (0x0002e7bc) hwr_training_navi_pane_g2_ParamLimits

0xda7d,	// (0x0002e7bc) hwr_training_navi_pane_g2

0xda8f,	// (0x0002e7ce) hwr_training_navi_pane_g3_ParamLimits

0xda8f,	// (0x0002e7ce) hwr_training_navi_pane_g3

0xda9f,	// (0x0002e7de) hwr_training_navi_pane_g4_ParamLimits

0xda9f,	// (0x0002e7de) hwr_training_navi_pane_g4

0x0004,

0xf8e4,	// (0x00030623) hwr_training_navi_pane_g_ParamLimits

0xf8e4,	// (0x00030623) hwr_training_navi_pane_g

0xdaac,	// (0x0002e7eb) hwr_training_navi_pane_t1

0x8033,	// (0x00028d72) list_single_hwr_training_instruct_pane_ParamLimits

0x8033,	// (0x00028d72) list_single_hwr_training_instruct_pane

0xdaba,	// (0x0002e7f9) list_single_hwr_training_instruct_pane_t1

0xd1b6,	// (0x0002def5) bg_frame_shadow_pane_g1

0xdac9,	// (0x0002e808) bg_frame_shadow_pane_g2

0xdad1,	// (0x0002e810) bg_frame_shadow_pane_g3

0xdad9,	// (0x0002e818) bg_frame_shadow_pane_g4

0xdae1,	// (0x0002e820) bg_frame_shadow_pane_g5

0xdae9,	// (0x0002e828) bg_frame_shadow_pane_g6

0xdaf1,	// (0x0002e830) bg_frame_shadow_pane_g7

0x4791,	// (0x000254d0) bg_frame_shadow_pane_g8

0x0007,

0xf8ef,	// (0x0003062e) bg_frame_shadow_pane_g

0x3a01,	// (0x00024740) main_video_tele_dialer_pane

0x3035,	// (0x00023d74) aid_size_cell_video_keypad_ParamLimits

0x3035,	// (0x00023d74) aid_size_cell_video_keypad

0x304f,	// (0x00023d8e) grid_video_dialer_keypad_pane_ParamLimits

0x304f,	// (0x00023d8e) grid_video_dialer_keypad_pane

0x3091,	// (0x00023dd0) video_down_pane_cp_ParamLimits

0x3091,	// (0x00023dd0) video_down_pane_cp

0x30a5,	// (0x00023de4) cell_video_dialer_keypad_pane_ParamLimits

0x30a5,	// (0x00023de4) cell_video_dialer_keypad_pane

0xdaf9,	// (0x0002e838) bg_button_pane_cp08_ParamLimits

0xdaf9,	// (0x0002e838) bg_button_pane_cp08

0x8067,	// (0x00028da6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8067,	// (0x00028da6) cell_video_dialer_keypad_pane_g1

0x787b,	// (0x000285ba) mup3_rocker2_pane_ParamLimits

0x787b,	// (0x000285ba) mup3_rocker2_pane

0xd276,	// (0x0002dfb5) mup3_rocker2_pane_g1

0x69dc,	// (0x0002771b) main_dialer2_pane

0x3a01,	// (0x00024740) main_mp4_pane

0xdb0d,	// (0x0002e84c) main_mp4_pane_g1_ParamLimits

0xdb0d,	// (0x0002e84c) main_mp4_pane_g1

0xdb0d,	// (0x0002e84c) main_mp4_pane_g2_ParamLimits

0xdb0d,	// (0x0002e84c) main_mp4_pane_g2

0x30c7,	// (0x00023e06) main_mp4_pane_g3_ParamLimits

0x30c7,	// (0x00023e06) main_mp4_pane_g3

0xdb1b,	// (0x0002e85a) main_mp4_pane_g4_ParamLimits

0xdb1b,	// (0x0002e85a) main_mp4_pane_g4

0xdb49,	// (0x0002e888) main_mp4_pane_g5_ParamLimits

0xdb49,	// (0x0002e888) main_mp4_pane_g5

0x0005,

0xf90f,	// (0x0003064e) main_mp4_pane_g_ParamLimits

0xf90f,	// (0x0003064e) main_mp4_pane_g

0xdba5,	// (0x0002e8e4) main_mp4_pane_t1_ParamLimits

0xdba5,	// (0x0002e8e4) main_mp4_pane_t1

0xdbfd,	// (0x0002e93c) main_mp4_pane_t2_ParamLimits

0xdbfd,	// (0x0002e93c) main_mp4_pane_t2

0xdc4f,	// (0x0002e98e) main_mp4_pane_t3_ParamLimits

0xdc4f,	// (0x0002e98e) main_mp4_pane_t3

0xdc75,	// (0x0002e9b4) main_mp4_pane_t4_ParamLimits

0xdc75,	// (0x0002e9b4) main_mp4_pane_t4

0x0003,

0xf91c,	// (0x0003065b) main_mp4_pane_t_ParamLimits

0xf91c,	// (0x0003065b) main_mp4_pane_t

0xdcb5,	// (0x0002e9f4) mp4_progress_pane_ParamLimits

0xdcb5,	// (0x0002e9f4) mp4_progress_pane

0xdcf9,	// (0x0002ea38) mp4_rocker_pane_ParamLimits

0xdcf9,	// (0x0002ea38) mp4_rocker_pane

0xdd1f,	// (0x0002ea5e) mp4_progress_pane_t1

0xdd36,	// (0x0002ea75) mp4_progress_pane_t2

0x0001,

0xf925,	// (0x00030664) mp4_progress_pane_t

0xdd4d,	// (0x0002ea8c) mup_progress_pane_cp04

0xdd59,	// (0x0002ea98) mp4_rocker_pane_g1

0x30f7,	// (0x00023e36) aid_cell_size_keypad2_ParamLimits

0x30f7,	// (0x00023e36) aid_cell_size_keypad2

0x3111,	// (0x00023e50) dialer2_ne_pane_ParamLimits

0x3111,	// (0x00023e50) dialer2_ne_pane

0x3126,	// (0x00023e65) grid_dialer2_keypad_pane_ParamLimits

0x3126,	// (0x00023e65) grid_dialer2_keypad_pane

0xd063,	// (0x0002dda2) bg_popup_call_pane_cp07_ParamLimits

0xd063,	// (0x0002dda2) bg_popup_call_pane_cp07

0x80a2,	// (0x00028de1) dialer2_ne_pane_t1_ParamLimits

0x80a2,	// (0x00028de1) dialer2_ne_pane_t1

0x313c,	// (0x00023e7b) cell_dialer2_keypad_pane_ParamLimits

0x313c,	// (0x00023e7b) cell_dialer2_keypad_pane

0xdd75,	// (0x0002eab4) bg_button_pane_pane_cp04_ParamLimits

0xdd75,	// (0x0002eab4) bg_button_pane_pane_cp04

0x80df,	// (0x00028e1e) cell_dialer2_keypad_pane_g1_ParamLimits

0x80df,	// (0x00028e1e) cell_dialer2_keypad_pane_g1

0x4e86,	// (0x00025bc5) aid_placing_vt_set_content_ParamLimits

0x4e86,	// (0x00025bc5) aid_placing_vt_set_content

0x4ea4,	// (0x00025be3) aid_placing_vt_set_title_ParamLimits

0x4ea4,	// (0x00025be3) aid_placing_vt_set_title

0x3a01,	// (0x00024740) main_image3_pane

0x31a2,	// (0x00023ee1) area_side_right_pane_cp01_ParamLimits

0x31a2,	// (0x00023ee1) area_side_right_pane_cp01

0xdb0d,	// (0x0002e84c) main_image3_pane_g1_ParamLimits

0xdb0d,	// (0x0002e84c) main_image3_pane_g1

0x31b9,	// (0x00023ef8) main_image3_pane_g2_ParamLimits

0x31b9,	// (0x00023ef8) main_image3_pane_g2

0x31df,	// (0x00023f1e) main_image3_pane_g3_ParamLimits

0x31df,	// (0x00023f1e) main_image3_pane_g3

0x3205,	// (0x00023f44) main_image3_pane_g4_ParamLimits

0x3205,	// (0x00023f44) main_image3_pane_g4

0x0003,

0xf934,	// (0x00030673) main_image3_pane_g_ParamLimits

0xf934,	// (0x00030673) main_image3_pane_g

0x322b,	// (0x00023f6a) main_image3_pane_t1_ParamLimits

0x322b,	// (0x00023f6a) main_image3_pane_t1

0x3283,	// (0x00023fc2) main_image3_pane_t2_ParamLimits

0x3283,	// (0x00023fc2) main_image3_pane_t2

0x32d5,	// (0x00024014) main_image3_pane_t3_ParamLimits

0x32d5,	// (0x00024014) main_image3_pane_t3

0x0003,

0xf93d,	// (0x0003067c) main_image3_pane_t_ParamLimits

0xf93d,	// (0x0003067c) main_image3_pane_t

0x3c2b,	// (0x0002496a) grid_sctrl_middle_pane_cp01_ParamLimits

0x3c2b,	// (0x0002496a) grid_sctrl_middle_pane_cp01

0x812a,	// (0x00028e69) cell_sctrl_middle_pane_cp01_ParamLimits

0x812a,	// (0x00028e69) cell_sctrl_middle_pane_cp01

0x8147,	// (0x00028e86) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8147,	// (0x00028e86) cell_sctrl_middle_pane_cp01_g1

0x3a01,	// (0x00024740) main_call4_pane

0x815d,	// (0x00028e9c) aid_size_button_call4_ParamLimits

0x815d,	// (0x00028e9c) aid_size_button_call4

0x818a,	// (0x00028ec9) call4_windows_pane_ParamLimits

0x818a,	// (0x00028ec9) call4_windows_pane

0x81a0,	// (0x00028edf) grid_call4_button_pane_ParamLimits

0x81a0,	// (0x00028edf) grid_call4_button_pane

0xddcb,	// (0x0002eb0a) call4_windows_conf_pane

0x81bf,	// (0x00028efe) popup_call4_audio_first_window_ParamLimits

0x81bf,	// (0x00028efe) popup_call4_audio_first_window

0x81df,	// (0x00028f1e) popup_call4_audio_second_window_ParamLimits

0x81df,	// (0x00028f1e) popup_call4_audio_second_window

0xddfe,	// (0x0002eb3d) popup_call4_audio_wait_window_ParamLimits

0xddfe,	// (0x0002eb3d) popup_call4_audio_wait_window

0x81f1,	// (0x00028f30) cell_call4_button_pane_ParamLimits

0x81f1,	// (0x00028f30) cell_call4_button_pane

0x8216,	// (0x00028f55) bg_button_pane_cp09_ParamLimits

0x8216,	// (0x00028f55) bg_button_pane_cp09

0x8222,	// (0x00028f61) cell_call4_button_pane_g1_ParamLimits

0x8222,	// (0x00028f61) cell_call4_button_pane_g1

0x8248,	// (0x00028f87) cell_call4_button_pane_t1_ParamLimits

0x8248,	// (0x00028f87) cell_call4_button_pane_t1

0xde44,	// (0x0002eb83) popup_call4_audio_conf_window_ParamLimits

0xde44,	// (0x0002eb83) popup_call4_audio_conf_window

0x78d5,	// (0x00028614) mup3_progress_pane_t1_ParamLimits

0x78eb,	// (0x0002862a) mup3_progress_pane_t2_ParamLimits

0xd594,	// (0x0002e2d3) mup3_progress_pane_t3_ParamLimits

0xf816,	// (0x00030555) mup3_progress_pane_t_ParamLimits

0xd5ab,	// (0x0002e2ea) mup_progress_pane_cp03_ParamLimits

0x7e4a,	// (0x00028b89) mup3_control_keys_pane_g4_copy1

0xdce3,	// (0x0002ea22) mp4_rocker2_pane_ParamLimits

0xdce3,	// (0x0002ea22) mp4_rocker2_pane

0xde58,	// (0x0002eb97) mp4_rocker2_pane_g1

0xde60,	// (0x0002eb9f) mp4_rocker2_pane_g2

0xde68,	// (0x0002eba7) mp4_rocker2_pane_g3

0xde70,	// (0x0002ebaf) mp4_rocker2_pane_g4

0xde78,	// (0x0002ebb7) mp4_rocker2_pane_g5

0x0004,

0xf946,	// (0x00030685) mp4_rocker2_pane_g

0x3a01,	// (0x00024740) main_camera4_pane

0x3a01,	// (0x00024740) main_video4_pane

0x3063,	// (0x00023da2) main_video_tele_dialer_pane_t1_ParamLimits

0x3063,	// (0x00023da2) main_video_tele_dialer_pane_t1

0x307a,	// (0x00023db9) main_video_tele_dialer_pane_t2_ParamLimits

0x307a,	// (0x00023db9) main_video_tele_dialer_pane_t2

0x0001,

0xf900,	// (0x0003063f) main_video_tele_dialer_pane_t_ParamLimits

0xf900,	// (0x0003063f) main_video_tele_dialer_pane_t

0x3367,	// (0x000240a6) cam4_autofocus_pane_ParamLimits

0x3367,	// (0x000240a6) cam4_autofocus_pane

0x337b,	// (0x000240ba) cam4_image_uncrop_pane_ParamLimits

0x337b,	// (0x000240ba) cam4_image_uncrop_pane

0x3392,	// (0x000240d1) cam4_indicators_pane_ParamLimits

0x3392,	// (0x000240d1) cam4_indicators_pane

0x33b6,	// (0x000240f5) main_camera4_pane_g1_ParamLimits

0x33b6,	// (0x000240f5) main_camera4_pane_g1

0x33c2,	// (0x00024101) main_camera4_pane_g2_ParamLimits

0x33c2,	// (0x00024101) main_camera4_pane_g2

0x33ce,	// (0x0002410d) main_camera4_pane_g3_ParamLimits

0x33ce,	// (0x0002410d) main_camera4_pane_g3

0x33da,	// (0x00024119) main_camera4_pane_g4_ParamLimits

0x33da,	// (0x00024119) main_camera4_pane_g4

0x33e6,	// (0x00024125) main_camera4_pane_g5_ParamLimits

0x33e6,	// (0x00024125) main_camera4_pane_g5

0x0005,

0xf951,	// (0x00030690) main_camera4_pane_g_ParamLimits

0xf951,	// (0x00030690) main_camera4_pane_g

0x3403,	// (0x00024142) main_camera4_pane_t1_ParamLimits

0x3403,	// (0x00024142) main_camera4_pane_t1

0x3434,	// (0x00024173) bg_tb_trans_pane_cp06

0x3442,	// (0x00024181) cam4_indicators_pane_g1

0x344f,	// (0x0002418e) cam4_indicators_pane_g2

0x0002,

0xf963,	// (0x000306a2) cam4_indicators_pane_g

0x3467,	// (0x000241a6) cam4_indicators_pane_t1

0x348b,	// (0x000241ca) main_video4_pane_g1_ParamLimits

0x348b,	// (0x000241ca) main_video4_pane_g1

0x349d,	// (0x000241dc) main_video4_pane_g2_ParamLimits

0x349d,	// (0x000241dc) main_video4_pane_g2

0x349d,	// (0x000241dc) main_video4_pane_g3_ParamLimits

0x349d,	// (0x000241dc) main_video4_pane_g3

0x34ac,	// (0x000241eb) main_video4_pane_g4_ParamLimits

0x34ac,	// (0x000241eb) main_video4_pane_g4

0x0004,

0xf96a,	// (0x000306a9) main_video4_pane_g_ParamLimits

0xf96a,	// (0x000306a9) main_video4_pane_g

0x34ca,	// (0x00024209) vid4_indicators_pane_ParamLimits

0x34ca,	// (0x00024209) vid4_indicators_pane

0x34f2,	// (0x00024231) video4_image_uncrop_cif_pane_ParamLimits

0x34f2,	// (0x00024231) video4_image_uncrop_cif_pane

0x350a,	// (0x00024249) video4_image_uncrop_nhd_pane_ParamLimits

0x350a,	// (0x00024249) video4_image_uncrop_nhd_pane

0x351e,	// (0x0002425d) video4_image_uncrop_vga_pane_ParamLimits

0x351e,	// (0x0002425d) video4_image_uncrop_vga_pane

0xdea0,	// (0x0002ebdf) bg_tb_trans_pane_cp07

0x3442,	// (0x00024181) vid4_indicators_pane_g1

0x3536,	// (0x00024275) vid4_indicators_pane_g2

0x3543,	// (0x00024282) vid4_indicators_pane_g3

0x0004,

0xf975,	// (0x000306b4) vid4_indicators_pane_g

0x355c,	// (0x0002429b) vid4_indicators_pane_t1

0x8272,	// (0x00028fb1) cam4_autofocus_pane_g1

0x827a,	// (0x00028fb9) cam4_autofocus_pane_g2

0x8282,	// (0x00028fc1) cam4_autofocus_pane_g3

0x0002,

0xf980,	// (0x000306bf) cam4_autofocus_pane_g

0x828a,	// (0x00028fc9) cam4_autofocus_pane_g3_copy1

0x804b,	// (0x00028d8a) video_down_pane_cp_t1

0x8059,	// (0x00028d98) video_down_pane_cp_t2

0x0001,

0xf905,	// (0x00030644) video_down_pane_cp_t

0x3c2b,	// (0x0002496a) popup_vitu2_window_ParamLimits

0x3c2b,	// (0x0002496a) popup_vitu2_window

0x356e,	// (0x000242ad) aid_size_cell2_itu2_ParamLimits

0x356e,	// (0x000242ad) aid_size_cell2_itu2

0x3594,	// (0x000242d3) aid_size_cell_itu2_ParamLimits

0x3594,	// (0x000242d3) aid_size_cell_itu2

0x35e6,	// (0x00024325) bg_popup_window_pane_cp09_ParamLimits

0x35e6,	// (0x00024325) bg_popup_window_pane_cp09

0x35f4,	// (0x00024333) field_vitu2_entry_pane_ParamLimits

0x35f4,	// (0x00024333) field_vitu2_entry_pane

0x360e,	// (0x0002434d) grid_vitu2_function_pane_ParamLimits

0x360e,	// (0x0002434d) grid_vitu2_function_pane

0x3649,	// (0x00024388) grid_vitu2_itu_pane_ParamLimits

0x3649,	// (0x00024388) grid_vitu2_itu_pane

0x36ae,	// (0x000243ed) cell_vitu2_itu_pane_ParamLimits

0x36ae,	// (0x000243ed) cell_vitu2_itu_pane

0x36d0,	// (0x0002440f) cell_vitu2_function_pane_ParamLimits

0x36d0,	// (0x0002440f) cell_vitu2_function_pane

0xdeae,	// (0x0002ebed) bg_popup_call_pane_cp08_ParamLimits

0xdeae,	// (0x0002ebed) bg_popup_call_pane_cp08

0xdec7,	// (0x0002ec06) field_vitu2_entry_pane_g1

0xded3,	// (0x0002ec12) field_vitu2_entry_pane_g2

0x0002,

0xf987,	// (0x000306c6) field_vitu2_entry_pane_g

0x8292,	// (0x00028fd1) field_vitu2_entry_pane_t1_ParamLimits

0x8292,	// (0x00028fd1) field_vitu2_entry_pane_t1

0xdeed,	// (0x0002ec2c) field_vitu2_entry_pane_t2_ParamLimits

0xdeed,	// (0x0002ec2c) field_vitu2_entry_pane_t2

0x0001,

0xf98e,	// (0x000306cd) field_vitu2_entry_pane_t_ParamLimits

0xf98e,	// (0x000306cd) field_vitu2_entry_pane_t

0x370f,	// (0x0002444e) bg_button_pane_cp010_ParamLimits

0x370f,	// (0x0002444e) bg_button_pane_cp010

0x371d,	// (0x0002445c) cell_vitu2_itu_pane_g1

0x373b,	// (0x0002447a) cell_vitu2_itu_pane_t1_ParamLimits

0x373b,	// (0x0002447a) cell_vitu2_itu_pane_t1

0x37a1,	// (0x000244e0) cell_vitu2_itu_pane_t2_ParamLimits

0x37a1,	// (0x000244e0) cell_vitu2_itu_pane_t2

0x0002,

0xf998,	// (0x000306d7) cell_vitu2_itu_pane_t_ParamLimits

0xf998,	// (0x000306d7) cell_vitu2_itu_pane_t

0xdf12,	// (0x0002ec51) bg_button_pane_cp011

0x387d,	// (0x000245bc) cell_vitu2_function_pane_g1

0x3a01,	// (0x00024740) main_myfav_hc_pane

0x3321,	// (0x00024060) popup_image3_note_pane_ParamLimits

0x3321,	// (0x00024060) popup_image3_note_pane

0x333b,	// (0x0002407a) popup_image3_tool_bar_pane_ParamLimits

0x333b,	// (0x0002407a) popup_image3_tool_bar_pane

0x3825,	// (0x00024564) cell_vitu2_itu_pane_t3_ParamLimits

0x3825,	// (0x00024564) cell_vitu2_itu_pane_t3

0x3a01,	// (0x00024740) bg_popup_trans_pane

0xdf20,	// (0x0002ec5f) grid_image3_tool_bar_pane

0xdf2a,	// (0x0002ec69) bg_popup_trans_pane_g1

0xafe0,	// (0x0002bd1f) bg_popup_trans_pane_g2

0xdf32,	// (0x0002ec71) bg_popup_trans_pane_g3

0xdf3a,	// (0x0002ec79) bg_popup_trans_pane_g4

0xdf42,	// (0x0002ec81) bg_popup_trans_pane_g5

0xdf4a,	// (0x0002ec89) bg_popup_trans_pane_g6

0xdf52,	// (0x0002ec91) bg_popup_trans_pane_g7

0xdf5a,	// (0x0002ec99) bg_popup_trans_pane_g8

0xafc0,	// (0x0002bcff) bg_popup_trans_pane_g9

0x0008,

0xf99f,	// (0x000306de) bg_popup_trans_pane_g

0xabac,	// (0x0002b8eb) cell_image3_tool_bar_pane_ParamLimits

0xabac,	// (0x0002b8eb) cell_image3_tool_bar_pane

0xd276,	// (0x0002dfb5) cell_image3_tool_bar_pane_g1

0x3a01,	// (0x00024740) bg_popup_trans_pane_cp1

0xdf62,	// (0x0002eca1) popup_image3_note_pane_t1

0xdf70,	// (0x0002ecaf) popup_image3_note_pane_t2

0xdf7e,	// (0x0002ecbd) popup_image3_note_pane_t3

0x0002,

0xf9b2,	// (0x000306f1) popup_image3_note_pane_t

0xdf8c,	// (0x0002eccb) popup_image3_note_pane_t3_copy1

0x82ae,	// (0x00028fed) bg_myfav_hc_instruction_pane_ParamLimits

0x82ae,	// (0x00028fed) bg_myfav_hc_instruction_pane

0x82c0,	// (0x00028fff) cell_myfav_contact_pane_ParamLimits

0x82c0,	// (0x00028fff) cell_myfav_contact_pane

0x82da,	// (0x00029019) cell_myfav_contact_pane_cp1_ParamLimits

0x82da,	// (0x00029019) cell_myfav_contact_pane_cp1

0x82f0,	// (0x0002902f) cell_myfav_contact_pane_cp2_ParamLimits

0x82f0,	// (0x0002902f) cell_myfav_contact_pane_cp2

0x8306,	// (0x00029045) cell_myfav_contact_pane_cp3_ParamLimits

0x8306,	// (0x00029045) cell_myfav_contact_pane_cp3

0x831b,	// (0x0002905a) cell_myfav_contact_pane_cp4_ParamLimits

0x831b,	// (0x0002905a) cell_myfav_contact_pane_cp4

0x832f,	// (0x0002906e) cell_myfav_contact_pane_cp5_ParamLimits

0x832f,	// (0x0002906e) cell_myfav_contact_pane_cp5

0x8343,	// (0x00029082) cell_myfav_contact_pane_cp6_ParamLimits

0x8343,	// (0x00029082) cell_myfav_contact_pane_cp6

0x8357,	// (0x00029096) cell_myfav_contact_pane_cp7_ParamLimits

0x8357,	// (0x00029096) cell_myfav_contact_pane_cp7

0xdf9a,	// (0x0002ecd9) listscroll_gen_pane_cp05

0x836f,	// (0x000290ae) main_myfav_hc_pane_g1_ParamLimits

0x836f,	// (0x000290ae) main_myfav_hc_pane_g1

0x8385,	// (0x000290c4) main_myfav_hc_pane_g2_ParamLimits

0x8385,	// (0x000290c4) main_myfav_hc_pane_g2

0x0002,

0xf9b9,	// (0x000306f8) main_myfav_hc_pane_g_ParamLimits

0xf9b9,	// (0x000306f8) main_myfav_hc_pane_g

0x83af,	// (0x000290ee) main_myfav_hc_pane_t1_ParamLimits

0x83af,	// (0x000290ee) main_myfav_hc_pane_t1

0xdfa3,	// (0x0002ece2) main_myfav_hc_pane_t2_ParamLimits

0xdfa3,	// (0x0002ece2) main_myfav_hc_pane_t2

0xdfb5,	// (0x0002ecf4) main_myfav_hc_pane_t3_ParamLimits

0xdfb5,	// (0x0002ecf4) main_myfav_hc_pane_t3

0x83c4,	// (0x00029103) main_myfav_hc_pane_t4_ParamLimits

0x83c4,	// (0x00029103) main_myfav_hc_pane_t4

0x0004,

0xf9c0,	// (0x000306ff) main_myfav_hc_pane_t_ParamLimits

0xf9c0,	// (0x000306ff) main_myfav_hc_pane_t

0xd276,	// (0x0002dfb5) bg_myfav_hc_instruction_pane_g1

0xdfc7,	// (0x0002ed06) cell_myfav_contact_pane_g1_ParamLimits

0xdfc7,	// (0x0002ed06) cell_myfav_contact_pane_g1

0xdfc7,	// (0x0002ed06) cell_myfav_contact_pane_g2_ParamLimits

0xdfc7,	// (0x0002ed06) cell_myfav_contact_pane_g2

0xdfd3,	// (0x0002ed12) cell_myfav_contact_pane_g3_ParamLimits

0xdfd3,	// (0x0002ed12) cell_myfav_contact_pane_g3

0xd57e,	// (0x0002e2bd) cell_myfav_contact_pane_g4_ParamLimits

0xd57e,	// (0x0002e2bd) cell_myfav_contact_pane_g4

0xdfe0,	// (0x0002ed1f) cell_myfav_contact_pane_g5_ParamLimits

0xdfe0,	// (0x0002ed1f) cell_myfav_contact_pane_g5

0x0004,

0xf9cb,	// (0x0003070a) cell_myfav_contact_pane_g_ParamLimits

0xf9cb,	// (0x0003070a) cell_myfav_contact_pane_g

0x839b,	// (0x000290da) main_myfav_hc_pane_g3_ParamLimits

0x839b,	// (0x000290da) main_myfav_hc_pane_g3

0x3b8b,	// (0x000248ca) popup_adpt_find_window

0x83e8,	// (0x00029127) afind_page_pane_ParamLimits

0x83e8,	// (0x00029127) afind_page_pane

0x83fd,	// (0x0002913c) aid_size_cell_afind_ParamLimits

0x83fd,	// (0x0002913c) aid_size_cell_afind

0x841b,	// (0x0002915a) bg_popup_sub_pane_cp09_ParamLimits

0x841b,	// (0x0002915a) bg_popup_sub_pane_cp09

0x8428,	// (0x00029167) find_pane_cp01_ParamLimits

0x8428,	// (0x00029167) find_pane_cp01

0xdfec,	// (0x0002ed2b) grid_afind_control_pane_ParamLimits

0xdfec,	// (0x0002ed2b) grid_afind_control_pane

0x8435,	// (0x00029174) grid_afind_pane_ParamLimits

0x8435,	// (0x00029174) grid_afind_pane

0x8453,	// (0x00029192) cell_afind_pane_ParamLimits

0x8453,	// (0x00029192) cell_afind_pane

0xd276,	// (0x0002dfb5) afind_page_pane_g1

0x84a0,	// (0x000291df) afind_page_pane_g2

0x84a9,	// (0x000291e8) afind_page_pane_g3

0x0002,

0xf9d6,	// (0x00030715) afind_page_pane_g

0x84b2,	// (0x000291f1) afind_page_pane_t1

0xe000,	// (0x0002ed3f) cell_afind_grid_control_pane_ParamLimits

0xe000,	// (0x0002ed3f) cell_afind_grid_control_pane

0xdd75,	// (0x0002eab4) bg_button_pane_cp69_ParamLimits

0xdd75,	// (0x0002eab4) bg_button_pane_cp69

0x84d2,	// (0x00029211) cell_afind_pane_g1_ParamLimits

0x84d2,	// (0x00029211) cell_afind_pane_g1

0x84df,	// (0x0002921e) cell_afind_pane_t1_ParamLimits

0x84df,	// (0x0002921e) cell_afind_pane_t1

0xad24,	// (0x0002ba63) bg_button_pane_cp72

0xe00f,	// (0x0002ed4e) cell_afind_grid_control_pane_g1

0x657e,	// (0x000272bd) aid_image_placing_area_ParamLimits

0x657e,	// (0x000272bd) aid_image_placing_area

0xd80a,	// (0x0002e549) field_vitu_entry_pane_g1_ParamLimits

0xd80a,	// (0x0002e549) field_vitu_entry_pane_g1

0xd816,	// (0x0002e555) field_vitu_entry_pane_g2_ParamLimits

0xd816,	// (0x0002e555) field_vitu_entry_pane_g2

0x0001,

0xf890,	// (0x000305cf) field_vitu_entry_pane_g_ParamLimits

0xf890,	// (0x000305cf) field_vitu_entry_pane_g

0x7efd,	// (0x00028c3c) cell_vitu_itu_pane_g1_ParamLimits

0x7f3f,	// (0x00028c7e) cell_vitu_itu_pane_t3_ParamLimits

0x7f3f,	// (0x00028c7e) cell_vitu_itu_pane_t3

0xdd1f,	// (0x0002ea5e) mp4_progress_pane_t1_ParamLimits

0xdd36,	// (0x0002ea75) mp4_progress_pane_t2_ParamLimits

0xf925,	// (0x00030664) mp4_progress_pane_t_ParamLimits

0xdd4d,	// (0x0002ea8c) mup_progress_pane_cp04_ParamLimits

0x83d6,	// (0x00029115) main_myfav_hc_pane_t5_ParamLimits

0x83d6,	// (0x00029115) main_myfav_hc_pane_t5

0x3a48,	// (0x00024787) aid_zoom_text_primary

0x3b8b,	// (0x000248ca) popup_adpt_find_window_ParamLimits

0x3c2b,	// (0x0002496a) main_cam_set_pane

0x33a4,	// (0x000240e3) cam4_zoom_pane_ParamLimits

0x33a4,	// (0x000240e3) cam4_zoom_pane

0x84f1,	// (0x00029230) main_cam_set_pane_g1_ParamLimits

0x84f1,	// (0x00029230) main_cam_set_pane_g1

0x84ff,	// (0x0002923e) main_cam_set_pane_g2_ParamLimits

0x84ff,	// (0x0002923e) main_cam_set_pane_g2

0x0001,

0xf9dd,	// (0x0003071c) main_cam_set_pane_g_ParamLimits

0xf9dd,	// (0x0003071c) main_cam_set_pane_g

0x851e,	// (0x0002925d) main_cam_set_pane_t1_ParamLimits

0x851e,	// (0x0002925d) main_cam_set_pane_t1

0x8530,	// (0x0002926f) main_cset_listscroll_pane_ParamLimits

0x8530,	// (0x0002926f) main_cset_listscroll_pane

0x854e,	// (0x0002928d) main_cset_slider_pane_ParamLimits

0x854e,	// (0x0002928d) main_cset_slider_pane

0xe020,	// (0x0002ed5f) main_cset_list_pane_ParamLimits

0xe020,	// (0x0002ed5f) main_cset_list_pane

0xe030,	// (0x0002ed6f) scroll_pane_cp028

0x8572,	// (0x000292b1) aid_area_touch_slider

0x858e,	// (0x000292cd) cset_slider_pane

0x85b8,	// (0x000292f7) main_cset_slider_pane_g1

0x85cd,	// (0x0002930c) main_cset_slider_pane_g2

0x0011,

0xf9e2,	// (0x00030721) main_cset_slider_pane_g

0xe069,	// (0x0002eda8) main_cset_slider_pane_t1

0x8689,	// (0x000293c8) main_cset_slider_pane_t2

0x86a3,	// (0x000293e2) main_cset_slider_pane_t3

0x86bd,	// (0x000293fc) main_cset_slider_pane_t4

0x86d7,	// (0x00029416) main_cset_slider_pane_t5

0x86f1,	// (0x00029430) main_cset_slider_pane_t6

0x8706,	// (0x00029445) main_cset_slider_pane_t7

0x000e,

0xfa07,	// (0x00030746) main_cset_slider_pane_t

0x880a,	// (0x00029549) cset_list_set_pane_ParamLimits

0x880a,	// (0x00029549) cset_list_set_pane

0x881b,	// (0x0002955a) aid_position_infowindow_above

0x8823,	// (0x00029562) aid_position_infowindow_below

0x882b,	// (0x0002956a) cset_list_set_pane_g1_ParamLimits

0x882b,	// (0x0002956a) cset_list_set_pane_g1

0xe109,	// (0x0002ee48) cset_list_set_pane_g3_ParamLimits

0xe109,	// (0x0002ee48) cset_list_set_pane_g3

0x0001,

0xfa26,	// (0x00030765) cset_list_set_pane_g_ParamLimits

0xfa26,	// (0x00030765) cset_list_set_pane_g

0xe118,	// (0x0002ee57) cset_list_set_pane_t1_ParamLimits

0xe118,	// (0x0002ee57) cset_list_set_pane_t1

0x3c2b,	// (0x0002496a) list_highlight_pane_cp021_ParamLimits

0x3c2b,	// (0x0002496a) list_highlight_pane_cp021

0xb9e1,	// (0x0002c720) cset_slider_pane_g1

0xb9f3,	// (0x0002c732) cset_slider_pane_g2

0xb9ea,	// (0x0002c729) cset_slider_pane_g3

0x0002,

0xfa2b,	// (0x0003076a) cset_slider_pane_g

0xe12d,	// (0x0002ee6c) aid_area_touch_cam4_zoom

0xe135,	// (0x0002ee74) cam4_zoom_cont_pane

0xe13d,	// (0x0002ee7c) cam4_zoom_pane_g1

0xe145,	// (0x0002ee84) cam4_zoom_pane_g2

0x3891,	// (0x000245d0) cam4_zoom_pane_g3

0x0002,

0xfa32,	// (0x00030771) cam4_zoom_pane_g

0xe14d,	// (0x0002ee8c) cam4_zoom_cont_pane_g1

0xe156,	// (0x0002ee95) cam4_zoom_cont_pane_g2

0xe15f,	// (0x0002ee9e) cam4_zoom_cont_pane_g3

0x0002,

0xfa39,	// (0x00030778) cam4_zoom_cont_pane_g

0x817b,	// (0x00028eba) call4_image_pane_ParamLimits

0x817b,	// (0x00028eba) call4_image_pane

0xddcb,	// (0x0002eb0a) call4_windows_conf_pane_ParamLimits

0xddde,	// (0x0002eb1d) popup_call4_audio_in_window_ParamLimits

0xddde,	// (0x0002eb1d) popup_call4_audio_in_window

0x3a01,	// (0x00024740) bg_popup_call2_act_pane_cp02

0xde3c,	// (0x0002eb7b) call4_list_conf_pane

0xd276,	// (0x0002dfb5) call4_image_pane_g1

0xd276,	// (0x0002dfb5) call4_image_pane_g2

0x0001,

0xf756,	// (0x00030495) call4_image_pane_g

0xe168,	// (0x0002eea7) list_single_graphic_popup_conf4_pane_ParamLimits

0xe168,	// (0x0002eea7) list_single_graphic_popup_conf4_pane

0x3a01,	// (0x00024740) list_highlight_pane_cp022

0xe17b,	// (0x0002eeba) list_single_graphic_popup_conf4_pane_g1

0xb626,	// (0x0002c365) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa40,	// (0x0003077f) list_single_graphic_popup_conf4_pane_g

0xe183,	// (0x0002eec2) list_single_graphic_popup_conf4_pane_t1

0x4f5b,	// (0x00025c9a) popup_vtel_slider_window_ParamLimits

0x4f5b,	// (0x00025c9a) popup_vtel_slider_window

0xdd63,	// (0x0002eaa2) dialer2_ne_pane_t2_ParamLimits

0xdd63,	// (0x0002eaa2) dialer2_ne_pane_t2

0x0001,

0xf92a,	// (0x00030669) dialer2_ne_pane_t_ParamLimits

0xf92a,	// (0x00030669) dialer2_ne_pane_t

0xd063,	// (0x0002dda2) bg_popup_sub_pane_cp010_ParamLimits

0xd063,	// (0x0002dda2) bg_popup_sub_pane_cp010

0x8837,	// (0x00029576) popup_vtel_slider_window_g1_ParamLimits

0x8837,	// (0x00029576) popup_vtel_slider_window_g1

0x884a,	// (0x00029589) popup_vtel_slider_window_g2_ParamLimits

0x884a,	// (0x00029589) popup_vtel_slider_window_g2

0x0003,

0xfa45,	// (0x00030784) popup_vtel_slider_window_g_ParamLimits

0xfa45,	// (0x00030784) popup_vtel_slider_window_g

0x889e,	// (0x000295dd) vtel_slider_pane_ParamLimits

0x889e,	// (0x000295dd) vtel_slider_pane

0x88c0,	// (0x000295ff) vtel_slider_pane_g1_ParamLimits

0x88c0,	// (0x000295ff) vtel_slider_pane_g1

0x88d4,	// (0x00029613) vtel_slider_pane_g2_ParamLimits

0x88d4,	// (0x00029613) vtel_slider_pane_g2

0x88ec,	// (0x0002962b) vtel_slider_pane_g3_ParamLimits

0x88ec,	// (0x0002962b) vtel_slider_pane_g3

0x88c0,	// (0x000295ff) vtel_slider_pane_g4_ParamLimits

0x88c0,	// (0x000295ff) vtel_slider_pane_g4

0x8902,	// (0x00029641) vtel_slider_pane_g5_ParamLimits

0x8902,	// (0x00029641) vtel_slider_pane_g5

0x0004,

0xfa4e,	// (0x0003078d) vtel_slider_pane_g_ParamLimits

0xfa4e,	// (0x0003078d) vtel_slider_pane_g

0x3a01,	// (0x00024740) main_gallery2_pane

0x35c0,	// (0x000242ff) aid_size_row_itut2_dropdow_list_ParamLimits

0x35c0,	// (0x000242ff) aid_size_row_itut2_dropdow_list

0x362a,	// (0x00024369) grid_vitu2_function_top_pane_ParamLimits

0x362a,	// (0x00024369) grid_vitu2_function_top_pane

0x366d,	// (0x000243ac) popup_vitu2_dropdown_list_window_ParamLimits

0x366d,	// (0x000243ac) popup_vitu2_dropdown_list_window

0x368c,	// (0x000243cb) popup_vitu2_match_list_window

0x3899,	// (0x000245d8) cell_vitu2_function_top_pane_ParamLimits

0x3899,	// (0x000245d8) cell_vitu2_function_top_pane

0x38b9,	// (0x000245f8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x38b9,	// (0x000245f8) cell_vitu2_function_top_pane_cp01

0x38d9,	// (0x00024618) cell_vitu2_function_top_wide_pane_ParamLimits

0x38d9,	// (0x00024618) cell_vitu2_function_top_wide_pane

0xdf12,	// (0x0002ec51) bg_button_pane_cp012

0x38f7,	// (0x00024636) cell_vitu2_function_top_pane_g1

0xe19f,	// (0x0002eede) bg_button_pane_cp013_ParamLimits

0xe19f,	// (0x0002eede) bg_button_pane_cp013

0x8918,	// (0x00029657) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8918,	// (0x00029657) cell_vitu2_function_top_wide_pane_g1

0xdf12,	// (0x0002ec51) bg_popup_sub_pane_cp20

0x390b,	// (0x0002464a) list_vitu2_match_list_pane

0xdf2a,	// (0x0002ec69) bg_popup_sub_pane_cp20_g1

0xdf32,	// (0x0002ec71) bg_popup_sub_pane_cp20_g2

0xafe0,	// (0x0002bd1f) bg_popup_sub_pane_cp20_g3

0xdf3a,	// (0x0002ec79) bg_popup_sub_pane_cp20_g4

0xafc0,	// (0x0002bcff) bg_popup_sub_pane_cp20_g5

0xe1bb,	// (0x0002eefa) bg_popup_sub_pane_cp20_g6

0xdf4a,	// (0x0002ec89) bg_popup_sub_pane_cp20_g7

0xdf52,	// (0x0002ec91) bg_popup_sub_pane_cp20_g8

0xdf5a,	// (0x0002ec99) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa59,	// (0x00030798) bg_popup_sub_pane_cp20_g

0xe1c3,	// (0x0002ef02) list_vitu2_match_list_item_pane_ParamLimits

0xe1c3,	// (0x0002ef02) list_vitu2_match_list_item_pane

0xe1d5,	// (0x0002ef14) list_vitu2_match_list_item_pane_t1

0xaacd,	// (0x0002b80c) bg_popup_sub_pane_cp21

0xe1e3,	// (0x0002ef22) grid_vitu2_dropdown_list_pane

0x3929,	// (0x00024668) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x3929,	// (0x00024668) cell_vitu2_dropdown_list_char_pane

0x394a,	// (0x00024689) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x394a,	// (0x00024689) cell_vitu2_dropdown_list_ctrl_pane

0xe1eb,	// (0x0002ef2a) cell_vitu2_dropdown_list_char_pane_g1

0xe1f4,	// (0x0002ef33) cell_vitu2_dropdown_list_char_pane_g2

0xe1fd,	// (0x0002ef3c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa76,	// (0x000307b5) cell_vitu2_dropdown_list_char_pane_g

0x3976,	// (0x000246b5) cell_vitu2_dropdown_list_char_pane_t1

0x895c,	// (0x0002969b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x895c,	// (0x0002969b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8969,	// (0x000296a8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8969,	// (0x000296a8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8976,	// (0x000296b5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8976,	// (0x000296b5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x3984,	// (0x000246c3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x3984,	// (0x000246c3) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe206,	// (0x0002ef45) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe206,	// (0x0002ef45) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa7d,	// (0x000307bc) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa7d,	// (0x000307bc) cell_vitu2_dropdown_list_ctrl_pane_g

0x8983,	// (0x000296c2) aid_size_cell_gallery2_ParamLimits

0x8983,	// (0x000296c2) aid_size_cell_gallery2

0x8999,	// (0x000296d8) grid_gallery2_pane_ParamLimits

0x8999,	// (0x000296d8) grid_gallery2_pane

0x89ab,	// (0x000296ea) scroll_pane_cp029_ParamLimits

0x89ab,	// (0x000296ea) scroll_pane_cp029

0x89b7,	// (0x000296f6) cell_gallery2_pane_ParamLimits

0x89b7,	// (0x000296f6) cell_gallery2_pane

0xe214,	// (0x0002ef53) cell_gallery2_pane_g2

0x89e9,	// (0x00029728) cell_gallery2_pane_g3

0xe21e,	// (0x0002ef5d) cell_gallery2_pane_g4

0xe226,	// (0x0002ef65) cell_gallery2_pane_g5

0xb88b,	// (0x0002c5ca) grid_highlight_pane_cp10

0x368c,	// (0x000243cb) popup_vitu2_match_list_window_ParamLimits

0x369d,	// (0x000243dc) popup_vitu2_query_window_ParamLimits

0x369d,	// (0x000243dc) popup_vitu2_query_window

0xaacd,	// (0x0002b80c) bg_vitu2_candi_button_pane

0xe1eb,	// (0x0002ef2a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe1f4,	// (0x0002ef33) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe1fd,	// (0x0002ef3c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x89f1,	// (0x00029730) bg_button_pane_cp015

0x89f9,	// (0x00029738) bg_button_pane_cp016

0x8a02,	// (0x00029741) bg_button_pane_cp017

0x3c2b,	// (0x0002496a) bg_popup_sub_pane_cp22

0xe22e,	// (0x0002ef6d) popup_vitu2_query_window_g1

0x8a28,	// (0x00029767) popup_vitu2_query_window_g2

0x0001,

0xfa88,	// (0x000307c7) popup_vitu2_query_window_g

0x8a34,	// (0x00029773) popup_vitu2_query_window_t1_ParamLimits

0x8a34,	// (0x00029773) popup_vitu2_query_window_t1

0x8a5c,	// (0x0002979b) popup_vitu2_query_window_t2_ParamLimits

0x8a5c,	// (0x0002979b) popup_vitu2_query_window_t2

0x8a6e,	// (0x000297ad) popup_vitu2_query_window_t3_ParamLimits

0x8a6e,	// (0x000297ad) popup_vitu2_query_window_t3

0x8a96,	// (0x000297d5) popup_vitu2_query_window_t4_ParamLimits

0x8a96,	// (0x000297d5) popup_vitu2_query_window_t4

0x8aa8,	// (0x000297e7) popup_vitu2_query_window_t5_ParamLimits

0x8aa8,	// (0x000297e7) popup_vitu2_query_window_t5

0x0004,

0xfa8d,	// (0x000307cc) popup_vitu2_query_window_t_ParamLimits

0xfa8d,	// (0x000307cc) popup_vitu2_query_window_t

0xe018,	// (0x0002ed57) main_cset_text_pane

0x8572,	// (0x000292b1) aid_area_touch_slider_ParamLimits

0x858e,	// (0x000292cd) cset_slider_pane_ParamLimits

0x85b8,	// (0x000292f7) main_cset_slider_pane_g1_ParamLimits

0x85cd,	// (0x0002930c) main_cset_slider_pane_g2_ParamLimits

0xe039,	// (0x0002ed78) main_cset_slider_pane_g3_ParamLimits

0xe039,	// (0x0002ed78) main_cset_slider_pane_g3

0x85e2,	// (0x00029321) main_cset_slider_pane_g4_ParamLimits

0x85e2,	// (0x00029321) main_cset_slider_pane_g4

0x85f1,	// (0x00029330) main_cset_slider_pane_g5_ParamLimits

0x85f1,	// (0x00029330) main_cset_slider_pane_g5

0x85fd,	// (0x0002933c) main_cset_slider_pane_g6_ParamLimits

0x85fd,	// (0x0002933c) main_cset_slider_pane_g6

0xf9e2,	// (0x00030721) main_cset_slider_pane_g_ParamLimits

0xe069,	// (0x0002eda8) main_cset_slider_pane_t1_ParamLimits

0x8689,	// (0x000293c8) main_cset_slider_pane_t2_ParamLimits

0x86a3,	// (0x000293e2) main_cset_slider_pane_t3_ParamLimits

0x86bd,	// (0x000293fc) main_cset_slider_pane_t4_ParamLimits

0x86d7,	// (0x00029416) main_cset_slider_pane_t5_ParamLimits

0x86f1,	// (0x00029430) main_cset_slider_pane_t6_ParamLimits

0x8706,	// (0x00029445) main_cset_slider_pane_t7_ParamLimits

0x8730,	// (0x0002946f) main_cset_slider_pane_t8_ParamLimits

0x8730,	// (0x0002946f) main_cset_slider_pane_t8

0x8758,	// (0x00029497) main_cset_slider_pane_t9_ParamLimits

0x8758,	// (0x00029497) main_cset_slider_pane_t9

0x8780,	// (0x000294bf) main_cset_slider_pane_t10_ParamLimits

0x8780,	// (0x000294bf) main_cset_slider_pane_t10

0x87a8,	// (0x000294e7) main_cset_slider_pane_t11_ParamLimits

0x87a8,	// (0x000294e7) main_cset_slider_pane_t11

0x87d0,	// (0x0002950f) main_cset_slider_pane_t12_ParamLimits

0x87d0,	// (0x0002950f) main_cset_slider_pane_t12

0x87ed,	// (0x0002952c) main_cset_slider_pane_t13_ParamLimits

0x87ed,	// (0x0002952c) main_cset_slider_pane_t13

0xfa07,	// (0x00030746) main_cset_slider_pane_t_ParamLimits

0x3a01,	// (0x00024740) bg_popup_sub_pane_cp011

0xe23a,	// (0x0002ef79) main_cset_text_pane_g1

0xe242,	// (0x0002ef81) main_cset_text_pane_t1

0xe250,	// (0x0002ef8f) main_cset_text_pane_t2

0xe25e,	// (0x0002ef9d) main_cset_text_pane_t3

0xe26c,	// (0x0002efab) main_cset_text_pane_t4

0xe27a,	// (0x0002efb9) main_cset_text_pane_t5

0xe288,	// (0x0002efc7) main_cset_text_pane_t6

0xe296,	// (0x0002efd5) main_cset_text_pane_t7

0x0006,

0xfa98,	// (0x000307d7) main_cset_text_pane_t

0x3a01,	// (0x00024740) main_cam4_burst_pane

0x3a01,	// (0x00024740) main_cam5_pane

0x84c0,	// (0x000291ff) bg_button_pane_cp019

0x84c9,	// (0x00029208) bg_button_pane_cp020

0xe045,	// (0x0002ed84) main_cset_slider_pane_g7_ParamLimits

0xe045,	// (0x0002ed84) main_cset_slider_pane_g7

0xe051,	// (0x0002ed90) main_cset_slider_pane_g8_ParamLimits

0xe051,	// (0x0002ed90) main_cset_slider_pane_g8

0x8611,	// (0x00029350) main_cset_slider_pane_g9_ParamLimits

0x8611,	// (0x00029350) main_cset_slider_pane_g9

0x861d,	// (0x0002935c) main_cset_slider_pane_g10_ParamLimits

0x861d,	// (0x0002935c) main_cset_slider_pane_g10

0x8629,	// (0x00029368) main_cset_slider_pane_g11_ParamLimits

0x8629,	// (0x00029368) main_cset_slider_pane_g11

0x8635,	// (0x00029374) main_cset_slider_pane_g12_ParamLimits

0x8635,	// (0x00029374) main_cset_slider_pane_g12

0x8641,	// (0x00029380) main_cset_slider_pane_g13_ParamLimits

0x8641,	// (0x00029380) main_cset_slider_pane_g13

0x864d,	// (0x0002938c) main_cset_slider_pane_g14_ParamLimits

0x864d,	// (0x0002938c) main_cset_slider_pane_g14

0x8659,	// (0x00029398) main_cset_slider_pane_g15_ParamLimits

0x8659,	// (0x00029398) main_cset_slider_pane_g15

0xe097,	// (0x0002edd6) main_cset_slider_pane_t14_ParamLimits

0xe097,	// (0x0002edd6) main_cset_slider_pane_t14

0xe0d0,	// (0x0002ee0f) main_cset_slider_pane_t15_ParamLimits

0xe0d0,	// (0x0002ee0f) main_cset_slider_pane_t15

0x8aba,	// (0x000297f9) aid_cam4_burst_size_cell_ParamLimits

0x8aba,	// (0x000297f9) aid_cam4_burst_size_cell

0x8ada,	// (0x00029819) grid_cam4_burst_pane_ParamLimits

0x8ada,	// (0x00029819) grid_cam4_burst_pane

0x8b00,	// (0x0002983f) linegrid_cam4_burst_pane_ParamLimits

0x8b00,	// (0x0002983f) linegrid_cam4_burst_pane

0x8b22,	// (0x00029861) scroll_pane_cp30_ParamLimits

0x8b22,	// (0x00029861) scroll_pane_cp30

0x8b2e,	// (0x0002986d) cell_cam4_burst_pane_ParamLimits

0x8b2e,	// (0x0002986d) cell_cam4_burst_pane

0xe2a4,	// (0x0002efe3) linegrid_cam4_burst_pane_g1_ParamLimits

0xe2a4,	// (0x0002efe3) linegrid_cam4_burst_pane_g1

0x8b75,	// (0x000298b4) linegrid_cam4_burst_pane_g2_ParamLimits

0x8b75,	// (0x000298b4) linegrid_cam4_burst_pane_g2

0xe2b1,	// (0x0002eff0) linegrid_cam4_burst_pane_g3_ParamLimits

0xe2b1,	// (0x0002eff0) linegrid_cam4_burst_pane_g3

0x0002,

0xfaa7,	// (0x000307e6) linegrid_cam4_burst_pane_g_ParamLimits

0xfaa7,	// (0x000307e6) linegrid_cam4_burst_pane_g

0x8b86,	// (0x000298c5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8b86,	// (0x000298c5) linegrid_cam4_burst_pane_g3_copy1

0xe2be,	// (0x0002effd) linegrid_cam4_burst_pane_g4_ParamLimits

0xe2be,	// (0x0002effd) linegrid_cam4_burst_pane_g4

0x8ba0,	// (0x000298df) linegrid_cam4_burst_pane_g5_ParamLimits

0x8ba0,	// (0x000298df) linegrid_cam4_burst_pane_g5

0x8bb1,	// (0x000298f0) linegrid_cam4_burst_pane_g6_ParamLimits

0x8bb1,	// (0x000298f0) linegrid_cam4_burst_pane_g6

0xe2cb,	// (0x0002f00a) linegrid_cam4_burst_pane_g7_ParamLimits

0xe2cb,	// (0x0002f00a) linegrid_cam4_burst_pane_g7

0x8bc2,	// (0x00029901) cell_cam4_burst_pane_g1

0xe2e4,	// (0x0002f023) main_cam5_pane_t1_ParamLimits

0xe2e4,	// (0x0002f023) main_cam5_pane_t1

0xe2f6,	// (0x0002f035) main_cam5_pane_t2_ParamLimits

0xe2f6,	// (0x0002f035) main_cam5_pane_t2

0xe308,	// (0x0002f047) main_cam5_pane_t3_ParamLimits

0xe308,	// (0x0002f047) main_cam5_pane_t3

0xe31a,	// (0x0002f059) main_cam5_pane_t4_ParamLimits

0xe31a,	// (0x0002f059) main_cam5_pane_t4

0xe330,	// (0x0002f06f) main_cam5_pane_t5_ParamLimits

0xe330,	// (0x0002f06f) main_cam5_pane_t5

0xe342,	// (0x0002f081) main_cam5_pane_t6_ParamLimits

0xe342,	// (0x0002f081) main_cam5_pane_t6

0xe354,	// (0x0002f093) main_cam5_pane_t7_ParamLimits

0xe354,	// (0x0002f093) main_cam5_pane_t7

0xe366,	// (0x0002f0a5) main_cam5_pane_t8_ParamLimits

0xe366,	// (0x0002f0a5) main_cam5_pane_t8

0xe382,	// (0x0002f0c1) main_cam5_pane_t9_ParamLimits

0xe382,	// (0x0002f0c1) main_cam5_pane_t9

0xe394,	// (0x0002f0d3) main_cam5_pane_t10_ParamLimits

0xe394,	// (0x0002f0d3) main_cam5_pane_t10

0xe3a6,	// (0x0002f0e5) main_cam5_pane_t11_ParamLimits

0xe3a6,	// (0x0002f0e5) main_cam5_pane_t11

0xe3b8,	// (0x0002f0f7) main_cam5_pane_t12_ParamLimits

0xe3b8,	// (0x0002f0f7) main_cam5_pane_t12

0xe3cd,	// (0x0002f10c) main_cam5_pane_t13_ParamLimits

0xe3cd,	// (0x0002f10c) main_cam5_pane_t13

0x000c,

0xfab3,	// (0x000307f2) main_cam5_pane_t_ParamLimits

0xfab3,	// (0x000307f2) main_cam5_pane_t

0x3bf1,	// (0x00024930) popup_scut_keymap_window_ParamLimits

0x3bf1,	// (0x00024930) popup_scut_keymap_window

0x8bd7,	// (0x00029916) aid_size_cell_brow_shortcut

0xb88b,	// (0x0002c5ca) bg_popup_window_pane_cp010

0x8be3,	// (0x00029922) grid_scut_pane

0x8bed,	// (0x0002992c) cell_scut_pane_ParamLimits

0x8bed,	// (0x0002992c) cell_scut_pane

0x8c02,	// (0x00029941) cell_scut_pane_g1

0xe3ea,	// (0x0002f129) cell_scut_pane_t1

0xe3f9,	// (0x0002f138) cell_scut_pane_t2

0x8c0b,	// (0x0002994a) cell_scut_pane_t3

0x0002,

0xface,	// (0x0003080d) cell_scut_pane_t

0x7504,	// (0x00028243) main_mup3_pane_g8_ParamLimits

0x7504,	// (0x00028243) main_mup3_pane_g8

0x35d4,	// (0x00024313) area_vitu2_query_pane_ParamLimits

0x35d4,	// (0x00024313) area_vitu2_query_pane

0x8a0b,	// (0x0002974a) input_focus_pane_cp08

0xe408,	// (0x0002f147) area_vitu2_query_pane_g1

0x8c19,	// (0x00029958) area_vitu2_query_pane_g2

0x0001,

0xfad5,	// (0x00030814) area_vitu2_query_pane_g

0x8c28,	// (0x00029967) area_vitu2_query_pane_t1_ParamLimits

0x8c28,	// (0x00029967) area_vitu2_query_pane_t1

0x8c3a,	// (0x00029979) area_vitu2_query_pane_t2_ParamLimits

0x8c3a,	// (0x00029979) area_vitu2_query_pane_t2

0x8c4c,	// (0x0002998b) area_vitu2_query_pane_t3_ParamLimits

0x8c4c,	// (0x0002998b) area_vitu2_query_pane_t3

0xe414,	// (0x0002f153) area_vitu2_query_pane_t4_ParamLimits

0xe414,	// (0x0002f153) area_vitu2_query_pane_t4

0xe43c,	// (0x0002f17b) area_vitu2_query_pane_t5_ParamLimits

0xe43c,	// (0x0002f17b) area_vitu2_query_pane_t5

0xe464,	// (0x0002f1a3) area_vitu2_query_pane_t6_ParamLimits

0xe464,	// (0x0002f1a3) area_vitu2_query_pane_t6

0x0006,

0xfada,	// (0x00030819) area_vitu2_query_pane_t_ParamLimits

0xfada,	// (0x00030819) area_vitu2_query_pane_t

0x8c74,	// (0x000299b3) bg_button_pane_cp018

0x8c81,	// (0x000299c0) bg_button_pane_cp021

0x8c8d,	// (0x000299cc) bg_button_pane_cp022

0x8c9c,	// (0x000299db) input_focus_pane_cp09

0x5d4b,	// (0x00026a8a) aid_size_touch_mv_arrow_left

0xb764,	// (0x0002c4a3) aid_size_touch_mv_arrow_right

0x8671,	// (0x000293b0) main_cset_slider_pane_g16_ParamLimits

0x8671,	// (0x000293b0) main_cset_slider_pane_g16

0x867d,	// (0x000293bc) main_cset_slider_pane_g17_ParamLimits

0x867d,	// (0x000293bc) main_cset_slider_pane_g17

0x8bc2,	// (0x00029901) cell_cam4_burst_pane_g1_ParamLimits

0x3a01,	// (0x00024740) compa_mode_pane

0x885a,	// (0x00029599) popup_vtel_slider_window_g3_ParamLimits

0x885a,	// (0x00029599) popup_vtel_slider_window_g3

0x8871,	// (0x000295b0) popup_vtel_slider_window_g4_ParamLimits

0x8871,	// (0x000295b0) popup_vtel_slider_window_g4

0x8888,	// (0x000295c7) popup_vtel_slider_window_t1_ParamLimits

0x8888,	// (0x000295c7) popup_vtel_slider_window_t1

0x3a01,	// (0x00024740) main_cl_pane

0xcda7,	// (0x0002dae6) popup_imed_adjust2_window_ParamLimits

0xcd81,	// (0x0002dac0) bg_tb_trans_pane_cp05_ParamLimits

0xd73f,	// (0x0002e47e) popup_imed_adjust2_window_g1_ParamLimits

0xd74e,	// (0x0002e48d) popup_imed_adjust2_window_g2_ParamLimits

0xd74e,	// (0x0002e48d) popup_imed_adjust2_window_g2

0xd75a,	// (0x0002e499) popup_imed_adjust2_window_g3_ParamLimits

0xd75a,	// (0x0002e499) popup_imed_adjust2_window_g3

0x0002,

0xf854,	// (0x00030593) popup_imed_adjust2_window_g_ParamLimits

0xf854,	// (0x00030593) popup_imed_adjust2_window_g

0xd766,	// (0x0002e4a5) popup_imed_adjust2_window_t1_ParamLimits

0xd77e,	// (0x0002e4bd) slider_imed_adjust_pane_ParamLimits

0xd792,	// (0x0002e4d1) slider_imed_adjust_pane_g1_ParamLimits

0xd7a2,	// (0x0002e4e1) slider_imed_adjust_pane_g2_ParamLimits

0xd7b2,	// (0x0002e4f1) slider_imed_adjust_pane_g3_ParamLimits

0xd7c3,	// (0x0002e502) slider_imed_adjust_pane_g4_ParamLimits

0xf85b,	// (0x0003059a) slider_imed_adjust_pane_g_ParamLimits

0x3355,	// (0x00024094) aid_touch_area_cam4_ParamLimits

0x3355,	// (0x00024094) aid_touch_area_cam4

0xde80,	// (0x0002ebbf) battery_pane_cp01

0x33f7,	// (0x00024136) main_camera4_pane_g6_ParamLimits

0x33f7,	// (0x00024136) main_camera4_pane_g6

0x3418,	// (0x00024157) main_camera4_pane_t2_ParamLimits

0x3418,	// (0x00024157) main_camera4_pane_t2

0x0001,

0xf95e,	// (0x0003069d) main_camera4_pane_t_ParamLimits

0xf95e,	// (0x0003069d) main_camera4_pane_t

0x3479,	// (0x000241b8) aid_touch_area_vid4_ParamLimits

0x3479,	// (0x000241b8) aid_touch_area_vid4

0x34bb,	// (0x000241fa) main_video4_pane_g5_ParamLimits

0x34bb,	// (0x000241fa) main_video4_pane_g5

0x34dc,	// (0x0002421b) vid4_progress_pane_ParamLimits

0x34dc,	// (0x0002421b) vid4_progress_pane

0xe05d,	// (0x0002ed9c) main_cset_slider_pane_g18_ParamLimits

0xe05d,	// (0x0002ed9c) main_cset_slider_pane_g18

0xe2d8,	// (0x0002f017) cell_cam4_burst_pane_g2_ParamLimits

0xe2d8,	// (0x0002f017) cell_cam4_burst_pane_g2

0x0001,

0xfaae,	// (0x000307ed) cell_cam4_burst_pane_g_ParamLimits

0xfaae,	// (0x000307ed) cell_cam4_burst_pane_g

0x45fb,	// (0x0002533a) bg_cl_pane_ParamLimits

0x45fb,	// (0x0002533a) bg_cl_pane

0x8cab,	// (0x000299ea) cl_header_pane_ParamLimits

0x8cab,	// (0x000299ea) cl_header_pane

0x8cbf,	// (0x000299fe) cl_listscroll_pane_ParamLimits

0x8cbf,	// (0x000299fe) cl_listscroll_pane

0xe4b0,	// (0x0002f1ef) bg_cl_pane_g1

0xe4b8,	// (0x0002f1f7) bg_cl_pane_g2

0xe4c0,	// (0x0002f1ff) bg_cl_pane_g3

0xe4c8,	// (0x0002f207) bg_cl_pane_g4

0xe4d0,	// (0x0002f20f) bg_cl_pane_g5

0xe4d8,	// (0x0002f217) bg_cl_pane_g6

0xe4e0,	// (0x0002f21f) bg_cl_pane_g7

0xe4e8,	// (0x0002f227) bg_cl_pane_g8

0xe4f0,	// (0x0002f22f) bg_cl_pane_g9

0x0008,

0xfae9,	// (0x00030828) bg_cl_pane_g

0x8ccf,	// (0x00029a0e) aid_height_cl_leading_ParamLimits

0x8ccf,	// (0x00029a0e) aid_height_cl_leading

0x8cdb,	// (0x00029a1a) aid_height_cl_text_ParamLimits

0x8cdb,	// (0x00029a1a) aid_height_cl_text

0x3c2b,	// (0x0002496a) bg_cl_header_pane_ParamLimits

0x3c2b,	// (0x0002496a) bg_cl_header_pane

0x8cfa,	// (0x00029a39) cl_header_pane_g1_ParamLimits

0x8cfa,	// (0x00029a39) cl_header_pane_g1

0x8d10,	// (0x00029a4f) cl_header_pane_t1_ParamLimits

0x8d10,	// (0x00029a4f) cl_header_pane_t1

0xe4f8,	// (0x0002f237) cl_list_pane

0xe501,	// (0x0002f240) hc_scroll_pane_cp01

0xafc0,	// (0x0002bcff) bg_cl_header_pane_g1

0xdf2a,	// (0x0002ec69) bg_cl_header_pane_g2

0xafe0,	// (0x0002bd1f) bg_cl_header_pane_g3

0xdf3a,	// (0x0002ec79) bg_cl_header_pane_g4

0xdf32,	// (0x0002ec71) bg_cl_header_pane_g5

0xe1bb,	// (0x0002eefa) bg_cl_header_pane_g6

0xdf52,	// (0x0002ec91) bg_cl_header_pane_g7

0xdf5a,	// (0x0002ec99) bg_cl_header_pane_g8

0xdf4a,	// (0x0002ec89) bg_cl_header_pane_g9

0x0008,

0xfafc,	// (0x0003083b) bg_cl_header_pane_g

0x8d29,	// (0x00029a68) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8d29,	// (0x00029a68) hc_cl_list_double_graphic_heading_pane

0x8d39,	// (0x00029a78) hc_cl_list_single_graphic_pane_ParamLimits

0x8d39,	// (0x00029a78) hc_cl_list_single_graphic_pane

0x8d4c,	// (0x00029a8b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8d4c,	// (0x00029a8b) hc_cl_list_single_graphic_pane_g1

0x8d58,	// (0x00029a97) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8d58,	// (0x00029a97) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfb0f,	// (0x0003084e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfb0f,	// (0x0003084e) hc_cl_list_single_graphic_pane_g

0x8d6c,	// (0x00029aab) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8d6c,	// (0x00029aab) hc_cl_list_single_graphic_pane_t1

0x8d4c,	// (0x00029a8b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8d4c,	// (0x00029a8b) hc_cl_list_double_graphic_heading_pane_g1

0x8d81,	// (0x00029ac0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8d81,	// (0x00029ac0) hc_cl_list_double_graphic_heading_pane_g2

0x8d95,	// (0x00029ad4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8d95,	// (0x00029ad4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb14,	// (0x00030853) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb14,	// (0x00030853) hc_cl_list_double_graphic_heading_pane_g

0x8da9,	// (0x00029ae8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8da9,	// (0x00029ae8) hc_cl_list_double_graphic_heading_pane_t1

0x8dbe,	// (0x00029afd) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8dbe,	// (0x00029afd) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb1b,	// (0x0003085a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb1b,	// (0x0003085a) hc_cl_list_double_graphic_heading_pane_t

0xe50a,	// (0x0002f249) vid4_progress_pane_g1

0xe519,	// (0x0002f258) vid4_progress_pane_g2

0xe528,	// (0x0002f267) vid4_progress_pane_g3

0xe537,	// (0x0002f276) vid4_progress_pane_g4

0x0004,

0xfb20,	// (0x0003085f) vid4_progress_pane_g

0xe54f,	// (0x0002f28e) vid4_progress_pane_t1

0xe565,	// (0x0002f2a4) vid4_progress_pane_t2

0x0002,

0xfb2b,	// (0x0003086a) vid4_progress_pane_t

0xe58f,	// (0x0002f2ce) wait_bar_pane_cp07

0xd071,	// (0x0002ddb0) blid_firmament_pane_ParamLimits

0xd0b2,	// (0x0002ddf1) popup_blid_sat_info2_window_g1

0xd0d6,	// (0x0002de15) popup_blid_sat_info2_window_t3

0xd0e4,	// (0x0002de23) popup_blid_sat_info2_window_t4

0xd0f2,	// (0x0002de31) popup_blid_sat_info2_window_t5

0xd100,	// (0x0002de3f) popup_blid_sat_info2_window_t6

0xd110,	// (0x0002de4f) popup_blid_sat_info2_window_t7

0xd11e,	// (0x0002de5d) popup_blid_sat_info2_window_t8

0xd12c,	// (0x0002de6b) popup_blid_sat_info2_window_t9

0xd13a,	// (0x0002de79) popup_blid_sat_info2_window_t10

0xd1f6,	// (0x0002df35) aid_firma_cardinal_ParamLimits

0xd20a,	// (0x0002df49) blid_firmament_pane_t1_ParamLimits

0xd221,	// (0x0002df60) blid_firmament_pane_t2_ParamLimits

0xd238,	// (0x0002df77) blid_firmament_pane_t3_ParamLimits

0xd24f,	// (0x0002df8e) blid_firmament_pane_t4_ParamLimits

0xf74d,	// (0x0003048c) blid_firmament_pane_t_ParamLimits

0xd266,	// (0x0002dfa5) blid_sat_info_pane_ParamLimits

0x3c2b,	// (0x0002496a) main_cam_set_pane_ParamLimits

0x7ce3,	// (0x00028a22) aid_size_cell_colour_35_ParamLimits

0x7d03,	// (0x00028a42) aid_size_cell_colour_112_ParamLimits

0x7d23,	// (0x00028a62) aid_size_cell_effect_ParamLimits

0xcd81,	// (0x0002dac0) bg_tb_trans_pane_cp02_ParamLimits

0xb265,	// (0x0002bfa4) heading_imed_pane_ParamLimits

0x7d43,	// (0x00028a82) listscroll_imed_pane_ParamLimits

0xc373,	// (0x0002d0b2) popup_call2_audio_first_window_g5_ParamLimits

0xc373,	// (0x0002d0b2) popup_call2_audio_first_window_g5

0x315e,	// (0x00023e9d) aid_size_touch_image3_arrow_left_ParamLimits

0x315e,	// (0x00023e9d) aid_size_touch_image3_arrow_left

0x317e,	// (0x00023ebd) aid_size_touch_image3_arrow_right_ParamLimits

0x317e,	// (0x00023ebd) aid_size_touch_image3_arrow_right

0xe57a,	// (0x0002f2b9) vid4_progress_pane_t3

0x8017,	// (0x00028d56) main_hwr_training_symbol_option_pane_ParamLimits

0x8017,	// (0x00028d56) main_hwr_training_symbol_option_pane

0xda1e,	// (0x0002e75d) popup_hwr_training_preview_window_ParamLimits

0xda1e,	// (0x0002e75d) popup_hwr_training_preview_window

0x3028,	// (0x00023d67) hwr_training_navi_pane_g5_ParamLimits

0x3028,	// (0x00023d67) hwr_training_navi_pane_g5

0xdf0a,	// (0x0002ec49) popup_char_count_window

0xdf12,	// (0x0002ec51) bg_popup_sub_pane_cp20_ParamLimits

0x390b,	// (0x0002464a) list_vitu2_match_list_pane_ParamLimits

0x391a,	// (0x00024659) vitu2_page_scroll_pane_ParamLimits

0x391a,	// (0x00024659) vitu2_page_scroll_pane

0xe5f9,	// (0x0002f338) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe5f9,	// (0x0002f338) list_single_hwr_training_symbol_option_pane

0xe60c,	// (0x0002f34b) list_single_hwr_training_symbol_option_pane_g1

0xe614,	// (0x0002f353) list_single_hwr_training_symbol_option_pane_t1

0xe622,	// (0x0002f361) bg_button_pane_cp023

0xe62b,	// (0x0002f36a) bg_button_pane_cp024

0x8dd3,	// (0x00029b12) vitu2_page_scroll_pane_g1

0x8ddb,	// (0x00029b1a) vitu2_page_scroll_pane_g2

0x0001,

0xfb32,	// (0x00030871) vitu2_page_scroll_pane_g

0x8de3,	// (0x00029b22) vitu2_page_scroll_pane_t1

0xcf8d,	// (0x0002dccc) popup_char_count_window_g1

0xe65e,	// (0x0002f39d) popup_char_count_window_g2

0xe667,	// (0x0002f3a6) popup_char_count_window_g3

0x0002,

0xfb37,	// (0x00030876) popup_char_count_window_g

0xe670,	// (0x0002f3af) popup_char_count_window_t1

0x3a01,	// (0x00024740) main_vded2_pane

0xd72d,	// (0x0002e46c) aid_size_cell_imed_line

0xd737,	// (0x0002e476) grid_imed_line_width_pane

0x3550,	// (0x0002428f) vid4_indicators_pane_g4

0xe67e,	// (0x0002f3bd) cell_imed_line_width_pane_ParamLimits

0xe67e,	// (0x0002f3bd) cell_imed_line_width_pane

0xe690,	// (0x0002f3cf) cell_imed_line_width_pane_g1

0xd01f,	// (0x0002dd5e) cell_imed_line_width_pane_g2

0x0001,

0xfb3e,	// (0x0003087d) cell_imed_line_width_pane_g

0x8df2,	// (0x00029b31) main_vded2_pane_g1_ParamLimits

0x8df2,	// (0x00029b31) main_vded2_pane_g1

0x8e08,	// (0x00029b47) main_vded2_pane_g2_ParamLimits

0x8e08,	// (0x00029b47) main_vded2_pane_g2

0x0001,

0xfb43,	// (0x00030882) main_vded2_pane_g_ParamLimits

0xfb43,	// (0x00030882) main_vded2_pane_g

0x8e18,	// (0x00029b57) vded2_slider_pane_ParamLimits

0x8e18,	// (0x00029b57) vded2_slider_pane

0x8e2b,	// (0x00029b6a) aid_size_touch_vded2_end

0x8e33,	// (0x00029b72) aid_size_touch_vded2_playhead

0x8e3b,	// (0x00029b7a) aid_size_touch_vded2_start

0x8e43,	// (0x00029b82) vded2_slider_bg_pane

0x8e4c,	// (0x00029b8b) vded2_slider_pane_g1

0x8e55,	// (0x00029b94) vded2_slider_pane_g2

0x8e5d,	// (0x00029b9c) vded2_slider_pane_g3

0x0002,

0xfb48,	// (0x00030887) vded2_slider_pane_g

0x8e66,	// (0x00029ba5) vded2_slider_bg_pane_g1

0x8e6f,	// (0x00029bae) vded2_slider_bg_pane_g2

0x8e78,	// (0x00029bb7) vded2_slider_bg_pane_g3

0x0002,

0xfb4f,	// (0x0003088e) vded2_slider_bg_pane_g

0x622d,	// (0x00026f6c) aid_postcard_touch_down_pane_ParamLimits

0x622d,	// (0x00026f6c) aid_postcard_touch_down_pane

0x623f,	// (0x00026f7e) aid_postcard_touch_up_pane_ParamLimits

0x623f,	// (0x00026f7e) aid_postcard_touch_up_pane

0x3a01,	// (0x00024740) main_blid2_pane

0xcd8f,	// (0x0002dace) popup_blid2_search_window

0x3a01,	// (0x00024740) blid2_gps_pane

0x3a01,	// (0x00024740) blid2_navig_pane

0x3a01,	// (0x00024740) blid2_search_pane

0x3a01,	// (0x00024740) blid2_tripm_pane

0x8e81,	// (0x00029bc0) blid2_search_pane_g1_ParamLimits

0x8e81,	// (0x00029bc0) blid2_search_pane_g1

0x8e95,	// (0x00029bd4) blid2_search_pane_t1_ParamLimits

0x8e95,	// (0x00029bd4) blid2_search_pane_t1

0x8ea7,	// (0x00029be6) aid_size_cell_blid2_gps_ParamLimits

0x8ea7,	// (0x00029be6) aid_size_cell_blid2_gps

0x8ebf,	// (0x00029bfe) blid2_gps_pane_g1_ParamLimits

0x8ebf,	// (0x00029bfe) blid2_gps_pane_g1

0x8ed3,	// (0x00029c12) grid_blid2_satellite_pane_ParamLimits

0x8ed3,	// (0x00029c12) grid_blid2_satellite_pane

0x8ee7,	// (0x00029c26) blid2_navig_pane_g1_ParamLimits

0x8ee7,	// (0x00029c26) blid2_navig_pane_g1

0x8ef3,	// (0x00029c32) blid2_navig_pane_t1_ParamLimits

0x8ef3,	// (0x00029c32) blid2_navig_pane_t1

0x8f0c,	// (0x00029c4b) blid2_navig_pane_t2_ParamLimits

0x8f0c,	// (0x00029c4b) blid2_navig_pane_t2

0x0001,

0xfb56,	// (0x00030895) blid2_navig_pane_t_ParamLimits

0xfb56,	// (0x00030895) blid2_navig_pane_t

0x8f25,	// (0x00029c64) blid2_navig_ring_pane_ParamLimits

0x8f25,	// (0x00029c64) blid2_navig_ring_pane

0x8f3a,	// (0x00029c79) blid2_speed_pane_ParamLimits

0x8f3a,	// (0x00029c79) blid2_speed_pane

0x8f46,	// (0x00029c85) blid2_tripm_pane_g1_ParamLimits

0x8f46,	// (0x00029c85) blid2_tripm_pane_g1

0x8f5b,	// (0x00029c9a) blid2_tripm_pane_g2_ParamLimits

0x8f5b,	// (0x00029c9a) blid2_tripm_pane_g2

0x8f6f,	// (0x00029cae) blid2_tripm_pane_g3_ParamLimits

0x8f6f,	// (0x00029cae) blid2_tripm_pane_g3

0x8f83,	// (0x00029cc2) blid2_tripm_pane_g4_ParamLimits

0x8f83,	// (0x00029cc2) blid2_tripm_pane_g4

0x8f97,	// (0x00029cd6) blid2_tripm_pane_g5_ParamLimits

0x8f97,	// (0x00029cd6) blid2_tripm_pane_g5

0x0005,

0xfb5b,	// (0x0003089a) blid2_tripm_pane_g_ParamLimits

0xfb5b,	// (0x0003089a) blid2_tripm_pane_g

0x8fb9,	// (0x00029cf8) blid2_tripm_pane_t1_ParamLimits

0x8fb9,	// (0x00029cf8) blid2_tripm_pane_t1

0x8fd0,	// (0x00029d0f) blid2_tripm_pane_t2_ParamLimits

0x8fd0,	// (0x00029d0f) blid2_tripm_pane_t2

0x8fe7,	// (0x00029d26) blid2_tripm_pane_t3_ParamLimits

0x8fe7,	// (0x00029d26) blid2_tripm_pane_t3

0x0003,

0xfb68,	// (0x000308a7) blid2_tripm_pane_t_ParamLimits

0xfb68,	// (0x000308a7) blid2_tripm_pane_t

0x902a,	// (0x00029d69) cell_blid2_satellite_pane_ParamLimits

0x902a,	// (0x00029d69) cell_blid2_satellite_pane

0x9042,	// (0x00029d81) cell_blid2_satellite_pane_g1

0xe699,	// (0x0002f3d8) cell_blid2_satellite_pane_t1

0xd276,	// (0x0002dfb5) blid2_speed_pane_g1

0xe6a7,	// (0x0002f3e6) blid2_speed_pane_t1

0xe6b5,	// (0x0002f3f4) blid2_speed_pane_t2

0x0001,

0xfb71,	// (0x000308b0) blid2_speed_pane_t

0xd276,	// (0x0002dfb5) blid2_navig_ring_pane_g1

0x904b,	// (0x00029d8a) blid2_navig_ring_pane_g2

0x9053,	// (0x00029d92) blid2_navig_ring_pane_g3

0x905b,	// (0x00029d9a) blid2_navig_ring_pane_g4

0x9063,	// (0x00029da2) blid2_navig_ring_pane_g5

0x0004,

0xfb76,	// (0x000308b5) blid2_navig_ring_pane_g

0x3a01,	// (0x00024740) bg_popup_window_pane_cp011

0xe6c3,	// (0x0002f402) popup_blid2_search_window_g1

0xe6cb,	// (0x0002f40a) popup_blid2_search_window_t1

0xe6d9,	// (0x0002f418) popup_blid2_search_window_t2

0x0001,

0xfb81,	// (0x000308c0) popup_blid2_search_window_t

0xaecf,	// (0x0002bc0e) main_browser_pane_g1

0x45fb,	// (0x0002533a) main_browser_pane_ParamLimits

0xdf12,	// (0x0002ec51) bg_button_pane_cp011_ParamLimits

0x387d,	// (0x000245bc) cell_vitu2_function_pane_g1_ParamLimits

0x3c2b,	// (0x0002496a) bg_popup_sub_pane_cp22_ParamLimits

0x8a0b,	// (0x0002974a) input_focus_pane_cp08_ParamLimits

0x8a18,	// (0x00029757) popup_vitu2_query_button_pane_ParamLimits

0x8a18,	// (0x00029757) popup_vitu2_query_button_pane

0x89f1,	// (0x00029730) popup_vitu2_query_input_button_pane

0xe22e,	// (0x0002ef6d) popup_vitu2_query_window_g1_ParamLimits

0x8a28,	// (0x00029767) popup_vitu2_query_window_g2_ParamLimits

0xfa88,	// (0x000307c7) popup_vitu2_query_window_g_ParamLimits

0x3a01,	// (0x00024740) bg_button_pane_cp026

0x906b,	// (0x00029daa) popup_vitu2_query_input_button_pane_g1

0x3a01,	// (0x00024740) bg_button_pane_cp025

0xe6e7,	// (0x0002f426) popup_vitu2_query_button_pane_t1

0x7285,	// (0x00027fc4) main_mp3_pane_t6

0x7293,	// (0x00027fd2) popup_slider_window_cp01

0xde90,	// (0x0002ebcf) cam4_battery_pane

0xde90,	// (0x0002ebcf) cam4_battery_pane_cp02

0xde90,	// (0x0002ebcf) cam4_battery_pane_cp01

0xde90,	// (0x0002ebcf) cam4_battery_pane_cp03

0xdd59,	// (0x0002ea98) cam4_battery_pane_g1

0xd276,	// (0x0002dfb5) cam4_battery_pane_g2

0x0001,

0xfb86,	// (0x000308c5) cam4_battery_pane_g

0xd148,	// (0x0002de87) popup_blid_sat_info2_window_t11

0x5d4b,	// (0x00026a8a) aid_size_touch_mv_arrow_left_ParamLimits

0xb764,	// (0x0002c4a3) aid_size_touch_mv_arrow_right_ParamLimits

0xb79c,	// (0x0002c4db) navi_pane_g1_ParamLimits

0xb7a8,	// (0x0002c4e7) navi_pane_g2_ParamLimits

0x5d64,	// (0x00026aa3) navi_pane_g3_ParamLimits

0xf44c,	// (0x0003018b) navi_pane_g_ParamLimits

0x5d89,	// (0x00026ac8) navi_pane_mv_t1_ParamLimits

0x7d4f,	// (0x00028a8e) grid_imed_effect_pane_ParamLimits

0xae09,	// (0x0002bb48) aid_placing_vt_slider_lsc

0xae11,	// (0x0002bb50) aid_placing_vt_slider_prt

0x3c2b,	// (0x0002496a) bg_tb_trans_pane_cp01_ParamLimits

0xd3c5,	// (0x0002e104) popup_image_details_window_g1_ParamLimits

0xd3d8,	// (0x0002e117) popup_image_details_window_g2_ParamLimits

0xd3ed,	// (0x0002e12c) popup_image_details_window_g3_ParamLimits

0xd3ed,	// (0x0002e12c) popup_image_details_window_g3

0xf792,	// (0x000304d1) popup_image_details_window_g_ParamLimits

0xd401,	// (0x0002e140) popup_image_details_window_t1_ParamLimits

0xd413,	// (0x0002e152) popup_image_details_window_t2_ParamLimits

0xd42c,	// (0x0002e16b) popup_image_details_window_t3_ParamLimits

0xd440,	// (0x0002e17f) popup_image_details_window_t4_ParamLimits

0xd45b,	// (0x0002e19a) popup_image_details_window_t5_ParamLimits

0xf799,	// (0x000304d8) popup_image_details_window_t_ParamLimits

0x8ce7,	// (0x00029a26) cl_header_name_pane_ParamLimits

0x8ce7,	// (0x00029a26) cl_header_name_pane

0x9073,	// (0x00029db2) cl_header_name_pane_t1_ParamLimits

0x9073,	// (0x00029db2) cl_header_name_pane_t1

0x9094,	// (0x00029dd3) cl_header_name_pane_t2_ParamLimits

0x9094,	// (0x00029dd3) cl_header_name_pane_t2

0x90d6,	// (0x00029e15) cl_header_name_pane_t3_ParamLimits

0x90d6,	// (0x00029e15) cl_header_name_pane_t3

0x0002,

0xfb8b,	// (0x000308ca) cl_header_name_pane_t_ParamLimits

0xfb8b,	// (0x000308ca) cl_header_name_pane_t

0xb82a,	// (0x0002c569) navi_pane_mv_g2_ParamLimits

0xdec7,	// (0x0002ec06) field_vitu2_entry_pane_g1_ParamLimits

0xded3,	// (0x0002ec12) field_vitu2_entry_pane_g2_ParamLimits

0xdedf,	// (0x0002ec1e) field_vitu2_entry_pane_g3_ParamLimits

0xdedf,	// (0x0002ec1e) field_vitu2_entry_pane_g3

0xf987,	// (0x000306c6) field_vitu2_entry_pane_g_ParamLimits

0x371d,	// (0x0002445c) cell_vitu2_itu_pane_g1_ParamLimits

0x372d,	// (0x0002446c) cell_vitu2_itu_pane_g2_ParamLimits

0x372d,	// (0x0002446c) cell_vitu2_itu_pane_g2

0x0001,

0xf993,	// (0x000306d2) cell_vitu2_itu_pane_g_ParamLimits

0xf993,	// (0x000306d2) cell_vitu2_itu_pane_g

0xdf12,	// (0x0002ec51) bg_vkb2_func_pane_cp05_ParamLimits

0xdf12,	// (0x0002ec51) bg_vkb2_func_pane_cp05

0xdf12,	// (0x0002ec51) bg_vkb2_func_pane_cp03

0xdf12,	// (0x0002ec51) bg_vkb2_func_pane_cp04

0xdf12,	// (0x0002ec51) bg_vkb2_func_pane_cp10_ParamLimits

0xdf12,	// (0x0002ec51) bg_vkb2_func_pane_cp10

0x8c8d,	// (0x000299cc) bg_vkb2_func_pane_cp08

0x8c74,	// (0x000299b3) bg_vkb2_func_pane_cp06

0x8c81,	// (0x000299c0) bg_vkb2_func_pane_cp07

0xe634,	// (0x0002f373) bg_vkb2_func_pane_cp11_ParamLimits

0xe634,	// (0x0002f373) bg_vkb2_func_pane_cp11

0xe649,	// (0x0002f388) bg_vkb2_func_pane_cp12_ParamLimits

0xe649,	// (0x0002f388) bg_vkb2_func_pane_cp12

0x3a01,	// (0x00024740) bg_vkb2_func_pane_cp09

0xdf2a,	// (0x0002ec69) bg_vkb2_func_pane_g1

0xafe0,	// (0x0002bd1f) bg_vkb2_func_pane_g2

0xdf32,	// (0x0002ec71) bg_vkb2_func_pane_g3

0xdf3a,	// (0x0002ec79) bg_vkb2_func_pane_g4

0xe1bb,	// (0x0002eefa) bg_vkb2_func_pane_g5

0xdf52,	// (0x0002ec91) bg_vkb2_func_pane_g6

0xdf5a,	// (0x0002ec99) bg_vkb2_func_pane_g7

0xdf4a,	// (0x0002ec89) bg_vkb2_func_pane_g8

0xafc0,	// (0x0002bcff) bg_vkb2_func_pane_g9

0x0008,

0xfb92,	// (0x000308d1) bg_vkb2_func_pane_g

0x8fa9,	// (0x00029ce8) blid2_tripm_pane_g6_ParamLimits

0x8fa9,	// (0x00029ce8) blid2_tripm_pane_g6

0xdd17,	// (0x0002ea56) mp4_progress_pane_g1

0x9018,	// (0x00029d57) blid2_tripm_values_pane_ParamLimits

0x9018,	// (0x00029d57) blid2_tripm_values_pane

0x9107,	// (0x00029e46) blid2_tripm_values_pane_t1

0x9115,	// (0x00029e54) blid2_tripm_values_pane_t2

0x9123,	// (0x00029e62) blid2_tripm_values_pane_t3

0x9131,	// (0x00029e70) blid2_tripm_values_pane_t4

0x913f,	// (0x00029e7e) blid2_tripm_values_pane_t5

0x914d,	// (0x00029e8c) blid2_tripm_values_pane_t6

0x915b,	// (0x00029e9a) blid2_tripm_values_pane_t7

0x9169,	// (0x00029ea8) blid2_tripm_values_pane_t8

0x9177,	// (0x00029eb6) blid2_tripm_values_pane_t9

0x0008,

0xfba5,	// (0x000308e4) blid2_tripm_values_pane_t

0x4ee6,	// (0x00025c25) call_video_pane_t1_ParamLimits

0x4ef8,	// (0x00025c37) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00030014) call_video_pane_t_ParamLimits

0x61d3,	// (0x00026f12) msg_header_pane_g1_ParamLimits

0xba2e,	// (0x0002c76d) msg_header_pane_g2_ParamLimits

0xba2e,	// (0x0002c76d) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0003022e) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0003022e) msg_header_pane_g

0x45fb,	// (0x0002533a) main_clock2_pane_ParamLimits

0x7b06,	// (0x00028845) grid_clock2_toolbar_pane_ParamLimits

0x7b06,	// (0x00028845) grid_clock2_toolbar_pane

0x7b06,	// (0x00028845) listscroll_clock2_pane_ParamLimits

0x7b06,	// (0x00028845) listscroll_clock2_pane

0x7bd5,	// (0x00028914) main_clock2_pane_t3_ParamLimits

0x7bd5,	// (0x00028914) main_clock2_pane_t3

0x7bee,	// (0x0002892d) main_clock2_pane_t4_ParamLimits

0x7bee,	// (0x0002892d) main_clock2_pane_t4

0xe6f5,	// (0x0002f434) cell_clock2_toolbar_pane

0xe6fd,	// (0x0002f43c) cell_clock2_toolbar_pane_cp01

0xe6fd,	// (0x0002f43c) cell_clock2_toolbar_pane_cp02

0xe705,	// (0x0002f444) cell_clock2_toolbar_pane_cp03

0xe70d,	// (0x0002f44c) list_clock2_pane

0xb6cc,	// (0x0002c40b) scroll_pane_cp10

0xe715,	// (0x0002f454) list_single_clock2_pane_ParamLimits

0xe715,	// (0x0002f454) list_single_clock2_pane

0xb88b,	// (0x0002c5ca) list_highlight_pane_cp08

0xe722,	// (0x0002f461) list_single_clock2_pane_t1

0xe730,	// (0x0002f46f) list_single_clock2_pane_t2

0x0001,

0xfbb8,	// (0x000308f7) list_single_clock2_pane_t

0x3a01,	// (0x00024740) bg_button_pane_cp10

0xe73e,	// (0x0002f47d) cell_clock2_toolbar_pane_g1

0x2b85,	// (0x000238c4) aid_main_viewer_pane_g1_ParamLimits

0x2b85,	// (0x000238c4) aid_main_viewer_pane_g1

0x2b91,	// (0x000238d0) aid_main_viewer_pane_g2_ParamLimits

0x2b91,	// (0x000238d0) aid_main_viewer_pane_g2

0x61f1,	// (0x00026f30) aid_main_viewer_pane_g3_ParamLimits

0x61f1,	// (0x00026f30) aid_main_viewer_pane_g3

0x6200,	// (0x00026f3f) aid_main_viewer_pane_g4_ParamLimits

0x6200,	// (0x00026f3f) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0003023f) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0003023f) aid_main_viewer_pane_g

0x3c2b,	// (0x0002496a) main_calc_pane_ParamLimits

0x69dc,	// (0x0002771b) main_dialer2_pane_ParamLimits

0x3a01,	// (0x00024740) main_cam6_pane

0x3a01,	// (0x00024740) main_vid6_pane

0x7b12,	// (0x00028851) listscroll_gen_pane_cp06_ParamLimits

0x7b12,	// (0x00028851) listscroll_gen_pane_cp06

0x7c07,	// (0x00028946) main_clock2_pane_t5_ParamLimits

0x7c07,	// (0x00028946) main_clock2_pane_t5

0x7c5c,	// (0x0002899b) aid_call2_pane_cp10_ParamLimits

0x7c6e,	// (0x000289ad) aid_call_pane_cp10_ParamLimits

0xb758,	// (0x0002c497) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb758,	// (0x0002c497) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7c80,	// (0x000289bf) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7c80,	// (0x000289bf) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb758,	// (0x0002c497) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf849,	// (0x00030588) popup_clock_analogue_window_cp10_g_ParamLimits

0x7c92,	// (0x000289d1) popup_clock_analogue_window_cp10_t1_ParamLimits

0xdd81,	// (0x0002eac0) cell_dialer2_keypad_pane_g2_ParamLimits

0xdd81,	// (0x0002eac0) cell_dialer2_keypad_pane_g2

0x0001,

0xf92f,	// (0x0003066e) cell_dialer2_keypad_pane_g_ParamLimits

0xf92f,	// (0x0003066e) cell_dialer2_keypad_pane_g

0x80f3,	// (0x00028e32) cell_dialer2_keypad_pane_t1

0x8564,	// (0x000292a3) main_cset_text2_pane_ParamLimits

0x8564,	// (0x000292a3) main_cset_text2_pane

0xe408,	// (0x0002f147) area_vitu2_query_pane_g1_ParamLimits

0x8c19,	// (0x00029958) area_vitu2_query_pane_g2_ParamLimits

0xfad5,	// (0x00030814) area_vitu2_query_pane_g_ParamLimits

0xe48c,	// (0x0002f1cb) area_vitu2_query_pane_t7_ParamLimits

0xe48c,	// (0x0002f1cb) area_vitu2_query_pane_t7

0x8c74,	// (0x000299b3) bg_button_pane_cp018_ParamLimits

0x8c81,	// (0x000299c0) bg_button_pane_cp021_ParamLimits

0x8c8d,	// (0x000299cc) bg_button_pane_cp022_ParamLimits

0x8c8d,	// (0x000299cc) bg_vkb2_func_pane_cp08_ParamLimits

0x8c74,	// (0x000299b3) bg_vkb2_func_pane_cp06_ParamLimits

0x8c81,	// (0x000299c0) bg_vkb2_func_pane_cp07_ParamLimits

0x8c9c,	// (0x000299db) input_focus_pane_cp09_ParamLimits

0xe746,	// (0x0002f485) cam6_autofocus_pane_ParamLimits

0xe746,	// (0x0002f485) cam6_autofocus_pane

0x39a0,	// (0x000246df) cam6_image_uncrop_pane_ParamLimits

0x39a0,	// (0x000246df) cam6_image_uncrop_pane

0x39ad,	// (0x000246ec) cam6_indi_pane_ParamLimits

0x39ad,	// (0x000246ec) cam6_indi_pane

0x39c3,	// (0x00024702) cam6_mode_pane_ParamLimits

0x39c3,	// (0x00024702) cam6_mode_pane

0x39d5,	// (0x00024714) cam6_timer_pane_ParamLimits

0x39d5,	// (0x00024714) cam6_timer_pane

0x39e1,	// (0x00024720) cam6_zoom_pane_ParamLimits

0x39e1,	// (0x00024720) cam6_zoom_pane

0x9185,	// (0x00029ec4) cam6_mode_pane_g1_ParamLimits

0x9185,	// (0x00029ec4) cam6_mode_pane_g1

0x9195,	// (0x00029ed4) cam6_mode_pane_g2_ParamLimits

0x9195,	// (0x00029ed4) cam6_mode_pane_g2

0x91a5,	// (0x00029ee4) cam6_mode_pane_g3_ParamLimits

0x91a5,	// (0x00029ee4) cam6_mode_pane_g3

0x91b5,	// (0x00029ef4) cam6_mode_pane_g4_ParamLimits

0x91b5,	// (0x00029ef4) cam6_mode_pane_g4

0x0003,

0xfbbd,	// (0x000308fc) cam6_mode_pane_g_ParamLimits

0xfbbd,	// (0x000308fc) cam6_mode_pane_g

0xe752,	// (0x0002f491) bg_tb_trans_pane_cp08_ParamLimits

0xe752,	// (0x0002f491) bg_tb_trans_pane_cp08

0xe760,	// (0x0002f49f) cam6_battery_pane_ParamLimits

0xe760,	// (0x0002f49f) cam6_battery_pane

0xe776,	// (0x0002f4b5) cam6_indi_pane_g1_ParamLimits

0xe776,	// (0x0002f4b5) cam6_indi_pane_g1

0xe788,	// (0x0002f4c7) cam6_indi_pane_g2_ParamLimits

0xe788,	// (0x0002f4c7) cam6_indi_pane_g2

0xe79a,	// (0x0002f4d9) cam6_indi_pane_g3_ParamLimits

0xe79a,	// (0x0002f4d9) cam6_indi_pane_g3

0x0002,

0xfbc6,	// (0x00030905) cam6_indi_pane_g_ParamLimits

0xfbc6,	// (0x00030905) cam6_indi_pane_g

0xe7ac,	// (0x0002f4eb) cam6_indi_pane_t1_ParamLimits

0xe7ac,	// (0x0002f4eb) cam6_indi_pane_t1

0x827a,	// (0x00028fb9) cam6_autofocus_pane_g1

0x8272,	// (0x00028fb1) cam6_autofocus_pane_g2

0x828a,	// (0x00028fc9) cam6_autofocus_pane_g3

0x8282,	// (0x00028fc1) cam6_autofocus_pane_g4

0x0003,

0xfbcd,	// (0x0003090c) cam6_autofocus_pane_g

0xe7d2,	// (0x0002f511) cam6_timer_pane_g1

0xe7da,	// (0x0002f519) cam6_timer_pane_t1

0xe7e8,	// (0x0002f527) cam6_zoom_cont_pane

0xe7f0,	// (0x0002f52f) cam6_zoom_pane_g1

0xe7f8,	// (0x0002f537) cam6_zoom_pane_g2

0x91c5,	// (0x00029f04) cam6_zoom_pane_g3

0x0002,

0xfbd6,	// (0x00030915) cam6_zoom_pane_g

0xd276,	// (0x0002dfb5) cam6_battery_pane_g1

0xd276,	// (0x0002dfb5) cam6_battery_pane_g2

0x0001,

0xf756,	// (0x00030495) cam6_battery_pane_g

0xe800,	// (0x0002f53f) cam6_zoom_cont_pane_g1

0xe809,	// (0x0002f548) cam6_zoom_cont_pane_g2

0xe812,	// (0x0002f551) cam6_zoom_cont_pane_g3

0x0002,

0xfbdd,	// (0x0003091c) cam6_zoom_cont_pane_g

0x91e2,	// (0x00029f21) cam6_mode_pane_cp_ParamLimits

0x91e2,	// (0x00029f21) cam6_mode_pane_cp

0x91f4,	// (0x00029f33) cam6_zoom_pane_cp_ParamLimits

0x91f4,	// (0x00029f33) cam6_zoom_pane_cp

0x9200,	// (0x00029f3f) vid6_image_uncrop_cif_pane_ParamLimits

0x9200,	// (0x00029f3f) vid6_image_uncrop_cif_pane

0x920e,	// (0x00029f4d) vid6_image_uncrop_nhd_pane_ParamLimits

0x920e,	// (0x00029f4d) vid6_image_uncrop_nhd_pane

0x921b,	// (0x00029f5a) vid6_image_uncrop_vga_pane_ParamLimits

0x921b,	// (0x00029f5a) vid6_image_uncrop_vga_pane

0x9228,	// (0x00029f67) vid6_image_uncrop_wvga_pane_ParamLimits

0x9228,	// (0x00029f67) vid6_image_uncrop_wvga_pane

0x9235,	// (0x00029f74) vid6_indi_pane_ParamLimits

0x9235,	// (0x00029f74) vid6_indi_pane

0xe752,	// (0x0002f491) bg_tb_trans_pane_cp09_ParamLimits

0xe752,	// (0x0002f491) bg_tb_trans_pane_cp09

0xe826,	// (0x0002f565) cam6_battery_pane_cp_ParamLimits

0xe826,	// (0x0002f565) cam6_battery_pane_cp

0xe832,	// (0x0002f571) vid6_indi_pane_g1_ParamLimits

0xe832,	// (0x0002f571) vid6_indi_pane_g1

0xe844,	// (0x0002f583) vid6_indi_pane_g2_ParamLimits

0xe844,	// (0x0002f583) vid6_indi_pane_g2

0xe856,	// (0x0002f595) vid6_indi_pane_g3_ParamLimits

0xe856,	// (0x0002f595) vid6_indi_pane_g3

0xe86b,	// (0x0002f5aa) vid6_indi_pane_g4_ParamLimits

0xe86b,	// (0x0002f5aa) vid6_indi_pane_g4

0xe880,	// (0x0002f5bf) vid6_indi_pane_g5_ParamLimits

0xe880,	// (0x0002f5bf) vid6_indi_pane_g5

0x0004,

0xfbe4,	// (0x00030923) vid6_indi_pane_g_ParamLimits

0xfbe4,	// (0x00030923) vid6_indi_pane_g

0xe89a,	// (0x0002f5d9) vid6_indi_pane_t1_ParamLimits

0xe89a,	// (0x0002f5d9) vid6_indi_pane_t1

0xe8b0,	// (0x0002f5ef) vid6_indi_pane_t2_ParamLimits

0xe8b0,	// (0x0002f5ef) vid6_indi_pane_t2

0xe8d8,	// (0x0002f617) vid6_indi_pane_t3_ParamLimits

0xe8d8,	// (0x0002f617) vid6_indi_pane_t3

0xe900,	// (0x0002f63f) vid6_indi_pane_t4_ParamLimits

0xe900,	// (0x0002f63f) vid6_indi_pane_t4

0x0003,

0xfbef,	// (0x0003092e) vid6_indi_pane_t_ParamLimits

0xfbef,	// (0x0003092e) vid6_indi_pane_t

0xe924,	// (0x0002f663) wait_bar_pane_cp08

0x924c,	// (0x00029f8b) main_cset_text2_pane_t1_ParamLimits

0x924c,	// (0x00029f8b) main_cset_text2_pane_t1

0x91cd,	// (0x00029f0c) listscroll_gen_pane_cp06_t1_ParamLimits

0x91cd,	// (0x00029f0c) listscroll_gen_pane_cp06_t1

0x3a01,	// (0x00024740) main_cam6_set_pane

0x3434,	// (0x00024173) bg_tb_trans_pane_cp06_ParamLimits

0x3442,	// (0x00024181) cam4_indicators_pane_g1_ParamLimits

0x344f,	// (0x0002418e) cam4_indicators_pane_g2_ParamLimits

0xf963,	// (0x000306a2) cam4_indicators_pane_g_ParamLimits

0x3467,	// (0x000241a6) cam4_indicators_pane_t1_ParamLimits

0xdea0,	// (0x0002ebdf) bg_tb_trans_pane_cp07_ParamLimits

0x3442,	// (0x00024181) vid4_indicators_pane_g1_ParamLimits

0x3536,	// (0x00024275) vid4_indicators_pane_g2_ParamLimits

0x3543,	// (0x00024282) vid4_indicators_pane_g3_ParamLimits

0x3550,	// (0x0002428f) vid4_indicators_pane_g4_ParamLimits

0xf975,	// (0x000306b4) vid4_indicators_pane_g_ParamLimits

0x355c,	// (0x0002429b) vid4_indicators_pane_t1_ParamLimits

0xe50a,	// (0x0002f249) vid4_progress_pane_g1_ParamLimits

0xe519,	// (0x0002f258) vid4_progress_pane_g2_ParamLimits

0xe528,	// (0x0002f267) vid4_progress_pane_g3_ParamLimits

0xe537,	// (0x0002f276) vid4_progress_pane_g4_ParamLimits

0xfb20,	// (0x0003085f) vid4_progress_pane_g_ParamLimits

0xe54f,	// (0x0002f28e) vid4_progress_pane_t1_ParamLimits

0xe565,	// (0x0002f2a4) vid4_progress_pane_t2_ParamLimits

0xe57a,	// (0x0002f2b9) vid4_progress_pane_t3_ParamLimits

0xfb2b,	// (0x0003086a) vid4_progress_pane_t_ParamLimits

0xe58f,	// (0x0002f2ce) wait_bar_pane_cp07_ParamLimits

0x9266,	// (0x00029fa5) main_cam6_set_pane_g2_ParamLimits

0x9266,	// (0x00029fa5) main_cam6_set_pane_g2

0x9288,	// (0x00029fc7) main_cset6_listscroll_pane_ParamLimits

0x9288,	// (0x00029fc7) main_cset6_listscroll_pane

0x92a2,	// (0x00029fe1) main_cset6_slider_pane_ParamLimits

0x92a2,	// (0x00029fe1) main_cset6_slider_pane

0x92b8,	// (0x00029ff7) main_cset6_text2_pane_ParamLimits

0x92b8,	// (0x00029ff7) main_cset6_text2_pane

0xe934,	// (0x0002f673) main_cset6_text_pane

0xe020,	// (0x0002ed5f) main_cset_list_pane_copy1_ParamLimits

0xe020,	// (0x0002ed5f) main_cset_list_pane_copy1

0xe030,	// (0x0002ed6f) scroll_pane_cp028_copy1

0x92c6,	// (0x0002a005) cset_list_set_pane_copy1

0x92d8,	// (0x0002a017) aid_position_infowindow_above_copy1

0x92e0,	// (0x0002a01f) aid_position_infowindow_below_copy1

0x92e8,	// (0x0002a027) cset_list_set_pane_g1_copy1

0x92f0,	// (0x0002a02f) cset_list_set_pane_g3_copy1_ParamLimits

0x92f0,	// (0x0002a02f) cset_list_set_pane_g3_copy1

0x92ff,	// (0x0002a03e) cset_list_set_pane_t1_copy1_ParamLimits

0x92ff,	// (0x0002a03e) cset_list_set_pane_t1_copy1

0x3c2b,	// (0x0002496a) list_highlight_pane_cp021_copy1_ParamLimits

0x3c2b,	// (0x0002496a) list_highlight_pane_cp021_copy1

0xe93c,	// (0x0002f67b) cset6_slider_pane_ParamLimits

0xe93c,	// (0x0002f67b) cset6_slider_pane

0xe968,	// (0x0002f6a7) main_cset6_slider_pane_g1_ParamLimits

0xe968,	// (0x0002f6a7) main_cset6_slider_pane_g1

0x9314,	// (0x0002a053) main_cset6_slider_pane_g2_ParamLimits

0x9314,	// (0x0002a053) main_cset6_slider_pane_g2

0xe045,	// (0x0002ed84) main_cset6_slider_pane_g3_ParamLimits

0xe045,	// (0x0002ed84) main_cset6_slider_pane_g3

0x8629,	// (0x00029368) main_cset6_slider_pane_g4_ParamLimits

0x8629,	// (0x00029368) main_cset6_slider_pane_g4

0x8671,	// (0x000293b0) main_cset6_slider_pane_g5_ParamLimits

0x8671,	// (0x000293b0) main_cset6_slider_pane_g5

0xe045,	// (0x0002ed84) main_cset6_slider_pane_g7_ParamLimits

0xe045,	// (0x0002ed84) main_cset6_slider_pane_g7

0xe051,	// (0x0002ed90) main_cset6_slider_pane_g8_ParamLimits

0xe051,	// (0x0002ed90) main_cset6_slider_pane_g8

0x8611,	// (0x00029350) main_cset6_slider_pane_g9_ParamLimits

0x8611,	// (0x00029350) main_cset6_slider_pane_g9

0x861d,	// (0x0002935c) main_cset6_slider_pane_g10_ParamLimits

0x861d,	// (0x0002935c) main_cset6_slider_pane_g10

0x8629,	// (0x00029368) main_cset6_slider_pane_g11_ParamLimits

0x8629,	// (0x00029368) main_cset6_slider_pane_g11

0x8635,	// (0x00029374) main_cset6_slider_pane_g12_ParamLimits

0x8635,	// (0x00029374) main_cset6_slider_pane_g12

0x8641,	// (0x00029380) main_cset6_slider_pane_g13_ParamLimits

0x8641,	// (0x00029380) main_cset6_slider_pane_g13

0x864d,	// (0x0002938c) main_cset6_slider_pane_g14_ParamLimits

0x864d,	// (0x0002938c) main_cset6_slider_pane_g14

0x933c,	// (0x0002a07b) main_cset6_slider_pane_g15_ParamLimits

0x933c,	// (0x0002a07b) main_cset6_slider_pane_g15

0x8671,	// (0x000293b0) main_cset6_slider_pane_g16_ParamLimits

0x8671,	// (0x000293b0) main_cset6_slider_pane_g16

0x867d,	// (0x000293bc) main_cset6_slider_pane_g17_ParamLimits

0x867d,	// (0x000293bc) main_cset6_slider_pane_g17

0x0011,

0xfbf8,	// (0x00030937) main_cset6_slider_pane_g_ParamLimits

0xfbf8,	// (0x00030937) main_cset6_slider_pane_g

0xe990,	// (0x0002f6cf) main_cset6_slider_pane_t1_ParamLimits

0xe990,	// (0x0002f6cf) main_cset6_slider_pane_t1

0xe9d1,	// (0x0002f710) main_cset6_slider_pane_t2_ParamLimits

0xe9d1,	// (0x0002f710) main_cset6_slider_pane_t2

0xe9fc,	// (0x0002f73b) main_cset6_slider_pane_t3_ParamLimits

0xe9fc,	// (0x0002f73b) main_cset6_slider_pane_t3

0x9354,	// (0x0002a093) main_cset6_slider_pane_t4_ParamLimits

0x9354,	// (0x0002a093) main_cset6_slider_pane_t4

0x937f,	// (0x0002a0be) main_cset6_slider_pane_t5_ParamLimits

0x937f,	// (0x0002a0be) main_cset6_slider_pane_t5

0xea27,	// (0x0002f766) main_cset6_slider_pane_t7_ParamLimits

0xea27,	// (0x0002f766) main_cset6_slider_pane_t7

0x93aa,	// (0x0002a0e9) main_cset6_slider_pane_t8_ParamLimits

0x93aa,	// (0x0002a0e9) main_cset6_slider_pane_t8

0x93ce,	// (0x0002a10d) main_cset6_slider_pane_t9_ParamLimits

0x93ce,	// (0x0002a10d) main_cset6_slider_pane_t9

0x93f2,	// (0x0002a131) main_cset6_slider_pane_t10_ParamLimits

0x93f2,	// (0x0002a131) main_cset6_slider_pane_t10

0x9416,	// (0x0002a155) main_cset6_slider_pane_t11_ParamLimits

0x9416,	// (0x0002a155) main_cset6_slider_pane_t11

0xea5d,	// (0x0002f79c) main_cset6_slider_pane_t14_ParamLimits

0xea5d,	// (0x0002f79c) main_cset6_slider_pane_t14

0xea96,	// (0x0002f7d5) main_cset6_slider_pane_t15_ParamLimits

0xea96,	// (0x0002f7d5) main_cset6_slider_pane_t15

0x000b,

0xfc1d,	// (0x0003095c) main_cset6_slider_pane_t_ParamLimits

0xfc1d,	// (0x0003095c) main_cset6_slider_pane_t

0xeacf,	// (0x0002f80e) cset_slider_pane_g1_copy1

0xead8,	// (0x0002f817) cset_slider_pane_g2_copy1

0xeae1,	// (0x0002f820) cset_slider_pane_g3_copy1

0x3a01,	// (0x00024740) bg_popup_sub_pane_cp011_copy1

0xe23a,	// (0x0002ef79) main_cset_text_pane_g1_copy1

0xe242,	// (0x0002ef81) main_cset_text_pane_t1_copy1

0xe250,	// (0x0002ef8f) main_cset_text_pane_t2_copy1

0xe25e,	// (0x0002ef9d) main_cset_text_pane_t3_copy1

0xe26c,	// (0x0002efab) main_cset_text_pane_t4_copy1

0xe27a,	// (0x0002efb9) main_cset_text_pane_t5_copy1

0xe288,	// (0x0002efc7) main_cset_text_pane_t6_copy1

0xe296,	// (0x0002efd5) main_cset_text_pane_t7_copy1

0x943a,	// (0x0002a179) main_cset_text2_pane_t1_copy1

0x3a01,	// (0x00024740) main_ncimui_pane

0x6bea,	// (0x00027929) popup_query_ncimui_window_ParamLimits

0x6bea,	// (0x00027929) popup_query_ncimui_window

0xd546,	// (0x0002e285) field_cale_ev2_pane_g4_ParamLimits

0xd546,	// (0x0002e285) field_cale_ev2_pane_g4

0x807c,	// (0x00028dbb) cell_video_dialer_keypad_pane_g2_ParamLimits

0x807c,	// (0x00028dbb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf90a,	// (0x00030649) cell_video_dialer_keypad_pane_g_ParamLimits

0xf90a,	// (0x00030649) cell_video_dialer_keypad_pane_g

0x8094,	// (0x00028dd3) cell_video_dialer_keypad_pane_t1

0x3a01,	// (0x00024740) bg_popup_window_pane_cp012

0xb5a5,	// (0x0002c2e4) heading_pane_cp06

0xebd3,	// (0x0002f912) ncim_query_content_pane

0x3a01,	// (0x00024740) bg_popup_heading_pane_cp01

0xebdb,	// (0x0002f91a) ncim_heading_pane_t1

0xebe9,	// (0x0002f928) ncim_indicator_popup_pane

0xebfb,	// (0x0002f93a) ncim_query_button_pane

0xec0f,	// (0x0002f94e) ncim_query_content_pane_t1

0xec21,	// (0x0002f960) ncim_query_content_pane_t2

0x0005,

0xfc5c,	// (0x0003099b) ncim_query_content_pane_t

0xec5b,	// (0x0002f99a) ncim_query_list_pane

0xec6d,	// (0x0002f9ac) ncim_query_popup_pane

0xebe9,	// (0x0002f928) ncim_indicator_popup_pane_ParamLimits

0x951a,	// (0x0002a259) ncim_query_content_pane_g1_ParamLimits

0x951a,	// (0x0002a259) ncim_query_content_pane_g1

0xec0f,	// (0x0002f94e) ncim_query_content_pane_t1_ParamLimits

0xec21,	// (0x0002f960) ncim_query_content_pane_t2_ParamLimits

0x9526,	// (0x0002a265) ncim_query_content_pane_t3_ParamLimits

0x9526,	// (0x0002a265) ncim_query_content_pane_t3

0x954e,	// (0x0002a28d) ncim_query_content_pane_t4_ParamLimits

0x954e,	// (0x0002a28d) ncim_query_content_pane_t4

0x9576,	// (0x0002a2b5) ncim_query_content_pane_t5_ParamLimits

0x9576,	// (0x0002a2b5) ncim_query_content_pane_t5

0xec33,	// (0x0002f972) ncim_query_content_pane_t6_ParamLimits

0xec33,	// (0x0002f972) ncim_query_content_pane_t6

0xfc5c,	// (0x0003099b) ncim_query_content_pane_t_ParamLimits

0xec5b,	// (0x0002f99a) ncim_query_list_pane_ParamLimits

0xec6d,	// (0x0002f9ac) ncim_query_popup_pane_ParamLimits

0xec81,	// (0x0002f9c0) wait_bar_pane_cp04

0x3a01,	// (0x00024740) input_focus_pane_cp011

0xec89,	// (0x0002f9c8) ncim_query_popup_pane_t1

0xec97,	// (0x0002f9d6) ncim_list_query_list_pane_ParamLimits

0xec97,	// (0x0002f9d6) ncim_list_query_list_pane

0x3a01,	// (0x00024740) bg_button_pane_cp027

0xecaa,	// (0x0002f9e9) ncim_query_button_pane_g1

0x3a01,	// (0x00024740) list_highlight_pane_cp012

0xecb4,	// (0x0002f9f3) ncim_list_query_list_pane_g1

0xecbc,	// (0x0002f9fb) ncim_list_query_list_pane_t1

0x345b,	// (0x0002419a) cam4_indicators_pane_g3_ParamLimits

0x345b,	// (0x0002419a) cam4_indicators_pane_g3

0x345b,	// (0x0002419a) vid4_indicators_pane_g5_ParamLimits

0x345b,	// (0x0002419a) vid4_indicators_pane_g5

0xe543,	// (0x0002f282) vid4_progress_pane_g5_ParamLimits

0xe543,	// (0x0002f282) vid4_progress_pane_g5

0x9464,	// (0x0002a1a3) main_ncimui_pane_g1

0x94aa,	// (0x0002a1e9) ncimui_group_query_pane_ParamLimits

0x94aa,	// (0x0002a1e9) ncimui_group_query_pane

0x94de,	// (0x0002a21d) ncimui_list_pane_ParamLimits

0x94de,	// (0x0002a21d) ncimui_list_pane

0x94f6,	// (0x0002a235) ncimui_text_pane_ParamLimits

0x94f6,	// (0x0002a235) ncimui_text_pane

0x959e,	// (0x0002a2dd) ncimui_text_pane_t1_ParamLimits

0x959e,	// (0x0002a2dd) ncimui_text_pane_t1

0xecca,	// (0x0002fa09) ncimui_list_single_graphic_pane_ParamLimits

0xecca,	// (0x0002fa09) ncimui_list_single_graphic_pane

0x95bb,	// (0x0002a2fa) ncimui_query_pane_ParamLimits

0x95bb,	// (0x0002a2fa) ncimui_query_pane

0x3a01,	// (0x00024740) list_highlight_pane_cp013

0xecd7,	// (0x0002fa16) ncim_list_query_list_pane_t1_copy1

0xece5,	// (0x0002fa24) ncim_list_single_graphic_pane_g1

0xeced,	// (0x0002fa2c) ncim_query_button_pane_cp01

0xecf5,	// (0x0002fa34) ncim_query_entry_pane_ParamLimits

0xecf5,	// (0x0002fa34) ncim_query_entry_pane

0xed05,	// (0x0002fa44) ncimui_query_pane_g1

0xed0d,	// (0x0002fa4c) ncimui_query_pane_t1_ParamLimits

0xed0d,	// (0x0002fa4c) ncimui_query_pane_t1

0x3a01,	// (0x00024740) input_focus_pane_cp012

0xec89,	// (0x0002f9c8) ncim_query_entry_pane_t1

0x45fb,	// (0x0002533a) main_im_pane_ParamLimits

0x3c2b,	// (0x0002496a) main_mobtv_pane_ParamLimits

0x3c2b,	// (0x0002496a) main_mobtv_pane

0x8611,	// (0x00029350) main_cset6_slider_pane_g18_ParamLimits

0x8611,	// (0x00029350) main_cset6_slider_pane_g18

0x8641,	// (0x00029380) main_cset6_slider_pane_g19_ParamLimits

0x8641,	// (0x00029380) main_cset6_slider_pane_g19

0xed23,	// (0x0002fa62) bg_main_mobtv_pane_ParamLimits

0xed23,	// (0x0002fa62) bg_main_mobtv_pane

0x95cb,	// (0x0002a30a) main_mobtv_info_pane

0x95d4,	// (0x0002a313) main_mobtv_loading_pane_ParamLimits

0x95d4,	// (0x0002a313) main_mobtv_loading_pane

0xed31,	// (0x0002fa70) main_mobtv_pg_channel_list_pane

0xed3b,	// (0x0002fa7a) main_mobtv_pg_hdr_pane

0x95e1,	// (0x0002a320) main_mobtv_programe_curr_pane_ParamLimits

0x95e1,	// (0x0002a320) main_mobtv_programe_curr_pane

0x95ee,	// (0x0002a32d) main_mobtv_programe_next_pane_ParamLimits

0x95ee,	// (0x0002a32d) main_mobtv_programe_next_pane

0xed44,	// (0x0002fa83) popup_mobtv_noti_window

0xd276,	// (0x0002dfb5) main_tv_pg_hdr_pane_g1

0xed4c,	// (0x0002fa8b) main_tv_pg_hdr_pane_g2

0xed54,	// (0x0002fa93) main_tv_pg_hdr_pane_g3

0xed5c,	// (0x0002fa9b) main_tv_pg_hdr_pane_g4

0xed64,	// (0x0002faa3) main_tv_pg_hdr_pane_g5

0xed6c,	// (0x0002faab) main_tv_pg_hdr_pane_g6

0xed74,	// (0x0002fab3) main_tv_pg_hdr_pane_g7

0xed7c,	// (0x0002fabb) main_tv_pg_hdr_pane_g8

0xed84,	// (0x0002fac3) main_tv_pg_hdr_pane_g9

0xed8c,	// (0x0002facb) main_tv_pg_hdr_pane_g10

0xed96,	// (0x0002fad5) main_tv_pg_hdr_pane_g11

0x000a,

0xfc69,	// (0x000309a8) main_tv_pg_hdr_pane_g

0xeda0,	// (0x0002fadf) main_tv_pg_hdr_pane_t1

0xedae,	// (0x0002faed) main_tv_pg_hdr_pane_t2

0xedbc,	// (0x0002fafb) main_tv_pg_hdr_pane_t3

0xedca,	// (0x0002fb09) main_tv_pg_hdr_pane_t4

0xedd8,	// (0x0002fb17) main_tv_pg_hdr_pane_t5

0x0004,

0xfc80,	// (0x000309bf) main_tv_pg_hdr_pane_t

0xede6,	// (0x0002fb25) single_mobtv_pg_channel_pane_ParamLimits

0xede6,	// (0x0002fb25) single_mobtv_pg_channel_pane

0xedf8,	// (0x0002fb37) single_mobtv_pg_channel_table_pane

0xee01,	// (0x0002fb40) single_mobtv_pg_channel_thumb_pane

0xee0a,	// (0x0002fb49) single_tv_pg_channel_pane_g1

0xee13,	// (0x0002fb52) single_tv_pg_channel_pane_g2

0x0001,

0xfc8b,	// (0x000309ca) single_tv_pg_channel_pane_g

0xd4a5,	// (0x0002e1e4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd4a5,	// (0x0002e1e4) bg_single_mobtv_pg_channel_thumb_pane

0xee1c,	// (0x0002fb5b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xee1c,	// (0x0002fb5b) single_mobtv_pg_channel_thumb_pane_g1

0xee2a,	// (0x0002fb69) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xee2a,	// (0x0002fb69) single_mobtv_pg_channel_thumb_pane_g2

0xee36,	// (0x0002fb75) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xee36,	// (0x0002fb75) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc90,	// (0x000309cf) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc90,	// (0x000309cf) single_mobtv_pg_channel_thumb_pane_g

0xee42,	// (0x0002fb81) single_mobtv_pg_channel_thumb_pane_t1

0xee50,	// (0x0002fb8f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc97,	// (0x000309d6) single_mobtv_pg_channel_thumb_pane_t

0xd276,	// (0x0002dfb5) bg_single_mobtv_pg_channel_table_pane_g1

0xd276,	// (0x0002dfb5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf756,	// (0x00030495) bg_single_mobtv_pg_channel_table_pane_g

0xee5e,	// (0x0002fb9d) single_mobtv_pg_channel_table_pane_t1

0xee6c,	// (0x0002fbab) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc9c,	// (0x000309db) single_mobtv_pg_channel_table_pane_t

0x9603,	// (0x0002a342) main_mobtv_info_pane_g1_ParamLimits

0x9603,	// (0x0002a342) main_mobtv_info_pane_g1

0x961f,	// (0x0002a35e) main_mobtv_info_pane_t1_ParamLimits

0x961f,	// (0x0002a35e) main_mobtv_info_pane_t1

0x9685,	// (0x0002a3c4) main_mobtv_info_pane_t2_ParamLimits

0x9685,	// (0x0002a3c4) main_mobtv_info_pane_t2

0x0002,

0xfca6,	// (0x000309e5) main_mobtv_info_pane_t_ParamLimits

0xfca6,	// (0x000309e5) main_mobtv_info_pane_t

0x9708,	// (0x0002a447) wait_bar_pane_cp05

0x9718,	// (0x0002a457) main_mobtv_loading_pane_g1_ParamLimits

0x9718,	// (0x0002a457) main_mobtv_loading_pane_g1

0x9729,	// (0x0002a468) main_mobtv_loading_pane_g2_ParamLimits

0x9729,	// (0x0002a468) main_mobtv_loading_pane_g2

0x9735,	// (0x0002a474) main_mobtv_loading_pane_g3_ParamLimits

0x9735,	// (0x0002a474) main_mobtv_loading_pane_g3

0x0002,

0xfcad,	// (0x000309ec) main_mobtv_loading_pane_g_ParamLimits

0xfcad,	// (0x000309ec) main_mobtv_loading_pane_g

0xee7a,	// (0x0002fbb9) main_mobtv_loading_pane_t1_ParamLimits

0xee7a,	// (0x0002fbb9) main_mobtv_loading_pane_t1

0xee92,	// (0x0002fbd1) main_mobtv_loading_pane_t2_ParamLimits

0xee92,	// (0x0002fbd1) main_mobtv_loading_pane_t2

0x0001,

0xfcb4,	// (0x000309f3) main_mobtv_loading_pane_t_ParamLimits

0xfcb4,	// (0x000309f3) main_mobtv_loading_pane_t

0x9746,	// (0x0002a485) wait_bar_pane_cp06_ParamLimits

0x9746,	// (0x0002a485) wait_bar_pane_cp06

0xeeb6,	// (0x0002fbf5) main_mobtv_programe_curr_pane_t1

0xeec4,	// (0x0002fc03) main_mobtv_programe_curr_pane_t2

0x0001,

0xfcb9,	// (0x000309f8) main_mobtv_programe_curr_pane_t

0xeed2,	// (0x0002fc11) main_mobtv_programe_next_pane_t1

0xeee0,	// (0x0002fc1f) main_mobtv_programe_next_pane_t2

0xeeee,	// (0x0002fc2d) main_mobtv_programe_next_pane_t3

0x0002,

0xfcbe,	// (0x000309fd) main_mobtv_programe_next_pane_t

0x3a01,	// (0x00024740) bg_popup_mobtv_noti_window_pane

0xeefc,	// (0x0002fc3b) popup_mobtv_noti_window_g1

0xef04,	// (0x0002fc43) popup_mobtv_noti_window_t1

0xef12,	// (0x0002fc51) popup_mobtv_noti_window_t2

0x0001,

0xfcc5,	// (0x00030a04) popup_mobtv_noti_window_t

0xd276,	// (0x0002dfb5) bg_popup_mobtv_noti_window_pane_g1

0x3a01,	// (0x00024740) sc_clock_pane

0x3a01,	// (0x00024740) main_fs_bigclock_pane

0x9002,	// (0x00029d41) blid2_tripm_pane_t4_ParamLimits

0x9002,	// (0x00029d41) blid2_tripm_pane_t4

0x9755,	// (0x0002a494) sc_clock_pane_g1_ParamLimits

0x9755,	// (0x0002a494) sc_clock_pane_g1

0x9767,	// (0x0002a4a6) sc_clock_pane_t1_ParamLimits

0x9767,	// (0x0002a4a6) sc_clock_pane_t1

0x9789,	// (0x0002a4c8) sc_clock_pane_t2_ParamLimits

0x9789,	// (0x0002a4c8) sc_clock_pane_t2

0x979f,	// (0x0002a4de) sc_clock_pane_t3_ParamLimits

0x979f,	// (0x0002a4de) sc_clock_pane_t3

0x0004,

0xfcca,	// (0x00030a09) sc_clock_pane_t_ParamLimits

0xfcca,	// (0x00030a09) sc_clock_pane_t

0xa462,	// (0x0002b1a1) main_fs_bigclock_indicator_pane_ParamLimits

0xa462,	// (0x0002b1a1) main_fs_bigclock_indicator_pane

0xd475,	// (0x0002e1b4) main_fs_bigclock_pane_g1_ParamLimits

0xd475,	// (0x0002e1b4) main_fs_bigclock_pane_g1

0xa46e,	// (0x0002b1ad) main_fs_bigclock_pane_t1_ParamLimits

0xa46e,	// (0x0002b1ad) main_fs_bigclock_pane_t1

0xa480,	// (0x0002b1bf) main_fs_bigclock_pane_t2_ParamLimits

0xa480,	// (0x0002b1bf) main_fs_bigclock_pane_t2

0xa492,	// (0x0002b1d1) main_fs_bigclock_pane_t3_ParamLimits

0xa492,	// (0x0002b1d1) main_fs_bigclock_pane_t3

0x0002,

0xfebf,	// (0x00030bfe) main_fs_bigclock_pane_t_ParamLimits

0xfebf,	// (0x00030bfe) main_fs_bigclock_pane_t

0x129a,	// (0x00021fd9) main_fs_bigclock_indicator_pane_g1

0xec03,	// (0x0002f942) ncim_query_content_pane_g2_ParamLimits

0xec03,	// (0x0002f942) ncim_query_content_pane_g2

0x0001,

0xfc57,	// (0x00030996) ncim_query_content_pane_g_ParamLimits

0xfc57,	// (0x00030996) ncim_query_content_pane_g

0x97b4,	// (0x0002a4f3) sc_clock_pane_t4_ParamLimits

0x97b4,	// (0x0002a4f3) sc_clock_pane_t4

0x3c2b,	// (0x0002496a) main_radioblah_pane

0xde0a,	// (0x0002eb49) cell_call4_button_pane_t1_copy1_ParamLimits

0xde0a,	// (0x0002eb49) cell_call4_button_pane_t1_copy1

0x946c,	// (0x0002a1ab) main_ncimui_pane_t1_ParamLimits

0x946c,	// (0x0002a1ab) main_ncimui_pane_t1

0x947e,	// (0x0002a1bd) main_ncimui_pane_t2_ParamLimits

0x947e,	// (0x0002a1bd) main_ncimui_pane_t2

0x0002,

0xfc50,	// (0x0003098f) main_ncimui_pane_t_ParamLimits

0xfc50,	// (0x0003098f) main_ncimui_pane_t

0xf03c,	// (0x0002fd7b) main_radioblah_anim_pane_ParamLimits

0xf03c,	// (0x0002fd7b) main_radioblah_anim_pane

0xf04d,	// (0x0002fd8c) main_radioblah_info_pane_ParamLimits

0xf04d,	// (0x0002fd8c) main_radioblah_info_pane

0xf061,	// (0x0002fda0) main_radioblah_pane_t1_ParamLimits

0xf061,	// (0x0002fda0) main_radioblah_pane_t1

0xf07d,	// (0x0002fdbc) main_radioblah_pane_t2_ParamLimits

0xf07d,	// (0x0002fdbc) main_radioblah_pane_t2

0x0003,

0xfceb,	// (0x00030a2a) main_radioblah_pane_t_ParamLimits

0xfceb,	// (0x00030a2a) main_radioblah_pane_t

0x984b,	// (0x0002a58a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x984b,	// (0x0002a58a) main_radioblah_rocker_ctrl_pane

0xf0c5,	// (0x0002fe04) main_radioblah_info_pane_t1_ParamLimits

0xf0c5,	// (0x0002fe04) main_radioblah_info_pane_t1

0x989f,	// (0x0002a5de) main_radioblah_info_pane_t2_ParamLimits

0x989f,	// (0x0002a5de) main_radioblah_info_pane_t2

0x0003,

0xfcf4,	// (0x00030a33) main_radioblah_info_pane_t_ParamLimits

0xfcf4,	// (0x00030a33) main_radioblah_info_pane_t

0xd276,	// (0x0002dfb5) main_radioblah_rocker_ctrl_pane_g1

0x994d,	// (0x0002a68c) main_radioblah_rocker_ctrl_pane_g2

0x9955,	// (0x0002a694) main_radioblah_rocker_ctrl_pane_g3

0x995d,	// (0x0002a69c) main_radioblah_rocker_ctrl_pane_g4

0x9965,	// (0x0002a6a4) main_radioblah_rocker_ctrl_pane_g5

0x996d,	// (0x0002a6ac) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcfd,	// (0x00030a3c) main_radioblah_rocker_ctrl_pane_g

0x943a,	// (0x0002a179) main_cset_text2_pane_t1_copy1_ParamLimits

0xde88,	// (0x0002ebc7) cam4_image_uncrop_qvga_pane

0xde98,	// (0x0002ebd7) vid4_image_uncrop_qcif_pane

0xe746,	// (0x0002f485) cam6_image_uncrop_qvga_pane_ParamLimits

0xe746,	// (0x0002f485) cam6_image_uncrop_qvga_pane

0xe81a,	// (0x0002f559) vid6_image_uncrop_qcif_pane_ParamLimits

0xe81a,	// (0x0002f559) vid6_image_uncrop_qcif_pane

0x3a01,	// (0x00024740) bg_popup_preview_window_pane_cp03

0xebb5,	// (0x0002f8f4) list_cset_text2_pane

0xebbd,	// (0x0002f8fc) main_cset6_text2_pane_g1

0xebc5,	// (0x0002f904) main_cset6_text2_pane_t1

0x9975,	// (0x0002a6b4) list_cset_text2_pane_t1_ParamLimits

0x9975,	// (0x0002a6b4) list_cset_text2_pane_t1

0x3c2b,	// (0x0002496a) main_radioblah_pane_ParamLimits

0x96f6,	// (0x0002a435) main_mobtv_info_pane_t3_ParamLimits

0x96f6,	// (0x0002a435) main_mobtv_info_pane_t3

0x9839,	// (0x0002a578) main_radioblah_pane_g1

0x9873,	// (0x0002a5b2) main_radioblah_info_pane_g1

0x98f2,	// (0x0002a631) main_radioblah_info_pane_t3_ParamLimits

0x98f2,	// (0x0002a631) main_radioblah_info_pane_t3

0x5919,	// (0x00026658) highlight_cell_cale_month_pane_ParamLimits

0x5919,	// (0x00026658) highlight_cell_cale_month_pane

0x3a01,	// (0x00024740) main_phob_fisheye_pane

0xd5ef,	// (0x0002e32e) scroll_pane_cp0031_ParamLimits

0xd5ef,	// (0x0002e32e) scroll_pane_cp0031

0xe924,	// (0x0002f663) wait_bar_pane_cp08_ParamLimits

0x92c6,	// (0x0002a005) cset_list_set_pane_copy1_ParamLimits

0xf0ff,	// (0x0002fe3e) highlight_cell_cale_month_pane_g1

0x998e,	// (0x0002a6cd) highlight_cell_cale_month_pane_t1

0xf107,	// (0x0002fe46) list_gen_pane_cp01

0xe030,	// (0x0002ed6f) scroll_pane_01

0x999c,	// (0x0002a6db) list_single_double_fisheye_pane

0x99a5,	// (0x0002a6e4) list_double_fisheye_pane_g1_ParamLimits

0x99a5,	// (0x0002a6e4) list_double_fisheye_pane_g1

0x99b1,	// (0x0002a6f0) list_double_fisheye_pane_g2_ParamLimits

0x99b1,	// (0x0002a6f0) list_double_fisheye_pane_g2

0x99bd,	// (0x0002a6fc) list_double_fisheye_pane_g3_ParamLimits

0x99bd,	// (0x0002a6fc) list_double_fisheye_pane_g3

0x0004,

0xfd0a,	// (0x00030a49) list_double_fisheye_pane_g_ParamLimits

0xfd0a,	// (0x00030a49) list_double_fisheye_pane_g

0x99e1,	// (0x0002a720) list_double_fisheye_pane_t1_ParamLimits

0x99e1,	// (0x0002a720) list_double_fisheye_pane_t1

0x99fc,	// (0x0002a73b) list_double_fisheye_pane_t2_ParamLimits

0x99fc,	// (0x0002a73b) list_double_fisheye_pane_t2

0x0001,

0xfd15,	// (0x00030a54) list_double_fisheye_pane_t_ParamLimits

0xfd15,	// (0x00030a54) list_double_fisheye_pane_t

0x3a01,	// (0x00024740) main_call5_pane

0x97dd,	// (0x0002a51c) sc_swipe_pane_ParamLimits

0x97dd,	// (0x0002a51c) sc_swipe_pane

0x9a2f,	// (0x0002a76e) call5_image_pane_ParamLimits

0x9a2f,	// (0x0002a76e) call5_image_pane

0x9a44,	// (0x0002a783) call5_swipe_1_pane_ParamLimits

0x9a44,	// (0x0002a783) call5_swipe_1_pane

0x9a55,	// (0x0002a794) call5_swipe_2_pane_ParamLimits

0x9a55,	// (0x0002a794) call5_swipe_2_pane

0x9a7a,	// (0x0002a7b9) popup_call5_audio_first_window_ParamLimits

0x9a7a,	// (0x0002a7b9) popup_call5_audio_first_window

0xd4a5,	// (0x0002e1e4) call5_swipe_1_pane_g1_ParamLimits

0xd4a5,	// (0x0002e1e4) call5_swipe_1_pane_g1

0x0009,	// (0x00020d48) call5_swipe_1_pane_g2_ParamLimits

0x0009,	// (0x00020d48) call5_swipe_1_pane_g2

0x0001,

0xfd1a,	// (0x00030a59) call5_swipe_1_pane_g_ParamLimits

0xfd1a,	// (0x00030a59) call5_swipe_1_pane_g

0x0015,	// (0x00020d54) call5_swipe_1_pane_t1_ParamLimits

0x0015,	// (0x00020d54) call5_swipe_1_pane_t1

0xd4a5,	// (0x0002e1e4) call5_swipe_2_pane_g1_ParamLimits

0xd4a5,	// (0x0002e1e4) call5_swipe_2_pane_g1

0x002a,	// (0x00020d69) call5_swipe_2_pane_g2_ParamLimits

0x002a,	// (0x00020d69) call5_swipe_2_pane_g2

0x0001,

0xfd1f,	// (0x00030a5e) call5_swipe_2_pane_g_ParamLimits

0xfd1f,	// (0x00030a5e) call5_swipe_2_pane_g

0x0036,	// (0x00020d75) call5_swipe_2_pane_t1_ParamLimits

0x0036,	// (0x00020d75) call5_swipe_2_pane_t1

0x004b,	// (0x00020d8a) sc_swipe_pane_g1_ParamLimits

0x004b,	// (0x00020d8a) sc_swipe_pane_g1

0x0058,	// (0x00020d97) sc_swipe_pane_g2_ParamLimits

0x0058,	// (0x00020d97) sc_swipe_pane_g2

0x0001,

0xfd24,	// (0x00030a63) sc_swipe_pane_g_ParamLimits

0xfd24,	// (0x00030a63) sc_swipe_pane_g

0x0064,	// (0x00020da3) sc_swipe_pane_t1_ParamLimits

0x0064,	// (0x00020da3) sc_swipe_pane_t1

0x3a01,	// (0x00024740) main_cmail_launcher_pane

0x9a89,	// (0x0002a7c8) aid_size_cell_cmail_l_ParamLimits

0x9a89,	// (0x0002a7c8) aid_size_cell_cmail_l

0x9aa2,	// (0x0002a7e1) grid_cmail_l_pane_ParamLimits

0x9aa2,	// (0x0002a7e1) grid_cmail_l_pane

0x9ab7,	// (0x0002a7f6) cell_cmail_l_pane_ParamLimits

0x9ab7,	// (0x0002a7f6) cell_cmail_l_pane

0x9ad9,	// (0x0002a818) cell_cmail_l_pane_g1_ParamLimits

0x9ad9,	// (0x0002a818) cell_cmail_l_pane_g1

0x9ae9,	// (0x0002a828) cell_cmail_l_pane_t1_ParamLimits

0x9ae9,	// (0x0002a828) cell_cmail_l_pane_t1

0x00cd,	// (0x00020e0c) cell_cmail_l_pane_t2_ParamLimits

0x00cd,	// (0x00020e0c) cell_cmail_l_pane_t2

0x0001,

0xfd29,	// (0x00030a68) cell_cmail_l_pane_t_ParamLimits

0xfd29,	// (0x00030a68) cell_cmail_l_pane_t

0x3c2b,	// (0x0002496a) grid_highlight_pane_cp018_ParamLimits

0x3c2b,	// (0x0002496a) grid_highlight_pane_cp018

0x3af9,	// (0x00024838) main2_pane_ParamLimits

0x3af9,	// (0x00024838) main2_pane

0x4771,	// (0x000254b0) popup_sp_fs_action_menu_bg_pane_g1

0x4779,	// (0x000254b8) popup_sp_fs_action_menu_bg_pane_g2

0x4781,	// (0x000254c0) popup_sp_fs_action_menu_bg_pane_g3

0x4789,	// (0x000254c8) popup_sp_fs_action_menu_bg_pane_g4

0x4791,	// (0x000254d0) popup_sp_fs_action_menu_bg_pane_g5

0x4799,	// (0x000254d8) popup_sp_fs_action_menu_bg_pane_g6

0x47a1,	// (0x000254e0) popup_sp_fs_action_menu_bg_pane_g7

0x47a9,	// (0x000254e8) popup_sp_fs_action_menu_bg_pane_g8

0x47b1,	// (0x000254f0) popup_sp_fs_action_menu_bg_pane_g9

0xab49,	// (0x0002b888) popup_sp_fs_action_menu_bg_pane_g10

0xab49,	// (0x0002b888) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0002ff2e) popup_sp_fs_action_menu_bg_pane_g

0xad34,	// (0x0002ba73) list_medium_line_x2_t3_g3_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_x2_t3_g3_g1

0xad40,	// (0x0002ba7f) list_medium_line_x2_t3_g3_g2_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_x2_t3_g3_g2

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t3_g3_g3_ParamLimits

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0002ffde) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0002ffde) list_medium_line_x2_t3_g3_g

0xad58,	// (0x0002ba97) list_medium_line_x2_t3_g3_t1_ParamLimits

0xad58,	// (0x0002ba97) list_medium_line_x2_t3_g3_t1

0x4e14,	// (0x00025b53) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4e14,	// (0x00025b53) list_medium_line_x2_t3_g3_t2

0xad6d,	// (0x0002baac) list_medium_line_x2_t3_g3_t3_ParamLimits

0xad6d,	// (0x0002baac) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0002ffe5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0002ffe5) list_medium_line_x2_t3_g3_t

0xad34,	// (0x0002ba73) list_medium_line_x2_t3_g2_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_x2_t3_g2_g1

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t3_g2_g2_ParamLimits

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0002ffec) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0002ffec) list_medium_line_x2_t3_g2_g

0xad82,	// (0x0002bac1) list_medium_line_x2_t3_g2_t1_ParamLimits

0xad82,	// (0x0002bac1) list_medium_line_x2_t3_g2_t1

0xad98,	// (0x0002bad7) list_medium_line_x2_t3_g2_t2_ParamLimits

0xad98,	// (0x0002bad7) list_medium_line_x2_t3_g2_t2

0xad6d,	// (0x0002baac) list_medium_line_x2_t3_g2_t3_ParamLimits

0xad6d,	// (0x0002baac) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0002fff1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0002fff1) list_medium_line_x2_t3_g2_t

0xad34,	// (0x0002ba73) list_medium_line_x2_t4_g4_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_x2_t4_g4_g1

0xadaa,	// (0x0002bae9) list_medium_line_x2_t4_g4_g2_ParamLimits

0xadaa,	// (0x0002bae9) list_medium_line_x2_t4_g4_g2

0xad40,	// (0x0002ba7f) list_medium_line_x2_t4_g4_g3_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_x2_t4_g4_g3

0xadb6,	// (0x0002baf5) list_medium_line_x2_t4_g4_g4_ParamLimits

0xadb6,	// (0x0002baf5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0002fff8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0002fff8) list_medium_line_x2_t4_g4_g

0x4e26,	// (0x00025b65) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4e26,	// (0x00025b65) list_medium_line_x2_t4_g4_t1

0x4e3d,	// (0x00025b7c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4e3d,	// (0x00025b7c) list_medium_line_x2_t4_g4_t2

0x4e52,	// (0x00025b91) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4e52,	// (0x00025b91) list_medium_line_x2_t4_g4_t3

0xadc2,	// (0x0002bb01) list_medium_line_x2_t4_g4_t4_ParamLimits

0xadc2,	// (0x0002bb01) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00030001) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00030001) list_medium_line_x2_t4_g4_t

0xad34,	// (0x0002ba73) list_medium_line_x2_t2_g4_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_x2_t2_g4_g1

0xadaa,	// (0x0002bae9) list_medium_line_x2_t2_g4_g2_ParamLimits

0xadaa,	// (0x0002bae9) list_medium_line_x2_t2_g4_g2

0xad40,	// (0x0002ba7f) list_medium_line_x2_t2_g4_g3_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_x2_t2_g4_g3

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t2_g4_g4_ParamLimits

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00030068) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00030068) list_medium_line_x2_t2_g4_g

0xb0c2,	// (0x0002be01) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb0c2,	// (0x0002be01) list_medium_line_x2_t2_g4_t1

0xad6d,	// (0x0002baac) list_medium_line_x2_t2_g4_t2_ParamLimits

0xad6d,	// (0x0002baac) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00030071) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00030071) list_medium_line_x2_t2_g4_t

0xad34,	// (0x0002ba73) list_medium_line_x2_t2_g3_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_x2_t2_g3_g1

0xad40,	// (0x0002ba7f) list_medium_line_x2_t2_g3_g2_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_x2_t2_g3_g2

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t2_g3_g3_ParamLimits

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0002ffde) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0002ffde) list_medium_line_x2_t2_g3_g

0xb0d7,	// (0x0002be16) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb0d7,	// (0x0002be16) list_medium_line_x2_t2_g3_t1

0xad6d,	// (0x0002baac) list_medium_line_x2_t2_g3_t2_ParamLimits

0xad6d,	// (0x0002baac) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x00030076) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x00030076) list_medium_line_x2_t2_g3_t

0x5a35,	// (0x00026774) main_sp_fs_list_pane_ParamLimits

0x5a35,	// (0x00026774) main_sp_fs_list_pane

0x5a42,	// (0x00026781) sp_fs_scroll_pane_ParamLimits

0x5a42,	// (0x00026781) sp_fs_scroll_pane

0x5a4f,	// (0x0002678e) list_medium_line_x2_t3_t1

0x5a5f,	// (0x0002679e) list_medium_line_x2_t3_t2

0xb33d,	// (0x0002c07c) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x000300c1) list_medium_line_x2_t3_t

0x5a6d,	// (0x000267ac) list_medium_line_x3_t4_t1

0x5a7d,	// (0x000267bc) list_medium_line_x3_t4_t2

0xb34b,	// (0x0002c08a) list_medium_line_x3_t4_t3

0xb359,	// (0x0002c098) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x000300c8) list_medium_line_x3_t4_t

0x5a8b,	// (0x000267ca) list_medium_line_x4_t5_t1

0x5a9b,	// (0x000267da) list_medium_line_x4_t5_t2

0xb34b,	// (0x0002c08a) list_medium_line_x4_t5_t3

0xb367,	// (0x0002c0a6) list_medium_line_x4_t5_t4

0xb359,	// (0x0002c098) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x000300d1) list_medium_line_x4_t5_t

0xad34,	// (0x0002ba73) list_medium_line_t4_g4_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_t4_g4_g1

0xadb6,	// (0x0002baf5) list_medium_line_t4_g4_g2_ParamLimits

0xadb6,	// (0x0002baf5) list_medium_line_t4_g4_g2

0xb375,	// (0x0002c0b4) list_medium_line_t4_g4_g3_ParamLimits

0xb375,	// (0x0002c0b4) list_medium_line_t4_g4_g3

0xad4c,	// (0x0002ba8b) list_medium_line_t4_g4_g4_ParamLimits

0xad4c,	// (0x0002ba8b) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x000300dc) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x000300dc) list_medium_line_t4_g4_g

0xb381,	// (0x0002c0c0) list_medium_line_t4_g4_t1_ParamLimits

0xb381,	// (0x0002c0c0) list_medium_line_t4_g4_t1

0xb396,	// (0x0002c0d5) list_medium_line_t4_g4_t2_ParamLimits

0xb396,	// (0x0002c0d5) list_medium_line_t4_g4_t2

0xb3ab,	// (0x0002c0ea) list_medium_line_t4_g4_t3_ParamLimits

0xb3ab,	// (0x0002c0ea) list_medium_line_t4_g4_t3

0xb3c0,	// (0x0002c0ff) list_medium_line_t4_g4_t4_ParamLimits

0xb3c0,	// (0x0002c0ff) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x000300e5) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x000300e5) list_medium_line_t4_g4_t

0x5b6a,	// (0x000268a9) chi_dic_find_pane_g1

0x69f0,	// (0x0002772f) main_tport_pane

0xe191,	// (0x0002eed0) list_medium_line_plain_t1

0xad34,	// (0x0002ba73) list_medium_line_t2_g2_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_t2_g2_g1

0xad40,	// (0x0002ba7f) list_medium_line_t2_g2_g2_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_t2_g2_g2

0x0001,

0xfa6c,	// (0x000307ab) list_medium_line_t2_g2_g_ParamLimits

0xfa6c,	// (0x000307ab) list_medium_line_t2_g2_g

0x8930,	// (0x0002966f) list_medium_line_t2_g2_t1_ParamLimits

0x8930,	// (0x0002966f) list_medium_line_t2_g2_t1

0x8947,	// (0x00029686) list_medium_line_t2_g2_t2_ParamLimits

0x8947,	// (0x00029686) list_medium_line_t2_g2_t2

0x0001,

0xfa71,	// (0x000307b0) list_medium_line_t2_g2_t_ParamLimits

0xfa71,	// (0x000307b0) list_medium_line_t2_g2_t

0xe59f,	// (0x0002f2de) aid_sp_fs_list_icon_a_sm

0xe5a7,	// (0x0002f2e6) aid_sp_fs_list_icon_d

0xe5af,	// (0x0002f2ee) aid_sp_fs_text_primary

0xe5b8,	// (0x0002f2f7) aid_sp_fs_text_secondary

0xe5c1,	// (0x0002f300) list_medium_line

0xe5c1,	// (0x0002f300) list_medium_line_g2

0xe5c1,	// (0x0002f300) list_medium_line_g3

0xe5c1,	// (0x0002f300) list_medium_line_plain

0xe5c1,	// (0x0002f300) list_medium_line_plain_t2

0xe5c1,	// (0x0002f300) list_medium_line_plain_t3

0xe5c1,	// (0x0002f300) list_medium_line_right_icon

0xe5c1,	// (0x0002f300) list_medium_line_right_iconx2

0xe5c1,	// (0x0002f300) list_medium_line_t2

0xe5c1,	// (0x0002f300) list_medium_line_t2_g2

0xe5c1,	// (0x0002f300) list_medium_line_t2_g3

0xe5c1,	// (0x0002f300) list_medium_line_t2_right_icon

0xe5c1,	// (0x0002f300) list_medium_line_t2_right_iconx2

0xe5c1,	// (0x0002f300) list_medium_line_t3

0xe5c1,	// (0x0002f300) list_medium_line_t3_g2

0xe5c1,	// (0x0002f300) list_medium_line_t3_g3

0xe5c1,	// (0x0002f300) list_medium_line_t3_right_iconx2

0xe5ca,	// (0x0002f309) list_medium_line_t4_g4

0xe5d3,	// (0x0002f312) list_medium_line_x2

0xe5d3,	// (0x0002f312) list_medium_line_x2_t2_g2

0xe5d3,	// (0x0002f312) list_medium_line_x2_t2_g3

0xe5d3,	// (0x0002f312) list_medium_line_x2_t2_g4

0xe5d3,	// (0x0002f312) list_medium_line_x2_t3

0xe5d3,	// (0x0002f312) list_medium_line_x2_t3_g2

0xe5d3,	// (0x0002f312) list_medium_line_x2_t3_g3

0xe5d3,	// (0x0002f312) list_medium_line_x2_t3_g4

0xe5d3,	// (0x0002f312) list_medium_line_x2_t4_g2

0xe5d3,	// (0x0002f312) list_medium_line_x2_t4_g4

0xe5dc,	// (0x0002f31b) list_medium_line_x3

0xe5dc,	// (0x0002f31b) list_medium_line_x3_t4

0xe5dc,	// (0x0002f31b) list_medium_line_x3_t4_g4

0xe5ca,	// (0x0002f309) list_medium_line_x4_t4

0xe5ca,	// (0x0002f309) list_medium_line_x4_t4_g7

0xe5ca,	// (0x0002f309) list_medium_line_x4_t5

0xe5e5,	// (0x0002f324) list_single_fs_dyc_pane_ParamLimits

0xe5e5,	// (0x0002f324) list_single_fs_dyc_pane

0xad34,	// (0x0002ba73) list_medium_line_x4_t4_g7_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_x4_t4_g7_g1

0xeaea,	// (0x0002f829) list_medium_line_x4_t4_g7_g2_ParamLimits

0xeaea,	// (0x0002f829) list_medium_line_x4_t4_g7_g2

0xeaf6,	// (0x0002f835) list_medium_line_x4_t4_g7_g3_ParamLimits

0xeaf6,	// (0x0002f835) list_medium_line_x4_t4_g7_g3

0xeb05,	// (0x0002f844) list_medium_line_x4_t4_g7_g4_ParamLimits

0xeb05,	// (0x0002f844) list_medium_line_x4_t4_g7_g4

0xeb11,	// (0x0002f850) list_medium_line_x4_t4_g7_g5_ParamLimits

0xeb11,	// (0x0002f850) list_medium_line_x4_t4_g7_g5

0xeb20,	// (0x0002f85f) list_medium_line_x4_t4_g7_g6_ParamLimits

0xeb20,	// (0x0002f85f) list_medium_line_x4_t4_g7_g6

0xeb2f,	// (0x0002f86e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xeb2f,	// (0x0002f86e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc36,	// (0x00030975) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc36,	// (0x00030975) list_medium_line_x4_t4_g7_g

0xeb3b,	// (0x0002f87a) list_medium_line_x4_t4_g7_t1_ParamLimits

0xeb3b,	// (0x0002f87a) list_medium_line_x4_t4_g7_t1

0xeb50,	// (0x0002f88f) list_medium_line_x4_t4_g7_t2_ParamLimits

0xeb50,	// (0x0002f88f) list_medium_line_x4_t4_g7_t2

0xeb65,	// (0x0002f8a4) list_medium_line_x4_t4_g7_t3_ParamLimits

0xeb65,	// (0x0002f8a4) list_medium_line_x4_t4_g7_t3

0xeb7a,	// (0x0002f8b9) list_medium_line_x4_t4_g7_t4_ParamLimits

0xeb7a,	// (0x0002f8b9) list_medium_line_x4_t4_g7_t4

0xeb8c,	// (0x0002f8cb) list_medium_line_x4_t4_g7_t5_ParamLimits

0xeb8c,	// (0x0002f8cb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc45,	// (0x00030984) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc45,	// (0x00030984) list_medium_line_x4_t4_g7_t

0xeb9e,	// (0x0002f8dd) list_single_dyc_row_pane_ParamLimits

0xeb9e,	// (0x0002f8dd) list_single_dyc_row_pane

0x9a1e,	// (0x0002a75d) call5_gesture_pane_ParamLimits

0x9a1e,	// (0x0002a75d) call5_gesture_pane

0x9a66,	// (0x0002a7a5) call5_windows_pane_ParamLimits

0x9a66,	// (0x0002a7a5) call5_windows_pane

0x9aff,	// (0x0002a83e) call5_swipe_1_pane_cp_ParamLimits

0x9aff,	// (0x0002a83e) call5_swipe_1_pane_cp

0x9b0b,	// (0x0002a84a) call5_swipe_2_pane_cp_ParamLimits

0x9b0b,	// (0x0002a84a) call5_swipe_2_pane_cp

0xb88b,	// (0x0002c5ca) call5_image_pane_cp

0x9b17,	// (0x0002a856) popup_call5_audio_first_window_cp_ParamLimits

0x9b17,	// (0x0002a856) popup_call5_audio_first_window_cp

0x004b,	// (0x00020d8a) call5_swipe_1_pane_g1_cp_ParamLimits

0x004b,	// (0x00020d8a) call5_swipe_1_pane_g1_cp

0x0103,	// (0x00020e42) call5_swipe_1_pane_g2_cp

0x0064,	// (0x00020da3) call5_swipe_1_pane_t1_cp_ParamLimits

0x0064,	// (0x00020da3) call5_swipe_1_pane_t1_cp

0x004b,	// (0x00020d8a) call5_swipe_2_pane_g1_cp_ParamLimits

0x004b,	// (0x00020d8a) call5_swipe_2_pane_g1_cp

0x010b,	// (0x00020e4a) call5_swipe_2_pane_g2_cp

0x0113,	// (0x00020e52) call5_swipe_2_pane_t1_cp_ParamLimits

0x0113,	// (0x00020e52) call5_swipe_2_pane_t1_cp

0x3c2b,	// (0x0002496a) main_sp_fs_email_pane

0x0128,	// (0x00020e67) main_sp_fs_listscroll_pane_te

0x9b23,	// (0x0002a862) popup_sp_fs_action_menu_pane_ParamLimits

0x9b23,	// (0x0002a862) popup_sp_fs_action_menu_pane

0xd276,	// (0x0002dfb5) bg_sp_fs_ctrlbar_pane_g1

0x0161,	// (0x00020ea0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x016a,	// (0x00020ea9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0173,	// (0x00020eb2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd276,	// (0x0002dfb5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd2e,	// (0x00030a6d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd063,	// (0x0002dda2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd063,	// (0x0002dda2) bg_sp_fs_ctrlbar_ddmenu_pane

0x017c,	// (0x00020ebb) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x017c,	// (0x00020ebb) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xad34,	// (0x0002ba73) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xad34,	// (0x0002ba73) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd37,	// (0x00030a76) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd37,	// (0x00030a76) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0188,	// (0x00020ec7) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0188,	// (0x00020ec7) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x01a2,	// (0x00020ee1) list_medium_line_t2_right_icon_g1

0x0416,	// (0x00021155) list_medium_line_t2_right_icon_t1

0x9b53,	// (0x0002a892) list_medium_line_t2_right_icon_t2

0x0001,

0xfd3c,	// (0x00030a7b) list_medium_line_t2_right_icon_t

0xcd81,	// (0x0002dac0) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcd81,	// (0x0002dac0) bg_sp_fs_ctrlbar_pane

0x9baa,	// (0x0002a8e9) main_sp_fs_ctrlbar_button_pane_cp01

0x9bb2,	// (0x0002a8f1) main_sp_fs_ctrlbar_ddmenu_pane

0x0266,	// (0x00020fa5) main_sp_fs_ctrlbar_pane_g1

0x0272,	// (0x00020fb1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd41,	// (0x00030a80) main_sp_fs_ctrlbar_pane_g

0x027e,	// (0x00020fbd) main_sp_fs_ctrlbar_pane_t1

0x9bbc,	// (0x0002a8fb) main_sp_fs_ctrlbar_pane

0x9bdd,	// (0x0002a91c) main_sp_fs_listscroll_pane_te_cp01

0x9bfd,	// (0x0002a93c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9bfd,	// (0x0002a93c) popup_sp_fs_action_menu_pane_cp01

0x3c2b,	// (0x0002496a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x3c2b,	// (0x0002496a) bg_sp_fs_highlight_list_pane_cp01

0x9c1c,	// (0x0002a95b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9c1c,	// (0x0002a95b) sp_fs_action_menu_list_gene_pane_g1

0x02e7,	// (0x00021026) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x02e7,	// (0x00021026) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd46,	// (0x00030a85) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd46,	// (0x00030a85) sp_fs_action_menu_list_gene_pane_g

0x9c2b,	// (0x0002a96a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x9c2b,	// (0x0002a96a) sp_fs_action_menu_list_gene_pane_t1

0x9c43,	// (0x0002a982) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9c43,	// (0x0002a982) sp_fs_action_menu_list_gene_pane

0x0329,	// (0x00021068) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0329,	// (0x00021068) popup_sp_fs_action_menu_bg_pane

0x9c60,	// (0x0002a99f) sp_fs_action_menu_list_pane_ParamLimits

0x9c60,	// (0x0002a99f) sp_fs_action_menu_list_pane

0x0353,	// (0x00021092) sp_fs_scroll_pane_cp01_ParamLimits

0x0353,	// (0x00021092) sp_fs_scroll_pane_cp01

0x9c7c,	// (0x0002a9bb) list_medium_line_plain_t2_t1

0x9c8c,	// (0x0002a9cb) list_medium_line_plain_t2_t2

0x0001,

0xfd4b,	// (0x00030a8a) list_medium_line_plain_t2_t

0x9c9a,	// (0x0002a9d9) list_medium_line_plain_t3_t1

0x9caa,	// (0x0002a9e9) list_medium_line_plain_t3_t2

0x9cb8,	// (0x0002a9f7) list_medium_line_plain_t3_t3

0x0002,

0xfd50,	// (0x00030a8f) list_medium_line_plain_t3_t

0xad34,	// (0x0002ba73) list_medium_line_x2_t2_g2_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_x2_t2_g2_g1

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t2_g2_g2_ParamLimits

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0002ffec) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0002ffec) list_medium_line_x2_t2_g2_g

0xb381,	// (0x0002c0c0) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb381,	// (0x0002c0c0) list_medium_line_x2_t2_g2_t1

0xad6d,	// (0x0002baac) list_medium_line_x2_t2_g2_t2_ParamLimits

0xad6d,	// (0x0002baac) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd57,	// (0x00030a96) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd57,	// (0x00030a96) list_medium_line_x2_t2_g2_t

0xad34,	// (0x0002ba73) list_medium_line_x2_t4_g2_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_x2_t4_g2_g1

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t4_g2_g2_ParamLimits

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf2ad,	// (0x0002ffec) list_medium_line_x2_t4_g2_g_ParamLimits

0xf2ad,	// (0x0002ffec) list_medium_line_x2_t4_g2_g

0x9cc6,	// (0x0002aa05) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9cc6,	// (0x0002aa05) list_medium_line_x2_t4_g2_t1

0x9ce0,	// (0x0002aa1f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9ce0,	// (0x0002aa1f) list_medium_line_x2_t4_g2_t2

0x9cf5,	// (0x0002aa34) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9cf5,	// (0x0002aa34) list_medium_line_x2_t4_g2_t3

0xad6d,	// (0x0002baac) list_medium_line_x2_t4_g2_t4_ParamLimits

0xad6d,	// (0x0002baac) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd5c,	// (0x00030a9b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd5c,	// (0x00030a9b) list_medium_line_x2_t4_g2_t

0x0406,	// (0x00021145) list_medium_line_t3_right_iconx2_g1

0x01a2,	// (0x00020ee1) list_medium_line_t3_right_iconx2_g2

0x9d0a,	// (0x0002aa49) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd65,	// (0x00030aa4) list_medium_line_t3_right_iconx2_g

0x9d12,	// (0x0002aa51) list_medium_line_t3_right_iconx2_t1

0x9d22,	// (0x0002aa61) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd6c,	// (0x00030aab) list_medium_line_t3_right_iconx2_t

0xad34,	// (0x0002ba73) list_medium_line_x3_t4_g4_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_x3_t4_g4_g1

0xad40,	// (0x0002ba7f) list_medium_line_x3_t4_g4_g2_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_x3_t4_g4_g2

0xadb6,	// (0x0002baf5) list_medium_line_x3_t4_g4_g3_ParamLimits

0xadb6,	// (0x0002baf5) list_medium_line_x3_t4_g4_g3

0x0434,	// (0x00021173) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0434,	// (0x00021173) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd71,	// (0x00030ab0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd71,	// (0x00030ab0) list_medium_line_x3_t4_g4_g

0x8930,	// (0x0002966f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8930,	// (0x0002966f) list_medium_line_x3_t4_g4_t1

0x8947,	// (0x00029686) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8947,	// (0x00029686) list_medium_line_x3_t4_g4_t2

0xb396,	// (0x0002c0d5) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb396,	// (0x0002c0d5) list_medium_line_x3_t4_g4_t3

0x0440,	// (0x0002117f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0440,	// (0x0002117f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd7a,	// (0x00030ab9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd7a,	// (0x00030ab9) list_medium_line_x3_t4_g4_t

0x9d30,	// (0x0002aa6f) list_single_dyc_row_text_pane_t1_ParamLimits

0x9d30,	// (0x0002aa6f) list_single_dyc_row_text_pane_t1

0x9d67,	// (0x0002aaa6) list_single_dyc_row_text_pane_t2_ParamLimits

0x9d67,	// (0x0002aaa6) list_single_dyc_row_text_pane_t2

0x04eb,	// (0x0002122a) list_single_dyc_row_text_pane_t3_ParamLimits

0x04eb,	// (0x0002122a) list_single_dyc_row_text_pane_t3

0x0002,

0xfd83,	// (0x00030ac2) list_single_dyc_row_text_pane_t_ParamLimits

0xfd83,	// (0x00030ac2) list_single_dyc_row_text_pane_t

0x04fd,	// (0x0002123c) list_single_dyc_row_pane_g1_ParamLimits

0x04fd,	// (0x0002123c) list_single_dyc_row_pane_g1

0x0509,	// (0x00021248) list_single_dyc_row_pane_g2_ParamLimits

0x0509,	// (0x00021248) list_single_dyc_row_pane_g2

0x0515,	// (0x00021254) list_single_dyc_row_pane_g3_ParamLimits

0x0515,	// (0x00021254) list_single_dyc_row_pane_g3

0x0521,	// (0x00021260) list_single_dyc_row_pane_g4_ParamLimits

0x0521,	// (0x00021260) list_single_dyc_row_pane_g4

0x0003,

0xfd8a,	// (0x00030ac9) list_single_dyc_row_pane_g_ParamLimits

0xfd8a,	// (0x00030ac9) list_single_dyc_row_pane_g

0x052d,	// (0x0002126c) list_single_dyc_row_text_pane_ParamLimits

0x052d,	// (0x0002126c) list_single_dyc_row_text_pane

0x3a01,	// (0x00024740) bg_sp_fs_scroll_pane

0x054c,	// (0x0002128b) thumb_sp_fs_scroll_pane

0xad34,	// (0x0002ba73) list_medium_line_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_g1

0xb381,	// (0x0002c0c0) list_medium_line_t1_ParamLimits

0xb381,	// (0x0002c0c0) list_medium_line_t1

0xad34,	// (0x0002ba73) list_medium_line_x2_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_x2_g1

0xad40,	// (0x0002ba7f) list_medium_line_x2_g2_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_x2_g2

0x0001,

0xfa6c,	// (0x000307ab) list_medium_line_x2_g_ParamLimits

0xfa6c,	// (0x000307ab) list_medium_line_x2_g

0x0555,	// (0x00021294) list_medium_line_x2_t1_ParamLimits

0x0555,	// (0x00021294) list_medium_line_x2_t1

0xad34,	// (0x0002ba73) list_medium_line_x3_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_x3_g1

0xad40,	// (0x0002ba7f) list_medium_line_x3_g2_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_x3_g2

0x0001,

0xfa6c,	// (0x000307ab) list_medium_line_x3_g_ParamLimits

0xfa6c,	// (0x000307ab) list_medium_line_x3_g

0x0555,	// (0x00021294) list_medium_line_x3_t1_ParamLimits

0x0555,	// (0x00021294) list_medium_line_x3_t1

0x056b,	// (0x000212aa) thumb_sp_fs_scroll_pane_g1

0x0574,	// (0x000212b3) thumb_sp_fs_scroll_pane_g2

0x057d,	// (0x000212bc) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd93,	// (0x00030ad2) thumb_sp_fs_scroll_pane_g

0x056b,	// (0x000212aa) bg_sp_fs_scroll_pane_g1

0x0574,	// (0x000212b3) bg_sp_fs_scroll_pane_g2

0x057d,	// (0x000212bc) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd93,	// (0x00030ad2) bg_sp_fs_scroll_pane_g

0xad34,	// (0x0002ba73) list_medium_line_x2_t3_g4_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_x2_t3_g4_g1

0xadaa,	// (0x0002bae9) list_medium_line_x2_t3_g4_g2_ParamLimits

0xadaa,	// (0x0002bae9) list_medium_line_x2_t3_g4_g2

0xad40,	// (0x0002ba7f) list_medium_line_x2_t3_g4_g3_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_x2_t3_g4_g3

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t3_g4_g4_ParamLimits

0xad4c,	// (0x0002ba8b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00030068) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00030068) list_medium_line_x2_t3_g4_g

0x9dc1,	// (0x0002ab00) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9dc1,	// (0x0002ab00) list_medium_line_x2_t3_g4_t1

0x9dd7,	// (0x0002ab16) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9dd7,	// (0x0002ab16) list_medium_line_x2_t3_g4_t2

0xad6d,	// (0x0002baac) list_medium_line_x2_t3_g4_t3_ParamLimits

0xad6d,	// (0x0002baac) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd9a,	// (0x00030ad9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd9a,	// (0x00030ad9) list_medium_line_x2_t3_g4_t

0xad34,	// (0x0002ba73) list_medium_line_g2_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_g2_g1

0xad40,	// (0x0002ba7f) list_medium_line_g2_g2_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_g2_g2

0x0001,

0xfa6c,	// (0x000307ab) list_medium_line_g2_g_ParamLimits

0xfa6c,	// (0x000307ab) list_medium_line_g2_g

0xb0d7,	// (0x0002be16) list_medium_line_g2_t1_ParamLimits

0xb0d7,	// (0x0002be16) list_medium_line_g2_t1

0xad34,	// (0x0002ba73) list_medium_line_t3_g2_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_t3_g2_g1

0xad40,	// (0x0002ba7f) list_medium_line_t3_g2_g2_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_t3_g2_g2

0x0001,

0xfa6c,	// (0x000307ab) list_medium_line_t3_g2_g_ParamLimits

0xfa6c,	// (0x000307ab) list_medium_line_t3_g2_g

0x9df0,	// (0x0002ab2f) list_medium_line_t3_g2_t1_ParamLimits

0x9df0,	// (0x0002ab2f) list_medium_line_t3_g2_t1

0x9e07,	// (0x0002ab46) list_medium_line_t3_g2_t2_ParamLimits

0x9e07,	// (0x0002ab46) list_medium_line_t3_g2_t2

0x9e1c,	// (0x0002ab5b) list_medium_line_t3_g2_t3_ParamLimits

0x9e1c,	// (0x0002ab5b) list_medium_line_t3_g2_t3

0x0002,

0xfda1,	// (0x00030ae0) list_medium_line_t3_g2_t_ParamLimits

0xfda1,	// (0x00030ae0) list_medium_line_t3_g2_t

0x01a2,	// (0x00020ee1) list_medium_line_right_icon_g1

0x05f6,	// (0x00021335) list_medium_line_right_icon_t1

0xad34,	// (0x0002ba73) list_medium_line_t2_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_t2_g1

0x9e31,	// (0x0002ab70) list_medium_line_t2_t1_ParamLimits

0x9e31,	// (0x0002ab70) list_medium_line_t2_t1

0x9e4b,	// (0x0002ab8a) list_medium_line_t2_t2_ParamLimits

0x9e4b,	// (0x0002ab8a) list_medium_line_t2_t2

0x0001,

0xfda8,	// (0x00030ae7) list_medium_line_t2_t_ParamLimits

0xfda8,	// (0x00030ae7) list_medium_line_t2_t

0xad34,	// (0x0002ba73) list_medium_line_t3_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_t3_g1

0x9cc6,	// (0x0002aa05) list_medium_line_t3_t1_ParamLimits

0x9cc6,	// (0x0002aa05) list_medium_line_t3_t1

0x9ce0,	// (0x0002aa1f) list_medium_line_t3_t2_ParamLimits

0x9ce0,	// (0x0002aa1f) list_medium_line_t3_t2

0x9cf5,	// (0x0002aa34) list_medium_line_t3_t3_ParamLimits

0x9cf5,	// (0x0002aa34) list_medium_line_t3_t3

0x0002,

0xfdad,	// (0x00030aec) list_medium_line_t3_t_ParamLimits

0xfdad,	// (0x00030aec) list_medium_line_t3_t

0xad34,	// (0x0002ba73) list_medium_line_g3_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_g3_g1

0xadaa,	// (0x0002bae9) list_medium_line_g3_g2_ParamLimits

0xadaa,	// (0x0002bae9) list_medium_line_g3_g2

0xad40,	// (0x0002ba7f) list_medium_line_g3_g3_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_g3_g3

0x0002,

0xfdb4,	// (0x00030af3) list_medium_line_g3_g_ParamLimits

0xfdb4,	// (0x00030af3) list_medium_line_g3_g

0xb0c2,	// (0x0002be01) list_medium_line_g3_t1_ParamLimits

0xb0c2,	// (0x0002be01) list_medium_line_g3_t1

0xad34,	// (0x0002ba73) list_medium_line_t2_g3_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_t2_g3_g1

0xadaa,	// (0x0002bae9) list_medium_line_t2_g3_g2_ParamLimits

0xadaa,	// (0x0002bae9) list_medium_line_t2_g3_g2

0xad40,	// (0x0002ba7f) list_medium_line_t2_g3_g3_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_t2_g3_g3

0x0002,

0xfdb4,	// (0x00030af3) list_medium_line_t2_g3_g_ParamLimits

0xfdb4,	// (0x00030af3) list_medium_line_t2_g3_g

0x9e60,	// (0x0002ab9f) list_medium_line_t2_g3_t1_ParamLimits

0x9e60,	// (0x0002ab9f) list_medium_line_t2_g3_t1

0x9e77,	// (0x0002abb6) list_medium_line_t2_g3_t2_ParamLimits

0x9e77,	// (0x0002abb6) list_medium_line_t2_g3_t2

0x0001,

0xfdbb,	// (0x00030afa) list_medium_line_t2_g3_t_ParamLimits

0xfdbb,	// (0x00030afa) list_medium_line_t2_g3_t

0xad34,	// (0x0002ba73) list_medium_line_t3_g3_g1_ParamLimits

0xad34,	// (0x0002ba73) list_medium_line_t3_g3_g1

0xadaa,	// (0x0002bae9) list_medium_line_t3_g3_g2_ParamLimits

0xadaa,	// (0x0002bae9) list_medium_line_t3_g3_g2

0xad40,	// (0x0002ba7f) list_medium_line_t3_g3_g3_ParamLimits

0xad40,	// (0x0002ba7f) list_medium_line_t3_g3_g3

0x0002,

0xfdb4,	// (0x00030af3) list_medium_line_t3_g3_g_ParamLimits

0xfdb4,	// (0x00030af3) list_medium_line_t3_g3_g

0x9e8c,	// (0x0002abcb) list_medium_line_t3_g3_t1_ParamLimits

0x9e8c,	// (0x0002abcb) list_medium_line_t3_g3_t1

0x9ea5,	// (0x0002abe4) list_medium_line_t3_g3_t2_ParamLimits

0x9ea5,	// (0x0002abe4) list_medium_line_t3_g3_t2

0x9ebb,	// (0x0002abfa) list_medium_line_t3_g3_t3_ParamLimits

0x9ebb,	// (0x0002abfa) list_medium_line_t3_g3_t3

0x0002,

0xfdc0,	// (0x00030aff) list_medium_line_t3_g3_t_ParamLimits

0xfdc0,	// (0x00030aff) list_medium_line_t3_g3_t

0x0406,	// (0x00021145) list_medium_line_right_iconx2_g1

0x01a2,	// (0x00020ee1) list_medium_line_right_iconx2_g2

0x0001,

0xfdc7,	// (0x00030b06) list_medium_line_right_iconx2_g

0x06c2,	// (0x00021401) list_medium_line_right_iconx2_t1

0x0406,	// (0x00021145) list_medium_line_t2_right_iconx2_g1

0x01a2,	// (0x00020ee1) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdc7,	// (0x00030b06) list_medium_line_t2_right_iconx2_g

0x9ed1,	// (0x0002ac10) list_medium_line_t2_right_iconx2_t1

0x9ee1,	// (0x0002ac20) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdcc,	// (0x00030b0b) list_medium_line_t2_right_iconx2_t

0xe191,	// (0x0002eed0) list_medium_line_x4_t4_t1

0x9eef,	// (0x0002ac2e) list_medium_line_x4_t4_t2

0x9eff,	// (0x0002ac3e) list_medium_line_x4_t4_t3

0x9f0f,	// (0x0002ac4e) list_medium_line_x4_t4_t4

0x0003,

0xfdd1,	// (0x00030b10) list_medium_line_x4_t4_t

0x9f5a,	// (0x0002ac99) tport_appsw_pane_ParamLimits

0x9f5a,	// (0x0002ac99) tport_appsw_pane

0x9f6b,	// (0x0002acaa) tport_contact_pane_ParamLimits

0x9f6b,	// (0x0002acaa) tport_contact_pane

0x9f80,	// (0x0002acbf) tport_listscroll_pane_ParamLimits

0x9f80,	// (0x0002acbf) tport_listscroll_pane

0x9f99,	// (0x0002acd8) cell_tport_appsw_pane_ParamLimits

0x9f99,	// (0x0002acd8) cell_tport_appsw_pane

0xdedf,	// (0x0002ec1e) tport_appsw_pane_g1_ParamLimits

0xdedf,	// (0x0002ec1e) tport_appsw_pane_g1

0x0772,	// (0x000214b1) tport_contact_pane_g1

0x077b,	// (0x000214ba) tport_contact_pane_t1

0x0789,	// (0x000214c8) tport_contact_pane_t2

0x0001,

0xfdda,	// (0x00030b19) tport_contact_pane_t

0x0797,	// (0x000214d6) list_tport_pane

0xab5b,	// (0x0002b89a) scroll_pane_cp_030

0x07a8,	// (0x000214e7) cell_tport_appsw_pane_g1

0x07c1,	// (0x00021500) cell_tport_appsw_pane_t1

0x3a01,	// (0x00024740) grid_highlight_pane_cp019

0x9faf,	// (0x0002acee) list_tport_double_graphic_pane_ParamLimits

0x9faf,	// (0x0002acee) list_tport_double_graphic_pane

0x3c2b,	// (0x0002496a) list_highlight_pane_cp023_ParamLimits

0x3c2b,	// (0x0002496a) list_highlight_pane_cp023

0x9fbc,	// (0x0002acfb) list_tport_double_graphic_pane_g1_ParamLimits

0x9fbc,	// (0x0002acfb) list_tport_double_graphic_pane_g1

0x9fc9,	// (0x0002ad08) list_tport_double_graphic_pane_t1_ParamLimits

0x9fc9,	// (0x0002ad08) list_tport_double_graphic_pane_t1

0x9fde,	// (0x0002ad1d) list_tport_double_graphic_pane_t2_ParamLimits

0x9fde,	// (0x0002ad1d) list_tport_double_graphic_pane_t2

0x0001,

0xfde6,	// (0x00030b25) list_tport_double_graphic_pane_t_ParamLimits

0xfde6,	// (0x00030b25) list_tport_double_graphic_pane_t

0x3a01,	// (0x00024740) main_cale_note_pane

0x36f5,	// (0x00024434) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x36f5,	// (0x00024434) cell_vitu2_function_top_wide_pane_cp01

0x9708,	// (0x0002a447) wait_bar_pane_cp05_ParamLimits

0x3a01,	// (0x00024740) listscroll_cmail_pane

0x0810,	// (0x0002154f) list_cmail_pane

0x9ff0,	// (0x0002ad2f) list_cmail_body_pane

0x9ff0,	// (0x0002ad2f) list_single_cmail_header_caption_pane

0xa006,	// (0x0002ad45) list_single_cmail_header_detail_pane_ParamLimits

0xa006,	// (0x0002ad45) list_single_cmail_header_detail_pane

0x086e,	// (0x000215ad) list_single_cmail_header_caption_pane_t1

0xa02e,	// (0x0002ad6d) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa02e,	// (0x0002ad6d) list_single_cmail_header_detail_pane_g1

0x089a,	// (0x000215d9) list_single_cmail_header_detail_pane_g2_ParamLimits

0x089a,	// (0x000215d9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdeb,	// (0x00030b2a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdeb,	// (0x00030b2a) list_single_cmail_header_detail_pane_g

0x08b3,	// (0x000215f2) list_single_cmail_header_detail_pane_t1_ParamLimits

0x08b3,	// (0x000215f2) list_single_cmail_header_detail_pane_t1

0x0909,	// (0x00021648) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0909,	// (0x00021648) list_single_cmail_header_editor_pane_bg

0x091b,	// (0x0002165a) list_cmail_body_pane_g1

0x0924,	// (0x00021663) list_cmail_body_pane_t1

0xdf2a,	// (0x0002ec69) list_single_cmail_header_editor_pane_bg_g1

0xafe0,	// (0x0002bd1f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdf3a,	// (0x0002ec79) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdf32,	// (0x0002ec71) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe1bb,	// (0x0002eefa) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdf5a,	// (0x0002ec99) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdf4a,	// (0x0002ec89) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdf52,	// (0x0002ec91) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xafc0,	// (0x0002bcff) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa068,	// (0x0002ada7) calenote_gesture_pane_ParamLimits

0xa068,	// (0x0002ada7) calenote_gesture_pane

0xa084,	// (0x0002adc3) calenote_window_pane_ParamLimits

0xa084,	// (0x0002adc3) calenote_window_pane

0x0962,	// (0x000216a1) popup_note_window_cp01

0xa0a0,	// (0x0002addf) calenote_swipe_1_pane_ParamLimits

0xa0a0,	// (0x0002addf) calenote_swipe_1_pane

0x9b0b,	// (0x0002a84a) calenote_swipe_2_pane_ParamLimits

0x9b0b,	// (0x0002a84a) calenote_swipe_2_pane

0x004b,	// (0x00020d8a) calenote_swipe_1_pane_g1_ParamLimits

0x004b,	// (0x00020d8a) calenote_swipe_1_pane_g1

0x0058,	// (0x00020d97) calenote_swipe_1_pane_g2_ParamLimits

0x0058,	// (0x00020d97) calenote_swipe_1_pane_g2

0x0001,

0xfd24,	// (0x00030a63) calenote_swipe_1_pane_g_ParamLimits

0xfd24,	// (0x00030a63) calenote_swipe_1_pane_g

0x0987,	// (0x000216c6) calenote_swipe_1_pane_t1_ParamLimits

0x0987,	// (0x000216c6) calenote_swipe_1_pane_t1

0x004b,	// (0x00020d8a) calenote_swipe_2_pane_g1_ParamLimits

0x004b,	// (0x00020d8a) calenote_swipe_2_pane_g1

0x09a6,	// (0x000216e5) calenote_swipe_2_pane_g2_ParamLimits

0x09a6,	// (0x000216e5) calenote_swipe_2_pane_g2

0x0001,

0xfdf7,	// (0x00030b36) calenote_swipe_2_pane_g_ParamLimits

0xfdf7,	// (0x00030b36) calenote_swipe_2_pane_g

0x09b2,	// (0x000216f1) calenote_swipe_2_pane_t1_ParamLimits

0x09b2,	// (0x000216f1) calenote_swipe_2_pane_t1

0x3a01,	// (0x00024740) main_mup_navstr_pane

0x77a9,	// (0x000284e8) main_mup3_pane_t7_ParamLimits

0x77a9,	// (0x000284e8) main_mup3_pane_t7

0xdb77,	// (0x0002e8b6) main_mp4_pane_g6_ParamLimits

0xdb77,	// (0x0002e8b6) main_mp4_pane_g6

0xddb9,	// (0x0002eaf8) main_image3_pane_t4_ParamLimits

0xddb9,	// (0x0002eaf8) main_image3_pane_t4

0xa0b5,	// (0x0002adf4) popup_navstr_preview_pane_ParamLimits

0xa0b5,	// (0x0002adf4) popup_navstr_preview_pane

0xa0c5,	// (0x0002ae04) scroll_navstr_pane_ParamLimits

0xa0c5,	// (0x0002ae04) scroll_navstr_pane

0x3a01,	// (0x00024740) bg_popup_preview_window_pane_cp04

0x09f1,	// (0x00021730) popup_navstr_preview_pane_t1

0xa0d9,	// (0x0002ae18) scroll_navstr_pane_g1_ParamLimits

0xa0d9,	// (0x0002ae18) scroll_navstr_pane_g1

0xa0ed,	// (0x0002ae2c) scroll_navstr_pane_t1_ParamLimits

0xa0ed,	// (0x0002ae2c) scroll_navstr_pane_t1

0x097e,	// (0x000216bd) bg_button_pane_cp014

0x097e,	// (0x000216bd) bg_button_pane_cp030

0x99c9,	// (0x0002a708) list_double_fisheye_pane_g4_ParamLimits

0x99c9,	// (0x0002a708) list_double_fisheye_pane_g4

0x99d5,	// (0x0002a714) list_double_fisheye_pane_g5_ParamLimits

0x99d5,	// (0x0002a714) list_double_fisheye_pane_g5

0x0820,	// (0x0002155f) sp_fs_scroll_pane_cp03

0x0266,	// (0x00020fa5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0272,	// (0x00020fb1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd41,	// (0x00030a80) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x027e,	// (0x00020fbd) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0818,	// (0x00021557) sp_fs_scroll_pane_cp02

0xabc9,	// (0x0002b908) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xabc9,	// (0x0002b908) popup_sp_fs_calendar_preview_list_single_pane

0x3a01,	// (0x00024740) main_cam6_pano_pane

0x3c2b,	// (0x0002496a) main_mup3_pane_ParamLimits

0x3a01,	// (0x00024740) main_phacti_pane

0x95fb,	// (0x0002a33a) bg_button_pane_cp11

0x9613,	// (0x0002a352) main_mobtv_info_pane_g2_ParamLimits

0x9613,	// (0x0002a352) main_mobtv_info_pane_g2

0x0001,

0xfca1,	// (0x000309e0) main_mobtv_info_pane_g_ParamLimits

0xfca1,	// (0x000309e0) main_mobtv_info_pane_g

0x97c6,	// (0x0002a505) sc_clock_pane_t5_ParamLimits

0x97c6,	// (0x0002a505) sc_clock_pane_t5

0x9839,	// (0x0002a578) main_radioblah_pane_g1_ParamLimits

0xf095,	// (0x0002fdd4) main_radioblah_pane_t3_ParamLimits

0xf095,	// (0x0002fdd4) main_radioblah_pane_t3

0xf0ad,	// (0x0002fdec) main_radioblah_pane_t4_ParamLimits

0xf0ad,	// (0x0002fdec) main_radioblah_pane_t4

0x9861,	// (0x0002a5a0) main_radioblah_text_pane_ParamLimits

0x9861,	// (0x0002a5a0) main_radioblah_text_pane

0x9873,	// (0x0002a5b2) main_radioblah_info_pane_g1_ParamLimits

0x9906,	// (0x0002a645) main_radioblah_info_pane_t4_ParamLimits

0x9906,	// (0x0002a645) main_radioblah_info_pane_t4

0x3c2b,	// (0x0002496a) main_sp_fs_calendar_pane

0xa103,	// (0x0002ae42) main_phacti_pane_g1

0xa10b,	// (0x0002ae4a) phacti_note_pane_ParamLimits

0xa10b,	// (0x0002ae4a) phacti_note_pane

0x0a43,	// (0x00021782) phacti_term_pane_ParamLimits

0x0a43,	// (0x00021782) phacti_term_pane

0x0a58,	// (0x00021797) phacti_note_pane_t1_ParamLimits

0x0a58,	// (0x00021797) phacti_note_pane_t1

0x0a6f,	// (0x000217ae) phacti_term_pane_g1

0x0a77,	// (0x000217b6) phacti_term_pane_t1_ParamLimits

0x0a77,	// (0x000217b6) phacti_term_pane_t1

0x0aa1,	// (0x000217e0) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0aa9,	// (0x000217e8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfe01,	// (0x00030b40) popup_sp_fs_calendar_preview_list_single_pane_g

0x0ab1,	// (0x000217f0) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0ab1,	// (0x000217f0) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0ac7,	// (0x00021806) aid_popup_sp_fs_bg_corner_pane

0xd276,	// (0x0002dfb5) popup_sp_fs_calendar_preview_bg_pane_g1

0x3a01,	// (0x00024740) popup_sp_fs_calendar_preview_bg_pane

0x0acf,	// (0x0002180e) popup_sp_fs_calendar_preview_list_pane

0x3c2b,	// (0x0002496a) bg_main_sp_fs_cale_pane_ParamLimits

0x3c2b,	// (0x0002496a) bg_main_sp_fs_cale_pane

0x0b07,	// (0x00021846) listscroll_cale_mrui_pane_ParamLimits

0x0b07,	// (0x00021846) listscroll_cale_mrui_pane

0x0b1b,	// (0x0002185a) listscroll_sp_fs_schedule_track_pane

0x0b24,	// (0x00021863) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0b24,	// (0x00021863) main_sp_fs_ctrlbar_pane_cp01

0x0b35,	// (0x00021874) main_sp_fs_ribbon_pane

0x0b3d,	// (0x0002187c) popup_sp_fs_cale_preview_window

0xa15a,	// (0x0002ae99) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa15a,	// (0x0002ae99) list_single_sp_fs_schedule_track_pane

0x3c2b,	// (0x0002496a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3c2b,	// (0x0002496a) bg_sp_fs_highlight_list_pane_cp03

0xa16d,	// (0x0002aeac) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa16d,	// (0x0002aeac) list_single_sp_fs_schedule_track_pane_g1

0xa179,	// (0x0002aeb8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa179,	// (0x0002aeb8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfe06,	// (0x00030b45) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfe06,	// (0x00030b45) list_single_sp_fs_schedule_track_pane_g

0xa185,	// (0x0002aec4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa185,	// (0x0002aec4) list_single_sp_fs_schedule_track_pane_t1

0xa19f,	// (0x0002aede) sp_fs_schedule_track_pane_ParamLimits

0xa19f,	// (0x0002aede) sp_fs_schedule_track_pane

0x0ba4,	// (0x000218e3) sp_fs_schedule_track_pane_g1

0x0bac,	// (0x000218eb) sp_fs_schedule_track_pane_g2

0x0bb4,	// (0x000218f3) sp_fs_schedule_track_pane_g3

0x0bbc,	// (0x000218fb) sp_fs_schedule_track_pane_g4

0x0bc4,	// (0x00021903) sp_fs_schedule_track_pane_g5

0x0004,

0xfe0b,	// (0x00030b4a) sp_fs_schedule_track_pane_g

0xdf2a,	// (0x0002ec69) bg_sp_fs_schedule_viewer_highlight_g1

0xafe0,	// (0x0002bd1f) bg_sp_fs_schedule_viewer_highlight_g2

0xdf32,	// (0x0002ec71) bg_sp_fs_schedule_viewer_highlight_g3

0xdf3a,	// (0x0002ec79) bg_sp_fs_schedule_viewer_highlight_g4

0xe1bb,	// (0x0002eefa) bg_sp_fs_schedule_viewer_highlight_g5

0xdf4a,	// (0x0002ec89) bg_sp_fs_schedule_viewer_highlight_g6

0xdf52,	// (0x0002ec91) bg_sp_fs_schedule_viewer_highlight_g7

0xdf5a,	// (0x0002ec99) bg_sp_fs_schedule_viewer_highlight_g8

0xafc0,	// (0x0002bcff) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe16,	// (0x00030b55) bg_sp_fs_schedule_viewer_highlight_g

0x3a01,	// (0x00024740) bg_main_sp_fs_ribbon_pane

0xa1b0,	// (0x0002aeef) main_sp_fs_ribbon_pane_g1

0x0bd5,	// (0x00021914) main_sp_fs_ribbon_pane_t1

0xa1b9,	// (0x0002aef8) main_sp_fs_ribbon_pane_t2

0x0bf3,	// (0x00021932) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe29,	// (0x00030b68) main_sp_fs_ribbon_pane_t

0x0c02,	// (0x00021941) main_sp_fs_ribbon_scheduler_pane

0x0c0a,	// (0x00021949) bg_main_sp_fs_ribbon_pane_g1

0x0c13,	// (0x00021952) bg_main_sp_fs_ribbon_pane_g2

0x0c1c,	// (0x0002195b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe30,	// (0x00030b6f) bg_main_sp_fs_ribbon_pane_g

0x0c24,	// (0x00021963) main_sp_fs_ribbon_scheduler_pane_g1

0x0c2d,	// (0x0002196c) main_sp_fs_ribbon_scheduler_pane_g2

0x0c36,	// (0x00021975) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe37,	// (0x00030b76) main_sp_fs_ribbon_scheduler_pane_g

0xf107,	// (0x0002fe46) list_cale_mrui_pane

0x0c3f,	// (0x0002197e) sp_fs_scroll_pane_cp07_ParamLimits

0x0c3f,	// (0x0002197e) sp_fs_scroll_pane_cp07

0xa1c8,	// (0x0002af07) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa1c8,	// (0x0002af07) bg_sp_fs_schedule_viewer_highlight

0x0c61,	// (0x000219a0) list_single_sp_fs_schedule_track_pane_cp01

0x0c69,	// (0x000219a8) list_sp_fs_schedule_track_pane

0x0c71,	// (0x000219b0) sp_fs_scroll_pane_cp06_ParamLimits

0x0c71,	// (0x000219b0) sp_fs_scroll_pane_cp06

0xd276,	// (0x0002dfb5) bgmain_sp_fs_calendar_pane_g1

0xa1d8,	// (0x0002af17) list_single_cale_mrui_pane_ParamLimits

0xa1d8,	// (0x0002af17) list_single_cale_mrui_pane

0x0ca9,	// (0x000219e8) list_single_cale_mrui_row_pane_ParamLimits

0x0ca9,	// (0x000219e8) list_single_cale_mrui_row_pane

0x0cb6,	// (0x000219f5) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0cb6,	// (0x000219f5) list_single_cale_mrui_row_pane_g1

0x0cee,	// (0x00021a2d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x0cee,	// (0x00021a2d) list_single_cale_mrui_row_pane_t1

0xa1fb,	// (0x0002af3a) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa1fb,	// (0x0002af3a) list_single_cale_mrui_row_pane_t2

0x0d66,	// (0x00021aa5) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0d66,	// (0x00021aa5) list_single_cale_mrui_row_pane_t3

0x0d95,	// (0x00021ad4) list_single_cale_mrui_row_pane_t4_ParamLimits

0x0d95,	// (0x00021ad4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe43,	// (0x00030b82) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe43,	// (0x00030b82) list_single_cale_mrui_row_pane_t

0xa261,	// (0x0002afa0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa261,	// (0x0002afa0) list_single_cmail_header_editor_pane_bg_cp01

0xa285,	// (0x0002afc4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa285,	// (0x0002afc4) list_single_cmail_header_editor_pane_bg_cp02

0xa2a3,	// (0x0002afe2) main_radioblah_text_pane_t1_ParamLimits

0xa2a3,	// (0x0002afe2) main_radioblah_text_pane_t1

0x0e1f,	// (0x00021b5e) cam6_indi_pane_cp01

0x0e27,	// (0x00021b66) cam6_mode_pane_cp01

0x0e2f,	// (0x00021b6e) cam6_pano_pane

0x0e38,	// (0x00021b77) cam6_zoom_pane_cp01

0x0e40,	// (0x00021b7f) cam6_pano_image_pane

0x0e49,	// (0x00021b88) cam6_pano_pane_g1

0xee13,	// (0x0002fb52) cam6_pano_pane_g2

0x0e52,	// (0x00021b91) cam6_pano_pane_g3

0x0e5b,	// (0x00021b9a) cam6_pano_pane_g4

0xd7dc,	// (0x0002e51b) cam6_pano_pane_g5

0x0e64,	// (0x00021ba3) cam6_pano_pane_g6

0x0e6c,	// (0x00021bab) cam6_pano_pane_g7

0x0e74,	// (0x00021bb3) cam6_pano_pane_g8

0x0e7d,	// (0x00021bbc) cam6_pano_pane_g9

0x0008,

0xfe4c,	// (0x00030b8b) cam6_pano_pane_g

0x3a01,	// (0x00024740) main_browser_tag_pane

0x09d1,	// (0x00021710) grid_navstr_albumart_pane

0x0e86,	// (0x00021bc5) cell_navstr_albumart_pane_ParamLimits

0x0e86,	// (0x00021bc5) cell_navstr_albumart_pane

0xba14,	// (0x0002c753) cell_navstr_albumart_pane_g1

0xcb5e,	// (0x0002d89d) cell_navstr_albumart_pane_g2

0xcb6e,	// (0x0002d8ad) cell_navstr_albumart_pane_g3

0xcb66,	// (0x0002d8a5) cell_navstr_albumart_pane_g4

0x0003,

0xfe5f,	// (0x00030b9e) cell_navstr_albumart_pane_g

0xa2bc,	// (0x0002affb) bt_list_pane_ParamLimits

0xa2bc,	// (0x0002affb) bt_list_pane

0xa2cf,	// (0x0002b00e) bt_list_pane_t1

0xa2de,	// (0x0002b01d) bt_list_pane_t2

0x0001,

0xfe68,	// (0x00030ba7) bt_list_pane_t

0x3a01,	// (0x00024740) main_cale_prevew_pane

0xa2ed,	// (0x0002b02c) popup_cale_preview_window_ParamLimits

0xa2ed,	// (0x0002b02c) popup_cale_preview_window

0x3c2b,	// (0x0002496a) bg_popup_preview_window_pane_cp05_ParamLimits

0x3c2b,	// (0x0002496a) bg_popup_preview_window_pane_cp05

0x0ee5,	// (0x00021c24) list_cale_preview_pane_ParamLimits

0x0ee5,	// (0x00021c24) list_cale_preview_pane

0xa302,	// (0x0002b041) list_double_cale_preview_pane_ParamLimits

0xa302,	// (0x0002b041) list_double_cale_preview_pane

0xa313,	// (0x0002b052) list_single_cale_preview_pane_ParamLimits

0xa313,	// (0x0002b052) list_single_cale_preview_pane

0x0f33,	// (0x00021c72) list_single_cale_preview_pane_g1

0x0f3b,	// (0x00021c7a) list_single_cale_preview_pane_t1_ParamLimits

0x0f3b,	// (0x00021c7a) list_single_cale_preview_pane_t1

0xa327,	// (0x0002b066) list_double_cale_preview_pane_g1

0xa32f,	// (0x0002b06e) list_double_cale_preview_pane_t1_ParamLimits

0xa32f,	// (0x0002b06e) list_double_cale_preview_pane_t1

0xa344,	// (0x0002b083) list_double_cale_preview_pane_t2_ParamLimits

0xa344,	// (0x0002b083) list_double_cale_preview_pane_t2

0x0001,

0xfe6d,	// (0x00030bac) list_double_cale_preview_pane_t_ParamLimits

0xfe6d,	// (0x00030bac) list_double_cale_preview_pane_t

0x3a01,	// (0x00024740) main_ezdial_pane

0x3c2b,	// (0x0002496a) main_sp_fs_email_pane_ParamLimits

0x9b61,	// (0x0002a8a0) cmail_ddmenu_btn01_pane_ParamLimits

0x9b61,	// (0x0002a8a0) cmail_ddmenu_btn01_pane

0x9b74,	// (0x0002a8b3) cmail_ddmenu_btn02_pane_ParamLimits

0x9b74,	// (0x0002a8b3) cmail_ddmenu_btn02_pane

0x9b97,	// (0x0002a8d6) cmail_ddmenu_btn03_pane_ParamLimits

0x9b97,	// (0x0002a8d6) cmail_ddmenu_btn03_pane

0x9bbc,	// (0x0002a8fb) main_sp_fs_ctrlbar_pane_ParamLimits

0x9bdd,	// (0x0002a91c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9ff0,	// (0x0002ad2f) list_cmail_body_pane_ParamLimits

0x087c,	// (0x000215bb) bg_button_pane_cp12

0x08a6,	// (0x000215e5) list_single_cmail_header_detail_pane_g3_ParamLimits

0x08a6,	// (0x000215e5) list_single_cmail_header_detail_pane_g3

0xa044,	// (0x0002ad83) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa044,	// (0x0002ad83) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdf2,	// (0x00030b31) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdf2,	// (0x00030b31) list_single_cmail_header_detail_pane_t

0x0a8c,	// (0x000217cb) phacti_term_pane_t2_ParamLimits

0x0a8c,	// (0x000217cb) phacti_term_pane_t2

0x0001,

0xfdfc,	// (0x00030b3b) phacti_term_pane_t_ParamLimits

0xfdfc,	// (0x00030b3b) phacti_term_pane_t

0x0f68,	// (0x00021ca7) aid_size_list_single_double

0xa35c,	// (0x0002b09b) popup_ezdial_listscroll_window

0xa372,	// (0x0002b0b1) popup_number_entry_window_cp01

0xb88b,	// (0x0002c5ca) bg_popup_call_pane_cp09

0x0f99,	// (0x00021cd8) ezdial_list_pane

0x0fa1,	// (0x00021ce0) scroll_pane_cp23

0xcd81,	// (0x0002dac0) bg_button_pane_cp028_ParamLimits

0xcd81,	// (0x0002dac0) bg_button_pane_cp028

0xa37e,	// (0x0002b0bd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa37e,	// (0x0002b0bd) cmail_ddmenu_btn01_pane_g1

0xa38d,	// (0x0002b0cc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa38d,	// (0x0002b0cc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe72,	// (0x00030bb1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe72,	// (0x00030bb1) cmail_ddmenu_btn01_pane_g

0x0fc7,	// (0x00021d06) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0fc7,	// (0x00021d06) cmail_ddmenu_btn01_pane_t1

0xcd81,	// (0x0002dac0) bg_button_pane_cp029_ParamLimits

0xcd81,	// (0x0002dac0) bg_button_pane_cp029

0xa39d,	// (0x0002b0dc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa39d,	// (0x0002b0dc) cmail_ddmenu_btn02_pane_g1

0xa3b8,	// (0x0002b0f7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa3b8,	// (0x0002b0f7) cmail_ddmenu_btn02_pane_t1

0x3c2b,	// (0x0002496a) bg_button_pane_cp031_ParamLimits

0x3c2b,	// (0x0002496a) bg_button_pane_cp031

0xa39d,	// (0x0002b0dc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa39d,	// (0x0002b0dc) cmail_ddmenu_btn03_pane_g1

0xa3b8,	// (0x0002b0f7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa3b8,	// (0x0002b0f7) cmail_ddmenu_btn03_pane_t1

0x80f3,	// (0x00028e32) cell_dialer2_keypad_pane_t1_ParamLimits

0x810d,	// (0x00028e4c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x810d,	// (0x00028e4c) cell_dialer2_keypad_pane_t1_copy1

0x94a2,	// (0x0002a1e1) ncimui_group_button_pane

0x3c2b,	// (0x0002496a) main_sp_fs_calendar_pane_ParamLimits

0x9ff0,	// (0x0002ad2f) list_single_cmail_header_caption_pane_ParamLimits

0x0ae3,	// (0x00021822) aid_recal_txt_sm_pane

0x3a01,	// (0x00024740) mian_recal_day_pane

0x0b3d,	// (0x0002187c) popup_sp_fs_cale_preview_window_ParamLimits

0x3a01,	// (0x00024740) list_recal_day_pane

0x1025,	// (0x00021d64) list_single_recal_day_pane_ParamLimits

0x1025,	// (0x00021d64) list_single_recal_day_pane

0x1037,	// (0x00021d76) list_single_recal_day_pane_g1_ParamLimits

0x1037,	// (0x00021d76) list_single_recal_day_pane_g1

0x1043,	// (0x00021d82) list_single_recal_day_pane_g2_ParamLimits

0x1043,	// (0x00021d82) list_single_recal_day_pane_g2

0x104f,	// (0x00021d8e) list_single_recal_day_pane_g3_ParamLimits

0x104f,	// (0x00021d8e) list_single_recal_day_pane_g3

0xa3df,	// (0x0002b11e) list_single_recal_day_pane_g4_ParamLimits

0xa3df,	// (0x0002b11e) list_single_recal_day_pane_g4

0x1067,	// (0x00021da6) list_single_recal_day_pane_g5_ParamLimits

0x1067,	// (0x00021da6) list_single_recal_day_pane_g5

0x1073,	// (0x00021db2) list_single_recal_day_pane_g6_ParamLimits

0x1073,	// (0x00021db2) list_single_recal_day_pane_g6

0x0005,

0xfe81,	// (0x00030bc0) list_single_recal_day_pane_g_ParamLimits

0xfe81,	// (0x00030bc0) list_single_recal_day_pane_g

0x107f,	// (0x00021dbe) list_single_recal_day_pane_t1

0x108d,	// (0x00021dcc) list_single_recal_day_pane_t2

0x0001,

0xfe8e,	// (0x00030bcd) list_single_recal_day_pane_t

0xa3ed,	// (0x0002b12c) ncimui_query_button_pane_ParamLimits

0xa3ed,	// (0x0002b12c) ncimui_query_button_pane

0xa3fd,	// (0x0002b13c) ncimui_query_button_pane_t1_ParamLimits

0xa3fd,	// (0x0002b13c) ncimui_query_button_pane_t1

0x10be,	// (0x00021dfd) ncimui_query_button_pane_t2_ParamLimits

0x10be,	// (0x00021dfd) ncimui_query_button_pane_t2

0x0001,

0xfe93,	// (0x00030bd2) ncimui_query_button_pane_t_ParamLimits

0xfe93,	// (0x00030bd2) ncimui_query_button_pane_t

0xa410,	// (0x0002b14f) query_button_pane_ParamLimits

0xa410,	// (0x0002b14f) query_button_pane

0x3a01,	// (0x00024740) bg_button_pane_cp0028

0x10de,	// (0x00021e1d) query_button_pane_t1

0x69f0,	// (0x0002772f) main_tport_pane_ParamLimits

0x9f1f,	// (0x0002ac5e) bg_popup_window_pane_cp01_ParamLimits

0x9f1f,	// (0x0002ac5e) bg_popup_window_pane_cp01

0x9f37,	// (0x0002ac76) heading_pane_cp08_ParamLimits

0x9f37,	// (0x0002ac76) heading_pane_cp08

0x9f49,	// (0x0002ac88) heading_pane_cp07_ParamLimits

0x9f49,	// (0x0002ac88) heading_pane_cp07

0x07b1,	// (0x000214f0) cell_tport_appsw_pane_g2

0x0002,

0xfddf,	// (0x00030b1e) cell_tport_appsw_pane_g

0xba0c,	// (0x0002c74b) input_candi_list_open_g1

0xb1e0,	// (0x0002bf1f) list_cale_time_pane_g6_ParamLimits

0xb1e0,	// (0x0002bf1f) list_cale_time_pane_g6

0x729b,	// (0x00027fda) aid_size_touch_calib_1_ParamLimits

0x729b,	// (0x00027fda) aid_size_touch_calib_1

0x72a7,	// (0x00027fe6) aid_size_touch_calib_2_ParamLimits

0x72a7,	// (0x00027fe6) aid_size_touch_calib_2

0x72bb,	// (0x00027ffa) aid_size_touch_calib_3_ParamLimits

0x72bb,	// (0x00027ffa) aid_size_touch_calib_3

0x72d3,	// (0x00028012) aid_size_touch_calib_4_ParamLimits

0x72d3,	// (0x00028012) aid_size_touch_calib_4

0x72e5,	// (0x00028024) main_touch_calib_button_group_pane_ParamLimits

0x72e5,	// (0x00028024) main_touch_calib_button_group_pane

0x72fb,	// (0x0002803a) main_touch_calib_pane_g1_ParamLimits

0x7307,	// (0x00028046) main_touch_calib_pane_g2_ParamLimits

0x7313,	// (0x00028052) main_touch_calib_pane_g3_ParamLimits

0x731f,	// (0x0002805e) main_touch_calib_pane_g4_ParamLimits

0xf7cb,	// (0x0003050a) main_touch_calib_pane_g_ParamLimits

0x732b,	// (0x0002806a) main_touch_calib_pane_t1_ParamLimits

0x7343,	// (0x00028082) main_touch_calib_pane_t2_ParamLimits

0x735b,	// (0x0002809a) main_touch_calib_pane_t3_ParamLimits

0x736d,	// (0x000280ac) main_touch_calib_pane_t4_ParamLimits

0x737f,	// (0x000280be) main_touch_calib_pane_t5_ParamLimits

0xf7d4,	// (0x00030513) main_touch_calib_pane_t_ParamLimits

0xd607,	// (0x0002e346) list_single_fp_cale_pane_g3_ParamLimits

0xd607,	// (0x0002e346) list_single_fp_cale_pane_g3

0xdf12,	// (0x0002ec51) bg_button_pane_cp012_ParamLimits

0xdf12,	// (0x0002ec51) bg_vkb2_func_pane_cp03_ParamLimits

0x38f7,	// (0x00024636) cell_vitu2_function_top_pane_g1_ParamLimits

0xdf12,	// (0x0002ec51) bg_vkb2_func_pane_cp04_ParamLimits

0x9458,	// (0x0002a197) main_ncimui_button_group_pane_ParamLimits

0x9458,	// (0x0002a197) main_ncimui_button_group_pane

0x9490,	// (0x0002a1cf) main_ncimui_pane_t3_ParamLimits

0x9490,	// (0x0002a1cf) main_ncimui_pane_t3

0x0a26,	// (0x00021765) phacti_button_group_pane

0x0f68,	// (0x00021ca7) aid_size_list_single_double_ParamLimits

0xa35c,	// (0x0002b09b) popup_ezdial_listscroll_window_ParamLimits

0xa372,	// (0x0002b0b1) popup_number_entry_window_cp01_ParamLimits

0xa422,	// (0x0002b161) phacti_button_pane_ParamLimits

0xa422,	// (0x0002b161) phacti_button_pane

0x3a01,	// (0x00024740) bg_button_pane_cp14

0x10fb,	// (0x00021e3a) phacti_button_pane_t1

0xa431,	// (0x0002b170) main_touch_calib_button_pane_ParamLimits

0xa431,	// (0x0002b170) main_touch_calib_button_pane

0x45fb,	// (0x0002533a) bg_button_pane_cp18_ParamLimits

0x45fb,	// (0x0002533a) bg_button_pane_cp18

0x1119,	// (0x00021e58) main_touch_calib_button_pane_t1_ParamLimits

0x1119,	// (0x00021e58) main_touch_calib_button_pane_t1

0x112f,	// (0x00021e6e) main_touch_calib_button_pane_t2_ParamLimits

0x112f,	// (0x00021e6e) main_touch_calib_button_pane_t2

0x0001,

0xfe98,	// (0x00030bd7) main_touch_calib_button_pane_t_ParamLimits

0xfe98,	// (0x00030bd7) main_touch_calib_button_pane_t

0x3a01,	// (0x00024740) cell_ncimui_button_pane

0x3a01,	// (0x00024740) bg_button_pane_cp032

0x114d,	// (0x00021e8c) cell_ncimui_button_pane_t1

0xdd99,	// (0x0002ead8) image3_infobar_pane_ParamLimits

0xdd99,	// (0x0002ead8) image3_infobar_pane

0x97ee,	// (0x0002a52d) fs_bigclock_status_pane_ParamLimits

0x97ee,	// (0x0002a52d) fs_bigclock_status_pane

0x97fb,	// (0x0002a53a) main_fs_bigclock_clock_pane_ParamLimits

0x97fb,	// (0x0002a53a) main_fs_bigclock_clock_pane

0x980a,	// (0x0002a549) main_fs_bigclock_indi_pane_ParamLimits

0x980a,	// (0x0002a549) main_fs_bigclock_indi_pane

0x981e,	// (0x0002a55d) main_fs_bigclock_swipe_pane_ParamLimits

0x981e,	// (0x0002a55d) main_fs_bigclock_swipe_pane

0x3a01,	// (0x00024740) main_fs_clock_dumped_data

0xef20,	// (0x0002fc5f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xef20,	// (0x0002fc5f) list_single_fs_bigclock_indicator_pane_g1

0xef3a,	// (0x0002fc79) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xef3a,	// (0x0002fc79) list_single_fs_bigclock_indicator_pane_g2

0xef54,	// (0x0002fc93) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xef54,	// (0x0002fc93) list_single_fs_bigclock_indicator_pane_g3

0xef6e,	// (0x0002fcad) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xef6e,	// (0x0002fcad) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcd5,	// (0x00030a14) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcd5,	// (0x00030a14) list_single_fs_bigclock_indicator_pane_g

0xef92,	// (0x0002fcd1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xef92,	// (0x0002fcd1) list_single_fs_bigclock_indicator_pane_t1

0xefba,	// (0x0002fcf9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xefba,	// (0x0002fcf9) list_single_fs_bigclock_indicator_pane_t2

0xefe2,	// (0x0002fd21) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xefe2,	// (0x0002fd21) list_single_fs_bigclock_indicator_pane_t3

0xf00a,	// (0x0002fd49) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xf00a,	// (0x0002fd49) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfce0,	// (0x00030a1f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfce0,	// (0x00030a1f) list_single_fs_bigclock_indicator_pane_t

0x115b,	// (0x00021e9a) image3_infobar_fav_pane_ParamLimits

0x115b,	// (0x00021e9a) image3_infobar_fav_pane

0x116b,	// (0x00021eaa) image3_infobar_loc_pane_ParamLimits

0x116b,	// (0x00021eaa) image3_infobar_loc_pane

0x117f,	// (0x00021ebe) image3_infobar_time_pane_ParamLimits

0x117f,	// (0x00021ebe) image3_infobar_time_pane

0xd276,	// (0x0002dfb5) image3_infobar_time_pane_g1

0x118f,	// (0x00021ece) image3_infobar_time_pane_t1

0xd276,	// (0x0002dfb5) image3_infobar_loc_pane_g1

0x119d,	// (0x00021edc) image3_infobar_loc_pane_g2

0x0001,

0xfe9d,	// (0x00030bdc) image3_infobar_loc_pane_g

0x11a5,	// (0x00021ee4) image3_infobar_loc_pane_t1

0xd276,	// (0x0002dfb5) image3_infobar_fav_pane_g1

0x11b3,	// (0x00021ef2) image3_infobar_fav_pane_g2

0x0001,

0xfea2,	// (0x00030be1) image3_infobar_fav_pane_g

0x11bb,	// (0x00021efa) fs_bigclock_status_battery_pane

0x11c4,	// (0x00021f03) fs_bigclock_status_signal_pane

0x11cd,	// (0x00021f0c) fs_bigclock_status_title_pane

0x11d6,	// (0x00021f15) fs_bigclock_status_signal_pane_g1

0x11df,	// (0x00021f1e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfea7,	// (0x00030be6) fs_bigclock_status_signal_pane_g

0x11e7,	// (0x00021f26) fs_bigclock_status_battery_pane_g1

0x11f0,	// (0x00021f2f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfeac,	// (0x00030beb) fs_bigclock_status_battery_pane_g

0x11f8,	// (0x00021f37) fs_bigclock_status_title_pane_t1

0xd276,	// (0x0002dfb5) main_fs_bigclock_clock_pane_g1

0x1206,	// (0x00021f45) main_fs_bigclock_clock_pane_g2

0x1206,	// (0x00021f45) main_fs_bigclock_clock_pane_g3

0x1206,	// (0x00021f45) main_fs_bigclock_clock_pane_g4

0x0003,

0xfeb1,	// (0x00030bf0) main_fs_bigclock_clock_pane_g

0x120e,	// (0x00021f4d) main_fs_bigclock_clock_pane_t1

0x121c,	// (0x00021f5b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeba,	// (0x00030bf9) main_fs_bigclock_clock_pane_t

0x122b,	// (0x00021f6a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x122b,	// (0x00021f6a) list_single_fs_bigclock_indicator_pane

0xa444,	// (0x0002b183) list_single_fs_bigclock_pane_ParamLimits

0xa444,	// (0x0002b183) list_single_fs_bigclock_pane

0x12a3,	// (0x00021fe2) main_fs_bigclock_indicator_pane_t1

0x12b2,	// (0x00021ff1) list_single_fs_bigclock_pane_g1

0x12ba,	// (0x00021ff9) list_single_fs_bigclock_pane_t1

0xd276,	// (0x0002dfb5) main_fs_bigclock_swipe_pane_g1

0x12f8,	// (0x00022037) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfecb,	// (0x00030c0a) main_fs_bigclock_swipe_pane_g

0x1300,	// (0x0002203f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1300,	// (0x0002203f) main_fs_bigclock_swipe_pane_t1

0x5aa9,	// (0x000267e8) call_type_pane_ParamLimits

0x3a01,	// (0x00024740) main_btmg_pane

0x0ce2,	// (0x00021a21) list_single_cale_mrui_row_pane_g2_ParamLimits

0x0ce2,	// (0x00021a21) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe3e,	// (0x00030b7d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe3e,	// (0x00030b7d) list_single_cale_mrui_row_pane_g

0x1015,	// (0x00021d54) list_recal_vselct_arw_lo_pane

0x101d,	// (0x00021d5c) list_recal_vselct_arw_up_pane

0x100c,	// (0x00021d4b) list_recal_vselct_pane

0x131d,	// (0x0002205c) btmg_button_pane

0xa4a4,	// (0x0002b1e3) main_btmg_pane_g1

0x3a01,	// (0x00024740) bg_button_pane_cp044

0x132d,	// (0x0002206c) btmg_button_pane_t1

0xcd79,	// (0x0002dab8) aid_listscroll_gen

0x3c2b,	// (0x0002496a) main_cntbar_detail_pane

0x0810,	// (0x0002154f) list_cmail_folder_pane

0x0820,	// (0x0002155f) sp_fs_scroll_pane_cp03_ParamLimits

0xf110,	// (0x0002fe4f) list_single_fs_dyc_pane_cp01_ParamLimits

0xf110,	// (0x0002fe4f) list_single_fs_dyc_pane_cp01

0x1353,	// (0x00022092) aid_size_cmail_indent

0xe5c1,	// (0x0002f300) list_single_dyc_row_pane_cp01

0xa4d4,	// (0x0002b213) cntbar_detail_list_pane_ParamLimits

0xa4d4,	// (0x0002b213) cntbar_detail_list_pane

0xa51a,	// (0x0002b259) main_cntbar_detail_cont_pane_ParamLimits

0xa51a,	// (0x0002b259) main_cntbar_detail_cont_pane

0xa52e,	// (0x0002b26d) scroll_pane_cp032_ParamLimits

0xa52e,	// (0x0002b26d) scroll_pane_cp032

0xa53a,	// (0x0002b279) cntbar_detail_list_event_pane_ParamLimits

0xa53a,	// (0x0002b279) cntbar_detail_list_event_pane

0xa4e4,	// (0x0002b223) cntbar_detail_list_shct_pane

0x13d4,	// (0x00022113) aid_list_gen

0xab5b,	// (0x0002b89a) aid_scroll

0xe501,	// (0x0002f240) aid_size_touch_scroll_bar

0xf126,	// (0x0002fe65) aid_list_double

0xa54b,	// (0x0002b28a) aid_list_single

0xe5d3,	// (0x0002f312) aid_list_single_lg

0xa554,	// (0x0002b293) aid_list_z_g_a_sm

0xa55c,	// (0x0002b29b) aid_list_z_g_d

0xa564,	// (0x0002b2a3) aid_txt_z_prm

0xa572,	// (0x0002b2b1) aid_txt_z_prm_cp01

0xa580,	// (0x0002b2bf) aid_txt_z_sec

0xa58e,	// (0x0002b2cd) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa58e,	// (0x0002b2cd) main_cntbar_detail_cont_pane_g1

0xa5a2,	// (0x0002b2e1) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa5a2,	// (0x0002b2e1) main_cntbar_detail_cont_pane_g2

0x0001,

0xfed0,	// (0x00030c0f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfed0,	// (0x00030c0f) main_cntbar_detail_cont_pane_g

0x1442,	// (0x00022181) main_cntbar_detail_cont_pane_t1

0x1450,	// (0x0002218f) main_cntbar_detail_cont_pane_t2

0x145e,	// (0x0002219d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfed5,	// (0x00030c14) main_cntbar_detail_cont_pane_t

0xa5b2,	// (0x0002b2f1) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa5b2,	// (0x0002b2f1) cell_cntbar_detail_list_shct_pane

0x147e,	// (0x000221bd) cntbar_detail_list_shct_pane_g1

0x1487,	// (0x000221c6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfedc,	// (0x00030c1b) cntbar_detail_list_shct_pane_g

0xa5c4,	// (0x0002b303) cntbar_detail_list_event_pane_g1_ParamLimits

0xa5c4,	// (0x0002b303) cntbar_detail_list_event_pane_g1

0xa5d0,	// (0x0002b30f) cntbar_detail_list_event_pane_g2_ParamLimits

0xa5d0,	// (0x0002b30f) cntbar_detail_list_event_pane_g2

0x0005,

0xfee1,	// (0x00030c20) cntbar_detail_list_event_pane_g_ParamLimits

0xfee1,	// (0x00030c20) cntbar_detail_list_event_pane_g

0xa63c,	// (0x0002b37b) cntbar_detail_list_event_pane_t1_ParamLimits

0xa63c,	// (0x0002b37b) cntbar_detail_list_event_pane_t1

0xa651,	// (0x0002b390) cntbar_detail_list_event_pane_t2_ParamLimits

0xa651,	// (0x0002b390) cntbar_detail_list_event_pane_t2

0x0002,

0xfeee,	// (0x00030c2d) cntbar_detail_list_event_pane_t_ParamLimits

0xfeee,	// (0x00030c2d) cntbar_detail_list_event_pane_t

0xd276,	// (0x0002dfb5) cell_cntbar_detail_list_shct_pane_g1

0xb84a,	// (0x0002c589) navi_pane_mv_g3

0x3c2b,	// (0x0002496a) main_cntbar_detail_pane_ParamLimits

0x3a01,	// (0x00024740) main_notif_wgt_pane

0xdb05,	// (0x0002e844) aid_tch_main_mp4_pane_g4

0xdd0f,	// (0x0002ea4e) popup_slider_window_cp02

0x100c,	// (0x00021d4b) list_recal_day_event_pane

0xa4ac,	// (0x0002b1eb) cntbar_detail_btn_pane_ParamLimits

0xa4ac,	// (0x0002b1eb) cntbar_detail_btn_pane

0xa4bf,	// (0x0002b1fe) cntbar_detail_btn_pane_cp01_ParamLimits

0xa4bf,	// (0x0002b1fe) cntbar_detail_btn_pane_cp01

0xa4e4,	// (0x0002b223) cntbar_detail_list_shct_pane_ParamLimits

0xa4f4,	// (0x0002b233) cntbar_detail_pane_g1_ParamLimits

0xa4f4,	// (0x0002b233) cntbar_detail_pane_g1

0xa504,	// (0x0002b243) cntbar_detail_pane_t1_ParamLimits

0xa504,	// (0x0002b243) cntbar_detail_pane_t1

0xa5dc,	// (0x0002b31b) cntbar_detail_list_event_pane_g3_ParamLimits

0xa5dc,	// (0x0002b31b) cntbar_detail_list_event_pane_g3

0xa5f4,	// (0x0002b333) cntbar_detail_list_event_pane_g4_ParamLimits

0xa5f4,	// (0x0002b333) cntbar_detail_list_event_pane_g4

0xa60c,	// (0x0002b34b) cntbar_detail_list_event_pane_g5_ParamLimits

0xa60c,	// (0x0002b34b) cntbar_detail_list_event_pane_g5

0xa624,	// (0x0002b363) cntbar_detail_list_event_pane_g6_ParamLimits

0xa624,	// (0x0002b363) cntbar_detail_list_event_pane_g6

0xa666,	// (0x0002b3a5) cntbar_detail_list_event_pane_t3_ParamLimits

0xa666,	// (0x0002b3a5) cntbar_detail_list_event_pane_t3

0xa678,	// (0x0002b3b7) popup_notif_wgt_window_ParamLimits

0xa678,	// (0x0002b3b7) popup_notif_wgt_window

0xa68d,	// (0x0002b3cc) popup_submenu_window_cp01_ParamLimits

0xa68d,	// (0x0002b3cc) popup_submenu_window_cp01

0xb88b,	// (0x0002c5ca) bg_popup_window_pane_cp10

0x155e,	// (0x0002229d) listscroll_notif_wgt_pane

0x1566,	// (0x000222a5) list_notif_wgt_window

0x156f,	// (0x000222ae) scroll_pane_cp033

0x1578,	// (0x000222b7) list_notif_wgt_row_pane_ParamLimits

0x1578,	// (0x000222b7) list_notif_wgt_row_pane

0x158a,	// (0x000222c9) aid_size_list_notif_wgt_del

0x1593,	// (0x000222d2) list_notif_wgt_row_pane_g1

0x159b,	// (0x000222da) list_notif_wgt_row_pane_g2

0x15a3,	// (0x000222e2) list_notif_wgt_row_pane_g3

0x0002,

0xfef5,	// (0x00030c34) list_notif_wgt_row_pane_g

0x15ac,	// (0x000222eb) list_notif_wgt_row_pane_t1

0x15ba,	// (0x000222f9) list_notif_wgt_row_pane_t2

0x15c8,	// (0x00022307) list_notif_wgt_row_pane_t3

0x0002,

0xfefc,	// (0x00030c3b) list_notif_wgt_row_pane_t

0xe1fd,	// (0x0002ef3c) list_recal_day_event_pane_g1

0x15d6,	// (0x00022315) list_recal_day_event_pane_t1

0x3a01,	// (0x00024740) bg_button_pane_cp045

0xa69d,	// (0x0002b3dc) cntbar_detail_btn_pane_t1

0xcd81,	// (0x0002dac0) main_callh_pane_ParamLimits

0xcd81,	// (0x0002dac0) main_callh_pane

0x3a01,	// (0x00024740) main_coverflow0_pane

0x3a01,	// (0x00024740) main_wgtman_pane

0x982a,	// (0x0002a569) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x982a,	// (0x0002a569) main_fs_bigclock_unlock_btn_pane

0x07a0,	// (0x000214df) bg_button_pane_cp16

0x07b9,	// (0x000214f8) cell_tport_appsw_pane_g3

0xa6ab,	// (0x0002b3ea) cf0_flow_pane_ParamLimits

0xa6ab,	// (0x0002b3ea) cf0_flow_pane

0x1602,	// (0x00022341) listscroll_cf0_pane

0x160b,	// (0x0002234a) main_cf0_pane_g1

0xa6c0,	// (0x0002b3ff) main_cf0_pane_t1_ParamLimits

0xa6c0,	// (0x0002b3ff) main_cf0_pane_t1

0xa6d6,	// (0x0002b415) main_cf0_pane_t2_ParamLimits

0xa6d6,	// (0x0002b415) main_cf0_pane_t2

0x0001,

0xff03,	// (0x00030c42) main_cf0_pane_t_ParamLimits

0xff03,	// (0x00030c42) main_cf0_pane_t

0x1639,	// (0x00022378) scroll_pane_cp11

0xa6ec,	// (0x0002b42b) cf0_flow_pane_g1

0xa6f4,	// (0x0002b433) cf0_flow_pane_g2

0x0001,

0xff08,	// (0x00030c47) cf0_flow_pane_g

0xa6fc,	// (0x0002b43b) cf0_flow_pane_t1

0x3a01,	// (0x00024740) main_call6_pane

0x3a01,	// (0x00024740) main_calllock_pane

0xa70a,	// (0x0002b449) call6_btn_grp_pane_ParamLimits

0xa70a,	// (0x0002b449) call6_btn_grp_pane

0xa720,	// (0x0002b45f) call6_pane_g1_ParamLimits

0xa720,	// (0x0002b45f) call6_pane_g1

0xa733,	// (0x0002b472) popup_call6_1st_window_ParamLimits

0xa733,	// (0x0002b472) popup_call6_1st_window

0xa742,	// (0x0002b481) popup_call6_2nd_window_ParamLimits

0xa742,	// (0x0002b481) popup_call6_2nd_window

0xa751,	// (0x0002b490) cell_call6_btn_pane_ParamLimits

0xa751,	// (0x0002b490) cell_call6_btn_pane

0xb88b,	// (0x0002c5ca) bg_popup_call2_in_pane_cp03

0x16a1,	// (0x000223e0) popup_call6_1st_window_g1

0x16a9,	// (0x000223e8) popup_call6_1st_window_g2

0x16b1,	// (0x000223f0) popup_call6_1st_window_g3

0x0002,

0xff0d,	// (0x00030c4c) popup_call6_1st_window_g

0x16b9,	// (0x000223f8) popup_call6_1st_window_t1

0x16c8,	// (0x00022407) popup_call6_1st_window_t2

0x16d6,	// (0x00022415) popup_call6_1st_window_t3

0x0002,

0xff14,	// (0x00030c53) popup_call6_1st_window_t

0xb88b,	// (0x0002c5ca) bg_popup_call2_in_pane_cp04

0x16a1,	// (0x000223e0) popup_call6_2nd_window_g1

0x16a9,	// (0x000223e8) popup_call6_2nd_window_g2

0x16b1,	// (0x000223f0) popup_call6_2nd_window_g3

0x0002,

0xff0d,	// (0x00030c4c) popup_call6_2nd_window_g

0x16b9,	// (0x000223f8) popup_call6_2nd_window_t1

0x3a01,	// (0x00024740) bg_button_pane_cp15

0x16e4,	// (0x00022423) cell_call6_btn_pane_g1

0x16ed,	// (0x0002242c) cell_call6_btn_pane_t1

0xa765,	// (0x0002b4a4) listscroll_wgtman_pane_ParamLimits

0xa765,	// (0x0002b4a4) listscroll_wgtman_pane

0xa77b,	// (0x0002b4ba) wgtman_btn_pane_ParamLimits

0xa77b,	// (0x0002b4ba) wgtman_btn_pane

0xb6cc,	// (0x0002c40b) aid_scroll_copy1

0x1715,	// (0x00022454) list_wgtman_pane

0xa792,	// (0x0002b4d1) wgtman_btn_pane_g1_ParamLimits

0xa792,	// (0x0002b4d1) wgtman_btn_pane_g1

0xa7a6,	// (0x0002b4e5) wgtman_btn_pane_t1_ParamLimits

0xa7a6,	// (0x0002b4e5) wgtman_btn_pane_t1

0x173d,	// (0x0002247c) wgtman_btn_pane_t2_ParamLimits

0x173d,	// (0x0002247c) wgtman_btn_pane_t2

0x0001,

0xff1b,	// (0x00030c5a) wgtman_btn_pane_t_ParamLimits

0xff1b,	// (0x00030c5a) wgtman_btn_pane_t

0xa7c1,	// (0x0002b500) listrow_wgtman_pane_ParamLimits

0xa7c1,	// (0x0002b500) listrow_wgtman_pane

0xa7d2,	// (0x0002b511) listrow_wgtman_pane_g1

0xa7db,	// (0x0002b51a) listrow_wgtman_pane_g2

0x0001,

0xff20,	// (0x00030c5f) listrow_wgtman_pane_g

0xa7e3,	// (0x0002b522) listrow_wgtman_pane_t1

0xa7f1,	// (0x0002b530) listrow_wgtman_pane_t2

0x0001,

0xff25,	// (0x00030c64) listrow_wgtman_pane_t

0xa7ff,	// (0x0002b53e) wait_bar_pane_cp09

0x1795,	// (0x000224d4) main_calllock_btn_pane

0x179d,	// (0x000224dc) main_calllock_pane_g1

0x3a01,	// (0x00024740) bg_button_pane_cp17

0x17a6,	// (0x000224e5) main_calllock_btn_pane_g1

0x17af,	// (0x000224ee) main_calllock_btn_pane_t1

0x3a01,	// (0x00024740) main_dialer3_pane

0x3a01,	// (0x00024740) main_fmrd2_pane

0xd276,	// (0x0002dfb5) main_fs_bigclock_unlock_btn_pane_g1

0x17c6,	// (0x00022505) main_fs_bigclock_unlock_btn_pane_t1

0xa807,	// (0x0002b546) area_fmrd2_info_pane_ParamLimits

0xa807,	// (0x0002b546) area_fmrd2_info_pane

0xa817,	// (0x0002b556) area_fmrd2_visual_pane_ParamLimits

0xa817,	// (0x0002b556) area_fmrd2_visual_pane

0xa825,	// (0x0002b564) fmrd2_indi_pane_ParamLimits

0xa825,	// (0x0002b564) fmrd2_indi_pane

0xa832,	// (0x0002b571) area_fmrd2_visual_pane_g1

0xa83a,	// (0x0002b579) area_fmrd2_visual_pane_t1

0xa848,	// (0x0002b587) area_fmrd2_visual_pane_t2

0xa856,	// (0x0002b595) area_fmrd2_visual_pane_t3

0x0002,

0xff2f,	// (0x00030c6e) area_fmrd2_visual_pane_t

0xa864,	// (0x0002b5a3) area_fmrd2_info_pane_g1

0xa86c,	// (0x0002b5ab) area_fmrd2_info_pane_t1

0xa87a,	// (0x0002b5b9) area_fmrd2_info_pane_t2

0xa888,	// (0x0002b5c7) area_fmrd2_info_pane_t3

0xa896,	// (0x0002b5d5) area_fmrd2_info_pane_t4

0x0003,

0xff36,	// (0x00030c75) area_fmrd2_info_pane_t

0xa8a4,	// (0x0002b5e3) fmrd2_indi_pane_t1

0xa8b2,	// (0x0002b5f1) fmrd2_indi_pane_t2

0xa8c0,	// (0x0002b5ff) fmrd2_indi_pane_t3

0x0002,

0xff3f,	// (0x00030c7e) fmrd2_indi_pane_t

0xef7d,	// (0x0002fcbc) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xef7d,	// (0x0002fcbc) list_single_fs_bigclock_indicator_pane_g5

0xf01f,	// (0x0002fd5e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xf01f,	// (0x0002fd5e) list_single_fs_bigclock_indicator_pane_t5

0xa11f,	// (0x0002ae5e) aid_cell_bcale_month_pane_ParamLimits

0xa11f,	// (0x0002ae5e) aid_cell_bcale_month_pane

0xa131,	// (0x0002ae70) bcale_month_pane_ParamLimits

0xa131,	// (0x0002ae70) bcale_month_pane

0xa143,	// (0x0002ae82) bcale_preview_pane_ParamLimits

0xa143,	// (0x0002ae82) bcale_preview_pane

0x12ba,	// (0x00021ff9) list_single_fs_bigclock_pane_t1_ParamLimits

0x12d4,	// (0x00022013) list_single_fs_bigclock_pane_t2_ParamLimits

0x12d4,	// (0x00022013) list_single_fs_bigclock_pane_t2

0x0001,

0xfec6,	// (0x00030c05) list_single_fs_bigclock_pane_t_ParamLimits

0xfec6,	// (0x00030c05) list_single_fs_bigclock_pane_t

0x17be,	// (0x000224fd) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff2a,	// (0x00030c69) main_fs_bigclock_unlock_btn_pane_g

0xa8ce,	// (0x0002b60d) aid_dia3_key_size_ParamLimits

0xa8ce,	// (0x0002b60d) aid_dia3_key_size

0xa8dd,	// (0x0002b61c) aid_dia3_listrow_size_ParamLimits

0xa8dd,	// (0x0002b61c) aid_dia3_listrow_size

0xa8e9,	// (0x0002b628) dia3_keypad_fun_pane_ParamLimits

0xa8e9,	// (0x0002b628) dia3_keypad_fun_pane

0xa8fd,	// (0x0002b63c) dia3_keypad_num_pane_ParamLimits

0xa8fd,	// (0x0002b63c) dia3_keypad_num_pane

0xa90e,	// (0x0002b64d) dia3_listscroll_pane_ParamLimits

0xa90e,	// (0x0002b64d) dia3_listscroll_pane

0xa91f,	// (0x0002b65e) dia3_numentry_pane_ParamLimits

0xa91f,	// (0x0002b65e) dia3_numentry_pane

0x18e0,	// (0x0002261f) dia3_list_pane

0x18e9,	// (0x00022628) scroll_pane_cp12

0x3a01,	// (0x00024740) bg_dia3_numentry_pane

0x18f2,	// (0x00022631) dia3_numentry_pane_t1

0xa92e,	// (0x0002b66d) cell_dia3_key_num_pane

0xa936,	// (0x0002b675) cell_dia3_key0_fun_pane_ParamLimits

0xa936,	// (0x0002b675) cell_dia3_key0_fun_pane

0xa94a,	// (0x0002b689) cell_dia3_key1_fun_pane_ParamLimits

0xa94a,	// (0x0002b689) cell_dia3_key1_fun_pane

0xa961,	// (0x0002b6a0) dia3_listrow_pane

0xecaa,	// (0x0002f9e9) bg_dia3_numentry_pane_g1

0x3a01,	// (0x00024740) bg_button_pane_cp21

0x192c,	// (0x0002266b) cell_dia3_key_num_pane_t1

0x193a,	// (0x00022679) cell_dia3_key_num_pane_t2

0x1949,	// (0x00022688) cell_dia3_key_num_pane_t3

0x1958,	// (0x00022697) cell_dia3_key_num_pane_t4

0x0003,

0xff46,	// (0x00030c85) cell_dia3_key_num_pane_t

0x3a01,	// (0x00024740) bg_button_pane_cp19

0x1967,	// (0x000226a6) cell_dia3_key0_fun_pane_g1

0x3a01,	// (0x00024740) bg_button_pane_cp20

0xa96a,	// (0x0002b6a9) cell_dia3_key1_fun_pane_g1

0xa972,	// (0x0002b6b1) area_left_week_number_pane

0x13e6,	// (0x00022125) area_top_day_name_pane

0xa97b,	// (0x0002b6ba) frame_month_view_pane

0xa983,	// (0x0002b6c2) grid_month_view_pane

0xa98d,	// (0x0002b6cc) cell_top_day_name_pane_ParamLimits

0xa98d,	// (0x0002b6cc) cell_top_day_name_pane

0xa9a3,	// (0x0002b6e2) cell_area_left_week_number_pane_ParamLimits

0xa9a3,	// (0x0002b6e2) cell_area_left_week_number_pane

0xa9b7,	// (0x0002b6f6) cell_month_view_pane_ParamLimits

0xa9b7,	// (0x0002b6f6) cell_month_view_pane

0x19e0,	// (0x0002271f) frm_month_g1

0xa9d2,	// (0x0002b711) frm_month_g2

0xa9da,	// (0x0002b719) frm_month_g3

0xa9e2,	// (0x0002b721) frm_month_g4

0xa9ea,	// (0x0002b729) frm_month_g5

0xa9f2,	// (0x0002b731) frm_month_g6

0xa9fa,	// (0x0002b739) frm_month_g7

0x1a19,	// (0x00022758) frm_month_g8

0xaa02,	// (0x0002b741) frm_month_g9

0xaa0b,	// (0x0002b74a) frm_month_g10

0xaa14,	// (0x0002b753) frm_month_g11

0xaa1d,	// (0x0002b75c) frm_month_g12

0xaa26,	// (0x0002b765) frm_month_g13

0xaa2f,	// (0x0002b76e) frm_month_g14

0xaa38,	// (0x0002b777) frm_month_g15

0xaa41,	// (0x0002b780) frm_month_g16

0x000f,

0xff4f,	// (0x00030c8e) frm_month_g

0xaa4a,	// (0x0002b789) cell_top_day_name_pane_t1

0xaa59,	// (0x0002b798) cell_area_left_week_number_pane_g1

0xaa4a,	// (0x0002b789) cell_area_left_week_number_pane_t1

0xd276,	// (0x0002dfb5) cell_month_view_pane_g1

0xaa61,	// (0x0002b7a0) cell_month_view_pane_t1

0x3a01,	// (0x00024740) main_fps_pane

0x0202,	// (0x00020f41) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0202,	// (0x00020f41) cmail_ddmenu_btn02_pane_cp1

0x021e,	// (0x00020f5d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x021e,	// (0x00020f5d) cmail_ddmenu_btn02_pane_cp2

0xa3ac,	// (0x0002b0eb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa3ac,	// (0x0002b0eb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe77,	// (0x00030bb6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe77,	// (0x00030bb6) cmail_ddmenu_btn02_pane_g

0xa3cd,	// (0x0002b10c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa3cd,	// (0x0002b10c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe7c,	// (0x00030bbb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe7c,	// (0x00030bbb) cmail_ddmenu_btn02_pane_t

0xaa70,	// (0x0002b7af) fps_text_pane_ParamLimits

0xaa70,	// (0x0002b7af) fps_text_pane

0xaa86,	// (0x0002b7c5) main_fps_pane_g1_ParamLimits

0xaa86,	// (0x0002b7c5) main_fps_pane_g1

0xaa9c,	// (0x0002b7db) wait_bar_pane_cp010_ParamLimits

0xaa9c,	// (0x0002b7db) wait_bar_pane_cp010

0xaaad,	// (0x0002b7ec) fps_text_pane_t1_ParamLimits

0xaaad,	// (0x0002b7ec) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
