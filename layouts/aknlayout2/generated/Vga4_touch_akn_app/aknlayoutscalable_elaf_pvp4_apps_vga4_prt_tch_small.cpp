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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0003344e };

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
0x44e5,	// (0x00037933) Screen

0x44f1,	// (0x0003793f) application_window

0x4557,	// (0x000379a5) area_bottom_pane_ParamLimits

0x4557,	// (0x000379a5) area_bottom_pane

0x45b1,	// (0x000379ff) area_top_pane_ParamLimits

0x45b1,	// (0x000379ff) area_top_pane

0x4615,	// (0x00037a63) call_video_uplink_pane_ParamLimits

0x4615,	// (0x00037a63) call_video_uplink_pane

0x4652,	// (0x00037aa0) main_pane_ParamLimits

0x4652,	// (0x00037aa0) main_pane

0xe45f,	// (0x000418ad) context_pane

0x78ba,	// (0x0003ad08) navi_pane

0x78de,	// (0x0003ad2c) popup_cale_events_window_ParamLimits

0x78de,	// (0x0003ad2c) popup_cale_events_window

0xe472,	// (0x000418c0) popup_mup_playback_window

0x78f6,	// (0x0003ad44) signal_pane

0xc589,	// (0x0003f9d7) main_browser_pane

0xcfdf,	// (0x0004042d) main_burst_pane

0x775e,	// (0x0003abac) main_calc_pane

0xcfdf,	// (0x0004042d) main_cale_day_pane

0xc589,	// (0x0003f9d7) main_cale_month_pane

0xcfdf,	// (0x0004042d) main_cale_week_pane

0xcfdf,	// (0x0004042d) main_call_pane

0xc25b,	// (0x0003f6a9) main_call_poc_pane

0xcfdf,	// (0x0004042d) main_camera_pane

0xcfdf,	// (0x0004042d) main_chi_dic_pane

0xce81,	// (0x000402cf) main_clock_pane

0xc25b,	// (0x0003f6a9) main_fmradio_pane

0xcfdf,	// (0x0004042d) main_graph_messa_pane

0xc25b,	// (0x0003f6a9) main_help_pane

0xc589,	// (0x0003f9d7) main_im_pane

0xc4b6,	// (0x0003f904) main_image_pane_ParamLimits

0xc4b6,	// (0x0003f904) main_image_pane

0xc25b,	// (0x0003f6a9) main_location2_pane

0xcfdf,	// (0x0004042d) main_location_pane

0xc25b,	// (0x0003f6a9) main_messa_pane

0xc25b,	// (0x0003f6a9) main_mp2_pane

0xcfdf,	// (0x0004042d) main_mp_pane

0xc25b,	// (0x0003f6a9) main_msg_pane

0xc25b,	// (0x0003f6a9) main_mup_eq_pane

0xc25b,	// (0x0003f6a9) main_mup_pane

0xc589,	// (0x0003f9d7) main_notes_pane

0xc25b,	// (0x0003f6a9) main_pec_pane

0xc25b,	// (0x0003f6a9) main_phob_pane

0xc25b,	// (0x0003f6a9) main_pinb_pane

0xc25b,	// (0x0003f6a9) main_postcard_pane

0xc25b,	// (0x0003f6a9) main_qdial_pane

0xcfdf,	// (0x0004042d) main_skin_pane

0xc25b,	// (0x0003f6a9) main_smil2_pane

0xcfdf,	// (0x0004042d) main_smil_pane

0xcfdf,	// (0x0004042d) main_video_pane

0xcfdf,	// (0x0004042d) main_video_tele_pane

0xc4b6,	// (0x0003f904) main_viewer_pane_ParamLimits

0xc4b6,	// (0x0003f904) main_viewer_pane

0xcfdf,	// (0x0004042d) main_vorec_pane

0x77a4,	// (0x0003abf2) popup_blid_sat_info_window_ParamLimits

0x77a4,	// (0x0003abf2) popup_blid_sat_info_window

0x77be,	// (0x0003ac0c) popup_dyc_status_message_window_ParamLimits

0x77be,	// (0x0003ac0c) popup_dyc_status_message_window

0x77ce,	// (0x0003ac1c) popup_grid_large_graphic_window_ParamLimits

0x77ce,	// (0x0003ac1c) popup_grid_large_graphic_window

0x7846,	// (0x0003ac94) popup_loc_request_window_ParamLimits

0x7846,	// (0x0003ac94) popup_loc_request_window

0x788e,	// (0x0003acdc) popup_wml_address_window_ParamLimits

0x788e,	// (0x0003acdc) popup_wml_address_window

0x7636,	// (0x0003aa84) call_muted_g1

0x72f5,	// (0x0003a743) popup_call_audio_conf_window_ParamLimits

0x72f5,	// (0x0003a743) popup_call_audio_conf_window

0x7646,	// (0x0003aa94) popup_call_audio_first_window_ParamLimits

0x7646,	// (0x0003aa94) popup_call_audio_first_window

0x7686,	// (0x0003aad4) popup_call_audio_in_window_ParamLimits

0x7686,	// (0x0003aad4) popup_call_audio_in_window

0x76aa,	// (0x0003aaf8) popup_call_audio_out_window_ParamLimits

0x76aa,	// (0x0003aaf8) popup_call_audio_out_window

0x76cc,	// (0x0003ab1a) popup_call_audio_second_window_ParamLimits

0x76cc,	// (0x0003ab1a) popup_call_audio_second_window

0x76fc,	// (0x0003ab4a) popup_call_audio_wait_window_ParamLimits

0x76fc,	// (0x0003ab4a) popup_call_audio_wait_window

0x771d,	// (0x0003ab6b) popup_number_entry_window_ParamLimits

0x771d,	// (0x0003ab6b) popup_number_entry_window

0x4823,	// (0x00037c71) bg_popup_call_pane_cp05_ParamLimits

0x4823,	// (0x00037c71) bg_popup_call_pane_cp05

0x4843,	// (0x00037c91) popup_number_entry_window_t1

0x4856,	// (0x00037ca4) popup_number_entry_window_t2

0x4868,	// (0x00037cb6) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x00042535) popup_number_entry_window_t

0x48af,	// (0x00037cfd) text_title_cp2

0x48c2,	// (0x00037d10) bg_popup_call_pane_cp_ParamLimits

0x48c2,	// (0x00037d10) bg_popup_call_pane_cp

0x48d0,	// (0x00037d1e) call_thumbnail_pane

0x48d8,	// (0x00037d26) popup_call_audio_in_window_g1_ParamLimits

0x48d8,	// (0x00037d26) popup_call_audio_in_window_g1

0x48e4,	// (0x00037d32) popup_call_audio_in_window_g2_ParamLimits

0x48e4,	// (0x00037d32) popup_call_audio_in_window_g2

0x48f0,	// (0x00037d3e) popup_call_audio_in_window_g3_ParamLimits

0x48f0,	// (0x00037d3e) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0004253e) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0004253e) popup_call_audio_in_window_g

0x48fc,	// (0x00037d4a) popup_call_audio_in_window_t1_ParamLimits

0x48fc,	// (0x00037d4a) popup_call_audio_in_window_t1

0x4918,	// (0x00037d66) popup_call_audio_in_window_t2_ParamLimits

0x4918,	// (0x00037d66) popup_call_audio_in_window_t2

0x4934,	// (0x00037d82) popup_call_audio_in_window_t3_ParamLimits

0x4934,	// (0x00037d82) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x00042545) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x00042545) popup_call_audio_in_window_t

0x48c2,	// (0x00037d10) bg_popup_call_pane_cp01_ParamLimits

0x48c2,	// (0x00037d10) bg_popup_call_pane_cp01

0x48d0,	// (0x00037d1e) call_thumbnail_pane_cp02

0x4947,	// (0x00037d95) call_type_pane_cp022

0x494f,	// (0x00037d9d) popup_call_audio_out_window_g1_ParamLimits

0x494f,	// (0x00037d9d) popup_call_audio_out_window_g1

0x4961,	// (0x00037daf) popup_call_audio_out_window_g2_ParamLimits

0x4961,	// (0x00037daf) popup_call_audio_out_window_g2

0x496d,	// (0x00037dbb) popup_call_audio_out_window_g3_ParamLimits

0x496d,	// (0x00037dbb) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0004254c) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0004254c) popup_call_audio_out_window_g

0x497f,	// (0x00037dcd) popup_call_audio_out_window_t1_ParamLimits

0x497f,	// (0x00037dcd) popup_call_audio_out_window_t1

0x4997,	// (0x00037de5) popup_call_audio_out_window_t2_ParamLimits

0x4997,	// (0x00037de5) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x00042553) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x00042553) popup_call_audio_out_window_t

0x49ac,	// (0x00037dfa) bg_popup_call_pane_ParamLimits

0x49ac,	// (0x00037dfa) bg_popup_call_pane

0x4a30,	// (0x00037e7e) call_thumbnail_pane_cp_ParamLimits

0x4a30,	// (0x00037e7e) call_thumbnail_pane_cp

0xc020,	// (0x0003f46e) call_type_pane_cp01_ParamLimits

0xc020,	// (0x0003f46e) call_type_pane_cp01

0xc064,	// (0x0003f4b2) popup_call_audio_first_window_g1_ParamLimits

0xc064,	// (0x0003f4b2) popup_call_audio_first_window_g1

0xc0b0,	// (0x0003f4fe) popup_call_audio_first_window_g2_ParamLimits

0xc0b0,	// (0x0003f4fe) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x00042558) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x00042558) popup_call_audio_first_window_g

0xc0f4,	// (0x0003f542) popup_call_audio_first_window_t1_ParamLimits

0xc0f4,	// (0x0003f542) popup_call_audio_first_window_t1

0xc1a0,	// (0x0003f5ee) popup_call_audio_first_window_t4_ParamLimits

0xc1a0,	// (0x0003f5ee) popup_call_audio_first_window_t4

0xc22c,	// (0x0003f67a) popup_call_audio_first_window_t5_ParamLimits

0xc22c,	// (0x0003f67a) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0004255d) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0004255d) popup_call_audio_first_window_t

0xc25b,	// (0x0003f6a9) bg_popup_call_pane_cp02

0xc265,	// (0x0003f6b3) call_type_pane_cp023

0xc26d,	// (0x0003f6bb) popup_call_audio_wait_window_g1

0xc275,	// (0x0003f6c3) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x00042564) popup_call_audio_wait_window_g

0xc27d,	// (0x0003f6cb) popup_call_audio_wait_window_t3

0xc28b,	// (0x0003f6d9) bg_popup_call_pane_cp03_ParamLimits

0xc28b,	// (0x0003f6d9) bg_popup_call_pane_cp03

0xc2eb,	// (0x0003f739) call_thumbnail_pane_cp011_ParamLimits

0xc2eb,	// (0x0003f739) call_thumbnail_pane_cp011

0xc2f7,	// (0x0003f745) call_type_pane_cp034_ParamLimits

0xc2f7,	// (0x0003f745) call_type_pane_cp034

0xc333,	// (0x0003f781) popup_call_audio_second_window_g1_ParamLimits

0xc333,	// (0x0003f781) popup_call_audio_second_window_g1

0xc36f,	// (0x0003f7bd) popup_call_audio_second_window_g2_ParamLimits

0xc36f,	// (0x0003f7bd) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x00042569) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x00042569) popup_call_audio_second_window_g

0xc3ab,	// (0x0003f7f9) popup_call_audio_second_window_t1_ParamLimits

0xc3ab,	// (0x0003f7f9) popup_call_audio_second_window_t1

0xc42c,	// (0x0003f87a) popup_call_audio_second_window_t2_ParamLimits

0xc42c,	// (0x0003f87a) popup_call_audio_second_window_t2

0xc462,	// (0x0003f8b0) popup_call_audio_second_window_t3_ParamLimits

0xc462,	// (0x0003f8b0) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0004256e) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0004256e) popup_call_audio_second_window_t

0xc25b,	// (0x0003f6a9) bg_popup_call_pane_cp04

0xc498,	// (0x0003f8e6) list_conf_pane

0xc4a0,	// (0x0003f8ee) popup_call_audio_conf_window_t1

0xc4ae,	// (0x0003f8fc) call_thumbnail_pane_g1

0xc4b6,	// (0x0003f904) bg_pinb_pane_ParamLimits

0xc4b6,	// (0x0003f904) bg_pinb_pane

0xc4c4,	// (0x0003f912) find_pinb_pane

0xc4cd,	// (0x0003f91b) listscroll_pinb_pane_ParamLimits

0xc4cd,	// (0x0003f91b) listscroll_pinb_pane

0xc4dc,	// (0x0003f92a) pinb_bg_pane_g1

0x4a54,	// (0x00037ea2) pinb_bg_pane_g2

0x4a60,	// (0x00037eae) pinb_bg_pane_g3

0x4a6c,	// (0x00037eba) pinb_bg_pane_g4

0x4a78,	// (0x00037ec6) pinb_bg_pane_g5

0x4a84,	// (0x00037ed2) pinb_bg_pane_g6

0x4a8f,	// (0x00037edd) pinb_bg_pane_g7

0x4a9a,	// (0x00037ee8) pinb_bg_pane_g8

0x4aa5,	// (0x00037ef3) pinb_bg_pane_g9

0x4aaf,	// (0x00037efd) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x00042575) pinb_bg_pane_g

0x4acc,	// (0x00037f1a) grid_pinb_pane

0x4ad7,	// (0x00037f25) list_pinb_pane

0x4ae2,	// (0x00037f30) scroll_pane_cp01_ParamLimits

0x4ae2,	// (0x00037f30) scroll_pane_cp01

0xc4e6,	// (0x0003f934) find_pinb_pane_g1_ParamLimits

0xc4e6,	// (0x0003f934) find_pinb_pane_g1

0xc4fe,	// (0x0003f94c) find_pinb_pane_t1

0xc510,	// (0x0003f95e) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0004258f) find_pinb_pane_t

0xc525,	// (0x0003f973) input_focus_pane_cp01_ParamLimits

0xc525,	// (0x0003f973) input_focus_pane_cp01

0x4af4,	// (0x00037f42) cell_pinb_pane_ParamLimits

0x4af4,	// (0x00037f42) cell_pinb_pane

0x4b12,	// (0x00037f60) cell_pinb_pane_g1_ParamLimits

0x4b12,	// (0x00037f60) cell_pinb_pane_g1

0x4b27,	// (0x00037f75) cell_pinb_pane_g2_ParamLimits

0x4b27,	// (0x00037f75) cell_pinb_pane_g2

0xc531,	// (0x0003f97f) cell_pinb_pane_g3_ParamLimits

0xc531,	// (0x0003f97f) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x00042594) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x00042594) cell_pinb_pane_g

0xc25b,	// (0x0003f6a9) grid_highlight_pane_cp01

0x4b33,	// (0x00037f81) list_pinb_item_pane_ParamLimits

0x4b33,	// (0x00037f81) list_pinb_item_pane

0xc25b,	// (0x0003f6a9) list_highlight_pane_cp02

0x4b4e,	// (0x00037f9c) list_pinb_item_pane_g1_ParamLimits

0x4b4e,	// (0x00037f9c) list_pinb_item_pane_g1

0x4b5b,	// (0x00037fa9) list_pinb_item_pane_g2_ParamLimits

0x4b5b,	// (0x00037fa9) list_pinb_item_pane_g2

0x4b67,	// (0x00037fb5) list_pinb_item_pane_g3_ParamLimits

0x4b67,	// (0x00037fb5) list_pinb_item_pane_g3

0x4b78,	// (0x00037fc6) list_pinb_item_pane_g4_ParamLimits

0x4b78,	// (0x00037fc6) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0004259b) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0004259b) list_pinb_item_pane_g

0x4b84,	// (0x00037fd2) list_pinb_item_pane_t1_ParamLimits

0x4b84,	// (0x00037fd2) list_pinb_item_pane_t1

0x4bb5,	// (0x00038003) calc_display_pane

0x4bd3,	// (0x00038021) calc_paper_pane

0x4bef,	// (0x0003803d) grid_calc_pane

0xc25b,	// (0x0003f6a9) bg_list_pane_cp01

0x4c1b,	// (0x00038069) clock_g1

0x4c23,	// (0x00038071) clock_g2

0x0001,

0xf156,	// (0x000425a4) clock_g

0x4c2d,	// (0x0003807b) clock_t1_ParamLimits

0x4c2d,	// (0x0003807b) clock_t1

0x4c42,	// (0x00038090) clock_t2_ParamLimits

0x4c42,	// (0x00038090) clock_t2

0x4c54,	// (0x000380a2) clock_t3_ParamLimits

0x4c54,	// (0x000380a2) clock_t3

0x4c66,	// (0x000380b4) clock_t4_ParamLimits

0x4c66,	// (0x000380b4) clock_t4

0x4c78,	// (0x000380c6) clock_t5_ParamLimits

0x4c78,	// (0x000380c6) clock_t5

0x4c8d,	// (0x000380db) clock_t6_ParamLimits

0x4c8d,	// (0x000380db) clock_t6

0x4c9f,	// (0x000380ed) clock_t7_ParamLimits

0x4c9f,	// (0x000380ed) clock_t7

0x4cb1,	// (0x000380ff) clock_t8_ParamLimits

0x4cb1,	// (0x000380ff) clock_t8

0x4cc7,	// (0x00038115) clock_t9_ParamLimits

0x4cc7,	// (0x00038115) clock_t9

0x0008,

0xf15b,	// (0x000425a9) clock_t_ParamLimits

0xf15b,	// (0x000425a9) clock_t

0xc53d,	// (0x0003f98b) popup_clock_analogue_window_cp02

0xc53d,	// (0x0003f98b) popup_clock_digital_window_cp01

0xc545,	// (0x0003f993) listscroll_help_pane

0xc25b,	// (0x0003f6a9) phob_pre_status_pane

0xc54f,	// (0x0003f99d) grid_qdial_pane

0xc25b,	// (0x0003f6a9) listscroll_mce_pane

0xc559,	// (0x0003f9a7) bg_notes_pane

0xc567,	// (0x0003f9b5) list_notes_pane

0x4cdd,	// (0x0003812b) scroll_pane_cp06

0xc575,	// (0x0003f9c3) bg_calc_paper_pane

0x4cec,	// (0x0003813a) list_calc_pane

0xc589,	// (0x0003f9d7) bg_calc_display_pane

0x4d06,	// (0x00038154) calc_display_pane_t1

0x4d1b,	// (0x00038169) calc_display_pane_t2

0x4d30,	// (0x0003817e) calc_display_pane_t3

0x0002,

0xf16e,	// (0x000425bc) calc_display_pane_t

0x4d42,	// (0x00038190) cell_calc_pane_ParamLimits

0x4d42,	// (0x00038190) cell_calc_pane

0xc595,	// (0x0003f9e3) bg_calc_paper_pane_g1

0xc5a1,	// (0x0003f9ef) bg_calc_paper_pane_g2

0xc5ad,	// (0x0003f9fb) bg_calc_paper_pane_g3

0xc5b9,	// (0x0003fa07) bg_calc_paper_pane_g4

0xc5c5,	// (0x0003fa13) bg_calc_paper_pane_g5

0x4d71,	// (0x000381bf) bg_calc_paper_pane_g6

0x4d82,	// (0x000381d0) bg_calc_paper_pane_g7

0x4d93,	// (0x000381e1) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x000425c3) bg_calc_paper_pane_g

0x4da6,	// (0x000381f4) calc_bg_paper_pane_g9

0x4db9,	// (0x00038207) list_calc_item_pane_ParamLimits

0x4db9,	// (0x00038207) list_calc_item_pane

0xc5d1,	// (0x0003fa1f) list_calc_item_pane_g1

0x4dda,	// (0x00038228) list_calc_item_pane_t1_ParamLimits

0x4dda,	// (0x00038228) list_calc_item_pane_t1

0x4dec,	// (0x0003823a) list_calc_item_pane_t2_ParamLimits

0x4dec,	// (0x0003823a) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x000425d4) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x000425d4) list_calc_item_pane_t

0xc5de,	// (0x0003fa2c) cell_calc_pane_g1

0xc5e8,	// (0x0003fa36) grid_highlight_pane_cp02

0xc60a,	// (0x0003fa58) bg_calc_display_pane_g1

0x4e1c,	// (0x0003826a) bg_calc_display_pane_g2

0xc613,	// (0x0003fa61) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x000425de) bg_calc_display_pane_g

0x4e26,	// (0x00038274) cell_qdial_pane_ParamLimits

0x4e26,	// (0x00038274) cell_qdial_pane

0x4e3c,	// (0x0003828a) cell_qdial_pane_g1_ParamLimits

0x4e3c,	// (0x0003828a) cell_qdial_pane_g1

0x4e49,	// (0x00038297) cell_qdial_pane_g2_ParamLimits

0x4e49,	// (0x00038297) cell_qdial_pane_g2

0xc61c,	// (0x0003fa6a) cell_qdial_pane_g3_ParamLimits

0xc61c,	// (0x0003fa6a) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x000425e5) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x000425e5) cell_qdial_pane_g

0x4e67,	// (0x000382b5) cell_qdial_pane_t1_ParamLimits

0x4e67,	// (0x000382b5) cell_qdial_pane_t1

0x4e7f,	// (0x000382cd) cell_qdial_pane_t2_ParamLimits

0x4e7f,	// (0x000382cd) cell_qdial_pane_t2

0x4e92,	// (0x000382e0) cell_qdial_pane_t3_ParamLimits

0x4e92,	// (0x000382e0) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x000425ee) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x000425ee) cell_qdial_pane_t

0xc25b,	// (0x0003f6a9) grid_highlight_pane_cp04

0xc628,	// (0x0003fa76) thumbnail_qdial_pane_ParamLimits

0xc628,	// (0x0003fa76) thumbnail_qdial_pane

0xc684,	// (0x0003fad2) list_help_pane

0xc68d,	// (0x0003fadb) scroll_pane_cp02

0x4ea5,	// (0x000382f3) help_list_pane_t1_ParamLimits

0x4ea5,	// (0x000382f3) help_list_pane_t1

0x4ecc,	// (0x0003831a) bg_notes_pane_g2

0x4ed4,	// (0x00038322) bg_notes_pane_g3

0x4edc,	// (0x0003832a) notes_bg_pane_g1

0x4ee4,	// (0x00038332) notes_bg_pane_g4

0x4eec,	// (0x0003833a) notes_bg_pane_g5

0x4ef4,	// (0x00038342) notes_bg_pane_g6

0x4efc,	// (0x0003834a) notes_bg_pane_g7

0x4f04,	// (0x00038352) notes_bg_pane_g8

0x4f0c,	// (0x0003835a) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0004260c) notes_bg_pane_g

0x4f14,	// (0x00038362) list_notes_text_pane_ParamLimits

0x4f14,	// (0x00038362) list_notes_text_pane

0xc696,	// (0x0003fae4) list_notes_text_pane_g1

0x3350,	// (0x0003679e) list_notes_text_pane_t1

0xc589,	// (0x0003f9d7) listscroll_cale_week_pane

0x4f53,	// (0x000383a1) bg_cale_heading_pane

0xc6b0,	// (0x0003fafe) bg_cale_pane_cp01

0x4f6f,	// (0x000383bd) cale_week_corner_pane

0x4f85,	// (0x000383d3) cale_week_day_heading_pane

0x4fa1,	// (0x000383ef) cale_week_scroll_pane_g1

0x4fba,	// (0x00038408) cale_week_scroll_pane_g2

0x4fcb,	// (0x00038419) cale_week_scroll_pane_g3

0x4fdc,	// (0x0003842a) cale_week_scroll_pane_g4

0x4fed,	// (0x0003843b) cale_week_scroll_pane_g5

0x4ffe,	// (0x0003844c) cale_week_scroll_pane_g6

0x5011,	// (0x0003845f) cale_week_scroll_pane_g7

0x5024,	// (0x00038472) cale_week_scroll_pane_g8

0x5037,	// (0x00038485) cale_week_scroll_pane_g9

0x5048,	// (0x00038496) cale_week_scroll_pane_g10

0x5059,	// (0x000384a7) cale_week_scroll_pane_g11

0x506a,	// (0x000384b8) cale_week_scroll_pane_g12

0x507b,	// (0x000384c9) cale_week_scroll_pane_g13

0x508c,	// (0x000384da) cale_week_scroll_pane_g14

0x50a5,	// (0x000384f3) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0004261b) cale_week_scroll_pane_g

0x50be,	// (0x0003850c) cale_week_time_pane

0x50d1,	// (0x0003851f) grid_cale_week_pane

0x50ee,	// (0x0003853c) scroll_pane_cp08

0x5108,	// (0x00038556) cell_cale_week_pane_ParamLimits

0x5108,	// (0x00038556) cell_cale_week_pane

0x514a,	// (0x00038598) cale_week_day_heading_pane_t1

0x5177,	// (0x000385c5) cale_week_day_heading_pane_t2

0x51a4,	// (0x000385f2) cale_week_day_heading_pane_t3

0x51d1,	// (0x0003861f) cale_week_day_heading_pane_t4

0x51fe,	// (0x0003864c) cale_week_day_heading_pane_t5

0x522b,	// (0x00038679) cale_week_day_heading_pane_t6

0x5258,	// (0x000386a6) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0004263a) cale_week_day_heading_pane_t

0xc6db,	// (0x0003fb29) bg_cale_side_pane

0x5285,	// (0x000386d3) cale_week_time_pane_t1

0x529d,	// (0x000386eb) cale_week_time_pane_t2

0x52b5,	// (0x00038703) cale_week_time_pane_t3

0x52cd,	// (0x0003871b) cale_week_time_pane_t4

0x52e5,	// (0x00038733) cale_week_time_pane_t5

0x52fd,	// (0x0003874b) cale_week_time_pane_t6

0x5315,	// (0x00038763) cale_week_time_pane_t7

0x532d,	// (0x0003877b) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x00042649) cale_week_time_pane_t

0x5349,	// (0x00038797) cell_cale_week_pane_g2

0x5362,	// (0x000387b0) cell_cale_week_pane_g3_ParamLimits

0x5362,	// (0x000387b0) cell_cale_week_pane_g3

0xc6e9,	// (0x0003fb37) grid_highlight_pane_cp07

0xc6f1,	// (0x0003fb3f) listscroll_gms_pane

0xc6fb,	// (0x0003fb49) grid_gms_pane

0xc704,	// (0x0003fb52) listscroll_gms_pane_g1

0xc70c,	// (0x0003fb5a) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0004265a) listscroll_gms_pane_g

0x537a,	// (0x000387c8) scroll_pane_cp010

0x5385,	// (0x000387d3) cell_gms_pane_ParamLimits

0x5385,	// (0x000387d3) cell_gms_pane

0x5398,	// (0x000387e6) cell_gms_pane_g1

0xc714,	// (0x0003fb62) cell_gms_pane_g2

0xc71c,	// (0x0003fb6a) cell_gms_pane_g3

0xc725,	// (0x0003fb73) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0004265f) cell_gms_pane_g

0xc72e,	// (0x0003fb7c) grid_highlight_pane_cp09

0x75de,	// (0x0003aa2c) phob_pre_status_pane_g1

0x75e6,	// (0x0003aa34) phob_pre_status_pane_g2

0x75ee,	// (0x0003aa3c) phob_pre_status_pane_g3

0x75f6,	// (0x0003aa44) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x00042a4e) phob_pre_status_pane_g

0x7606,	// (0x0003aa54) phob_pre_status_pane_t1

0x7616,	// (0x0003aa64) phob_pre_status_pane_t2

0x7626,	// (0x0003aa74) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x00042a59) phob_pre_status_pane_t

0xc25b,	// (0x0003f6a9) bg_list_pane_cp05

0x53a8,	// (0x000387f6) grid_vorec_pane

0x53b2,	// (0x00038800) vorec_t1

0x53c0,	// (0x0003880e) vorec_t2

0x53ce,	// (0x0003881c) vorec_t3

0x53dc,	// (0x0003882a) vorec_t4

0x53ea,	// (0x00038838) vorec_t5

0x53f8,	// (0x00038846) vorec_t6

0x0006,

0xf21a,	// (0x00042668) vorec_t

0x5414,	// (0x00038862) wait_bar_pane_cp01

0x541c,	// (0x0003886a) cell_vorec_pane_ParamLimits

0x541c,	// (0x0003886a) cell_vorec_pane

0xc736,	// (0x0003fb84) cell_vorec_pane_g1

0xc25b,	// (0x0003f6a9) grid_highlight_pane_cp05

0x543f,	// (0x0003888d) cams_zoom_pane

0x544b,	// (0x00038899) image_vga_pane

0x545a,	// (0x000388a8) main_camera_pane_g1

0x5468,	// (0x000388b6) main_camera_pane_g2

0x5474,	// (0x000388c2) main_camera_pane_g3

0x5482,	// (0x000388d0) main_camera_pane_g4

0x5490,	// (0x000388de) main_camera_pane_g5

0x549e,	// (0x000388ec) main_camera_pane_g6

0x54ac,	// (0x000388fa) main_camera_pane_g7

0x0007,

0xf229,	// (0x00042677) main_camera_pane_g

0x54ba,	// (0x00038908) main_camera_pane_t1

0x54cc,	// (0x0003891a) main_camera_pane_t2

0x0001,

0xf23a,	// (0x00042688) main_camera_pane_t

0x54ef,	// (0x0003893d) cams_zoom_pane_cp_ParamLimits

0x54ef,	// (0x0003893d) cams_zoom_pane_cp

0x5513,	// (0x00038961) image_cif_pane_ParamLimits

0x5513,	// (0x00038961) image_cif_pane

0x5531,	// (0x0003897f) image_subqcif_pane

0x553b,	// (0x00038989) main_video_pane_g1_ParamLimits

0x553b,	// (0x00038989) main_video_pane_g1

0x555b,	// (0x000389a9) main_video_pane_g2_ParamLimits

0x555b,	// (0x000389a9) main_video_pane_g2

0x558b,	// (0x000389d9) main_video_pane_g3_ParamLimits

0x558b,	// (0x000389d9) main_video_pane_g3

0x55b4,	// (0x00038a02) main_video_pane_g4_ParamLimits

0x55b4,	// (0x00038a02) main_video_pane_g4

0x55dd,	// (0x00038a2b) main_video_pane_g5_ParamLimits

0x55dd,	// (0x00038a2b) main_video_pane_g5

0xc74c,	// (0x0003fb9a) main_video_pane_g6_ParamLimits

0xc74c,	// (0x0003fb9a) main_video_pane_g6

0x0006,

0xf23f,	// (0x0004268d) main_video_pane_g_ParamLimits

0xf23f,	// (0x0004268d) main_video_pane_g

0x55ff,	// (0x00038a4d) main_video_pane_t1_ParamLimits

0x55ff,	// (0x00038a4d) main_video_pane_t1

0xc766,	// (0x0003fbb4) cams_zoom_pane_g1

0xc76f,	// (0x0003fbbd) cams_zoom_pane_g2

0xc778,	// (0x0003fbc6) cams_zoom_pane_g3

0xc781,	// (0x0003fbcf) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0004269c) cams_zoom_pane_g

0x5649,	// (0x00038a97) grid_cams_pane

0x5657,	// (0x00038aa5) linegrid_cams_pane

0x5663,	// (0x00038ab1) cell_cams_pane_ParamLimits

0x5663,	// (0x00038ab1) cell_cams_pane

0xc78a,	// (0x0003fbd8) cams_burst_image_pane

0xc792,	// (0x0003fbe0) cell_cams_pane_g1

0xc25b,	// (0x0003f6a9) grid_highlight_pane_cp03

0xc5de,	// (0x0003fa2c) mp_bg_pane_g1

0xc25b,	// (0x0003f6a9) bg_list_pane_cp03

0xe331,	// (0x0004177f) bg_mp_pane

0xe339,	// (0x00041787) grid_mp_pane

0xe341,	// (0x0004178f) media_player_g1

0xe34b,	// (0x00041799) media_player_t1

0xe359,	// (0x000417a7) media_player_t2

0xe367,	// (0x000417b5) media_player_t3

0xe375,	// (0x000417c3) media_player_t4

0xe383,	// (0x000417d1) media_player_t5

0xe391,	// (0x000417df) media_player_t6

0xe39f,	// (0x000417ed) media_player_t7

0x0006,

0xf5ea,	// (0x00042a38) media_player_t

0xe3ad,	// (0x000417fb) wait_bar_pane_cp02

0xf5cf,	// (0x00042a1d) main_usb_pane_t

0x75d5,	// (0x0003aa23) cell_mp_pane

0xc5de,	// (0x0003fa2c) cell_mp_pane_g1

0xc25b,	// (0x0003f6a9) grid_highlight_pane_cp06

0xc79a,	// (0x0003fbe8) grid_skin_colour_pane

0xc7a2,	// (0x0003fbf0) list_highlight_pane_cp03

0x5678,	// (0x00038ac6) skin_g1

0xc7aa,	// (0x0003fbf8) skin_t1

0xc7b9,	// (0x0003fc07) skin_t2

0x0001,

0xf283,	// (0x000426d1) skin_t

0x5682,	// (0x00038ad0) cell_skin_colour_pane_ParamLimits

0x5682,	// (0x00038ad0) cell_skin_colour_pane

0xc7c7,	// (0x0003fc15) cell_skin_colour_pane_g1

0x5702,	// (0x00038b50) call_video_g1_ParamLimits

0x5702,	// (0x00038b50) call_video_g1

0x5712,	// (0x00038b60) call_video_g2_ParamLimits

0x5712,	// (0x00038b60) call_video_g2

0x0001,

0xf288,	// (0x000426d6) call_video_g_ParamLimits

0xf288,	// (0x000426d6) call_video_g

0x5762,	// (0x00038bb0) call_video_uplink_pane_cp1_ParamLimits

0x5762,	// (0x00038bb0) call_video_uplink_pane_cp1

0xc7d9,	// (0x0003fc27) call_video_uplink_pane_cp2

0x5830,	// (0x00038c7e) video_down_crop_pane_ParamLimits

0x5830,	// (0x00038c7e) video_down_crop_pane

0x5922,	// (0x00038d70) video_down_pane_ParamLimits

0x5922,	// (0x00038d70) video_down_pane

0xc7e1,	// (0x0003fc2f) video_down_subqcif_pane_ParamLimits

0xc7e1,	// (0x0003fc2f) video_down_subqcif_pane

0xc7fb,	// (0x0003fc49) video_down_subqcif_pane_cp_ParamLimits

0xc7fb,	// (0x0003fc49) video_down_subqcif_pane_cp

0xc823,	// (0x0003fc71) im_reading_pane_ParamLimits

0xc823,	// (0x0003fc71) im_reading_pane

0x5a3f,	// (0x00038e8d) im_writing_pane_ParamLimits

0x5a3f,	// (0x00038e8d) im_writing_pane

0x5a5d,	// (0x00038eab) im_reading_pane_t1

0xc83d,	// (0x0003fc8b) list_im_pane

0xc84e,	// (0x0003fc9c) scroll_pane_cp07

0x5a9f,	// (0x00038eed) im_writing_pane_t1_ParamLimits

0x5a9f,	// (0x00038eed) im_writing_pane_t1

0xc867,	// (0x0003fcb5) im_writing_pane_t2_ParamLimits

0xc867,	// (0x0003fcb5) im_writing_pane_t2

0x0001,

0xf292,	// (0x000426e0) im_writing_pane_t_ParamLimits

0xf292,	// (0x000426e0) im_writing_pane_t

0xc25b,	// (0x0003f6a9) input_focus_pane_cp04

0xc25b,	// (0x0003f6a9) input_focus_pane_cp05

0x5ab1,	// (0x00038eff) list_im_single_pane_ParamLimits

0x5ab1,	// (0x00038eff) list_im_single_pane

0x5aca,	// (0x00038f18) list_single_im_pane_t1

0x7599,	// (0x0003a9e7) blid_accuracy_pane

0x75a1,	// (0x0003a9ef) blid_compass_pane

0x75ab,	// (0x0003a9f9) main_location_t1

0x75b9,	// (0x0003aa07) main_location_t2

0x75c7,	// (0x0003aa15) main_location_t3

0x0002,

0xf5f9,	// (0x00042a47) main_location_t

0xc25b,	// (0x0003f6a9) aid_levels_location

0xc5de,	// (0x0003fa2c) blid_accuracy_pane_g1

0xc5de,	// (0x0003fa2c) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00042742) blid_accuracy_pane_g

0xc8af,	// (0x0003fcfd) wml_content_pane

0xc8ed,	// (0x0003fd3b) wml_button_pane_ParamLimits

0xc8ed,	// (0x0003fd3b) wml_button_pane

0x5ad9,	// (0x00038f27) wml_list_single_large_pane_ParamLimits

0x5ad9,	// (0x00038f27) wml_list_single_large_pane

0x5afb,	// (0x00038f49) wml_list_single_medium_pane_ParamLimits

0x5afb,	// (0x00038f49) wml_list_single_medium_pane

0x5b1e,	// (0x00038f6c) wml_list_single_small_pane_ParamLimits

0x5b1e,	// (0x00038f6c) wml_list_single_small_pane

0xc901,	// (0x0003fd4f) wml_selection_box_pane_ParamLimits

0xc901,	// (0x0003fd4f) wml_selection_box_pane

0xc914,	// (0x0003fd62) wml_list_single_pane_t1

0xc923,	// (0x0003fd71) wml_list_single_medium_pane_t1

0xc932,	// (0x0003fd80) wml_list_single_large_pane_t1

0xc941,	// (0x0003fd8f) input_focus_pane_cp02_ParamLimits

0xc941,	// (0x0003fd8f) input_focus_pane_cp02

0xc954,	// (0x0003fda2) wml_selection_box_pane_g1

0xc95d,	// (0x0003fdab) wml_selection_box_pane_t1_ParamLimits

0xc95d,	// (0x0003fdab) wml_selection_box_pane_t1

0xc4b6,	// (0x0003f904) bg_wml_button_pane_ParamLimits

0xc4b6,	// (0x0003f904) bg_wml_button_pane

0xc975,	// (0x0003fdc3) wml_button_pane_g1

0xc97d,	// (0x0003fdcb) wml_button_pane_t1

0xc975,	// (0x0003fdc3) wml_button_bg_pane_g1

0xc98d,	// (0x0003fddb) wml_button_bg_pane_g2

0xc995,	// (0x0003fde3) wml_button_bg_pane_g3

0xc99d,	// (0x0003fdeb) wml_button_bg_pane_g4

0xc9a5,	// (0x0003fdf3) wml_button_bg_pane_g5

0xc9ad,	// (0x0003fdfb) wml_button_bg_pane_g6

0xc9b5,	// (0x0003fe03) wml_button_bg_pane_g7

0xc9bd,	// (0x0003fe0b) wml_button_bg_pane_g8

0xc9c5,	// (0x0003fe13) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x000426e5) wml_button_bg_pane_g

0x5b46,	// (0x00038f94) bg_list_pane_cp02

0xc9cd,	// (0x0003fe1b) mce_header_pane_ParamLimits

0xc9cd,	// (0x0003fe1b) mce_header_pane

0xc9e3,	// (0x0003fe31) mce_icon_pane

0xc9e3,	// (0x0003fe31) mce_image_pane

0xc9ec,	// (0x0003fe3a) mce_text_pane_ParamLimits

0xc9ec,	// (0x0003fe3a) mce_text_pane

0x5b50,	// (0x00038f9e) scroll_pane_cp03

0xc8e5,	// (0x0003fd33) scroll_pane_cp04

0xc9ff,	// (0x0003fe4d) scroll_pane_cp05_ParamLimits

0xc9ff,	// (0x0003fe4d) scroll_pane_cp05

0x5b5a,	// (0x00038fa8) mce_header_field_pane_ParamLimits

0x5b5a,	// (0x00038fa8) mce_header_field_pane

0x5b7c,	// (0x00038fca) mce_header_field_pane_2_ParamLimits

0x5b7c,	// (0x00038fca) mce_header_field_pane_2

0x5b92,	// (0x00038fe0) mce_header_field_pane_3

0x5b9a,	// (0x00038fe8) list_single_mce_message_pane_ParamLimits

0x5b9a,	// (0x00038fe8) list_single_mce_message_pane

0x5bb3,	// (0x00039001) list_single_mce_smart_pane_ParamLimits

0x5bb3,	// (0x00039001) list_single_mce_smart_pane

0xca0b,	// (0x0003fe59) input_focus_pane_cp03

0xca14,	// (0x0003fe62) list_header_data_pane

0x5bd7,	// (0x00039025) mce_header_field_pane_t1

0x5be7,	// (0x00039035) list_single_mce_header_pane_ParamLimits

0x5be7,	// (0x00039035) list_single_mce_header_pane

0xca1c,	// (0x0003fe6a) list_single_mce_header_pane_t1

0xca2b,	// (0x0003fe79) list_single_mce_message_pane_g1

0xca33,	// (0x0003fe81) list_single_mce_message_pane_t1

0x5c1d,	// (0x0003906b) bg_cale_heading_pane_cp01_ParamLimits

0x5c1d,	// (0x0003906b) bg_cale_heading_pane_cp01

0xca41,	// (0x0003fe8f) bg_cale_pane_cp02_ParamLimits

0xca41,	// (0x0003fe8f) bg_cale_pane_cp02

0x5c50,	// (0x0003909e) cale_month_corner_pane

0x5c66,	// (0x000390b4) cale_month_day_heading_pane_ParamLimits

0x5c66,	// (0x000390b4) cale_month_day_heading_pane

0x5ca9,	// (0x000390f7) cale_month_pane_g1_ParamLimits

0x5ca9,	// (0x000390f7) cale_month_pane_g1

0x5cd5,	// (0x00039123) cale_month_pane_g2_ParamLimits

0x5cd5,	// (0x00039123) cale_month_pane_g2

0x5cf8,	// (0x00039146) cale_month_pane_g3_ParamLimits

0x5cf8,	// (0x00039146) cale_month_pane_g3

0x5d34,	// (0x00039182) cale_month_pane_g4_ParamLimits

0x5d34,	// (0x00039182) cale_month_pane_g4

0x5d70,	// (0x000391be) cale_month_pane_g5_ParamLimits

0x5d70,	// (0x000391be) cale_month_pane_g5

0x5dac,	// (0x000391fa) cale_month_pane_g6_ParamLimits

0x5dac,	// (0x000391fa) cale_month_pane_g6

0x5df8,	// (0x00039246) cale_month_pane_g7_ParamLimits

0x5df8,	// (0x00039246) cale_month_pane_g7

0x5e44,	// (0x00039292) cale_month_pane_g8_ParamLimits

0x5e44,	// (0x00039292) cale_month_pane_g8

0x5e90,	// (0x000392de) cale_month_pane_g9_ParamLimits

0x5e90,	// (0x000392de) cale_month_pane_g9

0x5eca,	// (0x00039318) cale_month_pane_g10_ParamLimits

0x5eca,	// (0x00039318) cale_month_pane_g10

0x5f04,	// (0x00039352) cale_month_pane_g11_ParamLimits

0x5f04,	// (0x00039352) cale_month_pane_g11

0x5f3e,	// (0x0003938c) cale_month_pane_g12_ParamLimits

0x5f3e,	// (0x0003938c) cale_month_pane_g12

0x5f7c,	// (0x000393ca) cale_month_pane_g13_ParamLimits

0x5f7c,	// (0x000393ca) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x000426f8) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x000426f8) cale_month_pane_g

0x5fba,	// (0x00039408) cale_month_week_pane

0x5fcd,	// (0x0003941b) grid_cale_month_pane_ParamLimits

0x5fcd,	// (0x0003941b) grid_cale_month_pane

0x600b,	// (0x00039459) cale_month_day_heading_pane_t1

0x6069,	// (0x000394b7) cale_month_day_heading_pane_t2

0x60ce,	// (0x0003951c) cale_month_day_heading_pane_t3

0x6133,	// (0x00039581) cale_month_day_heading_pane_t4

0x6198,	// (0x000395e6) cale_month_day_heading_pane_t5

0x6205,	// (0x00039653) cale_month_day_heading_pane_t6

0x627a,	// (0x000396c8) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x00042713) cale_month_day_heading_pane_t

0xc6db,	// (0x0003fb29) bg_cale_side_pane_cp01

0x62ef,	// (0x0003973d) cale_month_week_pane_t1

0x6306,	// (0x00039754) cale_month_week_pane_t2

0x631d,	// (0x0003976b) cale_month_week_pane_t3

0x6334,	// (0x00039782) cale_month_week_pane_t4

0x634b,	// (0x00039799) cale_month_week_pane_t5

0x6362,	// (0x000397b0) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x00042722) cale_month_week_pane_t

0x6379,	// (0x000397c7) cell_cale_month_pane_ParamLimits

0x6379,	// (0x000397c7) cell_cale_month_pane

0x6447,	// (0x00039895) cell_cale_month_pane_g1

0x6453,	// (0x000398a1) cell_cale_month_pane_t1_ParamLimits

0x6453,	// (0x000398a1) cell_cale_month_pane_t1

0xc6e9,	// (0x0003fb37) grid_highlight_pane_cp08

0xc5de,	// (0x0003fa2c) main_smil_g1

0x646f,	// (0x000398bd) smil_status_pane

0xca76,	// (0x0003fec4) smil_text_pane

0xe24f,	// (0x0004169d) bg_popup_call3_rect_pane_g8

0xe257,	// (0x000416a5) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x000429db) bg_popup_call3_rect_pane_g

0xe4ec,	// (0x0004193a) smil_status_volume_pane_g1

0xca80,	// (0x0003fece) smil_status_pane_t1

0x7988,	// (0x0003add6) volume_smil_pane

0xca97,	// (0x0003fee5) list_smil_text_pane

0x6482,	// (0x000398d0) scroll_pane_cp011

0x648d,	// (0x000398db) smil_text_list_pane_t1_ParamLimits

0x648d,	// (0x000398db) smil_text_list_pane_t1

0x64e1,	// (0x0003992f) aid_volume_smil_ParamLimits

0x64e1,	// (0x0003992f) aid_volume_smil

0xc5de,	// (0x0003fa2c) smil_volume_pane_g1

0xc5de,	// (0x0003fa2c) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00042742) smil_volume_pane_g

0xc589,	// (0x0003f9d7) listscroll_cale_day_pane

0xcaa1,	// (0x0003feef) bg_cale_pane

0xcab9,	// (0x0003ff07) list_cale_pane

0xcaca,	// (0x0003ff18) scroll_pane_cp09

0xcadb,	// (0x0003ff29) cale_bg_pane_g1

0xcae3,	// (0x0003ff31) cale_bg_pane_g2

0xcaeb,	// (0x0003ff39) cale_bg_pane_g3

0xcaf3,	// (0x0003ff41) cale_bg_pane_g4

0xcafb,	// (0x0003ff49) cale_bg_pane_g5

0xcb03,	// (0x0003ff51) cale_bg_pane_g6

0xcb0b,	// (0x0003ff59) cale_bg_pane_g7

0xcb13,	// (0x0003ff61) cale_bg_pane_g8

0xcb1b,	// (0x0003ff69) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x00042747) cale_bg_pane_g

0x6503,	// (0x00039951) list_cale_time_pane_ParamLimits

0x6503,	// (0x00039951) list_cale_time_pane

0x6518,	// (0x00039966) list_cale_time_pane_g1_ParamLimits

0x6518,	// (0x00039966) list_cale_time_pane_g1

0xcb23,	// (0x0003ff71) list_cale_time_pane_g2_ParamLimits

0xcb23,	// (0x0003ff71) list_cale_time_pane_g2

0x6524,	// (0x00039972) list_cale_time_pane_g3_ParamLimits

0x6524,	// (0x00039972) list_cale_time_pane_g3

0x6532,	// (0x00039980) list_cale_time_pane_g4_ParamLimits

0x6532,	// (0x00039980) list_cale_time_pane_g4

0x6540,	// (0x0003998e) list_cale_time_pane_g5_ParamLimits

0x6540,	// (0x0003998e) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0004275a) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0004275a) list_cale_time_pane_g

0x654e,	// (0x0003999c) list_cale_time_pane_t1_ParamLimits

0x654e,	// (0x0003999c) list_cale_time_pane_t1

0x6576,	// (0x000399c4) list_cale_time_pane_t2_ParamLimits

0x6576,	// (0x000399c4) list_cale_time_pane_t2

0x68b0,	// (0x00039cfe) aid_blid_cardinal_pane

0x68f2,	// (0x00039d40) compass_pane_t4

0x659e,	// (0x000399ec) list_cale_time_pane_t4_ParamLimits

0x659e,	// (0x000399ec) list_cale_time_pane_t4

0x6900,	// (0x00039d4e) compass_pane_t5

0x6910,	// (0x00039d5e) compass_pane_t6

0x691e,	// (0x00039d6c) compass_pane_t7

0xcf31,	// (0x0004037f) navi_pane_cc_t1

0xd086,	// (0x000404d4) aid_phob_thumbnail_center_pane

0x7095,	// (0x0003a4e3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x00042767) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x00042767) list_cale_time_pane_t

0x48c2,	// (0x00037d10) bg_popup_window_pane_cp02_ParamLimits

0x48c2,	// (0x00037d10) bg_popup_window_pane_cp02

0xcb3d,	// (0x0003ff8b) heading_pane_cp01_ParamLimits

0xcb3d,	// (0x0003ff8b) heading_pane_cp01

0xcb49,	// (0x0003ff97) loc_req_pane_ParamLimits

0xcb49,	// (0x0003ff97) loc_req_pane

0xcb59,	// (0x0003ffa7) loc_type_pane_ParamLimits

0xcb59,	// (0x0003ffa7) loc_type_pane

0xcb6b,	// (0x0003ffb9) loc_type_pane_t1_ParamLimits

0xcb6b,	// (0x0003ffb9) loc_type_pane_t1

0xcb7d,	// (0x0003ffcb) loc_type_pane_t2_ParamLimits

0xcb7d,	// (0x0003ffcb) loc_type_pane_t2

0xcb8f,	// (0x0003ffdd) loc_type_pane_t3_ParamLimits

0xcb8f,	// (0x0003ffdd) loc_type_pane_t3

0x0002,

0xf320,	// (0x0004276e) loc_type_pane_t_ParamLimits

0xf320,	// (0x0004276e) loc_type_pane_t

0xcba1,	// (0x0003ffef) list_loc_req_pane

0xcbab,	// (0x0003fff9) scroll_pane_cp012

0x65c6,	// (0x00039a14) list_single_loc_request_popup_menu_pane_ParamLimits

0x65c6,	// (0x00039a14) list_single_loc_request_popup_menu_pane

0xcbb6,	// (0x00040004) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcbb6,	// (0x00040004) list_single_loc_request_popup_menu_pane_g1

0xcbc2,	// (0x00040010) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcbc2,	// (0x00040010) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x00042775) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x00042775) list_single_loc_request_popup_menu_pane_g

0xcbce,	// (0x0004001c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcbce,	// (0x0004001c) list_single_loc_request_popup_menu_pane_t1

0x65d8,	// (0x00039a26) bg_popup_window_pane_cp03_ParamLimits

0x65d8,	// (0x00039a26) bg_popup_window_pane_cp03

0x65e6,	// (0x00039a34) heading_loc_req_pane_ParamLimits

0x65e6,	// (0x00039a34) heading_loc_req_pane

0x65f2,	// (0x00039a40) popup_dyc_status_message_window_g1_ParamLimits

0x65f2,	// (0x00039a40) popup_dyc_status_message_window_g1

0x65fe,	// (0x00039a4c) popup_dyc_status_message_window_t1_ParamLimits

0x65fe,	// (0x00039a4c) popup_dyc_status_message_window_t1

0x6610,	// (0x00039a5e) popup_dyc_status_message_window_t2_ParamLimits

0x6610,	// (0x00039a5e) popup_dyc_status_message_window_t2

0x6622,	// (0x00039a70) popup_dyc_status_message_window_t3_ParamLimits

0x6622,	// (0x00039a70) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0004277a) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0004277a) popup_dyc_status_message_window_t

0xc25b,	// (0x0003f6a9) bg_heading_pane_cp01

0xcbe4,	// (0x00040032) heading_loc_req_pane_g1

0xcbec,	// (0x0004003a) heading_loc_req_pane_g2

0xcbf4,	// (0x00040042) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00042781) heading_loc_req_pane_g

0xcbfc,	// (0x0004004a) heading_loc_req_pane_t1

0xcc0c,	// (0x0004005a) bg_popup_sub_pane_cp01_ParamLimits

0xcc0c,	// (0x0004005a) bg_popup_sub_pane_cp01

0xcc1a,	// (0x00040068) popup_cale_events_window_g1_ParamLimits

0xcc1a,	// (0x00040068) popup_cale_events_window_g1

0xcc3a,	// (0x00040088) popup_cale_events_window_g2_ParamLimits

0xcc3a,	// (0x00040088) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x000427b5) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x000427b5) popup_cale_events_window_g

0xcc5a,	// (0x000400a8) popup_cale_events_window_t1_ParamLimits

0xcc5a,	// (0x000400a8) popup_cale_events_window_t1

0xcc6c,	// (0x000400ba) popup_cale_events_window_t2_ParamLimits

0xcc6c,	// (0x000400ba) popup_cale_events_window_t2

0xccaa,	// (0x000400f8) popup_cale_events_window_t3_ParamLimits

0xccaa,	// (0x000400f8) popup_cale_events_window_t3

0xcce4,	// (0x00040132) popup_cale_events_window_t4_ParamLimits

0xcce4,	// (0x00040132) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x000427ba) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x000427ba) popup_cale_events_window_t

0x664c,	// (0x00039a9a) call_type_pane

0xcd1a,	// (0x00040168) popup_call_status_window_g1

0x6658,	// (0x00039aa6) popup_call_status_window_g2

0x6664,	// (0x00039ab2) popup_call_status_window_g3

0x0002,

0xf375,	// (0x000427c3) popup_call_status_window_g

0xcd28,	// (0x00040176) call_type_pane_g1

0xcd31,	// (0x0004017f) call_type_pane_g2

0x0001,

0xf37c,	// (0x000427ca) call_type_pane_g

0xc25b,	// (0x0003f6a9) bg_popup_sub_pane_cp02

0xcd3a,	// (0x00040188) listscroll_popup_wml_pane

0xcd42,	// (0x00040190) list_wml_pane

0xcd4c,	// (0x0004019a) scroll_pane_cp013

0xcd57,	// (0x000401a5) list_single_graphic_popup_wml_pane_ParamLimits

0xcd57,	// (0x000401a5) list_single_graphic_popup_wml_pane

0xc5de,	// (0x0003fa2c) list_single_graphic_popup_wml_pane_g1

0xcd6b,	// (0x000401b9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x000427cf) list_single_graphic_popup_wml_pane_g

0xcd73,	// (0x000401c1) list_single_graphic_popup_wml_pane_t1

0xcd89,	// (0x000401d7) aid_call_pane

0xc4ae,	// (0x0003f8fc) popup_clock_analogue_window_g1

0xc4ae,	// (0x0003f8fc) popup_clock_analogue_window_g2

0x6670,	// (0x00039abe) popup_clock_analogue_window_g3

0x6670,	// (0x00039abe) popup_clock_analogue_window_g4

0xc5de,	// (0x0003fa2c) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x000427d4) popup_clock_analogue_window_g

0x6678,	// (0x00039ac6) popup_clock_analogue_window_t1

0x6686,	// (0x00039ad4) clock_digital_number_pane_ParamLimits

0x6686,	// (0x00039ad4) clock_digital_number_pane

0x6692,	// (0x00039ae0) clock_digital_number_pane_cp02_ParamLimits

0x6692,	// (0x00039ae0) clock_digital_number_pane_cp02

0x669e,	// (0x00039aec) clock_digital_number_pane_cp03_ParamLimits

0x669e,	// (0x00039aec) clock_digital_number_pane_cp03

0x66aa,	// (0x00039af8) clock_digital_number_pane_cp04_ParamLimits

0x66aa,	// (0x00039af8) clock_digital_number_pane_cp04

0x66b6,	// (0x00039b04) clock_digital_separator_pane_ParamLimits

0x66b6,	// (0x00039b04) clock_digital_separator_pane

0x66c2,	// (0x00039b10) popup_clock_digital_window_t1

0xc5de,	// (0x0003fa2c) clock_digital_number_pane_g1

0xc5de,	// (0x0003fa2c) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00042742) clock_digital_number_pane_g

0xc5de,	// (0x0003fa2c) clock_digital_separator_pane_g1

0xc5de,	// (0x0003fa2c) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00042742) clock_digital_separator_pane_g

0xc25b,	// (0x0003f6a9) bg_popup_window_pane_cp04

0xcd91,	// (0x000401df) heading_pane_cp03

0xcd99,	// (0x000401e7) listscroll_popup_gms_pane

0xcda1,	// (0x000401ef) grid_large_graphic_popup_pane

0xcdab,	// (0x000401f9) listscroll_popup_gms_pane_g1

0xcdb3,	// (0x00040201) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x000427df) listscroll_popup_gms_pane_g

0xc8e5,	// (0x0003fd33) scroll_pane_cp014

0x66df,	// (0x00039b2d) cell_large_graphic_popup_pane_ParamLimits

0x66df,	// (0x00039b2d) cell_large_graphic_popup_pane

0x66f9,	// (0x00039b47) cell_large_graphic_popup_pane_g1_ParamLimits

0x66f9,	// (0x00039b47) cell_large_graphic_popup_pane_g1

0xcdbb,	// (0x00040209) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdbb,	// (0x00040209) cell_large_graphic_popup_pane_g2

0xcdc7,	// (0x00040215) cell_large_graphic_popup_pane_g3_ParamLimits

0xcdc7,	// (0x00040215) cell_large_graphic_popup_pane_g3

0xcdd4,	// (0x00040222) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdd4,	// (0x00040222) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x000427e4) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x000427e4) cell_large_graphic_popup_pane_g

0xcde4,	// (0x00040232) grid_highlight_pane_cp010

0xc5de,	// (0x0003fa2c) bg_popup_call_pane_g1

0xcdee,	// (0x0004023c) list_single_graphic_popup_conf_pane_ParamLimits

0xcdee,	// (0x0004023c) list_single_graphic_popup_conf_pane

0xce00,	// (0x0004024e) list_highlight_pane_cp01

0xce09,	// (0x00040257) list_single_graphic_popup_conf_pane_g1

0xce11,	// (0x0004025f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x000427ed) list_single_graphic_popup_conf_pane_g

0xce19,	// (0x00040267) list_single_graphic_popup_conf_pane_t1

0xce27,	// (0x00040275) linegrid_cams_pane_g1

0x6705,	// (0x00039b53) linegrid_cams_pane_g2

0xc71c,	// (0x0003fb6a) linegrid_cams_pane_g3

0xce30,	// (0x0004027e) linegrid_cams_pane_g4

0x670e,	// (0x00039b5c) linegrid_cams_pane_g5

0x6717,	// (0x00039b65) linegrid_cams_pane_g6

0xc725,	// (0x0003fb73) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x000427f2) linegrid_cams_pane_g

0xce39,	// (0x00040287) popup_clock_analogue_window

0xce39,	// (0x00040287) popup_clock_digital_window

0xc25b,	// (0x0003f6a9) popup_phob_thumbnail_window

0xc5de,	// (0x0003fa2c) call_video_uplink_pane_g1

0xce42,	// (0x00040290) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x00042801) call_video_uplink_pane_g

0xce4a,	// (0x00040298) video_uplink_pane

0xce52,	// (0x000402a0) mce_image_pane_g1

0x6722,	// (0x00039b70) mce_image_pane_g2

0x672c,	// (0x00039b7a) mce_image_pane_g3

0x6736,	// (0x00039b84) mce_image_pane_g4

0x673e,	// (0x00039b8c) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x00042806) mce_image_pane_g

0xce5c,	// (0x000402aa) control_top_pane_stacon_cp01_ParamLimits

0xce5c,	// (0x000402aa) control_top_pane_stacon_cp01

0xce70,	// (0x000402be) uni_indicator_pane_stacon_cp01_ParamLimits

0xce70,	// (0x000402be) uni_indicator_pane_stacon_cp01

0xce81,	// (0x000402cf) bg_popup_sub_pane_cp03

0x6746,	// (0x00039b94) chi_dic_find_pane

0x674e,	// (0x00039b9c) listscroll_chi_dic_pane

0x6757,	// (0x00039ba5) main_pane_chidic_g1

0x676a,	// (0x00039bb8) chi_dic_find_pane_t1

0xce8b,	// (0x000402d9) find_chidic_pane

0xce94,	// (0x000402e2) chi_dic_list_pane_ParamLimits

0xce94,	// (0x000402e2) chi_dic_list_pane

0xcea5,	// (0x000402f3) scroll_pane_cp020

0x6778,	// (0x00039bc6) find_chidic_pane_t1

0xc25b,	// (0x0003f6a9) input_focus_pane_cp06

0x6787,	// (0x00039bd5) list_chi_dic_pane_ParamLimits

0x6787,	// (0x00039bd5) list_chi_dic_pane

0x679c,	// (0x00039bea) list_chi_dic_pane_t1_ParamLimits

0x679c,	// (0x00039bea) list_chi_dic_pane_t1

0xc25b,	// (0x0003f6a9) list_highlight_pane_cp020

0xcead,	// (0x000402fb) bg_cale_heading_pane_g1

0x67af,	// (0x00039bfd) bg_cale_heading_pane_g2

0x67b7,	// (0x00039c05) bg_cale_heading_pane_g3

0x67bf,	// (0x00039c0d) bg_cale_heading_pane_g4

0x67c9,	// (0x00039c17) bg_cale_heading_pane_g5

0x67d3,	// (0x00039c21) bg_cale_heading_pane_g6

0x67db,	// (0x00039c29) bg_cale_heading_pane_g7

0x67e3,	// (0x00039c31) bg_cale_heading_pane_g8

0x67ed,	// (0x00039c3b) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x00042811) bg_cale_heading_pane_g

0xcead,	// (0x000402fb) bg_cale_side_pane_g1

0x67f7,	// (0x00039c45) bg_cale_side_pane_g2

0x6801,	// (0x00039c4f) bg_cale_side_pane_g3

0x680b,	// (0x00039c59) bg_cale_side_pane_g4

0x6815,	// (0x00039c63) bg_cale_side_pane_g5

0x681f,	// (0x00039c6d) bg_cale_side_pane_g6

0x6829,	// (0x00039c77) bg_cale_side_pane_g7

0x6833,	// (0x00039c81) bg_cale_side_pane_g8

0x683b,	// (0x00039c89) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x00042824) bg_cale_side_pane_g

0x6843,	// (0x00039c91) popup_call_status_window_ParamLimits

0x6843,	// (0x00039c91) popup_call_status_window

0xceb5,	// (0x00040303) stacon_top_pane

0xcebd,	// (0x0004030b) status_pane_ParamLimits

0xcebd,	// (0x0004030b) status_pane

0xced2,	// (0x00040320) status_small_pane

0xceda,	// (0x00040328) control_pane

0xc25b,	// (0x0003f6a9) stacon_bottom_pane

0xcee2,	// (0x00040330) list_single_mce_smart_pane_t1_ParamLimits

0xcee2,	// (0x00040330) list_single_mce_smart_pane_t1

0xcef5,	// (0x00040343) list_single_mce_smart_pane_t2_ParamLimits

0xcef5,	// (0x00040343) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x00042837) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x00042837) list_single_mce_smart_pane_t

0x684f,	// (0x00039c9d) compass_pane

0x685a,	// (0x00039ca8) main_location2_pane_t1

0x6870,	// (0x00039cbe) main_location2_pane_t2

0x6886,	// (0x00039cd4) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0004283c) main_location2_pane_t

0xcf14,	// (0x00040362) compass_pane_g1_ParamLimits

0xcf14,	// (0x00040362) compass_pane_g1

0x68d4,	// (0x00039d22) compass_pane_t1

0x68e3,	// (0x00039d31) compass_pane_t2

0x0005,

0xf3f7,	// (0x00042845) compass_pane_t

0x692e,	// (0x00039d7c) text_secondary_cp61

0xcf28,	// (0x00040376) navi_pane_cams_g5

0xcf4b,	// (0x00040399) navi_pane_im_t1

0xcf59,	// (0x000403a7) navi_pane_mp_g1_ParamLimits

0xcf59,	// (0x000403a7) navi_pane_mp_g1

0xcf6d,	// (0x000403bb) navi_pane_mp_g2_ParamLimits

0xcf6d,	// (0x000403bb) navi_pane_mp_g2

0xcf79,	// (0x000403c7) navi_pane_mp_g3_ParamLimits

0xcf79,	// (0x000403c7) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x00042859) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x00042859) navi_pane_mp_g

0xcf85,	// (0x000403d3) navi_pane_mp_t1

0xcf93,	// (0x000403e1) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00042860) navi_pane_mp_t

0xcfcf,	// (0x0004041d) navi_pane_vt_g1

0xcf85,	// (0x000403d3) navi_pane_vt_t1

0xcfd7,	// (0x00040425) navi_slider_pane

0xcfdf,	// (0x0004042d) zooming_pane

0xcfe7,	// (0x00040435) navi_slider_pane_g1

0x6a5b,	// (0x00039ea9) navi_slider_pane_g2

0x0006,

0xf419,	// (0x00042867) navi_slider_pane_g

0xd00b,	// (0x00040459) aid_levels_zoom

0xd013,	// (0x00040461) zooming_pane_g1

0xd01b,	// (0x00040469) zooming_pane_g2

0xd01b,	// (0x00040469) zooming_pane_g3

0x0002,

0xf428,	// (0x00042876) zooming_pane_g

0xd023,	// (0x00040471) level_10_zoom

0xd02c,	// (0x0004047a) level_11_zoom

0xd035,	// (0x00040483) level_1_zoom

0xd03e,	// (0x0004048c) level_2_zoom

0xd047,	// (0x00040495) level_3_zoom

0xd050,	// (0x0004049e) level_4_zoom

0xd059,	// (0x000404a7) level_5_zoom

0xd062,	// (0x000404b0) level_6_zoom

0xd06b,	// (0x000404b9) level_7_zoom

0xd074,	// (0x000404c2) level_8_zoom

0xd07d,	// (0x000404cb) level_9_zoom

0xd08e,	// (0x000404dc) popup_phob_thumbnail_window_g1

0xd096,	// (0x000404e4) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0004287d) popup_phob_thumbnail_window_g

0xe3b5,	// (0x00041803) level_1_location

0xe3bd,	// (0x0004180b) level_2_location

0xe3c5,	// (0x00041813) level_3_location

0xe3cd,	// (0x0004181b) level_4_location

0xcfdf,	// (0x0004042d) level_5_location

0x6a6d,	// (0x00039ebb) mce_icon_pane_g1

0x6a75,	// (0x00039ec3) mce_icon_pane_g2

0x0001,

0xf434,	// (0x00042882) mce_icon_pane_g

0x6a7d,	// (0x00039ecb) main_mup_pane_g1_ParamLimits

0x6a7d,	// (0x00039ecb) main_mup_pane_g1

0x6a95,	// (0x00039ee3) main_mup_pane_g2_ParamLimits

0x6a95,	// (0x00039ee3) main_mup_pane_g2

0x6ab1,	// (0x00039eff) main_mup_pane_g3_ParamLimits

0x6ab1,	// (0x00039eff) main_mup_pane_g3

0x6acd,	// (0x00039f1b) main_mup_pane_g4_ParamLimits

0x6acd,	// (0x00039f1b) main_mup_pane_g4

0x6ae1,	// (0x00039f2f) main_mup_pane_g5_ParamLimits

0x6ae1,	// (0x00039f2f) main_mup_pane_g5

0x6b02,	// (0x00039f50) main_mup_pane_g6_ParamLimits

0x6b02,	// (0x00039f50) main_mup_pane_g6

0x6b22,	// (0x00039f70) main_mup_pane_g7_ParamLimits

0x6b22,	// (0x00039f70) main_mup_pane_g7

0x6b46,	// (0x00039f94) main_mup_pane_g8_ParamLimits

0x6b46,	// (0x00039f94) main_mup_pane_g8

0x6b6a,	// (0x00039fb8) main_mup_pane_g9_ParamLimits

0x6b6a,	// (0x00039fb8) main_mup_pane_g9

0x6b8d,	// (0x00039fdb) main_mup_pane_g10_ParamLimits

0x6b8d,	// (0x00039fdb) main_mup_pane_g10

0x6bb0,	// (0x00039ffe) main_mup_pane_g11_ParamLimits

0x6bb0,	// (0x00039ffe) main_mup_pane_g11

0x6bd0,	// (0x0003a01e) main_mup_pane_g12_ParamLimits

0x6bd0,	// (0x0003a01e) main_mup_pane_g12

0x6bde,	// (0x0003a02c) main_mup_pane_g13_ParamLimits

0x6bde,	// (0x0003a02c) main_mup_pane_g13

0x000c,

0xf439,	// (0x00042887) main_mup_pane_g_ParamLimits

0xf439,	// (0x00042887) main_mup_pane_g

0x6bf4,	// (0x0003a042) main_mup_pane_t1_ParamLimits

0x6bf4,	// (0x0003a042) main_mup_pane_t1

0x6c13,	// (0x0003a061) main_mup_pane_t2_ParamLimits

0x6c13,	// (0x0003a061) main_mup_pane_t2

0x6c2d,	// (0x0003a07b) main_mup_pane_t3_ParamLimits

0x6c2d,	// (0x0003a07b) main_mup_pane_t3

0x6c47,	// (0x0003a095) main_mup_pane_t4_ParamLimits

0x6c47,	// (0x0003a095) main_mup_pane_t4

0x6c59,	// (0x0003a0a7) main_mup_pane_t5_ParamLimits

0x6c59,	// (0x0003a0a7) main_mup_pane_t5

0x6c6b,	// (0x0003a0b9) main_mup_pane_t6_ParamLimits

0x6c6b,	// (0x0003a0b9) main_mup_pane_t6

0x0005,

0xf454,	// (0x000428a2) main_mup_pane_t_ParamLimits

0xf454,	// (0x000428a2) main_mup_pane_t

0x6c81,	// (0x0003a0cf) mup_progress_pane_ParamLimits

0x6c81,	// (0x0003a0cf) mup_progress_pane

0x6c8d,	// (0x0003a0db) mup_visualizer_pane_ParamLimits

0x6c8d,	// (0x0003a0db) mup_visualizer_pane

0x6cc7,	// (0x0003a115) mup_volume_pane_ParamLimits

0x6cc7,	// (0x0003a115) mup_volume_pane

0xcd1a,	// (0x00040168) mup_visualizer_pane_g1_ParamLimits

0xcd1a,	// (0x00040168) mup_visualizer_pane_g1

0xcd1a,	// (0x00040168) mup_visualizer_pane_g2_ParamLimits

0xcd1a,	// (0x00040168) mup_visualizer_pane_g2

0xcf14,	// (0x00040362) mup_visualizer_pane_g3_ParamLimits

0xcf14,	// (0x00040362) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x000428af) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x000428af) mup_visualizer_pane_g

0xc5de,	// (0x0003fa2c) mup_volume_pane_g1

0xd0a6,	// (0x000404f4) mup_volume_pane_g2

0x0001,

0xf468,	// (0x000428b6) mup_volume_pane_g

0xc5de,	// (0x0003fa2c) mup_progress_pane_g1

0xd0af,	// (0x000404fd) mup_progress_pane_g2

0xd0b8,	// (0x00040506) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x000428bb) mup_progress_pane_g

0xc25b,	// (0x0003f6a9) bg_popup_window_pane_cp05

0xd0c1,	// (0x0004050f) heading_pane_cp02_ParamLimits

0xd0c1,	// (0x0004050f) heading_pane_cp02

0xd0dd,	// (0x0004052b) list_popup_blid_pane

0xd0e5,	// (0x00040533) list_blid_sat_info_pane_ParamLimits

0xd0e5,	// (0x00040533) list_blid_sat_info_pane

0xd0f8,	// (0x00040546) list_blid_sat_info_pane_g1

0xd100,	// (0x0004054e) list_blid_sat_info_pane_t1

0x6de6,	// (0x0003a234) mup_equalizer_pane_ParamLimits

0x6de6,	// (0x0003a234) mup_equalizer_pane

0x6e07,	// (0x0003a255) mup_equalizer_pane_cp1_ParamLimits

0x6e07,	// (0x0003a255) mup_equalizer_pane_cp1

0x6e28,	// (0x0003a276) mup_equalizer_pane_cp2_ParamLimits

0x6e28,	// (0x0003a276) mup_equalizer_pane_cp2

0x6e49,	// (0x0003a297) mup_equalizer_pane_cp3_ParamLimits

0x6e49,	// (0x0003a297) mup_equalizer_pane_cp3

0x6e6e,	// (0x0003a2bc) mup_equalizer_pane_cp4_ParamLimits

0x6e6e,	// (0x0003a2bc) mup_equalizer_pane_cp4

0x6e93,	// (0x0003a2e1) mup_equalizer_pane_cp5

0x6eab,	// (0x0003a2f9) mup_equalizer_pane_cp6

0x6ec3,	// (0x0003a311) mup_equalizer_pane_cp7

0xe2cf,	// (0x0004171d) bg_popup_call_poc_act_pane_g9

0xe2d7,	// (0x00041725) bg_popup_call_poc_act_pane_g10

0xe2df,	// (0x0004172d) bg_popup_call_poc_act_pane_g11

0x000a,

0xc4b6,	// (0x0003f904) mup_scale_pane

0xc5de,	// (0x0003fa2c) mup_scale_pane_g1

0xd10e,	// (0x0004055c) mup_scale_pane_g2

0x0006,

0xf489,	// (0x000428d7) mup_scale_pane_g

0xd132,	// (0x00040580) msg_data_pane

0xd13a,	// (0x00040588) scroll_pane_cp017

0x6eed,	// (0x0003a33b) bg_list_pane_cp04_ParamLimits

0x6eed,	// (0x0003a33b) bg_list_pane_cp04

0xd142,	// (0x00040590) msg_data_pane_g1

0x6f0d,	// (0x0003a35b) msg_data_pane_g2

0x6f17,	// (0x0003a365) msg_data_pane_g3

0x6f21,	// (0x0003a36f) msg_data_pane_g4

0x6f29,	// (0x0003a377) msg_data_pane_g5

0x6f31,	// (0x0003a37f) msg_data_pane_g6

0x6f39,	// (0x0003a387) msg_data_pane_g7

0x0006,

0xf498,	// (0x000428e6) msg_data_pane_g

0x6f41,	// (0x0003a38f) msg_text_pane_ParamLimits

0x6f41,	// (0x0003a38f) msg_text_pane

0x6f69,	// (0x0003a3b7) qrid_highlight_pane_cp011_ParamLimits

0x6f69,	// (0x0003a3b7) qrid_highlight_pane_cp011

0xc25b,	// (0x0003f6a9) msg_body_pane

0xc25b,	// (0x0003f6a9) msg_header_pane

0xd153,	// (0x000405a1) input_focus_pane_cp07

0x6f7f,	// (0x0003a3cd) msg_header_pane_t1_ParamLimits

0x6f7f,	// (0x0003a3cd) msg_header_pane_t1

0x3586,	// (0x000369d4) msg_header_pane_t2_ParamLimits

0x3586,	// (0x000369d4) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x000428fa) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x000428fa) msg_header_pane_t

0xd168,	// (0x000405b6) msg_body_pane_g1

0x3598,	// (0x000369e6) msg_body_pane_t1_ParamLimits

0x3598,	// (0x000369e6) msg_body_pane_t1

0x35c9,	// (0x00036a17) msg_body_pane_t2_ParamLimits

0x35c9,	// (0x00036a17) msg_body_pane_t2

0x35db,	// (0x00036a29) msg_body_pane_t3_ParamLimits

0x35db,	// (0x00036a29) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x000428ff) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x000428ff) msg_body_pane_t

0x6fe5,	// (0x0003a433) main_viewer_pane_g1_ParamLimits

0x6fe5,	// (0x0003a433) main_viewer_pane_g1

0x6ff1,	// (0x0003a43f) main_viewer_pane_g2_ParamLimits

0x6ff1,	// (0x0003a43f) main_viewer_pane_g2

0x6ffd,	// (0x0003a44b) main_viewer_pane_g3_ParamLimits

0x6ffd,	// (0x0003a44b) main_viewer_pane_g3

0x700e,	// (0x0003a45c) main_viewer_pane_g4_ParamLimits

0x700e,	// (0x0003a45c) main_viewer_pane_g4

0x701f,	// (0x0003a46d) main_viewer_pane_g5_ParamLimits

0x701f,	// (0x0003a46d) main_viewer_pane_g5

0x701f,	// (0x0003a46d) main_viewer_pane_g7_ParamLimits

0x701f,	// (0x0003a46d) main_viewer_pane_g7

0x7031,	// (0x0003a47f) main_viewer_pane_g8_ParamLimits

0x7031,	// (0x0003a47f) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0004290f) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0004290f) main_viewer_pane_g

0xd170,	// (0x000405be) viewer_content_pane_ParamLimits

0xd170,	// (0x000405be) viewer_content_pane

0x7069,	// (0x0003a4b7) main_postcard_pane_g1_ParamLimits

0x7069,	// (0x0003a4b7) main_postcard_pane_g1

0x7077,	// (0x0003a4c5) main_postcard_pane_g2_ParamLimits

0x7077,	// (0x0003a4c5) main_postcard_pane_g2

0x7085,	// (0x0003a4d3) main_postcard_pane_g3_ParamLimits

0x7085,	// (0x0003a4d3) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x00042920) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x00042920) main_postcard_pane_g

0x7095,	// (0x0003a4e3) main_postcard_pane_g4

0xe4ff,	// (0x0004194d) smil_status_volume_pane_g2

0x70c1,	// (0x0003a50f) postcard_pane_ParamLimits

0x70c1,	// (0x0003a50f) postcard_pane

0xcd1a,	// (0x00040168) postcard_pane_g1_ParamLimits

0xcd1a,	// (0x00040168) postcard_pane_g1

0x70fb,	// (0x0003a549) postcard_pane_g2_ParamLimits

0x70fb,	// (0x0003a549) postcard_pane_g2

0x7107,	// (0x0003a555) postcard_pane_g3_ParamLimits

0x7107,	// (0x0003a555) postcard_pane_g3

0xd17e,	// (0x000405cc) postcard_pane_g4_ParamLimits

0xd17e,	// (0x000405cc) postcard_pane_g4

0x7113,	// (0x0003a561) postcard_pane_g5_ParamLimits

0x7113,	// (0x0003a561) postcard_pane_g5

0x711f,	// (0x0003a56d) postcard_pane_g6_ParamLimits

0x711f,	// (0x0003a56d) postcard_pane_g6

0xd18c,	// (0x000405da) postcard_pane_g7_ParamLimits

0xd18c,	// (0x000405da) postcard_pane_g7

0x0006,

0xf4df,	// (0x0004292d) postcard_pane_g_ParamLimits

0xf4df,	// (0x0004292d) postcard_pane_g

0x712d,	// (0x0003a57b) main_mp2_pane_g1_ParamLimits

0x712d,	// (0x0003a57b) main_mp2_pane_g1

0x713b,	// (0x0003a589) main_mp2_pane_g2_ParamLimits

0x713b,	// (0x0003a589) main_mp2_pane_g2

0x7147,	// (0x0003a595) main_mp2_pane_g3_ParamLimits

0x7147,	// (0x0003a595) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0004293c) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0004293c) main_mp2_pane_g

0x7153,	// (0x0003a5a1) main_mp2_pane_t1_ParamLimits

0x7153,	// (0x0003a5a1) main_mp2_pane_t1

0x716a,	// (0x0003a5b8) main_mp2_pane_t2_ParamLimits

0x716a,	// (0x0003a5b8) main_mp2_pane_t2

0x717e,	// (0x0003a5cc) main_mp2_pane_t3_ParamLimits

0x717e,	// (0x0003a5cc) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x00042943) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x00042943) main_mp2_pane_t

0xd19a,	// (0x000405e8) pec_content_pane_ParamLimits

0xd19a,	// (0x000405e8) pec_content_pane

0xc8e5,	// (0x0003fd33) scroll_pane_cp015

0xd1ac,	// (0x000405fa) pec_attribute_pane_ParamLimits

0xd1ac,	// (0x000405fa) pec_attribute_pane

0x7190,	// (0x0003a5de) pec_content_pane_g1_ParamLimits

0x7190,	// (0x0003a5de) pec_content_pane_g1

0xd1bc,	// (0x0004060a) pec_content_pane_t1_ParamLimits

0xd1bc,	// (0x0004060a) pec_content_pane_t1

0xd1ce,	// (0x0004061c) pec_content_pane_t2_ParamLimits

0xd1ce,	// (0x0004061c) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0004294a) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0004294a) pec_content_pane_t

0x719c,	// (0x0003a5ea) list_single_graphic_pane_cp01_ParamLimits

0x719c,	// (0x0003a5ea) list_single_graphic_pane_cp01

0xc4b6,	// (0x0003f904) bg_popup_sub_pane_cp04

0xd1e0,	// (0x0004062e) popup_mup_playback_window_g1

0xd1ec,	// (0x0004063a) popup_mup_playback_window_t1

0xd201,	// (0x0004064f) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0004294f) popup_mup_playback_window_t

0xd238,	// (0x00040686) main_image_pane_g1_ParamLimits

0xd238,	// (0x00040686) main_image_pane_g1

0xd27b,	// (0x000406c9) scroll_pane_cp018_ParamLimits

0xd27b,	// (0x000406c9) scroll_pane_cp018

0xd293,	// (0x000406e1) scroll_pane_cp016_ParamLimits

0xd293,	// (0x000406e1) scroll_pane_cp016

0x722a,	// (0x0003a678) smil2_image_pane_ParamLimits

0x722a,	// (0x0003a678) smil2_image_pane

0x7260,	// (0x0003a6ae) smil2_root_pane_ParamLimits

0x7260,	// (0x0003a6ae) smil2_root_pane

0x728c,	// (0x0003a6da) smil2_text_pane_ParamLimits

0x728c,	// (0x0003a6da) smil2_text_pane

0xc25b,	// (0x0003f6a9) bg_list_pane_cp06

0xd2cf,	// (0x0004071d) grid_radio_pane

0xc25b,	// (0x0003f6a9) bg_popup_window_pane_cp06

0xd2d9,	// (0x00040727) main_fmradio_pane_t1

0xcd91,	// (0x000401df) heading_pane_cp04

0xd2e7,	// (0x00040735) main_fmradio_pane_t2

0xe2e7,	// (0x00041735) popup_cale_lunar_info_window_g1

0xd2f5,	// (0x00040743) main_fmradio_pane_t3

0xe2ef,	// (0x0004173d) popup_cale_lunar_info_window_g2

0xd305,	// (0x00040753) main_fmradio_pane_t4

0x0001,

0xd313,	// (0x00040761) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x00042a2a) popup_cale_lunar_info_window_g

0xf516,	// (0x00042964) main_fmradio_pane_t

0xd321,	// (0x0004076f) wait_bar_pane_cp03

0xd329,	// (0x00040777) cell_fmradio_pane_ParamLimits

0xd329,	// (0x00040777) cell_fmradio_pane

0xd18c,	// (0x000405da) cell_fmradio_pane_g1_ParamLimits

0xd18c,	// (0x000405da) cell_fmradio_pane_g1

0xc25b,	// (0x0003f6a9) grid_highlight_pane_cp011

0xd33e,	// (0x0004078c) poc_content_pane_ParamLimits

0xd33e,	// (0x0004078c) poc_content_pane

0xd350,	// (0x0004079e) scroll_pane_cp019

0x72cc,	// (0x0003a71a) popup_call_poc_act_window_ParamLimits

0x72cc,	// (0x0003a71a) popup_call_poc_act_window

0x72d9,	// (0x0003a727) popup_call_poc_inact_window_ParamLimits

0x72d9,	// (0x0003a727) popup_call_poc_inact_window

0xf5b3,	// (0x00042a01) bg_popup_call_poc_act_pane_g

0xe25f,	// (0x000416ad) bg_popup_call_poc_inact_pane_g1

0xe267,	// (0x000416b5) bg_popup_call_poc_inact_pane_g2

0xd358,	// (0x000407a6) popup_call_poc_act_window_g2

0xe26f,	// (0x000416bd) bg_popup_call_poc_inact_pane_g3

0xe277,	// (0x000416c5) bg_popup_call_poc_inact_pane_g4

0xe27f,	// (0x000416cd) bg_popup_call_poc_inact_pane_g5

0xd360,	// (0x000407ae) popup_call_poc_act_window_t1_ParamLimits

0xd360,	// (0x000407ae) popup_call_poc_act_window_t1

0xd388,	// (0x000407d6) popup_call_poc_act_window_t2_ParamLimits

0xd388,	// (0x000407d6) popup_call_poc_act_window_t2

0xd3b0,	// (0x000407fe) popup_call_poc_act_window_t3_ParamLimits

0xd3b0,	// (0x000407fe) popup_call_poc_act_window_t3

0xd3d8,	// (0x00040826) popup_call_poc_act_window_t4_ParamLimits

0xd3d8,	// (0x00040826) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0004296f) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0004296f) popup_call_poc_act_window_t

0xe287,	// (0x000416d5) bg_popup_call_poc_inact_pane_g6

0xe28f,	// (0x000416dd) bg_popup_call_poc_inact_pane_g7

0xe297,	// (0x000416e5) bg_popup_call_poc_inact_pane_g8

0xd3ea,	// (0x00040838) popup_call_poc_inact_window_g2

0xe29f,	// (0x000416ed) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x000429ee) bg_popup_call_poc_inact_pane_g

0xd3f2,	// (0x00040840) popup_call_poc_inact_window_t1_ParamLimits

0xd3f2,	// (0x00040840) popup_call_poc_inact_window_t1

0xd407,	// (0x00040855) popup_call_poc_inact_window_t2_ParamLimits

0xd407,	// (0x00040855) popup_call_poc_inact_window_t2

0xd41c,	// (0x0004086a) popup_call_poc_inact_window_t3_ParamLimits

0xd41c,	// (0x0004086a) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x00042978) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x00042978) popup_call_poc_inact_window_t

0xe45f,	// (0x000418ad) context_pane_ParamLimits

0x78f6,	// (0x0003ad44) signal_pane_ParamLimits

0xcfdf,	// (0x0004042d) main_call2_pane

0xe44d,	// (0x0004189b) popup_phob_thumbnail2_window_ParamLimits

0xe44d,	// (0x0004189b) popup_phob_thumbnail2_window

0x6f93,	// (0x0003a3e1) aid_hotspot_pointer_arrow_pane

0x6f9b,	// (0x0003a3e9) aid_hotspot_pointer_hand_pane

0x75fe,	// (0x0003aa4c) phob_pre_status_pane_g5

0x543f,	// (0x0003888d) cams_zoom_pane_ParamLimits

0x544b,	// (0x00038899) image_vga_pane_ParamLimits

0x545a,	// (0x000388a8) main_camera_pane_g1_ParamLimits

0x5468,	// (0x000388b6) main_camera_pane_g2_ParamLimits

0x5474,	// (0x000388c2) main_camera_pane_g3_ParamLimits

0x5482,	// (0x000388d0) main_camera_pane_g4_ParamLimits

0x5490,	// (0x000388de) main_camera_pane_g5_ParamLimits

0x549e,	// (0x000388ec) main_camera_pane_g6_ParamLimits

0x54ac,	// (0x000388fa) main_camera_pane_g7_ParamLimits

0xf229,	// (0x00042677) main_camera_pane_g_ParamLimits

0x54ba,	// (0x00038908) main_camera_pane_t1_ParamLimits

0x54cc,	// (0x0003891a) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x00042688) main_camera_pane_t_ParamLimits

0xc4b6,	// (0x0003f904) bg_popup_preview_window_pane_cp01_ParamLimits

0xc4b6,	// (0x0003f904) bg_popup_preview_window_pane_cp01

0xd431,	// (0x0004087f) popup_phob_thumbnail2_window_g1_ParamLimits

0xd431,	// (0x0004087f) popup_phob_thumbnail2_window_g1

0xc25b,	// (0x0003f6a9) call2_cli_visual_pane

0x72f5,	// (0x0003a743) popup_call2_audio_conf_window_ParamLimits

0x72f5,	// (0x0003a743) popup_call2_audio_conf_window

0x730e,	// (0x0003a75c) popup_call2_audio_first_window_ParamLimits

0x730e,	// (0x0003a75c) popup_call2_audio_first_window

0x73ac,	// (0x0003a7fa) popup_call2_audio_in_window_ParamLimits

0x73ac,	// (0x0003a7fa) popup_call2_audio_in_window

0x73f0,	// (0x0003a83e) popup_call2_audio_out_window_ParamLimits

0x73f0,	// (0x0003a83e) popup_call2_audio_out_window

0x745a,	// (0x0003a8a8) popup_call2_audio_second_window_ParamLimits

0x745a,	// (0x0003a8a8) popup_call2_audio_second_window

0x74b8,	// (0x0003a906) popup_call2_audio_wait_window_ParamLimits

0x74b8,	// (0x0003a906) popup_call2_audio_wait_window

0xc25b,	// (0x0003f6a9) bg_popup_call2_act_pane_cp03

0xc498,	// (0x0003f8e6) list_conf_pane_cp

0xd43d,	// (0x0004088b) popup_call2_audio_conf_window_t1

0xd44b,	// (0x00040899) list_single_graphic_popup_conf2_pane_ParamLimits

0xd44b,	// (0x00040899) list_single_graphic_popup_conf2_pane

0xce00,	// (0x0004024e) list_highlight_pane_cp04

0xd45e,	// (0x000408ac) list_single_graphic_popup_conf2_pane_g1

0xce11,	// (0x0004025f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0004297f) list_single_graphic_popup_conf2_pane_g

0xd468,	// (0x000408b6) list_single_graphic_popup_conf2_pane_t1

0xd476,	// (0x000408c4) bg_popup_call2_act_pane_cp01_ParamLimits

0xd476,	// (0x000408c4) bg_popup_call2_act_pane_cp01

0xd500,	// (0x0004094e) call_type_pane_cp05_ParamLimits

0xd500,	// (0x0004094e) call_type_pane_cp05

0xd554,	// (0x000409a2) popup_call2_audio_second_window_g1_ParamLimits

0xd554,	// (0x000409a2) popup_call2_audio_second_window_g1

0xd5a8,	// (0x000409f6) popup_call2_audio_second_window_g2_ParamLimits

0xd5a8,	// (0x000409f6) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x00042984) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x00042984) popup_call2_audio_second_window_g

0xd60d,	// (0x00040a5b) popup_call2_audio_second_window_t1_ParamLimits

0xd60d,	// (0x00040a5b) popup_call2_audio_second_window_t1

0xd6c8,	// (0x00040b16) popup_call2_audio_second_window_t2_ParamLimits

0xd6c8,	// (0x00040b16) popup_call2_audio_second_window_t2

0xd71b,	// (0x00040b69) popup_call2_audio_second_window_t3_ParamLimits

0xd71b,	// (0x00040b69) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0004298b) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0004298b) popup_call2_audio_second_window_t

0xc25b,	// (0x0003f6a9) bg_popup_call2_in_pane_cp02

0xc265,	// (0x0003f6b3) call_type_pane_cp04

0xc26d,	// (0x0003f6bb) popup_call2_audio_wait_window_g1

0xc275,	// (0x0003f6c3) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x00042564) popup_call2_audio_wait_window_g

0xc27d,	// (0x0003f6cb) popup_call2_audio_wait_window_t3

0xd80e,	// (0x00040c5c) bg_popup_call2_act_pane_ParamLimits

0xd80e,	// (0x00040c5c) bg_popup_call2_act_pane

0xd8ce,	// (0x00040d1c) call_type_pane_cp03_ParamLimits

0xd8ce,	// (0x00040d1c) call_type_pane_cp03

0xd932,	// (0x00040d80) popup_call2_audio_first_window_g1_ParamLimits

0xd932,	// (0x00040d80) popup_call2_audio_first_window_g1

0xd9c6,	// (0x00040e14) popup_call2_audio_first_window_g2_ParamLimits

0xd9c6,	// (0x00040e14) popup_call2_audio_first_window_g2

0xcd1a,	// (0x00040168) popup_call2_audio_first_window_g3_ParamLimits

0xcd1a,	// (0x00040168) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x00042994) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x00042994) popup_call2_audio_first_window_g

0xdaa4,	// (0x00040ef2) popup_call2_audio_first_window_t1_ParamLimits

0xdaa4,	// (0x00040ef2) popup_call2_audio_first_window_t1

0xdba7,	// (0x00040ff5) popup_call2_audio_first_window_t4_ParamLimits

0xdba7,	// (0x00040ff5) popup_call2_audio_first_window_t4

0xdc8a,	// (0x000410d8) popup_call2_audio_first_window_t5_ParamLimits

0xdc8a,	// (0x000410d8) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0004299f) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0004299f) popup_call2_audio_first_window_t

0xc4ae,	// (0x0003f8fc) bg_popup_call2_act_pane_g1

0xe2f9,	// (0x00041747) popup_cale_lunar_info_window_t1

0xe307,	// (0x00041755) popup_cale_lunar_info_window_t2

0xe315,	// (0x00041763) popup_cale_lunar_info_window_t3

0xc25b,	// (0x0003f6a9) bg_popup_call2_bubble_pane

0xdd8b,	// (0x000411d9) bg_popup_call2_in_pane_cp01_ParamLimits

0xdd8b,	// (0x000411d9) bg_popup_call2_in_pane_cp01

0x4947,	// (0x00037d95) call_type_pane_cp02

0xddd3,	// (0x00041221) popup_call2_audio_out_window_g1_ParamLimits

0xddd3,	// (0x00041221) popup_call2_audio_out_window_g1

0xddff,	// (0x0004124d) popup_call2_audio_out_window_g2_ParamLimits

0xddff,	// (0x0004124d) popup_call2_audio_out_window_g2

0xde27,	// (0x00041275) popup_call2_audio_out_window_g3_ParamLimits

0xde27,	// (0x00041275) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x000429a8) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x000429a8) popup_call2_audio_out_window_g

0xde62,	// (0x000412b0) popup_call2_audio_out_window_t1_ParamLimits

0xde62,	// (0x000412b0) popup_call2_audio_out_window_t1

0xdec1,	// (0x0004130f) popup_call2_audio_out_window_t2_ParamLimits

0xdec1,	// (0x0004130f) popup_call2_audio_out_window_t2

0xdf15,	// (0x00041363) popup_call2_audio_out_window_t3_ParamLimits

0xdf15,	// (0x00041363) popup_call2_audio_out_window_t3

0xdf2b,	// (0x00041379) popup_call2_audio_out_window_t4_ParamLimits

0xdf2b,	// (0x00041379) popup_call2_audio_out_window_t4

0xdf41,	// (0x0004138f) popup_call2_audio_out_window_t5_ParamLimits

0xdf41,	// (0x0004138f) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x000429b1) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x000429b1) popup_call2_audio_out_window_t

0xdfa5,	// (0x000413f3) bg_popup_call2_in_pane_ParamLimits

0xdfa5,	// (0x000413f3) bg_popup_call2_in_pane

0xe001,	// (0x0004144f) popup_call2_audio_in_window_g1_ParamLimits

0xe001,	// (0x0004144f) popup_call2_audio_in_window_g1

0xe039,	// (0x00041487) popup_call2_audio_in_window_g2_ParamLimits

0xe039,	// (0x00041487) popup_call2_audio_in_window_g2

0xe071,	// (0x000414bf) popup_call2_audio_in_window_g3_ParamLimits

0xe071,	// (0x000414bf) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x000429be) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x000429be) popup_call2_audio_in_window_g

0xe0c9,	// (0x00041517) popup_call2_audio_in_window_t1_ParamLimits

0xe0c9,	// (0x00041517) popup_call2_audio_in_window_t1

0xe149,	// (0x00041597) popup_call2_audio_in_window_t2_ParamLimits

0xe149,	// (0x00041597) popup_call2_audio_in_window_t2

0xe1c9,	// (0x00041617) popup_call2_audio_in_window_t3_ParamLimits

0xe1c9,	// (0x00041617) popup_call2_audio_in_window_t3

0xe1e3,	// (0x00041631) popup_call2_audio_in_window_t4_ParamLimits

0xe1e3,	// (0x00041631) popup_call2_audio_in_window_t4

0xe1f5,	// (0x00041643) popup_call2_audio_in_window_t5_ParamLimits

0xe1f5,	// (0x00041643) popup_call2_audio_in_window_t5

0xe20a,	// (0x00041658) popup_call2_audio_in_window_t6_ParamLimits

0xe20a,	// (0x00041658) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x000429c7) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x000429c7) popup_call2_audio_in_window_t

0xc4ae,	// (0x0003f8fc) bg_popup_call2_in_pane_g1

0xe323,	// (0x00041771) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x00042a2f) popup_cale_lunar_info_window_t

0xc4b6,	// (0x0003f904) bg_popup_call2_rect_pane_ParamLimits

0xc4b6,	// (0x0003f904) bg_popup_call2_rect_pane

0xc25b,	// (0x0003f6a9) call2_cli_visual_graphic_pane

0xc25b,	// (0x0003f6a9) call2_cli_visual_text_pane

0x797b,	// (0x0003adc9) smil_status_volume_pane_g3

0x0002,

0xc5de,	// (0x0003fa2c) call2_cli_visual_graphic_pane_g1

0xc5de,	// (0x0003fa2c) call2_cli_visual_graphic_pane_g2

0xc5de,	// (0x0003fa2c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x000429d4) call2_cli_visual_graphic_pane_g

0xe21f,	// (0x0004166d) bg_popup_call2_rect_pane_g1

0xc67c,	// (0x0003faca) bg_popup_call2_rect_pane_g2

0xe227,	// (0x00041675) bg_popup_call2_rect_pane_g3

0xe22f,	// (0x0004167d) bg_popup_call2_rect_pane_g4

0xe237,	// (0x00041685) bg_popup_call2_rect_pane_g5

0xe23f,	// (0x0004168d) bg_popup_call2_rect_pane_g6

0xe247,	// (0x00041695) bg_popup_call2_rect_pane_g7

0xe24f,	// (0x0004169d) bg_popup_call2_rect_pane_g8

0xe257,	// (0x000416a5) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x000429db) bg_popup_call2_rect_pane_g

0xe25f,	// (0x000416ad) bg_popup_call2_bubble_pane_g1

0xe267,	// (0x000416b5) bg_popup_call2_bubble_pane_g2

0xe26f,	// (0x000416bd) bg_popup_call2_bubble_pane_g3

0xe277,	// (0x000416c5) bg_popup_call2_bubble_pane_g4

0xe27f,	// (0x000416cd) bg_popup_call2_bubble_pane_g5

0xe287,	// (0x000416d5) bg_popup_call2_bubble_pane_g6

0xe28f,	// (0x000416dd) bg_popup_call2_bubble_pane_g7

0xe297,	// (0x000416e5) bg_popup_call2_bubble_pane_g8

0xe29f,	// (0x000416ed) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x000429ee) bg_popup_call2_bubble_pane_g

0x4f40,	// (0x0003838e) aid_cale_week_size_cell_pane

0x54e0,	// (0x0003892e) aid_cams_cif_uncrop_pane_ParamLimits

0x54e0,	// (0x0003892e) aid_cams_cif_uncrop_pane

0x563d,	// (0x00038a8b) aid_cams_size_cell_ParamLimits

0x563d,	// (0x00038a8b) aid_cams_size_cell

0x5649,	// (0x00038a97) grid_cams_pane_ParamLimits

0x5657,	// (0x00038aa5) linegrid_cams_pane_ParamLimits

0x5728,	// (0x00038b76) call_video_pane_t1

0x5745,	// (0x00038b93) call_video_pane_t2

0x0001,

0xf28d,	// (0x000426db) call_video_pane_t

0x5bff,	// (0x0003904d) aid_cale_month_size_cell_pane_ParamLimits

0x5bff,	// (0x0003904d) aid_cale_month_size_cell_pane

0xf62a,	// (0x00042a78) smil_status_volume_pane_g

0x7988,	// (0x0003add6) volume_smil_pane_ParamLimits

0x450f,	// (0x0003795d) aid_popup2_width_pane

0x4e5a,	// (0x000382a8) cell_qdial_pane_g4_ParamLimits

0x4e5a,	// (0x000382a8) cell_qdial_pane_g4

0x68b0,	// (0x00039cfe) aid_blid_cardinal_pane_ParamLimits

0x68c0,	// (0x00039d0e) aid_blid_destination_pane_ParamLimits

0x68c0,	// (0x00039d0e) aid_blid_destination_pane

0xc4b6,	// (0x0003f904) bg_popup_call_poc_act_pane_ParamLimits

0xc4b6,	// (0x0003f904) bg_popup_call_poc_act_pane

0xc4b6,	// (0x0003f904) bg_popup_call_poc_inact_pane_ParamLimits

0xc4b6,	// (0x0003f904) bg_popup_call_poc_inact_pane

0xe2a7,	// (0x000416f5) bg_popup_call_poc_act_pane_g1

0xe2af,	// (0x000416fd) bg_popup_call_poc_act_pane_g2

0xe2b7,	// (0x00041705) bg_popup_call_poc_act_pane_g3

0xe277,	// (0x000416c5) bg_popup_call_poc_act_pane_g4

0xe27f,	// (0x000416cd) bg_popup_call_poc_act_pane_g5

0xe2bf,	// (0x0004170d) bg_popup_call_poc_act_pane_g6

0xe28f,	// (0x000416dd) bg_popup_call_poc_act_pane_g7

0xe2c7,	// (0x00041715) bg_popup_call_poc_act_pane_g8

0xc25b,	// (0x0003f6a9) main_usb_pane

0xe424,	// (0x00041872) popup_cale_lunar_info_window

0x5a5d,	// (0x00038eab) im_reading_pane_t1_ParamLimits

0xc83d,	// (0x0003fc8b) list_im_pane_ParamLimits

0xc84e,	// (0x0003fc9c) scroll_pane_cp07_ParamLimits

0xc25b,	// (0x0003f6a9) grid_highlight_pane_cp012

0xc4b6,	// (0x0003f904) mup_scale_pane_ParamLimits

0xcd1a,	// (0x00040168) main_usb_pane_g1_ParamLimits

0xcd1a,	// (0x00040168) main_usb_pane_g1

0x7521,	// (0x0003a96f) main_usb_pane_g2_ParamLimits

0x7521,	// (0x0003a96f) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x00042a18) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x00042a18) main_usb_pane_g

0x752d,	// (0x0003a97b) main_usb_pane_t1_ParamLimits

0x752d,	// (0x0003a97b) main_usb_pane_t1

0x753f,	// (0x0003a98d) main_usb_pane_t2_ParamLimits

0x753f,	// (0x0003a98d) main_usb_pane_t2

0x7551,	// (0x0003a99f) main_usb_pane_t3_ParamLimits

0x7551,	// (0x0003a99f) main_usb_pane_t3

0x7563,	// (0x0003a9b1) main_usb_pane_t4_ParamLimits

0x7563,	// (0x0003a9b1) main_usb_pane_t4

0x7575,	// (0x0003a9c3) main_usb_pane_t5_ParamLimits

0x7575,	// (0x0003a9c3) main_usb_pane_t5

0x7587,	// (0x0003a9d5) main_usb_pane_t6_ParamLimits

0x7587,	// (0x0003a9d5) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x00042a1d) main_usb_pane_t_ParamLimits

0x684f,	// (0x00039c9d) aid_text_placing

0x685a,	// (0x00039ca8) main_location2_pane_t1_ParamLimits

0x6870,	// (0x00039cbe) main_location2_pane_t2_ParamLimits

0x6886,	// (0x00039cd4) main_location2_pane_t3_ParamLimits

0x689c,	// (0x00039cea) main_location2_pane_t4_ParamLimits

0x689c,	// (0x00039cea) main_location2_pane_t4

0xf3ee,	// (0x0004283c) main_location2_pane_t_ParamLimits

0xc4f2,	// (0x0003f940) find_pinb_pane_g2_ParamLimits

0xc4f2,	// (0x0003f940) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0004258a) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0004258a) find_pinb_pane_g

0xc4fe,	// (0x0003f94c) find_pinb_pane_t1_ParamLimits

0xc510,	// (0x0003f95e) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0004258f) find_pinb_pane_t_ParamLimits

0xc25b,	// (0x0003f6a9) main_call3_pane

0x600b,	// (0x00039459) cale_month_day_heading_pane_t1_ParamLimits

0x6069,	// (0x000394b7) cale_month_day_heading_pane_t2_ParamLimits

0x60ce,	// (0x0003951c) cale_month_day_heading_pane_t3_ParamLimits

0x6133,	// (0x00039581) cale_month_day_heading_pane_t4_ParamLimits

0x6198,	// (0x000395e6) cale_month_day_heading_pane_t5_ParamLimits

0x6205,	// (0x00039653) cale_month_day_heading_pane_t6_ParamLimits

0x627a,	// (0x000396c8) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x00042713) cale_month_day_heading_pane_t_ParamLimits

0xca8e,	// (0x0003fedc) smil_status_volume_pane

0x70df,	// (0x0003a52d) postcard_address_pane_ParamLimits

0x70df,	// (0x0003a52d) postcard_address_pane

0x70ed,	// (0x0003a53b) postcard_message_pane_ParamLimits

0x70ed,	// (0x0003a53b) postcard_message_pane

0x74f7,	// (0x0003a945) call2_cli_visual_pane_t1_ParamLimits

0x74f7,	// (0x0003a945) call2_cli_visual_pane_t1

0x7ace,	// (0x0003af1c) postcard_message_pane_t1_ParamLimits

0x7ace,	// (0x0003af1c) postcard_message_pane_t1

0xe512,	// (0x00041960) postcard_address_pane_t1_ParamLimits

0xe512,	// (0x00041960) postcard_address_pane_t1

0x7abf,	// (0x0003af0d) popup_call3_audio_in_window_ParamLimits

0x7abf,	// (0x0003af0d) popup_call3_audio_in_window

0x799d,	// (0x0003adeb) bg_popup_call3_in_pane_ParamLimits

0x799d,	// (0x0003adeb) bg_popup_call3_in_pane

0x7a05,	// (0x0003ae53) popup_call3_audio_in_window_g1_ParamLimits

0x7a05,	// (0x0003ae53) popup_call3_audio_in_window_g1

0x7a1d,	// (0x0003ae6b) popup_call3_audio_in_window_g2_ParamLimits

0x7a1d,	// (0x0003ae6b) popup_call3_audio_in_window_g2

0x7a35,	// (0x0003ae83) popup_call3_audio_in_window_g3_ParamLimits

0x7a35,	// (0x0003ae83) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x00042a7f) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x00042a7f) popup_call3_audio_in_window_g

0x7a5d,	// (0x0003aeab) popup_call3_audio_in_window_t1_ParamLimits

0x7a5d,	// (0x0003aeab) popup_call3_audio_in_window_t1

0x7a85,	// (0x0003aed3) popup_call3_audio_in_window_t2_ParamLimits

0x7a85,	// (0x0003aed3) popup_call3_audio_in_window_t2

0x7aad,	// (0x0003aefb) popup_call3_audio_in_window_t3_ParamLimits

0x7aad,	// (0x0003aefb) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x00042a88) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x00042a88) popup_call3_audio_in_window_t

0xcfdf,	// (0x0004042d) bg_popup_call3_rect_pane

0xe21f,	// (0x0004166d) bg_popup_call3_rect_pane_g1

0xc67c,	// (0x0003faca) bg_popup_call3_rect_pane_g2

0xe227,	// (0x00041675) bg_popup_call3_rect_pane_g3

0xe22f,	// (0x0004167d) bg_popup_call3_rect_pane_g4

0xe237,	// (0x00041685) bg_popup_call3_rect_pane_g5

0xe23f,	// (0x0004168d) bg_popup_call3_rect_pane_g6

0xe247,	// (0x00041695) bg_popup_call3_rect_pane_g7

0x6ce2,	// (0x0003a130) mup_visualizer_osc_pane

0xd09e,	// (0x000404ec) mup_visualizer_spec_pane

0x79bd,	// (0x0003ae0b) call3_video_qcif_pane_ParamLimits

0x79bd,	// (0x0003ae0b) call3_video_qcif_pane

0x79cf,	// (0x0003ae1d) call3_video_qcif_uncrop_pane_ParamLimits

0x79cf,	// (0x0003ae1d) call3_video_qcif_uncrop_pane

0x79df,	// (0x0003ae2d) call3_video_subqcif_pane_ParamLimits

0x79df,	// (0x0003ae2d) call3_video_subqcif_pane

0x79f3,	// (0x0003ae41) call3_video_subqcif_uncrop_pane_ParamLimits

0x79f3,	// (0x0003ae41) call3_video_subqcif_uncrop_pane

0x7a4d,	// (0x0003ae9b) popup_call3_audio_in_window_g4_ParamLimits

0x7a4d,	// (0x0003ae9b) popup_call3_audio_in_window_g4

0x796a,	// (0x0003adb8) mup_spec_half_pane

0x7973,	// (0x0003adc1) mup_spec_half_pane_cp

0xe4d2,	// (0x00041920) mup_osc_middle_pane

0xe4db,	// (0x00041929) mup_visualizer_osc_pane_g1

0x794a,	// (0x0003ad98) mup_spec_bar_pane_ParamLimits

0x794a,	// (0x0003ad98) mup_spec_bar_pane

0xe4bf,	// (0x0004190d) mup_spec_bar_pane_g1

0xe4c9,	// (0x00041917) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00042a73) mup_spec_bar_pane_g

0x4f40,	// (0x0003838e) aid_cale_week_size_cell_pane_ParamLimits

0x4f53,	// (0x000383a1) bg_cale_heading_pane_ParamLimits

0xc6b0,	// (0x0003fafe) bg_cale_pane_cp01_ParamLimits

0x4f6f,	// (0x000383bd) cale_week_corner_pane_ParamLimits

0x4f85,	// (0x000383d3) cale_week_day_heading_pane_ParamLimits

0x4fa1,	// (0x000383ef) cale_week_scroll_pane_g1_ParamLimits

0x4fba,	// (0x00038408) cale_week_scroll_pane_g2_ParamLimits

0x4fcb,	// (0x00038419) cale_week_scroll_pane_g3_ParamLimits

0x4fdc,	// (0x0003842a) cale_week_scroll_pane_g4_ParamLimits

0x4fed,	// (0x0003843b) cale_week_scroll_pane_g5_ParamLimits

0x4ffe,	// (0x0003844c) cale_week_scroll_pane_g6_ParamLimits

0x5011,	// (0x0003845f) cale_week_scroll_pane_g7_ParamLimits

0x5024,	// (0x00038472) cale_week_scroll_pane_g8_ParamLimits

0x5037,	// (0x00038485) cale_week_scroll_pane_g9_ParamLimits

0x5048,	// (0x00038496) cale_week_scroll_pane_g10_ParamLimits

0x5059,	// (0x000384a7) cale_week_scroll_pane_g11_ParamLimits

0x506a,	// (0x000384b8) cale_week_scroll_pane_g12_ParamLimits

0x507b,	// (0x000384c9) cale_week_scroll_pane_g13_ParamLimits

0x508c,	// (0x000384da) cale_week_scroll_pane_g14_ParamLimits

0x50a5,	// (0x000384f3) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0004261b) cale_week_scroll_pane_g_ParamLimits

0x50be,	// (0x0003850c) cale_week_time_pane_ParamLimits

0x50d1,	// (0x0003851f) grid_cale_week_pane_ParamLimits

0xc6c9,	// (0x0003fb17) listscroll_cale_week_pane_t1

0x50ee,	// (0x0003853c) scroll_pane_cp08_ParamLimits

0x5c50,	// (0x0003909e) cale_month_corner_pane_ParamLimits

0xca64,	// (0x0003feb2) cale_month_pane_t1

0x5fba,	// (0x00039408) cale_month_week_pane_ParamLimits

0xcd1a,	// (0x00040168) popup_call_status_window_g1_ParamLimits

0x6658,	// (0x00039aa6) popup_call_status_window_g2_ParamLimits

0x6664,	// (0x00039ab2) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x000427c3) popup_call_status_window_g_ParamLimits

0xcd81,	// (0x000401cf) aid_call2_pane

0x3578,	// (0x000369c6) msg_header_pane_g1

0x70df,	// (0x0003a52d) postcard_address2_pane_ParamLimits

0x70df,	// (0x0003a52d) postcard_address2_pane

0x70ed,	// (0x0003a53b) postcard_message2_pane_ParamLimits

0x70ed,	// (0x0003a53b) postcard_message2_pane

0x7904,	// (0x0003ad52) message2_row_pane_ParamLimits

0x7904,	// (0x0003ad52) message2_row_pane

0xe47a,	// (0x000418c8) address2_row_pane_ParamLimits

0xe47a,	// (0x000418c8) address2_row_pane

0xe48d,	// (0x000418db) postcard_message2_row_pane_g1

0xe495,	// (0x000418e3) postcard_message2_row_pane_t1

0xe48d,	// (0x000418db) address2_row_pane_g1

0xe495,	// (0x000418e3) address2_row_pane_t1

0x53a0,	// (0x000387ee) aid_size_cell_vorec

0xc25b,	// (0x0003f6a9) main_rss_pane

0x791e,	// (0x0003ad6c) rss_list_single_pane_ParamLimits

0x791e,	// (0x0003ad6c) rss_list_single_pane

0xe4a3,	// (0x000418f1) rss_list_single_pane_t1

0xe4b1,	// (0x000418ff) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x00042a6e) rss_list_single_pane_t

0xc25b,	// (0x0003f6a9) main_camera2_pane

0xc25b,	// (0x0003f6a9) main_video2_pane

0x7b32,	// (0x0003af80) cams_zoom_pane_cp2_ParamLimits

0x7b32,	// (0x0003af80) cams_zoom_pane_cp2

0x7b3e,	// (0x0003af8c) image2_vga_pane_ParamLimits

0x7b3e,	// (0x0003af8c) image2_vga_pane

0x7b4d,	// (0x0003af9b) main_camera2_pane_g1_ParamLimits

0x7b4d,	// (0x0003af9b) main_camera2_pane_g1

0x7b59,	// (0x0003afa7) main_camera2_pane_g2_ParamLimits

0x7b59,	// (0x0003afa7) main_camera2_pane_g2

0x7b65,	// (0x0003afb3) main_camera2_pane_g3_ParamLimits

0x7b65,	// (0x0003afb3) main_camera2_pane_g3

0x7b71,	// (0x0003afbf) main_camera2_pane_g4_ParamLimits

0x7b71,	// (0x0003afbf) main_camera2_pane_g4

0x7b7d,	// (0x0003afcb) main_camera2_pane_g5_ParamLimits

0x7b7d,	// (0x0003afcb) main_camera2_pane_g5

0x7b89,	// (0x0003afd7) main_camera2_pane_g6_ParamLimits

0x7b89,	// (0x0003afd7) main_camera2_pane_g6

0x7b95,	// (0x0003afe3) main_camera2_pane_g7_ParamLimits

0x7b95,	// (0x0003afe3) main_camera2_pane_g7

0x7ba1,	// (0x0003afef) main_camera2_pane_g8_ParamLimits

0x7ba1,	// (0x0003afef) main_camera2_pane_g8

0x0008,

0xf641,	// (0x00042a8f) main_camera2_pane_g_ParamLimits

0xf641,	// (0x00042a8f) main_camera2_pane_g

0x7bb9,	// (0x0003b007) main_camera2_pane_t1_ParamLimits

0x7bb9,	// (0x0003b007) main_camera2_pane_t1

0x7bcb,	// (0x0003b019) main_camera2_pane_t2_ParamLimits

0x7bcb,	// (0x0003b019) main_camera2_pane_t2

0x7bdd,	// (0x0003b02b) main_camera2_pane_t3_ParamLimits

0x7bdd,	// (0x0003b02b) main_camera2_pane_t3

0x7bef,	// (0x0003b03d) main_camera2_pane_t4_ParamLimits

0x7bef,	// (0x0003b03d) main_camera2_pane_t4

0x0006,

0xf654,	// (0x00042aa2) main_camera2_pane_t_ParamLimits

0xf654,	// (0x00042aa2) main_camera2_pane_t

0x7c4c,	// (0x0003b09a) cams_zoom_pane_cp4_ParamLimits

0x7c4c,	// (0x0003b09a) cams_zoom_pane_cp4

0x7c5c,	// (0x0003b0aa) image2_cif_pane_ParamLimits

0x7c5c,	// (0x0003b0aa) image2_cif_pane

0x7c71,	// (0x0003b0bf) image2_subqcif_pane_ParamLimits

0x7c71,	// (0x0003b0bf) image2_subqcif_pane

0x7c80,	// (0x0003b0ce) main_video2_pane_g1_ParamLimits

0x7c80,	// (0x0003b0ce) main_video2_pane_g1

0x7c92,	// (0x0003b0e0) main_video2_pane_g2_ParamLimits

0x7c92,	// (0x0003b0e0) main_video2_pane_g2

0x7ca2,	// (0x0003b0f0) main_video2_pane_g3_ParamLimits

0x7ca2,	// (0x0003b0f0) main_video2_pane_g3

0x7cb2,	// (0x0003b100) main_video2_pane_g4_ParamLimits

0x7cb2,	// (0x0003b100) main_video2_pane_g4

0x7cc2,	// (0x0003b110) main_video2_pane_g5_ParamLimits

0x7cc2,	// (0x0003b110) main_video2_pane_g5

0x7cd2,	// (0x0003b120) main_video2_pane_g6_ParamLimits

0x7cd2,	// (0x0003b120) main_video2_pane_g6

0x0005,

0xf663,	// (0x00042ab1) main_video2_pane_g_ParamLimits

0xf663,	// (0x00042ab1) main_video2_pane_g

0x7ce4,	// (0x0003b132) main_video2_pane_t1_ParamLimits

0x7ce4,	// (0x0003b132) main_video2_pane_t1

0x7cfe,	// (0x0003b14c) main_video2_pane_t2_ParamLimits

0x7cfe,	// (0x0003b14c) main_video2_pane_t2

0x7d24,	// (0x0003b172) main_video2_pane_t3_ParamLimits

0x7d24,	// (0x0003b172) main_video2_pane_t3

0x0002,

0xf670,	// (0x00042abe) main_video2_pane_t_ParamLimits

0xf670,	// (0x00042abe) main_video2_pane_t

0x763e,	// (0x0003aa8c) call_muted_g2

0x0001,

0xf612,	// (0x00042a60) call_muted_g

0xc25b,	// (0x0003f6a9) main_mup2_pane

0xe529,	// (0x00041977) main_mup2_pane_g1_ParamLimits

0xe529,	// (0x00041977) main_mup2_pane_g1

0x7d4a,	// (0x0003b198) main_mup2_pane_g2_ParamLimits

0x7d4a,	// (0x0003b198) main_mup2_pane_g2

0x7fce,	// (0x0003b41c) main_mup_pane_g13_cp1

0x7fd6,	// (0x0003b424) mup_volume_pane_cp1

0x7d6c,	// (0x0003b1ba) main_mup2_pane_g4_ParamLimits

0x7d6c,	// (0x0003b1ba) main_mup2_pane_g4

0x7d7d,	// (0x0003b1cb) main_mup2_pane_g5_ParamLimits

0x7d7d,	// (0x0003b1cb) main_mup2_pane_g5

0x7d8e,	// (0x0003b1dc) main_mup2_pane_g6_ParamLimits

0x7d8e,	// (0x0003b1dc) main_mup2_pane_g6

0x7d9f,	// (0x0003b1ed) main_mup2_pane_g7_ParamLimits

0x7d9f,	// (0x0003b1ed) main_mup2_pane_g7

0x0006,

0xf677,	// (0x00042ac5) main_mup2_pane_g_ParamLimits

0xf677,	// (0x00042ac5) main_mup2_pane_g

0x7dbb,	// (0x0003b209) main_mup2_pane_t1_ParamLimits

0x7dbb,	// (0x0003b209) main_mup2_pane_t1

0x7dd2,	// (0x0003b220) main_mup2_pane_t2_ParamLimits

0x7dd2,	// (0x0003b220) main_mup2_pane_t2

0x7de9,	// (0x0003b237) main_mup2_pane_t3_ParamLimits

0x7de9,	// (0x0003b237) main_mup2_pane_t3

0x7e00,	// (0x0003b24e) main_mup2_pane_t4_ParamLimits

0x7e00,	// (0x0003b24e) main_mup2_pane_t4

0x7e1a,	// (0x0003b268) main_mup2_pane_t5_ParamLimits

0x7e1a,	// (0x0003b268) main_mup2_pane_t5

0x7e34,	// (0x0003b282) main_mup2_pane_t6_ParamLimits

0x7e34,	// (0x0003b282) main_mup2_pane_t6

0x0005,

0xf686,	// (0x00042ad4) main_mup2_pane_t_ParamLimits

0xf686,	// (0x00042ad4) main_mup2_pane_t

0x7e6c,	// (0x0003b2ba) mup2_visualizer_pane_ParamLimits

0x7e6c,	// (0x0003b2ba) mup2_visualizer_pane

0x7ea2,	// (0x0003b2f0) mup_progress_pane_cp_ParamLimits

0x7ea2,	// (0x0003b2f0) mup_progress_pane_cp

0x7fb9,	// (0x0003b407) mup_volume_pane_cp_ParamLimits

0x7fb9,	// (0x0003b407) mup_volume_pane_cp

0x7ebb,	// (0x0003b309) mup2_visualizer_pane_g1_ParamLimits

0x7ebb,	// (0x0003b309) mup2_visualizer_pane_g1

0xe535,	// (0x00041983) mup2_visualizer_pane_g2_ParamLimits

0xe535,	// (0x00041983) mup2_visualizer_pane_g2

0x7ed0,	// (0x0003b31e) mup2_visualizer_pane_g3_ParamLimits

0x7ed0,	// (0x0003b31e) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x00042ae1) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x00042ae1) mup2_visualizer_pane_g

0xd2c7,	// (0x00040715) aid_size_cell_fmradio

0x7754,	// (0x0003aba2) aid_height_parent_landcape

0xc8cc,	// (0x0003fd1a) wml_content_pane_cp

0xc8d4,	// (0x0003fd22) wml_tabs_pane

0xc8dd,	// (0x0003fd2b) popup_wml_miniature_window

0xc8e5,	// (0x0003fd33) scroll_pane_cp021

0xc8f9,	// (0x0003fd47) wml_content_pane_comp8

0xc25b,	// (0x0003f6a9) bg_popup_sub_pane_cp05

0xe553,	// (0x000419a1) popup_wml_miniature_window_g1

0xe55b,	// (0x000419a9) wml_miniature_view_pane

0x7edc,	// (0x0003b32a) aid_size_wml_view

0x7ee4,	// (0x0003b332) wml_miniature_view_pane_g1

0x7eed,	// (0x0003b33b) wml_miniature_view_pane_g2

0x7ef6,	// (0x0003b344) wml_miniature_view_pane_g3

0x7efe,	// (0x0003b34c) wml_miniature_view_pane_g4

0x7f06,	// (0x0003b354) wml_miniature_view_pane_g5

0x7f0e,	// (0x0003b35c) wml_miniature_view_pane_g6

0x7f16,	// (0x0003b364) wml_miniature_view_pane_g7

0x7f1e,	// (0x0003b36c) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x00042ae8) wml_miniature_view_pane_g

0xe529,	// (0x00041977) background_graphic_ParamLimits

0xe529,	// (0x00041977) background_graphic

0xe563,	// (0x000419b1) wml_tabs_2_pane

0xe56c,	// (0x000419ba) wml_tabs_3_pane_ParamLimits

0xe56c,	// (0x000419ba) wml_tabs_3_pane

0xe57e,	// (0x000419cc) wml_tabs_4_pane_ParamLimits

0xe57e,	// (0x000419cc) wml_tabs_4_pane

0xe594,	// (0x000419e2) wml_tabs_5_pane_ParamLimits

0xe594,	// (0x000419e2) wml_tabs_5_pane

0xe5ae,	// (0x000419fc) wml_tabs_pane_g2_ParamLimits

0xe5ae,	// (0x000419fc) wml_tabs_pane_g2

0xe5c2,	// (0x00041a10) wml_tabs_pane_g3_ParamLimits

0xe5c2,	// (0x00041a10) wml_tabs_pane_g3

0x7f26,	// (0x0003b374) wml_tabs_2_active_pane_ParamLimits

0x7f26,	// (0x0003b374) wml_tabs_2_active_pane

0x7f38,	// (0x0003b386) wml_tabs_2_passive_pane_ParamLimits

0x7f38,	// (0x0003b386) wml_tabs_2_passive_pane

0x7f4a,	// (0x0003b398) wml_tabs_3_active_pane_cp_ParamLimits

0x7f4a,	// (0x0003b398) wml_tabs_3_active_pane_cp

0x7f5d,	// (0x0003b3ab) wml_tabs_3_passive_pane_ParamLimits

0x7f5d,	// (0x0003b3ab) wml_tabs_3_passive_pane

0x7f6e,	// (0x0003b3bc) wml_tabs_3_passive_pane_cp_ParamLimits

0x7f6e,	// (0x0003b3bc) wml_tabs_3_passive_pane_cp

0x7f83,	// (0x0003b3d1) tabs_4_active_pane

0x7f8b,	// (0x0003b3d9) tabs_4_passive_pane

0x7f93,	// (0x0003b3e1) tabs_4_passive_pane_cp

0x7f9b,	// (0x0003b3e9) tabs_4_passive_pane_cp2

0x7519,	// (0x0003a967) aid_height_text

0x6cab,	// (0x0003a0f9) mup_volume_cont_pane_ParamLimits

0x6cab,	// (0x0003a0f9) mup_volume_cont_pane

0x4aba,	// (0x00037f08) aid_size_cell_pinb

0x4ac4,	// (0x00037f12) aid_size_list_pinb

0x7e8b,	// (0x0003b2d9) mup2_volume_cont_pane_ParamLimits

0x7e8b,	// (0x0003b2d9) mup2_volume_cont_pane

0x7fa5,	// (0x0003b3f3) mup2_volume_cont_pane_g1_ParamLimits

0x7fa5,	// (0x0003b3f3) mup2_volume_cont_pane_g1

0x451b,	// (0x00037969) aid_size_cell_touch_ParamLimits

0x451b,	// (0x00037969) aid_size_cell_touch

0x47cc,	// (0x00037c1a) touch_pane_ParamLimits

0x47cc,	// (0x00037c1a) touch_pane

0x44fd,	// (0x0003794b) main_rss2_pane

0xe5df,	// (0x00041a2d) listscroll_rss2_pane

0xe5e8,	// (0x00041a36) rss2_navigation_pane

0xe5f0,	// (0x00041a3e) list_rss2_pane

0xcea5,	// (0x000402f3) scroll_pane_cp22

0xe5f8,	// (0x00041a46) rss2_navigation_pane_g1

0xe601,	// (0x00041a4f) rss2_navigation_pane_g2

0xe609,	// (0x00041a57) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x00042af9) rss2_navigation_pane_g

0xe611,	// (0x00041a5f) rss2_navigation_pane_t1

0x7fde,	// (0x0003b42c) rss2_list_single_pane_ParamLimits

0x7fde,	// (0x0003b42c) rss2_list_single_pane

0xe61f,	// (0x00041a6d) rss2_list_single_pane_t2

0xe62d,	// (0x00041a7b) rss2_list_single_pane_t3_ParamLimits

0xe62d,	// (0x00041a7b) rss2_list_single_pane_t3

0xe64a,	// (0x00041a98) rss2_list_single_pane_t4

0x647a,	// (0x000398c8) smil_status_pane_g1

0x776b,	// (0x0003abb9) main_image2_pane_ParamLimits

0x776b,	// (0x0003abb9) main_image2_pane

0x7bad,	// (0x0003affb) main_camera2_pane_g9_ParamLimits

0x7bad,	// (0x0003affb) main_camera2_pane_g9

0x7c01,	// (0x0003b04f) main_camera2_pane_t5_ParamLimits

0x7c01,	// (0x0003b04f) main_camera2_pane_t5

0x7c13,	// (0x0003b061) main_camera2_pane_t6_ParamLimits

0x7c13,	// (0x0003b061) main_camera2_pane_t6

0x8001,	// (0x0003b44f) main_image2_pane_g1_ParamLimits

0x8001,	// (0x0003b44f) main_image2_pane_g1

0x72b6,	// (0x0003a704) smil2_video_pane_ParamLimits

0x72b6,	// (0x0003a704) smil2_video_pane

0x3348,	// (0x00036796) aid_zoom_text_primary_cp

0x4771,	// (0x00037bbf) popup_preview_fixed_window

0xc835,	// (0x0003fc83) im_reading_pane_g1

0x7af7,	// (0x0003af45) cams2_bc_adjust_pane_cp_ParamLimits

0x7af7,	// (0x0003af45) cams2_bc_adjust_pane_cp

0x7c3e,	// (0x0003b08c) cams2_bc_adjust_pane_ParamLimits

0x7c3e,	// (0x0003b08c) cams2_bc_adjust_pane

0x800d,	// (0x0003b45b) cams2_bc_adjust_pane_g1

0x8015,	// (0x0003b463) cams2_slider_pane

0x801e,	// (0x0003b46c) cams2_slider_pane_g1

0x8027,	// (0x0003b475) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x00042b00) cams2_slider_pane_g

0x4bb5,	// (0x00038003) calc_display_pane_ParamLimits

0x4bd3,	// (0x00038021) calc_paper_pane_ParamLimits

0x4bef,	// (0x0003803d) grid_calc_pane_ParamLimits

0x66c2,	// (0x00039b10) popup_clock_digital_window_t1_ParamLimits

0xd264,	// (0x000406b2) main_image_pane_t1

0x4b9b,	// (0x00037fe9) aid_size_cell_calc_ParamLimits

0x4b9b,	// (0x00037fe9) aid_size_cell_calc

0x7794,	// (0x0003abe2) popup_blid_sat_info2_window_ParamLimits

0x7794,	// (0x0003abe2) popup_blid_sat_info2_window

0xe660,	// (0x00041aae) aid_size_cell_blid

0xe668,	// (0x00041ab6) bg_popup_window_pane_cp07

0xe68b,	// (0x00041ad9) grid_popup_blid_pane

0xe695,	// (0x00041ae3) heading_pane_cp05_ParamLimits

0xe695,	// (0x00041ae3) heading_pane_cp05

0xe767,	// (0x00041bb5) cell_popup_blid_pane_ParamLimits

0xe767,	// (0x00041bb5) cell_popup_blid_pane

0xe791,	// (0x00041bdf) cell_popup_blid_pane_g1

0xe799,	// (0x00041be7) cell_popup_blid_pane_t1

0x7e51,	// (0x0003b29f) mup2_indicator_pane_ParamLimits

0x7e51,	// (0x0003b29f) mup2_indicator_pane

0xcfdf,	// (0x0004042d) mup2_visualizer_osc_pane

0xe541,	// (0x0004198f) mup2_visualizer_spec_pane_ParamLimits

0xe541,	// (0x0004198f) mup2_visualizer_spec_pane

0x8041,	// (0x0003b48f) mup2_spec_half_pane

0x804a,	// (0x0003b498) mup2_spec_half_pane_cp

0x8052,	// (0x0003b4a0) mup2_spec_bar_pane_ParamLimits

0x8052,	// (0x0003b4a0) mup2_spec_bar_pane

0xe4bf,	// (0x0004190d) mup2_spec_bar_pane_g1

0xe4c9,	// (0x00041917) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00042a73) mup2_spec_bar_pane_g

0x8071,	// (0x0003b4bf) mup2_osc_middle_pane

0xe4db,	// (0x00041929) mup2_visualizer_osc_pane_g1

0x4843,	// (0x00037c91) popup_number_entry_window_t1_ParamLimits

0x4856,	// (0x00037ca4) popup_number_entry_window_t2_ParamLimits

0x4868,	// (0x00037cb6) popup_number_entry_window_t3_ParamLimits

0x487a,	// (0x00037cc8) popup_number_entry_window_t5_ParamLimits

0x487a,	// (0x00037cc8) popup_number_entry_window_t5

0xf0e7,	// (0x00042535) popup_number_entry_window_t_ParamLimits

0x48af,	// (0x00037cfd) text_title_cp2_ParamLimits

0x6fa3,	// (0x0003a3f1) aid_hotspot_pointer_text2_pane

0x703d,	// (0x0003a48b) main_viewer_pane_g9_ParamLimits

0x703d,	// (0x0003a48b) main_viewer_pane_g9

0xca64,	// (0x0003feb2) cale_month_pane_t1_ParamLimits

0xcaa1,	// (0x0003feef) bg_cale_pane_ParamLimits

0xcab9,	// (0x0003ff07) list_cale_pane_ParamLimits

0xc6c9,	// (0x0003fb17) listscroll_cale_day_pane_t1

0xcaca,	// (0x0003ff18) scroll_pane_cp09_ParamLimits

0x6cea,	// (0x0003a138) main_mup_eq_pane_t1_ParamLimits

0x6cea,	// (0x0003a138) main_mup_eq_pane_t1

0x6d06,	// (0x0003a154) main_mup_eq_pane_t2_ParamLimits

0x6d06,	// (0x0003a154) main_mup_eq_pane_t2

0x6d22,	// (0x0003a170) main_mup_eq_pane_t3_ParamLimits

0x6d22,	// (0x0003a170) main_mup_eq_pane_t3

0x6d3c,	// (0x0003a18a) main_mup_eq_pane_t4_ParamLimits

0x6d3c,	// (0x0003a18a) main_mup_eq_pane_t4

0x6d56,	// (0x0003a1a4) main_mup_eq_pane_t5_ParamLimits

0x6d56,	// (0x0003a1a4) main_mup_eq_pane_t5

0x6d70,	// (0x0003a1be) main_mup_eq_pane_t6_ParamLimits

0x6d70,	// (0x0003a1be) main_mup_eq_pane_t6

0x6d86,	// (0x0003a1d4) main_mup_eq_pane_t7_ParamLimits

0x6d86,	// (0x0003a1d4) main_mup_eq_pane_t7

0x6d9c,	// (0x0003a1ea) main_mup_eq_pane_t8_ParamLimits

0x6d9c,	// (0x0003a1ea) main_mup_eq_pane_t8

0x6db2,	// (0x0003a200) main_mup_eq_pane_t9_ParamLimits

0x6db2,	// (0x0003a200) main_mup_eq_pane_t9

0x6dce,	// (0x0003a21c) main_mup_eq_pane_t10_ParamLimits

0x6dce,	// (0x0003a21c) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x000428c2) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x000428c2) main_mup_eq_pane_t

0x6e93,	// (0x0003a2e1) mup_equalizer_pane_cp5_ParamLimits

0x6eab,	// (0x0003a2f9) mup_equalizer_pane_cp6_ParamLimits

0x6ec3,	// (0x0003a311) mup_equalizer_pane_cp7_ParamLimits

0x44fd,	// (0x0003794b) main_gallery_pane

0xe4e4,	// (0x00041932) smil2_volume_pane

0xe4ec,	// (0x0004193a) smil_status_volume_pane_g1_ParamLimits

0xe4ff,	// (0x0004194d) smil_status_volume_pane_g2_ParamLimits

0x797b,	// (0x0003adc9) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x00042a78) smil_status_volume_pane_g_ParamLimits

0xe668,	// (0x00041ab6) bg_popup_window_pane_cp07_ParamLimits

0xe676,	// (0x00041ac4) blid_firmament_pane

0x807a,	// (0x0003b4c8) aid_size_cell_gallery_ParamLimits

0x807a,	// (0x0003b4c8) aid_size_cell_gallery

0x8088,	// (0x0003b4d6) grid_gallery_pane_ParamLimits

0x8088,	// (0x0003b4d6) grid_gallery_pane

0x8098,	// (0x0003b4e6) cell_gallery_pane_ParamLimits

0x8098,	// (0x0003b4e6) cell_gallery_pane

0xe7a7,	// (0x00041bf5) bg_cell_gallery_focus_pane_ParamLimits

0xe7a7,	// (0x00041bf5) bg_cell_gallery_focus_pane

0xe7b9,	// (0x00041c07) cell_gallery_pane_g1_ParamLimits

0xe7b9,	// (0x00041c07) cell_gallery_pane_g1

0x80e3,	// (0x0003b531) cell_gallery_pane_g2_ParamLimits

0x80e3,	// (0x0003b531) cell_gallery_pane_g2

0x80f0,	// (0x0003b53e) cell_gallery_pane_g3_ParamLimits

0x80f0,	// (0x0003b53e) cell_gallery_pane_g3

0xe7c5,	// (0x00041c13) cell_gallery_pane_g4_ParamLimits

0xe7c5,	// (0x00041c13) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x00042b26) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x00042b26) cell_gallery_pane_g

0xe7d1,	// (0x00041c1f) bg_cell_gallery_focus_pane_g1

0xe7d9,	// (0x00041c27) bg_cell_gallery_focus_pane_g2

0xe7e1,	// (0x00041c2f) bg_cell_gallery_focus_pane_g3

0xe7e9,	// (0x00041c37) bg_cell_gallery_focus_pane_g4

0xe7f1,	// (0x00041c3f) bg_cell_gallery_focus_pane_g5

0xe7f9,	// (0x00041c47) bg_cell_gallery_focus_pane_g6

0xe801,	// (0x00041c4f) bg_cell_gallery_focus_pane_g7

0xe809,	// (0x00041c57) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x00042b2f) bg_cell_gallery_focus_pane_g

0xe811,	// (0x00041c5f) aid_firma_cardinal

0xe825,	// (0x00041c73) blid_firmament_pane_t1

0xe83c,	// (0x00041c8a) blid_firmament_pane_t2

0xe853,	// (0x00041ca1) blid_firmament_pane_t3

0xe86a,	// (0x00041cb8) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x00042b40) blid_firmament_pane_t

0xe881,	// (0x00041ccf) blid_sat_info_pane

0xe891,	// (0x00041cdf) blid_sat_info_pane_g1

0xe891,	// (0x00041cdf) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x00042b49) blid_sat_info_pane_g

0xe89b,	// (0x00041ce9) blid_sat_info_pane_t1

0xe8a9,	// (0x00041cf7) smil2_volume_content_pane

0xe8b2,	// (0x00041d00) smil2_volume_pane_g1

0xe8ba,	// (0x00041d08) smil2_volume_content_pane_g1

0xe8c3,	// (0x00041d11) smil2_volume_content_pane_g2

0xe8cc,	// (0x00041d1a) smil2_volume_content_pane_g3

0xe8d5,	// (0x00041d23) smil2_volume_content_pane_g4

0xe8de,	// (0x00041d2c) smil2_volume_content_pane_g5

0xe8e7,	// (0x00041d35) smil2_volume_content_pane_g6

0xe8f0,	// (0x00041d3e) smil2_volume_content_pane_g7

0xe8f9,	// (0x00041d47) smil2_volume_content_pane_g8

0xe902,	// (0x00041d50) smil2_volume_content_pane_g9

0xe90b,	// (0x00041d59) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x00042b4e) smil2_volume_content_pane_g

0x514a,	// (0x00038598) cale_week_day_heading_pane_t1_ParamLimits

0x5177,	// (0x000385c5) cale_week_day_heading_pane_t2_ParamLimits

0x51a4,	// (0x000385f2) cale_week_day_heading_pane_t3_ParamLimits

0x51d1,	// (0x0003861f) cale_week_day_heading_pane_t4_ParamLimits

0x51fe,	// (0x0003864c) cale_week_day_heading_pane_t5_ParamLimits

0x522b,	// (0x00038679) cale_week_day_heading_pane_t6_ParamLimits

0x5258,	// (0x000386a6) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0004263a) cale_week_day_heading_pane_t_ParamLimits

0xc6db,	// (0x0003fb29) bg_cale_side_pane_ParamLimits

0x5285,	// (0x000386d3) cale_week_time_pane_t1_ParamLimits

0x529d,	// (0x000386eb) cale_week_time_pane_t2_ParamLimits

0x52b5,	// (0x00038703) cale_week_time_pane_t3_ParamLimits

0x52cd,	// (0x0003871b) cale_week_time_pane_t4_ParamLimits

0x52e5,	// (0x00038733) cale_week_time_pane_t5_ParamLimits

0x52fd,	// (0x0003874b) cale_week_time_pane_t6_ParamLimits

0x5315,	// (0x00038763) cale_week_time_pane_t7_ParamLimits

0x532d,	// (0x0003877b) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x00042649) cale_week_time_pane_t_ParamLimits

0x5349,	// (0x00038797) cell_cale_week_pane_g2_ParamLimits

0xc6db,	// (0x0003fb29) bg_cale_side_pane_cp01_ParamLimits

0x62ef,	// (0x0003973d) cale_month_week_pane_t1_ParamLimits

0x6306,	// (0x00039754) cale_month_week_pane_t2_ParamLimits

0x631d,	// (0x0003976b) cale_month_week_pane_t3_ParamLimits

0x6334,	// (0x00039782) cale_month_week_pane_t4_ParamLimits

0x634b,	// (0x00039799) cale_month_week_pane_t5_ParamLimits

0x6362,	// (0x000397b0) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x00042722) cale_month_week_pane_t_ParamLimits

0x6447,	// (0x00039895) cell_cale_month_pane_g1_ParamLimits

0x44fd,	// (0x0003794b) main_cale_event_viewer_pane

0x44fd,	// (0x0003794b) listscroll_cale_event_viewer_pane

0xe914,	// (0x00041d62) list_cale_ev_pane

0xe91c,	// (0x00041d6a) scroll_pane_cp023

0x80fd,	// (0x0003b54b) field_cale_ev_pane_ParamLimits

0x80fd,	// (0x0003b54b) field_cale_ev_pane

0xe928,	// (0x00041d76) field_cale_ev_content_pane_ParamLimits

0xe928,	// (0x00041d76) field_cale_ev_content_pane

0xe934,	// (0x00041d82) field_cale_ev_pane_g1_ParamLimits

0xe934,	// (0x00041d82) field_cale_ev_pane_g1

0xe940,	// (0x00041d8e) field_cale_ev_pane_g2_ParamLimits

0xe940,	// (0x00041d8e) field_cale_ev_pane_g2

0xe958,	// (0x00041da6) field_cale_ev_pane_g3_ParamLimits

0xe958,	// (0x00041da6) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x00042b63) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x00042b63) field_cale_ev_pane_g

0xe970,	// (0x00041dbe) field_cale_ev_pane_t1_ParamLimits

0xe970,	// (0x00041dbe) field_cale_ev_pane_t1

0x8121,	// (0x0003b56f) field_cale_ev_content_pane_t1_ParamLimits

0x8121,	// (0x0003b56f) field_cale_ev_content_pane_t1

0xd14a,	// (0x00040598) bg_button_pane_cp01

0xc589,	// (0x0003f9d7) listscroll_cale_week_pane_ParamLimits

0x4f36,	// (0x00038384) popup_toolbar_window_cp01

0xc6c9,	// (0x0003fb17) listscroll_cale_week_pane_t1_ParamLimits

0xc589,	// (0x0003f9d7) listscroll_cale_day_pane_ParamLimits

0x4f36,	// (0x00038384) popup_toolbar_window_cp02

0xc6c9,	// (0x0003fb17) listscroll_cale_day_pane_t1_ParamLimits

0xc589,	// (0x0003f9d7) main_cale_month_pane_ParamLimits

0x7878,	// (0x0003acc6) popup_toolbar_window_cp03_ParamLimits

0x7878,	// (0x0003acc6) popup_toolbar_window_cp03

0x71c6,	// (0x0003a614) main_image_pane_g2_ParamLimits

0x71c6,	// (0x0003a614) main_image_pane_g2

0x71d2,	// (0x0003a620) main_image_pane_g3_ParamLimits

0x71d2,	// (0x0003a620) main_image_pane_g3

0x0002,

0xf506,	// (0x00042954) main_image_pane_g_ParamLimits

0xf506,	// (0x00042954) main_image_pane_g

0xd264,	// (0x000406b2) main_image_pane_t1_ParamLimits

0x71de,	// (0x0003a62c) main_image_pane_t2_ParamLimits

0x71de,	// (0x0003a62c) main_image_pane_t2

0x71f0,	// (0x0003a63e) main_image_pane_t3_ParamLimits

0x71f0,	// (0x0003a63e) main_image_pane_t3

0x7202,	// (0x0003a650) main_image_pane_t4_ParamLimits

0x7202,	// (0x0003a650) main_image_pane_t4

0x0003,

0xf50d,	// (0x0004295b) main_image_pane_t_ParamLimits

0xf50d,	// (0x0004295b) main_image_pane_t

0x7214,	// (0x0003a662) popup_image_details_window_cp01

0x721e,	// (0x0003a66c) popup_toobar_trans_pane_cp01_ParamLimits

0x721e,	// (0x0003a66c) popup_toobar_trans_pane_cp01

0x77e9,	// (0x0003ac37) popup_image_details_window_ParamLimits

0x77e9,	// (0x0003ac37) popup_image_details_window

0xe430,	// (0x0004187e) popup_image_focus_window

0x7ae9,	// (0x0003af37) camera2_autofocus_pane_ParamLimits

0x7ae9,	// (0x0003af37) camera2_autofocus_pane

0x44fd,	// (0x0003794b) bg_popup_sub_pane_cp06

0xe987,	// (0x00041dd5) popup_image_focus_window_g1

0xe98f,	// (0x00041ddd) popup_image_focus_window_g2

0xe997,	// (0x00041de5) popup_image_focus_window_g3

0xe99f,	// (0x00041ded) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x00042b6a) popup_image_focus_window_g

0xe9a7,	// (0x00041df5) popup_image_focus_window_t1

0xe9b5,	// (0x00041e03) popup_image_focus_window_t2

0xe9c5,	// (0x00041e13) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x00042b73) popup_image_focus_window_t

0xe9d3,	// (0x00041e21) camera2_autofocus_pane_g1

0x776b,	// (0x0003abb9) bg_tb_trans_pane_cp01

0xe9e1,	// (0x00041e2f) popup_image_details_window_g1

0xe9f4,	// (0x00041e42) popup_image_details_window_g2

0x0002,

0xf737,	// (0x00042b85) popup_image_details_window_g

0xea1d,	// (0x00041e6b) popup_image_details_window_t1

0xea2f,	// (0x00041e7d) popup_image_details_window_t2

0xea48,	// (0x00041e96) popup_image_details_window_t3

0xea5c,	// (0x00041eaa) popup_image_details_window_t4

0xea77,	// (0x00041ec5) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x00042b8c) popup_image_details_window_t

0xc575,	// (0x0003f9c3) bg_calc_paper_pane_ParamLimits

0x44fd,	// (0x0003794b) grid_highlight_pane_cp013

0x4cec,	// (0x0003813a) list_calc_pane_ParamLimits

0x4cfe,	// (0x0003814c) scroll_pane_cp024

0xc589,	// (0x0003f9d7) bg_calc_display_pane_ParamLimits

0x4d06,	// (0x00038154) calc_display_pane_t1_ParamLimits

0x4d1b,	// (0x00038169) calc_display_pane_t2_ParamLimits

0x4d30,	// (0x0003817e) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x000425bc) calc_display_pane_t_ParamLimits

0x4e04,	// (0x00038252) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x000425d9) cell_calc_pane_g

0x4e0d,	// (0x0003825b) cell_calc_pane_t1

0xc5e8,	// (0x0003fa36) grid_highlight_pane_cp02_ParamLimits

0xc5fe,	// (0x0003fa4c) toolbar_button_pane_cp01_ParamLimits

0xc5fe,	// (0x0003fa4c) toolbar_button_pane_cp01

0xd2a9,	// (0x000406f7) temp_image_control_pane_ParamLimits

0xd2a9,	// (0x000406f7) temp_image_control_pane

0x776b,	// (0x0003abb9) main_mp3_pane

0xea91,	// (0x00041edf) temp_image_control_pane_g1_ParamLimits

0xea91,	// (0x00041edf) temp_image_control_pane_g1

0xea9f,	// (0x00041eed) temp_image_control_pane_g2_ParamLimits

0xea9f,	// (0x00041eed) temp_image_control_pane_g2

0xeab1,	// (0x00041eff) temp_image_control_pane_g3_ParamLimits

0xeab1,	// (0x00041eff) temp_image_control_pane_g3

0x816c,	// (0x0003b5ba) temp_image_control_pane_g4_ParamLimits

0x816c,	// (0x0003b5ba) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x00042b97) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x00042b97) temp_image_control_pane_g

0xea91,	// (0x00041edf) main_mp3_pane_g1

0x817d,	// (0x0003b5cb) main_mp3_pane_g2

0x0007,

0xf752,	// (0x00042ba0) main_mp3_pane_g

0xeaf4,	// (0x00041f42) main_mp3_pane_t1

0xc740,	// (0x0003fb8e) main_camera_pane_g8_ParamLimits

0xc740,	// (0x0003fb8e) main_camera_pane_g8

0x55f3,	// (0x00038a41) main_video_pane_g7_ParamLimits

0x55f3,	// (0x00038a41) main_video_pane_g7

0x7c2c,	// (0x0003b07a) main_camera2_pane_t7_ParamLimits

0x7c2c,	// (0x0003b07a) main_camera2_pane_t7

0xc88c,	// (0x0003fcda) scroll_pane_cp025_ParamLimits

0xc88c,	// (0x0003fcda) scroll_pane_cp025

0xc8a0,	// (0x0003fcee) scroll_pane_cp026_ParamLimits

0xc8a0,	// (0x0003fcee) scroll_pane_cp026

0xc8af,	// (0x0003fcfd) wml_content_pane_ParamLimits

0x44fd,	// (0x0003794b) main_touch_calib_pane

0x8221,	// (0x0003b66f) main_touch_calib_pane_g1

0x822d,	// (0x0003b67b) main_touch_calib_pane_g2

0x8239,	// (0x0003b687) main_touch_calib_pane_g3

0x8245,	// (0x0003b693) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x00042bbe) main_touch_calib_pane_g

0x8251,	// (0x0003b69f) main_touch_calib_pane_t1

0x8268,	// (0x0003b6b6) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x00042bc7) main_touch_calib_pane_t

0xcf20,	// (0x0004036e) mup_progress_pane_cp02

0xcf3f,	// (0x0004038d) navi_pane_g1

0xcfa1,	// (0x000403ef) navi_pane_mp_t3

0x776b,	// (0x0003abb9) main_mp3_pane_ParamLimits

0x78ba,	// (0x0003ad08) navi_pane_ParamLimits

0xea91,	// (0x00041edf) main_mp3_pane_g1_ParamLimits

0x817d,	// (0x0003b5cb) main_mp3_pane_g2_ParamLimits

0x8189,	// (0x0003b5d7) main_mp3_pane_g3_ParamLimits

0x8189,	// (0x0003b5d7) main_mp3_pane_g3

0x8195,	// (0x0003b5e3) main_mp3_pane_g4_ParamLimits

0x8195,	// (0x0003b5e3) main_mp3_pane_g4

0xeac1,	// (0x00041f0f) main_mp3_pane_g5_ParamLimits

0xeac1,	// (0x00041f0f) main_mp3_pane_g5

0xeacf,	// (0x00041f1d) main_mp3_pane_g6_ParamLimits

0xeacf,	// (0x00041f1d) main_mp3_pane_g6

0xeadc,	// (0x00041f2a) main_mp3_pane_g7_ParamLimits

0xeadc,	// (0x00041f2a) main_mp3_pane_g7

0xeae8,	// (0x00041f36) main_mp3_pane_g8_ParamLimits

0xeae8,	// (0x00041f36) main_mp3_pane_g8

0xf752,	// (0x00042ba0) main_mp3_pane_g_ParamLimits

0x81a1,	// (0x0003b5ef) main_mp3_pane_t2

0x81b1,	// (0x0003b5ff) main_mp3_pane_t3

0xeb02,	// (0x00041f50) main_mp3_pane_t4

0xeb10,	// (0x00041f5e) main_mp3_pane_t5

0x0005,

0xf763,	// (0x00042bb1) main_mp3_pane_t

0xeb1e,	// (0x00041f6c) mup_progress_pane_cp01

0x3348,	// (0x00036796) aid_zoom_text_secondary2

0xe914,	// (0x00041d62) list_cale_ev2_pane

0xe91c,	// (0x00041d6a) scroll_pane_cp023_ParamLimits

0x82bf,	// (0x0003b70d) field_cale_ev2_pane_ParamLimits

0x82bf,	// (0x0003b70d) field_cale_ev2_pane

0x35ed,	// (0x00036a3b) field_cale_ev2_pane_g1_ParamLimits

0x35ed,	// (0x00036a3b) field_cale_ev2_pane_g1

0x35f9,	// (0x00036a47) field_cale_ev2_pane_g2_ParamLimits

0x35f9,	// (0x00036a47) field_cale_ev2_pane_g2

0x3611,	// (0x00036a5f) field_cale_ev2_pane_g3_ParamLimits

0x3611,	// (0x00036a5f) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x00042bd2) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x00042bd2) field_cale_ev2_pane_g

0x3635,	// (0x00036a83) field_cale_ev2_pane_t1_ParamLimits

0x3635,	// (0x00036a83) field_cale_ev2_pane_t1

0x364c,	// (0x00036a9a) field_cale_ev2_pane_t2_ParamLimits

0x364c,	// (0x00036a9a) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x00042bdb) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x00042bdb) field_cale_ev2_pane_t

0x70a5,	// (0x0003a4f3) main_postcard_pane_g5_ParamLimits

0x70a5,	// (0x0003a4f3) main_postcard_pane_g5

0x70b3,	// (0x0003a501) main_postcard_pane_g6_ParamLimits

0x70b3,	// (0x0003a501) main_postcard_pane_g6

0x5431,	// (0x0003887f) camera2_autofocus_pane_cp_ParamLimits

0x5431,	// (0x0003887f) camera2_autofocus_pane_cp

0x776b,	// (0x0003abb9) main_mup3_pane

0x82fa,	// (0x0003b748) main_mup3_pane_g1_ParamLimits

0x82fa,	// (0x0003b748) main_mup3_pane_g1

0x831b,	// (0x0003b769) main_mup3_pane_g2_ParamLimits

0x831b,	// (0x0003b769) main_mup3_pane_g2

0x8397,	// (0x0003b7e5) main_mup3_pane_g3_ParamLimits

0x8397,	// (0x0003b7e5) main_mup3_pane_g3

0x83dc,	// (0x0003b82a) main_mup3_pane_g4_ParamLimits

0x83dc,	// (0x0003b82a) main_mup3_pane_g4

0x8421,	// (0x0003b86f) main_mup3_pane_g5_ParamLimits

0x8421,	// (0x0003b86f) main_mup3_pane_g5

0x8466,	// (0x0003b8b4) main_mup3_pane_g6_ParamLimits

0x8466,	// (0x0003b8b4) main_mup3_pane_g6

0xeb26,	// (0x00041f74) main_mup3_pane_g7_ParamLimits

0xeb26,	// (0x00041f74) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x00042beb) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x00042beb) main_mup3_pane_g

0x84dc,	// (0x0003b92a) main_mup3_pane_t1_ParamLimits

0x84dc,	// (0x0003b92a) main_mup3_pane_t1

0x8547,	// (0x0003b995) main_mup3_pane_t2_ParamLimits

0x8547,	// (0x0003b995) main_mup3_pane_t2

0x8610,	// (0x0003ba5e) main_mup3_pane_t4_ParamLimits

0x8610,	// (0x0003ba5e) main_mup3_pane_t4

0x8664,	// (0x0003bab2) main_mup3_pane_t5_ParamLimits

0x8664,	// (0x0003bab2) main_mup3_pane_t5

0x8714,	// (0x0003bb62) main_mup3_pane_t6_ParamLimits

0x8714,	// (0x0003bb62) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x00042bfc) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x00042bfc) main_mup3_pane_t

0x87bc,	// (0x0003bc0a) mup3_progress_pane_ParamLimits

0x87bc,	// (0x0003bc0a) mup3_progress_pane

0x8836,	// (0x0003bc84) popup_mup3_control_window_ParamLimits

0x8836,	// (0x0003bc84) popup_mup3_control_window

0xeb34,	// (0x00041f82) popup_mup3_text_window

0x8853,	// (0x0003bca1) mup3_progress_pane_t1

0x886a,	// (0x0003bcb8) mup3_progress_pane_t2

0xeb3c,	// (0x00041f8a) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x00042c09) mup3_progress_pane_t

0xeb53,	// (0x00041fa1) mup_progress_pane_cp03

0x44fd,	// (0x0003794b) bg_tb_trans_pane_cp04

0x8881,	// (0x0003bccf) mup3_volume_pane

0x8889,	// (0x0003bcd7) popup_mup3_control_window_g1

0x0b34,	// (0x00033f82) mup3_volume_pane_g1

0x0b3d,	// (0x00033f8b) mup3_volume_pane_g2

0x0b46,	// (0x00033f94) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x00042c10) mup3_volume_pane_g

0x44fd,	// (0x0003794b) bg_tb_trans_pane_cp03

0xeb63,	// (0x00041fb1) popup_mup3_text_window_g1

0xeb6b,	// (0x00041fb9) popup_mup3_text_window_t1

0xc5d1,	// (0x0003fa1f) list_calc_item_pane_g1_ParamLimits

0xe5d6,	// (0x00041a24) mup_volume_pane_cp_g1

0x827f,	// (0x0003b6cd) main_touch_calib_pane_t3

0x8293,	// (0x0003b6e1) main_touch_calib_pane_t4

0x82a9,	// (0x0003b6f7) main_touch_calib_pane_t5

0x4507,	// (0x00037955) aid_cell_size_toolbar2

0x450f,	// (0x0003795d) aid_popup3_width_pane

0x3340,	// (0x0003678e) aid_zoom_text_msg_primary

0x5406,	// (0x00038854) vorec_t7

0xc595,	// (0x0003f9e3) bg_calc_paper_pane_g1_ParamLimits

0xc5a1,	// (0x0003f9ef) bg_calc_paper_pane_g2_ParamLimits

0xc5ad,	// (0x0003f9fb) bg_calc_paper_pane_g3_ParamLimits

0xc5b9,	// (0x0003fa07) bg_calc_paper_pane_g4_ParamLimits

0xc5c5,	// (0x0003fa13) bg_calc_paper_pane_g5_ParamLimits

0x4d71,	// (0x000381bf) bg_calc_paper_pane_g6_ParamLimits

0x4d82,	// (0x000381d0) bg_calc_paper_pane_g7_ParamLimits

0x4d93,	// (0x000381e1) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x000425c3) bg_calc_paper_pane_g_ParamLimits

0x4da6,	// (0x000381f4) calc_bg_paper_pane_g9_ParamLimits

0x5522,	// (0x00038970) image_qvga_pane_ParamLimits

0x5522,	// (0x00038970) image_qvga_pane

0xc4b6,	// (0x0003f904) bg_popup_sub_pane_cp04_ParamLimits

0xd1e0,	// (0x0004062e) popup_mup_playback_window_g1_ParamLimits

0xd1ec,	// (0x0004063a) popup_mup_playback_window_t1_ParamLimits

0xd201,	// (0x0004064f) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0004294f) popup_mup_playback_window_t_ParamLimits

0x7d5b,	// (0x0003b1a9) main_mup2_pane_g3_ParamLimits

0x7d5b,	// (0x0003b1a9) main_mup2_pane_g3

0x57ce,	// (0x00038c1c) popup_toolbar_window_cp04

0xd5fc,	// (0x00040a4a) popup_call2_audio_second_window_g3_ParamLimits

0xd5fc,	// (0x00040a4a) popup_call2_audio_second_window_g3

0xda2a,	// (0x00040e78) popup_call2_audio_first_window_g4_ParamLimits

0xda2a,	// (0x00040e78) popup_call2_audio_first_window_g4

0xe0a9,	// (0x000414f7) popup_call2_audio_in_window_g4_ParamLimits

0xe0a9,	// (0x000414f7) popup_call2_audio_in_window_g4

0x71b9,	// (0x0003a607) aid_area_sk_bg_cut_ParamLimits

0x71b9,	// (0x0003a607) aid_area_sk_bg_cut

0xd216,	// (0x00040664) aid_area_sk_bg_cut_2_ParamLimits

0xd216,	// (0x00040664) aid_area_sk_bg_cut_2

0x80d3,	// (0x0003b521) aid_placing_details_win

0x80db,	// (0x0003b529) aid_placing_details_win_2

0xe9d3,	// (0x00041e21) camera2_autofocus_pane_g1_ParamLimits

0x4762,	// (0x00037bb0) popup_fixed_preview_cale_window_ParamLimits

0x4762,	// (0x00037bb0) popup_fixed_preview_cale_window

0xcff0,	// (0x0004043e) navi_slider_pane_g3

0xcff9,	// (0x00040447) navi_slider_pane_g4

0xd002,	// (0x00040450) navi_slider_pane_g5

0xcff0,	// (0x0004043e) navi_slider_pane_g6

0x6a64,	// (0x00039eb2) navi_slider_pane_g7

0xd117,	// (0x00040565) mup_scale_pane_g3

0xd120,	// (0x0004056e) mup_scale_pane_g4

0xd129,	// (0x00040577) mup_scale_pane_g5

0x6edb,	// (0x0003a329) mup_scale_pane_g6

0x6ee4,	// (0x0003a332) mup_scale_pane_g7

0xcff0,	// (0x0004043e) cams2_slider_pane_g3

0xe658,	// (0x00041aa6) cams2_slider_pane_g4

0x8030,	// (0x0003b47e) cams2_slider_pane_g5

0xcff0,	// (0x0004043e) cams2_slider_pane_g6

0x8038,	// (0x0003b486) cams2_slider_pane_g7

0xe891,	// (0x00041cdf) camera2_autofocus_pane_cp_g1

0xeb79,	// (0x00041fc7) bg_popup_preview_window_pane_cp02_ParamLimits

0xeb79,	// (0x00041fc7) bg_popup_preview_window_pane_cp02

0xeb85,	// (0x00041fd3) list_fp_cale_pane_ParamLimits

0xeb85,	// (0x00041fd3) list_fp_cale_pane

0xeb91,	// (0x00041fdf) popup_fixed_preview_cale_window_t1_ParamLimits

0xeb91,	// (0x00041fdf) popup_fixed_preview_cale_window_t1

0x8892,	// (0x0003bce0) popup_fixed_preview_cale_window_t2_ParamLimits

0x8892,	// (0x0003bce0) popup_fixed_preview_cale_window_t2

0x88a7,	// (0x0003bcf5) popup_fixed_preview_cale_window_t3_ParamLimits

0x88a7,	// (0x0003bcf5) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x00042c17) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x00042c17) popup_fixed_preview_cale_window_t

0x88bc,	// (0x0003bd0a) list_single_fp_cale_pane_ParamLimits

0x88bc,	// (0x0003bd0a) list_single_fp_cale_pane

0xebaf,	// (0x00041ffd) list_single_fp_cale_pane_g1_ParamLimits

0xebaf,	// (0x00041ffd) list_single_fp_cale_pane_g1

0xebbb,	// (0x00042009) list_single_fp_cale_pane_g2_ParamLimits

0xebbb,	// (0x00042009) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x00042c1e) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x00042c1e) list_single_fp_cale_pane_g

0xebd4,	// (0x00042022) list_single_fp_cale_pane_t1_ParamLimits

0xebd4,	// (0x00042022) list_single_fp_cale_pane_t1

0xebe6,	// (0x00042034) list_single_fp_cale_pane_t2_ParamLimits

0xebe6,	// (0x00042034) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x00042c25) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x00042c25) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x44fd,	// (0x0003794b) main_dialer_pane

0x88c9,	// (0x0003bd17) aid_cell_size_keypad

0x88d3,	// (0x0003bd21) dialer_ne_pane

0x88dd,	// (0x0003bd2b) grid_dialer_command_1_pane

0x88e5,	// (0x0003bd33) grid_dialer_command_2_pane

0x88ed,	// (0x0003bd3b) grid_dialer_keypad_pane

0x8901,	// (0x0003bd4f) bg_popup_call_pane_cp06_ParamLimits

0x8901,	// (0x0003bd4f) bg_popup_call_pane_cp06

0x890d,	// (0x0003bd5b) dialer_ne_clear_pane_ParamLimits

0x890d,	// (0x0003bd5b) dialer_ne_clear_pane

0xec19,	// (0x00042067) dialer_ne_pane_g1

0xec21,	// (0x0004206f) dialer_ne_pane_t1_ParamLimits

0xec21,	// (0x0004206f) dialer_ne_pane_t1

0x8919,	// (0x0003bd67) dialer_ne_pane_t2_ParamLimits

0x8919,	// (0x0003bd67) dialer_ne_pane_t2

0x8936,	// (0x0003bd84) dialer_ne_pane_t3_ParamLimits

0x8936,	// (0x0003bd84) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x00042c2a) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x00042c2a) dialer_ne_pane_t

0x895a,	// (0x0003bda8) dialer_ne_pane_t3_copy1_ParamLimits

0x895a,	// (0x0003bda8) dialer_ne_pane_t3_copy1

0x897e,	// (0x0003bdcc) cell_dialer_keypad_pane_ParamLimits

0x897e,	// (0x0003bdcc) cell_dialer_keypad_pane

0x8993,	// (0x0003bde1) cell_dialer_command_1_pane_ParamLimits

0x8993,	// (0x0003bde1) cell_dialer_command_1_pane

0x89a9,	// (0x0003bdf7) cell_dialer_command_2_pane_ParamLimits

0x89a9,	// (0x0003bdf7) cell_dialer_command_2_pane

0xec33,	// (0x00042081) bg_button_pane_cp02_ParamLimits

0xec33,	// (0x00042081) bg_button_pane_cp02

0x89b8,	// (0x0003be06) cell_dialer_keypad_pane_g1_ParamLimits

0x89b8,	// (0x0003be06) cell_dialer_keypad_pane_g1

0xec33,	// (0x00042081) bg_button_pane_cp03_ParamLimits

0xec33,	// (0x00042081) bg_button_pane_cp03

0x89cd,	// (0x0003be1b) cell_dialer_command_1_pane_g1_ParamLimits

0x89cd,	// (0x0003be1b) cell_dialer_command_1_pane_g1

0xec3f,	// (0x0004208d) bg_button_pane_cp04

0x89e1,	// (0x0003be2f) cell_dialer_command_2_pane_g1

0xcfdf,	// (0x0004042d) bg_button_pane_cp06

0xec47,	// (0x00042095) dialer_ne_clear_pane_g1

0x69a7,	// (0x00039df5) navi_pane_g2

0x69d5,	// (0x00039e23) navi_pane_g3

0x0002,

0xf404,	// (0x00042852) navi_pane_g

0x6a00,	// (0x00039e4e) navi_pane_mv_g2

0x6a27,	// (0x00039e75) navi_pane_mv_g5

0x6a2f,	// (0x00039e7d) navi_pane_mv_t1

0xc589,	// (0x0003f9d7) main_clock2_pane

0x8a13,	// (0x0003be61) main_clock2_list_pane_ParamLimits

0x8a13,	// (0x0003be61) main_clock2_list_pane

0x8a3d,	// (0x0003be8b) main_clock2_pane_t1_ParamLimits

0x8a3d,	// (0x0003be8b) main_clock2_pane_t1

0x8a6b,	// (0x0003beb9) main_clock2_pane_t2_ParamLimits

0x8a6b,	// (0x0003beb9) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x00042c31) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x00042c31) main_clock2_pane_t

0x8ad4,	// (0x0003bf22) popup_clock_analogue_window_cp03_ParamLimits

0x8ad4,	// (0x0003bf22) popup_clock_analogue_window_cp03

0x8af4,	// (0x0003bf42) popup_clock_digital_window_cp02_ParamLimits

0x8af4,	// (0x0003bf42) popup_clock_digital_window_cp02

0x8b65,	// (0x0003bfb3) main_clock2_list_single_pane_ParamLimits

0x8b65,	// (0x0003bfb3) main_clock2_list_single_pane

0xcfdf,	// (0x0004042d) list_highlight_pane_cp05

0xec4f,	// (0x0004209d) main_clock2_list_single_pane_t1

0x57ce,	// (0x00038c1c) popup_toolbar_window_cp04_ParamLimits

0x813c,	// (0x0003b58a) camera2_autofocus_pane_g2_ParamLimits

0x813c,	// (0x0003b58a) camera2_autofocus_pane_g2

0x8148,	// (0x0003b596) camera2_autofocus_pane_g3_ParamLimits

0x8148,	// (0x0003b596) camera2_autofocus_pane_g3

0x8154,	// (0x0003b5a2) camera2_autofocus_pane_g4_ParamLimits

0x8154,	// (0x0003b5a2) camera2_autofocus_pane_g4

0x8160,	// (0x0003b5ae) camera2_autofocus_pane_g5_ParamLimits

0x8160,	// (0x0003b5ae) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x00042b7a) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x00042b7a) camera2_autofocus_pane_g

0x82da,	// (0x0003b728) camera2_autofocus_pane_cp_g2

0x82e2,	// (0x0003b730) camera2_autofocus_pane_cp_g3

0x82ea,	// (0x0003b738) camera2_autofocus_pane_cp_g4

0x82f2,	// (0x0003b740) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x00042be0) camera2_autofocus_pane_cp_g

0x88f9,	// (0x0003bd47) popup_dialer_spcha_window

0x44fd,	// (0x0003794b) bg_popup_sub_pane_cp07

0xec5d,	// (0x000420ab) list_spcha_pane

0xec65,	// (0x000420b3) list_single_spcha_pane_ParamLimits

0xec65,	// (0x000420b3) list_single_spcha_pane

0x44fd,	// (0x0003794b) list_highlight_pane_cp06

0xec76,	// (0x000420c4) list_single_spcha_pane_t1

0xde53,	// (0x000412a1) popup_call2_audio_out_window_g4_ParamLimits

0xde53,	// (0x000412a1) popup_call2_audio_out_window_g4

0x44fd,	// (0x0003794b) main_imed2_pane

0xe43a,	// (0x00041888) popup_imed_adjust2_window

0x77f7,	// (0x0003ac45) popup_imed_trans_window_ParamLimits

0x77f7,	// (0x0003ac45) popup_imed_trans_window

0xe6c1,	// (0x00041b0f) popup_blid_sat_info2_window_t1

0xe6cf,	// (0x00041b1d) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x00042b0f) popup_blid_sat_info2_window_t

0x8c0f,	// (0x0003c05d) aid_size_cell_colour_35

0x8c29,	// (0x0003c077) aid_size_cell_colour_112

0x8c40,	// (0x0003c08e) aid_size_cell_effect

0x776b,	// (0x0003abb9) bg_tb_trans_pane_cp02

0xd9a2,	// (0x00040df0) heading_imed_pane

0x8c5a,	// (0x0003c0a8) listscroll_imed_pane

0xec84,	// (0x000420d2) heading_imed_pane_g1

0xec8c,	// (0x000420da) heading_imed_pane_t1

0xec9a,	// (0x000420e8) grid_imed_colour_35_pane_ParamLimits

0xec9a,	// (0x000420e8) grid_imed_colour_35_pane

0x8c66,	// (0x0003c0b4) grid_imed_effect_pane

0xecb6,	// (0x00042104) list_imed_aspect_pane

0x8c76,	// (0x0003c0c4) scroll_pane_cp027_ParamLimits

0x8c76,	// (0x0003c0c4) scroll_pane_cp027

0x8c82,	// (0x0003c0d0) cell_imed_effect_pane_ParamLimits

0x8c82,	// (0x0003c0d0) cell_imed_effect_pane

0xecbe,	// (0x0004210c) cell_imed_colour_pane_ParamLimits

0xecbe,	// (0x0004210c) cell_imed_colour_pane

0xed08,	// (0x00042156) cell_imed_colour_pane_g1_ParamLimits

0xed08,	// (0x00042156) cell_imed_colour_pane_g1

0xed19,	// (0x00042167) hgihlgiht_grid_pane_cp016_ParamLimits

0xed19,	// (0x00042167) hgihlgiht_grid_pane_cp016

0x8c9e,	// (0x0003c0ec) cell_imed_effect_pane_g1

0x8ca6,	// (0x0003c0f4) grid_highlight_pane_cp017

0xed2a,	// (0x00042178) list_imed_single_pane_ParamLimits

0xed2a,	// (0x00042178) list_imed_single_pane

0x44fd,	// (0x0003794b) list_highlight_pane_cp07

0xed3e,	// (0x0004218c) list_imed_aspect_pane_comp1_t1

0xe40e,	// (0x0004185c) bg_tb_trans_pane_cp05

0xed60,	// (0x000421ae) popup_imed_adjust2_window_g1

0xed87,	// (0x000421d5) popup_imed_adjust2_window_t1

0xed9f,	// (0x000421ed) slider_imed_adjust_pane

0xedb3,	// (0x00042201) slider_imed_adjust_pane_g1

0xedc3,	// (0x00042211) slider_imed_adjust_pane_g2

0xedd3,	// (0x00042221) slider_imed_adjust_pane_g3

0xede4,	// (0x00042232) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x00042c4e) slider_imed_adjust_pane_g

0x8caf,	// (0x0003c0fd) aid_size_cell_clipart2

0x8cbb,	// (0x0003c109) grid_imed_clipart_pane

0xedf5,	// (0x00042243) scroll_pane_cp031

0x8cc5,	// (0x0003c113) cell_imed_clipart_pane_ParamLimits

0x8cc5,	// (0x0003c113) cell_imed_clipart_pane

0x8ce3,	// (0x0003c131) cell_imed_clipart_pane_g1

0x44fd,	// (0x0003794b) grid_highlight_pane_cp014

0x8a1f,	// (0x0003be6d) main_clock2_pane_g1_ParamLimits

0x8a1f,	// (0x0003be6d) main_clock2_pane_g1

0x8b10,	// (0x0003bf5e) aid_call2_pane_cp10

0x8b22,	// (0x0003bf70) aid_call_pane_cp10

0xcf14,	// (0x00040362) popup_clock_analogue_window_cp10_g1

0xcf14,	// (0x00040362) popup_clock_analogue_window_cp10_g2

0x8b34,	// (0x0003bf82) popup_clock_analogue_window_cp10_g3

0x8b34,	// (0x0003bf82) popup_clock_analogue_window_cp10_g4

0xcf14,	// (0x00040362) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x00042c3c) popup_clock_analogue_window_cp10_g

0x8b46,	// (0x0003bf94) popup_clock_analogue_window_cp10_t1

0x8b77,	// (0x0003bfc5) clock_digital_number_pane_cp10_ParamLimits

0x8b77,	// (0x0003bfc5) clock_digital_number_pane_cp10

0x8b8f,	// (0x0003bfdd) clock_digital_number_pane_cp11_ParamLimits

0x8b8f,	// (0x0003bfdd) clock_digital_number_pane_cp11

0x8ba7,	// (0x0003bff5) clock_digital_number_pane_cp12_ParamLimits

0x8ba7,	// (0x0003bff5) clock_digital_number_pane_cp12

0x8bbf,	// (0x0003c00d) clock_digital_number_pane_cp13_ParamLimits

0x8bbf,	// (0x0003c00d) clock_digital_number_pane_cp13

0x8bd7,	// (0x0003c025) clock_digital_separator_pane_cp10_ParamLimits

0x8bd7,	// (0x0003c025) clock_digital_separator_pane_cp10

0x8bef,	// (0x0003c03d) popup_clock_digital_window_cp02_t1_ParamLimits

0x8bef,	// (0x0003c03d) popup_clock_digital_window_cp02_t1

0xc4ae,	// (0x0003f8fc) clock_digital_number_pane_cp10_g1

0xc4ae,	// (0x0003f8fc) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x00042c57) clock_digital_number_pane_cp10_g

0xc4ae,	// (0x0003f8fc) clock_digital_separator_pane_cp10_g1

0xc4ae,	// (0x0003f8fc) clock_digital_separator_pane_g2_cp10

0xcfaf,	// (0x000403fd) navi_pane_vded_g4

0xcfb8,	// (0x00040406) navi_pane_vded_g5

0xcfc1,	// (0x0004040f) navi_pane_vded_t1

0x44fd,	// (0x0003794b) main_vded_pane

0x8cec,	// (0x0003c13a) main_vded_pane_g1

0x8cf8,	// (0x0003c146) main_vded_pane_g2

0x8d02,	// (0x0003c150) main_vded_pane_g3

0x0002,

0xf80e,	// (0x00042c5c) main_vded_pane_g

0x8d0c,	// (0x0003c15a) main_vded_pane_t1

0x8d1a,	// (0x0003c168) main_vded_pane_t2

0x0001,

0xf815,	// (0x00042c63) main_vded_pane_t

0x8d28,	// (0x0003c176) vded_slider_pane

0x8d32,	// (0x0003c180) vded_video_pane

0xedfd,	// (0x0004224b) vded_video_pane_g1

0x8d3e,	// (0x0003c18c) vded_video_pane_g2

0xe891,	// (0x00041cdf) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00042c68) vded_video_pane_g

0xee07,	// (0x00042255) vded_slider_pane_g1

0xe5d6,	// (0x00041a24) vded_slider_pane_g2

0xee10,	// (0x0004225e) vded_slider_pane_g3

0xee19,	// (0x00042267) vded_slider_pane_g4

0xee22,	// (0x00042270) vded_slider_pane_g5

0x0004,

0xf821,	// (0x00042c6f) vded_slider_pane_g

0x882a,	// (0x0003bc78) mup3_rocker_pane_ParamLimits

0x882a,	// (0x0003bc78) mup3_rocker_pane

0x8d47,	// (0x0003c195) mup3_control_keys_pane_g1

0x8d4f,	// (0x0003c19d) mup3_control_keys_pane_g2

0x8d57,	// (0x0003c1a5) mup3_control_keys_pane_g3

0x8d5f,	// (0x0003c1ad) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x00042c7a) mup3_control_keys_pane_g

0x478a,	// (0x00037bd8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x478a,	// (0x00037bd8) popup_toolbar2_fixed_window_cp01

0x8846,	// (0x0003bc94) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8846,	// (0x0003bc94) popup_toolbar2_fixed_window_cp02

0xd76e,	// (0x00040bbc) popup_call2_audio_second_window_t4_ParamLimits

0xd76e,	// (0x00040bbc) popup_call2_audio_second_window_t4

0xdcc0,	// (0x0004110e) popup_call2_audio_first_window_t6_ParamLimits

0xdcc0,	// (0x0004110e) popup_call2_audio_first_window_t6

0xdf56,	// (0x000413a4) popup_call2_audio_out_window_t6_ParamLimits

0xdf56,	// (0x000413a4) popup_call2_audio_out_window_t6

0x44fd,	// (0x0003794b) main_vitu_pane

0x8d6f,	// (0x0003c1bd) aid_size_cell_itu_ParamLimits

0x8d6f,	// (0x0003c1bd) aid_size_cell_itu

0x47b2,	// (0x00037c00) bg_popup_window_pane_cp08_ParamLimits

0x47b2,	// (0x00037c00) bg_popup_window_pane_cp08

0x8d7d,	// (0x0003c1cb) field_vitu_entry_pane_ParamLimits

0x8d7d,	// (0x0003c1cb) field_vitu_entry_pane

0x8d8c,	// (0x0003c1da) grid_vitu_function_pane_ParamLimits

0x8d8c,	// (0x0003c1da) grid_vitu_function_pane

0x8d9c,	// (0x0003c1ea) grid_vitu_itu_pane_ParamLimits

0x8d9c,	// (0x0003c1ea) grid_vitu_itu_pane

0x8daa,	// (0x0003c1f8) cell_vitu_itu_pane_ParamLimits

0x8daa,	// (0x0003c1f8) cell_vitu_itu_pane

0x8dc1,	// (0x0003c20f) cell_vitu_function_pane_ParamLimits

0x8dc1,	// (0x0003c20f) cell_vitu_function_pane

0x776b,	// (0x0003abb9) bg_popup_sub_pane_cp08_ParamLimits

0x776b,	// (0x0003abb9) bg_popup_sub_pane_cp08

0x8dd5,	// (0x0003c223) field_vitu_entry_pane_t1_ParamLimits

0x8dd5,	// (0x0003c223) field_vitu_entry_pane_t1

0xee43,	// (0x00042291) field_vitu_entry_pane_t2_ParamLimits

0xee43,	// (0x00042291) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x00042c88) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x00042c88) field_vitu_entry_pane_t

0xee60,	// (0x000422ae) bg_button_pane_cp05_ParamLimits

0xee60,	// (0x000422ae) bg_button_pane_cp05

0x8dee,	// (0x0003c23c) cell_vitu_itu_pane_g1

0x8e06,	// (0x0003c254) cell_vitu_itu_pane_t1_ParamLimits

0x8e06,	// (0x0003c254) cell_vitu_itu_pane_t1

0x8e18,	// (0x0003c266) cell_vitu_itu_pane_t2_ParamLimits

0x8e18,	// (0x0003c266) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x00042c8d) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x00042c8d) cell_vitu_itu_pane_t

0xee6e,	// (0x000422bc) bg_button_pane_cp07

0x8e5b,	// (0x0003c2a9) cell_vitu_function_pane_g1

0x4c13,	// (0x00038061) main_calc_pane_g1

0x4543,	// (0x00037991) aid_visual_content_pane

0x44fd,	// (0x0003794b) main_vradio_pane

0x8e64,	// (0x0003c2b2) main_vradio_pane_g1_ParamLimits

0x8e64,	// (0x0003c2b2) main_vradio_pane_g1

0xee78,	// (0x000422c6) main_vradio_pane_g2_ParamLimits

0xee78,	// (0x000422c6) main_vradio_pane_g2

0x0001,

0xf846,	// (0x00042c94) main_vradio_pane_g_ParamLimits

0xf846,	// (0x00042c94) main_vradio_pane_g

0x8e72,	// (0x0003c2c0) main_vradio_pane_t1_ParamLimits

0x8e72,	// (0x0003c2c0) main_vradio_pane_t1

0x8e84,	// (0x0003c2d2) main_vradio_pane_t2_ParamLimits

0x8e84,	// (0x0003c2d2) main_vradio_pane_t2

0xee85,	// (0x000422d3) main_vradio_pane_t3_ParamLimits

0xee85,	// (0x000422d3) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x00042c99) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x00042c99) main_vradio_pane_t

0x8e96,	// (0x0003c2e4) vradio_rocker_control_pane_ParamLimits

0x8e96,	// (0x0003c2e4) vradio_rocker_control_pane

0x8ea2,	// (0x0003c2f0) vradio_station_info_pane_ParamLimits

0x8ea2,	// (0x0003c2f0) vradio_station_info_pane

0xee99,	// (0x000422e7) vradio_frequency_info_pane_ParamLimits

0xee99,	// (0x000422e7) vradio_frequency_info_pane

0xe891,	// (0x00041cdf) vradio_station_info_pane_g1

0xeea8,	// (0x000422f6) vradio_station_info_pane_t1_ParamLimits

0xeea8,	// (0x000422f6) vradio_station_info_pane_t1

0xeeca,	// (0x00042318) vradio_station_info_pane_t2_ParamLimits

0xeeca,	// (0x00042318) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x00042ca0) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x00042ca0) vradio_station_info_pane_t

0xeedc,	// (0x0004232a) vradio_tuning_pane

0xeee4,	// (0x00042332) vradio_rocker_control_pane_g1

0xeeec,	// (0x0004233a) vradio_rocker_control_pane_g2

0xeef4,	// (0x00042342) vradio_rocker_control_pane_g3

0xeefc,	// (0x0004234a) vradio_rocker_control_pane_g4

0xef04,	// (0x00042352) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x00042ca5) vradio_rocker_control_pane_g

0x8eaf,	// (0x0003c2fd) vradio_frequency_info_pane_g1

0xef0c,	// (0x0004235a) vradio_frequency_info_pane_t1_ParamLimits

0xef0c,	// (0x0004235a) vradio_frequency_info_pane_t1

0x8eb9,	// (0x0003c307) vradio_tuning_pane_g1

0x8ec4,	// (0x0003c312) vradio_tuning_pane_t1

0x458c,	// (0x000379da) area_side_right_pane_ParamLimits

0x458c,	// (0x000379da) area_side_right_pane

0xe3d5,	// (0x00041823) status_small_pane_g1

0xe3dd,	// (0x0004182b) status_small_pane_g2

0xe3e6,	// (0x00041834) status_small_pane_g3

0xe3ef,	// (0x0004183d) status_small_pane_g4

0x0003,

0xf617,	// (0x00042a65) status_small_pane_g

0xe3f8,	// (0x00041846) status_small_pane_t1

0x44fd,	// (0x0003794b) main_video3_pane

0xef20,	// (0x0004236e) cams_zoom_vslider_pane

0xef28,	// (0x00042376) image3_wide_pane_ParamLimits

0xef28,	// (0x00042376) image3_wide_pane

0xef42,	// (0x00042390) image3_wide_small_pane

0xef4e,	// (0x0004239c) main_video3_pane_g1_ParamLimits

0xef4e,	// (0x0004239c) main_video3_pane_g1

0xef6a,	// (0x000423b8) main_video3_pane_g2_ParamLimits

0xef6a,	// (0x000423b8) main_video3_pane_g2

0x0001,

0xf862,	// (0x00042cb0) main_video3_pane_g_ParamLimits

0xf862,	// (0x00042cb0) main_video3_pane_g

0xef86,	// (0x000423d4) main_video3_pane_t1_ParamLimits

0xef86,	// (0x000423d4) main_video3_pane_t1

0xefb1,	// (0x000423ff) main_video3_pane_t2_ParamLimits

0xefb1,	// (0x000423ff) main_video3_pane_t2

0xefde,	// (0x0004242c) main_video3_pane_t3_ParamLimits

0xefde,	// (0x0004242c) main_video3_pane_t3

0x0002,

0xf867,	// (0x00042cb5) main_video3_pane_t_ParamLimits

0xf867,	// (0x00042cb5) main_video3_pane_t

0xf00b,	// (0x00042459) cams_zoom_vslider_pane_g1

0xf014,	// (0x00042462) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x00042cbc) cams_zoom_vslider_pane_g

0xf01c,	// (0x0004246a) small_slider_vertical_pane

0xe891,	// (0x00041cdf) small_slider_vertical_pane_g1

0xe891,	// (0x00041cdf) small_slider_vertical_pane_g2

0xf024,	// (0x00042472) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x00042cc1) small_slider_vertical_pane_g

0x44fd,	// (0x0003794b) main_hwr_training_pane

0xf02d,	// (0x0004247b) hwr_training_instruct_pane_ParamLimits

0xf02d,	// (0x0004247b) hwr_training_instruct_pane

0x8ed3,	// (0x0003c321) hwr_training_navi_pane_ParamLimits

0x8ed3,	// (0x0003c321) hwr_training_navi_pane

0x8eed,	// (0x0003c33b) hwr_training_write_pane_ParamLimits

0x8eed,	// (0x0003c33b) hwr_training_write_pane

0x44fd,	// (0x0003794b) bg_frame_shadow_pane

0xf064,	// (0x000424b2) hwr_training_write_pane_g1

0xf06c,	// (0x000424ba) hwr_training_write_pane_g2

0xf074,	// (0x000424c2) hwr_training_write_pane_g3

0xf07c,	// (0x000424ca) hwr_training_write_pane_g4

0xf084,	// (0x000424d2) hwr_training_write_pane_g5

0xf08c,	// (0x000424da) hwr_training_write_pane_g6

0xf094,	// (0x000424e2) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x00042cc8) hwr_training_write_pane_g

0x8f25,	// (0x0003c373) hwr_training_navi_pane_g1_ParamLimits

0x8f25,	// (0x0003c373) hwr_training_navi_pane_g1

0x8f37,	// (0x0003c385) hwr_training_navi_pane_g2_ParamLimits

0x8f37,	// (0x0003c385) hwr_training_navi_pane_g2

0x8f49,	// (0x0003c397) hwr_training_navi_pane_g3_ParamLimits

0x8f49,	// (0x0003c397) hwr_training_navi_pane_g3

0x8f59,	// (0x0003c3a7) hwr_training_navi_pane_g4_ParamLimits

0x8f59,	// (0x0003c3a7) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x00042cd7) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x00042cd7) hwr_training_navi_pane_g

0x8f73,	// (0x0003c3c1) hwr_training_navi_pane_t1

0x8f81,	// (0x0003c3cf) list_single_hwr_training_instruct_pane_ParamLimits

0x8f81,	// (0x0003c3cf) list_single_hwr_training_instruct_pane

0xf09c,	// (0x000424ea) list_single_hwr_training_instruct_pane_t1

0xe7d1,	// (0x00041c1f) bg_frame_shadow_pane_g1

0xf0ab,	// (0x000424f9) bg_frame_shadow_pane_g2

0xf0b3,	// (0x00042501) bg_frame_shadow_pane_g3

0xf0bb,	// (0x00042509) bg_frame_shadow_pane_g4

0xf0c3,	// (0x00042511) bg_frame_shadow_pane_g5

0xf0cb,	// (0x00042519) bg_frame_shadow_pane_g6

0xf0d3,	// (0x00042521) bg_frame_shadow_pane_g7

0xc654,	// (0x0003faa2) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x00042ce2) bg_frame_shadow_pane_g

0x44fd,	// (0x0003794b) main_video_tele_dialer_pane

0x8f9a,	// (0x0003c3e8) aid_size_cell_video_keypad_ParamLimits

0x8f9a,	// (0x0003c3e8) aid_size_cell_video_keypad

0x8faa,	// (0x0003c3f8) grid_video_dialer_keypad_pane_ParamLimits

0x8faa,	// (0x0003c3f8) grid_video_dialer_keypad_pane

0x8fdc,	// (0x0003c42a) video_down_pane_cp_ParamLimits

0x8fdc,	// (0x0003c42a) video_down_pane_cp

0x9004,	// (0x0003c452) cell_video_dialer_keypad_pane_ParamLimits

0x9004,	// (0x0003c452) cell_video_dialer_keypad_pane

0xf0db,	// (0x00042529) bg_button_pane_cp08_ParamLimits

0xf0db,	// (0x00042529) bg_button_pane_cp08

0x901b,	// (0x0003c469) cell_video_dialer_keypad_pane_g1_ParamLimits

0x901b,	// (0x0003c469) cell_video_dialer_keypad_pane_g1

0x881e,	// (0x0003bc6c) mup3_rocker2_pane_ParamLimits

0x881e,	// (0x0003bc6c) mup3_rocker2_pane

0xe891,	// (0x00041cdf) mup3_rocker2_pane_g1

0x7779,	// (0x0003abc7) main_dialer2_pane

0x44fd,	// (0x0003794b) main_mp4_pane

0x905a,	// (0x0003c4a8) main_mp4_pane_g1_ParamLimits

0x905a,	// (0x0003c4a8) main_mp4_pane_g1

0x9068,	// (0x0003c4b6) main_mp4_pane_g2_ParamLimits

0x9068,	// (0x0003c4b6) main_mp4_pane_g2

0x9076,	// (0x0003c4c4) main_mp4_pane_g3_ParamLimits

0x9076,	// (0x0003c4c4) main_mp4_pane_g3

0x90c9,	// (0x0003c517) main_mp4_pane_g4_ParamLimits

0x90c9,	// (0x0003c517) main_mp4_pane_g4

0x90f1,	// (0x0003c53f) main_mp4_pane_g5_ParamLimits

0x90f1,	// (0x0003c53f) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x00042d02) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x00042d02) main_mp4_pane_g

0x9141,	// (0x0003c58f) main_mp4_pane_t1_ParamLimits

0x9141,	// (0x0003c58f) main_mp4_pane_t1

0x919d,	// (0x0003c5eb) main_mp4_pane_t2_ParamLimits

0x919d,	// (0x0003c5eb) main_mp4_pane_t2

0x009b,	// (0x000334e9) main_mp4_pane_t3_ParamLimits

0x009b,	// (0x000334e9) main_mp4_pane_t3

0x91ef,	// (0x0003c63d) main_mp4_pane_t4_ParamLimits

0x91ef,	// (0x0003c63d) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x00042d0f) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x00042d0f) main_mp4_pane_t

0x922f,	// (0x0003c67d) mp4_progress_pane_ParamLimits

0x922f,	// (0x0003c67d) mp4_progress_pane

0x9279,	// (0x0003c6c7) mp4_rocker_pane_ParamLimits

0x9279,	// (0x0003c6c7) mp4_rocker_pane

0x016f,	// (0x000335bd) mp4_progress_pane_t1

0x0188,	// (0x000335d6) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x00042d18) mp4_progress_pane_t

0x01a1,	// (0x000335ef) mup_progress_pane_cp04

0xe891,	// (0x00041cdf) mp4_rocker_pane_g1

0x929b,	// (0x0003c6e9) aid_cell_size_keypad2_ParamLimits

0x929b,	// (0x0003c6e9) aid_cell_size_keypad2

0x92ab,	// (0x0003c6f9) dialer2_ne_pane_ParamLimits

0x92ab,	// (0x0003c6f9) dialer2_ne_pane

0x92b7,	// (0x0003c705) grid_dialer2_keypad_pane_ParamLimits

0x92b7,	// (0x0003c705) grid_dialer2_keypad_pane

0x0c0a,	// (0x00034058) bg_popup_call_pane_cp07_ParamLimits

0x0c0a,	// (0x00034058) bg_popup_call_pane_cp07

0x92c5,	// (0x0003c713) dialer2_ne_pane_t1_ParamLimits

0x92c5,	// (0x0003c713) dialer2_ne_pane_t1

0x92ea,	// (0x0003c738) cell_dialer2_keypad_pane_ParamLimits

0x92ea,	// (0x0003c738) cell_dialer2_keypad_pane

0x01c9,	// (0x00033617) bg_button_pane_pane_cp04_ParamLimits

0x01c9,	// (0x00033617) bg_button_pane_pane_cp04

0x9301,	// (0x0003c74f) cell_dialer2_keypad_pane_g1_ParamLimits

0x9301,	// (0x0003c74f) cell_dialer2_keypad_pane_g1

0x56a0,	// (0x00038aee) aid_placing_vt_set_content_ParamLimits

0x56a0,	// (0x00038aee) aid_placing_vt_set_content

0x56c8,	// (0x00038b16) aid_placing_vt_set_title_ParamLimits

0x56c8,	// (0x00038b16) aid_placing_vt_set_title

0x44fd,	// (0x0003794b) main_image3_pane

0x939b,	// (0x0003c7e9) area_side_right_pane_cp01_ParamLimits

0x939b,	// (0x0003c7e9) area_side_right_pane_cp01

0x11d4,	// (0x00034622) main_image3_pane_g1_ParamLimits

0x11d4,	// (0x00034622) main_image3_pane_g1

0x93ca,	// (0x0003c818) main_image3_pane_g2_ParamLimits

0x93ca,	// (0x0003c818) main_image3_pane_g2

0x93e3,	// (0x0003c831) main_image3_pane_g3_ParamLimits

0x93e3,	// (0x0003c831) main_image3_pane_g3

0x93fc,	// (0x0003c84a) main_image3_pane_g4_ParamLimits

0x93fc,	// (0x0003c84a) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x00042d27) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x00042d27) main_image3_pane_g

0x9415,	// (0x0003c863) main_image3_pane_t1_ParamLimits

0x9415,	// (0x0003c863) main_image3_pane_t1

0x943a,	// (0x0003c888) main_image3_pane_t2_ParamLimits

0x943a,	// (0x0003c888) main_image3_pane_t2

0x9459,	// (0x0003c8a7) main_image3_pane_t3_ParamLimits

0x9459,	// (0x0003c8a7) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x00042d30) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x00042d30) main_image3_pane_t

0x47b2,	// (0x00037c00) grid_sctrl_middle_pane_cp01_ParamLimits

0x47b2,	// (0x00037c00) grid_sctrl_middle_pane_cp01

0x94ba,	// (0x0003c908) cell_sctrl_middle_pane_cp01_ParamLimits

0x94ba,	// (0x0003c908) cell_sctrl_middle_pane_cp01

0x94cb,	// (0x0003c919) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x94cb,	// (0x0003c919) cell_sctrl_middle_pane_cp01_g1

0x44fd,	// (0x0003794b) main_call4_pane

0x94d8,	// (0x0003c926) aid_size_button_call4_ParamLimits

0x94d8,	// (0x0003c926) aid_size_button_call4

0x950a,	// (0x0003c958) call4_windows_pane_ParamLimits

0x950a,	// (0x0003c958) call4_windows_pane

0x9526,	// (0x0003c974) grid_call4_button_pane_ParamLimits

0x9526,	// (0x0003c974) grid_call4_button_pane

0x0209,	// (0x00033657) call4_windows_conf_pane

0x954a,	// (0x0003c998) popup_call4_audio_first_window_ParamLimits

0x954a,	// (0x0003c998) popup_call4_audio_first_window

0x9576,	// (0x0003c9c4) popup_call4_audio_second_window_ParamLimits

0x9576,	// (0x0003c9c4) popup_call4_audio_second_window

0x0246,	// (0x00033694) popup_call4_audio_wait_window_ParamLimits

0x0246,	// (0x00033694) popup_call4_audio_wait_window

0x958a,	// (0x0003c9d8) cell_call4_button_pane_ParamLimits

0x958a,	// (0x0003c9d8) cell_call4_button_pane

0x95ad,	// (0x0003c9fb) bg_button_pane_cp09_ParamLimits

0x95ad,	// (0x0003c9fb) bg_button_pane_cp09

0x95b9,	// (0x0003ca07) cell_call4_button_pane_g1_ParamLimits

0x95b9,	// (0x0003ca07) cell_call4_button_pane_g1

0x95c6,	// (0x0003ca14) cell_call4_button_pane_t1_ParamLimits

0x95c6,	// (0x0003ca14) cell_call4_button_pane_t1

0x028e,	// (0x000336dc) popup_call4_audio_conf_window_ParamLimits

0x028e,	// (0x000336dc) popup_call4_audio_conf_window

0x8853,	// (0x0003bca1) mup3_progress_pane_t1_ParamLimits

0x886a,	// (0x0003bcb8) mup3_progress_pane_t2_ParamLimits

0xeb3c,	// (0x00041f8a) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x00042c09) mup3_progress_pane_t_ParamLimits

0xeb53,	// (0x00041fa1) mup_progress_pane_cp03_ParamLimits

0x8d67,	// (0x0003c1b5) mup3_control_keys_pane_g4_copy1

0x925d,	// (0x0003c6ab) mp4_rocker2_pane_ParamLimits

0x925d,	// (0x0003c6ab) mp4_rocker2_pane

0x02b0,	// (0x000336fe) mp4_rocker2_pane_g1

0x02a8,	// (0x000336f6) mp4_rocker2_pane_g2

0x95d8,	// (0x0003ca26) mp4_rocker2_pane_g3

0x95e0,	// (0x0003ca2e) mp4_rocker2_pane_g4

0x95e8,	// (0x0003ca36) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x00042d39) mp4_rocker2_pane_g

0x44fd,	// (0x0003794b) main_camera4_pane

0x44fd,	// (0x0003794b) main_video4_pane

0x8fb8,	// (0x0003c406) main_video_tele_dialer_pane_t1_ParamLimits

0x8fb8,	// (0x0003c406) main_video_tele_dialer_pane_t1

0x8fca,	// (0x0003c418) main_video_tele_dialer_pane_t2_ParamLimits

0x8fca,	// (0x0003c418) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x00042cf3) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x00042cf3) main_video_tele_dialer_pane_t

0x9608,	// (0x0003ca56) cam4_autofocus_pane_ParamLimits

0x9608,	// (0x0003ca56) cam4_autofocus_pane

0x9620,	// (0x0003ca6e) cam4_image_uncrop_pane_ParamLimits

0x9620,	// (0x0003ca6e) cam4_image_uncrop_pane

0x9639,	// (0x0003ca87) cam4_indicators_pane_ParamLimits

0x9639,	// (0x0003ca87) cam4_indicators_pane

0x9655,	// (0x0003caa3) main_camera4_pane_g1_ParamLimits

0x9655,	// (0x0003caa3) main_camera4_pane_g1

0x9661,	// (0x0003caaf) main_camera4_pane_g2_ParamLimits

0x9661,	// (0x0003caaf) main_camera4_pane_g2

0x9661,	// (0x0003caaf) main_camera4_pane_g3_ParamLimits

0x9661,	// (0x0003caaf) main_camera4_pane_g3

0x966d,	// (0x0003cabb) main_camera4_pane_g4_ParamLimits

0x966d,	// (0x0003cabb) main_camera4_pane_g4

0x9679,	// (0x0003cac7) main_camera4_pane_g5_ParamLimits

0x9679,	// (0x0003cac7) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x00042d44) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x00042d44) main_camera4_pane_g

0x9693,	// (0x0003cae1) main_camera4_pane_t1_ParamLimits

0x9693,	// (0x0003cae1) main_camera4_pane_t1

0xeac1,	// (0x00041f0f) bg_tb_trans_pane_cp06

0x96e5,	// (0x0003cb33) cam4_indicators_pane_g1

0x96f5,	// (0x0003cb43) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x00042d5f) cam4_indicators_pane_g

0x970d,	// (0x0003cb5b) cam4_indicators_pane_t1

0x9739,	// (0x0003cb87) main_video4_pane_g1_ParamLimits

0x9739,	// (0x0003cb87) main_video4_pane_g1

0x9745,	// (0x0003cb93) main_video4_pane_g2_ParamLimits

0x9745,	// (0x0003cb93) main_video4_pane_g2

0x9751,	// (0x0003cb9f) main_video4_pane_g3_ParamLimits

0x9751,	// (0x0003cb9f) main_video4_pane_g3

0x975d,	// (0x0003cbab) main_video4_pane_g4_ParamLimits

0x975d,	// (0x0003cbab) main_video4_pane_g4

0x0004,

0xf918,	// (0x00042d66) main_video4_pane_g_ParamLimits

0xf918,	// (0x00042d66) main_video4_pane_g

0x977f,	// (0x0003cbcd) vid4_indicators_pane_ParamLimits

0x977f,	// (0x0003cbcd) vid4_indicators_pane

0x979d,	// (0x0003cbeb) video4_image_uncrop_cif_pane_ParamLimits

0x979d,	// (0x0003cbeb) video4_image_uncrop_cif_pane

0x97ac,	// (0x0003cbfa) video4_image_uncrop_nhd_pane_ParamLimits

0x97ac,	// (0x0003cbfa) video4_image_uncrop_nhd_pane

0x9620,	// (0x0003ca6e) video4_image_uncrop_vga_pane_ParamLimits

0x9620,	// (0x0003ca6e) video4_image_uncrop_vga_pane

0x776b,	// (0x0003abb9) bg_tb_trans_pane_cp07

0x97c5,	// (0x0003cc13) vid4_indicators_pane_g1

0x97d7,	// (0x0003cc25) vid4_indicators_pane_g2

0x97ea,	// (0x0003cc38) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x00042d71) vid4_indicators_pane_g

0x9817,	// (0x0003cc65) vid4_indicators_pane_t1

0x9832,	// (0x0003cc80) cam4_autofocus_pane_g1

0x983a,	// (0x0003cc88) cam4_autofocus_pane_g2

0x9842,	// (0x0003cc90) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x00042d7c) cam4_autofocus_pane_g

0x984a,	// (0x0003cc98) cam4_autofocus_pane_g3_copy1

0x8fe8,	// (0x0003c436) video_down_pane_cp_t1

0x8ff6,	// (0x0003c444) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x00042cf8) video_down_pane_cp_t

0x47b2,	// (0x00037c00) popup_vitu2_window_ParamLimits

0x47b2,	// (0x00037c00) popup_vitu2_window

0x9852,	// (0x0003cca0) aid_size_cell2_itu2_ParamLimits

0x9852,	// (0x0003cca0) aid_size_cell2_itu2

0x9874,	// (0x0003ccc2) aid_size_cell_itu2_ParamLimits

0x9874,	// (0x0003ccc2) aid_size_cell_itu2

0x0c0a,	// (0x00034058) bg_popup_window_pane_cp09_ParamLimits

0x0c0a,	// (0x00034058) bg_popup_window_pane_cp09

0x98b8,	// (0x0003cd06) field_vitu2_entry_pane_ParamLimits

0x98b8,	// (0x0003cd06) field_vitu2_entry_pane

0x98d8,	// (0x0003cd26) grid_vitu2_function_pane_ParamLimits

0x98d8,	// (0x0003cd26) grid_vitu2_function_pane

0x991c,	// (0x0003cd6a) grid_vitu2_itu_pane_ParamLimits

0x991c,	// (0x0003cd6a) grid_vitu2_itu_pane

0x9990,	// (0x0003cdde) cell_vitu2_itu_pane_ParamLimits

0x9990,	// (0x0003cdde) cell_vitu2_itu_pane

0x99a7,	// (0x0003cdf5) cell_vitu2_function_pane_ParamLimits

0x99a7,	// (0x0003cdf5) cell_vitu2_function_pane

0x037e,	// (0x000337cc) bg_popup_call_pane_cp08_ParamLimits

0x037e,	// (0x000337cc) bg_popup_call_pane_cp08

0x0397,	// (0x000337e5) field_vitu2_entry_pane_g1

0x03a3,	// (0x000337f1) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x00042d83) field_vitu2_entry_pane_g

0x3661,	// (0x00036aaf) field_vitu2_entry_pane_t1_ParamLimits

0x3661,	// (0x00036aaf) field_vitu2_entry_pane_t1

0x3690,	// (0x00036ade) field_vitu2_entry_pane_t2_ParamLimits

0x3690,	// (0x00036ade) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x00042d8a) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x00042d8a) field_vitu2_entry_pane_t

0x99eb,	// (0x0003ce39) bg_button_pane_cp010_ParamLimits

0x99eb,	// (0x0003ce39) bg_button_pane_cp010

0x99f9,	// (0x0003ce47) cell_vitu2_itu_pane_g1

0x9a17,	// (0x0003ce65) cell_vitu2_itu_pane_t1_ParamLimits

0x9a17,	// (0x0003ce65) cell_vitu2_itu_pane_t1

0x36ad,	// (0x00036afb) cell_vitu2_itu_pane_t2_ParamLimits

0x36ad,	// (0x00036afb) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x00042d94) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x00042d94) cell_vitu2_itu_pane_t

0x776b,	// (0x0003abb9) bg_button_pane_cp011

0x9a69,	// (0x0003ceb7) cell_vitu2_function_pane_g1

0x44fd,	// (0x0003794b) main_myfav_hc_pane

0x949b,	// (0x0003c8e9) popup_image3_note_pane_ParamLimits

0x949b,	// (0x0003c8e9) popup_image3_note_pane

0x94a9,	// (0x0003c8f7) popup_image3_tool_bar_pane_ParamLimits

0x94a9,	// (0x0003c8f7) popup_image3_tool_bar_pane

0x371b,	// (0x00036b69) cell_vitu2_itu_pane_t3_ParamLimits

0x371b,	// (0x00036b69) cell_vitu2_itu_pane_t3

0x44fd,	// (0x0003794b) bg_popup_trans_pane

0x03f0,	// (0x0003383e) grid_image3_tool_bar_pane

0x03fa,	// (0x00033848) bg_popup_trans_pane_g1

0xc995,	// (0x0003fde3) bg_popup_trans_pane_g2

0x0402,	// (0x00033850) bg_popup_trans_pane_g3

0x040a,	// (0x00033858) bg_popup_trans_pane_g4

0x0412,	// (0x00033860) bg_popup_trans_pane_g5

0x041a,	// (0x00033868) bg_popup_trans_pane_g6

0x0422,	// (0x00033870) bg_popup_trans_pane_g7

0x042a,	// (0x00033878) bg_popup_trans_pane_g8

0xc975,	// (0x0003fdc3) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x00042d9b) bg_popup_trans_pane_g

0x0432,	// (0x00033880) cell_image3_tool_bar_pane_ParamLimits

0x0432,	// (0x00033880) cell_image3_tool_bar_pane

0xe891,	// (0x00041cdf) cell_image3_tool_bar_pane_g1

0x44fd,	// (0x0003794b) bg_popup_trans_pane_cp1

0x0448,	// (0x00033896) popup_image3_note_pane_t1

0x0456,	// (0x000338a4) popup_image3_note_pane_t2

0x0464,	// (0x000338b2) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x00042dae) popup_image3_note_pane_t

0x0474,	// (0x000338c2) popup_image3_note_pane_t3_copy1

0x9a7d,	// (0x0003cecb) bg_myfav_hc_instruction_pane_ParamLimits

0x9a7d,	// (0x0003cecb) bg_myfav_hc_instruction_pane

0x9a95,	// (0x0003cee3) cell_myfav_contact_pane_ParamLimits

0x9a95,	// (0x0003cee3) cell_myfav_contact_pane

0x9aaf,	// (0x0003cefd) cell_myfav_contact_pane_cp1_ParamLimits

0x9aaf,	// (0x0003cefd) cell_myfav_contact_pane_cp1

0x9ac7,	// (0x0003cf15) cell_myfav_contact_pane_cp2_ParamLimits

0x9ac7,	// (0x0003cf15) cell_myfav_contact_pane_cp2

0x9adf,	// (0x0003cf2d) cell_myfav_contact_pane_cp3_ParamLimits

0x9adf,	// (0x0003cf2d) cell_myfav_contact_pane_cp3

0x9af6,	// (0x0003cf44) cell_myfav_contact_pane_cp4_ParamLimits

0x9af6,	// (0x0003cf44) cell_myfav_contact_pane_cp4

0x9b0c,	// (0x0003cf5a) cell_myfav_contact_pane_cp5_ParamLimits

0x9b0c,	// (0x0003cf5a) cell_myfav_contact_pane_cp5

0x9b20,	// (0x0003cf6e) cell_myfav_contact_pane_cp6_ParamLimits

0x9b20,	// (0x0003cf6e) cell_myfav_contact_pane_cp6

0x9b34,	// (0x0003cf82) cell_myfav_contact_pane_cp7_ParamLimits

0x9b34,	// (0x0003cf82) cell_myfav_contact_pane_cp7

0x0482,	// (0x000338d0) listscroll_gen_pane_cp05

0x9b4c,	// (0x0003cf9a) main_myfav_hc_pane_g1_ParamLimits

0x9b4c,	// (0x0003cf9a) main_myfav_hc_pane_g1

0x9b66,	// (0x0003cfb4) main_myfav_hc_pane_g2_ParamLimits

0x9b66,	// (0x0003cfb4) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x00042db5) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x00042db5) main_myfav_hc_pane_g

0x9b98,	// (0x0003cfe6) main_myfav_hc_pane_t1_ParamLimits

0x9b98,	// (0x0003cfe6) main_myfav_hc_pane_t1

0x048b,	// (0x000338d9) main_myfav_hc_pane_t2_ParamLimits

0x048b,	// (0x000338d9) main_myfav_hc_pane_t2

0x049d,	// (0x000338eb) main_myfav_hc_pane_t3_ParamLimits

0x049d,	// (0x000338eb) main_myfav_hc_pane_t3

0x9baf,	// (0x0003cffd) main_myfav_hc_pane_t4_ParamLimits

0x9baf,	// (0x0003cffd) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x00042dbc) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x00042dbc) main_myfav_hc_pane_t

0xe891,	// (0x00041cdf) bg_myfav_hc_instruction_pane_g1

0x04af,	// (0x000338fd) cell_myfav_contact_pane_g1_ParamLimits

0x04af,	// (0x000338fd) cell_myfav_contact_pane_g1

0x04af,	// (0x000338fd) cell_myfav_contact_pane_g2_ParamLimits

0x04af,	// (0x000338fd) cell_myfav_contact_pane_g2

0x04bb,	// (0x00033909) cell_myfav_contact_pane_g3_ParamLimits

0x04bb,	// (0x00033909) cell_myfav_contact_pane_g3

0xeb26,	// (0x00041f74) cell_myfav_contact_pane_g4_ParamLimits

0xeb26,	// (0x00041f74) cell_myfav_contact_pane_g4

0x04c8,	// (0x00033916) cell_myfav_contact_pane_g5_ParamLimits

0x04c8,	// (0x00033916) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x00042dc7) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x00042dc7) cell_myfav_contact_pane_g

0x9b80,	// (0x0003cfce) main_myfav_hc_pane_g3_ParamLimits

0x9b80,	// (0x0003cfce) main_myfav_hc_pane_g3

0x46c4,	// (0x00037b12) popup_adpt_find_window

0x9bd9,	// (0x0003d027) afind_page_pane_ParamLimits

0x9bd9,	// (0x0003d027) afind_page_pane

0x9be6,	// (0x0003d034) aid_size_cell_afind_ParamLimits

0x9be6,	// (0x0003d034) aid_size_cell_afind

0x9c00,	// (0x0003d04e) bg_popup_sub_pane_cp09_ParamLimits

0x9c00,	// (0x0003d04e) bg_popup_sub_pane_cp09

0x9c0d,	// (0x0003d05b) find_pane_cp01_ParamLimits

0x9c0d,	// (0x0003d05b) find_pane_cp01

0x04d4,	// (0x00033922) grid_afind_control_pane_ParamLimits

0x04d4,	// (0x00033922) grid_afind_control_pane

0x9c1a,	// (0x0003d068) grid_afind_pane_ParamLimits

0x9c1a,	// (0x0003d068) grid_afind_pane

0x9c36,	// (0x0003d084) cell_afind_pane_ParamLimits

0x9c36,	// (0x0003d084) cell_afind_pane

0xe891,	// (0x00041cdf) afind_page_pane_g1

0x9c80,	// (0x0003d0ce) afind_page_pane_g2

0x9c89,	// (0x0003d0d7) afind_page_pane_g3

0x0002,

0xf984,	// (0x00042dd2) afind_page_pane_g

0x9c92,	// (0x0003d0e0) afind_page_pane_t1

0x04e8,	// (0x00033936) cell_afind_grid_control_pane_ParamLimits

0x04e8,	// (0x00033936) cell_afind_grid_control_pane

0x01c9,	// (0x00033617) bg_button_pane_cp69_ParamLimits

0x01c9,	// (0x00033617) bg_button_pane_cp69

0x9cb2,	// (0x0003d100) cell_afind_pane_g1_ParamLimits

0x9cb2,	// (0x0003d100) cell_afind_pane_g1

0x9cbf,	// (0x0003d10d) cell_afind_pane_t1_ParamLimits

0x9cbf,	// (0x0003d10d) cell_afind_pane_t1

0xc78a,	// (0x0003fbd8) bg_button_pane_cp72

0x04f7,	// (0x00033945) cell_afind_grid_control_pane_g1

0x72e6,	// (0x0003a734) aid_image_placing_area_ParamLimits

0x72e6,	// (0x0003a734) aid_image_placing_area

0xee2b,	// (0x00042279) field_vitu_entry_pane_g1_ParamLimits

0xee2b,	// (0x00042279) field_vitu_entry_pane_g1

0xee37,	// (0x00042285) field_vitu_entry_pane_g2_ParamLimits

0xee37,	// (0x00042285) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x00042c83) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x00042c83) field_vitu_entry_pane_g

0x8dee,	// (0x0003c23c) cell_vitu_itu_pane_g1_ParamLimits

0x8e3e,	// (0x0003c28c) cell_vitu_itu_pane_t3_ParamLimits

0x8e3e,	// (0x0003c28c) cell_vitu_itu_pane_t3

0x016f,	// (0x000335bd) mp4_progress_pane_t1_ParamLimits

0x0188,	// (0x000335d6) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x00042d18) mp4_progress_pane_t_ParamLimits

0x01a1,	// (0x000335ef) mup_progress_pane_cp04_ParamLimits

0x9bc3,	// (0x0003d011) main_myfav_hc_pane_t5_ParamLimits

0x9bc3,	// (0x0003d011) main_myfav_hc_pane_t5

0x454f,	// (0x0003799d) aid_zoom_text_primary

0x46c4,	// (0x00037b12) popup_adpt_find_window_ParamLimits

0x776b,	// (0x0003abb9) main_cam_set_pane

0x9647,	// (0x0003ca95) cam4_zoom_pane_ParamLimits

0x9647,	// (0x0003ca95) cam4_zoom_pane

0x9cd1,	// (0x0003d11f) main_cam_set_pane_g1_ParamLimits

0x9cd1,	// (0x0003d11f) main_cam_set_pane_g1

0x9cdf,	// (0x0003d12d) main_cam_set_pane_g2_ParamLimits

0x9cdf,	// (0x0003d12d) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x00042dd9) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x00042dd9) main_cam_set_pane_g

0x9ceb,	// (0x0003d139) main_cam_set_pane_t1_ParamLimits

0x9ceb,	// (0x0003d139) main_cam_set_pane_t1

0x9d07,	// (0x0003d155) main_cset_listscroll_pane_ParamLimits

0x9d07,	// (0x0003d155) main_cset_listscroll_pane

0x9d36,	// (0x0003d184) main_cset_slider_pane_ParamLimits

0x9d36,	// (0x0003d184) main_cset_slider_pane

0x0508,	// (0x00033956) main_cset_list_pane_ParamLimits

0x0508,	// (0x00033956) main_cset_list_pane

0x0518,	// (0x00033966) scroll_pane_cp028

0x9d57,	// (0x0003d1a5) aid_area_touch_slider

0x9d73,	// (0x0003d1c1) cset_slider_pane

0x9d9d,	// (0x0003d1eb) main_cset_slider_pane_g1

0x9db2,	// (0x0003d200) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x00042dde) main_cset_slider_pane_g

0x0551,	// (0x0003399f) main_cset_slider_pane_t1

0x9e6e,	// (0x0003d2bc) main_cset_slider_pane_t2

0x9e88,	// (0x0003d2d6) main_cset_slider_pane_t3

0x9ea2,	// (0x0003d2f0) main_cset_slider_pane_t4

0x9ebc,	// (0x0003d30a) main_cset_slider_pane_t5

0x9ed6,	// (0x0003d324) main_cset_slider_pane_t6

0x9eeb,	// (0x0003d339) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x00042e03) main_cset_slider_pane_t

0x9fef,	// (0x0003d43d) cset_list_set_pane_ParamLimits

0x9fef,	// (0x0003d43d) cset_list_set_pane

0xa000,	// (0x0003d44e) aid_position_infowindow_above

0xa008,	// (0x0003d456) aid_position_infowindow_below

0x3768,	// (0x00036bb6) cset_list_set_pane_g1_ParamLimits

0x3768,	// (0x00036bb6) cset_list_set_pane_g1

0x3774,	// (0x00036bc2) cset_list_set_pane_g3_ParamLimits

0x3774,	// (0x00036bc2) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x00042e22) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x00042e22) cset_list_set_pane_g

0x3783,	// (0x00036bd1) cset_list_set_pane_t1_ParamLimits

0x3783,	// (0x00036bd1) cset_list_set_pane_t1

0x776b,	// (0x0003abb9) list_highlight_pane_cp021_ParamLimits

0x776b,	// (0x0003abb9) list_highlight_pane_cp021

0xd117,	// (0x00040565) cset_slider_pane_g1

0xd129,	// (0x00040577) cset_slider_pane_g2

0xd120,	// (0x0004056e) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x00042e27) cset_slider_pane_g

0xa010,	// (0x0003d45e) aid_area_touch_cam4_zoom

0xa018,	// (0x0003d466) cam4_zoom_cont_pane

0xa020,	// (0x0003d46e) cam4_zoom_pane_g1

0xa028,	// (0x0003d476) cam4_zoom_pane_g2

0xa030,	// (0x0003d47e) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x00042e2e) cam4_zoom_pane_g

0x0f5d,	// (0x000343ab) cam4_zoom_cont_pane_g1

0x0f66,	// (0x000343b4) cam4_zoom_cont_pane_g2

0x0f6f,	// (0x000343bd) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x00042e35) cam4_zoom_cont_pane_g

0x94f2,	// (0x0003c940) call4_image_pane_ParamLimits

0x94f2,	// (0x0003c940) call4_image_pane

0x0209,	// (0x00033657) call4_windows_conf_pane_ParamLimits

0x0224,	// (0x00033672) popup_call4_audio_in_window_ParamLimits

0x0224,	// (0x00033672) popup_call4_audio_in_window

0x44fd,	// (0x0003794b) bg_popup_call2_act_pane_cp02

0x0286,	// (0x000336d4) call4_list_conf_pane

0xe891,	// (0x00041cdf) call4_image_pane_g1

0xe891,	// (0x00041cdf) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x00042b49) call4_image_pane_g

0x062c,	// (0x00033a7a) list_single_graphic_popup_conf4_pane_ParamLimits

0x062c,	// (0x00033a7a) list_single_graphic_popup_conf4_pane

0x44fd,	// (0x0003794b) list_highlight_pane_cp022

0x0641,	// (0x00033a8f) list_single_graphic_popup_conf4_pane_g1

0xce11,	// (0x0004025f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x00042e3c) list_single_graphic_popup_conf4_pane_g

0x0649,	// (0x00033a97) list_single_graphic_popup_conf4_pane_t1

0x5822,	// (0x00038c70) popup_vtel_slider_window_ParamLimits

0x5822,	// (0x00038c70) popup_vtel_slider_window

0x01b7,	// (0x00033605) dialer2_ne_pane_t2_ParamLimits

0x01b7,	// (0x00033605) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x00042d1d) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x00042d1d) dialer2_ne_pane_t

0x776b,	// (0x0003abb9) bg_popup_sub_pane_cp010_ParamLimits

0x776b,	// (0x0003abb9) bg_popup_sub_pane_cp010

0xa038,	// (0x0003d486) popup_vtel_slider_window_g1_ParamLimits

0xa038,	// (0x0003d486) popup_vtel_slider_window_g1

0xa044,	// (0x0003d492) popup_vtel_slider_window_g2_ParamLimits

0xa044,	// (0x0003d492) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x00042e41) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x00042e41) popup_vtel_slider_window_g

0xa08c,	// (0x0003d4da) vtel_slider_pane_ParamLimits

0xa08c,	// (0x0003d4da) vtel_slider_pane

0xa09b,	// (0x0003d4e9) vtel_slider_pane_g1_ParamLimits

0xa09b,	// (0x0003d4e9) vtel_slider_pane_g1

0xa0a8,	// (0x0003d4f6) vtel_slider_pane_g2_ParamLimits

0xa0a8,	// (0x0003d4f6) vtel_slider_pane_g2

0xa0b5,	// (0x0003d503) vtel_slider_pane_g3_ParamLimits

0xa0b5,	// (0x0003d503) vtel_slider_pane_g3

0xa09b,	// (0x0003d4e9) vtel_slider_pane_g4_ParamLimits

0xa09b,	// (0x0003d4e9) vtel_slider_pane_g4

0xa0c2,	// (0x0003d510) vtel_slider_pane_g5_ParamLimits

0xa0c2,	// (0x0003d510) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00042e4a) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00042e4a) vtel_slider_pane_g

0x44fd,	// (0x0003794b) main_gallery2_pane

0x989a,	// (0x0003cce8) aid_size_row_itut2_dropdow_list_ParamLimits

0x989a,	// (0x0003cce8) aid_size_row_itut2_dropdow_list

0x98fa,	// (0x0003cd48) grid_vitu2_function_top_pane_ParamLimits

0x98fa,	// (0x0003cd48) grid_vitu2_function_top_pane

0x994c,	// (0x0003cd9a) popup_vitu2_dropdown_list_window_ParamLimits

0x994c,	// (0x0003cd9a) popup_vitu2_dropdown_list_window

0x996c,	// (0x0003cdba) popup_vitu2_match_list_window

0xa0cf,	// (0x0003d51d) cell_vitu2_function_top_pane_ParamLimits

0xa0cf,	// (0x0003d51d) cell_vitu2_function_top_pane

0xa0ef,	// (0x0003d53d) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa0ef,	// (0x0003d53d) cell_vitu2_function_top_pane_cp01

0xa10d,	// (0x0003d55b) cell_vitu2_function_top_wide_pane_ParamLimits

0xa10d,	// (0x0003d55b) cell_vitu2_function_top_wide_pane

0x776b,	// (0x0003abb9) bg_button_pane_cp012

0xa12b,	// (0x0003d579) cell_vitu2_function_top_pane_g1

0xa13a,	// (0x0003d588) bg_button_pane_cp013_ParamLimits

0xa13a,	// (0x0003d588) bg_button_pane_cp013

0xa156,	// (0x0003d5a4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa156,	// (0x0003d5a4) cell_vitu2_function_top_wide_pane_g1

0x47b2,	// (0x00037c00) bg_popup_sub_pane_cp20

0xa16e,	// (0x0003d5bc) list_vitu2_match_list_pane

0x03fa,	// (0x00033848) bg_popup_sub_pane_cp20_g1

0x0402,	// (0x00033850) bg_popup_sub_pane_cp20_g2

0xc995,	// (0x0003fde3) bg_popup_sub_pane_cp20_g3

0x040a,	// (0x00033858) bg_popup_sub_pane_cp20_g4

0xc975,	// (0x0003fdc3) bg_popup_sub_pane_cp20_g5

0x0689,	// (0x00033ad7) bg_popup_sub_pane_cp20_g6

0x041a,	// (0x00033868) bg_popup_sub_pane_cp20_g7

0x0422,	// (0x00033870) bg_popup_sub_pane_cp20_g8

0x042a,	// (0x00033878) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x00042e55) bg_popup_sub_pane_cp20_g

0xa186,	// (0x0003d5d4) list_vitu2_match_list_item_pane_ParamLimits

0xa186,	// (0x0003d5d4) list_vitu2_match_list_item_pane

0xa198,	// (0x0003d5e6) list_vitu2_match_list_item_pane_t1

0x44fd,	// (0x0003794b) bg_popup_sub_pane_cp21

0xcd3a,	// (0x00040188) grid_vitu2_dropdown_list_pane

0xa1a6,	// (0x0003d5f4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa1a6,	// (0x0003d5f4) cell_vitu2_dropdown_list_char_pane

0xa1cb,	// (0x0003d619) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa1cb,	// (0x0003d619) cell_vitu2_dropdown_list_ctrl_pane

0x06e3,	// (0x00033b31) cell_vitu2_dropdown_list_char_pane_g1

0x06da,	// (0x00033b28) cell_vitu2_dropdown_list_char_pane_g2

0x06d1,	// (0x00033b1f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x00042e72) cell_vitu2_dropdown_list_char_pane_g

0xa1f9,	// (0x0003d647) cell_vitu2_dropdown_list_char_pane_t1

0xa207,	// (0x0003d655) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa207,	// (0x0003d655) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa217,	// (0x0003d665) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa217,	// (0x0003d665) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa228,	// (0x0003d676) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa228,	// (0x0003d676) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa238,	// (0x0003d686) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa238,	// (0x0003d686) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeac1,	// (0x00041f0f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeac1,	// (0x00041f0f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x00042e79) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x00042e79) cell_vitu2_dropdown_list_ctrl_pane_g

0xa251,	// (0x0003d69f) aid_size_cell_gallery2_ParamLimits

0xa251,	// (0x0003d69f) aid_size_cell_gallery2

0xa25f,	// (0x0003d6ad) grid_gallery2_pane_ParamLimits

0xa25f,	// (0x0003d6ad) grid_gallery2_pane

0xa26e,	// (0x0003d6bc) scroll_pane_cp029_ParamLimits

0xa26e,	// (0x0003d6bc) scroll_pane_cp029

0xa27a,	// (0x0003d6c8) cell_gallery2_pane_ParamLimits

0xa27a,	// (0x0003d6c8) cell_gallery2_pane

0x06ec,	// (0x00033b3a) cell_gallery2_pane_g2

0xa2a4,	// (0x0003d6f2) cell_gallery2_pane_g3

0x06f6,	// (0x00033b44) cell_gallery2_pane_g4

0x06fe,	// (0x00033b4c) cell_gallery2_pane_g5

0xcfdf,	// (0x0004042d) grid_highlight_pane_cp10

0x996c,	// (0x0003cdba) popup_vitu2_match_list_window_ParamLimits

0x9980,	// (0x0003cdce) popup_vitu2_query_window_ParamLimits

0x9980,	// (0x0003cdce) popup_vitu2_query_window

0x44fd,	// (0x0003794b) bg_vitu2_candi_button_pane

0x06e3,	// (0x00033b31) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x06da,	// (0x00033b28) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x06d1,	// (0x00033b1f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x37ea,	// (0x00036c38) bg_button_pane_cp015

0xa2ac,	// (0x0003d6fa) bg_button_pane_cp016

0xa2bf,	// (0x0003d70d) bg_button_pane_cp017

0xe40e,	// (0x0004185c) bg_popup_sub_pane_cp22

0x0706,	// (0x00033b54) popup_vitu2_query_window_g1

0x381d,	// (0x00036c6b) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00042e84) popup_vitu2_query_window_g

0x383a,	// (0x00036c88) popup_vitu2_query_window_t1_ParamLimits

0x383a,	// (0x00036c88) popup_vitu2_query_window_t1

0x386d,	// (0x00036cbb) popup_vitu2_query_window_t2_ParamLimits

0x386d,	// (0x00036cbb) popup_vitu2_query_window_t2

0x387f,	// (0x00036ccd) popup_vitu2_query_window_t3_ParamLimits

0x387f,	// (0x00036ccd) popup_vitu2_query_window_t3

0xa2e3,	// (0x0003d731) popup_vitu2_query_window_t4_ParamLimits

0xa2e3,	// (0x0003d731) popup_vitu2_query_window_t4

0xa306,	// (0x0003d754) popup_vitu2_query_window_t5_ParamLimits

0xa306,	// (0x0003d754) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x00042e8b) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x00042e8b) popup_vitu2_query_window_t

0x0500,	// (0x0003394e) main_cset_text_pane

0x9d57,	// (0x0003d1a5) aid_area_touch_slider_ParamLimits

0x9d73,	// (0x0003d1c1) cset_slider_pane_ParamLimits

0x9d9d,	// (0x0003d1eb) main_cset_slider_pane_g1_ParamLimits

0x9db2,	// (0x0003d200) main_cset_slider_pane_g2_ParamLimits

0x0521,	// (0x0003396f) main_cset_slider_pane_g3_ParamLimits

0x0521,	// (0x0003396f) main_cset_slider_pane_g3

0x9dc7,	// (0x0003d215) main_cset_slider_pane_g4_ParamLimits

0x9dc7,	// (0x0003d215) main_cset_slider_pane_g4

0x9dd6,	// (0x0003d224) main_cset_slider_pane_g5_ParamLimits

0x9dd6,	// (0x0003d224) main_cset_slider_pane_g5

0x9de2,	// (0x0003d230) main_cset_slider_pane_g6_ParamLimits

0x9de2,	// (0x0003d230) main_cset_slider_pane_g6

0xf990,	// (0x00042dde) main_cset_slider_pane_g_ParamLimits

0x0551,	// (0x0003399f) main_cset_slider_pane_t1_ParamLimits

0x9e6e,	// (0x0003d2bc) main_cset_slider_pane_t2_ParamLimits

0x9e88,	// (0x0003d2d6) main_cset_slider_pane_t3_ParamLimits

0x9ea2,	// (0x0003d2f0) main_cset_slider_pane_t4_ParamLimits

0x9ebc,	// (0x0003d30a) main_cset_slider_pane_t5_ParamLimits

0x9ed6,	// (0x0003d324) main_cset_slider_pane_t6_ParamLimits

0x9eeb,	// (0x0003d339) main_cset_slider_pane_t7_ParamLimits

0x9f15,	// (0x0003d363) main_cset_slider_pane_t8_ParamLimits

0x9f15,	// (0x0003d363) main_cset_slider_pane_t8

0x9f3d,	// (0x0003d38b) main_cset_slider_pane_t9_ParamLimits

0x9f3d,	// (0x0003d38b) main_cset_slider_pane_t9

0x9f65,	// (0x0003d3b3) main_cset_slider_pane_t10_ParamLimits

0x9f65,	// (0x0003d3b3) main_cset_slider_pane_t10

0x9f8d,	// (0x0003d3db) main_cset_slider_pane_t11_ParamLimits

0x9f8d,	// (0x0003d3db) main_cset_slider_pane_t11

0x9fb5,	// (0x0003d403) main_cset_slider_pane_t12_ParamLimits

0x9fb5,	// (0x0003d403) main_cset_slider_pane_t12

0x9fd2,	// (0x0003d420) main_cset_slider_pane_t13_ParamLimits

0x9fd2,	// (0x0003d420) main_cset_slider_pane_t13

0xf9b5,	// (0x00042e03) main_cset_slider_pane_t_ParamLimits

0x44fd,	// (0x0003794b) bg_popup_sub_pane_cp011

0x0712,	// (0x00033b60) main_cset_text_pane_g1

0x071a,	// (0x00033b68) main_cset_text_pane_t1

0x0728,	// (0x00033b76) main_cset_text_pane_t2

0x0736,	// (0x00033b84) main_cset_text_pane_t3

0x0744,	// (0x00033b92) main_cset_text_pane_t4

0x0752,	// (0x00033ba0) main_cset_text_pane_t5

0x0760,	// (0x00033bae) main_cset_text_pane_t6

0x076e,	// (0x00033bbc) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x00042e9a) main_cset_text_pane_t

0x44fd,	// (0x0003794b) main_cam4_burst_pane

0x44fd,	// (0x0003794b) main_cam5_pane

0x9ca0,	// (0x0003d0ee) bg_button_pane_cp019

0x9ca9,	// (0x0003d0f7) bg_button_pane_cp020

0x052d,	// (0x0003397b) main_cset_slider_pane_g7_ParamLimits

0x052d,	// (0x0003397b) main_cset_slider_pane_g7

0x0539,	// (0x00033987) main_cset_slider_pane_g8_ParamLimits

0x0539,	// (0x00033987) main_cset_slider_pane_g8

0x9df6,	// (0x0003d244) main_cset_slider_pane_g9_ParamLimits

0x9df6,	// (0x0003d244) main_cset_slider_pane_g9

0x9e02,	// (0x0003d250) main_cset_slider_pane_g10_ParamLimits

0x9e02,	// (0x0003d250) main_cset_slider_pane_g10

0x9e0e,	// (0x0003d25c) main_cset_slider_pane_g11_ParamLimits

0x9e0e,	// (0x0003d25c) main_cset_slider_pane_g11

0x9e1a,	// (0x0003d268) main_cset_slider_pane_g12_ParamLimits

0x9e1a,	// (0x0003d268) main_cset_slider_pane_g12

0x9e26,	// (0x0003d274) main_cset_slider_pane_g13_ParamLimits

0x9e26,	// (0x0003d274) main_cset_slider_pane_g13

0x9e32,	// (0x0003d280) main_cset_slider_pane_g14_ParamLimits

0x9e32,	// (0x0003d280) main_cset_slider_pane_g14

0x9e3e,	// (0x0003d28c) main_cset_slider_pane_g15_ParamLimits

0x9e3e,	// (0x0003d28c) main_cset_slider_pane_g15

0x057f,	// (0x000339cd) main_cset_slider_pane_t14_ParamLimits

0x057f,	// (0x000339cd) main_cset_slider_pane_t14

0x05b8,	// (0x00033a06) main_cset_slider_pane_t15_ParamLimits

0x05b8,	// (0x00033a06) main_cset_slider_pane_t15

0xa329,	// (0x0003d777) aid_cam4_burst_size_cell_ParamLimits

0xa329,	// (0x0003d777) aid_cam4_burst_size_cell

0xa345,	// (0x0003d793) grid_cam4_burst_pane_ParamLimits

0xa345,	// (0x0003d793) grid_cam4_burst_pane

0xa377,	// (0x0003d7c5) linegrid_cam4_burst_pane_ParamLimits

0xa377,	// (0x0003d7c5) linegrid_cam4_burst_pane

0xa395,	// (0x0003d7e3) scroll_pane_cp30_ParamLimits

0xa395,	// (0x0003d7e3) scroll_pane_cp30

0xa3a1,	// (0x0003d7ef) cell_cam4_burst_pane_ParamLimits

0xa3a1,	// (0x0003d7ef) cell_cam4_burst_pane

0x0788,	// (0x00033bd6) linegrid_cam4_burst_pane_g1_ParamLimits

0x0788,	// (0x00033bd6) linegrid_cam4_burst_pane_g1

0xa3e1,	// (0x0003d82f) linegrid_cam4_burst_pane_g2_ParamLimits

0xa3e1,	// (0x0003d82f) linegrid_cam4_burst_pane_g2

0x0795,	// (0x00033be3) linegrid_cam4_burst_pane_g3_ParamLimits

0x0795,	// (0x00033be3) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x00042ea9) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00042ea9) linegrid_cam4_burst_pane_g

0xa3f2,	// (0x0003d840) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa3f2,	// (0x0003d840) linegrid_cam4_burst_pane_g3_copy1

0x07a2,	// (0x00033bf0) linegrid_cam4_burst_pane_g4_ParamLimits

0x07a2,	// (0x00033bf0) linegrid_cam4_burst_pane_g4

0xa40c,	// (0x0003d85a) linegrid_cam4_burst_pane_g5_ParamLimits

0xa40c,	// (0x0003d85a) linegrid_cam4_burst_pane_g5

0xa41d,	// (0x0003d86b) linegrid_cam4_burst_pane_g6_ParamLimits

0xa41d,	// (0x0003d86b) linegrid_cam4_burst_pane_g6

0x07af,	// (0x00033bfd) linegrid_cam4_burst_pane_g7_ParamLimits

0x07af,	// (0x00033bfd) linegrid_cam4_burst_pane_g7

0xa434,	// (0x0003d882) cell_cam4_burst_pane_g1

0x07c8,	// (0x00033c16) main_cam5_pane_t1_ParamLimits

0x07c8,	// (0x00033c16) main_cam5_pane_t1

0x07da,	// (0x00033c28) main_cam5_pane_t2_ParamLimits

0x07da,	// (0x00033c28) main_cam5_pane_t2

0x07ec,	// (0x00033c3a) main_cam5_pane_t3_ParamLimits

0x07ec,	// (0x00033c3a) main_cam5_pane_t3

0x07fe,	// (0x00033c4c) main_cam5_pane_t4_ParamLimits

0x07fe,	// (0x00033c4c) main_cam5_pane_t4

0x0816,	// (0x00033c64) main_cam5_pane_t5_ParamLimits

0x0816,	// (0x00033c64) main_cam5_pane_t5

0x082a,	// (0x00033c78) main_cam5_pane_t6_ParamLimits

0x082a,	// (0x00033c78) main_cam5_pane_t6

0x083e,	// (0x00033c8c) main_cam5_pane_t7_ParamLimits

0x083e,	// (0x00033c8c) main_cam5_pane_t7

0x0850,	// (0x00033c9e) main_cam5_pane_t8_ParamLimits

0x0850,	// (0x00033c9e) main_cam5_pane_t8

0x086e,	// (0x00033cbc) main_cam5_pane_t9_ParamLimits

0x086e,	// (0x00033cbc) main_cam5_pane_t9

0x0880,	// (0x00033cce) main_cam5_pane_t10_ParamLimits

0x0880,	// (0x00033cce) main_cam5_pane_t10

0x0892,	// (0x00033ce0) main_cam5_pane_t11_ParamLimits

0x0892,	// (0x00033ce0) main_cam5_pane_t11

0x08a6,	// (0x00033cf4) main_cam5_pane_t12_ParamLimits

0x08a6,	// (0x00033cf4) main_cam5_pane_t12

0x08bd,	// (0x00033d0b) main_cam5_pane_t13_ParamLimits

0x08bd,	// (0x00033d0b) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x00042eb5) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x00042eb5) main_cam5_pane_t

0x477b,	// (0x00037bc9) popup_scut_keymap_window_ParamLimits

0x477b,	// (0x00037bc9) popup_scut_keymap_window

0xa447,	// (0x0003d895) aid_size_cell_brow_shortcut

0xcfdf,	// (0x0004042d) bg_popup_window_pane_cp010

0xa453,	// (0x0003d8a1) grid_scut_pane

0xa45f,	// (0x0003d8ad) cell_scut_pane_ParamLimits

0xa45f,	// (0x0003d8ad) cell_scut_pane

0xa47a,	// (0x0003d8c8) cell_scut_pane_g1

0x08e0,	// (0x00033d2e) cell_scut_pane_t1

0x08ef,	// (0x00033d3d) cell_scut_pane_t2

0xa483,	// (0x0003d8d1) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x00042ed0) cell_scut_pane_t

0x8474,	// (0x0003b8c2) main_mup3_pane_g8_ParamLimits

0x8474,	// (0x0003b8c2) main_mup3_pane_g8

0x98a8,	// (0x0003ccf6) area_vitu2_query_pane_ParamLimits

0x98a8,	// (0x0003ccf6) area_vitu2_query_pane

0x37fc,	// (0x00036c4a) input_focus_pane_cp08

0x08fe,	// (0x00033d4c) area_vitu2_query_pane_g1

0x38fd,	// (0x00036d4b) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x00042ed7) area_vitu2_query_pane_g

0xa491,	// (0x0003d8df) area_vitu2_query_pane_t1_ParamLimits

0xa491,	// (0x0003d8df) area_vitu2_query_pane_t1

0xa4a5,	// (0x0003d8f3) area_vitu2_query_pane_t2_ParamLimits

0xa4a5,	// (0x0003d8f3) area_vitu2_query_pane_t2

0x390e,	// (0x00036d5c) area_vitu2_query_pane_t3_ParamLimits

0x390e,	// (0x00036d5c) area_vitu2_query_pane_t3

0x3936,	// (0x00036d84) area_vitu2_query_pane_t4_ParamLimits

0x3936,	// (0x00036d84) area_vitu2_query_pane_t4

0x395e,	// (0x00036dac) area_vitu2_query_pane_t5_ParamLimits

0x395e,	// (0x00036dac) area_vitu2_query_pane_t5

0x3986,	// (0x00036dd4) area_vitu2_query_pane_t6_ParamLimits

0x3986,	// (0x00036dd4) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x00042edc) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x00042edc) area_vitu2_query_pane_t

0xa4b9,	// (0x0003d907) bg_button_pane_cp018

0xa4c7,	// (0x0003d915) bg_button_pane_cp021

0x39d2,	// (0x00036e20) bg_button_pane_cp022

0x39e3,	// (0x00036e31) input_focus_pane_cp09

0x693d,	// (0x00039d8b) aid_size_touch_mv_arrow_left

0x6968,	// (0x00039db6) aid_size_touch_mv_arrow_right

0x9e56,	// (0x0003d2a4) main_cset_slider_pane_g16_ParamLimits

0x9e56,	// (0x0003d2a4) main_cset_slider_pane_g16

0x9e62,	// (0x0003d2b0) main_cset_slider_pane_g17_ParamLimits

0x9e62,	// (0x0003d2b0) main_cset_slider_pane_g17

0xa434,	// (0x0003d882) cell_cam4_burst_pane_g1_ParamLimits

0x44fd,	// (0x0003794b) compa_mode_pane

0xa050,	// (0x0003d49e) popup_vtel_slider_window_g3_ParamLimits

0xa050,	// (0x0003d49e) popup_vtel_slider_window_g3

0xa064,	// (0x0003d4b2) popup_vtel_slider_window_g4_ParamLimits

0xa064,	// (0x0003d4b2) popup_vtel_slider_window_g4

0xa078,	// (0x0003d4c6) popup_vtel_slider_window_t1_ParamLimits

0xa078,	// (0x0003d4c6) popup_vtel_slider_window_t1

0x44fd,	// (0x0003794b) main_cl_pane

0xe43a,	// (0x00041888) popup_imed_adjust2_window_ParamLimits

0xe40e,	// (0x0004185c) bg_tb_trans_pane_cp05_ParamLimits

0xed60,	// (0x000421ae) popup_imed_adjust2_window_g1_ParamLimits

0xed6f,	// (0x000421bd) popup_imed_adjust2_window_g2_ParamLimits

0xed6f,	// (0x000421bd) popup_imed_adjust2_window_g2

0xed7b,	// (0x000421c9) popup_imed_adjust2_window_g3_ParamLimits

0xed7b,	// (0x000421c9) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x00042c47) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x00042c47) popup_imed_adjust2_window_g

0xed87,	// (0x000421d5) popup_imed_adjust2_window_t1_ParamLimits

0xed9f,	// (0x000421ed) slider_imed_adjust_pane_ParamLimits

0xedb3,	// (0x00042201) slider_imed_adjust_pane_g1_ParamLimits

0xedc3,	// (0x00042211) slider_imed_adjust_pane_g2_ParamLimits

0xedd3,	// (0x00042221) slider_imed_adjust_pane_g3_ParamLimits

0xede4,	// (0x00042232) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x00042c4e) slider_imed_adjust_pane_g_ParamLimits

0x95f0,	// (0x0003ca3e) aid_touch_area_cam4_ParamLimits

0x95f0,	// (0x0003ca3e) aid_touch_area_cam4

0x9600,	// (0x0003ca4e) battery_pane_cp01

0x9687,	// (0x0003cad5) main_camera4_pane_g6_ParamLimits

0x9687,	// (0x0003cad5) main_camera4_pane_g6

0x96a5,	// (0x0003caf3) main_camera4_pane_t2_ParamLimits

0x96a5,	// (0x0003caf3) main_camera4_pane_t2

0x0001,

0xf903,	// (0x00042d51) main_camera4_pane_t_ParamLimits

0xf903,	// (0x00042d51) main_camera4_pane_t

0x9729,	// (0x0003cb77) aid_touch_area_vid4_ParamLimits

0x9729,	// (0x0003cb77) aid_touch_area_vid4

0x9769,	// (0x0003cbb7) main_video4_pane_g5_ParamLimits

0x9769,	// (0x0003cbb7) main_video4_pane_g5

0x978d,	// (0x0003cbdb) vid4_progress_pane_ParamLimits

0x978d,	// (0x0003cbdb) vid4_progress_pane

0x0545,	// (0x00033993) main_cset_slider_pane_g18_ParamLimits

0x0545,	// (0x00033993) main_cset_slider_pane_g18

0x07bc,	// (0x00033c0a) cell_cam4_burst_pane_g2_ParamLimits

0x07bc,	// (0x00033c0a) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x00042eb0) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x00042eb0) cell_cam4_burst_pane_g

0xa4d3,	// (0x0003d921) bg_cl_pane_ParamLimits

0xa4d3,	// (0x0003d921) bg_cl_pane

0xa4df,	// (0x0003d92d) cl_header_pane_ParamLimits

0xa4df,	// (0x0003d92d) cl_header_pane

0xa4eb,	// (0x0003d939) cl_listscroll_pane_ParamLimits

0xa4eb,	// (0x0003d939) cl_listscroll_pane

0x09a6,	// (0x00033df4) bg_cl_pane_g1

0x09ae,	// (0x00033dfc) bg_cl_pane_g2

0x09b6,	// (0x00033e04) bg_cl_pane_g3

0x09be,	// (0x00033e0c) bg_cl_pane_g4

0x09c6,	// (0x00033e14) bg_cl_pane_g5

0x09ce,	// (0x00033e1c) bg_cl_pane_g6

0x09d6,	// (0x00033e24) bg_cl_pane_g7

0x09de,	// (0x00033e2c) bg_cl_pane_g8

0x09e6,	// (0x00033e34) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x00042eeb) bg_cl_pane_g

0xa4f7,	// (0x0003d945) aid_height_cl_leading_ParamLimits

0xa4f7,	// (0x0003d945) aid_height_cl_leading

0xa503,	// (0x0003d951) aid_height_cl_text_ParamLimits

0xa503,	// (0x0003d951) aid_height_cl_text

0x47b2,	// (0x00037c00) bg_cl_header_pane_ParamLimits

0x47b2,	// (0x00037c00) bg_cl_header_pane

0xa51b,	// (0x0003d969) cl_header_pane_g1_ParamLimits

0xa51b,	// (0x0003d969) cl_header_pane_g1

0xa528,	// (0x0003d976) cl_header_pane_t1_ParamLimits

0xa528,	// (0x0003d976) cl_header_pane_t1

0x09ee,	// (0x00033e3c) cl_list_pane

0x0518,	// (0x00033966) hc_scroll_pane_cp01

0xc975,	// (0x0003fdc3) bg_cl_header_pane_g1

0x03fa,	// (0x00033848) bg_cl_header_pane_g2

0xc995,	// (0x0003fde3) bg_cl_header_pane_g3

0x040a,	// (0x00033858) bg_cl_header_pane_g4

0x0402,	// (0x00033850) bg_cl_header_pane_g5

0x0689,	// (0x00033ad7) bg_cl_header_pane_g6

0x0422,	// (0x00033870) bg_cl_header_pane_g7

0x042a,	// (0x00033878) bg_cl_header_pane_g8

0x041a,	// (0x00033868) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x00042efe) bg_cl_header_pane_g

0xa53a,	// (0x0003d988) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa53a,	// (0x0003d988) hc_cl_list_double_graphic_heading_pane

0xa54a,	// (0x0003d998) hc_cl_list_single_graphic_pane_ParamLimits

0xa54a,	// (0x0003d998) hc_cl_list_single_graphic_pane

0xa55c,	// (0x0003d9aa) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa55c,	// (0x0003d9aa) hc_cl_list_single_graphic_pane_g1

0xa568,	// (0x0003d9b6) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa568,	// (0x0003d9b6) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x00042f11) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x00042f11) hc_cl_list_single_graphic_pane_g

0xa57c,	// (0x0003d9ca) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa57c,	// (0x0003d9ca) hc_cl_list_single_graphic_pane_t1

0xa55c,	// (0x0003d9aa) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa55c,	// (0x0003d9aa) hc_cl_list_double_graphic_heading_pane_g1

0xa591,	// (0x0003d9df) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa591,	// (0x0003d9df) hc_cl_list_double_graphic_heading_pane_g2

0xa5a5,	// (0x0003d9f3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa5a5,	// (0x0003d9f3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x00042f16) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x00042f16) hc_cl_list_double_graphic_heading_pane_g

0xa5b9,	// (0x0003da07) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa5b9,	// (0x0003da07) hc_cl_list_double_graphic_heading_pane_t1

0xa5ce,	// (0x0003da1c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa5ce,	// (0x0003da1c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x00042f1d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x00042f1d) hc_cl_list_double_graphic_heading_pane_t

0xa5f5,	// (0x0003da43) vid4_progress_pane_g1

0xa606,	// (0x0003da54) vid4_progress_pane_g2

0x7031,	// (0x0003a47f) vid4_progress_pane_g3

0x96f5,	// (0x0003cb43) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x00042f22) vid4_progress_pane_g

0xa618,	// (0x0003da66) vid4_progress_pane_t1

0xa62d,	// (0x0003da7b) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x00042f2d) vid4_progress_pane_t

0xa65c,	// (0x0003daaa) wait_bar_pane_cp07

0xe676,	// (0x00041ac4) blid_firmament_pane_ParamLimits

0xe6b9,	// (0x00041b07) popup_blid_sat_info2_window_g1

0xe6e5,	// (0x00041b33) popup_blid_sat_info2_window_t3

0xe6f3,	// (0x00041b41) popup_blid_sat_info2_window_t4

0xe701,	// (0x00041b4f) popup_blid_sat_info2_window_t5

0xe70f,	// (0x00041b5d) popup_blid_sat_info2_window_t6

0xe71f,	// (0x00041b6d) popup_blid_sat_info2_window_t7

0xe72d,	// (0x00041b7b) popup_blid_sat_info2_window_t8

0xe73b,	// (0x00041b89) popup_blid_sat_info2_window_t9

0xe749,	// (0x00041b97) popup_blid_sat_info2_window_t10

0xe811,	// (0x00041c5f) aid_firma_cardinal_ParamLimits

0xe825,	// (0x00041c73) blid_firmament_pane_t1_ParamLimits

0xe83c,	// (0x00041c8a) blid_firmament_pane_t2_ParamLimits

0xe853,	// (0x00041ca1) blid_firmament_pane_t3_ParamLimits

0xe86a,	// (0x00041cb8) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x00042b40) blid_firmament_pane_t_ParamLimits

0xe881,	// (0x00041ccf) blid_sat_info_pane_ParamLimits

0x776b,	// (0x0003abb9) main_cam_set_pane_ParamLimits

0x8c0f,	// (0x0003c05d) aid_size_cell_colour_35_ParamLimits

0x8c29,	// (0x0003c077) aid_size_cell_colour_112_ParamLimits

0x8c40,	// (0x0003c08e) aid_size_cell_effect_ParamLimits

0x776b,	// (0x0003abb9) bg_tb_trans_pane_cp02_ParamLimits

0xd9a2,	// (0x00040df0) heading_imed_pane_ParamLimits

0x8c5a,	// (0x0003c0a8) listscroll_imed_pane_ParamLimits

0xda3c,	// (0x00040e8a) popup_call2_audio_first_window_g5_ParamLimits

0xda3c,	// (0x00040e8a) popup_call2_audio_first_window_g5

0x9369,	// (0x0003c7b7) aid_size_touch_image3_arrow_left_ParamLimits

0x9369,	// (0x0003c7b7) aid_size_touch_image3_arrow_left

0x937f,	// (0x0003c7cd) aid_size_touch_image3_arrow_right_ParamLimits

0x937f,	// (0x0003c7cd) aid_size_touch_image3_arrow_right

0xa645,	// (0x0003da93) vid4_progress_pane_t3

0x8f05,	// (0x0003c353) main_hwr_training_symbol_option_pane_ParamLimits

0x8f05,	// (0x0003c353) main_hwr_training_symbol_option_pane

0xf04f,	// (0x0004249d) popup_hwr_training_preview_window_ParamLimits

0xf04f,	// (0x0004249d) popup_hwr_training_preview_window

0x8f66,	// (0x0003c3b4) hwr_training_navi_pane_g5_ParamLimits

0x8f66,	// (0x0003c3b4) hwr_training_navi_pane_g5

0x03da,	// (0x00033828) popup_char_count_window

0x47b2,	// (0x00037c00) bg_popup_sub_pane_cp20_ParamLimits

0xa16e,	// (0x0003d5bc) list_vitu2_match_list_pane_ParamLimits

0xa17a,	// (0x0003d5c8) vitu2_page_scroll_pane_ParamLimits

0xa17a,	// (0x0003d5c8) vitu2_page_scroll_pane

0x0a6e,	// (0x00033ebc) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0a6e,	// (0x00033ebc) list_single_hwr_training_symbol_option_pane

0x0a81,	// (0x00033ecf) list_single_hwr_training_symbol_option_pane_g1

0x0a89,	// (0x00033ed7) list_single_hwr_training_symbol_option_pane_t1

0x0a97,	// (0x00033ee5) bg_button_pane_cp023

0x0aa0,	// (0x00033eee) bg_button_pane_cp024

0xa66e,	// (0x0003dabc) vitu2_page_scroll_pane_g1

0xa676,	// (0x0003dac4) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x00042f34) vitu2_page_scroll_pane_g

0xa680,	// (0x0003dace) vitu2_page_scroll_pane_t1

0xe5d6,	// (0x00041a24) popup_char_count_window_g1

0x0ad3,	// (0x00033f21) popup_char_count_window_g2

0x0adc,	// (0x00033f2a) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x00042f39) popup_char_count_window_g

0x0ae5,	// (0x00033f33) popup_char_count_window_t1

0x44fd,	// (0x0003794b) main_vded2_pane

0xed4c,	// (0x0004219a) aid_size_cell_imed_line

0xed56,	// (0x000421a4) grid_imed_line_width_pane

0x97fb,	// (0x0003cc49) vid4_indicators_pane_g4

0x0af3,	// (0x00033f41) cell_imed_line_width_pane_ParamLimits

0x0af3,	// (0x00033f41) cell_imed_line_width_pane

0x0b09,	// (0x00033f57) cell_imed_line_width_pane_g1

0xe6dd,	// (0x00041b2b) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x00042f40) cell_imed_line_width_pane_g

0xa68f,	// (0x0003dadd) main_vded2_pane_g1_ParamLimits

0xa68f,	// (0x0003dadd) main_vded2_pane_g1

0xa69e,	// (0x0003daec) main_vded2_pane_g2_ParamLimits

0xa69e,	// (0x0003daec) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x00042f45) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x00042f45) main_vded2_pane_g

0xa6ac,	// (0x0003dafa) vded2_slider_pane_ParamLimits

0xa6ac,	// (0x0003dafa) vded2_slider_pane

0xa6b9,	// (0x0003db07) aid_size_touch_vded2_end

0xa6c3,	// (0x0003db11) aid_size_touch_vded2_playhead

0x0b12,	// (0x00033f60) aid_size_touch_vded2_start

0x0b1a,	// (0x00033f68) vded2_slider_bg_pane

0x0b23,	// (0x00033f71) vded2_slider_pane_g1

0x0b2c,	// (0x00033f7a) vded2_slider_pane_g2

0xa6cb,	// (0x0003db19) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00042f4a) vded2_slider_pane_g

0x0b34,	// (0x00033f82) vded2_slider_bg_pane_g1

0x0b3d,	// (0x00033f8b) vded2_slider_bg_pane_g2

0x0b46,	// (0x00033f94) vded2_slider_bg_pane_g3

0x0002,

0xf7c2,	// (0x00042c10) vded2_slider_bg_pane_g

0x7049,	// (0x0003a497) aid_postcard_touch_down_pane_ParamLimits

0x7049,	// (0x0003a497) aid_postcard_touch_down_pane

0x7059,	// (0x0003a4a7) aid_postcard_touch_up_pane_ParamLimits

0x7059,	// (0x0003a4a7) aid_postcard_touch_up_pane

0x44fd,	// (0x0003794b) main_blid2_pane

0xe41c,	// (0x0004186a) popup_blid2_search_window

0x44fd,	// (0x0003794b) blid2_gps_pane

0x44fd,	// (0x0003794b) blid2_navig_pane

0x44fd,	// (0x0003794b) blid2_search_pane

0x44fd,	// (0x0003794b) blid2_tripm_pane

0xa6d4,	// (0x0003db22) blid2_search_pane_g1_ParamLimits

0xa6d4,	// (0x0003db22) blid2_search_pane_g1

0xa6e0,	// (0x0003db2e) blid2_search_pane_t1_ParamLimits

0xa6e0,	// (0x0003db2e) blid2_search_pane_t1

0xa6f2,	// (0x0003db40) aid_size_cell_blid2_gps_ParamLimits

0xa6f2,	// (0x0003db40) aid_size_cell_blid2_gps

0xa702,	// (0x0003db50) blid2_gps_pane_g1_ParamLimits

0xa702,	// (0x0003db50) blid2_gps_pane_g1

0xa70e,	// (0x0003db5c) grid_blid2_satellite_pane_ParamLimits

0xa70e,	// (0x0003db5c) grid_blid2_satellite_pane

0xa71c,	// (0x0003db6a) blid2_navig_pane_g1_ParamLimits

0xa71c,	// (0x0003db6a) blid2_navig_pane_g1

0xa728,	// (0x0003db76) blid2_navig_pane_t1_ParamLimits

0xa728,	// (0x0003db76) blid2_navig_pane_t1

0xa73a,	// (0x0003db88) blid2_navig_pane_t2_ParamLimits

0xa73a,	// (0x0003db88) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x00042f51) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x00042f51) blid2_navig_pane_t

0xa74c,	// (0x0003db9a) blid2_navig_ring_pane_ParamLimits

0xa74c,	// (0x0003db9a) blid2_navig_ring_pane

0xa75c,	// (0x0003dbaa) blid2_speed_pane_ParamLimits

0xa75c,	// (0x0003dbaa) blid2_speed_pane

0xa768,	// (0x0003dbb6) blid2_tripm_pane_g1_ParamLimits

0xa768,	// (0x0003dbb6) blid2_tripm_pane_g1

0xa778,	// (0x0003dbc6) blid2_tripm_pane_g2_ParamLimits

0xa778,	// (0x0003dbc6) blid2_tripm_pane_g2

0xa784,	// (0x0003dbd2) blid2_tripm_pane_g3_ParamLimits

0xa784,	// (0x0003dbd2) blid2_tripm_pane_g3

0xa790,	// (0x0003dbde) blid2_tripm_pane_g4_ParamLimits

0xa790,	// (0x0003dbde) blid2_tripm_pane_g4

0xa79c,	// (0x0003dbea) blid2_tripm_pane_g5_ParamLimits

0xa79c,	// (0x0003dbea) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x00042f56) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x00042f56) blid2_tripm_pane_g

0xa7b8,	// (0x0003dc06) blid2_tripm_pane_t1_ParamLimits

0xa7b8,	// (0x0003dc06) blid2_tripm_pane_t1

0xa7ca,	// (0x0003dc18) blid2_tripm_pane_t2_ParamLimits

0xa7ca,	// (0x0003dc18) blid2_tripm_pane_t2

0xa7dc,	// (0x0003dc2a) blid2_tripm_pane_t3_ParamLimits

0xa7dc,	// (0x0003dc2a) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x00042f63) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x00042f63) blid2_tripm_pane_t

0xa80e,	// (0x0003dc5c) cell_blid2_satellite_pane_ParamLimits

0xa80e,	// (0x0003dc5c) cell_blid2_satellite_pane

0xa82c,	// (0x0003dc7a) cell_blid2_satellite_pane_g1

0x0b4f,	// (0x00033f9d) cell_blid2_satellite_pane_t1

0xe891,	// (0x00041cdf) blid2_speed_pane_g1

0x0b5d,	// (0x00033fab) blid2_speed_pane_t1

0x0b6b,	// (0x00033fb9) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x00042f6c) blid2_speed_pane_t

0xe891,	// (0x00041cdf) blid2_navig_ring_pane_g1

0xa835,	// (0x0003dc83) blid2_navig_ring_pane_g2

0xa83d,	// (0x0003dc8b) blid2_navig_ring_pane_g3

0xa845,	// (0x0003dc93) blid2_navig_ring_pane_g4

0xa84d,	// (0x0003dc9b) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x00042f71) blid2_navig_ring_pane_g

0x44fd,	// (0x0003794b) bg_popup_window_pane_cp011

0x0b79,	// (0x00033fc7) popup_blid2_search_window_g1

0x0b81,	// (0x00033fcf) popup_blid2_search_window_t1

0x0b8f,	// (0x00033fdd) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x00042f7c) popup_blid2_search_window_t

0xc884,	// (0x0003fcd2) main_browser_pane_g1

0xc589,	// (0x0003f9d7) main_browser_pane_ParamLimits

0x776b,	// (0x0003abb9) bg_button_pane_cp011_ParamLimits

0x9a69,	// (0x0003ceb7) cell_vitu2_function_pane_g1_ParamLimits

0xe40e,	// (0x0004185c) bg_popup_sub_pane_cp22_ParamLimits

0x37fc,	// (0x00036c4a) input_focus_pane_cp08_ParamLimits

0xa2d2,	// (0x0003d720) popup_vitu2_query_button_pane_ParamLimits

0xa2d2,	// (0x0003d720) popup_vitu2_query_button_pane

0x3813,	// (0x00036c61) popup_vitu2_query_input_button_pane

0x0706,	// (0x00033b54) popup_vitu2_query_window_g1_ParamLimits

0x381d,	// (0x00036c6b) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00042e84) popup_vitu2_query_window_g_ParamLimits

0x44fd,	// (0x0003794b) bg_button_pane_cp026

0xa855,	// (0x0003dca3) popup_vitu2_query_input_button_pane_g1

0x44fd,	// (0x0003794b) bg_button_pane_cp025

0x0b9d,	// (0x00033feb) popup_vitu2_query_button_pane_t1

0x81c1,	// (0x0003b60f) main_mp3_pane_t6

0x81d1,	// (0x0003b61f) popup_slider_window_cp01

0x96dd,	// (0x0003cb2b) cam4_battery_pane

0x97bb,	// (0x0003cc09) cam4_battery_pane_cp02

0xa5e3,	// (0x0003da31) cam4_battery_pane_cp01

0xa5ed,	// (0x0003da3b) cam4_battery_pane_cp03

0xe891,	// (0x00041cdf) cam4_battery_pane_g1

0x01ad,	// (0x000335fb) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x00042f81) cam4_battery_pane_g

0xe757,	// (0x00041ba5) popup_blid_sat_info2_window_t11

0x693d,	// (0x00039d8b) aid_size_touch_mv_arrow_left_ParamLimits

0x6968,	// (0x00039db6) aid_size_touch_mv_arrow_right_ParamLimits

0xcf3f,	// (0x0004038d) navi_pane_g1_ParamLimits

0x69a7,	// (0x00039df5) navi_pane_g2_ParamLimits

0x69d5,	// (0x00039e23) navi_pane_g3_ParamLimits

0xf404,	// (0x00042852) navi_pane_g_ParamLimits

0x6a2f,	// (0x00039e7d) navi_pane_mv_t1_ParamLimits

0x8c66,	// (0x0003c0b4) grid_imed_effect_pane_ParamLimits

0x56ea,	// (0x00038b38) aid_placing_vt_slider_lsc

0xc7cf,	// (0x0003fc1d) aid_placing_vt_slider_prt

0x776b,	// (0x0003abb9) bg_tb_trans_pane_cp01_ParamLimits

0xe9e1,	// (0x00041e2f) popup_image_details_window_g1_ParamLimits

0xe9f4,	// (0x00041e42) popup_image_details_window_g2_ParamLimits

0xea09,	// (0x00041e57) popup_image_details_window_g3_ParamLimits

0xea09,	// (0x00041e57) popup_image_details_window_g3

0xf737,	// (0x00042b85) popup_image_details_window_g_ParamLimits

0xea1d,	// (0x00041e6b) popup_image_details_window_t1_ParamLimits

0xea2f,	// (0x00041e7d) popup_image_details_window_t2_ParamLimits

0xea48,	// (0x00041e96) popup_image_details_window_t3_ParamLimits

0xea5c,	// (0x00041eaa) popup_image_details_window_t4_ParamLimits

0xea77,	// (0x00041ec5) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x00042b8c) popup_image_details_window_t_ParamLimits

0xa50f,	// (0x0003d95d) cl_header_name_pane_ParamLimits

0xa50f,	// (0x0003d95d) cl_header_name_pane

0xa85d,	// (0x0003dcab) cl_header_name_pane_t1_ParamLimits

0xa85d,	// (0x0003dcab) cl_header_name_pane_t1

0xa874,	// (0x0003dcc2) cl_header_name_pane_t2_ParamLimits

0xa874,	// (0x0003dcc2) cl_header_name_pane_t2

0xa89e,	// (0x0003dcec) cl_header_name_pane_t3_ParamLimits

0xa89e,	// (0x0003dcec) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x00042f86) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x00042f86) cl_header_name_pane_t

0x6a00,	// (0x00039e4e) navi_pane_mv_g2_ParamLimits

0x0397,	// (0x000337e5) field_vitu2_entry_pane_g1_ParamLimits

0x03a3,	// (0x000337f1) field_vitu2_entry_pane_g2_ParamLimits

0x03af,	// (0x000337fd) field_vitu2_entry_pane_g3_ParamLimits

0x03af,	// (0x000337fd) field_vitu2_entry_pane_g3

0xf935,	// (0x00042d83) field_vitu2_entry_pane_g_ParamLimits

0x99f9,	// (0x0003ce47) cell_vitu2_itu_pane_g1_ParamLimits

0x9a09,	// (0x0003ce57) cell_vitu2_itu_pane_g2_ParamLimits

0x9a09,	// (0x0003ce57) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x00042d8f) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x00042d8f) cell_vitu2_itu_pane_g

0x776b,	// (0x0003abb9) bg_vkb2_func_pane_cp05_ParamLimits

0x776b,	// (0x0003abb9) bg_vkb2_func_pane_cp05

0x776b,	// (0x0003abb9) bg_vkb2_func_pane_cp03

0x776b,	// (0x0003abb9) bg_vkb2_func_pane_cp04

0x776b,	// (0x0003abb9) bg_vkb2_func_pane_cp10_ParamLimits

0x776b,	// (0x0003abb9) bg_vkb2_func_pane_cp10

0x39d2,	// (0x00036e20) bg_vkb2_func_pane_cp08

0xa4b9,	// (0x0003d907) bg_vkb2_func_pane_cp06

0xa4c7,	// (0x0003d915) bg_vkb2_func_pane_cp07

0x0aa9,	// (0x00033ef7) bg_vkb2_func_pane_cp11_ParamLimits

0x0aa9,	// (0x00033ef7) bg_vkb2_func_pane_cp11

0x0abe,	// (0x00033f0c) bg_vkb2_func_pane_cp12_ParamLimits

0x0abe,	// (0x00033f0c) bg_vkb2_func_pane_cp12

0x44fd,	// (0x0003794b) bg_vkb2_func_pane_cp09

0x03fa,	// (0x00033848) bg_vkb2_func_pane_g1

0xc995,	// (0x0003fde3) bg_vkb2_func_pane_g2

0x0402,	// (0x00033850) bg_vkb2_func_pane_g3

0x040a,	// (0x00033858) bg_vkb2_func_pane_g4

0x0689,	// (0x00033ad7) bg_vkb2_func_pane_g5

0x0422,	// (0x00033870) bg_vkb2_func_pane_g6

0x042a,	// (0x00033878) bg_vkb2_func_pane_g7

0x041a,	// (0x00033868) bg_vkb2_func_pane_g8

0xc975,	// (0x0003fdc3) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x00042f8d) bg_vkb2_func_pane_g

0xa7aa,	// (0x0003dbf8) blid2_tripm_pane_g6_ParamLimits

0xa7aa,	// (0x0003dbf8) blid2_tripm_pane_g6

0x0167,	// (0x000335b5) mp4_progress_pane_g1

0xa802,	// (0x0003dc50) blid2_tripm_values_pane_ParamLimits

0xa802,	// (0x0003dc50) blid2_tripm_values_pane

0xa8c3,	// (0x0003dd11) blid2_tripm_values_pane_t1

0xa8d1,	// (0x0003dd1f) blid2_tripm_values_pane_t2

0xa8df,	// (0x0003dd2d) blid2_tripm_values_pane_t3

0xa8ed,	// (0x0003dd3b) blid2_tripm_values_pane_t4

0xa8fb,	// (0x0003dd49) blid2_tripm_values_pane_t5

0xa909,	// (0x0003dd57) blid2_tripm_values_pane_t6

0xa917,	// (0x0003dd65) blid2_tripm_values_pane_t7

0xa925,	// (0x0003dd73) blid2_tripm_values_pane_t8

0xa933,	// (0x0003dd81) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x00042fa0) blid2_tripm_values_pane_t

0x5728,	// (0x00038b76) call_video_pane_t1_ParamLimits

0x5745,	// (0x00038b93) call_video_pane_t2_ParamLimits

0xf28d,	// (0x000426db) call_video_pane_t_ParamLimits

0x3578,	// (0x000369c6) msg_header_pane_g1_ParamLimits

0xd15c,	// (0x000405aa) msg_header_pane_g2_ParamLimits

0xd15c,	// (0x000405aa) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x000428f5) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x000428f5) msg_header_pane_g

0xc589,	// (0x0003f9d7) main_clock2_pane_ParamLimits

0x89e9,	// (0x0003be37) grid_clock2_toolbar_pane_ParamLimits

0x89e9,	// (0x0003be37) grid_clock2_toolbar_pane

0x89e9,	// (0x0003be37) listscroll_clock2_pane_ParamLimits

0x89e9,	// (0x0003be37) listscroll_clock2_pane

0x8a9d,	// (0x0003beeb) main_clock2_pane_t3_ParamLimits

0x8a9d,	// (0x0003beeb) main_clock2_pane_t3

0x8aaf,	// (0x0003befd) main_clock2_pane_t4_ParamLimits

0x8aaf,	// (0x0003befd) main_clock2_pane_t4

0x0bab,	// (0x00033ff9) cell_clock2_toolbar_pane

0x0bb3,	// (0x00034001) cell_clock2_toolbar_pane_cp01

0x0bb3,	// (0x00034001) cell_clock2_toolbar_pane_cp02

0x0bbb,	// (0x00034009) cell_clock2_toolbar_pane_cp03

0x0bc3,	// (0x00034011) list_clock2_pane

0xcea5,	// (0x000402f3) scroll_pane_cp10

0x0bcb,	// (0x00034019) list_single_clock2_pane_ParamLimits

0x0bcb,	// (0x00034019) list_single_clock2_pane

0xcfdf,	// (0x0004042d) list_highlight_pane_cp08

0x0bd8,	// (0x00034026) list_single_clock2_pane_t1

0x0be6,	// (0x00034034) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x00042fb3) list_single_clock2_pane_t

0x44fd,	// (0x0003794b) bg_button_pane_cp10

0x0bf4,	// (0x00034042) cell_clock2_toolbar_pane_g1

0x6fab,	// (0x0003a3f9) aid_main_viewer_pane_g1_ParamLimits

0x6fab,	// (0x0003a3f9) aid_main_viewer_pane_g1

0x6fb7,	// (0x0003a405) aid_main_viewer_pane_g2_ParamLimits

0x6fb7,	// (0x0003a405) aid_main_viewer_pane_g2

0x6fc3,	// (0x0003a411) aid_main_viewer_pane_g3_ParamLimits

0x6fc3,	// (0x0003a411) aid_main_viewer_pane_g3

0x6fd4,	// (0x0003a422) aid_main_viewer_pane_g4_ParamLimits

0x6fd4,	// (0x0003a422) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x00042906) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x00042906) aid_main_viewer_pane_g

0x775e,	// (0x0003abac) main_calc_pane_ParamLimits

0x7779,	// (0x0003abc7) main_dialer2_pane_ParamLimits

0x44fd,	// (0x0003794b) main_cam6_pane

0x44fd,	// (0x0003794b) main_vid6_pane

0x89f5,	// (0x0003be43) listscroll_gen_pane_cp06_ParamLimits

0x89f5,	// (0x0003be43) listscroll_gen_pane_cp06

0x8ac1,	// (0x0003bf0f) main_clock2_pane_t5_ParamLimits

0x8ac1,	// (0x0003bf0f) main_clock2_pane_t5

0x8b10,	// (0x0003bf5e) aid_call2_pane_cp10_ParamLimits

0x8b22,	// (0x0003bf70) aid_call_pane_cp10_ParamLimits

0xcf14,	// (0x00040362) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf14,	// (0x00040362) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8b34,	// (0x0003bf82) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8b34,	// (0x0003bf82) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf14,	// (0x00040362) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x00042c3c) popup_clock_analogue_window_cp10_g_ParamLimits

0x8b46,	// (0x0003bf94) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9316,	// (0x0003c764) cell_dialer2_keypad_pane_g2_ParamLimits

0x9316,	// (0x0003c764) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x00042d22) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x00042d22) cell_dialer2_keypad_pane_g

0x9332,	// (0x0003c780) cell_dialer2_keypad_pane_t1

0x9d44,	// (0x0003d192) main_cset_text2_pane_ParamLimits

0x9d44,	// (0x0003d192) main_cset_text2_pane

0x08fe,	// (0x00033d4c) area_vitu2_query_pane_g1_ParamLimits

0x38fd,	// (0x00036d4b) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x00042ed7) area_vitu2_query_pane_g_ParamLimits

0x39ae,	// (0x00036dfc) area_vitu2_query_pane_t7_ParamLimits

0x39ae,	// (0x00036dfc) area_vitu2_query_pane_t7

0xa4b9,	// (0x0003d907) bg_button_pane_cp018_ParamLimits

0xa4c7,	// (0x0003d915) bg_button_pane_cp021_ParamLimits

0x39d2,	// (0x00036e20) bg_button_pane_cp022_ParamLimits

0x39d2,	// (0x00036e20) bg_vkb2_func_pane_cp08_ParamLimits

0xa4b9,	// (0x0003d907) bg_vkb2_func_pane_cp06_ParamLimits

0xa4c7,	// (0x0003d915) bg_vkb2_func_pane_cp07_ParamLimits

0x39e3,	// (0x00036e31) input_focus_pane_cp09_ParamLimits

0xa941,	// (0x0003dd8f) cam6_autofocus_pane_ParamLimits

0xa941,	// (0x0003dd8f) cam6_autofocus_pane

0xa963,	// (0x0003ddb1) cam6_image_uncrop_pane_ParamLimits

0xa963,	// (0x0003ddb1) cam6_image_uncrop_pane

0xa990,	// (0x0003ddde) cam6_indi_pane_ParamLimits

0xa990,	// (0x0003ddde) cam6_indi_pane

0xa9aa,	// (0x0003ddf8) cam6_mode_pane_ParamLimits

0xa9aa,	// (0x0003ddf8) cam6_mode_pane

0xa9be,	// (0x0003de0c) cam6_timer_pane_ParamLimits

0xa9be,	// (0x0003de0c) cam6_timer_pane

0xa9ca,	// (0x0003de18) cam6_zoom_pane_ParamLimits

0xa9ca,	// (0x0003de18) cam6_zoom_pane

0x9739,	// (0x0003cb87) cam6_mode_pane_g1_ParamLimits

0x9739,	// (0x0003cb87) cam6_mode_pane_g1

0x9751,	// (0x0003cb9f) cam6_mode_pane_g2_ParamLimits

0x9751,	// (0x0003cb9f) cam6_mode_pane_g2

0x975d,	// (0x0003cbab) cam6_mode_pane_g3_ParamLimits

0x975d,	// (0x0003cbab) cam6_mode_pane_g3

0x9769,	// (0x0003cbb7) cam6_mode_pane_g4_ParamLimits

0x9769,	// (0x0003cbb7) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x00042fb8) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x00042fb8) cam6_mode_pane_g

0x0c0a,	// (0x00034058) bg_tb_trans_pane_cp08_ParamLimits

0x0c0a,	// (0x00034058) bg_tb_trans_pane_cp08

0x0c18,	// (0x00034066) cam6_battery_pane_ParamLimits

0x0c18,	// (0x00034066) cam6_battery_pane

0x0c2e,	// (0x0003407c) cam6_indi_pane_g1_ParamLimits

0x0c2e,	// (0x0003407c) cam6_indi_pane_g1

0x0c40,	// (0x0003408e) cam6_indi_pane_g2_ParamLimits

0x0c40,	// (0x0003408e) cam6_indi_pane_g2

0x0c52,	// (0x000340a0) cam6_indi_pane_g3_ParamLimits

0x0c52,	// (0x000340a0) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x00042fc1) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x00042fc1) cam6_indi_pane_g

0x0c64,	// (0x000340b2) cam6_indi_pane_t1_ParamLimits

0x0c64,	// (0x000340b2) cam6_indi_pane_t1

0x9832,	// (0x0003cc80) cam6_autofocus_pane_g1

0x983a,	// (0x0003cc88) cam6_autofocus_pane_g2

0x9842,	// (0x0003cc90) cam6_autofocus_pane_g3

0x984a,	// (0x0003cc98) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x00042fc8) cam6_autofocus_pane_g

0x0c8a,	// (0x000340d8) cam6_timer_pane_g1

0x0c92,	// (0x000340e0) cam6_timer_pane_t1

0x0ca0,	// (0x000340ee) cam6_zoom_cont_pane

0x0ca8,	// (0x000340f6) cam6_zoom_pane_g1

0x0cb0,	// (0x000340fe) cam6_zoom_pane_g2

0xa9e6,	// (0x0003de34) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x00042fd1) cam6_zoom_pane_g

0xe891,	// (0x00041cdf) cam6_battery_pane_g1

0xe891,	// (0x00041cdf) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x00042b49) cam6_battery_pane_g

0x0cb8,	// (0x00034106) cam6_zoom_cont_pane_g1

0x0cc1,	// (0x0003410f) cam6_zoom_cont_pane_g2

0x0cca,	// (0x00034118) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x00042fd8) cam6_zoom_cont_pane_g

0xaa03,	// (0x0003de51) cam6_mode_pane_cp_ParamLimits

0xaa03,	// (0x0003de51) cam6_mode_pane_cp

0xa9ca,	// (0x0003de18) cam6_zoom_pane_cp_ParamLimits

0xa9ca,	// (0x0003de18) cam6_zoom_pane_cp

0xaa17,	// (0x0003de65) vid6_image_uncrop_cif_pane_ParamLimits

0xaa17,	// (0x0003de65) vid6_image_uncrop_cif_pane

0xaa43,	// (0x0003de91) vid6_image_uncrop_nhd_pane_ParamLimits

0xaa43,	// (0x0003de91) vid6_image_uncrop_nhd_pane

0xa963,	// (0x0003ddb1) vid6_image_uncrop_vga_pane_ParamLimits

0xa963,	// (0x0003ddb1) vid6_image_uncrop_vga_pane

0xaa62,	// (0x0003deb0) vid6_image_uncrop_wvga_pane_ParamLimits

0xaa62,	// (0x0003deb0) vid6_image_uncrop_wvga_pane

0xaa81,	// (0x0003decf) vid6_indi_pane_ParamLimits

0xaa81,	// (0x0003decf) vid6_indi_pane

0x0c0a,	// (0x00034058) bg_tb_trans_pane_cp09_ParamLimits

0x0c0a,	// (0x00034058) bg_tb_trans_pane_cp09

0x0ce2,	// (0x00034130) cam6_battery_pane_cp_ParamLimits

0x0ce2,	// (0x00034130) cam6_battery_pane_cp

0x0cee,	// (0x0003413c) vid6_indi_pane_g1_ParamLimits

0x0cee,	// (0x0003413c) vid6_indi_pane_g1

0x0d00,	// (0x0003414e) vid6_indi_pane_g2_ParamLimits

0x0d00,	// (0x0003414e) vid6_indi_pane_g2

0x0d12,	// (0x00034160) vid6_indi_pane_g3_ParamLimits

0x0d12,	// (0x00034160) vid6_indi_pane_g3

0x0d29,	// (0x00034177) vid6_indi_pane_g4_ParamLimits

0x0d29,	// (0x00034177) vid6_indi_pane_g4

0x0d40,	// (0x0003418e) vid6_indi_pane_g5_ParamLimits

0x0d40,	// (0x0003418e) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x00042fdf) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x00042fdf) vid6_indi_pane_g

0x0d5a,	// (0x000341a8) vid6_indi_pane_t1_ParamLimits

0x0d5a,	// (0x000341a8) vid6_indi_pane_t1

0x0d70,	// (0x000341be) vid6_indi_pane_t2_ParamLimits

0x0d70,	// (0x000341be) vid6_indi_pane_t2

0x0d98,	// (0x000341e6) vid6_indi_pane_t3_ParamLimits

0x0d98,	// (0x000341e6) vid6_indi_pane_t3

0x0dc0,	// (0x0003420e) vid6_indi_pane_t4_ParamLimits

0x0dc0,	// (0x0003420e) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x00042fea) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x00042fea) vid6_indi_pane_t

0x0de4,	// (0x00034232) wait_bar_pane_cp08

0xaaa6,	// (0x0003def4) main_cset_text2_pane_t1_ParamLimits

0xaaa6,	// (0x0003def4) main_cset_text2_pane_t1

0xa9ee,	// (0x0003de3c) listscroll_gen_pane_cp06_t1_ParamLimits

0xa9ee,	// (0x0003de3c) listscroll_gen_pane_cp06_t1

0x44fd,	// (0x0003794b) main_cam6_set_pane

0xeac1,	// (0x00041f0f) bg_tb_trans_pane_cp06_ParamLimits

0x96e5,	// (0x0003cb33) cam4_indicators_pane_g1_ParamLimits

0x96f5,	// (0x0003cb43) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x00042d5f) cam4_indicators_pane_g_ParamLimits

0x970d,	// (0x0003cb5b) cam4_indicators_pane_t1_ParamLimits

0x776b,	// (0x0003abb9) bg_tb_trans_pane_cp07_ParamLimits

0x97c5,	// (0x0003cc13) vid4_indicators_pane_g1_ParamLimits

0x97d7,	// (0x0003cc25) vid4_indicators_pane_g2_ParamLimits

0x97ea,	// (0x0003cc38) vid4_indicators_pane_g3_ParamLimits

0x97fb,	// (0x0003cc49) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x00042d71) vid4_indicators_pane_g_ParamLimits

0x9817,	// (0x0003cc65) vid4_indicators_pane_t1_ParamLimits

0xa5f5,	// (0x0003da43) vid4_progress_pane_g1_ParamLimits

0xa606,	// (0x0003da54) vid4_progress_pane_g2_ParamLimits

0x7031,	// (0x0003a47f) vid4_progress_pane_g3_ParamLimits

0x96f5,	// (0x0003cb43) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x00042f22) vid4_progress_pane_g_ParamLimits

0xa618,	// (0x0003da66) vid4_progress_pane_t1_ParamLimits

0xa62d,	// (0x0003da7b) vid4_progress_pane_t2_ParamLimits

0xa645,	// (0x0003da93) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x00042f2d) vid4_progress_pane_t_ParamLimits

0xa65c,	// (0x0003daaa) wait_bar_pane_cp07_ParamLimits

0xaacd,	// (0x0003df1b) main_cam6_set_pane_g2_ParamLimits

0xaacd,	// (0x0003df1b) main_cam6_set_pane_g2

0xaad9,	// (0x0003df27) main_cset6_listscroll_pane_ParamLimits

0xaad9,	// (0x0003df27) main_cset6_listscroll_pane

0xab06,	// (0x0003df54) main_cset6_slider_pane_ParamLimits

0xab06,	// (0x0003df54) main_cset6_slider_pane

0xab12,	// (0x0003df60) main_cset6_text2_pane_ParamLimits

0xab12,	// (0x0003df60) main_cset6_text2_pane

0x0df3,	// (0x00034241) main_cset6_text_pane

0x0dfb,	// (0x00034249) main_cset_list_pane_copy1_ParamLimits

0x0dfb,	// (0x00034249) main_cset_list_pane_copy1

0x0e0b,	// (0x00034259) scroll_pane_cp028_copy1

0xab25,	// (0x0003df73) cset_list_set_pane_copy1

0xab35,	// (0x0003df83) aid_position_infowindow_above_copy1

0xab3d,	// (0x0003df8b) aid_position_infowindow_below_copy1

0x3a3c,	// (0x00036e8a) cset_list_set_pane_g1_copy1

0x3a44,	// (0x00036e92) cset_list_set_pane_g3_copy1_ParamLimits

0x3a44,	// (0x00036e92) cset_list_set_pane_g3_copy1

0x3a53,	// (0x00036ea1) cset_list_set_pane_t1_copy1_ParamLimits

0x3a53,	// (0x00036ea1) cset_list_set_pane_t1_copy1

0x776b,	// (0x0003abb9) list_highlight_pane_cp021_copy1_ParamLimits

0x776b,	// (0x0003abb9) list_highlight_pane_cp021_copy1

0x0e14,	// (0x00034262) cset6_slider_pane_ParamLimits

0x0e14,	// (0x00034262) cset6_slider_pane

0x0e40,	// (0x0003428e) main_cset6_slider_pane_g1_ParamLimits

0x0e40,	// (0x0003428e) main_cset6_slider_pane_g1

0xab45,	// (0x0003df93) main_cset6_slider_pane_g2_ParamLimits

0xab45,	// (0x0003df93) main_cset6_slider_pane_g2

0x0e68,	// (0x000342b6) main_cset6_slider_pane_g3_ParamLimits

0x0e68,	// (0x000342b6) main_cset6_slider_pane_g3

0xab6d,	// (0x0003dfbb) main_cset6_slider_pane_g4_ParamLimits

0xab6d,	// (0x0003dfbb) main_cset6_slider_pane_g4

0xab79,	// (0x0003dfc7) main_cset6_slider_pane_g5_ParamLimits

0xab79,	// (0x0003dfc7) main_cset6_slider_pane_g5

0x052d,	// (0x0003397b) main_cset6_slider_pane_g7_ParamLimits

0x052d,	// (0x0003397b) main_cset6_slider_pane_g7

0x0539,	// (0x00033987) main_cset6_slider_pane_g8_ParamLimits

0x0539,	// (0x00033987) main_cset6_slider_pane_g8

0xab85,	// (0x0003dfd3) main_cset6_slider_pane_g9_ParamLimits

0xab85,	// (0x0003dfd3) main_cset6_slider_pane_g9

0xab91,	// (0x0003dfdf) main_cset6_slider_pane_g10_ParamLimits

0xab91,	// (0x0003dfdf) main_cset6_slider_pane_g10

0xab9d,	// (0x0003dfeb) main_cset6_slider_pane_g11_ParamLimits

0xab9d,	// (0x0003dfeb) main_cset6_slider_pane_g11

0xaba9,	// (0x0003dff7) main_cset6_slider_pane_g12_ParamLimits

0xaba9,	// (0x0003dff7) main_cset6_slider_pane_g12

0xabb5,	// (0x0003e003) main_cset6_slider_pane_g13_ParamLimits

0xabb5,	// (0x0003e003) main_cset6_slider_pane_g13

0xabc1,	// (0x0003e00f) main_cset6_slider_pane_g14_ParamLimits

0xabc1,	// (0x0003e00f) main_cset6_slider_pane_g14

0xabcd,	// (0x0003e01b) main_cset6_slider_pane_g15_ParamLimits

0xabcd,	// (0x0003e01b) main_cset6_slider_pane_g15

0xabe5,	// (0x0003e033) main_cset6_slider_pane_g16_ParamLimits

0xabe5,	// (0x0003e033) main_cset6_slider_pane_g16

0xabf1,	// (0x0003e03f) main_cset6_slider_pane_g17_ParamLimits

0xabf1,	// (0x0003e03f) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x00042ff3) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x00042ff3) main_cset6_slider_pane_g

0x0e74,	// (0x000342c2) main_cset6_slider_pane_t1_ParamLimits

0x0e74,	// (0x000342c2) main_cset6_slider_pane_t1

0xac15,	// (0x0003e063) main_cset6_slider_pane_t2_ParamLimits

0xac15,	// (0x0003e063) main_cset6_slider_pane_t2

0xac40,	// (0x0003e08e) main_cset6_slider_pane_t3_ParamLimits

0xac40,	// (0x0003e08e) main_cset6_slider_pane_t3

0xac6b,	// (0x0003e0b9) main_cset6_slider_pane_t4_ParamLimits

0xac6b,	// (0x0003e0b9) main_cset6_slider_pane_t4

0xac96,	// (0x0003e0e4) main_cset6_slider_pane_t5_ParamLimits

0xac96,	// (0x0003e0e4) main_cset6_slider_pane_t5

0x0eb5,	// (0x00034303) main_cset6_slider_pane_t7_ParamLimits

0x0eb5,	// (0x00034303) main_cset6_slider_pane_t7

0xacc1,	// (0x0003e10f) main_cset6_slider_pane_t8_ParamLimits

0xacc1,	// (0x0003e10f) main_cset6_slider_pane_t8

0xace5,	// (0x0003e133) main_cset6_slider_pane_t9_ParamLimits

0xace5,	// (0x0003e133) main_cset6_slider_pane_t9

0xad09,	// (0x0003e157) main_cset6_slider_pane_t10_ParamLimits

0xad09,	// (0x0003e157) main_cset6_slider_pane_t10

0xad2d,	// (0x0003e17b) main_cset6_slider_pane_t11_ParamLimits

0xad2d,	// (0x0003e17b) main_cset6_slider_pane_t11

0x0eeb,	// (0x00034339) main_cset6_slider_pane_t14_ParamLimits

0x0eeb,	// (0x00034339) main_cset6_slider_pane_t14

0x0f24,	// (0x00034372) main_cset6_slider_pane_t15_ParamLimits

0x0f24,	// (0x00034372) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x00043018) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x00043018) main_cset6_slider_pane_t

0x0f5d,	// (0x000343ab) cset_slider_pane_g1_copy1

0x0f66,	// (0x000343b4) cset_slider_pane_g2_copy1

0x0f6f,	// (0x000343bd) cset_slider_pane_g3_copy1

0x44fd,	// (0x0003794b) bg_popup_sub_pane_cp011_copy1

0x0712,	// (0x00033b60) main_cset_text_pane_g1_copy1

0x071a,	// (0x00033b68) main_cset_text_pane_t1_copy1

0x0728,	// (0x00033b76) main_cset_text_pane_t2_copy1

0x0736,	// (0x00033b84) main_cset_text_pane_t3_copy1

0x0744,	// (0x00033b92) main_cset_text_pane_t4_copy1

0x0752,	// (0x00033ba0) main_cset_text_pane_t5_copy1

0x0760,	// (0x00033bae) main_cset_text_pane_t6_copy1

0x076e,	// (0x00033bbc) main_cset_text_pane_t7_copy1

0xad51,	// (0x0003e19f) main_cset_text2_pane_t1_copy1

0x44fd,	// (0x0003794b) main_ncimui_pane

0x77be,	// (0x0003ac0c) popup_query_ncimui_window_ParamLimits

0x77be,	// (0x0003ac0c) popup_query_ncimui_window

0x3629,	// (0x00036a77) field_cale_ev2_pane_g4_ParamLimits

0x3629,	// (0x00036a77) field_cale_ev2_pane_g4

0x902c,	// (0x0003c47a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x902c,	// (0x0003c47a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x00042cfd) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x00042cfd) cell_video_dialer_keypad_pane_g

0x9044,	// (0x0003c492) cell_video_dialer_keypad_pane_t1

0x44fd,	// (0x0003794b) bg_popup_window_pane_cp012

0xcd91,	// (0x000401df) heading_pane_cp06

0x1067,	// (0x000344b5) ncim_query_content_pane

0x44fd,	// (0x0003794b) bg_popup_heading_pane_cp01

0x106f,	// (0x000344bd) ncim_heading_pane_t1

0x107d,	// (0x000344cb) ncim_indicator_popup_pane

0x108f,	// (0x000344dd) ncim_query_button_pane

0x10a5,	// (0x000344f3) ncim_query_content_pane_t1

0x10b7,	// (0x00034505) ncim_query_content_pane_t2

0x0005,

0xfc09,	// (0x00043057) ncim_query_content_pane_t

0x10f1,	// (0x0003453f) ncim_query_list_pane

0x1103,	// (0x00034551) ncim_query_popup_pane

0x107d,	// (0x000344cb) ncim_indicator_popup_pane_ParamLimits

0xae78,	// (0x0003e2c6) ncim_query_content_pane_g1_ParamLimits

0xae78,	// (0x0003e2c6) ncim_query_content_pane_g1

0x10a5,	// (0x000344f3) ncim_query_content_pane_t1_ParamLimits

0x10b7,	// (0x00034505) ncim_query_content_pane_t2_ParamLimits

0xae84,	// (0x0003e2d2) ncim_query_content_pane_t3_ParamLimits

0xae84,	// (0x0003e2d2) ncim_query_content_pane_t3

0xaea1,	// (0x0003e2ef) ncim_query_content_pane_t4_ParamLimits

0xaea1,	// (0x0003e2ef) ncim_query_content_pane_t4

0xaebe,	// (0x0003e30c) ncim_query_content_pane_t5_ParamLimits

0xaebe,	// (0x0003e30c) ncim_query_content_pane_t5

0x10c9,	// (0x00034517) ncim_query_content_pane_t6_ParamLimits

0x10c9,	// (0x00034517) ncim_query_content_pane_t6

0xfc09,	// (0x00043057) ncim_query_content_pane_t_ParamLimits

0x10f1,	// (0x0003453f) ncim_query_list_pane_ParamLimits

0x1103,	// (0x00034551) ncim_query_popup_pane_ParamLimits

0x1117,	// (0x00034565) wait_bar_pane_cp04

0x44fd,	// (0x0003794b) input_focus_pane_cp011

0x111f,	// (0x0003456d) ncim_query_popup_pane_t1

0x112d,	// (0x0003457b) ncim_list_query_list_pane_ParamLimits

0x112d,	// (0x0003457b) ncim_list_query_list_pane

0x44fd,	// (0x0003794b) bg_button_pane_cp027

0x1140,	// (0x0003458e) ncim_query_button_pane_g1

0x44fd,	// (0x0003794b) list_highlight_pane_cp012

0x114a,	// (0x00034598) ncim_list_query_list_pane_g1

0x1152,	// (0x000345a0) ncim_list_query_list_pane_t1

0x9701,	// (0x0003cb4f) cam4_indicators_pane_g3_ParamLimits

0x9701,	// (0x0003cb4f) cam4_indicators_pane_g3

0x9807,	// (0x0003cc55) vid4_indicators_pane_g5_ParamLimits

0x9807,	// (0x0003cc55) vid4_indicators_pane_g5

0x9701,	// (0x0003cb4f) vid4_progress_pane_g5_ParamLimits

0x9701,	// (0x0003cb4f) vid4_progress_pane_g5

0xad7f,	// (0x0003e1cd) main_ncimui_pane_g1

0xadd9,	// (0x0003e227) ncimui_group_query_pane_ParamLimits

0xadd9,	// (0x0003e227) ncimui_group_query_pane

0xae23,	// (0x0003e271) ncimui_list_pane_ParamLimits

0xae23,	// (0x0003e271) ncimui_list_pane

0xae44,	// (0x0003e292) ncimui_text_pane_ParamLimits

0xae44,	// (0x0003e292) ncimui_text_pane

0xaedb,	// (0x0003e329) ncimui_text_pane_t1_ParamLimits

0xaedb,	// (0x0003e329) ncimui_text_pane_t1

0x1160,	// (0x000345ae) ncimui_list_single_graphic_pane_ParamLimits

0x1160,	// (0x000345ae) ncimui_list_single_graphic_pane

0xaefa,	// (0x0003e348) ncimui_query_pane_ParamLimits

0xaefa,	// (0x0003e348) ncimui_query_pane

0x44fd,	// (0x0003794b) list_highlight_pane_cp013

0x1170,	// (0x000345be) ncim_list_query_list_pane_t1_copy1

0x114a,	// (0x00034598) ncim_list_single_graphic_pane_g1

0x117e,	// (0x000345cc) ncim_query_button_pane_cp01

0x118a,	// (0x000345d8) ncim_query_entry_pane_ParamLimits

0x118a,	// (0x000345d8) ncim_query_entry_pane

0x119d,	// (0x000345eb) ncimui_query_pane_g1

0x11a9,	// (0x000345f7) ncimui_query_pane_t1_ParamLimits

0x11a9,	// (0x000345f7) ncimui_query_pane_t1

0x776b,	// (0x0003abb9) input_focus_pane_cp012

0x11c2,	// (0x00034610) ncim_query_entry_pane_t1

0xc589,	// (0x0003f9d7) main_im_pane_ParamLimits

0x776b,	// (0x0003abb9) main_mobtv_pane_ParamLimits

0x776b,	// (0x0003abb9) main_mobtv_pane

0xabfd,	// (0x0003e04b) main_cset6_slider_pane_g18_ParamLimits

0xabfd,	// (0x0003e04b) main_cset6_slider_pane_g18

0xac09,	// (0x0003e057) main_cset6_slider_pane_g19_ParamLimits

0xac09,	// (0x0003e057) main_cset6_slider_pane_g19

0x03af,	// (0x000337fd) bg_main_mobtv_pane_ParamLimits

0x03af,	// (0x000337fd) bg_main_mobtv_pane

0xaf0d,	// (0x0003e35b) main_mobtv_info_pane

0xaf18,	// (0x0003e366) main_mobtv_loading_pane_ParamLimits

0xaf18,	// (0x0003e366) main_mobtv_loading_pane

0x11e2,	// (0x00034630) main_mobtv_pg_channel_list_pane

0x11ec,	// (0x0003463a) main_mobtv_pg_hdr_pane

0xaf25,	// (0x0003e373) main_mobtv_programe_curr_pane_ParamLimits

0xaf25,	// (0x0003e373) main_mobtv_programe_curr_pane

0xaf32,	// (0x0003e380) main_mobtv_programe_next_pane_ParamLimits

0xaf32,	// (0x0003e380) main_mobtv_programe_next_pane

0x11f5,	// (0x00034643) popup_mobtv_noti_window

0xe891,	// (0x00041cdf) main_tv_pg_hdr_pane_g1

0x11ff,	// (0x0003464d) main_tv_pg_hdr_pane_g2

0x1207,	// (0x00034655) main_tv_pg_hdr_pane_g3

0x120f,	// (0x0003465d) main_tv_pg_hdr_pane_g4

0x1217,	// (0x00034665) main_tv_pg_hdr_pane_g5

0x1221,	// (0x0003466f) main_tv_pg_hdr_pane_g6

0x122b,	// (0x00034679) main_tv_pg_hdr_pane_g7

0x1235,	// (0x00034683) main_tv_pg_hdr_pane_g8

0x123f,	// (0x0003468d) main_tv_pg_hdr_pane_g9

0x1249,	// (0x00034697) main_tv_pg_hdr_pane_g10

0x1253,	// (0x000346a1) main_tv_pg_hdr_pane_g11

0x000a,

0xfc16,	// (0x00043064) main_tv_pg_hdr_pane_g

0x125d,	// (0x000346ab) main_tv_pg_hdr_pane_t1

0x126b,	// (0x000346b9) main_tv_pg_hdr_pane_t2

0x1279,	// (0x000346c7) main_tv_pg_hdr_pane_t3

0x1289,	// (0x000346d7) main_tv_pg_hdr_pane_t4

0x1299,	// (0x000346e7) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2d,	// (0x0004307b) main_tv_pg_hdr_pane_t

0x12a9,	// (0x000346f7) single_mobtv_pg_channel_pane_ParamLimits

0x12a9,	// (0x000346f7) single_mobtv_pg_channel_pane

0x12bb,	// (0x00034709) single_mobtv_pg_channel_table_pane

0x12c4,	// (0x00034712) single_mobtv_pg_channel_thumb_pane

0x12cd,	// (0x0003471b) single_tv_pg_channel_pane_g1

0x12d6,	// (0x00034724) single_tv_pg_channel_pane_g2

0x0001,

0xfc38,	// (0x00043086) single_tv_pg_channel_pane_g

0xeac1,	// (0x00041f0f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeac1,	// (0x00041f0f) bg_single_mobtv_pg_channel_thumb_pane

0x12df,	// (0x0003472d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x12df,	// (0x0003472d) single_mobtv_pg_channel_thumb_pane_g1

0x12ed,	// (0x0003473b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x12ed,	// (0x0003473b) single_mobtv_pg_channel_thumb_pane_g2

0x12f9,	// (0x00034747) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x12f9,	// (0x00034747) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3d,	// (0x0004308b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3d,	// (0x0004308b) single_mobtv_pg_channel_thumb_pane_g

0x1305,	// (0x00034753) single_mobtv_pg_channel_thumb_pane_t1

0x1313,	// (0x00034761) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc44,	// (0x00043092) single_mobtv_pg_channel_thumb_pane_t

0xe891,	// (0x00041cdf) bg_single_mobtv_pg_channel_table_pane_g1

0xe891,	// (0x00041cdf) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x00042b49) bg_single_mobtv_pg_channel_table_pane_g

0x1321,	// (0x0003476f) single_mobtv_pg_channel_table_pane_t1

0x132f,	// (0x0003477d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc49,	// (0x00043097) single_mobtv_pg_channel_table_pane_t

0xaf47,	// (0x0003e395) main_mobtv_info_pane_g1_ParamLimits

0xaf47,	// (0x0003e395) main_mobtv_info_pane_g1

0xaf63,	// (0x0003e3b1) main_mobtv_info_pane_t1_ParamLimits

0xaf63,	// (0x0003e3b1) main_mobtv_info_pane_t1

0xafdb,	// (0x0003e429) main_mobtv_info_pane_t2_ParamLimits

0xafdb,	// (0x0003e429) main_mobtv_info_pane_t2

0x0002,

0xfc53,	// (0x000430a1) main_mobtv_info_pane_t_ParamLimits

0xfc53,	// (0x000430a1) main_mobtv_info_pane_t

0xb06c,	// (0x0003e4ba) wait_bar_pane_cp05

0xb07e,	// (0x0003e4cc) main_mobtv_loading_pane_g1_ParamLimits

0xb07e,	// (0x0003e4cc) main_mobtv_loading_pane_g1

0xb08a,	// (0x0003e4d8) main_mobtv_loading_pane_g2_ParamLimits

0xb08a,	// (0x0003e4d8) main_mobtv_loading_pane_g2

0xb096,	// (0x0003e4e4) main_mobtv_loading_pane_g3_ParamLimits

0xb096,	// (0x0003e4e4) main_mobtv_loading_pane_g3

0x0002,

0xfc5a,	// (0x000430a8) main_mobtv_loading_pane_g_ParamLimits

0xfc5a,	// (0x000430a8) main_mobtv_loading_pane_g

0x133d,	// (0x0003478b) main_mobtv_loading_pane_t1_ParamLimits

0x133d,	// (0x0003478b) main_mobtv_loading_pane_t1

0x1355,	// (0x000347a3) main_mobtv_loading_pane_t2_ParamLimits

0x1355,	// (0x000347a3) main_mobtv_loading_pane_t2

0x0001,

0xfc61,	// (0x000430af) main_mobtv_loading_pane_t_ParamLimits

0xfc61,	// (0x000430af) main_mobtv_loading_pane_t

0xb0a4,	// (0x0003e4f2) wait_bar_pane_cp06_ParamLimits

0xb0a4,	// (0x0003e4f2) wait_bar_pane_cp06

0x1379,	// (0x000347c7) main_mobtv_programe_curr_pane_t1

0x1387,	// (0x000347d5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc66,	// (0x000430b4) main_mobtv_programe_curr_pane_t

0x1395,	// (0x000347e3) main_mobtv_programe_next_pane_t1

0x13a3,	// (0x000347f1) main_mobtv_programe_next_pane_t2

0x13b1,	// (0x000347ff) main_mobtv_programe_next_pane_t3

0x0002,

0xfc6b,	// (0x000430b9) main_mobtv_programe_next_pane_t

0x44fd,	// (0x0003794b) bg_popup_mobtv_noti_window_pane

0x13bf,	// (0x0003480d) popup_mobtv_noti_window_g1

0x13c7,	// (0x00034815) popup_mobtv_noti_window_t1

0x13d5,	// (0x00034823) popup_mobtv_noti_window_t2

0x0001,

0xfc72,	// (0x000430c0) popup_mobtv_noti_window_t

0xe891,	// (0x00041cdf) bg_popup_mobtv_noti_window_pane_g1

0x44fd,	// (0x0003794b) sc_clock_pane

0x44fd,	// (0x0003794b) main_fs_bigclock_pane

0xa7f0,	// (0x0003dc3e) blid2_tripm_pane_t4_ParamLimits

0xa7f0,	// (0x0003dc3e) blid2_tripm_pane_t4

0xb0b0,	// (0x0003e4fe) sc_clock_pane_g1_ParamLimits

0xb0b0,	// (0x0003e4fe) sc_clock_pane_g1

0xb0be,	// (0x0003e50c) sc_clock_pane_t1_ParamLimits

0xb0be,	// (0x0003e50c) sc_clock_pane_t1

0xb0d3,	// (0x0003e521) sc_clock_pane_t2_ParamLimits

0xb0d3,	// (0x0003e521) sc_clock_pane_t2

0xb0e5,	// (0x0003e533) sc_clock_pane_t3_ParamLimits

0xb0e5,	// (0x0003e533) sc_clock_pane_t3

0x0004,

0xfc77,	// (0x000430c5) sc_clock_pane_t_ParamLimits

0xfc77,	// (0x000430c5) sc_clock_pane_t

0xb8ea,	// (0x0003ed38) main_fs_bigclock_indicator_pane_ParamLimits

0xb8ea,	// (0x0003ed38) main_fs_bigclock_indicator_pane

0xb172,	// (0x0003e5c0) main_fs_bigclock_pane_g1_ParamLimits

0xb172,	// (0x0003e5c0) main_fs_bigclock_pane_g1

0xb8f6,	// (0x0003ed44) main_fs_bigclock_pane_t1_ParamLimits

0xb8f6,	// (0x0003ed44) main_fs_bigclock_pane_t1

0xb908,	// (0x0003ed56) main_fs_bigclock_pane_t2_ParamLimits

0xb908,	// (0x0003ed56) main_fs_bigclock_pane_t2

0xb91c,	// (0x0003ed6a) main_fs_bigclock_pane_t3_ParamLimits

0xb91c,	// (0x0003ed6a) main_fs_bigclock_pane_t3

0x0002,

0xfe7b,	// (0x000432c9) main_fs_bigclock_pane_t_ParamLimits

0xfe7b,	// (0x000432c9) main_fs_bigclock_pane_t

0x2057,	// (0x000354a5) main_fs_bigclock_indicator_pane_g1

0x1097,	// (0x000344e5) ncim_query_content_pane_g2_ParamLimits

0x1097,	// (0x000344e5) ncim_query_content_pane_g2

0x0001,

0xfc04,	// (0x00043052) ncim_query_content_pane_g_ParamLimits

0xfc04,	// (0x00043052) ncim_query_content_pane_g

0xb0f7,	// (0x0003e545) sc_clock_pane_t4_ParamLimits

0xb0f7,	// (0x0003e545) sc_clock_pane_t4

0x776b,	// (0x0003abb9) main_radioblah_pane

0x0254,	// (0x000336a2) cell_call4_button_pane_t1_copy1_ParamLimits

0x0254,	// (0x000336a2) cell_call4_button_pane_t1_copy1

0xad89,	// (0x0003e1d7) main_ncimui_pane_t1_ParamLimits

0xad89,	// (0x0003e1d7) main_ncimui_pane_t1

0xada3,	// (0x0003e1f1) main_ncimui_pane_t2_ParamLimits

0xada3,	// (0x0003e1f1) main_ncimui_pane_t2

0x0002,

0xfbfd,	// (0x0004304b) main_ncimui_pane_t_ParamLimits

0xfbfd,	// (0x0004304b) main_ncimui_pane_t

0x1521,	// (0x0003496f) main_radioblah_anim_pane_ParamLimits

0x1521,	// (0x0003496f) main_radioblah_anim_pane

0x1532,	// (0x00034980) main_radioblah_info_pane_ParamLimits

0x1532,	// (0x00034980) main_radioblah_info_pane

0x1546,	// (0x00034994) main_radioblah_pane_t1_ParamLimits

0x1546,	// (0x00034994) main_radioblah_pane_t1

0x1562,	// (0x000349b0) main_radioblah_pane_t2_ParamLimits

0x1562,	// (0x000349b0) main_radioblah_pane_t2

0x0003,

0xfc98,	// (0x000430e6) main_radioblah_pane_t_ParamLimits

0xfc98,	// (0x000430e6) main_radioblah_pane_t

0xb1c4,	// (0x0003e612) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb1c4,	// (0x0003e612) main_radioblah_rocker_ctrl_pane

0x15aa,	// (0x000349f8) main_radioblah_info_pane_t1_ParamLimits

0x15aa,	// (0x000349f8) main_radioblah_info_pane_t1

0xb20d,	// (0x0003e65b) main_radioblah_info_pane_t2_ParamLimits

0xb20d,	// (0x0003e65b) main_radioblah_info_pane_t2

0x0003,

0xfca1,	// (0x000430ef) main_radioblah_info_pane_t_ParamLimits

0xfca1,	// (0x000430ef) main_radioblah_info_pane_t

0xe891,	// (0x00041cdf) main_radioblah_rocker_ctrl_pane_g1

0xb2bd,	// (0x0003e70b) main_radioblah_rocker_ctrl_pane_g2

0xb2c5,	// (0x0003e713) main_radioblah_rocker_ctrl_pane_g3

0xb2cd,	// (0x0003e71b) main_radioblah_rocker_ctrl_pane_g4

0xb2d5,	// (0x0003e723) main_radioblah_rocker_ctrl_pane_g5

0xb2dd,	// (0x0003e72b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaa,	// (0x000430f8) main_radioblah_rocker_ctrl_pane_g

0xad51,	// (0x0003e19f) main_cset_text2_pane_t1_copy1_ParamLimits

0x962f,	// (0x0003ca7d) cam4_image_uncrop_qvga_pane

0x9775,	// (0x0003cbc3) vid4_image_uncrop_qcif_pane

0xa982,	// (0x0003ddd0) cam6_image_uncrop_qvga_pane_ParamLimits

0xa982,	// (0x0003ddd0) cam6_image_uncrop_qvga_pane

0x0cd2,	// (0x00034120) vid6_image_uncrop_qcif_pane_ParamLimits

0x0cd2,	// (0x00034120) vid6_image_uncrop_qcif_pane

0x44fd,	// (0x0003794b) bg_popup_preview_window_pane_cp03

0x1049,	// (0x00034497) list_cset_text2_pane

0x1051,	// (0x0003449f) main_cset6_text2_pane_g1

0x1059,	// (0x000344a7) main_cset6_text2_pane_t1

0xb2e5,	// (0x0003e733) list_cset_text2_pane_t1_ParamLimits

0xb2e5,	// (0x0003e733) list_cset_text2_pane_t1

0x776b,	// (0x0003abb9) main_radioblah_pane_ParamLimits

0xb058,	// (0x0003e4a6) main_mobtv_info_pane_t3_ParamLimits

0xb058,	// (0x0003e4a6) main_mobtv_info_pane_t3

0xb1b2,	// (0x0003e600) main_radioblah_pane_g1

0xb1dd,	// (0x0003e62b) main_radioblah_info_pane_g1

0xb262,	// (0x0003e6b0) main_radioblah_info_pane_t3_ParamLimits

0xb262,	// (0x0003e6b0) main_radioblah_info_pane_t3

0x6429,	// (0x00039877) highlight_cell_cale_month_pane_ParamLimits

0x6429,	// (0x00039877) highlight_cell_cale_month_pane

0x44fd,	// (0x0003794b) main_phob_fisheye_pane

0xeba3,	// (0x00041ff1) scroll_pane_cp0031_ParamLimits

0xeba3,	// (0x00041ff1) scroll_pane_cp0031

0x0de4,	// (0x00034232) wait_bar_pane_cp08_ParamLimits

0xab25,	// (0x0003df73) cset_list_set_pane_copy1_ParamLimits

0x15e4,	// (0x00034a32) highlight_cell_cale_month_pane_g1

0xb2fc,	// (0x0003e74a) highlight_cell_cale_month_pane_t1

0x09ee,	// (0x00033e3c) list_gen_pane_cp01

0x0518,	// (0x00033966) scroll_pane_01

0x0a48,	// (0x00033e96) list_single_double_fisheye_pane

0x3b39,	// (0x00036f87) list_double_fisheye_pane_g1_ParamLimits

0x3b39,	// (0x00036f87) list_double_fisheye_pane_g1

0x3b45,	// (0x00036f93) list_double_fisheye_pane_g2_ParamLimits

0x3b45,	// (0x00036f93) list_double_fisheye_pane_g2

0x3b59,	// (0x00036fa7) list_double_fisheye_pane_g3_ParamLimits

0x3b59,	// (0x00036fa7) list_double_fisheye_pane_g3

0x0004,

0xfcb7,	// (0x00043105) list_double_fisheye_pane_g_ParamLimits

0xfcb7,	// (0x00043105) list_double_fisheye_pane_g

0x3b82,	// (0x00036fd0) list_double_fisheye_pane_t1_ParamLimits

0x3b82,	// (0x00036fd0) list_double_fisheye_pane_t1

0x3b9d,	// (0x00036feb) list_double_fisheye_pane_t2_ParamLimits

0x3b9d,	// (0x00036feb) list_double_fisheye_pane_t2

0x0001,

0xfcc2,	// (0x00043110) list_double_fisheye_pane_t_ParamLimits

0xfcc2,	// (0x00043110) list_double_fisheye_pane_t

0x44fd,	// (0x0003794b) main_call5_pane

0xb11d,	// (0x0003e56b) sc_swipe_pane_ParamLimits

0xb11d,	// (0x0003e56b) sc_swipe_pane

0xb316,	// (0x0003e764) call5_image_pane_ParamLimits

0xb316,	// (0x0003e764) call5_image_pane

0xb328,	// (0x0003e776) call5_swipe_1_pane_ParamLimits

0xb328,	// (0x0003e776) call5_swipe_1_pane

0xb334,	// (0x0003e782) call5_swipe_2_pane_ParamLimits

0xb334,	// (0x0003e782) call5_swipe_2_pane

0xb350,	// (0x0003e79e) popup_call5_audio_first_window_ParamLimits

0xb350,	// (0x0003e79e) popup_call5_audio_first_window

0xeac1,	// (0x00041f0f) call5_swipe_1_pane_g1_ParamLimits

0xeac1,	// (0x00041f0f) call5_swipe_1_pane_g1

0x15ec,	// (0x00034a3a) call5_swipe_1_pane_g2_ParamLimits

0x15ec,	// (0x00034a3a) call5_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x00043115) call5_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x00043115) call5_swipe_1_pane_g

0x15f8,	// (0x00034a46) call5_swipe_1_pane_t1_ParamLimits

0x15f8,	// (0x00034a46) call5_swipe_1_pane_t1

0xeac1,	// (0x00041f0f) call5_swipe_2_pane_g1_ParamLimits

0xeac1,	// (0x00041f0f) call5_swipe_2_pane_g1

0x160d,	// (0x00034a5b) call5_swipe_2_pane_g2_ParamLimits

0x160d,	// (0x00034a5b) call5_swipe_2_pane_g2

0x0001,

0xfccc,	// (0x0004311a) call5_swipe_2_pane_g_ParamLimits

0xfccc,	// (0x0004311a) call5_swipe_2_pane_g

0x1619,	// (0x00034a67) call5_swipe_2_pane_t1_ParamLimits

0x1619,	// (0x00034a67) call5_swipe_2_pane_t1

0x162e,	// (0x00034a7c) sc_swipe_pane_g1_ParamLimits

0x162e,	// (0x00034a7c) sc_swipe_pane_g1

0x163b,	// (0x00034a89) sc_swipe_pane_g2_ParamLimits

0x163b,	// (0x00034a89) sc_swipe_pane_g2

0x0001,

0xfcd1,	// (0x0004311f) sc_swipe_pane_g_ParamLimits

0xfcd1,	// (0x0004311f) sc_swipe_pane_g

0x1647,	// (0x00034a95) sc_swipe_pane_t1_ParamLimits

0x1647,	// (0x00034a95) sc_swipe_pane_t1

0x44fd,	// (0x0003794b) main_cmail_launcher_pane

0xb360,	// (0x0003e7ae) aid_size_cell_cmail_l_ParamLimits

0xb360,	// (0x0003e7ae) aid_size_cell_cmail_l

0xb370,	// (0x0003e7be) grid_cmail_l_pane_ParamLimits

0xb370,	// (0x0003e7be) grid_cmail_l_pane

0xb380,	// (0x0003e7ce) cell_cmail_l_pane_ParamLimits

0xb380,	// (0x0003e7ce) cell_cmail_l_pane

0xb396,	// (0x0003e7e4) cell_cmail_l_pane_g1_ParamLimits

0xb396,	// (0x0003e7e4) cell_cmail_l_pane_g1

0xb3a2,	// (0x0003e7f0) cell_cmail_l_pane_t1_ParamLimits

0xb3a2,	// (0x0003e7f0) cell_cmail_l_pane_t1

0x165c,	// (0x00034aaa) cell_cmail_l_pane_t2_ParamLimits

0x165c,	// (0x00034aaa) cell_cmail_l_pane_t2

0x0001,

0xfcd6,	// (0x00043124) cell_cmail_l_pane_t_ParamLimits

0xfcd6,	// (0x00043124) cell_cmail_l_pane_t

0x776b,	// (0x0003abb9) grid_highlight_pane_cp018_ParamLimits

0x776b,	// (0x0003abb9) grid_highlight_pane_cp018

0x4629,	// (0x00037a77) main2_pane_ParamLimits

0x4629,	// (0x00037a77) main2_pane

0xc634,	// (0x0003fa82) popup_sp_fs_action_menu_bg_pane_g1

0xc63c,	// (0x0003fa8a) popup_sp_fs_action_menu_bg_pane_g2

0xc644,	// (0x0003fa92) popup_sp_fs_action_menu_bg_pane_g3

0xc64c,	// (0x0003fa9a) popup_sp_fs_action_menu_bg_pane_g4

0xc654,	// (0x0003faa2) popup_sp_fs_action_menu_bg_pane_g5

0xc65c,	// (0x0003faaa) popup_sp_fs_action_menu_bg_pane_g6

0xc664,	// (0x0003fab2) popup_sp_fs_action_menu_bg_pane_g7

0xc66c,	// (0x0003faba) popup_sp_fs_action_menu_bg_pane_g8

0xc674,	// (0x0003fac2) popup_sp_fs_action_menu_bg_pane_g9

0xc67c,	// (0x0003faca) popup_sp_fs_action_menu_bg_pane_g10

0xc67c,	// (0x0003faca) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x000425f5) popup_sp_fs_action_menu_bg_pane_g

0x335e,	// (0x000367ac) list_medium_line_x2_t3_g3_g1_ParamLimits

0x335e,	// (0x000367ac) list_medium_line_x2_t3_g3_g1

0x336a,	// (0x000367b8) list_medium_line_x2_t3_g3_g2_ParamLimits

0x336a,	// (0x000367b8) list_medium_line_x2_t3_g3_g2

0x3376,	// (0x000367c4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3376,	// (0x000367c4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x000426a5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x000426a5) list_medium_line_x2_t3_g3_g

0x3382,	// (0x000367d0) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3382,	// (0x000367d0) list_medium_line_x2_t3_g3_t1

0x3397,	// (0x000367e5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3397,	// (0x000367e5) list_medium_line_x2_t3_g3_t2

0x33ab,	// (0x000367f9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x33ab,	// (0x000367f9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x000426ac) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x000426ac) list_medium_line_x2_t3_g3_t

0x335e,	// (0x000367ac) list_medium_line_x2_t3_g2_g1_ParamLimits

0x335e,	// (0x000367ac) list_medium_line_x2_t3_g2_g1

0x3376,	// (0x000367c4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3376,	// (0x000367c4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x000426b3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x000426b3) list_medium_line_x2_t3_g2_g

0x33c0,	// (0x0003680e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x33c0,	// (0x0003680e) list_medium_line_x2_t3_g2_t1

0x33d6,	// (0x00036824) list_medium_line_x2_t3_g2_t2_ParamLimits

0x33d6,	// (0x00036824) list_medium_line_x2_t3_g2_t2

0x33e8,	// (0x00036836) list_medium_line_x2_t3_g2_t3_ParamLimits

0x33e8,	// (0x00036836) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x000426b8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x000426b8) list_medium_line_x2_t3_g2_t

0x335e,	// (0x000367ac) list_medium_line_x2_t4_g4_g1_ParamLimits

0x335e,	// (0x000367ac) list_medium_line_x2_t4_g4_g1

0x3406,	// (0x00036854) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3406,	// (0x00036854) list_medium_line_x2_t4_g4_g2

0x336a,	// (0x000367b8) list_medium_line_x2_t4_g4_g3_ParamLimits

0x336a,	// (0x000367b8) list_medium_line_x2_t4_g4_g3

0x3412,	// (0x00036860) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3412,	// (0x00036860) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x000426bf) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x000426bf) list_medium_line_x2_t4_g4_g

0x341e,	// (0x0003686c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x341e,	// (0x0003686c) list_medium_line_x2_t4_g4_t1

0x3438,	// (0x00036886) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3438,	// (0x00036886) list_medium_line_x2_t4_g4_t2

0x344e,	// (0x0003689c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x344e,	// (0x0003689c) list_medium_line_x2_t4_g4_t3

0x3463,	// (0x000368b1) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3463,	// (0x000368b1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x000426c8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x000426c8) list_medium_line_x2_t4_g4_t

0x335e,	// (0x000367ac) list_medium_line_x2_t2_g4_g1_ParamLimits

0x335e,	// (0x000367ac) list_medium_line_x2_t2_g4_g1

0x3406,	// (0x00036854) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3406,	// (0x00036854) list_medium_line_x2_t2_g4_g2

0x336a,	// (0x000367b8) list_medium_line_x2_t2_g4_g3_ParamLimits

0x336a,	// (0x000367b8) list_medium_line_x2_t2_g4_g3

0x3376,	// (0x000367c4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3376,	// (0x000367c4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0004272f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0004272f) list_medium_line_x2_t2_g4_g

0x3475,	// (0x000368c3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3475,	// (0x000368c3) list_medium_line_x2_t2_g4_t1

0x33ab,	// (0x000367f9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x33ab,	// (0x000367f9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x00042738) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x00042738) list_medium_line_x2_t2_g4_t

0x335e,	// (0x000367ac) list_medium_line_x2_t2_g3_g1_ParamLimits

0x335e,	// (0x000367ac) list_medium_line_x2_t2_g3_g1

0x336a,	// (0x000367b8) list_medium_line_x2_t2_g3_g2_ParamLimits

0x336a,	// (0x000367b8) list_medium_line_x2_t2_g3_g2

0x3376,	// (0x000367c4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3376,	// (0x000367c4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x000426a5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x000426a5) list_medium_line_x2_t2_g3_g

0x348a,	// (0x000368d8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x348a,	// (0x000368d8) list_medium_line_x2_t2_g3_t1

0x33ab,	// (0x000367f9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x33ab,	// (0x000367f9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0004273d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0004273d) list_medium_line_x2_t2_g3_t

0x6634,	// (0x00039a82) main_sp_fs_list_pane_ParamLimits

0x6634,	// (0x00039a82) main_sp_fs_list_pane

0x6640,	// (0x00039a8e) sp_fs_scroll_pane_ParamLimits

0x6640,	// (0x00039a8e) sp_fs_scroll_pane

0x349f,	// (0x000368ed) list_medium_line_x2_t3_t1

0x34af,	// (0x000368fd) list_medium_line_x2_t3_t2

0x34bd,	// (0x0003690b) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x00042788) list_medium_line_x2_t3_t

0x34cb,	// (0x00036919) list_medium_line_x3_t4_t1

0x34db,	// (0x00036929) list_medium_line_x3_t4_t2

0x34e9,	// (0x00036937) list_medium_line_x3_t4_t3

0x34bd,	// (0x0003690b) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0004278f) list_medium_line_x3_t4_t

0x34f7,	// (0x00036945) list_medium_line_x4_t5_t1

0x3507,	// (0x00036955) list_medium_line_x4_t5_t2

0x34e9,	// (0x00036937) list_medium_line_x4_t5_t3

0x3515,	// (0x00036963) list_medium_line_x4_t5_t4

0x34bd,	// (0x0003690b) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x00042798) list_medium_line_x4_t5_t

0x335e,	// (0x000367ac) list_medium_line_t4_g4_g1_ParamLimits

0x335e,	// (0x000367ac) list_medium_line_t4_g4_g1

0x3412,	// (0x00036860) list_medium_line_t4_g4_g2_ParamLimits

0x3412,	// (0x00036860) list_medium_line_t4_g4_g2

0x3523,	// (0x00036971) list_medium_line_t4_g4_g3_ParamLimits

0x3523,	// (0x00036971) list_medium_line_t4_g4_g3

0x3376,	// (0x000367c4) list_medium_line_t4_g4_g4_ParamLimits

0x3376,	// (0x000367c4) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x000427a3) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x000427a3) list_medium_line_t4_g4_g

0x352f,	// (0x0003697d) list_medium_line_t4_g4_t1_ParamLimits

0x352f,	// (0x0003697d) list_medium_line_t4_g4_t1

0x3544,	// (0x00036992) list_medium_line_t4_g4_t2_ParamLimits

0x3544,	// (0x00036992) list_medium_line_t4_g4_t2

0x355a,	// (0x000369a8) list_medium_line_t4_g4_t3_ParamLimits

0x355a,	// (0x000369a8) list_medium_line_t4_g4_t3

0x33ab,	// (0x000367f9) list_medium_line_t4_g4_t4_ParamLimits

0x33ab,	// (0x000367f9) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x000427ac) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x000427ac) list_medium_line_t4_g4_t

0x675f,	// (0x00039bad) chi_dic_find_pane_g1

0x7787,	// (0x0003abd5) main_tport_pane

0x3798,	// (0x00036be6) list_medium_line_plain_t1

0x37a6,	// (0x00036bf4) list_medium_line_t2_g2_g1_ParamLimits

0x37a6,	// (0x00036bf4) list_medium_line_t2_g2_g1

0x37b2,	// (0x00036c00) list_medium_line_t2_g2_g2_ParamLimits

0x37b2,	// (0x00036c00) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x00042e68) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x00042e68) list_medium_line_t2_g2_g

0x37be,	// (0x00036c0c) list_medium_line_t2_g2_t1_ParamLimits

0x37be,	// (0x00036c0c) list_medium_line_t2_g2_t1

0x37d5,	// (0x00036c23) list_medium_line_t2_g2_t2_ParamLimits

0x37d5,	// (0x00036c23) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00042e6d) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00042e6d) list_medium_line_t2_g2_t

0x39f4,	// (0x00036e42) aid_sp_fs_list_icon_a_sm

0x39fc,	// (0x00036e4a) aid_sp_fs_list_icon_d

0x1e83,	// (0x000352d1) aid_sp_fs_text_primary

0x1bb6,	// (0x00035004) aid_sp_fs_text_secondary

0x3a04,	// (0x00036e52) list_medium_line

0x3a04,	// (0x00036e52) list_medium_line_g2

0x3a04,	// (0x00036e52) list_medium_line_g3

0x3a04,	// (0x00036e52) list_medium_line_plain

0x3a04,	// (0x00036e52) list_medium_line_plain_t2

0x3a04,	// (0x00036e52) list_medium_line_plain_t3

0x3a04,	// (0x00036e52) list_medium_line_right_icon

0x3a04,	// (0x00036e52) list_medium_line_right_iconx2

0x3a04,	// (0x00036e52) list_medium_line_t2

0x3a04,	// (0x00036e52) list_medium_line_t2_g2

0x3a04,	// (0x00036e52) list_medium_line_t2_g3

0x3a04,	// (0x00036e52) list_medium_line_t2_right_icon

0x3a04,	// (0x00036e52) list_medium_line_t2_right_iconx2

0x3a04,	// (0x00036e52) list_medium_line_t3

0x3a04,	// (0x00036e52) list_medium_line_t3_g2

0x3a04,	// (0x00036e52) list_medium_line_t3_g3

0x3a04,	// (0x00036e52) list_medium_line_t3_right_iconx2

0x3a0d,	// (0x00036e5b) list_medium_line_t4_g4

0x3a16,	// (0x00036e64) list_medium_line_x2

0x3a16,	// (0x00036e64) list_medium_line_x2_t2_g2

0x3a16,	// (0x00036e64) list_medium_line_x2_t2_g3

0x3a16,	// (0x00036e64) list_medium_line_x2_t2_g4

0x3a16,	// (0x00036e64) list_medium_line_x2_t3

0x3a16,	// (0x00036e64) list_medium_line_x2_t3_g2

0x3a16,	// (0x00036e64) list_medium_line_x2_t3_g3

0x3a16,	// (0x00036e64) list_medium_line_x2_t3_g4

0x3a16,	// (0x00036e64) list_medium_line_x2_t4_g2

0x3a16,	// (0x00036e64) list_medium_line_x2_t4_g4

0x3a1f,	// (0x00036e6d) list_medium_line_x3

0x3a1f,	// (0x00036e6d) list_medium_line_x3_t4

0x3a1f,	// (0x00036e6d) list_medium_line_x3_t4_g4

0x3a0d,	// (0x00036e5b) list_medium_line_x4_t4

0x3a0d,	// (0x00036e5b) list_medium_line_x4_t4_g7

0x3a0d,	// (0x00036e5b) list_medium_line_x4_t5

0x3a28,	// (0x00036e76) list_single_fs_dyc_pane_ParamLimits

0x3a28,	// (0x00036e76) list_single_fs_dyc_pane

0x335e,	// (0x000367ac) list_medium_line_x4_t4_g7_g1_ParamLimits

0x335e,	// (0x000367ac) list_medium_line_x4_t4_g7_g1

0x3a68,	// (0x00036eb6) list_medium_line_x4_t4_g7_g2_ParamLimits

0x3a68,	// (0x00036eb6) list_medium_line_x4_t4_g7_g2

0x3a74,	// (0x00036ec2) list_medium_line_x4_t4_g7_g3_ParamLimits

0x3a74,	// (0x00036ec2) list_medium_line_x4_t4_g7_g3

0x3a83,	// (0x00036ed1) list_medium_line_x4_t4_g7_g4_ParamLimits

0x3a83,	// (0x00036ed1) list_medium_line_x4_t4_g7_g4

0x3a8f,	// (0x00036edd) list_medium_line_x4_t4_g7_g5_ParamLimits

0x3a8f,	// (0x00036edd) list_medium_line_x4_t4_g7_g5

0x3a9e,	// (0x00036eec) list_medium_line_x4_t4_g7_g6_ParamLimits

0x3a9e,	// (0x00036eec) list_medium_line_x4_t4_g7_g6

0x3aad,	// (0x00036efb) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3aad,	// (0x00036efb) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x00043031) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x00043031) list_medium_line_x4_t4_g7_g

0x3ab9,	// (0x00036f07) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3ab9,	// (0x00036f07) list_medium_line_x4_t4_g7_t1

0x3ace,	// (0x00036f1c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3ace,	// (0x00036f1c) list_medium_line_x4_t4_g7_t2

0x3ae3,	// (0x00036f31) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3ae3,	// (0x00036f31) list_medium_line_x4_t4_g7_t3

0x3af8,	// (0x00036f46) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3af8,	// (0x00036f46) list_medium_line_x4_t4_g7_t4

0x3b0a,	// (0x00036f58) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3b0a,	// (0x00036f58) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x00043040) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x00043040) list_medium_line_x4_t4_g7_t

0x3b1c,	// (0x00036f6a) list_single_dyc_row_pane_ParamLimits

0x3b1c,	// (0x00036f6a) list_single_dyc_row_pane

0xb30a,	// (0x0003e758) call5_gesture_pane_ParamLimits

0xb30a,	// (0x0003e758) call5_gesture_pane

0xb340,	// (0x0003e78e) call5_windows_pane_ParamLimits

0xb340,	// (0x0003e78e) call5_windows_pane

0xb3b8,	// (0x0003e806) call5_swipe_1_pane_cp_ParamLimits

0xb3b8,	// (0x0003e806) call5_swipe_1_pane_cp

0xb3c4,	// (0x0003e812) call5_swipe_2_pane_cp_ParamLimits

0xb3c4,	// (0x0003e812) call5_swipe_2_pane_cp

0xcfdf,	// (0x0004042d) call5_image_pane_cp

0xb3d0,	// (0x0003e81e) popup_call5_audio_first_window_cp_ParamLimits

0xb3d0,	// (0x0003e81e) popup_call5_audio_first_window_cp

0x162e,	// (0x00034a7c) call5_swipe_1_pane_g1_cp_ParamLimits

0x162e,	// (0x00034a7c) call5_swipe_1_pane_g1_cp

0x166e,	// (0x00034abc) call5_swipe_1_pane_g2_cp

0x1647,	// (0x00034a95) call5_swipe_1_pane_t1_cp_ParamLimits

0x1647,	// (0x00034a95) call5_swipe_1_pane_t1_cp

0x162e,	// (0x00034a7c) call5_swipe_2_pane_g1_cp_ParamLimits

0x162e,	// (0x00034a7c) call5_swipe_2_pane_g1_cp

0x1676,	// (0x00034ac4) call5_swipe_2_pane_g2_cp

0x167e,	// (0x00034acc) call5_swipe_2_pane_t1_cp_ParamLimits

0x167e,	// (0x00034acc) call5_swipe_2_pane_t1_cp

0x776b,	// (0x0003abb9) main_sp_fs_email_pane

0x1693,	// (0x00034ae1) main_sp_fs_listscroll_pane_te

0x3bbf,	// (0x0003700d) popup_sp_fs_action_menu_pane_ParamLimits

0x3bbf,	// (0x0003700d) popup_sp_fs_action_menu_pane

0xe891,	// (0x00041cdf) bg_sp_fs_ctrlbar_pane_g1

0x16e2,	// (0x00034b30) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x16eb,	// (0x00034b39) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x16f4,	// (0x00034b42) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe891,	// (0x00041cdf) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcdb,	// (0x00043129) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe668,	// (0x00041ab6) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe668,	// (0x00041ab6) bg_sp_fs_ctrlbar_ddmenu_pane

0x16fd,	// (0x00034b4b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x16fd,	// (0x00034b4b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1709,	// (0x00034b57) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1709,	// (0x00034b57) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce4,	// (0x00043132) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce4,	// (0x00043132) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1715,	// (0x00034b63) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1715,	// (0x00034b63) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3c05,	// (0x00037053) list_medium_line_t2_right_icon_g1

0x3c0d,	// (0x0003705b) list_medium_line_t2_right_icon_t1

0x3c1d,	// (0x0003706b) list_medium_line_t2_right_icon_t2

0x0001,

0xfce9,	// (0x00043137) list_medium_line_t2_right_icon_t

0xe40e,	// (0x0004185c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe40e,	// (0x0004185c) bg_sp_fs_ctrlbar_pane

0xb435,	// (0x0003e883) main_sp_fs_ctrlbar_button_pane_cp01

0xb43d,	// (0x0003e88b) main_sp_fs_ctrlbar_ddmenu_pane

0x1771,	// (0x00034bbf) main_sp_fs_ctrlbar_pane_g1

0x177d,	// (0x00034bcb) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcee,	// (0x0004313c) main_sp_fs_ctrlbar_pane_g

0x1789,	// (0x00034bd7) main_sp_fs_ctrlbar_pane_t1

0x3c2b,	// (0x00037079) main_sp_fs_ctrlbar_pane

0x3c47,	// (0x00037095) main_sp_fs_listscroll_pane_te_cp01

0x3c58,	// (0x000370a6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3c58,	// (0x000370a6) popup_sp_fs_action_menu_pane_cp01

0x776b,	// (0x0003abb9) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x776b,	// (0x0003abb9) bg_sp_fs_highlight_list_pane_cp01

0x3c72,	// (0x000370c0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3c72,	// (0x000370c0) sp_fs_action_menu_list_gene_pane_g1

0x17bd,	// (0x00034c0b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x17bd,	// (0x00034c0b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x00043146) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x00043146) sp_fs_action_menu_list_gene_pane_g

0x3c81,	// (0x000370cf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3c81,	// (0x000370cf) sp_fs_action_menu_list_gene_pane_t1

0x3c99,	// (0x000370e7) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3c99,	// (0x000370e7) sp_fs_action_menu_list_gene_pane

0x1805,	// (0x00034c53) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1805,	// (0x00034c53) popup_sp_fs_action_menu_bg_pane

0x3cbc,	// (0x0003710a) sp_fs_action_menu_list_pane_ParamLimits

0x3cbc,	// (0x0003710a) sp_fs_action_menu_list_pane

0x1837,	// (0x00034c85) sp_fs_scroll_pane_cp01_ParamLimits

0x1837,	// (0x00034c85) sp_fs_scroll_pane_cp01

0x3ce0,	// (0x0003712e) list_medium_line_plain_t2_t1

0x3cf0,	// (0x0003713e) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x0004314b) list_medium_line_plain_t2_t

0x3cfe,	// (0x0003714c) list_medium_line_plain_t3_t1

0x3d0e,	// (0x0003715c) list_medium_line_plain_t3_t2

0x3d1c,	// (0x0003716a) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x00043150) list_medium_line_plain_t3_t

0x335e,	// (0x000367ac) list_medium_line_x2_t2_g2_g1_ParamLimits

0x335e,	// (0x000367ac) list_medium_line_x2_t2_g2_g1

0x3376,	// (0x000367c4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3376,	// (0x000367c4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x000426b3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x000426b3) list_medium_line_x2_t2_g2_g

0x352f,	// (0x0003697d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x352f,	// (0x0003697d) list_medium_line_x2_t2_g2_t1

0x33ab,	// (0x000367f9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x33ab,	// (0x000367f9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x00043157) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x00043157) list_medium_line_x2_t2_g2_t

0x335e,	// (0x000367ac) list_medium_line_x2_t4_g2_g1_ParamLimits

0x335e,	// (0x000367ac) list_medium_line_x2_t4_g2_g1

0x3d2a,	// (0x00037178) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3d2a,	// (0x00037178) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0e,	// (0x0004315c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0e,	// (0x0004315c) list_medium_line_x2_t4_g2_g

0x3d3c,	// (0x0003718a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3d3c,	// (0x0003718a) list_medium_line_x2_t4_g2_t1

0x3d56,	// (0x000371a4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3d56,	// (0x000371a4) list_medium_line_x2_t4_g2_t2

0x3d6c,	// (0x000371ba) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3d6c,	// (0x000371ba) list_medium_line_x2_t4_g2_t3

0x33ab,	// (0x000367f9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x33ab,	// (0x000367f9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x00043161) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x00043161) list_medium_line_x2_t4_g2_t

0x3d81,	// (0x000371cf) list_medium_line_t3_right_iconx2_g1

0x3c05,	// (0x00037053) list_medium_line_t3_right_iconx2_g2

0x3d89,	// (0x000371d7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0004316a) list_medium_line_t3_right_iconx2_g

0x3d93,	// (0x000371e1) list_medium_line_t3_right_iconx2_t1

0x3da3,	// (0x000371f1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x00043171) list_medium_line_t3_right_iconx2_t

0x335e,	// (0x000367ac) list_medium_line_x3_t4_g4_g1_ParamLimits

0x335e,	// (0x000367ac) list_medium_line_x3_t4_g4_g1

0x336a,	// (0x000367b8) list_medium_line_x3_t4_g4_g2_ParamLimits

0x336a,	// (0x000367b8) list_medium_line_x3_t4_g4_g2

0x3412,	// (0x00036860) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3412,	// (0x00036860) list_medium_line_x3_t4_g4_g3

0x3db1,	// (0x000371ff) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3db1,	// (0x000371ff) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x00043176) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x00043176) list_medium_line_x3_t4_g4_g

0x3dbd,	// (0x0003720b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3dbd,	// (0x0003720b) list_medium_line_x3_t4_g4_t1

0x3dd4,	// (0x00037222) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3dd4,	// (0x00037222) list_medium_line_x3_t4_g4_t2

0x3de9,	// (0x00037237) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3de9,	// (0x00037237) list_medium_line_x3_t4_g4_t3

0x3dfe,	// (0x0003724c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3dfe,	// (0x0003724c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0004317f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0004317f) list_medium_line_x3_t4_g4_t

0x3e1b,	// (0x00037269) list_single_dyc_row_text_pane_t1_ParamLimits

0x3e1b,	// (0x00037269) list_single_dyc_row_text_pane_t1

0x3e58,	// (0x000372a6) list_single_dyc_row_text_pane_t2_ParamLimits

0x3e58,	// (0x000372a6) list_single_dyc_row_text_pane_t2

0x3eb2,	// (0x00037300) list_single_dyc_row_text_pane_t3_ParamLimits

0x3eb2,	// (0x00037300) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3a,	// (0x00043188) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x00043188) list_single_dyc_row_text_pane_t

0x3ec4,	// (0x00037312) list_single_dyc_row_pane_g1_ParamLimits

0x3ec4,	// (0x00037312) list_single_dyc_row_pane_g1

0x3ed0,	// (0x0003731e) list_single_dyc_row_pane_g2_ParamLimits

0x3ed0,	// (0x0003731e) list_single_dyc_row_pane_g2

0x3edc,	// (0x0003732a) list_single_dyc_row_pane_g3_ParamLimits

0x3edc,	// (0x0003732a) list_single_dyc_row_pane_g3

0x3ee8,	// (0x00037336) list_single_dyc_row_pane_g4_ParamLimits

0x3ee8,	// (0x00037336) list_single_dyc_row_pane_g4

0x0003,

0xfd41,	// (0x0004318f) list_single_dyc_row_pane_g_ParamLimits

0xfd41,	// (0x0004318f) list_single_dyc_row_pane_g

0x3ef4,	// (0x00037342) list_single_dyc_row_text_pane_ParamLimits

0x3ef4,	// (0x00037342) list_single_dyc_row_text_pane

0x44fd,	// (0x0003794b) bg_sp_fs_scroll_pane

0x1904,	// (0x00034d52) thumb_sp_fs_scroll_pane

0x37a6,	// (0x00036bf4) list_medium_line_g1_ParamLimits

0x37a6,	// (0x00036bf4) list_medium_line_g1

0x3f13,	// (0x00037361) list_medium_line_t1_ParamLimits

0x3f13,	// (0x00037361) list_medium_line_t1

0x335e,	// (0x000367ac) list_medium_line_x2_g1_ParamLimits

0x335e,	// (0x000367ac) list_medium_line_x2_g1

0x336a,	// (0x000367b8) list_medium_line_x2_g2_ParamLimits

0x336a,	// (0x000367b8) list_medium_line_x2_g2

0x0001,

0xfd4a,	// (0x00043198) list_medium_line_x2_g_ParamLimits

0xfd4a,	// (0x00043198) list_medium_line_x2_g

0x3f28,	// (0x00037376) list_medium_line_x2_t1_ParamLimits

0x3f28,	// (0x00037376) list_medium_line_x2_t1

0x335e,	// (0x000367ac) list_medium_line_x3_g1_ParamLimits

0x335e,	// (0x000367ac) list_medium_line_x3_g1

0x336a,	// (0x000367b8) list_medium_line_x3_g2_ParamLimits

0x336a,	// (0x000367b8) list_medium_line_x3_g2

0x0001,

0xfd4a,	// (0x00043198) list_medium_line_x3_g_ParamLimits

0xfd4a,	// (0x00043198) list_medium_line_x3_g

0x3f28,	// (0x00037376) list_medium_line_x3_t1_ParamLimits

0x3f28,	// (0x00037376) list_medium_line_x3_t1

0x1938,	// (0x00034d86) thumb_sp_fs_scroll_pane_g1

0x1941,	// (0x00034d8f) thumb_sp_fs_scroll_pane_g2

0x194a,	// (0x00034d98) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0004319d) thumb_sp_fs_scroll_pane_g

0x1938,	// (0x00034d86) bg_sp_fs_scroll_pane_g1

0x1941,	// (0x00034d8f) bg_sp_fs_scroll_pane_g2

0x194a,	// (0x00034d98) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0004319d) bg_sp_fs_scroll_pane_g

0x335e,	// (0x000367ac) list_medium_line_x2_t3_g4_g1_ParamLimits

0x335e,	// (0x000367ac) list_medium_line_x2_t3_g4_g1

0x3406,	// (0x00036854) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3406,	// (0x00036854) list_medium_line_x2_t3_g4_g2

0x336a,	// (0x000367b8) list_medium_line_x2_t3_g4_g3_ParamLimits

0x336a,	// (0x000367b8) list_medium_line_x2_t3_g4_g3

0x3376,	// (0x000367c4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3376,	// (0x000367c4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0004272f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0004272f) list_medium_line_x2_t3_g4_g

0x3f3e,	// (0x0003738c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3f3e,	// (0x0003738c) list_medium_line_x2_t3_g4_t1

0x3f54,	// (0x000373a2) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3f54,	// (0x000373a2) list_medium_line_x2_t3_g4_t2

0x33ab,	// (0x000367f9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x33ab,	// (0x000367f9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd56,	// (0x000431a4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd56,	// (0x000431a4) list_medium_line_x2_t3_g4_t

0x37a6,	// (0x00036bf4) list_medium_line_g2_g1_ParamLimits

0x37a6,	// (0x00036bf4) list_medium_line_g2_g1

0x37b2,	// (0x00036c00) list_medium_line_g2_g2_ParamLimits

0x37b2,	// (0x00036c00) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x00042e68) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x00042e68) list_medium_line_g2_g

0x3f6d,	// (0x000373bb) list_medium_line_g2_t1_ParamLimits

0x3f6d,	// (0x000373bb) list_medium_line_g2_t1

0x37a6,	// (0x00036bf4) list_medium_line_t3_g2_g1_ParamLimits

0x37a6,	// (0x00036bf4) list_medium_line_t3_g2_g1

0x37b2,	// (0x00036c00) list_medium_line_t3_g2_g2_ParamLimits

0x37b2,	// (0x00036c00) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x00042e68) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x00042e68) list_medium_line_t3_g2_g

0x3f82,	// (0x000373d0) list_medium_line_t3_g2_t1_ParamLimits

0x3f82,	// (0x000373d0) list_medium_line_t3_g2_t1

0x3f99,	// (0x000373e7) list_medium_line_t3_g2_t2_ParamLimits

0x3f99,	// (0x000373e7) list_medium_line_t3_g2_t2

0x3fae,	// (0x000373fc) list_medium_line_t3_g2_t3_ParamLimits

0x3fae,	// (0x000373fc) list_medium_line_t3_g2_t3

0x0002,

0xfd5d,	// (0x000431ab) list_medium_line_t3_g2_t_ParamLimits

0xfd5d,	// (0x000431ab) list_medium_line_t3_g2_t

0x3c05,	// (0x00037053) list_medium_line_right_icon_g1

0x3fc7,	// (0x00037415) list_medium_line_right_icon_t1

0x37a6,	// (0x00036bf4) list_medium_line_t2_g1_ParamLimits

0x37a6,	// (0x00036bf4) list_medium_line_t2_g1

0x3fd5,	// (0x00037423) list_medium_line_t2_t1_ParamLimits

0x3fd5,	// (0x00037423) list_medium_line_t2_t1

0x3fef,	// (0x0003743d) list_medium_line_t2_t2_ParamLimits

0x3fef,	// (0x0003743d) list_medium_line_t2_t2

0x0001,

0xfd64,	// (0x000431b2) list_medium_line_t2_t_ParamLimits

0xfd64,	// (0x000431b2) list_medium_line_t2_t

0x37a6,	// (0x00036bf4) list_medium_line_t3_g1_ParamLimits

0x37a6,	// (0x00036bf4) list_medium_line_t3_g1

0x4004,	// (0x00037452) list_medium_line_t3_t1_ParamLimits

0x4004,	// (0x00037452) list_medium_line_t3_t1

0x401e,	// (0x0003746c) list_medium_line_t3_t2_ParamLimits

0x401e,	// (0x0003746c) list_medium_line_t3_t2

0x4034,	// (0x00037482) list_medium_line_t3_t3_ParamLimits

0x4034,	// (0x00037482) list_medium_line_t3_t3

0x0002,

0xfd69,	// (0x000431b7) list_medium_line_t3_t_ParamLimits

0xfd69,	// (0x000431b7) list_medium_line_t3_t

0x37a6,	// (0x00036bf4) list_medium_line_g3_g1_ParamLimits

0x37a6,	// (0x00036bf4) list_medium_line_g3_g1

0x4049,	// (0x00037497) list_medium_line_g3_g2_ParamLimits

0x4049,	// (0x00037497) list_medium_line_g3_g2

0x37b2,	// (0x00036c00) list_medium_line_g3_g3_ParamLimits

0x37b2,	// (0x00036c00) list_medium_line_g3_g3

0x0002,

0xfd70,	// (0x000431be) list_medium_line_g3_g_ParamLimits

0xfd70,	// (0x000431be) list_medium_line_g3_g

0x4055,	// (0x000374a3) list_medium_line_g3_t1_ParamLimits

0x4055,	// (0x000374a3) list_medium_line_g3_t1

0x37a6,	// (0x00036bf4) list_medium_line_t2_g3_g1_ParamLimits

0x37a6,	// (0x00036bf4) list_medium_line_t2_g3_g1

0x4049,	// (0x00037497) list_medium_line_t2_g3_g2_ParamLimits

0x4049,	// (0x00037497) list_medium_line_t2_g3_g2

0x37b2,	// (0x00036c00) list_medium_line_t2_g3_g3_ParamLimits

0x37b2,	// (0x00036c00) list_medium_line_t2_g3_g3

0x0002,

0xfd70,	// (0x000431be) list_medium_line_t2_g3_g_ParamLimits

0xfd70,	// (0x000431be) list_medium_line_t2_g3_g

0x406a,	// (0x000374b8) list_medium_line_t2_g3_t1_ParamLimits

0x406a,	// (0x000374b8) list_medium_line_t2_g3_t1

0x4081,	// (0x000374cf) list_medium_line_t2_g3_t2_ParamLimits

0x4081,	// (0x000374cf) list_medium_line_t2_g3_t2

0x0001,

0xfd77,	// (0x000431c5) list_medium_line_t2_g3_t_ParamLimits

0xfd77,	// (0x000431c5) list_medium_line_t2_g3_t

0x37a6,	// (0x00036bf4) list_medium_line_t3_g3_g1_ParamLimits

0x37a6,	// (0x00036bf4) list_medium_line_t3_g3_g1

0x4049,	// (0x00037497) list_medium_line_t3_g3_g2_ParamLimits

0x4049,	// (0x00037497) list_medium_line_t3_g3_g2

0x37b2,	// (0x00036c00) list_medium_line_t3_g3_g3_ParamLimits

0x37b2,	// (0x00036c00) list_medium_line_t3_g3_g3

0x0002,

0xfd70,	// (0x000431be) list_medium_line_t3_g3_g_ParamLimits

0xfd70,	// (0x000431be) list_medium_line_t3_g3_g

0x4096,	// (0x000374e4) list_medium_line_t3_g3_t1_ParamLimits

0x4096,	// (0x000374e4) list_medium_line_t3_g3_t1

0x40aa,	// (0x000374f8) list_medium_line_t3_g3_t2_ParamLimits

0x40aa,	// (0x000374f8) list_medium_line_t3_g3_t2

0x40bc,	// (0x0003750a) list_medium_line_t3_g3_t3_ParamLimits

0x40bc,	// (0x0003750a) list_medium_line_t3_g3_t3

0x0002,

0xfd7c,	// (0x000431ca) list_medium_line_t3_g3_t_ParamLimits

0xfd7c,	// (0x000431ca) list_medium_line_t3_g3_t

0x3d81,	// (0x000371cf) list_medium_line_right_iconx2_g1

0x3c05,	// (0x00037053) list_medium_line_right_iconx2_g2

0x0001,

0xfd83,	// (0x000431d1) list_medium_line_right_iconx2_g

0x40d0,	// (0x0003751e) list_medium_line_right_iconx2_t1

0x3d81,	// (0x000371cf) list_medium_line_t2_right_iconx2_g1

0x3c05,	// (0x00037053) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd83,	// (0x000431d1) list_medium_line_t2_right_iconx2_g

0x40de,	// (0x0003752c) list_medium_line_t2_right_iconx2_t1

0x40ee,	// (0x0003753c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd88,	// (0x000431d6) list_medium_line_t2_right_iconx2_t

0x40fc,	// (0x0003754a) list_medium_line_x4_t4_t1

0x410a,	// (0x00037558) list_medium_line_x4_t4_t2

0x411a,	// (0x00037568) list_medium_line_x4_t4_t3

0x412a,	// (0x00037578) list_medium_line_x4_t4_t4

0x0003,

0xfd8d,	// (0x000431db) list_medium_line_x4_t4_t

0xb470,	// (0x0003e8be) tport_appsw_pane_ParamLimits

0xb470,	// (0x0003e8be) tport_appsw_pane

0xb47e,	// (0x0003e8cc) tport_contact_pane_ParamLimits

0xb47e,	// (0x0003e8cc) tport_contact_pane

0xb48c,	// (0x0003e8da) tport_listscroll_pane_ParamLimits

0xb48c,	// (0x0003e8da) tport_listscroll_pane

0xb49a,	// (0x0003e8e8) cell_tport_appsw_pane_ParamLimits

0xb49a,	// (0x0003e8e8) cell_tport_appsw_pane

0xeb26,	// (0x00041f74) tport_appsw_pane_g1_ParamLimits

0xeb26,	// (0x00041f74) tport_appsw_pane_g1

0x19b3,	// (0x00034e01) tport_contact_pane_g1

0x19bc,	// (0x00034e0a) tport_contact_pane_t1

0x19ca,	// (0x00034e18) tport_contact_pane_t2

0x0001,

0xfd96,	// (0x000431e4) tport_contact_pane_t

0x19d8,	// (0x00034e26) list_tport_pane

0x19e1,	// (0x00034e2f) scroll_pane_cp_030

0xb4c5,	// (0x0003e913) cell_tport_appsw_pane_g1

0x19fa,	// (0x00034e48) cell_tport_appsw_pane_t1

0x44fd,	// (0x0003794b) grid_highlight_pane_cp019

0xb4d5,	// (0x0003e923) list_tport_double_graphic_pane_ParamLimits

0xb4d5,	// (0x0003e923) list_tport_double_graphic_pane

0x776b,	// (0x0003abb9) list_highlight_pane_cp023_ParamLimits

0x776b,	// (0x0003abb9) list_highlight_pane_cp023

0xb4e6,	// (0x0003e934) list_tport_double_graphic_pane_g1_ParamLimits

0xb4e6,	// (0x0003e934) list_tport_double_graphic_pane_g1

0xb4f3,	// (0x0003e941) list_tport_double_graphic_pane_t1_ParamLimits

0xb4f3,	// (0x0003e941) list_tport_double_graphic_pane_t1

0xb508,	// (0x0003e956) list_tport_double_graphic_pane_t2_ParamLimits

0xb508,	// (0x0003e956) list_tport_double_graphic_pane_t2

0x0001,

0xfda2,	// (0x000431f0) list_tport_double_graphic_pane_t_ParamLimits

0xfda2,	// (0x000431f0) list_tport_double_graphic_pane_t

0x44fd,	// (0x0003794b) main_cale_note_pane

0x99d0,	// (0x0003ce1e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x99d0,	// (0x0003ce1e) cell_vitu2_function_top_wide_pane_cp01

0xb06c,	// (0x0003e4ba) wait_bar_pane_cp05_ParamLimits

0x44fd,	// (0x0003794b) listscroll_cmail_pane

0x1a10,	// (0x00034e5e) list_cmail_pane

0xb524,	// (0x0003e972) list_cmail_body_pane

0xb539,	// (0x0003e987) list_single_cmail_header_caption_pane

0xb553,	// (0x0003e9a1) list_single_cmail_header_detail_pane_ParamLimits

0xb553,	// (0x0003e9a1) list_single_cmail_header_detail_pane

0xb582,	// (0x0003e9d0) list_single_cmail_header_caption_pane_t1

0x413a,	// (0x00037588) list_single_cmail_header_detail_pane_g1_ParamLimits

0x413a,	// (0x00037588) list_single_cmail_header_detail_pane_g1

0x4152,	// (0x000375a0) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4152,	// (0x000375a0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda7,	// (0x000431f5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda7,	// (0x000431f5) list_single_cmail_header_detail_pane_g

0x415e,	// (0x000375ac) list_single_cmail_header_detail_pane_t1_ParamLimits

0x415e,	// (0x000375ac) list_single_cmail_header_detail_pane_t1

0x41c2,	// (0x00037610) list_single_cmail_header_editor_pane_bg_ParamLimits

0x41c2,	// (0x00037610) list_single_cmail_header_editor_pane_bg

0x12d6,	// (0x00034724) list_cmail_body_pane_g1

0x1a99,	// (0x00034ee7) list_cmail_body_pane_t1

0x03fa,	// (0x00033848) list_single_cmail_header_editor_pane_bg_g1

0xc995,	// (0x0003fde3) list_single_cmail_header_editor_pane_bg_g1_copy1

0x040a,	// (0x00033858) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0402,	// (0x00033850) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0689,	// (0x00033ad7) list_single_cmail_header_editor_pane_bg_g1_copy4

0x042a,	// (0x00033878) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x041a,	// (0x00033868) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0422,	// (0x00033870) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc975,	// (0x0003fdc3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb592,	// (0x0003e9e0) calenote_gesture_pane_ParamLimits

0xb592,	// (0x0003e9e0) calenote_gesture_pane

0xb5ac,	// (0x0003e9fa) calenote_window_pane_ParamLimits

0xb5ac,	// (0x0003e9fa) calenote_window_pane

0x1aa7,	// (0x00034ef5) popup_note_window_cp01

0xb5c4,	// (0x0003ea12) calenote_swipe_1_pane_ParamLimits

0xb5c4,	// (0x0003ea12) calenote_swipe_1_pane

0xb3c4,	// (0x0003e812) calenote_swipe_2_pane_ParamLimits

0xb3c4,	// (0x0003e812) calenote_swipe_2_pane

0x162e,	// (0x00034a7c) calenote_swipe_1_pane_g1_ParamLimits

0x162e,	// (0x00034a7c) calenote_swipe_1_pane_g1

0x163b,	// (0x00034a89) calenote_swipe_1_pane_g2_ParamLimits

0x163b,	// (0x00034a89) calenote_swipe_1_pane_g2

0x0001,

0xfcd1,	// (0x0004311f) calenote_swipe_1_pane_g_ParamLimits

0xfcd1,	// (0x0004311f) calenote_swipe_1_pane_g

0x1ab9,	// (0x00034f07) calenote_swipe_1_pane_t1_ParamLimits

0x1ab9,	// (0x00034f07) calenote_swipe_1_pane_t1

0x162e,	// (0x00034a7c) calenote_swipe_2_pane_g1_ParamLimits

0x162e,	// (0x00034a7c) calenote_swipe_2_pane_g1

0x1ad8,	// (0x00034f26) calenote_swipe_2_pane_g2_ParamLimits

0x1ad8,	// (0x00034f26) calenote_swipe_2_pane_g2

0x0001,

0xfdb3,	// (0x00043201) calenote_swipe_2_pane_g_ParamLimits

0xfdb3,	// (0x00043201) calenote_swipe_2_pane_g

0x1ae4,	// (0x00034f32) calenote_swipe_2_pane_t1_ParamLimits

0x1ae4,	// (0x00034f32) calenote_swipe_2_pane_t1

0x44fd,	// (0x0003794b) main_mup_navstr_pane

0x8726,	// (0x0003bb74) main_mup3_pane_t7_ParamLimits

0x8726,	// (0x0003bb74) main_mup3_pane_t7

0x9119,	// (0x0003c567) main_mp4_pane_g6_ParamLimits

0x9119,	// (0x0003c567) main_mp4_pane_g6

0x9489,	// (0x0003c8d7) main_image3_pane_t4_ParamLimits

0x9489,	// (0x0003c8d7) main_image3_pane_t4

0xb5d7,	// (0x0003ea25) popup_navstr_preview_pane_ParamLimits

0xb5d7,	// (0x0003ea25) popup_navstr_preview_pane

0xb5e3,	// (0x0003ea31) scroll_navstr_pane_ParamLimits

0xb5e3,	// (0x0003ea31) scroll_navstr_pane

0x44fd,	// (0x0003794b) bg_popup_preview_window_pane_cp04

0x1b0b,	// (0x00034f59) popup_navstr_preview_pane_t1

0xb5ef,	// (0x0003ea3d) scroll_navstr_pane_g1_ParamLimits

0xb5ef,	// (0x0003ea3d) scroll_navstr_pane_g1

0xb5fc,	// (0x0003ea4a) scroll_navstr_pane_t1_ParamLimits

0xb5fc,	// (0x0003ea4a) scroll_navstr_pane_t1

0x1ab0,	// (0x00034efe) bg_button_pane_cp014

0x1ab0,	// (0x00034efe) bg_button_pane_cp030

0x3b65,	// (0x00036fb3) list_double_fisheye_pane_g4_ParamLimits

0x3b65,	// (0x00036fb3) list_double_fisheye_pane_g4

0x3b71,	// (0x00036fbf) list_double_fisheye_pane_g5_ParamLimits

0x3b71,	// (0x00036fbf) list_double_fisheye_pane_g5

0x1a18,	// (0x00034e66) sp_fs_scroll_pane_cp03

0x1771,	// (0x00034bbf) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x177d,	// (0x00034bcb) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcee,	// (0x0004313c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x1789,	// (0x00034bd7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb51a,	// (0x0003e968) sp_fs_scroll_pane_cp02

0xc69f,	// (0x0003faed) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc69f,	// (0x0003faed) popup_sp_fs_calendar_preview_list_single_pane

0x44fd,	// (0x0003794b) main_cam6_pano_pane

0x776b,	// (0x0003abb9) main_mup3_pane_ParamLimits

0x44fd,	// (0x0003794b) main_phacti_pane

0xaf3f,	// (0x0003e38d) bg_button_pane_cp11

0xaf57,	// (0x0003e3a5) main_mobtv_info_pane_g2_ParamLimits

0xaf57,	// (0x0003e3a5) main_mobtv_info_pane_g2

0x0001,

0xfc4e,	// (0x0004309c) main_mobtv_info_pane_g_ParamLimits

0xfc4e,	// (0x0004309c) main_mobtv_info_pane_g

0xb109,	// (0x0003e557) sc_clock_pane_t5_ParamLimits

0xb109,	// (0x0003e557) sc_clock_pane_t5

0xb1b2,	// (0x0003e600) main_radioblah_pane_g1_ParamLimits

0x157a,	// (0x000349c8) main_radioblah_pane_t3_ParamLimits

0x157a,	// (0x000349c8) main_radioblah_pane_t3

0x1592,	// (0x000349e0) main_radioblah_pane_t4_ParamLimits

0x1592,	// (0x000349e0) main_radioblah_pane_t4

0xb1d0,	// (0x0003e61e) main_radioblah_text_pane_ParamLimits

0xb1d0,	// (0x0003e61e) main_radioblah_text_pane

0xb1dd,	// (0x0003e62b) main_radioblah_info_pane_g1_ParamLimits

0xb276,	// (0x0003e6c4) main_radioblah_info_pane_t4_ParamLimits

0xb276,	// (0x0003e6c4) main_radioblah_info_pane_t4

0x776b,	// (0x0003abb9) main_sp_fs_calendar_pane

0xb60e,	// (0x0003ea5c) main_phacti_pane_g1

0xb616,	// (0x0003ea64) phacti_note_pane_ParamLimits

0xb616,	// (0x0003ea64) phacti_note_pane

0x1b22,	// (0x00034f70) phacti_term_pane_ParamLimits

0x1b22,	// (0x00034f70) phacti_term_pane

0x1b37,	// (0x00034f85) phacti_note_pane_t1_ParamLimits

0x1b37,	// (0x00034f85) phacti_note_pane_t1

0x41d4,	// (0x00037622) phacti_term_pane_g1

0x41dc,	// (0x0003762a) phacti_term_pane_t1_ParamLimits

0x41dc,	// (0x0003762a) phacti_term_pane_t1

0x1b80,	// (0x00034fce) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1b88,	// (0x00034fd6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbd,	// (0x0004320b) popup_sp_fs_calendar_preview_list_single_pane_g

0x1b90,	// (0x00034fde) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1b90,	// (0x00034fde) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1ba6,	// (0x00034ff4) aid_popup_sp_fs_bg_corner_pane

0xe891,	// (0x00041cdf) popup_sp_fs_calendar_preview_bg_pane_g1

0x44fd,	// (0x0003794b) popup_sp_fs_calendar_preview_bg_pane

0x1bae,	// (0x00034ffc) popup_sp_fs_calendar_preview_list_pane

0x776b,	// (0x0003abb9) bg_main_sp_fs_cale_pane_ParamLimits

0x776b,	// (0x0003abb9) bg_main_sp_fs_cale_pane

0x4206,	// (0x00037654) listscroll_cale_mrui_pane_ParamLimits

0x4206,	// (0x00037654) listscroll_cale_mrui_pane

0x421a,	// (0x00037668) listscroll_sp_fs_schedule_track_pane

0x4223,	// (0x00037671) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4223,	// (0x00037671) main_sp_fs_ctrlbar_pane_cp01

0x1bed,	// (0x0003503b) main_sp_fs_ribbon_pane

0x1bf5,	// (0x00035043) popup_sp_fs_cale_preview_window

0xb659,	// (0x0003eaa7) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb659,	// (0x0003eaa7) list_single_sp_fs_schedule_track_pane

0x47b2,	// (0x00037c00) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x47b2,	// (0x00037c00) bg_sp_fs_highlight_list_pane_cp03

0xb66d,	// (0x0003eabb) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb66d,	// (0x0003eabb) list_single_sp_fs_schedule_track_pane_g1

0xb679,	// (0x0003eac7) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb679,	// (0x0003eac7) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc2,	// (0x00043210) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc2,	// (0x00043210) list_single_sp_fs_schedule_track_pane_g

0xb685,	// (0x0003ead3) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb685,	// (0x0003ead3) list_single_sp_fs_schedule_track_pane_t1

0xb6a3,	// (0x0003eaf1) sp_fs_schedule_track_pane_ParamLimits

0xb6a3,	// (0x0003eaf1) sp_fs_schedule_track_pane

0x1c07,	// (0x00035055) sp_fs_schedule_track_pane_g1

0x1c0f,	// (0x0003505d) sp_fs_schedule_track_pane_g2

0x1c17,	// (0x00035065) sp_fs_schedule_track_pane_g3

0x1c1f,	// (0x0003506d) sp_fs_schedule_track_pane_g4

0x1c27,	// (0x00035075) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc7,	// (0x00043215) sp_fs_schedule_track_pane_g

0x03fa,	// (0x00033848) bg_sp_fs_schedule_viewer_highlight_g1

0xc995,	// (0x0003fde3) bg_sp_fs_schedule_viewer_highlight_g2

0x0402,	// (0x00033850) bg_sp_fs_schedule_viewer_highlight_g3

0x040a,	// (0x00033858) bg_sp_fs_schedule_viewer_highlight_g4

0x0689,	// (0x00033ad7) bg_sp_fs_schedule_viewer_highlight_g5

0x041a,	// (0x00033868) bg_sp_fs_schedule_viewer_highlight_g6

0x0422,	// (0x00033870) bg_sp_fs_schedule_viewer_highlight_g7

0x042a,	// (0x00033878) bg_sp_fs_schedule_viewer_highlight_g8

0xc975,	// (0x0003fdc3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd2,	// (0x00043220) bg_sp_fs_schedule_viewer_highlight_g

0x44fd,	// (0x0003794b) bg_main_sp_fs_ribbon_pane

0xb6b5,	// (0x0003eb03) main_sp_fs_ribbon_pane_g1

0x1c2f,	// (0x0003507d) main_sp_fs_ribbon_pane_t1

0xb6be,	// (0x0003eb0c) main_sp_fs_ribbon_pane_t2

0x1c3e,	// (0x0003508c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde5,	// (0x00043233) main_sp_fs_ribbon_pane_t

0x1c4d,	// (0x0003509b) main_sp_fs_ribbon_scheduler_pane

0x1c55,	// (0x000350a3) bg_main_sp_fs_ribbon_pane_g1

0x1c5e,	// (0x000350ac) bg_main_sp_fs_ribbon_pane_g2

0x1c67,	// (0x000350b5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdec,	// (0x0004323a) bg_main_sp_fs_ribbon_pane_g

0x1c6f,	// (0x000350bd) main_sp_fs_ribbon_scheduler_pane_g1

0x1c78,	// (0x000350c6) main_sp_fs_ribbon_scheduler_pane_g2

0x1c81,	// (0x000350cf) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf3,	// (0x00043241) main_sp_fs_ribbon_scheduler_pane_g

0x1c8a,	// (0x000350d8) list_cale_mrui_pane

0xb6cd,	// (0x0003eb1b) sp_fs_scroll_pane_cp07_ParamLimits

0xb6cd,	// (0x0003eb1b) sp_fs_scroll_pane_cp07

0xb6e3,	// (0x0003eb31) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb6e3,	// (0x0003eb31) bg_sp_fs_schedule_viewer_highlight

0x1c93,	// (0x000350e1) list_single_sp_fs_schedule_track_pane_cp01

0x1c9b,	// (0x000350e9) list_sp_fs_schedule_track_pane

0x1ca3,	// (0x000350f1) sp_fs_scroll_pane_cp06_ParamLimits

0x1ca3,	// (0x000350f1) sp_fs_scroll_pane_cp06

0xe891,	// (0x00041cdf) bgmain_sp_fs_calendar_pane_g1

0x4234,	// (0x00037682) list_single_cale_mrui_pane_ParamLimits

0x4234,	// (0x00037682) list_single_cale_mrui_pane

0x4257,	// (0x000376a5) list_single_cale_mrui_row_pane_ParamLimits

0x4257,	// (0x000376a5) list_single_cale_mrui_row_pane

0x4264,	// (0x000376b2) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4264,	// (0x000376b2) list_single_cale_mrui_row_pane_g1

0x429c,	// (0x000376ea) list_single_cale_mrui_row_pane_t1_ParamLimits

0x429c,	// (0x000376ea) list_single_cale_mrui_row_pane_t1

0x42ae,	// (0x000376fc) list_single_cale_mrui_row_pane_t2_ParamLimits

0x42ae,	// (0x000376fc) list_single_cale_mrui_row_pane_t2

0x4314,	// (0x00037762) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4314,	// (0x00037762) list_single_cale_mrui_row_pane_t3

0x4343,	// (0x00037791) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4343,	// (0x00037791) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x0004324f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x0004324f) list_single_cale_mrui_row_pane_t

0x4372,	// (0x000377c0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x4372,	// (0x000377c0) list_single_cmail_header_editor_pane_bg_cp01

0x4396,	// (0x000377e4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x4396,	// (0x000377e4) list_single_cmail_header_editor_pane_bg_cp02

0xb6f0,	// (0x0003eb3e) main_radioblah_text_pane_t1_ParamLimits

0xb6f0,	// (0x0003eb3e) main_radioblah_text_pane_t1

0x1d9e,	// (0x000351ec) cam6_indi_pane_cp01

0x1da6,	// (0x000351f4) cam6_mode_pane_cp01

0x1dae,	// (0x000351fc) cam6_pano_pane

0x1db7,	// (0x00035205) cam6_zoom_pane_cp01

0x1dc1,	// (0x0003520f) cam6_pano_image_pane

0x1dca,	// (0x00035218) cam6_pano_pane_g1

0x12d6,	// (0x00034724) cam6_pano_pane_g2

0x1dd3,	// (0x00035221) cam6_pano_pane_g3

0x1ddc,	// (0x0003522a) cam6_pano_pane_g4

0xedfd,	// (0x0004224b) cam6_pano_pane_g5

0x1de5,	// (0x00035233) cam6_pano_pane_g6

0x1ded,	// (0x0003523b) cam6_pano_pane_g7

0x1df5,	// (0x00035243) cam6_pano_pane_g8

0x1dfe,	// (0x0003524c) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x00043258) cam6_pano_pane_g

0x44fd,	// (0x0003794b) main_browser_tag_pane

0x1b03,	// (0x00034f51) grid_navstr_albumart_pane

0x1e09,	// (0x00035257) cell_navstr_albumart_pane_ParamLimits

0x1e09,	// (0x00035257) cell_navstr_albumart_pane

0x1e25,	// (0x00035273) cell_navstr_albumart_pane_g1

0xe227,	// (0x00041675) cell_navstr_albumart_pane_g2

0xe237,	// (0x00041685) cell_navstr_albumart_pane_g3

0xe22f,	// (0x0004167d) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x0004326b) cell_navstr_albumart_pane_g

0xb70a,	// (0x0003eb58) bt_list_pane_ParamLimits

0xb70a,	// (0x0003eb58) bt_list_pane

0xb723,	// (0x0003eb71) bt_list_pane_t1

0xb732,	// (0x0003eb80) bt_list_pane_t2

0x0001,

0xfe26,	// (0x00043274) bt_list_pane_t

0x44fd,	// (0x0003794b) main_cale_prevew_pane

0xb741,	// (0x0003eb8f) popup_cale_preview_window_ParamLimits

0xb741,	// (0x0003eb8f) popup_cale_preview_window

0x776b,	// (0x0003abb9) bg_popup_preview_window_pane_cp05_ParamLimits

0x776b,	// (0x0003abb9) bg_popup_preview_window_pane_cp05

0x1e2d,	// (0x0003527b) list_cale_preview_pane_ParamLimits

0x1e2d,	// (0x0003527b) list_cale_preview_pane

0xb75c,	// (0x0003ebaa) list_double_cale_preview_pane_ParamLimits

0xb75c,	// (0x0003ebaa) list_double_cale_preview_pane

0xb770,	// (0x0003ebbe) list_single_cale_preview_pane_ParamLimits

0xb770,	// (0x0003ebbe) list_single_cale_preview_pane

0xb788,	// (0x0003ebd6) list_single_cale_preview_pane_g1

0xb790,	// (0x0003ebde) list_single_cale_preview_pane_t1_ParamLimits

0xb790,	// (0x0003ebde) list_single_cale_preview_pane_t1

0xb7a5,	// (0x0003ebf3) list_double_cale_preview_pane_g1

0xb7ad,	// (0x0003ebfb) list_double_cale_preview_pane_t1_ParamLimits

0xb7ad,	// (0x0003ebfb) list_double_cale_preview_pane_t1

0xb7c2,	// (0x0003ec10) list_double_cale_preview_pane_t2_ParamLimits

0xb7c2,	// (0x0003ec10) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x00043279) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x00043279) list_double_cale_preview_pane_t

0x44fd,	// (0x0003794b) main_ezdial_pane

0x776b,	// (0x0003abb9) main_sp_fs_email_pane_ParamLimits

0xb3de,	// (0x0003e82c) cmail_ddmenu_btn01_pane_ParamLimits

0xb3de,	// (0x0003e82c) cmail_ddmenu_btn01_pane

0xb3fb,	// (0x0003e849) cmail_ddmenu_btn02_pane_ParamLimits

0xb3fb,	// (0x0003e849) cmail_ddmenu_btn02_pane

0xb419,	// (0x0003e867) cmail_ddmenu_btn03_pane_ParamLimits

0xb419,	// (0x0003e867) cmail_ddmenu_btn03_pane

0x3c2b,	// (0x00037079) main_sp_fs_ctrlbar_pane_ParamLimits

0x3c47,	// (0x00037095) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb524,	// (0x0003e972) list_cmail_body_pane_ParamLimits

0x1a27,	// (0x00034e75) bg_button_pane_cp12

0x1a3c,	// (0x00034e8a) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1a3c,	// (0x00034e8a) list_single_cmail_header_detail_pane_g3

0x419c,	// (0x000375ea) list_single_cmail_header_detail_pane_t2_ParamLimits

0x419c,	// (0x000375ea) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdae,	// (0x000431fc) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdae,	// (0x000431fc) list_single_cmail_header_detail_pane_t

0x41f1,	// (0x0003763f) phacti_term_pane_t2_ParamLimits

0x41f1,	// (0x0003763f) phacti_term_pane_t2

0x0001,

0xfdb8,	// (0x00043206) phacti_term_pane_t_ParamLimits

0xfdb8,	// (0x00043206) phacti_term_pane_t

0x1e39,	// (0x00035287) aid_size_list_single_double

0xb7da,	// (0x0003ec28) popup_ezdial_listscroll_window

0xb7fa,	// (0x0003ec48) popup_number_entry_window_cp01

0xcfdf,	// (0x0004042d) bg_popup_call_pane_cp09

0x1e45,	// (0x00035293) ezdial_list_pane

0x1e4d,	// (0x0003529b) scroll_pane_cp23

0xe668,	// (0x00041ab6) bg_button_pane_cp028_ParamLimits

0xe668,	// (0x00041ab6) bg_button_pane_cp028

0xb808,	// (0x0003ec56) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb808,	// (0x0003ec56) cmail_ddmenu_btn01_pane_g1

0xb818,	// (0x0003ec66) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb818,	// (0x0003ec66) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x0004327e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x0004327e) cmail_ddmenu_btn01_pane_g

0x1e55,	// (0x000352a3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1e55,	// (0x000352a3) cmail_ddmenu_btn01_pane_t1

0xe40e,	// (0x0004185c) bg_button_pane_cp029_ParamLimits

0xe40e,	// (0x0004185c) bg_button_pane_cp029

0xb818,	// (0x0003ec66) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb818,	// (0x0003ec66) cmail_ddmenu_btn02_pane_g1

0xb830,	// (0x0003ec7e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb830,	// (0x0003ec7e) cmail_ddmenu_btn02_pane_t1

0x47b2,	// (0x00037c00) bg_button_pane_cp031_ParamLimits

0x47b2,	// (0x00037c00) bg_button_pane_cp031

0xb818,	// (0x0003ec66) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb818,	// (0x0003ec66) cmail_ddmenu_btn03_pane_g1

0xb830,	// (0x0003ec7e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb830,	// (0x0003ec7e) cmail_ddmenu_btn03_pane_t1

0x9332,	// (0x0003c780) cell_dialer2_keypad_pane_t1_ParamLimits

0x934c,	// (0x0003c79a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x934c,	// (0x0003c79a) cell_dialer2_keypad_pane_t1_copy1

0xadcf,	// (0x0003e21d) ncimui_group_button_pane

0x776b,	// (0x0003abb9) main_sp_fs_calendar_pane_ParamLimits

0xb539,	// (0x0003e987) list_single_cmail_header_caption_pane_ParamLimits

0x1bb6,	// (0x00035004) aid_recal_txt_sm_pane

0x44fd,	// (0x0003794b) mian_recal_day_pane

0x1bf5,	// (0x00035043) popup_sp_fs_cale_preview_window_ParamLimits

0x44fd,	// (0x0003794b) list_recal_day_pane

0x1e8c,	// (0x000352da) list_single_recal_day_pane_ParamLimits

0x1e8c,	// (0x000352da) list_single_recal_day_pane

0x1e9e,	// (0x000352ec) list_single_recal_day_pane_g1_ParamLimits

0x1e9e,	// (0x000352ec) list_single_recal_day_pane_g1

0x1eaa,	// (0x000352f8) list_single_recal_day_pane_g2_ParamLimits

0x1eaa,	// (0x000352f8) list_single_recal_day_pane_g2

0x1eba,	// (0x00035308) list_single_recal_day_pane_g3_ParamLimits

0x1eba,	// (0x00035308) list_single_recal_day_pane_g3

0xb854,	// (0x0003eca2) list_single_recal_day_pane_g4_ParamLimits

0xb854,	// (0x0003eca2) list_single_recal_day_pane_g4

0x1ec6,	// (0x00035314) list_single_recal_day_pane_g5_ParamLimits

0x1ec6,	// (0x00035314) list_single_recal_day_pane_g5

0x1ed6,	// (0x00035324) list_single_recal_day_pane_g6_ParamLimits

0x1ed6,	// (0x00035324) list_single_recal_day_pane_g6

0x0004,

0xfe3f,	// (0x0004328d) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x0004328d) list_single_recal_day_pane_g

0x1eed,	// (0x0003533b) list_single_recal_day_pane_t1

0x1eff,	// (0x0003534d) list_single_recal_day_pane_t2

0x0001,

0xfe4a,	// (0x00043298) list_single_recal_day_pane_t

0xb874,	// (0x0003ecc2) ncimui_query_button_pane_ParamLimits

0xb874,	// (0x0003ecc2) ncimui_query_button_pane

0xb884,	// (0x0003ecd2) ncimui_query_button_pane_t1_ParamLimits

0xb884,	// (0x0003ecd2) ncimui_query_button_pane_t1

0x1f14,	// (0x00035362) ncimui_query_button_pane_t2_ParamLimits

0x1f14,	// (0x00035362) ncimui_query_button_pane_t2

0x0001,

0xfe4f,	// (0x0004329d) ncimui_query_button_pane_t_ParamLimits

0xfe4f,	// (0x0004329d) ncimui_query_button_pane_t

0xb897,	// (0x0003ece5) query_button_pane_ParamLimits

0xb897,	// (0x0003ece5) query_button_pane

0x44fd,	// (0x0003794b) bg_button_pane_cp0028

0x1f27,	// (0x00035375) query_button_pane_t1

0x7787,	// (0x0003abd5) main_tport_pane_ParamLimits

0xb447,	// (0x0003e895) bg_popup_window_pane_cp01_ParamLimits

0xb447,	// (0x0003e895) bg_popup_window_pane_cp01

0xb454,	// (0x0003e8a2) heading_pane_cp08_ParamLimits

0xb454,	// (0x0003e8a2) heading_pane_cp08

0xb462,	// (0x0003e8b0) heading_pane_cp07_ParamLimits

0xb462,	// (0x0003e8b0) heading_pane_cp07

0x19f2,	// (0x00034e40) cell_tport_appsw_pane_g2

0x0002,

0xfd9b,	// (0x000431e9) cell_tport_appsw_pane_g

0x3570,	// (0x000369be) input_candi_list_open_g1

0xcb30,	// (0x0003ff7e) list_cale_time_pane_g6_ParamLimits

0xcb30,	// (0x0003ff7e) list_cale_time_pane_g6

0x81db,	// (0x0003b629) aid_size_touch_calib_1_ParamLimits

0x81db,	// (0x0003b629) aid_size_touch_calib_1

0x81e7,	// (0x0003b635) aid_size_touch_calib_2_ParamLimits

0x81e7,	// (0x0003b635) aid_size_touch_calib_2

0x81f5,	// (0x0003b643) aid_size_touch_calib_3_ParamLimits

0x81f5,	// (0x0003b643) aid_size_touch_calib_3

0x8205,	// (0x0003b653) aid_size_touch_calib_4_ParamLimits

0x8205,	// (0x0003b653) aid_size_touch_calib_4

0x8213,	// (0x0003b661) main_touch_calib_button_group_pane_ParamLimits

0x8213,	// (0x0003b661) main_touch_calib_button_group_pane

0x8221,	// (0x0003b66f) main_touch_calib_pane_g1_ParamLimits

0x822d,	// (0x0003b67b) main_touch_calib_pane_g2_ParamLimits

0x8239,	// (0x0003b687) main_touch_calib_pane_g3_ParamLimits

0x8245,	// (0x0003b693) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x00042bbe) main_touch_calib_pane_g_ParamLimits

0x8251,	// (0x0003b69f) main_touch_calib_pane_t1_ParamLimits

0x8268,	// (0x0003b6b6) main_touch_calib_pane_t2_ParamLimits

0x827f,	// (0x0003b6cd) main_touch_calib_pane_t3_ParamLimits

0x8293,	// (0x0003b6e1) main_touch_calib_pane_t4_ParamLimits

0x82a9,	// (0x0003b6f7) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x00042bc7) main_touch_calib_pane_t_ParamLimits

0xebc7,	// (0x00042015) list_single_fp_cale_pane_g3_ParamLimits

0xebc7,	// (0x00042015) list_single_fp_cale_pane_g3

0x776b,	// (0x0003abb9) bg_button_pane_cp012_ParamLimits

0x776b,	// (0x0003abb9) bg_vkb2_func_pane_cp03_ParamLimits

0xa12b,	// (0x0003d579) cell_vitu2_function_top_pane_g1_ParamLimits

0x776b,	// (0x0003abb9) bg_vkb2_func_pane_cp04_ParamLimits

0xad6b,	// (0x0003e1b9) main_ncimui_button_group_pane_ParamLimits

0xad6b,	// (0x0003e1b9) main_ncimui_button_group_pane

0xadbd,	// (0x0003e20b) main_ncimui_pane_t3_ParamLimits

0xadbd,	// (0x0003e20b) main_ncimui_pane_t3

0x1b19,	// (0x00034f67) phacti_button_group_pane

0x1e39,	// (0x00035287) aid_size_list_single_double_ParamLimits

0xb7da,	// (0x0003ec28) popup_ezdial_listscroll_window_ParamLimits

0xb7fa,	// (0x0003ec48) popup_number_entry_window_cp01_ParamLimits

0xb8a4,	// (0x0003ecf2) phacti_button_pane_ParamLimits

0xb8a4,	// (0x0003ecf2) phacti_button_pane

0x44fd,	// (0x0003794b) bg_button_pane_cp14

0x1f35,	// (0x00035383) phacti_button_pane_t1

0xb8b5,	// (0x0003ed03) main_touch_calib_button_pane_ParamLimits

0xb8b5,	// (0x0003ed03) main_touch_calib_button_pane

0xc589,	// (0x0003f9d7) bg_button_pane_cp18_ParamLimits

0xc589,	// (0x0003f9d7) bg_button_pane_cp18

0x1f43,	// (0x00035391) main_touch_calib_button_pane_t1_ParamLimits

0x1f43,	// (0x00035391) main_touch_calib_button_pane_t1

0x1f59,	// (0x000353a7) main_touch_calib_button_pane_t2_ParamLimits

0x1f59,	// (0x000353a7) main_touch_calib_button_pane_t2

0x0001,

0xfe54,	// (0x000432a2) main_touch_calib_button_pane_t_ParamLimits

0xfe54,	// (0x000432a2) main_touch_calib_button_pane_t

0x44fd,	// (0x0003794b) cell_ncimui_button_pane

0x44fd,	// (0x0003794b) bg_button_pane_cp032

0x1f77,	// (0x000353c5) cell_ncimui_button_pane_t1

0x93a8,	// (0x0003c7f6) image3_infobar_pane_ParamLimits

0x93a8,	// (0x0003c7f6) image3_infobar_pane

0xb12b,	// (0x0003e579) fs_bigclock_status_pane_ParamLimits

0xb12b,	// (0x0003e579) fs_bigclock_status_pane

0xb138,	// (0x0003e586) main_fs_bigclock_clock_pane_ParamLimits

0xb138,	// (0x0003e586) main_fs_bigclock_clock_pane

0xb14e,	// (0x0003e59c) main_fs_bigclock_indi_pane_ParamLimits

0xb14e,	// (0x0003e59c) main_fs_bigclock_indi_pane

0xb180,	// (0x0003e5ce) main_fs_bigclock_swipe_pane_ParamLimits

0xb180,	// (0x0003e5ce) main_fs_bigclock_swipe_pane

0x44fd,	// (0x0003794b) main_fs_clock_dumped_data

0x13e3,	// (0x00034831) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x13e3,	// (0x00034831) list_single_fs_bigclock_indicator_pane_g1

0x140d,	// (0x0003485b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x140d,	// (0x0003485b) list_single_fs_bigclock_indicator_pane_g2

0x1427,	// (0x00034875) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1427,	// (0x00034875) list_single_fs_bigclock_indicator_pane_g3

0x1441,	// (0x0003488f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1441,	// (0x0003488f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc82,	// (0x000430d0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc82,	// (0x000430d0) list_single_fs_bigclock_indicator_pane_g

0x146c,	// (0x000348ba) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x146c,	// (0x000348ba) list_single_fs_bigclock_indicator_pane_t1

0x1494,	// (0x000348e2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1494,	// (0x000348e2) list_single_fs_bigclock_indicator_pane_t2

0x14bc,	// (0x0003490a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x14bc,	// (0x0003490a) list_single_fs_bigclock_indicator_pane_t3

0x14e4,	// (0x00034932) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x14e4,	// (0x00034932) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8d,	// (0x000430db) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8d,	// (0x000430db) list_single_fs_bigclock_indicator_pane_t

0x1f85,	// (0x000353d3) image3_infobar_fav_pane_ParamLimits

0x1f85,	// (0x000353d3) image3_infobar_fav_pane

0x1f95,	// (0x000353e3) image3_infobar_loc_pane_ParamLimits

0x1f95,	// (0x000353e3) image3_infobar_loc_pane

0x1fab,	// (0x000353f9) image3_infobar_time_pane_ParamLimits

0x1fab,	// (0x000353f9) image3_infobar_time_pane

0xe891,	// (0x00041cdf) image3_infobar_time_pane_g1

0x1fbb,	// (0x00035409) image3_infobar_time_pane_t1

0xe891,	// (0x00041cdf) image3_infobar_loc_pane_g1

0x1fc9,	// (0x00035417) image3_infobar_loc_pane_g2

0x0001,

0xfe59,	// (0x000432a7) image3_infobar_loc_pane_g

0x1fd1,	// (0x0003541f) image3_infobar_loc_pane_t1

0xe891,	// (0x00041cdf) image3_infobar_fav_pane_g1

0x1fdf,	// (0x0003542d) image3_infobar_fav_pane_g2

0x0001,

0xfe5e,	// (0x000432ac) image3_infobar_fav_pane_g

0x1fe7,	// (0x00035435) fs_bigclock_status_battery_pane

0x1ff0,	// (0x0003543e) fs_bigclock_status_signal_pane

0x1ff9,	// (0x00035447) fs_bigclock_status_title_pane

0x2002,	// (0x00035450) fs_bigclock_status_signal_pane_g1

0x200b,	// (0x00035459) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe63,	// (0x000432b1) fs_bigclock_status_signal_pane_g

0x2013,	// (0x00035461) fs_bigclock_status_battery_pane_g1

0x201c,	// (0x0003546a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe68,	// (0x000432b6) fs_bigclock_status_battery_pane_g

0x2024,	// (0x00035472) fs_bigclock_status_title_pane_t1

0xe891,	// (0x00041cdf) main_fs_bigclock_clock_pane_g1

0x2032,	// (0x00035480) main_fs_bigclock_clock_pane_g2

0x2032,	// (0x00035480) main_fs_bigclock_clock_pane_g3

0x2032,	// (0x00035480) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6d,	// (0x000432bb) main_fs_bigclock_clock_pane_g

0x203a,	// (0x00035488) main_fs_bigclock_clock_pane_t1

0x2048,	// (0x00035496) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe76,	// (0x000432c4) main_fs_bigclock_clock_pane_t

0xb8c7,	// (0x0003ed15) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb8c7,	// (0x0003ed15) list_single_fs_bigclock_indicator_pane

0xb8d8,	// (0x0003ed26) list_single_fs_bigclock_pane_ParamLimits

0xb8d8,	// (0x0003ed26) list_single_fs_bigclock_pane

0x2060,	// (0x000354ae) main_fs_bigclock_indicator_pane_t1

0x206f,	// (0x000354bd) list_single_fs_bigclock_pane_g1

0x2077,	// (0x000354c5) list_single_fs_bigclock_pane_t1

0xe891,	// (0x00041cdf) main_fs_bigclock_swipe_pane_g1

0x20ba,	// (0x00035508) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe87,	// (0x000432d5) main_fs_bigclock_swipe_pane_g

0x20c2,	// (0x00035510) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x20c2,	// (0x00035510) main_fs_bigclock_swipe_pane_t1

0x664c,	// (0x00039a9a) call_type_pane_ParamLimits

0x44fd,	// (0x0003794b) main_btmg_pane

0x4290,	// (0x000376de) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4290,	// (0x000376de) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfa,	// (0x00043248) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfa,	// (0x00043248) list_single_cale_mrui_row_pane_g

0x1e73,	// (0x000352c1) list_recal_vselct_arw_lo_pane

0x1e7b,	// (0x000352c9) list_recal_vselct_arw_up_pane

0x1e83,	// (0x000352d1) list_recal_vselct_pane

0x20df,	// (0x0003552d) btmg_button_pane

0xb92e,	// (0x0003ed7c) main_btmg_pane_g1

0x44fd,	// (0x0003794b) bg_button_pane_cp044

0x20e9,	// (0x00035537) btmg_button_pane_t1

0xe406,	// (0x00041854) aid_listscroll_gen

0x776b,	// (0x0003abb9) main_cntbar_detail_pane

0x1a08,	// (0x00034e56) list_cmail_folder_pane

0x1a18,	// (0x00034e66) sp_fs_scroll_pane_cp03_ParamLimits

0xd9ae,	// (0x00040dfc) list_single_fs_dyc_pane_cp01_ParamLimits

0xd9ae,	// (0x00040dfc) list_single_fs_dyc_pane_cp01

0x20f7,	// (0x00035545) aid_size_cmail_indent

0x43b2,	// (0x00037800) list_single_dyc_row_pane_cp01

0xb956,	// (0x0003eda4) cntbar_detail_list_pane_ParamLimits

0xb956,	// (0x0003eda4) cntbar_detail_list_pane

0xb996,	// (0x0003ede4) main_cntbar_detail_cont_pane_ParamLimits

0xb996,	// (0x0003ede4) main_cntbar_detail_cont_pane

0x6640,	// (0x00039a8e) scroll_pane_cp032_ParamLimits

0x6640,	// (0x00039a8e) scroll_pane_cp032

0xb9a2,	// (0x0003edf0) cntbar_detail_list_event_pane_ParamLimits

0xb9a2,	// (0x0003edf0) cntbar_detail_list_event_pane

0xb964,	// (0x0003edb2) cntbar_detail_list_shct_pane

0xc9e3,	// (0x0003fe31) aid_list_gen

0x2109,	// (0x00035557) aid_scroll

0x2112,	// (0x00035560) aid_size_touch_scroll_bar

0xb9b2,	// (0x0003ee00) aid_list_double

0x211b,	// (0x00035569) aid_list_single

0x43bb,	// (0x00037809) aid_list_single_lg

0x43c4,	// (0x00037812) aid_list_z_g_a_sm

0x43cc,	// (0x0003781a) aid_list_z_g_d

0x43d4,	// (0x00037822) aid_txt_z_prm

0x43e2,	// (0x00037830) aid_txt_z_prm_cp01

0x43f0,	// (0x0003783e) aid_txt_z_sec

0xb9bb,	// (0x0003ee09) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb9bb,	// (0x0003ee09) main_cntbar_detail_cont_pane_g1

0xb9c8,	// (0x0003ee16) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb9c8,	// (0x0003ee16) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8c,	// (0x000432da) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8c,	// (0x000432da) main_cntbar_detail_cont_pane_g

0x2142,	// (0x00035590) main_cntbar_detail_cont_pane_t1

0x2150,	// (0x0003559e) main_cntbar_detail_cont_pane_t2

0x215e,	// (0x000355ac) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe91,	// (0x000432df) main_cntbar_detail_cont_pane_t

0xb9d4,	// (0x0003ee22) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb9d4,	// (0x0003ee22) cell_cntbar_detail_list_shct_pane

0x216c,	// (0x000355ba) cntbar_detail_list_shct_pane_g1

0x2175,	// (0x000355c3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe98,	// (0x000432e6) cntbar_detail_list_shct_pane_g

0xb9e8,	// (0x0003ee36) cntbar_detail_list_event_pane_g1_ParamLimits

0xb9e8,	// (0x0003ee36) cntbar_detail_list_event_pane_g1

0xb9f4,	// (0x0003ee42) cntbar_detail_list_event_pane_g2_ParamLimits

0xb9f4,	// (0x0003ee42) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9d,	// (0x000432eb) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9d,	// (0x000432eb) cntbar_detail_list_event_pane_g

0xba62,	// (0x0003eeb0) cntbar_detail_list_event_pane_t1_ParamLimits

0xba62,	// (0x0003eeb0) cntbar_detail_list_event_pane_t1

0xba77,	// (0x0003eec5) cntbar_detail_list_event_pane_t2_ParamLimits

0xba77,	// (0x0003eec5) cntbar_detail_list_event_pane_t2

0x0002,

0xfeaa,	// (0x000432f8) cntbar_detail_list_event_pane_t_ParamLimits

0xfeaa,	// (0x000432f8) cntbar_detail_list_event_pane_t

0xe891,	// (0x00041cdf) cell_cntbar_detail_list_shct_pane_g1

0x6a1f,	// (0x00039e6d) navi_pane_mv_g3

0x776b,	// (0x0003abb9) main_cntbar_detail_pane_ParamLimits

0x44fd,	// (0x0003794b) main_notif_wgt_pane

0x9052,	// (0x0003c4a0) aid_tch_main_mp4_pane_g4

0x9291,	// (0x0003c6df) popup_slider_window_cp02

0x1e6a,	// (0x000352b8) list_recal_day_event_pane

0xb936,	// (0x0003ed84) cntbar_detail_btn_pane_ParamLimits

0xb936,	// (0x0003ed84) cntbar_detail_btn_pane

0xb946,	// (0x0003ed94) cntbar_detail_btn_pane_cp01_ParamLimits

0xb946,	// (0x0003ed94) cntbar_detail_btn_pane_cp01

0xb964,	// (0x0003edb2) cntbar_detail_list_shct_pane_ParamLimits

0xb970,	// (0x0003edbe) cntbar_detail_pane_g1_ParamLimits

0xb970,	// (0x0003edbe) cntbar_detail_pane_g1

0xb980,	// (0x0003edce) cntbar_detail_pane_t1_ParamLimits

0xb980,	// (0x0003edce) cntbar_detail_pane_t1

0xba00,	// (0x0003ee4e) cntbar_detail_list_event_pane_g3_ParamLimits

0xba00,	// (0x0003ee4e) cntbar_detail_list_event_pane_g3

0xba18,	// (0x0003ee66) cntbar_detail_list_event_pane_g4_ParamLimits

0xba18,	// (0x0003ee66) cntbar_detail_list_event_pane_g4

0xba30,	// (0x0003ee7e) cntbar_detail_list_event_pane_g5_ParamLimits

0xba30,	// (0x0003ee7e) cntbar_detail_list_event_pane_g5

0xba48,	// (0x0003ee96) cntbar_detail_list_event_pane_g6_ParamLimits

0xba48,	// (0x0003ee96) cntbar_detail_list_event_pane_g6

0xba8c,	// (0x0003eeda) cntbar_detail_list_event_pane_t3_ParamLimits

0xba8c,	// (0x0003eeda) cntbar_detail_list_event_pane_t3

0xba9e,	// (0x0003eeec) popup_notif_wgt_window_ParamLimits

0xba9e,	// (0x0003eeec) popup_notif_wgt_window

0xbaae,	// (0x0003eefc) popup_submenu_window_cp01_ParamLimits

0xbaae,	// (0x0003eefc) popup_submenu_window_cp01

0xcfdf,	// (0x0004042d) bg_popup_window_pane_cp10

0x217e,	// (0x000355cc) listscroll_notif_wgt_pane

0x2188,	// (0x000355d6) list_notif_wgt_window

0x2191,	// (0x000355df) scroll_pane_cp033

0x219a,	// (0x000355e8) list_notif_wgt_row_pane_ParamLimits

0x219a,	// (0x000355e8) list_notif_wgt_row_pane

0x21ae,	// (0x000355fc) aid_size_list_notif_wgt_del

0x21b7,	// (0x00035605) list_notif_wgt_row_pane_g1

0x21bf,	// (0x0003560d) list_notif_wgt_row_pane_g2

0x21c7,	// (0x00035615) list_notif_wgt_row_pane_g3

0x0002,

0xfeb1,	// (0x000432ff) list_notif_wgt_row_pane_g

0x21d0,	// (0x0003561e) list_notif_wgt_row_pane_t1

0x21de,	// (0x0003562c) list_notif_wgt_row_pane_t2

0x21ec,	// (0x0003563a) list_notif_wgt_row_pane_t3

0x0002,

0xfeb8,	// (0x00043306) list_notif_wgt_row_pane_t

0x06e3,	// (0x00033b31) list_recal_day_event_pane_g1

0x21fa,	// (0x00035648) list_recal_day_event_pane_t1

0x44fd,	// (0x0003794b) bg_button_pane_cp045

0x2209,	// (0x00035657) cntbar_detail_btn_pane_t1

0xe40e,	// (0x0004185c) main_callh_pane_ParamLimits

0xe40e,	// (0x0004185c) main_callh_pane

0x44fd,	// (0x0003794b) main_coverflow0_pane

0x44fd,	// (0x0003794b) main_wgtman_pane

0xb198,	// (0x0003e5e6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb198,	// (0x0003e5e6) main_fs_bigclock_unlock_btn_pane

0x19ea,	// (0x00034e38) bg_button_pane_cp16

0xb4cd,	// (0x0003e91b) cell_tport_appsw_pane_g3

0xbabe,	// (0x0003ef0c) cf0_flow_pane_ParamLimits

0xbabe,	// (0x0003ef0c) cf0_flow_pane

0x2217,	// (0x00035665) listscroll_cf0_pane

0x2220,	// (0x0003566e) main_cf0_pane_g1

0xbacd,	// (0x0003ef1b) main_cf0_pane_t1_ParamLimits

0xbacd,	// (0x0003ef1b) main_cf0_pane_t1

0xbae1,	// (0x0003ef2f) main_cf0_pane_t2_ParamLimits

0xbae1,	// (0x0003ef2f) main_cf0_pane_t2

0x0001,

0xfebf,	// (0x0004330d) main_cf0_pane_t_ParamLimits

0xfebf,	// (0x0004330d) main_cf0_pane_t

0x222a,	// (0x00035678) scroll_pane_cp11

0xbaf5,	// (0x0003ef43) cf0_flow_pane_g1

0xbafd,	// (0x0003ef4b) cf0_flow_pane_g2

0x0001,

0xfec4,	// (0x00043312) cf0_flow_pane_g

0xbb05,	// (0x0003ef53) cf0_flow_pane_t1

0x44fd,	// (0x0003794b) main_call6_pane

0x44fd,	// (0x0003794b) main_calllock_pane

0xbb13,	// (0x0003ef61) call6_btn_grp_pane_ParamLimits

0xbb13,	// (0x0003ef61) call6_btn_grp_pane

0xbb20,	// (0x0003ef6e) call6_pane_g1_ParamLimits

0xbb20,	// (0x0003ef6e) call6_pane_g1

0xbb30,	// (0x0003ef7e) popup_call6_1st_window_ParamLimits

0xbb30,	// (0x0003ef7e) popup_call6_1st_window

0xbb3e,	// (0x0003ef8c) popup_call6_2nd_window_ParamLimits

0xbb3e,	// (0x0003ef8c) popup_call6_2nd_window

0xbb4c,	// (0x0003ef9a) cell_call6_btn_pane_ParamLimits

0xbb4c,	// (0x0003ef9a) cell_call6_btn_pane

0xcfdf,	// (0x0004042d) bg_popup_call2_in_pane_cp03

0x2235,	// (0x00035683) popup_call6_1st_window_g1

0x223d,	// (0x0003568b) popup_call6_1st_window_g2

0x2245,	// (0x00035693) popup_call6_1st_window_g3

0x0002,

0xfec9,	// (0x00043317) popup_call6_1st_window_g

0x224d,	// (0x0003569b) popup_call6_1st_window_t1

0x225c,	// (0x000356aa) popup_call6_1st_window_t2

0x226c,	// (0x000356ba) popup_call6_1st_window_t3

0x0002,

0xfed0,	// (0x0004331e) popup_call6_1st_window_t

0xcfdf,	// (0x0004042d) bg_popup_call2_in_pane_cp04

0x2235,	// (0x00035683) popup_call6_2nd_window_g1

0x223d,	// (0x0003568b) popup_call6_2nd_window_g2

0x2245,	// (0x00035693) popup_call6_2nd_window_g3

0x0002,

0xfec9,	// (0x00043317) popup_call6_2nd_window_g

0x224d,	// (0x0003569b) popup_call6_2nd_window_t1

0x44fd,	// (0x0003794b) bg_button_pane_cp15

0x227c,	// (0x000356ca) cell_call6_btn_pane_g1

0x2285,	// (0x000356d3) cell_call6_btn_pane_t1

0xbb5b,	// (0x0003efa9) listscroll_wgtman_pane_ParamLimits

0xbb5b,	// (0x0003efa9) listscroll_wgtman_pane

0xbb79,	// (0x0003efc7) wgtman_btn_pane_ParamLimits

0xbb79,	// (0x0003efc7) wgtman_btn_pane

0xcea5,	// (0x000402f3) aid_scroll_copy1

0x2294,	// (0x000356e2) list_wgtman_pane

0xbbae,	// (0x0003effc) wgtman_btn_pane_g1_ParamLimits

0xbbae,	// (0x0003effc) wgtman_btn_pane_g1

0xbbd6,	// (0x0003f024) wgtman_btn_pane_t1_ParamLimits

0xbbd6,	// (0x0003f024) wgtman_btn_pane_t1

0x229e,	// (0x000356ec) wgtman_btn_pane_t2_ParamLimits

0x229e,	// (0x000356ec) wgtman_btn_pane_t2

0x0001,

0xfed7,	// (0x00043325) wgtman_btn_pane_t_ParamLimits

0xfed7,	// (0x00043325) wgtman_btn_pane_t

0xbc0d,	// (0x0003f05b) listrow_wgtman_pane_ParamLimits

0xbc0d,	// (0x0003f05b) listrow_wgtman_pane

0xbc1e,	// (0x0003f06c) listrow_wgtman_pane_g1

0xbc27,	// (0x0003f075) listrow_wgtman_pane_g2

0x0001,

0xfedc,	// (0x0004332a) listrow_wgtman_pane_g

0x43fe,	// (0x0003784c) listrow_wgtman_pane_t1

0x440c,	// (0x0003785a) listrow_wgtman_pane_t2

0x0001,

0xfee1,	// (0x0004332f) listrow_wgtman_pane_t

0x441a,	// (0x00037868) wait_bar_pane_cp09

0x22b5,	// (0x00035703) main_calllock_btn_pane

0x22bf,	// (0x0003570d) main_calllock_pane_g1

0x44fd,	// (0x0003794b) bg_button_pane_cp17

0x22cb,	// (0x00035719) main_calllock_btn_pane_g1

0x22d4,	// (0x00035722) main_calllock_btn_pane_t1

0x44fd,	// (0x0003794b) main_dialer3_pane

0x44fd,	// (0x0003794b) main_fmrd2_pane

0xe891,	// (0x00041cdf) main_fs_bigclock_unlock_btn_pane_g1

0x22eb,	// (0x00035739) main_fs_bigclock_unlock_btn_pane_t1

0xbc31,	// (0x0003f07f) area_fmrd2_info_pane_ParamLimits

0xbc31,	// (0x0003f07f) area_fmrd2_info_pane

0xbc3d,	// (0x0003f08b) area_fmrd2_visual_pane_ParamLimits

0xbc3d,	// (0x0003f08b) area_fmrd2_visual_pane

0xbc4b,	// (0x0003f099) fmrd2_indi_pane_ParamLimits

0xbc4b,	// (0x0003f099) fmrd2_indi_pane

0xbc58,	// (0x0003f0a6) area_fmrd2_visual_pane_g1

0xbc60,	// (0x0003f0ae) area_fmrd2_visual_pane_t1

0xbc70,	// (0x0003f0be) area_fmrd2_visual_pane_t2

0xbc80,	// (0x0003f0ce) area_fmrd2_visual_pane_t3

0x0002,

0xfeeb,	// (0x00043339) area_fmrd2_visual_pane_t

0xbc90,	// (0x0003f0de) area_fmrd2_info_pane_g1

0xbc98,	// (0x0003f0e6) area_fmrd2_info_pane_t1

0xbca8,	// (0x0003f0f6) area_fmrd2_info_pane_t2

0xbcb8,	// (0x0003f106) area_fmrd2_info_pane_t3

0xbcc8,	// (0x0003f116) area_fmrd2_info_pane_t4

0x0003,

0xfef2,	// (0x00043340) area_fmrd2_info_pane_t

0xbcd8,	// (0x0003f126) fmrd2_indi_pane_t1

0xbce8,	// (0x0003f136) fmrd2_indi_pane_t2

0xbcf8,	// (0x0003f146) fmrd2_indi_pane_t3

0x0002,

0xfefb,	// (0x00043349) fmrd2_indi_pane_t

0x1450,	// (0x0003489e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1450,	// (0x0003489e) list_single_fs_bigclock_indicator_pane_g5

0x14f9,	// (0x00034947) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x14f9,	// (0x00034947) list_single_fs_bigclock_indicator_pane_t5

0xb62c,	// (0x0003ea7a) aid_cell_bcale_month_pane_ParamLimits

0xb62c,	// (0x0003ea7a) aid_cell_bcale_month_pane

0xb638,	// (0x0003ea86) bcale_month_pane_ParamLimits

0xb638,	// (0x0003ea86) bcale_month_pane

0xb648,	// (0x0003ea96) bcale_preview_pane_ParamLimits

0xb648,	// (0x0003ea96) bcale_preview_pane

0x2077,	// (0x000354c5) list_single_fs_bigclock_pane_t1_ParamLimits

0x2096,	// (0x000354e4) list_single_fs_bigclock_pane_t2_ParamLimits

0x2096,	// (0x000354e4) list_single_fs_bigclock_pane_t2

0x0001,

0xfe82,	// (0x000432d0) list_single_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x000432d0) list_single_fs_bigclock_pane_t

0x22e3,	// (0x00035731) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee6,	// (0x00043334) main_fs_bigclock_unlock_btn_pane_g

0xbd08,	// (0x0003f156) aid_dia3_key_size_ParamLimits

0xbd08,	// (0x0003f156) aid_dia3_key_size

0xbd14,	// (0x0003f162) aid_dia3_listrow_size_ParamLimits

0xbd14,	// (0x0003f162) aid_dia3_listrow_size

0xbd22,	// (0x0003f170) dia3_keypad_fun_pane_ParamLimits

0xbd22,	// (0x0003f170) dia3_keypad_fun_pane

0xbd32,	// (0x0003f180) dia3_keypad_num_pane_ParamLimits

0xbd32,	// (0x0003f180) dia3_keypad_num_pane

0xbd42,	// (0x0003f190) dia3_listscroll_pane_ParamLimits

0xbd42,	// (0x0003f190) dia3_listscroll_pane

0xbd52,	// (0x0003f1a0) dia3_numentry_pane_ParamLimits

0xbd52,	// (0x0003f1a0) dia3_numentry_pane

0x22f9,	// (0x00035747) dia3_list_pane

0x2304,	// (0x00035752) scroll_pane_cp12

0x44fd,	// (0x0003794b) bg_dia3_numentry_pane

0x230f,	// (0x0003575d) dia3_numentry_pane_t1

0xbd62,	// (0x0003f1b0) cell_dia3_key_num_pane

0xbd6a,	// (0x0003f1b8) cell_dia3_key0_fun_pane_ParamLimits

0xbd6a,	// (0x0003f1b8) cell_dia3_key0_fun_pane

0xbd77,	// (0x0003f1c5) cell_dia3_key1_fun_pane_ParamLimits

0xbd77,	// (0x0003f1c5) cell_dia3_key1_fun_pane

0xbd84,	// (0x0003f1d2) dia3_listrow_pane

0x1140,	// (0x0003458e) bg_dia3_numentry_pane_g1

0x44fd,	// (0x0003794b) bg_button_pane_cp21

0x231e,	// (0x0003576c) cell_dia3_key_num_pane_t1

0x232c,	// (0x0003577a) cell_dia3_key_num_pane_t2

0x233b,	// (0x00035789) cell_dia3_key_num_pane_t3

0x234a,	// (0x00035798) cell_dia3_key_num_pane_t4

0x0003,

0xff02,	// (0x00043350) cell_dia3_key_num_pane_t

0x44fd,	// (0x0003794b) bg_button_pane_cp19

0xbd91,	// (0x0003f1df) cell_dia3_key0_fun_pane_g1

0x44fd,	// (0x0003794b) bg_button_pane_cp20

0xbd99,	// (0x0003f1e7) cell_dia3_key1_fun_pane_g1

0xbda1,	// (0x0003f1ef) area_left_week_number_pane

0x0a24,	// (0x00033e72) area_top_day_name_pane

0xbdaa,	// (0x0003f1f8) frame_month_view_pane

0xbdb4,	// (0x0003f202) grid_month_view_pane

0xbdbe,	// (0x0003f20c) cell_top_day_name_pane_ParamLimits

0xbdbe,	// (0x0003f20c) cell_top_day_name_pane

0xbdda,	// (0x0003f228) cell_area_left_week_number_pane_ParamLimits

0xbdda,	// (0x0003f228) cell_area_left_week_number_pane

0xbdee,	// (0x0003f23c) cell_month_view_pane_ParamLimits

0xbdee,	// (0x0003f23c) cell_month_view_pane

0x2359,	// (0x000357a7) frm_month_g1

0xbe0d,	// (0x0003f25b) frm_month_g2

0xbe17,	// (0x0003f265) frm_month_g3

0xbe21,	// (0x0003f26f) frm_month_g4

0xbe2b,	// (0x0003f279) frm_month_g5

0xbe35,	// (0x0003f283) frm_month_g6

0xbe3f,	// (0x0003f28d) frm_month_g7

0x2362,	// (0x000357b0) frm_month_g8

0xbe49,	// (0x0003f297) frm_month_g9

0xbe52,	// (0x0003f2a0) frm_month_g10

0xbe5b,	// (0x0003f2a9) frm_month_g11

0xbe64,	// (0x0003f2b2) frm_month_g12

0xbe6d,	// (0x0003f2bb) frm_month_g13

0xbe78,	// (0x0003f2c6) frm_month_g14

0xbe83,	// (0x0003f2d1) frm_month_g15

0xbe8e,	// (0x0003f2dc) frm_month_g16

0x000f,

0xff0b,	// (0x00043359) frm_month_g

0xbe99,	// (0x0003f2e7) cell_top_day_name_pane_t1

0xbea8,	// (0x0003f2f6) cell_area_left_week_number_pane_g1

0xbe99,	// (0x0003f2e7) cell_area_left_week_number_pane_t1

0xe891,	// (0x00041cdf) cell_month_view_pane_g1

0xbeb0,	// (0x0003f2fe) cell_month_view_pane_t1

0x44fd,	// (0x0003794b) main_fps_pane

0x1737,	// (0x00034b85) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1737,	// (0x00034b85) cmail_ddmenu_btn02_pane_cp1

0x1753,	// (0x00034ba1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1753,	// (0x00034ba1) cmail_ddmenu_btn02_pane_cp2

0xb824,	// (0x0003ec72) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb824,	// (0x0003ec72) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x00043283) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x00043283) cmail_ddmenu_btn02_pane_g

0xb842,	// (0x0003ec90) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb842,	// (0x0003ec90) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x00043288) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x00043288) cmail_ddmenu_btn02_pane_t

0xbebf,	// (0x0003f30d) fps_text_pane_ParamLimits

0xbebf,	// (0x0003f30d) fps_text_pane

0xbecc,	// (0x0003f31a) main_fps_pane_g1_ParamLimits

0xbecc,	// (0x0003f31a) main_fps_pane_g1

0xbed8,	// (0x0003f326) wait_bar_pane_cp010_ParamLimits

0xbed8,	// (0x0003f326) wait_bar_pane_cp010

0xbee4,	// (0x0003f332) fps_text_pane_t1_ParamLimits

0xbee4,	// (0x0003f332) fps_text_pane_t1

0x96b7,	// (0x0003cb05) cam4_image_uncrop_pane_g1

0x96c0,	// (0x0003cb0e) cam4_image_uncrop_pane_g2

0x96c9,	// (0x0003cb17) cam4_image_uncrop_pane_g3

0x96d2,	// (0x0003cb20) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00042d56) cam4_image_uncrop_pane_g

0xbd84,	// (0x0003f1d2) dia3_listrow_pane_ParamLimits

0x44fd,	// (0x0003794b) main_phob2_pane

0xb4a7,	// (0x0003e8f5) cell_tport_appsw_pane_cp02_ParamLimits

0xb4a7,	// (0x0003e8f5) cell_tport_appsw_pane_cp02

0xb4b6,	// (0x0003e904) cell_tport_appsw_pane_cp03_ParamLimits

0xb4b6,	// (0x0003e904) cell_tport_appsw_pane_cp03

0x44fd,	// (0x0003794b) phob2_contact_card_pane

0x44fd,	// (0x0003794b) phob2_listscroll_pane

0x236b,	// (0x000357b9) phob2_list_pane

0x2373,	// (0x000357c1) scroll_pane_cp034

0xbefd,	// (0x0003f34b) phob2_cc_data_pane_ParamLimits

0xbefd,	// (0x0003f34b) phob2_cc_data_pane

0xbf19,	// (0x0003f367) phob2_cc_listscroll_pane_ParamLimits

0xbf19,	// (0x0003f367) phob2_cc_listscroll_pane

0xbf35,	// (0x0003f383) list_double_large_graphic_phob2_pane_ParamLimits

0xbf35,	// (0x0003f383) list_double_large_graphic_phob2_pane

0xbf4d,	// (0x0003f39b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbf4d,	// (0x0003f39b) list_double_large_graphic_phob2_pane_g1

0x4422,	// (0x00037870) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x4422,	// (0x00037870) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2c,	// (0x0004337a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2c,	// (0x0004337a) list_double_large_graphic_phob2_pane_g

0x442e,	// (0x0003787c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x442e,	// (0x0003787c) list_double_large_graphic_phob2_pane_t1

0x4443,	// (0x00037891) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x4443,	// (0x00037891) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff31,	// (0x0004337f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff31,	// (0x0004337f) list_double_large_graphic_phob2_pane_t

0x44fd,	// (0x0003794b) list_highlight_pane_cp024

0x237b,	// (0x000357c9) phob2_cc_button_pane

0xbf5a,	// (0x0003f3a8) phob2_cc_data_pane_g1_ParamLimits

0xbf5a,	// (0x0003f3a8) phob2_cc_data_pane_g1

0xbf66,	// (0x0003f3b4) phob2_cc_data_pane_g2_ParamLimits

0xbf66,	// (0x0003f3b4) phob2_cc_data_pane_g2

0x0001,

0xff36,	// (0x00043384) phob2_cc_data_pane_g_ParamLimits

0xff36,	// (0x00043384) phob2_cc_data_pane_g

0xbf72,	// (0x0003f3c0) phob2_cc_data_pane_t1_ParamLimits

0xbf72,	// (0x0003f3c0) phob2_cc_data_pane_t1

0xbf84,	// (0x0003f3d2) phob2_cc_data_pane_t2_ParamLimits

0xbf84,	// (0x0003f3d2) phob2_cc_data_pane_t2

0xbf96,	// (0x0003f3e4) phob2_cc_data_pane_t3_ParamLimits

0xbf96,	// (0x0003f3e4) phob2_cc_data_pane_t3

0x0002,

0xff3b,	// (0x00043389) phob2_cc_data_pane_t_ParamLimits

0xff3b,	// (0x00043389) phob2_cc_data_pane_t

0x2383,	// (0x000357d1) phob2_cc_list_pane_ParamLimits

0x2383,	// (0x000357d1) phob2_cc_list_pane

0x077c,	// (0x00033bca) scroll_pane_cp035_ParamLimits

0x077c,	// (0x00033bca) scroll_pane_cp035

0x776b,	// (0x0003abb9) bg_button_pane_cp033

0x238f,	// (0x000357dd) phob2_cc_button_pane_g1

0x239b,	// (0x000357e9) phob2_cc_button_pane_t1

0x23b0,	// (0x000357fe) phob2_cc_button_pane_t2

0x0001,

0xff42,	// (0x00043390) phob2_cc_button_pane_t

0xbfa8,	// (0x0003f3f6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbfa8,	// (0x0003f3f6) list_double_large_graphic_phob2_cc_pane

0xbfc4,	// (0x0003f412) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbfc4,	// (0x0003f412) list_double_large_graphic_phob2_cc_pane_g1

0x4455,	// (0x000378a3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x4455,	// (0x000378a3) list_double_large_graphic_phob2_cc_pane_g2

0x4464,	// (0x000378b2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x4464,	// (0x000378b2) list_double_large_graphic_phob2_cc_pane_g3

0x4473,	// (0x000378c1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x4473,	// (0x000378c1) list_double_large_graphic_phob2_cc_pane_g4

0x4484,	// (0x000378d2) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x4484,	// (0x000378d2) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff47,	// (0x00043395) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff47,	// (0x00043395) list_double_large_graphic_phob2_cc_pane_g

0x4493,	// (0x000378e1) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x4493,	// (0x000378e1) list_double_large_graphic_phob2_cc_pane_t1

0x44bc,	// (0x0003790a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x44bc,	// (0x0003790a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff52,	// (0x000433a0) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff52,	// (0x000433a0) list_double_large_graphic_phob2_cc_pane_t

0x23c2,	// (0x00035810) list_highlight_pane_cp025_ParamLimits

0x23c2,	// (0x00035810) list_highlight_pane_cp025

0x776b,	// (0x0003abb9) bg_button_pane_cp033_ParamLimits

0x238f,	// (0x000357dd) phob2_cc_button_pane_g1_ParamLimits

0x239b,	// (0x000357e9) phob2_cc_button_pane_t1_ParamLimits

0x23b0,	// (0x000357fe) phob2_cc_button_pane_t2_ParamLimits

0xff42,	// (0x00043390) phob2_cc_button_pane_t_ParamLimits

0x47c0,	// (0x00037c0e) popup_wgtman_window

0x0518,	// (0x00033966) scroll_pane_cp038

0xbb96,	// (0x0003efe4) wgtman_btn_pane_cp_01_ParamLimits

0xbb96,	// (0x0003efe4) wgtman_btn_pane_cp_01

0x23d0,	// (0x0003581e) wgtman_content_pane

0x23d9,	// (0x00035827) wgtman_heading_pane

0x44fd,	// (0x0003794b) bg_heading_pane_cp02

0x23e2,	// (0x00035830) wgtman_heading_pane_g1

0x23ea,	// (0x00035838) wgtman_heading_pane_t1

0x23f8,	// (0x00035846) scroll_pane_cp036

0x2400,	// (0x0003584e) wgtman_list_pane

0x2408,	// (0x00035856) wgtman_list_pane_t1_ParamLimits

0x2408,	// (0x00035856) wgtman_list_pane_t1

0x9614,	// (0x0003ca62) cam4_grid_pane

0x37ea,	// (0x00036c38) bg_button_pane_cp015_ParamLimits

0xa2ac,	// (0x0003d6fa) bg_button_pane_cp016_ParamLimits

0xa2bf,	// (0x0003d70d) bg_button_pane_cp017_ParamLimits

0x382e,	// (0x00036c7c) popup_vitu2_query_window_g3_ParamLimits

0x382e,	// (0x00036c7c) popup_vitu2_query_window_g3

0x38a7,	// (0x00036cf5) popup_vitu2_query_window_t6_ParamLimits

0x38a7,	// (0x00036cf5) popup_vitu2_query_window_t6

0x38d2,	// (0x00036d20) popup_vitu2_query_window_t7_ParamLimits

0x38d2,	// (0x00036d20) popup_vitu2_query_window_t7

0x02ee,	// (0x0003373c) cam4_grid_pane_g1

0x02f7,	// (0x00033745) cam4_grid_pane_g2

0x242b,	// (0x00035879) cam4_grid_pane_g3

0x2434,	// (0x00035882) cam4_grid_pane_g4

0x0003,

0xff57,	// (0x000433a5) cam4_grid_pane_g

0x56ea,	// (0x00038b38) aid_placing_vt_slider_lsc_ParamLimits

0x5a1d,	// (0x00038e6b) vidtel_button_pane_ParamLimits

0x5a1d,	// (0x00038e6b) vidtel_button_pane

0x243f,	// (0x0003588d) bg_button_pane_cp034

0xbfd5,	// (0x0003f423) vidtel_button_pane_g1

0x2449,	// (0x00035897) vidtel_button_pane_t1

0x0657,	// (0x00033aa5) aid_size_vtel_slider_touch

0x077c,	// (0x00033bca) scroll_pane_cp039

0x117e,	// (0x000345cc) ncim_query_button_pane_cp01_ParamLimits

0x119d,	// (0x000345eb) ncimui_query_pane_g1_ParamLimits

0x776b,	// (0x0003abb9) input_focus_pane_cp012_ParamLimits

0x11c2,	// (0x00034610) ncim_query_entry_pane_t1_ParamLimits

0x077c,	// (0x00033bca) scroll_pane_cp039_ParamLimits

0x6991,	// (0x00039ddf) navi_pane_bcale_mc_g1

0x6999,	// (0x00039de7) navi_pane_bcale_mc_t1

0x179e,	// (0x00034bec) main_sp_fs_email_pane_g1

0x17a6,	// (0x00034bf4) main_sp_fs_email_pane_g2

0x0001,

0xfcf3,	// (0x00043141) main_sp_fs_email_pane_g

0x1d21,	// (0x0003516f) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1d21,	// (0x0003516f) list_single_cale_mrui_row_pane_g3

0xb86a,	// (0x0003ecb8) list_single_recal_day_pane_g5_event_pane

0x1ee5,	// (0x00035333) list_single_recal_day_pane_g7

0x2457,	// (0x000358a5) list_recal_day_event_pane_cp01

0x2460,	// (0x000358ae) list_recal_vselct_arw_lo_pane_cp01

0x2468,	// (0x000358b6) list_recal_vselct_arw_up_pane_cp01

0x2470,	// (0x000358be) list_recal_vselct_pane_cp01

0x06e3,	// (0x00033b31) list_recal_day_event_pane_cp01_g1

0x247a,	// (0x000358c8) list_recal_day_event_pane_cp01_t1

0x1eed,	// (0x0003533b) list_single_recal_day_pane_t1_ParamLimits

0x1eff,	// (0x0003534d) list_single_recal_day_pane_t2_ParamLimits

0xfe4a,	// (0x00043298) list_single_recal_day_pane_t_ParamLimits

0xc559,	// (0x0003f9a7) bg_notes_pane_ParamLimits

0xc567,	// (0x0003f9b5) list_notes_pane_ParamLimits

0x4cdd,	// (0x0003812b) scroll_pane_cp06_ParamLimits

0xc589,	// (0x0003f9d7) main_notes_pane_ParamLimits

0x44fd,	// (0x0003794b) main_welc_pane

0xbfdd,	// (0x0003f42b) main_welc_body_pane_ParamLimits

0xbfdd,	// (0x0003f42b) main_welc_body_pane

0xbfec,	// (0x0003f43a) main_welc_opti_pane_ParamLimits

0xbfec,	// (0x0003f43a) main_welc_opti_pane

0xbffb,	// (0x0003f449) main_welc_pane_t1_ParamLimits

0xbffb,	// (0x0003f449) main_welc_pane_t1

0xb659,	// (0x0003eaa7) main_welc_body_row_pane_ParamLimits

0xb659,	// (0x0003eaa7) main_welc_body_row_pane

0xc00f,	// (0x0003f45d) main_welc_opti_row_pane_ParamLimits

0xc00f,	// (0x0003f45d) main_welc_opti_row_pane

0x249f,	// (0x000358ed) main_welc_opti_row_pane_g1

0x24a7,	// (0x000358f5) main_welc_opti_row_pane_t1

0x24b6,	// (0x00035904) main_welc_body_row_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
