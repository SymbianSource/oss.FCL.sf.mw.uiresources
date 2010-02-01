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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00032c46 };

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
0x43a7,	// (0x00036fed) Screen

0x43b3,	// (0x00036ff9) application_window

0x4419,	// (0x0003705f) area_bottom_pane_ParamLimits

0x4419,	// (0x0003705f) area_bottom_pane

0x4472,	// (0x000370b8) area_top_pane_ParamLimits

0x4472,	// (0x000370b8) area_top_pane

0xbdbf,	// (0x0003ea05) call_video_uplink_pane_ParamLimits

0xbdbf,	// (0x0003ea05) call_video_uplink_pane

0x44ff,	// (0x00037145) main_pane_ParamLimits

0x44ff,	// (0x00037145) main_pane

0xe47a,	// (0x000410c0) context_pane

0x751c,	// (0x0003a162) navi_pane

0x753c,	// (0x0003a182) popup_cale_events_window_ParamLimits

0x753c,	// (0x0003a182) popup_cale_events_window

0xe48d,	// (0x000410d3) popup_mup_playback_window

0x7554,	// (0x0003a19a) signal_pane

0xc558,	// (0x0003f19e) main_browser_pane

0xcfe0,	// (0x0003fc26) main_burst_pane

0x73f2,	// (0x0003a038) main_calc_pane

0xcfe0,	// (0x0003fc26) main_cale_day_pane

0xc558,	// (0x0003f19e) main_cale_month_pane

0xcfe0,	// (0x0003fc26) main_cale_week_pane

0xcfe0,	// (0x0003fc26) main_call_pane

0xc1ee,	// (0x0003ee34) main_call_poc_pane

0xcfe0,	// (0x0003fc26) main_camera_pane

0xcfe0,	// (0x0003fc26) main_chi_dic_pane

0xce6f,	// (0x0003fab5) main_clock_pane

0xc1ee,	// (0x0003ee34) main_fmradio_pane

0xcfe0,	// (0x0003fc26) main_graph_messa_pane

0xc1ee,	// (0x0003ee34) main_help_pane

0xc558,	// (0x0003f19e) main_im_pane

0xc449,	// (0x0003f08f) main_image_pane_ParamLimits

0xc449,	// (0x0003f08f) main_image_pane

0xc1ee,	// (0x0003ee34) main_location2_pane

0xcfe0,	// (0x0003fc26) main_location_pane

0xc1ee,	// (0x0003ee34) main_messa_pane

0xc1ee,	// (0x0003ee34) main_mp2_pane

0xcfe0,	// (0x0003fc26) main_mp_pane

0xc1ee,	// (0x0003ee34) main_msg_pane

0xc1ee,	// (0x0003ee34) main_mup_eq_pane

0xc1ee,	// (0x0003ee34) main_mup_pane

0xcfe0,	// (0x0003fc26) main_notes_pane

0xc1ee,	// (0x0003ee34) main_pec_pane

0xc1ee,	// (0x0003ee34) main_phob_pane

0xc1ee,	// (0x0003ee34) main_pinb_pane

0xc1ee,	// (0x0003ee34) main_postcard_pane

0xc1ee,	// (0x0003ee34) main_qdial_pane

0xcfe0,	// (0x0003fc26) main_skin_pane

0xc1ee,	// (0x0003ee34) main_smil2_pane

0xcfe0,	// (0x0003fc26) main_smil_pane

0xcfe0,	// (0x0003fc26) main_video_pane

0xcfe0,	// (0x0003fc26) main_video_tele_pane

0xc449,	// (0x0003f08f) main_viewer_pane_ParamLimits

0xc449,	// (0x0003f08f) main_viewer_pane

0xcfe0,	// (0x0003fc26) main_vorec_pane

0x7428,	// (0x0003a06e) popup_blid_sat_info_window_ParamLimits

0x7428,	// (0x0003a06e) popup_blid_sat_info_window

0x743e,	// (0x0003a084) popup_dyc_status_message_window_ParamLimits

0x743e,	// (0x0003a084) popup_dyc_status_message_window

0x744c,	// (0x0003a092) popup_grid_large_graphic_window_ParamLimits

0x744c,	// (0x0003a092) popup_grid_large_graphic_window

0x74c0,	// (0x0003a106) popup_loc_request_window_ParamLimits

0x74c0,	// (0x0003a106) popup_loc_request_window

0x74f4,	// (0x0003a13a) popup_wml_address_window_ParamLimits

0x74f4,	// (0x0003a13a) popup_wml_address_window

0x72ca,	// (0x00039f10) call_muted_g1

0x6f89,	// (0x00039bcf) popup_call_audio_conf_window_ParamLimits

0x6f89,	// (0x00039bcf) popup_call_audio_conf_window

0x72da,	// (0x00039f20) popup_call_audio_first_window_ParamLimits

0x72da,	// (0x00039f20) popup_call_audio_first_window

0x731a,	// (0x00039f60) popup_call_audio_in_window_ParamLimits

0x731a,	// (0x00039f60) popup_call_audio_in_window

0x733e,	// (0x00039f84) popup_call_audio_out_window_ParamLimits

0x733e,	// (0x00039f84) popup_call_audio_out_window

0x7360,	// (0x00039fa6) popup_call_audio_second_window_ParamLimits

0x7360,	// (0x00039fa6) popup_call_audio_second_window

0x7390,	// (0x00039fd6) popup_call_audio_wait_window_ParamLimits

0x7390,	// (0x00039fd6) popup_call_audio_wait_window

0x73b1,	// (0x00039ff7) popup_number_entry_window_ParamLimits

0x73b1,	// (0x00039ff7) popup_number_entry_window

0xbddd,	// (0x0003ea23) bg_popup_call_pane_cp05_ParamLimits

0xbddd,	// (0x0003ea23) bg_popup_call_pane_cp05

0xbdfd,	// (0x0003ea43) popup_number_entry_window_t1

0xbe10,	// (0x0003ea56) popup_number_entry_window_t2

0xbe22,	// (0x0003ea68) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00041d32) popup_number_entry_window_t

0xbe34,	// (0x0003ea7a) text_title_cp2

0xbe47,	// (0x0003ea8d) bg_popup_call_pane_cp_ParamLimits

0xbe47,	// (0x0003ea8d) bg_popup_call_pane_cp

0xbe55,	// (0x0003ea9b) call_thumbnail_pane

0xbe5d,	// (0x0003eaa3) popup_call_audio_in_window_g1_ParamLimits

0xbe5d,	// (0x0003eaa3) popup_call_audio_in_window_g1

0xbe69,	// (0x0003eaaf) popup_call_audio_in_window_g2_ParamLimits

0xbe69,	// (0x0003eaaf) popup_call_audio_in_window_g2

0xbe75,	// (0x0003eabb) popup_call_audio_in_window_g3_ParamLimits

0xbe75,	// (0x0003eabb) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00041d3b) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00041d3b) popup_call_audio_in_window_g

0xbe81,	// (0x0003eac7) popup_call_audio_in_window_t1_ParamLimits

0xbe81,	// (0x0003eac7) popup_call_audio_in_window_t1

0xbe9c,	// (0x0003eae2) popup_call_audio_in_window_t2_ParamLimits

0xbe9c,	// (0x0003eae2) popup_call_audio_in_window_t2

0xbeb7,	// (0x0003eafd) popup_call_audio_in_window_t3_ParamLimits

0xbeb7,	// (0x0003eafd) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00041d42) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00041d42) popup_call_audio_in_window_t

0xbe47,	// (0x0003ea8d) bg_popup_call_pane_cp01_ParamLimits

0xbe47,	// (0x0003ea8d) bg_popup_call_pane_cp01

0xbe55,	// (0x0003ea9b) call_thumbnail_pane_cp02

0xbeca,	// (0x0003eb10) call_type_pane_cp022

0xbed2,	// (0x0003eb18) popup_call_audio_out_window_g1_ParamLimits

0xbed2,	// (0x0003eb18) popup_call_audio_out_window_g1

0xbee4,	// (0x0003eb2a) popup_call_audio_out_window_g2_ParamLimits

0xbee4,	// (0x0003eb2a) popup_call_audio_out_window_g2

0xbef0,	// (0x0003eb36) popup_call_audio_out_window_g3_ParamLimits

0xbef0,	// (0x0003eb36) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00041d49) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00041d49) popup_call_audio_out_window_g

0xbf02,	// (0x0003eb48) popup_call_audio_out_window_t1_ParamLimits

0xbf02,	// (0x0003eb48) popup_call_audio_out_window_t1

0xbf1a,	// (0x0003eb60) popup_call_audio_out_window_t2_ParamLimits

0xbf1a,	// (0x0003eb60) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00041d50) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00041d50) popup_call_audio_out_window_t

0xbf2f,	// (0x0003eb75) bg_popup_call_pane_ParamLimits

0xbf2f,	// (0x0003eb75) bg_popup_call_pane

0x46f4,	// (0x0003733a) call_thumbnail_pane_cp_ParamLimits

0x46f4,	// (0x0003733a) call_thumbnail_pane_cp

0xbfb3,	// (0x0003ebf9) call_type_pane_cp01_ParamLimits

0xbfb3,	// (0x0003ebf9) call_type_pane_cp01

0xbff7,	// (0x0003ec3d) popup_call_audio_first_window_g1_ParamLimits

0xbff7,	// (0x0003ec3d) popup_call_audio_first_window_g1

0xc043,	// (0x0003ec89) popup_call_audio_first_window_g2_ParamLimits

0xc043,	// (0x0003ec89) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00041d55) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00041d55) popup_call_audio_first_window_g

0xc087,	// (0x0003eccd) popup_call_audio_first_window_t1_ParamLimits

0xc087,	// (0x0003eccd) popup_call_audio_first_window_t1

0xc133,	// (0x0003ed79) popup_call_audio_first_window_t4_ParamLimits

0xc133,	// (0x0003ed79) popup_call_audio_first_window_t4

0xc1bf,	// (0x0003ee05) popup_call_audio_first_window_t5_ParamLimits

0xc1bf,	// (0x0003ee05) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00041d5a) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00041d5a) popup_call_audio_first_window_t

0xc1ee,	// (0x0003ee34) bg_popup_call_pane_cp02

0xc1f8,	// (0x0003ee3e) call_type_pane_cp023

0xc200,	// (0x0003ee46) popup_call_audio_wait_window_g1

0xc208,	// (0x0003ee4e) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00041d61) popup_call_audio_wait_window_g

0xc210,	// (0x0003ee56) popup_call_audio_wait_window_t3

0xc21e,	// (0x0003ee64) bg_popup_call_pane_cp03_ParamLimits

0xc21e,	// (0x0003ee64) bg_popup_call_pane_cp03

0xc27e,	// (0x0003eec4) call_thumbnail_pane_cp011_ParamLimits

0xc27e,	// (0x0003eec4) call_thumbnail_pane_cp011

0xc28a,	// (0x0003eed0) call_type_pane_cp034_ParamLimits

0xc28a,	// (0x0003eed0) call_type_pane_cp034

0xc2c6,	// (0x0003ef0c) popup_call_audio_second_window_g1_ParamLimits

0xc2c6,	// (0x0003ef0c) popup_call_audio_second_window_g1

0xc302,	// (0x0003ef48) popup_call_audio_second_window_g2_ParamLimits

0xc302,	// (0x0003ef48) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00041d66) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00041d66) popup_call_audio_second_window_g

0xc33e,	// (0x0003ef84) popup_call_audio_second_window_t1_ParamLimits

0xc33e,	// (0x0003ef84) popup_call_audio_second_window_t1

0xc3bf,	// (0x0003f005) popup_call_audio_second_window_t2_ParamLimits

0xc3bf,	// (0x0003f005) popup_call_audio_second_window_t2

0xc3f5,	// (0x0003f03b) popup_call_audio_second_window_t3_ParamLimits

0xc3f5,	// (0x0003f03b) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00041d6b) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00041d6b) popup_call_audio_second_window_t

0xc1ee,	// (0x0003ee34) bg_popup_call_pane_cp04

0xc42b,	// (0x0003f071) list_conf_pane

0xc433,	// (0x0003f079) popup_call_audio_conf_window_t1

0xc441,	// (0x0003f087) call_thumbnail_pane_g1

0xc449,	// (0x0003f08f) bg_pinb_pane_ParamLimits

0xc449,	// (0x0003f08f) bg_pinb_pane

0xc457,	// (0x0003f09d) find_pinb_pane

0xc460,	// (0x0003f0a6) listscroll_pinb_pane_ParamLimits

0xc460,	// (0x0003f0a6) listscroll_pinb_pane

0xc46f,	// (0x0003f0b5) pinb_bg_pane_g1

0x4718,	// (0x0003735e) pinb_bg_pane_g2

0x4724,	// (0x0003736a) pinb_bg_pane_g3

0x4730,	// (0x00037376) pinb_bg_pane_g4

0x473c,	// (0x00037382) pinb_bg_pane_g5

0x4748,	// (0x0003738e) pinb_bg_pane_g6

0x4753,	// (0x00037399) pinb_bg_pane_g7

0x475e,	// (0x000373a4) pinb_bg_pane_g8

0x4769,	// (0x000373af) pinb_bg_pane_g9

0x4773,	// (0x000373b9) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00041d72) pinb_bg_pane_g

0x4788,	// (0x000373ce) grid_pinb_pane

0x4793,	// (0x000373d9) list_pinb_pane

0x479e,	// (0x000373e4) scroll_pane_cp01_ParamLimits

0x479e,	// (0x000373e4) scroll_pane_cp01

0xc481,	// (0x0003f0c7) find_pinb_pane_g1_ParamLimits

0xc481,	// (0x0003f0c7) find_pinb_pane_g1

0xc499,	// (0x0003f0df) find_pinb_pane_t1

0xc4ab,	// (0x0003f0f1) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00041d8c) find_pinb_pane_t

0xc4c0,	// (0x0003f106) input_focus_pane_cp01_ParamLimits

0xc4c0,	// (0x0003f106) input_focus_pane_cp01

0x47b0,	// (0x000373f6) cell_pinb_pane_ParamLimits

0x47b0,	// (0x000373f6) cell_pinb_pane

0x47de,	// (0x00037424) cell_pinb_pane_g1_ParamLimits

0x47de,	// (0x00037424) cell_pinb_pane_g1

0x47f3,	// (0x00037439) cell_pinb_pane_g2_ParamLimits

0x47f3,	// (0x00037439) cell_pinb_pane_g2

0xc4cc,	// (0x0003f112) cell_pinb_pane_g3_ParamLimits

0xc4cc,	// (0x0003f112) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00041d91) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00041d91) cell_pinb_pane_g

0xc1ee,	// (0x0003ee34) grid_highlight_pane_cp01

0x47ff,	// (0x00037445) list_pinb_item_pane_ParamLimits

0x47ff,	// (0x00037445) list_pinb_item_pane

0xc1ee,	// (0x0003ee34) list_highlight_pane_cp02

0xc4d8,	// (0x0003f11e) list_pinb_item_pane_g1_ParamLimits

0xc4d8,	// (0x0003f11e) list_pinb_item_pane_g1

0xc4e5,	// (0x0003f12b) list_pinb_item_pane_g2_ParamLimits

0xc4e5,	// (0x0003f12b) list_pinb_item_pane_g2

0x4829,	// (0x0003746f) list_pinb_item_pane_g3_ParamLimits

0x4829,	// (0x0003746f) list_pinb_item_pane_g3

0xc4f1,	// (0x0003f137) list_pinb_item_pane_g4_ParamLimits

0xc4f1,	// (0x0003f137) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00041d98) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00041d98) list_pinb_item_pane_g

0xc4fd,	// (0x0003f143) list_pinb_item_pane_t1_ParamLimits

0xc4fd,	// (0x0003f143) list_pinb_item_pane_t1

0x4854,	// (0x0003749a) calc_display_pane

0x4872,	// (0x000374b8) calc_paper_pane

0x488e,	// (0x000374d4) grid_calc_pane

0xc1ee,	// (0x0003ee34) bg_list_pane_cp01

0x48ba,	// (0x00037500) clock_g1

0x48c2,	// (0x00037508) clock_g2

0x0001,

0xf15b,	// (0x00041da1) clock_g

0x48cc,	// (0x00037512) clock_t1_ParamLimits

0x48cc,	// (0x00037512) clock_t1

0x48e1,	// (0x00037527) clock_t2_ParamLimits

0x48e1,	// (0x00037527) clock_t2

0x48f3,	// (0x00037539) clock_t3_ParamLimits

0x48f3,	// (0x00037539) clock_t3

0x4905,	// (0x0003754b) clock_t4_ParamLimits

0x4905,	// (0x0003754b) clock_t4

0x4917,	// (0x0003755d) clock_t5_ParamLimits

0x4917,	// (0x0003755d) clock_t5

0x492c,	// (0x00037572) clock_t6_ParamLimits

0x492c,	// (0x00037572) clock_t6

0x493e,	// (0x00037584) clock_t7_ParamLimits

0x493e,	// (0x00037584) clock_t7

0x4950,	// (0x00037596) clock_t8_ParamLimits

0x4950,	// (0x00037596) clock_t8

0x4966,	// (0x000375ac) clock_t9_ParamLimits

0x4966,	// (0x000375ac) clock_t9

0x0008,

0xf160,	// (0x00041da6) clock_t_ParamLimits

0xf160,	// (0x00041da6) clock_t

0xc514,	// (0x0003f15a) popup_clock_analogue_window_cp02

0xc514,	// (0x0003f15a) popup_clock_digital_window_cp01

0xc51c,	// (0x0003f162) listscroll_help_pane

0xc1ee,	// (0x0003ee34) phob_pre_status_pane

0xc526,	// (0x0003f16c) grid_qdial_pane

0xc1ee,	// (0x0003ee34) listscroll_mce_pane

0xc530,	// (0x0003f176) bg_notes_pane

0xc53a,	// (0x0003f180) list_notes_pane

0x497c,	// (0x000375c2) scroll_pane_cp06

0xc544,	// (0x0003f18a) bg_calc_paper_pane

0x4987,	// (0x000375cd) list_calc_pane

0xc558,	// (0x0003f19e) bg_calc_display_pane

0x49a1,	// (0x000375e7) calc_display_pane_t1

0x49b6,	// (0x000375fc) calc_display_pane_t2

0x49cb,	// (0x00037611) calc_display_pane_t3

0x0002,

0xf173,	// (0x00041db9) calc_display_pane_t

0x49dd,	// (0x00037623) cell_calc_pane_ParamLimits

0x49dd,	// (0x00037623) cell_calc_pane

0xc564,	// (0x0003f1aa) bg_calc_paper_pane_g1

0xc570,	// (0x0003f1b6) bg_calc_paper_pane_g2

0xc57c,	// (0x0003f1c2) bg_calc_paper_pane_g3

0xc588,	// (0x0003f1ce) bg_calc_paper_pane_g4

0xc594,	// (0x0003f1da) bg_calc_paper_pane_g5

0x4a0a,	// (0x00037650) bg_calc_paper_pane_g6

0x4a1b,	// (0x00037661) bg_calc_paper_pane_g7

0x4a2c,	// (0x00037672) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00041dc0) bg_calc_paper_pane_g

0x4a3d,	// (0x00037683) calc_bg_paper_pane_g9

0x4a4e,	// (0x00037694) list_calc_item_pane_ParamLimits

0x4a4e,	// (0x00037694) list_calc_item_pane

0xc5a0,	// (0x0003f1e6) list_calc_item_pane_g1

0x4a88,	// (0x000376ce) list_calc_item_pane_t1_ParamLimits

0x4a88,	// (0x000376ce) list_calc_item_pane_t1

0x4a9a,	// (0x000376e0) list_calc_item_pane_t2_ParamLimits

0x4a9a,	// (0x000376e0) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00041dd1) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00041dd1) list_calc_item_pane_t

0xc5ad,	// (0x0003f1f3) cell_calc_pane_g1

0xc5b7,	// (0x0003f1fd) grid_highlight_pane_cp02

0xc5d9,	// (0x0003f21f) bg_calc_display_pane_g1

0x4aca,	// (0x00037710) bg_calc_display_pane_g2

0xc5e2,	// (0x0003f228) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00041ddb) bg_calc_display_pane_g

0x4ad4,	// (0x0003771a) cell_qdial_pane_ParamLimits

0x4ad4,	// (0x0003771a) cell_qdial_pane

0x4ae8,	// (0x0003772e) cell_qdial_pane_g1_ParamLimits

0x4ae8,	// (0x0003772e) cell_qdial_pane_g1

0x4af5,	// (0x0003773b) cell_qdial_pane_g2_ParamLimits

0x4af5,	// (0x0003773b) cell_qdial_pane_g2

0xc5eb,	// (0x0003f231) cell_qdial_pane_g3_ParamLimits

0xc5eb,	// (0x0003f231) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00041de2) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00041de2) cell_qdial_pane_g

0x4b13,	// (0x00037759) cell_qdial_pane_t1_ParamLimits

0x4b13,	// (0x00037759) cell_qdial_pane_t1

0x4b2b,	// (0x00037771) cell_qdial_pane_t2_ParamLimits

0x4b2b,	// (0x00037771) cell_qdial_pane_t2

0x4b3e,	// (0x00037784) cell_qdial_pane_t3_ParamLimits

0x4b3e,	// (0x00037784) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00041deb) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00041deb) cell_qdial_pane_t

0xc1ee,	// (0x0003ee34) grid_highlight_pane_cp04

0xc5f7,	// (0x0003f23d) thumbnail_qdial_pane_ParamLimits

0xc5f7,	// (0x0003f23d) thumbnail_qdial_pane

0xc653,	// (0x0003f299) list_help_pane

0xc65c,	// (0x0003f2a2) scroll_pane_cp02

0x4b51,	// (0x00037797) help_list_pane_t1_ParamLimits

0x4b51,	// (0x00037797) help_list_pane_t1

0x4b8f,	// (0x000377d5) bg_notes_pane_g2

0x4b97,	// (0x000377dd) bg_notes_pane_g3

0x4b9f,	// (0x000377e5) notes_bg_pane_g1

0x4ba7,	// (0x000377ed) notes_bg_pane_g4

0x4baf,	// (0x000377f5) notes_bg_pane_g5

0x4bb7,	// (0x000377fd) notes_bg_pane_g6

0x4bbf,	// (0x00037805) notes_bg_pane_g7

0x4bc7,	// (0x0003780d) notes_bg_pane_g8

0x4bcf,	// (0x00037815) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00041e09) notes_bg_pane_g

0x4bd7,	// (0x0003781d) list_notes_text_pane_ParamLimits

0x4bd7,	// (0x0003781d) list_notes_text_pane

0xc665,	// (0x0003f2ab) list_notes_text_pane_g1

0x31da,	// (0x00035e20) list_notes_text_pane_t1

0xc558,	// (0x0003f19e) listscroll_cale_week_pane

0x4c24,	// (0x0003786a) bg_cale_heading_pane

0xc67f,	// (0x0003f2c5) bg_cale_pane_cp01

0x4c40,	// (0x00037886) cale_week_corner_pane

0x4c51,	// (0x00037897) cale_week_day_heading_pane

0x4c6d,	// (0x000378b3) cale_week_scroll_pane_g1

0x4c86,	// (0x000378cc) cale_week_scroll_pane_g2

0x4c97,	// (0x000378dd) cale_week_scroll_pane_g3

0x4ca8,	// (0x000378ee) cale_week_scroll_pane_g4

0x4cb9,	// (0x000378ff) cale_week_scroll_pane_g5

0x4cca,	// (0x00037910) cale_week_scroll_pane_g6

0x4cdb,	// (0x00037921) cale_week_scroll_pane_g7

0x4cee,	// (0x00037934) cale_week_scroll_pane_g8

0x4d01,	// (0x00037947) cale_week_scroll_pane_g9

0x4d12,	// (0x00037958) cale_week_scroll_pane_g10

0x4d23,	// (0x00037969) cale_week_scroll_pane_g11

0x4d34,	// (0x0003797a) cale_week_scroll_pane_g12

0x4d4d,	// (0x00037993) cale_week_scroll_pane_g13

0x4d66,	// (0x000379ac) cale_week_scroll_pane_g14

0x4d7f,	// (0x000379c5) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00041e18) cale_week_scroll_pane_g

0x4d98,	// (0x000379de) cale_week_time_pane

0x4dab,	// (0x000379f1) grid_cale_week_pane

0x4dc8,	// (0x00037a0e) scroll_pane_cp08

0x4de2,	// (0x00037a28) cell_cale_week_pane_ParamLimits

0x4de2,	// (0x00037a28) cell_cale_week_pane

0x4e32,	// (0x00037a78) cale_week_day_heading_pane_t1

0x4e46,	// (0x00037a8c) cale_week_day_heading_pane_t2

0x4e5a,	// (0x00037aa0) cale_week_day_heading_pane_t3

0x4e6e,	// (0x00037ab4) cale_week_day_heading_pane_t4

0x4e82,	// (0x00037ac8) cale_week_day_heading_pane_t5

0x4e96,	// (0x00037adc) cale_week_day_heading_pane_t6

0x4eaa,	// (0x00037af0) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00041e37) cale_week_day_heading_pane_t

0xc6aa,	// (0x0003f2f0) bg_cale_side_pane

0x4ebe,	// (0x00037b04) cale_week_time_pane_t1

0x4ed6,	// (0x00037b1c) cale_week_time_pane_t2

0x4eee,	// (0x00037b34) cale_week_time_pane_t3

0x4f06,	// (0x00037b4c) cale_week_time_pane_t4

0x4f1e,	// (0x00037b64) cale_week_time_pane_t5

0x4f36,	// (0x00037b7c) cale_week_time_pane_t6

0x4f56,	// (0x00037b9c) cale_week_time_pane_t7

0x4f76,	// (0x00037bbc) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00041e46) cale_week_time_pane_t

0x4f96,	// (0x00037bdc) cell_cale_week_pane_g2

0x4fa7,	// (0x00037bed) cell_cale_week_pane_g3_ParamLimits

0x4fa7,	// (0x00037bed) cell_cale_week_pane_g3

0xc6b8,	// (0x0003f2fe) grid_highlight_pane_cp07

0xc6c0,	// (0x0003f306) listscroll_gms_pane

0xc6ca,	// (0x0003f310) grid_gms_pane

0xc6d3,	// (0x0003f319) listscroll_gms_pane_g1

0xc6db,	// (0x0003f321) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00041e57) listscroll_gms_pane_g

0x4fbf,	// (0x00037c05) scroll_pane_cp010

0x4fca,	// (0x00037c10) cell_gms_pane_ParamLimits

0x4fca,	// (0x00037c10) cell_gms_pane

0x4fdc,	// (0x00037c22) cell_gms_pane_g1

0xc6e3,	// (0x0003f329) cell_gms_pane_g2

0xc665,	// (0x0003f2ab) cell_gms_pane_g3

0xc6eb,	// (0x0003f331) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00041e5c) cell_gms_pane_g

0xc6f4,	// (0x0003f33a) grid_highlight_pane_cp09

0x7272,	// (0x00039eb8) phob_pre_status_pane_g1

0x727a,	// (0x00039ec0) phob_pre_status_pane_g2

0x7282,	// (0x00039ec8) phob_pre_status_pane_g3

0x728a,	// (0x00039ed0) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0004224b) phob_pre_status_pane_g

0x729a,	// (0x00039ee0) phob_pre_status_pane_t1

0x72aa,	// (0x00039ef0) phob_pre_status_pane_t2

0x72ba,	// (0x00039f00) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00042256) phob_pre_status_pane_t

0xc1ee,	// (0x0003ee34) bg_list_pane_cp05

0x4fec,	// (0x00037c32) grid_vorec_pane

0x4ff4,	// (0x00037c3a) vorec_t1

0x5002,	// (0x00037c48) vorec_t2

0x5010,	// (0x00037c56) vorec_t3

0x501e,	// (0x00037c64) vorec_t4

0x502c,	// (0x00037c72) vorec_t5

0x503a,	// (0x00037c80) vorec_t6

0x0006,

0xf21f,	// (0x00041e65) vorec_t

0x5056,	// (0x00037c9c) wait_bar_pane_cp01

0xc6fc,	// (0x0003f342) cell_vorec_pane_ParamLimits

0xc6fc,	// (0x0003f342) cell_vorec_pane

0xc70f,	// (0x0003f355) cell_vorec_pane_g1

0xc1ee,	// (0x0003ee34) grid_highlight_pane_cp05

0x506e,	// (0x00037cb4) cams_zoom_pane

0x507a,	// (0x00037cc0) image_vga_pane

0x5089,	// (0x00037ccf) main_camera_pane_g1

0x5097,	// (0x00037cdd) main_camera_pane_g2

0x50a5,	// (0x00037ceb) main_camera_pane_g3

0x50b1,	// (0x00037cf7) main_camera_pane_g4

0x50bd,	// (0x00037d03) main_camera_pane_g5

0x50c9,	// (0x00037d0f) main_camera_pane_g6

0x50d5,	// (0x00037d1b) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00041e74) main_camera_pane_g

0x50e1,	// (0x00037d27) main_camera_pane_t1

0x50f3,	// (0x00037d39) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00041e85) main_camera_pane_t

0x5114,	// (0x00037d5a) cams_zoom_pane_cp_ParamLimits

0x5114,	// (0x00037d5a) cams_zoom_pane_cp

0x5138,	// (0x00037d7e) image_cif_pane_ParamLimits

0x5138,	// (0x00037d7e) image_cif_pane

0x5156,	// (0x00037d9c) image_subqcif_pane

0x515e,	// (0x00037da4) main_video_pane_g1_ParamLimits

0x515e,	// (0x00037da4) main_video_pane_g1

0x517e,	// (0x00037dc4) main_video_pane_g2_ParamLimits

0x517e,	// (0x00037dc4) main_video_pane_g2

0x51b0,	// (0x00037df6) main_video_pane_g3_ParamLimits

0x51b0,	// (0x00037df6) main_video_pane_g3

0x51db,	// (0x00037e21) main_video_pane_g4_ParamLimits

0x51db,	// (0x00037e21) main_video_pane_g4

0x5206,	// (0x00037e4c) main_video_pane_g5_ParamLimits

0x5206,	// (0x00037e4c) main_video_pane_g5

0xc725,	// (0x0003f36b) main_video_pane_g6_ParamLimits

0xc725,	// (0x0003f36b) main_video_pane_g6

0x0006,

0xf244,	// (0x00041e8a) main_video_pane_g_ParamLimits

0xf244,	// (0x00041e8a) main_video_pane_g

0x522a,	// (0x00037e70) main_video_pane_t1_ParamLimits

0x522a,	// (0x00037e70) main_video_pane_t1

0xc73f,	// (0x0003f385) cams_zoom_pane_g1

0xc748,	// (0x0003f38e) cams_zoom_pane_g2

0xc751,	// (0x0003f397) cams_zoom_pane_g3

0xc75a,	// (0x0003f3a0) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00041e99) cams_zoom_pane_g

0x5274,	// (0x00037eba) grid_cams_pane

0x5282,	// (0x00037ec8) linegrid_cams_pane

0x5290,	// (0x00037ed6) cell_cams_pane_ParamLimits

0x5290,	// (0x00037ed6) cell_cams_pane

0xc763,	// (0x0003f3a9) cams_burst_image_pane

0xc76b,	// (0x0003f3b1) cell_cams_pane_g1

0xc1ee,	// (0x0003ee34) grid_highlight_pane_cp03

0xc5ad,	// (0x0003f1f3) mp_bg_pane_g1

0xc1ee,	// (0x0003ee34) bg_list_pane_cp03

0xe352,	// (0x00040f98) bg_mp_pane

0xe35a,	// (0x00040fa0) grid_mp_pane

0xe362,	// (0x00040fa8) media_player_g1

0xe36a,	// (0x00040fb0) media_player_t1

0xe378,	// (0x00040fbe) media_player_t2

0xe386,	// (0x00040fcc) media_player_t3

0xe394,	// (0x00040fda) media_player_t4

0xe3a2,	// (0x00040fe8) media_player_t5

0xe3b0,	// (0x00040ff6) media_player_t6

0xe3be,	// (0x00041004) media_player_t7

0x0006,

0xf5ef,	// (0x00042235) media_player_t

0xe3cc,	// (0x00041012) wait_bar_pane_cp02

0xf5d4,	// (0x0004221a) main_usb_pane_t

0x7269,	// (0x00039eaf) cell_mp_pane

0xc5ad,	// (0x0003f1f3) cell_mp_pane_g1

0xc1ee,	// (0x0003ee34) grid_highlight_pane_cp06

0xc773,	// (0x0003f3b9) grid_skin_colour_pane

0xc77b,	// (0x0003f3c1) list_highlight_pane_cp03

0x52a3,	// (0x00037ee9) skin_g1

0xc783,	// (0x0003f3c9) skin_t1

0xc792,	// (0x0003f3d8) skin_t2

0x0001,

0xf288,	// (0x00041ece) skin_t

0x52ad,	// (0x00037ef3) cell_skin_colour_pane_ParamLimits

0x52ad,	// (0x00037ef3) cell_skin_colour_pane

0xc7a0,	// (0x0003f3e6) cell_skin_colour_pane_g1

0x5331,	// (0x00037f77) call_video_g1_ParamLimits

0x5331,	// (0x00037f77) call_video_g1

0x5341,	// (0x00037f87) call_video_g2_ParamLimits

0x5341,	// (0x00037f87) call_video_g2

0x0001,

0xf28d,	// (0x00041ed3) call_video_g_ParamLimits

0xf28d,	// (0x00041ed3) call_video_g

0x539b,	// (0x00037fe1) call_video_uplink_pane_cp1_ParamLimits

0x539b,	// (0x00037fe1) call_video_uplink_pane_cp1

0xc7b2,	// (0x0003f3f8) call_video_uplink_pane_cp2

0x5467,	// (0x000380ad) video_down_crop_pane_ParamLimits

0x5467,	// (0x000380ad) video_down_crop_pane

0x5559,	// (0x0003819f) video_down_pane_ParamLimits

0x5559,	// (0x0003819f) video_down_pane

0xc7ba,	// (0x0003f400) video_down_subqcif_pane_ParamLimits

0xc7ba,	// (0x0003f400) video_down_subqcif_pane

0xc7d2,	// (0x0003f418) video_down_subqcif_pane_cp_ParamLimits

0xc7d2,	// (0x0003f418) video_down_subqcif_pane_cp

0xc7f6,	// (0x0003f43c) im_reading_pane_ParamLimits

0xc7f6,	// (0x0003f43c) im_reading_pane

0x567b,	// (0x000382c1) im_writing_pane_ParamLimits

0x567b,	// (0x000382c1) im_writing_pane

0x5699,	// (0x000382df) im_reading_pane_t1

0xc810,	// (0x0003f456) list_im_pane

0xc821,	// (0x0003f467) scroll_pane_cp07

0x56f9,	// (0x0003833f) im_writing_pane_t1_ParamLimits

0x56f9,	// (0x0003833f) im_writing_pane_t1

0xc83a,	// (0x0003f480) im_writing_pane_t2_ParamLimits

0xc83a,	// (0x0003f480) im_writing_pane_t2

0x0001,

0xf297,	// (0x00041edd) im_writing_pane_t_ParamLimits

0xf297,	// (0x00041edd) im_writing_pane_t

0xc1ee,	// (0x0003ee34) input_focus_pane_cp04

0xc1ee,	// (0x0003ee34) input_focus_pane_cp05

0x570b,	// (0x00038351) list_im_single_pane_ParamLimits

0x570b,	// (0x00038351) list_im_single_pane

0x5737,	// (0x0003837d) list_single_im_pane_t1

0x722d,	// (0x00039e73) blid_accuracy_pane

0x7235,	// (0x00039e7b) blid_compass_pane

0x723f,	// (0x00039e85) main_location_t1

0x724d,	// (0x00039e93) main_location_t2

0x725b,	// (0x00039ea1) main_location_t3

0x0002,

0xf5fe,	// (0x00042244) main_location_t

0xc1ee,	// (0x0003ee34) aid_levels_location

0xc5ad,	// (0x0003f1f3) blid_accuracy_pane_g1

0xc5ad,	// (0x0003f1f3) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00041f3f) blid_accuracy_pane_g

0xc882,	// (0x0003f4c8) wml_content_pane

0xc8c0,	// (0x0003f506) wml_button_pane_ParamLimits

0xc8c0,	// (0x0003f506) wml_button_pane

0x5746,	// (0x0003838c) wml_list_single_large_pane_ParamLimits

0x5746,	// (0x0003838c) wml_list_single_large_pane

0x5778,	// (0x000383be) wml_list_single_medium_pane_ParamLimits

0x5778,	// (0x000383be) wml_list_single_medium_pane

0x57b1,	// (0x000383f7) wml_list_single_small_pane_ParamLimits

0x57b1,	// (0x000383f7) wml_list_single_small_pane

0xc8d4,	// (0x0003f51a) wml_selection_box_pane_ParamLimits

0xc8d4,	// (0x0003f51a) wml_selection_box_pane

0xc8e7,	// (0x0003f52d) wml_list_single_pane_t1

0xc8f6,	// (0x0003f53c) wml_list_single_medium_pane_t1

0xc905,	// (0x0003f54b) wml_list_single_large_pane_t1

0xc914,	// (0x0003f55a) input_focus_pane_cp02_ParamLimits

0xc914,	// (0x0003f55a) input_focus_pane_cp02

0xc927,	// (0x0003f56d) wml_selection_box_pane_g1

0xc930,	// (0x0003f576) wml_selection_box_pane_t1_ParamLimits

0xc930,	// (0x0003f576) wml_selection_box_pane_t1

0xc449,	// (0x0003f08f) bg_wml_button_pane_ParamLimits

0xc449,	// (0x0003f08f) bg_wml_button_pane

0xc948,	// (0x0003f58e) wml_button_pane_g1

0xc950,	// (0x0003f596) wml_button_pane_t1

0xc948,	// (0x0003f58e) wml_button_bg_pane_g1

0xc960,	// (0x0003f5a6) wml_button_bg_pane_g2

0xc968,	// (0x0003f5ae) wml_button_bg_pane_g3

0xc970,	// (0x0003f5b6) wml_button_bg_pane_g4

0xc978,	// (0x0003f5be) wml_button_bg_pane_g5

0xc980,	// (0x0003f5c6) wml_button_bg_pane_g6

0xc988,	// (0x0003f5ce) wml_button_bg_pane_g7

0xc990,	// (0x0003f5d6) wml_button_bg_pane_g8

0xc998,	// (0x0003f5de) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00041ee2) wml_button_bg_pane_g

0x57f9,	// (0x0003843f) bg_list_pane_cp02

0xc9a0,	// (0x0003f5e6) mce_header_pane_ParamLimits

0xc9a0,	// (0x0003f5e6) mce_header_pane

0xc9b6,	// (0x0003f5fc) mce_icon_pane

0xc9b6,	// (0x0003f5fc) mce_image_pane

0xc9bf,	// (0x0003f605) mce_text_pane_ParamLimits

0xc9bf,	// (0x0003f605) mce_text_pane

0x5803,	// (0x00038449) scroll_pane_cp03

0xc8b8,	// (0x0003f4fe) scroll_pane_cp04

0xc9d2,	// (0x0003f618) scroll_pane_cp05_ParamLimits

0xc9d2,	// (0x0003f618) scroll_pane_cp05

0x580d,	// (0x00038453) mce_header_field_pane_ParamLimits

0x580d,	// (0x00038453) mce_header_field_pane

0x582d,	// (0x00038473) mce_header_field_pane_2_ParamLimits

0x582d,	// (0x00038473) mce_header_field_pane_2

0x5843,	// (0x00038489) mce_header_field_pane_3

0x584b,	// (0x00038491) list_single_mce_message_pane_ParamLimits

0x584b,	// (0x00038491) list_single_mce_message_pane

0x587b,	// (0x000384c1) list_single_mce_smart_pane_ParamLimits

0x587b,	// (0x000384c1) list_single_mce_smart_pane

0xc9de,	// (0x0003f624) input_focus_pane_cp03

0xc9e7,	// (0x0003f62d) list_header_data_pane

0x58b6,	// (0x000384fc) mce_header_field_pane_t1

0x58c6,	// (0x0003850c) list_single_mce_header_pane_ParamLimits

0x58c6,	// (0x0003850c) list_single_mce_header_pane

0xc9ef,	// (0x0003f635) list_single_mce_header_pane_t1

0xc9fe,	// (0x0003f644) list_single_mce_message_pane_g1

0xca06,	// (0x0003f64c) list_single_mce_message_pane_t1

0x5918,	// (0x0003855e) bg_cale_heading_pane_cp01_ParamLimits

0x5918,	// (0x0003855e) bg_cale_heading_pane_cp01

0xca14,	// (0x0003f65a) bg_cale_pane_cp02_ParamLimits

0xca14,	// (0x0003f65a) bg_cale_pane_cp02

0x594b,	// (0x00038591) cale_month_corner_pane

0x5961,	// (0x000385a7) cale_month_day_heading_pane_ParamLimits

0x5961,	// (0x000385a7) cale_month_day_heading_pane

0x59a4,	// (0x000385ea) cale_month_pane_g1_ParamLimits

0x59a4,	// (0x000385ea) cale_month_pane_g1

0x59d0,	// (0x00038616) cale_month_pane_g2_ParamLimits

0x59d0,	// (0x00038616) cale_month_pane_g2

0x59f3,	// (0x00038639) cale_month_pane_g3_ParamLimits

0x59f3,	// (0x00038639) cale_month_pane_g3

0x5a2f,	// (0x00038675) cale_month_pane_g4_ParamLimits

0x5a2f,	// (0x00038675) cale_month_pane_g4

0x5a6b,	// (0x000386b1) cale_month_pane_g5_ParamLimits

0x5a6b,	// (0x000386b1) cale_month_pane_g5

0x5aa7,	// (0x000386ed) cale_month_pane_g6_ParamLimits

0x5aa7,	// (0x000386ed) cale_month_pane_g6

0x5ae3,	// (0x00038729) cale_month_pane_g7_ParamLimits

0x5ae3,	// (0x00038729) cale_month_pane_g7

0x5b2f,	// (0x00038775) cale_month_pane_g8_ParamLimits

0x5b2f,	// (0x00038775) cale_month_pane_g8

0x5b7b,	// (0x000387c1) cale_month_pane_g9_ParamLimits

0x5b7b,	// (0x000387c1) cale_month_pane_g9

0x5bc1,	// (0x00038807) cale_month_pane_g10_ParamLimits

0x5bc1,	// (0x00038807) cale_month_pane_g10

0x5c07,	// (0x0003884d) cale_month_pane_g11_ParamLimits

0x5c07,	// (0x0003884d) cale_month_pane_g11

0x5c45,	// (0x0003888b) cale_month_pane_g12_ParamLimits

0x5c45,	// (0x0003888b) cale_month_pane_g12

0x5c83,	// (0x000388c9) cale_month_pane_g13_ParamLimits

0x5c83,	// (0x000388c9) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00041ef5) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00041ef5) cale_month_pane_g

0x5cc1,	// (0x00038907) cale_month_week_pane

0x5cd4,	// (0x0003891a) grid_cale_month_pane_ParamLimits

0x5cd4,	// (0x0003891a) grid_cale_month_pane

0x5d12,	// (0x00038958) cale_month_day_heading_pane_t1

0x5d70,	// (0x000389b6) cale_month_day_heading_pane_t2

0x5dd5,	// (0x00038a1b) cale_month_day_heading_pane_t3

0x5e3a,	// (0x00038a80) cale_month_day_heading_pane_t4

0x5e9f,	// (0x00038ae5) cale_month_day_heading_pane_t5

0x5f04,	// (0x00038b4a) cale_month_day_heading_pane_t6

0x5f71,	// (0x00038bb7) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00041f10) cale_month_day_heading_pane_t

0xc6aa,	// (0x0003f2f0) bg_cale_side_pane_cp01

0x5fe6,	// (0x00038c2c) cale_month_week_pane_t1

0x5ffd,	// (0x00038c43) cale_month_week_pane_t2

0x6014,	// (0x00038c5a) cale_month_week_pane_t3

0x602b,	// (0x00038c71) cale_month_week_pane_t4

0x6042,	// (0x00038c88) cale_month_week_pane_t5

0x6061,	// (0x00038ca7) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00041f1f) cale_month_week_pane_t

0x6080,	// (0x00038cc6) cell_cale_month_pane_ParamLimits

0x6080,	// (0x00038cc6) cell_cale_month_pane

0x614e,	// (0x00038d94) cell_cale_month_pane_g1

0x615a,	// (0x00038da0) cell_cale_month_pane_t1_ParamLimits

0x615a,	// (0x00038da0) cell_cale_month_pane_t1

0xc6b8,	// (0x0003f2fe) grid_highlight_pane_cp08

0xc5ad,	// (0x0003f1f3) main_smil_g1

0x6176,	// (0x00038dbc) smil_status_pane

0xca49,	// (0x0003f68f) smil_text_pane

0xe26a,	// (0x00040eb0) bg_popup_call3_rect_pane_g8

0xe272,	// (0x00040eb8) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x000421d8) bg_popup_call3_rect_pane_g

0xe4f4,	// (0x0004113a) smil_status_volume_pane_g1

0xca53,	// (0x0003f699) smil_status_pane_t1

0x7611,	// (0x0003a257) volume_smil_pane

0xca6a,	// (0x0003f6b0) list_smil_text_pane

0x6189,	// (0x00038dcf) scroll_pane_cp011

0x6194,	// (0x00038dda) smil_text_list_pane_t1_ParamLimits

0x6194,	// (0x00038dda) smil_text_list_pane_t1

0x623f,	// (0x00038e85) aid_volume_smil_ParamLimits

0x623f,	// (0x00038e85) aid_volume_smil

0xc5ad,	// (0x0003f1f3) smil_volume_pane_g1

0xc5ad,	// (0x0003f1f3) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00041f3f) smil_volume_pane_g

0xc558,	// (0x0003f19e) listscroll_cale_day_pane

0xca74,	// (0x0003f6ba) bg_cale_pane

0xca8c,	// (0x0003f6d2) list_cale_pane

0xca9d,	// (0x0003f6e3) scroll_pane_cp09

0xcaae,	// (0x0003f6f4) cale_bg_pane_g1

0xcab6,	// (0x0003f6fc) cale_bg_pane_g2

0xcabe,	// (0x0003f704) cale_bg_pane_g3

0xcac6,	// (0x0003f70c) cale_bg_pane_g4

0xcace,	// (0x0003f714) cale_bg_pane_g5

0xcad6,	// (0x0003f71c) cale_bg_pane_g6

0xcade,	// (0x0003f724) cale_bg_pane_g7

0xcae6,	// (0x0003f72c) cale_bg_pane_g8

0xcaee,	// (0x0003f734) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00041f44) cale_bg_pane_g

0x6261,	// (0x00038ea7) list_cale_time_pane_ParamLimits

0x6261,	// (0x00038ea7) list_cale_time_pane

0x6282,	// (0x00038ec8) list_cale_time_pane_g1_ParamLimits

0x6282,	// (0x00038ec8) list_cale_time_pane_g1

0xcaf6,	// (0x0003f73c) list_cale_time_pane_g2_ParamLimits

0xcaf6,	// (0x0003f73c) list_cale_time_pane_g2

0x628e,	// (0x00038ed4) list_cale_time_pane_g3_ParamLimits

0x628e,	// (0x00038ed4) list_cale_time_pane_g3

0x62aa,	// (0x00038ef0) list_cale_time_pane_g4_ParamLimits

0x62aa,	// (0x00038ef0) list_cale_time_pane_g4

0x62b8,	// (0x00038efe) list_cale_time_pane_g5_ParamLimits

0x62b8,	// (0x00038efe) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00041f57) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00041f57) list_cale_time_pane_g

0x62c6,	// (0x00038f0c) list_cale_time_pane_t1_ParamLimits

0x62c6,	// (0x00038f0c) list_cale_time_pane_t1

0x62ee,	// (0x00038f34) list_cale_time_pane_t2_ParamLimits

0x62ee,	// (0x00038f34) list_cale_time_pane_t2

0x65ee,	// (0x00039234) aid_blid_cardinal_pane

0x6630,	// (0x00039276) compass_pane_t4

0x6316,	// (0x00038f5c) list_cale_time_pane_t4_ParamLimits

0x6316,	// (0x00038f5c) list_cale_time_pane_t4

0x663e,	// (0x00039284) compass_pane_t5

0x664e,	// (0x00039294) compass_pane_t6

0x665c,	// (0x000392a2) compass_pane_t7

0xcf32,	// (0x0003fb78) navi_pane_cc_t1

0xd087,	// (0x0003fccd) aid_phob_thumbnail_center_pane

0x6d23,	// (0x00039969) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00041f64) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00041f64) list_cale_time_pane_t

0xbe47,	// (0x0003ea8d) bg_popup_window_pane_cp02_ParamLimits

0xbe47,	// (0x0003ea8d) bg_popup_window_pane_cp02

0xcb10,	// (0x0003f756) heading_pane_cp01_ParamLimits

0xcb10,	// (0x0003f756) heading_pane_cp01

0xcb1c,	// (0x0003f762) loc_req_pane_ParamLimits

0xcb1c,	// (0x0003f762) loc_req_pane

0xcb2c,	// (0x0003f772) loc_type_pane_ParamLimits

0xcb2c,	// (0x0003f772) loc_type_pane

0xcb3e,	// (0x0003f784) loc_type_pane_t1_ParamLimits

0xcb3e,	// (0x0003f784) loc_type_pane_t1

0xcb50,	// (0x0003f796) loc_type_pane_t2_ParamLimits

0xcb50,	// (0x0003f796) loc_type_pane_t2

0xcb62,	// (0x0003f7a8) loc_type_pane_t3_ParamLimits

0xcb62,	// (0x0003f7a8) loc_type_pane_t3

0x0002,

0xf325,	// (0x00041f6b) loc_type_pane_t_ParamLimits

0xf325,	// (0x00041f6b) loc_type_pane_t

0xcb74,	// (0x0003f7ba) list_loc_req_pane

0xcb7e,	// (0x0003f7c4) scroll_pane_cp012

0x633e,	// (0x00038f84) list_single_loc_request_popup_menu_pane_ParamLimits

0x633e,	// (0x00038f84) list_single_loc_request_popup_menu_pane

0xcb89,	// (0x0003f7cf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcb89,	// (0x0003f7cf) list_single_loc_request_popup_menu_pane_g1

0xcb95,	// (0x0003f7db) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcb95,	// (0x0003f7db) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00041f72) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00041f72) list_single_loc_request_popup_menu_pane_g

0xcba1,	// (0x0003f7e7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcba1,	// (0x0003f7e7) list_single_loc_request_popup_menu_pane_t1

0x6350,	// (0x00038f96) bg_popup_window_pane_cp03_ParamLimits

0x6350,	// (0x00038f96) bg_popup_window_pane_cp03

0x635e,	// (0x00038fa4) heading_loc_req_pane_ParamLimits

0x635e,	// (0x00038fa4) heading_loc_req_pane

0x636a,	// (0x00038fb0) popup_dyc_status_message_window_g1_ParamLimits

0x636a,	// (0x00038fb0) popup_dyc_status_message_window_g1

0x6376,	// (0x00038fbc) popup_dyc_status_message_window_t1_ParamLimits

0x6376,	// (0x00038fbc) popup_dyc_status_message_window_t1

0x6388,	// (0x00038fce) popup_dyc_status_message_window_t2_ParamLimits

0x6388,	// (0x00038fce) popup_dyc_status_message_window_t2

0x639a,	// (0x00038fe0) popup_dyc_status_message_window_t3_ParamLimits

0x639a,	// (0x00038fe0) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00041f77) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00041f77) popup_dyc_status_message_window_t

0xc1ee,	// (0x0003ee34) bg_heading_pane_cp01

0xcbb7,	// (0x0003f7fd) heading_loc_req_pane_g1

0xcbbf,	// (0x0003f805) heading_loc_req_pane_g2

0xcbc7,	// (0x0003f80d) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00041f7e) heading_loc_req_pane_g

0xcbcf,	// (0x0003f815) heading_loc_req_pane_t1

0xcbde,	// (0x0003f824) bg_popup_sub_pane_cp01_ParamLimits

0xcbde,	// (0x0003f824) bg_popup_sub_pane_cp01

0xcbec,	// (0x0003f832) popup_cale_events_window_g1_ParamLimits

0xcbec,	// (0x0003f832) popup_cale_events_window_g1

0xcc0c,	// (0x0003f852) popup_cale_events_window_g2_ParamLimits

0xcc0c,	// (0x0003f852) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00041fb2) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00041fb2) popup_cale_events_window_g

0xcc2c,	// (0x0003f872) popup_cale_events_window_t1_ParamLimits

0xcc2c,	// (0x0003f872) popup_cale_events_window_t1

0xcc3e,	// (0x0003f884) popup_cale_events_window_t2_ParamLimits

0xcc3e,	// (0x0003f884) popup_cale_events_window_t2

0xcc7c,	// (0x0003f8c2) popup_cale_events_window_t3_ParamLimits

0xcc7c,	// (0x0003f8c2) popup_cale_events_window_t3

0xccb6,	// (0x0003f8fc) popup_cale_events_window_t4_ParamLimits

0xccb6,	// (0x0003f8fc) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00041fb7) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00041fb7) popup_cale_events_window_t

0x63c4,	// (0x0003900a) call_type_pane

0xccec,	// (0x0003f932) popup_call_status_window_g1

0x63d0,	// (0x00039016) popup_call_status_window_g2

0x63dc,	// (0x00039022) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00041fc0) popup_call_status_window_g

0xccfa,	// (0x0003f940) call_type_pane_g1

0xcd03,	// (0x0003f949) call_type_pane_g2

0x0001,

0xf381,	// (0x00041fc7) call_type_pane_g

0xc1ee,	// (0x0003ee34) bg_popup_sub_pane_cp02

0xcd0c,	// (0x0003f952) listscroll_popup_wml_pane

0xcd14,	// (0x0003f95a) list_wml_pane

0xcd1e,	// (0x0003f964) scroll_pane_cp013

0xcd29,	// (0x0003f96f) list_single_graphic_popup_wml_pane_ParamLimits

0xcd29,	// (0x0003f96f) list_single_graphic_popup_wml_pane

0xc5ad,	// (0x0003f1f3) list_single_graphic_popup_wml_pane_g1

0xcd3d,	// (0x0003f983) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00041fcc) list_single_graphic_popup_wml_pane_g

0xcd45,	// (0x0003f98b) list_single_graphic_popup_wml_pane_t1

0xcd5b,	// (0x0003f9a1) aid_call_pane

0xc441,	// (0x0003f087) popup_clock_analogue_window_g1

0xc441,	// (0x0003f087) popup_clock_analogue_window_g2

0x63e8,	// (0x0003902e) popup_clock_analogue_window_g3

0x63e8,	// (0x0003902e) popup_clock_analogue_window_g4

0xc5ad,	// (0x0003f1f3) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00041fd1) popup_clock_analogue_window_g

0x63f0,	// (0x00039036) popup_clock_analogue_window_t1

0x63fe,	// (0x00039044) clock_digital_number_pane_ParamLimits

0x63fe,	// (0x00039044) clock_digital_number_pane

0x640a,	// (0x00039050) clock_digital_number_pane_cp02_ParamLimits

0x640a,	// (0x00039050) clock_digital_number_pane_cp02

0x6416,	// (0x0003905c) clock_digital_number_pane_cp03_ParamLimits

0x6416,	// (0x0003905c) clock_digital_number_pane_cp03

0x6422,	// (0x00039068) clock_digital_number_pane_cp04_ParamLimits

0x6422,	// (0x00039068) clock_digital_number_pane_cp04

0x642e,	// (0x00039074) clock_digital_separator_pane_ParamLimits

0x642e,	// (0x00039074) clock_digital_separator_pane

0x643a,	// (0x00039080) popup_clock_digital_window_t1

0xc5ad,	// (0x0003f1f3) clock_digital_number_pane_g1

0xc5ad,	// (0x0003f1f3) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00041f3f) clock_digital_number_pane_g

0xc5ad,	// (0x0003f1f3) clock_digital_separator_pane_g1

0xc5ad,	// (0x0003f1f3) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00041f3f) clock_digital_separator_pane_g

0xc1ee,	// (0x0003ee34) bg_popup_window_pane_cp04

0xcd63,	// (0x0003f9a9) heading_pane_cp03

0xcd6b,	// (0x0003f9b1) listscroll_popup_gms_pane

0xcd73,	// (0x0003f9b9) grid_large_graphic_popup_pane

0xcd7d,	// (0x0003f9c3) listscroll_popup_gms_pane_g1

0xcd85,	// (0x0003f9cb) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00041fdc) listscroll_popup_gms_pane_g

0xc8b8,	// (0x0003f4fe) scroll_pane_cp014

0xcd8d,	// (0x0003f9d3) cell_large_graphic_popup_pane_ParamLimits

0xcd8d,	// (0x0003f9d3) cell_large_graphic_popup_pane

0xcda5,	// (0x0003f9eb) cell_large_graphic_popup_pane_g1_ParamLimits

0xcda5,	// (0x0003f9eb) cell_large_graphic_popup_pane_g1

0xcdb1,	// (0x0003f9f7) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdb1,	// (0x0003f9f7) cell_large_graphic_popup_pane_g2

0xcdbd,	// (0x0003fa03) cell_large_graphic_popup_pane_g3_ParamLimits

0xcdbd,	// (0x0003fa03) cell_large_graphic_popup_pane_g3

0xcdca,	// (0x0003fa10) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdca,	// (0x0003fa10) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00041fe1) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00041fe1) cell_large_graphic_popup_pane_g

0xcdda,	// (0x0003fa20) grid_highlight_pane_cp010

0xc5ad,	// (0x0003f1f3) bg_popup_call_pane_g1

0xcde4,	// (0x0003fa2a) list_single_graphic_popup_conf_pane_ParamLimits

0xcde4,	// (0x0003fa2a) list_single_graphic_popup_conf_pane

0xcdf6,	// (0x0003fa3c) list_highlight_pane_cp01

0xcdff,	// (0x0003fa45) list_single_graphic_popup_conf_pane_g1

0xce07,	// (0x0003fa4d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00041fea) list_single_graphic_popup_conf_pane_g

0xce0f,	// (0x0003fa55) list_single_graphic_popup_conf_pane_t1

0xce1d,	// (0x0003fa63) linegrid_cams_pane_g1

0x6457,	// (0x0003909d) linegrid_cams_pane_g2

0xc665,	// (0x0003f2ab) linegrid_cams_pane_g3

0xce26,	// (0x0003fa6c) linegrid_cams_pane_g4

0x6460,	// (0x000390a6) linegrid_cams_pane_g5

0x6469,	// (0x000390af) linegrid_cams_pane_g6

0xc6eb,	// (0x0003f331) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00041fef) linegrid_cams_pane_g

0xce2f,	// (0x0003fa75) popup_clock_analogue_window

0xce2f,	// (0x0003fa75) popup_clock_digital_window

0xc1ee,	// (0x0003ee34) popup_phob_thumbnail_window

0xc5ad,	// (0x0003f1f3) call_video_uplink_pane_g1

0xce38,	// (0x0003fa7e) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00041ffe) call_video_uplink_pane_g

0xc6b8,	// (0x0003f2fe) video_uplink_pane

0xce40,	// (0x0003fa86) mce_image_pane_g1

0x6472,	// (0x000390b8) mce_image_pane_g2

0x647a,	// (0x000390c0) mce_image_pane_g3

0x6482,	// (0x000390c8) mce_image_pane_g4

0x648a,	// (0x000390d0) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00042003) mce_image_pane_g

0xce4a,	// (0x0003fa90) control_top_pane_stacon_cp01_ParamLimits

0xce4a,	// (0x0003fa90) control_top_pane_stacon_cp01

0xce5e,	// (0x0003faa4) uni_indicator_pane_stacon_cp01_ParamLimits

0xce5e,	// (0x0003faa4) uni_indicator_pane_stacon_cp01

0xce6f,	// (0x0003fab5) bg_popup_sub_pane_cp03

0x6492,	// (0x000390d8) chi_dic_find_pane

0x649a,	// (0x000390e0) listscroll_chi_dic_pane

0x64a3,	// (0x000390e9) main_pane_chidic_g1

0x64b6,	// (0x000390fc) chi_dic_find_pane_t1

0xce79,	// (0x0003fabf) find_chidic_pane

0xce82,	// (0x0003fac8) chi_dic_list_pane_ParamLimits

0xce82,	// (0x0003fac8) chi_dic_list_pane

0xce93,	// (0x0003fad9) scroll_pane_cp020

0x64c4,	// (0x0003910a) find_chidic_pane_t1

0xc1ee,	// (0x0003ee34) input_focus_pane_cp06

0x64d3,	// (0x00039119) list_chi_dic_pane_ParamLimits

0x64d3,	// (0x00039119) list_chi_dic_pane

0xce9b,	// (0x0003fae1) list_chi_dic_pane_t1_ParamLimits

0xce9b,	// (0x0003fae1) list_chi_dic_pane_t1

0xc1ee,	// (0x0003ee34) list_highlight_pane_cp020

0xceae,	// (0x0003faf4) bg_cale_heading_pane_g1

0x64f4,	// (0x0003913a) bg_cale_heading_pane_g2

0x64fc,	// (0x00039142) bg_cale_heading_pane_g3

0x6504,	// (0x0003914a) bg_cale_heading_pane_g4

0x650e,	// (0x00039154) bg_cale_heading_pane_g5

0x6518,	// (0x0003915e) bg_cale_heading_pane_g6

0x6520,	// (0x00039166) bg_cale_heading_pane_g7

0x6528,	// (0x0003916e) bg_cale_heading_pane_g8

0x6532,	// (0x00039178) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0004200e) bg_cale_heading_pane_g

0xceae,	// (0x0003faf4) bg_cale_side_pane_g1

0x653c,	// (0x00039182) bg_cale_side_pane_g2

0x6546,	// (0x0003918c) bg_cale_side_pane_g3

0x6550,	// (0x00039196) bg_cale_side_pane_g4

0x655a,	// (0x000391a0) bg_cale_side_pane_g5

0x6564,	// (0x000391aa) bg_cale_side_pane_g6

0x656e,	// (0x000391b4) bg_cale_side_pane_g7

0x6578,	// (0x000391be) bg_cale_side_pane_g8

0x6580,	// (0x000391c6) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00042021) bg_cale_side_pane_g

0x6588,	// (0x000391ce) popup_call_status_window_ParamLimits

0x6588,	// (0x000391ce) popup_call_status_window

0xceb6,	// (0x0003fafc) stacon_top_pane

0xcebe,	// (0x0003fb04) status_pane_ParamLimits

0xcebe,	// (0x0003fb04) status_pane

0xced3,	// (0x0003fb19) status_small_pane

0xcedb,	// (0x0003fb21) control_pane

0xc1ee,	// (0x0003ee34) stacon_bottom_pane

0xcee3,	// (0x0003fb29) list_single_mce_smart_pane_t1_ParamLimits

0xcee3,	// (0x0003fb29) list_single_mce_smart_pane_t1

0xcef6,	// (0x0003fb3c) list_single_mce_smart_pane_t2_ParamLimits

0xcef6,	// (0x0003fb3c) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00042034) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00042034) list_single_mce_smart_pane_t

0x6594,	// (0x000391da) compass_pane

0x65a0,	// (0x000391e6) main_location2_pane_t1

0x65b4,	// (0x000391fa) main_location2_pane_t2

0x65c8,	// (0x0003920e) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00042039) main_location2_pane_t

0xcf15,	// (0x0003fb5b) compass_pane_g1_ParamLimits

0xcf15,	// (0x0003fb5b) compass_pane_g1

0x6612,	// (0x00039258) compass_pane_t1

0x6621,	// (0x00039267) compass_pane_t2

0x0005,

0xf3fc,	// (0x00042042) compass_pane_t

0x666c,	// (0x000392b2) text_secondary_cp61

0xcf29,	// (0x0003fb6f) navi_pane_cams_g5

0xcf4c,	// (0x0003fb92) navi_pane_im_t1

0xcf5a,	// (0x0003fba0) navi_pane_mp_g1_ParamLimits

0xcf5a,	// (0x0003fba0) navi_pane_mp_g1

0xcf6e,	// (0x0003fbb4) navi_pane_mp_g2_ParamLimits

0xcf6e,	// (0x0003fbb4) navi_pane_mp_g2

0xcf7a,	// (0x0003fbc0) navi_pane_mp_g3_ParamLimits

0xcf7a,	// (0x0003fbc0) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00042056) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00042056) navi_pane_mp_g

0xcf86,	// (0x0003fbcc) navi_pane_mp_t1

0xcf94,	// (0x0003fbda) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0004205d) navi_pane_mp_t

0xcfd0,	// (0x0003fc16) navi_pane_vt_g1

0xcf86,	// (0x0003fbcc) navi_pane_vt_t1

0xcfd8,	// (0x0003fc1e) navi_slider_pane

0xcfe0,	// (0x0003fc26) zooming_pane

0xcfe8,	// (0x0003fc2e) navi_slider_pane_g1

0x6783,	// (0x000393c9) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00042064) navi_slider_pane_g

0xd00c,	// (0x0003fc52) aid_levels_zoom

0xd014,	// (0x0003fc5a) zooming_pane_g1

0xd01c,	// (0x0003fc62) zooming_pane_g2

0xd01c,	// (0x0003fc62) zooming_pane_g3

0x0002,

0xf42d,	// (0x00042073) zooming_pane_g

0xd024,	// (0x0003fc6a) level_10_zoom

0xd02d,	// (0x0003fc73) level_11_zoom

0xd036,	// (0x0003fc7c) level_1_zoom

0xd03f,	// (0x0003fc85) level_2_zoom

0xd048,	// (0x0003fc8e) level_3_zoom

0xd051,	// (0x0003fc97) level_4_zoom

0xd05a,	// (0x0003fca0) level_5_zoom

0xd063,	// (0x0003fca9) level_6_zoom

0xd06c,	// (0x0003fcb2) level_7_zoom

0xd075,	// (0x0003fcbb) level_8_zoom

0xd07e,	// (0x0003fcc4) level_9_zoom

0xd08f,	// (0x0003fcd5) popup_phob_thumbnail_window_g1

0xd097,	// (0x0003fcdd) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0004207a) popup_phob_thumbnail_window_g

0xe3d4,	// (0x0004101a) level_1_location

0xe3dc,	// (0x00041022) level_2_location

0xe3e4,	// (0x0004102a) level_3_location

0xe3ec,	// (0x00041032) level_4_location

0xcfe0,	// (0x0003fc26) level_5_location

0x6795,	// (0x000393db) mce_icon_pane_g1

0x679d,	// (0x000393e3) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0004207f) mce_icon_pane_g

0x67a5,	// (0x000393eb) main_mup_pane_g1_ParamLimits

0x67a5,	// (0x000393eb) main_mup_pane_g1

0x67bd,	// (0x00039403) main_mup_pane_g2_ParamLimits

0x67bd,	// (0x00039403) main_mup_pane_g2

0x67d9,	// (0x0003941f) main_mup_pane_g3_ParamLimits

0x67d9,	// (0x0003941f) main_mup_pane_g3

0x67f5,	// (0x0003943b) main_mup_pane_g4_ParamLimits

0x67f5,	// (0x0003943b) main_mup_pane_g4

0x6811,	// (0x00039457) main_mup_pane_g5_ParamLimits

0x6811,	// (0x00039457) main_mup_pane_g5

0x6832,	// (0x00039478) main_mup_pane_g6_ParamLimits

0x6832,	// (0x00039478) main_mup_pane_g6

0x684e,	// (0x00039494) main_mup_pane_g7_ParamLimits

0x684e,	// (0x00039494) main_mup_pane_g7

0x686a,	// (0x000394b0) main_mup_pane_g8_ParamLimits

0x686a,	// (0x000394b0) main_mup_pane_g8

0x6886,	// (0x000394cc) main_mup_pane_g9_ParamLimits

0x6886,	// (0x000394cc) main_mup_pane_g9

0x68a5,	// (0x000394eb) main_mup_pane_g10_ParamLimits

0x68a5,	// (0x000394eb) main_mup_pane_g10

0x68c4,	// (0x0003950a) main_mup_pane_g11_ParamLimits

0x68c4,	// (0x0003950a) main_mup_pane_g11

0x68dc,	// (0x00039522) main_mup_pane_g12_ParamLimits

0x68dc,	// (0x00039522) main_mup_pane_g12

0x68ea,	// (0x00039530) main_mup_pane_g13_ParamLimits

0x68ea,	// (0x00039530) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00042084) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00042084) main_mup_pane_g

0x6900,	// (0x00039546) main_mup_pane_t1_ParamLimits

0x6900,	// (0x00039546) main_mup_pane_t1

0x691d,	// (0x00039563) main_mup_pane_t2_ParamLimits

0x691d,	// (0x00039563) main_mup_pane_t2

0x6937,	// (0x0003957d) main_mup_pane_t3_ParamLimits

0x6937,	// (0x0003957d) main_mup_pane_t3

0x6951,	// (0x00039597) main_mup_pane_t4_ParamLimits

0x6951,	// (0x00039597) main_mup_pane_t4

0x6963,	// (0x000395a9) main_mup_pane_t5_ParamLimits

0x6963,	// (0x000395a9) main_mup_pane_t5

0x6975,	// (0x000395bb) main_mup_pane_t6_ParamLimits

0x6975,	// (0x000395bb) main_mup_pane_t6

0x0005,

0xf459,	// (0x0004209f) main_mup_pane_t_ParamLimits

0xf459,	// (0x0004209f) main_mup_pane_t

0x698b,	// (0x000395d1) mup_progress_pane_ParamLimits

0x698b,	// (0x000395d1) mup_progress_pane

0x6997,	// (0x000395dd) mup_visualizer_pane_ParamLimits

0x6997,	// (0x000395dd) mup_visualizer_pane

0x69d5,	// (0x0003961b) mup_volume_pane_ParamLimits

0x69d5,	// (0x0003961b) mup_volume_pane

0xccec,	// (0x0003f932) mup_visualizer_pane_g1_ParamLimits

0xccec,	// (0x0003f932) mup_visualizer_pane_g1

0xccec,	// (0x0003f932) mup_visualizer_pane_g2_ParamLimits

0xccec,	// (0x0003f932) mup_visualizer_pane_g2

0xcf15,	// (0x0003fb5b) mup_visualizer_pane_g3_ParamLimits

0xcf15,	// (0x0003fb5b) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x000420ac) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x000420ac) mup_visualizer_pane_g

0xc5ad,	// (0x0003f1f3) mup_volume_pane_g1

0xd0a7,	// (0x0003fced) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x000420b3) mup_volume_pane_g

0xc5ad,	// (0x0003f1f3) mup_progress_pane_g1

0xd0b0,	// (0x0003fcf6) mup_progress_pane_g2

0xd0b9,	// (0x0003fcff) mup_progress_pane_g3

0x0002,

0xf472,	// (0x000420b8) mup_progress_pane_g

0xc1ee,	// (0x0003ee34) bg_popup_window_pane_cp05

0xd0c2,	// (0x0003fd08) heading_pane_cp02_ParamLimits

0xd0c2,	// (0x0003fd08) heading_pane_cp02

0xd0dc,	// (0x0003fd22) list_popup_blid_pane

0xd0e4,	// (0x0003fd2a) list_blid_sat_info_pane_ParamLimits

0xd0e4,	// (0x0003fd2a) list_blid_sat_info_pane

0xd0f7,	// (0x0003fd3d) list_blid_sat_info_pane_g1

0xd0ff,	// (0x0003fd45) list_blid_sat_info_pane_t1

0x6ae0,	// (0x00039726) mup_equalizer_pane_ParamLimits

0x6ae0,	// (0x00039726) mup_equalizer_pane

0x6b01,	// (0x00039747) mup_equalizer_pane_cp1_ParamLimits

0x6b01,	// (0x00039747) mup_equalizer_pane_cp1

0x6b22,	// (0x00039768) mup_equalizer_pane_cp2_ParamLimits

0x6b22,	// (0x00039768) mup_equalizer_pane_cp2

0x6b43,	// (0x00039789) mup_equalizer_pane_cp3_ParamLimits

0x6b43,	// (0x00039789) mup_equalizer_pane_cp3

0x6b64,	// (0x000397aa) mup_equalizer_pane_cp4_ParamLimits

0x6b64,	// (0x000397aa) mup_equalizer_pane_cp4

0x6b85,	// (0x000397cb) mup_equalizer_pane_cp5

0x6b9b,	// (0x000397e1) mup_equalizer_pane_cp6

0x6bb3,	// (0x000397f9) mup_equalizer_pane_cp7

0xe2f2,	// (0x00040f38) bg_popup_call_poc_act_pane_g9

0xe2fa,	// (0x00040f40) bg_popup_call_poc_act_pane_g10

0xe302,	// (0x00040f48) bg_popup_call_poc_act_pane_g11

0x000a,

0xc449,	// (0x0003f08f) mup_scale_pane

0xc5ad,	// (0x0003f1f3) mup_scale_pane_g1

0xd10d,	// (0x0003fd53) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x000420d4) mup_scale_pane_g

0xd131,	// (0x0003fd77) msg_data_pane

0xd139,	// (0x0003fd7f) scroll_pane_cp017

0x33d3,	// (0x00036019) bg_list_pane_cp04_ParamLimits

0x33d3,	// (0x00036019) bg_list_pane_cp04

0xd141,	// (0x0003fd87) msg_data_pane_g1

0x6bdd,	// (0x00039823) msg_data_pane_g2

0x647a,	// (0x000390c0) msg_data_pane_g3

0x6be5,	// (0x0003982b) msg_data_pane_g4

0x6bed,	// (0x00039833) msg_data_pane_g5

0x6bf5,	// (0x0003983b) msg_data_pane_g6

0x6bfd,	// (0x00039843) msg_data_pane_g7

0x0006,

0xf49d,	// (0x000420e3) msg_data_pane_g

0x33f3,	// (0x00036039) msg_text_pane_ParamLimits

0x33f3,	// (0x00036039) msg_text_pane

0x6c05,	// (0x0003984b) qrid_highlight_pane_cp011_ParamLimits

0x6c05,	// (0x0003984b) qrid_highlight_pane_cp011

0xc1ee,	// (0x0003ee34) msg_body_pane

0xc1ee,	// (0x0003ee34) msg_header_pane

0xd152,	// (0x0003fd98) input_focus_pane_cp07

0x3454,	// (0x0003609a) msg_header_pane_t1_ParamLimits

0x3454,	// (0x0003609a) msg_header_pane_t1

0x3468,	// (0x000360ae) msg_header_pane_t2_ParamLimits

0x3468,	// (0x000360ae) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x000420f7) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x000420f7) msg_header_pane_t

0xd167,	// (0x0003fdad) msg_body_pane_g1

0x347a,	// (0x000360c0) msg_body_pane_t1_ParamLimits

0x347a,	// (0x000360c0) msg_body_pane_t1

0x34ab,	// (0x000360f1) msg_body_pane_t2_ParamLimits

0x34ab,	// (0x000360f1) msg_body_pane_t2

0x34bd,	// (0x00036103) msg_body_pane_t3_ParamLimits

0x34bd,	// (0x00036103) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x000420fc) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x000420fc) msg_body_pane_t

0x6c73,	// (0x000398b9) main_viewer_pane_g1_ParamLimits

0x6c73,	// (0x000398b9) main_viewer_pane_g1

0x6c7f,	// (0x000398c5) main_viewer_pane_g2_ParamLimits

0x6c7f,	// (0x000398c5) main_viewer_pane_g2

0x6c8b,	// (0x000398d1) main_viewer_pane_g3_ParamLimits

0x6c8b,	// (0x000398d1) main_viewer_pane_g3

0x6c9c,	// (0x000398e2) main_viewer_pane_g4_ParamLimits

0x6c9c,	// (0x000398e2) main_viewer_pane_g4

0x6cad,	// (0x000398f3) main_viewer_pane_g5_ParamLimits

0x6cad,	// (0x000398f3) main_viewer_pane_g5

0x6cad,	// (0x000398f3) main_viewer_pane_g7_ParamLimits

0x6cad,	// (0x000398f3) main_viewer_pane_g7

0x6cbf,	// (0x00039905) main_viewer_pane_g8_ParamLimits

0x6cbf,	// (0x00039905) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0004210c) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0004210c) main_viewer_pane_g

0xd16f,	// (0x0003fdb5) viewer_content_pane_ParamLimits

0xd16f,	// (0x0003fdb5) viewer_content_pane

0x6cf7,	// (0x0003993d) main_postcard_pane_g1_ParamLimits

0x6cf7,	// (0x0003993d) main_postcard_pane_g1

0x6d05,	// (0x0003994b) main_postcard_pane_g2_ParamLimits

0x6d05,	// (0x0003994b) main_postcard_pane_g2

0x6d13,	// (0x00039959) main_postcard_pane_g3_ParamLimits

0x6d13,	// (0x00039959) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0004211d) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0004211d) main_postcard_pane_g

0x6d23,	// (0x00039969) main_postcard_pane_g4

0xe507,	// (0x0004114d) smil_status_volume_pane_g2

0x6d4f,	// (0x00039995) postcard_pane_ParamLimits

0x6d4f,	// (0x00039995) postcard_pane

0xccec,	// (0x0003f932) postcard_pane_g1_ParamLimits

0xccec,	// (0x0003f932) postcard_pane_g1

0x6d81,	// (0x000399c7) postcard_pane_g2_ParamLimits

0x6d81,	// (0x000399c7) postcard_pane_g2

0x6d8d,	// (0x000399d3) postcard_pane_g3_ParamLimits

0x6d8d,	// (0x000399d3) postcard_pane_g3

0xd17d,	// (0x0003fdc3) postcard_pane_g4_ParamLimits

0xd17d,	// (0x0003fdc3) postcard_pane_g4

0x6d99,	// (0x000399df) postcard_pane_g5_ParamLimits

0x6d99,	// (0x000399df) postcard_pane_g5

0x6da5,	// (0x000399eb) postcard_pane_g6_ParamLimits

0x6da5,	// (0x000399eb) postcard_pane_g6

0xd18b,	// (0x0003fdd1) postcard_pane_g7_ParamLimits

0xd18b,	// (0x0003fdd1) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0004212a) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0004212a) postcard_pane_g

0x6db1,	// (0x000399f7) main_mp2_pane_g1_ParamLimits

0x6db1,	// (0x000399f7) main_mp2_pane_g1

0x6dbd,	// (0x00039a03) main_mp2_pane_g2_ParamLimits

0x6dbd,	// (0x00039a03) main_mp2_pane_g2

0x6dc9,	// (0x00039a0f) main_mp2_pane_g3_ParamLimits

0x6dc9,	// (0x00039a0f) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00042139) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00042139) main_mp2_pane_g

0x6dd5,	// (0x00039a1b) main_mp2_pane_t1_ParamLimits

0x6dd5,	// (0x00039a1b) main_mp2_pane_t1

0x6dec,	// (0x00039a32) main_mp2_pane_t2_ParamLimits

0x6dec,	// (0x00039a32) main_mp2_pane_t2

0x6dfe,	// (0x00039a44) main_mp2_pane_t3_ParamLimits

0x6dfe,	// (0x00039a44) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00042140) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00042140) main_mp2_pane_t

0xd199,	// (0x0003fddf) pec_content_pane_ParamLimits

0xd199,	// (0x0003fddf) pec_content_pane

0xc8b8,	// (0x0003f4fe) scroll_pane_cp015

0xd1ab,	// (0x0003fdf1) pec_attribute_pane_ParamLimits

0xd1ab,	// (0x0003fdf1) pec_attribute_pane

0x6e10,	// (0x00039a56) pec_content_pane_g1_ParamLimits

0x6e10,	// (0x00039a56) pec_content_pane_g1

0xd1bb,	// (0x0003fe01) pec_content_pane_t1_ParamLimits

0xd1bb,	// (0x0003fe01) pec_content_pane_t1

0xd1cd,	// (0x0003fe13) pec_content_pane_t2_ParamLimits

0xd1cd,	// (0x0003fe13) pec_content_pane_t2

0x0001,

0xf501,	// (0x00042147) pec_content_pane_t_ParamLimits

0xf501,	// (0x00042147) pec_content_pane_t

0x6e1c,	// (0x00039a62) list_single_graphic_pane_cp01_ParamLimits

0x6e1c,	// (0x00039a62) list_single_graphic_pane_cp01

0xc449,	// (0x0003f08f) bg_popup_sub_pane_cp04

0xd1df,	// (0x0003fe25) popup_mup_playback_window_g1

0xd1eb,	// (0x0003fe31) popup_mup_playback_window_t1

0xd200,	// (0x0003fe46) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0004214c) popup_mup_playback_window_t

0xd237,	// (0x0003fe7d) main_image_pane_g1_ParamLimits

0xd237,	// (0x0003fe7d) main_image_pane_g1

0xd27a,	// (0x0003fec0) scroll_pane_cp018_ParamLimits

0xd27a,	// (0x0003fec0) scroll_pane_cp018

0xd292,	// (0x0003fed8) scroll_pane_cp016_ParamLimits

0xd292,	// (0x0003fed8) scroll_pane_cp016

0x6ec0,	// (0x00039b06) smil2_image_pane_ParamLimits

0x6ec0,	// (0x00039b06) smil2_image_pane

0x6ef4,	// (0x00039b3a) smil2_root_pane_ParamLimits

0x6ef4,	// (0x00039b3a) smil2_root_pane

0x6f20,	// (0x00039b66) smil2_text_pane_ParamLimits

0x6f20,	// (0x00039b66) smil2_text_pane

0xc1ee,	// (0x0003ee34) bg_list_pane_cp06

0xd2ce,	// (0x0003ff14) grid_radio_pane

0xc1ee,	// (0x0003ee34) bg_popup_window_pane_cp06

0xd2d6,	// (0x0003ff1c) main_fmradio_pane_t1

0xcd63,	// (0x0003f9a9) heading_pane_cp04

0xd2e4,	// (0x0003ff2a) main_fmradio_pane_t2

0xe30a,	// (0x00040f50) popup_cale_lunar_info_window_g1

0xd2f2,	// (0x0003ff38) main_fmradio_pane_t3

0xe312,	// (0x00040f58) popup_cale_lunar_info_window_g2

0xd300,	// (0x0003ff46) main_fmradio_pane_t4

0x0001,

0xd30e,	// (0x0003ff54) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00042227) popup_cale_lunar_info_window_g

0xf51b,	// (0x00042161) main_fmradio_pane_t

0xd31c,	// (0x0003ff62) wait_bar_pane_cp03

0xd324,	// (0x0003ff6a) cell_fmradio_pane_ParamLimits

0xd324,	// (0x0003ff6a) cell_fmradio_pane

0xd18b,	// (0x0003fdd1) cell_fmradio_pane_g1_ParamLimits

0xd18b,	// (0x0003fdd1) cell_fmradio_pane_g1

0xc1ee,	// (0x0003ee34) grid_highlight_pane_cp011

0xd337,	// (0x0003ff7d) poc_content_pane_ParamLimits

0xd337,	// (0x0003ff7d) poc_content_pane

0xd349,	// (0x0003ff8f) scroll_pane_cp019

0x6f60,	// (0x00039ba6) popup_call_poc_act_window_ParamLimits

0x6f60,	// (0x00039ba6) popup_call_poc_act_window

0x6f6d,	// (0x00039bb3) popup_call_poc_inact_window_ParamLimits

0x6f6d,	// (0x00039bb3) popup_call_poc_inact_window

0xf5b8,	// (0x000421fe) bg_popup_call_poc_act_pane_g

0xe27a,	// (0x00040ec0) bg_popup_call_poc_inact_pane_g1

0xe282,	// (0x00040ec8) bg_popup_call_poc_inact_pane_g2

0xd351,	// (0x0003ff97) popup_call_poc_act_window_g2

0xe28a,	// (0x00040ed0) bg_popup_call_poc_inact_pane_g3

0xe292,	// (0x00040ed8) bg_popup_call_poc_inact_pane_g4

0xe29a,	// (0x00040ee0) bg_popup_call_poc_inact_pane_g5

0xd359,	// (0x0003ff9f) popup_call_poc_act_window_t1_ParamLimits

0xd359,	// (0x0003ff9f) popup_call_poc_act_window_t1

0xd381,	// (0x0003ffc7) popup_call_poc_act_window_t2_ParamLimits

0xd381,	// (0x0003ffc7) popup_call_poc_act_window_t2

0xd3a9,	// (0x0003ffef) popup_call_poc_act_window_t3_ParamLimits

0xd3a9,	// (0x0003ffef) popup_call_poc_act_window_t3

0xd3d1,	// (0x00040017) popup_call_poc_act_window_t4_ParamLimits

0xd3d1,	// (0x00040017) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0004216c) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0004216c) popup_call_poc_act_window_t

0xe2a2,	// (0x00040ee8) bg_popup_call_poc_inact_pane_g6

0xe2aa,	// (0x00040ef0) bg_popup_call_poc_inact_pane_g7

0xe2b2,	// (0x00040ef8) bg_popup_call_poc_inact_pane_g8

0xd3e3,	// (0x00040029) popup_call_poc_inact_window_g2

0xe2ba,	// (0x00040f00) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x000421eb) bg_popup_call_poc_inact_pane_g

0xd3eb,	// (0x00040031) popup_call_poc_inact_window_t1_ParamLimits

0xd3eb,	// (0x00040031) popup_call_poc_inact_window_t1

0xd400,	// (0x00040046) popup_call_poc_inact_window_t2_ParamLimits

0xd400,	// (0x00040046) popup_call_poc_inact_window_t2

0xd415,	// (0x0004005b) popup_call_poc_inact_window_t3_ParamLimits

0xd415,	// (0x0004005b) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00042175) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00042175) popup_call_poc_inact_window_t

0xe47a,	// (0x000410c0) context_pane_ParamLimits

0x7554,	// (0x0003a19a) signal_pane_ParamLimits

0xcfe0,	// (0x0003fc26) main_call2_pane

0xe468,	// (0x000410ae) popup_phob_thumbnail2_window_ParamLimits

0xe468,	// (0x000410ae) popup_phob_thumbnail2_window

0x6c21,	// (0x00039867) aid_hotspot_pointer_arrow_pane

0x6c29,	// (0x0003986f) aid_hotspot_pointer_hand_pane

0x7292,	// (0x00039ed8) phob_pre_status_pane_g5

0x506e,	// (0x00037cb4) cams_zoom_pane_ParamLimits

0x507a,	// (0x00037cc0) image_vga_pane_ParamLimits

0x5089,	// (0x00037ccf) main_camera_pane_g1_ParamLimits

0x5097,	// (0x00037cdd) main_camera_pane_g2_ParamLimits

0x50a5,	// (0x00037ceb) main_camera_pane_g3_ParamLimits

0x50b1,	// (0x00037cf7) main_camera_pane_g4_ParamLimits

0x50bd,	// (0x00037d03) main_camera_pane_g5_ParamLimits

0x50c9,	// (0x00037d0f) main_camera_pane_g6_ParamLimits

0x50d5,	// (0x00037d1b) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00041e74) main_camera_pane_g_ParamLimits

0x50e1,	// (0x00037d27) main_camera_pane_t1_ParamLimits

0x50f3,	// (0x00037d39) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00041e85) main_camera_pane_t_ParamLimits

0xc449,	// (0x0003f08f) bg_popup_preview_window_pane_cp01_ParamLimits

0xc449,	// (0x0003f08f) bg_popup_preview_window_pane_cp01

0xd42a,	// (0x00040070) popup_phob_thumbnail2_window_g1_ParamLimits

0xd42a,	// (0x00040070) popup_phob_thumbnail2_window_g1

0xc1ee,	// (0x0003ee34) call2_cli_visual_pane

0x6f89,	// (0x00039bcf) popup_call2_audio_conf_window_ParamLimits

0x6f89,	// (0x00039bcf) popup_call2_audio_conf_window

0x6f9e,	// (0x00039be4) popup_call2_audio_first_window_ParamLimits

0x6f9e,	// (0x00039be4) popup_call2_audio_first_window

0x703c,	// (0x00039c82) popup_call2_audio_in_window_ParamLimits

0x703c,	// (0x00039c82) popup_call2_audio_in_window

0x707e,	// (0x00039cc4) popup_call2_audio_out_window_ParamLimits

0x707e,	// (0x00039cc4) popup_call2_audio_out_window

0x70e0,	// (0x00039d26) popup_call2_audio_second_window_ParamLimits

0x70e0,	// (0x00039d26) popup_call2_audio_second_window

0x713e,	// (0x00039d84) popup_call2_audio_wait_window_ParamLimits

0x713e,	// (0x00039d84) popup_call2_audio_wait_window

0xc1ee,	// (0x0003ee34) bg_popup_call2_act_pane_cp03

0xc42b,	// (0x0003f071) list_conf_pane_cp

0xd436,	// (0x0004007c) popup_call2_audio_conf_window_t1

0xd444,	// (0x0004008a) list_single_graphic_popup_conf2_pane_ParamLimits

0xd444,	// (0x0004008a) list_single_graphic_popup_conf2_pane

0xcdf6,	// (0x0003fa3c) list_highlight_pane_cp04

0xd457,	// (0x0004009d) list_single_graphic_popup_conf2_pane_g1

0xce07,	// (0x0003fa4d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0004217c) list_single_graphic_popup_conf2_pane_g

0xd461,	// (0x000400a7) list_single_graphic_popup_conf2_pane_t1

0xd46f,	// (0x000400b5) bg_popup_call2_act_pane_cp01_ParamLimits

0xd46f,	// (0x000400b5) bg_popup_call2_act_pane_cp01

0xd4f9,	// (0x0004013f) call_type_pane_cp05_ParamLimits

0xd4f9,	// (0x0004013f) call_type_pane_cp05

0xd54d,	// (0x00040193) popup_call2_audio_second_window_g1_ParamLimits

0xd54d,	// (0x00040193) popup_call2_audio_second_window_g1

0xd5a1,	// (0x000401e7) popup_call2_audio_second_window_g2_ParamLimits

0xd5a1,	// (0x000401e7) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00042181) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00042181) popup_call2_audio_second_window_g

0xd606,	// (0x0004024c) popup_call2_audio_second_window_t1_ParamLimits

0xd606,	// (0x0004024c) popup_call2_audio_second_window_t1

0xd6c1,	// (0x00040307) popup_call2_audio_second_window_t2_ParamLimits

0xd6c1,	// (0x00040307) popup_call2_audio_second_window_t2

0xd714,	// (0x0004035a) popup_call2_audio_second_window_t3_ParamLimits

0xd714,	// (0x0004035a) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00042188) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00042188) popup_call2_audio_second_window_t

0xc1ee,	// (0x0003ee34) bg_popup_call2_in_pane_cp02

0xc1f8,	// (0x0003ee3e) call_type_pane_cp04

0xc200,	// (0x0003ee46) popup_call2_audio_wait_window_g1

0xc208,	// (0x0003ee4e) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00041d61) popup_call2_audio_wait_window_g

0xc210,	// (0x0003ee56) popup_call2_audio_wait_window_t3

0xd807,	// (0x0004044d) bg_popup_call2_act_pane_ParamLimits

0xd807,	// (0x0004044d) bg_popup_call2_act_pane

0xd904,	// (0x0004054a) call_type_pane_cp03_ParamLimits

0xd904,	// (0x0004054a) call_type_pane_cp03

0xd968,	// (0x000405ae) popup_call2_audio_first_window_g1_ParamLimits

0xd968,	// (0x000405ae) popup_call2_audio_first_window_g1

0xd9d8,	// (0x0004061e) popup_call2_audio_first_window_g2_ParamLimits

0xd9d8,	// (0x0004061e) popup_call2_audio_first_window_g2

0xccec,	// (0x0003f932) popup_call2_audio_first_window_g3_ParamLimits

0xccec,	// (0x0003f932) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00042191) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00042191) popup_call2_audio_first_window_g

0xdab6,	// (0x000406fc) popup_call2_audio_first_window_t1_ParamLimits

0xdab6,	// (0x000406fc) popup_call2_audio_first_window_t1

0xdbc2,	// (0x00040808) popup_call2_audio_first_window_t4_ParamLimits

0xdbc2,	// (0x00040808) popup_call2_audio_first_window_t4

0xdca5,	// (0x000408eb) popup_call2_audio_first_window_t5_ParamLimits

0xdca5,	// (0x000408eb) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0004219c) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0004219c) popup_call2_audio_first_window_t

0xc441,	// (0x0003f087) bg_popup_call2_act_pane_g1

0xe31a,	// (0x00040f60) popup_cale_lunar_info_window_t1

0xe328,	// (0x00040f6e) popup_cale_lunar_info_window_t2

0xe336,	// (0x00040f7c) popup_cale_lunar_info_window_t3

0xc1ee,	// (0x0003ee34) bg_popup_call2_bubble_pane

0xdda6,	// (0x000409ec) bg_popup_call2_in_pane_cp01_ParamLimits

0xdda6,	// (0x000409ec) bg_popup_call2_in_pane_cp01

0xbeca,	// (0x0003eb10) call_type_pane_cp02

0xddee,	// (0x00040a34) popup_call2_audio_out_window_g1_ParamLimits

0xddee,	// (0x00040a34) popup_call2_audio_out_window_g1

0xde1a,	// (0x00040a60) popup_call2_audio_out_window_g2_ParamLimits

0xde1a,	// (0x00040a60) popup_call2_audio_out_window_g2

0xde42,	// (0x00040a88) popup_call2_audio_out_window_g3_ParamLimits

0xde42,	// (0x00040a88) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x000421a5) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x000421a5) popup_call2_audio_out_window_g

0xde7d,	// (0x00040ac3) popup_call2_audio_out_window_t1_ParamLimits

0xde7d,	// (0x00040ac3) popup_call2_audio_out_window_t1

0xdedc,	// (0x00040b22) popup_call2_audio_out_window_t2_ParamLimits

0xdedc,	// (0x00040b22) popup_call2_audio_out_window_t2

0xdf30,	// (0x00040b76) popup_call2_audio_out_window_t3_ParamLimits

0xdf30,	// (0x00040b76) popup_call2_audio_out_window_t3

0xdf46,	// (0x00040b8c) popup_call2_audio_out_window_t4_ParamLimits

0xdf46,	// (0x00040b8c) popup_call2_audio_out_window_t4

0xdf5c,	// (0x00040ba2) popup_call2_audio_out_window_t5_ParamLimits

0xdf5c,	// (0x00040ba2) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x000421ae) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x000421ae) popup_call2_audio_out_window_t

0xdfc0,	// (0x00040c06) bg_popup_call2_in_pane_ParamLimits

0xdfc0,	// (0x00040c06) bg_popup_call2_in_pane

0xe01c,	// (0x00040c62) popup_call2_audio_in_window_g1_ParamLimits

0xe01c,	// (0x00040c62) popup_call2_audio_in_window_g1

0xe054,	// (0x00040c9a) popup_call2_audio_in_window_g2_ParamLimits

0xe054,	// (0x00040c9a) popup_call2_audio_in_window_g2

0xe08c,	// (0x00040cd2) popup_call2_audio_in_window_g3_ParamLimits

0xe08c,	// (0x00040cd2) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x000421bb) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x000421bb) popup_call2_audio_in_window_g

0xe0e4,	// (0x00040d2a) popup_call2_audio_in_window_t1_ParamLimits

0xe0e4,	// (0x00040d2a) popup_call2_audio_in_window_t1

0xe164,	// (0x00040daa) popup_call2_audio_in_window_t2_ParamLimits

0xe164,	// (0x00040daa) popup_call2_audio_in_window_t2

0xe1e4,	// (0x00040e2a) popup_call2_audio_in_window_t3_ParamLimits

0xe1e4,	// (0x00040e2a) popup_call2_audio_in_window_t3

0xe1fe,	// (0x00040e44) popup_call2_audio_in_window_t4_ParamLimits

0xe1fe,	// (0x00040e44) popup_call2_audio_in_window_t4

0xe210,	// (0x00040e56) popup_call2_audio_in_window_t5_ParamLimits

0xe210,	// (0x00040e56) popup_call2_audio_in_window_t5

0xe225,	// (0x00040e6b) popup_call2_audio_in_window_t6_ParamLimits

0xe225,	// (0x00040e6b) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x000421c4) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x000421c4) popup_call2_audio_in_window_t

0xc441,	// (0x0003f087) bg_popup_call2_in_pane_g1

0xe344,	// (0x00040f8a) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0004222c) popup_cale_lunar_info_window_t

0xc449,	// (0x0003f08f) bg_popup_call2_rect_pane_ParamLimits

0xc449,	// (0x0003f08f) bg_popup_call2_rect_pane

0xc1ee,	// (0x0003ee34) call2_cli_visual_graphic_pane

0xc1ee,	// (0x0003ee34) call2_cli_visual_text_pane

0x7604,	// (0x0003a24a) smil_status_volume_pane_g3

0x0002,

0xc5ad,	// (0x0003f1f3) call2_cli_visual_graphic_pane_g1

0xc5ad,	// (0x0003f1f3) call2_cli_visual_graphic_pane_g2

0xc5ad,	// (0x0003f1f3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x000421d1) call2_cli_visual_graphic_pane_g

0xe23a,	// (0x00040e80) bg_popup_call2_rect_pane_g1

0xc64b,	// (0x0003f291) bg_popup_call2_rect_pane_g2

0xe242,	// (0x00040e88) bg_popup_call2_rect_pane_g3

0xe24a,	// (0x00040e90) bg_popup_call2_rect_pane_g4

0xe252,	// (0x00040e98) bg_popup_call2_rect_pane_g5

0xe25a,	// (0x00040ea0) bg_popup_call2_rect_pane_g6

0xe262,	// (0x00040ea8) bg_popup_call2_rect_pane_g7

0xe26a,	// (0x00040eb0) bg_popup_call2_rect_pane_g8

0xe272,	// (0x00040eb8) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x000421d8) bg_popup_call2_rect_pane_g

0xe27a,	// (0x00040ec0) bg_popup_call2_bubble_pane_g1

0xe282,	// (0x00040ec8) bg_popup_call2_bubble_pane_g2

0xe28a,	// (0x00040ed0) bg_popup_call2_bubble_pane_g3

0xe292,	// (0x00040ed8) bg_popup_call2_bubble_pane_g4

0xe29a,	// (0x00040ee0) bg_popup_call2_bubble_pane_g5

0xe2a2,	// (0x00040ee8) bg_popup_call2_bubble_pane_g6

0xe2aa,	// (0x00040ef0) bg_popup_call2_bubble_pane_g7

0xe2b2,	// (0x00040ef8) bg_popup_call2_bubble_pane_g8

0xe2ba,	// (0x00040f00) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x000421eb) bg_popup_call2_bubble_pane_g

0x4c11,	// (0x00037857) aid_cale_week_size_cell_pane

0x5105,	// (0x00037d4b) aid_cams_cif_uncrop_pane_ParamLimits

0x5105,	// (0x00037d4b) aid_cams_cif_uncrop_pane

0x5268,	// (0x00037eae) aid_cams_size_cell_ParamLimits

0x5268,	// (0x00037eae) aid_cams_size_cell

0x5274,	// (0x00037eba) grid_cams_pane_ParamLimits

0x5282,	// (0x00037ec8) linegrid_cams_pane_ParamLimits

0x5359,	// (0x00037f9f) call_video_pane_t1

0x537a,	// (0x00037fc0) call_video_pane_t2

0x0001,

0xf292,	// (0x00041ed8) call_video_pane_t

0x58fa,	// (0x00038540) aid_cale_month_size_cell_pane_ParamLimits

0x58fa,	// (0x00038540) aid_cale_month_size_cell_pane

0xf62f,	// (0x00042275) smil_status_volume_pane_g

0x7611,	// (0x0003a257) volume_smil_pane_ParamLimits

0x43d1,	// (0x00037017) aid_popup2_width_pane

0x4b06,	// (0x0003774c) cell_qdial_pane_g4_ParamLimits

0x4b06,	// (0x0003774c) cell_qdial_pane_g4

0x65ee,	// (0x00039234) aid_blid_cardinal_pane_ParamLimits

0x65fe,	// (0x00039244) aid_blid_destination_pane_ParamLimits

0x65fe,	// (0x00039244) aid_blid_destination_pane

0xc449,	// (0x0003f08f) bg_popup_call_poc_act_pane_ParamLimits

0xc449,	// (0x0003f08f) bg_popup_call_poc_act_pane

0xc449,	// (0x0003f08f) bg_popup_call_poc_inact_pane_ParamLimits

0xc449,	// (0x0003f08f) bg_popup_call_poc_inact_pane

0xe2ca,	// (0x00040f10) bg_popup_call_poc_act_pane_g1

0xe2d2,	// (0x00040f18) bg_popup_call_poc_act_pane_g2

0xe2da,	// (0x00040f20) bg_popup_call_poc_act_pane_g3

0xe292,	// (0x00040ed8) bg_popup_call_poc_act_pane_g4

0xe29a,	// (0x00040ee0) bg_popup_call_poc_act_pane_g5

0xe2e2,	// (0x00040f28) bg_popup_call_poc_act_pane_g6

0xe2aa,	// (0x00040ef0) bg_popup_call_poc_act_pane_g7

0xe2ea,	// (0x00040f30) bg_popup_call_poc_act_pane_g8

0xc1ee,	// (0x0003ee34) main_usb_pane

0xe443,	// (0x00041089) popup_cale_lunar_info_window

0x5699,	// (0x000382df) im_reading_pane_t1_ParamLimits

0xc810,	// (0x0003f456) list_im_pane_ParamLimits

0xc821,	// (0x0003f467) scroll_pane_cp07_ParamLimits

0xc1ee,	// (0x0003ee34) grid_highlight_pane_cp012

0xc449,	// (0x0003f08f) mup_scale_pane_ParamLimits

0xccec,	// (0x0003f932) main_usb_pane_g1_ParamLimits

0xccec,	// (0x0003f932) main_usb_pane_g1

0x71b5,	// (0x00039dfb) main_usb_pane_g2_ParamLimits

0x71b5,	// (0x00039dfb) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00042215) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00042215) main_usb_pane_g

0x71c1,	// (0x00039e07) main_usb_pane_t1_ParamLimits

0x71c1,	// (0x00039e07) main_usb_pane_t1

0x71d3,	// (0x00039e19) main_usb_pane_t2_ParamLimits

0x71d3,	// (0x00039e19) main_usb_pane_t2

0x71e5,	// (0x00039e2b) main_usb_pane_t3_ParamLimits

0x71e5,	// (0x00039e2b) main_usb_pane_t3

0x71f7,	// (0x00039e3d) main_usb_pane_t4_ParamLimits

0x71f7,	// (0x00039e3d) main_usb_pane_t4

0x7209,	// (0x00039e4f) main_usb_pane_t5_ParamLimits

0x7209,	// (0x00039e4f) main_usb_pane_t5

0x721b,	// (0x00039e61) main_usb_pane_t6_ParamLimits

0x721b,	// (0x00039e61) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0004221a) main_usb_pane_t_ParamLimits

0x6594,	// (0x000391da) aid_text_placing

0x65a0,	// (0x000391e6) main_location2_pane_t1_ParamLimits

0x65b4,	// (0x000391fa) main_location2_pane_t2_ParamLimits

0x65c8,	// (0x0003920e) main_location2_pane_t3_ParamLimits

0x65dc,	// (0x00039222) main_location2_pane_t4_ParamLimits

0x65dc,	// (0x00039222) main_location2_pane_t4

0xf3f3,	// (0x00042039) main_location2_pane_t_ParamLimits

0xc48d,	// (0x0003f0d3) find_pinb_pane_g2_ParamLimits

0xc48d,	// (0x0003f0d3) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00041d87) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00041d87) find_pinb_pane_g

0xc499,	// (0x0003f0df) find_pinb_pane_t1_ParamLimits

0xc4ab,	// (0x0003f0f1) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00041d8c) find_pinb_pane_t_ParamLimits

0xc1ee,	// (0x0003ee34) main_call3_pane

0x5d12,	// (0x00038958) cale_month_day_heading_pane_t1_ParamLimits

0x5d70,	// (0x000389b6) cale_month_day_heading_pane_t2_ParamLimits

0x5dd5,	// (0x00038a1b) cale_month_day_heading_pane_t3_ParamLimits

0x5e3a,	// (0x00038a80) cale_month_day_heading_pane_t4_ParamLimits

0x5e9f,	// (0x00038ae5) cale_month_day_heading_pane_t5_ParamLimits

0x5f04,	// (0x00038b4a) cale_month_day_heading_pane_t6_ParamLimits

0x5f71,	// (0x00038bb7) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00041f10) cale_month_day_heading_pane_t_ParamLimits

0xca61,	// (0x0003f6a7) smil_status_volume_pane

0x6d69,	// (0x000399af) postcard_address_pane_ParamLimits

0x6d69,	// (0x000399af) postcard_address_pane

0x6d75,	// (0x000399bb) postcard_message_pane_ParamLimits

0x6d75,	// (0x000399bb) postcard_message_pane

0x717d,	// (0x00039dc3) call2_cli_visual_pane_t1_ParamLimits

0x717d,	// (0x00039dc3) call2_cli_visual_pane_t1

0x7764,	// (0x0003a3aa) postcard_message_pane_t1_ParamLimits

0x7764,	// (0x0003a3aa) postcard_message_pane_t1

0x774d,	// (0x0003a393) postcard_address_pane_t1_ParamLimits

0x774d,	// (0x0003a393) postcard_address_pane_t1

0x773e,	// (0x0003a384) popup_call3_audio_in_window_ParamLimits

0x773e,	// (0x0003a384) popup_call3_audio_in_window

0x7626,	// (0x0003a26c) bg_popup_call3_in_pane_ParamLimits

0x7626,	// (0x0003a26c) bg_popup_call3_in_pane

0x7684,	// (0x0003a2ca) popup_call3_audio_in_window_g1_ParamLimits

0x7684,	// (0x0003a2ca) popup_call3_audio_in_window_g1

0x769c,	// (0x0003a2e2) popup_call3_audio_in_window_g2_ParamLimits

0x769c,	// (0x0003a2e2) popup_call3_audio_in_window_g2

0x76b4,	// (0x0003a2fa) popup_call3_audio_in_window_g3_ParamLimits

0x76b4,	// (0x0003a2fa) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0004227c) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0004227c) popup_call3_audio_in_window_g

0x76dc,	// (0x0003a322) popup_call3_audio_in_window_t1_ParamLimits

0x76dc,	// (0x0003a322) popup_call3_audio_in_window_t1

0x7704,	// (0x0003a34a) popup_call3_audio_in_window_t2_ParamLimits

0x7704,	// (0x0003a34a) popup_call3_audio_in_window_t2

0x772c,	// (0x0003a372) popup_call3_audio_in_window_t3_ParamLimits

0x772c,	// (0x0003a372) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00042285) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00042285) popup_call3_audio_in_window_t

0xcfe0,	// (0x0003fc26) bg_popup_call3_rect_pane

0xe23a,	// (0x00040e80) bg_popup_call3_rect_pane_g1

0xc64b,	// (0x0003f291) bg_popup_call3_rect_pane_g2

0xe242,	// (0x00040e88) bg_popup_call3_rect_pane_g3

0xe24a,	// (0x00040e90) bg_popup_call3_rect_pane_g4

0xe252,	// (0x00040e98) bg_popup_call3_rect_pane_g5

0xe25a,	// (0x00040ea0) bg_popup_call3_rect_pane_g6

0xe262,	// (0x00040ea8) bg_popup_call3_rect_pane_g7

0x69f0,	// (0x00039636) mup_visualizer_osc_pane

0xd09f,	// (0x0003fce5) mup_visualizer_spec_pane

0x7646,	// (0x0003a28c) call3_video_qcif_pane_ParamLimits

0x7646,	// (0x0003a28c) call3_video_qcif_pane

0x7656,	// (0x0003a29c) call3_video_qcif_uncrop_pane_ParamLimits

0x7656,	// (0x0003a29c) call3_video_qcif_uncrop_pane

0x7662,	// (0x0003a2a8) call3_video_subqcif_pane_ParamLimits

0x7662,	// (0x0003a2a8) call3_video_subqcif_pane

0x7674,	// (0x0003a2ba) call3_video_subqcif_uncrop_pane_ParamLimits

0x7674,	// (0x0003a2ba) call3_video_subqcif_uncrop_pane

0x76cc,	// (0x0003a312) popup_call3_audio_in_window_g4_ParamLimits

0x76cc,	// (0x0003a312) popup_call3_audio_in_window_g4

0x75f3,	// (0x0003a239) mup_spec_half_pane

0x75fc,	// (0x0003a242) mup_spec_half_pane_cp

0xe4da,	// (0x00041120) mup_osc_middle_pane

0xe4e3,	// (0x00041129) mup_visualizer_osc_pane_g1

0x75d4,	// (0x0003a21a) mup_spec_bar_pane_ParamLimits

0x75d4,	// (0x0003a21a) mup_spec_bar_pane

0xe4c7,	// (0x0004110d) mup_spec_bar_pane_g1

0xe4d1,	// (0x00041117) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00042270) mup_spec_bar_pane_g

0x4c11,	// (0x00037857) aid_cale_week_size_cell_pane_ParamLimits

0x4c24,	// (0x0003786a) bg_cale_heading_pane_ParamLimits

0xc67f,	// (0x0003f2c5) bg_cale_pane_cp01_ParamLimits

0x4c40,	// (0x00037886) cale_week_corner_pane_ParamLimits

0x4c51,	// (0x00037897) cale_week_day_heading_pane_ParamLimits

0x4c6d,	// (0x000378b3) cale_week_scroll_pane_g1_ParamLimits

0x4c86,	// (0x000378cc) cale_week_scroll_pane_g2_ParamLimits

0x4c97,	// (0x000378dd) cale_week_scroll_pane_g3_ParamLimits

0x4ca8,	// (0x000378ee) cale_week_scroll_pane_g4_ParamLimits

0x4cb9,	// (0x000378ff) cale_week_scroll_pane_g5_ParamLimits

0x4cca,	// (0x00037910) cale_week_scroll_pane_g6_ParamLimits

0x4cdb,	// (0x00037921) cale_week_scroll_pane_g7_ParamLimits

0x4cee,	// (0x00037934) cale_week_scroll_pane_g8_ParamLimits

0x4d01,	// (0x00037947) cale_week_scroll_pane_g9_ParamLimits

0x4d12,	// (0x00037958) cale_week_scroll_pane_g10_ParamLimits

0x4d23,	// (0x00037969) cale_week_scroll_pane_g11_ParamLimits

0x4d34,	// (0x0003797a) cale_week_scroll_pane_g12_ParamLimits

0x4d4d,	// (0x00037993) cale_week_scroll_pane_g13_ParamLimits

0x4d66,	// (0x000379ac) cale_week_scroll_pane_g14_ParamLimits

0x4d7f,	// (0x000379c5) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00041e18) cale_week_scroll_pane_g_ParamLimits

0x4d98,	// (0x000379de) cale_week_time_pane_ParamLimits

0x4dab,	// (0x000379f1) grid_cale_week_pane_ParamLimits

0xc698,	// (0x0003f2de) listscroll_cale_week_pane_t1

0x4dc8,	// (0x00037a0e) scroll_pane_cp08_ParamLimits

0x594b,	// (0x00038591) cale_month_corner_pane_ParamLimits

0xca37,	// (0x0003f67d) cale_month_pane_t1

0x5cc1,	// (0x00038907) cale_month_week_pane_ParamLimits

0xccec,	// (0x0003f932) popup_call_status_window_g1_ParamLimits

0x63d0,	// (0x00039016) popup_call_status_window_g2_ParamLimits

0x63dc,	// (0x00039022) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00041fc0) popup_call_status_window_g_ParamLimits

0xcd53,	// (0x0003f999) aid_call2_pane

0x3446,	// (0x0003608c) msg_header_pane_g1

0x6d69,	// (0x000399af) postcard_address2_pane_ParamLimits

0x6d69,	// (0x000399af) postcard_address2_pane

0x6d75,	// (0x000399bb) postcard_message2_pane_ParamLimits

0x6d75,	// (0x000399bb) postcard_message2_pane

0x7562,	// (0x0003a1a8) message2_row_pane_ParamLimits

0x7562,	// (0x0003a1a8) message2_row_pane

0x757f,	// (0x0003a1c5) address2_row_pane_ParamLimits

0x757f,	// (0x0003a1c5) address2_row_pane

0xe495,	// (0x000410db) postcard_message2_row_pane_g1

0xe49d,	// (0x000410e3) postcard_message2_row_pane_t1

0xe495,	// (0x000410db) address2_row_pane_g1

0xe49d,	// (0x000410e3) address2_row_pane_t1

0x4fe4,	// (0x00037c2a) aid_size_cell_vorec

0xc1ee,	// (0x0003ee34) main_rss_pane

0x7592,	// (0x0003a1d8) rss_list_single_pane_ParamLimits

0x7592,	// (0x0003a1d8) rss_list_single_pane

0xe4ab,	// (0x000410f1) rss_list_single_pane_t1

0xe4b9,	// (0x000410ff) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0004226b) rss_list_single_pane_t

0xc1ee,	// (0x0003ee34) main_camera2_pane

0xc1ee,	// (0x0003ee34) main_video2_pane

0x77c8,	// (0x0003a40e) cams_zoom_pane_cp2_ParamLimits

0x77c8,	// (0x0003a40e) cams_zoom_pane_cp2

0x77d4,	// (0x0003a41a) image2_vga_pane_ParamLimits

0x77d4,	// (0x0003a41a) image2_vga_pane

0x77e3,	// (0x0003a429) main_camera2_pane_g1_ParamLimits

0x77e3,	// (0x0003a429) main_camera2_pane_g1

0x77ef,	// (0x0003a435) main_camera2_pane_g2_ParamLimits

0x77ef,	// (0x0003a435) main_camera2_pane_g2

0x77fb,	// (0x0003a441) main_camera2_pane_g3_ParamLimits

0x77fb,	// (0x0003a441) main_camera2_pane_g3

0x7807,	// (0x0003a44d) main_camera2_pane_g4_ParamLimits

0x7807,	// (0x0003a44d) main_camera2_pane_g4

0x7813,	// (0x0003a459) main_camera2_pane_g5_ParamLimits

0x7813,	// (0x0003a459) main_camera2_pane_g5

0x781f,	// (0x0003a465) main_camera2_pane_g6_ParamLimits

0x781f,	// (0x0003a465) main_camera2_pane_g6

0x782b,	// (0x0003a471) main_camera2_pane_g7_ParamLimits

0x782b,	// (0x0003a471) main_camera2_pane_g7

0x7837,	// (0x0003a47d) main_camera2_pane_g8_ParamLimits

0x7837,	// (0x0003a47d) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0004228c) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0004228c) main_camera2_pane_g

0x784f,	// (0x0003a495) main_camera2_pane_t1_ParamLimits

0x784f,	// (0x0003a495) main_camera2_pane_t1

0x7861,	// (0x0003a4a7) main_camera2_pane_t2_ParamLimits

0x7861,	// (0x0003a4a7) main_camera2_pane_t2

0x7873,	// (0x0003a4b9) main_camera2_pane_t3_ParamLimits

0x7873,	// (0x0003a4b9) main_camera2_pane_t3

0x7885,	// (0x0003a4cb) main_camera2_pane_t4_ParamLimits

0x7885,	// (0x0003a4cb) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0004229f) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0004229f) main_camera2_pane_t

0x78e7,	// (0x0003a52d) cams_zoom_pane_cp4_ParamLimits

0x78e7,	// (0x0003a52d) cams_zoom_pane_cp4

0x78f7,	// (0x0003a53d) image2_cif_pane_ParamLimits

0x78f7,	// (0x0003a53d) image2_cif_pane

0x790c,	// (0x0003a552) image2_subqcif_pane_ParamLimits

0x790c,	// (0x0003a552) image2_subqcif_pane

0x791b,	// (0x0003a561) main_video2_pane_g1_ParamLimits

0x791b,	// (0x0003a561) main_video2_pane_g1

0x792d,	// (0x0003a573) main_video2_pane_g2_ParamLimits

0x792d,	// (0x0003a573) main_video2_pane_g2

0x793d,	// (0x0003a583) main_video2_pane_g3_ParamLimits

0x793d,	// (0x0003a583) main_video2_pane_g3

0x794d,	// (0x0003a593) main_video2_pane_g4_ParamLimits

0x794d,	// (0x0003a593) main_video2_pane_g4

0x795d,	// (0x0003a5a3) main_video2_pane_g5_ParamLimits

0x795d,	// (0x0003a5a3) main_video2_pane_g5

0x796d,	// (0x0003a5b3) main_video2_pane_g6_ParamLimits

0x796d,	// (0x0003a5b3) main_video2_pane_g6

0x0005,

0xf668,	// (0x000422ae) main_video2_pane_g_ParamLimits

0xf668,	// (0x000422ae) main_video2_pane_g

0x797f,	// (0x0003a5c5) main_video2_pane_t1_ParamLimits

0x797f,	// (0x0003a5c5) main_video2_pane_t1

0x7999,	// (0x0003a5df) main_video2_pane_t2_ParamLimits

0x7999,	// (0x0003a5df) main_video2_pane_t2

0x79bf,	// (0x0003a605) main_video2_pane_t3_ParamLimits

0x79bf,	// (0x0003a605) main_video2_pane_t3

0x0002,

0xf675,	// (0x000422bb) main_video2_pane_t_ParamLimits

0xf675,	// (0x000422bb) main_video2_pane_t

0x72d2,	// (0x00039f18) call_muted_g2

0x0001,

0xf617,	// (0x0004225d) call_muted_g

0xc1ee,	// (0x0003ee34) main_mup2_pane

0xe51a,	// (0x00041160) main_mup2_pane_g1_ParamLimits

0xe51a,	// (0x00041160) main_mup2_pane_g1

0x79e5,	// (0x0003a62b) main_mup2_pane_g2_ParamLimits

0x79e5,	// (0x0003a62b) main_mup2_pane_g2

0x7c67,	// (0x0003a8ad) main_mup_pane_g13_cp1

0x7c6f,	// (0x0003a8b5) mup_volume_pane_cp1

0x7a05,	// (0x0003a64b) main_mup2_pane_g4_ParamLimits

0x7a05,	// (0x0003a64b) main_mup2_pane_g4

0x7a1a,	// (0x0003a660) main_mup2_pane_g5_ParamLimits

0x7a1a,	// (0x0003a660) main_mup2_pane_g5

0x7a2f,	// (0x0003a675) main_mup2_pane_g6_ParamLimits

0x7a2f,	// (0x0003a675) main_mup2_pane_g6

0x7a44,	// (0x0003a68a) main_mup2_pane_g7_ParamLimits

0x7a44,	// (0x0003a68a) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x000422c2) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x000422c2) main_mup2_pane_g

0x7a60,	// (0x0003a6a6) main_mup2_pane_t1_ParamLimits

0x7a60,	// (0x0003a6a6) main_mup2_pane_t1

0x7a77,	// (0x0003a6bd) main_mup2_pane_t2_ParamLimits

0x7a77,	// (0x0003a6bd) main_mup2_pane_t2

0x7a8e,	// (0x0003a6d4) main_mup2_pane_t3_ParamLimits

0x7a8e,	// (0x0003a6d4) main_mup2_pane_t3

0x7aa5,	// (0x0003a6eb) main_mup2_pane_t4_ParamLimits

0x7aa5,	// (0x0003a6eb) main_mup2_pane_t4

0x7abf,	// (0x0003a705) main_mup2_pane_t5_ParamLimits

0x7abf,	// (0x0003a705) main_mup2_pane_t5

0x7ad9,	// (0x0003a71f) main_mup2_pane_t6_ParamLimits

0x7ad9,	// (0x0003a71f) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x000422d1) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x000422d1) main_mup2_pane_t

0x7b11,	// (0x0003a757) mup2_visualizer_pane_ParamLimits

0x7b11,	// (0x0003a757) mup2_visualizer_pane

0x7b47,	// (0x0003a78d) mup_progress_pane_cp_ParamLimits

0x7b47,	// (0x0003a78d) mup_progress_pane_cp

0x7c52,	// (0x0003a898) mup_volume_pane_cp_ParamLimits

0x7c52,	// (0x0003a898) mup_volume_pane_cp

0x7b5e,	// (0x0003a7a4) mup2_visualizer_pane_g1_ParamLimits

0x7b5e,	// (0x0003a7a4) mup2_visualizer_pane_g1

0xe526,	// (0x0004116c) mup2_visualizer_pane_g2_ParamLimits

0xe526,	// (0x0004116c) mup2_visualizer_pane_g2

0x7b73,	// (0x0003a7b9) mup2_visualizer_pane_g3_ParamLimits

0x7b73,	// (0x0003a7b9) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x000422de) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x000422de) mup2_visualizer_pane_g

0xd2c6,	// (0x0003ff0c) aid_size_cell_fmradio

0x73e8,	// (0x0003a02e) aid_height_parent_landcape

0xc89f,	// (0x0003f4e5) wml_content_pane_cp

0xc8a7,	// (0x0003f4ed) wml_tabs_pane

0xc8b0,	// (0x0003f4f6) popup_wml_miniature_window

0xc8b8,	// (0x0003f4fe) scroll_pane_cp021

0xc8cc,	// (0x0003f512) wml_content_pane_comp8

0xc1ee,	// (0x0003ee34) bg_popup_sub_pane_cp05

0xe544,	// (0x0004118a) popup_wml_miniature_window_g1

0xe54c,	// (0x00041192) wml_miniature_view_pane

0x7b81,	// (0x0003a7c7) aid_size_wml_view

0x7b89,	// (0x0003a7cf) wml_miniature_view_pane_g1

0x7b92,	// (0x0003a7d8) wml_miniature_view_pane_g2

0x7b9b,	// (0x0003a7e1) wml_miniature_view_pane_g3

0x7ba3,	// (0x0003a7e9) wml_miniature_view_pane_g4

0x7bab,	// (0x0003a7f1) wml_miniature_view_pane_g5

0x7bb3,	// (0x0003a7f9) wml_miniature_view_pane_g6

0x7bbb,	// (0x0003a801) wml_miniature_view_pane_g7

0x7bc3,	// (0x0003a809) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x000422e5) wml_miniature_view_pane_g

0xe51a,	// (0x00041160) background_graphic_ParamLimits

0xe51a,	// (0x00041160) background_graphic

0xe554,	// (0x0004119a) wml_tabs_2_pane

0xe55d,	// (0x000411a3) wml_tabs_3_pane_ParamLimits

0xe55d,	// (0x000411a3) wml_tabs_3_pane

0xe56f,	// (0x000411b5) wml_tabs_4_pane_ParamLimits

0xe56f,	// (0x000411b5) wml_tabs_4_pane

0xe585,	// (0x000411cb) wml_tabs_5_pane_ParamLimits

0xe585,	// (0x000411cb) wml_tabs_5_pane

0xe59f,	// (0x000411e5) wml_tabs_pane_g2_ParamLimits

0xe59f,	// (0x000411e5) wml_tabs_pane_g2

0xe5b3,	// (0x000411f9) wml_tabs_pane_g3_ParamLimits

0xe5b3,	// (0x000411f9) wml_tabs_pane_g3

0x7bcb,	// (0x0003a811) wml_tabs_2_active_pane_ParamLimits

0x7bcb,	// (0x0003a811) wml_tabs_2_active_pane

0x7bdb,	// (0x0003a821) wml_tabs_2_passive_pane_ParamLimits

0x7bdb,	// (0x0003a821) wml_tabs_2_passive_pane

0x7beb,	// (0x0003a831) wml_tabs_3_active_pane_cp_ParamLimits

0x7beb,	// (0x0003a831) wml_tabs_3_active_pane_cp

0x7bfc,	// (0x0003a842) wml_tabs_3_passive_pane_ParamLimits

0x7bfc,	// (0x0003a842) wml_tabs_3_passive_pane

0x7c0d,	// (0x0003a853) wml_tabs_3_passive_pane_cp_ParamLimits

0x7c0d,	// (0x0003a853) wml_tabs_3_passive_pane_cp

0x7c1e,	// (0x0003a864) tabs_4_active_pane

0x7c26,	// (0x0003a86c) tabs_4_passive_pane

0x7c2e,	// (0x0003a874) tabs_4_passive_pane_cp

0x7c36,	// (0x0003a87c) tabs_4_passive_pane_cp2

0xe2c2,	// (0x00040f08) aid_height_text

0x69b9,	// (0x000395ff) mup_volume_cont_pane_ParamLimits

0x69b9,	// (0x000395ff) mup_volume_cont_pane

0x477e,	// (0x000373c4) aid_size_cell_pinb

0xc479,	// (0x0003f0bf) aid_size_list_pinb

0x7b30,	// (0x0003a776) mup2_volume_cont_pane_ParamLimits

0x7b30,	// (0x0003a776) mup2_volume_cont_pane

0x7c3e,	// (0x0003a884) mup2_volume_cont_pane_g1_ParamLimits

0x7c3e,	// (0x0003a884) mup2_volume_cont_pane_g1

0x43dd,	// (0x00037023) aid_size_cell_touch_ParamLimits

0x43dd,	// (0x00037023) aid_size_cell_touch

0x465e,	// (0x000372a4) touch_pane_ParamLimits

0x465e,	// (0x000372a4) touch_pane

0x43bf,	// (0x00037005) main_rss2_pane

0xe5d0,	// (0x00041216) listscroll_rss2_pane

0xe5d9,	// (0x0004121f) rss2_navigation_pane

0xe5e1,	// (0x00041227) list_rss2_pane

0xce93,	// (0x0003fad9) scroll_pane_cp22

0xe5e9,	// (0x0004122f) rss2_navigation_pane_g1

0xe5f2,	// (0x00041238) rss2_navigation_pane_g2

0xe5fa,	// (0x00041240) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x000422f6) rss2_navigation_pane_g

0xe602,	// (0x00041248) rss2_navigation_pane_t1

0x7c77,	// (0x0003a8bd) rss2_list_single_pane_ParamLimits

0x7c77,	// (0x0003a8bd) rss2_list_single_pane

0xe610,	// (0x00041256) rss2_list_single_pane_t2

0xe61e,	// (0x00041264) rss2_list_single_pane_t3_ParamLimits

0xe61e,	// (0x00041264) rss2_list_single_pane_t3

0xe63b,	// (0x00041281) rss2_list_single_pane_t4

0x6181,	// (0x00038dc7) smil_status_pane_g1

0xd8c7,	// (0x0004050d) main_image2_pane_ParamLimits

0xd8c7,	// (0x0004050d) main_image2_pane

0x7843,	// (0x0003a489) main_camera2_pane_g9_ParamLimits

0x7843,	// (0x0003a489) main_camera2_pane_g9

0x7897,	// (0x0003a4dd) main_camera2_pane_t5_ParamLimits

0x7897,	// (0x0003a4dd) main_camera2_pane_t5

0x78a9,	// (0x0003a4ef) main_camera2_pane_t6_ParamLimits

0x78a9,	// (0x0003a4ef) main_camera2_pane_t6

0x7cb3,	// (0x0003a8f9) main_image2_pane_g1_ParamLimits

0x7cb3,	// (0x0003a8f9) main_image2_pane_g1

0x6f4a,	// (0x00039b90) smil2_video_pane_ParamLimits

0x6f4a,	// (0x00039b90) smil2_video_pane

0x31d2,	// (0x00035e18) aid_zoom_text_primary_cp

0xbdd3,	// (0x0003ea19) popup_preview_fixed_window

0xc808,	// (0x0003f44e) im_reading_pane_g1

0x778d,	// (0x0003a3d3) cams2_bc_adjust_pane_cp_ParamLimits

0x778d,	// (0x0003a3d3) cams2_bc_adjust_pane_cp

0x78d9,	// (0x0003a51f) cams2_bc_adjust_pane_ParamLimits

0x78d9,	// (0x0003a51f) cams2_bc_adjust_pane

0x7cbf,	// (0x0003a905) cams2_bc_adjust_pane_g1

0x7cc7,	// (0x0003a90d) cams2_slider_pane

0x7cd0,	// (0x0003a916) cams2_slider_pane_g1

0x7cd9,	// (0x0003a91f) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x000422fd) cams2_slider_pane_g

0x4854,	// (0x0003749a) calc_display_pane_ParamLimits

0x4872,	// (0x000374b8) calc_paper_pane_ParamLimits

0x488e,	// (0x000374d4) grid_calc_pane_ParamLimits

0x643a,	// (0x00039080) popup_clock_digital_window_t1_ParamLimits

0xd263,	// (0x0003fea9) main_image_pane_t1

0x483a,	// (0x00037480) aid_size_cell_calc_ParamLimits

0x483a,	// (0x00037480) aid_size_cell_calc

0x741a,	// (0x0003a060) popup_blid_sat_info2_window_ParamLimits

0x741a,	// (0x0003a060) popup_blid_sat_info2_window

0xe651,	// (0x00041297) aid_size_cell_blid

0xe659,	// (0x0004129f) bg_popup_window_pane_cp07

0xe67c,	// (0x000412c2) grid_popup_blid_pane

0xe686,	// (0x000412cc) heading_pane_cp05_ParamLimits

0xe686,	// (0x000412cc) heading_pane_cp05

0xe758,	// (0x0004139e) cell_popup_blid_pane_ParamLimits

0xe758,	// (0x0004139e) cell_popup_blid_pane

0xe77e,	// (0x000413c4) cell_popup_blid_pane_g1

0xe786,	// (0x000413cc) cell_popup_blid_pane_t1

0x7af6,	// (0x0003a73c) mup2_indicator_pane_ParamLimits

0x7af6,	// (0x0003a73c) mup2_indicator_pane

0xcfe0,	// (0x0003fc26) mup2_visualizer_osc_pane

0xe532,	// (0x00041178) mup2_visualizer_spec_pane_ParamLimits

0xe532,	// (0x00041178) mup2_visualizer_spec_pane

0x7cf3,	// (0x0003a939) mup2_spec_half_pane

0x7cfc,	// (0x0003a942) mup2_spec_half_pane_cp

0x7d06,	// (0x0003a94c) mup2_spec_bar_pane_ParamLimits

0x7d06,	// (0x0003a94c) mup2_spec_bar_pane

0xe4c7,	// (0x0004110d) mup2_spec_bar_pane_g1

0xe4d1,	// (0x00041117) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00042270) mup2_spec_bar_pane_g

0x7d25,	// (0x0003a96b) mup2_osc_middle_pane

0xe4e3,	// (0x00041129) mup2_visualizer_osc_pane_g1

0xbdfd,	// (0x0003ea43) popup_number_entry_window_t1_ParamLimits

0xbe10,	// (0x0003ea56) popup_number_entry_window_t2_ParamLimits

0xbe22,	// (0x0003ea68) popup_number_entry_window_t3_ParamLimits

0x46b5,	// (0x000372fb) popup_number_entry_window_t5_ParamLimits

0x46b5,	// (0x000372fb) popup_number_entry_window_t5

0xf0ec,	// (0x00041d32) popup_number_entry_window_t_ParamLimits

0xbe34,	// (0x0003ea7a) text_title_cp2_ParamLimits

0x6c31,	// (0x00039877) aid_hotspot_pointer_text2_pane

0x6ccb,	// (0x00039911) main_viewer_pane_g9_ParamLimits

0x6ccb,	// (0x00039911) main_viewer_pane_g9

0xca37,	// (0x0003f67d) cale_month_pane_t1_ParamLimits

0xca74,	// (0x0003f6ba) bg_cale_pane_ParamLimits

0xca8c,	// (0x0003f6d2) list_cale_pane_ParamLimits

0xc698,	// (0x0003f2de) listscroll_cale_day_pane_t1

0xca9d,	// (0x0003f6e3) scroll_pane_cp09_ParamLimits

0x69f8,	// (0x0003963e) main_mup_eq_pane_t1_ParamLimits

0x69f8,	// (0x0003963e) main_mup_eq_pane_t1

0x6a12,	// (0x00039658) main_mup_eq_pane_t2_ParamLimits

0x6a12,	// (0x00039658) main_mup_eq_pane_t2

0x6a2a,	// (0x00039670) main_mup_eq_pane_t3_ParamLimits

0x6a2a,	// (0x00039670) main_mup_eq_pane_t3

0x6a42,	// (0x00039688) main_mup_eq_pane_t4_ParamLimits

0x6a42,	// (0x00039688) main_mup_eq_pane_t4

0x6a5a,	// (0x000396a0) main_mup_eq_pane_t5_ParamLimits

0x6a5a,	// (0x000396a0) main_mup_eq_pane_t5

0x6a72,	// (0x000396b8) main_mup_eq_pane_t6_ParamLimits

0x6a72,	// (0x000396b8) main_mup_eq_pane_t6

0x6a86,	// (0x000396cc) main_mup_eq_pane_t7_ParamLimits

0x6a86,	// (0x000396cc) main_mup_eq_pane_t7

0x6a9a,	// (0x000396e0) main_mup_eq_pane_t8_ParamLimits

0x6a9a,	// (0x000396e0) main_mup_eq_pane_t8

0x6ab0,	// (0x000396f6) main_mup_eq_pane_t9_ParamLimits

0x6ab0,	// (0x000396f6) main_mup_eq_pane_t9

0x6ac8,	// (0x0003970e) main_mup_eq_pane_t10_ParamLimits

0x6ac8,	// (0x0003970e) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x000420bf) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x000420bf) main_mup_eq_pane_t

0x6b85,	// (0x000397cb) mup_equalizer_pane_cp5_ParamLimits

0x6b9b,	// (0x000397e1) mup_equalizer_pane_cp6_ParamLimits

0x6bb3,	// (0x000397f9) mup_equalizer_pane_cp7_ParamLimits

0x43bf,	// (0x00037005) main_gallery_pane

0xe4ec,	// (0x00041132) smil2_volume_pane

0xe4f4,	// (0x0004113a) smil_status_volume_pane_g1_ParamLimits

0xe507,	// (0x0004114d) smil_status_volume_pane_g2_ParamLimits

0x7604,	// (0x0003a24a) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00042275) smil_status_volume_pane_g_ParamLimits

0xe659,	// (0x0004129f) bg_popup_window_pane_cp07_ParamLimits

0xe667,	// (0x000412ad) blid_firmament_pane

0x7d2e,	// (0x0003a974) aid_size_cell_gallery_ParamLimits

0x7d2e,	// (0x0003a974) aid_size_cell_gallery

0x7d3c,	// (0x0003a982) grid_gallery_pane_ParamLimits

0x7d3c,	// (0x0003a982) grid_gallery_pane

0x7d4c,	// (0x0003a992) cell_gallery_pane_ParamLimits

0x7d4c,	// (0x0003a992) cell_gallery_pane

0xe794,	// (0x000413da) bg_cell_gallery_focus_pane_ParamLimits

0xe794,	// (0x000413da) bg_cell_gallery_focus_pane

0xe7a6,	// (0x000413ec) cell_gallery_pane_g1_ParamLimits

0xe7a6,	// (0x000413ec) cell_gallery_pane_g1

0x7d9a,	// (0x0003a9e0) cell_gallery_pane_g2_ParamLimits

0x7d9a,	// (0x0003a9e0) cell_gallery_pane_g2

0x7da7,	// (0x0003a9ed) cell_gallery_pane_g3_ParamLimits

0x7da7,	// (0x0003a9ed) cell_gallery_pane_g3

0xe7b2,	// (0x000413f8) cell_gallery_pane_g4_ParamLimits

0xe7b2,	// (0x000413f8) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00042323) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00042323) cell_gallery_pane_g

0xe7be,	// (0x00041404) bg_cell_gallery_focus_pane_g1

0xe7c6,	// (0x0004140c) bg_cell_gallery_focus_pane_g2

0xe7ce,	// (0x00041414) bg_cell_gallery_focus_pane_g3

0xe7d6,	// (0x0004141c) bg_cell_gallery_focus_pane_g4

0xe7de,	// (0x00041424) bg_cell_gallery_focus_pane_g5

0xe7e6,	// (0x0004142c) bg_cell_gallery_focus_pane_g6

0xe7ee,	// (0x00041434) bg_cell_gallery_focus_pane_g7

0xe7f6,	// (0x0004143c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0004232c) bg_cell_gallery_focus_pane_g

0xe7fe,	// (0x00041444) aid_firma_cardinal

0xe812,	// (0x00041458) blid_firmament_pane_t1

0xe829,	// (0x0004146f) blid_firmament_pane_t2

0xe840,	// (0x00041486) blid_firmament_pane_t3

0xe857,	// (0x0004149d) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0004233d) blid_firmament_pane_t

0xe86e,	// (0x000414b4) blid_sat_info_pane

0xe87e,	// (0x000414c4) blid_sat_info_pane_g1

0xe87e,	// (0x000414c4) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00042346) blid_sat_info_pane_g

0xe888,	// (0x000414ce) blid_sat_info_pane_t1

0xe896,	// (0x000414dc) smil2_volume_content_pane

0xe89f,	// (0x000414e5) smil2_volume_pane_g1

0xe8a7,	// (0x000414ed) smil2_volume_content_pane_g1

0xe8b0,	// (0x000414f6) smil2_volume_content_pane_g2

0xe8b9,	// (0x000414ff) smil2_volume_content_pane_g3

0xe8c2,	// (0x00041508) smil2_volume_content_pane_g4

0xe8cb,	// (0x00041511) smil2_volume_content_pane_g5

0xe8d4,	// (0x0004151a) smil2_volume_content_pane_g6

0xe8dd,	// (0x00041523) smil2_volume_content_pane_g7

0xe8e6,	// (0x0004152c) smil2_volume_content_pane_g8

0xe8ef,	// (0x00041535) smil2_volume_content_pane_g9

0xe8f8,	// (0x0004153e) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0004234b) smil2_volume_content_pane_g

0x4e32,	// (0x00037a78) cale_week_day_heading_pane_t1_ParamLimits

0x4e46,	// (0x00037a8c) cale_week_day_heading_pane_t2_ParamLimits

0x4e5a,	// (0x00037aa0) cale_week_day_heading_pane_t3_ParamLimits

0x4e6e,	// (0x00037ab4) cale_week_day_heading_pane_t4_ParamLimits

0x4e82,	// (0x00037ac8) cale_week_day_heading_pane_t5_ParamLimits

0x4e96,	// (0x00037adc) cale_week_day_heading_pane_t6_ParamLimits

0x4eaa,	// (0x00037af0) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00041e37) cale_week_day_heading_pane_t_ParamLimits

0xc6aa,	// (0x0003f2f0) bg_cale_side_pane_ParamLimits

0x4ebe,	// (0x00037b04) cale_week_time_pane_t1_ParamLimits

0x4ed6,	// (0x00037b1c) cale_week_time_pane_t2_ParamLimits

0x4eee,	// (0x00037b34) cale_week_time_pane_t3_ParamLimits

0x4f06,	// (0x00037b4c) cale_week_time_pane_t4_ParamLimits

0x4f1e,	// (0x00037b64) cale_week_time_pane_t5_ParamLimits

0x4f36,	// (0x00037b7c) cale_week_time_pane_t6_ParamLimits

0x4f56,	// (0x00037b9c) cale_week_time_pane_t7_ParamLimits

0x4f76,	// (0x00037bbc) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00041e46) cale_week_time_pane_t_ParamLimits

0x4f96,	// (0x00037bdc) cell_cale_week_pane_g2_ParamLimits

0xc6aa,	// (0x0003f2f0) bg_cale_side_pane_cp01_ParamLimits

0x5fe6,	// (0x00038c2c) cale_month_week_pane_t1_ParamLimits

0x5ffd,	// (0x00038c43) cale_month_week_pane_t2_ParamLimits

0x6014,	// (0x00038c5a) cale_month_week_pane_t3_ParamLimits

0x602b,	// (0x00038c71) cale_month_week_pane_t4_ParamLimits

0x6042,	// (0x00038c88) cale_month_week_pane_t5_ParamLimits

0x6061,	// (0x00038ca7) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00041f1f) cale_month_week_pane_t_ParamLimits

0x614e,	// (0x00038d94) cell_cale_month_pane_g1_ParamLimits

0x43bf,	// (0x00037005) main_cale_event_viewer_pane

0x43bf,	// (0x00037005) listscroll_cale_event_viewer_pane

0xe901,	// (0x00041547) list_cale_ev_pane

0xe909,	// (0x0004154f) scroll_pane_cp023

0xe915,	// (0x0004155b) field_cale_ev_pane_ParamLimits

0xe915,	// (0x0004155b) field_cale_ev_pane

0xe92f,	// (0x00041575) field_cale_ev_content_pane_ParamLimits

0xe92f,	// (0x00041575) field_cale_ev_content_pane

0xe93b,	// (0x00041581) field_cale_ev_pane_g1_ParamLimits

0xe93b,	// (0x00041581) field_cale_ev_pane_g1

0xe947,	// (0x0004158d) field_cale_ev_pane_g2_ParamLimits

0xe947,	// (0x0004158d) field_cale_ev_pane_g2

0xe95f,	// (0x000415a5) field_cale_ev_pane_g3_ParamLimits

0xe95f,	// (0x000415a5) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00042360) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00042360) field_cale_ev_pane_g

0xe977,	// (0x000415bd) field_cale_ev_pane_t1_ParamLimits

0xe977,	// (0x000415bd) field_cale_ev_pane_t1

0xe98e,	// (0x000415d4) field_cale_ev_content_pane_t1_ParamLimits

0xe98e,	// (0x000415d4) field_cale_ev_content_pane_t1

0xd149,	// (0x0003fd8f) bg_button_pane_cp01

0xc558,	// (0x0003f19e) listscroll_cale_week_pane_ParamLimits

0x4c07,	// (0x0003784d) popup_toolbar_window_cp01

0xc698,	// (0x0003f2de) listscroll_cale_week_pane_t1_ParamLimits

0xc558,	// (0x0003f19e) listscroll_cale_day_pane_ParamLimits

0x4c07,	// (0x0003784d) popup_toolbar_window_cp02

0xc698,	// (0x0003f2de) listscroll_cale_day_pane_t1_ParamLimits

0xc558,	// (0x0003f19e) main_cale_month_pane_ParamLimits

0x74de,	// (0x0003a124) popup_toolbar_window_cp03_ParamLimits

0x74de,	// (0x0003a124) popup_toolbar_window_cp03

0x6e5c,	// (0x00039aa2) main_image_pane_g2_ParamLimits

0x6e5c,	// (0x00039aa2) main_image_pane_g2

0x6e68,	// (0x00039aae) main_image_pane_g3_ParamLimits

0x6e68,	// (0x00039aae) main_image_pane_g3

0x0002,

0xf50b,	// (0x00042151) main_image_pane_g_ParamLimits

0xf50b,	// (0x00042151) main_image_pane_g

0xd263,	// (0x0003fea9) main_image_pane_t1_ParamLimits

0x6e74,	// (0x00039aba) main_image_pane_t2_ParamLimits

0x6e74,	// (0x00039aba) main_image_pane_t2

0x6e86,	// (0x00039acc) main_image_pane_t3_ParamLimits

0x6e86,	// (0x00039acc) main_image_pane_t3

0x6e98,	// (0x00039ade) main_image_pane_t4_ParamLimits

0x6e98,	// (0x00039ade) main_image_pane_t4

0x0003,

0xf512,	// (0x00042158) main_image_pane_t_ParamLimits

0xf512,	// (0x00042158) main_image_pane_t

0x6eaa,	// (0x00039af0) popup_image_details_window_cp01

0x6eb4,	// (0x00039afa) popup_toobar_trans_pane_cp01_ParamLimits

0x6eb4,	// (0x00039afa) popup_toobar_trans_pane_cp01

0x7463,	// (0x0003a0a9) popup_image_details_window_ParamLimits

0x7463,	// (0x0003a0a9) popup_image_details_window

0xe44d,	// (0x00041093) popup_image_focus_window

0x777f,	// (0x0003a3c5) camera2_autofocus_pane_ParamLimits

0x777f,	// (0x0003a3c5) camera2_autofocus_pane

0x43bf,	// (0x00037005) bg_popup_sub_pane_cp06

0xe9ab,	// (0x000415f1) popup_image_focus_window_g1

0xe9b3,	// (0x000415f9) popup_image_focus_window_g2

0xe9bb,	// (0x00041601) popup_image_focus_window_g3

0xe9c3,	// (0x00041609) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00042367) popup_image_focus_window_g

0xe9cb,	// (0x00041611) popup_image_focus_window_t1

0xe9d9,	// (0x0004161f) popup_image_focus_window_t2

0xe9e9,	// (0x0004162f) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00042370) popup_image_focus_window_t

0xe9f7,	// (0x0004163d) camera2_autofocus_pane_g1

0xd8c7,	// (0x0004050d) bg_tb_trans_pane_cp01

0xea05,	// (0x0004164b) popup_image_details_window_g1

0xea18,	// (0x0004165e) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00042382) popup_image_details_window_g

0xea41,	// (0x00041687) popup_image_details_window_t1

0xea53,	// (0x00041699) popup_image_details_window_t2

0xea6c,	// (0x000416b2) popup_image_details_window_t3

0xea80,	// (0x000416c6) popup_image_details_window_t4

0xea9b,	// (0x000416e1) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00042389) popup_image_details_window_t

0xc544,	// (0x0003f18a) bg_calc_paper_pane_ParamLimits

0x43bf,	// (0x00037005) grid_highlight_pane_cp013

0x4987,	// (0x000375cd) list_calc_pane_ParamLimits

0x4999,	// (0x000375df) scroll_pane_cp024

0xc558,	// (0x0003f19e) bg_calc_display_pane_ParamLimits

0x49a1,	// (0x000375e7) calc_display_pane_t1_ParamLimits

0x49b6,	// (0x000375fc) calc_display_pane_t2_ParamLimits

0x49cb,	// (0x00037611) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00041db9) calc_display_pane_t_ParamLimits

0x4ab2,	// (0x000376f8) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00041dd6) cell_calc_pane_g

0x4abb,	// (0x00037701) cell_calc_pane_t1

0xc5b7,	// (0x0003f1fd) grid_highlight_pane_cp02_ParamLimits

0xc5cd,	// (0x0003f213) toolbar_button_pane_cp01_ParamLimits

0xc5cd,	// (0x0003f213) toolbar_button_pane_cp01

0xd2a8,	// (0x0003feee) temp_image_control_pane_ParamLimits

0xd2a8,	// (0x0003feee) temp_image_control_pane

0xd8c7,	// (0x0004050d) main_mp3_pane

0xeab5,	// (0x000416fb) temp_image_control_pane_g1_ParamLimits

0xeab5,	// (0x000416fb) temp_image_control_pane_g1

0xeac3,	// (0x00041709) temp_image_control_pane_g2_ParamLimits

0xeac3,	// (0x00041709) temp_image_control_pane_g2

0xead5,	// (0x0004171b) temp_image_control_pane_g3_ParamLimits

0xead5,	// (0x0004171b) temp_image_control_pane_g3

0x7de4,	// (0x0003aa2a) temp_image_control_pane_g4_ParamLimits

0x7de4,	// (0x0003aa2a) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00042394) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00042394) temp_image_control_pane_g

0xeab5,	// (0x000416fb) main_mp3_pane_g1

0x7df5,	// (0x0003aa3b) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0004239d) main_mp3_pane_g

0xeb18,	// (0x0004175e) main_mp3_pane_t1

0xc719,	// (0x0003f35f) main_camera_pane_g8_ParamLimits

0xc719,	// (0x0003f35f) main_camera_pane_g8

0x521e,	// (0x00037e64) main_video_pane_g7_ParamLimits

0x521e,	// (0x00037e64) main_video_pane_g7

0x78c7,	// (0x0003a50d) main_camera2_pane_t7_ParamLimits

0x78c7,	// (0x0003a50d) main_camera2_pane_t7

0xc85f,	// (0x0003f4a5) scroll_pane_cp025_ParamLimits

0xc85f,	// (0x0003f4a5) scroll_pane_cp025

0xc873,	// (0x0003f4b9) scroll_pane_cp026_ParamLimits

0xc873,	// (0x0003f4b9) scroll_pane_cp026

0xc882,	// (0x0003f4c8) wml_content_pane_ParamLimits

0x43bf,	// (0x00037005) main_touch_calib_pane

0x7e99,	// (0x0003aadf) main_touch_calib_pane_g1

0x7ea5,	// (0x0003aaeb) main_touch_calib_pane_g2

0x7eb1,	// (0x0003aaf7) main_touch_calib_pane_g3

0x7ebd,	// (0x0003ab03) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x000423bb) main_touch_calib_pane_g

0x7ec9,	// (0x0003ab0f) main_touch_calib_pane_t1

0x7ee0,	// (0x0003ab26) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x000423c4) main_touch_calib_pane_t

0xcf21,	// (0x0003fb67) mup_progress_pane_cp02

0xcf40,	// (0x0003fb86) navi_pane_g1

0xcfa2,	// (0x0003fbe8) navi_pane_mp_t3

0xd8c7,	// (0x0004050d) main_mp3_pane_ParamLimits

0x751c,	// (0x0003a162) navi_pane_ParamLimits

0xeab5,	// (0x000416fb) main_mp3_pane_g1_ParamLimits

0x7df5,	// (0x0003aa3b) main_mp3_pane_g2_ParamLimits

0x7e01,	// (0x0003aa47) main_mp3_pane_g3_ParamLimits

0x7e01,	// (0x0003aa47) main_mp3_pane_g3

0x7e0d,	// (0x0003aa53) main_mp3_pane_g4_ParamLimits

0x7e0d,	// (0x0003aa53) main_mp3_pane_g4

0xeae5,	// (0x0004172b) main_mp3_pane_g5_ParamLimits

0xeae5,	// (0x0004172b) main_mp3_pane_g5

0xeaf3,	// (0x00041739) main_mp3_pane_g6_ParamLimits

0xeaf3,	// (0x00041739) main_mp3_pane_g6

0xeb00,	// (0x00041746) main_mp3_pane_g7_ParamLimits

0xeb00,	// (0x00041746) main_mp3_pane_g7

0xeb0c,	// (0x00041752) main_mp3_pane_g8_ParamLimits

0xeb0c,	// (0x00041752) main_mp3_pane_g8

0xf757,	// (0x0004239d) main_mp3_pane_g_ParamLimits

0x7e19,	// (0x0003aa5f) main_mp3_pane_t2

0x7e29,	// (0x0003aa6f) main_mp3_pane_t3

0xeb26,	// (0x0004176c) main_mp3_pane_t4

0xeb34,	// (0x0004177a) main_mp3_pane_t5

0x0005,

0xf768,	// (0x000423ae) main_mp3_pane_t

0xeb42,	// (0x00041788) mup_progress_pane_cp01

0x31d2,	// (0x00035e18) aid_zoom_text_secondary2

0xe901,	// (0x00041547) list_cale_ev2_pane

0xe909,	// (0x0004154f) scroll_pane_cp023_ParamLimits

0x7f33,	// (0x0003ab79) field_cale_ev2_pane_ParamLimits

0x7f33,	// (0x0003ab79) field_cale_ev2_pane

0x34cf,	// (0x00036115) field_cale_ev2_pane_g1_ParamLimits

0x34cf,	// (0x00036115) field_cale_ev2_pane_g1

0x34db,	// (0x00036121) field_cale_ev2_pane_g2_ParamLimits

0x34db,	// (0x00036121) field_cale_ev2_pane_g2

0x34f3,	// (0x00036139) field_cale_ev2_pane_g3_ParamLimits

0x34f3,	// (0x00036139) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x000423cf) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x000423cf) field_cale_ev2_pane_g

0x3517,	// (0x0003615d) field_cale_ev2_pane_t1_ParamLimits

0x3517,	// (0x0003615d) field_cale_ev2_pane_t1

0x352e,	// (0x00036174) field_cale_ev2_pane_t2_ParamLimits

0x352e,	// (0x00036174) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x000423d8) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x000423d8) field_cale_ev2_pane_t

0x6d33,	// (0x00039979) main_postcard_pane_g5_ParamLimits

0x6d33,	// (0x00039979) main_postcard_pane_g5

0x6d41,	// (0x00039987) main_postcard_pane_g6_ParamLimits

0x6d41,	// (0x00039987) main_postcard_pane_g6

0x505e,	// (0x00037ca4) camera2_autofocus_pane_cp_ParamLimits

0x505e,	// (0x00037ca4) camera2_autofocus_pane_cp

0xd8c7,	// (0x0004050d) main_mup3_pane

0x7f87,	// (0x0003abcd) main_mup3_pane_g1_ParamLimits

0x7f87,	// (0x0003abcd) main_mup3_pane_g1

0x7fa8,	// (0x0003abee) main_mup3_pane_g2_ParamLimits

0x7fa8,	// (0x0003abee) main_mup3_pane_g2

0x8023,	// (0x0003ac69) main_mup3_pane_g3_ParamLimits

0x8023,	// (0x0003ac69) main_mup3_pane_g3

0x8062,	// (0x0003aca8) main_mup3_pane_g4_ParamLimits

0x8062,	// (0x0003aca8) main_mup3_pane_g4

0x80a1,	// (0x0003ace7) main_mup3_pane_g5_ParamLimits

0x80a1,	// (0x0003ace7) main_mup3_pane_g5

0x80e2,	// (0x0003ad28) main_mup3_pane_g6_ParamLimits

0x80e2,	// (0x0003ad28) main_mup3_pane_g6

0xeb4a,	// (0x00041790) main_mup3_pane_g7_ParamLimits

0xeb4a,	// (0x00041790) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x000423e8) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x000423e8) main_mup3_pane_g

0x8154,	// (0x0003ad9a) main_mup3_pane_t1_ParamLimits

0x8154,	// (0x0003ad9a) main_mup3_pane_t1

0x81c3,	// (0x0003ae09) main_mup3_pane_t2_ParamLimits

0x81c3,	// (0x0003ae09) main_mup3_pane_t2

0x828c,	// (0x0003aed2) main_mup3_pane_t4_ParamLimits

0x828c,	// (0x0003aed2) main_mup3_pane_t4

0x82de,	// (0x0003af24) main_mup3_pane_t5_ParamLimits

0x82de,	// (0x0003af24) main_mup3_pane_t5

0x8386,	// (0x0003afcc) main_mup3_pane_t6_ParamLimits

0x8386,	// (0x0003afcc) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x000423f9) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x000423f9) main_mup3_pane_t

0x842e,	// (0x0003b074) mup3_progress_pane_ParamLimits

0x842e,	// (0x0003b074) mup3_progress_pane

0x8493,	// (0x0003b0d9) popup_mup3_control_window_ParamLimits

0x8493,	// (0x0003b0d9) popup_mup3_control_window

0xeb58,	// (0x0004179e) popup_mup3_text_window

0x84ac,	// (0x0003b0f2) mup3_progress_pane_t1

0x84c3,	// (0x0003b109) mup3_progress_pane_t2

0xeb60,	// (0x000417a6) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00042406) mup3_progress_pane_t

0xeb77,	// (0x000417bd) mup_progress_pane_cp03

0x43bf,	// (0x00037005) bg_tb_trans_pane_cp04

0x84da,	// (0x0003b120) mup3_volume_pane

0x84e2,	// (0x0003b128) popup_mup3_control_window_g1

0x84eb,	// (0x0003b131) mup3_volume_pane_g1

0x84f4,	// (0x0003b13a) mup3_volume_pane_g2

0x84fd,	// (0x0003b143) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0004240d) mup3_volume_pane_g

0x43bf,	// (0x00037005) bg_tb_trans_pane_cp03

0xeb87,	// (0x000417cd) popup_mup3_text_window_g1

0xeb8f,	// (0x000417d5) popup_mup3_text_window_t1

0xc5a0,	// (0x0003f1e6) list_calc_item_pane_g1_ParamLimits

0xe5c7,	// (0x0004120d) mup_volume_pane_cp_g1

0x7ef7,	// (0x0003ab3d) main_touch_calib_pane_t3

0x7f0b,	// (0x0003ab51) main_touch_calib_pane_t4

0x7f1f,	// (0x0003ab65) main_touch_calib_pane_t5

0x43c9,	// (0x0003700f) aid_cell_size_toolbar2

0x43d1,	// (0x00037017) aid_popup3_width_pane

0x31ca,	// (0x00035e10) aid_zoom_text_msg_primary

0x5048,	// (0x00037c8e) vorec_t7

0xc564,	// (0x0003f1aa) bg_calc_paper_pane_g1_ParamLimits

0xc570,	// (0x0003f1b6) bg_calc_paper_pane_g2_ParamLimits

0xc57c,	// (0x0003f1c2) bg_calc_paper_pane_g3_ParamLimits

0xc588,	// (0x0003f1ce) bg_calc_paper_pane_g4_ParamLimits

0xc594,	// (0x0003f1da) bg_calc_paper_pane_g5_ParamLimits

0x4a0a,	// (0x00037650) bg_calc_paper_pane_g6_ParamLimits

0x4a1b,	// (0x00037661) bg_calc_paper_pane_g7_ParamLimits

0x4a2c,	// (0x00037672) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00041dc0) bg_calc_paper_pane_g_ParamLimits

0x4a3d,	// (0x00037683) calc_bg_paper_pane_g9_ParamLimits

0x5147,	// (0x00037d8d) image_qvga_pane_ParamLimits

0x5147,	// (0x00037d8d) image_qvga_pane

0xc449,	// (0x0003f08f) bg_popup_sub_pane_cp04_ParamLimits

0xd1df,	// (0x0003fe25) popup_mup_playback_window_g1_ParamLimits

0xd1eb,	// (0x0003fe31) popup_mup_playback_window_t1_ParamLimits

0xd200,	// (0x0003fe46) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0004214c) popup_mup_playback_window_t_ParamLimits

0x79f6,	// (0x0003a63c) main_mup2_pane_g3_ParamLimits

0x79f6,	// (0x0003a63c) main_mup2_pane_g3

0x5407,	// (0x0003804d) popup_toolbar_window_cp04

0xd5f5,	// (0x0004023b) popup_call2_audio_second_window_g3_ParamLimits

0xd5f5,	// (0x0004023b) popup_call2_audio_second_window_g3

0xda3c,	// (0x00040682) popup_call2_audio_first_window_g4_ParamLimits

0xda3c,	// (0x00040682) popup_call2_audio_first_window_g4

0xe0c4,	// (0x00040d0a) popup_call2_audio_in_window_g4_ParamLimits

0xe0c4,	// (0x00040d0a) popup_call2_audio_in_window_g4

0x6e4f,	// (0x00039a95) aid_area_sk_bg_cut_ParamLimits

0x6e4f,	// (0x00039a95) aid_area_sk_bg_cut

0xd215,	// (0x0003fe5b) aid_area_sk_bg_cut_2_ParamLimits

0xd215,	// (0x0003fe5b) aid_area_sk_bg_cut_2

0x7d8a,	// (0x0003a9d0) aid_placing_details_win

0x7d92,	// (0x0003a9d8) aid_placing_details_win_2

0xe9f7,	// (0x0004163d) camera2_autofocus_pane_g1_ParamLimits

0x460a,	// (0x00037250) popup_fixed_preview_cale_window_ParamLimits

0x460a,	// (0x00037250) popup_fixed_preview_cale_window

0xcff1,	// (0x0003fc37) navi_slider_pane_g3

0xcffa,	// (0x0003fc40) navi_slider_pane_g4

0xd003,	// (0x0003fc49) navi_slider_pane_g5

0xcff1,	// (0x0003fc37) navi_slider_pane_g6

0x678c,	// (0x000393d2) navi_slider_pane_g7

0xd116,	// (0x0003fd5c) mup_scale_pane_g3

0xd11f,	// (0x0003fd65) mup_scale_pane_g4

0xd128,	// (0x0003fd6e) mup_scale_pane_g5

0x6bcb,	// (0x00039811) mup_scale_pane_g6

0x6bd4,	// (0x0003981a) mup_scale_pane_g7

0xcff1,	// (0x0003fc37) cams2_slider_pane_g3

0xe649,	// (0x0004128f) cams2_slider_pane_g4

0x7ce2,	// (0x0003a928) cams2_slider_pane_g5

0xcff1,	// (0x0003fc37) cams2_slider_pane_g6

0x7cea,	// (0x0003a930) cams2_slider_pane_g7

0xe87e,	// (0x000414c4) camera2_autofocus_pane_cp_g1

0xeb9d,	// (0x000417e3) bg_popup_preview_window_pane_cp02_ParamLimits

0xeb9d,	// (0x000417e3) bg_popup_preview_window_pane_cp02

0xeba9,	// (0x000417ef) list_fp_cale_pane_ParamLimits

0xeba9,	// (0x000417ef) list_fp_cale_pane

0xebb5,	// (0x000417fb) popup_fixed_preview_cale_window_t1_ParamLimits

0xebb5,	// (0x000417fb) popup_fixed_preview_cale_window_t1

0x8506,	// (0x0003b14c) popup_fixed_preview_cale_window_t2_ParamLimits

0x8506,	// (0x0003b14c) popup_fixed_preview_cale_window_t2

0x851b,	// (0x0003b161) popup_fixed_preview_cale_window_t3_ParamLimits

0x851b,	// (0x0003b161) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00042414) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00042414) popup_fixed_preview_cale_window_t

0x8530,	// (0x0003b176) list_single_fp_cale_pane_ParamLimits

0x8530,	// (0x0003b176) list_single_fp_cale_pane

0xebd3,	// (0x00041819) list_single_fp_cale_pane_g1_ParamLimits

0xebd3,	// (0x00041819) list_single_fp_cale_pane_g1

0xebdf,	// (0x00041825) list_single_fp_cale_pane_g2_ParamLimits

0xebdf,	// (0x00041825) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0004241b) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0004241b) list_single_fp_cale_pane_g

0xebf8,	// (0x0004183e) list_single_fp_cale_pane_t1_ParamLimits

0xebf8,	// (0x0004183e) list_single_fp_cale_pane_t1

0xec0a,	// (0x00041850) list_single_fp_cale_pane_t2_ParamLimits

0xec0a,	// (0x00041850) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00042422) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00042422) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x43bf,	// (0x00037005) main_dialer_pane

0x8545,	// (0x0003b18b) aid_cell_size_keypad

0x854f,	// (0x0003b195) dialer_ne_pane

0x8559,	// (0x0003b19f) grid_dialer_command_1_pane

0x8561,	// (0x0003b1a7) grid_dialer_command_2_pane

0x8569,	// (0x0003b1af) grid_dialer_keypad_pane

0x857d,	// (0x0003b1c3) bg_popup_call_pane_cp06_ParamLimits

0x857d,	// (0x0003b1c3) bg_popup_call_pane_cp06

0x8589,	// (0x0003b1cf) dialer_ne_clear_pane_ParamLimits

0x8589,	// (0x0003b1cf) dialer_ne_clear_pane

0xec3d,	// (0x00041883) dialer_ne_pane_g1

0xec45,	// (0x0004188b) dialer_ne_pane_t1_ParamLimits

0xec45,	// (0x0004188b) dialer_ne_pane_t1

0x8595,	// (0x0003b1db) dialer_ne_pane_t2_ParamLimits

0x8595,	// (0x0003b1db) dialer_ne_pane_t2

0x85b2,	// (0x0003b1f8) dialer_ne_pane_t3_ParamLimits

0x85b2,	// (0x0003b1f8) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00042427) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00042427) dialer_ne_pane_t

0x85d6,	// (0x0003b21c) dialer_ne_pane_t3_copy1_ParamLimits

0x85d6,	// (0x0003b21c) dialer_ne_pane_t3_copy1

0x85fa,	// (0x0003b240) cell_dialer_keypad_pane_ParamLimits

0x85fa,	// (0x0003b240) cell_dialer_keypad_pane

0x8611,	// (0x0003b257) cell_dialer_command_1_pane_ParamLimits

0x8611,	// (0x0003b257) cell_dialer_command_1_pane

0x8627,	// (0x0003b26d) cell_dialer_command_2_pane_ParamLimits

0x8627,	// (0x0003b26d) cell_dialer_command_2_pane

0xec57,	// (0x0004189d) bg_button_pane_cp02_ParamLimits

0xec57,	// (0x0004189d) bg_button_pane_cp02

0x8636,	// (0x0003b27c) cell_dialer_keypad_pane_g1_ParamLimits

0x8636,	// (0x0003b27c) cell_dialer_keypad_pane_g1

0xec57,	// (0x0004189d) bg_button_pane_cp03_ParamLimits

0xec57,	// (0x0004189d) bg_button_pane_cp03

0x864b,	// (0x0003b291) cell_dialer_command_1_pane_g1_ParamLimits

0x864b,	// (0x0003b291) cell_dialer_command_1_pane_g1

0xec63,	// (0x000418a9) bg_button_pane_cp04

0x865e,	// (0x0003b2a4) cell_dialer_command_2_pane_g1

0xcfe0,	// (0x0003fc26) bg_button_pane_cp06

0xec6b,	// (0x000418b1) dialer_ne_clear_pane_g1

0x66cf,	// (0x00039315) navi_pane_g2

0x66fd,	// (0x00039343) navi_pane_g3

0x0002,

0xf409,	// (0x0004204f) navi_pane_g

0x6728,	// (0x0003936e) navi_pane_mv_g2

0x674f,	// (0x00039395) navi_pane_mv_g5

0x6757,	// (0x0003939d) navi_pane_mv_t1

0xc558,	// (0x0003f19e) main_clock2_pane

0x868c,	// (0x0003b2d2) main_clock2_list_pane_ParamLimits

0x868c,	// (0x0003b2d2) main_clock2_list_pane

0x86b4,	// (0x0003b2fa) main_clock2_pane_t1_ParamLimits

0x86b4,	// (0x0003b2fa) main_clock2_pane_t1

0x86e4,	// (0x0003b32a) main_clock2_pane_t2_ParamLimits

0x86e4,	// (0x0003b32a) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0004242e) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0004242e) main_clock2_pane_t

0x874b,	// (0x0003b391) popup_clock_analogue_window_cp03_ParamLimits

0x874b,	// (0x0003b391) popup_clock_analogue_window_cp03

0x876b,	// (0x0003b3b1) popup_clock_digital_window_cp02_ParamLimits

0x876b,	// (0x0003b3b1) popup_clock_digital_window_cp02

0x87e0,	// (0x0003b426) main_clock2_list_single_pane_ParamLimits

0x87e0,	// (0x0003b426) main_clock2_list_single_pane

0xcfe0,	// (0x0003fc26) list_highlight_pane_cp05

0xec73,	// (0x000418b9) main_clock2_list_single_pane_t1

0x5407,	// (0x0003804d) popup_toolbar_window_cp04_ParamLimits

0x7db4,	// (0x0003a9fa) camera2_autofocus_pane_g2_ParamLimits

0x7db4,	// (0x0003a9fa) camera2_autofocus_pane_g2

0x7dc0,	// (0x0003aa06) camera2_autofocus_pane_g3_ParamLimits

0x7dc0,	// (0x0003aa06) camera2_autofocus_pane_g3

0x7dcc,	// (0x0003aa12) camera2_autofocus_pane_g4_ParamLimits

0x7dcc,	// (0x0003aa12) camera2_autofocus_pane_g4

0x7dd8,	// (0x0003aa1e) camera2_autofocus_pane_g5_ParamLimits

0x7dd8,	// (0x0003aa1e) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00042377) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00042377) camera2_autofocus_pane_g

0x7f67,	// (0x0003abad) camera2_autofocus_pane_cp_g2

0x7f6f,	// (0x0003abb5) camera2_autofocus_pane_cp_g3

0x7f77,	// (0x0003abbd) camera2_autofocus_pane_cp_g4

0x7f7f,	// (0x0003abc5) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x000423dd) camera2_autofocus_pane_cp_g

0x8575,	// (0x0003b1bb) popup_dialer_spcha_window

0x43bf,	// (0x00037005) bg_popup_sub_pane_cp07

0xec81,	// (0x000418c7) list_spcha_pane

0xec89,	// (0x000418cf) list_single_spcha_pane_ParamLimits

0xec89,	// (0x000418cf) list_single_spcha_pane

0x43bf,	// (0x00037005) list_highlight_pane_cp06

0xec9a,	// (0x000418e0) list_single_spcha_pane_t1

0xde6e,	// (0x00040ab4) popup_call2_audio_out_window_g4_ParamLimits

0xde6e,	// (0x00040ab4) popup_call2_audio_out_window_g4

0x43bf,	// (0x00037005) main_imed2_pane

0xe455,	// (0x0004109b) popup_imed_adjust2_window

0x7471,	// (0x0003a0b7) popup_imed_trans_window_ParamLimits

0x7471,	// (0x0003a0b7) popup_imed_trans_window

0xe6b2,	// (0x000412f8) popup_blid_sat_info2_window_t1

0xe6c0,	// (0x00041306) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0004230c) popup_blid_sat_info2_window_t

0x888a,	// (0x0003b4d0) aid_size_cell_colour_35

0x88a4,	// (0x0003b4ea) aid_size_cell_colour_112

0x88bb,	// (0x0003b501) aid_size_cell_effect

0xd8c7,	// (0x0004050d) bg_tb_trans_pane_cp02

0xd8d5,	// (0x0004051b) heading_imed_pane

0x88d5,	// (0x0003b51b) listscroll_imed_pane

0xeca8,	// (0x000418ee) heading_imed_pane_g1

0xecb0,	// (0x000418f6) heading_imed_pane_t1

0xecbe,	// (0x00041904) grid_imed_colour_35_pane_ParamLimits

0xecbe,	// (0x00041904) grid_imed_colour_35_pane

0x88e1,	// (0x0003b527) grid_imed_effect_pane

0xecd9,	// (0x0004191f) list_imed_aspect_pane

0x88f1,	// (0x0003b537) scroll_pane_cp027_ParamLimits

0x88f1,	// (0x0003b537) scroll_pane_cp027

0x88fd,	// (0x0003b543) cell_imed_effect_pane_ParamLimits

0x88fd,	// (0x0003b543) cell_imed_effect_pane

0xece1,	// (0x00041927) cell_imed_colour_pane_ParamLimits

0xece1,	// (0x00041927) cell_imed_colour_pane

0xed23,	// (0x00041969) cell_imed_colour_pane_g1_ParamLimits

0xed23,	// (0x00041969) cell_imed_colour_pane_g1

0xed34,	// (0x0004197a) hgihlgiht_grid_pane_cp016_ParamLimits

0xed34,	// (0x0004197a) hgihlgiht_grid_pane_cp016

0x8915,	// (0x0003b55b) cell_imed_effect_pane_g1

0x891d,	// (0x0003b563) grid_highlight_pane_cp017

0xd8e1,	// (0x00040527) list_imed_single_pane_ParamLimits

0xd8e1,	// (0x00040527) list_imed_single_pane

0x43bf,	// (0x00037005) list_highlight_pane_cp07

0xed45,	// (0x0004198b) list_imed_aspect_pane_comp1_t1

0xe42d,	// (0x00041073) bg_tb_trans_pane_cp05

0xed67,	// (0x000419ad) popup_imed_adjust2_window_g1

0xed8e,	// (0x000419d4) popup_imed_adjust2_window_t1

0xeda6,	// (0x000419ec) slider_imed_adjust_pane

0xedba,	// (0x00041a00) slider_imed_adjust_pane_g1

0xedca,	// (0x00041a10) slider_imed_adjust_pane_g2

0xedda,	// (0x00041a20) slider_imed_adjust_pane_g3

0xedeb,	// (0x00041a31) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0004244b) slider_imed_adjust_pane_g

0x8926,	// (0x0003b56c) aid_size_cell_clipart2

0x8932,	// (0x0003b578) grid_imed_clipart_pane

0xedfc,	// (0x00041a42) scroll_pane_cp031

0x893c,	// (0x0003b582) cell_imed_clipart_pane_ParamLimits

0x893c,	// (0x0003b582) cell_imed_clipart_pane

0x8963,	// (0x0003b5a9) cell_imed_clipart_pane_g1

0x43bf,	// (0x00037005) grid_highlight_pane_cp014

0x8698,	// (0x0003b2de) main_clock2_pane_g1_ParamLimits

0x8698,	// (0x0003b2de) main_clock2_pane_g1

0x8787,	// (0x0003b3cd) aid_call2_pane_cp10

0x8799,	// (0x0003b3df) aid_call_pane_cp10

0xcf15,	// (0x0003fb5b) popup_clock_analogue_window_cp10_g1

0xcf15,	// (0x0003fb5b) popup_clock_analogue_window_cp10_g2

0x87ab,	// (0x0003b3f1) popup_clock_analogue_window_cp10_g3

0x87ab,	// (0x0003b3f1) popup_clock_analogue_window_cp10_g4

0xcf15,	// (0x0003fb5b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x00042439) popup_clock_analogue_window_cp10_g

0x87c1,	// (0x0003b407) popup_clock_analogue_window_cp10_t1

0x87f2,	// (0x0003b438) clock_digital_number_pane_cp10_ParamLimits

0x87f2,	// (0x0003b438) clock_digital_number_pane_cp10

0x880a,	// (0x0003b450) clock_digital_number_pane_cp11_ParamLimits

0x880a,	// (0x0003b450) clock_digital_number_pane_cp11

0x8822,	// (0x0003b468) clock_digital_number_pane_cp12_ParamLimits

0x8822,	// (0x0003b468) clock_digital_number_pane_cp12

0x883a,	// (0x0003b480) clock_digital_number_pane_cp13_ParamLimits

0x883a,	// (0x0003b480) clock_digital_number_pane_cp13

0x8852,	// (0x0003b498) clock_digital_separator_pane_cp10_ParamLimits

0x8852,	// (0x0003b498) clock_digital_separator_pane_cp10

0x886a,	// (0x0003b4b0) popup_clock_digital_window_cp02_t1_ParamLimits

0x886a,	// (0x0003b4b0) popup_clock_digital_window_cp02_t1

0xc441,	// (0x0003f087) clock_digital_number_pane_cp10_g1

0xc441,	// (0x0003f087) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00042454) clock_digital_number_pane_cp10_g

0xc441,	// (0x0003f087) clock_digital_separator_pane_cp10_g1

0xc441,	// (0x0003f087) clock_digital_separator_pane_g2_cp10

0xcfb0,	// (0x0003fbf6) navi_pane_vded_g4

0xcfb9,	// (0x0003fbff) navi_pane_vded_g5

0xcfc2,	// (0x0003fc08) navi_pane_vded_t1

0x43bf,	// (0x00037005) main_vded_pane

0x896c,	// (0x0003b5b2) main_vded_pane_g1

0x8978,	// (0x0003b5be) main_vded_pane_g2

0x8982,	// (0x0003b5c8) main_vded_pane_g3

0x0002,

0xf813,	// (0x00042459) main_vded_pane_g

0x898c,	// (0x0003b5d2) main_vded_pane_t1

0x899a,	// (0x0003b5e0) main_vded_pane_t2

0x0001,

0xf81a,	// (0x00042460) main_vded_pane_t

0x89a8,	// (0x0003b5ee) vded_slider_pane

0x89b2,	// (0x0003b5f8) vded_video_pane

0xee04,	// (0x00041a4a) vded_video_pane_g1

0x89bc,	// (0x0003b602) vded_video_pane_g2

0xe87e,	// (0x000414c4) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00042465) vded_video_pane_g

0xee0e,	// (0x00041a54) vded_slider_pane_g1

0xe5c7,	// (0x0004120d) vded_slider_pane_g2

0xee17,	// (0x00041a5d) vded_slider_pane_g3

0xee20,	// (0x00041a66) vded_slider_pane_g4

0xee29,	// (0x00041a6f) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0004246c) vded_slider_pane_g

0x8485,	// (0x0003b0cb) mup3_rocker_pane_ParamLimits

0x8485,	// (0x0003b0cb) mup3_rocker_pane

0x89c5,	// (0x0003b60b) mup3_control_keys_pane_g1

0x89cd,	// (0x0003b613) mup3_control_keys_pane_g2

0x89d5,	// (0x0003b61b) mup3_control_keys_pane_g3

0x89dd,	// (0x0003b623) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00042477) mup3_control_keys_pane_g

0x4628,	// (0x0003726e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4628,	// (0x0003726e) popup_toolbar2_fixed_window_cp01

0x849f,	// (0x0003b0e5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x849f,	// (0x0003b0e5) popup_toolbar2_fixed_window_cp02

0xd767,	// (0x000403ad) popup_call2_audio_second_window_t4_ParamLimits

0xd767,	// (0x000403ad) popup_call2_audio_second_window_t4

0xdcdb,	// (0x00040921) popup_call2_audio_first_window_t6_ParamLimits

0xdcdb,	// (0x00040921) popup_call2_audio_first_window_t6

0xdf71,	// (0x00040bb7) popup_call2_audio_out_window_t6_ParamLimits

0xdf71,	// (0x00040bb7) popup_call2_audio_out_window_t6

0x43bf,	// (0x00037005) main_vitu_pane

0x89ed,	// (0x0003b633) aid_size_cell_itu_ParamLimits

0x89ed,	// (0x0003b633) aid_size_cell_itu

0x4650,	// (0x00037296) bg_popup_window_pane_cp08_ParamLimits

0x4650,	// (0x00037296) bg_popup_window_pane_cp08

0x89fb,	// (0x0003b641) field_vitu_entry_pane_ParamLimits

0x89fb,	// (0x0003b641) field_vitu_entry_pane

0x8a0a,	// (0x0003b650) grid_vitu_function_pane_ParamLimits

0x8a0a,	// (0x0003b650) grid_vitu_function_pane

0x8a1a,	// (0x0003b660) grid_vitu_itu_pane_ParamLimits

0x8a1a,	// (0x0003b660) grid_vitu_itu_pane

0x8a2a,	// (0x0003b670) cell_vitu_itu_pane_ParamLimits

0x8a2a,	// (0x0003b670) cell_vitu_itu_pane

0x8a3f,	// (0x0003b685) cell_vitu_function_pane_ParamLimits

0x8a3f,	// (0x0003b685) cell_vitu_function_pane

0xd8c7,	// (0x0004050d) bg_popup_sub_pane_cp08_ParamLimits

0xd8c7,	// (0x0004050d) bg_popup_sub_pane_cp08

0x8a53,	// (0x0003b699) field_vitu_entry_pane_t1_ParamLimits

0x8a53,	// (0x0003b699) field_vitu_entry_pane_t1

0xee4a,	// (0x00041a90) field_vitu_entry_pane_t2_ParamLimits

0xee4a,	// (0x00041a90) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00042485) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00042485) field_vitu_entry_pane_t

0xee67,	// (0x00041aad) bg_button_pane_cp05_ParamLimits

0xee67,	// (0x00041aad) bg_button_pane_cp05

0x8a70,	// (0x0003b6b6) cell_vitu_itu_pane_g1

0x8a88,	// (0x0003b6ce) cell_vitu_itu_pane_t1_ParamLimits

0x8a88,	// (0x0003b6ce) cell_vitu_itu_pane_t1

0x8a9a,	// (0x0003b6e0) cell_vitu_itu_pane_t2_ParamLimits

0x8a9a,	// (0x0003b6e0) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0004248a) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0004248a) cell_vitu_itu_pane_t

0xee75,	// (0x00041abb) bg_button_pane_cp07

0x8acf,	// (0x0003b715) cell_vitu_function_pane_g1

0x48b2,	// (0x000374f8) main_calc_pane_g1

0x4405,	// (0x0003704b) aid_visual_content_pane

0x43bf,	// (0x00037005) main_vradio_pane

0x8ad8,	// (0x0003b71e) main_vradio_pane_g1_ParamLimits

0x8ad8,	// (0x0003b71e) main_vradio_pane_g1

0xee7f,	// (0x00041ac5) main_vradio_pane_g2_ParamLimits

0xee7f,	// (0x00041ac5) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x00042491) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x00042491) main_vradio_pane_g

0x8ae8,	// (0x0003b72e) main_vradio_pane_t1_ParamLimits

0x8ae8,	// (0x0003b72e) main_vradio_pane_t1

0x8afa,	// (0x0003b740) main_vradio_pane_t2_ParamLimits

0x8afa,	// (0x0003b740) main_vradio_pane_t2

0xee8c,	// (0x00041ad2) main_vradio_pane_t3_ParamLimits

0xee8c,	// (0x00041ad2) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00042496) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00042496) main_vradio_pane_t

0x8b0c,	// (0x0003b752) vradio_rocker_control_pane_ParamLimits

0x8b0c,	// (0x0003b752) vradio_rocker_control_pane

0x8b18,	// (0x0003b75e) vradio_station_info_pane_ParamLimits

0x8b18,	// (0x0003b75e) vradio_station_info_pane

0xeea0,	// (0x00041ae6) vradio_frequency_info_pane_ParamLimits

0xeea0,	// (0x00041ae6) vradio_frequency_info_pane

0xe87e,	// (0x000414c4) vradio_station_info_pane_g1

0xeeaf,	// (0x00041af5) vradio_station_info_pane_t1_ParamLimits

0xeeaf,	// (0x00041af5) vradio_station_info_pane_t1

0xeed1,	// (0x00041b17) vradio_station_info_pane_t2_ParamLimits

0xeed1,	// (0x00041b17) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0004249d) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0004249d) vradio_station_info_pane_t

0xeee3,	// (0x00041b29) vradio_tuning_pane

0xeeeb,	// (0x00041b31) vradio_rocker_control_pane_g1

0xeef3,	// (0x00041b39) vradio_rocker_control_pane_g2

0xeefb,	// (0x00041b41) vradio_rocker_control_pane_g3

0xef03,	// (0x00041b49) vradio_rocker_control_pane_g4

0xef0b,	// (0x00041b51) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x000424a2) vradio_rocker_control_pane_g

0x8b27,	// (0x0003b76d) vradio_frequency_info_pane_g1

0xef13,	// (0x00041b59) vradio_frequency_info_pane_t1_ParamLimits

0xef13,	// (0x00041b59) vradio_frequency_info_pane_t1

0x8b31,	// (0x0003b777) vradio_tuning_pane_g1

0x8b3a,	// (0x0003b780) vradio_tuning_pane_t1

0x444e,	// (0x00037094) area_side_right_pane_ParamLimits

0x444e,	// (0x00037094) area_side_right_pane

0xe3f4,	// (0x0004103a) status_small_pane_g1

0xe3fc,	// (0x00041042) status_small_pane_g2

0xe405,	// (0x0004104b) status_small_pane_g3

0xe40e,	// (0x00041054) status_small_pane_g4

0x0003,

0xf61c,	// (0x00042262) status_small_pane_g

0xe417,	// (0x0004105d) status_small_pane_t1

0x43bf,	// (0x00037005) main_video3_pane

0xef27,	// (0x00041b6d) cams_zoom_vslider_pane

0xef2f,	// (0x00041b75) image3_wide_pane_ParamLimits

0xef2f,	// (0x00041b75) image3_wide_pane

0xef49,	// (0x00041b8f) image3_wide_small_pane

0xef55,	// (0x00041b9b) main_video3_pane_g1_ParamLimits

0xef55,	// (0x00041b9b) main_video3_pane_g1

0xef71,	// (0x00041bb7) main_video3_pane_g2_ParamLimits

0xef71,	// (0x00041bb7) main_video3_pane_g2

0x0001,

0xf867,	// (0x000424ad) main_video3_pane_g_ParamLimits

0xf867,	// (0x000424ad) main_video3_pane_g

0xef8d,	// (0x00041bd3) main_video3_pane_t1_ParamLimits

0xef8d,	// (0x00041bd3) main_video3_pane_t1

0xefb8,	// (0x00041bfe) main_video3_pane_t2_ParamLimits

0xefb8,	// (0x00041bfe) main_video3_pane_t2

0xefe3,	// (0x00041c29) main_video3_pane_t3_ParamLimits

0xefe3,	// (0x00041c29) main_video3_pane_t3

0x0002,

0xf86c,	// (0x000424b2) main_video3_pane_t_ParamLimits

0xf86c,	// (0x000424b2) main_video3_pane_t

0xf010,	// (0x00041c56) cams_zoom_vslider_pane_g1

0xf019,	// (0x00041c5f) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x000424b9) cams_zoom_vslider_pane_g

0xf021,	// (0x00041c67) small_slider_vertical_pane

0xe87e,	// (0x000414c4) small_slider_vertical_pane_g1

0xe87e,	// (0x000414c4) small_slider_vertical_pane_g2

0xf029,	// (0x00041c6f) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x000424be) small_slider_vertical_pane_g

0x43bf,	// (0x00037005) main_hwr_training_pane

0xf032,	// (0x00041c78) hwr_training_instruct_pane_ParamLimits

0xf032,	// (0x00041c78) hwr_training_instruct_pane

0x8b49,	// (0x0003b78f) hwr_training_navi_pane_ParamLimits

0x8b49,	// (0x0003b78f) hwr_training_navi_pane

0x8b63,	// (0x0003b7a9) hwr_training_write_pane_ParamLimits

0x8b63,	// (0x0003b7a9) hwr_training_write_pane

0x43bf,	// (0x00037005) bg_frame_shadow_pane

0xf069,	// (0x00041caf) hwr_training_write_pane_g1

0xf071,	// (0x00041cb7) hwr_training_write_pane_g2

0xf079,	// (0x00041cbf) hwr_training_write_pane_g3

0xf081,	// (0x00041cc7) hwr_training_write_pane_g4

0xf089,	// (0x00041ccf) hwr_training_write_pane_g5

0xf091,	// (0x00041cd7) hwr_training_write_pane_g6

0xf099,	// (0x00041cdf) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x000424c5) hwr_training_write_pane_g

0x8b9b,	// (0x0003b7e1) hwr_training_navi_pane_g1_ParamLimits

0x8b9b,	// (0x0003b7e1) hwr_training_navi_pane_g1

0x8bad,	// (0x0003b7f3) hwr_training_navi_pane_g2_ParamLimits

0x8bad,	// (0x0003b7f3) hwr_training_navi_pane_g2

0x8bbf,	// (0x0003b805) hwr_training_navi_pane_g3_ParamLimits

0x8bbf,	// (0x0003b805) hwr_training_navi_pane_g3

0x8bcf,	// (0x0003b815) hwr_training_navi_pane_g4_ParamLimits

0x8bcf,	// (0x0003b815) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x000424d4) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x000424d4) hwr_training_navi_pane_g

0x8be9,	// (0x0003b82f) hwr_training_navi_pane_t1

0x8bf7,	// (0x0003b83d) list_single_hwr_training_instruct_pane_ParamLimits

0x8bf7,	// (0x0003b83d) list_single_hwr_training_instruct_pane

0xf0a1,	// (0x00041ce7) list_single_hwr_training_instruct_pane_t1

0xe7be,	// (0x00041404) bg_frame_shadow_pane_g1

0xf0b0,	// (0x00041cf6) bg_frame_shadow_pane_g2

0xf0b8,	// (0x00041cfe) bg_frame_shadow_pane_g3

0xf0c0,	// (0x00041d06) bg_frame_shadow_pane_g4

0xf0c8,	// (0x00041d0e) bg_frame_shadow_pane_g5

0xf0d0,	// (0x00041d16) bg_frame_shadow_pane_g6

0xf0d8,	// (0x00041d1e) bg_frame_shadow_pane_g7

0xc623,	// (0x0003f269) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x000424df) bg_frame_shadow_pane_g

0x43bf,	// (0x00037005) main_video_tele_dialer_pane

0x8c2d,	// (0x0003b873) aid_size_cell_video_keypad_ParamLimits

0x8c2d,	// (0x0003b873) aid_size_cell_video_keypad

0x8c3d,	// (0x0003b883) grid_video_dialer_keypad_pane_ParamLimits

0x8c3d,	// (0x0003b883) grid_video_dialer_keypad_pane

0x8c6f,	// (0x0003b8b5) video_down_pane_cp_ParamLimits

0x8c6f,	// (0x0003b8b5) video_down_pane_cp

0x8c97,	// (0x0003b8dd) cell_video_dialer_keypad_pane_ParamLimits

0x8c97,	// (0x0003b8dd) cell_video_dialer_keypad_pane

0xf0e0,	// (0x00041d26) bg_button_pane_cp08_ParamLimits

0xf0e0,	// (0x00041d26) bg_button_pane_cp08

0x8cac,	// (0x0003b8f2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8cac,	// (0x0003b8f2) cell_video_dialer_keypad_pane_g1

0x8479,	// (0x0003b0bf) mup3_rocker2_pane_ParamLimits

0x8479,	// (0x0003b0bf) mup3_rocker2_pane

0xe87e,	// (0x000414c4) mup3_rocker2_pane_g1

0x73ff,	// (0x0003a045) main_dialer2_pane

0x43bf,	// (0x00037005) main_mp4_pane

0x8ceb,	// (0x0003b931) main_mp4_pane_g1_ParamLimits

0x8ceb,	// (0x0003b931) main_mp4_pane_g1

0x8cf9,	// (0x0003b93f) main_mp4_pane_g2_ParamLimits

0x8cf9,	// (0x0003b93f) main_mp4_pane_g2

0x8d07,	// (0x0003b94d) main_mp4_pane_g3_ParamLimits

0x8d07,	// (0x0003b94d) main_mp4_pane_g3

0x8d4c,	// (0x0003b992) main_mp4_pane_g4_ParamLimits

0x8d4c,	// (0x0003b992) main_mp4_pane_g4

0x8d74,	// (0x0003b9ba) main_mp4_pane_g5_ParamLimits

0x8d74,	// (0x0003b9ba) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x000424ff) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x000424ff) main_mp4_pane_g

0x8dc4,	// (0x0003ba0a) main_mp4_pane_t1_ParamLimits

0x8dc4,	// (0x0003ba0a) main_mp4_pane_t1

0x8e20,	// (0x0003ba66) main_mp4_pane_t2_ParamLimits

0x8e20,	// (0x0003ba66) main_mp4_pane_t2

0x0084,	// (0x00032cca) main_mp4_pane_t3_ParamLimits

0x0084,	// (0x00032cca) main_mp4_pane_t3

0x8e72,	// (0x0003bab8) main_mp4_pane_t4_ParamLimits

0x8e72,	// (0x0003bab8) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0004250c) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0004250c) main_mp4_pane_t

0x8eb6,	// (0x0003bafc) mp4_progress_pane_ParamLimits

0x8eb6,	// (0x0003bafc) mp4_progress_pane

0x8f00,	// (0x0003bb46) mp4_rocker_pane_ParamLimits

0x8f00,	// (0x0003bb46) mp4_rocker_pane

0x015a,	// (0x00032da0) mp4_progress_pane_t1

0x0173,	// (0x00032db9) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00042515) mp4_progress_pane_t

0x018c,	// (0x00032dd2) mup_progress_pane_cp04

0xe87e,	// (0x000414c4) mp4_rocker_pane_g1

0x8f20,	// (0x0003bb66) aid_cell_size_keypad2_ParamLimits

0x8f20,	// (0x0003bb66) aid_cell_size_keypad2

0x8f30,	// (0x0003bb76) dialer2_ne_pane_ParamLimits

0x8f30,	// (0x0003bb76) dialer2_ne_pane

0x8f3e,	// (0x0003bb84) grid_dialer2_keypad_pane_ParamLimits

0x8f3e,	// (0x0003bb84) grid_dialer2_keypad_pane

0x0c96,	// (0x000338dc) bg_popup_call_pane_cp07_ParamLimits

0x0c96,	// (0x000338dc) bg_popup_call_pane_cp07

0x8f4e,	// (0x0003bb94) dialer2_ne_pane_t1_ParamLimits

0x8f4e,	// (0x0003bb94) dialer2_ne_pane_t1

0x8f73,	// (0x0003bbb9) cell_dialer2_keypad_pane_ParamLimits

0x8f73,	// (0x0003bbb9) cell_dialer2_keypad_pane

0x01b4,	// (0x00032dfa) bg_button_pane_pane_cp04_ParamLimits

0x01b4,	// (0x00032dfa) bg_button_pane_pane_cp04

0x8f8a,	// (0x0003bbd0) cell_dialer2_keypad_pane_g1_ParamLimits

0x8f8a,	// (0x0003bbd0) cell_dialer2_keypad_pane_g1

0x52c9,	// (0x00037f0f) aid_placing_vt_set_content_ParamLimits

0x52c9,	// (0x00037f0f) aid_placing_vt_set_content

0x52f5,	// (0x00037f3b) aid_placing_vt_set_title_ParamLimits

0x52f5,	// (0x00037f3b) aid_placing_vt_set_title

0x43bf,	// (0x00037005) main_image3_pane

0x9024,	// (0x0003bc6a) area_side_right_pane_cp01_ParamLimits

0x9024,	// (0x0003bc6a) area_side_right_pane_cp01

0x127a,	// (0x00033ec0) main_image3_pane_g1_ParamLimits

0x127a,	// (0x00033ec0) main_image3_pane_g1

0x9051,	// (0x0003bc97) main_image3_pane_g2_ParamLimits

0x9051,	// (0x0003bc97) main_image3_pane_g2

0x906a,	// (0x0003bcb0) main_image3_pane_g3_ParamLimits

0x906a,	// (0x0003bcb0) main_image3_pane_g3

0x9083,	// (0x0003bcc9) main_image3_pane_g4_ParamLimits

0x9083,	// (0x0003bcc9) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00042524) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00042524) main_image3_pane_g

0x909c,	// (0x0003bce2) main_image3_pane_t1_ParamLimits

0x909c,	// (0x0003bce2) main_image3_pane_t1

0x90c1,	// (0x0003bd07) main_image3_pane_t2_ParamLimits

0x90c1,	// (0x0003bd07) main_image3_pane_t2

0x90e0,	// (0x0003bd26) main_image3_pane_t3_ParamLimits

0x90e0,	// (0x0003bd26) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0004252d) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0004252d) main_image3_pane_t

0x4650,	// (0x00037296) grid_sctrl_middle_pane_cp01_ParamLimits

0x4650,	// (0x00037296) grid_sctrl_middle_pane_cp01

0x9141,	// (0x0003bd87) cell_sctrl_middle_pane_cp01_ParamLimits

0x9141,	// (0x0003bd87) cell_sctrl_middle_pane_cp01

0x9152,	// (0x0003bd98) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9152,	// (0x0003bd98) cell_sctrl_middle_pane_cp01_g1

0x43bf,	// (0x00037005) main_call4_pane

0x915f,	// (0x0003bda5) aid_size_button_call4_ParamLimits

0x915f,	// (0x0003bda5) aid_size_button_call4

0x918f,	// (0x0003bdd5) call4_windows_pane_ParamLimits

0x918f,	// (0x0003bdd5) call4_windows_pane

0x91a9,	// (0x0003bdef) grid_call4_button_pane_ParamLimits

0x91a9,	// (0x0003bdef) grid_call4_button_pane

0x01f2,	// (0x00032e38) call4_windows_conf_pane

0x0207,	// (0x00032e4d) popup_call4_audio_first_window_ParamLimits

0x0207,	// (0x00032e4d) popup_call4_audio_first_window

0x0253,	// (0x00032e99) popup_call4_audio_second_window_ParamLimits

0x0253,	// (0x00032e99) popup_call4_audio_second_window

0x0267,	// (0x00032ead) popup_call4_audio_wait_window_ParamLimits

0x0267,	// (0x00032ead) popup_call4_audio_wait_window

0x91cd,	// (0x0003be13) cell_call4_button_pane_ParamLimits

0x91cd,	// (0x0003be13) cell_call4_button_pane

0x91f2,	// (0x0003be38) bg_button_pane_cp09_ParamLimits

0x91f2,	// (0x0003be38) bg_button_pane_cp09

0x91fe,	// (0x0003be44) cell_call4_button_pane_g1_ParamLimits

0x91fe,	// (0x0003be44) cell_call4_button_pane_g1

0x920b,	// (0x0003be51) cell_call4_button_pane_t1_ParamLimits

0x920b,	// (0x0003be51) cell_call4_button_pane_t1

0x02af,	// (0x00032ef5) popup_call4_audio_conf_window_ParamLimits

0x02af,	// (0x00032ef5) popup_call4_audio_conf_window

0x84ac,	// (0x0003b0f2) mup3_progress_pane_t1_ParamLimits

0x84c3,	// (0x0003b109) mup3_progress_pane_t2_ParamLimits

0xeb60,	// (0x000417a6) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00042406) mup3_progress_pane_t_ParamLimits

0xeb77,	// (0x000417bd) mup_progress_pane_cp03_ParamLimits

0x89e5,	// (0x0003b62b) mup3_control_keys_pane_g4_copy1

0x8ee4,	// (0x0003bb2a) mp4_rocker2_pane_ParamLimits

0x8ee4,	// (0x0003bb2a) mp4_rocker2_pane

0x02cb,	// (0x00032f11) mp4_rocker2_pane_g1

0x02c3,	// (0x00032f09) mp4_rocker2_pane_g2

0x921d,	// (0x0003be63) mp4_rocker2_pane_g3

0x9225,	// (0x0003be6b) mp4_rocker2_pane_g4

0x922d,	// (0x0003be73) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00042536) mp4_rocker2_pane_g

0x43bf,	// (0x00037005) main_camera4_pane

0x43bf,	// (0x00037005) main_video4_pane

0x8c4b,	// (0x0003b891) main_video_tele_dialer_pane_t1_ParamLimits

0x8c4b,	// (0x0003b891) main_video_tele_dialer_pane_t1

0x8c5d,	// (0x0003b8a3) main_video_tele_dialer_pane_t2_ParamLimits

0x8c5d,	// (0x0003b8a3) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x000424f0) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x000424f0) main_video_tele_dialer_pane_t

0x924d,	// (0x0003be93) cam4_autofocus_pane_ParamLimits

0x924d,	// (0x0003be93) cam4_autofocus_pane

0x9267,	// (0x0003bead) cam4_image_uncrop_pane_ParamLimits

0x9267,	// (0x0003bead) cam4_image_uncrop_pane

0x927e,	// (0x0003bec4) cam4_indicators_pane_ParamLimits

0x927e,	// (0x0003bec4) cam4_indicators_pane

0x929a,	// (0x0003bee0) main_camera4_pane_g1_ParamLimits

0x929a,	// (0x0003bee0) main_camera4_pane_g1

0x92a6,	// (0x0003beec) main_camera4_pane_g2_ParamLimits

0x92a6,	// (0x0003beec) main_camera4_pane_g2

0x92a6,	// (0x0003beec) main_camera4_pane_g3_ParamLimits

0x92a6,	// (0x0003beec) main_camera4_pane_g3

0x92b2,	// (0x0003bef8) main_camera4_pane_g4_ParamLimits

0x92b2,	// (0x0003bef8) main_camera4_pane_g4

0x92be,	// (0x0003bf04) main_camera4_pane_g5_ParamLimits

0x92be,	// (0x0003bf04) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00042541) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00042541) main_camera4_pane_g

0x92d8,	// (0x0003bf1e) main_camera4_pane_t1_ParamLimits

0x92d8,	// (0x0003bf1e) main_camera4_pane_t1

0xeae5,	// (0x0004172b) bg_tb_trans_pane_cp06

0x9328,	// (0x0003bf6e) cam4_indicators_pane_g1

0x9339,	// (0x0003bf7f) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0004255c) cam4_indicators_pane_g

0x9357,	// (0x0003bf9d) cam4_indicators_pane_t1

0x9381,	// (0x0003bfc7) main_video4_pane_g1_ParamLimits

0x9381,	// (0x0003bfc7) main_video4_pane_g1

0x938d,	// (0x0003bfd3) main_video4_pane_g2_ParamLimits

0x938d,	// (0x0003bfd3) main_video4_pane_g2

0x9399,	// (0x0003bfdf) main_video4_pane_g3_ParamLimits

0x9399,	// (0x0003bfdf) main_video4_pane_g3

0x93a5,	// (0x0003bfeb) main_video4_pane_g4_ParamLimits

0x93a5,	// (0x0003bfeb) main_video4_pane_g4

0x0004,

0xf91d,	// (0x00042563) main_video4_pane_g_ParamLimits

0xf91d,	// (0x00042563) main_video4_pane_g

0x93c5,	// (0x0003c00b) vid4_indicators_pane_ParamLimits

0x93c5,	// (0x0003c00b) vid4_indicators_pane

0x93e3,	// (0x0003c029) video4_image_uncrop_cif_pane_ParamLimits

0x93e3,	// (0x0003c029) video4_image_uncrop_cif_pane

0x93f2,	// (0x0003c038) video4_image_uncrop_nhd_pane_ParamLimits

0x93f2,	// (0x0003c038) video4_image_uncrop_nhd_pane

0x9267,	// (0x0003bead) video4_image_uncrop_vga_pane_ParamLimits

0x9267,	// (0x0003bead) video4_image_uncrop_vga_pane

0xd8c7,	// (0x0004050d) bg_tb_trans_pane_cp07

0x9328,	// (0x0003bf6e) vid4_indicators_pane_g1

0x9407,	// (0x0003c04d) vid4_indicators_pane_g2

0x9418,	// (0x0003c05e) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0004256e) vid4_indicators_pane_g

0x9445,	// (0x0003c08b) vid4_indicators_pane_t1

0x945e,	// (0x0003c0a4) cam4_autofocus_pane_g1

0x9466,	// (0x0003c0ac) cam4_autofocus_pane_g2

0x946e,	// (0x0003c0b4) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00042579) cam4_autofocus_pane_g

0x9476,	// (0x0003c0bc) cam4_autofocus_pane_g3_copy1

0x8c7b,	// (0x0003b8c1) video_down_pane_cp_t1

0x8c89,	// (0x0003b8cf) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x000424f5) video_down_pane_cp_t

0x4650,	// (0x00037296) popup_vitu2_window_ParamLimits

0x4650,	// (0x00037296) popup_vitu2_window

0x947e,	// (0x0003c0c4) aid_size_cell2_itu2_ParamLimits

0x947e,	// (0x0003c0c4) aid_size_cell2_itu2

0x94a0,	// (0x0003c0e6) aid_size_cell_itu2_ParamLimits

0x94a0,	// (0x0003c0e6) aid_size_cell_itu2

0x0c96,	// (0x000338dc) bg_popup_window_pane_cp09_ParamLimits

0x0c96,	// (0x000338dc) bg_popup_window_pane_cp09

0x94e4,	// (0x0003c12a) field_vitu2_entry_pane_ParamLimits

0x94e4,	// (0x0003c12a) field_vitu2_entry_pane

0x9504,	// (0x0003c14a) grid_vitu2_function_pane_ParamLimits

0x9504,	// (0x0003c14a) grid_vitu2_function_pane

0x9548,	// (0x0003c18e) grid_vitu2_itu_pane_ParamLimits

0x9548,	// (0x0003c18e) grid_vitu2_itu_pane

0x95be,	// (0x0003c204) cell_vitu2_itu_pane_ParamLimits

0x95be,	// (0x0003c204) cell_vitu2_itu_pane

0x95d3,	// (0x0003c219) cell_vitu2_function_pane_ParamLimits

0x95d3,	// (0x0003c219) cell_vitu2_function_pane

0x0396,	// (0x00032fdc) bg_popup_call_pane_cp08_ParamLimits

0x0396,	// (0x00032fdc) bg_popup_call_pane_cp08

0x03af,	// (0x00032ff5) field_vitu2_entry_pane_g1

0x03bb,	// (0x00033001) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x00042580) field_vitu2_entry_pane_g

0x3543,	// (0x00036189) field_vitu2_entry_pane_t1_ParamLimits

0x3543,	// (0x00036189) field_vitu2_entry_pane_t1

0x3575,	// (0x000361bb) field_vitu2_entry_pane_t2_ParamLimits

0x3575,	// (0x000361bb) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00042587) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00042587) field_vitu2_entry_pane_t

0x9614,	// (0x0003c25a) bg_button_pane_cp010_ParamLimits

0x9614,	// (0x0003c25a) bg_button_pane_cp010

0x9622,	// (0x0003c268) cell_vitu2_itu_pane_g1

0x9640,	// (0x0003c286) cell_vitu2_itu_pane_t1_ParamLimits

0x9640,	// (0x0003c286) cell_vitu2_itu_pane_t1

0x3592,	// (0x000361d8) cell_vitu2_itu_pane_t2_ParamLimits

0x3592,	// (0x000361d8) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x00042591) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x00042591) cell_vitu2_itu_pane_t

0xd8c7,	// (0x0004050d) bg_button_pane_cp011

0x9692,	// (0x0003c2d8) cell_vitu2_function_pane_g1

0x43bf,	// (0x00037005) main_myfav_hc_pane

0x9122,	// (0x0003bd68) popup_image3_note_pane_ParamLimits

0x9122,	// (0x0003bd68) popup_image3_note_pane

0x9130,	// (0x0003bd76) popup_image3_tool_bar_pane_ParamLimits

0x9130,	// (0x0003bd76) popup_image3_tool_bar_pane

0x3600,	// (0x00036246) cell_vitu2_itu_pane_t3_ParamLimits

0x3600,	// (0x00036246) cell_vitu2_itu_pane_t3

0x43bf,	// (0x00037005) bg_popup_trans_pane

0x0439,	// (0x0003307f) grid_image3_tool_bar_pane

0x0443,	// (0x00033089) bg_popup_trans_pane_g1

0xc968,	// (0x0003f5ae) bg_popup_trans_pane_g2

0x044b,	// (0x00033091) bg_popup_trans_pane_g3

0x0453,	// (0x00033099) bg_popup_trans_pane_g4

0x045b,	// (0x000330a1) bg_popup_trans_pane_g5

0x0463,	// (0x000330a9) bg_popup_trans_pane_g6

0x046b,	// (0x000330b1) bg_popup_trans_pane_g7

0x0473,	// (0x000330b9) bg_popup_trans_pane_g8

0xc948,	// (0x0003f58e) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00042598) bg_popup_trans_pane_g

0x047b,	// (0x000330c1) cell_image3_tool_bar_pane_ParamLimits

0x047b,	// (0x000330c1) cell_image3_tool_bar_pane

0xe87e,	// (0x000414c4) cell_image3_tool_bar_pane_g1

0x43bf,	// (0x00037005) bg_popup_trans_pane_cp1

0x048f,	// (0x000330d5) popup_image3_note_pane_t1

0x049d,	// (0x000330e3) popup_image3_note_pane_t2

0x04ab,	// (0x000330f1) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x000425ab) popup_image3_note_pane_t

0x04b9,	// (0x000330ff) popup_image3_note_pane_t3_copy1

0x96a6,	// (0x0003c2ec) bg_myfav_hc_instruction_pane_ParamLimits

0x96a6,	// (0x0003c2ec) bg_myfav_hc_instruction_pane

0x96be,	// (0x0003c304) cell_myfav_contact_pane_ParamLimits

0x96be,	// (0x0003c304) cell_myfav_contact_pane

0x96d8,	// (0x0003c31e) cell_myfav_contact_pane_cp1_ParamLimits

0x96d8,	// (0x0003c31e) cell_myfav_contact_pane_cp1

0x96f0,	// (0x0003c336) cell_myfav_contact_pane_cp2_ParamLimits

0x96f0,	// (0x0003c336) cell_myfav_contact_pane_cp2

0x9708,	// (0x0003c34e) cell_myfav_contact_pane_cp3_ParamLimits

0x9708,	// (0x0003c34e) cell_myfav_contact_pane_cp3

0x971f,	// (0x0003c365) cell_myfav_contact_pane_cp4_ParamLimits

0x971f,	// (0x0003c365) cell_myfav_contact_pane_cp4

0x9735,	// (0x0003c37b) cell_myfav_contact_pane_cp5_ParamLimits

0x9735,	// (0x0003c37b) cell_myfav_contact_pane_cp5

0x9749,	// (0x0003c38f) cell_myfav_contact_pane_cp6_ParamLimits

0x9749,	// (0x0003c38f) cell_myfav_contact_pane_cp6

0x975d,	// (0x0003c3a3) cell_myfav_contact_pane_cp7_ParamLimits

0x975d,	// (0x0003c3a3) cell_myfav_contact_pane_cp7

0x04c7,	// (0x0003310d) listscroll_gen_pane_cp05

0x9775,	// (0x0003c3bb) main_myfav_hc_pane_g1_ParamLimits

0x9775,	// (0x0003c3bb) main_myfav_hc_pane_g1

0x978d,	// (0x0003c3d3) main_myfav_hc_pane_g2_ParamLimits

0x978d,	// (0x0003c3d3) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x000425b2) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x000425b2) main_myfav_hc_pane_g

0x97bd,	// (0x0003c403) main_myfav_hc_pane_t1_ParamLimits

0x97bd,	// (0x0003c403) main_myfav_hc_pane_t1

0x04d0,	// (0x00033116) main_myfav_hc_pane_t2_ParamLimits

0x04d0,	// (0x00033116) main_myfav_hc_pane_t2

0x04e2,	// (0x00033128) main_myfav_hc_pane_t3_ParamLimits

0x04e2,	// (0x00033128) main_myfav_hc_pane_t3

0x97d4,	// (0x0003c41a) main_myfav_hc_pane_t4_ParamLimits

0x97d4,	// (0x0003c41a) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x000425b9) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x000425b9) main_myfav_hc_pane_t

0xe87e,	// (0x000414c4) bg_myfav_hc_instruction_pane_g1

0x04f4,	// (0x0003313a) cell_myfav_contact_pane_g1_ParamLimits

0x04f4,	// (0x0003313a) cell_myfav_contact_pane_g1

0x04f4,	// (0x0003313a) cell_myfav_contact_pane_g2_ParamLimits

0x04f4,	// (0x0003313a) cell_myfav_contact_pane_g2

0x0500,	// (0x00033146) cell_myfav_contact_pane_g3_ParamLimits

0x0500,	// (0x00033146) cell_myfav_contact_pane_g3

0xeb4a,	// (0x00041790) cell_myfav_contact_pane_g4_ParamLimits

0xeb4a,	// (0x00041790) cell_myfav_contact_pane_g4

0x050d,	// (0x00033153) cell_myfav_contact_pane_g5_ParamLimits

0x050d,	// (0x00033153) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x000425c4) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x000425c4) cell_myfav_contact_pane_g

0x97a5,	// (0x0003c3eb) main_myfav_hc_pane_g3_ParamLimits

0x97a5,	// (0x0003c3eb) main_myfav_hc_pane_g3

0x456d,	// (0x000371b3) popup_adpt_find_window

0x97fe,	// (0x0003c444) afind_page_pane_ParamLimits

0x97fe,	// (0x0003c444) afind_page_pane

0x980b,	// (0x0003c451) aid_size_cell_afind_ParamLimits

0x980b,	// (0x0003c451) aid_size_cell_afind

0x9825,	// (0x0003c46b) bg_popup_sub_pane_cp09_ParamLimits

0x9825,	// (0x0003c46b) bg_popup_sub_pane_cp09

0x9832,	// (0x0003c478) find_pane_cp01_ParamLimits

0x9832,	// (0x0003c478) find_pane_cp01

0x0519,	// (0x0003315f) grid_afind_control_pane_ParamLimits

0x0519,	// (0x0003315f) grid_afind_control_pane

0x983f,	// (0x0003c485) grid_afind_pane_ParamLimits

0x983f,	// (0x0003c485) grid_afind_pane

0x985b,	// (0x0003c4a1) cell_afind_pane_ParamLimits

0x985b,	// (0x0003c4a1) cell_afind_pane

0xe87e,	// (0x000414c4) afind_page_pane_g1

0x98a3,	// (0x0003c4e9) afind_page_pane_g2

0x98ac,	// (0x0003c4f2) afind_page_pane_g3

0x0002,

0xf989,	// (0x000425cf) afind_page_pane_g

0x98b5,	// (0x0003c4fb) afind_page_pane_t1

0x052d,	// (0x00033173) cell_afind_grid_control_pane_ParamLimits

0x052d,	// (0x00033173) cell_afind_grid_control_pane

0x01b4,	// (0x00032dfa) bg_button_pane_cp69_ParamLimits

0x01b4,	// (0x00032dfa) bg_button_pane_cp69

0x98cc,	// (0x0003c512) cell_afind_pane_g1_ParamLimits

0x98cc,	// (0x0003c512) cell_afind_pane_g1

0x98d9,	// (0x0003c51f) cell_afind_pane_t1_ParamLimits

0x98d9,	// (0x0003c51f) cell_afind_pane_t1

0xc763,	// (0x0003f3a9) bg_button_pane_cp72

0x053c,	// (0x00033182) cell_afind_grid_control_pane_g1

0x6f7a,	// (0x00039bc0) aid_image_placing_area_ParamLimits

0x6f7a,	// (0x00039bc0) aid_image_placing_area

0xee32,	// (0x00041a78) field_vitu_entry_pane_g1_ParamLimits

0xee32,	// (0x00041a78) field_vitu_entry_pane_g1

0xee3e,	// (0x00041a84) field_vitu_entry_pane_g2_ParamLimits

0xee3e,	// (0x00041a84) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x00042480) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x00042480) field_vitu_entry_pane_g

0x8a70,	// (0x0003b6b6) cell_vitu_itu_pane_g1_ParamLimits

0x8ab2,	// (0x0003b6f8) cell_vitu_itu_pane_t3_ParamLimits

0x8ab2,	// (0x0003b6f8) cell_vitu_itu_pane_t3

0x015a,	// (0x00032da0) mp4_progress_pane_t1_ParamLimits

0x0173,	// (0x00032db9) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00042515) mp4_progress_pane_t_ParamLimits

0x018c,	// (0x00032dd2) mup_progress_pane_cp04_ParamLimits

0x97e8,	// (0x0003c42e) main_myfav_hc_pane_t5_ParamLimits

0x97e8,	// (0x0003c42e) main_myfav_hc_pane_t5

0x4411,	// (0x00037057) aid_zoom_text_primary

0x456d,	// (0x000371b3) popup_adpt_find_window_ParamLimits

0xd8c7,	// (0x0004050d) main_cam_set_pane

0x928c,	// (0x0003bed2) cam4_zoom_pane_ParamLimits

0x928c,	// (0x0003bed2) cam4_zoom_pane

0x98eb,	// (0x0003c531) main_cam_set_pane_g1_ParamLimits

0x98eb,	// (0x0003c531) main_cam_set_pane_g1

0x98f9,	// (0x0003c53f) main_cam_set_pane_g2_ParamLimits

0x98f9,	// (0x0003c53f) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x000425d6) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x000425d6) main_cam_set_pane_g

0x9905,	// (0x0003c54b) main_cam_set_pane_t1_ParamLimits

0x9905,	// (0x0003c54b) main_cam_set_pane_t1

0x9921,	// (0x0003c567) main_cset_listscroll_pane_ParamLimits

0x9921,	// (0x0003c567) main_cset_listscroll_pane

0x994c,	// (0x0003c592) main_cset_slider_pane_ParamLimits

0x994c,	// (0x0003c592) main_cset_slider_pane

0x054d,	// (0x00033193) main_cset_list_pane_ParamLimits

0x054d,	// (0x00033193) main_cset_list_pane

0x055d,	// (0x000331a3) scroll_pane_cp028

0x996b,	// (0x0003c5b1) aid_area_touch_slider

0x9987,	// (0x0003c5cd) cset_slider_pane

0x99b1,	// (0x0003c5f7) main_cset_slider_pane_g1

0x99c6,	// (0x0003c60c) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x000425db) main_cset_slider_pane_g

0x0596,	// (0x000331dc) main_cset_slider_pane_t1

0x9a8e,	// (0x0003c6d4) main_cset_slider_pane_t2

0x9aa8,	// (0x0003c6ee) main_cset_slider_pane_t3

0x9ac2,	// (0x0003c708) main_cset_slider_pane_t4

0x9ae0,	// (0x0003c726) main_cset_slider_pane_t5

0x9b02,	// (0x0003c748) main_cset_slider_pane_t6

0x9b19,	// (0x0003c75f) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x00042600) main_cset_slider_pane_t

0x9c27,	// (0x0003c86d) cset_list_set_pane_ParamLimits

0x9c27,	// (0x0003c86d) cset_list_set_pane

0x9c44,	// (0x0003c88a) aid_position_infowindow_above

0x9c4c,	// (0x0003c892) aid_position_infowindow_below

0x364d,	// (0x00036293) cset_list_set_pane_g1_ParamLimits

0x364d,	// (0x00036293) cset_list_set_pane_g1

0x3659,	// (0x0003629f) cset_list_set_pane_g3_ParamLimits

0x3659,	// (0x0003629f) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0004261f) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0004261f) cset_list_set_pane_g

0x3668,	// (0x000362ae) cset_list_set_pane_t1_ParamLimits

0x3668,	// (0x000362ae) cset_list_set_pane_t1

0xd8c7,	// (0x0004050d) list_highlight_pane_cp021_ParamLimits

0xd8c7,	// (0x0004050d) list_highlight_pane_cp021

0xd116,	// (0x0003fd5c) cset_slider_pane_g1

0xd128,	// (0x0003fd6e) cset_slider_pane_g2

0xd11f,	// (0x0003fd65) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00042624) cset_slider_pane_g

0x9c54,	// (0x0003c89a) aid_area_touch_cam4_zoom

0x9c5c,	// (0x0003c8a2) cam4_zoom_cont_pane

0x9c64,	// (0x0003c8aa) cam4_zoom_pane_g1

0x9c6c,	// (0x0003c8b2) cam4_zoom_pane_g2

0x9c74,	// (0x0003c8ba) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0004262b) cam4_zoom_pane_g

0x1005,	// (0x00033c4b) cam4_zoom_cont_pane_g1

0x100e,	// (0x00033c54) cam4_zoom_cont_pane_g2

0x1017,	// (0x00033c5d) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x00042632) cam4_zoom_cont_pane_g

0x9179,	// (0x0003bdbf) call4_image_pane_ParamLimits

0x9179,	// (0x0003bdbf) call4_image_pane

0x01f2,	// (0x00032e38) call4_windows_conf_pane_ParamLimits

0x0231,	// (0x00032e77) popup_call4_audio_in_window_ParamLimits

0x0231,	// (0x00032e77) popup_call4_audio_in_window

0x43bf,	// (0x00037005) bg_popup_call2_act_pane_cp02

0x02a7,	// (0x00032eed) call4_list_conf_pane

0xe87e,	// (0x000414c4) call4_image_pane_g1

0xe87e,	// (0x000414c4) call4_image_pane_g2

0x0001,

0xf700,	// (0x00042346) call4_image_pane_g

0x0671,	// (0x000332b7) list_single_graphic_popup_conf4_pane_ParamLimits

0x0671,	// (0x000332b7) list_single_graphic_popup_conf4_pane

0x43bf,	// (0x00037005) list_highlight_pane_cp022

0x0684,	// (0x000332ca) list_single_graphic_popup_conf4_pane_g1

0xce07,	// (0x0003fa4d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00042639) list_single_graphic_popup_conf4_pane_g

0x068c,	// (0x000332d2) list_single_graphic_popup_conf4_pane_t1

0x5459,	// (0x0003809f) popup_vtel_slider_window_ParamLimits

0x5459,	// (0x0003809f) popup_vtel_slider_window

0x01a2,	// (0x00032de8) dialer2_ne_pane_t2_ParamLimits

0x01a2,	// (0x00032de8) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0004251a) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0004251a) dialer2_ne_pane_t

0xd8c7,	// (0x0004050d) bg_popup_sub_pane_cp010_ParamLimits

0xd8c7,	// (0x0004050d) bg_popup_sub_pane_cp010

0x9c7c,	// (0x0003c8c2) popup_vtel_slider_window_g1_ParamLimits

0x9c7c,	// (0x0003c8c2) popup_vtel_slider_window_g1

0x9c88,	// (0x0003c8ce) popup_vtel_slider_window_g2_ParamLimits

0x9c88,	// (0x0003c8ce) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0004263e) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0004263e) popup_vtel_slider_window_g

0x9cd0,	// (0x0003c916) vtel_slider_pane_ParamLimits

0x9cd0,	// (0x0003c916) vtel_slider_pane

0x9cdf,	// (0x0003c925) vtel_slider_pane_g1_ParamLimits

0x9cdf,	// (0x0003c925) vtel_slider_pane_g1

0x9cec,	// (0x0003c932) vtel_slider_pane_g2_ParamLimits

0x9cec,	// (0x0003c932) vtel_slider_pane_g2

0x9cf9,	// (0x0003c93f) vtel_slider_pane_g3_ParamLimits

0x9cf9,	// (0x0003c93f) vtel_slider_pane_g3

0x9cdf,	// (0x0003c925) vtel_slider_pane_g4_ParamLimits

0x9cdf,	// (0x0003c925) vtel_slider_pane_g4

0x9d06,	// (0x0003c94c) vtel_slider_pane_g5_ParamLimits

0x9d06,	// (0x0003c94c) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00042647) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00042647) vtel_slider_pane_g

0x43bf,	// (0x00037005) main_gallery2_pane

0x94c6,	// (0x0003c10c) aid_size_row_itut2_dropdow_list_ParamLimits

0x94c6,	// (0x0003c10c) aid_size_row_itut2_dropdow_list

0x9526,	// (0x0003c16c) grid_vitu2_function_top_pane_ParamLimits

0x9526,	// (0x0003c16c) grid_vitu2_function_top_pane

0x957c,	// (0x0003c1c2) popup_vitu2_dropdown_list_window_ParamLimits

0x957c,	// (0x0003c1c2) popup_vitu2_dropdown_list_window

0x959c,	// (0x0003c1e2) popup_vitu2_match_list_window

0x9d13,	// (0x0003c959) cell_vitu2_function_top_pane_ParamLimits

0x9d13,	// (0x0003c959) cell_vitu2_function_top_pane

0x9d33,	// (0x0003c979) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9d33,	// (0x0003c979) cell_vitu2_function_top_pane_cp01

0x9d51,	// (0x0003c997) cell_vitu2_function_top_wide_pane_ParamLimits

0x9d51,	// (0x0003c997) cell_vitu2_function_top_wide_pane

0xd8c7,	// (0x0004050d) bg_button_pane_cp012

0x9d6f,	// (0x0003c9b5) cell_vitu2_function_top_pane_g1

0x9d7e,	// (0x0003c9c4) bg_button_pane_cp013_ParamLimits

0x9d7e,	// (0x0003c9c4) bg_button_pane_cp013

0x9d9a,	// (0x0003c9e0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9d9a,	// (0x0003c9e0) cell_vitu2_function_top_wide_pane_g1

0x4650,	// (0x00037296) bg_popup_sub_pane_cp20

0x9db2,	// (0x0003c9f8) list_vitu2_match_list_pane

0x0443,	// (0x00033089) bg_popup_sub_pane_cp20_g1

0x044b,	// (0x00033091) bg_popup_sub_pane_cp20_g2

0xc968,	// (0x0003f5ae) bg_popup_sub_pane_cp20_g3

0x0453,	// (0x00033099) bg_popup_sub_pane_cp20_g4

0xc948,	// (0x0003f58e) bg_popup_sub_pane_cp20_g5

0x06cc,	// (0x00033312) bg_popup_sub_pane_cp20_g6

0x0463,	// (0x000330a9) bg_popup_sub_pane_cp20_g7

0x046b,	// (0x000330b1) bg_popup_sub_pane_cp20_g8

0x0473,	// (0x000330b9) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00042652) bg_popup_sub_pane_cp20_g

0x9dca,	// (0x0003ca10) list_vitu2_match_list_item_pane_ParamLimits

0x9dca,	// (0x0003ca10) list_vitu2_match_list_item_pane

0x9ddc,	// (0x0003ca22) list_vitu2_match_list_item_pane_t1

0x43bf,	// (0x00037005) bg_popup_sub_pane_cp21

0xcd0c,	// (0x0003f952) grid_vitu2_dropdown_list_pane

0x9dea,	// (0x0003ca30) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9dea,	// (0x0003ca30) cell_vitu2_dropdown_list_char_pane

0x9e0b,	// (0x0003ca51) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9e0b,	// (0x0003ca51) cell_vitu2_dropdown_list_ctrl_pane

0x0726,	// (0x0003336c) cell_vitu2_dropdown_list_char_pane_g1

0x071d,	// (0x00033363) cell_vitu2_dropdown_list_char_pane_g2

0x0714,	// (0x0003335a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0004266f) cell_vitu2_dropdown_list_char_pane_g

0x9e37,	// (0x0003ca7d) cell_vitu2_dropdown_list_char_pane_t1

0x9e45,	// (0x0003ca8b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9e45,	// (0x0003ca8b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9e55,	// (0x0003ca9b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9e55,	// (0x0003ca9b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9e66,	// (0x0003caac) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9e66,	// (0x0003caac) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9e76,	// (0x0003cabc) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9e76,	// (0x0003cabc) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeae5,	// (0x0004172b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeae5,	// (0x0004172b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00042676) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00042676) cell_vitu2_dropdown_list_ctrl_pane_g

0x9e92,	// (0x0003cad8) aid_size_cell_gallery2_ParamLimits

0x9e92,	// (0x0003cad8) aid_size_cell_gallery2

0x9ea0,	// (0x0003cae6) grid_gallery2_pane_ParamLimits

0x9ea0,	// (0x0003cae6) grid_gallery2_pane

0x9eaf,	// (0x0003caf5) scroll_pane_cp029_ParamLimits

0x9eaf,	// (0x0003caf5) scroll_pane_cp029

0x9ebb,	// (0x0003cb01) cell_gallery2_pane_ParamLimits

0x9ebb,	// (0x0003cb01) cell_gallery2_pane

0x072f,	// (0x00033375) cell_gallery2_pane_g2

0x9eec,	// (0x0003cb32) cell_gallery2_pane_g3

0x0739,	// (0x0003337f) cell_gallery2_pane_g4

0x0741,	// (0x00033387) cell_gallery2_pane_g5

0xcfe0,	// (0x0003fc26) grid_highlight_pane_cp10

0x959c,	// (0x0003c1e2) popup_vitu2_match_list_window_ParamLimits

0x95ae,	// (0x0003c1f4) popup_vitu2_query_window_ParamLimits

0x95ae,	// (0x0003c1f4) popup_vitu2_query_window

0x43bf,	// (0x00037005) bg_vitu2_candi_button_pane

0x0726,	// (0x0003336c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x071d,	// (0x00033363) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0714,	// (0x0003335a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x36d2,	// (0x00036318) bg_button_pane_cp015

0x9ef4,	// (0x0003cb3a) bg_button_pane_cp016

0x9f07,	// (0x0003cb4d) bg_button_pane_cp017

0xe42d,	// (0x00041073) bg_popup_sub_pane_cp22

0x0749,	// (0x0003338f) popup_vitu2_query_window_g1

0x3705,	// (0x0003634b) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x00042681) popup_vitu2_query_window_g

0x3722,	// (0x00036368) popup_vitu2_query_window_t1_ParamLimits

0x3722,	// (0x00036368) popup_vitu2_query_window_t1

0x3755,	// (0x0003639b) popup_vitu2_query_window_t2_ParamLimits

0x3755,	// (0x0003639b) popup_vitu2_query_window_t2

0x3767,	// (0x000363ad) popup_vitu2_query_window_t3_ParamLimits

0x3767,	// (0x000363ad) popup_vitu2_query_window_t3

0x9f2b,	// (0x0003cb71) popup_vitu2_query_window_t4_ParamLimits

0x9f2b,	// (0x0003cb71) popup_vitu2_query_window_t4

0x9f4c,	// (0x0003cb92) popup_vitu2_query_window_t5_ParamLimits

0x9f4c,	// (0x0003cb92) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x00042688) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x00042688) popup_vitu2_query_window_t

0x0545,	// (0x0003318b) main_cset_text_pane

0x996b,	// (0x0003c5b1) aid_area_touch_slider_ParamLimits

0x9987,	// (0x0003c5cd) cset_slider_pane_ParamLimits

0x99b1,	// (0x0003c5f7) main_cset_slider_pane_g1_ParamLimits

0x99c6,	// (0x0003c60c) main_cset_slider_pane_g2_ParamLimits

0x0566,	// (0x000331ac) main_cset_slider_pane_g3_ParamLimits

0x0566,	// (0x000331ac) main_cset_slider_pane_g3

0x99db,	// (0x0003c621) main_cset_slider_pane_g4_ParamLimits

0x99db,	// (0x0003c621) main_cset_slider_pane_g4

0x99ea,	// (0x0003c630) main_cset_slider_pane_g5_ParamLimits

0x99ea,	// (0x0003c630) main_cset_slider_pane_g5

0x99f8,	// (0x0003c63e) main_cset_slider_pane_g6_ParamLimits

0x99f8,	// (0x0003c63e) main_cset_slider_pane_g6

0xf995,	// (0x000425db) main_cset_slider_pane_g_ParamLimits

0x0596,	// (0x000331dc) main_cset_slider_pane_t1_ParamLimits

0x9a8e,	// (0x0003c6d4) main_cset_slider_pane_t2_ParamLimits

0x9aa8,	// (0x0003c6ee) main_cset_slider_pane_t3_ParamLimits

0x9ac2,	// (0x0003c708) main_cset_slider_pane_t4_ParamLimits

0x9ae0,	// (0x0003c726) main_cset_slider_pane_t5_ParamLimits

0x9b02,	// (0x0003c748) main_cset_slider_pane_t6_ParamLimits

0x9b19,	// (0x0003c75f) main_cset_slider_pane_t7_ParamLimits

0x9b47,	// (0x0003c78d) main_cset_slider_pane_t8_ParamLimits

0x9b47,	// (0x0003c78d) main_cset_slider_pane_t8

0x9b6f,	// (0x0003c7b5) main_cset_slider_pane_t9_ParamLimits

0x9b6f,	// (0x0003c7b5) main_cset_slider_pane_t9

0x9b97,	// (0x0003c7dd) main_cset_slider_pane_t10_ParamLimits

0x9b97,	// (0x0003c7dd) main_cset_slider_pane_t10

0x9bbf,	// (0x0003c805) main_cset_slider_pane_t11_ParamLimits

0x9bbf,	// (0x0003c805) main_cset_slider_pane_t11

0x9be9,	// (0x0003c82f) main_cset_slider_pane_t12_ParamLimits

0x9be9,	// (0x0003c82f) main_cset_slider_pane_t12

0x9c08,	// (0x0003c84e) main_cset_slider_pane_t13_ParamLimits

0x9c08,	// (0x0003c84e) main_cset_slider_pane_t13

0xf9ba,	// (0x00042600) main_cset_slider_pane_t_ParamLimits

0x43bf,	// (0x00037005) bg_popup_sub_pane_cp011

0x0755,	// (0x0003339b) main_cset_text_pane_g1

0x075d,	// (0x000333a3) main_cset_text_pane_t1

0x076b,	// (0x000333b1) main_cset_text_pane_t2

0x0779,	// (0x000333bf) main_cset_text_pane_t3

0x0787,	// (0x000333cd) main_cset_text_pane_t4

0x0795,	// (0x000333db) main_cset_text_pane_t5

0x07a3,	// (0x000333e9) main_cset_text_pane_t6

0x07b1,	// (0x000333f7) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00042697) main_cset_text_pane_t

0x43bf,	// (0x00037005) main_cam4_burst_pane

0x43bf,	// (0x00037005) main_cam5_pane

0xca61,	// (0x0003f6a7) bg_button_pane_cp019

0x98c3,	// (0x0003c509) bg_button_pane_cp020

0x0572,	// (0x000331b8) main_cset_slider_pane_g7_ParamLimits

0x0572,	// (0x000331b8) main_cset_slider_pane_g7

0x057e,	// (0x000331c4) main_cset_slider_pane_g8_ParamLimits

0x057e,	// (0x000331c4) main_cset_slider_pane_g8

0x9a0e,	// (0x0003c654) main_cset_slider_pane_g9_ParamLimits

0x9a0e,	// (0x0003c654) main_cset_slider_pane_g9

0x9a1a,	// (0x0003c660) main_cset_slider_pane_g10_ParamLimits

0x9a1a,	// (0x0003c660) main_cset_slider_pane_g10

0x9a26,	// (0x0003c66c) main_cset_slider_pane_g11_ParamLimits

0x9a26,	// (0x0003c66c) main_cset_slider_pane_g11

0x9a32,	// (0x0003c678) main_cset_slider_pane_g12_ParamLimits

0x9a32,	// (0x0003c678) main_cset_slider_pane_g12

0x9a3e,	// (0x0003c684) main_cset_slider_pane_g13_ParamLimits

0x9a3e,	// (0x0003c684) main_cset_slider_pane_g13

0x9a4c,	// (0x0003c692) main_cset_slider_pane_g14_ParamLimits

0x9a4c,	// (0x0003c692) main_cset_slider_pane_g14

0x9a5a,	// (0x0003c6a0) main_cset_slider_pane_g15_ParamLimits

0x9a5a,	// (0x0003c6a0) main_cset_slider_pane_g15

0x05c4,	// (0x0003320a) main_cset_slider_pane_t14_ParamLimits

0x05c4,	// (0x0003320a) main_cset_slider_pane_t14

0x05fd,	// (0x00033243) main_cset_slider_pane_t15_ParamLimits

0x05fd,	// (0x00033243) main_cset_slider_pane_t15

0x9f6d,	// (0x0003cbb3) aid_cam4_burst_size_cell_ParamLimits

0x9f6d,	// (0x0003cbb3) aid_cam4_burst_size_cell

0x9f89,	// (0x0003cbcf) grid_cam4_burst_pane_ParamLimits

0x9f89,	// (0x0003cbcf) grid_cam4_burst_pane

0x9fb9,	// (0x0003cbff) linegrid_cam4_burst_pane_ParamLimits

0x9fb9,	// (0x0003cbff) linegrid_cam4_burst_pane

0x9fdb,	// (0x0003cc21) scroll_pane_cp30_ParamLimits

0x9fdb,	// (0x0003cc21) scroll_pane_cp30

0x9fe7,	// (0x0003cc2d) cell_cam4_burst_pane_ParamLimits

0x9fe7,	// (0x0003cc2d) cell_cam4_burst_pane

0x07cb,	// (0x00033411) linegrid_cam4_burst_pane_g1_ParamLimits

0x07cb,	// (0x00033411) linegrid_cam4_burst_pane_g1

0xa023,	// (0x0003cc69) linegrid_cam4_burst_pane_g2_ParamLimits

0xa023,	// (0x0003cc69) linegrid_cam4_burst_pane_g2

0x07d8,	// (0x0003341e) linegrid_cam4_burst_pane_g3_ParamLimits

0x07d8,	// (0x0003341e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x000426a6) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x000426a6) linegrid_cam4_burst_pane_g

0xa034,	// (0x0003cc7a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa034,	// (0x0003cc7a) linegrid_cam4_burst_pane_g3_copy1

0x07e5,	// (0x0003342b) linegrid_cam4_burst_pane_g4_ParamLimits

0x07e5,	// (0x0003342b) linegrid_cam4_burst_pane_g4

0xa04e,	// (0x0003cc94) linegrid_cam4_burst_pane_g5_ParamLimits

0xa04e,	// (0x0003cc94) linegrid_cam4_burst_pane_g5

0xa05f,	// (0x0003cca5) linegrid_cam4_burst_pane_g6_ParamLimits

0xa05f,	// (0x0003cca5) linegrid_cam4_burst_pane_g6

0x07f2,	// (0x00033438) linegrid_cam4_burst_pane_g7_ParamLimits

0x07f2,	// (0x00033438) linegrid_cam4_burst_pane_g7

0xa070,	// (0x0003ccb6) cell_cam4_burst_pane_g1

0x080b,	// (0x00033451) main_cam5_pane_t1_ParamLimits

0x080b,	// (0x00033451) main_cam5_pane_t1

0x081d,	// (0x00033463) main_cam5_pane_t2_ParamLimits

0x081d,	// (0x00033463) main_cam5_pane_t2

0x082f,	// (0x00033475) main_cam5_pane_t3_ParamLimits

0x082f,	// (0x00033475) main_cam5_pane_t3

0x0841,	// (0x00033487) main_cam5_pane_t4_ParamLimits

0x0841,	// (0x00033487) main_cam5_pane_t4

0x0857,	// (0x0003349d) main_cam5_pane_t5_ParamLimits

0x0857,	// (0x0003349d) main_cam5_pane_t5

0x0869,	// (0x000334af) main_cam5_pane_t6_ParamLimits

0x0869,	// (0x000334af) main_cam5_pane_t6

0x087d,	// (0x000334c3) main_cam5_pane_t7_ParamLimits

0x087d,	// (0x000334c3) main_cam5_pane_t7

0x088f,	// (0x000334d5) main_cam5_pane_t8_ParamLimits

0x088f,	// (0x000334d5) main_cam5_pane_t8

0x08ab,	// (0x000334f1) main_cam5_pane_t9_ParamLimits

0x08ab,	// (0x000334f1) main_cam5_pane_t9

0x08bd,	// (0x00033503) main_cam5_pane_t10_ParamLimits

0x08bd,	// (0x00033503) main_cam5_pane_t10

0x08cf,	// (0x00033515) main_cam5_pane_t11_ParamLimits

0x08cf,	// (0x00033515) main_cam5_pane_t11

0x08e1,	// (0x00033527) main_cam5_pane_t12_ParamLimits

0x08e1,	// (0x00033527) main_cam5_pane_t12

0x08f6,	// (0x0003353c) main_cam5_pane_t13_ParamLimits

0x08f6,	// (0x0003353c) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x000426b2) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x000426b2) main_cam5_pane_t

0x4619,	// (0x0003725f) popup_scut_keymap_window_ParamLimits

0x4619,	// (0x0003725f) popup_scut_keymap_window

0xa083,	// (0x0003ccc9) aid_size_cell_brow_shortcut

0xcfe0,	// (0x0003fc26) bg_popup_window_pane_cp010

0xa08f,	// (0x0003ccd5) grid_scut_pane

0xa09b,	// (0x0003cce1) cell_scut_pane_ParamLimits

0xa09b,	// (0x0003cce1) cell_scut_pane

0xa0b2,	// (0x0003ccf8) cell_scut_pane_g1

0x0913,	// (0x00033559) cell_scut_pane_t1

0x0922,	// (0x00033568) cell_scut_pane_t2

0xa0bb,	// (0x0003cd01) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x000426cd) cell_scut_pane_t

0x80f0,	// (0x0003ad36) main_mup3_pane_g8_ParamLimits

0x80f0,	// (0x0003ad36) main_mup3_pane_g8

0x94d4,	// (0x0003c11a) area_vitu2_query_pane_ParamLimits

0x94d4,	// (0x0003c11a) area_vitu2_query_pane

0x36e4,	// (0x0003632a) input_focus_pane_cp08

0x0931,	// (0x00033577) area_vitu2_query_pane_g1

0x37e5,	// (0x0003642b) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x000426d4) area_vitu2_query_pane_g

0xa0c9,	// (0x0003cd0f) area_vitu2_query_pane_t1_ParamLimits

0xa0c9,	// (0x0003cd0f) area_vitu2_query_pane_t1

0xa0dd,	// (0x0003cd23) area_vitu2_query_pane_t2_ParamLimits

0xa0dd,	// (0x0003cd23) area_vitu2_query_pane_t2

0x37f6,	// (0x0003643c) area_vitu2_query_pane_t3_ParamLimits

0x37f6,	// (0x0003643c) area_vitu2_query_pane_t3

0x381e,	// (0x00036464) area_vitu2_query_pane_t4_ParamLimits

0x381e,	// (0x00036464) area_vitu2_query_pane_t4

0x3846,	// (0x0003648c) area_vitu2_query_pane_t5_ParamLimits

0x3846,	// (0x0003648c) area_vitu2_query_pane_t5

0x386e,	// (0x000364b4) area_vitu2_query_pane_t6_ParamLimits

0x386e,	// (0x000364b4) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x000426d9) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x000426d9) area_vitu2_query_pane_t

0xa0f1,	// (0x0003cd37) bg_button_pane_cp018

0xa0ff,	// (0x0003cd45) bg_button_pane_cp021

0x38ba,	// (0x00036500) bg_button_pane_cp022

0x38cb,	// (0x00036511) input_focus_pane_cp09

0x667b,	// (0x000392c1) aid_size_touch_mv_arrow_left

0x66a6,	// (0x000392ec) aid_size_touch_mv_arrow_right

0x9a72,	// (0x0003c6b8) main_cset_slider_pane_g16_ParamLimits

0x9a72,	// (0x0003c6b8) main_cset_slider_pane_g16

0x9a80,	// (0x0003c6c6) main_cset_slider_pane_g17_ParamLimits

0x9a80,	// (0x0003c6c6) main_cset_slider_pane_g17

0xa070,	// (0x0003ccb6) cell_cam4_burst_pane_g1_ParamLimits

0x43bf,	// (0x00037005) compa_mode_pane

0x9c94,	// (0x0003c8da) popup_vtel_slider_window_g3_ParamLimits

0x9c94,	// (0x0003c8da) popup_vtel_slider_window_g3

0x9ca8,	// (0x0003c8ee) popup_vtel_slider_window_g4_ParamLimits

0x9ca8,	// (0x0003c8ee) popup_vtel_slider_window_g4

0x9cbc,	// (0x0003c902) popup_vtel_slider_window_t1_ParamLimits

0x9cbc,	// (0x0003c902) popup_vtel_slider_window_t1

0x43bf,	// (0x00037005) main_cl_pane

0xe455,	// (0x0004109b) popup_imed_adjust2_window_ParamLimits

0xe42d,	// (0x00041073) bg_tb_trans_pane_cp05_ParamLimits

0xed67,	// (0x000419ad) popup_imed_adjust2_window_g1_ParamLimits

0xed76,	// (0x000419bc) popup_imed_adjust2_window_g2_ParamLimits

0xed76,	// (0x000419bc) popup_imed_adjust2_window_g2

0xed82,	// (0x000419c8) popup_imed_adjust2_window_g3_ParamLimits

0xed82,	// (0x000419c8) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00042444) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00042444) popup_imed_adjust2_window_g

0xed8e,	// (0x000419d4) popup_imed_adjust2_window_t1_ParamLimits

0xeda6,	// (0x000419ec) slider_imed_adjust_pane_ParamLimits

0xedba,	// (0x00041a00) slider_imed_adjust_pane_g1_ParamLimits

0xedca,	// (0x00041a10) slider_imed_adjust_pane_g2_ParamLimits

0xedda,	// (0x00041a20) slider_imed_adjust_pane_g3_ParamLimits

0xedeb,	// (0x00041a31) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0004244b) slider_imed_adjust_pane_g_ParamLimits

0x9235,	// (0x0003be7b) aid_touch_area_cam4_ParamLimits

0x9235,	// (0x0003be7b) aid_touch_area_cam4

0x9245,	// (0x0003be8b) battery_pane_cp01

0x92cc,	// (0x0003bf12) main_camera4_pane_g6_ParamLimits

0x92cc,	// (0x0003bf12) main_camera4_pane_g6

0x92ea,	// (0x0003bf30) main_camera4_pane_t2_ParamLimits

0x92ea,	// (0x0003bf30) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0004254e) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0004254e) main_camera4_pane_t

0x9371,	// (0x0003bfb7) aid_touch_area_vid4_ParamLimits

0x9371,	// (0x0003bfb7) aid_touch_area_vid4

0x93b1,	// (0x0003bff7) main_video4_pane_g5_ParamLimits

0x93b1,	// (0x0003bff7) main_video4_pane_g5

0x93d3,	// (0x0003c019) vid4_progress_pane_ParamLimits

0x93d3,	// (0x0003c019) vid4_progress_pane

0x058a,	// (0x000331d0) main_cset_slider_pane_g18_ParamLimits

0x058a,	// (0x000331d0) main_cset_slider_pane_g18

0x07ff,	// (0x00033445) cell_cam4_burst_pane_g2_ParamLimits

0x07ff,	// (0x00033445) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x000426ad) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x000426ad) cell_cam4_burst_pane_g

0xa10b,	// (0x0003cd51) bg_cl_pane_ParamLimits

0xa10b,	// (0x0003cd51) bg_cl_pane

0xa117,	// (0x0003cd5d) cl_header_pane_ParamLimits

0xa117,	// (0x0003cd5d) cl_header_pane

0xa123,	// (0x0003cd69) cl_listscroll_pane_ParamLimits

0xa123,	// (0x0003cd69) cl_listscroll_pane

0x09d9,	// (0x0003361f) bg_cl_pane_g1

0x09e1,	// (0x00033627) bg_cl_pane_g2

0x09e9,	// (0x0003362f) bg_cl_pane_g3

0x09f1,	// (0x00033637) bg_cl_pane_g4

0x09f9,	// (0x0003363f) bg_cl_pane_g5

0x0a01,	// (0x00033647) bg_cl_pane_g6

0x0a09,	// (0x0003364f) bg_cl_pane_g7

0x0a11,	// (0x00033657) bg_cl_pane_g8

0x0a19,	// (0x0003365f) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x000426e8) bg_cl_pane_g

0xa12f,	// (0x0003cd75) aid_height_cl_leading_ParamLimits

0xa12f,	// (0x0003cd75) aid_height_cl_leading

0xa13b,	// (0x0003cd81) aid_height_cl_text_ParamLimits

0xa13b,	// (0x0003cd81) aid_height_cl_text

0x4650,	// (0x00037296) bg_cl_header_pane_ParamLimits

0x4650,	// (0x00037296) bg_cl_header_pane

0xa153,	// (0x0003cd99) cl_header_pane_g1_ParamLimits

0xa153,	// (0x0003cd99) cl_header_pane_g1

0xa160,	// (0x0003cda6) cl_header_pane_t1_ParamLimits

0xa160,	// (0x0003cda6) cl_header_pane_t1

0x0a21,	// (0x00033667) cl_list_pane

0x055d,	// (0x000331a3) hc_scroll_pane_cp01

0xc948,	// (0x0003f58e) bg_cl_header_pane_g1

0x0443,	// (0x00033089) bg_cl_header_pane_g2

0xc968,	// (0x0003f5ae) bg_cl_header_pane_g3

0x0453,	// (0x00033099) bg_cl_header_pane_g4

0x044b,	// (0x00033091) bg_cl_header_pane_g5

0x06cc,	// (0x00033312) bg_cl_header_pane_g6

0x046b,	// (0x000330b1) bg_cl_header_pane_g7

0x0473,	// (0x000330b9) bg_cl_header_pane_g8

0x0463,	// (0x000330a9) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x000426fb) bg_cl_header_pane_g

0xa172,	// (0x0003cdb8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa172,	// (0x0003cdb8) hc_cl_list_double_graphic_heading_pane

0xa189,	// (0x0003cdcf) hc_cl_list_single_graphic_pane_ParamLimits

0xa189,	// (0x0003cdcf) hc_cl_list_single_graphic_pane

0xa1a9,	// (0x0003cdef) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa1a9,	// (0x0003cdef) hc_cl_list_single_graphic_pane_g1

0xa1b5,	// (0x0003cdfb) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa1b5,	// (0x0003cdfb) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0004270e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0004270e) hc_cl_list_single_graphic_pane_g

0xa1c9,	// (0x0003ce0f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa1c9,	// (0x0003ce0f) hc_cl_list_single_graphic_pane_t1

0xa1a9,	// (0x0003cdef) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa1a9,	// (0x0003cdef) hc_cl_list_double_graphic_heading_pane_g1

0xa1de,	// (0x0003ce24) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa1de,	// (0x0003ce24) hc_cl_list_double_graphic_heading_pane_g2

0xa1f2,	// (0x0003ce38) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa1f2,	// (0x0003ce38) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x00042713) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x00042713) hc_cl_list_double_graphic_heading_pane_g

0xa206,	// (0x0003ce4c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa206,	// (0x0003ce4c) hc_cl_list_double_graphic_heading_pane_t1

0xa21b,	// (0x0003ce61) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa21b,	// (0x0003ce61) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0004271a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0004271a) hc_cl_list_double_graphic_heading_pane_t

0xa238,	// (0x0003ce7e) vid4_progress_pane_g1

0xa248,	// (0x0003ce8e) vid4_progress_pane_g2

0xa258,	// (0x0003ce9e) vid4_progress_pane_g3

0x9339,	// (0x0003bf7f) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0004271f) vid4_progress_pane_g

0xa264,	// (0x0003ceaa) vid4_progress_pane_t1

0xa279,	// (0x0003cebf) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0004272a) vid4_progress_pane_t

0xa2a4,	// (0x0003ceea) wait_bar_pane_cp07

0xe667,	// (0x000412ad) blid_firmament_pane_ParamLimits

0xe6aa,	// (0x000412f0) popup_blid_sat_info2_window_g1

0xe6ce,	// (0x00041314) popup_blid_sat_info2_window_t3

0xe6dc,	// (0x00041322) popup_blid_sat_info2_window_t4

0xe6ea,	// (0x00041330) popup_blid_sat_info2_window_t5

0xe6f8,	// (0x0004133e) popup_blid_sat_info2_window_t6

0xe710,	// (0x00041356) popup_blid_sat_info2_window_t7

0xe71e,	// (0x00041364) popup_blid_sat_info2_window_t8

0xe72c,	// (0x00041372) popup_blid_sat_info2_window_t9

0xe73a,	// (0x00041380) popup_blid_sat_info2_window_t10

0xe7fe,	// (0x00041444) aid_firma_cardinal_ParamLimits

0xe812,	// (0x00041458) blid_firmament_pane_t1_ParamLimits

0xe829,	// (0x0004146f) blid_firmament_pane_t2_ParamLimits

0xe840,	// (0x00041486) blid_firmament_pane_t3_ParamLimits

0xe857,	// (0x0004149d) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0004233d) blid_firmament_pane_t_ParamLimits

0xe86e,	// (0x000414b4) blid_sat_info_pane_ParamLimits

0xd8c7,	// (0x0004050d) main_cam_set_pane_ParamLimits

0x888a,	// (0x0003b4d0) aid_size_cell_colour_35_ParamLimits

0x88a4,	// (0x0003b4ea) aid_size_cell_colour_112_ParamLimits

0x88bb,	// (0x0003b501) aid_size_cell_effect_ParamLimits

0xd8c7,	// (0x0004050d) bg_tb_trans_pane_cp02_ParamLimits

0xd8d5,	// (0x0004051b) heading_imed_pane_ParamLimits

0x88d5,	// (0x0003b51b) listscroll_imed_pane_ParamLimits

0xda4e,	// (0x00040694) popup_call2_audio_first_window_g5_ParamLimits

0xda4e,	// (0x00040694) popup_call2_audio_first_window_g5

0x8ff2,	// (0x0003bc38) aid_size_touch_image3_arrow_left_ParamLimits

0x8ff2,	// (0x0003bc38) aid_size_touch_image3_arrow_left

0x9008,	// (0x0003bc4e) aid_size_touch_image3_arrow_right_ParamLimits

0x9008,	// (0x0003bc4e) aid_size_touch_image3_arrow_right

0xa28f,	// (0x0003ced5) vid4_progress_pane_t3

0x8b7b,	// (0x0003b7c1) main_hwr_training_symbol_option_pane_ParamLimits

0x8b7b,	// (0x0003b7c1) main_hwr_training_symbol_option_pane

0xf054,	// (0x00041c9a) popup_hwr_training_preview_window_ParamLimits

0xf054,	// (0x00041c9a) popup_hwr_training_preview_window

0x8bdc,	// (0x0003b822) hwr_training_navi_pane_g5_ParamLimits

0x8bdc,	// (0x0003b822) hwr_training_navi_pane_g5

0x0423,	// (0x00033069) popup_char_count_window

0x4650,	// (0x00037296) bg_popup_sub_pane_cp20_ParamLimits

0x9db2,	// (0x0003c9f8) list_vitu2_match_list_pane_ParamLimits

0x9dbe,	// (0x0003ca04) vitu2_page_scroll_pane_ParamLimits

0x9dbe,	// (0x0003ca04) vitu2_page_scroll_pane

0x0afc,	// (0x00033742) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0afc,	// (0x00033742) list_single_hwr_training_symbol_option_pane

0x0b0f,	// (0x00033755) list_single_hwr_training_symbol_option_pane_g1

0x0b17,	// (0x0003375d) list_single_hwr_training_symbol_option_pane_t1

0x0b25,	// (0x0003376b) bg_button_pane_cp023

0x0b2e,	// (0x00033774) bg_button_pane_cp024

0xa2b4,	// (0x0003cefa) vitu2_page_scroll_pane_g1

0xa2bc,	// (0x0003cf02) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x00042731) vitu2_page_scroll_pane_g

0xa2c4,	// (0x0003cf0a) vitu2_page_scroll_pane_t1

0xe5c7,	// (0x0004120d) popup_char_count_window_g1

0x0b61,	// (0x000337a7) popup_char_count_window_g2

0x0b6a,	// (0x000337b0) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00042736) popup_char_count_window_g

0x0b73,	// (0x000337b9) popup_char_count_window_t1

0x43bf,	// (0x00037005) main_vded2_pane

0xed53,	// (0x00041999) aid_size_cell_imed_line

0xed5d,	// (0x000419a3) grid_imed_line_width_pane

0x9429,	// (0x0003c06f) vid4_indicators_pane_g4

0x0b81,	// (0x000337c7) cell_imed_line_width_pane_ParamLimits

0x0b81,	// (0x000337c7) cell_imed_line_width_pane

0x0b95,	// (0x000337db) cell_imed_line_width_pane_g1

0xe708,	// (0x0004134e) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0004273d) cell_imed_line_width_pane_g

0xa2d3,	// (0x0003cf19) main_vded2_pane_g1_ParamLimits

0xa2d3,	// (0x0003cf19) main_vded2_pane_g1

0xa2e0,	// (0x0003cf26) main_vded2_pane_g2_ParamLimits

0xa2e0,	// (0x0003cf26) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x00042742) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x00042742) main_vded2_pane_g

0xa2ee,	// (0x0003cf34) vded2_slider_pane_ParamLimits

0xa2ee,	// (0x0003cf34) vded2_slider_pane

0xa2fb,	// (0x0003cf41) aid_size_touch_vded2_end

0xa305,	// (0x0003cf4b) aid_size_touch_vded2_playhead

0x0b9e,	// (0x000337e4) aid_size_touch_vded2_start

0x0ba6,	// (0x000337ec) vded2_slider_bg_pane

0x0baf,	// (0x000337f5) vded2_slider_pane_g1

0x0bb8,	// (0x000337fe) vded2_slider_pane_g2

0xa30d,	// (0x0003cf53) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00042747) vded2_slider_pane_g

0x0bc0,	// (0x00033806) vded2_slider_bg_pane_g1

0x0bc9,	// (0x0003380f) vded2_slider_bg_pane_g2

0x0bd2,	// (0x00033818) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0004274e) vded2_slider_bg_pane_g

0x6cd7,	// (0x0003991d) aid_postcard_touch_down_pane_ParamLimits

0x6cd7,	// (0x0003991d) aid_postcard_touch_down_pane

0x6ce7,	// (0x0003992d) aid_postcard_touch_up_pane_ParamLimits

0x6ce7,	// (0x0003992d) aid_postcard_touch_up_pane

0x43bf,	// (0x00037005) main_blid2_pane

0xe43b,	// (0x00041081) popup_blid2_search_window

0x43bf,	// (0x00037005) blid2_gps_pane

0x43bf,	// (0x00037005) blid2_navig_pane

0x43bf,	// (0x00037005) blid2_search_pane

0x43bf,	// (0x00037005) blid2_tripm_pane

0xa316,	// (0x0003cf5c) blid2_search_pane_g1_ParamLimits

0xa316,	// (0x0003cf5c) blid2_search_pane_g1

0xa326,	// (0x0003cf6c) blid2_search_pane_t1_ParamLimits

0xa326,	// (0x0003cf6c) blid2_search_pane_t1

0xa338,	// (0x0003cf7e) aid_size_cell_blid2_gps_ParamLimits

0xa338,	// (0x0003cf7e) aid_size_cell_blid2_gps

0xa348,	// (0x0003cf8e) blid2_gps_pane_g1_ParamLimits

0xa348,	// (0x0003cf8e) blid2_gps_pane_g1

0xa354,	// (0x0003cf9a) grid_blid2_satellite_pane_ParamLimits

0xa354,	// (0x0003cf9a) grid_blid2_satellite_pane

0xa364,	// (0x0003cfaa) blid2_navig_pane_g1_ParamLimits

0xa364,	// (0x0003cfaa) blid2_navig_pane_g1

0xa370,	// (0x0003cfb6) blid2_navig_pane_t1_ParamLimits

0xa370,	// (0x0003cfb6) blid2_navig_pane_t1

0xa382,	// (0x0003cfc8) blid2_navig_pane_t2_ParamLimits

0xa382,	// (0x0003cfc8) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x00042755) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x00042755) blid2_navig_pane_t

0xa394,	// (0x0003cfda) blid2_navig_ring_pane_ParamLimits

0xa394,	// (0x0003cfda) blid2_navig_ring_pane

0xa3a4,	// (0x0003cfea) blid2_speed_pane_ParamLimits

0xa3a4,	// (0x0003cfea) blid2_speed_pane

0xa3b0,	// (0x0003cff6) blid2_tripm_pane_g1_ParamLimits

0xa3b0,	// (0x0003cff6) blid2_tripm_pane_g1

0xa3c0,	// (0x0003d006) blid2_tripm_pane_g2_ParamLimits

0xa3c0,	// (0x0003d006) blid2_tripm_pane_g2

0xa3cc,	// (0x0003d012) blid2_tripm_pane_g3_ParamLimits

0xa3cc,	// (0x0003d012) blid2_tripm_pane_g3

0xa3d8,	// (0x0003d01e) blid2_tripm_pane_g4_ParamLimits

0xa3d8,	// (0x0003d01e) blid2_tripm_pane_g4

0xa3e4,	// (0x0003d02a) blid2_tripm_pane_g5_ParamLimits

0xa3e4,	// (0x0003d02a) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0004275a) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0004275a) blid2_tripm_pane_g

0xa400,	// (0x0003d046) blid2_tripm_pane_t1_ParamLimits

0xa400,	// (0x0003d046) blid2_tripm_pane_t1

0xa414,	// (0x0003d05a) blid2_tripm_pane_t2_ParamLimits

0xa414,	// (0x0003d05a) blid2_tripm_pane_t2

0xa428,	// (0x0003d06e) blid2_tripm_pane_t3_ParamLimits

0xa428,	// (0x0003d06e) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x00042767) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x00042767) blid2_tripm_pane_t

0xa45a,	// (0x0003d0a0) cell_blid2_satellite_pane_ParamLimits

0xa45a,	// (0x0003d0a0) cell_blid2_satellite_pane

0xa474,	// (0x0003d0ba) cell_blid2_satellite_pane_g1

0x0bdb,	// (0x00033821) cell_blid2_satellite_pane_t1

0xe87e,	// (0x000414c4) blid2_speed_pane_g1

0x0be9,	// (0x0003382f) blid2_speed_pane_t1

0x0bf7,	// (0x0003383d) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x00042770) blid2_speed_pane_t

0xe87e,	// (0x000414c4) blid2_navig_ring_pane_g1

0xa47d,	// (0x0003d0c3) blid2_navig_ring_pane_g2

0xa485,	// (0x0003d0cb) blid2_navig_ring_pane_g3

0xa48d,	// (0x0003d0d3) blid2_navig_ring_pane_g4

0xa495,	// (0x0003d0db) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x00042775) blid2_navig_ring_pane_g

0x43bf,	// (0x00037005) bg_popup_window_pane_cp011

0x0c05,	// (0x0003384b) popup_blid2_search_window_g1

0x0c0d,	// (0x00033853) popup_blid2_search_window_t1

0x0c1b,	// (0x00033861) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x00042780) popup_blid2_search_window_t

0xc857,	// (0x0003f49d) main_browser_pane_g1

0xc558,	// (0x0003f19e) main_browser_pane_ParamLimits

0xd8c7,	// (0x0004050d) bg_button_pane_cp011_ParamLimits

0x9692,	// (0x0003c2d8) cell_vitu2_function_pane_g1_ParamLimits

0xe42d,	// (0x00041073) bg_popup_sub_pane_cp22_ParamLimits

0x36e4,	// (0x0003632a) input_focus_pane_cp08_ParamLimits

0x9f1a,	// (0x0003cb60) popup_vitu2_query_button_pane_ParamLimits

0x9f1a,	// (0x0003cb60) popup_vitu2_query_button_pane

0x36fb,	// (0x00036341) popup_vitu2_query_input_button_pane

0x0749,	// (0x0003338f) popup_vitu2_query_window_g1_ParamLimits

0x3705,	// (0x0003634b) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x00042681) popup_vitu2_query_window_g_ParamLimits

0x43bf,	// (0x00037005) bg_button_pane_cp026

0xa49d,	// (0x0003d0e3) popup_vitu2_query_input_button_pane_g1

0x43bf,	// (0x00037005) bg_button_pane_cp025

0x0c29,	// (0x0003386f) popup_vitu2_query_button_pane_t1

0x7e39,	// (0x0003aa7f) main_mp3_pane_t6

0x7e49,	// (0x0003aa8f) popup_slider_window_cp01

0x9320,	// (0x0003bf66) cam4_battery_pane

0x93ff,	// (0x0003c045) cam4_battery_pane_cp02

0xa230,	// (0x0003ce76) cam4_battery_pane_cp01

0xa230,	// (0x0003ce76) cam4_battery_pane_cp03

0xe87e,	// (0x000414c4) cam4_battery_pane_g1

0x0198,	// (0x00032dde) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x00042785) cam4_battery_pane_g

0xe748,	// (0x0004138e) popup_blid_sat_info2_window_t11

0x667b,	// (0x000392c1) aid_size_touch_mv_arrow_left_ParamLimits

0x66a6,	// (0x000392ec) aid_size_touch_mv_arrow_right_ParamLimits

0xcf40,	// (0x0003fb86) navi_pane_g1_ParamLimits

0x66cf,	// (0x00039315) navi_pane_g2_ParamLimits

0x66fd,	// (0x00039343) navi_pane_g3_ParamLimits

0xf409,	// (0x0004204f) navi_pane_g_ParamLimits

0x6757,	// (0x0003939d) navi_pane_mv_t1_ParamLimits

0x88e1,	// (0x0003b527) grid_imed_effect_pane_ParamLimits

0x5319,	// (0x00037f5f) aid_placing_vt_slider_lsc

0xc7a8,	// (0x0003f3ee) aid_placing_vt_slider_prt

0xd8c7,	// (0x0004050d) bg_tb_trans_pane_cp01_ParamLimits

0xea05,	// (0x0004164b) popup_image_details_window_g1_ParamLimits

0xea18,	// (0x0004165e) popup_image_details_window_g2_ParamLimits

0xea2d,	// (0x00041673) popup_image_details_window_g3_ParamLimits

0xea2d,	// (0x00041673) popup_image_details_window_g3

0xf73c,	// (0x00042382) popup_image_details_window_g_ParamLimits

0xea41,	// (0x00041687) popup_image_details_window_t1_ParamLimits

0xea53,	// (0x00041699) popup_image_details_window_t2_ParamLimits

0xea6c,	// (0x000416b2) popup_image_details_window_t3_ParamLimits

0xea80,	// (0x000416c6) popup_image_details_window_t4_ParamLimits

0xea9b,	// (0x000416e1) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00042389) popup_image_details_window_t_ParamLimits

0xa147,	// (0x0003cd8d) cl_header_name_pane_ParamLimits

0xa147,	// (0x0003cd8d) cl_header_name_pane

0xa4a5,	// (0x0003d0eb) cl_header_name_pane_t1_ParamLimits

0xa4a5,	// (0x0003d0eb) cl_header_name_pane_t1

0xa4bc,	// (0x0003d102) cl_header_name_pane_t2_ParamLimits

0xa4bc,	// (0x0003d102) cl_header_name_pane_t2

0xa4e6,	// (0x0003d12c) cl_header_name_pane_t3_ParamLimits

0xa4e6,	// (0x0003d12c) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0004278a) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0004278a) cl_header_name_pane_t

0x6728,	// (0x0003936e) navi_pane_mv_g2_ParamLimits

0x03af,	// (0x00032ff5) field_vitu2_entry_pane_g1_ParamLimits

0x03bb,	// (0x00033001) field_vitu2_entry_pane_g2_ParamLimits

0x03c7,	// (0x0003300d) field_vitu2_entry_pane_g3_ParamLimits

0x03c7,	// (0x0003300d) field_vitu2_entry_pane_g3

0xf93a,	// (0x00042580) field_vitu2_entry_pane_g_ParamLimits

0x9622,	// (0x0003c268) cell_vitu2_itu_pane_g1_ParamLimits

0x9632,	// (0x0003c278) cell_vitu2_itu_pane_g2_ParamLimits

0x9632,	// (0x0003c278) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0004258c) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0004258c) cell_vitu2_itu_pane_g

0xd8c7,	// (0x0004050d) bg_vkb2_func_pane_cp05_ParamLimits

0xd8c7,	// (0x0004050d) bg_vkb2_func_pane_cp05

0xd8c7,	// (0x0004050d) bg_vkb2_func_pane_cp03

0xd8c7,	// (0x0004050d) bg_vkb2_func_pane_cp04

0xd8c7,	// (0x0004050d) bg_vkb2_func_pane_cp10_ParamLimits

0xd8c7,	// (0x0004050d) bg_vkb2_func_pane_cp10

0x38ba,	// (0x00036500) bg_vkb2_func_pane_cp08

0xa0f1,	// (0x0003cd37) bg_vkb2_func_pane_cp06

0xa0ff,	// (0x0003cd45) bg_vkb2_func_pane_cp07

0x0b37,	// (0x0003377d) bg_vkb2_func_pane_cp11_ParamLimits

0x0b37,	// (0x0003377d) bg_vkb2_func_pane_cp11

0x0b4c,	// (0x00033792) bg_vkb2_func_pane_cp12_ParamLimits

0x0b4c,	// (0x00033792) bg_vkb2_func_pane_cp12

0x43bf,	// (0x00037005) bg_vkb2_func_pane_cp09

0x0443,	// (0x00033089) bg_vkb2_func_pane_g1

0xc968,	// (0x0003f5ae) bg_vkb2_func_pane_g2

0x044b,	// (0x00033091) bg_vkb2_func_pane_g3

0x0453,	// (0x00033099) bg_vkb2_func_pane_g4

0x06cc,	// (0x00033312) bg_vkb2_func_pane_g5

0x046b,	// (0x000330b1) bg_vkb2_func_pane_g6

0x0473,	// (0x000330b9) bg_vkb2_func_pane_g7

0x0463,	// (0x000330a9) bg_vkb2_func_pane_g8

0xc948,	// (0x0003f58e) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x00042791) bg_vkb2_func_pane_g

0xa3f2,	// (0x0003d038) blid2_tripm_pane_g6_ParamLimits

0xa3f2,	// (0x0003d038) blid2_tripm_pane_g6

0x0152,	// (0x00032d98) mp4_progress_pane_g1

0xa44e,	// (0x0003d094) blid2_tripm_values_pane_ParamLimits

0xa44e,	// (0x0003d094) blid2_tripm_values_pane

0xa50b,	// (0x0003d151) blid2_tripm_values_pane_t1

0xa519,	// (0x0003d15f) blid2_tripm_values_pane_t2

0xa527,	// (0x0003d16d) blid2_tripm_values_pane_t3

0xa535,	// (0x0003d17b) blid2_tripm_values_pane_t4

0xa543,	// (0x0003d189) blid2_tripm_values_pane_t5

0xa551,	// (0x0003d197) blid2_tripm_values_pane_t6

0xa55f,	// (0x0003d1a5) blid2_tripm_values_pane_t7

0xa56d,	// (0x0003d1b3) blid2_tripm_values_pane_t8

0xa57b,	// (0x0003d1c1) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x000427a4) blid2_tripm_values_pane_t

0x5359,	// (0x00037f9f) call_video_pane_t1_ParamLimits

0x537a,	// (0x00037fc0) call_video_pane_t2_ParamLimits

0xf292,	// (0x00041ed8) call_video_pane_t_ParamLimits

0x3446,	// (0x0003608c) msg_header_pane_g1_ParamLimits

0xd15b,	// (0x0003fda1) msg_header_pane_g2_ParamLimits

0xd15b,	// (0x0003fda1) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x000420f2) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x000420f2) msg_header_pane_g

0xc558,	// (0x0003f19e) main_clock2_pane_ParamLimits

0x8666,	// (0x0003b2ac) grid_clock2_toolbar_pane_ParamLimits

0x8666,	// (0x0003b2ac) grid_clock2_toolbar_pane

0x8666,	// (0x0003b2ac) listscroll_clock2_pane_ParamLimits

0x8666,	// (0x0003b2ac) listscroll_clock2_pane

0x8714,	// (0x0003b35a) main_clock2_pane_t3_ParamLimits

0x8714,	// (0x0003b35a) main_clock2_pane_t3

0x8726,	// (0x0003b36c) main_clock2_pane_t4_ParamLimits

0x8726,	// (0x0003b36c) main_clock2_pane_t4

0x0c37,	// (0x0003387d) cell_clock2_toolbar_pane

0x0c3f,	// (0x00033885) cell_clock2_toolbar_pane_cp01

0x0c3f,	// (0x00033885) cell_clock2_toolbar_pane_cp02

0x0c47,	// (0x0003388d) cell_clock2_toolbar_pane_cp03

0x0c4f,	// (0x00033895) list_clock2_pane

0xce93,	// (0x0003fad9) scroll_pane_cp10

0x0c57,	// (0x0003389d) list_single_clock2_pane_ParamLimits

0x0c57,	// (0x0003389d) list_single_clock2_pane

0xcfe0,	// (0x0003fc26) list_highlight_pane_cp08

0x0c64,	// (0x000338aa) list_single_clock2_pane_t1

0x0c72,	// (0x000338b8) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x000427b7) list_single_clock2_pane_t

0x43bf,	// (0x00037005) bg_button_pane_cp10

0x0c80,	// (0x000338c6) cell_clock2_toolbar_pane_g1

0x6c39,	// (0x0003987f) aid_main_viewer_pane_g1_ParamLimits

0x6c39,	// (0x0003987f) aid_main_viewer_pane_g1

0x6c45,	// (0x0003988b) aid_main_viewer_pane_g2_ParamLimits

0x6c45,	// (0x0003988b) aid_main_viewer_pane_g2

0x6c51,	// (0x00039897) aid_main_viewer_pane_g3_ParamLimits

0x6c51,	// (0x00039897) aid_main_viewer_pane_g3

0x6c62,	// (0x000398a8) aid_main_viewer_pane_g4_ParamLimits

0x6c62,	// (0x000398a8) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00042103) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00042103) aid_main_viewer_pane_g

0x73f2,	// (0x0003a038) main_calc_pane_ParamLimits

0x73ff,	// (0x0003a045) main_dialer2_pane_ParamLimits

0x43bf,	// (0x00037005) main_cam6_pane

0x43bf,	// (0x00037005) main_vid6_pane

0x8672,	// (0x0003b2b8) listscroll_gen_pane_cp06_ParamLimits

0x8672,	// (0x0003b2b8) listscroll_gen_pane_cp06

0x8738,	// (0x0003b37e) main_clock2_pane_t5_ParamLimits

0x8738,	// (0x0003b37e) main_clock2_pane_t5

0x8787,	// (0x0003b3cd) aid_call2_pane_cp10_ParamLimits

0x8799,	// (0x0003b3df) aid_call_pane_cp10_ParamLimits

0xcf15,	// (0x0003fb5b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf15,	// (0x0003fb5b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x87ab,	// (0x0003b3f1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x87ab,	// (0x0003b3f1) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf15,	// (0x0003fb5b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x00042439) popup_clock_analogue_window_cp10_g_ParamLimits

0x87c1,	// (0x0003b407) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8f9f,	// (0x0003bbe5) cell_dialer2_keypad_pane_g2_ParamLimits

0x8f9f,	// (0x0003bbe5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0004251f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0004251f) cell_dialer2_keypad_pane_g

0x8fbb,	// (0x0003bc01) cell_dialer2_keypad_pane_t1

0x9958,	// (0x0003c59e) main_cset_text2_pane_ParamLimits

0x9958,	// (0x0003c59e) main_cset_text2_pane

0x0931,	// (0x00033577) area_vitu2_query_pane_g1_ParamLimits

0x37e5,	// (0x0003642b) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x000426d4) area_vitu2_query_pane_g_ParamLimits

0x3896,	// (0x000364dc) area_vitu2_query_pane_t7_ParamLimits

0x3896,	// (0x000364dc) area_vitu2_query_pane_t7

0xa0f1,	// (0x0003cd37) bg_button_pane_cp018_ParamLimits

0xa0ff,	// (0x0003cd45) bg_button_pane_cp021_ParamLimits

0x38ba,	// (0x00036500) bg_button_pane_cp022_ParamLimits

0x38ba,	// (0x00036500) bg_vkb2_func_pane_cp08_ParamLimits

0xa0f1,	// (0x0003cd37) bg_vkb2_func_pane_cp06_ParamLimits

0xa0ff,	// (0x0003cd45) bg_vkb2_func_pane_cp07_ParamLimits

0x38cb,	// (0x00036511) input_focus_pane_cp09_ParamLimits

0xa589,	// (0x0003d1cf) cam6_autofocus_pane_ParamLimits

0xa589,	// (0x0003d1cf) cam6_autofocus_pane

0xa5ab,	// (0x0003d1f1) cam6_image_uncrop_pane_ParamLimits

0xa5ab,	// (0x0003d1f1) cam6_image_uncrop_pane

0xa5d8,	// (0x0003d21e) cam6_indi_pane_ParamLimits

0xa5d8,	// (0x0003d21e) cam6_indi_pane

0xa5f2,	// (0x0003d238) cam6_mode_pane_ParamLimits

0xa5f2,	// (0x0003d238) cam6_mode_pane

0xa606,	// (0x0003d24c) cam6_timer_pane_ParamLimits

0xa606,	// (0x0003d24c) cam6_timer_pane

0xa612,	// (0x0003d258) cam6_zoom_pane_ParamLimits

0xa612,	// (0x0003d258) cam6_zoom_pane

0x9381,	// (0x0003bfc7) cam6_mode_pane_g1_ParamLimits

0x9381,	// (0x0003bfc7) cam6_mode_pane_g1

0x9399,	// (0x0003bfdf) cam6_mode_pane_g2_ParamLimits

0x9399,	// (0x0003bfdf) cam6_mode_pane_g2

0x93a5,	// (0x0003bfeb) cam6_mode_pane_g3_ParamLimits

0x93a5,	// (0x0003bfeb) cam6_mode_pane_g3

0x93b1,	// (0x0003bff7) cam6_mode_pane_g4_ParamLimits

0x93b1,	// (0x0003bff7) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x000427bc) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x000427bc) cam6_mode_pane_g

0x0c96,	// (0x000338dc) bg_tb_trans_pane_cp08_ParamLimits

0x0c96,	// (0x000338dc) bg_tb_trans_pane_cp08

0x0ca4,	// (0x000338ea) cam6_battery_pane_ParamLimits

0x0ca4,	// (0x000338ea) cam6_battery_pane

0x0cba,	// (0x00033900) cam6_indi_pane_g1_ParamLimits

0x0cba,	// (0x00033900) cam6_indi_pane_g1

0x0ccc,	// (0x00033912) cam6_indi_pane_g2_ParamLimits

0x0ccc,	// (0x00033912) cam6_indi_pane_g2

0x0cde,	// (0x00033924) cam6_indi_pane_g3_ParamLimits

0x0cde,	// (0x00033924) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x000427c5) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x000427c5) cam6_indi_pane_g

0x0cf0,	// (0x00033936) cam6_indi_pane_t1_ParamLimits

0x0cf0,	// (0x00033936) cam6_indi_pane_t1

0x945e,	// (0x0003c0a4) cam6_autofocus_pane_g1

0x9466,	// (0x0003c0ac) cam6_autofocus_pane_g2

0x946e,	// (0x0003c0b4) cam6_autofocus_pane_g3

0x9476,	// (0x0003c0bc) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x000427cc) cam6_autofocus_pane_g

0x0d16,	// (0x0003395c) cam6_timer_pane_g1

0x0d1e,	// (0x00033964) cam6_timer_pane_t1

0x0d2c,	// (0x00033972) cam6_zoom_cont_pane

0x0d34,	// (0x0003397a) cam6_zoom_pane_g1

0x0d3c,	// (0x00033982) cam6_zoom_pane_g2

0xa62a,	// (0x0003d270) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x000427d5) cam6_zoom_pane_g

0xe87e,	// (0x000414c4) cam6_battery_pane_g1

0xe87e,	// (0x000414c4) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00042346) cam6_battery_pane_g

0x0d44,	// (0x0003398a) cam6_zoom_cont_pane_g1

0x0d4d,	// (0x00033993) cam6_zoom_cont_pane_g2

0x0d56,	// (0x0003399c) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x000427dc) cam6_zoom_cont_pane_g

0xa644,	// (0x0003d28a) cam6_mode_pane_cp_ParamLimits

0xa644,	// (0x0003d28a) cam6_mode_pane_cp

0xa612,	// (0x0003d258) cam6_zoom_pane_cp_ParamLimits

0xa612,	// (0x0003d258) cam6_zoom_pane_cp

0xa658,	// (0x0003d29e) vid6_image_uncrop_cif_pane_ParamLimits

0xa658,	// (0x0003d29e) vid6_image_uncrop_cif_pane

0xa684,	// (0x0003d2ca) vid6_image_uncrop_nhd_pane_ParamLimits

0xa684,	// (0x0003d2ca) vid6_image_uncrop_nhd_pane

0xa5ab,	// (0x0003d1f1) vid6_image_uncrop_vga_pane_ParamLimits

0xa5ab,	// (0x0003d1f1) vid6_image_uncrop_vga_pane

0xa6a1,	// (0x0003d2e7) vid6_image_uncrop_wvga_pane_ParamLimits

0xa6a1,	// (0x0003d2e7) vid6_image_uncrop_wvga_pane

0xa6be,	// (0x0003d304) vid6_indi_pane_ParamLimits

0xa6be,	// (0x0003d304) vid6_indi_pane

0x0c96,	// (0x000338dc) bg_tb_trans_pane_cp09_ParamLimits

0x0c96,	// (0x000338dc) bg_tb_trans_pane_cp09

0x0d6e,	// (0x000339b4) cam6_battery_pane_cp_ParamLimits

0x0d6e,	// (0x000339b4) cam6_battery_pane_cp

0x0d7a,	// (0x000339c0) vid6_indi_pane_g1_ParamLimits

0x0d7a,	// (0x000339c0) vid6_indi_pane_g1

0x0d8c,	// (0x000339d2) vid6_indi_pane_g2_ParamLimits

0x0d8c,	// (0x000339d2) vid6_indi_pane_g2

0x0d9e,	// (0x000339e4) vid6_indi_pane_g3_ParamLimits

0x0d9e,	// (0x000339e4) vid6_indi_pane_g3

0x0db3,	// (0x000339f9) vid6_indi_pane_g4_ParamLimits

0x0db3,	// (0x000339f9) vid6_indi_pane_g4

0x0dc8,	// (0x00033a0e) vid6_indi_pane_g5_ParamLimits

0x0dc8,	// (0x00033a0e) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x000427e3) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x000427e3) vid6_indi_pane_g

0x0de2,	// (0x00033a28) vid6_indi_pane_t1_ParamLimits

0x0de2,	// (0x00033a28) vid6_indi_pane_t1

0x0df8,	// (0x00033a3e) vid6_indi_pane_t2_ParamLimits

0x0df8,	// (0x00033a3e) vid6_indi_pane_t2

0x0e20,	// (0x00033a66) vid6_indi_pane_t3_ParamLimits

0x0e20,	// (0x00033a66) vid6_indi_pane_t3

0x0e48,	// (0x00033a8e) vid6_indi_pane_t4_ParamLimits

0x0e48,	// (0x00033a8e) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x000427ee) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x000427ee) vid6_indi_pane_t

0x0e6c,	// (0x00033ab2) wait_bar_pane_cp08

0xa6e1,	// (0x0003d327) main_cset_text2_pane_t1_ParamLimits

0xa6e1,	// (0x0003d327) main_cset_text2_pane_t1

0xa632,	// (0x0003d278) listscroll_gen_pane_cp06_t1_ParamLimits

0xa632,	// (0x0003d278) listscroll_gen_pane_cp06_t1

0x43bf,	// (0x00037005) main_cam6_set_pane

0xeae5,	// (0x0004172b) bg_tb_trans_pane_cp06_ParamLimits

0x9328,	// (0x0003bf6e) cam4_indicators_pane_g1_ParamLimits

0x9339,	// (0x0003bf7f) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0004255c) cam4_indicators_pane_g_ParamLimits

0x9357,	// (0x0003bf9d) cam4_indicators_pane_t1_ParamLimits

0xd8c7,	// (0x0004050d) bg_tb_trans_pane_cp07_ParamLimits

0x9328,	// (0x0003bf6e) vid4_indicators_pane_g1_ParamLimits

0x9407,	// (0x0003c04d) vid4_indicators_pane_g2_ParamLimits

0x9418,	// (0x0003c05e) vid4_indicators_pane_g3_ParamLimits

0x9429,	// (0x0003c06f) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0004256e) vid4_indicators_pane_g_ParamLimits

0x9445,	// (0x0003c08b) vid4_indicators_pane_t1_ParamLimits

0xa238,	// (0x0003ce7e) vid4_progress_pane_g1_ParamLimits

0xa248,	// (0x0003ce8e) vid4_progress_pane_g2_ParamLimits

0xa258,	// (0x0003ce9e) vid4_progress_pane_g3_ParamLimits

0x9339,	// (0x0003bf7f) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0004271f) vid4_progress_pane_g_ParamLimits

0xa264,	// (0x0003ceaa) vid4_progress_pane_t1_ParamLimits

0xa279,	// (0x0003cebf) vid4_progress_pane_t2_ParamLimits

0xa28f,	// (0x0003ced5) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0004272a) vid4_progress_pane_t_ParamLimits

0xa2a4,	// (0x0003ceea) wait_bar_pane_cp07_ParamLimits

0xa71f,	// (0x0003d365) main_cam6_set_pane_g2_ParamLimits

0xa71f,	// (0x0003d365) main_cam6_set_pane_g2

0xa72b,	// (0x0003d371) main_cset6_listscroll_pane_ParamLimits

0xa72b,	// (0x0003d371) main_cset6_listscroll_pane

0xa756,	// (0x0003d39c) main_cset6_slider_pane_ParamLimits

0xa756,	// (0x0003d39c) main_cset6_slider_pane

0xa762,	// (0x0003d3a8) main_cset6_text2_pane_ParamLimits

0xa762,	// (0x0003d3a8) main_cset6_text2_pane

0x0e7b,	// (0x00033ac1) main_cset6_text_pane

0x0e83,	// (0x00033ac9) main_cset_list_pane_copy1_ParamLimits

0x0e83,	// (0x00033ac9) main_cset_list_pane_copy1

0x0e93,	// (0x00033ad9) scroll_pane_cp028_copy1

0xa775,	// (0x0003d3bb) cset_list_set_pane_copy1

0xa78f,	// (0x0003d3d5) aid_position_infowindow_above_copy1

0xa797,	// (0x0003d3dd) aid_position_infowindow_below_copy1

0x391b,	// (0x00036561) cset_list_set_pane_g1_copy1

0x3659,	// (0x0003629f) cset_list_set_pane_g3_copy1_ParamLimits

0x3659,	// (0x0003629f) cset_list_set_pane_g3_copy1

0x3668,	// (0x000362ae) cset_list_set_pane_t1_copy1_ParamLimits

0x3668,	// (0x000362ae) cset_list_set_pane_t1_copy1

0xd8c7,	// (0x0004050d) list_highlight_pane_cp021_copy1_ParamLimits

0xd8c7,	// (0x0004050d) list_highlight_pane_cp021_copy1

0x0ec8,	// (0x00033b0e) cset6_slider_pane_ParamLimits

0x0ec8,	// (0x00033b0e) cset6_slider_pane

0x0ef4,	// (0x00033b3a) main_cset6_slider_pane_g1_ParamLimits

0x0ef4,	// (0x00033b3a) main_cset6_slider_pane_g1

0xa79f,	// (0x0003d3e5) main_cset6_slider_pane_g2_ParamLimits

0xa79f,	// (0x0003d3e5) main_cset6_slider_pane_g2

0x0572,	// (0x000331b8) main_cset6_slider_pane_g3_ParamLimits

0x0572,	// (0x000331b8) main_cset6_slider_pane_g3

0xa7c7,	// (0x0003d40d) main_cset6_slider_pane_g4_ParamLimits

0xa7c7,	// (0x0003d40d) main_cset6_slider_pane_g4

0xa7d3,	// (0x0003d419) main_cset6_slider_pane_g5_ParamLimits

0xa7d3,	// (0x0003d419) main_cset6_slider_pane_g5

0x0572,	// (0x000331b8) main_cset6_slider_pane_g7_ParamLimits

0x0572,	// (0x000331b8) main_cset6_slider_pane_g7

0x057e,	// (0x000331c4) main_cset6_slider_pane_g8_ParamLimits

0x057e,	// (0x000331c4) main_cset6_slider_pane_g8

0xa7e1,	// (0x0003d427) main_cset6_slider_pane_g9_ParamLimits

0xa7e1,	// (0x0003d427) main_cset6_slider_pane_g9

0xa7ed,	// (0x0003d433) main_cset6_slider_pane_g10_ParamLimits

0xa7ed,	// (0x0003d433) main_cset6_slider_pane_g10

0xa7c7,	// (0x0003d40d) main_cset6_slider_pane_g11_ParamLimits

0xa7c7,	// (0x0003d40d) main_cset6_slider_pane_g11

0xa7f9,	// (0x0003d43f) main_cset6_slider_pane_g12_ParamLimits

0xa7f9,	// (0x0003d43f) main_cset6_slider_pane_g12

0xa805,	// (0x0003d44b) main_cset6_slider_pane_g13_ParamLimits

0xa805,	// (0x0003d44b) main_cset6_slider_pane_g13

0xa813,	// (0x0003d459) main_cset6_slider_pane_g14_ParamLimits

0xa813,	// (0x0003d459) main_cset6_slider_pane_g14

0xa821,	// (0x0003d467) main_cset6_slider_pane_g15_ParamLimits

0xa821,	// (0x0003d467) main_cset6_slider_pane_g15

0xa7d3,	// (0x0003d419) main_cset6_slider_pane_g16_ParamLimits

0xa7d3,	// (0x0003d419) main_cset6_slider_pane_g16

0xa839,	// (0x0003d47f) main_cset6_slider_pane_g17_ParamLimits

0xa839,	// (0x0003d47f) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x000427f7) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x000427f7) main_cset6_slider_pane_g

0x0f1c,	// (0x00033b62) main_cset6_slider_pane_t1_ParamLimits

0x0f1c,	// (0x00033b62) main_cset6_slider_pane_t1

0xa847,	// (0x0003d48d) main_cset6_slider_pane_t2_ParamLimits

0xa847,	// (0x0003d48d) main_cset6_slider_pane_t2

0xa872,	// (0x0003d4b8) main_cset6_slider_pane_t3_ParamLimits

0xa872,	// (0x0003d4b8) main_cset6_slider_pane_t3

0xa89d,	// (0x0003d4e3) main_cset6_slider_pane_t4_ParamLimits

0xa89d,	// (0x0003d4e3) main_cset6_slider_pane_t4

0xa8ca,	// (0x0003d510) main_cset6_slider_pane_t5_ParamLimits

0xa8ca,	// (0x0003d510) main_cset6_slider_pane_t5

0x0f5d,	// (0x00033ba3) main_cset6_slider_pane_t7_ParamLimits

0x0f5d,	// (0x00033ba3) main_cset6_slider_pane_t7

0xa8f7,	// (0x0003d53d) main_cset6_slider_pane_t8_ParamLimits

0xa8f7,	// (0x0003d53d) main_cset6_slider_pane_t8

0xa91b,	// (0x0003d561) main_cset6_slider_pane_t9_ParamLimits

0xa91b,	// (0x0003d561) main_cset6_slider_pane_t9

0xa93f,	// (0x0003d585) main_cset6_slider_pane_t10_ParamLimits

0xa93f,	// (0x0003d585) main_cset6_slider_pane_t10

0xa963,	// (0x0003d5a9) main_cset6_slider_pane_t11_ParamLimits

0xa963,	// (0x0003d5a9) main_cset6_slider_pane_t11

0x0f93,	// (0x00033bd9) main_cset6_slider_pane_t14_ParamLimits

0x0f93,	// (0x00033bd9) main_cset6_slider_pane_t14

0x0fcc,	// (0x00033c12) main_cset6_slider_pane_t15_ParamLimits

0x0fcc,	// (0x00033c12) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0004281c) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0004281c) main_cset6_slider_pane_t

0x1005,	// (0x00033c4b) cset_slider_pane_g1_copy1

0x100e,	// (0x00033c54) cset_slider_pane_g2_copy1

0x1017,	// (0x00033c5d) cset_slider_pane_g3_copy1

0x43bf,	// (0x00037005) bg_popup_sub_pane_cp011_copy1

0x0755,	// (0x0003339b) main_cset_text_pane_g1_copy1

0x075d,	// (0x000333a3) main_cset_text_pane_t1_copy1

0x076b,	// (0x000333b1) main_cset_text_pane_t2_copy1

0x0779,	// (0x000333bf) main_cset_text_pane_t3_copy1

0x0787,	// (0x000333cd) main_cset_text_pane_t4_copy1

0x0795,	// (0x000333db) main_cset_text_pane_t5_copy1

0x07a3,	// (0x000333e9) main_cset_text_pane_t6_copy1

0x07b1,	// (0x000333f7) main_cset_text_pane_t7_copy1

0xa989,	// (0x0003d5cf) main_cset_text2_pane_t1_copy1

0x43bf,	// (0x00037005) main_ncimui_pane

0x743e,	// (0x0003a084) popup_query_ncimui_window_ParamLimits

0x743e,	// (0x0003a084) popup_query_ncimui_window

0x350b,	// (0x00036151) field_cale_ev2_pane_g4_ParamLimits

0x350b,	// (0x00036151) field_cale_ev2_pane_g4

0x8cbd,	// (0x0003b903) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8cbd,	// (0x0003b903) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x000424fa) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x000424fa) cell_video_dialer_keypad_pane_g

0x8cd5,	// (0x0003b91b) cell_video_dialer_keypad_pane_t1

0x43bf,	// (0x00037005) bg_popup_window_pane_cp012

0xcd63,	// (0x0003f9a9) heading_pane_cp06

0x110f,	// (0x00033d55) ncim_query_content_pane

0x43bf,	// (0x00037005) bg_popup_heading_pane_cp01

0x1117,	// (0x00033d5d) ncim_heading_pane_t1

0x1125,	// (0x00033d6b) ncim_indicator_popup_pane

0x1137,	// (0x00033d7d) ncim_query_button_pane

0x114b,	// (0x00033d91) ncim_query_content_pane_t1

0x115d,	// (0x00033da3) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0004285b) ncim_query_content_pane_t

0x1197,	// (0x00033ddd) ncim_query_list_pane

0x11a9,	// (0x00033def) ncim_query_popup_pane

0x1125,	// (0x00033d6b) ncim_indicator_popup_pane_ParamLimits

0xaab6,	// (0x0003d6fc) ncim_query_content_pane_g1_ParamLimits

0xaab6,	// (0x0003d6fc) ncim_query_content_pane_g1

0x114b,	// (0x00033d91) ncim_query_content_pane_t1_ParamLimits

0x115d,	// (0x00033da3) ncim_query_content_pane_t2_ParamLimits

0xaac2,	// (0x0003d708) ncim_query_content_pane_t3_ParamLimits

0xaac2,	// (0x0003d708) ncim_query_content_pane_t3

0xaadf,	// (0x0003d725) ncim_query_content_pane_t4_ParamLimits

0xaadf,	// (0x0003d725) ncim_query_content_pane_t4

0xaafc,	// (0x0003d742) ncim_query_content_pane_t5_ParamLimits

0xaafc,	// (0x0003d742) ncim_query_content_pane_t5

0x116f,	// (0x00033db5) ncim_query_content_pane_t6_ParamLimits

0x116f,	// (0x00033db5) ncim_query_content_pane_t6

0xfc15,	// (0x0004285b) ncim_query_content_pane_t_ParamLimits

0x1197,	// (0x00033ddd) ncim_query_list_pane_ParamLimits

0x11a9,	// (0x00033def) ncim_query_popup_pane_ParamLimits

0x11bd,	// (0x00033e03) wait_bar_pane_cp04

0x43bf,	// (0x00037005) input_focus_pane_cp011

0x11c5,	// (0x00033e0b) ncim_query_popup_pane_t1

0x11d3,	// (0x00033e19) ncim_list_query_list_pane_ParamLimits

0x11d3,	// (0x00033e19) ncim_list_query_list_pane

0x43bf,	// (0x00037005) bg_button_pane_cp027

0x11e6,	// (0x00033e2c) ncim_query_button_pane_g1

0x43bf,	// (0x00037005) list_highlight_pane_cp012

0x11f0,	// (0x00033e36) ncim_list_query_list_pane_g1

0x11f8,	// (0x00033e3e) ncim_list_query_list_pane_t1

0x9348,	// (0x0003bf8e) cam4_indicators_pane_g3_ParamLimits

0x9348,	// (0x0003bf8e) cam4_indicators_pane_g3

0x9435,	// (0x0003c07b) vid4_indicators_pane_g5_ParamLimits

0x9435,	// (0x0003c07b) vid4_indicators_pane_g5

0x9348,	// (0x0003bf8e) vid4_progress_pane_g5_ParamLimits

0x9348,	// (0x0003bf8e) vid4_progress_pane_g5

0xa9cf,	// (0x0003d615) main_ncimui_pane_g1

0xaa25,	// (0x0003d66b) ncimui_group_query_pane_ParamLimits

0xaa25,	// (0x0003d66b) ncimui_group_query_pane

0xaa61,	// (0x0003d6a7) ncimui_list_pane_ParamLimits

0xaa61,	// (0x0003d6a7) ncimui_list_pane

0xaa82,	// (0x0003d6c8) ncimui_text_pane_ParamLimits

0xaa82,	// (0x0003d6c8) ncimui_text_pane

0xab19,	// (0x0003d75f) ncimui_text_pane_t1_ParamLimits

0xab19,	// (0x0003d75f) ncimui_text_pane_t1

0x1206,	// (0x00033e4c) ncimui_list_single_graphic_pane_ParamLimits

0x1206,	// (0x00033e4c) ncimui_list_single_graphic_pane

0xab38,	// (0x0003d77e) ncimui_query_pane_ParamLimits

0xab38,	// (0x0003d77e) ncimui_query_pane

0x43bf,	// (0x00037005) list_highlight_pane_cp013

0x1216,	// (0x00033e5c) ncim_list_query_list_pane_t1_copy1

0x11f0,	// (0x00033e36) ncim_list_single_graphic_pane_g1

0x1224,	// (0x00033e6a) ncim_query_button_pane_cp01

0x1230,	// (0x00033e76) ncim_query_entry_pane_ParamLimits

0x1230,	// (0x00033e76) ncim_query_entry_pane

0x1243,	// (0x00033e89) ncimui_query_pane_g1

0x124f,	// (0x00033e95) ncimui_query_pane_t1_ParamLimits

0x124f,	// (0x00033e95) ncimui_query_pane_t1

0xd8c7,	// (0x0004050d) input_focus_pane_cp012

0x1268,	// (0x00033eae) ncim_query_entry_pane_t1

0xc558,	// (0x0003f19e) main_im_pane_ParamLimits

0xd8c7,	// (0x0004050d) main_mobtv_pane_ParamLimits

0xd8c7,	// (0x0004050d) main_mobtv_pane

0xa7e1,	// (0x0003d427) main_cset6_slider_pane_g18_ParamLimits

0xa7e1,	// (0x0003d427) main_cset6_slider_pane_g18

0xa805,	// (0x0003d44b) main_cset6_slider_pane_g19_ParamLimits

0xa805,	// (0x0003d44b) main_cset6_slider_pane_g19

0x03c7,	// (0x0003300d) bg_main_mobtv_pane_ParamLimits

0x03c7,	// (0x0003300d) bg_main_mobtv_pane

0xab4b,	// (0x0003d791) main_mobtv_info_pane

0xab56,	// (0x0003d79c) main_mobtv_loading_pane_ParamLimits

0xab56,	// (0x0003d79c) main_mobtv_loading_pane

0x1288,	// (0x00033ece) main_mobtv_pg_channel_list_pane

0x1292,	// (0x00033ed8) main_mobtv_pg_hdr_pane

0xab63,	// (0x0003d7a9) main_mobtv_programe_curr_pane_ParamLimits

0xab63,	// (0x0003d7a9) main_mobtv_programe_curr_pane

0xab70,	// (0x0003d7b6) main_mobtv_programe_next_pane_ParamLimits

0xab70,	// (0x0003d7b6) main_mobtv_programe_next_pane

0x129b,	// (0x00033ee1) popup_mobtv_noti_window

0xe87e,	// (0x000414c4) main_tv_pg_hdr_pane_g1

0x12a3,	// (0x00033ee9) main_tv_pg_hdr_pane_g2

0x12ab,	// (0x00033ef1) main_tv_pg_hdr_pane_g3

0x12b3,	// (0x00033ef9) main_tv_pg_hdr_pane_g4

0x12bb,	// (0x00033f01) main_tv_pg_hdr_pane_g5

0x12c5,	// (0x00033f0b) main_tv_pg_hdr_pane_g6

0x12cf,	// (0x00033f15) main_tv_pg_hdr_pane_g7

0x12d9,	// (0x00033f1f) main_tv_pg_hdr_pane_g8

0x12e3,	// (0x00033f29) main_tv_pg_hdr_pane_g9

0x12ed,	// (0x00033f33) main_tv_pg_hdr_pane_g10

0x12f7,	// (0x00033f3d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x00042868) main_tv_pg_hdr_pane_g

0x1301,	// (0x00033f47) main_tv_pg_hdr_pane_t1

0x130f,	// (0x00033f55) main_tv_pg_hdr_pane_t2

0x131d,	// (0x00033f63) main_tv_pg_hdr_pane_t3

0x132d,	// (0x00033f73) main_tv_pg_hdr_pane_t4

0x133d,	// (0x00033f83) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0004287f) main_tv_pg_hdr_pane_t

0x134d,	// (0x00033f93) single_mobtv_pg_channel_pane_ParamLimits

0x134d,	// (0x00033f93) single_mobtv_pg_channel_pane

0x135f,	// (0x00033fa5) single_mobtv_pg_channel_table_pane

0x1368,	// (0x00033fae) single_mobtv_pg_channel_thumb_pane

0x1371,	// (0x00033fb7) single_tv_pg_channel_pane_g1

0x137a,	// (0x00033fc0) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0004288a) single_tv_pg_channel_pane_g

0xeae5,	// (0x0004172b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeae5,	// (0x0004172b) bg_single_mobtv_pg_channel_thumb_pane

0x1383,	// (0x00033fc9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x1383,	// (0x00033fc9) single_mobtv_pg_channel_thumb_pane_g1

0x1391,	// (0x00033fd7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1391,	// (0x00033fd7) single_mobtv_pg_channel_thumb_pane_g2

0x139d,	// (0x00033fe3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x139d,	// (0x00033fe3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0004288f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0004288f) single_mobtv_pg_channel_thumb_pane_g

0x13a9,	// (0x00033fef) single_mobtv_pg_channel_thumb_pane_t1

0x13b7,	// (0x00033ffd) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x00042896) single_mobtv_pg_channel_thumb_pane_t

0xe87e,	// (0x000414c4) bg_single_mobtv_pg_channel_table_pane_g1

0xe87e,	// (0x000414c4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00042346) bg_single_mobtv_pg_channel_table_pane_g

0x13c5,	// (0x0003400b) single_mobtv_pg_channel_table_pane_t1

0x13d3,	// (0x00034019) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0004289b) single_mobtv_pg_channel_table_pane_t

0xab85,	// (0x0003d7cb) main_mobtv_info_pane_g1_ParamLimits

0xab85,	// (0x0003d7cb) main_mobtv_info_pane_g1

0xaba1,	// (0x0003d7e7) main_mobtv_info_pane_t1_ParamLimits

0xaba1,	// (0x0003d7e7) main_mobtv_info_pane_t1

0xac19,	// (0x0003d85f) main_mobtv_info_pane_t2_ParamLimits

0xac19,	// (0x0003d85f) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x000428a5) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x000428a5) main_mobtv_info_pane_t

0xaca8,	// (0x0003d8ee) wait_bar_pane_cp05

0xacba,	// (0x0003d900) main_mobtv_loading_pane_g1_ParamLimits

0xacba,	// (0x0003d900) main_mobtv_loading_pane_g1

0xacc8,	// (0x0003d90e) main_mobtv_loading_pane_g2_ParamLimits

0xacc8,	// (0x0003d90e) main_mobtv_loading_pane_g2

0xacd4,	// (0x0003d91a) main_mobtv_loading_pane_g3_ParamLimits

0xacd4,	// (0x0003d91a) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x000428ac) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x000428ac) main_mobtv_loading_pane_g

0x13e1,	// (0x00034027) main_mobtv_loading_pane_t1_ParamLimits

0x13e1,	// (0x00034027) main_mobtv_loading_pane_t1

0x13f9,	// (0x0003403f) main_mobtv_loading_pane_t2_ParamLimits

0x13f9,	// (0x0003403f) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x000428b3) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x000428b3) main_mobtv_loading_pane_t

0xace2,	// (0x0003d928) wait_bar_pane_cp06_ParamLimits

0xace2,	// (0x0003d928) wait_bar_pane_cp06

0x141d,	// (0x00034063) main_mobtv_programe_curr_pane_t1

0x142b,	// (0x00034071) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x000428b8) main_mobtv_programe_curr_pane_t

0x1439,	// (0x0003407f) main_mobtv_programe_next_pane_t1

0x1447,	// (0x0003408d) main_mobtv_programe_next_pane_t2

0x1455,	// (0x0003409b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x000428bd) main_mobtv_programe_next_pane_t

0x43bf,	// (0x00037005) bg_popup_mobtv_noti_window_pane

0x1463,	// (0x000340a9) popup_mobtv_noti_window_g1

0x146b,	// (0x000340b1) popup_mobtv_noti_window_t1

0x1479,	// (0x000340bf) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x000428c4) popup_mobtv_noti_window_t

0xe87e,	// (0x000414c4) bg_popup_mobtv_noti_window_pane_g1

0x43bf,	// (0x00037005) sc_clock_pane

0x43bf,	// (0x00037005) main_fs_bigclock_pane

0xa43c,	// (0x0003d082) blid2_tripm_pane_t4_ParamLimits

0xa43c,	// (0x0003d082) blid2_tripm_pane_t4

0xacee,	// (0x0003d934) sc_clock_pane_g1_ParamLimits

0xacee,	// (0x0003d934) sc_clock_pane_g1

0xacfc,	// (0x0003d942) sc_clock_pane_t1_ParamLimits

0xacfc,	// (0x0003d942) sc_clock_pane_t1

0xad0f,	// (0x0003d955) sc_clock_pane_t2_ParamLimits

0xad0f,	// (0x0003d955) sc_clock_pane_t2

0xad21,	// (0x0003d967) sc_clock_pane_t3_ParamLimits

0xad21,	// (0x0003d967) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x000428c9) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x000428c9) sc_clock_pane_t

0xb6a4,	// (0x0003e2ea) main_fs_bigclock_indicator_pane_ParamLimits

0xb6a4,	// (0x0003e2ea) main_fs_bigclock_indicator_pane

0xadbf,	// (0x0003da05) main_fs_bigclock_pane_g1_ParamLimits

0xadbf,	// (0x0003da05) main_fs_bigclock_pane_g1

0xb6b0,	// (0x0003e2f6) main_fs_bigclock_pane_t1_ParamLimits

0xb6b0,	// (0x0003e2f6) main_fs_bigclock_pane_t1

0xb6c2,	// (0x0003e308) main_fs_bigclock_pane_t2_ParamLimits

0xb6c2,	// (0x0003e308) main_fs_bigclock_pane_t2

0xb6d4,	// (0x0003e31a) main_fs_bigclock_pane_t3_ParamLimits

0xb6d4,	// (0x0003e31a) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x00042ac8) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x00042ac8) main_fs_bigclock_pane_t

0x1f69,	// (0x00034baf) main_fs_bigclock_indicator_pane_g1

0x113f,	// (0x00033d85) ncim_query_content_pane_g2_ParamLimits

0x113f,	// (0x00033d85) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x00042856) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x00042856) ncim_query_content_pane_g

0xad35,	// (0x0003d97b) sc_clock_pane_t4_ParamLimits

0xad35,	// (0x0003d97b) sc_clock_pane_t4

0xd8c7,	// (0x0004050d) main_radioblah_pane

0x0275,	// (0x00032ebb) cell_call4_button_pane_t1_copy1_ParamLimits

0x0275,	// (0x00032ebb) cell_call4_button_pane_t1_copy1

0xa9d7,	// (0x0003d61d) main_ncimui_pane_t1_ParamLimits

0xa9d7,	// (0x0003d61d) main_ncimui_pane_t1

0xa9f1,	// (0x0003d637) main_ncimui_pane_t2_ParamLimits

0xa9f1,	// (0x0003d637) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0004284f) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0004284f) main_ncimui_pane_t

0x1487,	// (0x000340cd) main_radioblah_anim_pane_ParamLimits

0x1487,	// (0x000340cd) main_radioblah_anim_pane

0x1498,	// (0x000340de) main_radioblah_info_pane_ParamLimits

0x1498,	// (0x000340de) main_radioblah_info_pane

0x14ac,	// (0x000340f2) main_radioblah_pane_t1_ParamLimits

0x14ac,	// (0x000340f2) main_radioblah_pane_t1

0x14c8,	// (0x0003410e) main_radioblah_pane_t2_ParamLimits

0x14c8,	// (0x0003410e) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x000428ea) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x000428ea) main_radioblah_pane_t

0xaf3b,	// (0x0003db81) main_radioblah_rocker_ctrl_pane_ParamLimits

0xaf3b,	// (0x0003db81) main_radioblah_rocker_ctrl_pane

0x1510,	// (0x00034156) main_radioblah_info_pane_t1_ParamLimits

0x1510,	// (0x00034156) main_radioblah_info_pane_t1

0xaf80,	// (0x0003dbc6) main_radioblah_info_pane_t2_ParamLimits

0xaf80,	// (0x0003dbc6) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x000428f3) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x000428f3) main_radioblah_info_pane_t

0xe87e,	// (0x000414c4) main_radioblah_rocker_ctrl_pane_g1

0xb030,	// (0x0003dc76) main_radioblah_rocker_ctrl_pane_g2

0xb038,	// (0x0003dc7e) main_radioblah_rocker_ctrl_pane_g3

0xb040,	// (0x0003dc86) main_radioblah_rocker_ctrl_pane_g4

0xb048,	// (0x0003dc8e) main_radioblah_rocker_ctrl_pane_g5

0xb050,	// (0x0003dc96) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x000428fc) main_radioblah_rocker_ctrl_pane_g

0xa989,	// (0x0003d5cf) main_cset_text2_pane_t1_copy1_ParamLimits

0x9276,	// (0x0003bebc) cam4_image_uncrop_qvga_pane

0x93bd,	// (0x0003c003) vid4_image_uncrop_qcif_pane

0xa5ca,	// (0x0003d210) cam6_image_uncrop_qvga_pane_ParamLimits

0xa5ca,	// (0x0003d210) cam6_image_uncrop_qvga_pane

0x0d5e,	// (0x000339a4) vid6_image_uncrop_qcif_pane_ParamLimits

0x0d5e,	// (0x000339a4) vid6_image_uncrop_qcif_pane

0x43bf,	// (0x00037005) bg_popup_preview_window_pane_cp03

0x10f1,	// (0x00033d37) list_cset_text2_pane

0x10f9,	// (0x00033d3f) main_cset6_text2_pane_g1

0x1101,	// (0x00033d47) main_cset6_text2_pane_t1

0xb058,	// (0x0003dc9e) list_cset_text2_pane_t1_ParamLimits

0xb058,	// (0x0003dc9e) list_cset_text2_pane_t1

0xd8c7,	// (0x0004050d) main_radioblah_pane_ParamLimits

0xac94,	// (0x0003d8da) main_mobtv_info_pane_t3_ParamLimits

0xac94,	// (0x0003d8da) main_mobtv_info_pane_t3

0xaf29,	// (0x0003db6f) main_radioblah_pane_g1

0xaf54,	// (0x0003db9a) main_radioblah_info_pane_g1

0xafd5,	// (0x0003dc1b) main_radioblah_info_pane_t3_ParamLimits

0xafd5,	// (0x0003dc1b) main_radioblah_info_pane_t3

0x6130,	// (0x00038d76) highlight_cell_cale_month_pane_ParamLimits

0x6130,	// (0x00038d76) highlight_cell_cale_month_pane

0x43bf,	// (0x00037005) main_phob_fisheye_pane

0xebc7,	// (0x0004180d) scroll_pane_cp0031_ParamLimits

0xebc7,	// (0x0004180d) scroll_pane_cp0031

0x0e6c,	// (0x00033ab2) wait_bar_pane_cp08_ParamLimits

0xa775,	// (0x0003d3bb) cset_list_set_pane_copy1_ParamLimits

0x154a,	// (0x00034190) highlight_cell_cale_month_pane_g1

0xb083,	// (0x0003dcc9) highlight_cell_cale_month_pane_t1

0x0a21,	// (0x00033667) list_gen_pane_cp01

0x055d,	// (0x000331a3) scroll_pane_01

0x39f4,	// (0x0003663a) list_single_double_fisheye_pane

0x39fd,	// (0x00036643) list_double_fisheye_pane_g1_ParamLimits

0x39fd,	// (0x00036643) list_double_fisheye_pane_g1

0x3a09,	// (0x0003664f) list_double_fisheye_pane_g2_ParamLimits

0x3a09,	// (0x0003664f) list_double_fisheye_pane_g2

0x3a1d,	// (0x00036663) list_double_fisheye_pane_g3_ParamLimits

0x3a1d,	// (0x00036663) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x00042909) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x00042909) list_double_fisheye_pane_g

0x3a46,	// (0x0003668c) list_double_fisheye_pane_t1_ParamLimits

0x3a46,	// (0x0003668c) list_double_fisheye_pane_t1

0x3a61,	// (0x000366a7) list_double_fisheye_pane_t2_ParamLimits

0x3a61,	// (0x000366a7) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x00042914) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x00042914) list_double_fisheye_pane_t

0x43bf,	// (0x00037005) main_call5_pane

0xad5b,	// (0x0003d9a1) sc_swipe_pane_ParamLimits

0xad5b,	// (0x0003d9a1) sc_swipe_pane

0xb09d,	// (0x0003dce3) call5_image_pane_ParamLimits

0xb09d,	// (0x0003dce3) call5_image_pane

0xb0ad,	// (0x0003dcf3) call5_swipe_1_pane_ParamLimits

0xb0ad,	// (0x0003dcf3) call5_swipe_1_pane

0xb0b9,	// (0x0003dcff) call5_swipe_2_pane_ParamLimits

0xb0b9,	// (0x0003dcff) call5_swipe_2_pane

0xb0d3,	// (0x0003dd19) popup_call5_audio_first_window_ParamLimits

0xb0d3,	// (0x0003dd19) popup_call5_audio_first_window

0xeae5,	// (0x0004172b) call5_swipe_1_pane_g1_ParamLimits

0xeae5,	// (0x0004172b) call5_swipe_1_pane_g1

0x1598,	// (0x000341de) call5_swipe_1_pane_g2_ParamLimits

0x1598,	// (0x000341de) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x00042919) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x00042919) call5_swipe_1_pane_g

0x15a4,	// (0x000341ea) call5_swipe_1_pane_t1_ParamLimits

0x15a4,	// (0x000341ea) call5_swipe_1_pane_t1

0xeae5,	// (0x0004172b) call5_swipe_2_pane_g1_ParamLimits

0xeae5,	// (0x0004172b) call5_swipe_2_pane_g1

0x15b9,	// (0x000341ff) call5_swipe_2_pane_g2_ParamLimits

0x15b9,	// (0x000341ff) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0004291e) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0004291e) call5_swipe_2_pane_g

0x15c5,	// (0x0003420b) call5_swipe_2_pane_t1_ParamLimits

0x15c5,	// (0x0003420b) call5_swipe_2_pane_t1

0x15da,	// (0x00034220) sc_swipe_pane_g1_ParamLimits

0x15da,	// (0x00034220) sc_swipe_pane_g1

0x15e7,	// (0x0003422d) sc_swipe_pane_g2_ParamLimits

0x15e7,	// (0x0003422d) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x00042923) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x00042923) sc_swipe_pane_g

0x15f3,	// (0x00034239) sc_swipe_pane_t1_ParamLimits

0x15f3,	// (0x00034239) sc_swipe_pane_t1

0x43bf,	// (0x00037005) main_cmail_launcher_pane

0xb0e1,	// (0x0003dd27) aid_size_cell_cmail_l_ParamLimits

0xb0e1,	// (0x0003dd27) aid_size_cell_cmail_l

0xb0f1,	// (0x0003dd37) grid_cmail_l_pane_ParamLimits

0xb0f1,	// (0x0003dd37) grid_cmail_l_pane

0xb101,	// (0x0003dd47) cell_cmail_l_pane_ParamLimits

0xb101,	// (0x0003dd47) cell_cmail_l_pane

0xb115,	// (0x0003dd5b) cell_cmail_l_pane_g1_ParamLimits

0xb115,	// (0x0003dd5b) cell_cmail_l_pane_g1

0xb121,	// (0x0003dd67) cell_cmail_l_pane_t1_ParamLimits

0xb121,	// (0x0003dd67) cell_cmail_l_pane_t1

0x1608,	// (0x0003424e) cell_cmail_l_pane_t2_ParamLimits

0x1608,	// (0x0003424e) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x00042928) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x00042928) cell_cmail_l_pane_t

0xd8c7,	// (0x0004050d) grid_highlight_pane_cp018_ParamLimits

0xd8c7,	// (0x0004050d) grid_highlight_pane_cp018

0x44d6,	// (0x0003711c) main2_pane_ParamLimits

0x44d6,	// (0x0003711c) main2_pane

0xc603,	// (0x0003f249) popup_sp_fs_action_menu_bg_pane_g1

0xc60b,	// (0x0003f251) popup_sp_fs_action_menu_bg_pane_g2

0xc613,	// (0x0003f259) popup_sp_fs_action_menu_bg_pane_g3

0xc61b,	// (0x0003f261) popup_sp_fs_action_menu_bg_pane_g4

0xc623,	// (0x0003f269) popup_sp_fs_action_menu_bg_pane_g5

0xc62b,	// (0x0003f271) popup_sp_fs_action_menu_bg_pane_g6

0xc633,	// (0x0003f279) popup_sp_fs_action_menu_bg_pane_g7

0xc63b,	// (0x0003f281) popup_sp_fs_action_menu_bg_pane_g8

0xc643,	// (0x0003f289) popup_sp_fs_action_menu_bg_pane_g9

0xc64b,	// (0x0003f291) popup_sp_fs_action_menu_bg_pane_g10

0xc64b,	// (0x0003f291) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00041df2) popup_sp_fs_action_menu_bg_pane_g

0x31e8,	// (0x00035e2e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x31e8,	// (0x00035e2e) list_medium_line_x2_t3_g3_g1

0x31f4,	// (0x00035e3a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x31f4,	// (0x00035e3a) list_medium_line_x2_t3_g3_g2

0x3200,	// (0x00035e46) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3200,	// (0x00035e46) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00041ea2) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00041ea2) list_medium_line_x2_t3_g3_g

0x320c,	// (0x00035e52) list_medium_line_x2_t3_g3_t1_ParamLimits

0x320c,	// (0x00035e52) list_medium_line_x2_t3_g3_t1

0x3221,	// (0x00035e67) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3221,	// (0x00035e67) list_medium_line_x2_t3_g3_t2

0x3235,	// (0x00035e7b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3235,	// (0x00035e7b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00041ea9) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00041ea9) list_medium_line_x2_t3_g3_t

0x31e8,	// (0x00035e2e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x31e8,	// (0x00035e2e) list_medium_line_x2_t3_g2_g1

0x3200,	// (0x00035e46) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3200,	// (0x00035e46) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00041eb0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00041eb0) list_medium_line_x2_t3_g2_g

0x324a,	// (0x00035e90) list_medium_line_x2_t3_g2_t1_ParamLimits

0x324a,	// (0x00035e90) list_medium_line_x2_t3_g2_t1

0x3260,	// (0x00035ea6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3260,	// (0x00035ea6) list_medium_line_x2_t3_g2_t2

0x3235,	// (0x00035e7b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3235,	// (0x00035e7b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00041eb5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00041eb5) list_medium_line_x2_t3_g2_t

0x31e8,	// (0x00035e2e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x31e8,	// (0x00035e2e) list_medium_line_x2_t4_g4_g1

0x3272,	// (0x00035eb8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3272,	// (0x00035eb8) list_medium_line_x2_t4_g4_g2

0x31f4,	// (0x00035e3a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x31f4,	// (0x00035e3a) list_medium_line_x2_t4_g4_g3

0x327e,	// (0x00035ec4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x327e,	// (0x00035ec4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00041ebc) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00041ebc) list_medium_line_x2_t4_g4_g

0x328a,	// (0x00035ed0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x328a,	// (0x00035ed0) list_medium_line_x2_t4_g4_t1

0x32a1,	// (0x00035ee7) list_medium_line_x2_t4_g4_t2_ParamLimits

0x32a1,	// (0x00035ee7) list_medium_line_x2_t4_g4_t2

0x32b6,	// (0x00035efc) list_medium_line_x2_t4_g4_t3_ParamLimits

0x32b6,	// (0x00035efc) list_medium_line_x2_t4_g4_t3

0x32c8,	// (0x00035f0e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x32c8,	// (0x00035f0e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00041ec5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00041ec5) list_medium_line_x2_t4_g4_t

0x31e8,	// (0x00035e2e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x31e8,	// (0x00035e2e) list_medium_line_x2_t2_g4_g1

0x3272,	// (0x00035eb8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3272,	// (0x00035eb8) list_medium_line_x2_t2_g4_g2

0x31f4,	// (0x00035e3a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x31f4,	// (0x00035e3a) list_medium_line_x2_t2_g4_g3

0x3200,	// (0x00035e46) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3200,	// (0x00035e46) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00041f2c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00041f2c) list_medium_line_x2_t2_g4_g

0x32da,	// (0x00035f20) list_medium_line_x2_t2_g4_t1_ParamLimits

0x32da,	// (0x00035f20) list_medium_line_x2_t2_g4_t1

0x3235,	// (0x00035e7b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3235,	// (0x00035e7b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00041f35) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00041f35) list_medium_line_x2_t2_g4_t

0x31e8,	// (0x00035e2e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x31e8,	// (0x00035e2e) list_medium_line_x2_t2_g3_g1

0x31f4,	// (0x00035e3a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x31f4,	// (0x00035e3a) list_medium_line_x2_t2_g3_g2

0x3200,	// (0x00035e46) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3200,	// (0x00035e46) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00041ea2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00041ea2) list_medium_line_x2_t2_g3_g

0x32ef,	// (0x00035f35) list_medium_line_x2_t2_g3_t1_ParamLimits

0x32ef,	// (0x00035f35) list_medium_line_x2_t2_g3_t1

0x3235,	// (0x00035e7b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3235,	// (0x00035e7b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00041f3a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00041f3a) list_medium_line_x2_t2_g3_t

0x63ac,	// (0x00038ff2) main_sp_fs_list_pane_ParamLimits

0x63ac,	// (0x00038ff2) main_sp_fs_list_pane

0x63b8,	// (0x00038ffe) sp_fs_scroll_pane_ParamLimits

0x63b8,	// (0x00038ffe) sp_fs_scroll_pane

0x3304,	// (0x00035f4a) list_medium_line_x2_t3_t1

0x3314,	// (0x00035f5a) list_medium_line_x2_t3_t2

0x3322,	// (0x00035f68) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00041f85) list_medium_line_x2_t3_t

0x3330,	// (0x00035f76) list_medium_line_x3_t4_t1

0x3340,	// (0x00035f86) list_medium_line_x3_t4_t2

0x334e,	// (0x00035f94) list_medium_line_x3_t4_t3

0x3322,	// (0x00035f68) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00041f8c) list_medium_line_x3_t4_t

0x335c,	// (0x00035fa2) list_medium_line_x4_t5_t1

0x336c,	// (0x00035fb2) list_medium_line_x4_t5_t2

0x334e,	// (0x00035f94) list_medium_line_x4_t5_t3

0x337a,	// (0x00035fc0) list_medium_line_x4_t5_t4

0x3322,	// (0x00035f68) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00041f95) list_medium_line_x4_t5_t

0x31e8,	// (0x00035e2e) list_medium_line_t4_g4_g1_ParamLimits

0x31e8,	// (0x00035e2e) list_medium_line_t4_g4_g1

0x327e,	// (0x00035ec4) list_medium_line_t4_g4_g2_ParamLimits

0x327e,	// (0x00035ec4) list_medium_line_t4_g4_g2

0x3388,	// (0x00035fce) list_medium_line_t4_g4_g3_ParamLimits

0x3388,	// (0x00035fce) list_medium_line_t4_g4_g3

0x3200,	// (0x00035e46) list_medium_line_t4_g4_g4_ParamLimits

0x3200,	// (0x00035e46) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00041fa0) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00041fa0) list_medium_line_t4_g4_g

0x3394,	// (0x00035fda) list_medium_line_t4_g4_t1_ParamLimits

0x3394,	// (0x00035fda) list_medium_line_t4_g4_t1

0x33a9,	// (0x00035fef) list_medium_line_t4_g4_t2_ParamLimits

0x33a9,	// (0x00035fef) list_medium_line_t4_g4_t2

0x33be,	// (0x00036004) list_medium_line_t4_g4_t3_ParamLimits

0x33be,	// (0x00036004) list_medium_line_t4_g4_t3

0x3235,	// (0x00035e7b) list_medium_line_t4_g4_t4_ParamLimits

0x3235,	// (0x00035e7b) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00041fa9) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00041fa9) list_medium_line_t4_g4_t

0x64ab,	// (0x000390f1) chi_dic_find_pane_g1

0x740d,	// (0x0003a053) main_tport_pane

0x367d,	// (0x000362c3) list_medium_line_plain_t1

0x368b,	// (0x000362d1) list_medium_line_t2_g2_g1_ParamLimits

0x368b,	// (0x000362d1) list_medium_line_t2_g2_g1

0x3697,	// (0x000362dd) list_medium_line_t2_g2_g2_ParamLimits

0x3697,	// (0x000362dd) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00042665) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00042665) list_medium_line_t2_g2_g

0x36a3,	// (0x000362e9) list_medium_line_t2_g2_t1_ParamLimits

0x36a3,	// (0x000362e9) list_medium_line_t2_g2_t1

0x36bd,	// (0x00036303) list_medium_line_t2_g2_t2_ParamLimits

0x36bd,	// (0x00036303) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0004266a) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0004266a) list_medium_line_t2_g2_t

0x38dc,	// (0x00036522) aid_sp_fs_list_icon_a_sm

0x38e4,	// (0x0003652a) aid_sp_fs_list_icon_d

0x1dbb,	// (0x00034a01) aid_sp_fs_text_primary

0x1b22,	// (0x00034768) aid_sp_fs_text_secondary

0xdbb9,	// (0x000407ff) list_medium_line

0xdbb9,	// (0x000407ff) list_medium_line_g2

0xdbb9,	// (0x000407ff) list_medium_line_g3

0xdbb9,	// (0x000407ff) list_medium_line_plain

0xdbb9,	// (0x000407ff) list_medium_line_plain_t2

0xdbb9,	// (0x000407ff) list_medium_line_plain_t3

0xdbb9,	// (0x000407ff) list_medium_line_right_icon

0xdbb9,	// (0x000407ff) list_medium_line_right_iconx2

0xdbb9,	// (0x000407ff) list_medium_line_t2

0xdbb9,	// (0x000407ff) list_medium_line_t2_g2

0xdbb9,	// (0x000407ff) list_medium_line_t2_g3

0xdbb9,	// (0x000407ff) list_medium_line_t2_right_icon

0xdbb9,	// (0x000407ff) list_medium_line_t2_right_iconx2

0xdbb9,	// (0x000407ff) list_medium_line_t3

0xdbb9,	// (0x000407ff) list_medium_line_t3_g2

0xdbb9,	// (0x000407ff) list_medium_line_t3_g3

0xdbb9,	// (0x000407ff) list_medium_line_t3_right_iconx2

0x38ec,	// (0x00036532) list_medium_line_t4_g4

0x38f5,	// (0x0003653b) list_medium_line_x2

0x38f5,	// (0x0003653b) list_medium_line_x2_t2_g2

0x38f5,	// (0x0003653b) list_medium_line_x2_t2_g3

0x38f5,	// (0x0003653b) list_medium_line_x2_t2_g4

0x38f5,	// (0x0003653b) list_medium_line_x2_t3

0x38f5,	// (0x0003653b) list_medium_line_x2_t3_g2

0x38f5,	// (0x0003653b) list_medium_line_x2_t3_g3

0x38f5,	// (0x0003653b) list_medium_line_x2_t3_g4

0x38f5,	// (0x0003653b) list_medium_line_x2_t4_g2

0x38f5,	// (0x0003653b) list_medium_line_x2_t4_g4

0x38fe,	// (0x00036544) list_medium_line_x3

0x38fe,	// (0x00036544) list_medium_line_x3_t4

0x38fe,	// (0x00036544) list_medium_line_x3_t4_g4

0x38ec,	// (0x00036532) list_medium_line_x4_t4

0x38ec,	// (0x00036532) list_medium_line_x4_t4_g7

0x38ec,	// (0x00036532) list_medium_line_x4_t5

0x3907,	// (0x0003654d) list_single_fs_dyc_pane_ParamLimits

0x3907,	// (0x0003654d) list_single_fs_dyc_pane

0x31e8,	// (0x00035e2e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x31e8,	// (0x00035e2e) list_medium_line_x4_t4_g7_g1

0x3923,	// (0x00036569) list_medium_line_x4_t4_g7_g2_ParamLimits

0x3923,	// (0x00036569) list_medium_line_x4_t4_g7_g2

0x392f,	// (0x00036575) list_medium_line_x4_t4_g7_g3_ParamLimits

0x392f,	// (0x00036575) list_medium_line_x4_t4_g7_g3

0x393e,	// (0x00036584) list_medium_line_x4_t4_g7_g4_ParamLimits

0x393e,	// (0x00036584) list_medium_line_x4_t4_g7_g4

0x394a,	// (0x00036590) list_medium_line_x4_t4_g7_g5_ParamLimits

0x394a,	// (0x00036590) list_medium_line_x4_t4_g7_g5

0x3959,	// (0x0003659f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x3959,	// (0x0003659f) list_medium_line_x4_t4_g7_g6

0x3968,	// (0x000365ae) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3968,	// (0x000365ae) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00042835) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00042835) list_medium_line_x4_t4_g7_g

0x3974,	// (0x000365ba) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3974,	// (0x000365ba) list_medium_line_x4_t4_g7_t1

0x3989,	// (0x000365cf) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3989,	// (0x000365cf) list_medium_line_x4_t4_g7_t2

0x399e,	// (0x000365e4) list_medium_line_x4_t4_g7_t3_ParamLimits

0x399e,	// (0x000365e4) list_medium_line_x4_t4_g7_t3

0x39b3,	// (0x000365f9) list_medium_line_x4_t4_g7_t4_ParamLimits

0x39b3,	// (0x000365f9) list_medium_line_x4_t4_g7_t4

0x39c5,	// (0x0003660b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x39c5,	// (0x0003660b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x00042844) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x00042844) list_medium_line_x4_t4_g7_t

0x39d7,	// (0x0003661d) list_single_dyc_row_pane_ParamLimits

0x39d7,	// (0x0003661d) list_single_dyc_row_pane

0xb091,	// (0x0003dcd7) call5_gesture_pane_ParamLimits

0xb091,	// (0x0003dcd7) call5_gesture_pane

0xb0c5,	// (0x0003dd0b) call5_windows_pane_ParamLimits

0xb0c5,	// (0x0003dd0b) call5_windows_pane

0xb137,	// (0x0003dd7d) call5_swipe_1_pane_cp_ParamLimits

0xb137,	// (0x0003dd7d) call5_swipe_1_pane_cp

0xb143,	// (0x0003dd89) call5_swipe_2_pane_cp_ParamLimits

0xb143,	// (0x0003dd89) call5_swipe_2_pane_cp

0xcfe0,	// (0x0003fc26) call5_image_pane_cp

0xb14f,	// (0x0003dd95) popup_call5_audio_first_window_cp_ParamLimits

0xb14f,	// (0x0003dd95) popup_call5_audio_first_window_cp

0x15da,	// (0x00034220) call5_swipe_1_pane_g1_cp_ParamLimits

0x15da,	// (0x00034220) call5_swipe_1_pane_g1_cp

0x161a,	// (0x00034260) call5_swipe_1_pane_g2_cp

0x15f3,	// (0x00034239) call5_swipe_1_pane_t1_cp_ParamLimits

0x15f3,	// (0x00034239) call5_swipe_1_pane_t1_cp

0x15da,	// (0x00034220) call5_swipe_2_pane_g1_cp_ParamLimits

0x15da,	// (0x00034220) call5_swipe_2_pane_g1_cp

0x1622,	// (0x00034268) call5_swipe_2_pane_g2_cp

0x162a,	// (0x00034270) call5_swipe_2_pane_t1_cp_ParamLimits

0x162a,	// (0x00034270) call5_swipe_2_pane_t1_cp

0xd8c7,	// (0x0004050d) main_sp_fs_email_pane

0x163f,	// (0x00034285) main_sp_fs_listscroll_pane_te

0x3a83,	// (0x000366c9) popup_sp_fs_action_menu_pane_ParamLimits

0x3a83,	// (0x000366c9) popup_sp_fs_action_menu_pane

0xe87e,	// (0x000414c4) bg_sp_fs_ctrlbar_pane_g1

0x1688,	// (0x000342ce) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x1691,	// (0x000342d7) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x169a,	// (0x000342e0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe87e,	// (0x000414c4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0004292d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe659,	// (0x0004129f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe659,	// (0x0004129f) bg_sp_fs_ctrlbar_ddmenu_pane

0x16a3,	// (0x000342e9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x16a3,	// (0x000342e9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x16af,	// (0x000342f5) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x16af,	// (0x000342f5) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00042936) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00042936) main_sp_fs_ctrlbar_ddmenu_pane_g

0x16bb,	// (0x00034301) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x16bb,	// (0x00034301) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3ac3,	// (0x00036709) list_medium_line_t2_right_icon_g1

0x3acb,	// (0x00036711) list_medium_line_t2_right_icon_t1

0x3adb,	// (0x00036721) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0004293b) list_medium_line_t2_right_icon_t

0xe42d,	// (0x00041073) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe42d,	// (0x00041073) bg_sp_fs_ctrlbar_pane

0xb1b2,	// (0x0003ddf8) main_sp_fs_ctrlbar_button_pane_cp01

0xb1ba,	// (0x0003de00) main_sp_fs_ctrlbar_ddmenu_pane

0xd8f8,	// (0x0004053e) main_sp_fs_ctrlbar_pane_g1

0x1715,	// (0x0003435b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x00042940) main_sp_fs_ctrlbar_pane_g

0x1721,	// (0x00034367) main_sp_fs_ctrlbar_pane_t1

0x3ae9,	// (0x0003672f) main_sp_fs_ctrlbar_pane

0x3b05,	// (0x0003674b) main_sp_fs_listscroll_pane_te_cp01

0x3b16,	// (0x0003675c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3b16,	// (0x0003675c) popup_sp_fs_action_menu_pane_cp01

0xd8c7,	// (0x0004050d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xd8c7,	// (0x0004050d) bg_sp_fs_highlight_list_pane_cp01

0x3b2e,	// (0x00036774) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3b2e,	// (0x00036774) sp_fs_action_menu_list_gene_pane_g1

0x1745,	// (0x0003438b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1745,	// (0x0003438b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00042945) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00042945) sp_fs_action_menu_list_gene_pane_g

0x3b3d,	// (0x00036783) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3b3d,	// (0x00036783) sp_fs_action_menu_list_gene_pane_t1

0x3b55,	// (0x0003679b) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3b55,	// (0x0003679b) sp_fs_action_menu_list_gene_pane

0x1787,	// (0x000343cd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1787,	// (0x000343cd) popup_sp_fs_action_menu_bg_pane

0x3b72,	// (0x000367b8) sp_fs_action_menu_list_pane_ParamLimits

0x3b72,	// (0x000367b8) sp_fs_action_menu_list_pane

0x17b3,	// (0x000343f9) sp_fs_scroll_pane_cp01_ParamLimits

0x17b3,	// (0x000343f9) sp_fs_scroll_pane_cp01

0x3b90,	// (0x000367d6) list_medium_line_plain_t2_t1

0x3ba0,	// (0x000367e6) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0004294a) list_medium_line_plain_t2_t

0x3bae,	// (0x000367f4) list_medium_line_plain_t3_t1

0x3bbe,	// (0x00036804) list_medium_line_plain_t3_t2

0x3bcc,	// (0x00036812) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0004294f) list_medium_line_plain_t3_t

0x31e8,	// (0x00035e2e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x31e8,	// (0x00035e2e) list_medium_line_x2_t2_g2_g1

0x3200,	// (0x00035e46) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3200,	// (0x00035e46) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00041eb0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00041eb0) list_medium_line_x2_t2_g2_g

0x3394,	// (0x00035fda) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3394,	// (0x00035fda) list_medium_line_x2_t2_g2_t1

0x3235,	// (0x00035e7b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3235,	// (0x00035e7b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00042956) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00042956) list_medium_line_x2_t2_g2_t

0x31e8,	// (0x00035e2e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x31e8,	// (0x00035e2e) list_medium_line_x2_t4_g2_g1

0x3bda,	// (0x00036820) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3bda,	// (0x00036820) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0004295b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0004295b) list_medium_line_x2_t4_g2_g

0x3bec,	// (0x00036832) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3bec,	// (0x00036832) list_medium_line_x2_t4_g2_t1

0x3c06,	// (0x0003684c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3c06,	// (0x0003684c) list_medium_line_x2_t4_g2_t2

0x3c1b,	// (0x00036861) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3c1b,	// (0x00036861) list_medium_line_x2_t4_g2_t3

0x3235,	// (0x00035e7b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3235,	// (0x00035e7b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x00042960) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x00042960) list_medium_line_x2_t4_g2_t

0x3c30,	// (0x00036876) list_medium_line_t3_right_iconx2_g1

0x3ac3,	// (0x00036709) list_medium_line_t3_right_iconx2_g2

0x3c38,	// (0x0003687e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x00042969) list_medium_line_t3_right_iconx2_g

0x3c40,	// (0x00036886) list_medium_line_t3_right_iconx2_t1

0x3c50,	// (0x00036896) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x00042970) list_medium_line_t3_right_iconx2_t

0x31e8,	// (0x00035e2e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x31e8,	// (0x00035e2e) list_medium_line_x3_t4_g4_g1

0x31f4,	// (0x00035e3a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x31f4,	// (0x00035e3a) list_medium_line_x3_t4_g4_g2

0x327e,	// (0x00035ec4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x327e,	// (0x00035ec4) list_medium_line_x3_t4_g4_g3

0x3c5e,	// (0x000368a4) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3c5e,	// (0x000368a4) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x00042975) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x00042975) list_medium_line_x3_t4_g4_g

0x3c6a,	// (0x000368b0) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3c6a,	// (0x000368b0) list_medium_line_x3_t4_g4_t1

0x3c81,	// (0x000368c7) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3c81,	// (0x000368c7) list_medium_line_x3_t4_g4_t2

0x33a9,	// (0x00035fef) list_medium_line_x3_t4_g4_t3_ParamLimits

0x33a9,	// (0x00035fef) list_medium_line_x3_t4_g4_t3

0x3c96,	// (0x000368dc) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3c96,	// (0x000368dc) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0004297e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0004297e) list_medium_line_x3_t4_g4_t

0x3cb3,	// (0x000368f9) list_single_dyc_row_text_pane_t1_ParamLimits

0x3cb3,	// (0x000368f9) list_single_dyc_row_text_pane_t1

0x3cea,	// (0x00036930) list_single_dyc_row_text_pane_t2_ParamLimits

0x3cea,	// (0x00036930) list_single_dyc_row_text_pane_t2

0x3d44,	// (0x0003698a) list_single_dyc_row_text_pane_t3_ParamLimits

0x3d44,	// (0x0003698a) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x00042987) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x00042987) list_single_dyc_row_text_pane_t

0x3d56,	// (0x0003699c) list_single_dyc_row_pane_g1_ParamLimits

0x3d56,	// (0x0003699c) list_single_dyc_row_pane_g1

0x3d62,	// (0x000369a8) list_single_dyc_row_pane_g2_ParamLimits

0x3d62,	// (0x000369a8) list_single_dyc_row_pane_g2

0x3d6e,	// (0x000369b4) list_single_dyc_row_pane_g3_ParamLimits

0x3d6e,	// (0x000369b4) list_single_dyc_row_pane_g3

0x3d7a,	// (0x000369c0) list_single_dyc_row_pane_g4_ParamLimits

0x3d7a,	// (0x000369c0) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0004298e) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0004298e) list_single_dyc_row_pane_g

0x3d86,	// (0x000369cc) list_single_dyc_row_text_pane_ParamLimits

0x3d86,	// (0x000369cc) list_single_dyc_row_text_pane

0x43bf,	// (0x00037005) bg_sp_fs_scroll_pane

0x186b,	// (0x000344b1) thumb_sp_fs_scroll_pane

0x368b,	// (0x000362d1) list_medium_line_g1_ParamLimits

0x368b,	// (0x000362d1) list_medium_line_g1

0x3da5,	// (0x000369eb) list_medium_line_t1_ParamLimits

0x3da5,	// (0x000369eb) list_medium_line_t1

0x31e8,	// (0x00035e2e) list_medium_line_x2_g1_ParamLimits

0x31e8,	// (0x00035e2e) list_medium_line_x2_g1

0x31f4,	// (0x00035e3a) list_medium_line_x2_g2_ParamLimits

0x31f4,	// (0x00035e3a) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x00042997) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x00042997) list_medium_line_x2_g

0x3dba,	// (0x00036a00) list_medium_line_x2_t1_ParamLimits

0x3dba,	// (0x00036a00) list_medium_line_x2_t1

0x31e8,	// (0x00035e2e) list_medium_line_x3_g1_ParamLimits

0x31e8,	// (0x00035e2e) list_medium_line_x3_g1

0x31f4,	// (0x00035e3a) list_medium_line_x3_g2_ParamLimits

0x31f4,	// (0x00035e3a) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x00042997) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x00042997) list_medium_line_x3_g

0x3dba,	// (0x00036a00) list_medium_line_x3_t1_ParamLimits

0x3dba,	// (0x00036a00) list_medium_line_x3_t1

0x189f,	// (0x000344e5) thumb_sp_fs_scroll_pane_g1

0x18a8,	// (0x000344ee) thumb_sp_fs_scroll_pane_g2

0x18b1,	// (0x000344f7) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0004299c) thumb_sp_fs_scroll_pane_g

0x189f,	// (0x000344e5) bg_sp_fs_scroll_pane_g1

0x18a8,	// (0x000344ee) bg_sp_fs_scroll_pane_g2

0x18b1,	// (0x000344f7) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0004299c) bg_sp_fs_scroll_pane_g

0x31e8,	// (0x00035e2e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x31e8,	// (0x00035e2e) list_medium_line_x2_t3_g4_g1

0x3272,	// (0x00035eb8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3272,	// (0x00035eb8) list_medium_line_x2_t3_g4_g2

0x31f4,	// (0x00035e3a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x31f4,	// (0x00035e3a) list_medium_line_x2_t3_g4_g3

0x3200,	// (0x00035e46) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3200,	// (0x00035e46) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00041f2c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00041f2c) list_medium_line_x2_t3_g4_g

0x3dd0,	// (0x00036a16) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3dd0,	// (0x00036a16) list_medium_line_x2_t3_g4_t1

0x3de6,	// (0x00036a2c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3de6,	// (0x00036a2c) list_medium_line_x2_t3_g4_t2

0x3235,	// (0x00035e7b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3235,	// (0x00035e7b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x000429a3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x000429a3) list_medium_line_x2_t3_g4_t

0x368b,	// (0x000362d1) list_medium_line_g2_g1_ParamLimits

0x368b,	// (0x000362d1) list_medium_line_g2_g1

0x3697,	// (0x000362dd) list_medium_line_g2_g2_ParamLimits

0x3697,	// (0x000362dd) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00042665) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00042665) list_medium_line_g2_g

0x3dff,	// (0x00036a45) list_medium_line_g2_t1_ParamLimits

0x3dff,	// (0x00036a45) list_medium_line_g2_t1

0x368b,	// (0x000362d1) list_medium_line_t3_g2_g1_ParamLimits

0x368b,	// (0x000362d1) list_medium_line_t3_g2_g1

0x3697,	// (0x000362dd) list_medium_line_t3_g2_g2_ParamLimits

0x3697,	// (0x000362dd) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00042665) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00042665) list_medium_line_t3_g2_g

0x3e14,	// (0x00036a5a) list_medium_line_t3_g2_t1_ParamLimits

0x3e14,	// (0x00036a5a) list_medium_line_t3_g2_t1

0x3e2e,	// (0x00036a74) list_medium_line_t3_g2_t2_ParamLimits

0x3e2e,	// (0x00036a74) list_medium_line_t3_g2_t2

0x3e43,	// (0x00036a89) list_medium_line_t3_g2_t3_ParamLimits

0x3e43,	// (0x00036a89) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x000429aa) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x000429aa) list_medium_line_t3_g2_t

0x3ac3,	// (0x00036709) list_medium_line_right_icon_g1

0x3e59,	// (0x00036a9f) list_medium_line_right_icon_t1

0x368b,	// (0x000362d1) list_medium_line_t2_g1_ParamLimits

0x368b,	// (0x000362d1) list_medium_line_t2_g1

0x3e67,	// (0x00036aad) list_medium_line_t2_t1_ParamLimits

0x3e67,	// (0x00036aad) list_medium_line_t2_t1

0x3e7e,	// (0x00036ac4) list_medium_line_t2_t2_ParamLimits

0x3e7e,	// (0x00036ac4) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x000429b1) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x000429b1) list_medium_line_t2_t

0x368b,	// (0x000362d1) list_medium_line_t3_g1_ParamLimits

0x368b,	// (0x000362d1) list_medium_line_t3_g1

0x3e90,	// (0x00036ad6) list_medium_line_t3_t1_ParamLimits

0x3e90,	// (0x00036ad6) list_medium_line_t3_t1

0x3ea7,	// (0x00036aed) list_medium_line_t3_t2_ParamLimits

0x3ea7,	// (0x00036aed) list_medium_line_t3_t2

0x3ebc,	// (0x00036b02) list_medium_line_t3_t3_ParamLimits

0x3ebc,	// (0x00036b02) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x000429b6) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x000429b6) list_medium_line_t3_t

0x368b,	// (0x000362d1) list_medium_line_g3_g1_ParamLimits

0x368b,	// (0x000362d1) list_medium_line_g3_g1

0x3ece,	// (0x00036b14) list_medium_line_g3_g2_ParamLimits

0x3ece,	// (0x00036b14) list_medium_line_g3_g2

0x3697,	// (0x000362dd) list_medium_line_g3_g3_ParamLimits

0x3697,	// (0x000362dd) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x000429bd) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x000429bd) list_medium_line_g3_g

0x3eda,	// (0x00036b20) list_medium_line_g3_t1_ParamLimits

0x3eda,	// (0x00036b20) list_medium_line_g3_t1

0x368b,	// (0x000362d1) list_medium_line_t2_g3_g1_ParamLimits

0x368b,	// (0x000362d1) list_medium_line_t2_g3_g1

0x3ece,	// (0x00036b14) list_medium_line_t2_g3_g2_ParamLimits

0x3ece,	// (0x00036b14) list_medium_line_t2_g3_g2

0x3697,	// (0x000362dd) list_medium_line_t2_g3_g3_ParamLimits

0x3697,	// (0x000362dd) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x000429bd) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x000429bd) list_medium_line_t2_g3_g

0x3eef,	// (0x00036b35) list_medium_line_t2_g3_t1_ParamLimits

0x3eef,	// (0x00036b35) list_medium_line_t2_g3_t1

0x3f09,	// (0x00036b4f) list_medium_line_t2_g3_t2_ParamLimits

0x3f09,	// (0x00036b4f) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x000429c4) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x000429c4) list_medium_line_t2_g3_t

0x368b,	// (0x000362d1) list_medium_line_t3_g3_g1_ParamLimits

0x368b,	// (0x000362d1) list_medium_line_t3_g3_g1

0x3ece,	// (0x00036b14) list_medium_line_t3_g3_g2_ParamLimits

0x3ece,	// (0x00036b14) list_medium_line_t3_g3_g2

0x3697,	// (0x000362dd) list_medium_line_t3_g3_g3_ParamLimits

0x3697,	// (0x000362dd) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x000429bd) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x000429bd) list_medium_line_t3_g3_g

0x3f1e,	// (0x00036b64) list_medium_line_t3_g3_t1_ParamLimits

0x3f1e,	// (0x00036b64) list_medium_line_t3_g3_t1

0x3f37,	// (0x00036b7d) list_medium_line_t3_g3_t2_ParamLimits

0x3f37,	// (0x00036b7d) list_medium_line_t3_g3_t2

0x3f4d,	// (0x00036b93) list_medium_line_t3_g3_t3_ParamLimits

0x3f4d,	// (0x00036b93) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x000429c9) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x000429c9) list_medium_line_t3_g3_t

0x3c30,	// (0x00036876) list_medium_line_right_iconx2_g1

0x3ac3,	// (0x00036709) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x000429d0) list_medium_line_right_iconx2_g

0x3f63,	// (0x00036ba9) list_medium_line_right_iconx2_t1

0x3c30,	// (0x00036876) list_medium_line_t2_right_iconx2_g1

0x3ac3,	// (0x00036709) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x000429d0) list_medium_line_t2_right_iconx2_g

0x3f71,	// (0x00036bb7) list_medium_line_t2_right_iconx2_t1

0x3f81,	// (0x00036bc7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x000429d5) list_medium_line_t2_right_iconx2_t

0x3f8f,	// (0x00036bd5) list_medium_line_x4_t4_t1

0x3f9d,	// (0x00036be3) list_medium_line_x4_t4_t2

0x3fad,	// (0x00036bf3) list_medium_line_x4_t4_t3

0x3fbd,	// (0x00036c03) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x000429da) list_medium_line_x4_t4_t

0xb1ed,	// (0x0003de33) tport_appsw_pane_ParamLimits

0xb1ed,	// (0x0003de33) tport_appsw_pane

0xb1f9,	// (0x0003de3f) tport_contact_pane_ParamLimits

0xb1f9,	// (0x0003de3f) tport_contact_pane

0xb209,	// (0x0003de4f) tport_listscroll_pane_ParamLimits

0xb209,	// (0x0003de4f) tport_listscroll_pane

0xb219,	// (0x0003de5f) cell_tport_appsw_pane_ParamLimits

0xb219,	// (0x0003de5f) cell_tport_appsw_pane

0xeb4a,	// (0x00041790) tport_appsw_pane_g1_ParamLimits

0xeb4a,	// (0x00041790) tport_appsw_pane_g1

0x191a,	// (0x00034560) tport_contact_pane_g1

0x1923,	// (0x00034569) tport_contact_pane_t1

0x1931,	// (0x00034577) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x000429e3) tport_contact_pane_t

0x193f,	// (0x00034585) list_tport_pane

0x1948,	// (0x0003458e) scroll_pane_cp_030

0x1959,	// (0x0003459f) cell_tport_appsw_pane_g1

0x1969,	// (0x000345af) cell_tport_appsw_pane_t1

0x43bf,	// (0x00037005) grid_highlight_pane_cp019

0xb244,	// (0x0003de8a) list_tport_double_graphic_pane_ParamLimits

0xb244,	// (0x0003de8a) list_tport_double_graphic_pane

0xd8c7,	// (0x0004050d) list_highlight_pane_cp023_ParamLimits

0xd8c7,	// (0x0004050d) list_highlight_pane_cp023

0xb257,	// (0x0003de9d) list_tport_double_graphic_pane_g1_ParamLimits

0xb257,	// (0x0003de9d) list_tport_double_graphic_pane_g1

0xb264,	// (0x0003deaa) list_tport_double_graphic_pane_t1_ParamLimits

0xb264,	// (0x0003deaa) list_tport_double_graphic_pane_t1

0xb279,	// (0x0003debf) list_tport_double_graphic_pane_t2_ParamLimits

0xb279,	// (0x0003debf) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x000429ef) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x000429ef) list_tport_double_graphic_pane_t

0x43bf,	// (0x00037005) main_cale_note_pane

0x95fa,	// (0x0003c240) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x95fa,	// (0x0003c240) cell_vitu2_function_top_wide_pane_cp01

0xaca8,	// (0x0003d8ee) wait_bar_pane_cp05_ParamLimits

0x43bf,	// (0x00037005) listscroll_cmail_pane

0x197f,	// (0x000345c5) list_cmail_pane

0xb295,	// (0x0003dedb) list_cmail_body_pane

0xb2b9,	// (0x0003deff) list_single_cmail_header_caption_pane

0xb2e7,	// (0x0003df2d) list_single_cmail_header_detail_pane_ParamLimits

0xb2e7,	// (0x0003df2d) list_single_cmail_header_detail_pane

0xb31f,	// (0x0003df65) list_single_cmail_header_caption_pane_t1

0x3fcd,	// (0x00036c13) list_single_cmail_header_detail_pane_g1_ParamLimits

0x3fcd,	// (0x00036c13) list_single_cmail_header_detail_pane_g1

0x3fe5,	// (0x00036c2b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x3fe5,	// (0x00036c2b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x000429f4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x000429f4) list_single_cmail_header_detail_pane_g

0x3ff1,	// (0x00036c37) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3ff1,	// (0x00036c37) list_single_cmail_header_detail_pane_t1

0x4049,	// (0x00036c8f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4049,	// (0x00036c8f) list_single_cmail_header_editor_pane_bg

0x19fc,	// (0x00034642) list_cmail_body_pane_g1

0x1a05,	// (0x0003464b) list_cmail_body_pane_t1

0x0443,	// (0x00033089) list_single_cmail_header_editor_pane_bg_g1

0xc968,	// (0x0003f5ae) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0453,	// (0x00033099) list_single_cmail_header_editor_pane_bg_g1_copy2

0x044b,	// (0x00033091) list_single_cmail_header_editor_pane_bg_g1_copy3

0x06cc,	// (0x00033312) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0473,	// (0x000330b9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0463,	// (0x000330a9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x046b,	// (0x000330b1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc948,	// (0x0003f58e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb32f,	// (0x0003df75) calenote_gesture_pane_ParamLimits

0xb32f,	// (0x0003df75) calenote_gesture_pane

0xb349,	// (0x0003df8f) calenote_window_pane_ParamLimits

0xb349,	// (0x0003df8f) calenote_window_pane

0x1a13,	// (0x00034659) popup_note_window_cp01

0xb361,	// (0x0003dfa7) calenote_swipe_1_pane_ParamLimits

0xb361,	// (0x0003dfa7) calenote_swipe_1_pane

0xb143,	// (0x0003dd89) calenote_swipe_2_pane_ParamLimits

0xb143,	// (0x0003dd89) calenote_swipe_2_pane

0x15da,	// (0x00034220) calenote_swipe_1_pane_g1_ParamLimits

0x15da,	// (0x00034220) calenote_swipe_1_pane_g1

0x15e7,	// (0x0003422d) calenote_swipe_1_pane_g2_ParamLimits

0x15e7,	// (0x0003422d) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x00042923) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x00042923) calenote_swipe_1_pane_g

0x1a25,	// (0x0003466b) calenote_swipe_1_pane_t1_ParamLimits

0x1a25,	// (0x0003466b) calenote_swipe_1_pane_t1

0x15da,	// (0x00034220) calenote_swipe_2_pane_g1_ParamLimits

0x15da,	// (0x00034220) calenote_swipe_2_pane_g1

0x1a44,	// (0x0003468a) calenote_swipe_2_pane_g2_ParamLimits

0x1a44,	// (0x0003468a) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x00042a00) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x00042a00) calenote_swipe_2_pane_g

0x1a50,	// (0x00034696) calenote_swipe_2_pane_t1_ParamLimits

0x1a50,	// (0x00034696) calenote_swipe_2_pane_t1

0x43bf,	// (0x00037005) main_mup_navstr_pane

0x8398,	// (0x0003afde) main_mup3_pane_t7_ParamLimits

0x8398,	// (0x0003afde) main_mup3_pane_t7

0x8d9c,	// (0x0003b9e2) main_mp4_pane_g6_ParamLimits

0x8d9c,	// (0x0003b9e2) main_mp4_pane_g6

0x9110,	// (0x0003bd56) main_image3_pane_t4_ParamLimits

0x9110,	// (0x0003bd56) main_image3_pane_t4

0xb374,	// (0x0003dfba) popup_navstr_preview_pane_ParamLimits

0xb374,	// (0x0003dfba) popup_navstr_preview_pane

0xb380,	// (0x0003dfc6) scroll_navstr_pane_ParamLimits

0xb380,	// (0x0003dfc6) scroll_navstr_pane

0x43bf,	// (0x00037005) bg_popup_preview_window_pane_cp04

0x1a77,	// (0x000346bd) popup_navstr_preview_pane_t1

0xb38c,	// (0x0003dfd2) scroll_navstr_pane_g1_ParamLimits

0xb38c,	// (0x0003dfd2) scroll_navstr_pane_g1

0xb399,	// (0x0003dfdf) scroll_navstr_pane_t1_ParamLimits

0xb399,	// (0x0003dfdf) scroll_navstr_pane_t1

0x1a1c,	// (0x00034662) bg_button_pane_cp014

0x1a1c,	// (0x00034662) bg_button_pane_cp030

0x3a29,	// (0x0003666f) list_double_fisheye_pane_g4_ParamLimits

0x3a29,	// (0x0003666f) list_double_fisheye_pane_g4

0x3a35,	// (0x0003667b) list_double_fisheye_pane_g5_ParamLimits

0x3a35,	// (0x0003667b) list_double_fisheye_pane_g5

0x1987,	// (0x000345cd) sp_fs_scroll_pane_cp03

0xd8f8,	// (0x0004053e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1715,	// (0x0003435b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x00042940) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x1721,	// (0x00034367) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb28b,	// (0x0003ded1) sp_fs_scroll_pane_cp02

0xc66e,	// (0x0003f2b4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc66e,	// (0x0003f2b4) popup_sp_fs_calendar_preview_list_single_pane

0x43bf,	// (0x00037005) main_cam6_pano_pane

0xd8c7,	// (0x0004050d) main_mup3_pane_ParamLimits

0x43bf,	// (0x00037005) main_phacti_pane

0xab7d,	// (0x0003d7c3) bg_button_pane_cp11

0xab95,	// (0x0003d7db) main_mobtv_info_pane_g2_ParamLimits

0xab95,	// (0x0003d7db) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x000428a0) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x000428a0) main_mobtv_info_pane_g

0xad47,	// (0x0003d98d) sc_clock_pane_t5_ParamLimits

0xad47,	// (0x0003d98d) sc_clock_pane_t5

0xaf29,	// (0x0003db6f) main_radioblah_pane_g1_ParamLimits

0x14e0,	// (0x00034126) main_radioblah_pane_t3_ParamLimits

0x14e0,	// (0x00034126) main_radioblah_pane_t3

0x14f8,	// (0x0003413e) main_radioblah_pane_t4_ParamLimits

0x14f8,	// (0x0003413e) main_radioblah_pane_t4

0xaf47,	// (0x0003db8d) main_radioblah_text_pane_ParamLimits

0xaf47,	// (0x0003db8d) main_radioblah_text_pane

0xaf54,	// (0x0003db9a) main_radioblah_info_pane_g1_ParamLimits

0xafe9,	// (0x0003dc2f) main_radioblah_info_pane_t4_ParamLimits

0xafe9,	// (0x0003dc2f) main_radioblah_info_pane_t4

0xd8c7,	// (0x0004050d) main_sp_fs_calendar_pane

0xb3ab,	// (0x0003dff1) main_phacti_pane_g1

0xb3b3,	// (0x0003dff9) phacti_note_pane_ParamLimits

0xb3b3,	// (0x0003dff9) phacti_note_pane

0x1a8e,	// (0x000346d4) phacti_term_pane_ParamLimits

0x1a8e,	// (0x000346d4) phacti_term_pane

0x1aa3,	// (0x000346e9) phacti_note_pane_t1_ParamLimits

0x1aa3,	// (0x000346e9) phacti_note_pane_t1

0x405b,	// (0x00036ca1) phacti_term_pane_g1

0x4063,	// (0x00036ca9) phacti_term_pane_t1_ParamLimits

0x4063,	// (0x00036ca9) phacti_term_pane_t1

0x1aec,	// (0x00034732) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1af4,	// (0x0003473a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x00042a0a) popup_sp_fs_calendar_preview_list_single_pane_g

0x1afc,	// (0x00034742) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1afc,	// (0x00034742) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1b12,	// (0x00034758) aid_popup_sp_fs_bg_corner_pane

0xe87e,	// (0x000414c4) popup_sp_fs_calendar_preview_bg_pane_g1

0x43bf,	// (0x00037005) popup_sp_fs_calendar_preview_bg_pane

0x1b1a,	// (0x00034760) popup_sp_fs_calendar_preview_list_pane

0xd8c7,	// (0x0004050d) bg_main_sp_fs_cale_pane_ParamLimits

0xd8c7,	// (0x0004050d) bg_main_sp_fs_cale_pane

0x408d,	// (0x00036cd3) listscroll_cale_mrui_pane_ParamLimits

0x408d,	// (0x00036cd3) listscroll_cale_mrui_pane

0x40a1,	// (0x00036ce7) listscroll_sp_fs_schedule_track_pane

0x40aa,	// (0x00036cf0) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x40aa,	// (0x00036cf0) main_sp_fs_ctrlbar_pane_cp01

0x1b59,	// (0x0003479f) main_sp_fs_ribbon_pane

0x1b61,	// (0x000347a7) popup_sp_fs_cale_preview_window

0xb3f6,	// (0x0003e03c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb3f6,	// (0x0003e03c) list_single_sp_fs_schedule_track_pane

0x4650,	// (0x00037296) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x4650,	// (0x00037296) bg_sp_fs_highlight_list_pane_cp03

0xb418,	// (0x0003e05e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb418,	// (0x0003e05e) list_single_sp_fs_schedule_track_pane_g1

0xb424,	// (0x0003e06a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb424,	// (0x0003e06a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x00042a0f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x00042a0f) list_single_sp_fs_schedule_track_pane_g

0xb430,	// (0x0003e076) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb430,	// (0x0003e076) list_single_sp_fs_schedule_track_pane_t1

0xb448,	// (0x0003e08e) sp_fs_schedule_track_pane_ParamLimits

0xb448,	// (0x0003e08e) sp_fs_schedule_track_pane

0x1b73,	// (0x000347b9) sp_fs_schedule_track_pane_g1

0x1b7b,	// (0x000347c1) sp_fs_schedule_track_pane_g2

0x1b83,	// (0x000347c9) sp_fs_schedule_track_pane_g3

0x1b8b,	// (0x000347d1) sp_fs_schedule_track_pane_g4

0x1b93,	// (0x000347d9) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x00042a14) sp_fs_schedule_track_pane_g

0x0443,	// (0x00033089) bg_sp_fs_schedule_viewer_highlight_g1

0xc968,	// (0x0003f5ae) bg_sp_fs_schedule_viewer_highlight_g2

0x044b,	// (0x00033091) bg_sp_fs_schedule_viewer_highlight_g3

0x0453,	// (0x00033099) bg_sp_fs_schedule_viewer_highlight_g4

0x06cc,	// (0x00033312) bg_sp_fs_schedule_viewer_highlight_g5

0x0463,	// (0x000330a9) bg_sp_fs_schedule_viewer_highlight_g6

0x046b,	// (0x000330b1) bg_sp_fs_schedule_viewer_highlight_g7

0x0473,	// (0x000330b9) bg_sp_fs_schedule_viewer_highlight_g8

0xc948,	// (0x0003f58e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x00042a1f) bg_sp_fs_schedule_viewer_highlight_g

0x43bf,	// (0x00037005) bg_main_sp_fs_ribbon_pane

0xb458,	// (0x0003e09e) main_sp_fs_ribbon_pane_g1

0x1b9b,	// (0x000347e1) main_sp_fs_ribbon_pane_t1

0xb461,	// (0x0003e0a7) main_sp_fs_ribbon_pane_t2

0x1baa,	// (0x000347f0) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x00042a32) main_sp_fs_ribbon_pane_t

0x1bb9,	// (0x000347ff) main_sp_fs_ribbon_scheduler_pane

0x1bc1,	// (0x00034807) bg_main_sp_fs_ribbon_pane_g1

0x1bca,	// (0x00034810) bg_main_sp_fs_ribbon_pane_g2

0x1bd3,	// (0x00034819) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x00042a39) bg_main_sp_fs_ribbon_pane_g

0x1bdb,	// (0x00034821) main_sp_fs_ribbon_scheduler_pane_g1

0x1be4,	// (0x0003482a) main_sp_fs_ribbon_scheduler_pane_g2

0x1bed,	// (0x00034833) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x00042a40) main_sp_fs_ribbon_scheduler_pane_g

0x1bf6,	// (0x0003483c) list_cale_mrui_pane

0xb470,	// (0x0003e0b6) sp_fs_scroll_pane_cp07_ParamLimits

0xb470,	// (0x0003e0b6) sp_fs_scroll_pane_cp07

0xb486,	// (0x0003e0cc) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb486,	// (0x0003e0cc) bg_sp_fs_schedule_viewer_highlight

0x1bff,	// (0x00034845) list_single_sp_fs_schedule_track_pane_cp01

0x1c07,	// (0x0003484d) list_sp_fs_schedule_track_pane

0x1c0f,	// (0x00034855) sp_fs_scroll_pane_cp06_ParamLimits

0x1c0f,	// (0x00034855) sp_fs_scroll_pane_cp06

0xe87e,	// (0x000414c4) bgmain_sp_fs_calendar_pane_g1

0x40bb,	// (0x00036d01) list_single_cale_mrui_pane_ParamLimits

0x40bb,	// (0x00036d01) list_single_cale_mrui_pane

0x40ea,	// (0x00036d30) list_single_cale_mrui_row_pane_ParamLimits

0x40ea,	// (0x00036d30) list_single_cale_mrui_row_pane

0x40f7,	// (0x00036d3d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x40f7,	// (0x00036d3d) list_single_cale_mrui_row_pane_g1

0x412f,	// (0x00036d75) list_single_cale_mrui_row_pane_t1_ParamLimits

0x412f,	// (0x00036d75) list_single_cale_mrui_row_pane_t1

0x4141,	// (0x00036d87) list_single_cale_mrui_row_pane_t2_ParamLimits

0x4141,	// (0x00036d87) list_single_cale_mrui_row_pane_t2

0x41a7,	// (0x00036ded) list_single_cale_mrui_row_pane_t3_ParamLimits

0x41a7,	// (0x00036ded) list_single_cale_mrui_row_pane_t3

0x41d6,	// (0x00036e1c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x41d6,	// (0x00036e1c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x00042a4c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x00042a4c) list_single_cale_mrui_row_pane_t

0x4205,	// (0x00036e4b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x4205,	// (0x00036e4b) list_single_cmail_header_editor_pane_bg_cp01

0x4227,	// (0x00036e6d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x4227,	// (0x00036e6d) list_single_cmail_header_editor_pane_bg_cp02

0xb493,	// (0x0003e0d9) main_radioblah_text_pane_t1_ParamLimits

0xb493,	// (0x0003e0d9) main_radioblah_text_pane_t1

0x1cd6,	// (0x0003491c) cam6_indi_pane_cp01

0x1cde,	// (0x00034924) cam6_mode_pane_cp01

0x1ce6,	// (0x0003492c) cam6_pano_pane

0x1cef,	// (0x00034935) cam6_zoom_pane_cp01

0x1cf7,	// (0x0003493d) cam6_pano_image_pane

0x1d02,	// (0x00034948) cam6_pano_pane_g1

0x137a,	// (0x00033fc0) cam6_pano_pane_g2

0x1d0b,	// (0x00034951) cam6_pano_pane_g3

0x1d14,	// (0x0003495a) cam6_pano_pane_g4

0xee04,	// (0x00041a4a) cam6_pano_pane_g5

0x1d1d,	// (0x00034963) cam6_pano_pane_g6

0x1d27,	// (0x0003496d) cam6_pano_pane_g7

0x1d2f,	// (0x00034975) cam6_pano_pane_g8

0x1d38,	// (0x0003497e) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x00042a55) cam6_pano_pane_g

0x43bf,	// (0x00037005) main_browser_tag_pane

0x1a6f,	// (0x000346b5) grid_navstr_albumart_pane

0x1d43,	// (0x00034989) cell_navstr_albumart_pane_ParamLimits

0x1d43,	// (0x00034989) cell_navstr_albumart_pane

0xd141,	// (0x0003fd87) cell_navstr_albumart_pane_g1

0xe242,	// (0x00040e88) cell_navstr_albumart_pane_g2

0xe252,	// (0x00040e98) cell_navstr_albumart_pane_g3

0xe24a,	// (0x00040e90) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x00042a68) cell_navstr_albumart_pane_g

0xb4b0,	// (0x0003e0f6) bt_list_pane_ParamLimits

0xb4b0,	// (0x0003e0f6) bt_list_pane

0xb4d7,	// (0x0003e11d) bt_list_pane_t1

0xb4e6,	// (0x0003e12c) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x00042a71) bt_list_pane_t

0x43bf,	// (0x00037005) main_cale_prevew_pane

0xb4f5,	// (0x0003e13b) popup_cale_preview_window_ParamLimits

0xb4f5,	// (0x0003e13b) popup_cale_preview_window

0xd8c7,	// (0x0004050d) bg_popup_preview_window_pane_cp05_ParamLimits

0xd8c7,	// (0x0004050d) bg_popup_preview_window_pane_cp05

0x1d65,	// (0x000349ab) list_cale_preview_pane_ParamLimits

0x1d65,	// (0x000349ab) list_cale_preview_pane

0xb50c,	// (0x0003e152) list_double_cale_preview_pane_ParamLimits

0xb50c,	// (0x0003e152) list_double_cale_preview_pane

0xb51e,	// (0x0003e164) list_single_cale_preview_pane_ParamLimits

0xb51e,	// (0x0003e164) list_single_cale_preview_pane

0xb532,	// (0x0003e178) list_single_cale_preview_pane_g1

0xb53a,	// (0x0003e180) list_single_cale_preview_pane_t1_ParamLimits

0xb53a,	// (0x0003e180) list_single_cale_preview_pane_t1

0xb54f,	// (0x0003e195) list_double_cale_preview_pane_g1

0xb557,	// (0x0003e19d) list_double_cale_preview_pane_t1_ParamLimits

0xb557,	// (0x0003e19d) list_double_cale_preview_pane_t1

0xb56c,	// (0x0003e1b2) list_double_cale_preview_pane_t2_ParamLimits

0xb56c,	// (0x0003e1b2) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x00042a76) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x00042a76) list_double_cale_preview_pane_t

0x43bf,	// (0x00037005) main_ezdial_pane

0xd8c7,	// (0x0004050d) main_sp_fs_email_pane_ParamLimits

0xb15b,	// (0x0003dda1) cmail_ddmenu_btn01_pane_ParamLimits

0xb15b,	// (0x0003dda1) cmail_ddmenu_btn01_pane

0xb178,	// (0x0003ddbe) cmail_ddmenu_btn02_pane_ParamLimits

0xb178,	// (0x0003ddbe) cmail_ddmenu_btn02_pane

0xb196,	// (0x0003dddc) cmail_ddmenu_btn03_pane_ParamLimits

0xb196,	// (0x0003dddc) cmail_ddmenu_btn03_pane

0x3ae9,	// (0x0003672f) main_sp_fs_ctrlbar_pane_ParamLimits

0x3b05,	// (0x0003674b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb295,	// (0x0003dedb) list_cmail_body_pane_ParamLimits

0x1996,	// (0x000345dc) bg_button_pane_cp12

0x19ab,	// (0x000345f1) list_single_cmail_header_detail_pane_g3_ParamLimits

0x19ab,	// (0x000345f1) list_single_cmail_header_detail_pane_g3

0x4023,	// (0x00036c69) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4023,	// (0x00036c69) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x000429fb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x000429fb) list_single_cmail_header_detail_pane_t

0x4078,	// (0x00036cbe) phacti_term_pane_t2_ParamLimits

0x4078,	// (0x00036cbe) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x00042a05) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x00042a05) phacti_term_pane_t

0x1d71,	// (0x000349b7) aid_size_list_single_double

0xb584,	// (0x0003e1ca) popup_ezdial_listscroll_window

0xb5a5,	// (0x0003e1eb) popup_number_entry_window_cp01

0xcfe0,	// (0x0003fc26) bg_popup_call_pane_cp09

0x1d7d,	// (0x000349c3) ezdial_list_pane

0x1d85,	// (0x000349cb) scroll_pane_cp23

0xe659,	// (0x0004129f) bg_button_pane_cp028_ParamLimits

0xe659,	// (0x0004129f) bg_button_pane_cp028

0xb5b3,	// (0x0003e1f9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb5b3,	// (0x0003e1f9) cmail_ddmenu_btn01_pane_g1

0xb5c5,	// (0x0003e20b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb5c5,	// (0x0003e20b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x00042a7b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x00042a7b) cmail_ddmenu_btn01_pane_g

0x1d8d,	// (0x000349d3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1d8d,	// (0x000349d3) cmail_ddmenu_btn01_pane_t1

0xe42d,	// (0x00041073) bg_button_pane_cp029_ParamLimits

0xe42d,	// (0x00041073) bg_button_pane_cp029

0xb5c5,	// (0x0003e20b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb5c5,	// (0x0003e20b) cmail_ddmenu_btn02_pane_g1

0xb5dd,	// (0x0003e223) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb5dd,	// (0x0003e223) cmail_ddmenu_btn02_pane_t1

0x4650,	// (0x00037296) bg_button_pane_cp031_ParamLimits

0x4650,	// (0x00037296) bg_button_pane_cp031

0xb5c5,	// (0x0003e20b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb5c5,	// (0x0003e20b) cmail_ddmenu_btn03_pane_g1

0xb5dd,	// (0x0003e223) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb5dd,	// (0x0003e223) cmail_ddmenu_btn03_pane_t1

0x8fbb,	// (0x0003bc01) cell_dialer2_keypad_pane_t1_ParamLimits

0x8fd5,	// (0x0003bc1b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8fd5,	// (0x0003bc1b) cell_dialer2_keypad_pane_t1_copy1

0xaa1d,	// (0x0003d663) ncimui_group_button_pane

0xd8c7,	// (0x0004050d) main_sp_fs_calendar_pane_ParamLimits

0xb2b9,	// (0x0003deff) list_single_cmail_header_caption_pane_ParamLimits

0x1b22,	// (0x00034768) aid_recal_txt_sm_pane

0x43bf,	// (0x00037005) mian_recal_day_pane

0x1b61,	// (0x000347a7) popup_sp_fs_cale_preview_window_ParamLimits

0x43bf,	// (0x00037005) list_recal_day_pane

0x1dc4,	// (0x00034a0a) list_single_recal_day_pane_ParamLimits

0x1dc4,	// (0x00034a0a) list_single_recal_day_pane

0x1dd6,	// (0x00034a1c) list_single_recal_day_pane_g1_ParamLimits

0x1dd6,	// (0x00034a1c) list_single_recal_day_pane_g1

0x1de2,	// (0x00034a28) list_single_recal_day_pane_g2_ParamLimits

0x1de2,	// (0x00034a28) list_single_recal_day_pane_g2

0x1df1,	// (0x00034a37) list_single_recal_day_pane_g3_ParamLimits

0x1df1,	// (0x00034a37) list_single_recal_day_pane_g3

0xb601,	// (0x0003e247) list_single_recal_day_pane_g4_ParamLimits

0xb601,	// (0x0003e247) list_single_recal_day_pane_g4

0x1dfd,	// (0x00034a43) list_single_recal_day_pane_g5_ParamLimits

0x1dfd,	// (0x00034a43) list_single_recal_day_pane_g5

0x1e0c,	// (0x00034a52) list_single_recal_day_pane_g6_ParamLimits

0x1e0c,	// (0x00034a52) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x00042a8a) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x00042a8a) list_single_recal_day_pane_g

0x1e18,	// (0x00034a5e) list_single_recal_day_pane_t1

0x1e26,	// (0x00034a6c) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x00042a97) list_single_recal_day_pane_t

0xb614,	// (0x0003e25a) ncimui_query_button_pane_ParamLimits

0xb614,	// (0x0003e25a) ncimui_query_button_pane

0xb624,	// (0x0003e26a) ncimui_query_button_pane_t1_ParamLimits

0xb624,	// (0x0003e26a) ncimui_query_button_pane_t1

0x1e34,	// (0x00034a7a) ncimui_query_button_pane_t2_ParamLimits

0x1e34,	// (0x00034a7a) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x00042a9c) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x00042a9c) ncimui_query_button_pane_t

0xb637,	// (0x0003e27d) query_button_pane_ParamLimits

0xb637,	// (0x0003e27d) query_button_pane

0x43bf,	// (0x00037005) bg_button_pane_cp0028

0x1e47,	// (0x00034a8d) query_button_pane_t1

0x740d,	// (0x0003a053) main_tport_pane_ParamLimits

0xb1c4,	// (0x0003de0a) bg_popup_window_pane_cp01_ParamLimits

0xb1c4,	// (0x0003de0a) bg_popup_window_pane_cp01

0xb1d1,	// (0x0003de17) heading_pane_cp08_ParamLimits

0xb1d1,	// (0x0003de17) heading_pane_cp08

0xb1df,	// (0x0003de25) heading_pane_cp07_ParamLimits

0xb1df,	// (0x0003de25) heading_pane_cp07

0x1959,	// (0x0003459f) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x000429e8) cell_tport_appsw_pane_g

0x33eb,	// (0x00036031) input_candi_list_open_g1

0xcb03,	// (0x0003f749) list_cale_time_pane_g6_ParamLimits

0xcb03,	// (0x0003f749) list_cale_time_pane_g6

0x7e53,	// (0x0003aa99) aid_size_touch_calib_1_ParamLimits

0x7e53,	// (0x0003aa99) aid_size_touch_calib_1

0x7e5f,	// (0x0003aaa5) aid_size_touch_calib_2_ParamLimits

0x7e5f,	// (0x0003aaa5) aid_size_touch_calib_2

0x7e6d,	// (0x0003aab3) aid_size_touch_calib_3_ParamLimits

0x7e6d,	// (0x0003aab3) aid_size_touch_calib_3

0x7e7d,	// (0x0003aac3) aid_size_touch_calib_4_ParamLimits

0x7e7d,	// (0x0003aac3) aid_size_touch_calib_4

0x7e8b,	// (0x0003aad1) main_touch_calib_button_group_pane_ParamLimits

0x7e8b,	// (0x0003aad1) main_touch_calib_button_group_pane

0x7e99,	// (0x0003aadf) main_touch_calib_pane_g1_ParamLimits

0x7ea5,	// (0x0003aaeb) main_touch_calib_pane_g2_ParamLimits

0x7eb1,	// (0x0003aaf7) main_touch_calib_pane_g3_ParamLimits

0x7ebd,	// (0x0003ab03) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x000423bb) main_touch_calib_pane_g_ParamLimits

0x7ec9,	// (0x0003ab0f) main_touch_calib_pane_t1_ParamLimits

0x7ee0,	// (0x0003ab26) main_touch_calib_pane_t2_ParamLimits

0x7ef7,	// (0x0003ab3d) main_touch_calib_pane_t3_ParamLimits

0x7f0b,	// (0x0003ab51) main_touch_calib_pane_t4_ParamLimits

0x7f1f,	// (0x0003ab65) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x000423c4) main_touch_calib_pane_t_ParamLimits

0xebeb,	// (0x00041831) list_single_fp_cale_pane_g3_ParamLimits

0xebeb,	// (0x00041831) list_single_fp_cale_pane_g3

0xd8c7,	// (0x0004050d) bg_button_pane_cp012_ParamLimits

0xd8c7,	// (0x0004050d) bg_vkb2_func_pane_cp03_ParamLimits

0x9d6f,	// (0x0003c9b5) cell_vitu2_function_top_pane_g1_ParamLimits

0xd8c7,	// (0x0004050d) bg_vkb2_func_pane_cp04_ParamLimits

0xa9bb,	// (0x0003d601) main_ncimui_button_group_pane_ParamLimits

0xa9bb,	// (0x0003d601) main_ncimui_button_group_pane

0xaa0b,	// (0x0003d651) main_ncimui_pane_t3_ParamLimits

0xaa0b,	// (0x0003d651) main_ncimui_pane_t3

0x1a85,	// (0x000346cb) phacti_button_group_pane

0x1d71,	// (0x000349b7) aid_size_list_single_double_ParamLimits

0xb584,	// (0x0003e1ca) popup_ezdial_listscroll_window_ParamLimits

0xb5a5,	// (0x0003e1eb) popup_number_entry_window_cp01_ParamLimits

0xb644,	// (0x0003e28a) phacti_button_pane_ParamLimits

0xb644,	// (0x0003e28a) phacti_button_pane

0x43bf,	// (0x00037005) bg_button_pane_cp14

0x1e55,	// (0x00034a9b) phacti_button_pane_t1

0xb655,	// (0x0003e29b) main_touch_calib_button_pane_ParamLimits

0xb655,	// (0x0003e29b) main_touch_calib_button_pane

0xc558,	// (0x0003f19e) bg_button_pane_cp18_ParamLimits

0xc558,	// (0x0003f19e) bg_button_pane_cp18

0x1e63,	// (0x00034aa9) main_touch_calib_button_pane_t1_ParamLimits

0x1e63,	// (0x00034aa9) main_touch_calib_button_pane_t1

0x1e79,	// (0x00034abf) main_touch_calib_button_pane_t2_ParamLimits

0x1e79,	// (0x00034abf) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x00042aa1) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x00042aa1) main_touch_calib_button_pane_t

0x43bf,	// (0x00037005) cell_ncimui_button_pane

0x43bf,	// (0x00037005) bg_button_pane_cp032

0x1e97,	// (0x00034add) cell_ncimui_button_pane_t1

0x9031,	// (0x0003bc77) image3_infobar_pane_ParamLimits

0x9031,	// (0x0003bc77) image3_infobar_pane

0xad69,	// (0x0003d9af) fs_bigclock_status_pane_ParamLimits

0xad69,	// (0x0003d9af) fs_bigclock_status_pane

0xad76,	// (0x0003d9bc) main_fs_bigclock_clock_pane_ParamLimits

0xad76,	// (0x0003d9bc) main_fs_bigclock_clock_pane

0xad9a,	// (0x0003d9e0) main_fs_bigclock_indi_pane_ParamLimits

0xad9a,	// (0x0003d9e0) main_fs_bigclock_indi_pane

0xadcd,	// (0x0003da13) main_fs_bigclock_swipe_pane_ParamLimits

0xadcd,	// (0x0003da13) main_fs_bigclock_swipe_pane

0x43bf,	// (0x00037005) main_fs_clock_dumped_data

0xadff,	// (0x0003da45) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xadff,	// (0x0003da45) list_single_fs_bigclock_indicator_pane_g1

0xae23,	// (0x0003da69) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xae23,	// (0x0003da69) list_single_fs_bigclock_indicator_pane_g2

0xae3d,	// (0x0003da83) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xae3d,	// (0x0003da83) list_single_fs_bigclock_indicator_pane_g3

0xae57,	// (0x0003da9d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xae57,	// (0x0003da9d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x000428d4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x000428d4) list_single_fs_bigclock_indicator_pane_g

0xae7d,	// (0x0003dac3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xae7d,	// (0x0003dac3) list_single_fs_bigclock_indicator_pane_t1

0xaea5,	// (0x0003daeb) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xaea5,	// (0x0003daeb) list_single_fs_bigclock_indicator_pane_t2

0xaecd,	// (0x0003db13) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xaecd,	// (0x0003db13) list_single_fs_bigclock_indicator_pane_t3

0xaef5,	// (0x0003db3b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xaef5,	// (0x0003db3b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x000428df) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x000428df) list_single_fs_bigclock_indicator_pane_t

0x1ea5,	// (0x00034aeb) image3_infobar_fav_pane_ParamLimits

0x1ea5,	// (0x00034aeb) image3_infobar_fav_pane

0x1eb5,	// (0x00034afb) image3_infobar_loc_pane_ParamLimits

0x1eb5,	// (0x00034afb) image3_infobar_loc_pane

0x1ec9,	// (0x00034b0f) image3_infobar_time_pane_ParamLimits

0x1ec9,	// (0x00034b0f) image3_infobar_time_pane

0xe87e,	// (0x000414c4) image3_infobar_time_pane_g1

0x1ed9,	// (0x00034b1f) image3_infobar_time_pane_t1

0xe87e,	// (0x000414c4) image3_infobar_loc_pane_g1

0x1ee7,	// (0x00034b2d) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x00042aa6) image3_infobar_loc_pane_g

0x1eef,	// (0x00034b35) image3_infobar_loc_pane_t1

0xe87e,	// (0x000414c4) image3_infobar_fav_pane_g1

0x1efd,	// (0x00034b43) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x00042aab) image3_infobar_fav_pane_g

0x1f05,	// (0x00034b4b) fs_bigclock_status_battery_pane

0x1f0e,	// (0x00034b54) fs_bigclock_status_signal_pane

0x1f17,	// (0x00034b5d) fs_bigclock_status_title_pane

0x1f20,	// (0x00034b66) fs_bigclock_status_signal_pane_g1

0x1f29,	// (0x00034b6f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x00042ab0) fs_bigclock_status_signal_pane_g

0x1f31,	// (0x00034b77) fs_bigclock_status_battery_pane_g1

0x1f3a,	// (0x00034b80) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x00042ab5) fs_bigclock_status_battery_pane_g

0x1f42,	// (0x00034b88) fs_bigclock_status_title_pane_t1

0xe87e,	// (0x000414c4) main_fs_bigclock_clock_pane_g1

0x1f50,	// (0x00034b96) main_fs_bigclock_clock_pane_g2

0x1f50,	// (0x00034b96) main_fs_bigclock_clock_pane_g3

0x1f50,	// (0x00034b96) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x00042aba) main_fs_bigclock_clock_pane_g

0xb665,	// (0x0003e2ab) main_fs_bigclock_clock_pane_t1

0xb673,	// (0x0003e2b9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x00042ac3) main_fs_bigclock_clock_pane_t

0x1f58,	// (0x00034b9e) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1f58,	// (0x00034b9e) list_single_fs_bigclock_indicator_pane

0xb682,	// (0x0003e2c8) list_single_fs_bigclock_pane_ParamLimits

0xb682,	// (0x0003e2c8) list_single_fs_bigclock_pane

0x1f72,	// (0x00034bb8) main_fs_bigclock_indicator_pane_t1

0x1f81,	// (0x00034bc7) list_single_fs_bigclock_pane_g1

0x1f89,	// (0x00034bcf) list_single_fs_bigclock_pane_t1

0xe87e,	// (0x000414c4) main_fs_bigclock_swipe_pane_g1

0x1fc9,	// (0x00034c0f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x00042ad4) main_fs_bigclock_swipe_pane_g

0x1fd1,	// (0x00034c17) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1fd1,	// (0x00034c17) main_fs_bigclock_swipe_pane_t1

0x63c4,	// (0x0003900a) call_type_pane_ParamLimits

0x43bf,	// (0x00037005) main_btmg_pane

0x4123,	// (0x00036d69) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4123,	// (0x00036d69) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x00042a47) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x00042a47) list_single_cale_mrui_row_pane_g

0x1dab,	// (0x000349f1) list_recal_vselct_arw_lo_pane

0x1db3,	// (0x000349f9) list_recal_vselct_arw_up_pane

0x1dbb,	// (0x00034a01) list_recal_vselct_pane

0x1fee,	// (0x00034c34) btmg_button_pane

0xb6e6,	// (0x0003e32c) main_btmg_pane_g1

0x43bf,	// (0x00037005) bg_button_pane_cp044

0x1ff8,	// (0x00034c3e) btmg_button_pane_t1

0xe425,	// (0x0004106b) aid_listscroll_gen

0xd8c7,	// (0x0004050d) main_cntbar_detail_pane

0x1977,	// (0x000345bd) list_cmail_folder_pane

0x1987,	// (0x000345cd) sp_fs_scroll_pane_cp03_ParamLimits

0x4243,	// (0x00036e89) list_single_fs_dyc_pane_cp01_ParamLimits

0x4243,	// (0x00036e89) list_single_fs_dyc_pane_cp01

0x2006,	// (0x00034c4c) aid_size_cmail_indent

0x4274,	// (0x00036eba) list_single_dyc_row_pane_cp01

0xb70e,	// (0x0003e354) cntbar_detail_list_pane_ParamLimits

0xb70e,	// (0x0003e354) cntbar_detail_list_pane

0xb748,	// (0x0003e38e) main_cntbar_detail_cont_pane_ParamLimits

0xb748,	// (0x0003e38e) main_cntbar_detail_cont_pane

0x63b8,	// (0x00038ffe) scroll_pane_cp032_ParamLimits

0x63b8,	// (0x00038ffe) scroll_pane_cp032

0xb754,	// (0x0003e39a) cntbar_detail_list_event_pane_ParamLimits

0xb754,	// (0x0003e39a) cntbar_detail_list_event_pane

0xb71a,	// (0x0003e360) cntbar_detail_list_shct_pane

0xc9b6,	// (0x0003f5fc) aid_list_gen

0x2018,	// (0x00034c5e) aid_scroll

0x2021,	// (0x00034c67) aid_size_touch_scroll_bar

0x0ad6,	// (0x0003371c) aid_list_double

0x2033,	// (0x00034c79) aid_list_single

0x427d,	// (0x00036ec3) aid_list_single_lg

0x4286,	// (0x00036ecc) aid_list_z_g_a_sm

0x428e,	// (0x00036ed4) aid_list_z_g_d

0x4296,	// (0x00036edc) aid_txt_z_prm

0x42a4,	// (0x00036eea) aid_txt_z_prm_cp01

0x42b2,	// (0x00036ef8) aid_txt_z_sec

0xb768,	// (0x0003e3ae) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb768,	// (0x0003e3ae) main_cntbar_detail_cont_pane_g1

0xb775,	// (0x0003e3bb) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb775,	// (0x0003e3bb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x00042ad9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x00042ad9) main_cntbar_detail_cont_pane_g

0x2063,	// (0x00034ca9) main_cntbar_detail_cont_pane_t1

0x2071,	// (0x00034cb7) main_cntbar_detail_cont_pane_t2

0x207f,	// (0x00034cc5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x00042ade) main_cntbar_detail_cont_pane_t

0xb781,	// (0x0003e3c7) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb781,	// (0x0003e3c7) cell_cntbar_detail_list_shct_pane

0x208d,	// (0x00034cd3) cntbar_detail_list_shct_pane_g1

0x2096,	// (0x00034cdc) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x00042ae5) cntbar_detail_list_shct_pane_g

0xb795,	// (0x0003e3db) cntbar_detail_list_event_pane_g1_ParamLimits

0xb795,	// (0x0003e3db) cntbar_detail_list_event_pane_g1

0xb7a1,	// (0x0003e3e7) cntbar_detail_list_event_pane_g2_ParamLimits

0xb7a1,	// (0x0003e3e7) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x00042aea) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x00042aea) cntbar_detail_list_event_pane_g

0xb80d,	// (0x0003e453) cntbar_detail_list_event_pane_t1_ParamLimits

0xb80d,	// (0x0003e453) cntbar_detail_list_event_pane_t1

0xb822,	// (0x0003e468) cntbar_detail_list_event_pane_t2_ParamLimits

0xb822,	// (0x0003e468) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x00042af7) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x00042af7) cntbar_detail_list_event_pane_t

0xe87e,	// (0x000414c4) cell_cntbar_detail_list_shct_pane_g1

0x6747,	// (0x0003938d) navi_pane_mv_g3

0xd8c7,	// (0x0004050d) main_cntbar_detail_pane_ParamLimits

0x43bf,	// (0x00037005) main_notif_wgt_pane

0x8ce3,	// (0x0003b929) aid_tch_main_mp4_pane_g4

0x8f18,	// (0x0003bb5e) popup_slider_window_cp02

0x1da2,	// (0x000349e8) list_recal_day_event_pane

0xb6ee,	// (0x0003e334) cntbar_detail_btn_pane_ParamLimits

0xb6ee,	// (0x0003e334) cntbar_detail_btn_pane

0xb6fe,	// (0x0003e344) cntbar_detail_btn_pane_cp01_ParamLimits

0xb6fe,	// (0x0003e344) cntbar_detail_btn_pane_cp01

0xb71a,	// (0x0003e360) cntbar_detail_list_shct_pane_ParamLimits

0xb726,	// (0x0003e36c) cntbar_detail_pane_g1_ParamLimits

0xb726,	// (0x0003e36c) cntbar_detail_pane_g1

0xb732,	// (0x0003e378) cntbar_detail_pane_t1_ParamLimits

0xb732,	// (0x0003e378) cntbar_detail_pane_t1

0xb7ad,	// (0x0003e3f3) cntbar_detail_list_event_pane_g3_ParamLimits

0xb7ad,	// (0x0003e3f3) cntbar_detail_list_event_pane_g3

0xb7c5,	// (0x0003e40b) cntbar_detail_list_event_pane_g4_ParamLimits

0xb7c5,	// (0x0003e40b) cntbar_detail_list_event_pane_g4

0xb7dd,	// (0x0003e423) cntbar_detail_list_event_pane_g5_ParamLimits

0xb7dd,	// (0x0003e423) cntbar_detail_list_event_pane_g5

0xb7f5,	// (0x0003e43b) cntbar_detail_list_event_pane_g6_ParamLimits

0xb7f5,	// (0x0003e43b) cntbar_detail_list_event_pane_g6

0xb837,	// (0x0003e47d) cntbar_detail_list_event_pane_t3_ParamLimits

0xb837,	// (0x0003e47d) cntbar_detail_list_event_pane_t3

0xb849,	// (0x0003e48f) popup_notif_wgt_window_ParamLimits

0xb849,	// (0x0003e48f) popup_notif_wgt_window

0xb859,	// (0x0003e49f) popup_submenu_window_cp01_ParamLimits

0xb859,	// (0x0003e49f) popup_submenu_window_cp01

0xcfe0,	// (0x0003fc26) bg_popup_window_pane_cp10

0x209f,	// (0x00034ce5) listscroll_notif_wgt_pane

0x20a9,	// (0x00034cef) list_notif_wgt_window

0x20b2,	// (0x00034cf8) scroll_pane_cp033

0x20bb,	// (0x00034d01) list_notif_wgt_row_pane_ParamLimits

0x20bb,	// (0x00034d01) list_notif_wgt_row_pane

0x20cf,	// (0x00034d15) aid_size_list_notif_wgt_del

0x20d8,	// (0x00034d1e) list_notif_wgt_row_pane_g1

0x20e0,	// (0x00034d26) list_notif_wgt_row_pane_g2

0x20e8,	// (0x00034d2e) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x00042afe) list_notif_wgt_row_pane_g

0x20f1,	// (0x00034d37) list_notif_wgt_row_pane_t1

0x20ff,	// (0x00034d45) list_notif_wgt_row_pane_t2

0x210d,	// (0x00034d53) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x00042b05) list_notif_wgt_row_pane_t

0x0726,	// (0x0003336c) list_recal_day_event_pane_g1

0x211b,	// (0x00034d61) list_recal_day_event_pane_t1

0x43bf,	// (0x00037005) bg_button_pane_cp045

0x212a,	// (0x00034d70) cntbar_detail_btn_pane_t1

0xe42d,	// (0x00041073) main_callh_pane_ParamLimits

0xe42d,	// (0x00041073) main_callh_pane

0x43bf,	// (0x00037005) main_coverflow0_pane

0x43bf,	// (0x00037005) main_wgtman_pane

0xade5,	// (0x0003da2b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xade5,	// (0x0003da2b) main_fs_bigclock_unlock_btn_pane

0x1951,	// (0x00034597) bg_button_pane_cp16

0x1961,	// (0x000345a7) cell_tport_appsw_pane_g3

0xb867,	// (0x0003e4ad) cf0_flow_pane_ParamLimits

0xb867,	// (0x0003e4ad) cf0_flow_pane

0x2138,	// (0x00034d7e) listscroll_cf0_pane

0x2141,	// (0x00034d87) main_cf0_pane_g1

0xb876,	// (0x0003e4bc) main_cf0_pane_t1_ParamLimits

0xb876,	// (0x0003e4bc) main_cf0_pane_t1

0xb88a,	// (0x0003e4d0) main_cf0_pane_t2_ParamLimits

0xb88a,	// (0x0003e4d0) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x00042b0c) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x00042b0c) main_cf0_pane_t

0x214b,	// (0x00034d91) scroll_pane_cp11

0xb89e,	// (0x0003e4e4) cf0_flow_pane_g1

0xb8a6,	// (0x0003e4ec) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x00042b11) cf0_flow_pane_g

0xb8ae,	// (0x0003e4f4) cf0_flow_pane_t1

0x43bf,	// (0x00037005) main_call6_pane

0x43bf,	// (0x00037005) main_calllock_pane

0xb8bc,	// (0x0003e502) call6_btn_grp_pane_ParamLimits

0xb8bc,	// (0x0003e502) call6_btn_grp_pane

0xb8cb,	// (0x0003e511) call6_pane_g1_ParamLimits

0xb8cb,	// (0x0003e511) call6_pane_g1

0xb8da,	// (0x0003e520) popup_call6_1st_window_ParamLimits

0xb8da,	// (0x0003e520) popup_call6_1st_window

0xb8e8,	// (0x0003e52e) popup_call6_2nd_window_ParamLimits

0xb8e8,	// (0x0003e52e) popup_call6_2nd_window

0xb8f6,	// (0x0003e53c) cell_call6_btn_pane_ParamLimits

0xb8f6,	// (0x0003e53c) cell_call6_btn_pane

0xcfe0,	// (0x0003fc26) bg_popup_call2_in_pane_cp03

0x2156,	// (0x00034d9c) popup_call6_1st_window_g1

0x215e,	// (0x00034da4) popup_call6_1st_window_g2

0x2166,	// (0x00034dac) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x00042b16) popup_call6_1st_window_g

0x216e,	// (0x00034db4) popup_call6_1st_window_t1

0x217d,	// (0x00034dc3) popup_call6_1st_window_t2

0x218d,	// (0x00034dd3) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x00042b1d) popup_call6_1st_window_t

0xcfe0,	// (0x0003fc26) bg_popup_call2_in_pane_cp04

0x2156,	// (0x00034d9c) popup_call6_2nd_window_g1

0x215e,	// (0x00034da4) popup_call6_2nd_window_g2

0x2166,	// (0x00034dac) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x00042b16) popup_call6_2nd_window_g

0x216e,	// (0x00034db4) popup_call6_2nd_window_t1

0x43bf,	// (0x00037005) bg_button_pane_cp15

0x219d,	// (0x00034de3) cell_call6_btn_pane_g1

0x21a6,	// (0x00034dec) cell_call6_btn_pane_t1

0xb905,	// (0x0003e54b) listscroll_wgtman_pane_ParamLimits

0xb905,	// (0x0003e54b) listscroll_wgtman_pane

0xb923,	// (0x0003e569) wgtman_btn_pane_ParamLimits

0xb923,	// (0x0003e569) wgtman_btn_pane

0xce93,	// (0x0003fad9) aid_scroll_copy1

0x21b5,	// (0x00034dfb) list_wgtman_pane

0xb958,	// (0x0003e59e) wgtman_btn_pane_g1_ParamLimits

0xb958,	// (0x0003e59e) wgtman_btn_pane_g1

0xb980,	// (0x0003e5c6) wgtman_btn_pane_t1_ParamLimits

0xb980,	// (0x0003e5c6) wgtman_btn_pane_t1

0x21bf,	// (0x00034e05) wgtman_btn_pane_t2_ParamLimits

0x21bf,	// (0x00034e05) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x00042b24) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x00042b24) wgtman_btn_pane_t

0xb9b7,	// (0x0003e5fd) listrow_wgtman_pane_ParamLimits

0xb9b7,	// (0x0003e5fd) listrow_wgtman_pane

0xb9d3,	// (0x0003e619) listrow_wgtman_pane_g1

0xb9dc,	// (0x0003e622) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x00042b29) listrow_wgtman_pane_g

0x42c0,	// (0x00036f06) listrow_wgtman_pane_t1

0x42ce,	// (0x00036f14) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x00042b2e) listrow_wgtman_pane_t

0x42dc,	// (0x00036f22) wait_bar_pane_cp09

0x21d6,	// (0x00034e1c) main_calllock_btn_pane

0x21e0,	// (0x00034e26) main_calllock_pane_g1

0x43bf,	// (0x00037005) bg_button_pane_cp17

0x21eb,	// (0x00034e31) main_calllock_btn_pane_g1

0x21f4,	// (0x00034e3a) main_calllock_btn_pane_t1

0x43bf,	// (0x00037005) main_dialer3_pane

0x43bf,	// (0x00037005) main_fmrd2_pane

0xe87e,	// (0x000414c4) main_fs_bigclock_unlock_btn_pane_g1

0x220b,	// (0x00034e51) main_fs_bigclock_unlock_btn_pane_t1

0xb9e6,	// (0x0003e62c) area_fmrd2_info_pane_ParamLimits

0xb9e6,	// (0x0003e62c) area_fmrd2_info_pane

0xb9f4,	// (0x0003e63a) area_fmrd2_visual_pane_ParamLimits

0xb9f4,	// (0x0003e63a) area_fmrd2_visual_pane

0xba02,	// (0x0003e648) fmrd2_indi_pane_ParamLimits

0xba02,	// (0x0003e648) fmrd2_indi_pane

0xba0f,	// (0x0003e655) area_fmrd2_visual_pane_g1

0xba17,	// (0x0003e65d) area_fmrd2_visual_pane_t1

0xba27,	// (0x0003e66d) area_fmrd2_visual_pane_t2

0xba37,	// (0x0003e67d) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x00042b38) area_fmrd2_visual_pane_t

0xba47,	// (0x0003e68d) area_fmrd2_info_pane_g1

0xba4f,	// (0x0003e695) area_fmrd2_info_pane_t1

0xba5f,	// (0x0003e6a5) area_fmrd2_info_pane_t2

0xba6f,	// (0x0003e6b5) area_fmrd2_info_pane_t3

0xba7f,	// (0x0003e6c5) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x00042b3f) area_fmrd2_info_pane_t

0xba8d,	// (0x0003e6d3) fmrd2_indi_pane_t1

0xba9d,	// (0x0003e6e3) fmrd2_indi_pane_t2

0xbaad,	// (0x0003e6f3) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x00042b48) fmrd2_indi_pane_t

0xae66,	// (0x0003daac) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xae66,	// (0x0003daac) list_single_fs_bigclock_indicator_pane_g5

0xaf0a,	// (0x0003db50) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xaf0a,	// (0x0003db50) list_single_fs_bigclock_indicator_pane_t5

0xb3c9,	// (0x0003e00f) aid_cell_bcale_month_pane_ParamLimits

0xb3c9,	// (0x0003e00f) aid_cell_bcale_month_pane

0xb3d5,	// (0x0003e01b) bcale_month_pane_ParamLimits

0xb3d5,	// (0x0003e01b) bcale_month_pane

0xb3e5,	// (0x0003e02b) bcale_preview_pane_ParamLimits

0xb3e5,	// (0x0003e02b) bcale_preview_pane

0x1f89,	// (0x00034bcf) list_single_fs_bigclock_pane_t1_ParamLimits

0x1fa5,	// (0x00034beb) list_single_fs_bigclock_pane_t2_ParamLimits

0x1fa5,	// (0x00034beb) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x00042acf) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x00042acf) list_single_fs_bigclock_pane_t

0x2203,	// (0x00034e49) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x00042b33) main_fs_bigclock_unlock_btn_pane_g

0xbabb,	// (0x0003e701) aid_dia3_key_size_ParamLimits

0xbabb,	// (0x0003e701) aid_dia3_key_size

0xbac7,	// (0x0003e70d) aid_dia3_listrow_size_ParamLimits

0xbac7,	// (0x0003e70d) aid_dia3_listrow_size

0xbad7,	// (0x0003e71d) dia3_keypad_fun_pane_ParamLimits

0xbad7,	// (0x0003e71d) dia3_keypad_fun_pane

0xbae9,	// (0x0003e72f) dia3_keypad_num_pane_ParamLimits

0xbae9,	// (0x0003e72f) dia3_keypad_num_pane

0xbafb,	// (0x0003e741) dia3_listscroll_pane_ParamLimits

0xbafb,	// (0x0003e741) dia3_listscroll_pane

0xbb09,	// (0x0003e74f) dia3_numentry_pane_ParamLimits

0xbb09,	// (0x0003e74f) dia3_numentry_pane

0x2219,	// (0x00034e5f) dia3_list_pane

0x2224,	// (0x00034e6a) scroll_pane_cp12

0x43bf,	// (0x00037005) bg_dia3_numentry_pane

0xbb17,	// (0x0003e75d) dia3_numentry_pane_t1

0xbb26,	// (0x0003e76c) cell_dia3_key_num_pane

0xbb2e,	// (0x0003e774) cell_dia3_key0_fun_pane_ParamLimits

0xbb2e,	// (0x0003e774) cell_dia3_key0_fun_pane

0xbb3b,	// (0x0003e781) cell_dia3_key1_fun_pane_ParamLimits

0xbb3b,	// (0x0003e781) cell_dia3_key1_fun_pane

0xbb48,	// (0x0003e78e) dia3_listrow_pane

0x11e6,	// (0x00033e2c) bg_dia3_numentry_pane_g1

0x43bf,	// (0x00037005) bg_button_pane_cp21

0x222f,	// (0x00034e75) cell_dia3_key_num_pane_t1

0x223d,	// (0x00034e83) cell_dia3_key_num_pane_t2

0x224c,	// (0x00034e92) cell_dia3_key_num_pane_t3

0x225b,	// (0x00034ea1) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x00042b4f) cell_dia3_key_num_pane_t

0x43bf,	// (0x00037005) bg_button_pane_cp19

0xbb55,	// (0x0003e79b) cell_dia3_key0_fun_pane_g1

0x43bf,	// (0x00037005) bg_button_pane_cp20

0xbb5d,	// (0x0003e7a3) cell_dia3_key1_fun_pane_g1

0xbb65,	// (0x0003e7ab) area_left_week_number_pane

0xbb6e,	// (0x0003e7b4) area_top_day_name_pane

0xbb77,	// (0x0003e7bd) frame_month_view_pane

0xbb81,	// (0x0003e7c7) grid_month_view_pane

0xbb8b,	// (0x0003e7d1) cell_top_day_name_pane_ParamLimits

0xbb8b,	// (0x0003e7d1) cell_top_day_name_pane

0xbba5,	// (0x0003e7eb) cell_area_left_week_number_pane_ParamLimits

0xbba5,	// (0x0003e7eb) cell_area_left_week_number_pane

0xbbb9,	// (0x0003e7ff) cell_month_view_pane_ParamLimits

0xbbb9,	// (0x0003e7ff) cell_month_view_pane

0x226a,	// (0x00034eb0) frm_month_g1

0xbbd6,	// (0x0003e81c) frm_month_g2

0xbbe0,	// (0x0003e826) frm_month_g3

0xbbea,	// (0x0003e830) frm_month_g4

0xbbf4,	// (0x0003e83a) frm_month_g5

0xbbfe,	// (0x0003e844) frm_month_g6

0xbc08,	// (0x0003e84e) frm_month_g7

0x2273,	// (0x00034eb9) frm_month_g8

0xbc12,	// (0x0003e858) frm_month_g9

0xbc1b,	// (0x0003e861) frm_month_g10

0xbc24,	// (0x0003e86a) frm_month_g11

0xbc2d,	// (0x0003e873) frm_month_g12

0xbc36,	// (0x0003e87c) frm_month_g13

0xbc3f,	// (0x0003e885) frm_month_g14

0xbc48,	// (0x0003e88e) frm_month_g15

0xbc53,	// (0x0003e899) frm_month_g16

0x000f,

0xff12,	// (0x00042b58) frm_month_g

0xbc5e,	// (0x0003e8a4) cell_top_day_name_pane_t1

0xbc6d,	// (0x0003e8b3) cell_area_left_week_number_pane_g1

0xbc5e,	// (0x0003e8a4) cell_area_left_week_number_pane_t1

0xe87e,	// (0x000414c4) cell_month_view_pane_g1

0xbc75,	// (0x0003e8bb) cell_month_view_pane_t1

0x43bf,	// (0x00037005) main_fps_pane

0x16dd,	// (0x00034323) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x16dd,	// (0x00034323) cmail_ddmenu_btn02_pane_cp1

0x16f9,	// (0x0003433f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x16f9,	// (0x0003433f) cmail_ddmenu_btn02_pane_cp2

0xb5d1,	// (0x0003e217) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb5d1,	// (0x0003e217) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x00042a80) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x00042a80) cmail_ddmenu_btn02_pane_g

0xb5ef,	// (0x0003e235) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb5ef,	// (0x0003e235) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x00042a85) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x00042a85) cmail_ddmenu_btn02_pane_t

0xbc84,	// (0x0003e8ca) fps_text_pane_ParamLimits

0xbc84,	// (0x0003e8ca) fps_text_pane

0xbc91,	// (0x0003e8d7) main_fps_pane_g1_ParamLimits

0xbc91,	// (0x0003e8d7) main_fps_pane_g1

0xbc9f,	// (0x0003e8e5) wait_bar_pane_cp010_ParamLimits

0xbc9f,	// (0x0003e8e5) wait_bar_pane_cp010

0xbcab,	// (0x0003e8f1) fps_text_pane_t1_ParamLimits

0xbcab,	// (0x0003e8f1) fps_text_pane_t1

0x92fc,	// (0x0003bf42) cam4_image_uncrop_pane_g1

0x9305,	// (0x0003bf4b) cam4_image_uncrop_pane_g2

0x930e,	// (0x0003bf54) cam4_image_uncrop_pane_g3

0x9317,	// (0x0003bf5d) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00042553) cam4_image_uncrop_pane_g

0xbb48,	// (0x0003e78e) dia3_listrow_pane_ParamLimits

0x43bf,	// (0x00037005) main_phob2_pane

0xb226,	// (0x0003de6c) cell_tport_appsw_pane_cp02_ParamLimits

0xb226,	// (0x0003de6c) cell_tport_appsw_pane_cp02

0xb235,	// (0x0003de7b) cell_tport_appsw_pane_cp03_ParamLimits

0xb235,	// (0x0003de7b) cell_tport_appsw_pane_cp03

0x43bf,	// (0x00037005) phob2_contact_card_pane

0x43bf,	// (0x00037005) phob2_listscroll_pane

0x227c,	// (0x00034ec2) phob2_list_pane

0x2284,	// (0x00034eca) scroll_pane_cp034

0xbcc4,	// (0x0003e90a) phob2_cc_data_pane_ParamLimits

0xbcc4,	// (0x0003e90a) phob2_cc_data_pane

0xbcde,	// (0x0003e924) phob2_cc_listscroll_pane_ParamLimits

0xbcde,	// (0x0003e924) phob2_cc_listscroll_pane

0xbcf8,	// (0x0003e93e) list_double_large_graphic_phob2_pane_ParamLimits

0xbcf8,	// (0x0003e93e) list_double_large_graphic_phob2_pane

0xbd1b,	// (0x0003e961) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbd1b,	// (0x0003e961) list_double_large_graphic_phob2_pane_g1

0x42e4,	// (0x00036f2a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x42e4,	// (0x00036f2a) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x00042b79) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x00042b79) list_double_large_graphic_phob2_pane_g

0x42f0,	// (0x00036f36) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x42f0,	// (0x00036f36) list_double_large_graphic_phob2_pane_t1

0x4305,	// (0x00036f4b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x4305,	// (0x00036f4b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x00042b7e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x00042b7e) list_double_large_graphic_phob2_pane_t

0x43bf,	// (0x00037005) list_highlight_pane_cp024

0x228c,	// (0x00034ed2) phob2_cc_button_pane

0xbd28,	// (0x0003e96e) phob2_cc_data_pane_g1_ParamLimits

0xbd28,	// (0x0003e96e) phob2_cc_data_pane_g1

0xbd34,	// (0x0003e97a) phob2_cc_data_pane_g2_ParamLimits

0xbd34,	// (0x0003e97a) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x00042b83) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x00042b83) phob2_cc_data_pane_g

0xbd40,	// (0x0003e986) phob2_cc_data_pane_t1_ParamLimits

0xbd40,	// (0x0003e986) phob2_cc_data_pane_t1

0xbd52,	// (0x0003e998) phob2_cc_data_pane_t2_ParamLimits

0xbd52,	// (0x0003e998) phob2_cc_data_pane_t2

0xbd64,	// (0x0003e9aa) phob2_cc_data_pane_t3_ParamLimits

0xbd64,	// (0x0003e9aa) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x00042b88) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x00042b88) phob2_cc_data_pane_t

0x2294,	// (0x00034eda) phob2_cc_list_pane_ParamLimits

0x2294,	// (0x00034eda) phob2_cc_list_pane

0x07bf,	// (0x00033405) scroll_pane_cp035_ParamLimits

0x07bf,	// (0x00033405) scroll_pane_cp035

0xd8c7,	// (0x0004050d) bg_button_pane_cp033

0x22a0,	// (0x00034ee6) phob2_cc_button_pane_g1

0x22ac,	// (0x00034ef2) phob2_cc_button_pane_t1

0x22c1,	// (0x00034f07) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x00042b8f) phob2_cc_button_pane_t

0xbd76,	// (0x0003e9bc) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbd76,	// (0x0003e9bc) list_double_large_graphic_phob2_cc_pane

0xbda6,	// (0x0003e9ec) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbda6,	// (0x0003e9ec) list_double_large_graphic_phob2_cc_pane_g1

0x4317,	// (0x00036f5d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x4317,	// (0x00036f5d) list_double_large_graphic_phob2_cc_pane_g2

0x4326,	// (0x00036f6c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x4326,	// (0x00036f6c) list_double_large_graphic_phob2_cc_pane_g3

0x4335,	// (0x00036f7b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x4335,	// (0x00036f7b) list_double_large_graphic_phob2_cc_pane_g4

0x4346,	// (0x00036f8c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x4346,	// (0x00036f8c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x00042b94) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x00042b94) list_double_large_graphic_phob2_cc_pane_g

0x4355,	// (0x00036f9b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x4355,	// (0x00036f9b) list_double_large_graphic_phob2_cc_pane_t1

0x437e,	// (0x00036fc4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x437e,	// (0x00036fc4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x00042b9f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x00042b9f) list_double_large_graphic_phob2_cc_pane_t

0x22d3,	// (0x00034f19) list_highlight_pane_cp025_ParamLimits

0x22d3,	// (0x00034f19) list_highlight_pane_cp025

0xd8c7,	// (0x0004050d) bg_button_pane_cp033_ParamLimits

0x22a0,	// (0x00034ee6) phob2_cc_button_pane_g1_ParamLimits

0x22ac,	// (0x00034ef2) phob2_cc_button_pane_t1_ParamLimits

0x22c1,	// (0x00034f07) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x00042b8f) phob2_cc_button_pane_t_ParamLimits

0x4405,	// (0x0003704b) popup_wgtman_window

0x055d,	// (0x000331a3) scroll_pane_cp038

0xb940,	// (0x0003e586) wgtman_btn_pane_cp_01_ParamLimits

0xb940,	// (0x0003e586) wgtman_btn_pane_cp_01

0x22e1,	// (0x00034f27) wgtman_content_pane

0x202a,	// (0x00034c70) wgtman_heading_pane

0x43bf,	// (0x00037005) bg_heading_pane_cp02

0x22ea,	// (0x00034f30) wgtman_heading_pane_g1

0x22f2,	// (0x00034f38) wgtman_heading_pane_t1

0x2300,	// (0x00034f46) scroll_pane_cp036

0x2308,	// (0x00034f4e) wgtman_list_pane

0x2310,	// (0x00034f56) wgtman_list_pane_t1_ParamLimits

0x2310,	// (0x00034f56) wgtman_list_pane_t1

0x925b,	// (0x0003bea1) cam4_grid_pane

0x36d2,	// (0x00036318) bg_button_pane_cp015_ParamLimits

0x9ef4,	// (0x0003cb3a) bg_button_pane_cp016_ParamLimits

0x9f07,	// (0x0003cb4d) bg_button_pane_cp017_ParamLimits

0x3716,	// (0x0003635c) popup_vitu2_query_window_g3_ParamLimits

0x3716,	// (0x0003635c) popup_vitu2_query_window_g3

0x378f,	// (0x000363d5) popup_vitu2_query_window_t6_ParamLimits

0x378f,	// (0x000363d5) popup_vitu2_query_window_t6

0x37ba,	// (0x00036400) popup_vitu2_query_window_t7_ParamLimits

0x37ba,	// (0x00036400) popup_vitu2_query_window_t7

0x0307,	// (0x00032f4d) cam4_grid_pane_g1

0x0310,	// (0x00032f56) cam4_grid_pane_g2

0x2332,	// (0x00034f78) cam4_grid_pane_g3

0x233b,	// (0x00034f81) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x00042ba4) cam4_grid_pane_g

0x5319,	// (0x00037f5f) aid_placing_vt_slider_lsc_ParamLimits

0x5659,	// (0x0003829f) vidtel_button_pane_ParamLimits

0x5659,	// (0x0003829f) vidtel_button_pane

0x43bf,	// (0x00037005) bg_button_pane_cp034

0xbdb7,	// (0x0003e9fd) vidtel_button_pane_g1

0x2346,	// (0x00034f8c) vidtel_button_pane_t1

0x069a,	// (0x000332e0) aid_size_vtel_slider_touch

0x07bf,	// (0x00033405) scroll_pane_cp039

0x1224,	// (0x00033e6a) ncim_query_button_pane_cp01_ParamLimits

0x1243,	// (0x00033e89) ncimui_query_pane_g1_ParamLimits

0xd8c7,	// (0x0004050d) input_focus_pane_cp012_ParamLimits

0x1268,	// (0x00033eae) ncim_query_entry_pane_t1_ParamLimits

0x07bf,	// (0x00033405) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
