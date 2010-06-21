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

#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000313f0 };

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
0x5c9f,	// (0x0003708f) Screen

0x5ca9,	// (0x00037099) application_window

0x5cfb,	// (0x000370eb) area_bottom_pane_ParamLimits

0x5cfb,	// (0x000370eb) area_bottom_pane

0x5d37,	// (0x00037127) area_top_pane_ParamLimits

0x5d37,	// (0x00037127) area_top_pane

0x5d93,	// (0x00037183) call_video_uplink_pane_ParamLimits

0x5d93,	// (0x00037183) call_video_uplink_pane

0x5dce,	// (0x000371be) main_pane_ParamLimits

0x5dce,	// (0x000371be) main_pane

0x0a3e,	// (0x00031e2e) context_pane

0x8b63,	// (0x00039f53) navi_pane

0x8b7d,	// (0x00039f6d) popup_cale_events_window_ParamLimits

0x8b7d,	// (0x00039f6d) popup_cale_events_window

0x0a51,	// (0x00031e41) popup_mup_playback_window

0x8b94,	// (0x00039f84) signal_pane

0xd841,	// (0x0003ec31) main_browser_pane

0xda18,	// (0x0003ee08) main_burst_pane

0x3adf,	// (0x00034ecf) main_calc_pane

0x09ca,	// (0x00031dba) main_cale_day_pane

0x6422,	// (0x00037812) main_cale_month_pane

0x09ca,	// (0x00031dba) main_cale_week_pane

0xda18,	// (0x0003ee08) main_call_pane

0xd51d,	// (0x0003e90d) main_call_poc_pane

0xda18,	// (0x0003ee08) main_camera_pane

0xda18,	// (0x0003ee08) main_chi_dic_pane

0xe21b,	// (0x0003f60b) main_clock_pane

0xd51d,	// (0x0003e90d) main_fmradio_pane

0xda18,	// (0x0003ee08) main_graph_messa_pane

0xd51d,	// (0x0003e90d) main_help_pane

0xd841,	// (0x0003ec31) main_im_pane

0xd778,	// (0x0003eb68) main_image_pane_ParamLimits

0xd778,	// (0x0003eb68) main_image_pane

0xd51d,	// (0x0003e90d) main_location2_pane

0xda18,	// (0x0003ee08) main_location_pane

0xd778,	// (0x0003eb68) main_messa_pane

0xd51d,	// (0x0003e90d) main_mp2_pane

0xda18,	// (0x0003ee08) main_mp_pane

0xd51d,	// (0x0003e90d) main_msg_pane

0xd51d,	// (0x0003e90d) main_mup_eq_pane

0xd51d,	// (0x0003e90d) main_mup_pane

0xd841,	// (0x0003ec31) main_notes_pane

0xd51d,	// (0x0003e90d) main_pec_pane

0xd51d,	// (0x0003e90d) main_phob_pane

0xd51d,	// (0x0003e90d) main_pinb_pane

0xd51d,	// (0x0003e90d) main_postcard_pane

0xd51d,	// (0x0003e90d) main_qdial_pane

0xda18,	// (0x0003ee08) main_skin_pane

0xd51d,	// (0x0003e90d) main_smil2_pane

0xda18,	// (0x0003ee08) main_smil_pane

0xda18,	// (0x0003ee08) main_video_pane

0xda18,	// (0x0003ee08) main_video_tele_pane

0xd778,	// (0x0003eb68) main_viewer_pane_ParamLimits

0xd778,	// (0x0003eb68) main_viewer_pane

0xda18,	// (0x0003ee08) main_vorec_pane

0x8a61,	// (0x00039e51) popup_blid_sat_info_window_ParamLimits

0x8a61,	// (0x00039e51) popup_blid_sat_info_window

0x8a7d,	// (0x00039e6d) popup_dyc_status_message_window_ParamLimits

0x8a7d,	// (0x00039e6d) popup_dyc_status_message_window

0x8a89,	// (0x00039e79) popup_grid_large_graphic_window_ParamLimits

0x8a89,	// (0x00039e79) popup_grid_large_graphic_window

0x8afa,	// (0x00039eea) popup_loc_request_window_ParamLimits

0x8afa,	// (0x00039eea) popup_loc_request_window

0x8b3d,	// (0x00039f2d) popup_wml_address_window_ParamLimits

0x8b3d,	// (0x00039f2d) popup_wml_address_window

0x893e,	// (0x00039d2e) call_muted_g1

0x8679,	// (0x00039a69) popup_call_audio_conf_window_ParamLimits

0x8679,	// (0x00039a69) popup_call_audio_conf_window

0x894e,	// (0x00039d3e) popup_call_audio_first_window_ParamLimits

0x894e,	// (0x00039d3e) popup_call_audio_first_window

0x8982,	// (0x00039d72) popup_call_audio_in_window_ParamLimits

0x8982,	// (0x00039d72) popup_call_audio_in_window

0x899e,	// (0x00039d8e) popup_call_audio_out_window_ParamLimits

0x899e,	// (0x00039d8e) popup_call_audio_out_window

0x89ba,	// (0x00039daa) popup_call_audio_second_window_ParamLimits

0x89ba,	// (0x00039daa) popup_call_audio_second_window

0x89e2,	// (0x00039dd2) popup_call_audio_wait_window_ParamLimits

0x89e2,	// (0x00039dd2) popup_call_audio_wait_window

0x8a01,	// (0x00039df1) popup_number_entry_window_ParamLimits

0x8a01,	// (0x00039df1) popup_number_entry_window

0xd10c,	// (0x0003e4fc) bg_popup_call_pane_cp05_ParamLimits

0xd10c,	// (0x0003e4fc) bg_popup_call_pane_cp05

0xd12c,	// (0x0003e51c) popup_number_entry_window_t1

0xd13f,	// (0x0003e52f) popup_number_entry_window_t2

0xd151,	// (0x0003e541) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000404b6) popup_number_entry_window_t

0xd163,	// (0x0003e553) text_title_cp2

0xd176,	// (0x0003e566) bg_popup_call_pane_cp_ParamLimits

0xd176,	// (0x0003e566) bg_popup_call_pane_cp

0xd184,	// (0x0003e574) call_thumbnail_pane

0xd18c,	// (0x0003e57c) popup_call_audio_in_window_g1_ParamLimits

0xd18c,	// (0x0003e57c) popup_call_audio_in_window_g1

0xd198,	// (0x0003e588) popup_call_audio_in_window_g2_ParamLimits

0xd198,	// (0x0003e588) popup_call_audio_in_window_g2

0xd1a4,	// (0x0003e594) popup_call_audio_in_window_g3_ParamLimits

0xd1a4,	// (0x0003e594) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000404bf) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000404bf) popup_call_audio_in_window_g

0xd1b0,	// (0x0003e5a0) popup_call_audio_in_window_t1_ParamLimits

0xd1b0,	// (0x0003e5a0) popup_call_audio_in_window_t1

0xd1cb,	// (0x0003e5bb) popup_call_audio_in_window_t2_ParamLimits

0xd1cb,	// (0x0003e5bb) popup_call_audio_in_window_t2

0xd1e6,	// (0x0003e5d6) popup_call_audio_in_window_t3_ParamLimits

0xd1e6,	// (0x0003e5d6) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000404c6) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000404c6) popup_call_audio_in_window_t

0xd176,	// (0x0003e566) bg_popup_call_pane_cp01_ParamLimits

0xd176,	// (0x0003e566) bg_popup_call_pane_cp01

0xd184,	// (0x0003e574) call_thumbnail_pane_cp02

0xd1f9,	// (0x0003e5e9) call_type_pane_cp022

0xd201,	// (0x0003e5f1) popup_call_audio_out_window_g1_ParamLimits

0xd201,	// (0x0003e5f1) popup_call_audio_out_window_g1

0xd213,	// (0x0003e603) popup_call_audio_out_window_g2_ParamLimits

0xd213,	// (0x0003e603) popup_call_audio_out_window_g2

0xd21f,	// (0x0003e60f) popup_call_audio_out_window_g3_ParamLimits

0xd21f,	// (0x0003e60f) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000404cd) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000404cd) popup_call_audio_out_window_g

0xd231,	// (0x0003e621) popup_call_audio_out_window_t1_ParamLimits

0xd231,	// (0x0003e621) popup_call_audio_out_window_t1

0xd249,	// (0x0003e639) popup_call_audio_out_window_t2_ParamLimits

0xd249,	// (0x0003e639) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000404d4) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000404d4) popup_call_audio_out_window_t

0xd25e,	// (0x0003e64e) bg_popup_call_pane_ParamLimits

0xd25e,	// (0x0003e64e) bg_popup_call_pane

0x5f81,	// (0x00037371) call_thumbnail_pane_cp_ParamLimits

0x5f81,	// (0x00037371) call_thumbnail_pane_cp

0xd2e2,	// (0x0003e6d2) call_type_pane_cp01_ParamLimits

0xd2e2,	// (0x0003e6d2) call_type_pane_cp01

0xd326,	// (0x0003e716) popup_call_audio_first_window_g1_ParamLimits

0xd326,	// (0x0003e716) popup_call_audio_first_window_g1

0xd372,	// (0x0003e762) popup_call_audio_first_window_g2_ParamLimits

0xd372,	// (0x0003e762) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000404d9) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000404d9) popup_call_audio_first_window_g

0xd3b6,	// (0x0003e7a6) popup_call_audio_first_window_t1_ParamLimits

0xd3b6,	// (0x0003e7a6) popup_call_audio_first_window_t1

0xd462,	// (0x0003e852) popup_call_audio_first_window_t4_ParamLimits

0xd462,	// (0x0003e852) popup_call_audio_first_window_t4

0xd4ee,	// (0x0003e8de) popup_call_audio_first_window_t5_ParamLimits

0xd4ee,	// (0x0003e8de) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000404de) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000404de) popup_call_audio_first_window_t

0xd51d,	// (0x0003e90d) bg_popup_call_pane_cp02

0xd527,	// (0x0003e917) call_type_pane_cp023

0xd52f,	// (0x0003e91f) popup_call_audio_wait_window_g1

0xd537,	// (0x0003e927) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000404e5) popup_call_audio_wait_window_g

0xd53f,	// (0x0003e92f) popup_call_audio_wait_window_t3

0xd54d,	// (0x0003e93d) bg_popup_call_pane_cp03_ParamLimits

0xd54d,	// (0x0003e93d) bg_popup_call_pane_cp03

0xd5ad,	// (0x0003e99d) call_thumbnail_pane_cp011_ParamLimits

0xd5ad,	// (0x0003e99d) call_thumbnail_pane_cp011

0xd5b9,	// (0x0003e9a9) call_type_pane_cp034_ParamLimits

0xd5b9,	// (0x0003e9a9) call_type_pane_cp034

0xd5f5,	// (0x0003e9e5) popup_call_audio_second_window_g1_ParamLimits

0xd5f5,	// (0x0003e9e5) popup_call_audio_second_window_g1

0xd631,	// (0x0003ea21) popup_call_audio_second_window_g2_ParamLimits

0xd631,	// (0x0003ea21) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000404ea) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000404ea) popup_call_audio_second_window_g

0xd66d,	// (0x0003ea5d) popup_call_audio_second_window_t1_ParamLimits

0xd66d,	// (0x0003ea5d) popup_call_audio_second_window_t1

0xd6ee,	// (0x0003eade) popup_call_audio_second_window_t2_ParamLimits

0xd6ee,	// (0x0003eade) popup_call_audio_second_window_t2

0xd724,	// (0x0003eb14) popup_call_audio_second_window_t3_ParamLimits

0xd724,	// (0x0003eb14) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000404ef) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000404ef) popup_call_audio_second_window_t

0xd51d,	// (0x0003e90d) bg_popup_call_pane_cp04

0xd75a,	// (0x0003eb4a) list_conf_pane

0xd762,	// (0x0003eb52) popup_call_audio_conf_window_t1

0xd770,	// (0x0003eb60) call_thumbnail_pane_g1

0xd778,	// (0x0003eb68) bg_pinb_pane_ParamLimits

0xd778,	// (0x0003eb68) bg_pinb_pane

0xd786,	// (0x0003eb76) find_pinb_pane

0xd78f,	// (0x0003eb7f) listscroll_pinb_pane_ParamLimits

0xd78f,	// (0x0003eb7f) listscroll_pinb_pane

0xd79e,	// (0x0003eb8e) pinb_bg_pane_g1

0x5fa5,	// (0x00037395) pinb_bg_pane_g2

0x5faf,	// (0x0003739f) pinb_bg_pane_g3

0x5fb9,	// (0x000373a9) pinb_bg_pane_g4

0x5fc3,	// (0x000373b3) pinb_bg_pane_g5

0x5fcd,	// (0x000373bd) pinb_bg_pane_g6

0x5fd8,	// (0x000373c8) pinb_bg_pane_g7

0x5fe3,	// (0x000373d3) pinb_bg_pane_g8

0x5fec,	// (0x000373dc) pinb_bg_pane_g9

0x5ff4,	// (0x000373e4) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000404f6) pinb_bg_pane_g

0x6011,	// (0x00037401) grid_pinb_pane

0x601a,	// (0x0003740a) list_pinb_pane

0x6025,	// (0x00037415) scroll_pane_cp01_ParamLimits

0x6025,	// (0x00037415) scroll_pane_cp01

0xd7a8,	// (0x0003eb98) find_pinb_pane_g1_ParamLimits

0xd7a8,	// (0x0003eb98) find_pinb_pane_g1

0xd7c0,	// (0x0003ebb0) find_pinb_pane_t1

0xd7d2,	// (0x0003ebc2) find_pinb_pane_t2

0x0001,

0xf120,	// (0x00040510) find_pinb_pane_t

0xd7e7,	// (0x0003ebd7) input_focus_pane_cp01_ParamLimits

0xd7e7,	// (0x0003ebd7) input_focus_pane_cp01

0x6035,	// (0x00037425) cell_pinb_pane_ParamLimits

0x6035,	// (0x00037425) cell_pinb_pane

0x604e,	// (0x0003743e) cell_pinb_pane_g1_ParamLimits

0x604e,	// (0x0003743e) cell_pinb_pane_g1

0x6062,	// (0x00037452) cell_pinb_pane_g2_ParamLimits

0x6062,	// (0x00037452) cell_pinb_pane_g2

0xd7f3,	// (0x0003ebe3) cell_pinb_pane_g3_ParamLimits

0xd7f3,	// (0x0003ebe3) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x00040515) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x00040515) cell_pinb_pane_g

0xd51d,	// (0x0003e90d) grid_highlight_pane_cp01

0x606e,	// (0x0003745e) list_pinb_item_pane_ParamLimits

0x606e,	// (0x0003745e) list_pinb_item_pane

0xd51d,	// (0x0003e90d) list_highlight_pane_cp02

0x6083,	// (0x00037473) list_pinb_item_pane_g1_ParamLimits

0x6083,	// (0x00037473) list_pinb_item_pane_g1

0x6090,	// (0x00037480) list_pinb_item_pane_g2_ParamLimits

0x6090,	// (0x00037480) list_pinb_item_pane_g2

0x609c,	// (0x0003748c) list_pinb_item_pane_g3_ParamLimits

0x609c,	// (0x0003748c) list_pinb_item_pane_g3

0x60ab,	// (0x0003749b) list_pinb_item_pane_g4_ParamLimits

0x60ab,	// (0x0003749b) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0004051c) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0004051c) list_pinb_item_pane_g

0x60b7,	// (0x000374a7) list_pinb_item_pane_t1_ParamLimits

0x60b7,	// (0x000374a7) list_pinb_item_pane_t1

0x60e8,	// (0x000374d8) calc_display_pane

0x6100,	// (0x000374f0) calc_paper_pane

0x611c,	// (0x0003750c) grid_calc_pane

0xd51d,	// (0x0003e90d) bg_list_pane_cp01

0x613c,	// (0x0003752c) clock_g1

0x6144,	// (0x00037534) clock_g2

0x0001,

0xf135,	// (0x00040525) clock_g

0x614c,	// (0x0003753c) clock_t1_ParamLimits

0x614c,	// (0x0003753c) clock_t1

0x6161,	// (0x00037551) clock_t2_ParamLimits

0x6161,	// (0x00037551) clock_t2

0x6173,	// (0x00037563) clock_t3_ParamLimits

0x6173,	// (0x00037563) clock_t3

0x6185,	// (0x00037575) clock_t4_ParamLimits

0x6185,	// (0x00037575) clock_t4

0x6197,	// (0x00037587) clock_t5_ParamLimits

0x6197,	// (0x00037587) clock_t5

0x61ac,	// (0x0003759c) clock_t6_ParamLimits

0x61ac,	// (0x0003759c) clock_t6

0x61be,	// (0x000375ae) clock_t7_ParamLimits

0x61be,	// (0x000375ae) clock_t7

0x61d0,	// (0x000375c0) clock_t8_ParamLimits

0x61d0,	// (0x000375c0) clock_t8

0x61e2,	// (0x000375d2) clock_t9_ParamLimits

0x61e2,	// (0x000375d2) clock_t9

0x0008,

0xf13a,	// (0x0004052a) clock_t_ParamLimits

0xf13a,	// (0x0004052a) clock_t

0xd7ff,	// (0x0003ebef) popup_clock_analogue_window_cp02

0xd7ff,	// (0x0003ebef) popup_clock_digital_window_cp01

0xd807,	// (0x0003ebf7) listscroll_help_pane

0xd51d,	// (0x0003e90d) phob_pre_status_pane

0xd811,	// (0x0003ec01) grid_qdial_pane

0xd778,	// (0x0003eb68) listscroll_mce_pane

0xd778,	// (0x0003eb68) bg_notes_pane

0xd81b,	// (0x0003ec0b) list_notes_pane

0x61f4,	// (0x000375e4) scroll_pane_cp06

0xd829,	// (0x0003ec19) bg_calc_paper_pane

0x6201,	// (0x000375f1) list_calc_pane

0xd841,	// (0x0003ec31) bg_calc_display_pane

0x621b,	// (0x0003760b) calc_display_pane_t1

0x6230,	// (0x00037620) calc_display_pane_t2

0x6245,	// (0x00037635) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0004053d) calc_display_pane_t

0x6257,	// (0x00037647) cell_calc_pane_ParamLimits

0x6257,	// (0x00037647) cell_calc_pane

0xd84d,	// (0x0003ec3d) bg_calc_paper_pane_g1

0xd859,	// (0x0003ec49) bg_calc_paper_pane_g2

0xd865,	// (0x0003ec55) bg_calc_paper_pane_g3

0xd871,	// (0x0003ec61) bg_calc_paper_pane_g4

0xd87d,	// (0x0003ec6d) bg_calc_paper_pane_g5

0x627e,	// (0x0003766e) bg_calc_paper_pane_g6

0x628d,	// (0x0003767d) bg_calc_paper_pane_g7

0x629c,	// (0x0003768c) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x00040544) bg_calc_paper_pane_g

0x62ab,	// (0x0003769b) calc_bg_paper_pane_g9

0x62ba,	// (0x000376aa) list_calc_item_pane_ParamLimits

0x62ba,	// (0x000376aa) list_calc_item_pane

0xd889,	// (0x0003ec79) list_calc_item_pane_g1

0x62d3,	// (0x000376c3) list_calc_item_pane_t1_ParamLimits

0x62d3,	// (0x000376c3) list_calc_item_pane_t1

0x62e5,	// (0x000376d5) list_calc_item_pane_t2_ParamLimits

0x62e5,	// (0x000376d5) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x00040555) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x00040555) list_calc_item_pane_t

0xd896,	// (0x0003ec86) cell_calc_pane_g1

0xd8a0,	// (0x0003ec90) grid_highlight_pane_cp02

0xd8c2,	// (0x0003ecb2) bg_calc_display_pane_g1

0x6313,	// (0x00037703) bg_calc_display_pane_g2

0xd8cb,	// (0x0003ecbb) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0004055f) bg_calc_display_pane_g

0x631d,	// (0x0003770d) cell_qdial_pane_ParamLimits

0x631d,	// (0x0003770d) cell_qdial_pane

0x632f,	// (0x0003771f) cell_qdial_pane_g1_ParamLimits

0x632f,	// (0x0003771f) cell_qdial_pane_g1

0x633c,	// (0x0003772c) cell_qdial_pane_g2_ParamLimits

0x633c,	// (0x0003772c) cell_qdial_pane_g2

0xd8d4,	// (0x0003ecc4) cell_qdial_pane_g3_ParamLimits

0xd8d4,	// (0x0003ecc4) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x00040566) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x00040566) cell_qdial_pane_g

0x635a,	// (0x0003774a) cell_qdial_pane_t1_ParamLimits

0x635a,	// (0x0003774a) cell_qdial_pane_t1

0x6372,	// (0x00037762) cell_qdial_pane_t2_ParamLimits

0x6372,	// (0x00037762) cell_qdial_pane_t2

0x6385,	// (0x00037775) cell_qdial_pane_t3_ParamLimits

0x6385,	// (0x00037775) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0004056f) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0004056f) cell_qdial_pane_t

0xd51d,	// (0x0003e90d) grid_highlight_pane_cp04

0xd8e0,	// (0x0003ecd0) thumbnail_qdial_pane_ParamLimits

0xd8e0,	// (0x0003ecd0) thumbnail_qdial_pane

0xd93c,	// (0x0003ed2c) list_help_pane

0xd946,	// (0x0003ed36) scroll_pane_cp02

0x6398,	// (0x00037788) help_list_pane_t1_ParamLimits

0x6398,	// (0x00037788) help_list_pane_t1

0x63b6,	// (0x000377a6) bg_notes_pane_g2

0x63be,	// (0x000377ae) bg_notes_pane_g3

0x63c6,	// (0x000377b6) notes_bg_pane_g1

0x63ce,	// (0x000377be) notes_bg_pane_g4

0x63d6,	// (0x000377c6) notes_bg_pane_g5

0x63de,	// (0x000377ce) notes_bg_pane_g6

0x63e6,	// (0x000377d6) notes_bg_pane_g7

0x63ee,	// (0x000377de) notes_bg_pane_g8

0x63f6,	// (0x000377e6) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0004058d) notes_bg_pane_g

0x63fe,	// (0x000377ee) list_notes_text_pane_ParamLimits

0x63fe,	// (0x000377ee) list_notes_text_pane

0xd94f,	// (0x0003ed3f) list_notes_text_pane_g1

0x49e7,	// (0x00035dd7) list_notes_text_pane_t1

0x6422,	// (0x00037812) listscroll_cale_week_pane

0x6447,	// (0x00037837) bg_cale_heading_pane

0xd972,	// (0x0003ed62) bg_cale_pane_cp01

0x645f,	// (0x0003784f) cale_week_corner_pane

0x6479,	// (0x00037869) cale_week_day_heading_pane

0x6491,	// (0x00037881) cale_week_scroll_pane_g1

0x64a4,	// (0x00037894) cale_week_scroll_pane_g2

0x64b7,	// (0x000378a7) cale_week_scroll_pane_g3

0x64ca,	// (0x000378ba) cale_week_scroll_pane_g4

0x64dd,	// (0x000378cd) cale_week_scroll_pane_g5

0x64f0,	// (0x000378e0) cale_week_scroll_pane_g6

0x6503,	// (0x000378f3) cale_week_scroll_pane_g7

0x6516,	// (0x00037906) cale_week_scroll_pane_g8

0x6529,	// (0x00037919) cale_week_scroll_pane_g9

0x653c,	// (0x0003792c) cale_week_scroll_pane_g10

0x654f,	// (0x0003793f) cale_week_scroll_pane_g11

0x6562,	// (0x00037952) cale_week_scroll_pane_g12

0x6575,	// (0x00037965) cale_week_scroll_pane_g13

0x6588,	// (0x00037978) cale_week_scroll_pane_g14

0x659b,	// (0x0003798b) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0004059c) cale_week_scroll_pane_g

0x65c1,	// (0x000379b1) cale_week_time_pane

0x65d4,	// (0x000379c4) grid_cale_week_pane

0xd9a1,	// (0x0003ed91) scroll_pane_cp08

0x65e9,	// (0x000379d9) cell_cale_week_pane_ParamLimits

0x65e9,	// (0x000379d9) cell_cale_week_pane

0x6637,	// (0x00037a27) cale_week_day_heading_pane_t1

0x6672,	// (0x00037a62) cale_week_day_heading_pane_t2

0x66ad,	// (0x00037a9d) cale_week_day_heading_pane_t3

0x66e8,	// (0x00037ad8) cale_week_day_heading_pane_t4

0x6723,	// (0x00037b13) cale_week_day_heading_pane_t5

0x675e,	// (0x00037b4e) cale_week_day_heading_pane_t6

0x6799,	// (0x00037b89) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000405bd) cale_week_day_heading_pane_t

0xd9be,	// (0x0003edae) bg_cale_side_pane

0x67d4,	// (0x00037bc4) cale_week_time_pane_t1

0x680e,	// (0x00037bfe) cale_week_time_pane_t2

0x6848,	// (0x00037c38) cale_week_time_pane_t3

0x6882,	// (0x00037c72) cale_week_time_pane_t4

0x68bc,	// (0x00037cac) cale_week_time_pane_t5

0x68f6,	// (0x00037ce6) cale_week_time_pane_t6

0x6930,	// (0x00037d20) cale_week_time_pane_t7

0x696a,	// (0x00037d5a) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000405cc) cale_week_time_pane_t

0x69a4,	// (0x00037d94) cell_cale_week_pane_g2

0x69c8,	// (0x00037db8) cell_cale_week_pane_g3_ParamLimits

0x69c8,	// (0x00037db8) cell_cale_week_pane_g3

0xd9cc,	// (0x0003edbc) grid_highlight_pane_cp07

0xd9d4,	// (0x0003edc4) listscroll_gms_pane

0xd9de,	// (0x0003edce) grid_gms_pane

0xd9e7,	// (0x0003edd7) listscroll_gms_pane_g1

0xd9ef,	// (0x0003eddf) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000405dd) listscroll_gms_pane_g

0x69e0,	// (0x00037dd0) scroll_pane_cp010

0x69e9,	// (0x00037dd9) cell_gms_pane_ParamLimits

0x69e9,	// (0x00037dd9) cell_gms_pane

0x69fa,	// (0x00037dea) cell_gms_pane_g1

0xd9f7,	// (0x0003ede7) cell_gms_pane_g2

0xd94f,	// (0x0003ed3f) cell_gms_pane_g3

0xd9ff,	// (0x0003edef) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000405e2) cell_gms_pane_g

0xda08,	// (0x0003edf8) grid_highlight_pane_cp09

0x88ec,	// (0x00039cdc) phob_pre_status_pane_g1

0x88f4,	// (0x00039ce4) phob_pre_status_pane_g2

0x88fc,	// (0x00039cec) phob_pre_status_pane_g3

0x8904,	// (0x00039cf4) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x000409e0) phob_pre_status_pane_g

0x8914,	// (0x00039d04) phob_pre_status_pane_t1

0x8922,	// (0x00039d12) phob_pre_status_pane_t2

0x8930,	// (0x00039d20) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x000409eb) phob_pre_status_pane_t

0xda18,	// (0x0003ee08) bg_list_pane_cp05

0x6a02,	// (0x00037df2) grid_vorec_pane

0xda20,	// (0x0003ee10) vorec_t1

0xda2e,	// (0x0003ee1e) vorec_t2

0xda3c,	// (0x0003ee2c) vorec_t3

0x6a0a,	// (0x00037dfa) vorec_t4

0xd0c0,	// (0x0003e4b0) vorec_t5

0xd0ce,	// (0x0003e4be) vorec_t6

0x0004,

0xf1fb,	// (0x000405eb) vorec_t

0xd0dc,	// (0x0003e4cc) wait_bar_pane_cp01

0xda58,	// (0x0003ee48) cell_vorec_pane_ParamLimits

0xda58,	// (0x0003ee48) cell_vorec_pane

0x6a18,	// (0x00037e08) cell_vorec_pane_g1

0xd51d,	// (0x0003e90d) grid_highlight_pane_cp05

0x6a2e,	// (0x00037e1e) cams_zoom_pane

0x6a3a,	// (0x00037e2a) image_vga_pane

0x6a47,	// (0x00037e37) main_camera_pane_g1

0x6a53,	// (0x00037e43) main_camera_pane_g2

0x6a5f,	// (0x00037e4f) main_camera_pane_g3

0x6a6b,	// (0x00037e5b) main_camera_pane_g4

0x6a77,	// (0x00037e67) main_camera_pane_g5

0x6a83,	// (0x00037e73) main_camera_pane_g6

0x6a8f,	// (0x00037e7f) main_camera_pane_g7

0x0007,

0xf206,	// (0x000405f6) main_camera_pane_g

0x6a9b,	// (0x00037e8b) main_camera_pane_t1

0x6aad,	// (0x00037e9d) main_camera_pane_t2

0x0001,

0xf217,	// (0x00040607) main_camera_pane_t

0x6ad1,	// (0x00037ec1) cams_zoom_pane_cp_ParamLimits

0x6ad1,	// (0x00037ec1) cams_zoom_pane_cp

0x6af5,	// (0x00037ee5) image_cif_pane_ParamLimits

0x6af5,	// (0x00037ee5) image_cif_pane

0x6b0f,	// (0x00037eff) image_subqcif_pane

0x6b17,	// (0x00037f07) main_video_pane_g1_ParamLimits

0x6b17,	// (0x00037f07) main_video_pane_g1

0x6b37,	// (0x00037f27) main_video_pane_g2_ParamLimits

0x6b37,	// (0x00037f27) main_video_pane_g2

0x6b65,	// (0x00037f55) main_video_pane_g3_ParamLimits

0x6b65,	// (0x00037f55) main_video_pane_g3

0x6b8e,	// (0x00037f7e) main_video_pane_g4_ParamLimits

0x6b8e,	// (0x00037f7e) main_video_pane_g4

0x6bb7,	// (0x00037fa7) main_video_pane_g5_ParamLimits

0x6bb7,	// (0x00037fa7) main_video_pane_g5

0xda77,	// (0x0003ee67) main_video_pane_g6_ParamLimits

0xda77,	// (0x0003ee67) main_video_pane_g6

0x0006,

0xf21c,	// (0x0004060c) main_video_pane_g_ParamLimits

0xf21c,	// (0x0004060c) main_video_pane_g

0x6bd9,	// (0x00037fc9) main_video_pane_t1_ParamLimits

0x6bd9,	// (0x00037fc9) main_video_pane_t1

0xda91,	// (0x0003ee81) cams_zoom_pane_g1

0xda9a,	// (0x0003ee8a) cams_zoom_pane_g2

0xdaa3,	// (0x0003ee93) cams_zoom_pane_g3

0xdaac,	// (0x0003ee9c) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0004061b) cams_zoom_pane_g

0x6c23,	// (0x00038013) grid_cams_pane

0x6c2f,	// (0x0003801f) linegrid_cams_pane

0x6c3b,	// (0x0003802b) cell_cams_pane_ParamLimits

0x6c3b,	// (0x0003802b) cell_cams_pane

0xdab5,	// (0x0003eea5) cams_burst_image_pane

0xdabd,	// (0x0003eead) cell_cams_pane_g1

0xd51d,	// (0x0003e90d) grid_highlight_pane_cp03

0xd896,	// (0x0003ec86) mp_bg_pane_g1

0xd51d,	// (0x0003e90d) bg_list_pane_cp03

0x08ef,	// (0x00031cdf) bg_mp_pane

0x08f7,	// (0x00031ce7) grid_mp_pane

0x08ff,	// (0x00031cef) media_player_g1

0x0907,	// (0x00031cf7) media_player_t1

0x0915,	// (0x00031d05) media_player_t2

0x0923,	// (0x00031d13) media_player_t3

0x0931,	// (0x00031d21) media_player_t4

0x093f,	// (0x00031d2f) media_player_t5

0x094d,	// (0x00031d3d) media_player_t6

0x095b,	// (0x00031d4b) media_player_t7

0x0006,

0xf5da,	// (0x000409ca) media_player_t

0x0969,	// (0x00031d59) wait_bar_pane_cp02

0xf5bf,	// (0x000409af) main_usb_pane_t

0x88e3,	// (0x00039cd3) cell_mp_pane

0xd896,	// (0x0003ec86) cell_mp_pane_g1

0xd51d,	// (0x0003e90d) grid_highlight_pane_cp06

0xdac5,	// (0x0003eeb5) grid_skin_colour_pane

0xdacd,	// (0x0003eebd) list_highlight_pane_cp03

0x6c4e,	// (0x0003803e) skin_g1

0xdad5,	// (0x0003eec5) skin_t1

0xdae4,	// (0x0003eed4) skin_t2

0x0001,

0xf260,	// (0x00040650) skin_t

0x6c56,	// (0x00038046) cell_skin_colour_pane_ParamLimits

0x6c56,	// (0x00038046) cell_skin_colour_pane

0xdaf2,	// (0x0003eee2) cell_skin_colour_pane_g1

0x6ccc,	// (0x000380bc) call_video_g1_ParamLimits

0x6ccc,	// (0x000380bc) call_video_g1

0x6cd8,	// (0x000380c8) call_video_g2_ParamLimits

0x6cd8,	// (0x000380c8) call_video_g2

0x0001,

0xf265,	// (0x00040655) call_video_g_ParamLimits

0xf265,	// (0x00040655) call_video_g

0x6d28,	// (0x00038118) call_video_uplink_pane_cp1_ParamLimits

0x6d28,	// (0x00038118) call_video_uplink_pane_cp1

0xdb04,	// (0x0003eef4) call_video_uplink_pane_cp2

0x6de4,	// (0x000381d4) video_down_crop_pane_ParamLimits

0x6de4,	// (0x000381d4) video_down_crop_pane

0x6eae,	// (0x0003829e) video_down_pane_ParamLimits

0x6eae,	// (0x0003829e) video_down_pane

0xdb0c,	// (0x0003eefc) video_down_subqcif_pane_ParamLimits

0xdb0c,	// (0x0003eefc) video_down_subqcif_pane

0xdb24,	// (0x0003ef14) video_down_subqcif_pane_cp_ParamLimits

0xdb24,	// (0x0003ef14) video_down_subqcif_pane_cp

0xdb48,	// (0x0003ef38) im_reading_pane_ParamLimits

0xdb48,	// (0x0003ef38) im_reading_pane

0x6f7a,	// (0x0003836a) im_writing_pane_ParamLimits

0x6f7a,	// (0x0003836a) im_writing_pane

0x6f90,	// (0x00038380) im_reading_pane_t1

0xdb62,	// (0x0003ef52) list_im_pane

0xdb73,	// (0x0003ef63) scroll_pane_cp07

0x6fc8,	// (0x000383b8) im_writing_pane_t1_ParamLimits

0x6fc8,	// (0x000383b8) im_writing_pane_t1

0xdb8c,	// (0x0003ef7c) im_writing_pane_t2_ParamLimits

0xdb8c,	// (0x0003ef7c) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0004065f) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0004065f) im_writing_pane_t

0xd51d,	// (0x0003e90d) input_focus_pane_cp04

0xd51d,	// (0x0003e90d) input_focus_pane_cp05

0x6fdd,	// (0x000383cd) list_im_single_pane_ParamLimits

0x6fdd,	// (0x000383cd) list_im_single_pane

0xdba9,	// (0x0003ef99) list_single_im_pane_t1

0x88a9,	// (0x00039c99) blid_accuracy_pane

0x88b1,	// (0x00039ca1) blid_compass_pane

0x88b9,	// (0x00039ca9) main_location_t1

0x88c7,	// (0x00039cb7) main_location_t2

0x88d5,	// (0x00039cc5) main_location_t3

0x0002,

0xf5e9,	// (0x000409d9) main_location_t

0xd51d,	// (0x0003e90d) aid_levels_location

0xd896,	// (0x0003ec86) blid_accuracy_pane_g1

0xd896,	// (0x0003ec86) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x000406c1) blid_accuracy_pane_g

0xdbe3,	// (0x0003efd3) wml_content_pane

0xdc21,	// (0x0003f011) wml_button_pane_ParamLimits

0xdc21,	// (0x0003f011) wml_button_pane

0x6ff5,	// (0x000383e5) wml_list_single_large_pane_ParamLimits

0x6ff5,	// (0x000383e5) wml_list_single_large_pane

0x700c,	// (0x000383fc) wml_list_single_medium_pane_ParamLimits

0x700c,	// (0x000383fc) wml_list_single_medium_pane

0x7024,	// (0x00038414) wml_list_single_small_pane_ParamLimits

0x7024,	// (0x00038414) wml_list_single_small_pane

0xdc35,	// (0x0003f025) wml_selection_box_pane_ParamLimits

0xdc35,	// (0x0003f025) wml_selection_box_pane

0xdc48,	// (0x0003f038) wml_list_single_pane_t1

0xdc57,	// (0x0003f047) wml_list_single_medium_pane_t1

0xdc66,	// (0x0003f056) wml_list_single_large_pane_t1

0xdc75,	// (0x0003f065) input_focus_pane_cp02_ParamLimits

0xdc75,	// (0x0003f065) input_focus_pane_cp02

0xdc88,	// (0x0003f078) wml_selection_box_pane_g1

0xdc91,	// (0x0003f081) wml_selection_box_pane_t1_ParamLimits

0xdc91,	// (0x0003f081) wml_selection_box_pane_t1

0xd778,	// (0x0003eb68) bg_wml_button_pane_ParamLimits

0xd778,	// (0x0003eb68) bg_wml_button_pane

0xdca9,	// (0x0003f099) wml_button_pane_g1

0xdcb1,	// (0x0003f0a1) wml_button_pane_t1

0xdca9,	// (0x0003f099) wml_button_bg_pane_g1

0xdcc1,	// (0x0003f0b1) wml_button_bg_pane_g2

0xdcc9,	// (0x0003f0b9) wml_button_bg_pane_g3

0xdcd1,	// (0x0003f0c1) wml_button_bg_pane_g4

0xdcd9,	// (0x0003f0c9) wml_button_bg_pane_g5

0xdce1,	// (0x0003f0d1) wml_button_bg_pane_g6

0xdce9,	// (0x0003f0d9) wml_button_bg_pane_g7

0xdcf1,	// (0x0003f0e1) wml_button_bg_pane_g8

0xdcf9,	// (0x0003f0e9) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x00040664) wml_button_bg_pane_g

0x703f,	// (0x0003842f) bg_list_pane_cp02

0xdd01,	// (0x0003f0f1) mce_header_pane_ParamLimits

0xdd01,	// (0x0003f0f1) mce_header_pane

0xdd15,	// (0x0003f105) mce_icon_pane

0xdd15,	// (0x0003f105) mce_image_pane

0xdd1e,	// (0x0003f10e) mce_text_pane_ParamLimits

0xdd1e,	// (0x0003f10e) mce_text_pane

0x7048,	// (0x00038438) scroll_pane_cp03

0x7048,	// (0x00038438) scroll_pane_cp04

0xdd32,	// (0x0003f122) scroll_pane_cp05_ParamLimits

0xdd32,	// (0x0003f122) scroll_pane_cp05

0x7050,	// (0x00038440) mce_header_field_pane_ParamLimits

0x7050,	// (0x00038440) mce_header_field_pane

0x7070,	// (0x00038460) mce_header_field_pane_2_ParamLimits

0x7070,	// (0x00038460) mce_header_field_pane_2

0x7086,	// (0x00038476) mce_header_field_pane_3

0x708e,	// (0x0003847e) list_single_mce_message_pane_ParamLimits

0x708e,	// (0x0003847e) list_single_mce_message_pane

0x70a5,	// (0x00038495) list_single_mce_smart_pane_ParamLimits

0x70a5,	// (0x00038495) list_single_mce_smart_pane

0xdd3e,	// (0x0003f12e) input_focus_pane_cp03

0xdd47,	// (0x0003f137) list_header_data_pane

0x70c7,	// (0x000384b7) mce_header_field_pane_t1

0x70d5,	// (0x000384c5) list_single_mce_header_pane_ParamLimits

0x70d5,	// (0x000384c5) list_single_mce_header_pane

0xdd4f,	// (0x0003f13f) list_single_mce_header_pane_t1

0xdd5e,	// (0x0003f14e) list_single_mce_message_pane_g1

0xdd67,	// (0x0003f157) list_single_mce_message_pane_t1

0x7113,	// (0x00038503) bg_cale_heading_pane_cp01_ParamLimits

0x7113,	// (0x00038503) bg_cale_heading_pane_cp01

0xdd76,	// (0x0003f166) bg_cale_pane_cp02_ParamLimits

0xdd76,	// (0x0003f166) bg_cale_pane_cp02

0x7142,	// (0x00038532) cale_month_corner_pane

0x715c,	// (0x0003854c) cale_month_day_heading_pane_ParamLimits

0x715c,	// (0x0003854c) cale_month_day_heading_pane

0x718b,	// (0x0003857b) cale_month_pane_g1_ParamLimits

0x718b,	// (0x0003857b) cale_month_pane_g1

0x71af,	// (0x0003859f) cale_month_pane_g2_ParamLimits

0x71af,	// (0x0003859f) cale_month_pane_g2

0x71ce,	// (0x000385be) cale_month_pane_g3_ParamLimits

0x71ce,	// (0x000385be) cale_month_pane_g3

0x720a,	// (0x000385fa) cale_month_pane_g4_ParamLimits

0x720a,	// (0x000385fa) cale_month_pane_g4

0x7246,	// (0x00038636) cale_month_pane_g5_ParamLimits

0x7246,	// (0x00038636) cale_month_pane_g5

0x7282,	// (0x00038672) cale_month_pane_g6_ParamLimits

0x7282,	// (0x00038672) cale_month_pane_g6

0x72be,	// (0x000386ae) cale_month_pane_g7_ParamLimits

0x72be,	// (0x000386ae) cale_month_pane_g7

0x72fa,	// (0x000386ea) cale_month_pane_g8_ParamLimits

0x72fa,	// (0x000386ea) cale_month_pane_g8

0x7336,	// (0x00038726) cale_month_pane_g9_ParamLimits

0x7336,	// (0x00038726) cale_month_pane_g9

0x7370,	// (0x00038760) cale_month_pane_g10_ParamLimits

0x7370,	// (0x00038760) cale_month_pane_g10

0x73aa,	// (0x0003879a) cale_month_pane_g11_ParamLimits

0x73aa,	// (0x0003879a) cale_month_pane_g11

0x73e4,	// (0x000387d4) cale_month_pane_g12_ParamLimits

0x73e4,	// (0x000387d4) cale_month_pane_g12

0x741e,	// (0x0003880e) cale_month_pane_g13_ParamLimits

0x741e,	// (0x0003880e) cale_month_pane_g13

0x000c,

0xf287,	// (0x00040677) cale_month_pane_g_ParamLimits

0xf287,	// (0x00040677) cale_month_pane_g

0x7458,	// (0x00038848) cale_month_week_pane

0x746b,	// (0x0003885b) grid_cale_month_pane_ParamLimits

0x746b,	// (0x0003885b) grid_cale_month_pane

0x7491,	// (0x00038881) cale_month_day_heading_pane_t1

0x7517,	// (0x00038907) cale_month_day_heading_pane_t2

0x75a8,	// (0x00038998) cale_month_day_heading_pane_t3

0x7639,	// (0x00038a29) cale_month_day_heading_pane_t4

0x76ca,	// (0x00038aba) cale_month_day_heading_pane_t5

0x775b,	// (0x00038b4b) cale_month_day_heading_pane_t6

0x77ec,	// (0x00038bdc) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x00040692) cale_month_day_heading_pane_t

0xd9be,	// (0x0003edae) bg_cale_side_pane_cp01

0x787d,	// (0x00038c6d) cale_month_week_pane_t1

0x78b6,	// (0x00038ca6) cale_month_week_pane_t2

0x78ef,	// (0x00038cdf) cale_month_week_pane_t3

0x7928,	// (0x00038d18) cale_month_week_pane_t4

0x7961,	// (0x00038d51) cale_month_week_pane_t5

0x799a,	// (0x00038d8a) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x000406a1) cale_month_week_pane_t

0x79d3,	// (0x00038dc3) cell_cale_month_pane_ParamLimits

0x79d3,	// (0x00038dc3) cell_cale_month_pane

0x7ac1,	// (0x00038eb1) cell_cale_month_pane_g1

0x7acd,	// (0x00038ebd) cell_cale_month_pane_t1_ParamLimits

0x7acd,	// (0x00038ebd) cell_cale_month_pane_t1

0xd9cc,	// (0x0003edbc) grid_highlight_pane_cp08

0xd896,	// (0x0003ec86) main_smil_g1

0x7aed,	// (0x00038edd) smil_status_pane

0xddb5,	// (0x0003f1a5) smil_text_pane

0x07cf,	// (0x00031bbf) bg_popup_call3_rect_pane_g8

0x07d7,	// (0x00031bc7) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0004095a) bg_popup_call3_rect_pane_g

0x0acb,	// (0x00031ebb) smil_status_volume_pane_g1

0x7afe,	// (0x00038eee) smil_status_pane_t1

0x8c26,	// (0x0003a016) volume_smil_pane

0xddbf,	// (0x0003f1af) list_smil_text_pane

0x7b15,	// (0x00038f05) scroll_pane_cp011

0x7b1e,	// (0x00038f0e) smil_text_list_pane_t1_ParamLimits

0x7b1e,	// (0x00038f0e) smil_text_list_pane_t1

0x7b5d,	// (0x00038f4d) aid_volume_smil_ParamLimits

0x7b5d,	// (0x00038f4d) aid_volume_smil

0xd896,	// (0x0003ec86) smil_volume_pane_g1

0xd896,	// (0x0003ec86) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x000406c1) smil_volume_pane_g

0x6422,	// (0x00037812) listscroll_cale_day_pane

0xddc9,	// (0x0003f1b9) bg_cale_pane

0xdde1,	// (0x0003f1d1) list_cale_pane

0xde04,	// (0x0003f1f4) scroll_pane_cp09

0xde15,	// (0x0003f205) cale_bg_pane_g1

0xde1d,	// (0x0003f20d) cale_bg_pane_g2

0xde25,	// (0x0003f215) cale_bg_pane_g3

0xde2d,	// (0x0003f21d) cale_bg_pane_g4

0xde35,	// (0x0003f225) cale_bg_pane_g5

0xde3d,	// (0x0003f22d) cale_bg_pane_g6

0xde45,	// (0x0003f235) cale_bg_pane_g7

0xde4d,	// (0x0003f23d) cale_bg_pane_g8

0xde55,	// (0x0003f245) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x000406c6) cale_bg_pane_g

0x7b87,	// (0x00038f77) list_cale_time_pane_ParamLimits

0x7b87,	// (0x00038f77) list_cale_time_pane

0xde5d,	// (0x0003f24d) list_cale_time_pane_g1_ParamLimits

0xde5d,	// (0x0003f24d) list_cale_time_pane_g1

0xde69,	// (0x0003f259) list_cale_time_pane_g2_ParamLimits

0xde69,	// (0x0003f259) list_cale_time_pane_g2

0x7b9b,	// (0x00038f8b) list_cale_time_pane_g3_ParamLimits

0x7b9b,	// (0x00038f8b) list_cale_time_pane_g3

0x7ba7,	// (0x00038f97) list_cale_time_pane_g4_ParamLimits

0x7ba7,	// (0x00038f97) list_cale_time_pane_g4

0x7bb3,	// (0x00038fa3) list_cale_time_pane_g5_ParamLimits

0x7bb3,	// (0x00038fa3) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x000406d9) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x000406d9) list_cale_time_pane_g

0xde83,	// (0x0003f273) list_cale_time_pane_t1_ParamLimits

0xde83,	// (0x0003f273) list_cale_time_pane_t1

0xdeab,	// (0x0003f29b) list_cale_time_pane_t2_ParamLimits

0xdeab,	// (0x0003f29b) list_cale_time_pane_t2

0x7e70,	// (0x00039260) aid_blid_cardinal_pane

0x7eae,	// (0x0003929e) compass_pane_t4

0xded3,	// (0x0003f2c3) list_cale_time_pane_t4_ParamLimits

0xded3,	// (0x0003f2c3) list_cale_time_pane_t4

0x7ebc,	// (0x000392ac) compass_pane_t5

0x7eca,	// (0x000392ba) compass_pane_t6

0x7ed8,	// (0x000392c8) compass_pane_t7

0xe340,	// (0x0003f730) navi_pane_cc_t1

0xe4e5,	// (0x0003f8d5) aid_phob_thumbnail_center_pane

0x8456,	// (0x00039846) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x000406e6) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x000406e6) list_cale_time_pane_t

0xd176,	// (0x0003e566) bg_popup_window_pane_cp02_ParamLimits

0xd176,	// (0x0003e566) bg_popup_window_pane_cp02

0xdefb,	// (0x0003f2eb) heading_pane_cp01_ParamLimits

0xdefb,	// (0x0003f2eb) heading_pane_cp01

0xdf07,	// (0x0003f2f7) loc_req_pane_ParamLimits

0xdf07,	// (0x0003f2f7) loc_req_pane

0xdf17,	// (0x0003f307) loc_type_pane_ParamLimits

0xdf17,	// (0x0003f307) loc_type_pane

0xdf29,	// (0x0003f319) loc_type_pane_t1_ParamLimits

0xdf29,	// (0x0003f319) loc_type_pane_t1

0xdf3b,	// (0x0003f32b) loc_type_pane_t2_ParamLimits

0xdf3b,	// (0x0003f32b) loc_type_pane_t2

0xdf4d,	// (0x0003f33d) loc_type_pane_t3_ParamLimits

0xdf4d,	// (0x0003f33d) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x000406ed) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x000406ed) loc_type_pane_t

0xdf5f,	// (0x0003f34f) list_loc_req_pane

0xdf69,	// (0x0003f359) scroll_pane_cp012

0x7bbf,	// (0x00038faf) list_single_loc_request_popup_menu_pane_ParamLimits

0x7bbf,	// (0x00038faf) list_single_loc_request_popup_menu_pane

0xdf72,	// (0x0003f362) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xdf72,	// (0x0003f362) list_single_loc_request_popup_menu_pane_g1

0xdf7e,	// (0x0003f36e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xdf7e,	// (0x0003f36e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x000406f4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x000406f4) list_single_loc_request_popup_menu_pane_g

0xdf8a,	// (0x0003f37a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xdf8a,	// (0x0003f37a) list_single_loc_request_popup_menu_pane_t1

0x7bd1,	// (0x00038fc1) bg_popup_window_pane_cp03_ParamLimits

0x7bd1,	// (0x00038fc1) bg_popup_window_pane_cp03

0x7bdf,	// (0x00038fcf) heading_loc_req_pane_ParamLimits

0x7bdf,	// (0x00038fcf) heading_loc_req_pane

0x7beb,	// (0x00038fdb) popup_dyc_status_message_window_g1_ParamLimits

0x7beb,	// (0x00038fdb) popup_dyc_status_message_window_g1

0x7bf7,	// (0x00038fe7) popup_dyc_status_message_window_t1_ParamLimits

0x7bf7,	// (0x00038fe7) popup_dyc_status_message_window_t1

0x7c09,	// (0x00038ff9) popup_dyc_status_message_window_t2_ParamLimits

0x7c09,	// (0x00038ff9) popup_dyc_status_message_window_t2

0x7c1b,	// (0x0003900b) popup_dyc_status_message_window_t3_ParamLimits

0x7c1b,	// (0x0003900b) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x000406f9) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x000406f9) popup_dyc_status_message_window_t

0xd51d,	// (0x0003e90d) bg_heading_pane_cp01

0xdfa0,	// (0x0003f390) heading_loc_req_pane_g1

0xdfa8,	// (0x0003f398) heading_loc_req_pane_g2

0xdfb0,	// (0x0003f3a0) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x00040700) heading_loc_req_pane_g

0xdfb8,	// (0x0003f3a8) heading_loc_req_pane_t1

0xdfc7,	// (0x0003f3b7) bg_popup_sub_pane_cp01_ParamLimits

0xdfc7,	// (0x0003f3b7) bg_popup_sub_pane_cp01

0xdfd5,	// (0x0003f3c5) popup_cale_events_window_g1_ParamLimits

0xdfd5,	// (0x0003f3c5) popup_cale_events_window_g1

0xdff5,	// (0x0003f3e5) popup_cale_events_window_g2_ParamLimits

0xdff5,	// (0x0003f3e5) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x00040734) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x00040734) popup_cale_events_window_g

0xe015,	// (0x0003f405) popup_cale_events_window_t1_ParamLimits

0xe015,	// (0x0003f405) popup_cale_events_window_t1

0xe027,	// (0x0003f417) popup_cale_events_window_t2_ParamLimits

0xe027,	// (0x0003f417) popup_cale_events_window_t2

0xe065,	// (0x0003f455) popup_cale_events_window_t3_ParamLimits

0xe065,	// (0x0003f455) popup_cale_events_window_t3

0xe09f,	// (0x0003f48f) popup_cale_events_window_t4_ParamLimits

0xe09f,	// (0x0003f48f) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x00040739) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x00040739) popup_cale_events_window_t

0x7c47,	// (0x00039037) call_type_pane

0xe0d5,	// (0x0003f4c5) popup_call_status_window_g1

0x7c53,	// (0x00039043) popup_call_status_window_g2

0x7c5f,	// (0x0003904f) popup_call_status_window_g3

0x0002,

0xf352,	// (0x00040742) popup_call_status_window_g

0xe0e3,	// (0x0003f4d3) call_type_pane_g1

0xe0ec,	// (0x0003f4dc) call_type_pane_g2

0x0001,

0xf359,	// (0x00040749) call_type_pane_g

0xd51d,	// (0x0003e90d) bg_popup_sub_pane_cp02

0xe0f5,	// (0x0003f4e5) listscroll_popup_wml_pane

0xe0fd,	// (0x0003f4ed) list_wml_pane

0xe107,	// (0x0003f4f7) scroll_pane_cp013

0x7c6b,	// (0x0003905b) list_single_graphic_popup_wml_pane_ParamLimits

0x7c6b,	// (0x0003905b) list_single_graphic_popup_wml_pane

0xd896,	// (0x0003ec86) list_single_graphic_popup_wml_pane_g1

0xe110,	// (0x0003f500) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0004074e) list_single_graphic_popup_wml_pane_g

0xe118,	// (0x0003f508) list_single_graphic_popup_wml_pane_t1

0xe12e,	// (0x0003f51e) aid_call_pane

0xd770,	// (0x0003eb60) popup_clock_analogue_window_g1

0xd770,	// (0x0003eb60) popup_clock_analogue_window_g2

0x7c7f,	// (0x0003906f) popup_clock_analogue_window_g3

0x7c7f,	// (0x0003906f) popup_clock_analogue_window_g4

0xd896,	// (0x0003ec86) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x00040753) popup_clock_analogue_window_g

0x7c87,	// (0x00039077) popup_clock_analogue_window_t1

0x7c95,	// (0x00039085) clock_digital_number_pane_ParamLimits

0x7c95,	// (0x00039085) clock_digital_number_pane

0x7ca1,	// (0x00039091) clock_digital_number_pane_cp02_ParamLimits

0x7ca1,	// (0x00039091) clock_digital_number_pane_cp02

0x7cad,	// (0x0003909d) clock_digital_number_pane_cp03_ParamLimits

0x7cad,	// (0x0003909d) clock_digital_number_pane_cp03

0x7cb9,	// (0x000390a9) clock_digital_number_pane_cp04_ParamLimits

0x7cb9,	// (0x000390a9) clock_digital_number_pane_cp04

0x7cc5,	// (0x000390b5) clock_digital_separator_pane_ParamLimits

0x7cc5,	// (0x000390b5) clock_digital_separator_pane

0x7cd1,	// (0x000390c1) popup_clock_digital_window_t1

0xd896,	// (0x0003ec86) clock_digital_number_pane_g1

0xd896,	// (0x0003ec86) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x000406c1) clock_digital_number_pane_g

0xd896,	// (0x0003ec86) clock_digital_separator_pane_g1

0xd896,	// (0x0003ec86) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x000406c1) clock_digital_separator_pane_g

0xd51d,	// (0x0003e90d) bg_popup_window_pane_cp04

0xe136,	// (0x0003f526) heading_pane_cp03

0xe13e,	// (0x0003f52e) listscroll_popup_gms_pane

0xe146,	// (0x0003f536) grid_large_graphic_popup_pane

0xe150,	// (0x0003f540) listscroll_popup_gms_pane_g1

0xe158,	// (0x0003f548) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0004075e) listscroll_popup_gms_pane_g

0xdc19,	// (0x0003f009) scroll_pane_cp014

0x7cee,	// (0x000390de) cell_large_graphic_popup_pane_ParamLimits

0x7cee,	// (0x000390de) cell_large_graphic_popup_pane

0x7d05,	// (0x000390f5) cell_large_graphic_popup_pane_g1_ParamLimits

0x7d05,	// (0x000390f5) cell_large_graphic_popup_pane_g1

0xe160,	// (0x0003f550) cell_large_graphic_popup_pane_g2_ParamLimits

0xe160,	// (0x0003f550) cell_large_graphic_popup_pane_g2

0xe16c,	// (0x0003f55c) cell_large_graphic_popup_pane_g3_ParamLimits

0xe16c,	// (0x0003f55c) cell_large_graphic_popup_pane_g3

0xe179,	// (0x0003f569) cell_large_graphic_popup_pane_g4_ParamLimits

0xe179,	// (0x0003f569) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x00040763) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x00040763) cell_large_graphic_popup_pane_g

0xe189,	// (0x0003f579) grid_highlight_pane_cp010

0xd896,	// (0x0003ec86) bg_popup_call_pane_g1

0xe193,	// (0x0003f583) list_single_graphic_popup_conf_pane_ParamLimits

0xe193,	// (0x0003f583) list_single_graphic_popup_conf_pane

0xe1a6,	// (0x0003f596) list_highlight_pane_cp01

0xe1af,	// (0x0003f59f) list_single_graphic_popup_conf_pane_g1

0xe1b7,	// (0x0003f5a7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0004076c) list_single_graphic_popup_conf_pane_g

0xe1bf,	// (0x0003f5af) list_single_graphic_popup_conf_pane_t1

0xe1cd,	// (0x0003f5bd) linegrid_cams_pane_g1

0x7d11,	// (0x00039101) linegrid_cams_pane_g2

0xd94f,	// (0x0003ed3f) linegrid_cams_pane_g3

0xe1d6,	// (0x0003f5c6) linegrid_cams_pane_g4

0x7d1a,	// (0x0003910a) linegrid_cams_pane_g5

0x7d23,	// (0x00039113) linegrid_cams_pane_g6

0xd9ff,	// (0x0003edef) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x00040771) linegrid_cams_pane_g

0xe1df,	// (0x0003f5cf) popup_clock_analogue_window

0xe1df,	// (0x0003f5cf) popup_clock_digital_window

0xd51d,	// (0x0003e90d) popup_phob_thumbnail_window

0xd896,	// (0x0003ec86) call_video_uplink_pane_g1

0xe1e8,	// (0x0003f5d8) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x00040780) call_video_uplink_pane_g

0xd9cc,	// (0x0003edbc) video_uplink_pane

0xe1f0,	// (0x0003f5e0) mce_image_pane_g1

0x7d2c,	// (0x0003911c) mce_image_pane_g2

0x7d34,	// (0x00039124) mce_image_pane_g3

0x7d3c,	// (0x0003912c) mce_image_pane_g4

0x7d44,	// (0x00039134) mce_image_pane_g5

0x0004,

0xf395,	// (0x00040785) mce_image_pane_g

0xe1fa,	// (0x0003f5ea) control_top_pane_stacon_cp01_ParamLimits

0xe1fa,	// (0x0003f5ea) control_top_pane_stacon_cp01

0xe20a,	// (0x0003f5fa) uni_indicator_pane_stacon_cp01_ParamLimits

0xe20a,	// (0x0003f5fa) uni_indicator_pane_stacon_cp01

0xe21b,	// (0x0003f60b) bg_popup_sub_pane_cp03

0xe225,	// (0x0003f615) chi_dic_find_pane

0x7d4c,	// (0x0003913c) listscroll_chi_dic_pane

0xe22d,	// (0x0003f61d) main_pane_chidic_g1

0xe235,	// (0x0003f625) chi_dic_find_pane_t1

0xe243,	// (0x0003f633) find_chidic_pane

0xe24c,	// (0x0003f63c) chi_dic_list_pane_ParamLimits

0xe24c,	// (0x0003f63c) chi_dic_list_pane

0xe25d,	// (0x0003f64d) scroll_pane_cp020

0xe265,	// (0x0003f655) find_chidic_pane_t1

0xd51d,	// (0x0003e90d) input_focus_pane_cp06

0x7d5e,	// (0x0003914e) list_chi_dic_pane_ParamLimits

0x7d5e,	// (0x0003914e) list_chi_dic_pane

0x7d71,	// (0x00039161) list_chi_dic_pane_t1_ParamLimits

0x7d71,	// (0x00039161) list_chi_dic_pane_t1

0xd51d,	// (0x0003e90d) list_highlight_pane_cp020

0xe274,	// (0x0003f664) bg_cale_heading_pane_g1

0x7d84,	// (0x00039174) bg_cale_heading_pane_g2

0x7d8c,	// (0x0003917c) bg_cale_heading_pane_g3

0x7d94,	// (0x00039184) bg_cale_heading_pane_g4

0x7d9c,	// (0x0003918c) bg_cale_heading_pane_g5

0x7da4,	// (0x00039194) bg_cale_heading_pane_g6

0x7dac,	// (0x0003919c) bg_cale_heading_pane_g7

0x7db4,	// (0x000391a4) bg_cale_heading_pane_g8

0x7dbc,	// (0x000391ac) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x00040790) bg_cale_heading_pane_g

0xe274,	// (0x0003f664) bg_cale_side_pane_g1

0x7dc4,	// (0x000391b4) bg_cale_side_pane_g2

0x7dcc,	// (0x000391bc) bg_cale_side_pane_g3

0x7dd4,	// (0x000391c4) bg_cale_side_pane_g4

0x7ddc,	// (0x000391cc) bg_cale_side_pane_g5

0x7de4,	// (0x000391d4) bg_cale_side_pane_g6

0x7dec,	// (0x000391dc) bg_cale_side_pane_g7

0x7df4,	// (0x000391e4) bg_cale_side_pane_g8

0x7dfc,	// (0x000391ec) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x000407a3) bg_cale_side_pane_g

0x7e04,	// (0x000391f4) popup_call_status_window_ParamLimits

0x7e04,	// (0x000391f4) popup_call_status_window

0xe27c,	// (0x0003f66c) stacon_top_pane

0xe284,	// (0x0003f674) status_pane_ParamLimits

0xe284,	// (0x0003f674) status_pane

0xe29e,	// (0x0003f68e) status_small_pane

0xe2a6,	// (0x0003f696) control_pane

0xd51d,	// (0x0003e90d) stacon_bottom_pane

0xe2ae,	// (0x0003f69e) list_single_mce_smart_pane_t1_ParamLimits

0xe2ae,	// (0x0003f69e) list_single_mce_smart_pane_t1

0xe2c1,	// (0x0003f6b1) list_single_mce_smart_pane_t2_ParamLimits

0xe2c1,	// (0x0003f6b1) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x000407b6) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x000407b6) list_single_mce_smart_pane_t

0x7e13,	// (0x00039203) compass_pane

0x7e1c,	// (0x0003920c) main_location2_pane_t1

0x7e32,	// (0x00039222) main_location2_pane_t2

0x7e48,	// (0x00039238) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x000407bb) main_location2_pane_t

0xe2e9,	// (0x0003f6d9) compass_pane_g1_ParamLimits

0xe2e9,	// (0x0003f6d9) compass_pane_g1

0x7e90,	// (0x00039280) compass_pane_t1

0x7e9f,	// (0x0003928f) compass_pane_t2

0x0005,

0xf3d4,	// (0x000407c4) compass_pane_t

0x7ee6,	// (0x000392d6) text_secondary_cp61

0xe337,	// (0x0003f727) navi_pane_cams_g5

0xe383,	// (0x0003f773) navi_pane_im_t1

0xe391,	// (0x0003f781) navi_pane_mp_g1_ParamLimits

0xe391,	// (0x0003f781) navi_pane_mp_g1

0xe3a5,	// (0x0003f795) navi_pane_mp_g2_ParamLimits

0xe3a5,	// (0x0003f795) navi_pane_mp_g2

0xe3b1,	// (0x0003f7a1) navi_pane_mp_g3_ParamLimits

0xe3b1,	// (0x0003f7a1) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x000407d8) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x000407d8) navi_pane_mp_g

0xe3bd,	// (0x0003f7ad) navi_pane_mp_t1

0xe3cb,	// (0x0003f7bb) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x000407df) navi_pane_mp_t

0xe436,	// (0x0003f826) navi_pane_vt_g1

0xe3bd,	// (0x0003f7ad) navi_pane_vt_t1

0xe43e,	// (0x0003f82e) navi_slider_pane

0xda18,	// (0x0003ee08) zooming_pane

0xe446,	// (0x0003f836) navi_slider_pane_g1

0x7f68,	// (0x00039358) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x000407e6) navi_slider_pane_g

0xe46a,	// (0x0003f85a) aid_levels_zoom

0xe472,	// (0x0003f862) zooming_pane_g1

0xe47a,	// (0x0003f86a) zooming_pane_g2

0xe47a,	// (0x0003f86a) zooming_pane_g3

0x0002,

0xf405,	// (0x000407f5) zooming_pane_g

0xe482,	// (0x0003f872) level_10_zoom

0xe48b,	// (0x0003f87b) level_11_zoom

0xe494,	// (0x0003f884) level_1_zoom

0xe49d,	// (0x0003f88d) level_2_zoom

0xe4a6,	// (0x0003f896) level_3_zoom

0xe4af,	// (0x0003f89f) level_4_zoom

0xe4b8,	// (0x0003f8a8) level_5_zoom

0xe4c1,	// (0x0003f8b1) level_6_zoom

0xe4ca,	// (0x0003f8ba) level_7_zoom

0xe4d3,	// (0x0003f8c3) level_8_zoom

0xe4dc,	// (0x0003f8cc) level_9_zoom

0xe4ed,	// (0x0003f8dd) popup_phob_thumbnail_window_g1

0xe4f5,	// (0x0003f8e5) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x000407fc) popup_phob_thumbnail_window_g

0x0971,	// (0x00031d61) level_1_location

0x0979,	// (0x00031d69) level_2_location

0x0981,	// (0x00031d71) level_3_location

0x0989,	// (0x00031d79) level_4_location

0xda18,	// (0x0003ee08) level_5_location

0x7f7a,	// (0x0003936a) mce_icon_pane_g1

0x7f82,	// (0x00039372) mce_icon_pane_g2

0x0001,

0xf411,	// (0x00040801) mce_icon_pane_g

0x7f8a,	// (0x0003937a) main_mup_pane_g1_ParamLimits

0x7f8a,	// (0x0003937a) main_mup_pane_g1

0x7fa2,	// (0x00039392) main_mup_pane_g2_ParamLimits

0x7fa2,	// (0x00039392) main_mup_pane_g2

0x7fbe,	// (0x000393ae) main_mup_pane_g3_ParamLimits

0x7fbe,	// (0x000393ae) main_mup_pane_g3

0x7fda,	// (0x000393ca) main_mup_pane_g4_ParamLimits

0x7fda,	// (0x000393ca) main_mup_pane_g4

0x7ff6,	// (0x000393e6) main_mup_pane_g5_ParamLimits

0x7ff6,	// (0x000393e6) main_mup_pane_g5

0x8013,	// (0x00039403) main_mup_pane_g6_ParamLimits

0x8013,	// (0x00039403) main_mup_pane_g6

0x802f,	// (0x0003941f) main_mup_pane_g7_ParamLimits

0x802f,	// (0x0003941f) main_mup_pane_g7

0x804b,	// (0x0003943b) main_mup_pane_g8_ParamLimits

0x804b,	// (0x0003943b) main_mup_pane_g8

0x8067,	// (0x00039457) main_mup_pane_g9_ParamLimits

0x8067,	// (0x00039457) main_mup_pane_g9

0x807e,	// (0x0003946e) main_mup_pane_g10_ParamLimits

0x807e,	// (0x0003946e) main_mup_pane_g10

0x8095,	// (0x00039485) main_mup_pane_g11_ParamLimits

0x8095,	// (0x00039485) main_mup_pane_g11

0x80a9,	// (0x00039499) main_mup_pane_g12_ParamLimits

0x80a9,	// (0x00039499) main_mup_pane_g12

0x80b5,	// (0x000394a5) main_mup_pane_g13_ParamLimits

0x80b5,	// (0x000394a5) main_mup_pane_g13

0x000c,

0xf416,	// (0x00040806) main_mup_pane_g_ParamLimits

0xf416,	// (0x00040806) main_mup_pane_g

0x80c9,	// (0x000394b9) main_mup_pane_t1_ParamLimits

0x80c9,	// (0x000394b9) main_mup_pane_t1

0x80e6,	// (0x000394d6) main_mup_pane_t2_ParamLimits

0x80e6,	// (0x000394d6) main_mup_pane_t2

0x8100,	// (0x000394f0) main_mup_pane_t3_ParamLimits

0x8100,	// (0x000394f0) main_mup_pane_t3

0x811a,	// (0x0003950a) main_mup_pane_t4_ParamLimits

0x811a,	// (0x0003950a) main_mup_pane_t4

0x812c,	// (0x0003951c) main_mup_pane_t5_ParamLimits

0x812c,	// (0x0003951c) main_mup_pane_t5

0x813e,	// (0x0003952e) main_mup_pane_t6_ParamLimits

0x813e,	// (0x0003952e) main_mup_pane_t6

0x0005,

0xf431,	// (0x00040821) main_mup_pane_t_ParamLimits

0xf431,	// (0x00040821) main_mup_pane_t

0x8154,	// (0x00039544) mup_progress_pane_ParamLimits

0x8154,	// (0x00039544) mup_progress_pane

0x8160,	// (0x00039550) mup_visualizer_pane_ParamLimits

0x8160,	// (0x00039550) mup_visualizer_pane

0x818e,	// (0x0003957e) mup_volume_pane_ParamLimits

0x818e,	// (0x0003957e) mup_volume_pane

0xe0d5,	// (0x0003f4c5) mup_visualizer_pane_g1_ParamLimits

0xe0d5,	// (0x0003f4c5) mup_visualizer_pane_g1

0xe0d5,	// (0x0003f4c5) mup_visualizer_pane_g2_ParamLimits

0xe0d5,	// (0x0003f4c5) mup_visualizer_pane_g2

0xe2e9,	// (0x0003f6d9) mup_visualizer_pane_g3_ParamLimits

0xe2e9,	// (0x0003f6d9) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0004082e) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0004082e) mup_visualizer_pane_g

0xd896,	// (0x0003ec86) mup_volume_pane_g1

0xe505,	// (0x0003f8f5) mup_volume_pane_g2

0x0001,

0xf445,	// (0x00040835) mup_volume_pane_g

0xd896,	// (0x0003ec86) mup_progress_pane_g1

0xe50e,	// (0x0003f8fe) mup_progress_pane_g2

0xe517,	// (0x0003f907) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0004083a) mup_progress_pane_g

0xd51d,	// (0x0003e90d) bg_popup_window_pane_cp05

0xe520,	// (0x0003f910) heading_pane_cp02_ParamLimits

0xe520,	// (0x0003f910) heading_pane_cp02

0xe53a,	// (0x0003f92a) list_popup_blid_pane

0xe542,	// (0x0003f932) list_blid_sat_info_pane_ParamLimits

0xe542,	// (0x0003f932) list_blid_sat_info_pane

0xe555,	// (0x0003f945) list_blid_sat_info_pane_g1

0xe55d,	// (0x0003f94d) list_blid_sat_info_pane_t1

0x8281,	// (0x00039671) mup_equalizer_pane_ParamLimits

0x8281,	// (0x00039671) mup_equalizer_pane

0x829a,	// (0x0003968a) mup_equalizer_pane_cp1_ParamLimits

0x829a,	// (0x0003968a) mup_equalizer_pane_cp1

0x82b3,	// (0x000396a3) mup_equalizer_pane_cp2_ParamLimits

0x82b3,	// (0x000396a3) mup_equalizer_pane_cp2

0x82cc,	// (0x000396bc) mup_equalizer_pane_cp3_ParamLimits

0x82cc,	// (0x000396bc) mup_equalizer_pane_cp3

0x82e5,	// (0x000396d5) mup_equalizer_pane_cp4_ParamLimits

0x82e5,	// (0x000396d5) mup_equalizer_pane_cp4

0x82fe,	// (0x000396ee) mup_equalizer_pane_cp5

0x8310,	// (0x00039700) mup_equalizer_pane_cp6

0x8322,	// (0x00039712) mup_equalizer_pane_cp7

0x084f,	// (0x00031c3f) bg_popup_call_poc_act_pane_g9

0x0857,	// (0x00031c47) bg_popup_call_poc_act_pane_g10

0x085f,	// (0x00031c4f) bg_popup_call_poc_act_pane_g11

0x000a,

0xd778,	// (0x0003eb68) mup_scale_pane

0xd896,	// (0x0003ec86) mup_scale_pane_g1

0xe56b,	// (0x0003f95b) mup_scale_pane_g2

0x0006,

0xf466,	// (0x00040856) mup_scale_pane_g

0xe58f,	// (0x0003f97f) msg_data_pane

0xe597,	// (0x0003f987) scroll_pane_cp017

0x4c03,	// (0x00035ff3) bg_list_pane_cp04_ParamLimits

0x4c03,	// (0x00035ff3) bg_list_pane_cp04

0xe59f,	// (0x0003f98f) msg_data_pane_g1

0x7d2c,	// (0x0003911c) msg_data_pane_g2

0x7d34,	// (0x00039124) msg_data_pane_g3

0x8346,	// (0x00039736) msg_data_pane_g4

0x7d44,	// (0x00039134) msg_data_pane_g5

0x7f7a,	// (0x0003936a) msg_data_pane_g6

0x834e,	// (0x0003973e) msg_data_pane_g7

0x0006,

0xf475,	// (0x00040865) msg_data_pane_g

0x4c23,	// (0x00036013) msg_text_pane_ParamLimits

0x4c23,	// (0x00036013) msg_text_pane

0x8356,	// (0x00039746) qrid_highlight_pane_cp011_ParamLimits

0x8356,	// (0x00039746) qrid_highlight_pane_cp011

0xd51d,	// (0x0003e90d) msg_body_pane

0xd51d,	// (0x0003e90d) msg_header_pane

0xe5b0,	// (0x0003f9a0) input_focus_pane_cp07

0x4c5b,	// (0x0003604b) msg_header_pane_t1_ParamLimits

0x4c5b,	// (0x0003604b) msg_header_pane_t1

0x4c6d,	// (0x0003605d) msg_header_pane_t2_ParamLimits

0x4c6d,	// (0x0003605d) msg_header_pane_t2

0x0001,

0xf489,	// (0x00040879) msg_header_pane_t_ParamLimits

0xf489,	// (0x00040879) msg_header_pane_t

0xe5c5,	// (0x0003f9b5) msg_body_pane_g1

0x4c7f,	// (0x0003606f) msg_body_pane_t1_ParamLimits

0x4c7f,	// (0x0003606f) msg_body_pane_t1

0x4caa,	// (0x0003609a) msg_body_pane_t2_ParamLimits

0x4caa,	// (0x0003609a) msg_body_pane_t2

0x4cbc,	// (0x000360ac) msg_body_pane_t3_ParamLimits

0x4cbc,	// (0x000360ac) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0004087e) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0004087e) msg_body_pane_t

0x83ba,	// (0x000397aa) main_viewer_pane_g1_ParamLimits

0x83ba,	// (0x000397aa) main_viewer_pane_g1

0x83c6,	// (0x000397b6) main_viewer_pane_g2_ParamLimits

0x83c6,	// (0x000397b6) main_viewer_pane_g2

0x83d2,	// (0x000397c2) main_viewer_pane_g3_ParamLimits

0x83d2,	// (0x000397c2) main_viewer_pane_g3

0x83e1,	// (0x000397d1) main_viewer_pane_g4_ParamLimits

0x83e1,	// (0x000397d1) main_viewer_pane_g4

0x83f0,	// (0x000397e0) main_viewer_pane_g5_ParamLimits

0x83f0,	// (0x000397e0) main_viewer_pane_g5

0x83f0,	// (0x000397e0) main_viewer_pane_g7_ParamLimits

0x83f0,	// (0x000397e0) main_viewer_pane_g7

0x8402,	// (0x000397f2) main_viewer_pane_g8_ParamLimits

0x8402,	// (0x000397f2) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0004088e) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0004088e) main_viewer_pane_g

0xe5cd,	// (0x0003f9bd) viewer_content_pane_ParamLimits

0xe5cd,	// (0x0003f9bd) viewer_content_pane

0x8432,	// (0x00039822) main_postcard_pane_g1_ParamLimits

0x8432,	// (0x00039822) main_postcard_pane_g1

0x843e,	// (0x0003982e) main_postcard_pane_g2_ParamLimits

0x843e,	// (0x0003982e) main_postcard_pane_g2

0x844a,	// (0x0003983a) main_postcard_pane_g3_ParamLimits

0x844a,	// (0x0003983a) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0004089f) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0004089f) main_postcard_pane_g

0x8456,	// (0x00039846) main_postcard_pane_g4

0x0ab8,	// (0x00031ea8) smil_status_volume_pane_g2

0x847a,	// (0x0003986a) postcard_pane_ParamLimits

0x847a,	// (0x0003986a) postcard_pane

0xe0d5,	// (0x0003f4c5) postcard_pane_g1_ParamLimits

0xe0d5,	// (0x0003f4c5) postcard_pane_g1

0x84aa,	// (0x0003989a) postcard_pane_g2_ParamLimits

0x84aa,	// (0x0003989a) postcard_pane_g2

0x84b6,	// (0x000398a6) postcard_pane_g3_ParamLimits

0x84b6,	// (0x000398a6) postcard_pane_g3

0xe5db,	// (0x0003f9cb) postcard_pane_g4_ParamLimits

0xe5db,	// (0x0003f9cb) postcard_pane_g4

0x84c2,	// (0x000398b2) postcard_pane_g5_ParamLimits

0x84c2,	// (0x000398b2) postcard_pane_g5

0x84ce,	// (0x000398be) postcard_pane_g6_ParamLimits

0x84ce,	// (0x000398be) postcard_pane_g6

0xe5e9,	// (0x0003f9d9) postcard_pane_g7_ParamLimits

0xe5e9,	// (0x0003f9d9) postcard_pane_g7

0x0006,

0xf4bc,	// (0x000408ac) postcard_pane_g_ParamLimits

0xf4bc,	// (0x000408ac) postcard_pane_g

0x84da,	// (0x000398ca) main_mp2_pane_g1_ParamLimits

0x84da,	// (0x000398ca) main_mp2_pane_g1

0x84e6,	// (0x000398d6) main_mp2_pane_g2_ParamLimits

0x84e6,	// (0x000398d6) main_mp2_pane_g2

0x84f2,	// (0x000398e2) main_mp2_pane_g3_ParamLimits

0x84f2,	// (0x000398e2) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x000408bb) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x000408bb) main_mp2_pane_g

0x84fe,	// (0x000398ee) main_mp2_pane_t1_ParamLimits

0x84fe,	// (0x000398ee) main_mp2_pane_t1

0x8513,	// (0x00039903) main_mp2_pane_t2_ParamLimits

0x8513,	// (0x00039903) main_mp2_pane_t2

0x8525,	// (0x00039915) main_mp2_pane_t3_ParamLimits

0x8525,	// (0x00039915) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x000408c2) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x000408c2) main_mp2_pane_t

0xe5f7,	// (0x0003f9e7) pec_content_pane_ParamLimits

0xe5f7,	// (0x0003f9e7) pec_content_pane

0xdc19,	// (0x0003f009) scroll_pane_cp015

0xe609,	// (0x0003f9f9) pec_attribute_pane_ParamLimits

0xe609,	// (0x0003f9f9) pec_attribute_pane

0x8537,	// (0x00039927) pec_content_pane_g1_ParamLimits

0x8537,	// (0x00039927) pec_content_pane_g1

0xe619,	// (0x0003fa09) pec_content_pane_t1_ParamLimits

0xe619,	// (0x0003fa09) pec_content_pane_t1

0xe62b,	// (0x0003fa1b) pec_content_pane_t2_ParamLimits

0xe62b,	// (0x0003fa1b) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x000408c9) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x000408c9) pec_content_pane_t

0x8543,	// (0x00039933) list_single_graphic_pane_cp01_ParamLimits

0x8543,	// (0x00039933) list_single_graphic_pane_cp01

0xd778,	// (0x0003eb68) bg_popup_sub_pane_cp04

0xe63d,	// (0x0003fa2d) popup_mup_playback_window_g1

0xe649,	// (0x0003fa39) popup_mup_playback_window_t1

0xe65e,	// (0x0003fa4e) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x000408ce) popup_mup_playback_window_t

0xe695,	// (0x0003fa85) main_image_pane_g1_ParamLimits

0xe695,	// (0x0003fa85) main_image_pane_g1

0xe6d8,	// (0x0003fac8) scroll_pane_cp018_ParamLimits

0xe6d8,	// (0x0003fac8) scroll_pane_cp018

0xe6f0,	// (0x0003fae0) scroll_pane_cp016_ParamLimits

0xe6f0,	// (0x0003fae0) scroll_pane_cp016

0x85c8,	// (0x000399b8) smil2_image_pane_ParamLimits

0x85c8,	// (0x000399b8) smil2_image_pane

0x85f0,	// (0x000399e0) smil2_root_pane_ParamLimits

0x85f0,	// (0x000399e0) smil2_root_pane

0x861c,	// (0x00039a0c) smil2_text_pane_ParamLimits

0x861c,	// (0x00039a0c) smil2_text_pane

0xd51d,	// (0x0003e90d) bg_list_pane_cp06

0xe724,	// (0x0003fb14) grid_radio_pane

0xd51d,	// (0x0003e90d) bg_popup_window_pane_cp06

0xe72c,	// (0x0003fb1c) main_fmradio_pane_t1

0xe136,	// (0x0003f526) heading_pane_cp04

0xe73a,	// (0x0003fb2a) main_fmradio_pane_t2

0x08a7,	// (0x00031c97) popup_cale_lunar_info_window_g1

0xe748,	// (0x0003fb38) main_fmradio_pane_t3

0x08af,	// (0x00031c9f) popup_cale_lunar_info_window_g2

0xe756,	// (0x0003fb46) main_fmradio_pane_t4

0x0001,

0xe764,	// (0x0003fb54) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x000409bc) popup_cale_lunar_info_window_g

0xf4f3,	// (0x000408e3) main_fmradio_pane_t

0xe772,	// (0x0003fb62) wait_bar_pane_cp03

0xda58,	// (0x0003ee48) cell_fmradio_pane_ParamLimits

0xda58,	// (0x0003ee48) cell_fmradio_pane

0xe5e9,	// (0x0003f9d9) cell_fmradio_pane_g1_ParamLimits

0xe5e9,	// (0x0003f9d9) cell_fmradio_pane_g1

0xd51d,	// (0x0003e90d) grid_highlight_pane_cp011

0xe77a,	// (0x0003fb6a) poc_content_pane_ParamLimits

0xe77a,	// (0x0003fb6a) poc_content_pane

0xe78d,	// (0x0003fb7d) scroll_pane_cp019

0x8650,	// (0x00039a40) popup_call_poc_act_window_ParamLimits

0x8650,	// (0x00039a40) popup_call_poc_act_window

0x865d,	// (0x00039a4d) popup_call_poc_inact_window_ParamLimits

0x865d,	// (0x00039a4d) popup_call_poc_inact_window

0xf590,	// (0x00040980) bg_popup_call_poc_act_pane_g

0x0867,	// (0x00031c57) bg_popup_call_poc_inact_pane_g1

0x086f,	// (0x00031c5f) bg_popup_call_poc_inact_pane_g2

0xe795,	// (0x0003fb85) popup_call_poc_act_window_g2

0x0877,	// (0x00031c67) bg_popup_call_poc_inact_pane_g3

0x07f7,	// (0x00031be7) bg_popup_call_poc_inact_pane_g4

0x087f,	// (0x00031c6f) bg_popup_call_poc_inact_pane_g5

0xe79d,	// (0x0003fb8d) popup_call_poc_act_window_t1_ParamLimits

0xe79d,	// (0x0003fb8d) popup_call_poc_act_window_t1

0xe7c5,	// (0x0003fbb5) popup_call_poc_act_window_t2_ParamLimits

0xe7c5,	// (0x0003fbb5) popup_call_poc_act_window_t2

0xe7ed,	// (0x0003fbdd) popup_call_poc_act_window_t3_ParamLimits

0xe7ed,	// (0x0003fbdd) popup_call_poc_act_window_t3

0xe815,	// (0x0003fc05) popup_call_poc_act_window_t4_ParamLimits

0xe815,	// (0x0003fc05) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x000408ee) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x000408ee) popup_call_poc_act_window_t

0x0887,	// (0x00031c77) bg_popup_call_poc_inact_pane_g6

0x088f,	// (0x00031c7f) bg_popup_call_poc_inact_pane_g7

0x0897,	// (0x00031c87) bg_popup_call_poc_inact_pane_g8

0xe827,	// (0x0003fc17) popup_call_poc_inact_window_g2

0x089f,	// (0x00031c8f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x00040997) bg_popup_call_poc_inact_pane_g

0xe82f,	// (0x0003fc1f) popup_call_poc_inact_window_t1_ParamLimits

0xe82f,	// (0x0003fc1f) popup_call_poc_inact_window_t1

0xe844,	// (0x0003fc34) popup_call_poc_inact_window_t2_ParamLimits

0xe844,	// (0x0003fc34) popup_call_poc_inact_window_t2

0xe859,	// (0x0003fc49) popup_call_poc_inact_window_t3_ParamLimits

0xe859,	// (0x0003fc49) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x000408f7) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x000408f7) popup_call_poc_inact_window_t

0x0a3e,	// (0x00031e2e) context_pane_ParamLimits

0x8b94,	// (0x00039f84) signal_pane_ParamLimits

0xda18,	// (0x0003ee08) main_call2_pane

0x8b16,	// (0x00039f06) popup_phob_thumbnail2_window_ParamLimits

0x8b16,	// (0x00039f06) popup_phob_thumbnail2_window

0x836c,	// (0x0003975c) aid_hotspot_pointer_arrow_pane

0x8374,	// (0x00039764) aid_hotspot_pointer_hand_pane

0x890c,	// (0x00039cfc) phob_pre_status_pane_g5

0x6a2e,	// (0x00037e1e) cams_zoom_pane_ParamLimits

0x6a3a,	// (0x00037e2a) image_vga_pane_ParamLimits

0x6a47,	// (0x00037e37) main_camera_pane_g1_ParamLimits

0x6a53,	// (0x00037e43) main_camera_pane_g2_ParamLimits

0x6a5f,	// (0x00037e4f) main_camera_pane_g3_ParamLimits

0x6a6b,	// (0x00037e5b) main_camera_pane_g4_ParamLimits

0x6a77,	// (0x00037e67) main_camera_pane_g5_ParamLimits

0x6a83,	// (0x00037e73) main_camera_pane_g6_ParamLimits

0x6a8f,	// (0x00037e7f) main_camera_pane_g7_ParamLimits

0xf206,	// (0x000405f6) main_camera_pane_g_ParamLimits

0x6a9b,	// (0x00037e8b) main_camera_pane_t1_ParamLimits

0x6aad,	// (0x00037e9d) main_camera_pane_t2_ParamLimits

0xf217,	// (0x00040607) main_camera_pane_t_ParamLimits

0xd778,	// (0x0003eb68) bg_popup_preview_window_pane_cp01_ParamLimits

0xd778,	// (0x0003eb68) bg_popup_preview_window_pane_cp01

0xe86e,	// (0x0003fc5e) popup_phob_thumbnail2_window_g1_ParamLimits

0xe86e,	// (0x0003fc5e) popup_phob_thumbnail2_window_g1

0xd51d,	// (0x0003e90d) call2_cli_visual_pane

0x8679,	// (0x00039a69) popup_call2_audio_conf_window_ParamLimits

0x8679,	// (0x00039a69) popup_call2_audio_conf_window

0x868c,	// (0x00039a7c) popup_call2_audio_first_window_ParamLimits

0x868c,	// (0x00039a7c) popup_call2_audio_first_window

0x8708,	// (0x00039af8) popup_call2_audio_in_window_ParamLimits

0x8708,	// (0x00039af8) popup_call2_audio_in_window

0x8738,	// (0x00039b28) popup_call2_audio_out_window_ParamLimits

0x8738,	// (0x00039b28) popup_call2_audio_out_window

0x8784,	// (0x00039b74) popup_call2_audio_second_window_ParamLimits

0x8784,	// (0x00039b74) popup_call2_audio_second_window

0x87d0,	// (0x00039bc0) popup_call2_audio_wait_window_ParamLimits

0x87d0,	// (0x00039bc0) popup_call2_audio_wait_window

0xd51d,	// (0x0003e90d) bg_popup_call2_act_pane_cp03

0xd75a,	// (0x0003eb4a) list_conf_pane_cp

0xe87a,	// (0x0003fc6a) popup_call2_audio_conf_window_t1

0xe193,	// (0x0003f583) list_single_graphic_popup_conf2_pane_ParamLimits

0xe193,	// (0x0003f583) list_single_graphic_popup_conf2_pane

0xe1a6,	// (0x0003f596) list_highlight_pane_cp04

0xe888,	// (0x0003fc78) list_single_graphic_popup_conf2_pane_g1

0xe1b7,	// (0x0003f5a7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x000408fe) list_single_graphic_popup_conf2_pane_g

0xe890,	// (0x0003fc80) list_single_graphic_popup_conf2_pane_t1

0xe89e,	// (0x0003fc8e) bg_popup_call2_act_pane_cp01_ParamLimits

0xe89e,	// (0x0003fc8e) bg_popup_call2_act_pane_cp01

0xe928,	// (0x0003fd18) call_type_pane_cp05_ParamLimits

0xe928,	// (0x0003fd18) call_type_pane_cp05

0xe97c,	// (0x0003fd6c) popup_call2_audio_second_window_g1_ParamLimits

0xe97c,	// (0x0003fd6c) popup_call2_audio_second_window_g1

0xe9d0,	// (0x0003fdc0) popup_call2_audio_second_window_g2_ParamLimits

0xe9d0,	// (0x0003fdc0) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x00040903) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x00040903) popup_call2_audio_second_window_g

0xea35,	// (0x0003fe25) popup_call2_audio_second_window_t1_ParamLimits

0xea35,	// (0x0003fe25) popup_call2_audio_second_window_t1

0xeaf0,	// (0x0003fee0) popup_call2_audio_second_window_t2_ParamLimits

0xeaf0,	// (0x0003fee0) popup_call2_audio_second_window_t2

0xeb43,	// (0x0003ff33) popup_call2_audio_second_window_t3_ParamLimits

0xeb43,	// (0x0003ff33) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0004090a) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0004090a) popup_call2_audio_second_window_t

0xd51d,	// (0x0003e90d) bg_popup_call2_in_pane_cp02

0xd527,	// (0x0003e917) call_type_pane_cp04

0xd52f,	// (0x0003e91f) popup_call2_audio_wait_window_g1

0xd537,	// (0x0003e927) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000404e5) popup_call2_audio_wait_window_g

0xd53f,	// (0x0003e92f) popup_call2_audio_wait_window_t3

0xec36,	// (0x00040026) bg_popup_call2_act_pane_ParamLimits

0xec36,	// (0x00040026) bg_popup_call2_act_pane

0xecf6,	// (0x000400e6) call_type_pane_cp03_ParamLimits

0xecf6,	// (0x000400e6) call_type_pane_cp03

0xed5a,	// (0x0004014a) popup_call2_audio_first_window_g1_ParamLimits

0xed5a,	// (0x0004014a) popup_call2_audio_first_window_g1

0xedca,	// (0x000401ba) popup_call2_audio_first_window_g2_ParamLimits

0xedca,	// (0x000401ba) popup_call2_audio_first_window_g2

0xe0d5,	// (0x0003f4c5) popup_call2_audio_first_window_g3_ParamLimits

0xe0d5,	// (0x0003f4c5) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x00040913) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x00040913) popup_call2_audio_first_window_g

0xeea8,	// (0x00040298) popup_call2_audio_first_window_t1_ParamLimits

0xeea8,	// (0x00040298) popup_call2_audio_first_window_t1

0xefab,	// (0x0004039b) popup_call2_audio_first_window_t4_ParamLimits

0xefab,	// (0x0004039b) popup_call2_audio_first_window_t4

0x020a,	// (0x000315fa) popup_call2_audio_first_window_t5_ParamLimits

0x020a,	// (0x000315fa) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0004091e) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0004091e) popup_call2_audio_first_window_t

0xd770,	// (0x0003eb60) bg_popup_call2_act_pane_g1

0x08b7,	// (0x00031ca7) popup_cale_lunar_info_window_t1

0x08c5,	// (0x00031cb5) popup_cale_lunar_info_window_t2

0x08d3,	// (0x00031cc3) popup_cale_lunar_info_window_t3

0xd51d,	// (0x0003e90d) bg_popup_call2_bubble_pane

0x030b,	// (0x000316fb) bg_popup_call2_in_pane_cp01_ParamLimits

0x030b,	// (0x000316fb) bg_popup_call2_in_pane_cp01

0xd1f9,	// (0x0003e5e9) call_type_pane_cp02

0x0353,	// (0x00031743) popup_call2_audio_out_window_g1_ParamLimits

0x0353,	// (0x00031743) popup_call2_audio_out_window_g1

0x037f,	// (0x0003176f) popup_call2_audio_out_window_g2_ParamLimits

0x037f,	// (0x0003176f) popup_call2_audio_out_window_g2

0x03a7,	// (0x00031797) popup_call2_audio_out_window_g3_ParamLimits

0x03a7,	// (0x00031797) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x00040927) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x00040927) popup_call2_audio_out_window_g

0x03e2,	// (0x000317d2) popup_call2_audio_out_window_t1_ParamLimits

0x03e2,	// (0x000317d2) popup_call2_audio_out_window_t1

0x0441,	// (0x00031831) popup_call2_audio_out_window_t2_ParamLimits

0x0441,	// (0x00031831) popup_call2_audio_out_window_t2

0x0495,	// (0x00031885) popup_call2_audio_out_window_t3_ParamLimits

0x0495,	// (0x00031885) popup_call2_audio_out_window_t3

0x04ab,	// (0x0003189b) popup_call2_audio_out_window_t4_ParamLimits

0x04ab,	// (0x0003189b) popup_call2_audio_out_window_t4

0x04c1,	// (0x000318b1) popup_call2_audio_out_window_t5_ParamLimits

0x04c1,	// (0x000318b1) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x00040930) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x00040930) popup_call2_audio_out_window_t

0x0525,	// (0x00031915) bg_popup_call2_in_pane_ParamLimits

0x0525,	// (0x00031915) bg_popup_call2_in_pane

0x0581,	// (0x00031971) popup_call2_audio_in_window_g1_ParamLimits

0x0581,	// (0x00031971) popup_call2_audio_in_window_g1

0x05b9,	// (0x000319a9) popup_call2_audio_in_window_g2_ParamLimits

0x05b9,	// (0x000319a9) popup_call2_audio_in_window_g2

0x05f1,	// (0x000319e1) popup_call2_audio_in_window_g3_ParamLimits

0x05f1,	// (0x000319e1) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0004093d) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0004093d) popup_call2_audio_in_window_g

0x0649,	// (0x00031a39) popup_call2_audio_in_window_t1_ParamLimits

0x0649,	// (0x00031a39) popup_call2_audio_in_window_t1

0x06c9,	// (0x00031ab9) popup_call2_audio_in_window_t2_ParamLimits

0x06c9,	// (0x00031ab9) popup_call2_audio_in_window_t2

0x0749,	// (0x00031b39) popup_call2_audio_in_window_t3_ParamLimits

0x0749,	// (0x00031b39) popup_call2_audio_in_window_t3

0x0763,	// (0x00031b53) popup_call2_audio_in_window_t4_ParamLimits

0x0763,	// (0x00031b53) popup_call2_audio_in_window_t4

0x0775,	// (0x00031b65) popup_call2_audio_in_window_t5_ParamLimits

0x0775,	// (0x00031b65) popup_call2_audio_in_window_t5

0x078a,	// (0x00031b7a) popup_call2_audio_in_window_t6_ParamLimits

0x078a,	// (0x00031b7a) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x00040946) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x00040946) popup_call2_audio_in_window_t

0xd770,	// (0x0003eb60) bg_popup_call2_in_pane_g1

0x08e1,	// (0x00031cd1) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x000409c1) popup_cale_lunar_info_window_t

0xd778,	// (0x0003eb68) bg_popup_call2_rect_pane_ParamLimits

0xd778,	// (0x0003eb68) bg_popup_call2_rect_pane

0xd51d,	// (0x0003e90d) call2_cli_visual_graphic_pane

0xd51d,	// (0x0003e90d) call2_cli_visual_text_pane

0x8c19,	// (0x0003a009) smil_status_volume_pane_g3

0x0002,

0xd896,	// (0x0003ec86) call2_cli_visual_graphic_pane_g1

0xd896,	// (0x0003ec86) call2_cli_visual_graphic_pane_g2

0xd896,	// (0x0003ec86) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x00040953) call2_cli_visual_graphic_pane_g

0x079f,	// (0x00031b8f) bg_popup_call2_rect_pane_g1

0xd934,	// (0x0003ed24) bg_popup_call2_rect_pane_g2

0x07a7,	// (0x00031b97) bg_popup_call2_rect_pane_g3

0x07af,	// (0x00031b9f) bg_popup_call2_rect_pane_g4

0x07b7,	// (0x00031ba7) bg_popup_call2_rect_pane_g5

0x07bf,	// (0x00031baf) bg_popup_call2_rect_pane_g6

0x07c7,	// (0x00031bb7) bg_popup_call2_rect_pane_g7

0x07cf,	// (0x00031bbf) bg_popup_call2_rect_pane_g8

0x07d7,	// (0x00031bc7) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0004095a) bg_popup_call2_rect_pane_g

0x07df,	// (0x00031bcf) bg_popup_call2_bubble_pane_g1

0x07e7,	// (0x00031bd7) bg_popup_call2_bubble_pane_g2

0x07ef,	// (0x00031bdf) bg_popup_call2_bubble_pane_g3

0x07f7,	// (0x00031be7) bg_popup_call2_bubble_pane_g4

0x07ff,	// (0x00031bef) bg_popup_call2_bubble_pane_g5

0x0807,	// (0x00031bf7) bg_popup_call2_bubble_pane_g6

0x080f,	// (0x00031bff) bg_popup_call2_bubble_pane_g7

0x0817,	// (0x00031c07) bg_popup_call2_bubble_pane_g8

0x081f,	// (0x00031c0f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0004096d) bg_popup_call2_bubble_pane_g

0x6432,	// (0x00037822) aid_cale_week_size_cell_pane

0x6abf,	// (0x00037eaf) aid_cams_cif_uncrop_pane_ParamLimits

0x6abf,	// (0x00037eaf) aid_cams_cif_uncrop_pane

0x6c17,	// (0x00038007) aid_cams_size_cell_ParamLimits

0x6c17,	// (0x00038007) aid_cams_size_cell

0x6c23,	// (0x00038013) grid_cams_pane_ParamLimits

0x6c2f,	// (0x0003801f) linegrid_cams_pane_ParamLimits

0x6cee,	// (0x000380de) call_video_pane_t1

0x6d0b,	// (0x000380fb) call_video_pane_t2

0x0001,

0xf26a,	// (0x0004065a) call_video_pane_t

0x70ed,	// (0x000384dd) aid_cale_month_size_cell_pane_ParamLimits

0x70ed,	// (0x000384dd) aid_cale_month_size_cell_pane

0xf61a,	// (0x00040a0a) smil_status_volume_pane_g

0x8c26,	// (0x0003a016) volume_smil_pane_ParamLimits

0x5cbb,	// (0x000370ab) aid_popup2_width_pane

0x634d,	// (0x0003773d) cell_qdial_pane_g4_ParamLimits

0x634d,	// (0x0003773d) cell_qdial_pane_g4

0x7e70,	// (0x00039260) aid_blid_cardinal_pane_ParamLimits

0x7e7c,	// (0x0003926c) aid_blid_destination_pane_ParamLimits

0x7e7c,	// (0x0003926c) aid_blid_destination_pane

0xd778,	// (0x0003eb68) bg_popup_call_poc_act_pane_ParamLimits

0xd778,	// (0x0003eb68) bg_popup_call_poc_act_pane

0xd778,	// (0x0003eb68) bg_popup_call_poc_inact_pane_ParamLimits

0xd778,	// (0x0003eb68) bg_popup_call_poc_inact_pane

0x0827,	// (0x00031c17) bg_popup_call_poc_act_pane_g1

0x082f,	// (0x00031c1f) bg_popup_call_poc_act_pane_g2

0x0837,	// (0x00031c27) bg_popup_call_poc_act_pane_g3

0x07f7,	// (0x00031be7) bg_popup_call_poc_act_pane_g4

0x07ff,	// (0x00031bef) bg_popup_call_poc_act_pane_g5

0x083f,	// (0x00031c2f) bg_popup_call_poc_act_pane_g6

0x080f,	// (0x00031bff) bg_popup_call_poc_act_pane_g7

0x0847,	// (0x00031c37) bg_popup_call_poc_act_pane_g8

0xd51d,	// (0x0003e90d) main_usb_pane

0x8a75,	// (0x00039e65) popup_cale_lunar_info_window

0x6f90,	// (0x00038380) im_reading_pane_t1_ParamLimits

0xdb62,	// (0x0003ef52) list_im_pane_ParamLimits

0xdb73,	// (0x0003ef63) scroll_pane_cp07_ParamLimits

0xd51d,	// (0x0003e90d) grid_highlight_pane_cp012

0xd778,	// (0x0003eb68) mup_scale_pane_ParamLimits

0xe0d5,	// (0x0003f4c5) main_usb_pane_g1_ParamLimits

0xe0d5,	// (0x0003f4c5) main_usb_pane_g1

0x8831,	// (0x00039c21) main_usb_pane_g2_ParamLimits

0x8831,	// (0x00039c21) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x000409aa) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x000409aa) main_usb_pane_g

0x883d,	// (0x00039c2d) main_usb_pane_t1_ParamLimits

0x883d,	// (0x00039c2d) main_usb_pane_t1

0x884f,	// (0x00039c3f) main_usb_pane_t2_ParamLimits

0x884f,	// (0x00039c3f) main_usb_pane_t2

0x8861,	// (0x00039c51) main_usb_pane_t3_ParamLimits

0x8861,	// (0x00039c51) main_usb_pane_t3

0x8873,	// (0x00039c63) main_usb_pane_t4_ParamLimits

0x8873,	// (0x00039c63) main_usb_pane_t4

0x8885,	// (0x00039c75) main_usb_pane_t5_ParamLimits

0x8885,	// (0x00039c75) main_usb_pane_t5

0x8897,	// (0x00039c87) main_usb_pane_t6_ParamLimits

0x8897,	// (0x00039c87) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x000409af) main_usb_pane_t_ParamLimits

0xe2e0,	// (0x0003f6d0) aid_text_placing

0x7e1c,	// (0x0003920c) main_location2_pane_t1_ParamLimits

0x7e32,	// (0x00039222) main_location2_pane_t2_ParamLimits

0x7e48,	// (0x00039238) main_location2_pane_t3_ParamLimits

0x7e5e,	// (0x0003924e) main_location2_pane_t4_ParamLimits

0x7e5e,	// (0x0003924e) main_location2_pane_t4

0xf3cb,	// (0x000407bb) main_location2_pane_t_ParamLimits

0xd7b4,	// (0x0003eba4) find_pinb_pane_g2_ParamLimits

0xd7b4,	// (0x0003eba4) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0004050b) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0004050b) find_pinb_pane_g

0xd7c0,	// (0x0003ebb0) find_pinb_pane_t1_ParamLimits

0xd7d2,	// (0x0003ebc2) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x00040510) find_pinb_pane_t_ParamLimits

0xd51d,	// (0x0003e90d) main_call3_pane

0x7491,	// (0x00038881) cale_month_day_heading_pane_t1_ParamLimits

0x7517,	// (0x00038907) cale_month_day_heading_pane_t2_ParamLimits

0x75a8,	// (0x00038998) cale_month_day_heading_pane_t3_ParamLimits

0x7639,	// (0x00038a29) cale_month_day_heading_pane_t4_ParamLimits

0x76ca,	// (0x00038aba) cale_month_day_heading_pane_t5_ParamLimits

0x775b,	// (0x00038b4b) cale_month_day_heading_pane_t6_ParamLimits

0x77ec,	// (0x00038bdc) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x00040692) cale_month_day_heading_pane_t_ParamLimits

0x7b0c,	// (0x00038efc) smil_status_volume_pane

0x8492,	// (0x00039882) postcard_address_pane_ParamLimits

0x8492,	// (0x00039882) postcard_address_pane

0x849e,	// (0x0003988e) postcard_message_pane_ParamLimits

0x849e,	// (0x0003988e) postcard_message_pane

0x880d,	// (0x00039bfd) call2_cli_visual_pane_t1_ParamLimits

0x880d,	// (0x00039bfd) call2_cli_visual_pane_t1

0x8d77,	// (0x0003a167) postcard_message_pane_t1_ParamLimits

0x8d77,	// (0x0003a167) postcard_message_pane_t1

0x8d60,	// (0x0003a150) postcard_address_pane_t1_ParamLimits

0x8d60,	// (0x0003a150) postcard_address_pane_t1

0x8d53,	// (0x0003a143) popup_call3_audio_in_window_ParamLimits

0x8d53,	// (0x0003a143) popup_call3_audio_in_window

0x8c3b,	// (0x0003a02b) bg_popup_call3_in_pane_ParamLimits

0x8c3b,	// (0x0003a02b) bg_popup_call3_in_pane

0x8c99,	// (0x0003a089) popup_call3_audio_in_window_g1_ParamLimits

0x8c99,	// (0x0003a089) popup_call3_audio_in_window_g1

0x8cb1,	// (0x0003a0a1) popup_call3_audio_in_window_g2_ParamLimits

0x8cb1,	// (0x0003a0a1) popup_call3_audio_in_window_g2

0x8cc9,	// (0x0003a0b9) popup_call3_audio_in_window_g3_ParamLimits

0x8cc9,	// (0x0003a0b9) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x00040a11) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x00040a11) popup_call3_audio_in_window_g

0x8cf1,	// (0x0003a0e1) popup_call3_audio_in_window_t1_ParamLimits

0x8cf1,	// (0x0003a0e1) popup_call3_audio_in_window_t1

0x8d19,	// (0x0003a109) popup_call3_audio_in_window_t2_ParamLimits

0x8d19,	// (0x0003a109) popup_call3_audio_in_window_t2

0x8d41,	// (0x0003a131) popup_call3_audio_in_window_t3_ParamLimits

0x8d41,	// (0x0003a131) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x00040a1a) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x00040a1a) popup_call3_audio_in_window_t

0xda18,	// (0x0003ee08) bg_popup_call3_rect_pane

0x079f,	// (0x00031b8f) bg_popup_call3_rect_pane_g1

0xd934,	// (0x0003ed24) bg_popup_call3_rect_pane_g2

0x07a7,	// (0x00031b97) bg_popup_call3_rect_pane_g3

0x07af,	// (0x00031b9f) bg_popup_call3_rect_pane_g4

0x07b7,	// (0x00031ba7) bg_popup_call3_rect_pane_g5

0x07bf,	// (0x00031baf) bg_popup_call3_rect_pane_g6

0x07c7,	// (0x00031bb7) bg_popup_call3_rect_pane_g7

0x81a9,	// (0x00039599) mup_visualizer_osc_pane

0xe4fd,	// (0x0003f8ed) mup_visualizer_spec_pane

0x8c5b,	// (0x0003a04b) call3_video_qcif_pane_ParamLimits

0x8c5b,	// (0x0003a04b) call3_video_qcif_pane

0x8c6b,	// (0x0003a05b) call3_video_qcif_uncrop_pane_ParamLimits

0x8c6b,	// (0x0003a05b) call3_video_qcif_uncrop_pane

0x8c77,	// (0x0003a067) call3_video_subqcif_pane_ParamLimits

0x8c77,	// (0x0003a067) call3_video_subqcif_pane

0x8c89,	// (0x0003a079) call3_video_subqcif_uncrop_pane_ParamLimits

0x8c89,	// (0x0003a079) call3_video_subqcif_uncrop_pane

0x8ce1,	// (0x0003a0d1) popup_call3_audio_in_window_g4_ParamLimits

0x8ce1,	// (0x0003a0d1) popup_call3_audio_in_window_g4

0x8c08,	// (0x00039ff8) mup_spec_half_pane

0x8c11,	// (0x0003a001) mup_spec_half_pane_cp

0x0a9e,	// (0x00031e8e) mup_osc_middle_pane

0x0aa7,	// (0x00031e97) mup_visualizer_osc_pane_g1

0x8be9,	// (0x00039fd9) mup_spec_bar_pane_ParamLimits

0x8be9,	// (0x00039fd9) mup_spec_bar_pane

0x0a8b,	// (0x00031e7b) mup_spec_bar_pane_g1

0x0a95,	// (0x00031e85) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x00040a05) mup_spec_bar_pane_g

0x6432,	// (0x00037822) aid_cale_week_size_cell_pane_ParamLimits

0x6447,	// (0x00037837) bg_cale_heading_pane_ParamLimits

0xd972,	// (0x0003ed62) bg_cale_pane_cp01_ParamLimits

0x645f,	// (0x0003784f) cale_week_corner_pane_ParamLimits

0x6479,	// (0x00037869) cale_week_day_heading_pane_ParamLimits

0x6491,	// (0x00037881) cale_week_scroll_pane_g1_ParamLimits

0x64a4,	// (0x00037894) cale_week_scroll_pane_g2_ParamLimits

0x64b7,	// (0x000378a7) cale_week_scroll_pane_g3_ParamLimits

0x64ca,	// (0x000378ba) cale_week_scroll_pane_g4_ParamLimits

0x64dd,	// (0x000378cd) cale_week_scroll_pane_g5_ParamLimits

0x64f0,	// (0x000378e0) cale_week_scroll_pane_g6_ParamLimits

0x6503,	// (0x000378f3) cale_week_scroll_pane_g7_ParamLimits

0x6516,	// (0x00037906) cale_week_scroll_pane_g8_ParamLimits

0x6529,	// (0x00037919) cale_week_scroll_pane_g9_ParamLimits

0x653c,	// (0x0003792c) cale_week_scroll_pane_g10_ParamLimits

0x654f,	// (0x0003793f) cale_week_scroll_pane_g11_ParamLimits

0x6562,	// (0x00037952) cale_week_scroll_pane_g12_ParamLimits

0x6575,	// (0x00037965) cale_week_scroll_pane_g13_ParamLimits

0x6588,	// (0x00037978) cale_week_scroll_pane_g14_ParamLimits

0x659b,	// (0x0003798b) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0004059c) cale_week_scroll_pane_g_ParamLimits

0x65c1,	// (0x000379b1) cale_week_time_pane_ParamLimits

0x65d4,	// (0x000379c4) grid_cale_week_pane_ParamLimits

0xd98f,	// (0x0003ed7f) listscroll_cale_week_pane_t1

0xd9a1,	// (0x0003ed91) scroll_pane_cp08_ParamLimits

0x7142,	// (0x00038532) cale_month_corner_pane_ParamLimits

0xdda3,	// (0x0003f193) cale_month_pane_t1

0x7458,	// (0x00038848) cale_month_week_pane_ParamLimits

0xe0d5,	// (0x0003f4c5) popup_call_status_window_g1_ParamLimits

0x7c53,	// (0x00039043) popup_call_status_window_g2_ParamLimits

0x7c5f,	// (0x0003904f) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x00040742) popup_call_status_window_g_ParamLimits

0xe126,	// (0x0003f516) aid_call2_pane

0x4c4f,	// (0x0003603f) msg_header_pane_g1

0x8492,	// (0x00039882) postcard_address2_pane_ParamLimits

0x8492,	// (0x00039882) postcard_address2_pane

0x849e,	// (0x0003988e) postcard_message2_pane_ParamLimits

0x849e,	// (0x0003988e) postcard_message2_pane

0x8ba0,	// (0x00039f90) message2_row_pane_ParamLimits

0x8ba0,	// (0x00039f90) message2_row_pane

0x8bb8,	// (0x00039fa8) address2_row_pane_ParamLimits

0x8bb8,	// (0x00039fa8) address2_row_pane

0x0a59,	// (0x00031e49) postcard_message2_row_pane_g1

0x0a61,	// (0x00031e51) postcard_message2_row_pane_t1

0x0a59,	// (0x00031e49) address2_row_pane_g1

0x0a61,	// (0x00031e51) address2_row_pane_t1

0xda10,	// (0x0003ee00) aid_size_cell_vorec

0xd51d,	// (0x0003e90d) main_rss_pane

0x8bcb,	// (0x00039fbb) rss_list_single_pane_ParamLimits

0x8bcb,	// (0x00039fbb) rss_list_single_pane

0x0a6f,	// (0x00031e5f) rss_list_single_pane_t1

0x0a7d,	// (0x00031e6d) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x00040a00) rss_list_single_pane_t

0xd51d,	// (0x0003e90d) main_camera2_pane

0xd51d,	// (0x0003e90d) main_video2_pane

0x8dc7,	// (0x0003a1b7) cams_zoom_pane_cp2_ParamLimits

0x8dc7,	// (0x0003a1b7) cams_zoom_pane_cp2

0x8dd3,	// (0x0003a1c3) image2_vga_pane_ParamLimits

0x8dd3,	// (0x0003a1c3) image2_vga_pane

0x8de2,	// (0x0003a1d2) main_camera2_pane_g1_ParamLimits

0x8de2,	// (0x0003a1d2) main_camera2_pane_g1

0x8dee,	// (0x0003a1de) main_camera2_pane_g2_ParamLimits

0x8dee,	// (0x0003a1de) main_camera2_pane_g2

0x8dfa,	// (0x0003a1ea) main_camera2_pane_g3_ParamLimits

0x8dfa,	// (0x0003a1ea) main_camera2_pane_g3

0x8e06,	// (0x0003a1f6) main_camera2_pane_g4_ParamLimits

0x8e06,	// (0x0003a1f6) main_camera2_pane_g4

0x8e12,	// (0x0003a202) main_camera2_pane_g5_ParamLimits

0x8e12,	// (0x0003a202) main_camera2_pane_g5

0x8e1e,	// (0x0003a20e) main_camera2_pane_g6_ParamLimits

0x8e1e,	// (0x0003a20e) main_camera2_pane_g6

0x8e2a,	// (0x0003a21a) main_camera2_pane_g7_ParamLimits

0x8e2a,	// (0x0003a21a) main_camera2_pane_g7

0x8e36,	// (0x0003a226) main_camera2_pane_g8_ParamLimits

0x8e36,	// (0x0003a226) main_camera2_pane_g8

0x0008,

0xf631,	// (0x00040a21) main_camera2_pane_g_ParamLimits

0xf631,	// (0x00040a21) main_camera2_pane_g

0x8e4e,	// (0x0003a23e) main_camera2_pane_t1_ParamLimits

0x8e4e,	// (0x0003a23e) main_camera2_pane_t1

0x8e60,	// (0x0003a250) main_camera2_pane_t2_ParamLimits

0x8e60,	// (0x0003a250) main_camera2_pane_t2

0x8e72,	// (0x0003a262) main_camera2_pane_t3_ParamLimits

0x8e72,	// (0x0003a262) main_camera2_pane_t3

0x8e84,	// (0x0003a274) main_camera2_pane_t4_ParamLimits

0x8e84,	// (0x0003a274) main_camera2_pane_t4

0x0006,

0xf644,	// (0x00040a34) main_camera2_pane_t_ParamLimits

0xf644,	// (0x00040a34) main_camera2_pane_t

0x8edf,	// (0x0003a2cf) cams_zoom_pane_cp4_ParamLimits

0x8edf,	// (0x0003a2cf) cams_zoom_pane_cp4

0x8eef,	// (0x0003a2df) image2_cif_pane_ParamLimits

0x8eef,	// (0x0003a2df) image2_cif_pane

0x8f00,	// (0x0003a2f0) image2_subqcif_pane_ParamLimits

0x8f00,	// (0x0003a2f0) image2_subqcif_pane

0x8f0d,	// (0x0003a2fd) main_video2_pane_g1_ParamLimits

0x8f0d,	// (0x0003a2fd) main_video2_pane_g1

0x8f1f,	// (0x0003a30f) main_video2_pane_g2_ParamLimits

0x8f1f,	// (0x0003a30f) main_video2_pane_g2

0x8f2f,	// (0x0003a31f) main_video2_pane_g3_ParamLimits

0x8f2f,	// (0x0003a31f) main_video2_pane_g3

0x8f3f,	// (0x0003a32f) main_video2_pane_g4_ParamLimits

0x8f3f,	// (0x0003a32f) main_video2_pane_g4

0x8f4f,	// (0x0003a33f) main_video2_pane_g5_ParamLimits

0x8f4f,	// (0x0003a33f) main_video2_pane_g5

0x8f5f,	// (0x0003a34f) main_video2_pane_g6_ParamLimits

0x8f5f,	// (0x0003a34f) main_video2_pane_g6

0x0005,

0xf653,	// (0x00040a43) main_video2_pane_g_ParamLimits

0xf653,	// (0x00040a43) main_video2_pane_g

0x8f71,	// (0x0003a361) main_video2_pane_t1_ParamLimits

0x8f71,	// (0x0003a361) main_video2_pane_t1

0x8f8b,	// (0x0003a37b) main_video2_pane_t2_ParamLimits

0x8f8b,	// (0x0003a37b) main_video2_pane_t2

0x8fb1,	// (0x0003a3a1) main_video2_pane_t3_ParamLimits

0x8fb1,	// (0x0003a3a1) main_video2_pane_t3

0x0002,

0xf660,	// (0x00040a50) main_video2_pane_t_ParamLimits

0xf660,	// (0x00040a50) main_video2_pane_t

0x8946,	// (0x00039d36) call_muted_g2

0x0001,

0xf602,	// (0x000409f2) call_muted_g

0xd51d,	// (0x0003e90d) main_mup2_pane

0x0b59,	// (0x00031f49) main_mup2_pane_g1_ParamLimits

0x0b59,	// (0x00031f49) main_mup2_pane_g1

0x8fd7,	// (0x0003a3c7) main_mup2_pane_g2_ParamLimits

0x8fd7,	// (0x0003a3c7) main_mup2_pane_g2

0x9247,	// (0x0003a637) main_mup_pane_g13_cp1

0x924f,	// (0x0003a63f) mup_volume_pane_cp1

0x8ff7,	// (0x0003a3e7) main_mup2_pane_g4_ParamLimits

0x8ff7,	// (0x0003a3e7) main_mup2_pane_g4

0x9008,	// (0x0003a3f8) main_mup2_pane_g5_ParamLimits

0x9008,	// (0x0003a3f8) main_mup2_pane_g5

0x9019,	// (0x0003a409) main_mup2_pane_g6_ParamLimits

0x9019,	// (0x0003a409) main_mup2_pane_g6

0x902a,	// (0x0003a41a) main_mup2_pane_g7_ParamLimits

0x902a,	// (0x0003a41a) main_mup2_pane_g7

0x0006,

0xf667,	// (0x00040a57) main_mup2_pane_g_ParamLimits

0xf667,	// (0x00040a57) main_mup2_pane_g

0x9046,	// (0x0003a436) main_mup2_pane_t1_ParamLimits

0x9046,	// (0x0003a436) main_mup2_pane_t1

0x905d,	// (0x0003a44d) main_mup2_pane_t2_ParamLimits

0x905d,	// (0x0003a44d) main_mup2_pane_t2

0x9074,	// (0x0003a464) main_mup2_pane_t3_ParamLimits

0x9074,	// (0x0003a464) main_mup2_pane_t3

0x908b,	// (0x0003a47b) main_mup2_pane_t4_ParamLimits

0x908b,	// (0x0003a47b) main_mup2_pane_t4

0x90a5,	// (0x0003a495) main_mup2_pane_t5_ParamLimits

0x90a5,	// (0x0003a495) main_mup2_pane_t5

0x90bf,	// (0x0003a4af) main_mup2_pane_t6_ParamLimits

0x90bf,	// (0x0003a4af) main_mup2_pane_t6

0x0005,

0xf676,	// (0x00040a66) main_mup2_pane_t_ParamLimits

0xf676,	// (0x00040a66) main_mup2_pane_t

0x90f7,	// (0x0003a4e7) mup2_visualizer_pane_ParamLimits

0x90f7,	// (0x0003a4e7) mup2_visualizer_pane

0x9129,	// (0x0003a519) mup_progress_pane_cp_ParamLimits

0x9129,	// (0x0003a519) mup_progress_pane_cp

0x9232,	// (0x0003a622) mup_volume_pane_cp_ParamLimits

0x9232,	// (0x0003a622) mup_volume_pane_cp

0x9140,	// (0x0003a530) mup2_visualizer_pane_g1_ParamLimits

0x9140,	// (0x0003a530) mup2_visualizer_pane_g1

0x0b2b,	// (0x00031f1b) mup2_visualizer_pane_g2_ParamLimits

0x0b2b,	// (0x00031f1b) mup2_visualizer_pane_g2

0x9155,	// (0x0003a545) mup2_visualizer_pane_g3_ParamLimits

0x9155,	// (0x0003a545) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x00040a73) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x00040a73) mup2_visualizer_pane_g

0xda10,	// (0x0003ee00) aid_size_cell_fmradio

0x8a28,	// (0x00039e18) aid_height_parent_landcape

0xdc00,	// (0x0003eff0) wml_content_pane_cp

0xdc08,	// (0x0003eff8) wml_tabs_pane

0xdc11,	// (0x0003f001) popup_wml_miniature_window

0xdc19,	// (0x0003f009) scroll_pane_cp021

0xdc2d,	// (0x0003f01d) wml_content_pane_comp8

0xd51d,	// (0x0003e90d) bg_popup_sub_pane_cp05

0x0b49,	// (0x00031f39) popup_wml_miniature_window_g1

0x0b51,	// (0x00031f41) wml_miniature_view_pane

0x9161,	// (0x0003a551) aid_size_wml_view

0x9169,	// (0x0003a559) wml_miniature_view_pane_g1

0x9172,	// (0x0003a562) wml_miniature_view_pane_g2

0x917b,	// (0x0003a56b) wml_miniature_view_pane_g3

0x9183,	// (0x0003a573) wml_miniature_view_pane_g4

0x918b,	// (0x0003a57b) wml_miniature_view_pane_g5

0x9193,	// (0x0003a583) wml_miniature_view_pane_g6

0x919b,	// (0x0003a58b) wml_miniature_view_pane_g7

0x91a3,	// (0x0003a593) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x00040a7a) wml_miniature_view_pane_g

0x0b59,	// (0x00031f49) background_graphic_ParamLimits

0x0b59,	// (0x00031f49) background_graphic

0x0b65,	// (0x00031f55) wml_tabs_2_pane

0x0b6e,	// (0x00031f5e) wml_tabs_3_pane_ParamLimits

0x0b6e,	// (0x00031f5e) wml_tabs_3_pane

0x0b80,	// (0x00031f70) wml_tabs_4_pane_ParamLimits

0x0b80,	// (0x00031f70) wml_tabs_4_pane

0x0b96,	// (0x00031f86) wml_tabs_5_pane_ParamLimits

0x0b96,	// (0x00031f86) wml_tabs_5_pane

0x0bb0,	// (0x00031fa0) wml_tabs_pane_g2_ParamLimits

0x0bb0,	// (0x00031fa0) wml_tabs_pane_g2

0x0bc4,	// (0x00031fb4) wml_tabs_pane_g3_ParamLimits

0x0bc4,	// (0x00031fb4) wml_tabs_pane_g3

0x91ab,	// (0x0003a59b) wml_tabs_2_active_pane_ParamLimits

0x91ab,	// (0x0003a59b) wml_tabs_2_active_pane

0x91bb,	// (0x0003a5ab) wml_tabs_2_passive_pane_ParamLimits

0x91bb,	// (0x0003a5ab) wml_tabs_2_passive_pane

0x91cb,	// (0x0003a5bb) wml_tabs_3_active_pane_cp_ParamLimits

0x91cb,	// (0x0003a5bb) wml_tabs_3_active_pane_cp

0x91dc,	// (0x0003a5cc) wml_tabs_3_passive_pane_ParamLimits

0x91dc,	// (0x0003a5cc) wml_tabs_3_passive_pane

0x91ed,	// (0x0003a5dd) wml_tabs_3_passive_pane_cp_ParamLimits

0x91ed,	// (0x0003a5dd) wml_tabs_3_passive_pane_cp

0x91fe,	// (0x0003a5ee) tabs_4_active_pane

0x9206,	// (0x0003a5f6) tabs_4_passive_pane

0x920e,	// (0x0003a5fe) tabs_4_passive_pane_cp

0x9216,	// (0x0003a606) tabs_4_passive_pane_cp2

0x8829,	// (0x00039c19) aid_height_text

0x8176,	// (0x00039566) mup_volume_cont_pane_ParamLimits

0x8176,	// (0x00039566) mup_volume_cont_pane

0x5fff,	// (0x000373ef) aid_size_cell_pinb

0x6009,	// (0x000373f9) aid_size_list_pinb

0x9112,	// (0x0003a502) mup2_volume_cont_pane_ParamLimits

0x9112,	// (0x0003a502) mup2_volume_cont_pane

0x921e,	// (0x0003a60e) mup2_volume_cont_pane_g1_ParamLimits

0x921e,	// (0x0003a60e) mup2_volume_cont_pane_g1

0x5cc3,	// (0x000370b3) aid_size_cell_touch_ParamLimits

0x5cc3,	// (0x000370b3) aid_size_cell_touch

0x5eff,	// (0x000372ef) touch_pane_ParamLimits

0x5eff,	// (0x000372ef) touch_pane

0xd102,	// (0x0003e4f2) main_rss2_pane

0x0c1a,	// (0x0003200a) listscroll_rss2_pane

0x0c23,	// (0x00032013) rss2_navigation_pane

0x0c2b,	// (0x0003201b) list_rss2_pane

0xe25d,	// (0x0003f64d) scroll_pane_cp22

0x0c33,	// (0x00032023) rss2_navigation_pane_g1

0x0c3c,	// (0x0003202c) rss2_navigation_pane_g2

0x0c44,	// (0x00032034) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x00040a8b) rss2_navigation_pane_g

0x0c4c,	// (0x0003203c) rss2_navigation_pane_t1

0x9257,	// (0x0003a647) rss2_list_single_pane_ParamLimits

0x9257,	// (0x0003a647) rss2_list_single_pane

0x0c5a,	// (0x0003204a) rss2_list_single_pane_t2

0x0c68,	// (0x00032058) rss2_list_single_pane_t3_ParamLimits

0x0c68,	// (0x00032058) rss2_list_single_pane_t3

0x0c85,	// (0x00032075) rss2_list_single_pane_t4

0x7af6,	// (0x00038ee6) smil_status_pane_g1

0xf08e,	// (0x0004047e) main_image2_pane_ParamLimits

0xf08e,	// (0x0004047e) main_image2_pane

0x8e42,	// (0x0003a232) main_camera2_pane_g9_ParamLimits

0x8e42,	// (0x0003a232) main_camera2_pane_g9

0x8e96,	// (0x0003a286) main_camera2_pane_t5_ParamLimits

0x8e96,	// (0x0003a286) main_camera2_pane_t5

0x8ea8,	// (0x0003a298) main_camera2_pane_t6_ParamLimits

0x8ea8,	// (0x0003a298) main_camera2_pane_t6

0x926e,	// (0x0003a65e) main_image2_pane_g1_ParamLimits

0x926e,	// (0x0003a65e) main_image2_pane_g1

0x863e,	// (0x00039a2e) smil2_video_pane_ParamLimits

0x863e,	// (0x00039a2e) smil2_video_pane

0x49df,	// (0x00035dcf) aid_zoom_text_primary_cp

0x5eae,	// (0x0003729e) popup_preview_fixed_window

0xdb5a,	// (0x0003ef4a) im_reading_pane_g1

0x8d9e,	// (0x0003a18e) cams2_bc_adjust_pane_cp_ParamLimits

0x8d9e,	// (0x0003a18e) cams2_bc_adjust_pane_cp

0x8ed3,	// (0x0003a2c3) cams2_bc_adjust_pane_ParamLimits

0x8ed3,	// (0x0003a2c3) cams2_bc_adjust_pane

0x927a,	// (0x0003a66a) cams2_bc_adjust_pane_g1

0x9282,	// (0x0003a672) cams2_slider_pane

0x928b,	// (0x0003a67b) cams2_slider_pane_g1

0x9294,	// (0x0003a684) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x00040a92) cams2_slider_pane_g

0x60e8,	// (0x000374d8) calc_display_pane_ParamLimits

0x6100,	// (0x000374f0) calc_paper_pane_ParamLimits

0x611c,	// (0x0003750c) grid_calc_pane_ParamLimits

0x7cd1,	// (0x000390c1) popup_clock_digital_window_t1_ParamLimits

0xe6c1,	// (0x0003fab1) main_image_pane_t1

0x60ce,	// (0x000374be) aid_size_cell_calc_ParamLimits

0x60ce,	// (0x000374be) aid_size_cell_calc

0x8a55,	// (0x00039e45) popup_blid_sat_info2_window_ParamLimits

0x8a55,	// (0x00039e45) popup_blid_sat_info2_window

0x0ccf,	// (0x000320bf) aid_size_cell_blid

0x0cd7,	// (0x000320c7) bg_popup_window_pane_cp07

0x0cfa,	// (0x000320ea) grid_popup_blid_pane

0x0d02,	// (0x000320f2) heading_pane_cp05_ParamLimits

0x0d02,	// (0x000320f2) heading_pane_cp05

0x0dca,	// (0x000321ba) cell_popup_blid_pane_ParamLimits

0x0dca,	// (0x000321ba) cell_popup_blid_pane

0x0dea,	// (0x000321da) cell_popup_blid_pane_g1

0x0df2,	// (0x000321e2) cell_popup_blid_pane_t1

0x90dc,	// (0x0003a4cc) mup2_indicator_pane_ParamLimits

0x90dc,	// (0x0003a4cc) mup2_indicator_pane

0xda18,	// (0x0003ee08) mup2_visualizer_osc_pane

0x0b37,	// (0x00031f27) mup2_visualizer_spec_pane_ParamLimits

0x0b37,	// (0x00031f27) mup2_visualizer_spec_pane

0x92ae,	// (0x0003a69e) mup2_spec_half_pane

0x92b7,	// (0x0003a6a7) mup2_spec_half_pane_cp

0x92bf,	// (0x0003a6af) mup2_spec_bar_pane_ParamLimits

0x92bf,	// (0x0003a6af) mup2_spec_bar_pane

0x0a8b,	// (0x00031e7b) mup2_spec_bar_pane_g1

0x0a95,	// (0x00031e85) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x00040a05) mup2_spec_bar_pane_g

0x92de,	// (0x0003a6ce) mup2_osc_middle_pane

0x0aa7,	// (0x00031e97) mup2_visualizer_osc_pane_g1

0xd12c,	// (0x0003e51c) popup_number_entry_window_t1_ParamLimits

0xd13f,	// (0x0003e52f) popup_number_entry_window_t2_ParamLimits

0xd151,	// (0x0003e541) popup_number_entry_window_t3_ParamLimits

0x5f4c,	// (0x0003733c) popup_number_entry_window_t5_ParamLimits

0x5f4c,	// (0x0003733c) popup_number_entry_window_t5

0xf0c6,	// (0x000404b6) popup_number_entry_window_t_ParamLimits

0xd163,	// (0x0003e553) text_title_cp2_ParamLimits

0x837c,	// (0x0003976c) aid_hotspot_pointer_text2_pane

0x840e,	// (0x000397fe) main_viewer_pane_g9_ParamLimits

0x840e,	// (0x000397fe) main_viewer_pane_g9

0xdda3,	// (0x0003f193) cale_month_pane_t1_ParamLimits

0xddc9,	// (0x0003f1b9) bg_cale_pane_ParamLimits

0xdde1,	// (0x0003f1d1) list_cale_pane_ParamLimits

0xddf2,	// (0x0003f1e2) listscroll_cale_day_pane_t1

0xde04,	// (0x0003f1f4) scroll_pane_cp09_ParamLimits

0x81b1,	// (0x000395a1) main_mup_eq_pane_t1_ParamLimits

0x81b1,	// (0x000395a1) main_mup_eq_pane_t1

0x81c7,	// (0x000395b7) main_mup_eq_pane_t2_ParamLimits

0x81c7,	// (0x000395b7) main_mup_eq_pane_t2

0x81dd,	// (0x000395cd) main_mup_eq_pane_t3_ParamLimits

0x81dd,	// (0x000395cd) main_mup_eq_pane_t3

0x81f3,	// (0x000395e3) main_mup_eq_pane_t4_ParamLimits

0x81f3,	// (0x000395e3) main_mup_eq_pane_t4

0x8209,	// (0x000395f9) main_mup_eq_pane_t5_ParamLimits

0x8209,	// (0x000395f9) main_mup_eq_pane_t5

0x821f,	// (0x0003960f) main_mup_eq_pane_t6_ParamLimits

0x821f,	// (0x0003960f) main_mup_eq_pane_t6

0x8231,	// (0x00039621) main_mup_eq_pane_t7_ParamLimits

0x8231,	// (0x00039621) main_mup_eq_pane_t7

0x8243,	// (0x00039633) main_mup_eq_pane_t8_ParamLimits

0x8243,	// (0x00039633) main_mup_eq_pane_t8

0x8255,	// (0x00039645) main_mup_eq_pane_t9_ParamLimits

0x8255,	// (0x00039645) main_mup_eq_pane_t9

0x826b,	// (0x0003965b) main_mup_eq_pane_t10_ParamLimits

0x826b,	// (0x0003965b) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x00040841) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x00040841) main_mup_eq_pane_t

0x82fe,	// (0x000396ee) mup_equalizer_pane_cp5_ParamLimits

0x8310,	// (0x00039700) mup_equalizer_pane_cp6_ParamLimits

0x8322,	// (0x00039712) mup_equalizer_pane_cp7_ParamLimits

0xd102,	// (0x0003e4f2) main_gallery_pane

0x0ab0,	// (0x00031ea0) smil2_volume_pane

0x0acb,	// (0x00031ebb) smil_status_volume_pane_g1_ParamLimits

0x0ab8,	// (0x00031ea8) smil_status_volume_pane_g2_ParamLimits

0x8c19,	// (0x0003a009) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x00040a0a) smil_status_volume_pane_g_ParamLimits

0x0cd7,	// (0x000320c7) bg_popup_window_pane_cp07_ParamLimits

0x0ce5,	// (0x000320d5) blid_firmament_pane

0x92e7,	// (0x0003a6d7) aid_size_cell_gallery_ParamLimits

0x92e7,	// (0x0003a6d7) aid_size_cell_gallery

0x92f5,	// (0x0003a6e5) grid_gallery_pane_ParamLimits

0x92f5,	// (0x0003a6e5) grid_gallery_pane

0x9301,	// (0x0003a6f1) cell_gallery_pane_ParamLimits

0x9301,	// (0x0003a6f1) cell_gallery_pane

0x0e00,	// (0x000321f0) bg_cell_gallery_focus_pane_ParamLimits

0x0e00,	// (0x000321f0) bg_cell_gallery_focus_pane

0x0e12,	// (0x00032202) cell_gallery_pane_g1_ParamLimits

0x0e12,	// (0x00032202) cell_gallery_pane_g1

0x9340,	// (0x0003a730) cell_gallery_pane_g2_ParamLimits

0x9340,	// (0x0003a730) cell_gallery_pane_g2

0x934d,	// (0x0003a73d) cell_gallery_pane_g3_ParamLimits

0x934d,	// (0x0003a73d) cell_gallery_pane_g3

0x0e1e,	// (0x0003220e) cell_gallery_pane_g4_ParamLimits

0x0e1e,	// (0x0003220e) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x00040ab8) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x00040ab8) cell_gallery_pane_g

0x0e2a,	// (0x0003221a) bg_cell_gallery_focus_pane_g1

0x0e32,	// (0x00032222) bg_cell_gallery_focus_pane_g2

0x0e3a,	// (0x0003222a) bg_cell_gallery_focus_pane_g3

0x0e42,	// (0x00032232) bg_cell_gallery_focus_pane_g4

0x0e4a,	// (0x0003223a) bg_cell_gallery_focus_pane_g5

0x0e52,	// (0x00032242) bg_cell_gallery_focus_pane_g6

0x0e5a,	// (0x0003224a) bg_cell_gallery_focus_pane_g7

0x0e62,	// (0x00032252) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x00040ac1) bg_cell_gallery_focus_pane_g

0x0e6a,	// (0x0003225a) aid_firma_cardinal

0x0e7e,	// (0x0003226e) blid_firmament_pane_t1

0x0e95,	// (0x00032285) blid_firmament_pane_t2

0x0eac,	// (0x0003229c) blid_firmament_pane_t3

0x0ec3,	// (0x000322b3) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x00040ad2) blid_firmament_pane_t

0x0eda,	// (0x000322ca) blid_sat_info_pane

0x0eea,	// (0x000322da) blid_sat_info_pane_g1

0x0eea,	// (0x000322da) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x00040adb) blid_sat_info_pane_g

0x0ef4,	// (0x000322e4) blid_sat_info_pane_t1

0x0f02,	// (0x000322f2) smil2_volume_content_pane

0x0f0b,	// (0x000322fb) smil2_volume_pane_g1

0x0f13,	// (0x00032303) smil2_volume_content_pane_g1

0x0f1c,	// (0x0003230c) smil2_volume_content_pane_g2

0x0f25,	// (0x00032315) smil2_volume_content_pane_g3

0x0f2e,	// (0x0003231e) smil2_volume_content_pane_g4

0x0f37,	// (0x00032327) smil2_volume_content_pane_g5

0x0f40,	// (0x00032330) smil2_volume_content_pane_g6

0x0f49,	// (0x00032339) smil2_volume_content_pane_g7

0x0f52,	// (0x00032342) smil2_volume_content_pane_g8

0x0f5b,	// (0x0003234b) smil2_volume_content_pane_g9

0x0f64,	// (0x00032354) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x00040ae0) smil2_volume_content_pane_g

0x6637,	// (0x00037a27) cale_week_day_heading_pane_t1_ParamLimits

0x6672,	// (0x00037a62) cale_week_day_heading_pane_t2_ParamLimits

0x66ad,	// (0x00037a9d) cale_week_day_heading_pane_t3_ParamLimits

0x66e8,	// (0x00037ad8) cale_week_day_heading_pane_t4_ParamLimits

0x6723,	// (0x00037b13) cale_week_day_heading_pane_t5_ParamLimits

0x675e,	// (0x00037b4e) cale_week_day_heading_pane_t6_ParamLimits

0x6799,	// (0x00037b89) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000405bd) cale_week_day_heading_pane_t_ParamLimits

0xd9be,	// (0x0003edae) bg_cale_side_pane_ParamLimits

0x67d4,	// (0x00037bc4) cale_week_time_pane_t1_ParamLimits

0x680e,	// (0x00037bfe) cale_week_time_pane_t2_ParamLimits

0x6848,	// (0x00037c38) cale_week_time_pane_t3_ParamLimits

0x6882,	// (0x00037c72) cale_week_time_pane_t4_ParamLimits

0x68bc,	// (0x00037cac) cale_week_time_pane_t5_ParamLimits

0x68f6,	// (0x00037ce6) cale_week_time_pane_t6_ParamLimits

0x6930,	// (0x00037d20) cale_week_time_pane_t7_ParamLimits

0x696a,	// (0x00037d5a) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000405cc) cale_week_time_pane_t_ParamLimits

0x69a4,	// (0x00037d94) cell_cale_week_pane_g2_ParamLimits

0xd9be,	// (0x0003edae) bg_cale_side_pane_cp01_ParamLimits

0x787d,	// (0x00038c6d) cale_month_week_pane_t1_ParamLimits

0x78b6,	// (0x00038ca6) cale_month_week_pane_t2_ParamLimits

0x78ef,	// (0x00038cdf) cale_month_week_pane_t3_ParamLimits

0x7928,	// (0x00038d18) cale_month_week_pane_t4_ParamLimits

0x7961,	// (0x00038d51) cale_month_week_pane_t5_ParamLimits

0x799a,	// (0x00038d8a) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x000406a1) cale_month_week_pane_t_ParamLimits

0x7ac1,	// (0x00038eb1) cell_cale_month_pane_g1_ParamLimits

0xd102,	// (0x0003e4f2) main_cale_event_viewer_pane

0xd102,	// (0x0003e4f2) listscroll_cale_event_viewer_pane

0x0f6d,	// (0x0003235d) list_cale_ev_pane

0x0f75,	// (0x00032365) scroll_pane_cp023

0x935a,	// (0x0003a74a) field_cale_ev_pane_ParamLimits

0x935a,	// (0x0003a74a) field_cale_ev_pane

0x0f81,	// (0x00032371) field_cale_ev_content_pane_ParamLimits

0x0f81,	// (0x00032371) field_cale_ev_content_pane

0x0f8d,	// (0x0003237d) field_cale_ev_pane_g1_ParamLimits

0x0f8d,	// (0x0003237d) field_cale_ev_pane_g1

0x0f99,	// (0x00032389) field_cale_ev_pane_g2_ParamLimits

0x0f99,	// (0x00032389) field_cale_ev_pane_g2

0x0fb1,	// (0x000323a1) field_cale_ev_pane_g3_ParamLimits

0x0fb1,	// (0x000323a1) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x00040af5) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x00040af5) field_cale_ev_pane_g

0x0fc9,	// (0x000323b9) field_cale_ev_pane_t1_ParamLimits

0x0fc9,	// (0x000323b9) field_cale_ev_pane_t1

0x9374,	// (0x0003a764) field_cale_ev_content_pane_t1_ParamLimits

0x9374,	// (0x0003a764) field_cale_ev_content_pane_t1

0xe5a7,	// (0x0003f997) bg_button_pane_cp01

0x6422,	// (0x00037812) listscroll_cale_week_pane_ParamLimits

0xd969,	// (0x0003ed59) popup_toolbar_window_cp01

0xd98f,	// (0x0003ed7f) listscroll_cale_week_pane_t1_ParamLimits

0x6422,	// (0x00037812) listscroll_cale_day_pane_ParamLimits

0xd969,	// (0x0003ed59) popup_toolbar_window_cp02

0xddf2,	// (0x0003f1e2) listscroll_cale_day_pane_t1_ParamLimits

0x6422,	// (0x00037812) main_cale_month_pane_ParamLimits

0x8b28,	// (0x00039f18) popup_toolbar_window_cp03_ParamLimits

0x8b28,	// (0x00039f18) popup_toolbar_window_cp03

0x8566,	// (0x00039956) main_image_pane_g2_ParamLimits

0x8566,	// (0x00039956) main_image_pane_g2

0x8572,	// (0x00039962) main_image_pane_g3_ParamLimits

0x8572,	// (0x00039962) main_image_pane_g3

0x0002,

0xf4e3,	// (0x000408d3) main_image_pane_g_ParamLimits

0xf4e3,	// (0x000408d3) main_image_pane_g

0xe6c1,	// (0x0003fab1) main_image_pane_t1_ParamLimits

0x857e,	// (0x0003996e) main_image_pane_t2_ParamLimits

0x857e,	// (0x0003996e) main_image_pane_t2

0x8590,	// (0x00039980) main_image_pane_t3_ParamLimits

0x8590,	// (0x00039980) main_image_pane_t3

0x85a2,	// (0x00039992) main_image_pane_t4_ParamLimits

0x85a2,	// (0x00039992) main_image_pane_t4

0x0003,

0xf4ea,	// (0x000408da) main_image_pane_t_ParamLimits

0xf4ea,	// (0x000408da) main_image_pane_t

0x85b4,	// (0x000399a4) popup_image_details_window_cp01

0x85bc,	// (0x000399ac) popup_toobar_trans_pane_cp01_ParamLimits

0x85bc,	// (0x000399ac) popup_toobar_trans_pane_cp01

0x8a9c,	// (0x00039e8c) popup_image_details_window_ParamLimits

0x8a9c,	// (0x00039e8c) popup_image_details_window

0x8aa8,	// (0x00039e98) popup_image_focus_window

0x8d92,	// (0x0003a182) camera2_autofocus_pane_ParamLimits

0x8d92,	// (0x0003a182) camera2_autofocus_pane

0xd102,	// (0x0003e4f2) bg_popup_sub_pane_cp06

0x0fe0,	// (0x000323d0) popup_image_focus_window_g1

0x0fe8,	// (0x000323d8) popup_image_focus_window_g2

0x0ff0,	// (0x000323e0) popup_image_focus_window_g3

0x0ff8,	// (0x000323e8) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x00040afc) popup_image_focus_window_g

0x1000,	// (0x000323f0) popup_image_focus_window_t1

0x100e,	// (0x000323fe) popup_image_focus_window_t2

0x101d,	// (0x0003240d) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x00040b05) popup_image_focus_window_t

0x102b,	// (0x0003241b) camera2_autofocus_pane_g1

0xf08e,	// (0x0004047e) bg_tb_trans_pane_cp01

0x1039,	// (0x00032429) popup_image_details_window_g1

0x104c,	// (0x0003243c) popup_image_details_window_g2

0x0002,

0xf727,	// (0x00040b17) popup_image_details_window_g

0x1075,	// (0x00032465) popup_image_details_window_t1

0x1087,	// (0x00032477) popup_image_details_window_t2

0x10a0,	// (0x00032490) popup_image_details_window_t3

0x10b4,	// (0x000324a4) popup_image_details_window_t4

0x10cf,	// (0x000324bf) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x00040b1e) popup_image_details_window_t

0xd829,	// (0x0003ec19) bg_calc_paper_pane_ParamLimits

0xd102,	// (0x0003e4f2) grid_highlight_pane_cp013

0x6201,	// (0x000375f1) list_calc_pane_ParamLimits

0x6213,	// (0x00037603) scroll_pane_cp024

0xd841,	// (0x0003ec31) bg_calc_display_pane_ParamLimits

0x621b,	// (0x0003760b) calc_display_pane_t1_ParamLimits

0x6230,	// (0x00037620) calc_display_pane_t2_ParamLimits

0x6245,	// (0x00037635) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0004053d) calc_display_pane_t_ParamLimits

0x62fb,	// (0x000376eb) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0004055a) cell_calc_pane_g

0x6304,	// (0x000376f4) cell_calc_pane_t1

0xd8a0,	// (0x0003ec90) grid_highlight_pane_cp02_ParamLimits

0xd8b6,	// (0x0003eca6) toolbar_button_pane_cp01_ParamLimits

0xd8b6,	// (0x0003eca6) toolbar_button_pane_cp01

0xe706,	// (0x0003faf6) temp_image_control_pane_ParamLimits

0xe706,	// (0x0003faf6) temp_image_control_pane

0xf08e,	// (0x0004047e) main_mp3_pane

0x10e9,	// (0x000324d9) temp_image_control_pane_g1_ParamLimits

0x10e9,	// (0x000324d9) temp_image_control_pane_g1

0x10f7,	// (0x000324e7) temp_image_control_pane_g2_ParamLimits

0x10f7,	// (0x000324e7) temp_image_control_pane_g2

0x1109,	// (0x000324f9) temp_image_control_pane_g3_ParamLimits

0x1109,	// (0x000324f9) temp_image_control_pane_g3

0x93be,	// (0x0003a7ae) temp_image_control_pane_g4_ParamLimits

0x93be,	// (0x0003a7ae) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x00040b29) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x00040b29) temp_image_control_pane_g

0x10e9,	// (0x000324d9) main_mp3_pane_g1

0x93cf,	// (0x0003a7bf) main_mp3_pane_g2

0x0007,

0xf742,	// (0x00040b32) main_mp3_pane_g

0x114c,	// (0x0003253c) main_mp3_pane_t1

0xda6b,	// (0x0003ee5b) main_camera_pane_g8_ParamLimits

0xda6b,	// (0x0003ee5b) main_camera_pane_g8

0x6bcd,	// (0x00037fbd) main_video_pane_g7_ParamLimits

0x6bcd,	// (0x00037fbd) main_video_pane_g7

0x8ec1,	// (0x0003a2b1) main_camera2_pane_t7_ParamLimits

0x8ec1,	// (0x0003a2b1) main_camera2_pane_t7

0xdbc0,	// (0x0003efb0) scroll_pane_cp025_ParamLimits

0xdbc0,	// (0x0003efb0) scroll_pane_cp025

0xdbd4,	// (0x0003efc4) scroll_pane_cp026_ParamLimits

0xdbd4,	// (0x0003efc4) scroll_pane_cp026

0xdbe3,	// (0x0003efd3) wml_content_pane_ParamLimits

0xd102,	// (0x0003e4f2) main_touch_calib_pane

0x9467,	// (0x0003a857) main_touch_calib_pane_g1

0x9473,	// (0x0003a863) main_touch_calib_pane_g2

0x947f,	// (0x0003a86f) main_touch_calib_pane_g3

0x948b,	// (0x0003a87b) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x00040b50) main_touch_calib_pane_g

0x9497,	// (0x0003a887) main_touch_calib_pane_t1

0x94ac,	// (0x0003a89c) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x00040b59) main_touch_calib_pane_t

0xe319,	// (0x0003f709) mup_progress_pane_cp02

0xe34e,	// (0x0003f73e) navi_pane_g1

0xe3d9,	// (0x0003f7c9) navi_pane_mp_t3

0xf08e,	// (0x0004047e) main_mp3_pane_ParamLimits

0x8b63,	// (0x00039f53) navi_pane_ParamLimits

0x10e9,	// (0x000324d9) main_mp3_pane_g1_ParamLimits

0x93cf,	// (0x0003a7bf) main_mp3_pane_g2_ParamLimits

0x93db,	// (0x0003a7cb) main_mp3_pane_g3_ParamLimits

0x93db,	// (0x0003a7cb) main_mp3_pane_g3

0x93e7,	// (0x0003a7d7) main_mp3_pane_g4_ParamLimits

0x93e7,	// (0x0003a7d7) main_mp3_pane_g4

0x1119,	// (0x00032509) main_mp3_pane_g5_ParamLimits

0x1119,	// (0x00032509) main_mp3_pane_g5

0x1127,	// (0x00032517) main_mp3_pane_g6_ParamLimits

0x1127,	// (0x00032517) main_mp3_pane_g6

0x1134,	// (0x00032524) main_mp3_pane_g7_ParamLimits

0x1134,	// (0x00032524) main_mp3_pane_g7

0x1140,	// (0x00032530) main_mp3_pane_g8_ParamLimits

0x1140,	// (0x00032530) main_mp3_pane_g8

0xf742,	// (0x00040b32) main_mp3_pane_g_ParamLimits

0x93f3,	// (0x0003a7e3) main_mp3_pane_t2

0x9401,	// (0x0003a7f1) main_mp3_pane_t3

0x115a,	// (0x0003254a) main_mp3_pane_t4

0x1168,	// (0x00032558) main_mp3_pane_t5

0x0005,

0xf753,	// (0x00040b43) main_mp3_pane_t

0x1176,	// (0x00032566) mup_progress_pane_cp01

0x49df,	// (0x00035dcf) aid_zoom_text_secondary2

0x0f6d,	// (0x0003235d) list_cale_ev2_pane

0x0f75,	// (0x00032365) scroll_pane_cp023_ParamLimits

0x94f7,	// (0x0003a8e7) field_cale_ev2_pane_ParamLimits

0x94f7,	// (0x0003a8e7) field_cale_ev2_pane

0x4cce,	// (0x000360be) field_cale_ev2_pane_g1_ParamLimits

0x4cce,	// (0x000360be) field_cale_ev2_pane_g1

0x4cda,	// (0x000360ca) field_cale_ev2_pane_g2_ParamLimits

0x4cda,	// (0x000360ca) field_cale_ev2_pane_g2

0x4cf2,	// (0x000360e2) field_cale_ev2_pane_g3_ParamLimits

0x4cf2,	// (0x000360e2) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x00040b64) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x00040b64) field_cale_ev2_pane_g

0x4d16,	// (0x00036106) field_cale_ev2_pane_t1_ParamLimits

0x4d16,	// (0x00036106) field_cale_ev2_pane_t1

0x4d2d,	// (0x0003611d) field_cale_ev2_pane_t2_ParamLimits

0x4d2d,	// (0x0003611d) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x00040b6d) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x00040b6d) field_cale_ev2_pane_t

0x8462,	// (0x00039852) main_postcard_pane_g5_ParamLimits

0x8462,	// (0x00039852) main_postcard_pane_g5

0x846e,	// (0x0003985e) main_postcard_pane_g6_ParamLimits

0x846e,	// (0x0003985e) main_postcard_pane_g6

0x6a22,	// (0x00037e12) camera2_autofocus_pane_cp_ParamLimits

0x6a22,	// (0x00037e12) camera2_autofocus_pane_cp

0xf08e,	// (0x0004047e) main_mup3_pane

0x9546,	// (0x0003a936) main_mup3_pane_g1_ParamLimits

0x9546,	// (0x0003a936) main_mup3_pane_g1

0x9567,	// (0x0003a957) main_mup3_pane_g2_ParamLimits

0x9567,	// (0x0003a957) main_mup3_pane_g2

0x95d4,	// (0x0003a9c4) main_mup3_pane_g3_ParamLimits

0x95d4,	// (0x0003a9c4) main_mup3_pane_g3

0x960f,	// (0x0003a9ff) main_mup3_pane_g4_ParamLimits

0x960f,	// (0x0003a9ff) main_mup3_pane_g4

0x964a,	// (0x0003aa3a) main_mup3_pane_g5_ParamLimits

0x964a,	// (0x0003aa3a) main_mup3_pane_g5

0x9685,	// (0x0003aa75) main_mup3_pane_g6_ParamLimits

0x9685,	// (0x0003aa75) main_mup3_pane_g6

0x11f2,	// (0x000325e2) main_mup3_pane_g7_ParamLimits

0x11f2,	// (0x000325e2) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x00040b7d) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x00040b7d) main_mup3_pane_g

0x96f3,	// (0x0003aae3) main_mup3_pane_t1_ParamLimits

0x96f3,	// (0x0003aae3) main_mup3_pane_t1

0x9754,	// (0x0003ab44) main_mup3_pane_t2_ParamLimits

0x9754,	// (0x0003ab44) main_mup3_pane_t2

0x980f,	// (0x0003abff) main_mup3_pane_t4_ParamLimits

0x980f,	// (0x0003abff) main_mup3_pane_t4

0x9855,	// (0x0003ac45) main_mup3_pane_t5_ParamLimits

0x9855,	// (0x0003ac45) main_mup3_pane_t5

0x98f9,	// (0x0003ace9) main_mup3_pane_t6_ParamLimits

0x98f9,	// (0x0003ace9) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x00040b8e) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x00040b8e) main_mup3_pane_t

0x99a1,	// (0x0003ad91) mup3_progress_pane_ParamLimits

0x99a1,	// (0x0003ad91) mup3_progress_pane

0x9a05,	// (0x0003adf5) popup_mup3_control_window_ParamLimits

0x9a05,	// (0x0003adf5) popup_mup3_control_window

0x1200,	// (0x000325f0) popup_mup3_text_window

0x9a1e,	// (0x0003ae0e) mup3_progress_pane_t1

0x9a3c,	// (0x0003ae2c) mup3_progress_pane_t2

0x1208,	// (0x000325f8) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x00040b9b) mup3_progress_pane_t

0x1225,	// (0x00032615) mup_progress_pane_cp03

0xd102,	// (0x0003e4f2) bg_tb_trans_pane_cp04

0x9a5a,	// (0x0003ae4a) mup3_volume_pane

0x9a62,	// (0x0003ae52) popup_mup3_control_window_g1

0x9a6b,	// (0x0003ae5b) mup3_volume_pane_g1

0x9a74,	// (0x0003ae64) mup3_volume_pane_g2

0x9a7d,	// (0x0003ae6d) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x00040ba2) mup3_volume_pane_g

0xd102,	// (0x0003e4f2) bg_tb_trans_pane_cp03

0x1235,	// (0x00032625) popup_mup3_text_window_g1

0x123d,	// (0x0003262d) popup_mup3_text_window_t1

0xd889,	// (0x0003ec79) list_calc_item_pane_g1_ParamLimits

0x0c01,	// (0x00031ff1) mup_volume_pane_cp_g1

0x94c1,	// (0x0003a8b1) main_touch_calib_pane_t3

0x94d3,	// (0x0003a8c3) main_touch_calib_pane_t4

0x94e5,	// (0x0003a8d5) main_touch_calib_pane_t5

0x5cb3,	// (0x000370a3) aid_cell_size_toolbar2

0x5cbb,	// (0x000370ab) aid_popup3_width_pane

0x49d7,	// (0x00035dc7) aid_zoom_text_msg_primary

0xda4a,	// (0x0003ee3a) vorec_t7

0xd84d,	// (0x0003ec3d) bg_calc_paper_pane_g1_ParamLimits

0xd859,	// (0x0003ec49) bg_calc_paper_pane_g2_ParamLimits

0xd865,	// (0x0003ec55) bg_calc_paper_pane_g3_ParamLimits

0xd871,	// (0x0003ec61) bg_calc_paper_pane_g4_ParamLimits

0xd87d,	// (0x0003ec6d) bg_calc_paper_pane_g5_ParamLimits

0x627e,	// (0x0003766e) bg_calc_paper_pane_g6_ParamLimits

0x628d,	// (0x0003767d) bg_calc_paper_pane_g7_ParamLimits

0x629c,	// (0x0003768c) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x00040544) bg_calc_paper_pane_g_ParamLimits

0x62ab,	// (0x0003769b) calc_bg_paper_pane_g9_ParamLimits

0x6b02,	// (0x00037ef2) image_qvga_pane_ParamLimits

0x6b02,	// (0x00037ef2) image_qvga_pane

0xd778,	// (0x0003eb68) bg_popup_sub_pane_cp04_ParamLimits

0xe63d,	// (0x0003fa2d) popup_mup_playback_window_g1_ParamLimits

0xe649,	// (0x0003fa39) popup_mup_playback_window_t1_ParamLimits

0xe65e,	// (0x0003fa4e) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x000408ce) popup_mup_playback_window_t_ParamLimits

0x8fe8,	// (0x0003a3d8) main_mup2_pane_g3_ParamLimits

0x8fe8,	// (0x0003a3d8) main_mup2_pane_g3

0x6d92,	// (0x00038182) popup_toolbar_window_cp04

0xea24,	// (0x0003fe14) popup_call2_audio_second_window_g3_ParamLimits

0xea24,	// (0x0003fe14) popup_call2_audio_second_window_g3

0xee2e,	// (0x0004021e) popup_call2_audio_first_window_g4_ParamLimits

0xee2e,	// (0x0004021e) popup_call2_audio_first_window_g4

0x0629,	// (0x00031a19) popup_call2_audio_in_window_g4_ParamLimits

0x0629,	// (0x00031a19) popup_call2_audio_in_window_g4

0x8559,	// (0x00039949) aid_area_sk_bg_cut_ParamLimits

0x8559,	// (0x00039949) aid_area_sk_bg_cut

0xe673,	// (0x0003fa63) aid_area_sk_bg_cut_2_ParamLimits

0xe673,	// (0x0003fa63) aid_area_sk_bg_cut_2

0x9330,	// (0x0003a720) aid_placing_details_win

0x9338,	// (0x0003a728) aid_placing_details_win_2

0x102b,	// (0x0003241b) camera2_autofocus_pane_g1_ParamLimits

0x5ea1,	// (0x00037291) popup_fixed_preview_cale_window_ParamLimits

0x5ea1,	// (0x00037291) popup_fixed_preview_cale_window

0xe44f,	// (0x0003f83f) navi_slider_pane_g3

0xe458,	// (0x0003f848) navi_slider_pane_g4

0xe461,	// (0x0003f851) navi_slider_pane_g5

0xe44f,	// (0x0003f83f) navi_slider_pane_g6

0x7f71,	// (0x00039361) navi_slider_pane_g7

0xe574,	// (0x0003f964) mup_scale_pane_g3

0xe57d,	// (0x0003f96d) mup_scale_pane_g4

0xe586,	// (0x0003f976) mup_scale_pane_g5

0x8334,	// (0x00039724) mup_scale_pane_g6

0x833d,	// (0x0003972d) mup_scale_pane_g7

0xe44f,	// (0x0003f83f) cams2_slider_pane_g3

0x0cb6,	// (0x000320a6) cams2_slider_pane_g4

0x929d,	// (0x0003a68d) cams2_slider_pane_g5

0xe44f,	// (0x0003f83f) cams2_slider_pane_g6

0x92a5,	// (0x0003a695) cams2_slider_pane_g7

0x0eea,	// (0x000322da) camera2_autofocus_pane_cp_g1

0x09ca,	// (0x00031dba) bg_popup_preview_window_pane_cp02_ParamLimits

0x09ca,	// (0x00031dba) bg_popup_preview_window_pane_cp02

0x124b,	// (0x0003263b) list_fp_cale_pane_ParamLimits

0x124b,	// (0x0003263b) list_fp_cale_pane

0x1257,	// (0x00032647) popup_fixed_preview_cale_window_t1_ParamLimits

0x1257,	// (0x00032647) popup_fixed_preview_cale_window_t1

0x9a86,	// (0x0003ae76) popup_fixed_preview_cale_window_t2_ParamLimits

0x9a86,	// (0x0003ae76) popup_fixed_preview_cale_window_t2

0x9a9b,	// (0x0003ae8b) popup_fixed_preview_cale_window_t3_ParamLimits

0x9a9b,	// (0x0003ae8b) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x00040ba9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x00040ba9) popup_fixed_preview_cale_window_t

0x9ab0,	// (0x0003aea0) list_single_fp_cale_pane_ParamLimits

0x9ab0,	// (0x0003aea0) list_single_fp_cale_pane

0x1275,	// (0x00032665) list_single_fp_cale_pane_g1_ParamLimits

0x1275,	// (0x00032665) list_single_fp_cale_pane_g1

0x1281,	// (0x00032671) list_single_fp_cale_pane_g2_ParamLimits

0x1281,	// (0x00032671) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x00040bb0) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x00040bb0) list_single_fp_cale_pane_g

0x129a,	// (0x0003268a) list_single_fp_cale_pane_t1_ParamLimits

0x129a,	// (0x0003268a) list_single_fp_cale_pane_t1

0x12ac,	// (0x0003269c) list_single_fp_cale_pane_t2_ParamLimits

0x12ac,	// (0x0003269c) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x00040bb7) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x00040bb7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd102,	// (0x0003e4f2) main_dialer_pane

0x9ac0,	// (0x0003aeb0) aid_cell_size_keypad

0x9aca,	// (0x0003aeba) dialer_ne_pane

0x9ad2,	// (0x0003aec2) grid_dialer_command_1_pane

0x9ada,	// (0x0003aeca) grid_dialer_command_2_pane

0x9ae2,	// (0x0003aed2) grid_dialer_keypad_pane

0x9af2,	// (0x0003aee2) bg_popup_call_pane_cp06_ParamLimits

0x9af2,	// (0x0003aee2) bg_popup_call_pane_cp06

0x9afe,	// (0x0003aeee) dialer_ne_clear_pane_ParamLimits

0x9afe,	// (0x0003aeee) dialer_ne_clear_pane

0x12df,	// (0x000326cf) dialer_ne_pane_g1

0x12e7,	// (0x000326d7) dialer_ne_pane_t1_ParamLimits

0x12e7,	// (0x000326d7) dialer_ne_pane_t1

0x9b0a,	// (0x0003aefa) dialer_ne_pane_t2_ParamLimits

0x9b0a,	// (0x0003aefa) dialer_ne_pane_t2

0x9b27,	// (0x0003af17) dialer_ne_pane_t3_ParamLimits

0x9b27,	// (0x0003af17) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x00040bbc) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x00040bbc) dialer_ne_pane_t

0x9b4b,	// (0x0003af3b) dialer_ne_pane_t3_copy1_ParamLimits

0x9b4b,	// (0x0003af3b) dialer_ne_pane_t3_copy1

0x9b6f,	// (0x0003af5f) cell_dialer_keypad_pane_ParamLimits

0x9b6f,	// (0x0003af5f) cell_dialer_keypad_pane

0x9b84,	// (0x0003af74) cell_dialer_command_1_pane_ParamLimits

0x9b84,	// (0x0003af74) cell_dialer_command_1_pane

0x9b9a,	// (0x0003af8a) cell_dialer_command_2_pane_ParamLimits

0x9b9a,	// (0x0003af8a) cell_dialer_command_2_pane

0x12f9,	// (0x000326e9) bg_button_pane_cp02_ParamLimits

0x12f9,	// (0x000326e9) bg_button_pane_cp02

0x9ba9,	// (0x0003af99) cell_dialer_keypad_pane_g1_ParamLimits

0x9ba9,	// (0x0003af99) cell_dialer_keypad_pane_g1

0x12f9,	// (0x000326e9) bg_button_pane_cp03_ParamLimits

0x12f9,	// (0x000326e9) bg_button_pane_cp03

0x9bbe,	// (0x0003afae) cell_dialer_command_1_pane_g1_ParamLimits

0x9bbe,	// (0x0003afae) cell_dialer_command_1_pane_g1

0x1305,	// (0x000326f5) bg_button_pane_cp04

0x9bd1,	// (0x0003afc1) cell_dialer_command_2_pane_g1

0xda18,	// (0x0003ee08) bg_button_pane_cp06

0x130d,	// (0x000326fd) dialer_ne_clear_pane_g1

0xe35a,	// (0x0003f74a) navi_pane_g2

0x7f19,	// (0x00039309) navi_pane_g3

0x0002,

0xf3e1,	// (0x000407d1) navi_pane_g

0xe3e7,	// (0x0003f7d7) navi_pane_mv_g2

0xe40e,	// (0x0003f7fe) navi_pane_mv_g5

0x7f36,	// (0x00039326) navi_pane_mv_t1

0xd841,	// (0x0003ec31) main_clock2_pane

0x9c0d,	// (0x0003affd) main_clock2_list_pane_ParamLimits

0x9c0d,	// (0x0003affd) main_clock2_list_pane

0x9c33,	// (0x0003b023) main_clock2_pane_t1_ParamLimits

0x9c33,	// (0x0003b023) main_clock2_pane_t1

0x9c53,	// (0x0003b043) main_clock2_pane_t2_ParamLimits

0x9c53,	// (0x0003b043) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x00040bc8) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x00040bc8) main_clock2_pane_t

0x9cac,	// (0x0003b09c) popup_clock_analogue_window_cp03_ParamLimits

0x9cac,	// (0x0003b09c) popup_clock_analogue_window_cp03

0x9cca,	// (0x0003b0ba) popup_clock_digital_window_cp02_ParamLimits

0x9cca,	// (0x0003b0ba) popup_clock_digital_window_cp02

0x9d37,	// (0x0003b127) main_clock2_list_single_pane_ParamLimits

0x9d37,	// (0x0003b127) main_clock2_list_single_pane

0xda18,	// (0x0003ee08) list_highlight_pane_cp05

0x1345,	// (0x00032735) main_clock2_list_single_pane_t1

0x6d92,	// (0x00038182) popup_toolbar_window_cp04_ParamLimits

0x938e,	// (0x0003a77e) camera2_autofocus_pane_g2_ParamLimits

0x938e,	// (0x0003a77e) camera2_autofocus_pane_g2

0x939a,	// (0x0003a78a) camera2_autofocus_pane_g3_ParamLimits

0x939a,	// (0x0003a78a) camera2_autofocus_pane_g3

0x93a6,	// (0x0003a796) camera2_autofocus_pane_g4_ParamLimits

0x93a6,	// (0x0003a796) camera2_autofocus_pane_g4

0x93b2,	// (0x0003a7a2) camera2_autofocus_pane_g5_ParamLimits

0x93b2,	// (0x0003a7a2) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x00040b0c) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x00040b0c) camera2_autofocus_pane_g

0x950d,	// (0x0003a8fd) camera2_autofocus_pane_cp_g2

0x9515,	// (0x0003a905) camera2_autofocus_pane_cp_g3

0x951d,	// (0x0003a90d) camera2_autofocus_pane_cp_g4

0x9525,	// (0x0003a915) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x00040b72) camera2_autofocus_pane_cp_g

0x9aea,	// (0x0003aeda) popup_dialer_spcha_window

0xd102,	// (0x0003e4f2) bg_popup_sub_pane_cp07

0x1353,	// (0x00032743) list_spcha_pane

0x135b,	// (0x0003274b) list_single_spcha_pane_ParamLimits

0x135b,	// (0x0003274b) list_single_spcha_pane

0xd102,	// (0x0003e4f2) list_highlight_pane_cp06

0x136c,	// (0x0003275c) list_single_spcha_pane_t1

0x03d3,	// (0x000317c3) popup_call2_audio_out_window_g4_ParamLimits

0x03d3,	// (0x000317c3) popup_call2_audio_out_window_g4

0xd102,	// (0x0003e4f2) main_imed2_pane

0x8ab0,	// (0x00039ea0) popup_imed_adjust2_window

0x8ac1,	// (0x00039eb1) popup_imed_trans_window_ParamLimits

0x8ac1,	// (0x00039eb1) popup_imed_trans_window

0x0d2e,	// (0x0003211e) popup_blid_sat_info2_window_t1

0x0d3c,	// (0x0003212c) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x00040aa1) popup_blid_sat_info2_window_t

0x9de1,	// (0x0003b1d1) aid_size_cell_colour_35

0x9df8,	// (0x0003b1e8) aid_size_cell_colour_112

0x9e0f,	// (0x0003b1ff) aid_size_cell_effect

0xf08e,	// (0x0004047e) bg_tb_trans_pane_cp02

0xf09c,	// (0x0004048c) heading_imed_pane

0x9e29,	// (0x0003b219) listscroll_imed_pane

0x137a,	// (0x0003276a) heading_imed_pane_g1

0x1382,	// (0x00032772) heading_imed_pane_t1

0x1390,	// (0x00032780) grid_imed_colour_35_pane_ParamLimits

0x1390,	// (0x00032780) grid_imed_colour_35_pane

0x9e35,	// (0x0003b225) grid_imed_effect_pane

0x13a3,	// (0x00032793) list_imed_aspect_pane

0x9e41,	// (0x0003b231) scroll_pane_cp027_ParamLimits

0x9e41,	// (0x0003b231) scroll_pane_cp027

0x9e4d,	// (0x0003b23d) cell_imed_effect_pane_ParamLimits

0x9e4d,	// (0x0003b23d) cell_imed_effect_pane

0x13ab,	// (0x0003279b) cell_imed_colour_pane_ParamLimits

0x13ab,	// (0x0003279b) cell_imed_colour_pane

0x13e5,	// (0x000327d5) cell_imed_colour_pane_g1_ParamLimits

0x13e5,	// (0x000327d5) cell_imed_colour_pane_g1

0x13f6,	// (0x000327e6) hgihlgiht_grid_pane_cp016_ParamLimits

0x13f6,	// (0x000327e6) hgihlgiht_grid_pane_cp016

0x9e63,	// (0x0003b253) cell_imed_effect_pane_g1

0x9e6b,	// (0x0003b25b) grid_highlight_pane_cp017

0x1407,	// (0x000327f7) list_imed_single_pane_ParamLimits

0x1407,	// (0x000327f7) list_imed_single_pane

0xd102,	// (0x0003e4f2) list_highlight_pane_cp07

0x141a,	// (0x0003280a) list_imed_aspect_pane_comp1_t1

0x09d6,	// (0x00031dc6) bg_tb_trans_pane_cp05

0x143a,	// (0x0003282a) popup_imed_adjust2_window_g1

0x1461,	// (0x00032851) popup_imed_adjust2_window_t1

0x1479,	// (0x00032869) slider_imed_adjust_pane

0x148d,	// (0x0003287d) slider_imed_adjust_pane_g1

0x149d,	// (0x0003288d) slider_imed_adjust_pane_g2

0x14ad,	// (0x0003289d) slider_imed_adjust_pane_g3

0x14be,	// (0x000328ae) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x00040be5) slider_imed_adjust_pane_g

0x9e74,	// (0x0003b264) aid_size_cell_clipart2

0x9e80,	// (0x0003b270) grid_imed_clipart_pane

0x14cf,	// (0x000328bf) scroll_pane_cp031

0x9e8a,	// (0x0003b27a) cell_imed_clipart_pane_ParamLimits

0x9e8a,	// (0x0003b27a) cell_imed_clipart_pane

0x9ea1,	// (0x0003b291) cell_imed_clipart_pane_g1

0xd102,	// (0x0003e4f2) grid_highlight_pane_cp014

0x9c19,	// (0x0003b009) main_clock2_pane_g1_ParamLimits

0x9c19,	// (0x0003b009) main_clock2_pane_g1

0x9ce2,	// (0x0003b0d2) aid_call2_pane_cp10

0x9cf4,	// (0x0003b0e4) aid_call_pane_cp10

0xe2e9,	// (0x0003f6d9) popup_clock_analogue_window_cp10_g1

0xe2e9,	// (0x0003f6d9) popup_clock_analogue_window_cp10_g2

0x9d06,	// (0x0003b0f6) popup_clock_analogue_window_cp10_g3

0x9d06,	// (0x0003b0f6) popup_clock_analogue_window_cp10_g4

0xe2e9,	// (0x0003f6d9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x00040bd3) popup_clock_analogue_window_cp10_g

0x9d18,	// (0x0003b108) popup_clock_analogue_window_cp10_t1

0x9d49,	// (0x0003b139) clock_digital_number_pane_cp10_ParamLimits

0x9d49,	// (0x0003b139) clock_digital_number_pane_cp10

0x9d61,	// (0x0003b151) clock_digital_number_pane_cp11_ParamLimits

0x9d61,	// (0x0003b151) clock_digital_number_pane_cp11

0x9d79,	// (0x0003b169) clock_digital_number_pane_cp12_ParamLimits

0x9d79,	// (0x0003b169) clock_digital_number_pane_cp12

0x9d91,	// (0x0003b181) clock_digital_number_pane_cp13_ParamLimits

0x9d91,	// (0x0003b181) clock_digital_number_pane_cp13

0x9da9,	// (0x0003b199) clock_digital_separator_pane_cp10_ParamLimits

0x9da9,	// (0x0003b199) clock_digital_separator_pane_cp10

0x9dc1,	// (0x0003b1b1) popup_clock_digital_window_cp02_t1_ParamLimits

0x9dc1,	// (0x0003b1b1) popup_clock_digital_window_cp02_t1

0xd770,	// (0x0003eb60) clock_digital_number_pane_cp10_g1

0xd770,	// (0x0003eb60) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x00040bee) clock_digital_number_pane_cp10_g

0xd770,	// (0x0003eb60) clock_digital_separator_pane_cp10_g1

0xd770,	// (0x0003eb60) clock_digital_separator_pane_g2_cp10

0xe416,	// (0x0003f806) navi_pane_vded_g4

0xe41f,	// (0x0003f80f) navi_pane_vded_g5

0xe428,	// (0x0003f818) navi_pane_vded_t1

0xd102,	// (0x0003e4f2) main_vded_pane

0x9eaa,	// (0x0003b29a) main_vded_pane_g1

0x9eb2,	// (0x0003b2a2) main_vded_pane_g2

0x9eba,	// (0x0003b2aa) main_vded_pane_g3

0x0002,

0xf803,	// (0x00040bf3) main_vded_pane_g

0x9ec2,	// (0x0003b2b2) main_vded_pane_t1

0x9ed0,	// (0x0003b2c0) main_vded_pane_t2

0x0001,

0xf80a,	// (0x00040bfa) main_vded_pane_t

0x9ede,	// (0x0003b2ce) vded_slider_pane

0x9ee6,	// (0x0003b2d6) vded_video_pane

0x14d7,	// (0x000328c7) vded_video_pane_g1

0x9eee,	// (0x0003b2de) vded_video_pane_g2

0x0eea,	// (0x000322da) vded_video_pane_g3

0x0002,

0xf80f,	// (0x00040bff) vded_video_pane_g

0x14e1,	// (0x000328d1) vded_slider_pane_g1

0x0c01,	// (0x00031ff1) vded_slider_pane_g2

0x14ea,	// (0x000328da) vded_slider_pane_g3

0x14f3,	// (0x000328e3) vded_slider_pane_g4

0x14fc,	// (0x000328ec) vded_slider_pane_g5

0x0004,

0xf816,	// (0x00040c06) vded_slider_pane_g

0x99f9,	// (0x0003ade9) mup3_rocker_pane_ParamLimits

0x99f9,	// (0x0003ade9) mup3_rocker_pane

0x9ef7,	// (0x0003b2e7) mup3_control_keys_pane_g1

0x9eff,	// (0x0003b2ef) mup3_control_keys_pane_g2

0x9f07,	// (0x0003b2f7) mup3_control_keys_pane_g3

0x9f0f,	// (0x0003b2ff) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x00040c11) mup3_control_keys_pane_g

0x5ec5,	// (0x000372b5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5ec5,	// (0x000372b5) popup_toolbar2_fixed_window_cp01

0x9a11,	// (0x0003ae01) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9a11,	// (0x0003ae01) popup_toolbar2_fixed_window_cp02

0xeb96,	// (0x0003ff86) popup_call2_audio_second_window_t4_ParamLimits

0xeb96,	// (0x0003ff86) popup_call2_audio_second_window_t4

0x0240,	// (0x00031630) popup_call2_audio_first_window_t6_ParamLimits

0x0240,	// (0x00031630) popup_call2_audio_first_window_t6

0x04d6,	// (0x000318c6) popup_call2_audio_out_window_t6_ParamLimits

0x04d6,	// (0x000318c6) popup_call2_audio_out_window_t6

0xd102,	// (0x0003e4f2) main_vitu_pane

0x9f1f,	// (0x0003b30f) aid_size_cell_itu_ParamLimits

0x9f1f,	// (0x0003b30f) aid_size_cell_itu

0x3adf,	// (0x00034ecf) bg_popup_window_pane_cp08_ParamLimits

0x3adf,	// (0x00034ecf) bg_popup_window_pane_cp08

0x9f2d,	// (0x0003b31d) field_vitu_entry_pane_ParamLimits

0x9f2d,	// (0x0003b31d) field_vitu_entry_pane

0x9f3a,	// (0x0003b32a) grid_vitu_function_pane_ParamLimits

0x9f3a,	// (0x0003b32a) grid_vitu_function_pane

0x9f46,	// (0x0003b336) grid_vitu_itu_pane_ParamLimits

0x9f46,	// (0x0003b336) grid_vitu_itu_pane

0x9f52,	// (0x0003b342) cell_vitu_itu_pane_ParamLimits

0x9f52,	// (0x0003b342) cell_vitu_itu_pane

0x9f67,	// (0x0003b357) cell_vitu_function_pane_ParamLimits

0x9f67,	// (0x0003b357) cell_vitu_function_pane

0xf08e,	// (0x0004047e) bg_popup_sub_pane_cp08_ParamLimits

0xf08e,	// (0x0004047e) bg_popup_sub_pane_cp08

0x9f79,	// (0x0003b369) field_vitu_entry_pane_t1_ParamLimits

0x9f79,	// (0x0003b369) field_vitu_entry_pane_t1

0x151d,	// (0x0003290d) field_vitu_entry_pane_t2_ParamLimits

0x151d,	// (0x0003290d) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x00040c1f) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x00040c1f) field_vitu_entry_pane_t

0x153a,	// (0x0003292a) bg_button_pane_cp05_ParamLimits

0x153a,	// (0x0003292a) bg_button_pane_cp05

0x9f92,	// (0x0003b382) cell_vitu_itu_pane_g1

0x9faa,	// (0x0003b39a) cell_vitu_itu_pane_t1_ParamLimits

0x9faa,	// (0x0003b39a) cell_vitu_itu_pane_t1

0x9fbc,	// (0x0003b3ac) cell_vitu_itu_pane_t2_ParamLimits

0x9fbc,	// (0x0003b3ac) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x00040c24) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x00040c24) cell_vitu_itu_pane_t

0x1548,	// (0x00032938) bg_button_pane_cp07

0x9ff1,	// (0x0003b3e1) cell_vitu_function_pane_g1

0x6134,	// (0x00037524) main_calc_pane_g1

0x5ceb,	// (0x000370db) aid_visual_content_pane

0xd102,	// (0x0003e4f2) main_vradio_pane

0x9ffa,	// (0x0003b3ea) main_vradio_pane_g1_ParamLimits

0x9ffa,	// (0x0003b3ea) main_vradio_pane_g1

0x1552,	// (0x00032942) main_vradio_pane_g2_ParamLimits

0x1552,	// (0x00032942) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x00040c2b) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x00040c2b) main_vradio_pane_g

0xa008,	// (0x0003b3f8) main_vradio_pane_t1_ParamLimits

0xa008,	// (0x0003b3f8) main_vradio_pane_t1

0xa01a,	// (0x0003b40a) main_vradio_pane_t2_ParamLimits

0xa01a,	// (0x0003b40a) main_vradio_pane_t2

0x155f,	// (0x0003294f) main_vradio_pane_t3_ParamLimits

0x155f,	// (0x0003294f) main_vradio_pane_t3

0x0002,

0xf840,	// (0x00040c30) main_vradio_pane_t_ParamLimits

0xf840,	// (0x00040c30) main_vradio_pane_t

0xa02c,	// (0x0003b41c) vradio_rocker_control_pane_ParamLimits

0xa02c,	// (0x0003b41c) vradio_rocker_control_pane

0xa038,	// (0x0003b428) vradio_station_info_pane_ParamLimits

0xa038,	// (0x0003b428) vradio_station_info_pane

0x1571,	// (0x00032961) vradio_frequency_info_pane_ParamLimits

0x1571,	// (0x00032961) vradio_frequency_info_pane

0x0eea,	// (0x000322da) vradio_station_info_pane_g1

0x1580,	// (0x00032970) vradio_station_info_pane_t1_ParamLimits

0x1580,	// (0x00032970) vradio_station_info_pane_t1

0x15a2,	// (0x00032992) vradio_station_info_pane_t2_ParamLimits

0x15a2,	// (0x00032992) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x00040c37) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x00040c37) vradio_station_info_pane_t

0x15b4,	// (0x000329a4) vradio_tuning_pane

0x15bc,	// (0x000329ac) vradio_rocker_control_pane_g1

0x15c4,	// (0x000329b4) vradio_rocker_control_pane_g2

0x15cc,	// (0x000329bc) vradio_rocker_control_pane_g3

0x15d4,	// (0x000329c4) vradio_rocker_control_pane_g4

0x15dc,	// (0x000329cc) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x00040c3c) vradio_rocker_control_pane_g

0xa045,	// (0x0003b435) vradio_frequency_info_pane_g1

0x15e4,	// (0x000329d4) vradio_frequency_info_pane_t1_ParamLimits

0x15e4,	// (0x000329d4) vradio_frequency_info_pane_t1

0xa04d,	// (0x0003b43d) vradio_tuning_pane_g1

0xa056,	// (0x0003b446) vradio_tuning_pane_t1

0x5d2a,	// (0x0003711a) area_side_right_pane_ParamLimits

0x5d2a,	// (0x0003711a) area_side_right_pane

0x0991,	// (0x00031d81) status_small_pane_g1

0x0999,	// (0x00031d89) status_small_pane_g2

0x09a2,	// (0x00031d92) status_small_pane_g3

0x09ab,	// (0x00031d9b) status_small_pane_g4

0x0003,

0xf607,	// (0x000409f7) status_small_pane_g

0x09b4,	// (0x00031da4) status_small_pane_t1

0xd102,	// (0x0003e4f2) main_video3_pane

0x15f8,	// (0x000329e8) cams_zoom_vslider_pane

0x1600,	// (0x000329f0) image3_wide_pane_ParamLimits

0x1600,	// (0x000329f0) image3_wide_pane

0x161a,	// (0x00032a0a) image3_wide_small_pane

0x1624,	// (0x00032a14) main_video3_pane_g1_ParamLimits

0x1624,	// (0x00032a14) main_video3_pane_g1

0x1640,	// (0x00032a30) main_video3_pane_g2_ParamLimits

0x1640,	// (0x00032a30) main_video3_pane_g2

0x0001,

0xf857,	// (0x00040c47) main_video3_pane_g_ParamLimits

0xf857,	// (0x00040c47) main_video3_pane_g

0x165c,	// (0x00032a4c) main_video3_pane_t1_ParamLimits

0x165c,	// (0x00032a4c) main_video3_pane_t1

0x1687,	// (0x00032a77) main_video3_pane_t2_ParamLimits

0x1687,	// (0x00032a77) main_video3_pane_t2

0x16b2,	// (0x00032aa2) main_video3_pane_t3_ParamLimits

0x16b2,	// (0x00032aa2) main_video3_pane_t3

0x0002,

0xf85c,	// (0x00040c4c) main_video3_pane_t_ParamLimits

0xf85c,	// (0x00040c4c) main_video3_pane_t

0x16dd,	// (0x00032acd) cams_zoom_vslider_pane_g1

0x16e6,	// (0x00032ad6) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x00040c53) cams_zoom_vslider_pane_g

0x16ee,	// (0x00032ade) small_slider_vertical_pane

0x0eea,	// (0x000322da) small_slider_vertical_pane_g1

0x0eea,	// (0x000322da) small_slider_vertical_pane_g2

0x16f6,	// (0x00032ae6) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x00040c58) small_slider_vertical_pane_g

0xd102,	// (0x0003e4f2) main_hwr_training_pane

0x16ff,	// (0x00032aef) hwr_training_instruct_pane_ParamLimits

0x16ff,	// (0x00032aef) hwr_training_instruct_pane

0xa065,	// (0x0003b455) hwr_training_navi_pane_ParamLimits

0xa065,	// (0x0003b455) hwr_training_navi_pane

0xa079,	// (0x0003b469) hwr_training_write_pane_ParamLimits

0xa079,	// (0x0003b469) hwr_training_write_pane

0xd102,	// (0x0003e4f2) bg_frame_shadow_pane

0x172e,	// (0x00032b1e) hwr_training_write_pane_g1

0x1736,	// (0x00032b26) hwr_training_write_pane_g2

0x173e,	// (0x00032b2e) hwr_training_write_pane_g3

0x1746,	// (0x00032b36) hwr_training_write_pane_g4

0x174e,	// (0x00032b3e) hwr_training_write_pane_g5

0x1756,	// (0x00032b46) hwr_training_write_pane_g6

0x175e,	// (0x00032b4e) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x00040c5f) hwr_training_write_pane_g

0xa0a7,	// (0x0003b497) hwr_training_navi_pane_g1_ParamLimits

0xa0a7,	// (0x0003b497) hwr_training_navi_pane_g1

0xa0b9,	// (0x0003b4a9) hwr_training_navi_pane_g2_ParamLimits

0xa0b9,	// (0x0003b4a9) hwr_training_navi_pane_g2

0xa0cb,	// (0x0003b4bb) hwr_training_navi_pane_g3_ParamLimits

0xa0cb,	// (0x0003b4bb) hwr_training_navi_pane_g3

0xa0db,	// (0x0003b4cb) hwr_training_navi_pane_g4_ParamLimits

0xa0db,	// (0x0003b4cb) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x00040c6e) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x00040c6e) hwr_training_navi_pane_g

0xa0f5,	// (0x0003b4e5) hwr_training_navi_pane_t1

0xa103,	// (0x0003b4f3) list_single_hwr_training_instruct_pane_ParamLimits

0xa103,	// (0x0003b4f3) list_single_hwr_training_instruct_pane

0x17b5,	// (0x00032ba5) list_single_hwr_training_instruct_pane_t1

0x0e2a,	// (0x0003221a) bg_frame_shadow_pane_g1

0x17c4,	// (0x00032bb4) bg_frame_shadow_pane_g2

0x17cc,	// (0x00032bbc) bg_frame_shadow_pane_g3

0x17d4,	// (0x00032bc4) bg_frame_shadow_pane_g4

0x17dc,	// (0x00032bcc) bg_frame_shadow_pane_g5

0x17e4,	// (0x00032bd4) bg_frame_shadow_pane_g6

0x17ec,	// (0x00032bdc) bg_frame_shadow_pane_g7

0xd90c,	// (0x0003ecfc) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x00040c79) bg_frame_shadow_pane_g

0xd102,	// (0x0003e4f2) main_video_tele_dialer_pane

0xa11b,	// (0x0003b50b) aid_size_cell_video_keypad_ParamLimits

0xa11b,	// (0x0003b50b) aid_size_cell_video_keypad

0xa12b,	// (0x0003b51b) grid_video_dialer_keypad_pane_ParamLimits

0xa12b,	// (0x0003b51b) grid_video_dialer_keypad_pane

0xa15b,	// (0x0003b54b) video_down_pane_cp_ParamLimits

0xa15b,	// (0x0003b54b) video_down_pane_cp

0xa183,	// (0x0003b573) cell_video_dialer_keypad_pane_ParamLimits

0xa183,	// (0x0003b573) cell_video_dialer_keypad_pane

0x17f4,	// (0x00032be4) bg_button_pane_cp08_ParamLimits

0x17f4,	// (0x00032be4) bg_button_pane_cp08

0xa198,	// (0x0003b588) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa198,	// (0x0003b588) cell_video_dialer_keypad_pane_g1

0x99ed,	// (0x0003addd) mup3_rocker2_pane_ParamLimits

0x99ed,	// (0x0003addd) mup3_rocker2_pane

0x0eea,	// (0x000322da) mup3_rocker2_pane_g1

0x8a32,	// (0x00039e22) main_dialer2_pane

0xd102,	// (0x0003e4f2) main_mp4_pane

0xa1df,	// (0x0003b5cf) main_mp4_pane_g1_ParamLimits

0xa1df,	// (0x0003b5cf) main_mp4_pane_g1

0xa1ed,	// (0x0003b5dd) main_mp4_pane_g2_ParamLimits

0xa1ed,	// (0x0003b5dd) main_mp4_pane_g2

0xa1fb,	// (0x0003b5eb) main_mp4_pane_g3_ParamLimits

0xa1fb,	// (0x0003b5eb) main_mp4_pane_g3

0xa230,	// (0x0003b620) main_mp4_pane_g4_ParamLimits

0xa230,	// (0x0003b620) main_mp4_pane_g4

0xa25e,	// (0x0003b64e) main_mp4_pane_g5_ParamLimits

0xa25e,	// (0x0003b64e) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x00040c99) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x00040c99) main_mp4_pane_g

0xa2d2,	// (0x0003b6c2) main_mp4_pane_t1_ParamLimits

0xa2d2,	// (0x0003b6c2) main_mp4_pane_t1

0xa32a,	// (0x0003b71a) main_mp4_pane_t2_ParamLimits

0xa32a,	// (0x0003b71a) main_mp4_pane_t2

0x196a,	// (0x00032d5a) main_mp4_pane_t3_ParamLimits

0x196a,	// (0x00032d5a) main_mp4_pane_t3

0xa37c,	// (0x0003b76c) main_mp4_pane_t4_ParamLimits

0xa37c,	// (0x0003b76c) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x00040caa) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x00040caa) main_mp4_pane_t

0xa3bc,	// (0x0003b7ac) mp4_progress_pane_ParamLimits

0xa3bc,	// (0x0003b7ac) mp4_progress_pane

0xa400,	// (0x0003b7f0) mp4_rocker_pane_ParamLimits

0xa400,	// (0x0003b7f0) mp4_rocker_pane

0x1a3a,	// (0x00032e2a) mp4_progress_pane_t1

0x1a51,	// (0x00032e41) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x00040cb3) mp4_progress_pane_t

0x1a68,	// (0x00032e58) mup_progress_pane_cp04

0x0eea,	// (0x000322da) mp4_rocker_pane_g1

0xa41e,	// (0x0003b80e) aid_cell_size_keypad2_ParamLimits

0xa41e,	// (0x0003b80e) aid_cell_size_keypad2

0xa42e,	// (0x0003b81e) dialer2_ne_pane_ParamLimits

0xa42e,	// (0x0003b81e) dialer2_ne_pane

0xa43a,	// (0x0003b82a) grid_dialer2_keypad_pane_ParamLimits

0xa43a,	// (0x0003b82a) grid_dialer2_keypad_pane

0x250e,	// (0x000338fe) bg_popup_call_pane_cp07_ParamLimits

0x250e,	// (0x000338fe) bg_popup_call_pane_cp07

0xa446,	// (0x0003b836) dialer2_ne_pane_t1_ParamLimits

0xa446,	// (0x0003b836) dialer2_ne_pane_t1

0xa46b,	// (0x0003b85b) cell_dialer2_keypad_pane_ParamLimits

0xa46b,	// (0x0003b85b) cell_dialer2_keypad_pane

0x1a90,	// (0x00032e80) bg_button_pane_pane_cp04_ParamLimits

0x1a90,	// (0x00032e80) bg_button_pane_pane_cp04

0xa480,	// (0x0003b870) cell_dialer2_keypad_pane_g1_ParamLimits

0xa480,	// (0x0003b870) cell_dialer2_keypad_pane_g1

0x6c6e,	// (0x0003805e) aid_placing_vt_set_content_ParamLimits

0x6c6e,	// (0x0003805e) aid_placing_vt_set_content

0x6c94,	// (0x00038084) aid_placing_vt_set_title_ParamLimits

0x6c94,	// (0x00038084) aid_placing_vt_set_title

0xd102,	// (0x0003e4f2) main_image3_pane

0xa4f4,	// (0x0003b8e4) area_side_right_pane_cp01_ParamLimits

0xa4f4,	// (0x0003b8e4) area_side_right_pane_cp01

0x2a4c,	// (0x00033e3c) main_image3_pane_g1_ParamLimits

0x2a4c,	// (0x00033e3c) main_image3_pane_g1

0xa521,	// (0x0003b911) main_image3_pane_g2_ParamLimits

0xa521,	// (0x0003b911) main_image3_pane_g2

0xa538,	// (0x0003b928) main_image3_pane_g3_ParamLimits

0xa538,	// (0x0003b928) main_image3_pane_g3

0xa54f,	// (0x0003b93f) main_image3_pane_g4_ParamLimits

0xa54f,	// (0x0003b93f) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x00040cc2) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x00040cc2) main_image3_pane_g

0xa566,	// (0x0003b956) main_image3_pane_t1_ParamLimits

0xa566,	// (0x0003b956) main_image3_pane_t1

0xa58b,	// (0x0003b97b) main_image3_pane_t2_ParamLimits

0xa58b,	// (0x0003b97b) main_image3_pane_t2

0xa5aa,	// (0x0003b99a) main_image3_pane_t3_ParamLimits

0xa5aa,	// (0x0003b99a) main_image3_pane_t3

0x0003,

0xf8db,	// (0x00040ccb) main_image3_pane_t_ParamLimits

0xf8db,	// (0x00040ccb) main_image3_pane_t

0x3adf,	// (0x00034ecf) grid_sctrl_middle_pane_cp01_ParamLimits

0x3adf,	// (0x00034ecf) grid_sctrl_middle_pane_cp01

0xa605,	// (0x0003b9f5) cell_sctrl_middle_pane_cp01_ParamLimits

0xa605,	// (0x0003b9f5) cell_sctrl_middle_pane_cp01

0xa616,	// (0x0003ba06) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa616,	// (0x0003ba06) cell_sctrl_middle_pane_cp01_g1

0xd102,	// (0x0003e4f2) main_call4_pane

0xa623,	// (0x0003ba13) aid_size_button_call4_ParamLimits

0xa623,	// (0x0003ba13) aid_size_button_call4

0xa64d,	// (0x0003ba3d) call4_windows_pane_ParamLimits

0xa64d,	// (0x0003ba3d) call4_windows_pane

0xa661,	// (0x0003ba51) grid_call4_button_pane_ParamLimits

0xa661,	// (0x0003ba51) grid_call4_button_pane

0x1ae6,	// (0x00032ed6) call4_windows_conf_pane

0xa683,	// (0x0003ba73) popup_call4_audio_first_window_ParamLimits

0xa683,	// (0x0003ba73) popup_call4_audio_first_window

0xa6a3,	// (0x0003ba93) popup_call4_audio_second_window_ParamLimits

0xa6a3,	// (0x0003ba93) popup_call4_audio_second_window

0x1b19,	// (0x00032f09) popup_call4_audio_wait_window_ParamLimits

0x1b19,	// (0x00032f09) popup_call4_audio_wait_window

0xa6b5,	// (0x0003baa5) cell_call4_button_pane_ParamLimits

0xa6b5,	// (0x0003baa5) cell_call4_button_pane

0xd8b6,	// (0x0003eca6) bg_button_pane_cp09_ParamLimits

0xd8b6,	// (0x0003eca6) bg_button_pane_cp09

0xa6d8,	// (0x0003bac8) cell_call4_button_pane_g1_ParamLimits

0xa6d8,	// (0x0003bac8) cell_call4_button_pane_g1

0xa6e5,	// (0x0003bad5) cell_call4_button_pane_t1_ParamLimits

0xa6e5,	// (0x0003bad5) cell_call4_button_pane_t1

0x1b5f,	// (0x00032f4f) popup_call4_audio_conf_window_ParamLimits

0x1b5f,	// (0x00032f4f) popup_call4_audio_conf_window

0x9a1e,	// (0x0003ae0e) mup3_progress_pane_t1_ParamLimits

0x9a3c,	// (0x0003ae2c) mup3_progress_pane_t2_ParamLimits

0x1208,	// (0x000325f8) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x00040b9b) mup3_progress_pane_t_ParamLimits

0x1225,	// (0x00032615) mup_progress_pane_cp03_ParamLimits

0x9f17,	// (0x0003b307) mup3_control_keys_pane_g4_copy1

0xa3ea,	// (0x0003b7da) mp4_rocker2_pane_ParamLimits

0xa3ea,	// (0x0003b7da) mp4_rocker2_pane

0x1b7b,	// (0x00032f6b) mp4_rocker2_pane_g1

0x1b73,	// (0x00032f63) mp4_rocker2_pane_g2

0xa729,	// (0x0003bb19) mp4_rocker2_pane_g3

0xa731,	// (0x0003bb21) mp4_rocker2_pane_g4

0xa739,	// (0x0003bb29) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x00040cd4) mp4_rocker2_pane_g

0xd102,	// (0x0003e4f2) main_camera4_pane

0xd102,	// (0x0003e4f2) main_video4_pane

0xa137,	// (0x0003b527) main_video_tele_dialer_pane_t1_ParamLimits

0xa137,	// (0x0003b527) main_video_tele_dialer_pane_t1

0xa149,	// (0x0003b539) main_video_tele_dialer_pane_t2_ParamLimits

0xa149,	// (0x0003b539) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x00040c8a) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x00040c8a) main_video_tele_dialer_pane_t

0xa757,	// (0x0003bb47) cam4_autofocus_pane_ParamLimits

0xa757,	// (0x0003bb47) cam4_autofocus_pane

0xa76d,	// (0x0003bb5d) cam4_image_uncrop_pane_ParamLimits

0xa76d,	// (0x0003bb5d) cam4_image_uncrop_pane

0xa782,	// (0x0003bb72) cam4_indicators_pane_ParamLimits

0xa782,	// (0x0003bb72) cam4_indicators_pane

0xa79c,	// (0x0003bb8c) main_camera4_pane_g1_ParamLimits

0xa79c,	// (0x0003bb8c) main_camera4_pane_g1

0xa7a8,	// (0x0003bb98) main_camera4_pane_g2_ParamLimits

0xa7a8,	// (0x0003bb98) main_camera4_pane_g2

0xa7a8,	// (0x0003bb98) main_camera4_pane_g3_ParamLimits

0xa7a8,	// (0x0003bb98) main_camera4_pane_g3

0xa7b4,	// (0x0003bba4) main_camera4_pane_g4_ParamLimits

0xa7b4,	// (0x0003bba4) main_camera4_pane_g4

0xa7c0,	// (0x0003bbb0) main_camera4_pane_g5_ParamLimits

0xa7c0,	// (0x0003bbb0) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x00040cdf) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x00040cdf) main_camera4_pane_g

0xa7da,	// (0x0003bbca) main_camera4_pane_t1_ParamLimits

0xa7da,	// (0x0003bbca) main_camera4_pane_t1

0x1119,	// (0x00032509) bg_tb_trans_pane_cp06

0xa82a,	// (0x0003bc1a) cam4_indicators_pane_g1

0xa83a,	// (0x0003bc2a) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x00040cfa) cam4_indicators_pane_g

0xa85a,	// (0x0003bc4a) cam4_indicators_pane_t1

0xa882,	// (0x0003bc72) main_video4_pane_g1_ParamLimits

0xa882,	// (0x0003bc72) main_video4_pane_g1

0xa7a8,	// (0x0003bb98) main_video4_pane_g2_ParamLimits

0xa7a8,	// (0x0003bb98) main_video4_pane_g2

0xa7a8,	// (0x0003bb98) main_video4_pane_g3_ParamLimits

0xa7a8,	// (0x0003bb98) main_video4_pane_g3

0xa7b4,	// (0x0003bba4) main_video4_pane_g4_ParamLimits

0xa7b4,	// (0x0003bba4) main_video4_pane_g4

0x0004,

0xf911,	// (0x00040d01) main_video4_pane_g_ParamLimits

0xf911,	// (0x00040d01) main_video4_pane_g

0xa896,	// (0x0003bc86) vid4_indicators_pane_ParamLimits

0xa896,	// (0x0003bc86) vid4_indicators_pane

0xa8b4,	// (0x0003bca4) video4_image_uncrop_cif_pane_ParamLimits

0xa8b4,	// (0x0003bca4) video4_image_uncrop_cif_pane

0xa8c1,	// (0x0003bcb1) video4_image_uncrop_nhd_pane_ParamLimits

0xa8c1,	// (0x0003bcb1) video4_image_uncrop_nhd_pane

0xa76d,	// (0x0003bb5d) video4_image_uncrop_vga_pane_ParamLimits

0xa76d,	// (0x0003bb5d) video4_image_uncrop_vga_pane

0xf08e,	// (0x0004047e) bg_tb_trans_pane_cp07

0xa82a,	// (0x0003bc1a) vid4_indicators_pane_g1

0xa8ce,	// (0x0003bcbe) vid4_indicators_pane_g2

0xa8de,	// (0x0003bcce) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x00040d0c) vid4_indicators_pane_g

0xa90b,	// (0x0003bcfb) vid4_indicators_pane_t1

0xa925,	// (0x0003bd15) cam4_autofocus_pane_g1

0xa92d,	// (0x0003bd1d) cam4_autofocus_pane_g2

0xa935,	// (0x0003bd25) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x00040d17) cam4_autofocus_pane_g

0xa93d,	// (0x0003bd2d) cam4_autofocus_pane_g3_copy1

0xa167,	// (0x0003b557) video_down_pane_cp_t1

0xa175,	// (0x0003b565) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x00040c8f) video_down_pane_cp_t

0x3adf,	// (0x00034ecf) popup_vitu2_window_ParamLimits

0x3adf,	// (0x00034ecf) popup_vitu2_window

0xa945,	// (0x0003bd35) aid_size_cell2_itu2_ParamLimits

0xa945,	// (0x0003bd35) aid_size_cell2_itu2

0xa967,	// (0x0003bd57) aid_size_cell_itu2_ParamLimits

0xa967,	// (0x0003bd57) aid_size_cell_itu2

0x250e,	// (0x000338fe) bg_popup_window_pane_cp09_ParamLimits

0x250e,	// (0x000338fe) bg_popup_window_pane_cp09

0xa9a5,	// (0x0003bd95) field_vitu2_entry_pane_ParamLimits

0xa9a5,	// (0x0003bd95) field_vitu2_entry_pane

0xa9b9,	// (0x0003bda9) grid_vitu2_function_pane_ParamLimits

0xa9b9,	// (0x0003bda9) grid_vitu2_function_pane

0xa9e7,	// (0x0003bdd7) grid_vitu2_itu_pane_ParamLimits

0xa9e7,	// (0x0003bdd7) grid_vitu2_itu_pane

0xaa3f,	// (0x0003be2f) cell_vitu2_itu_pane_ParamLimits

0xaa3f,	// (0x0003be2f) cell_vitu2_itu_pane

0xaa57,	// (0x0003be47) cell_vitu2_function_pane_ParamLimits

0xaa57,	// (0x0003be47) cell_vitu2_function_pane

0x1c86,	// (0x00033076) bg_popup_call_pane_cp08_ParamLimits

0x1c86,	// (0x00033076) bg_popup_call_pane_cp08

0x1c9d,	// (0x0003308d) field_vitu2_entry_pane_g1

0x1ca9,	// (0x00033099) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x00040d1e) field_vitu2_entry_pane_g

0x4d42,	// (0x00036132) field_vitu2_entry_pane_t1_ParamLimits

0x4d42,	// (0x00036132) field_vitu2_entry_pane_t1

0x4d70,	// (0x00036160) field_vitu2_entry_pane_t2_ParamLimits

0x4d70,	// (0x00036160) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x00040d25) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x00040d25) field_vitu2_entry_pane_t

0xaa96,	// (0x0003be86) bg_button_pane_cp010_ParamLimits

0xaa96,	// (0x0003be86) bg_button_pane_cp010

0xaaa4,	// (0x0003be94) cell_vitu2_itu_pane_g1

0xaac4,	// (0x0003beb4) cell_vitu2_itu_pane_t1_ParamLimits

0xaac4,	// (0x0003beb4) cell_vitu2_itu_pane_t1

0x4d8d,	// (0x0003617d) cell_vitu2_itu_pane_t2_ParamLimits

0x4d8d,	// (0x0003617d) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x00040d2f) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x00040d2f) cell_vitu2_itu_pane_t

0xf08e,	// (0x0004047e) bg_button_pane_cp011

0xab10,	// (0x0003bf00) cell_vitu2_function_pane_g1

0xd102,	// (0x0003e4f2) main_myfav_hc_pane

0xa5ea,	// (0x0003b9da) popup_image3_note_pane_ParamLimits

0xa5ea,	// (0x0003b9da) popup_image3_note_pane

0xa5f6,	// (0x0003b9e6) popup_image3_tool_bar_pane_ParamLimits

0xa5f6,	// (0x0003b9e6) popup_image3_tool_bar_pane

0x4e03,	// (0x000361f3) cell_vitu2_itu_pane_t3_ParamLimits

0x4e03,	// (0x000361f3) cell_vitu2_itu_pane_t3

0xd102,	// (0x0003e4f2) bg_popup_trans_pane

0x1cfa,	// (0x000330ea) grid_image3_tool_bar_pane

0x1d04,	// (0x000330f4) bg_popup_trans_pane_g1

0xdcc9,	// (0x0003f0b9) bg_popup_trans_pane_g2

0x1d0c,	// (0x000330fc) bg_popup_trans_pane_g3

0x1d14,	// (0x00033104) bg_popup_trans_pane_g4

0x1d1c,	// (0x0003310c) bg_popup_trans_pane_g5

0x1d24,	// (0x00033114) bg_popup_trans_pane_g6

0x1d2c,	// (0x0003311c) bg_popup_trans_pane_g7

0x1d34,	// (0x00033124) bg_popup_trans_pane_g8

0xdca9,	// (0x0003f099) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x00040d36) bg_popup_trans_pane_g

0x1d3c,	// (0x0003312c) cell_image3_tool_bar_pane_ParamLimits

0x1d3c,	// (0x0003312c) cell_image3_tool_bar_pane

0x0eea,	// (0x000322da) cell_image3_tool_bar_pane_g1

0xd102,	// (0x0003e4f2) bg_popup_trans_pane_cp1

0x1d50,	// (0x00033140) popup_image3_note_pane_t1

0x1d5e,	// (0x0003314e) popup_image3_note_pane_t2

0x1d6c,	// (0x0003315c) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x00040d49) popup_image3_note_pane_t

0x1d7a,	// (0x0003316a) popup_image3_note_pane_t3_copy1

0xab24,	// (0x0003bf14) bg_myfav_hc_instruction_pane_ParamLimits

0xab24,	// (0x0003bf14) bg_myfav_hc_instruction_pane

0xab36,	// (0x0003bf26) cell_myfav_contact_pane_ParamLimits

0xab36,	// (0x0003bf26) cell_myfav_contact_pane

0xab50,	// (0x0003bf40) cell_myfav_contact_pane_cp1_ParamLimits

0xab50,	// (0x0003bf40) cell_myfav_contact_pane_cp1

0xab66,	// (0x0003bf56) cell_myfav_contact_pane_cp2_ParamLimits

0xab66,	// (0x0003bf56) cell_myfav_contact_pane_cp2

0xab7c,	// (0x0003bf6c) cell_myfav_contact_pane_cp3_ParamLimits

0xab7c,	// (0x0003bf6c) cell_myfav_contact_pane_cp3

0xab91,	// (0x0003bf81) cell_myfav_contact_pane_cp4_ParamLimits

0xab91,	// (0x0003bf81) cell_myfav_contact_pane_cp4

0xaba5,	// (0x0003bf95) cell_myfav_contact_pane_cp5_ParamLimits

0xaba5,	// (0x0003bf95) cell_myfav_contact_pane_cp5

0xabb9,	// (0x0003bfa9) cell_myfav_contact_pane_cp6_ParamLimits

0xabb9,	// (0x0003bfa9) cell_myfav_contact_pane_cp6

0xabcd,	// (0x0003bfbd) cell_myfav_contact_pane_cp7_ParamLimits

0xabcd,	// (0x0003bfbd) cell_myfav_contact_pane_cp7

0x1d88,	// (0x00033178) listscroll_gen_pane_cp05

0xabe5,	// (0x0003bfd5) main_myfav_hc_pane_g1_ParamLimits

0xabe5,	// (0x0003bfd5) main_myfav_hc_pane_g1

0xabfb,	// (0x0003bfeb) main_myfav_hc_pane_g2_ParamLimits

0xabfb,	// (0x0003bfeb) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x00040d50) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x00040d50) main_myfav_hc_pane_g

0xac25,	// (0x0003c015) main_myfav_hc_pane_t1_ParamLimits

0xac25,	// (0x0003c015) main_myfav_hc_pane_t1

0x1d91,	// (0x00033181) main_myfav_hc_pane_t2_ParamLimits

0x1d91,	// (0x00033181) main_myfav_hc_pane_t2

0x1da3,	// (0x00033193) main_myfav_hc_pane_t3_ParamLimits

0x1da3,	// (0x00033193) main_myfav_hc_pane_t3

0xac3a,	// (0x0003c02a) main_myfav_hc_pane_t4_ParamLimits

0xac3a,	// (0x0003c02a) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x00040d57) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x00040d57) main_myfav_hc_pane_t

0x0eea,	// (0x000322da) bg_myfav_hc_instruction_pane_g1

0x1db5,	// (0x000331a5) cell_myfav_contact_pane_g1_ParamLimits

0x1db5,	// (0x000331a5) cell_myfav_contact_pane_g1

0x1db5,	// (0x000331a5) cell_myfav_contact_pane_g2_ParamLimits

0x1db5,	// (0x000331a5) cell_myfav_contact_pane_g2

0x1dc1,	// (0x000331b1) cell_myfav_contact_pane_g3_ParamLimits

0x1dc1,	// (0x000331b1) cell_myfav_contact_pane_g3

0x11f2,	// (0x000325e2) cell_myfav_contact_pane_g4_ParamLimits

0x11f2,	// (0x000325e2) cell_myfav_contact_pane_g4

0x1dce,	// (0x000331be) cell_myfav_contact_pane_g5_ParamLimits

0x1dce,	// (0x000331be) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x00040d62) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x00040d62) cell_myfav_contact_pane_g

0xac11,	// (0x0003c001) main_myfav_hc_pane_g3_ParamLimits

0xac11,	// (0x0003c001) main_myfav_hc_pane_g3

0x5e3b,	// (0x0003722b) popup_adpt_find_window

0xac5e,	// (0x0003c04e) afind_page_pane_ParamLimits

0xac5e,	// (0x0003c04e) afind_page_pane

0xac6b,	// (0x0003c05b) aid_size_cell_afind_ParamLimits

0xac6b,	// (0x0003c05b) aid_size_cell_afind

0xac85,	// (0x0003c075) bg_popup_sub_pane_cp09_ParamLimits

0xac85,	// (0x0003c075) bg_popup_sub_pane_cp09

0xac92,	// (0x0003c082) find_pane_cp01_ParamLimits

0xac92,	// (0x0003c082) find_pane_cp01

0x1dda,	// (0x000331ca) grid_afind_control_pane_ParamLimits

0x1dda,	// (0x000331ca) grid_afind_control_pane

0xac9f,	// (0x0003c08f) grid_afind_pane_ParamLimits

0xac9f,	// (0x0003c08f) grid_afind_pane

0xacb5,	// (0x0003c0a5) cell_afind_pane_ParamLimits

0xacb5,	// (0x0003c0a5) cell_afind_pane

0x0eea,	// (0x000322da) afind_page_pane_g1

0xaceb,	// (0x0003c0db) afind_page_pane_g2

0xacf4,	// (0x0003c0e4) afind_page_pane_g3

0x0002,

0xf97d,	// (0x00040d6d) afind_page_pane_g

0xacfd,	// (0x0003c0ed) afind_page_pane_t1

0x1dee,	// (0x000331de) cell_afind_grid_control_pane_ParamLimits

0x1dee,	// (0x000331de) cell_afind_grid_control_pane

0x1a90,	// (0x00032e80) bg_button_pane_cp69_ParamLimits

0x1a90,	// (0x00032e80) bg_button_pane_cp69

0xad1d,	// (0x0003c10d) cell_afind_pane_g1_ParamLimits

0xad1d,	// (0x0003c10d) cell_afind_pane_g1

0xad2a,	// (0x0003c11a) cell_afind_pane_t1_ParamLimits

0xad2a,	// (0x0003c11a) cell_afind_pane_t1

0xdab5,	// (0x0003eea5) bg_button_pane_cp72

0x1dfd,	// (0x000331ed) cell_afind_grid_control_pane_g1

0x866a,	// (0x00039a5a) aid_image_placing_area_ParamLimits

0x866a,	// (0x00039a5a) aid_image_placing_area

0x1505,	// (0x000328f5) field_vitu_entry_pane_g1_ParamLimits

0x1505,	// (0x000328f5) field_vitu_entry_pane_g1

0x1511,	// (0x00032901) field_vitu_entry_pane_g2_ParamLimits

0x1511,	// (0x00032901) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x00040c1a) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x00040c1a) field_vitu_entry_pane_g

0x9f92,	// (0x0003b382) cell_vitu_itu_pane_g1_ParamLimits

0x9fd4,	// (0x0003b3c4) cell_vitu_itu_pane_t3_ParamLimits

0x9fd4,	// (0x0003b3c4) cell_vitu_itu_pane_t3

0x1a3a,	// (0x00032e2a) mp4_progress_pane_t1_ParamLimits

0x1a51,	// (0x00032e41) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x00040cb3) mp4_progress_pane_t_ParamLimits

0x1a68,	// (0x00032e58) mup_progress_pane_cp04_ParamLimits

0xac4c,	// (0x0003c03c) main_myfav_hc_pane_t5_ParamLimits

0xac4c,	// (0x0003c03c) main_myfav_hc_pane_t5

0x5cf3,	// (0x000370e3) aid_zoom_text_primary

0x5e3b,	// (0x0003722b) popup_adpt_find_window_ParamLimits

0xf08e,	// (0x0004047e) main_cam_set_pane

0xa790,	// (0x0003bb80) cam4_zoom_pane_ParamLimits

0xa790,	// (0x0003bb80) cam4_zoom_pane

0xad3c,	// (0x0003c12c) main_cam_set_pane_g1_ParamLimits

0xad3c,	// (0x0003c12c) main_cam_set_pane_g1

0xad4a,	// (0x0003c13a) main_cam_set_pane_g2_ParamLimits

0xad4a,	// (0x0003c13a) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x00040d74) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x00040d74) main_cam_set_pane_g

0xad56,	// (0x0003c146) main_cam_set_pane_t1_ParamLimits

0xad56,	// (0x0003c146) main_cam_set_pane_t1

0xad68,	// (0x0003c158) main_cset_listscroll_pane_ParamLimits

0xad68,	// (0x0003c158) main_cset_listscroll_pane

0xad91,	// (0x0003c181) main_cset_slider_pane_ParamLimits

0xad91,	// (0x0003c181) main_cset_slider_pane

0x1e0e,	// (0x000331fe) main_cset_list_pane_ParamLimits

0x1e0e,	// (0x000331fe) main_cset_list_pane

0x1e1e,	// (0x0003320e) scroll_pane_cp028

0xadb0,	// (0x0003c1a0) aid_area_touch_slider

0xadcc,	// (0x0003c1bc) cset_slider_pane

0xadf6,	// (0x0003c1e6) main_cset_slider_pane_g1

0xae0b,	// (0x0003c1fb) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x00040d79) main_cset_slider_pane_g

0x1e57,	// (0x00033247) main_cset_slider_pane_t1

0xaec7,	// (0x0003c2b7) main_cset_slider_pane_t2

0xaee1,	// (0x0003c2d1) main_cset_slider_pane_t3

0xaefb,	// (0x0003c2eb) main_cset_slider_pane_t4

0xaf15,	// (0x0003c305) main_cset_slider_pane_t5

0xaf2f,	// (0x0003c31f) main_cset_slider_pane_t6

0xaf44,	// (0x0003c334) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x00040d9e) main_cset_slider_pane_t

0xb048,	// (0x0003c438) cset_list_set_pane_ParamLimits

0xb048,	// (0x0003c438) cset_list_set_pane

0xb058,	// (0x0003c448) aid_position_infowindow_above

0xb060,	// (0x0003c450) aid_position_infowindow_below

0x4e55,	// (0x00036245) cset_list_set_pane_g1_ParamLimits

0x4e55,	// (0x00036245) cset_list_set_pane_g1

0x4e61,	// (0x00036251) cset_list_set_pane_g3_ParamLimits

0x4e61,	// (0x00036251) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x00040dbd) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x00040dbd) cset_list_set_pane_g

0x4e70,	// (0x00036260) cset_list_set_pane_t1_ParamLimits

0x4e70,	// (0x00036260) cset_list_set_pane_t1

0xf08e,	// (0x0004047e) list_highlight_pane_cp021_ParamLimits

0xf08e,	// (0x0004047e) list_highlight_pane_cp021

0xe574,	// (0x0003f964) cset_slider_pane_g1

0xe586,	// (0x0003f976) cset_slider_pane_g2

0xe57d,	// (0x0003f96d) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x00040dc2) cset_slider_pane_g

0xb068,	// (0x0003c458) aid_area_touch_cam4_zoom

0xb070,	// (0x0003c460) cam4_zoom_cont_pane

0xb078,	// (0x0003c468) cam4_zoom_pane_g1

0xb080,	// (0x0003c470) cam4_zoom_pane_g2

0xb088,	// (0x0003c478) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x00040dc9) cam4_zoom_pane_g

0x288b,	// (0x00033c7b) cam4_zoom_cont_pane_g1

0x2894,	// (0x00033c84) cam4_zoom_cont_pane_g2

0x289d,	// (0x00033c8d) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x00040dd0) cam4_zoom_cont_pane_g

0xa63d,	// (0x0003ba2d) call4_image_pane_ParamLimits

0xa63d,	// (0x0003ba2d) call4_image_pane

0x1ae6,	// (0x00032ed6) call4_windows_conf_pane_ParamLimits

0x1af9,	// (0x00032ee9) popup_call4_audio_in_window_ParamLimits

0x1af9,	// (0x00032ee9) popup_call4_audio_in_window

0xd102,	// (0x0003e4f2) bg_popup_call2_act_pane_cp02

0x1b57,	// (0x00032f47) call4_list_conf_pane

0x0eea,	// (0x000322da) call4_image_pane_g1

0x0eea,	// (0x000322da) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x00040adb) call4_image_pane_g

0x1f32,	// (0x00033322) list_single_graphic_popup_conf4_pane_ParamLimits

0x1f32,	// (0x00033322) list_single_graphic_popup_conf4_pane

0xd102,	// (0x0003e4f2) list_highlight_pane_cp022

0x1f45,	// (0x00033335) list_single_graphic_popup_conf4_pane_g1

0xe1b7,	// (0x0003f5a7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x00040dd7) list_single_graphic_popup_conf4_pane_g

0x1f4d,	// (0x0003333d) list_single_graphic_popup_conf4_pane_t1

0x6dd8,	// (0x000381c8) popup_vtel_slider_window_ParamLimits

0x6dd8,	// (0x000381c8) popup_vtel_slider_window

0x1a7e,	// (0x00032e6e) dialer2_ne_pane_t2_ParamLimits

0x1a7e,	// (0x00032e6e) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x00040cb8) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x00040cb8) dialer2_ne_pane_t

0xf08e,	// (0x0004047e) bg_popup_sub_pane_cp010_ParamLimits

0xf08e,	// (0x0004047e) bg_popup_sub_pane_cp010

0xb090,	// (0x0003c480) popup_vtel_slider_window_g1_ParamLimits

0xb090,	// (0x0003c480) popup_vtel_slider_window_g1

0xb09c,	// (0x0003c48c) popup_vtel_slider_window_g2_ParamLimits

0xb09c,	// (0x0003c48c) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x00040ddc) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x00040ddc) popup_vtel_slider_window_g

0xb0e2,	// (0x0003c4d2) vtel_slider_pane_ParamLimits

0xb0e2,	// (0x0003c4d2) vtel_slider_pane

0xb0f1,	// (0x0003c4e1) vtel_slider_pane_g1_ParamLimits

0xb0f1,	// (0x0003c4e1) vtel_slider_pane_g1

0xb0fe,	// (0x0003c4ee) vtel_slider_pane_g2_ParamLimits

0xb0fe,	// (0x0003c4ee) vtel_slider_pane_g2

0xb10b,	// (0x0003c4fb) vtel_slider_pane_g3_ParamLimits

0xb10b,	// (0x0003c4fb) vtel_slider_pane_g3

0xb0f1,	// (0x0003c4e1) vtel_slider_pane_g4_ParamLimits

0xb0f1,	// (0x0003c4e1) vtel_slider_pane_g4

0xb118,	// (0x0003c508) vtel_slider_pane_g5_ParamLimits

0xb118,	// (0x0003c508) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x00040de5) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x00040de5) vtel_slider_pane_g

0xf08e,	// (0x0004047e) main_gallery2_pane

0xa98d,	// (0x0003bd7d) aid_size_row_itut2_dropdow_list_ParamLimits

0xa98d,	// (0x0003bd7d) aid_size_row_itut2_dropdow_list

0xa9cf,	// (0x0003bdbf) grid_vitu2_function_top_pane_ParamLimits

0xa9cf,	// (0x0003bdbf) grid_vitu2_function_top_pane

0xaa0b,	// (0x0003bdfb) popup_vitu2_dropdown_list_window_ParamLimits

0xaa0b,	// (0x0003bdfb) popup_vitu2_dropdown_list_window

0xaa23,	// (0x0003be13) popup_vitu2_match_list_window

0xb125,	// (0x0003c515) cell_vitu2_function_top_pane_ParamLimits

0xb125,	// (0x0003c515) cell_vitu2_function_top_pane

0xb13d,	// (0x0003c52d) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb13d,	// (0x0003c52d) cell_vitu2_function_top_pane_cp01

0xb159,	// (0x0003c549) cell_vitu2_function_top_wide_pane_ParamLimits

0xb159,	// (0x0003c549) cell_vitu2_function_top_wide_pane

0xf08e,	// (0x0004047e) bg_button_pane_cp012

0xb175,	// (0x0003c565) cell_vitu2_function_top_pane_g1

0xb189,	// (0x0003c579) bg_button_pane_cp013_ParamLimits

0xb189,	// (0x0003c579) bg_button_pane_cp013

0xb1a5,	// (0x0003c595) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb1a5,	// (0x0003c595) cell_vitu2_function_top_wide_pane_g1

0x3adf,	// (0x00034ecf) bg_popup_sub_pane_cp20

0xb1bd,	// (0x0003c5ad) list_vitu2_match_list_pane

0x1d04,	// (0x000330f4) bg_popup_sub_pane_cp20_g1

0x1d0c,	// (0x000330fc) bg_popup_sub_pane_cp20_g2

0xdcc9,	// (0x0003f0b9) bg_popup_sub_pane_cp20_g3

0x1d14,	// (0x00033104) bg_popup_sub_pane_cp20_g4

0xdca9,	// (0x0003f099) bg_popup_sub_pane_cp20_g5

0x1f8d,	// (0x0003337d) bg_popup_sub_pane_cp20_g6

0x1d24,	// (0x00033114) bg_popup_sub_pane_cp20_g7

0x1d2c,	// (0x0003311c) bg_popup_sub_pane_cp20_g8

0x1d34,	// (0x00033124) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x00040df0) bg_popup_sub_pane_cp20_g

0xb1d5,	// (0x0003c5c5) list_vitu2_match_list_item_pane_ParamLimits

0xb1d5,	// (0x0003c5c5) list_vitu2_match_list_item_pane

0xb1e7,	// (0x0003c5d7) list_vitu2_match_list_item_pane_t1

0xd102,	// (0x0003e4f2) bg_popup_sub_pane_cp21

0xe0f5,	// (0x0003f4e5) grid_vitu2_dropdown_list_pane

0xb1f5,	// (0x0003c5e5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb1f5,	// (0x0003c5e5) cell_vitu2_dropdown_list_char_pane

0xb216,	// (0x0003c606) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb216,	// (0x0003c606) cell_vitu2_dropdown_list_ctrl_pane

0x1fe7,	// (0x000333d7) cell_vitu2_dropdown_list_char_pane_g1

0x1fde,	// (0x000333ce) cell_vitu2_dropdown_list_char_pane_g2

0x1fd5,	// (0x000333c5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x00040e0d) cell_vitu2_dropdown_list_char_pane_g

0xb242,	// (0x0003c632) cell_vitu2_dropdown_list_char_pane_t1

0xb250,	// (0x0003c640) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb250,	// (0x0003c640) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb260,	// (0x0003c650) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb260,	// (0x0003c650) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb271,	// (0x0003c661) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb271,	// (0x0003c661) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb281,	// (0x0003c671) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb281,	// (0x0003c671) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1119,	// (0x00032509) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1119,	// (0x00032509) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x00040e14) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x00040e14) cell_vitu2_dropdown_list_ctrl_pane_g

0xb29a,	// (0x0003c68a) aid_size_cell_gallery2_ParamLimits

0xb29a,	// (0x0003c68a) aid_size_cell_gallery2

0xb2b4,	// (0x0003c6a4) grid_gallery2_pane_ParamLimits

0xb2b4,	// (0x0003c6a4) grid_gallery2_pane

0x9e41,	// (0x0003b231) scroll_pane_cp029_ParamLimits

0x9e41,	// (0x0003b231) scroll_pane_cp029

0xb2c5,	// (0x0003c6b5) cell_gallery2_pane_ParamLimits

0xb2c5,	// (0x0003c6b5) cell_gallery2_pane

0x1ff0,	// (0x000333e0) cell_gallery2_pane_g2

0xb312,	// (0x0003c702) cell_gallery2_pane_g3

0x1ff8,	// (0x000333e8) cell_gallery2_pane_g4

0x2000,	// (0x000333f0) cell_gallery2_pane_g5

0xda18,	// (0x0003ee08) grid_highlight_pane_cp10

0xaa23,	// (0x0003be13) popup_vitu2_match_list_window_ParamLimits

0xaa33,	// (0x0003be23) popup_vitu2_query_window_ParamLimits

0xaa33,	// (0x0003be23) popup_vitu2_query_window

0xd102,	// (0x0003e4f2) bg_vitu2_candi_button_pane

0x1fe7,	// (0x000333d7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1fde,	// (0x000333ce) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1fd5,	// (0x000333c5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x4eda,	// (0x000362ca) bg_button_pane_cp015

0xb31a,	// (0x0003c70a) bg_button_pane_cp016

0xb32d,	// (0x0003c71d) bg_button_pane_cp017

0x09d6,	// (0x00031dc6) bg_popup_sub_pane_cp22

0x2008,	// (0x000333f8) popup_vitu2_query_window_g1

0x4f09,	// (0x000362f9) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x00040e1f) popup_vitu2_query_window_g

0x4f24,	// (0x00036314) popup_vitu2_query_window_t1_ParamLimits

0x4f24,	// (0x00036314) popup_vitu2_query_window_t1

0x4f57,	// (0x00036347) popup_vitu2_query_window_t2_ParamLimits

0x4f57,	// (0x00036347) popup_vitu2_query_window_t2

0x4f69,	// (0x00036359) popup_vitu2_query_window_t3_ParamLimits

0x4f69,	// (0x00036359) popup_vitu2_query_window_t3

0xb351,	// (0x0003c741) popup_vitu2_query_window_t4_ParamLimits

0xb351,	// (0x0003c741) popup_vitu2_query_window_t4

0xb36e,	// (0x0003c75e) popup_vitu2_query_window_t5_ParamLimits

0xb36e,	// (0x0003c75e) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x00040e26) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x00040e26) popup_vitu2_query_window_t

0x1e06,	// (0x000331f6) main_cset_text_pane

0xadb0,	// (0x0003c1a0) aid_area_touch_slider_ParamLimits

0xadcc,	// (0x0003c1bc) cset_slider_pane_ParamLimits

0xadf6,	// (0x0003c1e6) main_cset_slider_pane_g1_ParamLimits

0xae0b,	// (0x0003c1fb) main_cset_slider_pane_g2_ParamLimits

0x1e27,	// (0x00033217) main_cset_slider_pane_g3_ParamLimits

0x1e27,	// (0x00033217) main_cset_slider_pane_g3

0xae20,	// (0x0003c210) main_cset_slider_pane_g4_ParamLimits

0xae20,	// (0x0003c210) main_cset_slider_pane_g4

0xae2f,	// (0x0003c21f) main_cset_slider_pane_g5_ParamLimits

0xae2f,	// (0x0003c21f) main_cset_slider_pane_g5

0xae3b,	// (0x0003c22b) main_cset_slider_pane_g6_ParamLimits

0xae3b,	// (0x0003c22b) main_cset_slider_pane_g6

0xf989,	// (0x00040d79) main_cset_slider_pane_g_ParamLimits

0x1e57,	// (0x00033247) main_cset_slider_pane_t1_ParamLimits

0xaec7,	// (0x0003c2b7) main_cset_slider_pane_t2_ParamLimits

0xaee1,	// (0x0003c2d1) main_cset_slider_pane_t3_ParamLimits

0xaefb,	// (0x0003c2eb) main_cset_slider_pane_t4_ParamLimits

0xaf15,	// (0x0003c305) main_cset_slider_pane_t5_ParamLimits

0xaf2f,	// (0x0003c31f) main_cset_slider_pane_t6_ParamLimits

0xaf44,	// (0x0003c334) main_cset_slider_pane_t7_ParamLimits

0xaf6e,	// (0x0003c35e) main_cset_slider_pane_t8_ParamLimits

0xaf6e,	// (0x0003c35e) main_cset_slider_pane_t8

0xaf96,	// (0x0003c386) main_cset_slider_pane_t9_ParamLimits

0xaf96,	// (0x0003c386) main_cset_slider_pane_t9

0xafbe,	// (0x0003c3ae) main_cset_slider_pane_t10_ParamLimits

0xafbe,	// (0x0003c3ae) main_cset_slider_pane_t10

0xafe6,	// (0x0003c3d6) main_cset_slider_pane_t11_ParamLimits

0xafe6,	// (0x0003c3d6) main_cset_slider_pane_t11

0xb00e,	// (0x0003c3fe) main_cset_slider_pane_t12_ParamLimits

0xb00e,	// (0x0003c3fe) main_cset_slider_pane_t12

0xb02b,	// (0x0003c41b) main_cset_slider_pane_t13_ParamLimits

0xb02b,	// (0x0003c41b) main_cset_slider_pane_t13

0xf9ae,	// (0x00040d9e) main_cset_slider_pane_t_ParamLimits

0xd102,	// (0x0003e4f2) bg_popup_sub_pane_cp011

0x2014,	// (0x00033404) main_cset_text_pane_g1

0x201c,	// (0x0003340c) main_cset_text_pane_t1

0x202a,	// (0x0003341a) main_cset_text_pane_t2

0x2038,	// (0x00033428) main_cset_text_pane_t3

0x2046,	// (0x00033436) main_cset_text_pane_t4

0x2054,	// (0x00033444) main_cset_text_pane_t5

0x2062,	// (0x00033452) main_cset_text_pane_t6

0x2070,	// (0x00033460) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x00040e35) main_cset_text_pane_t

0xd102,	// (0x0003e4f2) main_cam4_burst_pane

0xd102,	// (0x0003e4f2) main_cam5_pane

0xad0b,	// (0x0003c0fb) bg_button_pane_cp019

0xad14,	// (0x0003c104) bg_button_pane_cp020

0x1e33,	// (0x00033223) main_cset_slider_pane_g7_ParamLimits

0x1e33,	// (0x00033223) main_cset_slider_pane_g7

0x1e3f,	// (0x0003322f) main_cset_slider_pane_g8_ParamLimits

0x1e3f,	// (0x0003322f) main_cset_slider_pane_g8

0xae4f,	// (0x0003c23f) main_cset_slider_pane_g9_ParamLimits

0xae4f,	// (0x0003c23f) main_cset_slider_pane_g9

0xae5b,	// (0x0003c24b) main_cset_slider_pane_g10_ParamLimits

0xae5b,	// (0x0003c24b) main_cset_slider_pane_g10

0xae67,	// (0x0003c257) main_cset_slider_pane_g11_ParamLimits

0xae67,	// (0x0003c257) main_cset_slider_pane_g11

0xae73,	// (0x0003c263) main_cset_slider_pane_g12_ParamLimits

0xae73,	// (0x0003c263) main_cset_slider_pane_g12

0xae7f,	// (0x0003c26f) main_cset_slider_pane_g13_ParamLimits

0xae7f,	// (0x0003c26f) main_cset_slider_pane_g13

0xae8b,	// (0x0003c27b) main_cset_slider_pane_g14_ParamLimits

0xae8b,	// (0x0003c27b) main_cset_slider_pane_g14

0xae97,	// (0x0003c287) main_cset_slider_pane_g15_ParamLimits

0xae97,	// (0x0003c287) main_cset_slider_pane_g15

0x1e85,	// (0x00033275) main_cset_slider_pane_t14_ParamLimits

0x1e85,	// (0x00033275) main_cset_slider_pane_t14

0x1ebe,	// (0x000332ae) main_cset_slider_pane_t15_ParamLimits

0x1ebe,	// (0x000332ae) main_cset_slider_pane_t15

0xb38b,	// (0x0003c77b) aid_cam4_burst_size_cell_ParamLimits

0xb38b,	// (0x0003c77b) aid_cam4_burst_size_cell

0xb3a7,	// (0x0003c797) grid_cam4_burst_pane_ParamLimits

0xb3a7,	// (0x0003c797) grid_cam4_burst_pane

0xb3c9,	// (0x0003c7b9) linegrid_cam4_burst_pane_ParamLimits

0xb3c9,	// (0x0003c7b9) linegrid_cam4_burst_pane

0xb3e7,	// (0x0003c7d7) scroll_pane_cp30_ParamLimits

0xb3e7,	// (0x0003c7d7) scroll_pane_cp30

0xb3f3,	// (0x0003c7e3) cell_cam4_burst_pane_ParamLimits

0xb3f3,	// (0x0003c7e3) cell_cam4_burst_pane

0x207e,	// (0x0003346e) linegrid_cam4_burst_pane_g1_ParamLimits

0x207e,	// (0x0003346e) linegrid_cam4_burst_pane_g1

0xb42b,	// (0x0003c81b) linegrid_cam4_burst_pane_g2_ParamLimits

0xb42b,	// (0x0003c81b) linegrid_cam4_burst_pane_g2

0x208b,	// (0x0003347b) linegrid_cam4_burst_pane_g3_ParamLimits

0x208b,	// (0x0003347b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x00040e44) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x00040e44) linegrid_cam4_burst_pane_g

0xb43c,	// (0x0003c82c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb43c,	// (0x0003c82c) linegrid_cam4_burst_pane_g3_copy1

0x2098,	// (0x00033488) linegrid_cam4_burst_pane_g4_ParamLimits

0x2098,	// (0x00033488) linegrid_cam4_burst_pane_g4

0xb456,	// (0x0003c846) linegrid_cam4_burst_pane_g5_ParamLimits

0xb456,	// (0x0003c846) linegrid_cam4_burst_pane_g5

0xb467,	// (0x0003c857) linegrid_cam4_burst_pane_g6_ParamLimits

0xb467,	// (0x0003c857) linegrid_cam4_burst_pane_g6

0x20a5,	// (0x00033495) linegrid_cam4_burst_pane_g7_ParamLimits

0x20a5,	// (0x00033495) linegrid_cam4_burst_pane_g7

0xb478,	// (0x0003c868) cell_cam4_burst_pane_g1

0x20be,	// (0x000334ae) main_cam5_pane_t1_ParamLimits

0x20be,	// (0x000334ae) main_cam5_pane_t1

0x20d0,	// (0x000334c0) main_cam5_pane_t2_ParamLimits

0x20d0,	// (0x000334c0) main_cam5_pane_t2

0x20e2,	// (0x000334d2) main_cam5_pane_t3_ParamLimits

0x20e2,	// (0x000334d2) main_cam5_pane_t3

0x20f4,	// (0x000334e4) main_cam5_pane_t4_ParamLimits

0x20f4,	// (0x000334e4) main_cam5_pane_t4

0x210a,	// (0x000334fa) main_cam5_pane_t5_ParamLimits

0x210a,	// (0x000334fa) main_cam5_pane_t5

0x211c,	// (0x0003350c) main_cam5_pane_t6_ParamLimits

0x211c,	// (0x0003350c) main_cam5_pane_t6

0x212e,	// (0x0003351e) main_cam5_pane_t7_ParamLimits

0x212e,	// (0x0003351e) main_cam5_pane_t7

0x2140,	// (0x00033530) main_cam5_pane_t8_ParamLimits

0x2140,	// (0x00033530) main_cam5_pane_t8

0x215c,	// (0x0003354c) main_cam5_pane_t9_ParamLimits

0x215c,	// (0x0003354c) main_cam5_pane_t9

0x216e,	// (0x0003355e) main_cam5_pane_t10_ParamLimits

0x216e,	// (0x0003355e) main_cam5_pane_t10

0x2180,	// (0x00033570) main_cam5_pane_t11_ParamLimits

0x2180,	// (0x00033570) main_cam5_pane_t11

0x2192,	// (0x00033582) main_cam5_pane_t12_ParamLimits

0x2192,	// (0x00033582) main_cam5_pane_t12

0x21a7,	// (0x00033597) main_cam5_pane_t13_ParamLimits

0x21a7,	// (0x00033597) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x00040e50) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x00040e50) main_cam5_pane_t

0x5eb6,	// (0x000372a6) popup_scut_keymap_window_ParamLimits

0x5eb6,	// (0x000372a6) popup_scut_keymap_window

0xb48b,	// (0x0003c87b) aid_size_cell_brow_shortcut

0xda18,	// (0x0003ee08) bg_popup_window_pane_cp010

0xb497,	// (0x0003c887) grid_scut_pane

0xb4a1,	// (0x0003c891) cell_scut_pane_ParamLimits

0xb4a1,	// (0x0003c891) cell_scut_pane

0xb4b6,	// (0x0003c8a6) cell_scut_pane_g1

0x21c4,	// (0x000335b4) cell_scut_pane_t1

0x21d3,	// (0x000335c3) cell_scut_pane_t2

0xb4bf,	// (0x0003c8af) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x00040e6b) cell_scut_pane_t

0x9691,	// (0x0003aa81) main_mup3_pane_g8_ParamLimits

0x9691,	// (0x0003aa81) main_mup3_pane_g8

0xa999,	// (0x0003bd89) area_vitu2_query_pane_ParamLimits

0xa999,	// (0x0003bd89) area_vitu2_query_pane

0x4eea,	// (0x000362da) input_focus_pane_cp08

0x21e2,	// (0x000335d2) area_vitu2_query_pane_g1

0x4fe7,	// (0x000363d7) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x00040e72) area_vitu2_query_pane_g

0xb4cd,	// (0x0003c8bd) area_vitu2_query_pane_t1_ParamLimits

0xb4cd,	// (0x0003c8bd) area_vitu2_query_pane_t1

0xb4df,	// (0x0003c8cf) area_vitu2_query_pane_t2_ParamLimits

0xb4df,	// (0x0003c8cf) area_vitu2_query_pane_t2

0x4ff6,	// (0x000363e6) area_vitu2_query_pane_t3_ParamLimits

0x4ff6,	// (0x000363e6) area_vitu2_query_pane_t3

0x501e,	// (0x0003640e) area_vitu2_query_pane_t4_ParamLimits

0x501e,	// (0x0003640e) area_vitu2_query_pane_t4

0x5046,	// (0x00036436) area_vitu2_query_pane_t5_ParamLimits

0x5046,	// (0x00036436) area_vitu2_query_pane_t5

0x506e,	// (0x0003645e) area_vitu2_query_pane_t6_ParamLimits

0x506e,	// (0x0003645e) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x00040e77) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x00040e77) area_vitu2_query_pane_t

0xb4f1,	// (0x0003c8e1) bg_button_pane_cp018

0xb4fe,	// (0x0003c8ee) bg_button_pane_cp021

0x50ba,	// (0x000364aa) bg_button_pane_cp022

0x50c9,	// (0x000364b9) input_focus_pane_cp09

0x7ef5,	// (0x000392e5) aid_size_touch_mv_arrow_left

0xe2f5,	// (0x0003f6e5) aid_size_touch_mv_arrow_right

0xaeaf,	// (0x0003c29f) main_cset_slider_pane_g16_ParamLimits

0xaeaf,	// (0x0003c29f) main_cset_slider_pane_g16

0xaebb,	// (0x0003c2ab) main_cset_slider_pane_g17_ParamLimits

0xaebb,	// (0x0003c2ab) main_cset_slider_pane_g17

0xb478,	// (0x0003c868) cell_cam4_burst_pane_g1_ParamLimits

0xd102,	// (0x0003e4f2) compa_mode_pane

0xb0a8,	// (0x0003c498) popup_vtel_slider_window_g3_ParamLimits

0xb0a8,	// (0x0003c498) popup_vtel_slider_window_g3

0xb0bc,	// (0x0003c4ac) popup_vtel_slider_window_g4_ParamLimits

0xb0bc,	// (0x0003c4ac) popup_vtel_slider_window_g4

0xb0d0,	// (0x0003c4c0) popup_vtel_slider_window_t1_ParamLimits

0xb0d0,	// (0x0003c4c0) popup_vtel_slider_window_t1

0xd102,	// (0x0003e4f2) main_cl_pane

0x8ab0,	// (0x00039ea0) popup_imed_adjust2_window_ParamLimits

0x09d6,	// (0x00031dc6) bg_tb_trans_pane_cp05_ParamLimits

0x143a,	// (0x0003282a) popup_imed_adjust2_window_g1_ParamLimits

0x1449,	// (0x00032839) popup_imed_adjust2_window_g2_ParamLimits

0x1449,	// (0x00032839) popup_imed_adjust2_window_g2

0x1455,	// (0x00032845) popup_imed_adjust2_window_g3_ParamLimits

0x1455,	// (0x00032845) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x00040bde) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x00040bde) popup_imed_adjust2_window_g

0x1461,	// (0x00032851) popup_imed_adjust2_window_t1_ParamLimits

0x1479,	// (0x00032869) slider_imed_adjust_pane_ParamLimits

0x148d,	// (0x0003287d) slider_imed_adjust_pane_g1_ParamLimits

0x149d,	// (0x0003288d) slider_imed_adjust_pane_g2_ParamLimits

0x14ad,	// (0x0003289d) slider_imed_adjust_pane_g3_ParamLimits

0x14be,	// (0x000328ae) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x00040be5) slider_imed_adjust_pane_g_ParamLimits

0xa741,	// (0x0003bb31) aid_touch_area_cam4_ParamLimits

0xa741,	// (0x0003bb31) aid_touch_area_cam4

0xa74f,	// (0x0003bb3f) battery_pane_cp01

0xa7ce,	// (0x0003bbbe) main_camera4_pane_g6_ParamLimits

0xa7ce,	// (0x0003bbbe) main_camera4_pane_g6

0xa7ec,	// (0x0003bbdc) main_camera4_pane_t2_ParamLimits

0xa7ec,	// (0x0003bbdc) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x00040cec) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x00040cec) main_camera4_pane_t

0xa874,	// (0x0003bc64) aid_touch_area_vid4_ParamLimits

0xa874,	// (0x0003bc64) aid_touch_area_vid4

0xa7ce,	// (0x0003bbbe) main_video4_pane_g5_ParamLimits

0xa7ce,	// (0x0003bbbe) main_video4_pane_g5

0xa8a4,	// (0x0003bc94) vid4_progress_pane_ParamLimits

0xa8a4,	// (0x0003bc94) vid4_progress_pane

0x1e4b,	// (0x0003323b) main_cset_slider_pane_g18_ParamLimits

0x1e4b,	// (0x0003323b) main_cset_slider_pane_g18

0x20b2,	// (0x000334a2) cell_cam4_burst_pane_g2_ParamLimits

0x20b2,	// (0x000334a2) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x00040e4b) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00040e4b) cell_cam4_burst_pane_g

0xb50a,	// (0x0003c8fa) bg_cl_pane_ParamLimits

0xb50a,	// (0x0003c8fa) bg_cl_pane

0xb516,	// (0x0003c906) cl_header_pane_ParamLimits

0xb516,	// (0x0003c906) cl_header_pane

0xb522,	// (0x0003c912) cl_listscroll_pane_ParamLimits

0xb522,	// (0x0003c912) cl_listscroll_pane

0x228a,	// (0x0003367a) bg_cl_pane_g1

0x2292,	// (0x00033682) bg_cl_pane_g2

0x229a,	// (0x0003368a) bg_cl_pane_g3

0x22a2,	// (0x00033692) bg_cl_pane_g4

0x22aa,	// (0x0003369a) bg_cl_pane_g5

0x22b2,	// (0x000336a2) bg_cl_pane_g6

0x22ba,	// (0x000336aa) bg_cl_pane_g7

0x22c2,	// (0x000336b2) bg_cl_pane_g8

0x22ca,	// (0x000336ba) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x00040e86) bg_cl_pane_g

0xb52e,	// (0x0003c91e) aid_height_cl_leading_ParamLimits

0xb52e,	// (0x0003c91e) aid_height_cl_leading

0xb53a,	// (0x0003c92a) aid_height_cl_text_ParamLimits

0xb53a,	// (0x0003c92a) aid_height_cl_text

0x3adf,	// (0x00034ecf) bg_cl_header_pane_ParamLimits

0x3adf,	// (0x00034ecf) bg_cl_header_pane

0xb552,	// (0x0003c942) cl_header_pane_g1_ParamLimits

0xb552,	// (0x0003c942) cl_header_pane_g1

0xb55f,	// (0x0003c94f) cl_header_pane_t1_ParamLimits

0xb55f,	// (0x0003c94f) cl_header_pane_t1

0x22d2,	// (0x000336c2) cl_list_pane

0x22db,	// (0x000336cb) hc_scroll_pane_cp01

0xdca9,	// (0x0003f099) bg_cl_header_pane_g1

0x1d04,	// (0x000330f4) bg_cl_header_pane_g2

0xdcc9,	// (0x0003f0b9) bg_cl_header_pane_g3

0x1d14,	// (0x00033104) bg_cl_header_pane_g4

0x1d0c,	// (0x000330fc) bg_cl_header_pane_g5

0x1f8d,	// (0x0003337d) bg_cl_header_pane_g6

0x1d2c,	// (0x0003311c) bg_cl_header_pane_g7

0x1d34,	// (0x00033124) bg_cl_header_pane_g8

0x1d24,	// (0x00033114) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x00040e99) bg_cl_header_pane_g

0xb571,	// (0x0003c961) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb571,	// (0x0003c961) hc_cl_list_double_graphic_heading_pane

0xb581,	// (0x0003c971) hc_cl_list_single_graphic_pane_ParamLimits

0xb581,	// (0x0003c971) hc_cl_list_single_graphic_pane

0xb593,	// (0x0003c983) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb593,	// (0x0003c983) hc_cl_list_single_graphic_pane_g1

0xb59f,	// (0x0003c98f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb59f,	// (0x0003c98f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x00040eac) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x00040eac) hc_cl_list_single_graphic_pane_g

0xb5b3,	// (0x0003c9a3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb5b3,	// (0x0003c9a3) hc_cl_list_single_graphic_pane_t1

0xb593,	// (0x0003c983) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb593,	// (0x0003c983) hc_cl_list_double_graphic_heading_pane_g1

0xb5c8,	// (0x0003c9b8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb5c8,	// (0x0003c9b8) hc_cl_list_double_graphic_heading_pane_g2

0xb5dc,	// (0x0003c9cc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb5dc,	// (0x0003c9cc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x00040eb1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x00040eb1) hc_cl_list_double_graphic_heading_pane_g

0xb5f0,	// (0x0003c9e0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb5f0,	// (0x0003c9e0) hc_cl_list_double_graphic_heading_pane_t1

0xb605,	// (0x0003c9f5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb605,	// (0x0003c9f5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x00040eb8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x00040eb8) hc_cl_list_double_graphic_heading_pane_t

0xb61a,	// (0x0003ca0a) vid4_progress_pane_g1

0xb629,	// (0x0003ca19) vid4_progress_pane_g2

0xb638,	// (0x0003ca28) vid4_progress_pane_g3

0xb647,	// (0x0003ca37) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x00040ebd) vid4_progress_pane_g

0xb653,	// (0x0003ca43) vid4_progress_pane_t1

0xb669,	// (0x0003ca59) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x00040ec8) vid4_progress_pane_t

0xb693,	// (0x0003ca83) wait_bar_pane_cp07

0x0ce5,	// (0x000320d5) blid_firmament_pane_ParamLimits

0x0d26,	// (0x00032116) popup_blid_sat_info2_window_g1

0x0d4a,	// (0x0003213a) popup_blid_sat_info2_window_t3

0x0d58,	// (0x00032148) popup_blid_sat_info2_window_t4

0x0d66,	// (0x00032156) popup_blid_sat_info2_window_t5

0x0d74,	// (0x00032164) popup_blid_sat_info2_window_t6

0x0d84,	// (0x00032174) popup_blid_sat_info2_window_t7

0x0d92,	// (0x00032182) popup_blid_sat_info2_window_t8

0x0da0,	// (0x00032190) popup_blid_sat_info2_window_t9

0x0dae,	// (0x0003219e) popup_blid_sat_info2_window_t10

0x0e6a,	// (0x0003225a) aid_firma_cardinal_ParamLimits

0x0e7e,	// (0x0003226e) blid_firmament_pane_t1_ParamLimits

0x0e95,	// (0x00032285) blid_firmament_pane_t2_ParamLimits

0x0eac,	// (0x0003229c) blid_firmament_pane_t3_ParamLimits

0x0ec3,	// (0x000322b3) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x00040ad2) blid_firmament_pane_t_ParamLimits

0x0eda,	// (0x000322ca) blid_sat_info_pane_ParamLimits

0xf08e,	// (0x0004047e) main_cam_set_pane_ParamLimits

0x9de1,	// (0x0003b1d1) aid_size_cell_colour_35_ParamLimits

0x9df8,	// (0x0003b1e8) aid_size_cell_colour_112_ParamLimits

0x9e0f,	// (0x0003b1ff) aid_size_cell_effect_ParamLimits

0xf08e,	// (0x0004047e) bg_tb_trans_pane_cp02_ParamLimits

0xf09c,	// (0x0004048c) heading_imed_pane_ParamLimits

0x9e29,	// (0x0003b219) listscroll_imed_pane_ParamLimits

0xee40,	// (0x00040230) popup_call2_audio_first_window_g5_ParamLimits

0xee40,	// (0x00040230) popup_call2_audio_first_window_g5

0xa4cc,	// (0x0003b8bc) aid_size_touch_image3_arrow_left_ParamLimits

0xa4cc,	// (0x0003b8bc) aid_size_touch_image3_arrow_left

0xa4e0,	// (0x0003b8d0) aid_size_touch_image3_arrow_right_ParamLimits

0xa4e0,	// (0x0003b8d0) aid_size_touch_image3_arrow_right

0xb67e,	// (0x0003ca6e) vid4_progress_pane_t3

0xa08d,	// (0x0003b47d) main_hwr_training_symbol_option_pane_ParamLimits

0xa08d,	// (0x0003b47d) main_hwr_training_symbol_option_pane

0x1719,	// (0x00032b09) popup_hwr_training_preview_window_ParamLimits

0x1719,	// (0x00032b09) popup_hwr_training_preview_window

0xa0e8,	// (0x0003b4d8) hwr_training_navi_pane_g5_ParamLimits

0xa0e8,	// (0x0003b4d8) hwr_training_navi_pane_g5

0x1ce0,	// (0x000330d0) popup_char_count_window

0x3adf,	// (0x00034ecf) bg_popup_sub_pane_cp20_ParamLimits

0xb1bd,	// (0x0003c5ad) list_vitu2_match_list_pane_ParamLimits

0xb1c9,	// (0x0003c5b9) vitu2_page_scroll_pane_ParamLimits

0xb1c9,	// (0x0003c5b9) vitu2_page_scroll_pane

0x23ad,	// (0x0003379d) list_single_hwr_training_symbol_option_pane_ParamLimits

0x23ad,	// (0x0003379d) list_single_hwr_training_symbol_option_pane

0x23c0,	// (0x000337b0) list_single_hwr_training_symbol_option_pane_g1

0x23c8,	// (0x000337b8) list_single_hwr_training_symbol_option_pane_t1

0x23d6,	// (0x000337c6) bg_button_pane_cp023

0x23df,	// (0x000337cf) bg_button_pane_cp024

0xb6a3,	// (0x0003ca93) vitu2_page_scroll_pane_g1

0xb6ab,	// (0x0003ca9b) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x00040ecf) vitu2_page_scroll_pane_g

0xb6b3,	// (0x0003caa3) vitu2_page_scroll_pane_t1

0x0f13,	// (0x00032303) popup_char_count_window_g1

0x2412,	// (0x00033802) popup_char_count_window_g2

0x241b,	// (0x0003380b) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x00040ed4) popup_char_count_window_g

0x2424,	// (0x00033814) popup_char_count_window_t1

0xd102,	// (0x0003e4f2) main_vded2_pane

0x1428,	// (0x00032818) aid_size_cell_imed_line

0x1432,	// (0x00032822) grid_imed_line_width_pane

0xa8ef,	// (0x0003bcdf) vid4_indicators_pane_g4

0x2432,	// (0x00033822) cell_imed_line_width_pane_ParamLimits

0x2432,	// (0x00033822) cell_imed_line_width_pane

0x2444,	// (0x00033834) cell_imed_line_width_pane_g1

0x0c93,	// (0x00032083) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x00040edb) cell_imed_line_width_pane_g

0xb6c2,	// (0x0003cab2) main_vded2_pane_g1_ParamLimits

0xb6c2,	// (0x0003cab2) main_vded2_pane_g1

0xb6cf,	// (0x0003cabf) main_vded2_pane_g2_ParamLimits

0xb6cf,	// (0x0003cabf) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x00040ee0) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x00040ee0) main_vded2_pane_g

0xb6db,	// (0x0003cacb) vded2_slider_pane_ParamLimits

0xb6db,	// (0x0003cacb) vded2_slider_pane

0xb6e8,	// (0x0003cad8) aid_size_touch_vded2_end

0xb6f0,	// (0x0003cae0) aid_size_touch_vded2_playhead

0xb6f8,	// (0x0003cae8) aid_size_touch_vded2_start

0xb700,	// (0x0003caf0) vded2_slider_bg_pane

0xb709,	// (0x0003caf9) vded2_slider_pane_g1

0xb712,	// (0x0003cb02) vded2_slider_pane_g2

0xb71a,	// (0x0003cb0a) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x00040ee5) vded2_slider_pane_g

0xb723,	// (0x0003cb13) vded2_slider_bg_pane_g1

0xb72c,	// (0x0003cb1c) vded2_slider_bg_pane_g2

0xb735,	// (0x0003cb25) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x00040eec) vded2_slider_bg_pane_g

0x841a,	// (0x0003980a) aid_postcard_touch_down_pane_ParamLimits

0x841a,	// (0x0003980a) aid_postcard_touch_down_pane

0x8426,	// (0x00039816) aid_postcard_touch_up_pane_ParamLimits

0x8426,	// (0x00039816) aid_postcard_touch_up_pane

0xd102,	// (0x0003e4f2) main_blid2_pane

0x8a4d,	// (0x00039e3d) popup_blid2_search_window

0xd102,	// (0x0003e4f2) blid2_gps_pane

0xd102,	// (0x0003e4f2) blid2_navig_pane

0xd102,	// (0x0003e4f2) blid2_search_pane

0xd102,	// (0x0003e4f2) blid2_tripm_pane

0xb73e,	// (0x0003cb2e) blid2_search_pane_g1_ParamLimits

0xb73e,	// (0x0003cb2e) blid2_search_pane_g1

0xb74a,	// (0x0003cb3a) blid2_search_pane_t1_ParamLimits

0xb74a,	// (0x0003cb3a) blid2_search_pane_t1

0xb75c,	// (0x0003cb4c) aid_size_cell_blid2_gps_ParamLimits

0xb75c,	// (0x0003cb4c) aid_size_cell_blid2_gps

0xb76c,	// (0x0003cb5c) blid2_gps_pane_g1_ParamLimits

0xb76c,	// (0x0003cb5c) blid2_gps_pane_g1

0xb778,	// (0x0003cb68) grid_blid2_satellite_pane_ParamLimits

0xb778,	// (0x0003cb68) grid_blid2_satellite_pane

0xb784,	// (0x0003cb74) blid2_navig_pane_g1_ParamLimits

0xb784,	// (0x0003cb74) blid2_navig_pane_g1

0xb790,	// (0x0003cb80) blid2_navig_pane_t1_ParamLimits

0xb790,	// (0x0003cb80) blid2_navig_pane_t1

0xb7a2,	// (0x0003cb92) blid2_navig_pane_t2_ParamLimits

0xb7a2,	// (0x0003cb92) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x00040ef3) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x00040ef3) blid2_navig_pane_t

0xb7b4,	// (0x0003cba4) blid2_navig_ring_pane_ParamLimits

0xb7b4,	// (0x0003cba4) blid2_navig_ring_pane

0xb7c0,	// (0x0003cbb0) blid2_speed_pane_ParamLimits

0xb7c0,	// (0x0003cbb0) blid2_speed_pane

0xb7cc,	// (0x0003cbbc) blid2_tripm_pane_g1_ParamLimits

0xb7cc,	// (0x0003cbbc) blid2_tripm_pane_g1

0xb7d8,	// (0x0003cbc8) blid2_tripm_pane_g2_ParamLimits

0xb7d8,	// (0x0003cbc8) blid2_tripm_pane_g2

0xb7e4,	// (0x0003cbd4) blid2_tripm_pane_g3_ParamLimits

0xb7e4,	// (0x0003cbd4) blid2_tripm_pane_g3

0xb7f0,	// (0x0003cbe0) blid2_tripm_pane_g4_ParamLimits

0xb7f0,	// (0x0003cbe0) blid2_tripm_pane_g4

0xb7fc,	// (0x0003cbec) blid2_tripm_pane_g5_ParamLimits

0xb7fc,	// (0x0003cbec) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x00040ef8) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x00040ef8) blid2_tripm_pane_g

0xb814,	// (0x0003cc04) blid2_tripm_pane_t1_ParamLimits

0xb814,	// (0x0003cc04) blid2_tripm_pane_t1

0xb826,	// (0x0003cc16) blid2_tripm_pane_t2_ParamLimits

0xb826,	// (0x0003cc16) blid2_tripm_pane_t2

0xb838,	// (0x0003cc28) blid2_tripm_pane_t3_ParamLimits

0xb838,	// (0x0003cc28) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x00040f05) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x00040f05) blid2_tripm_pane_t

0xb868,	// (0x0003cc58) cell_blid2_satellite_pane_ParamLimits

0xb868,	// (0x0003cc58) cell_blid2_satellite_pane

0xb880,	// (0x0003cc70) cell_blid2_satellite_pane_g1

0x244d,	// (0x0003383d) cell_blid2_satellite_pane_t1

0x0eea,	// (0x000322da) blid2_speed_pane_g1

0x245b,	// (0x0003384b) blid2_speed_pane_t1

0x2469,	// (0x00033859) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x00040f0e) blid2_speed_pane_t

0x0eea,	// (0x000322da) blid2_navig_ring_pane_g1

0xb889,	// (0x0003cc79) blid2_navig_ring_pane_g2

0xb891,	// (0x0003cc81) blid2_navig_ring_pane_g3

0xb899,	// (0x0003cc89) blid2_navig_ring_pane_g4

0xb8a1,	// (0x0003cc91) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x00040f13) blid2_navig_ring_pane_g

0xd102,	// (0x0003e4f2) bg_popup_window_pane_cp011

0x2477,	// (0x00033867) popup_blid2_search_window_g1

0x247f,	// (0x0003386f) popup_blid2_search_window_t1

0x248d,	// (0x0003387d) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x00040f1e) popup_blid2_search_window_t

0xdbb8,	// (0x0003efa8) main_browser_pane_g1

0xd841,	// (0x0003ec31) main_browser_pane_ParamLimits

0xf08e,	// (0x0004047e) bg_button_pane_cp011_ParamLimits

0xab10,	// (0x0003bf00) cell_vitu2_function_pane_g1_ParamLimits

0x09d6,	// (0x00031dc6) bg_popup_sub_pane_cp22_ParamLimits

0x4eea,	// (0x000362da) input_focus_pane_cp08_ParamLimits

0xb340,	// (0x0003c730) popup_vitu2_query_button_pane_ParamLimits

0xb340,	// (0x0003c730) popup_vitu2_query_button_pane

0x4f01,	// (0x000362f1) popup_vitu2_query_input_button_pane

0x2008,	// (0x000333f8) popup_vitu2_query_window_g1_ParamLimits

0x4f09,	// (0x000362f9) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x00040e1f) popup_vitu2_query_window_g_ParamLimits

0xd102,	// (0x0003e4f2) bg_button_pane_cp026

0xb8a9,	// (0x0003cc99) popup_vitu2_query_input_button_pane_g1

0xd102,	// (0x0003e4f2) bg_button_pane_cp025

0x249b,	// (0x0003388b) popup_vitu2_query_button_pane_t1

0x940f,	// (0x0003a7ff) main_mp3_pane_t6

0x941d,	// (0x0003a80d) popup_slider_window_cp01

0xa822,	// (0x0003bc12) cam4_battery_pane

0xa822,	// (0x0003bc12) cam4_battery_pane_cp02

0xa822,	// (0x0003bc12) cam4_battery_pane_cp01

0xa822,	// (0x0003bc12) cam4_battery_pane_cp03

0x0eea,	// (0x000322da) cam4_battery_pane_g1

0x1a74,	// (0x00032e64) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x00040f23) cam4_battery_pane_g

0x0dbc,	// (0x000321ac) popup_blid_sat_info2_window_t11

0x7ef5,	// (0x000392e5) aid_size_touch_mv_arrow_left_ParamLimits

0xe2f5,	// (0x0003f6e5) aid_size_touch_mv_arrow_right_ParamLimits

0xe34e,	// (0x0003f73e) navi_pane_g1_ParamLimits

0xe35a,	// (0x0003f74a) navi_pane_g2_ParamLimits

0x7f19,	// (0x00039309) navi_pane_g3_ParamLimits

0xf3e1,	// (0x000407d1) navi_pane_g_ParamLimits

0x7f36,	// (0x00039326) navi_pane_mv_t1_ParamLimits

0x9e35,	// (0x0003b225) grid_imed_effect_pane_ParamLimits

0x6cb4,	// (0x000380a4) aid_placing_vt_slider_lsc

0xdafa,	// (0x0003eeea) aid_placing_vt_slider_prt

0xf08e,	// (0x0004047e) bg_tb_trans_pane_cp01_ParamLimits

0x1039,	// (0x00032429) popup_image_details_window_g1_ParamLimits

0x104c,	// (0x0003243c) popup_image_details_window_g2_ParamLimits

0x1061,	// (0x00032451) popup_image_details_window_g3_ParamLimits

0x1061,	// (0x00032451) popup_image_details_window_g3

0xf727,	// (0x00040b17) popup_image_details_window_g_ParamLimits

0x1075,	// (0x00032465) popup_image_details_window_t1_ParamLimits

0x1087,	// (0x00032477) popup_image_details_window_t2_ParamLimits

0x10a0,	// (0x00032490) popup_image_details_window_t3_ParamLimits

0x10b4,	// (0x000324a4) popup_image_details_window_t4_ParamLimits

0x10cf,	// (0x000324bf) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x00040b1e) popup_image_details_window_t_ParamLimits

0xb546,	// (0x0003c936) cl_header_name_pane_ParamLimits

0xb546,	// (0x0003c936) cl_header_name_pane

0xb8b1,	// (0x0003cca1) cl_header_name_pane_t1_ParamLimits

0xb8b1,	// (0x0003cca1) cl_header_name_pane_t1

0xb8c8,	// (0x0003ccb8) cl_header_name_pane_t2_ParamLimits

0xb8c8,	// (0x0003ccb8) cl_header_name_pane_t2

0xb8f2,	// (0x0003cce2) cl_header_name_pane_t3_ParamLimits

0xb8f2,	// (0x0003cce2) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x00040f28) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x00040f28) cl_header_name_pane_t

0xe3e7,	// (0x0003f7d7) navi_pane_mv_g2_ParamLimits

0x1c9d,	// (0x0003308d) field_vitu2_entry_pane_g1_ParamLimits

0x1ca9,	// (0x00033099) field_vitu2_entry_pane_g2_ParamLimits

0x1cb5,	// (0x000330a5) field_vitu2_entry_pane_g3_ParamLimits

0x1cb5,	// (0x000330a5) field_vitu2_entry_pane_g3

0xf92e,	// (0x00040d1e) field_vitu2_entry_pane_g_ParamLimits

0xaaa4,	// (0x0003be94) cell_vitu2_itu_pane_g1_ParamLimits

0xaab6,	// (0x0003bea6) cell_vitu2_itu_pane_g2_ParamLimits

0xaab6,	// (0x0003bea6) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x00040d2a) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x00040d2a) cell_vitu2_itu_pane_g

0xf08e,	// (0x0004047e) bg_vkb2_func_pane_cp05_ParamLimits

0xf08e,	// (0x0004047e) bg_vkb2_func_pane_cp05

0xf08e,	// (0x0004047e) bg_vkb2_func_pane_cp03

0xf08e,	// (0x0004047e) bg_vkb2_func_pane_cp04

0xf08e,	// (0x0004047e) bg_vkb2_func_pane_cp10_ParamLimits

0xf08e,	// (0x0004047e) bg_vkb2_func_pane_cp10

0x50ba,	// (0x000364aa) bg_vkb2_func_pane_cp08

0xb4f1,	// (0x0003c8e1) bg_vkb2_func_pane_cp06

0xb4fe,	// (0x0003c8ee) bg_vkb2_func_pane_cp07

0x23e8,	// (0x000337d8) bg_vkb2_func_pane_cp11_ParamLimits

0x23e8,	// (0x000337d8) bg_vkb2_func_pane_cp11

0x23fd,	// (0x000337ed) bg_vkb2_func_pane_cp12_ParamLimits

0x23fd,	// (0x000337ed) bg_vkb2_func_pane_cp12

0xd102,	// (0x0003e4f2) bg_vkb2_func_pane_cp09

0x1d04,	// (0x000330f4) bg_vkb2_func_pane_g1

0xdcc9,	// (0x0003f0b9) bg_vkb2_func_pane_g2

0x1d0c,	// (0x000330fc) bg_vkb2_func_pane_g3

0x1d14,	// (0x00033104) bg_vkb2_func_pane_g4

0x1f8d,	// (0x0003337d) bg_vkb2_func_pane_g5

0x1d2c,	// (0x0003311c) bg_vkb2_func_pane_g6

0x1d34,	// (0x00033124) bg_vkb2_func_pane_g7

0x1d24,	// (0x00033114) bg_vkb2_func_pane_g8

0xdca9,	// (0x0003f099) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x00040f2f) bg_vkb2_func_pane_g

0xb808,	// (0x0003cbf8) blid2_tripm_pane_g6_ParamLimits

0xb808,	// (0x0003cbf8) blid2_tripm_pane_g6

0x1a32,	// (0x00032e22) mp4_progress_pane_g1

0xb85c,	// (0x0003cc4c) blid2_tripm_values_pane_ParamLimits

0xb85c,	// (0x0003cc4c) blid2_tripm_values_pane

0xb917,	// (0x0003cd07) blid2_tripm_values_pane_t1

0xb925,	// (0x0003cd15) blid2_tripm_values_pane_t2

0xb933,	// (0x0003cd23) blid2_tripm_values_pane_t3

0xb941,	// (0x0003cd31) blid2_tripm_values_pane_t4

0xb94f,	// (0x0003cd3f) blid2_tripm_values_pane_t5

0xb95d,	// (0x0003cd4d) blid2_tripm_values_pane_t6

0xb96b,	// (0x0003cd5b) blid2_tripm_values_pane_t7

0xb979,	// (0x0003cd69) blid2_tripm_values_pane_t8

0xb987,	// (0x0003cd77) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x00040f42) blid2_tripm_values_pane_t

0x6cee,	// (0x000380de) call_video_pane_t1_ParamLimits

0x6d0b,	// (0x000380fb) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0004065a) call_video_pane_t_ParamLimits

0x4c4f,	// (0x0003603f) msg_header_pane_g1_ParamLimits

0xe5b9,	// (0x0003f9a9) msg_header_pane_g2_ParamLimits

0xe5b9,	// (0x0003f9a9) msg_header_pane_g2

0x0001,

0xf484,	// (0x00040874) msg_header_pane_g_ParamLimits

0xf484,	// (0x00040874) msg_header_pane_g

0xd841,	// (0x0003ec31) main_clock2_pane_ParamLimits

0x9bd9,	// (0x0003afc9) grid_clock2_toolbar_pane_ParamLimits

0x9bd9,	// (0x0003afc9) grid_clock2_toolbar_pane

0x9bd9,	// (0x0003afc9) listscroll_clock2_pane_ParamLimits

0x9bd9,	// (0x0003afc9) listscroll_clock2_pane

0x9c75,	// (0x0003b065) main_clock2_pane_t3_ParamLimits

0x9c75,	// (0x0003b065) main_clock2_pane_t3

0x9c87,	// (0x0003b077) main_clock2_pane_t4_ParamLimits

0x9c87,	// (0x0003b077) main_clock2_pane_t4

0x24a9,	// (0x00033899) cell_clock2_toolbar_pane

0x24b1,	// (0x000338a1) cell_clock2_toolbar_pane_cp01

0x24b1,	// (0x000338a1) cell_clock2_toolbar_pane_cp02

0x24b9,	// (0x000338a9) cell_clock2_toolbar_pane_cp03

0x24c1,	// (0x000338b1) list_clock2_pane

0x24c9,	// (0x000338b9) scroll_pane_cp10

0x24d1,	// (0x000338c1) list_single_clock2_pane_ParamLimits

0x24d1,	// (0x000338c1) list_single_clock2_pane

0xda18,	// (0x0003ee08) list_highlight_pane_cp08

0x24de,	// (0x000338ce) list_single_clock2_pane_t1

0x24ec,	// (0x000338dc) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x00040f55) list_single_clock2_pane_t

0xd102,	// (0x0003e4f2) bg_button_pane_cp10

0x24fa,	// (0x000338ea) cell_clock2_toolbar_pane_g1

0x8384,	// (0x00039774) aid_main_viewer_pane_g1_ParamLimits

0x8384,	// (0x00039774) aid_main_viewer_pane_g1

0x8390,	// (0x00039780) aid_main_viewer_pane_g2_ParamLimits

0x8390,	// (0x00039780) aid_main_viewer_pane_g2

0x839c,	// (0x0003978c) aid_main_viewer_pane_g3_ParamLimits

0x839c,	// (0x0003978c) aid_main_viewer_pane_g3

0x83ab,	// (0x0003979b) aid_main_viewer_pane_g4_ParamLimits

0x83ab,	// (0x0003979b) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x00040885) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x00040885) aid_main_viewer_pane_g

0x3adf,	// (0x00034ecf) main_calc_pane_ParamLimits

0x8a32,	// (0x00039e22) main_dialer2_pane_ParamLimits

0xd102,	// (0x0003e4f2) main_cam6_pane

0xd102,	// (0x0003e4f2) main_vid6_pane

0x9be5,	// (0x0003afd5) listscroll_gen_pane_cp06_ParamLimits

0x9be5,	// (0x0003afd5) listscroll_gen_pane_cp06

0x9c99,	// (0x0003b089) main_clock2_pane_t5_ParamLimits

0x9c99,	// (0x0003b089) main_clock2_pane_t5

0x9ce2,	// (0x0003b0d2) aid_call2_pane_cp10_ParamLimits

0x9cf4,	// (0x0003b0e4) aid_call_pane_cp10_ParamLimits

0xe2e9,	// (0x0003f6d9) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe2e9,	// (0x0003f6d9) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9d06,	// (0x0003b0f6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9d06,	// (0x0003b0f6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe2e9,	// (0x0003f6d9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x00040bd3) popup_clock_analogue_window_cp10_g_ParamLimits

0x9d18,	// (0x0003b108) popup_clock_analogue_window_cp10_t1_ParamLimits

0x1a9c,	// (0x00032e8c) cell_dialer2_keypad_pane_g2_ParamLimits

0x1a9c,	// (0x00032e8c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x00040cbd) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x00040cbd) cell_dialer2_keypad_pane_g

0xa495,	// (0x0003b885) cell_dialer2_keypad_pane_t1

0xad9d,	// (0x0003c18d) main_cset_text2_pane_ParamLimits

0xad9d,	// (0x0003c18d) main_cset_text2_pane

0x21e2,	// (0x000335d2) area_vitu2_query_pane_g1_ParamLimits

0x4fe7,	// (0x000363d7) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x00040e72) area_vitu2_query_pane_g_ParamLimits

0x5096,	// (0x00036486) area_vitu2_query_pane_t7_ParamLimits

0x5096,	// (0x00036486) area_vitu2_query_pane_t7

0xb4f1,	// (0x0003c8e1) bg_button_pane_cp018_ParamLimits

0xb4fe,	// (0x0003c8ee) bg_button_pane_cp021_ParamLimits

0x50ba,	// (0x000364aa) bg_button_pane_cp022_ParamLimits

0x50ba,	// (0x000364aa) bg_vkb2_func_pane_cp08_ParamLimits

0xb4f1,	// (0x0003c8e1) bg_vkb2_func_pane_cp06_ParamLimits

0xb4fe,	// (0x0003c8ee) bg_vkb2_func_pane_cp07_ParamLimits

0x50c9,	// (0x000364b9) input_focus_pane_cp09_ParamLimits

0xb995,	// (0x0003cd85) cam6_autofocus_pane_ParamLimits

0xb995,	// (0x0003cd85) cam6_autofocus_pane

0xb9b1,	// (0x0003cda1) cam6_image_uncrop_pane_ParamLimits

0xb9b1,	// (0x0003cda1) cam6_image_uncrop_pane

0xb9d4,	// (0x0003cdc4) cam6_indi_pane_ParamLimits

0xb9d4,	// (0x0003cdc4) cam6_indi_pane

0xb9ee,	// (0x0003cdde) cam6_mode_pane_ParamLimits

0xb9ee,	// (0x0003cdde) cam6_mode_pane

0xba02,	// (0x0003cdf2) cam6_timer_pane_ParamLimits

0xba02,	// (0x0003cdf2) cam6_timer_pane

0xba0e,	// (0x0003cdfe) cam6_zoom_pane_ParamLimits

0xba0e,	// (0x0003cdfe) cam6_zoom_pane

0xa882,	// (0x0003bc72) cam6_mode_pane_g1_ParamLimits

0xa882,	// (0x0003bc72) cam6_mode_pane_g1

0xba24,	// (0x0003ce14) cam6_mode_pane_g2_ParamLimits

0xba24,	// (0x0003ce14) cam6_mode_pane_g2

0xba30,	// (0x0003ce20) cam6_mode_pane_g3_ParamLimits

0xba30,	// (0x0003ce20) cam6_mode_pane_g3

0xba3c,	// (0x0003ce2c) cam6_mode_pane_g4_ParamLimits

0xba3c,	// (0x0003ce2c) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x00040f5a) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x00040f5a) cam6_mode_pane_g

0x250e,	// (0x000338fe) bg_tb_trans_pane_cp08_ParamLimits

0x250e,	// (0x000338fe) bg_tb_trans_pane_cp08

0x251c,	// (0x0003390c) cam6_battery_pane_ParamLimits

0x251c,	// (0x0003390c) cam6_battery_pane

0x2532,	// (0x00033922) cam6_indi_pane_g1_ParamLimits

0x2532,	// (0x00033922) cam6_indi_pane_g1

0x2544,	// (0x00033934) cam6_indi_pane_g2_ParamLimits

0x2544,	// (0x00033934) cam6_indi_pane_g2

0x2556,	// (0x00033946) cam6_indi_pane_g3_ParamLimits

0x2556,	// (0x00033946) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x00040f63) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x00040f63) cam6_indi_pane_g

0x2568,	// (0x00033958) cam6_indi_pane_t1_ParamLimits

0x2568,	// (0x00033958) cam6_indi_pane_t1

0xa925,	// (0x0003bd15) cam6_autofocus_pane_g1

0xa92d,	// (0x0003bd1d) cam6_autofocus_pane_g2

0xa935,	// (0x0003bd25) cam6_autofocus_pane_g3

0xa93d,	// (0x0003bd2d) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x00040f6a) cam6_autofocus_pane_g

0x258e,	// (0x0003397e) cam6_timer_pane_g1

0x2596,	// (0x00033986) cam6_timer_pane_t1

0x25a4,	// (0x00033994) cam6_zoom_cont_pane

0x25ac,	// (0x0003399c) cam6_zoom_pane_g1

0x25b4,	// (0x000339a4) cam6_zoom_pane_g2

0xba48,	// (0x0003ce38) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x00040f73) cam6_zoom_pane_g

0x0eea,	// (0x000322da) cam6_battery_pane_g1

0x0eea,	// (0x000322da) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x00040adb) cam6_battery_pane_g

0x25bc,	// (0x000339ac) cam6_zoom_cont_pane_g1

0x25c5,	// (0x000339b5) cam6_zoom_cont_pane_g2

0x25ce,	// (0x000339be) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x00040f7a) cam6_zoom_cont_pane_g

0xba65,	// (0x0003ce55) cam6_mode_pane_cp_ParamLimits

0xba65,	// (0x0003ce55) cam6_mode_pane_cp

0xba0e,	// (0x0003cdfe) cam6_zoom_pane_cp_ParamLimits

0xba0e,	// (0x0003cdfe) cam6_zoom_pane_cp

0xba79,	// (0x0003ce69) vid6_image_uncrop_cif_pane_ParamLimits

0xba79,	// (0x0003ce69) vid6_image_uncrop_cif_pane

0xba9b,	// (0x0003ce8b) vid6_image_uncrop_nhd_pane_ParamLimits

0xba9b,	// (0x0003ce8b) vid6_image_uncrop_nhd_pane

0xb9b1,	// (0x0003cda1) vid6_image_uncrop_vga_pane_ParamLimits

0xb9b1,	// (0x0003cda1) vid6_image_uncrop_vga_pane

0xbab2,	// (0x0003cea2) vid6_image_uncrop_wvga_pane_ParamLimits

0xbab2,	// (0x0003cea2) vid6_image_uncrop_wvga_pane

0xbac9,	// (0x0003ceb9) vid6_indi_pane_ParamLimits

0xbac9,	// (0x0003ceb9) vid6_indi_pane

0x250e,	// (0x000338fe) bg_tb_trans_pane_cp09_ParamLimits

0x250e,	// (0x000338fe) bg_tb_trans_pane_cp09

0x25e2,	// (0x000339d2) cam6_battery_pane_cp_ParamLimits

0x25e2,	// (0x000339d2) cam6_battery_pane_cp

0x25ee,	// (0x000339de) vid6_indi_pane_g1_ParamLimits

0x25ee,	// (0x000339de) vid6_indi_pane_g1

0x2600,	// (0x000339f0) vid6_indi_pane_g2_ParamLimits

0x2600,	// (0x000339f0) vid6_indi_pane_g2

0x2612,	// (0x00033a02) vid6_indi_pane_g3_ParamLimits

0x2612,	// (0x00033a02) vid6_indi_pane_g3

0x2627,	// (0x00033a17) vid6_indi_pane_g4_ParamLimits

0x2627,	// (0x00033a17) vid6_indi_pane_g4

0x263c,	// (0x00033a2c) vid6_indi_pane_g5_ParamLimits

0x263c,	// (0x00033a2c) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x00040f81) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x00040f81) vid6_indi_pane_g

0x2656,	// (0x00033a46) vid6_indi_pane_t1_ParamLimits

0x2656,	// (0x00033a46) vid6_indi_pane_t1

0x266c,	// (0x00033a5c) vid6_indi_pane_t2_ParamLimits

0x266c,	// (0x00033a5c) vid6_indi_pane_t2

0x2694,	// (0x00033a84) vid6_indi_pane_t3_ParamLimits

0x2694,	// (0x00033a84) vid6_indi_pane_t3

0x26bc,	// (0x00033aac) vid6_indi_pane_t4_ParamLimits

0x26bc,	// (0x00033aac) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x00040f8c) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x00040f8c) vid6_indi_pane_t

0x26e0,	// (0x00033ad0) wait_bar_pane_cp08

0xbae9,	// (0x0003ced9) main_cset_text2_pane_t1_ParamLimits

0xbae9,	// (0x0003ced9) main_cset_text2_pane_t1

0xba50,	// (0x0003ce40) listscroll_gen_pane_cp06_t1_ParamLimits

0xba50,	// (0x0003ce40) listscroll_gen_pane_cp06_t1

0xd102,	// (0x0003e4f2) main_cam6_set_pane

0x1119,	// (0x00032509) bg_tb_trans_pane_cp06_ParamLimits

0xa82a,	// (0x0003bc1a) cam4_indicators_pane_g1_ParamLimits

0xa83a,	// (0x0003bc2a) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x00040cfa) cam4_indicators_pane_g_ParamLimits

0xa85a,	// (0x0003bc4a) cam4_indicators_pane_t1_ParamLimits

0xf08e,	// (0x0004047e) bg_tb_trans_pane_cp07_ParamLimits

0xa82a,	// (0x0003bc1a) vid4_indicators_pane_g1_ParamLimits

0xa8ce,	// (0x0003bcbe) vid4_indicators_pane_g2_ParamLimits

0xa8de,	// (0x0003bcce) vid4_indicators_pane_g3_ParamLimits

0xa8ef,	// (0x0003bcdf) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x00040d0c) vid4_indicators_pane_g_ParamLimits

0xa90b,	// (0x0003bcfb) vid4_indicators_pane_t1_ParamLimits

0xb61a,	// (0x0003ca0a) vid4_progress_pane_g1_ParamLimits

0xb629,	// (0x0003ca19) vid4_progress_pane_g2_ParamLimits

0xb638,	// (0x0003ca28) vid4_progress_pane_g3_ParamLimits

0xb647,	// (0x0003ca37) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x00040ebd) vid4_progress_pane_g_ParamLimits

0xb653,	// (0x0003ca43) vid4_progress_pane_t1_ParamLimits

0xb669,	// (0x0003ca59) vid4_progress_pane_t2_ParamLimits

0xb67e,	// (0x0003ca6e) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x00040ec8) vid4_progress_pane_t_ParamLimits

0xb693,	// (0x0003ca83) wait_bar_pane_cp07_ParamLimits

0xbb05,	// (0x0003cef5) main_cam6_set_pane_g2_ParamLimits

0xbb05,	// (0x0003cef5) main_cam6_set_pane_g2

0xbb11,	// (0x0003cf01) main_cset6_listscroll_pane_ParamLimits

0xbb11,	// (0x0003cf01) main_cset6_listscroll_pane

0xbb3a,	// (0x0003cf2a) main_cset6_slider_pane_ParamLimits

0xbb3a,	// (0x0003cf2a) main_cset6_slider_pane

0xbb46,	// (0x0003cf36) main_cset6_text2_pane_ParamLimits

0xbb46,	// (0x0003cf36) main_cset6_text2_pane

0x26f0,	// (0x00033ae0) main_cset6_text_pane

0x1e0e,	// (0x000331fe) main_cset_list_pane_copy1_ParamLimits

0x1e0e,	// (0x000331fe) main_cset_list_pane_copy1

0x1e1e,	// (0x0003320e) scroll_pane_cp028_copy1

0xbb59,	// (0x0003cf49) cset_list_set_pane_copy1

0xb058,	// (0x0003c448) aid_position_infowindow_above_copy1

0xb060,	// (0x0003c450) aid_position_infowindow_below_copy1

0x5117,	// (0x00036507) cset_list_set_pane_g1_copy1

0x511f,	// (0x0003650f) cset_list_set_pane_g3_copy1_ParamLimits

0x511f,	// (0x0003650f) cset_list_set_pane_g3_copy1

0x512e,	// (0x0003651e) cset_list_set_pane_t1_copy1_ParamLimits

0x512e,	// (0x0003651e) cset_list_set_pane_t1_copy1

0xf08e,	// (0x0004047e) list_highlight_pane_cp021_copy1_ParamLimits

0xf08e,	// (0x0004047e) list_highlight_pane_cp021_copy1

0x26f8,	// (0x00033ae8) cset6_slider_pane_ParamLimits

0x26f8,	// (0x00033ae8) cset6_slider_pane

0x2724,	// (0x00033b14) main_cset6_slider_pane_g1_ParamLimits

0x2724,	// (0x00033b14) main_cset6_slider_pane_g1

0xbb68,	// (0x0003cf58) main_cset6_slider_pane_g2_ParamLimits

0xbb68,	// (0x0003cf58) main_cset6_slider_pane_g2

0x1e33,	// (0x00033223) main_cset6_slider_pane_g3_ParamLimits

0x1e33,	// (0x00033223) main_cset6_slider_pane_g3

0xbb90,	// (0x0003cf80) main_cset6_slider_pane_g4_ParamLimits

0xbb90,	// (0x0003cf80) main_cset6_slider_pane_g4

0xbb9c,	// (0x0003cf8c) main_cset6_slider_pane_g5_ParamLimits

0xbb9c,	// (0x0003cf8c) main_cset6_slider_pane_g5

0x1e33,	// (0x00033223) main_cset6_slider_pane_g7_ParamLimits

0x1e33,	// (0x00033223) main_cset6_slider_pane_g7

0x1e3f,	// (0x0003322f) main_cset6_slider_pane_g8_ParamLimits

0x1e3f,	// (0x0003322f) main_cset6_slider_pane_g8

0xbba8,	// (0x0003cf98) main_cset6_slider_pane_g9_ParamLimits

0xbba8,	// (0x0003cf98) main_cset6_slider_pane_g9

0xbbb4,	// (0x0003cfa4) main_cset6_slider_pane_g10_ParamLimits

0xbbb4,	// (0x0003cfa4) main_cset6_slider_pane_g10

0xbb90,	// (0x0003cf80) main_cset6_slider_pane_g11_ParamLimits

0xbb90,	// (0x0003cf80) main_cset6_slider_pane_g11

0xbbc0,	// (0x0003cfb0) main_cset6_slider_pane_g12_ParamLimits

0xbbc0,	// (0x0003cfb0) main_cset6_slider_pane_g12

0xbbcc,	// (0x0003cfbc) main_cset6_slider_pane_g13_ParamLimits

0xbbcc,	// (0x0003cfbc) main_cset6_slider_pane_g13

0xbbd8,	// (0x0003cfc8) main_cset6_slider_pane_g14_ParamLimits

0xbbd8,	// (0x0003cfc8) main_cset6_slider_pane_g14

0xbbe4,	// (0x0003cfd4) main_cset6_slider_pane_g15_ParamLimits

0xbbe4,	// (0x0003cfd4) main_cset6_slider_pane_g15

0xbb9c,	// (0x0003cf8c) main_cset6_slider_pane_g16_ParamLimits

0xbb9c,	// (0x0003cf8c) main_cset6_slider_pane_g16

0xbbfc,	// (0x0003cfec) main_cset6_slider_pane_g17_ParamLimits

0xbbfc,	// (0x0003cfec) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x00040f95) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x00040f95) main_cset6_slider_pane_g

0x274c,	// (0x00033b3c) main_cset6_slider_pane_t1_ParamLimits

0x274c,	// (0x00033b3c) main_cset6_slider_pane_t1

0xbc08,	// (0x0003cff8) main_cset6_slider_pane_t2_ParamLimits

0xbc08,	// (0x0003cff8) main_cset6_slider_pane_t2

0x278d,	// (0x00033b7d) main_cset6_slider_pane_t3_ParamLimits

0x278d,	// (0x00033b7d) main_cset6_slider_pane_t3

0xbc33,	// (0x0003d023) main_cset6_slider_pane_t4_ParamLimits

0xbc33,	// (0x0003d023) main_cset6_slider_pane_t4

0x27b8,	// (0x00033ba8) main_cset6_slider_pane_t5_ParamLimits

0x27b8,	// (0x00033ba8) main_cset6_slider_pane_t5

0x27e3,	// (0x00033bd3) main_cset6_slider_pane_t7_ParamLimits

0x27e3,	// (0x00033bd3) main_cset6_slider_pane_t7

0xbc5e,	// (0x0003d04e) main_cset6_slider_pane_t8_ParamLimits

0xbc5e,	// (0x0003d04e) main_cset6_slider_pane_t8

0xbc82,	// (0x0003d072) main_cset6_slider_pane_t9_ParamLimits

0xbc82,	// (0x0003d072) main_cset6_slider_pane_t9

0xbca6,	// (0x0003d096) main_cset6_slider_pane_t10_ParamLimits

0xbca6,	// (0x0003d096) main_cset6_slider_pane_t10

0xbcca,	// (0x0003d0ba) main_cset6_slider_pane_t11_ParamLimits

0xbcca,	// (0x0003d0ba) main_cset6_slider_pane_t11

0x2819,	// (0x00033c09) main_cset6_slider_pane_t14_ParamLimits

0x2819,	// (0x00033c09) main_cset6_slider_pane_t14

0x2852,	// (0x00033c42) main_cset6_slider_pane_t15_ParamLimits

0x2852,	// (0x00033c42) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x00040fba) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x00040fba) main_cset6_slider_pane_t

0x288b,	// (0x00033c7b) cset_slider_pane_g1_copy1

0x2894,	// (0x00033c84) cset_slider_pane_g2_copy1

0x289d,	// (0x00033c8d) cset_slider_pane_g3_copy1

0xd102,	// (0x0003e4f2) bg_popup_sub_pane_cp011_copy1

0x2014,	// (0x00033404) main_cset_text_pane_g1_copy1

0x201c,	// (0x0003340c) main_cset_text_pane_t1_copy1

0x202a,	// (0x0003341a) main_cset_text_pane_t2_copy1

0x2038,	// (0x00033428) main_cset_text_pane_t3_copy1

0x2046,	// (0x00033436) main_cset_text_pane_t4_copy1

0x2054,	// (0x00033444) main_cset_text_pane_t5_copy1

0x2062,	// (0x00033452) main_cset_text_pane_t6_copy1

0x2070,	// (0x00033460) main_cset_text_pane_t7_copy1

0xbcee,	// (0x0003d0de) main_cset_text2_pane_t1_copy1

0xf08e,	// (0x0004047e) main_ncimui_pane

0x8a7d,	// (0x00039e6d) popup_query_ncimui_window_ParamLimits

0x8a7d,	// (0x00039e6d) popup_query_ncimui_window

0x4d0a,	// (0x000360fa) field_cale_ev2_pane_g4_ParamLimits

0x4d0a,	// (0x000360fa) field_cale_ev2_pane_g4

0xa1a9,	// (0x0003b599) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa1a9,	// (0x0003b599) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x00040c94) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x00040c94) cell_video_dialer_keypad_pane_g

0xa1c1,	// (0x0003b5b1) cell_video_dialer_keypad_pane_t1

0xd102,	// (0x0003e4f2) bg_popup_window_pane_cp012

0xe136,	// (0x0003f526) heading_pane_cp06

0x28d0,	// (0x00033cc0) ncim_query_content_pane

0xd102,	// (0x0003e4f2) bg_popup_heading_pane_cp01

0x28d8,	// (0x00033cc8) ncim_heading_pane_t1

0x28e6,	// (0x00033cd6) ncim_indicator_popup_pane

0x28f8,	// (0x00033ce8) ncim_query_button_pane

0x290c,	// (0x00033cfc) ncim_query_content_pane_t1

0x291e,	// (0x00033d0e) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x00040ffe) ncim_query_content_pane_t

0x2958,	// (0x00033d48) ncim_query_list_pane

0x296a,	// (0x00033d5a) ncim_query_popup_pane

0x28e6,	// (0x00033cd6) ncim_indicator_popup_pane_ParamLimits

0xbe2f,	// (0x0003d21f) ncim_query_content_pane_g1_ParamLimits

0xbe2f,	// (0x0003d21f) ncim_query_content_pane_g1

0x290c,	// (0x00033cfc) ncim_query_content_pane_t1_ParamLimits

0x291e,	// (0x00033d0e) ncim_query_content_pane_t2_ParamLimits

0xbe3b,	// (0x0003d22b) ncim_query_content_pane_t3_ParamLimits

0xbe3b,	// (0x0003d22b) ncim_query_content_pane_t3

0xbe58,	// (0x0003d248) ncim_query_content_pane_t4_ParamLimits

0xbe58,	// (0x0003d248) ncim_query_content_pane_t4

0xbe75,	// (0x0003d265) ncim_query_content_pane_t5_ParamLimits

0xbe75,	// (0x0003d265) ncim_query_content_pane_t5

0x2930,	// (0x00033d20) ncim_query_content_pane_t6_ParamLimits

0x2930,	// (0x00033d20) ncim_query_content_pane_t6

0xfc0e,	// (0x00040ffe) ncim_query_content_pane_t_ParamLimits

0x2958,	// (0x00033d48) ncim_query_list_pane_ParamLimits

0x296a,	// (0x00033d5a) ncim_query_popup_pane_ParamLimits

0x297e,	// (0x00033d6e) wait_bar_pane_cp04

0xd102,	// (0x0003e4f2) input_focus_pane_cp011

0x2986,	// (0x00033d76) ncim_query_popup_pane_t1

0x2994,	// (0x00033d84) ncim_list_query_list_pane_ParamLimits

0x2994,	// (0x00033d84) ncim_list_query_list_pane

0xd102,	// (0x0003e4f2) bg_button_pane_cp027

0x29a7,	// (0x00033d97) ncim_query_button_pane_g1

0xd102,	// (0x0003e4f2) list_highlight_pane_cp012

0x29b1,	// (0x00033da1) ncim_list_query_list_pane_g1

0x29b9,	// (0x00033da9) ncim_list_query_list_pane_t1

0xa84a,	// (0x0003bc3a) cam4_indicators_pane_g3_ParamLimits

0xa84a,	// (0x0003bc3a) cam4_indicators_pane_g3

0xa8fb,	// (0x0003bceb) vid4_indicators_pane_g5_ParamLimits

0xa8fb,	// (0x0003bceb) vid4_indicators_pane_g5

0xdf72,	// (0x0003f362) vid4_progress_pane_g5_ParamLimits

0xdf72,	// (0x0003f362) vid4_progress_pane_g5

0xbd1f,	// (0x0003d10f) main_ncimui_pane_g1

0xbd85,	// (0x0003d175) ncimui_group_query_pane_ParamLimits

0xbd85,	// (0x0003d175) ncimui_group_query_pane

0xbdcd,	// (0x0003d1bd) ncimui_list_pane_ParamLimits

0xbdcd,	// (0x0003d1bd) ncimui_list_pane

0xbdf2,	// (0x0003d1e2) ncimui_text_pane_ParamLimits

0xbdf2,	// (0x0003d1e2) ncimui_text_pane

0xbe92,	// (0x0003d282) ncimui_text_pane_t1_ParamLimits

0xbe92,	// (0x0003d282) ncimui_text_pane_t1

0x29d0,	// (0x00033dc0) ncimui_list_single_graphic_pane_ParamLimits

0x29d0,	// (0x00033dc0) ncimui_list_single_graphic_pane

0xbeb0,	// (0x0003d2a0) ncimui_query_pane_ParamLimits

0xbeb0,	// (0x0003d2a0) ncimui_query_pane

0xd102,	// (0x0003e4f2) list_highlight_pane_cp013

0x29e0,	// (0x00033dd0) ncim_list_query_list_pane_t1_copy1

0x29ee,	// (0x00033dde) ncim_list_single_graphic_pane_g1

0x29f6,	// (0x00033de6) ncim_query_button_pane_cp01

0x2a02,	// (0x00033df2) ncim_query_entry_pane_ParamLimits

0x2a02,	// (0x00033df2) ncim_query_entry_pane

0x2a15,	// (0x00033e05) ncimui_query_pane_g1

0x2a21,	// (0x00033e11) ncimui_query_pane_t1_ParamLimits

0x2a21,	// (0x00033e11) ncimui_query_pane_t1

0xf08e,	// (0x0004047e) input_focus_pane_cp012

0x2a3a,	// (0x00033e2a) ncim_query_entry_pane_t1

0xd841,	// (0x0003ec31) main_im_pane_ParamLimits

0xf08e,	// (0x0004047e) main_mobtv_pane_ParamLimits

0xf08e,	// (0x0004047e) main_mobtv_pane

0xbba8,	// (0x0003cf98) main_cset6_slider_pane_g18_ParamLimits

0xbba8,	// (0x0003cf98) main_cset6_slider_pane_g18

0xbbcc,	// (0x0003cfbc) main_cset6_slider_pane_g19_ParamLimits

0xbbcc,	// (0x0003cfbc) main_cset6_slider_pane_g19

0x1cb5,	// (0x000330a5) bg_main_mobtv_pane_ParamLimits

0x1cb5,	// (0x000330a5) bg_main_mobtv_pane

0xbec0,	// (0x0003d2b0) main_mobtv_info_pane

0xbec9,	// (0x0003d2b9) main_mobtv_loading_pane_ParamLimits

0xbec9,	// (0x0003d2b9) main_mobtv_loading_pane

0x2a5a,	// (0x00033e4a) main_mobtv_pg_channel_list_pane

0x2a64,	// (0x00033e54) main_mobtv_pg_hdr_pane

0xbed6,	// (0x0003d2c6) main_mobtv_programe_curr_pane_ParamLimits

0xbed6,	// (0x0003d2c6) main_mobtv_programe_curr_pane

0xbee3,	// (0x0003d2d3) main_mobtv_programe_next_pane_ParamLimits

0xbee3,	// (0x0003d2d3) main_mobtv_programe_next_pane

0x2a6d,	// (0x00033e5d) popup_mobtv_noti_window

0x0eea,	// (0x000322da) main_tv_pg_hdr_pane_g1

0x2a75,	// (0x00033e65) main_tv_pg_hdr_pane_g2

0x2a7d,	// (0x00033e6d) main_tv_pg_hdr_pane_g3

0x2a85,	// (0x00033e75) main_tv_pg_hdr_pane_g4

0x2a8d,	// (0x00033e7d) main_tv_pg_hdr_pane_g5

0x2a95,	// (0x00033e85) main_tv_pg_hdr_pane_g6

0x2a9d,	// (0x00033e8d) main_tv_pg_hdr_pane_g7

0x2aa5,	// (0x00033e95) main_tv_pg_hdr_pane_g8

0x2aad,	// (0x00033e9d) main_tv_pg_hdr_pane_g9

0x2ab5,	// (0x00033ea5) main_tv_pg_hdr_pane_g10

0x2abf,	// (0x00033eaf) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0004100b) main_tv_pg_hdr_pane_g

0x2ac9,	// (0x00033eb9) main_tv_pg_hdr_pane_t1

0x2ad7,	// (0x00033ec7) main_tv_pg_hdr_pane_t2

0x2ae5,	// (0x00033ed5) main_tv_pg_hdr_pane_t3

0x2af3,	// (0x00033ee3) main_tv_pg_hdr_pane_t4

0x2b01,	// (0x00033ef1) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x00041022) main_tv_pg_hdr_pane_t

0x2b0f,	// (0x00033eff) single_mobtv_pg_channel_pane_ParamLimits

0x2b0f,	// (0x00033eff) single_mobtv_pg_channel_pane

0x2b21,	// (0x00033f11) single_mobtv_pg_channel_table_pane

0x2b2a,	// (0x00033f1a) single_mobtv_pg_channel_thumb_pane

0x2b33,	// (0x00033f23) single_tv_pg_channel_pane_g1

0x2b3c,	// (0x00033f2c) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0004102d) single_tv_pg_channel_pane_g

0x1119,	// (0x00032509) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1119,	// (0x00032509) bg_single_mobtv_pg_channel_thumb_pane

0x2b45,	// (0x00033f35) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2b45,	// (0x00033f35) single_mobtv_pg_channel_thumb_pane_g1

0x2b53,	// (0x00033f43) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2b53,	// (0x00033f43) single_mobtv_pg_channel_thumb_pane_g2

0x2b5f,	// (0x00033f4f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2b5f,	// (0x00033f4f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x00041032) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x00041032) single_mobtv_pg_channel_thumb_pane_g

0x2b6b,	// (0x00033f5b) single_mobtv_pg_channel_thumb_pane_t1

0x2b79,	// (0x00033f69) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00041039) single_mobtv_pg_channel_thumb_pane_t

0x0eea,	// (0x000322da) bg_single_mobtv_pg_channel_table_pane_g1

0x0eea,	// (0x000322da) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x00040adb) bg_single_mobtv_pg_channel_table_pane_g

0x2b87,	// (0x00033f77) single_mobtv_pg_channel_table_pane_t1

0x2b95,	// (0x00033f85) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0004103e) single_mobtv_pg_channel_table_pane_t

0xbef8,	// (0x0003d2e8) main_mobtv_info_pane_g1_ParamLimits

0xbef8,	// (0x0003d2e8) main_mobtv_info_pane_g1

0xbf14,	// (0x0003d304) main_mobtv_info_pane_t1_ParamLimits

0xbf14,	// (0x0003d304) main_mobtv_info_pane_t1

0xbf7a,	// (0x0003d36a) main_mobtv_info_pane_t2_ParamLimits

0xbf7a,	// (0x0003d36a) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00041048) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00041048) main_mobtv_info_pane_t

0xbffd,	// (0x0003d3ed) wait_bar_pane_cp05

0xc00d,	// (0x0003d3fd) main_mobtv_loading_pane_g1_ParamLimits

0xc00d,	// (0x0003d3fd) main_mobtv_loading_pane_g1

0xc019,	// (0x0003d409) main_mobtv_loading_pane_g2_ParamLimits

0xc019,	// (0x0003d409) main_mobtv_loading_pane_g2

0xc025,	// (0x0003d415) main_mobtv_loading_pane_g3_ParamLimits

0xc025,	// (0x0003d415) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0004104f) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0004104f) main_mobtv_loading_pane_g

0x2ba3,	// (0x00033f93) main_mobtv_loading_pane_t1_ParamLimits

0x2ba3,	// (0x00033f93) main_mobtv_loading_pane_t1

0x2bbb,	// (0x00033fab) main_mobtv_loading_pane_t2_ParamLimits

0x2bbb,	// (0x00033fab) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x00041056) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x00041056) main_mobtv_loading_pane_t

0xc031,	// (0x0003d421) wait_bar_pane_cp06_ParamLimits

0xc031,	// (0x0003d421) wait_bar_pane_cp06

0x2bdf,	// (0x00033fcf) main_mobtv_programe_curr_pane_t1

0x2bed,	// (0x00033fdd) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0004105b) main_mobtv_programe_curr_pane_t

0x2bfb,	// (0x00033feb) main_mobtv_programe_next_pane_t1

0x2c09,	// (0x00033ff9) main_mobtv_programe_next_pane_t2

0x2c17,	// (0x00034007) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x00041060) main_mobtv_programe_next_pane_t

0xd102,	// (0x0003e4f2) bg_popup_mobtv_noti_window_pane

0x2c25,	// (0x00034015) popup_mobtv_noti_window_g1

0x2c2d,	// (0x0003401d) popup_mobtv_noti_window_t1

0x2c3b,	// (0x0003402b) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x00041067) popup_mobtv_noti_window_t

0x0eea,	// (0x000322da) bg_popup_mobtv_noti_window_pane_g1

0xd102,	// (0x0003e4f2) sc_clock_pane

0xd102,	// (0x0003e4f2) main_fs_bigclock_pane

0xb84a,	// (0x0003cc3a) blid2_tripm_pane_t4_ParamLimits

0xb84a,	// (0x0003cc3a) blid2_tripm_pane_t4

0xc03d,	// (0x0003d42d) sc_clock_pane_g1_ParamLimits

0xc03d,	// (0x0003d42d) sc_clock_pane_g1

0xc04b,	// (0x0003d43b) sc_clock_pane_t1_ParamLimits

0xc04b,	// (0x0003d43b) sc_clock_pane_t1

0xc05e,	// (0x0003d44e) sc_clock_pane_t2_ParamLimits

0xc05e,	// (0x0003d44e) sc_clock_pane_t2

0xc070,	// (0x0003d460) sc_clock_pane_t3_ParamLimits

0xc070,	// (0x0003d460) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0004106c) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0004106c) sc_clock_pane_t

0xc85a,	// (0x0003dc4a) main_fs_bigclock_indicator_pane_ParamLimits

0xc85a,	// (0x0003dc4a) main_fs_bigclock_indicator_pane

0xc0eb,	// (0x0003d4db) main_fs_bigclock_pane_g1_ParamLimits

0xc0eb,	// (0x0003d4db) main_fs_bigclock_pane_g1

0xc866,	// (0x0003dc56) main_fs_bigclock_pane_t1_ParamLimits

0xc866,	// (0x0003dc56) main_fs_bigclock_pane_t1

0xc878,	// (0x0003dc68) main_fs_bigclock_pane_t2_ParamLimits

0xc878,	// (0x0003dc68) main_fs_bigclock_pane_t2

0xc88a,	// (0x0003dc7a) main_fs_bigclock_pane_t3_ParamLimits

0xc88a,	// (0x0003dc7a) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x00041276) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x00041276) main_fs_bigclock_pane_t

0x36d3,	// (0x00034ac3) main_fs_bigclock_indicator_pane_g1

0x2900,	// (0x00033cf0) ncim_query_content_pane_g2_ParamLimits

0x2900,	// (0x00033cf0) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00040ff9) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00040ff9) ncim_query_content_pane_g

0xc082,	// (0x0003d472) sc_clock_pane_t4_ParamLimits

0xc082,	// (0x0003d472) sc_clock_pane_t4

0xf08e,	// (0x0004047e) main_radioblah_pane

0xa6f7,	// (0x0003bae7) cell_call4_button_pane_t1_copy1_ParamLimits

0xa6f7,	// (0x0003bae7) cell_call4_button_pane_t1_copy1

0xbd37,	// (0x0003d127) main_ncimui_pane_t1_ParamLimits

0xbd37,	// (0x0003d127) main_ncimui_pane_t1

0xbd51,	// (0x0003d141) main_ncimui_pane_t2_ParamLimits

0xbd51,	// (0x0003d141) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x00040ff2) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x00040ff2) main_ncimui_pane_t

0x2d7c,	// (0x0003416c) main_radioblah_anim_pane_ParamLimits

0x2d7c,	// (0x0003416c) main_radioblah_anim_pane

0x2d8d,	// (0x0003417d) main_radioblah_info_pane_ParamLimits

0x2d8d,	// (0x0003417d) main_radioblah_info_pane

0x2da1,	// (0x00034191) main_radioblah_pane_t1_ParamLimits

0x2da1,	// (0x00034191) main_radioblah_pane_t1

0x2dbd,	// (0x000341ad) main_radioblah_pane_t2_ParamLimits

0x2dbd,	// (0x000341ad) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0004108d) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0004108d) main_radioblah_pane_t

0xc133,	// (0x0003d523) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc133,	// (0x0003d523) main_radioblah_rocker_ctrl_pane

0x2e05,	// (0x000341f5) main_radioblah_info_pane_t1_ParamLimits

0x2e05,	// (0x000341f5) main_radioblah_info_pane_t1

0xc178,	// (0x0003d568) main_radioblah_info_pane_t2_ParamLimits

0xc178,	// (0x0003d568) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x00041096) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x00041096) main_radioblah_info_pane_t

0x0eea,	// (0x000322da) main_radioblah_rocker_ctrl_pane_g1

0xc220,	// (0x0003d610) main_radioblah_rocker_ctrl_pane_g2

0xc228,	// (0x0003d618) main_radioblah_rocker_ctrl_pane_g3

0xc230,	// (0x0003d620) main_radioblah_rocker_ctrl_pane_g4

0xc238,	// (0x0003d628) main_radioblah_rocker_ctrl_pane_g5

0xc240,	// (0x0003d630) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0004109f) main_radioblah_rocker_ctrl_pane_g

0xbcee,	// (0x0003d0de) main_cset_text2_pane_t1_copy1_ParamLimits

0xa77a,	// (0x0003bb6a) cam4_image_uncrop_qvga_pane

0xa88e,	// (0x0003bc7e) vid4_image_uncrop_qcif_pane

0xb9c8,	// (0x0003cdb8) cam6_image_uncrop_qvga_pane_ParamLimits

0xb9c8,	// (0x0003cdb8) cam6_image_uncrop_qvga_pane

0x25d6,	// (0x000339c6) vid6_image_uncrop_qcif_pane_ParamLimits

0x25d6,	// (0x000339c6) vid6_image_uncrop_qcif_pane

0xd102,	// (0x0003e4f2) bg_popup_preview_window_pane_cp03

0x28a6,	// (0x00033c96) list_cset_text2_pane

0x28ae,	// (0x00033c9e) main_cset6_text2_pane_g1

0x28b6,	// (0x00033ca6) main_cset6_text2_pane_t1

0x3a85,	// (0x00034e75) list_cset_text2_pane_t1_ParamLimits

0x3a85,	// (0x00034e75) list_cset_text2_pane_t1

0xf08e,	// (0x0004047e) main_radioblah_pane_ParamLimits

0xbfeb,	// (0x0003d3db) main_mobtv_info_pane_t3_ParamLimits

0xbfeb,	// (0x0003d3db) main_mobtv_info_pane_t3

0xc121,	// (0x0003d511) main_radioblah_pane_g1

0xc14c,	// (0x0003d53c) main_radioblah_info_pane_g1

0xc1c7,	// (0x0003d5b7) main_radioblah_info_pane_t3_ParamLimits

0xc1c7,	// (0x0003d5b7) main_radioblah_info_pane_t3

0x7a9b,	// (0x00038e8b) highlight_cell_cale_month_pane_ParamLimits

0x7a9b,	// (0x00038e8b) highlight_cell_cale_month_pane

0xd102,	// (0x0003e4f2) main_phob_fisheye_pane

0x1269,	// (0x00032659) scroll_pane_cp0031_ParamLimits

0x1269,	// (0x00032659) scroll_pane_cp0031

0x26e0,	// (0x00033ad0) wait_bar_pane_cp08_ParamLimits

0xbb59,	// (0x0003cf49) cset_list_set_pane_copy1_ParamLimits

0x2e3f,	// (0x0003422f) highlight_cell_cale_month_pane_g1

0xc248,	// (0x0003d638) highlight_cell_cale_month_pane_t1

0x2e47,	// (0x00034237) list_gen_pane_cp01

0x1e1e,	// (0x0003320e) scroll_pane_01

0xf0b1,	// (0x000404a1) list_single_double_fisheye_pane

0x5214,	// (0x00036604) list_double_fisheye_pane_g1_ParamLimits

0x5214,	// (0x00036604) list_double_fisheye_pane_g1

0x5220,	// (0x00036610) list_double_fisheye_pane_g2_ParamLimits

0x5220,	// (0x00036610) list_double_fisheye_pane_g2

0xf0ba,	// (0x000404aa) list_double_fisheye_pane_g3_ParamLimits

0xf0ba,	// (0x000404aa) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x000410ac) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x000410ac) list_double_fisheye_pane_g

0x5251,	// (0x00036641) list_double_fisheye_pane_t1_ParamLimits

0x5251,	// (0x00036641) list_double_fisheye_pane_t1

0x526c,	// (0x0003665c) list_double_fisheye_pane_t2_ParamLimits

0x526c,	// (0x0003665c) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x000410b7) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x000410b7) list_double_fisheye_pane_t

0xd102,	// (0x0003e4f2) main_call5_pane

0xc0a8,	// (0x0003d498) sc_swipe_pane_ParamLimits

0xc0a8,	// (0x0003d498) sc_swipe_pane

0xc262,	// (0x0003d652) call5_image_pane_ParamLimits

0xc262,	// (0x0003d652) call5_image_pane

0xc26e,	// (0x0003d65e) call5_swipe_1_pane_ParamLimits

0xc26e,	// (0x0003d65e) call5_swipe_1_pane

0xc27a,	// (0x0003d66a) call5_swipe_2_pane_ParamLimits

0xc27a,	// (0x0003d66a) call5_swipe_2_pane

0xc292,	// (0x0003d682) popup_call5_audio_first_window_ParamLimits

0xc292,	// (0x0003d682) popup_call5_audio_first_window

0x1119,	// (0x00032509) call5_swipe_1_pane_g1_ParamLimits

0x1119,	// (0x00032509) call5_swipe_1_pane_g1

0x2e50,	// (0x00034240) call5_swipe_1_pane_g2_ParamLimits

0x2e50,	// (0x00034240) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x000410bc) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x000410bc) call5_swipe_1_pane_g

0x2e5c,	// (0x0003424c) call5_swipe_1_pane_t1_ParamLimits

0x2e5c,	// (0x0003424c) call5_swipe_1_pane_t1

0x1119,	// (0x00032509) call5_swipe_2_pane_g1_ParamLimits

0x1119,	// (0x00032509) call5_swipe_2_pane_g1

0x2e71,	// (0x00034261) call5_swipe_2_pane_g2_ParamLimits

0x2e71,	// (0x00034261) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x000410c1) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x000410c1) call5_swipe_2_pane_g

0x2e7d,	// (0x0003426d) call5_swipe_2_pane_t1_ParamLimits

0x2e7d,	// (0x0003426d) call5_swipe_2_pane_t1

0x2e92,	// (0x00034282) sc_swipe_pane_g1_ParamLimits

0x2e92,	// (0x00034282) sc_swipe_pane_g1

0x2e9f,	// (0x0003428f) sc_swipe_pane_g2_ParamLimits

0x2e9f,	// (0x0003428f) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x000410c6) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x000410c6) sc_swipe_pane_g

0x2eab,	// (0x0003429b) sc_swipe_pane_t1_ParamLimits

0x2eab,	// (0x0003429b) sc_swipe_pane_t1

0xd102,	// (0x0003e4f2) main_cmail_launcher_pane

0xc29e,	// (0x0003d68e) aid_size_cell_cmail_l_ParamLimits

0xc29e,	// (0x0003d68e) aid_size_cell_cmail_l

0xc2ae,	// (0x0003d69e) grid_cmail_l_pane_ParamLimits

0xc2ae,	// (0x0003d69e) grid_cmail_l_pane

0xc2ba,	// (0x0003d6aa) cell_cmail_l_pane_ParamLimits

0xc2ba,	// (0x0003d6aa) cell_cmail_l_pane

0xc2cc,	// (0x0003d6bc) cell_cmail_l_pane_g1_ParamLimits

0xc2cc,	// (0x0003d6bc) cell_cmail_l_pane_g1

0xc2dc,	// (0x0003d6cc) cell_cmail_l_pane_t1_ParamLimits

0xc2dc,	// (0x0003d6cc) cell_cmail_l_pane_t1

0xc2f2,	// (0x0003d6e2) cell_cmail_l_pane_t2_ParamLimits

0xc2f2,	// (0x0003d6e2) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x000410cb) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x000410cb) cell_cmail_l_pane_t

0xf08e,	// (0x0004047e) grid_highlight_pane_cp018_ParamLimits

0xf08e,	// (0x0004047e) grid_highlight_pane_cp018

0x5da7,	// (0x00037197) main2_pane_ParamLimits

0x5da7,	// (0x00037197) main2_pane

0xd8ec,	// (0x0003ecdc) popup_sp_fs_action_menu_bg_pane_g1

0xd8f4,	// (0x0003ece4) popup_sp_fs_action_menu_bg_pane_g2

0xd8fc,	// (0x0003ecec) popup_sp_fs_action_menu_bg_pane_g3

0xd904,	// (0x0003ecf4) popup_sp_fs_action_menu_bg_pane_g4

0xd90c,	// (0x0003ecfc) popup_sp_fs_action_menu_bg_pane_g5

0xd914,	// (0x0003ed04) popup_sp_fs_action_menu_bg_pane_g6

0xd91c,	// (0x0003ed0c) popup_sp_fs_action_menu_bg_pane_g7

0xd924,	// (0x0003ed14) popup_sp_fs_action_menu_bg_pane_g8

0xd92c,	// (0x0003ed1c) popup_sp_fs_action_menu_bg_pane_g9

0xd934,	// (0x0003ed24) popup_sp_fs_action_menu_bg_pane_g10

0xd934,	// (0x0003ed24) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x00040576) popup_sp_fs_action_menu_bg_pane_g

0x49f5,	// (0x00035de5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x49f5,	// (0x00035de5) list_medium_line_x2_t3_g3_g1

0x4a01,	// (0x00035df1) list_medium_line_x2_t3_g3_g2_ParamLimits

0x4a01,	// (0x00035df1) list_medium_line_x2_t3_g3_g2

0x4a0d,	// (0x00035dfd) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4a0d,	// (0x00035dfd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x00040624) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x00040624) list_medium_line_x2_t3_g3_g

0x4a19,	// (0x00035e09) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4a19,	// (0x00035e09) list_medium_line_x2_t3_g3_t1

0x4a2e,	// (0x00035e1e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4a2e,	// (0x00035e1e) list_medium_line_x2_t3_g3_t2

0x4a40,	// (0x00035e30) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4a40,	// (0x00035e30) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0004062b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0004062b) list_medium_line_x2_t3_g3_t

0x49f5,	// (0x00035de5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x49f5,	// (0x00035de5) list_medium_line_x2_t3_g2_g1

0x4a0d,	// (0x00035dfd) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4a0d,	// (0x00035dfd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x00040632) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x00040632) list_medium_line_x2_t3_g2_g

0x4a55,	// (0x00035e45) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4a55,	// (0x00035e45) list_medium_line_x2_t3_g2_t1

0x4a6b,	// (0x00035e5b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4a6b,	// (0x00035e5b) list_medium_line_x2_t3_g2_t2

0x4a40,	// (0x00035e30) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4a40,	// (0x00035e30) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x00040637) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x00040637) list_medium_line_x2_t3_g2_t

0x49f5,	// (0x00035de5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x49f5,	// (0x00035de5) list_medium_line_x2_t4_g4_g1

0x4a7d,	// (0x00035e6d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x4a7d,	// (0x00035e6d) list_medium_line_x2_t4_g4_g2

0x4a01,	// (0x00035df1) list_medium_line_x2_t4_g4_g3_ParamLimits

0x4a01,	// (0x00035df1) list_medium_line_x2_t4_g4_g3

0x4a89,	// (0x00035e79) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4a89,	// (0x00035e79) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0004063e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0004063e) list_medium_line_x2_t4_g4_g

0x4a95,	// (0x00035e85) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4a95,	// (0x00035e85) list_medium_line_x2_t4_g4_t1

0x4aac,	// (0x00035e9c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4aac,	// (0x00035e9c) list_medium_line_x2_t4_g4_t2

0x4ac1,	// (0x00035eb1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x4ac1,	// (0x00035eb1) list_medium_line_x2_t4_g4_t3

0x4ad3,	// (0x00035ec3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4ad3,	// (0x00035ec3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x00040647) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x00040647) list_medium_line_x2_t4_g4_t

0x49f5,	// (0x00035de5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x49f5,	// (0x00035de5) list_medium_line_x2_t2_g4_g1

0x4a7d,	// (0x00035e6d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x4a7d,	// (0x00035e6d) list_medium_line_x2_t2_g4_g2

0x4a01,	// (0x00035df1) list_medium_line_x2_t2_g4_g3_ParamLimits

0x4a01,	// (0x00035df1) list_medium_line_x2_t2_g4_g3

0x4a0d,	// (0x00035dfd) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4a0d,	// (0x00035dfd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x000406ae) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x000406ae) list_medium_line_x2_t2_g4_g

0x4ae5,	// (0x00035ed5) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4ae5,	// (0x00035ed5) list_medium_line_x2_t2_g4_t1

0x4a40,	// (0x00035e30) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4a40,	// (0x00035e30) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x000406b7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x000406b7) list_medium_line_x2_t2_g4_t

0x49f5,	// (0x00035de5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x49f5,	// (0x00035de5) list_medium_line_x2_t2_g3_g1

0x4a01,	// (0x00035df1) list_medium_line_x2_t2_g3_g2_ParamLimits

0x4a01,	// (0x00035df1) list_medium_line_x2_t2_g3_g2

0x4a0d,	// (0x00035dfd) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4a0d,	// (0x00035dfd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x00040624) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x00040624) list_medium_line_x2_t2_g3_g

0x4afa,	// (0x00035eea) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4afa,	// (0x00035eea) list_medium_line_x2_t2_g3_t1

0x4a40,	// (0x00035e30) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4a40,	// (0x00035e30) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x000406bc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x000406bc) list_medium_line_x2_t2_g3_t

0x7c2d,	// (0x0003901d) main_sp_fs_list_pane_ParamLimits

0x7c2d,	// (0x0003901d) main_sp_fs_list_pane

0x7c3a,	// (0x0003902a) sp_fs_scroll_pane_ParamLimits

0x7c3a,	// (0x0003902a) sp_fs_scroll_pane

0x4b0f,	// (0x00035eff) list_medium_line_x2_t3_t1

0x4b1f,	// (0x00035f0f) list_medium_line_x2_t3_t2

0x4b2d,	// (0x00035f1d) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x00040707) list_medium_line_x2_t3_t

0x4b3b,	// (0x00035f2b) list_medium_line_x3_t4_t1

0x4b4b,	// (0x00035f3b) list_medium_line_x3_t4_t2

0x4b59,	// (0x00035f49) list_medium_line_x3_t4_t3

0x4b67,	// (0x00035f57) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0004070e) list_medium_line_x3_t4_t

0x4b75,	// (0x00035f65) list_medium_line_x4_t5_t1

0x4b85,	// (0x00035f75) list_medium_line_x4_t5_t2

0x4b59,	// (0x00035f49) list_medium_line_x4_t5_t3

0x4b93,	// (0x00035f83) list_medium_line_x4_t5_t4

0x4b67,	// (0x00035f57) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x00040717) list_medium_line_x4_t5_t

0x49f5,	// (0x00035de5) list_medium_line_t4_g4_g1_ParamLimits

0x49f5,	// (0x00035de5) list_medium_line_t4_g4_g1

0x4a89,	// (0x00035e79) list_medium_line_t4_g4_g2_ParamLimits

0x4a89,	// (0x00035e79) list_medium_line_t4_g4_g2

0x4ba1,	// (0x00035f91) list_medium_line_t4_g4_g3_ParamLimits

0x4ba1,	// (0x00035f91) list_medium_line_t4_g4_g3

0x4a0d,	// (0x00035dfd) list_medium_line_t4_g4_g4_ParamLimits

0x4a0d,	// (0x00035dfd) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x00040722) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x00040722) list_medium_line_t4_g4_g

0x4bad,	// (0x00035f9d) list_medium_line_t4_g4_t1_ParamLimits

0x4bad,	// (0x00035f9d) list_medium_line_t4_g4_t1

0x4bc2,	// (0x00035fb2) list_medium_line_t4_g4_t2_ParamLimits

0x4bc2,	// (0x00035fb2) list_medium_line_t4_g4_t2

0x4bd8,	// (0x00035fc8) list_medium_line_t4_g4_t3_ParamLimits

0x4bd8,	// (0x00035fc8) list_medium_line_t4_g4_t3

0x4bee,	// (0x00035fde) list_medium_line_t4_g4_t4_ParamLimits

0x4bee,	// (0x00035fde) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0004072b) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0004072b) list_medium_line_t4_g4_t

0x7d55,	// (0x00039145) chi_dic_find_pane_g1

0x8a40,	// (0x00039e30) main_tport_pane

0x4e85,	// (0x00036275) list_medium_line_plain_t1

0x4e93,	// (0x00036283) list_medium_line_t2_g2_g1_ParamLimits

0x4e93,	// (0x00036283) list_medium_line_t2_g2_g1

0x4e9f,	// (0x0003628f) list_medium_line_t2_g2_g2_ParamLimits

0x4e9f,	// (0x0003628f) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x00040e03) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x00040e03) list_medium_line_t2_g2_g

0x4eab,	// (0x0003629b) list_medium_line_t2_g2_t1_ParamLimits

0x4eab,	// (0x0003629b) list_medium_line_t2_g2_t1

0x4ec5,	// (0x000362b5) list_medium_line_t2_g2_t2_ParamLimits

0x4ec5,	// (0x000362b5) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x00040e08) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x00040e08) list_medium_line_t2_g2_t

0x50d8,	// (0x000364c8) aid_sp_fs_list_icon_a_sm

0x50e0,	// (0x000364d0) aid_sp_fs_list_icon_d

0x50e8,	// (0x000364d8) aid_sp_fs_text_primary

0x50f1,	// (0x000364e1) aid_sp_fs_text_secondary

0x23d6,	// (0x000337c6) list_medium_line

0x23d6,	// (0x000337c6) list_medium_line_g2

0x23d6,	// (0x000337c6) list_medium_line_g3

0x23d6,	// (0x000337c6) list_medium_line_plain

0x23d6,	// (0x000337c6) list_medium_line_plain_t2

0x23d6,	// (0x000337c6) list_medium_line_plain_t3

0x23d6,	// (0x000337c6) list_medium_line_right_icon

0x23d6,	// (0x000337c6) list_medium_line_right_iconx2

0x23d6,	// (0x000337c6) list_medium_line_t2

0x23d6,	// (0x000337c6) list_medium_line_t2_g2

0x23d6,	// (0x000337c6) list_medium_line_t2_g3

0x23d6,	// (0x000337c6) list_medium_line_t2_right_icon

0x23d6,	// (0x000337c6) list_medium_line_t2_right_iconx2

0x23d6,	// (0x000337c6) list_medium_line_t3

0x23d6,	// (0x000337c6) list_medium_line_t3_g2

0x23d6,	// (0x000337c6) list_medium_line_t3_g3

0x23d6,	// (0x000337c6) list_medium_line_t3_right_iconx2

0xf0a8,	// (0x00040498) list_medium_line_t4_g4

0x239b,	// (0x0003378b) list_medium_line_x2

0x239b,	// (0x0003378b) list_medium_line_x2_t2_g2

0x239b,	// (0x0003378b) list_medium_line_x2_t2_g3

0x239b,	// (0x0003378b) list_medium_line_x2_t2_g4

0x239b,	// (0x0003378b) list_medium_line_x2_t3

0x239b,	// (0x0003378b) list_medium_line_x2_t3_g2

0x239b,	// (0x0003378b) list_medium_line_x2_t3_g3

0x239b,	// (0x0003378b) list_medium_line_x2_t3_g4

0x239b,	// (0x0003378b) list_medium_line_x2_t4_g2

0x239b,	// (0x0003378b) list_medium_line_x2_t4_g4

0x50fa,	// (0x000364ea) list_medium_line_x3

0x50fa,	// (0x000364ea) list_medium_line_x3_t4

0x50fa,	// (0x000364ea) list_medium_line_x3_t4_g4

0xf0a8,	// (0x00040498) list_medium_line_x4_t4

0xf0a8,	// (0x00040498) list_medium_line_x4_t4_g7

0xf0a8,	// (0x00040498) list_medium_line_x4_t5

0x5103,	// (0x000364f3) list_single_fs_dyc_pane_ParamLimits

0x5103,	// (0x000364f3) list_single_fs_dyc_pane

0x49f5,	// (0x00035de5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x49f5,	// (0x00035de5) list_medium_line_x4_t4_g7_g1

0x5143,	// (0x00036533) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5143,	// (0x00036533) list_medium_line_x4_t4_g7_g2

0x514f,	// (0x0003653f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x514f,	// (0x0003653f) list_medium_line_x4_t4_g7_g3

0x515e,	// (0x0003654e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x515e,	// (0x0003654e) list_medium_line_x4_t4_g7_g4

0x516a,	// (0x0003655a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x516a,	// (0x0003655a) list_medium_line_x4_t4_g7_g5

0x5179,	// (0x00036569) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5179,	// (0x00036569) list_medium_line_x4_t4_g7_g6

0x5188,	// (0x00036578) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5188,	// (0x00036578) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x00040fd3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x00040fd3) list_medium_line_x4_t4_g7_g

0x5194,	// (0x00036584) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5194,	// (0x00036584) list_medium_line_x4_t4_g7_t1

0x51a9,	// (0x00036599) list_medium_line_x4_t4_g7_t2_ParamLimits

0x51a9,	// (0x00036599) list_medium_line_x4_t4_g7_t2

0x51be,	// (0x000365ae) list_medium_line_x4_t4_g7_t3_ParamLimits

0x51be,	// (0x000365ae) list_medium_line_x4_t4_g7_t3

0x51d3,	// (0x000365c3) list_medium_line_x4_t4_g7_t4_ParamLimits

0x51d3,	// (0x000365c3) list_medium_line_x4_t4_g7_t4

0x51e5,	// (0x000365d5) list_medium_line_x4_t4_g7_t5_ParamLimits

0x51e5,	// (0x000365d5) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x00040fe2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x00040fe2) list_medium_line_x4_t4_g7_t

0x51f7,	// (0x000365e7) list_single_dyc_row_pane_ParamLimits

0x51f7,	// (0x000365e7) list_single_dyc_row_pane

0xc256,	// (0x0003d646) call5_gesture_pane_ParamLimits

0xc256,	// (0x0003d646) call5_gesture_pane

0xc286,	// (0x0003d676) call5_windows_pane_ParamLimits

0xc286,	// (0x0003d676) call5_windows_pane

0xc30a,	// (0x0003d6fa) call5_swipe_1_pane_cp_ParamLimits

0xc30a,	// (0x0003d6fa) call5_swipe_1_pane_cp

0xc316,	// (0x0003d706) call5_swipe_2_pane_cp_ParamLimits

0xc316,	// (0x0003d706) call5_swipe_2_pane_cp

0xda18,	// (0x0003ee08) call5_image_pane_cp

0xc322,	// (0x0003d712) popup_call5_audio_first_window_cp_ParamLimits

0xc322,	// (0x0003d712) popup_call5_audio_first_window_cp

0x2e92,	// (0x00034282) call5_swipe_1_pane_g1_cp_ParamLimits

0x2e92,	// (0x00034282) call5_swipe_1_pane_g1_cp

0x2ec0,	// (0x000342b0) call5_swipe_1_pane_g2_cp

0x2eab,	// (0x0003429b) call5_swipe_1_pane_t1_cp_ParamLimits

0x2eab,	// (0x0003429b) call5_swipe_1_pane_t1_cp

0x2e92,	// (0x00034282) call5_swipe_2_pane_g1_cp_ParamLimits

0x2e92,	// (0x00034282) call5_swipe_2_pane_g1_cp

0x2ec8,	// (0x000342b8) call5_swipe_2_pane_g2_cp

0x2ed0,	// (0x000342c0) call5_swipe_2_pane_t1_cp_ParamLimits

0x2ed0,	// (0x000342c0) call5_swipe_2_pane_t1_cp

0xf08e,	// (0x0004047e) main_sp_fs_email_pane

0x2ee5,	// (0x000342d5) main_sp_fs_listscroll_pane_te

0xc32e,	// (0x0003d71e) popup_sp_fs_action_menu_pane_ParamLimits

0xc32e,	// (0x0003d71e) popup_sp_fs_action_menu_pane

0x0eea,	// (0x000322da) bg_sp_fs_ctrlbar_pane_g1

0x14ea,	// (0x000328da) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x14fc,	// (0x000328ec) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x14f3,	// (0x000328e3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0eea,	// (0x000322da) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x000410d0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0cd7,	// (0x000320c7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0cd7,	// (0x000320c7) bg_sp_fs_ctrlbar_ddmenu_pane

0x2eee,	// (0x000342de) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2eee,	// (0x000342de) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2efa,	// (0x000342ea) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2efa,	// (0x000342ea) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x000410d9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x000410d9) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2f06,	// (0x000342f6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2f06,	// (0x000342f6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x528e,	// (0x0003667e) list_medium_line_t2_right_icon_g1

0x5296,	// (0x00036686) list_medium_line_t2_right_icon_t1

0x52a5,	// (0x00036695) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x000410de) list_medium_line_t2_right_icon_t

0x09d6,	// (0x00031dc6) bg_sp_fs_ctrlbar_pane_ParamLimits

0x09d6,	// (0x00031dc6) bg_sp_fs_ctrlbar_pane

0xc3b5,	// (0x0003d7a5) main_sp_fs_ctrlbar_button_pane_cp01

0xc3bd,	// (0x0003d7ad) main_sp_fs_ctrlbar_ddmenu_pane

0x2f70,	// (0x00034360) main_sp_fs_ctrlbar_pane_g1

0x2f7c,	// (0x0003436c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x000410e3) main_sp_fs_ctrlbar_pane_g

0x2f88,	// (0x00034378) main_sp_fs_ctrlbar_pane_t1

0xc3c7,	// (0x0003d7b7) main_sp_fs_ctrlbar_pane

0xc3db,	// (0x0003d7cb) main_sp_fs_listscroll_pane_te_cp01

0x52b3,	// (0x000366a3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x52b3,	// (0x000366a3) popup_sp_fs_action_menu_pane_cp01

0xf08e,	// (0x0004047e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf08e,	// (0x0004047e) bg_sp_fs_highlight_list_pane_cp01

0x52d3,	// (0x000366c3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x52d3,	// (0x000366c3) sp_fs_action_menu_list_gene_pane_g1

0x2fb8,	// (0x000343a8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2fb8,	// (0x000343a8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x000410ed) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x000410ed) sp_fs_action_menu_list_gene_pane_g

0x52e2,	// (0x000366d2) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x52e2,	// (0x000366d2) sp_fs_action_menu_list_gene_pane_t1

0xc3ec,	// (0x0003d7dc) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc3ec,	// (0x0003d7dc) sp_fs_action_menu_list_gene_pane

0x2fc5,	// (0x000343b5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2fc5,	// (0x000343b5) popup_sp_fs_action_menu_bg_pane

0xc409,	// (0x0003d7f9) sp_fs_action_menu_list_pane_ParamLimits

0xc409,	// (0x0003d7f9) sp_fs_action_menu_list_pane

0x2fd3,	// (0x000343c3) sp_fs_scroll_pane_cp01_ParamLimits

0x2fd3,	// (0x000343c3) sp_fs_scroll_pane_cp01

0x52fa,	// (0x000366ea) list_medium_line_plain_t2_t1

0x5309,	// (0x000366f9) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x000410f2) list_medium_line_plain_t2_t

0x5317,	// (0x00036707) list_medium_line_plain_t3_t1

0x5327,	// (0x00036717) list_medium_line_plain_t3_t2

0x5335,	// (0x00036725) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x000410f7) list_medium_line_plain_t3_t

0x49f5,	// (0x00035de5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x49f5,	// (0x00035de5) list_medium_line_x2_t2_g2_g1

0x4a0d,	// (0x00035dfd) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4a0d,	// (0x00035dfd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x00040632) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x00040632) list_medium_line_x2_t2_g2_g

0x4bad,	// (0x00035f9d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4bad,	// (0x00035f9d) list_medium_line_x2_t2_g2_t1

0x4a40,	// (0x00035e30) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4a40,	// (0x00035e30) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x000410fe) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x000410fe) list_medium_line_x2_t2_g2_t

0x49f5,	// (0x00035de5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x49f5,	// (0x00035de5) list_medium_line_x2_t4_g2_g1

0x5343,	// (0x00036733) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5343,	// (0x00036733) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x00041103) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x00041103) list_medium_line_x2_t4_g2_g

0x5355,	// (0x00036745) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5355,	// (0x00036745) list_medium_line_x2_t4_g2_t1

0x536c,	// (0x0003675c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x536c,	// (0x0003675c) list_medium_line_x2_t4_g2_t2

0x5381,	// (0x00036771) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5381,	// (0x00036771) list_medium_line_x2_t4_g2_t3

0x4a40,	// (0x00035e30) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4a40,	// (0x00035e30) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x00041108) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x00041108) list_medium_line_x2_t4_g2_t

0x5393,	// (0x00036783) list_medium_line_t3_right_iconx2_g1

0x528e,	// (0x0003667e) list_medium_line_t3_right_iconx2_g2

0x539b,	// (0x0003678b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x00041111) list_medium_line_t3_right_iconx2_g

0x53a3,	// (0x00036793) list_medium_line_t3_right_iconx2_t1

0x53b3,	// (0x000367a3) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x00041118) list_medium_line_t3_right_iconx2_t

0x49f5,	// (0x00035de5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x49f5,	// (0x00035de5) list_medium_line_x3_t4_g4_g1

0x4a01,	// (0x00035df1) list_medium_line_x3_t4_g4_g2_ParamLimits

0x4a01,	// (0x00035df1) list_medium_line_x3_t4_g4_g2

0x4a89,	// (0x00035e79) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4a89,	// (0x00035e79) list_medium_line_x3_t4_g4_g3

0x53c1,	// (0x000367b1) list_medium_line_x3_t4_g4_g4_ParamLimits

0x53c1,	// (0x000367b1) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0004111d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0004111d) list_medium_line_x3_t4_g4_g

0x53cd,	// (0x000367bd) list_medium_line_x3_t4_g4_t1_ParamLimits

0x53cd,	// (0x000367bd) list_medium_line_x3_t4_g4_t1

0x53e4,	// (0x000367d4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x53e4,	// (0x000367d4) list_medium_line_x3_t4_g4_t2

0x53f9,	// (0x000367e9) list_medium_line_x3_t4_g4_t3_ParamLimits

0x53f9,	// (0x000367e9) list_medium_line_x3_t4_g4_t3

0x540e,	// (0x000367fe) list_medium_line_x3_t4_g4_t4_ParamLimits

0x540e,	// (0x000367fe) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x00041126) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x00041126) list_medium_line_x3_t4_g4_t

0x542b,	// (0x0003681b) list_single_dyc_row_text_pane_t1_ParamLimits

0x542b,	// (0x0003681b) list_single_dyc_row_text_pane_t1

0x5462,	// (0x00036852) list_single_dyc_row_text_pane_t2_ParamLimits

0x5462,	// (0x00036852) list_single_dyc_row_text_pane_t2

0x54d3,	// (0x000368c3) list_single_dyc_row_text_pane_t3_ParamLimits

0x54d3,	// (0x000368c3) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0004112f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0004112f) list_single_dyc_row_text_pane_t

0x559e,	// (0x0003698e) list_single_dyc_row_pane_g1_ParamLimits

0x559e,	// (0x0003698e) list_single_dyc_row_pane_g1

0x55aa,	// (0x0003699a) list_single_dyc_row_pane_g2_ParamLimits

0x55aa,	// (0x0003699a) list_single_dyc_row_pane_g2

0x55b6,	// (0x000369a6) list_single_dyc_row_pane_g3_ParamLimits

0x55b6,	// (0x000369a6) list_single_dyc_row_pane_g3

0x55c2,	// (0x000369b2) list_single_dyc_row_pane_g4_ParamLimits

0x55c2,	// (0x000369b2) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0004113c) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0004113c) list_single_dyc_row_pane_g

0x55ce,	// (0x000369be) list_single_dyc_row_text_pane_ParamLimits

0x55ce,	// (0x000369be) list_single_dyc_row_text_pane

0xd102,	// (0x0003e4f2) bg_sp_fs_scroll_pane

0x3074,	// (0x00034464) thumb_sp_fs_scroll_pane

0x4e93,	// (0x00036283) list_medium_line_g1_ParamLimits

0x4e93,	// (0x00036283) list_medium_line_g1

0x55ed,	// (0x000369dd) list_medium_line_t1_ParamLimits

0x55ed,	// (0x000369dd) list_medium_line_t1

0x49f5,	// (0x00035de5) list_medium_line_x2_g1_ParamLimits

0x49f5,	// (0x00035de5) list_medium_line_x2_g1

0x4a01,	// (0x00035df1) list_medium_line_x2_g2_ParamLimits

0x4a01,	// (0x00035df1) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x00041145) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x00041145) list_medium_line_x2_g

0x5602,	// (0x000369f2) list_medium_line_x2_t1_ParamLimits

0x5602,	// (0x000369f2) list_medium_line_x2_t1

0x49f5,	// (0x00035de5) list_medium_line_x3_g1_ParamLimits

0x49f5,	// (0x00035de5) list_medium_line_x3_g1

0x4a01,	// (0x00035df1) list_medium_line_x3_g2_ParamLimits

0x4a01,	// (0x00035df1) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x00041145) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x00041145) list_medium_line_x3_g

0x5602,	// (0x000369f2) list_medium_line_x3_t1_ParamLimits

0x5602,	// (0x000369f2) list_medium_line_x3_t1

0x30a8,	// (0x00034498) thumb_sp_fs_scroll_pane_g1

0x30b1,	// (0x000344a1) thumb_sp_fs_scroll_pane_g2

0x30ba,	// (0x000344aa) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0004114a) thumb_sp_fs_scroll_pane_g

0x30a8,	// (0x00034498) bg_sp_fs_scroll_pane_g1

0x30b1,	// (0x000344a1) bg_sp_fs_scroll_pane_g2

0x30ba,	// (0x000344aa) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0004114a) bg_sp_fs_scroll_pane_g

0x49f5,	// (0x00035de5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x49f5,	// (0x00035de5) list_medium_line_x2_t3_g4_g1

0x4a7d,	// (0x00035e6d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x4a7d,	// (0x00035e6d) list_medium_line_x2_t3_g4_g2

0x4a01,	// (0x00035df1) list_medium_line_x2_t3_g4_g3_ParamLimits

0x4a01,	// (0x00035df1) list_medium_line_x2_t3_g4_g3

0x4a0d,	// (0x00035dfd) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4a0d,	// (0x00035dfd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x000406ae) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x000406ae) list_medium_line_x2_t3_g4_g

0x5618,	// (0x00036a08) list_medium_line_x2_t3_g4_t1_ParamLimits

0x5618,	// (0x00036a08) list_medium_line_x2_t3_g4_t1

0x562e,	// (0x00036a1e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x562e,	// (0x00036a1e) list_medium_line_x2_t3_g4_t2

0x4a40,	// (0x00035e30) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4a40,	// (0x00035e30) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x00041151) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x00041151) list_medium_line_x2_t3_g4_t

0x4e93,	// (0x00036283) list_medium_line_g2_g1_ParamLimits

0x4e93,	// (0x00036283) list_medium_line_g2_g1

0x4e9f,	// (0x0003628f) list_medium_line_g2_g2_ParamLimits

0x4e9f,	// (0x0003628f) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x00040e03) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x00040e03) list_medium_line_g2_g

0x5647,	// (0x00036a37) list_medium_line_g2_t1_ParamLimits

0x5647,	// (0x00036a37) list_medium_line_g2_t1

0x4e93,	// (0x00036283) list_medium_line_t3_g2_g1_ParamLimits

0x4e93,	// (0x00036283) list_medium_line_t3_g2_g1

0x4e9f,	// (0x0003628f) list_medium_line_t3_g2_g2_ParamLimits

0x4e9f,	// (0x0003628f) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x00040e03) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x00040e03) list_medium_line_t3_g2_g

0x565c,	// (0x00036a4c) list_medium_line_t3_g2_t1_ParamLimits

0x565c,	// (0x00036a4c) list_medium_line_t3_g2_t1

0x5676,	// (0x00036a66) list_medium_line_t3_g2_t2_ParamLimits

0x5676,	// (0x00036a66) list_medium_line_t3_g2_t2

0x568b,	// (0x00036a7b) list_medium_line_t3_g2_t3_ParamLimits

0x568b,	// (0x00036a7b) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x00041158) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x00041158) list_medium_line_t3_g2_t

0x528e,	// (0x0003667e) list_medium_line_right_icon_g1

0x56a1,	// (0x00036a91) list_medium_line_right_icon_t1

0x4e93,	// (0x00036283) list_medium_line_t2_g1_ParamLimits

0x4e93,	// (0x00036283) list_medium_line_t2_g1

0x56af,	// (0x00036a9f) list_medium_line_t2_t1_ParamLimits

0x56af,	// (0x00036a9f) list_medium_line_t2_t1

0x56c5,	// (0x00036ab5) list_medium_line_t2_t2_ParamLimits

0x56c5,	// (0x00036ab5) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0004115f) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0004115f) list_medium_line_t2_t

0x4e93,	// (0x00036283) list_medium_line_t3_g1_ParamLimits

0x4e93,	// (0x00036283) list_medium_line_t3_g1

0x56d7,	// (0x00036ac7) list_medium_line_t3_t1_ParamLimits

0x56d7,	// (0x00036ac7) list_medium_line_t3_t1

0x56ee,	// (0x00036ade) list_medium_line_t3_t2_ParamLimits

0x56ee,	// (0x00036ade) list_medium_line_t3_t2

0x5703,	// (0x00036af3) list_medium_line_t3_t3_ParamLimits

0x5703,	// (0x00036af3) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x00041164) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x00041164) list_medium_line_t3_t

0x4e93,	// (0x00036283) list_medium_line_g3_g1_ParamLimits

0x4e93,	// (0x00036283) list_medium_line_g3_g1

0x5715,	// (0x00036b05) list_medium_line_g3_g2_ParamLimits

0x5715,	// (0x00036b05) list_medium_line_g3_g2

0x4e9f,	// (0x0003628f) list_medium_line_g3_g3_ParamLimits

0x4e9f,	// (0x0003628f) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0004116b) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0004116b) list_medium_line_g3_g

0x5721,	// (0x00036b11) list_medium_line_g3_t1_ParamLimits

0x5721,	// (0x00036b11) list_medium_line_g3_t1

0x4e93,	// (0x00036283) list_medium_line_t2_g3_g1_ParamLimits

0x4e93,	// (0x00036283) list_medium_line_t2_g3_g1

0x5715,	// (0x00036b05) list_medium_line_t2_g3_g2_ParamLimits

0x5715,	// (0x00036b05) list_medium_line_t2_g3_g2

0x4e9f,	// (0x0003628f) list_medium_line_t2_g3_g3_ParamLimits

0x4e9f,	// (0x0003628f) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0004116b) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0004116b) list_medium_line_t2_g3_g

0x5736,	// (0x00036b26) list_medium_line_t2_g3_t1_ParamLimits

0x5736,	// (0x00036b26) list_medium_line_t2_g3_t1

0x5750,	// (0x00036b40) list_medium_line_t2_g3_t2_ParamLimits

0x5750,	// (0x00036b40) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x00041172) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x00041172) list_medium_line_t2_g3_t

0x4e93,	// (0x00036283) list_medium_line_t3_g3_g1_ParamLimits

0x4e93,	// (0x00036283) list_medium_line_t3_g3_g1

0x5715,	// (0x00036b05) list_medium_line_t3_g3_g2_ParamLimits

0x5715,	// (0x00036b05) list_medium_line_t3_g3_g2

0x4e9f,	// (0x0003628f) list_medium_line_t3_g3_g3_ParamLimits

0x4e9f,	// (0x0003628f) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0004116b) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0004116b) list_medium_line_t3_g3_g

0x5765,	// (0x00036b55) list_medium_line_t3_g3_t1_ParamLimits

0x5765,	// (0x00036b55) list_medium_line_t3_g3_t1

0x5779,	// (0x00036b69) list_medium_line_t3_g3_t2_ParamLimits

0x5779,	// (0x00036b69) list_medium_line_t3_g3_t2

0x578b,	// (0x00036b7b) list_medium_line_t3_g3_t3_ParamLimits

0x578b,	// (0x00036b7b) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x00041177) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x00041177) list_medium_line_t3_g3_t

0x5393,	// (0x00036783) list_medium_line_right_iconx2_g1

0x528e,	// (0x0003667e) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0004117e) list_medium_line_right_iconx2_g

0x579d,	// (0x00036b8d) list_medium_line_right_iconx2_t1

0x5393,	// (0x00036783) list_medium_line_t2_right_iconx2_g1

0x528e,	// (0x0003667e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0004117e) list_medium_line_t2_right_iconx2_g

0x57ab,	// (0x00036b9b) list_medium_line_t2_right_iconx2_t1

0x57bb,	// (0x00036bab) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x00041183) list_medium_line_t2_right_iconx2_t

0x57c9,	// (0x00036bb9) list_medium_line_x4_t4_t1

0x57d7,	// (0x00036bc7) list_medium_line_x4_t4_t2

0x57e5,	// (0x00036bd5) list_medium_line_x4_t4_t3

0x57f3,	// (0x00036be3) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x00041188) list_medium_line_x4_t4_t

0xc44b,	// (0x0003d83b) tport_appsw_pane_ParamLimits

0xc44b,	// (0x0003d83b) tport_appsw_pane

0xc457,	// (0x0003d847) tport_contact_pane_ParamLimits

0xc457,	// (0x0003d847) tport_contact_pane

0xc465,	// (0x0003d855) tport_listscroll_pane_ParamLimits

0xc465,	// (0x0003d855) tport_listscroll_pane

0xc473,	// (0x0003d863) cell_tport_appsw_pane_ParamLimits

0xc473,	// (0x0003d863) cell_tport_appsw_pane

0x11f2,	// (0x000325e2) tport_appsw_pane_g1_ParamLimits

0x11f2,	// (0x000325e2) tport_appsw_pane_g1

0x3115,	// (0x00034505) tport_contact_pane_g1

0x311e,	// (0x0003450e) tport_contact_pane_t1

0x312c,	// (0x0003451c) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x00041191) tport_contact_pane_t

0x313a,	// (0x0003452a) list_tport_pane

0xd946,	// (0x0003ed36) scroll_pane_cp_030

0x314b,	// (0x0003453b) cell_tport_appsw_pane_g1

0x315b,	// (0x0003454b) cell_tport_appsw_pane_t1

0x3169,	// (0x00034559) grid_highlight_pane_cp019

0xc49a,	// (0x0003d88a) list_tport_double_graphic_pane_ParamLimits

0xc49a,	// (0x0003d88a) list_tport_double_graphic_pane

0xf08e,	// (0x0004047e) list_highlight_pane_cp023_ParamLimits

0xf08e,	// (0x0004047e) list_highlight_pane_cp023

0xc4a7,	// (0x0003d897) list_tport_double_graphic_pane_g1_ParamLimits

0xc4a7,	// (0x0003d897) list_tport_double_graphic_pane_g1

0xc4b4,	// (0x0003d8a4) list_tport_double_graphic_pane_t1_ParamLimits

0xc4b4,	// (0x0003d8a4) list_tport_double_graphic_pane_t1

0xc4c9,	// (0x0003d8b9) list_tport_double_graphic_pane_t2_ParamLimits

0xc4c9,	// (0x0003d8b9) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0004119d) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0004119d) list_tport_double_graphic_pane_t

0xd102,	// (0x0003e4f2) main_cale_note_pane

0xaa7c,	// (0x0003be6c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaa7c,	// (0x0003be6c) cell_vitu2_function_top_wide_pane_cp01

0xbffd,	// (0x0003d3ed) wait_bar_pane_cp05_ParamLimits

0xf08e,	// (0x0004047e) listscroll_cmail_pane

0x3171,	// (0x00034561) list_cmail_pane

0xc4db,	// (0x0003d8cb) list_cmail_body_pane

0xc4db,	// (0x0003d8cb) list_single_cmail_header_caption_pane

0xc4f4,	// (0x0003d8e4) list_single_cmail_header_detail_pane_ParamLimits

0xc4f4,	// (0x0003d8e4) list_single_cmail_header_detail_pane

0x318d,	// (0x0003457d) list_single_cmail_header_caption_pane_t1

0x5801,	// (0x00036bf1) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5801,	// (0x00036bf1) list_single_cmail_header_detail_pane_g1

0x5817,	// (0x00036c07) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5817,	// (0x00036c07) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x000411a2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x000411a2) list_single_cmail_header_detail_pane_g

0x5823,	// (0x00036c13) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5823,	// (0x00036c13) list_single_cmail_header_detail_pane_t1

0x5883,	// (0x00036c73) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5883,	// (0x00036c73) list_single_cmail_header_editor_pane_bg

0x31f8,	// (0x000345e8) list_cmail_body_pane_g1

0x3201,	// (0x000345f1) list_cmail_body_pane_t1

0x1d04,	// (0x000330f4) list_single_cmail_header_editor_pane_bg_g1

0xdcc9,	// (0x0003f0b9) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1d14,	// (0x00033104) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1d0c,	// (0x000330fc) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1f8d,	// (0x0003337d) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1d34,	// (0x00033124) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1d24,	// (0x00033114) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1d2c,	// (0x0003311c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xdca9,	// (0x0003f099) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc51f,	// (0x0003d90f) calenote_gesture_pane_ParamLimits

0xc51f,	// (0x0003d90f) calenote_gesture_pane

0xc537,	// (0x0003d927) calenote_window_pane_ParamLimits

0xc537,	// (0x0003d927) calenote_window_pane

0x320f,	// (0x000345ff) popup_note_window_cp01

0xc54f,	// (0x0003d93f) calenote_swipe_1_pane_ParamLimits

0xc54f,	// (0x0003d93f) calenote_swipe_1_pane

0xc316,	// (0x0003d706) calenote_swipe_2_pane_ParamLimits

0xc316,	// (0x0003d706) calenote_swipe_2_pane

0x2e92,	// (0x00034282) calenote_swipe_1_pane_g1_ParamLimits

0x2e92,	// (0x00034282) calenote_swipe_1_pane_g1

0x2e9f,	// (0x0003428f) calenote_swipe_1_pane_g2_ParamLimits

0x2e9f,	// (0x0003428f) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x000410c6) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x000410c6) calenote_swipe_1_pane_g

0x3221,	// (0x00034611) calenote_swipe_1_pane_t1_ParamLimits

0x3221,	// (0x00034611) calenote_swipe_1_pane_t1

0x2e92,	// (0x00034282) calenote_swipe_2_pane_g1_ParamLimits

0x2e92,	// (0x00034282) calenote_swipe_2_pane_g1

0x3240,	// (0x00034630) calenote_swipe_2_pane_g2_ParamLimits

0x3240,	// (0x00034630) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x000411ae) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x000411ae) calenote_swipe_2_pane_g

0x324c,	// (0x0003463c) calenote_swipe_2_pane_t1_ParamLimits

0x324c,	// (0x0003463c) calenote_swipe_2_pane_t1

0xd102,	// (0x0003e4f2) main_mup_navstr_pane

0x990b,	// (0x0003acfb) main_mup3_pane_t7_ParamLimits

0x990b,	// (0x0003acfb) main_mup3_pane_t7

0xa28c,	// (0x0003b67c) main_mp4_pane_g6_ParamLimits

0xa28c,	// (0x0003b67c) main_mp4_pane_g6

0xa5d8,	// (0x0003b9c8) main_image3_pane_t4_ParamLimits

0xa5d8,	// (0x0003b9c8) main_image3_pane_t4

0xc562,	// (0x0003d952) popup_navstr_preview_pane_ParamLimits

0xc562,	// (0x0003d952) popup_navstr_preview_pane

0xc56e,	// (0x0003d95e) scroll_navstr_pane_ParamLimits

0xc56e,	// (0x0003d95e) scroll_navstr_pane

0xd102,	// (0x0003e4f2) bg_popup_preview_window_pane_cp04

0x3273,	// (0x00034663) popup_navstr_preview_pane_t1

0xc57a,	// (0x0003d96a) scroll_navstr_pane_g1_ParamLimits

0xc57a,	// (0x0003d96a) scroll_navstr_pane_g1

0xc587,	// (0x0003d977) scroll_navstr_pane_t1_ParamLimits

0xc587,	// (0x0003d977) scroll_navstr_pane_t1

0x3218,	// (0x00034608) bg_button_pane_cp014

0x3218,	// (0x00034608) bg_button_pane_cp030

0x5234,	// (0x00036624) list_double_fisheye_pane_g4_ParamLimits

0x5234,	// (0x00036624) list_double_fisheye_pane_g4

0x5240,	// (0x00036630) list_double_fisheye_pane_g5_ParamLimits

0x5240,	// (0x00036630) list_double_fisheye_pane_g5

0x3181,	// (0x00034571) sp_fs_scroll_pane_cp03

0x2f70,	// (0x00034360) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2f7c,	// (0x0003436c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x000410e3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x2f88,	// (0x00034378) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3179,	// (0x00034569) sp_fs_scroll_pane_cp02

0xd958,	// (0x0003ed48) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd958,	// (0x0003ed48) popup_sp_fs_calendar_preview_list_single_pane

0xd102,	// (0x0003e4f2) main_cam6_pano_pane

0xf08e,	// (0x0004047e) main_mup3_pane_ParamLimits

0xd102,	// (0x0003e4f2) main_phacti_pane

0xbef0,	// (0x0003d2e0) bg_button_pane_cp11

0xbf08,	// (0x0003d2f8) main_mobtv_info_pane_g2_ParamLimits

0xbf08,	// (0x0003d2f8) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x00041043) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x00041043) main_mobtv_info_pane_g

0xc094,	// (0x0003d484) sc_clock_pane_t5_ParamLimits

0xc094,	// (0x0003d484) sc_clock_pane_t5

0xc121,	// (0x0003d511) main_radioblah_pane_g1_ParamLimits

0x2dd5,	// (0x000341c5) main_radioblah_pane_t3_ParamLimits

0x2dd5,	// (0x000341c5) main_radioblah_pane_t3

0x2ded,	// (0x000341dd) main_radioblah_pane_t4_ParamLimits

0x2ded,	// (0x000341dd) main_radioblah_pane_t4

0xc13f,	// (0x0003d52f) main_radioblah_text_pane_ParamLimits

0xc13f,	// (0x0003d52f) main_radioblah_text_pane

0xc14c,	// (0x0003d53c) main_radioblah_info_pane_g1_ParamLimits

0xc1d9,	// (0x0003d5c9) main_radioblah_info_pane_t4_ParamLimits

0xc1d9,	// (0x0003d5c9) main_radioblah_info_pane_t4

0xf08e,	// (0x0004047e) main_sp_fs_calendar_pane

0xc599,	// (0x0003d989) main_phacti_pane_g1

0xc5a1,	// (0x0003d991) phacti_note_pane_ParamLimits

0xc5a1,	// (0x0003d991) phacti_note_pane

0x328a,	// (0x0003467a) phacti_term_pane_ParamLimits

0x328a,	// (0x0003467a) phacti_term_pane

0x329f,	// (0x0003468f) phacti_note_pane_t1_ParamLimits

0x329f,	// (0x0003468f) phacti_note_pane_t1

0x589a,	// (0x00036c8a) phacti_term_pane_g1

0x58a2,	// (0x00036c92) phacti_term_pane_t1_ParamLimits

0x58a2,	// (0x00036c92) phacti_term_pane_t1

0x32e8,	// (0x000346d8) popup_sp_fs_calendar_preview_list_single_pane_g1

0x32f0,	// (0x000346e0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x000411b8) popup_sp_fs_calendar_preview_list_single_pane_g

0x32f8,	// (0x000346e8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x32f8,	// (0x000346e8) popup_sp_fs_calendar_preview_list_single_pane_t1

0x330e,	// (0x000346fe) aid_popup_sp_fs_bg_corner_pane

0x0eea,	// (0x000322da) popup_sp_fs_calendar_preview_bg_pane_g1

0xd102,	// (0x0003e4f2) popup_sp_fs_calendar_preview_bg_pane

0x3316,	// (0x00034706) popup_sp_fs_calendar_preview_list_pane

0x09d6,	// (0x00031dc6) bg_main_sp_fs_cale_pane_ParamLimits

0x09d6,	// (0x00031dc6) bg_main_sp_fs_cale_pane

0x58cc,	// (0x00036cbc) listscroll_cale_mrui_pane_ParamLimits

0x58cc,	// (0x00036cbc) listscroll_cale_mrui_pane

0x58e1,	// (0x00036cd1) listscroll_sp_fs_schedule_track_pane

0x58ea,	// (0x00036cda) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x58ea,	// (0x00036cda) main_sp_fs_ctrlbar_pane_cp01

0x3358,	// (0x00034748) main_sp_fs_ribbon_pane

0x58fd,	// (0x00036ced) popup_sp_fs_cale_preview_window

0x376e,	// (0x00034b5e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x376e,	// (0x00034b5e) list_single_sp_fs_schedule_track_pane

0x3adf,	// (0x00034ecf) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3adf,	// (0x00034ecf) bg_sp_fs_highlight_list_pane_cp03

0xc5f8,	// (0x0003d9e8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc5f8,	// (0x0003d9e8) list_single_sp_fs_schedule_track_pane_g1

0xc604,	// (0x0003d9f4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc604,	// (0x0003d9f4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x000411bd) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x000411bd) list_single_sp_fs_schedule_track_pane_g

0xc610,	// (0x0003da00) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc610,	// (0x0003da00) list_single_sp_fs_schedule_track_pane_t1

0xc628,	// (0x0003da18) sp_fs_schedule_track_pane_ParamLimits

0xc628,	// (0x0003da18) sp_fs_schedule_track_pane

0x3372,	// (0x00034762) sp_fs_schedule_track_pane_g1

0x337a,	// (0x0003476a) sp_fs_schedule_track_pane_g2

0x3382,	// (0x00034772) sp_fs_schedule_track_pane_g3

0x338a,	// (0x0003477a) sp_fs_schedule_track_pane_g4

0x3392,	// (0x00034782) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x000411c2) sp_fs_schedule_track_pane_g

0x1d04,	// (0x000330f4) bg_sp_fs_schedule_viewer_highlight_g1

0xdcc9,	// (0x0003f0b9) bg_sp_fs_schedule_viewer_highlight_g2

0x1d0c,	// (0x000330fc) bg_sp_fs_schedule_viewer_highlight_g3

0x1d14,	// (0x00033104) bg_sp_fs_schedule_viewer_highlight_g4

0x1f8d,	// (0x0003337d) bg_sp_fs_schedule_viewer_highlight_g5

0x1d24,	// (0x00033114) bg_sp_fs_schedule_viewer_highlight_g6

0x1d2c,	// (0x0003311c) bg_sp_fs_schedule_viewer_highlight_g7

0x1d34,	// (0x00033124) bg_sp_fs_schedule_viewer_highlight_g8

0xdca9,	// (0x0003f099) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x000411cd) bg_sp_fs_schedule_viewer_highlight_g

0xd102,	// (0x0003e4f2) bg_main_sp_fs_ribbon_pane

0xa807,	// (0x0003bbf7) main_sp_fs_ribbon_pane_g1

0x339a,	// (0x0003478a) main_sp_fs_ribbon_pane_t1

0xc638,	// (0x0003da28) main_sp_fs_ribbon_pane_t2

0x33a9,	// (0x00034799) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x000411e0) main_sp_fs_ribbon_pane_t

0x33b8,	// (0x000347a8) main_sp_fs_ribbon_scheduler_pane

0x33c0,	// (0x000347b0) bg_main_sp_fs_ribbon_pane_g1

0x33c9,	// (0x000347b9) bg_main_sp_fs_ribbon_pane_g2

0x33d2,	// (0x000347c2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x000411e7) bg_main_sp_fs_ribbon_pane_g

0x33da,	// (0x000347ca) main_sp_fs_ribbon_scheduler_pane_g1

0x33e3,	// (0x000347d3) main_sp_fs_ribbon_scheduler_pane_g2

0x33ec,	// (0x000347dc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x000411ee) main_sp_fs_ribbon_scheduler_pane_g

0x33f5,	// (0x000347e5) list_cale_mrui_pane

0xc647,	// (0x0003da37) sp_fs_scroll_pane_cp07_ParamLimits

0xc647,	// (0x0003da37) sp_fs_scroll_pane_cp07

0xc65f,	// (0x0003da4f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc65f,	// (0x0003da4f) bg_sp_fs_schedule_viewer_highlight

0x3402,	// (0x000347f2) list_single_sp_fs_schedule_track_pane_cp01

0x340a,	// (0x000347fa) list_sp_fs_schedule_track_pane

0x3412,	// (0x00034802) sp_fs_scroll_pane_cp06_ParamLimits

0x3412,	// (0x00034802) sp_fs_scroll_pane_cp06

0x0eea,	// (0x000322da) bgmain_sp_fs_calendar_pane_g1

0x590c,	// (0x00036cfc) list_single_cale_mrui_pane_ParamLimits

0x590c,	// (0x00036cfc) list_single_cale_mrui_pane

0x592e,	// (0x00036d1e) list_single_cale_mrui_row_pane_ParamLimits

0x592e,	// (0x00036d1e) list_single_cale_mrui_row_pane

0x5944,	// (0x00036d34) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5944,	// (0x00036d34) list_single_cale_mrui_row_pane_g1

0x597c,	// (0x00036d6c) list_single_cale_mrui_row_pane_t1_ParamLimits

0x597c,	// (0x00036d6c) list_single_cale_mrui_row_pane_t1

0x598e,	// (0x00036d7e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x598e,	// (0x00036d7e) list_single_cale_mrui_row_pane_t2

0x59f4,	// (0x00036de4) list_single_cale_mrui_row_pane_t3_ParamLimits

0x59f4,	// (0x00036de4) list_single_cale_mrui_row_pane_t3

0x5a23,	// (0x00036e13) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5a23,	// (0x00036e13) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x000411fc) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x000411fc) list_single_cale_mrui_row_pane_t

0x5a52,	// (0x00036e42) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5a52,	// (0x00036e42) list_single_cmail_header_editor_pane_bg_cp01

0x5a76,	// (0x00036e66) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5a76,	// (0x00036e66) list_single_cmail_header_editor_pane_bg_cp02

0xc66c,	// (0x0003da5c) main_radioblah_text_pane_t1_ParamLimits

0xc66c,	// (0x0003da5c) main_radioblah_text_pane_t1

0x3447,	// (0x00034837) cam6_indi_pane_cp01

0x344f,	// (0x0003483f) cam6_mode_pane_cp01

0x3457,	// (0x00034847) cam6_pano_pane

0x3460,	// (0x00034850) cam6_zoom_pane_cp01

0x3468,	// (0x00034858) cam6_pano_image_pane

0x3471,	// (0x00034861) cam6_pano_pane_g1

0x2b3c,	// (0x00033f2c) cam6_pano_pane_g2

0x347a,	// (0x0003486a) cam6_pano_pane_g3

0x3483,	// (0x00034873) cam6_pano_pane_g4

0x14d7,	// (0x000328c7) cam6_pano_pane_g5

0x348c,	// (0x0003487c) cam6_pano_pane_g6

0x3494,	// (0x00034884) cam6_pano_pane_g7

0x349c,	// (0x0003488c) cam6_pano_pane_g8

0x34a5,	// (0x00034895) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x00041205) cam6_pano_pane_g

0xd102,	// (0x0003e4f2) main_browser_tag_pane

0x326b,	// (0x0003465b) grid_navstr_albumart_pane

0x34ae,	// (0x0003489e) cell_navstr_albumart_pane_ParamLimits

0x34ae,	// (0x0003489e) cell_navstr_albumart_pane

0xe59f,	// (0x0003f98f) cell_navstr_albumart_pane_g1

0x07a7,	// (0x00031b97) cell_navstr_albumart_pane_g2

0x07b7,	// (0x00031ba7) cell_navstr_albumart_pane_g3

0x07af,	// (0x00031b9f) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x00041218) cell_navstr_albumart_pane_g

0xc685,	// (0x0003da75) bt_list_pane_ParamLimits

0xc685,	// (0x0003da75) bt_list_pane

0xc69a,	// (0x0003da8a) bt_list_pane_t1

0xc6a9,	// (0x0003da99) bt_list_pane_t2

0x0001,

0xfe31,	// (0x00041221) bt_list_pane_t

0xd102,	// (0x0003e4f2) main_cale_prevew_pane

0xc6b8,	// (0x0003daa8) popup_cale_preview_window_ParamLimits

0xc6b8,	// (0x0003daa8) popup_cale_preview_window

0xf08e,	// (0x0004047e) bg_popup_preview_window_pane_cp05_ParamLimits

0xf08e,	// (0x0004047e) bg_popup_preview_window_pane_cp05

0x34c5,	// (0x000348b5) list_cale_preview_pane_ParamLimits

0x34c5,	// (0x000348b5) list_cale_preview_pane

0xc6cd,	// (0x0003dabd) list_double_cale_preview_pane_ParamLimits

0xc6cd,	// (0x0003dabd) list_double_cale_preview_pane

0xc6de,	// (0x0003dace) list_single_cale_preview_pane_ParamLimits

0xc6de,	// (0x0003dace) list_single_cale_preview_pane

0xc6f2,	// (0x0003dae2) list_single_cale_preview_pane_g1

0xc6fa,	// (0x0003daea) list_single_cale_preview_pane_t1_ParamLimits

0xc6fa,	// (0x0003daea) list_single_cale_preview_pane_t1

0x34d1,	// (0x000348c1) list_double_cale_preview_pane_g1

0x34d9,	// (0x000348c9) list_double_cale_preview_pane_t1_ParamLimits

0x34d9,	// (0x000348c9) list_double_cale_preview_pane_t1

0xc70f,	// (0x0003daff) list_double_cale_preview_pane_t2_ParamLimits

0xc70f,	// (0x0003daff) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x00041226) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x00041226) list_double_cale_preview_pane_t

0xd102,	// (0x0003e4f2) main_ezdial_pane

0xf08e,	// (0x0004047e) main_sp_fs_email_pane_ParamLimits

0xc360,	// (0x0003d750) cmail_ddmenu_btn01_pane_ParamLimits

0xc360,	// (0x0003d750) cmail_ddmenu_btn01_pane

0xc37d,	// (0x0003d76d) cmail_ddmenu_btn02_pane_ParamLimits

0xc37d,	// (0x0003d76d) cmail_ddmenu_btn02_pane

0xc39b,	// (0x0003d78b) cmail_ddmenu_btn03_pane_ParamLimits

0xc39b,	// (0x0003d78b) cmail_ddmenu_btn03_pane

0xc3c7,	// (0x0003d7b7) main_sp_fs_ctrlbar_pane_ParamLimits

0xc3db,	// (0x0003d7cb) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc4db,	// (0x0003d8cb) list_cmail_body_pane_ParamLimits

0x319b,	// (0x0003458b) bg_button_pane_cp12

0x31b0,	// (0x000345a0) list_single_cmail_header_detail_pane_g3_ParamLimits

0x31b0,	// (0x000345a0) list_single_cmail_header_detail_pane_g3

0x585f,	// (0x00036c4f) list_single_cmail_header_detail_pane_t2_ParamLimits

0x585f,	// (0x00036c4f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x000411a9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x000411a9) list_single_cmail_header_detail_pane_t

0x58b7,	// (0x00036ca7) phacti_term_pane_t2_ParamLimits

0x58b7,	// (0x00036ca7) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x000411b3) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x000411b3) phacti_term_pane_t

0x34ee,	// (0x000348de) aid_size_list_single_double

0xc727,	// (0x0003db17) popup_ezdial_listscroll_window

0xc740,	// (0x0003db30) popup_number_entry_window_cp01

0xda18,	// (0x0003ee08) bg_popup_call_pane_cp09

0x34fa,	// (0x000348ea) ezdial_list_pane

0x3502,	// (0x000348f2) scroll_pane_cp23

0x0cd7,	// (0x000320c7) bg_button_pane_cp028_ParamLimits

0x0cd7,	// (0x000320c7) bg_button_pane_cp028

0xc74c,	// (0x0003db3c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc74c,	// (0x0003db3c) cmail_ddmenu_btn01_pane_g1

0xc75c,	// (0x0003db4c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc75c,	// (0x0003db4c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x0004122b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x0004122b) cmail_ddmenu_btn01_pane_g

0x350a,	// (0x000348fa) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x350a,	// (0x000348fa) cmail_ddmenu_btn01_pane_t1

0x09d6,	// (0x00031dc6) bg_button_pane_cp029_ParamLimits

0x09d6,	// (0x00031dc6) bg_button_pane_cp029

0xc75c,	// (0x0003db4c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc75c,	// (0x0003db4c) cmail_ddmenu_btn02_pane_g1

0xc774,	// (0x0003db64) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc774,	// (0x0003db64) cmail_ddmenu_btn02_pane_t1

0x3adf,	// (0x00034ecf) bg_button_pane_cp031_ParamLimits

0x3adf,	// (0x00034ecf) bg_button_pane_cp031

0xc75c,	// (0x0003db4c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc75c,	// (0x0003db4c) cmail_ddmenu_btn03_pane_g1

0xc774,	// (0x0003db64) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc774,	// (0x0003db64) cmail_ddmenu_btn03_pane_t1

0xa495,	// (0x0003b885) cell_dialer2_keypad_pane_t1_ParamLimits

0xa4af,	// (0x0003b89f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa4af,	// (0x0003b89f) cell_dialer2_keypad_pane_t1_copy1

0xbd7d,	// (0x0003d16d) ncimui_group_button_pane

0xf08e,	// (0x0004047e) main_sp_fs_calendar_pane_ParamLimits

0xc4db,	// (0x0003d8cb) list_single_cmail_header_caption_pane_ParamLimits

0x2392,	// (0x00033782) aid_recal_txt_sm_pane

0xd102,	// (0x0003e4f2) mian_recal_day_pane

0x58fd,	// (0x00036ced) popup_sp_fs_cale_preview_window_ParamLimits

0x351f,	// (0x0003490f) list_recal_day_pane

0x5aaf,	// (0x00036e9f) list_single_recal_day_pane_ParamLimits

0x5aaf,	// (0x00036e9f) list_single_recal_day_pane

0x3573,	// (0x00034963) list_single_recal_day_pane_g1_ParamLimits

0x3573,	// (0x00034963) list_single_recal_day_pane_g1

0x5ac1,	// (0x00036eb1) list_single_recal_day_pane_g2_ParamLimits

0x5ac1,	// (0x00036eb1) list_single_recal_day_pane_g2

0x5acd,	// (0x00036ebd) list_single_recal_day_pane_g3_ParamLimits

0x5acd,	// (0x00036ebd) list_single_recal_day_pane_g3

0x5ad9,	// (0x00036ec9) list_single_recal_day_pane_g4_ParamLimits

0x5ad9,	// (0x00036ec9) list_single_recal_day_pane_g4

0x5ae5,	// (0x00036ed5) list_single_recal_day_pane_g5_ParamLimits

0x5ae5,	// (0x00036ed5) list_single_recal_day_pane_g5

0x5af9,	// (0x00036ee9) list_single_recal_day_pane_g6_ParamLimits

0x5af9,	// (0x00036ee9) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x0004123a) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x0004123a) list_single_recal_day_pane_g

0x5b10,	// (0x00036f00) list_single_recal_day_pane_t1

0x5b22,	// (0x00036f12) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x00041245) list_single_recal_day_pane_t

0xc798,	// (0x0003db88) ncimui_query_button_pane_ParamLimits

0xc798,	// (0x0003db88) ncimui_query_button_pane

0xc7a8,	// (0x0003db98) ncimui_query_button_pane_t1_ParamLimits

0xc7a8,	// (0x0003db98) ncimui_query_button_pane_t1

0x35bd,	// (0x000349ad) ncimui_query_button_pane_t2_ParamLimits

0x35bd,	// (0x000349ad) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0004124a) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0004124a) ncimui_query_button_pane_t

0xc7bb,	// (0x0003dbab) query_button_pane_ParamLimits

0xc7bb,	// (0x0003dbab) query_button_pane

0xd102,	// (0x0003e4f2) bg_button_pane_cp0028

0x35d0,	// (0x000349c0) query_button_pane_t1

0x8a40,	// (0x00039e30) main_tport_pane_ParamLimits

0xc427,	// (0x0003d817) bg_popup_window_pane_cp01_ParamLimits

0xc427,	// (0x0003d817) bg_popup_window_pane_cp01

0xc433,	// (0x0003d823) heading_pane_cp08_ParamLimits

0xc433,	// (0x0003d823) heading_pane_cp08

0xc43f,	// (0x0003d82f) heading_pane_cp07_ParamLimits

0xc43f,	// (0x0003d82f) heading_pane_cp07

0x314b,	// (0x0003453b) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x00041196) cell_tport_appsw_pane_g

0x4c1b,	// (0x0003600b) input_candi_list_open_g1

0xde76,	// (0x0003f266) list_cale_time_pane_g6_ParamLimits

0xde76,	// (0x0003f266) list_cale_time_pane_g6

0x9425,	// (0x0003a815) aid_size_touch_calib_1_ParamLimits

0x9425,	// (0x0003a815) aid_size_touch_calib_1

0x9431,	// (0x0003a821) aid_size_touch_calib_2_ParamLimits

0x9431,	// (0x0003a821) aid_size_touch_calib_2

0x943d,	// (0x0003a82d) aid_size_touch_calib_3_ParamLimits

0x943d,	// (0x0003a82d) aid_size_touch_calib_3

0x944b,	// (0x0003a83b) aid_size_touch_calib_4_ParamLimits

0x944b,	// (0x0003a83b) aid_size_touch_calib_4

0x9459,	// (0x0003a849) main_touch_calib_button_group_pane_ParamLimits

0x9459,	// (0x0003a849) main_touch_calib_button_group_pane

0x9467,	// (0x0003a857) main_touch_calib_pane_g1_ParamLimits

0x9473,	// (0x0003a863) main_touch_calib_pane_g2_ParamLimits

0x947f,	// (0x0003a86f) main_touch_calib_pane_g3_ParamLimits

0x948b,	// (0x0003a87b) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x00040b50) main_touch_calib_pane_g_ParamLimits

0x9497,	// (0x0003a887) main_touch_calib_pane_t1_ParamLimits

0x94ac,	// (0x0003a89c) main_touch_calib_pane_t2_ParamLimits

0x94c1,	// (0x0003a8b1) main_touch_calib_pane_t3_ParamLimits

0x94d3,	// (0x0003a8c3) main_touch_calib_pane_t4_ParamLimits

0x94e5,	// (0x0003a8d5) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x00040b59) main_touch_calib_pane_t_ParamLimits

0x128d,	// (0x0003267d) list_single_fp_cale_pane_g3_ParamLimits

0x128d,	// (0x0003267d) list_single_fp_cale_pane_g3

0xf08e,	// (0x0004047e) bg_button_pane_cp012_ParamLimits

0xf08e,	// (0x0004047e) bg_vkb2_func_pane_cp03_ParamLimits

0xb175,	// (0x0003c565) cell_vitu2_function_top_pane_g1_ParamLimits

0xf08e,	// (0x0004047e) bg_vkb2_func_pane_cp04_ParamLimits

0xbd09,	// (0x0003d0f9) main_ncimui_button_group_pane_ParamLimits

0xbd09,	// (0x0003d0f9) main_ncimui_button_group_pane

0xbd6b,	// (0x0003d15b) main_ncimui_pane_t3_ParamLimits

0xbd6b,	// (0x0003d15b) main_ncimui_pane_t3

0x3281,	// (0x00034671) phacti_button_group_pane

0x34ee,	// (0x000348de) aid_size_list_single_double_ParamLimits

0xc727,	// (0x0003db17) popup_ezdial_listscroll_window_ParamLimits

0xc740,	// (0x0003db30) popup_number_entry_window_cp01_ParamLimits

0xc7c8,	// (0x0003dbb8) phacti_button_pane_ParamLimits

0xc7c8,	// (0x0003dbb8) phacti_button_pane

0xd102,	// (0x0003e4f2) bg_button_pane_cp14

0x35de,	// (0x000349ce) phacti_button_pane_t1

0xc7d7,	// (0x0003dbc7) main_touch_calib_button_pane_ParamLimits

0xc7d7,	// (0x0003dbc7) main_touch_calib_button_pane

0xd841,	// (0x0003ec31) bg_button_pane_cp18_ParamLimits

0xd841,	// (0x0003ec31) bg_button_pane_cp18

0xc7e8,	// (0x0003dbd8) main_touch_calib_button_pane_t1_ParamLimits

0xc7e8,	// (0x0003dbd8) main_touch_calib_button_pane_t1

0xc7fe,	// (0x0003dbee) main_touch_calib_button_pane_t2_ParamLimits

0xc7fe,	// (0x0003dbee) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0004124f) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0004124f) main_touch_calib_button_pane_t

0xd102,	// (0x0003e4f2) cell_ncimui_button_pane

0xd102,	// (0x0003e4f2) bg_button_pane_cp032

0x35ec,	// (0x000349dc) cell_ncimui_button_pane_t1

0xa501,	// (0x0003b8f1) image3_infobar_pane_ParamLimits

0xa501,	// (0x0003b8f1) image3_infobar_pane

0xc0b4,	// (0x0003d4a4) fs_bigclock_status_pane_ParamLimits

0xc0b4,	// (0x0003d4a4) fs_bigclock_status_pane

0xc0c1,	// (0x0003d4b1) main_fs_bigclock_clock_pane_ParamLimits

0xc0c1,	// (0x0003d4b1) main_fs_bigclock_clock_pane

0xc0d9,	// (0x0003d4c9) main_fs_bigclock_indi_pane_ParamLimits

0xc0d9,	// (0x0003d4c9) main_fs_bigclock_indi_pane

0xc0f9,	// (0x0003d4e9) main_fs_bigclock_swipe_pane_ParamLimits

0xc0f9,	// (0x0003d4e9) main_fs_bigclock_swipe_pane

0xd102,	// (0x0003e4f2) main_fs_clock_dumped_data

0x2c49,	// (0x00034039) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2c49,	// (0x00034039) list_single_fs_bigclock_indicator_pane_g1

0x2c63,	// (0x00034053) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2c63,	// (0x00034053) list_single_fs_bigclock_indicator_pane_g2

0x2c7d,	// (0x0003406d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2c7d,	// (0x0003406d) list_single_fs_bigclock_indicator_pane_g3

0x2c97,	// (0x00034087) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2c97,	// (0x00034087) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x00041077) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x00041077) list_single_fs_bigclock_indicator_pane_g

0x2cc0,	// (0x000340b0) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2cc0,	// (0x000340b0) list_single_fs_bigclock_indicator_pane_t1

0x2ce8,	// (0x000340d8) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2ce8,	// (0x000340d8) list_single_fs_bigclock_indicator_pane_t2

0x2d10,	// (0x00034100) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2d10,	// (0x00034100) list_single_fs_bigclock_indicator_pane_t3

0x2d38,	// (0x00034128) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2d38,	// (0x00034128) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x00041082) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x00041082) list_single_fs_bigclock_indicator_pane_t

0x35fa,	// (0x000349ea) image3_infobar_fav_pane_ParamLimits

0x35fa,	// (0x000349ea) image3_infobar_fav_pane

0x360a,	// (0x000349fa) image3_infobar_loc_pane_ParamLimits

0x360a,	// (0x000349fa) image3_infobar_loc_pane

0x361e,	// (0x00034a0e) image3_infobar_time_pane_ParamLimits

0x361e,	// (0x00034a0e) image3_infobar_time_pane

0x0eea,	// (0x000322da) image3_infobar_time_pane_g1

0x362e,	// (0x00034a1e) image3_infobar_time_pane_t1

0x0eea,	// (0x000322da) image3_infobar_loc_pane_g1

0x363c,	// (0x00034a2c) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x00041254) image3_infobar_loc_pane_g

0x3644,	// (0x00034a34) image3_infobar_loc_pane_t1

0x0eea,	// (0x000322da) image3_infobar_fav_pane_g1

0x3652,	// (0x00034a42) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x00041259) image3_infobar_fav_pane_g

0x365a,	// (0x00034a4a) fs_bigclock_status_battery_pane

0x3663,	// (0x00034a53) fs_bigclock_status_signal_pane

0x366c,	// (0x00034a5c) fs_bigclock_status_title_pane

0x3675,	// (0x00034a65) fs_bigclock_status_signal_pane_g1

0x367e,	// (0x00034a6e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0004125e) fs_bigclock_status_signal_pane_g

0x3686,	// (0x00034a76) fs_bigclock_status_battery_pane_g1

0x368f,	// (0x00034a7f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x00041263) fs_bigclock_status_battery_pane_g

0x3697,	// (0x00034a87) fs_bigclock_status_title_pane_t1

0x11f2,	// (0x000325e2) main_fs_bigclock_clock_pane_g1

0xc81c,	// (0x0003dc0c) main_fs_bigclock_clock_pane_g2

0xc829,	// (0x0003dc19) main_fs_bigclock_clock_pane_g3

0xc829,	// (0x0003dc19) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x00041268) main_fs_bigclock_clock_pane_g

0xc835,	// (0x0003dc25) main_fs_bigclock_clock_pane_t1

0xc847,	// (0x0003dc37) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x00041271) main_fs_bigclock_clock_pane_t

0x36a5,	// (0x00034a95) list_single_fs_bigclock_indicator_pane_ParamLimits

0x36a5,	// (0x00034a95) list_single_fs_bigclock_indicator_pane

0x36b6,	// (0x00034aa6) list_single_fs_bigclock_pane_ParamLimits

0x36b6,	// (0x00034aa6) list_single_fs_bigclock_pane

0x36dc,	// (0x00034acc) main_fs_bigclock_indicator_pane_t1

0x36eb,	// (0x00034adb) list_single_fs_bigclock_pane_g1

0x36f3,	// (0x00034ae3) list_single_fs_bigclock_pane_t1

0x0eea,	// (0x000322da) main_fs_bigclock_swipe_pane_g1

0x3733,	// (0x00034b23) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x00041282) main_fs_bigclock_swipe_pane_g

0x373b,	// (0x00034b2b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x373b,	// (0x00034b2b) main_fs_bigclock_swipe_pane_t1

0x7c47,	// (0x00039037) call_type_pane_ParamLimits

0xd102,	// (0x0003e4f2) main_btmg_pane

0x5970,	// (0x00036d60) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5970,	// (0x00036d60) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x000411f5) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x000411f5) list_single_cale_mrui_row_pane_g

0x5a9e,	// (0x00036e8e) list_recal_vselct_arw_lo_pane

0x3550,	// (0x00034940) list_recal_vselct_arw_up_pane

0x5aa6,	// (0x00036e96) list_recal_vselct_pane

0x3758,	// (0x00034b48) btmg_button_pane

0xc89c,	// (0x0003dc8c) main_btmg_pane_g1

0xd102,	// (0x0003e4f2) bg_button_pane_cp044

0x3760,	// (0x00034b50) btmg_button_pane_t1

0x09c2,	// (0x00031db2) aid_listscroll_gen

0xf08e,	// (0x0004047e) main_cntbar_detail_pane

0x3171,	// (0x00034561) list_cmail_folder_pane

0x3181,	// (0x00034571) sp_fs_scroll_pane_cp03_ParamLimits

0xc4db,	// (0x0003d8cb) list_single_fs_dyc_pane_cp01_ParamLimits

0xc4db,	// (0x0003d8cb) list_single_fs_dyc_pane_cp01

0x3784,	// (0x00034b74) aid_size_cmail_indent

0x5b37,	// (0x00036f27) list_single_dyc_row_pane_cp01

0xc8be,	// (0x0003dcae) cntbar_detail_list_pane_ParamLimits

0xc8be,	// (0x0003dcae) cntbar_detail_list_pane

0xc8f4,	// (0x0003dce4) main_cntbar_detail_cont_pane_ParamLimits

0xc8f4,	// (0x0003dce4) main_cntbar_detail_cont_pane

0xc900,	// (0x0003dcf0) scroll_pane_cp032_ParamLimits

0xc900,	// (0x0003dcf0) scroll_pane_cp032

0xc90c,	// (0x0003dcfc) cntbar_detail_list_event_pane_ParamLimits

0xc90c,	// (0x0003dcfc) cntbar_detail_list_event_pane

0xc8ca,	// (0x0003dcba) cntbar_detail_list_shct_pane

0x3796,	// (0x00034b86) aid_list_gen

0xd946,	// (0x0003ed36) aid_scroll

0x22db,	// (0x000336cb) aid_size_touch_scroll_bar

0x239b,	// (0x0003378b) aid_list_double

0x23d6,	// (0x000337c6) aid_list_single

0x23d6,	// (0x000337c6) aid_list_single_lg

0x5b40,	// (0x00036f30) aid_list_z_g_a_sm

0x5b48,	// (0x00036f38) aid_list_z_g_d

0x5b50,	// (0x00036f40) aid_txt_z_prm

0x5b5e,	// (0x00036f4e) aid_txt_z_prm_cp01

0x5b6c,	// (0x00036f5c) aid_txt_z_sec

0xc91c,	// (0x0003dd0c) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc91c,	// (0x0003dd0c) main_cntbar_detail_cont_pane_g1

0xc929,	// (0x0003dd19) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc929,	// (0x0003dd19) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x00041287) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x00041287) main_cntbar_detail_cont_pane_g

0x379f,	// (0x00034b8f) main_cntbar_detail_cont_pane_t1

0x37ad,	// (0x00034b9d) main_cntbar_detail_cont_pane_t2

0x37bb,	// (0x00034bab) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x0004128c) main_cntbar_detail_cont_pane_t

0xc935,	// (0x0003dd25) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc935,	// (0x0003dd25) cell_cntbar_detail_list_shct_pane

0x37c9,	// (0x00034bb9) cntbar_detail_list_shct_pane_g1

0x37d2,	// (0x00034bc2) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x00041293) cntbar_detail_list_shct_pane_g

0xc947,	// (0x0003dd37) cntbar_detail_list_event_pane_g1_ParamLimits

0xc947,	// (0x0003dd37) cntbar_detail_list_event_pane_g1

0xc953,	// (0x0003dd43) cntbar_detail_list_event_pane_g2_ParamLimits

0xc953,	// (0x0003dd43) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x00041298) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x00041298) cntbar_detail_list_event_pane_g

0xc9bf,	// (0x0003ddaf) cntbar_detail_list_event_pane_t1_ParamLimits

0xc9bf,	// (0x0003ddaf) cntbar_detail_list_event_pane_t1

0xc9d4,	// (0x0003ddc4) cntbar_detail_list_event_pane_t2_ParamLimits

0xc9d4,	// (0x0003ddc4) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x000412a5) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x000412a5) cntbar_detail_list_event_pane_t

0x0eea,	// (0x000322da) cell_cntbar_detail_list_shct_pane_g1

0xe406,	// (0x0003f7f6) navi_pane_mv_g3

0xf08e,	// (0x0004047e) main_cntbar_detail_pane_ParamLimits

0xd102,	// (0x0003e4f2) main_notif_wgt_pane

0xa1d7,	// (0x0003b5c7) aid_tch_main_mp4_pane_g4

0xa416,	// (0x0003b806) popup_slider_window_cp02

0x5a94,	// (0x00036e84) list_recal_day_event_pane

0xc8a4,	// (0x0003dc94) cntbar_detail_btn_pane_ParamLimits

0xc8a4,	// (0x0003dc94) cntbar_detail_btn_pane

0xc8b0,	// (0x0003dca0) cntbar_detail_btn_pane_cp01_ParamLimits

0xc8b0,	// (0x0003dca0) cntbar_detail_btn_pane_cp01

0xc8ca,	// (0x0003dcba) cntbar_detail_list_shct_pane_ParamLimits

0xc8d6,	// (0x0003dcc6) cntbar_detail_pane_g1_ParamLimits

0xc8d6,	// (0x0003dcc6) cntbar_detail_pane_g1

0xc8e2,	// (0x0003dcd2) cntbar_detail_pane_t1_ParamLimits

0xc8e2,	// (0x0003dcd2) cntbar_detail_pane_t1

0xc95f,	// (0x0003dd4f) cntbar_detail_list_event_pane_g3_ParamLimits

0xc95f,	// (0x0003dd4f) cntbar_detail_list_event_pane_g3

0xc977,	// (0x0003dd67) cntbar_detail_list_event_pane_g4_ParamLimits

0xc977,	// (0x0003dd67) cntbar_detail_list_event_pane_g4

0xc98f,	// (0x0003dd7f) cntbar_detail_list_event_pane_g5_ParamLimits

0xc98f,	// (0x0003dd7f) cntbar_detail_list_event_pane_g5

0xc9a7,	// (0x0003dd97) cntbar_detail_list_event_pane_g6_ParamLimits

0xc9a7,	// (0x0003dd97) cntbar_detail_list_event_pane_g6

0xc9e9,	// (0x0003ddd9) cntbar_detail_list_event_pane_t3_ParamLimits

0xc9e9,	// (0x0003ddd9) cntbar_detail_list_event_pane_t3

0xc9fb,	// (0x0003ddeb) popup_notif_wgt_window_ParamLimits

0xc9fb,	// (0x0003ddeb) popup_notif_wgt_window

0xca09,	// (0x0003ddf9) popup_submenu_window_cp01_ParamLimits

0xca09,	// (0x0003ddf9) popup_submenu_window_cp01

0xda18,	// (0x0003ee08) bg_popup_window_pane_cp10

0x37db,	// (0x00034bcb) listscroll_notif_wgt_pane

0x37ec,	// (0x00034bdc) list_notif_wgt_window

0x37f5,	// (0x00034be5) scroll_pane_cp033

0xca15,	// (0x0003de05) list_notif_wgt_row_pane_ParamLimits

0xca15,	// (0x0003de05) list_notif_wgt_row_pane

0x37fe,	// (0x00034bee) aid_size_list_notif_wgt_del

0x380b,	// (0x00034bfb) list_notif_wgt_row_pane_g1

0x3817,	// (0x00034c07) list_notif_wgt_row_pane_g2

0x382b,	// (0x00034c1b) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x000412ac) list_notif_wgt_row_pane_g

0x3838,	// (0x00034c28) list_notif_wgt_row_pane_t1

0x384e,	// (0x00034c3e) list_notif_wgt_row_pane_t2

0x3860,	// (0x00034c50) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x000412b3) list_notif_wgt_row_pane_t

0x1fe7,	// (0x000333d7) list_recal_day_event_pane_g1

0x3872,	// (0x00034c62) list_recal_day_event_pane_t1

0xd102,	// (0x0003e4f2) bg_button_pane_cp045

0xca27,	// (0x0003de17) cntbar_detail_btn_pane_t1

0x09d6,	// (0x00031dc6) main_callh_pane_ParamLimits

0x09d6,	// (0x00031dc6) main_callh_pane

0xd102,	// (0x0003e4f2) main_coverflow0_pane

0xd102,	// (0x0003e4f2) main_wgtman_pane

0xc10b,	// (0x0003d4fb) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc10b,	// (0x0003d4fb) main_fs_bigclock_unlock_btn_pane

0x3143,	// (0x00034533) bg_button_pane_cp16

0x3153,	// (0x00034543) cell_tport_appsw_pane_g3

0xca35,	// (0x0003de25) cf0_flow_pane_ParamLimits

0xca35,	// (0x0003de25) cf0_flow_pane

0x3881,	// (0x00034c71) listscroll_cf0_pane

0x388a,	// (0x00034c7a) main_cf0_pane_g1

0xca44,	// (0x0003de34) main_cf0_pane_t1_ParamLimits

0xca44,	// (0x0003de34) main_cf0_pane_t1

0xca56,	// (0x0003de46) main_cf0_pane_t2_ParamLimits

0xca56,	// (0x0003de46) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x000412bf) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x000412bf) main_cf0_pane_t

0x389c,	// (0x00034c8c) scroll_pane_cp11

0xca68,	// (0x0003de58) cf0_flow_pane_g1

0xca70,	// (0x0003de60) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x000412c4) cf0_flow_pane_g

0xca78,	// (0x0003de68) cf0_flow_pane_t1

0xd102,	// (0x0003e4f2) main_call6_pane

0xd102,	// (0x0003e4f2) main_calllock_pane

0xca86,	// (0x0003de76) call6_btn_grp_pane_ParamLimits

0xca86,	// (0x0003de76) call6_btn_grp_pane

0xca93,	// (0x0003de83) call6_pane_g1_ParamLimits

0xca93,	// (0x0003de83) call6_pane_g1

0xcaa0,	// (0x0003de90) popup_call6_1st_window_ParamLimits

0xcaa0,	// (0x0003de90) popup_call6_1st_window

0xcaac,	// (0x0003de9c) popup_call6_2nd_window_ParamLimits

0xcaac,	// (0x0003de9c) popup_call6_2nd_window

0xcab8,	// (0x0003dea8) cell_call6_btn_pane_ParamLimits

0xcab8,	// (0x0003dea8) cell_call6_btn_pane

0xda18,	// (0x0003ee08) bg_popup_call2_in_pane_cp03

0x38a5,	// (0x00034c95) popup_call6_1st_window_g1

0x38ad,	// (0x00034c9d) popup_call6_1st_window_g2

0x38b5,	// (0x00034ca5) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x000412c9) popup_call6_1st_window_g

0x38bd,	// (0x00034cad) popup_call6_1st_window_t1

0x38cc,	// (0x00034cbc) popup_call6_1st_window_t2

0x38da,	// (0x00034cca) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x000412d0) popup_call6_1st_window_t

0xda18,	// (0x0003ee08) bg_popup_call2_in_pane_cp04

0x38a5,	// (0x00034c95) popup_call6_2nd_window_g1

0x38ad,	// (0x00034c9d) popup_call6_2nd_window_g2

0x38b5,	// (0x00034ca5) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x000412c9) popup_call6_2nd_window_g

0x38bd,	// (0x00034cad) popup_call6_2nd_window_t1

0xd102,	// (0x0003e4f2) bg_button_pane_cp15

0xcac7,	// (0x0003deb7) cell_call6_btn_pane_g1

0xcad0,	// (0x0003dec0) cell_call6_btn_pane_t1

0xcadf,	// (0x0003decf) listscroll_wgtman_pane_ParamLimits

0xcadf,	// (0x0003decf) listscroll_wgtman_pane

0xcafb,	// (0x0003deeb) wgtman_btn_pane_ParamLimits

0xcafb,	// (0x0003deeb) wgtman_btn_pane

0xe25d,	// (0x0003f64d) aid_scroll_copy1

0x3900,	// (0x00034cf0) list_wgtman_pane

0xcb2e,	// (0x0003df1e) wgtman_btn_pane_g1_ParamLimits

0xcb2e,	// (0x0003df1e) wgtman_btn_pane_g1

0xcb56,	// (0x0003df46) wgtman_btn_pane_t1_ParamLimits

0xcb56,	// (0x0003df46) wgtman_btn_pane_t1

0x390a,	// (0x00034cfa) wgtman_btn_pane_t2_ParamLimits

0x390a,	// (0x00034cfa) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x000412d7) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x000412d7) wgtman_btn_pane_t

0xcb8d,	// (0x0003df7d) listrow_wgtman_pane_ParamLimits

0xcb8d,	// (0x0003df7d) listrow_wgtman_pane

0xcb9e,	// (0x0003df8e) listrow_wgtman_pane_g1

0xcbab,	// (0x0003df9b) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x000412dc) listrow_wgtman_pane_g

0x5b7a,	// (0x00036f6a) listrow_wgtman_pane_t1

0x5b92,	// (0x00036f82) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x000412e1) listrow_wgtman_pane_t

0x5bb8,	// (0x00036fa8) wait_bar_pane_cp09

0x3921,	// (0x00034d11) main_calllock_btn_pane

0x3929,	// (0x00034d19) main_calllock_pane_g1

0xd102,	// (0x0003e4f2) bg_button_pane_cp17

0x3932,	// (0x00034d22) main_calllock_btn_pane_g1

0x393b,	// (0x00034d2b) main_calllock_btn_pane_t1

0xd102,	// (0x0003e4f2) main_dialer3_pane

0xd102,	// (0x0003e4f2) main_fmrd2_pane

0x0eea,	// (0x000322da) main_fs_bigclock_unlock_btn_pane_g1

0x3952,	// (0x00034d42) main_fs_bigclock_unlock_btn_pane_t1

0xcbc3,	// (0x0003dfb3) area_fmrd2_info_pane_ParamLimits

0xcbc3,	// (0x0003dfb3) area_fmrd2_info_pane

0xcbcf,	// (0x0003dfbf) area_fmrd2_visual_pane_ParamLimits

0xcbcf,	// (0x0003dfbf) area_fmrd2_visual_pane

0xcbdd,	// (0x0003dfcd) fmrd2_indi_pane_ParamLimits

0xcbdd,	// (0x0003dfcd) fmrd2_indi_pane

0xcbea,	// (0x0003dfda) area_fmrd2_visual_pane_g1

0xcbf2,	// (0x0003dfe2) area_fmrd2_visual_pane_t1

0xcc00,	// (0x0003dff0) area_fmrd2_visual_pane_t2

0xcc0e,	// (0x0003dffe) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x000412eb) area_fmrd2_visual_pane_t

0xcc1c,	// (0x0003e00c) area_fmrd2_info_pane_g1

0xcc24,	// (0x0003e014) area_fmrd2_info_pane_t1

0xcc32,	// (0x0003e022) area_fmrd2_info_pane_t2

0xcc40,	// (0x0003e030) area_fmrd2_info_pane_t3

0xcc4e,	// (0x0003e03e) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x000412f2) area_fmrd2_info_pane_t

0xcc5c,	// (0x0003e04c) fmrd2_indi_pane_t1

0xcc6a,	// (0x0003e05a) fmrd2_indi_pane_t2

0xcc78,	// (0x0003e068) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x000412fb) fmrd2_indi_pane_t

0x2ca6,	// (0x00034096) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2ca6,	// (0x00034096) list_single_fs_bigclock_indicator_pane_g5

0x2d54,	// (0x00034144) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2d54,	// (0x00034144) list_single_fs_bigclock_indicator_pane_t5

0xc5b5,	// (0x0003d9a5) aid_cell_bcale_month_pane_ParamLimits

0xc5b5,	// (0x0003d9a5) aid_cell_bcale_month_pane

0xc5d3,	// (0x0003d9c3) bcale_month_pane_ParamLimits

0xc5d3,	// (0x0003d9c3) bcale_month_pane

0xc5e9,	// (0x0003d9d9) bcale_preview_pane_ParamLimits

0xc5e9,	// (0x0003d9d9) bcale_preview_pane

0x36f3,	// (0x00034ae3) list_single_fs_bigclock_pane_t1_ParamLimits

0x370f,	// (0x00034aff) list_single_fs_bigclock_pane_t2_ParamLimits

0x370f,	// (0x00034aff) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0004127d) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0004127d) list_single_fs_bigclock_pane_t

0x394a,	// (0x00034d3a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x000412e6) main_fs_bigclock_unlock_btn_pane_g

0xcc86,	// (0x0003e076) aid_dia3_key_size_ParamLimits

0xcc86,	// (0x0003e076) aid_dia3_key_size

0xcc92,	// (0x0003e082) aid_dia3_listrow_size_ParamLimits

0xcc92,	// (0x0003e082) aid_dia3_listrow_size

0xcca0,	// (0x0003e090) dia3_keypad_fun_pane_ParamLimits

0xcca0,	// (0x0003e090) dia3_keypad_fun_pane

0xccac,	// (0x0003e09c) dia3_keypad_num_pane_ParamLimits

0xccac,	// (0x0003e09c) dia3_keypad_num_pane

0xccb8,	// (0x0003e0a8) dia3_listscroll_pane_ParamLimits

0xccb8,	// (0x0003e0a8) dia3_listscroll_pane

0xccc4,	// (0x0003e0b4) dia3_numentry_pane_ParamLimits

0xccc4,	// (0x0003e0b4) dia3_numentry_pane

0x3960,	// (0x00034d50) dia3_list_pane

0x3969,	// (0x00034d59) scroll_pane_cp12

0xd102,	// (0x0003e4f2) bg_dia3_numentry_pane

0xccd0,	// (0x0003e0c0) dia3_numentry_pane_t1

0xccdf,	// (0x0003e0cf) cell_dia3_key_num_pane

0xcce7,	// (0x0003e0d7) cell_dia3_key0_fun_pane_ParamLimits

0xcce7,	// (0x0003e0d7) cell_dia3_key0_fun_pane

0xccf4,	// (0x0003e0e4) cell_dia3_key1_fun_pane_ParamLimits

0xccf4,	// (0x0003e0e4) cell_dia3_key1_fun_pane

0xcd01,	// (0x0003e0f1) dia3_listrow_pane

0x29a7,	// (0x00033d97) bg_dia3_numentry_pane_g1

0xd102,	// (0x0003e4f2) bg_button_pane_cp21

0x3972,	// (0x00034d62) cell_dia3_key_num_pane_t1

0x3980,	// (0x00034d70) cell_dia3_key_num_pane_t2

0x398f,	// (0x00034d7f) cell_dia3_key_num_pane_t3

0x399e,	// (0x00034d8e) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x00041302) cell_dia3_key_num_pane_t

0xd102,	// (0x0003e4f2) bg_button_pane_cp19

0x39ad,	// (0x00034d9d) cell_dia3_key0_fun_pane_g1

0xd102,	// (0x0003e4f2) bg_button_pane_cp20

0xcd0e,	// (0x0003e0fe) cell_dia3_key1_fun_pane_g1

0xcd16,	// (0x0003e106) area_left_week_number_pane

0xcd27,	// (0x0003e117) area_top_day_name_pane

0xcd33,	// (0x0003e123) frame_month_view_pane

0x39b5,	// (0x00034da5) grid_month_view_pane

0xcd44,	// (0x0003e134) cell_top_day_name_pane_ParamLimits

0xcd44,	// (0x0003e134) cell_top_day_name_pane

0xcd5a,	// (0x0003e14a) cell_area_left_week_number_pane_ParamLimits

0xcd5a,	// (0x0003e14a) cell_area_left_week_number_pane

0xcd79,	// (0x0003e169) cell_month_view_pane_ParamLimits

0xcd79,	// (0x0003e169) cell_month_view_pane

0x39c3,	// (0x00034db3) frm_month_g1

0xcd9f,	// (0x0003e18f) frm_month_g2

0xcdae,	// (0x0003e19e) frm_month_g3

0xcdbd,	// (0x0003e1ad) frm_month_g4

0xcdcc,	// (0x0003e1bc) frm_month_g5

0xcddb,	// (0x0003e1cb) frm_month_g6

0xcdea,	// (0x0003e1da) frm_month_g7

0x39d0,	// (0x00034dc0) frm_month_g8

0xcdf9,	// (0x0003e1e9) frm_month_g9

0xce06,	// (0x0003e1f6) frm_month_g10

0xce13,	// (0x0003e203) frm_month_g11

0xce20,	// (0x0003e210) frm_month_g12

0xce2d,	// (0x0003e21d) frm_month_g13

0xce3a,	// (0x0003e22a) frm_month_g14

0xce47,	// (0x0003e237) frm_month_g15

0xce54,	// (0x0003e244) frm_month_g16

0x000f,

0xff1b,	// (0x0004130b) frm_month_g

0x39dd,	// (0x00034dcd) cell_top_day_name_pane_t1

0xce61,	// (0x0003e251) cell_area_left_week_number_pane_g1

0xce70,	// (0x0003e260) cell_area_left_week_number_pane_t1

0x1119,	// (0x00032509) cell_month_view_pane_g1

0xce86,	// (0x0003e276) cell_month_view_pane_t1

0xd102,	// (0x0003e4f2) main_fps_pane

0x2f38,	// (0x00034328) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2f38,	// (0x00034328) cmail_ddmenu_btn02_pane_cp1

0x2f54,	// (0x00034344) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2f54,	// (0x00034344) cmail_ddmenu_btn02_pane_cp2

0xc768,	// (0x0003db58) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc768,	// (0x0003db58) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x00041230) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x00041230) cmail_ddmenu_btn02_pane_g

0xc786,	// (0x0003db76) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc786,	// (0x0003db76) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x00041235) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x00041235) cmail_ddmenu_btn02_pane_t

0xce9c,	// (0x0003e28c) fps_text_pane_ParamLimits

0xce9c,	// (0x0003e28c) fps_text_pane

0xcea9,	// (0x0003e299) main_fps_pane_g1_ParamLimits

0xcea9,	// (0x0003e299) main_fps_pane_g1

0xceb5,	// (0x0003e2a5) wait_bar_pane_cp010_ParamLimits

0xceb5,	// (0x0003e2a5) wait_bar_pane_cp010

0xcec1,	// (0x0003e2b1) fps_text_pane_t1_ParamLimits

0xcec1,	// (0x0003e2b1) fps_text_pane_t1

0xa7fe,	// (0x0003bbee) cam4_image_uncrop_pane_g1

0xa807,	// (0x0003bbf7) cam4_image_uncrop_pane_g2

0xa810,	// (0x0003bc00) cam4_image_uncrop_pane_g3

0xa819,	// (0x0003bc09) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00040cf1) cam4_image_uncrop_pane_g

0xcd01,	// (0x0003e0f1) dia3_listrow_pane_ParamLimits

0xd102,	// (0x0003e4f2) main_phob2_pane

0xc480,	// (0x0003d870) cell_tport_appsw_pane_cp02_ParamLimits

0xc480,	// (0x0003d870) cell_tport_appsw_pane_cp02

0xc48d,	// (0x0003d87d) cell_tport_appsw_pane_cp03_ParamLimits

0xc48d,	// (0x0003d87d) cell_tport_appsw_pane_cp03

0xd102,	// (0x0003e4f2) phob2_contact_card_pane

0xd102,	// (0x0003e4f2) phob2_listscroll_pane

0x39f0,	// (0x00034de0) phob2_list_pane

0x39f8,	// (0x00034de8) scroll_pane_cp034

0xceda,	// (0x0003e2ca) phob2_cc_data_pane_ParamLimits

0xceda,	// (0x0003e2ca) phob2_cc_data_pane

0xcef2,	// (0x0003e2e2) phob2_cc_listscroll_pane_ParamLimits

0xcef2,	// (0x0003e2e2) phob2_cc_listscroll_pane

0xcf0a,	// (0x0003e2fa) list_double_large_graphic_phob2_pane_ParamLimits

0xcf0a,	// (0x0003e2fa) list_double_large_graphic_phob2_pane

0xcf1c,	// (0x0003e30c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xcf1c,	// (0x0003e30c) list_double_large_graphic_phob2_pane_g1

0x5bca,	// (0x00036fba) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x5bca,	// (0x00036fba) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0004132c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0004132c) list_double_large_graphic_phob2_pane_g

0x5bd6,	// (0x00036fc6) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x5bd6,	// (0x00036fc6) list_double_large_graphic_phob2_pane_t1

0x5bec,	// (0x00036fdc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x5bec,	// (0x00036fdc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x00041331) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x00041331) list_double_large_graphic_phob2_pane_t

0xd102,	// (0x0003e4f2) list_highlight_pane_cp024

0xcf32,	// (0x0003e322) phob2_cc_button_pane

0xcf3a,	// (0x0003e32a) phob2_cc_data_pane_g1_ParamLimits

0xcf3a,	// (0x0003e32a) phob2_cc_data_pane_g1

0xcf46,	// (0x0003e336) phob2_cc_data_pane_g2_ParamLimits

0xcf46,	// (0x0003e336) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x00041336) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x00041336) phob2_cc_data_pane_g

0xcf52,	// (0x0003e342) phob2_cc_data_pane_t1_ParamLimits

0xcf52,	// (0x0003e342) phob2_cc_data_pane_t1

0xcf64,	// (0x0003e354) phob2_cc_data_pane_t2_ParamLimits

0xcf64,	// (0x0003e354) phob2_cc_data_pane_t2

0xcf76,	// (0x0003e366) phob2_cc_data_pane_t3_ParamLimits

0xcf76,	// (0x0003e366) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0004133b) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0004133b) phob2_cc_data_pane_t

0x3a00,	// (0x00034df0) phob2_cc_list_pane_ParamLimits

0x3a00,	// (0x00034df0) phob2_cc_list_pane

0x28c4,	// (0x00033cb4) scroll_pane_cp035_ParamLimits

0x28c4,	// (0x00033cb4) scroll_pane_cp035

0xf08e,	// (0x0004047e) bg_button_pane_cp033

0x3a0c,	// (0x00034dfc) phob2_cc_button_pane_g1

0x3a18,	// (0x00034e08) phob2_cc_button_pane_t1

0x3a2d,	// (0x00034e1d) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x00041342) phob2_cc_button_pane_t

0xcf88,	// (0x0003e378) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xcf88,	// (0x0003e378) list_double_large_graphic_phob2_cc_pane

0xcfce,	// (0x0003e3be) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xcfce,	// (0x0003e3be) list_double_large_graphic_phob2_cc_pane_g1

0x5c01,	// (0x00036ff1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x5c01,	// (0x00036ff1) list_double_large_graphic_phob2_cc_pane_g2

0x5c10,	// (0x00037000) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5c10,	// (0x00037000) list_double_large_graphic_phob2_cc_pane_g3

0x5c1f,	// (0x0003700f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5c1f,	// (0x0003700f) list_double_large_graphic_phob2_cc_pane_g4

0x5c30,	// (0x00037020) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5c30,	// (0x00037020) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x00041347) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x00041347) list_double_large_graphic_phob2_cc_pane_g

0x5c3f,	// (0x0003702f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5c3f,	// (0x0003702f) list_double_large_graphic_phob2_cc_pane_t1

0x5c68,	// (0x00037058) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x5c68,	// (0x00037058) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x00041352) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x00041352) list_double_large_graphic_phob2_cc_pane_t

0x3a3f,	// (0x00034e2f) list_highlight_pane_cp025_ParamLimits

0x3a3f,	// (0x00034e2f) list_highlight_pane_cp025

0xf08e,	// (0x0004047e) bg_button_pane_cp033_ParamLimits

0x3a0c,	// (0x00034dfc) phob2_cc_button_pane_g1_ParamLimits

0x3a18,	// (0x00034e08) phob2_cc_button_pane_t1_ParamLimits

0x3a2d,	// (0x00034e1d) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x00041342) phob2_cc_button_pane_t_ParamLimits

0x5ef7,	// (0x000372e7) popup_wgtman_window

0x29c7,	// (0x00033db7) scroll_pane_cp038

0xcb16,	// (0x0003df06) wgtman_btn_pane_cp_01_ParamLimits

0xcb16,	// (0x0003df06) wgtman_btn_pane_cp_01

0x3a4d,	// (0x00034e3d) wgtman_content_pane

0x3a56,	// (0x00034e46) wgtman_heading_pane

0xd102,	// (0x0003e4f2) bg_heading_pane_cp02

0x3a5f,	// (0x00034e4f) wgtman_heading_pane_g1

0x3a67,	// (0x00034e57) wgtman_heading_pane_t1

0x3a75,	// (0x00034e65) scroll_pane_cp036

0x3a7d,	// (0x00034e6d) wgtman_list_pane

0x3a85,	// (0x00034e75) wgtman_list_pane_t1_ParamLimits

0x3a85,	// (0x00034e75) wgtman_list_pane_t1

0xa763,	// (0x0003bb53) cam4_grid_pane

0x4eda,	// (0x000362ca) bg_button_pane_cp015_ParamLimits

0xb31a,	// (0x0003c70a) bg_button_pane_cp016_ParamLimits

0xb32d,	// (0x0003c71d) bg_button_pane_cp017_ParamLimits

0x4f18,	// (0x00036308) popup_vitu2_query_window_g3_ParamLimits

0x4f18,	// (0x00036308) popup_vitu2_query_window_g3

0x4f91,	// (0x00036381) popup_vitu2_query_window_t6_ParamLimits

0x4f91,	// (0x00036381) popup_vitu2_query_window_t6

0x4fbc,	// (0x000363ac) popup_vitu2_query_window_t7_ParamLimits

0x4fbc,	// (0x000363ac) popup_vitu2_query_window_t7

0x1bb5,	// (0x00032fa5) cam4_grid_pane_g1

0x1bbe,	// (0x00032fae) cam4_grid_pane_g2

0x3a9c,	// (0x00034e8c) cam4_grid_pane_g3

0x3aa5,	// (0x00034e95) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x00041357) cam4_grid_pane_g

0x6cb4,	// (0x000380a4) aid_placing_vt_slider_lsc_ParamLimits

0x6f5e,	// (0x0003834e) vidtel_button_pane_ParamLimits

0x6f5e,	// (0x0003834e) vidtel_button_pane

0xd102,	// (0x0003e4f2) bg_button_pane_cp034

0xcfdf,	// (0x0003e3cf) vidtel_button_pane_g1

0xcfe7,	// (0x0003e3d7) vidtel_button_pane_t1

0x1f5b,	// (0x0003334b) aid_size_vtel_slider_touch

0x28c4,	// (0x00033cb4) scroll_pane_cp039

0x29f6,	// (0x00033de6) ncim_query_button_pane_cp01_ParamLimits

0x2a15,	// (0x00033e05) ncimui_query_pane_g1_ParamLimits

0xf08e,	// (0x0004047e) input_focus_pane_cp012_ParamLimits

0x2a3a,	// (0x00033e2a) ncim_query_entry_pane_t1_ParamLimits

0x28c4,	// (0x00033cb4) scroll_pane_cp039_ParamLimits

0xe321,	// (0x0003f711) navi_pane_bcale_mc_g1

0xe329,	// (0x0003f719) navi_pane_bcale_mc_t1

0x2f9d,	// (0x0003438d) main_sp_fs_email_pane_g1

0x2fa9,	// (0x00034399) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x000410e8) main_sp_fs_email_pane_g

0x343a,	// (0x0003482a) list_single_cale_mrui_row_pane_g3_ParamLimits

0x343a,	// (0x0003482a) list_single_cale_mrui_row_pane_g3

0x5af1,	// (0x00036ee1) list_single_recal_day_pane_g5_event_pane

0x5b08,	// (0x00036ef8) list_single_recal_day_pane_g7

0x3aae,	// (0x00034e9e) list_recal_day_event_pane_cp01

0x3ab7,	// (0x00034ea7) list_recal_vselct_arw_lo_pane_cp01

0x3abf,	// (0x00034eaf) list_recal_vselct_arw_up_pane_cp01

0x3ac7,	// (0x00034eb7) list_recal_vselct_pane_cp01

0x1fe7,	// (0x000333d7) list_recal_day_event_pane_cp01_g1

0x5c91,	// (0x00037081) list_recal_day_event_pane_cp01_t1

0x5b10,	// (0x00036f00) list_single_recal_day_pane_t1_ParamLimits

0x5b22,	// (0x00036f12) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x00041245) list_single_recal_day_pane_t_ParamLimits

0xd778,	// (0x0003eb68) bg_notes_pane_ParamLimits

0xd81b,	// (0x0003ec0b) list_notes_pane_ParamLimits

0x61f4,	// (0x000375e4) scroll_pane_cp06_ParamLimits

0xd841,	// (0x0003ec31) main_notes_pane_ParamLimits

0xd102,	// (0x0003e4f2) main_welc_pane

0xcffd,	// (0x0003e3ed) main_welc_body_pane_ParamLimits

0xcffd,	// (0x0003e3ed) main_welc_body_pane

0xd016,	// (0x0003e406) main_welc_opti_pane_ParamLimits

0xd016,	// (0x0003e406) main_welc_opti_pane

0xd043,	// (0x0003e433) main_welc_pane_t1_ParamLimits

0xd043,	// (0x0003e433) main_welc_pane_t1

0xd05b,	// (0x0003e44b) main_welc_body_row_pane_ParamLimits

0xd05b,	// (0x0003e44b) main_welc_body_row_pane

0x3adf,	// (0x00034ecf) main_welc_opti_row_pane_ParamLimits

0x3adf,	// (0x00034ecf) main_welc_opti_row_pane

0x3aed,	// (0x00034edd) main_welc_opti_row_pane_g1

0xd070,	// (0x0003e460) main_welc_opti_row_pane_t1

0x3af5,	// (0x00034ee5) main_welc_body_row_pane_t1

0x37e4,	// (0x00034bd4) popup_notif_wgt_heading_pane

0x37fe,	// (0x00034bee) aid_size_list_notif_wgt_del_ParamLimits

0x380b,	// (0x00034bfb) list_notif_wgt_row_pane_g1_ParamLimits

0x3817,	// (0x00034c07) list_notif_wgt_row_pane_g2_ParamLimits

0x382b,	// (0x00034c1b) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x000412ac) list_notif_wgt_row_pane_g_ParamLimits

0x3838,	// (0x00034c28) list_notif_wgt_row_pane_t1_ParamLimits

0x384e,	// (0x00034c3e) list_notif_wgt_row_pane_t2_ParamLimits

0x3860,	// (0x00034c50) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x000412b3) list_notif_wgt_row_pane_t_ParamLimits

0xcb9e,	// (0x0003df8e) listrow_wgtman_pane_g1_ParamLimits

0xcbab,	// (0x0003df9b) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x000412dc) listrow_wgtman_pane_g_ParamLimits

0x5b7a,	// (0x00036f6a) listrow_wgtman_pane_t1_ParamLimits

0x5b92,	// (0x00036f82) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x000412e1) listrow_wgtman_pane_t_ParamLimits

0x5bb8,	// (0x00036fa8) wait_bar_pane_cp09_ParamLimits

0xd102,	// (0x0003e4f2) bg_popup_heading_pane_cp02

0x3b04,	// (0x00034ef4) popup_notif_wgt_heading_pane_g1

0x3b0c,	// (0x00034efc) popup_notif_wgt_heading_pane_t1

0x09e4,	// (0x00031dd4) main_vids_pane

0xd102,	// (0x0003e4f2) vids_listscroll_pane

0xd07f,	// (0x0003e46f) scroll_pane_cp040

0xd102,	// (0x0003e4f2) vids_list_pane

0xd088,	// (0x0003e478) vids_list_double_pane_ParamLimits

0xd088,	// (0x0003e478) vids_list_double_pane

0xd099,	// (0x0003e489) vids_list_double_pane_g1

0xd0a2,	// (0x0003e492) vids_list_double_pane_t1

0xd0b2,	// (0x0003e4a2) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x00041365) vids_list_double_pane_t

0xf08e,	// (0x0004047e) main_ncimui_pane_ParamLimits

0xbd1f,	// (0x0003d10f) main_ncimui_pane_g1_ParamLimits

0xbd2b,	// (0x0003d11b) main_ncimui_pane_g2_ParamLimits

0xbd2b,	// (0x0003d11b) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x00040fed) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x00040fed) main_ncimui_pane_g

0xd02b,	// (0x0003e41b) main_welc_pane_g1_ParamLimits

0xd02b,	// (0x0003e41b) main_welc_pane_g1

0xd037,	// (0x0003e427) main_welc_pane_g2_ParamLimits

0xd037,	// (0x0003e427) main_welc_pane_g2

0x0001,

0xff70,	// (0x00041360) main_welc_pane_g_ParamLimits

0xff70,	// (0x00041360) main_welc_pane_g

0xd778,	// (0x0003eb68) listscroll_mce_pane_ParamLimits

0x7f60,	// (0x00039350) wait_bar_pane_cp10

0x09ca,	// (0x00031dba) main_cale_day_pane_ParamLimits

0x09ca,	// (0x00031dba) main_cale_week_pane_ParamLimits

0xd778,	// (0x0003eb68) main_messa_pane_ParamLimits

0x9c01,	// (0x0003aff1) main_clock2_btn_pane_ParamLimits

0x9c01,	// (0x0003aff1) main_clock2_btn_pane

0x1315,	// (0x00032705) main_clock2_btn_pane_cp01_ParamLimits

0x1315,	// (0x00032705) main_clock2_btn_pane_cp01

0x33f5,	// (0x000347e5) list_cale_mrui_pane_ParamLimits

0x3894,	// (0x00034c84) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x000412ba) main_cf0_pane_g

0xcd16,	// (0x0003e106) area_left_week_number_pane_ParamLimits

0xcd27,	// (0x0003e117) area_top_day_name_pane_ParamLimits

0xcd33,	// (0x0003e123) frame_month_view_pane_ParamLimits

0x39b5,	// (0x00034da5) grid_month_view_pane_ParamLimits

0x39c3,	// (0x00034db3) frm_month_g1_ParamLimits

0xcd9f,	// (0x0003e18f) frm_month_g2_ParamLimits

0xcdae,	// (0x0003e19e) frm_month_g3_ParamLimits

0xcdbd,	// (0x0003e1ad) frm_month_g4_ParamLimits

0xcdcc,	// (0x0003e1bc) frm_month_g5_ParamLimits

0xcddb,	// (0x0003e1cb) frm_month_g6_ParamLimits

0xcdea,	// (0x0003e1da) frm_month_g7_ParamLimits

0x39d0,	// (0x00034dc0) frm_month_g8_ParamLimits

0xcdf9,	// (0x0003e1e9) frm_month_g9_ParamLimits

0xce06,	// (0x0003e1f6) frm_month_g10_ParamLimits

0xce13,	// (0x0003e203) frm_month_g11_ParamLimits

0xce20,	// (0x0003e210) frm_month_g12_ParamLimits

0xce2d,	// (0x0003e21d) frm_month_g13_ParamLimits

0xce3a,	// (0x0003e22a) frm_month_g14_ParamLimits

0xce47,	// (0x0003e237) frm_month_g15_ParamLimits

0xce54,	// (0x0003e244) frm_month_g16_ParamLimits

0xff1b,	// (0x0004130b) frm_month_g_ParamLimits

0x39dd,	// (0x00034dcd) cell_top_day_name_pane_t1_ParamLimits

0xce61,	// (0x0003e251) cell_area_left_week_number_pane_g1_ParamLimits

0xce70,	// (0x0003e260) cell_area_left_week_number_pane_t1_ParamLimits

0x1119,	// (0x00032509) cell_month_view_pane_g1_ParamLimits

0xce86,	// (0x0003e276) cell_month_view_pane_t1_ParamLimits

0xd770,	// (0x0003eb60) main_clock2_btn_pane_g1

0x3b1a,	// (0x00034f0a) main_clock2_btn_pane_t1

0xf08e,	// (0x0004047e) listscroll_cmail_pane_ParamLimits

0x2f9d,	// (0x0003438d) main_sp_fs_email_pane_g1_ParamLimits

0x2fa9,	// (0x00034399) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x000410e8) main_sp_fs_email_pane_g_ParamLimits

0x351f,	// (0x0003490f) list_recal_day_pane_ParamLimits

0x3530,	// (0x00034920) mian_recal_day_pane_t1

0x54e5,	// (0x000368d5) list_single_dyc_row_text_pane_t4_ParamLimits

0x54e5,	// (0x000368d5) list_single_dyc_row_text_pane_t4

0x551c,	// (0x0003690c) list_single_dyc_row_text_pane_t5_ParamLimits

0x551c,	// (0x0003690c) list_single_dyc_row_text_pane_t5

0x558c,	// (0x0003697c) list_single_dyc_row_text_pane_t6_ParamLimits

0x558c,	// (0x0003697c) list_single_dyc_row_text_pane_t6

0x7b7f,	// (0x00038f6f) aid_mgn_list_cale_time_pane

0xf08e,	// (0x0004047e) main_gallery2_pane_ParamLimits

0x1329,	// (0x00032719) main_clock2_pane_cp01_t1

0x1337,	// (0x00032727) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x00040bc3) main_clock2_pane_cp01_t

0x65ae,	// (0x0003799e) cale_week_scroll_pane_g16_ParamLimits

0x65ae,	// (0x0003799e) cale_week_scroll_pane_g16

0xda18,	// (0x0003ee08) vorec_slider_pane

0xcfe7,	// (0x0003e3d7) vidtel_button_pane_t1_ParamLimits

0x11f2,	// (0x000325e2) main_fs_bigclock_clock_pane_g1_ParamLimits

0xc81c,	// (0x0003dc0c) main_fs_bigclock_clock_pane_g2_ParamLimits

0xc829,	// (0x0003dc19) main_fs_bigclock_clock_pane_g3_ParamLimits

0xc829,	// (0x0003dc19) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe78,	// (0x00041268) main_fs_bigclock_clock_pane_g_ParamLimits

0xc835,	// (0x0003dc25) main_fs_bigclock_clock_pane_t1_ParamLimits

0xc847,	// (0x0003dc37) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe81,	// (0x00041271) main_fs_bigclock_clock_pane_t_ParamLimits

0x952d,	// (0x0003a91d) main_mup3_lyrics_pane_ParamLimits

0x952d,	// (0x0003a91d) main_mup3_lyrics_pane

0xd0e4,	// (0x0003e4d4) main_mup3_lyrics_pane_t1_ParamLimits

0xd0e4,	// (0x0003e4d4) main_mup3_lyrics_pane_t1

0xa1cf,	// (0x0003b5bf) aid_main_mp4_pane_t1_area

0xa1cf,	// (0x0003b5bf) aid_main_mp4_pane_t2_area

0xa2ba,	// (0x0003b6aa) main_mp4_pane_g7_ParamLimits

0xa2ba,	// (0x0003b6aa) main_mp4_pane_g7

0xa2c6,	// (0x0003b6b6) main_mp4_pane_g8_ParamLimits

0xa2c6,	// (0x0003b6b6) main_mp4_pane_g8

0xa67b,	// (0x0003ba6b) aid_call6_pane_g1_size

0xcfb2,	// (0x0003e3a2) list_double_large_graphic_phob2_other_pane_ParamLimits

0xcfb2,	// (0x0003e3a2) list_double_large_graphic_phob2_other_pane

0xe274,	// (0x0003f664) list_double_large_graphic_phob2_other_pane_g1

0xd102,	// (0x0003e4f2) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Small
