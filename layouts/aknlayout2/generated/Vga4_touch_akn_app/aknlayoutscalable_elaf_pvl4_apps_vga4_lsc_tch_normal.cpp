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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000df34 };

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
0x0903,	// (0x0000e837) Screen

0x090f,	// (0x0000e843) application_window

0x094b,	// (0x0000e87f) area_bottom_pane_ParamLimits

0x094b,	// (0x0000e87f) area_bottom_pane

0x0984,	// (0x0000e8b8) area_top_pane_ParamLimits

0x0984,	// (0x0000e8b8) area_top_pane

0x9433,	// (0x00017367) call_video_uplink_pane_ParamLimits

0x9433,	// (0x00017367) call_video_uplink_pane

0x09f9,	// (0x0000e92d) main_pane_ParamLimits

0x09f9,	// (0x0000e92d) main_pane

0xbe23,	// (0x00019d57) context_pane

0x3bec,	// (0x00011b20) navi_pane

0x3c1c,	// (0x00011b50) popup_cale_events_window_ParamLimits

0x3c1c,	// (0x00011b50) popup_cale_events_window

0xbe36,	// (0x00019d6a) popup_mup_playback_window

0x3c34,	// (0x00011b68) signal_pane

0x9bf7,	// (0x00017b2b) main_browser_pane

0xa927,	// (0x0001885b) main_burst_pane

0x38ee,	// (0x00011822) main_calc_pane

0xa927,	// (0x0001885b) main_cale_day_pane

0x9bf7,	// (0x00017b2b) main_cale_month_pane

0xa927,	// (0x0001885b) main_cale_week_pane

0xa927,	// (0x0001885b) main_call_pane

0x98a7,	// (0x000177db) main_call_poc_pane

0xa927,	// (0x0001885b) main_camera_pane

0xa927,	// (0x0001885b) main_chi_dic_pane

0xa7c9,	// (0x000186fd) main_clock_pane

0x98a7,	// (0x000177db) main_fmradio_pane

0xa927,	// (0x0001885b) main_graph_messa_pane

0x98a7,	// (0x000177db) main_help_pane

0x9bf7,	// (0x00017b2b) main_im_pane

0x9b02,	// (0x00017a36) main_image_pane_ParamLimits

0x9b02,	// (0x00017a36) main_image_pane

0x98a7,	// (0x000177db) main_location2_pane

0xa927,	// (0x0001885b) main_location_pane

0x98a7,	// (0x000177db) main_messa_pane

0x98a7,	// (0x000177db) main_mp2_pane

0xa927,	// (0x0001885b) main_mp_pane

0x98a7,	// (0x000177db) main_msg_pane

0x98a7,	// (0x000177db) main_mup_eq_pane

0x98a7,	// (0x000177db) main_mup_pane

0x9bf7,	// (0x00017b2b) main_notes_pane

0x98a7,	// (0x000177db) main_pec_pane

0x98a7,	// (0x000177db) main_phob_pane

0x98a7,	// (0x000177db) main_pinb_pane

0x98a7,	// (0x000177db) main_postcard_pane

0x98a7,	// (0x000177db) main_qdial_pane

0xa927,	// (0x0001885b) main_skin_pane

0x98a7,	// (0x000177db) main_smil2_pane

0xa927,	// (0x0001885b) main_smil_pane

0xa927,	// (0x0001885b) main_video_pane

0xa927,	// (0x0001885b) main_video_tele_pane

0x9b02,	// (0x00017a36) main_viewer_pane_ParamLimits

0x9b02,	// (0x00017a36) main_viewer_pane

0xa927,	// (0x0001885b) main_vorec_pane

0x3944,	// (0x00011878) popup_blid_sat_info_window_ParamLimits

0x3944,	// (0x00011878) popup_blid_sat_info_window

0x39a8,	// (0x000118dc) popup_dyc_status_message_window_ParamLimits

0x39a8,	// (0x000118dc) popup_dyc_status_message_window

0x39c2,	// (0x000118f6) popup_grid_large_graphic_window_ParamLimits

0x39c2,	// (0x000118f6) popup_grid_large_graphic_window

0x3a84,	// (0x000119b8) popup_loc_request_window_ParamLimits

0x3a84,	// (0x000119b8) popup_loc_request_window

0x3bc0,	// (0x00011af4) popup_wml_address_window_ParamLimits

0x3bc0,	// (0x00011af4) popup_wml_address_window

0x372c,	// (0x00011660) call_muted_g1

0x33bd,	// (0x000112f1) popup_call_audio_conf_window_ParamLimits

0x33bd,	// (0x000112f1) popup_call_audio_conf_window

0x373c,	// (0x00011670) popup_call_audio_first_window_ParamLimits

0x373c,	// (0x00011670) popup_call_audio_first_window

0x37b2,	// (0x000116e6) popup_call_audio_in_window_ParamLimits

0x37b2,	// (0x000116e6) popup_call_audio_in_window

0x37ee,	// (0x00011722) popup_call_audio_out_window_ParamLimits

0x37ee,	// (0x00011722) popup_call_audio_out_window

0x3828,	// (0x0001175c) popup_call_audio_second_window_ParamLimits

0x3828,	// (0x0001175c) popup_call_audio_second_window

0x387e,	// (0x000117b2) popup_call_audio_wait_window_ParamLimits

0x387e,	// (0x000117b2) popup_call_audio_wait_window

0x38b3,	// (0x000117e7) popup_number_entry_window_ParamLimits

0x38b3,	// (0x000117e7) popup_number_entry_window

0x945f,	// (0x00017393) bg_popup_call_pane_cp05_ParamLimits

0x945f,	// (0x00017393) bg_popup_call_pane_cp05

0x947f,	// (0x000173b3) popup_number_entry_window_t1

0x9492,	// (0x000173c6) popup_number_entry_window_t2

0x94a4,	// (0x000173d8) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0001d01b) popup_number_entry_window_t

0x94eb,	// (0x0001741f) text_title_cp2

0x94fe,	// (0x00017432) bg_popup_call_pane_cp_ParamLimits

0x94fe,	// (0x00017432) bg_popup_call_pane_cp

0x950c,	// (0x00017440) call_thumbnail_pane

0x9514,	// (0x00017448) popup_call_audio_in_window_g1_ParamLimits

0x9514,	// (0x00017448) popup_call_audio_in_window_g1

0x9520,	// (0x00017454) popup_call_audio_in_window_g2_ParamLimits

0x9520,	// (0x00017454) popup_call_audio_in_window_g2

0x952c,	// (0x00017460) popup_call_audio_in_window_g3_ParamLimits

0x952c,	// (0x00017460) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0001d024) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0001d024) popup_call_audio_in_window_g

0x9538,	// (0x0001746c) popup_call_audio_in_window_t1_ParamLimits

0x9538,	// (0x0001746c) popup_call_audio_in_window_t1

0x9554,	// (0x00017488) popup_call_audio_in_window_t2_ParamLimits

0x9554,	// (0x00017488) popup_call_audio_in_window_t2

0x9570,	// (0x000174a4) popup_call_audio_in_window_t3_ParamLimits

0x9570,	// (0x000174a4) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0001d02b) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0001d02b) popup_call_audio_in_window_t

0x94fe,	// (0x00017432) bg_popup_call_pane_cp01_ParamLimits

0x94fe,	// (0x00017432) bg_popup_call_pane_cp01

0x950c,	// (0x00017440) call_thumbnail_pane_cp02

0x9583,	// (0x000174b7) call_type_pane_cp022

0x958b,	// (0x000174bf) popup_call_audio_out_window_g1_ParamLimits

0x958b,	// (0x000174bf) popup_call_audio_out_window_g1

0x959d,	// (0x000174d1) popup_call_audio_out_window_g2_ParamLimits

0x959d,	// (0x000174d1) popup_call_audio_out_window_g2

0x95a9,	// (0x000174dd) popup_call_audio_out_window_g3_ParamLimits

0x95a9,	// (0x000174dd) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0001d032) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0001d032) popup_call_audio_out_window_g

0x95bb,	// (0x000174ef) popup_call_audio_out_window_t1_ParamLimits

0x95bb,	// (0x000174ef) popup_call_audio_out_window_t1

0x95d3,	// (0x00017507) popup_call_audio_out_window_t2_ParamLimits

0x95d3,	// (0x00017507) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0001d039) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0001d039) popup_call_audio_out_window_t

0x95e8,	// (0x0001751c) bg_popup_call_pane_ParamLimits

0x95e8,	// (0x0001751c) bg_popup_call_pane

0x0b80,	// (0x0000eab4) call_thumbnail_pane_cp_ParamLimits

0x0b80,	// (0x0000eab4) call_thumbnail_pane_cp

0x966c,	// (0x000175a0) call_type_pane_cp01_ParamLimits

0x966c,	// (0x000175a0) call_type_pane_cp01

0x96b0,	// (0x000175e4) popup_call_audio_first_window_g1_ParamLimits

0x96b0,	// (0x000175e4) popup_call_audio_first_window_g1

0x96fc,	// (0x00017630) popup_call_audio_first_window_g2_ParamLimits

0x96fc,	// (0x00017630) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0001d03e) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0001d03e) popup_call_audio_first_window_g

0x9740,	// (0x00017674) popup_call_audio_first_window_t1_ParamLimits

0x9740,	// (0x00017674) popup_call_audio_first_window_t1

0x97ec,	// (0x00017720) popup_call_audio_first_window_t4_ParamLimits

0x97ec,	// (0x00017720) popup_call_audio_first_window_t4

0x9878,	// (0x000177ac) popup_call_audio_first_window_t5_ParamLimits

0x9878,	// (0x000177ac) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0001d043) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0001d043) popup_call_audio_first_window_t

0x98a7,	// (0x000177db) bg_popup_call_pane_cp02

0x98b1,	// (0x000177e5) call_type_pane_cp023

0x98b9,	// (0x000177ed) popup_call_audio_wait_window_g1

0x98c1,	// (0x000177f5) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0001d04a) popup_call_audio_wait_window_g

0x98c9,	// (0x000177fd) popup_call_audio_wait_window_t3

0x98d7,	// (0x0001780b) bg_popup_call_pane_cp03_ParamLimits

0x98d7,	// (0x0001780b) bg_popup_call_pane_cp03

0x9937,	// (0x0001786b) call_thumbnail_pane_cp011_ParamLimits

0x9937,	// (0x0001786b) call_thumbnail_pane_cp011

0x9943,	// (0x00017877) call_type_pane_cp034_ParamLimits

0x9943,	// (0x00017877) call_type_pane_cp034

0x997f,	// (0x000178b3) popup_call_audio_second_window_g1_ParamLimits

0x997f,	// (0x000178b3) popup_call_audio_second_window_g1

0x99bb,	// (0x000178ef) popup_call_audio_second_window_g2_ParamLimits

0x99bb,	// (0x000178ef) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0001d04f) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0001d04f) popup_call_audio_second_window_g

0x99f7,	// (0x0001792b) popup_call_audio_second_window_t1_ParamLimits

0x99f7,	// (0x0001792b) popup_call_audio_second_window_t1

0x9a78,	// (0x000179ac) popup_call_audio_second_window_t2_ParamLimits

0x9a78,	// (0x000179ac) popup_call_audio_second_window_t2

0x9aae,	// (0x000179e2) popup_call_audio_second_window_t3_ParamLimits

0x9aae,	// (0x000179e2) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0001d054) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0001d054) popup_call_audio_second_window_t

0x98a7,	// (0x000177db) bg_popup_call_pane_cp04

0x9ae4,	// (0x00017a18) list_conf_pane

0x9aec,	// (0x00017a20) popup_call_audio_conf_window_t1

0x9afa,	// (0x00017a2e) call_thumbnail_pane_g1

0x9b02,	// (0x00017a36) bg_pinb_pane_ParamLimits

0x9b02,	// (0x00017a36) bg_pinb_pane

0x9b10,	// (0x00017a44) find_pinb_pane

0x9b19,	// (0x00017a4d) listscroll_pinb_pane_ParamLimits

0x9b19,	// (0x00017a4d) listscroll_pinb_pane

0x9b28,	// (0x00017a5c) pinb_bg_pane_g1

0x0ba4,	// (0x0000ead8) pinb_bg_pane_g2

0x0bb0,	// (0x0000eae4) pinb_bg_pane_g3

0x0bbc,	// (0x0000eaf0) pinb_bg_pane_g4

0x0bc8,	// (0x0000eafc) pinb_bg_pane_g5

0x0bd4,	// (0x0000eb08) pinb_bg_pane_g6

0x0bdf,	// (0x0000eb13) pinb_bg_pane_g7

0x0bea,	// (0x0000eb1e) pinb_bg_pane_g8

0x0bf5,	// (0x0000eb29) pinb_bg_pane_g9

0x0bff,	// (0x0000eb33) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0001d05b) pinb_bg_pane_g

0x0c1c,	// (0x0000eb50) grid_pinb_pane

0x0c27,	// (0x0000eb5b) list_pinb_pane

0x0c32,	// (0x0000eb66) scroll_pane_cp01_ParamLimits

0x0c32,	// (0x0000eb66) scroll_pane_cp01

0x9b32,	// (0x00017a66) find_pinb_pane_g1_ParamLimits

0x9b32,	// (0x00017a66) find_pinb_pane_g1

0x9b4a,	// (0x00017a7e) find_pinb_pane_t1

0x9b5c,	// (0x00017a90) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0001d075) find_pinb_pane_t

0x9b71,	// (0x00017aa5) input_focus_pane_cp01_ParamLimits

0x9b71,	// (0x00017aa5) input_focus_pane_cp01

0x0c44,	// (0x0000eb78) cell_pinb_pane_ParamLimits

0x0c44,	// (0x0000eb78) cell_pinb_pane

0x0c66,	// (0x0000eb9a) cell_pinb_pane_g1_ParamLimits

0x0c66,	// (0x0000eb9a) cell_pinb_pane_g1

0x0c7a,	// (0x0000ebae) cell_pinb_pane_g2_ParamLimits

0x0c7a,	// (0x0000ebae) cell_pinb_pane_g2

0x9b7d,	// (0x00017ab1) cell_pinb_pane_g3_ParamLimits

0x9b7d,	// (0x00017ab1) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0001d07a) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0001d07a) cell_pinb_pane_g

0x98a7,	// (0x000177db) grid_highlight_pane_cp01

0x0c86,	// (0x0000ebba) list_pinb_item_pane_ParamLimits

0x0c86,	// (0x0000ebba) list_pinb_item_pane

0x98a7,	// (0x000177db) list_highlight_pane_cp02

0x0c99,	// (0x0000ebcd) list_pinb_item_pane_g1_ParamLimits

0x0c99,	// (0x0000ebcd) list_pinb_item_pane_g1

0x0ca6,	// (0x0000ebda) list_pinb_item_pane_g2_ParamLimits

0x0ca6,	// (0x0000ebda) list_pinb_item_pane_g2

0x0cb2,	// (0x0000ebe6) list_pinb_item_pane_g3_ParamLimits

0x0cb2,	// (0x0000ebe6) list_pinb_item_pane_g3

0x0cc3,	// (0x0000ebf7) list_pinb_item_pane_g4_ParamLimits

0x0cc3,	// (0x0000ebf7) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0001d081) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0001d081) list_pinb_item_pane_g

0x0ccf,	// (0x0000ec03) list_pinb_item_pane_t1_ParamLimits

0x0ccf,	// (0x0000ec03) list_pinb_item_pane_t1

0x0d04,	// (0x0000ec38) calc_display_pane

0x0d2a,	// (0x0000ec5e) calc_paper_pane

0x0d4d,	// (0x0000ec81) grid_calc_pane

0x98a7,	// (0x000177db) bg_list_pane_cp01

0x0d7b,	// (0x0000ecaf) clock_g1

0x0d83,	// (0x0000ecb7) clock_g2

0x0001,

0xf156,	// (0x0001d08a) clock_g

0x0d8b,	// (0x0000ecbf) clock_t1_ParamLimits

0x0d8b,	// (0x0000ecbf) clock_t1

0x0da0,	// (0x0000ecd4) clock_t2_ParamLimits

0x0da0,	// (0x0000ecd4) clock_t2

0x0db2,	// (0x0000ece6) clock_t3_ParamLimits

0x0db2,	// (0x0000ece6) clock_t3

0x0dc4,	// (0x0000ecf8) clock_t4_ParamLimits

0x0dc4,	// (0x0000ecf8) clock_t4

0x0dd6,	// (0x0000ed0a) clock_t5_ParamLimits

0x0dd6,	// (0x0000ed0a) clock_t5

0x0deb,	// (0x0000ed1f) clock_t6_ParamLimits

0x0deb,	// (0x0000ed1f) clock_t6

0x0dfd,	// (0x0000ed31) clock_t7_ParamLimits

0x0dfd,	// (0x0000ed31) clock_t7

0x0e0f,	// (0x0000ed43) clock_t8_ParamLimits

0x0e0f,	// (0x0000ed43) clock_t8

0x0e23,	// (0x0000ed57) clock_t9_ParamLimits

0x0e23,	// (0x0000ed57) clock_t9

0x0008,

0xf15b,	// (0x0001d08f) clock_t_ParamLimits

0xf15b,	// (0x0001d08f) clock_t

0x9b91,	// (0x00017ac5) popup_clock_analogue_window_cp02

0x9b91,	// (0x00017ac5) popup_clock_digital_window_cp01

0x9b99,	// (0x00017acd) listscroll_help_pane

0x98a7,	// (0x000177db) phob_pre_status_pane

0x9ba3,	// (0x00017ad7) grid_qdial_pane

0x98a7,	// (0x000177db) listscroll_mce_pane

0x9bad,	// (0x00017ae1) bg_notes_pane

0x9bbb,	// (0x00017aef) list_notes_pane

0x0e39,	// (0x0000ed6d) scroll_pane_cp06

0x9bc9,	// (0x00017afd) bg_calc_paper_pane

0x9bdd,	// (0x00017b11) list_calc_pane

0x9bf7,	// (0x00017b2b) bg_calc_display_pane

0x0e4d,	// (0x0000ed81) calc_display_pane_t1

0x0e5f,	// (0x0000ed93) calc_display_pane_t2

0x9c03,	// (0x00017b37) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0001d0a2) calc_display_pane_t

0x0e71,	// (0x0000eda5) cell_calc_pane_ParamLimits

0x0e71,	// (0x0000eda5) cell_calc_pane

0x9c15,	// (0x00017b49) bg_calc_paper_pane_g1

0x9c21,	// (0x00017b55) bg_calc_paper_pane_g2

0x9c2d,	// (0x00017b61) bg_calc_paper_pane_g3

0x9c39,	// (0x00017b6d) bg_calc_paper_pane_g4

0x9c45,	// (0x00017b79) bg_calc_paper_pane_g5

0x0eac,	// (0x0000ede0) bg_calc_paper_pane_g6

0x0ebf,	// (0x0000edf3) bg_calc_paper_pane_g7

0x0ed2,	// (0x0000ee06) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0001d0a9) bg_calc_paper_pane_g

0x0ee3,	// (0x0000ee17) calc_bg_paper_pane_g9

0x0ef4,	// (0x0000ee28) list_calc_item_pane_ParamLimits

0x0ef4,	// (0x0000ee28) list_calc_item_pane

0x9c51,	// (0x00017b85) list_calc_item_pane_g1

0x9c5e,	// (0x00017b92) list_calc_item_pane_t1_ParamLimits

0x9c5e,	// (0x00017b92) list_calc_item_pane_t1

0x0f08,	// (0x0000ee3c) list_calc_item_pane_t2_ParamLimits

0x0f08,	// (0x0000ee3c) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0001d0ba) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0001d0ba) list_calc_item_pane_t

0x9c70,	// (0x00017ba4) cell_calc_pane_g1

0x9c7a,	// (0x00017bae) grid_highlight_pane_cp02

0x9c9c,	// (0x00017bd0) bg_calc_display_pane_g1

0x9ca5,	// (0x00017bd9) bg_calc_display_pane_g2

0x9caf,	// (0x00017be3) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0001d0c4) bg_calc_display_pane_g

0x0f3a,	// (0x0000ee6e) cell_qdial_pane_ParamLimits

0x0f3a,	// (0x0000ee6e) cell_qdial_pane

0x0f50,	// (0x0000ee84) cell_qdial_pane_g1_ParamLimits

0x0f50,	// (0x0000ee84) cell_qdial_pane_g1

0x0f66,	// (0x0000ee9a) cell_qdial_pane_g2_ParamLimits

0x0f66,	// (0x0000ee9a) cell_qdial_pane_g2

0x9cb8,	// (0x00017bec) cell_qdial_pane_g3_ParamLimits

0x9cb8,	// (0x00017bec) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0001d0cb) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0001d0cb) cell_qdial_pane_g

0x0f8c,	// (0x0000eec0) cell_qdial_pane_t1_ParamLimits

0x0f8c,	// (0x0000eec0) cell_qdial_pane_t1

0x0fa4,	// (0x0000eed8) cell_qdial_pane_t2_ParamLimits

0x0fa4,	// (0x0000eed8) cell_qdial_pane_t2

0x0fb7,	// (0x0000eeeb) cell_qdial_pane_t3_ParamLimits

0x0fb7,	// (0x0000eeeb) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0001d0d4) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0001d0d4) cell_qdial_pane_t

0x98a7,	// (0x000177db) grid_highlight_pane_cp04

0x9cc4,	// (0x00017bf8) thumbnail_qdial_pane_ParamLimits

0x9cc4,	// (0x00017bf8) thumbnail_qdial_pane

0x9d20,	// (0x00017c54) list_help_pane

0x9d29,	// (0x00017c5d) scroll_pane_cp02

0x0fca,	// (0x0000eefe) help_list_pane_t1_ParamLimits

0x0fca,	// (0x0000eefe) help_list_pane_t1

0x9d32,	// (0x00017c66) bg_notes_pane_g2

0x9d3a,	// (0x00017c6e) bg_notes_pane_g3

0x9d42,	// (0x00017c76) notes_bg_pane_g1

0x9d4a,	// (0x00017c7e) notes_bg_pane_g4

0x9d52,	// (0x00017c86) notes_bg_pane_g5

0x9d5a,	// (0x00017c8e) notes_bg_pane_g6

0x9d62,	// (0x00017c96) notes_bg_pane_g7

0x9d6a,	// (0x00017c9e) notes_bg_pane_g8

0x9d72,	// (0x00017ca6) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0001d0f2) notes_bg_pane_g

0x0fee,	// (0x0000ef22) list_notes_text_pane_ParamLimits

0x0fee,	// (0x0000ef22) list_notes_text_pane

0x9d7a,	// (0x00017cae) list_notes_text_pane_g1

0x1008,	// (0x0000ef3c) list_notes_text_pane_t1

0x9bf7,	// (0x00017b2b) listscroll_cale_week_pane

0x1033,	// (0x0000ef67) bg_cale_heading_pane

0x9d94,	// (0x00017cc8) bg_cale_pane_cp01

0x104f,	// (0x0000ef83) cale_week_corner_pane

0x1065,	// (0x0000ef99) cale_week_day_heading_pane

0x1081,	// (0x0000efb5) cale_week_scroll_pane_g1

0x109a,	// (0x0000efce) cale_week_scroll_pane_g2

0x10ab,	// (0x0000efdf) cale_week_scroll_pane_g3

0x10bc,	// (0x0000eff0) cale_week_scroll_pane_g4

0x10cd,	// (0x0000f001) cale_week_scroll_pane_g5

0x10de,	// (0x0000f012) cale_week_scroll_pane_g6

0x10ef,	// (0x0000f023) cale_week_scroll_pane_g7

0x1100,	// (0x0000f034) cale_week_scroll_pane_g8

0x1111,	// (0x0000f045) cale_week_scroll_pane_g9

0x1122,	// (0x0000f056) cale_week_scroll_pane_g10

0x1133,	// (0x0000f067) cale_week_scroll_pane_g11

0x1144,	// (0x0000f078) cale_week_scroll_pane_g12

0x1155,	// (0x0000f089) cale_week_scroll_pane_g13

0x116e,	// (0x0000f0a2) cale_week_scroll_pane_g14

0x1187,	// (0x0000f0bb) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0001d101) cale_week_scroll_pane_g

0x11a0,	// (0x0000f0d4) cale_week_time_pane

0x11b1,	// (0x0000f0e5) grid_cale_week_pane

0x11cc,	// (0x0000f100) scroll_pane_cp08

0x11e4,	// (0x0000f118) cell_cale_week_pane_ParamLimits

0x11e4,	// (0x0000f118) cell_cale_week_pane

0x122c,	// (0x0000f160) cale_week_day_heading_pane_t1

0x1240,	// (0x0000f174) cale_week_day_heading_pane_t2

0x1254,	// (0x0000f188) cale_week_day_heading_pane_t3

0x1268,	// (0x0000f19c) cale_week_day_heading_pane_t4

0x127c,	// (0x0000f1b0) cale_week_day_heading_pane_t5

0x1290,	// (0x0000f1c4) cale_week_day_heading_pane_t6

0x12a4,	// (0x0000f1d8) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0001d120) cale_week_day_heading_pane_t

0x9dbf,	// (0x00017cf3) bg_cale_side_pane

0x12b8,	// (0x0000f1ec) cale_week_time_pane_t1

0x12d0,	// (0x0000f204) cale_week_time_pane_t2

0x12e8,	// (0x0000f21c) cale_week_time_pane_t3

0x1300,	// (0x0000f234) cale_week_time_pane_t4

0x1318,	// (0x0000f24c) cale_week_time_pane_t5

0x1330,	// (0x0000f264) cale_week_time_pane_t6

0x1348,	// (0x0000f27c) cale_week_time_pane_t7

0x1364,	// (0x0000f298) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0001d12f) cale_week_time_pane_t

0x1384,	// (0x0000f2b8) cell_cale_week_pane_g2

0x1395,	// (0x0000f2c9) cell_cale_week_pane_g3_ParamLimits

0x1395,	// (0x0000f2c9) cell_cale_week_pane_g3

0x9dcd,	// (0x00017d01) grid_highlight_pane_cp07

0x9dd5,	// (0x00017d09) listscroll_gms_pane

0x9ddf,	// (0x00017d13) grid_gms_pane

0x9de8,	// (0x00017d1c) listscroll_gms_pane_g1

0x9df0,	// (0x00017d24) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0001d140) listscroll_gms_pane_g

0x13ad,	// (0x0000f2e1) scroll_pane_cp010

0x13b8,	// (0x0000f2ec) cell_gms_pane_ParamLimits

0x13b8,	// (0x0000f2ec) cell_gms_pane

0x13d2,	// (0x0000f306) cell_gms_pane_g1

0x9df8,	// (0x00017d2c) cell_gms_pane_g2

0x9e00,	// (0x00017d34) cell_gms_pane_g3

0x9e09,	// (0x00017d3d) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0001d145) cell_gms_pane_g

0x9e12,	// (0x00017d46) grid_highlight_pane_cp09

0x36d4,	// (0x00011608) phob_pre_status_pane_g1

0x36dc,	// (0x00011610) phob_pre_status_pane_g2

0x36e4,	// (0x00011618) phob_pre_status_pane_g3

0x36ec,	// (0x00011620) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0001d534) phob_pre_status_pane_g

0x36fc,	// (0x00011630) phob_pre_status_pane_t1

0x370c,	// (0x00011640) phob_pre_status_pane_t2

0x371c,	// (0x00011650) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0001d53f) phob_pre_status_pane_t

0x98a7,	// (0x000177db) bg_list_pane_cp05

0x13e2,	// (0x0000f316) grid_vorec_pane

0x9e1a,	// (0x00017d4e) vorec_t1

0x9e28,	// (0x00017d5c) vorec_t2

0x9e36,	// (0x00017d6a) vorec_t3

0x9e44,	// (0x00017d78) vorec_t4

0x9e52,	// (0x00017d86) vorec_t5

0x9e60,	// (0x00017d94) vorec_t6

0x0006,

0xf21a,	// (0x0001d14e) vorec_t

0x9e7c,	// (0x00017db0) wait_bar_pane_cp01

0x13ec,	// (0x0000f320) cell_vorec_pane_ParamLimits

0x13ec,	// (0x0000f320) cell_vorec_pane

0x9e84,	// (0x00017db8) cell_vorec_pane_g1

0x98a7,	// (0x000177db) grid_highlight_pane_cp05

0x1417,	// (0x0000f34b) cams_zoom_pane

0x1426,	// (0x0000f35a) image_vga_pane

0x1440,	// (0x0000f374) main_camera_pane_g1

0x1452,	// (0x0000f386) main_camera_pane_g2

0x1462,	// (0x0000f396) main_camera_pane_g3

0x1476,	// (0x0000f3aa) main_camera_pane_g4

0x148a,	// (0x0000f3be) main_camera_pane_g5

0x149e,	// (0x0000f3d2) main_camera_pane_g6

0x14b2,	// (0x0000f3e6) main_camera_pane_g7

0x0007,

0xf229,	// (0x0001d15d) main_camera_pane_g

0x14c6,	// (0x0000f3fa) main_camera_pane_t1

0x14dc,	// (0x0000f410) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0001d16e) main_camera_pane_t

0x151a,	// (0x0000f44e) cams_zoom_pane_cp_ParamLimits

0x151a,	// (0x0000f44e) cams_zoom_pane_cp

0x1542,	// (0x0000f476) image_cif_pane_ParamLimits

0x1542,	// (0x0000f476) image_cif_pane

0x157d,	// (0x0000f4b1) image_subqcif_pane

0x1587,	// (0x0000f4bb) main_video_pane_g1_ParamLimits

0x1587,	// (0x0000f4bb) main_video_pane_g1

0x15ab,	// (0x0000f4df) main_video_pane_g2_ParamLimits

0x15ab,	// (0x0000f4df) main_video_pane_g2

0x15e1,	// (0x0000f515) main_video_pane_g3_ParamLimits

0x15e1,	// (0x0000f515) main_video_pane_g3

0x160f,	// (0x0000f543) main_video_pane_g4_ParamLimits

0x160f,	// (0x0000f543) main_video_pane_g4

0x163d,	// (0x0000f571) main_video_pane_g5_ParamLimits

0x163d,	// (0x0000f571) main_video_pane_g5

0x9e9a,	// (0x00017dce) main_video_pane_g6_ParamLimits

0x9e9a,	// (0x00017dce) main_video_pane_g6

0x0006,

0xf23f,	// (0x0001d173) main_video_pane_g_ParamLimits

0xf23f,	// (0x0001d173) main_video_pane_g

0x1666,	// (0x0000f59a) main_video_pane_t1_ParamLimits

0x1666,	// (0x0000f59a) main_video_pane_t1

0x9eb4,	// (0x00017de8) cams_zoom_pane_g1

0x9ebd,	// (0x00017df1) cams_zoom_pane_g2

0x9ec6,	// (0x00017dfa) cams_zoom_pane_g3

0x9ecf,	// (0x00017e03) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0001d182) cams_zoom_pane_g

0x16c3,	// (0x0000f5f7) grid_cams_pane

0x16dd,	// (0x0000f611) linegrid_cams_pane

0x16ef,	// (0x0000f623) cell_cams_pane_ParamLimits

0x16ef,	// (0x0000f623) cell_cams_pane

0x9ed8,	// (0x00017e0c) cams_burst_image_pane

0x9ee0,	// (0x00017e14) cell_cams_pane_g1

0x98a7,	// (0x000177db) grid_highlight_pane_cp03

0x9c70,	// (0x00017ba4) mp_bg_pane_g1

0x98a7,	// (0x000177db) bg_list_pane_cp03

0xbcf5,	// (0x00019c29) bg_mp_pane

0xbcfd,	// (0x00019c31) grid_mp_pane

0xbd05,	// (0x00019c39) media_player_g1

0xbd0f,	// (0x00019c43) media_player_t1

0xbd1d,	// (0x00019c51) media_player_t2

0xbd2b,	// (0x00019c5f) media_player_t3

0xbd39,	// (0x00019c6d) media_player_t4

0xbd47,	// (0x00019c7b) media_player_t5

0xbd55,	// (0x00019c89) media_player_t6

0xbd63,	// (0x00019c97) media_player_t7

0x0006,

0xf5ea,	// (0x0001d51e) media_player_t

0xbd71,	// (0x00019ca5) wait_bar_pane_cp02

0xf5cf,	// (0x0001d503) main_usb_pane_t

0x36cb,	// (0x000115ff) cell_mp_pane

0x9c70,	// (0x00017ba4) cell_mp_pane_g1

0x98a7,	// (0x000177db) grid_highlight_pane_cp06

0x9fa6,	// (0x00017eda) grid_skin_colour_pane

0x9fae,	// (0x00017ee2) list_highlight_pane_cp03

0x1763,	// (0x0000f697) skin_g1

0x9fb6,	// (0x00017eea) skin_t1

0x9fc5,	// (0x00017ef9) skin_t2

0x0001,

0xf283,	// (0x0001d1b7) skin_t

0x176d,	// (0x0000f6a1) cell_skin_colour_pane_ParamLimits

0x176d,	// (0x0000f6a1) cell_skin_colour_pane

0x9fd3,	// (0x00017f07) cell_skin_colour_pane_g1

0x17e0,	// (0x0000f714) call_video_g1_ParamLimits

0x17e0,	// (0x0000f714) call_video_g1

0x17fc,	// (0x0000f730) call_video_g2_ParamLimits

0x17fc,	// (0x0000f730) call_video_g2

0x0001,

0xf288,	// (0x0001d1bc) call_video_g_ParamLimits

0xf288,	// (0x0001d1bc) call_video_g

0x1841,	// (0x0000f775) call_video_uplink_pane_cp1_ParamLimits

0x1841,	// (0x0000f775) call_video_uplink_pane_cp1

0x9fe5,	// (0x00017f19) call_video_uplink_pane_cp2

0x18e2,	// (0x0000f816) video_down_crop_pane_ParamLimits

0x18e2,	// (0x0000f816) video_down_crop_pane

0x19cb,	// (0x0000f8ff) video_down_pane_ParamLimits

0x19cb,	// (0x0000f8ff) video_down_pane

0x9fed,	// (0x00017f21) video_down_subqcif_pane_ParamLimits

0x9fed,	// (0x00017f21) video_down_subqcif_pane

0xa007,	// (0x00017f3b) video_down_subqcif_pane_cp_ParamLimits

0xa007,	// (0x00017f3b) video_down_subqcif_pane_cp

0xa02f,	// (0x00017f63) im_reading_pane_ParamLimits

0xa02f,	// (0x00017f63) im_reading_pane

0x1ad4,	// (0x0000fa08) im_writing_pane_ParamLimits

0x1ad4,	// (0x0000fa08) im_writing_pane

0x1af2,	// (0x0000fa26) im_reading_pane_t1

0xa049,	// (0x00017f7d) list_im_pane

0xa05a,	// (0x00017f8e) scroll_pane_cp07

0x1b31,	// (0x0000fa65) im_writing_pane_t1_ParamLimits

0x1b31,	// (0x0000fa65) im_writing_pane_t1

0xa073,	// (0x00017fa7) im_writing_pane_t2_ParamLimits

0xa073,	// (0x00017fa7) im_writing_pane_t2

0x0001,

0xf292,	// (0x0001d1c6) im_writing_pane_t_ParamLimits

0xf292,	// (0x0001d1c6) im_writing_pane_t

0x98a7,	// (0x000177db) input_focus_pane_cp04

0x98a7,	// (0x000177db) input_focus_pane_cp05

0x1b46,	// (0x0000fa7a) list_im_single_pane_ParamLimits

0x1b46,	// (0x0000fa7a) list_im_single_pane

0x1b5f,	// (0x0000fa93) list_single_im_pane_t1

0x368b,	// (0x000115bf) blid_accuracy_pane

0x3693,	// (0x000115c7) blid_compass_pane

0x369d,	// (0x000115d1) main_location_t1

0x36ad,	// (0x000115e1) main_location_t2

0x36bd,	// (0x000115f1) main_location_t3

0x0002,

0xf5f9,	// (0x0001d52d) main_location_t

0x98a7,	// (0x000177db) aid_levels_location

0x9c70,	// (0x00017ba4) blid_accuracy_pane_g1

0x9c70,	// (0x00017ba4) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0001d228) blid_accuracy_pane_g

0xa0bb,	// (0x00017fef) wml_content_pane

0xa0f9,	// (0x0001802d) wml_button_pane_ParamLimits

0xa0f9,	// (0x0001802d) wml_button_pane

0x1b6e,	// (0x0000faa2) wml_list_single_large_pane_ParamLimits

0x1b6e,	// (0x0000faa2) wml_list_single_large_pane

0x1b87,	// (0x0000fabb) wml_list_single_medium_pane_ParamLimits

0x1b87,	// (0x0000fabb) wml_list_single_medium_pane

0x1ba1,	// (0x0000fad5) wml_list_single_small_pane_ParamLimits

0x1ba1,	// (0x0000fad5) wml_list_single_small_pane

0xa10d,	// (0x00018041) wml_selection_box_pane_ParamLimits

0xa10d,	// (0x00018041) wml_selection_box_pane

0xa120,	// (0x00018054) wml_list_single_pane_t1

0xa12f,	// (0x00018063) wml_list_single_medium_pane_t1

0xa13e,	// (0x00018072) wml_list_single_large_pane_t1

0xa14d,	// (0x00018081) input_focus_pane_cp02_ParamLimits

0xa14d,	// (0x00018081) input_focus_pane_cp02

0xa160,	// (0x00018094) wml_selection_box_pane_g1

0xa169,	// (0x0001809d) wml_selection_box_pane_t1_ParamLimits

0xa169,	// (0x0001809d) wml_selection_box_pane_t1

0x9b02,	// (0x00017a36) bg_wml_button_pane_ParamLimits

0x9b02,	// (0x00017a36) bg_wml_button_pane

0xa181,	// (0x000180b5) wml_button_pane_g1

0xa189,	// (0x000180bd) wml_button_pane_t1

0xa181,	// (0x000180b5) wml_button_bg_pane_g1

0xa199,	// (0x000180cd) wml_button_bg_pane_g2

0xa1a1,	// (0x000180d5) wml_button_bg_pane_g3

0xa1a9,	// (0x000180dd) wml_button_bg_pane_g4

0xa1b1,	// (0x000180e5) wml_button_bg_pane_g5

0xa1b9,	// (0x000180ed) wml_button_bg_pane_g6

0xa1c1,	// (0x000180f5) wml_button_bg_pane_g7

0xa1c9,	// (0x000180fd) wml_button_bg_pane_g8

0xa1d1,	// (0x00018105) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0001d1cb) wml_button_bg_pane_g

0x1bc0,	// (0x0000faf4) bg_list_pane_cp02

0xa1d9,	// (0x0001810d) mce_header_pane_ParamLimits

0xa1d9,	// (0x0001810d) mce_header_pane

0xa1ef,	// (0x00018123) mce_icon_pane

0xa1ef,	// (0x00018123) mce_image_pane

0xa1f8,	// (0x0001812c) mce_text_pane_ParamLimits

0xa1f8,	// (0x0001812c) mce_text_pane

0x1bca,	// (0x0000fafe) scroll_pane_cp03

0xa0f1,	// (0x00018025) scroll_pane_cp04

0xa20b,	// (0x0001813f) scroll_pane_cp05_ParamLimits

0xa20b,	// (0x0001813f) scroll_pane_cp05

0x1bd4,	// (0x0000fb08) mce_header_field_pane_ParamLimits

0x1bd4,	// (0x0000fb08) mce_header_field_pane

0x1bed,	// (0x0000fb21) mce_header_field_pane_2_ParamLimits

0x1bed,	// (0x0000fb21) mce_header_field_pane_2

0x1c03,	// (0x0000fb37) mce_header_field_pane_3

0x1c0b,	// (0x0000fb3f) list_single_mce_message_pane_ParamLimits

0x1c0b,	// (0x0000fb3f) list_single_mce_message_pane

0x1c27,	// (0x0000fb5b) list_single_mce_smart_pane_ParamLimits

0x1c27,	// (0x0000fb5b) list_single_mce_smart_pane

0xa217,	// (0x0001814b) input_focus_pane_cp03

0xa220,	// (0x00018154) list_header_data_pane

0x1c4e,	// (0x0000fb82) mce_header_field_pane_t1

0x1c5e,	// (0x0000fb92) list_single_mce_header_pane_ParamLimits

0x1c5e,	// (0x0000fb92) list_single_mce_header_pane

0xa228,	// (0x0001815c) list_single_mce_header_pane_t1

0xa237,	// (0x0001816b) list_single_mce_message_pane_g1

0xa23f,	// (0x00018173) list_single_mce_message_pane_t1

0x1c90,	// (0x0000fbc4) bg_cale_heading_pane_cp01_ParamLimits

0x1c90,	// (0x0000fbc4) bg_cale_heading_pane_cp01

0xa24d,	// (0x00018181) bg_cale_pane_cp02_ParamLimits

0xa24d,	// (0x00018181) bg_cale_pane_cp02

0x1cc3,	// (0x0000fbf7) cale_month_corner_pane

0x1cd9,	// (0x0000fc0d) cale_month_day_heading_pane_ParamLimits

0x1cd9,	// (0x0000fc0d) cale_month_day_heading_pane

0x1d0c,	// (0x0000fc40) cale_month_pane_g1_ParamLimits

0x1d0c,	// (0x0000fc40) cale_month_pane_g1

0x1d38,	// (0x0000fc6c) cale_month_pane_g2_ParamLimits

0x1d38,	// (0x0000fc6c) cale_month_pane_g2

0x1d59,	// (0x0000fc8d) cale_month_pane_g3_ParamLimits

0x1d59,	// (0x0000fc8d) cale_month_pane_g3

0x1d95,	// (0x0000fcc9) cale_month_pane_g4_ParamLimits

0x1d95,	// (0x0000fcc9) cale_month_pane_g4

0x1dd1,	// (0x0000fd05) cale_month_pane_g5_ParamLimits

0x1dd1,	// (0x0000fd05) cale_month_pane_g5

0x1e0d,	// (0x0000fd41) cale_month_pane_g6_ParamLimits

0x1e0d,	// (0x0000fd41) cale_month_pane_g6

0x1e49,	// (0x0000fd7d) cale_month_pane_g7_ParamLimits

0x1e49,	// (0x0000fd7d) cale_month_pane_g7

0x1e85,	// (0x0000fdb9) cale_month_pane_g8_ParamLimits

0x1e85,	// (0x0000fdb9) cale_month_pane_g8

0x1ec1,	// (0x0000fdf5) cale_month_pane_g9_ParamLimits

0x1ec1,	// (0x0000fdf5) cale_month_pane_g9

0x1ef7,	// (0x0000fe2b) cale_month_pane_g10_ParamLimits

0x1ef7,	// (0x0000fe2b) cale_month_pane_g10

0x1f21,	// (0x0000fe55) cale_month_pane_g11_ParamLimits

0x1f21,	// (0x0000fe55) cale_month_pane_g11

0x1f4b,	// (0x0000fe7f) cale_month_pane_g12_ParamLimits

0x1f4b,	// (0x0000fe7f) cale_month_pane_g12

0x1f79,	// (0x0000fead) cale_month_pane_g13_ParamLimits

0x1f79,	// (0x0000fead) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0001d1de) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0001d1de) cale_month_pane_g

0x1fa7,	// (0x0000fedb) cale_month_week_pane

0x1fb8,	// (0x0000feec) grid_cale_month_pane_ParamLimits

0x1fb8,	// (0x0000feec) grid_cale_month_pane

0x1fe6,	// (0x0000ff1a) cale_month_day_heading_pane_t1

0x2044,	// (0x0000ff78) cale_month_day_heading_pane_t2

0x20a9,	// (0x0000ffdd) cale_month_day_heading_pane_t3

0x210e,	// (0x00010042) cale_month_day_heading_pane_t4

0x2173,	// (0x000100a7) cale_month_day_heading_pane_t5

0x21d8,	// (0x0001010c) cale_month_day_heading_pane_t6

0x223d,	// (0x00010171) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0001d1f9) cale_month_day_heading_pane_t

0x9dbf,	// (0x00017cf3) bg_cale_side_pane_cp01

0x22a2,	// (0x000101d6) cale_month_week_pane_t1

0x22b9,	// (0x000101ed) cale_month_week_pane_t2

0x22d0,	// (0x00010204) cale_month_week_pane_t3

0x22e7,	// (0x0001021b) cale_month_week_pane_t4

0x22fe,	// (0x00010232) cale_month_week_pane_t5

0x2315,	// (0x00010249) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0001d208) cale_month_week_pane_t

0x2334,	// (0x00010268) cell_cale_month_pane_ParamLimits

0x2334,	// (0x00010268) cell_cale_month_pane

0xa2ac,	// (0x000181e0) cell_cale_month_pane_g1

0x23e2,	// (0x00010316) cell_cale_month_pane_t1_ParamLimits

0x23e2,	// (0x00010316) cell_cale_month_pane_t1

0x9dcd,	// (0x00017d01) grid_highlight_pane_cp08

0x9c70,	// (0x00017ba4) main_smil_g1

0x23fe,	// (0x00010332) smil_status_pane

0xa2b8,	// (0x000181ec) smil_text_pane

0xbc13,	// (0x00019b47) bg_popup_call3_rect_pane_g8

0xbc1b,	// (0x00019b4f) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0001d4c1) bg_popup_call3_rect_pane_g

0xbeb0,	// (0x00019de4) smil_status_volume_pane_g1

0xa2c2,	// (0x000181f6) smil_status_pane_t1

0xbee3,	// (0x00019e17) volume_smil_pane

0xa2d9,	// (0x0001820d) list_smil_text_pane

0x2413,	// (0x00010347) scroll_pane_cp011

0x241e,	// (0x00010352) smil_text_list_pane_t1_ParamLimits

0x241e,	// (0x00010352) smil_text_list_pane_t1

0xa2e3,	// (0x00018217) aid_volume_smil_ParamLimits

0xa2e3,	// (0x00018217) aid_volume_smil

0x9c70,	// (0x00017ba4) smil_volume_pane_g1

0x9c70,	// (0x00017ba4) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0001d228) smil_volume_pane_g

0x9bf7,	// (0x00017b2b) listscroll_cale_day_pane

0xa305,	// (0x00018239) bg_cale_pane

0xa31d,	// (0x00018251) list_cale_pane

0xa32e,	// (0x00018262) scroll_pane_cp09

0xa33f,	// (0x00018273) cale_bg_pane_g1

0xa347,	// (0x0001827b) cale_bg_pane_g2

0xa34f,	// (0x00018283) cale_bg_pane_g3

0xa357,	// (0x0001828b) cale_bg_pane_g4

0xa35f,	// (0x00018293) cale_bg_pane_g5

0xa367,	// (0x0001829b) cale_bg_pane_g6

0xa36f,	// (0x000182a3) cale_bg_pane_g7

0xa377,	// (0x000182ab) cale_bg_pane_g8

0xa37f,	// (0x000182b3) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0001d22d) cale_bg_pane_g

0x2473,	// (0x000103a7) list_cale_time_pane_ParamLimits

0x2473,	// (0x000103a7) list_cale_time_pane

0x2488,	// (0x000103bc) list_cale_time_pane_g1_ParamLimits

0x2488,	// (0x000103bc) list_cale_time_pane_g1

0xa387,	// (0x000182bb) list_cale_time_pane_g2_ParamLimits

0xa387,	// (0x000182bb) list_cale_time_pane_g2

0x2494,	// (0x000103c8) list_cale_time_pane_g3_ParamLimits

0x2494,	// (0x000103c8) list_cale_time_pane_g3

0x24a2,	// (0x000103d6) list_cale_time_pane_g4_ParamLimits

0x24a2,	// (0x000103d6) list_cale_time_pane_g4

0x24b0,	// (0x000103e4) list_cale_time_pane_g5_ParamLimits

0x24b0,	// (0x000103e4) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0001d240) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0001d240) list_cale_time_pane_g

0x24be,	// (0x000103f2) list_cale_time_pane_t1_ParamLimits

0x24be,	// (0x000103f2) list_cale_time_pane_t1

0x24e6,	// (0x0001041a) list_cale_time_pane_t2_ParamLimits

0x24e6,	// (0x0001041a) list_cale_time_pane_t2

0x285c,	// (0x00010790) aid_blid_cardinal_pane

0x289e,	// (0x000107d2) compass_pane_t4

0x250e,	// (0x00010442) list_cale_time_pane_t4_ParamLimits

0x250e,	// (0x00010442) list_cale_time_pane_t4

0x28ac,	// (0x000107e0) compass_pane_t5

0x28bc,	// (0x000107f0) compass_pane_t6

0x28ca,	// (0x000107fe) compass_pane_t7

0xa879,	// (0x000187ad) navi_pane_cc_t1

0xa9e0,	// (0x00018914) aid_phob_thumbnail_center_pane

0x3051,	// (0x00010f85) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0001d24d) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0001d24d) list_cale_time_pane_t

0x94fe,	// (0x00017432) bg_popup_window_pane_cp02_ParamLimits

0x94fe,	// (0x00017432) bg_popup_window_pane_cp02

0xa3a1,	// (0x000182d5) heading_pane_cp01_ParamLimits

0xa3a1,	// (0x000182d5) heading_pane_cp01

0xa3ad,	// (0x000182e1) loc_req_pane_ParamLimits

0xa3ad,	// (0x000182e1) loc_req_pane

0xa3bd,	// (0x000182f1) loc_type_pane_ParamLimits

0xa3bd,	// (0x000182f1) loc_type_pane

0xa3cf,	// (0x00018303) loc_type_pane_t1_ParamLimits

0xa3cf,	// (0x00018303) loc_type_pane_t1

0xa3e1,	// (0x00018315) loc_type_pane_t2_ParamLimits

0xa3e1,	// (0x00018315) loc_type_pane_t2

0xa3f3,	// (0x00018327) loc_type_pane_t3_ParamLimits

0xa3f3,	// (0x00018327) loc_type_pane_t3

0x0002,

0xf320,	// (0x0001d254) loc_type_pane_t_ParamLimits

0xf320,	// (0x0001d254) loc_type_pane_t

0xa405,	// (0x00018339) list_loc_req_pane

0xa40f,	// (0x00018343) scroll_pane_cp012

0x2536,	// (0x0001046a) list_single_loc_request_popup_menu_pane_ParamLimits

0x2536,	// (0x0001046a) list_single_loc_request_popup_menu_pane

0xa41a,	// (0x0001834e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa41a,	// (0x0001834e) list_single_loc_request_popup_menu_pane_g1

0xa426,	// (0x0001835a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa426,	// (0x0001835a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0001d25b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0001d25b) list_single_loc_request_popup_menu_pane_g

0xa432,	// (0x00018366) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa432,	// (0x00018366) list_single_loc_request_popup_menu_pane_t1

0x9b02,	// (0x00017a36) bg_popup_window_pane_cp03_ParamLimits

0x9b02,	// (0x00017a36) bg_popup_window_pane_cp03

0xa448,	// (0x0001837c) heading_loc_req_pane_ParamLimits

0xa448,	// (0x0001837c) heading_loc_req_pane

0x2543,	// (0x00010477) popup_dyc_status_message_window_g1_ParamLimits

0x2543,	// (0x00010477) popup_dyc_status_message_window_g1

0x2557,	// (0x0001048b) popup_dyc_status_message_window_t1_ParamLimits

0x2557,	// (0x0001048b) popup_dyc_status_message_window_t1

0x256c,	// (0x000104a0) popup_dyc_status_message_window_t2_ParamLimits

0x256c,	// (0x000104a0) popup_dyc_status_message_window_t2

0x2581,	// (0x000104b5) popup_dyc_status_message_window_t3_ParamLimits

0x2581,	// (0x000104b5) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0001d260) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0001d260) popup_dyc_status_message_window_t

0x98a7,	// (0x000177db) bg_heading_pane_cp01

0xa454,	// (0x00018388) heading_loc_req_pane_g1

0xa45c,	// (0x00018390) heading_loc_req_pane_g2

0xa464,	// (0x00018398) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0001d267) heading_loc_req_pane_g

0xa46c,	// (0x000183a0) heading_loc_req_pane_t1

0xa4f3,	// (0x00018427) bg_popup_sub_pane_cp01_ParamLimits

0xa4f3,	// (0x00018427) bg_popup_sub_pane_cp01

0xa501,	// (0x00018435) popup_cale_events_window_g1_ParamLimits

0xa501,	// (0x00018435) popup_cale_events_window_g1

0xa521,	// (0x00018455) popup_cale_events_window_g2_ParamLimits

0xa521,	// (0x00018455) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0001d29b) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0001d29b) popup_cale_events_window_g

0xa541,	// (0x00018475) popup_cale_events_window_t1_ParamLimits

0xa541,	// (0x00018475) popup_cale_events_window_t1

0xa553,	// (0x00018487) popup_cale_events_window_t2_ParamLimits

0xa553,	// (0x00018487) popup_cale_events_window_t2

0xa591,	// (0x000184c5) popup_cale_events_window_t3_ParamLimits

0xa591,	// (0x000184c5) popup_cale_events_window_t3

0xa5cb,	// (0x000184ff) popup_cale_events_window_t4_ParamLimits

0xa5cb,	// (0x000184ff) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0001d2a0) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0001d2a0) popup_cale_events_window_t

0x260f,	// (0x00010543) call_type_pane

0x261f,	// (0x00010553) popup_call_status_window_g1

0x2633,	// (0x00010567) popup_call_status_window_g2

0x2647,	// (0x0001057b) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0001d2a9) popup_call_status_window_g

0xa601,	// (0x00018535) call_type_pane_g1

0xa60a,	// (0x0001853e) call_type_pane_g2

0x0001,

0xf37c,	// (0x0001d2b0) call_type_pane_g

0x98a7,	// (0x000177db) bg_popup_sub_pane_cp02

0xa613,	// (0x00018547) listscroll_popup_wml_pane

0xa61b,	// (0x0001854f) list_wml_pane

0xa625,	// (0x00018559) scroll_pane_cp013

0xa630,	// (0x00018564) list_single_graphic_popup_wml_pane_ParamLimits

0xa630,	// (0x00018564) list_single_graphic_popup_wml_pane

0x9c70,	// (0x00017ba4) list_single_graphic_popup_wml_pane_g1

0xa644,	// (0x00018578) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0001d2b5) list_single_graphic_popup_wml_pane_g

0xa64c,	// (0x00018580) list_single_graphic_popup_wml_pane_t1

0xa662,	// (0x00018596) aid_call_pane

0x9afa,	// (0x00017a2e) popup_clock_analogue_window_g1

0x9afa,	// (0x00017a2e) popup_clock_analogue_window_g2

0xa66a,	// (0x0001859e) popup_clock_analogue_window_g3

0xa66a,	// (0x0001859e) popup_clock_analogue_window_g4

0x9c70,	// (0x00017ba4) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0001d2ba) popup_clock_analogue_window_g

0xa672,	// (0x000185a6) popup_clock_analogue_window_t1

0xa680,	// (0x000185b4) clock_digital_number_pane_ParamLimits

0xa680,	// (0x000185b4) clock_digital_number_pane

0xa68c,	// (0x000185c0) clock_digital_number_pane_cp02_ParamLimits

0xa68c,	// (0x000185c0) clock_digital_number_pane_cp02

0xa698,	// (0x000185cc) clock_digital_number_pane_cp03_ParamLimits

0xa698,	// (0x000185cc) clock_digital_number_pane_cp03

0xa6a4,	// (0x000185d8) clock_digital_number_pane_cp04_ParamLimits

0xa6a4,	// (0x000185d8) clock_digital_number_pane_cp04

0xa6b0,	// (0x000185e4) clock_digital_separator_pane_ParamLimits

0xa6b0,	// (0x000185e4) clock_digital_separator_pane

0xa6bc,	// (0x000185f0) popup_clock_digital_window_t1

0x9c70,	// (0x00017ba4) clock_digital_number_pane_g1

0x9c70,	// (0x00017ba4) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0001d228) clock_digital_number_pane_g

0x9c70,	// (0x00017ba4) clock_digital_separator_pane_g1

0x9c70,	// (0x00017ba4) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0001d228) clock_digital_separator_pane_g

0x98a7,	// (0x000177db) bg_popup_window_pane_cp04

0xa6d9,	// (0x0001860d) heading_pane_cp03

0xa6e1,	// (0x00018615) listscroll_popup_gms_pane

0xa6e9,	// (0x0001861d) grid_large_graphic_popup_pane

0xa6f3,	// (0x00018627) listscroll_popup_gms_pane_g1

0xa6fb,	// (0x0001862f) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0001d2c5) listscroll_popup_gms_pane_g

0xa0f1,	// (0x00018025) scroll_pane_cp014

0x2657,	// (0x0001058b) cell_large_graphic_popup_pane_ParamLimits

0x2657,	// (0x0001058b) cell_large_graphic_popup_pane

0x266f,	// (0x000105a3) cell_large_graphic_popup_pane_g1_ParamLimits

0x266f,	// (0x000105a3) cell_large_graphic_popup_pane_g1

0xa703,	// (0x00018637) cell_large_graphic_popup_pane_g2_ParamLimits

0xa703,	// (0x00018637) cell_large_graphic_popup_pane_g2

0xa70f,	// (0x00018643) cell_large_graphic_popup_pane_g3_ParamLimits

0xa70f,	// (0x00018643) cell_large_graphic_popup_pane_g3

0xa71c,	// (0x00018650) cell_large_graphic_popup_pane_g4_ParamLimits

0xa71c,	// (0x00018650) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0001d2ca) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0001d2ca) cell_large_graphic_popup_pane_g

0xa72c,	// (0x00018660) grid_highlight_pane_cp010

0x9c70,	// (0x00017ba4) bg_popup_call_pane_g1

0xa736,	// (0x0001866a) list_single_graphic_popup_conf_pane_ParamLimits

0xa736,	// (0x0001866a) list_single_graphic_popup_conf_pane

0xa748,	// (0x0001867c) list_highlight_pane_cp01

0xa751,	// (0x00018685) list_single_graphic_popup_conf_pane_g1

0xa759,	// (0x0001868d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0001d2d3) list_single_graphic_popup_conf_pane_g

0xa761,	// (0x00018695) list_single_graphic_popup_conf_pane_t1

0xa76f,	// (0x000186a3) linegrid_cams_pane_g1

0x267b,	// (0x000105af) linegrid_cams_pane_g2

0x9e00,	// (0x00017d34) linegrid_cams_pane_g3

0xa778,	// (0x000186ac) linegrid_cams_pane_g4

0x2684,	// (0x000105b8) linegrid_cams_pane_g5

0x268d,	// (0x000105c1) linegrid_cams_pane_g6

0x9e09,	// (0x00017d3d) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0001d2d8) linegrid_cams_pane_g

0xa781,	// (0x000186b5) popup_clock_analogue_window

0xa781,	// (0x000186b5) popup_clock_digital_window

0x98a7,	// (0x000177db) popup_phob_thumbnail_window

0x9c70,	// (0x00017ba4) call_video_uplink_pane_g1

0xa78a,	// (0x000186be) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0001d2e7) call_video_uplink_pane_g

0xa792,	// (0x000186c6) video_uplink_pane

0xa79a,	// (0x000186ce) mce_image_pane_g1

0x2698,	// (0x000105cc) mce_image_pane_g2

0x26a2,	// (0x000105d6) mce_image_pane_g3

0x26ac,	// (0x000105e0) mce_image_pane_g4

0x26b4,	// (0x000105e8) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0001d2ec) mce_image_pane_g

0xa7a4,	// (0x000186d8) control_top_pane_stacon_cp01_ParamLimits

0xa7a4,	// (0x000186d8) control_top_pane_stacon_cp01

0xa7b8,	// (0x000186ec) uni_indicator_pane_stacon_cp01_ParamLimits

0xa7b8,	// (0x000186ec) uni_indicator_pane_stacon_cp01

0xa7c9,	// (0x000186fd) bg_popup_sub_pane_cp03

0x26bc,	// (0x000105f0) chi_dic_find_pane

0x26c4,	// (0x000105f8) listscroll_chi_dic_pane

0x26cd,	// (0x00010601) main_pane_chidic_g1

0x26e0,	// (0x00010614) chi_dic_find_pane_t1

0xa7d3,	// (0x00018707) find_chidic_pane

0xa7dc,	// (0x00018710) chi_dic_list_pane_ParamLimits

0xa7dc,	// (0x00018710) chi_dic_list_pane

0xa7ed,	// (0x00018721) scroll_pane_cp020

0x26ee,	// (0x00010622) find_chidic_pane_t1

0x98a7,	// (0x000177db) input_focus_pane_cp06

0x26fd,	// (0x00010631) list_chi_dic_pane_ParamLimits

0x26fd,	// (0x00010631) list_chi_dic_pane

0x270f,	// (0x00010643) list_chi_dic_pane_t1_ParamLimits

0x270f,	// (0x00010643) list_chi_dic_pane_t1

0x98a7,	// (0x000177db) list_highlight_pane_cp020

0xa7f5,	// (0x00018729) bg_cale_heading_pane_g1

0x2722,	// (0x00010656) bg_cale_heading_pane_g2

0x272a,	// (0x0001065e) bg_cale_heading_pane_g3

0x2732,	// (0x00010666) bg_cale_heading_pane_g4

0x273a,	// (0x0001066e) bg_cale_heading_pane_g5

0x2742,	// (0x00010676) bg_cale_heading_pane_g6

0x274a,	// (0x0001067e) bg_cale_heading_pane_g7

0x2752,	// (0x00010686) bg_cale_heading_pane_g8

0x275a,	// (0x0001068e) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0001d2f7) bg_cale_heading_pane_g

0xa7f5,	// (0x00018729) bg_cale_side_pane_g1

0x2762,	// (0x00010696) bg_cale_side_pane_g2

0x276c,	// (0x000106a0) bg_cale_side_pane_g3

0x2776,	// (0x000106aa) bg_cale_side_pane_g4

0x2780,	// (0x000106b4) bg_cale_side_pane_g5

0x278a,	// (0x000106be) bg_cale_side_pane_g6

0x2794,	// (0x000106c8) bg_cale_side_pane_g7

0x279e,	// (0x000106d2) bg_cale_side_pane_g8

0x27a6,	// (0x000106da) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0001d30a) bg_cale_side_pane_g

0x27ae,	// (0x000106e2) popup_call_status_window_ParamLimits

0x27ae,	// (0x000106e2) popup_call_status_window

0xa7fd,	// (0x00018731) stacon_top_pane

0xa805,	// (0x00018739) status_pane_ParamLimits

0xa805,	// (0x00018739) status_pane

0xa81a,	// (0x0001874e) status_small_pane

0xa822,	// (0x00018756) control_pane

0x98a7,	// (0x000177db) stacon_bottom_pane

0xa82a,	// (0x0001875e) list_single_mce_smart_pane_t1_ParamLimits

0xa82a,	// (0x0001875e) list_single_mce_smart_pane_t1

0xa83d,	// (0x00018771) list_single_mce_smart_pane_t2_ParamLimits

0xa83d,	// (0x00018771) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0001d31d) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0001d31d) list_single_mce_smart_pane_t

0x27fb,	// (0x0001072f) compass_pane

0x2806,	// (0x0001073a) main_location2_pane_t1

0x281c,	// (0x00010750) main_location2_pane_t2

0x2832,	// (0x00010766) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0001d322) main_location2_pane_t

0xa85c,	// (0x00018790) compass_pane_g1_ParamLimits

0xa85c,	// (0x00018790) compass_pane_g1

0x2880,	// (0x000107b4) compass_pane_t1

0x288f,	// (0x000107c3) compass_pane_t2

0x0005,

0xf3f7,	// (0x0001d32b) compass_pane_t

0x28da,	// (0x0001080e) text_secondary_cp61

0xa870,	// (0x000187a4) navi_pane_cams_g5

0xa893,	// (0x000187c7) navi_pane_im_t1

0xa8a1,	// (0x000187d5) navi_pane_mp_g1_ParamLimits

0xa8a1,	// (0x000187d5) navi_pane_mp_g1

0xa8b5,	// (0x000187e9) navi_pane_mp_g2_ParamLimits

0xa8b5,	// (0x000187e9) navi_pane_mp_g2

0xa8c1,	// (0x000187f5) navi_pane_mp_g3_ParamLimits

0xa8c1,	// (0x000187f5) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0001d33f) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0001d33f) navi_pane_mp_g

0xa8cd,	// (0x00018801) navi_pane_mp_t1

0xa8db,	// (0x0001880f) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0001d346) navi_pane_mp_t

0xa917,	// (0x0001884b) navi_pane_vt_g1

0xa8cd,	// (0x00018801) navi_pane_vt_t1

0xa91f,	// (0x00018853) navi_slider_pane

0xa927,	// (0x0001885b) zooming_pane

0xa92f,	// (0x00018863) navi_slider_pane_g1

0xa938,	// (0x0001886c) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0001d34d) navi_slider_pane_g

0xa965,	// (0x00018899) aid_levels_zoom

0xa96d,	// (0x000188a1) zooming_pane_g1

0xa975,	// (0x000188a9) zooming_pane_g2

0xa975,	// (0x000188a9) zooming_pane_g3

0x0002,

0xf428,	// (0x0001d35c) zooming_pane_g

0xa97d,	// (0x000188b1) level_10_zoom

0xa986,	// (0x000188ba) level_11_zoom

0xa98f,	// (0x000188c3) level_1_zoom

0xa998,	// (0x000188cc) level_2_zoom

0xa9a1,	// (0x000188d5) level_3_zoom

0xa9aa,	// (0x000188de) level_4_zoom

0xa9b3,	// (0x000188e7) level_5_zoom

0xa9bc,	// (0x000188f0) level_6_zoom

0xa9c5,	// (0x000188f9) level_7_zoom

0xa9ce,	// (0x00018902) level_8_zoom

0xa9d7,	// (0x0001890b) level_9_zoom

0xa9e8,	// (0x0001891c) popup_phob_thumbnail_window_g1

0xa9f0,	// (0x00018924) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0001d363) popup_phob_thumbnail_window_g

0xbd79,	// (0x00019cad) level_1_location

0xbd81,	// (0x00019cb5) level_2_location

0xbd89,	// (0x00019cbd) level_3_location

0xbd91,	// (0x00019cc5) level_4_location

0xa927,	// (0x0001885b) level_5_location

0x2a1b,	// (0x0001094f) mce_icon_pane_g1

0x2a23,	// (0x00010957) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0001d368) mce_icon_pane_g

0x2a2b,	// (0x0001095f) main_mup_pane_g1_ParamLimits

0x2a2b,	// (0x0001095f) main_mup_pane_g1

0x2a41,	// (0x00010975) main_mup_pane_g2_ParamLimits

0x2a41,	// (0x00010975) main_mup_pane_g2

0x2a59,	// (0x0001098d) main_mup_pane_g3_ParamLimits

0x2a59,	// (0x0001098d) main_mup_pane_g3

0x2a71,	// (0x000109a5) main_mup_pane_g4_ParamLimits

0x2a71,	// (0x000109a5) main_mup_pane_g4

0x2a83,	// (0x000109b7) main_mup_pane_g5_ParamLimits

0x2a83,	// (0x000109b7) main_mup_pane_g5

0x2a9f,	// (0x000109d3) main_mup_pane_g6_ParamLimits

0x2a9f,	// (0x000109d3) main_mup_pane_g6

0x2ab9,	// (0x000109ed) main_mup_pane_g7_ParamLimits

0x2ab9,	// (0x000109ed) main_mup_pane_g7

0x2ad7,	// (0x00010a0b) main_mup_pane_g8_ParamLimits

0x2ad7,	// (0x00010a0b) main_mup_pane_g8

0x2af5,	// (0x00010a29) main_mup_pane_g9_ParamLimits

0x2af5,	// (0x00010a29) main_mup_pane_g9

0x2b11,	// (0x00010a45) main_mup_pane_g10_ParamLimits

0x2b11,	// (0x00010a45) main_mup_pane_g10

0x2b2f,	// (0x00010a63) main_mup_pane_g11_ParamLimits

0x2b2f,	// (0x00010a63) main_mup_pane_g11

0x2b49,	// (0x00010a7d) main_mup_pane_g12_ParamLimits

0x2b49,	// (0x00010a7d) main_mup_pane_g12

0x2b5f,	// (0x00010a93) main_mup_pane_g13_ParamLimits

0x2b5f,	// (0x00010a93) main_mup_pane_g13

0x000c,

0xf439,	// (0x0001d36d) main_mup_pane_g_ParamLimits

0xf439,	// (0x0001d36d) main_mup_pane_g

0x2b73,	// (0x00010aa7) main_mup_pane_t1_ParamLimits

0x2b73,	// (0x00010aa7) main_mup_pane_t1

0x2b8f,	// (0x00010ac3) main_mup_pane_t2_ParamLimits

0x2b8f,	// (0x00010ac3) main_mup_pane_t2

0x2ba7,	// (0x00010adb) main_mup_pane_t3_ParamLimits

0x2ba7,	// (0x00010adb) main_mup_pane_t3

0x2bbf,	// (0x00010af3) main_mup_pane_t4_ParamLimits

0x2bbf,	// (0x00010af3) main_mup_pane_t4

0x2bdd,	// (0x00010b11) main_mup_pane_t5_ParamLimits

0x2bdd,	// (0x00010b11) main_mup_pane_t5

0x2bf2,	// (0x00010b26) main_mup_pane_t6_ParamLimits

0x2bf2,	// (0x00010b26) main_mup_pane_t6

0x0005,

0xf454,	// (0x0001d388) main_mup_pane_t_ParamLimits

0xf454,	// (0x0001d388) main_mup_pane_t

0x2c04,	// (0x00010b38) mup_progress_pane_ParamLimits

0x2c04,	// (0x00010b38) mup_progress_pane

0x2c10,	// (0x00010b44) mup_visualizer_pane_ParamLimits

0x2c10,	// (0x00010b44) mup_visualizer_pane

0x2c42,	// (0x00010b76) mup_volume_pane_ParamLimits

0x2c42,	// (0x00010b76) mup_volume_pane

0xa9f8,	// (0x0001892c) mup_visualizer_pane_g1_ParamLimits

0xa9f8,	// (0x0001892c) mup_visualizer_pane_g1

0xa9f8,	// (0x0001892c) mup_visualizer_pane_g2_ParamLimits

0xa9f8,	// (0x0001892c) mup_visualizer_pane_g2

0xa85c,	// (0x00018790) mup_visualizer_pane_g3_ParamLimits

0xa85c,	// (0x00018790) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0001d395) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0001d395) mup_visualizer_pane_g

0x9c70,	// (0x00017ba4) mup_volume_pane_g1

0xaa0e,	// (0x00018942) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0001d39c) mup_volume_pane_g

0x9c70,	// (0x00017ba4) mup_progress_pane_g1

0xaa17,	// (0x0001894b) mup_progress_pane_g2

0xaa20,	// (0x00018954) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0001d3a1) mup_progress_pane_g

0x98a7,	// (0x000177db) bg_popup_window_pane_cp05

0xaa29,	// (0x0001895d) heading_pane_cp02_ParamLimits

0xaa29,	// (0x0001895d) heading_pane_cp02

0xaa45,	// (0x00018979) list_popup_blid_pane

0xaa4d,	// (0x00018981) list_blid_sat_info_pane_ParamLimits

0xaa4d,	// (0x00018981) list_blid_sat_info_pane

0xaa60,	// (0x00018994) list_blid_sat_info_pane_g1

0xaa68,	// (0x0001899c) list_blid_sat_info_pane_t1

0x2d6c,	// (0x00010ca0) mup_equalizer_pane_ParamLimits

0x2d6c,	// (0x00010ca0) mup_equalizer_pane

0x2d8d,	// (0x00010cc1) mup_equalizer_pane_cp1_ParamLimits

0x2d8d,	// (0x00010cc1) mup_equalizer_pane_cp1

0x2dae,	// (0x00010ce2) mup_equalizer_pane_cp2_ParamLimits

0x2dae,	// (0x00010ce2) mup_equalizer_pane_cp2

0x2dd3,	// (0x00010d07) mup_equalizer_pane_cp3_ParamLimits

0x2dd3,	// (0x00010d07) mup_equalizer_pane_cp3

0x2dfc,	// (0x00010d30) mup_equalizer_pane_cp4_ParamLimits

0x2dfc,	// (0x00010d30) mup_equalizer_pane_cp4

0x2e25,	// (0x00010d59) mup_equalizer_pane_cp5

0x2e3d,	// (0x00010d71) mup_equalizer_pane_cp6

0x2e55,	// (0x00010d89) mup_equalizer_pane_cp7

0xbc93,	// (0x00019bc7) bg_popup_call_poc_act_pane_g9

0xbc9b,	// (0x00019bcf) bg_popup_call_poc_act_pane_g10

0xbca3,	// (0x00019bd7) bg_popup_call_poc_act_pane_g11

0x000a,

0x9b02,	// (0x00017a36) mup_scale_pane

0x9c70,	// (0x00017ba4) mup_scale_pane_g1

0xaa76,	// (0x000189aa) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0001d3bd) mup_scale_pane_g

0xaa9a,	// (0x000189ce) msg_data_pane

0xaaa2,	// (0x000189d6) scroll_pane_cp017

0x2e7f,	// (0x00010db3) bg_list_pane_cp04_ParamLimits

0x2e7f,	// (0x00010db3) bg_list_pane_cp04

0xaab2,	// (0x000189e6) msg_data_pane_g1

0x2e9f,	// (0x00010dd3) msg_data_pane_g2

0x2ea9,	// (0x00010ddd) msg_data_pane_g3

0x2eb3,	// (0x00010de7) msg_data_pane_g4

0x2ebb,	// (0x00010def) msg_data_pane_g5

0x2ec3,	// (0x00010df7) msg_data_pane_g6

0x2ecb,	// (0x00010dff) msg_data_pane_g7

0x0006,

0xf498,	// (0x0001d3cc) msg_data_pane_g

0x2ed3,	// (0x00010e07) msg_text_pane_ParamLimits

0x2ed3,	// (0x00010e07) msg_text_pane

0x2f02,	// (0x00010e36) qrid_highlight_pane_cp011_ParamLimits

0x2f02,	// (0x00010e36) qrid_highlight_pane_cp011

0x98a7,	// (0x000177db) msg_body_pane

0x98a7,	// (0x000177db) msg_header_pane

0xaac3,	// (0x000189f7) input_focus_pane_cp07

0x2f26,	// (0x00010e5a) msg_header_pane_t1_ParamLimits

0x2f26,	// (0x00010e5a) msg_header_pane_t1

0xaad8,	// (0x00018a0c) msg_header_pane_t2_ParamLimits

0xaad8,	// (0x00018a0c) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0001d3e0) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0001d3e0) msg_header_pane_t

0xaaea,	// (0x00018a1e) msg_body_pane_g1

0x2f3a,	// (0x00010e6e) msg_body_pane_t1_ParamLimits

0x2f3a,	// (0x00010e6e) msg_body_pane_t1

0xaaf2,	// (0x00018a26) msg_body_pane_t2_ParamLimits

0xaaf2,	// (0x00018a26) msg_body_pane_t2

0xab04,	// (0x00018a38) msg_body_pane_t3_ParamLimits

0xab04,	// (0x00018a38) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0001d3e5) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0001d3e5) msg_body_pane_t

0x2fa5,	// (0x00010ed9) main_viewer_pane_g1_ParamLimits

0x2fa5,	// (0x00010ed9) main_viewer_pane_g1

0x2fb3,	// (0x00010ee7) main_viewer_pane_g2_ParamLimits

0x2fb3,	// (0x00010ee7) main_viewer_pane_g2

0x2fc1,	// (0x00010ef5) main_viewer_pane_g3_ParamLimits

0x2fc1,	// (0x00010ef5) main_viewer_pane_g3

0x2fd0,	// (0x00010f04) main_viewer_pane_g4_ParamLimits

0x2fd0,	// (0x00010f04) main_viewer_pane_g4

0xab2e,	// (0x00018a62) main_viewer_pane_g5_ParamLimits

0xab2e,	// (0x00018a62) main_viewer_pane_g5

0xab2e,	// (0x00018a62) main_viewer_pane_g7_ParamLimits

0xab2e,	// (0x00018a62) main_viewer_pane_g7

0xab40,	// (0x00018a74) main_viewer_pane_g8_ParamLimits

0xab40,	// (0x00018a74) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0001d3f5) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0001d3f5) main_viewer_pane_g

0xab58,	// (0x00018a8c) viewer_content_pane_ParamLimits

0xab58,	// (0x00018a8c) viewer_content_pane

0x300e,	// (0x00010f42) main_postcard_pane_g1_ParamLimits

0x300e,	// (0x00010f42) main_postcard_pane_g1

0x3024,	// (0x00010f58) main_postcard_pane_g2_ParamLimits

0x3024,	// (0x00010f58) main_postcard_pane_g2

0x303a,	// (0x00010f6e) main_postcard_pane_g3_ParamLimits

0x303a,	// (0x00010f6e) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0001d406) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0001d406) main_postcard_pane_g

0x3051,	// (0x00010f85) main_postcard_pane_g4

0xbec3,	// (0x00019df7) smil_status_volume_pane_g2

0x3094,	// (0x00010fc8) postcard_pane_ParamLimits

0x3094,	// (0x00010fc8) postcard_pane

0xab66,	// (0x00018a9a) postcard_pane_g1_ParamLimits

0xab66,	// (0x00018a9a) postcard_pane_g1

0x30e4,	// (0x00011018) postcard_pane_g2_ParamLimits

0x30e4,	// (0x00011018) postcard_pane_g2

0x30f0,	// (0x00011024) postcard_pane_g3_ParamLimits

0x30f0,	// (0x00011024) postcard_pane_g3

0xab74,	// (0x00018aa8) postcard_pane_g4_ParamLimits

0xab74,	// (0x00018aa8) postcard_pane_g4

0x30fc,	// (0x00011030) postcard_pane_g5_ParamLimits

0x30fc,	// (0x00011030) postcard_pane_g5

0x310e,	// (0x00011042) postcard_pane_g6_ParamLimits

0x310e,	// (0x00011042) postcard_pane_g6

0xab66,	// (0x00018a9a) postcard_pane_g7_ParamLimits

0xab66,	// (0x00018a9a) postcard_pane_g7

0x0006,

0xf4df,	// (0x0001d413) postcard_pane_g_ParamLimits

0xf4df,	// (0x0001d413) postcard_pane_g

0x3126,	// (0x0001105a) main_mp2_pane_g1_ParamLimits

0x3126,	// (0x0001105a) main_mp2_pane_g1

0x3134,	// (0x00011068) main_mp2_pane_g2_ParamLimits

0x3134,	// (0x00011068) main_mp2_pane_g2

0x3140,	// (0x00011074) main_mp2_pane_g3_ParamLimits

0x3140,	// (0x00011074) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0001d422) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0001d422) main_mp2_pane_g

0x314c,	// (0x00011080) main_mp2_pane_t1_ParamLimits

0x314c,	// (0x00011080) main_mp2_pane_t1

0x3163,	// (0x00011097) main_mp2_pane_t2_ParamLimits

0x3163,	// (0x00011097) main_mp2_pane_t2

0x3177,	// (0x000110ab) main_mp2_pane_t3_ParamLimits

0x3177,	// (0x000110ab) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0001d429) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0001d429) main_mp2_pane_t

0xab82,	// (0x00018ab6) pec_content_pane_ParamLimits

0xab82,	// (0x00018ab6) pec_content_pane

0xa0f1,	// (0x00018025) scroll_pane_cp015

0xab94,	// (0x00018ac8) pec_attribute_pane_ParamLimits

0xab94,	// (0x00018ac8) pec_attribute_pane

0x3189,	// (0x000110bd) pec_content_pane_g1_ParamLimits

0x3189,	// (0x000110bd) pec_content_pane_g1

0xaba4,	// (0x00018ad8) pec_content_pane_t1_ParamLimits

0xaba4,	// (0x00018ad8) pec_content_pane_t1

0xabb6,	// (0x00018aea) pec_content_pane_t2_ParamLimits

0xabb6,	// (0x00018aea) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0001d430) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0001d430) pec_content_pane_t

0x3195,	// (0x000110c9) list_single_graphic_pane_cp01_ParamLimits

0x3195,	// (0x000110c9) list_single_graphic_pane_cp01

0x9b02,	// (0x00017a36) bg_popup_sub_pane_cp04

0xabc8,	// (0x00018afc) popup_mup_playback_window_g1

0xabd4,	// (0x00018b08) popup_mup_playback_window_t1

0xabe9,	// (0x00018b1d) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0001d435) popup_mup_playback_window_t

0xac20,	// (0x00018b54) main_image_pane_g1_ParamLimits

0xac20,	// (0x00018b54) main_image_pane_g1

0xac63,	// (0x00018b97) scroll_pane_cp018_ParamLimits

0xac63,	// (0x00018b97) scroll_pane_cp018

0xac7b,	// (0x00018baf) scroll_pane_cp016_ParamLimits

0xac7b,	// (0x00018baf) scroll_pane_cp016

0x3267,	// (0x0001119b) smil2_image_pane_ParamLimits

0x3267,	// (0x0001119b) smil2_image_pane

0x329d,	// (0x000111d1) smil2_root_pane_ParamLimits

0x329d,	// (0x000111d1) smil2_root_pane

0x32d5,	// (0x00011209) smil2_text_pane_ParamLimits

0x32d5,	// (0x00011209) smil2_text_pane

0x98a7,	// (0x000177db) bg_list_pane_cp06

0xacb7,	// (0x00018beb) grid_radio_pane

0x98a7,	// (0x000177db) bg_popup_window_pane_cp06

0xacc1,	// (0x00018bf5) main_fmradio_pane_t1

0xa6d9,	// (0x0001860d) heading_pane_cp04

0xaccf,	// (0x00018c03) main_fmradio_pane_t2

0xbcab,	// (0x00019bdf) popup_cale_lunar_info_window_g1

0xacdd,	// (0x00018c11) main_fmradio_pane_t3

0xbcb3,	// (0x00019be7) popup_cale_lunar_info_window_g2

0xaced,	// (0x00018c21) main_fmradio_pane_t4

0x0001,

0xacfb,	// (0x00018c2f) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0001d510) popup_cale_lunar_info_window_g

0xf516,	// (0x0001d44a) main_fmradio_pane_t

0xad09,	// (0x00018c3d) wait_bar_pane_cp03

0xad11,	// (0x00018c45) cell_fmradio_pane_ParamLimits

0xad11,	// (0x00018c45) cell_fmradio_pane

0xab66,	// (0x00018a9a) cell_fmradio_pane_g1_ParamLimits

0xab66,	// (0x00018a9a) cell_fmradio_pane_g1

0x98a7,	// (0x000177db) grid_highlight_pane_cp011

0xad26,	// (0x00018c5a) poc_content_pane_ParamLimits

0xad26,	// (0x00018c5a) poc_content_pane

0xad38,	// (0x00018c6c) scroll_pane_cp019

0x3365,	// (0x00011299) popup_call_poc_act_window_ParamLimits

0x3365,	// (0x00011299) popup_call_poc_act_window

0x3389,	// (0x000112bd) popup_call_poc_inact_window_ParamLimits

0x3389,	// (0x000112bd) popup_call_poc_inact_window

0xf5b3,	// (0x0001d4e7) bg_popup_call_poc_act_pane_g

0xbc23,	// (0x00019b57) bg_popup_call_poc_inact_pane_g1

0xbc2b,	// (0x00019b5f) bg_popup_call_poc_inact_pane_g2

0xad40,	// (0x00018c74) popup_call_poc_act_window_g2

0xbc33,	// (0x00019b67) bg_popup_call_poc_inact_pane_g3

0xbc3b,	// (0x00019b6f) bg_popup_call_poc_inact_pane_g4

0xbc43,	// (0x00019b77) bg_popup_call_poc_inact_pane_g5

0xad48,	// (0x00018c7c) popup_call_poc_act_window_t1_ParamLimits

0xad48,	// (0x00018c7c) popup_call_poc_act_window_t1

0xad70,	// (0x00018ca4) popup_call_poc_act_window_t2_ParamLimits

0xad70,	// (0x00018ca4) popup_call_poc_act_window_t2

0xad98,	// (0x00018ccc) popup_call_poc_act_window_t3_ParamLimits

0xad98,	// (0x00018ccc) popup_call_poc_act_window_t3

0xadc0,	// (0x00018cf4) popup_call_poc_act_window_t4_ParamLimits

0xadc0,	// (0x00018cf4) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0001d455) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0001d455) popup_call_poc_act_window_t

0xbc4b,	// (0x00019b7f) bg_popup_call_poc_inact_pane_g6

0xbc53,	// (0x00019b87) bg_popup_call_poc_inact_pane_g7

0xbc5b,	// (0x00019b8f) bg_popup_call_poc_inact_pane_g8

0xadd2,	// (0x00018d06) popup_call_poc_inact_window_g2

0xbc63,	// (0x00019b97) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0001d4d4) bg_popup_call_poc_inact_pane_g

0xadda,	// (0x00018d0e) popup_call_poc_inact_window_t1_ParamLimits

0xadda,	// (0x00018d0e) popup_call_poc_inact_window_t1

0xadef,	// (0x00018d23) popup_call_poc_inact_window_t2_ParamLimits

0xadef,	// (0x00018d23) popup_call_poc_inact_window_t2

0xae04,	// (0x00018d38) popup_call_poc_inact_window_t3_ParamLimits

0xae04,	// (0x00018d38) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0001d45e) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0001d45e) popup_call_poc_inact_window_t

0xbe23,	// (0x00019d57) context_pane_ParamLimits

0x3c34,	// (0x00011b68) signal_pane_ParamLimits

0xa927,	// (0x0001885b) main_call2_pane

0xbe11,	// (0x00019d45) popup_phob_thumbnail2_window_ParamLimits

0xbe11,	// (0x00019d45) popup_phob_thumbnail2_window

0xab16,	// (0x00018a4a) aid_hotspot_pointer_arrow_pane

0xab1e,	// (0x00018a52) aid_hotspot_pointer_hand_pane

0x36f4,	// (0x00011628) phob_pre_status_pane_g5

0x1417,	// (0x0000f34b) cams_zoom_pane_ParamLimits

0x1426,	// (0x0000f35a) image_vga_pane_ParamLimits

0x1440,	// (0x0000f374) main_camera_pane_g1_ParamLimits

0x1452,	// (0x0000f386) main_camera_pane_g2_ParamLimits

0x1462,	// (0x0000f396) main_camera_pane_g3_ParamLimits

0x1476,	// (0x0000f3aa) main_camera_pane_g4_ParamLimits

0x148a,	// (0x0000f3be) main_camera_pane_g5_ParamLimits

0x149e,	// (0x0000f3d2) main_camera_pane_g6_ParamLimits

0x14b2,	// (0x0000f3e6) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0001d15d) main_camera_pane_g_ParamLimits

0x14c6,	// (0x0000f3fa) main_camera_pane_t1_ParamLimits

0x14dc,	// (0x0000f410) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0001d16e) main_camera_pane_t_ParamLimits

0x9b02,	// (0x00017a36) bg_popup_preview_window_pane_cp01_ParamLimits

0x9b02,	// (0x00017a36) bg_popup_preview_window_pane_cp01

0xae19,	// (0x00018d4d) popup_phob_thumbnail2_window_g1_ParamLimits

0xae19,	// (0x00018d4d) popup_phob_thumbnail2_window_g1

0x98a7,	// (0x000177db) call2_cli_visual_pane

0x33bd,	// (0x000112f1) popup_call2_audio_conf_window_ParamLimits

0x33bd,	// (0x000112f1) popup_call2_audio_conf_window

0x33e5,	// (0x00011319) popup_call2_audio_first_window_ParamLimits

0x33e5,	// (0x00011319) popup_call2_audio_first_window

0x347b,	// (0x000113af) popup_call2_audio_in_window_ParamLimits

0x347b,	// (0x000113af) popup_call2_audio_in_window

0x34c7,	// (0x000113fb) popup_call2_audio_out_window_ParamLimits

0x34c7,	// (0x000113fb) popup_call2_audio_out_window

0x3539,	// (0x0001146d) popup_call2_audio_second_window_ParamLimits

0x3539,	// (0x0001146d) popup_call2_audio_second_window

0x359f,	// (0x000114d3) popup_call2_audio_wait_window_ParamLimits

0x359f,	// (0x000114d3) popup_call2_audio_wait_window

0x98a7,	// (0x000177db) bg_popup_call2_act_pane_cp03

0x9ae4,	// (0x00017a18) list_conf_pane_cp

0xae25,	// (0x00018d59) popup_call2_audio_conf_window_t1

0xae33,	// (0x00018d67) list_single_graphic_popup_conf2_pane_ParamLimits

0xae33,	// (0x00018d67) list_single_graphic_popup_conf2_pane

0xa748,	// (0x0001867c) list_highlight_pane_cp04

0xae46,	// (0x00018d7a) list_single_graphic_popup_conf2_pane_g1

0xa759,	// (0x0001868d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0001d465) list_single_graphic_popup_conf2_pane_g

0xae50,	// (0x00018d84) list_single_graphic_popup_conf2_pane_t1

0xae5e,	// (0x00018d92) bg_popup_call2_act_pane_cp01_ParamLimits

0xae5e,	// (0x00018d92) bg_popup_call2_act_pane_cp01

0xaee8,	// (0x00018e1c) call_type_pane_cp05_ParamLimits

0xaee8,	// (0x00018e1c) call_type_pane_cp05

0xaf3c,	// (0x00018e70) popup_call2_audio_second_window_g1_ParamLimits

0xaf3c,	// (0x00018e70) popup_call2_audio_second_window_g1

0xaf90,	// (0x00018ec4) popup_call2_audio_second_window_g2_ParamLimits

0xaf90,	// (0x00018ec4) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0001d46a) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0001d46a) popup_call2_audio_second_window_g

0xaff5,	// (0x00018f29) popup_call2_audio_second_window_t1_ParamLimits

0xaff5,	// (0x00018f29) popup_call2_audio_second_window_t1

0xb0b0,	// (0x00018fe4) popup_call2_audio_second_window_t2_ParamLimits

0xb0b0,	// (0x00018fe4) popup_call2_audio_second_window_t2

0xb103,	// (0x00019037) popup_call2_audio_second_window_t3_ParamLimits

0xb103,	// (0x00019037) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0001d471) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0001d471) popup_call2_audio_second_window_t

0x98a7,	// (0x000177db) bg_popup_call2_in_pane_cp02

0x98b1,	// (0x000177e5) call_type_pane_cp04

0x98b9,	// (0x000177ed) popup_call2_audio_wait_window_g1

0x98c1,	// (0x000177f5) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0001d04a) popup_call2_audio_wait_window_g

0x98c9,	// (0x000177fd) popup_call2_audio_wait_window_t3

0xb1f6,	// (0x0001912a) bg_popup_call2_act_pane_ParamLimits

0xb1f6,	// (0x0001912a) bg_popup_call2_act_pane

0xb2b6,	// (0x000191ea) call_type_pane_cp03_ParamLimits

0xb2b6,	// (0x000191ea) call_type_pane_cp03

0xb31a,	// (0x0001924e) popup_call2_audio_first_window_g1_ParamLimits

0xb31a,	// (0x0001924e) popup_call2_audio_first_window_g1

0xb38a,	// (0x000192be) popup_call2_audio_first_window_g2_ParamLimits

0xb38a,	// (0x000192be) popup_call2_audio_first_window_g2

0xa9f8,	// (0x0001892c) popup_call2_audio_first_window_g3_ParamLimits

0xa9f8,	// (0x0001892c) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0001d47a) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0001d47a) popup_call2_audio_first_window_g

0xb468,	// (0x0001939c) popup_call2_audio_first_window_t1_ParamLimits

0xb468,	// (0x0001939c) popup_call2_audio_first_window_t1

0xb56b,	// (0x0001949f) popup_call2_audio_first_window_t4_ParamLimits

0xb56b,	// (0x0001949f) popup_call2_audio_first_window_t4

0xb64e,	// (0x00019582) popup_call2_audio_first_window_t5_ParamLimits

0xb64e,	// (0x00019582) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0001d485) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0001d485) popup_call2_audio_first_window_t

0x9afa,	// (0x00017a2e) bg_popup_call2_act_pane_g1

0xbcbd,	// (0x00019bf1) popup_cale_lunar_info_window_t1

0xbccb,	// (0x00019bff) popup_cale_lunar_info_window_t2

0xbcd9,	// (0x00019c0d) popup_cale_lunar_info_window_t3

0x98a7,	// (0x000177db) bg_popup_call2_bubble_pane

0xb74f,	// (0x00019683) bg_popup_call2_in_pane_cp01_ParamLimits

0xb74f,	// (0x00019683) bg_popup_call2_in_pane_cp01

0x9583,	// (0x000174b7) call_type_pane_cp02

0xb797,	// (0x000196cb) popup_call2_audio_out_window_g1_ParamLimits

0xb797,	// (0x000196cb) popup_call2_audio_out_window_g1

0xb7c3,	// (0x000196f7) popup_call2_audio_out_window_g2_ParamLimits

0xb7c3,	// (0x000196f7) popup_call2_audio_out_window_g2

0xb7eb,	// (0x0001971f) popup_call2_audio_out_window_g3_ParamLimits

0xb7eb,	// (0x0001971f) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0001d48e) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0001d48e) popup_call2_audio_out_window_g

0xb826,	// (0x0001975a) popup_call2_audio_out_window_t1_ParamLimits

0xb826,	// (0x0001975a) popup_call2_audio_out_window_t1

0xb885,	// (0x000197b9) popup_call2_audio_out_window_t2_ParamLimits

0xb885,	// (0x000197b9) popup_call2_audio_out_window_t2

0xb8d9,	// (0x0001980d) popup_call2_audio_out_window_t3_ParamLimits

0xb8d9,	// (0x0001980d) popup_call2_audio_out_window_t3

0xb8ef,	// (0x00019823) popup_call2_audio_out_window_t4_ParamLimits

0xb8ef,	// (0x00019823) popup_call2_audio_out_window_t4

0xb905,	// (0x00019839) popup_call2_audio_out_window_t5_ParamLimits

0xb905,	// (0x00019839) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0001d497) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0001d497) popup_call2_audio_out_window_t

0xb969,	// (0x0001989d) bg_popup_call2_in_pane_ParamLimits

0xb969,	// (0x0001989d) bg_popup_call2_in_pane

0xb9c5,	// (0x000198f9) popup_call2_audio_in_window_g1_ParamLimits

0xb9c5,	// (0x000198f9) popup_call2_audio_in_window_g1

0xb9fd,	// (0x00019931) popup_call2_audio_in_window_g2_ParamLimits

0xb9fd,	// (0x00019931) popup_call2_audio_in_window_g2

0xba35,	// (0x00019969) popup_call2_audio_in_window_g3_ParamLimits

0xba35,	// (0x00019969) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0001d4a4) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0001d4a4) popup_call2_audio_in_window_g

0xba8d,	// (0x000199c1) popup_call2_audio_in_window_t1_ParamLimits

0xba8d,	// (0x000199c1) popup_call2_audio_in_window_t1

0xbb0d,	// (0x00019a41) popup_call2_audio_in_window_t2_ParamLimits

0xbb0d,	// (0x00019a41) popup_call2_audio_in_window_t2

0xbb8d,	// (0x00019ac1) popup_call2_audio_in_window_t3_ParamLimits

0xbb8d,	// (0x00019ac1) popup_call2_audio_in_window_t3

0xbba7,	// (0x00019adb) popup_call2_audio_in_window_t4_ParamLimits

0xbba7,	// (0x00019adb) popup_call2_audio_in_window_t4

0xbbb9,	// (0x00019aed) popup_call2_audio_in_window_t5_ParamLimits

0xbbb9,	// (0x00019aed) popup_call2_audio_in_window_t5

0xbbce,	// (0x00019b02) popup_call2_audio_in_window_t6_ParamLimits

0xbbce,	// (0x00019b02) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0001d4ad) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0001d4ad) popup_call2_audio_in_window_t

0x9afa,	// (0x00017a2e) bg_popup_call2_in_pane_g1

0xbce7,	// (0x00019c1b) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0001d515) popup_cale_lunar_info_window_t

0x9b02,	// (0x00017a36) bg_popup_call2_rect_pane_ParamLimits

0x9b02,	// (0x00017a36) bg_popup_call2_rect_pane

0x98a7,	// (0x000177db) call2_cli_visual_graphic_pane

0x98a7,	// (0x000177db) call2_cli_visual_text_pane

0xbed6,	// (0x00019e0a) smil_status_volume_pane_g3

0x0002,

0x9c70,	// (0x00017ba4) call2_cli_visual_graphic_pane_g1

0x9c70,	// (0x00017ba4) call2_cli_visual_graphic_pane_g2

0x9c70,	// (0x00017ba4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0001d4ba) call2_cli_visual_graphic_pane_g

0xbbe3,	// (0x00019b17) bg_popup_call2_rect_pane_g1

0x9d18,	// (0x00017c4c) bg_popup_call2_rect_pane_g2

0xbbeb,	// (0x00019b1f) bg_popup_call2_rect_pane_g3

0xbbf3,	// (0x00019b27) bg_popup_call2_rect_pane_g4

0xbbfb,	// (0x00019b2f) bg_popup_call2_rect_pane_g5

0xbc03,	// (0x00019b37) bg_popup_call2_rect_pane_g6

0xbc0b,	// (0x00019b3f) bg_popup_call2_rect_pane_g7

0xbc13,	// (0x00019b47) bg_popup_call2_rect_pane_g8

0xbc1b,	// (0x00019b4f) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0001d4c1) bg_popup_call2_rect_pane_g

0xbc23,	// (0x00019b57) bg_popup_call2_bubble_pane_g1

0xbc2b,	// (0x00019b5f) bg_popup_call2_bubble_pane_g2

0xbc33,	// (0x00019b67) bg_popup_call2_bubble_pane_g3

0xbc3b,	// (0x00019b6f) bg_popup_call2_bubble_pane_g4

0xbc43,	// (0x00019b77) bg_popup_call2_bubble_pane_g5

0xbc4b,	// (0x00019b7f) bg_popup_call2_bubble_pane_g6

0xbc53,	// (0x00019b87) bg_popup_call2_bubble_pane_g7

0xbc5b,	// (0x00019b8f) bg_popup_call2_bubble_pane_g8

0xbc63,	// (0x00019b97) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0001d4d4) bg_popup_call2_bubble_pane_g

0x1020,	// (0x0000ef54) aid_cale_week_size_cell_pane

0x14f6,	// (0x0000f42a) aid_cams_cif_uncrop_pane_ParamLimits

0x14f6,	// (0x0000f42a) aid_cams_cif_uncrop_pane

0x16af,	// (0x0000f5e3) aid_cams_size_cell_ParamLimits

0x16af,	// (0x0000f5e3) aid_cams_size_cell

0x16c3,	// (0x0000f5f7) grid_cams_pane_ParamLimits

0x16dd,	// (0x0000f611) linegrid_cams_pane_ParamLimits

0x180d,	// (0x0000f741) call_video_pane_t1

0x1827,	// (0x0000f75b) call_video_pane_t2

0x0001,

0xf28d,	// (0x0001d1c1) call_video_pane_t

0x1c72,	// (0x0000fba6) aid_cale_month_size_cell_pane_ParamLimits

0x1c72,	// (0x0000fba6) aid_cale_month_size_cell_pane

0xf62a,	// (0x0001d55e) smil_status_volume_pane_g

0xbee3,	// (0x00019e17) volume_smil_pane_ParamLimits

0x93f2,	// (0x00017326) aid_popup2_width_pane

0x0f77,	// (0x0000eeab) cell_qdial_pane_g4_ParamLimits

0x0f77,	// (0x0000eeab) cell_qdial_pane_g4

0x285c,	// (0x00010790) aid_blid_cardinal_pane_ParamLimits

0x286c,	// (0x000107a0) aid_blid_destination_pane_ParamLimits

0x286c,	// (0x000107a0) aid_blid_destination_pane

0x9b02,	// (0x00017a36) bg_popup_call_poc_act_pane_ParamLimits

0x9b02,	// (0x00017a36) bg_popup_call_poc_act_pane

0x9b02,	// (0x00017a36) bg_popup_call_poc_inact_pane_ParamLimits

0x9b02,	// (0x00017a36) bg_popup_call_poc_inact_pane

0xbc6b,	// (0x00019b9f) bg_popup_call_poc_act_pane_g1

0xbc73,	// (0x00019ba7) bg_popup_call_poc_act_pane_g2

0xbc7b,	// (0x00019baf) bg_popup_call_poc_act_pane_g3

0xbc3b,	// (0x00019b6f) bg_popup_call_poc_act_pane_g4

0xbc43,	// (0x00019b77) bg_popup_call_poc_act_pane_g5

0xbc83,	// (0x00019bb7) bg_popup_call_poc_act_pane_g6

0xbc53,	// (0x00019b87) bg_popup_call_poc_act_pane_g7

0xbc8b,	// (0x00019bbf) bg_popup_call_poc_act_pane_g8

0x98a7,	// (0x000177db) main_usb_pane

0xbde8,	// (0x00019d1c) popup_cale_lunar_info_window

0x1af2,	// (0x0000fa26) im_reading_pane_t1_ParamLimits

0xa049,	// (0x00017f7d) list_im_pane_ParamLimits

0xa05a,	// (0x00017f8e) scroll_pane_cp07_ParamLimits

0x98a7,	// (0x000177db) grid_highlight_pane_cp012

0x9b02,	// (0x00017a36) mup_scale_pane_ParamLimits

0xab66,	// (0x00018a9a) main_usb_pane_g1_ParamLimits

0xab66,	// (0x00018a9a) main_usb_pane_g1

0x3600,	// (0x00011534) main_usb_pane_g2_ParamLimits

0x3600,	// (0x00011534) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0001d4fe) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0001d4fe) main_usb_pane_g

0x3616,	// (0x0001154a) main_usb_pane_t1_ParamLimits

0x3616,	// (0x0001154a) main_usb_pane_t1

0x3628,	// (0x0001155c) main_usb_pane_t2_ParamLimits

0x3628,	// (0x0001155c) main_usb_pane_t2

0x363a,	// (0x0001156e) main_usb_pane_t3_ParamLimits

0x363a,	// (0x0001156e) main_usb_pane_t3

0x364c,	// (0x00011580) main_usb_pane_t4_ParamLimits

0x364c,	// (0x00011580) main_usb_pane_t4

0x3661,	// (0x00011595) main_usb_pane_t5_ParamLimits

0x3661,	// (0x00011595) main_usb_pane_t5

0x3676,	// (0x000115aa) main_usb_pane_t6_ParamLimits

0x3676,	// (0x000115aa) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0001d503) main_usb_pane_t_ParamLimits

0x27fb,	// (0x0001072f) aid_text_placing

0x2806,	// (0x0001073a) main_location2_pane_t1_ParamLimits

0x281c,	// (0x00010750) main_location2_pane_t2_ParamLimits

0x2832,	// (0x00010766) main_location2_pane_t3_ParamLimits

0x2848,	// (0x0001077c) main_location2_pane_t4_ParamLimits

0x2848,	// (0x0001077c) main_location2_pane_t4

0xf3ee,	// (0x0001d322) main_location2_pane_t_ParamLimits

0x9b3e,	// (0x00017a72) find_pinb_pane_g2_ParamLimits

0x9b3e,	// (0x00017a72) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0001d070) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0001d070) find_pinb_pane_g

0x9b4a,	// (0x00017a7e) find_pinb_pane_t1_ParamLimits

0x9b5c,	// (0x00017a90) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0001d075) find_pinb_pane_t_ParamLimits

0x98a7,	// (0x000177db) main_call3_pane

0x1fe6,	// (0x0000ff1a) cale_month_day_heading_pane_t1_ParamLimits

0x2044,	// (0x0000ff78) cale_month_day_heading_pane_t2_ParamLimits

0x20a9,	// (0x0000ffdd) cale_month_day_heading_pane_t3_ParamLimits

0x210e,	// (0x00010042) cale_month_day_heading_pane_t4_ParamLimits

0x2173,	// (0x000100a7) cale_month_day_heading_pane_t5_ParamLimits

0x21d8,	// (0x0001010c) cale_month_day_heading_pane_t6_ParamLimits

0x223d,	// (0x00010171) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0001d1f9) cale_month_day_heading_pane_t_ParamLimits

0xa2d0,	// (0x00018204) smil_status_volume_pane

0x30b8,	// (0x00010fec) postcard_address_pane_ParamLimits

0x30b8,	// (0x00010fec) postcard_address_pane

0x30ce,	// (0x00011002) postcard_message_pane_ParamLimits

0x30ce,	// (0x00011002) postcard_message_pane

0x35d9,	// (0x0001150d) call2_cli_visual_pane_t1_ParamLimits

0x35d9,	// (0x0001150d) call2_cli_visual_pane_t1

0x3e45,	// (0x00011d79) postcard_message_pane_t1_ParamLimits

0x3e45,	// (0x00011d79) postcard_message_pane_t1

0xbef8,	// (0x00019e2c) postcard_address_pane_t1_ParamLimits

0xbef8,	// (0x00019e2c) postcard_address_pane_t1

0x3e31,	// (0x00011d65) popup_call3_audio_in_window_ParamLimits

0x3e31,	// (0x00011d65) popup_call3_audio_in_window

0x3cb6,	// (0x00011bea) bg_popup_call3_in_pane_ParamLimits

0x3cb6,	// (0x00011bea) bg_popup_call3_in_pane

0x3d32,	// (0x00011c66) popup_call3_audio_in_window_g1_ParamLimits

0x3d32,	// (0x00011c66) popup_call3_audio_in_window_g1

0x3d52,	// (0x00011c86) popup_call3_audio_in_window_g2_ParamLimits

0x3d52,	// (0x00011c86) popup_call3_audio_in_window_g2

0x3d72,	// (0x00011ca6) popup_call3_audio_in_window_g3_ParamLimits

0x3d72,	// (0x00011ca6) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0001d565) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0001d565) popup_call3_audio_in_window_g

0x3da3,	// (0x00011cd7) popup_call3_audio_in_window_t1_ParamLimits

0x3da3,	// (0x00011cd7) popup_call3_audio_in_window_t1

0x3de1,	// (0x00011d15) popup_call3_audio_in_window_t2_ParamLimits

0x3de1,	// (0x00011d15) popup_call3_audio_in_window_t2

0x3e1f,	// (0x00011d53) popup_call3_audio_in_window_t3_ParamLimits

0x3e1f,	// (0x00011d53) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0001d56e) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0001d56e) popup_call3_audio_in_window_t

0xa927,	// (0x0001885b) bg_popup_call3_rect_pane

0xbbe3,	// (0x00019b17) bg_popup_call3_rect_pane_g1

0x9d18,	// (0x00017c4c) bg_popup_call3_rect_pane_g2

0xbbeb,	// (0x00019b1f) bg_popup_call3_rect_pane_g3

0xbbf3,	// (0x00019b27) bg_popup_call3_rect_pane_g4

0xbbfb,	// (0x00019b2f) bg_popup_call3_rect_pane_g5

0xbc03,	// (0x00019b37) bg_popup_call3_rect_pane_g6

0xbc0b,	// (0x00019b3f) bg_popup_call3_rect_pane_g7

0x2c58,	// (0x00010b8c) mup_visualizer_osc_pane

0xaa06,	// (0x0001893a) mup_visualizer_spec_pane

0x3ce6,	// (0x00011c1a) call3_video_qcif_pane_ParamLimits

0x3ce6,	// (0x00011c1a) call3_video_qcif_pane

0x3cf9,	// (0x00011c2d) call3_video_qcif_uncrop_pane_ParamLimits

0x3cf9,	// (0x00011c2d) call3_video_qcif_uncrop_pane

0x3d09,	// (0x00011c3d) call3_video_subqcif_pane_ParamLimits

0x3d09,	// (0x00011c3d) call3_video_subqcif_pane

0x3d1f,	// (0x00011c53) call3_video_subqcif_uncrop_pane_ParamLimits

0x3d1f,	// (0x00011c53) call3_video_subqcif_uncrop_pane

0x3d92,	// (0x00011cc6) popup_call3_audio_in_window_g4_ParamLimits

0x3d92,	// (0x00011cc6) popup_call3_audio_in_window_g4

0x3ca5,	// (0x00011bd9) mup_spec_half_pane

0x3cae,	// (0x00011be2) mup_spec_half_pane_cp

0xbe96,	// (0x00019dca) mup_osc_middle_pane

0xbe9f,	// (0x00019dd3) mup_visualizer_osc_pane_g1

0x3c85,	// (0x00011bb9) mup_spec_bar_pane_ParamLimits

0x3c85,	// (0x00011bb9) mup_spec_bar_pane

0xbe83,	// (0x00019db7) mup_spec_bar_pane_g1

0xbe8d,	// (0x00019dc1) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0001d559) mup_spec_bar_pane_g

0x1020,	// (0x0000ef54) aid_cale_week_size_cell_pane_ParamLimits

0x1033,	// (0x0000ef67) bg_cale_heading_pane_ParamLimits

0x9d94,	// (0x00017cc8) bg_cale_pane_cp01_ParamLimits

0x104f,	// (0x0000ef83) cale_week_corner_pane_ParamLimits

0x1065,	// (0x0000ef99) cale_week_day_heading_pane_ParamLimits

0x1081,	// (0x0000efb5) cale_week_scroll_pane_g1_ParamLimits

0x109a,	// (0x0000efce) cale_week_scroll_pane_g2_ParamLimits

0x10ab,	// (0x0000efdf) cale_week_scroll_pane_g3_ParamLimits

0x10bc,	// (0x0000eff0) cale_week_scroll_pane_g4_ParamLimits

0x10cd,	// (0x0000f001) cale_week_scroll_pane_g5_ParamLimits

0x10de,	// (0x0000f012) cale_week_scroll_pane_g6_ParamLimits

0x10ef,	// (0x0000f023) cale_week_scroll_pane_g7_ParamLimits

0x1100,	// (0x0000f034) cale_week_scroll_pane_g8_ParamLimits

0x1111,	// (0x0000f045) cale_week_scroll_pane_g9_ParamLimits

0x1122,	// (0x0000f056) cale_week_scroll_pane_g10_ParamLimits

0x1133,	// (0x0000f067) cale_week_scroll_pane_g11_ParamLimits

0x1144,	// (0x0000f078) cale_week_scroll_pane_g12_ParamLimits

0x1155,	// (0x0000f089) cale_week_scroll_pane_g13_ParamLimits

0x116e,	// (0x0000f0a2) cale_week_scroll_pane_g14_ParamLimits

0x1187,	// (0x0000f0bb) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0001d101) cale_week_scroll_pane_g_ParamLimits

0x11a0,	// (0x0000f0d4) cale_week_time_pane_ParamLimits

0x11b1,	// (0x0000f0e5) grid_cale_week_pane_ParamLimits

0x9dad,	// (0x00017ce1) listscroll_cale_week_pane_t1

0x11cc,	// (0x0000f100) scroll_pane_cp08_ParamLimits

0x1cc3,	// (0x0000fbf7) cale_month_corner_pane_ParamLimits

0xa270,	// (0x000181a4) cale_month_pane_t1

0x1fa7,	// (0x0000fedb) cale_month_week_pane_ParamLimits

0x261f,	// (0x00010553) popup_call_status_window_g1_ParamLimits

0x2633,	// (0x00010567) popup_call_status_window_g2_ParamLimits

0x2647,	// (0x0001057b) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0001d2a9) popup_call_status_window_g_ParamLimits

0xa65a,	// (0x0001858e) aid_call2_pane

0x2f18,	// (0x00010e4c) msg_header_pane_g1

0x30b8,	// (0x00010fec) postcard_address2_pane_ParamLimits

0x30b8,	// (0x00010fec) postcard_address2_pane

0x30ce,	// (0x00011002) postcard_message2_pane_ParamLimits

0x30ce,	// (0x00011002) postcard_message2_pane

0x3c42,	// (0x00011b76) message2_row_pane_ParamLimits

0x3c42,	// (0x00011b76) message2_row_pane

0xbe3e,	// (0x00019d72) address2_row_pane_ParamLimits

0xbe3e,	// (0x00019d72) address2_row_pane

0xbe51,	// (0x00019d85) postcard_message2_row_pane_g1

0xbe59,	// (0x00019d8d) postcard_message2_row_pane_t1

0xbe51,	// (0x00019d85) address2_row_pane_g1

0xbe59,	// (0x00019d8d) address2_row_pane_t1

0x13da,	// (0x0000f30e) aid_size_cell_vorec

0x98a7,	// (0x000177db) main_rss_pane

0x3c65,	// (0x00011b99) rss_list_single_pane_ParamLimits

0x3c65,	// (0x00011b99) rss_list_single_pane

0xbe67,	// (0x00019d9b) rss_list_single_pane_t1

0xbe75,	// (0x00019da9) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0001d554) rss_list_single_pane_t

0x98a7,	// (0x000177db) main_camera2_pane

0x98a7,	// (0x000177db) main_video2_pane

0x3eb4,	// (0x00011de8) cams_zoom_pane_cp2_ParamLimits

0x3eb4,	// (0x00011de8) cams_zoom_pane_cp2

0x3ecb,	// (0x00011dff) image2_vga_pane_ParamLimits

0x3ecb,	// (0x00011dff) image2_vga_pane

0x3f13,	// (0x00011e47) main_camera2_pane_g1_ParamLimits

0x3f13,	// (0x00011e47) main_camera2_pane_g1

0x3f33,	// (0x00011e67) main_camera2_pane_g2_ParamLimits

0x3f33,	// (0x00011e67) main_camera2_pane_g2

0x3f4a,	// (0x00011e7e) main_camera2_pane_g3_ParamLimits

0x3f4a,	// (0x00011e7e) main_camera2_pane_g3

0x3f61,	// (0x00011e95) main_camera2_pane_g4_ParamLimits

0x3f61,	// (0x00011e95) main_camera2_pane_g4

0x3f78,	// (0x00011eac) main_camera2_pane_g5_ParamLimits

0x3f78,	// (0x00011eac) main_camera2_pane_g5

0x3f8f,	// (0x00011ec3) main_camera2_pane_g6_ParamLimits

0x3f8f,	// (0x00011ec3) main_camera2_pane_g6

0x3fa6,	// (0x00011eda) main_camera2_pane_g7_ParamLimits

0x3fa6,	// (0x00011eda) main_camera2_pane_g7

0x3fbd,	// (0x00011ef1) main_camera2_pane_g8_ParamLimits

0x3fbd,	// (0x00011ef1) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0001d575) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0001d575) main_camera2_pane_g

0x3feb,	// (0x00011f1f) main_camera2_pane_t1_ParamLimits

0x3feb,	// (0x00011f1f) main_camera2_pane_t1

0x4020,	// (0x00011f54) main_camera2_pane_t2_ParamLimits

0x4020,	// (0x00011f54) main_camera2_pane_t2

0x403d,	// (0x00011f71) main_camera2_pane_t3_ParamLimits

0x403d,	// (0x00011f71) main_camera2_pane_t3

0x409b,	// (0x00011fcf) main_camera2_pane_t4_ParamLimits

0x409b,	// (0x00011fcf) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0001d588) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0001d588) main_camera2_pane_t

0x4124,	// (0x00012058) cams_zoom_pane_cp4_ParamLimits

0x4124,	// (0x00012058) cams_zoom_pane_cp4

0x413a,	// (0x0001206e) image2_cif_pane_ParamLimits

0x413a,	// (0x0001206e) image2_cif_pane

0x4165,	// (0x00012099) image2_subqcif_pane_ParamLimits

0x4165,	// (0x00012099) image2_subqcif_pane

0x4180,	// (0x000120b4) main_video2_pane_g1_ParamLimits

0x4180,	// (0x000120b4) main_video2_pane_g1

0x419a,	// (0x000120ce) main_video2_pane_g2_ParamLimits

0x419a,	// (0x000120ce) main_video2_pane_g2

0x41b0,	// (0x000120e4) main_video2_pane_g3_ParamLimits

0x41b0,	// (0x000120e4) main_video2_pane_g3

0x41c6,	// (0x000120fa) main_video2_pane_g4_ParamLimits

0x41c6,	// (0x000120fa) main_video2_pane_g4

0x41dc,	// (0x00012110) main_video2_pane_g5_ParamLimits

0x41dc,	// (0x00012110) main_video2_pane_g5

0x41f2,	// (0x00012126) main_video2_pane_g6_ParamLimits

0x41f2,	// (0x00012126) main_video2_pane_g6

0x0005,

0xf663,	// (0x0001d597) main_video2_pane_g_ParamLimits

0xf663,	// (0x0001d597) main_video2_pane_g

0x420c,	// (0x00012140) main_video2_pane_t1_ParamLimits

0x420c,	// (0x00012140) main_video2_pane_t1

0x4230,	// (0x00012164) main_video2_pane_t2_ParamLimits

0x4230,	// (0x00012164) main_video2_pane_t2

0x4280,	// (0x000121b4) main_video2_pane_t3_ParamLimits

0x4280,	// (0x000121b4) main_video2_pane_t3

0x0002,

0xf670,	// (0x0001d5a4) main_video2_pane_t_ParamLimits

0xf670,	// (0x0001d5a4) main_video2_pane_t

0x3734,	// (0x00011668) call_muted_g2

0x0001,

0xf612,	// (0x0001d546) call_muted_g

0x98a7,	// (0x000177db) main_mup2_pane

0x42c8,	// (0x000121fc) main_mup2_pane_g1_ParamLimits

0x42c8,	// (0x000121fc) main_mup2_pane_g1

0x42d4,	// (0x00012208) main_mup2_pane_g2_ParamLimits

0x42d4,	// (0x00012208) main_mup2_pane_g2

0xc019,	// (0x00019f4d) main_mup_pane_g13_cp1

0xc021,	// (0x00019f55) mup_volume_pane_cp1

0x42f2,	// (0x00012226) main_mup2_pane_g4_ParamLimits

0x42f2,	// (0x00012226) main_mup2_pane_g4

0x4302,	// (0x00012236) main_mup2_pane_g5_ParamLimits

0x4302,	// (0x00012236) main_mup2_pane_g5

0x4312,	// (0x00012246) main_mup2_pane_g6_ParamLimits

0x4312,	// (0x00012246) main_mup2_pane_g6

0x4322,	// (0x00012256) main_mup2_pane_g7_ParamLimits

0x4322,	// (0x00012256) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0001d5ab) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0001d5ab) main_mup2_pane_g

0x433a,	// (0x0001226e) main_mup2_pane_t1_ParamLimits

0x433a,	// (0x0001226e) main_mup2_pane_t1

0x4350,	// (0x00012284) main_mup2_pane_t2_ParamLimits

0x4350,	// (0x00012284) main_mup2_pane_t2

0x4366,	// (0x0001229a) main_mup2_pane_t3_ParamLimits

0x4366,	// (0x0001229a) main_mup2_pane_t3

0x437c,	// (0x000122b0) main_mup2_pane_t4_ParamLimits

0x437c,	// (0x000122b0) main_mup2_pane_t4

0x4394,	// (0x000122c8) main_mup2_pane_t5_ParamLimits

0x4394,	// (0x000122c8) main_mup2_pane_t5

0x43ac,	// (0x000122e0) main_mup2_pane_t6_ParamLimits

0x43ac,	// (0x000122e0) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0001d5ba) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0001d5ba) main_mup2_pane_t

0x43dc,	// (0x00012310) mup2_visualizer_pane_ParamLimits

0x43dc,	// (0x00012310) mup2_visualizer_pane

0x440a,	// (0x0001233e) mup_progress_pane_cp_ParamLimits

0x440a,	// (0x0001233e) mup_progress_pane_cp

0xbffb,	// (0x00019f2f) mup_volume_pane_cp_ParamLimits

0xbffb,	// (0x00019f2f) mup_volume_pane_cp

0x4420,	// (0x00012354) mup2_visualizer_pane_g1_ParamLimits

0x4420,	// (0x00012354) mup2_visualizer_pane_g1

0xbf3a,	// (0x00019e6e) mup2_visualizer_pane_g2_ParamLimits

0xbf3a,	// (0x00019e6e) mup2_visualizer_pane_g2

0x4435,	// (0x00012369) mup2_visualizer_pane_g3_ParamLimits

0x4435,	// (0x00012369) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x0001d5c7) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x0001d5c7) mup2_visualizer_pane_g

0xacaf,	// (0x00018be3) aid_size_cell_fmradio

0x38e4,	// (0x00011818) aid_height_parent_landcape

0xa0d8,	// (0x0001800c) wml_content_pane_cp

0xa0e0,	// (0x00018014) wml_tabs_pane

0xa0e9,	// (0x0001801d) popup_wml_miniature_window

0xa0f1,	// (0x00018025) scroll_pane_cp021

0xa105,	// (0x00018039) wml_content_pane_comp8

0x98a7,	// (0x000177db) bg_popup_sub_pane_cp05

0xbf58,	// (0x00019e8c) popup_wml_miniature_window_g1

0xbf60,	// (0x00019e94) wml_miniature_view_pane

0x4441,	// (0x00012375) aid_size_wml_view

0x4449,	// (0x0001237d) wml_miniature_view_pane_g1

0x4452,	// (0x00012386) wml_miniature_view_pane_g2

0x445b,	// (0x0001238f) wml_miniature_view_pane_g3

0x4463,	// (0x00012397) wml_miniature_view_pane_g4

0x446b,	// (0x0001239f) wml_miniature_view_pane_g5

0x4473,	// (0x000123a7) wml_miniature_view_pane_g6

0x447b,	// (0x000123af) wml_miniature_view_pane_g7

0x4483,	// (0x000123b7) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0001d5ce) wml_miniature_view_pane_g

0xbf68,	// (0x00019e9c) background_graphic_ParamLimits

0xbf68,	// (0x00019e9c) background_graphic

0xbf74,	// (0x00019ea8) wml_tabs_2_pane

0xbf7d,	// (0x00019eb1) wml_tabs_3_pane_ParamLimits

0xbf7d,	// (0x00019eb1) wml_tabs_3_pane

0xbf8f,	// (0x00019ec3) wml_tabs_4_pane_ParamLimits

0xbf8f,	// (0x00019ec3) wml_tabs_4_pane

0xbfa5,	// (0x00019ed9) wml_tabs_5_pane_ParamLimits

0xbfa5,	// (0x00019ed9) wml_tabs_5_pane

0xbfbf,	// (0x00019ef3) wml_tabs_pane_g2_ParamLimits

0xbfbf,	// (0x00019ef3) wml_tabs_pane_g2

0xbfd3,	// (0x00019f07) wml_tabs_pane_g3_ParamLimits

0xbfd3,	// (0x00019f07) wml_tabs_pane_g3

0x448b,	// (0x000123bf) wml_tabs_2_active_pane_ParamLimits

0x448b,	// (0x000123bf) wml_tabs_2_active_pane

0x449f,	// (0x000123d3) wml_tabs_2_passive_pane_ParamLimits

0x449f,	// (0x000123d3) wml_tabs_2_passive_pane

0x44b3,	// (0x000123e7) wml_tabs_3_active_pane_cp_ParamLimits

0x44b3,	// (0x000123e7) wml_tabs_3_active_pane_cp

0x44c8,	// (0x000123fc) wml_tabs_3_passive_pane_ParamLimits

0x44c8,	// (0x000123fc) wml_tabs_3_passive_pane

0x44db,	// (0x0001240f) wml_tabs_3_passive_pane_cp_ParamLimits

0x44db,	// (0x0001240f) wml_tabs_3_passive_pane_cp

0x44f2,	// (0x00012426) tabs_4_active_pane

0x44fa,	// (0x0001242e) tabs_4_passive_pane

0x4504,	// (0x00012438) tabs_4_passive_pane_cp

0x450c,	// (0x00012440) tabs_4_passive_pane_cp2

0x35f8,	// (0x0001152c) aid_height_text

0x2c2a,	// (0x00010b5e) mup_volume_cont_pane_ParamLimits

0x2c2a,	// (0x00010b5e) mup_volume_cont_pane

0x0c0a,	// (0x0000eb3e) aid_size_cell_pinb

0x0c14,	// (0x0000eb48) aid_size_list_pinb

0x43f6,	// (0x0001232a) mup2_volume_cont_pane_ParamLimits

0x43f6,	// (0x0001232a) mup2_volume_cont_pane

0xbfe7,	// (0x00019f1b) mup2_volume_cont_pane_g1_ParamLimits

0xbfe7,	// (0x00019f1b) mup2_volume_cont_pane_g1

0x091b,	// (0x0000e84f) aid_size_cell_touch_ParamLimits

0x091b,	// (0x0000e84f) aid_size_cell_touch

0x0b2e,	// (0x0000ea62) touch_pane_ParamLimits

0x0b2e,	// (0x0000ea62) touch_pane

0x93e0,	// (0x00017314) main_rss2_pane

0xc029,	// (0x00019f5d) listscroll_rss2_pane

0xc032,	// (0x00019f66) rss2_navigation_pane

0xc03a,	// (0x00019f6e) list_rss2_pane

0xa7ed,	// (0x00018721) scroll_pane_cp22

0xc042,	// (0x00019f76) rss2_navigation_pane_g1

0xc04b,	// (0x00019f7f) rss2_navigation_pane_g2

0xc053,	// (0x00019f87) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0001d5df) rss2_navigation_pane_g

0xc05b,	// (0x00019f8f) rss2_navigation_pane_t1

0x4516,	// (0x0001244a) rss2_list_single_pane_ParamLimits

0x4516,	// (0x0001244a) rss2_list_single_pane

0xc069,	// (0x00019f9d) rss2_list_single_pane_t2

0xc077,	// (0x00019fab) rss2_list_single_pane_t3_ParamLimits

0xc077,	// (0x00019fab) rss2_list_single_pane_t3

0xc094,	// (0x00019fc8) rss2_list_single_pane_t4

0x2409,	// (0x0001033d) smil_status_pane_g1

0x9451,	// (0x00017385) main_image2_pane_ParamLimits

0x9451,	// (0x00017385) main_image2_pane

0x3fd4,	// (0x00011f08) main_camera2_pane_g9_ParamLimits

0x3fd4,	// (0x00011f08) main_camera2_pane_g9

0x40f0,	// (0x00012024) main_camera2_pane_t5_ParamLimits

0x40f0,	// (0x00012024) main_camera2_pane_t5

0xbf0f,	// (0x00019e43) main_camera2_pane_t6_ParamLimits

0xbf0f,	// (0x00019e43) main_camera2_pane_t6

0x4530,	// (0x00012464) main_image2_pane_g1_ParamLimits

0x4530,	// (0x00012464) main_image2_pane_g1

0x330f,	// (0x00011243) smil2_video_pane_ParamLimits

0x330f,	// (0x00011243) smil2_video_pane

0x93fe,	// (0x00017332) aid_zoom_text_primary_cp

0x9447,	// (0x0001737b) popup_preview_fixed_window

0xa041,	// (0x00017f75) im_reading_pane_g1

0x3ea6,	// (0x00011dda) cams2_bc_adjust_pane_cp_ParamLimits

0x3ea6,	// (0x00011dda) cams2_bc_adjust_pane_cp

0x4116,	// (0x0001204a) cams2_bc_adjust_pane_ParamLimits

0x4116,	// (0x0001204a) cams2_bc_adjust_pane

0xc0a2,	// (0x00019fd6) cams2_bc_adjust_pane_g1

0xc0aa,	// (0x00019fde) cams2_slider_pane

0xc0b3,	// (0x00019fe7) cams2_slider_pane_g1

0xc0bc,	// (0x00019ff0) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0001d5e6) cams2_slider_pane_g

0x0d04,	// (0x0000ec38) calc_display_pane_ParamLimits

0x0d2a,	// (0x0000ec5e) calc_paper_pane_ParamLimits

0x0d4d,	// (0x0000ec81) grid_calc_pane_ParamLimits

0xa6bc,	// (0x000185f0) popup_clock_digital_window_t1_ParamLimits

0xac4c,	// (0x00018b80) main_image_pane_t1

0x0ce6,	// (0x0000ec1a) aid_size_cell_calc_ParamLimits

0x0ce6,	// (0x0000ec1a) aid_size_cell_calc

0x392a,	// (0x0001185e) popup_blid_sat_info2_window_ParamLimits

0x392a,	// (0x0001185e) popup_blid_sat_info2_window

0xc0de,	// (0x0001a012) aid_size_cell_blid

0xc0e6,	// (0x0001a01a) bg_popup_window_pane_cp07

0xc109,	// (0x0001a03d) grid_popup_blid_pane

0xc113,	// (0x0001a047) heading_pane_cp05_ParamLimits

0xc113,	// (0x0001a047) heading_pane_cp05

0xc1dd,	// (0x0001a111) cell_popup_blid_pane_ParamLimits

0xc1dd,	// (0x0001a111) cell_popup_blid_pane

0xc207,	// (0x0001a13b) cell_popup_blid_pane_g1

0xc20f,	// (0x0001a143) cell_popup_blid_pane_t1

0x43c6,	// (0x000122fa) mup2_indicator_pane_ParamLimits

0x43c6,	// (0x000122fa) mup2_indicator_pane

0xa927,	// (0x0001885b) mup2_visualizer_osc_pane

0xbf46,	// (0x00019e7a) mup2_visualizer_spec_pane_ParamLimits

0xbf46,	// (0x00019e7a) mup2_visualizer_spec_pane

0x4546,	// (0x0001247a) mup2_spec_half_pane

0x454f,	// (0x00012483) mup2_spec_half_pane_cp

0x4557,	// (0x0001248b) mup2_spec_bar_pane_ParamLimits

0x4557,	// (0x0001248b) mup2_spec_bar_pane

0xbe83,	// (0x00019db7) mup2_spec_bar_pane_g1

0xbe8d,	// (0x00019dc1) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0001d559) mup2_spec_bar_pane_g

0x4577,	// (0x000124ab) mup2_osc_middle_pane

0xbe9f,	// (0x00019dd3) mup2_visualizer_osc_pane_g1

0x947f,	// (0x000173b3) popup_number_entry_window_t1_ParamLimits

0x9492,	// (0x000173c6) popup_number_entry_window_t2_ParamLimits

0x94a4,	// (0x000173d8) popup_number_entry_window_t3_ParamLimits

0x94b6,	// (0x000173ea) popup_number_entry_window_t5_ParamLimits

0x94b6,	// (0x000173ea) popup_number_entry_window_t5

0xf0e7,	// (0x0001d01b) popup_number_entry_window_t_ParamLimits

0x94eb,	// (0x0001741f) text_title_cp2_ParamLimits

0xab26,	// (0x00018a5a) aid_hotspot_pointer_text2_pane

0xab4c,	// (0x00018a80) main_viewer_pane_g9_ParamLimits

0xab4c,	// (0x00018a80) main_viewer_pane_g9

0xa270,	// (0x000181a4) cale_month_pane_t1_ParamLimits

0xa305,	// (0x00018239) bg_cale_pane_ParamLimits

0xa31d,	// (0x00018251) list_cale_pane_ParamLimits

0x9dad,	// (0x00017ce1) listscroll_cale_day_pane_t1

0xa32e,	// (0x00018262) scroll_pane_cp09_ParamLimits

0x2c60,	// (0x00010b94) main_mup_eq_pane_t1_ParamLimits

0x2c60,	// (0x00010b94) main_mup_eq_pane_t1

0x2c7c,	// (0x00010bb0) main_mup_eq_pane_t2_ParamLimits

0x2c7c,	// (0x00010bb0) main_mup_eq_pane_t2

0x2c98,	// (0x00010bcc) main_mup_eq_pane_t3_ParamLimits

0x2c98,	// (0x00010bcc) main_mup_eq_pane_t3

0x2cb6,	// (0x00010bea) main_mup_eq_pane_t4_ParamLimits

0x2cb6,	// (0x00010bea) main_mup_eq_pane_t4

0x2cd4,	// (0x00010c08) main_mup_eq_pane_t5_ParamLimits

0x2cd4,	// (0x00010c08) main_mup_eq_pane_t5

0x2cf2,	// (0x00010c26) main_mup_eq_pane_t6_ParamLimits

0x2cf2,	// (0x00010c26) main_mup_eq_pane_t6

0x2d08,	// (0x00010c3c) main_mup_eq_pane_t7_ParamLimits

0x2d08,	// (0x00010c3c) main_mup_eq_pane_t7

0x2d1e,	// (0x00010c52) main_mup_eq_pane_t8_ParamLimits

0x2d1e,	// (0x00010c52) main_mup_eq_pane_t8

0x2d34,	// (0x00010c68) main_mup_eq_pane_t9_ParamLimits

0x2d34,	// (0x00010c68) main_mup_eq_pane_t9

0x2d50,	// (0x00010c84) main_mup_eq_pane_t10_ParamLimits

0x2d50,	// (0x00010c84) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0001d3a8) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0001d3a8) main_mup_eq_pane_t

0x2e25,	// (0x00010d59) mup_equalizer_pane_cp5_ParamLimits

0x2e3d,	// (0x00010d71) mup_equalizer_pane_cp6_ParamLimits

0x2e55,	// (0x00010d89) mup_equalizer_pane_cp7_ParamLimits

0x93e0,	// (0x00017314) main_gallery_pane

0xbea8,	// (0x00019ddc) smil2_volume_pane

0xbeb0,	// (0x00019de4) smil_status_volume_pane_g1_ParamLimits

0xbec3,	// (0x00019df7) smil_status_volume_pane_g2_ParamLimits

0xbed6,	// (0x00019e0a) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0001d55e) smil_status_volume_pane_g_ParamLimits

0xc0e6,	// (0x0001a01a) bg_popup_window_pane_cp07_ParamLimits

0xc0f4,	// (0x0001a028) blid_firmament_pane

0x4580,	// (0x000124b4) aid_size_cell_gallery_ParamLimits

0x4580,	// (0x000124b4) aid_size_cell_gallery

0x4596,	// (0x000124ca) grid_gallery_pane_ParamLimits

0x4596,	// (0x000124ca) grid_gallery_pane

0x45b1,	// (0x000124e5) cell_gallery_pane_ParamLimits

0x45b1,	// (0x000124e5) cell_gallery_pane

0xc21d,	// (0x0001a151) bg_cell_gallery_focus_pane_ParamLimits

0xc21d,	// (0x0001a151) bg_cell_gallery_focus_pane

0xc22f,	// (0x0001a163) cell_gallery_pane_g1_ParamLimits

0xc22f,	// (0x0001a163) cell_gallery_pane_g1

0x4602,	// (0x00012536) cell_gallery_pane_g2_ParamLimits

0x4602,	// (0x00012536) cell_gallery_pane_g2

0x460f,	// (0x00012543) cell_gallery_pane_g3_ParamLimits

0x460f,	// (0x00012543) cell_gallery_pane_g3

0xc23b,	// (0x0001a16f) cell_gallery_pane_g4_ParamLimits

0xc23b,	// (0x0001a16f) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0001d60c) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0001d60c) cell_gallery_pane_g

0xc247,	// (0x0001a17b) bg_cell_gallery_focus_pane_g1

0xc24f,	// (0x0001a183) bg_cell_gallery_focus_pane_g2

0xc257,	// (0x0001a18b) bg_cell_gallery_focus_pane_g3

0xc25f,	// (0x0001a193) bg_cell_gallery_focus_pane_g4

0xc267,	// (0x0001a19b) bg_cell_gallery_focus_pane_g5

0xc26f,	// (0x0001a1a3) bg_cell_gallery_focus_pane_g6

0xc277,	// (0x0001a1ab) bg_cell_gallery_focus_pane_g7

0xc27f,	// (0x0001a1b3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0001d615) bg_cell_gallery_focus_pane_g

0xc287,	// (0x0001a1bb) aid_firma_cardinal

0xc29b,	// (0x0001a1cf) blid_firmament_pane_t1

0xc2b2,	// (0x0001a1e6) blid_firmament_pane_t2

0xc2c9,	// (0x0001a1fd) blid_firmament_pane_t3

0xc2e0,	// (0x0001a214) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0001d626) blid_firmament_pane_t

0xc2f7,	// (0x0001a22b) blid_sat_info_pane

0xc307,	// (0x0001a23b) blid_sat_info_pane_g1

0xc307,	// (0x0001a23b) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0001d62f) blid_sat_info_pane_g

0xc311,	// (0x0001a245) blid_sat_info_pane_t1

0xc31f,	// (0x0001a253) smil2_volume_content_pane

0xc328,	// (0x0001a25c) smil2_volume_pane_g1

0xc330,	// (0x0001a264) smil2_volume_content_pane_g1

0xc339,	// (0x0001a26d) smil2_volume_content_pane_g2

0xc342,	// (0x0001a276) smil2_volume_content_pane_g3

0xc34b,	// (0x0001a27f) smil2_volume_content_pane_g4

0xc354,	// (0x0001a288) smil2_volume_content_pane_g5

0xc35d,	// (0x0001a291) smil2_volume_content_pane_g6

0xc366,	// (0x0001a29a) smil2_volume_content_pane_g7

0xc36f,	// (0x0001a2a3) smil2_volume_content_pane_g8

0xc378,	// (0x0001a2ac) smil2_volume_content_pane_g9

0xc381,	// (0x0001a2b5) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0001d634) smil2_volume_content_pane_g

0x122c,	// (0x0000f160) cale_week_day_heading_pane_t1_ParamLimits

0x1240,	// (0x0000f174) cale_week_day_heading_pane_t2_ParamLimits

0x1254,	// (0x0000f188) cale_week_day_heading_pane_t3_ParamLimits

0x1268,	// (0x0000f19c) cale_week_day_heading_pane_t4_ParamLimits

0x127c,	// (0x0000f1b0) cale_week_day_heading_pane_t5_ParamLimits

0x1290,	// (0x0000f1c4) cale_week_day_heading_pane_t6_ParamLimits

0x12a4,	// (0x0000f1d8) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0001d120) cale_week_day_heading_pane_t_ParamLimits

0x9dbf,	// (0x00017cf3) bg_cale_side_pane_ParamLimits

0x12b8,	// (0x0000f1ec) cale_week_time_pane_t1_ParamLimits

0x12d0,	// (0x0000f204) cale_week_time_pane_t2_ParamLimits

0x12e8,	// (0x0000f21c) cale_week_time_pane_t3_ParamLimits

0x1300,	// (0x0000f234) cale_week_time_pane_t4_ParamLimits

0x1318,	// (0x0000f24c) cale_week_time_pane_t5_ParamLimits

0x1330,	// (0x0000f264) cale_week_time_pane_t6_ParamLimits

0x1348,	// (0x0000f27c) cale_week_time_pane_t7_ParamLimits

0x1364,	// (0x0000f298) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0001d12f) cale_week_time_pane_t_ParamLimits

0x1384,	// (0x0000f2b8) cell_cale_week_pane_g2_ParamLimits

0x9dbf,	// (0x00017cf3) bg_cale_side_pane_cp01_ParamLimits

0x22a2,	// (0x000101d6) cale_month_week_pane_t1_ParamLimits

0x22b9,	// (0x000101ed) cale_month_week_pane_t2_ParamLimits

0x22d0,	// (0x00010204) cale_month_week_pane_t3_ParamLimits

0x22e7,	// (0x0001021b) cale_month_week_pane_t4_ParamLimits

0x22fe,	// (0x00010232) cale_month_week_pane_t5_ParamLimits

0x2315,	// (0x00010249) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0001d208) cale_month_week_pane_t_ParamLimits

0xa2ac,	// (0x000181e0) cell_cale_month_pane_g1_ParamLimits

0x93e0,	// (0x00017314) main_cale_event_viewer_pane

0x93e0,	// (0x00017314) listscroll_cale_event_viewer_pane

0xc38a,	// (0x0001a2be) list_cale_ev_pane

0xc392,	// (0x0001a2c6) scroll_pane_cp023

0x461c,	// (0x00012550) field_cale_ev_pane_ParamLimits

0x461c,	// (0x00012550) field_cale_ev_pane

0xc39e,	// (0x0001a2d2) field_cale_ev_content_pane_ParamLimits

0xc39e,	// (0x0001a2d2) field_cale_ev_content_pane

0xc3aa,	// (0x0001a2de) field_cale_ev_pane_g1_ParamLimits

0xc3aa,	// (0x0001a2de) field_cale_ev_pane_g1

0xc3b6,	// (0x0001a2ea) field_cale_ev_pane_g2_ParamLimits

0xc3b6,	// (0x0001a2ea) field_cale_ev_pane_g2

0xc3ce,	// (0x0001a302) field_cale_ev_pane_g3_ParamLimits

0xc3ce,	// (0x0001a302) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0001d649) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0001d649) field_cale_ev_pane_g

0xc3e6,	// (0x0001a31a) field_cale_ev_pane_t1_ParamLimits

0xc3e6,	// (0x0001a31a) field_cale_ev_pane_t1

0x4640,	// (0x00012574) field_cale_ev_content_pane_t1_ParamLimits

0x4640,	// (0x00012574) field_cale_ev_content_pane_t1

0xaaba,	// (0x000189ee) bg_button_pane_cp01

0x9bf7,	// (0x00017b2b) listscroll_cale_week_pane_ParamLimits

0x1016,	// (0x0000ef4a) popup_toolbar_window_cp01

0x9dad,	// (0x00017ce1) listscroll_cale_week_pane_t1_ParamLimits

0x9bf7,	// (0x00017b2b) listscroll_cale_day_pane_ParamLimits

0x2469,	// (0x0001039d) popup_toolbar_window_cp02

0x9dad,	// (0x00017ce1) listscroll_cale_day_pane_t1_ParamLimits

0x9bf7,	// (0x00017b2b) main_cale_month_pane_ParamLimits

0x3baa,	// (0x00011ade) popup_toolbar_window_cp03_ParamLimits

0x3baa,	// (0x00011ade) popup_toolbar_window_cp03

0x31cd,	// (0x00011101) main_image_pane_g2_ParamLimits

0x31cd,	// (0x00011101) main_image_pane_g2

0x31de,	// (0x00011112) main_image_pane_g3_ParamLimits

0x31de,	// (0x00011112) main_image_pane_g3

0x0002,

0xf506,	// (0x0001d43a) main_image_pane_g_ParamLimits

0xf506,	// (0x0001d43a) main_image_pane_g

0xac4c,	// (0x00018b80) main_image_pane_t1_ParamLimits

0x31ef,	// (0x00011123) main_image_pane_t2_ParamLimits

0x31ef,	// (0x00011123) main_image_pane_t2

0x3201,	// (0x00011135) main_image_pane_t3_ParamLimits

0x3201,	// (0x00011135) main_image_pane_t3

0x3229,	// (0x0001115d) main_image_pane_t4_ParamLimits

0x3229,	// (0x0001115d) main_image_pane_t4

0x0003,

0xf50d,	// (0x0001d441) main_image_pane_t_ParamLimits

0xf50d,	// (0x0001d441) main_image_pane_t

0x3249,	// (0x0001117d) popup_image_details_window_cp01

0x3253,	// (0x00011187) popup_toobar_trans_pane_cp01_ParamLimits

0x3253,	// (0x00011187) popup_toobar_trans_pane_cp01

0x3a1d,	// (0x00011951) popup_image_details_window_ParamLimits

0x3a1d,	// (0x00011951) popup_image_details_window

0xbdf4,	// (0x00019d28) popup_image_focus_window

0x3e60,	// (0x00011d94) camera2_autofocus_pane_ParamLimits

0x3e60,	// (0x00011d94) camera2_autofocus_pane

0x93e0,	// (0x00017314) bg_popup_sub_pane_cp06

0xc3fd,	// (0x0001a331) popup_image_focus_window_g1

0xc405,	// (0x0001a339) popup_image_focus_window_g2

0xc40d,	// (0x0001a341) popup_image_focus_window_g3

0xc415,	// (0x0001a349) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0001d650) popup_image_focus_window_g

0xc41d,	// (0x0001a351) popup_image_focus_window_t1

0xc42b,	// (0x0001a35f) popup_image_focus_window_t2

0xc43b,	// (0x0001a36f) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0001d659) popup_image_focus_window_t

0xc449,	// (0x0001a37d) camera2_autofocus_pane_g1

0x9451,	// (0x00017385) bg_tb_trans_pane_cp01

0xc457,	// (0x0001a38b) popup_image_details_window_g1

0xc46a,	// (0x0001a39e) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0001d66b) popup_image_details_window_g

0xc493,	// (0x0001a3c7) popup_image_details_window_t1

0xc4a5,	// (0x0001a3d9) popup_image_details_window_t2

0xc4be,	// (0x0001a3f2) popup_image_details_window_t3

0xc4d2,	// (0x0001a406) popup_image_details_window_t4

0xc4ed,	// (0x0001a421) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0001d672) popup_image_details_window_t

0x9bc9,	// (0x00017afd) bg_calc_paper_pane_ParamLimits

0x93e0,	// (0x00017314) grid_highlight_pane_cp013

0x9bdd,	// (0x00017b11) list_calc_pane_ParamLimits

0x9bef,	// (0x00017b23) scroll_pane_cp024

0x9bf7,	// (0x00017b2b) bg_calc_display_pane_ParamLimits

0x0e4d,	// (0x0000ed81) calc_display_pane_t1_ParamLimits

0x0e5f,	// (0x0000ed93) calc_display_pane_t2_ParamLimits

0x9c03,	// (0x00017b37) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0001d0a2) calc_display_pane_t_ParamLimits

0x0f22,	// (0x0000ee56) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0001d0bf) cell_calc_pane_g

0x0f2b,	// (0x0000ee5f) cell_calc_pane_t1

0x9c7a,	// (0x00017bae) grid_highlight_pane_cp02_ParamLimits

0x9c90,	// (0x00017bc4) toolbar_button_pane_cp01_ParamLimits

0x9c90,	// (0x00017bc4) toolbar_button_pane_cp01

0xac91,	// (0x00018bc5) temp_image_control_pane_ParamLimits

0xac91,	// (0x00018bc5) temp_image_control_pane

0x9451,	// (0x00017385) main_mp3_pane

0xc507,	// (0x0001a43b) temp_image_control_pane_g1_ParamLimits

0xc507,	// (0x0001a43b) temp_image_control_pane_g1

0xc515,	// (0x0001a449) temp_image_control_pane_g2_ParamLimits

0xc515,	// (0x0001a449) temp_image_control_pane_g2

0xc527,	// (0x0001a45b) temp_image_control_pane_g3_ParamLimits

0xc527,	// (0x0001a45b) temp_image_control_pane_g3

0x4691,	// (0x000125c5) temp_image_control_pane_g4_ParamLimits

0x4691,	// (0x000125c5) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0001d67d) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0001d67d) temp_image_control_pane_g

0xc507,	// (0x0001a43b) main_mp3_pane_g1

0x46a4,	// (0x000125d8) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0001d686) main_mp3_pane_g

0xc56a,	// (0x0001a49e) main_mp3_pane_t1

0x9e8e,	// (0x00017dc2) main_camera_pane_g8_ParamLimits

0x9e8e,	// (0x00017dc2) main_camera_pane_g8

0x1655,	// (0x0000f589) main_video_pane_g7_ParamLimits

0x1655,	// (0x0000f589) main_video_pane_g7

0xbf28,	// (0x00019e5c) main_camera2_pane_t7_ParamLimits

0xbf28,	// (0x00019e5c) main_camera2_pane_t7

0xa098,	// (0x00017fcc) scroll_pane_cp025_ParamLimits

0xa098,	// (0x00017fcc) scroll_pane_cp025

0xa0ac,	// (0x00017fe0) scroll_pane_cp026_ParamLimits

0xa0ac,	// (0x00017fe0) scroll_pane_cp026

0xa0bb,	// (0x00017fef) wml_content_pane_ParamLimits

0x93e0,	// (0x00017314) main_touch_calib_pane

0x476c,	// (0x000126a0) main_touch_calib_pane_g1

0x4778,	// (0x000126ac) main_touch_calib_pane_g2

0x4784,	// (0x000126b8) main_touch_calib_pane_g3

0x4790,	// (0x000126c4) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0001d6a4) main_touch_calib_pane_g

0x479c,	// (0x000126d0) main_touch_calib_pane_t1

0x47b6,	// (0x000126ea) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0001d6ad) main_touch_calib_pane_t

0xa868,	// (0x0001879c) mup_progress_pane_cp02

0xa887,	// (0x000187bb) navi_pane_g1

0xa8e9,	// (0x0001881d) navi_pane_mp_t3

0x9451,	// (0x00017385) main_mp3_pane_ParamLimits

0x3bec,	// (0x00011b20) navi_pane_ParamLimits

0xc507,	// (0x0001a43b) main_mp3_pane_g1_ParamLimits

0x46a4,	// (0x000125d8) main_mp3_pane_g2_ParamLimits

0x46b0,	// (0x000125e4) main_mp3_pane_g3_ParamLimits

0x46b0,	// (0x000125e4) main_mp3_pane_g3

0x46be,	// (0x000125f2) main_mp3_pane_g4_ParamLimits

0x46be,	// (0x000125f2) main_mp3_pane_g4

0xc537,	// (0x0001a46b) main_mp3_pane_g5_ParamLimits

0xc537,	// (0x0001a46b) main_mp3_pane_g5

0xc545,	// (0x0001a479) main_mp3_pane_g6_ParamLimits

0xc545,	// (0x0001a479) main_mp3_pane_g6

0xc552,	// (0x0001a486) main_mp3_pane_g7_ParamLimits

0xc552,	// (0x0001a486) main_mp3_pane_g7

0xc55e,	// (0x0001a492) main_mp3_pane_g8_ParamLimits

0xc55e,	// (0x0001a492) main_mp3_pane_g8

0xf752,	// (0x0001d686) main_mp3_pane_g_ParamLimits

0x46ca,	// (0x000125fe) main_mp3_pane_t2

0x46d8,	// (0x0001260c) main_mp3_pane_t3

0xc578,	// (0x0001a4ac) main_mp3_pane_t4

0xc586,	// (0x0001a4ba) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0001d697) main_mp3_pane_t

0xc594,	// (0x0001a4c8) mup_progress_pane_cp01

0x93fe,	// (0x00017332) aid_zoom_text_secondary2

0xc38a,	// (0x0001a2be) list_cale_ev2_pane

0xc392,	// (0x0001a2c6) scroll_pane_cp023_ParamLimits

0x480e,	// (0x00012742) field_cale_ev2_pane_ParamLimits

0x480e,	// (0x00012742) field_cale_ev2_pane

0x4832,	// (0x00012766) field_cale_ev2_pane_g1_ParamLimits

0x4832,	// (0x00012766) field_cale_ev2_pane_g1

0x483e,	// (0x00012772) field_cale_ev2_pane_g2_ParamLimits

0x483e,	// (0x00012772) field_cale_ev2_pane_g2

0x4856,	// (0x0001278a) field_cale_ev2_pane_g3_ParamLimits

0x4856,	// (0x0001278a) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0001d6b8) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0001d6b8) field_cale_ev2_pane_g

0x486e,	// (0x000127a2) field_cale_ev2_pane_t1_ParamLimits

0x486e,	// (0x000127a2) field_cale_ev2_pane_t1

0x4885,	// (0x000127b9) field_cale_ev2_pane_t2_ParamLimits

0x4885,	// (0x000127b9) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0001d6c1) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0001d6c1) field_cale_ev2_pane_t

0x3068,	// (0x00010f9c) main_postcard_pane_g5_ParamLimits

0x3068,	// (0x00010f9c) main_postcard_pane_g5

0x307e,	// (0x00010fb2) main_postcard_pane_g6_ParamLimits

0x307e,	// (0x00010fb2) main_postcard_pane_g6

0x1401,	// (0x0000f335) camera2_autofocus_pane_cp_ParamLimits

0x1401,	// (0x0000f335) camera2_autofocus_pane_cp

0x9451,	// (0x00017385) main_mup3_pane

0x48ba,	// (0x000127ee) main_mup3_pane_g1_ParamLimits

0x48ba,	// (0x000127ee) main_mup3_pane_g1

0x48dc,	// (0x00012810) main_mup3_pane_g2_ParamLimits

0x48dc,	// (0x00012810) main_mup3_pane_g2

0x495f,	// (0x00012893) main_mup3_pane_g3_ParamLimits

0x495f,	// (0x00012893) main_mup3_pane_g3

0x49a7,	// (0x000128db) main_mup3_pane_g4_ParamLimits

0x49a7,	// (0x000128db) main_mup3_pane_g4

0x49ef,	// (0x00012923) main_mup3_pane_g5_ParamLimits

0x49ef,	// (0x00012923) main_mup3_pane_g5

0x4a37,	// (0x0001296b) main_mup3_pane_g6_ParamLimits

0x4a37,	// (0x0001296b) main_mup3_pane_g6

0xc5a8,	// (0x0001a4dc) main_mup3_pane_g7_ParamLimits

0xc5a8,	// (0x0001a4dc) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0001d6d1) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0001d6d1) main_mup3_pane_g

0x4ab7,	// (0x000129eb) main_mup3_pane_t1_ParamLimits

0x4ab7,	// (0x000129eb) main_mup3_pane_t1

0x4b29,	// (0x00012a5d) main_mup3_pane_t2_ParamLimits

0x4b29,	// (0x00012a5d) main_mup3_pane_t2

0x4bff,	// (0x00012b33) main_mup3_pane_t4_ParamLimits

0x4bff,	// (0x00012b33) main_mup3_pane_t4

0x4c5d,	// (0x00012b91) main_mup3_pane_t5_ParamLimits

0x4c5d,	// (0x00012b91) main_mup3_pane_t5

0x4d19,	// (0x00012c4d) main_mup3_pane_t6_ParamLimits

0x4d19,	// (0x00012c4d) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0001d6e2) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0001d6e2) main_mup3_pane_t

0x4dcf,	// (0x00012d03) mup3_progress_pane_ParamLimits

0x4dcf,	// (0x00012d03) mup3_progress_pane

0x4e63,	// (0x00012d97) popup_mup3_control_window_ParamLimits

0x4e63,	// (0x00012d97) popup_mup3_control_window

0xc5b6,	// (0x0001a4ea) popup_mup3_text_window

0x4e99,	// (0x00012dcd) mup3_progress_pane_t1

0x4eb0,	// (0x00012de4) mup3_progress_pane_t2

0xc5be,	// (0x0001a4f2) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0001d6ef) mup3_progress_pane_t

0xc5d5,	// (0x0001a509) mup_progress_pane_cp03

0x93e0,	// (0x00017314) bg_tb_trans_pane_cp04

0x4ec7,	// (0x00012dfb) mup3_volume_pane

0x4ecf,	// (0x00012e03) popup_mup3_control_window_g1

0x4ed8,	// (0x00012e0c) mup3_volume_pane_g1

0x4ee1,	// (0x00012e15) mup3_volume_pane_g2

0x4eea,	// (0x00012e1e) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0001d6f6) mup3_volume_pane_g

0x93e0,	// (0x00017314) bg_tb_trans_pane_cp03

0xc5e5,	// (0x0001a519) popup_mup3_text_window_g1

0xc5ed,	// (0x0001a521) popup_mup3_text_window_t1

0x9c51,	// (0x00017b85) list_calc_item_pane_g1_ParamLimits

0xc010,	// (0x00019f44) mup_volume_pane_cp_g1

0x47d0,	// (0x00012704) main_touch_calib_pane_t3

0x47e4,	// (0x00012718) main_touch_calib_pane_t4

0x47f8,	// (0x0001272c) main_touch_calib_pane_t5

0x93ea,	// (0x0001731e) aid_cell_size_toolbar2

0x93f2,	// (0x00017326) aid_popup3_width_pane

0x93fe,	// (0x00017332) aid_zoom_text_msg_primary

0x9e6e,	// (0x00017da2) vorec_t7

0x9c15,	// (0x00017b49) bg_calc_paper_pane_g1_ParamLimits

0x9c21,	// (0x00017b55) bg_calc_paper_pane_g2_ParamLimits

0x9c2d,	// (0x00017b61) bg_calc_paper_pane_g3_ParamLimits

0x9c39,	// (0x00017b6d) bg_calc_paper_pane_g4_ParamLimits

0x9c45,	// (0x00017b79) bg_calc_paper_pane_g5_ParamLimits

0x0eac,	// (0x0000ede0) bg_calc_paper_pane_g6_ParamLimits

0x0ebf,	// (0x0000edf3) bg_calc_paper_pane_g7_ParamLimits

0x0ed2,	// (0x0000ee06) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0001d0a9) bg_calc_paper_pane_g_ParamLimits

0x0ee3,	// (0x0000ee17) calc_bg_paper_pane_g9_ParamLimits

0x1563,	// (0x0000f497) image_qvga_pane_ParamLimits

0x1563,	// (0x0000f497) image_qvga_pane

0x9b02,	// (0x00017a36) bg_popup_sub_pane_cp04_ParamLimits

0xabc8,	// (0x00018afc) popup_mup_playback_window_g1_ParamLimits

0xabd4,	// (0x00018b08) popup_mup_playback_window_t1_ParamLimits

0xabe9,	// (0x00018b1d) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0001d435) popup_mup_playback_window_t_ParamLimits

0x42e4,	// (0x00012218) main_mup2_pane_g3_ParamLimits

0x42e4,	// (0x00012218) main_mup2_pane_g3

0x18a6,	// (0x0000f7da) popup_toolbar_window_cp04

0xafe4,	// (0x00018f18) popup_call2_audio_second_window_g3_ParamLimits

0xafe4,	// (0x00018f18) popup_call2_audio_second_window_g3

0xb3ee,	// (0x00019322) popup_call2_audio_first_window_g4_ParamLimits

0xb3ee,	// (0x00019322) popup_call2_audio_first_window_g4

0xba6d,	// (0x000199a1) popup_call2_audio_in_window_g4_ParamLimits

0xba6d,	// (0x000199a1) popup_call2_audio_in_window_g4

0x31af,	// (0x000110e3) aid_area_sk_bg_cut_ParamLimits

0x31af,	// (0x000110e3) aid_area_sk_bg_cut

0xabfe,	// (0x00018b32) aid_area_sk_bg_cut_2_ParamLimits

0xabfe,	// (0x00018b32) aid_area_sk_bg_cut_2

0x45f2,	// (0x00012526) aid_placing_details_win

0x45fa,	// (0x0001252e) aid_placing_details_win_2

0xc449,	// (0x0001a37d) camera2_autofocus_pane_g1_ParamLimits

0x0acd,	// (0x0000ea01) popup_fixed_preview_cale_window_ParamLimits

0x0acd,	// (0x0000ea01) popup_fixed_preview_cale_window

0xa941,	// (0x00018875) navi_slider_pane_g3

0xa94a,	// (0x0001887e) navi_slider_pane_g4

0xa953,	// (0x00018887) navi_slider_pane_g5

0xa941,	// (0x00018875) navi_slider_pane_g6

0xa95c,	// (0x00018890) navi_slider_pane_g7

0xaa7f,	// (0x000189b3) mup_scale_pane_g3

0xaa88,	// (0x000189bc) mup_scale_pane_g4

0xaa91,	// (0x000189c5) mup_scale_pane_g5

0x2e6d,	// (0x00010da1) mup_scale_pane_g6

0x2e76,	// (0x00010daa) mup_scale_pane_g7

0xa941,	// (0x00018875) cams2_slider_pane_g3

0xc0c5,	// (0x00019ff9) cams2_slider_pane_g4

0xc0cd,	// (0x0001a001) cams2_slider_pane_g5

0xa941,	// (0x00018875) cams2_slider_pane_g6

0xc0d5,	// (0x0001a009) cams2_slider_pane_g7

0xc307,	// (0x0001a23b) camera2_autofocus_pane_cp_g1

0xc5fb,	// (0x0001a52f) bg_popup_preview_window_pane_cp02_ParamLimits

0xc5fb,	// (0x0001a52f) bg_popup_preview_window_pane_cp02

0xc607,	// (0x0001a53b) list_fp_cale_pane_ParamLimits

0xc607,	// (0x0001a53b) list_fp_cale_pane

0xc613,	// (0x0001a547) popup_fixed_preview_cale_window_t1_ParamLimits

0xc613,	// (0x0001a547) popup_fixed_preview_cale_window_t1

0x4ef3,	// (0x00012e27) popup_fixed_preview_cale_window_t2_ParamLimits

0x4ef3,	// (0x00012e27) popup_fixed_preview_cale_window_t2

0x4f08,	// (0x00012e3c) popup_fixed_preview_cale_window_t3_ParamLimits

0x4f08,	// (0x00012e3c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x0001d6fd) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x0001d6fd) popup_fixed_preview_cale_window_t

0x4f1f,	// (0x00012e53) list_single_fp_cale_pane_ParamLimits

0x4f1f,	// (0x00012e53) list_single_fp_cale_pane

0xc631,	// (0x0001a565) list_single_fp_cale_pane_g1_ParamLimits

0xc631,	// (0x0001a565) list_single_fp_cale_pane_g1

0xc63d,	// (0x0001a571) list_single_fp_cale_pane_g2_ParamLimits

0xc63d,	// (0x0001a571) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0001d704) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0001d704) list_single_fp_cale_pane_g

0xc656,	// (0x0001a58a) list_single_fp_cale_pane_t1_ParamLimits

0xc656,	// (0x0001a58a) list_single_fp_cale_pane_t1

0xc668,	// (0x0001a59c) list_single_fp_cale_pane_t2_ParamLimits

0xc668,	// (0x0001a59c) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0001d70b) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0001d70b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x93e0,	// (0x00017314) main_dialer_pane

0x4f37,	// (0x00012e6b) aid_cell_size_keypad

0x4f41,	// (0x00012e75) dialer_ne_pane

0x4f4b,	// (0x00012e7f) grid_dialer_command_1_pane

0x4f53,	// (0x00012e87) grid_dialer_command_2_pane

0x4f5b,	// (0x00012e8f) grid_dialer_keypad_pane

0x4f6f,	// (0x00012ea3) bg_popup_call_pane_cp06_ParamLimits

0x4f6f,	// (0x00012ea3) bg_popup_call_pane_cp06

0x4f7b,	// (0x00012eaf) dialer_ne_clear_pane_ParamLimits

0x4f7b,	// (0x00012eaf) dialer_ne_clear_pane

0xc69b,	// (0x0001a5cf) dialer_ne_pane_g1

0xc6a3,	// (0x0001a5d7) dialer_ne_pane_t1_ParamLimits

0xc6a3,	// (0x0001a5d7) dialer_ne_pane_t1

0x4f87,	// (0x00012ebb) dialer_ne_pane_t2_ParamLimits

0x4f87,	// (0x00012ebb) dialer_ne_pane_t2

0x4fb1,	// (0x00012ee5) dialer_ne_pane_t3_ParamLimits

0x4fb1,	// (0x00012ee5) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x0001d710) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x0001d710) dialer_ne_pane_t

0x4fe1,	// (0x00012f15) dialer_ne_pane_t3_copy1_ParamLimits

0x4fe1,	// (0x00012f15) dialer_ne_pane_t3_copy1

0x5010,	// (0x00012f44) cell_dialer_keypad_pane_ParamLimits

0x5010,	// (0x00012f44) cell_dialer_keypad_pane

0x5027,	// (0x00012f5b) cell_dialer_command_1_pane_ParamLimits

0x5027,	// (0x00012f5b) cell_dialer_command_1_pane

0x503d,	// (0x00012f71) cell_dialer_command_2_pane_ParamLimits

0x503d,	// (0x00012f71) cell_dialer_command_2_pane

0xc6b5,	// (0x0001a5e9) bg_button_pane_cp02_ParamLimits

0xc6b5,	// (0x0001a5e9) bg_button_pane_cp02

0x504c,	// (0x00012f80) cell_dialer_keypad_pane_g1_ParamLimits

0x504c,	// (0x00012f80) cell_dialer_keypad_pane_g1

0xc6b5,	// (0x0001a5e9) bg_button_pane_cp03_ParamLimits

0xc6b5,	// (0x0001a5e9) bg_button_pane_cp03

0x5061,	// (0x00012f95) cell_dialer_command_1_pane_g1_ParamLimits

0x5061,	// (0x00012f95) cell_dialer_command_1_pane_g1

0xc6c1,	// (0x0001a5f5) bg_button_pane_cp04

0x5075,	// (0x00012fa9) cell_dialer_command_2_pane_g1

0xa927,	// (0x0001885b) bg_button_pane_cp06

0xc6c9,	// (0x0001a5fd) dialer_ne_clear_pane_g1

0x2951,	// (0x00010885) navi_pane_g2

0x297f,	// (0x000108b3) navi_pane_g3

0x0002,

0xf404,	// (0x0001d338) navi_pane_g

0x29aa,	// (0x000108de) navi_pane_mv_g2

0x29d1,	// (0x00010905) navi_pane_mv_g5

0x29d9,	// (0x0001090d) navi_pane_mv_t1

0x9bf7,	// (0x00017b2b) main_clock2_pane

0x50af,	// (0x00012fe3) main_clock2_list_pane_ParamLimits

0x50af,	// (0x00012fe3) main_clock2_list_pane

0x50e9,	// (0x0001301d) main_clock2_pane_t1_ParamLimits

0x50e9,	// (0x0001301d) main_clock2_pane_t1

0x5125,	// (0x00013059) main_clock2_pane_t2_ParamLimits

0x5125,	// (0x00013059) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0001d717) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0001d717) main_clock2_pane_t

0x51b4,	// (0x000130e8) popup_clock_analogue_window_cp03_ParamLimits

0x51b4,	// (0x000130e8) popup_clock_analogue_window_cp03

0x51db,	// (0x0001310f) popup_clock_digital_window_cp02_ParamLimits

0x51db,	// (0x0001310f) popup_clock_digital_window_cp02

0x5256,	// (0x0001318a) main_clock2_list_single_pane_ParamLimits

0x5256,	// (0x0001318a) main_clock2_list_single_pane

0xa927,	// (0x0001885b) list_highlight_pane_cp05

0xc6d1,	// (0x0001a605) main_clock2_list_single_pane_t1

0x18a6,	// (0x0000f7da) popup_toolbar_window_cp04_ParamLimits

0x4661,	// (0x00012595) camera2_autofocus_pane_g2_ParamLimits

0x4661,	// (0x00012595) camera2_autofocus_pane_g2

0x466d,	// (0x000125a1) camera2_autofocus_pane_g3_ParamLimits

0x466d,	// (0x000125a1) camera2_autofocus_pane_g3

0x4679,	// (0x000125ad) camera2_autofocus_pane_g4_ParamLimits

0x4679,	// (0x000125ad) camera2_autofocus_pane_g4

0x4685,	// (0x000125b9) camera2_autofocus_pane_g5_ParamLimits

0x4685,	// (0x000125b9) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0001d660) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0001d660) camera2_autofocus_pane_g

0x489a,	// (0x000127ce) camera2_autofocus_pane_cp_g2

0x48a2,	// (0x000127d6) camera2_autofocus_pane_cp_g3

0x48aa,	// (0x000127de) camera2_autofocus_pane_cp_g4

0x48b2,	// (0x000127e6) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0001d6c6) camera2_autofocus_pane_cp_g

0x4f67,	// (0x00012e9b) popup_dialer_spcha_window

0x93e0,	// (0x00017314) bg_popup_sub_pane_cp07

0xc6df,	// (0x0001a613) list_spcha_pane

0xc6e7,	// (0x0001a61b) list_single_spcha_pane_ParamLimits

0xc6e7,	// (0x0001a61b) list_single_spcha_pane

0x93e0,	// (0x00017314) list_highlight_pane_cp06

0xc6f8,	// (0x0001a62c) list_single_spcha_pane_t1

0xb817,	// (0x0001974b) popup_call2_audio_out_window_g4_ParamLimits

0xb817,	// (0x0001974b) popup_call2_audio_out_window_g4

0x93e0,	// (0x00017314) main_imed2_pane

0xbdfe,	// (0x00019d32) popup_imed_adjust2_window

0x3a35,	// (0x00011969) popup_imed_trans_window_ParamLimits

0x3a35,	// (0x00011969) popup_imed_trans_window

0xc13f,	// (0x0001a073) popup_blid_sat_info2_window_t1

0xc14d,	// (0x0001a081) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x0001d5f5) popup_blid_sat_info2_window_t

0x530c,	// (0x00013240) aid_size_cell_colour_35

0x532c,	// (0x00013260) aid_size_cell_colour_112

0x534c,	// (0x00013280) aid_size_cell_effect

0xbdd2,	// (0x00019d06) bg_tb_trans_pane_cp02

0xa3a1,	// (0x000182d5) heading_imed_pane

0x536c,	// (0x000132a0) listscroll_imed_pane

0xc706,	// (0x0001a63a) heading_imed_pane_g1

0xc70e,	// (0x0001a642) heading_imed_pane_t1

0xc71c,	// (0x0001a650) grid_imed_colour_35_pane_ParamLimits

0xc71c,	// (0x0001a650) grid_imed_colour_35_pane

0x5378,	// (0x000132ac) grid_imed_effect_pane

0xc738,	// (0x0001a66c) list_imed_aspect_pane

0x538f,	// (0x000132c3) scroll_pane_cp027_ParamLimits

0x538f,	// (0x000132c3) scroll_pane_cp027

0x53a0,	// (0x000132d4) cell_imed_effect_pane_ParamLimits

0x53a0,	// (0x000132d4) cell_imed_effect_pane

0xc740,	// (0x0001a674) cell_imed_colour_pane_ParamLimits

0xc740,	// (0x0001a674) cell_imed_colour_pane

0xc78a,	// (0x0001a6be) cell_imed_colour_pane_g1_ParamLimits

0xc78a,	// (0x0001a6be) cell_imed_colour_pane_g1

0xc79b,	// (0x0001a6cf) hgihlgiht_grid_pane_cp016_ParamLimits

0xc79b,	// (0x0001a6cf) hgihlgiht_grid_pane_cp016

0x53c5,	// (0x000132f9) cell_imed_effect_pane_g1

0x53cd,	// (0x00013301) grid_highlight_pane_cp017

0xc7ac,	// (0x0001a6e0) list_imed_single_pane_ParamLimits

0xc7ac,	// (0x0001a6e0) list_imed_single_pane

0x93e0,	// (0x00017314) list_highlight_pane_cp07

0xc7c0,	// (0x0001a6f4) list_imed_aspect_pane_comp1_t1

0xbdd2,	// (0x00019d06) bg_tb_trans_pane_cp05

0xc7e2,	// (0x0001a716) popup_imed_adjust2_window_g1

0xc809,	// (0x0001a73d) popup_imed_adjust2_window_t1

0xc821,	// (0x0001a755) slider_imed_adjust_pane

0xc835,	// (0x0001a769) slider_imed_adjust_pane_g1

0xc845,	// (0x0001a779) slider_imed_adjust_pane_g2

0xc855,	// (0x0001a789) slider_imed_adjust_pane_g3

0xc866,	// (0x0001a79a) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0001d734) slider_imed_adjust_pane_g

0x53d6,	// (0x0001330a) aid_size_cell_clipart2

0x53e2,	// (0x00013316) grid_imed_clipart_pane

0xc877,	// (0x0001a7ab) scroll_pane_cp031

0x53ec,	// (0x00013320) cell_imed_clipart_pane_ParamLimits

0x53ec,	// (0x00013320) cell_imed_clipart_pane

0x5409,	// (0x0001333d) cell_imed_clipart_pane_g1

0x93e0,	// (0x00017314) grid_highlight_pane_cp014

0x50c4,	// (0x00012ff8) main_clock2_pane_g1_ParamLimits

0x50c4,	// (0x00012ff8) main_clock2_pane_g1

0x51fd,	// (0x00013131) aid_call2_pane_cp10

0x520f,	// (0x00013143) aid_call_pane_cp10

0xa85c,	// (0x00018790) popup_clock_analogue_window_cp10_g1

0xa85c,	// (0x00018790) popup_clock_analogue_window_cp10_g2

0x5221,	// (0x00013155) popup_clock_analogue_window_cp10_g3

0x5221,	// (0x00013155) popup_clock_analogue_window_cp10_g4

0xa85c,	// (0x00018790) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0001d722) popup_clock_analogue_window_cp10_g

0x5237,	// (0x0001316b) popup_clock_analogue_window_cp10_t1

0x5268,	// (0x0001319c) clock_digital_number_pane_cp10_ParamLimits

0x5268,	// (0x0001319c) clock_digital_number_pane_cp10

0x5282,	// (0x000131b6) clock_digital_number_pane_cp11_ParamLimits

0x5282,	// (0x000131b6) clock_digital_number_pane_cp11

0x529c,	// (0x000131d0) clock_digital_number_pane_cp12_ParamLimits

0x529c,	// (0x000131d0) clock_digital_number_pane_cp12

0x52b6,	// (0x000131ea) clock_digital_number_pane_cp13_ParamLimits

0x52b6,	// (0x000131ea) clock_digital_number_pane_cp13

0x52d0,	// (0x00013204) clock_digital_separator_pane_cp10_ParamLimits

0x52d0,	// (0x00013204) clock_digital_separator_pane_cp10

0x52ea,	// (0x0001321e) popup_clock_digital_window_cp02_t1_ParamLimits

0x52ea,	// (0x0001321e) popup_clock_digital_window_cp02_t1

0x9afa,	// (0x00017a2e) clock_digital_number_pane_cp10_g1

0x9afa,	// (0x00017a2e) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0001d73d) clock_digital_number_pane_cp10_g

0x9afa,	// (0x00017a2e) clock_digital_separator_pane_cp10_g1

0x9afa,	// (0x00017a2e) clock_digital_separator_pane_g2_cp10

0xa8f7,	// (0x0001882b) navi_pane_vded_g4

0xa900,	// (0x00018834) navi_pane_vded_g5

0xa909,	// (0x0001883d) navi_pane_vded_t1

0x93e0,	// (0x00017314) main_vded_pane

0x5412,	// (0x00013346) main_vded_pane_g1

0x541e,	// (0x00013352) main_vded_pane_g2

0x542a,	// (0x0001335e) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0001d742) main_vded_pane_g

0x5436,	// (0x0001336a) main_vded_pane_t1

0x5444,	// (0x00013378) main_vded_pane_t2

0x0001,

0xf815,	// (0x0001d749) main_vded_pane_t

0x5452,	// (0x00013386) vded_slider_pane

0x545c,	// (0x00013390) vded_video_pane

0xc87f,	// (0x0001a7b3) vded_video_pane_g1

0x5468,	// (0x0001339c) vded_video_pane_g2

0xc307,	// (0x0001a23b) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0001d74e) vded_video_pane_g

0xc889,	// (0x0001a7bd) vded_slider_pane_g1

0xc010,	// (0x00019f44) vded_slider_pane_g2

0xc892,	// (0x0001a7c6) vded_slider_pane_g3

0xc89b,	// (0x0001a7cf) vded_slider_pane_g4

0xc8a4,	// (0x0001a7d8) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0001d755) vded_slider_pane_g

0x4e4d,	// (0x00012d81) mup3_rocker_pane_ParamLimits

0x4e4d,	// (0x00012d81) mup3_rocker_pane

0x5471,	// (0x000133a5) mup3_control_keys_pane_g1

0x5479,	// (0x000133ad) mup3_control_keys_pane_g2

0x5481,	// (0x000133b5) mup3_control_keys_pane_g3

0x5489,	// (0x000133bd) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0001d760) mup3_control_keys_pane_g

0x0b04,	// (0x0000ea38) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0b04,	// (0x0000ea38) popup_toolbar2_fixed_window_cp01

0x4e83,	// (0x00012db7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4e83,	// (0x00012db7) popup_toolbar2_fixed_window_cp02

0xb156,	// (0x0001908a) popup_call2_audio_second_window_t4_ParamLimits

0xb156,	// (0x0001908a) popup_call2_audio_second_window_t4

0xb684,	// (0x000195b8) popup_call2_audio_first_window_t6_ParamLimits

0xb684,	// (0x000195b8) popup_call2_audio_first_window_t6

0xb91a,	// (0x0001984e) popup_call2_audio_out_window_t6_ParamLimits

0xb91a,	// (0x0001984e) popup_call2_audio_out_window_t6

0x93e0,	// (0x00017314) main_vitu_pane

0x5499,	// (0x000133cd) aid_size_cell_itu_ParamLimits

0x5499,	// (0x000133cd) aid_size_cell_itu

0x9451,	// (0x00017385) bg_popup_window_pane_cp08_ParamLimits

0x9451,	// (0x00017385) bg_popup_window_pane_cp08

0x54af,	// (0x000133e3) field_vitu_entry_pane_ParamLimits

0x54af,	// (0x000133e3) field_vitu_entry_pane

0x54c6,	// (0x000133fa) grid_vitu_function_pane_ParamLimits

0x54c6,	// (0x000133fa) grid_vitu_function_pane

0x54e1,	// (0x00013415) grid_vitu_itu_pane_ParamLimits

0x54e1,	// (0x00013415) grid_vitu_itu_pane

0x54fd,	// (0x00013431) cell_vitu_itu_pane_ParamLimits

0x54fd,	// (0x00013431) cell_vitu_itu_pane

0x5523,	// (0x00013457) cell_vitu_function_pane_ParamLimits

0x5523,	// (0x00013457) cell_vitu_function_pane

0x9451,	// (0x00017385) bg_popup_sub_pane_cp08_ParamLimits

0x9451,	// (0x00017385) bg_popup_sub_pane_cp08

0x553e,	// (0x00013472) field_vitu_entry_pane_t1_ParamLimits

0x553e,	// (0x00013472) field_vitu_entry_pane_t1

0xc8c5,	// (0x0001a7f9) field_vitu_entry_pane_t2_ParamLimits

0xc8c5,	// (0x0001a7f9) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0001d76e) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0001d76e) field_vitu_entry_pane_t

0xc8e2,	// (0x0001a816) bg_button_pane_cp05_ParamLimits

0xc8e2,	// (0x0001a816) bg_button_pane_cp05

0x555e,	// (0x00013492) cell_vitu_itu_pane_g1

0x5576,	// (0x000134aa) cell_vitu_itu_pane_t1_ParamLimits

0x5576,	// (0x000134aa) cell_vitu_itu_pane_t1

0x5588,	// (0x000134bc) cell_vitu_itu_pane_t2_ParamLimits

0x5588,	// (0x000134bc) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0001d773) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0001d773) cell_vitu_itu_pane_t

0xc8f0,	// (0x0001a824) bg_button_pane_cp07

0x55bd,	// (0x000134f1) cell_vitu_function_pane_g1

0x9b89,	// (0x00017abd) main_calc_pane_g1

0x093f,	// (0x0000e873) aid_visual_content_pane

0x93e0,	// (0x00017314) main_vradio_pane

0x55c6,	// (0x000134fa) main_vradio_pane_g1_ParamLimits

0x55c6,	// (0x000134fa) main_vradio_pane_g1

0xc8fa,	// (0x0001a82e) main_vradio_pane_g2_ParamLimits

0xc8fa,	// (0x0001a82e) main_vradio_pane_g2

0x0001,

0xf846,	// (0x0001d77a) main_vradio_pane_g_ParamLimits

0xf846,	// (0x0001d77a) main_vradio_pane_g

0x55dd,	// (0x00013511) main_vradio_pane_t1_ParamLimits

0x55dd,	// (0x00013511) main_vradio_pane_t1

0x55f2,	// (0x00013526) main_vradio_pane_t2_ParamLimits

0x55f2,	// (0x00013526) main_vradio_pane_t2

0xc907,	// (0x0001a83b) main_vradio_pane_t3_ParamLimits

0xc907,	// (0x0001a83b) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0001d77f) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0001d77f) main_vradio_pane_t

0x5607,	// (0x0001353b) vradio_rocker_control_pane_ParamLimits

0x5607,	// (0x0001353b) vradio_rocker_control_pane

0x5619,	// (0x0001354d) vradio_station_info_pane_ParamLimits

0x5619,	// (0x0001354d) vradio_station_info_pane

0xc91b,	// (0x0001a84f) vradio_frequency_info_pane_ParamLimits

0xc91b,	// (0x0001a84f) vradio_frequency_info_pane

0xc307,	// (0x0001a23b) vradio_station_info_pane_g1

0xc92a,	// (0x0001a85e) vradio_station_info_pane_t1_ParamLimits

0xc92a,	// (0x0001a85e) vradio_station_info_pane_t1

0xc94c,	// (0x0001a880) vradio_station_info_pane_t2_ParamLimits

0xc94c,	// (0x0001a880) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0001d786) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0001d786) vradio_station_info_pane_t

0xc95e,	// (0x0001a892) vradio_tuning_pane

0xc966,	// (0x0001a89a) vradio_rocker_control_pane_g1

0xc96e,	// (0x0001a8a2) vradio_rocker_control_pane_g2

0xc976,	// (0x0001a8aa) vradio_rocker_control_pane_g3

0xc97e,	// (0x0001a8b2) vradio_rocker_control_pane_g4

0xc986,	// (0x0001a8ba) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x0001d78b) vradio_rocker_control_pane_g

0x5629,	// (0x0001355d) vradio_frequency_info_pane_g1

0xc98e,	// (0x0001a8c2) vradio_frequency_info_pane_t1_ParamLimits

0xc98e,	// (0x0001a8c2) vradio_frequency_info_pane_t1

0x5633,	// (0x00013567) vradio_tuning_pane_g1

0x563e,	// (0x00013572) vradio_tuning_pane_t1

0x940e,	// (0x00017342) area_side_right_pane_ParamLimits

0x940e,	// (0x00017342) area_side_right_pane

0xbd99,	// (0x00019ccd) status_small_pane_g1

0xbda1,	// (0x00019cd5) status_small_pane_g2

0xbdaa,	// (0x00019cde) status_small_pane_g3

0xbdb3,	// (0x00019ce7) status_small_pane_g4

0x0003,

0xf617,	// (0x0001d54b) status_small_pane_g

0xbdbc,	// (0x00019cf0) status_small_pane_t1

0x93e0,	// (0x00017314) main_video3_pane

0xc9a2,	// (0x0001a8d6) cams_zoom_vslider_pane

0xc9aa,	// (0x0001a8de) image3_wide_pane_ParamLimits

0xc9aa,	// (0x0001a8de) image3_wide_pane

0xc9c4,	// (0x0001a8f8) image3_wide_small_pane

0xc9d0,	// (0x0001a904) main_video3_pane_g1_ParamLimits

0xc9d0,	// (0x0001a904) main_video3_pane_g1

0xc9ec,	// (0x0001a920) main_video3_pane_g2_ParamLimits

0xc9ec,	// (0x0001a920) main_video3_pane_g2

0x0001,

0xf862,	// (0x0001d796) main_video3_pane_g_ParamLimits

0xf862,	// (0x0001d796) main_video3_pane_g

0xca08,	// (0x0001a93c) main_video3_pane_t1_ParamLimits

0xca08,	// (0x0001a93c) main_video3_pane_t1

0xca33,	// (0x0001a967) main_video3_pane_t2_ParamLimits

0xca33,	// (0x0001a967) main_video3_pane_t2

0xca60,	// (0x0001a994) main_video3_pane_t3_ParamLimits

0xca60,	// (0x0001a994) main_video3_pane_t3

0x0002,

0xf867,	// (0x0001d79b) main_video3_pane_t_ParamLimits

0xf867,	// (0x0001d79b) main_video3_pane_t

0xca8d,	// (0x0001a9c1) cams_zoom_vslider_pane_g1

0xca96,	// (0x0001a9ca) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0001d7a2) cams_zoom_vslider_pane_g

0xca9e,	// (0x0001a9d2) small_slider_vertical_pane

0xc307,	// (0x0001a23b) small_slider_vertical_pane_g1

0xc307,	// (0x0001a23b) small_slider_vertical_pane_g2

0xcaa6,	// (0x0001a9da) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0001d7a7) small_slider_vertical_pane_g

0x93e0,	// (0x00017314) main_hwr_training_pane

0xcaaf,	// (0x0001a9e3) hwr_training_instruct_pane_ParamLimits

0xcaaf,	// (0x0001a9e3) hwr_training_instruct_pane

0x564d,	// (0x00013581) hwr_training_navi_pane_ParamLimits

0x564d,	// (0x00013581) hwr_training_navi_pane

0x566c,	// (0x000135a0) hwr_training_write_pane_ParamLimits

0x566c,	// (0x000135a0) hwr_training_write_pane

0x93e0,	// (0x00017314) bg_frame_shadow_pane

0xcae6,	// (0x0001aa1a) hwr_training_write_pane_g1

0xcaee,	// (0x0001aa22) hwr_training_write_pane_g2

0xcaf6,	// (0x0001aa2a) hwr_training_write_pane_g3

0xcafe,	// (0x0001aa32) hwr_training_write_pane_g4

0xcb06,	// (0x0001aa3a) hwr_training_write_pane_g5

0xcb0e,	// (0x0001aa42) hwr_training_write_pane_g6

0xcb16,	// (0x0001aa4a) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0001d7ae) hwr_training_write_pane_g

0xcb1e,	// (0x0001aa52) hwr_training_navi_pane_g1_ParamLimits

0xcb1e,	// (0x0001aa52) hwr_training_navi_pane_g1

0xcb30,	// (0x0001aa64) hwr_training_navi_pane_g2_ParamLimits

0xcb30,	// (0x0001aa64) hwr_training_navi_pane_g2

0xcb42,	// (0x0001aa76) hwr_training_navi_pane_g3_ParamLimits

0xcb42,	// (0x0001aa76) hwr_training_navi_pane_g3

0xcb52,	// (0x0001aa86) hwr_training_navi_pane_g4_ParamLimits

0xcb52,	// (0x0001aa86) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x0001d7bd) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x0001d7bd) hwr_training_navi_pane_g

0xcb5f,	// (0x0001aa93) hwr_training_navi_pane_t1

0x56b4,	// (0x000135e8) list_single_hwr_training_instruct_pane_ParamLimits

0x56b4,	// (0x000135e8) list_single_hwr_training_instruct_pane

0xcb6d,	// (0x0001aaa1) list_single_hwr_training_instruct_pane_t1

0xc247,	// (0x0001a17b) bg_frame_shadow_pane_g1

0xcb7c,	// (0x0001aab0) bg_frame_shadow_pane_g2

0xcb84,	// (0x0001aab8) bg_frame_shadow_pane_g3

0xcb8c,	// (0x0001aac0) bg_frame_shadow_pane_g4

0xcb94,	// (0x0001aac8) bg_frame_shadow_pane_g5

0xcb9c,	// (0x0001aad0) bg_frame_shadow_pane_g6

0xcba4,	// (0x0001aad8) bg_frame_shadow_pane_g7

0x9cf0,	// (0x00017c24) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x0001d7c8) bg_frame_shadow_pane_g

0x93e0,	// (0x00017314) main_video_tele_dialer_pane

0x56d0,	// (0x00013604) aid_size_cell_video_keypad_ParamLimits

0x56d0,	// (0x00013604) aid_size_cell_video_keypad

0x56ea,	// (0x0001361e) grid_video_dialer_keypad_pane_ParamLimits

0x56ea,	// (0x0001361e) grid_video_dialer_keypad_pane

0x5736,	// (0x0001366a) video_down_pane_cp_ParamLimits

0x5736,	// (0x0001366a) video_down_pane_cp

0x5766,	// (0x0001369a) cell_video_dialer_keypad_pane_ParamLimits

0x5766,	// (0x0001369a) cell_video_dialer_keypad_pane

0xcbac,	// (0x0001aae0) bg_button_pane_cp08_ParamLimits

0xcbac,	// (0x0001aae0) bg_button_pane_cp08

0x578c,	// (0x000136c0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x578c,	// (0x000136c0) cell_video_dialer_keypad_pane_g1

0x4e37,	// (0x00012d6b) mup3_rocker2_pane_ParamLimits

0x4e37,	// (0x00012d6b) mup3_rocker2_pane

0xc307,	// (0x0001a23b) mup3_rocker2_pane_g1

0x3902,	// (0x00011836) main_dialer2_pane

0x93e0,	// (0x00017314) main_mp4_pane

0xcbc0,	// (0x0001aaf4) main_mp4_pane_g1_ParamLimits

0xcbc0,	// (0x0001aaf4) main_mp4_pane_g1

0xcbc0,	// (0x0001aaf4) main_mp4_pane_g2_ParamLimits

0xcbc0,	// (0x0001aaf4) main_mp4_pane_g2

0x57c7,	// (0x000136fb) main_mp4_pane_g3_ParamLimits

0x57c7,	// (0x000136fb) main_mp4_pane_g3

0xcbce,	// (0x0001ab02) main_mp4_pane_g4_ParamLimits

0xcbce,	// (0x0001ab02) main_mp4_pane_g4

0xcbf6,	// (0x0001ab2a) main_mp4_pane_g5_ParamLimits

0xcbf6,	// (0x0001ab2a) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0001d7e8) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0001d7e8) main_mp4_pane_g

0xcc46,	// (0x0001ab7a) main_mp4_pane_t1_ParamLimits

0xcc46,	// (0x0001ab7a) main_mp4_pane_t1

0xcca2,	// (0x0001abd6) main_mp4_pane_t2_ParamLimits

0xcca2,	// (0x0001abd6) main_mp4_pane_t2

0xccf4,	// (0x0001ac28) main_mp4_pane_t3_ParamLimits

0xccf4,	// (0x0001ac28) main_mp4_pane_t3

0xcd14,	// (0x0001ac48) main_mp4_pane_t4_ParamLimits

0xcd14,	// (0x0001ac48) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x0001d7f5) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x0001d7f5) main_mp4_pane_t

0xcd54,	// (0x0001ac88) mp4_progress_pane_ParamLimits

0xcd54,	// (0x0001ac88) mp4_progress_pane

0xcd9e,	// (0x0001acd2) mp4_rocker_pane_ParamLimits

0xcd9e,	// (0x0001acd2) mp4_rocker_pane

0xcdc8,	// (0x0001acfc) mp4_progress_pane_t1

0xcde1,	// (0x0001ad15) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x0001d7fe) mp4_progress_pane_t

0xcdfa,	// (0x0001ad2e) mup_progress_pane_cp04

0xc307,	// (0x0001a23b) mp4_rocker_pane_g1

0x5811,	// (0x00013745) aid_cell_size_keypad2_ParamLimits

0x5811,	// (0x00013745) aid_cell_size_keypad2

0x5827,	// (0x0001375b) dialer2_ne_pane_ParamLimits

0x5827,	// (0x0001375b) dialer2_ne_pane

0x583f,	// (0x00013773) grid_dialer2_keypad_pane_ParamLimits

0x583f,	// (0x00013773) grid_dialer2_keypad_pane

0xc0e6,	// (0x0001a01a) bg_popup_call_pane_cp07_ParamLimits

0xc0e6,	// (0x0001a01a) bg_popup_call_pane_cp07

0x585b,	// (0x0001378f) dialer2_ne_pane_t1_ParamLimits

0x585b,	// (0x0001378f) dialer2_ne_pane_t1

0x589b,	// (0x000137cf) cell_dialer2_keypad_pane_ParamLimits

0x589b,	// (0x000137cf) cell_dialer2_keypad_pane

0xce4f,	// (0x0001ad83) bg_button_pane_pane_cp04_ParamLimits

0xce4f,	// (0x0001ad83) bg_button_pane_pane_cp04

0x58c1,	// (0x000137f5) cell_dialer2_keypad_pane_g1_ParamLimits

0x58c1,	// (0x000137f5) cell_dialer2_keypad_pane_g1

0x178d,	// (0x0000f6c1) aid_placing_vt_set_content_ParamLimits

0x178d,	// (0x0000f6c1) aid_placing_vt_set_content

0x17b1,	// (0x0000f6e5) aid_placing_vt_set_title_ParamLimits

0x17b1,	// (0x0000f6e5) aid_placing_vt_set_title

0x93e0,	// (0x00017314) main_image3_pane

0x5987,	// (0x000138bb) area_side_right_pane_cp01_ParamLimits

0x5987,	// (0x000138bb) area_side_right_pane_cp01

0xcbc0,	// (0x0001aaf4) main_image3_pane_g1_ParamLimits

0xcbc0,	// (0x0001aaf4) main_image3_pane_g1

0x59a0,	// (0x000138d4) main_image3_pane_g2_ParamLimits

0x59a0,	// (0x000138d4) main_image3_pane_g2

0x59c8,	// (0x000138fc) main_image3_pane_g3_ParamLimits

0x59c8,	// (0x000138fc) main_image3_pane_g3

0x59f2,	// (0x00013926) main_image3_pane_g4_ParamLimits

0x59f2,	// (0x00013926) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x0001d80d) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x0001d80d) main_image3_pane_g

0x5a1c,	// (0x00013950) main_image3_pane_t1_ParamLimits

0x5a1c,	// (0x00013950) main_image3_pane_t1

0x5a74,	// (0x000139a8) main_image3_pane_t2_ParamLimits

0x5a74,	// (0x000139a8) main_image3_pane_t2

0x5ac6,	// (0x000139fa) main_image3_pane_t3_ParamLimits

0x5ac6,	// (0x000139fa) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0001d816) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0001d816) main_image3_pane_t

0x9451,	// (0x00017385) grid_sctrl_middle_pane_cp01_ParamLimits

0x9451,	// (0x00017385) grid_sctrl_middle_pane_cp01

0x5b4e,	// (0x00013a82) cell_sctrl_middle_pane_cp01_ParamLimits

0x5b4e,	// (0x00013a82) cell_sctrl_middle_pane_cp01

0x5b6b,	// (0x00013a9f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5b6b,	// (0x00013a9f) cell_sctrl_middle_pane_cp01_g1

0x93e0,	// (0x00017314) main_call4_pane

0x5b80,	// (0x00013ab4) aid_size_button_call4_ParamLimits

0x5b80,	// (0x00013ab4) aid_size_button_call4

0x5bb3,	// (0x00013ae7) call4_windows_pane_ParamLimits

0x5bb3,	// (0x00013ae7) call4_windows_pane

0x5bd5,	// (0x00013b09) grid_call4_button_pane_ParamLimits

0x5bd5,	// (0x00013b09) grid_call4_button_pane

0xce8f,	// (0x0001adc3) call4_windows_conf_pane

0x5c00,	// (0x00013b34) popup_call4_audio_first_window_ParamLimits

0x5c00,	// (0x00013b34) popup_call4_audio_first_window

0x5c2c,	// (0x00013b60) popup_call4_audio_second_window_ParamLimits

0x5c2c,	// (0x00013b60) popup_call4_audio_second_window

0xcecc,	// (0x0001ae00) popup_call4_audio_wait_window_ParamLimits

0xcecc,	// (0x0001ae00) popup_call4_audio_wait_window

0x5c42,	// (0x00013b76) cell_call4_button_pane_ParamLimits

0x5c42,	// (0x00013b76) cell_call4_button_pane

0x5c69,	// (0x00013b9d) bg_button_pane_cp09_ParamLimits

0x5c69,	// (0x00013b9d) bg_button_pane_cp09

0x5c75,	// (0x00013ba9) cell_call4_button_pane_g1_ParamLimits

0x5c75,	// (0x00013ba9) cell_call4_button_pane_g1

0x5c9b,	// (0x00013bcf) cell_call4_button_pane_t1_ParamLimits

0x5c9b,	// (0x00013bcf) cell_call4_button_pane_t1

0xcf14,	// (0x0001ae48) popup_call4_audio_conf_window_ParamLimits

0xcf14,	// (0x0001ae48) popup_call4_audio_conf_window

0x4e99,	// (0x00012dcd) mup3_progress_pane_t1_ParamLimits

0x4eb0,	// (0x00012de4) mup3_progress_pane_t2_ParamLimits

0xc5be,	// (0x0001a4f2) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0001d6ef) mup3_progress_pane_t_ParamLimits

0xc5d5,	// (0x0001a509) mup_progress_pane_cp03_ParamLimits

0x5491,	// (0x000133c5) mup3_control_keys_pane_g4_copy1

0xcd82,	// (0x0001acb6) mp4_rocker2_pane_ParamLimits

0xcd82,	// (0x0001acb6) mp4_rocker2_pane

0xcf2e,	// (0x0001ae62) mp4_rocker2_pane_g1

0xcf36,	// (0x0001ae6a) mp4_rocker2_pane_g2

0xcf3e,	// (0x0001ae72) mp4_rocker2_pane_g3

0xcf46,	// (0x0001ae7a) mp4_rocker2_pane_g4

0xcf4e,	// (0x0001ae82) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0001d81f) mp4_rocker2_pane_g

0x93e0,	// (0x00017314) main_camera4_pane

0x93e0,	// (0x00017314) main_video4_pane

0x5704,	// (0x00013638) main_video_tele_dialer_pane_t1_ParamLimits

0x5704,	// (0x00013638) main_video_tele_dialer_pane_t1

0x571d,	// (0x00013651) main_video_tele_dialer_pane_t2_ParamLimits

0x571d,	// (0x00013651) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x0001d7d9) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x0001d7d9) main_video_tele_dialer_pane_t

0x5cd9,	// (0x00013c0d) cam4_autofocus_pane_ParamLimits

0x5cd9,	// (0x00013c0d) cam4_autofocus_pane

0x5cef,	// (0x00013c23) cam4_image_uncrop_pane_ParamLimits

0x5cef,	// (0x00013c23) cam4_image_uncrop_pane

0x5d08,	// (0x00013c3c) cam4_indicators_pane_ParamLimits

0x5d08,	// (0x00013c3c) cam4_indicators_pane

0x5d37,	// (0x00013c6b) main_camera4_pane_g1_ParamLimits

0x5d37,	// (0x00013c6b) main_camera4_pane_g1

0x5d4a,	// (0x00013c7e) main_camera4_pane_g2_ParamLimits

0x5d4a,	// (0x00013c7e) main_camera4_pane_g2

0x5d5d,	// (0x00013c91) main_camera4_pane_g3_ParamLimits

0x5d5d,	// (0x00013c91) main_camera4_pane_g3

0x5d70,	// (0x00013ca4) main_camera4_pane_g4_ParamLimits

0x5d70,	// (0x00013ca4) main_camera4_pane_g4

0x5d83,	// (0x00013cb7) main_camera4_pane_g5_ParamLimits

0x5d83,	// (0x00013cb7) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0001d82a) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0001d82a) main_camera4_pane_g

0x5da7,	// (0x00013cdb) main_camera4_pane_t1_ParamLimits

0x5da7,	// (0x00013cdb) main_camera4_pane_t1

0xc537,	// (0x0001a46b) bg_tb_trans_pane_cp06

0xcf7c,	// (0x0001aeb0) cam4_indicators_pane_g1

0xcf8c,	// (0x0001aec0) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0001d845) cam4_indicators_pane_g

0xcfa4,	// (0x0001aed8) cam4_indicators_pane_t1

0x5e0b,	// (0x00013d3f) main_video4_pane_g1_ParamLimits

0x5e0b,	// (0x00013d3f) main_video4_pane_g1

0x5e1e,	// (0x00013d52) main_video4_pane_g2_ParamLimits

0x5e1e,	// (0x00013d52) main_video4_pane_g2

0x5e32,	// (0x00013d66) main_video4_pane_g3_ParamLimits

0x5e32,	// (0x00013d66) main_video4_pane_g3

0x5e46,	// (0x00013d7a) main_video4_pane_g4_ParamLimits

0x5e46,	// (0x00013d7a) main_video4_pane_g4

0x0004,

0xf918,	// (0x0001d84c) main_video4_pane_g_ParamLimits

0xf918,	// (0x0001d84c) main_video4_pane_g

0x5e6e,	// (0x00013da2) vid4_indicators_pane_ParamLimits

0x5e6e,	// (0x00013da2) vid4_indicators_pane

0x5e9e,	// (0x00013dd2) video4_image_uncrop_cif_pane_ParamLimits

0x5e9e,	// (0x00013dd2) video4_image_uncrop_cif_pane

0x5eb8,	// (0x00013dec) video4_image_uncrop_nhd_pane_ParamLimits

0x5eb8,	// (0x00013dec) video4_image_uncrop_nhd_pane

0x5cef,	// (0x00013c23) video4_image_uncrop_vga_pane_ParamLimits

0x5cef,	// (0x00013c23) video4_image_uncrop_vga_pane

0xce06,	// (0x0001ad3a) bg_tb_trans_pane_cp07

0x5ece,	// (0x00013e02) vid4_indicators_pane_g1

0x5edd,	// (0x00013e11) vid4_indicators_pane_g2

0x5eec,	// (0x00013e20) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0001d857) vid4_indicators_pane_g

0x5f11,	// (0x00013e45) vid4_indicators_pane_t1

0x5f25,	// (0x00013e59) cam4_autofocus_pane_g1

0x5f2d,	// (0x00013e61) cam4_autofocus_pane_g2

0x5f35,	// (0x00013e69) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0001d862) cam4_autofocus_pane_g

0x5f3d,	// (0x00013e71) cam4_autofocus_pane_g3_copy1

0x574a,	// (0x0001367e) video_down_pane_cp_t1

0x5758,	// (0x0001368c) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0001d7de) video_down_pane_cp_t

0x9451,	// (0x00017385) popup_vitu2_window_ParamLimits

0x9451,	// (0x00017385) popup_vitu2_window

0x5f45,	// (0x00013e79) aid_size_cell2_itu2_ParamLimits

0x5f45,	// (0x00013e79) aid_size_cell2_itu2

0x5f6b,	// (0x00013e9f) aid_size_cell_itu2_ParamLimits

0x5f6b,	// (0x00013e9f) aid_size_cell_itu2

0x5fc9,	// (0x00013efd) bg_popup_window_pane_cp09_ParamLimits

0x5fc9,	// (0x00013efd) bg_popup_window_pane_cp09

0x5fd7,	// (0x00013f0b) field_vitu2_entry_pane_ParamLimits

0x5fd7,	// (0x00013f0b) field_vitu2_entry_pane

0x5fff,	// (0x00013f33) grid_vitu2_function_pane_ParamLimits

0x5fff,	// (0x00013f33) grid_vitu2_function_pane

0x6050,	// (0x00013f84) grid_vitu2_itu_pane_ParamLimits

0x6050,	// (0x00013f84) grid_vitu2_itu_pane

0x60db,	// (0x0001400f) cell_vitu2_itu_pane_ParamLimits

0x60db,	// (0x0001400f) cell_vitu2_itu_pane

0x6101,	// (0x00014035) cell_vitu2_function_pane_ParamLimits

0x6101,	// (0x00014035) cell_vitu2_function_pane

0xcfd4,	// (0x0001af08) bg_popup_call_pane_cp08_ParamLimits

0xcfd4,	// (0x0001af08) bg_popup_call_pane_cp08

0xcfed,	// (0x0001af21) field_vitu2_entry_pane_g1

0xcff9,	// (0x0001af2d) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0001d869) field_vitu2_entry_pane_g

0x6145,	// (0x00014079) field_vitu2_entry_pane_t1_ParamLimits

0x6145,	// (0x00014079) field_vitu2_entry_pane_t1

0xd013,	// (0x0001af47) field_vitu2_entry_pane_t2_ParamLimits

0xd013,	// (0x0001af47) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0001d870) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0001d870) field_vitu2_entry_pane_t

0x6174,	// (0x000140a8) bg_button_pane_cp010_ParamLimits

0x6174,	// (0x000140a8) bg_button_pane_cp010

0x6182,	// (0x000140b6) cell_vitu2_itu_pane_g1

0x61a0,	// (0x000140d4) cell_vitu2_itu_pane_t1_ParamLimits

0x61a0,	// (0x000140d4) cell_vitu2_itu_pane_t1

0x6206,	// (0x0001413a) cell_vitu2_itu_pane_t2_ParamLimits

0x6206,	// (0x0001413a) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x0001d87a) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x0001d87a) cell_vitu2_itu_pane_t

0x9451,	// (0x00017385) bg_button_pane_cp011

0x62e2,	// (0x00014216) cell_vitu2_function_pane_g1

0x93e0,	// (0x00017314) main_myfav_hc_pane

0x5b16,	// (0x00013a4a) popup_image3_note_pane_ParamLimits

0x5b16,	// (0x00013a4a) popup_image3_note_pane

0x5b32,	// (0x00013a66) popup_image3_tool_bar_pane_ParamLimits

0x5b32,	// (0x00013a66) popup_image3_tool_bar_pane

0x628a,	// (0x000141be) cell_vitu2_itu_pane_t3_ParamLimits

0x628a,	// (0x000141be) cell_vitu2_itu_pane_t3

0x93e0,	// (0x00017314) bg_popup_trans_pane

0xd038,	// (0x0001af6c) grid_image3_tool_bar_pane

0xd042,	// (0x0001af76) bg_popup_trans_pane_g1

0xa1a1,	// (0x000180d5) bg_popup_trans_pane_g2

0xd04a,	// (0x0001af7e) bg_popup_trans_pane_g3

0xd052,	// (0x0001af86) bg_popup_trans_pane_g4

0xd05a,	// (0x0001af8e) bg_popup_trans_pane_g5

0xd062,	// (0x0001af96) bg_popup_trans_pane_g6

0xd06a,	// (0x0001af9e) bg_popup_trans_pane_g7

0xd072,	// (0x0001afa6) bg_popup_trans_pane_g8

0xa181,	// (0x000180b5) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0001d881) bg_popup_trans_pane_g

0xd07a,	// (0x0001afae) cell_image3_tool_bar_pane_ParamLimits

0xd07a,	// (0x0001afae) cell_image3_tool_bar_pane

0xc307,	// (0x0001a23b) cell_image3_tool_bar_pane_g1

0x93e0,	// (0x00017314) bg_popup_trans_pane_cp1

0xd090,	// (0x0001afc4) popup_image3_note_pane_t1

0xd09e,	// (0x0001afd2) popup_image3_note_pane_t2

0xd0ac,	// (0x0001afe0) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0001d894) popup_image3_note_pane_t

0xd0bc,	// (0x0001aff0) popup_image3_note_pane_t3_copy1

0x62f6,	// (0x0001422a) bg_myfav_hc_instruction_pane_ParamLimits

0x62f6,	// (0x0001422a) bg_myfav_hc_instruction_pane

0x630e,	// (0x00014242) cell_myfav_contact_pane_ParamLimits

0x630e,	// (0x00014242) cell_myfav_contact_pane

0x632a,	// (0x0001425e) cell_myfav_contact_pane_cp1_ParamLimits

0x632a,	// (0x0001425e) cell_myfav_contact_pane_cp1

0x6342,	// (0x00014276) cell_myfav_contact_pane_cp2_ParamLimits

0x6342,	// (0x00014276) cell_myfav_contact_pane_cp2

0x635a,	// (0x0001428e) cell_myfav_contact_pane_cp3_ParamLimits

0x635a,	// (0x0001428e) cell_myfav_contact_pane_cp3

0x6371,	// (0x000142a5) cell_myfav_contact_pane_cp4_ParamLimits

0x6371,	// (0x000142a5) cell_myfav_contact_pane_cp4

0x6389,	// (0x000142bd) cell_myfav_contact_pane_cp5_ParamLimits

0x6389,	// (0x000142bd) cell_myfav_contact_pane_cp5

0x639d,	// (0x000142d1) cell_myfav_contact_pane_cp6_ParamLimits

0x639d,	// (0x000142d1) cell_myfav_contact_pane_cp6

0x63b3,	// (0x000142e7) cell_myfav_contact_pane_cp7_ParamLimits

0x63b3,	// (0x000142e7) cell_myfav_contact_pane_cp7

0xd0ca,	// (0x0001affe) listscroll_gen_pane_cp05

0x63cb,	// (0x000142ff) main_myfav_hc_pane_g1_ParamLimits

0x63cb,	// (0x000142ff) main_myfav_hc_pane_g1

0x63e5,	// (0x00014319) main_myfav_hc_pane_g2_ParamLimits

0x63e5,	// (0x00014319) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x0001d89b) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x0001d89b) main_myfav_hc_pane_g

0x6419,	// (0x0001434d) main_myfav_hc_pane_t1_ParamLimits

0x6419,	// (0x0001434d) main_myfav_hc_pane_t1

0xd0d3,	// (0x0001b007) main_myfav_hc_pane_t2_ParamLimits

0xd0d3,	// (0x0001b007) main_myfav_hc_pane_t2

0xd0e5,	// (0x0001b019) main_myfav_hc_pane_t3_ParamLimits

0xd0e5,	// (0x0001b019) main_myfav_hc_pane_t3

0x6430,	// (0x00014364) main_myfav_hc_pane_t4_ParamLimits

0x6430,	// (0x00014364) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0001d8a2) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0001d8a2) main_myfav_hc_pane_t

0xc307,	// (0x0001a23b) bg_myfav_hc_instruction_pane_g1

0xd0f7,	// (0x0001b02b) cell_myfav_contact_pane_g1_ParamLimits

0xd0f7,	// (0x0001b02b) cell_myfav_contact_pane_g1

0xd0f7,	// (0x0001b02b) cell_myfav_contact_pane_g2_ParamLimits

0xd0f7,	// (0x0001b02b) cell_myfav_contact_pane_g2

0xd103,	// (0x0001b037) cell_myfav_contact_pane_g3_ParamLimits

0xd103,	// (0x0001b037) cell_myfav_contact_pane_g3

0xc5a8,	// (0x0001a4dc) cell_myfav_contact_pane_g4_ParamLimits

0xc5a8,	// (0x0001a4dc) cell_myfav_contact_pane_g4

0xd110,	// (0x0001b044) cell_myfav_contact_pane_g5_ParamLimits

0xd110,	// (0x0001b044) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x0001d8ad) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x0001d8ad) cell_myfav_contact_pane_g

0x63ff,	// (0x00014333) main_myfav_hc_pane_g3_ParamLimits

0x63ff,	// (0x00014333) main_myfav_hc_pane_g3

0x0a65,	// (0x0000e999) popup_adpt_find_window

0x645a,	// (0x0001438e) afind_page_pane_ParamLimits

0x645a,	// (0x0001438e) afind_page_pane

0x646f,	// (0x000143a3) aid_size_cell_afind_ParamLimits

0x646f,	// (0x000143a3) aid_size_cell_afind

0x648d,	// (0x000143c1) bg_popup_sub_pane_cp09_ParamLimits

0x648d,	// (0x000143c1) bg_popup_sub_pane_cp09

0x649a,	// (0x000143ce) find_pane_cp01_ParamLimits

0x649a,	// (0x000143ce) find_pane_cp01

0xd11c,	// (0x0001b050) grid_afind_control_pane_ParamLimits

0xd11c,	// (0x0001b050) grid_afind_control_pane

0x64a7,	// (0x000143db) grid_afind_pane_ParamLimits

0x64a7,	// (0x000143db) grid_afind_pane

0x64c9,	// (0x000143fd) cell_afind_pane_ParamLimits

0x64c9,	// (0x000143fd) cell_afind_pane

0xc307,	// (0x0001a23b) afind_page_pane_g1

0x652c,	// (0x00014460) afind_page_pane_g2

0x6535,	// (0x00014469) afind_page_pane_g3

0x0002,

0xf984,	// (0x0001d8b8) afind_page_pane_g

0x653e,	// (0x00014472) afind_page_pane_t1

0xd130,	// (0x0001b064) cell_afind_grid_control_pane_ParamLimits

0xd130,	// (0x0001b064) cell_afind_grid_control_pane

0xce4f,	// (0x0001ad83) bg_button_pane_cp69_ParamLimits

0xce4f,	// (0x0001ad83) bg_button_pane_cp69

0x655e,	// (0x00014492) cell_afind_pane_g1_ParamLimits

0x655e,	// (0x00014492) cell_afind_pane_g1

0x656b,	// (0x0001449f) cell_afind_pane_t1_ParamLimits

0x656b,	// (0x0001449f) cell_afind_pane_t1

0x9ed8,	// (0x00017e0c) bg_button_pane_cp72

0xd13f,	// (0x0001b073) cell_afind_grid_control_pane_g1

0x33a2,	// (0x000112d6) aid_image_placing_area_ParamLimits

0x33a2,	// (0x000112d6) aid_image_placing_area

0xc8ad,	// (0x0001a7e1) field_vitu_entry_pane_g1_ParamLimits

0xc8ad,	// (0x0001a7e1) field_vitu_entry_pane_g1

0xc8b9,	// (0x0001a7ed) field_vitu_entry_pane_g2_ParamLimits

0xc8b9,	// (0x0001a7ed) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0001d769) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0001d769) field_vitu_entry_pane_g

0x555e,	// (0x00013492) cell_vitu_itu_pane_g1_ParamLimits

0x55a0,	// (0x000134d4) cell_vitu_itu_pane_t3_ParamLimits

0x55a0,	// (0x000134d4) cell_vitu_itu_pane_t3

0xcdc8,	// (0x0001acfc) mp4_progress_pane_t1_ParamLimits

0xcde1,	// (0x0001ad15) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x0001d7fe) mp4_progress_pane_t_ParamLimits

0xcdfa,	// (0x0001ad2e) mup_progress_pane_cp04_ParamLimits

0x6444,	// (0x00014378) main_myfav_hc_pane_t5_ParamLimits

0x6444,	// (0x00014378) main_myfav_hc_pane_t5

0x9406,	// (0x0001733a) aid_zoom_text_primary

0x0a65,	// (0x0000e999) popup_adpt_find_window_ParamLimits

0x9451,	// (0x00017385) main_cam_set_pane

0x5d21,	// (0x00013c55) cam4_zoom_pane_ParamLimits

0x5d21,	// (0x00013c55) cam4_zoom_pane

0x657d,	// (0x000144b1) main_cam_set_pane_g1_ParamLimits

0x657d,	// (0x000144b1) main_cam_set_pane_g1

0x658b,	// (0x000144bf) main_cam_set_pane_g2_ParamLimits

0x658b,	// (0x000144bf) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x0001d8bf) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x0001d8bf) main_cam_set_pane_g

0x65ae,	// (0x000144e2) main_cam_set_pane_t1_ParamLimits

0x65ae,	// (0x000144e2) main_cam_set_pane_t1

0x65c9,	// (0x000144fd) main_cset_listscroll_pane_ParamLimits

0x65c9,	// (0x000144fd) main_cset_listscroll_pane

0x65ed,	// (0x00014521) main_cset_slider_pane_ParamLimits

0x65ed,	// (0x00014521) main_cset_slider_pane

0xd150,	// (0x0001b084) main_cset_list_pane_ParamLimits

0xd150,	// (0x0001b084) main_cset_list_pane

0xd160,	// (0x0001b094) scroll_pane_cp028

0x6617,	// (0x0001454b) aid_area_touch_slider

0x6633,	// (0x00014567) cset_slider_pane

0x665d,	// (0x00014591) main_cset_slider_pane_g1

0x6672,	// (0x000145a6) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x0001d8c4) main_cset_slider_pane_g

0xd199,	// (0x0001b0cd) main_cset_slider_pane_t1

0x6734,	// (0x00014668) main_cset_slider_pane_t2

0x674e,	// (0x00014682) main_cset_slider_pane_t3

0x6768,	// (0x0001469c) main_cset_slider_pane_t4

0x6782,	// (0x000146b6) main_cset_slider_pane_t5

0x67a0,	// (0x000146d4) main_cset_slider_pane_t6

0x67b7,	// (0x000146eb) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x0001d8e9) main_cset_slider_pane_t

0x68c3,	// (0x000147f7) cset_list_set_pane_ParamLimits

0x68c3,	// (0x000147f7) cset_list_set_pane

0x68d7,	// (0x0001480b) aid_position_infowindow_above

0x68df,	// (0x00014813) aid_position_infowindow_below

0x68e7,	// (0x0001481b) cset_list_set_pane_g1_ParamLimits

0x68e7,	// (0x0001481b) cset_list_set_pane_g1

0x68f3,	// (0x00014827) cset_list_set_pane_g3_ParamLimits

0x68f3,	// (0x00014827) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0001d908) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0001d908) cset_list_set_pane_g

0x6902,	// (0x00014836) cset_list_set_pane_t1_ParamLimits

0x6902,	// (0x00014836) cset_list_set_pane_t1

0x9451,	// (0x00017385) list_highlight_pane_cp021_ParamLimits

0x9451,	// (0x00017385) list_highlight_pane_cp021

0xaa7f,	// (0x000189b3) cset_slider_pane_g1

0xaa91,	// (0x000189c5) cset_slider_pane_g2

0xaa88,	// (0x000189bc) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x0001d90d) cset_slider_pane_g

0xd239,	// (0x0001b16d) aid_area_touch_cam4_zoom

0xd241,	// (0x0001b175) cam4_zoom_cont_pane

0xd249,	// (0x0001b17d) cam4_zoom_pane_g1

0xd251,	// (0x0001b185) cam4_zoom_pane_g2

0x6914,	// (0x00014848) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x0001d914) cam4_zoom_pane_g

0xd259,	// (0x0001b18d) cam4_zoom_cont_pane_g1

0xd262,	// (0x0001b196) cam4_zoom_cont_pane_g2

0xd26b,	// (0x0001b19f) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x0001d91b) cam4_zoom_cont_pane_g

0x5b9e,	// (0x00013ad2) call4_image_pane_ParamLimits

0x5b9e,	// (0x00013ad2) call4_image_pane

0xce8f,	// (0x0001adc3) call4_windows_conf_pane_ParamLimits

0xceaa,	// (0x0001adde) popup_call4_audio_in_window_ParamLimits

0xceaa,	// (0x0001adde) popup_call4_audio_in_window

0x93e0,	// (0x00017314) bg_popup_call2_act_pane_cp02

0xcf0c,	// (0x0001ae40) call4_list_conf_pane

0xc307,	// (0x0001a23b) call4_image_pane_g1

0xc307,	// (0x0001a23b) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0001d62f) call4_image_pane_g

0xd274,	// (0x0001b1a8) list_single_graphic_popup_conf4_pane_ParamLimits

0xd274,	// (0x0001b1a8) list_single_graphic_popup_conf4_pane

0x93e0,	// (0x00017314) list_highlight_pane_cp022

0xd289,	// (0x0001b1bd) list_single_graphic_popup_conf4_pane_g1

0xa759,	// (0x0001868d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x0001d922) list_single_graphic_popup_conf4_pane_g

0xd291,	// (0x0001b1c5) list_single_graphic_popup_conf4_pane_t1

0x18c8,	// (0x0000f7fc) popup_vtel_slider_window_ParamLimits

0x18c8,	// (0x0000f7fc) popup_vtel_slider_window

0xce3d,	// (0x0001ad71) dialer2_ne_pane_t2_ParamLimits

0xce3d,	// (0x0001ad71) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0001d803) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0001d803) dialer2_ne_pane_t

0xc0e6,	// (0x0001a01a) bg_popup_sub_pane_cp010_ParamLimits

0xc0e6,	// (0x0001a01a) bg_popup_sub_pane_cp010

0x691c,	// (0x00014850) popup_vtel_slider_window_g1_ParamLimits

0x691c,	// (0x00014850) popup_vtel_slider_window_g1

0x692f,	// (0x00014863) popup_vtel_slider_window_g2_ParamLimits

0x692f,	// (0x00014863) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0001d927) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0001d927) popup_vtel_slider_window_g

0x6985,	// (0x000148b9) vtel_slider_pane_ParamLimits

0x6985,	// (0x000148b9) vtel_slider_pane

0x69a7,	// (0x000148db) vtel_slider_pane_g1_ParamLimits

0x69a7,	// (0x000148db) vtel_slider_pane_g1

0x69bb,	// (0x000148ef) vtel_slider_pane_g2_ParamLimits

0x69bb,	// (0x000148ef) vtel_slider_pane_g2

0x69d3,	// (0x00014907) vtel_slider_pane_g3_ParamLimits

0x69d3,	// (0x00014907) vtel_slider_pane_g3

0x69a7,	// (0x000148db) vtel_slider_pane_g4_ParamLimits

0x69a7,	// (0x000148db) vtel_slider_pane_g4

0x69e9,	// (0x0001491d) vtel_slider_pane_g5_ParamLimits

0x69e9,	// (0x0001491d) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x0001d930) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x0001d930) vtel_slider_pane_g

0x93e0,	// (0x00017314) main_gallery2_pane

0x5f97,	// (0x00013ecb) aid_size_row_itut2_dropdow_list_ParamLimits

0x5f97,	// (0x00013ecb) aid_size_row_itut2_dropdow_list

0x6027,	// (0x00013f5b) grid_vitu2_function_top_pane_ParamLimits

0x6027,	// (0x00013f5b) grid_vitu2_function_top_pane

0x6086,	// (0x00013fba) popup_vitu2_dropdown_list_window_ParamLimits

0x6086,	// (0x00013fba) popup_vitu2_dropdown_list_window

0x60af,	// (0x00013fe3) popup_vitu2_match_list_window

0x69ff,	// (0x00014933) cell_vitu2_function_top_pane_ParamLimits

0x69ff,	// (0x00014933) cell_vitu2_function_top_pane

0x6a1f,	// (0x00014953) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6a1f,	// (0x00014953) cell_vitu2_function_top_pane_cp01

0x6a3d,	// (0x00014971) cell_vitu2_function_top_wide_pane_ParamLimits

0x6a3d,	// (0x00014971) cell_vitu2_function_top_wide_pane

0x9451,	// (0x00017385) bg_button_pane_cp012

0x6a5b,	// (0x0001498f) cell_vitu2_function_top_pane_g1

0xd2b5,	// (0x0001b1e9) bg_button_pane_cp013_ParamLimits

0xd2b5,	// (0x0001b1e9) bg_button_pane_cp013

0x6a6f,	// (0x000149a3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6a6f,	// (0x000149a3) cell_vitu2_function_top_wide_pane_g1

0x9451,	// (0x00017385) bg_popup_sub_pane_cp20

0x6a87,	// (0x000149bb) list_vitu2_match_list_pane

0xd042,	// (0x0001af76) bg_popup_sub_pane_cp20_g1

0xd04a,	// (0x0001af7e) bg_popup_sub_pane_cp20_g2

0xa1a1,	// (0x000180d5) bg_popup_sub_pane_cp20_g3

0xd052,	// (0x0001af86) bg_popup_sub_pane_cp20_g4

0xa181,	// (0x000180b5) bg_popup_sub_pane_cp20_g5

0xd2d1,	// (0x0001b205) bg_popup_sub_pane_cp20_g6

0xd062,	// (0x0001af96) bg_popup_sub_pane_cp20_g7

0xd06a,	// (0x0001af9e) bg_popup_sub_pane_cp20_g8

0xd072,	// (0x0001afa6) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x0001d93b) bg_popup_sub_pane_cp20_g

0xd2d9,	// (0x0001b20d) list_vitu2_match_list_item_pane_ParamLimits

0xd2d9,	// (0x0001b20d) list_vitu2_match_list_item_pane

0xd2eb,	// (0x0001b21f) list_vitu2_match_list_item_pane_t1

0x93e0,	// (0x00017314) bg_popup_sub_pane_cp21

0xa613,	// (0x00018547) grid_vitu2_dropdown_list_pane

0x6ad7,	// (0x00014a0b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6ad7,	// (0x00014a0b) cell_vitu2_dropdown_list_char_pane

0x6afa,	// (0x00014a2e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6afa,	// (0x00014a2e) cell_vitu2_dropdown_list_ctrl_pane

0xd311,	// (0x0001b245) cell_vitu2_dropdown_list_char_pane_g1

0xd31a,	// (0x0001b24e) cell_vitu2_dropdown_list_char_pane_g2

0xd323,	// (0x0001b257) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x0001d958) cell_vitu2_dropdown_list_char_pane_g

0x6b28,	// (0x00014a5c) cell_vitu2_dropdown_list_char_pane_t1

0x6b36,	// (0x00014a6a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6b36,	// (0x00014a6a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6b46,	// (0x00014a7a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6b46,	// (0x00014a7a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6b57,	// (0x00014a8b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6b57,	// (0x00014a8b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6b67,	// (0x00014a9b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6b67,	// (0x00014a9b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc537,	// (0x0001a46b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc537,	// (0x0001a46b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x0001d95f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x0001d95f) cell_vitu2_dropdown_list_ctrl_pane_g

0x6b83,	// (0x00014ab7) aid_size_cell_gallery2_ParamLimits

0x6b83,	// (0x00014ab7) aid_size_cell_gallery2

0x6b99,	// (0x00014acd) grid_gallery2_pane_ParamLimits

0x6b99,	// (0x00014acd) grid_gallery2_pane

0x6bad,	// (0x00014ae1) scroll_pane_cp029_ParamLimits

0x6bad,	// (0x00014ae1) scroll_pane_cp029

0x6bb9,	// (0x00014aed) cell_gallery2_pane_ParamLimits

0x6bb9,	// (0x00014aed) cell_gallery2_pane

0xd32c,	// (0x0001b260) cell_gallery2_pane_g2

0x6bf3,	// (0x00014b27) cell_gallery2_pane_g3

0xd336,	// (0x0001b26a) cell_gallery2_pane_g4

0xd33e,	// (0x0001b272) cell_gallery2_pane_g5

0xa927,	// (0x0001885b) grid_highlight_pane_cp10

0x60af,	// (0x00013fe3) popup_vitu2_match_list_window_ParamLimits

0x60c6,	// (0x00013ffa) popup_vitu2_query_window_ParamLimits

0x60c6,	// (0x00013ffa) popup_vitu2_query_window

0x93e0,	// (0x00017314) bg_vitu2_candi_button_pane

0xd311,	// (0x0001b245) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd31a,	// (0x0001b24e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd323,	// (0x0001b257) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6bfb,	// (0x00014b2f) bg_button_pane_cp015

0x6c0f,	// (0x00014b43) bg_button_pane_cp016

0x6c22,	// (0x00014b56) bg_button_pane_cp017

0xbdd2,	// (0x00019d06) bg_popup_sub_pane_cp22

0xd346,	// (0x0001b27a) popup_vitu2_query_window_g1

0x6c67,	// (0x00014b9b) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x0001d96a) popup_vitu2_query_window_g

0x6c86,	// (0x00014bba) popup_vitu2_query_window_t1_ParamLimits

0x6c86,	// (0x00014bba) popup_vitu2_query_window_t1

0x6cbb,	// (0x00014bef) popup_vitu2_query_window_t2_ParamLimits

0x6cbb,	// (0x00014bef) popup_vitu2_query_window_t2

0x6ccd,	// (0x00014c01) popup_vitu2_query_window_t3_ParamLimits

0x6ccd,	// (0x00014c01) popup_vitu2_query_window_t3

0x6cf5,	// (0x00014c29) popup_vitu2_query_window_t4_ParamLimits

0x6cf5,	// (0x00014c29) popup_vitu2_query_window_t4

0x6d16,	// (0x00014c4a) popup_vitu2_query_window_t5_ParamLimits

0x6d16,	// (0x00014c4a) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x0001d971) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x0001d971) popup_vitu2_query_window_t

0xd148,	// (0x0001b07c) main_cset_text_pane

0x6617,	// (0x0001454b) aid_area_touch_slider_ParamLimits

0x6633,	// (0x00014567) cset_slider_pane_ParamLimits

0x665d,	// (0x00014591) main_cset_slider_pane_g1_ParamLimits

0x6672,	// (0x000145a6) main_cset_slider_pane_g2_ParamLimits

0xd169,	// (0x0001b09d) main_cset_slider_pane_g3_ParamLimits

0xd169,	// (0x0001b09d) main_cset_slider_pane_g3

0x6687,	// (0x000145bb) main_cset_slider_pane_g4_ParamLimits

0x6687,	// (0x000145bb) main_cset_slider_pane_g4

0x6696,	// (0x000145ca) main_cset_slider_pane_g5_ParamLimits

0x6696,	// (0x000145ca) main_cset_slider_pane_g5

0x66a4,	// (0x000145d8) main_cset_slider_pane_g6_ParamLimits

0x66a4,	// (0x000145d8) main_cset_slider_pane_g6

0xf990,	// (0x0001d8c4) main_cset_slider_pane_g_ParamLimits

0xd199,	// (0x0001b0cd) main_cset_slider_pane_t1_ParamLimits

0x6734,	// (0x00014668) main_cset_slider_pane_t2_ParamLimits

0x674e,	// (0x00014682) main_cset_slider_pane_t3_ParamLimits

0x6768,	// (0x0001469c) main_cset_slider_pane_t4_ParamLimits

0x6782,	// (0x000146b6) main_cset_slider_pane_t5_ParamLimits

0x67a0,	// (0x000146d4) main_cset_slider_pane_t6_ParamLimits

0x67b7,	// (0x000146eb) main_cset_slider_pane_t7_ParamLimits

0x67e5,	// (0x00014719) main_cset_slider_pane_t8_ParamLimits

0x67e5,	// (0x00014719) main_cset_slider_pane_t8

0x680d,	// (0x00014741) main_cset_slider_pane_t9_ParamLimits

0x680d,	// (0x00014741) main_cset_slider_pane_t9

0x6835,	// (0x00014769) main_cset_slider_pane_t10_ParamLimits

0x6835,	// (0x00014769) main_cset_slider_pane_t10

0x685d,	// (0x00014791) main_cset_slider_pane_t11_ParamLimits

0x685d,	// (0x00014791) main_cset_slider_pane_t11

0x6887,	// (0x000147bb) main_cset_slider_pane_t12_ParamLimits

0x6887,	// (0x000147bb) main_cset_slider_pane_t12

0x68a4,	// (0x000147d8) main_cset_slider_pane_t13_ParamLimits

0x68a4,	// (0x000147d8) main_cset_slider_pane_t13

0xf9b5,	// (0x0001d8e9) main_cset_slider_pane_t_ParamLimits

0x93e0,	// (0x00017314) bg_popup_sub_pane_cp011

0xd352,	// (0x0001b286) main_cset_text_pane_g1

0xd35a,	// (0x0001b28e) main_cset_text_pane_t1

0xd368,	// (0x0001b29c) main_cset_text_pane_t2

0xd376,	// (0x0001b2aa) main_cset_text_pane_t3

0xd384,	// (0x0001b2b8) main_cset_text_pane_t4

0xd392,	// (0x0001b2c6) main_cset_text_pane_t5

0xd3a0,	// (0x0001b2d4) main_cset_text_pane_t6

0xd3ae,	// (0x0001b2e2) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x0001d980) main_cset_text_pane_t

0x93e0,	// (0x00017314) main_cam4_burst_pane

0x93e0,	// (0x00017314) main_cam5_pane

0x654c,	// (0x00014480) bg_button_pane_cp019

0x6555,	// (0x00014489) bg_button_pane_cp020

0xd175,	// (0x0001b0a9) main_cset_slider_pane_g7_ParamLimits

0xd175,	// (0x0001b0a9) main_cset_slider_pane_g7

0xd181,	// (0x0001b0b5) main_cset_slider_pane_g8_ParamLimits

0xd181,	// (0x0001b0b5) main_cset_slider_pane_g8

0x66b8,	// (0x000145ec) main_cset_slider_pane_g9_ParamLimits

0x66b8,	// (0x000145ec) main_cset_slider_pane_g9

0x66c4,	// (0x000145f8) main_cset_slider_pane_g10_ParamLimits

0x66c4,	// (0x000145f8) main_cset_slider_pane_g10

0x66d0,	// (0x00014604) main_cset_slider_pane_g11_ParamLimits

0x66d0,	// (0x00014604) main_cset_slider_pane_g11

0x66dc,	// (0x00014610) main_cset_slider_pane_g12_ParamLimits

0x66dc,	// (0x00014610) main_cset_slider_pane_g12

0x66e8,	// (0x0001461c) main_cset_slider_pane_g13_ParamLimits

0x66e8,	// (0x0001461c) main_cset_slider_pane_g13

0x66f4,	// (0x00014628) main_cset_slider_pane_g14_ParamLimits

0x66f4,	// (0x00014628) main_cset_slider_pane_g14

0x6700,	// (0x00014634) main_cset_slider_pane_g15_ParamLimits

0x6700,	// (0x00014634) main_cset_slider_pane_g15

0xd1c7,	// (0x0001b0fb) main_cset_slider_pane_t14_ParamLimits

0xd1c7,	// (0x0001b0fb) main_cset_slider_pane_t14

0xd200,	// (0x0001b134) main_cset_slider_pane_t15_ParamLimits

0xd200,	// (0x0001b134) main_cset_slider_pane_t15

0x6d8d,	// (0x00014cc1) aid_cam4_burst_size_cell_ParamLimits

0x6d8d,	// (0x00014cc1) aid_cam4_burst_size_cell

0x6dad,	// (0x00014ce1) grid_cam4_burst_pane_ParamLimits

0x6dad,	// (0x00014ce1) grid_cam4_burst_pane

0x6de7,	// (0x00014d1b) linegrid_cam4_burst_pane_ParamLimits

0x6de7,	// (0x00014d1b) linegrid_cam4_burst_pane

0xd3bc,	// (0x0001b2f0) scroll_pane_cp30_ParamLimits

0xd3bc,	// (0x0001b2f0) scroll_pane_cp30

0x6e09,	// (0x00014d3d) cell_cam4_burst_pane_ParamLimits

0x6e09,	// (0x00014d3d) cell_cam4_burst_pane

0xd3c8,	// (0x0001b2fc) linegrid_cam4_burst_pane_g1_ParamLimits

0xd3c8,	// (0x0001b2fc) linegrid_cam4_burst_pane_g1

0x6e5e,	// (0x00014d92) linegrid_cam4_burst_pane_g2_ParamLimits

0x6e5e,	// (0x00014d92) linegrid_cam4_burst_pane_g2

0xd3d5,	// (0x0001b309) linegrid_cam4_burst_pane_g3_ParamLimits

0xd3d5,	// (0x0001b309) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x0001d98f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0001d98f) linegrid_cam4_burst_pane_g

0x6e6f,	// (0x00014da3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6e6f,	// (0x00014da3) linegrid_cam4_burst_pane_g3_copy1

0xd3e2,	// (0x0001b316) linegrid_cam4_burst_pane_g4_ParamLimits

0xd3e2,	// (0x0001b316) linegrid_cam4_burst_pane_g4

0x6e8d,	// (0x00014dc1) linegrid_cam4_burst_pane_g5_ParamLimits

0x6e8d,	// (0x00014dc1) linegrid_cam4_burst_pane_g5

0x6e9e,	// (0x00014dd2) linegrid_cam4_burst_pane_g6_ParamLimits

0x6e9e,	// (0x00014dd2) linegrid_cam4_burst_pane_g6

0xd3ef,	// (0x0001b323) linegrid_cam4_burst_pane_g7_ParamLimits

0xd3ef,	// (0x0001b323) linegrid_cam4_burst_pane_g7

0x6eb5,	// (0x00014de9) cell_cam4_burst_pane_g1

0xd408,	// (0x0001b33c) main_cam5_pane_t1_ParamLimits

0xd408,	// (0x0001b33c) main_cam5_pane_t1

0xd41a,	// (0x0001b34e) main_cam5_pane_t2_ParamLimits

0xd41a,	// (0x0001b34e) main_cam5_pane_t2

0xd42c,	// (0x0001b360) main_cam5_pane_t3_ParamLimits

0xd42c,	// (0x0001b360) main_cam5_pane_t3

0xd43e,	// (0x0001b372) main_cam5_pane_t4_ParamLimits

0xd43e,	// (0x0001b372) main_cam5_pane_t4

0xd456,	// (0x0001b38a) main_cam5_pane_t5_ParamLimits

0xd456,	// (0x0001b38a) main_cam5_pane_t5

0xd46a,	// (0x0001b39e) main_cam5_pane_t6_ParamLimits

0xd46a,	// (0x0001b39e) main_cam5_pane_t6

0xd47e,	// (0x0001b3b2) main_cam5_pane_t7_ParamLimits

0xd47e,	// (0x0001b3b2) main_cam5_pane_t7

0xd490,	// (0x0001b3c4) main_cam5_pane_t8_ParamLimits

0xd490,	// (0x0001b3c4) main_cam5_pane_t8

0xd4ae,	// (0x0001b3e2) main_cam5_pane_t9_ParamLimits

0xd4ae,	// (0x0001b3e2) main_cam5_pane_t9

0xd4c0,	// (0x0001b3f4) main_cam5_pane_t10_ParamLimits

0xd4c0,	// (0x0001b3f4) main_cam5_pane_t10

0xd4d2,	// (0x0001b406) main_cam5_pane_t11_ParamLimits

0xd4d2,	// (0x0001b406) main_cam5_pane_t11

0xd4e6,	// (0x0001b41a) main_cam5_pane_t12_ParamLimits

0xd4e6,	// (0x0001b41a) main_cam5_pane_t12

0xd4fd,	// (0x0001b431) main_cam5_pane_t13_ParamLimits

0xd4fd,	// (0x0001b431) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x0001d99b) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x0001d99b) main_cam5_pane_t

0x0ae8,	// (0x0000ea1c) popup_scut_keymap_window_ParamLimits

0x0ae8,	// (0x0000ea1c) popup_scut_keymap_window

0x6ec8,	// (0x00014dfc) aid_size_cell_brow_shortcut

0xa927,	// (0x0001885b) bg_popup_window_pane_cp010

0x6ed4,	// (0x00014e08) grid_scut_pane

0x6ee0,	// (0x00014e14) cell_scut_pane_ParamLimits

0x6ee0,	// (0x00014e14) cell_scut_pane

0x6ef9,	// (0x00014e2d) cell_scut_pane_g1

0xd520,	// (0x0001b454) cell_scut_pane_t1

0xd52f,	// (0x0001b463) cell_scut_pane_t2

0x6f02,	// (0x00014e36) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x0001d9b6) cell_scut_pane_t

0x4a4a,	// (0x0001297e) main_mup3_pane_g8_ParamLimits

0x4a4a,	// (0x0001297e) main_mup3_pane_g8

0x5fb1,	// (0x00013ee5) area_vitu2_query_pane_ParamLimits

0x5fb1,	// (0x00013ee5) area_vitu2_query_pane

0x6c35,	// (0x00014b69) input_focus_pane_cp08

0xd53e,	// (0x0001b472) area_vitu2_query_pane_g1

0x6f10,	// (0x00014e44) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x0001d9bd) area_vitu2_query_pane_g

0x6f21,	// (0x00014e55) area_vitu2_query_pane_t1_ParamLimits

0x6f21,	// (0x00014e55) area_vitu2_query_pane_t1

0x6f35,	// (0x00014e69) area_vitu2_query_pane_t2_ParamLimits

0x6f35,	// (0x00014e69) area_vitu2_query_pane_t2

0x6f49,	// (0x00014e7d) area_vitu2_query_pane_t3_ParamLimits

0x6f49,	// (0x00014e7d) area_vitu2_query_pane_t3

0xd54a,	// (0x0001b47e) area_vitu2_query_pane_t4_ParamLimits

0xd54a,	// (0x0001b47e) area_vitu2_query_pane_t4

0xd572,	// (0x0001b4a6) area_vitu2_query_pane_t5_ParamLimits

0xd572,	// (0x0001b4a6) area_vitu2_query_pane_t5

0xd59a,	// (0x0001b4ce) area_vitu2_query_pane_t6_ParamLimits

0xd59a,	// (0x0001b4ce) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x0001d9c2) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x0001d9c2) area_vitu2_query_pane_t

0x6f71,	// (0x00014ea5) bg_button_pane_cp018

0x6f7f,	// (0x00014eb3) bg_button_pane_cp021

0x6f8b,	// (0x00014ebf) bg_button_pane_cp022

0x6f9c,	// (0x00014ed0) input_focus_pane_cp09

0x28e9,	// (0x0001081d) aid_size_touch_mv_arrow_left

0x2912,	// (0x00010846) aid_size_touch_mv_arrow_right

0x6718,	// (0x0001464c) main_cset_slider_pane_g16_ParamLimits

0x6718,	// (0x0001464c) main_cset_slider_pane_g16

0x6726,	// (0x0001465a) main_cset_slider_pane_g17_ParamLimits

0x6726,	// (0x0001465a) main_cset_slider_pane_g17

0x6eb5,	// (0x00014de9) cell_cam4_burst_pane_g1_ParamLimits

0x93e0,	// (0x00017314) compa_mode_pane

0x693f,	// (0x00014873) popup_vtel_slider_window_g3_ParamLimits

0x693f,	// (0x00014873) popup_vtel_slider_window_g3

0x6956,	// (0x0001488a) popup_vtel_slider_window_g4_ParamLimits

0x6956,	// (0x0001488a) popup_vtel_slider_window_g4

0x696d,	// (0x000148a1) popup_vtel_slider_window_t1_ParamLimits

0x696d,	// (0x000148a1) popup_vtel_slider_window_t1

0x93e0,	// (0x00017314) main_cl_pane

0xbdfe,	// (0x00019d32) popup_imed_adjust2_window_ParamLimits

0xbdd2,	// (0x00019d06) bg_tb_trans_pane_cp05_ParamLimits

0xc7e2,	// (0x0001a716) popup_imed_adjust2_window_g1_ParamLimits

0xc7f1,	// (0x0001a725) popup_imed_adjust2_window_g2_ParamLimits

0xc7f1,	// (0x0001a725) popup_imed_adjust2_window_g2

0xc7fd,	// (0x0001a731) popup_imed_adjust2_window_g3_ParamLimits

0xc7fd,	// (0x0001a731) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0001d72d) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0001d72d) popup_imed_adjust2_window_g

0xc809,	// (0x0001a73d) popup_imed_adjust2_window_t1_ParamLimits

0xc821,	// (0x0001a755) slider_imed_adjust_pane_ParamLimits

0xc835,	// (0x0001a769) slider_imed_adjust_pane_g1_ParamLimits

0xc845,	// (0x0001a779) slider_imed_adjust_pane_g2_ParamLimits

0xc855,	// (0x0001a789) slider_imed_adjust_pane_g3_ParamLimits

0xc866,	// (0x0001a79a) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0001d734) slider_imed_adjust_pane_g_ParamLimits

0x5cc1,	// (0x00013bf5) aid_touch_area_cam4_ParamLimits

0x5cc1,	// (0x00013bf5) aid_touch_area_cam4

0xcf56,	// (0x0001ae8a) battery_pane_cp01

0x5d94,	// (0x00013cc8) main_camera4_pane_g6_ParamLimits

0x5d94,	// (0x00013cc8) main_camera4_pane_g6

0x5dbe,	// (0x00013cf2) main_camera4_pane_t2_ParamLimits

0x5dbe,	// (0x00013cf2) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0001d837) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0001d837) main_camera4_pane_t

0x5df3,	// (0x00013d27) aid_touch_area_vid4_ParamLimits

0x5df3,	// (0x00013d27) aid_touch_area_vid4

0x5e5a,	// (0x00013d8e) main_video4_pane_g5_ParamLimits

0x5e5a,	// (0x00013d8e) main_video4_pane_g5

0x5e85,	// (0x00013db9) vid4_progress_pane_ParamLimits

0x5e85,	// (0x00013db9) vid4_progress_pane

0xd18d,	// (0x0001b0c1) main_cset_slider_pane_g18_ParamLimits

0xd18d,	// (0x0001b0c1) main_cset_slider_pane_g18

0xd3fc,	// (0x0001b330) cell_cam4_burst_pane_g2_ParamLimits

0xd3fc,	// (0x0001b330) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x0001d996) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x0001d996) cell_cam4_burst_pane_g

0x9bf7,	// (0x00017b2b) bg_cl_pane_ParamLimits

0x9bf7,	// (0x00017b2b) bg_cl_pane

0x6fad,	// (0x00014ee1) cl_header_pane_ParamLimits

0x6fad,	// (0x00014ee1) cl_header_pane

0x6fc1,	// (0x00014ef5) cl_listscroll_pane_ParamLimits

0x6fc1,	// (0x00014ef5) cl_listscroll_pane

0xd5e6,	// (0x0001b51a) bg_cl_pane_g1

0xd5ee,	// (0x0001b522) bg_cl_pane_g2

0xd5f6,	// (0x0001b52a) bg_cl_pane_g3

0xd5fe,	// (0x0001b532) bg_cl_pane_g4

0xd606,	// (0x0001b53a) bg_cl_pane_g5

0xd60e,	// (0x0001b542) bg_cl_pane_g6

0xd616,	// (0x0001b54a) bg_cl_pane_g7

0xd61e,	// (0x0001b552) bg_cl_pane_g8

0xd626,	// (0x0001b55a) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x0001d9d1) bg_cl_pane_g

0x6fd1,	// (0x00014f05) aid_height_cl_leading_ParamLimits

0x6fd1,	// (0x00014f05) aid_height_cl_leading

0x6fdd,	// (0x00014f11) aid_height_cl_text_ParamLimits

0x6fdd,	// (0x00014f11) aid_height_cl_text

0x9451,	// (0x00017385) bg_cl_header_pane_ParamLimits

0x9451,	// (0x00017385) bg_cl_header_pane

0x6ffc,	// (0x00014f30) cl_header_pane_g1_ParamLimits

0x6ffc,	// (0x00014f30) cl_header_pane_g1

0x7012,	// (0x00014f46) cl_header_pane_t1_ParamLimits

0x7012,	// (0x00014f46) cl_header_pane_t1

0xd62e,	// (0x0001b562) cl_list_pane

0xd160,	// (0x0001b094) hc_scroll_pane_cp01

0xa181,	// (0x000180b5) bg_cl_header_pane_g1

0xd042,	// (0x0001af76) bg_cl_header_pane_g2

0xa1a1,	// (0x000180d5) bg_cl_header_pane_g3

0xd052,	// (0x0001af86) bg_cl_header_pane_g4

0xd04a,	// (0x0001af7e) bg_cl_header_pane_g5

0xd2d1,	// (0x0001b205) bg_cl_header_pane_g6

0xd06a,	// (0x0001af9e) bg_cl_header_pane_g7

0xd072,	// (0x0001afa6) bg_cl_header_pane_g8

0xd062,	// (0x0001af96) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x0001d9e4) bg_cl_header_pane_g

0x702b,	// (0x00014f5f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x702b,	// (0x00014f5f) hc_cl_list_double_graphic_heading_pane

0x703e,	// (0x00014f72) hc_cl_list_single_graphic_pane_ParamLimits

0x703e,	// (0x00014f72) hc_cl_list_single_graphic_pane

0x7056,	// (0x00014f8a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7056,	// (0x00014f8a) hc_cl_list_single_graphic_pane_g1

0x7062,	// (0x00014f96) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7062,	// (0x00014f96) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x0001d9f7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x0001d9f7) hc_cl_list_single_graphic_pane_g

0x7076,	// (0x00014faa) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7076,	// (0x00014faa) hc_cl_list_single_graphic_pane_t1

0x7056,	// (0x00014f8a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7056,	// (0x00014f8a) hc_cl_list_double_graphic_heading_pane_g1

0x708b,	// (0x00014fbf) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x708b,	// (0x00014fbf) hc_cl_list_double_graphic_heading_pane_g2

0x709f,	// (0x00014fd3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x709f,	// (0x00014fd3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x0001d9fc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x0001d9fc) hc_cl_list_double_graphic_heading_pane_g

0x70b3,	// (0x00014fe7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x70b3,	// (0x00014fe7) hc_cl_list_double_graphic_heading_pane_t1

0x70c8,	// (0x00014ffc) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x70c8,	// (0x00014ffc) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x0001da03) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x0001da03) hc_cl_list_double_graphic_heading_pane_t

0x70e7,	// (0x0001501b) vid4_progress_pane_g1

0x70f8,	// (0x0001502c) vid4_progress_pane_g2

0xab40,	// (0x00018a74) vid4_progress_pane_g3

0xcf8c,	// (0x0001aec0) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x0001da08) vid4_progress_pane_g

0xd63f,	// (0x0001b573) vid4_progress_pane_t1

0x710a,	// (0x0001503e) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x0001da13) vid4_progress_pane_t

0x7139,	// (0x0001506d) wait_bar_pane_cp07

0xc0f4,	// (0x0001a028) blid_firmament_pane_ParamLimits

0xc137,	// (0x0001a06b) popup_blid_sat_info2_window_g1

0xc15b,	// (0x0001a08f) popup_blid_sat_info2_window_t3

0xc169,	// (0x0001a09d) popup_blid_sat_info2_window_t4

0xc177,	// (0x0001a0ab) popup_blid_sat_info2_window_t5

0xc185,	// (0x0001a0b9) popup_blid_sat_info2_window_t6

0xc195,	// (0x0001a0c9) popup_blid_sat_info2_window_t7

0xc1a3,	// (0x0001a0d7) popup_blid_sat_info2_window_t8

0xc1b1,	// (0x0001a0e5) popup_blid_sat_info2_window_t9

0xc1bf,	// (0x0001a0f3) popup_blid_sat_info2_window_t10

0xc287,	// (0x0001a1bb) aid_firma_cardinal_ParamLimits

0xc29b,	// (0x0001a1cf) blid_firmament_pane_t1_ParamLimits

0xc2b2,	// (0x0001a1e6) blid_firmament_pane_t2_ParamLimits

0xc2c9,	// (0x0001a1fd) blid_firmament_pane_t3_ParamLimits

0xc2e0,	// (0x0001a214) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0001d626) blid_firmament_pane_t_ParamLimits

0xc2f7,	// (0x0001a22b) blid_sat_info_pane_ParamLimits

0x9451,	// (0x00017385) main_cam_set_pane_ParamLimits

0x530c,	// (0x00013240) aid_size_cell_colour_35_ParamLimits

0x532c,	// (0x00013260) aid_size_cell_colour_112_ParamLimits

0x534c,	// (0x00013280) aid_size_cell_effect_ParamLimits

0xbdd2,	// (0x00019d06) bg_tb_trans_pane_cp02_ParamLimits

0xa3a1,	// (0x000182d5) heading_imed_pane_ParamLimits

0x536c,	// (0x000132a0) listscroll_imed_pane_ParamLimits

0xb400,	// (0x00019334) popup_call2_audio_first_window_g5_ParamLimits

0xb400,	// (0x00019334) popup_call2_audio_first_window_g5

0x5929,	// (0x0001385d) aid_size_touch_image3_arrow_left_ParamLimits

0x5929,	// (0x0001385d) aid_size_touch_image3_arrow_left

0x5955,	// (0x00013889) aid_size_touch_image3_arrow_right_ParamLimits

0x5955,	// (0x00013889) aid_size_touch_image3_arrow_right

0x7122,	// (0x00015056) vid4_progress_pane_t3

0x5687,	// (0x000135bb) main_hwr_training_symbol_option_pane_ParamLimits

0x5687,	// (0x000135bb) main_hwr_training_symbol_option_pane

0xcad1,	// (0x0001aa05) popup_hwr_training_preview_window_ParamLimits

0xcad1,	// (0x0001aa05) popup_hwr_training_preview_window

0x56a7,	// (0x000135db) hwr_training_navi_pane_g5_ParamLimits

0x56a7,	// (0x000135db) hwr_training_navi_pane_g5

0xd030,	// (0x0001af64) popup_char_count_window

0x9451,	// (0x00017385) bg_popup_sub_pane_cp20_ParamLimits

0x6a87,	// (0x000149bb) list_vitu2_match_list_pane_ParamLimits

0x6a96,	// (0x000149ca) vitu2_page_scroll_pane_ParamLimits

0x6a96,	// (0x000149ca) vitu2_page_scroll_pane

0xd6ae,	// (0x0001b5e2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd6ae,	// (0x0001b5e2) list_single_hwr_training_symbol_option_pane

0xd6c1,	// (0x0001b5f5) list_single_hwr_training_symbol_option_pane_g1

0xd6c9,	// (0x0001b5fd) list_single_hwr_training_symbol_option_pane_t1

0xd6d7,	// (0x0001b60b) bg_button_pane_cp023

0xd6e0,	// (0x0001b614) bg_button_pane_cp024

0x714b,	// (0x0001507f) vitu2_page_scroll_pane_g1

0x7153,	// (0x00015087) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x0001da1a) vitu2_page_scroll_pane_g

0x715d,	// (0x00015091) vitu2_page_scroll_pane_t1

0xc010,	// (0x00019f44) popup_char_count_window_g1

0xd713,	// (0x0001b647) popup_char_count_window_g2

0xd71c,	// (0x0001b650) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x0001da1f) popup_char_count_window_g

0xd725,	// (0x0001b659) popup_char_count_window_t1

0x93e0,	// (0x00017314) main_vded2_pane

0xc7ce,	// (0x0001a702) aid_size_cell_imed_line

0xc7d8,	// (0x0001a70c) grid_imed_line_width_pane

0x5ef9,	// (0x00013e2d) vid4_indicators_pane_g4

0xd733,	// (0x0001b667) cell_imed_line_width_pane_ParamLimits

0xd733,	// (0x0001b667) cell_imed_line_width_pane

0xd749,	// (0x0001b67d) cell_imed_line_width_pane_g1

0xd752,	// (0x0001b686) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x0001da26) cell_imed_line_width_pane_g

0x716c,	// (0x000150a0) main_vded2_pane_g1_ParamLimits

0x716c,	// (0x000150a0) main_vded2_pane_g1

0x7187,	// (0x000150bb) main_vded2_pane_g2_ParamLimits

0x7187,	// (0x000150bb) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x0001da2b) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x0001da2b) main_vded2_pane_g

0x7199,	// (0x000150cd) vded2_slider_pane_ParamLimits

0x7199,	// (0x000150cd) vded2_slider_pane

0x71a9,	// (0x000150dd) aid_size_touch_vded2_end

0x71b3,	// (0x000150e7) aid_size_touch_vded2_playhead

0xd75a,	// (0x0001b68e) aid_size_touch_vded2_start

0xd762,	// (0x0001b696) vded2_slider_bg_pane

0xd76b,	// (0x0001b69f) vded2_slider_pane_g1

0xd774,	// (0x0001b6a8) vded2_slider_pane_g2

0x71bd,	// (0x000150f1) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x0001da30) vded2_slider_pane_g

0xce14,	// (0x0001ad48) vded2_slider_bg_pane_g1

0xce1d,	// (0x0001ad51) vded2_slider_bg_pane_g2

0xce26,	// (0x0001ad5a) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x0001da37) vded2_slider_bg_pane_g

0x2fdf,	// (0x00010f13) aid_postcard_touch_down_pane_ParamLimits

0x2fdf,	// (0x00010f13) aid_postcard_touch_down_pane

0x2ff7,	// (0x00010f2b) aid_postcard_touch_up_pane_ParamLimits

0x2ff7,	// (0x00010f2b) aid_postcard_touch_up_pane

0x93e0,	// (0x00017314) main_blid2_pane

0xbde0,	// (0x00019d14) popup_blid2_search_window

0x93e0,	// (0x00017314) blid2_gps_pane

0x93e0,	// (0x00017314) blid2_navig_pane

0x93e0,	// (0x00017314) blid2_search_pane

0x93e0,	// (0x00017314) blid2_tripm_pane

0x71c8,	// (0x000150fc) blid2_search_pane_g1_ParamLimits

0x71c8,	// (0x000150fc) blid2_search_pane_g1

0x71db,	// (0x0001510f) blid2_search_pane_t1_ParamLimits

0x71db,	// (0x0001510f) blid2_search_pane_t1

0x71ed,	// (0x00015121) aid_size_cell_blid2_gps_ParamLimits

0x71ed,	// (0x00015121) aid_size_cell_blid2_gps

0x7205,	// (0x00015139) blid2_gps_pane_g1_ParamLimits

0x7205,	// (0x00015139) blid2_gps_pane_g1

0x7219,	// (0x0001514d) grid_blid2_satellite_pane_ParamLimits

0x7219,	// (0x0001514d) grid_blid2_satellite_pane

0x7231,	// (0x00015165) blid2_navig_pane_g1_ParamLimits

0x7231,	// (0x00015165) blid2_navig_pane_g1

0x723d,	// (0x00015171) blid2_navig_pane_t1_ParamLimits

0x723d,	// (0x00015171) blid2_navig_pane_t1

0x7258,	// (0x0001518c) blid2_navig_pane_t2_ParamLimits

0x7258,	// (0x0001518c) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x0001da3e) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x0001da3e) blid2_navig_pane_t

0x7273,	// (0x000151a7) blid2_navig_ring_pane_ParamLimits

0x7273,	// (0x000151a7) blid2_navig_ring_pane

0x728e,	// (0x000151c2) blid2_speed_pane_ParamLimits

0x728e,	// (0x000151c2) blid2_speed_pane

0x729a,	// (0x000151ce) blid2_tripm_pane_g1_ParamLimits

0x729a,	// (0x000151ce) blid2_tripm_pane_g1

0x72b5,	// (0x000151e9) blid2_tripm_pane_g2_ParamLimits

0x72b5,	// (0x000151e9) blid2_tripm_pane_g2

0x72c9,	// (0x000151fd) blid2_tripm_pane_g3_ParamLimits

0x72c9,	// (0x000151fd) blid2_tripm_pane_g3

0x72dd,	// (0x00015211) blid2_tripm_pane_g4_ParamLimits

0x72dd,	// (0x00015211) blid2_tripm_pane_g4

0x72f1,	// (0x00015225) blid2_tripm_pane_g5_ParamLimits

0x72f1,	// (0x00015225) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x0001da43) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x0001da43) blid2_tripm_pane_g

0x7317,	// (0x0001524b) blid2_tripm_pane_t1_ParamLimits

0x7317,	// (0x0001524b) blid2_tripm_pane_t1

0x7330,	// (0x00015264) blid2_tripm_pane_t2_ParamLimits

0x7330,	// (0x00015264) blid2_tripm_pane_t2

0x7349,	// (0x0001527d) blid2_tripm_pane_t3_ParamLimits

0x7349,	// (0x0001527d) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x0001da50) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x0001da50) blid2_tripm_pane_t

0x7390,	// (0x000152c4) cell_blid2_satellite_pane_ParamLimits

0x7390,	// (0x000152c4) cell_blid2_satellite_pane

0x73ac,	// (0x000152e0) cell_blid2_satellite_pane_g1

0xd77c,	// (0x0001b6b0) cell_blid2_satellite_pane_t1

0xc307,	// (0x0001a23b) blid2_speed_pane_g1

0xd78a,	// (0x0001b6be) blid2_speed_pane_t1

0xd798,	// (0x0001b6cc) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x0001da59) blid2_speed_pane_t

0xc307,	// (0x0001a23b) blid2_navig_ring_pane_g1

0x73b5,	// (0x000152e9) blid2_navig_ring_pane_g2

0x73bd,	// (0x000152f1) blid2_navig_ring_pane_g3

0x73c5,	// (0x000152f9) blid2_navig_ring_pane_g4

0x73cd,	// (0x00015301) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x0001da5e) blid2_navig_ring_pane_g

0x93e0,	// (0x00017314) bg_popup_window_pane_cp011

0xd7a6,	// (0x0001b6da) popup_blid2_search_window_g1

0xd7ae,	// (0x0001b6e2) popup_blid2_search_window_t1

0xd7bc,	// (0x0001b6f0) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x0001da69) popup_blid2_search_window_t

0xa090,	// (0x00017fc4) main_browser_pane_g1

0x9bf7,	// (0x00017b2b) main_browser_pane_ParamLimits

0x9451,	// (0x00017385) bg_button_pane_cp011_ParamLimits

0x62e2,	// (0x00014216) cell_vitu2_function_pane_g1_ParamLimits

0xbdd2,	// (0x00019d06) bg_popup_sub_pane_cp22_ParamLimits

0x6c35,	// (0x00014b69) input_focus_pane_cp08_ParamLimits

0x6c4c,	// (0x00014b80) popup_vitu2_query_button_pane_ParamLimits

0x6c4c,	// (0x00014b80) popup_vitu2_query_button_pane

0x6c5d,	// (0x00014b91) popup_vitu2_query_input_button_pane

0xd346,	// (0x0001b27a) popup_vitu2_query_window_g1_ParamLimits

0x6c67,	// (0x00014b9b) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x0001d96a) popup_vitu2_query_window_g_ParamLimits

0x93e0,	// (0x00017314) bg_button_pane_cp026

0x73d5,	// (0x00015309) popup_vitu2_query_input_button_pane_g1

0x93e0,	// (0x00017314) bg_button_pane_cp025

0xd7ca,	// (0x0001b6fe) popup_vitu2_query_button_pane_t1

0x46e6,	// (0x0001261a) main_mp3_pane_t6

0x46f4,	// (0x00012628) popup_slider_window_cp01

0xcf74,	// (0x0001aea8) cam4_battery_pane

0xcfca,	// (0x0001aefe) cam4_battery_pane_cp02

0x70dd,	// (0x00015011) cam4_battery_pane_cp01

0xd637,	// (0x0001b56b) cam4_battery_pane_cp03

0xc307,	// (0x0001a23b) cam4_battery_pane_g1

0xd7d8,	// (0x0001b70c) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x0001da6e) cam4_battery_pane_g

0xc1cd,	// (0x0001a101) popup_blid_sat_info2_window_t11

0x28e9,	// (0x0001081d) aid_size_touch_mv_arrow_left_ParamLimits

0x2912,	// (0x00010846) aid_size_touch_mv_arrow_right_ParamLimits

0xa887,	// (0x000187bb) navi_pane_g1_ParamLimits

0x2951,	// (0x00010885) navi_pane_g2_ParamLimits

0x297f,	// (0x000108b3) navi_pane_g3_ParamLimits

0xf404,	// (0x0001d338) navi_pane_g_ParamLimits

0x29d9,	// (0x0001090d) navi_pane_mv_t1_ParamLimits

0x5378,	// (0x000132ac) grid_imed_effect_pane_ParamLimits

0x17d0,	// (0x0000f704) aid_placing_vt_slider_lsc

0x9fdb,	// (0x00017f0f) aid_placing_vt_slider_prt

0x9451,	// (0x00017385) bg_tb_trans_pane_cp01_ParamLimits

0xc457,	// (0x0001a38b) popup_image_details_window_g1_ParamLimits

0xc46a,	// (0x0001a39e) popup_image_details_window_g2_ParamLimits

0xc47f,	// (0x0001a3b3) popup_image_details_window_g3_ParamLimits

0xc47f,	// (0x0001a3b3) popup_image_details_window_g3

0xf737,	// (0x0001d66b) popup_image_details_window_g_ParamLimits

0xc493,	// (0x0001a3c7) popup_image_details_window_t1_ParamLimits

0xc4a5,	// (0x0001a3d9) popup_image_details_window_t2_ParamLimits

0xc4be,	// (0x0001a3f2) popup_image_details_window_t3_ParamLimits

0xc4d2,	// (0x0001a406) popup_image_details_window_t4_ParamLimits

0xc4ed,	// (0x0001a421) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0001d672) popup_image_details_window_t_ParamLimits

0x6fe9,	// (0x00014f1d) cl_header_name_pane_ParamLimits

0x6fe9,	// (0x00014f1d) cl_header_name_pane

0x73dd,	// (0x00015311) cl_header_name_pane_t1_ParamLimits

0x73dd,	// (0x00015311) cl_header_name_pane_t1

0x73fe,	// (0x00015332) cl_header_name_pane_t2_ParamLimits

0x73fe,	// (0x00015332) cl_header_name_pane_t2

0x7440,	// (0x00015374) cl_header_name_pane_t3_ParamLimits

0x7440,	// (0x00015374) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x0001da73) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x0001da73) cl_header_name_pane_t

0x29aa,	// (0x000108de) navi_pane_mv_g2_ParamLimits

0xcfed,	// (0x0001af21) field_vitu2_entry_pane_g1_ParamLimits

0xcff9,	// (0x0001af2d) field_vitu2_entry_pane_g2_ParamLimits

0xd005,	// (0x0001af39) field_vitu2_entry_pane_g3_ParamLimits

0xd005,	// (0x0001af39) field_vitu2_entry_pane_g3

0xf935,	// (0x0001d869) field_vitu2_entry_pane_g_ParamLimits

0x6182,	// (0x000140b6) cell_vitu2_itu_pane_g1_ParamLimits

0x6192,	// (0x000140c6) cell_vitu2_itu_pane_g2_ParamLimits

0x6192,	// (0x000140c6) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0001d875) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0001d875) cell_vitu2_itu_pane_g

0x9451,	// (0x00017385) bg_vkb2_func_pane_cp05_ParamLimits

0x9451,	// (0x00017385) bg_vkb2_func_pane_cp05

0x9451,	// (0x00017385) bg_vkb2_func_pane_cp03

0x9451,	// (0x00017385) bg_vkb2_func_pane_cp04

0x9451,	// (0x00017385) bg_vkb2_func_pane_cp10_ParamLimits

0x9451,	// (0x00017385) bg_vkb2_func_pane_cp10

0x6f8b,	// (0x00014ebf) bg_vkb2_func_pane_cp08

0x6f71,	// (0x00014ea5) bg_vkb2_func_pane_cp06

0x6f7f,	// (0x00014eb3) bg_vkb2_func_pane_cp07

0xd6e9,	// (0x0001b61d) bg_vkb2_func_pane_cp11_ParamLimits

0xd6e9,	// (0x0001b61d) bg_vkb2_func_pane_cp11

0xd6fe,	// (0x0001b632) bg_vkb2_func_pane_cp12_ParamLimits

0xd6fe,	// (0x0001b632) bg_vkb2_func_pane_cp12

0x93e0,	// (0x00017314) bg_vkb2_func_pane_cp09

0xd042,	// (0x0001af76) bg_vkb2_func_pane_g1

0xa1a1,	// (0x000180d5) bg_vkb2_func_pane_g2

0xd04a,	// (0x0001af7e) bg_vkb2_func_pane_g3

0xd052,	// (0x0001af86) bg_vkb2_func_pane_g4

0xd2d1,	// (0x0001b205) bg_vkb2_func_pane_g5

0xd06a,	// (0x0001af9e) bg_vkb2_func_pane_g6

0xd072,	// (0x0001afa6) bg_vkb2_func_pane_g7

0xd062,	// (0x0001af96) bg_vkb2_func_pane_g8

0xa181,	// (0x000180b5) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x0001da7a) bg_vkb2_func_pane_g

0x7305,	// (0x00015239) blid2_tripm_pane_g6_ParamLimits

0x7305,	// (0x00015239) blid2_tripm_pane_g6

0xcdc0,	// (0x0001acf4) mp4_progress_pane_g1

0x737c,	// (0x000152b0) blid2_tripm_values_pane_ParamLimits

0x737c,	// (0x000152b0) blid2_tripm_values_pane

0x7471,	// (0x000153a5) blid2_tripm_values_pane_t1

0x747f,	// (0x000153b3) blid2_tripm_values_pane_t2

0x748d,	// (0x000153c1) blid2_tripm_values_pane_t3

0x749b,	// (0x000153cf) blid2_tripm_values_pane_t4

0x74a9,	// (0x000153dd) blid2_tripm_values_pane_t5

0x74b7,	// (0x000153eb) blid2_tripm_values_pane_t6

0x74c5,	// (0x000153f9) blid2_tripm_values_pane_t7

0x74d3,	// (0x00015407) blid2_tripm_values_pane_t8

0x74e1,	// (0x00015415) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x0001da8d) blid2_tripm_values_pane_t

0x180d,	// (0x0000f741) call_video_pane_t1_ParamLimits

0x1827,	// (0x0000f75b) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0001d1c1) call_video_pane_t_ParamLimits

0x2f18,	// (0x00010e4c) msg_header_pane_g1_ParamLimits

0xaacc,	// (0x00018a00) msg_header_pane_g2_ParamLimits

0xaacc,	// (0x00018a00) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0001d3db) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0001d3db) msg_header_pane_g

0x9bf7,	// (0x00017b2b) main_clock2_pane_ParamLimits

0x507d,	// (0x00012fb1) grid_clock2_toolbar_pane_ParamLimits

0x507d,	// (0x00012fb1) grid_clock2_toolbar_pane

0x507d,	// (0x00012fb1) listscroll_clock2_pane_ParamLimits

0x507d,	// (0x00012fb1) listscroll_clock2_pane

0x5165,	// (0x00013099) main_clock2_pane_t3_ParamLimits

0x5165,	// (0x00013099) main_clock2_pane_t3

0x5180,	// (0x000130b4) main_clock2_pane_t4_ParamLimits

0x5180,	// (0x000130b4) main_clock2_pane_t4

0xd7e2,	// (0x0001b716) cell_clock2_toolbar_pane

0xd7ea,	// (0x0001b71e) cell_clock2_toolbar_pane_cp01

0xd7ea,	// (0x0001b71e) cell_clock2_toolbar_pane_cp02

0xd7f2,	// (0x0001b726) cell_clock2_toolbar_pane_cp03

0xd7fa,	// (0x0001b72e) list_clock2_pane

0xa7ed,	// (0x00018721) scroll_pane_cp10

0xd802,	// (0x0001b736) list_single_clock2_pane_ParamLimits

0xd802,	// (0x0001b736) list_single_clock2_pane

0xa927,	// (0x0001885b) list_highlight_pane_cp08

0xd80f,	// (0x0001b743) list_single_clock2_pane_t1

0xd81d,	// (0x0001b751) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x0001daa0) list_single_clock2_pane_t

0x93e0,	// (0x00017314) bg_button_pane_cp10

0xd82b,	// (0x0001b75f) cell_clock2_toolbar_pane_g1

0x2f6b,	// (0x00010e9f) aid_main_viewer_pane_g1_ParamLimits

0x2f6b,	// (0x00010e9f) aid_main_viewer_pane_g1

0x2f79,	// (0x00010ead) aid_main_viewer_pane_g2_ParamLimits

0x2f79,	// (0x00010ead) aid_main_viewer_pane_g2

0x2f87,	// (0x00010ebb) aid_main_viewer_pane_g3_ParamLimits

0x2f87,	// (0x00010ebb) aid_main_viewer_pane_g3

0x2f96,	// (0x00010eca) aid_main_viewer_pane_g4_ParamLimits

0x2f96,	// (0x00010eca) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0001d3ec) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0001d3ec) aid_main_viewer_pane_g

0x38ee,	// (0x00011822) main_calc_pane_ParamLimits

0x3902,	// (0x00011836) main_dialer2_pane_ParamLimits

0x93e0,	// (0x00017314) main_cam6_pane

0x93e0,	// (0x00017314) main_vid6_pane

0x5089,	// (0x00012fbd) listscroll_gen_pane_cp06_ParamLimits

0x5089,	// (0x00012fbd) listscroll_gen_pane_cp06

0x519b,	// (0x000130cf) main_clock2_pane_t5_ParamLimits

0x519b,	// (0x000130cf) main_clock2_pane_t5

0x51fd,	// (0x00013131) aid_call2_pane_cp10_ParamLimits

0x520f,	// (0x00013143) aid_call_pane_cp10_ParamLimits

0xa85c,	// (0x00018790) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa85c,	// (0x00018790) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5221,	// (0x00013155) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5221,	// (0x00013155) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa85c,	// (0x00018790) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0001d722) popup_clock_analogue_window_cp10_g_ParamLimits

0x5237,	// (0x0001316b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x58d6,	// (0x0001380a) cell_dialer2_keypad_pane_g2_ParamLimits

0x58d6,	// (0x0001380a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0001d808) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0001d808) cell_dialer2_keypad_pane_g

0x58f2,	// (0x00013826) cell_dialer2_keypad_pane_t1

0x6609,	// (0x0001453d) main_cset_text2_pane_ParamLimits

0x6609,	// (0x0001453d) main_cset_text2_pane

0xd53e,	// (0x0001b472) area_vitu2_query_pane_g1_ParamLimits

0x6f10,	// (0x00014e44) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x0001d9bd) area_vitu2_query_pane_g_ParamLimits

0xd5c2,	// (0x0001b4f6) area_vitu2_query_pane_t7_ParamLimits

0xd5c2,	// (0x0001b4f6) area_vitu2_query_pane_t7

0x6f71,	// (0x00014ea5) bg_button_pane_cp018_ParamLimits

0x6f7f,	// (0x00014eb3) bg_button_pane_cp021_ParamLimits

0x6f8b,	// (0x00014ebf) bg_button_pane_cp022_ParamLimits

0x6f8b,	// (0x00014ebf) bg_vkb2_func_pane_cp08_ParamLimits

0x6f71,	// (0x00014ea5) bg_vkb2_func_pane_cp06_ParamLimits

0x6f7f,	// (0x00014eb3) bg_vkb2_func_pane_cp07_ParamLimits

0x6f9c,	// (0x00014ed0) input_focus_pane_cp09_ParamLimits

0xd833,	// (0x0001b767) cam6_autofocus_pane_ParamLimits

0xd833,	// (0x0001b767) cam6_autofocus_pane

0x74ef,	// (0x00015423) cam6_image_uncrop_pane_ParamLimits

0x74ef,	// (0x00015423) cam6_image_uncrop_pane

0x74fe,	// (0x00015432) cam6_indi_pane_ParamLimits

0x74fe,	// (0x00015432) cam6_indi_pane

0x7514,	// (0x00015448) cam6_mode_pane_ParamLimits

0x7514,	// (0x00015448) cam6_mode_pane

0x7526,	// (0x0001545a) cam6_timer_pane_ParamLimits

0x7526,	// (0x0001545a) cam6_timer_pane

0x7532,	// (0x00015466) cam6_zoom_pane_ParamLimits

0x7532,	// (0x00015466) cam6_zoom_pane

0x7540,	// (0x00015474) cam6_mode_pane_g1_ParamLimits

0x7540,	// (0x00015474) cam6_mode_pane_g1

0x7550,	// (0x00015484) cam6_mode_pane_g2_ParamLimits

0x7550,	// (0x00015484) cam6_mode_pane_g2

0x7560,	// (0x00015494) cam6_mode_pane_g3_ParamLimits

0x7560,	// (0x00015494) cam6_mode_pane_g3

0x7570,	// (0x000154a4) cam6_mode_pane_g4_ParamLimits

0x7570,	// (0x000154a4) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x0001daa5) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x0001daa5) cam6_mode_pane_g

0xce2f,	// (0x0001ad63) bg_tb_trans_pane_cp08_ParamLimits

0xce2f,	// (0x0001ad63) bg_tb_trans_pane_cp08

0xd841,	// (0x0001b775) cam6_battery_pane_ParamLimits

0xd841,	// (0x0001b775) cam6_battery_pane

0xd857,	// (0x0001b78b) cam6_indi_pane_g1_ParamLimits

0xd857,	// (0x0001b78b) cam6_indi_pane_g1

0xd869,	// (0x0001b79d) cam6_indi_pane_g2_ParamLimits

0xd869,	// (0x0001b79d) cam6_indi_pane_g2

0xd87b,	// (0x0001b7af) cam6_indi_pane_g3_ParamLimits

0xd87b,	// (0x0001b7af) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x0001daae) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0001daae) cam6_indi_pane_g

0xd88d,	// (0x0001b7c1) cam6_indi_pane_t1_ParamLimits

0xd88d,	// (0x0001b7c1) cam6_indi_pane_t1

0x5f25,	// (0x00013e59) cam6_autofocus_pane_g1

0x5f2d,	// (0x00013e61) cam6_autofocus_pane_g2

0x5f35,	// (0x00013e69) cam6_autofocus_pane_g3

0x5f3d,	// (0x00013e71) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x0001dab5) cam6_autofocus_pane_g

0xd8b3,	// (0x0001b7e7) cam6_timer_pane_g1

0xd8bb,	// (0x0001b7ef) cam6_timer_pane_t1

0xd8c9,	// (0x0001b7fd) cam6_zoom_cont_pane

0xd8d1,	// (0x0001b805) cam6_zoom_pane_g1

0xd8d9,	// (0x0001b80d) cam6_zoom_pane_g2

0x7580,	// (0x000154b4) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x0001dabe) cam6_zoom_pane_g

0xc307,	// (0x0001a23b) cam6_battery_pane_g1

0xc307,	// (0x0001a23b) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0001d62f) cam6_battery_pane_g

0xd8e1,	// (0x0001b815) cam6_zoom_cont_pane_g1

0xd8ea,	// (0x0001b81e) cam6_zoom_cont_pane_g2

0xd8f3,	// (0x0001b827) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x0001dac5) cam6_zoom_cont_pane_g

0x759d,	// (0x000154d1) cam6_mode_pane_cp_ParamLimits

0x759d,	// (0x000154d1) cam6_mode_pane_cp

0x7532,	// (0x00015466) cam6_zoom_pane_cp_ParamLimits

0x7532,	// (0x00015466) cam6_zoom_pane_cp

0x75af,	// (0x000154e3) vid6_image_uncrop_cif_pane_ParamLimits

0x75af,	// (0x000154e3) vid6_image_uncrop_cif_pane

0x75bf,	// (0x000154f3) vid6_image_uncrop_nhd_pane_ParamLimits

0x75bf,	// (0x000154f3) vid6_image_uncrop_nhd_pane

0x74ef,	// (0x00015423) vid6_image_uncrop_vga_pane_ParamLimits

0x74ef,	// (0x00015423) vid6_image_uncrop_vga_pane

0x75ce,	// (0x00015502) vid6_image_uncrop_wvga_pane_ParamLimits

0x75ce,	// (0x00015502) vid6_image_uncrop_wvga_pane

0x75dd,	// (0x00015511) vid6_indi_pane_ParamLimits

0x75dd,	// (0x00015511) vid6_indi_pane

0xce2f,	// (0x0001ad63) bg_tb_trans_pane_cp09_ParamLimits

0xce2f,	// (0x0001ad63) bg_tb_trans_pane_cp09

0xd90b,	// (0x0001b83f) cam6_battery_pane_cp_ParamLimits

0xd90b,	// (0x0001b83f) cam6_battery_pane_cp

0xd917,	// (0x0001b84b) vid6_indi_pane_g1_ParamLimits

0xd917,	// (0x0001b84b) vid6_indi_pane_g1

0xd929,	// (0x0001b85d) vid6_indi_pane_g2_ParamLimits

0xd929,	// (0x0001b85d) vid6_indi_pane_g2

0xd93b,	// (0x0001b86f) vid6_indi_pane_g3_ParamLimits

0xd93b,	// (0x0001b86f) vid6_indi_pane_g3

0xd952,	// (0x0001b886) vid6_indi_pane_g4_ParamLimits

0xd952,	// (0x0001b886) vid6_indi_pane_g4

0xd969,	// (0x0001b89d) vid6_indi_pane_g5_ParamLimits

0xd969,	// (0x0001b89d) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x0001dacc) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x0001dacc) vid6_indi_pane_g

0xd983,	// (0x0001b8b7) vid6_indi_pane_t1_ParamLimits

0xd983,	// (0x0001b8b7) vid6_indi_pane_t1

0xd999,	// (0x0001b8cd) vid6_indi_pane_t2_ParamLimits

0xd999,	// (0x0001b8cd) vid6_indi_pane_t2

0xd9c1,	// (0x0001b8f5) vid6_indi_pane_t3_ParamLimits

0xd9c1,	// (0x0001b8f5) vid6_indi_pane_t3

0xd9e9,	// (0x0001b91d) vid6_indi_pane_t4_ParamLimits

0xd9e9,	// (0x0001b91d) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x0001dad7) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x0001dad7) vid6_indi_pane_t

0xda0d,	// (0x0001b941) wait_bar_pane_cp08

0x75f5,	// (0x00015529) main_cset_text2_pane_t1_ParamLimits

0x75f5,	// (0x00015529) main_cset_text2_pane_t1

0x7588,	// (0x000154bc) listscroll_gen_pane_cp06_t1_ParamLimits

0x7588,	// (0x000154bc) listscroll_gen_pane_cp06_t1

0x93e0,	// (0x00017314) main_cam6_set_pane

0xc537,	// (0x0001a46b) bg_tb_trans_pane_cp06_ParamLimits

0xcf7c,	// (0x0001aeb0) cam4_indicators_pane_g1_ParamLimits

0xcf8c,	// (0x0001aec0) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0001d845) cam4_indicators_pane_g_ParamLimits

0xcfa4,	// (0x0001aed8) cam4_indicators_pane_t1_ParamLimits

0xce06,	// (0x0001ad3a) bg_tb_trans_pane_cp07_ParamLimits

0x5ece,	// (0x00013e02) vid4_indicators_pane_g1_ParamLimits

0x5edd,	// (0x00013e11) vid4_indicators_pane_g2_ParamLimits

0x5eec,	// (0x00013e20) vid4_indicators_pane_g3_ParamLimits

0x5ef9,	// (0x00013e2d) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0001d857) vid4_indicators_pane_g_ParamLimits

0x5f11,	// (0x00013e45) vid4_indicators_pane_t1_ParamLimits

0x70e7,	// (0x0001501b) vid4_progress_pane_g1_ParamLimits

0x70f8,	// (0x0001502c) vid4_progress_pane_g2_ParamLimits

0xab40,	// (0x00018a74) vid4_progress_pane_g3_ParamLimits

0xcf8c,	// (0x0001aec0) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x0001da08) vid4_progress_pane_g_ParamLimits

0xd63f,	// (0x0001b573) vid4_progress_pane_t1_ParamLimits

0x710a,	// (0x0001503e) vid4_progress_pane_t2_ParamLimits

0x7122,	// (0x00015056) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x0001da13) vid4_progress_pane_t_ParamLimits

0x7139,	// (0x0001506d) wait_bar_pane_cp07_ParamLimits

0x7616,	// (0x0001554a) main_cam6_set_pane_g2_ParamLimits

0x7616,	// (0x0001554a) main_cam6_set_pane_g2

0x763c,	// (0x00015570) main_cset6_listscroll_pane_ParamLimits

0x763c,	// (0x00015570) main_cset6_listscroll_pane

0x765a,	// (0x0001558e) main_cset6_slider_pane_ParamLimits

0x765a,	// (0x0001558e) main_cset6_slider_pane

0x7670,	// (0x000155a4) main_cset6_text2_pane_ParamLimits

0x7670,	// (0x000155a4) main_cset6_text2_pane

0xda1c,	// (0x0001b950) main_cset6_text_pane

0xda24,	// (0x0001b958) main_cset_list_pane_copy1_ParamLimits

0xda24,	// (0x0001b958) main_cset_list_pane_copy1

0xda34,	// (0x0001b968) scroll_pane_cp028_copy1

0x767e,	// (0x000155b2) cset_list_set_pane_copy1

0x7692,	// (0x000155c6) aid_position_infowindow_above_copy1

0x769a,	// (0x000155ce) aid_position_infowindow_below_copy1

0x76a2,	// (0x000155d6) cset_list_set_pane_g1_copy1

0x76aa,	// (0x000155de) cset_list_set_pane_g3_copy1_ParamLimits

0x76aa,	// (0x000155de) cset_list_set_pane_g3_copy1

0x76b9,	// (0x000155ed) cset_list_set_pane_t1_copy1_ParamLimits

0x76b9,	// (0x000155ed) cset_list_set_pane_t1_copy1

0x9451,	// (0x00017385) list_highlight_pane_cp021_copy1_ParamLimits

0x9451,	// (0x00017385) list_highlight_pane_cp021_copy1

0xda3d,	// (0x0001b971) cset6_slider_pane_ParamLimits

0xda3d,	// (0x0001b971) cset6_slider_pane

0xda69,	// (0x0001b99d) main_cset6_slider_pane_g1_ParamLimits

0xda69,	// (0x0001b99d) main_cset6_slider_pane_g1

0x76ce,	// (0x00015602) main_cset6_slider_pane_g2_ParamLimits

0x76ce,	// (0x00015602) main_cset6_slider_pane_g2

0xda91,	// (0x0001b9c5) main_cset6_slider_pane_g3_ParamLimits

0xda91,	// (0x0001b9c5) main_cset6_slider_pane_g3

0x76f6,	// (0x0001562a) main_cset6_slider_pane_g4_ParamLimits

0x76f6,	// (0x0001562a) main_cset6_slider_pane_g4

0x7702,	// (0x00015636) main_cset6_slider_pane_g5_ParamLimits

0x7702,	// (0x00015636) main_cset6_slider_pane_g5

0xd175,	// (0x0001b0a9) main_cset6_slider_pane_g7_ParamLimits

0xd175,	// (0x0001b0a9) main_cset6_slider_pane_g7

0xd181,	// (0x0001b0b5) main_cset6_slider_pane_g8_ParamLimits

0xd181,	// (0x0001b0b5) main_cset6_slider_pane_g8

0x66b8,	// (0x000145ec) main_cset6_slider_pane_g9_ParamLimits

0x66b8,	// (0x000145ec) main_cset6_slider_pane_g9

0x66c4,	// (0x000145f8) main_cset6_slider_pane_g10_ParamLimits

0x66c4,	// (0x000145f8) main_cset6_slider_pane_g10

0x66d0,	// (0x00014604) main_cset6_slider_pane_g11_ParamLimits

0x66d0,	// (0x00014604) main_cset6_slider_pane_g11

0x66dc,	// (0x00014610) main_cset6_slider_pane_g12_ParamLimits

0x66dc,	// (0x00014610) main_cset6_slider_pane_g12

0x66e8,	// (0x0001461c) main_cset6_slider_pane_g13_ParamLimits

0x66e8,	// (0x0001461c) main_cset6_slider_pane_g13

0x66f4,	// (0x00014628) main_cset6_slider_pane_g14_ParamLimits

0x66f4,	// (0x00014628) main_cset6_slider_pane_g14

0x7710,	// (0x00015644) main_cset6_slider_pane_g15_ParamLimits

0x7710,	// (0x00015644) main_cset6_slider_pane_g15

0x6718,	// (0x0001464c) main_cset6_slider_pane_g16_ParamLimits

0x6718,	// (0x0001464c) main_cset6_slider_pane_g16

0x6726,	// (0x0001465a) main_cset6_slider_pane_g17_ParamLimits

0x6726,	// (0x0001465a) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x0001dae0) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x0001dae0) main_cset6_slider_pane_g

0xda9d,	// (0x0001b9d1) main_cset6_slider_pane_t1_ParamLimits

0xda9d,	// (0x0001b9d1) main_cset6_slider_pane_t1

0x7740,	// (0x00015674) main_cset6_slider_pane_t2_ParamLimits

0x7740,	// (0x00015674) main_cset6_slider_pane_t2

0x776b,	// (0x0001569f) main_cset6_slider_pane_t3_ParamLimits

0x776b,	// (0x0001569f) main_cset6_slider_pane_t3

0x7796,	// (0x000156ca) main_cset6_slider_pane_t4_ParamLimits

0x7796,	// (0x000156ca) main_cset6_slider_pane_t4

0x77c3,	// (0x000156f7) main_cset6_slider_pane_t5_ParamLimits

0x77c3,	// (0x000156f7) main_cset6_slider_pane_t5

0xdade,	// (0x0001ba12) main_cset6_slider_pane_t7_ParamLimits

0xdade,	// (0x0001ba12) main_cset6_slider_pane_t7

0x77f0,	// (0x00015724) main_cset6_slider_pane_t8_ParamLimits

0x77f0,	// (0x00015724) main_cset6_slider_pane_t8

0x7814,	// (0x00015748) main_cset6_slider_pane_t9_ParamLimits

0x7814,	// (0x00015748) main_cset6_slider_pane_t9

0x7838,	// (0x0001576c) main_cset6_slider_pane_t10_ParamLimits

0x7838,	// (0x0001576c) main_cset6_slider_pane_t10

0x785c,	// (0x00015790) main_cset6_slider_pane_t11_ParamLimits

0x785c,	// (0x00015790) main_cset6_slider_pane_t11

0xdb14,	// (0x0001ba48) main_cset6_slider_pane_t14_ParamLimits

0xdb14,	// (0x0001ba48) main_cset6_slider_pane_t14

0xdb4d,	// (0x0001ba81) main_cset6_slider_pane_t15_ParamLimits

0xdb4d,	// (0x0001ba81) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x0001db05) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x0001db05) main_cset6_slider_pane_t

0xd259,	// (0x0001b18d) cset_slider_pane_g1_copy1

0xd262,	// (0x0001b196) cset_slider_pane_g2_copy1

0xd26b,	// (0x0001b19f) cset_slider_pane_g3_copy1

0x93e0,	// (0x00017314) bg_popup_sub_pane_cp011_copy1

0xd352,	// (0x0001b286) main_cset_text_pane_g1_copy1

0xd35a,	// (0x0001b28e) main_cset_text_pane_t1_copy1

0xd368,	// (0x0001b29c) main_cset_text_pane_t2_copy1

0xd376,	// (0x0001b2aa) main_cset_text_pane_t3_copy1

0xd384,	// (0x0001b2b8) main_cset_text_pane_t4_copy1

0xd392,	// (0x0001b2c6) main_cset_text_pane_t5_copy1

0xd3a0,	// (0x0001b2d4) main_cset_text_pane_t6_copy1

0xd3ae,	// (0x0001b2e2) main_cset_text_pane_t7_copy1

0x75f5,	// (0x00015529) main_cset_text2_pane_t1_copy1

0x93e0,	// (0x00017314) main_ncimui_pane

0x3b90,	// (0x00011ac4) popup_query_ncimui_window_ParamLimits

0x3b90,	// (0x00011ac4) popup_query_ncimui_window

0xc59c,	// (0x0001a4d0) field_cale_ev2_pane_g4_ParamLimits

0xc59c,	// (0x0001a4d0) field_cale_ev2_pane_g4

0x57a1,	// (0x000136d5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x57a1,	// (0x000136d5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0001d7e3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0001d7e3) cell_video_dialer_keypad_pane_g

0x57b9,	// (0x000136ed) cell_video_dialer_keypad_pane_t1

0x93e0,	// (0x00017314) bg_popup_window_pane_cp012

0xa6d9,	// (0x0001860d) heading_pane_cp06

0xdc75,	// (0x0001bba9) ncim_query_content_pane

0x93e0,	// (0x00017314) bg_popup_heading_pane_cp01

0xdc7d,	// (0x0001bbb1) ncim_heading_pane_t1

0xdc8b,	// (0x0001bbbf) ncim_indicator_popup_pane

0xdc9d,	// (0x0001bbd1) ncim_query_button_pane

0xdcb3,	// (0x0001bbe7) ncim_query_content_pane_t1

0xdcc5,	// (0x0001bbf9) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x0001db44) ncim_query_content_pane_t

0xdcff,	// (0x0001bc33) ncim_query_list_pane

0xdd11,	// (0x0001bc45) ncim_query_popup_pane

0xdc8b,	// (0x0001bbbf) ncim_indicator_popup_pane_ParamLimits

0x797b,	// (0x000158af) ncim_query_content_pane_g1_ParamLimits

0x797b,	// (0x000158af) ncim_query_content_pane_g1

0xdcb3,	// (0x0001bbe7) ncim_query_content_pane_t1_ParamLimits

0xdcc5,	// (0x0001bbf9) ncim_query_content_pane_t2_ParamLimits

0x7987,	// (0x000158bb) ncim_query_content_pane_t3_ParamLimits

0x7987,	// (0x000158bb) ncim_query_content_pane_t3

0x79af,	// (0x000158e3) ncim_query_content_pane_t4_ParamLimits

0x79af,	// (0x000158e3) ncim_query_content_pane_t4

0x79d7,	// (0x0001590b) ncim_query_content_pane_t5_ParamLimits

0x79d7,	// (0x0001590b) ncim_query_content_pane_t5

0xdcd7,	// (0x0001bc0b) ncim_query_content_pane_t6_ParamLimits

0xdcd7,	// (0x0001bc0b) ncim_query_content_pane_t6

0xfc10,	// (0x0001db44) ncim_query_content_pane_t_ParamLimits

0xdcff,	// (0x0001bc33) ncim_query_list_pane_ParamLimits

0xdd11,	// (0x0001bc45) ncim_query_popup_pane_ParamLimits

0xdd25,	// (0x0001bc59) wait_bar_pane_cp04

0x93e0,	// (0x00017314) input_focus_pane_cp011

0xdd2d,	// (0x0001bc61) ncim_query_popup_pane_t1

0xdd3b,	// (0x0001bc6f) ncim_list_query_list_pane_ParamLimits

0xdd3b,	// (0x0001bc6f) ncim_list_query_list_pane

0x93e0,	// (0x00017314) bg_button_pane_cp027

0xdd4e,	// (0x0001bc82) ncim_query_button_pane_g1

0x93e0,	// (0x00017314) list_highlight_pane_cp012

0xdd58,	// (0x0001bc8c) ncim_list_query_list_pane_g1

0xdd60,	// (0x0001bc94) ncim_list_query_list_pane_t1

0xcf98,	// (0x0001aecc) cam4_indicators_pane_g3_ParamLimits

0xcf98,	// (0x0001aecc) cam4_indicators_pane_g3

0x5f05,	// (0x00013e39) vid4_indicators_pane_g5_ParamLimits

0x5f05,	// (0x00013e39) vid4_indicators_pane_g5

0xcf98,	// (0x0001aecc) vid4_progress_pane_g5_ParamLimits

0xcf98,	// (0x0001aecc) vid4_progress_pane_g5

0x7894,	// (0x000157c8) main_ncimui_pane_g1

0x78ea,	// (0x0001581e) ncimui_group_query_pane_ParamLimits

0x78ea,	// (0x0001581e) ncimui_group_query_pane

0x7926,	// (0x0001585a) ncimui_list_pane_ParamLimits

0x7926,	// (0x0001585a) ncimui_list_pane

0x7947,	// (0x0001587b) ncimui_text_pane_ParamLimits

0x7947,	// (0x0001587b) ncimui_text_pane

0x79ff,	// (0x00015933) ncimui_text_pane_t1_ParamLimits

0x79ff,	// (0x00015933) ncimui_text_pane_t1

0xdd6e,	// (0x0001bca2) ncimui_list_single_graphic_pane_ParamLimits

0xdd6e,	// (0x0001bca2) ncimui_list_single_graphic_pane

0x7a1d,	// (0x00015951) ncimui_query_pane_ParamLimits

0x7a1d,	// (0x00015951) ncimui_query_pane

0x93e0,	// (0x00017314) list_highlight_pane_cp013

0xdd7e,	// (0x0001bcb2) ncim_list_query_list_pane_t1_copy1

0xdd58,	// (0x0001bc8c) ncim_list_single_graphic_pane_g1

0xdd8c,	// (0x0001bcc0) ncim_query_button_pane_cp01

0xdd98,	// (0x0001bccc) ncim_query_entry_pane_ParamLimits

0xdd98,	// (0x0001bccc) ncim_query_entry_pane

0xddab,	// (0x0001bcdf) ncimui_query_pane_g1

0xddb7,	// (0x0001bceb) ncimui_query_pane_t1_ParamLimits

0xddb7,	// (0x0001bceb) ncimui_query_pane_t1

0x9451,	// (0x00017385) input_focus_pane_cp012

0xddd0,	// (0x0001bd04) ncim_query_entry_pane_t1

0x9bf7,	// (0x00017b2b) main_im_pane_ParamLimits

0x9451,	// (0x00017385) main_mobtv_pane_ParamLimits

0x9451,	// (0x00017385) main_mobtv_pane

0x7728,	// (0x0001565c) main_cset6_slider_pane_g18_ParamLimits

0x7728,	// (0x0001565c) main_cset6_slider_pane_g18

0x7734,	// (0x00015668) main_cset6_slider_pane_g19_ParamLimits

0x7734,	// (0x00015668) main_cset6_slider_pane_g19

0xdde2,	// (0x0001bd16) bg_main_mobtv_pane_ParamLimits

0xdde2,	// (0x0001bd16) bg_main_mobtv_pane

0x7a30,	// (0x00015964) main_mobtv_info_pane

0x7a3b,	// (0x0001596f) main_mobtv_loading_pane_ParamLimits

0x7a3b,	// (0x0001596f) main_mobtv_loading_pane

0xddf0,	// (0x0001bd24) main_mobtv_pg_channel_list_pane

0xddfa,	// (0x0001bd2e) main_mobtv_pg_hdr_pane

0x7a48,	// (0x0001597c) main_mobtv_programe_curr_pane_ParamLimits

0x7a48,	// (0x0001597c) main_mobtv_programe_curr_pane

0x7a55,	// (0x00015989) main_mobtv_programe_next_pane_ParamLimits

0x7a55,	// (0x00015989) main_mobtv_programe_next_pane

0xde03,	// (0x0001bd37) popup_mobtv_noti_window

0xc307,	// (0x0001a23b) main_tv_pg_hdr_pane_g1

0xde0d,	// (0x0001bd41) main_tv_pg_hdr_pane_g2

0xde15,	// (0x0001bd49) main_tv_pg_hdr_pane_g3

0xde1d,	// (0x0001bd51) main_tv_pg_hdr_pane_g4

0xde25,	// (0x0001bd59) main_tv_pg_hdr_pane_g5

0xde2f,	// (0x0001bd63) main_tv_pg_hdr_pane_g6

0xde39,	// (0x0001bd6d) main_tv_pg_hdr_pane_g7

0xde43,	// (0x0001bd77) main_tv_pg_hdr_pane_g8

0xde4d,	// (0x0001bd81) main_tv_pg_hdr_pane_g9

0xde57,	// (0x0001bd8b) main_tv_pg_hdr_pane_g10

0xde61,	// (0x0001bd95) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x0001db51) main_tv_pg_hdr_pane_g

0xde6b,	// (0x0001bd9f) main_tv_pg_hdr_pane_t1

0xde79,	// (0x0001bdad) main_tv_pg_hdr_pane_t2

0xde87,	// (0x0001bdbb) main_tv_pg_hdr_pane_t3

0xde97,	// (0x0001bdcb) main_tv_pg_hdr_pane_t4

0xdea7,	// (0x0001bddb) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x0001db68) main_tv_pg_hdr_pane_t

0xdeb7,	// (0x0001bdeb) single_mobtv_pg_channel_pane_ParamLimits

0xdeb7,	// (0x0001bdeb) single_mobtv_pg_channel_pane

0xdec9,	// (0x0001bdfd) single_mobtv_pg_channel_table_pane

0xded2,	// (0x0001be06) single_mobtv_pg_channel_thumb_pane

0xdedb,	// (0x0001be0f) single_tv_pg_channel_pane_g1

0xdee4,	// (0x0001be18) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x0001db73) single_tv_pg_channel_pane_g

0xc537,	// (0x0001a46b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc537,	// (0x0001a46b) bg_single_mobtv_pg_channel_thumb_pane

0xdeed,	// (0x0001be21) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdeed,	// (0x0001be21) single_mobtv_pg_channel_thumb_pane_g1

0xdefb,	// (0x0001be2f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdefb,	// (0x0001be2f) single_mobtv_pg_channel_thumb_pane_g2

0xdf07,	// (0x0001be3b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf07,	// (0x0001be3b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x0001db78) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x0001db78) single_mobtv_pg_channel_thumb_pane_g

0xdf13,	// (0x0001be47) single_mobtv_pg_channel_thumb_pane_t1

0xdf21,	// (0x0001be55) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x0001db7f) single_mobtv_pg_channel_thumb_pane_t

0xc307,	// (0x0001a23b) bg_single_mobtv_pg_channel_table_pane_g1

0xc307,	// (0x0001a23b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0001d62f) bg_single_mobtv_pg_channel_table_pane_g

0xdf2f,	// (0x0001be63) single_mobtv_pg_channel_table_pane_t1

0xdf3d,	// (0x0001be71) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x0001db84) single_mobtv_pg_channel_table_pane_t

0x7a6a,	// (0x0001599e) main_mobtv_info_pane_g1_ParamLimits

0x7a6a,	// (0x0001599e) main_mobtv_info_pane_g1

0x7a88,	// (0x000159bc) main_mobtv_info_pane_t1_ParamLimits

0x7a88,	// (0x000159bc) main_mobtv_info_pane_t1

0x7b00,	// (0x00015a34) main_mobtv_info_pane_t2_ParamLimits

0x7b00,	// (0x00015a34) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x0001db8e) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x0001db8e) main_mobtv_info_pane_t

0x7b91,	// (0x00015ac5) wait_bar_pane_cp05

0x7ba3,	// (0x00015ad7) main_mobtv_loading_pane_g1_ParamLimits

0x7ba3,	// (0x00015ad7) main_mobtv_loading_pane_g1

0x7bb4,	// (0x00015ae8) main_mobtv_loading_pane_g2_ParamLimits

0x7bb4,	// (0x00015ae8) main_mobtv_loading_pane_g2

0x7bc0,	// (0x00015af4) main_mobtv_loading_pane_g3_ParamLimits

0x7bc0,	// (0x00015af4) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x0001db95) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x0001db95) main_mobtv_loading_pane_g

0xdf4b,	// (0x0001be7f) main_mobtv_loading_pane_t1_ParamLimits

0xdf4b,	// (0x0001be7f) main_mobtv_loading_pane_t1

0xdf63,	// (0x0001be97) main_mobtv_loading_pane_t2_ParamLimits

0xdf63,	// (0x0001be97) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x0001db9c) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x0001db9c) main_mobtv_loading_pane_t

0x7bd3,	// (0x00015b07) wait_bar_pane_cp06_ParamLimits

0x7bd3,	// (0x00015b07) wait_bar_pane_cp06

0xdf87,	// (0x0001bebb) main_mobtv_programe_curr_pane_t1

0xdf95,	// (0x0001bec9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x0001dba1) main_mobtv_programe_curr_pane_t

0xdfa3,	// (0x0001bed7) main_mobtv_programe_next_pane_t1

0xdfb1,	// (0x0001bee5) main_mobtv_programe_next_pane_t2

0xdfbf,	// (0x0001bef3) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x0001dba6) main_mobtv_programe_next_pane_t

0x93e0,	// (0x00017314) bg_popup_mobtv_noti_window_pane

0xdfcd,	// (0x0001bf01) popup_mobtv_noti_window_g1

0xdfd5,	// (0x0001bf09) popup_mobtv_noti_window_t1

0xdfe3,	// (0x0001bf17) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x0001dbad) popup_mobtv_noti_window_t

0xc307,	// (0x0001a23b) bg_popup_mobtv_noti_window_pane_g1

0x93e0,	// (0x00017314) sc_clock_pane

0x93e0,	// (0x00017314) main_fs_bigclock_pane

0x7366,	// (0x0001529a) blid2_tripm_pane_t4_ParamLimits

0x7366,	// (0x0001529a) blid2_tripm_pane_t4

0x7be2,	// (0x00015b16) sc_clock_pane_g1_ParamLimits

0x7be2,	// (0x00015b16) sc_clock_pane_g1

0x7bf4,	// (0x00015b28) sc_clock_pane_t1_ParamLimits

0x7bf4,	// (0x00015b28) sc_clock_pane_t1

0x7c18,	// (0x00015b4c) sc_clock_pane_t2_ParamLimits

0x7c18,	// (0x00015b4c) sc_clock_pane_t2

0x7c30,	// (0x00015b64) sc_clock_pane_t3_ParamLimits

0x7c30,	// (0x00015b64) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x0001dbb2) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x0001dbb2) sc_clock_pane_t

0x8a5b,	// (0x0001698f) main_fs_bigclock_indicator_pane_ParamLimits

0x8a5b,	// (0x0001698f) main_fs_bigclock_indicator_pane

0xc507,	// (0x0001a43b) main_fs_bigclock_pane_g1_ParamLimits

0xc507,	// (0x0001a43b) main_fs_bigclock_pane_g1

0x8a67,	// (0x0001699b) main_fs_bigclock_pane_t1_ParamLimits

0x8a67,	// (0x0001699b) main_fs_bigclock_pane_t1

0x8a79,	// (0x000169ad) main_fs_bigclock_pane_t2_ParamLimits

0x8a79,	// (0x000169ad) main_fs_bigclock_pane_t2

0x8a8d,	// (0x000169c1) main_fs_bigclock_pane_t3_ParamLimits

0x8a8d,	// (0x000169c1) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x0001ddb1) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x0001ddb1) main_fs_bigclock_pane_t

0xec65,	// (0x0001cb99) main_fs_bigclock_indicator_pane_g1

0xdca5,	// (0x0001bbd9) ncim_query_content_pane_g2_ParamLimits

0xdca5,	// (0x0001bbd9) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x0001db3f) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x0001db3f) ncim_query_content_pane_g

0x7c47,	// (0x00015b7b) sc_clock_pane_t4_ParamLimits

0x7c47,	// (0x00015b7b) sc_clock_pane_t4

0x9451,	// (0x00017385) main_radioblah_pane

0xceda,	// (0x0001ae0e) cell_call4_button_pane_t1_copy1_ParamLimits

0xceda,	// (0x0001ae0e) cell_call4_button_pane_t1_copy1

0x789c,	// (0x000157d0) main_ncimui_pane_t1_ParamLimits

0x789c,	// (0x000157d0) main_ncimui_pane_t1

0x78b6,	// (0x000157ea) main_ncimui_pane_t2_ParamLimits

0x78b6,	// (0x000157ea) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x0001db38) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x0001db38) main_ncimui_pane_t

0xe12f,	// (0x0001c063) main_radioblah_anim_pane_ParamLimits

0xe12f,	// (0x0001c063) main_radioblah_anim_pane

0xe140,	// (0x0001c074) main_radioblah_info_pane_ParamLimits

0xe140,	// (0x0001c074) main_radioblah_info_pane

0xe154,	// (0x0001c088) main_radioblah_pane_t1_ParamLimits

0xe154,	// (0x0001c088) main_radioblah_pane_t1

0xe170,	// (0x0001c0a4) main_radioblah_pane_t2_ParamLimits

0xe170,	// (0x0001c0a4) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x0001dbd3) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x0001dbd3) main_radioblah_pane_t

0x7cf7,	// (0x00015c2b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7cf7,	// (0x00015c2b) main_radioblah_rocker_ctrl_pane

0xe1b8,	// (0x0001c0ec) main_radioblah_info_pane_t1_ParamLimits

0xe1b8,	// (0x0001c0ec) main_radioblah_info_pane_t1

0x7d4f,	// (0x00015c83) main_radioblah_info_pane_t2_ParamLimits

0x7d4f,	// (0x00015c83) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x0001dbdc) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x0001dbdc) main_radioblah_info_pane_t

0xc307,	// (0x0001a23b) main_radioblah_rocker_ctrl_pane_g1

0x7dff,	// (0x00015d33) main_radioblah_rocker_ctrl_pane_g2

0x7e07,	// (0x00015d3b) main_radioblah_rocker_ctrl_pane_g3

0x7e0f,	// (0x00015d43) main_radioblah_rocker_ctrl_pane_g4

0x7e17,	// (0x00015d4b) main_radioblah_rocker_ctrl_pane_g5

0x7e1f,	// (0x00015d53) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x0001dbe5) main_radioblah_rocker_ctrl_pane_g

0x75f5,	// (0x00015529) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf6a,	// (0x0001ae9e) cam4_image_uncrop_qvga_pane

0xcfc0,	// (0x0001aef4) vid4_image_uncrop_qcif_pane

0xd833,	// (0x0001b767) cam6_image_uncrop_qvga_pane_ParamLimits

0xd833,	// (0x0001b767) cam6_image_uncrop_qvga_pane

0xd8fb,	// (0x0001b82f) vid6_image_uncrop_qcif_pane_ParamLimits

0xd8fb,	// (0x0001b82f) vid6_image_uncrop_qcif_pane

0x93e0,	// (0x00017314) bg_popup_preview_window_pane_cp03

0xdc57,	// (0x0001bb8b) list_cset_text2_pane

0xdc5f,	// (0x0001bb93) main_cset6_text2_pane_g1

0xdc67,	// (0x0001bb9b) main_cset6_text2_pane_t1

0x7e27,	// (0x00015d5b) list_cset_text2_pane_t1_ParamLimits

0x7e27,	// (0x00015d5b) list_cset_text2_pane_t1

0x9451,	// (0x00017385) main_radioblah_pane_ParamLimits

0x7b7d,	// (0x00015ab1) main_mobtv_info_pane_t3_ParamLimits

0x7b7d,	// (0x00015ab1) main_mobtv_info_pane_t3

0x7ce5,	// (0x00015c19) main_radioblah_pane_g1

0x7d1f,	// (0x00015c53) main_radioblah_info_pane_g1

0x7da4,	// (0x00015cd8) main_radioblah_info_pane_t3_ParamLimits

0x7da4,	// (0x00015cd8) main_radioblah_info_pane_t3

0x23c4,	// (0x000102f8) highlight_cell_cale_month_pane_ParamLimits

0x23c4,	// (0x000102f8) highlight_cell_cale_month_pane

0x93e0,	// (0x00017314) main_phob_fisheye_pane

0xc625,	// (0x0001a559) scroll_pane_cp0031_ParamLimits

0xc625,	// (0x0001a559) scroll_pane_cp0031

0xda0d,	// (0x0001b941) wait_bar_pane_cp08_ParamLimits

0x767e,	// (0x000155b2) cset_list_set_pane_copy1_ParamLimits

0xe1f2,	// (0x0001c126) highlight_cell_cale_month_pane_g1

0x7e41,	// (0x00015d75) highlight_cell_cale_month_pane_t1

0xd62e,	// (0x0001b562) list_gen_pane_cp01

0xd160,	// (0x0001b094) scroll_pane_01

0x7e4f,	// (0x00015d83) list_single_double_fisheye_pane

0x7e58,	// (0x00015d8c) list_double_fisheye_pane_g1_ParamLimits

0x7e58,	// (0x00015d8c) list_double_fisheye_pane_g1

0x7e64,	// (0x00015d98) list_double_fisheye_pane_g2_ParamLimits

0x7e64,	// (0x00015d98) list_double_fisheye_pane_g2

0x7e78,	// (0x00015dac) list_double_fisheye_pane_g3_ParamLimits

0x7e78,	// (0x00015dac) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x0001dbf2) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x0001dbf2) list_double_fisheye_pane_g

0x7ea1,	// (0x00015dd5) list_double_fisheye_pane_t1_ParamLimits

0x7ea1,	// (0x00015dd5) list_double_fisheye_pane_t1

0x7ebc,	// (0x00015df0) list_double_fisheye_pane_t2_ParamLimits

0x7ebc,	// (0x00015df0) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x0001dbfd) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x0001dbfd) list_double_fisheye_pane_t

0x93e0,	// (0x00017314) main_call5_pane

0x7c72,	// (0x00015ba6) sc_swipe_pane_ParamLimits

0x7c72,	// (0x00015ba6) sc_swipe_pane

0x7ef1,	// (0x00015e25) call5_image_pane_ParamLimits

0x7ef1,	// (0x00015e25) call5_image_pane

0x7f0e,	// (0x00015e42) call5_swipe_1_pane_ParamLimits

0x7f0e,	// (0x00015e42) call5_swipe_1_pane

0x7f21,	// (0x00015e55) call5_swipe_2_pane_ParamLimits

0x7f21,	// (0x00015e55) call5_swipe_2_pane

0x7f4e,	// (0x00015e82) popup_call5_audio_first_window_ParamLimits

0x7f4e,	// (0x00015e82) popup_call5_audio_first_window

0xc537,	// (0x0001a46b) call5_swipe_1_pane_g1_ParamLimits

0xc537,	// (0x0001a46b) call5_swipe_1_pane_g1

0xe1fa,	// (0x0001c12e) call5_swipe_1_pane_g2_ParamLimits

0xe1fa,	// (0x0001c12e) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0001dc02) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0001dc02) call5_swipe_1_pane_g

0xe206,	// (0x0001c13a) call5_swipe_1_pane_t1_ParamLimits

0xe206,	// (0x0001c13a) call5_swipe_1_pane_t1

0xc537,	// (0x0001a46b) call5_swipe_2_pane_g1_ParamLimits

0xc537,	// (0x0001a46b) call5_swipe_2_pane_g1

0xe21b,	// (0x0001c14f) call5_swipe_2_pane_g2_ParamLimits

0xe21b,	// (0x0001c14f) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x0001dc07) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x0001dc07) call5_swipe_2_pane_g

0xe227,	// (0x0001c15b) call5_swipe_2_pane_t1_ParamLimits

0xe227,	// (0x0001c15b) call5_swipe_2_pane_t1

0xe23c,	// (0x0001c170) sc_swipe_pane_g1_ParamLimits

0xe23c,	// (0x0001c170) sc_swipe_pane_g1

0xe249,	// (0x0001c17d) sc_swipe_pane_g2_ParamLimits

0xe249,	// (0x0001c17d) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x0001dc0c) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x0001dc0c) sc_swipe_pane_g

0xe255,	// (0x0001c189) sc_swipe_pane_t1_ParamLimits

0xe255,	// (0x0001c189) sc_swipe_pane_t1

0x93e0,	// (0x00017314) main_cmail_launcher_pane

0x7f63,	// (0x00015e97) aid_size_cell_cmail_l_ParamLimits

0x7f63,	// (0x00015e97) aid_size_cell_cmail_l

0x7f7d,	// (0x00015eb1) grid_cmail_l_pane_ParamLimits

0x7f7d,	// (0x00015eb1) grid_cmail_l_pane

0x7f98,	// (0x00015ecc) cell_cmail_l_pane_ParamLimits

0x7f98,	// (0x00015ecc) cell_cmail_l_pane

0x7fc0,	// (0x00015ef4) cell_cmail_l_pane_g1_ParamLimits

0x7fc0,	// (0x00015ef4) cell_cmail_l_pane_g1

0x7fcc,	// (0x00015f00) cell_cmail_l_pane_t1_ParamLimits

0x7fcc,	// (0x00015f00) cell_cmail_l_pane_t1

0xe26a,	// (0x0001c19e) cell_cmail_l_pane_t2_ParamLimits

0xe26a,	// (0x0001c19e) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x0001dc11) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x0001dc11) cell_cmail_l_pane_t

0x9451,	// (0x00017385) grid_highlight_pane_cp018_ParamLimits

0x9451,	// (0x00017385) grid_highlight_pane_cp018

0x09e1,	// (0x0000e915) main2_pane_ParamLimits

0x09e1,	// (0x0000e915) main2_pane

0x9cd0,	// (0x00017c04) popup_sp_fs_action_menu_bg_pane_g1

0x9cd8,	// (0x00017c0c) popup_sp_fs_action_menu_bg_pane_g2

0x9ce0,	// (0x00017c14) popup_sp_fs_action_menu_bg_pane_g3

0x9ce8,	// (0x00017c1c) popup_sp_fs_action_menu_bg_pane_g4

0x9cf0,	// (0x00017c24) popup_sp_fs_action_menu_bg_pane_g5

0x9cf8,	// (0x00017c2c) popup_sp_fs_action_menu_bg_pane_g6

0x9d00,	// (0x00017c34) popup_sp_fs_action_menu_bg_pane_g7

0x9d08,	// (0x00017c3c) popup_sp_fs_action_menu_bg_pane_g8

0x9d10,	// (0x00017c44) popup_sp_fs_action_menu_bg_pane_g9

0x9d18,	// (0x00017c4c) popup_sp_fs_action_menu_bg_pane_g10

0x9d18,	// (0x00017c4c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0001d0db) popup_sp_fs_action_menu_bg_pane_g

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t3_g3_g1

0x9ef4,	// (0x00017e28) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9ef4,	// (0x00017e28) list_medium_line_x2_t3_g3_g2

0x9f00,	// (0x00017e34) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9f00,	// (0x00017e34) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0001d18b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0001d18b) list_medium_line_x2_t3_g3_g

0x9f0c,	// (0x00017e40) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9f0c,	// (0x00017e40) list_medium_line_x2_t3_g3_t1

0x1711,	// (0x0000f645) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1711,	// (0x0000f645) list_medium_line_x2_t3_g3_t2

0x9f21,	// (0x00017e55) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9f21,	// (0x00017e55) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0001d192) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0001d192) list_medium_line_x2_t3_g3_t

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t3_g2_g1

0x9f00,	// (0x00017e34) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9f00,	// (0x00017e34) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0001d199) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0001d199) list_medium_line_x2_t3_g2_g

0x9f36,	// (0x00017e6a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9f36,	// (0x00017e6a) list_medium_line_x2_t3_g2_t1

0x9f4c,	// (0x00017e80) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9f4c,	// (0x00017e80) list_medium_line_x2_t3_g2_t2

0x9f5e,	// (0x00017e92) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9f5e,	// (0x00017e92) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0001d19e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0001d19e) list_medium_line_x2_t3_g2_t

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t4_g4_g1

0x9f7c,	// (0x00017eb0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9f7c,	// (0x00017eb0) list_medium_line_x2_t4_g4_g2

0x9ef4,	// (0x00017e28) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9ef4,	// (0x00017e28) list_medium_line_x2_t4_g4_g3

0x9f88,	// (0x00017ebc) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9f88,	// (0x00017ebc) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0001d1a5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0001d1a5) list_medium_line_x2_t4_g4_g

0x1725,	// (0x0000f659) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1725,	// (0x0000f659) list_medium_line_x2_t4_g4_t1

0x173c,	// (0x0000f670) list_medium_line_x2_t4_g4_t2_ParamLimits

0x173c,	// (0x0000f670) list_medium_line_x2_t4_g4_t2

0x1751,	// (0x0000f685) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1751,	// (0x0000f685) list_medium_line_x2_t4_g4_t3

0x9f94,	// (0x00017ec8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9f94,	// (0x00017ec8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0001d1ae) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0001d1ae) list_medium_line_x2_t4_g4_t

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t2_g4_g1

0x9f7c,	// (0x00017eb0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9f7c,	// (0x00017eb0) list_medium_line_x2_t2_g4_g2

0x9ef4,	// (0x00017e28) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9ef4,	// (0x00017e28) list_medium_line_x2_t2_g4_g3

0x9f00,	// (0x00017e34) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9f00,	// (0x00017e34) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0001d215) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0001d215) list_medium_line_x2_t2_g4_g

0xa282,	// (0x000181b6) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa282,	// (0x000181b6) list_medium_line_x2_t2_g4_t1

0x9f21,	// (0x00017e55) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9f21,	// (0x00017e55) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0001d21e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0001d21e) list_medium_line_x2_t2_g4_t

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t2_g3_g1

0x9ef4,	// (0x00017e28) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9ef4,	// (0x00017e28) list_medium_line_x2_t2_g3_g2

0x9f00,	// (0x00017e34) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9f00,	// (0x00017e34) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0001d18b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0001d18b) list_medium_line_x2_t2_g3_g

0xa297,	// (0x000181cb) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa297,	// (0x000181cb) list_medium_line_x2_t2_g3_t1

0x9f21,	// (0x00017e55) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9f21,	// (0x00017e55) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0001d223) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0001d223) list_medium_line_x2_t2_g3_t

0x259d,	// (0x000104d1) main_sp_fs_list_pane_ParamLimits

0x259d,	// (0x000104d1) main_sp_fs_list_pane

0x25a9,	// (0x000104dd) sp_fs_scroll_pane_ParamLimits

0x25a9,	// (0x000104dd) sp_fs_scroll_pane

0x25b5,	// (0x000104e9) list_medium_line_x2_t3_t1

0x25c5,	// (0x000104f9) list_medium_line_x2_t3_t2

0xa47c,	// (0x000183b0) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0001d26e) list_medium_line_x2_t3_t

0x25d3,	// (0x00010507) list_medium_line_x3_t4_t1

0x25e3,	// (0x00010517) list_medium_line_x3_t4_t2

0xa48a,	// (0x000183be) list_medium_line_x3_t4_t3

0xa47c,	// (0x000183b0) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0001d275) list_medium_line_x3_t4_t

0x25f1,	// (0x00010525) list_medium_line_x4_t5_t1

0x2601,	// (0x00010535) list_medium_line_x4_t5_t2

0xa48a,	// (0x000183be) list_medium_line_x4_t5_t3

0xa498,	// (0x000183cc) list_medium_line_x4_t5_t4

0xa47c,	// (0x000183b0) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0001d27e) list_medium_line_x4_t5_t

0x9ee8,	// (0x00017e1c) list_medium_line_t4_g4_g1_ParamLimits

0x9ee8,	// (0x00017e1c) list_medium_line_t4_g4_g1

0x9f88,	// (0x00017ebc) list_medium_line_t4_g4_g2_ParamLimits

0x9f88,	// (0x00017ebc) list_medium_line_t4_g4_g2

0xa4a6,	// (0x000183da) list_medium_line_t4_g4_g3_ParamLimits

0xa4a6,	// (0x000183da) list_medium_line_t4_g4_g3

0x9f00,	// (0x00017e34) list_medium_line_t4_g4_g4_ParamLimits

0x9f00,	// (0x00017e34) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0001d289) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0001d289) list_medium_line_t4_g4_g

0xa4b2,	// (0x000183e6) list_medium_line_t4_g4_t1_ParamLimits

0xa4b2,	// (0x000183e6) list_medium_line_t4_g4_t1

0xa4c7,	// (0x000183fb) list_medium_line_t4_g4_t2_ParamLimits

0xa4c7,	// (0x000183fb) list_medium_line_t4_g4_t2

0xa4dd,	// (0x00018411) list_medium_line_t4_g4_t3_ParamLimits

0xa4dd,	// (0x00018411) list_medium_line_t4_g4_t3

0x9f21,	// (0x00017e55) list_medium_line_t4_g4_t4_ParamLimits

0x9f21,	// (0x00017e55) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0001d292) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0001d292) list_medium_line_t4_g4_t

0x26d5,	// (0x00010609) chi_dic_find_pane_g1

0x3916,	// (0x0001184a) main_tport_pane

0xd2a7,	// (0x0001b1db) list_medium_line_plain_t1

0xd2f9,	// (0x0001b22d) list_medium_line_t2_g2_g1_ParamLimits

0xd2f9,	// (0x0001b22d) list_medium_line_t2_g2_g1

0xd305,	// (0x0001b239) list_medium_line_t2_g2_g2_ParamLimits

0xd305,	// (0x0001b239) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x0001d94e) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x0001d94e) list_medium_line_t2_g2_g

0x6aa5,	// (0x000149d9) list_medium_line_t2_g2_t1_ParamLimits

0x6aa5,	// (0x000149d9) list_medium_line_t2_g2_t1

0x6abc,	// (0x000149f0) list_medium_line_t2_g2_t2_ParamLimits

0x6abc,	// (0x000149f0) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x0001d953) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x0001d953) list_medium_line_t2_g2_t

0xd654,	// (0x0001b588) aid_sp_fs_list_icon_a_sm

0xd65c,	// (0x0001b590) aid_sp_fs_list_icon_d

0xd664,	// (0x0001b598) aid_sp_fs_text_primary

0xd66d,	// (0x0001b5a1) aid_sp_fs_text_secondary

0xd676,	// (0x0001b5aa) list_medium_line

0xd676,	// (0x0001b5aa) list_medium_line_g2

0xd676,	// (0x0001b5aa) list_medium_line_g3

0xd676,	// (0x0001b5aa) list_medium_line_plain

0xd676,	// (0x0001b5aa) list_medium_line_plain_t2

0xd676,	// (0x0001b5aa) list_medium_line_plain_t3

0xd676,	// (0x0001b5aa) list_medium_line_right_icon

0xd676,	// (0x0001b5aa) list_medium_line_right_iconx2

0xd676,	// (0x0001b5aa) list_medium_line_t2

0xd676,	// (0x0001b5aa) list_medium_line_t2_g2

0xd676,	// (0x0001b5aa) list_medium_line_t2_g3

0xd676,	// (0x0001b5aa) list_medium_line_t2_right_icon

0xd676,	// (0x0001b5aa) list_medium_line_t2_right_iconx2

0xd676,	// (0x0001b5aa) list_medium_line_t3

0xd676,	// (0x0001b5aa) list_medium_line_t3_g2

0xd676,	// (0x0001b5aa) list_medium_line_t3_g3

0xd676,	// (0x0001b5aa) list_medium_line_t3_right_iconx2

0xd67f,	// (0x0001b5b3) list_medium_line_t4_g4

0xd688,	// (0x0001b5bc) list_medium_line_x2

0xd688,	// (0x0001b5bc) list_medium_line_x2_t2_g2

0xd688,	// (0x0001b5bc) list_medium_line_x2_t2_g3

0xd688,	// (0x0001b5bc) list_medium_line_x2_t2_g4

0xd688,	// (0x0001b5bc) list_medium_line_x2_t3

0xd688,	// (0x0001b5bc) list_medium_line_x2_t3_g2

0xd688,	// (0x0001b5bc) list_medium_line_x2_t3_g3

0xd688,	// (0x0001b5bc) list_medium_line_x2_t3_g4

0xd688,	// (0x0001b5bc) list_medium_line_x2_t4_g2

0xd688,	// (0x0001b5bc) list_medium_line_x2_t4_g4

0xd691,	// (0x0001b5c5) list_medium_line_x3

0xd691,	// (0x0001b5c5) list_medium_line_x3_t4

0xd691,	// (0x0001b5c5) list_medium_line_x3_t4_g4

0xd67f,	// (0x0001b5b3) list_medium_line_x4_t4

0xd67f,	// (0x0001b5b3) list_medium_line_x4_t4_g7

0xd67f,	// (0x0001b5b3) list_medium_line_x4_t5

0xd69a,	// (0x0001b5ce) list_single_fs_dyc_pane_ParamLimits

0xd69a,	// (0x0001b5ce) list_single_fs_dyc_pane

0x9ee8,	// (0x00017e1c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9ee8,	// (0x00017e1c) list_medium_line_x4_t4_g7_g1

0xdb86,	// (0x0001baba) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdb86,	// (0x0001baba) list_medium_line_x4_t4_g7_g2

0xdb92,	// (0x0001bac6) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdb92,	// (0x0001bac6) list_medium_line_x4_t4_g7_g3

0xdba1,	// (0x0001bad5) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdba1,	// (0x0001bad5) list_medium_line_x4_t4_g7_g4

0xdbad,	// (0x0001bae1) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdbad,	// (0x0001bae1) list_medium_line_x4_t4_g7_g5

0xdbbc,	// (0x0001baf0) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdbbc,	// (0x0001baf0) list_medium_line_x4_t4_g7_g6

0xdbcb,	// (0x0001baff) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdbcb,	// (0x0001baff) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x0001db1e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x0001db1e) list_medium_line_x4_t4_g7_g

0xdbd7,	// (0x0001bb0b) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdbd7,	// (0x0001bb0b) list_medium_line_x4_t4_g7_t1

0xdbec,	// (0x0001bb20) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdbec,	// (0x0001bb20) list_medium_line_x4_t4_g7_t2

0xdc01,	// (0x0001bb35) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdc01,	// (0x0001bb35) list_medium_line_x4_t4_g7_t3

0xdc16,	// (0x0001bb4a) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc16,	// (0x0001bb4a) list_medium_line_x4_t4_g7_t4

0xdc28,	// (0x0001bb5c) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc28,	// (0x0001bb5c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x0001db2d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x0001db2d) list_medium_line_x4_t4_g7_t

0xdc3a,	// (0x0001bb6e) list_single_dyc_row_pane_ParamLimits

0xdc3a,	// (0x0001bb6e) list_single_dyc_row_pane

0x7ede,	// (0x00015e12) call5_gesture_pane_ParamLimits

0x7ede,	// (0x00015e12) call5_gesture_pane

0x7f34,	// (0x00015e68) call5_windows_pane_ParamLimits

0x7f34,	// (0x00015e68) call5_windows_pane

0x7fe2,	// (0x00015f16) call5_swipe_1_pane_cp_ParamLimits

0x7fe2,	// (0x00015f16) call5_swipe_1_pane_cp

0x7fee,	// (0x00015f22) call5_swipe_2_pane_cp_ParamLimits

0x7fee,	// (0x00015f22) call5_swipe_2_pane_cp

0xa927,	// (0x0001885b) call5_image_pane_cp

0x7ffa,	// (0x00015f2e) popup_call5_audio_first_window_cp_ParamLimits

0x7ffa,	// (0x00015f2e) popup_call5_audio_first_window_cp

0xe23c,	// (0x0001c170) call5_swipe_1_pane_g1_cp_ParamLimits

0xe23c,	// (0x0001c170) call5_swipe_1_pane_g1_cp

0xe27c,	// (0x0001c1b0) call5_swipe_1_pane_g2_cp

0xe255,	// (0x0001c189) call5_swipe_1_pane_t1_cp_ParamLimits

0xe255,	// (0x0001c189) call5_swipe_1_pane_t1_cp

0xe23c,	// (0x0001c170) call5_swipe_2_pane_g1_cp_ParamLimits

0xe23c,	// (0x0001c170) call5_swipe_2_pane_g1_cp

0xe284,	// (0x0001c1b8) call5_swipe_2_pane_g2_cp

0xe28c,	// (0x0001c1c0) call5_swipe_2_pane_t1_cp_ParamLimits

0xe28c,	// (0x0001c1c0) call5_swipe_2_pane_t1_cp

0x9451,	// (0x00017385) main_sp_fs_email_pane

0xe2a1,	// (0x0001c1d5) main_sp_fs_listscroll_pane_te

0xe2aa,	// (0x0001c1de) popup_sp_fs_action_menu_pane_ParamLimits

0xe2aa,	// (0x0001c1de) popup_sp_fs_action_menu_pane

0xc307,	// (0x0001a23b) bg_sp_fs_ctrlbar_pane_g1

0xe2f0,	// (0x0001c224) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2f9,	// (0x0001c22d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe302,	// (0x0001c236) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc307,	// (0x0001a23b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x0001dc16) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc0e6,	// (0x0001a01a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc0e6,	// (0x0001a01a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe30b,	// (0x0001c23f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe30b,	// (0x0001c23f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe317,	// (0x0001c24b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe317,	// (0x0001c24b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x0001dc1f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x0001dc1f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe323,	// (0x0001c257) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe323,	// (0x0001c257) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe33d,	// (0x0001c271) list_medium_line_t2_right_icon_g1

0x8008,	// (0x00015f3c) list_medium_line_t2_right_icon_t1

0x8018,	// (0x00015f4c) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x0001dc24) list_medium_line_t2_right_icon_t

0xbdd2,	// (0x00019d06) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbdd2,	// (0x00019d06) bg_sp_fs_ctrlbar_pane

0x8072,	// (0x00015fa6) main_sp_fs_ctrlbar_button_pane_cp01

0x807c,	// (0x00015fb0) main_sp_fs_ctrlbar_ddmenu_pane

0xe37f,	// (0x0001c2b3) main_sp_fs_ctrlbar_pane_g1

0xe38b,	// (0x0001c2bf) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x0001dc29) main_sp_fs_ctrlbar_pane_g

0xe397,	// (0x0001c2cb) main_sp_fs_ctrlbar_pane_t1

0x8086,	// (0x00015fba) main_sp_fs_ctrlbar_pane

0x80aa,	// (0x00015fde) main_sp_fs_listscroll_pane_te_cp01

0x80ca,	// (0x00015ffe) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x80ca,	// (0x00015ffe) popup_sp_fs_action_menu_pane_cp01

0x9451,	// (0x00017385) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9451,	// (0x00017385) bg_sp_fs_highlight_list_pane_cp01

0xe3bc,	// (0x0001c2f0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3bc,	// (0x0001c2f0) sp_fs_action_menu_list_gene_pane_g1

0xe3cb,	// (0x0001c2ff) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3cb,	// (0x0001c2ff) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0001dc33) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0001dc33) sp_fs_action_menu_list_gene_pane_g

0xe3d8,	// (0x0001c30c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3d8,	// (0x0001c30c) sp_fs_action_menu_list_gene_pane_t1

0xe3f0,	// (0x0001c324) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3f0,	// (0x0001c324) sp_fs_action_menu_list_gene_pane

0xe413,	// (0x0001c347) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe413,	// (0x0001c347) popup_sp_fs_action_menu_bg_pane

0xe421,	// (0x0001c355) sp_fs_action_menu_list_pane_ParamLimits

0xe421,	// (0x0001c355) sp_fs_action_menu_list_pane

0xe445,	// (0x0001c379) sp_fs_scroll_pane_cp01_ParamLimits

0xe445,	// (0x0001c379) sp_fs_scroll_pane_cp01

0x80e6,	// (0x0001601a) list_medium_line_plain_t2_t1

0x80f6,	// (0x0001602a) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0001dc38) list_medium_line_plain_t2_t

0x8106,	// (0x0001603a) list_medium_line_plain_t3_t1

0x8116,	// (0x0001604a) list_medium_line_plain_t3_t2

0x8124,	// (0x00016058) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0001dc3d) list_medium_line_plain_t3_t

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t2_g2_g1

0x9f00,	// (0x00017e34) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9f00,	// (0x00017e34) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0001d199) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0001d199) list_medium_line_x2_t2_g2_g

0xa4b2,	// (0x000183e6) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa4b2,	// (0x000183e6) list_medium_line_x2_t2_g2_t1

0x9f21,	// (0x00017e55) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9f21,	// (0x00017e55) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0001dc44) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0001dc44) list_medium_line_x2_t2_g2_t

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t4_g2_g1

0x9f00,	// (0x00017e34) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9f00,	// (0x00017e34) list_medium_line_x2_t4_g2_g2

0x0001,

0xf265,	// (0x0001d199) list_medium_line_x2_t4_g2_g_ParamLimits

0xf265,	// (0x0001d199) list_medium_line_x2_t4_g2_g

0x8132,	// (0x00016066) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8132,	// (0x00016066) list_medium_line_x2_t4_g2_t1

0x814c,	// (0x00016080) list_medium_line_x2_t4_g2_t2_ParamLimits

0x814c,	// (0x00016080) list_medium_line_x2_t4_g2_t2

0x8162,	// (0x00016096) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8162,	// (0x00016096) list_medium_line_x2_t4_g2_t3

0x9f21,	// (0x00017e55) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9f21,	// (0x00017e55) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0001dc49) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0001dc49) list_medium_line_x2_t4_g2_t

0xe46b,	// (0x0001c39f) list_medium_line_t3_right_iconx2_g1

0xe33d,	// (0x0001c271) list_medium_line_t3_right_iconx2_g2

0x8177,	// (0x000160ab) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x0001dc52) list_medium_line_t3_right_iconx2_g

0x8181,	// (0x000160b5) list_medium_line_t3_right_iconx2_t1

0x8191,	// (0x000160c5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x0001dc59) list_medium_line_t3_right_iconx2_t

0x9ee8,	// (0x00017e1c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9ee8,	// (0x00017e1c) list_medium_line_x3_t4_g4_g1

0x9ef4,	// (0x00017e28) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9ef4,	// (0x00017e28) list_medium_line_x3_t4_g4_g2

0x9f88,	// (0x00017ebc) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9f88,	// (0x00017ebc) list_medium_line_x3_t4_g4_g3

0xe473,	// (0x0001c3a7) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe473,	// (0x0001c3a7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0001dc5e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0001dc5e) list_medium_line_x3_t4_g4_g

0x819f,	// (0x000160d3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x819f,	// (0x000160d3) list_medium_line_x3_t4_g4_t1

0x81b6,	// (0x000160ea) list_medium_line_x3_t4_g4_t2_ParamLimits

0x81b6,	// (0x000160ea) list_medium_line_x3_t4_g4_t2

0xe47f,	// (0x0001c3b3) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe47f,	// (0x0001c3b3) list_medium_line_x3_t4_g4_t3

0xe494,	// (0x0001c3c8) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe494,	// (0x0001c3c8) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x0001dc67) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x0001dc67) list_medium_line_x3_t4_g4_t

0x81d1,	// (0x00016105) list_single_dyc_row_text_pane_t1_ParamLimits

0x81d1,	// (0x00016105) list_single_dyc_row_text_pane_t1

0x821a,	// (0x0001614e) list_single_dyc_row_text_pane_t2_ParamLimits

0x821a,	// (0x0001614e) list_single_dyc_row_text_pane_t2

0xe4b1,	// (0x0001c3e5) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4b1,	// (0x0001c3e5) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x0001dc70) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x0001dc70) list_single_dyc_row_text_pane_t

0xe4c3,	// (0x0001c3f7) list_single_dyc_row_pane_g1_ParamLimits

0xe4c3,	// (0x0001c3f7) list_single_dyc_row_pane_g1

0xe4cf,	// (0x0001c403) list_single_dyc_row_pane_g2_ParamLimits

0xe4cf,	// (0x0001c403) list_single_dyc_row_pane_g2

0xe4db,	// (0x0001c40f) list_single_dyc_row_pane_g3_ParamLimits

0xe4db,	// (0x0001c40f) list_single_dyc_row_pane_g3

0xe4e7,	// (0x0001c41b) list_single_dyc_row_pane_g4_ParamLimits

0xe4e7,	// (0x0001c41b) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x0001dc77) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x0001dc77) list_single_dyc_row_pane_g

0xe4f3,	// (0x0001c427) list_single_dyc_row_text_pane_ParamLimits

0xe4f3,	// (0x0001c427) list_single_dyc_row_text_pane

0x93e0,	// (0x00017314) bg_sp_fs_scroll_pane

0xe512,	// (0x0001c446) thumb_sp_fs_scroll_pane

0xd2f9,	// (0x0001b22d) list_medium_line_g1_ParamLimits

0xd2f9,	// (0x0001b22d) list_medium_line_g1

0xe51b,	// (0x0001c44f) list_medium_line_t1_ParamLimits

0xe51b,	// (0x0001c44f) list_medium_line_t1

0x9ee8,	// (0x00017e1c) list_medium_line_x2_g1_ParamLimits

0x9ee8,	// (0x00017e1c) list_medium_line_x2_g1

0x9ef4,	// (0x00017e28) list_medium_line_x2_g2_ParamLimits

0x9ef4,	// (0x00017e28) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x0001dc80) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x0001dc80) list_medium_line_x2_g

0xe530,	// (0x0001c464) list_medium_line_x2_t1_ParamLimits

0xe530,	// (0x0001c464) list_medium_line_x2_t1

0x9ee8,	// (0x00017e1c) list_medium_line_x3_g1_ParamLimits

0x9ee8,	// (0x00017e1c) list_medium_line_x3_g1

0x9ef4,	// (0x00017e28) list_medium_line_x3_g2_ParamLimits

0x9ef4,	// (0x00017e28) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x0001dc80) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x0001dc80) list_medium_line_x3_g

0xe530,	// (0x0001c464) list_medium_line_x3_t1_ParamLimits

0xe530,	// (0x0001c464) list_medium_line_x3_t1

0xe546,	// (0x0001c47a) thumb_sp_fs_scroll_pane_g1

0xe54f,	// (0x0001c483) thumb_sp_fs_scroll_pane_g2

0xe558,	// (0x0001c48c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001dc85) thumb_sp_fs_scroll_pane_g

0xe546,	// (0x0001c47a) bg_sp_fs_scroll_pane_g1

0xe54f,	// (0x0001c483) bg_sp_fs_scroll_pane_g2

0xe558,	// (0x0001c48c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001dc85) bg_sp_fs_scroll_pane_g

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9ee8,	// (0x00017e1c) list_medium_line_x2_t3_g4_g1

0x9f7c,	// (0x00017eb0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9f7c,	// (0x00017eb0) list_medium_line_x2_t3_g4_g2

0x9ef4,	// (0x00017e28) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9ef4,	// (0x00017e28) list_medium_line_x2_t3_g4_g3

0x9f00,	// (0x00017e34) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9f00,	// (0x00017e34) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0001d215) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0001d215) list_medium_line_x2_t3_g4_g

0x8274,	// (0x000161a8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8274,	// (0x000161a8) list_medium_line_x2_t3_g4_t1

0x828a,	// (0x000161be) list_medium_line_x2_t3_g4_t2_ParamLimits

0x828a,	// (0x000161be) list_medium_line_x2_t3_g4_t2

0x9f21,	// (0x00017e55) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9f21,	// (0x00017e55) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x0001dc8c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x0001dc8c) list_medium_line_x2_t3_g4_t

0xd2f9,	// (0x0001b22d) list_medium_line_g2_g1_ParamLimits

0xd2f9,	// (0x0001b22d) list_medium_line_g2_g1

0xd305,	// (0x0001b239) list_medium_line_g2_g2_ParamLimits

0xd305,	// (0x0001b239) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x0001d94e) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x0001d94e) list_medium_line_g2_g

0xe561,	// (0x0001c495) list_medium_line_g2_t1_ParamLimits

0xe561,	// (0x0001c495) list_medium_line_g2_t1

0xd2f9,	// (0x0001b22d) list_medium_line_t3_g2_g1_ParamLimits

0xd2f9,	// (0x0001b22d) list_medium_line_t3_g2_g1

0xd305,	// (0x0001b239) list_medium_line_t3_g2_g2_ParamLimits

0xd305,	// (0x0001b239) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x0001d94e) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x0001d94e) list_medium_line_t3_g2_g

0x82a3,	// (0x000161d7) list_medium_line_t3_g2_t1_ParamLimits

0x82a3,	// (0x000161d7) list_medium_line_t3_g2_t1

0x82bd,	// (0x000161f1) list_medium_line_t3_g2_t2_ParamLimits

0x82bd,	// (0x000161f1) list_medium_line_t3_g2_t2

0x82d3,	// (0x00016207) list_medium_line_t3_g2_t3_ParamLimits

0x82d3,	// (0x00016207) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x0001dc93) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x0001dc93) list_medium_line_t3_g2_t

0xe33d,	// (0x0001c271) list_medium_line_right_icon_g1

0xe576,	// (0x0001c4aa) list_medium_line_right_icon_t1

0xd2f9,	// (0x0001b22d) list_medium_line_t2_g1_ParamLimits

0xd2f9,	// (0x0001b22d) list_medium_line_t2_g1

0x82ea,	// (0x0001621e) list_medium_line_t2_t1_ParamLimits

0x82ea,	// (0x0001621e) list_medium_line_t2_t1

0x8304,	// (0x00016238) list_medium_line_t2_t2_ParamLimits

0x8304,	// (0x00016238) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x0001dc9a) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x0001dc9a) list_medium_line_t2_t

0xd2f9,	// (0x0001b22d) list_medium_line_t3_g1_ParamLimits

0xd2f9,	// (0x0001b22d) list_medium_line_t3_g1

0x831d,	// (0x00016251) list_medium_line_t3_t1_ParamLimits

0x831d,	// (0x00016251) list_medium_line_t3_t1

0x8337,	// (0x0001626b) list_medium_line_t3_t2_ParamLimits

0x8337,	// (0x0001626b) list_medium_line_t3_t2

0x834d,	// (0x00016281) list_medium_line_t3_t3_ParamLimits

0x834d,	// (0x00016281) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x0001dc9f) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x0001dc9f) list_medium_line_t3_t

0xd2f9,	// (0x0001b22d) list_medium_line_g3_g1_ParamLimits

0xd2f9,	// (0x0001b22d) list_medium_line_g3_g1

0xe584,	// (0x0001c4b8) list_medium_line_g3_g2_ParamLimits

0xe584,	// (0x0001c4b8) list_medium_line_g3_g2

0xd305,	// (0x0001b239) list_medium_line_g3_g3_ParamLimits

0xd305,	// (0x0001b239) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x0001dca6) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x0001dca6) list_medium_line_g3_g

0xe590,	// (0x0001c4c4) list_medium_line_g3_t1_ParamLimits

0xe590,	// (0x0001c4c4) list_medium_line_g3_t1

0xd2f9,	// (0x0001b22d) list_medium_line_t2_g3_g1_ParamLimits

0xd2f9,	// (0x0001b22d) list_medium_line_t2_g3_g1

0xe584,	// (0x0001c4b8) list_medium_line_t2_g3_g2_ParamLimits

0xe584,	// (0x0001c4b8) list_medium_line_t2_g3_g2

0xd305,	// (0x0001b239) list_medium_line_t2_g3_g3_ParamLimits

0xd305,	// (0x0001b239) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x0001dca6) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x0001dca6) list_medium_line_t2_g3_g

0x8362,	// (0x00016296) list_medium_line_t2_g3_t1_ParamLimits

0x8362,	// (0x00016296) list_medium_line_t2_g3_t1

0x8379,	// (0x000162ad) list_medium_line_t2_g3_t2_ParamLimits

0x8379,	// (0x000162ad) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x0001dcad) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x0001dcad) list_medium_line_t2_g3_t

0xd2f9,	// (0x0001b22d) list_medium_line_t3_g3_g1_ParamLimits

0xd2f9,	// (0x0001b22d) list_medium_line_t3_g3_g1

0xe584,	// (0x0001c4b8) list_medium_line_t3_g3_g2_ParamLimits

0xe584,	// (0x0001c4b8) list_medium_line_t3_g3_g2

0xd305,	// (0x0001b239) list_medium_line_t3_g3_g3_ParamLimits

0xd305,	// (0x0001b239) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x0001dca6) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x0001dca6) list_medium_line_t3_g3_g

0x8392,	// (0x000162c6) list_medium_line_t3_g3_t1_ParamLimits

0x8392,	// (0x000162c6) list_medium_line_t3_g3_t1

0x83ab,	// (0x000162df) list_medium_line_t3_g3_t2_ParamLimits

0x83ab,	// (0x000162df) list_medium_line_t3_g3_t2

0x83c1,	// (0x000162f5) list_medium_line_t3_g3_t3_ParamLimits

0x83c1,	// (0x000162f5) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x0001dcb2) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x0001dcb2) list_medium_line_t3_g3_t

0xe46b,	// (0x0001c39f) list_medium_line_right_iconx2_g1

0xe33d,	// (0x0001c271) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001dcb9) list_medium_line_right_iconx2_g

0xe5a5,	// (0x0001c4d9) list_medium_line_right_iconx2_t1

0xe46b,	// (0x0001c39f) list_medium_line_t2_right_iconx2_g1

0xe33d,	// (0x0001c271) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001dcb9) list_medium_line_t2_right_iconx2_g

0x83db,	// (0x0001630f) list_medium_line_t2_right_iconx2_t1

0x83eb,	// (0x0001631f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x0001dcbe) list_medium_line_t2_right_iconx2_t

0xe5b3,	// (0x0001c4e7) list_medium_line_x4_t4_t1

0x83fd,	// (0x00016331) list_medium_line_x4_t4_t2

0x840d,	// (0x00016341) list_medium_line_x4_t4_t3

0x841d,	// (0x00016351) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x0001dcc3) list_medium_line_x4_t4_t

0x8467,	// (0x0001639b) tport_appsw_pane_ParamLimits

0x8467,	// (0x0001639b) tport_appsw_pane

0x847a,	// (0x000163ae) tport_contact_pane_ParamLimits

0x847a,	// (0x000163ae) tport_contact_pane

0x848d,	// (0x000163c1) tport_listscroll_pane_ParamLimits

0x848d,	// (0x000163c1) tport_listscroll_pane

0x84a3,	// (0x000163d7) cell_tport_appsw_pane_ParamLimits

0x84a3,	// (0x000163d7) cell_tport_appsw_pane

0xd005,	// (0x0001af39) tport_appsw_pane_g1_ParamLimits

0xd005,	// (0x0001af39) tport_appsw_pane_g1

0xe5c1,	// (0x0001c4f5) tport_contact_pane_g1

0xe5ca,	// (0x0001c4fe) tport_contact_pane_t1

0xe5d8,	// (0x0001c50c) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x0001dccc) tport_contact_pane_t

0xe5e6,	// (0x0001c51a) list_tport_pane

0xe5ef,	// (0x0001c523) scroll_pane_cp_030

0x84e9,	// (0x0001641d) cell_tport_appsw_pane_g1

0xe608,	// (0x0001c53c) cell_tport_appsw_pane_t1

0x93e0,	// (0x00017314) grid_highlight_pane_cp019

0x84f9,	// (0x0001642d) list_tport_double_graphic_pane_ParamLimits

0x84f9,	// (0x0001642d) list_tport_double_graphic_pane

0x9451,	// (0x00017385) list_highlight_pane_cp023_ParamLimits

0x9451,	// (0x00017385) list_highlight_pane_cp023

0x8509,	// (0x0001643d) list_tport_double_graphic_pane_g1_ParamLimits

0x8509,	// (0x0001643d) list_tport_double_graphic_pane_g1

0x8516,	// (0x0001644a) list_tport_double_graphic_pane_t1_ParamLimits

0x8516,	// (0x0001644a) list_tport_double_graphic_pane_t1

0x852b,	// (0x0001645f) list_tport_double_graphic_pane_t2_ParamLimits

0x852b,	// (0x0001645f) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x0001dcd8) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x0001dcd8) list_tport_double_graphic_pane_t

0x93e0,	// (0x00017314) main_cale_note_pane

0x612a,	// (0x0001405e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x612a,	// (0x0001405e) cell_vitu2_function_top_wide_pane_cp01

0x7b91,	// (0x00015ac5) wait_bar_pane_cp05_ParamLimits

0x93e0,	// (0x00017314) listscroll_cmail_pane

0xe61e,	// (0x0001c552) list_cmail_pane

0x8547,	// (0x0001647b) list_cmail_body_pane

0x855f,	// (0x00016493) list_single_cmail_header_caption_pane

0x857c,	// (0x000164b0) list_single_cmail_header_detail_pane_ParamLimits

0x857c,	// (0x000164b0) list_single_cmail_header_detail_pane

0x85ae,	// (0x000164e2) list_single_cmail_header_caption_pane_t1

0x85be,	// (0x000164f2) list_single_cmail_header_detail_pane_g1_ParamLimits

0x85be,	// (0x000164f2) list_single_cmail_header_detail_pane_g1

0xe63e,	// (0x0001c572) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe63e,	// (0x0001c572) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x0001dcdd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x0001dcdd) list_single_cmail_header_detail_pane_g

0xe657,	// (0x0001c58b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe657,	// (0x0001c58b) list_single_cmail_header_detail_pane_t1

0xe695,	// (0x0001c5c9) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe695,	// (0x0001c5c9) list_single_cmail_header_editor_pane_bg

0xdee4,	// (0x0001be18) list_cmail_body_pane_g1

0xe6a7,	// (0x0001c5db) list_cmail_body_pane_t1

0xd042,	// (0x0001af76) list_single_cmail_header_editor_pane_bg_g1

0xa1a1,	// (0x000180d5) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd052,	// (0x0001af86) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd04a,	// (0x0001af7e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd2d1,	// (0x0001b205) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd072,	// (0x0001afa6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd062,	// (0x0001af96) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd06a,	// (0x0001af9e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa181,	// (0x000180b5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x85fc,	// (0x00016530) calenote_gesture_pane_ParamLimits

0x85fc,	// (0x00016530) calenote_gesture_pane

0x861c,	// (0x00016550) calenote_window_pane_ParamLimits

0x861c,	// (0x00016550) calenote_window_pane

0xe6b5,	// (0x0001c5e9) popup_note_window_cp01

0x8638,	// (0x0001656c) calenote_swipe_1_pane_ParamLimits

0x8638,	// (0x0001656c) calenote_swipe_1_pane

0x7fee,	// (0x00015f22) calenote_swipe_2_pane_ParamLimits

0x7fee,	// (0x00015f22) calenote_swipe_2_pane

0xe23c,	// (0x0001c170) calenote_swipe_1_pane_g1_ParamLimits

0xe23c,	// (0x0001c170) calenote_swipe_1_pane_g1

0xe249,	// (0x0001c17d) calenote_swipe_1_pane_g2_ParamLimits

0xe249,	// (0x0001c17d) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x0001dc0c) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x0001dc0c) calenote_swipe_1_pane_g

0xe6c7,	// (0x0001c5fb) calenote_swipe_1_pane_t1_ParamLimits

0xe6c7,	// (0x0001c5fb) calenote_swipe_1_pane_t1

0xe23c,	// (0x0001c170) calenote_swipe_2_pane_g1_ParamLimits

0xe23c,	// (0x0001c170) calenote_swipe_2_pane_g1

0xe6e6,	// (0x0001c61a) calenote_swipe_2_pane_g2_ParamLimits

0xe6e6,	// (0x0001c61a) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x0001dce9) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x0001dce9) calenote_swipe_2_pane_g

0xe6f2,	// (0x0001c626) calenote_swipe_2_pane_t1_ParamLimits

0xe6f2,	// (0x0001c626) calenote_swipe_2_pane_t1

0x93e0,	// (0x00017314) main_mup_navstr_pane

0x4d2b,	// (0x00012c5f) main_mup3_pane_t7_ParamLimits

0x4d2b,	// (0x00012c5f) main_mup3_pane_t7

0xcc1e,	// (0x0001ab52) main_mp4_pane_g6_ParamLimits

0xcc1e,	// (0x0001ab52) main_mp4_pane_g6

0xce7d,	// (0x0001adb1) main_image3_pane_t4_ParamLimits

0xce7d,	// (0x0001adb1) main_image3_pane_t4

0x864d,	// (0x00016581) popup_navstr_preview_pane_ParamLimits

0x864d,	// (0x00016581) popup_navstr_preview_pane

0x865d,	// (0x00016591) scroll_navstr_pane_ParamLimits

0x865d,	// (0x00016591) scroll_navstr_pane

0x93e0,	// (0x00017314) bg_popup_preview_window_pane_cp04

0xe719,	// (0x0001c64d) popup_navstr_preview_pane_t1

0x8671,	// (0x000165a5) scroll_navstr_pane_g1_ParamLimits

0x8671,	// (0x000165a5) scroll_navstr_pane_g1

0x8685,	// (0x000165b9) scroll_navstr_pane_t1_ParamLimits

0x8685,	// (0x000165b9) scroll_navstr_pane_t1

0xe6be,	// (0x0001c5f2) bg_button_pane_cp014

0xe6be,	// (0x0001c5f2) bg_button_pane_cp030

0x7e84,	// (0x00015db8) list_double_fisheye_pane_g4_ParamLimits

0x7e84,	// (0x00015db8) list_double_fisheye_pane_g4

0x7e90,	// (0x00015dc4) list_double_fisheye_pane_g5_ParamLimits

0x7e90,	// (0x00015dc4) list_double_fisheye_pane_g5

0xe626,	// (0x0001c55a) sp_fs_scroll_pane_cp03

0xe37f,	// (0x0001c2b3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe38b,	// (0x0001c2bf) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x0001dc29) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe397,	// (0x0001c2cb) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x853d,	// (0x00016471) sp_fs_scroll_pane_cp02

0x9d83,	// (0x00017cb7) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9d83,	// (0x00017cb7) popup_sp_fs_calendar_preview_list_single_pane

0x93e0,	// (0x00017314) main_cam6_pano_pane

0x9451,	// (0x00017385) main_mup3_pane_ParamLimits

0x93e0,	// (0x00017314) main_phacti_pane

0x7a62,	// (0x00015996) bg_button_pane_cp11

0x7a7c,	// (0x000159b0) main_mobtv_info_pane_g2_ParamLimits

0x7a7c,	// (0x000159b0) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x0001db89) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x0001db89) main_mobtv_info_pane_g

0x7c59,	// (0x00015b8d) sc_clock_pane_t5_ParamLimits

0x7c59,	// (0x00015b8d) sc_clock_pane_t5

0x7ce5,	// (0x00015c19) main_radioblah_pane_g1_ParamLimits

0xe188,	// (0x0001c0bc) main_radioblah_pane_t3_ParamLimits

0xe188,	// (0x0001c0bc) main_radioblah_pane_t3

0xe1a0,	// (0x0001c0d4) main_radioblah_pane_t4_ParamLimits

0xe1a0,	// (0x0001c0d4) main_radioblah_pane_t4

0x7d0d,	// (0x00015c41) main_radioblah_text_pane_ParamLimits

0x7d0d,	// (0x00015c41) main_radioblah_text_pane

0x7d1f,	// (0x00015c53) main_radioblah_info_pane_g1_ParamLimits

0x7db8,	// (0x00015cec) main_radioblah_info_pane_t4_ParamLimits

0x7db8,	// (0x00015cec) main_radioblah_info_pane_t4

0x9451,	// (0x00017385) main_sp_fs_calendar_pane

0x869c,	// (0x000165d0) main_phacti_pane_g1

0x86a4,	// (0x000165d8) phacti_note_pane_ParamLimits

0x86a4,	// (0x000165d8) phacti_note_pane

0xe730,	// (0x0001c664) phacti_term_pane_ParamLimits

0xe730,	// (0x0001c664) phacti_term_pane

0xe745,	// (0x0001c679) phacti_note_pane_t1_ParamLimits

0xe745,	// (0x0001c679) phacti_note_pane_t1

0xe75c,	// (0x0001c690) phacti_term_pane_g1

0xe764,	// (0x0001c698) phacti_term_pane_t1_ParamLimits

0xe764,	// (0x0001c698) phacti_term_pane_t1

0xe78e,	// (0x0001c6c2) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe796,	// (0x0001c6ca) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x0001dcf3) popup_sp_fs_calendar_preview_list_single_pane_g

0xe79e,	// (0x0001c6d2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe79e,	// (0x0001c6d2) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7b4,	// (0x0001c6e8) aid_popup_sp_fs_bg_corner_pane

0xc307,	// (0x0001a23b) popup_sp_fs_calendar_preview_bg_pane_g1

0x93e0,	// (0x00017314) popup_sp_fs_calendar_preview_bg_pane

0xe7bc,	// (0x0001c6f0) popup_sp_fs_calendar_preview_list_pane

0x9451,	// (0x00017385) bg_main_sp_fs_cale_pane_ParamLimits

0x9451,	// (0x00017385) bg_main_sp_fs_cale_pane

0xe7cd,	// (0x0001c701) listscroll_cale_mrui_pane_ParamLimits

0xe7cd,	// (0x0001c701) listscroll_cale_mrui_pane

0xe7e1,	// (0x0001c715) listscroll_sp_fs_schedule_track_pane

0xe7ea,	// (0x0001c71e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7ea,	// (0x0001c71e) main_sp_fs_ctrlbar_pane_cp01

0xe7fb,	// (0x0001c72f) main_sp_fs_ribbon_pane

0xe803,	// (0x0001c737) popup_sp_fs_cale_preview_window

0x86ff,	// (0x00016633) list_single_sp_fs_schedule_track_pane_ParamLimits

0x86ff,	// (0x00016633) list_single_sp_fs_schedule_track_pane

0x9451,	// (0x00017385) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9451,	// (0x00017385) bg_sp_fs_highlight_list_pane_cp03

0x8712,	// (0x00016646) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8712,	// (0x00016646) list_single_sp_fs_schedule_track_pane_g1

0x871e,	// (0x00016652) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x871e,	// (0x00016652) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x0001dcf8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x0001dcf8) list_single_sp_fs_schedule_track_pane_g

0x872a,	// (0x0001665e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x872a,	// (0x0001665e) list_single_sp_fs_schedule_track_pane_t1

0x874c,	// (0x00016680) sp_fs_schedule_track_pane_ParamLimits

0x874c,	// (0x00016680) sp_fs_schedule_track_pane

0xe815,	// (0x0001c749) sp_fs_schedule_track_pane_g1

0xe81d,	// (0x0001c751) sp_fs_schedule_track_pane_g2

0xe825,	// (0x0001c759) sp_fs_schedule_track_pane_g3

0xe82d,	// (0x0001c761) sp_fs_schedule_track_pane_g4

0xe835,	// (0x0001c769) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x0001dcfd) sp_fs_schedule_track_pane_g

0xd042,	// (0x0001af76) bg_sp_fs_schedule_viewer_highlight_g1

0xa1a1,	// (0x000180d5) bg_sp_fs_schedule_viewer_highlight_g2

0xd04a,	// (0x0001af7e) bg_sp_fs_schedule_viewer_highlight_g3

0xd052,	// (0x0001af86) bg_sp_fs_schedule_viewer_highlight_g4

0xd2d1,	// (0x0001b205) bg_sp_fs_schedule_viewer_highlight_g5

0xd062,	// (0x0001af96) bg_sp_fs_schedule_viewer_highlight_g6

0xd06a,	// (0x0001af9e) bg_sp_fs_schedule_viewer_highlight_g7

0xd072,	// (0x0001afa6) bg_sp_fs_schedule_viewer_highlight_g8

0xa181,	// (0x000180b5) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x0001dd08) bg_sp_fs_schedule_viewer_highlight_g

0x93e0,	// (0x00017314) bg_main_sp_fs_ribbon_pane

0x8761,	// (0x00016695) main_sp_fs_ribbon_pane_g1

0xe83d,	// (0x0001c771) main_sp_fs_ribbon_pane_t1

0x876a,	// (0x0001669e) main_sp_fs_ribbon_pane_t2

0xe84c,	// (0x0001c780) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x0001dd1b) main_sp_fs_ribbon_pane_t

0xe85b,	// (0x0001c78f) main_sp_fs_ribbon_scheduler_pane

0xe863,	// (0x0001c797) bg_main_sp_fs_ribbon_pane_g1

0xe86c,	// (0x0001c7a0) bg_main_sp_fs_ribbon_pane_g2

0xe875,	// (0x0001c7a9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x0001dd22) bg_main_sp_fs_ribbon_pane_g

0xe87d,	// (0x0001c7b1) main_sp_fs_ribbon_scheduler_pane_g1

0xe886,	// (0x0001c7ba) main_sp_fs_ribbon_scheduler_pane_g2

0xe88f,	// (0x0001c7c3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x0001dd29) main_sp_fs_ribbon_scheduler_pane_g

0xe898,	// (0x0001c7cc) list_cale_mrui_pane

0x8779,	// (0x000166ad) sp_fs_scroll_pane_cp07_ParamLimits

0x8779,	// (0x000166ad) sp_fs_scroll_pane_cp07

0x878f,	// (0x000166c3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x878f,	// (0x000166c3) bg_sp_fs_schedule_viewer_highlight

0xe8a1,	// (0x0001c7d5) list_single_sp_fs_schedule_track_pane_cp01

0xe8a9,	// (0x0001c7dd) list_sp_fs_schedule_track_pane

0xe8b1,	// (0x0001c7e5) sp_fs_scroll_pane_cp06_ParamLimits

0xe8b1,	// (0x0001c7e5) sp_fs_scroll_pane_cp06

0xc307,	// (0x0001a23b) bgmain_sp_fs_calendar_pane_g1

0xe8c3,	// (0x0001c7f7) list_single_cale_mrui_pane_ParamLimits

0xe8c3,	// (0x0001c7f7) list_single_cale_mrui_pane

0xe8ea,	// (0x0001c81e) list_single_cale_mrui_row_pane_ParamLimits

0xe8ea,	// (0x0001c81e) list_single_cale_mrui_row_pane

0xe8f7,	// (0x0001c82b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8f7,	// (0x0001c82b) list_single_cale_mrui_row_pane_g1

0xe93c,	// (0x0001c870) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe93c,	// (0x0001c870) list_single_cale_mrui_row_pane_t1

0x87a1,	// (0x000166d5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x87a1,	// (0x000166d5) list_single_cale_mrui_row_pane_t2

0xe94e,	// (0x0001c882) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe94e,	// (0x0001c882) list_single_cale_mrui_row_pane_t3

0xe97d,	// (0x0001c8b1) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe97d,	// (0x0001c8b1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe03,	// (0x0001dd37) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe03,	// (0x0001dd37) list_single_cale_mrui_row_pane_t

0x8807,	// (0x0001673b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8807,	// (0x0001673b) list_single_cmail_header_editor_pane_bg_cp01

0x882b,	// (0x0001675f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x882b,	// (0x0001675f) list_single_cmail_header_editor_pane_bg_cp02

0x8849,	// (0x0001677d) main_radioblah_text_pane_t1_ParamLimits

0x8849,	// (0x0001677d) main_radioblah_text_pane_t1

0xe9ac,	// (0x0001c8e0) cam6_indi_pane_cp01

0xe9b4,	// (0x0001c8e8) cam6_mode_pane_cp01

0xe9bc,	// (0x0001c8f0) cam6_pano_pane

0xe9c5,	// (0x0001c8f9) cam6_zoom_pane_cp01

0xe9cf,	// (0x0001c903) cam6_pano_image_pane

0xe9d8,	// (0x0001c90c) cam6_pano_pane_g1

0xdee4,	// (0x0001be18) cam6_pano_pane_g2

0xe9e1,	// (0x0001c915) cam6_pano_pane_g3

0xe9ea,	// (0x0001c91e) cam6_pano_pane_g4

0xc87f,	// (0x0001a7b3) cam6_pano_pane_g5

0xe9f3,	// (0x0001c927) cam6_pano_pane_g6

0xe9fb,	// (0x0001c92f) cam6_pano_pane_g7

0xea03,	// (0x0001c937) cam6_pano_pane_g8

0xea0c,	// (0x0001c940) cam6_pano_pane_g9

0x0008,

0xfe0c,	// (0x0001dd40) cam6_pano_pane_g

0x93e0,	// (0x00017314) main_browser_tag_pane

0xe711,	// (0x0001c645) grid_navstr_albumart_pane

0xea17,	// (0x0001c94b) cell_navstr_albumart_pane_ParamLimits

0xea17,	// (0x0001c94b) cell_navstr_albumart_pane

0xea33,	// (0x0001c967) cell_navstr_albumart_pane_g1

0xbbeb,	// (0x00019b1f) cell_navstr_albumart_pane_g2

0xbbfb,	// (0x00019b2f) cell_navstr_albumart_pane_g3

0xbbf3,	// (0x00019b27) cell_navstr_albumart_pane_g4

0x0003,

0xfe1f,	// (0x0001dd53) cell_navstr_albumart_pane_g

0x8864,	// (0x00016798) bt_list_pane_ParamLimits

0x8864,	// (0x00016798) bt_list_pane

0x887a,	// (0x000167ae) bt_list_pane_t1

0x8889,	// (0x000167bd) bt_list_pane_t2

0x0001,

0xfe28,	// (0x0001dd5c) bt_list_pane_t

0x93e0,	// (0x00017314) main_cale_prevew_pane

0x8898,	// (0x000167cc) popup_cale_preview_window_ParamLimits

0x8898,	// (0x000167cc) popup_cale_preview_window

0x9451,	// (0x00017385) bg_popup_preview_window_pane_cp05_ParamLimits

0x9451,	// (0x00017385) bg_popup_preview_window_pane_cp05

0xea3b,	// (0x0001c96f) list_cale_preview_pane_ParamLimits

0xea3b,	// (0x0001c96f) list_cale_preview_pane

0x88b3,	// (0x000167e7) list_double_cale_preview_pane_ParamLimits

0x88b3,	// (0x000167e7) list_double_cale_preview_pane

0x88c7,	// (0x000167fb) list_single_cale_preview_pane_ParamLimits

0x88c7,	// (0x000167fb) list_single_cale_preview_pane

0x88df,	// (0x00016813) list_single_cale_preview_pane_g1

0x88e7,	// (0x0001681b) list_single_cale_preview_pane_t1_ParamLimits

0x88e7,	// (0x0001681b) list_single_cale_preview_pane_t1

0x88fc,	// (0x00016830) list_double_cale_preview_pane_g1

0x8904,	// (0x00016838) list_double_cale_preview_pane_t1_ParamLimits

0x8904,	// (0x00016838) list_double_cale_preview_pane_t1

0x8919,	// (0x0001684d) list_double_cale_preview_pane_t2_ParamLimits

0x8919,	// (0x0001684d) list_double_cale_preview_pane_t2

0x0001,

0xfe2d,	// (0x0001dd61) list_double_cale_preview_pane_t_ParamLimits

0xfe2d,	// (0x0001dd61) list_double_cale_preview_pane_t

0x93e0,	// (0x00017314) main_ezdial_pane

0x9451,	// (0x00017385) main_sp_fs_email_pane_ParamLimits

0x802a,	// (0x00015f5e) cmail_ddmenu_btn01_pane_ParamLimits

0x802a,	// (0x00015f5e) cmail_ddmenu_btn01_pane

0x803d,	// (0x00015f71) cmail_ddmenu_btn02_pane_ParamLimits

0x803d,	// (0x00015f71) cmail_ddmenu_btn02_pane

0x8060,	// (0x00015f94) cmail_ddmenu_btn03_pane_ParamLimits

0x8060,	// (0x00015f94) cmail_ddmenu_btn03_pane

0x8086,	// (0x00015fba) main_sp_fs_ctrlbar_pane_ParamLimits

0x80aa,	// (0x00015fde) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8547,	// (0x0001647b) list_cmail_body_pane_ParamLimits

0xe635,	// (0x0001c569) bg_button_pane_cp12

0xe64a,	// (0x0001c57e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe64a,	// (0x0001c57e) list_single_cmail_header_detail_pane_g3

0x85d6,	// (0x0001650a) list_single_cmail_header_detail_pane_t2_ParamLimits

0x85d6,	// (0x0001650a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x0001dce4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x0001dce4) list_single_cmail_header_detail_pane_t

0xe779,	// (0x0001c6ad) phacti_term_pane_t2_ParamLimits

0xe779,	// (0x0001c6ad) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x0001dcee) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x0001dcee) phacti_term_pane_t

0xea47,	// (0x0001c97b) aid_size_list_single_double

0x8931,	// (0x00016865) popup_ezdial_listscroll_window

0x894d,	// (0x00016881) popup_number_entry_window_cp01

0xa927,	// (0x0001885b) bg_popup_call_pane_cp09

0xea53,	// (0x0001c987) ezdial_list_pane

0xea5b,	// (0x0001c98f) scroll_pane_cp23

0xbdd2,	// (0x00019d06) bg_button_pane_cp028_ParamLimits

0xbdd2,	// (0x00019d06) bg_button_pane_cp028

0x895b,	// (0x0001688f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x895b,	// (0x0001688f) cmail_ddmenu_btn01_pane_g1

0x8967,	// (0x0001689b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8967,	// (0x0001689b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe32,	// (0x0001dd66) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe32,	// (0x0001dd66) cmail_ddmenu_btn01_pane_g

0xea63,	// (0x0001c997) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea63,	// (0x0001c997) cmail_ddmenu_btn01_pane_t1

0xbdd2,	// (0x00019d06) bg_button_pane_cp029_ParamLimits

0xbdd2,	// (0x00019d06) bg_button_pane_cp029

0x8973,	// (0x000168a7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8973,	// (0x000168a7) cmail_ddmenu_btn02_pane_g1

0x898b,	// (0x000168bf) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x898b,	// (0x000168bf) cmail_ddmenu_btn02_pane_t1

0x9451,	// (0x00017385) bg_button_pane_cp031_ParamLimits

0x9451,	// (0x00017385) bg_button_pane_cp031

0x8973,	// (0x000168a7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8973,	// (0x000168a7) cmail_ddmenu_btn03_pane_g1

0x898b,	// (0x000168bf) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x898b,	// (0x000168bf) cmail_ddmenu_btn03_pane_t1

0x58f2,	// (0x00013826) cell_dialer2_keypad_pane_t1_ParamLimits

0x590c,	// (0x00013840) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x590c,	// (0x00013840) cell_dialer2_keypad_pane_t1_copy1

0x78e2,	// (0x00015816) ncimui_group_button_pane

0x9451,	// (0x00017385) main_sp_fs_calendar_pane_ParamLimits

0x855f,	// (0x00016493) list_single_cmail_header_caption_pane_ParamLimits

0xe7c4,	// (0x0001c6f8) aid_recal_txt_sm_pane

0x93e0,	// (0x00017314) mian_recal_day_pane

0xe803,	// (0x0001c737) popup_sp_fs_cale_preview_window_ParamLimits

0x93e0,	// (0x00017314) list_recal_day_pane

0xea9a,	// (0x0001c9ce) list_single_recal_day_pane_ParamLimits

0xea9a,	// (0x0001c9ce) list_single_recal_day_pane

0xeaac,	// (0x0001c9e0) list_single_recal_day_pane_g1_ParamLimits

0xeaac,	// (0x0001c9e0) list_single_recal_day_pane_g1

0xeab8,	// (0x0001c9ec) list_single_recal_day_pane_g2_ParamLimits

0xeab8,	// (0x0001c9ec) list_single_recal_day_pane_g2

0xeac8,	// (0x0001c9fc) list_single_recal_day_pane_g3_ParamLimits

0xeac8,	// (0x0001c9fc) list_single_recal_day_pane_g3

0x89af,	// (0x000168e3) list_single_recal_day_pane_g4_ParamLimits

0x89af,	// (0x000168e3) list_single_recal_day_pane_g4

0xead4,	// (0x0001ca08) list_single_recal_day_pane_g5_ParamLimits

0xead4,	// (0x0001ca08) list_single_recal_day_pane_g5

0xeae4,	// (0x0001ca18) list_single_recal_day_pane_g6_ParamLimits

0xeae4,	// (0x0001ca18) list_single_recal_day_pane_g6

0x0004,

0xfe41,	// (0x0001dd75) list_single_recal_day_pane_g_ParamLimits

0xfe41,	// (0x0001dd75) list_single_recal_day_pane_g

0xeafb,	// (0x0001ca2f) list_single_recal_day_pane_t1

0xeb0d,	// (0x0001ca41) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x0001dd80) list_single_recal_day_pane_t

0x89cf,	// (0x00016903) ncimui_query_button_pane_ParamLimits

0x89cf,	// (0x00016903) ncimui_query_button_pane

0x89df,	// (0x00016913) ncimui_query_button_pane_t1_ParamLimits

0x89df,	// (0x00016913) ncimui_query_button_pane_t1

0xeb22,	// (0x0001ca56) ncimui_query_button_pane_t2_ParamLimits

0xeb22,	// (0x0001ca56) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x0001dd85) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x0001dd85) ncimui_query_button_pane_t

0x89f2,	// (0x00016926) query_button_pane_ParamLimits

0x89f2,	// (0x00016926) query_button_pane

0x93e0,	// (0x00017314) bg_button_pane_cp0028

0xeb35,	// (0x0001ca69) query_button_pane_t1

0x3916,	// (0x0001184a) main_tport_pane_ParamLimits

0x842d,	// (0x00016361) bg_popup_window_pane_cp01_ParamLimits

0x842d,	// (0x00016361) bg_popup_window_pane_cp01

0x8443,	// (0x00016377) heading_pane_cp08_ParamLimits

0x8443,	// (0x00016377) heading_pane_cp08

0x8454,	// (0x00016388) heading_pane_cp07_ParamLimits

0x8454,	// (0x00016388) heading_pane_cp07

0xe600,	// (0x0001c534) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x0001dcd1) cell_tport_appsw_pane_g

0xaaaa,	// (0x000189de) input_candi_list_open_g1

0xa394,	// (0x000182c8) list_cale_time_pane_g6_ParamLimits

0xa394,	// (0x000182c8) list_cale_time_pane_g6

0x46fe,	// (0x00012632) aid_size_touch_calib_1_ParamLimits

0x46fe,	// (0x00012632) aid_size_touch_calib_1

0x470a,	// (0x0001263e) aid_size_touch_calib_2_ParamLimits

0x470a,	// (0x0001263e) aid_size_touch_calib_2

0x4720,	// (0x00012654) aid_size_touch_calib_3_ParamLimits

0x4720,	// (0x00012654) aid_size_touch_calib_3

0x473e,	// (0x00012672) aid_size_touch_calib_4_ParamLimits

0x473e,	// (0x00012672) aid_size_touch_calib_4

0x4754,	// (0x00012688) main_touch_calib_button_group_pane_ParamLimits

0x4754,	// (0x00012688) main_touch_calib_button_group_pane

0x476c,	// (0x000126a0) main_touch_calib_pane_g1_ParamLimits

0x4778,	// (0x000126ac) main_touch_calib_pane_g2_ParamLimits

0x4784,	// (0x000126b8) main_touch_calib_pane_g3_ParamLimits

0x4790,	// (0x000126c4) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0001d6a4) main_touch_calib_pane_g_ParamLimits

0x479c,	// (0x000126d0) main_touch_calib_pane_t1_ParamLimits

0x47b6,	// (0x000126ea) main_touch_calib_pane_t2_ParamLimits

0x47d0,	// (0x00012704) main_touch_calib_pane_t3_ParamLimits

0x47e4,	// (0x00012718) main_touch_calib_pane_t4_ParamLimits

0x47f8,	// (0x0001272c) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0001d6ad) main_touch_calib_pane_t_ParamLimits

0xc649,	// (0x0001a57d) list_single_fp_cale_pane_g3_ParamLimits

0xc649,	// (0x0001a57d) list_single_fp_cale_pane_g3

0x9451,	// (0x00017385) bg_button_pane_cp012_ParamLimits

0x9451,	// (0x00017385) bg_vkb2_func_pane_cp03_ParamLimits

0x6a5b,	// (0x0001498f) cell_vitu2_function_top_pane_g1_ParamLimits

0x9451,	// (0x00017385) bg_vkb2_func_pane_cp04_ParamLimits

0x7882,	// (0x000157b6) main_ncimui_button_group_pane_ParamLimits

0x7882,	// (0x000157b6) main_ncimui_button_group_pane

0x78d0,	// (0x00015804) main_ncimui_pane_t3_ParamLimits

0x78d0,	// (0x00015804) main_ncimui_pane_t3

0xe727,	// (0x0001c65b) phacti_button_group_pane

0xea47,	// (0x0001c97b) aid_size_list_single_double_ParamLimits

0x8931,	// (0x00016865) popup_ezdial_listscroll_window_ParamLimits

0x894d,	// (0x00016881) popup_number_entry_window_cp01_ParamLimits

0x8a05,	// (0x00016939) phacti_button_pane_ParamLimits

0x8a05,	// (0x00016939) phacti_button_pane

0x93e0,	// (0x00017314) bg_button_pane_cp14

0xeb43,	// (0x0001ca77) phacti_button_pane_t1

0x8a16,	// (0x0001694a) main_touch_calib_button_pane_ParamLimits

0x8a16,	// (0x0001694a) main_touch_calib_button_pane

0x9bf7,	// (0x00017b2b) bg_button_pane_cp18_ParamLimits

0x9bf7,	// (0x00017b2b) bg_button_pane_cp18

0xeb51,	// (0x0001ca85) main_touch_calib_button_pane_t1_ParamLimits

0xeb51,	// (0x0001ca85) main_touch_calib_button_pane_t1

0xeb67,	// (0x0001ca9b) main_touch_calib_button_pane_t2_ParamLimits

0xeb67,	// (0x0001ca9b) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x0001dd8a) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x0001dd8a) main_touch_calib_button_pane_t

0x93e0,	// (0x00017314) cell_ncimui_button_pane

0x93e0,	// (0x00017314) bg_button_pane_cp032

0xeb85,	// (0x0001cab9) cell_ncimui_button_pane_t1

0xce5b,	// (0x0001ad8f) image3_infobar_pane_ParamLimits

0xce5b,	// (0x0001ad8f) image3_infobar_pane

0x7c85,	// (0x00015bb9) fs_bigclock_status_pane_ParamLimits

0x7c85,	// (0x00015bb9) fs_bigclock_status_pane

0x7c92,	// (0x00015bc6) main_fs_bigclock_clock_pane_ParamLimits

0x7c92,	// (0x00015bc6) main_fs_bigclock_clock_pane

0x7ca6,	// (0x00015bda) main_fs_bigclock_indi_pane_ParamLimits

0x7ca6,	// (0x00015bda) main_fs_bigclock_indi_pane

0x7cc1,	// (0x00015bf5) main_fs_bigclock_swipe_pane_ParamLimits

0x7cc1,	// (0x00015bf5) main_fs_bigclock_swipe_pane

0x93e0,	// (0x00017314) main_fs_clock_dumped_data

0xdff1,	// (0x0001bf25) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdff1,	// (0x0001bf25) list_single_fs_bigclock_indicator_pane_g1

0xe01b,	// (0x0001bf4f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe01b,	// (0x0001bf4f) list_single_fs_bigclock_indicator_pane_g2

0xe035,	// (0x0001bf69) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe035,	// (0x0001bf69) list_single_fs_bigclock_indicator_pane_g3

0xe04f,	// (0x0001bf83) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe04f,	// (0x0001bf83) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x0001dbbd) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x0001dbbd) list_single_fs_bigclock_indicator_pane_g

0xe07a,	// (0x0001bfae) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe07a,	// (0x0001bfae) list_single_fs_bigclock_indicator_pane_t1

0xe0a2,	// (0x0001bfd6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0a2,	// (0x0001bfd6) list_single_fs_bigclock_indicator_pane_t2

0xe0ca,	// (0x0001bffe) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0ca,	// (0x0001bffe) list_single_fs_bigclock_indicator_pane_t3

0xe0f2,	// (0x0001c026) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0f2,	// (0x0001c026) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x0001dbc8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x0001dbc8) list_single_fs_bigclock_indicator_pane_t

0xeb93,	// (0x0001cac7) image3_infobar_fav_pane_ParamLimits

0xeb93,	// (0x0001cac7) image3_infobar_fav_pane

0xeba3,	// (0x0001cad7) image3_infobar_loc_pane_ParamLimits

0xeba3,	// (0x0001cad7) image3_infobar_loc_pane

0xebb9,	// (0x0001caed) image3_infobar_time_pane_ParamLimits

0xebb9,	// (0x0001caed) image3_infobar_time_pane

0xc307,	// (0x0001a23b) image3_infobar_time_pane_g1

0xebc9,	// (0x0001cafd) image3_infobar_time_pane_t1

0xc307,	// (0x0001a23b) image3_infobar_loc_pane_g1

0xebd7,	// (0x0001cb0b) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x0001dd8f) image3_infobar_loc_pane_g

0xebdf,	// (0x0001cb13) image3_infobar_loc_pane_t1

0xc307,	// (0x0001a23b) image3_infobar_fav_pane_g1

0xebed,	// (0x0001cb21) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x0001dd94) image3_infobar_fav_pane_g

0xebf5,	// (0x0001cb29) fs_bigclock_status_battery_pane

0xebfe,	// (0x0001cb32) fs_bigclock_status_signal_pane

0xec07,	// (0x0001cb3b) fs_bigclock_status_title_pane

0xec10,	// (0x0001cb44) fs_bigclock_status_signal_pane_g1

0xec19,	// (0x0001cb4d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x0001dd99) fs_bigclock_status_signal_pane_g

0xec21,	// (0x0001cb55) fs_bigclock_status_battery_pane_g1

0xec2a,	// (0x0001cb5e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x0001dd9e) fs_bigclock_status_battery_pane_g

0xec32,	// (0x0001cb66) fs_bigclock_status_title_pane_t1

0xc307,	// (0x0001a23b) main_fs_bigclock_clock_pane_g1

0xec40,	// (0x0001cb74) main_fs_bigclock_clock_pane_g2

0xec40,	// (0x0001cb74) main_fs_bigclock_clock_pane_g3

0xec40,	// (0x0001cb74) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x0001dda3) main_fs_bigclock_clock_pane_g

0xec48,	// (0x0001cb7c) main_fs_bigclock_clock_pane_t1

0xec56,	// (0x0001cb8a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x0001ddac) main_fs_bigclock_clock_pane_t

0x8a2b,	// (0x0001695f) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8a2b,	// (0x0001695f) list_single_fs_bigclock_indicator_pane

0x8a3c,	// (0x00016970) list_single_fs_bigclock_pane_ParamLimits

0x8a3c,	// (0x00016970) list_single_fs_bigclock_pane

0xec6e,	// (0x0001cba2) main_fs_bigclock_indicator_pane_t1

0xec7d,	// (0x0001cbb1) list_single_fs_bigclock_pane_g1

0xec85,	// (0x0001cbb9) list_single_fs_bigclock_pane_t1

0xc307,	// (0x0001a23b) main_fs_bigclock_swipe_pane_g1

0xecc8,	// (0x0001cbfc) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x0001ddbd) main_fs_bigclock_swipe_pane_g

0xecd0,	// (0x0001cc04) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd0,	// (0x0001cc04) main_fs_bigclock_swipe_pane_t1

0x260f,	// (0x00010543) call_type_pane_ParamLimits

0x93e0,	// (0x00017314) main_btmg_pane

0xe923,	// (0x0001c857) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe923,	// (0x0001c857) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfc,	// (0x0001dd30) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x0001dd30) list_single_cale_mrui_row_pane_g

0xea81,	// (0x0001c9b5) list_recal_vselct_arw_lo_pane

0xea89,	// (0x0001c9bd) list_recal_vselct_arw_up_pane

0xea91,	// (0x0001c9c5) list_recal_vselct_pane

0xeced,	// (0x0001cc21) btmg_button_pane

0x8a9f,	// (0x000169d3) main_btmg_pane_g1

0x93e0,	// (0x00017314) bg_button_pane_cp044

0xecf7,	// (0x0001cc2b) btmg_button_pane_t1

0xbdca,	// (0x00019cfe) aid_listscroll_gen

0x9451,	// (0x00017385) main_cntbar_detail_pane

0xe616,	// (0x0001c54a) list_cmail_folder_pane

0xe626,	// (0x0001c55a) sp_fs_scroll_pane_cp03_ParamLimits

0x8aa9,	// (0x000169dd) list_single_fs_dyc_pane_cp01_ParamLimits

0x8aa9,	// (0x000169dd) list_single_fs_dyc_pane_cp01

0xed05,	// (0x0001cc39) aid_size_cmail_indent

0xed0e,	// (0x0001cc42) list_single_dyc_row_pane_cp01

0x8af6,	// (0x00016a2a) cntbar_detail_list_pane_ParamLimits

0x8af6,	// (0x00016a2a) cntbar_detail_list_pane

0x8b48,	// (0x00016a7c) main_cntbar_detail_cont_pane_ParamLimits

0x8b48,	// (0x00016a7c) main_cntbar_detail_cont_pane

0x25a9,	// (0x000104dd) scroll_pane_cp032_ParamLimits

0x25a9,	// (0x000104dd) scroll_pane_cp032

0x8b5c,	// (0x00016a90) cntbar_detail_list_event_pane_ParamLimits

0x8b5c,	// (0x00016a90) cntbar_detail_list_event_pane

0x8b08,	// (0x00016a3c) cntbar_detail_list_shct_pane

0xa1ef,	// (0x00018123) aid_list_gen

0xed17,	// (0x0001cc4b) aid_scroll

0xed20,	// (0x0001cc54) aid_size_touch_scroll_bar

0x8b6c,	// (0x00016aa0) aid_list_double

0xed29,	// (0x0001cc5d) aid_list_single

0x8b75,	// (0x00016aa9) aid_list_single_lg

0xed32,	// (0x0001cc66) aid_list_z_g_a_sm

0xed3a,	// (0x0001cc6e) aid_list_z_g_d

0xed42,	// (0x0001cc76) aid_txt_z_prm

0x8b7e,	// (0x00016ab2) aid_txt_z_prm_cp01

0x8b8c,	// (0x00016ac0) aid_txt_z_sec

0x8b9a,	// (0x00016ace) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b9a,	// (0x00016ace) main_cntbar_detail_cont_pane_g1

0x8bae,	// (0x00016ae2) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8bae,	// (0x00016ae2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x0001ddc2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x0001ddc2) main_cntbar_detail_cont_pane_g

0xed50,	// (0x0001cc84) main_cntbar_detail_cont_pane_t1

0xed5e,	// (0x0001cc92) main_cntbar_detail_cont_pane_t2

0xed6c,	// (0x0001cca0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x0001ddc7) main_cntbar_detail_cont_pane_t

0x8bbe,	// (0x00016af2) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8bbe,	// (0x00016af2) cell_cntbar_detail_list_shct_pane

0xed7a,	// (0x0001ccae) cntbar_detail_list_shct_pane_g1

0xed83,	// (0x0001ccb7) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x0001ddce) cntbar_detail_list_shct_pane_g

0x8bd0,	// (0x00016b04) cntbar_detail_list_event_pane_g1_ParamLimits

0x8bd0,	// (0x00016b04) cntbar_detail_list_event_pane_g1

0x8bdc,	// (0x00016b10) cntbar_detail_list_event_pane_g2_ParamLimits

0x8bdc,	// (0x00016b10) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x0001ddd3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x0001ddd3) cntbar_detail_list_event_pane_g

0x8c4a,	// (0x00016b7e) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c4a,	// (0x00016b7e) cntbar_detail_list_event_pane_t1

0x8c5f,	// (0x00016b93) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c5f,	// (0x00016b93) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x0001dde0) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x0001dde0) cntbar_detail_list_event_pane_t

0xc307,	// (0x0001a23b) cell_cntbar_detail_list_shct_pane_g1

0x29c9,	// (0x000108fd) navi_pane_mv_g3

0x9451,	// (0x00017385) main_cntbar_detail_pane_ParamLimits

0x93e0,	// (0x00017314) main_notif_wgt_pane

0xcbb8,	// (0x0001aaec) aid_tch_main_mp4_pane_g4

0xcdb6,	// (0x0001acea) popup_slider_window_cp02

0xea78,	// (0x0001c9ac) list_recal_day_event_pane

0x8ac6,	// (0x000169fa) cntbar_detail_btn_pane_ParamLimits

0x8ac6,	// (0x000169fa) cntbar_detail_btn_pane

0x8ade,	// (0x00016a12) cntbar_detail_btn_pane_cp01_ParamLimits

0x8ade,	// (0x00016a12) cntbar_detail_btn_pane_cp01

0x8b08,	// (0x00016a3c) cntbar_detail_list_shct_pane_ParamLimits

0x8b18,	// (0x00016a4c) cntbar_detail_pane_g1_ParamLimits

0x8b18,	// (0x00016a4c) cntbar_detail_pane_g1

0x8b2c,	// (0x00016a60) cntbar_detail_pane_t1_ParamLimits

0x8b2c,	// (0x00016a60) cntbar_detail_pane_t1

0x8be8,	// (0x00016b1c) cntbar_detail_list_event_pane_g3_ParamLimits

0x8be8,	// (0x00016b1c) cntbar_detail_list_event_pane_g3

0x8c00,	// (0x00016b34) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c00,	// (0x00016b34) cntbar_detail_list_event_pane_g4

0x8c18,	// (0x00016b4c) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c18,	// (0x00016b4c) cntbar_detail_list_event_pane_g5

0x8c30,	// (0x00016b64) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c30,	// (0x00016b64) cntbar_detail_list_event_pane_g6

0x8c74,	// (0x00016ba8) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c74,	// (0x00016ba8) cntbar_detail_list_event_pane_t3

0x8c86,	// (0x00016bba) popup_notif_wgt_window_ParamLimits

0x8c86,	// (0x00016bba) popup_notif_wgt_window

0x8c9f,	// (0x00016bd3) popup_submenu_window_cp01_ParamLimits

0x8c9f,	// (0x00016bd3) popup_submenu_window_cp01

0xa927,	// (0x0001885b) bg_popup_window_pane_cp10

0xed8c,	// (0x0001ccc0) listscroll_notif_wgt_pane

0xed96,	// (0x0001ccca) list_notif_wgt_window

0xed9f,	// (0x0001ccd3) scroll_pane_cp033

0xeda8,	// (0x0001ccdc) list_notif_wgt_row_pane_ParamLimits

0xeda8,	// (0x0001ccdc) list_notif_wgt_row_pane

0xedbc,	// (0x0001ccf0) aid_size_list_notif_wgt_del

0xedc5,	// (0x0001ccf9) list_notif_wgt_row_pane_g1

0xedcd,	// (0x0001cd01) list_notif_wgt_row_pane_g2

0xedd5,	// (0x0001cd09) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x0001dde7) list_notif_wgt_row_pane_g

0xedde,	// (0x0001cd12) list_notif_wgt_row_pane_t1

0xedec,	// (0x0001cd20) list_notif_wgt_row_pane_t2

0xedfa,	// (0x0001cd2e) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x0001ddee) list_notif_wgt_row_pane_t

0xd311,	// (0x0001b245) list_recal_day_event_pane_g1

0xee08,	// (0x0001cd3c) list_recal_day_event_pane_t1

0x93e0,	// (0x00017314) bg_button_pane_cp045

0xee17,	// (0x0001cd4b) cntbar_detail_btn_pane_t1

0xbdd2,	// (0x00019d06) main_callh_pane_ParamLimits

0xbdd2,	// (0x00019d06) main_callh_pane

0x93e0,	// (0x00017314) main_coverflow0_pane

0x93e0,	// (0x00017314) main_wgtman_pane

0x7ccf,	// (0x00015c03) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7ccf,	// (0x00015c03) main_fs_bigclock_unlock_btn_pane

0xe5f8,	// (0x0001c52c) bg_button_pane_cp16

0x84f1,	// (0x00016425) cell_tport_appsw_pane_g3

0x8cb3,	// (0x00016be7) cf0_flow_pane_ParamLimits

0x8cb3,	// (0x00016be7) cf0_flow_pane

0xee25,	// (0x0001cd59) listscroll_cf0_pane

0xee2e,	// (0x0001cd62) main_cf0_pane_g1

0x8cc8,	// (0x00016bfc) main_cf0_pane_t1_ParamLimits

0x8cc8,	// (0x00016bfc) main_cf0_pane_t1

0x8cdf,	// (0x00016c13) main_cf0_pane_t2_ParamLimits

0x8cdf,	// (0x00016c13) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x0001ddf5) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x0001ddf5) main_cf0_pane_t

0xee38,	// (0x0001cd6c) scroll_pane_cp11

0x8cf6,	// (0x00016c2a) cf0_flow_pane_g1

0x8d02,	// (0x00016c36) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x0001ddfa) cf0_flow_pane_g

0x8d0e,	// (0x00016c42) cf0_flow_pane_t1

0x93e0,	// (0x00017314) main_call6_pane

0x93e0,	// (0x00017314) main_calllock_pane

0x8d20,	// (0x00016c54) call6_btn_grp_pane_ParamLimits

0x8d20,	// (0x00016c54) call6_btn_grp_pane

0x8d3a,	// (0x00016c6e) call6_pane_g1_ParamLimits

0x8d3a,	// (0x00016c6e) call6_pane_g1

0x8d50,	// (0x00016c84) popup_call6_1st_window_ParamLimits

0x8d50,	// (0x00016c84) popup_call6_1st_window

0x8d61,	// (0x00016c95) popup_call6_2nd_window_ParamLimits

0x8d61,	// (0x00016c95) popup_call6_2nd_window

0x8d72,	// (0x00016ca6) cell_call6_btn_pane_ParamLimits

0x8d72,	// (0x00016ca6) cell_call6_btn_pane

0xa927,	// (0x0001885b) bg_popup_call2_in_pane_cp03

0xee43,	// (0x0001cd77) popup_call6_1st_window_g1

0xee4b,	// (0x0001cd7f) popup_call6_1st_window_g2

0xee53,	// (0x0001cd87) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x0001ddff) popup_call6_1st_window_g

0xee5b,	// (0x0001cd8f) popup_call6_1st_window_t1

0xee6a,	// (0x0001cd9e) popup_call6_1st_window_t2

0xee7a,	// (0x0001cdae) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x0001de06) popup_call6_1st_window_t

0xa927,	// (0x0001885b) bg_popup_call2_in_pane_cp04

0xee43,	// (0x0001cd77) popup_call6_2nd_window_g1

0xee4b,	// (0x0001cd7f) popup_call6_2nd_window_g2

0xee53,	// (0x0001cd87) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x0001ddff) popup_call6_2nd_window_g

0xee5b,	// (0x0001cd8f) popup_call6_2nd_window_t1

0x93e0,	// (0x00017314) bg_button_pane_cp15

0xee8a,	// (0x0001cdbe) cell_call6_btn_pane_g1

0xee93,	// (0x0001cdc7) cell_call6_btn_pane_t1

0x8d86,	// (0x00016cba) listscroll_wgtman_pane_ParamLimits

0x8d86,	// (0x00016cba) listscroll_wgtman_pane

0x8da9,	// (0x00016cdd) wgtman_btn_pane_ParamLimits

0x8da9,	// (0x00016cdd) wgtman_btn_pane

0xa7ed,	// (0x00018721) aid_scroll_copy1

0xeea2,	// (0x0001cdd6) list_wgtman_pane

0x8dec,	// (0x00016d20) wgtman_btn_pane_g1_ParamLimits

0x8dec,	// (0x00016d20) wgtman_btn_pane_g1

0x8e18,	// (0x00016d4c) wgtman_btn_pane_t1_ParamLimits

0x8e18,	// (0x00016d4c) wgtman_btn_pane_t1

0xeeac,	// (0x0001cde0) wgtman_btn_pane_t2_ParamLimits

0xeeac,	// (0x0001cde0) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x0001de0d) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x0001de0d) wgtman_btn_pane_t

0x8e55,	// (0x00016d89) listrow_wgtman_pane_ParamLimits

0x8e55,	// (0x00016d89) listrow_wgtman_pane

0x8e69,	// (0x00016d9d) listrow_wgtman_pane_g1

0x8e72,	// (0x00016da6) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x0001de12) listrow_wgtman_pane_g

0x8e7c,	// (0x00016db0) listrow_wgtman_pane_t1

0x8e8a,	// (0x00016dbe) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x0001de17) listrow_wgtman_pane_t

0x8e98,	// (0x00016dcc) wait_bar_pane_cp09

0xeeee,	// (0x0001ce22) main_calllock_btn_pane

0xeef8,	// (0x0001ce2c) main_calllock_pane_g1

0x93e0,	// (0x00017314) bg_button_pane_cp17

0xef04,	// (0x0001ce38) main_calllock_btn_pane_g1

0xef0d,	// (0x0001ce41) main_calllock_btn_pane_t1

0x93e0,	// (0x00017314) main_dialer3_pane

0x93e0,	// (0x00017314) main_fmrd2_pane

0xc307,	// (0x0001a23b) main_fs_bigclock_unlock_btn_pane_g1

0xef24,	// (0x0001ce58) main_fs_bigclock_unlock_btn_pane_t1

0x8ea0,	// (0x00016dd4) area_fmrd2_info_pane_ParamLimits

0x8ea0,	// (0x00016dd4) area_fmrd2_info_pane

0x8eb1,	// (0x00016de5) area_fmrd2_visual_pane_ParamLimits

0x8eb1,	// (0x00016de5) area_fmrd2_visual_pane

0x8ebf,	// (0x00016df3) fmrd2_indi_pane_ParamLimits

0x8ebf,	// (0x00016df3) fmrd2_indi_pane

0x8ecc,	// (0x00016e00) area_fmrd2_visual_pane_g1

0x8ed4,	// (0x00016e08) area_fmrd2_visual_pane_t1

0x8ee4,	// (0x00016e18) area_fmrd2_visual_pane_t2

0x8ef4,	// (0x00016e28) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x0001de21) area_fmrd2_visual_pane_t

0x8f04,	// (0x00016e38) area_fmrd2_info_pane_g1

0x8f0c,	// (0x00016e40) area_fmrd2_info_pane_t1

0x8f1c,	// (0x00016e50) area_fmrd2_info_pane_t2

0x8f2c,	// (0x00016e60) area_fmrd2_info_pane_t3

0x8f3c,	// (0x00016e70) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x0001de28) area_fmrd2_info_pane_t

0x8f4c,	// (0x00016e80) fmrd2_indi_pane_t1

0x8f5c,	// (0x00016e90) fmrd2_indi_pane_t2

0x8f6c,	// (0x00016ea0) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x0001de31) fmrd2_indi_pane_t

0xe05e,	// (0x0001bf92) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe05e,	// (0x0001bf92) list_single_fs_bigclock_indicator_pane_g5

0xe107,	// (0x0001c03b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe107,	// (0x0001c03b) list_single_fs_bigclock_indicator_pane_t5

0x86b8,	// (0x000165ec) aid_cell_bcale_month_pane_ParamLimits

0x86b8,	// (0x000165ec) aid_cell_bcale_month_pane

0x86ca,	// (0x000165fe) bcale_month_pane_ParamLimits

0x86ca,	// (0x000165fe) bcale_month_pane

0x86e4,	// (0x00016618) bcale_preview_pane_ParamLimits

0x86e4,	// (0x00016618) bcale_preview_pane

0xec85,	// (0x0001cbb9) list_single_fs_bigclock_pane_t1_ParamLimits

0xeca4,	// (0x0001cbd8) list_single_fs_bigclock_pane_t2_ParamLimits

0xeca4,	// (0x0001cbd8) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x0001ddb8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x0001ddb8) list_single_fs_bigclock_pane_t

0xef1c,	// (0x0001ce50) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x0001de1c) main_fs_bigclock_unlock_btn_pane_g

0x8f7c,	// (0x00016eb0) aid_dia3_key_size_ParamLimits

0x8f7c,	// (0x00016eb0) aid_dia3_key_size

0x8f8b,	// (0x00016ebf) aid_dia3_listrow_size_ParamLimits

0x8f8b,	// (0x00016ebf) aid_dia3_listrow_size

0x8f99,	// (0x00016ecd) dia3_keypad_fun_pane_ParamLimits

0x8f99,	// (0x00016ecd) dia3_keypad_fun_pane

0x8fb5,	// (0x00016ee9) dia3_keypad_num_pane_ParamLimits

0x8fb5,	// (0x00016ee9) dia3_keypad_num_pane

0x8fce,	// (0x00016f02) dia3_listscroll_pane_ParamLimits

0x8fce,	// (0x00016f02) dia3_listscroll_pane

0x8fe3,	// (0x00016f17) dia3_numentry_pane_ParamLimits

0x8fe3,	// (0x00016f17) dia3_numentry_pane

0xef32,	// (0x0001ce66) dia3_list_pane

0xef3d,	// (0x0001ce71) scroll_pane_cp12

0x93e0,	// (0x00017314) bg_dia3_numentry_pane

0xef48,	// (0x0001ce7c) dia3_numentry_pane_t1

0x8ff6,	// (0x00016f2a) cell_dia3_key_num_pane

0x8ffe,	// (0x00016f32) cell_dia3_key0_fun_pane_ParamLimits

0x8ffe,	// (0x00016f32) cell_dia3_key0_fun_pane

0x9012,	// (0x00016f46) cell_dia3_key1_fun_pane_ParamLimits

0x9012,	// (0x00016f46) cell_dia3_key1_fun_pane

0x902a,	// (0x00016f5e) dia3_listrow_pane

0xdd4e,	// (0x0001bc82) bg_dia3_numentry_pane_g1

0x93e0,	// (0x00017314) bg_button_pane_cp21

0xef57,	// (0x0001ce8b) cell_dia3_key_num_pane_t1

0xef65,	// (0x0001ce99) cell_dia3_key_num_pane_t2

0xef74,	// (0x0001cea8) cell_dia3_key_num_pane_t3

0xef83,	// (0x0001ceb7) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x0001de38) cell_dia3_key_num_pane_t

0x93e0,	// (0x00017314) bg_button_pane_cp19

0x903c,	// (0x00016f70) cell_dia3_key0_fun_pane_g1

0x93e0,	// (0x00017314) bg_button_pane_cp20

0x9044,	// (0x00016f78) cell_dia3_key1_fun_pane_g1

0x904c,	// (0x00016f80) area_left_week_number_pane

0x9055,	// (0x00016f89) area_top_day_name_pane

0x905e,	// (0x00016f92) frame_month_view_pane

0x906a,	// (0x00016f9e) grid_month_view_pane

0x9074,	// (0x00016fa8) cell_top_day_name_pane_ParamLimits

0x9074,	// (0x00016fa8) cell_top_day_name_pane

0x908e,	// (0x00016fc2) cell_area_left_week_number_pane_ParamLimits

0x908e,	// (0x00016fc2) cell_area_left_week_number_pane

0x90a4,	// (0x00016fd8) cell_month_view_pane_ParamLimits

0x90a4,	// (0x00016fd8) cell_month_view_pane

0xef92,	// (0x0001cec6) frm_month_g1

0x90c3,	// (0x00016ff7) frm_month_g2

0x90cd,	// (0x00017001) frm_month_g3

0x90d7,	// (0x0001700b) frm_month_g4

0x90e1,	// (0x00017015) frm_month_g5

0x90eb,	// (0x0001701f) frm_month_g6

0x90f7,	// (0x0001702b) frm_month_g7

0xef9b,	// (0x0001cecf) frm_month_g8

0x9103,	// (0x00017037) frm_month_g9

0x910c,	// (0x00017040) frm_month_g10

0x9115,	// (0x00017049) frm_month_g11

0x911e,	// (0x00017052) frm_month_g12

0x9127,	// (0x0001705b) frm_month_g13

0x9130,	// (0x00017064) frm_month_g14

0x9139,	// (0x0001706d) frm_month_g15

0x9144,	// (0x00017078) frm_month_g16

0x000f,

0xff0d,	// (0x0001de41) frm_month_g

0x914f,	// (0x00017083) cell_top_day_name_pane_t1

0x915e,	// (0x00017092) cell_area_left_week_number_pane_g1

0x914f,	// (0x00017083) cell_area_left_week_number_pane_t1

0xc307,	// (0x0001a23b) cell_month_view_pane_g1

0x9166,	// (0x0001709a) cell_month_view_pane_t1

0x93e0,	// (0x00017314) main_fps_pane

0xe345,	// (0x0001c279) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe345,	// (0x0001c279) cmail_ddmenu_btn02_pane_cp1

0xe361,	// (0x0001c295) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe361,	// (0x0001c295) cmail_ddmenu_btn02_pane_cp2

0x897f,	// (0x000168b3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x897f,	// (0x000168b3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe37,	// (0x0001dd6b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe37,	// (0x0001dd6b) cmail_ddmenu_btn02_pane_g

0x899d,	// (0x000168d1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x899d,	// (0x000168d1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3c,	// (0x0001dd70) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3c,	// (0x0001dd70) cmail_ddmenu_btn02_pane_t

0x9175,	// (0x000170a9) fps_text_pane_ParamLimits

0x9175,	// (0x000170a9) fps_text_pane

0x918c,	// (0x000170c0) main_fps_pane_g1_ParamLimits

0x918c,	// (0x000170c0) main_fps_pane_g1

0x91a4,	// (0x000170d8) wait_bar_pane_cp010_ParamLimits

0x91a4,	// (0x000170d8) wait_bar_pane_cp010

0x91b7,	// (0x000170eb) fps_text_pane_t1_ParamLimits

0x91b7,	// (0x000170eb) fps_text_pane_t1

0xeeda,	// (0x0001ce0e) cam4_image_uncrop_pane_g1

0xeee3,	// (0x0001ce17) cam4_image_uncrop_pane_g2

0x5ddf,	// (0x00013d13) cam4_image_uncrop_pane_g3

0x5de8,	// (0x00013d1c) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0001d83c) cam4_image_uncrop_pane_g

0x902a,	// (0x00016f5e) dia3_listrow_pane_ParamLimits

0x93e0,	// (0x00017314) main_phob2_pane

0x84b8,	// (0x000163ec) cell_tport_appsw_pane_cp02_ParamLimits

0x84b8,	// (0x000163ec) cell_tport_appsw_pane_cp02

0x84cc,	// (0x00016400) cell_tport_appsw_pane_cp03_ParamLimits

0x84cc,	// (0x00016400) cell_tport_appsw_pane_cp03

0x93e0,	// (0x00017314) phob2_contact_card_pane

0x93e0,	// (0x00017314) phob2_listscroll_pane

0xefa4,	// (0x0001ced8) phob2_list_pane

0xefac,	// (0x0001cee0) scroll_pane_cp034

0x91cf,	// (0x00017103) phob2_cc_data_pane_ParamLimits

0x91cf,	// (0x00017103) phob2_cc_data_pane

0x91f0,	// (0x00017124) phob2_cc_listscroll_pane_ParamLimits

0x91f0,	// (0x00017124) phob2_cc_listscroll_pane

0x9212,	// (0x00017146) list_double_large_graphic_phob2_pane_ParamLimits

0x9212,	// (0x00017146) list_double_large_graphic_phob2_pane

0x9227,	// (0x0001715b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9227,	// (0x0001715b) list_double_large_graphic_phob2_pane_g1

0x9234,	// (0x00017168) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9234,	// (0x00017168) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0001de62) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0001de62) list_double_large_graphic_phob2_pane_g

0x9240,	// (0x00017174) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9240,	// (0x00017174) list_double_large_graphic_phob2_pane_t1

0x9255,	// (0x00017189) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9255,	// (0x00017189) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0001de67) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0001de67) list_double_large_graphic_phob2_pane_t

0x93e0,	// (0x00017314) list_highlight_pane_cp024

0xefb4,	// (0x0001cee8) phob2_cc_button_pane

0x9267,	// (0x0001719b) phob2_cc_data_pane_g1_ParamLimits

0x9267,	// (0x0001719b) phob2_cc_data_pane_g1

0x927d,	// (0x000171b1) phob2_cc_data_pane_g2_ParamLimits

0x927d,	// (0x000171b1) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x0001de6c) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x0001de6c) phob2_cc_data_pane_g

0x9291,	// (0x000171c5) phob2_cc_data_pane_t1_ParamLimits

0x9291,	// (0x000171c5) phob2_cc_data_pane_t1

0x92ab,	// (0x000171df) phob2_cc_data_pane_t2_ParamLimits

0x92ab,	// (0x000171df) phob2_cc_data_pane_t2

0x92c5,	// (0x000171f9) phob2_cc_data_pane_t3_ParamLimits

0x92c5,	// (0x000171f9) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0001de71) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0001de71) phob2_cc_data_pane_t

0xefbc,	// (0x0001cef0) phob2_cc_list_pane_ParamLimits

0xefbc,	// (0x0001cef0) phob2_cc_list_pane

0xd3bc,	// (0x0001b2f0) scroll_pane_cp035_ParamLimits

0xd3bc,	// (0x0001b2f0) scroll_pane_cp035

0x9451,	// (0x00017385) bg_button_pane_cp033

0xefc8,	// (0x0001cefc) phob2_cc_button_pane_g1

0xefd4,	// (0x0001cf08) phob2_cc_button_pane_t1

0xefe9,	// (0x0001cf1d) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x0001de78) phob2_cc_button_pane_t

0x92df,	// (0x00017213) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92df,	// (0x00017213) list_double_large_graphic_phob2_cc_pane

0x92f4,	// (0x00017228) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x92f4,	// (0x00017228) list_double_large_graphic_phob2_cc_pane_g1

0x9300,	// (0x00017234) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9300,	// (0x00017234) list_double_large_graphic_phob2_cc_pane_g2

0x930c,	// (0x00017240) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x930c,	// (0x00017240) list_double_large_graphic_phob2_cc_pane_g3

0x9318,	// (0x0001724c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9318,	// (0x0001724c) list_double_large_graphic_phob2_cc_pane_g4

0x9324,	// (0x00017258) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9324,	// (0x00017258) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0001de7d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0001de7d) list_double_large_graphic_phob2_cc_pane_g

0x9330,	// (0x00017264) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9330,	// (0x00017264) list_double_large_graphic_phob2_cc_pane_t1

0x9359,	// (0x0001728d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9359,	// (0x0001728d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x0001de88) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x0001de88) list_double_large_graphic_phob2_cc_pane_t

0xeffb,	// (0x0001cf2f) list_highlight_pane_cp025_ParamLimits

0xeffb,	// (0x0001cf2f) list_highlight_pane_cp025

0x9451,	// (0x00017385) bg_button_pane_cp033_ParamLimits

0xefc8,	// (0x0001cefc) phob2_cc_button_pane_g1_ParamLimits

0xefd4,	// (0x0001cf08) phob2_cc_button_pane_t1_ParamLimits

0xefe9,	// (0x0001cf1d) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x0001de78) phob2_cc_button_pane_t_ParamLimits

0x0b22,	// (0x0000ea56) popup_wgtman_window

0xd160,	// (0x0001b094) scroll_pane_cp038

0x8dce,	// (0x00016d02) wgtman_btn_pane_cp_01_ParamLimits

0x8dce,	// (0x00016d02) wgtman_btn_pane_cp_01

0xf009,	// (0x0001cf3d) wgtman_content_pane

0xf012,	// (0x0001cf46) wgtman_heading_pane

0x93e0,	// (0x00017314) bg_heading_pane_cp02

0xf01b,	// (0x0001cf4f) wgtman_heading_pane_g1

0xf023,	// (0x0001cf57) wgtman_heading_pane_t1

0xf031,	// (0x0001cf65) scroll_pane_cp036

0xf039,	// (0x0001cf6d) wgtman_list_pane

0xf041,	// (0x0001cf75) wgtman_list_pane_t1_ParamLimits

0xf041,	// (0x0001cf75) wgtman_list_pane_t1

0xcf5e,	// (0x0001ae92) cam4_grid_pane

0x6bfb,	// (0x00014b2f) bg_button_pane_cp015_ParamLimits

0x6c0f,	// (0x00014b43) bg_button_pane_cp016_ParamLimits

0x6c22,	// (0x00014b56) bg_button_pane_cp017_ParamLimits

0x6c7a,	// (0x00014bae) popup_vitu2_query_window_g3_ParamLimits

0x6c7a,	// (0x00014bae) popup_vitu2_query_window_g3

0x6d37,	// (0x00014c6b) popup_vitu2_query_window_t6_ParamLimits

0x6d37,	// (0x00014c6b) popup_vitu2_query_window_t6

0x6d62,	// (0x00014c96) popup_vitu2_query_window_t7_ParamLimits

0x6d62,	// (0x00014c96) popup_vitu2_query_window_t7

0xeeda,	// (0x0001ce0e) cam4_grid_pane_g1

0xeee3,	// (0x0001ce17) cam4_grid_pane_g2

0xf064,	// (0x0001cf98) cam4_grid_pane_g3

0xf06d,	// (0x0001cfa1) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x0001de8d) cam4_grid_pane_g

0x17d0,	// (0x0000f704) aid_placing_vt_slider_lsc_ParamLimits

0x1abd,	// (0x0000f9f1) vidtel_button_pane_ParamLimits

0x1abd,	// (0x0000f9f1) vidtel_button_pane

0xf078,	// (0x0001cfac) bg_button_pane_cp034

0x9382,	// (0x000172b6) vidtel_button_pane_g1

0xf082,	// (0x0001cfb6) vidtel_button_pane_t1

0xd29f,	// (0x0001b1d3) aid_size_vtel_slider_touch

0xd3bc,	// (0x0001b2f0) scroll_pane_cp039

0xdd8c,	// (0x0001bcc0) ncim_query_button_pane_cp01_ParamLimits

0xddab,	// (0x0001bcdf) ncimui_query_pane_g1_ParamLimits

0x9451,	// (0x00017385) input_focus_pane_cp012_ParamLimits

0xddd0,	// (0x0001bd04) ncim_query_entry_pane_t1_ParamLimits

0xd3bc,	// (0x0001b2f0) scroll_pane_cp039_ParamLimits

0x293b,	// (0x0001086f) navi_pane_bcale_mc_g1

0x2943,	// (0x00010877) navi_pane_bcale_mc_t1

0xe3ac,	// (0x0001c2e0) main_sp_fs_email_pane_g1

0xe3b4,	// (0x0001c2e8) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x0001dc2e) main_sp_fs_email_pane_g

0xe92f,	// (0x0001c863) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe92f,	// (0x0001c863) list_single_cale_mrui_row_pane_g3

0x89c5,	// (0x000168f9) list_single_recal_day_pane_g5_event_pane

0xeaf3,	// (0x0001ca27) list_single_recal_day_pane_g7

0xf090,	// (0x0001cfc4) list_recal_day_event_pane_cp01

0xf099,	// (0x0001cfcd) list_recal_vselct_arw_lo_pane_cp01

0xf0a1,	// (0x0001cfd5) list_recal_vselct_arw_up_pane_cp01

0xf0a9,	// (0x0001cfdd) list_recal_vselct_pane_cp01

0xd311,	// (0x0001b245) list_recal_day_event_pane_cp01_g1

0xf0b3,	// (0x0001cfe7) list_recal_day_event_pane_cp01_t1

0xeafb,	// (0x0001ca2f) list_single_recal_day_pane_t1_ParamLimits

0xeb0d,	// (0x0001ca41) list_single_recal_day_pane_t2_ParamLimits

0xfe4c,	// (0x0001dd80) list_single_recal_day_pane_t_ParamLimits

0x9bad,	// (0x00017ae1) bg_notes_pane_ParamLimits

0x9bbb,	// (0x00017aef) list_notes_pane_ParamLimits

0x0e39,	// (0x0000ed6d) scroll_pane_cp06_ParamLimits

0x9bf7,	// (0x00017b2b) main_notes_pane_ParamLimits

0x93e0,	// (0x00017314) main_welc_pane

0x938a,	// (0x000172be) main_welc_body_pane_ParamLimits

0x938a,	// (0x000172be) main_welc_body_pane

0x93a0,	// (0x000172d4) main_welc_opti_pane_ParamLimits

0x93a0,	// (0x000172d4) main_welc_opti_pane

0x93b7,	// (0x000172eb) main_welc_pane_t1_ParamLimits

0x93b7,	// (0x000172eb) main_welc_pane_t1

0xeec3,	// (0x0001cdf7) main_welc_body_row_pane_ParamLimits

0xeec3,	// (0x0001cdf7) main_welc_body_row_pane

0x93d0,	// (0x00017304) main_welc_opti_row_pane_ParamLimits

0x93d0,	// (0x00017304) main_welc_opti_row_pane

0xf0c1,	// (0x0001cff5) main_welc_opti_row_pane_g1

0xf0c9,	// (0x0001cffd) main_welc_opti_row_pane_t1

0xf0d8,	// (0x0001d00c) main_welc_body_row_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
