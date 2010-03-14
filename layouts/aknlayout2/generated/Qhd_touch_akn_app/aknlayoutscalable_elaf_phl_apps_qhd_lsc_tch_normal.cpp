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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000db9e };

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
0x0baa,	// (0x0000e748) Screen

0x0bb6,	// (0x0000e754) application_window

0x0bf2,	// (0x0000e790) area_bottom_pane_ParamLimits

0x0bf2,	// (0x0000e790) area_bottom_pane

0x0c2b,	// (0x0000e7c9) area_top_pane_ParamLimits

0x0c2b,	// (0x0000e7c9) area_top_pane

0x9345,	// (0x00016ee3) call_video_uplink_pane_ParamLimits

0x9345,	// (0x00016ee3) call_video_uplink_pane

0x0ca0,	// (0x0000e83e) main_pane_ParamLimits

0x0ca0,	// (0x0000e83e) main_pane

0xbd73,	// (0x00019911) context_pane

0x3d1a,	// (0x000118b8) navi_pane

0x3d42,	// (0x000118e0) popup_cale_events_window_ParamLimits

0x3d42,	// (0x000118e0) popup_cale_events_window

0xbd86,	// (0x00019924) popup_mup_playback_window

0x3d5a,	// (0x000118f8) signal_pane

0x9ad4,	// (0x00017672) main_browser_pane

0xa869,	// (0x00018407) main_burst_pane

0x3a6c,	// (0x0001160a) main_calc_pane

0xa869,	// (0x00018407) main_cale_day_pane

0x9ad4,	// (0x00017672) main_cale_month_pane

0xa869,	// (0x00018407) main_cale_week_pane

0xa869,	// (0x00018407) main_call_pane

0x9784,	// (0x00017322) main_call_poc_pane

0xa869,	// (0x00018407) main_camera_pane

0xa869,	// (0x00018407) main_chi_dic_pane

0xa6ee,	// (0x0001828c) main_clock_pane

0x9784,	// (0x00017322) main_fmradio_pane

0xa869,	// (0x00018407) main_graph_messa_pane

0x9784,	// (0x00017322) main_help_pane

0x9ad4,	// (0x00017672) main_im_pane

0x99df,	// (0x0001757d) main_image_pane_ParamLimits

0x99df,	// (0x0001757d) main_image_pane

0x9784,	// (0x00017322) main_location2_pane

0xa869,	// (0x00018407) main_location_pane

0x9784,	// (0x00017322) main_messa_pane

0x9784,	// (0x00017322) main_mp2_pane

0xa869,	// (0x00018407) main_mp_pane

0x9784,	// (0x00017322) main_msg_pane

0x9784,	// (0x00017322) main_mup_eq_pane

0x9784,	// (0x00017322) main_mup_pane

0x9ad4,	// (0x00017672) main_notes_pane

0x9784,	// (0x00017322) main_pec_pane

0x9784,	// (0x00017322) main_phob_pane

0x9784,	// (0x00017322) main_pinb_pane

0x9784,	// (0x00017322) main_postcard_pane

0x9784,	// (0x00017322) main_qdial_pane

0xa869,	// (0x00018407) main_skin_pane

0x9784,	// (0x00017322) main_smil2_pane

0xa869,	// (0x00018407) main_smil_pane

0xa869,	// (0x00018407) main_video_pane

0xa869,	// (0x00018407) main_video_tele_pane

0x99df,	// (0x0001757d) main_viewer_pane_ParamLimits

0x99df,	// (0x0001757d) main_viewer_pane

0xa869,	// (0x00018407) main_vorec_pane

0x3ac0,	// (0x0001165e) popup_blid_sat_info_window_ParamLimits

0x3ac0,	// (0x0001165e) popup_blid_sat_info_window

0x3b18,	// (0x000116b6) popup_dyc_status_message_window_ParamLimits

0x3b18,	// (0x000116b6) popup_dyc_status_message_window

0x3b32,	// (0x000116d0) popup_grid_large_graphic_window_ParamLimits

0x3b32,	// (0x000116d0) popup_grid_large_graphic_window

0x3bee,	// (0x0001178c) popup_loc_request_window_ParamLimits

0x3bee,	// (0x0001178c) popup_loc_request_window

0x3cf2,	// (0x00011890) popup_wml_address_window_ParamLimits

0x3cf2,	// (0x00011890) popup_wml_address_window

0x38a6,	// (0x00011444) call_muted_g1

0x355b,	// (0x000110f9) popup_call_audio_conf_window_ParamLimits

0x355b,	// (0x000110f9) popup_call_audio_conf_window

0x38ba,	// (0x00011458) popup_call_audio_first_window_ParamLimits

0x38ba,	// (0x00011458) popup_call_audio_first_window

0x3930,	// (0x000114ce) popup_call_audio_in_window_ParamLimits

0x3930,	// (0x000114ce) popup_call_audio_in_window

0x396c,	// (0x0001150a) popup_call_audio_out_window_ParamLimits

0x396c,	// (0x0001150a) popup_call_audio_out_window

0x39a6,	// (0x00011544) popup_call_audio_second_window_ParamLimits

0x39a6,	// (0x00011544) popup_call_audio_second_window

0x39fc,	// (0x0001159a) popup_call_audio_wait_window_ParamLimits

0x39fc,	// (0x0001159a) popup_call_audio_wait_window

0x3a31,	// (0x000115cf) popup_number_entry_window_ParamLimits

0x3a31,	// (0x000115cf) popup_number_entry_window

0x9371,	// (0x00016f0f) bg_popup_call_pane_cp05_ParamLimits

0x9371,	// (0x00016f0f) bg_popup_call_pane_cp05

0x9391,	// (0x00016f2f) popup_number_entry_window_t1

0x93a4,	// (0x00016f42) popup_number_entry_window_t2

0x93b6,	// (0x00016f54) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0001cc85) popup_number_entry_window_t

0x93c8,	// (0x00016f66) text_title_cp2

0x93db,	// (0x00016f79) bg_popup_call_pane_cp_ParamLimits

0x93db,	// (0x00016f79) bg_popup_call_pane_cp

0x93e9,	// (0x00016f87) call_thumbnail_pane

0x93f1,	// (0x00016f8f) popup_call_audio_in_window_g1_ParamLimits

0x93f1,	// (0x00016f8f) popup_call_audio_in_window_g1

0x93fd,	// (0x00016f9b) popup_call_audio_in_window_g2_ParamLimits

0x93fd,	// (0x00016f9b) popup_call_audio_in_window_g2

0x9409,	// (0x00016fa7) popup_call_audio_in_window_g3_ParamLimits

0x9409,	// (0x00016fa7) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0001cc8e) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0001cc8e) popup_call_audio_in_window_g

0x9415,	// (0x00016fb3) popup_call_audio_in_window_t1_ParamLimits

0x9415,	// (0x00016fb3) popup_call_audio_in_window_t1

0x9431,	// (0x00016fcf) popup_call_audio_in_window_t2_ParamLimits

0x9431,	// (0x00016fcf) popup_call_audio_in_window_t2

0x944d,	// (0x00016feb) popup_call_audio_in_window_t3_ParamLimits

0x944d,	// (0x00016feb) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0001cc95) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0001cc95) popup_call_audio_in_window_t

0x93db,	// (0x00016f79) bg_popup_call_pane_cp01_ParamLimits

0x93db,	// (0x00016f79) bg_popup_call_pane_cp01

0x93e9,	// (0x00016f87) call_thumbnail_pane_cp02

0x9460,	// (0x00016ffe) call_type_pane_cp022

0x9468,	// (0x00017006) popup_call_audio_out_window_g1_ParamLimits

0x9468,	// (0x00017006) popup_call_audio_out_window_g1

0x947a,	// (0x00017018) popup_call_audio_out_window_g2_ParamLimits

0x947a,	// (0x00017018) popup_call_audio_out_window_g2

0x9486,	// (0x00017024) popup_call_audio_out_window_g3_ParamLimits

0x9486,	// (0x00017024) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0001cc9c) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0001cc9c) popup_call_audio_out_window_g

0x9498,	// (0x00017036) popup_call_audio_out_window_t1_ParamLimits

0x9498,	// (0x00017036) popup_call_audio_out_window_t1

0x94b0,	// (0x0001704e) popup_call_audio_out_window_t2_ParamLimits

0x94b0,	// (0x0001704e) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0001cca3) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0001cca3) popup_call_audio_out_window_t

0x94c5,	// (0x00017063) bg_popup_call_pane_ParamLimits

0x94c5,	// (0x00017063) bg_popup_call_pane

0x0e56,	// (0x0000e9f4) call_thumbnail_pane_cp_ParamLimits

0x0e56,	// (0x0000e9f4) call_thumbnail_pane_cp

0x9549,	// (0x000170e7) call_type_pane_cp01_ParamLimits

0x9549,	// (0x000170e7) call_type_pane_cp01

0x958d,	// (0x0001712b) popup_call_audio_first_window_g1_ParamLimits

0x958d,	// (0x0001712b) popup_call_audio_first_window_g1

0x95d9,	// (0x00017177) popup_call_audio_first_window_g2_ParamLimits

0x95d9,	// (0x00017177) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0001cca8) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0001cca8) popup_call_audio_first_window_g

0x961d,	// (0x000171bb) popup_call_audio_first_window_t1_ParamLimits

0x961d,	// (0x000171bb) popup_call_audio_first_window_t1

0x96c9,	// (0x00017267) popup_call_audio_first_window_t4_ParamLimits

0x96c9,	// (0x00017267) popup_call_audio_first_window_t4

0x9755,	// (0x000172f3) popup_call_audio_first_window_t5_ParamLimits

0x9755,	// (0x000172f3) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0001ccad) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0001ccad) popup_call_audio_first_window_t

0x9784,	// (0x00017322) bg_popup_call_pane_cp02

0x978e,	// (0x0001732c) call_type_pane_cp023

0x9796,	// (0x00017334) popup_call_audio_wait_window_g1

0x979e,	// (0x0001733c) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0001ccb4) popup_call_audio_wait_window_g

0x97a6,	// (0x00017344) popup_call_audio_wait_window_t3

0x97b4,	// (0x00017352) bg_popup_call_pane_cp03_ParamLimits

0x97b4,	// (0x00017352) bg_popup_call_pane_cp03

0x9814,	// (0x000173b2) call_thumbnail_pane_cp011_ParamLimits

0x9814,	// (0x000173b2) call_thumbnail_pane_cp011

0x9820,	// (0x000173be) call_type_pane_cp034_ParamLimits

0x9820,	// (0x000173be) call_type_pane_cp034

0x985c,	// (0x000173fa) popup_call_audio_second_window_g1_ParamLimits

0x985c,	// (0x000173fa) popup_call_audio_second_window_g1

0x9898,	// (0x00017436) popup_call_audio_second_window_g2_ParamLimits

0x9898,	// (0x00017436) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0001ccb9) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0001ccb9) popup_call_audio_second_window_g

0x98d4,	// (0x00017472) popup_call_audio_second_window_t1_ParamLimits

0x98d4,	// (0x00017472) popup_call_audio_second_window_t1

0x9955,	// (0x000174f3) popup_call_audio_second_window_t2_ParamLimits

0x9955,	// (0x000174f3) popup_call_audio_second_window_t2

0x998b,	// (0x00017529) popup_call_audio_second_window_t3_ParamLimits

0x998b,	// (0x00017529) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0001ccbe) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0001ccbe) popup_call_audio_second_window_t

0x9784,	// (0x00017322) bg_popup_call_pane_cp04

0x99c1,	// (0x0001755f) list_conf_pane

0x99c9,	// (0x00017567) popup_call_audio_conf_window_t1

0x99d7,	// (0x00017575) call_thumbnail_pane_g1

0x99df,	// (0x0001757d) bg_pinb_pane_ParamLimits

0x99df,	// (0x0001757d) bg_pinb_pane

0x99ed,	// (0x0001758b) find_pinb_pane

0x99f6,	// (0x00017594) listscroll_pinb_pane_ParamLimits

0x99f6,	// (0x00017594) listscroll_pinb_pane

0x9a05,	// (0x000175a3) pinb_bg_pane_g1

0x0e7a,	// (0x0000ea18) pinb_bg_pane_g2

0x0e86,	// (0x0000ea24) pinb_bg_pane_g3

0x0e92,	// (0x0000ea30) pinb_bg_pane_g4

0x0e9e,	// (0x0000ea3c) pinb_bg_pane_g5

0x0eaa,	// (0x0000ea48) pinb_bg_pane_g6

0x0eb5,	// (0x0000ea53) pinb_bg_pane_g7

0x0ec0,	// (0x0000ea5e) pinb_bg_pane_g8

0x0ecb,	// (0x0000ea69) pinb_bg_pane_g9

0x0ed5,	// (0x0000ea73) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0001ccc5) pinb_bg_pane_g

0x0ef2,	// (0x0000ea90) grid_pinb_pane

0x0efb,	// (0x0000ea99) list_pinb_pane

0x0f04,	// (0x0000eaa2) scroll_pane_cp01_ParamLimits

0x0f04,	// (0x0000eaa2) scroll_pane_cp01

0x9a0f,	// (0x000175ad) find_pinb_pane_g1_ParamLimits

0x9a0f,	// (0x000175ad) find_pinb_pane_g1

0x9a27,	// (0x000175c5) find_pinb_pane_t1

0x9a39,	// (0x000175d7) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0001ccdf) find_pinb_pane_t

0x9a4e,	// (0x000175ec) input_focus_pane_cp01_ParamLimits

0x9a4e,	// (0x000175ec) input_focus_pane_cp01

0x0f16,	// (0x0000eab4) cell_pinb_pane_ParamLimits

0x0f16,	// (0x0000eab4) cell_pinb_pane

0x0f3f,	// (0x0000eadd) cell_pinb_pane_g1_ParamLimits

0x0f3f,	// (0x0000eadd) cell_pinb_pane_g1

0x0f4f,	// (0x0000eaed) cell_pinb_pane_g2_ParamLimits

0x0f4f,	// (0x0000eaed) cell_pinb_pane_g2

0x9a5a,	// (0x000175f8) cell_pinb_pane_g3_ParamLimits

0x9a5a,	// (0x000175f8) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0001cce4) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0001cce4) cell_pinb_pane_g

0x9784,	// (0x00017322) grid_highlight_pane_cp01

0x0f5b,	// (0x0000eaf9) list_pinb_item_pane_ParamLimits

0x0f5b,	// (0x0000eaf9) list_pinb_item_pane

0x9784,	// (0x00017322) list_highlight_pane_cp02

0x0f6d,	// (0x0000eb0b) list_pinb_item_pane_g1_ParamLimits

0x0f6d,	// (0x0000eb0b) list_pinb_item_pane_g1

0x0f7a,	// (0x0000eb18) list_pinb_item_pane_g2_ParamLimits

0x0f7a,	// (0x0000eb18) list_pinb_item_pane_g2

0x0f86,	// (0x0000eb24) list_pinb_item_pane_g3_ParamLimits

0x0f86,	// (0x0000eb24) list_pinb_item_pane_g3

0x0f97,	// (0x0000eb35) list_pinb_item_pane_g4_ParamLimits

0x0f97,	// (0x0000eb35) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0001cceb) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0001cceb) list_pinb_item_pane_g

0x0fa3,	// (0x0000eb41) list_pinb_item_pane_t1_ParamLimits

0x0fa3,	// (0x0000eb41) list_pinb_item_pane_t1

0x0fd8,	// (0x0000eb76) calc_display_pane

0x1000,	// (0x0000eb9e) calc_paper_pane

0x1023,	// (0x0000ebc1) grid_calc_pane

0x9784,	// (0x00017322) bg_list_pane_cp01

0x1051,	// (0x0000ebef) clock_g1

0x1059,	// (0x0000ebf7) clock_g2

0x0001,

0xf156,	// (0x0001ccf4) clock_g

0x1061,	// (0x0000ebff) clock_t1_ParamLimits

0x1061,	// (0x0000ebff) clock_t1

0x1076,	// (0x0000ec14) clock_t2_ParamLimits

0x1076,	// (0x0000ec14) clock_t2

0x1088,	// (0x0000ec26) clock_t3_ParamLimits

0x1088,	// (0x0000ec26) clock_t3

0x109a,	// (0x0000ec38) clock_t4_ParamLimits

0x109a,	// (0x0000ec38) clock_t4

0x10ac,	// (0x0000ec4a) clock_t5_ParamLimits

0x10ac,	// (0x0000ec4a) clock_t5

0x10c1,	// (0x0000ec5f) clock_t6_ParamLimits

0x10c1,	// (0x0000ec5f) clock_t6

0x10d3,	// (0x0000ec71) clock_t7_ParamLimits

0x10d3,	// (0x0000ec71) clock_t7

0x10e5,	// (0x0000ec83) clock_t8_ParamLimits

0x10e5,	// (0x0000ec83) clock_t8

0x10f9,	// (0x0000ec97) clock_t9_ParamLimits

0x10f9,	// (0x0000ec97) clock_t9

0x0008,

0xf15b,	// (0x0001ccf9) clock_t_ParamLimits

0xf15b,	// (0x0001ccf9) clock_t

0x9a6e,	// (0x0001760c) popup_clock_analogue_window_cp02

0x9a6e,	// (0x0001760c) popup_clock_digital_window_cp01

0x9a76,	// (0x00017614) listscroll_help_pane

0x9784,	// (0x00017322) phob_pre_status_pane

0x9a80,	// (0x0001761e) grid_qdial_pane

0x9784,	// (0x00017322) listscroll_mce_pane

0x9a8a,	// (0x00017628) bg_notes_pane

0x9a98,	// (0x00017636) list_notes_pane

0x110d,	// (0x0000ecab) scroll_pane_cp06

0x9aa6,	// (0x00017644) bg_calc_paper_pane

0x9aba,	// (0x00017658) list_calc_pane

0x9ad4,	// (0x00017672) bg_calc_display_pane

0x1121,	// (0x0000ecbf) calc_display_pane_t1

0x1133,	// (0x0000ecd1) calc_display_pane_t2

0x9ae0,	// (0x0001767e) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0001cd0c) calc_display_pane_t

0x1145,	// (0x0000ece3) cell_calc_pane_ParamLimits

0x1145,	// (0x0000ece3) cell_calc_pane

0x9af2,	// (0x00017690) bg_calc_paper_pane_g1

0x9afe,	// (0x0001769c) bg_calc_paper_pane_g2

0x9b0a,	// (0x000176a8) bg_calc_paper_pane_g3

0x9b16,	// (0x000176b4) bg_calc_paper_pane_g4

0x9b22,	// (0x000176c0) bg_calc_paper_pane_g5

0x117a,	// (0x0000ed18) bg_calc_paper_pane_g6

0x1189,	// (0x0000ed27) bg_calc_paper_pane_g7

0x1198,	// (0x0000ed36) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0001cd13) bg_calc_paper_pane_g

0x11ab,	// (0x0000ed49) calc_bg_paper_pane_g9

0x11be,	// (0x0000ed5c) list_calc_item_pane_ParamLimits

0x11be,	// (0x0000ed5c) list_calc_item_pane

0x9b2e,	// (0x000176cc) list_calc_item_pane_g1

0x9b3b,	// (0x000176d9) list_calc_item_pane_t1_ParamLimits

0x9b3b,	// (0x000176d9) list_calc_item_pane_t1

0x11d6,	// (0x0000ed74) list_calc_item_pane_t2_ParamLimits

0x11d6,	// (0x0000ed74) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0001cd24) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0001cd24) list_calc_item_pane_t

0x9b4d,	// (0x000176eb) cell_calc_pane_g1

0x9b57,	// (0x000176f5) grid_highlight_pane_cp02

0x1208,	// (0x0000eda6) bg_calc_display_pane_g1

0x1211,	// (0x0000edaf) bg_calc_display_pane_g2

0x121b,	// (0x0000edb9) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0001cd2e) bg_calc_display_pane_g

0x1224,	// (0x0000edc2) cell_qdial_pane_ParamLimits

0x1224,	// (0x0000edc2) cell_qdial_pane

0x1238,	// (0x0000edd6) cell_qdial_pane_g1_ParamLimits

0x1238,	// (0x0000edd6) cell_qdial_pane_g1

0x124e,	// (0x0000edec) cell_qdial_pane_g2_ParamLimits

0x124e,	// (0x0000edec) cell_qdial_pane_g2

0x9b79,	// (0x00017717) cell_qdial_pane_g3_ParamLimits

0x9b79,	// (0x00017717) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0001cd35) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0001cd35) cell_qdial_pane_g

0x1275,	// (0x0000ee13) cell_qdial_pane_t1_ParamLimits

0x1275,	// (0x0000ee13) cell_qdial_pane_t1

0x128d,	// (0x0000ee2b) cell_qdial_pane_t2_ParamLimits

0x128d,	// (0x0000ee2b) cell_qdial_pane_t2

0x12a0,	// (0x0000ee3e) cell_qdial_pane_t3_ParamLimits

0x12a0,	// (0x0000ee3e) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0001cd3e) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0001cd3e) cell_qdial_pane_t

0x9784,	// (0x00017322) grid_highlight_pane_cp04

0x9b85,	// (0x00017723) thumbnail_qdial_pane_ParamLimits

0x9b85,	// (0x00017723) thumbnail_qdial_pane

0x9be1,	// (0x0001777f) list_help_pane

0x9bea,	// (0x00017788) scroll_pane_cp02

0x12b3,	// (0x0000ee51) help_list_pane_t1_ParamLimits

0x12b3,	// (0x0000ee51) help_list_pane_t1

0x9bf3,	// (0x00017791) bg_notes_pane_g2

0x9bfb,	// (0x00017799) bg_notes_pane_g3

0x9c03,	// (0x000177a1) notes_bg_pane_g1

0x9c0b,	// (0x000177a9) notes_bg_pane_g4

0x9c13,	// (0x000177b1) notes_bg_pane_g5

0x9c1b,	// (0x000177b9) notes_bg_pane_g6

0x9c23,	// (0x000177c1) notes_bg_pane_g7

0x9c2b,	// (0x000177c9) notes_bg_pane_g8

0x9c33,	// (0x000177d1) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0001cd5c) notes_bg_pane_g

0x12d0,	// (0x0000ee6e) list_notes_text_pane_ParamLimits

0x12d0,	// (0x0000ee6e) list_notes_text_pane

0x9c3b,	// (0x000177d9) list_notes_text_pane_g1

0x12e5,	// (0x0000ee83) list_notes_text_pane_t1

0x9ad4,	// (0x00017672) listscroll_cale_week_pane

0x1310,	// (0x0000eeae) bg_cale_heading_pane

0x9c55,	// (0x000177f3) bg_cale_pane_cp01

0x1324,	// (0x0000eec2) cale_week_corner_pane

0x133a,	// (0x0000eed8) cale_week_day_heading_pane

0x134e,	// (0x0000eeec) cale_week_scroll_pane_g1

0x135f,	// (0x0000eefd) cale_week_scroll_pane_g2

0x1370,	// (0x0000ef0e) cale_week_scroll_pane_g3

0x1381,	// (0x0000ef1f) cale_week_scroll_pane_g4

0x1392,	// (0x0000ef30) cale_week_scroll_pane_g5

0x13a5,	// (0x0000ef43) cale_week_scroll_pane_g6

0x13b8,	// (0x0000ef56) cale_week_scroll_pane_g7

0x13cb,	// (0x0000ef69) cale_week_scroll_pane_g8

0x13de,	// (0x0000ef7c) cale_week_scroll_pane_g9

0x13ef,	// (0x0000ef8d) cale_week_scroll_pane_g10

0x1400,	// (0x0000ef9e) cale_week_scroll_pane_g11

0x1411,	// (0x0000efaf) cale_week_scroll_pane_g12

0x1422,	// (0x0000efc0) cale_week_scroll_pane_g13

0x1433,	// (0x0000efd1) cale_week_scroll_pane_g14

0x1444,	// (0x0000efe2) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0001cd6b) cale_week_scroll_pane_g

0x1455,	// (0x0000eff3) cale_week_time_pane

0x1468,	// (0x0000f006) grid_cale_week_pane

0x147d,	// (0x0000f01b) scroll_pane_cp08

0x1497,	// (0x0000f035) cell_cale_week_pane_ParamLimits

0x1497,	// (0x0000f035) cell_cale_week_pane

0x14d7,	// (0x0000f075) cale_week_day_heading_pane_t1

0x1501,	// (0x0000f09f) cale_week_day_heading_pane_t2

0x152b,	// (0x0000f0c9) cale_week_day_heading_pane_t3

0x1555,	// (0x0000f0f3) cale_week_day_heading_pane_t4

0x157f,	// (0x0000f11d) cale_week_day_heading_pane_t5

0x15a9,	// (0x0000f147) cale_week_day_heading_pane_t6

0x15d5,	// (0x0000f173) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0001cd8a) cale_week_day_heading_pane_t

0x9c80,	// (0x0001781e) bg_cale_side_pane

0x15ff,	// (0x0000f19d) cale_week_time_pane_t1

0x1617,	// (0x0000f1b5) cale_week_time_pane_t2

0x162f,	// (0x0000f1cd) cale_week_time_pane_t3

0x1647,	// (0x0000f1e5) cale_week_time_pane_t4

0x165f,	// (0x0000f1fd) cale_week_time_pane_t5

0x1677,	// (0x0000f215) cale_week_time_pane_t6

0x168f,	// (0x0000f22d) cale_week_time_pane_t7

0x16a7,	// (0x0000f245) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0001cd99) cale_week_time_pane_t

0x16bf,	// (0x0000f25d) cell_cale_week_pane_g2

0x16d8,	// (0x0000f276) cell_cale_week_pane_g3_ParamLimits

0x16d8,	// (0x0000f276) cell_cale_week_pane_g3

0x9c8e,	// (0x0001782c) grid_highlight_pane_cp07

0x9c96,	// (0x00017834) listscroll_gms_pane

0x9ca0,	// (0x0001783e) grid_gms_pane

0x9ca9,	// (0x00017847) listscroll_gms_pane_g1

0x9cb1,	// (0x0001784f) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0001cdaa) listscroll_gms_pane_g

0x16f0,	// (0x0000f28e) scroll_pane_cp010

0x16fb,	// (0x0000f299) cell_gms_pane_ParamLimits

0x16fb,	// (0x0000f299) cell_gms_pane

0x170d,	// (0x0000f2ab) cell_gms_pane_g1

0x9cb9,	// (0x00017857) cell_gms_pane_g2

0x9cc1,	// (0x0001785f) cell_gms_pane_g3

0x9cca,	// (0x00017868) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0001cdaf) cell_gms_pane_g

0x9cd3,	// (0x00017871) grid_highlight_pane_cp09

0x3850,	// (0x000113ee) phob_pre_status_pane_g1

0x3858,	// (0x000113f6) phob_pre_status_pane_g2

0x3860,	// (0x000113fe) phob_pre_status_pane_g3

0x3868,	// (0x00011406) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0001d19e) phob_pre_status_pane_g

0x3878,	// (0x00011416) phob_pre_status_pane_t1

0x3886,	// (0x00011424) phob_pre_status_pane_t2

0x3896,	// (0x00011434) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0001d1a9) phob_pre_status_pane_t

0x9784,	// (0x00017322) bg_list_pane_cp05

0x171d,	// (0x0000f2bb) grid_vorec_pane

0x9cdb,	// (0x00017879) vorec_t1

0x9ce9,	// (0x00017887) vorec_t2

0x9cf7,	// (0x00017895) vorec_t3

0x9d05,	// (0x000178a3) vorec_t4

0x9d13,	// (0x000178b1) vorec_t5

0x9d21,	// (0x000178bf) vorec_t6

0x0006,

0xf21a,	// (0x0001cdb8) vorec_t

0x9d3d,	// (0x000178db) wait_bar_pane_cp01

0x1725,	// (0x0000f2c3) cell_vorec_pane_ParamLimits

0x1725,	// (0x0000f2c3) cell_vorec_pane

0x9d45,	// (0x000178e3) cell_vorec_pane_g1

0x9784,	// (0x00017322) grid_highlight_pane_cp05

0x1750,	// (0x0000f2ee) cams_zoom_pane

0x175f,	// (0x0000f2fd) image_vga_pane

0x1779,	// (0x0000f317) main_camera_pane_g1

0x178b,	// (0x0000f329) main_camera_pane_g2

0x179b,	// (0x0000f339) main_camera_pane_g3

0x17ab,	// (0x0000f349) main_camera_pane_g4

0x17bb,	// (0x0000f359) main_camera_pane_g5

0x17cb,	// (0x0000f369) main_camera_pane_g6

0x17dd,	// (0x0000f37b) main_camera_pane_g7

0x0007,

0xf229,	// (0x0001cdc7) main_camera_pane_g

0x17ed,	// (0x0000f38b) main_camera_pane_t1

0x1803,	// (0x0000f3a1) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0001cdd8) main_camera_pane_t

0x183d,	// (0x0000f3db) cams_zoom_pane_cp_ParamLimits

0x183d,	// (0x0000f3db) cams_zoom_pane_cp

0x1865,	// (0x0000f403) image_cif_pane_ParamLimits

0x1865,	// (0x0000f403) image_cif_pane

0x18a0,	// (0x0000f43e) image_subqcif_pane

0x18a8,	// (0x0000f446) main_video_pane_g1_ParamLimits

0x18a8,	// (0x0000f446) main_video_pane_g1

0x18cc,	// (0x0000f46a) main_video_pane_g2_ParamLimits

0x18cc,	// (0x0000f46a) main_video_pane_g2

0x1900,	// (0x0000f49e) main_video_pane_g3_ParamLimits

0x1900,	// (0x0000f49e) main_video_pane_g3

0x192e,	// (0x0000f4cc) main_video_pane_g4_ParamLimits

0x192e,	// (0x0000f4cc) main_video_pane_g4

0x195c,	// (0x0000f4fa) main_video_pane_g5_ParamLimits

0x195c,	// (0x0000f4fa) main_video_pane_g5

0x9d5b,	// (0x000178f9) main_video_pane_g6_ParamLimits

0x9d5b,	// (0x000178f9) main_video_pane_g6

0x0006,

0xf23f,	// (0x0001cddd) main_video_pane_g_ParamLimits

0xf23f,	// (0x0001cddd) main_video_pane_g

0x1985,	// (0x0000f523) main_video_pane_t1_ParamLimits

0x1985,	// (0x0000f523) main_video_pane_t1

0x9d75,	// (0x00017913) cams_zoom_pane_g1

0x9d7e,	// (0x0001791c) cams_zoom_pane_g2

0x9d87,	// (0x00017925) cams_zoom_pane_g3

0x9d90,	// (0x0001792e) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0001cdec) cams_zoom_pane_g

0x19e2,	// (0x0000f580) grid_cams_pane

0x19fc,	// (0x0000f59a) linegrid_cams_pane

0x1a10,	// (0x0000f5ae) cell_cams_pane_ParamLimits

0x1a10,	// (0x0000f5ae) cell_cams_pane

0x9d99,	// (0x00017937) cams_burst_image_pane

0x9da1,	// (0x0001793f) cell_cams_pane_g1

0x9784,	// (0x00017322) grid_highlight_pane_cp03

0x9b4d,	// (0x000176eb) mp_bg_pane_g1

0x9784,	// (0x00017322) bg_list_pane_cp03

0xbc4b,	// (0x000197e9) bg_mp_pane

0xbc53,	// (0x000197f1) grid_mp_pane

0xbc5b,	// (0x000197f9) media_player_g1

0xbc63,	// (0x00019801) media_player_t1

0xbc71,	// (0x0001980f) media_player_t2

0xbc7f,	// (0x0001981d) media_player_t3

0xbc8d,	// (0x0001982b) media_player_t4

0xbc9b,	// (0x00019839) media_player_t5

0xbca9,	// (0x00019847) media_player_t6

0xbcb7,	// (0x00019855) media_player_t7

0x0006,

0xf5ea,	// (0x0001d188) media_player_t

0xbcc5,	// (0x00019863) wait_bar_pane_cp02

0xf5cf,	// (0x0001d16d) main_usb_pane_t

0x3847,	// (0x000113e5) cell_mp_pane

0x9b4d,	// (0x000176eb) cell_mp_pane_g1

0x9784,	// (0x00017322) grid_highlight_pane_cp06

0x9e49,	// (0x000179e7) grid_skin_colour_pane

0x9e51,	// (0x000179ef) list_highlight_pane_cp03

0x1a82,	// (0x0000f620) skin_g1

0x9e59,	// (0x000179f7) skin_t1

0x9e68,	// (0x00017a06) skin_t2

0x0001,

0xf283,	// (0x0001ce21) skin_t

0x1a8a,	// (0x0000f628) cell_skin_colour_pane_ParamLimits

0x1a8a,	// (0x0000f628) cell_skin_colour_pane

0x9e76,	// (0x00017a14) cell_skin_colour_pane_g1

0x1b03,	// (0x0000f6a1) call_video_g1_ParamLimits

0x1b03,	// (0x0000f6a1) call_video_g1

0x1b1f,	// (0x0000f6bd) call_video_g2_ParamLimits

0x1b1f,	// (0x0000f6bd) call_video_g2

0x0001,

0xf288,	// (0x0001ce26) call_video_g_ParamLimits

0xf288,	// (0x0001ce26) call_video_g

0x1b71,	// (0x0000f70f) call_video_uplink_pane_cp1_ParamLimits

0x1b71,	// (0x0000f70f) call_video_uplink_pane_cp1

0x9e88,	// (0x00017a26) call_video_uplink_pane_cp2

0x1c10,	// (0x0000f7ae) video_down_crop_pane_ParamLimits

0x1c10,	// (0x0000f7ae) video_down_crop_pane

0x1d07,	// (0x0000f8a5) video_down_pane_ParamLimits

0x1d07,	// (0x0000f8a5) video_down_pane

0x9e90,	// (0x00017a2e) video_down_subqcif_pane_ParamLimits

0x9e90,	// (0x00017a2e) video_down_subqcif_pane

0x9ea8,	// (0x00017a46) video_down_subqcif_pane_cp_ParamLimits

0x9ea8,	// (0x00017a46) video_down_subqcif_pane_cp

0x9ece,	// (0x00017a6c) im_reading_pane_ParamLimits

0x9ece,	// (0x00017a6c) im_reading_pane

0x1e15,	// (0x0000f9b3) im_writing_pane_ParamLimits

0x1e15,	// (0x0000f9b3) im_writing_pane

0x1e2b,	// (0x0000f9c9) im_reading_pane_t1

0x9ee8,	// (0x00017a86) list_im_pane

0x9ef9,	// (0x00017a97) scroll_pane_cp07

0x1e64,	// (0x0000fa02) im_writing_pane_t1_ParamLimits

0x1e64,	// (0x0000fa02) im_writing_pane_t1

0x9f12,	// (0x00017ab0) im_writing_pane_t2_ParamLimits

0x9f12,	// (0x00017ab0) im_writing_pane_t2

0x0001,

0xf292,	// (0x0001ce30) im_writing_pane_t_ParamLimits

0xf292,	// (0x0001ce30) im_writing_pane_t

0x9784,	// (0x00017322) input_focus_pane_cp04

0x9784,	// (0x00017322) input_focus_pane_cp05

0x1e79,	// (0x0000fa17) list_im_single_pane_ParamLimits

0x1e79,	// (0x0000fa17) list_im_single_pane

0x1e8d,	// (0x0000fa2b) list_single_im_pane_t1

0x3807,	// (0x000113a5) blid_accuracy_pane

0x380f,	// (0x000113ad) blid_compass_pane

0x3819,	// (0x000113b7) main_location_t1

0x3829,	// (0x000113c7) main_location_t2

0x3839,	// (0x000113d7) main_location_t3

0x0002,

0xf5f9,	// (0x0001d197) main_location_t

0x9784,	// (0x00017322) aid_levels_location

0x9b4d,	// (0x000176eb) blid_accuracy_pane_g1

0x9b4d,	// (0x000176eb) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0001ce92) blid_accuracy_pane_g

0x9f5a,	// (0x00017af8) wml_content_pane

0x9f98,	// (0x00017b36) wml_button_pane_ParamLimits

0x9f98,	// (0x00017b36) wml_button_pane

0x1e9c,	// (0x0000fa3a) wml_list_single_large_pane_ParamLimits

0x1e9c,	// (0x0000fa3a) wml_list_single_large_pane

0x1eb1,	// (0x0000fa4f) wml_list_single_medium_pane_ParamLimits

0x1eb1,	// (0x0000fa4f) wml_list_single_medium_pane

0x1ec7,	// (0x0000fa65) wml_list_single_small_pane_ParamLimits

0x1ec7,	// (0x0000fa65) wml_list_single_small_pane

0x9fac,	// (0x00017b4a) wml_selection_box_pane_ParamLimits

0x9fac,	// (0x00017b4a) wml_selection_box_pane

0x9fbf,	// (0x00017b5d) wml_list_single_pane_t1

0x9fce,	// (0x00017b6c) wml_list_single_medium_pane_t1

0x9fdd,	// (0x00017b7b) wml_list_single_large_pane_t1

0x9fec,	// (0x00017b8a) input_focus_pane_cp02_ParamLimits

0x9fec,	// (0x00017b8a) input_focus_pane_cp02

0x9fff,	// (0x00017b9d) wml_selection_box_pane_g1

0xa008,	// (0x00017ba6) wml_selection_box_pane_t1_ParamLimits

0xa008,	// (0x00017ba6) wml_selection_box_pane_t1

0x99df,	// (0x0001757d) bg_wml_button_pane_ParamLimits

0x99df,	// (0x0001757d) bg_wml_button_pane

0xa020,	// (0x00017bbe) wml_button_pane_g1

0xa028,	// (0x00017bc6) wml_button_pane_t1

0xa020,	// (0x00017bbe) wml_button_bg_pane_g1

0xa038,	// (0x00017bd6) wml_button_bg_pane_g2

0xa040,	// (0x00017bde) wml_button_bg_pane_g3

0xa048,	// (0x00017be6) wml_button_bg_pane_g4

0xa050,	// (0x00017bee) wml_button_bg_pane_g5

0xa058,	// (0x00017bf6) wml_button_bg_pane_g6

0xa060,	// (0x00017bfe) wml_button_bg_pane_g7

0xa068,	// (0x00017c06) wml_button_bg_pane_g8

0xa070,	// (0x00017c0e) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0001ce35) wml_button_bg_pane_g

0x1edf,	// (0x0000fa7d) bg_list_pane_cp02

0xa078,	// (0x00017c16) mce_header_pane_ParamLimits

0xa078,	// (0x00017c16) mce_header_pane

0xa08e,	// (0x00017c2c) mce_icon_pane

0xa08e,	// (0x00017c2c) mce_image_pane

0xa097,	// (0x00017c35) mce_text_pane_ParamLimits

0xa097,	// (0x00017c35) mce_text_pane

0x1ee7,	// (0x0000fa85) scroll_pane_cp03

0x9f90,	// (0x00017b2e) scroll_pane_cp04

0xa0aa,	// (0x00017c48) scroll_pane_cp05_ParamLimits

0xa0aa,	// (0x00017c48) scroll_pane_cp05

0x1ef1,	// (0x0000fa8f) mce_header_field_pane_ParamLimits

0x1ef1,	// (0x0000fa8f) mce_header_field_pane

0x1f08,	// (0x0000faa6) mce_header_field_pane_2_ParamLimits

0x1f08,	// (0x0000faa6) mce_header_field_pane_2

0x1f1e,	// (0x0000fabc) mce_header_field_pane_3

0x1f26,	// (0x0000fac4) list_single_mce_message_pane_ParamLimits

0x1f26,	// (0x0000fac4) list_single_mce_message_pane

0x1f3b,	// (0x0000fad9) list_single_mce_smart_pane_ParamLimits

0x1f3b,	// (0x0000fad9) list_single_mce_smart_pane

0xa0b6,	// (0x00017c54) input_focus_pane_cp03

0xa0bf,	// (0x00017c5d) list_header_data_pane

0x1f5b,	// (0x0000faf9) mce_header_field_pane_t1

0x1f6b,	// (0x0000fb09) list_single_mce_header_pane_ParamLimits

0x1f6b,	// (0x0000fb09) list_single_mce_header_pane

0xa0c7,	// (0x00017c65) list_single_mce_header_pane_t1

0xa0d6,	// (0x00017c74) list_single_mce_message_pane_g1

0xa0de,	// (0x00017c7c) list_single_mce_message_pane_t1

0x1f9d,	// (0x0000fb3b) bg_cale_heading_pane_cp01_ParamLimits

0x1f9d,	// (0x0000fb3b) bg_cale_heading_pane_cp01

0xa0ec,	// (0x00017c8a) bg_cale_pane_cp02_ParamLimits

0xa0ec,	// (0x00017c8a) bg_cale_pane_cp02

0x1fc0,	// (0x0000fb5e) cale_month_corner_pane

0x1fd6,	// (0x0000fb74) cale_month_day_heading_pane_ParamLimits

0x1fd6,	// (0x0000fb74) cale_month_day_heading_pane

0x2009,	// (0x0000fba7) cale_month_pane_g1_ParamLimits

0x2009,	// (0x0000fba7) cale_month_pane_g1

0x2025,	// (0x0000fbc3) cale_month_pane_g2_ParamLimits

0x2025,	// (0x0000fbc3) cale_month_pane_g2

0x2040,	// (0x0000fbde) cale_month_pane_g3_ParamLimits

0x2040,	// (0x0000fbde) cale_month_pane_g3

0x206c,	// (0x0000fc0a) cale_month_pane_g4_ParamLimits

0x206c,	// (0x0000fc0a) cale_month_pane_g4

0x2098,	// (0x0000fc36) cale_month_pane_g5_ParamLimits

0x2098,	// (0x0000fc36) cale_month_pane_g5

0x20cc,	// (0x0000fc6a) cale_month_pane_g6_ParamLimits

0x20cc,	// (0x0000fc6a) cale_month_pane_g6

0x2108,	// (0x0000fca6) cale_month_pane_g7_ParamLimits

0x2108,	// (0x0000fca6) cale_month_pane_g7

0x2144,	// (0x0000fce2) cale_month_pane_g8_ParamLimits

0x2144,	// (0x0000fce2) cale_month_pane_g8

0x2180,	// (0x0000fd1e) cale_month_pane_g9_ParamLimits

0x2180,	// (0x0000fd1e) cale_month_pane_g9

0x21ba,	// (0x0000fd58) cale_month_pane_g10_ParamLimits

0x21ba,	// (0x0000fd58) cale_month_pane_g10

0x21f4,	// (0x0000fd92) cale_month_pane_g11_ParamLimits

0x21f4,	// (0x0000fd92) cale_month_pane_g11

0x222e,	// (0x0000fdcc) cale_month_pane_g12_ParamLimits

0x222e,	// (0x0000fdcc) cale_month_pane_g12

0x2268,	// (0x0000fe06) cale_month_pane_g13_ParamLimits

0x2268,	// (0x0000fe06) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0001ce48) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0001ce48) cale_month_pane_g

0x22a2,	// (0x0000fe40) cale_month_week_pane

0x22b5,	// (0x0000fe53) grid_cale_month_pane_ParamLimits

0x22b5,	// (0x0000fe53) grid_cale_month_pane

0x22e3,	// (0x0000fe81) cale_month_day_heading_pane_t1

0x2341,	// (0x0000fedf) cale_month_day_heading_pane_t2

0x23a6,	// (0x0000ff44) cale_month_day_heading_pane_t3

0x240b,	// (0x0000ffa9) cale_month_day_heading_pane_t4

0x2470,	// (0x0001000e) cale_month_day_heading_pane_t5

0x24e5,	// (0x00010083) cale_month_day_heading_pane_t6

0x255a,	// (0x000100f8) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0001ce63) cale_month_day_heading_pane_t

0x9c80,	// (0x0001781e) bg_cale_side_pane_cp01

0x25cf,	// (0x0001016d) cale_month_week_pane_t1

0x25e6,	// (0x00010184) cale_month_week_pane_t2

0x25fd,	// (0x0001019b) cale_month_week_pane_t3

0x2614,	// (0x000101b2) cale_month_week_pane_t4

0x262b,	// (0x000101c9) cale_month_week_pane_t5

0x2642,	// (0x000101e0) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0001ce72) cale_month_week_pane_t

0x2659,	// (0x000101f7) cell_cale_month_pane_ParamLimits

0x2659,	// (0x000101f7) cell_cale_month_pane

0xa14b,	// (0x00017ce9) cell_cale_month_pane_g1

0x272f,	// (0x000102cd) cell_cale_month_pane_t1_ParamLimits

0x272f,	// (0x000102cd) cell_cale_month_pane_t1

0x9c8e,	// (0x0001782c) grid_highlight_pane_cp08

0x9b4d,	// (0x000176eb) main_smil_g1

0x274b,	// (0x000102e9) smil_status_pane

0xa157,	// (0x00017cf5) smil_text_pane

0xbb6b,	// (0x00019709) bg_popup_call3_rect_pane_g8

0xbb73,	// (0x00019711) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0001d12b) bg_popup_call3_rect_pane_g

0xbded,	// (0x0001998b) smil_status_volume_pane_g1

0xa161,	// (0x00017cff) smil_status_pane_t1

0xbe20,	// (0x000199be) volume_smil_pane

0xa178,	// (0x00017d16) list_smil_text_pane

0x275e,	// (0x000102fc) scroll_pane_cp011

0x2769,	// (0x00010307) smil_text_list_pane_t1_ParamLimits

0x2769,	// (0x00010307) smil_text_list_pane_t1

0xa182,	// (0x00017d20) aid_volume_smil_ParamLimits

0xa182,	// (0x00017d20) aid_volume_smil

0x9b4d,	// (0x000176eb) smil_volume_pane_g1

0x9b4d,	// (0x000176eb) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0001ce92) smil_volume_pane_g

0x9ad4,	// (0x00017672) listscroll_cale_day_pane

0xa1a4,	// (0x00017d42) bg_cale_pane

0xa1bc,	// (0x00017d5a) list_cale_pane

0xa1cd,	// (0x00017d6b) scroll_pane_cp09

0xa1de,	// (0x00017d7c) cale_bg_pane_g1

0xa1e6,	// (0x00017d84) cale_bg_pane_g2

0xa1ee,	// (0x00017d8c) cale_bg_pane_g3

0xa1f6,	// (0x00017d94) cale_bg_pane_g4

0xa1fe,	// (0x00017d9c) cale_bg_pane_g5

0xa206,	// (0x00017da4) cale_bg_pane_g6

0xa20e,	// (0x00017dac) cale_bg_pane_g7

0xa216,	// (0x00017db4) cale_bg_pane_g8

0xa21e,	// (0x00017dbc) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0001ce97) cale_bg_pane_g

0x27af,	// (0x0001034d) list_cale_time_pane_ParamLimits

0x27af,	// (0x0001034d) list_cale_time_pane

0xa226,	// (0x00017dc4) list_cale_time_pane_g1_ParamLimits

0xa226,	// (0x00017dc4) list_cale_time_pane_g1

0xa232,	// (0x00017dd0) list_cale_time_pane_g2_ParamLimits

0xa232,	// (0x00017dd0) list_cale_time_pane_g2

0x27c2,	// (0x00010360) list_cale_time_pane_g3_ParamLimits

0x27c2,	// (0x00010360) list_cale_time_pane_g3

0x27d0,	// (0x0001036e) list_cale_time_pane_g4_ParamLimits

0x27d0,	// (0x0001036e) list_cale_time_pane_g4

0x27de,	// (0x0001037c) list_cale_time_pane_g5_ParamLimits

0x27de,	// (0x0001037c) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0001ceaa) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0001ceaa) list_cale_time_pane_g

0xa24c,	// (0x00017dea) list_cale_time_pane_t1_ParamLimits

0xa24c,	// (0x00017dea) list_cale_time_pane_t1

0xa274,	// (0x00017e12) list_cale_time_pane_t2_ParamLimits

0xa274,	// (0x00017e12) list_cale_time_pane_t2

0x2ada,	// (0x00010678) aid_blid_cardinal_pane

0x2b18,	// (0x000106b6) compass_pane_t4

0xa29c,	// (0x00017e3a) list_cale_time_pane_t4_ParamLimits

0xa29c,	// (0x00017e3a) list_cale_time_pane_t4

0x2b26,	// (0x000106c4) compass_pane_t5

0x2b34,	// (0x000106d2) compass_pane_t6

0x2b42,	// (0x000106e0) compass_pane_t7

0xa7bb,	// (0x00018359) navi_pane_cc_t1

0xa922,	// (0x000184c0) aid_phob_thumbnail_center_pane

0x321f,	// (0x00010dbd) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0001ceb7) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0001ceb7) list_cale_time_pane_t

0x93db,	// (0x00016f79) bg_popup_window_pane_cp02_ParamLimits

0x93db,	// (0x00016f79) bg_popup_window_pane_cp02

0xa2c4,	// (0x00017e62) heading_pane_cp01_ParamLimits

0xa2c4,	// (0x00017e62) heading_pane_cp01

0xa2d0,	// (0x00017e6e) loc_req_pane_ParamLimits

0xa2d0,	// (0x00017e6e) loc_req_pane

0xa2e0,	// (0x00017e7e) loc_type_pane_ParamLimits

0xa2e0,	// (0x00017e7e) loc_type_pane

0xa2f2,	// (0x00017e90) loc_type_pane_t1_ParamLimits

0xa2f2,	// (0x00017e90) loc_type_pane_t1

0xa304,	// (0x00017ea2) loc_type_pane_t2_ParamLimits

0xa304,	// (0x00017ea2) loc_type_pane_t2

0xa316,	// (0x00017eb4) loc_type_pane_t3_ParamLimits

0xa316,	// (0x00017eb4) loc_type_pane_t3

0x0002,

0xf320,	// (0x0001cebe) loc_type_pane_t_ParamLimits

0xf320,	// (0x0001cebe) loc_type_pane_t

0xa328,	// (0x00017ec6) list_loc_req_pane

0xa332,	// (0x00017ed0) scroll_pane_cp012

0x27ec,	// (0x0001038a) list_single_loc_request_popup_menu_pane_ParamLimits

0x27ec,	// (0x0001038a) list_single_loc_request_popup_menu_pane

0xa33d,	// (0x00017edb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa33d,	// (0x00017edb) list_single_loc_request_popup_menu_pane_g1

0xa349,	// (0x00017ee7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa349,	// (0x00017ee7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0001cec5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0001cec5) list_single_loc_request_popup_menu_pane_g

0xa355,	// (0x00017ef3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa355,	// (0x00017ef3) list_single_loc_request_popup_menu_pane_t1

0x99df,	// (0x0001757d) bg_popup_window_pane_cp03_ParamLimits

0x99df,	// (0x0001757d) bg_popup_window_pane_cp03

0xa36b,	// (0x00017f09) heading_loc_req_pane_ParamLimits

0xa36b,	// (0x00017f09) heading_loc_req_pane

0x27f9,	// (0x00010397) popup_dyc_status_message_window_g1_ParamLimits

0x27f9,	// (0x00010397) popup_dyc_status_message_window_g1

0x280d,	// (0x000103ab) popup_dyc_status_message_window_t1_ParamLimits

0x280d,	// (0x000103ab) popup_dyc_status_message_window_t1

0x2822,	// (0x000103c0) popup_dyc_status_message_window_t2_ParamLimits

0x2822,	// (0x000103c0) popup_dyc_status_message_window_t2

0x2837,	// (0x000103d5) popup_dyc_status_message_window_t3_ParamLimits

0x2837,	// (0x000103d5) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0001ceca) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0001ceca) popup_dyc_status_message_window_t

0x9784,	// (0x00017322) bg_heading_pane_cp01

0xa377,	// (0x00017f15) heading_loc_req_pane_g1

0xa37f,	// (0x00017f1d) heading_loc_req_pane_g2

0xa387,	// (0x00017f25) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0001ced1) heading_loc_req_pane_g

0xa38f,	// (0x00017f2d) heading_loc_req_pane_t1

0xa413,	// (0x00017fb1) bg_popup_sub_pane_cp01_ParamLimits

0xa413,	// (0x00017fb1) bg_popup_sub_pane_cp01

0xa421,	// (0x00017fbf) popup_cale_events_window_g1_ParamLimits

0xa421,	// (0x00017fbf) popup_cale_events_window_g1

0xa441,	// (0x00017fdf) popup_cale_events_window_g2_ParamLimits

0xa441,	// (0x00017fdf) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0001cf05) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0001cf05) popup_cale_events_window_g

0xa461,	// (0x00017fff) popup_cale_events_window_t1_ParamLimits

0xa461,	// (0x00017fff) popup_cale_events_window_t1

0xa473,	// (0x00018011) popup_cale_events_window_t2_ParamLimits

0xa473,	// (0x00018011) popup_cale_events_window_t2

0xa4b1,	// (0x0001804f) popup_cale_events_window_t3_ParamLimits

0xa4b1,	// (0x0001804f) popup_cale_events_window_t3

0xa4eb,	// (0x00018089) popup_cale_events_window_t4_ParamLimits

0xa4eb,	// (0x00018089) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0001cf0a) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0001cf0a) popup_cale_events_window_t

0x28c5,	// (0x00010463) call_type_pane

0x28d5,	// (0x00010473) popup_call_status_window_g1

0x28e9,	// (0x00010487) popup_call_status_window_g2

0x28fd,	// (0x0001049b) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0001cf13) popup_call_status_window_g

0xa521,	// (0x000180bf) call_type_pane_g1

0xa52a,	// (0x000180c8) call_type_pane_g2

0x0001,

0xf37c,	// (0x0001cf1a) call_type_pane_g

0x9784,	// (0x00017322) bg_popup_sub_pane_cp02

0xa533,	// (0x000180d1) listscroll_popup_wml_pane

0xa53b,	// (0x000180d9) list_wml_pane

0xa545,	// (0x000180e3) scroll_pane_cp013

0xa550,	// (0x000180ee) list_single_graphic_popup_wml_pane_ParamLimits

0xa550,	// (0x000180ee) list_single_graphic_popup_wml_pane

0x9b4d,	// (0x000176eb) list_single_graphic_popup_wml_pane_g1

0xa564,	// (0x00018102) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0001cf1f) list_single_graphic_popup_wml_pane_g

0xa56c,	// (0x0001810a) list_single_graphic_popup_wml_pane_t1

0xa582,	// (0x00018120) aid_call_pane

0x99d7,	// (0x00017575) popup_clock_analogue_window_g1

0x99d7,	// (0x00017575) popup_clock_analogue_window_g2

0xa58a,	// (0x00018128) popup_clock_analogue_window_g3

0xa58a,	// (0x00018128) popup_clock_analogue_window_g4

0x9b4d,	// (0x000176eb) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0001cf24) popup_clock_analogue_window_g

0xa592,	// (0x00018130) popup_clock_analogue_window_t1

0xa5a0,	// (0x0001813e) clock_digital_number_pane_ParamLimits

0xa5a0,	// (0x0001813e) clock_digital_number_pane

0xa5ac,	// (0x0001814a) clock_digital_number_pane_cp02_ParamLimits

0xa5ac,	// (0x0001814a) clock_digital_number_pane_cp02

0xa5b8,	// (0x00018156) clock_digital_number_pane_cp03_ParamLimits

0xa5b8,	// (0x00018156) clock_digital_number_pane_cp03

0xa5c4,	// (0x00018162) clock_digital_number_pane_cp04_ParamLimits

0xa5c4,	// (0x00018162) clock_digital_number_pane_cp04

0xa5d4,	// (0x00018172) clock_digital_separator_pane_ParamLimits

0xa5d4,	// (0x00018172) clock_digital_separator_pane

0xa5e0,	// (0x0001817e) popup_clock_digital_window_t1

0x9b4d,	// (0x000176eb) clock_digital_number_pane_g1

0x9b4d,	// (0x000176eb) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0001ce92) clock_digital_number_pane_g

0x9b4d,	// (0x000176eb) clock_digital_separator_pane_g1

0x9b4d,	// (0x000176eb) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0001ce92) clock_digital_separator_pane_g

0x9784,	// (0x00017322) bg_popup_window_pane_cp04

0xa5fd,	// (0x0001819b) heading_pane_cp03

0xa605,	// (0x000181a3) listscroll_popup_gms_pane

0xa60d,	// (0x000181ab) grid_large_graphic_popup_pane

0xa617,	// (0x000181b5) listscroll_popup_gms_pane_g1

0xa61f,	// (0x000181bd) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0001cf2f) listscroll_popup_gms_pane_g

0x9f90,	// (0x00017b2e) scroll_pane_cp014

0x290c,	// (0x000104aa) cell_large_graphic_popup_pane_ParamLimits

0x290c,	// (0x000104aa) cell_large_graphic_popup_pane

0x2924,	// (0x000104c2) cell_large_graphic_popup_pane_g1_ParamLimits

0x2924,	// (0x000104c2) cell_large_graphic_popup_pane_g1

0xa627,	// (0x000181c5) cell_large_graphic_popup_pane_g2_ParamLimits

0xa627,	// (0x000181c5) cell_large_graphic_popup_pane_g2

0xa633,	// (0x000181d1) cell_large_graphic_popup_pane_g3_ParamLimits

0xa633,	// (0x000181d1) cell_large_graphic_popup_pane_g3

0xa640,	// (0x000181de) cell_large_graphic_popup_pane_g4_ParamLimits

0xa640,	// (0x000181de) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0001cf34) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0001cf34) cell_large_graphic_popup_pane_g

0xa650,	// (0x000181ee) grid_highlight_pane_cp010

0x9b4d,	// (0x000176eb) bg_popup_call_pane_g1

0xa65a,	// (0x000181f8) list_single_graphic_popup_conf_pane_ParamLimits

0xa65a,	// (0x000181f8) list_single_graphic_popup_conf_pane

0xa66d,	// (0x0001820b) list_highlight_pane_cp01

0xa676,	// (0x00018214) list_single_graphic_popup_conf_pane_g1

0xa67e,	// (0x0001821c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0001cf3d) list_single_graphic_popup_conf_pane_g

0xa686,	// (0x00018224) list_single_graphic_popup_conf_pane_t1

0xa694,	// (0x00018232) linegrid_cams_pane_g1

0x2930,	// (0x000104ce) linegrid_cams_pane_g2

0x9cc1,	// (0x0001785f) linegrid_cams_pane_g3

0xa69d,	// (0x0001823b) linegrid_cams_pane_g4

0x2939,	// (0x000104d7) linegrid_cams_pane_g5

0x2942,	// (0x000104e0) linegrid_cams_pane_g6

0x9cca,	// (0x00017868) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0001cf42) linegrid_cams_pane_g

0xa6a6,	// (0x00018244) popup_clock_analogue_window

0xa6a6,	// (0x00018244) popup_clock_digital_window

0x9784,	// (0x00017322) popup_phob_thumbnail_window

0x9b4d,	// (0x000176eb) call_video_uplink_pane_g1

0xa6af,	// (0x0001824d) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0001cf51) call_video_uplink_pane_g

0xa6b7,	// (0x00018255) video_uplink_pane

0xa6bf,	// (0x0001825d) mce_image_pane_g1

0x294d,	// (0x000104eb) mce_image_pane_g2

0x2957,	// (0x000104f5) mce_image_pane_g3

0x295f,	// (0x000104fd) mce_image_pane_g4

0x2967,	// (0x00010505) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0001cf56) mce_image_pane_g

0xa6c9,	// (0x00018267) control_top_pane_stacon_cp01_ParamLimits

0xa6c9,	// (0x00018267) control_top_pane_stacon_cp01

0xa6dd,	// (0x0001827b) uni_indicator_pane_stacon_cp01_ParamLimits

0xa6dd,	// (0x0001827b) uni_indicator_pane_stacon_cp01

0xa6ee,	// (0x0001828c) bg_popup_sub_pane_cp03

0x296f,	// (0x0001050d) chi_dic_find_pane

0x2977,	// (0x00010515) listscroll_chi_dic_pane

0x2980,	// (0x0001051e) main_pane_chidic_g1

0xa6f8,	// (0x00018296) chi_dic_find_pane_t1

0xa706,	// (0x000182a4) find_chidic_pane

0xa70f,	// (0x000182ad) chi_dic_list_pane_ParamLimits

0xa70f,	// (0x000182ad) chi_dic_list_pane

0xa720,	// (0x000182be) scroll_pane_cp020

0xa728,	// (0x000182c6) find_chidic_pane_t1

0x9784,	// (0x00017322) input_focus_pane_cp06

0x2993,	// (0x00010531) list_chi_dic_pane_ParamLimits

0x2993,	// (0x00010531) list_chi_dic_pane

0x29a5,	// (0x00010543) list_chi_dic_pane_t1_ParamLimits

0x29a5,	// (0x00010543) list_chi_dic_pane_t1

0x9784,	// (0x00017322) list_highlight_pane_cp020

0xa737,	// (0x000182d5) bg_cale_heading_pane_g1

0x29b8,	// (0x00010556) bg_cale_heading_pane_g2

0x29c0,	// (0x0001055e) bg_cale_heading_pane_g3

0x29c8,	// (0x00010566) bg_cale_heading_pane_g4

0x29d2,	// (0x00010570) bg_cale_heading_pane_g5

0x29dc,	// (0x0001057a) bg_cale_heading_pane_g6

0x29e4,	// (0x00010582) bg_cale_heading_pane_g7

0x29ec,	// (0x0001058a) bg_cale_heading_pane_g8

0x29f6,	// (0x00010594) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0001cf61) bg_cale_heading_pane_g

0xa737,	// (0x000182d5) bg_cale_side_pane_g1

0x2a00,	// (0x0001059e) bg_cale_side_pane_g2

0x2a08,	// (0x000105a6) bg_cale_side_pane_g3

0x2a10,	// (0x000105ae) bg_cale_side_pane_g4

0x2a18,	// (0x000105b6) bg_cale_side_pane_g5

0x2a20,	// (0x000105be) bg_cale_side_pane_g6

0x2a28,	// (0x000105c6) bg_cale_side_pane_g7

0x2a30,	// (0x000105ce) bg_cale_side_pane_g8

0x2a38,	// (0x000105d6) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0001cf74) bg_cale_side_pane_g

0x2a40,	// (0x000105de) popup_call_status_window_ParamLimits

0x2a40,	// (0x000105de) popup_call_status_window

0xa73f,	// (0x000182dd) stacon_top_pane

0xa747,	// (0x000182e5) status_pane_ParamLimits

0xa747,	// (0x000182e5) status_pane

0xa75c,	// (0x000182fa) status_small_pane

0xa764,	// (0x00018302) control_pane

0x9784,	// (0x00017322) stacon_bottom_pane

0xa76c,	// (0x0001830a) list_single_mce_smart_pane_t1_ParamLimits

0xa76c,	// (0x0001830a) list_single_mce_smart_pane_t1

0xa77f,	// (0x0001831d) list_single_mce_smart_pane_t2_ParamLimits

0xa77f,	// (0x0001831d) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0001cf87) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0001cf87) list_single_mce_smart_pane_t

0x2a89,	// (0x00010627) compass_pane

0x2a92,	// (0x00010630) main_location2_pane_t1

0x2aa4,	// (0x00010642) main_location2_pane_t2

0x2ab6,	// (0x00010654) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0001cf8c) main_location2_pane_t

0xa79e,	// (0x0001833c) compass_pane_g1_ParamLimits

0xa79e,	// (0x0001833c) compass_pane_g1

0x2afa,	// (0x00010698) compass_pane_t1

0x2b09,	// (0x000106a7) compass_pane_t2

0x0005,

0xf3f7,	// (0x0001cf95) compass_pane_t

0x2b50,	// (0x000106ee) text_secondary_cp61

0xa7b2,	// (0x00018350) navi_pane_cams_g5

0xa7d5,	// (0x00018373) navi_pane_im_t1

0xa7e3,	// (0x00018381) navi_pane_mp_g1_ParamLimits

0xa7e3,	// (0x00018381) navi_pane_mp_g1

0xa7f7,	// (0x00018395) navi_pane_mp_g2_ParamLimits

0xa7f7,	// (0x00018395) navi_pane_mp_g2

0xa803,	// (0x000183a1) navi_pane_mp_g3_ParamLimits

0xa803,	// (0x000183a1) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0001cfa9) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0001cfa9) navi_pane_mp_g

0xa80f,	// (0x000183ad) navi_pane_mp_t1

0xa81d,	// (0x000183bb) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0001cfb0) navi_pane_mp_t

0xa859,	// (0x000183f7) navi_pane_vt_g1

0xa80f,	// (0x000183ad) navi_pane_vt_t1

0xa861,	// (0x000183ff) navi_slider_pane

0xa869,	// (0x00018407) zooming_pane

0xa871,	// (0x0001840f) navi_slider_pane_g1

0xa87a,	// (0x00018418) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0001cfb7) navi_slider_pane_g

0xa8a7,	// (0x00018445) aid_levels_zoom

0xa8af,	// (0x0001844d) zooming_pane_g1

0xa8b7,	// (0x00018455) zooming_pane_g2

0xa8b7,	// (0x00018455) zooming_pane_g3

0x0002,

0xf428,	// (0x0001cfc6) zooming_pane_g

0xa8bf,	// (0x0001845d) level_10_zoom

0xa8c8,	// (0x00018466) level_11_zoom

0xa8d1,	// (0x0001846f) level_1_zoom

0xa8da,	// (0x00018478) level_2_zoom

0xa8e3,	// (0x00018481) level_3_zoom

0xa8ec,	// (0x0001848a) level_4_zoom

0xa8f5,	// (0x00018493) level_5_zoom

0xa8fe,	// (0x0001849c) level_6_zoom

0xa907,	// (0x000184a5) level_7_zoom

0xa910,	// (0x000184ae) level_8_zoom

0xa919,	// (0x000184b7) level_9_zoom

0xa92a,	// (0x000184c8) popup_phob_thumbnail_window_g1

0xa932,	// (0x000184d0) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0001cfcd) popup_phob_thumbnail_window_g

0xbccd,	// (0x0001986b) level_1_location

0xbcd5,	// (0x00019873) level_2_location

0xbcdd,	// (0x0001987b) level_3_location

0xbce5,	// (0x00019883) level_4_location

0xa869,	// (0x00018407) level_5_location

0x2c8b,	// (0x00010829) mce_icon_pane_g1

0x2c93,	// (0x00010831) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0001cfd2) mce_icon_pane_g

0x2c9b,	// (0x00010839) main_mup_pane_g1_ParamLimits

0x2c9b,	// (0x00010839) main_mup_pane_g1

0x2cb1,	// (0x0001084f) main_mup_pane_g2_ParamLimits

0x2cb1,	// (0x0001084f) main_mup_pane_g2

0x2cc9,	// (0x00010867) main_mup_pane_g3_ParamLimits

0x2cc9,	// (0x00010867) main_mup_pane_g3

0x2ce1,	// (0x0001087f) main_mup_pane_g4_ParamLimits

0x2ce1,	// (0x0001087f) main_mup_pane_g4

0x2cf9,	// (0x00010897) main_mup_pane_g5_ParamLimits

0x2cf9,	// (0x00010897) main_mup_pane_g5

0x2d15,	// (0x000108b3) main_mup_pane_g6_ParamLimits

0x2d15,	// (0x000108b3) main_mup_pane_g6

0x2d2d,	// (0x000108cb) main_mup_pane_g7_ParamLimits

0x2d2d,	// (0x000108cb) main_mup_pane_g7

0x2d45,	// (0x000108e3) main_mup_pane_g8_ParamLimits

0x2d45,	// (0x000108e3) main_mup_pane_g8

0x2d5f,	// (0x000108fd) main_mup_pane_g9_ParamLimits

0x2d5f,	// (0x000108fd) main_mup_pane_g9

0x2d79,	// (0x00010917) main_mup_pane_g10_ParamLimits

0x2d79,	// (0x00010917) main_mup_pane_g10

0x2d93,	// (0x00010931) main_mup_pane_g11_ParamLimits

0x2d93,	// (0x00010931) main_mup_pane_g11

0x2da7,	// (0x00010945) main_mup_pane_g12_ParamLimits

0x2da7,	// (0x00010945) main_mup_pane_g12

0x2dbd,	// (0x0001095b) main_mup_pane_g13_ParamLimits

0x2dbd,	// (0x0001095b) main_mup_pane_g13

0x000c,

0xf439,	// (0x0001cfd7) main_mup_pane_g_ParamLimits

0xf439,	// (0x0001cfd7) main_mup_pane_g

0x2dd1,	// (0x0001096f) main_mup_pane_t1_ParamLimits

0x2dd1,	// (0x0001096f) main_mup_pane_t1

0x2deb,	// (0x00010989) main_mup_pane_t2_ParamLimits

0x2deb,	// (0x00010989) main_mup_pane_t2

0x2e03,	// (0x000109a1) main_mup_pane_t3_ParamLimits

0x2e03,	// (0x000109a1) main_mup_pane_t3

0x2e1b,	// (0x000109b9) main_mup_pane_t4_ParamLimits

0x2e1b,	// (0x000109b9) main_mup_pane_t4

0x2e39,	// (0x000109d7) main_mup_pane_t5_ParamLimits

0x2e39,	// (0x000109d7) main_mup_pane_t5

0x2e4e,	// (0x000109ec) main_mup_pane_t6_ParamLimits

0x2e4e,	// (0x000109ec) main_mup_pane_t6

0x0005,

0xf454,	// (0x0001cff2) main_mup_pane_t_ParamLimits

0xf454,	// (0x0001cff2) main_mup_pane_t

0x2e60,	// (0x000109fe) mup_progress_pane_ParamLimits

0x2e60,	// (0x000109fe) mup_progress_pane

0x2e6c,	// (0x00010a0a) mup_visualizer_pane_ParamLimits

0x2e6c,	// (0x00010a0a) mup_visualizer_pane

0x2e9c,	// (0x00010a3a) mup_volume_pane_ParamLimits

0x2e9c,	// (0x00010a3a) mup_volume_pane

0xa93a,	// (0x000184d8) mup_visualizer_pane_g1_ParamLimits

0xa93a,	// (0x000184d8) mup_visualizer_pane_g1

0xa93a,	// (0x000184d8) mup_visualizer_pane_g2_ParamLimits

0xa93a,	// (0x000184d8) mup_visualizer_pane_g2

0xa79e,	// (0x0001833c) mup_visualizer_pane_g3_ParamLimits

0xa79e,	// (0x0001833c) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0001cfff) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0001cfff) mup_visualizer_pane_g

0x9b4d,	// (0x000176eb) mup_volume_pane_g1

0xa950,	// (0x000184ee) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0001d006) mup_volume_pane_g

0x9b4d,	// (0x000176eb) mup_progress_pane_g1

0xa959,	// (0x000184f7) mup_progress_pane_g2

0xa962,	// (0x00018500) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0001d00b) mup_progress_pane_g

0x9784,	// (0x00017322) bg_popup_window_pane_cp05

0xa96b,	// (0x00018509) heading_pane_cp02_ParamLimits

0xa96b,	// (0x00018509) heading_pane_cp02

0xa985,	// (0x00018523) list_popup_blid_pane

0xa98d,	// (0x0001852b) list_blid_sat_info_pane_ParamLimits

0xa98d,	// (0x0001852b) list_blid_sat_info_pane

0xa9a0,	// (0x0001853e) list_blid_sat_info_pane_g1

0xa9a8,	// (0x00018546) list_blid_sat_info_pane_t1

0x2fb2,	// (0x00010b50) mup_equalizer_pane_ParamLimits

0x2fb2,	// (0x00010b50) mup_equalizer_pane

0x2fcb,	// (0x00010b69) mup_equalizer_pane_cp1_ParamLimits

0x2fcb,	// (0x00010b69) mup_equalizer_pane_cp1

0x2fe8,	// (0x00010b86) mup_equalizer_pane_cp2_ParamLimits

0x2fe8,	// (0x00010b86) mup_equalizer_pane_cp2

0x3005,	// (0x00010ba3) mup_equalizer_pane_cp3_ParamLimits

0x3005,	// (0x00010ba3) mup_equalizer_pane_cp3

0x3026,	// (0x00010bc4) mup_equalizer_pane_cp4_ParamLimits

0x3026,	// (0x00010bc4) mup_equalizer_pane_cp4

0x3047,	// (0x00010be5) mup_equalizer_pane_cp5

0x305b,	// (0x00010bf9) mup_equalizer_pane_cp6

0x306f,	// (0x00010c0d) mup_equalizer_pane_cp7

0xbbeb,	// (0x00019789) bg_popup_call_poc_act_pane_g9

0xbbf3,	// (0x00019791) bg_popup_call_poc_act_pane_g10

0xbbfb,	// (0x00019799) bg_popup_call_poc_act_pane_g11

0x000a,

0x99df,	// (0x0001757d) mup_scale_pane

0x9b4d,	// (0x000176eb) mup_scale_pane_g1

0xa9b6,	// (0x00018554) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0001d027) mup_scale_pane_g

0xa9da,	// (0x00018578) msg_data_pane

0xa9e2,	// (0x00018580) scroll_pane_cp017

0x3095,	// (0x00010c33) bg_list_pane_cp04_ParamLimits

0x3095,	// (0x00010c33) bg_list_pane_cp04

0xa9f2,	// (0x00018590) msg_data_pane_g1

0x30ad,	// (0x00010c4b) msg_data_pane_g2

0x30b7,	// (0x00010c55) msg_data_pane_g3

0x30bf,	// (0x00010c5d) msg_data_pane_g4

0x30c7,	// (0x00010c65) msg_data_pane_g5

0x30cf,	// (0x00010c6d) msg_data_pane_g6

0x30d7,	// (0x00010c75) msg_data_pane_g7

0x0006,

0xf498,	// (0x0001d036) msg_data_pane_g

0x30df,	// (0x00010c7d) msg_text_pane_ParamLimits

0x30df,	// (0x00010c7d) msg_text_pane

0x3103,	// (0x00010ca1) qrid_highlight_pane_cp011_ParamLimits

0x3103,	// (0x00010ca1) qrid_highlight_pane_cp011

0x9784,	// (0x00017322) msg_body_pane

0x9784,	// (0x00017322) msg_header_pane

0xaa03,	// (0x000185a1) input_focus_pane_cp07

0x3127,	// (0x00010cc5) msg_header_pane_t1_ParamLimits

0x3127,	// (0x00010cc5) msg_header_pane_t1

0xaa18,	// (0x000185b6) msg_header_pane_t2_ParamLimits

0xaa18,	// (0x000185b6) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0001d04a) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0001d04a) msg_header_pane_t

0xaa2a,	// (0x000185c8) msg_body_pane_g1

0xaa32,	// (0x000185d0) msg_body_pane_t1_ParamLimits

0xaa32,	// (0x000185d0) msg_body_pane_t1

0xaa63,	// (0x00018601) msg_body_pane_t2_ParamLimits

0xaa63,	// (0x00018601) msg_body_pane_t2

0xaa75,	// (0x00018613) msg_body_pane_t3_ParamLimits

0xaa75,	// (0x00018613) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0001d04f) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0001d04f) msg_body_pane_t

0x3175,	// (0x00010d13) main_viewer_pane_g1_ParamLimits

0x3175,	// (0x00010d13) main_viewer_pane_g1

0x3183,	// (0x00010d21) main_viewer_pane_g2_ParamLimits

0x3183,	// (0x00010d21) main_viewer_pane_g2

0x3191,	// (0x00010d2f) main_viewer_pane_g3_ParamLimits

0x3191,	// (0x00010d2f) main_viewer_pane_g3

0x31a0,	// (0x00010d3e) main_viewer_pane_g4_ParamLimits

0x31a0,	// (0x00010d3e) main_viewer_pane_g4

0xaa9f,	// (0x0001863d) main_viewer_pane_g5_ParamLimits

0xaa9f,	// (0x0001863d) main_viewer_pane_g5

0xaa9f,	// (0x0001863d) main_viewer_pane_g7_ParamLimits

0xaa9f,	// (0x0001863d) main_viewer_pane_g7

0xaab1,	// (0x0001864f) main_viewer_pane_g8_ParamLimits

0xaab1,	// (0x0001864f) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0001d05f) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0001d05f) main_viewer_pane_g

0xaac9,	// (0x00018667) viewer_content_pane_ParamLimits

0xaac9,	// (0x00018667) viewer_content_pane

0x31dc,	// (0x00010d7a) main_postcard_pane_g1_ParamLimits

0x31dc,	// (0x00010d7a) main_postcard_pane_g1

0x31f2,	// (0x00010d90) main_postcard_pane_g2_ParamLimits

0x31f2,	// (0x00010d90) main_postcard_pane_g2

0x3208,	// (0x00010da6) main_postcard_pane_g3_ParamLimits

0x3208,	// (0x00010da6) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0001d070) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0001d070) main_postcard_pane_g

0x321f,	// (0x00010dbd) main_postcard_pane_g4

0xbe00,	// (0x0001999e) smil_status_volume_pane_g2

0x3262,	// (0x00010e00) postcard_pane_ParamLimits

0x3262,	// (0x00010e00) postcard_pane

0xaad7,	// (0x00018675) postcard_pane_g1_ParamLimits

0xaad7,	// (0x00018675) postcard_pane_g1

0x32a4,	// (0x00010e42) postcard_pane_g2_ParamLimits

0x32a4,	// (0x00010e42) postcard_pane_g2

0x32b0,	// (0x00010e4e) postcard_pane_g3_ParamLimits

0x32b0,	// (0x00010e4e) postcard_pane_g3

0xaae5,	// (0x00018683) postcard_pane_g4_ParamLimits

0xaae5,	// (0x00018683) postcard_pane_g4

0x32bc,	// (0x00010e5a) postcard_pane_g5_ParamLimits

0x32bc,	// (0x00010e5a) postcard_pane_g5

0x32d1,	// (0x00010e6f) postcard_pane_g6_ParamLimits

0x32d1,	// (0x00010e6f) postcard_pane_g6

0xaad7,	// (0x00018675) postcard_pane_g7_ParamLimits

0xaad7,	// (0x00018675) postcard_pane_g7

0x0006,

0xf4df,	// (0x0001d07d) postcard_pane_g_ParamLimits

0xf4df,	// (0x0001d07d) postcard_pane_g

0x32e5,	// (0x00010e83) main_mp2_pane_g1_ParamLimits

0x32e5,	// (0x00010e83) main_mp2_pane_g1

0x32f1,	// (0x00010e8f) main_mp2_pane_g2_ParamLimits

0x32f1,	// (0x00010e8f) main_mp2_pane_g2

0x32fd,	// (0x00010e9b) main_mp2_pane_g3_ParamLimits

0x32fd,	// (0x00010e9b) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0001d08c) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0001d08c) main_mp2_pane_g

0x3309,	// (0x00010ea7) main_mp2_pane_t1_ParamLimits

0x3309,	// (0x00010ea7) main_mp2_pane_t1

0x331e,	// (0x00010ebc) main_mp2_pane_t2_ParamLimits

0x331e,	// (0x00010ebc) main_mp2_pane_t2

0x3330,	// (0x00010ece) main_mp2_pane_t3_ParamLimits

0x3330,	// (0x00010ece) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0001d093) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0001d093) main_mp2_pane_t

0xaaf3,	// (0x00018691) pec_content_pane_ParamLimits

0xaaf3,	// (0x00018691) pec_content_pane

0x9f90,	// (0x00017b2e) scroll_pane_cp015

0xab05,	// (0x000186a3) pec_attribute_pane_ParamLimits

0xab05,	// (0x000186a3) pec_attribute_pane

0x3342,	// (0x00010ee0) pec_content_pane_g1_ParamLimits

0x3342,	// (0x00010ee0) pec_content_pane_g1

0xab15,	// (0x000186b3) pec_content_pane_t1_ParamLimits

0xab15,	// (0x000186b3) pec_content_pane_t1

0xab27,	// (0x000186c5) pec_content_pane_t2_ParamLimits

0xab27,	// (0x000186c5) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0001d09a) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0001d09a) pec_content_pane_t

0x334e,	// (0x00010eec) list_single_graphic_pane_cp01_ParamLimits

0x334e,	// (0x00010eec) list_single_graphic_pane_cp01

0x99df,	// (0x0001757d) bg_popup_sub_pane_cp04

0xab39,	// (0x000186d7) popup_mup_playback_window_g1

0xab45,	// (0x000186e3) popup_mup_playback_window_t1

0xab5a,	// (0x000186f8) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0001d09f) popup_mup_playback_window_t

0xab91,	// (0x0001872f) main_image_pane_g1_ParamLimits

0xab91,	// (0x0001872f) main_image_pane_g1

0xabd4,	// (0x00018772) scroll_pane_cp018_ParamLimits

0xabd4,	// (0x00018772) scroll_pane_cp018

0xabec,	// (0x0001878a) scroll_pane_cp016_ParamLimits

0xabec,	// (0x0001878a) scroll_pane_cp016

0x341b,	// (0x00010fb9) smil2_image_pane_ParamLimits

0x341b,	// (0x00010fb9) smil2_image_pane

0x344b,	// (0x00010fe9) smil2_root_pane_ParamLimits

0x344b,	// (0x00010fe9) smil2_root_pane

0x3483,	// (0x00011021) smil2_text_pane_ParamLimits

0x3483,	// (0x00011021) smil2_text_pane

0x9784,	// (0x00017322) bg_list_pane_cp06

0xac28,	// (0x000187c6) grid_radio_pane

0x9784,	// (0x00017322) bg_popup_window_pane_cp06

0xac30,	// (0x000187ce) main_fmradio_pane_t1

0xa5fd,	// (0x0001819b) heading_pane_cp04

0xac3e,	// (0x000187dc) main_fmradio_pane_t2

0xbc03,	// (0x000197a1) popup_cale_lunar_info_window_g1

0xac4c,	// (0x000187ea) main_fmradio_pane_t3

0xbc0b,	// (0x000197a9) popup_cale_lunar_info_window_g2

0xac5a,	// (0x000187f8) main_fmradio_pane_t4

0x0001,

0xac68,	// (0x00018806) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0001d17a) popup_cale_lunar_info_window_g

0xf516,	// (0x0001d0b4) main_fmradio_pane_t

0xac76,	// (0x00018814) wait_bar_pane_cp03

0xac7e,	// (0x0001881c) cell_fmradio_pane_ParamLimits

0xac7e,	// (0x0001881c) cell_fmradio_pane

0xaad7,	// (0x00018675) cell_fmradio_pane_g1_ParamLimits

0xaad7,	// (0x00018675) cell_fmradio_pane_g1

0x9784,	// (0x00017322) grid_highlight_pane_cp011

0xac91,	// (0x0001882f) poc_content_pane_ParamLimits

0xac91,	// (0x0001882f) poc_content_pane

0xaca3,	// (0x00018841) scroll_pane_cp019

0x3503,	// (0x000110a1) popup_call_poc_act_window_ParamLimits

0x3503,	// (0x000110a1) popup_call_poc_act_window

0x3527,	// (0x000110c5) popup_call_poc_inact_window_ParamLimits

0x3527,	// (0x000110c5) popup_call_poc_inact_window

0xf5b3,	// (0x0001d151) bg_popup_call_poc_act_pane_g

0xbb7b,	// (0x00019719) bg_popup_call_poc_inact_pane_g1

0xbb83,	// (0x00019721) bg_popup_call_poc_inact_pane_g2

0xacab,	// (0x00018849) popup_call_poc_act_window_g2

0xbb8b,	// (0x00019729) bg_popup_call_poc_inact_pane_g3

0xbb93,	// (0x00019731) bg_popup_call_poc_inact_pane_g4

0xbb9b,	// (0x00019739) bg_popup_call_poc_inact_pane_g5

0xacb3,	// (0x00018851) popup_call_poc_act_window_t1_ParamLimits

0xacb3,	// (0x00018851) popup_call_poc_act_window_t1

0xacdb,	// (0x00018879) popup_call_poc_act_window_t2_ParamLimits

0xacdb,	// (0x00018879) popup_call_poc_act_window_t2

0xad03,	// (0x000188a1) popup_call_poc_act_window_t3_ParamLimits

0xad03,	// (0x000188a1) popup_call_poc_act_window_t3

0xad2b,	// (0x000188c9) popup_call_poc_act_window_t4_ParamLimits

0xad2b,	// (0x000188c9) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0001d0bf) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0001d0bf) popup_call_poc_act_window_t

0xbba3,	// (0x00019741) bg_popup_call_poc_inact_pane_g6

0xbbab,	// (0x00019749) bg_popup_call_poc_inact_pane_g7

0xbbb3,	// (0x00019751) bg_popup_call_poc_inact_pane_g8

0xad3d,	// (0x000188db) popup_call_poc_inact_window_g2

0xbbbb,	// (0x00019759) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0001d13e) bg_popup_call_poc_inact_pane_g

0xad45,	// (0x000188e3) popup_call_poc_inact_window_t1_ParamLimits

0xad45,	// (0x000188e3) popup_call_poc_inact_window_t1

0xad5a,	// (0x000188f8) popup_call_poc_inact_window_t2_ParamLimits

0xad5a,	// (0x000188f8) popup_call_poc_inact_window_t2

0xad6f,	// (0x0001890d) popup_call_poc_inact_window_t3_ParamLimits

0xad6f,	// (0x0001890d) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0001d0c8) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0001d0c8) popup_call_poc_inact_window_t

0xbd73,	// (0x00019911) context_pane_ParamLimits

0x3d5a,	// (0x000118f8) signal_pane_ParamLimits

0xa869,	// (0x00018407) main_call2_pane

0xbd61,	// (0x000198ff) popup_phob_thumbnail2_window_ParamLimits

0xbd61,	// (0x000198ff) popup_phob_thumbnail2_window

0xaa87,	// (0x00018625) aid_hotspot_pointer_arrow_pane

0xaa8f,	// (0x0001862d) aid_hotspot_pointer_hand_pane

0x3870,	// (0x0001140e) phob_pre_status_pane_g5

0x1750,	// (0x0000f2ee) cams_zoom_pane_ParamLimits

0x175f,	// (0x0000f2fd) image_vga_pane_ParamLimits

0x1779,	// (0x0000f317) main_camera_pane_g1_ParamLimits

0x178b,	// (0x0000f329) main_camera_pane_g2_ParamLimits

0x179b,	// (0x0000f339) main_camera_pane_g3_ParamLimits

0x17ab,	// (0x0000f349) main_camera_pane_g4_ParamLimits

0x17bb,	// (0x0000f359) main_camera_pane_g5_ParamLimits

0x17cb,	// (0x0000f369) main_camera_pane_g6_ParamLimits

0x17dd,	// (0x0000f37b) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0001cdc7) main_camera_pane_g_ParamLimits

0x17ed,	// (0x0000f38b) main_camera_pane_t1_ParamLimits

0x1803,	// (0x0000f3a1) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0001cdd8) main_camera_pane_t_ParamLimits

0x99df,	// (0x0001757d) bg_popup_preview_window_pane_cp01_ParamLimits

0x99df,	// (0x0001757d) bg_popup_preview_window_pane_cp01

0xad84,	// (0x00018922) popup_phob_thumbnail2_window_g1_ParamLimits

0xad84,	// (0x00018922) popup_phob_thumbnail2_window_g1

0x9784,	// (0x00017322) call2_cli_visual_pane

0x355b,	// (0x000110f9) popup_call2_audio_conf_window_ParamLimits

0x355b,	// (0x000110f9) popup_call2_audio_conf_window

0x357b,	// (0x00011119) popup_call2_audio_first_window_ParamLimits

0x357b,	// (0x00011119) popup_call2_audio_first_window

0x3611,	// (0x000111af) popup_call2_audio_in_window_ParamLimits

0x3611,	// (0x000111af) popup_call2_audio_in_window

0x3659,	// (0x000111f7) popup_call2_audio_out_window_ParamLimits

0x3659,	// (0x000111f7) popup_call2_audio_out_window

0x36c3,	// (0x00011261) popup_call2_audio_second_window_ParamLimits

0x36c3,	// (0x00011261) popup_call2_audio_second_window

0x3729,	// (0x000112c7) popup_call2_audio_wait_window_ParamLimits

0x3729,	// (0x000112c7) popup_call2_audio_wait_window

0x9784,	// (0x00017322) bg_popup_call2_act_pane_cp03

0x99c1,	// (0x0001755f) list_conf_pane_cp

0xad90,	// (0x0001892e) popup_call2_audio_conf_window_t1

0xa65a,	// (0x000181f8) list_single_graphic_popup_conf2_pane_ParamLimits

0xa65a,	// (0x000181f8) list_single_graphic_popup_conf2_pane

0xa66d,	// (0x0001820b) list_highlight_pane_cp04

0xad9e,	// (0x0001893c) list_single_graphic_popup_conf2_pane_g1

0xa67e,	// (0x0001821c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0001d0cf) list_single_graphic_popup_conf2_pane_g

0xada8,	// (0x00018946) list_single_graphic_popup_conf2_pane_t1

0xadb6,	// (0x00018954) bg_popup_call2_act_pane_cp01_ParamLimits

0xadb6,	// (0x00018954) bg_popup_call2_act_pane_cp01

0xae40,	// (0x000189de) call_type_pane_cp05_ParamLimits

0xae40,	// (0x000189de) call_type_pane_cp05

0xae94,	// (0x00018a32) popup_call2_audio_second_window_g1_ParamLimits

0xae94,	// (0x00018a32) popup_call2_audio_second_window_g1

0xaee8,	// (0x00018a86) popup_call2_audio_second_window_g2_ParamLimits

0xaee8,	// (0x00018a86) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0001d0d4) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0001d0d4) popup_call2_audio_second_window_g

0xaf4d,	// (0x00018aeb) popup_call2_audio_second_window_t1_ParamLimits

0xaf4d,	// (0x00018aeb) popup_call2_audio_second_window_t1

0xb008,	// (0x00018ba6) popup_call2_audio_second_window_t2_ParamLimits

0xb008,	// (0x00018ba6) popup_call2_audio_second_window_t2

0xb05b,	// (0x00018bf9) popup_call2_audio_second_window_t3_ParamLimits

0xb05b,	// (0x00018bf9) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0001d0db) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0001d0db) popup_call2_audio_second_window_t

0x9784,	// (0x00017322) bg_popup_call2_in_pane_cp02

0x978e,	// (0x0001732c) call_type_pane_cp04

0x9796,	// (0x00017334) popup_call2_audio_wait_window_g1

0x979e,	// (0x0001733c) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0001ccb4) popup_call2_audio_wait_window_g

0x97a6,	// (0x00017344) popup_call2_audio_wait_window_t3

0xb14e,	// (0x00018cec) bg_popup_call2_act_pane_ParamLimits

0xb14e,	// (0x00018cec) bg_popup_call2_act_pane

0xb20e,	// (0x00018dac) call_type_pane_cp03_ParamLimits

0xb20e,	// (0x00018dac) call_type_pane_cp03

0xb272,	// (0x00018e10) popup_call2_audio_first_window_g1_ParamLimits

0xb272,	// (0x00018e10) popup_call2_audio_first_window_g1

0xb2e2,	// (0x00018e80) popup_call2_audio_first_window_g2_ParamLimits

0xb2e2,	// (0x00018e80) popup_call2_audio_first_window_g2

0xa93a,	// (0x000184d8) popup_call2_audio_first_window_g3_ParamLimits

0xa93a,	// (0x000184d8) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0001d0e4) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0001d0e4) popup_call2_audio_first_window_g

0xb3c0,	// (0x00018f5e) popup_call2_audio_first_window_t1_ParamLimits

0xb3c0,	// (0x00018f5e) popup_call2_audio_first_window_t1

0xb4c3,	// (0x00019061) popup_call2_audio_first_window_t4_ParamLimits

0xb4c3,	// (0x00019061) popup_call2_audio_first_window_t4

0xb5a6,	// (0x00019144) popup_call2_audio_first_window_t5_ParamLimits

0xb5a6,	// (0x00019144) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0001d0ef) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0001d0ef) popup_call2_audio_first_window_t

0x99d7,	// (0x00017575) bg_popup_call2_act_pane_g1

0xbc13,	// (0x000197b1) popup_cale_lunar_info_window_t1

0xbc21,	// (0x000197bf) popup_cale_lunar_info_window_t2

0xbc2f,	// (0x000197cd) popup_cale_lunar_info_window_t3

0x9784,	// (0x00017322) bg_popup_call2_bubble_pane

0xb6a7,	// (0x00019245) bg_popup_call2_in_pane_cp01_ParamLimits

0xb6a7,	// (0x00019245) bg_popup_call2_in_pane_cp01

0x9460,	// (0x00016ffe) call_type_pane_cp02

0xb6ef,	// (0x0001928d) popup_call2_audio_out_window_g1_ParamLimits

0xb6ef,	// (0x0001928d) popup_call2_audio_out_window_g1

0xb71b,	// (0x000192b9) popup_call2_audio_out_window_g2_ParamLimits

0xb71b,	// (0x000192b9) popup_call2_audio_out_window_g2

0xb743,	// (0x000192e1) popup_call2_audio_out_window_g3_ParamLimits

0xb743,	// (0x000192e1) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0001d0f8) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0001d0f8) popup_call2_audio_out_window_g

0xb77e,	// (0x0001931c) popup_call2_audio_out_window_t1_ParamLimits

0xb77e,	// (0x0001931c) popup_call2_audio_out_window_t1

0xb7dd,	// (0x0001937b) popup_call2_audio_out_window_t2_ParamLimits

0xb7dd,	// (0x0001937b) popup_call2_audio_out_window_t2

0xb831,	// (0x000193cf) popup_call2_audio_out_window_t3_ParamLimits

0xb831,	// (0x000193cf) popup_call2_audio_out_window_t3

0xb847,	// (0x000193e5) popup_call2_audio_out_window_t4_ParamLimits

0xb847,	// (0x000193e5) popup_call2_audio_out_window_t4

0xb85d,	// (0x000193fb) popup_call2_audio_out_window_t5_ParamLimits

0xb85d,	// (0x000193fb) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0001d101) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0001d101) popup_call2_audio_out_window_t

0xb8c1,	// (0x0001945f) bg_popup_call2_in_pane_ParamLimits

0xb8c1,	// (0x0001945f) bg_popup_call2_in_pane

0xb91d,	// (0x000194bb) popup_call2_audio_in_window_g1_ParamLimits

0xb91d,	// (0x000194bb) popup_call2_audio_in_window_g1

0xb955,	// (0x000194f3) popup_call2_audio_in_window_g2_ParamLimits

0xb955,	// (0x000194f3) popup_call2_audio_in_window_g2

0xb98d,	// (0x0001952b) popup_call2_audio_in_window_g3_ParamLimits

0xb98d,	// (0x0001952b) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0001d10e) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0001d10e) popup_call2_audio_in_window_g

0xb9e5,	// (0x00019583) popup_call2_audio_in_window_t1_ParamLimits

0xb9e5,	// (0x00019583) popup_call2_audio_in_window_t1

0xba65,	// (0x00019603) popup_call2_audio_in_window_t2_ParamLimits

0xba65,	// (0x00019603) popup_call2_audio_in_window_t2

0xbae5,	// (0x00019683) popup_call2_audio_in_window_t3_ParamLimits

0xbae5,	// (0x00019683) popup_call2_audio_in_window_t3

0xbaff,	// (0x0001969d) popup_call2_audio_in_window_t4_ParamLimits

0xbaff,	// (0x0001969d) popup_call2_audio_in_window_t4

0xbb11,	// (0x000196af) popup_call2_audio_in_window_t5_ParamLimits

0xbb11,	// (0x000196af) popup_call2_audio_in_window_t5

0xbb26,	// (0x000196c4) popup_call2_audio_in_window_t6_ParamLimits

0xbb26,	// (0x000196c4) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0001d117) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0001d117) popup_call2_audio_in_window_t

0x99d7,	// (0x00017575) bg_popup_call2_in_pane_g1

0xbc3d,	// (0x000197db) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0001d17f) popup_cale_lunar_info_window_t

0x99df,	// (0x0001757d) bg_popup_call2_rect_pane_ParamLimits

0x99df,	// (0x0001757d) bg_popup_call2_rect_pane

0x9784,	// (0x00017322) call2_cli_visual_graphic_pane

0x9784,	// (0x00017322) call2_cli_visual_text_pane

0xbe13,	// (0x000199b1) smil_status_volume_pane_g3

0x0002,

0x9b4d,	// (0x000176eb) call2_cli_visual_graphic_pane_g1

0x9b4d,	// (0x000176eb) call2_cli_visual_graphic_pane_g2

0x9b4d,	// (0x000176eb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0001d124) call2_cli_visual_graphic_pane_g

0xbb3b,	// (0x000196d9) bg_popup_call2_rect_pane_g1

0x9bd9,	// (0x00017777) bg_popup_call2_rect_pane_g2

0xbb43,	// (0x000196e1) bg_popup_call2_rect_pane_g3

0xbb4b,	// (0x000196e9) bg_popup_call2_rect_pane_g4

0xbb53,	// (0x000196f1) bg_popup_call2_rect_pane_g5

0xbb5b,	// (0x000196f9) bg_popup_call2_rect_pane_g6

0xbb63,	// (0x00019701) bg_popup_call2_rect_pane_g7

0xbb6b,	// (0x00019709) bg_popup_call2_rect_pane_g8

0xbb73,	// (0x00019711) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0001d12b) bg_popup_call2_rect_pane_g

0xbb7b,	// (0x00019719) bg_popup_call2_bubble_pane_g1

0xbb83,	// (0x00019721) bg_popup_call2_bubble_pane_g2

0xbb8b,	// (0x00019729) bg_popup_call2_bubble_pane_g3

0xbb93,	// (0x00019731) bg_popup_call2_bubble_pane_g4

0xbb9b,	// (0x00019739) bg_popup_call2_bubble_pane_g5

0xbba3,	// (0x00019741) bg_popup_call2_bubble_pane_g6

0xbbab,	// (0x00019749) bg_popup_call2_bubble_pane_g7

0xbbb3,	// (0x00019751) bg_popup_call2_bubble_pane_g8

0xbbbb,	// (0x00019759) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0001d13e) bg_popup_call2_bubble_pane_g

0x12fd,	// (0x0000ee9b) aid_cale_week_size_cell_pane

0x1819,	// (0x0000f3b7) aid_cams_cif_uncrop_pane_ParamLimits

0x1819,	// (0x0000f3b7) aid_cams_cif_uncrop_pane

0x19ce,	// (0x0000f56c) aid_cams_size_cell_ParamLimits

0x19ce,	// (0x0000f56c) aid_cams_size_cell

0x19e2,	// (0x0000f580) grid_cams_pane_ParamLimits

0x19fc,	// (0x0000f59a) linegrid_cams_pane_ParamLimits

0x1b35,	// (0x0000f6d3) call_video_pane_t1

0x1b53,	// (0x0000f6f1) call_video_pane_t2

0x0001,

0xf28d,	// (0x0001ce2b) call_video_pane_t

0x1f7f,	// (0x0000fb1d) aid_cale_month_size_cell_pane_ParamLimits

0x1f7f,	// (0x0000fb1d) aid_cale_month_size_cell_pane

0xf62a,	// (0x0001d1c8) smil_status_volume_pane_g

0xbe20,	// (0x000199be) volume_smil_pane_ParamLimits

0x9305,	// (0x00016ea3) aid_popup2_width_pane

0x125f,	// (0x0000edfd) cell_qdial_pane_g4_ParamLimits

0x125f,	// (0x0000edfd) cell_qdial_pane_g4

0x2ada,	// (0x00010678) aid_blid_cardinal_pane_ParamLimits

0x2ae6,	// (0x00010684) aid_blid_destination_pane_ParamLimits

0x2ae6,	// (0x00010684) aid_blid_destination_pane

0x99df,	// (0x0001757d) bg_popup_call_poc_act_pane_ParamLimits

0x99df,	// (0x0001757d) bg_popup_call_poc_act_pane

0x99df,	// (0x0001757d) bg_popup_call_poc_inact_pane_ParamLimits

0x99df,	// (0x0001757d) bg_popup_call_poc_inact_pane

0xbbc3,	// (0x00019761) bg_popup_call_poc_act_pane_g1

0xbbcb,	// (0x00019769) bg_popup_call_poc_act_pane_g2

0xbbd3,	// (0x00019771) bg_popup_call_poc_act_pane_g3

0xbb93,	// (0x00019731) bg_popup_call_poc_act_pane_g4

0xbb9b,	// (0x00019739) bg_popup_call_poc_act_pane_g5

0xbbdb,	// (0x00019779) bg_popup_call_poc_act_pane_g6

0xbbab,	// (0x00019749) bg_popup_call_poc_act_pane_g7

0xbbe3,	// (0x00019781) bg_popup_call_poc_act_pane_g8

0x9784,	// (0x00017322) main_usb_pane

0xbd3c,	// (0x000198da) popup_cale_lunar_info_window

0x1e2b,	// (0x0000f9c9) im_reading_pane_t1_ParamLimits

0x9ee8,	// (0x00017a86) list_im_pane_ParamLimits

0x9ef9,	// (0x00017a97) scroll_pane_cp07_ParamLimits

0x9784,	// (0x00017322) grid_highlight_pane_cp012

0x99df,	// (0x0001757d) mup_scale_pane_ParamLimits

0xaad7,	// (0x00018675) main_usb_pane_g1_ParamLimits

0xaad7,	// (0x00018675) main_usb_pane_g1

0x3785,	// (0x00011323) main_usb_pane_g2_ParamLimits

0x3785,	// (0x00011323) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0001d168) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0001d168) main_usb_pane_g

0x379b,	// (0x00011339) main_usb_pane_t1_ParamLimits

0x379b,	// (0x00011339) main_usb_pane_t1

0x37ad,	// (0x0001134b) main_usb_pane_t2_ParamLimits

0x37ad,	// (0x0001134b) main_usb_pane_t2

0x37bf,	// (0x0001135d) main_usb_pane_t3_ParamLimits

0x37bf,	// (0x0001135d) main_usb_pane_t3

0x37d1,	// (0x0001136f) main_usb_pane_t4_ParamLimits

0x37d1,	// (0x0001136f) main_usb_pane_t4

0x37e3,	// (0x00011381) main_usb_pane_t5_ParamLimits

0x37e3,	// (0x00011381) main_usb_pane_t5

0x37f5,	// (0x00011393) main_usb_pane_t6_ParamLimits

0x37f5,	// (0x00011393) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0001d16d) main_usb_pane_t_ParamLimits

0x2a89,	// (0x00010627) aid_text_placing

0x2a92,	// (0x00010630) main_location2_pane_t1_ParamLimits

0x2aa4,	// (0x00010642) main_location2_pane_t2_ParamLimits

0x2ab6,	// (0x00010654) main_location2_pane_t3_ParamLimits

0x2ac8,	// (0x00010666) main_location2_pane_t4_ParamLimits

0x2ac8,	// (0x00010666) main_location2_pane_t4

0xf3ee,	// (0x0001cf8c) main_location2_pane_t_ParamLimits

0x9a1b,	// (0x000175b9) find_pinb_pane_g2_ParamLimits

0x9a1b,	// (0x000175b9) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0001ccda) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0001ccda) find_pinb_pane_g

0x9a27,	// (0x000175c5) find_pinb_pane_t1_ParamLimits

0x9a39,	// (0x000175d7) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0001ccdf) find_pinb_pane_t_ParamLimits

0x9784,	// (0x00017322) main_call3_pane

0x22e3,	// (0x0000fe81) cale_month_day_heading_pane_t1_ParamLimits

0x2341,	// (0x0000fedf) cale_month_day_heading_pane_t2_ParamLimits

0x23a6,	// (0x0000ff44) cale_month_day_heading_pane_t3_ParamLimits

0x240b,	// (0x0000ffa9) cale_month_day_heading_pane_t4_ParamLimits

0x2470,	// (0x0001000e) cale_month_day_heading_pane_t5_ParamLimits

0x24e5,	// (0x00010083) cale_month_day_heading_pane_t6_ParamLimits

0x255a,	// (0x000100f8) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0001ce63) cale_month_day_heading_pane_t_ParamLimits

0xa16f,	// (0x00017d0d) smil_status_volume_pane

0x3280,	// (0x00010e1e) postcard_address_pane_ParamLimits

0x3280,	// (0x00010e1e) postcard_address_pane

0x3292,	// (0x00010e30) postcard_message_pane_ParamLimits

0x3292,	// (0x00010e30) postcard_message_pane

0x3763,	// (0x00011301) call2_cli_visual_pane_t1_ParamLimits

0x3763,	// (0x00011301) call2_cli_visual_pane_t1

0x3f87,	// (0x00011b25) postcard_message_pane_t1_ParamLimits

0x3f87,	// (0x00011b25) postcard_message_pane_t1

0x3f70,	// (0x00011b0e) postcard_address_pane_t1_ParamLimits

0x3f70,	// (0x00011b0e) postcard_address_pane_t1

0x3f5c,	// (0x00011afa) popup_call3_audio_in_window_ParamLimits

0x3f5c,	// (0x00011afa) popup_call3_audio_in_window

0x3de7,	// (0x00011985) bg_popup_call3_in_pane_ParamLimits

0x3de7,	// (0x00011985) bg_popup_call3_in_pane

0x3e5d,	// (0x000119fb) popup_call3_audio_in_window_g1_ParamLimits

0x3e5d,	// (0x000119fb) popup_call3_audio_in_window_g1

0x3e7d,	// (0x00011a1b) popup_call3_audio_in_window_g2_ParamLimits

0x3e7d,	// (0x00011a1b) popup_call3_audio_in_window_g2

0x3e9d,	// (0x00011a3b) popup_call3_audio_in_window_g3_ParamLimits

0x3e9d,	// (0x00011a3b) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0001d1cf) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0001d1cf) popup_call3_audio_in_window_g

0x3ece,	// (0x00011a6c) popup_call3_audio_in_window_t1_ParamLimits

0x3ece,	// (0x00011a6c) popup_call3_audio_in_window_t1

0x3f0c,	// (0x00011aaa) popup_call3_audio_in_window_t2_ParamLimits

0x3f0c,	// (0x00011aaa) popup_call3_audio_in_window_t2

0x3f4a,	// (0x00011ae8) popup_call3_audio_in_window_t3_ParamLimits

0x3f4a,	// (0x00011ae8) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0001d1d8) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0001d1d8) popup_call3_audio_in_window_t

0xa869,	// (0x00018407) bg_popup_call3_rect_pane

0xbb3b,	// (0x000196d9) bg_popup_call3_rect_pane_g1

0x9bd9,	// (0x00017777) bg_popup_call3_rect_pane_g2

0xbb43,	// (0x000196e1) bg_popup_call3_rect_pane_g3

0xbb4b,	// (0x000196e9) bg_popup_call3_rect_pane_g4

0xbb53,	// (0x000196f1) bg_popup_call3_rect_pane_g5

0xbb5b,	// (0x000196f9) bg_popup_call3_rect_pane_g6

0xbb63,	// (0x00019701) bg_popup_call3_rect_pane_g7

0x2eb2,	// (0x00010a50) mup_visualizer_osc_pane

0xa948,	// (0x000184e6) mup_visualizer_spec_pane

0x3e17,	// (0x000119b5) call3_video_qcif_pane_ParamLimits

0x3e17,	// (0x000119b5) call3_video_qcif_pane

0x3e2a,	// (0x000119c8) call3_video_qcif_uncrop_pane_ParamLimits

0x3e2a,	// (0x000119c8) call3_video_qcif_uncrop_pane

0x3e38,	// (0x000119d6) call3_video_subqcif_pane_ParamLimits

0x3e38,	// (0x000119d6) call3_video_subqcif_pane

0x3e4c,	// (0x000119ea) call3_video_subqcif_uncrop_pane_ParamLimits

0x3e4c,	// (0x000119ea) call3_video_subqcif_uncrop_pane

0x3ebd,	// (0x00011a5b) popup_call3_audio_in_window_g4_ParamLimits

0x3ebd,	// (0x00011a5b) popup_call3_audio_in_window_g4

0x3dd6,	// (0x00011974) mup_spec_half_pane

0x3ddf,	// (0x0001197d) mup_spec_half_pane_cp

0xbdd3,	// (0x00019971) mup_osc_middle_pane

0xbddc,	// (0x0001997a) mup_visualizer_osc_pane_g1

0x3db6,	// (0x00011954) mup_spec_bar_pane_ParamLimits

0x3db6,	// (0x00011954) mup_spec_bar_pane

0xbdc0,	// (0x0001995e) mup_spec_bar_pane_g1

0xbdca,	// (0x00019968) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0001d1c3) mup_spec_bar_pane_g

0x12fd,	// (0x0000ee9b) aid_cale_week_size_cell_pane_ParamLimits

0x1310,	// (0x0000eeae) bg_cale_heading_pane_ParamLimits

0x9c55,	// (0x000177f3) bg_cale_pane_cp01_ParamLimits

0x1324,	// (0x0000eec2) cale_week_corner_pane_ParamLimits

0x133a,	// (0x0000eed8) cale_week_day_heading_pane_ParamLimits

0x134e,	// (0x0000eeec) cale_week_scroll_pane_g1_ParamLimits

0x135f,	// (0x0000eefd) cale_week_scroll_pane_g2_ParamLimits

0x1370,	// (0x0000ef0e) cale_week_scroll_pane_g3_ParamLimits

0x1381,	// (0x0000ef1f) cale_week_scroll_pane_g4_ParamLimits

0x1392,	// (0x0000ef30) cale_week_scroll_pane_g5_ParamLimits

0x13a5,	// (0x0000ef43) cale_week_scroll_pane_g6_ParamLimits

0x13b8,	// (0x0000ef56) cale_week_scroll_pane_g7_ParamLimits

0x13cb,	// (0x0000ef69) cale_week_scroll_pane_g8_ParamLimits

0x13de,	// (0x0000ef7c) cale_week_scroll_pane_g9_ParamLimits

0x13ef,	// (0x0000ef8d) cale_week_scroll_pane_g10_ParamLimits

0x1400,	// (0x0000ef9e) cale_week_scroll_pane_g11_ParamLimits

0x1411,	// (0x0000efaf) cale_week_scroll_pane_g12_ParamLimits

0x1422,	// (0x0000efc0) cale_week_scroll_pane_g13_ParamLimits

0x1433,	// (0x0000efd1) cale_week_scroll_pane_g14_ParamLimits

0x1444,	// (0x0000efe2) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0001cd6b) cale_week_scroll_pane_g_ParamLimits

0x1455,	// (0x0000eff3) cale_week_time_pane_ParamLimits

0x1468,	// (0x0000f006) grid_cale_week_pane_ParamLimits

0x9c6e,	// (0x0001780c) listscroll_cale_week_pane_t1

0x147d,	// (0x0000f01b) scroll_pane_cp08_ParamLimits

0x1fc0,	// (0x0000fb5e) cale_month_corner_pane_ParamLimits

0xa10f,	// (0x00017cad) cale_month_pane_t1

0x22a2,	// (0x0000fe40) cale_month_week_pane_ParamLimits

0x28d5,	// (0x00010473) popup_call_status_window_g1_ParamLimits

0x28e9,	// (0x00010487) popup_call_status_window_g2_ParamLimits

0x28fd,	// (0x0001049b) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0001cf13) popup_call_status_window_g_ParamLimits

0xa57a,	// (0x00018118) aid_call2_pane

0x3119,	// (0x00010cb7) msg_header_pane_g1

0x3280,	// (0x00010e1e) postcard_address2_pane_ParamLimits

0x3280,	// (0x00010e1e) postcard_address2_pane

0x3292,	// (0x00010e30) postcard_message2_pane_ParamLimits

0x3292,	// (0x00010e30) postcard_message2_pane

0x3d68,	// (0x00011906) message2_row_pane_ParamLimits

0x3d68,	// (0x00011906) message2_row_pane

0x3d84,	// (0x00011922) address2_row_pane_ParamLimits

0x3d84,	// (0x00011922) address2_row_pane

0xbd8e,	// (0x0001992c) postcard_message2_row_pane_g1

0xbd96,	// (0x00019934) postcard_message2_row_pane_t1

0xbd8e,	// (0x0001992c) address2_row_pane_g1

0xbd96,	// (0x00019934) address2_row_pane_t1

0x1715,	// (0x0000f2b3) aid_size_cell_vorec

0x9784,	// (0x00017322) main_rss_pane

0x3d97,	// (0x00011935) rss_list_single_pane_ParamLimits

0x3d97,	// (0x00011935) rss_list_single_pane

0xbda4,	// (0x00019942) rss_list_single_pane_t1

0xbdb2,	// (0x00019950) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0001d1be) rss_list_single_pane_t

0x9784,	// (0x00017322) main_camera2_pane

0x9784,	// (0x00017322) main_video2_pane

0x4000,	// (0x00011b9e) cams_zoom_pane_cp2_ParamLimits

0x4000,	// (0x00011b9e) cams_zoom_pane_cp2

0x4020,	// (0x00011bbe) image2_vga_pane_ParamLimits

0x4020,	// (0x00011bbe) image2_vga_pane

0x4071,	// (0x00011c0f) main_camera2_pane_g1_ParamLimits

0x4071,	// (0x00011c0f) main_camera2_pane_g1

0x4091,	// (0x00011c2f) main_camera2_pane_g2_ParamLimits

0x4091,	// (0x00011c2f) main_camera2_pane_g2

0x40b1,	// (0x00011c4f) main_camera2_pane_g3_ParamLimits

0x40b1,	// (0x00011c4f) main_camera2_pane_g3

0x40d1,	// (0x00011c6f) main_camera2_pane_g4_ParamLimits

0x40d1,	// (0x00011c6f) main_camera2_pane_g4

0x40f1,	// (0x00011c8f) main_camera2_pane_g5_ParamLimits

0x40f1,	// (0x00011c8f) main_camera2_pane_g5

0x4111,	// (0x00011caf) main_camera2_pane_g6_ParamLimits

0x4111,	// (0x00011caf) main_camera2_pane_g6

0x4131,	// (0x00011ccf) main_camera2_pane_g7_ParamLimits

0x4131,	// (0x00011ccf) main_camera2_pane_g7

0x4151,	// (0x00011cef) main_camera2_pane_g8_ParamLimits

0x4151,	// (0x00011cef) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0001d1df) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0001d1df) main_camera2_pane_g

0x4191,	// (0x00011d2f) main_camera2_pane_t1_ParamLimits

0x4191,	// (0x00011d2f) main_camera2_pane_t1

0x41c6,	// (0x00011d64) main_camera2_pane_t2_ParamLimits

0x41c6,	// (0x00011d64) main_camera2_pane_t2

0x41ec,	// (0x00011d8a) main_camera2_pane_t3_ParamLimits

0x41ec,	// (0x00011d8a) main_camera2_pane_t3

0x424a,	// (0x00011de8) main_camera2_pane_t4_ParamLimits

0x424a,	// (0x00011de8) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0001d1f2) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0001d1f2) main_camera2_pane_t

0x42dc,	// (0x00011e7a) cams_zoom_pane_cp4_ParamLimits

0x42dc,	// (0x00011e7a) cams_zoom_pane_cp4

0x42f2,	// (0x00011e90) image2_cif_pane_ParamLimits

0x42f2,	// (0x00011e90) image2_cif_pane

0x431d,	// (0x00011ebb) image2_subqcif_pane_ParamLimits

0x431d,	// (0x00011ebb) image2_subqcif_pane

0x4337,	// (0x00011ed5) main_video2_pane_g1_ParamLimits

0x4337,	// (0x00011ed5) main_video2_pane_g1

0x4351,	// (0x00011eef) main_video2_pane_g2_ParamLimits

0x4351,	// (0x00011eef) main_video2_pane_g2

0x4367,	// (0x00011f05) main_video2_pane_g3_ParamLimits

0x4367,	// (0x00011f05) main_video2_pane_g3

0x437d,	// (0x00011f1b) main_video2_pane_g4_ParamLimits

0x437d,	// (0x00011f1b) main_video2_pane_g4

0x4393,	// (0x00011f31) main_video2_pane_g5_ParamLimits

0x4393,	// (0x00011f31) main_video2_pane_g5

0x43a9,	// (0x00011f47) main_video2_pane_g6_ParamLimits

0x43a9,	// (0x00011f47) main_video2_pane_g6

0x0005,

0xf663,	// (0x0001d201) main_video2_pane_g_ParamLimits

0xf663,	// (0x0001d201) main_video2_pane_g

0x43c3,	// (0x00011f61) main_video2_pane_t1_ParamLimits

0x43c3,	// (0x00011f61) main_video2_pane_t1

0x43e7,	// (0x00011f85) main_video2_pane_t2_ParamLimits

0x43e7,	// (0x00011f85) main_video2_pane_t2

0x4435,	// (0x00011fd3) main_video2_pane_t3_ParamLimits

0x4435,	// (0x00011fd3) main_video2_pane_t3

0x0002,

0xf670,	// (0x0001d20e) main_video2_pane_t_ParamLimits

0xf670,	// (0x0001d20e) main_video2_pane_t

0x38b0,	// (0x0001144e) call_muted_g2

0x0001,

0xf612,	// (0x0001d1b0) call_muted_g

0x9784,	// (0x00017322) main_mup2_pane

0x4479,	// (0x00012017) main_mup2_pane_g1_ParamLimits

0x4479,	// (0x00012017) main_mup2_pane_g1

0x4485,	// (0x00012023) main_mup2_pane_g2_ParamLimits

0x4485,	// (0x00012023) main_mup2_pane_g2

0xbf44,	// (0x00019ae2) main_mup_pane_g13_cp1

0xbf4c,	// (0x00019aea) mup_volume_pane_cp1

0x44a1,	// (0x0001203f) main_mup2_pane_g4_ParamLimits

0x44a1,	// (0x0001203f) main_mup2_pane_g4

0x44b3,	// (0x00012051) main_mup2_pane_g5_ParamLimits

0x44b3,	// (0x00012051) main_mup2_pane_g5

0x44c5,	// (0x00012063) main_mup2_pane_g6_ParamLimits

0x44c5,	// (0x00012063) main_mup2_pane_g6

0x44d7,	// (0x00012075) main_mup2_pane_g7_ParamLimits

0x44d7,	// (0x00012075) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0001d215) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0001d215) main_mup2_pane_g

0x44ef,	// (0x0001208d) main_mup2_pane_t1_ParamLimits

0x44ef,	// (0x0001208d) main_mup2_pane_t1

0x4505,	// (0x000120a3) main_mup2_pane_t2_ParamLimits

0x4505,	// (0x000120a3) main_mup2_pane_t2

0x451b,	// (0x000120b9) main_mup2_pane_t3_ParamLimits

0x451b,	// (0x000120b9) main_mup2_pane_t3

0x4531,	// (0x000120cf) main_mup2_pane_t4_ParamLimits

0x4531,	// (0x000120cf) main_mup2_pane_t4

0x4549,	// (0x000120e7) main_mup2_pane_t5_ParamLimits

0x4549,	// (0x000120e7) main_mup2_pane_t5

0x4561,	// (0x000120ff) main_mup2_pane_t6_ParamLimits

0x4561,	// (0x000120ff) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0001d224) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0001d224) main_mup2_pane_t

0x4591,	// (0x0001212f) mup2_visualizer_pane_ParamLimits

0x4591,	// (0x0001212f) mup2_visualizer_pane

0x45bf,	// (0x0001215d) mup_progress_pane_cp_ParamLimits

0x45bf,	// (0x0001215d) mup_progress_pane_cp

0xbf26,	// (0x00019ac4) mup_volume_pane_cp_ParamLimits

0xbf26,	// (0x00019ac4) mup_volume_pane_cp

0x45d3,	// (0x00012171) mup2_visualizer_pane_g1_ParamLimits

0x45d3,	// (0x00012171) mup2_visualizer_pane_g1

0xbe65,	// (0x00019a03) mup2_visualizer_pane_g2_ParamLimits

0xbe65,	// (0x00019a03) mup2_visualizer_pane_g2

0x45ea,	// (0x00012188) mup2_visualizer_pane_g3_ParamLimits

0x45ea,	// (0x00012188) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x0001d231) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x0001d231) mup2_visualizer_pane_g

0xac20,	// (0x000187be) aid_size_cell_fmradio

0x3a62,	// (0x00011600) aid_height_parent_landcape

0x9f77,	// (0x00017b15) wml_content_pane_cp

0x9f7f,	// (0x00017b1d) wml_tabs_pane

0x9f88,	// (0x00017b26) popup_wml_miniature_window

0x9f90,	// (0x00017b2e) scroll_pane_cp021

0x9fa4,	// (0x00017b42) wml_content_pane_comp8

0x9784,	// (0x00017322) bg_popup_sub_pane_cp05

0xbe83,	// (0x00019a21) popup_wml_miniature_window_g1

0xbe8b,	// (0x00019a29) wml_miniature_view_pane

0x45f6,	// (0x00012194) aid_size_wml_view

0x45fe,	// (0x0001219c) wml_miniature_view_pane_g1

0x4607,	// (0x000121a5) wml_miniature_view_pane_g2

0x4610,	// (0x000121ae) wml_miniature_view_pane_g3

0x4618,	// (0x000121b6) wml_miniature_view_pane_g4

0x4620,	// (0x000121be) wml_miniature_view_pane_g5

0x4628,	// (0x000121c6) wml_miniature_view_pane_g6

0x4630,	// (0x000121ce) wml_miniature_view_pane_g7

0x4638,	// (0x000121d6) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0001d238) wml_miniature_view_pane_g

0xbe93,	// (0x00019a31) background_graphic_ParamLimits

0xbe93,	// (0x00019a31) background_graphic

0xbe9f,	// (0x00019a3d) wml_tabs_2_pane

0xbea8,	// (0x00019a46) wml_tabs_3_pane_ParamLimits

0xbea8,	// (0x00019a46) wml_tabs_3_pane

0xbeba,	// (0x00019a58) wml_tabs_4_pane_ParamLimits

0xbeba,	// (0x00019a58) wml_tabs_4_pane

0xbed0,	// (0x00019a6e) wml_tabs_5_pane_ParamLimits

0xbed0,	// (0x00019a6e) wml_tabs_5_pane

0xbeea,	// (0x00019a88) wml_tabs_pane_g2_ParamLimits

0xbeea,	// (0x00019a88) wml_tabs_pane_g2

0xbefe,	// (0x00019a9c) wml_tabs_pane_g3_ParamLimits

0xbefe,	// (0x00019a9c) wml_tabs_pane_g3

0x4640,	// (0x000121de) wml_tabs_2_active_pane_ParamLimits

0x4640,	// (0x000121de) wml_tabs_2_active_pane

0x4654,	// (0x000121f2) wml_tabs_2_passive_pane_ParamLimits

0x4654,	// (0x000121f2) wml_tabs_2_passive_pane

0x4668,	// (0x00012206) wml_tabs_3_active_pane_cp_ParamLimits

0x4668,	// (0x00012206) wml_tabs_3_active_pane_cp

0x467d,	// (0x0001221b) wml_tabs_3_passive_pane_ParamLimits

0x467d,	// (0x0001221b) wml_tabs_3_passive_pane

0x4690,	// (0x0001222e) wml_tabs_3_passive_pane_cp_ParamLimits

0x4690,	// (0x0001222e) wml_tabs_3_passive_pane_cp

0x46a7,	// (0x00012245) tabs_4_active_pane

0x46af,	// (0x0001224d) tabs_4_passive_pane

0x46b9,	// (0x00012257) tabs_4_passive_pane_cp

0x46c1,	// (0x0001225f) tabs_4_passive_pane_cp2

0x377d,	// (0x0001131b) aid_height_text

0x2e88,	// (0x00010a26) mup_volume_cont_pane_ParamLimits

0x2e88,	// (0x00010a26) mup_volume_cont_pane

0x0ee0,	// (0x0000ea7e) aid_size_cell_pinb

0x0eea,	// (0x0000ea88) aid_size_list_pinb

0x45ab,	// (0x00012149) mup2_volume_cont_pane_ParamLimits

0x45ab,	// (0x00012149) mup2_volume_cont_pane

0xbf12,	// (0x00019ab0) mup2_volume_cont_pane_g1_ParamLimits

0xbf12,	// (0x00019ab0) mup2_volume_cont_pane_g1

0x0bc2,	// (0x0000e760) aid_size_cell_touch_ParamLimits

0x0bc2,	// (0x0000e760) aid_size_cell_touch

0x0dd0,	// (0x0000e96e) touch_pane_ParamLimits

0x0dd0,	// (0x0000e96e) touch_pane

0x92f3,	// (0x00016e91) main_rss2_pane

0xbf54,	// (0x00019af2) listscroll_rss2_pane

0xbf5d,	// (0x00019afb) rss2_navigation_pane

0xbf65,	// (0x00019b03) list_rss2_pane

0xa720,	// (0x000182be) scroll_pane_cp22

0xbf6d,	// (0x00019b0b) rss2_navigation_pane_g1

0xbf76,	// (0x00019b14) rss2_navigation_pane_g2

0xbf7e,	// (0x00019b1c) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0001d249) rss2_navigation_pane_g

0xbf86,	// (0x00019b24) rss2_navigation_pane_t1

0x46cb,	// (0x00012269) rss2_list_single_pane_ParamLimits

0x46cb,	// (0x00012269) rss2_list_single_pane

0xbf94,	// (0x00019b32) rss2_list_single_pane_t2

0xbfa2,	// (0x00019b40) rss2_list_single_pane_t3_ParamLimits

0xbfa2,	// (0x00019b40) rss2_list_single_pane_t3

0xbfbf,	// (0x00019b5d) rss2_list_single_pane_t4

0x2754,	// (0x000102f2) smil_status_pane_g1

0x9363,	// (0x00016f01) main_image2_pane_ParamLimits

0x9363,	// (0x00016f01) main_image2_pane

0x4171,	// (0x00011d0f) main_camera2_pane_g9_ParamLimits

0x4171,	// (0x00011d0f) main_camera2_pane_g9

0x429f,	// (0x00011e3d) main_camera2_pane_t5_ParamLimits

0x429f,	// (0x00011e3d) main_camera2_pane_t5

0xbe35,	// (0x000199d3) main_camera2_pane_t6_ParamLimits

0xbe35,	// (0x000199d3) main_camera2_pane_t6

0x46e0,	// (0x0001227e) main_image2_pane_g1_ParamLimits

0x46e0,	// (0x0001227e) main_image2_pane_g1

0x34b9,	// (0x00011057) smil2_video_pane_ParamLimits

0x34b9,	// (0x00011057) smil2_video_pane

0x9311,	// (0x00016eaf) aid_zoom_text_primary_cp

0x9359,	// (0x00016ef7) popup_preview_fixed_window

0x9ee0,	// (0x00017a7e) im_reading_pane_g1

0x3fe8,	// (0x00011b86) cams2_bc_adjust_pane_cp_ParamLimits

0x3fe8,	// (0x00011b86) cams2_bc_adjust_pane_cp

0x42ce,	// (0x00011e6c) cams2_bc_adjust_pane_ParamLimits

0x42ce,	// (0x00011e6c) cams2_bc_adjust_pane

0xbfcd,	// (0x00019b6b) cams2_bc_adjust_pane_g1

0xbfd5,	// (0x00019b73) cams2_slider_pane

0xbfde,	// (0x00019b7c) cams2_slider_pane_g1

0xbfe7,	// (0x00019b85) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0001d250) cams2_slider_pane_g

0x0fd8,	// (0x0000eb76) calc_display_pane_ParamLimits

0x1000,	// (0x0000eb9e) calc_paper_pane_ParamLimits

0x1023,	// (0x0000ebc1) grid_calc_pane_ParamLimits

0xa5e0,	// (0x0001817e) popup_clock_digital_window_t1_ParamLimits

0xabbd,	// (0x0001875b) main_image_pane_t1

0x0fba,	// (0x0000eb58) aid_size_cell_calc_ParamLimits

0x0fba,	// (0x0000eb58) aid_size_cell_calc

0x3aa8,	// (0x00011646) popup_blid_sat_info2_window_ParamLimits

0x3aa8,	// (0x00011646) popup_blid_sat_info2_window

0xc009,	// (0x00019ba7) aid_size_cell_blid

0xc011,	// (0x00019baf) bg_popup_window_pane_cp07

0xc034,	// (0x00019bd2) grid_popup_blid_pane

0xc03e,	// (0x00019bdc) heading_pane_cp05_ParamLimits

0xc03e,	// (0x00019bdc) heading_pane_cp05

0xc108,	// (0x00019ca6) cell_popup_blid_pane_ParamLimits

0xc108,	// (0x00019ca6) cell_popup_blid_pane

0xc12c,	// (0x00019cca) cell_popup_blid_pane_g1

0xc134,	// (0x00019cd2) cell_popup_blid_pane_t1

0x457b,	// (0x00012119) mup2_indicator_pane_ParamLimits

0x457b,	// (0x00012119) mup2_indicator_pane

0xa869,	// (0x00018407) mup2_visualizer_osc_pane

0xbe71,	// (0x00019a0f) mup2_visualizer_spec_pane_ParamLimits

0xbe71,	// (0x00019a0f) mup2_visualizer_spec_pane

0x46f6,	// (0x00012294) mup2_spec_half_pane

0x46ff,	// (0x0001229d) mup2_spec_half_pane_cp

0x4707,	// (0x000122a5) mup2_spec_bar_pane_ParamLimits

0x4707,	// (0x000122a5) mup2_spec_bar_pane

0xbdc0,	// (0x0001995e) mup2_spec_bar_pane_g1

0xbdca,	// (0x00019968) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0001d1c3) mup2_spec_bar_pane_g

0x4727,	// (0x000122c5) mup2_osc_middle_pane

0xbddc,	// (0x0001997a) mup2_visualizer_osc_pane_g1

0x9391,	// (0x00016f2f) popup_number_entry_window_t1_ParamLimits

0x93a4,	// (0x00016f42) popup_number_entry_window_t2_ParamLimits

0x93b6,	// (0x00016f54) popup_number_entry_window_t3_ParamLimits

0x0e22,	// (0x0000e9c0) popup_number_entry_window_t5_ParamLimits

0x0e22,	// (0x0000e9c0) popup_number_entry_window_t5

0xf0e7,	// (0x0001cc85) popup_number_entry_window_t_ParamLimits

0x93c8,	// (0x00016f66) text_title_cp2_ParamLimits

0xaa97,	// (0x00018635) aid_hotspot_pointer_text2_pane

0xaabd,	// (0x0001865b) main_viewer_pane_g9_ParamLimits

0xaabd,	// (0x0001865b) main_viewer_pane_g9

0xa10f,	// (0x00017cad) cale_month_pane_t1_ParamLimits

0xa1a4,	// (0x00017d42) bg_cale_pane_ParamLimits

0xa1bc,	// (0x00017d5a) list_cale_pane_ParamLimits

0x9c6e,	// (0x0001780c) listscroll_cale_day_pane_t1

0xa1cd,	// (0x00017d6b) scroll_pane_cp09_ParamLimits

0x2eba,	// (0x00010a58) main_mup_eq_pane_t1_ParamLimits

0x2eba,	// (0x00010a58) main_mup_eq_pane_t1

0x2ed4,	// (0x00010a72) main_mup_eq_pane_t2_ParamLimits

0x2ed4,	// (0x00010a72) main_mup_eq_pane_t2

0x2eee,	// (0x00010a8c) main_mup_eq_pane_t3_ParamLimits

0x2eee,	// (0x00010a8c) main_mup_eq_pane_t3

0x2f0a,	// (0x00010aa8) main_mup_eq_pane_t4_ParamLimits

0x2f0a,	// (0x00010aa8) main_mup_eq_pane_t4

0x2f26,	// (0x00010ac4) main_mup_eq_pane_t5_ParamLimits

0x2f26,	// (0x00010ac4) main_mup_eq_pane_t5

0x2f42,	// (0x00010ae0) main_mup_eq_pane_t6_ParamLimits

0x2f42,	// (0x00010ae0) main_mup_eq_pane_t6

0x2f56,	// (0x00010af4) main_mup_eq_pane_t7_ParamLimits

0x2f56,	// (0x00010af4) main_mup_eq_pane_t7

0x2f6a,	// (0x00010b08) main_mup_eq_pane_t8_ParamLimits

0x2f6a,	// (0x00010b08) main_mup_eq_pane_t8

0x2f7e,	// (0x00010b1c) main_mup_eq_pane_t9_ParamLimits

0x2f7e,	// (0x00010b1c) main_mup_eq_pane_t9

0x2f98,	// (0x00010b36) main_mup_eq_pane_t10_ParamLimits

0x2f98,	// (0x00010b36) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0001d012) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0001d012) main_mup_eq_pane_t

0x3047,	// (0x00010be5) mup_equalizer_pane_cp5_ParamLimits

0x305b,	// (0x00010bf9) mup_equalizer_pane_cp6_ParamLimits

0x306f,	// (0x00010c0d) mup_equalizer_pane_cp7_ParamLimits

0x92f3,	// (0x00016e91) main_gallery_pane

0xbde5,	// (0x00019983) smil2_volume_pane

0xbded,	// (0x0001998b) smil_status_volume_pane_g1_ParamLimits

0xbe00,	// (0x0001999e) smil_status_volume_pane_g2_ParamLimits

0xbe13,	// (0x000199b1) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0001d1c8) smil_status_volume_pane_g_ParamLimits

0xc011,	// (0x00019baf) bg_popup_window_pane_cp07_ParamLimits

0xc01f,	// (0x00019bbd) blid_firmament_pane

0x4730,	// (0x000122ce) aid_size_cell_gallery_ParamLimits

0x4730,	// (0x000122ce) aid_size_cell_gallery

0x4746,	// (0x000122e4) grid_gallery_pane_ParamLimits

0x4746,	// (0x000122e4) grid_gallery_pane

0x475f,	// (0x000122fd) cell_gallery_pane_ParamLimits

0x475f,	// (0x000122fd) cell_gallery_pane

0xc142,	// (0x00019ce0) bg_cell_gallery_focus_pane_ParamLimits

0xc142,	// (0x00019ce0) bg_cell_gallery_focus_pane

0xc154,	// (0x00019cf2) cell_gallery_pane_g1_ParamLimits

0xc154,	// (0x00019cf2) cell_gallery_pane_g1

0x47a8,	// (0x00012346) cell_gallery_pane_g2_ParamLimits

0x47a8,	// (0x00012346) cell_gallery_pane_g2

0x47b5,	// (0x00012353) cell_gallery_pane_g3_ParamLimits

0x47b5,	// (0x00012353) cell_gallery_pane_g3

0xc160,	// (0x00019cfe) cell_gallery_pane_g4_ParamLimits

0xc160,	// (0x00019cfe) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0001d276) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0001d276) cell_gallery_pane_g

0xc16c,	// (0x00019d0a) bg_cell_gallery_focus_pane_g1

0xc174,	// (0x00019d12) bg_cell_gallery_focus_pane_g2

0xc17c,	// (0x00019d1a) bg_cell_gallery_focus_pane_g3

0xc184,	// (0x00019d22) bg_cell_gallery_focus_pane_g4

0xc18c,	// (0x00019d2a) bg_cell_gallery_focus_pane_g5

0xc194,	// (0x00019d32) bg_cell_gallery_focus_pane_g6

0xc19c,	// (0x00019d3a) bg_cell_gallery_focus_pane_g7

0xc1a4,	// (0x00019d42) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0001d27f) bg_cell_gallery_focus_pane_g

0xc1ac,	// (0x00019d4a) aid_firma_cardinal

0xc1c0,	// (0x00019d5e) blid_firmament_pane_t1

0xc1d7,	// (0x00019d75) blid_firmament_pane_t2

0xc1ee,	// (0x00019d8c) blid_firmament_pane_t3

0xc205,	// (0x00019da3) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0001d290) blid_firmament_pane_t

0xc21c,	// (0x00019dba) blid_sat_info_pane

0xc22c,	// (0x00019dca) blid_sat_info_pane_g1

0xc22c,	// (0x00019dca) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0001d299) blid_sat_info_pane_g

0xc236,	// (0x00019dd4) blid_sat_info_pane_t1

0xc244,	// (0x00019de2) smil2_volume_content_pane

0xc24d,	// (0x00019deb) smil2_volume_pane_g1

0xc255,	// (0x00019df3) smil2_volume_content_pane_g1

0xc25e,	// (0x00019dfc) smil2_volume_content_pane_g2

0xc267,	// (0x00019e05) smil2_volume_content_pane_g3

0xc270,	// (0x00019e0e) smil2_volume_content_pane_g4

0xc279,	// (0x00019e17) smil2_volume_content_pane_g5

0xc282,	// (0x00019e20) smil2_volume_content_pane_g6

0xc28b,	// (0x00019e29) smil2_volume_content_pane_g7

0xc294,	// (0x00019e32) smil2_volume_content_pane_g8

0xc29d,	// (0x00019e3b) smil2_volume_content_pane_g9

0xc2a6,	// (0x00019e44) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0001d29e) smil2_volume_content_pane_g

0x14d7,	// (0x0000f075) cale_week_day_heading_pane_t1_ParamLimits

0x1501,	// (0x0000f09f) cale_week_day_heading_pane_t2_ParamLimits

0x152b,	// (0x0000f0c9) cale_week_day_heading_pane_t3_ParamLimits

0x1555,	// (0x0000f0f3) cale_week_day_heading_pane_t4_ParamLimits

0x157f,	// (0x0000f11d) cale_week_day_heading_pane_t5_ParamLimits

0x15a9,	// (0x0000f147) cale_week_day_heading_pane_t6_ParamLimits

0x15d5,	// (0x0000f173) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0001cd8a) cale_week_day_heading_pane_t_ParamLimits

0x9c80,	// (0x0001781e) bg_cale_side_pane_ParamLimits

0x15ff,	// (0x0000f19d) cale_week_time_pane_t1_ParamLimits

0x1617,	// (0x0000f1b5) cale_week_time_pane_t2_ParamLimits

0x162f,	// (0x0000f1cd) cale_week_time_pane_t3_ParamLimits

0x1647,	// (0x0000f1e5) cale_week_time_pane_t4_ParamLimits

0x165f,	// (0x0000f1fd) cale_week_time_pane_t5_ParamLimits

0x1677,	// (0x0000f215) cale_week_time_pane_t6_ParamLimits

0x168f,	// (0x0000f22d) cale_week_time_pane_t7_ParamLimits

0x16a7,	// (0x0000f245) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0001cd99) cale_week_time_pane_t_ParamLimits

0x16bf,	// (0x0000f25d) cell_cale_week_pane_g2_ParamLimits

0x9c80,	// (0x0001781e) bg_cale_side_pane_cp01_ParamLimits

0x25cf,	// (0x0001016d) cale_month_week_pane_t1_ParamLimits

0x25e6,	// (0x00010184) cale_month_week_pane_t2_ParamLimits

0x25fd,	// (0x0001019b) cale_month_week_pane_t3_ParamLimits

0x2614,	// (0x000101b2) cale_month_week_pane_t4_ParamLimits

0x262b,	// (0x000101c9) cale_month_week_pane_t5_ParamLimits

0x2642,	// (0x000101e0) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0001ce72) cale_month_week_pane_t_ParamLimits

0xa14b,	// (0x00017ce9) cell_cale_month_pane_g1_ParamLimits

0x92f3,	// (0x00016e91) main_cale_event_viewer_pane

0x92f3,	// (0x00016e91) listscroll_cale_event_viewer_pane

0xc2af,	// (0x00019e4d) list_cale_ev_pane

0xc2b7,	// (0x00019e55) scroll_pane_cp023

0xc2c3,	// (0x00019e61) field_cale_ev_pane_ParamLimits

0xc2c3,	// (0x00019e61) field_cale_ev_pane

0xc2e1,	// (0x00019e7f) field_cale_ev_content_pane_ParamLimits

0xc2e1,	// (0x00019e7f) field_cale_ev_content_pane

0xc2ed,	// (0x00019e8b) field_cale_ev_pane_g1_ParamLimits

0xc2ed,	// (0x00019e8b) field_cale_ev_pane_g1

0xc2f9,	// (0x00019e97) field_cale_ev_pane_g2_ParamLimits

0xc2f9,	// (0x00019e97) field_cale_ev_pane_g2

0xc311,	// (0x00019eaf) field_cale_ev_pane_g3_ParamLimits

0xc311,	// (0x00019eaf) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0001d2b3) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0001d2b3) field_cale_ev_pane_g

0xc329,	// (0x00019ec7) field_cale_ev_pane_t1_ParamLimits

0xc329,	// (0x00019ec7) field_cale_ev_pane_t1

0xc340,	// (0x00019ede) field_cale_ev_content_pane_t1_ParamLimits

0xc340,	// (0x00019ede) field_cale_ev_content_pane_t1

0xa9fa,	// (0x00018598) bg_button_pane_cp01

0x9ad4,	// (0x00017672) listscroll_cale_week_pane_ParamLimits

0x12f3,	// (0x0000ee91) popup_toolbar_window_cp01

0x9c6e,	// (0x0001780c) listscroll_cale_week_pane_t1_ParamLimits

0x9ad4,	// (0x00017672) listscroll_cale_day_pane_ParamLimits

0x27a5,	// (0x00010343) popup_toolbar_window_cp02

0x9c6e,	// (0x0001780c) listscroll_cale_day_pane_t1_ParamLimits

0x9ad4,	// (0x00017672) main_cale_month_pane_ParamLimits

0x3cdc,	// (0x0001187a) popup_toolbar_window_cp03_ParamLimits

0x3cdc,	// (0x0001187a) popup_toolbar_window_cp03

0x3381,	// (0x00010f1f) main_image_pane_g2_ParamLimits

0x3381,	// (0x00010f1f) main_image_pane_g2

0x3392,	// (0x00010f30) main_image_pane_g3_ParamLimits

0x3392,	// (0x00010f30) main_image_pane_g3

0x0002,

0xf506,	// (0x0001d0a4) main_image_pane_g_ParamLimits

0xf506,	// (0x0001d0a4) main_image_pane_g

0xabbd,	// (0x0001875b) main_image_pane_t1_ParamLimits

0x33a3,	// (0x00010f41) main_image_pane_t2_ParamLimits

0x33a3,	// (0x00010f41) main_image_pane_t2

0x33b5,	// (0x00010f53) main_image_pane_t3_ParamLimits

0x33b5,	// (0x00010f53) main_image_pane_t3

0x33dd,	// (0x00010f7b) main_image_pane_t4_ParamLimits

0x33dd,	// (0x00010f7b) main_image_pane_t4

0x0003,

0xf50d,	// (0x0001d0ab) main_image_pane_t_ParamLimits

0xf50d,	// (0x0001d0ab) main_image_pane_t

0x33fd,	// (0x00010f9b) popup_image_details_window_cp01

0x3407,	// (0x00010fa5) popup_toobar_trans_pane_cp01_ParamLimits

0x3407,	// (0x00010fa5) popup_toobar_trans_pane_cp01

0x3b87,	// (0x00011725) popup_image_details_window_ParamLimits

0x3b87,	// (0x00011725) popup_image_details_window

0xbd46,	// (0x000198e4) popup_image_focus_window

0x3fa2,	// (0x00011b40) camera2_autofocus_pane_ParamLimits

0x3fa2,	// (0x00011b40) camera2_autofocus_pane

0x92f3,	// (0x00016e91) bg_popup_sub_pane_cp06

0xc35e,	// (0x00019efc) popup_image_focus_window_g1

0xc366,	// (0x00019f04) popup_image_focus_window_g2

0xc36e,	// (0x00019f0c) popup_image_focus_window_g3

0xc376,	// (0x00019f14) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0001d2ba) popup_image_focus_window_g

0xc37e,	// (0x00019f1c) popup_image_focus_window_t1

0xc38c,	// (0x00019f2a) popup_image_focus_window_t2

0xc39c,	// (0x00019f3a) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0001d2c3) popup_image_focus_window_t

0xc3aa,	// (0x00019f48) camera2_autofocus_pane_g1

0x9363,	// (0x00016f01) bg_tb_trans_pane_cp01

0xc3b8,	// (0x00019f56) popup_image_details_window_g1

0xc3cb,	// (0x00019f69) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0001d2d5) popup_image_details_window_g

0xc3f4,	// (0x00019f92) popup_image_details_window_t1

0xc406,	// (0x00019fa4) popup_image_details_window_t2

0xc41f,	// (0x00019fbd) popup_image_details_window_t3

0xc433,	// (0x00019fd1) popup_image_details_window_t4

0xc44e,	// (0x00019fec) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0001d2dc) popup_image_details_window_t

0x9aa6,	// (0x00017644) bg_calc_paper_pane_ParamLimits

0x92f3,	// (0x00016e91) grid_highlight_pane_cp013

0x9aba,	// (0x00017658) list_calc_pane_ParamLimits

0x9acc,	// (0x0001766a) scroll_pane_cp024

0x9ad4,	// (0x00017672) bg_calc_display_pane_ParamLimits

0x1121,	// (0x0000ecbf) calc_display_pane_t1_ParamLimits

0x1133,	// (0x0000ecd1) calc_display_pane_t2_ParamLimits

0x9ae0,	// (0x0001767e) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0001cd0c) calc_display_pane_t_ParamLimits

0x11f0,	// (0x0000ed8e) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0001cd29) cell_calc_pane_g

0x11f9,	// (0x0000ed97) cell_calc_pane_t1

0x9b57,	// (0x000176f5) grid_highlight_pane_cp02_ParamLimits

0x9b6d,	// (0x0001770b) toolbar_button_pane_cp01_ParamLimits

0x9b6d,	// (0x0001770b) toolbar_button_pane_cp01

0xac02,	// (0x000187a0) temp_image_control_pane_ParamLimits

0xac02,	// (0x000187a0) temp_image_control_pane

0x9363,	// (0x00016f01) main_mp3_pane

0xc468,	// (0x0001a006) temp_image_control_pane_g1_ParamLimits

0xc468,	// (0x0001a006) temp_image_control_pane_g1

0xc476,	// (0x0001a014) temp_image_control_pane_g2_ParamLimits

0xc476,	// (0x0001a014) temp_image_control_pane_g2

0xc488,	// (0x0001a026) temp_image_control_pane_g3_ParamLimits

0xc488,	// (0x0001a026) temp_image_control_pane_g3

0x47f2,	// (0x00012390) temp_image_control_pane_g4_ParamLimits

0x47f2,	// (0x00012390) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0001d2e7) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0001d2e7) temp_image_control_pane_g

0xc468,	// (0x0001a006) main_mp3_pane_g1

0x4805,	// (0x000123a3) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0001d2f0) main_mp3_pane_g

0xc4cb,	// (0x0001a069) main_mp3_pane_t1

0x9d4f,	// (0x000178ed) main_camera_pane_g8_ParamLimits

0x9d4f,	// (0x000178ed) main_camera_pane_g8

0x1974,	// (0x0000f512) main_video_pane_g7_ParamLimits

0x1974,	// (0x0000f512) main_video_pane_g7

0xbe53,	// (0x000199f1) main_camera2_pane_t7_ParamLimits

0xbe53,	// (0x000199f1) main_camera2_pane_t7

0x9f37,	// (0x00017ad5) scroll_pane_cp025_ParamLimits

0x9f37,	// (0x00017ad5) scroll_pane_cp025

0x9f4b,	// (0x00017ae9) scroll_pane_cp026_ParamLimits

0x9f4b,	// (0x00017ae9) scroll_pane_cp026

0x9f5a,	// (0x00017af8) wml_content_pane_ParamLimits

0x92f3,	// (0x00016e91) main_touch_calib_pane

0x48cf,	// (0x0001246d) main_touch_calib_pane_g1

0x48db,	// (0x00012479) main_touch_calib_pane_g2

0x48e7,	// (0x00012485) main_touch_calib_pane_g3

0x48f3,	// (0x00012491) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0001d30e) main_touch_calib_pane_g

0x48ff,	// (0x0001249d) main_touch_calib_pane_t1

0x4919,	// (0x000124b7) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0001d317) main_touch_calib_pane_t

0xa7aa,	// (0x00018348) mup_progress_pane_cp02

0xa7c9,	// (0x00018367) navi_pane_g1

0xa82b,	// (0x000183c9) navi_pane_mp_t3

0x9363,	// (0x00016f01) main_mp3_pane_ParamLimits

0x3d1a,	// (0x000118b8) navi_pane_ParamLimits

0xc468,	// (0x0001a006) main_mp3_pane_g1_ParamLimits

0x4805,	// (0x000123a3) main_mp3_pane_g2_ParamLimits

0x4813,	// (0x000123b1) main_mp3_pane_g3_ParamLimits

0x4813,	// (0x000123b1) main_mp3_pane_g3

0x4821,	// (0x000123bf) main_mp3_pane_g4_ParamLimits

0x4821,	// (0x000123bf) main_mp3_pane_g4

0xc498,	// (0x0001a036) main_mp3_pane_g5_ParamLimits

0xc498,	// (0x0001a036) main_mp3_pane_g5

0xc4a6,	// (0x0001a044) main_mp3_pane_g6_ParamLimits

0xc4a6,	// (0x0001a044) main_mp3_pane_g6

0xc4b3,	// (0x0001a051) main_mp3_pane_g7_ParamLimits

0xc4b3,	// (0x0001a051) main_mp3_pane_g7

0xc4bf,	// (0x0001a05d) main_mp3_pane_g8_ParamLimits

0xc4bf,	// (0x0001a05d) main_mp3_pane_g8

0xf752,	// (0x0001d2f0) main_mp3_pane_g_ParamLimits

0x482d,	// (0x000123cb) main_mp3_pane_t2

0x483b,	// (0x000123d9) main_mp3_pane_t3

0xc4d9,	// (0x0001a077) main_mp3_pane_t4

0xc4e7,	// (0x0001a085) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0001d301) main_mp3_pane_t

0xc4f5,	// (0x0001a093) mup_progress_pane_cp01

0x9311,	// (0x00016eaf) aid_zoom_text_secondary2

0xc2af,	// (0x00019e4d) list_cale_ev2_pane

0xc2b7,	// (0x00019e55) scroll_pane_cp023_ParamLimits

0x496f,	// (0x0001250d) field_cale_ev2_pane_ParamLimits

0x496f,	// (0x0001250d) field_cale_ev2_pane

0x498f,	// (0x0001252d) field_cale_ev2_pane_g1_ParamLimits

0x498f,	// (0x0001252d) field_cale_ev2_pane_g1

0x499b,	// (0x00012539) field_cale_ev2_pane_g2_ParamLimits

0x499b,	// (0x00012539) field_cale_ev2_pane_g2

0x49b3,	// (0x00012551) field_cale_ev2_pane_g3_ParamLimits

0x49b3,	// (0x00012551) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0001d322) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0001d322) field_cale_ev2_pane_g

0x49cb,	// (0x00012569) field_cale_ev2_pane_t1_ParamLimits

0x49cb,	// (0x00012569) field_cale_ev2_pane_t1

0x49e2,	// (0x00012580) field_cale_ev2_pane_t2_ParamLimits

0x49e2,	// (0x00012580) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0001d32b) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0001d32b) field_cale_ev2_pane_t

0x3236,	// (0x00010dd4) main_postcard_pane_g5_ParamLimits

0x3236,	// (0x00010dd4) main_postcard_pane_g5

0x324c,	// (0x00010dea) main_postcard_pane_g6_ParamLimits

0x324c,	// (0x00010dea) main_postcard_pane_g6

0x1738,	// (0x0000f2d6) camera2_autofocus_pane_cp_ParamLimits

0x1738,	// (0x0000f2d6) camera2_autofocus_pane_cp

0x9363,	// (0x00016f01) main_mup3_pane

0x4a17,	// (0x000125b5) main_mup3_pane_g1_ParamLimits

0x4a17,	// (0x000125b5) main_mup3_pane_g1

0x4a39,	// (0x000125d7) main_mup3_pane_g2_ParamLimits

0x4a39,	// (0x000125d7) main_mup3_pane_g2

0x4ab7,	// (0x00012655) main_mup3_pane_g3_ParamLimits

0x4ab7,	// (0x00012655) main_mup3_pane_g3

0x4afd,	// (0x0001269b) main_mup3_pane_g4_ParamLimits

0x4afd,	// (0x0001269b) main_mup3_pane_g4

0x4b43,	// (0x000126e1) main_mup3_pane_g5_ParamLimits

0x4b43,	// (0x000126e1) main_mup3_pane_g5

0x4b89,	// (0x00012727) main_mup3_pane_g6_ParamLimits

0x4b89,	// (0x00012727) main_mup3_pane_g6

0xc509,	// (0x0001a0a7) main_mup3_pane_g7_ParamLimits

0xc509,	// (0x0001a0a7) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0001d33b) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0001d33b) main_mup3_pane_g

0x4c07,	// (0x000127a5) main_mup3_pane_t1_ParamLimits

0x4c07,	// (0x000127a5) main_mup3_pane_t1

0x4c7b,	// (0x00012819) main_mup3_pane_t2_ParamLimits

0x4c7b,	// (0x00012819) main_mup3_pane_t2

0x4d4f,	// (0x000128ed) main_mup3_pane_t4_ParamLimits

0x4d4f,	// (0x000128ed) main_mup3_pane_t4

0x4da5,	// (0x00012943) main_mup3_pane_t5_ParamLimits

0x4da5,	// (0x00012943) main_mup3_pane_t5

0x4e61,	// (0x000129ff) main_mup3_pane_t6_ParamLimits

0x4e61,	// (0x000129ff) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0001d34c) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0001d34c) main_mup3_pane_t

0x4f19,	// (0x00012ab7) mup3_progress_pane_ParamLimits

0x4f19,	// (0x00012ab7) mup3_progress_pane

0x4faf,	// (0x00012b4d) popup_mup3_control_window_ParamLimits

0x4faf,	// (0x00012b4d) popup_mup3_control_window

0xc517,	// (0x0001a0b5) popup_mup3_text_window

0x4fe1,	// (0x00012b7f) mup3_progress_pane_t1

0x5000,	// (0x00012b9e) mup3_progress_pane_t2

0xc51f,	// (0x0001a0bd) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0001d359) mup3_progress_pane_t

0xc53c,	// (0x0001a0da) mup_progress_pane_cp03

0x92f3,	// (0x00016e91) bg_tb_trans_pane_cp04

0x501f,	// (0x00012bbd) mup3_volume_pane

0x5027,	// (0x00012bc5) popup_mup3_control_window_g1

0x5030,	// (0x00012bce) mup3_volume_pane_g1

0x5039,	// (0x00012bd7) mup3_volume_pane_g2

0x5042,	// (0x00012be0) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0001d360) mup3_volume_pane_g

0x92f3,	// (0x00016e91) bg_tb_trans_pane_cp03

0xc54c,	// (0x0001a0ea) popup_mup3_text_window_g1

0xc554,	// (0x0001a0f2) popup_mup3_text_window_t1

0x9b2e,	// (0x000176cc) list_calc_item_pane_g1_ParamLimits

0xbf3b,	// (0x00019ad9) mup_volume_pane_cp_g1

0x4933,	// (0x000124d1) main_touch_calib_pane_t3

0x4947,	// (0x000124e5) main_touch_calib_pane_t4

0x495b,	// (0x000124f9) main_touch_calib_pane_t5

0x92fd,	// (0x00016e9b) aid_cell_size_toolbar2

0x9305,	// (0x00016ea3) aid_popup3_width_pane

0x9311,	// (0x00016eaf) aid_zoom_text_msg_primary

0x9d2f,	// (0x000178cd) vorec_t7

0x9af2,	// (0x00017690) bg_calc_paper_pane_g1_ParamLimits

0x9afe,	// (0x0001769c) bg_calc_paper_pane_g2_ParamLimits

0x9b0a,	// (0x000176a8) bg_calc_paper_pane_g3_ParamLimits

0x9b16,	// (0x000176b4) bg_calc_paper_pane_g4_ParamLimits

0x9b22,	// (0x000176c0) bg_calc_paper_pane_g5_ParamLimits

0x117a,	// (0x0000ed18) bg_calc_paper_pane_g6_ParamLimits

0x1189,	// (0x0000ed27) bg_calc_paper_pane_g7_ParamLimits

0x1198,	// (0x0000ed36) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0001cd13) bg_calc_paper_pane_g_ParamLimits

0x11ab,	// (0x0000ed49) calc_bg_paper_pane_g9_ParamLimits

0x1886,	// (0x0000f424) image_qvga_pane_ParamLimits

0x1886,	// (0x0000f424) image_qvga_pane

0x99df,	// (0x0001757d) bg_popup_sub_pane_cp04_ParamLimits

0xab39,	// (0x000186d7) popup_mup_playback_window_g1_ParamLimits

0xab45,	// (0x000186e3) popup_mup_playback_window_t1_ParamLimits

0xab5a,	// (0x000186f8) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0001d09f) popup_mup_playback_window_t_ParamLimits

0x4495,	// (0x00012033) main_mup2_pane_g3_ParamLimits

0x4495,	// (0x00012033) main_mup2_pane_g3

0x1bd6,	// (0x0000f774) popup_toolbar_window_cp04

0xaf3c,	// (0x00018ada) popup_call2_audio_second_window_g3_ParamLimits

0xaf3c,	// (0x00018ada) popup_call2_audio_second_window_g3

0xb346,	// (0x00018ee4) popup_call2_audio_first_window_g4_ParamLimits

0xb346,	// (0x00018ee4) popup_call2_audio_first_window_g4

0xb9c5,	// (0x00019563) popup_call2_audio_in_window_g4_ParamLimits

0xb9c5,	// (0x00019563) popup_call2_audio_in_window_g4

0x3363,	// (0x00010f01) aid_area_sk_bg_cut_ParamLimits

0x3363,	// (0x00010f01) aid_area_sk_bg_cut

0xab6f,	// (0x0001870d) aid_area_sk_bg_cut_2_ParamLimits

0xab6f,	// (0x0001870d) aid_area_sk_bg_cut_2

0x4798,	// (0x00012336) aid_placing_details_win

0x47a0,	// (0x0001233e) aid_placing_details_win_2

0xc3aa,	// (0x00019f48) camera2_autofocus_pane_g1_ParamLimits

0x0d6f,	// (0x0000e90d) popup_fixed_preview_cale_window_ParamLimits

0x0d6f,	// (0x0000e90d) popup_fixed_preview_cale_window

0xa883,	// (0x00018421) navi_slider_pane_g3

0xa88c,	// (0x0001842a) navi_slider_pane_g4

0xa895,	// (0x00018433) navi_slider_pane_g5

0xa883,	// (0x00018421) navi_slider_pane_g6

0xa89e,	// (0x0001843c) navi_slider_pane_g7

0xa9bf,	// (0x0001855d) mup_scale_pane_g3

0xa9c8,	// (0x00018566) mup_scale_pane_g4

0xa9d1,	// (0x0001856f) mup_scale_pane_g5

0x3083,	// (0x00010c21) mup_scale_pane_g6

0x308c,	// (0x00010c2a) mup_scale_pane_g7

0xa883,	// (0x00018421) cams2_slider_pane_g3

0xbff0,	// (0x00019b8e) cams2_slider_pane_g4

0xbff8,	// (0x00019b96) cams2_slider_pane_g5

0xa883,	// (0x00018421) cams2_slider_pane_g6

0xc000,	// (0x00019b9e) cams2_slider_pane_g7

0xc22c,	// (0x00019dca) camera2_autofocus_pane_cp_g1

0xc562,	// (0x0001a100) bg_popup_preview_window_pane_cp02_ParamLimits

0xc562,	// (0x0001a100) bg_popup_preview_window_pane_cp02

0xc56e,	// (0x0001a10c) list_fp_cale_pane_ParamLimits

0xc56e,	// (0x0001a10c) list_fp_cale_pane

0xc57a,	// (0x0001a118) popup_fixed_preview_cale_window_t1_ParamLimits

0xc57a,	// (0x0001a118) popup_fixed_preview_cale_window_t1

0x504b,	// (0x00012be9) popup_fixed_preview_cale_window_t2_ParamLimits

0x504b,	// (0x00012be9) popup_fixed_preview_cale_window_t2

0x5060,	// (0x00012bfe) popup_fixed_preview_cale_window_t3_ParamLimits

0x5060,	// (0x00012bfe) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x0001d367) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x0001d367) popup_fixed_preview_cale_window_t

0x5075,	// (0x00012c13) list_single_fp_cale_pane_ParamLimits

0x5075,	// (0x00012c13) list_single_fp_cale_pane

0xc598,	// (0x0001a136) list_single_fp_cale_pane_g1_ParamLimits

0xc598,	// (0x0001a136) list_single_fp_cale_pane_g1

0xc5a4,	// (0x0001a142) list_single_fp_cale_pane_g2_ParamLimits

0xc5a4,	// (0x0001a142) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0001d36e) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0001d36e) list_single_fp_cale_pane_g

0xc5bd,	// (0x0001a15b) list_single_fp_cale_pane_t1_ParamLimits

0xc5bd,	// (0x0001a15b) list_single_fp_cale_pane_t1

0xc5cf,	// (0x0001a16d) list_single_fp_cale_pane_t2_ParamLimits

0xc5cf,	// (0x0001a16d) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0001d375) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0001d375) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x92f3,	// (0x00016e91) main_dialer_pane

0x508a,	// (0x00012c28) aid_cell_size_keypad

0x5094,	// (0x00012c32) dialer_ne_pane

0x509c,	// (0x00012c3a) grid_dialer_command_1_pane

0x50a4,	// (0x00012c42) grid_dialer_command_2_pane

0x50ac,	// (0x00012c4a) grid_dialer_keypad_pane

0x50be,	// (0x00012c5c) bg_popup_call_pane_cp06_ParamLimits

0x50be,	// (0x00012c5c) bg_popup_call_pane_cp06

0x50ca,	// (0x00012c68) dialer_ne_clear_pane_ParamLimits

0x50ca,	// (0x00012c68) dialer_ne_clear_pane

0xc602,	// (0x0001a1a0) dialer_ne_pane_g1

0xc60a,	// (0x0001a1a8) dialer_ne_pane_t1_ParamLimits

0xc60a,	// (0x0001a1a8) dialer_ne_pane_t1

0x50d6,	// (0x00012c74) dialer_ne_pane_t2_ParamLimits

0x50d6,	// (0x00012c74) dialer_ne_pane_t2

0x5100,	// (0x00012c9e) dialer_ne_pane_t3_ParamLimits

0x5100,	// (0x00012c9e) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x0001d37a) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x0001d37a) dialer_ne_pane_t

0x5130,	// (0x00012cce) dialer_ne_pane_t3_copy1_ParamLimits

0x5130,	// (0x00012cce) dialer_ne_pane_t3_copy1

0x515f,	// (0x00012cfd) cell_dialer_keypad_pane_ParamLimits

0x515f,	// (0x00012cfd) cell_dialer_keypad_pane

0x5176,	// (0x00012d14) cell_dialer_command_1_pane_ParamLimits

0x5176,	// (0x00012d14) cell_dialer_command_1_pane

0x518c,	// (0x00012d2a) cell_dialer_command_2_pane_ParamLimits

0x518c,	// (0x00012d2a) cell_dialer_command_2_pane

0xc61c,	// (0x0001a1ba) bg_button_pane_cp02_ParamLimits

0xc61c,	// (0x0001a1ba) bg_button_pane_cp02

0x519b,	// (0x00012d39) cell_dialer_keypad_pane_g1_ParamLimits

0x519b,	// (0x00012d39) cell_dialer_keypad_pane_g1

0xc61c,	// (0x0001a1ba) bg_button_pane_cp03_ParamLimits

0xc61c,	// (0x0001a1ba) bg_button_pane_cp03

0x51af,	// (0x00012d4d) cell_dialer_command_1_pane_g1_ParamLimits

0x51af,	// (0x00012d4d) cell_dialer_command_1_pane_g1

0xc628,	// (0x0001a1c6) bg_button_pane_cp04

0x51c3,	// (0x00012d61) cell_dialer_command_2_pane_g1

0xa869,	// (0x00018407) bg_button_pane_cp06

0xc630,	// (0x0001a1ce) dialer_ne_clear_pane_g1

0x2bc7,	// (0x00010765) navi_pane_g2

0x2bf5,	// (0x00010793) navi_pane_g3

0x0002,

0xf404,	// (0x0001cfa2) navi_pane_g

0x2c1e,	// (0x000107bc) navi_pane_mv_g2

0x2c45,	// (0x000107e3) navi_pane_mv_g5

0x2c4d,	// (0x000107eb) navi_pane_mv_t1

0x9ad4,	// (0x00017672) main_clock2_pane

0x51fb,	// (0x00012d99) main_clock2_list_pane_ParamLimits

0x51fb,	// (0x00012d99) main_clock2_list_pane

0x5233,	// (0x00012dd1) main_clock2_pane_t1_ParamLimits

0x5233,	// (0x00012dd1) main_clock2_pane_t1

0x526f,	// (0x00012e0d) main_clock2_pane_t2_ParamLimits

0x526f,	// (0x00012e0d) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0001d381) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0001d381) main_clock2_pane_t

0x530c,	// (0x00012eaa) popup_clock_analogue_window_cp03_ParamLimits

0x530c,	// (0x00012eaa) popup_clock_analogue_window_cp03

0x5331,	// (0x00012ecf) popup_clock_digital_window_cp02_ParamLimits

0x5331,	// (0x00012ecf) popup_clock_digital_window_cp02

0x53a2,	// (0x00012f40) main_clock2_list_single_pane_ParamLimits

0x53a2,	// (0x00012f40) main_clock2_list_single_pane

0xa869,	// (0x00018407) list_highlight_pane_cp05

0xc638,	// (0x0001a1d6) main_clock2_list_single_pane_t1

0x1bd6,	// (0x0000f774) popup_toolbar_window_cp04_ParamLimits

0x47c2,	// (0x00012360) camera2_autofocus_pane_g2_ParamLimits

0x47c2,	// (0x00012360) camera2_autofocus_pane_g2

0x47ce,	// (0x0001236c) camera2_autofocus_pane_g3_ParamLimits

0x47ce,	// (0x0001236c) camera2_autofocus_pane_g3

0x47da,	// (0x00012378) camera2_autofocus_pane_g4_ParamLimits

0x47da,	// (0x00012378) camera2_autofocus_pane_g4

0x47e6,	// (0x00012384) camera2_autofocus_pane_g5_ParamLimits

0x47e6,	// (0x00012384) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0001d2ca) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0001d2ca) camera2_autofocus_pane_g

0x49f7,	// (0x00012595) camera2_autofocus_pane_cp_g2

0x49ff,	// (0x0001259d) camera2_autofocus_pane_cp_g3

0x4a07,	// (0x000125a5) camera2_autofocus_pane_cp_g4

0x4a0f,	// (0x000125ad) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0001d330) camera2_autofocus_pane_cp_g

0x50b6,	// (0x00012c54) popup_dialer_spcha_window

0x92f3,	// (0x00016e91) bg_popup_sub_pane_cp07

0xc646,	// (0x0001a1e4) list_spcha_pane

0xc64e,	// (0x0001a1ec) list_single_spcha_pane_ParamLimits

0xc64e,	// (0x0001a1ec) list_single_spcha_pane

0x92f3,	// (0x00016e91) list_highlight_pane_cp06

0xc65f,	// (0x0001a1fd) list_single_spcha_pane_t1

0xb76f,	// (0x0001930d) popup_call2_audio_out_window_g4_ParamLimits

0xb76f,	// (0x0001930d) popup_call2_audio_out_window_g4

0x92f3,	// (0x00016e91) main_imed2_pane

0xbd4e,	// (0x000198ec) popup_imed_adjust2_window

0x3b9f,	// (0x0001173d) popup_imed_trans_window_ParamLimits

0x3b9f,	// (0x0001173d) popup_imed_trans_window

0xc06a,	// (0x00019c08) popup_blid_sat_info2_window_t1

0xc078,	// (0x00019c16) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x0001d25f) popup_blid_sat_info2_window_t

0x544c,	// (0x00012fea) aid_size_cell_colour_35

0x546c,	// (0x0001300a) aid_size_cell_colour_112

0x548c,	// (0x0001302a) aid_size_cell_effect

0xbd26,	// (0x000198c4) bg_tb_trans_pane_cp02

0xa2c4,	// (0x00017e62) heading_imed_pane

0x54ac,	// (0x0001304a) listscroll_imed_pane

0xc66d,	// (0x0001a20b) heading_imed_pane_g1

0xc675,	// (0x0001a213) heading_imed_pane_t1

0xc683,	// (0x0001a221) grid_imed_colour_35_pane_ParamLimits

0xc683,	// (0x0001a221) grid_imed_colour_35_pane

0x54b8,	// (0x00013056) grid_imed_effect_pane

0xc69a,	// (0x0001a238) list_imed_aspect_pane

0x54ce,	// (0x0001306c) scroll_pane_cp027_ParamLimits

0x54ce,	// (0x0001306c) scroll_pane_cp027

0x54df,	// (0x0001307d) cell_imed_effect_pane_ParamLimits

0x54df,	// (0x0001307d) cell_imed_effect_pane

0xc6a2,	// (0x0001a240) cell_imed_colour_pane_ParamLimits

0xc6a2,	// (0x0001a240) cell_imed_colour_pane

0xc6e4,	// (0x0001a282) cell_imed_colour_pane_g1_ParamLimits

0xc6e4,	// (0x0001a282) cell_imed_colour_pane_g1

0xc6f5,	// (0x0001a293) hgihlgiht_grid_pane_cp016_ParamLimits

0xc6f5,	// (0x0001a293) hgihlgiht_grid_pane_cp016

0x5506,	// (0x000130a4) cell_imed_effect_pane_g1

0x550e,	// (0x000130ac) grid_highlight_pane_cp017

0xc706,	// (0x0001a2a4) list_imed_single_pane_ParamLimits

0xc706,	// (0x0001a2a4) list_imed_single_pane

0x92f3,	// (0x00016e91) list_highlight_pane_cp07

0xc71b,	// (0x0001a2b9) list_imed_aspect_pane_comp1_t1

0xbd26,	// (0x000198c4) bg_tb_trans_pane_cp05

0xc73d,	// (0x0001a2db) popup_imed_adjust2_window_g1

0xc764,	// (0x0001a302) popup_imed_adjust2_window_t1

0xc77c,	// (0x0001a31a) slider_imed_adjust_pane

0xc790,	// (0x0001a32e) slider_imed_adjust_pane_g1

0xc7a0,	// (0x0001a33e) slider_imed_adjust_pane_g2

0xc7b0,	// (0x0001a34e) slider_imed_adjust_pane_g3

0xc7c1,	// (0x0001a35f) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0001d39e) slider_imed_adjust_pane_g

0x5517,	// (0x000130b5) aid_size_cell_clipart2

0x5523,	// (0x000130c1) grid_imed_clipart_pane

0xc7d2,	// (0x0001a370) scroll_pane_cp031

0x552d,	// (0x000130cb) cell_imed_clipart_pane_ParamLimits

0x552d,	// (0x000130cb) cell_imed_clipart_pane

0x554f,	// (0x000130ed) cell_imed_clipart_pane_g1

0x92f3,	// (0x00016e91) grid_highlight_pane_cp014

0x5210,	// (0x00012dae) main_clock2_pane_g1_ParamLimits

0x5210,	// (0x00012dae) main_clock2_pane_g1

0x534d,	// (0x00012eeb) aid_call2_pane_cp10

0x535f,	// (0x00012efd) aid_call_pane_cp10

0xa79e,	// (0x0001833c) popup_clock_analogue_window_cp10_g1

0xa79e,	// (0x0001833c) popup_clock_analogue_window_cp10_g2

0x5371,	// (0x00012f0f) popup_clock_analogue_window_cp10_g3

0x5371,	// (0x00012f0f) popup_clock_analogue_window_cp10_g4

0xa79e,	// (0x0001833c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0001d38c) popup_clock_analogue_window_cp10_g

0x5383,	// (0x00012f21) popup_clock_analogue_window_cp10_t1

0x53b4,	// (0x00012f52) clock_digital_number_pane_cp10_ParamLimits

0x53b4,	// (0x00012f52) clock_digital_number_pane_cp10

0x53cc,	// (0x00012f6a) clock_digital_number_pane_cp11_ParamLimits

0x53cc,	// (0x00012f6a) clock_digital_number_pane_cp11

0x53e4,	// (0x00012f82) clock_digital_number_pane_cp12_ParamLimits

0x53e4,	// (0x00012f82) clock_digital_number_pane_cp12

0x53fc,	// (0x00012f9a) clock_digital_number_pane_cp13_ParamLimits

0x53fc,	// (0x00012f9a) clock_digital_number_pane_cp13

0x5414,	// (0x00012fb2) clock_digital_separator_pane_cp10_ParamLimits

0x5414,	// (0x00012fb2) clock_digital_separator_pane_cp10

0x542c,	// (0x00012fca) popup_clock_digital_window_cp02_t1_ParamLimits

0x542c,	// (0x00012fca) popup_clock_digital_window_cp02_t1

0x99d7,	// (0x00017575) clock_digital_number_pane_cp10_g1

0x99d7,	// (0x00017575) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0001d3a7) clock_digital_number_pane_cp10_g

0x99d7,	// (0x00017575) clock_digital_separator_pane_cp10_g1

0x99d7,	// (0x00017575) clock_digital_separator_pane_g2_cp10

0xa839,	// (0x000183d7) navi_pane_vded_g4

0xa842,	// (0x000183e0) navi_pane_vded_g5

0xa84b,	// (0x000183e9) navi_pane_vded_t1

0x92f3,	// (0x00016e91) main_vded_pane

0x5558,	// (0x000130f6) main_vded_pane_g1

0x5562,	// (0x00013100) main_vded_pane_g2

0x556c,	// (0x0001310a) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0001d3ac) main_vded_pane_g

0x5576,	// (0x00013114) main_vded_pane_t1

0x5584,	// (0x00013122) main_vded_pane_t2

0x0001,

0xf815,	// (0x0001d3b3) main_vded_pane_t

0x5592,	// (0x00013130) vded_slider_pane

0x559a,	// (0x00013138) vded_video_pane

0xc7da,	// (0x0001a378) vded_video_pane_g1

0x55a2,	// (0x00013140) vded_video_pane_g2

0xc22c,	// (0x00019dca) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0001d3b8) vded_video_pane_g

0xc7e4,	// (0x0001a382) vded_slider_pane_g1

0xbf3b,	// (0x00019ad9) vded_slider_pane_g2

0xc7ed,	// (0x0001a38b) vded_slider_pane_g3

0xc7f6,	// (0x0001a394) vded_slider_pane_g4

0xc7ff,	// (0x0001a39d) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0001d3bf) vded_slider_pane_g

0x4f97,	// (0x00012b35) mup3_rocker_pane_ParamLimits

0x4f97,	// (0x00012b35) mup3_rocker_pane

0x55ab,	// (0x00013149) mup3_control_keys_pane_g1

0x55b3,	// (0x00013151) mup3_control_keys_pane_g2

0x55bb,	// (0x00013159) mup3_control_keys_pane_g3

0x55c3,	// (0x00013161) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0001d3ca) mup3_control_keys_pane_g

0x0da6,	// (0x0000e944) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0da6,	// (0x0000e944) popup_toolbar2_fixed_window_cp01

0x4fcb,	// (0x00012b69) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4fcb,	// (0x00012b69) popup_toolbar2_fixed_window_cp02

0xb0ae,	// (0x00018c4c) popup_call2_audio_second_window_t4_ParamLimits

0xb0ae,	// (0x00018c4c) popup_call2_audio_second_window_t4

0xb5dc,	// (0x0001917a) popup_call2_audio_first_window_t6_ParamLimits

0xb5dc,	// (0x0001917a) popup_call2_audio_first_window_t6

0xb872,	// (0x00019410) popup_call2_audio_out_window_t6_ParamLimits

0xb872,	// (0x00019410) popup_call2_audio_out_window_t6

0x92f3,	// (0x00016e91) main_vitu_pane

0x55d3,	// (0x00013171) aid_size_cell_itu_ParamLimits

0x55d3,	// (0x00013171) aid_size_cell_itu

0x9363,	// (0x00016f01) bg_popup_window_pane_cp08_ParamLimits

0x9363,	// (0x00016f01) bg_popup_window_pane_cp08

0x55e9,	// (0x00013187) field_vitu_entry_pane_ParamLimits

0x55e9,	// (0x00013187) field_vitu_entry_pane

0x5600,	// (0x0001319e) grid_vitu_function_pane_ParamLimits

0x5600,	// (0x0001319e) grid_vitu_function_pane

0x561b,	// (0x000131b9) grid_vitu_itu_pane_ParamLimits

0x561b,	// (0x000131b9) grid_vitu_itu_pane

0x5639,	// (0x000131d7) cell_vitu_itu_pane_ParamLimits

0x5639,	// (0x000131d7) cell_vitu_itu_pane

0x565b,	// (0x000131f9) cell_vitu_function_pane_ParamLimits

0x565b,	// (0x000131f9) cell_vitu_function_pane

0x9363,	// (0x00016f01) bg_popup_sub_pane_cp08_ParamLimits

0x9363,	// (0x00016f01) bg_popup_sub_pane_cp08

0x5674,	// (0x00013212) field_vitu_entry_pane_t1_ParamLimits

0x5674,	// (0x00013212) field_vitu_entry_pane_t1

0xc820,	// (0x0001a3be) field_vitu_entry_pane_t2_ParamLimits

0xc820,	// (0x0001a3be) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0001d3d8) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0001d3d8) field_vitu_entry_pane_t

0xc83d,	// (0x0001a3db) bg_button_pane_cp05_ParamLimits

0xc83d,	// (0x0001a3db) bg_button_pane_cp05

0x5692,	// (0x00013230) cell_vitu_itu_pane_g1

0x56aa,	// (0x00013248) cell_vitu_itu_pane_t1_ParamLimits

0x56aa,	// (0x00013248) cell_vitu_itu_pane_t1

0x56bc,	// (0x0001325a) cell_vitu_itu_pane_t2_ParamLimits

0x56bc,	// (0x0001325a) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0001d3dd) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0001d3dd) cell_vitu_itu_pane_t

0xc84b,	// (0x0001a3e9) bg_button_pane_cp07

0x56f1,	// (0x0001328f) cell_vitu_function_pane_g1

0x9a66,	// (0x00017604) main_calc_pane_g1

0x0be6,	// (0x0000e784) aid_visual_content_pane

0x92f3,	// (0x00016e91) main_vradio_pane

0x56fa,	// (0x00013298) main_vradio_pane_g1_ParamLimits

0x56fa,	// (0x00013298) main_vradio_pane_g1

0xc855,	// (0x0001a3f3) main_vradio_pane_g2_ParamLimits

0xc855,	// (0x0001a3f3) main_vradio_pane_g2

0x0001,

0xf846,	// (0x0001d3e4) main_vradio_pane_g_ParamLimits

0xf846,	// (0x0001d3e4) main_vradio_pane_g

0x5713,	// (0x000132b1) main_vradio_pane_t1_ParamLimits

0x5713,	// (0x000132b1) main_vradio_pane_t1

0x5728,	// (0x000132c6) main_vradio_pane_t2_ParamLimits

0x5728,	// (0x000132c6) main_vradio_pane_t2

0xc862,	// (0x0001a400) main_vradio_pane_t3_ParamLimits

0xc862,	// (0x0001a400) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0001d3e9) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0001d3e9) main_vradio_pane_t

0x573d,	// (0x000132db) vradio_rocker_control_pane_ParamLimits

0x573d,	// (0x000132db) vradio_rocker_control_pane

0x574f,	// (0x000132ed) vradio_station_info_pane_ParamLimits

0x574f,	// (0x000132ed) vradio_station_info_pane

0xc876,	// (0x0001a414) vradio_frequency_info_pane_ParamLimits

0xc876,	// (0x0001a414) vradio_frequency_info_pane

0xc22c,	// (0x00019dca) vradio_station_info_pane_g1

0xc885,	// (0x0001a423) vradio_station_info_pane_t1_ParamLimits

0xc885,	// (0x0001a423) vradio_station_info_pane_t1

0xc8a7,	// (0x0001a445) vradio_station_info_pane_t2_ParamLimits

0xc8a7,	// (0x0001a445) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0001d3f0) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0001d3f0) vradio_station_info_pane_t

0xc8b9,	// (0x0001a457) vradio_tuning_pane

0xc8c1,	// (0x0001a45f) vradio_rocker_control_pane_g1

0xc8c9,	// (0x0001a467) vradio_rocker_control_pane_g2

0xc8d1,	// (0x0001a46f) vradio_rocker_control_pane_g3

0xc8d9,	// (0x0001a477) vradio_rocker_control_pane_g4

0xc8e1,	// (0x0001a47f) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x0001d3f5) vradio_rocker_control_pane_g

0x5761,	// (0x000132ff) vradio_frequency_info_pane_g1

0xc8e9,	// (0x0001a487) vradio_frequency_info_pane_t1_ParamLimits

0xc8e9,	// (0x0001a487) vradio_frequency_info_pane_t1

0x576b,	// (0x00013309) vradio_tuning_pane_g1

0x5776,	// (0x00013314) vradio_tuning_pane_t1

0x9321,	// (0x00016ebf) area_side_right_pane_ParamLimits

0x9321,	// (0x00016ebf) area_side_right_pane

0xbced,	// (0x0001988b) status_small_pane_g1

0xbcf5,	// (0x00019893) status_small_pane_g2

0xbcfe,	// (0x0001989c) status_small_pane_g3

0xbd07,	// (0x000198a5) status_small_pane_g4

0x0003,

0xf617,	// (0x0001d1b5) status_small_pane_g

0xbd10,	// (0x000198ae) status_small_pane_t1

0x92f3,	// (0x00016e91) main_video3_pane

0xc8fd,	// (0x0001a49b) cams_zoom_vslider_pane

0xc905,	// (0x0001a4a3) image3_wide_pane_ParamLimits

0xc905,	// (0x0001a4a3) image3_wide_pane

0xc91f,	// (0x0001a4bd) image3_wide_small_pane

0xc92b,	// (0x0001a4c9) main_video3_pane_g1_ParamLimits

0xc92b,	// (0x0001a4c9) main_video3_pane_g1

0xc947,	// (0x0001a4e5) main_video3_pane_g2_ParamLimits

0xc947,	// (0x0001a4e5) main_video3_pane_g2

0x0001,

0xf862,	// (0x0001d400) main_video3_pane_g_ParamLimits

0xf862,	// (0x0001d400) main_video3_pane_g

0xc963,	// (0x0001a501) main_video3_pane_t1_ParamLimits

0xc963,	// (0x0001a501) main_video3_pane_t1

0xc98e,	// (0x0001a52c) main_video3_pane_t2_ParamLimits

0xc98e,	// (0x0001a52c) main_video3_pane_t2

0xc9b9,	// (0x0001a557) main_video3_pane_t3_ParamLimits

0xc9b9,	// (0x0001a557) main_video3_pane_t3

0x0002,

0xf867,	// (0x0001d405) main_video3_pane_t_ParamLimits

0xf867,	// (0x0001d405) main_video3_pane_t

0xc9e6,	// (0x0001a584) cams_zoom_vslider_pane_g1

0xc9ef,	// (0x0001a58d) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0001d40c) cams_zoom_vslider_pane_g

0xc9f7,	// (0x0001a595) small_slider_vertical_pane

0xc22c,	// (0x00019dca) small_slider_vertical_pane_g1

0xc22c,	// (0x00019dca) small_slider_vertical_pane_g2

0xc9ff,	// (0x0001a59d) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0001d411) small_slider_vertical_pane_g

0x92f3,	// (0x00016e91) main_hwr_training_pane

0xca08,	// (0x0001a5a6) hwr_training_instruct_pane_ParamLimits

0xca08,	// (0x0001a5a6) hwr_training_instruct_pane

0x5785,	// (0x00013323) hwr_training_navi_pane_ParamLimits

0x5785,	// (0x00013323) hwr_training_navi_pane

0x57a4,	// (0x00013342) hwr_training_write_pane_ParamLimits

0x57a4,	// (0x00013342) hwr_training_write_pane

0x92f3,	// (0x00016e91) bg_frame_shadow_pane

0xca3f,	// (0x0001a5dd) hwr_training_write_pane_g1

0xca47,	// (0x0001a5e5) hwr_training_write_pane_g2

0xca4f,	// (0x0001a5ed) hwr_training_write_pane_g3

0xca57,	// (0x0001a5f5) hwr_training_write_pane_g4

0xca5f,	// (0x0001a5fd) hwr_training_write_pane_g5

0xca67,	// (0x0001a605) hwr_training_write_pane_g6

0xca6f,	// (0x0001a60d) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0001d418) hwr_training_write_pane_g

0xca77,	// (0x0001a615) hwr_training_navi_pane_g1_ParamLimits

0xca77,	// (0x0001a615) hwr_training_navi_pane_g1

0xca89,	// (0x0001a627) hwr_training_navi_pane_g2_ParamLimits

0xca89,	// (0x0001a627) hwr_training_navi_pane_g2

0xca9b,	// (0x0001a639) hwr_training_navi_pane_g3_ParamLimits

0xca9b,	// (0x0001a639) hwr_training_navi_pane_g3

0xcaab,	// (0x0001a649) hwr_training_navi_pane_g4_ParamLimits

0xcaab,	// (0x0001a649) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x0001d427) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x0001d427) hwr_training_navi_pane_g

0xcac6,	// (0x0001a664) hwr_training_navi_pane_t1

0x57ec,	// (0x0001338a) list_single_hwr_training_instruct_pane_ParamLimits

0x57ec,	// (0x0001338a) list_single_hwr_training_instruct_pane

0xcad4,	// (0x0001a672) list_single_hwr_training_instruct_pane_t1

0xc16c,	// (0x00019d0a) bg_frame_shadow_pane_g1

0xcae3,	// (0x0001a681) bg_frame_shadow_pane_g2

0xcaeb,	// (0x0001a689) bg_frame_shadow_pane_g3

0xcaf3,	// (0x0001a691) bg_frame_shadow_pane_g4

0xcafb,	// (0x0001a699) bg_frame_shadow_pane_g5

0xcb03,	// (0x0001a6a1) bg_frame_shadow_pane_g6

0xcb0b,	// (0x0001a6a9) bg_frame_shadow_pane_g7

0x9bb1,	// (0x0001774f) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x0001d432) bg_frame_shadow_pane_g

0x92f3,	// (0x00016e91) main_video_tele_dialer_pane

0x5801,	// (0x0001339f) aid_size_cell_video_keypad_ParamLimits

0x5801,	// (0x0001339f) aid_size_cell_video_keypad

0x581b,	// (0x000133b9) grid_video_dialer_keypad_pane_ParamLimits

0x581b,	// (0x000133b9) grid_video_dialer_keypad_pane

0x5865,	// (0x00013403) video_down_pane_cp_ParamLimits

0x5865,	// (0x00013403) video_down_pane_cp

0x5875,	// (0x00013413) cell_video_dialer_keypad_pane_ParamLimits

0x5875,	// (0x00013413) cell_video_dialer_keypad_pane

0xcb2f,	// (0x0001a6cd) bg_button_pane_cp08_ParamLimits

0xcb2f,	// (0x0001a6cd) bg_button_pane_cp08

0x5897,	// (0x00013435) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5897,	// (0x00013435) cell_video_dialer_keypad_pane_g1

0x4f81,	// (0x00012b1f) mup3_rocker2_pane_ParamLimits

0x4f81,	// (0x00012b1f) mup3_rocker2_pane

0xc22c,	// (0x00019dca) mup3_rocker2_pane_g1

0x3a80,	// (0x0001161e) main_dialer2_pane

0x92f3,	// (0x00016e91) main_mp4_pane

0xcb43,	// (0x0001a6e1) main_mp4_pane_g1_ParamLimits

0xcb43,	// (0x0001a6e1) main_mp4_pane_g1

0xcb43,	// (0x0001a6e1) main_mp4_pane_g2_ParamLimits

0xcb43,	// (0x0001a6e1) main_mp4_pane_g2

0x58d1,	// (0x0001346f) main_mp4_pane_g3_ParamLimits

0x58d1,	// (0x0001346f) main_mp4_pane_g3

0xcb51,	// (0x0001a6ef) main_mp4_pane_g4_ParamLimits

0xcb51,	// (0x0001a6ef) main_mp4_pane_g4

0xcb79,	// (0x0001a717) main_mp4_pane_g5_ParamLimits

0xcb79,	// (0x0001a717) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0001d452) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0001d452) main_mp4_pane_g

0xcbc9,	// (0x0001a767) main_mp4_pane_t1_ParamLimits

0xcbc9,	// (0x0001a767) main_mp4_pane_t1

0xcc25,	// (0x0001a7c3) main_mp4_pane_t2_ParamLimits

0xcc25,	// (0x0001a7c3) main_mp4_pane_t2

0xcc77,	// (0x0001a815) main_mp4_pane_t3_ParamLimits

0xcc77,	// (0x0001a815) main_mp4_pane_t3

0xcc97,	// (0x0001a835) main_mp4_pane_t4_ParamLimits

0xcc97,	// (0x0001a835) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x0001d45f) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x0001d45f) main_mp4_pane_t

0xccdb,	// (0x0001a879) mp4_progress_pane_ParamLimits

0xccdb,	// (0x0001a879) mp4_progress_pane

0xcd25,	// (0x0001a8c3) mp4_rocker_pane_ParamLimits

0xcd25,	// (0x0001a8c3) mp4_rocker_pane

0xcd4d,	// (0x0001a8eb) mp4_progress_pane_t1

0xcd66,	// (0x0001a904) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x0001d468) mp4_progress_pane_t

0xcd7f,	// (0x0001a91d) mup_progress_pane_cp04

0xc22c,	// (0x00019dca) mp4_rocker_pane_g1

0x590d,	// (0x000134ab) aid_cell_size_keypad2_ParamLimits

0x590d,	// (0x000134ab) aid_cell_size_keypad2

0x5923,	// (0x000134c1) dialer2_ne_pane_ParamLimits

0x5923,	// (0x000134c1) dialer2_ne_pane

0x593d,	// (0x000134db) grid_dialer2_keypad_pane_ParamLimits

0x593d,	// (0x000134db) grid_dialer2_keypad_pane

0xc011,	// (0x00019baf) bg_popup_call_pane_cp07_ParamLimits

0xc011,	// (0x00019baf) bg_popup_call_pane_cp07

0x5959,	// (0x000134f7) dialer2_ne_pane_t1_ParamLimits

0x5959,	// (0x000134f7) dialer2_ne_pane_t1

0x5994,	// (0x00013532) cell_dialer2_keypad_pane_ParamLimits

0x5994,	// (0x00013532) cell_dialer2_keypad_pane

0xcd9d,	// (0x0001a93b) bg_button_pane_pane_cp04_ParamLimits

0xcd9d,	// (0x0001a93b) bg_button_pane_pane_cp04

0x59b6,	// (0x00013554) cell_dialer2_keypad_pane_g1_ParamLimits

0x59b6,	// (0x00013554) cell_dialer2_keypad_pane_g1

0x1aaa,	// (0x0000f648) aid_placing_vt_set_content_ParamLimits

0x1aaa,	// (0x0000f648) aid_placing_vt_set_content

0x1ad2,	// (0x0000f670) aid_placing_vt_set_title_ParamLimits

0x1ad2,	// (0x0000f670) aid_placing_vt_set_title

0x92f3,	// (0x00016e91) main_image3_pane

0x5a7c,	// (0x0001361a) area_side_right_pane_cp01_ParamLimits

0x5a7c,	// (0x0001361a) area_side_right_pane_cp01

0xcb43,	// (0x0001a6e1) main_image3_pane_g1_ParamLimits

0xcb43,	// (0x0001a6e1) main_image3_pane_g1

0x5a93,	// (0x00013631) main_image3_pane_g2_ParamLimits

0x5a93,	// (0x00013631) main_image3_pane_g2

0x5abb,	// (0x00013659) main_image3_pane_g3_ParamLimits

0x5abb,	// (0x00013659) main_image3_pane_g3

0x5ae5,	// (0x00013683) main_image3_pane_g4_ParamLimits

0x5ae5,	// (0x00013683) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x0001d477) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x0001d477) main_image3_pane_g

0x5b0f,	// (0x000136ad) main_image3_pane_t1_ParamLimits

0x5b0f,	// (0x000136ad) main_image3_pane_t1

0x5b67,	// (0x00013705) main_image3_pane_t2_ParamLimits

0x5b67,	// (0x00013705) main_image3_pane_t2

0x5bb9,	// (0x00013757) main_image3_pane_t3_ParamLimits

0x5bb9,	// (0x00013757) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0001d480) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0001d480) main_image3_pane_t

0x9363,	// (0x00016f01) grid_sctrl_middle_pane_cp01_ParamLimits

0x9363,	// (0x00016f01) grid_sctrl_middle_pane_cp01

0x5c41,	// (0x000137df) cell_sctrl_middle_pane_cp01_ParamLimits

0x5c41,	// (0x000137df) cell_sctrl_middle_pane_cp01

0x5c5e,	// (0x000137fc) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5c5e,	// (0x000137fc) cell_sctrl_middle_pane_cp01_g1

0x92f3,	// (0x00016e91) main_call4_pane

0x5c74,	// (0x00013812) aid_size_button_call4_ParamLimits

0x5c74,	// (0x00013812) aid_size_button_call4

0x5ca5,	// (0x00013843) call4_windows_pane_ParamLimits

0x5ca5,	// (0x00013843) call4_windows_pane

0x5cc5,	// (0x00013863) grid_call4_button_pane_ParamLimits

0x5cc5,	// (0x00013863) grid_call4_button_pane

0xcddb,	// (0x0001a979) call4_windows_conf_pane

0xcdf2,	// (0x0001a990) popup_call4_audio_first_window_ParamLimits

0xcdf2,	// (0x0001a990) popup_call4_audio_first_window

0xce3e,	// (0x0001a9dc) popup_call4_audio_second_window_ParamLimits

0xce3e,	// (0x0001a9dc) popup_call4_audio_second_window

0xce52,	// (0x0001a9f0) popup_call4_audio_wait_window_ParamLimits

0xce52,	// (0x0001a9f0) popup_call4_audio_wait_window

0x5cf2,	// (0x00013890) cell_call4_button_pane_ParamLimits

0x5cf2,	// (0x00013890) cell_call4_button_pane

0x5d1b,	// (0x000138b9) bg_button_pane_cp09_ParamLimits

0x5d1b,	// (0x000138b9) bg_button_pane_cp09

0x5d27,	// (0x000138c5) cell_call4_button_pane_g1_ParamLimits

0x5d27,	// (0x000138c5) cell_call4_button_pane_g1

0x5d4d,	// (0x000138eb) cell_call4_button_pane_t1_ParamLimits

0x5d4d,	// (0x000138eb) cell_call4_button_pane_t1

0xce9a,	// (0x0001aa38) popup_call4_audio_conf_window_ParamLimits

0xce9a,	// (0x0001aa38) popup_call4_audio_conf_window

0x4fe1,	// (0x00012b7f) mup3_progress_pane_t1_ParamLimits

0x5000,	// (0x00012b9e) mup3_progress_pane_t2_ParamLimits

0xc51f,	// (0x0001a0bd) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0001d359) mup3_progress_pane_t_ParamLimits

0xc53c,	// (0x0001a0da) mup_progress_pane_cp03_ParamLimits

0x55cb,	// (0x00013169) mup3_control_keys_pane_g4_copy1

0xcd09,	// (0x0001a8a7) mp4_rocker2_pane_ParamLimits

0xcd09,	// (0x0001a8a7) mp4_rocker2_pane

0xceae,	// (0x0001aa4c) mp4_rocker2_pane_g1

0xceb6,	// (0x0001aa54) mp4_rocker2_pane_g2

0xcebe,	// (0x0001aa5c) mp4_rocker2_pane_g3

0xcec6,	// (0x0001aa64) mp4_rocker2_pane_g4

0xcece,	// (0x0001aa6c) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0001d489) mp4_rocker2_pane_g

0x92f3,	// (0x00016e91) main_camera4_pane

0x92f3,	// (0x00016e91) main_video4_pane

0x5833,	// (0x000133d1) main_video_tele_dialer_pane_t1_ParamLimits

0x5833,	// (0x000133d1) main_video_tele_dialer_pane_t1

0x584c,	// (0x000133ea) main_video_tele_dialer_pane_t2_ParamLimits

0x584c,	// (0x000133ea) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x0001d443) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x0001d443) main_video_tele_dialer_pane_t

0x5d8b,	// (0x00013929) cam4_autofocus_pane_ParamLimits

0x5d8b,	// (0x00013929) cam4_autofocus_pane

0x5da1,	// (0x0001393f) cam4_image_uncrop_pane_ParamLimits

0x5da1,	// (0x0001393f) cam4_image_uncrop_pane

0x5dbb,	// (0x00013959) cam4_indicators_pane_ParamLimits

0x5dbb,	// (0x00013959) cam4_indicators_pane

0x5de6,	// (0x00013984) main_camera4_pane_g1_ParamLimits

0x5de6,	// (0x00013984) main_camera4_pane_g1

0x5df9,	// (0x00013997) main_camera4_pane_g2_ParamLimits

0x5df9,	// (0x00013997) main_camera4_pane_g2

0x5e0c,	// (0x000139aa) main_camera4_pane_g3_ParamLimits

0x5e0c,	// (0x000139aa) main_camera4_pane_g3

0x5e1f,	// (0x000139bd) main_camera4_pane_g4_ParamLimits

0x5e1f,	// (0x000139bd) main_camera4_pane_g4

0x5e32,	// (0x000139d0) main_camera4_pane_g5_ParamLimits

0x5e32,	// (0x000139d0) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0001d494) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0001d494) main_camera4_pane_g

0x5e56,	// (0x000139f4) main_camera4_pane_t1_ParamLimits

0x5e56,	// (0x000139f4) main_camera4_pane_t1

0xc498,	// (0x0001a036) bg_tb_trans_pane_cp06

0xcefa,	// (0x0001aa98) cam4_indicators_pane_g1

0xcf0b,	// (0x0001aaa9) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0001d4af) cam4_indicators_pane_g

0xcf29,	// (0x0001aac7) cam4_indicators_pane_t1

0x5eba,	// (0x00013a58) main_video4_pane_g1_ParamLimits

0x5eba,	// (0x00013a58) main_video4_pane_g1

0x5ecd,	// (0x00013a6b) main_video4_pane_g2_ParamLimits

0x5ecd,	// (0x00013a6b) main_video4_pane_g2

0x5ee1,	// (0x00013a7f) main_video4_pane_g3_ParamLimits

0x5ee1,	// (0x00013a7f) main_video4_pane_g3

0x5ef5,	// (0x00013a93) main_video4_pane_g4_ParamLimits

0x5ef5,	// (0x00013a93) main_video4_pane_g4

0x0004,

0xf918,	// (0x0001d4b6) main_video4_pane_g_ParamLimits

0xf918,	// (0x0001d4b6) main_video4_pane_g

0x5f1d,	// (0x00013abb) vid4_indicators_pane_ParamLimits

0x5f1d,	// (0x00013abb) vid4_indicators_pane

0x5f4d,	// (0x00013aeb) video4_image_uncrop_cif_pane_ParamLimits

0x5f4d,	// (0x00013aeb) video4_image_uncrop_cif_pane

0x5f67,	// (0x00013b05) video4_image_uncrop_nhd_pane_ParamLimits

0x5f67,	// (0x00013b05) video4_image_uncrop_nhd_pane

0x5da1,	// (0x0001393f) video4_image_uncrop_vga_pane_ParamLimits

0x5da1,	// (0x0001393f) video4_image_uncrop_vga_pane

0xcab8,	// (0x0001a656) bg_tb_trans_pane_cp07

0x5f7b,	// (0x00013b19) vid4_indicators_pane_g1

0x5f88,	// (0x00013b26) vid4_indicators_pane_g2

0x5f95,	// (0x00013b33) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0001d4c1) vid4_indicators_pane_g

0x5fba,	// (0x00013b58) vid4_indicators_pane_t1

0x5fcc,	// (0x00013b6a) cam4_autofocus_pane_g1

0x5fd4,	// (0x00013b72) cam4_autofocus_pane_g2

0x5fdc,	// (0x00013b7a) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0001d4cc) cam4_autofocus_pane_g

0x5fe4,	// (0x00013b82) cam4_autofocus_pane_g3_copy1

0xcb13,	// (0x0001a6b1) video_down_pane_cp_t1

0xcb21,	// (0x0001a6bf) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0001d448) video_down_pane_cp_t

0x9363,	// (0x00016f01) popup_vitu2_window_ParamLimits

0x9363,	// (0x00016f01) popup_vitu2_window

0x5fec,	// (0x00013b8a) aid_size_cell2_itu2_ParamLimits

0x5fec,	// (0x00013b8a) aid_size_cell2_itu2

0x6012,	// (0x00013bb0) aid_size_cell_itu2_ParamLimits

0x6012,	// (0x00013bb0) aid_size_cell_itu2

0x606e,	// (0x00013c0c) bg_popup_window_pane_cp09_ParamLimits

0x606e,	// (0x00013c0c) bg_popup_window_pane_cp09

0x607c,	// (0x00013c1a) field_vitu2_entry_pane_ParamLimits

0x607c,	// (0x00013c1a) field_vitu2_entry_pane

0x60a2,	// (0x00013c40) grid_vitu2_function_pane_ParamLimits

0x60a2,	// (0x00013c40) grid_vitu2_function_pane

0x60f3,	// (0x00013c91) grid_vitu2_itu_pane_ParamLimits

0x60f3,	// (0x00013c91) grid_vitu2_itu_pane

0x6186,	// (0x00013d24) cell_vitu2_itu_pane_ParamLimits

0x6186,	// (0x00013d24) cell_vitu2_itu_pane

0x61aa,	// (0x00013d48) cell_vitu2_function_pane_ParamLimits

0x61aa,	// (0x00013d48) cell_vitu2_function_pane

0xcf55,	// (0x0001aaf3) bg_popup_call_pane_cp08_ParamLimits

0xcf55,	// (0x0001aaf3) bg_popup_call_pane_cp08

0xcf6e,	// (0x0001ab0c) field_vitu2_entry_pane_g1

0xcf7a,	// (0x0001ab18) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0001d4d3) field_vitu2_entry_pane_g

0xcf94,	// (0x0001ab32) field_vitu2_entry_pane_t1_ParamLimits

0xcf94,	// (0x0001ab32) field_vitu2_entry_pane_t1

0xcfc3,	// (0x0001ab61) field_vitu2_entry_pane_t2_ParamLimits

0xcfc3,	// (0x0001ab61) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0001d4da) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0001d4da) field_vitu2_entry_pane_t

0x61e9,	// (0x00013d87) bg_button_pane_cp010_ParamLimits

0x61e9,	// (0x00013d87) bg_button_pane_cp010

0x61f7,	// (0x00013d95) cell_vitu2_itu_pane_g1

0x6215,	// (0x00013db3) cell_vitu2_itu_pane_t1_ParamLimits

0x6215,	// (0x00013db3) cell_vitu2_itu_pane_t1

0x627b,	// (0x00013e19) cell_vitu2_itu_pane_t2_ParamLimits

0x627b,	// (0x00013e19) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x0001d4e4) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x0001d4e4) cell_vitu2_itu_pane_t

0x9363,	// (0x00016f01) bg_button_pane_cp011

0x6357,	// (0x00013ef5) cell_vitu2_function_pane_g1

0x92f3,	// (0x00016e91) main_myfav_hc_pane

0x5c09,	// (0x000137a7) popup_image3_note_pane_ParamLimits

0x5c09,	// (0x000137a7) popup_image3_note_pane

0x5c25,	// (0x000137c3) popup_image3_tool_bar_pane_ParamLimits

0x5c25,	// (0x000137c3) popup_image3_tool_bar_pane

0x62ff,	// (0x00013e9d) cell_vitu2_itu_pane_t3_ParamLimits

0x62ff,	// (0x00013e9d) cell_vitu2_itu_pane_t3

0x92f3,	// (0x00016e91) bg_popup_trans_pane

0xcfe8,	// (0x0001ab86) grid_image3_tool_bar_pane

0xcff2,	// (0x0001ab90) bg_popup_trans_pane_g1

0xa040,	// (0x00017bde) bg_popup_trans_pane_g2

0xcffa,	// (0x0001ab98) bg_popup_trans_pane_g3

0xd002,	// (0x0001aba0) bg_popup_trans_pane_g4

0xd00a,	// (0x0001aba8) bg_popup_trans_pane_g5

0xd012,	// (0x0001abb0) bg_popup_trans_pane_g6

0xd01a,	// (0x0001abb8) bg_popup_trans_pane_g7

0xd022,	// (0x0001abc0) bg_popup_trans_pane_g8

0xa020,	// (0x00017bbe) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0001d4eb) bg_popup_trans_pane_g

0xd02a,	// (0x0001abc8) cell_image3_tool_bar_pane_ParamLimits

0xd02a,	// (0x0001abc8) cell_image3_tool_bar_pane

0xc22c,	// (0x00019dca) cell_image3_tool_bar_pane_g1

0x92f3,	// (0x00016e91) bg_popup_trans_pane_cp1

0xd03e,	// (0x0001abdc) popup_image3_note_pane_t1

0xd04c,	// (0x0001abea) popup_image3_note_pane_t2

0xd05a,	// (0x0001abf8) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0001d4fe) popup_image3_note_pane_t

0xd068,	// (0x0001ac06) popup_image3_note_pane_t3_copy1

0x636b,	// (0x00013f09) bg_myfav_hc_instruction_pane_ParamLimits

0x636b,	// (0x00013f09) bg_myfav_hc_instruction_pane

0x637f,	// (0x00013f1d) cell_myfav_contact_pane_ParamLimits

0x637f,	// (0x00013f1d) cell_myfav_contact_pane

0x639d,	// (0x00013f3b) cell_myfav_contact_pane_cp1_ParamLimits

0x639d,	// (0x00013f3b) cell_myfav_contact_pane_cp1

0x63b5,	// (0x00013f53) cell_myfav_contact_pane_cp2_ParamLimits

0x63b5,	// (0x00013f53) cell_myfav_contact_pane_cp2

0x63cd,	// (0x00013f6b) cell_myfav_contact_pane_cp3_ParamLimits

0x63cd,	// (0x00013f6b) cell_myfav_contact_pane_cp3

0x63e4,	// (0x00013f82) cell_myfav_contact_pane_cp4_ParamLimits

0x63e4,	// (0x00013f82) cell_myfav_contact_pane_cp4

0x63fc,	// (0x00013f9a) cell_myfav_contact_pane_cp5_ParamLimits

0x63fc,	// (0x00013f9a) cell_myfav_contact_pane_cp5

0x6410,	// (0x00013fae) cell_myfav_contact_pane_cp6_ParamLimits

0x6410,	// (0x00013fae) cell_myfav_contact_pane_cp6

0x6426,	// (0x00013fc4) cell_myfav_contact_pane_cp7_ParamLimits

0x6426,	// (0x00013fc4) cell_myfav_contact_pane_cp7

0xd076,	// (0x0001ac14) listscroll_gen_pane_cp05

0x6440,	// (0x00013fde) main_myfav_hc_pane_g1_ParamLimits

0x6440,	// (0x00013fde) main_myfav_hc_pane_g1

0x645a,	// (0x00013ff8) main_myfav_hc_pane_g2_ParamLimits

0x645a,	// (0x00013ff8) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x0001d505) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x0001d505) main_myfav_hc_pane_g

0x648c,	// (0x0001402a) main_myfav_hc_pane_t1_ParamLimits

0x648c,	// (0x0001402a) main_myfav_hc_pane_t1

0xd07f,	// (0x0001ac1d) main_myfav_hc_pane_t2_ParamLimits

0xd07f,	// (0x0001ac1d) main_myfav_hc_pane_t2

0xd091,	// (0x0001ac2f) main_myfav_hc_pane_t3_ParamLimits

0xd091,	// (0x0001ac2f) main_myfav_hc_pane_t3

0x64a3,	// (0x00014041) main_myfav_hc_pane_t4_ParamLimits

0x64a3,	// (0x00014041) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0001d50c) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0001d50c) main_myfav_hc_pane_t

0xc22c,	// (0x00019dca) bg_myfav_hc_instruction_pane_g1

0xd0a3,	// (0x0001ac41) cell_myfav_contact_pane_g1_ParamLimits

0xd0a3,	// (0x0001ac41) cell_myfav_contact_pane_g1

0xd0a3,	// (0x0001ac41) cell_myfav_contact_pane_g2_ParamLimits

0xd0a3,	// (0x0001ac41) cell_myfav_contact_pane_g2

0xd0af,	// (0x0001ac4d) cell_myfav_contact_pane_g3_ParamLimits

0xd0af,	// (0x0001ac4d) cell_myfav_contact_pane_g3

0xc509,	// (0x0001a0a7) cell_myfav_contact_pane_g4_ParamLimits

0xc509,	// (0x0001a0a7) cell_myfav_contact_pane_g4

0xd0bc,	// (0x0001ac5a) cell_myfav_contact_pane_g5_ParamLimits

0xd0bc,	// (0x0001ac5a) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x0001d517) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x0001d517) cell_myfav_contact_pane_g

0x6474,	// (0x00014012) main_myfav_hc_pane_g3_ParamLimits

0x6474,	// (0x00014012) main_myfav_hc_pane_g3

0x0d08,	// (0x0000e8a6) popup_adpt_find_window

0x64cb,	// (0x00014069) afind_page_pane_ParamLimits

0x64cb,	// (0x00014069) afind_page_pane

0x64e0,	// (0x0001407e) aid_size_cell_afind_ParamLimits

0x64e0,	// (0x0001407e) aid_size_cell_afind

0x64fe,	// (0x0001409c) bg_popup_sub_pane_cp09_ParamLimits

0x64fe,	// (0x0001409c) bg_popup_sub_pane_cp09

0x650b,	// (0x000140a9) find_pane_cp01_ParamLimits

0x650b,	// (0x000140a9) find_pane_cp01

0xd0c8,	// (0x0001ac66) grid_afind_control_pane_ParamLimits

0xd0c8,	// (0x0001ac66) grid_afind_control_pane

0x6518,	// (0x000140b6) grid_afind_pane_ParamLimits

0x6518,	// (0x000140b6) grid_afind_pane

0x653a,	// (0x000140d8) cell_afind_pane_ParamLimits

0x653a,	// (0x000140d8) cell_afind_pane

0xc22c,	// (0x00019dca) afind_page_pane_g1

0x659b,	// (0x00014139) afind_page_pane_g2

0x65a4,	// (0x00014142) afind_page_pane_g3

0x0002,

0xf984,	// (0x0001d522) afind_page_pane_g

0x65ad,	// (0x0001414b) afind_page_pane_t1

0xd0dc,	// (0x0001ac7a) cell_afind_grid_control_pane_ParamLimits

0xd0dc,	// (0x0001ac7a) cell_afind_grid_control_pane

0xcd9d,	// (0x0001a93b) bg_button_pane_cp69_ParamLimits

0xcd9d,	// (0x0001a93b) bg_button_pane_cp69

0x65cd,	// (0x0001416b) cell_afind_pane_g1_ParamLimits

0x65cd,	// (0x0001416b) cell_afind_pane_g1

0x65da,	// (0x00014178) cell_afind_pane_t1_ParamLimits

0x65da,	// (0x00014178) cell_afind_pane_t1

0x9d99,	// (0x00017937) bg_button_pane_cp72

0xd0eb,	// (0x0001ac89) cell_afind_grid_control_pane_g1

0x3540,	// (0x000110de) aid_image_placing_area_ParamLimits

0x3540,	// (0x000110de) aid_image_placing_area

0xc808,	// (0x0001a3a6) field_vitu_entry_pane_g1_ParamLimits

0xc808,	// (0x0001a3a6) field_vitu_entry_pane_g1

0xc814,	// (0x0001a3b2) field_vitu_entry_pane_g2_ParamLimits

0xc814,	// (0x0001a3b2) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0001d3d3) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0001d3d3) field_vitu_entry_pane_g

0x5692,	// (0x00013230) cell_vitu_itu_pane_g1_ParamLimits

0x56d4,	// (0x00013272) cell_vitu_itu_pane_t3_ParamLimits

0x56d4,	// (0x00013272) cell_vitu_itu_pane_t3

0xcd4d,	// (0x0001a8eb) mp4_progress_pane_t1_ParamLimits

0xcd66,	// (0x0001a904) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x0001d468) mp4_progress_pane_t_ParamLimits

0xcd7f,	// (0x0001a91d) mup_progress_pane_cp04_ParamLimits

0x64b7,	// (0x00014055) main_myfav_hc_pane_t5_ParamLimits

0x64b7,	// (0x00014055) main_myfav_hc_pane_t5

0x9319,	// (0x00016eb7) aid_zoom_text_primary

0x0d08,	// (0x0000e8a6) popup_adpt_find_window_ParamLimits

0x9363,	// (0x00016f01) main_cam_set_pane

0x5dd2,	// (0x00013970) cam4_zoom_pane_ParamLimits

0x5dd2,	// (0x00013970) cam4_zoom_pane

0x65ec,	// (0x0001418a) main_cam_set_pane_g1_ParamLimits

0x65ec,	// (0x0001418a) main_cam_set_pane_g1

0x65fa,	// (0x00014198) main_cam_set_pane_g2_ParamLimits

0x65fa,	// (0x00014198) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x0001d529) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x0001d529) main_cam_set_pane_g

0x661b,	// (0x000141b9) main_cam_set_pane_t1_ParamLimits

0x661b,	// (0x000141b9) main_cam_set_pane_t1

0x6636,	// (0x000141d4) main_cset_listscroll_pane_ParamLimits

0x6636,	// (0x000141d4) main_cset_listscroll_pane

0x6656,	// (0x000141f4) main_cset_slider_pane_ParamLimits

0x6656,	// (0x000141f4) main_cset_slider_pane

0xd0fc,	// (0x0001ac9a) main_cset_list_pane_ParamLimits

0xd0fc,	// (0x0001ac9a) main_cset_list_pane

0xd10c,	// (0x0001acaa) scroll_pane_cp028

0x667c,	// (0x0001421a) aid_area_touch_slider

0x6698,	// (0x00014236) cset_slider_pane

0x66c2,	// (0x00014260) main_cset_slider_pane_g1

0x66d7,	// (0x00014275) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x0001d52e) main_cset_slider_pane_g

0xd145,	// (0x0001ace3) main_cset_slider_pane_t1

0x6793,	// (0x00014331) main_cset_slider_pane_t2

0x67ad,	// (0x0001434b) main_cset_slider_pane_t3

0x67c7,	// (0x00014365) main_cset_slider_pane_t4

0x67e1,	// (0x0001437f) main_cset_slider_pane_t5

0x67fb,	// (0x00014399) main_cset_slider_pane_t6

0x6810,	// (0x000143ae) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x0001d553) main_cset_slider_pane_t

0x6914,	// (0x000144b2) cset_list_set_pane_ParamLimits

0x6914,	// (0x000144b2) cset_list_set_pane

0x6926,	// (0x000144c4) aid_position_infowindow_above

0x692e,	// (0x000144cc) aid_position_infowindow_below

0xd1e5,	// (0x0001ad83) cset_list_set_pane_g1_ParamLimits

0xd1e5,	// (0x0001ad83) cset_list_set_pane_g1

0xd1f1,	// (0x0001ad8f) cset_list_set_pane_g3_ParamLimits

0xd1f1,	// (0x0001ad8f) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0001d572) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0001d572) cset_list_set_pane_g

0xd200,	// (0x0001ad9e) cset_list_set_pane_t1_ParamLimits

0xd200,	// (0x0001ad9e) cset_list_set_pane_t1

0x9363,	// (0x00016f01) list_highlight_pane_cp021_ParamLimits

0x9363,	// (0x00016f01) list_highlight_pane_cp021

0xa9bf,	// (0x0001855d) cset_slider_pane_g1

0xa9d1,	// (0x0001856f) cset_slider_pane_g2

0xa9c8,	// (0x00018566) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x0001d577) cset_slider_pane_g

0xd215,	// (0x0001adb3) aid_area_touch_cam4_zoom

0xd21d,	// (0x0001adbb) cam4_zoom_cont_pane

0xd225,	// (0x0001adc3) cam4_zoom_pane_g1

0xd22d,	// (0x0001adcb) cam4_zoom_pane_g2

0x6936,	// (0x000144d4) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x0001d57e) cam4_zoom_pane_g

0xd235,	// (0x0001add3) cam4_zoom_cont_pane_g1

0xd23e,	// (0x0001addc) cam4_zoom_cont_pane_g2

0xd247,	// (0x0001ade5) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x0001d585) cam4_zoom_cont_pane_g

0x5c92,	// (0x00013830) call4_image_pane_ParamLimits

0x5c92,	// (0x00013830) call4_image_pane

0xcddb,	// (0x0001a979) call4_windows_conf_pane_ParamLimits

0xce1c,	// (0x0001a9ba) popup_call4_audio_in_window_ParamLimits

0xce1c,	// (0x0001a9ba) popup_call4_audio_in_window

0x92f3,	// (0x00016e91) bg_popup_call2_act_pane_cp02

0xce92,	// (0x0001aa30) call4_list_conf_pane

0xc22c,	// (0x00019dca) call4_image_pane_g1

0xc22c,	// (0x00019dca) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0001d299) call4_image_pane_g

0xd250,	// (0x0001adee) list_single_graphic_popup_conf4_pane_ParamLimits

0xd250,	// (0x0001adee) list_single_graphic_popup_conf4_pane

0x92f3,	// (0x00016e91) list_highlight_pane_cp022

0xd263,	// (0x0001ae01) list_single_graphic_popup_conf4_pane_g1

0xa67e,	// (0x0001821c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x0001d58c) list_single_graphic_popup_conf4_pane_g

0xd26b,	// (0x0001ae09) list_single_graphic_popup_conf4_pane_t1

0x1bf6,	// (0x0000f794) popup_vtel_slider_window_ParamLimits

0x1bf6,	// (0x0000f794) popup_vtel_slider_window

0xcd8b,	// (0x0001a929) dialer2_ne_pane_t2_ParamLimits

0xcd8b,	// (0x0001a929) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0001d46d) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0001d46d) dialer2_ne_pane_t

0xc011,	// (0x00019baf) bg_popup_sub_pane_cp010_ParamLimits

0xc011,	// (0x00019baf) bg_popup_sub_pane_cp010

0x693e,	// (0x000144dc) popup_vtel_slider_window_g1_ParamLimits

0x693e,	// (0x000144dc) popup_vtel_slider_window_g1

0x6951,	// (0x000144ef) popup_vtel_slider_window_g2_ParamLimits

0x6951,	// (0x000144ef) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0001d591) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0001d591) popup_vtel_slider_window_g

0x69a7,	// (0x00014545) vtel_slider_pane_ParamLimits

0x69a7,	// (0x00014545) vtel_slider_pane

0x69c9,	// (0x00014567) vtel_slider_pane_g1_ParamLimits

0x69c9,	// (0x00014567) vtel_slider_pane_g1

0x69dd,	// (0x0001457b) vtel_slider_pane_g2_ParamLimits

0x69dd,	// (0x0001457b) vtel_slider_pane_g2

0x69f5,	// (0x00014593) vtel_slider_pane_g3_ParamLimits

0x69f5,	// (0x00014593) vtel_slider_pane_g3

0x69c9,	// (0x00014567) vtel_slider_pane_g4_ParamLimits

0x69c9,	// (0x00014567) vtel_slider_pane_g4

0x6a0b,	// (0x000145a9) vtel_slider_pane_g5_ParamLimits

0x6a0b,	// (0x000145a9) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x0001d59a) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x0001d59a) vtel_slider_pane_g

0x92f3,	// (0x00016e91) main_gallery2_pane

0x603e,	// (0x00013bdc) aid_size_row_itut2_dropdow_list_ParamLimits

0x603e,	// (0x00013bdc) aid_size_row_itut2_dropdow_list

0x60ca,	// (0x00013c68) grid_vitu2_function_top_pane_ParamLimits

0x60ca,	// (0x00013c68) grid_vitu2_function_top_pane

0x612f,	// (0x00013ccd) popup_vitu2_dropdown_list_window_ParamLimits

0x612f,	// (0x00013ccd) popup_vitu2_dropdown_list_window

0x6158,	// (0x00013cf6) popup_vitu2_match_list_window

0x6a21,	// (0x000145bf) cell_vitu2_function_top_pane_ParamLimits

0x6a21,	// (0x000145bf) cell_vitu2_function_top_pane

0x6a3f,	// (0x000145dd) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6a3f,	// (0x000145dd) cell_vitu2_function_top_pane_cp01

0x6a5d,	// (0x000145fb) cell_vitu2_function_top_wide_pane_ParamLimits

0x6a5d,	// (0x000145fb) cell_vitu2_function_top_wide_pane

0x9363,	// (0x00016f01) bg_button_pane_cp012

0x6a7b,	// (0x00014619) cell_vitu2_function_top_pane_g1

0xd28f,	// (0x0001ae2d) bg_button_pane_cp013_ParamLimits

0xd28f,	// (0x0001ae2d) bg_button_pane_cp013

0x6a8f,	// (0x0001462d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6a8f,	// (0x0001462d) cell_vitu2_function_top_wide_pane_g1

0x9363,	// (0x00016f01) bg_popup_sub_pane_cp20

0x6aa7,	// (0x00014645) list_vitu2_match_list_pane

0xcff2,	// (0x0001ab90) bg_popup_sub_pane_cp20_g1

0xcffa,	// (0x0001ab98) bg_popup_sub_pane_cp20_g2

0xa040,	// (0x00017bde) bg_popup_sub_pane_cp20_g3

0xd002,	// (0x0001aba0) bg_popup_sub_pane_cp20_g4

0xa020,	// (0x00017bbe) bg_popup_sub_pane_cp20_g5

0xd2ab,	// (0x0001ae49) bg_popup_sub_pane_cp20_g6

0xd012,	// (0x0001abb0) bg_popup_sub_pane_cp20_g7

0xd01a,	// (0x0001abb8) bg_popup_sub_pane_cp20_g8

0xd022,	// (0x0001abc0) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x0001d5a5) bg_popup_sub_pane_cp20_g

0xd2b3,	// (0x0001ae51) list_vitu2_match_list_item_pane_ParamLimits

0xd2b3,	// (0x0001ae51) list_vitu2_match_list_item_pane

0xd2c5,	// (0x0001ae63) list_vitu2_match_list_item_pane_t1

0x92f3,	// (0x00016e91) bg_popup_sub_pane_cp21

0xa533,	// (0x000180d1) grid_vitu2_dropdown_list_pane

0x6afa,	// (0x00014698) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6afa,	// (0x00014698) cell_vitu2_dropdown_list_char_pane

0x6b1b,	// (0x000146b9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6b1b,	// (0x000146b9) cell_vitu2_dropdown_list_ctrl_pane

0xd2eb,	// (0x0001ae89) cell_vitu2_dropdown_list_char_pane_g1

0xd2f4,	// (0x0001ae92) cell_vitu2_dropdown_list_char_pane_g2

0xd2fd,	// (0x0001ae9b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x0001d5c2) cell_vitu2_dropdown_list_char_pane_g

0x6b47,	// (0x000146e5) cell_vitu2_dropdown_list_char_pane_t1

0x6b55,	// (0x000146f3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6b55,	// (0x000146f3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6b62,	// (0x00014700) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6b62,	// (0x00014700) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6b6f,	// (0x0001470d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6b6f,	// (0x0001470d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6b7c,	// (0x0001471a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6b7c,	// (0x0001471a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc498,	// (0x0001a036) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc498,	// (0x0001a036) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x0001d5c9) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x0001d5c9) cell_vitu2_dropdown_list_ctrl_pane_g

0x6b98,	// (0x00014736) aid_size_cell_gallery2_ParamLimits

0x6b98,	// (0x00014736) aid_size_cell_gallery2

0x6bae,	// (0x0001474c) grid_gallery2_pane_ParamLimits

0x6bae,	// (0x0001474c) grid_gallery2_pane

0x6bc2,	// (0x00014760) scroll_pane_cp029_ParamLimits

0x6bc2,	// (0x00014760) scroll_pane_cp029

0x6bce,	// (0x0001476c) cell_gallery2_pane_ParamLimits

0x6bce,	// (0x0001476c) cell_gallery2_pane

0xd306,	// (0x0001aea4) cell_gallery2_pane_g2

0x6c04,	// (0x000147a2) cell_gallery2_pane_g3

0xd310,	// (0x0001aeae) cell_gallery2_pane_g4

0xd318,	// (0x0001aeb6) cell_gallery2_pane_g5

0xa869,	// (0x00018407) grid_highlight_pane_cp10

0x6158,	// (0x00013cf6) popup_vitu2_match_list_window_ParamLimits

0x616f,	// (0x00013d0d) popup_vitu2_query_window_ParamLimits

0x616f,	// (0x00013d0d) popup_vitu2_query_window

0x92f3,	// (0x00016e91) bg_vitu2_candi_button_pane

0xd2eb,	// (0x0001ae89) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd2f4,	// (0x0001ae92) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd2fd,	// (0x0001ae9b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6c0c,	// (0x000147aa) bg_button_pane_cp015

0x6c1e,	// (0x000147bc) bg_button_pane_cp016

0x6c31,	// (0x000147cf) bg_button_pane_cp017

0xbd26,	// (0x000198c4) bg_popup_sub_pane_cp22

0xd320,	// (0x0001aebe) popup_vitu2_query_window_g1

0x6c76,	// (0x00014814) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x0001d5d4) popup_vitu2_query_window_g

0x6c95,	// (0x00014833) popup_vitu2_query_window_t1_ParamLimits

0x6c95,	// (0x00014833) popup_vitu2_query_window_t1

0x6cca,	// (0x00014868) popup_vitu2_query_window_t2_ParamLimits

0x6cca,	// (0x00014868) popup_vitu2_query_window_t2

0x6cdc,	// (0x0001487a) popup_vitu2_query_window_t3_ParamLimits

0x6cdc,	// (0x0001487a) popup_vitu2_query_window_t3

0x6d04,	// (0x000148a2) popup_vitu2_query_window_t4_ParamLimits

0x6d04,	// (0x000148a2) popup_vitu2_query_window_t4

0x6d25,	// (0x000148c3) popup_vitu2_query_window_t5_ParamLimits

0x6d25,	// (0x000148c3) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x0001d5db) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x0001d5db) popup_vitu2_query_window_t

0xd0f4,	// (0x0001ac92) main_cset_text_pane

0x667c,	// (0x0001421a) aid_area_touch_slider_ParamLimits

0x6698,	// (0x00014236) cset_slider_pane_ParamLimits

0x66c2,	// (0x00014260) main_cset_slider_pane_g1_ParamLimits

0x66d7,	// (0x00014275) main_cset_slider_pane_g2_ParamLimits

0xd115,	// (0x0001acb3) main_cset_slider_pane_g3_ParamLimits

0xd115,	// (0x0001acb3) main_cset_slider_pane_g3

0x66ec,	// (0x0001428a) main_cset_slider_pane_g4_ParamLimits

0x66ec,	// (0x0001428a) main_cset_slider_pane_g4

0x66fb,	// (0x00014299) main_cset_slider_pane_g5_ParamLimits

0x66fb,	// (0x00014299) main_cset_slider_pane_g5

0x6707,	// (0x000142a5) main_cset_slider_pane_g6_ParamLimits

0x6707,	// (0x000142a5) main_cset_slider_pane_g6

0xf990,	// (0x0001d52e) main_cset_slider_pane_g_ParamLimits

0xd145,	// (0x0001ace3) main_cset_slider_pane_t1_ParamLimits

0x6793,	// (0x00014331) main_cset_slider_pane_t2_ParamLimits

0x67ad,	// (0x0001434b) main_cset_slider_pane_t3_ParamLimits

0x67c7,	// (0x00014365) main_cset_slider_pane_t4_ParamLimits

0x67e1,	// (0x0001437f) main_cset_slider_pane_t5_ParamLimits

0x67fb,	// (0x00014399) main_cset_slider_pane_t6_ParamLimits

0x6810,	// (0x000143ae) main_cset_slider_pane_t7_ParamLimits

0x683a,	// (0x000143d8) main_cset_slider_pane_t8_ParamLimits

0x683a,	// (0x000143d8) main_cset_slider_pane_t8

0x6862,	// (0x00014400) main_cset_slider_pane_t9_ParamLimits

0x6862,	// (0x00014400) main_cset_slider_pane_t9

0x688a,	// (0x00014428) main_cset_slider_pane_t10_ParamLimits

0x688a,	// (0x00014428) main_cset_slider_pane_t10

0x68b2,	// (0x00014450) main_cset_slider_pane_t11_ParamLimits

0x68b2,	// (0x00014450) main_cset_slider_pane_t11

0x68da,	// (0x00014478) main_cset_slider_pane_t12_ParamLimits

0x68da,	// (0x00014478) main_cset_slider_pane_t12

0x68f7,	// (0x00014495) main_cset_slider_pane_t13_ParamLimits

0x68f7,	// (0x00014495) main_cset_slider_pane_t13

0xf9b5,	// (0x0001d553) main_cset_slider_pane_t_ParamLimits

0x92f3,	// (0x00016e91) bg_popup_sub_pane_cp011

0xd32c,	// (0x0001aeca) main_cset_text_pane_g1

0xd334,	// (0x0001aed2) main_cset_text_pane_t1

0xd342,	// (0x0001aee0) main_cset_text_pane_t2

0xd350,	// (0x0001aeee) main_cset_text_pane_t3

0xd35e,	// (0x0001aefc) main_cset_text_pane_t4

0xd36c,	// (0x0001af0a) main_cset_text_pane_t5

0xd37a,	// (0x0001af18) main_cset_text_pane_t6

0xd388,	// (0x0001af26) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x0001d5ea) main_cset_text_pane_t

0x92f3,	// (0x00016e91) main_cam4_burst_pane

0x92f3,	// (0x00016e91) main_cam5_pane

0x65bb,	// (0x00014159) bg_button_pane_cp019

0x65c4,	// (0x00014162) bg_button_pane_cp020

0xd121,	// (0x0001acbf) main_cset_slider_pane_g7_ParamLimits

0xd121,	// (0x0001acbf) main_cset_slider_pane_g7

0xd12d,	// (0x0001accb) main_cset_slider_pane_g8_ParamLimits

0xd12d,	// (0x0001accb) main_cset_slider_pane_g8

0x671b,	// (0x000142b9) main_cset_slider_pane_g9_ParamLimits

0x671b,	// (0x000142b9) main_cset_slider_pane_g9

0x6727,	// (0x000142c5) main_cset_slider_pane_g10_ParamLimits

0x6727,	// (0x000142c5) main_cset_slider_pane_g10

0x6733,	// (0x000142d1) main_cset_slider_pane_g11_ParamLimits

0x6733,	// (0x000142d1) main_cset_slider_pane_g11

0x673f,	// (0x000142dd) main_cset_slider_pane_g12_ParamLimits

0x673f,	// (0x000142dd) main_cset_slider_pane_g12

0x674b,	// (0x000142e9) main_cset_slider_pane_g13_ParamLimits

0x674b,	// (0x000142e9) main_cset_slider_pane_g13

0x6757,	// (0x000142f5) main_cset_slider_pane_g14_ParamLimits

0x6757,	// (0x000142f5) main_cset_slider_pane_g14

0x6763,	// (0x00014301) main_cset_slider_pane_g15_ParamLimits

0x6763,	// (0x00014301) main_cset_slider_pane_g15

0xd173,	// (0x0001ad11) main_cset_slider_pane_t14_ParamLimits

0xd173,	// (0x0001ad11) main_cset_slider_pane_t14

0xd1ac,	// (0x0001ad4a) main_cset_slider_pane_t15_ParamLimits

0xd1ac,	// (0x0001ad4a) main_cset_slider_pane_t15

0x6d9c,	// (0x0001493a) aid_cam4_burst_size_cell_ParamLimits

0x6d9c,	// (0x0001493a) aid_cam4_burst_size_cell

0x6dbc,	// (0x0001495a) grid_cam4_burst_pane_ParamLimits

0x6dbc,	// (0x0001495a) grid_cam4_burst_pane

0x6df4,	// (0x00014992) linegrid_cam4_burst_pane_ParamLimits

0x6df4,	// (0x00014992) linegrid_cam4_burst_pane

0xd396,	// (0x0001af34) scroll_pane_cp30_ParamLimits

0xd396,	// (0x0001af34) scroll_pane_cp30

0x6e18,	// (0x000149b6) cell_cam4_burst_pane_ParamLimits

0x6e18,	// (0x000149b6) cell_cam4_burst_pane

0xd3a2,	// (0x0001af40) linegrid_cam4_burst_pane_g1_ParamLimits

0xd3a2,	// (0x0001af40) linegrid_cam4_burst_pane_g1

0x6e65,	// (0x00014a03) linegrid_cam4_burst_pane_g2_ParamLimits

0x6e65,	// (0x00014a03) linegrid_cam4_burst_pane_g2

0xd3af,	// (0x0001af4d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd3af,	// (0x0001af4d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x0001d5f9) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0001d5f9) linegrid_cam4_burst_pane_g

0x6e76,	// (0x00014a14) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6e76,	// (0x00014a14) linegrid_cam4_burst_pane_g3_copy1

0xd3bc,	// (0x0001af5a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd3bc,	// (0x0001af5a) linegrid_cam4_burst_pane_g4

0x6e90,	// (0x00014a2e) linegrid_cam4_burst_pane_g5_ParamLimits

0x6e90,	// (0x00014a2e) linegrid_cam4_burst_pane_g5

0x6ea1,	// (0x00014a3f) linegrid_cam4_burst_pane_g6_ParamLimits

0x6ea1,	// (0x00014a3f) linegrid_cam4_burst_pane_g6

0xd3c9,	// (0x0001af67) linegrid_cam4_burst_pane_g7_ParamLimits

0xd3c9,	// (0x0001af67) linegrid_cam4_burst_pane_g7

0x6eb8,	// (0x00014a56) cell_cam4_burst_pane_g1

0xd3e2,	// (0x0001af80) main_cam5_pane_t1_ParamLimits

0xd3e2,	// (0x0001af80) main_cam5_pane_t1

0xd3f4,	// (0x0001af92) main_cam5_pane_t2_ParamLimits

0xd3f4,	// (0x0001af92) main_cam5_pane_t2

0xd406,	// (0x0001afa4) main_cam5_pane_t3_ParamLimits

0xd406,	// (0x0001afa4) main_cam5_pane_t3

0xd418,	// (0x0001afb6) main_cam5_pane_t4_ParamLimits

0xd418,	// (0x0001afb6) main_cam5_pane_t4

0xd430,	// (0x0001afce) main_cam5_pane_t5_ParamLimits

0xd430,	// (0x0001afce) main_cam5_pane_t5

0xd444,	// (0x0001afe2) main_cam5_pane_t6_ParamLimits

0xd444,	// (0x0001afe2) main_cam5_pane_t6

0xd458,	// (0x0001aff6) main_cam5_pane_t7_ParamLimits

0xd458,	// (0x0001aff6) main_cam5_pane_t7

0xd46a,	// (0x0001b008) main_cam5_pane_t8_ParamLimits

0xd46a,	// (0x0001b008) main_cam5_pane_t8

0xd486,	// (0x0001b024) main_cam5_pane_t9_ParamLimits

0xd486,	// (0x0001b024) main_cam5_pane_t9

0xd498,	// (0x0001b036) main_cam5_pane_t10_ParamLimits

0xd498,	// (0x0001b036) main_cam5_pane_t10

0xd4aa,	// (0x0001b048) main_cam5_pane_t11_ParamLimits

0xd4aa,	// (0x0001b048) main_cam5_pane_t11

0xd4bc,	// (0x0001b05a) main_cam5_pane_t12_ParamLimits

0xd4bc,	// (0x0001b05a) main_cam5_pane_t12

0xd4d1,	// (0x0001b06f) main_cam5_pane_t13_ParamLimits

0xd4d1,	// (0x0001b06f) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x0001d605) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x0001d605) main_cam5_pane_t

0x0d8a,	// (0x0000e928) popup_scut_keymap_window_ParamLimits

0x0d8a,	// (0x0000e928) popup_scut_keymap_window

0x6ecb,	// (0x00014a69) aid_size_cell_brow_shortcut

0xa869,	// (0x00018407) bg_popup_window_pane_cp010

0x6ed7,	// (0x00014a75) grid_scut_pane

0x6ee3,	// (0x00014a81) cell_scut_pane_ParamLimits

0x6ee3,	// (0x00014a81) cell_scut_pane

0x6efa,	// (0x00014a98) cell_scut_pane_g1

0xd4ee,	// (0x0001b08c) cell_scut_pane_t1

0xd4fd,	// (0x0001b09b) cell_scut_pane_t2

0x6f03,	// (0x00014aa1) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x0001d620) cell_scut_pane_t

0x4b9a,	// (0x00012738) main_mup3_pane_g8_ParamLimits

0x4b9a,	// (0x00012738) main_mup3_pane_g8

0x6056,	// (0x00013bf4) area_vitu2_query_pane_ParamLimits

0x6056,	// (0x00013bf4) area_vitu2_query_pane

0x6c44,	// (0x000147e2) input_focus_pane_cp08

0xd50c,	// (0x0001b0aa) area_vitu2_query_pane_g1

0x6f11,	// (0x00014aaf) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x0001d627) area_vitu2_query_pane_g

0x6f22,	// (0x00014ac0) area_vitu2_query_pane_t1_ParamLimits

0x6f22,	// (0x00014ac0) area_vitu2_query_pane_t1

0x6f36,	// (0x00014ad4) area_vitu2_query_pane_t2_ParamLimits

0x6f36,	// (0x00014ad4) area_vitu2_query_pane_t2

0x6f4a,	// (0x00014ae8) area_vitu2_query_pane_t3_ParamLimits

0x6f4a,	// (0x00014ae8) area_vitu2_query_pane_t3

0xd518,	// (0x0001b0b6) area_vitu2_query_pane_t4_ParamLimits

0xd518,	// (0x0001b0b6) area_vitu2_query_pane_t4

0xd540,	// (0x0001b0de) area_vitu2_query_pane_t5_ParamLimits

0xd540,	// (0x0001b0de) area_vitu2_query_pane_t5

0xd568,	// (0x0001b106) area_vitu2_query_pane_t6_ParamLimits

0xd568,	// (0x0001b106) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x0001d62c) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x0001d62c) area_vitu2_query_pane_t

0x6f72,	// (0x00014b10) bg_button_pane_cp018

0x6f80,	// (0x00014b1e) bg_button_pane_cp021

0x6f8c,	// (0x00014b2a) bg_button_pane_cp022

0x6f9b,	// (0x00014b39) input_focus_pane_cp09

0x2b5f,	// (0x000106fd) aid_size_touch_mv_arrow_left

0x2b88,	// (0x00010726) aid_size_touch_mv_arrow_right

0x677b,	// (0x00014319) main_cset_slider_pane_g16_ParamLimits

0x677b,	// (0x00014319) main_cset_slider_pane_g16

0x6787,	// (0x00014325) main_cset_slider_pane_g17_ParamLimits

0x6787,	// (0x00014325) main_cset_slider_pane_g17

0x6eb8,	// (0x00014a56) cell_cam4_burst_pane_g1_ParamLimits

0x92f3,	// (0x00016e91) compa_mode_pane

0x6961,	// (0x000144ff) popup_vtel_slider_window_g3_ParamLimits

0x6961,	// (0x000144ff) popup_vtel_slider_window_g3

0x6978,	// (0x00014516) popup_vtel_slider_window_g4_ParamLimits

0x6978,	// (0x00014516) popup_vtel_slider_window_g4

0x698f,	// (0x0001452d) popup_vtel_slider_window_t1_ParamLimits

0x698f,	// (0x0001452d) popup_vtel_slider_window_t1

0x92f3,	// (0x00016e91) main_cl_pane

0xbd4e,	// (0x000198ec) popup_imed_adjust2_window_ParamLimits

0xbd26,	// (0x000198c4) bg_tb_trans_pane_cp05_ParamLimits

0xc73d,	// (0x0001a2db) popup_imed_adjust2_window_g1_ParamLimits

0xc74c,	// (0x0001a2ea) popup_imed_adjust2_window_g2_ParamLimits

0xc74c,	// (0x0001a2ea) popup_imed_adjust2_window_g2

0xc758,	// (0x0001a2f6) popup_imed_adjust2_window_g3_ParamLimits

0xc758,	// (0x0001a2f6) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0001d397) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0001d397) popup_imed_adjust2_window_g

0xc764,	// (0x0001a302) popup_imed_adjust2_window_t1_ParamLimits

0xc77c,	// (0x0001a31a) slider_imed_adjust_pane_ParamLimits

0xc790,	// (0x0001a32e) slider_imed_adjust_pane_g1_ParamLimits

0xc7a0,	// (0x0001a33e) slider_imed_adjust_pane_g2_ParamLimits

0xc7b0,	// (0x0001a34e) slider_imed_adjust_pane_g3_ParamLimits

0xc7c1,	// (0x0001a35f) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0001d39e) slider_imed_adjust_pane_g_ParamLimits

0x5d73,	// (0x00013911) aid_touch_area_cam4_ParamLimits

0x5d73,	// (0x00013911) aid_touch_area_cam4

0xced6,	// (0x0001aa74) battery_pane_cp01

0x5e43,	// (0x000139e1) main_camera4_pane_g6_ParamLimits

0x5e43,	// (0x000139e1) main_camera4_pane_g6

0x5e6d,	// (0x00013a0b) main_camera4_pane_t2_ParamLimits

0x5e6d,	// (0x00013a0b) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0001d4a1) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0001d4a1) main_camera4_pane_t

0x5ea2,	// (0x00013a40) aid_touch_area_vid4_ParamLimits

0x5ea2,	// (0x00013a40) aid_touch_area_vid4

0x5f09,	// (0x00013aa7) main_video4_pane_g5_ParamLimits

0x5f09,	// (0x00013aa7) main_video4_pane_g5

0x5f34,	// (0x00013ad2) vid4_progress_pane_ParamLimits

0x5f34,	// (0x00013ad2) vid4_progress_pane

0xd139,	// (0x0001acd7) main_cset_slider_pane_g18_ParamLimits

0xd139,	// (0x0001acd7) main_cset_slider_pane_g18

0xd3d6,	// (0x0001af74) cell_cam4_burst_pane_g2_ParamLimits

0xd3d6,	// (0x0001af74) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x0001d600) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x0001d600) cell_cam4_burst_pane_g

0x9ad4,	// (0x00017672) bg_cl_pane_ParamLimits

0x9ad4,	// (0x00017672) bg_cl_pane

0x6faa,	// (0x00014b48) cl_header_pane_ParamLimits

0x6faa,	// (0x00014b48) cl_header_pane

0x6fbe,	// (0x00014b5c) cl_listscroll_pane_ParamLimits

0x6fbe,	// (0x00014b5c) cl_listscroll_pane

0xd5b4,	// (0x0001b152) bg_cl_pane_g1

0xd5bc,	// (0x0001b15a) bg_cl_pane_g2

0xd5c4,	// (0x0001b162) bg_cl_pane_g3

0xd5cc,	// (0x0001b16a) bg_cl_pane_g4

0xd5d4,	// (0x0001b172) bg_cl_pane_g5

0xd5dc,	// (0x0001b17a) bg_cl_pane_g6

0xd5e4,	// (0x0001b182) bg_cl_pane_g7

0xd5ec,	// (0x0001b18a) bg_cl_pane_g8

0xd5f4,	// (0x0001b192) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x0001d63b) bg_cl_pane_g

0x6fce,	// (0x00014b6c) aid_height_cl_leading_ParamLimits

0x6fce,	// (0x00014b6c) aid_height_cl_leading

0x6fda,	// (0x00014b78) aid_height_cl_text_ParamLimits

0x6fda,	// (0x00014b78) aid_height_cl_text

0x9363,	// (0x00016f01) bg_cl_header_pane_ParamLimits

0x9363,	// (0x00016f01) bg_cl_header_pane

0x6ff9,	// (0x00014b97) cl_header_pane_g1_ParamLimits

0x6ff9,	// (0x00014b97) cl_header_pane_g1

0x700f,	// (0x00014bad) cl_header_pane_t1_ParamLimits

0x700f,	// (0x00014bad) cl_header_pane_t1

0xd5fc,	// (0x0001b19a) cl_list_pane

0xd10c,	// (0x0001acaa) hc_scroll_pane_cp01

0xa020,	// (0x00017bbe) bg_cl_header_pane_g1

0xcff2,	// (0x0001ab90) bg_cl_header_pane_g2

0xa040,	// (0x00017bde) bg_cl_header_pane_g3

0xd002,	// (0x0001aba0) bg_cl_header_pane_g4

0xcffa,	// (0x0001ab98) bg_cl_header_pane_g5

0xd2ab,	// (0x0001ae49) bg_cl_header_pane_g6

0xd01a,	// (0x0001abb8) bg_cl_header_pane_g7

0xd022,	// (0x0001abc0) bg_cl_header_pane_g8

0xd012,	// (0x0001abb0) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x0001d64e) bg_cl_header_pane_g

0x7028,	// (0x00014bc6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7028,	// (0x00014bc6) hc_cl_list_double_graphic_heading_pane

0x7039,	// (0x00014bd7) hc_cl_list_single_graphic_pane_ParamLimits

0x7039,	// (0x00014bd7) hc_cl_list_single_graphic_pane

0x704f,	// (0x00014bed) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x704f,	// (0x00014bed) hc_cl_list_single_graphic_pane_g1

0x705b,	// (0x00014bf9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x705b,	// (0x00014bf9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x0001d661) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x0001d661) hc_cl_list_single_graphic_pane_g

0x706f,	// (0x00014c0d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x706f,	// (0x00014c0d) hc_cl_list_single_graphic_pane_t1

0x704f,	// (0x00014bed) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x704f,	// (0x00014bed) hc_cl_list_double_graphic_heading_pane_g1

0x7084,	// (0x00014c22) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7084,	// (0x00014c22) hc_cl_list_double_graphic_heading_pane_g2

0x7098,	// (0x00014c36) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7098,	// (0x00014c36) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x0001d666) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x0001d666) hc_cl_list_double_graphic_heading_pane_g

0x70ac,	// (0x00014c4a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x70ac,	// (0x00014c4a) hc_cl_list_double_graphic_heading_pane_t1

0x70c1,	// (0x00014c5f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x70c1,	// (0x00014c5f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x0001d66d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x0001d66d) hc_cl_list_double_graphic_heading_pane_t

0xd60d,	// (0x0001b1ab) vid4_progress_pane_g1

0xd61d,	// (0x0001b1bb) vid4_progress_pane_g2

0xaab1,	// (0x0001864f) vid4_progress_pane_g3

0xd62d,	// (0x0001b1cb) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x0001d672) vid4_progress_pane_g

0xd64b,	// (0x0001b1e9) vid4_progress_pane_t1

0xd660,	// (0x0001b1fe) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x0001d67d) vid4_progress_pane_t

0xd68b,	// (0x0001b229) wait_bar_pane_cp07

0xc01f,	// (0x00019bbd) blid_firmament_pane_ParamLimits

0xc062,	// (0x00019c00) popup_blid_sat_info2_window_g1

0xc086,	// (0x00019c24) popup_blid_sat_info2_window_t3

0xc094,	// (0x00019c32) popup_blid_sat_info2_window_t4

0xc0a2,	// (0x00019c40) popup_blid_sat_info2_window_t5

0xc0b0,	// (0x00019c4e) popup_blid_sat_info2_window_t6

0xc0c0,	// (0x00019c5e) popup_blid_sat_info2_window_t7

0xc0ce,	// (0x00019c6c) popup_blid_sat_info2_window_t8

0xc0dc,	// (0x00019c7a) popup_blid_sat_info2_window_t9

0xc0ea,	// (0x00019c88) popup_blid_sat_info2_window_t10

0xc1ac,	// (0x00019d4a) aid_firma_cardinal_ParamLimits

0xc1c0,	// (0x00019d5e) blid_firmament_pane_t1_ParamLimits

0xc1d7,	// (0x00019d75) blid_firmament_pane_t2_ParamLimits

0xc1ee,	// (0x00019d8c) blid_firmament_pane_t3_ParamLimits

0xc205,	// (0x00019da3) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0001d290) blid_firmament_pane_t_ParamLimits

0xc21c,	// (0x00019dba) blid_sat_info_pane_ParamLimits

0x9363,	// (0x00016f01) main_cam_set_pane_ParamLimits

0x544c,	// (0x00012fea) aid_size_cell_colour_35_ParamLimits

0x546c,	// (0x0001300a) aid_size_cell_colour_112_ParamLimits

0x548c,	// (0x0001302a) aid_size_cell_effect_ParamLimits

0xbd26,	// (0x000198c4) bg_tb_trans_pane_cp02_ParamLimits

0xa2c4,	// (0x00017e62) heading_imed_pane_ParamLimits

0x54ac,	// (0x0001304a) listscroll_imed_pane_ParamLimits

0xb358,	// (0x00018ef6) popup_call2_audio_first_window_g5_ParamLimits

0xb358,	// (0x00018ef6) popup_call2_audio_first_window_g5

0x5a1e,	// (0x000135bc) aid_size_touch_image3_arrow_left_ParamLimits

0x5a1e,	// (0x000135bc) aid_size_touch_image3_arrow_left

0x5a4a,	// (0x000135e8) aid_size_touch_image3_arrow_right_ParamLimits

0x5a4a,	// (0x000135e8) aid_size_touch_image3_arrow_right

0xd676,	// (0x0001b214) vid4_progress_pane_t3

0x57bf,	// (0x0001335d) main_hwr_training_symbol_option_pane_ParamLimits

0x57bf,	// (0x0001335d) main_hwr_training_symbol_option_pane

0xca2a,	// (0x0001a5c8) popup_hwr_training_preview_window_ParamLimits

0xca2a,	// (0x0001a5c8) popup_hwr_training_preview_window

0x57df,	// (0x0001337d) hwr_training_navi_pane_g5_ParamLimits

0x57df,	// (0x0001337d) hwr_training_navi_pane_g5

0xcfe0,	// (0x0001ab7e) popup_char_count_window

0x9363,	// (0x00016f01) bg_popup_sub_pane_cp20_ParamLimits

0x6aa7,	// (0x00014645) list_vitu2_match_list_pane_ParamLimits

0x6ab6,	// (0x00014654) vitu2_page_scroll_pane_ParamLimits

0x6ab6,	// (0x00014654) vitu2_page_scroll_pane

0xd6f7,	// (0x0001b295) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd6f7,	// (0x0001b295) list_single_hwr_training_symbol_option_pane

0xd70a,	// (0x0001b2a8) list_single_hwr_training_symbol_option_pane_g1

0xd712,	// (0x0001b2b0) list_single_hwr_training_symbol_option_pane_t1

0xd720,	// (0x0001b2be) bg_button_pane_cp023

0xd729,	// (0x0001b2c7) bg_button_pane_cp024

0x70d6,	// (0x00014c74) vitu2_page_scroll_pane_g1

0x70de,	// (0x00014c7c) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x0001d684) vitu2_page_scroll_pane_g

0x70e6,	// (0x00014c84) vitu2_page_scroll_pane_t1

0xd75c,	// (0x0001b2fa) popup_char_count_window_g1

0xd765,	// (0x0001b303) popup_char_count_window_g2

0xd76e,	// (0x0001b30c) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x0001d689) popup_char_count_window_g

0xd777,	// (0x0001b315) popup_char_count_window_t1

0x92f3,	// (0x00016e91) main_vded2_pane

0xc729,	// (0x0001a2c7) aid_size_cell_imed_line

0xc733,	// (0x0001a2d1) grid_imed_line_width_pane

0x5fa2,	// (0x00013b40) vid4_indicators_pane_g4

0xd785,	// (0x0001b323) cell_imed_line_width_pane_ParamLimits

0xd785,	// (0x0001b323) cell_imed_line_width_pane

0xd799,	// (0x0001b337) cell_imed_line_width_pane_g1

0xd7a2,	// (0x0001b340) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x0001d690) cell_imed_line_width_pane_g

0x70f5,	// (0x00014c93) main_vded2_pane_g1_ParamLimits

0x70f5,	// (0x00014c93) main_vded2_pane_g1

0x710b,	// (0x00014ca9) main_vded2_pane_g2_ParamLimits

0x710b,	// (0x00014ca9) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x0001d695) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x0001d695) main_vded2_pane_g

0x711d,	// (0x00014cbb) vded2_slider_pane_ParamLimits

0x711d,	// (0x00014cbb) vded2_slider_pane

0x712d,	// (0x00014ccb) aid_size_touch_vded2_end

0x7137,	// (0x00014cd5) aid_size_touch_vded2_playhead

0xd7aa,	// (0x0001b348) aid_size_touch_vded2_start

0xd7b2,	// (0x0001b350) vded2_slider_bg_pane

0xd7bb,	// (0x0001b359) vded2_slider_pane_g1

0xd7c4,	// (0x0001b362) vded2_slider_pane_g2

0x7141,	// (0x00014cdf) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x0001d69a) vded2_slider_pane_g

0xd7cc,	// (0x0001b36a) vded2_slider_bg_pane_g1

0xd7d5,	// (0x0001b373) vded2_slider_bg_pane_g2

0xd7de,	// (0x0001b37c) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x0001d6a1) vded2_slider_bg_pane_g

0x31af,	// (0x00010d4d) aid_postcard_touch_down_pane_ParamLimits

0x31af,	// (0x00010d4d) aid_postcard_touch_down_pane

0x31c5,	// (0x00010d63) aid_postcard_touch_up_pane_ParamLimits

0x31c5,	// (0x00010d63) aid_postcard_touch_up_pane

0x92f3,	// (0x00016e91) main_blid2_pane

0xbd34,	// (0x000198d2) popup_blid2_search_window

0x92f3,	// (0x00016e91) blid2_gps_pane

0x92f3,	// (0x00016e91) blid2_navig_pane

0x92f3,	// (0x00016e91) blid2_search_pane

0x92f3,	// (0x00016e91) blid2_tripm_pane

0x714c,	// (0x00014cea) blid2_search_pane_g1_ParamLimits

0x714c,	// (0x00014cea) blid2_search_pane_g1

0x7166,	// (0x00014d04) blid2_search_pane_t1_ParamLimits

0x7166,	// (0x00014d04) blid2_search_pane_t1

0x7178,	// (0x00014d16) aid_size_cell_blid2_gps_ParamLimits

0x7178,	// (0x00014d16) aid_size_cell_blid2_gps

0x7190,	// (0x00014d2e) blid2_gps_pane_g1_ParamLimits

0x7190,	// (0x00014d2e) blid2_gps_pane_g1

0x71a4,	// (0x00014d42) grid_blid2_satellite_pane_ParamLimits

0x71a4,	// (0x00014d42) grid_blid2_satellite_pane

0x71be,	// (0x00014d5c) blid2_navig_pane_g1_ParamLimits

0x71be,	// (0x00014d5c) blid2_navig_pane_g1

0x71ca,	// (0x00014d68) blid2_navig_pane_t1_ParamLimits

0x71ca,	// (0x00014d68) blid2_navig_pane_t1

0x71e5,	// (0x00014d83) blid2_navig_pane_t2_ParamLimits

0x71e5,	// (0x00014d83) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x0001d6a8) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x0001d6a8) blid2_navig_pane_t

0x7200,	// (0x00014d9e) blid2_navig_ring_pane_ParamLimits

0x7200,	// (0x00014d9e) blid2_navig_ring_pane

0x7219,	// (0x00014db7) blid2_speed_pane_ParamLimits

0x7219,	// (0x00014db7) blid2_speed_pane

0x7225,	// (0x00014dc3) blid2_tripm_pane_g1_ParamLimits

0x7225,	// (0x00014dc3) blid2_tripm_pane_g1

0x723e,	// (0x00014ddc) blid2_tripm_pane_g2_ParamLimits

0x723e,	// (0x00014ddc) blid2_tripm_pane_g2

0x7252,	// (0x00014df0) blid2_tripm_pane_g3_ParamLimits

0x7252,	// (0x00014df0) blid2_tripm_pane_g3

0x7266,	// (0x00014e04) blid2_tripm_pane_g4_ParamLimits

0x7266,	// (0x00014e04) blid2_tripm_pane_g4

0x727a,	// (0x00014e18) blid2_tripm_pane_g5_ParamLimits

0x727a,	// (0x00014e18) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x0001d6ad) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x0001d6ad) blid2_tripm_pane_g

0x72a0,	// (0x00014e3e) blid2_tripm_pane_t1_ParamLimits

0x72a0,	// (0x00014e3e) blid2_tripm_pane_t1

0x72bb,	// (0x00014e59) blid2_tripm_pane_t2_ParamLimits

0x72bb,	// (0x00014e59) blid2_tripm_pane_t2

0x72d4,	// (0x00014e72) blid2_tripm_pane_t3_ParamLimits

0x72d4,	// (0x00014e72) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x0001d6ba) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x0001d6ba) blid2_tripm_pane_t

0x731b,	// (0x00014eb9) cell_blid2_satellite_pane_ParamLimits

0x731b,	// (0x00014eb9) cell_blid2_satellite_pane

0x7339,	// (0x00014ed7) cell_blid2_satellite_pane_g1

0xd7e7,	// (0x0001b385) cell_blid2_satellite_pane_t1

0xc22c,	// (0x00019dca) blid2_speed_pane_g1

0xd7f5,	// (0x0001b393) blid2_speed_pane_t1

0xd803,	// (0x0001b3a1) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x0001d6c3) blid2_speed_pane_t

0xc22c,	// (0x00019dca) blid2_navig_ring_pane_g1

0x7342,	// (0x00014ee0) blid2_navig_ring_pane_g2

0x734a,	// (0x00014ee8) blid2_navig_ring_pane_g3

0x7352,	// (0x00014ef0) blid2_navig_ring_pane_g4

0x735a,	// (0x00014ef8) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x0001d6c8) blid2_navig_ring_pane_g

0x92f3,	// (0x00016e91) bg_popup_window_pane_cp011

0xd811,	// (0x0001b3af) popup_blid2_search_window_g1

0xd819,	// (0x0001b3b7) popup_blid2_search_window_t1

0xd827,	// (0x0001b3c5) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x0001d6d3) popup_blid2_search_window_t

0x9f2f,	// (0x00017acd) main_browser_pane_g1

0x9ad4,	// (0x00017672) main_browser_pane_ParamLimits

0x9363,	// (0x00016f01) bg_button_pane_cp011_ParamLimits

0x6357,	// (0x00013ef5) cell_vitu2_function_pane_g1_ParamLimits

0xbd26,	// (0x000198c4) bg_popup_sub_pane_cp22_ParamLimits

0x6c44,	// (0x000147e2) input_focus_pane_cp08_ParamLimits

0x6c5b,	// (0x000147f9) popup_vitu2_query_button_pane_ParamLimits

0x6c5b,	// (0x000147f9) popup_vitu2_query_button_pane

0x6c6c,	// (0x0001480a) popup_vitu2_query_input_button_pane

0xd320,	// (0x0001aebe) popup_vitu2_query_window_g1_ParamLimits

0x6c76,	// (0x00014814) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x0001d5d4) popup_vitu2_query_window_g_ParamLimits

0x92f3,	// (0x00016e91) bg_button_pane_cp026

0x7362,	// (0x00014f00) popup_vitu2_query_input_button_pane_g1

0x92f3,	// (0x00016e91) bg_button_pane_cp025

0xd835,	// (0x0001b3d3) popup_vitu2_query_button_pane_t1

0x4849,	// (0x000123e7) main_mp3_pane_t6

0x4857,	// (0x000123f5) popup_slider_window_cp01

0xcef2,	// (0x0001aa90) cam4_battery_pane

0xcf4b,	// (0x0001aae9) cam4_battery_pane_cp02

0xd605,	// (0x0001b1a3) cam4_battery_pane_cp01

0xd605,	// (0x0001b1a3) cam4_battery_pane_cp03

0xc22c,	// (0x00019dca) cam4_battery_pane_g1

0xd843,	// (0x0001b3e1) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x0001d6d8) cam4_battery_pane_g

0xc0f8,	// (0x00019c96) popup_blid_sat_info2_window_t11

0x2b5f,	// (0x000106fd) aid_size_touch_mv_arrow_left_ParamLimits

0x2b88,	// (0x00010726) aid_size_touch_mv_arrow_right_ParamLimits

0xa7c9,	// (0x00018367) navi_pane_g1_ParamLimits

0x2bc7,	// (0x00010765) navi_pane_g2_ParamLimits

0x2bf5,	// (0x00010793) navi_pane_g3_ParamLimits

0xf404,	// (0x0001cfa2) navi_pane_g_ParamLimits

0x2c4d,	// (0x000107eb) navi_pane_mv_t1_ParamLimits

0x54b8,	// (0x00013056) grid_imed_effect_pane_ParamLimits

0x1af3,	// (0x0000f691) aid_placing_vt_slider_lsc

0x9e7e,	// (0x00017a1c) aid_placing_vt_slider_prt

0x9363,	// (0x00016f01) bg_tb_trans_pane_cp01_ParamLimits

0xc3b8,	// (0x00019f56) popup_image_details_window_g1_ParamLimits

0xc3cb,	// (0x00019f69) popup_image_details_window_g2_ParamLimits

0xc3e0,	// (0x00019f7e) popup_image_details_window_g3_ParamLimits

0xc3e0,	// (0x00019f7e) popup_image_details_window_g3

0xf737,	// (0x0001d2d5) popup_image_details_window_g_ParamLimits

0xc3f4,	// (0x00019f92) popup_image_details_window_t1_ParamLimits

0xc406,	// (0x00019fa4) popup_image_details_window_t2_ParamLimits

0xc41f,	// (0x00019fbd) popup_image_details_window_t3_ParamLimits

0xc433,	// (0x00019fd1) popup_image_details_window_t4_ParamLimits

0xc44e,	// (0x00019fec) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0001d2dc) popup_image_details_window_t_ParamLimits

0x6fe6,	// (0x00014b84) cl_header_name_pane_ParamLimits

0x6fe6,	// (0x00014b84) cl_header_name_pane

0x736a,	// (0x00014f08) cl_header_name_pane_t1_ParamLimits

0x736a,	// (0x00014f08) cl_header_name_pane_t1

0x738b,	// (0x00014f29) cl_header_name_pane_t2_ParamLimits

0x738b,	// (0x00014f29) cl_header_name_pane_t2

0x73cd,	// (0x00014f6b) cl_header_name_pane_t3_ParamLimits

0x73cd,	// (0x00014f6b) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x0001d6dd) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x0001d6dd) cl_header_name_pane_t

0x2c1e,	// (0x000107bc) navi_pane_mv_g2_ParamLimits

0xcf6e,	// (0x0001ab0c) field_vitu2_entry_pane_g1_ParamLimits

0xcf7a,	// (0x0001ab18) field_vitu2_entry_pane_g2_ParamLimits

0xcf86,	// (0x0001ab24) field_vitu2_entry_pane_g3_ParamLimits

0xcf86,	// (0x0001ab24) field_vitu2_entry_pane_g3

0xf935,	// (0x0001d4d3) field_vitu2_entry_pane_g_ParamLimits

0x61f7,	// (0x00013d95) cell_vitu2_itu_pane_g1_ParamLimits

0x6207,	// (0x00013da5) cell_vitu2_itu_pane_g2_ParamLimits

0x6207,	// (0x00013da5) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0001d4df) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0001d4df) cell_vitu2_itu_pane_g

0x9363,	// (0x00016f01) bg_vkb2_func_pane_cp05_ParamLimits

0x9363,	// (0x00016f01) bg_vkb2_func_pane_cp05

0x9363,	// (0x00016f01) bg_vkb2_func_pane_cp03

0x9363,	// (0x00016f01) bg_vkb2_func_pane_cp04

0x9363,	// (0x00016f01) bg_vkb2_func_pane_cp10_ParamLimits

0x9363,	// (0x00016f01) bg_vkb2_func_pane_cp10

0x6f8c,	// (0x00014b2a) bg_vkb2_func_pane_cp08

0x6f72,	// (0x00014b10) bg_vkb2_func_pane_cp06

0x6f80,	// (0x00014b1e) bg_vkb2_func_pane_cp07

0xd732,	// (0x0001b2d0) bg_vkb2_func_pane_cp11_ParamLimits

0xd732,	// (0x0001b2d0) bg_vkb2_func_pane_cp11

0xd747,	// (0x0001b2e5) bg_vkb2_func_pane_cp12_ParamLimits

0xd747,	// (0x0001b2e5) bg_vkb2_func_pane_cp12

0x92f3,	// (0x00016e91) bg_vkb2_func_pane_cp09

0xcff2,	// (0x0001ab90) bg_vkb2_func_pane_g1

0xa040,	// (0x00017bde) bg_vkb2_func_pane_g2

0xcffa,	// (0x0001ab98) bg_vkb2_func_pane_g3

0xd002,	// (0x0001aba0) bg_vkb2_func_pane_g4

0xd2ab,	// (0x0001ae49) bg_vkb2_func_pane_g5

0xd01a,	// (0x0001abb8) bg_vkb2_func_pane_g6

0xd022,	// (0x0001abc0) bg_vkb2_func_pane_g7

0xd012,	// (0x0001abb0) bg_vkb2_func_pane_g8

0xa020,	// (0x00017bbe) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x0001d6e4) bg_vkb2_func_pane_g

0x728e,	// (0x00014e2c) blid2_tripm_pane_g6_ParamLimits

0x728e,	// (0x00014e2c) blid2_tripm_pane_g6

0xcd45,	// (0x0001a8e3) mp4_progress_pane_g1

0x7307,	// (0x00014ea5) blid2_tripm_values_pane_ParamLimits

0x7307,	// (0x00014ea5) blid2_tripm_values_pane

0x73fe,	// (0x00014f9c) blid2_tripm_values_pane_t1

0x740c,	// (0x00014faa) blid2_tripm_values_pane_t2

0x741a,	// (0x00014fb8) blid2_tripm_values_pane_t3

0x7428,	// (0x00014fc6) blid2_tripm_values_pane_t4

0x7436,	// (0x00014fd4) blid2_tripm_values_pane_t5

0x7444,	// (0x00014fe2) blid2_tripm_values_pane_t6

0x7452,	// (0x00014ff0) blid2_tripm_values_pane_t7

0x7460,	// (0x00014ffe) blid2_tripm_values_pane_t8

0x746e,	// (0x0001500c) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x0001d6f7) blid2_tripm_values_pane_t

0x1b35,	// (0x0000f6d3) call_video_pane_t1_ParamLimits

0x1b53,	// (0x0000f6f1) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0001ce2b) call_video_pane_t_ParamLimits

0x3119,	// (0x00010cb7) msg_header_pane_g1_ParamLimits

0xaa0c,	// (0x000185aa) msg_header_pane_g2_ParamLimits

0xaa0c,	// (0x000185aa) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0001d045) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0001d045) msg_header_pane_g

0x9ad4,	// (0x00017672) main_clock2_pane_ParamLimits

0x51cb,	// (0x00012d69) grid_clock2_toolbar_pane_ParamLimits

0x51cb,	// (0x00012d69) grid_clock2_toolbar_pane

0x51cb,	// (0x00012d69) listscroll_clock2_pane_ParamLimits

0x51cb,	// (0x00012d69) listscroll_clock2_pane

0x52ad,	// (0x00012e4b) main_clock2_pane_t3_ParamLimits

0x52ad,	// (0x00012e4b) main_clock2_pane_t3

0x52d0,	// (0x00012e6e) main_clock2_pane_t4_ParamLimits

0x52d0,	// (0x00012e6e) main_clock2_pane_t4

0xd84d,	// (0x0001b3eb) cell_clock2_toolbar_pane

0xd855,	// (0x0001b3f3) cell_clock2_toolbar_pane_cp01

0xd855,	// (0x0001b3f3) cell_clock2_toolbar_pane_cp02

0xd85d,	// (0x0001b3fb) cell_clock2_toolbar_pane_cp03

0xd865,	// (0x0001b403) list_clock2_pane

0xa720,	// (0x000182be) scroll_pane_cp10

0xd86d,	// (0x0001b40b) list_single_clock2_pane_ParamLimits

0xd86d,	// (0x0001b40b) list_single_clock2_pane

0xa869,	// (0x00018407) list_highlight_pane_cp08

0xd87a,	// (0x0001b418) list_single_clock2_pane_t1

0xd888,	// (0x0001b426) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x0001d70a) list_single_clock2_pane_t

0x92f3,	// (0x00016e91) bg_button_pane_cp10

0xd896,	// (0x0001b434) cell_clock2_toolbar_pane_g1

0x313b,	// (0x00010cd9) aid_main_viewer_pane_g1_ParamLimits

0x313b,	// (0x00010cd9) aid_main_viewer_pane_g1

0x3149,	// (0x00010ce7) aid_main_viewer_pane_g2_ParamLimits

0x3149,	// (0x00010ce7) aid_main_viewer_pane_g2

0x3157,	// (0x00010cf5) aid_main_viewer_pane_g3_ParamLimits

0x3157,	// (0x00010cf5) aid_main_viewer_pane_g3

0x3166,	// (0x00010d04) aid_main_viewer_pane_g4_ParamLimits

0x3166,	// (0x00010d04) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0001d056) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0001d056) aid_main_viewer_pane_g

0x3a6c,	// (0x0001160a) main_calc_pane_ParamLimits

0x3a80,	// (0x0001161e) main_dialer2_pane_ParamLimits

0x92f3,	// (0x00016e91) main_cam6_pane

0x92f3,	// (0x00016e91) main_vid6_pane

0x51d7,	// (0x00012d75) listscroll_gen_pane_cp06_ParamLimits

0x51d7,	// (0x00012d75) listscroll_gen_pane_cp06

0x52f3,	// (0x00012e91) main_clock2_pane_t5_ParamLimits

0x52f3,	// (0x00012e91) main_clock2_pane_t5

0x534d,	// (0x00012eeb) aid_call2_pane_cp10_ParamLimits

0x535f,	// (0x00012efd) aid_call_pane_cp10_ParamLimits

0xa79e,	// (0x0001833c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa79e,	// (0x0001833c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5371,	// (0x00012f0f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5371,	// (0x00012f0f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa79e,	// (0x0001833c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0001d38c) popup_clock_analogue_window_cp10_g_ParamLimits

0x5383,	// (0x00012f21) popup_clock_analogue_window_cp10_t1_ParamLimits

0x59cb,	// (0x00013569) cell_dialer2_keypad_pane_g2_ParamLimits

0x59cb,	// (0x00013569) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0001d472) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0001d472) cell_dialer2_keypad_pane_g

0x59e7,	// (0x00013585) cell_dialer2_keypad_pane_t1

0x666e,	// (0x0001420c) main_cset_text2_pane_ParamLimits

0x666e,	// (0x0001420c) main_cset_text2_pane

0xd50c,	// (0x0001b0aa) area_vitu2_query_pane_g1_ParamLimits

0x6f11,	// (0x00014aaf) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x0001d627) area_vitu2_query_pane_g_ParamLimits

0xd590,	// (0x0001b12e) area_vitu2_query_pane_t7_ParamLimits

0xd590,	// (0x0001b12e) area_vitu2_query_pane_t7

0x6f72,	// (0x00014b10) bg_button_pane_cp018_ParamLimits

0x6f80,	// (0x00014b1e) bg_button_pane_cp021_ParamLimits

0x6f8c,	// (0x00014b2a) bg_button_pane_cp022_ParamLimits

0x6f8c,	// (0x00014b2a) bg_vkb2_func_pane_cp08_ParamLimits

0x6f72,	// (0x00014b10) bg_vkb2_func_pane_cp06_ParamLimits

0x6f80,	// (0x00014b1e) bg_vkb2_func_pane_cp07_ParamLimits

0x6f9b,	// (0x00014b39) input_focus_pane_cp09_ParamLimits

0xd89e,	// (0x0001b43c) cam6_autofocus_pane_ParamLimits

0xd89e,	// (0x0001b43c) cam6_autofocus_pane

0x747c,	// (0x0001501a) cam6_image_uncrop_pane_ParamLimits

0x747c,	// (0x0001501a) cam6_image_uncrop_pane

0x748b,	// (0x00015029) cam6_indi_pane_ParamLimits

0x748b,	// (0x00015029) cam6_indi_pane

0x74a1,	// (0x0001503f) cam6_mode_pane_ParamLimits

0x74a1,	// (0x0001503f) cam6_mode_pane

0x74b3,	// (0x00015051) cam6_timer_pane_ParamLimits

0x74b3,	// (0x00015051) cam6_timer_pane

0x74bf,	// (0x0001505d) cam6_zoom_pane_ParamLimits

0x74bf,	// (0x0001505d) cam6_zoom_pane

0x74cb,	// (0x00015069) cam6_mode_pane_g1_ParamLimits

0x74cb,	// (0x00015069) cam6_mode_pane_g1

0x74db,	// (0x00015079) cam6_mode_pane_g2_ParamLimits

0x74db,	// (0x00015079) cam6_mode_pane_g2

0x74eb,	// (0x00015089) cam6_mode_pane_g3_ParamLimits

0x74eb,	// (0x00015089) cam6_mode_pane_g3

0x74fb,	// (0x00015099) cam6_mode_pane_g4_ParamLimits

0x74fb,	// (0x00015099) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x0001d70f) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x0001d70f) cam6_mode_pane_g

0xd8ac,	// (0x0001b44a) bg_tb_trans_pane_cp08_ParamLimits

0xd8ac,	// (0x0001b44a) bg_tb_trans_pane_cp08

0xd8ba,	// (0x0001b458) cam6_battery_pane_ParamLimits

0xd8ba,	// (0x0001b458) cam6_battery_pane

0xd8d0,	// (0x0001b46e) cam6_indi_pane_g1_ParamLimits

0xd8d0,	// (0x0001b46e) cam6_indi_pane_g1

0xd8e2,	// (0x0001b480) cam6_indi_pane_g2_ParamLimits

0xd8e2,	// (0x0001b480) cam6_indi_pane_g2

0xd8f4,	// (0x0001b492) cam6_indi_pane_g3_ParamLimits

0xd8f4,	// (0x0001b492) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x0001d718) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0001d718) cam6_indi_pane_g

0xd906,	// (0x0001b4a4) cam6_indi_pane_t1_ParamLimits

0xd906,	// (0x0001b4a4) cam6_indi_pane_t1

0x750b,	// (0x000150a9) cam6_autofocus_pane_g1

0x7513,	// (0x000150b1) cam6_autofocus_pane_g2

0x751b,	// (0x000150b9) cam6_autofocus_pane_g3

0x7523,	// (0x000150c1) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x0001d71f) cam6_autofocus_pane_g

0xd92c,	// (0x0001b4ca) cam6_timer_pane_g1

0xd934,	// (0x0001b4d2) cam6_timer_pane_t1

0xd942,	// (0x0001b4e0) cam6_zoom_cont_pane

0xd94a,	// (0x0001b4e8) cam6_zoom_pane_g1

0xd952,	// (0x0001b4f0) cam6_zoom_pane_g2

0x752b,	// (0x000150c9) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x0001d728) cam6_zoom_pane_g

0xc22c,	// (0x00019dca) cam6_battery_pane_g1

0xc22c,	// (0x00019dca) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0001d299) cam6_battery_pane_g

0xd95a,	// (0x0001b4f8) cam6_zoom_cont_pane_g1

0xd963,	// (0x0001b501) cam6_zoom_cont_pane_g2

0xd96c,	// (0x0001b50a) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x0001d72f) cam6_zoom_cont_pane_g

0x7548,	// (0x000150e6) cam6_mode_pane_cp_ParamLimits

0x7548,	// (0x000150e6) cam6_mode_pane_cp

0x74bf,	// (0x0001505d) cam6_zoom_pane_cp_ParamLimits

0x74bf,	// (0x0001505d) cam6_zoom_pane_cp

0x755a,	// (0x000150f8) vid6_image_uncrop_cif_pane_ParamLimits

0x755a,	// (0x000150f8) vid6_image_uncrop_cif_pane

0x756a,	// (0x00015108) vid6_image_uncrop_nhd_pane_ParamLimits

0x756a,	// (0x00015108) vid6_image_uncrop_nhd_pane

0x747c,	// (0x0001501a) vid6_image_uncrop_vga_pane_ParamLimits

0x747c,	// (0x0001501a) vid6_image_uncrop_vga_pane

0x7579,	// (0x00015117) vid6_image_uncrop_wvga_pane_ParamLimits

0x7579,	// (0x00015117) vid6_image_uncrop_wvga_pane

0x7588,	// (0x00015126) vid6_indi_pane_ParamLimits

0x7588,	// (0x00015126) vid6_indi_pane

0xd8ac,	// (0x0001b44a) bg_tb_trans_pane_cp09_ParamLimits

0xd8ac,	// (0x0001b44a) bg_tb_trans_pane_cp09

0xd984,	// (0x0001b522) cam6_battery_pane_cp_ParamLimits

0xd984,	// (0x0001b522) cam6_battery_pane_cp

0xd990,	// (0x0001b52e) vid6_indi_pane_g1_ParamLimits

0xd990,	// (0x0001b52e) vid6_indi_pane_g1

0xd9a2,	// (0x0001b540) vid6_indi_pane_g2_ParamLimits

0xd9a2,	// (0x0001b540) vid6_indi_pane_g2

0xd9b4,	// (0x0001b552) vid6_indi_pane_g3_ParamLimits

0xd9b4,	// (0x0001b552) vid6_indi_pane_g3

0xd9c9,	// (0x0001b567) vid6_indi_pane_g4_ParamLimits

0xd9c9,	// (0x0001b567) vid6_indi_pane_g4

0xd9de,	// (0x0001b57c) vid6_indi_pane_g5_ParamLimits

0xd9de,	// (0x0001b57c) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x0001d736) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x0001d736) vid6_indi_pane_g

0xd9f8,	// (0x0001b596) vid6_indi_pane_t1_ParamLimits

0xd9f8,	// (0x0001b596) vid6_indi_pane_t1

0xda0e,	// (0x0001b5ac) vid6_indi_pane_t2_ParamLimits

0xda0e,	// (0x0001b5ac) vid6_indi_pane_t2

0xda36,	// (0x0001b5d4) vid6_indi_pane_t3_ParamLimits

0xda36,	// (0x0001b5d4) vid6_indi_pane_t3

0xda5e,	// (0x0001b5fc) vid6_indi_pane_t4_ParamLimits

0xda5e,	// (0x0001b5fc) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x0001d741) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x0001d741) vid6_indi_pane_t

0xda82,	// (0x0001b620) wait_bar_pane_cp08

0x75a0,	// (0x0001513e) main_cset_text2_pane_t1_ParamLimits

0x75a0,	// (0x0001513e) main_cset_text2_pane_t1

0x7533,	// (0x000150d1) listscroll_gen_pane_cp06_t1_ParamLimits

0x7533,	// (0x000150d1) listscroll_gen_pane_cp06_t1

0x92f3,	// (0x00016e91) main_cam6_set_pane

0xc498,	// (0x0001a036) bg_tb_trans_pane_cp06_ParamLimits

0xcefa,	// (0x0001aa98) cam4_indicators_pane_g1_ParamLimits

0xcf0b,	// (0x0001aaa9) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0001d4af) cam4_indicators_pane_g_ParamLimits

0xcf29,	// (0x0001aac7) cam4_indicators_pane_t1_ParamLimits

0xcab8,	// (0x0001a656) bg_tb_trans_pane_cp07_ParamLimits

0x5f7b,	// (0x00013b19) vid4_indicators_pane_g1_ParamLimits

0x5f88,	// (0x00013b26) vid4_indicators_pane_g2_ParamLimits

0x5f95,	// (0x00013b33) vid4_indicators_pane_g3_ParamLimits

0x5fa2,	// (0x00013b40) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0001d4c1) vid4_indicators_pane_g_ParamLimits

0x5fba,	// (0x00013b58) vid4_indicators_pane_t1_ParamLimits

0xd60d,	// (0x0001b1ab) vid4_progress_pane_g1_ParamLimits

0xd61d,	// (0x0001b1bb) vid4_progress_pane_g2_ParamLimits

0xaab1,	// (0x0001864f) vid4_progress_pane_g3_ParamLimits

0xd62d,	// (0x0001b1cb) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x0001d672) vid4_progress_pane_g_ParamLimits

0xd64b,	// (0x0001b1e9) vid4_progress_pane_t1_ParamLimits

0xd660,	// (0x0001b1fe) vid4_progress_pane_t2_ParamLimits

0xd676,	// (0x0001b214) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x0001d67d) vid4_progress_pane_t_ParamLimits

0xd68b,	// (0x0001b229) wait_bar_pane_cp07_ParamLimits

0x75bd,	// (0x0001515b) main_cam6_set_pane_g2_ParamLimits

0x75bd,	// (0x0001515b) main_cam6_set_pane_g2

0x75e1,	// (0x0001517f) main_cset6_listscroll_pane_ParamLimits

0x75e1,	// (0x0001517f) main_cset6_listscroll_pane

0x7601,	// (0x0001519f) main_cset6_slider_pane_ParamLimits

0x7601,	// (0x0001519f) main_cset6_slider_pane

0x7617,	// (0x000151b5) main_cset6_text2_pane_ParamLimits

0x7617,	// (0x000151b5) main_cset6_text2_pane

0xda91,	// (0x0001b62f) main_cset6_text_pane

0xda99,	// (0x0001b637) main_cset_list_pane_copy1_ParamLimits

0xda99,	// (0x0001b637) main_cset_list_pane_copy1

0xdaa9,	// (0x0001b647) scroll_pane_cp028_copy1

0x7625,	// (0x000151c3) cset_list_set_pane_copy1

0x7636,	// (0x000151d4) aid_position_infowindow_above_copy1

0x763e,	// (0x000151dc) aid_position_infowindow_below_copy1

0x7646,	// (0x000151e4) cset_list_set_pane_g1_copy1

0x764e,	// (0x000151ec) cset_list_set_pane_g3_copy1_ParamLimits

0x764e,	// (0x000151ec) cset_list_set_pane_g3_copy1

0x765d,	// (0x000151fb) cset_list_set_pane_t1_copy1_ParamLimits

0x765d,	// (0x000151fb) cset_list_set_pane_t1_copy1

0x9363,	// (0x00016f01) list_highlight_pane_cp021_copy1_ParamLimits

0x9363,	// (0x00016f01) list_highlight_pane_cp021_copy1

0xdab2,	// (0x0001b650) cset6_slider_pane_ParamLimits

0xdab2,	// (0x0001b650) cset6_slider_pane

0xdade,	// (0x0001b67c) main_cset6_slider_pane_g1_ParamLimits

0xdade,	// (0x0001b67c) main_cset6_slider_pane_g1

0x7672,	// (0x00015210) main_cset6_slider_pane_g2_ParamLimits

0x7672,	// (0x00015210) main_cset6_slider_pane_g2

0xdb06,	// (0x0001b6a4) main_cset6_slider_pane_g3_ParamLimits

0xdb06,	// (0x0001b6a4) main_cset6_slider_pane_g3

0x769a,	// (0x00015238) main_cset6_slider_pane_g4_ParamLimits

0x769a,	// (0x00015238) main_cset6_slider_pane_g4

0x76a6,	// (0x00015244) main_cset6_slider_pane_g5_ParamLimits

0x76a6,	// (0x00015244) main_cset6_slider_pane_g5

0xd121,	// (0x0001acbf) main_cset6_slider_pane_g7_ParamLimits

0xd121,	// (0x0001acbf) main_cset6_slider_pane_g7

0xd12d,	// (0x0001accb) main_cset6_slider_pane_g8_ParamLimits

0xd12d,	// (0x0001accb) main_cset6_slider_pane_g8

0x671b,	// (0x000142b9) main_cset6_slider_pane_g9_ParamLimits

0x671b,	// (0x000142b9) main_cset6_slider_pane_g9

0x6727,	// (0x000142c5) main_cset6_slider_pane_g10_ParamLimits

0x6727,	// (0x000142c5) main_cset6_slider_pane_g10

0x6733,	// (0x000142d1) main_cset6_slider_pane_g11_ParamLimits

0x6733,	// (0x000142d1) main_cset6_slider_pane_g11

0x673f,	// (0x000142dd) main_cset6_slider_pane_g12_ParamLimits

0x673f,	// (0x000142dd) main_cset6_slider_pane_g12

0x674b,	// (0x000142e9) main_cset6_slider_pane_g13_ParamLimits

0x674b,	// (0x000142e9) main_cset6_slider_pane_g13

0x6757,	// (0x000142f5) main_cset6_slider_pane_g14_ParamLimits

0x6757,	// (0x000142f5) main_cset6_slider_pane_g14

0x76b2,	// (0x00015250) main_cset6_slider_pane_g15_ParamLimits

0x76b2,	// (0x00015250) main_cset6_slider_pane_g15

0x677b,	// (0x00014319) main_cset6_slider_pane_g16_ParamLimits

0x677b,	// (0x00014319) main_cset6_slider_pane_g16

0x6787,	// (0x00014325) main_cset6_slider_pane_g17_ParamLimits

0x6787,	// (0x00014325) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x0001d74a) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x0001d74a) main_cset6_slider_pane_g

0xdb12,	// (0x0001b6b0) main_cset6_slider_pane_t1_ParamLimits

0xdb12,	// (0x0001b6b0) main_cset6_slider_pane_t1

0x76e2,	// (0x00015280) main_cset6_slider_pane_t2_ParamLimits

0x76e2,	// (0x00015280) main_cset6_slider_pane_t2

0x770d,	// (0x000152ab) main_cset6_slider_pane_t3_ParamLimits

0x770d,	// (0x000152ab) main_cset6_slider_pane_t3

0x7738,	// (0x000152d6) main_cset6_slider_pane_t4_ParamLimits

0x7738,	// (0x000152d6) main_cset6_slider_pane_t4

0x7763,	// (0x00015301) main_cset6_slider_pane_t5_ParamLimits

0x7763,	// (0x00015301) main_cset6_slider_pane_t5

0xdb53,	// (0x0001b6f1) main_cset6_slider_pane_t7_ParamLimits

0xdb53,	// (0x0001b6f1) main_cset6_slider_pane_t7

0x778e,	// (0x0001532c) main_cset6_slider_pane_t8_ParamLimits

0x778e,	// (0x0001532c) main_cset6_slider_pane_t8

0x77b2,	// (0x00015350) main_cset6_slider_pane_t9_ParamLimits

0x77b2,	// (0x00015350) main_cset6_slider_pane_t9

0x77d6,	// (0x00015374) main_cset6_slider_pane_t10_ParamLimits

0x77d6,	// (0x00015374) main_cset6_slider_pane_t10

0x77fa,	// (0x00015398) main_cset6_slider_pane_t11_ParamLimits

0x77fa,	// (0x00015398) main_cset6_slider_pane_t11

0xdb89,	// (0x0001b727) main_cset6_slider_pane_t14_ParamLimits

0xdb89,	// (0x0001b727) main_cset6_slider_pane_t14

0xdbc2,	// (0x0001b760) main_cset6_slider_pane_t15_ParamLimits

0xdbc2,	// (0x0001b760) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x0001d76f) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x0001d76f) main_cset6_slider_pane_t

0xd235,	// (0x0001add3) cset_slider_pane_g1_copy1

0xd23e,	// (0x0001addc) cset_slider_pane_g2_copy1

0xd247,	// (0x0001ade5) cset_slider_pane_g3_copy1

0x92f3,	// (0x00016e91) bg_popup_sub_pane_cp011_copy1

0xd32c,	// (0x0001aeca) main_cset_text_pane_g1_copy1

0xd334,	// (0x0001aed2) main_cset_text_pane_t1_copy1

0xd342,	// (0x0001aee0) main_cset_text_pane_t2_copy1

0xd350,	// (0x0001aeee) main_cset_text_pane_t3_copy1

0xd35e,	// (0x0001aefc) main_cset_text_pane_t4_copy1

0xd36c,	// (0x0001af0a) main_cset_text_pane_t5_copy1

0xd37a,	// (0x0001af18) main_cset_text_pane_t6_copy1

0xd388,	// (0x0001af26) main_cset_text_pane_t7_copy1

0x75a0,	// (0x0001513e) main_cset_text2_pane_t1_copy1

0x92f3,	// (0x00016e91) main_ncimui_pane

0x3cc2,	// (0x00011860) popup_query_ncimui_window_ParamLimits

0x3cc2,	// (0x00011860) popup_query_ncimui_window

0xc4fd,	// (0x0001a09b) field_cale_ev2_pane_g4_ParamLimits

0xc4fd,	// (0x0001a09b) field_cale_ev2_pane_g4

0x58ab,	// (0x00013449) cell_video_dialer_keypad_pane_g2_ParamLimits

0x58ab,	// (0x00013449) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0001d44d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0001d44d) cell_video_dialer_keypad_pane_g

0x58c3,	// (0x00013461) cell_video_dialer_keypad_pane_t1

0x92f3,	// (0x00016e91) bg_popup_window_pane_cp012

0xa5fd,	// (0x0001819b) heading_pane_cp06

0xdcea,	// (0x0001b888) ncim_query_content_pane

0x92f3,	// (0x00016e91) bg_popup_heading_pane_cp01

0xdcf2,	// (0x0001b890) ncim_heading_pane_t1

0xdd00,	// (0x0001b89e) ncim_indicator_popup_pane

0xdd12,	// (0x0001b8b0) ncim_query_button_pane

0xdd26,	// (0x0001b8c4) ncim_query_content_pane_t1

0xdd38,	// (0x0001b8d6) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x0001d7ae) ncim_query_content_pane_t

0xdd72,	// (0x0001b910) ncim_query_list_pane

0xdd84,	// (0x0001b922) ncim_query_popup_pane

0xdd00,	// (0x0001b89e) ncim_indicator_popup_pane_ParamLimits

0x7917,	// (0x000154b5) ncim_query_content_pane_g1_ParamLimits

0x7917,	// (0x000154b5) ncim_query_content_pane_g1

0xdd26,	// (0x0001b8c4) ncim_query_content_pane_t1_ParamLimits

0xdd38,	// (0x0001b8d6) ncim_query_content_pane_t2_ParamLimits

0x7923,	// (0x000154c1) ncim_query_content_pane_t3_ParamLimits

0x7923,	// (0x000154c1) ncim_query_content_pane_t3

0x794b,	// (0x000154e9) ncim_query_content_pane_t4_ParamLimits

0x794b,	// (0x000154e9) ncim_query_content_pane_t4

0x7973,	// (0x00015511) ncim_query_content_pane_t5_ParamLimits

0x7973,	// (0x00015511) ncim_query_content_pane_t5

0xdd4a,	// (0x0001b8e8) ncim_query_content_pane_t6_ParamLimits

0xdd4a,	// (0x0001b8e8) ncim_query_content_pane_t6

0xfc10,	// (0x0001d7ae) ncim_query_content_pane_t_ParamLimits

0xdd72,	// (0x0001b910) ncim_query_list_pane_ParamLimits

0xdd84,	// (0x0001b922) ncim_query_popup_pane_ParamLimits

0xdd98,	// (0x0001b936) wait_bar_pane_cp04

0x92f3,	// (0x00016e91) input_focus_pane_cp011

0xdda0,	// (0x0001b93e) ncim_query_popup_pane_t1

0xddae,	// (0x0001b94c) ncim_list_query_list_pane_ParamLimits

0xddae,	// (0x0001b94c) ncim_list_query_list_pane

0x92f3,	// (0x00016e91) bg_button_pane_cp027

0xddbb,	// (0x0001b959) ncim_query_button_pane_g1

0x92f3,	// (0x00016e91) list_highlight_pane_cp012

0xddc5,	// (0x0001b963) ncim_list_query_list_pane_g1

0xddcd,	// (0x0001b96b) ncim_list_query_list_pane_t1

0xcf1a,	// (0x0001aab8) cam4_indicators_pane_g3_ParamLimits

0xcf1a,	// (0x0001aab8) cam4_indicators_pane_g3

0x5fae,	// (0x00013b4c) vid4_indicators_pane_g5_ParamLimits

0x5fae,	// (0x00013b4c) vid4_indicators_pane_g5

0xd63c,	// (0x0001b1da) vid4_progress_pane_g5_ParamLimits

0xd63c,	// (0x0001b1da) vid4_progress_pane_g5

0x7830,	// (0x000153ce) main_ncimui_pane_g1

0x7886,	// (0x00015424) ncimui_group_query_pane_ParamLimits

0x7886,	// (0x00015424) ncimui_group_query_pane

0x78c2,	// (0x00015460) ncimui_list_pane_ParamLimits

0x78c2,	// (0x00015460) ncimui_list_pane

0x78e3,	// (0x00015481) ncimui_text_pane_ParamLimits

0x78e3,	// (0x00015481) ncimui_text_pane

0x799b,	// (0x00015539) ncimui_text_pane_t1_ParamLimits

0x799b,	// (0x00015539) ncimui_text_pane_t1

0xdddb,	// (0x0001b979) ncimui_list_single_graphic_pane_ParamLimits

0xdddb,	// (0x0001b979) ncimui_list_single_graphic_pane

0x79b9,	// (0x00015557) ncimui_query_pane_ParamLimits

0x79b9,	// (0x00015557) ncimui_query_pane

0x92f3,	// (0x00016e91) list_highlight_pane_cp013

0xddeb,	// (0x0001b989) ncim_list_query_list_pane_t1_copy1

0xddc5,	// (0x0001b963) ncim_list_single_graphic_pane_g1

0xddf9,	// (0x0001b997) ncim_query_button_pane_cp01

0xde05,	// (0x0001b9a3) ncim_query_entry_pane_ParamLimits

0xde05,	// (0x0001b9a3) ncim_query_entry_pane

0xde18,	// (0x0001b9b6) ncimui_query_pane_g1

0xde24,	// (0x0001b9c2) ncimui_query_pane_t1_ParamLimits

0xde24,	// (0x0001b9c2) ncimui_query_pane_t1

0x9363,	// (0x00016f01) input_focus_pane_cp012

0xde3d,	// (0x0001b9db) ncim_query_entry_pane_t1

0x9ad4,	// (0x00017672) main_im_pane_ParamLimits

0x9363,	// (0x00016f01) main_mobtv_pane_ParamLimits

0x9363,	// (0x00016f01) main_mobtv_pane

0x76ca,	// (0x00015268) main_cset6_slider_pane_g18_ParamLimits

0x76ca,	// (0x00015268) main_cset6_slider_pane_g18

0x76d6,	// (0x00015274) main_cset6_slider_pane_g19_ParamLimits

0x76d6,	// (0x00015274) main_cset6_slider_pane_g19

0xde4f,	// (0x0001b9ed) bg_main_mobtv_pane_ParamLimits

0xde4f,	// (0x0001b9ed) bg_main_mobtv_pane

0x79cc,	// (0x0001556a) main_mobtv_info_pane

0x79d5,	// (0x00015573) main_mobtv_loading_pane_ParamLimits

0x79d5,	// (0x00015573) main_mobtv_loading_pane

0xde5d,	// (0x0001b9fb) main_mobtv_pg_channel_list_pane

0xde67,	// (0x0001ba05) main_mobtv_pg_hdr_pane

0x79e2,	// (0x00015580) main_mobtv_programe_curr_pane_ParamLimits

0x79e2,	// (0x00015580) main_mobtv_programe_curr_pane

0x79ef,	// (0x0001558d) main_mobtv_programe_next_pane_ParamLimits

0x79ef,	// (0x0001558d) main_mobtv_programe_next_pane

0xde70,	// (0x0001ba0e) popup_mobtv_noti_window

0xc22c,	// (0x00019dca) main_tv_pg_hdr_pane_g1

0xde78,	// (0x0001ba16) main_tv_pg_hdr_pane_g2

0xde80,	// (0x0001ba1e) main_tv_pg_hdr_pane_g3

0xde88,	// (0x0001ba26) main_tv_pg_hdr_pane_g4

0xde90,	// (0x0001ba2e) main_tv_pg_hdr_pane_g5

0xde9a,	// (0x0001ba38) main_tv_pg_hdr_pane_g6

0xdea4,	// (0x0001ba42) main_tv_pg_hdr_pane_g7

0xdeae,	// (0x0001ba4c) main_tv_pg_hdr_pane_g8

0xdeb8,	// (0x0001ba56) main_tv_pg_hdr_pane_g9

0xdec2,	// (0x0001ba60) main_tv_pg_hdr_pane_g10

0xdecc,	// (0x0001ba6a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x0001d7bb) main_tv_pg_hdr_pane_g

0xded6,	// (0x0001ba74) main_tv_pg_hdr_pane_t1

0xdee4,	// (0x0001ba82) main_tv_pg_hdr_pane_t2

0xdef2,	// (0x0001ba90) main_tv_pg_hdr_pane_t3

0xdf02,	// (0x0001baa0) main_tv_pg_hdr_pane_t4

0xdf12,	// (0x0001bab0) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x0001d7d2) main_tv_pg_hdr_pane_t

0xdf22,	// (0x0001bac0) single_mobtv_pg_channel_pane_ParamLimits

0xdf22,	// (0x0001bac0) single_mobtv_pg_channel_pane

0xdf34,	// (0x0001bad2) single_mobtv_pg_channel_table_pane

0xdf3d,	// (0x0001badb) single_mobtv_pg_channel_thumb_pane

0xdf46,	// (0x0001bae4) single_tv_pg_channel_pane_g1

0xdf4f,	// (0x0001baed) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x0001d7dd) single_tv_pg_channel_pane_g

0xc498,	// (0x0001a036) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc498,	// (0x0001a036) bg_single_mobtv_pg_channel_thumb_pane

0xdf58,	// (0x0001baf6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf58,	// (0x0001baf6) single_mobtv_pg_channel_thumb_pane_g1

0xdf66,	// (0x0001bb04) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf66,	// (0x0001bb04) single_mobtv_pg_channel_thumb_pane_g2

0xdf72,	// (0x0001bb10) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf72,	// (0x0001bb10) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x0001d7e2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x0001d7e2) single_mobtv_pg_channel_thumb_pane_g

0xdf7e,	// (0x0001bb1c) single_mobtv_pg_channel_thumb_pane_t1

0xdf8c,	// (0x0001bb2a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x0001d7e9) single_mobtv_pg_channel_thumb_pane_t

0xc22c,	// (0x00019dca) bg_single_mobtv_pg_channel_table_pane_g1

0xc22c,	// (0x00019dca) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0001d299) bg_single_mobtv_pg_channel_table_pane_g

0xdf9a,	// (0x0001bb38) single_mobtv_pg_channel_table_pane_t1

0xdfa8,	// (0x0001bb46) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x0001d7ee) single_mobtv_pg_channel_table_pane_t

0x7a04,	// (0x000155a2) main_mobtv_info_pane_g1_ParamLimits

0x7a04,	// (0x000155a2) main_mobtv_info_pane_g1

0x7a22,	// (0x000155c0) main_mobtv_info_pane_t1_ParamLimits

0x7a22,	// (0x000155c0) main_mobtv_info_pane_t1

0x7a9a,	// (0x00015638) main_mobtv_info_pane_t2_ParamLimits

0x7a9a,	// (0x00015638) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x0001d7f8) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x0001d7f8) main_mobtv_info_pane_t

0x7b29,	// (0x000156c7) wait_bar_pane_cp05

0x7b3b,	// (0x000156d9) main_mobtv_loading_pane_g1_ParamLimits

0x7b3b,	// (0x000156d9) main_mobtv_loading_pane_g1

0x7b4e,	// (0x000156ec) main_mobtv_loading_pane_g2_ParamLimits

0x7b4e,	// (0x000156ec) main_mobtv_loading_pane_g2

0x7b5a,	// (0x000156f8) main_mobtv_loading_pane_g3_ParamLimits

0x7b5a,	// (0x000156f8) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x0001d7ff) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x0001d7ff) main_mobtv_loading_pane_g

0xdfb6,	// (0x0001bb54) main_mobtv_loading_pane_t1_ParamLimits

0xdfb6,	// (0x0001bb54) main_mobtv_loading_pane_t1

0xdfce,	// (0x0001bb6c) main_mobtv_loading_pane_t2_ParamLimits

0xdfce,	// (0x0001bb6c) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x0001d806) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x0001d806) main_mobtv_loading_pane_t

0x7b6d,	// (0x0001570b) wait_bar_pane_cp06_ParamLimits

0x7b6d,	// (0x0001570b) wait_bar_pane_cp06

0xdff2,	// (0x0001bb90) main_mobtv_programe_curr_pane_t1

0xe000,	// (0x0001bb9e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x0001d80b) main_mobtv_programe_curr_pane_t

0xe00e,	// (0x0001bbac) main_mobtv_programe_next_pane_t1

0xe01c,	// (0x0001bbba) main_mobtv_programe_next_pane_t2

0xe02a,	// (0x0001bbc8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x0001d810) main_mobtv_programe_next_pane_t

0x92f3,	// (0x00016e91) bg_popup_mobtv_noti_window_pane

0xe038,	// (0x0001bbd6) popup_mobtv_noti_window_g1

0xe040,	// (0x0001bbde) popup_mobtv_noti_window_t1

0xe04e,	// (0x0001bbec) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x0001d817) popup_mobtv_noti_window_t

0xc22c,	// (0x00019dca) bg_popup_mobtv_noti_window_pane_g1

0x92f3,	// (0x00016e91) sc_clock_pane

0x92f3,	// (0x00016e91) main_fs_bigclock_pane

0x72f1,	// (0x00014e8f) blid2_tripm_pane_t4_ParamLimits

0x72f1,	// (0x00014e8f) blid2_tripm_pane_t4

0x7b7c,	// (0x0001571a) sc_clock_pane_g1_ParamLimits

0x7b7c,	// (0x0001571a) sc_clock_pane_g1

0x7b8e,	// (0x0001572c) sc_clock_pane_t1_ParamLimits

0x7b8e,	// (0x0001572c) sc_clock_pane_t1

0x7bb0,	// (0x0001574e) sc_clock_pane_t2_ParamLimits

0x7bb0,	// (0x0001574e) sc_clock_pane_t2

0x7bc8,	// (0x00015766) sc_clock_pane_t3_ParamLimits

0x7bc8,	// (0x00015766) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x0001d81c) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x0001d81c) sc_clock_pane_t

0x89ce,	// (0x0001656c) main_fs_bigclock_indicator_pane_ParamLimits

0x89ce,	// (0x0001656c) main_fs_bigclock_indicator_pane

0xc468,	// (0x0001a006) main_fs_bigclock_pane_g1_ParamLimits

0xc468,	// (0x0001a006) main_fs_bigclock_pane_g1

0x89da,	// (0x00016578) main_fs_bigclock_pane_t1_ParamLimits

0x89da,	// (0x00016578) main_fs_bigclock_pane_t1

0x89ec,	// (0x0001658a) main_fs_bigclock_pane_t2_ParamLimits

0x89ec,	// (0x0001658a) main_fs_bigclock_pane_t2

0x8a00,	// (0x0001659e) main_fs_bigclock_pane_t3_ParamLimits

0x8a00,	// (0x0001659e) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x0001da1b) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x0001da1b) main_fs_bigclock_pane_t

0xec89,	// (0x0001c827) main_fs_bigclock_indicator_pane_g1

0xdd1a,	// (0x0001b8b8) ncim_query_content_pane_g2_ParamLimits

0xdd1a,	// (0x0001b8b8) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x0001d7a9) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x0001d7a9) ncim_query_content_pane_g

0x7be1,	// (0x0001577f) sc_clock_pane_t4_ParamLimits

0x7be1,	// (0x0001577f) sc_clock_pane_t4

0x9363,	// (0x00016f01) main_radioblah_pane

0xce60,	// (0x0001a9fe) cell_call4_button_pane_t1_copy1_ParamLimits

0xce60,	// (0x0001a9fe) cell_call4_button_pane_t1_copy1

0x7838,	// (0x000153d6) main_ncimui_pane_t1_ParamLimits

0x7838,	// (0x000153d6) main_ncimui_pane_t1

0x7852,	// (0x000153f0) main_ncimui_pane_t2_ParamLimits

0x7852,	// (0x000153f0) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x0001d7a2) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x0001d7a2) main_ncimui_pane_t

0xe194,	// (0x0001bd32) main_radioblah_anim_pane_ParamLimits

0xe194,	// (0x0001bd32) main_radioblah_anim_pane

0xe1a5,	// (0x0001bd43) main_radioblah_info_pane_ParamLimits

0xe1a5,	// (0x0001bd43) main_radioblah_info_pane

0xe1b9,	// (0x0001bd57) main_radioblah_pane_t1_ParamLimits

0xe1b9,	// (0x0001bd57) main_radioblah_pane_t1

0xe1d5,	// (0x0001bd73) main_radioblah_pane_t2_ParamLimits

0xe1d5,	// (0x0001bd73) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x0001d83d) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x0001d83d) main_radioblah_pane_t

0x7c8f,	// (0x0001582d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7c8f,	// (0x0001582d) main_radioblah_rocker_ctrl_pane

0xe225,	// (0x0001bdc3) main_radioblah_info_pane_t1_ParamLimits

0xe225,	// (0x0001bdc3) main_radioblah_info_pane_t1

0x7ce7,	// (0x00015885) main_radioblah_info_pane_t2_ParamLimits

0x7ce7,	// (0x00015885) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x0001d846) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x0001d846) main_radioblah_info_pane_t

0xc22c,	// (0x00019dca) main_radioblah_rocker_ctrl_pane_g1

0x7d97,	// (0x00015935) main_radioblah_rocker_ctrl_pane_g2

0x7d9f,	// (0x0001593d) main_radioblah_rocker_ctrl_pane_g3

0x7da7,	// (0x00015945) main_radioblah_rocker_ctrl_pane_g4

0x7daf,	// (0x0001594d) main_radioblah_rocker_ctrl_pane_g5

0x7db7,	// (0x00015955) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x0001d84f) main_radioblah_rocker_ctrl_pane_g

0x75a0,	// (0x0001513e) main_cset_text2_pane_t1_copy1_ParamLimits

0xceea,	// (0x0001aa88) cam4_image_uncrop_qvga_pane

0xcf43,	// (0x0001aae1) vid4_image_uncrop_qcif_pane

0xd89e,	// (0x0001b43c) cam6_image_uncrop_qvga_pane_ParamLimits

0xd89e,	// (0x0001b43c) cam6_image_uncrop_qvga_pane

0xd974,	// (0x0001b512) vid6_image_uncrop_qcif_pane_ParamLimits

0xd974,	// (0x0001b512) vid6_image_uncrop_qcif_pane

0x92f3,	// (0x00016e91) bg_popup_preview_window_pane_cp03

0xdccc,	// (0x0001b86a) list_cset_text2_pane

0xdcd4,	// (0x0001b872) main_cset6_text2_pane_g1

0xdcdc,	// (0x0001b87a) main_cset6_text2_pane_t1

0x7dbf,	// (0x0001595d) list_cset_text2_pane_t1_ParamLimits

0x7dbf,	// (0x0001595d) list_cset_text2_pane_t1

0x9363,	// (0x00016f01) main_radioblah_pane_ParamLimits

0x7b15,	// (0x000156b3) main_mobtv_info_pane_t3_ParamLimits

0x7b15,	// (0x000156b3) main_mobtv_info_pane_t3

0x7c7d,	// (0x0001581b) main_radioblah_pane_g1

0x7cb7,	// (0x00015855) main_radioblah_info_pane_g1

0x7d3c,	// (0x000158da) main_radioblah_info_pane_t3_ParamLimits

0x7d3c,	// (0x000158da) main_radioblah_info_pane_t3

0x2711,	// (0x000102af) highlight_cell_cale_month_pane_ParamLimits

0x2711,	// (0x000102af) highlight_cell_cale_month_pane

0x92f3,	// (0x00016e91) main_phob_fisheye_pane

0xc58c,	// (0x0001a12a) scroll_pane_cp0031_ParamLimits

0xc58c,	// (0x0001a12a) scroll_pane_cp0031

0xda82,	// (0x0001b620) wait_bar_pane_cp08_ParamLimits

0x7625,	// (0x000151c3) cset_list_set_pane_copy1_ParamLimits

0xe25f,	// (0x0001bdfd) highlight_cell_cale_month_pane_g1

0x7dd8,	// (0x00015976) highlight_cell_cale_month_pane_t1

0xd5fc,	// (0x0001b19a) list_gen_pane_cp01

0xd10c,	// (0x0001acaa) scroll_pane_01

0x7de6,	// (0x00015984) list_single_double_fisheye_pane

0x7def,	// (0x0001598d) list_double_fisheye_pane_g1_ParamLimits

0x7def,	// (0x0001598d) list_double_fisheye_pane_g1

0x7dfb,	// (0x00015999) list_double_fisheye_pane_g2_ParamLimits

0x7dfb,	// (0x00015999) list_double_fisheye_pane_g2

0x7e0f,	// (0x000159ad) list_double_fisheye_pane_g3_ParamLimits

0x7e0f,	// (0x000159ad) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x0001d85c) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x0001d85c) list_double_fisheye_pane_g

0x7e38,	// (0x000159d6) list_double_fisheye_pane_t1_ParamLimits

0x7e38,	// (0x000159d6) list_double_fisheye_pane_t1

0x7e53,	// (0x000159f1) list_double_fisheye_pane_t2_ParamLimits

0x7e53,	// (0x000159f1) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x0001d867) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x0001d867) list_double_fisheye_pane_t

0x92f3,	// (0x00016e91) main_call5_pane

0x7c0c,	// (0x000157aa) sc_swipe_pane_ParamLimits

0x7c0c,	// (0x000157aa) sc_swipe_pane

0x7e88,	// (0x00015a26) call5_image_pane_ParamLimits

0x7e88,	// (0x00015a26) call5_image_pane

0x7ea5,	// (0x00015a43) call5_swipe_1_pane_ParamLimits

0x7ea5,	// (0x00015a43) call5_swipe_1_pane

0x7eb8,	// (0x00015a56) call5_swipe_2_pane_ParamLimits

0x7eb8,	// (0x00015a56) call5_swipe_2_pane

0x7ee3,	// (0x00015a81) popup_call5_audio_first_window_ParamLimits

0x7ee3,	// (0x00015a81) popup_call5_audio_first_window

0xc498,	// (0x0001a036) call5_swipe_1_pane_g1_ParamLimits

0xc498,	// (0x0001a036) call5_swipe_1_pane_g1

0xe267,	// (0x0001be05) call5_swipe_1_pane_g2_ParamLimits

0xe267,	// (0x0001be05) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0001d86c) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0001d86c) call5_swipe_1_pane_g

0xe273,	// (0x0001be11) call5_swipe_1_pane_t1_ParamLimits

0xe273,	// (0x0001be11) call5_swipe_1_pane_t1

0xc498,	// (0x0001a036) call5_swipe_2_pane_g1_ParamLimits

0xc498,	// (0x0001a036) call5_swipe_2_pane_g1

0xe288,	// (0x0001be26) call5_swipe_2_pane_g2_ParamLimits

0xe288,	// (0x0001be26) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x0001d871) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x0001d871) call5_swipe_2_pane_g

0xe294,	// (0x0001be32) call5_swipe_2_pane_t1_ParamLimits

0xe294,	// (0x0001be32) call5_swipe_2_pane_t1

0xe2a9,	// (0x0001be47) sc_swipe_pane_g1_ParamLimits

0xe2a9,	// (0x0001be47) sc_swipe_pane_g1

0xe2b6,	// (0x0001be54) sc_swipe_pane_g2_ParamLimits

0xe2b6,	// (0x0001be54) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x0001d876) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x0001d876) sc_swipe_pane_g

0xe2c2,	// (0x0001be60) sc_swipe_pane_t1_ParamLimits

0xe2c2,	// (0x0001be60) sc_swipe_pane_t1

0x92f3,	// (0x00016e91) main_cmail_launcher_pane

0x7ef4,	// (0x00015a92) aid_size_cell_cmail_l_ParamLimits

0x7ef4,	// (0x00015a92) aid_size_cell_cmail_l

0x7f0e,	// (0x00015aac) grid_cmail_l_pane_ParamLimits

0x7f0e,	// (0x00015aac) grid_cmail_l_pane

0x7f29,	// (0x00015ac7) cell_cmail_l_pane_ParamLimits

0x7f29,	// (0x00015ac7) cell_cmail_l_pane

0x7f4f,	// (0x00015aed) cell_cmail_l_pane_g1_ParamLimits

0x7f4f,	// (0x00015aed) cell_cmail_l_pane_g1

0x7f5b,	// (0x00015af9) cell_cmail_l_pane_t1_ParamLimits

0x7f5b,	// (0x00015af9) cell_cmail_l_pane_t1

0xe2d7,	// (0x0001be75) cell_cmail_l_pane_t2_ParamLimits

0xe2d7,	// (0x0001be75) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x0001d87b) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x0001d87b) cell_cmail_l_pane_t

0x9363,	// (0x00016f01) grid_highlight_pane_cp018_ParamLimits

0x9363,	// (0x00016f01) grid_highlight_pane_cp018

0x0c88,	// (0x0000e826) main2_pane_ParamLimits

0x0c88,	// (0x0000e826) main2_pane

0x9b91,	// (0x0001772f) popup_sp_fs_action_menu_bg_pane_g1

0x9b99,	// (0x00017737) popup_sp_fs_action_menu_bg_pane_g2

0x9ba1,	// (0x0001773f) popup_sp_fs_action_menu_bg_pane_g3

0x9ba9,	// (0x00017747) popup_sp_fs_action_menu_bg_pane_g4

0x9bb1,	// (0x0001774f) popup_sp_fs_action_menu_bg_pane_g5

0x9bb9,	// (0x00017757) popup_sp_fs_action_menu_bg_pane_g6

0x9bc1,	// (0x0001775f) popup_sp_fs_action_menu_bg_pane_g7

0x9bc9,	// (0x00017767) popup_sp_fs_action_menu_bg_pane_g8

0x9bd1,	// (0x0001776f) popup_sp_fs_action_menu_bg_pane_g9

0x9bd9,	// (0x00017777) popup_sp_fs_action_menu_bg_pane_g10

0x9bd9,	// (0x00017777) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0001cd45) popup_sp_fs_action_menu_bg_pane_g

0x9da9,	// (0x00017947) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9da9,	// (0x00017947) list_medium_line_x2_t3_g3_g1

0x9db5,	// (0x00017953) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9db5,	// (0x00017953) list_medium_line_x2_t3_g3_g2

0x9dc1,	// (0x0001795f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9dc1,	// (0x0001795f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0001cdf5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0001cdf5) list_medium_line_x2_t3_g3_g

0x9dcd,	// (0x0001796b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9dcd,	// (0x0001796b) list_medium_line_x2_t3_g3_t1

0x1a30,	// (0x0000f5ce) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1a30,	// (0x0000f5ce) list_medium_line_x2_t3_g3_t2

0x9de2,	// (0x00017980) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9de2,	// (0x00017980) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0001cdfc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0001cdfc) list_medium_line_x2_t3_g3_t

0x9da9,	// (0x00017947) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9da9,	// (0x00017947) list_medium_line_x2_t3_g2_g1

0x9dc1,	// (0x0001795f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9dc1,	// (0x0001795f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0001ce03) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0001ce03) list_medium_line_x2_t3_g2_g

0x9df7,	// (0x00017995) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9df7,	// (0x00017995) list_medium_line_x2_t3_g2_t1

0x9e0d,	// (0x000179ab) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9e0d,	// (0x000179ab) list_medium_line_x2_t3_g2_t2

0x9de2,	// (0x00017980) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9de2,	// (0x00017980) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0001ce08) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0001ce08) list_medium_line_x2_t3_g2_t

0x9da9,	// (0x00017947) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9da9,	// (0x00017947) list_medium_line_x2_t4_g4_g1

0x9e1f,	// (0x000179bd) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9e1f,	// (0x000179bd) list_medium_line_x2_t4_g4_g2

0x9db5,	// (0x00017953) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9db5,	// (0x00017953) list_medium_line_x2_t4_g4_g3

0x9e2b,	// (0x000179c9) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9e2b,	// (0x000179c9) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0001ce0f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0001ce0f) list_medium_line_x2_t4_g4_g

0x1a44,	// (0x0000f5e2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1a44,	// (0x0000f5e2) list_medium_line_x2_t4_g4_t1

0x1a5b,	// (0x0000f5f9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1a5b,	// (0x0000f5f9) list_medium_line_x2_t4_g4_t2

0x1a70,	// (0x0000f60e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1a70,	// (0x0000f60e) list_medium_line_x2_t4_g4_t3

0x9e37,	// (0x000179d5) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9e37,	// (0x000179d5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0001ce18) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0001ce18) list_medium_line_x2_t4_g4_t

0x9da9,	// (0x00017947) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9da9,	// (0x00017947) list_medium_line_x2_t2_g4_g1

0x9e1f,	// (0x000179bd) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9e1f,	// (0x000179bd) list_medium_line_x2_t2_g4_g2

0x9db5,	// (0x00017953) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9db5,	// (0x00017953) list_medium_line_x2_t2_g4_g3

0x9dc1,	// (0x0001795f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9dc1,	// (0x0001795f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0001ce7f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0001ce7f) list_medium_line_x2_t2_g4_g

0xa121,	// (0x00017cbf) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa121,	// (0x00017cbf) list_medium_line_x2_t2_g4_t1

0x9de2,	// (0x00017980) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9de2,	// (0x00017980) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0001ce88) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0001ce88) list_medium_line_x2_t2_g4_t

0x9da9,	// (0x00017947) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9da9,	// (0x00017947) list_medium_line_x2_t2_g3_g1

0x9db5,	// (0x00017953) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9db5,	// (0x00017953) list_medium_line_x2_t2_g3_g2

0x9dc1,	// (0x0001795f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9dc1,	// (0x0001795f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0001cdf5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0001cdf5) list_medium_line_x2_t2_g3_g

0xa136,	// (0x00017cd4) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa136,	// (0x00017cd4) list_medium_line_x2_t2_g3_t1

0x9de2,	// (0x00017980) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9de2,	// (0x00017980) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0001ce8d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0001ce8d) list_medium_line_x2_t2_g3_t

0x2853,	// (0x000103f1) main_sp_fs_list_pane_ParamLimits

0x2853,	// (0x000103f1) main_sp_fs_list_pane

0x285f,	// (0x000103fd) sp_fs_scroll_pane_ParamLimits

0x285f,	// (0x000103fd) sp_fs_scroll_pane

0x286b,	// (0x00010409) list_medium_line_x2_t3_t1

0x287b,	// (0x00010419) list_medium_line_x2_t3_t2

0xa39e,	// (0x00017f3c) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0001ced8) list_medium_line_x2_t3_t

0x2889,	// (0x00010427) list_medium_line_x3_t4_t1

0x2899,	// (0x00010437) list_medium_line_x3_t4_t2

0xa3ac,	// (0x00017f4a) list_medium_line_x3_t4_t3

0xa39e,	// (0x00017f3c) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0001cedf) list_medium_line_x3_t4_t

0x28a7,	// (0x00010445) list_medium_line_x4_t5_t1

0x28b7,	// (0x00010455) list_medium_line_x4_t5_t2

0xa3ac,	// (0x00017f4a) list_medium_line_x4_t5_t3

0xa3ba,	// (0x00017f58) list_medium_line_x4_t5_t4

0xa39e,	// (0x00017f3c) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0001cee8) list_medium_line_x4_t5_t

0x9da9,	// (0x00017947) list_medium_line_t4_g4_g1_ParamLimits

0x9da9,	// (0x00017947) list_medium_line_t4_g4_g1

0x9e2b,	// (0x000179c9) list_medium_line_t4_g4_g2_ParamLimits

0x9e2b,	// (0x000179c9) list_medium_line_t4_g4_g2

0xa3c8,	// (0x00017f66) list_medium_line_t4_g4_g3_ParamLimits

0xa3c8,	// (0x00017f66) list_medium_line_t4_g4_g3

0x9dc1,	// (0x0001795f) list_medium_line_t4_g4_g4_ParamLimits

0x9dc1,	// (0x0001795f) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0001cef3) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0001cef3) list_medium_line_t4_g4_g

0xa3d4,	// (0x00017f72) list_medium_line_t4_g4_t1_ParamLimits

0xa3d4,	// (0x00017f72) list_medium_line_t4_g4_t1

0xa3e9,	// (0x00017f87) list_medium_line_t4_g4_t2_ParamLimits

0xa3e9,	// (0x00017f87) list_medium_line_t4_g4_t2

0xa3fe,	// (0x00017f9c) list_medium_line_t4_g4_t3_ParamLimits

0xa3fe,	// (0x00017f9c) list_medium_line_t4_g4_t3

0x9de2,	// (0x00017980) list_medium_line_t4_g4_t4_ParamLimits

0x9de2,	// (0x00017980) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0001cefc) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0001cefc) list_medium_line_t4_g4_t

0x2988,	// (0x00010526) chi_dic_find_pane_g1

0x3a94,	// (0x00011632) main_tport_pane

0xd281,	// (0x0001ae1f) list_medium_line_plain_t1

0xd2d3,	// (0x0001ae71) list_medium_line_t2_g2_g1_ParamLimits

0xd2d3,	// (0x0001ae71) list_medium_line_t2_g2_g1

0xd2df,	// (0x0001ae7d) list_medium_line_t2_g2_g2_ParamLimits

0xd2df,	// (0x0001ae7d) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x0001d5b8) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x0001d5b8) list_medium_line_t2_g2_g

0x6ac5,	// (0x00014663) list_medium_line_t2_g2_t1_ParamLimits

0x6ac5,	// (0x00014663) list_medium_line_t2_g2_t1

0x6adf,	// (0x0001467d) list_medium_line_t2_g2_t2_ParamLimits

0x6adf,	// (0x0001467d) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x0001d5bd) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x0001d5bd) list_medium_line_t2_g2_t

0xd69d,	// (0x0001b23b) aid_sp_fs_list_icon_a_sm

0xd6a5,	// (0x0001b243) aid_sp_fs_list_icon_d

0xd6ad,	// (0x0001b24b) aid_sp_fs_text_primary

0xd6b6,	// (0x0001b254) aid_sp_fs_text_secondary

0xd6bf,	// (0x0001b25d) list_medium_line

0xd6bf,	// (0x0001b25d) list_medium_line_g2

0xd6bf,	// (0x0001b25d) list_medium_line_g3

0xd6bf,	// (0x0001b25d) list_medium_line_plain

0xd6bf,	// (0x0001b25d) list_medium_line_plain_t2

0xd6bf,	// (0x0001b25d) list_medium_line_plain_t3

0xd6bf,	// (0x0001b25d) list_medium_line_right_icon

0xd6bf,	// (0x0001b25d) list_medium_line_right_iconx2

0xd6bf,	// (0x0001b25d) list_medium_line_t2

0xd6bf,	// (0x0001b25d) list_medium_line_t2_g2

0xd6bf,	// (0x0001b25d) list_medium_line_t2_g3

0xd6bf,	// (0x0001b25d) list_medium_line_t2_right_icon

0xd6bf,	// (0x0001b25d) list_medium_line_t2_right_iconx2

0xd6bf,	// (0x0001b25d) list_medium_line_t3

0xd6bf,	// (0x0001b25d) list_medium_line_t3_g2

0xd6bf,	// (0x0001b25d) list_medium_line_t3_g3

0xd6bf,	// (0x0001b25d) list_medium_line_t3_right_iconx2

0xd6c8,	// (0x0001b266) list_medium_line_t4_g4

0xd6d1,	// (0x0001b26f) list_medium_line_x2

0xd6d1,	// (0x0001b26f) list_medium_line_x2_t2_g2

0xd6d1,	// (0x0001b26f) list_medium_line_x2_t2_g3

0xd6d1,	// (0x0001b26f) list_medium_line_x2_t2_g4

0xd6d1,	// (0x0001b26f) list_medium_line_x2_t3

0xd6d1,	// (0x0001b26f) list_medium_line_x2_t3_g2

0xd6d1,	// (0x0001b26f) list_medium_line_x2_t3_g3

0xd6d1,	// (0x0001b26f) list_medium_line_x2_t3_g4

0xd6d1,	// (0x0001b26f) list_medium_line_x2_t4_g2

0xd6d1,	// (0x0001b26f) list_medium_line_x2_t4_g4

0xd6da,	// (0x0001b278) list_medium_line_x3

0xd6da,	// (0x0001b278) list_medium_line_x3_t4

0xd6da,	// (0x0001b278) list_medium_line_x3_t4_g4

0xd6c8,	// (0x0001b266) list_medium_line_x4_t4

0xd6c8,	// (0x0001b266) list_medium_line_x4_t4_g7

0xd6c8,	// (0x0001b266) list_medium_line_x4_t5

0xd6e3,	// (0x0001b281) list_single_fs_dyc_pane_ParamLimits

0xd6e3,	// (0x0001b281) list_single_fs_dyc_pane

0x9da9,	// (0x00017947) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9da9,	// (0x00017947) list_medium_line_x4_t4_g7_g1

0xdbfb,	// (0x0001b799) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdbfb,	// (0x0001b799) list_medium_line_x4_t4_g7_g2

0xdc07,	// (0x0001b7a5) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdc07,	// (0x0001b7a5) list_medium_line_x4_t4_g7_g3

0xdc16,	// (0x0001b7b4) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdc16,	// (0x0001b7b4) list_medium_line_x4_t4_g7_g4

0xdc22,	// (0x0001b7c0) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdc22,	// (0x0001b7c0) list_medium_line_x4_t4_g7_g5

0xdc31,	// (0x0001b7cf) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdc31,	// (0x0001b7cf) list_medium_line_x4_t4_g7_g6

0xdc40,	// (0x0001b7de) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdc40,	// (0x0001b7de) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x0001d788) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x0001d788) list_medium_line_x4_t4_g7_g

0xdc4c,	// (0x0001b7ea) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdc4c,	// (0x0001b7ea) list_medium_line_x4_t4_g7_t1

0xdc61,	// (0x0001b7ff) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdc61,	// (0x0001b7ff) list_medium_line_x4_t4_g7_t2

0xdc76,	// (0x0001b814) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdc76,	// (0x0001b814) list_medium_line_x4_t4_g7_t3

0xdc8b,	// (0x0001b829) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc8b,	// (0x0001b829) list_medium_line_x4_t4_g7_t4

0xdc9d,	// (0x0001b83b) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc9d,	// (0x0001b83b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x0001d797) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x0001d797) list_medium_line_x4_t4_g7_t

0xdcaf,	// (0x0001b84d) list_single_dyc_row_pane_ParamLimits

0xdcaf,	// (0x0001b84d) list_single_dyc_row_pane

0x7e75,	// (0x00015a13) call5_gesture_pane_ParamLimits

0x7e75,	// (0x00015a13) call5_gesture_pane

0x7ecb,	// (0x00015a69) call5_windows_pane_ParamLimits

0x7ecb,	// (0x00015a69) call5_windows_pane

0x7f71,	// (0x00015b0f) call5_swipe_1_pane_cp_ParamLimits

0x7f71,	// (0x00015b0f) call5_swipe_1_pane_cp

0x7f7d,	// (0x00015b1b) call5_swipe_2_pane_cp_ParamLimits

0x7f7d,	// (0x00015b1b) call5_swipe_2_pane_cp

0xa869,	// (0x00018407) call5_image_pane_cp

0x7f89,	// (0x00015b27) popup_call5_audio_first_window_cp_ParamLimits

0x7f89,	// (0x00015b27) popup_call5_audio_first_window_cp

0xe2a9,	// (0x0001be47) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2a9,	// (0x0001be47) call5_swipe_1_pane_g1_cp

0xe2e9,	// (0x0001be87) call5_swipe_1_pane_g2_cp

0xe2c2,	// (0x0001be60) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2c2,	// (0x0001be60) call5_swipe_1_pane_t1_cp

0xe2a9,	// (0x0001be47) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2a9,	// (0x0001be47) call5_swipe_2_pane_g1_cp

0xe2f1,	// (0x0001be8f) call5_swipe_2_pane_g2_cp

0xe2f9,	// (0x0001be97) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2f9,	// (0x0001be97) call5_swipe_2_pane_t1_cp

0x9363,	// (0x00016f01) main_sp_fs_email_pane

0xe30e,	// (0x0001beac) main_sp_fs_listscroll_pane_te

0xe317,	// (0x0001beb5) popup_sp_fs_action_menu_pane_ParamLimits

0xe317,	// (0x0001beb5) popup_sp_fs_action_menu_pane

0xc22c,	// (0x00019dca) bg_sp_fs_ctrlbar_pane_g1

0xe35b,	// (0x0001bef9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe364,	// (0x0001bf02) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe36d,	// (0x0001bf0b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc22c,	// (0x00019dca) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x0001d880) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc011,	// (0x00019baf) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc011,	// (0x00019baf) bg_sp_fs_ctrlbar_ddmenu_pane

0xe376,	// (0x0001bf14) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe376,	// (0x0001bf14) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe382,	// (0x0001bf20) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe382,	// (0x0001bf20) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x0001d889) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x0001d889) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe38e,	// (0x0001bf2c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe38e,	// (0x0001bf2c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe3a8,	// (0x0001bf46) list_medium_line_t2_right_icon_g1

0x7f97,	// (0x00015b35) list_medium_line_t2_right_icon_t1

0x7fa7,	// (0x00015b45) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x0001d88e) list_medium_line_t2_right_icon_t

0xbd26,	// (0x000198c4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbd26,	// (0x000198c4) bg_sp_fs_ctrlbar_pane

0x8004,	// (0x00015ba2) main_sp_fs_ctrlbar_button_pane_cp01

0x800e,	// (0x00015bac) main_sp_fs_ctrlbar_ddmenu_pane

0xe3e8,	// (0x0001bf86) main_sp_fs_ctrlbar_pane_g1

0xe3f4,	// (0x0001bf92) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x0001d893) main_sp_fs_ctrlbar_pane_g

0xe400,	// (0x0001bf9e) main_sp_fs_ctrlbar_pane_t1

0x8018,	// (0x00015bb6) main_sp_fs_ctrlbar_pane

0x803c,	// (0x00015bda) main_sp_fs_listscroll_pane_te_cp01

0x805c,	// (0x00015bfa) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x805c,	// (0x00015bfa) popup_sp_fs_action_menu_pane_cp01

0x9363,	// (0x00016f01) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9363,	// (0x00016f01) bg_sp_fs_highlight_list_pane_cp01

0xe425,	// (0x0001bfc3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe425,	// (0x0001bfc3) sp_fs_action_menu_list_gene_pane_g1

0xe434,	// (0x0001bfd2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe434,	// (0x0001bfd2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0001d89d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0001d89d) sp_fs_action_menu_list_gene_pane_g

0xe441,	// (0x0001bfdf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe441,	// (0x0001bfdf) sp_fs_action_menu_list_gene_pane_t1

0xe459,	// (0x0001bff7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe459,	// (0x0001bff7) sp_fs_action_menu_list_gene_pane

0xe47a,	// (0x0001c018) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe47a,	// (0x0001c018) popup_sp_fs_action_menu_bg_pane

0xe488,	// (0x0001c026) sp_fs_action_menu_list_pane_ParamLimits

0xe488,	// (0x0001c026) sp_fs_action_menu_list_pane

0xe4aa,	// (0x0001c048) sp_fs_scroll_pane_cp01_ParamLimits

0xe4aa,	// (0x0001c048) sp_fs_scroll_pane_cp01

0x8076,	// (0x00015c14) list_medium_line_plain_t2_t1

0x8086,	// (0x00015c24) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0001d8a2) list_medium_line_plain_t2_t

0x8096,	// (0x00015c34) list_medium_line_plain_t3_t1

0x80a6,	// (0x00015c44) list_medium_line_plain_t3_t2

0x80b4,	// (0x00015c52) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0001d8a7) list_medium_line_plain_t3_t

0x9da9,	// (0x00017947) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9da9,	// (0x00017947) list_medium_line_x2_t2_g2_g1

0x9dc1,	// (0x0001795f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9dc1,	// (0x0001795f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0001ce03) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0001ce03) list_medium_line_x2_t2_g2_g

0xa3d4,	// (0x00017f72) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa3d4,	// (0x00017f72) list_medium_line_x2_t2_g2_t1

0x9de2,	// (0x00017980) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9de2,	// (0x00017980) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0001d8ae) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0001d8ae) list_medium_line_x2_t2_g2_t

0x9da9,	// (0x00017947) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9da9,	// (0x00017947) list_medium_line_x2_t4_g2_g1

0x9dc1,	// (0x0001795f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9dc1,	// (0x0001795f) list_medium_line_x2_t4_g2_g2

0x0001,

0xf265,	// (0x0001ce03) list_medium_line_x2_t4_g2_g_ParamLimits

0xf265,	// (0x0001ce03) list_medium_line_x2_t4_g2_g

0x80c2,	// (0x00015c60) list_medium_line_x2_t4_g2_t1_ParamLimits

0x80c2,	// (0x00015c60) list_medium_line_x2_t4_g2_t1

0x80dc,	// (0x00015c7a) list_medium_line_x2_t4_g2_t2_ParamLimits

0x80dc,	// (0x00015c7a) list_medium_line_x2_t4_g2_t2

0x80f1,	// (0x00015c8f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x80f1,	// (0x00015c8f) list_medium_line_x2_t4_g2_t3

0x9de2,	// (0x00017980) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9de2,	// (0x00017980) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0001d8b3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0001d8b3) list_medium_line_x2_t4_g2_t

0xe4d0,	// (0x0001c06e) list_medium_line_t3_right_iconx2_g1

0xe3a8,	// (0x0001bf46) list_medium_line_t3_right_iconx2_g2

0x8106,	// (0x00015ca4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x0001d8bc) list_medium_line_t3_right_iconx2_g

0x8110,	// (0x00015cae) list_medium_line_t3_right_iconx2_t1

0x8120,	// (0x00015cbe) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x0001d8c3) list_medium_line_t3_right_iconx2_t

0x9da9,	// (0x00017947) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9da9,	// (0x00017947) list_medium_line_x3_t4_g4_g1

0x9db5,	// (0x00017953) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9db5,	// (0x00017953) list_medium_line_x3_t4_g4_g2

0x9e2b,	// (0x000179c9) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9e2b,	// (0x000179c9) list_medium_line_x3_t4_g4_g3

0xe4d8,	// (0x0001c076) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe4d8,	// (0x0001c076) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0001d8c8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0001d8c8) list_medium_line_x3_t4_g4_g

0x812e,	// (0x00015ccc) list_medium_line_x3_t4_g4_t1_ParamLimits

0x812e,	// (0x00015ccc) list_medium_line_x3_t4_g4_t1

0x8145,	// (0x00015ce3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8145,	// (0x00015ce3) list_medium_line_x3_t4_g4_t2

0xa3e9,	// (0x00017f87) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa3e9,	// (0x00017f87) list_medium_line_x3_t4_g4_t3

0xe4e4,	// (0x0001c082) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe4e4,	// (0x0001c082) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x0001d8d1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x0001d8d1) list_medium_line_x3_t4_g4_t

0x8160,	// (0x00015cfe) list_single_dyc_row_text_pane_t1_ParamLimits

0x8160,	// (0x00015cfe) list_single_dyc_row_text_pane_t1

0x81a9,	// (0x00015d47) list_single_dyc_row_text_pane_t2_ParamLimits

0x81a9,	// (0x00015d47) list_single_dyc_row_text_pane_t2

0xe501,	// (0x0001c09f) list_single_dyc_row_text_pane_t3_ParamLimits

0xe501,	// (0x0001c09f) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x0001d8da) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x0001d8da) list_single_dyc_row_text_pane_t

0xe513,	// (0x0001c0b1) list_single_dyc_row_pane_g1_ParamLimits

0xe513,	// (0x0001c0b1) list_single_dyc_row_pane_g1

0xe51f,	// (0x0001c0bd) list_single_dyc_row_pane_g2_ParamLimits

0xe51f,	// (0x0001c0bd) list_single_dyc_row_pane_g2

0xe52b,	// (0x0001c0c9) list_single_dyc_row_pane_g3_ParamLimits

0xe52b,	// (0x0001c0c9) list_single_dyc_row_pane_g3

0xe537,	// (0x0001c0d5) list_single_dyc_row_pane_g4_ParamLimits

0xe537,	// (0x0001c0d5) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x0001d8e1) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x0001d8e1) list_single_dyc_row_pane_g

0xe543,	// (0x0001c0e1) list_single_dyc_row_text_pane_ParamLimits

0xe543,	// (0x0001c0e1) list_single_dyc_row_text_pane

0x92f3,	// (0x00016e91) bg_sp_fs_scroll_pane

0xe562,	// (0x0001c100) thumb_sp_fs_scroll_pane

0xd2d3,	// (0x0001ae71) list_medium_line_g1_ParamLimits

0xd2d3,	// (0x0001ae71) list_medium_line_g1

0xe56b,	// (0x0001c109) list_medium_line_t1_ParamLimits

0xe56b,	// (0x0001c109) list_medium_line_t1

0x9da9,	// (0x00017947) list_medium_line_x2_g1_ParamLimits

0x9da9,	// (0x00017947) list_medium_line_x2_g1

0x9db5,	// (0x00017953) list_medium_line_x2_g2_ParamLimits

0x9db5,	// (0x00017953) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x0001d8ea) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x0001d8ea) list_medium_line_x2_g

0xe580,	// (0x0001c11e) list_medium_line_x2_t1_ParamLimits

0xe580,	// (0x0001c11e) list_medium_line_x2_t1

0x9da9,	// (0x00017947) list_medium_line_x3_g1_ParamLimits

0x9da9,	// (0x00017947) list_medium_line_x3_g1

0x9db5,	// (0x00017953) list_medium_line_x3_g2_ParamLimits

0x9db5,	// (0x00017953) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x0001d8ea) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x0001d8ea) list_medium_line_x3_g

0xe580,	// (0x0001c11e) list_medium_line_x3_t1_ParamLimits

0xe580,	// (0x0001c11e) list_medium_line_x3_t1

0xe596,	// (0x0001c134) thumb_sp_fs_scroll_pane_g1

0xe59f,	// (0x0001c13d) thumb_sp_fs_scroll_pane_g2

0xe5a8,	// (0x0001c146) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d8ef) thumb_sp_fs_scroll_pane_g

0xe596,	// (0x0001c134) bg_sp_fs_scroll_pane_g1

0xe59f,	// (0x0001c13d) bg_sp_fs_scroll_pane_g2

0xe5a8,	// (0x0001c146) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d8ef) bg_sp_fs_scroll_pane_g

0x9da9,	// (0x00017947) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9da9,	// (0x00017947) list_medium_line_x2_t3_g4_g1

0x9e1f,	// (0x000179bd) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9e1f,	// (0x000179bd) list_medium_line_x2_t3_g4_g2

0x9db5,	// (0x00017953) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9db5,	// (0x00017953) list_medium_line_x2_t3_g4_g3

0x9dc1,	// (0x0001795f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9dc1,	// (0x0001795f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0001ce7f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0001ce7f) list_medium_line_x2_t3_g4_g

0x8203,	// (0x00015da1) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8203,	// (0x00015da1) list_medium_line_x2_t3_g4_t1

0x821d,	// (0x00015dbb) list_medium_line_x2_t3_g4_t2_ParamLimits

0x821d,	// (0x00015dbb) list_medium_line_x2_t3_g4_t2

0x9de2,	// (0x00017980) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9de2,	// (0x00017980) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x0001d8f6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x0001d8f6) list_medium_line_x2_t3_g4_t

0xd2d3,	// (0x0001ae71) list_medium_line_g2_g1_ParamLimits

0xd2d3,	// (0x0001ae71) list_medium_line_g2_g1

0xd2df,	// (0x0001ae7d) list_medium_line_g2_g2_ParamLimits

0xd2df,	// (0x0001ae7d) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x0001d5b8) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x0001d5b8) list_medium_line_g2_g

0xe5b1,	// (0x0001c14f) list_medium_line_g2_t1_ParamLimits

0xe5b1,	// (0x0001c14f) list_medium_line_g2_t1

0xd2d3,	// (0x0001ae71) list_medium_line_t3_g2_g1_ParamLimits

0xd2d3,	// (0x0001ae71) list_medium_line_t3_g2_g1

0xd2df,	// (0x0001ae7d) list_medium_line_t3_g2_g2_ParamLimits

0xd2df,	// (0x0001ae7d) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x0001d5b8) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x0001d5b8) list_medium_line_t3_g2_g

0x8237,	// (0x00015dd5) list_medium_line_t3_g2_t1_ParamLimits

0x8237,	// (0x00015dd5) list_medium_line_t3_g2_t1

0x8251,	// (0x00015def) list_medium_line_t3_g2_t2_ParamLimits

0x8251,	// (0x00015def) list_medium_line_t3_g2_t2

0x8266,	// (0x00015e04) list_medium_line_t3_g2_t3_ParamLimits

0x8266,	// (0x00015e04) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x0001d8fd) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x0001d8fd) list_medium_line_t3_g2_t

0xe3a8,	// (0x0001bf46) list_medium_line_right_icon_g1

0xe5c6,	// (0x0001c164) list_medium_line_right_icon_t1

0xd2d3,	// (0x0001ae71) list_medium_line_t2_g1_ParamLimits

0xd2d3,	// (0x0001ae71) list_medium_line_t2_g1

0x8280,	// (0x00015e1e) list_medium_line_t2_t1_ParamLimits

0x8280,	// (0x00015e1e) list_medium_line_t2_t1

0x829a,	// (0x00015e38) list_medium_line_t2_t2_ParamLimits

0x829a,	// (0x00015e38) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x0001d904) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x0001d904) list_medium_line_t2_t

0xd2d3,	// (0x0001ae71) list_medium_line_t3_g1_ParamLimits

0xd2d3,	// (0x0001ae71) list_medium_line_t3_g1

0x82b3,	// (0x00015e51) list_medium_line_t3_t1_ParamLimits

0x82b3,	// (0x00015e51) list_medium_line_t3_t1

0x82ca,	// (0x00015e68) list_medium_line_t3_t2_ParamLimits

0x82ca,	// (0x00015e68) list_medium_line_t3_t2

0x82df,	// (0x00015e7d) list_medium_line_t3_t3_ParamLimits

0x82df,	// (0x00015e7d) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x0001d909) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x0001d909) list_medium_line_t3_t

0xd2d3,	// (0x0001ae71) list_medium_line_g3_g1_ParamLimits

0xd2d3,	// (0x0001ae71) list_medium_line_g3_g1

0xe5d4,	// (0x0001c172) list_medium_line_g3_g2_ParamLimits

0xe5d4,	// (0x0001c172) list_medium_line_g3_g2

0xd2df,	// (0x0001ae7d) list_medium_line_g3_g3_ParamLimits

0xd2df,	// (0x0001ae7d) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x0001d910) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x0001d910) list_medium_line_g3_g

0xe5e0,	// (0x0001c17e) list_medium_line_g3_t1_ParamLimits

0xe5e0,	// (0x0001c17e) list_medium_line_g3_t1

0xd2d3,	// (0x0001ae71) list_medium_line_t2_g3_g1_ParamLimits

0xd2d3,	// (0x0001ae71) list_medium_line_t2_g3_g1

0xe5d4,	// (0x0001c172) list_medium_line_t2_g3_g2_ParamLimits

0xe5d4,	// (0x0001c172) list_medium_line_t2_g3_g2

0xd2df,	// (0x0001ae7d) list_medium_line_t2_g3_g3_ParamLimits

0xd2df,	// (0x0001ae7d) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x0001d910) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x0001d910) list_medium_line_t2_g3_g

0x82f1,	// (0x00015e8f) list_medium_line_t2_g3_t1_ParamLimits

0x82f1,	// (0x00015e8f) list_medium_line_t2_g3_t1

0x830b,	// (0x00015ea9) list_medium_line_t2_g3_t2_ParamLimits

0x830b,	// (0x00015ea9) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x0001d917) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x0001d917) list_medium_line_t2_g3_t

0xd2d3,	// (0x0001ae71) list_medium_line_t3_g3_g1_ParamLimits

0xd2d3,	// (0x0001ae71) list_medium_line_t3_g3_g1

0xe5d4,	// (0x0001c172) list_medium_line_t3_g3_g2_ParamLimits

0xe5d4,	// (0x0001c172) list_medium_line_t3_g3_g2

0xd2df,	// (0x0001ae7d) list_medium_line_t3_g3_g3_ParamLimits

0xd2df,	// (0x0001ae7d) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x0001d910) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x0001d910) list_medium_line_t3_g3_g

0x8326,	// (0x00015ec4) list_medium_line_t3_g3_t1_ParamLimits

0x8326,	// (0x00015ec4) list_medium_line_t3_g3_t1

0x833f,	// (0x00015edd) list_medium_line_t3_g3_t2_ParamLimits

0x833f,	// (0x00015edd) list_medium_line_t3_g3_t2

0x8355,	// (0x00015ef3) list_medium_line_t3_g3_t3_ParamLimits

0x8355,	// (0x00015ef3) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x0001d91c) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x0001d91c) list_medium_line_t3_g3_t

0xe4d0,	// (0x0001c06e) list_medium_line_right_iconx2_g1

0xe3a8,	// (0x0001bf46) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001d923) list_medium_line_right_iconx2_g

0xe5f5,	// (0x0001c193) list_medium_line_right_iconx2_t1

0xe4d0,	// (0x0001c06e) list_medium_line_t2_right_iconx2_g1

0xe3a8,	// (0x0001bf46) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001d923) list_medium_line_t2_right_iconx2_g

0x836f,	// (0x00015f0d) list_medium_line_t2_right_iconx2_t1

0x837f,	// (0x00015f1d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x0001d928) list_medium_line_t2_right_iconx2_t

0xe603,	// (0x0001c1a1) list_medium_line_x4_t4_t1

0x8391,	// (0x00015f2f) list_medium_line_x4_t4_t2

0x83a1,	// (0x00015f3f) list_medium_line_x4_t4_t3

0x83b1,	// (0x00015f4f) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x0001d92d) list_medium_line_x4_t4_t

0x8404,	// (0x00015fa2) tport_appsw_pane_ParamLimits

0x8404,	// (0x00015fa2) tport_appsw_pane

0x8415,	// (0x00015fb3) tport_contact_pane_ParamLimits

0x8415,	// (0x00015fb3) tport_contact_pane

0x842e,	// (0x00015fcc) tport_listscroll_pane_ParamLimits

0x842e,	// (0x00015fcc) tport_listscroll_pane

0x8449,	// (0x00015fe7) cell_tport_appsw_pane_ParamLimits

0x8449,	// (0x00015fe7) cell_tport_appsw_pane

0xcf86,	// (0x0001ab24) tport_appsw_pane_g1_ParamLimits

0xcf86,	// (0x0001ab24) tport_appsw_pane_g1

0xe611,	// (0x0001c1af) tport_contact_pane_g1

0xdda0,	// (0x0001b93e) tport_contact_pane_t1

0xe61a,	// (0x0001c1b8) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x0001d936) tport_contact_pane_t

0xe628,	// (0x0001c1c6) list_tport_pane

0xe631,	// (0x0001c1cf) scroll_pane_cp_030

0xe642,	// (0x0001c1e0) cell_tport_appsw_pane_g1

0xe652,	// (0x0001c1f0) cell_tport_appsw_pane_t1

0x92f3,	// (0x00016e91) grid_highlight_pane_cp019

0x8489,	// (0x00016027) list_tport_double_graphic_pane_ParamLimits

0x8489,	// (0x00016027) list_tport_double_graphic_pane

0x9363,	// (0x00016f01) list_highlight_pane_cp023_ParamLimits

0x9363,	// (0x00016f01) list_highlight_pane_cp023

0x8496,	// (0x00016034) list_tport_double_graphic_pane_g1_ParamLimits

0x8496,	// (0x00016034) list_tport_double_graphic_pane_g1

0x84a3,	// (0x00016041) list_tport_double_graphic_pane_t1_ParamLimits

0x84a3,	// (0x00016041) list_tport_double_graphic_pane_t1

0x84b8,	// (0x00016056) list_tport_double_graphic_pane_t2_ParamLimits

0x84b8,	// (0x00016056) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x0001d942) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x0001d942) list_tport_double_graphic_pane_t

0x92f3,	// (0x00016e91) main_cale_note_pane

0x61cf,	// (0x00013d6d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x61cf,	// (0x00013d6d) cell_vitu2_function_top_wide_pane_cp01

0x7b29,	// (0x000156c7) wait_bar_pane_cp05_ParamLimits

0x92f3,	// (0x00016e91) listscroll_cmail_pane

0xe668,	// (0x0001c206) list_cmail_pane

0xd250,	// (0x0001adee) list_cmail_body_pane

0x84d4,	// (0x00016072) list_single_cmail_header_caption_pane

0x84ea,	// (0x00016088) list_single_cmail_header_detail_pane_ParamLimits

0x84ea,	// (0x00016088) list_single_cmail_header_detail_pane

0x8513,	// (0x000160b1) list_single_cmail_header_caption_pane_t1

0x8523,	// (0x000160c1) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8523,	// (0x000160c1) list_single_cmail_header_detail_pane_g1

0xe689,	// (0x0001c227) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe689,	// (0x0001c227) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x0001d947) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x0001d947) list_single_cmail_header_detail_pane_g

0xe6a2,	// (0x0001c240) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe6a2,	// (0x0001c240) list_single_cmail_header_detail_pane_t1

0xe6d8,	// (0x0001c276) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6d8,	// (0x0001c276) list_single_cmail_header_editor_pane_bg

0xdf4f,	// (0x0001baed) list_cmail_body_pane_g1

0xe6ea,	// (0x0001c288) list_cmail_body_pane_t1

0xcff2,	// (0x0001ab90) list_single_cmail_header_editor_pane_bg_g1

0xa040,	// (0x00017bde) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd002,	// (0x0001aba0) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcffa,	// (0x0001ab98) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd2ab,	// (0x0001ae49) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd022,	// (0x0001abc0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd012,	// (0x0001abb0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd01a,	// (0x0001abb8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa020,	// (0x00017bbe) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8561,	// (0x000160ff) calenote_gesture_pane_ParamLimits

0x8561,	// (0x000160ff) calenote_gesture_pane

0x8581,	// (0x0001611f) calenote_window_pane_ParamLimits

0x8581,	// (0x0001611f) calenote_window_pane

0xe6f8,	// (0x0001c296) popup_note_window_cp01

0x859d,	// (0x0001613b) calenote_swipe_1_pane_ParamLimits

0x859d,	// (0x0001613b) calenote_swipe_1_pane

0x7f7d,	// (0x00015b1b) calenote_swipe_2_pane_ParamLimits

0x7f7d,	// (0x00015b1b) calenote_swipe_2_pane

0xe2a9,	// (0x0001be47) calenote_swipe_1_pane_g1_ParamLimits

0xe2a9,	// (0x0001be47) calenote_swipe_1_pane_g1

0xe2b6,	// (0x0001be54) calenote_swipe_1_pane_g2_ParamLimits

0xe2b6,	// (0x0001be54) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x0001d876) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x0001d876) calenote_swipe_1_pane_g

0xe70a,	// (0x0001c2a8) calenote_swipe_1_pane_t1_ParamLimits

0xe70a,	// (0x0001c2a8) calenote_swipe_1_pane_t1

0xe2a9,	// (0x0001be47) calenote_swipe_2_pane_g1_ParamLimits

0xe2a9,	// (0x0001be47) calenote_swipe_2_pane_g1

0xe729,	// (0x0001c2c7) calenote_swipe_2_pane_g2_ParamLimits

0xe729,	// (0x0001c2c7) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x0001d953) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x0001d953) calenote_swipe_2_pane_g

0xe735,	// (0x0001c2d3) calenote_swipe_2_pane_t1_ParamLimits

0xe735,	// (0x0001c2d3) calenote_swipe_2_pane_t1

0x92f3,	// (0x00016e91) main_mup_navstr_pane

0x4e73,	// (0x00012a11) main_mup3_pane_t7_ParamLimits

0x4e73,	// (0x00012a11) main_mup3_pane_t7

0xcba1,	// (0x0001a73f) main_mp4_pane_g6_ParamLimits

0xcba1,	// (0x0001a73f) main_mp4_pane_g6

0xcdc9,	// (0x0001a967) main_image3_pane_t4_ParamLimits

0xcdc9,	// (0x0001a967) main_image3_pane_t4

0x85b2,	// (0x00016150) popup_navstr_preview_pane_ParamLimits

0x85b2,	// (0x00016150) popup_navstr_preview_pane

0x85c6,	// (0x00016164) scroll_navstr_pane_ParamLimits

0x85c6,	// (0x00016164) scroll_navstr_pane

0x92f3,	// (0x00016e91) bg_popup_preview_window_pane_cp04

0xe75c,	// (0x0001c2fa) popup_navstr_preview_pane_t1

0x85da,	// (0x00016178) scroll_navstr_pane_g1_ParamLimits

0x85da,	// (0x00016178) scroll_navstr_pane_g1

0x85ee,	// (0x0001618c) scroll_navstr_pane_t1_ParamLimits

0x85ee,	// (0x0001618c) scroll_navstr_pane_t1

0xe701,	// (0x0001c29f) bg_button_pane_cp014

0xe701,	// (0x0001c29f) bg_button_pane_cp030

0x7e1b,	// (0x000159b9) list_double_fisheye_pane_g4_ParamLimits

0x7e1b,	// (0x000159b9) list_double_fisheye_pane_g4

0x7e27,	// (0x000159c5) list_double_fisheye_pane_g5_ParamLimits

0x7e27,	// (0x000159c5) list_double_fisheye_pane_g5

0xe670,	// (0x0001c20e) sp_fs_scroll_pane_cp03

0xe3e8,	// (0x0001bf86) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3f4,	// (0x0001bf92) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x0001d893) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe400,	// (0x0001bf9e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x84ca,	// (0x00016068) sp_fs_scroll_pane_cp02

0x9c44,	// (0x000177e2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9c44,	// (0x000177e2) popup_sp_fs_calendar_preview_list_single_pane

0x92f3,	// (0x00016e91) main_cam6_pano_pane

0x9363,	// (0x00016f01) main_mup3_pane_ParamLimits

0x92f3,	// (0x00016e91) main_phacti_pane

0x79fc,	// (0x0001559a) bg_button_pane_cp11

0x7a16,	// (0x000155b4) main_mobtv_info_pane_g2_ParamLimits

0x7a16,	// (0x000155b4) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x0001d7f3) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x0001d7f3) main_mobtv_info_pane_g

0x7bf3,	// (0x00015791) sc_clock_pane_t5_ParamLimits

0x7bf3,	// (0x00015791) sc_clock_pane_t5

0x7c7d,	// (0x0001581b) main_radioblah_pane_g1_ParamLimits

0xe1ed,	// (0x0001bd8b) main_radioblah_pane_t3_ParamLimits

0xe1ed,	// (0x0001bd8b) main_radioblah_pane_t3

0xe20d,	// (0x0001bdab) main_radioblah_pane_t4_ParamLimits

0xe20d,	// (0x0001bdab) main_radioblah_pane_t4

0x7ca5,	// (0x00015843) main_radioblah_text_pane_ParamLimits

0x7ca5,	// (0x00015843) main_radioblah_text_pane

0x7cb7,	// (0x00015855) main_radioblah_info_pane_g1_ParamLimits

0x7d50,	// (0x000158ee) main_radioblah_info_pane_t4_ParamLimits

0x7d50,	// (0x000158ee) main_radioblah_info_pane_t4

0x9363,	// (0x00016f01) main_sp_fs_calendar_pane

0x8605,	// (0x000161a3) main_phacti_pane_g1

0x860d,	// (0x000161ab) phacti_note_pane_ParamLimits

0x860d,	// (0x000161ab) phacti_note_pane

0xe773,	// (0x0001c311) phacti_term_pane_ParamLimits

0xe773,	// (0x0001c311) phacti_term_pane

0xe788,	// (0x0001c326) phacti_note_pane_t1_ParamLimits

0xe788,	// (0x0001c326) phacti_note_pane_t1

0xe79f,	// (0x0001c33d) phacti_term_pane_g1

0xe7a7,	// (0x0001c345) phacti_term_pane_t1_ParamLimits

0xe7a7,	// (0x0001c345) phacti_term_pane_t1

0xe7d1,	// (0x0001c36f) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9da1,	// (0x0001793f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x0001d95d) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7d9,	// (0x0001c377) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7d9,	// (0x0001c377) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7ee,	// (0x0001c38c) aid_popup_sp_fs_bg_corner_pane

0xc22c,	// (0x00019dca) popup_sp_fs_calendar_preview_bg_pane_g1

0x92f3,	// (0x00016e91) popup_sp_fs_calendar_preview_bg_pane

0xe7f6,	// (0x0001c394) popup_sp_fs_calendar_preview_list_pane

0x9363,	// (0x00016f01) bg_main_sp_fs_cale_pane_ParamLimits

0x9363,	// (0x00016f01) bg_main_sp_fs_cale_pane

0xe807,	// (0x0001c3a5) listscroll_cale_mrui_pane_ParamLimits

0xe807,	// (0x0001c3a5) listscroll_cale_mrui_pane

0xe81b,	// (0x0001c3b9) listscroll_sp_fs_schedule_track_pane

0xe824,	// (0x0001c3c2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe824,	// (0x0001c3c2) main_sp_fs_ctrlbar_pane_cp01

0xe835,	// (0x0001c3d3) main_sp_fs_ribbon_pane

0xe83d,	// (0x0001c3db) popup_sp_fs_cale_preview_window

0x8668,	// (0x00016206) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8668,	// (0x00016206) list_single_sp_fs_schedule_track_pane

0x9363,	// (0x00016f01) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9363,	// (0x00016f01) bg_sp_fs_highlight_list_pane_cp03

0x867a,	// (0x00016218) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x867a,	// (0x00016218) list_single_sp_fs_schedule_track_pane_g1

0x8686,	// (0x00016224) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8686,	// (0x00016224) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x0001d962) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x0001d962) list_single_sp_fs_schedule_track_pane_g

0x8692,	// (0x00016230) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8692,	// (0x00016230) list_single_sp_fs_schedule_track_pane_t1

0x86ac,	// (0x0001624a) sp_fs_schedule_track_pane_ParamLimits

0x86ac,	// (0x0001624a) sp_fs_schedule_track_pane

0xe84f,	// (0x0001c3ed) sp_fs_schedule_track_pane_g1

0xe857,	// (0x0001c3f5) sp_fs_schedule_track_pane_g2

0xe85f,	// (0x0001c3fd) sp_fs_schedule_track_pane_g3

0xe867,	// (0x0001c405) sp_fs_schedule_track_pane_g4

0xe86f,	// (0x0001c40d) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x0001d967) sp_fs_schedule_track_pane_g

0xcff2,	// (0x0001ab90) bg_sp_fs_schedule_viewer_highlight_g1

0xa040,	// (0x00017bde) bg_sp_fs_schedule_viewer_highlight_g2

0xcffa,	// (0x0001ab98) bg_sp_fs_schedule_viewer_highlight_g3

0xd002,	// (0x0001aba0) bg_sp_fs_schedule_viewer_highlight_g4

0xd2ab,	// (0x0001ae49) bg_sp_fs_schedule_viewer_highlight_g5

0xd012,	// (0x0001abb0) bg_sp_fs_schedule_viewer_highlight_g6

0xd01a,	// (0x0001abb8) bg_sp_fs_schedule_viewer_highlight_g7

0xd022,	// (0x0001abc0) bg_sp_fs_schedule_viewer_highlight_g8

0xa020,	// (0x00017bbe) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x0001d972) bg_sp_fs_schedule_viewer_highlight_g

0x92f3,	// (0x00016e91) bg_main_sp_fs_ribbon_pane

0x86bd,	// (0x0001625b) main_sp_fs_ribbon_pane_g1

0xe877,	// (0x0001c415) main_sp_fs_ribbon_pane_t1

0x86c6,	// (0x00016264) main_sp_fs_ribbon_pane_t2

0xe886,	// (0x0001c424) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x0001d985) main_sp_fs_ribbon_pane_t

0xe895,	// (0x0001c433) main_sp_fs_ribbon_scheduler_pane

0xe89d,	// (0x0001c43b) bg_main_sp_fs_ribbon_pane_g1

0xe8a6,	// (0x0001c444) bg_main_sp_fs_ribbon_pane_g2

0xe8af,	// (0x0001c44d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x0001d98c) bg_main_sp_fs_ribbon_pane_g

0xe8b7,	// (0x0001c455) main_sp_fs_ribbon_scheduler_pane_g1

0xe8c0,	// (0x0001c45e) main_sp_fs_ribbon_scheduler_pane_g2

0xe8c9,	// (0x0001c467) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x0001d993) main_sp_fs_ribbon_scheduler_pane_g

0xe8d2,	// (0x0001c470) list_cale_mrui_pane

0x86d5,	// (0x00016273) sp_fs_scroll_pane_cp07_ParamLimits

0x86d5,	// (0x00016273) sp_fs_scroll_pane_cp07

0x86e9,	// (0x00016287) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x86e9,	// (0x00016287) bg_sp_fs_schedule_viewer_highlight

0xe8db,	// (0x0001c479) list_single_sp_fs_schedule_track_pane_cp01

0xe8e3,	// (0x0001c481) list_sp_fs_schedule_track_pane

0xe8eb,	// (0x0001c489) sp_fs_scroll_pane_cp06_ParamLimits

0xe8eb,	// (0x0001c489) sp_fs_scroll_pane_cp06

0xc22c,	// (0x00019dca) bgmain_sp_fs_calendar_pane_g1

0x86f9,	// (0x00016297) list_single_cale_mrui_pane_ParamLimits

0x86f9,	// (0x00016297) list_single_cale_mrui_pane

0xe8fd,	// (0x0001c49b) list_single_cale_mrui_row_pane_ParamLimits

0xe8fd,	// (0x0001c49b) list_single_cale_mrui_row_pane

0xe90a,	// (0x0001c4a8) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe90a,	// (0x0001c4a8) list_single_cale_mrui_row_pane_g1

0xe94f,	// (0x0001c4ed) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe94f,	// (0x0001c4ed) list_single_cale_mrui_row_pane_t1

0x8719,	// (0x000162b7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8719,	// (0x000162b7) list_single_cale_mrui_row_pane_t2

0xe961,	// (0x0001c4ff) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe961,	// (0x0001c4ff) list_single_cale_mrui_row_pane_t3

0xe990,	// (0x0001c52e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe990,	// (0x0001c52e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe03,	// (0x0001d9a1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe03,	// (0x0001d9a1) list_single_cale_mrui_row_pane_t

0x8781,	// (0x0001631f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8781,	// (0x0001631f) list_single_cmail_header_editor_pane_bg_cp01

0x87a7,	// (0x00016345) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x87a7,	// (0x00016345) list_single_cmail_header_editor_pane_bg_cp02

0x87c7,	// (0x00016365) main_radioblah_text_pane_t1_ParamLimits

0x87c7,	// (0x00016365) main_radioblah_text_pane_t1

0xe9bf,	// (0x0001c55d) cam6_indi_pane_cp01

0xe9c7,	// (0x0001c565) cam6_mode_pane_cp01

0xe9cf,	// (0x0001c56d) cam6_pano_pane

0xe9d8,	// (0x0001c576) cam6_zoom_pane_cp01

0xe9e0,	// (0x0001c57e) cam6_pano_image_pane

0xe9eb,	// (0x0001c589) cam6_pano_pane_g1

0xdf4f,	// (0x0001baed) cam6_pano_pane_g2

0xe9f4,	// (0x0001c592) cam6_pano_pane_g3

0xe9fd,	// (0x0001c59b) cam6_pano_pane_g4

0xc7da,	// (0x0001a378) cam6_pano_pane_g5

0xea06,	// (0x0001c5a4) cam6_pano_pane_g6

0xe205,	// (0x0001bda3) cam6_pano_pane_g7

0xea10,	// (0x0001c5ae) cam6_pano_pane_g8

0xea19,	// (0x0001c5b7) cam6_pano_pane_g9

0x0008,

0xfe0c,	// (0x0001d9aa) cam6_pano_pane_g

0x92f3,	// (0x00016e91) main_browser_tag_pane

0xe754,	// (0x0001c2f2) grid_navstr_albumart_pane

0xea24,	// (0x0001c5c2) cell_navstr_albumart_pane_ParamLimits

0xea24,	// (0x0001c5c2) cell_navstr_albumart_pane

0xea47,	// (0x0001c5e5) cell_navstr_albumart_pane_g1

0xbb43,	// (0x000196e1) cell_navstr_albumart_pane_g2

0xbb53,	// (0x000196f1) cell_navstr_albumart_pane_g3

0xbb4b,	// (0x000196e9) cell_navstr_albumart_pane_g4

0x0003,

0xfe1f,	// (0x0001d9bd) cell_navstr_albumart_pane_g

0x87e1,	// (0x0001637f) bt_list_pane_ParamLimits

0x87e1,	// (0x0001637f) bt_list_pane

0x87f5,	// (0x00016393) bt_list_pane_t1

0x8804,	// (0x000163a2) bt_list_pane_t2

0x0001,

0xfe28,	// (0x0001d9c6) bt_list_pane_t

0x92f3,	// (0x00016e91) main_cale_prevew_pane

0x8813,	// (0x000163b1) popup_cale_preview_window_ParamLimits

0x8813,	// (0x000163b1) popup_cale_preview_window

0x9363,	// (0x00016f01) bg_popup_preview_window_pane_cp05_ParamLimits

0x9363,	// (0x00016f01) bg_popup_preview_window_pane_cp05

0xea4f,	// (0x0001c5ed) list_cale_preview_pane_ParamLimits

0xea4f,	// (0x0001c5ed) list_cale_preview_pane

0x882e,	// (0x000163cc) list_double_cale_preview_pane_ParamLimits

0x882e,	// (0x000163cc) list_double_cale_preview_pane

0x8840,	// (0x000163de) list_single_cale_preview_pane_ParamLimits

0x8840,	// (0x000163de) list_single_cale_preview_pane

0x8856,	// (0x000163f4) list_single_cale_preview_pane_g1

0x885e,	// (0x000163fc) list_single_cale_preview_pane_t1_ParamLimits

0x885e,	// (0x000163fc) list_single_cale_preview_pane_t1

0x8873,	// (0x00016411) list_double_cale_preview_pane_g1

0x887b,	// (0x00016419) list_double_cale_preview_pane_t1_ParamLimits

0x887b,	// (0x00016419) list_double_cale_preview_pane_t1

0x8890,	// (0x0001642e) list_double_cale_preview_pane_t2_ParamLimits

0x8890,	// (0x0001642e) list_double_cale_preview_pane_t2

0x0001,

0xfe2d,	// (0x0001d9cb) list_double_cale_preview_pane_t_ParamLimits

0xfe2d,	// (0x0001d9cb) list_double_cale_preview_pane_t

0x92f3,	// (0x00016e91) main_ezdial_pane

0x9363,	// (0x00016f01) main_sp_fs_email_pane_ParamLimits

0x7fb9,	// (0x00015b57) cmail_ddmenu_btn01_pane_ParamLimits

0x7fb9,	// (0x00015b57) cmail_ddmenu_btn01_pane

0x7fcc,	// (0x00015b6a) cmail_ddmenu_btn02_pane_ParamLimits

0x7fcc,	// (0x00015b6a) cmail_ddmenu_btn02_pane

0x7fef,	// (0x00015b8d) cmail_ddmenu_btn03_pane_ParamLimits

0x7fef,	// (0x00015b8d) cmail_ddmenu_btn03_pane

0x8018,	// (0x00015bb6) main_sp_fs_ctrlbar_pane_ParamLimits

0x803c,	// (0x00015bda) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd250,	// (0x0001adee) list_cmail_body_pane_ParamLimits

0xe680,	// (0x0001c21e) bg_button_pane_cp12

0xe695,	// (0x0001c233) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe695,	// (0x0001c233) list_single_cmail_header_detail_pane_g3

0x853b,	// (0x000160d9) list_single_cmail_header_detail_pane_t2_ParamLimits

0x853b,	// (0x000160d9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x0001d94e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x0001d94e) list_single_cmail_header_detail_pane_t

0xe7bc,	// (0x0001c35a) phacti_term_pane_t2_ParamLimits

0xe7bc,	// (0x0001c35a) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x0001d958) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x0001d958) phacti_term_pane_t

0xea5b,	// (0x0001c5f9) aid_size_list_single_double

0x88a8,	// (0x00016446) popup_ezdial_listscroll_window

0x88c4,	// (0x00016462) popup_number_entry_window_cp01

0xa869,	// (0x00018407) bg_popup_call_pane_cp09

0xea67,	// (0x0001c605) ezdial_list_pane

0xea6f,	// (0x0001c60d) scroll_pane_cp23

0xbd26,	// (0x000198c4) bg_button_pane_cp028_ParamLimits

0xbd26,	// (0x000198c4) bg_button_pane_cp028

0x88d2,	// (0x00016470) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x88d2,	// (0x00016470) cmail_ddmenu_btn01_pane_g1

0x88e1,	// (0x0001647f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x88e1,	// (0x0001647f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe32,	// (0x0001d9d0) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe32,	// (0x0001d9d0) cmail_ddmenu_btn01_pane_g

0xea77,	// (0x0001c615) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea77,	// (0x0001c615) cmail_ddmenu_btn01_pane_t1

0xbd26,	// (0x000198c4) bg_button_pane_cp029_ParamLimits

0xbd26,	// (0x000198c4) bg_button_pane_cp029

0x88f1,	// (0x0001648f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x88f1,	// (0x0001648f) cmail_ddmenu_btn02_pane_g1

0x890c,	// (0x000164aa) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x890c,	// (0x000164aa) cmail_ddmenu_btn02_pane_t1

0x9363,	// (0x00016f01) bg_button_pane_cp031_ParamLimits

0x9363,	// (0x00016f01) bg_button_pane_cp031

0x88f1,	// (0x0001648f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x88f1,	// (0x0001648f) cmail_ddmenu_btn03_pane_g1

0x890c,	// (0x000164aa) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x890c,	// (0x000164aa) cmail_ddmenu_btn03_pane_t1

0x59e7,	// (0x00013585) cell_dialer2_keypad_pane_t1_ParamLimits

0x5a01,	// (0x0001359f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5a01,	// (0x0001359f) cell_dialer2_keypad_pane_t1_copy1

0x787e,	// (0x0001541c) ncimui_group_button_pane

0x9363,	// (0x00016f01) main_sp_fs_calendar_pane_ParamLimits

0x84d4,	// (0x00016072) list_single_cmail_header_caption_pane_ParamLimits

0xe7fe,	// (0x0001c39c) aid_recal_txt_sm_pane

0x92f3,	// (0x00016e91) mian_recal_day_pane

0xe83d,	// (0x0001c3db) popup_sp_fs_cale_preview_window_ParamLimits

0x92f3,	// (0x00016e91) list_recal_day_pane

0xeaaf,	// (0x0001c64d) list_single_recal_day_pane_ParamLimits

0xeaaf,	// (0x0001c64d) list_single_recal_day_pane

0xeac1,	// (0x0001c65f) list_single_recal_day_pane_g1_ParamLimits

0xeac1,	// (0x0001c65f) list_single_recal_day_pane_g1

0xeacd,	// (0x0001c66b) list_single_recal_day_pane_g2_ParamLimits

0xeacd,	// (0x0001c66b) list_single_recal_day_pane_g2

0xeadd,	// (0x0001c67b) list_single_recal_day_pane_g3_ParamLimits

0xeadd,	// (0x0001c67b) list_single_recal_day_pane_g3

0x8933,	// (0x000164d1) list_single_recal_day_pane_g4_ParamLimits

0x8933,	// (0x000164d1) list_single_recal_day_pane_g4

0xeae9,	// (0x0001c687) list_single_recal_day_pane_g5_ParamLimits

0xeae9,	// (0x0001c687) list_single_recal_day_pane_g5

0xeaf9,	// (0x0001c697) list_single_recal_day_pane_g6_ParamLimits

0xeaf9,	// (0x0001c697) list_single_recal_day_pane_g6

0x0004,

0xfe41,	// (0x0001d9df) list_single_recal_day_pane_g_ParamLimits

0xfe41,	// (0x0001d9df) list_single_recal_day_pane_g

0xeb10,	// (0x0001c6ae) list_single_recal_day_pane_t1

0xeb22,	// (0x0001c6c0) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x0001d9ea) list_single_recal_day_pane_t

0x8953,	// (0x000164f1) ncimui_query_button_pane_ParamLimits

0x8953,	// (0x000164f1) ncimui_query_button_pane

0x8963,	// (0x00016501) ncimui_query_button_pane_t1_ParamLimits

0x8963,	// (0x00016501) ncimui_query_button_pane_t1

0xeb37,	// (0x0001c6d5) ncimui_query_button_pane_t2_ParamLimits

0xeb37,	// (0x0001c6d5) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x0001d9ef) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x0001d9ef) ncimui_query_button_pane_t

0x8976,	// (0x00016514) query_button_pane_ParamLimits

0x8976,	// (0x00016514) query_button_pane

0x92f3,	// (0x00016e91) bg_button_pane_cp0028

0xeb4a,	// (0x0001c6e8) query_button_pane_t1

0x3a94,	// (0x00011632) main_tport_pane_ParamLimits

0x83c1,	// (0x00015f5f) bg_popup_window_pane_cp01_ParamLimits

0x83c1,	// (0x00015f5f) bg_popup_window_pane_cp01

0x83db,	// (0x00015f79) heading_pane_cp08_ParamLimits

0x83db,	// (0x00015f79) heading_pane_cp08

0x83ef,	// (0x00015f8d) heading_pane_cp07_ParamLimits

0x83ef,	// (0x00015f8d) heading_pane_cp07

0xe642,	// (0x0001c1e0) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x0001d93b) cell_tport_appsw_pane_g

0xa9ea,	// (0x00018588) input_candi_list_open_g1

0xa23f,	// (0x00017ddd) list_cale_time_pane_g6_ParamLimits

0xa23f,	// (0x00017ddd) list_cale_time_pane_g6

0x4861,	// (0x000123ff) aid_size_touch_calib_1_ParamLimits

0x4861,	// (0x000123ff) aid_size_touch_calib_1

0x486d,	// (0x0001240b) aid_size_touch_calib_2_ParamLimits

0x486d,	// (0x0001240b) aid_size_touch_calib_2

0x4883,	// (0x00012421) aid_size_touch_calib_3_ParamLimits

0x4883,	// (0x00012421) aid_size_touch_calib_3

0x48a1,	// (0x0001243f) aid_size_touch_calib_4_ParamLimits

0x48a1,	// (0x0001243f) aid_size_touch_calib_4

0x48b7,	// (0x00012455) main_touch_calib_button_group_pane_ParamLimits

0x48b7,	// (0x00012455) main_touch_calib_button_group_pane

0x48cf,	// (0x0001246d) main_touch_calib_pane_g1_ParamLimits

0x48db,	// (0x00012479) main_touch_calib_pane_g2_ParamLimits

0x48e7,	// (0x00012485) main_touch_calib_pane_g3_ParamLimits

0x48f3,	// (0x00012491) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0001d30e) main_touch_calib_pane_g_ParamLimits

0x48ff,	// (0x0001249d) main_touch_calib_pane_t1_ParamLimits

0x4919,	// (0x000124b7) main_touch_calib_pane_t2_ParamLimits

0x4933,	// (0x000124d1) main_touch_calib_pane_t3_ParamLimits

0x4947,	// (0x000124e5) main_touch_calib_pane_t4_ParamLimits

0x495b,	// (0x000124f9) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0001d317) main_touch_calib_pane_t_ParamLimits

0xc5b0,	// (0x0001a14e) list_single_fp_cale_pane_g3_ParamLimits

0xc5b0,	// (0x0001a14e) list_single_fp_cale_pane_g3

0x9363,	// (0x00016f01) bg_button_pane_cp012_ParamLimits

0x9363,	// (0x00016f01) bg_vkb2_func_pane_cp03_ParamLimits

0x6a7b,	// (0x00014619) cell_vitu2_function_top_pane_g1_ParamLimits

0x9363,	// (0x00016f01) bg_vkb2_func_pane_cp04_ParamLimits

0x781e,	// (0x000153bc) main_ncimui_button_group_pane_ParamLimits

0x781e,	// (0x000153bc) main_ncimui_button_group_pane

0x786c,	// (0x0001540a) main_ncimui_pane_t3_ParamLimits

0x786c,	// (0x0001540a) main_ncimui_pane_t3

0xe76a,	// (0x0001c308) phacti_button_group_pane

0xea5b,	// (0x0001c5f9) aid_size_list_single_double_ParamLimits

0x88a8,	// (0x00016446) popup_ezdial_listscroll_window_ParamLimits

0x88c4,	// (0x00016462) popup_number_entry_window_cp01_ParamLimits

0x8989,	// (0x00016527) phacti_button_pane_ParamLimits

0x8989,	// (0x00016527) phacti_button_pane

0x92f3,	// (0x00016e91) bg_button_pane_cp14

0xeb58,	// (0x0001c6f6) phacti_button_pane_t1

0x899a,	// (0x00016538) main_touch_calib_button_pane_ParamLimits

0x899a,	// (0x00016538) main_touch_calib_button_pane

0x9ad4,	// (0x00017672) bg_button_pane_cp18_ParamLimits

0x9ad4,	// (0x00017672) bg_button_pane_cp18

0xeb66,	// (0x0001c704) main_touch_calib_button_pane_t1_ParamLimits

0xeb66,	// (0x0001c704) main_touch_calib_button_pane_t1

0xeb7c,	// (0x0001c71a) main_touch_calib_button_pane_t2_ParamLimits

0xeb7c,	// (0x0001c71a) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x0001d9f4) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x0001d9f4) main_touch_calib_button_pane_t

0x92f3,	// (0x00016e91) cell_ncimui_button_pane

0x92f3,	// (0x00016e91) bg_button_pane_cp032

0xeb9a,	// (0x0001c738) cell_ncimui_button_pane_t1

0xcda9,	// (0x0001a947) image3_infobar_pane_ParamLimits

0xcda9,	// (0x0001a947) image3_infobar_pane

0x7c1f,	// (0x000157bd) fs_bigclock_status_pane_ParamLimits

0x7c1f,	// (0x000157bd) fs_bigclock_status_pane

0x7c2c,	// (0x000157ca) main_fs_bigclock_clock_pane_ParamLimits

0x7c2c,	// (0x000157ca) main_fs_bigclock_clock_pane

0x7c40,	// (0x000157de) main_fs_bigclock_indi_pane_ParamLimits

0x7c40,	// (0x000157de) main_fs_bigclock_indi_pane

0x7c59,	// (0x000157f7) main_fs_bigclock_swipe_pane_ParamLimits

0x7c59,	// (0x000157f7) main_fs_bigclock_swipe_pane

0x92f3,	// (0x00016e91) main_fs_clock_dumped_data

0xe05c,	// (0x0001bbfa) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe05c,	// (0x0001bbfa) list_single_fs_bigclock_indicator_pane_g1

0xe082,	// (0x0001bc20) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe082,	// (0x0001bc20) list_single_fs_bigclock_indicator_pane_g2

0xe09c,	// (0x0001bc3a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe09c,	// (0x0001bc3a) list_single_fs_bigclock_indicator_pane_g3

0xe0b6,	// (0x0001bc54) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0b6,	// (0x0001bc54) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x0001d827) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x0001d827) list_single_fs_bigclock_indicator_pane_g

0xe0df,	// (0x0001bc7d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0df,	// (0x0001bc7d) list_single_fs_bigclock_indicator_pane_t1

0xe107,	// (0x0001bca5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe107,	// (0x0001bca5) list_single_fs_bigclock_indicator_pane_t2

0xe12f,	// (0x0001bccd) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe12f,	// (0x0001bccd) list_single_fs_bigclock_indicator_pane_t3

0xe157,	// (0x0001bcf5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe157,	// (0x0001bcf5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x0001d832) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x0001d832) list_single_fs_bigclock_indicator_pane_t

0xeba8,	// (0x0001c746) image3_infobar_fav_pane_ParamLimits

0xeba8,	// (0x0001c746) image3_infobar_fav_pane

0xebb8,	// (0x0001c756) image3_infobar_loc_pane_ParamLimits

0xebb8,	// (0x0001c756) image3_infobar_loc_pane

0xebcc,	// (0x0001c76a) image3_infobar_time_pane_ParamLimits

0xebcc,	// (0x0001c76a) image3_infobar_time_pane

0xc22c,	// (0x00019dca) image3_infobar_time_pane_g1

0xebdc,	// (0x0001c77a) image3_infobar_time_pane_t1

0xc22c,	// (0x00019dca) image3_infobar_loc_pane_g1

0xebea,	// (0x0001c788) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x0001d9f9) image3_infobar_loc_pane_g

0xebf2,	// (0x0001c790) image3_infobar_loc_pane_t1

0xc22c,	// (0x00019dca) image3_infobar_fav_pane_g1

0xec00,	// (0x0001c79e) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x0001d9fe) image3_infobar_fav_pane_g

0xec08,	// (0x0001c7a6) fs_bigclock_status_battery_pane

0xec11,	// (0x0001c7af) fs_bigclock_status_signal_pane

0xec1a,	// (0x0001c7b8) fs_bigclock_status_title_pane

0xec23,	// (0x0001c7c1) fs_bigclock_status_signal_pane_g1

0xec2c,	// (0x0001c7ca) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x0001da03) fs_bigclock_status_signal_pane_g

0xec34,	// (0x0001c7d2) fs_bigclock_status_battery_pane_g1

0xec3d,	// (0x0001c7db) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x0001da08) fs_bigclock_status_battery_pane_g

0xec45,	// (0x0001c7e3) fs_bigclock_status_title_pane_t1

0xc22c,	// (0x00019dca) main_fs_bigclock_clock_pane_g1

0xec53,	// (0x0001c7f1) main_fs_bigclock_clock_pane_g2

0xec53,	// (0x0001c7f1) main_fs_bigclock_clock_pane_g3

0xec53,	// (0x0001c7f1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x0001da0d) main_fs_bigclock_clock_pane_g

0xec5b,	// (0x0001c7f9) main_fs_bigclock_clock_pane_t1

0xec69,	// (0x0001c807) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x0001da16) main_fs_bigclock_clock_pane_t

0xec78,	// (0x0001c816) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec78,	// (0x0001c816) list_single_fs_bigclock_indicator_pane

0x89af,	// (0x0001654d) list_single_fs_bigclock_pane_ParamLimits

0x89af,	// (0x0001654d) list_single_fs_bigclock_pane

0xec92,	// (0x0001c830) main_fs_bigclock_indicator_pane_t1

0xeca1,	// (0x0001c83f) list_single_fs_bigclock_pane_g1

0xeca9,	// (0x0001c847) list_single_fs_bigclock_pane_t1

0xc22c,	// (0x00019dca) main_fs_bigclock_swipe_pane_g1

0xed2d,	// (0x0001c8cb) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x0001da27) main_fs_bigclock_swipe_pane_g

0xed35,	// (0x0001c8d3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed35,	// (0x0001c8d3) main_fs_bigclock_swipe_pane_t1

0x28c5,	// (0x00010463) call_type_pane_ParamLimits

0x92f3,	// (0x00016e91) main_btmg_pane

0xe936,	// (0x0001c4d4) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe936,	// (0x0001c4d4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfc,	// (0x0001d99a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x0001d99a) list_single_cale_mrui_row_pane_g

0xea96,	// (0x0001c634) list_recal_vselct_arw_lo_pane

0xea9e,	// (0x0001c63c) list_recal_vselct_arw_up_pane

0xeaa6,	// (0x0001c644) list_recal_vselct_pane

0xed52,	// (0x0001c8f0) btmg_button_pane

0x8a12,	// (0x000165b0) main_btmg_pane_g1

0x92f3,	// (0x00016e91) bg_button_pane_cp044

0xed5c,	// (0x0001c8fa) btmg_button_pane_t1

0xbd1e,	// (0x000198bc) aid_listscroll_gen

0x9363,	// (0x00016f01) main_cntbar_detail_pane

0xe660,	// (0x0001c1fe) list_cmail_folder_pane

0xe670,	// (0x0001c20e) sp_fs_scroll_pane_cp03_ParamLimits

0x84d4,	// (0x00016072) list_single_fs_dyc_pane_cp01_ParamLimits

0x84d4,	// (0x00016072) list_single_fs_dyc_pane_cp01

0xed6a,	// (0x0001c908) aid_size_cmail_indent

0xed73,	// (0x0001c911) list_single_dyc_row_pane_cp01

0x8a48,	// (0x000165e6) cntbar_detail_list_pane_ParamLimits

0x8a48,	// (0x000165e6) cntbar_detail_list_pane

0x8a94,	// (0x00016632) main_cntbar_detail_cont_pane_ParamLimits

0x8a94,	// (0x00016632) main_cntbar_detail_cont_pane

0x285f,	// (0x000103fd) scroll_pane_cp032_ParamLimits

0x285f,	// (0x000103fd) scroll_pane_cp032

0x8aa8,	// (0x00016646) cntbar_detail_list_event_pane_ParamLimits

0x8aa8,	// (0x00016646) cntbar_detail_list_event_pane

0x8a58,	// (0x000165f6) cntbar_detail_list_shct_pane

0xa08e,	// (0x00017c2c) aid_list_gen

0xed7c,	// (0x0001c91a) aid_scroll

0xed85,	// (0x0001c923) aid_size_touch_scroll_bar

0x8ab8,	// (0x00016656) aid_list_double

0xed8e,	// (0x0001c92c) aid_list_single

0x8ab8,	// (0x00016656) aid_list_single_lg

0xed97,	// (0x0001c935) aid_list_z_g_a_sm

0xed9f,	// (0x0001c93d) aid_list_z_g_d

0xeda7,	// (0x0001c945) aid_txt_z_prm

0x8ac1,	// (0x0001665f) aid_txt_z_prm_cp01

0x8acf,	// (0x0001666d) aid_txt_z_sec

0x8add,	// (0x0001667b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8add,	// (0x0001667b) main_cntbar_detail_cont_pane_g1

0x8af1,	// (0x0001668f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8af1,	// (0x0001668f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x0001da2c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x0001da2c) main_cntbar_detail_cont_pane_g

0xedb5,	// (0x0001c953) main_cntbar_detail_cont_pane_t1

0xedc3,	// (0x0001c961) main_cntbar_detail_cont_pane_t2

0xedd1,	// (0x0001c96f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x0001da31) main_cntbar_detail_cont_pane_t

0x8b01,	// (0x0001669f) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b01,	// (0x0001669f) cell_cntbar_detail_list_shct_pane

0xeddf,	// (0x0001c97d) cntbar_detail_list_shct_pane_g1

0xede8,	// (0x0001c986) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x0001da38) cntbar_detail_list_shct_pane_g

0x8b15,	// (0x000166b3) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b15,	// (0x000166b3) cntbar_detail_list_event_pane_g1

0x8b21,	// (0x000166bf) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b21,	// (0x000166bf) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x0001da3d) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x0001da3d) cntbar_detail_list_event_pane_g

0x8b8d,	// (0x0001672b) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b8d,	// (0x0001672b) cntbar_detail_list_event_pane_t1

0x8ba2,	// (0x00016740) cntbar_detail_list_event_pane_t2_ParamLimits

0x8ba2,	// (0x00016740) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x0001da4a) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x0001da4a) cntbar_detail_list_event_pane_t

0xc22c,	// (0x00019dca) cell_cntbar_detail_list_shct_pane_g1

0x2c3d,	// (0x000107db) navi_pane_mv_g3

0x9363,	// (0x00016f01) main_cntbar_detail_pane_ParamLimits

0x92f3,	// (0x00016e91) main_notif_wgt_pane

0xcb3b,	// (0x0001a6d9) aid_tch_main_mp4_pane_g4

0xcd3d,	// (0x0001a8db) popup_slider_window_cp02

0xea8c,	// (0x0001c62a) list_recal_day_event_pane

0x8a1c,	// (0x000165ba) cntbar_detail_btn_pane_ParamLimits

0x8a1c,	// (0x000165ba) cntbar_detail_btn_pane

0x8a32,	// (0x000165d0) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a32,	// (0x000165d0) cntbar_detail_btn_pane_cp01

0x8a58,	// (0x000165f6) cntbar_detail_list_shct_pane_ParamLimits

0x8a68,	// (0x00016606) cntbar_detail_pane_g1_ParamLimits

0x8a68,	// (0x00016606) cntbar_detail_pane_g1

0x8a78,	// (0x00016616) cntbar_detail_pane_t1_ParamLimits

0x8a78,	// (0x00016616) cntbar_detail_pane_t1

0x8b2d,	// (0x000166cb) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b2d,	// (0x000166cb) cntbar_detail_list_event_pane_g3

0x8b45,	// (0x000166e3) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b45,	// (0x000166e3) cntbar_detail_list_event_pane_g4

0x8b5d,	// (0x000166fb) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b5d,	// (0x000166fb) cntbar_detail_list_event_pane_g5

0x8b75,	// (0x00016713) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b75,	// (0x00016713) cntbar_detail_list_event_pane_g6

0x8bb7,	// (0x00016755) cntbar_detail_list_event_pane_t3_ParamLimits

0x8bb7,	// (0x00016755) cntbar_detail_list_event_pane_t3

0x8bc9,	// (0x00016767) popup_notif_wgt_window_ParamLimits

0x8bc9,	// (0x00016767) popup_notif_wgt_window

0x8be2,	// (0x00016780) popup_submenu_window_cp01_ParamLimits

0x8be2,	// (0x00016780) popup_submenu_window_cp01

0xa869,	// (0x00018407) bg_popup_window_pane_cp10

0xedf1,	// (0x0001c98f) listscroll_notif_wgt_pane

0xedfb,	// (0x0001c999) list_notif_wgt_window

0xee04,	// (0x0001c9a2) scroll_pane_cp033

0xecec,	// (0x0001c88a) list_notif_wgt_row_pane_ParamLimits

0xecec,	// (0x0001c88a) list_notif_wgt_row_pane

0xee0d,	// (0x0001c9ab) aid_size_list_notif_wgt_del

0xee16,	// (0x0001c9b4) list_notif_wgt_row_pane_g1

0xee1e,	// (0x0001c9bc) list_notif_wgt_row_pane_g2

0xee26,	// (0x0001c9c4) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x0001da51) list_notif_wgt_row_pane_g

0xee2f,	// (0x0001c9cd) list_notif_wgt_row_pane_t1

0xee3d,	// (0x0001c9db) list_notif_wgt_row_pane_t2

0xee4b,	// (0x0001c9e9) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x0001da58) list_notif_wgt_row_pane_t

0xd2eb,	// (0x0001ae89) list_recal_day_event_pane_g1

0xee59,	// (0x0001c9f7) list_recal_day_event_pane_t1

0x92f3,	// (0x00016e91) bg_button_pane_cp045

0xee68,	// (0x0001ca06) cntbar_detail_btn_pane_t1

0xbd26,	// (0x000198c4) main_callh_pane_ParamLimits

0xbd26,	// (0x000198c4) main_callh_pane

0x92f3,	// (0x00016e91) main_coverflow0_pane

0x92f3,	// (0x00016e91) main_wgtman_pane

0x7c67,	// (0x00015805) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7c67,	// (0x00015805) main_fs_bigclock_unlock_btn_pane

0xe63a,	// (0x0001c1d8) bg_button_pane_cp16

0xe64a,	// (0x0001c1e8) cell_tport_appsw_pane_g3

0x8bf4,	// (0x00016792) cf0_flow_pane_ParamLimits

0x8bf4,	// (0x00016792) cf0_flow_pane

0xee76,	// (0x0001ca14) listscroll_cf0_pane

0xee7f,	// (0x0001ca1d) main_cf0_pane_g1

0x8c09,	// (0x000167a7) main_cf0_pane_t1_ParamLimits

0x8c09,	// (0x000167a7) main_cf0_pane_t1

0x8c20,	// (0x000167be) main_cf0_pane_t2_ParamLimits

0x8c20,	// (0x000167be) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x0001da5f) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x0001da5f) main_cf0_pane_t

0xee89,	// (0x0001ca27) scroll_pane_cp11

0x8c37,	// (0x000167d5) cf0_flow_pane_g1

0x8c3f,	// (0x000167dd) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x0001da64) cf0_flow_pane_g

0x8c47,	// (0x000167e5) cf0_flow_pane_t1

0x92f3,	// (0x00016e91) main_call6_pane

0x92f3,	// (0x00016e91) main_calllock_pane

0x8c55,	// (0x000167f3) call6_btn_grp_pane_ParamLimits

0x8c55,	// (0x000167f3) call6_btn_grp_pane

0x8c6f,	// (0x0001680d) call6_pane_g1_ParamLimits

0x8c6f,	// (0x0001680d) call6_pane_g1

0x8c84,	// (0x00016822) popup_call6_1st_window_ParamLimits

0x8c84,	// (0x00016822) popup_call6_1st_window

0x8c95,	// (0x00016833) popup_call6_2nd_window_ParamLimits

0x8c95,	// (0x00016833) popup_call6_2nd_window

0x8ca6,	// (0x00016844) cell_call6_btn_pane_ParamLimits

0x8ca6,	// (0x00016844) cell_call6_btn_pane

0xa869,	// (0x00018407) bg_popup_call2_in_pane_cp03

0xee94,	// (0x0001ca32) popup_call6_1st_window_g1

0xee9c,	// (0x0001ca3a) popup_call6_1st_window_g2

0xeea4,	// (0x0001ca42) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x0001da69) popup_call6_1st_window_g

0xeeac,	// (0x0001ca4a) popup_call6_1st_window_t1

0xeebb,	// (0x0001ca59) popup_call6_1st_window_t2

0xeecb,	// (0x0001ca69) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x0001da70) popup_call6_1st_window_t

0xa869,	// (0x00018407) bg_popup_call2_in_pane_cp04

0xee94,	// (0x0001ca32) popup_call6_2nd_window_g1

0xee9c,	// (0x0001ca3a) popup_call6_2nd_window_g2

0xeea4,	// (0x0001ca42) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x0001da69) popup_call6_2nd_window_g

0xeeac,	// (0x0001ca4a) popup_call6_2nd_window_t1

0x92f3,	// (0x00016e91) bg_button_pane_cp15

0xeedb,	// (0x0001ca79) cell_call6_btn_pane_g1

0xeee4,	// (0x0001ca82) cell_call6_btn_pane_t1

0x8cba,	// (0x00016858) listscroll_wgtman_pane_ParamLimits

0x8cba,	// (0x00016858) listscroll_wgtman_pane

0x8cdd,	// (0x0001687b) wgtman_btn_pane_ParamLimits

0x8cdd,	// (0x0001687b) wgtman_btn_pane

0xa720,	// (0x000182be) aid_scroll_copy1

0xeef3,	// (0x0001ca91) list_wgtman_pane

0x8d20,	// (0x000168be) wgtman_btn_pane_g1_ParamLimits

0x8d20,	// (0x000168be) wgtman_btn_pane_g1

0x8d4c,	// (0x000168ea) wgtman_btn_pane_t1_ParamLimits

0x8d4c,	// (0x000168ea) wgtman_btn_pane_t1

0xeefd,	// (0x0001ca9b) wgtman_btn_pane_t2_ParamLimits

0xeefd,	// (0x0001ca9b) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x0001da77) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x0001da77) wgtman_btn_pane_t

0x8d89,	// (0x00016927) listrow_wgtman_pane_ParamLimits

0x8d89,	// (0x00016927) listrow_wgtman_pane

0x8d9b,	// (0x00016939) listrow_wgtman_pane_g1

0x8da4,	// (0x00016942) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x0001da7c) listrow_wgtman_pane_g

0x8dae,	// (0x0001694c) listrow_wgtman_pane_t1

0x8dbc,	// (0x0001695a) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x0001da81) listrow_wgtman_pane_t

0x8dca,	// (0x00016968) wait_bar_pane_cp09

0xef14,	// (0x0001cab2) main_calllock_btn_pane

0xef1e,	// (0x0001cabc) main_calllock_pane_g1

0x92f3,	// (0x00016e91) bg_button_pane_cp17

0xef2a,	// (0x0001cac8) main_calllock_btn_pane_g1

0xef33,	// (0x0001cad1) main_calllock_btn_pane_t1

0x92f3,	// (0x00016e91) main_dialer3_pane

0x92f3,	// (0x00016e91) main_fmrd2_pane

0xc22c,	// (0x00019dca) main_fs_bigclock_unlock_btn_pane_g1

0xef4a,	// (0x0001cae8) main_fs_bigclock_unlock_btn_pane_t1

0x8dd2,	// (0x00016970) area_fmrd2_info_pane_ParamLimits

0x8dd2,	// (0x00016970) area_fmrd2_info_pane

0x8de3,	// (0x00016981) area_fmrd2_visual_pane_ParamLimits

0x8de3,	// (0x00016981) area_fmrd2_visual_pane

0x8df1,	// (0x0001698f) fmrd2_indi_pane_ParamLimits

0x8df1,	// (0x0001698f) fmrd2_indi_pane

0x8dfe,	// (0x0001699c) area_fmrd2_visual_pane_g1

0x8e06,	// (0x000169a4) area_fmrd2_visual_pane_t1

0x8e16,	// (0x000169b4) area_fmrd2_visual_pane_t2

0x8e26,	// (0x000169c4) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x0001da8b) area_fmrd2_visual_pane_t

0x8e36,	// (0x000169d4) area_fmrd2_info_pane_g1

0x8e3e,	// (0x000169dc) area_fmrd2_info_pane_t1

0x8e4e,	// (0x000169ec) area_fmrd2_info_pane_t2

0x8e5e,	// (0x000169fc) area_fmrd2_info_pane_t3

0x8e6e,	// (0x00016a0c) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x0001da92) area_fmrd2_info_pane_t

0x8e7c,	// (0x00016a1a) fmrd2_indi_pane_t1

0x8e8c,	// (0x00016a2a) fmrd2_indi_pane_t2

0x8e9c,	// (0x00016a3a) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x0001da9b) fmrd2_indi_pane_t

0xe0c5,	// (0x0001bc63) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0c5,	// (0x0001bc63) list_single_fs_bigclock_indicator_pane_g5

0xe16c,	// (0x0001bd0a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe16c,	// (0x0001bd0a) list_single_fs_bigclock_indicator_pane_t5

0x8621,	// (0x000161bf) aid_cell_bcale_month_pane_ParamLimits

0x8621,	// (0x000161bf) aid_cell_bcale_month_pane

0x8633,	// (0x000161d1) bcale_month_pane_ParamLimits

0x8633,	// (0x000161d1) bcale_month_pane

0x864d,	// (0x000161eb) bcale_preview_pane_ParamLimits

0x864d,	// (0x000161eb) bcale_preview_pane

0xeca9,	// (0x0001c847) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc8,	// (0x0001c866) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc8,	// (0x0001c866) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x0001da22) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x0001da22) list_single_fs_bigclock_pane_t

0xef42,	// (0x0001cae0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x0001da86) main_fs_bigclock_unlock_btn_pane_g

0x8eac,	// (0x00016a4a) aid_dia3_key_size_ParamLimits

0x8eac,	// (0x00016a4a) aid_dia3_key_size

0x8ebb,	// (0x00016a59) aid_dia3_listrow_size_ParamLimits

0x8ebb,	// (0x00016a59) aid_dia3_listrow_size

0x8ed0,	// (0x00016a6e) dia3_keypad_fun_pane_ParamLimits

0x8ed0,	// (0x00016a6e) dia3_keypad_fun_pane

0x8eec,	// (0x00016a8a) dia3_keypad_num_pane_ParamLimits

0x8eec,	// (0x00016a8a) dia3_keypad_num_pane

0x8f07,	// (0x00016aa5) dia3_listscroll_pane_ParamLimits

0x8f07,	// (0x00016aa5) dia3_listscroll_pane

0x8f1a,	// (0x00016ab8) dia3_numentry_pane_ParamLimits

0x8f1a,	// (0x00016ab8) dia3_numentry_pane

0xef58,	// (0x0001caf6) dia3_list_pane

0xef63,	// (0x0001cb01) scroll_pane_cp12

0x92f3,	// (0x00016e91) bg_dia3_numentry_pane

0x8f2e,	// (0x00016acc) dia3_numentry_pane_t1

0x8f3d,	// (0x00016adb) cell_dia3_key_num_pane

0x8f45,	// (0x00016ae3) cell_dia3_key0_fun_pane_ParamLimits

0x8f45,	// (0x00016ae3) cell_dia3_key0_fun_pane

0x8f59,	// (0x00016af7) cell_dia3_key1_fun_pane_ParamLimits

0x8f59,	// (0x00016af7) cell_dia3_key1_fun_pane

0x8f71,	// (0x00016b0f) dia3_listrow_pane

0xddbb,	// (0x0001b959) bg_dia3_numentry_pane_g1

0x92f3,	// (0x00016e91) bg_button_pane_cp21

0xef6e,	// (0x0001cb0c) cell_dia3_key_num_pane_t1

0xef7c,	// (0x0001cb1a) cell_dia3_key_num_pane_t2

0xef8b,	// (0x0001cb29) cell_dia3_key_num_pane_t3

0xef9a,	// (0x0001cb38) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x0001daa2) cell_dia3_key_num_pane_t

0x92f3,	// (0x00016e91) bg_button_pane_cp19

0x8f83,	// (0x00016b21) cell_dia3_key0_fun_pane_g1

0x92f3,	// (0x00016e91) bg_button_pane_cp20

0x8f8b,	// (0x00016b29) cell_dia3_key1_fun_pane_g1

0x8f93,	// (0x00016b31) area_left_week_number_pane

0x8f9c,	// (0x00016b3a) area_top_day_name_pane

0x8fa5,	// (0x00016b43) frame_month_view_pane

0x8fad,	// (0x00016b4b) grid_month_view_pane

0x8fb7,	// (0x00016b55) cell_top_day_name_pane_ParamLimits

0x8fb7,	// (0x00016b55) cell_top_day_name_pane

0x8fcd,	// (0x00016b6b) cell_area_left_week_number_pane_ParamLimits

0x8fcd,	// (0x00016b6b) cell_area_left_week_number_pane

0x8fe1,	// (0x00016b7f) cell_month_view_pane_ParamLimits

0x8fe1,	// (0x00016b7f) cell_month_view_pane

0xefa9,	// (0x0001cb47) frm_month_g1

0x8ffc,	// (0x00016b9a) frm_month_g2

0x9004,	// (0x00016ba2) frm_month_g3

0x900c,	// (0x00016baa) frm_month_g4

0x9014,	// (0x00016bb2) frm_month_g5

0x901c,	// (0x00016bba) frm_month_g6

0x9024,	// (0x00016bc2) frm_month_g7

0xefb2,	// (0x0001cb50) frm_month_g8

0x902c,	// (0x00016bca) frm_month_g9

0x9035,	// (0x00016bd3) frm_month_g10

0x903e,	// (0x00016bdc) frm_month_g11

0x9047,	// (0x00016be5) frm_month_g12

0x9050,	// (0x00016bee) frm_month_g13

0x9059,	// (0x00016bf7) frm_month_g14

0x9062,	// (0x00016c00) frm_month_g15

0x906b,	// (0x00016c09) frm_month_g16

0x000f,

0xff0d,	// (0x0001daab) frm_month_g

0x9074,	// (0x00016c12) cell_top_day_name_pane_t1

0x9083,	// (0x00016c21) cell_area_left_week_number_pane_g1

0x9074,	// (0x00016c12) cell_area_left_week_number_pane_t1

0xc22c,	// (0x00019dca) cell_month_view_pane_g1

0x908b,	// (0x00016c29) cell_month_view_pane_t1

0x92f3,	// (0x00016e91) main_fps_pane

0xe3b0,	// (0x0001bf4e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3b0,	// (0x0001bf4e) cmail_ddmenu_btn02_pane_cp1

0xe3cc,	// (0x0001bf6a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3cc,	// (0x0001bf6a) cmail_ddmenu_btn02_pane_cp2

0x8900,	// (0x0001649e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8900,	// (0x0001649e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe37,	// (0x0001d9d5) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe37,	// (0x0001d9d5) cmail_ddmenu_btn02_pane_g

0x8921,	// (0x000164bf) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8921,	// (0x000164bf) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3c,	// (0x0001d9da) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3c,	// (0x0001d9da) cmail_ddmenu_btn02_pane_t

0x909a,	// (0x00016c38) fps_text_pane_ParamLimits

0x909a,	// (0x00016c38) fps_text_pane

0x90b1,	// (0x00016c4f) main_fps_pane_g1_ParamLimits

0x90b1,	// (0x00016c4f) main_fps_pane_g1

0x90cb,	// (0x00016c69) wait_bar_pane_cp010_ParamLimits

0x90cb,	// (0x00016c69) wait_bar_pane_cp010

0x90dc,	// (0x00016c7a) fps_text_pane_t1_ParamLimits

0x90dc,	// (0x00016c7a) fps_text_pane_t1

0xed1b,	// (0x0001c8b9) cam4_image_uncrop_pane_g1

0xed24,	// (0x0001c8c2) cam4_image_uncrop_pane_g2

0x5e8e,	// (0x00013a2c) cam4_image_uncrop_pane_g3

0x5e97,	// (0x00013a35) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0001d4a6) cam4_image_uncrop_pane_g

0x8f71,	// (0x00016b0f) dia3_listrow_pane_ParamLimits

0x92f3,	// (0x00016e91) main_phob2_pane

0x845a,	// (0x00015ff8) cell_tport_appsw_pane_cp02_ParamLimits

0x845a,	// (0x00015ff8) cell_tport_appsw_pane_cp02

0x846e,	// (0x0001600c) cell_tport_appsw_pane_cp03_ParamLimits

0x846e,	// (0x0001600c) cell_tport_appsw_pane_cp03

0x92f3,	// (0x00016e91) phob2_contact_card_pane

0x92f3,	// (0x00016e91) phob2_listscroll_pane

0xefbb,	// (0x0001cb59) phob2_list_pane

0xefc3,	// (0x0001cb61) scroll_pane_cp034

0x90f4,	// (0x00016c92) phob2_cc_data_pane_ParamLimits

0x90f4,	// (0x00016c92) phob2_cc_data_pane

0x9113,	// (0x00016cb1) phob2_cc_listscroll_pane_ParamLimits

0x9113,	// (0x00016cb1) phob2_cc_listscroll_pane

0x9131,	// (0x00016ccf) list_double_large_graphic_phob2_pane_ParamLimits

0x9131,	// (0x00016ccf) list_double_large_graphic_phob2_pane

0x9143,	// (0x00016ce1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9143,	// (0x00016ce1) list_double_large_graphic_phob2_pane_g1

0xefcb,	// (0x0001cb69) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xefcb,	// (0x0001cb69) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0001dacc) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0001dacc) list_double_large_graphic_phob2_pane_g

0x9150,	// (0x00016cee) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9150,	// (0x00016cee) list_double_large_graphic_phob2_pane_t1

0x9165,	// (0x00016d03) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9165,	// (0x00016d03) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0001dad1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0001dad1) list_double_large_graphic_phob2_pane_t

0x92f3,	// (0x00016e91) list_highlight_pane_cp024

0xefd7,	// (0x0001cb75) phob2_cc_button_pane

0x9177,	// (0x00016d15) phob2_cc_data_pane_g1_ParamLimits

0x9177,	// (0x00016d15) phob2_cc_data_pane_g1

0x918c,	// (0x00016d2a) phob2_cc_data_pane_g2_ParamLimits

0x918c,	// (0x00016d2a) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x0001dad6) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x0001dad6) phob2_cc_data_pane_g

0x919e,	// (0x00016d3c) phob2_cc_data_pane_t1_ParamLimits

0x919e,	// (0x00016d3c) phob2_cc_data_pane_t1

0x91b6,	// (0x00016d54) phob2_cc_data_pane_t2_ParamLimits

0x91b6,	// (0x00016d54) phob2_cc_data_pane_t2

0x91ce,	// (0x00016d6c) phob2_cc_data_pane_t3_ParamLimits

0x91ce,	// (0x00016d6c) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0001dadb) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0001dadb) phob2_cc_data_pane_t

0xefdf,	// (0x0001cb7d) phob2_cc_list_pane_ParamLimits

0xefdf,	// (0x0001cb7d) phob2_cc_list_pane

0xd396,	// (0x0001af34) scroll_pane_cp035_ParamLimits

0xd396,	// (0x0001af34) scroll_pane_cp035

0x9363,	// (0x00016f01) bg_button_pane_cp033

0xefeb,	// (0x0001cb89) phob2_cc_button_pane_g1

0xeff7,	// (0x0001cb95) phob2_cc_button_pane_t1

0xf00c,	// (0x0001cbaa) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x0001dae2) phob2_cc_button_pane_t

0x91e6,	// (0x00016d84) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x91e6,	// (0x00016d84) list_double_large_graphic_phob2_cc_pane

0x91f8,	// (0x00016d96) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x91f8,	// (0x00016d96) list_double_large_graphic_phob2_cc_pane_g1

0x9204,	// (0x00016da2) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9204,	// (0x00016da2) list_double_large_graphic_phob2_cc_pane_g2

0x9210,	// (0x00016dae) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9210,	// (0x00016dae) list_double_large_graphic_phob2_cc_pane_g3

0x921c,	// (0x00016dba) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x921c,	// (0x00016dba) list_double_large_graphic_phob2_cc_pane_g4

0x9228,	// (0x00016dc6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9228,	// (0x00016dc6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0001dae7) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0001dae7) list_double_large_graphic_phob2_cc_pane_g

0x9234,	// (0x00016dd2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9234,	// (0x00016dd2) list_double_large_graphic_phob2_cc_pane_t1

0x925d,	// (0x00016dfb) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x925d,	// (0x00016dfb) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x0001daf2) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x0001daf2) list_double_large_graphic_phob2_cc_pane_t

0xf01e,	// (0x0001cbbc) list_highlight_pane_cp025_ParamLimits

0xf01e,	// (0x0001cbbc) list_highlight_pane_cp025

0x9363,	// (0x00016f01) bg_button_pane_cp033_ParamLimits

0xefeb,	// (0x0001cb89) phob2_cc_button_pane_g1_ParamLimits

0xeff7,	// (0x0001cb95) phob2_cc_button_pane_t1_ParamLimits

0xf00c,	// (0x0001cbaa) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x0001dae2) phob2_cc_button_pane_t_ParamLimits

0x0dc4,	// (0x0000e962) popup_wgtman_window

0xd10c,	// (0x0001acaa) scroll_pane_cp038

0x8d02,	// (0x000168a0) wgtman_btn_pane_cp_01_ParamLimits

0x8d02,	// (0x000168a0) wgtman_btn_pane_cp_01

0xf02c,	// (0x0001cbca) wgtman_content_pane

0xf035,	// (0x0001cbd3) wgtman_heading_pane

0x92f3,	// (0x00016e91) bg_heading_pane_cp02

0xf03e,	// (0x0001cbdc) wgtman_heading_pane_g1

0xf046,	// (0x0001cbe4) wgtman_heading_pane_t1

0xf054,	// (0x0001cbf2) scroll_pane_cp036

0xf05c,	// (0x0001cbfa) wgtman_list_pane

0xecfe,	// (0x0001c89c) wgtman_list_pane_t1_ParamLimits

0xecfe,	// (0x0001c89c) wgtman_list_pane_t1

0xcede,	// (0x0001aa7c) cam4_grid_pane

0x6c0c,	// (0x000147aa) bg_button_pane_cp015_ParamLimits

0x6c1e,	// (0x000147bc) bg_button_pane_cp016_ParamLimits

0x6c31,	// (0x000147cf) bg_button_pane_cp017_ParamLimits

0x6c89,	// (0x00014827) popup_vitu2_query_window_g3_ParamLimits

0x6c89,	// (0x00014827) popup_vitu2_query_window_g3

0x6d46,	// (0x000148e4) popup_vitu2_query_window_t6_ParamLimits

0x6d46,	// (0x000148e4) popup_vitu2_query_window_t6

0x6d71,	// (0x0001490f) popup_vitu2_query_window_t7_ParamLimits

0x6d71,	// (0x0001490f) popup_vitu2_query_window_t7

0xed1b,	// (0x0001c8b9) cam4_grid_pane_g1

0xed24,	// (0x0001c8c2) cam4_grid_pane_g2

0xf064,	// (0x0001cc02) cam4_grid_pane_g3

0xf06d,	// (0x0001cc0b) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x0001daf7) cam4_grid_pane_g

0x1af3,	// (0x0000f691) aid_placing_vt_slider_lsc_ParamLimits

0x1dfe,	// (0x0000f99c) vidtel_button_pane_ParamLimits

0x1dfe,	// (0x0000f99c) vidtel_button_pane

0xf078,	// (0x0001cc16) bg_button_pane_cp034

0x9286,	// (0x00016e24) vidtel_button_pane_g1

0xf082,	// (0x0001cc20) vidtel_button_pane_t1

0xd279,	// (0x0001ae17) aid_size_vtel_slider_touch

0xd396,	// (0x0001af34) scroll_pane_cp039

0xddf9,	// (0x0001b997) ncim_query_button_pane_cp01_ParamLimits

0xde18,	// (0x0001b9b6) ncimui_query_pane_g1_ParamLimits

0x9363,	// (0x00016f01) input_focus_pane_cp012_ParamLimits

0xde3d,	// (0x0001b9db) ncim_query_entry_pane_t1_ParamLimits

0xd396,	// (0x0001af34) scroll_pane_cp039_ParamLimits

0x2bb1,	// (0x0001074f) navi_pane_bcale_mc_g1

0x2bb9,	// (0x00010757) navi_pane_bcale_mc_t1

0xe415,	// (0x0001bfb3) main_sp_fs_email_pane_g1

0xe41d,	// (0x0001bfbb) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x0001d898) main_sp_fs_email_pane_g

0xe942,	// (0x0001c4e0) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe942,	// (0x0001c4e0) list_single_cale_mrui_row_pane_g3

0x8949,	// (0x000164e7) list_single_recal_day_pane_g5_event_pane

0xeb08,	// (0x0001c6a6) list_single_recal_day_pane_g7

0xf090,	// (0x0001cc2e) list_recal_day_event_pane_cp01

0xf099,	// (0x0001cc37) list_recal_vselct_arw_lo_pane_cp01

0xf0a1,	// (0x0001cc3f) list_recal_vselct_arw_up_pane_cp01

0xf0a9,	// (0x0001cc47) list_recal_vselct_pane_cp01

0xd2eb,	// (0x0001ae89) list_recal_day_event_pane_cp01_g1

0xf0b3,	// (0x0001cc51) list_recal_day_event_pane_cp01_t1

0xeb10,	// (0x0001c6ae) list_single_recal_day_pane_t1_ParamLimits

0xeb22,	// (0x0001c6c0) list_single_recal_day_pane_t2_ParamLimits

0xfe4c,	// (0x0001d9ea) list_single_recal_day_pane_t_ParamLimits

0x9a8a,	// (0x00017628) bg_notes_pane_ParamLimits

0x9a98,	// (0x00017636) list_notes_pane_ParamLimits

0x110d,	// (0x0000ecab) scroll_pane_cp06_ParamLimits

0x9ad4,	// (0x00017672) main_notes_pane_ParamLimits

0x92f3,	// (0x00016e91) main_welc_pane

0x928e,	// (0x00016e2c) main_welc_body_pane_ParamLimits

0x928e,	// (0x00016e2c) main_welc_body_pane

0x92a3,	// (0x00016e41) main_welc_opti_pane_ParamLimits

0x92a3,	// (0x00016e41) main_welc_opti_pane

0x92b8,	// (0x00016e56) main_welc_pane_t1_ParamLimits

0x92b8,	// (0x00016e56) main_welc_pane_t1

0x92cf,	// (0x00016e6d) main_welc_body_row_pane_ParamLimits

0x92cf,	// (0x00016e6d) main_welc_body_row_pane

0x92e3,	// (0x00016e81) main_welc_opti_row_pane_ParamLimits

0x92e3,	// (0x00016e81) main_welc_opti_row_pane

0xf0c1,	// (0x0001cc5f) main_welc_opti_row_pane_g1

0xf0c9,	// (0x0001cc67) main_welc_opti_row_pane_t1

0xf0d8,	// (0x0001cc76) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
