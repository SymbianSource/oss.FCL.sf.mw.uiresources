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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00031a5d };

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
0x5aba,	// (0x00037517) Screen

0x5ac4,	// (0x00037521) application_window

0x5b20,	// (0x0003757d) area_bottom_pane_ParamLimits

0x5b20,	// (0x0003757d) area_bottom_pane

0x5b5c,	// (0x000375b9) area_top_pane_ParamLimits

0x5b5c,	// (0x000375b9) area_top_pane

0x5bb8,	// (0x00037615) call_video_uplink_pane_ParamLimits

0x5bb8,	// (0x00037615) call_video_uplink_pane

0x5bf3,	// (0x00037650) main_pane_ParamLimits

0x5bf3,	// (0x00037650) main_pane

0x0802,	// (0x0003225f) context_pane

0x89a8,	// (0x0003a405) navi_pane

0x89c2,	// (0x0003a41f) popup_cale_events_window_ParamLimits

0x89c2,	// (0x0003a41f) popup_cale_events_window

0x0815,	// (0x00032272) popup_mup_playback_window

0x89d9,	// (0x0003a436) signal_pane

0xd729,	// (0x0003f186) main_browser_pane

0xd900,	// (0x0003f35d) main_burst_pane

0x388e,	// (0x000352eb) main_calc_pane

0x078e,	// (0x000321eb) main_cale_day_pane

0x6267,	// (0x00037cc4) main_cale_month_pane

0x078e,	// (0x000321eb) main_cale_week_pane

0xd900,	// (0x0003f35d) main_call_pane

0xd405,	// (0x0003ee62) main_call_poc_pane

0xd900,	// (0x0003f35d) main_camera_pane

0xd900,	// (0x0003f35d) main_chi_dic_pane

0xe103,	// (0x0003fb60) main_clock_pane

0xd405,	// (0x0003ee62) main_fmradio_pane

0xd900,	// (0x0003f35d) main_graph_messa_pane

0xd405,	// (0x0003ee62) main_help_pane

0xd729,	// (0x0003f186) main_im_pane

0xd660,	// (0x0003f0bd) main_image_pane_ParamLimits

0xd660,	// (0x0003f0bd) main_image_pane

0xd405,	// (0x0003ee62) main_location2_pane

0xd900,	// (0x0003f35d) main_location_pane

0xd660,	// (0x0003f0bd) main_messa_pane

0xd405,	// (0x0003ee62) main_mp2_pane

0xd900,	// (0x0003f35d) main_mp_pane

0xd405,	// (0x0003ee62) main_msg_pane

0xd405,	// (0x0003ee62) main_mup_eq_pane

0xd405,	// (0x0003ee62) main_mup_pane

0xd729,	// (0x0003f186) main_notes_pane

0xd405,	// (0x0003ee62) main_pec_pane

0xd405,	// (0x0003ee62) main_phob_pane

0xd405,	// (0x0003ee62) main_pinb_pane

0xd405,	// (0x0003ee62) main_postcard_pane

0xd405,	// (0x0003ee62) main_qdial_pane

0xd900,	// (0x0003f35d) main_skin_pane

0xd405,	// (0x0003ee62) main_smil2_pane

0xd900,	// (0x0003f35d) main_smil_pane

0xd900,	// (0x0003f35d) main_video_pane

0xd900,	// (0x0003f35d) main_video_tele_pane

0xd660,	// (0x0003f0bd) main_viewer_pane_ParamLimits

0xd660,	// (0x0003f0bd) main_viewer_pane

0xd900,	// (0x0003f35d) main_vorec_pane

0x88a6,	// (0x0003a303) popup_blid_sat_info_window_ParamLimits

0x88a6,	// (0x0003a303) popup_blid_sat_info_window

0x88c2,	// (0x0003a31f) popup_dyc_status_message_window_ParamLimits

0x88c2,	// (0x0003a31f) popup_dyc_status_message_window

0x88ce,	// (0x0003a32b) popup_grid_large_graphic_window_ParamLimits

0x88ce,	// (0x0003a32b) popup_grid_large_graphic_window

0x893f,	// (0x0003a39c) popup_loc_request_window_ParamLimits

0x893f,	// (0x0003a39c) popup_loc_request_window

0x8982,	// (0x0003a3df) popup_wml_address_window_ParamLimits

0x8982,	// (0x0003a3df) popup_wml_address_window

0x8783,	// (0x0003a1e0) call_muted_g1

0x84be,	// (0x00039f1b) popup_call_audio_conf_window_ParamLimits

0x84be,	// (0x00039f1b) popup_call_audio_conf_window

0x8793,	// (0x0003a1f0) popup_call_audio_first_window_ParamLimits

0x8793,	// (0x0003a1f0) popup_call_audio_first_window

0x87c7,	// (0x0003a224) popup_call_audio_in_window_ParamLimits

0x87c7,	// (0x0003a224) popup_call_audio_in_window

0x87e3,	// (0x0003a240) popup_call_audio_out_window_ParamLimits

0x87e3,	// (0x0003a240) popup_call_audio_out_window

0x87ff,	// (0x0003a25c) popup_call_audio_second_window_ParamLimits

0x87ff,	// (0x0003a25c) popup_call_audio_second_window

0x8827,	// (0x0003a284) popup_call_audio_wait_window_ParamLimits

0x8827,	// (0x0003a284) popup_call_audio_wait_window

0x8846,	// (0x0003a2a3) popup_number_entry_window_ParamLimits

0x8846,	// (0x0003a2a3) popup_number_entry_window

0x5d71,	// (0x000377ce) bg_popup_call_pane_cp05_ParamLimits

0x5d71,	// (0x000377ce) bg_popup_call_pane_cp05

0xd014,	// (0x0003ea71) popup_number_entry_window_t1

0xd027,	// (0x0003ea84) popup_number_entry_window_t2

0xd039,	// (0x0003ea96) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x00040b0c) popup_number_entry_window_t

0xd04b,	// (0x0003eaa8) text_title_cp2

0xd05e,	// (0x0003eabb) bg_popup_call_pane_cp_ParamLimits

0xd05e,	// (0x0003eabb) bg_popup_call_pane_cp

0xd06c,	// (0x0003eac9) call_thumbnail_pane

0xd074,	// (0x0003ead1) popup_call_audio_in_window_g1_ParamLimits

0xd074,	// (0x0003ead1) popup_call_audio_in_window_g1

0xd080,	// (0x0003eadd) popup_call_audio_in_window_g2_ParamLimits

0xd080,	// (0x0003eadd) popup_call_audio_in_window_g2

0xd08c,	// (0x0003eae9) popup_call_audio_in_window_g3_ParamLimits

0xd08c,	// (0x0003eae9) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x00040b15) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x00040b15) popup_call_audio_in_window_g

0xd098,	// (0x0003eaf5) popup_call_audio_in_window_t1_ParamLimits

0xd098,	// (0x0003eaf5) popup_call_audio_in_window_t1

0xd0b3,	// (0x0003eb10) popup_call_audio_in_window_t2_ParamLimits

0xd0b3,	// (0x0003eb10) popup_call_audio_in_window_t2

0xd0ce,	// (0x0003eb2b) popup_call_audio_in_window_t3_ParamLimits

0xd0ce,	// (0x0003eb2b) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x00040b1c) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x00040b1c) popup_call_audio_in_window_t

0xd05e,	// (0x0003eabb) bg_popup_call_pane_cp01_ParamLimits

0xd05e,	// (0x0003eabb) bg_popup_call_pane_cp01

0xd06c,	// (0x0003eac9) call_thumbnail_pane_cp02

0xd0e1,	// (0x0003eb3e) call_type_pane_cp022

0xd0e9,	// (0x0003eb46) popup_call_audio_out_window_g1_ParamLimits

0xd0e9,	// (0x0003eb46) popup_call_audio_out_window_g1

0xd0fb,	// (0x0003eb58) popup_call_audio_out_window_g2_ParamLimits

0xd0fb,	// (0x0003eb58) popup_call_audio_out_window_g2

0xd107,	// (0x0003eb64) popup_call_audio_out_window_g3_ParamLimits

0xd107,	// (0x0003eb64) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x00040b23) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x00040b23) popup_call_audio_out_window_g

0xd119,	// (0x0003eb76) popup_call_audio_out_window_t1_ParamLimits

0xd119,	// (0x0003eb76) popup_call_audio_out_window_t1

0xd131,	// (0x0003eb8e) popup_call_audio_out_window_t2_ParamLimits

0xd131,	// (0x0003eb8e) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x00040b2a) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x00040b2a) popup_call_audio_out_window_t

0xd146,	// (0x0003eba3) bg_popup_call_pane_ParamLimits

0xd146,	// (0x0003eba3) bg_popup_call_pane

0x5dc6,	// (0x00037823) call_thumbnail_pane_cp_ParamLimits

0x5dc6,	// (0x00037823) call_thumbnail_pane_cp

0xd1ca,	// (0x0003ec27) call_type_pane_cp01_ParamLimits

0xd1ca,	// (0x0003ec27) call_type_pane_cp01

0xd20e,	// (0x0003ec6b) popup_call_audio_first_window_g1_ParamLimits

0xd20e,	// (0x0003ec6b) popup_call_audio_first_window_g1

0xd25a,	// (0x0003ecb7) popup_call_audio_first_window_g2_ParamLimits

0xd25a,	// (0x0003ecb7) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x00040b2f) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x00040b2f) popup_call_audio_first_window_g

0xd29e,	// (0x0003ecfb) popup_call_audio_first_window_t1_ParamLimits

0xd29e,	// (0x0003ecfb) popup_call_audio_first_window_t1

0xd34a,	// (0x0003eda7) popup_call_audio_first_window_t4_ParamLimits

0xd34a,	// (0x0003eda7) popup_call_audio_first_window_t4

0xd3d6,	// (0x0003ee33) popup_call_audio_first_window_t5_ParamLimits

0xd3d6,	// (0x0003ee33) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x00040b34) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x00040b34) popup_call_audio_first_window_t

0xd405,	// (0x0003ee62) bg_popup_call_pane_cp02

0xd40f,	// (0x0003ee6c) call_type_pane_cp023

0xd417,	// (0x0003ee74) popup_call_audio_wait_window_g1

0xd41f,	// (0x0003ee7c) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x00040b3b) popup_call_audio_wait_window_g

0xd427,	// (0x0003ee84) popup_call_audio_wait_window_t3

0xd435,	// (0x0003ee92) bg_popup_call_pane_cp03_ParamLimits

0xd435,	// (0x0003ee92) bg_popup_call_pane_cp03

0xd495,	// (0x0003eef2) call_thumbnail_pane_cp011_ParamLimits

0xd495,	// (0x0003eef2) call_thumbnail_pane_cp011

0xd4a1,	// (0x0003eefe) call_type_pane_cp034_ParamLimits

0xd4a1,	// (0x0003eefe) call_type_pane_cp034

0xd4dd,	// (0x0003ef3a) popup_call_audio_second_window_g1_ParamLimits

0xd4dd,	// (0x0003ef3a) popup_call_audio_second_window_g1

0xd519,	// (0x0003ef76) popup_call_audio_second_window_g2_ParamLimits

0xd519,	// (0x0003ef76) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x00040b40) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x00040b40) popup_call_audio_second_window_g

0xd555,	// (0x0003efb2) popup_call_audio_second_window_t1_ParamLimits

0xd555,	// (0x0003efb2) popup_call_audio_second_window_t1

0xd5d6,	// (0x0003f033) popup_call_audio_second_window_t2_ParamLimits

0xd5d6,	// (0x0003f033) popup_call_audio_second_window_t2

0xd60c,	// (0x0003f069) popup_call_audio_second_window_t3_ParamLimits

0xd60c,	// (0x0003f069) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x00040b45) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x00040b45) popup_call_audio_second_window_t

0xd405,	// (0x0003ee62) bg_popup_call_pane_cp04

0xd642,	// (0x0003f09f) list_conf_pane

0xd64a,	// (0x0003f0a7) popup_call_audio_conf_window_t1

0xd658,	// (0x0003f0b5) call_thumbnail_pane_g1

0xd660,	// (0x0003f0bd) bg_pinb_pane_ParamLimits

0xd660,	// (0x0003f0bd) bg_pinb_pane

0xd66e,	// (0x0003f0cb) find_pinb_pane

0xd677,	// (0x0003f0d4) listscroll_pinb_pane_ParamLimits

0xd677,	// (0x0003f0d4) listscroll_pinb_pane

0xd686,	// (0x0003f0e3) pinb_bg_pane_g1

0x5dea,	// (0x00037847) pinb_bg_pane_g2

0x5df4,	// (0x00037851) pinb_bg_pane_g3

0x5dfe,	// (0x0003785b) pinb_bg_pane_g4

0x5e08,	// (0x00037865) pinb_bg_pane_g5

0x5e12,	// (0x0003786f) pinb_bg_pane_g6

0x5e1d,	// (0x0003787a) pinb_bg_pane_g7

0x5e28,	// (0x00037885) pinb_bg_pane_g8

0x5e31,	// (0x0003788e) pinb_bg_pane_g9

0x5e39,	// (0x00037896) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x00040b4c) pinb_bg_pane_g

0x5e56,	// (0x000378b3) grid_pinb_pane

0x5e5f,	// (0x000378bc) list_pinb_pane

0x5e6a,	// (0x000378c7) scroll_pane_cp01_ParamLimits

0x5e6a,	// (0x000378c7) scroll_pane_cp01

0xd690,	// (0x0003f0ed) find_pinb_pane_g1_ParamLimits

0xd690,	// (0x0003f0ed) find_pinb_pane_g1

0xd6a8,	// (0x0003f105) find_pinb_pane_t1

0xd6ba,	// (0x0003f117) find_pinb_pane_t2

0x0001,

0xf109,	// (0x00040b66) find_pinb_pane_t

0xd6cf,	// (0x0003f12c) input_focus_pane_cp01_ParamLimits

0xd6cf,	// (0x0003f12c) input_focus_pane_cp01

0x5e7a,	// (0x000378d7) cell_pinb_pane_ParamLimits

0x5e7a,	// (0x000378d7) cell_pinb_pane

0x5e93,	// (0x000378f0) cell_pinb_pane_g1_ParamLimits

0x5e93,	// (0x000378f0) cell_pinb_pane_g1

0x5ea7,	// (0x00037904) cell_pinb_pane_g2_ParamLimits

0x5ea7,	// (0x00037904) cell_pinb_pane_g2

0xd6db,	// (0x0003f138) cell_pinb_pane_g3_ParamLimits

0xd6db,	// (0x0003f138) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x00040b6b) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x00040b6b) cell_pinb_pane_g

0xd405,	// (0x0003ee62) grid_highlight_pane_cp01

0x5eb3,	// (0x00037910) list_pinb_item_pane_ParamLimits

0x5eb3,	// (0x00037910) list_pinb_item_pane

0xd405,	// (0x0003ee62) list_highlight_pane_cp02

0x5ec8,	// (0x00037925) list_pinb_item_pane_g1_ParamLimits

0x5ec8,	// (0x00037925) list_pinb_item_pane_g1

0x5ed5,	// (0x00037932) list_pinb_item_pane_g2_ParamLimits

0x5ed5,	// (0x00037932) list_pinb_item_pane_g2

0x5ee1,	// (0x0003793e) list_pinb_item_pane_g3_ParamLimits

0x5ee1,	// (0x0003793e) list_pinb_item_pane_g3

0x5ef0,	// (0x0003794d) list_pinb_item_pane_g4_ParamLimits

0x5ef0,	// (0x0003794d) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x00040b72) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x00040b72) list_pinb_item_pane_g

0x5efc,	// (0x00037959) list_pinb_item_pane_t1_ParamLimits

0x5efc,	// (0x00037959) list_pinb_item_pane_t1

0x5f2d,	// (0x0003798a) calc_display_pane

0x5f45,	// (0x000379a2) calc_paper_pane

0x5f61,	// (0x000379be) grid_calc_pane

0xd405,	// (0x0003ee62) bg_list_pane_cp01

0x5f81,	// (0x000379de) clock_g1

0x5f89,	// (0x000379e6) clock_g2

0x0001,

0xf11e,	// (0x00040b7b) clock_g

0x5f91,	// (0x000379ee) clock_t1_ParamLimits

0x5f91,	// (0x000379ee) clock_t1

0x5fa6,	// (0x00037a03) clock_t2_ParamLimits

0x5fa6,	// (0x00037a03) clock_t2

0x5fb8,	// (0x00037a15) clock_t3_ParamLimits

0x5fb8,	// (0x00037a15) clock_t3

0x5fca,	// (0x00037a27) clock_t4_ParamLimits

0x5fca,	// (0x00037a27) clock_t4

0x5fdc,	// (0x00037a39) clock_t5_ParamLimits

0x5fdc,	// (0x00037a39) clock_t5

0x5ff1,	// (0x00037a4e) clock_t6_ParamLimits

0x5ff1,	// (0x00037a4e) clock_t6

0x6003,	// (0x00037a60) clock_t7_ParamLimits

0x6003,	// (0x00037a60) clock_t7

0x6015,	// (0x00037a72) clock_t8_ParamLimits

0x6015,	// (0x00037a72) clock_t8

0x6027,	// (0x00037a84) clock_t9_ParamLimits

0x6027,	// (0x00037a84) clock_t9

0x0008,

0xf123,	// (0x00040b80) clock_t_ParamLimits

0xf123,	// (0x00040b80) clock_t

0xd6e7,	// (0x0003f144) popup_clock_analogue_window_cp02

0xd6e7,	// (0x0003f144) popup_clock_digital_window_cp01

0xd6ef,	// (0x0003f14c) listscroll_help_pane

0xd405,	// (0x0003ee62) phob_pre_status_pane

0xd6f9,	// (0x0003f156) grid_qdial_pane

0xd660,	// (0x0003f0bd) listscroll_mce_pane

0xd660,	// (0x0003f0bd) bg_notes_pane

0xd703,	// (0x0003f160) list_notes_pane

0x6039,	// (0x00037a96) scroll_pane_cp06

0xd711,	// (0x0003f16e) bg_calc_paper_pane

0x6046,	// (0x00037aa3) list_calc_pane

0xd729,	// (0x0003f186) bg_calc_display_pane

0x6060,	// (0x00037abd) calc_display_pane_t1

0x6075,	// (0x00037ad2) calc_display_pane_t2

0x608a,	// (0x00037ae7) calc_display_pane_t3

0x0002,

0xf136,	// (0x00040b93) calc_display_pane_t

0x609c,	// (0x00037af9) cell_calc_pane_ParamLimits

0x609c,	// (0x00037af9) cell_calc_pane

0xd735,	// (0x0003f192) bg_calc_paper_pane_g1

0xd741,	// (0x0003f19e) bg_calc_paper_pane_g2

0xd74d,	// (0x0003f1aa) bg_calc_paper_pane_g3

0xd759,	// (0x0003f1b6) bg_calc_paper_pane_g4

0xd765,	// (0x0003f1c2) bg_calc_paper_pane_g5

0x60c3,	// (0x00037b20) bg_calc_paper_pane_g6

0x60d2,	// (0x00037b2f) bg_calc_paper_pane_g7

0x60e1,	// (0x00037b3e) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x00040b9a) bg_calc_paper_pane_g

0x60f0,	// (0x00037b4d) calc_bg_paper_pane_g9

0x60ff,	// (0x00037b5c) list_calc_item_pane_ParamLimits

0x60ff,	// (0x00037b5c) list_calc_item_pane

0xd771,	// (0x0003f1ce) list_calc_item_pane_g1

0x6118,	// (0x00037b75) list_calc_item_pane_t1_ParamLimits

0x6118,	// (0x00037b75) list_calc_item_pane_t1

0x612a,	// (0x00037b87) list_calc_item_pane_t2_ParamLimits

0x612a,	// (0x00037b87) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x00040bab) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x00040bab) list_calc_item_pane_t

0xd77e,	// (0x0003f1db) cell_calc_pane_g1

0xd788,	// (0x0003f1e5) grid_highlight_pane_cp02

0xd7aa,	// (0x0003f207) bg_calc_display_pane_g1

0x6158,	// (0x00037bb5) bg_calc_display_pane_g2

0xd7b3,	// (0x0003f210) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x00040bb5) bg_calc_display_pane_g

0x6162,	// (0x00037bbf) cell_qdial_pane_ParamLimits

0x6162,	// (0x00037bbf) cell_qdial_pane

0x6174,	// (0x00037bd1) cell_qdial_pane_g1_ParamLimits

0x6174,	// (0x00037bd1) cell_qdial_pane_g1

0x6181,	// (0x00037bde) cell_qdial_pane_g2_ParamLimits

0x6181,	// (0x00037bde) cell_qdial_pane_g2

0xd7bc,	// (0x0003f219) cell_qdial_pane_g3_ParamLimits

0xd7bc,	// (0x0003f219) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x00040bbc) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x00040bbc) cell_qdial_pane_g

0x619f,	// (0x00037bfc) cell_qdial_pane_t1_ParamLimits

0x619f,	// (0x00037bfc) cell_qdial_pane_t1

0x61b7,	// (0x00037c14) cell_qdial_pane_t2_ParamLimits

0x61b7,	// (0x00037c14) cell_qdial_pane_t2

0x61ca,	// (0x00037c27) cell_qdial_pane_t3_ParamLimits

0x61ca,	// (0x00037c27) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x00040bc5) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x00040bc5) cell_qdial_pane_t

0xd405,	// (0x0003ee62) grid_highlight_pane_cp04

0xd7c8,	// (0x0003f225) thumbnail_qdial_pane_ParamLimits

0xd7c8,	// (0x0003f225) thumbnail_qdial_pane

0xd824,	// (0x0003f281) list_help_pane

0xd82e,	// (0x0003f28b) scroll_pane_cp02

0x61dd,	// (0x00037c3a) help_list_pane_t1_ParamLimits

0x61dd,	// (0x00037c3a) help_list_pane_t1

0x61fb,	// (0x00037c58) bg_notes_pane_g2

0x6203,	// (0x00037c60) bg_notes_pane_g3

0x620b,	// (0x00037c68) notes_bg_pane_g1

0x6213,	// (0x00037c70) notes_bg_pane_g4

0x621b,	// (0x00037c78) notes_bg_pane_g5

0x6223,	// (0x00037c80) notes_bg_pane_g6

0x622b,	// (0x00037c88) notes_bg_pane_g7

0x6233,	// (0x00037c90) notes_bg_pane_g8

0x623b,	// (0x00037c98) notes_bg_pane_g9

0x0006,

0xf186,	// (0x00040be3) notes_bg_pane_g

0x6243,	// (0x00037ca0) list_notes_text_pane_ParamLimits

0x6243,	// (0x00037ca0) list_notes_text_pane

0xd837,	// (0x0003f294) list_notes_text_pane_g1

0x4802,	// (0x0003625f) list_notes_text_pane_t1

0x6267,	// (0x00037cc4) listscroll_cale_week_pane

0x628c,	// (0x00037ce9) bg_cale_heading_pane

0xd85a,	// (0x0003f2b7) bg_cale_pane_cp01

0x62a4,	// (0x00037d01) cale_week_corner_pane

0x62be,	// (0x00037d1b) cale_week_day_heading_pane

0x62d6,	// (0x00037d33) cale_week_scroll_pane_g1

0x62e9,	// (0x00037d46) cale_week_scroll_pane_g2

0x62fc,	// (0x00037d59) cale_week_scroll_pane_g3

0x630f,	// (0x00037d6c) cale_week_scroll_pane_g4

0x6322,	// (0x00037d7f) cale_week_scroll_pane_g5

0x6335,	// (0x00037d92) cale_week_scroll_pane_g6

0x6348,	// (0x00037da5) cale_week_scroll_pane_g7

0x635b,	// (0x00037db8) cale_week_scroll_pane_g8

0x636e,	// (0x00037dcb) cale_week_scroll_pane_g9

0x6381,	// (0x00037dde) cale_week_scroll_pane_g10

0x6394,	// (0x00037df1) cale_week_scroll_pane_g11

0x63a7,	// (0x00037e04) cale_week_scroll_pane_g12

0x63ba,	// (0x00037e17) cale_week_scroll_pane_g13

0x63cd,	// (0x00037e2a) cale_week_scroll_pane_g14

0x63e0,	// (0x00037e3d) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x00040bf2) cale_week_scroll_pane_g

0x6406,	// (0x00037e63) cale_week_time_pane

0x6419,	// (0x00037e76) grid_cale_week_pane

0xd889,	// (0x0003f2e6) scroll_pane_cp08

0x642e,	// (0x00037e8b) cell_cale_week_pane_ParamLimits

0x642e,	// (0x00037e8b) cell_cale_week_pane

0x647c,	// (0x00037ed9) cale_week_day_heading_pane_t1

0x64b7,	// (0x00037f14) cale_week_day_heading_pane_t2

0x64f2,	// (0x00037f4f) cale_week_day_heading_pane_t3

0x652d,	// (0x00037f8a) cale_week_day_heading_pane_t4

0x6568,	// (0x00037fc5) cale_week_day_heading_pane_t5

0x65a3,	// (0x00038000) cale_week_day_heading_pane_t6

0x65de,	// (0x0003803b) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x00040c13) cale_week_day_heading_pane_t

0xd8a6,	// (0x0003f303) bg_cale_side_pane

0x6619,	// (0x00038076) cale_week_time_pane_t1

0x6653,	// (0x000380b0) cale_week_time_pane_t2

0x668d,	// (0x000380ea) cale_week_time_pane_t3

0x66c7,	// (0x00038124) cale_week_time_pane_t4

0x6701,	// (0x0003815e) cale_week_time_pane_t5

0x673b,	// (0x00038198) cale_week_time_pane_t6

0x6775,	// (0x000381d2) cale_week_time_pane_t7

0x67af,	// (0x0003820c) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x00040c22) cale_week_time_pane_t

0x67e9,	// (0x00038246) cell_cale_week_pane_g2

0x680d,	// (0x0003826a) cell_cale_week_pane_g3_ParamLimits

0x680d,	// (0x0003826a) cell_cale_week_pane_g3

0xd8b4,	// (0x0003f311) grid_highlight_pane_cp07

0xd8bc,	// (0x0003f319) listscroll_gms_pane

0xd8c6,	// (0x0003f323) grid_gms_pane

0xd8cf,	// (0x0003f32c) listscroll_gms_pane_g1

0xd8d7,	// (0x0003f334) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x00040c33) listscroll_gms_pane_g

0x6825,	// (0x00038282) scroll_pane_cp010

0x682e,	// (0x0003828b) cell_gms_pane_ParamLimits

0x682e,	// (0x0003828b) cell_gms_pane

0x683f,	// (0x0003829c) cell_gms_pane_g1

0xd8df,	// (0x0003f33c) cell_gms_pane_g2

0xd837,	// (0x0003f294) cell_gms_pane_g3

0xd8e7,	// (0x0003f344) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x00040c38) cell_gms_pane_g

0xd8f0,	// (0x0003f34d) grid_highlight_pane_cp09

0x8731,	// (0x0003a18e) phob_pre_status_pane_g1

0x8739,	// (0x0003a196) phob_pre_status_pane_g2

0x8741,	// (0x0003a19e) phob_pre_status_pane_g3

0x8749,	// (0x0003a1a6) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x00041036) phob_pre_status_pane_g

0x8759,	// (0x0003a1b6) phob_pre_status_pane_t1

0x8767,	// (0x0003a1c4) phob_pre_status_pane_t2

0x8775,	// (0x0003a1d2) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x00041041) phob_pre_status_pane_t

0xd900,	// (0x0003f35d) bg_list_pane_cp05

0x6847,	// (0x000382a4) grid_vorec_pane

0xd908,	// (0x0003f365) vorec_t1

0xd916,	// (0x0003f373) vorec_t2

0xd924,	// (0x0003f381) vorec_t3

0x684f,	// (0x000382ac) vorec_t4

0xcfd2,	// (0x0003ea2f) vorec_t5

0xcfe0,	// (0x0003ea3d) vorec_t6

0x0004,

0xf1e4,	// (0x00040c41) vorec_t

0xcfee,	// (0x0003ea4b) wait_bar_pane_cp01

0xd940,	// (0x0003f39d) cell_vorec_pane_ParamLimits

0xd940,	// (0x0003f39d) cell_vorec_pane

0x685d,	// (0x000382ba) cell_vorec_pane_g1

0xd405,	// (0x0003ee62) grid_highlight_pane_cp05

0x6873,	// (0x000382d0) cams_zoom_pane

0x687f,	// (0x000382dc) image_vga_pane

0x688c,	// (0x000382e9) main_camera_pane_g1

0x6898,	// (0x000382f5) main_camera_pane_g2

0x68a4,	// (0x00038301) main_camera_pane_g3

0x68b0,	// (0x0003830d) main_camera_pane_g4

0x68bc,	// (0x00038319) main_camera_pane_g5

0x68c8,	// (0x00038325) main_camera_pane_g6

0x68d4,	// (0x00038331) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x00040c4c) main_camera_pane_g

0x68e0,	// (0x0003833d) main_camera_pane_t1

0x68f2,	// (0x0003834f) main_camera_pane_t2

0x0001,

0xf200,	// (0x00040c5d) main_camera_pane_t

0x6916,	// (0x00038373) cams_zoom_pane_cp_ParamLimits

0x6916,	// (0x00038373) cams_zoom_pane_cp

0x693a,	// (0x00038397) image_cif_pane_ParamLimits

0x693a,	// (0x00038397) image_cif_pane

0x6954,	// (0x000383b1) image_subqcif_pane

0x695c,	// (0x000383b9) main_video_pane_g1_ParamLimits

0x695c,	// (0x000383b9) main_video_pane_g1

0x697c,	// (0x000383d9) main_video_pane_g2_ParamLimits

0x697c,	// (0x000383d9) main_video_pane_g2

0x69aa,	// (0x00038407) main_video_pane_g3_ParamLimits

0x69aa,	// (0x00038407) main_video_pane_g3

0x69d3,	// (0x00038430) main_video_pane_g4_ParamLimits

0x69d3,	// (0x00038430) main_video_pane_g4

0x69fc,	// (0x00038459) main_video_pane_g5_ParamLimits

0x69fc,	// (0x00038459) main_video_pane_g5

0xd95f,	// (0x0003f3bc) main_video_pane_g6_ParamLimits

0xd95f,	// (0x0003f3bc) main_video_pane_g6

0x0006,

0xf205,	// (0x00040c62) main_video_pane_g_ParamLimits

0xf205,	// (0x00040c62) main_video_pane_g

0x6a1e,	// (0x0003847b) main_video_pane_t1_ParamLimits

0x6a1e,	// (0x0003847b) main_video_pane_t1

0xd979,	// (0x0003f3d6) cams_zoom_pane_g1

0xd982,	// (0x0003f3df) cams_zoom_pane_g2

0xd98b,	// (0x0003f3e8) cams_zoom_pane_g3

0xd994,	// (0x0003f3f1) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x00040c71) cams_zoom_pane_g

0x6a68,	// (0x000384c5) grid_cams_pane

0x6a74,	// (0x000384d1) linegrid_cams_pane

0x6a80,	// (0x000384dd) cell_cams_pane_ParamLimits

0x6a80,	// (0x000384dd) cell_cams_pane

0xd99d,	// (0x0003f3fa) cams_burst_image_pane

0xd9a5,	// (0x0003f402) cell_cams_pane_g1

0xd405,	// (0x0003ee62) grid_highlight_pane_cp03

0xd77e,	// (0x0003f1db) mp_bg_pane_g1

0xd405,	// (0x0003ee62) bg_list_pane_cp03

0x06b3,	// (0x00032110) bg_mp_pane

0x06bb,	// (0x00032118) grid_mp_pane

0x06c3,	// (0x00032120) media_player_g1

0x06cb,	// (0x00032128) media_player_t1

0x06d9,	// (0x00032136) media_player_t2

0x06e7,	// (0x00032144) media_player_t3

0x06f5,	// (0x00032152) media_player_t4

0x0703,	// (0x00032160) media_player_t5

0x0711,	// (0x0003216e) media_player_t6

0x071f,	// (0x0003217c) media_player_t7

0x0006,

0xf5c3,	// (0x00041020) media_player_t

0x072d,	// (0x0003218a) wait_bar_pane_cp02

0xf5a8,	// (0x00041005) main_usb_pane_t

0x8728,	// (0x0003a185) cell_mp_pane

0xd77e,	// (0x0003f1db) cell_mp_pane_g1

0xd405,	// (0x0003ee62) grid_highlight_pane_cp06

0xd9ad,	// (0x0003f40a) grid_skin_colour_pane

0xd9b5,	// (0x0003f412) list_highlight_pane_cp03

0x6a93,	// (0x000384f0) skin_g1

0xd9bd,	// (0x0003f41a) skin_t1

0xd9cc,	// (0x0003f429) skin_t2

0x0001,

0xf249,	// (0x00040ca6) skin_t

0x6a9b,	// (0x000384f8) cell_skin_colour_pane_ParamLimits

0x6a9b,	// (0x000384f8) cell_skin_colour_pane

0xd9da,	// (0x0003f437) cell_skin_colour_pane_g1

0x6b11,	// (0x0003856e) call_video_g1_ParamLimits

0x6b11,	// (0x0003856e) call_video_g1

0x6b1d,	// (0x0003857a) call_video_g2_ParamLimits

0x6b1d,	// (0x0003857a) call_video_g2

0x0001,

0xf24e,	// (0x00040cab) call_video_g_ParamLimits

0xf24e,	// (0x00040cab) call_video_g

0x6b6d,	// (0x000385ca) call_video_uplink_pane_cp1_ParamLimits

0x6b6d,	// (0x000385ca) call_video_uplink_pane_cp1

0xd9ec,	// (0x0003f449) call_video_uplink_pane_cp2

0x6c29,	// (0x00038686) video_down_crop_pane_ParamLimits

0x6c29,	// (0x00038686) video_down_crop_pane

0x6cf3,	// (0x00038750) video_down_pane_ParamLimits

0x6cf3,	// (0x00038750) video_down_pane

0xd9f4,	// (0x0003f451) video_down_subqcif_pane_ParamLimits

0xd9f4,	// (0x0003f451) video_down_subqcif_pane

0xda0c,	// (0x0003f469) video_down_subqcif_pane_cp_ParamLimits

0xda0c,	// (0x0003f469) video_down_subqcif_pane_cp

0xda30,	// (0x0003f48d) im_reading_pane_ParamLimits

0xda30,	// (0x0003f48d) im_reading_pane

0x6dbf,	// (0x0003881c) im_writing_pane_ParamLimits

0x6dbf,	// (0x0003881c) im_writing_pane

0x6dd5,	// (0x00038832) im_reading_pane_t1

0xda4a,	// (0x0003f4a7) list_im_pane

0xda5b,	// (0x0003f4b8) scroll_pane_cp07

0x6e0d,	// (0x0003886a) im_writing_pane_t1_ParamLimits

0x6e0d,	// (0x0003886a) im_writing_pane_t1

0xda74,	// (0x0003f4d1) im_writing_pane_t2_ParamLimits

0xda74,	// (0x0003f4d1) im_writing_pane_t2

0x0001,

0xf258,	// (0x00040cb5) im_writing_pane_t_ParamLimits

0xf258,	// (0x00040cb5) im_writing_pane_t

0xd405,	// (0x0003ee62) input_focus_pane_cp04

0xd405,	// (0x0003ee62) input_focus_pane_cp05

0x6e22,	// (0x0003887f) list_im_single_pane_ParamLimits

0x6e22,	// (0x0003887f) list_im_single_pane

0xda91,	// (0x0003f4ee) list_single_im_pane_t1

0x86ee,	// (0x0003a14b) blid_accuracy_pane

0x86f6,	// (0x0003a153) blid_compass_pane

0x86fe,	// (0x0003a15b) main_location_t1

0x870c,	// (0x0003a169) main_location_t2

0x871a,	// (0x0003a177) main_location_t3

0x0002,

0xf5d2,	// (0x0004102f) main_location_t

0xd405,	// (0x0003ee62) aid_levels_location

0xd77e,	// (0x0003f1db) blid_accuracy_pane_g1

0xd77e,	// (0x0003f1db) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x00040d17) blid_accuracy_pane_g

0xdacb,	// (0x0003f528) wml_content_pane

0xdb09,	// (0x0003f566) wml_button_pane_ParamLimits

0xdb09,	// (0x0003f566) wml_button_pane

0x6e3a,	// (0x00038897) wml_list_single_large_pane_ParamLimits

0x6e3a,	// (0x00038897) wml_list_single_large_pane

0x6e51,	// (0x000388ae) wml_list_single_medium_pane_ParamLimits

0x6e51,	// (0x000388ae) wml_list_single_medium_pane

0x6e69,	// (0x000388c6) wml_list_single_small_pane_ParamLimits

0x6e69,	// (0x000388c6) wml_list_single_small_pane

0xdb1d,	// (0x0003f57a) wml_selection_box_pane_ParamLimits

0xdb1d,	// (0x0003f57a) wml_selection_box_pane

0xdb30,	// (0x0003f58d) wml_list_single_pane_t1

0xdb3f,	// (0x0003f59c) wml_list_single_medium_pane_t1

0xdb4e,	// (0x0003f5ab) wml_list_single_large_pane_t1

0xdb5d,	// (0x0003f5ba) input_focus_pane_cp02_ParamLimits

0xdb5d,	// (0x0003f5ba) input_focus_pane_cp02

0xdb70,	// (0x0003f5cd) wml_selection_box_pane_g1

0xdb79,	// (0x0003f5d6) wml_selection_box_pane_t1_ParamLimits

0xdb79,	// (0x0003f5d6) wml_selection_box_pane_t1

0xd660,	// (0x0003f0bd) bg_wml_button_pane_ParamLimits

0xd660,	// (0x0003f0bd) bg_wml_button_pane

0xdb91,	// (0x0003f5ee) wml_button_pane_g1

0xdb99,	// (0x0003f5f6) wml_button_pane_t1

0xdb91,	// (0x0003f5ee) wml_button_bg_pane_g1

0xdba9,	// (0x0003f606) wml_button_bg_pane_g2

0xdbb1,	// (0x0003f60e) wml_button_bg_pane_g3

0xdbb9,	// (0x0003f616) wml_button_bg_pane_g4

0xdbc1,	// (0x0003f61e) wml_button_bg_pane_g5

0xdbc9,	// (0x0003f626) wml_button_bg_pane_g6

0xdbd1,	// (0x0003f62e) wml_button_bg_pane_g7

0xdbd9,	// (0x0003f636) wml_button_bg_pane_g8

0xdbe1,	// (0x0003f63e) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x00040cba) wml_button_bg_pane_g

0x6e84,	// (0x000388e1) bg_list_pane_cp02

0xdbe9,	// (0x0003f646) mce_header_pane_ParamLimits

0xdbe9,	// (0x0003f646) mce_header_pane

0xdbfd,	// (0x0003f65a) mce_icon_pane

0xdbfd,	// (0x0003f65a) mce_image_pane

0xdc06,	// (0x0003f663) mce_text_pane_ParamLimits

0xdc06,	// (0x0003f663) mce_text_pane

0x6e8d,	// (0x000388ea) scroll_pane_cp03

0x6e8d,	// (0x000388ea) scroll_pane_cp04

0xdc1a,	// (0x0003f677) scroll_pane_cp05_ParamLimits

0xdc1a,	// (0x0003f677) scroll_pane_cp05

0x6e95,	// (0x000388f2) mce_header_field_pane_ParamLimits

0x6e95,	// (0x000388f2) mce_header_field_pane

0x6eb5,	// (0x00038912) mce_header_field_pane_2_ParamLimits

0x6eb5,	// (0x00038912) mce_header_field_pane_2

0x6ecb,	// (0x00038928) mce_header_field_pane_3

0x6ed3,	// (0x00038930) list_single_mce_message_pane_ParamLimits

0x6ed3,	// (0x00038930) list_single_mce_message_pane

0x6eea,	// (0x00038947) list_single_mce_smart_pane_ParamLimits

0x6eea,	// (0x00038947) list_single_mce_smart_pane

0xdc26,	// (0x0003f683) input_focus_pane_cp03

0xdc2f,	// (0x0003f68c) list_header_data_pane

0x6f0c,	// (0x00038969) mce_header_field_pane_t1

0x6f1a,	// (0x00038977) list_single_mce_header_pane_ParamLimits

0x6f1a,	// (0x00038977) list_single_mce_header_pane

0xdc37,	// (0x0003f694) list_single_mce_header_pane_t1

0xdc46,	// (0x0003f6a3) list_single_mce_message_pane_g1

0xdc4f,	// (0x0003f6ac) list_single_mce_message_pane_t1

0x6f58,	// (0x000389b5) bg_cale_heading_pane_cp01_ParamLimits

0x6f58,	// (0x000389b5) bg_cale_heading_pane_cp01

0xdc5e,	// (0x0003f6bb) bg_cale_pane_cp02_ParamLimits

0xdc5e,	// (0x0003f6bb) bg_cale_pane_cp02

0x6f87,	// (0x000389e4) cale_month_corner_pane

0x6fa1,	// (0x000389fe) cale_month_day_heading_pane_ParamLimits

0x6fa1,	// (0x000389fe) cale_month_day_heading_pane

0x6fd0,	// (0x00038a2d) cale_month_pane_g1_ParamLimits

0x6fd0,	// (0x00038a2d) cale_month_pane_g1

0x6ff4,	// (0x00038a51) cale_month_pane_g2_ParamLimits

0x6ff4,	// (0x00038a51) cale_month_pane_g2

0x7013,	// (0x00038a70) cale_month_pane_g3_ParamLimits

0x7013,	// (0x00038a70) cale_month_pane_g3

0x704f,	// (0x00038aac) cale_month_pane_g4_ParamLimits

0x704f,	// (0x00038aac) cale_month_pane_g4

0x708b,	// (0x00038ae8) cale_month_pane_g5_ParamLimits

0x708b,	// (0x00038ae8) cale_month_pane_g5

0x70c7,	// (0x00038b24) cale_month_pane_g6_ParamLimits

0x70c7,	// (0x00038b24) cale_month_pane_g6

0x7103,	// (0x00038b60) cale_month_pane_g7_ParamLimits

0x7103,	// (0x00038b60) cale_month_pane_g7

0x713f,	// (0x00038b9c) cale_month_pane_g8_ParamLimits

0x713f,	// (0x00038b9c) cale_month_pane_g8

0x717b,	// (0x00038bd8) cale_month_pane_g9_ParamLimits

0x717b,	// (0x00038bd8) cale_month_pane_g9

0x71b5,	// (0x00038c12) cale_month_pane_g10_ParamLimits

0x71b5,	// (0x00038c12) cale_month_pane_g10

0x71ef,	// (0x00038c4c) cale_month_pane_g11_ParamLimits

0x71ef,	// (0x00038c4c) cale_month_pane_g11

0x7229,	// (0x00038c86) cale_month_pane_g12_ParamLimits

0x7229,	// (0x00038c86) cale_month_pane_g12

0x7263,	// (0x00038cc0) cale_month_pane_g13_ParamLimits

0x7263,	// (0x00038cc0) cale_month_pane_g13

0x000c,

0xf270,	// (0x00040ccd) cale_month_pane_g_ParamLimits

0xf270,	// (0x00040ccd) cale_month_pane_g

0x729d,	// (0x00038cfa) cale_month_week_pane

0x72b0,	// (0x00038d0d) grid_cale_month_pane_ParamLimits

0x72b0,	// (0x00038d0d) grid_cale_month_pane

0x72d6,	// (0x00038d33) cale_month_day_heading_pane_t1

0x735c,	// (0x00038db9) cale_month_day_heading_pane_t2

0x73ed,	// (0x00038e4a) cale_month_day_heading_pane_t3

0x747e,	// (0x00038edb) cale_month_day_heading_pane_t4

0x750f,	// (0x00038f6c) cale_month_day_heading_pane_t5

0x75a0,	// (0x00038ffd) cale_month_day_heading_pane_t6

0x7631,	// (0x0003908e) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x00040ce8) cale_month_day_heading_pane_t

0xd8a6,	// (0x0003f303) bg_cale_side_pane_cp01

0x76c2,	// (0x0003911f) cale_month_week_pane_t1

0x76fb,	// (0x00039158) cale_month_week_pane_t2

0x7734,	// (0x00039191) cale_month_week_pane_t3

0x776d,	// (0x000391ca) cale_month_week_pane_t4

0x77a6,	// (0x00039203) cale_month_week_pane_t5

0x77df,	// (0x0003923c) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x00040cf7) cale_month_week_pane_t

0x7818,	// (0x00039275) cell_cale_month_pane_ParamLimits

0x7818,	// (0x00039275) cell_cale_month_pane

0x7906,	// (0x00039363) cell_cale_month_pane_g1

0x7912,	// (0x0003936f) cell_cale_month_pane_t1_ParamLimits

0x7912,	// (0x0003936f) cell_cale_month_pane_t1

0xd8b4,	// (0x0003f311) grid_highlight_pane_cp08

0xd77e,	// (0x0003f1db) main_smil_g1

0x7932,	// (0x0003938f) smil_status_pane

0xdc9d,	// (0x0003f6fa) smil_text_pane

0x0593,	// (0x00031ff0) bg_popup_call3_rect_pane_g8

0x059b,	// (0x00031ff8) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x00040fb0) bg_popup_call3_rect_pane_g

0x088f,	// (0x000322ec) smil_status_volume_pane_g1

0x7943,	// (0x000393a0) smil_status_pane_t1

0x8a6b,	// (0x0003a4c8) volume_smil_pane

0xdca7,	// (0x0003f704) list_smil_text_pane

0x795a,	// (0x000393b7) scroll_pane_cp011

0x7963,	// (0x000393c0) smil_text_list_pane_t1_ParamLimits

0x7963,	// (0x000393c0) smil_text_list_pane_t1

0x79a2,	// (0x000393ff) aid_volume_smil_ParamLimits

0x79a2,	// (0x000393ff) aid_volume_smil

0xd77e,	// (0x0003f1db) smil_volume_pane_g1

0xd77e,	// (0x0003f1db) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x00040d17) smil_volume_pane_g

0x6267,	// (0x00037cc4) listscroll_cale_day_pane

0xdcb1,	// (0x0003f70e) bg_cale_pane

0xdcc9,	// (0x0003f726) list_cale_pane

0xdcec,	// (0x0003f749) scroll_pane_cp09

0xdcfd,	// (0x0003f75a) cale_bg_pane_g1

0xdd05,	// (0x0003f762) cale_bg_pane_g2

0xdd0d,	// (0x0003f76a) cale_bg_pane_g3

0xdd15,	// (0x0003f772) cale_bg_pane_g4

0xdd1d,	// (0x0003f77a) cale_bg_pane_g5

0xdd25,	// (0x0003f782) cale_bg_pane_g6

0xdd2d,	// (0x0003f78a) cale_bg_pane_g7

0xdd35,	// (0x0003f792) cale_bg_pane_g8

0xdd3d,	// (0x0003f79a) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x00040d1c) cale_bg_pane_g

0x79cc,	// (0x00039429) list_cale_time_pane_ParamLimits

0x79cc,	// (0x00039429) list_cale_time_pane

0xdd45,	// (0x0003f7a2) list_cale_time_pane_g1_ParamLimits

0xdd45,	// (0x0003f7a2) list_cale_time_pane_g1

0xdd51,	// (0x0003f7ae) list_cale_time_pane_g2_ParamLimits

0xdd51,	// (0x0003f7ae) list_cale_time_pane_g2

0x79e0,	// (0x0003943d) list_cale_time_pane_g3_ParamLimits

0x79e0,	// (0x0003943d) list_cale_time_pane_g3

0x79ec,	// (0x00039449) list_cale_time_pane_g4_ParamLimits

0x79ec,	// (0x00039449) list_cale_time_pane_g4

0x79f8,	// (0x00039455) list_cale_time_pane_g5_ParamLimits

0x79f8,	// (0x00039455) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x00040d2f) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x00040d2f) list_cale_time_pane_g

0xdd6b,	// (0x0003f7c8) list_cale_time_pane_t1_ParamLimits

0xdd6b,	// (0x0003f7c8) list_cale_time_pane_t1

0xdd93,	// (0x0003f7f0) list_cale_time_pane_t2_ParamLimits

0xdd93,	// (0x0003f7f0) list_cale_time_pane_t2

0x7cb5,	// (0x00039712) aid_blid_cardinal_pane

0x7cf3,	// (0x00039750) compass_pane_t4

0xddbb,	// (0x0003f818) list_cale_time_pane_t4_ParamLimits

0xddbb,	// (0x0003f818) list_cale_time_pane_t4

0x7d01,	// (0x0003975e) compass_pane_t5

0x7d0f,	// (0x0003976c) compass_pane_t6

0x7d1d,	// (0x0003977a) compass_pane_t7

0xe228,	// (0x0003fc85) navi_pane_cc_t1

0xe3cd,	// (0x0003fe2a) aid_phob_thumbnail_center_pane

0x829b,	// (0x00039cf8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x00040d3c) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x00040d3c) list_cale_time_pane_t

0xd05e,	// (0x0003eabb) bg_popup_window_pane_cp02_ParamLimits

0xd05e,	// (0x0003eabb) bg_popup_window_pane_cp02

0xdde3,	// (0x0003f840) heading_pane_cp01_ParamLimits

0xdde3,	// (0x0003f840) heading_pane_cp01

0xddef,	// (0x0003f84c) loc_req_pane_ParamLimits

0xddef,	// (0x0003f84c) loc_req_pane

0xddff,	// (0x0003f85c) loc_type_pane_ParamLimits

0xddff,	// (0x0003f85c) loc_type_pane

0xde11,	// (0x0003f86e) loc_type_pane_t1_ParamLimits

0xde11,	// (0x0003f86e) loc_type_pane_t1

0xde23,	// (0x0003f880) loc_type_pane_t2_ParamLimits

0xde23,	// (0x0003f880) loc_type_pane_t2

0xde35,	// (0x0003f892) loc_type_pane_t3_ParamLimits

0xde35,	// (0x0003f892) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x00040d43) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x00040d43) loc_type_pane_t

0xde47,	// (0x0003f8a4) list_loc_req_pane

0xde51,	// (0x0003f8ae) scroll_pane_cp012

0x7a04,	// (0x00039461) list_single_loc_request_popup_menu_pane_ParamLimits

0x7a04,	// (0x00039461) list_single_loc_request_popup_menu_pane

0xde5a,	// (0x0003f8b7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xde5a,	// (0x0003f8b7) list_single_loc_request_popup_menu_pane_g1

0xde66,	// (0x0003f8c3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xde66,	// (0x0003f8c3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x00040d4a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x00040d4a) list_single_loc_request_popup_menu_pane_g

0xde72,	// (0x0003f8cf) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xde72,	// (0x0003f8cf) list_single_loc_request_popup_menu_pane_t1

0x7a16,	// (0x00039473) bg_popup_window_pane_cp03_ParamLimits

0x7a16,	// (0x00039473) bg_popup_window_pane_cp03

0x7a24,	// (0x00039481) heading_loc_req_pane_ParamLimits

0x7a24,	// (0x00039481) heading_loc_req_pane

0x7a30,	// (0x0003948d) popup_dyc_status_message_window_g1_ParamLimits

0x7a30,	// (0x0003948d) popup_dyc_status_message_window_g1

0x7a3c,	// (0x00039499) popup_dyc_status_message_window_t1_ParamLimits

0x7a3c,	// (0x00039499) popup_dyc_status_message_window_t1

0x7a4e,	// (0x000394ab) popup_dyc_status_message_window_t2_ParamLimits

0x7a4e,	// (0x000394ab) popup_dyc_status_message_window_t2

0x7a60,	// (0x000394bd) popup_dyc_status_message_window_t3_ParamLimits

0x7a60,	// (0x000394bd) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x00040d4f) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x00040d4f) popup_dyc_status_message_window_t

0xd405,	// (0x0003ee62) bg_heading_pane_cp01

0xde88,	// (0x0003f8e5) heading_loc_req_pane_g1

0xde90,	// (0x0003f8ed) heading_loc_req_pane_g2

0xde98,	// (0x0003f8f5) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x00040d56) heading_loc_req_pane_g

0xdea0,	// (0x0003f8fd) heading_loc_req_pane_t1

0xdeaf,	// (0x0003f90c) bg_popup_sub_pane_cp01_ParamLimits

0xdeaf,	// (0x0003f90c) bg_popup_sub_pane_cp01

0xdebd,	// (0x0003f91a) popup_cale_events_window_g1_ParamLimits

0xdebd,	// (0x0003f91a) popup_cale_events_window_g1

0xdedd,	// (0x0003f93a) popup_cale_events_window_g2_ParamLimits

0xdedd,	// (0x0003f93a) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x00040d8a) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x00040d8a) popup_cale_events_window_g

0xdefd,	// (0x0003f95a) popup_cale_events_window_t1_ParamLimits

0xdefd,	// (0x0003f95a) popup_cale_events_window_t1

0xdf0f,	// (0x0003f96c) popup_cale_events_window_t2_ParamLimits

0xdf0f,	// (0x0003f96c) popup_cale_events_window_t2

0xdf4d,	// (0x0003f9aa) popup_cale_events_window_t3_ParamLimits

0xdf4d,	// (0x0003f9aa) popup_cale_events_window_t3

0xdf87,	// (0x0003f9e4) popup_cale_events_window_t4_ParamLimits

0xdf87,	// (0x0003f9e4) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x00040d8f) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x00040d8f) popup_cale_events_window_t

0x7a8c,	// (0x000394e9) call_type_pane

0xdfbd,	// (0x0003fa1a) popup_call_status_window_g1

0x7a98,	// (0x000394f5) popup_call_status_window_g2

0x7aa4,	// (0x00039501) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x00040d98) popup_call_status_window_g

0xdfcb,	// (0x0003fa28) call_type_pane_g1

0xdfd4,	// (0x0003fa31) call_type_pane_g2

0x0001,

0xf342,	// (0x00040d9f) call_type_pane_g

0xd405,	// (0x0003ee62) bg_popup_sub_pane_cp02

0xdfdd,	// (0x0003fa3a) listscroll_popup_wml_pane

0xdfe5,	// (0x0003fa42) list_wml_pane

0xdfef,	// (0x0003fa4c) scroll_pane_cp013

0x7ab0,	// (0x0003950d) list_single_graphic_popup_wml_pane_ParamLimits

0x7ab0,	// (0x0003950d) list_single_graphic_popup_wml_pane

0xd77e,	// (0x0003f1db) list_single_graphic_popup_wml_pane_g1

0xdff8,	// (0x0003fa55) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x00040da4) list_single_graphic_popup_wml_pane_g

0xe000,	// (0x0003fa5d) list_single_graphic_popup_wml_pane_t1

0xe016,	// (0x0003fa73) aid_call_pane

0xd658,	// (0x0003f0b5) popup_clock_analogue_window_g1

0xd658,	// (0x0003f0b5) popup_clock_analogue_window_g2

0x7ac4,	// (0x00039521) popup_clock_analogue_window_g3

0x7ac4,	// (0x00039521) popup_clock_analogue_window_g4

0xd77e,	// (0x0003f1db) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x00040da9) popup_clock_analogue_window_g

0x7acc,	// (0x00039529) popup_clock_analogue_window_t1

0x7ada,	// (0x00039537) clock_digital_number_pane_ParamLimits

0x7ada,	// (0x00039537) clock_digital_number_pane

0x7ae6,	// (0x00039543) clock_digital_number_pane_cp02_ParamLimits

0x7ae6,	// (0x00039543) clock_digital_number_pane_cp02

0x7af2,	// (0x0003954f) clock_digital_number_pane_cp03_ParamLimits

0x7af2,	// (0x0003954f) clock_digital_number_pane_cp03

0x7afe,	// (0x0003955b) clock_digital_number_pane_cp04_ParamLimits

0x7afe,	// (0x0003955b) clock_digital_number_pane_cp04

0x7b0a,	// (0x00039567) clock_digital_separator_pane_ParamLimits

0x7b0a,	// (0x00039567) clock_digital_separator_pane

0x7b16,	// (0x00039573) popup_clock_digital_window_t1

0xd77e,	// (0x0003f1db) clock_digital_number_pane_g1

0xd77e,	// (0x0003f1db) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x00040d17) clock_digital_number_pane_g

0xd77e,	// (0x0003f1db) clock_digital_separator_pane_g1

0xd77e,	// (0x0003f1db) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x00040d17) clock_digital_separator_pane_g

0xd405,	// (0x0003ee62) bg_popup_window_pane_cp04

0xe01e,	// (0x0003fa7b) heading_pane_cp03

0xe026,	// (0x0003fa83) listscroll_popup_gms_pane

0xe02e,	// (0x0003fa8b) grid_large_graphic_popup_pane

0xe038,	// (0x0003fa95) listscroll_popup_gms_pane_g1

0xe040,	// (0x0003fa9d) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x00040db4) listscroll_popup_gms_pane_g

0xdb01,	// (0x0003f55e) scroll_pane_cp014

0x7b33,	// (0x00039590) cell_large_graphic_popup_pane_ParamLimits

0x7b33,	// (0x00039590) cell_large_graphic_popup_pane

0x7b4a,	// (0x000395a7) cell_large_graphic_popup_pane_g1_ParamLimits

0x7b4a,	// (0x000395a7) cell_large_graphic_popup_pane_g1

0xe048,	// (0x0003faa5) cell_large_graphic_popup_pane_g2_ParamLimits

0xe048,	// (0x0003faa5) cell_large_graphic_popup_pane_g2

0xe054,	// (0x0003fab1) cell_large_graphic_popup_pane_g3_ParamLimits

0xe054,	// (0x0003fab1) cell_large_graphic_popup_pane_g3

0xe061,	// (0x0003fabe) cell_large_graphic_popup_pane_g4_ParamLimits

0xe061,	// (0x0003fabe) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x00040db9) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x00040db9) cell_large_graphic_popup_pane_g

0xe071,	// (0x0003face) grid_highlight_pane_cp010

0xd77e,	// (0x0003f1db) bg_popup_call_pane_g1

0xe07b,	// (0x0003fad8) list_single_graphic_popup_conf_pane_ParamLimits

0xe07b,	// (0x0003fad8) list_single_graphic_popup_conf_pane

0xe08e,	// (0x0003faeb) list_highlight_pane_cp01

0xe097,	// (0x0003faf4) list_single_graphic_popup_conf_pane_g1

0xe09f,	// (0x0003fafc) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x00040dc2) list_single_graphic_popup_conf_pane_g

0xe0a7,	// (0x0003fb04) list_single_graphic_popup_conf_pane_t1

0xe0b5,	// (0x0003fb12) linegrid_cams_pane_g1

0x7b56,	// (0x000395b3) linegrid_cams_pane_g2

0xd837,	// (0x0003f294) linegrid_cams_pane_g3

0xe0be,	// (0x0003fb1b) linegrid_cams_pane_g4

0x7b5f,	// (0x000395bc) linegrid_cams_pane_g5

0x7b68,	// (0x000395c5) linegrid_cams_pane_g6

0xd8e7,	// (0x0003f344) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x00040dc7) linegrid_cams_pane_g

0xe0c7,	// (0x0003fb24) popup_clock_analogue_window

0xe0c7,	// (0x0003fb24) popup_clock_digital_window

0xd405,	// (0x0003ee62) popup_phob_thumbnail_window

0xd77e,	// (0x0003f1db) call_video_uplink_pane_g1

0xe0d0,	// (0x0003fb2d) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x00040dd6) call_video_uplink_pane_g

0xd8b4,	// (0x0003f311) video_uplink_pane

0xe0d8,	// (0x0003fb35) mce_image_pane_g1

0x7b71,	// (0x000395ce) mce_image_pane_g2

0x7b79,	// (0x000395d6) mce_image_pane_g3

0x7b81,	// (0x000395de) mce_image_pane_g4

0x7b89,	// (0x000395e6) mce_image_pane_g5

0x0004,

0xf37e,	// (0x00040ddb) mce_image_pane_g

0xe0e2,	// (0x0003fb3f) control_top_pane_stacon_cp01_ParamLimits

0xe0e2,	// (0x0003fb3f) control_top_pane_stacon_cp01

0xe0f2,	// (0x0003fb4f) uni_indicator_pane_stacon_cp01_ParamLimits

0xe0f2,	// (0x0003fb4f) uni_indicator_pane_stacon_cp01

0xe103,	// (0x0003fb60) bg_popup_sub_pane_cp03

0xe10d,	// (0x0003fb6a) chi_dic_find_pane

0x7b91,	// (0x000395ee) listscroll_chi_dic_pane

0xe115,	// (0x0003fb72) main_pane_chidic_g1

0xe11d,	// (0x0003fb7a) chi_dic_find_pane_t1

0xe12b,	// (0x0003fb88) find_chidic_pane

0xe134,	// (0x0003fb91) chi_dic_list_pane_ParamLimits

0xe134,	// (0x0003fb91) chi_dic_list_pane

0xe145,	// (0x0003fba2) scroll_pane_cp020

0xe14d,	// (0x0003fbaa) find_chidic_pane_t1

0xd405,	// (0x0003ee62) input_focus_pane_cp06

0x7ba3,	// (0x00039600) list_chi_dic_pane_ParamLimits

0x7ba3,	// (0x00039600) list_chi_dic_pane

0x7bb6,	// (0x00039613) list_chi_dic_pane_t1_ParamLimits

0x7bb6,	// (0x00039613) list_chi_dic_pane_t1

0xd405,	// (0x0003ee62) list_highlight_pane_cp020

0xe15c,	// (0x0003fbb9) bg_cale_heading_pane_g1

0x7bc9,	// (0x00039626) bg_cale_heading_pane_g2

0x7bd1,	// (0x0003962e) bg_cale_heading_pane_g3

0x7bd9,	// (0x00039636) bg_cale_heading_pane_g4

0x7be1,	// (0x0003963e) bg_cale_heading_pane_g5

0x7be9,	// (0x00039646) bg_cale_heading_pane_g6

0x7bf1,	// (0x0003964e) bg_cale_heading_pane_g7

0x7bf9,	// (0x00039656) bg_cale_heading_pane_g8

0x7c01,	// (0x0003965e) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x00040de6) bg_cale_heading_pane_g

0xe15c,	// (0x0003fbb9) bg_cale_side_pane_g1

0x7c09,	// (0x00039666) bg_cale_side_pane_g2

0x7c11,	// (0x0003966e) bg_cale_side_pane_g3

0x7c19,	// (0x00039676) bg_cale_side_pane_g4

0x7c21,	// (0x0003967e) bg_cale_side_pane_g5

0x7c29,	// (0x00039686) bg_cale_side_pane_g6

0x7c31,	// (0x0003968e) bg_cale_side_pane_g7

0x7c39,	// (0x00039696) bg_cale_side_pane_g8

0x7c41,	// (0x0003969e) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x00040df9) bg_cale_side_pane_g

0x7c49,	// (0x000396a6) popup_call_status_window_ParamLimits

0x7c49,	// (0x000396a6) popup_call_status_window

0xe164,	// (0x0003fbc1) stacon_top_pane

0xe16c,	// (0x0003fbc9) status_pane_ParamLimits

0xe16c,	// (0x0003fbc9) status_pane

0xe186,	// (0x0003fbe3) status_small_pane

0xe18e,	// (0x0003fbeb) control_pane

0xd405,	// (0x0003ee62) stacon_bottom_pane

0xe196,	// (0x0003fbf3) list_single_mce_smart_pane_t1_ParamLimits

0xe196,	// (0x0003fbf3) list_single_mce_smart_pane_t1

0xe1a9,	// (0x0003fc06) list_single_mce_smart_pane_t2_ParamLimits

0xe1a9,	// (0x0003fc06) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x00040e0c) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x00040e0c) list_single_mce_smart_pane_t

0x7c58,	// (0x000396b5) compass_pane

0x7c61,	// (0x000396be) main_location2_pane_t1

0x7c77,	// (0x000396d4) main_location2_pane_t2

0x7c8d,	// (0x000396ea) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x00040e11) main_location2_pane_t

0xe1d1,	// (0x0003fc2e) compass_pane_g1_ParamLimits

0xe1d1,	// (0x0003fc2e) compass_pane_g1

0x7cd5,	// (0x00039732) compass_pane_t1

0x7ce4,	// (0x00039741) compass_pane_t2

0x0005,

0xf3bd,	// (0x00040e1a) compass_pane_t

0x7d2b,	// (0x00039788) text_secondary_cp61

0xe21f,	// (0x0003fc7c) navi_pane_cams_g5

0xe26b,	// (0x0003fcc8) navi_pane_im_t1

0xe279,	// (0x0003fcd6) navi_pane_mp_g1_ParamLimits

0xe279,	// (0x0003fcd6) navi_pane_mp_g1

0xe28d,	// (0x0003fcea) navi_pane_mp_g2_ParamLimits

0xe28d,	// (0x0003fcea) navi_pane_mp_g2

0xe299,	// (0x0003fcf6) navi_pane_mp_g3_ParamLimits

0xe299,	// (0x0003fcf6) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x00040e2e) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x00040e2e) navi_pane_mp_g

0xe2a5,	// (0x0003fd02) navi_pane_mp_t1

0xe2b3,	// (0x0003fd10) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x00040e35) navi_pane_mp_t

0xe31e,	// (0x0003fd7b) navi_pane_vt_g1

0xe2a5,	// (0x0003fd02) navi_pane_vt_t1

0xe326,	// (0x0003fd83) navi_slider_pane

0xd900,	// (0x0003f35d) zooming_pane

0xe32e,	// (0x0003fd8b) navi_slider_pane_g1

0x7dad,	// (0x0003980a) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x00040e3c) navi_slider_pane_g

0xe352,	// (0x0003fdaf) aid_levels_zoom

0xe35a,	// (0x0003fdb7) zooming_pane_g1

0xe362,	// (0x0003fdbf) zooming_pane_g2

0xe362,	// (0x0003fdbf) zooming_pane_g3

0x0002,

0xf3ee,	// (0x00040e4b) zooming_pane_g

0xe36a,	// (0x0003fdc7) level_10_zoom

0xe373,	// (0x0003fdd0) level_11_zoom

0xe37c,	// (0x0003fdd9) level_1_zoom

0xe385,	// (0x0003fde2) level_2_zoom

0xe38e,	// (0x0003fdeb) level_3_zoom

0xe397,	// (0x0003fdf4) level_4_zoom

0xe3a0,	// (0x0003fdfd) level_5_zoom

0xe3a9,	// (0x0003fe06) level_6_zoom

0xe3b2,	// (0x0003fe0f) level_7_zoom

0xe3bb,	// (0x0003fe18) level_8_zoom

0xe3c4,	// (0x0003fe21) level_9_zoom

0xe3d5,	// (0x0003fe32) popup_phob_thumbnail_window_g1

0xe3dd,	// (0x0003fe3a) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x00040e52) popup_phob_thumbnail_window_g

0x0735,	// (0x00032192) level_1_location

0x073d,	// (0x0003219a) level_2_location

0x0745,	// (0x000321a2) level_3_location

0x074d,	// (0x000321aa) level_4_location

0xd900,	// (0x0003f35d) level_5_location

0x7dbf,	// (0x0003981c) mce_icon_pane_g1

0x7dc7,	// (0x00039824) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x00040e57) mce_icon_pane_g

0x7dcf,	// (0x0003982c) main_mup_pane_g1_ParamLimits

0x7dcf,	// (0x0003982c) main_mup_pane_g1

0x7de7,	// (0x00039844) main_mup_pane_g2_ParamLimits

0x7de7,	// (0x00039844) main_mup_pane_g2

0x7e03,	// (0x00039860) main_mup_pane_g3_ParamLimits

0x7e03,	// (0x00039860) main_mup_pane_g3

0x7e1f,	// (0x0003987c) main_mup_pane_g4_ParamLimits

0x7e1f,	// (0x0003987c) main_mup_pane_g4

0x7e3b,	// (0x00039898) main_mup_pane_g5_ParamLimits

0x7e3b,	// (0x00039898) main_mup_pane_g5

0x7e58,	// (0x000398b5) main_mup_pane_g6_ParamLimits

0x7e58,	// (0x000398b5) main_mup_pane_g6

0x7e74,	// (0x000398d1) main_mup_pane_g7_ParamLimits

0x7e74,	// (0x000398d1) main_mup_pane_g7

0x7e90,	// (0x000398ed) main_mup_pane_g8_ParamLimits

0x7e90,	// (0x000398ed) main_mup_pane_g8

0x7eac,	// (0x00039909) main_mup_pane_g9_ParamLimits

0x7eac,	// (0x00039909) main_mup_pane_g9

0x7ec3,	// (0x00039920) main_mup_pane_g10_ParamLimits

0x7ec3,	// (0x00039920) main_mup_pane_g10

0x7eda,	// (0x00039937) main_mup_pane_g11_ParamLimits

0x7eda,	// (0x00039937) main_mup_pane_g11

0x7eee,	// (0x0003994b) main_mup_pane_g12_ParamLimits

0x7eee,	// (0x0003994b) main_mup_pane_g12

0x7efa,	// (0x00039957) main_mup_pane_g13_ParamLimits

0x7efa,	// (0x00039957) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x00040e5c) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x00040e5c) main_mup_pane_g

0x7f0e,	// (0x0003996b) main_mup_pane_t1_ParamLimits

0x7f0e,	// (0x0003996b) main_mup_pane_t1

0x7f2b,	// (0x00039988) main_mup_pane_t2_ParamLimits

0x7f2b,	// (0x00039988) main_mup_pane_t2

0x7f45,	// (0x000399a2) main_mup_pane_t3_ParamLimits

0x7f45,	// (0x000399a2) main_mup_pane_t3

0x7f5f,	// (0x000399bc) main_mup_pane_t4_ParamLimits

0x7f5f,	// (0x000399bc) main_mup_pane_t4

0x7f71,	// (0x000399ce) main_mup_pane_t5_ParamLimits

0x7f71,	// (0x000399ce) main_mup_pane_t5

0x7f83,	// (0x000399e0) main_mup_pane_t6_ParamLimits

0x7f83,	// (0x000399e0) main_mup_pane_t6

0x0005,

0xf41a,	// (0x00040e77) main_mup_pane_t_ParamLimits

0xf41a,	// (0x00040e77) main_mup_pane_t

0x7f99,	// (0x000399f6) mup_progress_pane_ParamLimits

0x7f99,	// (0x000399f6) mup_progress_pane

0x7fa5,	// (0x00039a02) mup_visualizer_pane_ParamLimits

0x7fa5,	// (0x00039a02) mup_visualizer_pane

0x7fd3,	// (0x00039a30) mup_volume_pane_ParamLimits

0x7fd3,	// (0x00039a30) mup_volume_pane

0xdfbd,	// (0x0003fa1a) mup_visualizer_pane_g1_ParamLimits

0xdfbd,	// (0x0003fa1a) mup_visualizer_pane_g1

0xdfbd,	// (0x0003fa1a) mup_visualizer_pane_g2_ParamLimits

0xdfbd,	// (0x0003fa1a) mup_visualizer_pane_g2

0xe1d1,	// (0x0003fc2e) mup_visualizer_pane_g3_ParamLimits

0xe1d1,	// (0x0003fc2e) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x00040e84) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x00040e84) mup_visualizer_pane_g

0xd77e,	// (0x0003f1db) mup_volume_pane_g1

0xe3ed,	// (0x0003fe4a) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x00040e8b) mup_volume_pane_g

0xd77e,	// (0x0003f1db) mup_progress_pane_g1

0xe3f6,	// (0x0003fe53) mup_progress_pane_g2

0xe3ff,	// (0x0003fe5c) mup_progress_pane_g3

0x0002,

0xf433,	// (0x00040e90) mup_progress_pane_g

0xd405,	// (0x0003ee62) bg_popup_window_pane_cp05

0xe408,	// (0x0003fe65) heading_pane_cp02_ParamLimits

0xe408,	// (0x0003fe65) heading_pane_cp02

0xe422,	// (0x0003fe7f) list_popup_blid_pane

0xe42a,	// (0x0003fe87) list_blid_sat_info_pane_ParamLimits

0xe42a,	// (0x0003fe87) list_blid_sat_info_pane

0xe43d,	// (0x0003fe9a) list_blid_sat_info_pane_g1

0xe445,	// (0x0003fea2) list_blid_sat_info_pane_t1

0x80c6,	// (0x00039b23) mup_equalizer_pane_ParamLimits

0x80c6,	// (0x00039b23) mup_equalizer_pane

0x80df,	// (0x00039b3c) mup_equalizer_pane_cp1_ParamLimits

0x80df,	// (0x00039b3c) mup_equalizer_pane_cp1

0x80f8,	// (0x00039b55) mup_equalizer_pane_cp2_ParamLimits

0x80f8,	// (0x00039b55) mup_equalizer_pane_cp2

0x8111,	// (0x00039b6e) mup_equalizer_pane_cp3_ParamLimits

0x8111,	// (0x00039b6e) mup_equalizer_pane_cp3

0x812a,	// (0x00039b87) mup_equalizer_pane_cp4_ParamLimits

0x812a,	// (0x00039b87) mup_equalizer_pane_cp4

0x8143,	// (0x00039ba0) mup_equalizer_pane_cp5

0x8155,	// (0x00039bb2) mup_equalizer_pane_cp6

0x8167,	// (0x00039bc4) mup_equalizer_pane_cp7

0x0613,	// (0x00032070) bg_popup_call_poc_act_pane_g9

0x061b,	// (0x00032078) bg_popup_call_poc_act_pane_g10

0x0623,	// (0x00032080) bg_popup_call_poc_act_pane_g11

0x000a,

0xd660,	// (0x0003f0bd) mup_scale_pane

0xd77e,	// (0x0003f1db) mup_scale_pane_g1

0xe453,	// (0x0003feb0) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x00040eac) mup_scale_pane_g

0xe477,	// (0x0003fed4) msg_data_pane

0xe47f,	// (0x0003fedc) scroll_pane_cp017

0x4a1e,	// (0x0003647b) bg_list_pane_cp04_ParamLimits

0x4a1e,	// (0x0003647b) bg_list_pane_cp04

0xe487,	// (0x0003fee4) msg_data_pane_g1

0x7b71,	// (0x000395ce) msg_data_pane_g2

0x7b79,	// (0x000395d6) msg_data_pane_g3

0x818b,	// (0x00039be8) msg_data_pane_g4

0x7b89,	// (0x000395e6) msg_data_pane_g5

0x7dbf,	// (0x0003981c) msg_data_pane_g6

0x8193,	// (0x00039bf0) msg_data_pane_g7

0x0006,

0xf45e,	// (0x00040ebb) msg_data_pane_g

0x4a3e,	// (0x0003649b) msg_text_pane_ParamLimits

0x4a3e,	// (0x0003649b) msg_text_pane

0x819b,	// (0x00039bf8) qrid_highlight_pane_cp011_ParamLimits

0x819b,	// (0x00039bf8) qrid_highlight_pane_cp011

0xd405,	// (0x0003ee62) msg_body_pane

0xd405,	// (0x0003ee62) msg_header_pane

0xe498,	// (0x0003fef5) input_focus_pane_cp07

0x4a76,	// (0x000364d3) msg_header_pane_t1_ParamLimits

0x4a76,	// (0x000364d3) msg_header_pane_t1

0x4a88,	// (0x000364e5) msg_header_pane_t2_ParamLimits

0x4a88,	// (0x000364e5) msg_header_pane_t2

0x0001,

0xf472,	// (0x00040ecf) msg_header_pane_t_ParamLimits

0xf472,	// (0x00040ecf) msg_header_pane_t

0xe4ad,	// (0x0003ff0a) msg_body_pane_g1

0x4a9a,	// (0x000364f7) msg_body_pane_t1_ParamLimits

0x4a9a,	// (0x000364f7) msg_body_pane_t1

0x4ac5,	// (0x00036522) msg_body_pane_t2_ParamLimits

0x4ac5,	// (0x00036522) msg_body_pane_t2

0x4ad7,	// (0x00036534) msg_body_pane_t3_ParamLimits

0x4ad7,	// (0x00036534) msg_body_pane_t3

0x0002,

0xf477,	// (0x00040ed4) msg_body_pane_t_ParamLimits

0xf477,	// (0x00040ed4) msg_body_pane_t

0x81ff,	// (0x00039c5c) main_viewer_pane_g1_ParamLimits

0x81ff,	// (0x00039c5c) main_viewer_pane_g1

0x820b,	// (0x00039c68) main_viewer_pane_g2_ParamLimits

0x820b,	// (0x00039c68) main_viewer_pane_g2

0x8217,	// (0x00039c74) main_viewer_pane_g3_ParamLimits

0x8217,	// (0x00039c74) main_viewer_pane_g3

0x8226,	// (0x00039c83) main_viewer_pane_g4_ParamLimits

0x8226,	// (0x00039c83) main_viewer_pane_g4

0x8235,	// (0x00039c92) main_viewer_pane_g5_ParamLimits

0x8235,	// (0x00039c92) main_viewer_pane_g5

0x8235,	// (0x00039c92) main_viewer_pane_g7_ParamLimits

0x8235,	// (0x00039c92) main_viewer_pane_g7

0x8247,	// (0x00039ca4) main_viewer_pane_g8_ParamLimits

0x8247,	// (0x00039ca4) main_viewer_pane_g8

0x0007,

0xf487,	// (0x00040ee4) main_viewer_pane_g_ParamLimits

0xf487,	// (0x00040ee4) main_viewer_pane_g

0xe4b5,	// (0x0003ff12) viewer_content_pane_ParamLimits

0xe4b5,	// (0x0003ff12) viewer_content_pane

0x8277,	// (0x00039cd4) main_postcard_pane_g1_ParamLimits

0x8277,	// (0x00039cd4) main_postcard_pane_g1

0x8283,	// (0x00039ce0) main_postcard_pane_g2_ParamLimits

0x8283,	// (0x00039ce0) main_postcard_pane_g2

0x828f,	// (0x00039cec) main_postcard_pane_g3_ParamLimits

0x828f,	// (0x00039cec) main_postcard_pane_g3

0x0005,

0xf498,	// (0x00040ef5) main_postcard_pane_g_ParamLimits

0xf498,	// (0x00040ef5) main_postcard_pane_g

0x829b,	// (0x00039cf8) main_postcard_pane_g4

0x087c,	// (0x000322d9) smil_status_volume_pane_g2

0x82bf,	// (0x00039d1c) postcard_pane_ParamLimits

0x82bf,	// (0x00039d1c) postcard_pane

0xdfbd,	// (0x0003fa1a) postcard_pane_g1_ParamLimits

0xdfbd,	// (0x0003fa1a) postcard_pane_g1

0x82ef,	// (0x00039d4c) postcard_pane_g2_ParamLimits

0x82ef,	// (0x00039d4c) postcard_pane_g2

0x82fb,	// (0x00039d58) postcard_pane_g3_ParamLimits

0x82fb,	// (0x00039d58) postcard_pane_g3

0xe4c3,	// (0x0003ff20) postcard_pane_g4_ParamLimits

0xe4c3,	// (0x0003ff20) postcard_pane_g4

0x8307,	// (0x00039d64) postcard_pane_g5_ParamLimits

0x8307,	// (0x00039d64) postcard_pane_g5

0x8313,	// (0x00039d70) postcard_pane_g6_ParamLimits

0x8313,	// (0x00039d70) postcard_pane_g6

0xe4d1,	// (0x0003ff2e) postcard_pane_g7_ParamLimits

0xe4d1,	// (0x0003ff2e) postcard_pane_g7

0x0006,

0xf4a5,	// (0x00040f02) postcard_pane_g_ParamLimits

0xf4a5,	// (0x00040f02) postcard_pane_g

0x831f,	// (0x00039d7c) main_mp2_pane_g1_ParamLimits

0x831f,	// (0x00039d7c) main_mp2_pane_g1

0x832b,	// (0x00039d88) main_mp2_pane_g2_ParamLimits

0x832b,	// (0x00039d88) main_mp2_pane_g2

0x8337,	// (0x00039d94) main_mp2_pane_g3_ParamLimits

0x8337,	// (0x00039d94) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x00040f11) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x00040f11) main_mp2_pane_g

0x8343,	// (0x00039da0) main_mp2_pane_t1_ParamLimits

0x8343,	// (0x00039da0) main_mp2_pane_t1

0x8358,	// (0x00039db5) main_mp2_pane_t2_ParamLimits

0x8358,	// (0x00039db5) main_mp2_pane_t2

0x836a,	// (0x00039dc7) main_mp2_pane_t3_ParamLimits

0x836a,	// (0x00039dc7) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x00040f18) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x00040f18) main_mp2_pane_t

0xe4df,	// (0x0003ff3c) pec_content_pane_ParamLimits

0xe4df,	// (0x0003ff3c) pec_content_pane

0xdb01,	// (0x0003f55e) scroll_pane_cp015

0xe4f1,	// (0x0003ff4e) pec_attribute_pane_ParamLimits

0xe4f1,	// (0x0003ff4e) pec_attribute_pane

0x837c,	// (0x00039dd9) pec_content_pane_g1_ParamLimits

0x837c,	// (0x00039dd9) pec_content_pane_g1

0xe501,	// (0x0003ff5e) pec_content_pane_t1_ParamLimits

0xe501,	// (0x0003ff5e) pec_content_pane_t1

0xe513,	// (0x0003ff70) pec_content_pane_t2_ParamLimits

0xe513,	// (0x0003ff70) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x00040f1f) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x00040f1f) pec_content_pane_t

0x8388,	// (0x00039de5) list_single_graphic_pane_cp01_ParamLimits

0x8388,	// (0x00039de5) list_single_graphic_pane_cp01

0xd660,	// (0x0003f0bd) bg_popup_sub_pane_cp04

0xe525,	// (0x0003ff82) popup_mup_playback_window_g1

0xe531,	// (0x0003ff8e) popup_mup_playback_window_t1

0xe546,	// (0x0003ffa3) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x00040f24) popup_mup_playback_window_t

0xe57d,	// (0x0003ffda) main_image_pane_g1_ParamLimits

0xe57d,	// (0x0003ffda) main_image_pane_g1

0xe5c0,	// (0x0004001d) scroll_pane_cp018_ParamLimits

0xe5c0,	// (0x0004001d) scroll_pane_cp018

0xe5d8,	// (0x00040035) scroll_pane_cp016_ParamLimits

0xe5d8,	// (0x00040035) scroll_pane_cp016

0x840d,	// (0x00039e6a) smil2_image_pane_ParamLimits

0x840d,	// (0x00039e6a) smil2_image_pane

0x8435,	// (0x00039e92) smil2_root_pane_ParamLimits

0x8435,	// (0x00039e92) smil2_root_pane

0x8461,	// (0x00039ebe) smil2_text_pane_ParamLimits

0x8461,	// (0x00039ebe) smil2_text_pane

0xd405,	// (0x0003ee62) bg_list_pane_cp06

0xe60c,	// (0x00040069) grid_radio_pane

0xd405,	// (0x0003ee62) bg_popup_window_pane_cp06

0xe614,	// (0x00040071) main_fmradio_pane_t1

0xe01e,	// (0x0003fa7b) heading_pane_cp04

0xe622,	// (0x0004007f) main_fmradio_pane_t2

0x066b,	// (0x000320c8) popup_cale_lunar_info_window_g1

0xe630,	// (0x0004008d) main_fmradio_pane_t3

0x0673,	// (0x000320d0) popup_cale_lunar_info_window_g2

0xe63e,	// (0x0004009b) main_fmradio_pane_t4

0x0001,

0xe64c,	// (0x000400a9) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x00041012) popup_cale_lunar_info_window_g

0xf4dc,	// (0x00040f39) main_fmradio_pane_t

0xe65a,	// (0x000400b7) wait_bar_pane_cp03

0xd940,	// (0x0003f39d) cell_fmradio_pane_ParamLimits

0xd940,	// (0x0003f39d) cell_fmradio_pane

0xe4d1,	// (0x0003ff2e) cell_fmradio_pane_g1_ParamLimits

0xe4d1,	// (0x0003ff2e) cell_fmradio_pane_g1

0xd405,	// (0x0003ee62) grid_highlight_pane_cp011

0xe662,	// (0x000400bf) poc_content_pane_ParamLimits

0xe662,	// (0x000400bf) poc_content_pane

0xe675,	// (0x000400d2) scroll_pane_cp019

0x8495,	// (0x00039ef2) popup_call_poc_act_window_ParamLimits

0x8495,	// (0x00039ef2) popup_call_poc_act_window

0x84a2,	// (0x00039eff) popup_call_poc_inact_window_ParamLimits

0x84a2,	// (0x00039eff) popup_call_poc_inact_window

0xf579,	// (0x00040fd6) bg_popup_call_poc_act_pane_g

0x062b,	// (0x00032088) bg_popup_call_poc_inact_pane_g1

0x0633,	// (0x00032090) bg_popup_call_poc_inact_pane_g2

0xe67d,	// (0x000400da) popup_call_poc_act_window_g2

0x063b,	// (0x00032098) bg_popup_call_poc_inact_pane_g3

0x05bb,	// (0x00032018) bg_popup_call_poc_inact_pane_g4

0x0643,	// (0x000320a0) bg_popup_call_poc_inact_pane_g5

0xe685,	// (0x000400e2) popup_call_poc_act_window_t1_ParamLimits

0xe685,	// (0x000400e2) popup_call_poc_act_window_t1

0xe6ad,	// (0x0004010a) popup_call_poc_act_window_t2_ParamLimits

0xe6ad,	// (0x0004010a) popup_call_poc_act_window_t2

0xe6d5,	// (0x00040132) popup_call_poc_act_window_t3_ParamLimits

0xe6d5,	// (0x00040132) popup_call_poc_act_window_t3

0xe6fd,	// (0x0004015a) popup_call_poc_act_window_t4_ParamLimits

0xe6fd,	// (0x0004015a) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x00040f44) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x00040f44) popup_call_poc_act_window_t

0x064b,	// (0x000320a8) bg_popup_call_poc_inact_pane_g6

0x0653,	// (0x000320b0) bg_popup_call_poc_inact_pane_g7

0x065b,	// (0x000320b8) bg_popup_call_poc_inact_pane_g8

0xe70f,	// (0x0004016c) popup_call_poc_inact_window_g2

0x0663,	// (0x000320c0) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x00040fed) bg_popup_call_poc_inact_pane_g

0xe717,	// (0x00040174) popup_call_poc_inact_window_t1_ParamLimits

0xe717,	// (0x00040174) popup_call_poc_inact_window_t1

0xe72c,	// (0x00040189) popup_call_poc_inact_window_t2_ParamLimits

0xe72c,	// (0x00040189) popup_call_poc_inact_window_t2

0xe741,	// (0x0004019e) popup_call_poc_inact_window_t3_ParamLimits

0xe741,	// (0x0004019e) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x00040f4d) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x00040f4d) popup_call_poc_inact_window_t

0x0802,	// (0x0003225f) context_pane_ParamLimits

0x89d9,	// (0x0003a436) signal_pane_ParamLimits

0xd900,	// (0x0003f35d) main_call2_pane

0x895b,	// (0x0003a3b8) popup_phob_thumbnail2_window_ParamLimits

0x895b,	// (0x0003a3b8) popup_phob_thumbnail2_window

0x81b1,	// (0x00039c0e) aid_hotspot_pointer_arrow_pane

0x81b9,	// (0x00039c16) aid_hotspot_pointer_hand_pane

0x8751,	// (0x0003a1ae) phob_pre_status_pane_g5

0x6873,	// (0x000382d0) cams_zoom_pane_ParamLimits

0x687f,	// (0x000382dc) image_vga_pane_ParamLimits

0x688c,	// (0x000382e9) main_camera_pane_g1_ParamLimits

0x6898,	// (0x000382f5) main_camera_pane_g2_ParamLimits

0x68a4,	// (0x00038301) main_camera_pane_g3_ParamLimits

0x68b0,	// (0x0003830d) main_camera_pane_g4_ParamLimits

0x68bc,	// (0x00038319) main_camera_pane_g5_ParamLimits

0x68c8,	// (0x00038325) main_camera_pane_g6_ParamLimits

0x68d4,	// (0x00038331) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x00040c4c) main_camera_pane_g_ParamLimits

0x68e0,	// (0x0003833d) main_camera_pane_t1_ParamLimits

0x68f2,	// (0x0003834f) main_camera_pane_t2_ParamLimits

0xf200,	// (0x00040c5d) main_camera_pane_t_ParamLimits

0xd660,	// (0x0003f0bd) bg_popup_preview_window_pane_cp01_ParamLimits

0xd660,	// (0x0003f0bd) bg_popup_preview_window_pane_cp01

0xe756,	// (0x000401b3) popup_phob_thumbnail2_window_g1_ParamLimits

0xe756,	// (0x000401b3) popup_phob_thumbnail2_window_g1

0xd405,	// (0x0003ee62) call2_cli_visual_pane

0x84be,	// (0x00039f1b) popup_call2_audio_conf_window_ParamLimits

0x84be,	// (0x00039f1b) popup_call2_audio_conf_window

0x84d1,	// (0x00039f2e) popup_call2_audio_first_window_ParamLimits

0x84d1,	// (0x00039f2e) popup_call2_audio_first_window

0x854d,	// (0x00039faa) popup_call2_audio_in_window_ParamLimits

0x854d,	// (0x00039faa) popup_call2_audio_in_window

0x857d,	// (0x00039fda) popup_call2_audio_out_window_ParamLimits

0x857d,	// (0x00039fda) popup_call2_audio_out_window

0x85c9,	// (0x0003a026) popup_call2_audio_second_window_ParamLimits

0x85c9,	// (0x0003a026) popup_call2_audio_second_window

0x8615,	// (0x0003a072) popup_call2_audio_wait_window_ParamLimits

0x8615,	// (0x0003a072) popup_call2_audio_wait_window

0xd405,	// (0x0003ee62) bg_popup_call2_act_pane_cp03

0xd642,	// (0x0003f09f) list_conf_pane_cp

0xe762,	// (0x000401bf) popup_call2_audio_conf_window_t1

0xe07b,	// (0x0003fad8) list_single_graphic_popup_conf2_pane_ParamLimits

0xe07b,	// (0x0003fad8) list_single_graphic_popup_conf2_pane

0xe08e,	// (0x0003faeb) list_highlight_pane_cp04

0xe770,	// (0x000401cd) list_single_graphic_popup_conf2_pane_g1

0xe09f,	// (0x0003fafc) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x00040f54) list_single_graphic_popup_conf2_pane_g

0xe778,	// (0x000401d5) list_single_graphic_popup_conf2_pane_t1

0xe786,	// (0x000401e3) bg_popup_call2_act_pane_cp01_ParamLimits

0xe786,	// (0x000401e3) bg_popup_call2_act_pane_cp01

0xe810,	// (0x0004026d) call_type_pane_cp05_ParamLimits

0xe810,	// (0x0004026d) call_type_pane_cp05

0xe864,	// (0x000402c1) popup_call2_audio_second_window_g1_ParamLimits

0xe864,	// (0x000402c1) popup_call2_audio_second_window_g1

0xe8b8,	// (0x00040315) popup_call2_audio_second_window_g2_ParamLimits

0xe8b8,	// (0x00040315) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x00040f59) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x00040f59) popup_call2_audio_second_window_g

0xe91d,	// (0x0004037a) popup_call2_audio_second_window_t1_ParamLimits

0xe91d,	// (0x0004037a) popup_call2_audio_second_window_t1

0xe9d8,	// (0x00040435) popup_call2_audio_second_window_t2_ParamLimits

0xe9d8,	// (0x00040435) popup_call2_audio_second_window_t2

0xea2b,	// (0x00040488) popup_call2_audio_second_window_t3_ParamLimits

0xea2b,	// (0x00040488) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x00040f60) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x00040f60) popup_call2_audio_second_window_t

0xd405,	// (0x0003ee62) bg_popup_call2_in_pane_cp02

0xd40f,	// (0x0003ee6c) call_type_pane_cp04

0xd417,	// (0x0003ee74) popup_call2_audio_wait_window_g1

0xd41f,	// (0x0003ee7c) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x00040b3b) popup_call2_audio_wait_window_g

0xd427,	// (0x0003ee84) popup_call2_audio_wait_window_t3

0xeb1e,	// (0x0004057b) bg_popup_call2_act_pane_ParamLimits

0xeb1e,	// (0x0004057b) bg_popup_call2_act_pane

0xebde,	// (0x0004063b) call_type_pane_cp03_ParamLimits

0xebde,	// (0x0004063b) call_type_pane_cp03

0xec42,	// (0x0004069f) popup_call2_audio_first_window_g1_ParamLimits

0xec42,	// (0x0004069f) popup_call2_audio_first_window_g1

0xecb2,	// (0x0004070f) popup_call2_audio_first_window_g2_ParamLimits

0xecb2,	// (0x0004070f) popup_call2_audio_first_window_g2

0xdfbd,	// (0x0003fa1a) popup_call2_audio_first_window_g3_ParamLimits

0xdfbd,	// (0x0003fa1a) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x00040f69) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x00040f69) popup_call2_audio_first_window_g

0xed90,	// (0x000407ed) popup_call2_audio_first_window_t1_ParamLimits

0xed90,	// (0x000407ed) popup_call2_audio_first_window_t1

0xee93,	// (0x000408f0) popup_call2_audio_first_window_t4_ParamLimits

0xee93,	// (0x000408f0) popup_call2_audio_first_window_t4

0xef76,	// (0x000409d3) popup_call2_audio_first_window_t5_ParamLimits

0xef76,	// (0x000409d3) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x00040f74) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x00040f74) popup_call2_audio_first_window_t

0xd658,	// (0x0003f0b5) bg_popup_call2_act_pane_g1

0x067b,	// (0x000320d8) popup_cale_lunar_info_window_t1

0x0689,	// (0x000320e6) popup_cale_lunar_info_window_t2

0x0697,	// (0x000320f4) popup_cale_lunar_info_window_t3

0xd405,	// (0x0003ee62) bg_popup_call2_bubble_pane

0x00cf,	// (0x00031b2c) bg_popup_call2_in_pane_cp01_ParamLimits

0x00cf,	// (0x00031b2c) bg_popup_call2_in_pane_cp01

0xd0e1,	// (0x0003eb3e) call_type_pane_cp02

0x0117,	// (0x00031b74) popup_call2_audio_out_window_g1_ParamLimits

0x0117,	// (0x00031b74) popup_call2_audio_out_window_g1

0x0143,	// (0x00031ba0) popup_call2_audio_out_window_g2_ParamLimits

0x0143,	// (0x00031ba0) popup_call2_audio_out_window_g2

0x016b,	// (0x00031bc8) popup_call2_audio_out_window_g3_ParamLimits

0x016b,	// (0x00031bc8) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x00040f7d) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x00040f7d) popup_call2_audio_out_window_g

0x01a6,	// (0x00031c03) popup_call2_audio_out_window_t1_ParamLimits

0x01a6,	// (0x00031c03) popup_call2_audio_out_window_t1

0x0205,	// (0x00031c62) popup_call2_audio_out_window_t2_ParamLimits

0x0205,	// (0x00031c62) popup_call2_audio_out_window_t2

0x0259,	// (0x00031cb6) popup_call2_audio_out_window_t3_ParamLimits

0x0259,	// (0x00031cb6) popup_call2_audio_out_window_t3

0x026f,	// (0x00031ccc) popup_call2_audio_out_window_t4_ParamLimits

0x026f,	// (0x00031ccc) popup_call2_audio_out_window_t4

0x0285,	// (0x00031ce2) popup_call2_audio_out_window_t5_ParamLimits

0x0285,	// (0x00031ce2) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x00040f86) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x00040f86) popup_call2_audio_out_window_t

0x02e9,	// (0x00031d46) bg_popup_call2_in_pane_ParamLimits

0x02e9,	// (0x00031d46) bg_popup_call2_in_pane

0x0345,	// (0x00031da2) popup_call2_audio_in_window_g1_ParamLimits

0x0345,	// (0x00031da2) popup_call2_audio_in_window_g1

0x037d,	// (0x00031dda) popup_call2_audio_in_window_g2_ParamLimits

0x037d,	// (0x00031dda) popup_call2_audio_in_window_g2

0x03b5,	// (0x00031e12) popup_call2_audio_in_window_g3_ParamLimits

0x03b5,	// (0x00031e12) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x00040f93) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x00040f93) popup_call2_audio_in_window_g

0x040d,	// (0x00031e6a) popup_call2_audio_in_window_t1_ParamLimits

0x040d,	// (0x00031e6a) popup_call2_audio_in_window_t1

0x048d,	// (0x00031eea) popup_call2_audio_in_window_t2_ParamLimits

0x048d,	// (0x00031eea) popup_call2_audio_in_window_t2

0x050d,	// (0x00031f6a) popup_call2_audio_in_window_t3_ParamLimits

0x050d,	// (0x00031f6a) popup_call2_audio_in_window_t3

0x0527,	// (0x00031f84) popup_call2_audio_in_window_t4_ParamLimits

0x0527,	// (0x00031f84) popup_call2_audio_in_window_t4

0x0539,	// (0x00031f96) popup_call2_audio_in_window_t5_ParamLimits

0x0539,	// (0x00031f96) popup_call2_audio_in_window_t5

0x054e,	// (0x00031fab) popup_call2_audio_in_window_t6_ParamLimits

0x054e,	// (0x00031fab) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x00040f9c) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x00040f9c) popup_call2_audio_in_window_t

0xd658,	// (0x0003f0b5) bg_popup_call2_in_pane_g1

0x06a5,	// (0x00032102) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x00041017) popup_cale_lunar_info_window_t

0xd660,	// (0x0003f0bd) bg_popup_call2_rect_pane_ParamLimits

0xd660,	// (0x0003f0bd) bg_popup_call2_rect_pane

0xd405,	// (0x0003ee62) call2_cli_visual_graphic_pane

0xd405,	// (0x0003ee62) call2_cli_visual_text_pane

0x8a5e,	// (0x0003a4bb) smil_status_volume_pane_g3

0x0002,

0xd77e,	// (0x0003f1db) call2_cli_visual_graphic_pane_g1

0xd77e,	// (0x0003f1db) call2_cli_visual_graphic_pane_g2

0xd77e,	// (0x0003f1db) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x00040fa9) call2_cli_visual_graphic_pane_g

0x0563,	// (0x00031fc0) bg_popup_call2_rect_pane_g1

0xd81c,	// (0x0003f279) bg_popup_call2_rect_pane_g2

0x056b,	// (0x00031fc8) bg_popup_call2_rect_pane_g3

0x0573,	// (0x00031fd0) bg_popup_call2_rect_pane_g4

0x057b,	// (0x00031fd8) bg_popup_call2_rect_pane_g5

0x0583,	// (0x00031fe0) bg_popup_call2_rect_pane_g6

0x058b,	// (0x00031fe8) bg_popup_call2_rect_pane_g7

0x0593,	// (0x00031ff0) bg_popup_call2_rect_pane_g8

0x059b,	// (0x00031ff8) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x00040fb0) bg_popup_call2_rect_pane_g

0x05a3,	// (0x00032000) bg_popup_call2_bubble_pane_g1

0x05ab,	// (0x00032008) bg_popup_call2_bubble_pane_g2

0x05b3,	// (0x00032010) bg_popup_call2_bubble_pane_g3

0x05bb,	// (0x00032018) bg_popup_call2_bubble_pane_g4

0x05c3,	// (0x00032020) bg_popup_call2_bubble_pane_g5

0x05cb,	// (0x00032028) bg_popup_call2_bubble_pane_g6

0x05d3,	// (0x00032030) bg_popup_call2_bubble_pane_g7

0x05db,	// (0x00032038) bg_popup_call2_bubble_pane_g8

0x05e3,	// (0x00032040) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x00040fc3) bg_popup_call2_bubble_pane_g

0x6277,	// (0x00037cd4) aid_cale_week_size_cell_pane

0x6904,	// (0x00038361) aid_cams_cif_uncrop_pane_ParamLimits

0x6904,	// (0x00038361) aid_cams_cif_uncrop_pane

0x6a5c,	// (0x000384b9) aid_cams_size_cell_ParamLimits

0x6a5c,	// (0x000384b9) aid_cams_size_cell

0x6a68,	// (0x000384c5) grid_cams_pane_ParamLimits

0x6a74,	// (0x000384d1) linegrid_cams_pane_ParamLimits

0x6b33,	// (0x00038590) call_video_pane_t1

0x6b50,	// (0x000385ad) call_video_pane_t2

0x0001,

0xf253,	// (0x00040cb0) call_video_pane_t

0x6f32,	// (0x0003898f) aid_cale_month_size_cell_pane_ParamLimits

0x6f32,	// (0x0003898f) aid_cale_month_size_cell_pane

0xf603,	// (0x00041060) smil_status_volume_pane_g

0x8a6b,	// (0x0003a4c8) volume_smil_pane_ParamLimits

0x5ae0,	// (0x0003753d) aid_popup2_width_pane

0x6192,	// (0x00037bef) cell_qdial_pane_g4_ParamLimits

0x6192,	// (0x00037bef) cell_qdial_pane_g4

0x7cb5,	// (0x00039712) aid_blid_cardinal_pane_ParamLimits

0x7cc1,	// (0x0003971e) aid_blid_destination_pane_ParamLimits

0x7cc1,	// (0x0003971e) aid_blid_destination_pane

0xd660,	// (0x0003f0bd) bg_popup_call_poc_act_pane_ParamLimits

0xd660,	// (0x0003f0bd) bg_popup_call_poc_act_pane

0xd660,	// (0x0003f0bd) bg_popup_call_poc_inact_pane_ParamLimits

0xd660,	// (0x0003f0bd) bg_popup_call_poc_inact_pane

0x05eb,	// (0x00032048) bg_popup_call_poc_act_pane_g1

0x05f3,	// (0x00032050) bg_popup_call_poc_act_pane_g2

0x05fb,	// (0x00032058) bg_popup_call_poc_act_pane_g3

0x05bb,	// (0x00032018) bg_popup_call_poc_act_pane_g4

0x05c3,	// (0x00032020) bg_popup_call_poc_act_pane_g5

0x0603,	// (0x00032060) bg_popup_call_poc_act_pane_g6

0x05d3,	// (0x00032030) bg_popup_call_poc_act_pane_g7

0x060b,	// (0x00032068) bg_popup_call_poc_act_pane_g8

0xd405,	// (0x0003ee62) main_usb_pane

0x88ba,	// (0x0003a317) popup_cale_lunar_info_window

0x6dd5,	// (0x00038832) im_reading_pane_t1_ParamLimits

0xda4a,	// (0x0003f4a7) list_im_pane_ParamLimits

0xda5b,	// (0x0003f4b8) scroll_pane_cp07_ParamLimits

0xd405,	// (0x0003ee62) grid_highlight_pane_cp012

0xd660,	// (0x0003f0bd) mup_scale_pane_ParamLimits

0xdfbd,	// (0x0003fa1a) main_usb_pane_g1_ParamLimits

0xdfbd,	// (0x0003fa1a) main_usb_pane_g1

0x8676,	// (0x0003a0d3) main_usb_pane_g2_ParamLimits

0x8676,	// (0x0003a0d3) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x00041000) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x00041000) main_usb_pane_g

0x8682,	// (0x0003a0df) main_usb_pane_t1_ParamLimits

0x8682,	// (0x0003a0df) main_usb_pane_t1

0x8694,	// (0x0003a0f1) main_usb_pane_t2_ParamLimits

0x8694,	// (0x0003a0f1) main_usb_pane_t2

0x86a6,	// (0x0003a103) main_usb_pane_t3_ParamLimits

0x86a6,	// (0x0003a103) main_usb_pane_t3

0x86b8,	// (0x0003a115) main_usb_pane_t4_ParamLimits

0x86b8,	// (0x0003a115) main_usb_pane_t4

0x86ca,	// (0x0003a127) main_usb_pane_t5_ParamLimits

0x86ca,	// (0x0003a127) main_usb_pane_t5

0x86dc,	// (0x0003a139) main_usb_pane_t6_ParamLimits

0x86dc,	// (0x0003a139) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x00041005) main_usb_pane_t_ParamLimits

0xe1c8,	// (0x0003fc25) aid_text_placing

0x7c61,	// (0x000396be) main_location2_pane_t1_ParamLimits

0x7c77,	// (0x000396d4) main_location2_pane_t2_ParamLimits

0x7c8d,	// (0x000396ea) main_location2_pane_t3_ParamLimits

0x7ca3,	// (0x00039700) main_location2_pane_t4_ParamLimits

0x7ca3,	// (0x00039700) main_location2_pane_t4

0xf3b4,	// (0x00040e11) main_location2_pane_t_ParamLimits

0xd69c,	// (0x0003f0f9) find_pinb_pane_g2_ParamLimits

0xd69c,	// (0x0003f0f9) find_pinb_pane_g2

0x0001,

0xf104,	// (0x00040b61) find_pinb_pane_g_ParamLimits

0xf104,	// (0x00040b61) find_pinb_pane_g

0xd6a8,	// (0x0003f105) find_pinb_pane_t1_ParamLimits

0xd6ba,	// (0x0003f117) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x00040b66) find_pinb_pane_t_ParamLimits

0xd405,	// (0x0003ee62) main_call3_pane

0x72d6,	// (0x00038d33) cale_month_day_heading_pane_t1_ParamLimits

0x735c,	// (0x00038db9) cale_month_day_heading_pane_t2_ParamLimits

0x73ed,	// (0x00038e4a) cale_month_day_heading_pane_t3_ParamLimits

0x747e,	// (0x00038edb) cale_month_day_heading_pane_t4_ParamLimits

0x750f,	// (0x00038f6c) cale_month_day_heading_pane_t5_ParamLimits

0x75a0,	// (0x00038ffd) cale_month_day_heading_pane_t6_ParamLimits

0x7631,	// (0x0003908e) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x00040ce8) cale_month_day_heading_pane_t_ParamLimits

0x7951,	// (0x000393ae) smil_status_volume_pane

0x82d7,	// (0x00039d34) postcard_address_pane_ParamLimits

0x82d7,	// (0x00039d34) postcard_address_pane

0x82e3,	// (0x00039d40) postcard_message_pane_ParamLimits

0x82e3,	// (0x00039d40) postcard_message_pane

0x8652,	// (0x0003a0af) call2_cli_visual_pane_t1_ParamLimits

0x8652,	// (0x0003a0af) call2_cli_visual_pane_t1

0x8bbc,	// (0x0003a619) postcard_message_pane_t1_ParamLimits

0x8bbc,	// (0x0003a619) postcard_message_pane_t1

0x8ba5,	// (0x0003a602) postcard_address_pane_t1_ParamLimits

0x8ba5,	// (0x0003a602) postcard_address_pane_t1

0x8b98,	// (0x0003a5f5) popup_call3_audio_in_window_ParamLimits

0x8b98,	// (0x0003a5f5) popup_call3_audio_in_window

0x8a80,	// (0x0003a4dd) bg_popup_call3_in_pane_ParamLimits

0x8a80,	// (0x0003a4dd) bg_popup_call3_in_pane

0x8ade,	// (0x0003a53b) popup_call3_audio_in_window_g1_ParamLimits

0x8ade,	// (0x0003a53b) popup_call3_audio_in_window_g1

0x8af6,	// (0x0003a553) popup_call3_audio_in_window_g2_ParamLimits

0x8af6,	// (0x0003a553) popup_call3_audio_in_window_g2

0x8b0e,	// (0x0003a56b) popup_call3_audio_in_window_g3_ParamLimits

0x8b0e,	// (0x0003a56b) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x00041067) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x00041067) popup_call3_audio_in_window_g

0x8b36,	// (0x0003a593) popup_call3_audio_in_window_t1_ParamLimits

0x8b36,	// (0x0003a593) popup_call3_audio_in_window_t1

0x8b5e,	// (0x0003a5bb) popup_call3_audio_in_window_t2_ParamLimits

0x8b5e,	// (0x0003a5bb) popup_call3_audio_in_window_t2

0x8b86,	// (0x0003a5e3) popup_call3_audio_in_window_t3_ParamLimits

0x8b86,	// (0x0003a5e3) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x00041070) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x00041070) popup_call3_audio_in_window_t

0xd900,	// (0x0003f35d) bg_popup_call3_rect_pane

0x0563,	// (0x00031fc0) bg_popup_call3_rect_pane_g1

0xd81c,	// (0x0003f279) bg_popup_call3_rect_pane_g2

0x056b,	// (0x00031fc8) bg_popup_call3_rect_pane_g3

0x0573,	// (0x00031fd0) bg_popup_call3_rect_pane_g4

0x057b,	// (0x00031fd8) bg_popup_call3_rect_pane_g5

0x0583,	// (0x00031fe0) bg_popup_call3_rect_pane_g6

0x058b,	// (0x00031fe8) bg_popup_call3_rect_pane_g7

0x7fee,	// (0x00039a4b) mup_visualizer_osc_pane

0xe3e5,	// (0x0003fe42) mup_visualizer_spec_pane

0x8aa0,	// (0x0003a4fd) call3_video_qcif_pane_ParamLimits

0x8aa0,	// (0x0003a4fd) call3_video_qcif_pane

0x8ab0,	// (0x0003a50d) call3_video_qcif_uncrop_pane_ParamLimits

0x8ab0,	// (0x0003a50d) call3_video_qcif_uncrop_pane

0x8abc,	// (0x0003a519) call3_video_subqcif_pane_ParamLimits

0x8abc,	// (0x0003a519) call3_video_subqcif_pane

0x8ace,	// (0x0003a52b) call3_video_subqcif_uncrop_pane_ParamLimits

0x8ace,	// (0x0003a52b) call3_video_subqcif_uncrop_pane

0x8b26,	// (0x0003a583) popup_call3_audio_in_window_g4_ParamLimits

0x8b26,	// (0x0003a583) popup_call3_audio_in_window_g4

0x8a4d,	// (0x0003a4aa) mup_spec_half_pane

0x8a56,	// (0x0003a4b3) mup_spec_half_pane_cp

0x0862,	// (0x000322bf) mup_osc_middle_pane

0x086b,	// (0x000322c8) mup_visualizer_osc_pane_g1

0x8a2e,	// (0x0003a48b) mup_spec_bar_pane_ParamLimits

0x8a2e,	// (0x0003a48b) mup_spec_bar_pane

0x084f,	// (0x000322ac) mup_spec_bar_pane_g1

0x0859,	// (0x000322b6) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0004105b) mup_spec_bar_pane_g

0x6277,	// (0x00037cd4) aid_cale_week_size_cell_pane_ParamLimits

0x628c,	// (0x00037ce9) bg_cale_heading_pane_ParamLimits

0xd85a,	// (0x0003f2b7) bg_cale_pane_cp01_ParamLimits

0x62a4,	// (0x00037d01) cale_week_corner_pane_ParamLimits

0x62be,	// (0x00037d1b) cale_week_day_heading_pane_ParamLimits

0x62d6,	// (0x00037d33) cale_week_scroll_pane_g1_ParamLimits

0x62e9,	// (0x00037d46) cale_week_scroll_pane_g2_ParamLimits

0x62fc,	// (0x00037d59) cale_week_scroll_pane_g3_ParamLimits

0x630f,	// (0x00037d6c) cale_week_scroll_pane_g4_ParamLimits

0x6322,	// (0x00037d7f) cale_week_scroll_pane_g5_ParamLimits

0x6335,	// (0x00037d92) cale_week_scroll_pane_g6_ParamLimits

0x6348,	// (0x00037da5) cale_week_scroll_pane_g7_ParamLimits

0x635b,	// (0x00037db8) cale_week_scroll_pane_g8_ParamLimits

0x636e,	// (0x00037dcb) cale_week_scroll_pane_g9_ParamLimits

0x6381,	// (0x00037dde) cale_week_scroll_pane_g10_ParamLimits

0x6394,	// (0x00037df1) cale_week_scroll_pane_g11_ParamLimits

0x63a7,	// (0x00037e04) cale_week_scroll_pane_g12_ParamLimits

0x63ba,	// (0x00037e17) cale_week_scroll_pane_g13_ParamLimits

0x63cd,	// (0x00037e2a) cale_week_scroll_pane_g14_ParamLimits

0x63e0,	// (0x00037e3d) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x00040bf2) cale_week_scroll_pane_g_ParamLimits

0x6406,	// (0x00037e63) cale_week_time_pane_ParamLimits

0x6419,	// (0x00037e76) grid_cale_week_pane_ParamLimits

0xd877,	// (0x0003f2d4) listscroll_cale_week_pane_t1

0xd889,	// (0x0003f2e6) scroll_pane_cp08_ParamLimits

0x6f87,	// (0x000389e4) cale_month_corner_pane_ParamLimits

0xdc8b,	// (0x0003f6e8) cale_month_pane_t1

0x729d,	// (0x00038cfa) cale_month_week_pane_ParamLimits

0xdfbd,	// (0x0003fa1a) popup_call_status_window_g1_ParamLimits

0x7a98,	// (0x000394f5) popup_call_status_window_g2_ParamLimits

0x7aa4,	// (0x00039501) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x00040d98) popup_call_status_window_g_ParamLimits

0xe00e,	// (0x0003fa6b) aid_call2_pane

0x4a6a,	// (0x000364c7) msg_header_pane_g1

0x82d7,	// (0x00039d34) postcard_address2_pane_ParamLimits

0x82d7,	// (0x00039d34) postcard_address2_pane

0x82e3,	// (0x00039d40) postcard_message2_pane_ParamLimits

0x82e3,	// (0x00039d40) postcard_message2_pane

0x89e5,	// (0x0003a442) message2_row_pane_ParamLimits

0x89e5,	// (0x0003a442) message2_row_pane

0x89fd,	// (0x0003a45a) address2_row_pane_ParamLimits

0x89fd,	// (0x0003a45a) address2_row_pane

0x081d,	// (0x0003227a) postcard_message2_row_pane_g1

0x0825,	// (0x00032282) postcard_message2_row_pane_t1

0x081d,	// (0x0003227a) address2_row_pane_g1

0x0825,	// (0x00032282) address2_row_pane_t1

0xd8f8,	// (0x0003f355) aid_size_cell_vorec

0xd405,	// (0x0003ee62) main_rss_pane

0x8a10,	// (0x0003a46d) rss_list_single_pane_ParamLimits

0x8a10,	// (0x0003a46d) rss_list_single_pane

0x0833,	// (0x00032290) rss_list_single_pane_t1

0x0841,	// (0x0003229e) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x00041056) rss_list_single_pane_t

0xd405,	// (0x0003ee62) main_camera2_pane

0xd405,	// (0x0003ee62) main_video2_pane

0x8c0c,	// (0x0003a669) cams_zoom_pane_cp2_ParamLimits

0x8c0c,	// (0x0003a669) cams_zoom_pane_cp2

0x8c18,	// (0x0003a675) image2_vga_pane_ParamLimits

0x8c18,	// (0x0003a675) image2_vga_pane

0x8c27,	// (0x0003a684) main_camera2_pane_g1_ParamLimits

0x8c27,	// (0x0003a684) main_camera2_pane_g1

0x8c33,	// (0x0003a690) main_camera2_pane_g2_ParamLimits

0x8c33,	// (0x0003a690) main_camera2_pane_g2

0x8c3f,	// (0x0003a69c) main_camera2_pane_g3_ParamLimits

0x8c3f,	// (0x0003a69c) main_camera2_pane_g3

0x8c4b,	// (0x0003a6a8) main_camera2_pane_g4_ParamLimits

0x8c4b,	// (0x0003a6a8) main_camera2_pane_g4

0x8c57,	// (0x0003a6b4) main_camera2_pane_g5_ParamLimits

0x8c57,	// (0x0003a6b4) main_camera2_pane_g5

0x8c63,	// (0x0003a6c0) main_camera2_pane_g6_ParamLimits

0x8c63,	// (0x0003a6c0) main_camera2_pane_g6

0x8c6f,	// (0x0003a6cc) main_camera2_pane_g7_ParamLimits

0x8c6f,	// (0x0003a6cc) main_camera2_pane_g7

0x8c7b,	// (0x0003a6d8) main_camera2_pane_g8_ParamLimits

0x8c7b,	// (0x0003a6d8) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x00041077) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x00041077) main_camera2_pane_g

0x8c93,	// (0x0003a6f0) main_camera2_pane_t1_ParamLimits

0x8c93,	// (0x0003a6f0) main_camera2_pane_t1

0x8ca5,	// (0x0003a702) main_camera2_pane_t2_ParamLimits

0x8ca5,	// (0x0003a702) main_camera2_pane_t2

0x8cb7,	// (0x0003a714) main_camera2_pane_t3_ParamLimits

0x8cb7,	// (0x0003a714) main_camera2_pane_t3

0x8cc9,	// (0x0003a726) main_camera2_pane_t4_ParamLimits

0x8cc9,	// (0x0003a726) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x0004108a) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x0004108a) main_camera2_pane_t

0x8d24,	// (0x0003a781) cams_zoom_pane_cp4_ParamLimits

0x8d24,	// (0x0003a781) cams_zoom_pane_cp4

0x8d34,	// (0x0003a791) image2_cif_pane_ParamLimits

0x8d34,	// (0x0003a791) image2_cif_pane

0x8d45,	// (0x0003a7a2) image2_subqcif_pane_ParamLimits

0x8d45,	// (0x0003a7a2) image2_subqcif_pane

0x8d52,	// (0x0003a7af) main_video2_pane_g1_ParamLimits

0x8d52,	// (0x0003a7af) main_video2_pane_g1

0x8d64,	// (0x0003a7c1) main_video2_pane_g2_ParamLimits

0x8d64,	// (0x0003a7c1) main_video2_pane_g2

0x8d74,	// (0x0003a7d1) main_video2_pane_g3_ParamLimits

0x8d74,	// (0x0003a7d1) main_video2_pane_g3

0x8d84,	// (0x0003a7e1) main_video2_pane_g4_ParamLimits

0x8d84,	// (0x0003a7e1) main_video2_pane_g4

0x8d94,	// (0x0003a7f1) main_video2_pane_g5_ParamLimits

0x8d94,	// (0x0003a7f1) main_video2_pane_g5

0x8da4,	// (0x0003a801) main_video2_pane_g6_ParamLimits

0x8da4,	// (0x0003a801) main_video2_pane_g6

0x0005,

0xf63c,	// (0x00041099) main_video2_pane_g_ParamLimits

0xf63c,	// (0x00041099) main_video2_pane_g

0x8db6,	// (0x0003a813) main_video2_pane_t1_ParamLimits

0x8db6,	// (0x0003a813) main_video2_pane_t1

0x8dd0,	// (0x0003a82d) main_video2_pane_t2_ParamLimits

0x8dd0,	// (0x0003a82d) main_video2_pane_t2

0x8df6,	// (0x0003a853) main_video2_pane_t3_ParamLimits

0x8df6,	// (0x0003a853) main_video2_pane_t3

0x0002,

0xf649,	// (0x000410a6) main_video2_pane_t_ParamLimits

0xf649,	// (0x000410a6) main_video2_pane_t

0x878b,	// (0x0003a1e8) call_muted_g2

0x0001,

0xf5eb,	// (0x00041048) call_muted_g

0xd405,	// (0x0003ee62) main_mup2_pane

0x091d,	// (0x0003237a) main_mup2_pane_g1_ParamLimits

0x091d,	// (0x0003237a) main_mup2_pane_g1

0x8e1c,	// (0x0003a879) main_mup2_pane_g2_ParamLimits

0x8e1c,	// (0x0003a879) main_mup2_pane_g2

0x908c,	// (0x0003aae9) main_mup_pane_g13_cp1

0x9094,	// (0x0003aaf1) mup_volume_pane_cp1

0x8e3c,	// (0x0003a899) main_mup2_pane_g4_ParamLimits

0x8e3c,	// (0x0003a899) main_mup2_pane_g4

0x8e4d,	// (0x0003a8aa) main_mup2_pane_g5_ParamLimits

0x8e4d,	// (0x0003a8aa) main_mup2_pane_g5

0x8e5e,	// (0x0003a8bb) main_mup2_pane_g6_ParamLimits

0x8e5e,	// (0x0003a8bb) main_mup2_pane_g6

0x8e6f,	// (0x0003a8cc) main_mup2_pane_g7_ParamLimits

0x8e6f,	// (0x0003a8cc) main_mup2_pane_g7

0x0006,

0xf650,	// (0x000410ad) main_mup2_pane_g_ParamLimits

0xf650,	// (0x000410ad) main_mup2_pane_g

0x8e8b,	// (0x0003a8e8) main_mup2_pane_t1_ParamLimits

0x8e8b,	// (0x0003a8e8) main_mup2_pane_t1

0x8ea2,	// (0x0003a8ff) main_mup2_pane_t2_ParamLimits

0x8ea2,	// (0x0003a8ff) main_mup2_pane_t2

0x8eb9,	// (0x0003a916) main_mup2_pane_t3_ParamLimits

0x8eb9,	// (0x0003a916) main_mup2_pane_t3

0x8ed0,	// (0x0003a92d) main_mup2_pane_t4_ParamLimits

0x8ed0,	// (0x0003a92d) main_mup2_pane_t4

0x8eea,	// (0x0003a947) main_mup2_pane_t5_ParamLimits

0x8eea,	// (0x0003a947) main_mup2_pane_t5

0x8f04,	// (0x0003a961) main_mup2_pane_t6_ParamLimits

0x8f04,	// (0x0003a961) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x000410bc) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x000410bc) main_mup2_pane_t

0x8f3c,	// (0x0003a999) mup2_visualizer_pane_ParamLimits

0x8f3c,	// (0x0003a999) mup2_visualizer_pane

0x8f6e,	// (0x0003a9cb) mup_progress_pane_cp_ParamLimits

0x8f6e,	// (0x0003a9cb) mup_progress_pane_cp

0x9077,	// (0x0003aad4) mup_volume_pane_cp_ParamLimits

0x9077,	// (0x0003aad4) mup_volume_pane_cp

0x8f85,	// (0x0003a9e2) mup2_visualizer_pane_g1_ParamLimits

0x8f85,	// (0x0003a9e2) mup2_visualizer_pane_g1

0x08ef,	// (0x0003234c) mup2_visualizer_pane_g2_ParamLimits

0x08ef,	// (0x0003234c) mup2_visualizer_pane_g2

0x8f9a,	// (0x0003a9f7) mup2_visualizer_pane_g3_ParamLimits

0x8f9a,	// (0x0003a9f7) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x000410c9) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x000410c9) mup2_visualizer_pane_g

0xd8f8,	// (0x0003f355) aid_size_cell_fmradio

0x886d,	// (0x0003a2ca) aid_height_parent_landcape

0xdae8,	// (0x0003f545) wml_content_pane_cp

0xdaf0,	// (0x0003f54d) wml_tabs_pane

0xdaf9,	// (0x0003f556) popup_wml_miniature_window

0xdb01,	// (0x0003f55e) scroll_pane_cp021

0xdb15,	// (0x0003f572) wml_content_pane_comp8

0xd405,	// (0x0003ee62) bg_popup_sub_pane_cp05

0x090d,	// (0x0003236a) popup_wml_miniature_window_g1

0x0915,	// (0x00032372) wml_miniature_view_pane

0x8fa6,	// (0x0003aa03) aid_size_wml_view

0x8fae,	// (0x0003aa0b) wml_miniature_view_pane_g1

0x8fb7,	// (0x0003aa14) wml_miniature_view_pane_g2

0x8fc0,	// (0x0003aa1d) wml_miniature_view_pane_g3

0x8fc8,	// (0x0003aa25) wml_miniature_view_pane_g4

0x8fd0,	// (0x0003aa2d) wml_miniature_view_pane_g5

0x8fd8,	// (0x0003aa35) wml_miniature_view_pane_g6

0x8fe0,	// (0x0003aa3d) wml_miniature_view_pane_g7

0x8fe8,	// (0x0003aa45) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x000410d0) wml_miniature_view_pane_g

0x091d,	// (0x0003237a) background_graphic_ParamLimits

0x091d,	// (0x0003237a) background_graphic

0x0929,	// (0x00032386) wml_tabs_2_pane

0x0932,	// (0x0003238f) wml_tabs_3_pane_ParamLimits

0x0932,	// (0x0003238f) wml_tabs_3_pane

0x0944,	// (0x000323a1) wml_tabs_4_pane_ParamLimits

0x0944,	// (0x000323a1) wml_tabs_4_pane

0x095a,	// (0x000323b7) wml_tabs_5_pane_ParamLimits

0x095a,	// (0x000323b7) wml_tabs_5_pane

0x0974,	// (0x000323d1) wml_tabs_pane_g2_ParamLimits

0x0974,	// (0x000323d1) wml_tabs_pane_g2

0x0988,	// (0x000323e5) wml_tabs_pane_g3_ParamLimits

0x0988,	// (0x000323e5) wml_tabs_pane_g3

0x8ff0,	// (0x0003aa4d) wml_tabs_2_active_pane_ParamLimits

0x8ff0,	// (0x0003aa4d) wml_tabs_2_active_pane

0x9000,	// (0x0003aa5d) wml_tabs_2_passive_pane_ParamLimits

0x9000,	// (0x0003aa5d) wml_tabs_2_passive_pane

0x9010,	// (0x0003aa6d) wml_tabs_3_active_pane_cp_ParamLimits

0x9010,	// (0x0003aa6d) wml_tabs_3_active_pane_cp

0x9021,	// (0x0003aa7e) wml_tabs_3_passive_pane_ParamLimits

0x9021,	// (0x0003aa7e) wml_tabs_3_passive_pane

0x9032,	// (0x0003aa8f) wml_tabs_3_passive_pane_cp_ParamLimits

0x9032,	// (0x0003aa8f) wml_tabs_3_passive_pane_cp

0x9043,	// (0x0003aaa0) tabs_4_active_pane

0x904b,	// (0x0003aaa8) tabs_4_passive_pane

0x9053,	// (0x0003aab0) tabs_4_passive_pane_cp

0x905b,	// (0x0003aab8) tabs_4_passive_pane_cp2

0x866e,	// (0x0003a0cb) aid_height_text

0x7fbb,	// (0x00039a18) mup_volume_cont_pane_ParamLimits

0x7fbb,	// (0x00039a18) mup_volume_cont_pane

0x5e44,	// (0x000378a1) aid_size_cell_pinb

0x5e4e,	// (0x000378ab) aid_size_list_pinb

0x8f57,	// (0x0003a9b4) mup2_volume_cont_pane_ParamLimits

0x8f57,	// (0x0003a9b4) mup2_volume_cont_pane

0x9063,	// (0x0003aac0) mup2_volume_cont_pane_g1_ParamLimits

0x9063,	// (0x0003aac0) mup2_volume_cont_pane_g1

0x5ae8,	// (0x00037545) aid_size_cell_touch_ParamLimits

0x5ae8,	// (0x00037545) aid_size_cell_touch

0x5d24,	// (0x00037781) touch_pane_ParamLimits

0x5d24,	// (0x00037781) touch_pane

0x5ace,	// (0x0003752b) main_rss2_pane

0x09de,	// (0x0003243b) listscroll_rss2_pane

0x09e7,	// (0x00032444) rss2_navigation_pane

0x09ef,	// (0x0003244c) list_rss2_pane

0xe145,	// (0x0003fba2) scroll_pane_cp22

0x09f7,	// (0x00032454) rss2_navigation_pane_g1

0x0a00,	// (0x0003245d) rss2_navigation_pane_g2

0x0a08,	// (0x00032465) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x000410e1) rss2_navigation_pane_g

0x0a10,	// (0x0003246d) rss2_navigation_pane_t1

0x909c,	// (0x0003aaf9) rss2_list_single_pane_ParamLimits

0x909c,	// (0x0003aaf9) rss2_list_single_pane

0x0a1e,	// (0x0003247b) rss2_list_single_pane_t2

0x0a2c,	// (0x00032489) rss2_list_single_pane_t3_ParamLimits

0x0a2c,	// (0x00032489) rss2_list_single_pane_t3

0x0a49,	// (0x000324a6) rss2_list_single_pane_t4

0x793b,	// (0x00039398) smil_status_pane_g1

0xf077,	// (0x00040ad4) main_image2_pane_ParamLimits

0xf077,	// (0x00040ad4) main_image2_pane

0x8c87,	// (0x0003a6e4) main_camera2_pane_g9_ParamLimits

0x8c87,	// (0x0003a6e4) main_camera2_pane_g9

0x8cdb,	// (0x0003a738) main_camera2_pane_t5_ParamLimits

0x8cdb,	// (0x0003a738) main_camera2_pane_t5

0x8ced,	// (0x0003a74a) main_camera2_pane_t6_ParamLimits

0x8ced,	// (0x0003a74a) main_camera2_pane_t6

0x90b3,	// (0x0003ab10) main_image2_pane_g1_ParamLimits

0x90b3,	// (0x0003ab10) main_image2_pane_g1

0x8483,	// (0x00039ee0) smil2_video_pane_ParamLimits

0x8483,	// (0x00039ee0) smil2_video_pane

0x47fa,	// (0x00036257) aid_zoom_text_primary_cp

0x5cd3,	// (0x00037730) popup_preview_fixed_window

0xda42,	// (0x0003f49f) im_reading_pane_g1

0x8be3,	// (0x0003a640) cams2_bc_adjust_pane_cp_ParamLimits

0x8be3,	// (0x0003a640) cams2_bc_adjust_pane_cp

0x8d18,	// (0x0003a775) cams2_bc_adjust_pane_ParamLimits

0x8d18,	// (0x0003a775) cams2_bc_adjust_pane

0x90bf,	// (0x0003ab1c) cams2_bc_adjust_pane_g1

0x90c7,	// (0x0003ab24) cams2_slider_pane

0x90d0,	// (0x0003ab2d) cams2_slider_pane_g1

0x90d9,	// (0x0003ab36) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x000410e8) cams2_slider_pane_g

0x5f2d,	// (0x0003798a) calc_display_pane_ParamLimits

0x5f45,	// (0x000379a2) calc_paper_pane_ParamLimits

0x5f61,	// (0x000379be) grid_calc_pane_ParamLimits

0x7b16,	// (0x00039573) popup_clock_digital_window_t1_ParamLimits

0xe5a9,	// (0x00040006) main_image_pane_t1

0x5f13,	// (0x00037970) aid_size_cell_calc_ParamLimits

0x5f13,	// (0x00037970) aid_size_cell_calc

0x889a,	// (0x0003a2f7) popup_blid_sat_info2_window_ParamLimits

0x889a,	// (0x0003a2f7) popup_blid_sat_info2_window

0x0a93,	// (0x000324f0) aid_size_cell_blid

0x0a9b,	// (0x000324f8) bg_popup_window_pane_cp07

0x0abe,	// (0x0003251b) grid_popup_blid_pane

0x0ac6,	// (0x00032523) heading_pane_cp05_ParamLimits

0x0ac6,	// (0x00032523) heading_pane_cp05

0x0b8e,	// (0x000325eb) cell_popup_blid_pane_ParamLimits

0x0b8e,	// (0x000325eb) cell_popup_blid_pane

0x0bae,	// (0x0003260b) cell_popup_blid_pane_g1

0x0bb6,	// (0x00032613) cell_popup_blid_pane_t1

0x8f21,	// (0x0003a97e) mup2_indicator_pane_ParamLimits

0x8f21,	// (0x0003a97e) mup2_indicator_pane

0xd900,	// (0x0003f35d) mup2_visualizer_osc_pane

0x08fb,	// (0x00032358) mup2_visualizer_spec_pane_ParamLimits

0x08fb,	// (0x00032358) mup2_visualizer_spec_pane

0x90f3,	// (0x0003ab50) mup2_spec_half_pane

0x90fc,	// (0x0003ab59) mup2_spec_half_pane_cp

0x9104,	// (0x0003ab61) mup2_spec_bar_pane_ParamLimits

0x9104,	// (0x0003ab61) mup2_spec_bar_pane

0x084f,	// (0x000322ac) mup2_spec_bar_pane_g1

0x0859,	// (0x000322b6) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0004105b) mup2_spec_bar_pane_g

0x9123,	// (0x0003ab80) mup2_osc_middle_pane

0x086b,	// (0x000322c8) mup2_visualizer_osc_pane_g1

0xd014,	// (0x0003ea71) popup_number_entry_window_t1_ParamLimits

0xd027,	// (0x0003ea84) popup_number_entry_window_t2_ParamLimits

0xd039,	// (0x0003ea96) popup_number_entry_window_t3_ParamLimits

0x5d91,	// (0x000377ee) popup_number_entry_window_t5_ParamLimits

0x5d91,	// (0x000377ee) popup_number_entry_window_t5

0xf0af,	// (0x00040b0c) popup_number_entry_window_t_ParamLimits

0xd04b,	// (0x0003eaa8) text_title_cp2_ParamLimits

0x81c1,	// (0x00039c1e) aid_hotspot_pointer_text2_pane

0x8253,	// (0x00039cb0) main_viewer_pane_g9_ParamLimits

0x8253,	// (0x00039cb0) main_viewer_pane_g9

0xdc8b,	// (0x0003f6e8) cale_month_pane_t1_ParamLimits

0xdcb1,	// (0x0003f70e) bg_cale_pane_ParamLimits

0xdcc9,	// (0x0003f726) list_cale_pane_ParamLimits

0xdcda,	// (0x0003f737) listscroll_cale_day_pane_t1

0xdcec,	// (0x0003f749) scroll_pane_cp09_ParamLimits

0x7ff6,	// (0x00039a53) main_mup_eq_pane_t1_ParamLimits

0x7ff6,	// (0x00039a53) main_mup_eq_pane_t1

0x800c,	// (0x00039a69) main_mup_eq_pane_t2_ParamLimits

0x800c,	// (0x00039a69) main_mup_eq_pane_t2

0x8022,	// (0x00039a7f) main_mup_eq_pane_t3_ParamLimits

0x8022,	// (0x00039a7f) main_mup_eq_pane_t3

0x8038,	// (0x00039a95) main_mup_eq_pane_t4_ParamLimits

0x8038,	// (0x00039a95) main_mup_eq_pane_t4

0x804e,	// (0x00039aab) main_mup_eq_pane_t5_ParamLimits

0x804e,	// (0x00039aab) main_mup_eq_pane_t5

0x8064,	// (0x00039ac1) main_mup_eq_pane_t6_ParamLimits

0x8064,	// (0x00039ac1) main_mup_eq_pane_t6

0x8076,	// (0x00039ad3) main_mup_eq_pane_t7_ParamLimits

0x8076,	// (0x00039ad3) main_mup_eq_pane_t7

0x8088,	// (0x00039ae5) main_mup_eq_pane_t8_ParamLimits

0x8088,	// (0x00039ae5) main_mup_eq_pane_t8

0x809a,	// (0x00039af7) main_mup_eq_pane_t9_ParamLimits

0x809a,	// (0x00039af7) main_mup_eq_pane_t9

0x80b0,	// (0x00039b0d) main_mup_eq_pane_t10_ParamLimits

0x80b0,	// (0x00039b0d) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x00040e97) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x00040e97) main_mup_eq_pane_t

0x8143,	// (0x00039ba0) mup_equalizer_pane_cp5_ParamLimits

0x8155,	// (0x00039bb2) mup_equalizer_pane_cp6_ParamLimits

0x8167,	// (0x00039bc4) mup_equalizer_pane_cp7_ParamLimits

0x5ace,	// (0x0003752b) main_gallery_pane

0x0874,	// (0x000322d1) smil2_volume_pane

0x088f,	// (0x000322ec) smil_status_volume_pane_g1_ParamLimits

0x087c,	// (0x000322d9) smil_status_volume_pane_g2_ParamLimits

0x8a5e,	// (0x0003a4bb) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x00041060) smil_status_volume_pane_g_ParamLimits

0x0a9b,	// (0x000324f8) bg_popup_window_pane_cp07_ParamLimits

0x0aa9,	// (0x00032506) blid_firmament_pane

0x912c,	// (0x0003ab89) aid_size_cell_gallery_ParamLimits

0x912c,	// (0x0003ab89) aid_size_cell_gallery

0x913a,	// (0x0003ab97) grid_gallery_pane_ParamLimits

0x913a,	// (0x0003ab97) grid_gallery_pane

0x9146,	// (0x0003aba3) cell_gallery_pane_ParamLimits

0x9146,	// (0x0003aba3) cell_gallery_pane

0x0bc4,	// (0x00032621) bg_cell_gallery_focus_pane_ParamLimits

0x0bc4,	// (0x00032621) bg_cell_gallery_focus_pane

0x0bd6,	// (0x00032633) cell_gallery_pane_g1_ParamLimits

0x0bd6,	// (0x00032633) cell_gallery_pane_g1

0x9185,	// (0x0003abe2) cell_gallery_pane_g2_ParamLimits

0x9185,	// (0x0003abe2) cell_gallery_pane_g2

0x9192,	// (0x0003abef) cell_gallery_pane_g3_ParamLimits

0x9192,	// (0x0003abef) cell_gallery_pane_g3

0x0be2,	// (0x0003263f) cell_gallery_pane_g4_ParamLimits

0x0be2,	// (0x0003263f) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x0004110e) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x0004110e) cell_gallery_pane_g

0x0bee,	// (0x0003264b) bg_cell_gallery_focus_pane_g1

0x0bf6,	// (0x00032653) bg_cell_gallery_focus_pane_g2

0x0bfe,	// (0x0003265b) bg_cell_gallery_focus_pane_g3

0x0c06,	// (0x00032663) bg_cell_gallery_focus_pane_g4

0x0c0e,	// (0x0003266b) bg_cell_gallery_focus_pane_g5

0x0c16,	// (0x00032673) bg_cell_gallery_focus_pane_g6

0x0c1e,	// (0x0003267b) bg_cell_gallery_focus_pane_g7

0x0c26,	// (0x00032683) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x00041117) bg_cell_gallery_focus_pane_g

0x0c2e,	// (0x0003268b) aid_firma_cardinal

0x0c42,	// (0x0003269f) blid_firmament_pane_t1

0x0c59,	// (0x000326b6) blid_firmament_pane_t2

0x0c70,	// (0x000326cd) blid_firmament_pane_t3

0x0c87,	// (0x000326e4) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x00041128) blid_firmament_pane_t

0x0c9e,	// (0x000326fb) blid_sat_info_pane

0x0cae,	// (0x0003270b) blid_sat_info_pane_g1

0x0cae,	// (0x0003270b) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x00041131) blid_sat_info_pane_g

0x0cb8,	// (0x00032715) blid_sat_info_pane_t1

0x0cc6,	// (0x00032723) smil2_volume_content_pane

0x0ccf,	// (0x0003272c) smil2_volume_pane_g1

0x0cd7,	// (0x00032734) smil2_volume_content_pane_g1

0x0ce0,	// (0x0003273d) smil2_volume_content_pane_g2

0x0ce9,	// (0x00032746) smil2_volume_content_pane_g3

0x0cf2,	// (0x0003274f) smil2_volume_content_pane_g4

0x0cfb,	// (0x00032758) smil2_volume_content_pane_g5

0x0d04,	// (0x00032761) smil2_volume_content_pane_g6

0x0d0d,	// (0x0003276a) smil2_volume_content_pane_g7

0x0d16,	// (0x00032773) smil2_volume_content_pane_g8

0x0d1f,	// (0x0003277c) smil2_volume_content_pane_g9

0x0d28,	// (0x00032785) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x00041136) smil2_volume_content_pane_g

0x647c,	// (0x00037ed9) cale_week_day_heading_pane_t1_ParamLimits

0x64b7,	// (0x00037f14) cale_week_day_heading_pane_t2_ParamLimits

0x64f2,	// (0x00037f4f) cale_week_day_heading_pane_t3_ParamLimits

0x652d,	// (0x00037f8a) cale_week_day_heading_pane_t4_ParamLimits

0x6568,	// (0x00037fc5) cale_week_day_heading_pane_t5_ParamLimits

0x65a3,	// (0x00038000) cale_week_day_heading_pane_t6_ParamLimits

0x65de,	// (0x0003803b) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x00040c13) cale_week_day_heading_pane_t_ParamLimits

0xd8a6,	// (0x0003f303) bg_cale_side_pane_ParamLimits

0x6619,	// (0x00038076) cale_week_time_pane_t1_ParamLimits

0x6653,	// (0x000380b0) cale_week_time_pane_t2_ParamLimits

0x668d,	// (0x000380ea) cale_week_time_pane_t3_ParamLimits

0x66c7,	// (0x00038124) cale_week_time_pane_t4_ParamLimits

0x6701,	// (0x0003815e) cale_week_time_pane_t5_ParamLimits

0x673b,	// (0x00038198) cale_week_time_pane_t6_ParamLimits

0x6775,	// (0x000381d2) cale_week_time_pane_t7_ParamLimits

0x67af,	// (0x0003820c) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x00040c22) cale_week_time_pane_t_ParamLimits

0x67e9,	// (0x00038246) cell_cale_week_pane_g2_ParamLimits

0xd8a6,	// (0x0003f303) bg_cale_side_pane_cp01_ParamLimits

0x76c2,	// (0x0003911f) cale_month_week_pane_t1_ParamLimits

0x76fb,	// (0x00039158) cale_month_week_pane_t2_ParamLimits

0x7734,	// (0x00039191) cale_month_week_pane_t3_ParamLimits

0x776d,	// (0x000391ca) cale_month_week_pane_t4_ParamLimits

0x77a6,	// (0x00039203) cale_month_week_pane_t5_ParamLimits

0x77df,	// (0x0003923c) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x00040cf7) cale_month_week_pane_t_ParamLimits

0x7906,	// (0x00039363) cell_cale_month_pane_g1_ParamLimits

0x5ace,	// (0x0003752b) main_cale_event_viewer_pane

0x5ace,	// (0x0003752b) listscroll_cale_event_viewer_pane

0x0d31,	// (0x0003278e) list_cale_ev_pane

0x0d39,	// (0x00032796) scroll_pane_cp023

0x919f,	// (0x0003abfc) field_cale_ev_pane_ParamLimits

0x919f,	// (0x0003abfc) field_cale_ev_pane

0x0d45,	// (0x000327a2) field_cale_ev_content_pane_ParamLimits

0x0d45,	// (0x000327a2) field_cale_ev_content_pane

0x0d51,	// (0x000327ae) field_cale_ev_pane_g1_ParamLimits

0x0d51,	// (0x000327ae) field_cale_ev_pane_g1

0x0d5d,	// (0x000327ba) field_cale_ev_pane_g2_ParamLimits

0x0d5d,	// (0x000327ba) field_cale_ev_pane_g2

0x0d75,	// (0x000327d2) field_cale_ev_pane_g3_ParamLimits

0x0d75,	// (0x000327d2) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x0004114b) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x0004114b) field_cale_ev_pane_g

0x0d8d,	// (0x000327ea) field_cale_ev_pane_t1_ParamLimits

0x0d8d,	// (0x000327ea) field_cale_ev_pane_t1

0x91b9,	// (0x0003ac16) field_cale_ev_content_pane_t1_ParamLimits

0x91b9,	// (0x0003ac16) field_cale_ev_content_pane_t1

0xe48f,	// (0x0003feec) bg_button_pane_cp01

0x6267,	// (0x00037cc4) listscroll_cale_week_pane_ParamLimits

0xd851,	// (0x0003f2ae) popup_toolbar_window_cp01

0xd877,	// (0x0003f2d4) listscroll_cale_week_pane_t1_ParamLimits

0x6267,	// (0x00037cc4) listscroll_cale_day_pane_ParamLimits

0xd851,	// (0x0003f2ae) popup_toolbar_window_cp02

0xdcda,	// (0x0003f737) listscroll_cale_day_pane_t1_ParamLimits

0x6267,	// (0x00037cc4) main_cale_month_pane_ParamLimits

0x896d,	// (0x0003a3ca) popup_toolbar_window_cp03_ParamLimits

0x896d,	// (0x0003a3ca) popup_toolbar_window_cp03

0x83ab,	// (0x00039e08) main_image_pane_g2_ParamLimits

0x83ab,	// (0x00039e08) main_image_pane_g2

0x83b7,	// (0x00039e14) main_image_pane_g3_ParamLimits

0x83b7,	// (0x00039e14) main_image_pane_g3

0x0002,

0xf4cc,	// (0x00040f29) main_image_pane_g_ParamLimits

0xf4cc,	// (0x00040f29) main_image_pane_g

0xe5a9,	// (0x00040006) main_image_pane_t1_ParamLimits

0x83c3,	// (0x00039e20) main_image_pane_t2_ParamLimits

0x83c3,	// (0x00039e20) main_image_pane_t2

0x83d5,	// (0x00039e32) main_image_pane_t3_ParamLimits

0x83d5,	// (0x00039e32) main_image_pane_t3

0x83e7,	// (0x00039e44) main_image_pane_t4_ParamLimits

0x83e7,	// (0x00039e44) main_image_pane_t4

0x0003,

0xf4d3,	// (0x00040f30) main_image_pane_t_ParamLimits

0xf4d3,	// (0x00040f30) main_image_pane_t

0x83f9,	// (0x00039e56) popup_image_details_window_cp01

0x8401,	// (0x00039e5e) popup_toobar_trans_pane_cp01_ParamLimits

0x8401,	// (0x00039e5e) popup_toobar_trans_pane_cp01

0x88e1,	// (0x0003a33e) popup_image_details_window_ParamLimits

0x88e1,	// (0x0003a33e) popup_image_details_window

0x88ed,	// (0x0003a34a) popup_image_focus_window

0x8bd7,	// (0x0003a634) camera2_autofocus_pane_ParamLimits

0x8bd7,	// (0x0003a634) camera2_autofocus_pane

0x5ace,	// (0x0003752b) bg_popup_sub_pane_cp06

0x0da4,	// (0x00032801) popup_image_focus_window_g1

0x0dac,	// (0x00032809) popup_image_focus_window_g2

0x0db4,	// (0x00032811) popup_image_focus_window_g3

0x0dbc,	// (0x00032819) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x00041152) popup_image_focus_window_g

0x0dc4,	// (0x00032821) popup_image_focus_window_t1

0x0dd2,	// (0x0003282f) popup_image_focus_window_t2

0x0de1,	// (0x0003283e) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x0004115b) popup_image_focus_window_t

0x0def,	// (0x0003284c) camera2_autofocus_pane_g1

0xf077,	// (0x00040ad4) bg_tb_trans_pane_cp01

0x0dfd,	// (0x0003285a) popup_image_details_window_g1

0x0e10,	// (0x0003286d) popup_image_details_window_g2

0x0002,

0xf710,	// (0x0004116d) popup_image_details_window_g

0x0e39,	// (0x00032896) popup_image_details_window_t1

0x0e4b,	// (0x000328a8) popup_image_details_window_t2

0x0e64,	// (0x000328c1) popup_image_details_window_t3

0x0e78,	// (0x000328d5) popup_image_details_window_t4

0x0e93,	// (0x000328f0) popup_image_details_window_t5

0x0004,

0xf717,	// (0x00041174) popup_image_details_window_t

0xd711,	// (0x0003f16e) bg_calc_paper_pane_ParamLimits

0x5ace,	// (0x0003752b) grid_highlight_pane_cp013

0x6046,	// (0x00037aa3) list_calc_pane_ParamLimits

0x6058,	// (0x00037ab5) scroll_pane_cp024

0xd729,	// (0x0003f186) bg_calc_display_pane_ParamLimits

0x6060,	// (0x00037abd) calc_display_pane_t1_ParamLimits

0x6075,	// (0x00037ad2) calc_display_pane_t2_ParamLimits

0x608a,	// (0x00037ae7) calc_display_pane_t3_ParamLimits

0xf136,	// (0x00040b93) calc_display_pane_t_ParamLimits

0x6140,	// (0x00037b9d) cell_calc_pane_g2

0x0001,

0xf153,	// (0x00040bb0) cell_calc_pane_g

0x6149,	// (0x00037ba6) cell_calc_pane_t1

0xd788,	// (0x0003f1e5) grid_highlight_pane_cp02_ParamLimits

0xd79e,	// (0x0003f1fb) toolbar_button_pane_cp01_ParamLimits

0xd79e,	// (0x0003f1fb) toolbar_button_pane_cp01

0xe5ee,	// (0x0004004b) temp_image_control_pane_ParamLimits

0xe5ee,	// (0x0004004b) temp_image_control_pane

0xf077,	// (0x00040ad4) main_mp3_pane

0x0ead,	// (0x0003290a) temp_image_control_pane_g1_ParamLimits

0x0ead,	// (0x0003290a) temp_image_control_pane_g1

0x0ebb,	// (0x00032918) temp_image_control_pane_g2_ParamLimits

0x0ebb,	// (0x00032918) temp_image_control_pane_g2

0x0ecd,	// (0x0003292a) temp_image_control_pane_g3_ParamLimits

0x0ecd,	// (0x0003292a) temp_image_control_pane_g3

0x9203,	// (0x0003ac60) temp_image_control_pane_g4_ParamLimits

0x9203,	// (0x0003ac60) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x0004117f) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x0004117f) temp_image_control_pane_g

0x0ead,	// (0x0003290a) main_mp3_pane_g1

0x9214,	// (0x0003ac71) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x00041188) main_mp3_pane_g

0x0f10,	// (0x0003296d) main_mp3_pane_t1

0xd953,	// (0x0003f3b0) main_camera_pane_g8_ParamLimits

0xd953,	// (0x0003f3b0) main_camera_pane_g8

0x6a12,	// (0x0003846f) main_video_pane_g7_ParamLimits

0x6a12,	// (0x0003846f) main_video_pane_g7

0x8d06,	// (0x0003a763) main_camera2_pane_t7_ParamLimits

0x8d06,	// (0x0003a763) main_camera2_pane_t7

0xdaa8,	// (0x0003f505) scroll_pane_cp025_ParamLimits

0xdaa8,	// (0x0003f505) scroll_pane_cp025

0xdabc,	// (0x0003f519) scroll_pane_cp026_ParamLimits

0xdabc,	// (0x0003f519) scroll_pane_cp026

0xdacb,	// (0x0003f528) wml_content_pane_ParamLimits

0x5ace,	// (0x0003752b) main_touch_calib_pane

0x92ac,	// (0x0003ad09) main_touch_calib_pane_g1

0x92b8,	// (0x0003ad15) main_touch_calib_pane_g2

0x92c4,	// (0x0003ad21) main_touch_calib_pane_g3

0x92d0,	// (0x0003ad2d) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x000411a6) main_touch_calib_pane_g

0x92dc,	// (0x0003ad39) main_touch_calib_pane_t1

0x92f1,	// (0x0003ad4e) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x000411af) main_touch_calib_pane_t

0xe201,	// (0x0003fc5e) mup_progress_pane_cp02

0xe236,	// (0x0003fc93) navi_pane_g1

0xe2c1,	// (0x0003fd1e) navi_pane_mp_t3

0xf077,	// (0x00040ad4) main_mp3_pane_ParamLimits

0x89a8,	// (0x0003a405) navi_pane_ParamLimits

0x0ead,	// (0x0003290a) main_mp3_pane_g1_ParamLimits

0x9214,	// (0x0003ac71) main_mp3_pane_g2_ParamLimits

0x9220,	// (0x0003ac7d) main_mp3_pane_g3_ParamLimits

0x9220,	// (0x0003ac7d) main_mp3_pane_g3

0x922c,	// (0x0003ac89) main_mp3_pane_g4_ParamLimits

0x922c,	// (0x0003ac89) main_mp3_pane_g4

0x0edd,	// (0x0003293a) main_mp3_pane_g5_ParamLimits

0x0edd,	// (0x0003293a) main_mp3_pane_g5

0x0eeb,	// (0x00032948) main_mp3_pane_g6_ParamLimits

0x0eeb,	// (0x00032948) main_mp3_pane_g6

0x0ef8,	// (0x00032955) main_mp3_pane_g7_ParamLimits

0x0ef8,	// (0x00032955) main_mp3_pane_g7

0x0f04,	// (0x00032961) main_mp3_pane_g8_ParamLimits

0x0f04,	// (0x00032961) main_mp3_pane_g8

0xf72b,	// (0x00041188) main_mp3_pane_g_ParamLimits

0x9238,	// (0x0003ac95) main_mp3_pane_t2

0x9246,	// (0x0003aca3) main_mp3_pane_t3

0x0f1e,	// (0x0003297b) main_mp3_pane_t4

0x0f2c,	// (0x00032989) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x00041199) main_mp3_pane_t

0x0f3a,	// (0x00032997) mup_progress_pane_cp01

0x47fa,	// (0x00036257) aid_zoom_text_secondary2

0x0d31,	// (0x0003278e) list_cale_ev2_pane

0x0d39,	// (0x00032796) scroll_pane_cp023_ParamLimits

0x933c,	// (0x0003ad99) field_cale_ev2_pane_ParamLimits

0x933c,	// (0x0003ad99) field_cale_ev2_pane

0x4ae9,	// (0x00036546) field_cale_ev2_pane_g1_ParamLimits

0x4ae9,	// (0x00036546) field_cale_ev2_pane_g1

0x4af5,	// (0x00036552) field_cale_ev2_pane_g2_ParamLimits

0x4af5,	// (0x00036552) field_cale_ev2_pane_g2

0x4b0d,	// (0x0003656a) field_cale_ev2_pane_g3_ParamLimits

0x4b0d,	// (0x0003656a) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x000411ba) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x000411ba) field_cale_ev2_pane_g

0x4b31,	// (0x0003658e) field_cale_ev2_pane_t1_ParamLimits

0x4b31,	// (0x0003658e) field_cale_ev2_pane_t1

0x4b48,	// (0x000365a5) field_cale_ev2_pane_t2_ParamLimits

0x4b48,	// (0x000365a5) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x000411c3) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x000411c3) field_cale_ev2_pane_t

0x82a7,	// (0x00039d04) main_postcard_pane_g5_ParamLimits

0x82a7,	// (0x00039d04) main_postcard_pane_g5

0x82b3,	// (0x00039d10) main_postcard_pane_g6_ParamLimits

0x82b3,	// (0x00039d10) main_postcard_pane_g6

0x6867,	// (0x000382c4) camera2_autofocus_pane_cp_ParamLimits

0x6867,	// (0x000382c4) camera2_autofocus_pane_cp

0xf077,	// (0x00040ad4) main_mup3_pane

0x938b,	// (0x0003ade8) main_mup3_pane_g1_ParamLimits

0x938b,	// (0x0003ade8) main_mup3_pane_g1

0x93ac,	// (0x0003ae09) main_mup3_pane_g2_ParamLimits

0x93ac,	// (0x0003ae09) main_mup3_pane_g2

0x9419,	// (0x0003ae76) main_mup3_pane_g3_ParamLimits

0x9419,	// (0x0003ae76) main_mup3_pane_g3

0x9454,	// (0x0003aeb1) main_mup3_pane_g4_ParamLimits

0x9454,	// (0x0003aeb1) main_mup3_pane_g4

0x948f,	// (0x0003aeec) main_mup3_pane_g5_ParamLimits

0x948f,	// (0x0003aeec) main_mup3_pane_g5

0x94ca,	// (0x0003af27) main_mup3_pane_g6_ParamLimits

0x94ca,	// (0x0003af27) main_mup3_pane_g6

0x0fb6,	// (0x00032a13) main_mup3_pane_g7_ParamLimits

0x0fb6,	// (0x00032a13) main_mup3_pane_g7

0x0007,

0xf776,	// (0x000411d3) main_mup3_pane_g_ParamLimits

0xf776,	// (0x000411d3) main_mup3_pane_g

0x9538,	// (0x0003af95) main_mup3_pane_t1_ParamLimits

0x9538,	// (0x0003af95) main_mup3_pane_t1

0x9599,	// (0x0003aff6) main_mup3_pane_t2_ParamLimits

0x9599,	// (0x0003aff6) main_mup3_pane_t2

0x9654,	// (0x0003b0b1) main_mup3_pane_t4_ParamLimits

0x9654,	// (0x0003b0b1) main_mup3_pane_t4

0x969a,	// (0x0003b0f7) main_mup3_pane_t5_ParamLimits

0x969a,	// (0x0003b0f7) main_mup3_pane_t5

0x973e,	// (0x0003b19b) main_mup3_pane_t6_ParamLimits

0x973e,	// (0x0003b19b) main_mup3_pane_t6

0x0005,

0xf787,	// (0x000411e4) main_mup3_pane_t_ParamLimits

0xf787,	// (0x000411e4) main_mup3_pane_t

0x97e6,	// (0x0003b243) mup3_progress_pane_ParamLimits

0x97e6,	// (0x0003b243) mup3_progress_pane

0x984a,	// (0x0003b2a7) popup_mup3_control_window_ParamLimits

0x984a,	// (0x0003b2a7) popup_mup3_control_window

0x0fc4,	// (0x00032a21) popup_mup3_text_window

0x9863,	// (0x0003b2c0) mup3_progress_pane_t1

0x9881,	// (0x0003b2de) mup3_progress_pane_t2

0x0fcc,	// (0x00032a29) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x000411f1) mup3_progress_pane_t

0x0fe9,	// (0x00032a46) mup_progress_pane_cp03

0x5ace,	// (0x0003752b) bg_tb_trans_pane_cp04

0x989f,	// (0x0003b2fc) mup3_volume_pane

0x98a7,	// (0x0003b304) popup_mup3_control_window_g1

0x98b0,	// (0x0003b30d) mup3_volume_pane_g1

0x98b9,	// (0x0003b316) mup3_volume_pane_g2

0x98c2,	// (0x0003b31f) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x000411f8) mup3_volume_pane_g

0x5ace,	// (0x0003752b) bg_tb_trans_pane_cp03

0x0ff9,	// (0x00032a56) popup_mup3_text_window_g1

0x1001,	// (0x00032a5e) popup_mup3_text_window_t1

0xd771,	// (0x0003f1ce) list_calc_item_pane_g1_ParamLimits

0x09c5,	// (0x00032422) mup_volume_pane_cp_g1

0x9306,	// (0x0003ad63) main_touch_calib_pane_t3

0x9318,	// (0x0003ad75) main_touch_calib_pane_t4

0x932a,	// (0x0003ad87) main_touch_calib_pane_t5

0x5ad8,	// (0x00037535) aid_cell_size_toolbar2

0x5ae0,	// (0x0003753d) aid_popup3_width_pane

0x47f2,	// (0x0003624f) aid_zoom_text_msg_primary

0xd932,	// (0x0003f38f) vorec_t7

0xd735,	// (0x0003f192) bg_calc_paper_pane_g1_ParamLimits

0xd741,	// (0x0003f19e) bg_calc_paper_pane_g2_ParamLimits

0xd74d,	// (0x0003f1aa) bg_calc_paper_pane_g3_ParamLimits

0xd759,	// (0x0003f1b6) bg_calc_paper_pane_g4_ParamLimits

0xd765,	// (0x0003f1c2) bg_calc_paper_pane_g5_ParamLimits

0x60c3,	// (0x00037b20) bg_calc_paper_pane_g6_ParamLimits

0x60d2,	// (0x00037b2f) bg_calc_paper_pane_g7_ParamLimits

0x60e1,	// (0x00037b3e) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x00040b9a) bg_calc_paper_pane_g_ParamLimits

0x60f0,	// (0x00037b4d) calc_bg_paper_pane_g9_ParamLimits

0x6947,	// (0x000383a4) image_qvga_pane_ParamLimits

0x6947,	// (0x000383a4) image_qvga_pane

0xd660,	// (0x0003f0bd) bg_popup_sub_pane_cp04_ParamLimits

0xe525,	// (0x0003ff82) popup_mup_playback_window_g1_ParamLimits

0xe531,	// (0x0003ff8e) popup_mup_playback_window_t1_ParamLimits

0xe546,	// (0x0003ffa3) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x00040f24) popup_mup_playback_window_t_ParamLimits

0x8e2d,	// (0x0003a88a) main_mup2_pane_g3_ParamLimits

0x8e2d,	// (0x0003a88a) main_mup2_pane_g3

0x6bd7,	// (0x00038634) popup_toolbar_window_cp04

0xe90c,	// (0x00040369) popup_call2_audio_second_window_g3_ParamLimits

0xe90c,	// (0x00040369) popup_call2_audio_second_window_g3

0xed16,	// (0x00040773) popup_call2_audio_first_window_g4_ParamLimits

0xed16,	// (0x00040773) popup_call2_audio_first_window_g4

0x03ed,	// (0x00031e4a) popup_call2_audio_in_window_g4_ParamLimits

0x03ed,	// (0x00031e4a) popup_call2_audio_in_window_g4

0x839e,	// (0x00039dfb) aid_area_sk_bg_cut_ParamLimits

0x839e,	// (0x00039dfb) aid_area_sk_bg_cut

0xe55b,	// (0x0003ffb8) aid_area_sk_bg_cut_2_ParamLimits

0xe55b,	// (0x0003ffb8) aid_area_sk_bg_cut_2

0x9175,	// (0x0003abd2) aid_placing_details_win

0x917d,	// (0x0003abda) aid_placing_details_win_2

0x0def,	// (0x0003284c) camera2_autofocus_pane_g1_ParamLimits

0x5cc6,	// (0x00037723) popup_fixed_preview_cale_window_ParamLimits

0x5cc6,	// (0x00037723) popup_fixed_preview_cale_window

0xe337,	// (0x0003fd94) navi_slider_pane_g3

0xe340,	// (0x0003fd9d) navi_slider_pane_g4

0xe349,	// (0x0003fda6) navi_slider_pane_g5

0xe337,	// (0x0003fd94) navi_slider_pane_g6

0x7db6,	// (0x00039813) navi_slider_pane_g7

0xe45c,	// (0x0003feb9) mup_scale_pane_g3

0xe465,	// (0x0003fec2) mup_scale_pane_g4

0xe46e,	// (0x0003fecb) mup_scale_pane_g5

0x8179,	// (0x00039bd6) mup_scale_pane_g6

0x8182,	// (0x00039bdf) mup_scale_pane_g7

0xe337,	// (0x0003fd94) cams2_slider_pane_g3

0x0a7a,	// (0x000324d7) cams2_slider_pane_g4

0x90e2,	// (0x0003ab3f) cams2_slider_pane_g5

0xe337,	// (0x0003fd94) cams2_slider_pane_g6

0x90ea,	// (0x0003ab47) cams2_slider_pane_g7

0x0cae,	// (0x0003270b) camera2_autofocus_pane_cp_g1

0x078e,	// (0x000321eb) bg_popup_preview_window_pane_cp02_ParamLimits

0x078e,	// (0x000321eb) bg_popup_preview_window_pane_cp02

0x100f,	// (0x00032a6c) list_fp_cale_pane_ParamLimits

0x100f,	// (0x00032a6c) list_fp_cale_pane

0x101b,	// (0x00032a78) popup_fixed_preview_cale_window_t1_ParamLimits

0x101b,	// (0x00032a78) popup_fixed_preview_cale_window_t1

0x98cb,	// (0x0003b328) popup_fixed_preview_cale_window_t2_ParamLimits

0x98cb,	// (0x0003b328) popup_fixed_preview_cale_window_t2

0x98e0,	// (0x0003b33d) popup_fixed_preview_cale_window_t3_ParamLimits

0x98e0,	// (0x0003b33d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x000411ff) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x000411ff) popup_fixed_preview_cale_window_t

0x98f5,	// (0x0003b352) list_single_fp_cale_pane_ParamLimits

0x98f5,	// (0x0003b352) list_single_fp_cale_pane

0x1039,	// (0x00032a96) list_single_fp_cale_pane_g1_ParamLimits

0x1039,	// (0x00032a96) list_single_fp_cale_pane_g1

0x1045,	// (0x00032aa2) list_single_fp_cale_pane_g2_ParamLimits

0x1045,	// (0x00032aa2) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x00041206) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x00041206) list_single_fp_cale_pane_g

0x105e,	// (0x00032abb) list_single_fp_cale_pane_t1_ParamLimits

0x105e,	// (0x00032abb) list_single_fp_cale_pane_t1

0x1070,	// (0x00032acd) list_single_fp_cale_pane_t2_ParamLimits

0x1070,	// (0x00032acd) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x0004120d) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x0004120d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5ace,	// (0x0003752b) main_dialer_pane

0x9905,	// (0x0003b362) aid_cell_size_keypad

0x990f,	// (0x0003b36c) dialer_ne_pane

0x9917,	// (0x0003b374) grid_dialer_command_1_pane

0x991f,	// (0x0003b37c) grid_dialer_command_2_pane

0x9927,	// (0x0003b384) grid_dialer_keypad_pane

0x9937,	// (0x0003b394) bg_popup_call_pane_cp06_ParamLimits

0x9937,	// (0x0003b394) bg_popup_call_pane_cp06

0x9943,	// (0x0003b3a0) dialer_ne_clear_pane_ParamLimits

0x9943,	// (0x0003b3a0) dialer_ne_clear_pane

0x10a3,	// (0x00032b00) dialer_ne_pane_g1

0x10ab,	// (0x00032b08) dialer_ne_pane_t1_ParamLimits

0x10ab,	// (0x00032b08) dialer_ne_pane_t1

0x994f,	// (0x0003b3ac) dialer_ne_pane_t2_ParamLimits

0x994f,	// (0x0003b3ac) dialer_ne_pane_t2

0x996c,	// (0x0003b3c9) dialer_ne_pane_t3_ParamLimits

0x996c,	// (0x0003b3c9) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x00041212) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x00041212) dialer_ne_pane_t

0x9990,	// (0x0003b3ed) dialer_ne_pane_t3_copy1_ParamLimits

0x9990,	// (0x0003b3ed) dialer_ne_pane_t3_copy1

0x99b4,	// (0x0003b411) cell_dialer_keypad_pane_ParamLimits

0x99b4,	// (0x0003b411) cell_dialer_keypad_pane

0x99c9,	// (0x0003b426) cell_dialer_command_1_pane_ParamLimits

0x99c9,	// (0x0003b426) cell_dialer_command_1_pane

0x99df,	// (0x0003b43c) cell_dialer_command_2_pane_ParamLimits

0x99df,	// (0x0003b43c) cell_dialer_command_2_pane

0x10bd,	// (0x00032b1a) bg_button_pane_cp02_ParamLimits

0x10bd,	// (0x00032b1a) bg_button_pane_cp02

0x99ee,	// (0x0003b44b) cell_dialer_keypad_pane_g1_ParamLimits

0x99ee,	// (0x0003b44b) cell_dialer_keypad_pane_g1

0x10bd,	// (0x00032b1a) bg_button_pane_cp03_ParamLimits

0x10bd,	// (0x00032b1a) bg_button_pane_cp03

0x9a03,	// (0x0003b460) cell_dialer_command_1_pane_g1_ParamLimits

0x9a03,	// (0x0003b460) cell_dialer_command_1_pane_g1

0x10c9,	// (0x00032b26) bg_button_pane_cp04

0x9a16,	// (0x0003b473) cell_dialer_command_2_pane_g1

0xd900,	// (0x0003f35d) bg_button_pane_cp06

0x10d1,	// (0x00032b2e) dialer_ne_clear_pane_g1

0xe242,	// (0x0003fc9f) navi_pane_g2

0x7d5e,	// (0x000397bb) navi_pane_g3

0x0002,

0xf3ca,	// (0x00040e27) navi_pane_g

0xe2cf,	// (0x0003fd2c) navi_pane_mv_g2

0xe2f6,	// (0x0003fd53) navi_pane_mv_g5

0x7d7b,	// (0x000397d8) navi_pane_mv_t1

0xd729,	// (0x0003f186) main_clock2_pane

0x9a52,	// (0x0003b4af) main_clock2_list_pane_ParamLimits

0x9a52,	// (0x0003b4af) main_clock2_list_pane

0x9a78,	// (0x0003b4d5) main_clock2_pane_t1_ParamLimits

0x9a78,	// (0x0003b4d5) main_clock2_pane_t1

0x9a98,	// (0x0003b4f5) main_clock2_pane_t2_ParamLimits

0x9a98,	// (0x0003b4f5) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x0004121e) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x0004121e) main_clock2_pane_t

0x9af1,	// (0x0003b54e) popup_clock_analogue_window_cp03_ParamLimits

0x9af1,	// (0x0003b54e) popup_clock_analogue_window_cp03

0x9b0f,	// (0x0003b56c) popup_clock_digital_window_cp02_ParamLimits

0x9b0f,	// (0x0003b56c) popup_clock_digital_window_cp02

0x9b7c,	// (0x0003b5d9) main_clock2_list_single_pane_ParamLimits

0x9b7c,	// (0x0003b5d9) main_clock2_list_single_pane

0xd900,	// (0x0003f35d) list_highlight_pane_cp05

0x1109,	// (0x00032b66) main_clock2_list_single_pane_t1

0x6bd7,	// (0x00038634) popup_toolbar_window_cp04_ParamLimits

0x91d3,	// (0x0003ac30) camera2_autofocus_pane_g2_ParamLimits

0x91d3,	// (0x0003ac30) camera2_autofocus_pane_g2

0x91df,	// (0x0003ac3c) camera2_autofocus_pane_g3_ParamLimits

0x91df,	// (0x0003ac3c) camera2_autofocus_pane_g3

0x91eb,	// (0x0003ac48) camera2_autofocus_pane_g4_ParamLimits

0x91eb,	// (0x0003ac48) camera2_autofocus_pane_g4

0x91f7,	// (0x0003ac54) camera2_autofocus_pane_g5_ParamLimits

0x91f7,	// (0x0003ac54) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x00041162) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x00041162) camera2_autofocus_pane_g

0x9352,	// (0x0003adaf) camera2_autofocus_pane_cp_g2

0x935a,	// (0x0003adb7) camera2_autofocus_pane_cp_g3

0x9362,	// (0x0003adbf) camera2_autofocus_pane_cp_g4

0x936a,	// (0x0003adc7) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x000411c8) camera2_autofocus_pane_cp_g

0x992f,	// (0x0003b38c) popup_dialer_spcha_window

0x5ace,	// (0x0003752b) bg_popup_sub_pane_cp07

0x1117,	// (0x00032b74) list_spcha_pane

0x111f,	// (0x00032b7c) list_single_spcha_pane_ParamLimits

0x111f,	// (0x00032b7c) list_single_spcha_pane

0x5ace,	// (0x0003752b) list_highlight_pane_cp06

0x1130,	// (0x00032b8d) list_single_spcha_pane_t1

0x0197,	// (0x00031bf4) popup_call2_audio_out_window_g4_ParamLimits

0x0197,	// (0x00031bf4) popup_call2_audio_out_window_g4

0x5ace,	// (0x0003752b) main_imed2_pane

0x88f5,	// (0x0003a352) popup_imed_adjust2_window

0x8906,	// (0x0003a363) popup_imed_trans_window_ParamLimits

0x8906,	// (0x0003a363) popup_imed_trans_window

0x0af2,	// (0x0003254f) popup_blid_sat_info2_window_t1

0x0b00,	// (0x0003255d) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x000410f7) popup_blid_sat_info2_window_t

0x9c26,	// (0x0003b683) aid_size_cell_colour_35

0x9c3d,	// (0x0003b69a) aid_size_cell_colour_112

0x9c54,	// (0x0003b6b1) aid_size_cell_effect

0xf077,	// (0x00040ad4) bg_tb_trans_pane_cp02

0xf085,	// (0x00040ae2) heading_imed_pane

0x9c6e,	// (0x0003b6cb) listscroll_imed_pane

0x113e,	// (0x00032b9b) heading_imed_pane_g1

0x1146,	// (0x00032ba3) heading_imed_pane_t1

0x1154,	// (0x00032bb1) grid_imed_colour_35_pane_ParamLimits

0x1154,	// (0x00032bb1) grid_imed_colour_35_pane

0x9c7a,	// (0x0003b6d7) grid_imed_effect_pane

0x1167,	// (0x00032bc4) list_imed_aspect_pane

0x9c86,	// (0x0003b6e3) scroll_pane_cp027_ParamLimits

0x9c86,	// (0x0003b6e3) scroll_pane_cp027

0x9c92,	// (0x0003b6ef) cell_imed_effect_pane_ParamLimits

0x9c92,	// (0x0003b6ef) cell_imed_effect_pane

0x116f,	// (0x00032bcc) cell_imed_colour_pane_ParamLimits

0x116f,	// (0x00032bcc) cell_imed_colour_pane

0x11a9,	// (0x00032c06) cell_imed_colour_pane_g1_ParamLimits

0x11a9,	// (0x00032c06) cell_imed_colour_pane_g1

0x11ba,	// (0x00032c17) hgihlgiht_grid_pane_cp016_ParamLimits

0x11ba,	// (0x00032c17) hgihlgiht_grid_pane_cp016

0x9ca8,	// (0x0003b705) cell_imed_effect_pane_g1

0x9cb0,	// (0x0003b70d) grid_highlight_pane_cp017

0x11cb,	// (0x00032c28) list_imed_single_pane_ParamLimits

0x11cb,	// (0x00032c28) list_imed_single_pane

0x5ace,	// (0x0003752b) list_highlight_pane_cp07

0x11de,	// (0x00032c3b) list_imed_aspect_pane_comp1_t1

0x079a,	// (0x000321f7) bg_tb_trans_pane_cp05

0x11fe,	// (0x00032c5b) popup_imed_adjust2_window_g1

0x1225,	// (0x00032c82) popup_imed_adjust2_window_t1

0x123d,	// (0x00032c9a) slider_imed_adjust_pane

0x1251,	// (0x00032cae) slider_imed_adjust_pane_g1

0x1261,	// (0x00032cbe) slider_imed_adjust_pane_g2

0x1271,	// (0x00032cce) slider_imed_adjust_pane_g3

0x1282,	// (0x00032cdf) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x0004123b) slider_imed_adjust_pane_g

0x9cb9,	// (0x0003b716) aid_size_cell_clipart2

0x9cc5,	// (0x0003b722) grid_imed_clipart_pane

0x1293,	// (0x00032cf0) scroll_pane_cp031

0x9ccf,	// (0x0003b72c) cell_imed_clipart_pane_ParamLimits

0x9ccf,	// (0x0003b72c) cell_imed_clipart_pane

0x9ce6,	// (0x0003b743) cell_imed_clipart_pane_g1

0x5ace,	// (0x0003752b) grid_highlight_pane_cp014

0x9a5e,	// (0x0003b4bb) main_clock2_pane_g1_ParamLimits

0x9a5e,	// (0x0003b4bb) main_clock2_pane_g1

0x9b27,	// (0x0003b584) aid_call2_pane_cp10

0x9b39,	// (0x0003b596) aid_call_pane_cp10

0xe1d1,	// (0x0003fc2e) popup_clock_analogue_window_cp10_g1

0xe1d1,	// (0x0003fc2e) popup_clock_analogue_window_cp10_g2

0x9b4b,	// (0x0003b5a8) popup_clock_analogue_window_cp10_g3

0x9b4b,	// (0x0003b5a8) popup_clock_analogue_window_cp10_g4

0xe1d1,	// (0x0003fc2e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x00041229) popup_clock_analogue_window_cp10_g

0x9b5d,	// (0x0003b5ba) popup_clock_analogue_window_cp10_t1

0x9b8e,	// (0x0003b5eb) clock_digital_number_pane_cp10_ParamLimits

0x9b8e,	// (0x0003b5eb) clock_digital_number_pane_cp10

0x9ba6,	// (0x0003b603) clock_digital_number_pane_cp11_ParamLimits

0x9ba6,	// (0x0003b603) clock_digital_number_pane_cp11

0x9bbe,	// (0x0003b61b) clock_digital_number_pane_cp12_ParamLimits

0x9bbe,	// (0x0003b61b) clock_digital_number_pane_cp12

0x9bd6,	// (0x0003b633) clock_digital_number_pane_cp13_ParamLimits

0x9bd6,	// (0x0003b633) clock_digital_number_pane_cp13

0x9bee,	// (0x0003b64b) clock_digital_separator_pane_cp10_ParamLimits

0x9bee,	// (0x0003b64b) clock_digital_separator_pane_cp10

0x9c06,	// (0x0003b663) popup_clock_digital_window_cp02_t1_ParamLimits

0x9c06,	// (0x0003b663) popup_clock_digital_window_cp02_t1

0xd658,	// (0x0003f0b5) clock_digital_number_pane_cp10_g1

0xd658,	// (0x0003f0b5) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x00041244) clock_digital_number_pane_cp10_g

0xd658,	// (0x0003f0b5) clock_digital_separator_pane_cp10_g1

0xd658,	// (0x0003f0b5) clock_digital_separator_pane_g2_cp10

0xe2fe,	// (0x0003fd5b) navi_pane_vded_g4

0xe307,	// (0x0003fd64) navi_pane_vded_g5

0xe310,	// (0x0003fd6d) navi_pane_vded_t1

0x5ace,	// (0x0003752b) main_vded_pane

0x9cef,	// (0x0003b74c) main_vded_pane_g1

0x9cf7,	// (0x0003b754) main_vded_pane_g2

0x9cff,	// (0x0003b75c) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x00041249) main_vded_pane_g

0x9d07,	// (0x0003b764) main_vded_pane_t1

0x9d15,	// (0x0003b772) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x00041250) main_vded_pane_t

0x9d23,	// (0x0003b780) vded_slider_pane

0x9d2b,	// (0x0003b788) vded_video_pane

0x129b,	// (0x00032cf8) vded_video_pane_g1

0x9d33,	// (0x0003b790) vded_video_pane_g2

0x0cae,	// (0x0003270b) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x00041255) vded_video_pane_g

0x12a5,	// (0x00032d02) vded_slider_pane_g1

0x09c5,	// (0x00032422) vded_slider_pane_g2

0x12ae,	// (0x00032d0b) vded_slider_pane_g3

0x12b7,	// (0x00032d14) vded_slider_pane_g4

0x12c0,	// (0x00032d1d) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x0004125c) vded_slider_pane_g

0x983e,	// (0x0003b29b) mup3_rocker_pane_ParamLimits

0x983e,	// (0x0003b29b) mup3_rocker_pane

0x9d3c,	// (0x0003b799) mup3_control_keys_pane_g1

0x9d44,	// (0x0003b7a1) mup3_control_keys_pane_g2

0x9d4c,	// (0x0003b7a9) mup3_control_keys_pane_g3

0x9d54,	// (0x0003b7b1) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x00041267) mup3_control_keys_pane_g

0x5cea,	// (0x00037747) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5cea,	// (0x00037747) popup_toolbar2_fixed_window_cp01

0x9856,	// (0x0003b2b3) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9856,	// (0x0003b2b3) popup_toolbar2_fixed_window_cp02

0xea7e,	// (0x000404db) popup_call2_audio_second_window_t4_ParamLimits

0xea7e,	// (0x000404db) popup_call2_audio_second_window_t4

0xefac,	// (0x00040a09) popup_call2_audio_first_window_t6_ParamLimits

0xefac,	// (0x00040a09) popup_call2_audio_first_window_t6

0x029a,	// (0x00031cf7) popup_call2_audio_out_window_t6_ParamLimits

0x029a,	// (0x00031cf7) popup_call2_audio_out_window_t6

0x5ace,	// (0x0003752b) main_vitu_pane

0x9d64,	// (0x0003b7c1) aid_size_cell_itu_ParamLimits

0x9d64,	// (0x0003b7c1) aid_size_cell_itu

0x388e,	// (0x000352eb) bg_popup_window_pane_cp08_ParamLimits

0x388e,	// (0x000352eb) bg_popup_window_pane_cp08

0x9d72,	// (0x0003b7cf) field_vitu_entry_pane_ParamLimits

0x9d72,	// (0x0003b7cf) field_vitu_entry_pane

0x9d7f,	// (0x0003b7dc) grid_vitu_function_pane_ParamLimits

0x9d7f,	// (0x0003b7dc) grid_vitu_function_pane

0x9d8b,	// (0x0003b7e8) grid_vitu_itu_pane_ParamLimits

0x9d8b,	// (0x0003b7e8) grid_vitu_itu_pane

0x9d97,	// (0x0003b7f4) cell_vitu_itu_pane_ParamLimits

0x9d97,	// (0x0003b7f4) cell_vitu_itu_pane

0x9dac,	// (0x0003b809) cell_vitu_function_pane_ParamLimits

0x9dac,	// (0x0003b809) cell_vitu_function_pane

0xf077,	// (0x00040ad4) bg_popup_sub_pane_cp08_ParamLimits

0xf077,	// (0x00040ad4) bg_popup_sub_pane_cp08

0x9dbe,	// (0x0003b81b) field_vitu_entry_pane_t1_ParamLimits

0x9dbe,	// (0x0003b81b) field_vitu_entry_pane_t1

0x12e1,	// (0x00032d3e) field_vitu_entry_pane_t2_ParamLimits

0x12e1,	// (0x00032d3e) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x00041275) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x00041275) field_vitu_entry_pane_t

0x12fe,	// (0x00032d5b) bg_button_pane_cp05_ParamLimits

0x12fe,	// (0x00032d5b) bg_button_pane_cp05

0x9dd7,	// (0x0003b834) cell_vitu_itu_pane_g1

0x9def,	// (0x0003b84c) cell_vitu_itu_pane_t1_ParamLimits

0x9def,	// (0x0003b84c) cell_vitu_itu_pane_t1

0x9e01,	// (0x0003b85e) cell_vitu_itu_pane_t2_ParamLimits

0x9e01,	// (0x0003b85e) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x0004127a) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x0004127a) cell_vitu_itu_pane_t

0x130c,	// (0x00032d69) bg_button_pane_cp07

0x9e36,	// (0x0003b893) cell_vitu_function_pane_g1

0x5f79,	// (0x000379d6) main_calc_pane_g1

0x5b10,	// (0x0003756d) aid_visual_content_pane

0x5ace,	// (0x0003752b) main_vradio_pane

0x9e3f,	// (0x0003b89c) main_vradio_pane_g1_ParamLimits

0x9e3f,	// (0x0003b89c) main_vradio_pane_g1

0x1316,	// (0x00032d73) main_vradio_pane_g2_ParamLimits

0x1316,	// (0x00032d73) main_vradio_pane_g2

0x0001,

0xf824,	// (0x00041281) main_vradio_pane_g_ParamLimits

0xf824,	// (0x00041281) main_vradio_pane_g

0x9e4d,	// (0x0003b8aa) main_vradio_pane_t1_ParamLimits

0x9e4d,	// (0x0003b8aa) main_vradio_pane_t1

0x9e5f,	// (0x0003b8bc) main_vradio_pane_t2_ParamLimits

0x9e5f,	// (0x0003b8bc) main_vradio_pane_t2

0x1323,	// (0x00032d80) main_vradio_pane_t3_ParamLimits

0x1323,	// (0x00032d80) main_vradio_pane_t3

0x0002,

0xf829,	// (0x00041286) main_vradio_pane_t_ParamLimits

0xf829,	// (0x00041286) main_vradio_pane_t

0x9e71,	// (0x0003b8ce) vradio_rocker_control_pane_ParamLimits

0x9e71,	// (0x0003b8ce) vradio_rocker_control_pane

0x9e7d,	// (0x0003b8da) vradio_station_info_pane_ParamLimits

0x9e7d,	// (0x0003b8da) vradio_station_info_pane

0x1335,	// (0x00032d92) vradio_frequency_info_pane_ParamLimits

0x1335,	// (0x00032d92) vradio_frequency_info_pane

0x0cae,	// (0x0003270b) vradio_station_info_pane_g1

0x1344,	// (0x00032da1) vradio_station_info_pane_t1_ParamLimits

0x1344,	// (0x00032da1) vradio_station_info_pane_t1

0x1366,	// (0x00032dc3) vradio_station_info_pane_t2_ParamLimits

0x1366,	// (0x00032dc3) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x0004128d) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x0004128d) vradio_station_info_pane_t

0x1378,	// (0x00032dd5) vradio_tuning_pane

0x1380,	// (0x00032ddd) vradio_rocker_control_pane_g1

0x1388,	// (0x00032de5) vradio_rocker_control_pane_g2

0x1390,	// (0x00032ded) vradio_rocker_control_pane_g3

0x1398,	// (0x00032df5) vradio_rocker_control_pane_g4

0x13a0,	// (0x00032dfd) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x00041292) vradio_rocker_control_pane_g

0x9e8a,	// (0x0003b8e7) vradio_frequency_info_pane_g1

0x13a8,	// (0x00032e05) vradio_frequency_info_pane_t1_ParamLimits

0x13a8,	// (0x00032e05) vradio_frequency_info_pane_t1

0x9e92,	// (0x0003b8ef) vradio_tuning_pane_g1

0x9e9b,	// (0x0003b8f8) vradio_tuning_pane_t1

0x5b4f,	// (0x000375ac) area_side_right_pane_ParamLimits

0x5b4f,	// (0x000375ac) area_side_right_pane

0x0755,	// (0x000321b2) status_small_pane_g1

0x075d,	// (0x000321ba) status_small_pane_g2

0x0766,	// (0x000321c3) status_small_pane_g3

0x076f,	// (0x000321cc) status_small_pane_g4

0x0003,

0xf5f0,	// (0x0004104d) status_small_pane_g

0x0778,	// (0x000321d5) status_small_pane_t1

0x5ace,	// (0x0003752b) main_video3_pane

0x13bc,	// (0x00032e19) cams_zoom_vslider_pane

0x13c4,	// (0x00032e21) image3_wide_pane_ParamLimits

0x13c4,	// (0x00032e21) image3_wide_pane

0x13de,	// (0x00032e3b) image3_wide_small_pane

0x13e8,	// (0x00032e45) main_video3_pane_g1_ParamLimits

0x13e8,	// (0x00032e45) main_video3_pane_g1

0x1404,	// (0x00032e61) main_video3_pane_g2_ParamLimits

0x1404,	// (0x00032e61) main_video3_pane_g2

0x0001,

0xf840,	// (0x0004129d) main_video3_pane_g_ParamLimits

0xf840,	// (0x0004129d) main_video3_pane_g

0x1420,	// (0x00032e7d) main_video3_pane_t1_ParamLimits

0x1420,	// (0x00032e7d) main_video3_pane_t1

0x144b,	// (0x00032ea8) main_video3_pane_t2_ParamLimits

0x144b,	// (0x00032ea8) main_video3_pane_t2

0x1476,	// (0x00032ed3) main_video3_pane_t3_ParamLimits

0x1476,	// (0x00032ed3) main_video3_pane_t3

0x0002,

0xf845,	// (0x000412a2) main_video3_pane_t_ParamLimits

0xf845,	// (0x000412a2) main_video3_pane_t

0x14a1,	// (0x00032efe) cams_zoom_vslider_pane_g1

0x14aa,	// (0x00032f07) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x000412a9) cams_zoom_vslider_pane_g

0x14b2,	// (0x00032f0f) small_slider_vertical_pane

0x0cae,	// (0x0003270b) small_slider_vertical_pane_g1

0x0cae,	// (0x0003270b) small_slider_vertical_pane_g2

0x14ba,	// (0x00032f17) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x000412ae) small_slider_vertical_pane_g

0x5ace,	// (0x0003752b) main_hwr_training_pane

0x14c3,	// (0x00032f20) hwr_training_instruct_pane_ParamLimits

0x14c3,	// (0x00032f20) hwr_training_instruct_pane

0x9eaa,	// (0x0003b907) hwr_training_navi_pane_ParamLimits

0x9eaa,	// (0x0003b907) hwr_training_navi_pane

0x9ebe,	// (0x0003b91b) hwr_training_write_pane_ParamLimits

0x9ebe,	// (0x0003b91b) hwr_training_write_pane

0x5ace,	// (0x0003752b) bg_frame_shadow_pane

0x14f2,	// (0x00032f4f) hwr_training_write_pane_g1

0x14fa,	// (0x00032f57) hwr_training_write_pane_g2

0x1502,	// (0x00032f5f) hwr_training_write_pane_g3

0x150a,	// (0x00032f67) hwr_training_write_pane_g4

0x1512,	// (0x00032f6f) hwr_training_write_pane_g5

0x151a,	// (0x00032f77) hwr_training_write_pane_g6

0x1522,	// (0x00032f7f) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x000412b5) hwr_training_write_pane_g

0x9eec,	// (0x0003b949) hwr_training_navi_pane_g1_ParamLimits

0x9eec,	// (0x0003b949) hwr_training_navi_pane_g1

0x9efe,	// (0x0003b95b) hwr_training_navi_pane_g2_ParamLimits

0x9efe,	// (0x0003b95b) hwr_training_navi_pane_g2

0x9f10,	// (0x0003b96d) hwr_training_navi_pane_g3_ParamLimits

0x9f10,	// (0x0003b96d) hwr_training_navi_pane_g3

0x9f20,	// (0x0003b97d) hwr_training_navi_pane_g4_ParamLimits

0x9f20,	// (0x0003b97d) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x000412c4) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x000412c4) hwr_training_navi_pane_g

0x9f3a,	// (0x0003b997) hwr_training_navi_pane_t1

0x9f48,	// (0x0003b9a5) list_single_hwr_training_instruct_pane_ParamLimits

0x9f48,	// (0x0003b9a5) list_single_hwr_training_instruct_pane

0x1579,	// (0x00032fd6) list_single_hwr_training_instruct_pane_t1

0x0bee,	// (0x0003264b) bg_frame_shadow_pane_g1

0x1588,	// (0x00032fe5) bg_frame_shadow_pane_g2

0x1590,	// (0x00032fed) bg_frame_shadow_pane_g3

0x1598,	// (0x00032ff5) bg_frame_shadow_pane_g4

0x15a0,	// (0x00032ffd) bg_frame_shadow_pane_g5

0x15a8,	// (0x00033005) bg_frame_shadow_pane_g6

0x15b0,	// (0x0003300d) bg_frame_shadow_pane_g7

0xd7f4,	// (0x0003f251) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x000412cf) bg_frame_shadow_pane_g

0x5ace,	// (0x0003752b) main_video_tele_dialer_pane

0x9f60,	// (0x0003b9bd) aid_size_cell_video_keypad_ParamLimits

0x9f60,	// (0x0003b9bd) aid_size_cell_video_keypad

0x9f70,	// (0x0003b9cd) grid_video_dialer_keypad_pane_ParamLimits

0x9f70,	// (0x0003b9cd) grid_video_dialer_keypad_pane

0x9fa0,	// (0x0003b9fd) video_down_pane_cp_ParamLimits

0x9fa0,	// (0x0003b9fd) video_down_pane_cp

0x9fc8,	// (0x0003ba25) cell_video_dialer_keypad_pane_ParamLimits

0x9fc8,	// (0x0003ba25) cell_video_dialer_keypad_pane

0x15b8,	// (0x00033015) bg_button_pane_cp08_ParamLimits

0x15b8,	// (0x00033015) bg_button_pane_cp08

0x9fdd,	// (0x0003ba3a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9fdd,	// (0x0003ba3a) cell_video_dialer_keypad_pane_g1

0x9832,	// (0x0003b28f) mup3_rocker2_pane_ParamLimits

0x9832,	// (0x0003b28f) mup3_rocker2_pane

0x0cae,	// (0x0003270b) mup3_rocker2_pane_g1

0x8877,	// (0x0003a2d4) main_dialer2_pane

0x5ace,	// (0x0003752b) main_mp4_pane

0xa024,	// (0x0003ba81) main_mp4_pane_g1_ParamLimits

0xa024,	// (0x0003ba81) main_mp4_pane_g1

0xa032,	// (0x0003ba8f) main_mp4_pane_g2_ParamLimits

0xa032,	// (0x0003ba8f) main_mp4_pane_g2

0xa040,	// (0x0003ba9d) main_mp4_pane_g3_ParamLimits

0xa040,	// (0x0003ba9d) main_mp4_pane_g3

0xa075,	// (0x0003bad2) main_mp4_pane_g4_ParamLimits

0xa075,	// (0x0003bad2) main_mp4_pane_g4

0xa0a3,	// (0x0003bb00) main_mp4_pane_g5_ParamLimits

0xa0a3,	// (0x0003bb00) main_mp4_pane_g5

0x0007,

0xf892,	// (0x000412ef) main_mp4_pane_g_ParamLimits

0xf892,	// (0x000412ef) main_mp4_pane_g

0xa117,	// (0x0003bb74) main_mp4_pane_t1_ParamLimits

0xa117,	// (0x0003bb74) main_mp4_pane_t1

0xa16f,	// (0x0003bbcc) main_mp4_pane_t2_ParamLimits

0xa16f,	// (0x0003bbcc) main_mp4_pane_t2

0x172e,	// (0x0003318b) main_mp4_pane_t3_ParamLimits

0x172e,	// (0x0003318b) main_mp4_pane_t3

0xa1c1,	// (0x0003bc1e) main_mp4_pane_t4_ParamLimits

0xa1c1,	// (0x0003bc1e) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x00041300) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x00041300) main_mp4_pane_t

0xa201,	// (0x0003bc5e) mp4_progress_pane_ParamLimits

0xa201,	// (0x0003bc5e) mp4_progress_pane

0xa245,	// (0x0003bca2) mp4_rocker_pane_ParamLimits

0xa245,	// (0x0003bca2) mp4_rocker_pane

0x17fe,	// (0x0003325b) mp4_progress_pane_t1

0x1815,	// (0x00033272) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x00041309) mp4_progress_pane_t

0x182c,	// (0x00033289) mup_progress_pane_cp04

0x0cae,	// (0x0003270b) mp4_rocker_pane_g1

0xa263,	// (0x0003bcc0) aid_cell_size_keypad2_ParamLimits

0xa263,	// (0x0003bcc0) aid_cell_size_keypad2

0xa273,	// (0x0003bcd0) dialer2_ne_pane_ParamLimits

0xa273,	// (0x0003bcd0) dialer2_ne_pane

0xa27f,	// (0x0003bcdc) grid_dialer2_keypad_pane_ParamLimits

0xa27f,	// (0x0003bcdc) grid_dialer2_keypad_pane

0x22d2,	// (0x00033d2f) bg_popup_call_pane_cp07_ParamLimits

0x22d2,	// (0x00033d2f) bg_popup_call_pane_cp07

0xa28b,	// (0x0003bce8) dialer2_ne_pane_t1_ParamLimits

0xa28b,	// (0x0003bce8) dialer2_ne_pane_t1

0xa2b0,	// (0x0003bd0d) cell_dialer2_keypad_pane_ParamLimits

0xa2b0,	// (0x0003bd0d) cell_dialer2_keypad_pane

0x1854,	// (0x000332b1) bg_button_pane_pane_cp04_ParamLimits

0x1854,	// (0x000332b1) bg_button_pane_pane_cp04

0xa2c5,	// (0x0003bd22) cell_dialer2_keypad_pane_g1_ParamLimits

0xa2c5,	// (0x0003bd22) cell_dialer2_keypad_pane_g1

0x6ab3,	// (0x00038510) aid_placing_vt_set_content_ParamLimits

0x6ab3,	// (0x00038510) aid_placing_vt_set_content

0x6ad9,	// (0x00038536) aid_placing_vt_set_title_ParamLimits

0x6ad9,	// (0x00038536) aid_placing_vt_set_title

0x5ace,	// (0x0003752b) main_image3_pane

0xa339,	// (0x0003bd96) area_side_right_pane_cp01_ParamLimits

0xa339,	// (0x0003bd96) area_side_right_pane_cp01

0x2810,	// (0x0003426d) main_image3_pane_g1_ParamLimits

0x2810,	// (0x0003426d) main_image3_pane_g1

0xa366,	// (0x0003bdc3) main_image3_pane_g2_ParamLimits

0xa366,	// (0x0003bdc3) main_image3_pane_g2

0xa37d,	// (0x0003bdda) main_image3_pane_g3_ParamLimits

0xa37d,	// (0x0003bdda) main_image3_pane_g3

0xa394,	// (0x0003bdf1) main_image3_pane_g4_ParamLimits

0xa394,	// (0x0003bdf1) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x00041318) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x00041318) main_image3_pane_g

0xa3ab,	// (0x0003be08) main_image3_pane_t1_ParamLimits

0xa3ab,	// (0x0003be08) main_image3_pane_t1

0xa3d0,	// (0x0003be2d) main_image3_pane_t2_ParamLimits

0xa3d0,	// (0x0003be2d) main_image3_pane_t2

0xa3ef,	// (0x0003be4c) main_image3_pane_t3_ParamLimits

0xa3ef,	// (0x0003be4c) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x00041321) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x00041321) main_image3_pane_t

0x388e,	// (0x000352eb) grid_sctrl_middle_pane_cp01_ParamLimits

0x388e,	// (0x000352eb) grid_sctrl_middle_pane_cp01

0xa44a,	// (0x0003bea7) cell_sctrl_middle_pane_cp01_ParamLimits

0xa44a,	// (0x0003bea7) cell_sctrl_middle_pane_cp01

0xa45b,	// (0x0003beb8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa45b,	// (0x0003beb8) cell_sctrl_middle_pane_cp01_g1

0x5ace,	// (0x0003752b) main_call4_pane

0xa468,	// (0x0003bec5) aid_size_button_call4_ParamLimits

0xa468,	// (0x0003bec5) aid_size_button_call4

0xa492,	// (0x0003beef) call4_windows_pane_ParamLimits

0xa492,	// (0x0003beef) call4_windows_pane

0xa4a6,	// (0x0003bf03) grid_call4_button_pane_ParamLimits

0xa4a6,	// (0x0003bf03) grid_call4_button_pane

0x18aa,	// (0x00033307) call4_windows_conf_pane

0xa4c8,	// (0x0003bf25) popup_call4_audio_first_window_ParamLimits

0xa4c8,	// (0x0003bf25) popup_call4_audio_first_window

0xa4e8,	// (0x0003bf45) popup_call4_audio_second_window_ParamLimits

0xa4e8,	// (0x0003bf45) popup_call4_audio_second_window

0x18dd,	// (0x0003333a) popup_call4_audio_wait_window_ParamLimits

0x18dd,	// (0x0003333a) popup_call4_audio_wait_window

0xa4fa,	// (0x0003bf57) cell_call4_button_pane_ParamLimits

0xa4fa,	// (0x0003bf57) cell_call4_button_pane

0xd79e,	// (0x0003f1fb) bg_button_pane_cp09_ParamLimits

0xd79e,	// (0x0003f1fb) bg_button_pane_cp09

0xa51d,	// (0x0003bf7a) cell_call4_button_pane_g1_ParamLimits

0xa51d,	// (0x0003bf7a) cell_call4_button_pane_g1

0xa52a,	// (0x0003bf87) cell_call4_button_pane_t1_ParamLimits

0xa52a,	// (0x0003bf87) cell_call4_button_pane_t1

0x1923,	// (0x00033380) popup_call4_audio_conf_window_ParamLimits

0x1923,	// (0x00033380) popup_call4_audio_conf_window

0x9863,	// (0x0003b2c0) mup3_progress_pane_t1_ParamLimits

0x9881,	// (0x0003b2de) mup3_progress_pane_t2_ParamLimits

0x0fcc,	// (0x00032a29) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x000411f1) mup3_progress_pane_t_ParamLimits

0x0fe9,	// (0x00032a46) mup_progress_pane_cp03_ParamLimits

0x9d5c,	// (0x0003b7b9) mup3_control_keys_pane_g4_copy1

0xa22f,	// (0x0003bc8c) mp4_rocker2_pane_ParamLimits

0xa22f,	// (0x0003bc8c) mp4_rocker2_pane

0x193f,	// (0x0003339c) mp4_rocker2_pane_g1

0x1937,	// (0x00033394) mp4_rocker2_pane_g2

0xa56e,	// (0x0003bfcb) mp4_rocker2_pane_g3

0xa576,	// (0x0003bfd3) mp4_rocker2_pane_g4

0xa57e,	// (0x0003bfdb) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x0004132a) mp4_rocker2_pane_g

0x5ace,	// (0x0003752b) main_camera4_pane

0x5ace,	// (0x0003752b) main_video4_pane

0x9f7c,	// (0x0003b9d9) main_video_tele_dialer_pane_t1_ParamLimits

0x9f7c,	// (0x0003b9d9) main_video_tele_dialer_pane_t1

0x9f8e,	// (0x0003b9eb) main_video_tele_dialer_pane_t2_ParamLimits

0x9f8e,	// (0x0003b9eb) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x000412e0) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x000412e0) main_video_tele_dialer_pane_t

0xa59c,	// (0x0003bff9) cam4_autofocus_pane_ParamLimits

0xa59c,	// (0x0003bff9) cam4_autofocus_pane

0xa5b2,	// (0x0003c00f) cam4_image_uncrop_pane_ParamLimits

0xa5b2,	// (0x0003c00f) cam4_image_uncrop_pane

0xa5c7,	// (0x0003c024) cam4_indicators_pane_ParamLimits

0xa5c7,	// (0x0003c024) cam4_indicators_pane

0xa5e1,	// (0x0003c03e) main_camera4_pane_g1_ParamLimits

0xa5e1,	// (0x0003c03e) main_camera4_pane_g1

0xa5ed,	// (0x0003c04a) main_camera4_pane_g2_ParamLimits

0xa5ed,	// (0x0003c04a) main_camera4_pane_g2

0xa5ed,	// (0x0003c04a) main_camera4_pane_g3_ParamLimits

0xa5ed,	// (0x0003c04a) main_camera4_pane_g3

0xa5f9,	// (0x0003c056) main_camera4_pane_g4_ParamLimits

0xa5f9,	// (0x0003c056) main_camera4_pane_g4

0xa605,	// (0x0003c062) main_camera4_pane_g5_ParamLimits

0xa605,	// (0x0003c062) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x00041335) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x00041335) main_camera4_pane_g

0xa61f,	// (0x0003c07c) main_camera4_pane_t1_ParamLimits

0xa61f,	// (0x0003c07c) main_camera4_pane_t1

0x0edd,	// (0x0003293a) bg_tb_trans_pane_cp06

0xa66f,	// (0x0003c0cc) cam4_indicators_pane_g1

0xa67f,	// (0x0003c0dc) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x00041350) cam4_indicators_pane_g

0xa69f,	// (0x0003c0fc) cam4_indicators_pane_t1

0xa6c7,	// (0x0003c124) main_video4_pane_g1_ParamLimits

0xa6c7,	// (0x0003c124) main_video4_pane_g1

0xa5ed,	// (0x0003c04a) main_video4_pane_g2_ParamLimits

0xa5ed,	// (0x0003c04a) main_video4_pane_g2

0xa5ed,	// (0x0003c04a) main_video4_pane_g3_ParamLimits

0xa5ed,	// (0x0003c04a) main_video4_pane_g3

0xa5f9,	// (0x0003c056) main_video4_pane_g4_ParamLimits

0xa5f9,	// (0x0003c056) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x00041357) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x00041357) main_video4_pane_g

0xa6db,	// (0x0003c138) vid4_indicators_pane_ParamLimits

0xa6db,	// (0x0003c138) vid4_indicators_pane

0xa6f9,	// (0x0003c156) video4_image_uncrop_cif_pane_ParamLimits

0xa6f9,	// (0x0003c156) video4_image_uncrop_cif_pane

0xa706,	// (0x0003c163) video4_image_uncrop_nhd_pane_ParamLimits

0xa706,	// (0x0003c163) video4_image_uncrop_nhd_pane

0xa5b2,	// (0x0003c00f) video4_image_uncrop_vga_pane_ParamLimits

0xa5b2,	// (0x0003c00f) video4_image_uncrop_vga_pane

0xf077,	// (0x00040ad4) bg_tb_trans_pane_cp07

0xa66f,	// (0x0003c0cc) vid4_indicators_pane_g1

0xa713,	// (0x0003c170) vid4_indicators_pane_g2

0xa723,	// (0x0003c180) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x00041362) vid4_indicators_pane_g

0xa750,	// (0x0003c1ad) vid4_indicators_pane_t1

0xa76a,	// (0x0003c1c7) cam4_autofocus_pane_g1

0xa772,	// (0x0003c1cf) cam4_autofocus_pane_g2

0xa77a,	// (0x0003c1d7) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x0004136d) cam4_autofocus_pane_g

0xa782,	// (0x0003c1df) cam4_autofocus_pane_g3_copy1

0x9fac,	// (0x0003ba09) video_down_pane_cp_t1

0x9fba,	// (0x0003ba17) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x000412e5) video_down_pane_cp_t

0x388e,	// (0x000352eb) popup_vitu2_window_ParamLimits

0x388e,	// (0x000352eb) popup_vitu2_window

0xa78a,	// (0x0003c1e7) aid_size_cell2_itu2_ParamLimits

0xa78a,	// (0x0003c1e7) aid_size_cell2_itu2

0xa7ac,	// (0x0003c209) aid_size_cell_itu2_ParamLimits

0xa7ac,	// (0x0003c209) aid_size_cell_itu2

0x22d2,	// (0x00033d2f) bg_popup_window_pane_cp09_ParamLimits

0x22d2,	// (0x00033d2f) bg_popup_window_pane_cp09

0xa7ea,	// (0x0003c247) field_vitu2_entry_pane_ParamLimits

0xa7ea,	// (0x0003c247) field_vitu2_entry_pane

0xa7fe,	// (0x0003c25b) grid_vitu2_function_pane_ParamLimits

0xa7fe,	// (0x0003c25b) grid_vitu2_function_pane

0xa82c,	// (0x0003c289) grid_vitu2_itu_pane_ParamLimits

0xa82c,	// (0x0003c289) grid_vitu2_itu_pane

0xa884,	// (0x0003c2e1) cell_vitu2_itu_pane_ParamLimits

0xa884,	// (0x0003c2e1) cell_vitu2_itu_pane

0xa89c,	// (0x0003c2f9) cell_vitu2_function_pane_ParamLimits

0xa89c,	// (0x0003c2f9) cell_vitu2_function_pane

0x1a4a,	// (0x000334a7) bg_popup_call_pane_cp08_ParamLimits

0x1a4a,	// (0x000334a7) bg_popup_call_pane_cp08

0x1a61,	// (0x000334be) field_vitu2_entry_pane_g1

0x1a6d,	// (0x000334ca) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x00041374) field_vitu2_entry_pane_g

0x4b5d,	// (0x000365ba) field_vitu2_entry_pane_t1_ParamLimits

0x4b5d,	// (0x000365ba) field_vitu2_entry_pane_t1

0x4b8b,	// (0x000365e8) field_vitu2_entry_pane_t2_ParamLimits

0x4b8b,	// (0x000365e8) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x0004137b) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x0004137b) field_vitu2_entry_pane_t

0xa8db,	// (0x0003c338) bg_button_pane_cp010_ParamLimits

0xa8db,	// (0x0003c338) bg_button_pane_cp010

0xa8e9,	// (0x0003c346) cell_vitu2_itu_pane_g1

0xa909,	// (0x0003c366) cell_vitu2_itu_pane_t1_ParamLimits

0xa909,	// (0x0003c366) cell_vitu2_itu_pane_t1

0x4ba8,	// (0x00036605) cell_vitu2_itu_pane_t2_ParamLimits

0x4ba8,	// (0x00036605) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x00041385) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x00041385) cell_vitu2_itu_pane_t

0xf077,	// (0x00040ad4) bg_button_pane_cp011

0xa955,	// (0x0003c3b2) cell_vitu2_function_pane_g1

0x5ace,	// (0x0003752b) main_myfav_hc_pane

0xa42f,	// (0x0003be8c) popup_image3_note_pane_ParamLimits

0xa42f,	// (0x0003be8c) popup_image3_note_pane

0xa43b,	// (0x0003be98) popup_image3_tool_bar_pane_ParamLimits

0xa43b,	// (0x0003be98) popup_image3_tool_bar_pane

0x4c1e,	// (0x0003667b) cell_vitu2_itu_pane_t3_ParamLimits

0x4c1e,	// (0x0003667b) cell_vitu2_itu_pane_t3

0x5ace,	// (0x0003752b) bg_popup_trans_pane

0x1abe,	// (0x0003351b) grid_image3_tool_bar_pane

0x1ac8,	// (0x00033525) bg_popup_trans_pane_g1

0xdbb1,	// (0x0003f60e) bg_popup_trans_pane_g2

0x1ad0,	// (0x0003352d) bg_popup_trans_pane_g3

0x1ad8,	// (0x00033535) bg_popup_trans_pane_g4

0x1ae0,	// (0x0003353d) bg_popup_trans_pane_g5

0x1ae8,	// (0x00033545) bg_popup_trans_pane_g6

0x1af0,	// (0x0003354d) bg_popup_trans_pane_g7

0x1af8,	// (0x00033555) bg_popup_trans_pane_g8

0xdb91,	// (0x0003f5ee) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x0004138c) bg_popup_trans_pane_g

0x1b00,	// (0x0003355d) cell_image3_tool_bar_pane_ParamLimits

0x1b00,	// (0x0003355d) cell_image3_tool_bar_pane

0x0cae,	// (0x0003270b) cell_image3_tool_bar_pane_g1

0x5ace,	// (0x0003752b) bg_popup_trans_pane_cp1

0x1b14,	// (0x00033571) popup_image3_note_pane_t1

0x1b22,	// (0x0003357f) popup_image3_note_pane_t2

0x1b30,	// (0x0003358d) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x0004139f) popup_image3_note_pane_t

0x1b3e,	// (0x0003359b) popup_image3_note_pane_t3_copy1

0xa969,	// (0x0003c3c6) bg_myfav_hc_instruction_pane_ParamLimits

0xa969,	// (0x0003c3c6) bg_myfav_hc_instruction_pane

0xa97b,	// (0x0003c3d8) cell_myfav_contact_pane_ParamLimits

0xa97b,	// (0x0003c3d8) cell_myfav_contact_pane

0xa995,	// (0x0003c3f2) cell_myfav_contact_pane_cp1_ParamLimits

0xa995,	// (0x0003c3f2) cell_myfav_contact_pane_cp1

0xa9ab,	// (0x0003c408) cell_myfav_contact_pane_cp2_ParamLimits

0xa9ab,	// (0x0003c408) cell_myfav_contact_pane_cp2

0xa9c1,	// (0x0003c41e) cell_myfav_contact_pane_cp3_ParamLimits

0xa9c1,	// (0x0003c41e) cell_myfav_contact_pane_cp3

0xa9d6,	// (0x0003c433) cell_myfav_contact_pane_cp4_ParamLimits

0xa9d6,	// (0x0003c433) cell_myfav_contact_pane_cp4

0xa9ea,	// (0x0003c447) cell_myfav_contact_pane_cp5_ParamLimits

0xa9ea,	// (0x0003c447) cell_myfav_contact_pane_cp5

0xa9fe,	// (0x0003c45b) cell_myfav_contact_pane_cp6_ParamLimits

0xa9fe,	// (0x0003c45b) cell_myfav_contact_pane_cp6

0xaa12,	// (0x0003c46f) cell_myfav_contact_pane_cp7_ParamLimits

0xaa12,	// (0x0003c46f) cell_myfav_contact_pane_cp7

0x1b4c,	// (0x000335a9) listscroll_gen_pane_cp05

0xaa2a,	// (0x0003c487) main_myfav_hc_pane_g1_ParamLimits

0xaa2a,	// (0x0003c487) main_myfav_hc_pane_g1

0xaa40,	// (0x0003c49d) main_myfav_hc_pane_g2_ParamLimits

0xaa40,	// (0x0003c49d) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x000413a6) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x000413a6) main_myfav_hc_pane_g

0xaa6a,	// (0x0003c4c7) main_myfav_hc_pane_t1_ParamLimits

0xaa6a,	// (0x0003c4c7) main_myfav_hc_pane_t1

0x1b55,	// (0x000335b2) main_myfav_hc_pane_t2_ParamLimits

0x1b55,	// (0x000335b2) main_myfav_hc_pane_t2

0x1b67,	// (0x000335c4) main_myfav_hc_pane_t3_ParamLimits

0x1b67,	// (0x000335c4) main_myfav_hc_pane_t3

0xaa7f,	// (0x0003c4dc) main_myfav_hc_pane_t4_ParamLimits

0xaa7f,	// (0x0003c4dc) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x000413ad) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x000413ad) main_myfav_hc_pane_t

0x0cae,	// (0x0003270b) bg_myfav_hc_instruction_pane_g1

0x1b79,	// (0x000335d6) cell_myfav_contact_pane_g1_ParamLimits

0x1b79,	// (0x000335d6) cell_myfav_contact_pane_g1

0x1b79,	// (0x000335d6) cell_myfav_contact_pane_g2_ParamLimits

0x1b79,	// (0x000335d6) cell_myfav_contact_pane_g2

0x1b85,	// (0x000335e2) cell_myfav_contact_pane_g3_ParamLimits

0x1b85,	// (0x000335e2) cell_myfav_contact_pane_g3

0x0fb6,	// (0x00032a13) cell_myfav_contact_pane_g4_ParamLimits

0x0fb6,	// (0x00032a13) cell_myfav_contact_pane_g4

0x1b92,	// (0x000335ef) cell_myfav_contact_pane_g5_ParamLimits

0x1b92,	// (0x000335ef) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x000413b8) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x000413b8) cell_myfav_contact_pane_g

0xaa56,	// (0x0003c4b3) main_myfav_hc_pane_g3_ParamLimits

0xaa56,	// (0x0003c4b3) main_myfav_hc_pane_g3

0x5c60,	// (0x000376bd) popup_adpt_find_window

0xaaa3,	// (0x0003c500) afind_page_pane_ParamLimits

0xaaa3,	// (0x0003c500) afind_page_pane

0xaab0,	// (0x0003c50d) aid_size_cell_afind_ParamLimits

0xaab0,	// (0x0003c50d) aid_size_cell_afind

0xaaca,	// (0x0003c527) bg_popup_sub_pane_cp09_ParamLimits

0xaaca,	// (0x0003c527) bg_popup_sub_pane_cp09

0xaad7,	// (0x0003c534) find_pane_cp01_ParamLimits

0xaad7,	// (0x0003c534) find_pane_cp01

0x1b9e,	// (0x000335fb) grid_afind_control_pane_ParamLimits

0x1b9e,	// (0x000335fb) grid_afind_control_pane

0xaae4,	// (0x0003c541) grid_afind_pane_ParamLimits

0xaae4,	// (0x0003c541) grid_afind_pane

0xaafa,	// (0x0003c557) cell_afind_pane_ParamLimits

0xaafa,	// (0x0003c557) cell_afind_pane

0x0cae,	// (0x0003270b) afind_page_pane_g1

0xab30,	// (0x0003c58d) afind_page_pane_g2

0xab39,	// (0x0003c596) afind_page_pane_g3

0x0002,

0xf966,	// (0x000413c3) afind_page_pane_g

0xab42,	// (0x0003c59f) afind_page_pane_t1

0x1bb2,	// (0x0003360f) cell_afind_grid_control_pane_ParamLimits

0x1bb2,	// (0x0003360f) cell_afind_grid_control_pane

0x1854,	// (0x000332b1) bg_button_pane_cp69_ParamLimits

0x1854,	// (0x000332b1) bg_button_pane_cp69

0xab62,	// (0x0003c5bf) cell_afind_pane_g1_ParamLimits

0xab62,	// (0x0003c5bf) cell_afind_pane_g1

0xab6f,	// (0x0003c5cc) cell_afind_pane_t1_ParamLimits

0xab6f,	// (0x0003c5cc) cell_afind_pane_t1

0xd99d,	// (0x0003f3fa) bg_button_pane_cp72

0x1bc1,	// (0x0003361e) cell_afind_grid_control_pane_g1

0x84af,	// (0x00039f0c) aid_image_placing_area_ParamLimits

0x84af,	// (0x00039f0c) aid_image_placing_area

0x12c9,	// (0x00032d26) field_vitu_entry_pane_g1_ParamLimits

0x12c9,	// (0x00032d26) field_vitu_entry_pane_g1

0x12d5,	// (0x00032d32) field_vitu_entry_pane_g2_ParamLimits

0x12d5,	// (0x00032d32) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x00041270) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x00041270) field_vitu_entry_pane_g

0x9dd7,	// (0x0003b834) cell_vitu_itu_pane_g1_ParamLimits

0x9e19,	// (0x0003b876) cell_vitu_itu_pane_t3_ParamLimits

0x9e19,	// (0x0003b876) cell_vitu_itu_pane_t3

0x17fe,	// (0x0003325b) mp4_progress_pane_t1_ParamLimits

0x1815,	// (0x00033272) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x00041309) mp4_progress_pane_t_ParamLimits

0x182c,	// (0x00033289) mup_progress_pane_cp04_ParamLimits

0xaa91,	// (0x0003c4ee) main_myfav_hc_pane_t5_ParamLimits

0xaa91,	// (0x0003c4ee) main_myfav_hc_pane_t5

0x5b18,	// (0x00037575) aid_zoom_text_primary

0x5c60,	// (0x000376bd) popup_adpt_find_window_ParamLimits

0xf077,	// (0x00040ad4) main_cam_set_pane

0xa5d5,	// (0x0003c032) cam4_zoom_pane_ParamLimits

0xa5d5,	// (0x0003c032) cam4_zoom_pane

0xab81,	// (0x0003c5de) main_cam_set_pane_g1_ParamLimits

0xab81,	// (0x0003c5de) main_cam_set_pane_g1

0xab8f,	// (0x0003c5ec) main_cam_set_pane_g2_ParamLimits

0xab8f,	// (0x0003c5ec) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x000413ca) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x000413ca) main_cam_set_pane_g

0xab9b,	// (0x0003c5f8) main_cam_set_pane_t1_ParamLimits

0xab9b,	// (0x0003c5f8) main_cam_set_pane_t1

0xabad,	// (0x0003c60a) main_cset_listscroll_pane_ParamLimits

0xabad,	// (0x0003c60a) main_cset_listscroll_pane

0xabd6,	// (0x0003c633) main_cset_slider_pane_ParamLimits

0xabd6,	// (0x0003c633) main_cset_slider_pane

0x1bd2,	// (0x0003362f) main_cset_list_pane_ParamLimits

0x1bd2,	// (0x0003362f) main_cset_list_pane

0x1be2,	// (0x0003363f) scroll_pane_cp028

0xabf5,	// (0x0003c652) aid_area_touch_slider

0xac11,	// (0x0003c66e) cset_slider_pane

0xac3b,	// (0x0003c698) main_cset_slider_pane_g1

0xac50,	// (0x0003c6ad) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x000413cf) main_cset_slider_pane_g

0x1c1b,	// (0x00033678) main_cset_slider_pane_t1

0xad0c,	// (0x0003c769) main_cset_slider_pane_t2

0xad26,	// (0x0003c783) main_cset_slider_pane_t3

0xad40,	// (0x0003c79d) main_cset_slider_pane_t4

0xad5a,	// (0x0003c7b7) main_cset_slider_pane_t5

0xad74,	// (0x0003c7d1) main_cset_slider_pane_t6

0xad89,	// (0x0003c7e6) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x000413f4) main_cset_slider_pane_t

0xae8d,	// (0x0003c8ea) cset_list_set_pane_ParamLimits

0xae8d,	// (0x0003c8ea) cset_list_set_pane

0xae9d,	// (0x0003c8fa) aid_position_infowindow_above

0xaea5,	// (0x0003c902) aid_position_infowindow_below

0x4c70,	// (0x000366cd) cset_list_set_pane_g1_ParamLimits

0x4c70,	// (0x000366cd) cset_list_set_pane_g1

0x4c7c,	// (0x000366d9) cset_list_set_pane_g3_ParamLimits

0x4c7c,	// (0x000366d9) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x00041413) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x00041413) cset_list_set_pane_g

0x4c8b,	// (0x000366e8) cset_list_set_pane_t1_ParamLimits

0x4c8b,	// (0x000366e8) cset_list_set_pane_t1

0xf077,	// (0x00040ad4) list_highlight_pane_cp021_ParamLimits

0xf077,	// (0x00040ad4) list_highlight_pane_cp021

0xe45c,	// (0x0003feb9) cset_slider_pane_g1

0xe46e,	// (0x0003fecb) cset_slider_pane_g2

0xe465,	// (0x0003fec2) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x00041418) cset_slider_pane_g

0xaead,	// (0x0003c90a) aid_area_touch_cam4_zoom

0xaeb5,	// (0x0003c912) cam4_zoom_cont_pane

0xaebd,	// (0x0003c91a) cam4_zoom_pane_g1

0xaec5,	// (0x0003c922) cam4_zoom_pane_g2

0xaecd,	// (0x0003c92a) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x0004141f) cam4_zoom_pane_g

0x264f,	// (0x000340ac) cam4_zoom_cont_pane_g1

0x2658,	// (0x000340b5) cam4_zoom_cont_pane_g2

0x2661,	// (0x000340be) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x00041426) cam4_zoom_cont_pane_g

0xa482,	// (0x0003bedf) call4_image_pane_ParamLimits

0xa482,	// (0x0003bedf) call4_image_pane

0x18aa,	// (0x00033307) call4_windows_conf_pane_ParamLimits

0x18bd,	// (0x0003331a) popup_call4_audio_in_window_ParamLimits

0x18bd,	// (0x0003331a) popup_call4_audio_in_window

0x5ace,	// (0x0003752b) bg_popup_call2_act_pane_cp02

0x191b,	// (0x00033378) call4_list_conf_pane

0x0cae,	// (0x0003270b) call4_image_pane_g1

0x0cae,	// (0x0003270b) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x00041131) call4_image_pane_g

0x1cf6,	// (0x00033753) list_single_graphic_popup_conf4_pane_ParamLimits

0x1cf6,	// (0x00033753) list_single_graphic_popup_conf4_pane

0x5ace,	// (0x0003752b) list_highlight_pane_cp022

0x1d09,	// (0x00033766) list_single_graphic_popup_conf4_pane_g1

0xe09f,	// (0x0003fafc) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x0004142d) list_single_graphic_popup_conf4_pane_g

0x1d11,	// (0x0003376e) list_single_graphic_popup_conf4_pane_t1

0x6c1d,	// (0x0003867a) popup_vtel_slider_window_ParamLimits

0x6c1d,	// (0x0003867a) popup_vtel_slider_window

0x1842,	// (0x0003329f) dialer2_ne_pane_t2_ParamLimits

0x1842,	// (0x0003329f) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x0004130e) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x0004130e) dialer2_ne_pane_t

0xf077,	// (0x00040ad4) bg_popup_sub_pane_cp010_ParamLimits

0xf077,	// (0x00040ad4) bg_popup_sub_pane_cp010

0xaed5,	// (0x0003c932) popup_vtel_slider_window_g1_ParamLimits

0xaed5,	// (0x0003c932) popup_vtel_slider_window_g1

0xaee1,	// (0x0003c93e) popup_vtel_slider_window_g2_ParamLimits

0xaee1,	// (0x0003c93e) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x00041432) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x00041432) popup_vtel_slider_window_g

0xaf27,	// (0x0003c984) vtel_slider_pane_ParamLimits

0xaf27,	// (0x0003c984) vtel_slider_pane

0xaf36,	// (0x0003c993) vtel_slider_pane_g1_ParamLimits

0xaf36,	// (0x0003c993) vtel_slider_pane_g1

0xaf43,	// (0x0003c9a0) vtel_slider_pane_g2_ParamLimits

0xaf43,	// (0x0003c9a0) vtel_slider_pane_g2

0xaf50,	// (0x0003c9ad) vtel_slider_pane_g3_ParamLimits

0xaf50,	// (0x0003c9ad) vtel_slider_pane_g3

0xaf36,	// (0x0003c993) vtel_slider_pane_g4_ParamLimits

0xaf36,	// (0x0003c993) vtel_slider_pane_g4

0xaf5d,	// (0x0003c9ba) vtel_slider_pane_g5_ParamLimits

0xaf5d,	// (0x0003c9ba) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x0004143b) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x0004143b) vtel_slider_pane_g

0xf077,	// (0x00040ad4) main_gallery2_pane

0xa7d2,	// (0x0003c22f) aid_size_row_itut2_dropdow_list_ParamLimits

0xa7d2,	// (0x0003c22f) aid_size_row_itut2_dropdow_list

0xa814,	// (0x0003c271) grid_vitu2_function_top_pane_ParamLimits

0xa814,	// (0x0003c271) grid_vitu2_function_top_pane

0xa850,	// (0x0003c2ad) popup_vitu2_dropdown_list_window_ParamLimits

0xa850,	// (0x0003c2ad) popup_vitu2_dropdown_list_window

0xa868,	// (0x0003c2c5) popup_vitu2_match_list_window

0xaf6a,	// (0x0003c9c7) cell_vitu2_function_top_pane_ParamLimits

0xaf6a,	// (0x0003c9c7) cell_vitu2_function_top_pane

0xaf82,	// (0x0003c9df) cell_vitu2_function_top_pane_cp01_ParamLimits

0xaf82,	// (0x0003c9df) cell_vitu2_function_top_pane_cp01

0xaf9e,	// (0x0003c9fb) cell_vitu2_function_top_wide_pane_ParamLimits

0xaf9e,	// (0x0003c9fb) cell_vitu2_function_top_wide_pane

0xf077,	// (0x00040ad4) bg_button_pane_cp012

0xafba,	// (0x0003ca17) cell_vitu2_function_top_pane_g1

0xafce,	// (0x0003ca2b) bg_button_pane_cp013_ParamLimits

0xafce,	// (0x0003ca2b) bg_button_pane_cp013

0xafea,	// (0x0003ca47) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xafea,	// (0x0003ca47) cell_vitu2_function_top_wide_pane_g1

0x388e,	// (0x000352eb) bg_popup_sub_pane_cp20

0xb002,	// (0x0003ca5f) list_vitu2_match_list_pane

0x1ac8,	// (0x00033525) bg_popup_sub_pane_cp20_g1

0x1ad0,	// (0x0003352d) bg_popup_sub_pane_cp20_g2

0xdbb1,	// (0x0003f60e) bg_popup_sub_pane_cp20_g3

0x1ad8,	// (0x00033535) bg_popup_sub_pane_cp20_g4

0xdb91,	// (0x0003f5ee) bg_popup_sub_pane_cp20_g5

0x1d51,	// (0x000337ae) bg_popup_sub_pane_cp20_g6

0x1ae8,	// (0x00033545) bg_popup_sub_pane_cp20_g7

0x1af0,	// (0x0003354d) bg_popup_sub_pane_cp20_g8

0x1af8,	// (0x00033555) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x00041446) bg_popup_sub_pane_cp20_g

0xb01a,	// (0x0003ca77) list_vitu2_match_list_item_pane_ParamLimits

0xb01a,	// (0x0003ca77) list_vitu2_match_list_item_pane

0xb02c,	// (0x0003ca89) list_vitu2_match_list_item_pane_t1

0x5ace,	// (0x0003752b) bg_popup_sub_pane_cp21

0xdfdd,	// (0x0003fa3a) grid_vitu2_dropdown_list_pane

0xb03a,	// (0x0003ca97) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb03a,	// (0x0003ca97) cell_vitu2_dropdown_list_char_pane

0xb05b,	// (0x0003cab8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb05b,	// (0x0003cab8) cell_vitu2_dropdown_list_ctrl_pane

0x1dab,	// (0x00033808) cell_vitu2_dropdown_list_char_pane_g1

0x1da2,	// (0x000337ff) cell_vitu2_dropdown_list_char_pane_g2

0x1d99,	// (0x000337f6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x00041463) cell_vitu2_dropdown_list_char_pane_g

0xb087,	// (0x0003cae4) cell_vitu2_dropdown_list_char_pane_t1

0xb095,	// (0x0003caf2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb095,	// (0x0003caf2) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb0a5,	// (0x0003cb02) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb0a5,	// (0x0003cb02) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb0b6,	// (0x0003cb13) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb0b6,	// (0x0003cb13) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb0c6,	// (0x0003cb23) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb0c6,	// (0x0003cb23) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0edd,	// (0x0003293a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0edd,	// (0x0003293a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x0004146a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x0004146a) cell_vitu2_dropdown_list_ctrl_pane_g

0xb0df,	// (0x0003cb3c) aid_size_cell_gallery2_ParamLimits

0xb0df,	// (0x0003cb3c) aid_size_cell_gallery2

0xb0f9,	// (0x0003cb56) grid_gallery2_pane_ParamLimits

0xb0f9,	// (0x0003cb56) grid_gallery2_pane

0x9c86,	// (0x0003b6e3) scroll_pane_cp029_ParamLimits

0x9c86,	// (0x0003b6e3) scroll_pane_cp029

0xb10a,	// (0x0003cb67) cell_gallery2_pane_ParamLimits

0xb10a,	// (0x0003cb67) cell_gallery2_pane

0x1db4,	// (0x00033811) cell_gallery2_pane_g2

0xb157,	// (0x0003cbb4) cell_gallery2_pane_g3

0x1dbc,	// (0x00033819) cell_gallery2_pane_g4

0x1dc4,	// (0x00033821) cell_gallery2_pane_g5

0xd900,	// (0x0003f35d) grid_highlight_pane_cp10

0xa868,	// (0x0003c2c5) popup_vitu2_match_list_window_ParamLimits

0xa878,	// (0x0003c2d5) popup_vitu2_query_window_ParamLimits

0xa878,	// (0x0003c2d5) popup_vitu2_query_window

0x5ace,	// (0x0003752b) bg_vitu2_candi_button_pane

0x1dab,	// (0x00033808) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1da2,	// (0x000337ff) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1d99,	// (0x000337f6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x4cf5,	// (0x00036752) bg_button_pane_cp015

0xb15f,	// (0x0003cbbc) bg_button_pane_cp016

0xb172,	// (0x0003cbcf) bg_button_pane_cp017

0x079a,	// (0x000321f7) bg_popup_sub_pane_cp22

0x1dcc,	// (0x00033829) popup_vitu2_query_window_g1

0x4d24,	// (0x00036781) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x00041475) popup_vitu2_query_window_g

0x4d3f,	// (0x0003679c) popup_vitu2_query_window_t1_ParamLimits

0x4d3f,	// (0x0003679c) popup_vitu2_query_window_t1

0x4d72,	// (0x000367cf) popup_vitu2_query_window_t2_ParamLimits

0x4d72,	// (0x000367cf) popup_vitu2_query_window_t2

0x4d84,	// (0x000367e1) popup_vitu2_query_window_t3_ParamLimits

0x4d84,	// (0x000367e1) popup_vitu2_query_window_t3

0xb196,	// (0x0003cbf3) popup_vitu2_query_window_t4_ParamLimits

0xb196,	// (0x0003cbf3) popup_vitu2_query_window_t4

0xb1b3,	// (0x0003cc10) popup_vitu2_query_window_t5_ParamLimits

0xb1b3,	// (0x0003cc10) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x0004147c) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x0004147c) popup_vitu2_query_window_t

0x1bca,	// (0x00033627) main_cset_text_pane

0xabf5,	// (0x0003c652) aid_area_touch_slider_ParamLimits

0xac11,	// (0x0003c66e) cset_slider_pane_ParamLimits

0xac3b,	// (0x0003c698) main_cset_slider_pane_g1_ParamLimits

0xac50,	// (0x0003c6ad) main_cset_slider_pane_g2_ParamLimits

0x1beb,	// (0x00033648) main_cset_slider_pane_g3_ParamLimits

0x1beb,	// (0x00033648) main_cset_slider_pane_g3

0xac65,	// (0x0003c6c2) main_cset_slider_pane_g4_ParamLimits

0xac65,	// (0x0003c6c2) main_cset_slider_pane_g4

0xac74,	// (0x0003c6d1) main_cset_slider_pane_g5_ParamLimits

0xac74,	// (0x0003c6d1) main_cset_slider_pane_g5

0xac80,	// (0x0003c6dd) main_cset_slider_pane_g6_ParamLimits

0xac80,	// (0x0003c6dd) main_cset_slider_pane_g6

0xf972,	// (0x000413cf) main_cset_slider_pane_g_ParamLimits

0x1c1b,	// (0x00033678) main_cset_slider_pane_t1_ParamLimits

0xad0c,	// (0x0003c769) main_cset_slider_pane_t2_ParamLimits

0xad26,	// (0x0003c783) main_cset_slider_pane_t3_ParamLimits

0xad40,	// (0x0003c79d) main_cset_slider_pane_t4_ParamLimits

0xad5a,	// (0x0003c7b7) main_cset_slider_pane_t5_ParamLimits

0xad74,	// (0x0003c7d1) main_cset_slider_pane_t6_ParamLimits

0xad89,	// (0x0003c7e6) main_cset_slider_pane_t7_ParamLimits

0xadb3,	// (0x0003c810) main_cset_slider_pane_t8_ParamLimits

0xadb3,	// (0x0003c810) main_cset_slider_pane_t8

0xaddb,	// (0x0003c838) main_cset_slider_pane_t9_ParamLimits

0xaddb,	// (0x0003c838) main_cset_slider_pane_t9

0xae03,	// (0x0003c860) main_cset_slider_pane_t10_ParamLimits

0xae03,	// (0x0003c860) main_cset_slider_pane_t10

0xae2b,	// (0x0003c888) main_cset_slider_pane_t11_ParamLimits

0xae2b,	// (0x0003c888) main_cset_slider_pane_t11

0xae53,	// (0x0003c8b0) main_cset_slider_pane_t12_ParamLimits

0xae53,	// (0x0003c8b0) main_cset_slider_pane_t12

0xae70,	// (0x0003c8cd) main_cset_slider_pane_t13_ParamLimits

0xae70,	// (0x0003c8cd) main_cset_slider_pane_t13

0xf997,	// (0x000413f4) main_cset_slider_pane_t_ParamLimits

0x5ace,	// (0x0003752b) bg_popup_sub_pane_cp011

0x1dd8,	// (0x00033835) main_cset_text_pane_g1

0x1de0,	// (0x0003383d) main_cset_text_pane_t1

0x1dee,	// (0x0003384b) main_cset_text_pane_t2

0x1dfc,	// (0x00033859) main_cset_text_pane_t3

0x1e0a,	// (0x00033867) main_cset_text_pane_t4

0x1e18,	// (0x00033875) main_cset_text_pane_t5

0x1e26,	// (0x00033883) main_cset_text_pane_t6

0x1e34,	// (0x00033891) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x0004148b) main_cset_text_pane_t

0x5ace,	// (0x0003752b) main_cam4_burst_pane

0x5ace,	// (0x0003752b) main_cam5_pane

0xab50,	// (0x0003c5ad) bg_button_pane_cp019

0xab59,	// (0x0003c5b6) bg_button_pane_cp020

0x1bf7,	// (0x00033654) main_cset_slider_pane_g7_ParamLimits

0x1bf7,	// (0x00033654) main_cset_slider_pane_g7

0x1c03,	// (0x00033660) main_cset_slider_pane_g8_ParamLimits

0x1c03,	// (0x00033660) main_cset_slider_pane_g8

0xac94,	// (0x0003c6f1) main_cset_slider_pane_g9_ParamLimits

0xac94,	// (0x0003c6f1) main_cset_slider_pane_g9

0xaca0,	// (0x0003c6fd) main_cset_slider_pane_g10_ParamLimits

0xaca0,	// (0x0003c6fd) main_cset_slider_pane_g10

0xacac,	// (0x0003c709) main_cset_slider_pane_g11_ParamLimits

0xacac,	// (0x0003c709) main_cset_slider_pane_g11

0xacb8,	// (0x0003c715) main_cset_slider_pane_g12_ParamLimits

0xacb8,	// (0x0003c715) main_cset_slider_pane_g12

0xacc4,	// (0x0003c721) main_cset_slider_pane_g13_ParamLimits

0xacc4,	// (0x0003c721) main_cset_slider_pane_g13

0xacd0,	// (0x0003c72d) main_cset_slider_pane_g14_ParamLimits

0xacd0,	// (0x0003c72d) main_cset_slider_pane_g14

0xacdc,	// (0x0003c739) main_cset_slider_pane_g15_ParamLimits

0xacdc,	// (0x0003c739) main_cset_slider_pane_g15

0x1c49,	// (0x000336a6) main_cset_slider_pane_t14_ParamLimits

0x1c49,	// (0x000336a6) main_cset_slider_pane_t14

0x1c82,	// (0x000336df) main_cset_slider_pane_t15_ParamLimits

0x1c82,	// (0x000336df) main_cset_slider_pane_t15

0xb1d0,	// (0x0003cc2d) aid_cam4_burst_size_cell_ParamLimits

0xb1d0,	// (0x0003cc2d) aid_cam4_burst_size_cell

0xb1ec,	// (0x0003cc49) grid_cam4_burst_pane_ParamLimits

0xb1ec,	// (0x0003cc49) grid_cam4_burst_pane

0xb20e,	// (0x0003cc6b) linegrid_cam4_burst_pane_ParamLimits

0xb20e,	// (0x0003cc6b) linegrid_cam4_burst_pane

0xb22c,	// (0x0003cc89) scroll_pane_cp30_ParamLimits

0xb22c,	// (0x0003cc89) scroll_pane_cp30

0xb238,	// (0x0003cc95) cell_cam4_burst_pane_ParamLimits

0xb238,	// (0x0003cc95) cell_cam4_burst_pane

0x1e42,	// (0x0003389f) linegrid_cam4_burst_pane_g1_ParamLimits

0x1e42,	// (0x0003389f) linegrid_cam4_burst_pane_g1

0xb270,	// (0x0003cccd) linegrid_cam4_burst_pane_g2_ParamLimits

0xb270,	// (0x0003cccd) linegrid_cam4_burst_pane_g2

0x1e4f,	// (0x000338ac) linegrid_cam4_burst_pane_g3_ParamLimits

0x1e4f,	// (0x000338ac) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x0004149a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x0004149a) linegrid_cam4_burst_pane_g

0xb281,	// (0x0003ccde) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb281,	// (0x0003ccde) linegrid_cam4_burst_pane_g3_copy1

0x1e5c,	// (0x000338b9) linegrid_cam4_burst_pane_g4_ParamLimits

0x1e5c,	// (0x000338b9) linegrid_cam4_burst_pane_g4

0xb29b,	// (0x0003ccf8) linegrid_cam4_burst_pane_g5_ParamLimits

0xb29b,	// (0x0003ccf8) linegrid_cam4_burst_pane_g5

0xb2ac,	// (0x0003cd09) linegrid_cam4_burst_pane_g6_ParamLimits

0xb2ac,	// (0x0003cd09) linegrid_cam4_burst_pane_g6

0x1e69,	// (0x000338c6) linegrid_cam4_burst_pane_g7_ParamLimits

0x1e69,	// (0x000338c6) linegrid_cam4_burst_pane_g7

0xb2bd,	// (0x0003cd1a) cell_cam4_burst_pane_g1

0x1e82,	// (0x000338df) main_cam5_pane_t1_ParamLimits

0x1e82,	// (0x000338df) main_cam5_pane_t1

0x1e94,	// (0x000338f1) main_cam5_pane_t2_ParamLimits

0x1e94,	// (0x000338f1) main_cam5_pane_t2

0x1ea6,	// (0x00033903) main_cam5_pane_t3_ParamLimits

0x1ea6,	// (0x00033903) main_cam5_pane_t3

0x1eb8,	// (0x00033915) main_cam5_pane_t4_ParamLimits

0x1eb8,	// (0x00033915) main_cam5_pane_t4

0x1ece,	// (0x0003392b) main_cam5_pane_t5_ParamLimits

0x1ece,	// (0x0003392b) main_cam5_pane_t5

0x1ee0,	// (0x0003393d) main_cam5_pane_t6_ParamLimits

0x1ee0,	// (0x0003393d) main_cam5_pane_t6

0x1ef2,	// (0x0003394f) main_cam5_pane_t7_ParamLimits

0x1ef2,	// (0x0003394f) main_cam5_pane_t7

0x1f04,	// (0x00033961) main_cam5_pane_t8_ParamLimits

0x1f04,	// (0x00033961) main_cam5_pane_t8

0x1f20,	// (0x0003397d) main_cam5_pane_t9_ParamLimits

0x1f20,	// (0x0003397d) main_cam5_pane_t9

0x1f32,	// (0x0003398f) main_cam5_pane_t10_ParamLimits

0x1f32,	// (0x0003398f) main_cam5_pane_t10

0x1f44,	// (0x000339a1) main_cam5_pane_t11_ParamLimits

0x1f44,	// (0x000339a1) main_cam5_pane_t11

0x1f56,	// (0x000339b3) main_cam5_pane_t12_ParamLimits

0x1f56,	// (0x000339b3) main_cam5_pane_t12

0x1f6b,	// (0x000339c8) main_cam5_pane_t13_ParamLimits

0x1f6b,	// (0x000339c8) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x000414a6) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x000414a6) main_cam5_pane_t

0x5cdb,	// (0x00037738) popup_scut_keymap_window_ParamLimits

0x5cdb,	// (0x00037738) popup_scut_keymap_window

0xb2d0,	// (0x0003cd2d) aid_size_cell_brow_shortcut

0xd900,	// (0x0003f35d) bg_popup_window_pane_cp010

0xb2dc,	// (0x0003cd39) grid_scut_pane

0xb2e6,	// (0x0003cd43) cell_scut_pane_ParamLimits

0xb2e6,	// (0x0003cd43) cell_scut_pane

0xb2fb,	// (0x0003cd58) cell_scut_pane_g1

0x1f88,	// (0x000339e5) cell_scut_pane_t1

0x1f97,	// (0x000339f4) cell_scut_pane_t2

0xb304,	// (0x0003cd61) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x000414c1) cell_scut_pane_t

0x94d6,	// (0x0003af33) main_mup3_pane_g8_ParamLimits

0x94d6,	// (0x0003af33) main_mup3_pane_g8

0xa7de,	// (0x0003c23b) area_vitu2_query_pane_ParamLimits

0xa7de,	// (0x0003c23b) area_vitu2_query_pane

0x4d05,	// (0x00036762) input_focus_pane_cp08

0x1fa6,	// (0x00033a03) area_vitu2_query_pane_g1

0x4e02,	// (0x0003685f) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x000414c8) area_vitu2_query_pane_g

0xb312,	// (0x0003cd6f) area_vitu2_query_pane_t1_ParamLimits

0xb312,	// (0x0003cd6f) area_vitu2_query_pane_t1

0xb324,	// (0x0003cd81) area_vitu2_query_pane_t2_ParamLimits

0xb324,	// (0x0003cd81) area_vitu2_query_pane_t2

0x4e11,	// (0x0003686e) area_vitu2_query_pane_t3_ParamLimits

0x4e11,	// (0x0003686e) area_vitu2_query_pane_t3

0x4e39,	// (0x00036896) area_vitu2_query_pane_t4_ParamLimits

0x4e39,	// (0x00036896) area_vitu2_query_pane_t4

0x4e61,	// (0x000368be) area_vitu2_query_pane_t5_ParamLimits

0x4e61,	// (0x000368be) area_vitu2_query_pane_t5

0x4e89,	// (0x000368e6) area_vitu2_query_pane_t6_ParamLimits

0x4e89,	// (0x000368e6) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x000414cd) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x000414cd) area_vitu2_query_pane_t

0xb336,	// (0x0003cd93) bg_button_pane_cp018

0xb343,	// (0x0003cda0) bg_button_pane_cp021

0x4ed5,	// (0x00036932) bg_button_pane_cp022

0x4ee4,	// (0x00036941) input_focus_pane_cp09

0x7d3a,	// (0x00039797) aid_size_touch_mv_arrow_left

0xe1dd,	// (0x0003fc3a) aid_size_touch_mv_arrow_right

0xacf4,	// (0x0003c751) main_cset_slider_pane_g16_ParamLimits

0xacf4,	// (0x0003c751) main_cset_slider_pane_g16

0xad00,	// (0x0003c75d) main_cset_slider_pane_g17_ParamLimits

0xad00,	// (0x0003c75d) main_cset_slider_pane_g17

0xb2bd,	// (0x0003cd1a) cell_cam4_burst_pane_g1_ParamLimits

0x5ace,	// (0x0003752b) compa_mode_pane

0xaeed,	// (0x0003c94a) popup_vtel_slider_window_g3_ParamLimits

0xaeed,	// (0x0003c94a) popup_vtel_slider_window_g3

0xaf01,	// (0x0003c95e) popup_vtel_slider_window_g4_ParamLimits

0xaf01,	// (0x0003c95e) popup_vtel_slider_window_g4

0xaf15,	// (0x0003c972) popup_vtel_slider_window_t1_ParamLimits

0xaf15,	// (0x0003c972) popup_vtel_slider_window_t1

0x5ace,	// (0x0003752b) main_cl_pane

0x88f5,	// (0x0003a352) popup_imed_adjust2_window_ParamLimits

0x079a,	// (0x000321f7) bg_tb_trans_pane_cp05_ParamLimits

0x11fe,	// (0x00032c5b) popup_imed_adjust2_window_g1_ParamLimits

0x120d,	// (0x00032c6a) popup_imed_adjust2_window_g2_ParamLimits

0x120d,	// (0x00032c6a) popup_imed_adjust2_window_g2

0x1219,	// (0x00032c76) popup_imed_adjust2_window_g3_ParamLimits

0x1219,	// (0x00032c76) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x00041234) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x00041234) popup_imed_adjust2_window_g

0x1225,	// (0x00032c82) popup_imed_adjust2_window_t1_ParamLimits

0x123d,	// (0x00032c9a) slider_imed_adjust_pane_ParamLimits

0x1251,	// (0x00032cae) slider_imed_adjust_pane_g1_ParamLimits

0x1261,	// (0x00032cbe) slider_imed_adjust_pane_g2_ParamLimits

0x1271,	// (0x00032cce) slider_imed_adjust_pane_g3_ParamLimits

0x1282,	// (0x00032cdf) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x0004123b) slider_imed_adjust_pane_g_ParamLimits

0xa586,	// (0x0003bfe3) aid_touch_area_cam4_ParamLimits

0xa586,	// (0x0003bfe3) aid_touch_area_cam4

0xa594,	// (0x0003bff1) battery_pane_cp01

0xa613,	// (0x0003c070) main_camera4_pane_g6_ParamLimits

0xa613,	// (0x0003c070) main_camera4_pane_g6

0xa631,	// (0x0003c08e) main_camera4_pane_t2_ParamLimits

0xa631,	// (0x0003c08e) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x00041342) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x00041342) main_camera4_pane_t

0xa6b9,	// (0x0003c116) aid_touch_area_vid4_ParamLimits

0xa6b9,	// (0x0003c116) aid_touch_area_vid4

0xa613,	// (0x0003c070) main_video4_pane_g5_ParamLimits

0xa613,	// (0x0003c070) main_video4_pane_g5

0xa6e9,	// (0x0003c146) vid4_progress_pane_ParamLimits

0xa6e9,	// (0x0003c146) vid4_progress_pane

0x1c0f,	// (0x0003366c) main_cset_slider_pane_g18_ParamLimits

0x1c0f,	// (0x0003366c) main_cset_slider_pane_g18

0x1e76,	// (0x000338d3) cell_cam4_burst_pane_g2_ParamLimits

0x1e76,	// (0x000338d3) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x000414a1) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x000414a1) cell_cam4_burst_pane_g

0xb34f,	// (0x0003cdac) bg_cl_pane_ParamLimits

0xb34f,	// (0x0003cdac) bg_cl_pane

0xb35b,	// (0x0003cdb8) cl_header_pane_ParamLimits

0xb35b,	// (0x0003cdb8) cl_header_pane

0xb367,	// (0x0003cdc4) cl_listscroll_pane_ParamLimits

0xb367,	// (0x0003cdc4) cl_listscroll_pane

0x204e,	// (0x00033aab) bg_cl_pane_g1

0x2056,	// (0x00033ab3) bg_cl_pane_g2

0x205e,	// (0x00033abb) bg_cl_pane_g3

0x2066,	// (0x00033ac3) bg_cl_pane_g4

0x206e,	// (0x00033acb) bg_cl_pane_g5

0x2076,	// (0x00033ad3) bg_cl_pane_g6

0x207e,	// (0x00033adb) bg_cl_pane_g7

0x2086,	// (0x00033ae3) bg_cl_pane_g8

0x208e,	// (0x00033aeb) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x000414dc) bg_cl_pane_g

0xb373,	// (0x0003cdd0) aid_height_cl_leading_ParamLimits

0xb373,	// (0x0003cdd0) aid_height_cl_leading

0xb37f,	// (0x0003cddc) aid_height_cl_text_ParamLimits

0xb37f,	// (0x0003cddc) aid_height_cl_text

0x388e,	// (0x000352eb) bg_cl_header_pane_ParamLimits

0x388e,	// (0x000352eb) bg_cl_header_pane

0xb397,	// (0x0003cdf4) cl_header_pane_g1_ParamLimits

0xb397,	// (0x0003cdf4) cl_header_pane_g1

0xb3a4,	// (0x0003ce01) cl_header_pane_t1_ParamLimits

0xb3a4,	// (0x0003ce01) cl_header_pane_t1

0x2096,	// (0x00033af3) cl_list_pane

0x209f,	// (0x00033afc) hc_scroll_pane_cp01

0xdb91,	// (0x0003f5ee) bg_cl_header_pane_g1

0x1ac8,	// (0x00033525) bg_cl_header_pane_g2

0xdbb1,	// (0x0003f60e) bg_cl_header_pane_g3

0x1ad8,	// (0x00033535) bg_cl_header_pane_g4

0x1ad0,	// (0x0003352d) bg_cl_header_pane_g5

0x1d51,	// (0x000337ae) bg_cl_header_pane_g6

0x1af0,	// (0x0003354d) bg_cl_header_pane_g7

0x1af8,	// (0x00033555) bg_cl_header_pane_g8

0x1ae8,	// (0x00033545) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x000414ef) bg_cl_header_pane_g

0xb3b6,	// (0x0003ce13) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb3b6,	// (0x0003ce13) hc_cl_list_double_graphic_heading_pane

0xb3c6,	// (0x0003ce23) hc_cl_list_single_graphic_pane_ParamLimits

0xb3c6,	// (0x0003ce23) hc_cl_list_single_graphic_pane

0xb3d8,	// (0x0003ce35) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb3d8,	// (0x0003ce35) hc_cl_list_single_graphic_pane_g1

0xb3e4,	// (0x0003ce41) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb3e4,	// (0x0003ce41) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x00041502) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x00041502) hc_cl_list_single_graphic_pane_g

0xb3f8,	// (0x0003ce55) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb3f8,	// (0x0003ce55) hc_cl_list_single_graphic_pane_t1

0xb3d8,	// (0x0003ce35) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb3d8,	// (0x0003ce35) hc_cl_list_double_graphic_heading_pane_g1

0xb40d,	// (0x0003ce6a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb40d,	// (0x0003ce6a) hc_cl_list_double_graphic_heading_pane_g2

0xb421,	// (0x0003ce7e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb421,	// (0x0003ce7e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x00041507) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x00041507) hc_cl_list_double_graphic_heading_pane_g

0xb435,	// (0x0003ce92) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb435,	// (0x0003ce92) hc_cl_list_double_graphic_heading_pane_t1

0xb44a,	// (0x0003cea7) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb44a,	// (0x0003cea7) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x0004150e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x0004150e) hc_cl_list_double_graphic_heading_pane_t

0xb45f,	// (0x0003cebc) vid4_progress_pane_g1

0xb46e,	// (0x0003cecb) vid4_progress_pane_g2

0xb47d,	// (0x0003ceda) vid4_progress_pane_g3

0xb48c,	// (0x0003cee9) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x00041513) vid4_progress_pane_g

0xb498,	// (0x0003cef5) vid4_progress_pane_t1

0xb4ae,	// (0x0003cf0b) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x0004151e) vid4_progress_pane_t

0xb4d8,	// (0x0003cf35) wait_bar_pane_cp07

0x0aa9,	// (0x00032506) blid_firmament_pane_ParamLimits

0x0aea,	// (0x00032547) popup_blid_sat_info2_window_g1

0x0b0e,	// (0x0003256b) popup_blid_sat_info2_window_t3

0x0b1c,	// (0x00032579) popup_blid_sat_info2_window_t4

0x0b2a,	// (0x00032587) popup_blid_sat_info2_window_t5

0x0b38,	// (0x00032595) popup_blid_sat_info2_window_t6

0x0b48,	// (0x000325a5) popup_blid_sat_info2_window_t7

0x0b56,	// (0x000325b3) popup_blid_sat_info2_window_t8

0x0b64,	// (0x000325c1) popup_blid_sat_info2_window_t9

0x0b72,	// (0x000325cf) popup_blid_sat_info2_window_t10

0x0c2e,	// (0x0003268b) aid_firma_cardinal_ParamLimits

0x0c42,	// (0x0003269f) blid_firmament_pane_t1_ParamLimits

0x0c59,	// (0x000326b6) blid_firmament_pane_t2_ParamLimits

0x0c70,	// (0x000326cd) blid_firmament_pane_t3_ParamLimits

0x0c87,	// (0x000326e4) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x00041128) blid_firmament_pane_t_ParamLimits

0x0c9e,	// (0x000326fb) blid_sat_info_pane_ParamLimits

0xf077,	// (0x00040ad4) main_cam_set_pane_ParamLimits

0x9c26,	// (0x0003b683) aid_size_cell_colour_35_ParamLimits

0x9c3d,	// (0x0003b69a) aid_size_cell_colour_112_ParamLimits

0x9c54,	// (0x0003b6b1) aid_size_cell_effect_ParamLimits

0xf077,	// (0x00040ad4) bg_tb_trans_pane_cp02_ParamLimits

0xf085,	// (0x00040ae2) heading_imed_pane_ParamLimits

0x9c6e,	// (0x0003b6cb) listscroll_imed_pane_ParamLimits

0xed28,	// (0x00040785) popup_call2_audio_first_window_g5_ParamLimits

0xed28,	// (0x00040785) popup_call2_audio_first_window_g5

0xa311,	// (0x0003bd6e) aid_size_touch_image3_arrow_left_ParamLimits

0xa311,	// (0x0003bd6e) aid_size_touch_image3_arrow_left

0xa325,	// (0x0003bd82) aid_size_touch_image3_arrow_right_ParamLimits

0xa325,	// (0x0003bd82) aid_size_touch_image3_arrow_right

0xb4c3,	// (0x0003cf20) vid4_progress_pane_t3

0x9ed2,	// (0x0003b92f) main_hwr_training_symbol_option_pane_ParamLimits

0x9ed2,	// (0x0003b92f) main_hwr_training_symbol_option_pane

0x14dd,	// (0x00032f3a) popup_hwr_training_preview_window_ParamLimits

0x14dd,	// (0x00032f3a) popup_hwr_training_preview_window

0x9f2d,	// (0x0003b98a) hwr_training_navi_pane_g5_ParamLimits

0x9f2d,	// (0x0003b98a) hwr_training_navi_pane_g5

0x1aa4,	// (0x00033501) popup_char_count_window

0x388e,	// (0x000352eb) bg_popup_sub_pane_cp20_ParamLimits

0xb002,	// (0x0003ca5f) list_vitu2_match_list_pane_ParamLimits

0xb00e,	// (0x0003ca6b) vitu2_page_scroll_pane_ParamLimits

0xb00e,	// (0x0003ca6b) vitu2_page_scroll_pane

0x2171,	// (0x00033bce) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2171,	// (0x00033bce) list_single_hwr_training_symbol_option_pane

0x2184,	// (0x00033be1) list_single_hwr_training_symbol_option_pane_g1

0x218c,	// (0x00033be9) list_single_hwr_training_symbol_option_pane_t1

0x219a,	// (0x00033bf7) bg_button_pane_cp023

0x21a3,	// (0x00033c00) bg_button_pane_cp024

0xb4e8,	// (0x0003cf45) vitu2_page_scroll_pane_g1

0xb4f0,	// (0x0003cf4d) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x00041525) vitu2_page_scroll_pane_g

0xb4f8,	// (0x0003cf55) vitu2_page_scroll_pane_t1

0x0cd7,	// (0x00032734) popup_char_count_window_g1

0x21d6,	// (0x00033c33) popup_char_count_window_g2

0x21df,	// (0x00033c3c) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x0004152a) popup_char_count_window_g

0x21e8,	// (0x00033c45) popup_char_count_window_t1

0x5ace,	// (0x0003752b) main_vded2_pane

0x11ec,	// (0x00032c49) aid_size_cell_imed_line

0x11f6,	// (0x00032c53) grid_imed_line_width_pane

0xa734,	// (0x0003c191) vid4_indicators_pane_g4

0x21f6,	// (0x00033c53) cell_imed_line_width_pane_ParamLimits

0x21f6,	// (0x00033c53) cell_imed_line_width_pane

0x2208,	// (0x00033c65) cell_imed_line_width_pane_g1

0x0a57,	// (0x000324b4) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x00041531) cell_imed_line_width_pane_g

0xb507,	// (0x0003cf64) main_vded2_pane_g1_ParamLimits

0xb507,	// (0x0003cf64) main_vded2_pane_g1

0xb514,	// (0x0003cf71) main_vded2_pane_g2_ParamLimits

0xb514,	// (0x0003cf71) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x00041536) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x00041536) main_vded2_pane_g

0xb520,	// (0x0003cf7d) vded2_slider_pane_ParamLimits

0xb520,	// (0x0003cf7d) vded2_slider_pane

0xb52d,	// (0x0003cf8a) aid_size_touch_vded2_end

0xb535,	// (0x0003cf92) aid_size_touch_vded2_playhead

0xb53d,	// (0x0003cf9a) aid_size_touch_vded2_start

0xb545,	// (0x0003cfa2) vded2_slider_bg_pane

0xb54e,	// (0x0003cfab) vded2_slider_pane_g1

0xb557,	// (0x0003cfb4) vded2_slider_pane_g2

0xb55f,	// (0x0003cfbc) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x0004153b) vded2_slider_pane_g

0xb568,	// (0x0003cfc5) vded2_slider_bg_pane_g1

0xb571,	// (0x0003cfce) vded2_slider_bg_pane_g2

0xb57a,	// (0x0003cfd7) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x00041542) vded2_slider_bg_pane_g

0x825f,	// (0x00039cbc) aid_postcard_touch_down_pane_ParamLimits

0x825f,	// (0x00039cbc) aid_postcard_touch_down_pane

0x826b,	// (0x00039cc8) aid_postcard_touch_up_pane_ParamLimits

0x826b,	// (0x00039cc8) aid_postcard_touch_up_pane

0x5ace,	// (0x0003752b) main_blid2_pane

0x8892,	// (0x0003a2ef) popup_blid2_search_window

0x5ace,	// (0x0003752b) blid2_gps_pane

0x5ace,	// (0x0003752b) blid2_navig_pane

0x5ace,	// (0x0003752b) blid2_search_pane

0x5ace,	// (0x0003752b) blid2_tripm_pane

0xb583,	// (0x0003cfe0) blid2_search_pane_g1_ParamLimits

0xb583,	// (0x0003cfe0) blid2_search_pane_g1

0xb58f,	// (0x0003cfec) blid2_search_pane_t1_ParamLimits

0xb58f,	// (0x0003cfec) blid2_search_pane_t1

0xb5a1,	// (0x0003cffe) aid_size_cell_blid2_gps_ParamLimits

0xb5a1,	// (0x0003cffe) aid_size_cell_blid2_gps

0xb5b1,	// (0x0003d00e) blid2_gps_pane_g1_ParamLimits

0xb5b1,	// (0x0003d00e) blid2_gps_pane_g1

0xb5bd,	// (0x0003d01a) grid_blid2_satellite_pane_ParamLimits

0xb5bd,	// (0x0003d01a) grid_blid2_satellite_pane

0xb5c9,	// (0x0003d026) blid2_navig_pane_g1_ParamLimits

0xb5c9,	// (0x0003d026) blid2_navig_pane_g1

0xb5d5,	// (0x0003d032) blid2_navig_pane_t1_ParamLimits

0xb5d5,	// (0x0003d032) blid2_navig_pane_t1

0xb5e7,	// (0x0003d044) blid2_navig_pane_t2_ParamLimits

0xb5e7,	// (0x0003d044) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x00041549) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x00041549) blid2_navig_pane_t

0xb5f9,	// (0x0003d056) blid2_navig_ring_pane_ParamLimits

0xb5f9,	// (0x0003d056) blid2_navig_ring_pane

0xb605,	// (0x0003d062) blid2_speed_pane_ParamLimits

0xb605,	// (0x0003d062) blid2_speed_pane

0xb611,	// (0x0003d06e) blid2_tripm_pane_g1_ParamLimits

0xb611,	// (0x0003d06e) blid2_tripm_pane_g1

0xb61d,	// (0x0003d07a) blid2_tripm_pane_g2_ParamLimits

0xb61d,	// (0x0003d07a) blid2_tripm_pane_g2

0xb629,	// (0x0003d086) blid2_tripm_pane_g3_ParamLimits

0xb629,	// (0x0003d086) blid2_tripm_pane_g3

0xb635,	// (0x0003d092) blid2_tripm_pane_g4_ParamLimits

0xb635,	// (0x0003d092) blid2_tripm_pane_g4

0xb641,	// (0x0003d09e) blid2_tripm_pane_g5_ParamLimits

0xb641,	// (0x0003d09e) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x0004154e) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x0004154e) blid2_tripm_pane_g

0xb659,	// (0x0003d0b6) blid2_tripm_pane_t1_ParamLimits

0xb659,	// (0x0003d0b6) blid2_tripm_pane_t1

0xb66b,	// (0x0003d0c8) blid2_tripm_pane_t2_ParamLimits

0xb66b,	// (0x0003d0c8) blid2_tripm_pane_t2

0xb67d,	// (0x0003d0da) blid2_tripm_pane_t3_ParamLimits

0xb67d,	// (0x0003d0da) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x0004155b) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x0004155b) blid2_tripm_pane_t

0xb6ad,	// (0x0003d10a) cell_blid2_satellite_pane_ParamLimits

0xb6ad,	// (0x0003d10a) cell_blid2_satellite_pane

0xb6c5,	// (0x0003d122) cell_blid2_satellite_pane_g1

0x2211,	// (0x00033c6e) cell_blid2_satellite_pane_t1

0x0cae,	// (0x0003270b) blid2_speed_pane_g1

0x221f,	// (0x00033c7c) blid2_speed_pane_t1

0x222d,	// (0x00033c8a) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x00041564) blid2_speed_pane_t

0x0cae,	// (0x0003270b) blid2_navig_ring_pane_g1

0xb6ce,	// (0x0003d12b) blid2_navig_ring_pane_g2

0xb6d6,	// (0x0003d133) blid2_navig_ring_pane_g3

0xb6de,	// (0x0003d13b) blid2_navig_ring_pane_g4

0xb6e6,	// (0x0003d143) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x00041569) blid2_navig_ring_pane_g

0x5ace,	// (0x0003752b) bg_popup_window_pane_cp011

0x223b,	// (0x00033c98) popup_blid2_search_window_g1

0x2243,	// (0x00033ca0) popup_blid2_search_window_t1

0x2251,	// (0x00033cae) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x00041574) popup_blid2_search_window_t

0xdaa0,	// (0x0003f4fd) main_browser_pane_g1

0xd729,	// (0x0003f186) main_browser_pane_ParamLimits

0xf077,	// (0x00040ad4) bg_button_pane_cp011_ParamLimits

0xa955,	// (0x0003c3b2) cell_vitu2_function_pane_g1_ParamLimits

0x079a,	// (0x000321f7) bg_popup_sub_pane_cp22_ParamLimits

0x4d05,	// (0x00036762) input_focus_pane_cp08_ParamLimits

0xb185,	// (0x0003cbe2) popup_vitu2_query_button_pane_ParamLimits

0xb185,	// (0x0003cbe2) popup_vitu2_query_button_pane

0x4d1c,	// (0x00036779) popup_vitu2_query_input_button_pane

0x1dcc,	// (0x00033829) popup_vitu2_query_window_g1_ParamLimits

0x4d24,	// (0x00036781) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x00041475) popup_vitu2_query_window_g_ParamLimits

0x5ace,	// (0x0003752b) bg_button_pane_cp026

0xb6ee,	// (0x0003d14b) popup_vitu2_query_input_button_pane_g1

0x5ace,	// (0x0003752b) bg_button_pane_cp025

0x225f,	// (0x00033cbc) popup_vitu2_query_button_pane_t1

0x9254,	// (0x0003acb1) main_mp3_pane_t6

0x9262,	// (0x0003acbf) popup_slider_window_cp01

0xa667,	// (0x0003c0c4) cam4_battery_pane

0xa667,	// (0x0003c0c4) cam4_battery_pane_cp02

0xa667,	// (0x0003c0c4) cam4_battery_pane_cp01

0xa667,	// (0x0003c0c4) cam4_battery_pane_cp03

0x0cae,	// (0x0003270b) cam4_battery_pane_g1

0x1838,	// (0x00033295) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x00041579) cam4_battery_pane_g

0x0b80,	// (0x000325dd) popup_blid_sat_info2_window_t11

0x7d3a,	// (0x00039797) aid_size_touch_mv_arrow_left_ParamLimits

0xe1dd,	// (0x0003fc3a) aid_size_touch_mv_arrow_right_ParamLimits

0xe236,	// (0x0003fc93) navi_pane_g1_ParamLimits

0xe242,	// (0x0003fc9f) navi_pane_g2_ParamLimits

0x7d5e,	// (0x000397bb) navi_pane_g3_ParamLimits

0xf3ca,	// (0x00040e27) navi_pane_g_ParamLimits

0x7d7b,	// (0x000397d8) navi_pane_mv_t1_ParamLimits

0x9c7a,	// (0x0003b6d7) grid_imed_effect_pane_ParamLimits

0x6af9,	// (0x00038556) aid_placing_vt_slider_lsc

0xd9e2,	// (0x0003f43f) aid_placing_vt_slider_prt

0xf077,	// (0x00040ad4) bg_tb_trans_pane_cp01_ParamLimits

0x0dfd,	// (0x0003285a) popup_image_details_window_g1_ParamLimits

0x0e10,	// (0x0003286d) popup_image_details_window_g2_ParamLimits

0x0e25,	// (0x00032882) popup_image_details_window_g3_ParamLimits

0x0e25,	// (0x00032882) popup_image_details_window_g3

0xf710,	// (0x0004116d) popup_image_details_window_g_ParamLimits

0x0e39,	// (0x00032896) popup_image_details_window_t1_ParamLimits

0x0e4b,	// (0x000328a8) popup_image_details_window_t2_ParamLimits

0x0e64,	// (0x000328c1) popup_image_details_window_t3_ParamLimits

0x0e78,	// (0x000328d5) popup_image_details_window_t4_ParamLimits

0x0e93,	// (0x000328f0) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x00041174) popup_image_details_window_t_ParamLimits

0xb38b,	// (0x0003cde8) cl_header_name_pane_ParamLimits

0xb38b,	// (0x0003cde8) cl_header_name_pane

0xb6f6,	// (0x0003d153) cl_header_name_pane_t1_ParamLimits

0xb6f6,	// (0x0003d153) cl_header_name_pane_t1

0xb70d,	// (0x0003d16a) cl_header_name_pane_t2_ParamLimits

0xb70d,	// (0x0003d16a) cl_header_name_pane_t2

0xb737,	// (0x0003d194) cl_header_name_pane_t3_ParamLimits

0xb737,	// (0x0003d194) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x0004157e) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x0004157e) cl_header_name_pane_t

0xe2cf,	// (0x0003fd2c) navi_pane_mv_g2_ParamLimits

0x1a61,	// (0x000334be) field_vitu2_entry_pane_g1_ParamLimits

0x1a6d,	// (0x000334ca) field_vitu2_entry_pane_g2_ParamLimits

0x1a79,	// (0x000334d6) field_vitu2_entry_pane_g3_ParamLimits

0x1a79,	// (0x000334d6) field_vitu2_entry_pane_g3

0xf917,	// (0x00041374) field_vitu2_entry_pane_g_ParamLimits

0xa8e9,	// (0x0003c346) cell_vitu2_itu_pane_g1_ParamLimits

0xa8fb,	// (0x0003c358) cell_vitu2_itu_pane_g2_ParamLimits

0xa8fb,	// (0x0003c358) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x00041380) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x00041380) cell_vitu2_itu_pane_g

0xf077,	// (0x00040ad4) bg_vkb2_func_pane_cp05_ParamLimits

0xf077,	// (0x00040ad4) bg_vkb2_func_pane_cp05

0xf077,	// (0x00040ad4) bg_vkb2_func_pane_cp03

0xf077,	// (0x00040ad4) bg_vkb2_func_pane_cp04

0xf077,	// (0x00040ad4) bg_vkb2_func_pane_cp10_ParamLimits

0xf077,	// (0x00040ad4) bg_vkb2_func_pane_cp10

0x4ed5,	// (0x00036932) bg_vkb2_func_pane_cp08

0xb336,	// (0x0003cd93) bg_vkb2_func_pane_cp06

0xb343,	// (0x0003cda0) bg_vkb2_func_pane_cp07

0x21ac,	// (0x00033c09) bg_vkb2_func_pane_cp11_ParamLimits

0x21ac,	// (0x00033c09) bg_vkb2_func_pane_cp11

0x21c1,	// (0x00033c1e) bg_vkb2_func_pane_cp12_ParamLimits

0x21c1,	// (0x00033c1e) bg_vkb2_func_pane_cp12

0x5ace,	// (0x0003752b) bg_vkb2_func_pane_cp09

0x1ac8,	// (0x00033525) bg_vkb2_func_pane_g1

0xdbb1,	// (0x0003f60e) bg_vkb2_func_pane_g2

0x1ad0,	// (0x0003352d) bg_vkb2_func_pane_g3

0x1ad8,	// (0x00033535) bg_vkb2_func_pane_g4

0x1d51,	// (0x000337ae) bg_vkb2_func_pane_g5

0x1af0,	// (0x0003354d) bg_vkb2_func_pane_g6

0x1af8,	// (0x00033555) bg_vkb2_func_pane_g7

0x1ae8,	// (0x00033545) bg_vkb2_func_pane_g8

0xdb91,	// (0x0003f5ee) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x00041585) bg_vkb2_func_pane_g

0xb64d,	// (0x0003d0aa) blid2_tripm_pane_g6_ParamLimits

0xb64d,	// (0x0003d0aa) blid2_tripm_pane_g6

0x17f6,	// (0x00033253) mp4_progress_pane_g1

0xb6a1,	// (0x0003d0fe) blid2_tripm_values_pane_ParamLimits

0xb6a1,	// (0x0003d0fe) blid2_tripm_values_pane

0xb75c,	// (0x0003d1b9) blid2_tripm_values_pane_t1

0xb76a,	// (0x0003d1c7) blid2_tripm_values_pane_t2

0xb778,	// (0x0003d1d5) blid2_tripm_values_pane_t3

0xb786,	// (0x0003d1e3) blid2_tripm_values_pane_t4

0xb794,	// (0x0003d1f1) blid2_tripm_values_pane_t5

0xb7a2,	// (0x0003d1ff) blid2_tripm_values_pane_t6

0xb7b0,	// (0x0003d20d) blid2_tripm_values_pane_t7

0xb7be,	// (0x0003d21b) blid2_tripm_values_pane_t8

0xb7cc,	// (0x0003d229) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x00041598) blid2_tripm_values_pane_t

0x6b33,	// (0x00038590) call_video_pane_t1_ParamLimits

0x6b50,	// (0x000385ad) call_video_pane_t2_ParamLimits

0xf253,	// (0x00040cb0) call_video_pane_t_ParamLimits

0x4a6a,	// (0x000364c7) msg_header_pane_g1_ParamLimits

0xe4a1,	// (0x0003fefe) msg_header_pane_g2_ParamLimits

0xe4a1,	// (0x0003fefe) msg_header_pane_g2

0x0001,

0xf46d,	// (0x00040eca) msg_header_pane_g_ParamLimits

0xf46d,	// (0x00040eca) msg_header_pane_g

0xd729,	// (0x0003f186) main_clock2_pane_ParamLimits

0x9a1e,	// (0x0003b47b) grid_clock2_toolbar_pane_ParamLimits

0x9a1e,	// (0x0003b47b) grid_clock2_toolbar_pane

0x9a1e,	// (0x0003b47b) listscroll_clock2_pane_ParamLimits

0x9a1e,	// (0x0003b47b) listscroll_clock2_pane

0x9aba,	// (0x0003b517) main_clock2_pane_t3_ParamLimits

0x9aba,	// (0x0003b517) main_clock2_pane_t3

0x9acc,	// (0x0003b529) main_clock2_pane_t4_ParamLimits

0x9acc,	// (0x0003b529) main_clock2_pane_t4

0x226d,	// (0x00033cca) cell_clock2_toolbar_pane

0x2275,	// (0x00033cd2) cell_clock2_toolbar_pane_cp01

0x2275,	// (0x00033cd2) cell_clock2_toolbar_pane_cp02

0x227d,	// (0x00033cda) cell_clock2_toolbar_pane_cp03

0x2285,	// (0x00033ce2) list_clock2_pane

0x228d,	// (0x00033cea) scroll_pane_cp10

0x2295,	// (0x00033cf2) list_single_clock2_pane_ParamLimits

0x2295,	// (0x00033cf2) list_single_clock2_pane

0xd900,	// (0x0003f35d) list_highlight_pane_cp08

0x22a2,	// (0x00033cff) list_single_clock2_pane_t1

0x22b0,	// (0x00033d0d) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x000415ab) list_single_clock2_pane_t

0x5ace,	// (0x0003752b) bg_button_pane_cp10

0x22be,	// (0x00033d1b) cell_clock2_toolbar_pane_g1

0x81c9,	// (0x00039c26) aid_main_viewer_pane_g1_ParamLimits

0x81c9,	// (0x00039c26) aid_main_viewer_pane_g1

0x81d5,	// (0x00039c32) aid_main_viewer_pane_g2_ParamLimits

0x81d5,	// (0x00039c32) aid_main_viewer_pane_g2

0x81e1,	// (0x00039c3e) aid_main_viewer_pane_g3_ParamLimits

0x81e1,	// (0x00039c3e) aid_main_viewer_pane_g3

0x81f0,	// (0x00039c4d) aid_main_viewer_pane_g4_ParamLimits

0x81f0,	// (0x00039c4d) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x00040edb) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x00040edb) aid_main_viewer_pane_g

0x388e,	// (0x000352eb) main_calc_pane_ParamLimits

0x8877,	// (0x0003a2d4) main_dialer2_pane_ParamLimits

0x5ace,	// (0x0003752b) main_cam6_pane

0x5ace,	// (0x0003752b) main_vid6_pane

0x9a2a,	// (0x0003b487) listscroll_gen_pane_cp06_ParamLimits

0x9a2a,	// (0x0003b487) listscroll_gen_pane_cp06

0x9ade,	// (0x0003b53b) main_clock2_pane_t5_ParamLimits

0x9ade,	// (0x0003b53b) main_clock2_pane_t5

0x9b27,	// (0x0003b584) aid_call2_pane_cp10_ParamLimits

0x9b39,	// (0x0003b596) aid_call_pane_cp10_ParamLimits

0xe1d1,	// (0x0003fc2e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe1d1,	// (0x0003fc2e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9b4b,	// (0x0003b5a8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9b4b,	// (0x0003b5a8) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe1d1,	// (0x0003fc2e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x00041229) popup_clock_analogue_window_cp10_g_ParamLimits

0x9b5d,	// (0x0003b5ba) popup_clock_analogue_window_cp10_t1_ParamLimits

0x1860,	// (0x000332bd) cell_dialer2_keypad_pane_g2_ParamLimits

0x1860,	// (0x000332bd) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x00041313) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x00041313) cell_dialer2_keypad_pane_g

0xa2da,	// (0x0003bd37) cell_dialer2_keypad_pane_t1

0xabe2,	// (0x0003c63f) main_cset_text2_pane_ParamLimits

0xabe2,	// (0x0003c63f) main_cset_text2_pane

0x1fa6,	// (0x00033a03) area_vitu2_query_pane_g1_ParamLimits

0x4e02,	// (0x0003685f) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x000414c8) area_vitu2_query_pane_g_ParamLimits

0x4eb1,	// (0x0003690e) area_vitu2_query_pane_t7_ParamLimits

0x4eb1,	// (0x0003690e) area_vitu2_query_pane_t7

0xb336,	// (0x0003cd93) bg_button_pane_cp018_ParamLimits

0xb343,	// (0x0003cda0) bg_button_pane_cp021_ParamLimits

0x4ed5,	// (0x00036932) bg_button_pane_cp022_ParamLimits

0x4ed5,	// (0x00036932) bg_vkb2_func_pane_cp08_ParamLimits

0xb336,	// (0x0003cd93) bg_vkb2_func_pane_cp06_ParamLimits

0xb343,	// (0x0003cda0) bg_vkb2_func_pane_cp07_ParamLimits

0x4ee4,	// (0x00036941) input_focus_pane_cp09_ParamLimits

0xb7da,	// (0x0003d237) cam6_autofocus_pane_ParamLimits

0xb7da,	// (0x0003d237) cam6_autofocus_pane

0xb7f6,	// (0x0003d253) cam6_image_uncrop_pane_ParamLimits

0xb7f6,	// (0x0003d253) cam6_image_uncrop_pane

0xb819,	// (0x0003d276) cam6_indi_pane_ParamLimits

0xb819,	// (0x0003d276) cam6_indi_pane

0xb833,	// (0x0003d290) cam6_mode_pane_ParamLimits

0xb833,	// (0x0003d290) cam6_mode_pane

0xb847,	// (0x0003d2a4) cam6_timer_pane_ParamLimits

0xb847,	// (0x0003d2a4) cam6_timer_pane

0xb853,	// (0x0003d2b0) cam6_zoom_pane_ParamLimits

0xb853,	// (0x0003d2b0) cam6_zoom_pane

0xa6c7,	// (0x0003c124) cam6_mode_pane_g1_ParamLimits

0xa6c7,	// (0x0003c124) cam6_mode_pane_g1

0xb869,	// (0x0003d2c6) cam6_mode_pane_g2_ParamLimits

0xb869,	// (0x0003d2c6) cam6_mode_pane_g2

0xb875,	// (0x0003d2d2) cam6_mode_pane_g3_ParamLimits

0xb875,	// (0x0003d2d2) cam6_mode_pane_g3

0xb881,	// (0x0003d2de) cam6_mode_pane_g4_ParamLimits

0xb881,	// (0x0003d2de) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x000415b0) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x000415b0) cam6_mode_pane_g

0x22d2,	// (0x00033d2f) bg_tb_trans_pane_cp08_ParamLimits

0x22d2,	// (0x00033d2f) bg_tb_trans_pane_cp08

0x22e0,	// (0x00033d3d) cam6_battery_pane_ParamLimits

0x22e0,	// (0x00033d3d) cam6_battery_pane

0x22f6,	// (0x00033d53) cam6_indi_pane_g1_ParamLimits

0x22f6,	// (0x00033d53) cam6_indi_pane_g1

0x2308,	// (0x00033d65) cam6_indi_pane_g2_ParamLimits

0x2308,	// (0x00033d65) cam6_indi_pane_g2

0x231a,	// (0x00033d77) cam6_indi_pane_g3_ParamLimits

0x231a,	// (0x00033d77) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x000415b9) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x000415b9) cam6_indi_pane_g

0x232c,	// (0x00033d89) cam6_indi_pane_t1_ParamLimits

0x232c,	// (0x00033d89) cam6_indi_pane_t1

0xa76a,	// (0x0003c1c7) cam6_autofocus_pane_g1

0xa772,	// (0x0003c1cf) cam6_autofocus_pane_g2

0xa77a,	// (0x0003c1d7) cam6_autofocus_pane_g3

0xa782,	// (0x0003c1df) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x000415c0) cam6_autofocus_pane_g

0x2352,	// (0x00033daf) cam6_timer_pane_g1

0x235a,	// (0x00033db7) cam6_timer_pane_t1

0x2368,	// (0x00033dc5) cam6_zoom_cont_pane

0x2370,	// (0x00033dcd) cam6_zoom_pane_g1

0x2378,	// (0x00033dd5) cam6_zoom_pane_g2

0xb88d,	// (0x0003d2ea) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x000415c9) cam6_zoom_pane_g

0x0cae,	// (0x0003270b) cam6_battery_pane_g1

0x0cae,	// (0x0003270b) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x00041131) cam6_battery_pane_g

0x2380,	// (0x00033ddd) cam6_zoom_cont_pane_g1

0x2389,	// (0x00033de6) cam6_zoom_cont_pane_g2

0x2392,	// (0x00033def) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x000415d0) cam6_zoom_cont_pane_g

0xb8aa,	// (0x0003d307) cam6_mode_pane_cp_ParamLimits

0xb8aa,	// (0x0003d307) cam6_mode_pane_cp

0xb853,	// (0x0003d2b0) cam6_zoom_pane_cp_ParamLimits

0xb853,	// (0x0003d2b0) cam6_zoom_pane_cp

0xb8be,	// (0x0003d31b) vid6_image_uncrop_cif_pane_ParamLimits

0xb8be,	// (0x0003d31b) vid6_image_uncrop_cif_pane

0xb8e0,	// (0x0003d33d) vid6_image_uncrop_nhd_pane_ParamLimits

0xb8e0,	// (0x0003d33d) vid6_image_uncrop_nhd_pane

0xb7f6,	// (0x0003d253) vid6_image_uncrop_vga_pane_ParamLimits

0xb7f6,	// (0x0003d253) vid6_image_uncrop_vga_pane

0xb8f7,	// (0x0003d354) vid6_image_uncrop_wvga_pane_ParamLimits

0xb8f7,	// (0x0003d354) vid6_image_uncrop_wvga_pane

0xb90e,	// (0x0003d36b) vid6_indi_pane_ParamLimits

0xb90e,	// (0x0003d36b) vid6_indi_pane

0x22d2,	// (0x00033d2f) bg_tb_trans_pane_cp09_ParamLimits

0x22d2,	// (0x00033d2f) bg_tb_trans_pane_cp09

0x23a6,	// (0x00033e03) cam6_battery_pane_cp_ParamLimits

0x23a6,	// (0x00033e03) cam6_battery_pane_cp

0x23b2,	// (0x00033e0f) vid6_indi_pane_g1_ParamLimits

0x23b2,	// (0x00033e0f) vid6_indi_pane_g1

0x23c4,	// (0x00033e21) vid6_indi_pane_g2_ParamLimits

0x23c4,	// (0x00033e21) vid6_indi_pane_g2

0x23d6,	// (0x00033e33) vid6_indi_pane_g3_ParamLimits

0x23d6,	// (0x00033e33) vid6_indi_pane_g3

0x23eb,	// (0x00033e48) vid6_indi_pane_g4_ParamLimits

0x23eb,	// (0x00033e48) vid6_indi_pane_g4

0x2400,	// (0x00033e5d) vid6_indi_pane_g5_ParamLimits

0x2400,	// (0x00033e5d) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x000415d7) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x000415d7) vid6_indi_pane_g

0x241a,	// (0x00033e77) vid6_indi_pane_t1_ParamLimits

0x241a,	// (0x00033e77) vid6_indi_pane_t1

0x2430,	// (0x00033e8d) vid6_indi_pane_t2_ParamLimits

0x2430,	// (0x00033e8d) vid6_indi_pane_t2

0x2458,	// (0x00033eb5) vid6_indi_pane_t3_ParamLimits

0x2458,	// (0x00033eb5) vid6_indi_pane_t3

0x2480,	// (0x00033edd) vid6_indi_pane_t4_ParamLimits

0x2480,	// (0x00033edd) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x000415e2) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x000415e2) vid6_indi_pane_t

0x24a4,	// (0x00033f01) wait_bar_pane_cp08

0xb92e,	// (0x0003d38b) main_cset_text2_pane_t1_ParamLimits

0xb92e,	// (0x0003d38b) main_cset_text2_pane_t1

0xb895,	// (0x0003d2f2) listscroll_gen_pane_cp06_t1_ParamLimits

0xb895,	// (0x0003d2f2) listscroll_gen_pane_cp06_t1

0x5ace,	// (0x0003752b) main_cam6_set_pane

0x0edd,	// (0x0003293a) bg_tb_trans_pane_cp06_ParamLimits

0xa66f,	// (0x0003c0cc) cam4_indicators_pane_g1_ParamLimits

0xa67f,	// (0x0003c0dc) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x00041350) cam4_indicators_pane_g_ParamLimits

0xa69f,	// (0x0003c0fc) cam4_indicators_pane_t1_ParamLimits

0xf077,	// (0x00040ad4) bg_tb_trans_pane_cp07_ParamLimits

0xa66f,	// (0x0003c0cc) vid4_indicators_pane_g1_ParamLimits

0xa713,	// (0x0003c170) vid4_indicators_pane_g2_ParamLimits

0xa723,	// (0x0003c180) vid4_indicators_pane_g3_ParamLimits

0xa734,	// (0x0003c191) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x00041362) vid4_indicators_pane_g_ParamLimits

0xa750,	// (0x0003c1ad) vid4_indicators_pane_t1_ParamLimits

0xb45f,	// (0x0003cebc) vid4_progress_pane_g1_ParamLimits

0xb46e,	// (0x0003cecb) vid4_progress_pane_g2_ParamLimits

0xb47d,	// (0x0003ceda) vid4_progress_pane_g3_ParamLimits

0xb48c,	// (0x0003cee9) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x00041513) vid4_progress_pane_g_ParamLimits

0xb498,	// (0x0003cef5) vid4_progress_pane_t1_ParamLimits

0xb4ae,	// (0x0003cf0b) vid4_progress_pane_t2_ParamLimits

0xb4c3,	// (0x0003cf20) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x0004151e) vid4_progress_pane_t_ParamLimits

0xb4d8,	// (0x0003cf35) wait_bar_pane_cp07_ParamLimits

0xb94a,	// (0x0003d3a7) main_cam6_set_pane_g2_ParamLimits

0xb94a,	// (0x0003d3a7) main_cam6_set_pane_g2

0xb956,	// (0x0003d3b3) main_cset6_listscroll_pane_ParamLimits

0xb956,	// (0x0003d3b3) main_cset6_listscroll_pane

0xb97f,	// (0x0003d3dc) main_cset6_slider_pane_ParamLimits

0xb97f,	// (0x0003d3dc) main_cset6_slider_pane

0xb98b,	// (0x0003d3e8) main_cset6_text2_pane_ParamLimits

0xb98b,	// (0x0003d3e8) main_cset6_text2_pane

0x24b4,	// (0x00033f11) main_cset6_text_pane

0x1bd2,	// (0x0003362f) main_cset_list_pane_copy1_ParamLimits

0x1bd2,	// (0x0003362f) main_cset_list_pane_copy1

0x1be2,	// (0x0003363f) scroll_pane_cp028_copy1

0xb99e,	// (0x0003d3fb) cset_list_set_pane_copy1

0xae9d,	// (0x0003c8fa) aid_position_infowindow_above_copy1

0xaea5,	// (0x0003c902) aid_position_infowindow_below_copy1

0x4f32,	// (0x0003698f) cset_list_set_pane_g1_copy1

0x4f3a,	// (0x00036997) cset_list_set_pane_g3_copy1_ParamLimits

0x4f3a,	// (0x00036997) cset_list_set_pane_g3_copy1

0x4f49,	// (0x000369a6) cset_list_set_pane_t1_copy1_ParamLimits

0x4f49,	// (0x000369a6) cset_list_set_pane_t1_copy1

0xf077,	// (0x00040ad4) list_highlight_pane_cp021_copy1_ParamLimits

0xf077,	// (0x00040ad4) list_highlight_pane_cp021_copy1

0x24bc,	// (0x00033f19) cset6_slider_pane_ParamLimits

0x24bc,	// (0x00033f19) cset6_slider_pane

0x24e8,	// (0x00033f45) main_cset6_slider_pane_g1_ParamLimits

0x24e8,	// (0x00033f45) main_cset6_slider_pane_g1

0xb9ad,	// (0x0003d40a) main_cset6_slider_pane_g2_ParamLimits

0xb9ad,	// (0x0003d40a) main_cset6_slider_pane_g2

0x1bf7,	// (0x00033654) main_cset6_slider_pane_g3_ParamLimits

0x1bf7,	// (0x00033654) main_cset6_slider_pane_g3

0xb9d5,	// (0x0003d432) main_cset6_slider_pane_g4_ParamLimits

0xb9d5,	// (0x0003d432) main_cset6_slider_pane_g4

0xb9e1,	// (0x0003d43e) main_cset6_slider_pane_g5_ParamLimits

0xb9e1,	// (0x0003d43e) main_cset6_slider_pane_g5

0x1bf7,	// (0x00033654) main_cset6_slider_pane_g7_ParamLimits

0x1bf7,	// (0x00033654) main_cset6_slider_pane_g7

0x1c03,	// (0x00033660) main_cset6_slider_pane_g8_ParamLimits

0x1c03,	// (0x00033660) main_cset6_slider_pane_g8

0xb9ed,	// (0x0003d44a) main_cset6_slider_pane_g9_ParamLimits

0xb9ed,	// (0x0003d44a) main_cset6_slider_pane_g9

0xb9f9,	// (0x0003d456) main_cset6_slider_pane_g10_ParamLimits

0xb9f9,	// (0x0003d456) main_cset6_slider_pane_g10

0xb9d5,	// (0x0003d432) main_cset6_slider_pane_g11_ParamLimits

0xb9d5,	// (0x0003d432) main_cset6_slider_pane_g11

0xba05,	// (0x0003d462) main_cset6_slider_pane_g12_ParamLimits

0xba05,	// (0x0003d462) main_cset6_slider_pane_g12

0xba11,	// (0x0003d46e) main_cset6_slider_pane_g13_ParamLimits

0xba11,	// (0x0003d46e) main_cset6_slider_pane_g13

0xba1d,	// (0x0003d47a) main_cset6_slider_pane_g14_ParamLimits

0xba1d,	// (0x0003d47a) main_cset6_slider_pane_g14

0xba29,	// (0x0003d486) main_cset6_slider_pane_g15_ParamLimits

0xba29,	// (0x0003d486) main_cset6_slider_pane_g15

0xb9e1,	// (0x0003d43e) main_cset6_slider_pane_g16_ParamLimits

0xb9e1,	// (0x0003d43e) main_cset6_slider_pane_g16

0xba41,	// (0x0003d49e) main_cset6_slider_pane_g17_ParamLimits

0xba41,	// (0x0003d49e) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x000415eb) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x000415eb) main_cset6_slider_pane_g

0x2510,	// (0x00033f6d) main_cset6_slider_pane_t1_ParamLimits

0x2510,	// (0x00033f6d) main_cset6_slider_pane_t1

0xba4d,	// (0x0003d4aa) main_cset6_slider_pane_t2_ParamLimits

0xba4d,	// (0x0003d4aa) main_cset6_slider_pane_t2

0x2551,	// (0x00033fae) main_cset6_slider_pane_t3_ParamLimits

0x2551,	// (0x00033fae) main_cset6_slider_pane_t3

0xba78,	// (0x0003d4d5) main_cset6_slider_pane_t4_ParamLimits

0xba78,	// (0x0003d4d5) main_cset6_slider_pane_t4

0x257c,	// (0x00033fd9) main_cset6_slider_pane_t5_ParamLimits

0x257c,	// (0x00033fd9) main_cset6_slider_pane_t5

0x25a7,	// (0x00034004) main_cset6_slider_pane_t7_ParamLimits

0x25a7,	// (0x00034004) main_cset6_slider_pane_t7

0xbaa3,	// (0x0003d500) main_cset6_slider_pane_t8_ParamLimits

0xbaa3,	// (0x0003d500) main_cset6_slider_pane_t8

0xbac7,	// (0x0003d524) main_cset6_slider_pane_t9_ParamLimits

0xbac7,	// (0x0003d524) main_cset6_slider_pane_t9

0xbaeb,	// (0x0003d548) main_cset6_slider_pane_t10_ParamLimits

0xbaeb,	// (0x0003d548) main_cset6_slider_pane_t10

0xbb0f,	// (0x0003d56c) main_cset6_slider_pane_t11_ParamLimits

0xbb0f,	// (0x0003d56c) main_cset6_slider_pane_t11

0x25dd,	// (0x0003403a) main_cset6_slider_pane_t14_ParamLimits

0x25dd,	// (0x0003403a) main_cset6_slider_pane_t14

0x2616,	// (0x00034073) main_cset6_slider_pane_t15_ParamLimits

0x2616,	// (0x00034073) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x00041610) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x00041610) main_cset6_slider_pane_t

0x264f,	// (0x000340ac) cset_slider_pane_g1_copy1

0x2658,	// (0x000340b5) cset_slider_pane_g2_copy1

0x2661,	// (0x000340be) cset_slider_pane_g3_copy1

0x5ace,	// (0x0003752b) bg_popup_sub_pane_cp011_copy1

0x1dd8,	// (0x00033835) main_cset_text_pane_g1_copy1

0x1de0,	// (0x0003383d) main_cset_text_pane_t1_copy1

0x1dee,	// (0x0003384b) main_cset_text_pane_t2_copy1

0x1dfc,	// (0x00033859) main_cset_text_pane_t3_copy1

0x1e0a,	// (0x00033867) main_cset_text_pane_t4_copy1

0x1e18,	// (0x00033875) main_cset_text_pane_t5_copy1

0x1e26,	// (0x00033883) main_cset_text_pane_t6_copy1

0x1e34,	// (0x00033891) main_cset_text_pane_t7_copy1

0xbb33,	// (0x0003d590) main_cset_text2_pane_t1_copy1

0xf077,	// (0x00040ad4) main_ncimui_pane

0x88c2,	// (0x0003a31f) popup_query_ncimui_window_ParamLimits

0x88c2,	// (0x0003a31f) popup_query_ncimui_window

0x4b25,	// (0x00036582) field_cale_ev2_pane_g4_ParamLimits

0x4b25,	// (0x00036582) field_cale_ev2_pane_g4

0x9fee,	// (0x0003ba4b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9fee,	// (0x0003ba4b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x000412ea) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x000412ea) cell_video_dialer_keypad_pane_g

0xa006,	// (0x0003ba63) cell_video_dialer_keypad_pane_t1

0x5ace,	// (0x0003752b) bg_popup_window_pane_cp012

0xe01e,	// (0x0003fa7b) heading_pane_cp06

0x2694,	// (0x000340f1) ncim_query_content_pane

0x5ace,	// (0x0003752b) bg_popup_heading_pane_cp01

0x269c,	// (0x000340f9) ncim_heading_pane_t1

0x26aa,	// (0x00034107) ncim_indicator_popup_pane

0x26bc,	// (0x00034119) ncim_query_button_pane

0x26d0,	// (0x0003412d) ncim_query_content_pane_t1

0x26e2,	// (0x0003413f) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x00041654) ncim_query_content_pane_t

0x271c,	// (0x00034179) ncim_query_list_pane

0x272e,	// (0x0003418b) ncim_query_popup_pane

0x26aa,	// (0x00034107) ncim_indicator_popup_pane_ParamLimits

0xbc74,	// (0x0003d6d1) ncim_query_content_pane_g1_ParamLimits

0xbc74,	// (0x0003d6d1) ncim_query_content_pane_g1

0x26d0,	// (0x0003412d) ncim_query_content_pane_t1_ParamLimits

0x26e2,	// (0x0003413f) ncim_query_content_pane_t2_ParamLimits

0xbc80,	// (0x0003d6dd) ncim_query_content_pane_t3_ParamLimits

0xbc80,	// (0x0003d6dd) ncim_query_content_pane_t3

0xbc9d,	// (0x0003d6fa) ncim_query_content_pane_t4_ParamLimits

0xbc9d,	// (0x0003d6fa) ncim_query_content_pane_t4

0xbcba,	// (0x0003d717) ncim_query_content_pane_t5_ParamLimits

0xbcba,	// (0x0003d717) ncim_query_content_pane_t5

0x26f4,	// (0x00034151) ncim_query_content_pane_t6_ParamLimits

0x26f4,	// (0x00034151) ncim_query_content_pane_t6

0xfbf7,	// (0x00041654) ncim_query_content_pane_t_ParamLimits

0x271c,	// (0x00034179) ncim_query_list_pane_ParamLimits

0x272e,	// (0x0003418b) ncim_query_popup_pane_ParamLimits

0x2742,	// (0x0003419f) wait_bar_pane_cp04

0x5ace,	// (0x0003752b) input_focus_pane_cp011

0x274a,	// (0x000341a7) ncim_query_popup_pane_t1

0x2758,	// (0x000341b5) ncim_list_query_list_pane_ParamLimits

0x2758,	// (0x000341b5) ncim_list_query_list_pane

0x5ace,	// (0x0003752b) bg_button_pane_cp027

0x276b,	// (0x000341c8) ncim_query_button_pane_g1

0x5ace,	// (0x0003752b) list_highlight_pane_cp012

0x2775,	// (0x000341d2) ncim_list_query_list_pane_g1

0x277d,	// (0x000341da) ncim_list_query_list_pane_t1

0xa68f,	// (0x0003c0ec) cam4_indicators_pane_g3_ParamLimits

0xa68f,	// (0x0003c0ec) cam4_indicators_pane_g3

0xa740,	// (0x0003c19d) vid4_indicators_pane_g5_ParamLimits

0xa740,	// (0x0003c19d) vid4_indicators_pane_g5

0xde5a,	// (0x0003f8b7) vid4_progress_pane_g5_ParamLimits

0xde5a,	// (0x0003f8b7) vid4_progress_pane_g5

0xbb64,	// (0x0003d5c1) main_ncimui_pane_g1

0xbbca,	// (0x0003d627) ncimui_group_query_pane_ParamLimits

0xbbca,	// (0x0003d627) ncimui_group_query_pane

0xbc12,	// (0x0003d66f) ncimui_list_pane_ParamLimits

0xbc12,	// (0x0003d66f) ncimui_list_pane

0xbc37,	// (0x0003d694) ncimui_text_pane_ParamLimits

0xbc37,	// (0x0003d694) ncimui_text_pane

0xbcd7,	// (0x0003d734) ncimui_text_pane_t1_ParamLimits

0xbcd7,	// (0x0003d734) ncimui_text_pane_t1

0x2794,	// (0x000341f1) ncimui_list_single_graphic_pane_ParamLimits

0x2794,	// (0x000341f1) ncimui_list_single_graphic_pane

0xbcf5,	// (0x0003d752) ncimui_query_pane_ParamLimits

0xbcf5,	// (0x0003d752) ncimui_query_pane

0x5ace,	// (0x0003752b) list_highlight_pane_cp013

0x27a4,	// (0x00034201) ncim_list_query_list_pane_t1_copy1

0x27b2,	// (0x0003420f) ncim_list_single_graphic_pane_g1

0x27ba,	// (0x00034217) ncim_query_button_pane_cp01

0x27c6,	// (0x00034223) ncim_query_entry_pane_ParamLimits

0x27c6,	// (0x00034223) ncim_query_entry_pane

0x27d9,	// (0x00034236) ncimui_query_pane_g1

0x27e5,	// (0x00034242) ncimui_query_pane_t1_ParamLimits

0x27e5,	// (0x00034242) ncimui_query_pane_t1

0xf077,	// (0x00040ad4) input_focus_pane_cp012

0x27fe,	// (0x0003425b) ncim_query_entry_pane_t1

0xd729,	// (0x0003f186) main_im_pane_ParamLimits

0xf077,	// (0x00040ad4) main_mobtv_pane_ParamLimits

0xf077,	// (0x00040ad4) main_mobtv_pane

0xb9ed,	// (0x0003d44a) main_cset6_slider_pane_g18_ParamLimits

0xb9ed,	// (0x0003d44a) main_cset6_slider_pane_g18

0xba11,	// (0x0003d46e) main_cset6_slider_pane_g19_ParamLimits

0xba11,	// (0x0003d46e) main_cset6_slider_pane_g19

0x1a79,	// (0x000334d6) bg_main_mobtv_pane_ParamLimits

0x1a79,	// (0x000334d6) bg_main_mobtv_pane

0xbd05,	// (0x0003d762) main_mobtv_info_pane

0xbd0e,	// (0x0003d76b) main_mobtv_loading_pane_ParamLimits

0xbd0e,	// (0x0003d76b) main_mobtv_loading_pane

0x281e,	// (0x0003427b) main_mobtv_pg_channel_list_pane

0x2828,	// (0x00034285) main_mobtv_pg_hdr_pane

0xbd1b,	// (0x0003d778) main_mobtv_programe_curr_pane_ParamLimits

0xbd1b,	// (0x0003d778) main_mobtv_programe_curr_pane

0xbd28,	// (0x0003d785) main_mobtv_programe_next_pane_ParamLimits

0xbd28,	// (0x0003d785) main_mobtv_programe_next_pane

0x2831,	// (0x0003428e) popup_mobtv_noti_window

0x0cae,	// (0x0003270b) main_tv_pg_hdr_pane_g1

0x2839,	// (0x00034296) main_tv_pg_hdr_pane_g2

0x2841,	// (0x0003429e) main_tv_pg_hdr_pane_g3

0x2849,	// (0x000342a6) main_tv_pg_hdr_pane_g4

0x2851,	// (0x000342ae) main_tv_pg_hdr_pane_g5

0x2859,	// (0x000342b6) main_tv_pg_hdr_pane_g6

0x2861,	// (0x000342be) main_tv_pg_hdr_pane_g7

0x2869,	// (0x000342c6) main_tv_pg_hdr_pane_g8

0x2871,	// (0x000342ce) main_tv_pg_hdr_pane_g9

0x2879,	// (0x000342d6) main_tv_pg_hdr_pane_g10

0x2883,	// (0x000342e0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x00041661) main_tv_pg_hdr_pane_g

0x288d,	// (0x000342ea) main_tv_pg_hdr_pane_t1

0x289b,	// (0x000342f8) main_tv_pg_hdr_pane_t2

0x28a9,	// (0x00034306) main_tv_pg_hdr_pane_t3

0x28b7,	// (0x00034314) main_tv_pg_hdr_pane_t4

0x28c5,	// (0x00034322) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x00041678) main_tv_pg_hdr_pane_t

0x28d3,	// (0x00034330) single_mobtv_pg_channel_pane_ParamLimits

0x28d3,	// (0x00034330) single_mobtv_pg_channel_pane

0x28e5,	// (0x00034342) single_mobtv_pg_channel_table_pane

0x28ee,	// (0x0003434b) single_mobtv_pg_channel_thumb_pane

0x28f7,	// (0x00034354) single_tv_pg_channel_pane_g1

0x2900,	// (0x0003435d) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x00041683) single_tv_pg_channel_pane_g

0x0edd,	// (0x0003293a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0edd,	// (0x0003293a) bg_single_mobtv_pg_channel_thumb_pane

0x2909,	// (0x00034366) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2909,	// (0x00034366) single_mobtv_pg_channel_thumb_pane_g1

0x2917,	// (0x00034374) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2917,	// (0x00034374) single_mobtv_pg_channel_thumb_pane_g2

0x2923,	// (0x00034380) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2923,	// (0x00034380) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x00041688) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x00041688) single_mobtv_pg_channel_thumb_pane_g

0x292f,	// (0x0003438c) single_mobtv_pg_channel_thumb_pane_t1

0x293d,	// (0x0003439a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x0004168f) single_mobtv_pg_channel_thumb_pane_t

0x0cae,	// (0x0003270b) bg_single_mobtv_pg_channel_table_pane_g1

0x0cae,	// (0x0003270b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x00041131) bg_single_mobtv_pg_channel_table_pane_g

0x294b,	// (0x000343a8) single_mobtv_pg_channel_table_pane_t1

0x2959,	// (0x000343b6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x00041694) single_mobtv_pg_channel_table_pane_t

0xbd3d,	// (0x0003d79a) main_mobtv_info_pane_g1_ParamLimits

0xbd3d,	// (0x0003d79a) main_mobtv_info_pane_g1

0xbd59,	// (0x0003d7b6) main_mobtv_info_pane_t1_ParamLimits

0xbd59,	// (0x0003d7b6) main_mobtv_info_pane_t1

0xbdbf,	// (0x0003d81c) main_mobtv_info_pane_t2_ParamLimits

0xbdbf,	// (0x0003d81c) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x0004169e) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x0004169e) main_mobtv_info_pane_t

0xbe42,	// (0x0003d89f) wait_bar_pane_cp05

0xbe52,	// (0x0003d8af) main_mobtv_loading_pane_g1_ParamLimits

0xbe52,	// (0x0003d8af) main_mobtv_loading_pane_g1

0xbe5e,	// (0x0003d8bb) main_mobtv_loading_pane_g2_ParamLimits

0xbe5e,	// (0x0003d8bb) main_mobtv_loading_pane_g2

0xbe6a,	// (0x0003d8c7) main_mobtv_loading_pane_g3_ParamLimits

0xbe6a,	// (0x0003d8c7) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x000416a5) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x000416a5) main_mobtv_loading_pane_g

0x2967,	// (0x000343c4) main_mobtv_loading_pane_t1_ParamLimits

0x2967,	// (0x000343c4) main_mobtv_loading_pane_t1

0x297f,	// (0x000343dc) main_mobtv_loading_pane_t2_ParamLimits

0x297f,	// (0x000343dc) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x000416ac) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x000416ac) main_mobtv_loading_pane_t

0xbe76,	// (0x0003d8d3) wait_bar_pane_cp06_ParamLimits

0xbe76,	// (0x0003d8d3) wait_bar_pane_cp06

0x29a3,	// (0x00034400) main_mobtv_programe_curr_pane_t1

0x29b1,	// (0x0003440e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x000416b1) main_mobtv_programe_curr_pane_t

0x29bf,	// (0x0003441c) main_mobtv_programe_next_pane_t1

0x29cd,	// (0x0003442a) main_mobtv_programe_next_pane_t2

0x29db,	// (0x00034438) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x000416b6) main_mobtv_programe_next_pane_t

0x5ace,	// (0x0003752b) bg_popup_mobtv_noti_window_pane

0x29e9,	// (0x00034446) popup_mobtv_noti_window_g1

0x29f1,	// (0x0003444e) popup_mobtv_noti_window_t1

0x29ff,	// (0x0003445c) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x000416bd) popup_mobtv_noti_window_t

0x0cae,	// (0x0003270b) bg_popup_mobtv_noti_window_pane_g1

0x5ace,	// (0x0003752b) sc_clock_pane

0x5ace,	// (0x0003752b) main_fs_bigclock_pane

0xb68f,	// (0x0003d0ec) blid2_tripm_pane_t4_ParamLimits

0xb68f,	// (0x0003d0ec) blid2_tripm_pane_t4

0xbe82,	// (0x0003d8df) sc_clock_pane_g1_ParamLimits

0xbe82,	// (0x0003d8df) sc_clock_pane_g1

0xbe90,	// (0x0003d8ed) sc_clock_pane_t1_ParamLimits

0xbe90,	// (0x0003d8ed) sc_clock_pane_t1

0xbea3,	// (0x0003d900) sc_clock_pane_t2_ParamLimits

0xbea3,	// (0x0003d900) sc_clock_pane_t2

0xbeb5,	// (0x0003d912) sc_clock_pane_t3_ParamLimits

0xbeb5,	// (0x0003d912) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x000416c2) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x000416c2) sc_clock_pane_t

0xc717,	// (0x0003e174) main_fs_bigclock_indicator_pane_ParamLimits

0xc717,	// (0x0003e174) main_fs_bigclock_indicator_pane

0xbf30,	// (0x0003d98d) main_fs_bigclock_pane_g1_ParamLimits

0xbf30,	// (0x0003d98d) main_fs_bigclock_pane_g1

0xc723,	// (0x0003e180) main_fs_bigclock_pane_t1_ParamLimits

0xc723,	// (0x0003e180) main_fs_bigclock_pane_t1

0xc735,	// (0x0003e192) main_fs_bigclock_pane_t2_ParamLimits

0xc735,	// (0x0003e192) main_fs_bigclock_pane_t2

0xc747,	// (0x0003e1a4) main_fs_bigclock_pane_t3_ParamLimits

0xc747,	// (0x0003e1a4) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000418d0) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000418d0) main_fs_bigclock_pane_t

0x3482,	// (0x00034edf) main_fs_bigclock_indicator_pane_g1

0x26c4,	// (0x00034121) ncim_query_content_pane_g2_ParamLimits

0x26c4,	// (0x00034121) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x0004164f) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x0004164f) ncim_query_content_pane_g

0xbec7,	// (0x0003d924) sc_clock_pane_t4_ParamLimits

0xbec7,	// (0x0003d924) sc_clock_pane_t4

0xf077,	// (0x00040ad4) main_radioblah_pane

0xa53c,	// (0x0003bf99) cell_call4_button_pane_t1_copy1_ParamLimits

0xa53c,	// (0x0003bf99) cell_call4_button_pane_t1_copy1

0xbb7c,	// (0x0003d5d9) main_ncimui_pane_t1_ParamLimits

0xbb7c,	// (0x0003d5d9) main_ncimui_pane_t1

0xbb96,	// (0x0003d5f3) main_ncimui_pane_t2_ParamLimits

0xbb96,	// (0x0003d5f3) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x00041648) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x00041648) main_ncimui_pane_t

0x2b40,	// (0x0003459d) main_radioblah_anim_pane_ParamLimits

0x2b40,	// (0x0003459d) main_radioblah_anim_pane

0x2b51,	// (0x000345ae) main_radioblah_info_pane_ParamLimits

0x2b51,	// (0x000345ae) main_radioblah_info_pane

0x2b65,	// (0x000345c2) main_radioblah_pane_t1_ParamLimits

0x2b65,	// (0x000345c2) main_radioblah_pane_t1

0x2b81,	// (0x000345de) main_radioblah_pane_t2_ParamLimits

0x2b81,	// (0x000345de) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x000416e3) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x000416e3) main_radioblah_pane_t

0xbf78,	// (0x0003d9d5) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbf78,	// (0x0003d9d5) main_radioblah_rocker_ctrl_pane

0x2bc9,	// (0x00034626) main_radioblah_info_pane_t1_ParamLimits

0x2bc9,	// (0x00034626) main_radioblah_info_pane_t1

0xbfbd,	// (0x0003da1a) main_radioblah_info_pane_t2_ParamLimits

0xbfbd,	// (0x0003da1a) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x000416ec) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x000416ec) main_radioblah_info_pane_t

0x0cae,	// (0x0003270b) main_radioblah_rocker_ctrl_pane_g1

0xc065,	// (0x0003dac2) main_radioblah_rocker_ctrl_pane_g2

0xc06d,	// (0x0003daca) main_radioblah_rocker_ctrl_pane_g3

0xc075,	// (0x0003dad2) main_radioblah_rocker_ctrl_pane_g4

0xc07d,	// (0x0003dada) main_radioblah_rocker_ctrl_pane_g5

0xc085,	// (0x0003dae2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x000416f5) main_radioblah_rocker_ctrl_pane_g

0xbb33,	// (0x0003d590) main_cset_text2_pane_t1_copy1_ParamLimits

0xa5bf,	// (0x0003c01c) cam4_image_uncrop_qvga_pane

0xa6d3,	// (0x0003c130) vid4_image_uncrop_qcif_pane

0xb80d,	// (0x0003d26a) cam6_image_uncrop_qvga_pane_ParamLimits

0xb80d,	// (0x0003d26a) cam6_image_uncrop_qvga_pane

0x239a,	// (0x00033df7) vid6_image_uncrop_qcif_pane_ParamLimits

0x239a,	// (0x00033df7) vid6_image_uncrop_qcif_pane

0x5ace,	// (0x0003752b) bg_popup_preview_window_pane_cp03

0x266a,	// (0x000340c7) list_cset_text2_pane

0x2672,	// (0x000340cf) main_cset6_text2_pane_g1

0x267a,	// (0x000340d7) main_cset6_text2_pane_t1

0x3834,	// (0x00035291) list_cset_text2_pane_t1_ParamLimits

0x3834,	// (0x00035291) list_cset_text2_pane_t1

0xf077,	// (0x00040ad4) main_radioblah_pane_ParamLimits

0xbe30,	// (0x0003d88d) main_mobtv_info_pane_t3_ParamLimits

0xbe30,	// (0x0003d88d) main_mobtv_info_pane_t3

0xbf66,	// (0x0003d9c3) main_radioblah_pane_g1

0xbf91,	// (0x0003d9ee) main_radioblah_info_pane_g1

0xc00c,	// (0x0003da69) main_radioblah_info_pane_t3_ParamLimits

0xc00c,	// (0x0003da69) main_radioblah_info_pane_t3

0x78e0,	// (0x0003933d) highlight_cell_cale_month_pane_ParamLimits

0x78e0,	// (0x0003933d) highlight_cell_cale_month_pane

0x5ace,	// (0x0003752b) main_phob_fisheye_pane

0x102d,	// (0x00032a8a) scroll_pane_cp0031_ParamLimits

0x102d,	// (0x00032a8a) scroll_pane_cp0031

0x24a4,	// (0x00033f01) wait_bar_pane_cp08_ParamLimits

0xb99e,	// (0x0003d3fb) cset_list_set_pane_copy1_ParamLimits

0x2c03,	// (0x00034660) highlight_cell_cale_month_pane_g1

0xc08d,	// (0x0003daea) highlight_cell_cale_month_pane_t1

0x2c0b,	// (0x00034668) list_gen_pane_cp01

0x1be2,	// (0x0003363f) scroll_pane_01

0xf09a,	// (0x00040af7) list_single_double_fisheye_pane

0x502f,	// (0x00036a8c) list_double_fisheye_pane_g1_ParamLimits

0x502f,	// (0x00036a8c) list_double_fisheye_pane_g1

0x503b,	// (0x00036a98) list_double_fisheye_pane_g2_ParamLimits

0x503b,	// (0x00036a98) list_double_fisheye_pane_g2

0xf0a3,	// (0x00040b00) list_double_fisheye_pane_g3_ParamLimits

0xf0a3,	// (0x00040b00) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x00041702) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x00041702) list_double_fisheye_pane_g

0x506c,	// (0x00036ac9) list_double_fisheye_pane_t1_ParamLimits

0x506c,	// (0x00036ac9) list_double_fisheye_pane_t1

0x5087,	// (0x00036ae4) list_double_fisheye_pane_t2_ParamLimits

0x5087,	// (0x00036ae4) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x0004170d) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x0004170d) list_double_fisheye_pane_t

0x5ace,	// (0x0003752b) main_call5_pane

0xbeed,	// (0x0003d94a) sc_swipe_pane_ParamLimits

0xbeed,	// (0x0003d94a) sc_swipe_pane

0xc0a7,	// (0x0003db04) call5_image_pane_ParamLimits

0xc0a7,	// (0x0003db04) call5_image_pane

0xc0b3,	// (0x0003db10) call5_swipe_1_pane_ParamLimits

0xc0b3,	// (0x0003db10) call5_swipe_1_pane

0xc0bf,	// (0x0003db1c) call5_swipe_2_pane_ParamLimits

0xc0bf,	// (0x0003db1c) call5_swipe_2_pane

0xc0d7,	// (0x0003db34) popup_call5_audio_first_window_ParamLimits

0xc0d7,	// (0x0003db34) popup_call5_audio_first_window

0x0edd,	// (0x0003293a) call5_swipe_1_pane_g1_ParamLimits

0x0edd,	// (0x0003293a) call5_swipe_1_pane_g1

0x2c14,	// (0x00034671) call5_swipe_1_pane_g2_ParamLimits

0x2c14,	// (0x00034671) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x00041712) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x00041712) call5_swipe_1_pane_g

0x2c20,	// (0x0003467d) call5_swipe_1_pane_t1_ParamLimits

0x2c20,	// (0x0003467d) call5_swipe_1_pane_t1

0x0edd,	// (0x0003293a) call5_swipe_2_pane_g1_ParamLimits

0x0edd,	// (0x0003293a) call5_swipe_2_pane_g1

0x2c35,	// (0x00034692) call5_swipe_2_pane_g2_ParamLimits

0x2c35,	// (0x00034692) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x00041717) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x00041717) call5_swipe_2_pane_g

0x2c41,	// (0x0003469e) call5_swipe_2_pane_t1_ParamLimits

0x2c41,	// (0x0003469e) call5_swipe_2_pane_t1

0x2c56,	// (0x000346b3) sc_swipe_pane_g1_ParamLimits

0x2c56,	// (0x000346b3) sc_swipe_pane_g1

0x2c63,	// (0x000346c0) sc_swipe_pane_g2_ParamLimits

0x2c63,	// (0x000346c0) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x0004171c) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x0004171c) sc_swipe_pane_g

0x2c6f,	// (0x000346cc) sc_swipe_pane_t1_ParamLimits

0x2c6f,	// (0x000346cc) sc_swipe_pane_t1

0x5ace,	// (0x0003752b) main_cmail_launcher_pane

0xc0e3,	// (0x0003db40) aid_size_cell_cmail_l_ParamLimits

0xc0e3,	// (0x0003db40) aid_size_cell_cmail_l

0xc0f3,	// (0x0003db50) grid_cmail_l_pane_ParamLimits

0xc0f3,	// (0x0003db50) grid_cmail_l_pane

0xc0ff,	// (0x0003db5c) cell_cmail_l_pane_ParamLimits

0xc0ff,	// (0x0003db5c) cell_cmail_l_pane

0xc111,	// (0x0003db6e) cell_cmail_l_pane_g1_ParamLimits

0xc111,	// (0x0003db6e) cell_cmail_l_pane_g1

0xc121,	// (0x0003db7e) cell_cmail_l_pane_t1_ParamLimits

0xc121,	// (0x0003db7e) cell_cmail_l_pane_t1

0xc137,	// (0x0003db94) cell_cmail_l_pane_t2_ParamLimits

0xc137,	// (0x0003db94) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x00041721) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x00041721) cell_cmail_l_pane_t

0xf077,	// (0x00040ad4) grid_highlight_pane_cp018_ParamLimits

0xf077,	// (0x00040ad4) grid_highlight_pane_cp018

0x5bcc,	// (0x00037629) main2_pane_ParamLimits

0x5bcc,	// (0x00037629) main2_pane

0xd7d4,	// (0x0003f231) popup_sp_fs_action_menu_bg_pane_g1

0xd7dc,	// (0x0003f239) popup_sp_fs_action_menu_bg_pane_g2

0xd7e4,	// (0x0003f241) popup_sp_fs_action_menu_bg_pane_g3

0xd7ec,	// (0x0003f249) popup_sp_fs_action_menu_bg_pane_g4

0xd7f4,	// (0x0003f251) popup_sp_fs_action_menu_bg_pane_g5

0xd7fc,	// (0x0003f259) popup_sp_fs_action_menu_bg_pane_g6

0xd804,	// (0x0003f261) popup_sp_fs_action_menu_bg_pane_g7

0xd80c,	// (0x0003f269) popup_sp_fs_action_menu_bg_pane_g8

0xd814,	// (0x0003f271) popup_sp_fs_action_menu_bg_pane_g9

0xd81c,	// (0x0003f279) popup_sp_fs_action_menu_bg_pane_g10

0xd81c,	// (0x0003f279) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x00040bcc) popup_sp_fs_action_menu_bg_pane_g

0x4810,	// (0x0003626d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4810,	// (0x0003626d) list_medium_line_x2_t3_g3_g1

0x481c,	// (0x00036279) list_medium_line_x2_t3_g3_g2_ParamLimits

0x481c,	// (0x00036279) list_medium_line_x2_t3_g3_g2

0x4828,	// (0x00036285) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4828,	// (0x00036285) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x00040c7a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x00040c7a) list_medium_line_x2_t3_g3_g

0x4834,	// (0x00036291) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4834,	// (0x00036291) list_medium_line_x2_t3_g3_t1

0x4849,	// (0x000362a6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4849,	// (0x000362a6) list_medium_line_x2_t3_g3_t2

0x485b,	// (0x000362b8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x485b,	// (0x000362b8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x00040c81) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x00040c81) list_medium_line_x2_t3_g3_t

0x4810,	// (0x0003626d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4810,	// (0x0003626d) list_medium_line_x2_t3_g2_g1

0x4828,	// (0x00036285) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4828,	// (0x00036285) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x00040c88) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x00040c88) list_medium_line_x2_t3_g2_g

0x4870,	// (0x000362cd) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4870,	// (0x000362cd) list_medium_line_x2_t3_g2_t1

0x4886,	// (0x000362e3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4886,	// (0x000362e3) list_medium_line_x2_t3_g2_t2

0x485b,	// (0x000362b8) list_medium_line_x2_t3_g2_t3_ParamLimits

0x485b,	// (0x000362b8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x00040c8d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x00040c8d) list_medium_line_x2_t3_g2_t

0x4810,	// (0x0003626d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4810,	// (0x0003626d) list_medium_line_x2_t4_g4_g1

0x4898,	// (0x000362f5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x4898,	// (0x000362f5) list_medium_line_x2_t4_g4_g2

0x481c,	// (0x00036279) list_medium_line_x2_t4_g4_g3_ParamLimits

0x481c,	// (0x00036279) list_medium_line_x2_t4_g4_g3

0x48a4,	// (0x00036301) list_medium_line_x2_t4_g4_g4_ParamLimits

0x48a4,	// (0x00036301) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x00040c94) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x00040c94) list_medium_line_x2_t4_g4_g

0x48b0,	// (0x0003630d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x48b0,	// (0x0003630d) list_medium_line_x2_t4_g4_t1

0x48c7,	// (0x00036324) list_medium_line_x2_t4_g4_t2_ParamLimits

0x48c7,	// (0x00036324) list_medium_line_x2_t4_g4_t2

0x48dc,	// (0x00036339) list_medium_line_x2_t4_g4_t3_ParamLimits

0x48dc,	// (0x00036339) list_medium_line_x2_t4_g4_t3

0x48ee,	// (0x0003634b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x48ee,	// (0x0003634b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x00040c9d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x00040c9d) list_medium_line_x2_t4_g4_t

0x4810,	// (0x0003626d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4810,	// (0x0003626d) list_medium_line_x2_t2_g4_g1

0x4898,	// (0x000362f5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x4898,	// (0x000362f5) list_medium_line_x2_t2_g4_g2

0x481c,	// (0x00036279) list_medium_line_x2_t2_g4_g3_ParamLimits

0x481c,	// (0x00036279) list_medium_line_x2_t2_g4_g3

0x4828,	// (0x00036285) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4828,	// (0x00036285) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x00040d04) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x00040d04) list_medium_line_x2_t2_g4_g

0x4900,	// (0x0003635d) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4900,	// (0x0003635d) list_medium_line_x2_t2_g4_t1

0x485b,	// (0x000362b8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x485b,	// (0x000362b8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x00040d0d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x00040d0d) list_medium_line_x2_t2_g4_t

0x4810,	// (0x0003626d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4810,	// (0x0003626d) list_medium_line_x2_t2_g3_g1

0x481c,	// (0x00036279) list_medium_line_x2_t2_g3_g2_ParamLimits

0x481c,	// (0x00036279) list_medium_line_x2_t2_g3_g2

0x4828,	// (0x00036285) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4828,	// (0x00036285) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x00040c7a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x00040c7a) list_medium_line_x2_t2_g3_g

0x4915,	// (0x00036372) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4915,	// (0x00036372) list_medium_line_x2_t2_g3_t1

0x485b,	// (0x000362b8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x485b,	// (0x000362b8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x00040d12) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x00040d12) list_medium_line_x2_t2_g3_t

0x7a72,	// (0x000394cf) main_sp_fs_list_pane_ParamLimits

0x7a72,	// (0x000394cf) main_sp_fs_list_pane

0x7a7f,	// (0x000394dc) sp_fs_scroll_pane_ParamLimits

0x7a7f,	// (0x000394dc) sp_fs_scroll_pane

0x492a,	// (0x00036387) list_medium_line_x2_t3_t1

0x493a,	// (0x00036397) list_medium_line_x2_t3_t2

0x4948,	// (0x000363a5) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x00040d5d) list_medium_line_x2_t3_t

0x4956,	// (0x000363b3) list_medium_line_x3_t4_t1

0x4966,	// (0x000363c3) list_medium_line_x3_t4_t2

0x4974,	// (0x000363d1) list_medium_line_x3_t4_t3

0x4982,	// (0x000363df) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x00040d64) list_medium_line_x3_t4_t

0x4990,	// (0x000363ed) list_medium_line_x4_t5_t1

0x49a0,	// (0x000363fd) list_medium_line_x4_t5_t2

0x4974,	// (0x000363d1) list_medium_line_x4_t5_t3

0x49ae,	// (0x0003640b) list_medium_line_x4_t5_t4

0x4982,	// (0x000363df) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x00040d6d) list_medium_line_x4_t5_t

0x4810,	// (0x0003626d) list_medium_line_t4_g4_g1_ParamLimits

0x4810,	// (0x0003626d) list_medium_line_t4_g4_g1

0x48a4,	// (0x00036301) list_medium_line_t4_g4_g2_ParamLimits

0x48a4,	// (0x00036301) list_medium_line_t4_g4_g2

0x49bc,	// (0x00036419) list_medium_line_t4_g4_g3_ParamLimits

0x49bc,	// (0x00036419) list_medium_line_t4_g4_g3

0x4828,	// (0x00036285) list_medium_line_t4_g4_g4_ParamLimits

0x4828,	// (0x00036285) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x00040d78) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x00040d78) list_medium_line_t4_g4_g

0x49c8,	// (0x00036425) list_medium_line_t4_g4_t1_ParamLimits

0x49c8,	// (0x00036425) list_medium_line_t4_g4_t1

0x49dd,	// (0x0003643a) list_medium_line_t4_g4_t2_ParamLimits

0x49dd,	// (0x0003643a) list_medium_line_t4_g4_t2

0x49f3,	// (0x00036450) list_medium_line_t4_g4_t3_ParamLimits

0x49f3,	// (0x00036450) list_medium_line_t4_g4_t3

0x4a09,	// (0x00036466) list_medium_line_t4_g4_t4_ParamLimits

0x4a09,	// (0x00036466) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x00040d81) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x00040d81) list_medium_line_t4_g4_t

0x7b9a,	// (0x000395f7) chi_dic_find_pane_g1

0x8885,	// (0x0003a2e2) main_tport_pane

0x4ca0,	// (0x000366fd) list_medium_line_plain_t1

0x4cae,	// (0x0003670b) list_medium_line_t2_g2_g1_ParamLimits

0x4cae,	// (0x0003670b) list_medium_line_t2_g2_g1

0x4cba,	// (0x00036717) list_medium_line_t2_g2_g2_ParamLimits

0x4cba,	// (0x00036717) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x00041459) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x00041459) list_medium_line_t2_g2_g

0x4cc6,	// (0x00036723) list_medium_line_t2_g2_t1_ParamLimits

0x4cc6,	// (0x00036723) list_medium_line_t2_g2_t1

0x4ce0,	// (0x0003673d) list_medium_line_t2_g2_t2_ParamLimits

0x4ce0,	// (0x0003673d) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x0004145e) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x0004145e) list_medium_line_t2_g2_t

0x4ef3,	// (0x00036950) aid_sp_fs_list_icon_a_sm

0x4efb,	// (0x00036958) aid_sp_fs_list_icon_d

0x4f03,	// (0x00036960) aid_sp_fs_text_primary

0x4f0c,	// (0x00036969) aid_sp_fs_text_secondary

0x219a,	// (0x00033bf7) list_medium_line

0x219a,	// (0x00033bf7) list_medium_line_g2

0x219a,	// (0x00033bf7) list_medium_line_g3

0x219a,	// (0x00033bf7) list_medium_line_plain

0x219a,	// (0x00033bf7) list_medium_line_plain_t2

0x219a,	// (0x00033bf7) list_medium_line_plain_t3

0x219a,	// (0x00033bf7) list_medium_line_right_icon

0x219a,	// (0x00033bf7) list_medium_line_right_iconx2

0x219a,	// (0x00033bf7) list_medium_line_t2

0x219a,	// (0x00033bf7) list_medium_line_t2_g2

0x219a,	// (0x00033bf7) list_medium_line_t2_g3

0x219a,	// (0x00033bf7) list_medium_line_t2_right_icon

0x219a,	// (0x00033bf7) list_medium_line_t2_right_iconx2

0x219a,	// (0x00033bf7) list_medium_line_t3

0x219a,	// (0x00033bf7) list_medium_line_t3_g2

0x219a,	// (0x00033bf7) list_medium_line_t3_g3

0x219a,	// (0x00033bf7) list_medium_line_t3_right_iconx2

0xf091,	// (0x00040aee) list_medium_line_t4_g4

0x215f,	// (0x00033bbc) list_medium_line_x2

0x215f,	// (0x00033bbc) list_medium_line_x2_t2_g2

0x215f,	// (0x00033bbc) list_medium_line_x2_t2_g3

0x215f,	// (0x00033bbc) list_medium_line_x2_t2_g4

0x215f,	// (0x00033bbc) list_medium_line_x2_t3

0x215f,	// (0x00033bbc) list_medium_line_x2_t3_g2

0x215f,	// (0x00033bbc) list_medium_line_x2_t3_g3

0x215f,	// (0x00033bbc) list_medium_line_x2_t3_g4

0x215f,	// (0x00033bbc) list_medium_line_x2_t4_g2

0x215f,	// (0x00033bbc) list_medium_line_x2_t4_g4

0x4f15,	// (0x00036972) list_medium_line_x3

0x4f15,	// (0x00036972) list_medium_line_x3_t4

0x4f15,	// (0x00036972) list_medium_line_x3_t4_g4

0xf091,	// (0x00040aee) list_medium_line_x4_t4

0xf091,	// (0x00040aee) list_medium_line_x4_t4_g7

0xf091,	// (0x00040aee) list_medium_line_x4_t5

0x4f1e,	// (0x0003697b) list_single_fs_dyc_pane_ParamLimits

0x4f1e,	// (0x0003697b) list_single_fs_dyc_pane

0x4810,	// (0x0003626d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4810,	// (0x0003626d) list_medium_line_x4_t4_g7_g1

0x4f5e,	// (0x000369bb) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4f5e,	// (0x000369bb) list_medium_line_x4_t4_g7_g2

0x4f6a,	// (0x000369c7) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4f6a,	// (0x000369c7) list_medium_line_x4_t4_g7_g3

0x4f79,	// (0x000369d6) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4f79,	// (0x000369d6) list_medium_line_x4_t4_g7_g4

0x4f85,	// (0x000369e2) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4f85,	// (0x000369e2) list_medium_line_x4_t4_g7_g5

0x4f94,	// (0x000369f1) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4f94,	// (0x000369f1) list_medium_line_x4_t4_g7_g6

0x4fa3,	// (0x00036a00) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4fa3,	// (0x00036a00) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x00041629) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x00041629) list_medium_line_x4_t4_g7_g

0x4faf,	// (0x00036a0c) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4faf,	// (0x00036a0c) list_medium_line_x4_t4_g7_t1

0x4fc4,	// (0x00036a21) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4fc4,	// (0x00036a21) list_medium_line_x4_t4_g7_t2

0x4fd9,	// (0x00036a36) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4fd9,	// (0x00036a36) list_medium_line_x4_t4_g7_t3

0x4fee,	// (0x00036a4b) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4fee,	// (0x00036a4b) list_medium_line_x4_t4_g7_t4

0x5000,	// (0x00036a5d) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5000,	// (0x00036a5d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x00041638) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x00041638) list_medium_line_x4_t4_g7_t

0x5012,	// (0x00036a6f) list_single_dyc_row_pane_ParamLimits

0x5012,	// (0x00036a6f) list_single_dyc_row_pane

0xc09b,	// (0x0003daf8) call5_gesture_pane_ParamLimits

0xc09b,	// (0x0003daf8) call5_gesture_pane

0xc0cb,	// (0x0003db28) call5_windows_pane_ParamLimits

0xc0cb,	// (0x0003db28) call5_windows_pane

0xc14f,	// (0x0003dbac) call5_swipe_1_pane_cp_ParamLimits

0xc14f,	// (0x0003dbac) call5_swipe_1_pane_cp

0xc15b,	// (0x0003dbb8) call5_swipe_2_pane_cp_ParamLimits

0xc15b,	// (0x0003dbb8) call5_swipe_2_pane_cp

0xd900,	// (0x0003f35d) call5_image_pane_cp

0xc167,	// (0x0003dbc4) popup_call5_audio_first_window_cp_ParamLimits

0xc167,	// (0x0003dbc4) popup_call5_audio_first_window_cp

0x2c56,	// (0x000346b3) call5_swipe_1_pane_g1_cp_ParamLimits

0x2c56,	// (0x000346b3) call5_swipe_1_pane_g1_cp

0x2c84,	// (0x000346e1) call5_swipe_1_pane_g2_cp

0x2c6f,	// (0x000346cc) call5_swipe_1_pane_t1_cp_ParamLimits

0x2c6f,	// (0x000346cc) call5_swipe_1_pane_t1_cp

0x2c56,	// (0x000346b3) call5_swipe_2_pane_g1_cp_ParamLimits

0x2c56,	// (0x000346b3) call5_swipe_2_pane_g1_cp

0x2c8c,	// (0x000346e9) call5_swipe_2_pane_g2_cp

0x2c94,	// (0x000346f1) call5_swipe_2_pane_t1_cp_ParamLimits

0x2c94,	// (0x000346f1) call5_swipe_2_pane_t1_cp

0xf077,	// (0x00040ad4) main_sp_fs_email_pane

0x2ca9,	// (0x00034706) main_sp_fs_listscroll_pane_te

0xc173,	// (0x0003dbd0) popup_sp_fs_action_menu_pane_ParamLimits

0xc173,	// (0x0003dbd0) popup_sp_fs_action_menu_pane

0x0cae,	// (0x0003270b) bg_sp_fs_ctrlbar_pane_g1

0x12ae,	// (0x00032d0b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x12c0,	// (0x00032d1d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x12b7,	// (0x00032d14) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0cae,	// (0x0003270b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x00041726) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0a9b,	// (0x000324f8) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0a9b,	// (0x000324f8) bg_sp_fs_ctrlbar_ddmenu_pane

0x2cb2,	// (0x0003470f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2cb2,	// (0x0003470f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2cbe,	// (0x0003471b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2cbe,	// (0x0003471b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x0004172f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x0004172f) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2cca,	// (0x00034727) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2cca,	// (0x00034727) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x50a9,	// (0x00036b06) list_medium_line_t2_right_icon_g1

0x50b1,	// (0x00036b0e) list_medium_line_t2_right_icon_t1

0x50c0,	// (0x00036b1d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x00041734) list_medium_line_t2_right_icon_t

0x079a,	// (0x000321f7) bg_sp_fs_ctrlbar_pane_ParamLimits

0x079a,	// (0x000321f7) bg_sp_fs_ctrlbar_pane

0xc1fa,	// (0x0003dc57) main_sp_fs_ctrlbar_button_pane_cp01

0xc202,	// (0x0003dc5f) main_sp_fs_ctrlbar_ddmenu_pane

0x2d34,	// (0x00034791) main_sp_fs_ctrlbar_pane_g1

0x2d40,	// (0x0003479d) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x00041739) main_sp_fs_ctrlbar_pane_g

0xc23c,	// (0x0003dc99) main_sp_fs_ctrlbar_pane_t1

0xc284,	// (0x0003dce1) main_sp_fs_ctrlbar_pane

0xc298,	// (0x0003dcf5) main_sp_fs_listscroll_pane_te_cp01

0x50ce,	// (0x00036b2b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x50ce,	// (0x00036b2b) popup_sp_fs_action_menu_pane_cp01

0xf077,	// (0x00040ad4) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf077,	// (0x00040ad4) bg_sp_fs_highlight_list_pane_cp01

0x50ee,	// (0x00036b4b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x50ee,	// (0x00036b4b) sp_fs_action_menu_list_gene_pane_g1

0x2d67,	// (0x000347c4) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2d67,	// (0x000347c4) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00041747) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00041747) sp_fs_action_menu_list_gene_pane_g

0x50fd,	// (0x00036b5a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x50fd,	// (0x00036b5a) sp_fs_action_menu_list_gene_pane_t1

0xc2a9,	// (0x0003dd06) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc2a9,	// (0x0003dd06) sp_fs_action_menu_list_gene_pane

0x2d74,	// (0x000347d1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2d74,	// (0x000347d1) popup_sp_fs_action_menu_bg_pane

0xc2c6,	// (0x0003dd23) sp_fs_action_menu_list_pane_ParamLimits

0xc2c6,	// (0x0003dd23) sp_fs_action_menu_list_pane

0x2d82,	// (0x000347df) sp_fs_scroll_pane_cp01_ParamLimits

0x2d82,	// (0x000347df) sp_fs_scroll_pane_cp01

0x5115,	// (0x00036b72) list_medium_line_plain_t2_t1

0x5124,	// (0x00036b81) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0004174c) list_medium_line_plain_t2_t

0x5132,	// (0x00036b8f) list_medium_line_plain_t3_t1

0x5142,	// (0x00036b9f) list_medium_line_plain_t3_t2

0x5150,	// (0x00036bad) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00041751) list_medium_line_plain_t3_t

0x4810,	// (0x0003626d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4810,	// (0x0003626d) list_medium_line_x2_t2_g2_g1

0x4828,	// (0x00036285) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4828,	// (0x00036285) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x00040c88) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x00040c88) list_medium_line_x2_t2_g2_g

0x49c8,	// (0x00036425) list_medium_line_x2_t2_g2_t1_ParamLimits

0x49c8,	// (0x00036425) list_medium_line_x2_t2_g2_t1

0x485b,	// (0x000362b8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x485b,	// (0x000362b8) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00041758) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00041758) list_medium_line_x2_t2_g2_t

0x4810,	// (0x0003626d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4810,	// (0x0003626d) list_medium_line_x2_t4_g2_g1

0x515e,	// (0x00036bbb) list_medium_line_x2_t4_g2_g2_ParamLimits

0x515e,	// (0x00036bbb) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0004175d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0004175d) list_medium_line_x2_t4_g2_g

0x5170,	// (0x00036bcd) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5170,	// (0x00036bcd) list_medium_line_x2_t4_g2_t1

0x5187,	// (0x00036be4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5187,	// (0x00036be4) list_medium_line_x2_t4_g2_t2

0x519c,	// (0x00036bf9) list_medium_line_x2_t4_g2_t3_ParamLimits

0x519c,	// (0x00036bf9) list_medium_line_x2_t4_g2_t3

0x485b,	// (0x000362b8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x485b,	// (0x000362b8) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00041762) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00041762) list_medium_line_x2_t4_g2_t

0x51ae,	// (0x00036c0b) list_medium_line_t3_right_iconx2_g1

0x50a9,	// (0x00036b06) list_medium_line_t3_right_iconx2_g2

0x51b6,	// (0x00036c13) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0004176b) list_medium_line_t3_right_iconx2_g

0x51be,	// (0x00036c1b) list_medium_line_t3_right_iconx2_t1

0x51ce,	// (0x00036c2b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00041772) list_medium_line_t3_right_iconx2_t

0x4810,	// (0x0003626d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4810,	// (0x0003626d) list_medium_line_x3_t4_g4_g1

0x481c,	// (0x00036279) list_medium_line_x3_t4_g4_g2_ParamLimits

0x481c,	// (0x00036279) list_medium_line_x3_t4_g4_g2

0x48a4,	// (0x00036301) list_medium_line_x3_t4_g4_g3_ParamLimits

0x48a4,	// (0x00036301) list_medium_line_x3_t4_g4_g3

0x51dc,	// (0x00036c39) list_medium_line_x3_t4_g4_g4_ParamLimits

0x51dc,	// (0x00036c39) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00041777) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00041777) list_medium_line_x3_t4_g4_g

0x51e8,	// (0x00036c45) list_medium_line_x3_t4_g4_t1_ParamLimits

0x51e8,	// (0x00036c45) list_medium_line_x3_t4_g4_t1

0x51ff,	// (0x00036c5c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x51ff,	// (0x00036c5c) list_medium_line_x3_t4_g4_t2

0x5214,	// (0x00036c71) list_medium_line_x3_t4_g4_t3_ParamLimits

0x5214,	// (0x00036c71) list_medium_line_x3_t4_g4_t3

0x5229,	// (0x00036c86) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5229,	// (0x00036c86) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00041780) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00041780) list_medium_line_x3_t4_g4_t

0x5246,	// (0x00036ca3) list_single_dyc_row_text_pane_t1_ParamLimits

0x5246,	// (0x00036ca3) list_single_dyc_row_text_pane_t1

0x527d,	// (0x00036cda) list_single_dyc_row_text_pane_t2_ParamLimits

0x527d,	// (0x00036cda) list_single_dyc_row_text_pane_t2

0x52ee,	// (0x00036d4b) list_single_dyc_row_text_pane_t3_ParamLimits

0x52ee,	// (0x00036d4b) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00041789) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00041789) list_single_dyc_row_text_pane_t

0x53b9,	// (0x00036e16) list_single_dyc_row_pane_g1_ParamLimits

0x53b9,	// (0x00036e16) list_single_dyc_row_pane_g1

0x53c5,	// (0x00036e22) list_single_dyc_row_pane_g2_ParamLimits

0x53c5,	// (0x00036e22) list_single_dyc_row_pane_g2

0x53d1,	// (0x00036e2e) list_single_dyc_row_pane_g3_ParamLimits

0x53d1,	// (0x00036e2e) list_single_dyc_row_pane_g3

0x53dd,	// (0x00036e3a) list_single_dyc_row_pane_g4_ParamLimits

0x53dd,	// (0x00036e3a) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00041796) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00041796) list_single_dyc_row_pane_g

0x53e9,	// (0x00036e46) list_single_dyc_row_text_pane_ParamLimits

0x53e9,	// (0x00036e46) list_single_dyc_row_text_pane

0x5ace,	// (0x0003752b) bg_sp_fs_scroll_pane

0x2e23,	// (0x00034880) thumb_sp_fs_scroll_pane

0x4cae,	// (0x0003670b) list_medium_line_g1_ParamLimits

0x4cae,	// (0x0003670b) list_medium_line_g1

0x5408,	// (0x00036e65) list_medium_line_t1_ParamLimits

0x5408,	// (0x00036e65) list_medium_line_t1

0x4810,	// (0x0003626d) list_medium_line_x2_g1_ParamLimits

0x4810,	// (0x0003626d) list_medium_line_x2_g1

0x481c,	// (0x00036279) list_medium_line_x2_g2_ParamLimits

0x481c,	// (0x00036279) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0004179f) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0004179f) list_medium_line_x2_g

0x541d,	// (0x00036e7a) list_medium_line_x2_t1_ParamLimits

0x541d,	// (0x00036e7a) list_medium_line_x2_t1

0x4810,	// (0x0003626d) list_medium_line_x3_g1_ParamLimits

0x4810,	// (0x0003626d) list_medium_line_x3_g1

0x481c,	// (0x00036279) list_medium_line_x3_g2_ParamLimits

0x481c,	// (0x00036279) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0004179f) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0004179f) list_medium_line_x3_g

0x541d,	// (0x00036e7a) list_medium_line_x3_t1_ParamLimits

0x541d,	// (0x00036e7a) list_medium_line_x3_t1

0x2e57,	// (0x000348b4) thumb_sp_fs_scroll_pane_g1

0x2e60,	// (0x000348bd) thumb_sp_fs_scroll_pane_g2

0x2e69,	// (0x000348c6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000417a4) thumb_sp_fs_scroll_pane_g

0x2e57,	// (0x000348b4) bg_sp_fs_scroll_pane_g1

0x2e60,	// (0x000348bd) bg_sp_fs_scroll_pane_g2

0x2e69,	// (0x000348c6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000417a4) bg_sp_fs_scroll_pane_g

0x4810,	// (0x0003626d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4810,	// (0x0003626d) list_medium_line_x2_t3_g4_g1

0x4898,	// (0x000362f5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x4898,	// (0x000362f5) list_medium_line_x2_t3_g4_g2

0x481c,	// (0x00036279) list_medium_line_x2_t3_g4_g3_ParamLimits

0x481c,	// (0x00036279) list_medium_line_x2_t3_g4_g3

0x4828,	// (0x00036285) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4828,	// (0x00036285) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x00040d04) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x00040d04) list_medium_line_x2_t3_g4_g

0x5433,	// (0x00036e90) list_medium_line_x2_t3_g4_t1_ParamLimits

0x5433,	// (0x00036e90) list_medium_line_x2_t3_g4_t1

0x5449,	// (0x00036ea6) list_medium_line_x2_t3_g4_t2_ParamLimits

0x5449,	// (0x00036ea6) list_medium_line_x2_t3_g4_t2

0x485b,	// (0x000362b8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x485b,	// (0x000362b8) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000417ab) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000417ab) list_medium_line_x2_t3_g4_t

0x4cae,	// (0x0003670b) list_medium_line_g2_g1_ParamLimits

0x4cae,	// (0x0003670b) list_medium_line_g2_g1

0x4cba,	// (0x00036717) list_medium_line_g2_g2_ParamLimits

0x4cba,	// (0x00036717) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x00041459) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x00041459) list_medium_line_g2_g

0x5462,	// (0x00036ebf) list_medium_line_g2_t1_ParamLimits

0x5462,	// (0x00036ebf) list_medium_line_g2_t1

0x4cae,	// (0x0003670b) list_medium_line_t3_g2_g1_ParamLimits

0x4cae,	// (0x0003670b) list_medium_line_t3_g2_g1

0x4cba,	// (0x00036717) list_medium_line_t3_g2_g2_ParamLimits

0x4cba,	// (0x00036717) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x00041459) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x00041459) list_medium_line_t3_g2_g

0x5477,	// (0x00036ed4) list_medium_line_t3_g2_t1_ParamLimits

0x5477,	// (0x00036ed4) list_medium_line_t3_g2_t1

0x5491,	// (0x00036eee) list_medium_line_t3_g2_t2_ParamLimits

0x5491,	// (0x00036eee) list_medium_line_t3_g2_t2

0x54a6,	// (0x00036f03) list_medium_line_t3_g2_t3_ParamLimits

0x54a6,	// (0x00036f03) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000417b2) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000417b2) list_medium_line_t3_g2_t

0x50a9,	// (0x00036b06) list_medium_line_right_icon_g1

0x54bc,	// (0x00036f19) list_medium_line_right_icon_t1

0x4cae,	// (0x0003670b) list_medium_line_t2_g1_ParamLimits

0x4cae,	// (0x0003670b) list_medium_line_t2_g1

0x54ca,	// (0x00036f27) list_medium_line_t2_t1_ParamLimits

0x54ca,	// (0x00036f27) list_medium_line_t2_t1

0x54e0,	// (0x00036f3d) list_medium_line_t2_t2_ParamLimits

0x54e0,	// (0x00036f3d) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000417b9) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000417b9) list_medium_line_t2_t

0x4cae,	// (0x0003670b) list_medium_line_t3_g1_ParamLimits

0x4cae,	// (0x0003670b) list_medium_line_t3_g1

0x54f2,	// (0x00036f4f) list_medium_line_t3_t1_ParamLimits

0x54f2,	// (0x00036f4f) list_medium_line_t3_t1

0x5509,	// (0x00036f66) list_medium_line_t3_t2_ParamLimits

0x5509,	// (0x00036f66) list_medium_line_t3_t2

0x551e,	// (0x00036f7b) list_medium_line_t3_t3_ParamLimits

0x551e,	// (0x00036f7b) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000417be) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000417be) list_medium_line_t3_t

0x4cae,	// (0x0003670b) list_medium_line_g3_g1_ParamLimits

0x4cae,	// (0x0003670b) list_medium_line_g3_g1

0x5530,	// (0x00036f8d) list_medium_line_g3_g2_ParamLimits

0x5530,	// (0x00036f8d) list_medium_line_g3_g2

0x4cba,	// (0x00036717) list_medium_line_g3_g3_ParamLimits

0x4cba,	// (0x00036717) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000417c5) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000417c5) list_medium_line_g3_g

0x553c,	// (0x00036f99) list_medium_line_g3_t1_ParamLimits

0x553c,	// (0x00036f99) list_medium_line_g3_t1

0x4cae,	// (0x0003670b) list_medium_line_t2_g3_g1_ParamLimits

0x4cae,	// (0x0003670b) list_medium_line_t2_g3_g1

0x5530,	// (0x00036f8d) list_medium_line_t2_g3_g2_ParamLimits

0x5530,	// (0x00036f8d) list_medium_line_t2_g3_g2

0x4cba,	// (0x00036717) list_medium_line_t2_g3_g3_ParamLimits

0x4cba,	// (0x00036717) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000417c5) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000417c5) list_medium_line_t2_g3_g

0x5551,	// (0x00036fae) list_medium_line_t2_g3_t1_ParamLimits

0x5551,	// (0x00036fae) list_medium_line_t2_g3_t1

0x556b,	// (0x00036fc8) list_medium_line_t2_g3_t2_ParamLimits

0x556b,	// (0x00036fc8) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000417cc) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000417cc) list_medium_line_t2_g3_t

0x4cae,	// (0x0003670b) list_medium_line_t3_g3_g1_ParamLimits

0x4cae,	// (0x0003670b) list_medium_line_t3_g3_g1

0x5530,	// (0x00036f8d) list_medium_line_t3_g3_g2_ParamLimits

0x5530,	// (0x00036f8d) list_medium_line_t3_g3_g2

0x4cba,	// (0x00036717) list_medium_line_t3_g3_g3_ParamLimits

0x4cba,	// (0x00036717) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000417c5) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000417c5) list_medium_line_t3_g3_g

0x5580,	// (0x00036fdd) list_medium_line_t3_g3_t1_ParamLimits

0x5580,	// (0x00036fdd) list_medium_line_t3_g3_t1

0x5594,	// (0x00036ff1) list_medium_line_t3_g3_t2_ParamLimits

0x5594,	// (0x00036ff1) list_medium_line_t3_g3_t2

0x55a6,	// (0x00037003) list_medium_line_t3_g3_t3_ParamLimits

0x55a6,	// (0x00037003) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000417d1) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000417d1) list_medium_line_t3_g3_t

0x51ae,	// (0x00036c0b) list_medium_line_right_iconx2_g1

0x50a9,	// (0x00036b06) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000417d8) list_medium_line_right_iconx2_g

0x55b8,	// (0x00037015) list_medium_line_right_iconx2_t1

0x51ae,	// (0x00036c0b) list_medium_line_t2_right_iconx2_g1

0x50a9,	// (0x00036b06) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000417d8) list_medium_line_t2_right_iconx2_g

0x55c6,	// (0x00037023) list_medium_line_t2_right_iconx2_t1

0x55d6,	// (0x00037033) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000417dd) list_medium_line_t2_right_iconx2_t

0x55e4,	// (0x00037041) list_medium_line_x4_t4_t1

0x55f2,	// (0x0003704f) list_medium_line_x4_t4_t2

0x5600,	// (0x0003705d) list_medium_line_x4_t4_t3

0x560e,	// (0x0003706b) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000417e2) list_medium_line_x4_t4_t

0xc308,	// (0x0003dd65) tport_appsw_pane_ParamLimits

0xc308,	// (0x0003dd65) tport_appsw_pane

0xc314,	// (0x0003dd71) tport_contact_pane_ParamLimits

0xc314,	// (0x0003dd71) tport_contact_pane

0xc322,	// (0x0003dd7f) tport_listscroll_pane_ParamLimits

0xc322,	// (0x0003dd7f) tport_listscroll_pane

0xc330,	// (0x0003dd8d) cell_tport_appsw_pane_ParamLimits

0xc330,	// (0x0003dd8d) cell_tport_appsw_pane

0x0fb6,	// (0x00032a13) tport_appsw_pane_g1_ParamLimits

0x0fb6,	// (0x00032a13) tport_appsw_pane_g1

0x2ec4,	// (0x00034921) tport_contact_pane_g1

0x2ecd,	// (0x0003492a) tport_contact_pane_t1

0x2edb,	// (0x00034938) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000417eb) tport_contact_pane_t

0x2ee9,	// (0x00034946) list_tport_pane

0xd82e,	// (0x0003f28b) scroll_pane_cp_030

0x2efa,	// (0x00034957) cell_tport_appsw_pane_g1

0x2f0a,	// (0x00034967) cell_tport_appsw_pane_t1

0x2f18,	// (0x00034975) grid_highlight_pane_cp019

0xc357,	// (0x0003ddb4) list_tport_double_graphic_pane_ParamLimits

0xc357,	// (0x0003ddb4) list_tport_double_graphic_pane

0xf077,	// (0x00040ad4) list_highlight_pane_cp023_ParamLimits

0xf077,	// (0x00040ad4) list_highlight_pane_cp023

0xc364,	// (0x0003ddc1) list_tport_double_graphic_pane_g1_ParamLimits

0xc364,	// (0x0003ddc1) list_tport_double_graphic_pane_g1

0xc371,	// (0x0003ddce) list_tport_double_graphic_pane_t1_ParamLimits

0xc371,	// (0x0003ddce) list_tport_double_graphic_pane_t1

0xc386,	// (0x0003dde3) list_tport_double_graphic_pane_t2_ParamLimits

0xc386,	// (0x0003dde3) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000417f7) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000417f7) list_tport_double_graphic_pane_t

0x5ace,	// (0x0003752b) main_cale_note_pane

0xa8c1,	// (0x0003c31e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa8c1,	// (0x0003c31e) cell_vitu2_function_top_wide_pane_cp01

0xbe42,	// (0x0003d89f) wait_bar_pane_cp05_ParamLimits

0xf077,	// (0x00040ad4) listscroll_cmail_pane

0x2f20,	// (0x0003497d) list_cmail_pane

0xc398,	// (0x0003ddf5) list_cmail_body_pane

0xc398,	// (0x0003ddf5) list_single_cmail_header_caption_pane

0xc3b1,	// (0x0003de0e) list_single_cmail_header_detail_pane_ParamLimits

0xc3b1,	// (0x0003de0e) list_single_cmail_header_detail_pane

0x2f3c,	// (0x00034999) list_single_cmail_header_caption_pane_t1

0x561c,	// (0x00037079) list_single_cmail_header_detail_pane_g1_ParamLimits

0x561c,	// (0x00037079) list_single_cmail_header_detail_pane_g1

0x5632,	// (0x0003708f) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5632,	// (0x0003708f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000417fc) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000417fc) list_single_cmail_header_detail_pane_g

0x563e,	// (0x0003709b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x563e,	// (0x0003709b) list_single_cmail_header_detail_pane_t1

0x569e,	// (0x000370fb) list_single_cmail_header_editor_pane_bg_ParamLimits

0x569e,	// (0x000370fb) list_single_cmail_header_editor_pane_bg

0x2fa7,	// (0x00034a04) list_cmail_body_pane_g1

0x2fb0,	// (0x00034a0d) list_cmail_body_pane_t1

0x1ac8,	// (0x00033525) list_single_cmail_header_editor_pane_bg_g1

0xdbb1,	// (0x0003f60e) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1ad8,	// (0x00033535) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1ad0,	// (0x0003352d) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1d51,	// (0x000337ae) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1af8,	// (0x00033555) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1ae8,	// (0x00033545) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1af0,	// (0x0003354d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xdb91,	// (0x0003f5ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc3dc,	// (0x0003de39) calenote_gesture_pane_ParamLimits

0xc3dc,	// (0x0003de39) calenote_gesture_pane

0xc3f4,	// (0x0003de51) calenote_window_pane_ParamLimits

0xc3f4,	// (0x0003de51) calenote_window_pane

0x2fbe,	// (0x00034a1b) popup_note_window_cp01

0xc40c,	// (0x0003de69) calenote_swipe_1_pane_ParamLimits

0xc40c,	// (0x0003de69) calenote_swipe_1_pane

0xc15b,	// (0x0003dbb8) calenote_swipe_2_pane_ParamLimits

0xc15b,	// (0x0003dbb8) calenote_swipe_2_pane

0x2c56,	// (0x000346b3) calenote_swipe_1_pane_g1_ParamLimits

0x2c56,	// (0x000346b3) calenote_swipe_1_pane_g1

0x2c63,	// (0x000346c0) calenote_swipe_1_pane_g2_ParamLimits

0x2c63,	// (0x000346c0) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0004171c) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0004171c) calenote_swipe_1_pane_g

0x2fd0,	// (0x00034a2d) calenote_swipe_1_pane_t1_ParamLimits

0x2fd0,	// (0x00034a2d) calenote_swipe_1_pane_t1

0x2c56,	// (0x000346b3) calenote_swipe_2_pane_g1_ParamLimits

0x2c56,	// (0x000346b3) calenote_swipe_2_pane_g1

0x2fef,	// (0x00034a4c) calenote_swipe_2_pane_g2_ParamLimits

0x2fef,	// (0x00034a4c) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00041808) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00041808) calenote_swipe_2_pane_g

0x2ffb,	// (0x00034a58) calenote_swipe_2_pane_t1_ParamLimits

0x2ffb,	// (0x00034a58) calenote_swipe_2_pane_t1

0x5ace,	// (0x0003752b) main_mup_navstr_pane

0x9750,	// (0x0003b1ad) main_mup3_pane_t7_ParamLimits

0x9750,	// (0x0003b1ad) main_mup3_pane_t7

0xa0d1,	// (0x0003bb2e) main_mp4_pane_g6_ParamLimits

0xa0d1,	// (0x0003bb2e) main_mp4_pane_g6

0xa41d,	// (0x0003be7a) main_image3_pane_t4_ParamLimits

0xa41d,	// (0x0003be7a) main_image3_pane_t4

0xc41f,	// (0x0003de7c) popup_navstr_preview_pane_ParamLimits

0xc41f,	// (0x0003de7c) popup_navstr_preview_pane

0xc42b,	// (0x0003de88) scroll_navstr_pane_ParamLimits

0xc42b,	// (0x0003de88) scroll_navstr_pane

0x5ace,	// (0x0003752b) bg_popup_preview_window_pane_cp04

0x3022,	// (0x00034a7f) popup_navstr_preview_pane_t1

0xc437,	// (0x0003de94) scroll_navstr_pane_g1_ParamLimits

0xc437,	// (0x0003de94) scroll_navstr_pane_g1

0xc444,	// (0x0003dea1) scroll_navstr_pane_t1_ParamLimits

0xc444,	// (0x0003dea1) scroll_navstr_pane_t1

0x2fc7,	// (0x00034a24) bg_button_pane_cp014

0x2fc7,	// (0x00034a24) bg_button_pane_cp030

0x504f,	// (0x00036aac) list_double_fisheye_pane_g4_ParamLimits

0x504f,	// (0x00036aac) list_double_fisheye_pane_g4

0x505b,	// (0x00036ab8) list_double_fisheye_pane_g5_ParamLimits

0x505b,	// (0x00036ab8) list_double_fisheye_pane_g5

0x2f30,	// (0x0003498d) sp_fs_scroll_pane_cp03

0x2d34,	// (0x00034791) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2d40,	// (0x0003479d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x00041739) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc23c,	// (0x0003dc99) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x2f28,	// (0x00034985) sp_fs_scroll_pane_cp02

0xd840,	// (0x0003f29d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd840,	// (0x0003f29d) popup_sp_fs_calendar_preview_list_single_pane

0x5ace,	// (0x0003752b) main_cam6_pano_pane

0xf077,	// (0x00040ad4) main_mup3_pane_ParamLimits

0x5ace,	// (0x0003752b) main_phacti_pane

0xbd35,	// (0x0003d792) bg_button_pane_cp11

0xbd4d,	// (0x0003d7aa) main_mobtv_info_pane_g2_ParamLimits

0xbd4d,	// (0x0003d7aa) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x00041699) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x00041699) main_mobtv_info_pane_g

0xbed9,	// (0x0003d936) sc_clock_pane_t5_ParamLimits

0xbed9,	// (0x0003d936) sc_clock_pane_t5

0xbf66,	// (0x0003d9c3) main_radioblah_pane_g1_ParamLimits

0x2b99,	// (0x000345f6) main_radioblah_pane_t3_ParamLimits

0x2b99,	// (0x000345f6) main_radioblah_pane_t3

0x2bb1,	// (0x0003460e) main_radioblah_pane_t4_ParamLimits

0x2bb1,	// (0x0003460e) main_radioblah_pane_t4

0xbf84,	// (0x0003d9e1) main_radioblah_text_pane_ParamLimits

0xbf84,	// (0x0003d9e1) main_radioblah_text_pane

0xbf91,	// (0x0003d9ee) main_radioblah_info_pane_g1_ParamLimits

0xc01e,	// (0x0003da7b) main_radioblah_info_pane_t4_ParamLimits

0xc01e,	// (0x0003da7b) main_radioblah_info_pane_t4

0xf077,	// (0x00040ad4) main_sp_fs_calendar_pane

0xc456,	// (0x0003deb3) main_phacti_pane_g1

0xc45e,	// (0x0003debb) phacti_note_pane_ParamLimits

0xc45e,	// (0x0003debb) phacti_note_pane

0x3039,	// (0x00034a96) phacti_term_pane_ParamLimits

0x3039,	// (0x00034a96) phacti_term_pane

0x304e,	// (0x00034aab) phacti_note_pane_t1_ParamLimits

0x304e,	// (0x00034aab) phacti_note_pane_t1

0x56b5,	// (0x00037112) phacti_term_pane_g1

0x56bd,	// (0x0003711a) phacti_term_pane_t1_ParamLimits

0x56bd,	// (0x0003711a) phacti_term_pane_t1

0x3097,	// (0x00034af4) popup_sp_fs_calendar_preview_list_single_pane_g1

0x309f,	// (0x00034afc) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00041812) popup_sp_fs_calendar_preview_list_single_pane_g

0x30a7,	// (0x00034b04) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x30a7,	// (0x00034b04) popup_sp_fs_calendar_preview_list_single_pane_t1

0x30bd,	// (0x00034b1a) aid_popup_sp_fs_bg_corner_pane

0x0cae,	// (0x0003270b) popup_sp_fs_calendar_preview_bg_pane_g1

0x5ace,	// (0x0003752b) popup_sp_fs_calendar_preview_bg_pane

0x30c5,	// (0x00034b22) popup_sp_fs_calendar_preview_list_pane

0x079a,	// (0x000321f7) bg_main_sp_fs_cale_pane_ParamLimits

0x079a,	// (0x000321f7) bg_main_sp_fs_cale_pane

0x56e7,	// (0x00037144) listscroll_cale_mrui_pane_ParamLimits

0x56e7,	// (0x00037144) listscroll_cale_mrui_pane

0x56fc,	// (0x00037159) listscroll_sp_fs_schedule_track_pane

0x5705,	// (0x00037162) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5705,	// (0x00037162) main_sp_fs_ctrlbar_pane_cp01

0x3107,	// (0x00034b64) main_sp_fs_ribbon_pane

0x5718,	// (0x00037175) popup_sp_fs_cale_preview_window

0x351d,	// (0x00034f7a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x351d,	// (0x00034f7a) list_single_sp_fs_schedule_track_pane

0x388e,	// (0x000352eb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x388e,	// (0x000352eb) bg_sp_fs_highlight_list_pane_cp03

0xc4b5,	// (0x0003df12) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc4b5,	// (0x0003df12) list_single_sp_fs_schedule_track_pane_g1

0xc4c1,	// (0x0003df1e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc4c1,	// (0x0003df1e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00041817) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00041817) list_single_sp_fs_schedule_track_pane_g

0xc4cd,	// (0x0003df2a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc4cd,	// (0x0003df2a) list_single_sp_fs_schedule_track_pane_t1

0xc4e5,	// (0x0003df42) sp_fs_schedule_track_pane_ParamLimits

0xc4e5,	// (0x0003df42) sp_fs_schedule_track_pane

0x3121,	// (0x00034b7e) sp_fs_schedule_track_pane_g1

0x3129,	// (0x00034b86) sp_fs_schedule_track_pane_g2

0x3131,	// (0x00034b8e) sp_fs_schedule_track_pane_g3

0x3139,	// (0x00034b96) sp_fs_schedule_track_pane_g4

0x3141,	// (0x00034b9e) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0004181c) sp_fs_schedule_track_pane_g

0x1ac8,	// (0x00033525) bg_sp_fs_schedule_viewer_highlight_g1

0xdbb1,	// (0x0003f60e) bg_sp_fs_schedule_viewer_highlight_g2

0x1ad0,	// (0x0003352d) bg_sp_fs_schedule_viewer_highlight_g3

0x1ad8,	// (0x00033535) bg_sp_fs_schedule_viewer_highlight_g4

0x1d51,	// (0x000337ae) bg_sp_fs_schedule_viewer_highlight_g5

0x1ae8,	// (0x00033545) bg_sp_fs_schedule_viewer_highlight_g6

0x1af0,	// (0x0003354d) bg_sp_fs_schedule_viewer_highlight_g7

0x1af8,	// (0x00033555) bg_sp_fs_schedule_viewer_highlight_g8

0xdb91,	// (0x0003f5ee) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00041827) bg_sp_fs_schedule_viewer_highlight_g

0x5ace,	// (0x0003752b) bg_main_sp_fs_ribbon_pane

0xa64c,	// (0x0003c0a9) main_sp_fs_ribbon_pane_g1

0x3149,	// (0x00034ba6) main_sp_fs_ribbon_pane_t1

0xc4f5,	// (0x0003df52) main_sp_fs_ribbon_pane_t2

0x3158,	// (0x00034bb5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0004183a) main_sp_fs_ribbon_pane_t

0x3167,	// (0x00034bc4) main_sp_fs_ribbon_scheduler_pane

0x316f,	// (0x00034bcc) bg_main_sp_fs_ribbon_pane_g1

0x3178,	// (0x00034bd5) bg_main_sp_fs_ribbon_pane_g2

0x3181,	// (0x00034bde) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00041841) bg_main_sp_fs_ribbon_pane_g

0x3189,	// (0x00034be6) main_sp_fs_ribbon_scheduler_pane_g1

0x3192,	// (0x00034bef) main_sp_fs_ribbon_scheduler_pane_g2

0x319b,	// (0x00034bf8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00041848) main_sp_fs_ribbon_scheduler_pane_g

0x31a4,	// (0x00034c01) list_cale_mrui_pane

0xc504,	// (0x0003df61) sp_fs_scroll_pane_cp07_ParamLimits

0xc504,	// (0x0003df61) sp_fs_scroll_pane_cp07

0xc51c,	// (0x0003df79) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc51c,	// (0x0003df79) bg_sp_fs_schedule_viewer_highlight

0x31b1,	// (0x00034c0e) list_single_sp_fs_schedule_track_pane_cp01

0x31b9,	// (0x00034c16) list_sp_fs_schedule_track_pane

0x31c1,	// (0x00034c1e) sp_fs_scroll_pane_cp06_ParamLimits

0x31c1,	// (0x00034c1e) sp_fs_scroll_pane_cp06

0x0cae,	// (0x0003270b) bgmain_sp_fs_calendar_pane_g1

0x5727,	// (0x00037184) list_single_cale_mrui_pane_ParamLimits

0x5727,	// (0x00037184) list_single_cale_mrui_pane

0x5749,	// (0x000371a6) list_single_cale_mrui_row_pane_ParamLimits

0x5749,	// (0x000371a6) list_single_cale_mrui_row_pane

0x575f,	// (0x000371bc) list_single_cale_mrui_row_pane_g1_ParamLimits

0x575f,	// (0x000371bc) list_single_cale_mrui_row_pane_g1

0x5797,	// (0x000371f4) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5797,	// (0x000371f4) list_single_cale_mrui_row_pane_t1

0x57a9,	// (0x00037206) list_single_cale_mrui_row_pane_t2_ParamLimits

0x57a9,	// (0x00037206) list_single_cale_mrui_row_pane_t2

0x580f,	// (0x0003726c) list_single_cale_mrui_row_pane_t3_ParamLimits

0x580f,	// (0x0003726c) list_single_cale_mrui_row_pane_t3

0x583e,	// (0x0003729b) list_single_cale_mrui_row_pane_t4_ParamLimits

0x583e,	// (0x0003729b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00041856) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00041856) list_single_cale_mrui_row_pane_t

0x586d,	// (0x000372ca) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x586d,	// (0x000372ca) list_single_cmail_header_editor_pane_bg_cp01

0x5891,	// (0x000372ee) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5891,	// (0x000372ee) list_single_cmail_header_editor_pane_bg_cp02

0xc529,	// (0x0003df86) main_radioblah_text_pane_t1_ParamLimits

0xc529,	// (0x0003df86) main_radioblah_text_pane_t1

0x31f6,	// (0x00034c53) cam6_indi_pane_cp01

0x31fe,	// (0x00034c5b) cam6_mode_pane_cp01

0x3206,	// (0x00034c63) cam6_pano_pane

0x320f,	// (0x00034c6c) cam6_zoom_pane_cp01

0x3217,	// (0x00034c74) cam6_pano_image_pane

0x3220,	// (0x00034c7d) cam6_pano_pane_g1

0x2900,	// (0x0003435d) cam6_pano_pane_g2

0x3229,	// (0x00034c86) cam6_pano_pane_g3

0x3232,	// (0x00034c8f) cam6_pano_pane_g4

0x129b,	// (0x00032cf8) cam6_pano_pane_g5

0x323b,	// (0x00034c98) cam6_pano_pane_g6

0x3243,	// (0x00034ca0) cam6_pano_pane_g7

0x324b,	// (0x00034ca8) cam6_pano_pane_g8

0x3254,	// (0x00034cb1) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0004185f) cam6_pano_pane_g

0x5ace,	// (0x0003752b) main_browser_tag_pane

0x301a,	// (0x00034a77) grid_navstr_albumart_pane

0x325d,	// (0x00034cba) cell_navstr_albumart_pane_ParamLimits

0x325d,	// (0x00034cba) cell_navstr_albumart_pane

0xe487,	// (0x0003fee4) cell_navstr_albumart_pane_g1

0x056b,	// (0x00031fc8) cell_navstr_albumart_pane_g2

0x057b,	// (0x00031fd8) cell_navstr_albumart_pane_g3

0x0573,	// (0x00031fd0) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00041872) cell_navstr_albumart_pane_g

0xc542,	// (0x0003df9f) bt_list_pane_ParamLimits

0xc542,	// (0x0003df9f) bt_list_pane

0xc557,	// (0x0003dfb4) bt_list_pane_t1

0xc566,	// (0x0003dfc3) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0004187b) bt_list_pane_t

0x5ace,	// (0x0003752b) main_cale_prevew_pane

0xc575,	// (0x0003dfd2) popup_cale_preview_window_ParamLimits

0xc575,	// (0x0003dfd2) popup_cale_preview_window

0xf077,	// (0x00040ad4) bg_popup_preview_window_pane_cp05_ParamLimits

0xf077,	// (0x00040ad4) bg_popup_preview_window_pane_cp05

0x3274,	// (0x00034cd1) list_cale_preview_pane_ParamLimits

0x3274,	// (0x00034cd1) list_cale_preview_pane

0xc58a,	// (0x0003dfe7) list_double_cale_preview_pane_ParamLimits

0xc58a,	// (0x0003dfe7) list_double_cale_preview_pane

0xc59b,	// (0x0003dff8) list_single_cale_preview_pane_ParamLimits

0xc59b,	// (0x0003dff8) list_single_cale_preview_pane

0xc5af,	// (0x0003e00c) list_single_cale_preview_pane_g1

0xc5b7,	// (0x0003e014) list_single_cale_preview_pane_t1_ParamLimits

0xc5b7,	// (0x0003e014) list_single_cale_preview_pane_t1

0x3280,	// (0x00034cdd) list_double_cale_preview_pane_g1

0x3288,	// (0x00034ce5) list_double_cale_preview_pane_t1_ParamLimits

0x3288,	// (0x00034ce5) list_double_cale_preview_pane_t1

0xc5cc,	// (0x0003e029) list_double_cale_preview_pane_t2_ParamLimits

0xc5cc,	// (0x0003e029) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00041880) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00041880) list_double_cale_preview_pane_t

0x5ace,	// (0x0003752b) main_ezdial_pane

0xf077,	// (0x00040ad4) main_sp_fs_email_pane_ParamLimits

0xc1a5,	// (0x0003dc02) cmail_ddmenu_btn01_pane_ParamLimits

0xc1a5,	// (0x0003dc02) cmail_ddmenu_btn01_pane

0xc1c2,	// (0x0003dc1f) cmail_ddmenu_btn02_pane_ParamLimits

0xc1c2,	// (0x0003dc1f) cmail_ddmenu_btn02_pane

0xc1e0,	// (0x0003dc3d) cmail_ddmenu_btn03_pane_ParamLimits

0xc1e0,	// (0x0003dc3d) cmail_ddmenu_btn03_pane

0xc284,	// (0x0003dce1) main_sp_fs_ctrlbar_pane_ParamLimits

0xc298,	// (0x0003dcf5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc398,	// (0x0003ddf5) list_cmail_body_pane_ParamLimits

0x2f4a,	// (0x000349a7) bg_button_pane_cp12

0x2f5f,	// (0x000349bc) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2f5f,	// (0x000349bc) list_single_cmail_header_detail_pane_g3

0x567a,	// (0x000370d7) list_single_cmail_header_detail_pane_t2_ParamLimits

0x567a,	// (0x000370d7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00041803) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00041803) list_single_cmail_header_detail_pane_t

0x56d2,	// (0x0003712f) phacti_term_pane_t2_ParamLimits

0x56d2,	// (0x0003712f) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0004180d) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0004180d) phacti_term_pane_t

0x329d,	// (0x00034cfa) aid_size_list_single_double

0xc5e4,	// (0x0003e041) popup_ezdial_listscroll_window

0xc5fd,	// (0x0003e05a) popup_number_entry_window_cp01

0xd900,	// (0x0003f35d) bg_popup_call_pane_cp09

0x32a9,	// (0x00034d06) ezdial_list_pane

0x32b1,	// (0x00034d0e) scroll_pane_cp23

0x0a9b,	// (0x000324f8) bg_button_pane_cp028_ParamLimits

0x0a9b,	// (0x000324f8) bg_button_pane_cp028

0xc609,	// (0x0003e066) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc609,	// (0x0003e066) cmail_ddmenu_btn01_pane_g1

0xc619,	// (0x0003e076) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc619,	// (0x0003e076) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00041885) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00041885) cmail_ddmenu_btn01_pane_g

0x32b9,	// (0x00034d16) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x32b9,	// (0x00034d16) cmail_ddmenu_btn01_pane_t1

0x079a,	// (0x000321f7) bg_button_pane_cp029_ParamLimits

0x079a,	// (0x000321f7) bg_button_pane_cp029

0xc619,	// (0x0003e076) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc619,	// (0x0003e076) cmail_ddmenu_btn02_pane_g1

0xc631,	// (0x0003e08e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc631,	// (0x0003e08e) cmail_ddmenu_btn02_pane_t1

0x388e,	// (0x000352eb) bg_button_pane_cp031_ParamLimits

0x388e,	// (0x000352eb) bg_button_pane_cp031

0xc619,	// (0x0003e076) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc619,	// (0x0003e076) cmail_ddmenu_btn03_pane_g1

0xc631,	// (0x0003e08e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc631,	// (0x0003e08e) cmail_ddmenu_btn03_pane_t1

0xa2da,	// (0x0003bd37) cell_dialer2_keypad_pane_t1_ParamLimits

0xa2f4,	// (0x0003bd51) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa2f4,	// (0x0003bd51) cell_dialer2_keypad_pane_t1_copy1

0xbbc2,	// (0x0003d61f) ncimui_group_button_pane

0xf077,	// (0x00040ad4) main_sp_fs_calendar_pane_ParamLimits

0xc398,	// (0x0003ddf5) list_single_cmail_header_caption_pane_ParamLimits

0x2156,	// (0x00033bb3) aid_recal_txt_sm_pane

0x5ace,	// (0x0003752b) mian_recal_day_pane

0x5718,	// (0x00037175) popup_sp_fs_cale_preview_window_ParamLimits

0x32ce,	// (0x00034d2b) list_recal_day_pane

0x58ca,	// (0x00037327) list_single_recal_day_pane_ParamLimits

0x58ca,	// (0x00037327) list_single_recal_day_pane

0x3322,	// (0x00034d7f) list_single_recal_day_pane_g1_ParamLimits

0x3322,	// (0x00034d7f) list_single_recal_day_pane_g1

0x58dc,	// (0x00037339) list_single_recal_day_pane_g2_ParamLimits

0x58dc,	// (0x00037339) list_single_recal_day_pane_g2

0x58e8,	// (0x00037345) list_single_recal_day_pane_g3_ParamLimits

0x58e8,	// (0x00037345) list_single_recal_day_pane_g3

0x58f4,	// (0x00037351) list_single_recal_day_pane_g4_ParamLimits

0x58f4,	// (0x00037351) list_single_recal_day_pane_g4

0x5900,	// (0x0003735d) list_single_recal_day_pane_g5_ParamLimits

0x5900,	// (0x0003735d) list_single_recal_day_pane_g5

0x5914,	// (0x00037371) list_single_recal_day_pane_g6_ParamLimits

0x5914,	// (0x00037371) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00041894) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00041894) list_single_recal_day_pane_g

0x592b,	// (0x00037388) list_single_recal_day_pane_t1

0x593d,	// (0x0003739a) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0004189f) list_single_recal_day_pane_t

0xc655,	// (0x0003e0b2) ncimui_query_button_pane_ParamLimits

0xc655,	// (0x0003e0b2) ncimui_query_button_pane

0xc665,	// (0x0003e0c2) ncimui_query_button_pane_t1_ParamLimits

0xc665,	// (0x0003e0c2) ncimui_query_button_pane_t1

0x336c,	// (0x00034dc9) ncimui_query_button_pane_t2_ParamLimits

0x336c,	// (0x00034dc9) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000418a4) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000418a4) ncimui_query_button_pane_t

0xc678,	// (0x0003e0d5) query_button_pane_ParamLimits

0xc678,	// (0x0003e0d5) query_button_pane

0x5ace,	// (0x0003752b) bg_button_pane_cp0028

0x337f,	// (0x00034ddc) query_button_pane_t1

0x8885,	// (0x0003a2e2) main_tport_pane_ParamLimits

0xc2e4,	// (0x0003dd41) bg_popup_window_pane_cp01_ParamLimits

0xc2e4,	// (0x0003dd41) bg_popup_window_pane_cp01

0xc2f0,	// (0x0003dd4d) heading_pane_cp08_ParamLimits

0xc2f0,	// (0x0003dd4d) heading_pane_cp08

0xc2fc,	// (0x0003dd59) heading_pane_cp07_ParamLimits

0xc2fc,	// (0x0003dd59) heading_pane_cp07

0x2efa,	// (0x00034957) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000417f0) cell_tport_appsw_pane_g

0x4a36,	// (0x00036493) input_candi_list_open_g1

0xdd5e,	// (0x0003f7bb) list_cale_time_pane_g6_ParamLimits

0xdd5e,	// (0x0003f7bb) list_cale_time_pane_g6

0x926a,	// (0x0003acc7) aid_size_touch_calib_1_ParamLimits

0x926a,	// (0x0003acc7) aid_size_touch_calib_1

0x9276,	// (0x0003acd3) aid_size_touch_calib_2_ParamLimits

0x9276,	// (0x0003acd3) aid_size_touch_calib_2

0x9282,	// (0x0003acdf) aid_size_touch_calib_3_ParamLimits

0x9282,	// (0x0003acdf) aid_size_touch_calib_3

0x9290,	// (0x0003aced) aid_size_touch_calib_4_ParamLimits

0x9290,	// (0x0003aced) aid_size_touch_calib_4

0x929e,	// (0x0003acfb) main_touch_calib_button_group_pane_ParamLimits

0x929e,	// (0x0003acfb) main_touch_calib_button_group_pane

0x92ac,	// (0x0003ad09) main_touch_calib_pane_g1_ParamLimits

0x92b8,	// (0x0003ad15) main_touch_calib_pane_g2_ParamLimits

0x92c4,	// (0x0003ad21) main_touch_calib_pane_g3_ParamLimits

0x92d0,	// (0x0003ad2d) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x000411a6) main_touch_calib_pane_g_ParamLimits

0x92dc,	// (0x0003ad39) main_touch_calib_pane_t1_ParamLimits

0x92f1,	// (0x0003ad4e) main_touch_calib_pane_t2_ParamLimits

0x9306,	// (0x0003ad63) main_touch_calib_pane_t3_ParamLimits

0x9318,	// (0x0003ad75) main_touch_calib_pane_t4_ParamLimits

0x932a,	// (0x0003ad87) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x000411af) main_touch_calib_pane_t_ParamLimits

0x1051,	// (0x00032aae) list_single_fp_cale_pane_g3_ParamLimits

0x1051,	// (0x00032aae) list_single_fp_cale_pane_g3

0xf077,	// (0x00040ad4) bg_button_pane_cp012_ParamLimits

0xf077,	// (0x00040ad4) bg_vkb2_func_pane_cp03_ParamLimits

0xafba,	// (0x0003ca17) cell_vitu2_function_top_pane_g1_ParamLimits

0xf077,	// (0x00040ad4) bg_vkb2_func_pane_cp04_ParamLimits

0xbb4e,	// (0x0003d5ab) main_ncimui_button_group_pane_ParamLimits

0xbb4e,	// (0x0003d5ab) main_ncimui_button_group_pane

0xbbb0,	// (0x0003d60d) main_ncimui_pane_t3_ParamLimits

0xbbb0,	// (0x0003d60d) main_ncimui_pane_t3

0x3030,	// (0x00034a8d) phacti_button_group_pane

0x329d,	// (0x00034cfa) aid_size_list_single_double_ParamLimits

0xc5e4,	// (0x0003e041) popup_ezdial_listscroll_window_ParamLimits

0xc5fd,	// (0x0003e05a) popup_number_entry_window_cp01_ParamLimits

0xc685,	// (0x0003e0e2) phacti_button_pane_ParamLimits

0xc685,	// (0x0003e0e2) phacti_button_pane

0x5ace,	// (0x0003752b) bg_button_pane_cp14

0x338d,	// (0x00034dea) phacti_button_pane_t1

0xc694,	// (0x0003e0f1) main_touch_calib_button_pane_ParamLimits

0xc694,	// (0x0003e0f1) main_touch_calib_button_pane

0xd729,	// (0x0003f186) bg_button_pane_cp18_ParamLimits

0xd729,	// (0x0003f186) bg_button_pane_cp18

0xc6a5,	// (0x0003e102) main_touch_calib_button_pane_t1_ParamLimits

0xc6a5,	// (0x0003e102) main_touch_calib_button_pane_t1

0xc6bb,	// (0x0003e118) main_touch_calib_button_pane_t2_ParamLimits

0xc6bb,	// (0x0003e118) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000418a9) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000418a9) main_touch_calib_button_pane_t

0x5ace,	// (0x0003752b) cell_ncimui_button_pane

0x5ace,	// (0x0003752b) bg_button_pane_cp032

0x339b,	// (0x00034df8) cell_ncimui_button_pane_t1

0xa346,	// (0x0003bda3) image3_infobar_pane_ParamLimits

0xa346,	// (0x0003bda3) image3_infobar_pane

0xbef9,	// (0x0003d956) fs_bigclock_status_pane_ParamLimits

0xbef9,	// (0x0003d956) fs_bigclock_status_pane

0xbf06,	// (0x0003d963) main_fs_bigclock_clock_pane_ParamLimits

0xbf06,	// (0x0003d963) main_fs_bigclock_clock_pane

0xbf1e,	// (0x0003d97b) main_fs_bigclock_indi_pane_ParamLimits

0xbf1e,	// (0x0003d97b) main_fs_bigclock_indi_pane

0xbf3e,	// (0x0003d99b) main_fs_bigclock_swipe_pane_ParamLimits

0xbf3e,	// (0x0003d99b) main_fs_bigclock_swipe_pane

0x5ace,	// (0x0003752b) main_fs_clock_dumped_data

0x2a0d,	// (0x0003446a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2a0d,	// (0x0003446a) list_single_fs_bigclock_indicator_pane_g1

0x2a27,	// (0x00034484) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2a27,	// (0x00034484) list_single_fs_bigclock_indicator_pane_g2

0x2a41,	// (0x0003449e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2a41,	// (0x0003449e) list_single_fs_bigclock_indicator_pane_g3

0x2a5b,	// (0x000344b8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2a5b,	// (0x000344b8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x000416cd) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x000416cd) list_single_fs_bigclock_indicator_pane_g

0x2a84,	// (0x000344e1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2a84,	// (0x000344e1) list_single_fs_bigclock_indicator_pane_t1

0x2aac,	// (0x00034509) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2aac,	// (0x00034509) list_single_fs_bigclock_indicator_pane_t2

0x2ad4,	// (0x00034531) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2ad4,	// (0x00034531) list_single_fs_bigclock_indicator_pane_t3

0x2afc,	// (0x00034559) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2afc,	// (0x00034559) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x000416d8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x000416d8) list_single_fs_bigclock_indicator_pane_t

0x33a9,	// (0x00034e06) image3_infobar_fav_pane_ParamLimits

0x33a9,	// (0x00034e06) image3_infobar_fav_pane

0x33b9,	// (0x00034e16) image3_infobar_loc_pane_ParamLimits

0x33b9,	// (0x00034e16) image3_infobar_loc_pane

0x33cd,	// (0x00034e2a) image3_infobar_time_pane_ParamLimits

0x33cd,	// (0x00034e2a) image3_infobar_time_pane

0x0cae,	// (0x0003270b) image3_infobar_time_pane_g1

0x33dd,	// (0x00034e3a) image3_infobar_time_pane_t1

0x0cae,	// (0x0003270b) image3_infobar_loc_pane_g1

0x33eb,	// (0x00034e48) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000418ae) image3_infobar_loc_pane_g

0x33f3,	// (0x00034e50) image3_infobar_loc_pane_t1

0x0cae,	// (0x0003270b) image3_infobar_fav_pane_g1

0x3401,	// (0x00034e5e) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000418b3) image3_infobar_fav_pane_g

0x3409,	// (0x00034e66) fs_bigclock_status_battery_pane

0x3412,	// (0x00034e6f) fs_bigclock_status_signal_pane

0x341b,	// (0x00034e78) fs_bigclock_status_title_pane

0x3424,	// (0x00034e81) fs_bigclock_status_signal_pane_g1

0x342d,	// (0x00034e8a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000418b8) fs_bigclock_status_signal_pane_g

0x3435,	// (0x00034e92) fs_bigclock_status_battery_pane_g1

0x343e,	// (0x00034e9b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000418bd) fs_bigclock_status_battery_pane_g

0x3446,	// (0x00034ea3) fs_bigclock_status_title_pane_t1

0x0fb6,	// (0x00032a13) main_fs_bigclock_clock_pane_g1

0xc6d9,	// (0x0003e136) main_fs_bigclock_clock_pane_g2

0xc6e6,	// (0x0003e143) main_fs_bigclock_clock_pane_g3

0xc6e6,	// (0x0003e143) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000418c2) main_fs_bigclock_clock_pane_g

0xc6f2,	// (0x0003e14f) main_fs_bigclock_clock_pane_t1

0xc704,	// (0x0003e161) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000418cb) main_fs_bigclock_clock_pane_t

0x3454,	// (0x00034eb1) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3454,	// (0x00034eb1) list_single_fs_bigclock_indicator_pane

0x3465,	// (0x00034ec2) list_single_fs_bigclock_pane_ParamLimits

0x3465,	// (0x00034ec2) list_single_fs_bigclock_pane

0x348b,	// (0x00034ee8) main_fs_bigclock_indicator_pane_t1

0x349a,	// (0x00034ef7) list_single_fs_bigclock_pane_g1

0x34a2,	// (0x00034eff) list_single_fs_bigclock_pane_t1

0x0cae,	// (0x0003270b) main_fs_bigclock_swipe_pane_g1

0x34e2,	// (0x00034f3f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000418dc) main_fs_bigclock_swipe_pane_g

0x34ea,	// (0x00034f47) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x34ea,	// (0x00034f47) main_fs_bigclock_swipe_pane_t1

0x7a8c,	// (0x000394e9) call_type_pane_ParamLimits

0x5ace,	// (0x0003752b) main_btmg_pane

0x578b,	// (0x000371e8) list_single_cale_mrui_row_pane_g2_ParamLimits

0x578b,	// (0x000371e8) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0004184f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0004184f) list_single_cale_mrui_row_pane_g

0x58b9,	// (0x00037316) list_recal_vselct_arw_lo_pane

0x32ff,	// (0x00034d5c) list_recal_vselct_arw_up_pane

0x58c1,	// (0x0003731e) list_recal_vselct_pane

0x3507,	// (0x00034f64) btmg_button_pane

0xc759,	// (0x0003e1b6) main_btmg_pane_g1

0x5ace,	// (0x0003752b) bg_button_pane_cp044

0x350f,	// (0x00034f6c) btmg_button_pane_t1

0x0786,	// (0x000321e3) aid_listscroll_gen

0xf077,	// (0x00040ad4) main_cntbar_detail_pane

0x2f20,	// (0x0003497d) list_cmail_folder_pane

0x2f30,	// (0x0003498d) sp_fs_scroll_pane_cp03_ParamLimits

0xc398,	// (0x0003ddf5) list_single_fs_dyc_pane_cp01_ParamLimits

0xc398,	// (0x0003ddf5) list_single_fs_dyc_pane_cp01

0x3533,	// (0x00034f90) aid_size_cmail_indent

0x5952,	// (0x000373af) list_single_dyc_row_pane_cp01

0xc77b,	// (0x0003e1d8) cntbar_detail_list_pane_ParamLimits

0xc77b,	// (0x0003e1d8) cntbar_detail_list_pane

0xc7b1,	// (0x0003e20e) main_cntbar_detail_cont_pane_ParamLimits

0xc7b1,	// (0x0003e20e) main_cntbar_detail_cont_pane

0xc7bd,	// (0x0003e21a) scroll_pane_cp032_ParamLimits

0xc7bd,	// (0x0003e21a) scroll_pane_cp032

0xc7c9,	// (0x0003e226) cntbar_detail_list_event_pane_ParamLimits

0xc7c9,	// (0x0003e226) cntbar_detail_list_event_pane

0xc787,	// (0x0003e1e4) cntbar_detail_list_shct_pane

0x3545,	// (0x00034fa2) aid_list_gen

0xd82e,	// (0x0003f28b) aid_scroll

0x209f,	// (0x00033afc) aid_size_touch_scroll_bar

0x215f,	// (0x00033bbc) aid_list_double

0x219a,	// (0x00033bf7) aid_list_single

0x219a,	// (0x00033bf7) aid_list_single_lg

0x595b,	// (0x000373b8) aid_list_z_g_a_sm

0x5963,	// (0x000373c0) aid_list_z_g_d

0x596b,	// (0x000373c8) aid_txt_z_prm

0x5979,	// (0x000373d6) aid_txt_z_prm_cp01

0x5987,	// (0x000373e4) aid_txt_z_sec

0xc7d9,	// (0x0003e236) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc7d9,	// (0x0003e236) main_cntbar_detail_cont_pane_g1

0xc7e6,	// (0x0003e243) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc7e6,	// (0x0003e243) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000418e1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000418e1) main_cntbar_detail_cont_pane_g

0x354e,	// (0x00034fab) main_cntbar_detail_cont_pane_t1

0x355c,	// (0x00034fb9) main_cntbar_detail_cont_pane_t2

0x356a,	// (0x00034fc7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000418e6) main_cntbar_detail_cont_pane_t

0xc7f2,	// (0x0003e24f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc7f2,	// (0x0003e24f) cell_cntbar_detail_list_shct_pane

0x3578,	// (0x00034fd5) cntbar_detail_list_shct_pane_g1

0x3581,	// (0x00034fde) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000418ed) cntbar_detail_list_shct_pane_g

0xc804,	// (0x0003e261) cntbar_detail_list_event_pane_g1_ParamLimits

0xc804,	// (0x0003e261) cntbar_detail_list_event_pane_g1

0xc810,	// (0x0003e26d) cntbar_detail_list_event_pane_g2_ParamLimits

0xc810,	// (0x0003e26d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000418f2) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000418f2) cntbar_detail_list_event_pane_g

0xc87c,	// (0x0003e2d9) cntbar_detail_list_event_pane_t1_ParamLimits

0xc87c,	// (0x0003e2d9) cntbar_detail_list_event_pane_t1

0xc891,	// (0x0003e2ee) cntbar_detail_list_event_pane_t2_ParamLimits

0xc891,	// (0x0003e2ee) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000418ff) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000418ff) cntbar_detail_list_event_pane_t

0x0cae,	// (0x0003270b) cell_cntbar_detail_list_shct_pane_g1

0xe2ee,	// (0x0003fd4b) navi_pane_mv_g3

0xf077,	// (0x00040ad4) main_cntbar_detail_pane_ParamLimits

0x5ace,	// (0x0003752b) main_notif_wgt_pane

0xa01c,	// (0x0003ba79) aid_tch_main_mp4_pane_g4

0xa25b,	// (0x0003bcb8) popup_slider_window_cp02

0x58af,	// (0x0003730c) list_recal_day_event_pane

0xc761,	// (0x0003e1be) cntbar_detail_btn_pane_ParamLimits

0xc761,	// (0x0003e1be) cntbar_detail_btn_pane

0xc76d,	// (0x0003e1ca) cntbar_detail_btn_pane_cp01_ParamLimits

0xc76d,	// (0x0003e1ca) cntbar_detail_btn_pane_cp01

0xc787,	// (0x0003e1e4) cntbar_detail_list_shct_pane_ParamLimits

0xc793,	// (0x0003e1f0) cntbar_detail_pane_g1_ParamLimits

0xc793,	// (0x0003e1f0) cntbar_detail_pane_g1

0xc79f,	// (0x0003e1fc) cntbar_detail_pane_t1_ParamLimits

0xc79f,	// (0x0003e1fc) cntbar_detail_pane_t1

0xc81c,	// (0x0003e279) cntbar_detail_list_event_pane_g3_ParamLimits

0xc81c,	// (0x0003e279) cntbar_detail_list_event_pane_g3

0xc834,	// (0x0003e291) cntbar_detail_list_event_pane_g4_ParamLimits

0xc834,	// (0x0003e291) cntbar_detail_list_event_pane_g4

0xc84c,	// (0x0003e2a9) cntbar_detail_list_event_pane_g5_ParamLimits

0xc84c,	// (0x0003e2a9) cntbar_detail_list_event_pane_g5

0xc864,	// (0x0003e2c1) cntbar_detail_list_event_pane_g6_ParamLimits

0xc864,	// (0x0003e2c1) cntbar_detail_list_event_pane_g6

0xc8a6,	// (0x0003e303) cntbar_detail_list_event_pane_t3_ParamLimits

0xc8a6,	// (0x0003e303) cntbar_detail_list_event_pane_t3

0xc8b8,	// (0x0003e315) popup_notif_wgt_window_ParamLimits

0xc8b8,	// (0x0003e315) popup_notif_wgt_window

0xc8c6,	// (0x0003e323) popup_submenu_window_cp01_ParamLimits

0xc8c6,	// (0x0003e323) popup_submenu_window_cp01

0xd900,	// (0x0003f35d) bg_popup_window_pane_cp10

0x358a,	// (0x00034fe7) listscroll_notif_wgt_pane

0x359b,	// (0x00034ff8) list_notif_wgt_window

0x35a4,	// (0x00035001) scroll_pane_cp033

0xc8d2,	// (0x0003e32f) list_notif_wgt_row_pane_ParamLimits

0xc8d2,	// (0x0003e32f) list_notif_wgt_row_pane

0x35ad,	// (0x0003500a) aid_size_list_notif_wgt_del

0x35ba,	// (0x00035017) list_notif_wgt_row_pane_g1

0x35c6,	// (0x00035023) list_notif_wgt_row_pane_g2

0x35da,	// (0x00035037) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00041906) list_notif_wgt_row_pane_g

0x35e7,	// (0x00035044) list_notif_wgt_row_pane_t1

0x35fd,	// (0x0003505a) list_notif_wgt_row_pane_t2

0x360f,	// (0x0003506c) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0004190d) list_notif_wgt_row_pane_t

0x1dab,	// (0x00033808) list_recal_day_event_pane_g1

0x3621,	// (0x0003507e) list_recal_day_event_pane_t1

0x5ace,	// (0x0003752b) bg_button_pane_cp045

0xc8e4,	// (0x0003e341) cntbar_detail_btn_pane_t1

0x079a,	// (0x000321f7) main_callh_pane_ParamLimits

0x079a,	// (0x000321f7) main_callh_pane

0x5ace,	// (0x0003752b) main_coverflow0_pane

0x5ace,	// (0x0003752b) main_wgtman_pane

0xbf50,	// (0x0003d9ad) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xbf50,	// (0x0003d9ad) main_fs_bigclock_unlock_btn_pane

0x2ef2,	// (0x0003494f) bg_button_pane_cp16

0x2f02,	// (0x0003495f) cell_tport_appsw_pane_g3

0xc8f2,	// (0x0003e34f) cf0_flow_pane_ParamLimits

0xc8f2,	// (0x0003e34f) cf0_flow_pane

0x3630,	// (0x0003508d) listscroll_cf0_pane

0x3639,	// (0x00035096) main_cf0_pane_g1

0xc901,	// (0x0003e35e) main_cf0_pane_t1_ParamLimits

0xc901,	// (0x0003e35e) main_cf0_pane_t1

0xc913,	// (0x0003e370) main_cf0_pane_t2_ParamLimits

0xc913,	// (0x0003e370) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00041919) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00041919) main_cf0_pane_t

0x364b,	// (0x000350a8) scroll_pane_cp11

0xc925,	// (0x0003e382) cf0_flow_pane_g1

0xc92d,	// (0x0003e38a) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0004191e) cf0_flow_pane_g

0xc935,	// (0x0003e392) cf0_flow_pane_t1

0x5ace,	// (0x0003752b) main_call6_pane

0x5ace,	// (0x0003752b) main_calllock_pane

0xc943,	// (0x0003e3a0) call6_btn_grp_pane_ParamLimits

0xc943,	// (0x0003e3a0) call6_btn_grp_pane

0xc950,	// (0x0003e3ad) call6_pane_g1_ParamLimits

0xc950,	// (0x0003e3ad) call6_pane_g1

0xc95d,	// (0x0003e3ba) popup_call6_1st_window_ParamLimits

0xc95d,	// (0x0003e3ba) popup_call6_1st_window

0xc969,	// (0x0003e3c6) popup_call6_2nd_window_ParamLimits

0xc969,	// (0x0003e3c6) popup_call6_2nd_window

0xc975,	// (0x0003e3d2) cell_call6_btn_pane_ParamLimits

0xc975,	// (0x0003e3d2) cell_call6_btn_pane

0xd900,	// (0x0003f35d) bg_popup_call2_in_pane_cp03

0x3654,	// (0x000350b1) popup_call6_1st_window_g1

0x365c,	// (0x000350b9) popup_call6_1st_window_g2

0x3664,	// (0x000350c1) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00041923) popup_call6_1st_window_g

0x366c,	// (0x000350c9) popup_call6_1st_window_t1

0x367b,	// (0x000350d8) popup_call6_1st_window_t2

0x3689,	// (0x000350e6) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0004192a) popup_call6_1st_window_t

0xd900,	// (0x0003f35d) bg_popup_call2_in_pane_cp04

0x3654,	// (0x000350b1) popup_call6_2nd_window_g1

0x365c,	// (0x000350b9) popup_call6_2nd_window_g2

0x3664,	// (0x000350c1) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00041923) popup_call6_2nd_window_g

0x366c,	// (0x000350c9) popup_call6_2nd_window_t1

0x5ace,	// (0x0003752b) bg_button_pane_cp15

0xc984,	// (0x0003e3e1) cell_call6_btn_pane_g1

0xc98d,	// (0x0003e3ea) cell_call6_btn_pane_t1

0xc99c,	// (0x0003e3f9) listscroll_wgtman_pane_ParamLimits

0xc99c,	// (0x0003e3f9) listscroll_wgtman_pane

0xc9b8,	// (0x0003e415) wgtman_btn_pane_ParamLimits

0xc9b8,	// (0x0003e415) wgtman_btn_pane

0xe145,	// (0x0003fba2) aid_scroll_copy1

0x36af,	// (0x0003510c) list_wgtman_pane

0xc9eb,	// (0x0003e448) wgtman_btn_pane_g1_ParamLimits

0xc9eb,	// (0x0003e448) wgtman_btn_pane_g1

0xca13,	// (0x0003e470) wgtman_btn_pane_t1_ParamLimits

0xca13,	// (0x0003e470) wgtman_btn_pane_t1

0x36b9,	// (0x00035116) wgtman_btn_pane_t2_ParamLimits

0x36b9,	// (0x00035116) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00041931) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00041931) wgtman_btn_pane_t

0xca4a,	// (0x0003e4a7) listrow_wgtman_pane_ParamLimits

0xca4a,	// (0x0003e4a7) listrow_wgtman_pane

0xca5b,	// (0x0003e4b8) listrow_wgtman_pane_g1

0xca68,	// (0x0003e4c5) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00041936) listrow_wgtman_pane_g

0x5995,	// (0x000373f2) listrow_wgtman_pane_t1

0x59ad,	// (0x0003740a) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0004193b) listrow_wgtman_pane_t

0x59d3,	// (0x00037430) wait_bar_pane_cp09

0x36d0,	// (0x0003512d) main_calllock_btn_pane

0x36d8,	// (0x00035135) main_calllock_pane_g1

0x5ace,	// (0x0003752b) bg_button_pane_cp17

0x36e1,	// (0x0003513e) main_calllock_btn_pane_g1

0x36ea,	// (0x00035147) main_calllock_btn_pane_t1

0x5ace,	// (0x0003752b) main_dialer3_pane

0x5ace,	// (0x0003752b) main_fmrd2_pane

0x0cae,	// (0x0003270b) main_fs_bigclock_unlock_btn_pane_g1

0x3701,	// (0x0003515e) main_fs_bigclock_unlock_btn_pane_t1

0xca80,	// (0x0003e4dd) area_fmrd2_info_pane_ParamLimits

0xca80,	// (0x0003e4dd) area_fmrd2_info_pane

0xca8c,	// (0x0003e4e9) area_fmrd2_visual_pane_ParamLimits

0xca8c,	// (0x0003e4e9) area_fmrd2_visual_pane

0xca9a,	// (0x0003e4f7) fmrd2_indi_pane_ParamLimits

0xca9a,	// (0x0003e4f7) fmrd2_indi_pane

0xcaa7,	// (0x0003e504) area_fmrd2_visual_pane_g1

0xcaaf,	// (0x0003e50c) area_fmrd2_visual_pane_t1

0xcabd,	// (0x0003e51a) area_fmrd2_visual_pane_t2

0xcacb,	// (0x0003e528) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00041945) area_fmrd2_visual_pane_t

0xcad9,	// (0x0003e536) area_fmrd2_info_pane_g1

0xcae1,	// (0x0003e53e) area_fmrd2_info_pane_t1

0xcaef,	// (0x0003e54c) area_fmrd2_info_pane_t2

0xcafd,	// (0x0003e55a) area_fmrd2_info_pane_t3

0xcb0b,	// (0x0003e568) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0004194c) area_fmrd2_info_pane_t

0xcb19,	// (0x0003e576) fmrd2_indi_pane_t1

0xcb27,	// (0x0003e584) fmrd2_indi_pane_t2

0xcb35,	// (0x0003e592) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00041955) fmrd2_indi_pane_t

0x2a6a,	// (0x000344c7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2a6a,	// (0x000344c7) list_single_fs_bigclock_indicator_pane_g5

0x2b18,	// (0x00034575) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2b18,	// (0x00034575) list_single_fs_bigclock_indicator_pane_t5

0xc472,	// (0x0003decf) aid_cell_bcale_month_pane_ParamLimits

0xc472,	// (0x0003decf) aid_cell_bcale_month_pane

0xc490,	// (0x0003deed) bcale_month_pane_ParamLimits

0xc490,	// (0x0003deed) bcale_month_pane

0xc4a6,	// (0x0003df03) bcale_preview_pane_ParamLimits

0xc4a6,	// (0x0003df03) bcale_preview_pane

0x34a2,	// (0x00034eff) list_single_fs_bigclock_pane_t1_ParamLimits

0x34be,	// (0x00034f1b) list_single_fs_bigclock_pane_t2_ParamLimits

0x34be,	// (0x00034f1b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000418d7) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000418d7) list_single_fs_bigclock_pane_t

0x36f9,	// (0x00035156) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00041940) main_fs_bigclock_unlock_btn_pane_g

0xcb43,	// (0x0003e5a0) aid_dia3_key_size_ParamLimits

0xcb43,	// (0x0003e5a0) aid_dia3_key_size

0xcb4f,	// (0x0003e5ac) aid_dia3_listrow_size_ParamLimits

0xcb4f,	// (0x0003e5ac) aid_dia3_listrow_size

0xcb5d,	// (0x0003e5ba) dia3_keypad_fun_pane_ParamLimits

0xcb5d,	// (0x0003e5ba) dia3_keypad_fun_pane

0xcb69,	// (0x0003e5c6) dia3_keypad_num_pane_ParamLimits

0xcb69,	// (0x0003e5c6) dia3_keypad_num_pane

0xcb75,	// (0x0003e5d2) dia3_listscroll_pane_ParamLimits

0xcb75,	// (0x0003e5d2) dia3_listscroll_pane

0xcb81,	// (0x0003e5de) dia3_numentry_pane_ParamLimits

0xcb81,	// (0x0003e5de) dia3_numentry_pane

0x370f,	// (0x0003516c) dia3_list_pane

0x3718,	// (0x00035175) scroll_pane_cp12

0x5ace,	// (0x0003752b) bg_dia3_numentry_pane

0xcb8d,	// (0x0003e5ea) dia3_numentry_pane_t1

0xcb9c,	// (0x0003e5f9) cell_dia3_key_num_pane

0xcba4,	// (0x0003e601) cell_dia3_key0_fun_pane_ParamLimits

0xcba4,	// (0x0003e601) cell_dia3_key0_fun_pane

0xcbb1,	// (0x0003e60e) cell_dia3_key1_fun_pane_ParamLimits

0xcbb1,	// (0x0003e60e) cell_dia3_key1_fun_pane

0xcbbe,	// (0x0003e61b) dia3_listrow_pane

0x276b,	// (0x000341c8) bg_dia3_numentry_pane_g1

0x5ace,	// (0x0003752b) bg_button_pane_cp21

0x3721,	// (0x0003517e) cell_dia3_key_num_pane_t1

0x372f,	// (0x0003518c) cell_dia3_key_num_pane_t2

0x373e,	// (0x0003519b) cell_dia3_key_num_pane_t3

0x374d,	// (0x000351aa) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0004195c) cell_dia3_key_num_pane_t

0x5ace,	// (0x0003752b) bg_button_pane_cp19

0x375c,	// (0x000351b9) cell_dia3_key0_fun_pane_g1

0x5ace,	// (0x0003752b) bg_button_pane_cp20

0xcbcb,	// (0x0003e628) cell_dia3_key1_fun_pane_g1

0xcbd3,	// (0x0003e630) area_left_week_number_pane

0xcbe4,	// (0x0003e641) area_top_day_name_pane

0xcbf0,	// (0x0003e64d) frame_month_view_pane

0x3764,	// (0x000351c1) grid_month_view_pane

0xcc01,	// (0x0003e65e) cell_top_day_name_pane_ParamLimits

0xcc01,	// (0x0003e65e) cell_top_day_name_pane

0xcc17,	// (0x0003e674) cell_area_left_week_number_pane_ParamLimits

0xcc17,	// (0x0003e674) cell_area_left_week_number_pane

0xcc36,	// (0x0003e693) cell_month_view_pane_ParamLimits

0xcc36,	// (0x0003e693) cell_month_view_pane

0x3772,	// (0x000351cf) frm_month_g1

0xcc5c,	// (0x0003e6b9) frm_month_g2

0xcc6b,	// (0x0003e6c8) frm_month_g3

0xcc7a,	// (0x0003e6d7) frm_month_g4

0xcc89,	// (0x0003e6e6) frm_month_g5

0xcc98,	// (0x0003e6f5) frm_month_g6

0xcca7,	// (0x0003e704) frm_month_g7

0x377f,	// (0x000351dc) frm_month_g8

0xccb6,	// (0x0003e713) frm_month_g9

0xccc3,	// (0x0003e720) frm_month_g10

0xccd0,	// (0x0003e72d) frm_month_g11

0xccdd,	// (0x0003e73a) frm_month_g12

0xccea,	// (0x0003e747) frm_month_g13

0xccf7,	// (0x0003e754) frm_month_g14

0xcd04,	// (0x0003e761) frm_month_g15

0xcd11,	// (0x0003e76e) frm_month_g16

0x000f,

0xff08,	// (0x00041965) frm_month_g

0x378c,	// (0x000351e9) cell_top_day_name_pane_t1

0xcd1e,	// (0x0003e77b) cell_area_left_week_number_pane_g1

0xcd2d,	// (0x0003e78a) cell_area_left_week_number_pane_t1

0x0edd,	// (0x0003293a) cell_month_view_pane_g1

0xcd43,	// (0x0003e7a0) cell_month_view_pane_t1

0x5ace,	// (0x0003752b) main_fps_pane

0x2cfc,	// (0x00034759) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2cfc,	// (0x00034759) cmail_ddmenu_btn02_pane_cp1

0x2d18,	// (0x00034775) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2d18,	// (0x00034775) cmail_ddmenu_btn02_pane_cp2

0xc625,	// (0x0003e082) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc625,	// (0x0003e082) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0004188a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0004188a) cmail_ddmenu_btn02_pane_g

0xc643,	// (0x0003e0a0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc643,	// (0x0003e0a0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0004188f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0004188f) cmail_ddmenu_btn02_pane_t

0xcd59,	// (0x0003e7b6) fps_text_pane_ParamLimits

0xcd59,	// (0x0003e7b6) fps_text_pane

0xcd66,	// (0x0003e7c3) main_fps_pane_g1_ParamLimits

0xcd66,	// (0x0003e7c3) main_fps_pane_g1

0xcd72,	// (0x0003e7cf) wait_bar_pane_cp010_ParamLimits

0xcd72,	// (0x0003e7cf) wait_bar_pane_cp010

0xcd7e,	// (0x0003e7db) fps_text_pane_t1_ParamLimits

0xcd7e,	// (0x0003e7db) fps_text_pane_t1

0xa643,	// (0x0003c0a0) cam4_image_uncrop_pane_g1

0xa64c,	// (0x0003c0a9) cam4_image_uncrop_pane_g2

0xa655,	// (0x0003c0b2) cam4_image_uncrop_pane_g3

0xa65e,	// (0x0003c0bb) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x00041347) cam4_image_uncrop_pane_g

0xcbbe,	// (0x0003e61b) dia3_listrow_pane_ParamLimits

0x5ace,	// (0x0003752b) main_phob2_pane

0xc33d,	// (0x0003dd9a) cell_tport_appsw_pane_cp02_ParamLimits

0xc33d,	// (0x0003dd9a) cell_tport_appsw_pane_cp02

0xc34a,	// (0x0003dda7) cell_tport_appsw_pane_cp03_ParamLimits

0xc34a,	// (0x0003dda7) cell_tport_appsw_pane_cp03

0x5ace,	// (0x0003752b) phob2_contact_card_pane

0x5ace,	// (0x0003752b) phob2_listscroll_pane

0x379f,	// (0x000351fc) phob2_list_pane

0x37a7,	// (0x00035204) scroll_pane_cp034

0xcd97,	// (0x0003e7f4) phob2_cc_data_pane_ParamLimits

0xcd97,	// (0x0003e7f4) phob2_cc_data_pane

0xcdaf,	// (0x0003e80c) phob2_cc_listscroll_pane_ParamLimits

0xcdaf,	// (0x0003e80c) phob2_cc_listscroll_pane

0xcdc7,	// (0x0003e824) list_double_large_graphic_phob2_pane_ParamLimits

0xcdc7,	// (0x0003e824) list_double_large_graphic_phob2_pane

0xcdd9,	// (0x0003e836) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xcdd9,	// (0x0003e836) list_double_large_graphic_phob2_pane_g1

0x59e5,	// (0x00037442) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x59e5,	// (0x00037442) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00041986) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00041986) list_double_large_graphic_phob2_pane_g

0x59f1,	// (0x0003744e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x59f1,	// (0x0003744e) list_double_large_graphic_phob2_pane_t1

0x5a07,	// (0x00037464) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x5a07,	// (0x00037464) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0004198b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0004198b) list_double_large_graphic_phob2_pane_t

0x5ace,	// (0x0003752b) list_highlight_pane_cp024

0xcdef,	// (0x0003e84c) phob2_cc_button_pane

0xcdf7,	// (0x0003e854) phob2_cc_data_pane_g1_ParamLimits

0xcdf7,	// (0x0003e854) phob2_cc_data_pane_g1

0xce03,	// (0x0003e860) phob2_cc_data_pane_g2_ParamLimits

0xce03,	// (0x0003e860) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00041990) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00041990) phob2_cc_data_pane_g

0xce0f,	// (0x0003e86c) phob2_cc_data_pane_t1_ParamLimits

0xce0f,	// (0x0003e86c) phob2_cc_data_pane_t1

0xce21,	// (0x0003e87e) phob2_cc_data_pane_t2_ParamLimits

0xce21,	// (0x0003e87e) phob2_cc_data_pane_t2

0xce33,	// (0x0003e890) phob2_cc_data_pane_t3_ParamLimits

0xce33,	// (0x0003e890) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00041995) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00041995) phob2_cc_data_pane_t

0x37af,	// (0x0003520c) phob2_cc_list_pane_ParamLimits

0x37af,	// (0x0003520c) phob2_cc_list_pane

0x2688,	// (0x000340e5) scroll_pane_cp035_ParamLimits

0x2688,	// (0x000340e5) scroll_pane_cp035

0xf077,	// (0x00040ad4) bg_button_pane_cp033

0x37bb,	// (0x00035218) phob2_cc_button_pane_g1

0x37c7,	// (0x00035224) phob2_cc_button_pane_t1

0x37dc,	// (0x00035239) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0004199c) phob2_cc_button_pane_t

0xce45,	// (0x0003e8a2) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xce45,	// (0x0003e8a2) list_double_large_graphic_phob2_cc_pane

0xce8b,	// (0x0003e8e8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xce8b,	// (0x0003e8e8) list_double_large_graphic_phob2_cc_pane_g1

0x5a1c,	// (0x00037479) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x5a1c,	// (0x00037479) list_double_large_graphic_phob2_cc_pane_g2

0x5a2b,	// (0x00037488) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5a2b,	// (0x00037488) list_double_large_graphic_phob2_cc_pane_g3

0x5a3a,	// (0x00037497) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5a3a,	// (0x00037497) list_double_large_graphic_phob2_cc_pane_g4

0x5a4b,	// (0x000374a8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5a4b,	// (0x000374a8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000419a1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000419a1) list_double_large_graphic_phob2_cc_pane_g

0x5a5a,	// (0x000374b7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5a5a,	// (0x000374b7) list_double_large_graphic_phob2_cc_pane_t1

0x5a83,	// (0x000374e0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x5a83,	// (0x000374e0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000419ac) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000419ac) list_double_large_graphic_phob2_cc_pane_t

0x37ee,	// (0x0003524b) list_highlight_pane_cp025_ParamLimits

0x37ee,	// (0x0003524b) list_highlight_pane_cp025

0xf077,	// (0x00040ad4) bg_button_pane_cp033_ParamLimits

0x37bb,	// (0x00035218) phob2_cc_button_pane_g1_ParamLimits

0x37c7,	// (0x00035224) phob2_cc_button_pane_t1_ParamLimits

0x37dc,	// (0x00035239) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0004199c) phob2_cc_button_pane_t_ParamLimits

0x5d1c,	// (0x00037779) popup_wgtman_window

0x278b,	// (0x000341e8) scroll_pane_cp038

0xc9d3,	// (0x0003e430) wgtman_btn_pane_cp_01_ParamLimits

0xc9d3,	// (0x0003e430) wgtman_btn_pane_cp_01

0x37fc,	// (0x00035259) wgtman_content_pane

0x3805,	// (0x00035262) wgtman_heading_pane

0x5ace,	// (0x0003752b) bg_heading_pane_cp02

0x380e,	// (0x0003526b) wgtman_heading_pane_g1

0x3816,	// (0x00035273) wgtman_heading_pane_t1

0x3824,	// (0x00035281) scroll_pane_cp036

0x382c,	// (0x00035289) wgtman_list_pane

0x3834,	// (0x00035291) wgtman_list_pane_t1_ParamLimits

0x3834,	// (0x00035291) wgtman_list_pane_t1

0xa5a8,	// (0x0003c005) cam4_grid_pane

0x4cf5,	// (0x00036752) bg_button_pane_cp015_ParamLimits

0xb15f,	// (0x0003cbbc) bg_button_pane_cp016_ParamLimits

0xb172,	// (0x0003cbcf) bg_button_pane_cp017_ParamLimits

0x4d33,	// (0x00036790) popup_vitu2_query_window_g3_ParamLimits

0x4d33,	// (0x00036790) popup_vitu2_query_window_g3

0x4dac,	// (0x00036809) popup_vitu2_query_window_t6_ParamLimits

0x4dac,	// (0x00036809) popup_vitu2_query_window_t6

0x4dd7,	// (0x00036834) popup_vitu2_query_window_t7_ParamLimits

0x4dd7,	// (0x00036834) popup_vitu2_query_window_t7

0x1979,	// (0x000333d6) cam4_grid_pane_g1

0x1982,	// (0x000333df) cam4_grid_pane_g2

0x384b,	// (0x000352a8) cam4_grid_pane_g3

0x3854,	// (0x000352b1) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000419b1) cam4_grid_pane_g

0x6af9,	// (0x00038556) aid_placing_vt_slider_lsc_ParamLimits

0x6da3,	// (0x00038800) vidtel_button_pane_ParamLimits

0x6da3,	// (0x00038800) vidtel_button_pane

0x5ace,	// (0x0003752b) bg_button_pane_cp034

0xce9c,	// (0x0003e8f9) vidtel_button_pane_g1

0xcea4,	// (0x0003e901) vidtel_button_pane_t1

0x1d1f,	// (0x0003377c) aid_size_vtel_slider_touch

0x2688,	// (0x000340e5) scroll_pane_cp039

0x27ba,	// (0x00034217) ncim_query_button_pane_cp01_ParamLimits

0x27d9,	// (0x00034236) ncimui_query_pane_g1_ParamLimits

0xf077,	// (0x00040ad4) input_focus_pane_cp012_ParamLimits

0x27fe,	// (0x0003425b) ncim_query_entry_pane_t1_ParamLimits

0x2688,	// (0x000340e5) scroll_pane_cp039_ParamLimits

0xe209,	// (0x0003fc66) navi_pane_bcale_mc_g1

0xe211,	// (0x0003fc6e) navi_pane_bcale_mc_t1

0x2d4c,	// (0x000347a9) main_sp_fs_email_pane_g1

0x2d58,	// (0x000347b5) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00041742) main_sp_fs_email_pane_g

0x31e9,	// (0x00034c46) list_single_cale_mrui_row_pane_g3_ParamLimits

0x31e9,	// (0x00034c46) list_single_cale_mrui_row_pane_g3

0x590c,	// (0x00037369) list_single_recal_day_pane_g5_event_pane

0x5923,	// (0x00037380) list_single_recal_day_pane_g7

0x385d,	// (0x000352ba) list_recal_day_event_pane_cp01

0x3866,	// (0x000352c3) list_recal_vselct_arw_lo_pane_cp01

0x386e,	// (0x000352cb) list_recal_vselct_arw_up_pane_cp01

0x3876,	// (0x000352d3) list_recal_vselct_pane_cp01

0x1dab,	// (0x00033808) list_recal_day_event_pane_cp01_g1

0x5aac,	// (0x00037509) list_recal_day_event_pane_cp01_t1

0x592b,	// (0x00037388) list_single_recal_day_pane_t1_ParamLimits

0x593d,	// (0x0003739a) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0004189f) list_single_recal_day_pane_t_ParamLimits

0xd660,	// (0x0003f0bd) bg_notes_pane_ParamLimits

0xd703,	// (0x0003f160) list_notes_pane_ParamLimits

0x6039,	// (0x00037a96) scroll_pane_cp06_ParamLimits

0xd729,	// (0x0003f186) main_notes_pane_ParamLimits

0xf077,	// (0x00040ad4) main_welc_pane

0xcec7,	// (0x0003e924) main_welc_body_pane_ParamLimits

0xcec7,	// (0x0003e924) main_welc_body_pane

0xcee0,	// (0x0003e93d) main_welc_opti_pane_ParamLimits

0xcee0,	// (0x0003e93d) main_welc_opti_pane

0xcf19,	// (0x0003e976) main_welc_pane_t1_ParamLimits

0xcf19,	// (0x0003e976) main_welc_pane_t1

0xcf6d,	// (0x0003e9ca) main_welc_body_row_pane_ParamLimits

0xcf6d,	// (0x0003e9ca) main_welc_body_row_pane

0x388e,	// (0x000352eb) main_welc_opti_row_pane_ParamLimits

0x388e,	// (0x000352eb) main_welc_opti_row_pane

0x389c,	// (0x000352f9) main_welc_opti_row_pane_g1

0xcf82,	// (0x0003e9df) main_welc_opti_row_pane_t1

0x38a4,	// (0x00035301) main_welc_body_row_pane_t1

0x3593,	// (0x00034ff0) popup_notif_wgt_heading_pane

0x35ad,	// (0x0003500a) aid_size_list_notif_wgt_del_ParamLimits

0x35ba,	// (0x00035017) list_notif_wgt_row_pane_g1_ParamLimits

0x35c6,	// (0x00035023) list_notif_wgt_row_pane_g2_ParamLimits

0x35da,	// (0x00035037) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00041906) list_notif_wgt_row_pane_g_ParamLimits

0x35e7,	// (0x00035044) list_notif_wgt_row_pane_t1_ParamLimits

0x35fd,	// (0x0003505a) list_notif_wgt_row_pane_t2_ParamLimits

0x360f,	// (0x0003506c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0004190d) list_notif_wgt_row_pane_t_ParamLimits

0xca5b,	// (0x0003e4b8) listrow_wgtman_pane_g1_ParamLimits

0xca68,	// (0x0003e4c5) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00041936) listrow_wgtman_pane_g_ParamLimits

0x5995,	// (0x000373f2) listrow_wgtman_pane_t1_ParamLimits

0x59ad,	// (0x0003740a) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0004193b) listrow_wgtman_pane_t_ParamLimits

0x59d3,	// (0x00037430) wait_bar_pane_cp09_ParamLimits

0x5ace,	// (0x0003752b) bg_popup_heading_pane_cp02

0x38b3,	// (0x00035310) popup_notif_wgt_heading_pane_g1

0x38bb,	// (0x00035318) popup_notif_wgt_heading_pane_t1

0x07a8,	// (0x00032205) main_vids_pane

0x5ace,	// (0x0003752b) vids_listscroll_pane

0xcf91,	// (0x0003e9ee) scroll_pane_cp040

0x5ace,	// (0x0003752b) vids_list_pane

0xcf9a,	// (0x0003e9f7) vids_list_double_pane_ParamLimits

0xcf9a,	// (0x0003e9f7) vids_list_double_pane

0xcfab,	// (0x0003ea08) vids_list_double_pane_g1

0xcfb4,	// (0x0003ea11) vids_list_double_pane_t1

0xcfc4,	// (0x0003ea21) vids_list_double_pane_t2

0x0001,

0xff6b,	// (0x000419c8) vids_list_double_pane_t

0xf077,	// (0x00040ad4) main_ncimui_pane_ParamLimits

0xbb64,	// (0x0003d5c1) main_ncimui_pane_g1_ParamLimits

0xbb70,	// (0x0003d5cd) main_ncimui_pane_g2_ParamLimits

0xbb70,	// (0x0003d5cd) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x00041643) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x00041643) main_ncimui_pane_g

0xcef5,	// (0x0003e952) main_welc_pane_g1_ParamLimits

0xcef5,	// (0x0003e952) main_welc_pane_g1

0xcf01,	// (0x0003e95e) main_welc_pane_g2_ParamLimits

0xcf01,	// (0x0003e95e) main_welc_pane_g2

0x0002,

0xff5d,	// (0x000419ba) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000419ba) main_welc_pane_g

0xd660,	// (0x0003f0bd) listscroll_mce_pane_ParamLimits

0x7da5,	// (0x00039802) wait_bar_pane_cp10

0x078e,	// (0x000321eb) main_cale_day_pane_ParamLimits

0x078e,	// (0x000321eb) main_cale_week_pane_ParamLimits

0xd660,	// (0x0003f0bd) main_messa_pane_ParamLimits

0x9a46,	// (0x0003b4a3) main_clock2_btn_pane_ParamLimits

0x9a46,	// (0x0003b4a3) main_clock2_btn_pane

0x10d9,	// (0x00032b36) main_clock2_btn_pane_cp01_ParamLimits

0x10d9,	// (0x00032b36) main_clock2_btn_pane_cp01

0x31a4,	// (0x00034c01) list_cale_mrui_pane_ParamLimits

0x3643,	// (0x000350a0) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00041914) main_cf0_pane_g

0xcbd3,	// (0x0003e630) area_left_week_number_pane_ParamLimits

0xcbe4,	// (0x0003e641) area_top_day_name_pane_ParamLimits

0xcbf0,	// (0x0003e64d) frame_month_view_pane_ParamLimits

0x3764,	// (0x000351c1) grid_month_view_pane_ParamLimits

0x3772,	// (0x000351cf) frm_month_g1_ParamLimits

0xcc5c,	// (0x0003e6b9) frm_month_g2_ParamLimits

0xcc6b,	// (0x0003e6c8) frm_month_g3_ParamLimits

0xcc7a,	// (0x0003e6d7) frm_month_g4_ParamLimits

0xcc89,	// (0x0003e6e6) frm_month_g5_ParamLimits

0xcc98,	// (0x0003e6f5) frm_month_g6_ParamLimits

0xcca7,	// (0x0003e704) frm_month_g7_ParamLimits

0x377f,	// (0x000351dc) frm_month_g8_ParamLimits

0xccb6,	// (0x0003e713) frm_month_g9_ParamLimits

0xccc3,	// (0x0003e720) frm_month_g10_ParamLimits

0xccd0,	// (0x0003e72d) frm_month_g11_ParamLimits

0xccdd,	// (0x0003e73a) frm_month_g12_ParamLimits

0xccea,	// (0x0003e747) frm_month_g13_ParamLimits

0xccf7,	// (0x0003e754) frm_month_g14_ParamLimits

0xcd04,	// (0x0003e761) frm_month_g15_ParamLimits

0xcd11,	// (0x0003e76e) frm_month_g16_ParamLimits

0xff08,	// (0x00041965) frm_month_g_ParamLimits

0x378c,	// (0x000351e9) cell_top_day_name_pane_t1_ParamLimits

0xcd1e,	// (0x0003e77b) cell_area_left_week_number_pane_g1_ParamLimits

0xcd2d,	// (0x0003e78a) cell_area_left_week_number_pane_t1_ParamLimits

0x0edd,	// (0x0003293a) cell_month_view_pane_g1_ParamLimits

0xcd43,	// (0x0003e7a0) cell_month_view_pane_t1_ParamLimits

0xd658,	// (0x0003f0b5) main_clock2_btn_pane_g1

0x38c9,	// (0x00035326) main_clock2_btn_pane_t1

0xf077,	// (0x00040ad4) listscroll_cmail_pane_ParamLimits

0x2d4c,	// (0x000347a9) main_sp_fs_email_pane_g1_ParamLimits

0x2d58,	// (0x000347b5) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00041742) main_sp_fs_email_pane_g_ParamLimits

0x32ce,	// (0x00034d2b) list_recal_day_pane_ParamLimits

0x32df,	// (0x00034d3c) mian_recal_day_pane_t1

0x5300,	// (0x00036d5d) list_single_dyc_row_text_pane_t4_ParamLimits

0x5300,	// (0x00036d5d) list_single_dyc_row_text_pane_t4

0x5337,	// (0x00036d94) list_single_dyc_row_text_pane_t5_ParamLimits

0x5337,	// (0x00036d94) list_single_dyc_row_text_pane_t5

0x53a7,	// (0x00036e04) list_single_dyc_row_text_pane_t6_ParamLimits

0x53a7,	// (0x00036e04) list_single_dyc_row_text_pane_t6

0x79c4,	// (0x00039421) aid_mgn_list_cale_time_pane

0xf077,	// (0x00040ad4) main_gallery2_pane_ParamLimits

0x10ed,	// (0x00032b4a) main_clock2_pane_cp01_t1

0x10fb,	// (0x00032b58) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x00041219) main_clock2_pane_cp01_t

0x63f3,	// (0x00037e50) cale_week_scroll_pane_g16_ParamLimits

0x63f3,	// (0x00037e50) cale_week_scroll_pane_g16

0xd900,	// (0x0003f35d) vorec_slider_pane

0xcea4,	// (0x0003e901) vidtel_button_pane_t1_ParamLimits

0x0fb6,	// (0x00032a13) main_fs_bigclock_clock_pane_g1_ParamLimits

0xc6d9,	// (0x0003e136) main_fs_bigclock_clock_pane_g2_ParamLimits

0xc6e6,	// (0x0003e143) main_fs_bigclock_clock_pane_g3_ParamLimits

0xc6e6,	// (0x0003e143) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x000418c2) main_fs_bigclock_clock_pane_g_ParamLimits

0xc6f2,	// (0x0003e14f) main_fs_bigclock_clock_pane_t1_ParamLimits

0xc704,	// (0x0003e161) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x000418cb) main_fs_bigclock_clock_pane_t_ParamLimits

0x9372,	// (0x0003adcf) main_mup3_lyrics_pane_ParamLimits

0x9372,	// (0x0003adcf) main_mup3_lyrics_pane

0xcff6,	// (0x0003ea53) main_mup3_lyrics_pane_t1_ParamLimits

0xcff6,	// (0x0003ea53) main_mup3_lyrics_pane_t1

0xa014,	// (0x0003ba71) aid_main_mp4_pane_t1_area

0xa014,	// (0x0003ba71) aid_main_mp4_pane_t2_area

0xa0ff,	// (0x0003bb5c) main_mp4_pane_g7_ParamLimits

0xa0ff,	// (0x0003bb5c) main_mp4_pane_g7

0xa10b,	// (0x0003bb68) main_mp4_pane_g8_ParamLimits

0xa10b,	// (0x0003bb68) main_mp4_pane_g8

0xa4c0,	// (0x0003bf1d) aid_call6_pane_g1_size

0xce6f,	// (0x0003e8cc) list_double_large_graphic_phob2_other_pane_ParamLimits

0xce6f,	// (0x0003e8cc) list_double_large_graphic_phob2_other_pane

0xe15c,	// (0x0003fbb9) list_double_large_graphic_phob2_other_pane_g1

0x5ace,	// (0x0003752b) list_highlight_pane_cp026

0xf077,	// (0x00040ad4) main_welc_pane_ParamLimits

0xc20c,	// (0x0003dc69) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc20c,	// (0x0003dc69) main_sp_fs_ctrlbar_pane_g3

0xc224,	// (0x0003dc81) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc224,	// (0x0003dc81) main_sp_fs_ctrlbar_pane_g4

0xc264,	// (0x0003dcc1) toolbar2_fixed_button_pane_cp01

0xc26e,	// (0x0003dccb) toolbar2_fixed_button_pane_cp02

0xc279,	// (0x0003dcd6) toolbar2_fixed_button_pane_cp03

0xceba,	// (0x0003e917) list_welc_entry_pane_ParamLimits

0xceba,	// (0x0003e917) list_welc_entry_pane

0xcf0d,	// (0x0003e96a) main_welc_pane_g3_ParamLimits

0xcf0d,	// (0x0003e96a) main_welc_pane_g3

0xcf31,	// (0x0003e98e) main_welc_pane_t2_ParamLimits

0xcf31,	// (0x0003e98e) main_welc_pane_t2

0xcf43,	// (0x0003e9a0) main_welc_pane_t3_ParamLimits

0xcf43,	// (0x0003e9a0) main_welc_pane_t3

0x0002,

0xff64,	// (0x000419c1) main_welc_pane_t_ParamLimits

0xff64,	// (0x000419c1) main_welc_pane_t

0xcf55,	// (0x0003e9b2) welc_button_pane_ParamLimits

0xcf55,	// (0x0003e9b2) welc_button_pane

0xcf61,	// (0x0003e9be) welc_service_logo_pane_ParamLimits

0xcf61,	// (0x0003e9be) welc_service_logo_pane

0x38d7,	// (0x00035334) list_single_welc_entry_pane_ParamLimits

0x38d7,	// (0x00035334) list_single_welc_entry_pane

0x38e8,	// (0x00035345) list_single_welc_entry_pane_g1

0x38f0,	// (0x0003534d) list_single_welc_entry_pane_t1

0x38fe,	// (0x0003535b) list_single_welc_entry_pane_t2

0x0001,

0xff70,	// (0x000419cd) list_single_welc_entry_pane_t

0x5ace,	// (0x0003752b) bg_button_pane_cp035

0x390c,	// (0x00035369) welc_button_pane_t1

0x391a,	// (0x00035377) welc_service_logo_pane_g1

0x3923,	// (0x00035380) welc_service_logo_pane_g2

0x0001,

0xff75,	// (0x000419d2) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Small
