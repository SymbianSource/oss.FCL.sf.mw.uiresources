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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0003c663 };

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
0x282b,	// (0x0003ee8e) Screen

0x2837,	// (0x0003ee9a) application_window

0x2893,	// (0x0003eef6) area_bottom_pane_ParamLimits

0x2893,	// (0x0003eef6) area_bottom_pane

0x28ec,	// (0x0003ef4f) area_top_pane_ParamLimits

0x28ec,	// (0x0003ef4f) area_top_pane

0x2950,	// (0x0003efb3) call_video_uplink_pane_ParamLimits

0x2950,	// (0x0003efb3) call_video_uplink_pane

0x298f,	// (0x0003eff2) main_pane_ParamLimits

0x298f,	// (0x0003eff2) main_pane

0xce4f,	// (0x000494b2) context_pane

0x5ca4,	// (0x00042307) navi_pane

0x5cca,	// (0x0004232d) popup_cale_events_window_ParamLimits

0x5cca,	// (0x0004232d) popup_cale_events_window

0xce62,	// (0x000494c5) popup_mup_playback_window

0x5ce2,	// (0x00042345) signal_pane

0xae12,	// (0x00047475) main_browser_pane

0xba52,	// (0x000480b5) main_burst_pane

0x5b30,	// (0x00042193) main_calc_pane

0xce35,	// (0x00049498) main_cale_day_pane

0x30cc,	// (0x0003f72f) main_cale_month_pane

0xce35,	// (0x00049498) main_cale_week_pane

0xba52,	// (0x000480b5) main_call_pane

0xaae4,	// (0x00047147) main_call_poc_pane

0xba52,	// (0x000480b5) main_camera_pane

0xba52,	// (0x000480b5) main_chi_dic_pane

0xb7c1,	// (0x00047e24) main_clock_pane

0xaae4,	// (0x00047147) main_fmradio_pane

0xba52,	// (0x000480b5) main_graph_messa_pane

0xaae4,	// (0x00047147) main_help_pane

0xae12,	// (0x00047475) main_im_pane

0xad4d,	// (0x000473b0) main_image_pane_ParamLimits

0xad4d,	// (0x000473b0) main_image_pane

0xaae4,	// (0x00047147) main_location2_pane

0xba52,	// (0x000480b5) main_location_pane

0xad4d,	// (0x000473b0) main_messa_pane

0xaae4,	// (0x00047147) main_mp2_pane

0xba52,	// (0x000480b5) main_mp_pane

0xaae4,	// (0x00047147) main_msg_pane

0xaae4,	// (0x00047147) main_mup_eq_pane

0xaae4,	// (0x00047147) main_mup_pane

0xae12,	// (0x00047475) main_notes_pane

0xaae4,	// (0x00047147) main_pec_pane

0xaae4,	// (0x00047147) main_phob_pane

0xaae4,	// (0x00047147) main_pinb_pane

0xaae4,	// (0x00047147) main_postcard_pane

0xaae4,	// (0x00047147) main_qdial_pane

0xba52,	// (0x000480b5) main_skin_pane

0xaae4,	// (0x00047147) main_smil2_pane

0xba52,	// (0x000480b5) main_smil_pane

0xba52,	// (0x000480b5) main_video_pane

0xba52,	// (0x000480b5) main_video_tele_pane

0xad4d,	// (0x000473b0) main_viewer_pane_ParamLimits

0xad4d,	// (0x000473b0) main_viewer_pane

0xba52,	// (0x000480b5) main_vorec_pane

0x5b6e,	// (0x000421d1) popup_blid_sat_info_window_ParamLimits

0x5b6e,	// (0x000421d1) popup_blid_sat_info_window

0x5b8e,	// (0x000421f1) popup_dyc_status_message_window_ParamLimits

0x5b8e,	// (0x000421f1) popup_dyc_status_message_window

0x5b9e,	// (0x00042201) popup_grid_large_graphic_window_ParamLimits

0x5b9e,	// (0x00042201) popup_grid_large_graphic_window

0x5c2f,	// (0x00042292) popup_loc_request_window_ParamLimits

0x5c2f,	// (0x00042292) popup_loc_request_window

0x5c7c,	// (0x000422df) popup_wml_address_window_ParamLimits

0x5c7c,	// (0x000422df) popup_wml_address_window

0x5a08,	// (0x0004206b) call_muted_g1

0x56ca,	// (0x00041d2d) popup_call_audio_conf_window_ParamLimits

0x56ca,	// (0x00041d2d) popup_call_audio_conf_window

0x5a18,	// (0x0004207b) popup_call_audio_first_window_ParamLimits

0x5a18,	// (0x0004207b) popup_call_audio_first_window

0x5a58,	// (0x000420bb) popup_call_audio_in_window_ParamLimits

0x5a58,	// (0x000420bb) popup_call_audio_in_window

0x5a7c,	// (0x000420df) popup_call_audio_out_window_ParamLimits

0x5a7c,	// (0x000420df) popup_call_audio_out_window

0x5a9e,	// (0x00042101) popup_call_audio_second_window_ParamLimits

0x5a9e,	// (0x00042101) popup_call_audio_second_window

0x5ace,	// (0x00042131) popup_call_audio_wait_window_ParamLimits

0x5ace,	// (0x00042131) popup_call_audio_wait_window

0x5aef,	// (0x00042152) popup_number_entry_window_ParamLimits

0x5aef,	// (0x00042152) popup_number_entry_window

0xa6d1,	// (0x00046d34) bg_popup_call_pane_cp05_ParamLimits

0xa6d1,	// (0x00046d34) bg_popup_call_pane_cp05

0xa6f1,	// (0x00046d54) popup_number_entry_window_t1

0xa704,	// (0x00046d67) popup_number_entry_window_t2

0xa716,	// (0x00046d79) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0004b730) popup_number_entry_window_t

0xa728,	// (0x00046d8b) text_title_cp2

0xa73b,	// (0x00046d9e) bg_popup_call_pane_cp_ParamLimits

0xa73b,	// (0x00046d9e) bg_popup_call_pane_cp

0xa749,	// (0x00046dac) call_thumbnail_pane

0xa751,	// (0x00046db4) popup_call_audio_in_window_g1_ParamLimits

0xa751,	// (0x00046db4) popup_call_audio_in_window_g1

0xa75d,	// (0x00046dc0) popup_call_audio_in_window_g2_ParamLimits

0xa75d,	// (0x00046dc0) popup_call_audio_in_window_g2

0xa769,	// (0x00046dcc) popup_call_audio_in_window_g3_ParamLimits

0xa769,	// (0x00046dcc) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0004b739) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0004b739) popup_call_audio_in_window_g

0xa775,	// (0x00046dd8) popup_call_audio_in_window_t1_ParamLimits

0xa775,	// (0x00046dd8) popup_call_audio_in_window_t1

0xa791,	// (0x00046df4) popup_call_audio_in_window_t2_ParamLimits

0xa791,	// (0x00046df4) popup_call_audio_in_window_t2

0xa7ad,	// (0x00046e10) popup_call_audio_in_window_t3_ParamLimits

0xa7ad,	// (0x00046e10) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0004b740) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0004b740) popup_call_audio_in_window_t

0xa73b,	// (0x00046d9e) bg_popup_call_pane_cp01_ParamLimits

0xa73b,	// (0x00046d9e) bg_popup_call_pane_cp01

0xa749,	// (0x00046dac) call_thumbnail_pane_cp02

0xa7c0,	// (0x00046e23) call_type_pane_cp022

0xa7c8,	// (0x00046e2b) popup_call_audio_out_window_g1_ParamLimits

0xa7c8,	// (0x00046e2b) popup_call_audio_out_window_g1

0xa7da,	// (0x00046e3d) popup_call_audio_out_window_g2_ParamLimits

0xa7da,	// (0x00046e3d) popup_call_audio_out_window_g2

0xa7e6,	// (0x00046e49) popup_call_audio_out_window_g3_ParamLimits

0xa7e6,	// (0x00046e49) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0004b747) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0004b747) popup_call_audio_out_window_g

0xa7f8,	// (0x00046e5b) popup_call_audio_out_window_t1_ParamLimits

0xa7f8,	// (0x00046e5b) popup_call_audio_out_window_t1

0xa810,	// (0x00046e73) popup_call_audio_out_window_t2_ParamLimits

0xa810,	// (0x00046e73) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0004b74e) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0004b74e) popup_call_audio_out_window_t

0xa825,	// (0x00046e88) bg_popup_call_pane_ParamLimits

0xa825,	// (0x00046e88) bg_popup_call_pane

0x2b90,	// (0x0003f1f3) call_thumbnail_pane_cp_ParamLimits

0x2b90,	// (0x0003f1f3) call_thumbnail_pane_cp

0xa8a9,	// (0x00046f0c) call_type_pane_cp01_ParamLimits

0xa8a9,	// (0x00046f0c) call_type_pane_cp01

0xa8ed,	// (0x00046f50) popup_call_audio_first_window_g1_ParamLimits

0xa8ed,	// (0x00046f50) popup_call_audio_first_window_g1

0xa939,	// (0x00046f9c) popup_call_audio_first_window_g2_ParamLimits

0xa939,	// (0x00046f9c) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0004b753) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0004b753) popup_call_audio_first_window_g

0xa97d,	// (0x00046fe0) popup_call_audio_first_window_t1_ParamLimits

0xa97d,	// (0x00046fe0) popup_call_audio_first_window_t1

0xaa29,	// (0x0004708c) popup_call_audio_first_window_t4_ParamLimits

0xaa29,	// (0x0004708c) popup_call_audio_first_window_t4

0xaab5,	// (0x00047118) popup_call_audio_first_window_t5_ParamLimits

0xaab5,	// (0x00047118) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0004b758) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0004b758) popup_call_audio_first_window_t

0xaae4,	// (0x00047147) bg_popup_call_pane_cp02

0xaaee,	// (0x00047151) call_type_pane_cp023

0xaaf6,	// (0x00047159) popup_call_audio_wait_window_g1

0xaafe,	// (0x00047161) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0004b75f) popup_call_audio_wait_window_g

0xab06,	// (0x00047169) popup_call_audio_wait_window_t3

0xab14,	// (0x00047177) bg_popup_call_pane_cp03_ParamLimits

0xab14,	// (0x00047177) bg_popup_call_pane_cp03

0xab74,	// (0x000471d7) call_thumbnail_pane_cp011_ParamLimits

0xab74,	// (0x000471d7) call_thumbnail_pane_cp011

0xab80,	// (0x000471e3) call_type_pane_cp034_ParamLimits

0xab80,	// (0x000471e3) call_type_pane_cp034

0xabbc,	// (0x0004721f) popup_call_audio_second_window_g1_ParamLimits

0xabbc,	// (0x0004721f) popup_call_audio_second_window_g1

0xac06,	// (0x00047269) popup_call_audio_second_window_g2_ParamLimits

0xac06,	// (0x00047269) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0004b764) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0004b764) popup_call_audio_second_window_g

0xac42,	// (0x000472a5) popup_call_audio_second_window_t1_ParamLimits

0xac42,	// (0x000472a5) popup_call_audio_second_window_t1

0xacc3,	// (0x00047326) popup_call_audio_second_window_t2_ParamLimits

0xacc3,	// (0x00047326) popup_call_audio_second_window_t2

0xacf9,	// (0x0004735c) popup_call_audio_second_window_t3_ParamLimits

0xacf9,	// (0x0004735c) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0004b769) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0004b769) popup_call_audio_second_window_t

0xaae4,	// (0x00047147) bg_popup_call_pane_cp04

0xad2f,	// (0x00047392) list_conf_pane

0xad37,	// (0x0004739a) popup_call_audio_conf_window_t1

0xad45,	// (0x000473a8) call_thumbnail_pane_g1

0xad4d,	// (0x000473b0) bg_pinb_pane_ParamLimits

0xad4d,	// (0x000473b0) bg_pinb_pane

0xad5b,	// (0x000473be) find_pinb_pane

0xad64,	// (0x000473c7) listscroll_pinb_pane_ParamLimits

0xad64,	// (0x000473c7) listscroll_pinb_pane

0xad73,	// (0x000473d6) pinb_bg_pane_g1

0x2bb4,	// (0x0003f217) pinb_bg_pane_g2

0x2bc0,	// (0x0003f223) pinb_bg_pane_g3

0x2bcc,	// (0x0003f22f) pinb_bg_pane_g4

0x2bd8,	// (0x0003f23b) pinb_bg_pane_g5

0x2be4,	// (0x0003f247) pinb_bg_pane_g6

0x2bef,	// (0x0003f252) pinb_bg_pane_g7

0x2bfa,	// (0x0003f25d) pinb_bg_pane_g8

0x2c05,	// (0x0003f268) pinb_bg_pane_g9

0x2c0f,	// (0x0003f272) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0004b770) pinb_bg_pane_g

0x2c2c,	// (0x0003f28f) grid_pinb_pane

0x2c37,	// (0x0003f29a) list_pinb_pane

0x2c42,	// (0x0003f2a5) scroll_pane_cp01_ParamLimits

0x2c42,	// (0x0003f2a5) scroll_pane_cp01

0xad7d,	// (0x000473e0) find_pinb_pane_g1_ParamLimits

0xad7d,	// (0x000473e0) find_pinb_pane_g1

0xad95,	// (0x000473f8) find_pinb_pane_t1

0xada7,	// (0x0004740a) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0004b78a) find_pinb_pane_t

0xadbc,	// (0x0004741f) input_focus_pane_cp01_ParamLimits

0xadbc,	// (0x0004741f) input_focus_pane_cp01

0x2c54,	// (0x0003f2b7) cell_pinb_pane_ParamLimits

0x2c54,	// (0x0003f2b7) cell_pinb_pane

0x2c7c,	// (0x0003f2df) cell_pinb_pane_g1_ParamLimits

0x2c7c,	// (0x0003f2df) cell_pinb_pane_g1

0x2c91,	// (0x0003f2f4) cell_pinb_pane_g2_ParamLimits

0x2c91,	// (0x0003f2f4) cell_pinb_pane_g2

0xadc8,	// (0x0004742b) cell_pinb_pane_g3_ParamLimits

0xadc8,	// (0x0004742b) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0004b78f) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0004b78f) cell_pinb_pane_g

0xaae4,	// (0x00047147) grid_highlight_pane_cp01

0x2c9d,	// (0x0003f300) list_pinb_item_pane_ParamLimits

0x2c9d,	// (0x0003f300) list_pinb_item_pane

0xaae4,	// (0x00047147) list_highlight_pane_cp02

0x2cc3,	// (0x0003f326) list_pinb_item_pane_g1_ParamLimits

0x2cc3,	// (0x0003f326) list_pinb_item_pane_g1

0x2cd0,	// (0x0003f333) list_pinb_item_pane_g2_ParamLimits

0x2cd0,	// (0x0003f333) list_pinb_item_pane_g2

0x2cdc,	// (0x0003f33f) list_pinb_item_pane_g3_ParamLimits

0x2cdc,	// (0x0003f33f) list_pinb_item_pane_g3

0x2ced,	// (0x0003f350) list_pinb_item_pane_g4_ParamLimits

0x2ced,	// (0x0003f350) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0004b796) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0004b796) list_pinb_item_pane_g

0x2cf9,	// (0x0003f35c) list_pinb_item_pane_t1_ParamLimits

0x2cf9,	// (0x0003f35c) list_pinb_item_pane_t1

0x2d2a,	// (0x0003f38d) calc_display_pane

0x2d48,	// (0x0003f3ab) calc_paper_pane

0x2d64,	// (0x0003f3c7) grid_calc_pane

0xaae4,	// (0x00047147) bg_list_pane_cp01

0x2d90,	// (0x0003f3f3) clock_g1

0x2d98,	// (0x0003f3fb) clock_g2

0x0001,

0xf13c,	// (0x0004b79f) clock_g

0x2da2,	// (0x0003f405) clock_t1_ParamLimits

0x2da2,	// (0x0003f405) clock_t1

0x2db7,	// (0x0003f41a) clock_t2_ParamLimits

0x2db7,	// (0x0003f41a) clock_t2

0x2dc9,	// (0x0003f42c) clock_t3_ParamLimits

0x2dc9,	// (0x0003f42c) clock_t3

0x2ddb,	// (0x0003f43e) clock_t4_ParamLimits

0x2ddb,	// (0x0003f43e) clock_t4

0x2ded,	// (0x0003f450) clock_t5_ParamLimits

0x2ded,	// (0x0003f450) clock_t5

0x2e02,	// (0x0003f465) clock_t6_ParamLimits

0x2e02,	// (0x0003f465) clock_t6

0x2e14,	// (0x0003f477) clock_t7_ParamLimits

0x2e14,	// (0x0003f477) clock_t7

0x2e26,	// (0x0003f489) clock_t8_ParamLimits

0x2e26,	// (0x0003f489) clock_t8

0x2e3c,	// (0x0003f49f) clock_t9_ParamLimits

0x2e3c,	// (0x0003f49f) clock_t9

0x0008,

0xf141,	// (0x0004b7a4) clock_t_ParamLimits

0xf141,	// (0x0004b7a4) clock_t

0xadd4,	// (0x00047437) popup_clock_analogue_window_cp02

0xadd4,	// (0x00047437) popup_clock_digital_window_cp01

0xaddc,	// (0x0004743f) listscroll_help_pane

0xaae4,	// (0x00047147) phob_pre_status_pane

0xade6,	// (0x00047449) grid_qdial_pane

0xad4d,	// (0x000473b0) listscroll_mce_pane

0xad4d,	// (0x000473b0) bg_notes_pane

0xadf0,	// (0x00047453) list_notes_pane

0x2e52,	// (0x0003f4b5) scroll_pane_cp06

0xadfe,	// (0x00047461) bg_calc_paper_pane

0x2e61,	// (0x0003f4c4) list_calc_pane

0xae12,	// (0x00047475) bg_calc_display_pane

0x2e7b,	// (0x0003f4de) calc_display_pane_t1

0x2e90,	// (0x0003f4f3) calc_display_pane_t2

0x2ea5,	// (0x0003f508) calc_display_pane_t3

0x0002,

0xf154,	// (0x0004b7b7) calc_display_pane_t

0x2eb7,	// (0x0003f51a) cell_calc_pane_ParamLimits

0x2eb7,	// (0x0003f51a) cell_calc_pane

0xae1e,	// (0x00047481) bg_calc_paper_pane_g1

0xae2a,	// (0x0004748d) bg_calc_paper_pane_g2

0xae36,	// (0x00047499) bg_calc_paper_pane_g3

0xae42,	// (0x000474a5) bg_calc_paper_pane_g4

0xae4e,	// (0x000474b1) bg_calc_paper_pane_g5

0x2ee4,	// (0x0003f547) bg_calc_paper_pane_g6

0x2ef5,	// (0x0003f558) bg_calc_paper_pane_g7

0x2f06,	// (0x0003f569) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0004b7be) bg_calc_paper_pane_g

0x2f17,	// (0x0003f57a) calc_bg_paper_pane_g9

0x2f28,	// (0x0003f58b) list_calc_item_pane_ParamLimits

0x2f28,	// (0x0003f58b) list_calc_item_pane

0xae5a,	// (0x000474bd) list_calc_item_pane_g1

0x2f57,	// (0x0003f5ba) list_calc_item_pane_t1_ParamLimits

0x2f57,	// (0x0003f5ba) list_calc_item_pane_t1

0x2f69,	// (0x0003f5cc) list_calc_item_pane_t2_ParamLimits

0x2f69,	// (0x0003f5cc) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0004b7cf) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0004b7cf) list_calc_item_pane_t

0xae67,	// (0x000474ca) cell_calc_pane_g1

0xae71,	// (0x000474d4) grid_highlight_pane_cp02

0xd17d,	// (0x000497e0) bg_calc_display_pane_g1

0x2f99,	// (0x0003f5fc) bg_calc_display_pane_g2

0x2fa3,	// (0x0003f606) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0004b7d9) bg_calc_display_pane_g

0x2fac,	// (0x0003f60f) cell_qdial_pane_ParamLimits

0x2fac,	// (0x0003f60f) cell_qdial_pane

0x2fc0,	// (0x0003f623) cell_qdial_pane_g1_ParamLimits

0x2fc0,	// (0x0003f623) cell_qdial_pane_g1

0x2fcd,	// (0x0003f630) cell_qdial_pane_g2_ParamLimits

0x2fcd,	// (0x0003f630) cell_qdial_pane_g2

0xae93,	// (0x000474f6) cell_qdial_pane_g3_ParamLimits

0xae93,	// (0x000474f6) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0004b7e0) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0004b7e0) cell_qdial_pane_g

0x2feb,	// (0x0003f64e) cell_qdial_pane_t1_ParamLimits

0x2feb,	// (0x0003f64e) cell_qdial_pane_t1

0x3003,	// (0x0003f666) cell_qdial_pane_t2_ParamLimits

0x3003,	// (0x0003f666) cell_qdial_pane_t2

0x3016,	// (0x0003f679) cell_qdial_pane_t3_ParamLimits

0x3016,	// (0x0003f679) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0004b7e9) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0004b7e9) cell_qdial_pane_t

0xaae4,	// (0x00047147) grid_highlight_pane_cp04

0xae9f,	// (0x00047502) thumbnail_qdial_pane_ParamLimits

0xae9f,	// (0x00047502) thumbnail_qdial_pane

0xaefb,	// (0x0004755e) list_help_pane

0xaf04,	// (0x00047567) scroll_pane_cp02

0x3029,	// (0x0003f68c) help_list_pane_t1_ParamLimits

0x3029,	// (0x0003f68c) help_list_pane_t1

0x305c,	// (0x0003f6bf) bg_notes_pane_g2

0x3064,	// (0x0003f6c7) bg_notes_pane_g3

0x306c,	// (0x0003f6cf) notes_bg_pane_g1

0x3074,	// (0x0003f6d7) notes_bg_pane_g4

0x307c,	// (0x0003f6df) notes_bg_pane_g5

0x3084,	// (0x0003f6e7) notes_bg_pane_g6

0x308c,	// (0x0003f6ef) notes_bg_pane_g7

0x3094,	// (0x0003f6f7) notes_bg_pane_g8

0x309c,	// (0x0003f6ff) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0004b807) notes_bg_pane_g

0x30a4,	// (0x0003f707) list_notes_text_pane_ParamLimits

0x30a4,	// (0x0003f707) list_notes_text_pane

0xaf0d,	// (0x00047570) list_notes_text_pane_g1

0x146a,	// (0x0003dacd) list_notes_text_pane_t1

0x30cc,	// (0x0003f72f) listscroll_cale_week_pane

0x30f1,	// (0x0003f754) bg_cale_heading_pane

0xaf30,	// (0x00047593) bg_cale_pane_cp01

0x3113,	// (0x0003f776) cale_week_corner_pane

0x312d,	// (0x0003f790) cale_week_day_heading_pane

0x314f,	// (0x0003f7b2) cale_week_scroll_pane_g1

0x316c,	// (0x0003f7cf) cale_week_scroll_pane_g2

0x317f,	// (0x0003f7e2) cale_week_scroll_pane_g3

0x3192,	// (0x0003f7f5) cale_week_scroll_pane_g4

0x31a5,	// (0x0003f808) cale_week_scroll_pane_g5

0x31b8,	// (0x0003f81b) cale_week_scroll_pane_g6

0x31cb,	// (0x0003f82e) cale_week_scroll_pane_g7

0x31de,	// (0x0003f841) cale_week_scroll_pane_g8

0x31f3,	// (0x0003f856) cale_week_scroll_pane_g9

0x3206,	// (0x0003f869) cale_week_scroll_pane_g10

0x3219,	// (0x0003f87c) cale_week_scroll_pane_g11

0x322c,	// (0x0003f88f) cale_week_scroll_pane_g12

0x3243,	// (0x0003f8a6) cale_week_scroll_pane_g13

0x325e,	// (0x0003f8c1) cale_week_scroll_pane_g14

0x3279,	// (0x0003f8dc) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0004b816) cale_week_scroll_pane_g

0x3294,	// (0x0003f8f7) cale_week_time_pane

0x32a9,	// (0x0003f90c) grid_cale_week_pane

0xaf60,	// (0x000475c3) scroll_pane_cp08

0x32c8,	// (0x0003f92b) cell_cale_week_pane_ParamLimits

0x32c8,	// (0x0003f92b) cell_cale_week_pane

0x332a,	// (0x0003f98d) cale_week_day_heading_pane_t1

0x3365,	// (0x0003f9c8) cale_week_day_heading_pane_t2

0x33a0,	// (0x0003fa03) cale_week_day_heading_pane_t3

0x33db,	// (0x0003fa3e) cale_week_day_heading_pane_t4

0x3416,	// (0x0003fa79) cale_week_day_heading_pane_t5

0x3451,	// (0x0003fab4) cale_week_day_heading_pane_t6

0x348c,	// (0x0003faef) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0004b835) cale_week_day_heading_pane_t

0xaf7d,	// (0x000475e0) bg_cale_side_pane

0x34c7,	// (0x0003fb2a) cale_week_time_pane_t1

0x34e1,	// (0x0003fb44) cale_week_time_pane_t2

0x34fb,	// (0x0003fb5e) cale_week_time_pane_t3

0x3515,	// (0x0003fb78) cale_week_time_pane_t4

0x352f,	// (0x0003fb92) cale_week_time_pane_t5

0x3549,	// (0x0003fbac) cale_week_time_pane_t6

0x3569,	// (0x0003fbcc) cale_week_time_pane_t7

0x358b,	// (0x0003fbee) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0004b844) cale_week_time_pane_t

0x35af,	// (0x0003fc12) cell_cale_week_pane_g2

0x35c2,	// (0x0003fc25) cell_cale_week_pane_g3_ParamLimits

0x35c2,	// (0x0003fc25) cell_cale_week_pane_g3

0xaf8b,	// (0x000475ee) grid_highlight_pane_cp07

0xaf93,	// (0x000475f6) listscroll_gms_pane

0xaf9d,	// (0x00047600) grid_gms_pane

0xafa6,	// (0x00047609) listscroll_gms_pane_g1

0xafae,	// (0x00047611) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0004b855) listscroll_gms_pane_g

0x35da,	// (0x0003fc3d) scroll_pane_cp010

0x35e5,	// (0x0003fc48) cell_gms_pane_ParamLimits

0x35e5,	// (0x0003fc48) cell_gms_pane

0x35f8,	// (0x0003fc5b) cell_gms_pane_g1

0xafb6,	// (0x00047619) cell_gms_pane_g2

0xafbe,	// (0x00047621) cell_gms_pane_g3

0xafc7,	// (0x0004762a) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0004b85a) cell_gms_pane_g

0xafd0,	// (0x00047633) grid_highlight_pane_cp09

0x59b0,	// (0x00042013) phob_pre_status_pane_g1

0x59b8,	// (0x0004201b) phob_pre_status_pane_g2

0x59c0,	// (0x00042023) phob_pre_status_pane_g3

0x59c8,	// (0x0004202b) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0004bc49) phob_pre_status_pane_g

0x59d8,	// (0x0004203b) phob_pre_status_pane_t1

0x59e8,	// (0x0004204b) phob_pre_status_pane_t2

0x59f8,	// (0x0004205b) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0004bc54) phob_pre_status_pane_t

0xaae4,	// (0x00047147) bg_list_pane_cp05

0x3608,	// (0x0003fc6b) grid_vorec_pane

0x3612,	// (0x0003fc75) vorec_t1

0x3620,	// (0x0003fc83) vorec_t2

0x362e,	// (0x0003fc91) vorec_t3

0x363c,	// (0x0003fc9f) vorec_t4

0x364a,	// (0x0003fcad) vorec_t5

0x3658,	// (0x0003fcbb) vorec_t6

0x0006,

0xf200,	// (0x0004b863) vorec_t

0x3674,	// (0x0003fcd7) wait_bar_pane_cp01

0x367c,	// (0x0003fcdf) cell_vorec_pane_ParamLimits

0x367c,	// (0x0003fcdf) cell_vorec_pane

0x368f,	// (0x0003fcf2) cell_vorec_pane_g1

0xaae4,	// (0x00047147) grid_highlight_pane_cp05

0x36a9,	// (0x0003fd0c) cams_zoom_pane

0x36b5,	// (0x0003fd18) image_vga_pane

0x36c4,	// (0x0003fd27) main_camera_pane_g1

0x36d2,	// (0x0003fd35) main_camera_pane_g2

0x36de,	// (0x0003fd41) main_camera_pane_g3

0x36ea,	// (0x0003fd4d) main_camera_pane_g4

0x36f6,	// (0x0003fd59) main_camera_pane_g5

0x3702,	// (0x0003fd65) main_camera_pane_g6

0x370e,	// (0x0003fd71) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0004b872) main_camera_pane_g

0x371a,	// (0x0003fd7d) main_camera_pane_t1

0x372c,	// (0x0003fd8f) main_camera_pane_t2

0x0001,

0xf220,	// (0x0004b883) main_camera_pane_t

0x374d,	// (0x0003fdb0) cams_zoom_pane_cp_ParamLimits

0x374d,	// (0x0003fdb0) cams_zoom_pane_cp

0x3771,	// (0x0003fdd4) image_cif_pane_ParamLimits

0x3771,	// (0x0003fdd4) image_cif_pane

0x378f,	// (0x0003fdf2) image_subqcif_pane

0x3797,	// (0x0003fdfa) main_video_pane_g1_ParamLimits

0x3797,	// (0x0003fdfa) main_video_pane_g1

0x37b7,	// (0x0003fe1a) main_video_pane_g2_ParamLimits

0x37b7,	// (0x0003fe1a) main_video_pane_g2

0x37e7,	// (0x0003fe4a) main_video_pane_g3_ParamLimits

0x37e7,	// (0x0003fe4a) main_video_pane_g3

0x3810,	// (0x0003fe73) main_video_pane_g4_ParamLimits

0x3810,	// (0x0003fe73) main_video_pane_g4

0x3839,	// (0x0003fe9c) main_video_pane_g5_ParamLimits

0x3839,	// (0x0003fe9c) main_video_pane_g5

0xafe4,	// (0x00047647) main_video_pane_g6_ParamLimits

0xafe4,	// (0x00047647) main_video_pane_g6

0x0006,

0xf225,	// (0x0004b888) main_video_pane_g_ParamLimits

0xf225,	// (0x0004b888) main_video_pane_g

0x385b,	// (0x0003febe) main_video_pane_t1_ParamLimits

0x385b,	// (0x0003febe) main_video_pane_t1

0xaffe,	// (0x00047661) cams_zoom_pane_g1

0xb007,	// (0x0004766a) cams_zoom_pane_g2

0xb010,	// (0x00047673) cams_zoom_pane_g3

0xb019,	// (0x0004767c) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0004b897) cams_zoom_pane_g

0x38a5,	// (0x0003ff08) grid_cams_pane

0x38b3,	// (0x0003ff16) linegrid_cams_pane

0x38c1,	// (0x0003ff24) cell_cams_pane_ParamLimits

0x38c1,	// (0x0003ff24) cell_cams_pane

0xb022,	// (0x00047685) cams_burst_image_pane

0xb02a,	// (0x0004768d) cell_cams_pane_g1

0xaae4,	// (0x00047147) grid_highlight_pane_cp03

0xae67,	// (0x000474ca) mp_bg_pane_g1

0xaae4,	// (0x00047147) bg_list_pane_cp03

0xcd5a,	// (0x000493bd) bg_mp_pane

0xcd62,	// (0x000493c5) grid_mp_pane

0xcd6a,	// (0x000493cd) media_player_g1

0xcd72,	// (0x000493d5) media_player_t1

0xcd80,	// (0x000493e3) media_player_t2

0xcd8e,	// (0x000493f1) media_player_t3

0xcd9c,	// (0x000493ff) media_player_t4

0xcdaa,	// (0x0004940d) media_player_t5

0xcdb8,	// (0x0004941b) media_player_t6

0xcdc6,	// (0x00049429) media_player_t7

0x0006,

0xf5d0,	// (0x0004bc33) media_player_t

0xcdd4,	// (0x00049437) wait_bar_pane_cp02

0xf5b5,	// (0x0004bc18) main_usb_pane_t

0x59a7,	// (0x0004200a) cell_mp_pane

0xae67,	// (0x000474ca) cell_mp_pane_g1

0xaae4,	// (0x00047147) grid_highlight_pane_cp06

0xb032,	// (0x00047695) grid_skin_colour_pane

0xb03a,	// (0x0004769d) list_highlight_pane_cp03

0x38d4,	// (0x0003ff37) skin_g1

0xb042,	// (0x000476a5) skin_t1

0xb051,	// (0x000476b4) skin_t2

0x0001,

0xf269,	// (0x0004b8cc) skin_t

0x38de,	// (0x0003ff41) cell_skin_colour_pane_ParamLimits

0x38de,	// (0x0003ff41) cell_skin_colour_pane

0xb05f,	// (0x000476c2) cell_skin_colour_pane_g1

0x3962,	// (0x0003ffc5) call_video_g1_ParamLimits

0x3962,	// (0x0003ffc5) call_video_g1

0x3972,	// (0x0003ffd5) call_video_g2_ParamLimits

0x3972,	// (0x0003ffd5) call_video_g2

0x0001,

0xf26e,	// (0x0004b8d1) call_video_g_ParamLimits

0xf26e,	// (0x0004b8d1) call_video_g

0x39cc,	// (0x0004002f) call_video_uplink_pane_cp1_ParamLimits

0x39cc,	// (0x0004002f) call_video_uplink_pane_cp1

0xb071,	// (0x000476d4) call_video_uplink_pane_cp2

0x3a98,	// (0x000400fb) video_down_crop_pane_ParamLimits

0x3a98,	// (0x000400fb) video_down_crop_pane

0x3b96,	// (0x000401f9) video_down_pane_ParamLimits

0x3b96,	// (0x000401f9) video_down_pane

0xb079,	// (0x000476dc) video_down_subqcif_pane_ParamLimits

0xb079,	// (0x000476dc) video_down_subqcif_pane

0xb091,	// (0x000476f4) video_down_subqcif_pane_cp_ParamLimits

0xb091,	// (0x000476f4) video_down_subqcif_pane_cp

0xb0b7,	// (0x0004771a) im_reading_pane_ParamLimits

0xb0b7,	// (0x0004771a) im_reading_pane

0x3cb8,	// (0x0004031b) im_writing_pane_ParamLimits

0x3cb8,	// (0x0004031b) im_writing_pane

0x3cd6,	// (0x00040339) im_reading_pane_t1

0xb0d1,	// (0x00047734) list_im_pane

0xb0e2,	// (0x00047745) scroll_pane_cp07

0x3d2a,	// (0x0004038d) im_writing_pane_t1_ParamLimits

0x3d2a,	// (0x0004038d) im_writing_pane_t1

0xb0fb,	// (0x0004775e) im_writing_pane_t2_ParamLimits

0xb0fb,	// (0x0004775e) im_writing_pane_t2

0x0001,

0xf278,	// (0x0004b8db) im_writing_pane_t_ParamLimits

0xf278,	// (0x0004b8db) im_writing_pane_t

0xaae4,	// (0x00047147) input_focus_pane_cp04

0xaae4,	// (0x00047147) input_focus_pane_cp05

0x3d3f,	// (0x000403a2) list_im_single_pane_ParamLimits

0x3d3f,	// (0x000403a2) list_im_single_pane

0x3d63,	// (0x000403c6) list_single_im_pane_t1

0x596b,	// (0x00041fce) blid_accuracy_pane

0x5973,	// (0x00041fd6) blid_compass_pane

0x597d,	// (0x00041fe0) main_location_t1

0x598b,	// (0x00041fee) main_location_t2

0x5999,	// (0x00041ffc) main_location_t3

0x0002,

0xf5df,	// (0x0004bc42) main_location_t

0xaae4,	// (0x00047147) aid_levels_location

0xae67,	// (0x000474ca) blid_accuracy_pane_g1

0xae67,	// (0x000474ca) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0004b93d) blid_accuracy_pane_g

0xb143,	// (0x000477a6) wml_content_pane

0xb181,	// (0x000477e4) wml_button_pane_ParamLimits

0xb181,	// (0x000477e4) wml_button_pane

0x3d72,	// (0x000403d5) wml_list_single_large_pane_ParamLimits

0x3d72,	// (0x000403d5) wml_list_single_large_pane

0x3d9c,	// (0x000403ff) wml_list_single_medium_pane_ParamLimits

0x3d9c,	// (0x000403ff) wml_list_single_medium_pane

0x3dcd,	// (0x00040430) wml_list_single_small_pane_ParamLimits

0x3dcd,	// (0x00040430) wml_list_single_small_pane

0xb195,	// (0x000477f8) wml_selection_box_pane_ParamLimits

0xb195,	// (0x000477f8) wml_selection_box_pane

0xb1a8,	// (0x0004780b) wml_list_single_pane_t1

0xb1b7,	// (0x0004781a) wml_list_single_medium_pane_t1

0xb1c6,	// (0x00047829) wml_list_single_large_pane_t1

0xb1d5,	// (0x00047838) input_focus_pane_cp02_ParamLimits

0xb1d5,	// (0x00047838) input_focus_pane_cp02

0xb1e8,	// (0x0004784b) wml_selection_box_pane_g1

0xb1f1,	// (0x00047854) wml_selection_box_pane_t1_ParamLimits

0xb1f1,	// (0x00047854) wml_selection_box_pane_t1

0xad4d,	// (0x000473b0) bg_wml_button_pane_ParamLimits

0xad4d,	// (0x000473b0) bg_wml_button_pane

0xb209,	// (0x0004786c) wml_button_pane_g1

0xb211,	// (0x00047874) wml_button_pane_t1

0xb209,	// (0x0004786c) wml_button_bg_pane_g1

0xb221,	// (0x00047884) wml_button_bg_pane_g2

0xb229,	// (0x0004788c) wml_button_bg_pane_g3

0xb231,	// (0x00047894) wml_button_bg_pane_g4

0xb239,	// (0x0004789c) wml_button_bg_pane_g5

0xb241,	// (0x000478a4) wml_button_bg_pane_g6

0xb249,	// (0x000478ac) wml_button_bg_pane_g7

0xb251,	// (0x000478b4) wml_button_bg_pane_g8

0xb259,	// (0x000478bc) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0004b8e0) wml_button_bg_pane_g

0x3e07,	// (0x0004046a) bg_list_pane_cp02

0xb261,	// (0x000478c4) mce_header_pane_ParamLimits

0xb261,	// (0x000478c4) mce_header_pane

0xb277,	// (0x000478da) mce_icon_pane

0xb277,	// (0x000478da) mce_image_pane

0xb280,	// (0x000478e3) mce_text_pane_ParamLimits

0xb280,	// (0x000478e3) mce_text_pane

0x3e11,	// (0x00040474) scroll_pane_cp03

0xb179,	// (0x000477dc) scroll_pane_cp04

0xb293,	// (0x000478f6) scroll_pane_cp05_ParamLimits

0xb293,	// (0x000478f6) scroll_pane_cp05

0x3e1b,	// (0x0004047e) mce_header_field_pane_ParamLimits

0x3e1b,	// (0x0004047e) mce_header_field_pane

0x3e3b,	// (0x0004049e) mce_header_field_pane_2_ParamLimits

0x3e3b,	// (0x0004049e) mce_header_field_pane_2

0x3e51,	// (0x000404b4) mce_header_field_pane_3

0x3e59,	// (0x000404bc) list_single_mce_message_pane_ParamLimits

0x3e59,	// (0x000404bc) list_single_mce_message_pane

0x3e84,	// (0x000404e7) list_single_mce_smart_pane_ParamLimits

0x3e84,	// (0x000404e7) list_single_mce_smart_pane

0xb29f,	// (0x00047902) input_focus_pane_cp03

0xb2a8,	// (0x0004790b) list_header_data_pane

0x3eba,	// (0x0004051d) mce_header_field_pane_t1

0x3ec8,	// (0x0004052b) list_single_mce_header_pane_ParamLimits

0x3ec8,	// (0x0004052b) list_single_mce_header_pane

0xb2b0,	// (0x00047913) list_single_mce_header_pane_t1

0xb2bf,	// (0x00047922) list_single_mce_message_pane_g1

0xb2c7,	// (0x0004792a) list_single_mce_message_pane_t1

0x3f1a,	// (0x0004057d) bg_cale_heading_pane_cp01_ParamLimits

0x3f1a,	// (0x0004057d) bg_cale_heading_pane_cp01

0xb2d5,	// (0x00047938) bg_cale_pane_cp02_ParamLimits

0xb2d5,	// (0x00047938) bg_cale_pane_cp02

0x3f5d,	// (0x000405c0) cale_month_corner_pane

0x3f77,	// (0x000405da) cale_month_day_heading_pane_ParamLimits

0x3f77,	// (0x000405da) cale_month_day_heading_pane

0x3fd2,	// (0x00040635) cale_month_pane_g1_ParamLimits

0x3fd2,	// (0x00040635) cale_month_pane_g1

0x400a,	// (0x0004066d) cale_month_pane_g2_ParamLimits

0x400a,	// (0x0004066d) cale_month_pane_g2

0x4033,	// (0x00040696) cale_month_pane_g3_ParamLimits

0x4033,	// (0x00040696) cale_month_pane_g3

0x407f,	// (0x000406e2) cale_month_pane_g4_ParamLimits

0x407f,	// (0x000406e2) cale_month_pane_g4

0x40cb,	// (0x0004072e) cale_month_pane_g5_ParamLimits

0x40cb,	// (0x0004072e) cale_month_pane_g5

0x4117,	// (0x0004077a) cale_month_pane_g6_ParamLimits

0x4117,	// (0x0004077a) cale_month_pane_g6

0x4163,	// (0x000407c6) cale_month_pane_g7_ParamLimits

0x4163,	// (0x000407c6) cale_month_pane_g7

0x41c7,	// (0x0004082a) cale_month_pane_g8_ParamLimits

0x41c7,	// (0x0004082a) cale_month_pane_g8

0x422b,	// (0x0004088e) cale_month_pane_g9_ParamLimits

0x422b,	// (0x0004088e) cale_month_pane_g9

0x4289,	// (0x000408ec) cale_month_pane_g10_ParamLimits

0x4289,	// (0x000408ec) cale_month_pane_g10

0x42e5,	// (0x00040948) cale_month_pane_g11_ParamLimits

0x42e5,	// (0x00040948) cale_month_pane_g11

0x4339,	// (0x0004099c) cale_month_pane_g12_ParamLimits

0x4339,	// (0x0004099c) cale_month_pane_g12

0x438f,	// (0x000409f2) cale_month_pane_g13_ParamLimits

0x438f,	// (0x000409f2) cale_month_pane_g13

0x000c,

0xf290,	// (0x0004b8f3) cale_month_pane_g_ParamLimits

0xf290,	// (0x0004b8f3) cale_month_pane_g

0x43e5,	// (0x00040a48) cale_month_week_pane

0x43fa,	// (0x00040a5d) grid_cale_month_pane_ParamLimits

0x43fa,	// (0x00040a5d) grid_cale_month_pane

0x4448,	// (0x00040aab) cale_month_day_heading_pane_t1

0x44ce,	// (0x00040b31) cale_month_day_heading_pane_t2

0x455f,	// (0x00040bc2) cale_month_day_heading_pane_t3

0x45f0,	// (0x00040c53) cale_month_day_heading_pane_t4

0x4681,	// (0x00040ce4) cale_month_day_heading_pane_t5

0x4712,	// (0x00040d75) cale_month_day_heading_pane_t6

0x47a3,	// (0x00040e06) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0004b90e) cale_month_day_heading_pane_t

0xaf7d,	// (0x000475e0) bg_cale_side_pane_cp01

0x484c,	// (0x00040eaf) cale_month_week_pane_t1

0x4865,	// (0x00040ec8) cale_month_week_pane_t2

0x487e,	// (0x00040ee1) cale_month_week_pane_t3

0x4897,	// (0x00040efa) cale_month_week_pane_t4

0x48b0,	// (0x00040f13) cale_month_week_pane_t5

0x48d1,	// (0x00040f34) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0004b91d) cale_month_week_pane_t

0x48f2,	// (0x00040f55) cell_cale_month_pane_ParamLimits

0x48f2,	// (0x00040f55) cell_cale_month_pane

0x4a14,	// (0x00041077) cell_cale_month_pane_g1

0x4a20,	// (0x00041083) cell_cale_month_pane_t1_ParamLimits

0x4a20,	// (0x00041083) cell_cale_month_pane_t1

0xaf8b,	// (0x000475ee) grid_highlight_pane_cp08

0xae67,	// (0x000474ca) main_smil_g1

0x4a40,	// (0x000410a3) smil_status_pane

0xb314,	// (0x00047977) smil_text_pane

0xcc7a,	// (0x000492dd) bg_popup_call3_rect_pane_g8

0xcc82,	// (0x000492e5) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0004bbd6) bg_popup_call3_rect_pane_g

0xcec9,	// (0x0004952c) smil_status_volume_pane_g1

0xb31e,	// (0x00047981) smil_status_pane_t1

0x5d95,	// (0x000423f8) volume_smil_pane

0xb335,	// (0x00047998) list_smil_text_pane

0x4a53,	// (0x000410b6) scroll_pane_cp011

0x4a5e,	// (0x000410c1) smil_text_list_pane_t1_ParamLimits

0x4a5e,	// (0x000410c1) smil_text_list_pane_t1

0x4ad6,	// (0x00041139) aid_volume_smil_ParamLimits

0x4ad6,	// (0x00041139) aid_volume_smil

0xae67,	// (0x000474ca) smil_volume_pane_g1

0xae67,	// (0x000474ca) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0004b93d) smil_volume_pane_g

0x30cc,	// (0x0003f72f) listscroll_cale_day_pane

0xb33f,	// (0x000479a2) bg_cale_pane

0xb357,	// (0x000479ba) list_cale_pane

0xb37a,	// (0x000479dd) scroll_pane_cp09

0xb38b,	// (0x000479ee) cale_bg_pane_g1

0xb393,	// (0x000479f6) cale_bg_pane_g2

0xb39b,	// (0x000479fe) cale_bg_pane_g3

0xb3a3,	// (0x00047a06) cale_bg_pane_g4

0xb3ab,	// (0x00047a0e) cale_bg_pane_g5

0xb3b3,	// (0x00047a16) cale_bg_pane_g6

0xb3bb,	// (0x00047a1e) cale_bg_pane_g7

0xb3c3,	// (0x00047a26) cale_bg_pane_g8

0xb3cb,	// (0x00047a2e) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0004b942) cale_bg_pane_g

0x4b00,	// (0x00041163) list_cale_time_pane_ParamLimits

0x4b00,	// (0x00041163) list_cale_time_pane

0xb3d3,	// (0x00047a36) list_cale_time_pane_g1_ParamLimits

0xb3d3,	// (0x00047a36) list_cale_time_pane_g1

0xb3df,	// (0x00047a42) list_cale_time_pane_g2_ParamLimits

0xb3df,	// (0x00047a42) list_cale_time_pane_g2

0x4b22,	// (0x00041185) list_cale_time_pane_g3_ParamLimits

0x4b22,	// (0x00041185) list_cale_time_pane_g3

0x4b30,	// (0x00041193) list_cale_time_pane_g4_ParamLimits

0x4b30,	// (0x00041193) list_cale_time_pane_g4

0x4b3e,	// (0x000411a1) list_cale_time_pane_g5_ParamLimits

0x4b3e,	// (0x000411a1) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0004b955) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0004b955) list_cale_time_pane_g

0xb3f9,	// (0x00047a5c) list_cale_time_pane_t1_ParamLimits

0xb3f9,	// (0x00047a5c) list_cale_time_pane_t1

0xb421,	// (0x00047a84) list_cale_time_pane_t2_ParamLimits

0xb421,	// (0x00047a84) list_cale_time_pane_t2

0x4e05,	// (0x00041468) aid_blid_cardinal_pane

0x4e47,	// (0x000414aa) compass_pane_t4

0xb449,	// (0x00047aac) list_cale_time_pane_t4_ParamLimits

0xb449,	// (0x00047aac) list_cale_time_pane_t4

0x4e55,	// (0x000414b8) compass_pane_t5

0x4e65,	// (0x000414c8) compass_pane_t6

0x4e73,	// (0x000414d6) compass_pane_t7

0xb906,	// (0x00047f69) navi_pane_cc_t1

0xbaf9,	// (0x0004815c) aid_phob_thumbnail_center_pane

0x5471,	// (0x00041ad4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0004b962) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0004b962) list_cale_time_pane_t

0xa73b,	// (0x00046d9e) bg_popup_window_pane_cp02_ParamLimits

0xa73b,	// (0x00046d9e) bg_popup_window_pane_cp02

0xb471,	// (0x00047ad4) heading_pane_cp01_ParamLimits

0xb471,	// (0x00047ad4) heading_pane_cp01

0xb47d,	// (0x00047ae0) loc_req_pane_ParamLimits

0xb47d,	// (0x00047ae0) loc_req_pane

0xb48d,	// (0x00047af0) loc_type_pane_ParamLimits

0xb48d,	// (0x00047af0) loc_type_pane

0xb49f,	// (0x00047b02) loc_type_pane_t1_ParamLimits

0xb49f,	// (0x00047b02) loc_type_pane_t1

0xb4b1,	// (0x00047b14) loc_type_pane_t2_ParamLimits

0xb4b1,	// (0x00047b14) loc_type_pane_t2

0xb4c3,	// (0x00047b26) loc_type_pane_t3_ParamLimits

0xb4c3,	// (0x00047b26) loc_type_pane_t3

0x0002,

0xf306,	// (0x0004b969) loc_type_pane_t_ParamLimits

0xf306,	// (0x0004b969) loc_type_pane_t

0xb4d5,	// (0x00047b38) list_loc_req_pane

0xb4df,	// (0x00047b42) scroll_pane_cp012

0x4b4c,	// (0x000411af) list_single_loc_request_popup_menu_pane_ParamLimits

0x4b4c,	// (0x000411af) list_single_loc_request_popup_menu_pane

0xb4ea,	// (0x00047b4d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb4ea,	// (0x00047b4d) list_single_loc_request_popup_menu_pane_g1

0xb4f6,	// (0x00047b59) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb4f6,	// (0x00047b59) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0004b970) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0004b970) list_single_loc_request_popup_menu_pane_g

0xb502,	// (0x00047b65) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb502,	// (0x00047b65) list_single_loc_request_popup_menu_pane_t1

0x4b5e,	// (0x000411c1) bg_popup_window_pane_cp03_ParamLimits

0x4b5e,	// (0x000411c1) bg_popup_window_pane_cp03

0x4b6c,	// (0x000411cf) heading_loc_req_pane_ParamLimits

0x4b6c,	// (0x000411cf) heading_loc_req_pane

0x4b78,	// (0x000411db) popup_dyc_status_message_window_g1_ParamLimits

0x4b78,	// (0x000411db) popup_dyc_status_message_window_g1

0x4b84,	// (0x000411e7) popup_dyc_status_message_window_t1_ParamLimits

0x4b84,	// (0x000411e7) popup_dyc_status_message_window_t1

0x4b96,	// (0x000411f9) popup_dyc_status_message_window_t2_ParamLimits

0x4b96,	// (0x000411f9) popup_dyc_status_message_window_t2

0x4ba8,	// (0x0004120b) popup_dyc_status_message_window_t3_ParamLimits

0x4ba8,	// (0x0004120b) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0004b975) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0004b975) popup_dyc_status_message_window_t

0xaae4,	// (0x00047147) bg_heading_pane_cp01

0xb518,	// (0x00047b7b) heading_loc_req_pane_g1

0xb520,	// (0x00047b83) heading_loc_req_pane_g2

0xb528,	// (0x00047b8b) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0004b97c) heading_loc_req_pane_g

0xb530,	// (0x00047b93) heading_loc_req_pane_t1

0xb53f,	// (0x00047ba2) bg_popup_sub_pane_cp01_ParamLimits

0xb53f,	// (0x00047ba2) bg_popup_sub_pane_cp01

0xb54d,	// (0x00047bb0) popup_cale_events_window_g1_ParamLimits

0xb54d,	// (0x00047bb0) popup_cale_events_window_g1

0xb587,	// (0x00047bea) popup_cale_events_window_g2_ParamLimits

0xb587,	// (0x00047bea) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0004b9b0) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0004b9b0) popup_cale_events_window_g

0xb5a7,	// (0x00047c0a) popup_cale_events_window_t1_ParamLimits

0xb5a7,	// (0x00047c0a) popup_cale_events_window_t1

0xb5b9,	// (0x00047c1c) popup_cale_events_window_t2_ParamLimits

0xb5b9,	// (0x00047c1c) popup_cale_events_window_t2

0xb5f7,	// (0x00047c5a) popup_cale_events_window_t3_ParamLimits

0xb5f7,	// (0x00047c5a) popup_cale_events_window_t3

0xb631,	// (0x00047c94) popup_cale_events_window_t4_ParamLimits

0xb631,	// (0x00047c94) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0004b9b5) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0004b9b5) popup_cale_events_window_t

0x4bd2,	// (0x00041235) call_type_pane

0xb9dd,	// (0x00048040) popup_call_status_window_g1

0x4bde,	// (0x00041241) popup_call_status_window_g2

0x4bea,	// (0x0004124d) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0004b9be) popup_call_status_window_g

0xb667,	// (0x00047cca) call_type_pane_g1

0xb670,	// (0x00047cd3) call_type_pane_g2

0x0001,

0xf362,	// (0x0004b9c5) call_type_pane_g

0xaae4,	// (0x00047147) bg_popup_sub_pane_cp02

0xb679,	// (0x00047cdc) listscroll_popup_wml_pane

0xb681,	// (0x00047ce4) list_wml_pane

0xb68b,	// (0x00047cee) scroll_pane_cp013

0xb696,	// (0x00047cf9) list_single_graphic_popup_wml_pane_ParamLimits

0xb696,	// (0x00047cf9) list_single_graphic_popup_wml_pane

0xae67,	// (0x000474ca) list_single_graphic_popup_wml_pane_g1

0xb6aa,	// (0x00047d0d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0004b9ca) list_single_graphic_popup_wml_pane_g

0xb6b2,	// (0x00047d15) list_single_graphic_popup_wml_pane_t1

0xb6c8,	// (0x00047d2b) aid_call_pane

0xad45,	// (0x000473a8) popup_clock_analogue_window_g1

0xad45,	// (0x000473a8) popup_clock_analogue_window_g2

0x4bf6,	// (0x00041259) popup_clock_analogue_window_g3

0x4bf6,	// (0x00041259) popup_clock_analogue_window_g4

0xae67,	// (0x000474ca) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0004b9cf) popup_clock_analogue_window_g

0x4bfe,	// (0x00041261) popup_clock_analogue_window_t1

0x4c0c,	// (0x0004126f) clock_digital_number_pane_ParamLimits

0x4c0c,	// (0x0004126f) clock_digital_number_pane

0x4c18,	// (0x0004127b) clock_digital_number_pane_cp02_ParamLimits

0x4c18,	// (0x0004127b) clock_digital_number_pane_cp02

0x4c24,	// (0x00041287) clock_digital_number_pane_cp03_ParamLimits

0x4c24,	// (0x00041287) clock_digital_number_pane_cp03

0x4c30,	// (0x00041293) clock_digital_number_pane_cp04_ParamLimits

0x4c30,	// (0x00041293) clock_digital_number_pane_cp04

0x4c40,	// (0x000412a3) clock_digital_separator_pane_ParamLimits

0x4c40,	// (0x000412a3) clock_digital_separator_pane

0x4c4c,	// (0x000412af) popup_clock_digital_window_t1

0xae67,	// (0x000474ca) clock_digital_number_pane_g1

0xae67,	// (0x000474ca) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0004b93d) clock_digital_number_pane_g

0xae67,	// (0x000474ca) clock_digital_separator_pane_g1

0xae67,	// (0x000474ca) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0004b93d) clock_digital_separator_pane_g

0xaae4,	// (0x00047147) bg_popup_window_pane_cp04

0xb6d0,	// (0x00047d33) heading_pane_cp03

0xb6d8,	// (0x00047d3b) listscroll_popup_gms_pane

0xb6e0,	// (0x00047d43) grid_large_graphic_popup_pane

0xb6ea,	// (0x00047d4d) listscroll_popup_gms_pane_g1

0xb6f2,	// (0x00047d55) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0004b9da) listscroll_popup_gms_pane_g

0xb179,	// (0x000477dc) scroll_pane_cp014

0x4c69,	// (0x000412cc) cell_large_graphic_popup_pane_ParamLimits

0x4c69,	// (0x000412cc) cell_large_graphic_popup_pane

0x4c81,	// (0x000412e4) cell_large_graphic_popup_pane_g1_ParamLimits

0x4c81,	// (0x000412e4) cell_large_graphic_popup_pane_g1

0xb6fa,	// (0x00047d5d) cell_large_graphic_popup_pane_g2_ParamLimits

0xb6fa,	// (0x00047d5d) cell_large_graphic_popup_pane_g2

0xb706,	// (0x00047d69) cell_large_graphic_popup_pane_g3_ParamLimits

0xb706,	// (0x00047d69) cell_large_graphic_popup_pane_g3

0xb713,	// (0x00047d76) cell_large_graphic_popup_pane_g4_ParamLimits

0xb713,	// (0x00047d76) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0004b9df) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0004b9df) cell_large_graphic_popup_pane_g

0xb723,	// (0x00047d86) grid_highlight_pane_cp010

0xae67,	// (0x000474ca) bg_popup_call_pane_g1

0xb72d,	// (0x00047d90) list_single_graphic_popup_conf_pane_ParamLimits

0xb72d,	// (0x00047d90) list_single_graphic_popup_conf_pane

0xb740,	// (0x00047da3) list_highlight_pane_cp01

0xb749,	// (0x00047dac) list_single_graphic_popup_conf_pane_g1

0xb751,	// (0x00047db4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0004b9e8) list_single_graphic_popup_conf_pane_g

0xb759,	// (0x00047dbc) list_single_graphic_popup_conf_pane_t1

0xb767,	// (0x00047dca) linegrid_cams_pane_g1

0x4c8d,	// (0x000412f0) linegrid_cams_pane_g2

0xafbe,	// (0x00047621) linegrid_cams_pane_g3

0xb770,	// (0x00047dd3) linegrid_cams_pane_g4

0x4c96,	// (0x000412f9) linegrid_cams_pane_g5

0x4c9f,	// (0x00041302) linegrid_cams_pane_g6

0xafc7,	// (0x0004762a) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0004b9ed) linegrid_cams_pane_g

0xb779,	// (0x00047ddc) popup_clock_analogue_window

0xb779,	// (0x00047ddc) popup_clock_digital_window

0xaae4,	// (0x00047147) popup_phob_thumbnail_window

0xae67,	// (0x000474ca) call_video_uplink_pane_g1

0xb782,	// (0x00047de5) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0004b9fc) call_video_uplink_pane_g

0xb78a,	// (0x00047ded) video_uplink_pane

0xb792,	// (0x00047df5) mce_image_pane_g1

0x4ca8,	// (0x0004130b) mce_image_pane_g2

0x4cb2,	// (0x00041315) mce_image_pane_g3

0x4cba,	// (0x0004131d) mce_image_pane_g4

0x4cc2,	// (0x00041325) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0004ba01) mce_image_pane_g

0xb79c,	// (0x00047dff) control_top_pane_stacon_cp01_ParamLimits

0xb79c,	// (0x00047dff) control_top_pane_stacon_cp01

0xb7b0,	// (0x00047e13) uni_indicator_pane_stacon_cp01_ParamLimits

0xb7b0,	// (0x00047e13) uni_indicator_pane_stacon_cp01

0xb7c1,	// (0x00047e24) bg_popup_sub_pane_cp03

0xb7cb,	// (0x00047e2e) chi_dic_find_pane

0x4cca,	// (0x0004132d) listscroll_chi_dic_pane

0xb7d3,	// (0x00047e36) main_pane_chidic_g1

0xb7db,	// (0x00047e3e) chi_dic_find_pane_t1

0xb7e9,	// (0x00047e4c) find_chidic_pane

0xb7f2,	// (0x00047e55) chi_dic_list_pane_ParamLimits

0xb7f2,	// (0x00047e55) chi_dic_list_pane

0xb803,	// (0x00047e66) scroll_pane_cp020

0xb80b,	// (0x00047e6e) find_chidic_pane_t1

0xaae4,	// (0x00047147) input_focus_pane_cp06

0x4cde,	// (0x00041341) list_chi_dic_pane_ParamLimits

0x4cde,	// (0x00041341) list_chi_dic_pane

0x4cf8,	// (0x0004135b) list_chi_dic_pane_t1_ParamLimits

0x4cf8,	// (0x0004135b) list_chi_dic_pane_t1

0xaae4,	// (0x00047147) list_highlight_pane_cp020

0xb81a,	// (0x00047e7d) bg_cale_heading_pane_g1

0x4d0b,	// (0x0004136e) bg_cale_heading_pane_g2

0x4d13,	// (0x00041376) bg_cale_heading_pane_g3

0x4d1b,	// (0x0004137e) bg_cale_heading_pane_g4

0x4d25,	// (0x00041388) bg_cale_heading_pane_g5

0x4d2f,	// (0x00041392) bg_cale_heading_pane_g6

0x4d37,	// (0x0004139a) bg_cale_heading_pane_g7

0x4d3f,	// (0x000413a2) bg_cale_heading_pane_g8

0x4d49,	// (0x000413ac) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0004ba0c) bg_cale_heading_pane_g

0xb81a,	// (0x00047e7d) bg_cale_side_pane_g1

0x4d53,	// (0x000413b6) bg_cale_side_pane_g2

0x4d5d,	// (0x000413c0) bg_cale_side_pane_g3

0x4d67,	// (0x000413ca) bg_cale_side_pane_g4

0x4d71,	// (0x000413d4) bg_cale_side_pane_g5

0x4d7b,	// (0x000413de) bg_cale_side_pane_g6

0x4d85,	// (0x000413e8) bg_cale_side_pane_g7

0x4d8f,	// (0x000413f2) bg_cale_side_pane_g8

0x4d97,	// (0x000413fa) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0004ba1f) bg_cale_side_pane_g

0x4d9f,	// (0x00041402) popup_call_status_window_ParamLimits

0x4d9f,	// (0x00041402) popup_call_status_window

0xb822,	// (0x00047e85) stacon_top_pane

0xb82a,	// (0x00047e8d) status_pane_ParamLimits

0xb82a,	// (0x00047e8d) status_pane

0xb83f,	// (0x00047ea2) status_small_pane

0xb847,	// (0x00047eaa) control_pane

0xaae4,	// (0x00047147) stacon_bottom_pane

0xb84f,	// (0x00047eb2) list_single_mce_smart_pane_t1_ParamLimits

0xb84f,	// (0x00047eb2) list_single_mce_smart_pane_t1

0xb862,	// (0x00047ec5) list_single_mce_smart_pane_t2_ParamLimits

0xb862,	// (0x00047ec5) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0004ba32) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0004ba32) list_single_mce_smart_pane_t

0x4dab,	// (0x0004140e) compass_pane

0x4db7,	// (0x0004141a) main_location2_pane_t1

0x4dcb,	// (0x0004142e) main_location2_pane_t2

0x4ddf,	// (0x00041442) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0004ba37) main_location2_pane_t

0xb881,	// (0x00047ee4) compass_pane_g1_ParamLimits

0xb881,	// (0x00047ee4) compass_pane_g1

0x4e29,	// (0x0004148c) compass_pane_t1

0x4e38,	// (0x0004149b) compass_pane_t2

0x0005,

0xf3dd,	// (0x0004ba40) compass_pane_t

0x4e83,	// (0x000414e6) text_secondary_cp61

0xb8fd,	// (0x00047f60) navi_pane_cams_g5

0xb979,	// (0x00047fdc) navi_pane_im_t1

0xb987,	// (0x00047fea) navi_pane_mp_g1_ParamLimits

0xb987,	// (0x00047fea) navi_pane_mp_g1

0xb99b,	// (0x00047ffe) navi_pane_mp_g2_ParamLimits

0xb99b,	// (0x00047ffe) navi_pane_mp_g2

0xb9a7,	// (0x0004800a) navi_pane_mp_g3_ParamLimits

0xb9a7,	// (0x0004800a) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0004ba54) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0004ba54) navi_pane_mp_g

0xb9b3,	// (0x00048016) navi_pane_mp_t1

0xb9c1,	// (0x00048024) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0004ba5b) navi_pane_mp_t

0xba3a,	// (0x0004809d) navi_pane_vt_g1

0xb9b3,	// (0x00048016) navi_pane_vt_t1

0xba42,	// (0x000480a5) navi_slider_pane

0xba52,	// (0x000480b5) zooming_pane

0xba5a,	// (0x000480bd) navi_slider_pane_g1

0x4ebe,	// (0x00041521) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0004ba62) navi_slider_pane_g

0xba7e,	// (0x000480e1) aid_levels_zoom

0xba86,	// (0x000480e9) zooming_pane_g1

0xba8e,	// (0x000480f1) zooming_pane_g2

0xba8e,	// (0x000480f1) zooming_pane_g3

0x0002,

0xf40e,	// (0x0004ba71) zooming_pane_g

0xba96,	// (0x000480f9) level_10_zoom

0xba9f,	// (0x00048102) level_11_zoom

0xbaa8,	// (0x0004810b) level_1_zoom

0xbab1,	// (0x00048114) level_2_zoom

0xbaba,	// (0x0004811d) level_3_zoom

0xbac3,	// (0x00048126) level_4_zoom

0xbacc,	// (0x0004812f) level_5_zoom

0xbad5,	// (0x00048138) level_6_zoom

0xbade,	// (0x00048141) level_7_zoom

0xbae7,	// (0x0004814a) level_8_zoom

0xbaf0,	// (0x00048153) level_9_zoom

0xbb01,	// (0x00048164) popup_phob_thumbnail_window_g1

0xbb09,	// (0x0004816c) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0004ba78) popup_phob_thumbnail_window_g

0xcddc,	// (0x0004943f) level_1_location

0xcde4,	// (0x00049447) level_2_location

0xcdec,	// (0x0004944f) level_3_location

0xcdf4,	// (0x00049457) level_4_location

0xba52,	// (0x000480b5) level_5_location

0x4ed0,	// (0x00041533) mce_icon_pane_g1

0x4ed8,	// (0x0004153b) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0004ba7d) mce_icon_pane_g

0x4ee0,	// (0x00041543) main_mup_pane_g1_ParamLimits

0x4ee0,	// (0x00041543) main_mup_pane_g1

0x4ef8,	// (0x0004155b) main_mup_pane_g2_ParamLimits

0x4ef8,	// (0x0004155b) main_mup_pane_g2

0x4f14,	// (0x00041577) main_mup_pane_g3_ParamLimits

0x4f14,	// (0x00041577) main_mup_pane_g3

0x4f30,	// (0x00041593) main_mup_pane_g4_ParamLimits

0x4f30,	// (0x00041593) main_mup_pane_g4

0x4f4c,	// (0x000415af) main_mup_pane_g5_ParamLimits

0x4f4c,	// (0x000415af) main_mup_pane_g5

0x4f6d,	// (0x000415d0) main_mup_pane_g6_ParamLimits

0x4f6d,	// (0x000415d0) main_mup_pane_g6

0x4f89,	// (0x000415ec) main_mup_pane_g7_ParamLimits

0x4f89,	// (0x000415ec) main_mup_pane_g7

0x4fa5,	// (0x00041608) main_mup_pane_g8_ParamLimits

0x4fa5,	// (0x00041608) main_mup_pane_g8

0x4fc5,	// (0x00041628) main_mup_pane_g9_ParamLimits

0x4fc5,	// (0x00041628) main_mup_pane_g9

0x4fe4,	// (0x00041647) main_mup_pane_g10_ParamLimits

0x4fe4,	// (0x00041647) main_mup_pane_g10

0x5003,	// (0x00041666) main_mup_pane_g11_ParamLimits

0x5003,	// (0x00041666) main_mup_pane_g11

0x501b,	// (0x0004167e) main_mup_pane_g12_ParamLimits

0x501b,	// (0x0004167e) main_mup_pane_g12

0x5029,	// (0x0004168c) main_mup_pane_g13_ParamLimits

0x5029,	// (0x0004168c) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0004ba82) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0004ba82) main_mup_pane_g

0x503f,	// (0x000416a2) main_mup_pane_t1_ParamLimits

0x503f,	// (0x000416a2) main_mup_pane_t1

0x505c,	// (0x000416bf) main_mup_pane_t2_ParamLimits

0x505c,	// (0x000416bf) main_mup_pane_t2

0x5076,	// (0x000416d9) main_mup_pane_t3_ParamLimits

0x5076,	// (0x000416d9) main_mup_pane_t3

0x5090,	// (0x000416f3) main_mup_pane_t4_ParamLimits

0x5090,	// (0x000416f3) main_mup_pane_t4

0x50a2,	// (0x00041705) main_mup_pane_t5_ParamLimits

0x50a2,	// (0x00041705) main_mup_pane_t5

0x50b4,	// (0x00041717) main_mup_pane_t6_ParamLimits

0x50b4,	// (0x00041717) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0004ba9d) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0004ba9d) main_mup_pane_t

0x50ca,	// (0x0004172d) mup_progress_pane_ParamLimits

0x50ca,	// (0x0004172d) mup_progress_pane

0x50d6,	// (0x00041739) mup_visualizer_pane_ParamLimits

0x50d6,	// (0x00041739) mup_visualizer_pane

0x5110,	// (0x00041773) mup_volume_pane_ParamLimits

0x5110,	// (0x00041773) mup_volume_pane

0xb9dd,	// (0x00048040) mup_visualizer_pane_g1_ParamLimits

0xb9dd,	// (0x00048040) mup_visualizer_pane_g1

0xb9dd,	// (0x00048040) mup_visualizer_pane_g2_ParamLimits

0xb9dd,	// (0x00048040) mup_visualizer_pane_g2

0xb881,	// (0x00047ee4) mup_visualizer_pane_g3_ParamLimits

0xb881,	// (0x00047ee4) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0004baaa) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0004baaa) mup_visualizer_pane_g

0xae67,	// (0x000474ca) mup_volume_pane_g1

0xbb19,	// (0x0004817c) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0004bab1) mup_volume_pane_g

0xae67,	// (0x000474ca) mup_progress_pane_g1

0xbb22,	// (0x00048185) mup_progress_pane_g2

0xbb2b,	// (0x0004818e) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0004bab6) mup_progress_pane_g

0xaae4,	// (0x00047147) bg_popup_window_pane_cp05

0xbb34,	// (0x00048197) heading_pane_cp02_ParamLimits

0xbb34,	// (0x00048197) heading_pane_cp02

0xbb4e,	// (0x000481b1) list_popup_blid_pane

0xbb56,	// (0x000481b9) list_blid_sat_info_pane_ParamLimits

0xbb56,	// (0x000481b9) list_blid_sat_info_pane

0xbb69,	// (0x000481cc) list_blid_sat_info_pane_g1

0xbb71,	// (0x000481d4) list_blid_sat_info_pane_t1

0x521d,	// (0x00041880) mup_equalizer_pane_ParamLimits

0x521d,	// (0x00041880) mup_equalizer_pane

0x523e,	// (0x000418a1) mup_equalizer_pane_cp1_ParamLimits

0x523e,	// (0x000418a1) mup_equalizer_pane_cp1

0x525f,	// (0x000418c2) mup_equalizer_pane_cp2_ParamLimits

0x525f,	// (0x000418c2) mup_equalizer_pane_cp2

0x5280,	// (0x000418e3) mup_equalizer_pane_cp3_ParamLimits

0x5280,	// (0x000418e3) mup_equalizer_pane_cp3

0x52a1,	// (0x00041904) mup_equalizer_pane_cp4_ParamLimits

0x52a1,	// (0x00041904) mup_equalizer_pane_cp4

0x52c2,	// (0x00041925) mup_equalizer_pane_cp5

0x52d8,	// (0x0004193b) mup_equalizer_pane_cp6

0x52f0,	// (0x00041953) mup_equalizer_pane_cp7

0xccfa,	// (0x0004935d) bg_popup_call_poc_act_pane_g9

0xcd02,	// (0x00049365) bg_popup_call_poc_act_pane_g10

0xcd0a,	// (0x0004936d) bg_popup_call_poc_act_pane_g11

0x000a,

0xad4d,	// (0x000473b0) mup_scale_pane

0xae67,	// (0x000474ca) mup_scale_pane_g1

0xbb7f,	// (0x000481e2) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0004bad2) mup_scale_pane_g

0xbba3,	// (0x00048206) msg_data_pane

0xbbab,	// (0x0004820e) scroll_pane_cp017

0x167e,	// (0x0003dce1) bg_list_pane_cp04_ParamLimits

0x167e,	// (0x0003dce1) bg_list_pane_cp04

0xbbb3,	// (0x00048216) msg_data_pane_g1

0x531a,	// (0x0004197d) msg_data_pane_g2

0x5324,	// (0x00041987) msg_data_pane_g3

0x532c,	// (0x0004198f) msg_data_pane_g4

0x5334,	// (0x00041997) msg_data_pane_g5

0x533c,	// (0x0004199f) msg_data_pane_g6

0x5344,	// (0x000419a7) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0004bae1) msg_data_pane_g

0x16a2,	// (0x0003dd05) msg_text_pane_ParamLimits

0x16a2,	// (0x0003dd05) msg_text_pane

0x534c,	// (0x000419af) qrid_highlight_pane_cp011_ParamLimits

0x534c,	// (0x000419af) qrid_highlight_pane_cp011

0xaae4,	// (0x00047147) msg_body_pane

0xaae4,	// (0x00047147) msg_header_pane

0xbbbb,	// (0x0004821e) input_focus_pane_cp07

0x16ee,	// (0x0003dd51) msg_header_pane_t1_ParamLimits

0x16ee,	// (0x0003dd51) msg_header_pane_t1

0x1700,	// (0x0003dd63) msg_header_pane_t2_ParamLimits

0x1700,	// (0x0003dd63) msg_header_pane_t2

0x0001,

0xf492,	// (0x0004baf5) msg_header_pane_t_ParamLimits

0xf492,	// (0x0004baf5) msg_header_pane_t

0xbbd0,	// (0x00048233) msg_body_pane_g1

0x1712,	// (0x0003dd75) msg_body_pane_t1_ParamLimits

0x1712,	// (0x0003dd75) msg_body_pane_t1

0x1743,	// (0x0003dda6) msg_body_pane_t2_ParamLimits

0x1743,	// (0x0003dda6) msg_body_pane_t2

0x1755,	// (0x0003ddb8) msg_body_pane_t3_ParamLimits

0x1755,	// (0x0003ddb8) msg_body_pane_t3

0x0002,

0xf497,	// (0x0004bafa) msg_body_pane_t_ParamLimits

0xf497,	// (0x0004bafa) msg_body_pane_t

0x53c1,	// (0x00041a24) main_viewer_pane_g1_ParamLimits

0x53c1,	// (0x00041a24) main_viewer_pane_g1

0x53cd,	// (0x00041a30) main_viewer_pane_g2_ParamLimits

0x53cd,	// (0x00041a30) main_viewer_pane_g2

0x53d9,	// (0x00041a3c) main_viewer_pane_g3_ParamLimits

0x53d9,	// (0x00041a3c) main_viewer_pane_g3

0x53ea,	// (0x00041a4d) main_viewer_pane_g4_ParamLimits

0x53ea,	// (0x00041a4d) main_viewer_pane_g4

0x53fb,	// (0x00041a5e) main_viewer_pane_g5_ParamLimits

0x53fb,	// (0x00041a5e) main_viewer_pane_g5

0x53fb,	// (0x00041a5e) main_viewer_pane_g7_ParamLimits

0x53fb,	// (0x00041a5e) main_viewer_pane_g7

0x540d,	// (0x00041a70) main_viewer_pane_g8_ParamLimits

0x540d,	// (0x00041a70) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0004bb0a) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0004bb0a) main_viewer_pane_g

0xbbd8,	// (0x0004823b) viewer_content_pane_ParamLimits

0xbbd8,	// (0x0004823b) viewer_content_pane

0x5445,	// (0x00041aa8) main_postcard_pane_g1_ParamLimits

0x5445,	// (0x00041aa8) main_postcard_pane_g1

0x5453,	// (0x00041ab6) main_postcard_pane_g2_ParamLimits

0x5453,	// (0x00041ab6) main_postcard_pane_g2

0x5461,	// (0x00041ac4) main_postcard_pane_g3_ParamLimits

0x5461,	// (0x00041ac4) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0004bb1b) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0004bb1b) main_postcard_pane_g

0x5471,	// (0x00041ad4) main_postcard_pane_g4

0xcedc,	// (0x0004953f) smil_status_volume_pane_g2

0x549d,	// (0x00041b00) postcard_pane_ParamLimits

0x549d,	// (0x00041b00) postcard_pane

0xb9dd,	// (0x00048040) postcard_pane_g1_ParamLimits

0xb9dd,	// (0x00048040) postcard_pane_g1

0x54cf,	// (0x00041b32) postcard_pane_g2_ParamLimits

0x54cf,	// (0x00041b32) postcard_pane_g2

0x54db,	// (0x00041b3e) postcard_pane_g3_ParamLimits

0x54db,	// (0x00041b3e) postcard_pane_g3

0xbbe6,	// (0x00048249) postcard_pane_g4_ParamLimits

0xbbe6,	// (0x00048249) postcard_pane_g4

0x54e7,	// (0x00041b4a) postcard_pane_g5_ParamLimits

0x54e7,	// (0x00041b4a) postcard_pane_g5

0x54f3,	// (0x00041b56) postcard_pane_g6_ParamLimits

0x54f3,	// (0x00041b56) postcard_pane_g6

0xbbf4,	// (0x00048257) postcard_pane_g7_ParamLimits

0xbbf4,	// (0x00048257) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0004bb28) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0004bb28) postcard_pane_g

0x54ff,	// (0x00041b62) main_mp2_pane_g1_ParamLimits

0x54ff,	// (0x00041b62) main_mp2_pane_g1

0x550b,	// (0x00041b6e) main_mp2_pane_g2_ParamLimits

0x550b,	// (0x00041b6e) main_mp2_pane_g2

0x5517,	// (0x00041b7a) main_mp2_pane_g3_ParamLimits

0x5517,	// (0x00041b7a) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0004bb37) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0004bb37) main_mp2_pane_g

0x5523,	// (0x00041b86) main_mp2_pane_t1_ParamLimits

0x5523,	// (0x00041b86) main_mp2_pane_t1

0x553a,	// (0x00041b9d) main_mp2_pane_t2_ParamLimits

0x553a,	// (0x00041b9d) main_mp2_pane_t2

0x554e,	// (0x00041bb1) main_mp2_pane_t3_ParamLimits

0x554e,	// (0x00041bb1) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0004bb3e) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0004bb3e) main_mp2_pane_t

0xbc02,	// (0x00048265) pec_content_pane_ParamLimits

0xbc02,	// (0x00048265) pec_content_pane

0xb179,	// (0x000477dc) scroll_pane_cp015

0xbc14,	// (0x00048277) pec_attribute_pane_ParamLimits

0xbc14,	// (0x00048277) pec_attribute_pane

0x5560,	// (0x00041bc3) pec_content_pane_g1_ParamLimits

0x5560,	// (0x00041bc3) pec_content_pane_g1

0xbc24,	// (0x00048287) pec_content_pane_t1_ParamLimits

0xbc24,	// (0x00048287) pec_content_pane_t1

0xbc36,	// (0x00048299) pec_content_pane_t2_ParamLimits

0xbc36,	// (0x00048299) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0004bb45) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0004bb45) pec_content_pane_t

0x556c,	// (0x00041bcf) list_single_graphic_pane_cp01_ParamLimits

0x556c,	// (0x00041bcf) list_single_graphic_pane_cp01

0xad4d,	// (0x000473b0) bg_popup_sub_pane_cp04

0xbc48,	// (0x000482ab) popup_mup_playback_window_g1

0xbc54,	// (0x000482b7) popup_mup_playback_window_t1

0xbc69,	// (0x000482cc) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0004bb4a) popup_mup_playback_window_t

0xbca0,	// (0x00048303) main_image_pane_g1_ParamLimits

0xbca0,	// (0x00048303) main_image_pane_g1

0xbce3,	// (0x00048346) scroll_pane_cp018_ParamLimits

0xbce3,	// (0x00048346) scroll_pane_cp018

0xbcfb,	// (0x0004835e) scroll_pane_cp016_ParamLimits

0xbcfb,	// (0x0004835e) scroll_pane_cp016

0x5605,	// (0x00041c68) smil2_image_pane_ParamLimits

0x5605,	// (0x00041c68) smil2_image_pane

0x5635,	// (0x00041c98) smil2_root_pane_ParamLimits

0x5635,	// (0x00041c98) smil2_root_pane

0x5661,	// (0x00041cc4) smil2_text_pane_ParamLimits

0x5661,	// (0x00041cc4) smil2_text_pane

0xaae4,	// (0x00047147) bg_list_pane_cp06

0xbd37,	// (0x0004839a) grid_radio_pane

0xaae4,	// (0x00047147) bg_popup_window_pane_cp06

0xbd3f,	// (0x000483a2) main_fmradio_pane_t1

0xb6d0,	// (0x00047d33) heading_pane_cp04

0xbd4d,	// (0x000483b0) main_fmradio_pane_t2

0xcd12,	// (0x00049375) popup_cale_lunar_info_window_g1

0xbd5b,	// (0x000483be) main_fmradio_pane_t3

0xcd1a,	// (0x0004937d) popup_cale_lunar_info_window_g2

0xbd69,	// (0x000483cc) main_fmradio_pane_t4

0x0001,

0xbd77,	// (0x000483da) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0004bc25) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0004bb5f) main_fmradio_pane_t

0xbd85,	// (0x000483e8) wait_bar_pane_cp03

0xbd8d,	// (0x000483f0) cell_fmradio_pane_ParamLimits

0xbd8d,	// (0x000483f0) cell_fmradio_pane

0xbbf4,	// (0x00048257) cell_fmradio_pane_g1_ParamLimits

0xbbf4,	// (0x00048257) cell_fmradio_pane_g1

0xaae4,	// (0x00047147) grid_highlight_pane_cp011

0xbda0,	// (0x00048403) poc_content_pane_ParamLimits

0xbda0,	// (0x00048403) poc_content_pane

0xbdb2,	// (0x00048415) scroll_pane_cp019

0x56a1,	// (0x00041d04) popup_call_poc_act_window_ParamLimits

0x56a1,	// (0x00041d04) popup_call_poc_act_window

0x56ae,	// (0x00041d11) popup_call_poc_inact_window_ParamLimits

0x56ae,	// (0x00041d11) popup_call_poc_inact_window

0xf599,	// (0x0004bbfc) bg_popup_call_poc_act_pane_g

0xcc8a,	// (0x000492ed) bg_popup_call_poc_inact_pane_g1

0xcc92,	// (0x000492f5) bg_popup_call_poc_inact_pane_g2

0xbdba,	// (0x0004841d) popup_call_poc_act_window_g2

0xcc9a,	// (0x000492fd) bg_popup_call_poc_inact_pane_g3

0xcca2,	// (0x00049305) bg_popup_call_poc_inact_pane_g4

0xccaa,	// (0x0004930d) bg_popup_call_poc_inact_pane_g5

0xbdc2,	// (0x00048425) popup_call_poc_act_window_t1_ParamLimits

0xbdc2,	// (0x00048425) popup_call_poc_act_window_t1

0xbdea,	// (0x0004844d) popup_call_poc_act_window_t2_ParamLimits

0xbdea,	// (0x0004844d) popup_call_poc_act_window_t2

0xbe12,	// (0x00048475) popup_call_poc_act_window_t3_ParamLimits

0xbe12,	// (0x00048475) popup_call_poc_act_window_t3

0xbe3a,	// (0x0004849d) popup_call_poc_act_window_t4_ParamLimits

0xbe3a,	// (0x0004849d) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0004bb6a) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0004bb6a) popup_call_poc_act_window_t

0xccb2,	// (0x00049315) bg_popup_call_poc_inact_pane_g6

0xccba,	// (0x0004931d) bg_popup_call_poc_inact_pane_g7

0xccc2,	// (0x00049325) bg_popup_call_poc_inact_pane_g8

0xbe4c,	// (0x000484af) popup_call_poc_inact_window_g2

0xccca,	// (0x0004932d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0004bbe9) bg_popup_call_poc_inact_pane_g

0xbe54,	// (0x000484b7) popup_call_poc_inact_window_t1_ParamLimits

0xbe54,	// (0x000484b7) popup_call_poc_inact_window_t1

0xbe69,	// (0x000484cc) popup_call_poc_inact_window_t2_ParamLimits

0xbe69,	// (0x000484cc) popup_call_poc_inact_window_t2

0xbe7e,	// (0x000484e1) popup_call_poc_inact_window_t3_ParamLimits

0xbe7e,	// (0x000484e1) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0004bb73) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0004bb73) popup_call_poc_inact_window_t

0xce4f,	// (0x000494b2) context_pane_ParamLimits

0x5ce2,	// (0x00042345) signal_pane_ParamLimits

0xba52,	// (0x000480b5) main_call2_pane

0x5c55,	// (0x000422b8) popup_phob_thumbnail2_window_ParamLimits

0x5c55,	// (0x000422b8) popup_phob_thumbnail2_window

0x536f,	// (0x000419d2) aid_hotspot_pointer_arrow_pane

0x5377,	// (0x000419da) aid_hotspot_pointer_hand_pane

0x59d0,	// (0x00042033) phob_pre_status_pane_g5

0x36a9,	// (0x0003fd0c) cams_zoom_pane_ParamLimits

0x36b5,	// (0x0003fd18) image_vga_pane_ParamLimits

0x36c4,	// (0x0003fd27) main_camera_pane_g1_ParamLimits

0x36d2,	// (0x0003fd35) main_camera_pane_g2_ParamLimits

0x36de,	// (0x0003fd41) main_camera_pane_g3_ParamLimits

0x36ea,	// (0x0003fd4d) main_camera_pane_g4_ParamLimits

0x36f6,	// (0x0003fd59) main_camera_pane_g5_ParamLimits

0x3702,	// (0x0003fd65) main_camera_pane_g6_ParamLimits

0x370e,	// (0x0003fd71) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0004b872) main_camera_pane_g_ParamLimits

0x371a,	// (0x0003fd7d) main_camera_pane_t1_ParamLimits

0x372c,	// (0x0003fd8f) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0004b883) main_camera_pane_t_ParamLimits

0xad4d,	// (0x000473b0) bg_popup_preview_window_pane_cp01_ParamLimits

0xad4d,	// (0x000473b0) bg_popup_preview_window_pane_cp01

0xbe93,	// (0x000484f6) popup_phob_thumbnail2_window_g1_ParamLimits

0xbe93,	// (0x000484f6) popup_phob_thumbnail2_window_g1

0xaae4,	// (0x00047147) call2_cli_visual_pane

0x56ca,	// (0x00041d2d) popup_call2_audio_conf_window_ParamLimits

0x56ca,	// (0x00041d2d) popup_call2_audio_conf_window

0x56df,	// (0x00041d42) popup_call2_audio_first_window_ParamLimits

0x56df,	// (0x00041d42) popup_call2_audio_first_window

0x577d,	// (0x00041de0) popup_call2_audio_in_window_ParamLimits

0x577d,	// (0x00041de0) popup_call2_audio_in_window

0x57bf,	// (0x00041e22) popup_call2_audio_out_window_ParamLimits

0x57bf,	// (0x00041e22) popup_call2_audio_out_window

0x5821,	// (0x00041e84) popup_call2_audio_second_window_ParamLimits

0x5821,	// (0x00041e84) popup_call2_audio_second_window

0x587f,	// (0x00041ee2) popup_call2_audio_wait_window_ParamLimits

0x587f,	// (0x00041ee2) popup_call2_audio_wait_window

0xaae4,	// (0x00047147) bg_popup_call2_act_pane_cp03

0xad2f,	// (0x00047392) list_conf_pane_cp

0xbe9f,	// (0x00048502) popup_call2_audio_conf_window_t1

0xb72d,	// (0x00047d90) list_single_graphic_popup_conf2_pane_ParamLimits

0xb72d,	// (0x00047d90) list_single_graphic_popup_conf2_pane

0xb740,	// (0x00047da3) list_highlight_pane_cp04

0xbead,	// (0x00048510) list_single_graphic_popup_conf2_pane_g1

0xb751,	// (0x00047db4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0004bb7a) list_single_graphic_popup_conf2_pane_g

0xbeb7,	// (0x0004851a) list_single_graphic_popup_conf2_pane_t1

0xbec5,	// (0x00048528) bg_popup_call2_act_pane_cp01_ParamLimits

0xbec5,	// (0x00048528) bg_popup_call2_act_pane_cp01

0xbf4f,	// (0x000485b2) call_type_pane_cp05_ParamLimits

0xbf4f,	// (0x000485b2) call_type_pane_cp05

0xbfa3,	// (0x00048606) popup_call2_audio_second_window_g1_ParamLimits

0xbfa3,	// (0x00048606) popup_call2_audio_second_window_g1

0xbff7,	// (0x0004865a) popup_call2_audio_second_window_g2_ParamLimits

0xbff7,	// (0x0004865a) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0004bb7f) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0004bb7f) popup_call2_audio_second_window_g

0xc05c,	// (0x000486bf) popup_call2_audio_second_window_t1_ParamLimits

0xc05c,	// (0x000486bf) popup_call2_audio_second_window_t1

0xc117,	// (0x0004877a) popup_call2_audio_second_window_t2_ParamLimits

0xc117,	// (0x0004877a) popup_call2_audio_second_window_t2

0xc16a,	// (0x000487cd) popup_call2_audio_second_window_t3_ParamLimits

0xc16a,	// (0x000487cd) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0004bb86) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0004bb86) popup_call2_audio_second_window_t

0xaae4,	// (0x00047147) bg_popup_call2_in_pane_cp02

0xaaee,	// (0x00047151) call_type_pane_cp04

0xaaf6,	// (0x00047159) popup_call2_audio_wait_window_g1

0xaafe,	// (0x00047161) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0004b75f) popup_call2_audio_wait_window_g

0xab06,	// (0x00047169) popup_call2_audio_wait_window_t3

0xc25d,	// (0x000488c0) bg_popup_call2_act_pane_ParamLimits

0xc25d,	// (0x000488c0) bg_popup_call2_act_pane

0xc31d,	// (0x00048980) call_type_pane_cp03_ParamLimits

0xc31d,	// (0x00048980) call_type_pane_cp03

0xc381,	// (0x000489e4) popup_call2_audio_first_window_g1_ParamLimits

0xc381,	// (0x000489e4) popup_call2_audio_first_window_g1

0xc3f1,	// (0x00048a54) popup_call2_audio_first_window_g2_ParamLimits

0xc3f1,	// (0x00048a54) popup_call2_audio_first_window_g2

0xb9dd,	// (0x00048040) popup_call2_audio_first_window_g3_ParamLimits

0xb9dd,	// (0x00048040) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0004bb8f) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0004bb8f) popup_call2_audio_first_window_g

0xc4cf,	// (0x00048b32) popup_call2_audio_first_window_t1_ParamLimits

0xc4cf,	// (0x00048b32) popup_call2_audio_first_window_t1

0xc5d2,	// (0x00048c35) popup_call2_audio_first_window_t4_ParamLimits

0xc5d2,	// (0x00048c35) popup_call2_audio_first_window_t4

0xc6b5,	// (0x00048d18) popup_call2_audio_first_window_t5_ParamLimits

0xc6b5,	// (0x00048d18) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0004bb9a) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0004bb9a) popup_call2_audio_first_window_t

0xad45,	// (0x000473a8) bg_popup_call2_act_pane_g1

0xcd22,	// (0x00049385) popup_cale_lunar_info_window_t1

0xcd30,	// (0x00049393) popup_cale_lunar_info_window_t2

0xcd3e,	// (0x000493a1) popup_cale_lunar_info_window_t3

0xaae4,	// (0x00047147) bg_popup_call2_bubble_pane

0xc7b6,	// (0x00048e19) bg_popup_call2_in_pane_cp01_ParamLimits

0xc7b6,	// (0x00048e19) bg_popup_call2_in_pane_cp01

0xa7c0,	// (0x00046e23) call_type_pane_cp02

0xc7fe,	// (0x00048e61) popup_call2_audio_out_window_g1_ParamLimits

0xc7fe,	// (0x00048e61) popup_call2_audio_out_window_g1

0xc82a,	// (0x00048e8d) popup_call2_audio_out_window_g2_ParamLimits

0xc82a,	// (0x00048e8d) popup_call2_audio_out_window_g2

0xc852,	// (0x00048eb5) popup_call2_audio_out_window_g3_ParamLimits

0xc852,	// (0x00048eb5) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0004bba3) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0004bba3) popup_call2_audio_out_window_g

0xc88d,	// (0x00048ef0) popup_call2_audio_out_window_t1_ParamLimits

0xc88d,	// (0x00048ef0) popup_call2_audio_out_window_t1

0xc8ec,	// (0x00048f4f) popup_call2_audio_out_window_t2_ParamLimits

0xc8ec,	// (0x00048f4f) popup_call2_audio_out_window_t2

0xc940,	// (0x00048fa3) popup_call2_audio_out_window_t3_ParamLimits

0xc940,	// (0x00048fa3) popup_call2_audio_out_window_t3

0xc956,	// (0x00048fb9) popup_call2_audio_out_window_t4_ParamLimits

0xc956,	// (0x00048fb9) popup_call2_audio_out_window_t4

0xc96c,	// (0x00048fcf) popup_call2_audio_out_window_t5_ParamLimits

0xc96c,	// (0x00048fcf) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0004bbac) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0004bbac) popup_call2_audio_out_window_t

0xc9d0,	// (0x00049033) bg_popup_call2_in_pane_ParamLimits

0xc9d0,	// (0x00049033) bg_popup_call2_in_pane

0xca2c,	// (0x0004908f) popup_call2_audio_in_window_g1_ParamLimits

0xca2c,	// (0x0004908f) popup_call2_audio_in_window_g1

0xca64,	// (0x000490c7) popup_call2_audio_in_window_g2_ParamLimits

0xca64,	// (0x000490c7) popup_call2_audio_in_window_g2

0xca9c,	// (0x000490ff) popup_call2_audio_in_window_g3_ParamLimits

0xca9c,	// (0x000490ff) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0004bbb9) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0004bbb9) popup_call2_audio_in_window_g

0xcaf4,	// (0x00049157) popup_call2_audio_in_window_t1_ParamLimits

0xcaf4,	// (0x00049157) popup_call2_audio_in_window_t1

0xcb74,	// (0x000491d7) popup_call2_audio_in_window_t2_ParamLimits

0xcb74,	// (0x000491d7) popup_call2_audio_in_window_t2

0xcbf4,	// (0x00049257) popup_call2_audio_in_window_t3_ParamLimits

0xcbf4,	// (0x00049257) popup_call2_audio_in_window_t3

0xcc0e,	// (0x00049271) popup_call2_audio_in_window_t4_ParamLimits

0xcc0e,	// (0x00049271) popup_call2_audio_in_window_t4

0xcc20,	// (0x00049283) popup_call2_audio_in_window_t5_ParamLimits

0xcc20,	// (0x00049283) popup_call2_audio_in_window_t5

0xcc35,	// (0x00049298) popup_call2_audio_in_window_t6_ParamLimits

0xcc35,	// (0x00049298) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0004bbc2) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0004bbc2) popup_call2_audio_in_window_t

0xad45,	// (0x000473a8) bg_popup_call2_in_pane_g1

0xcd4c,	// (0x000493af) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0004bc2a) popup_cale_lunar_info_window_t

0xad4d,	// (0x000473b0) bg_popup_call2_rect_pane_ParamLimits

0xad4d,	// (0x000473b0) bg_popup_call2_rect_pane

0xaae4,	// (0x00047147) call2_cli_visual_graphic_pane

0xaae4,	// (0x00047147) call2_cli_visual_text_pane

0x5d88,	// (0x000423eb) smil_status_volume_pane_g3

0x0002,

0xae67,	// (0x000474ca) call2_cli_visual_graphic_pane_g1

0xae67,	// (0x000474ca) call2_cli_visual_graphic_pane_g2

0xae67,	// (0x000474ca) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0004bbcf) call2_cli_visual_graphic_pane_g

0xcc4a,	// (0x000492ad) bg_popup_call2_rect_pane_g1

0xaef3,	// (0x00047556) bg_popup_call2_rect_pane_g2

0xcc52,	// (0x000492b5) bg_popup_call2_rect_pane_g3

0xcc5a,	// (0x000492bd) bg_popup_call2_rect_pane_g4

0xcc62,	// (0x000492c5) bg_popup_call2_rect_pane_g5

0xcc6a,	// (0x000492cd) bg_popup_call2_rect_pane_g6

0xcc72,	// (0x000492d5) bg_popup_call2_rect_pane_g7

0xcc7a,	// (0x000492dd) bg_popup_call2_rect_pane_g8

0xcc82,	// (0x000492e5) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0004bbd6) bg_popup_call2_rect_pane_g

0xcc8a,	// (0x000492ed) bg_popup_call2_bubble_pane_g1

0xcc92,	// (0x000492f5) bg_popup_call2_bubble_pane_g2

0xcc9a,	// (0x000492fd) bg_popup_call2_bubble_pane_g3

0xcca2,	// (0x00049305) bg_popup_call2_bubble_pane_g4

0xccaa,	// (0x0004930d) bg_popup_call2_bubble_pane_g5

0xccb2,	// (0x00049315) bg_popup_call2_bubble_pane_g6

0xccba,	// (0x0004931d) bg_popup_call2_bubble_pane_g7

0xccc2,	// (0x00049325) bg_popup_call2_bubble_pane_g8

0xccca,	// (0x0004932d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0004bbe9) bg_popup_call2_bubble_pane_g

0x30dc,	// (0x0003f73f) aid_cale_week_size_cell_pane

0x373e,	// (0x0003fda1) aid_cams_cif_uncrop_pane_ParamLimits

0x373e,	// (0x0003fda1) aid_cams_cif_uncrop_pane

0x3899,	// (0x0003fefc) aid_cams_size_cell_ParamLimits

0x3899,	// (0x0003fefc) aid_cams_size_cell

0x38a5,	// (0x0003ff08) grid_cams_pane_ParamLimits

0x38b3,	// (0x0003ff16) linegrid_cams_pane_ParamLimits

0x398a,	// (0x0003ffed) call_video_pane_t1

0x39ab,	// (0x0004000e) call_video_pane_t2

0x0001,

0xf273,	// (0x0004b8d6) call_video_pane_t

0x3ef4,	// (0x00040557) aid_cale_month_size_cell_pane_ParamLimits

0x3ef4,	// (0x00040557) aid_cale_month_size_cell_pane

0xf610,	// (0x0004bc73) smil_status_volume_pane_g

0x5d95,	// (0x000423f8) volume_smil_pane_ParamLimits

0x284b,	// (0x0003eeae) aid_popup2_width_pane

0x2fde,	// (0x0003f641) cell_qdial_pane_g4_ParamLimits

0x2fde,	// (0x0003f641) cell_qdial_pane_g4

0x4e05,	// (0x00041468) aid_blid_cardinal_pane_ParamLimits

0x4e15,	// (0x00041478) aid_blid_destination_pane_ParamLimits

0x4e15,	// (0x00041478) aid_blid_destination_pane

0xad4d,	// (0x000473b0) bg_popup_call_poc_act_pane_ParamLimits

0xad4d,	// (0x000473b0) bg_popup_call_poc_act_pane

0xad4d,	// (0x000473b0) bg_popup_call_poc_inact_pane_ParamLimits

0xad4d,	// (0x000473b0) bg_popup_call_poc_inact_pane

0xccd2,	// (0x00049335) bg_popup_call_poc_act_pane_g1

0xccda,	// (0x0004933d) bg_popup_call_poc_act_pane_g2

0xcce2,	// (0x00049345) bg_popup_call_poc_act_pane_g3

0xcca2,	// (0x00049305) bg_popup_call_poc_act_pane_g4

0xccaa,	// (0x0004930d) bg_popup_call_poc_act_pane_g5

0xccea,	// (0x0004934d) bg_popup_call_poc_act_pane_g6

0xccba,	// (0x0004931d) bg_popup_call_poc_act_pane_g7

0xccf2,	// (0x00049355) bg_popup_call_poc_act_pane_g8

0xaae4,	// (0x00047147) main_usb_pane

0x5b84,	// (0x000421e7) popup_cale_lunar_info_window

0x3cd6,	// (0x00040339) im_reading_pane_t1_ParamLimits

0xb0d1,	// (0x00047734) list_im_pane_ParamLimits

0xb0e2,	// (0x00047745) scroll_pane_cp07_ParamLimits

0xaae4,	// (0x00047147) grid_highlight_pane_cp012

0xad4d,	// (0x000473b0) mup_scale_pane_ParamLimits

0xb9dd,	// (0x00048040) main_usb_pane_g1_ParamLimits

0xb9dd,	// (0x00048040) main_usb_pane_g1

0x58f3,	// (0x00041f56) main_usb_pane_g2_ParamLimits

0x58f3,	// (0x00041f56) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0004bc13) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0004bc13) main_usb_pane_g

0x58ff,	// (0x00041f62) main_usb_pane_t1_ParamLimits

0x58ff,	// (0x00041f62) main_usb_pane_t1

0x5911,	// (0x00041f74) main_usb_pane_t2_ParamLimits

0x5911,	// (0x00041f74) main_usb_pane_t2

0x5923,	// (0x00041f86) main_usb_pane_t3_ParamLimits

0x5923,	// (0x00041f86) main_usb_pane_t3

0x5935,	// (0x00041f98) main_usb_pane_t4_ParamLimits

0x5935,	// (0x00041f98) main_usb_pane_t4

0x5947,	// (0x00041faa) main_usb_pane_t5_ParamLimits

0x5947,	// (0x00041faa) main_usb_pane_t5

0x5959,	// (0x00041fbc) main_usb_pane_t6_ParamLimits

0x5959,	// (0x00041fbc) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0004bc18) main_usb_pane_t_ParamLimits

0x4dab,	// (0x0004140e) aid_text_placing

0x4db7,	// (0x0004141a) main_location2_pane_t1_ParamLimits

0x4dcb,	// (0x0004142e) main_location2_pane_t2_ParamLimits

0x4ddf,	// (0x00041442) main_location2_pane_t3_ParamLimits

0x4df3,	// (0x00041456) main_location2_pane_t4_ParamLimits

0x4df3,	// (0x00041456) main_location2_pane_t4

0xf3d4,	// (0x0004ba37) main_location2_pane_t_ParamLimits

0xad89,	// (0x000473ec) find_pinb_pane_g2_ParamLimits

0xad89,	// (0x000473ec) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0004b785) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0004b785) find_pinb_pane_g

0xad95,	// (0x000473f8) find_pinb_pane_t1_ParamLimits

0xada7,	// (0x0004740a) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0004b78a) find_pinb_pane_t_ParamLimits

0xaae4,	// (0x00047147) main_call3_pane

0x4448,	// (0x00040aab) cale_month_day_heading_pane_t1_ParamLimits

0x44ce,	// (0x00040b31) cale_month_day_heading_pane_t2_ParamLimits

0x455f,	// (0x00040bc2) cale_month_day_heading_pane_t3_ParamLimits

0x45f0,	// (0x00040c53) cale_month_day_heading_pane_t4_ParamLimits

0x4681,	// (0x00040ce4) cale_month_day_heading_pane_t5_ParamLimits

0x4712,	// (0x00040d75) cale_month_day_heading_pane_t6_ParamLimits

0x47a3,	// (0x00040e06) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0004b90e) cale_month_day_heading_pane_t_ParamLimits

0xb32c,	// (0x0004798f) smil_status_volume_pane

0x54b7,	// (0x00041b1a) postcard_address_pane_ParamLimits

0x54b7,	// (0x00041b1a) postcard_address_pane

0x54c3,	// (0x00041b26) postcard_message_pane_ParamLimits

0x54c3,	// (0x00041b26) postcard_message_pane

0x58be,	// (0x00041f21) call2_cli_visual_pane_t1_ParamLimits

0x58be,	// (0x00041f21) call2_cli_visual_pane_t1

0x5eec,	// (0x0004254f) postcard_message_pane_t1_ParamLimits

0x5eec,	// (0x0004254f) postcard_message_pane_t1

0x5ed5,	// (0x00042538) postcard_address_pane_t1_ParamLimits

0x5ed5,	// (0x00042538) postcard_address_pane_t1

0x5ec6,	// (0x00042529) popup_call3_audio_in_window_ParamLimits

0x5ec6,	// (0x00042529) popup_call3_audio_in_window

0x5daa,	// (0x0004240d) bg_popup_call3_in_pane_ParamLimits

0x5daa,	// (0x0004240d) bg_popup_call3_in_pane

0x5e0c,	// (0x0004246f) popup_call3_audio_in_window_g1_ParamLimits

0x5e0c,	// (0x0004246f) popup_call3_audio_in_window_g1

0x5e24,	// (0x00042487) popup_call3_audio_in_window_g2_ParamLimits

0x5e24,	// (0x00042487) popup_call3_audio_in_window_g2

0x5e3c,	// (0x0004249f) popup_call3_audio_in_window_g3_ParamLimits

0x5e3c,	// (0x0004249f) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0004bc7a) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0004bc7a) popup_call3_audio_in_window_g

0x5e64,	// (0x000424c7) popup_call3_audio_in_window_t1_ParamLimits

0x5e64,	// (0x000424c7) popup_call3_audio_in_window_t1

0x5e8c,	// (0x000424ef) popup_call3_audio_in_window_t2_ParamLimits

0x5e8c,	// (0x000424ef) popup_call3_audio_in_window_t2

0x5eb4,	// (0x00042517) popup_call3_audio_in_window_t3_ParamLimits

0x5eb4,	// (0x00042517) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0004bc83) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0004bc83) popup_call3_audio_in_window_t

0xba52,	// (0x000480b5) bg_popup_call3_rect_pane

0xcc4a,	// (0x000492ad) bg_popup_call3_rect_pane_g1

0xaef3,	// (0x00047556) bg_popup_call3_rect_pane_g2

0xcc52,	// (0x000492b5) bg_popup_call3_rect_pane_g3

0xcc5a,	// (0x000492bd) bg_popup_call3_rect_pane_g4

0xcc62,	// (0x000492c5) bg_popup_call3_rect_pane_g5

0xcc6a,	// (0x000492cd) bg_popup_call3_rect_pane_g6

0xcc72,	// (0x000492d5) bg_popup_call3_rect_pane_g7

0x512b,	// (0x0004178e) mup_visualizer_osc_pane

0xbb11,	// (0x00048174) mup_visualizer_spec_pane

0x5dca,	// (0x0004242d) call3_video_qcif_pane_ParamLimits

0x5dca,	// (0x0004242d) call3_video_qcif_pane

0x5ddc,	// (0x0004243f) call3_video_qcif_uncrop_pane_ParamLimits

0x5ddc,	// (0x0004243f) call3_video_qcif_uncrop_pane

0x5dea,	// (0x0004244d) call3_video_subqcif_pane_ParamLimits

0x5dea,	// (0x0004244d) call3_video_subqcif_pane

0x5dfc,	// (0x0004245f) call3_video_subqcif_uncrop_pane_ParamLimits

0x5dfc,	// (0x0004245f) call3_video_subqcif_uncrop_pane

0x5e54,	// (0x000424b7) popup_call3_audio_in_window_g4_ParamLimits

0x5e54,	// (0x000424b7) popup_call3_audio_in_window_g4

0x5d77,	// (0x000423da) mup_spec_half_pane

0x5d80,	// (0x000423e3) mup_spec_half_pane_cp

0xceaf,	// (0x00049512) mup_osc_middle_pane

0xceb8,	// (0x0004951b) mup_visualizer_osc_pane_g1

0x5d58,	// (0x000423bb) mup_spec_bar_pane_ParamLimits

0x5d58,	// (0x000423bb) mup_spec_bar_pane

0xce9c,	// (0x000494ff) mup_spec_bar_pane_g1

0xcea6,	// (0x00049509) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0004bc6e) mup_spec_bar_pane_g

0x30dc,	// (0x0003f73f) aid_cale_week_size_cell_pane_ParamLimits

0x30f1,	// (0x0003f754) bg_cale_heading_pane_ParamLimits

0xaf30,	// (0x00047593) bg_cale_pane_cp01_ParamLimits

0x3113,	// (0x0003f776) cale_week_corner_pane_ParamLimits

0x312d,	// (0x0003f790) cale_week_day_heading_pane_ParamLimits

0x314f,	// (0x0003f7b2) cale_week_scroll_pane_g1_ParamLimits

0x316c,	// (0x0003f7cf) cale_week_scroll_pane_g2_ParamLimits

0x317f,	// (0x0003f7e2) cale_week_scroll_pane_g3_ParamLimits

0x3192,	// (0x0003f7f5) cale_week_scroll_pane_g4_ParamLimits

0x31a5,	// (0x0003f808) cale_week_scroll_pane_g5_ParamLimits

0x31b8,	// (0x0003f81b) cale_week_scroll_pane_g6_ParamLimits

0x31cb,	// (0x0003f82e) cale_week_scroll_pane_g7_ParamLimits

0x31de,	// (0x0003f841) cale_week_scroll_pane_g8_ParamLimits

0x31f3,	// (0x0003f856) cale_week_scroll_pane_g9_ParamLimits

0x3206,	// (0x0003f869) cale_week_scroll_pane_g10_ParamLimits

0x3219,	// (0x0003f87c) cale_week_scroll_pane_g11_ParamLimits

0x322c,	// (0x0003f88f) cale_week_scroll_pane_g12_ParamLimits

0x3243,	// (0x0003f8a6) cale_week_scroll_pane_g13_ParamLimits

0x325e,	// (0x0003f8c1) cale_week_scroll_pane_g14_ParamLimits

0x3279,	// (0x0003f8dc) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0004b816) cale_week_scroll_pane_g_ParamLimits

0x3294,	// (0x0003f8f7) cale_week_time_pane_ParamLimits

0x32a9,	// (0x0003f90c) grid_cale_week_pane_ParamLimits

0xaf4e,	// (0x000475b1) listscroll_cale_week_pane_t1

0xaf60,	// (0x000475c3) scroll_pane_cp08_ParamLimits

0x3f5d,	// (0x000405c0) cale_month_corner_pane_ParamLimits

0xb302,	// (0x00047965) cale_month_pane_t1

0x43e5,	// (0x00040a48) cale_month_week_pane_ParamLimits

0xb9dd,	// (0x00048040) popup_call_status_window_g1_ParamLimits

0x4bde,	// (0x00041241) popup_call_status_window_g2_ParamLimits

0x4bea,	// (0x0004124d) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0004b9be) popup_call_status_window_g_ParamLimits

0xb6c0,	// (0x00047d23) aid_call2_pane

0x16e2,	// (0x0003dd45) msg_header_pane_g1

0x54b7,	// (0x00041b1a) postcard_address2_pane_ParamLimits

0x54b7,	// (0x00041b1a) postcard_address2_pane

0x54c3,	// (0x00041b26) postcard_message2_pane_ParamLimits

0x54c3,	// (0x00041b26) postcard_message2_pane

0x5cf0,	// (0x00042353) message2_row_pane_ParamLimits

0x5cf0,	// (0x00042353) message2_row_pane

0x5d0b,	// (0x0004236e) address2_row_pane_ParamLimits

0x5d0b,	// (0x0004236e) address2_row_pane

0xce6a,	// (0x000494cd) postcard_message2_row_pane_g1

0xce72,	// (0x000494d5) postcard_message2_row_pane_t1

0xce6a,	// (0x000494cd) address2_row_pane_g1

0xce72,	// (0x000494d5) address2_row_pane_t1

0x3600,	// (0x0003fc63) aid_size_cell_vorec

0xaae4,	// (0x00047147) main_rss_pane

0x5d1e,	// (0x00042381) rss_list_single_pane_ParamLimits

0x5d1e,	// (0x00042381) rss_list_single_pane

0xce80,	// (0x000494e3) rss_list_single_pane_t1

0xce8e,	// (0x000494f1) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0004bc69) rss_list_single_pane_t

0xaae4,	// (0x00047147) main_camera2_pane

0xaae4,	// (0x00047147) main_video2_pane

0x5f50,	// (0x000425b3) cams_zoom_pane_cp2_ParamLimits

0x5f50,	// (0x000425b3) cams_zoom_pane_cp2

0x5f5c,	// (0x000425bf) image2_vga_pane_ParamLimits

0x5f5c,	// (0x000425bf) image2_vga_pane

0x5f6b,	// (0x000425ce) main_camera2_pane_g1_ParamLimits

0x5f6b,	// (0x000425ce) main_camera2_pane_g1

0x5f77,	// (0x000425da) main_camera2_pane_g2_ParamLimits

0x5f77,	// (0x000425da) main_camera2_pane_g2

0x5f83,	// (0x000425e6) main_camera2_pane_g3_ParamLimits

0x5f83,	// (0x000425e6) main_camera2_pane_g3

0x5f8f,	// (0x000425f2) main_camera2_pane_g4_ParamLimits

0x5f8f,	// (0x000425f2) main_camera2_pane_g4

0x5f9b,	// (0x000425fe) main_camera2_pane_g5_ParamLimits

0x5f9b,	// (0x000425fe) main_camera2_pane_g5

0x5fa7,	// (0x0004260a) main_camera2_pane_g6_ParamLimits

0x5fa7,	// (0x0004260a) main_camera2_pane_g6

0x5fb3,	// (0x00042616) main_camera2_pane_g7_ParamLimits

0x5fb3,	// (0x00042616) main_camera2_pane_g7

0x5fbf,	// (0x00042622) main_camera2_pane_g8_ParamLimits

0x5fbf,	// (0x00042622) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0004bc8a) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0004bc8a) main_camera2_pane_g

0x5fd7,	// (0x0004263a) main_camera2_pane_t1_ParamLimits

0x5fd7,	// (0x0004263a) main_camera2_pane_t1

0x5fe9,	// (0x0004264c) main_camera2_pane_t2_ParamLimits

0x5fe9,	// (0x0004264c) main_camera2_pane_t2

0x5ffb,	// (0x0004265e) main_camera2_pane_t3_ParamLimits

0x5ffb,	// (0x0004265e) main_camera2_pane_t3

0x600d,	// (0x00042670) main_camera2_pane_t4_ParamLimits

0x600d,	// (0x00042670) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0004bc9d) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0004bc9d) main_camera2_pane_t

0x606f,	// (0x000426d2) cams_zoom_pane_cp4_ParamLimits

0x606f,	// (0x000426d2) cams_zoom_pane_cp4

0x607f,	// (0x000426e2) image2_cif_pane_ParamLimits

0x607f,	// (0x000426e2) image2_cif_pane

0x6094,	// (0x000426f7) image2_subqcif_pane_ParamLimits

0x6094,	// (0x000426f7) image2_subqcif_pane

0x60a3,	// (0x00042706) main_video2_pane_g1_ParamLimits

0x60a3,	// (0x00042706) main_video2_pane_g1

0x60b5,	// (0x00042718) main_video2_pane_g2_ParamLimits

0x60b5,	// (0x00042718) main_video2_pane_g2

0x60c5,	// (0x00042728) main_video2_pane_g3_ParamLimits

0x60c5,	// (0x00042728) main_video2_pane_g3

0x60d5,	// (0x00042738) main_video2_pane_g4_ParamLimits

0x60d5,	// (0x00042738) main_video2_pane_g4

0x60e5,	// (0x00042748) main_video2_pane_g5_ParamLimits

0x60e5,	// (0x00042748) main_video2_pane_g5

0x60f5,	// (0x00042758) main_video2_pane_g6_ParamLimits

0x60f5,	// (0x00042758) main_video2_pane_g6

0x0005,

0xf649,	// (0x0004bcac) main_video2_pane_g_ParamLimits

0xf649,	// (0x0004bcac) main_video2_pane_g

0x6107,	// (0x0004276a) main_video2_pane_t1_ParamLimits

0x6107,	// (0x0004276a) main_video2_pane_t1

0x6121,	// (0x00042784) main_video2_pane_t2_ParamLimits

0x6121,	// (0x00042784) main_video2_pane_t2

0x6147,	// (0x000427aa) main_video2_pane_t3_ParamLimits

0x6147,	// (0x000427aa) main_video2_pane_t3

0x0002,

0xf656,	// (0x0004bcb9) main_video2_pane_t_ParamLimits

0xf656,	// (0x0004bcb9) main_video2_pane_t

0x5a10,	// (0x00042073) call_muted_g2

0x0001,

0xf5f8,	// (0x0004bc5b) call_muted_g

0xaae4,	// (0x00047147) main_mup2_pane

0xceef,	// (0x00049552) main_mup2_pane_g1_ParamLimits

0xceef,	// (0x00049552) main_mup2_pane_g1

0x616d,	// (0x000427d0) main_mup2_pane_g2_ParamLimits

0x616d,	// (0x000427d0) main_mup2_pane_g2

0x63ef,	// (0x00042a52) main_mup_pane_g13_cp1

0x63f7,	// (0x00042a5a) mup_volume_pane_cp1

0x618d,	// (0x000427f0) main_mup2_pane_g4_ParamLimits

0x618d,	// (0x000427f0) main_mup2_pane_g4

0x61a2,	// (0x00042805) main_mup2_pane_g5_ParamLimits

0x61a2,	// (0x00042805) main_mup2_pane_g5

0x61b7,	// (0x0004281a) main_mup2_pane_g6_ParamLimits

0x61b7,	// (0x0004281a) main_mup2_pane_g6

0x61cc,	// (0x0004282f) main_mup2_pane_g7_ParamLimits

0x61cc,	// (0x0004282f) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0004bcc0) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0004bcc0) main_mup2_pane_g

0x61e8,	// (0x0004284b) main_mup2_pane_t1_ParamLimits

0x61e8,	// (0x0004284b) main_mup2_pane_t1

0x61ff,	// (0x00042862) main_mup2_pane_t2_ParamLimits

0x61ff,	// (0x00042862) main_mup2_pane_t2

0x6216,	// (0x00042879) main_mup2_pane_t3_ParamLimits

0x6216,	// (0x00042879) main_mup2_pane_t3

0x622d,	// (0x00042890) main_mup2_pane_t4_ParamLimits

0x622d,	// (0x00042890) main_mup2_pane_t4

0x6247,	// (0x000428aa) main_mup2_pane_t5_ParamLimits

0x6247,	// (0x000428aa) main_mup2_pane_t5

0x6261,	// (0x000428c4) main_mup2_pane_t6_ParamLimits

0x6261,	// (0x000428c4) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0004bccf) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0004bccf) main_mup2_pane_t

0x6299,	// (0x000428fc) mup2_visualizer_pane_ParamLimits

0x6299,	// (0x000428fc) mup2_visualizer_pane

0x62cf,	// (0x00042932) mup_progress_pane_cp_ParamLimits

0x62cf,	// (0x00042932) mup_progress_pane_cp

0x63da,	// (0x00042a3d) mup_volume_pane_cp_ParamLimits

0x63da,	// (0x00042a3d) mup_volume_pane_cp

0x62e6,	// (0x00042949) mup2_visualizer_pane_g1_ParamLimits

0x62e6,	// (0x00042949) mup2_visualizer_pane_g1

0xcefb,	// (0x0004955e) mup2_visualizer_pane_g2_ParamLimits

0xcefb,	// (0x0004955e) mup2_visualizer_pane_g2

0x62fb,	// (0x0004295e) mup2_visualizer_pane_g3_ParamLimits

0x62fb,	// (0x0004295e) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0004bcdc) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0004bcdc) mup2_visualizer_pane_g

0xbd2f,	// (0x00048392) aid_size_cell_fmradio

0x5b26,	// (0x00042189) aid_height_parent_landcape

0xb160,	// (0x000477c3) wml_content_pane_cp

0xb168,	// (0x000477cb) wml_tabs_pane

0xb171,	// (0x000477d4) popup_wml_miniature_window

0xb179,	// (0x000477dc) scroll_pane_cp021

0xb18d,	// (0x000477f0) wml_content_pane_comp8

0xaae4,	// (0x00047147) bg_popup_sub_pane_cp05

0xcf19,	// (0x0004957c) popup_wml_miniature_window_g1

0xcf21,	// (0x00049584) wml_miniature_view_pane

0x6309,	// (0x0004296c) aid_size_wml_view

0x6311,	// (0x00042974) wml_miniature_view_pane_g1

0x631a,	// (0x0004297d) wml_miniature_view_pane_g2

0x6323,	// (0x00042986) wml_miniature_view_pane_g3

0x632b,	// (0x0004298e) wml_miniature_view_pane_g4

0x6333,	// (0x00042996) wml_miniature_view_pane_g5

0x633b,	// (0x0004299e) wml_miniature_view_pane_g6

0x6343,	// (0x000429a6) wml_miniature_view_pane_g7

0x634b,	// (0x000429ae) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0004bce3) wml_miniature_view_pane_g

0xceef,	// (0x00049552) background_graphic_ParamLimits

0xceef,	// (0x00049552) background_graphic

0xcf29,	// (0x0004958c) wml_tabs_2_pane

0xcf32,	// (0x00049595) wml_tabs_3_pane_ParamLimits

0xcf32,	// (0x00049595) wml_tabs_3_pane

0xcf44,	// (0x000495a7) wml_tabs_4_pane_ParamLimits

0xcf44,	// (0x000495a7) wml_tabs_4_pane

0xcf5a,	// (0x000495bd) wml_tabs_5_pane_ParamLimits

0xcf5a,	// (0x000495bd) wml_tabs_5_pane

0xcf74,	// (0x000495d7) wml_tabs_pane_g2_ParamLimits

0xcf74,	// (0x000495d7) wml_tabs_pane_g2

0xcf88,	// (0x000495eb) wml_tabs_pane_g3_ParamLimits

0xcf88,	// (0x000495eb) wml_tabs_pane_g3

0x6353,	// (0x000429b6) wml_tabs_2_active_pane_ParamLimits

0x6353,	// (0x000429b6) wml_tabs_2_active_pane

0x6363,	// (0x000429c6) wml_tabs_2_passive_pane_ParamLimits

0x6363,	// (0x000429c6) wml_tabs_2_passive_pane

0x6373,	// (0x000429d6) wml_tabs_3_active_pane_cp_ParamLimits

0x6373,	// (0x000429d6) wml_tabs_3_active_pane_cp

0x6384,	// (0x000429e7) wml_tabs_3_passive_pane_ParamLimits

0x6384,	// (0x000429e7) wml_tabs_3_passive_pane

0x6395,	// (0x000429f8) wml_tabs_3_passive_pane_cp_ParamLimits

0x6395,	// (0x000429f8) wml_tabs_3_passive_pane_cp

0x63a6,	// (0x00042a09) tabs_4_active_pane

0x63ae,	// (0x00042a11) tabs_4_passive_pane

0x63b6,	// (0x00042a19) tabs_4_passive_pane_cp

0x63be,	// (0x00042a21) tabs_4_passive_pane_cp2

0x58eb,	// (0x00041f4e) aid_height_text

0x50f8,	// (0x0004175b) mup_volume_cont_pane_ParamLimits

0x50f8,	// (0x0004175b) mup_volume_cont_pane

0x2c1a,	// (0x0003f27d) aid_size_cell_pinb

0x2c24,	// (0x0003f287) aid_size_list_pinb

0x62b8,	// (0x0004291b) mup2_volume_cont_pane_ParamLimits

0x62b8,	// (0x0004291b) mup2_volume_cont_pane

0x63c6,	// (0x00042a29) mup2_volume_cont_pane_g1_ParamLimits

0x63c6,	// (0x00042a29) mup2_volume_cont_pane_g1

0x2857,	// (0x0003eeba) aid_size_cell_touch_ParamLimits

0x2857,	// (0x0003eeba) aid_size_cell_touch

0x2b00,	// (0x0003f163) touch_pane_ParamLimits

0x2b00,	// (0x0003f163) touch_pane

0xa6c7,	// (0x00046d2a) main_rss2_pane

0xcfa5,	// (0x00049608) listscroll_rss2_pane

0xcfae,	// (0x00049611) rss2_navigation_pane

0xcfb6,	// (0x00049619) list_rss2_pane

0xb803,	// (0x00047e66) scroll_pane_cp22

0xcfbe,	// (0x00049621) rss2_navigation_pane_g1

0xcfc7,	// (0x0004962a) rss2_navigation_pane_g2

0xcfcf,	// (0x00049632) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0004bcf4) rss2_navigation_pane_g

0xcfd7,	// (0x0004963a) rss2_navigation_pane_t1

0x63ff,	// (0x00042a62) rss2_list_single_pane_ParamLimits

0x63ff,	// (0x00042a62) rss2_list_single_pane

0xcfe5,	// (0x00049648) rss2_list_single_pane_t2

0xcff3,	// (0x00049656) rss2_list_single_pane_t3_ParamLimits

0xcff3,	// (0x00049656) rss2_list_single_pane_t3

0xd010,	// (0x00049673) rss2_list_single_pane_t4

0x4a4b,	// (0x000410ae) smil_status_pane_g1

0xb56d,	// (0x00047bd0) main_image2_pane_ParamLimits

0xb56d,	// (0x00047bd0) main_image2_pane

0x5fcb,	// (0x0004262e) main_camera2_pane_g9_ParamLimits

0x5fcb,	// (0x0004262e) main_camera2_pane_g9

0x601f,	// (0x00042682) main_camera2_pane_t5_ParamLimits

0x601f,	// (0x00042682) main_camera2_pane_t5

0x6031,	// (0x00042694) main_camera2_pane_t6_ParamLimits

0x6031,	// (0x00042694) main_camera2_pane_t6

0x6430,	// (0x00042a93) main_image2_pane_g1_ParamLimits

0x6430,	// (0x00042a93) main_image2_pane_g1

0x568b,	// (0x00041cee) smil2_video_pane_ParamLimits

0x568b,	// (0x00041cee) smil2_video_pane

0x1462,	// (0x0003dac5) aid_zoom_text_primary_cp

0x2aa9,	// (0x0003f10c) popup_preview_fixed_window

0xb0c9,	// (0x0004772c) im_reading_pane_g1

0x5f15,	// (0x00042578) cams2_bc_adjust_pane_cp_ParamLimits

0x5f15,	// (0x00042578) cams2_bc_adjust_pane_cp

0x6061,	// (0x000426c4) cams2_bc_adjust_pane_ParamLimits

0x6061,	// (0x000426c4) cams2_bc_adjust_pane

0x643c,	// (0x00042a9f) cams2_bc_adjust_pane_g1

0x6444,	// (0x00042aa7) cams2_slider_pane

0x644d,	// (0x00042ab0) cams2_slider_pane_g1

0x6456,	// (0x00042ab9) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0004bcfb) cams2_slider_pane_g

0x2d2a,	// (0x0003f38d) calc_display_pane_ParamLimits

0x2d48,	// (0x0003f3ab) calc_paper_pane_ParamLimits

0x2d64,	// (0x0003f3c7) grid_calc_pane_ParamLimits

0x4c4c,	// (0x000412af) popup_clock_digital_window_t1_ParamLimits

0xbccc,	// (0x0004832f) main_image_pane_t1

0x2d10,	// (0x0003f373) aid_size_cell_calc_ParamLimits

0x2d10,	// (0x0003f373) aid_size_cell_calc

0x5b60,	// (0x000421c3) popup_blid_sat_info2_window_ParamLimits

0x5b60,	// (0x000421c3) popup_blid_sat_info2_window

0xd026,	// (0x00049689) aid_size_cell_blid

0xd02e,	// (0x00049691) bg_popup_window_pane_cp07

0xd051,	// (0x000496b4) grid_popup_blid_pane

0xd05b,	// (0x000496be) heading_pane_cp05_ParamLimits

0xd05b,	// (0x000496be) heading_pane_cp05

0xd125,	// (0x00049788) cell_popup_blid_pane_ParamLimits

0xd125,	// (0x00049788) cell_popup_blid_pane

0xd149,	// (0x000497ac) cell_popup_blid_pane_g1

0xd151,	// (0x000497b4) cell_popup_blid_pane_t1

0x627e,	// (0x000428e1) mup2_indicator_pane_ParamLimits

0x627e,	// (0x000428e1) mup2_indicator_pane

0xba52,	// (0x000480b5) mup2_visualizer_osc_pane

0xcf07,	// (0x0004956a) mup2_visualizer_spec_pane_ParamLimits

0xcf07,	// (0x0004956a) mup2_visualizer_spec_pane

0x6470,	// (0x00042ad3) mup2_spec_half_pane

0x6479,	// (0x00042adc) mup2_spec_half_pane_cp

0x6483,	// (0x00042ae6) mup2_spec_bar_pane_ParamLimits

0x6483,	// (0x00042ae6) mup2_spec_bar_pane

0xce9c,	// (0x000494ff) mup2_spec_bar_pane_g1

0xcea6,	// (0x00049509) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0004bc6e) mup2_spec_bar_pane_g

0x64a2,	// (0x00042b05) mup2_osc_middle_pane

0xceb8,	// (0x0004951b) mup2_visualizer_osc_pane_g1

0xa6f1,	// (0x00046d54) popup_number_entry_window_t1_ParamLimits

0xa704,	// (0x00046d67) popup_number_entry_window_t2_ParamLimits

0xa716,	// (0x00046d79) popup_number_entry_window_t3_ParamLimits

0x2b57,	// (0x0003f1ba) popup_number_entry_window_t5_ParamLimits

0x2b57,	// (0x0003f1ba) popup_number_entry_window_t5

0xf0cd,	// (0x0004b730) popup_number_entry_window_t_ParamLimits

0xa728,	// (0x00046d8b) text_title_cp2_ParamLimits

0x537f,	// (0x000419e2) aid_hotspot_pointer_text2_pane

0x5419,	// (0x00041a7c) main_viewer_pane_g9_ParamLimits

0x5419,	// (0x00041a7c) main_viewer_pane_g9

0xb302,	// (0x00047965) cale_month_pane_t1_ParamLimits

0xb33f,	// (0x000479a2) bg_cale_pane_ParamLimits

0xb357,	// (0x000479ba) list_cale_pane_ParamLimits

0xb368,	// (0x000479cb) listscroll_cale_day_pane_t1

0xb37a,	// (0x000479dd) scroll_pane_cp09_ParamLimits

0x5133,	// (0x00041796) main_mup_eq_pane_t1_ParamLimits

0x5133,	// (0x00041796) main_mup_eq_pane_t1

0x514d,	// (0x000417b0) main_mup_eq_pane_t2_ParamLimits

0x514d,	// (0x000417b0) main_mup_eq_pane_t2

0x5167,	// (0x000417ca) main_mup_eq_pane_t3_ParamLimits

0x5167,	// (0x000417ca) main_mup_eq_pane_t3

0x517f,	// (0x000417e2) main_mup_eq_pane_t4_ParamLimits

0x517f,	// (0x000417e2) main_mup_eq_pane_t4

0x5197,	// (0x000417fa) main_mup_eq_pane_t5_ParamLimits

0x5197,	// (0x000417fa) main_mup_eq_pane_t5

0x51af,	// (0x00041812) main_mup_eq_pane_t6_ParamLimits

0x51af,	// (0x00041812) main_mup_eq_pane_t6

0x51c3,	// (0x00041826) main_mup_eq_pane_t7_ParamLimits

0x51c3,	// (0x00041826) main_mup_eq_pane_t7

0x51d7,	// (0x0004183a) main_mup_eq_pane_t8_ParamLimits

0x51d7,	// (0x0004183a) main_mup_eq_pane_t8

0x51ed,	// (0x00041850) main_mup_eq_pane_t9_ParamLimits

0x51ed,	// (0x00041850) main_mup_eq_pane_t9

0x5205,	// (0x00041868) main_mup_eq_pane_t10_ParamLimits

0x5205,	// (0x00041868) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0004babd) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0004babd) main_mup_eq_pane_t

0x52c2,	// (0x00041925) mup_equalizer_pane_cp5_ParamLimits

0x52d8,	// (0x0004193b) mup_equalizer_pane_cp6_ParamLimits

0x52f0,	// (0x00041953) mup_equalizer_pane_cp7_ParamLimits

0xa6c7,	// (0x00046d2a) main_gallery_pane

0xcec1,	// (0x00049524) smil2_volume_pane

0xcec9,	// (0x0004952c) smil_status_volume_pane_g1_ParamLimits

0xcedc,	// (0x0004953f) smil_status_volume_pane_g2_ParamLimits

0x5d88,	// (0x000423eb) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0004bc73) smil_status_volume_pane_g_ParamLimits

0xd02e,	// (0x00049691) bg_popup_window_pane_cp07_ParamLimits

0xd03c,	// (0x0004969f) blid_firmament_pane

0x64ab,	// (0x00042b0e) aid_size_cell_gallery_ParamLimits

0x64ab,	// (0x00042b0e) aid_size_cell_gallery

0x64b9,	// (0x00042b1c) grid_gallery_pane_ParamLimits

0x64b9,	// (0x00042b1c) grid_gallery_pane

0x64c9,	// (0x00042b2c) cell_gallery_pane_ParamLimits

0x64c9,	// (0x00042b2c) cell_gallery_pane

0xd15f,	// (0x000497c2) bg_cell_gallery_focus_pane_ParamLimits

0xd15f,	// (0x000497c2) bg_cell_gallery_focus_pane

0xd171,	// (0x000497d4) cell_gallery_pane_g1_ParamLimits

0xd171,	// (0x000497d4) cell_gallery_pane_g1

0x6517,	// (0x00042b7a) cell_gallery_pane_g2_ParamLimits

0x6517,	// (0x00042b7a) cell_gallery_pane_g2

0x6524,	// (0x00042b87) cell_gallery_pane_g3_ParamLimits

0x6524,	// (0x00042b87) cell_gallery_pane_g3

0xd186,	// (0x000497e9) cell_gallery_pane_g4_ParamLimits

0xd186,	// (0x000497e9) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0004bd21) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0004bd21) cell_gallery_pane_g

0xd192,	// (0x000497f5) bg_cell_gallery_focus_pane_g1

0xd19a,	// (0x000497fd) bg_cell_gallery_focus_pane_g2

0xd1a2,	// (0x00049805) bg_cell_gallery_focus_pane_g3

0xd1aa,	// (0x0004980d) bg_cell_gallery_focus_pane_g4

0xd1b2,	// (0x00049815) bg_cell_gallery_focus_pane_g5

0xd1ba,	// (0x0004981d) bg_cell_gallery_focus_pane_g6

0xd1c2,	// (0x00049825) bg_cell_gallery_focus_pane_g7

0xd1ca,	// (0x0004982d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0004bd2a) bg_cell_gallery_focus_pane_g

0xd1d2,	// (0x00049835) aid_firma_cardinal

0xd1e6,	// (0x00049849) blid_firmament_pane_t1

0xd1fd,	// (0x00049860) blid_firmament_pane_t2

0xd214,	// (0x00049877) blid_firmament_pane_t3

0xd22b,	// (0x0004988e) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0004bd3b) blid_firmament_pane_t

0xd242,	// (0x000498a5) blid_sat_info_pane

0xd252,	// (0x000498b5) blid_sat_info_pane_g1

0xd252,	// (0x000498b5) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0004bd44) blid_sat_info_pane_g

0xd25c,	// (0x000498bf) blid_sat_info_pane_t1

0xd26a,	// (0x000498cd) smil2_volume_content_pane

0xd273,	// (0x000498d6) smil2_volume_pane_g1

0xd17d,	// (0x000497e0) smil2_volume_content_pane_g1

0xd27b,	// (0x000498de) smil2_volume_content_pane_g2

0xd284,	// (0x000498e7) smil2_volume_content_pane_g3

0xd28d,	// (0x000498f0) smil2_volume_content_pane_g4

0xd296,	// (0x000498f9) smil2_volume_content_pane_g5

0xd29f,	// (0x00049902) smil2_volume_content_pane_g6

0xd2a8,	// (0x0004990b) smil2_volume_content_pane_g7

0xd2b1,	// (0x00049914) smil2_volume_content_pane_g8

0xd2ba,	// (0x0004991d) smil2_volume_content_pane_g9

0xd2c3,	// (0x00049926) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0004bd49) smil2_volume_content_pane_g

0x332a,	// (0x0003f98d) cale_week_day_heading_pane_t1_ParamLimits

0x3365,	// (0x0003f9c8) cale_week_day_heading_pane_t2_ParamLimits

0x33a0,	// (0x0003fa03) cale_week_day_heading_pane_t3_ParamLimits

0x33db,	// (0x0003fa3e) cale_week_day_heading_pane_t4_ParamLimits

0x3416,	// (0x0003fa79) cale_week_day_heading_pane_t5_ParamLimits

0x3451,	// (0x0003fab4) cale_week_day_heading_pane_t6_ParamLimits

0x348c,	// (0x0003faef) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0004b835) cale_week_day_heading_pane_t_ParamLimits

0xaf7d,	// (0x000475e0) bg_cale_side_pane_ParamLimits

0x34c7,	// (0x0003fb2a) cale_week_time_pane_t1_ParamLimits

0x34e1,	// (0x0003fb44) cale_week_time_pane_t2_ParamLimits

0x34fb,	// (0x0003fb5e) cale_week_time_pane_t3_ParamLimits

0x3515,	// (0x0003fb78) cale_week_time_pane_t4_ParamLimits

0x352f,	// (0x0003fb92) cale_week_time_pane_t5_ParamLimits

0x3549,	// (0x0003fbac) cale_week_time_pane_t6_ParamLimits

0x3569,	// (0x0003fbcc) cale_week_time_pane_t7_ParamLimits

0x358b,	// (0x0003fbee) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0004b844) cale_week_time_pane_t_ParamLimits

0x35af,	// (0x0003fc12) cell_cale_week_pane_g2_ParamLimits

0xaf7d,	// (0x000475e0) bg_cale_side_pane_cp01_ParamLimits

0x484c,	// (0x00040eaf) cale_month_week_pane_t1_ParamLimits

0x4865,	// (0x00040ec8) cale_month_week_pane_t2_ParamLimits

0x487e,	// (0x00040ee1) cale_month_week_pane_t3_ParamLimits

0x4897,	// (0x00040efa) cale_month_week_pane_t4_ParamLimits

0x48b0,	// (0x00040f13) cale_month_week_pane_t5_ParamLimits

0x48d1,	// (0x00040f34) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0004b91d) cale_month_week_pane_t_ParamLimits

0x4a14,	// (0x00041077) cell_cale_month_pane_g1_ParamLimits

0xa6c7,	// (0x00046d2a) main_cale_event_viewer_pane

0xa6c7,	// (0x00046d2a) listscroll_cale_event_viewer_pane

0xd2cc,	// (0x0004992f) list_cale_ev_pane

0xd2d4,	// (0x00049937) scroll_pane_cp023

0xd2e0,	// (0x00049943) field_cale_ev_pane_ParamLimits

0xd2e0,	// (0x00049943) field_cale_ev_pane

0xd2fe,	// (0x00049961) field_cale_ev_content_pane_ParamLimits

0xd2fe,	// (0x00049961) field_cale_ev_content_pane

0xd30a,	// (0x0004996d) field_cale_ev_pane_g1_ParamLimits

0xd30a,	// (0x0004996d) field_cale_ev_pane_g1

0xd316,	// (0x00049979) field_cale_ev_pane_g2_ParamLimits

0xd316,	// (0x00049979) field_cale_ev_pane_g2

0xd32e,	// (0x00049991) field_cale_ev_pane_g3_ParamLimits

0xd32e,	// (0x00049991) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0004bd5e) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0004bd5e) field_cale_ev_pane_g

0xd346,	// (0x000499a9) field_cale_ev_pane_t1_ParamLimits

0xd346,	// (0x000499a9) field_cale_ev_pane_t1

0xd35d,	// (0x000499c0) field_cale_ev_content_pane_t1_ParamLimits

0xd35d,	// (0x000499c0) field_cale_ev_content_pane_t1

0x5366,	// (0x000419c9) bg_button_pane_cp01

0x30cc,	// (0x0003f72f) listscroll_cale_week_pane_ParamLimits

0xaf27,	// (0x0004758a) popup_toolbar_window_cp01

0xaf4e,	// (0x000475b1) listscroll_cale_week_pane_t1_ParamLimits

0x30cc,	// (0x0003f72f) listscroll_cale_day_pane_ParamLimits

0xaf27,	// (0x0004758a) popup_toolbar_window_cp02

0xb368,	// (0x000479cb) listscroll_cale_day_pane_t1_ParamLimits

0x30cc,	// (0x0003f72f) main_cale_month_pane_ParamLimits

0x5c67,	// (0x000422ca) popup_toolbar_window_cp03_ParamLimits

0x5c67,	// (0x000422ca) popup_toolbar_window_cp03

0x55a1,	// (0x00041c04) main_image_pane_g2_ParamLimits

0x55a1,	// (0x00041c04) main_image_pane_g2

0x55ad,	// (0x00041c10) main_image_pane_g3_ParamLimits

0x55ad,	// (0x00041c10) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0004bb4f) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0004bb4f) main_image_pane_g

0xbccc,	// (0x0004832f) main_image_pane_t1_ParamLimits

0x55b9,	// (0x00041c1c) main_image_pane_t2_ParamLimits

0x55b9,	// (0x00041c1c) main_image_pane_t2

0x55cb,	// (0x00041c2e) main_image_pane_t3_ParamLimits

0x55cb,	// (0x00041c2e) main_image_pane_t3

0x55dd,	// (0x00041c40) main_image_pane_t4_ParamLimits

0x55dd,	// (0x00041c40) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0004bb56) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0004bb56) main_image_pane_t

0x55ef,	// (0x00041c52) popup_image_details_window_cp01

0x55f9,	// (0x00041c5c) popup_toobar_trans_pane_cp01_ParamLimits

0x55f9,	// (0x00041c5c) popup_toobar_trans_pane_cp01

0x5bb7,	// (0x0004221a) popup_image_details_window_ParamLimits

0x5bb7,	// (0x0004221a) popup_image_details_window

0x5bc5,	// (0x00042228) popup_image_focus_window

0x5f07,	// (0x0004256a) camera2_autofocus_pane_ParamLimits

0x5f07,	// (0x0004256a) camera2_autofocus_pane

0xa6c7,	// (0x00046d2a) bg_popup_sub_pane_cp06

0xd37b,	// (0x000499de) popup_image_focus_window_g1

0xd383,	// (0x000499e6) popup_image_focus_window_g2

0xd38b,	// (0x000499ee) popup_image_focus_window_g3

0xd393,	// (0x000499f6) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0004bd65) popup_image_focus_window_g

0xd39b,	// (0x000499fe) popup_image_focus_window_t1

0xd3a9,	// (0x00049a0c) popup_image_focus_window_t2

0xd3b9,	// (0x00049a1c) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0004bd6e) popup_image_focus_window_t

0xd3c7,	// (0x00049a2a) camera2_autofocus_pane_g1

0xb56d,	// (0x00047bd0) bg_tb_trans_pane_cp01

0xd3d5,	// (0x00049a38) popup_image_details_window_g1

0xd3e8,	// (0x00049a4b) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0004bd80) popup_image_details_window_g

0xd411,	// (0x00049a74) popup_image_details_window_t1

0xd423,	// (0x00049a86) popup_image_details_window_t2

0xd43c,	// (0x00049a9f) popup_image_details_window_t3

0xd450,	// (0x00049ab3) popup_image_details_window_t4

0xd46b,	// (0x00049ace) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0004bd87) popup_image_details_window_t

0xadfe,	// (0x00047461) bg_calc_paper_pane_ParamLimits

0xa6c7,	// (0x00046d2a) grid_highlight_pane_cp013

0x2e61,	// (0x0003f4c4) list_calc_pane_ParamLimits

0x2e73,	// (0x0003f4d6) scroll_pane_cp024

0xae12,	// (0x00047475) bg_calc_display_pane_ParamLimits

0x2e7b,	// (0x0003f4de) calc_display_pane_t1_ParamLimits

0x2e90,	// (0x0003f4f3) calc_display_pane_t2_ParamLimits

0x2ea5,	// (0x0003f508) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0004b7b7) calc_display_pane_t_ParamLimits

0x2f81,	// (0x0003f5e4) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0004b7d4) cell_calc_pane_g

0x2f8a,	// (0x0003f5ed) cell_calc_pane_t1

0xae71,	// (0x000474d4) grid_highlight_pane_cp02_ParamLimits

0xae87,	// (0x000474ea) toolbar_button_pane_cp01_ParamLimits

0xae87,	// (0x000474ea) toolbar_button_pane_cp01

0xbd11,	// (0x00048374) temp_image_control_pane_ParamLimits

0xbd11,	// (0x00048374) temp_image_control_pane

0xb56d,	// (0x00047bd0) main_mp3_pane

0xd485,	// (0x00049ae8) temp_image_control_pane_g1_ParamLimits

0xd485,	// (0x00049ae8) temp_image_control_pane_g1

0xd493,	// (0x00049af6) temp_image_control_pane_g2_ParamLimits

0xd493,	// (0x00049af6) temp_image_control_pane_g2

0xd4a5,	// (0x00049b08) temp_image_control_pane_g3_ParamLimits

0xd4a5,	// (0x00049b08) temp_image_control_pane_g3

0x6561,	// (0x00042bc4) temp_image_control_pane_g4_ParamLimits

0x6561,	// (0x00042bc4) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0004bd92) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0004bd92) temp_image_control_pane_g

0xd485,	// (0x00049ae8) main_mp3_pane_g1

0x6572,	// (0x00042bd5) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0004bd9b) main_mp3_pane_g

0xd4e8,	// (0x00049b4b) main_mp3_pane_t1

0xafd8,	// (0x0004763b) main_camera_pane_g8_ParamLimits

0xafd8,	// (0x0004763b) main_camera_pane_g8

0x384f,	// (0x0003feb2) main_video_pane_g7_ParamLimits

0x384f,	// (0x0003feb2) main_video_pane_g7

0x604f,	// (0x000426b2) main_camera2_pane_t7_ParamLimits

0x604f,	// (0x000426b2) main_camera2_pane_t7

0xb120,	// (0x00047783) scroll_pane_cp025_ParamLimits

0xb120,	// (0x00047783) scroll_pane_cp025

0xb134,	// (0x00047797) scroll_pane_cp026_ParamLimits

0xb134,	// (0x00047797) scroll_pane_cp026

0xb143,	// (0x000477a6) wml_content_pane_ParamLimits

0xa6c7,	// (0x00046d2a) main_touch_calib_pane

0x6616,	// (0x00042c79) main_touch_calib_pane_g1

0x6622,	// (0x00042c85) main_touch_calib_pane_g2

0x662e,	// (0x00042c91) main_touch_calib_pane_g3

0x663a,	// (0x00042c9d) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0004bdb9) main_touch_calib_pane_g

0x6646,	// (0x00042ca9) main_touch_calib_pane_t1

0x665f,	// (0x00042cc2) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0004bdc2) main_touch_calib_pane_t

0xb8df,	// (0x00047f42) mup_progress_pane_cp02

0xb914,	// (0x00047f77) navi_pane_g1

0xb9cf,	// (0x00048032) navi_pane_mp_t3

0xb56d,	// (0x00047bd0) main_mp3_pane_ParamLimits

0x5ca4,	// (0x00042307) navi_pane_ParamLimits

0xd485,	// (0x00049ae8) main_mp3_pane_g1_ParamLimits

0x6572,	// (0x00042bd5) main_mp3_pane_g2_ParamLimits

0x657e,	// (0x00042be1) main_mp3_pane_g3_ParamLimits

0x657e,	// (0x00042be1) main_mp3_pane_g3

0x658a,	// (0x00042bed) main_mp3_pane_g4_ParamLimits

0x658a,	// (0x00042bed) main_mp3_pane_g4

0xd4b5,	// (0x00049b18) main_mp3_pane_g5_ParamLimits

0xd4b5,	// (0x00049b18) main_mp3_pane_g5

0xd4c3,	// (0x00049b26) main_mp3_pane_g6_ParamLimits

0xd4c3,	// (0x00049b26) main_mp3_pane_g6

0xd4d0,	// (0x00049b33) main_mp3_pane_g7_ParamLimits

0xd4d0,	// (0x00049b33) main_mp3_pane_g7

0xd4dc,	// (0x00049b3f) main_mp3_pane_g8_ParamLimits

0xd4dc,	// (0x00049b3f) main_mp3_pane_g8

0xf738,	// (0x0004bd9b) main_mp3_pane_g_ParamLimits

0x6596,	// (0x00042bf9) main_mp3_pane_t2

0x65a6,	// (0x00042c09) main_mp3_pane_t3

0xd4f6,	// (0x00049b59) main_mp3_pane_t4

0xd504,	// (0x00049b67) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0004bdac) main_mp3_pane_t

0xd512,	// (0x00049b75) mup_progress_pane_cp01

0x1462,	// (0x0003dac5) aid_zoom_text_secondary2

0xd2cc,	// (0x0004992f) list_cale_ev2_pane

0xd2d4,	// (0x00049937) scroll_pane_cp023_ParamLimits

0x66ba,	// (0x00042d1d) field_cale_ev2_pane_ParamLimits

0x66ba,	// (0x00042d1d) field_cale_ev2_pane

0x1767,	// (0x0003ddca) field_cale_ev2_pane_g1_ParamLimits

0x1767,	// (0x0003ddca) field_cale_ev2_pane_g1

0x1773,	// (0x0003ddd6) field_cale_ev2_pane_g2_ParamLimits

0x1773,	// (0x0003ddd6) field_cale_ev2_pane_g2

0x178b,	// (0x0003ddee) field_cale_ev2_pane_g3_ParamLimits

0x178b,	// (0x0003ddee) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0004bdcd) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0004bdcd) field_cale_ev2_pane_g

0x17af,	// (0x0003de12) field_cale_ev2_pane_t1_ParamLimits

0x17af,	// (0x0003de12) field_cale_ev2_pane_t1

0x17c6,	// (0x0003de29) field_cale_ev2_pane_t2_ParamLimits

0x17c6,	// (0x0003de29) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0004bdd6) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0004bdd6) field_cale_ev2_pane_t

0x5481,	// (0x00041ae4) main_postcard_pane_g5_ParamLimits

0x5481,	// (0x00041ae4) main_postcard_pane_g5

0x548f,	// (0x00041af2) main_postcard_pane_g6_ParamLimits

0x548f,	// (0x00041af2) main_postcard_pane_g6

0x3699,	// (0x0003fcfc) camera2_autofocus_pane_cp_ParamLimits

0x3699,	// (0x0003fcfc) camera2_autofocus_pane_cp

0xb56d,	// (0x00047bd0) main_mup3_pane

0x66e3,	// (0x00042d46) main_mup3_pane_g1_ParamLimits

0x66e3,	// (0x00042d46) main_mup3_pane_g1

0x6704,	// (0x00042d67) main_mup3_pane_g2_ParamLimits

0x6704,	// (0x00042d67) main_mup3_pane_g2

0x677c,	// (0x00042ddf) main_mup3_pane_g3_ParamLimits

0x677c,	// (0x00042ddf) main_mup3_pane_g3

0x67bf,	// (0x00042e22) main_mup3_pane_g4_ParamLimits

0x67bf,	// (0x00042e22) main_mup3_pane_g4

0x6802,	// (0x00042e65) main_mup3_pane_g5_ParamLimits

0x6802,	// (0x00042e65) main_mup3_pane_g5

0x6845,	// (0x00042ea8) main_mup3_pane_g6_ParamLimits

0x6845,	// (0x00042ea8) main_mup3_pane_g6

0xd546,	// (0x00049ba9) main_mup3_pane_g7_ParamLimits

0xd546,	// (0x00049ba9) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0004bde6) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0004bde6) main_mup3_pane_g

0x68bb,	// (0x00042f1e) main_mup3_pane_t1_ParamLimits

0x68bb,	// (0x00042f1e) main_mup3_pane_t1

0x692a,	// (0x00042f8d) main_mup3_pane_t2_ParamLimits

0x692a,	// (0x00042f8d) main_mup3_pane_t2

0x69f3,	// (0x00043056) main_mup3_pane_t4_ParamLimits

0x69f3,	// (0x00043056) main_mup3_pane_t4

0x6a41,	// (0x000430a4) main_mup3_pane_t5_ParamLimits

0x6a41,	// (0x000430a4) main_mup3_pane_t5

0x6af1,	// (0x00043154) main_mup3_pane_t6_ParamLimits

0x6af1,	// (0x00043154) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0004bdf7) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0004bdf7) main_mup3_pane_t

0x6b9d,	// (0x00043200) mup3_progress_pane_ParamLimits

0x6b9d,	// (0x00043200) mup3_progress_pane

0x6c1b,	// (0x0004327e) popup_mup3_control_window_ParamLimits

0x6c1b,	// (0x0004327e) popup_mup3_control_window

0xd554,	// (0x00049bb7) popup_mup3_text_window

0x6c34,	// (0x00043297) mup3_progress_pane_t1

0x6c53,	// (0x000432b6) mup3_progress_pane_t2

0xd55c,	// (0x00049bbf) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0004be04) mup3_progress_pane_t

0xd579,	// (0x00049bdc) mup_progress_pane_cp03

0xa6c7,	// (0x00046d2a) bg_tb_trans_pane_cp04

0x6c72,	// (0x000432d5) mup3_volume_pane

0x6c7a,	// (0x000432dd) popup_mup3_control_window_g1

0x6c83,	// (0x000432e6) mup3_volume_pane_g1

0x6c8c,	// (0x000432ef) mup3_volume_pane_g2

0x6c95,	// (0x000432f8) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0004be0b) mup3_volume_pane_g

0xa6c7,	// (0x00046d2a) bg_tb_trans_pane_cp03

0xd589,	// (0x00049bec) popup_mup3_text_window_g1

0xd591,	// (0x00049bf4) popup_mup3_text_window_t1

0xae5a,	// (0x000474bd) list_calc_item_pane_g1_ParamLimits

0xcf9c,	// (0x000495ff) mup_volume_pane_cp_g1

0x6678,	// (0x00042cdb) main_touch_calib_pane_t3

0x668e,	// (0x00042cf1) main_touch_calib_pane_t4

0x66a4,	// (0x00042d07) main_touch_calib_pane_t5

0x2843,	// (0x0003eea6) aid_cell_size_toolbar2

0x284b,	// (0x0003eeae) aid_popup3_width_pane

0x145a,	// (0x0003dabd) aid_zoom_text_msg_primary

0x3666,	// (0x0003fcc9) vorec_t7

0xae1e,	// (0x00047481) bg_calc_paper_pane_g1_ParamLimits

0xae2a,	// (0x0004748d) bg_calc_paper_pane_g2_ParamLimits

0xae36,	// (0x00047499) bg_calc_paper_pane_g3_ParamLimits

0xae42,	// (0x000474a5) bg_calc_paper_pane_g4_ParamLimits

0xae4e,	// (0x000474b1) bg_calc_paper_pane_g5_ParamLimits

0x2ee4,	// (0x0003f547) bg_calc_paper_pane_g6_ParamLimits

0x2ef5,	// (0x0003f558) bg_calc_paper_pane_g7_ParamLimits

0x2f06,	// (0x0003f569) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0004b7be) bg_calc_paper_pane_g_ParamLimits

0x2f17,	// (0x0003f57a) calc_bg_paper_pane_g9_ParamLimits

0x3780,	// (0x0003fde3) image_qvga_pane_ParamLimits

0x3780,	// (0x0003fde3) image_qvga_pane

0xad4d,	// (0x000473b0) bg_popup_sub_pane_cp04_ParamLimits

0xbc48,	// (0x000482ab) popup_mup_playback_window_g1_ParamLimits

0xbc54,	// (0x000482b7) popup_mup_playback_window_t1_ParamLimits

0xbc69,	// (0x000482cc) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0004bb4a) popup_mup_playback_window_t_ParamLimits

0x617e,	// (0x000427e1) main_mup2_pane_g3_ParamLimits

0x617e,	// (0x000427e1) main_mup2_pane_g3

0x3a38,	// (0x0004009b) popup_toolbar_window_cp04

0xc04b,	// (0x000486ae) popup_call2_audio_second_window_g3_ParamLimits

0xc04b,	// (0x000486ae) popup_call2_audio_second_window_g3

0xc455,	// (0x00048ab8) popup_call2_audio_first_window_g4_ParamLimits

0xc455,	// (0x00048ab8) popup_call2_audio_first_window_g4

0xcad4,	// (0x00049137) popup_call2_audio_in_window_g4_ParamLimits

0xcad4,	// (0x00049137) popup_call2_audio_in_window_g4

0x5594,	// (0x00041bf7) aid_area_sk_bg_cut_ParamLimits

0x5594,	// (0x00041bf7) aid_area_sk_bg_cut

0xbc7e,	// (0x000482e1) aid_area_sk_bg_cut_2_ParamLimits

0xbc7e,	// (0x000482e1) aid_area_sk_bg_cut_2

0x6507,	// (0x00042b6a) aid_placing_details_win

0x650f,	// (0x00042b72) aid_placing_details_win_2

0xd3c7,	// (0x00049a2a) camera2_autofocus_pane_g1_ParamLimits

0x2a9a,	// (0x0003f0fd) popup_fixed_preview_cale_window_ParamLimits

0x2a9a,	// (0x0003f0fd) popup_fixed_preview_cale_window

0xba63,	// (0x000480c6) navi_slider_pane_g3

0xba6c,	// (0x000480cf) navi_slider_pane_g4

0xba75,	// (0x000480d8) navi_slider_pane_g5

0xba63,	// (0x000480c6) navi_slider_pane_g6

0x4ec7,	// (0x0004152a) navi_slider_pane_g7

0xbb88,	// (0x000481eb) mup_scale_pane_g3

0xbb91,	// (0x000481f4) mup_scale_pane_g4

0xbb9a,	// (0x000481fd) mup_scale_pane_g5

0x5308,	// (0x0004196b) mup_scale_pane_g6

0x5311,	// (0x00041974) mup_scale_pane_g7

0xba63,	// (0x000480c6) cams2_slider_pane_g3

0xd01e,	// (0x00049681) cams2_slider_pane_g4

0x645f,	// (0x00042ac2) cams2_slider_pane_g5

0xba63,	// (0x000480c6) cams2_slider_pane_g6

0x6467,	// (0x00042aca) cams2_slider_pane_g7

0xd252,	// (0x000498b5) camera2_autofocus_pane_cp_g1

0xce35,	// (0x00049498) bg_popup_preview_window_pane_cp02_ParamLimits

0xce35,	// (0x00049498) bg_popup_preview_window_pane_cp02

0xd59f,	// (0x00049c02) list_fp_cale_pane_ParamLimits

0xd59f,	// (0x00049c02) list_fp_cale_pane

0xd5ab,	// (0x00049c0e) popup_fixed_preview_cale_window_t1_ParamLimits

0xd5ab,	// (0x00049c0e) popup_fixed_preview_cale_window_t1

0x6c9e,	// (0x00043301) popup_fixed_preview_cale_window_t2_ParamLimits

0x6c9e,	// (0x00043301) popup_fixed_preview_cale_window_t2

0x6cb3,	// (0x00043316) popup_fixed_preview_cale_window_t3_ParamLimits

0x6cb3,	// (0x00043316) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0004be12) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0004be12) popup_fixed_preview_cale_window_t

0x6cc8,	// (0x0004332b) list_single_fp_cale_pane_ParamLimits

0x6cc8,	// (0x0004332b) list_single_fp_cale_pane

0xd5c9,	// (0x00049c2c) list_single_fp_cale_pane_g1_ParamLimits

0xd5c9,	// (0x00049c2c) list_single_fp_cale_pane_g1

0xd5d5,	// (0x00049c38) list_single_fp_cale_pane_g2_ParamLimits

0xd5d5,	// (0x00049c38) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0004be19) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0004be19) list_single_fp_cale_pane_g

0xd5ee,	// (0x00049c51) list_single_fp_cale_pane_t1_ParamLimits

0xd5ee,	// (0x00049c51) list_single_fp_cale_pane_t1

0xd600,	// (0x00049c63) list_single_fp_cale_pane_t2_ParamLimits

0xd600,	// (0x00049c63) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0004be20) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0004be20) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa6c7,	// (0x00046d2a) main_dialer_pane

0x6cdb,	// (0x0004333e) aid_cell_size_keypad

0x6ce5,	// (0x00043348) dialer_ne_pane

0x6cef,	// (0x00043352) grid_dialer_command_1_pane

0x6cf7,	// (0x0004335a) grid_dialer_command_2_pane

0x6cff,	// (0x00043362) grid_dialer_keypad_pane

0x6d11,	// (0x00043374) bg_popup_call_pane_cp06_ParamLimits

0x6d11,	// (0x00043374) bg_popup_call_pane_cp06

0x6d1d,	// (0x00043380) dialer_ne_clear_pane_ParamLimits

0x6d1d,	// (0x00043380) dialer_ne_clear_pane

0xd633,	// (0x00049c96) dialer_ne_pane_g1

0xd63b,	// (0x00049c9e) dialer_ne_pane_t1_ParamLimits

0xd63b,	// (0x00049c9e) dialer_ne_pane_t1

0x6d29,	// (0x0004338c) dialer_ne_pane_t2_ParamLimits

0x6d29,	// (0x0004338c) dialer_ne_pane_t2

0x6d46,	// (0x000433a9) dialer_ne_pane_t3_ParamLimits

0x6d46,	// (0x000433a9) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0004be25) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0004be25) dialer_ne_pane_t

0x6d6a,	// (0x000433cd) dialer_ne_pane_t3_copy1_ParamLimits

0x6d6a,	// (0x000433cd) dialer_ne_pane_t3_copy1

0x6d8e,	// (0x000433f1) cell_dialer_keypad_pane_ParamLimits

0x6d8e,	// (0x000433f1) cell_dialer_keypad_pane

0x6da5,	// (0x00043408) cell_dialer_command_1_pane_ParamLimits

0x6da5,	// (0x00043408) cell_dialer_command_1_pane

0x6dbb,	// (0x0004341e) cell_dialer_command_2_pane_ParamLimits

0x6dbb,	// (0x0004341e) cell_dialer_command_2_pane

0xd64d,	// (0x00049cb0) bg_button_pane_cp02_ParamLimits

0xd64d,	// (0x00049cb0) bg_button_pane_cp02

0x6dca,	// (0x0004342d) cell_dialer_keypad_pane_g1_ParamLimits

0x6dca,	// (0x0004342d) cell_dialer_keypad_pane_g1

0xd64d,	// (0x00049cb0) bg_button_pane_cp03_ParamLimits

0xd64d,	// (0x00049cb0) bg_button_pane_cp03

0x6ddf,	// (0x00043442) cell_dialer_command_1_pane_g1_ParamLimits

0x6ddf,	// (0x00043442) cell_dialer_command_1_pane_g1

0xd659,	// (0x00049cbc) bg_button_pane_cp04

0x6df3,	// (0x00043456) cell_dialer_command_2_pane_g1

0xba52,	// (0x000480b5) bg_button_pane_cp06

0xd661,	// (0x00049cc4) dialer_ne_clear_pane_g1

0xb920,	// (0x00047f83) navi_pane_g2

0xb94e,	// (0x00047fb1) navi_pane_g3

0x0002,

0xf3ea,	// (0x0004ba4d) navi_pane_g

0xb9eb,	// (0x0004804e) navi_pane_mv_g2

0xba12,	// (0x00048075) navi_pane_mv_g5

0x4e92,	// (0x000414f5) navi_pane_mv_t1

0xae12,	// (0x00047475) main_clock2_pane

0x6e31,	// (0x00043494) main_clock2_list_pane_ParamLimits

0x6e31,	// (0x00043494) main_clock2_list_pane

0x6e59,	// (0x000434bc) main_clock2_pane_t1_ParamLimits

0x6e59,	// (0x000434bc) main_clock2_pane_t1

0x6e7b,	// (0x000434de) main_clock2_pane_t2_ParamLimits

0x6e7b,	// (0x000434de) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0004be2c) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0004be2c) main_clock2_pane_t

0x6ed6,	// (0x00043539) popup_clock_analogue_window_cp03_ParamLimits

0x6ed6,	// (0x00043539) popup_clock_analogue_window_cp03

0x6ef4,	// (0x00043557) popup_clock_digital_window_cp02_ParamLimits

0x6ef4,	// (0x00043557) popup_clock_digital_window_cp02

0x6f61,	// (0x000435c4) main_clock2_list_single_pane_ParamLimits

0x6f61,	// (0x000435c4) main_clock2_list_single_pane

0xba52,	// (0x000480b5) list_highlight_pane_cp05

0xd67f,	// (0x00049ce2) main_clock2_list_single_pane_t1

0x3a38,	// (0x0004009b) popup_toolbar_window_cp04_ParamLimits

0x6531,	// (0x00042b94) camera2_autofocus_pane_g2_ParamLimits

0x6531,	// (0x00042b94) camera2_autofocus_pane_g2

0x653d,	// (0x00042ba0) camera2_autofocus_pane_g3_ParamLimits

0x653d,	// (0x00042ba0) camera2_autofocus_pane_g3

0x6549,	// (0x00042bac) camera2_autofocus_pane_g4_ParamLimits

0x6549,	// (0x00042bac) camera2_autofocus_pane_g4

0x6555,	// (0x00042bb8) camera2_autofocus_pane_g5_ParamLimits

0x6555,	// (0x00042bb8) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0004bd75) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0004bd75) camera2_autofocus_pane_g

0xd51a,	// (0x00049b7d) camera2_autofocus_pane_cp_g2

0xd522,	// (0x00049b85) camera2_autofocus_pane_cp_g3

0xd52a,	// (0x00049b8d) camera2_autofocus_pane_cp_g4

0xd532,	// (0x00049b95) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0004bddb) camera2_autofocus_pane_cp_g

0x6d09,	// (0x0004336c) popup_dialer_spcha_window

0xa6c7,	// (0x00046d2a) bg_popup_sub_pane_cp07

0xd68d,	// (0x00049cf0) list_spcha_pane

0xd695,	// (0x00049cf8) list_single_spcha_pane_ParamLimits

0xd695,	// (0x00049cf8) list_single_spcha_pane

0xa6c7,	// (0x00046d2a) list_highlight_pane_cp06

0xd6a6,	// (0x00049d09) list_single_spcha_pane_t1

0xc87e,	// (0x00048ee1) popup_call2_audio_out_window_g4_ParamLimits

0xc87e,	// (0x00048ee1) popup_call2_audio_out_window_g4

0xa6c7,	// (0x00046d2a) main_imed2_pane

0x5bcd,	// (0x00042230) popup_imed_adjust2_window

0x5be0,	// (0x00042243) popup_imed_trans_window_ParamLimits

0x5be0,	// (0x00042243) popup_imed_trans_window

0xd087,	// (0x000496ea) popup_blid_sat_info2_window_t1

0xd095,	// (0x000496f8) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0004bd0a) popup_blid_sat_info2_window_t

0x700b,	// (0x0004366e) aid_size_cell_colour_35

0x7025,	// (0x00043688) aid_size_cell_colour_112

0x703c,	// (0x0004369f) aid_size_cell_effect

0xb56d,	// (0x00047bd0) bg_tb_trans_pane_cp02

0xb57b,	// (0x00047bde) heading_imed_pane

0x7056,	// (0x000436b9) listscroll_imed_pane

0xd6b4,	// (0x00049d17) heading_imed_pane_g1

0xd6bc,	// (0x00049d1f) heading_imed_pane_t1

0xd6ca,	// (0x00049d2d) grid_imed_colour_35_pane_ParamLimits

0xd6ca,	// (0x00049d2d) grid_imed_colour_35_pane

0x7062,	// (0x000436c5) grid_imed_effect_pane

0xd6e1,	// (0x00049d44) list_imed_aspect_pane

0x7072,	// (0x000436d5) scroll_pane_cp027_ParamLimits

0x7072,	// (0x000436d5) scroll_pane_cp027

0x707e,	// (0x000436e1) cell_imed_effect_pane_ParamLimits

0x707e,	// (0x000436e1) cell_imed_effect_pane

0xd6e9,	// (0x00049d4c) cell_imed_colour_pane_ParamLimits

0xd6e9,	// (0x00049d4c) cell_imed_colour_pane

0xd72b,	// (0x00049d8e) cell_imed_colour_pane_g1_ParamLimits

0xd72b,	// (0x00049d8e) cell_imed_colour_pane_g1

0xd73c,	// (0x00049d9f) hgihlgiht_grid_pane_cp016_ParamLimits

0xd73c,	// (0x00049d9f) hgihlgiht_grid_pane_cp016

0x7096,	// (0x000436f9) cell_imed_effect_pane_g1

0x709e,	// (0x00043701) grid_highlight_pane_cp017

0xd74d,	// (0x00049db0) list_imed_single_pane_ParamLimits

0xd74d,	// (0x00049db0) list_imed_single_pane

0xa6c7,	// (0x00046d2a) list_highlight_pane_cp07

0xd762,	// (0x00049dc5) list_imed_aspect_pane_comp1_t1

0xce41,	// (0x000494a4) bg_tb_trans_pane_cp05

0xd784,	// (0x00049de7) popup_imed_adjust2_window_g1

0xd7ab,	// (0x00049e0e) popup_imed_adjust2_window_t1

0xd7c3,	// (0x00049e26) slider_imed_adjust_pane

0xd7d7,	// (0x00049e3a) slider_imed_adjust_pane_g1

0xd7e7,	// (0x00049e4a) slider_imed_adjust_pane_g2

0xd7f7,	// (0x00049e5a) slider_imed_adjust_pane_g3

0xd808,	// (0x00049e6b) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0004be49) slider_imed_adjust_pane_g

0x70a7,	// (0x0004370a) aid_size_cell_clipart2

0x70b3,	// (0x00043716) grid_imed_clipart_pane

0xd819,	// (0x00049e7c) scroll_pane_cp031

0x70bd,	// (0x00043720) cell_imed_clipart_pane_ParamLimits

0x70bd,	// (0x00043720) cell_imed_clipart_pane

0x70df,	// (0x00043742) cell_imed_clipart_pane_g1

0xa6c7,	// (0x00046d2a) grid_highlight_pane_cp014

0x6e3d,	// (0x000434a0) main_clock2_pane_g1_ParamLimits

0x6e3d,	// (0x000434a0) main_clock2_pane_g1

0x6f0c,	// (0x0004356f) aid_call2_pane_cp10

0x6f1e,	// (0x00043581) aid_call_pane_cp10

0xb881,	// (0x00047ee4) popup_clock_analogue_window_cp10_g1

0xb881,	// (0x00047ee4) popup_clock_analogue_window_cp10_g2

0x6f30,	// (0x00043593) popup_clock_analogue_window_cp10_g3

0x6f30,	// (0x00043593) popup_clock_analogue_window_cp10_g4

0xb881,	// (0x00047ee4) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0004be37) popup_clock_analogue_window_cp10_g

0x6f42,	// (0x000435a5) popup_clock_analogue_window_cp10_t1

0x6f73,	// (0x000435d6) clock_digital_number_pane_cp10_ParamLimits

0x6f73,	// (0x000435d6) clock_digital_number_pane_cp10

0x6f8b,	// (0x000435ee) clock_digital_number_pane_cp11_ParamLimits

0x6f8b,	// (0x000435ee) clock_digital_number_pane_cp11

0x6fa3,	// (0x00043606) clock_digital_number_pane_cp12_ParamLimits

0x6fa3,	// (0x00043606) clock_digital_number_pane_cp12

0x6fbb,	// (0x0004361e) clock_digital_number_pane_cp13_ParamLimits

0x6fbb,	// (0x0004361e) clock_digital_number_pane_cp13

0x6fd3,	// (0x00043636) clock_digital_separator_pane_cp10_ParamLimits

0x6fd3,	// (0x00043636) clock_digital_separator_pane_cp10

0x6feb,	// (0x0004364e) popup_clock_digital_window_cp02_t1_ParamLimits

0x6feb,	// (0x0004364e) popup_clock_digital_window_cp02_t1

0xad45,	// (0x000473a8) clock_digital_number_pane_cp10_g1

0xad45,	// (0x000473a8) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0004be52) clock_digital_number_pane_cp10_g

0xad45,	// (0x000473a8) clock_digital_separator_pane_cp10_g1

0xad45,	// (0x000473a8) clock_digital_separator_pane_g2_cp10

0xba1a,	// (0x0004807d) navi_pane_vded_g4

0xba23,	// (0x00048086) navi_pane_vded_g5

0xba2c,	// (0x0004808f) navi_pane_vded_t1

0xa6c7,	// (0x00046d2a) main_vded_pane

0x70e8,	// (0x0004374b) main_vded_pane_g1

0x70f4,	// (0x00043757) main_vded_pane_g2

0x70fe,	// (0x00043761) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0004be57) main_vded_pane_g

0x7108,	// (0x0004376b) main_vded_pane_t1

0x7116,	// (0x00043779) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0004be5e) main_vded_pane_t

0x7124,	// (0x00043787) vded_slider_pane

0x712e,	// (0x00043791) vded_video_pane

0xd821,	// (0x00049e84) vded_video_pane_g1

0x7138,	// (0x0004379b) vded_video_pane_g2

0xd252,	// (0x000498b5) vded_video_pane_g3

0x0002,

0xf800,	// (0x0004be63) vded_video_pane_g

0xd82b,	// (0x00049e8e) vded_slider_pane_g1

0xcf9c,	// (0x000495ff) vded_slider_pane_g2

0xd834,	// (0x00049e97) vded_slider_pane_g3

0xd83d,	// (0x00049ea0) vded_slider_pane_g4

0xd846,	// (0x00049ea9) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0004be6a) vded_slider_pane_g

0x6c0d,	// (0x00043270) mup3_rocker_pane_ParamLimits

0x6c0d,	// (0x00043270) mup3_rocker_pane

0x7141,	// (0x000437a4) mup3_control_keys_pane_g1

0x7149,	// (0x000437ac) mup3_control_keys_pane_g2

0x7151,	// (0x000437b4) mup3_control_keys_pane_g3

0x7159,	// (0x000437bc) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0004be75) mup3_control_keys_pane_g

0x2ac2,	// (0x0003f125) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2ac2,	// (0x0003f125) popup_toolbar2_fixed_window_cp01

0x6c27,	// (0x0004328a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6c27,	// (0x0004328a) popup_toolbar2_fixed_window_cp02

0xc1bd,	// (0x00048820) popup_call2_audio_second_window_t4_ParamLimits

0xc1bd,	// (0x00048820) popup_call2_audio_second_window_t4

0xc6eb,	// (0x00048d4e) popup_call2_audio_first_window_t6_ParamLimits

0xc6eb,	// (0x00048d4e) popup_call2_audio_first_window_t6

0xc981,	// (0x00048fe4) popup_call2_audio_out_window_t6_ParamLimits

0xc981,	// (0x00048fe4) popup_call2_audio_out_window_t6

0xa6c7,	// (0x00046d2a) main_vitu_pane

0x7169,	// (0x000437cc) aid_size_cell_itu_ParamLimits

0x7169,	// (0x000437cc) aid_size_cell_itu

0xdcc1,	// (0x0004a324) bg_popup_window_pane_cp08_ParamLimits

0xdcc1,	// (0x0004a324) bg_popup_window_pane_cp08

0x7177,	// (0x000437da) field_vitu_entry_pane_ParamLimits

0x7177,	// (0x000437da) field_vitu_entry_pane

0x7186,	// (0x000437e9) grid_vitu_function_pane_ParamLimits

0x7186,	// (0x000437e9) grid_vitu_function_pane

0x7196,	// (0x000437f9) grid_vitu_itu_pane_ParamLimits

0x7196,	// (0x000437f9) grid_vitu_itu_pane

0x71a6,	// (0x00043809) cell_vitu_itu_pane_ParamLimits

0x71a6,	// (0x00043809) cell_vitu_itu_pane

0x71bb,	// (0x0004381e) cell_vitu_function_pane_ParamLimits

0x71bb,	// (0x0004381e) cell_vitu_function_pane

0xb56d,	// (0x00047bd0) bg_popup_sub_pane_cp08_ParamLimits

0xb56d,	// (0x00047bd0) bg_popup_sub_pane_cp08

0x71cd,	// (0x00043830) field_vitu_entry_pane_t1_ParamLimits

0x71cd,	// (0x00043830) field_vitu_entry_pane_t1

0xd867,	// (0x00049eca) field_vitu_entry_pane_t2_ParamLimits

0xd867,	// (0x00049eca) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0004be83) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0004be83) field_vitu_entry_pane_t

0xd884,	// (0x00049ee7) bg_button_pane_cp05_ParamLimits

0xd884,	// (0x00049ee7) bg_button_pane_cp05

0x71e9,	// (0x0004384c) cell_vitu_itu_pane_g1

0x7201,	// (0x00043864) cell_vitu_itu_pane_t1_ParamLimits

0x7201,	// (0x00043864) cell_vitu_itu_pane_t1

0x7213,	// (0x00043876) cell_vitu_itu_pane_t2_ParamLimits

0x7213,	// (0x00043876) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0004be88) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0004be88) cell_vitu_itu_pane_t

0xd892,	// (0x00049ef5) bg_button_pane_cp07

0x7248,	// (0x000438ab) cell_vitu_function_pane_g1

0x2d88,	// (0x0003f3eb) main_calc_pane_g1

0x287f,	// (0x0003eee2) aid_visual_content_pane

0xa6c7,	// (0x00046d2a) main_vradio_pane

0x7251,	// (0x000438b4) main_vradio_pane_g1_ParamLimits

0x7251,	// (0x000438b4) main_vradio_pane_g1

0xd89c,	// (0x00049eff) main_vradio_pane_g2_ParamLimits

0xd89c,	// (0x00049eff) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0004be8f) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0004be8f) main_vradio_pane_g

0x7261,	// (0x000438c4) main_vradio_pane_t1_ParamLimits

0x7261,	// (0x000438c4) main_vradio_pane_t1

0x7273,	// (0x000438d6) main_vradio_pane_t2_ParamLimits

0x7273,	// (0x000438d6) main_vradio_pane_t2

0xd8a9,	// (0x00049f0c) main_vradio_pane_t3_ParamLimits

0xd8a9,	// (0x00049f0c) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0004be94) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0004be94) main_vradio_pane_t

0x7285,	// (0x000438e8) vradio_rocker_control_pane_ParamLimits

0x7285,	// (0x000438e8) vradio_rocker_control_pane

0x7291,	// (0x000438f4) vradio_station_info_pane_ParamLimits

0x7291,	// (0x000438f4) vradio_station_info_pane

0xd8bd,	// (0x00049f20) vradio_frequency_info_pane_ParamLimits

0xd8bd,	// (0x00049f20) vradio_frequency_info_pane

0xd252,	// (0x000498b5) vradio_station_info_pane_g1

0xd8cc,	// (0x00049f2f) vradio_station_info_pane_t1_ParamLimits

0xd8cc,	// (0x00049f2f) vradio_station_info_pane_t1

0xd8ee,	// (0x00049f51) vradio_station_info_pane_t2_ParamLimits

0xd8ee,	// (0x00049f51) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0004be9b) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0004be9b) vradio_station_info_pane_t

0xd900,	// (0x00049f63) vradio_tuning_pane

0xd908,	// (0x00049f6b) vradio_rocker_control_pane_g1

0xd910,	// (0x00049f73) vradio_rocker_control_pane_g2

0xd918,	// (0x00049f7b) vradio_rocker_control_pane_g3

0xd920,	// (0x00049f83) vradio_rocker_control_pane_g4

0xd928,	// (0x00049f8b) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0004bea0) vradio_rocker_control_pane_g

0x72a0,	// (0x00043903) vradio_frequency_info_pane_g1

0xd930,	// (0x00049f93) vradio_frequency_info_pane_t1_ParamLimits

0xd930,	// (0x00049f93) vradio_frequency_info_pane_t1

0x72aa,	// (0x0004390d) vradio_tuning_pane_g1

0x72b3,	// (0x00043916) vradio_tuning_pane_t1

0x28c8,	// (0x0003ef2b) area_side_right_pane_ParamLimits

0x28c8,	// (0x0003ef2b) area_side_right_pane

0xcdfc,	// (0x0004945f) status_small_pane_g1

0xce04,	// (0x00049467) status_small_pane_g2

0xce0d,	// (0x00049470) status_small_pane_g3

0xce16,	// (0x00049479) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0004bc60) status_small_pane_g

0xce1f,	// (0x00049482) status_small_pane_t1

0xa6c7,	// (0x00046d2a) main_video3_pane

0xd944,	// (0x00049fa7) cams_zoom_vslider_pane

0xd94c,	// (0x00049faf) image3_wide_pane_ParamLimits

0xd94c,	// (0x00049faf) image3_wide_pane

0xd966,	// (0x00049fc9) image3_wide_small_pane

0xd972,	// (0x00049fd5) main_video3_pane_g1_ParamLimits

0xd972,	// (0x00049fd5) main_video3_pane_g1

0xd98e,	// (0x00049ff1) main_video3_pane_g2_ParamLimits

0xd98e,	// (0x00049ff1) main_video3_pane_g2

0x0001,

0xf848,	// (0x0004beab) main_video3_pane_g_ParamLimits

0xf848,	// (0x0004beab) main_video3_pane_g

0xd9aa,	// (0x0004a00d) main_video3_pane_t1_ParamLimits

0xd9aa,	// (0x0004a00d) main_video3_pane_t1

0xd9d5,	// (0x0004a038) main_video3_pane_t2_ParamLimits

0xd9d5,	// (0x0004a038) main_video3_pane_t2

0xda00,	// (0x0004a063) main_video3_pane_t3_ParamLimits

0xda00,	// (0x0004a063) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0004beb0) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0004beb0) main_video3_pane_t

0xda2d,	// (0x0004a090) cams_zoom_vslider_pane_g1

0xda36,	// (0x0004a099) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0004beb7) cams_zoom_vslider_pane_g

0xda3e,	// (0x0004a0a1) small_slider_vertical_pane

0xd252,	// (0x000498b5) small_slider_vertical_pane_g1

0xd252,	// (0x000498b5) small_slider_vertical_pane_g2

0xda46,	// (0x0004a0a9) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0004bebc) small_slider_vertical_pane_g

0xa6c7,	// (0x00046d2a) main_hwr_training_pane

0xda4f,	// (0x0004a0b2) hwr_training_instruct_pane_ParamLimits

0xda4f,	// (0x0004a0b2) hwr_training_instruct_pane

0x72c2,	// (0x00043925) hwr_training_navi_pane_ParamLimits

0x72c2,	// (0x00043925) hwr_training_navi_pane

0x72dc,	// (0x0004393f) hwr_training_write_pane_ParamLimits

0x72dc,	// (0x0004393f) hwr_training_write_pane

0xa6c7,	// (0x00046d2a) bg_frame_shadow_pane

0xda86,	// (0x0004a0e9) hwr_training_write_pane_g1

0xda8e,	// (0x0004a0f1) hwr_training_write_pane_g2

0xda96,	// (0x0004a0f9) hwr_training_write_pane_g3

0xda9e,	// (0x0004a101) hwr_training_write_pane_g4

0xdaa6,	// (0x0004a109) hwr_training_write_pane_g5

0xdaae,	// (0x0004a111) hwr_training_write_pane_g6

0xdab6,	// (0x0004a119) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0004bec3) hwr_training_write_pane_g

0x7314,	// (0x00043977) hwr_training_navi_pane_g1_ParamLimits

0x7314,	// (0x00043977) hwr_training_navi_pane_g1

0x7326,	// (0x00043989) hwr_training_navi_pane_g2_ParamLimits

0x7326,	// (0x00043989) hwr_training_navi_pane_g2

0x7338,	// (0x0004399b) hwr_training_navi_pane_g3_ParamLimits

0x7338,	// (0x0004399b) hwr_training_navi_pane_g3

0x7348,	// (0x000439ab) hwr_training_navi_pane_g4_ParamLimits

0x7348,	// (0x000439ab) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0004bed2) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0004bed2) hwr_training_navi_pane_g

0x7362,	// (0x000439c5) hwr_training_navi_pane_t1

0x7370,	// (0x000439d3) list_single_hwr_training_instruct_pane_ParamLimits

0x7370,	// (0x000439d3) list_single_hwr_training_instruct_pane

0xdabe,	// (0x0004a121) list_single_hwr_training_instruct_pane_t1

0xd192,	// (0x000497f5) bg_frame_shadow_pane_g1

0xdacd,	// (0x0004a130) bg_frame_shadow_pane_g2

0xdad5,	// (0x0004a138) bg_frame_shadow_pane_g3

0xdadd,	// (0x0004a140) bg_frame_shadow_pane_g4

0xdae5,	// (0x0004a148) bg_frame_shadow_pane_g5

0xdaed,	// (0x0004a150) bg_frame_shadow_pane_g6

0xdaf5,	// (0x0004a158) bg_frame_shadow_pane_g7

0xaecb,	// (0x0004752e) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0004bedd) bg_frame_shadow_pane_g

0xa6c7,	// (0x00046d2a) main_video_tele_dialer_pane

0x7395,	// (0x000439f8) aid_size_cell_video_keypad_ParamLimits

0x7395,	// (0x000439f8) aid_size_cell_video_keypad

0x73a5,	// (0x00043a08) grid_video_dialer_keypad_pane_ParamLimits

0x73a5,	// (0x00043a08) grid_video_dialer_keypad_pane

0x73d9,	// (0x00043a3c) video_down_pane_cp_ParamLimits

0x73d9,	// (0x00043a3c) video_down_pane_cp

0x7403,	// (0x00043a66) cell_video_dialer_keypad_pane_ParamLimits

0x7403,	// (0x00043a66) cell_video_dialer_keypad_pane

0xdafd,	// (0x0004a160) bg_button_pane_cp08_ParamLimits

0xdafd,	// (0x0004a160) bg_button_pane_cp08

0x7418,	// (0x00043a7b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7418,	// (0x00043a7b) cell_video_dialer_keypad_pane_g1

0x6c01,	// (0x00043264) mup3_rocker2_pane_ParamLimits

0x6c01,	// (0x00043264) mup3_rocker2_pane

0xd252,	// (0x000498b5) mup3_rocker2_pane_g1

0x5b3d,	// (0x000421a0) main_dialer2_pane

0xa6c7,	// (0x00046d2a) main_mp4_pane

0x7457,	// (0x00043aba) main_mp4_pane_g1_ParamLimits

0x7457,	// (0x00043aba) main_mp4_pane_g1

0x7465,	// (0x00043ac8) main_mp4_pane_g2_ParamLimits

0x7465,	// (0x00043ac8) main_mp4_pane_g2

0x7473,	// (0x00043ad6) main_mp4_pane_g3_ParamLimits

0x7473,	// (0x00043ad6) main_mp4_pane_g3

0x74b8,	// (0x00043b1b) main_mp4_pane_g4_ParamLimits

0x74b8,	// (0x00043b1b) main_mp4_pane_g4

0x74e0,	// (0x00043b43) main_mp4_pane_g5_ParamLimits

0x74e0,	// (0x00043b43) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0004befd) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0004befd) main_mp4_pane_g

0x7530,	// (0x00043b93) main_mp4_pane_t1_ParamLimits

0x7530,	// (0x00043b93) main_mp4_pane_t1

0x758c,	// (0x00043bef) main_mp4_pane_t2_ParamLimits

0x758c,	// (0x00043bef) main_mp4_pane_t2

0xdb09,	// (0x0004a16c) main_mp4_pane_t3_ParamLimits

0xdb09,	// (0x0004a16c) main_mp4_pane_t3

0x75de,	// (0x00043c41) main_mp4_pane_t4_ParamLimits

0x75de,	// (0x00043c41) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004bf0a) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004bf0a) main_mp4_pane_t

0x7622,	// (0x00043c85) mp4_progress_pane_ParamLimits

0x7622,	// (0x00043c85) mp4_progress_pane

0x766c,	// (0x00043ccf) mp4_rocker_pane_ParamLimits

0x766c,	// (0x00043ccf) mp4_rocker_pane

0xdb31,	// (0x0004a194) mp4_progress_pane_t1

0xdb4a,	// (0x0004a1ad) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004bf13) mp4_progress_pane_t

0xdb63,	// (0x0004a1c6) mup_progress_pane_cp04

0xd252,	// (0x000498b5) mp4_rocker_pane_g1

0x768c,	// (0x00043cef) aid_cell_size_keypad2_ParamLimits

0x768c,	// (0x00043cef) aid_cell_size_keypad2

0x769c,	// (0x00043cff) dialer2_ne_pane_ParamLimits

0x769c,	// (0x00043cff) dialer2_ne_pane

0x76aa,	// (0x00043d0d) grid_dialer2_keypad_pane_ParamLimits

0x76aa,	// (0x00043d0d) grid_dialer2_keypad_pane

0xdccf,	// (0x0004a332) bg_popup_call_pane_cp07_ParamLimits

0xdccf,	// (0x0004a332) bg_popup_call_pane_cp07

0x76ba,	// (0x00043d1d) dialer2_ne_pane_t1_ParamLimits

0x76ba,	// (0x00043d1d) dialer2_ne_pane_t1

0x76df,	// (0x00043d42) cell_dialer2_keypad_pane_ParamLimits

0x76df,	// (0x00043d42) cell_dialer2_keypad_pane

0xdb81,	// (0x0004a1e4) bg_button_pane_pane_cp04_ParamLimits

0xdb81,	// (0x0004a1e4) bg_button_pane_pane_cp04

0x76f4,	// (0x00043d57) cell_dialer2_keypad_pane_g1_ParamLimits

0x76f4,	// (0x00043d57) cell_dialer2_keypad_pane_g1

0x38fa,	// (0x0003ff5d) aid_placing_vt_set_content_ParamLimits

0x38fa,	// (0x0003ff5d) aid_placing_vt_set_content

0x3926,	// (0x0003ff89) aid_placing_vt_set_title_ParamLimits

0x3926,	// (0x0003ff89) aid_placing_vt_set_title

0xa6c7,	// (0x00046d2a) main_image3_pane

0x778e,	// (0x00043df1) area_side_right_pane_cp01_ParamLimits

0x778e,	// (0x00043df1) area_side_right_pane_cp01

0xabf8,	// (0x0004725b) main_image3_pane_g1_ParamLimits

0xabf8,	// (0x0004725b) main_image3_pane_g1

0x77bb,	// (0x00043e1e) main_image3_pane_g2_ParamLimits

0x77bb,	// (0x00043e1e) main_image3_pane_g2

0x77d4,	// (0x00043e37) main_image3_pane_g3_ParamLimits

0x77d4,	// (0x00043e37) main_image3_pane_g3

0x77ed,	// (0x00043e50) main_image3_pane_g4_ParamLimits

0x77ed,	// (0x00043e50) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004bf22) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004bf22) main_image3_pane_g

0x7806,	// (0x00043e69) main_image3_pane_t1_ParamLimits

0x7806,	// (0x00043e69) main_image3_pane_t1

0x782b,	// (0x00043e8e) main_image3_pane_t2_ParamLimits

0x782b,	// (0x00043e8e) main_image3_pane_t2

0x784a,	// (0x00043ead) main_image3_pane_t3_ParamLimits

0x784a,	// (0x00043ead) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004bf2b) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004bf2b) main_image3_pane_t

0xdcc1,	// (0x0004a324) grid_sctrl_middle_pane_cp01_ParamLimits

0xdcc1,	// (0x0004a324) grid_sctrl_middle_pane_cp01

0x78ab,	// (0x00043f0e) cell_sctrl_middle_pane_cp01_ParamLimits

0x78ab,	// (0x00043f0e) cell_sctrl_middle_pane_cp01

0x78bc,	// (0x00043f1f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x78bc,	// (0x00043f1f) cell_sctrl_middle_pane_cp01_g1

0xa6c7,	// (0x00046d2a) main_call4_pane

0x78c9,	// (0x00043f2c) aid_size_button_call4_ParamLimits

0x78c9,	// (0x00043f2c) aid_size_button_call4

0x78f9,	// (0x00043f5c) call4_windows_pane_ParamLimits

0x78f9,	// (0x00043f5c) call4_windows_pane

0x7913,	// (0x00043f76) grid_call4_button_pane_ParamLimits

0x7913,	// (0x00043f76) grid_call4_button_pane

0xdb8d,	// (0x0004a1f0) call4_windows_conf_pane

0xdba4,	// (0x0004a207) popup_call4_audio_first_window_ParamLimits

0xdba4,	// (0x0004a207) popup_call4_audio_first_window

0xdbf0,	// (0x0004a253) popup_call4_audio_second_window_ParamLimits

0xdbf0,	// (0x0004a253) popup_call4_audio_second_window

0xdc04,	// (0x0004a267) popup_call4_audio_wait_window_ParamLimits

0xdc04,	// (0x0004a267) popup_call4_audio_wait_window

0x7937,	// (0x00043f9a) cell_call4_button_pane_ParamLimits

0x7937,	// (0x00043f9a) cell_call4_button_pane

0x795c,	// (0x00043fbf) bg_button_pane_cp09_ParamLimits

0x795c,	// (0x00043fbf) bg_button_pane_cp09

0x7968,	// (0x00043fcb) cell_call4_button_pane_g1_ParamLimits

0x7968,	// (0x00043fcb) cell_call4_button_pane_g1

0x7975,	// (0x00043fd8) cell_call4_button_pane_t1_ParamLimits

0x7975,	// (0x00043fd8) cell_call4_button_pane_t1

0xdc4c,	// (0x0004a2af) popup_call4_audio_conf_window_ParamLimits

0xdc4c,	// (0x0004a2af) popup_call4_audio_conf_window

0x6c34,	// (0x00043297) mup3_progress_pane_t1_ParamLimits

0x6c53,	// (0x000432b6) mup3_progress_pane_t2_ParamLimits

0xd55c,	// (0x00049bbf) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0004be04) mup3_progress_pane_t_ParamLimits

0xd579,	// (0x00049bdc) mup_progress_pane_cp03_ParamLimits

0x7161,	// (0x000437c4) mup3_control_keys_pane_g4_copy1

0x7650,	// (0x00043cb3) mp4_rocker2_pane_ParamLimits

0x7650,	// (0x00043cb3) mp4_rocker2_pane

0xdc60,	// (0x0004a2c3) mp4_rocker2_pane_g1

0xdc68,	// (0x0004a2cb) mp4_rocker2_pane_g2

0x7987,	// (0x00043fea) mp4_rocker2_pane_g3

0x798f,	// (0x00043ff2) mp4_rocker2_pane_g4

0x7997,	// (0x00043ffa) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004bf34) mp4_rocker2_pane_g

0xa6c7,	// (0x00046d2a) main_camera4_pane

0xa6c7,	// (0x00046d2a) main_video4_pane

0x73b5,	// (0x00043a18) main_video_tele_dialer_pane_t1_ParamLimits

0x73b5,	// (0x00043a18) main_video_tele_dialer_pane_t1

0x73c7,	// (0x00043a2a) main_video_tele_dialer_pane_t2_ParamLimits

0x73c7,	// (0x00043a2a) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0004beee) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0004beee) main_video_tele_dialer_pane_t

0x79b7,	// (0x0004401a) cam4_autofocus_pane_ParamLimits

0x79b7,	// (0x0004401a) cam4_autofocus_pane

0x79d1,	// (0x00044034) cam4_image_uncrop_pane_ParamLimits

0x79d1,	// (0x00044034) cam4_image_uncrop_pane

0x79e8,	// (0x0004404b) cam4_indicators_pane_ParamLimits

0x79e8,	// (0x0004404b) cam4_indicators_pane

0x7a04,	// (0x00044067) main_camera4_pane_g1_ParamLimits

0x7a04,	// (0x00044067) main_camera4_pane_g1

0x7a10,	// (0x00044073) main_camera4_pane_g2_ParamLimits

0x7a10,	// (0x00044073) main_camera4_pane_g2

0x7a10,	// (0x00044073) main_camera4_pane_g3_ParamLimits

0x7a10,	// (0x00044073) main_camera4_pane_g3

0x7a1c,	// (0x0004407f) main_camera4_pane_g4_ParamLimits

0x7a1c,	// (0x0004407f) main_camera4_pane_g4

0x7a28,	// (0x0004408b) main_camera4_pane_g5_ParamLimits

0x7a28,	// (0x0004408b) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004bf3f) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004bf3f) main_camera4_pane_g

0x7a42,	// (0x000440a5) main_camera4_pane_t1_ParamLimits

0x7a42,	// (0x000440a5) main_camera4_pane_t1

0xd4b5,	// (0x00049b18) bg_tb_trans_pane_cp06

0x7a92,	// (0x000440f5) cam4_indicators_pane_g1

0x7aa3,	// (0x00044106) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004bf5a) cam4_indicators_pane_g

0x7ac1,	// (0x00044124) cam4_indicators_pane_t1

0x7aeb,	// (0x0004414e) main_video4_pane_g1_ParamLimits

0x7aeb,	// (0x0004414e) main_video4_pane_g1

0x7af7,	// (0x0004415a) main_video4_pane_g2_ParamLimits

0x7af7,	// (0x0004415a) main_video4_pane_g2

0x7b03,	// (0x00044166) main_video4_pane_g3_ParamLimits

0x7b03,	// (0x00044166) main_video4_pane_g3

0x7b0f,	// (0x00044172) main_video4_pane_g4_ParamLimits

0x7b0f,	// (0x00044172) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004bf61) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004bf61) main_video4_pane_g

0x7b2f,	// (0x00044192) vid4_indicators_pane_ParamLimits

0x7b2f,	// (0x00044192) vid4_indicators_pane

0x7b4e,	// (0x000441b1) video4_image_uncrop_cif_pane_ParamLimits

0x7b4e,	// (0x000441b1) video4_image_uncrop_cif_pane

0x7b5d,	// (0x000441c0) video4_image_uncrop_nhd_pane_ParamLimits

0x7b5d,	// (0x000441c0) video4_image_uncrop_nhd_pane

0x79d1,	// (0x00044034) video4_image_uncrop_vga_pane_ParamLimits

0x79d1,	// (0x00044034) video4_image_uncrop_vga_pane

0xb56d,	// (0x00047bd0) bg_tb_trans_pane_cp07

0x7b74,	// (0x000441d7) vid4_indicators_pane_g1

0x7b88,	// (0x000441eb) vid4_indicators_pane_g2

0x7b9c,	// (0x000441ff) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004bf6c) vid4_indicators_pane_g

0x7bcb,	// (0x0004422e) vid4_indicators_pane_t1

0x7be2,	// (0x00044245) cam4_autofocus_pane_g1

0x7bea,	// (0x0004424d) cam4_autofocus_pane_g2

0x7bf2,	// (0x00044255) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004bf77) cam4_autofocus_pane_g

0x7bfa,	// (0x0004425d) cam4_autofocus_pane_g3_copy1

0x73e7,	// (0x00043a4a) video_down_pane_cp_t1

0x73f5,	// (0x00043a58) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0004bef3) video_down_pane_cp_t

0xdcc1,	// (0x0004a324) popup_vitu2_window_ParamLimits

0xdcc1,	// (0x0004a324) popup_vitu2_window

0x7c02,	// (0x00044265) aid_size_cell2_itu2_ParamLimits

0x7c02,	// (0x00044265) aid_size_cell2_itu2

0x7c24,	// (0x00044287) aid_size_cell_itu2_ParamLimits

0x7c24,	// (0x00044287) aid_size_cell_itu2

0xdccf,	// (0x0004a332) bg_popup_window_pane_cp09_ParamLimits

0xdccf,	// (0x0004a332) bg_popup_window_pane_cp09

0x7c68,	// (0x000442cb) field_vitu2_entry_pane_ParamLimits

0x7c68,	// (0x000442cb) field_vitu2_entry_pane

0x7c88,	// (0x000442eb) grid_vitu2_function_pane_ParamLimits

0x7c88,	// (0x000442eb) grid_vitu2_function_pane

0x7ccc,	// (0x0004432f) grid_vitu2_itu_pane_ParamLimits

0x7ccc,	// (0x0004432f) grid_vitu2_itu_pane

0x7d44,	// (0x000443a7) cell_vitu2_itu_pane_ParamLimits

0x7d44,	// (0x000443a7) cell_vitu2_itu_pane

0x7d59,	// (0x000443bc) cell_vitu2_function_pane_ParamLimits

0x7d59,	// (0x000443bc) cell_vitu2_function_pane

0xdc70,	// (0x0004a2d3) bg_popup_call_pane_cp08_ParamLimits

0xdc70,	// (0x0004a2d3) bg_popup_call_pane_cp08

0xdc89,	// (0x0004a2ec) field_vitu2_entry_pane_g1

0xdc95,	// (0x0004a2f8) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004bf7e) field_vitu2_entry_pane_g

0x17db,	// (0x0003de3e) field_vitu2_entry_pane_t1_ParamLimits

0x17db,	// (0x0003de3e) field_vitu2_entry_pane_t1

0x180d,	// (0x0003de70) field_vitu2_entry_pane_t2_ParamLimits

0x180d,	// (0x0003de70) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004bf85) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004bf85) field_vitu2_entry_pane_t

0x7d98,	// (0x000443fb) bg_button_pane_cp010_ParamLimits

0x7d98,	// (0x000443fb) bg_button_pane_cp010

0x7da6,	// (0x00044409) cell_vitu2_itu_pane_g1

0x7dcf,	// (0x00044432) cell_vitu2_itu_pane_t1_ParamLimits

0x7dcf,	// (0x00044432) cell_vitu2_itu_pane_t1

0x182a,	// (0x0003de8d) cell_vitu2_itu_pane_t2_ParamLimits

0x182a,	// (0x0003de8d) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004bf8f) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004bf8f) cell_vitu2_itu_pane_t

0xb56d,	// (0x00047bd0) bg_button_pane_cp011

0x7e1b,	// (0x0004447e) cell_vitu2_function_pane_g1

0xa6c7,	// (0x00046d2a) main_myfav_hc_pane

0x788c,	// (0x00043eef) popup_image3_note_pane_ParamLimits

0x788c,	// (0x00043eef) popup_image3_note_pane

0x789a,	// (0x00043efd) popup_image3_tool_bar_pane_ParamLimits

0x789a,	// (0x00043efd) popup_image3_tool_bar_pane

0x18a0,	// (0x0003df03) cell_vitu2_itu_pane_t3_ParamLimits

0x18a0,	// (0x0003df03) cell_vitu2_itu_pane_t3

0xa6c7,	// (0x00046d2a) bg_popup_trans_pane

0xdcb7,	// (0x0004a31a) grid_image3_tool_bar_pane

0xdcdd,	// (0x0004a340) bg_popup_trans_pane_g1

0xb229,	// (0x0004788c) bg_popup_trans_pane_g2

0xdce5,	// (0x0004a348) bg_popup_trans_pane_g3

0xdced,	// (0x0004a350) bg_popup_trans_pane_g4

0xdcf5,	// (0x0004a358) bg_popup_trans_pane_g5

0xdcfd,	// (0x0004a360) bg_popup_trans_pane_g6

0xdd05,	// (0x0004a368) bg_popup_trans_pane_g7

0xdd0d,	// (0x0004a370) bg_popup_trans_pane_g8

0xb209,	// (0x0004786c) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004bf96) bg_popup_trans_pane_g

0xdd15,	// (0x0004a378) cell_image3_tool_bar_pane_ParamLimits

0xdd15,	// (0x0004a378) cell_image3_tool_bar_pane

0xd252,	// (0x000498b5) cell_image3_tool_bar_pane_g1

0xa6c7,	// (0x00046d2a) bg_popup_trans_pane_cp1

0xdd29,	// (0x0004a38c) popup_image3_note_pane_t1

0xdd37,	// (0x0004a39a) popup_image3_note_pane_t2

0xdd45,	// (0x0004a3a8) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004bfa9) popup_image3_note_pane_t

0xdd53,	// (0x0004a3b6) popup_image3_note_pane_t3_copy1

0x7e2f,	// (0x00044492) bg_myfav_hc_instruction_pane_ParamLimits

0x7e2f,	// (0x00044492) bg_myfav_hc_instruction_pane

0x7e47,	// (0x000444aa) cell_myfav_contact_pane_ParamLimits

0x7e47,	// (0x000444aa) cell_myfav_contact_pane

0x7e61,	// (0x000444c4) cell_myfav_contact_pane_cp1_ParamLimits

0x7e61,	// (0x000444c4) cell_myfav_contact_pane_cp1

0x7e79,	// (0x000444dc) cell_myfav_contact_pane_cp2_ParamLimits

0x7e79,	// (0x000444dc) cell_myfav_contact_pane_cp2

0x7e91,	// (0x000444f4) cell_myfav_contact_pane_cp3_ParamLimits

0x7e91,	// (0x000444f4) cell_myfav_contact_pane_cp3

0x7ea8,	// (0x0004450b) cell_myfav_contact_pane_cp4_ParamLimits

0x7ea8,	// (0x0004450b) cell_myfav_contact_pane_cp4

0x7ebe,	// (0x00044521) cell_myfav_contact_pane_cp5_ParamLimits

0x7ebe,	// (0x00044521) cell_myfav_contact_pane_cp5

0x7ed2,	// (0x00044535) cell_myfav_contact_pane_cp6_ParamLimits

0x7ed2,	// (0x00044535) cell_myfav_contact_pane_cp6

0x7ee6,	// (0x00044549) cell_myfav_contact_pane_cp7_ParamLimits

0x7ee6,	// (0x00044549) cell_myfav_contact_pane_cp7

0xdd61,	// (0x0004a3c4) listscroll_gen_pane_cp05

0x7efe,	// (0x00044561) main_myfav_hc_pane_g1_ParamLimits

0x7efe,	// (0x00044561) main_myfav_hc_pane_g1

0x7f14,	// (0x00044577) main_myfav_hc_pane_g2_ParamLimits

0x7f14,	// (0x00044577) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004bfb0) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004bfb0) main_myfav_hc_pane_g

0x7f42,	// (0x000445a5) main_myfav_hc_pane_t1_ParamLimits

0x7f42,	// (0x000445a5) main_myfav_hc_pane_t1

0xdd6a,	// (0x0004a3cd) main_myfav_hc_pane_t2_ParamLimits

0xdd6a,	// (0x0004a3cd) main_myfav_hc_pane_t2

0xdd7c,	// (0x0004a3df) main_myfav_hc_pane_t3_ParamLimits

0xdd7c,	// (0x0004a3df) main_myfav_hc_pane_t3

0x7f59,	// (0x000445bc) main_myfav_hc_pane_t4_ParamLimits

0x7f59,	// (0x000445bc) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004bfb7) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004bfb7) main_myfav_hc_pane_t

0xd252,	// (0x000498b5) bg_myfav_hc_instruction_pane_g1

0xdd8e,	// (0x0004a3f1) cell_myfav_contact_pane_g1_ParamLimits

0xdd8e,	// (0x0004a3f1) cell_myfav_contact_pane_g1

0xdd8e,	// (0x0004a3f1) cell_myfav_contact_pane_g2_ParamLimits

0xdd8e,	// (0x0004a3f1) cell_myfav_contact_pane_g2

0xdd9a,	// (0x0004a3fd) cell_myfav_contact_pane_g3_ParamLimits

0xdd9a,	// (0x0004a3fd) cell_myfav_contact_pane_g3

0xd546,	// (0x00049ba9) cell_myfav_contact_pane_g4_ParamLimits

0xd546,	// (0x00049ba9) cell_myfav_contact_pane_g4

0xdda7,	// (0x0004a40a) cell_myfav_contact_pane_g5_ParamLimits

0xdda7,	// (0x0004a40a) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004bfc2) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004bfc2) cell_myfav_contact_pane_g

0x7f2a,	// (0x0004458d) main_myfav_hc_pane_g3_ParamLimits

0x7f2a,	// (0x0004458d) main_myfav_hc_pane_g3

0x29fd,	// (0x0003f060) popup_adpt_find_window

0x7f83,	// (0x000445e6) afind_page_pane_ParamLimits

0x7f83,	// (0x000445e6) afind_page_pane

0x7f90,	// (0x000445f3) aid_size_cell_afind_ParamLimits

0x7f90,	// (0x000445f3) aid_size_cell_afind

0x7faa,	// (0x0004460d) bg_popup_sub_pane_cp09_ParamLimits

0x7faa,	// (0x0004460d) bg_popup_sub_pane_cp09

0x7fb7,	// (0x0004461a) find_pane_cp01_ParamLimits

0x7fb7,	// (0x0004461a) find_pane_cp01

0xddb3,	// (0x0004a416) grid_afind_control_pane_ParamLimits

0xddb3,	// (0x0004a416) grid_afind_control_pane

0x7fc4,	// (0x00044627) grid_afind_pane_ParamLimits

0x7fc4,	// (0x00044627) grid_afind_pane

0x7fe0,	// (0x00044643) cell_afind_pane_ParamLimits

0x7fe0,	// (0x00044643) cell_afind_pane

0xd252,	// (0x000498b5) afind_page_pane_g1

0x8028,	// (0x0004468b) afind_page_pane_g2

0x8031,	// (0x00044694) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004bfcd) afind_page_pane_g

0x803a,	// (0x0004469d) afind_page_pane_t1

0xddc7,	// (0x0004a42a) cell_afind_grid_control_pane_ParamLimits

0xddc7,	// (0x0004a42a) cell_afind_grid_control_pane

0xdb81,	// (0x0004a1e4) bg_button_pane_cp69_ParamLimits

0xdb81,	// (0x0004a1e4) bg_button_pane_cp69

0x805a,	// (0x000446bd) cell_afind_pane_g1_ParamLimits

0x805a,	// (0x000446bd) cell_afind_pane_g1

0x8067,	// (0x000446ca) cell_afind_pane_t1_ParamLimits

0x8067,	// (0x000446ca) cell_afind_pane_t1

0xb022,	// (0x00047685) bg_button_pane_cp72

0xddd6,	// (0x0004a439) cell_afind_grid_control_pane_g1

0x56bb,	// (0x00041d1e) aid_image_placing_area_ParamLimits

0x56bb,	// (0x00041d1e) aid_image_placing_area

0xd84f,	// (0x00049eb2) field_vitu_entry_pane_g1_ParamLimits

0xd84f,	// (0x00049eb2) field_vitu_entry_pane_g1

0xd85b,	// (0x00049ebe) field_vitu_entry_pane_g2_ParamLimits

0xd85b,	// (0x00049ebe) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0004be7e) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0004be7e) field_vitu_entry_pane_g

0x71e9,	// (0x0004384c) cell_vitu_itu_pane_g1_ParamLimits

0x722b,	// (0x0004388e) cell_vitu_itu_pane_t3_ParamLimits

0x722b,	// (0x0004388e) cell_vitu_itu_pane_t3

0xdb31,	// (0x0004a194) mp4_progress_pane_t1_ParamLimits

0xdb4a,	// (0x0004a1ad) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004bf13) mp4_progress_pane_t_ParamLimits

0xdb63,	// (0x0004a1c6) mup_progress_pane_cp04_ParamLimits

0x7f6d,	// (0x000445d0) main_myfav_hc_pane_t5_ParamLimits

0x7f6d,	// (0x000445d0) main_myfav_hc_pane_t5

0x288b,	// (0x0003eeee) aid_zoom_text_primary

0x29fd,	// (0x0003f060) popup_adpt_find_window_ParamLimits

0xb56d,	// (0x00047bd0) main_cam_set_pane

0x79f6,	// (0x00044059) cam4_zoom_pane_ParamLimits

0x79f6,	// (0x00044059) cam4_zoom_pane

0x8079,	// (0x000446dc) main_cam_set_pane_g1_ParamLimits

0x8079,	// (0x000446dc) main_cam_set_pane_g1

0x8087,	// (0x000446ea) main_cam_set_pane_g2_ParamLimits

0x8087,	// (0x000446ea) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004bfd4) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004bfd4) main_cam_set_pane_g

0x8093,	// (0x000446f6) main_cam_set_pane_t1_ParamLimits

0x8093,	// (0x000446f6) main_cam_set_pane_t1

0x80af,	// (0x00044712) main_cset_listscroll_pane_ParamLimits

0x80af,	// (0x00044712) main_cset_listscroll_pane

0x80da,	// (0x0004473d) main_cset_slider_pane_ParamLimits

0x80da,	// (0x0004473d) main_cset_slider_pane

0xdde7,	// (0x0004a44a) main_cset_list_pane_ParamLimits

0xdde7,	// (0x0004a44a) main_cset_list_pane

0xddf7,	// (0x0004a45a) scroll_pane_cp028

0x80f9,	// (0x0004475c) aid_area_touch_slider

0x8115,	// (0x00044778) cset_slider_pane

0x813f,	// (0x000447a2) main_cset_slider_pane_g1

0x8154,	// (0x000447b7) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004bfd9) main_cset_slider_pane_g

0xde30,	// (0x0004a493) main_cset_slider_pane_t1

0x8216,	// (0x00044879) main_cset_slider_pane_t2

0x8230,	// (0x00044893) main_cset_slider_pane_t3

0x824a,	// (0x000448ad) main_cset_slider_pane_t4

0x8264,	// (0x000448c7) main_cset_slider_pane_t5

0x8282,	// (0x000448e5) main_cset_slider_pane_t6

0x8299,	// (0x000448fc) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004bffe) main_cset_slider_pane_t

0x83a5,	// (0x00044a08) cset_list_set_pane_ParamLimits

0x83a5,	// (0x00044a08) cset_list_set_pane

0x83bb,	// (0x00044a1e) aid_position_infowindow_above

0x83c3,	// (0x00044a26) aid_position_infowindow_below

0x18ed,	// (0x0003df50) cset_list_set_pane_g1_ParamLimits

0x18ed,	// (0x0003df50) cset_list_set_pane_g1

0x18f9,	// (0x0003df5c) cset_list_set_pane_g3_ParamLimits

0x18f9,	// (0x0003df5c) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004c01d) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004c01d) cset_list_set_pane_g

0x1908,	// (0x0003df6b) cset_list_set_pane_t1_ParamLimits

0x1908,	// (0x0003df6b) cset_list_set_pane_t1

0xb56d,	// (0x00047bd0) list_highlight_pane_cp021_ParamLimits

0xb56d,	// (0x00047bd0) list_highlight_pane_cp021

0xbb88,	// (0x000481eb) cset_slider_pane_g1

0xbb9a,	// (0x000481fd) cset_slider_pane_g2

0xbb91,	// (0x000481f4) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004c022) cset_slider_pane_g

0x83cb,	// (0x00044a2e) aid_area_touch_cam4_zoom

0x83d3,	// (0x00044a36) cam4_zoom_cont_pane

0x83db,	// (0x00044a3e) cam4_zoom_pane_g1

0x83e3,	// (0x00044a46) cam4_zoom_pane_g2

0x83eb,	// (0x00044a4e) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004c029) cam4_zoom_pane_g

0xded0,	// (0x0004a533) cam4_zoom_cont_pane_g1

0xded9,	// (0x0004a53c) cam4_zoom_cont_pane_g2

0xdee2,	// (0x0004a545) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004c030) cam4_zoom_cont_pane_g

0x78e3,	// (0x00043f46) call4_image_pane_ParamLimits

0x78e3,	// (0x00043f46) call4_image_pane

0xdb8d,	// (0x0004a1f0) call4_windows_conf_pane_ParamLimits

0xdbce,	// (0x0004a231) popup_call4_audio_in_window_ParamLimits

0xdbce,	// (0x0004a231) popup_call4_audio_in_window

0xa6c7,	// (0x00046d2a) bg_popup_call2_act_pane_cp02

0xdc44,	// (0x0004a2a7) call4_list_conf_pane

0xd252,	// (0x000498b5) call4_image_pane_g1

0xd252,	// (0x000498b5) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0004bd44) call4_image_pane_g

0xdeeb,	// (0x0004a54e) list_single_graphic_popup_conf4_pane_ParamLimits

0xdeeb,	// (0x0004a54e) list_single_graphic_popup_conf4_pane

0xa6c7,	// (0x00046d2a) list_highlight_pane_cp022

0xdefe,	// (0x0004a561) list_single_graphic_popup_conf4_pane_g1

0xb751,	// (0x00047db4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004c037) list_single_graphic_popup_conf4_pane_g

0xdf06,	// (0x0004a569) list_single_graphic_popup_conf4_pane_t1

0x3a8a,	// (0x000400ed) popup_vtel_slider_window_ParamLimits

0x3a8a,	// (0x000400ed) popup_vtel_slider_window

0xdb6f,	// (0x0004a1d2) dialer2_ne_pane_t2_ParamLimits

0xdb6f,	// (0x0004a1d2) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004bf18) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004bf18) dialer2_ne_pane_t

0xb56d,	// (0x00047bd0) bg_popup_sub_pane_cp010_ParamLimits

0xb56d,	// (0x00047bd0) bg_popup_sub_pane_cp010

0x83f3,	// (0x00044a56) popup_vtel_slider_window_g1_ParamLimits

0x83f3,	// (0x00044a56) popup_vtel_slider_window_g1

0x83ff,	// (0x00044a62) popup_vtel_slider_window_g2_ParamLimits

0x83ff,	// (0x00044a62) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004c03c) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004c03c) popup_vtel_slider_window_g

0x8447,	// (0x00044aaa) vtel_slider_pane_ParamLimits

0x8447,	// (0x00044aaa) vtel_slider_pane

0x8456,	// (0x00044ab9) vtel_slider_pane_g1_ParamLimits

0x8456,	// (0x00044ab9) vtel_slider_pane_g1

0x8463,	// (0x00044ac6) vtel_slider_pane_g2_ParamLimits

0x8463,	// (0x00044ac6) vtel_slider_pane_g2

0x8470,	// (0x00044ad3) vtel_slider_pane_g3_ParamLimits

0x8470,	// (0x00044ad3) vtel_slider_pane_g3

0x8456,	// (0x00044ab9) vtel_slider_pane_g4_ParamLimits

0x8456,	// (0x00044ab9) vtel_slider_pane_g4

0x847d,	// (0x00044ae0) vtel_slider_pane_g5_ParamLimits

0x847d,	// (0x00044ae0) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004c045) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004c045) vtel_slider_pane_g

0xb56d,	// (0x00047bd0) main_gallery2_pane

0x7c4a,	// (0x000442ad) aid_size_row_itut2_dropdow_list_ParamLimits

0x7c4a,	// (0x000442ad) aid_size_row_itut2_dropdow_list

0x7caa,	// (0x0004430d) grid_vitu2_function_top_pane_ParamLimits

0x7caa,	// (0x0004430d) grid_vitu2_function_top_pane

0x7d00,	// (0x00044363) popup_vitu2_dropdown_list_window_ParamLimits

0x7d00,	// (0x00044363) popup_vitu2_dropdown_list_window

0x7d20,	// (0x00044383) popup_vitu2_match_list_window

0x848a,	// (0x00044aed) cell_vitu2_function_top_pane_ParamLimits

0x848a,	// (0x00044aed) cell_vitu2_function_top_pane

0x84aa,	// (0x00044b0d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x84aa,	// (0x00044b0d) cell_vitu2_function_top_pane_cp01

0x84c8,	// (0x00044b2b) cell_vitu2_function_top_wide_pane_ParamLimits

0x84c8,	// (0x00044b2b) cell_vitu2_function_top_wide_pane

0xb56d,	// (0x00047bd0) bg_button_pane_cp012

0x84e6,	// (0x00044b49) cell_vitu2_function_top_pane_g1

0x84fa,	// (0x00044b5d) bg_button_pane_cp013_ParamLimits

0x84fa,	// (0x00044b5d) bg_button_pane_cp013

0x8516,	// (0x00044b79) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8516,	// (0x00044b79) cell_vitu2_function_top_wide_pane_g1

0xdcc1,	// (0x0004a324) bg_popup_sub_pane_cp20

0x852e,	// (0x00044b91) list_vitu2_match_list_pane

0xdcdd,	// (0x0004a340) bg_popup_sub_pane_cp20_g1

0xdce5,	// (0x0004a348) bg_popup_sub_pane_cp20_g2

0xb229,	// (0x0004788c) bg_popup_sub_pane_cp20_g3

0xdced,	// (0x0004a350) bg_popup_sub_pane_cp20_g4

0xb209,	// (0x0004786c) bg_popup_sub_pane_cp20_g5

0xdf1c,	// (0x0004a57f) bg_popup_sub_pane_cp20_g6

0xdcfd,	// (0x0004a360) bg_popup_sub_pane_cp20_g7

0xdd05,	// (0x0004a368) bg_popup_sub_pane_cp20_g8

0xdd0d,	// (0x0004a370) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004c050) bg_popup_sub_pane_cp20_g

0x8546,	// (0x00044ba9) list_vitu2_match_list_item_pane_ParamLimits

0x8546,	// (0x00044ba9) list_vitu2_match_list_item_pane

0x8558,	// (0x00044bbb) list_vitu2_match_list_item_pane_t1

0xa6c7,	// (0x00046d2a) bg_popup_sub_pane_cp21

0xb679,	// (0x00047cdc) grid_vitu2_dropdown_list_pane

0x8566,	// (0x00044bc9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8566,	// (0x00044bc9) cell_vitu2_dropdown_list_char_pane

0x8587,	// (0x00044bea) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8587,	// (0x00044bea) cell_vitu2_dropdown_list_ctrl_pane

0xdf24,	// (0x0004a587) cell_vitu2_dropdown_list_char_pane_g1

0xdf2d,	// (0x0004a590) cell_vitu2_dropdown_list_char_pane_g2

0xdf36,	// (0x0004a599) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0004c06d) cell_vitu2_dropdown_list_char_pane_g

0x85b3,	// (0x00044c16) cell_vitu2_dropdown_list_char_pane_t1

0x85c1,	// (0x00044c24) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x85c1,	// (0x00044c24) cell_vitu2_dropdown_list_ctrl_pane_g1

0x85ce,	// (0x00044c31) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x85ce,	// (0x00044c31) cell_vitu2_dropdown_list_ctrl_pane_g2

0x85db,	// (0x00044c3e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x85db,	// (0x00044c3e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x85e8,	// (0x00044c4b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x85e8,	// (0x00044c4b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd4b5,	// (0x00049b18) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd4b5,	// (0x00049b18) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004c074) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004c074) cell_vitu2_dropdown_list_ctrl_pane_g

0x8604,	// (0x00044c67) aid_size_cell_gallery2_ParamLimits

0x8604,	// (0x00044c67) aid_size_cell_gallery2

0x861e,	// (0x00044c81) grid_gallery2_pane_ParamLimits

0x861e,	// (0x00044c81) grid_gallery2_pane

0x7072,	// (0x000436d5) scroll_pane_cp029_ParamLimits

0x7072,	// (0x000436d5) scroll_pane_cp029

0x8635,	// (0x00044c98) cell_gallery2_pane_ParamLimits

0x8635,	// (0x00044c98) cell_gallery2_pane

0xdf3f,	// (0x0004a5a2) cell_gallery2_pane_g2

0xefc7,	// (0x0004b62a) cell_gallery2_pane_g3

0xdf47,	// (0x0004a5aa) cell_gallery2_pane_g4

0xdf4f,	// (0x0004a5b2) cell_gallery2_pane_g5

0xba52,	// (0x000480b5) grid_highlight_pane_cp10

0x7d20,	// (0x00044383) popup_vitu2_match_list_window_ParamLimits

0x7d34,	// (0x00044397) popup_vitu2_query_window_ParamLimits

0x7d34,	// (0x00044397) popup_vitu2_query_window

0xa6c7,	// (0x00046d2a) bg_vitu2_candi_button_pane

0xdf24,	// (0x0004a587) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdf2d,	// (0x0004a590) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdf36,	// (0x0004a599) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x196f,	// (0x0003dfd2) bg_button_pane_cp015

0x8686,	// (0x00044ce9) bg_button_pane_cp016

0x8699,	// (0x00044cfc) bg_button_pane_cp017

0xce41,	// (0x000494a4) bg_popup_sub_pane_cp22

0xdf57,	// (0x0004a5ba) popup_vitu2_query_window_g1

0x19a2,	// (0x0003e005) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0004c07f) popup_vitu2_query_window_g

0x19bf,	// (0x0003e022) popup_vitu2_query_window_t1_ParamLimits

0x19bf,	// (0x0003e022) popup_vitu2_query_window_t1

0x19f2,	// (0x0003e055) popup_vitu2_query_window_t2_ParamLimits

0x19f2,	// (0x0003e055) popup_vitu2_query_window_t2

0x1a04,	// (0x0003e067) popup_vitu2_query_window_t3_ParamLimits

0x1a04,	// (0x0003e067) popup_vitu2_query_window_t3

0x86bd,	// (0x00044d20) popup_vitu2_query_window_t4_ParamLimits

0x86bd,	// (0x00044d20) popup_vitu2_query_window_t4

0x86de,	// (0x00044d41) popup_vitu2_query_window_t5_ParamLimits

0x86de,	// (0x00044d41) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0004c086) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0004c086) popup_vitu2_query_window_t

0xdddf,	// (0x0004a442) main_cset_text_pane

0x80f9,	// (0x0004475c) aid_area_touch_slider_ParamLimits

0x8115,	// (0x00044778) cset_slider_pane_ParamLimits

0x813f,	// (0x000447a2) main_cset_slider_pane_g1_ParamLimits

0x8154,	// (0x000447b7) main_cset_slider_pane_g2_ParamLimits

0xde00,	// (0x0004a463) main_cset_slider_pane_g3_ParamLimits

0xde00,	// (0x0004a463) main_cset_slider_pane_g3

0x8169,	// (0x000447cc) main_cset_slider_pane_g4_ParamLimits

0x8169,	// (0x000447cc) main_cset_slider_pane_g4

0x8178,	// (0x000447db) main_cset_slider_pane_g5_ParamLimits

0x8178,	// (0x000447db) main_cset_slider_pane_g5

0x8186,	// (0x000447e9) main_cset_slider_pane_g6_ParamLimits

0x8186,	// (0x000447e9) main_cset_slider_pane_g6

0xf976,	// (0x0004bfd9) main_cset_slider_pane_g_ParamLimits

0xde30,	// (0x0004a493) main_cset_slider_pane_t1_ParamLimits

0x8216,	// (0x00044879) main_cset_slider_pane_t2_ParamLimits

0x8230,	// (0x00044893) main_cset_slider_pane_t3_ParamLimits

0x824a,	// (0x000448ad) main_cset_slider_pane_t4_ParamLimits

0x8264,	// (0x000448c7) main_cset_slider_pane_t5_ParamLimits

0x8282,	// (0x000448e5) main_cset_slider_pane_t6_ParamLimits

0x8299,	// (0x000448fc) main_cset_slider_pane_t7_ParamLimits

0x82c7,	// (0x0004492a) main_cset_slider_pane_t8_ParamLimits

0x82c7,	// (0x0004492a) main_cset_slider_pane_t8

0x82ef,	// (0x00044952) main_cset_slider_pane_t9_ParamLimits

0x82ef,	// (0x00044952) main_cset_slider_pane_t9

0x8317,	// (0x0004497a) main_cset_slider_pane_t10_ParamLimits

0x8317,	// (0x0004497a) main_cset_slider_pane_t10

0x833f,	// (0x000449a2) main_cset_slider_pane_t11_ParamLimits

0x833f,	// (0x000449a2) main_cset_slider_pane_t11

0x8369,	// (0x000449cc) main_cset_slider_pane_t12_ParamLimits

0x8369,	// (0x000449cc) main_cset_slider_pane_t12

0x8386,	// (0x000449e9) main_cset_slider_pane_t13_ParamLimits

0x8386,	// (0x000449e9) main_cset_slider_pane_t13

0xf99b,	// (0x0004bffe) main_cset_slider_pane_t_ParamLimits

0xa6c7,	// (0x00046d2a) bg_popup_sub_pane_cp011

0xdf63,	// (0x0004a5c6) main_cset_text_pane_g1

0xdf6b,	// (0x0004a5ce) main_cset_text_pane_t1

0xdf79,	// (0x0004a5dc) main_cset_text_pane_t2

0xdf87,	// (0x0004a5ea) main_cset_text_pane_t3

0xdf95,	// (0x0004a5f8) main_cset_text_pane_t4

0xdfa3,	// (0x0004a606) main_cset_text_pane_t5

0xdfb1,	// (0x0004a614) main_cset_text_pane_t6

0xdfbf,	// (0x0004a622) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004c095) main_cset_text_pane_t

0xa6c7,	// (0x00046d2a) main_cam4_burst_pane

0xa6c7,	// (0x00046d2a) main_cam5_pane

0x8048,	// (0x000446ab) bg_button_pane_cp019

0x8051,	// (0x000446b4) bg_button_pane_cp020

0xde0c,	// (0x0004a46f) main_cset_slider_pane_g7_ParamLimits

0xde0c,	// (0x0004a46f) main_cset_slider_pane_g7

0xde18,	// (0x0004a47b) main_cset_slider_pane_g8_ParamLimits

0xde18,	// (0x0004a47b) main_cset_slider_pane_g8

0x819a,	// (0x000447fd) main_cset_slider_pane_g9_ParamLimits

0x819a,	// (0x000447fd) main_cset_slider_pane_g9

0x81a6,	// (0x00044809) main_cset_slider_pane_g10_ParamLimits

0x81a6,	// (0x00044809) main_cset_slider_pane_g10

0x81b2,	// (0x00044815) main_cset_slider_pane_g11_ParamLimits

0x81b2,	// (0x00044815) main_cset_slider_pane_g11

0x81be,	// (0x00044821) main_cset_slider_pane_g12_ParamLimits

0x81be,	// (0x00044821) main_cset_slider_pane_g12

0x81ca,	// (0x0004482d) main_cset_slider_pane_g13_ParamLimits

0x81ca,	// (0x0004482d) main_cset_slider_pane_g13

0x81d6,	// (0x00044839) main_cset_slider_pane_g14_ParamLimits

0x81d6,	// (0x00044839) main_cset_slider_pane_g14

0x81e2,	// (0x00044845) main_cset_slider_pane_g15_ParamLimits

0x81e2,	// (0x00044845) main_cset_slider_pane_g15

0xde5e,	// (0x0004a4c1) main_cset_slider_pane_t14_ParamLimits

0xde5e,	// (0x0004a4c1) main_cset_slider_pane_t14

0xde97,	// (0x0004a4fa) main_cset_slider_pane_t15_ParamLimits

0xde97,	// (0x0004a4fa) main_cset_slider_pane_t15

0x86ff,	// (0x00044d62) aid_cam4_burst_size_cell_ParamLimits

0x86ff,	// (0x00044d62) aid_cam4_burst_size_cell

0x871b,	// (0x00044d7e) grid_cam4_burst_pane_ParamLimits

0x871b,	// (0x00044d7e) grid_cam4_burst_pane

0x874b,	// (0x00044dae) linegrid_cam4_burst_pane_ParamLimits

0x874b,	// (0x00044dae) linegrid_cam4_burst_pane

0x876b,	// (0x00044dce) scroll_pane_cp30_ParamLimits

0x876b,	// (0x00044dce) scroll_pane_cp30

0x8777,	// (0x00044dda) cell_cam4_burst_pane_ParamLimits

0x8777,	// (0x00044dda) cell_cam4_burst_pane

0xdfcd,	// (0x0004a630) linegrid_cam4_burst_pane_g1_ParamLimits

0xdfcd,	// (0x0004a630) linegrid_cam4_burst_pane_g1

0x87b3,	// (0x00044e16) linegrid_cam4_burst_pane_g2_ParamLimits

0x87b3,	// (0x00044e16) linegrid_cam4_burst_pane_g2

0xdfda,	// (0x0004a63d) linegrid_cam4_burst_pane_g3_ParamLimits

0xdfda,	// (0x0004a63d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004c0a4) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004c0a4) linegrid_cam4_burst_pane_g

0x87c4,	// (0x00044e27) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x87c4,	// (0x00044e27) linegrid_cam4_burst_pane_g3_copy1

0xdfe7,	// (0x0004a64a) linegrid_cam4_burst_pane_g4_ParamLimits

0xdfe7,	// (0x0004a64a) linegrid_cam4_burst_pane_g4

0x87de,	// (0x00044e41) linegrid_cam4_burst_pane_g5_ParamLimits

0x87de,	// (0x00044e41) linegrid_cam4_burst_pane_g5

0x87ef,	// (0x00044e52) linegrid_cam4_burst_pane_g6_ParamLimits

0x87ef,	// (0x00044e52) linegrid_cam4_burst_pane_g6

0xdff4,	// (0x0004a657) linegrid_cam4_burst_pane_g7_ParamLimits

0xdff4,	// (0x0004a657) linegrid_cam4_burst_pane_g7

0x8800,	// (0x00044e63) cell_cam4_burst_pane_g1

0xe00d,	// (0x0004a670) main_cam5_pane_t1_ParamLimits

0xe00d,	// (0x0004a670) main_cam5_pane_t1

0xe03d,	// (0x0004a6a0) main_cam5_pane_t2_ParamLimits

0xe03d,	// (0x0004a6a0) main_cam5_pane_t2

0xe04f,	// (0x0004a6b2) main_cam5_pane_t3_ParamLimits

0xe04f,	// (0x0004a6b2) main_cam5_pane_t3

0xe061,	// (0x0004a6c4) main_cam5_pane_t4_ParamLimits

0xe061,	// (0x0004a6c4) main_cam5_pane_t4

0xe079,	// (0x0004a6dc) main_cam5_pane_t5_ParamLimits

0xe079,	// (0x0004a6dc) main_cam5_pane_t5

0xe08d,	// (0x0004a6f0) main_cam5_pane_t6_ParamLimits

0xe08d,	// (0x0004a6f0) main_cam5_pane_t6

0xe0a1,	// (0x0004a704) main_cam5_pane_t7_ParamLimits

0xe0a1,	// (0x0004a704) main_cam5_pane_t7

0xe0b3,	// (0x0004a716) main_cam5_pane_t8_ParamLimits

0xe0b3,	// (0x0004a716) main_cam5_pane_t8

0xe0cf,	// (0x0004a732) main_cam5_pane_t9_ParamLimits

0xe0cf,	// (0x0004a732) main_cam5_pane_t9

0xe0e1,	// (0x0004a744) main_cam5_pane_t10_ParamLimits

0xe0e1,	// (0x0004a744) main_cam5_pane_t10

0xe0f3,	// (0x0004a756) main_cam5_pane_t11_ParamLimits

0xe0f3,	// (0x0004a756) main_cam5_pane_t11

0xe105,	// (0x0004a768) main_cam5_pane_t12_ParamLimits

0xe105,	// (0x0004a768) main_cam5_pane_t12

0xe11a,	// (0x0004a77d) main_cam5_pane_t13_ParamLimits

0xe11a,	// (0x0004a77d) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0004c0b0) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0004c0b0) main_cam5_pane_t

0x2ab3,	// (0x0003f116) popup_scut_keymap_window_ParamLimits

0x2ab3,	// (0x0003f116) popup_scut_keymap_window

0x8813,	// (0x00044e76) aid_size_cell_brow_shortcut

0xba52,	// (0x000480b5) bg_popup_window_pane_cp010

0x881f,	// (0x00044e82) grid_scut_pane

0x882b,	// (0x00044e8e) cell_scut_pane_ParamLimits

0x882b,	// (0x00044e8e) cell_scut_pane

0x8842,	// (0x00044ea5) cell_scut_pane_g1

0xe137,	// (0x0004a79a) cell_scut_pane_t1

0xe146,	// (0x0004a7a9) cell_scut_pane_t2

0x884b,	// (0x00044eae) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0004c0cb) cell_scut_pane_t

0x6853,	// (0x00042eb6) main_mup3_pane_g8_ParamLimits

0x6853,	// (0x00042eb6) main_mup3_pane_g8

0x7c58,	// (0x000442bb) area_vitu2_query_pane_ParamLimits

0x7c58,	// (0x000442bb) area_vitu2_query_pane

0x1981,	// (0x0003dfe4) input_focus_pane_cp08

0xe155,	// (0x0004a7b8) area_vitu2_query_pane_g1

0x1a82,	// (0x0003e0e5) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0004c0d2) area_vitu2_query_pane_g

0x8859,	// (0x00044ebc) area_vitu2_query_pane_t1_ParamLimits

0x8859,	// (0x00044ebc) area_vitu2_query_pane_t1

0x886d,	// (0x00044ed0) area_vitu2_query_pane_t2_ParamLimits

0x886d,	// (0x00044ed0) area_vitu2_query_pane_t2

0x1a93,	// (0x0003e0f6) area_vitu2_query_pane_t3_ParamLimits

0x1a93,	// (0x0003e0f6) area_vitu2_query_pane_t3

0x1abb,	// (0x0003e11e) area_vitu2_query_pane_t4_ParamLimits

0x1abb,	// (0x0003e11e) area_vitu2_query_pane_t4

0x1ae3,	// (0x0003e146) area_vitu2_query_pane_t5_ParamLimits

0x1ae3,	// (0x0003e146) area_vitu2_query_pane_t5

0x1b0b,	// (0x0003e16e) area_vitu2_query_pane_t6_ParamLimits

0x1b0b,	// (0x0003e16e) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0004c0d7) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0004c0d7) area_vitu2_query_pane_t

0x8881,	// (0x00044ee4) bg_button_pane_cp018

0x888f,	// (0x00044ef2) bg_button_pane_cp021

0x1b57,	// (0x0003e1ba) bg_button_pane_cp022

0x1b68,	// (0x0003e1cb) input_focus_pane_cp09

0xb88d,	// (0x00047ef0) aid_size_touch_mv_arrow_left

0xb8b6,	// (0x00047f19) aid_size_touch_mv_arrow_right

0x81fa,	// (0x0004485d) main_cset_slider_pane_g16_ParamLimits

0x81fa,	// (0x0004485d) main_cset_slider_pane_g16

0x8208,	// (0x0004486b) main_cset_slider_pane_g17_ParamLimits

0x8208,	// (0x0004486b) main_cset_slider_pane_g17

0x8800,	// (0x00044e63) cell_cam4_burst_pane_g1_ParamLimits

0xa6c7,	// (0x00046d2a) compa_mode_pane

0x840b,	// (0x00044a6e) popup_vtel_slider_window_g3_ParamLimits

0x840b,	// (0x00044a6e) popup_vtel_slider_window_g3

0x841f,	// (0x00044a82) popup_vtel_slider_window_g4_ParamLimits

0x841f,	// (0x00044a82) popup_vtel_slider_window_g4

0x8433,	// (0x00044a96) popup_vtel_slider_window_t1_ParamLimits

0x8433,	// (0x00044a96) popup_vtel_slider_window_t1

0xa6c7,	// (0x00046d2a) main_cl_pane

0x5bcd,	// (0x00042230) popup_imed_adjust2_window_ParamLimits

0xce41,	// (0x000494a4) bg_tb_trans_pane_cp05_ParamLimits

0xd784,	// (0x00049de7) popup_imed_adjust2_window_g1_ParamLimits

0xd793,	// (0x00049df6) popup_imed_adjust2_window_g2_ParamLimits

0xd793,	// (0x00049df6) popup_imed_adjust2_window_g2

0xd79f,	// (0x00049e02) popup_imed_adjust2_window_g3_ParamLimits

0xd79f,	// (0x00049e02) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0004be42) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0004be42) popup_imed_adjust2_window_g

0xd7ab,	// (0x00049e0e) popup_imed_adjust2_window_t1_ParamLimits

0xd7c3,	// (0x00049e26) slider_imed_adjust_pane_ParamLimits

0xd7d7,	// (0x00049e3a) slider_imed_adjust_pane_g1_ParamLimits

0xd7e7,	// (0x00049e4a) slider_imed_adjust_pane_g2_ParamLimits

0xd7f7,	// (0x00049e5a) slider_imed_adjust_pane_g3_ParamLimits

0xd808,	// (0x00049e6b) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0004be49) slider_imed_adjust_pane_g_ParamLimits

0x799f,	// (0x00044002) aid_touch_area_cam4_ParamLimits

0x799f,	// (0x00044002) aid_touch_area_cam4

0x79af,	// (0x00044012) battery_pane_cp01

0x7a36,	// (0x00044099) main_camera4_pane_g6_ParamLimits

0x7a36,	// (0x00044099) main_camera4_pane_g6

0x7a54,	// (0x000440b7) main_camera4_pane_t2_ParamLimits

0x7a54,	// (0x000440b7) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004bf4c) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004bf4c) main_camera4_pane_t

0x7adb,	// (0x0004413e) aid_touch_area_vid4_ParamLimits

0x7adb,	// (0x0004413e) aid_touch_area_vid4

0x7b1b,	// (0x0004417e) main_video4_pane_g5_ParamLimits

0x7b1b,	// (0x0004417e) main_video4_pane_g5

0x7b3f,	// (0x000441a2) vid4_progress_pane_ParamLimits

0x7b3f,	// (0x000441a2) vid4_progress_pane

0xde24,	// (0x0004a487) main_cset_slider_pane_g18_ParamLimits

0xde24,	// (0x0004a487) main_cset_slider_pane_g18

0xe001,	// (0x0004a664) cell_cam4_burst_pane_g2_ParamLimits

0xe001,	// (0x0004a664) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0004c0ab) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0004c0ab) cell_cam4_burst_pane_g

0x889b,	// (0x00044efe) bg_cl_pane_ParamLimits

0x889b,	// (0x00044efe) bg_cl_pane

0x88a7,	// (0x00044f0a) cl_header_pane_ParamLimits

0x88a7,	// (0x00044f0a) cl_header_pane

0x88b3,	// (0x00044f16) cl_listscroll_pane_ParamLimits

0x88b3,	// (0x00044f16) cl_listscroll_pane

0xe161,	// (0x0004a7c4) bg_cl_pane_g1

0xe169,	// (0x0004a7cc) bg_cl_pane_g2

0xe171,	// (0x0004a7d4) bg_cl_pane_g3

0xe179,	// (0x0004a7dc) bg_cl_pane_g4

0xe181,	// (0x0004a7e4) bg_cl_pane_g5

0xe189,	// (0x0004a7ec) bg_cl_pane_g6

0xe191,	// (0x0004a7f4) bg_cl_pane_g7

0xe199,	// (0x0004a7fc) bg_cl_pane_g8

0xe1a1,	// (0x0004a804) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0004c0e6) bg_cl_pane_g

0x88bf,	// (0x00044f22) aid_height_cl_leading_ParamLimits

0x88bf,	// (0x00044f22) aid_height_cl_leading

0x88cb,	// (0x00044f2e) aid_height_cl_text_ParamLimits

0x88cb,	// (0x00044f2e) aid_height_cl_text

0xdcc1,	// (0x0004a324) bg_cl_header_pane_ParamLimits

0xdcc1,	// (0x0004a324) bg_cl_header_pane

0x88e3,	// (0x00044f46) cl_header_pane_g1_ParamLimits

0x88e3,	// (0x00044f46) cl_header_pane_g1

0x88f0,	// (0x00044f53) cl_header_pane_t1_ParamLimits

0x88f0,	// (0x00044f53) cl_header_pane_t1

0xe1a9,	// (0x0004a80c) cl_list_pane

0xddf7,	// (0x0004a45a) hc_scroll_pane_cp01

0xb209,	// (0x0004786c) bg_cl_header_pane_g1

0xdcdd,	// (0x0004a340) bg_cl_header_pane_g2

0xb229,	// (0x0004788c) bg_cl_header_pane_g3

0xdced,	// (0x0004a350) bg_cl_header_pane_g4

0xdce5,	// (0x0004a348) bg_cl_header_pane_g5

0xdf1c,	// (0x0004a57f) bg_cl_header_pane_g6

0xdd05,	// (0x0004a368) bg_cl_header_pane_g7

0xdd0d,	// (0x0004a370) bg_cl_header_pane_g8

0xdcfd,	// (0x0004a360) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0004c0f9) bg_cl_header_pane_g

0x8902,	// (0x00044f65) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8902,	// (0x00044f65) hc_cl_list_double_graphic_heading_pane

0x8913,	// (0x00044f76) hc_cl_list_single_graphic_pane_ParamLimits

0x8913,	// (0x00044f76) hc_cl_list_single_graphic_pane

0x892c,	// (0x00044f8f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x892c,	// (0x00044f8f) hc_cl_list_single_graphic_pane_g1

0x8938,	// (0x00044f9b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8938,	// (0x00044f9b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0004c10c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0004c10c) hc_cl_list_single_graphic_pane_g

0x894c,	// (0x00044faf) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x894c,	// (0x00044faf) hc_cl_list_single_graphic_pane_t1

0x892c,	// (0x00044f8f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x892c,	// (0x00044f8f) hc_cl_list_double_graphic_heading_pane_g1

0x8961,	// (0x00044fc4) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8961,	// (0x00044fc4) hc_cl_list_double_graphic_heading_pane_g2

0x8975,	// (0x00044fd8) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8975,	// (0x00044fd8) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004c111) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004c111) hc_cl_list_double_graphic_heading_pane_g

0x8989,	// (0x00044fec) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8989,	// (0x00044fec) hc_cl_list_double_graphic_heading_pane_t1

0x899e,	// (0x00045001) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x899e,	// (0x00045001) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0004c118) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0004c118) hc_cl_list_double_graphic_heading_pane_t

0x89bb,	// (0x0004501e) vid4_progress_pane_g1

0x89cd,	// (0x00045030) vid4_progress_pane_g2

0x540d,	// (0x00041a70) vid4_progress_pane_g3

0x89dd,	// (0x00045040) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0004c11d) vid4_progress_pane_g

0x89fb,	// (0x0004505e) vid4_progress_pane_t1

0x8a10,	// (0x00045073) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0004c128) vid4_progress_pane_t

0x8a3b,	// (0x0004509e) wait_bar_pane_cp07

0xd03c,	// (0x0004969f) blid_firmament_pane_ParamLimits

0xd07f,	// (0x000496e2) popup_blid_sat_info2_window_g1

0xd0a3,	// (0x00049706) popup_blid_sat_info2_window_t3

0xd0b1,	// (0x00049714) popup_blid_sat_info2_window_t4

0xd0bf,	// (0x00049722) popup_blid_sat_info2_window_t5

0xd0cd,	// (0x00049730) popup_blid_sat_info2_window_t6

0xd0dd,	// (0x00049740) popup_blid_sat_info2_window_t7

0xd0eb,	// (0x0004974e) popup_blid_sat_info2_window_t8

0xd0f9,	// (0x0004975c) popup_blid_sat_info2_window_t9

0xd107,	// (0x0004976a) popup_blid_sat_info2_window_t10

0xd1d2,	// (0x00049835) aid_firma_cardinal_ParamLimits

0xd1e6,	// (0x00049849) blid_firmament_pane_t1_ParamLimits

0xd1fd,	// (0x00049860) blid_firmament_pane_t2_ParamLimits

0xd214,	// (0x00049877) blid_firmament_pane_t3_ParamLimits

0xd22b,	// (0x0004988e) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0004bd3b) blid_firmament_pane_t_ParamLimits

0xd242,	// (0x000498a5) blid_sat_info_pane_ParamLimits

0xb56d,	// (0x00047bd0) main_cam_set_pane_ParamLimits

0x700b,	// (0x0004366e) aid_size_cell_colour_35_ParamLimits

0x7025,	// (0x00043688) aid_size_cell_colour_112_ParamLimits

0x703c,	// (0x0004369f) aid_size_cell_effect_ParamLimits

0xb56d,	// (0x00047bd0) bg_tb_trans_pane_cp02_ParamLimits

0xb57b,	// (0x00047bde) heading_imed_pane_ParamLimits

0x7056,	// (0x000436b9) listscroll_imed_pane_ParamLimits

0xc467,	// (0x00048aca) popup_call2_audio_first_window_g5_ParamLimits

0xc467,	// (0x00048aca) popup_call2_audio_first_window_g5

0x775c,	// (0x00043dbf) aid_size_touch_image3_arrow_left_ParamLimits

0x775c,	// (0x00043dbf) aid_size_touch_image3_arrow_left

0x7772,	// (0x00043dd5) aid_size_touch_image3_arrow_right_ParamLimits

0x7772,	// (0x00043dd5) aid_size_touch_image3_arrow_right

0x8a26,	// (0x00045089) vid4_progress_pane_t3

0x72f4,	// (0x00043957) main_hwr_training_symbol_option_pane_ParamLimits

0x72f4,	// (0x00043957) main_hwr_training_symbol_option_pane

0xda71,	// (0x0004a0d4) popup_hwr_training_preview_window_ParamLimits

0xda71,	// (0x0004a0d4) popup_hwr_training_preview_window

0x7355,	// (0x000439b8) hwr_training_navi_pane_g5_ParamLimits

0x7355,	// (0x000439b8) hwr_training_navi_pane_g5

0xdcaf,	// (0x0004a312) popup_char_count_window

0xdcc1,	// (0x0004a324) bg_popup_sub_pane_cp20_ParamLimits

0x852e,	// (0x00044b91) list_vitu2_match_list_pane_ParamLimits

0x853a,	// (0x00044b9d) vitu2_page_scroll_pane_ParamLimits

0x853a,	// (0x00044b9d) vitu2_page_scroll_pane

0xe1b2,	// (0x0004a815) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe1b2,	// (0x0004a815) list_single_hwr_training_symbol_option_pane

0xe1c5,	// (0x0004a828) list_single_hwr_training_symbol_option_pane_g1

0xe1cd,	// (0x0004a830) list_single_hwr_training_symbol_option_pane_t1

0xe1db,	// (0x0004a83e) bg_button_pane_cp023

0xe1e4,	// (0x0004a847) bg_button_pane_cp024

0x8a5f,	// (0x000450c2) vitu2_page_scroll_pane_g1

0x8a67,	// (0x000450ca) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0004c12f) vitu2_page_scroll_pane_g

0x8a6f,	// (0x000450d2) vitu2_page_scroll_pane_t1

0xe217,	// (0x0004a87a) popup_char_count_window_g1

0xe220,	// (0x0004a883) popup_char_count_window_g2

0xe229,	// (0x0004a88c) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004c134) popup_char_count_window_g

0xe232,	// (0x0004a895) popup_char_count_window_t1

0xa6c7,	// (0x00046d2a) main_vded2_pane

0xd770,	// (0x00049dd3) aid_size_cell_imed_line

0xd77a,	// (0x00049ddd) grid_imed_line_width_pane

0x7bad,	// (0x00044210) vid4_indicators_pane_g4

0xe240,	// (0x0004a8a3) cell_imed_line_width_pane_ParamLimits

0xe240,	// (0x0004a8a3) cell_imed_line_width_pane

0xe254,	// (0x0004a8b7) cell_imed_line_width_pane_g1

0xe01f,	// (0x0004a682) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0004c13b) cell_imed_line_width_pane_g

0x8a7e,	// (0x000450e1) main_vded2_pane_g1_ParamLimits

0x8a7e,	// (0x000450e1) main_vded2_pane_g1

0x8a8b,	// (0x000450ee) main_vded2_pane_g2_ParamLimits

0x8a8b,	// (0x000450ee) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004c140) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004c140) main_vded2_pane_g

0x8a99,	// (0x000450fc) vded2_slider_pane_ParamLimits

0x8a99,	// (0x000450fc) vded2_slider_pane

0x8aa6,	// (0x00045109) aid_size_touch_vded2_end

0x8ab0,	// (0x00045113) aid_size_touch_vded2_playhead

0xe25d,	// (0x0004a8c0) aid_size_touch_vded2_start

0xe265,	// (0x0004a8c8) vded2_slider_bg_pane

0xe26e,	// (0x0004a8d1) vded2_slider_pane_g1

0xe277,	// (0x0004a8da) vded2_slider_pane_g2

0x8ab8,	// (0x0004511b) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004c145) vded2_slider_pane_g

0xe27f,	// (0x0004a8e2) vded2_slider_bg_pane_g1

0xe288,	// (0x0004a8eb) vded2_slider_bg_pane_g2

0xe291,	// (0x0004a8f4) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0004c14c) vded2_slider_bg_pane_g

0x5425,	// (0x00041a88) aid_postcard_touch_down_pane_ParamLimits

0x5425,	// (0x00041a88) aid_postcard_touch_down_pane

0x5435,	// (0x00041a98) aid_postcard_touch_up_pane_ParamLimits

0x5435,	// (0x00041a98) aid_postcard_touch_up_pane

0xa6c7,	// (0x00046d2a) main_blid2_pane

0x5b58,	// (0x000421bb) popup_blid2_search_window

0xa6c7,	// (0x00046d2a) blid2_gps_pane

0xa6c7,	// (0x00046d2a) blid2_navig_pane

0xa6c7,	// (0x00046d2a) blid2_search_pane

0xa6c7,	// (0x00046d2a) blid2_tripm_pane

0x8ac1,	// (0x00045124) blid2_search_pane_g1_ParamLimits

0x8ac1,	// (0x00045124) blid2_search_pane_g1

0x8ad1,	// (0x00045134) blid2_search_pane_t1_ParamLimits

0x8ad1,	// (0x00045134) blid2_search_pane_t1

0x8ae3,	// (0x00045146) aid_size_cell_blid2_gps_ParamLimits

0x8ae3,	// (0x00045146) aid_size_cell_blid2_gps

0x8af3,	// (0x00045156) blid2_gps_pane_g1_ParamLimits

0x8af3,	// (0x00045156) blid2_gps_pane_g1

0x8aff,	// (0x00045162) grid_blid2_satellite_pane_ParamLimits

0x8aff,	// (0x00045162) grid_blid2_satellite_pane

0x8b0f,	// (0x00045172) blid2_navig_pane_g1_ParamLimits

0x8b0f,	// (0x00045172) blid2_navig_pane_g1

0x8b1b,	// (0x0004517e) blid2_navig_pane_t1_ParamLimits

0x8b1b,	// (0x0004517e) blid2_navig_pane_t1

0x8b2d,	// (0x00045190) blid2_navig_pane_t2_ParamLimits

0x8b2d,	// (0x00045190) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0004c153) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0004c153) blid2_navig_pane_t

0x8b3f,	// (0x000451a2) blid2_navig_ring_pane_ParamLimits

0x8b3f,	// (0x000451a2) blid2_navig_ring_pane

0x8b4f,	// (0x000451b2) blid2_speed_pane_ParamLimits

0x8b4f,	// (0x000451b2) blid2_speed_pane

0x8b5b,	// (0x000451be) blid2_tripm_pane_g1_ParamLimits

0x8b5b,	// (0x000451be) blid2_tripm_pane_g1

0x8b6b,	// (0x000451ce) blid2_tripm_pane_g2_ParamLimits

0x8b6b,	// (0x000451ce) blid2_tripm_pane_g2

0x8b77,	// (0x000451da) blid2_tripm_pane_g3_ParamLimits

0x8b77,	// (0x000451da) blid2_tripm_pane_g3

0x8b83,	// (0x000451e6) blid2_tripm_pane_g4_ParamLimits

0x8b83,	// (0x000451e6) blid2_tripm_pane_g4

0x8b8f,	// (0x000451f2) blid2_tripm_pane_g5_ParamLimits

0x8b8f,	// (0x000451f2) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0004c158) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0004c158) blid2_tripm_pane_g

0x8bab,	// (0x0004520e) blid2_tripm_pane_t1_ParamLimits

0x8bab,	// (0x0004520e) blid2_tripm_pane_t1

0x8bbf,	// (0x00045222) blid2_tripm_pane_t2_ParamLimits

0x8bbf,	// (0x00045222) blid2_tripm_pane_t2

0x8bd1,	// (0x00045234) blid2_tripm_pane_t3_ParamLimits

0x8bd1,	// (0x00045234) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0004c165) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0004c165) blid2_tripm_pane_t

0x8c03,	// (0x00045266) cell_blid2_satellite_pane_ParamLimits

0x8c03,	// (0x00045266) cell_blid2_satellite_pane

0x8c1d,	// (0x00045280) cell_blid2_satellite_pane_g1

0xe29a,	// (0x0004a8fd) cell_blid2_satellite_pane_t1

0xd252,	// (0x000498b5) blid2_speed_pane_g1

0xe2a8,	// (0x0004a90b) blid2_speed_pane_t1

0xe2b6,	// (0x0004a919) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0004c16e) blid2_speed_pane_t

0xd252,	// (0x000498b5) blid2_navig_ring_pane_g1

0x8c26,	// (0x00045289) blid2_navig_ring_pane_g2

0x8c2e,	// (0x00045291) blid2_navig_ring_pane_g3

0x8c36,	// (0x00045299) blid2_navig_ring_pane_g4

0x8c3e,	// (0x000452a1) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0004c173) blid2_navig_ring_pane_g

0xa6c7,	// (0x00046d2a) bg_popup_window_pane_cp011

0xe2c4,	// (0x0004a927) popup_blid2_search_window_g1

0xe2cc,	// (0x0004a92f) popup_blid2_search_window_t1

0xe2da,	// (0x0004a93d) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0004c17e) popup_blid2_search_window_t

0xb118,	// (0x0004777b) main_browser_pane_g1

0xae12,	// (0x00047475) main_browser_pane_ParamLimits

0xb56d,	// (0x00047bd0) bg_button_pane_cp011_ParamLimits

0x7e1b,	// (0x0004447e) cell_vitu2_function_pane_g1_ParamLimits

0xce41,	// (0x000494a4) bg_popup_sub_pane_cp22_ParamLimits

0x1981,	// (0x0003dfe4) input_focus_pane_cp08_ParamLimits

0x86ac,	// (0x00044d0f) popup_vitu2_query_button_pane_ParamLimits

0x86ac,	// (0x00044d0f) popup_vitu2_query_button_pane

0x1998,	// (0x0003dffb) popup_vitu2_query_input_button_pane

0xdf57,	// (0x0004a5ba) popup_vitu2_query_window_g1_ParamLimits

0x19a2,	// (0x0003e005) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0004c07f) popup_vitu2_query_window_g_ParamLimits

0xa6c7,	// (0x00046d2a) bg_button_pane_cp026

0x8c46,	// (0x000452a9) popup_vitu2_query_input_button_pane_g1

0xa6c7,	// (0x00046d2a) bg_button_pane_cp025

0xe2e8,	// (0x0004a94b) popup_vitu2_query_button_pane_t1

0x65b6,	// (0x00042c19) main_mp3_pane_t6

0x65c6,	// (0x00042c29) popup_slider_window_cp01

0x7a8a,	// (0x000440ed) cam4_battery_pane

0x7b6a,	// (0x000441cd) cam4_battery_pane_cp02

0x89b3,	// (0x00045016) cam4_battery_pane_cp01

0x89b3,	// (0x00045016) cam4_battery_pane_cp03

0xd252,	// (0x000498b5) cam4_battery_pane_g1

0xe027,	// (0x0004a68a) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0004c183) cam4_battery_pane_g

0xd115,	// (0x00049778) popup_blid_sat_info2_window_t11

0xb88d,	// (0x00047ef0) aid_size_touch_mv_arrow_left_ParamLimits

0xb8b6,	// (0x00047f19) aid_size_touch_mv_arrow_right_ParamLimits

0xb914,	// (0x00047f77) navi_pane_g1_ParamLimits

0xb920,	// (0x00047f83) navi_pane_g2_ParamLimits

0xb94e,	// (0x00047fb1) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0004ba4d) navi_pane_g_ParamLimits

0x4e92,	// (0x000414f5) navi_pane_mv_t1_ParamLimits

0x7062,	// (0x000436c5) grid_imed_effect_pane_ParamLimits

0x394a,	// (0x0003ffad) aid_placing_vt_slider_lsc

0xb067,	// (0x000476ca) aid_placing_vt_slider_prt

0xb56d,	// (0x00047bd0) bg_tb_trans_pane_cp01_ParamLimits

0xd3d5,	// (0x00049a38) popup_image_details_window_g1_ParamLimits

0xd3e8,	// (0x00049a4b) popup_image_details_window_g2_ParamLimits

0xd3fd,	// (0x00049a60) popup_image_details_window_g3_ParamLimits

0xd3fd,	// (0x00049a60) popup_image_details_window_g3

0xf71d,	// (0x0004bd80) popup_image_details_window_g_ParamLimits

0xd411,	// (0x00049a74) popup_image_details_window_t1_ParamLimits

0xd423,	// (0x00049a86) popup_image_details_window_t2_ParamLimits

0xd43c,	// (0x00049a9f) popup_image_details_window_t3_ParamLimits

0xd450,	// (0x00049ab3) popup_image_details_window_t4_ParamLimits

0xd46b,	// (0x00049ace) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0004bd87) popup_image_details_window_t_ParamLimits

0x88d7,	// (0x00044f3a) cl_header_name_pane_ParamLimits

0x88d7,	// (0x00044f3a) cl_header_name_pane

0x8c4e,	// (0x000452b1) cl_header_name_pane_t1_ParamLimits

0x8c4e,	// (0x000452b1) cl_header_name_pane_t1

0x8c65,	// (0x000452c8) cl_header_name_pane_t2_ParamLimits

0x8c65,	// (0x000452c8) cl_header_name_pane_t2

0x8c8f,	// (0x000452f2) cl_header_name_pane_t3_ParamLimits

0x8c8f,	// (0x000452f2) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0004c188) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0004c188) cl_header_name_pane_t

0xb9eb,	// (0x0004804e) navi_pane_mv_g2_ParamLimits

0xdc89,	// (0x0004a2ec) field_vitu2_entry_pane_g1_ParamLimits

0xdc95,	// (0x0004a2f8) field_vitu2_entry_pane_g2_ParamLimits

0xdca1,	// (0x0004a304) field_vitu2_entry_pane_g3_ParamLimits

0xdca1,	// (0x0004a304) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004bf7e) field_vitu2_entry_pane_g_ParamLimits

0x7da6,	// (0x00044409) cell_vitu2_itu_pane_g1_ParamLimits

0x7db6,	// (0x00044419) cell_vitu2_itu_pane_g2_ParamLimits

0x7db6,	// (0x00044419) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004bf8a) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004bf8a) cell_vitu2_itu_pane_g

0xb56d,	// (0x00047bd0) bg_vkb2_func_pane_cp05_ParamLimits

0xb56d,	// (0x00047bd0) bg_vkb2_func_pane_cp05

0xb56d,	// (0x00047bd0) bg_vkb2_func_pane_cp03

0xb56d,	// (0x00047bd0) bg_vkb2_func_pane_cp04

0xb56d,	// (0x00047bd0) bg_vkb2_func_pane_cp10_ParamLimits

0xb56d,	// (0x00047bd0) bg_vkb2_func_pane_cp10

0x1b57,	// (0x0003e1ba) bg_vkb2_func_pane_cp08

0x8881,	// (0x00044ee4) bg_vkb2_func_pane_cp06

0x888f,	// (0x00044ef2) bg_vkb2_func_pane_cp07

0xe1ed,	// (0x0004a850) bg_vkb2_func_pane_cp11_ParamLimits

0xe1ed,	// (0x0004a850) bg_vkb2_func_pane_cp11

0xe202,	// (0x0004a865) bg_vkb2_func_pane_cp12_ParamLimits

0xe202,	// (0x0004a865) bg_vkb2_func_pane_cp12

0xa6c7,	// (0x00046d2a) bg_vkb2_func_pane_cp09

0xdcdd,	// (0x0004a340) bg_vkb2_func_pane_g1

0xb229,	// (0x0004788c) bg_vkb2_func_pane_g2

0xdce5,	// (0x0004a348) bg_vkb2_func_pane_g3

0xdced,	// (0x0004a350) bg_vkb2_func_pane_g4

0xdf1c,	// (0x0004a57f) bg_vkb2_func_pane_g5

0xdd05,	// (0x0004a368) bg_vkb2_func_pane_g6

0xdd0d,	// (0x0004a370) bg_vkb2_func_pane_g7

0xdcfd,	// (0x0004a360) bg_vkb2_func_pane_g8

0xb209,	// (0x0004786c) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0004c18f) bg_vkb2_func_pane_g

0x8b9d,	// (0x00045200) blid2_tripm_pane_g6_ParamLimits

0x8b9d,	// (0x00045200) blid2_tripm_pane_g6

0xdb29,	// (0x0004a18c) mp4_progress_pane_g1

0x8bf7,	// (0x0004525a) blid2_tripm_values_pane_ParamLimits

0x8bf7,	// (0x0004525a) blid2_tripm_values_pane

0x8cb4,	// (0x00045317) blid2_tripm_values_pane_t1

0x8cc2,	// (0x00045325) blid2_tripm_values_pane_t2

0x8cd0,	// (0x00045333) blid2_tripm_values_pane_t3

0x8cde,	// (0x00045341) blid2_tripm_values_pane_t4

0x8cec,	// (0x0004534f) blid2_tripm_values_pane_t5

0x8cfa,	// (0x0004535d) blid2_tripm_values_pane_t6

0x8d08,	// (0x0004536b) blid2_tripm_values_pane_t7

0x8d16,	// (0x00045379) blid2_tripm_values_pane_t8

0x8d24,	// (0x00045387) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0004c1a2) blid2_tripm_values_pane_t

0x398a,	// (0x0003ffed) call_video_pane_t1_ParamLimits

0x39ab,	// (0x0004000e) call_video_pane_t2_ParamLimits

0xf273,	// (0x0004b8d6) call_video_pane_t_ParamLimits

0x16e2,	// (0x0003dd45) msg_header_pane_g1_ParamLimits

0xbbc4,	// (0x00048227) msg_header_pane_g2_ParamLimits

0xbbc4,	// (0x00048227) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0004baf0) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0004baf0) msg_header_pane_g

0xae12,	// (0x00047475) main_clock2_pane_ParamLimits

0x6dfb,	// (0x0004345e) grid_clock2_toolbar_pane_ParamLimits

0x6dfb,	// (0x0004345e) grid_clock2_toolbar_pane

0x6dfb,	// (0x0004345e) listscroll_clock2_pane_ParamLimits

0x6dfb,	// (0x0004345e) listscroll_clock2_pane

0x6e9f,	// (0x00043502) main_clock2_pane_t3_ParamLimits

0x6e9f,	// (0x00043502) main_clock2_pane_t3

0x6eb1,	// (0x00043514) main_clock2_pane_t4_ParamLimits

0x6eb1,	// (0x00043514) main_clock2_pane_t4

0xe2f6,	// (0x0004a959) cell_clock2_toolbar_pane

0xe2fe,	// (0x0004a961) cell_clock2_toolbar_pane_cp01

0xe2fe,	// (0x0004a961) cell_clock2_toolbar_pane_cp02

0xe306,	// (0x0004a969) cell_clock2_toolbar_pane_cp03

0xe30e,	// (0x0004a971) list_clock2_pane

0xb803,	// (0x00047e66) scroll_pane_cp10

0xe316,	// (0x0004a979) list_single_clock2_pane_ParamLimits

0xe316,	// (0x0004a979) list_single_clock2_pane

0xba52,	// (0x000480b5) list_highlight_pane_cp08

0xe323,	// (0x0004a986) list_single_clock2_pane_t1

0xe331,	// (0x0004a994) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0004c1b5) list_single_clock2_pane_t

0xa6c7,	// (0x00046d2a) bg_button_pane_cp10

0xe33f,	// (0x0004a9a2) cell_clock2_toolbar_pane_g1

0x5387,	// (0x000419ea) aid_main_viewer_pane_g1_ParamLimits

0x5387,	// (0x000419ea) aid_main_viewer_pane_g1

0x5393,	// (0x000419f6) aid_main_viewer_pane_g2_ParamLimits

0x5393,	// (0x000419f6) aid_main_viewer_pane_g2

0x539f,	// (0x00041a02) aid_main_viewer_pane_g3_ParamLimits

0x539f,	// (0x00041a02) aid_main_viewer_pane_g3

0x53b0,	// (0x00041a13) aid_main_viewer_pane_g4_ParamLimits

0x53b0,	// (0x00041a13) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0004bb01) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0004bb01) aid_main_viewer_pane_g

0x5b30,	// (0x00042193) main_calc_pane_ParamLimits

0x5b3d,	// (0x000421a0) main_dialer2_pane_ParamLimits

0xa6c7,	// (0x00046d2a) main_cam6_pane

0xa6c7,	// (0x00046d2a) main_vid6_pane

0x6e07,	// (0x0004346a) listscroll_gen_pane_cp06_ParamLimits

0x6e07,	// (0x0004346a) listscroll_gen_pane_cp06

0x6ec3,	// (0x00043526) main_clock2_pane_t5_ParamLimits

0x6ec3,	// (0x00043526) main_clock2_pane_t5

0x6f0c,	// (0x0004356f) aid_call2_pane_cp10_ParamLimits

0x6f1e,	// (0x00043581) aid_call_pane_cp10_ParamLimits

0xb881,	// (0x00047ee4) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb881,	// (0x00047ee4) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6f30,	// (0x00043593) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6f30,	// (0x00043593) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb881,	// (0x00047ee4) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0004be37) popup_clock_analogue_window_cp10_g_ParamLimits

0x6f42,	// (0x000435a5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7709,	// (0x00043d6c) cell_dialer2_keypad_pane_g2_ParamLimits

0x7709,	// (0x00043d6c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004bf1d) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004bf1d) cell_dialer2_keypad_pane_g

0x7725,	// (0x00043d88) cell_dialer2_keypad_pane_t1

0x80e6,	// (0x00044749) main_cset_text2_pane_ParamLimits

0x80e6,	// (0x00044749) main_cset_text2_pane

0xe155,	// (0x0004a7b8) area_vitu2_query_pane_g1_ParamLimits

0x1a82,	// (0x0003e0e5) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0004c0d2) area_vitu2_query_pane_g_ParamLimits

0x1b33,	// (0x0003e196) area_vitu2_query_pane_t7_ParamLimits

0x1b33,	// (0x0003e196) area_vitu2_query_pane_t7

0x8881,	// (0x00044ee4) bg_button_pane_cp018_ParamLimits

0x888f,	// (0x00044ef2) bg_button_pane_cp021_ParamLimits

0x1b57,	// (0x0003e1ba) bg_button_pane_cp022_ParamLimits

0x1b57,	// (0x0003e1ba) bg_vkb2_func_pane_cp08_ParamLimits

0x8881,	// (0x00044ee4) bg_vkb2_func_pane_cp06_ParamLimits

0x888f,	// (0x00044ef2) bg_vkb2_func_pane_cp07_ParamLimits

0x1b68,	// (0x0003e1cb) input_focus_pane_cp09_ParamLimits

0x8d32,	// (0x00045395) cam6_autofocus_pane_ParamLimits

0x8d32,	// (0x00045395) cam6_autofocus_pane

0x8d54,	// (0x000453b7) cam6_image_uncrop_pane_ParamLimits

0x8d54,	// (0x000453b7) cam6_image_uncrop_pane

0x8d81,	// (0x000453e4) cam6_indi_pane_ParamLimits

0x8d81,	// (0x000453e4) cam6_indi_pane

0x8d9b,	// (0x000453fe) cam6_mode_pane_ParamLimits

0x8d9b,	// (0x000453fe) cam6_mode_pane

0x8daf,	// (0x00045412) cam6_timer_pane_ParamLimits

0x8daf,	// (0x00045412) cam6_timer_pane

0x8dbb,	// (0x0004541e) cam6_zoom_pane_ParamLimits

0x8dbb,	// (0x0004541e) cam6_zoom_pane

0x8dd3,	// (0x00045436) cam6_mode_pane_g1_ParamLimits

0x8dd3,	// (0x00045436) cam6_mode_pane_g1

0x8ddf,	// (0x00045442) cam6_mode_pane_g2_ParamLimits

0x8ddf,	// (0x00045442) cam6_mode_pane_g2

0x8deb,	// (0x0004544e) cam6_mode_pane_g3_ParamLimits

0x8deb,	// (0x0004544e) cam6_mode_pane_g3

0x8df7,	// (0x0004545a) cam6_mode_pane_g4_ParamLimits

0x8df7,	// (0x0004545a) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0004c1ba) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0004c1ba) cam6_mode_pane_g

0xdccf,	// (0x0004a332) bg_tb_trans_pane_cp08_ParamLimits

0xdccf,	// (0x0004a332) bg_tb_trans_pane_cp08

0xe347,	// (0x0004a9aa) cam6_battery_pane_ParamLimits

0xe347,	// (0x0004a9aa) cam6_battery_pane

0xe35d,	// (0x0004a9c0) cam6_indi_pane_g1_ParamLimits

0xe35d,	// (0x0004a9c0) cam6_indi_pane_g1

0xe36f,	// (0x0004a9d2) cam6_indi_pane_g2_ParamLimits

0xe36f,	// (0x0004a9d2) cam6_indi_pane_g2

0xe381,	// (0x0004a9e4) cam6_indi_pane_g3_ParamLimits

0xe381,	// (0x0004a9e4) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0004c1c3) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0004c1c3) cam6_indi_pane_g

0xe393,	// (0x0004a9f6) cam6_indi_pane_t1_ParamLimits

0xe393,	// (0x0004a9f6) cam6_indi_pane_t1

0x7be2,	// (0x00044245) cam6_autofocus_pane_g1

0x7bea,	// (0x0004424d) cam6_autofocus_pane_g2

0x7bf2,	// (0x00044255) cam6_autofocus_pane_g3

0x7bfa,	// (0x0004425d) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0004c1ca) cam6_autofocus_pane_g

0xe3b9,	// (0x0004aa1c) cam6_timer_pane_g1

0xe3c1,	// (0x0004aa24) cam6_timer_pane_t1

0xe3cf,	// (0x0004aa32) cam6_zoom_cont_pane

0xe3d7,	// (0x0004aa3a) cam6_zoom_pane_g1

0xe3df,	// (0x0004aa42) cam6_zoom_pane_g2

0x8e03,	// (0x00045466) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0004c1d3) cam6_zoom_pane_g

0xd252,	// (0x000498b5) cam6_battery_pane_g1

0xd252,	// (0x000498b5) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0004bd44) cam6_battery_pane_g

0xe3e7,	// (0x0004aa4a) cam6_zoom_cont_pane_g1

0xe3f0,	// (0x0004aa53) cam6_zoom_cont_pane_g2

0xe3f9,	// (0x0004aa5c) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0004c1da) cam6_zoom_cont_pane_g

0x8e20,	// (0x00045483) cam6_mode_pane_cp_ParamLimits

0x8e20,	// (0x00045483) cam6_mode_pane_cp

0x8dbb,	// (0x0004541e) cam6_zoom_pane_cp_ParamLimits

0x8dbb,	// (0x0004541e) cam6_zoom_pane_cp

0x8e34,	// (0x00045497) vid6_image_uncrop_cif_pane_ParamLimits

0x8e34,	// (0x00045497) vid6_image_uncrop_cif_pane

0x8e60,	// (0x000454c3) vid6_image_uncrop_nhd_pane_ParamLimits

0x8e60,	// (0x000454c3) vid6_image_uncrop_nhd_pane

0x8d54,	// (0x000453b7) vid6_image_uncrop_vga_pane_ParamLimits

0x8d54,	// (0x000453b7) vid6_image_uncrop_vga_pane

0x8e7d,	// (0x000454e0) vid6_image_uncrop_wvga_pane_ParamLimits

0x8e7d,	// (0x000454e0) vid6_image_uncrop_wvga_pane

0x8e9a,	// (0x000454fd) vid6_indi_pane_ParamLimits

0x8e9a,	// (0x000454fd) vid6_indi_pane

0xdccf,	// (0x0004a332) bg_tb_trans_pane_cp09_ParamLimits

0xdccf,	// (0x0004a332) bg_tb_trans_pane_cp09

0xe411,	// (0x0004aa74) cam6_battery_pane_cp_ParamLimits

0xe411,	// (0x0004aa74) cam6_battery_pane_cp

0xe41d,	// (0x0004aa80) vid6_indi_pane_g1_ParamLimits

0xe41d,	// (0x0004aa80) vid6_indi_pane_g1

0xe42f,	// (0x0004aa92) vid6_indi_pane_g2_ParamLimits

0xe42f,	// (0x0004aa92) vid6_indi_pane_g2

0xe441,	// (0x0004aaa4) vid6_indi_pane_g3_ParamLimits

0xe441,	// (0x0004aaa4) vid6_indi_pane_g3

0xe456,	// (0x0004aab9) vid6_indi_pane_g4_ParamLimits

0xe456,	// (0x0004aab9) vid6_indi_pane_g4

0xe46b,	// (0x0004aace) vid6_indi_pane_g5_ParamLimits

0xe46b,	// (0x0004aace) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0004c1e1) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0004c1e1) vid6_indi_pane_g

0xe485,	// (0x0004aae8) vid6_indi_pane_t1_ParamLimits

0xe485,	// (0x0004aae8) vid6_indi_pane_t1

0xe49b,	// (0x0004aafe) vid6_indi_pane_t2_ParamLimits

0xe49b,	// (0x0004aafe) vid6_indi_pane_t2

0xe4c3,	// (0x0004ab26) vid6_indi_pane_t3_ParamLimits

0xe4c3,	// (0x0004ab26) vid6_indi_pane_t3

0xe4eb,	// (0x0004ab4e) vid6_indi_pane_t4_ParamLimits

0xe4eb,	// (0x0004ab4e) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0004c1ec) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0004c1ec) vid6_indi_pane_t

0xe50f,	// (0x0004ab72) wait_bar_pane_cp08

0x8ebf,	// (0x00045522) main_cset_text2_pane_t1_ParamLimits

0x8ebf,	// (0x00045522) main_cset_text2_pane_t1

0x8e0b,	// (0x0004546e) listscroll_gen_pane_cp06_t1_ParamLimits

0x8e0b,	// (0x0004546e) listscroll_gen_pane_cp06_t1

0xa6c7,	// (0x00046d2a) main_cam6_set_pane

0xd4b5,	// (0x00049b18) bg_tb_trans_pane_cp06_ParamLimits

0x7a92,	// (0x000440f5) cam4_indicators_pane_g1_ParamLimits

0x7aa3,	// (0x00044106) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004bf5a) cam4_indicators_pane_g_ParamLimits

0x7ac1,	// (0x00044124) cam4_indicators_pane_t1_ParamLimits

0xb56d,	// (0x00047bd0) bg_tb_trans_pane_cp07_ParamLimits

0x7b74,	// (0x000441d7) vid4_indicators_pane_g1_ParamLimits

0x7b88,	// (0x000441eb) vid4_indicators_pane_g2_ParamLimits

0x7b9c,	// (0x000441ff) vid4_indicators_pane_g3_ParamLimits

0x7bad,	// (0x00044210) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004bf6c) vid4_indicators_pane_g_ParamLimits

0x7bcb,	// (0x0004422e) vid4_indicators_pane_t1_ParamLimits

0x89bb,	// (0x0004501e) vid4_progress_pane_g1_ParamLimits

0x89cd,	// (0x00045030) vid4_progress_pane_g2_ParamLimits

0x540d,	// (0x00041a70) vid4_progress_pane_g3_ParamLimits

0x89dd,	// (0x00045040) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0004c11d) vid4_progress_pane_g_ParamLimits

0x89fb,	// (0x0004505e) vid4_progress_pane_t1_ParamLimits

0x8a10,	// (0x00045073) vid4_progress_pane_t2_ParamLimits

0x8a26,	// (0x00045089) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0004c128) vid4_progress_pane_t_ParamLimits

0x8a3b,	// (0x0004509e) wait_bar_pane_cp07_ParamLimits

0x8ef2,	// (0x00045555) main_cam6_set_pane_g2_ParamLimits

0x8ef2,	// (0x00045555) main_cam6_set_pane_g2

0x8efe,	// (0x00045561) main_cset6_listscroll_pane_ParamLimits

0x8efe,	// (0x00045561) main_cset6_listscroll_pane

0x8f29,	// (0x0004558c) main_cset6_slider_pane_ParamLimits

0x8f29,	// (0x0004558c) main_cset6_slider_pane

0x8f35,	// (0x00045598) main_cset6_text2_pane_ParamLimits

0x8f35,	// (0x00045598) main_cset6_text2_pane

0xe51e,	// (0x0004ab81) main_cset6_text_pane

0xe526,	// (0x0004ab89) main_cset_list_pane_copy1_ParamLimits

0xe526,	// (0x0004ab89) main_cset_list_pane_copy1

0xe536,	// (0x0004ab99) scroll_pane_cp028_copy1

0x8f48,	// (0x000455ab) cset_list_set_pane_copy1

0x8f5b,	// (0x000455be) aid_position_infowindow_above_copy1

0x8f63,	// (0x000455c6) aid_position_infowindow_below_copy1

0x1bc1,	// (0x0003e224) cset_list_set_pane_g1_copy1

0x18f9,	// (0x0003df5c) cset_list_set_pane_g3_copy1_ParamLimits

0x18f9,	// (0x0003df5c) cset_list_set_pane_g3_copy1

0x1908,	// (0x0003df6b) cset_list_set_pane_t1_copy1_ParamLimits

0x1908,	// (0x0003df6b) cset_list_set_pane_t1_copy1

0xb56d,	// (0x00047bd0) list_highlight_pane_cp021_copy1_ParamLimits

0xb56d,	// (0x00047bd0) list_highlight_pane_cp021_copy1

0xe53f,	// (0x0004aba2) cset6_slider_pane_ParamLimits

0xe53f,	// (0x0004aba2) cset6_slider_pane

0xe56b,	// (0x0004abce) main_cset6_slider_pane_g1_ParamLimits

0xe56b,	// (0x0004abce) main_cset6_slider_pane_g1

0x8f6b,	// (0x000455ce) main_cset6_slider_pane_g2_ParamLimits

0x8f6b,	// (0x000455ce) main_cset6_slider_pane_g2

0xe593,	// (0x0004abf6) main_cset6_slider_pane_g3_ParamLimits

0xe593,	// (0x0004abf6) main_cset6_slider_pane_g3

0x8f93,	// (0x000455f6) main_cset6_slider_pane_g4_ParamLimits

0x8f93,	// (0x000455f6) main_cset6_slider_pane_g4

0x8f9f,	// (0x00045602) main_cset6_slider_pane_g5_ParamLimits

0x8f9f,	// (0x00045602) main_cset6_slider_pane_g5

0xde0c,	// (0x0004a46f) main_cset6_slider_pane_g7_ParamLimits

0xde0c,	// (0x0004a46f) main_cset6_slider_pane_g7

0xde18,	// (0x0004a47b) main_cset6_slider_pane_g8_ParamLimits

0xde18,	// (0x0004a47b) main_cset6_slider_pane_g8

0x8fad,	// (0x00045610) main_cset6_slider_pane_g9_ParamLimits

0x8fad,	// (0x00045610) main_cset6_slider_pane_g9

0x8fb9,	// (0x0004561c) main_cset6_slider_pane_g10_ParamLimits

0x8fb9,	// (0x0004561c) main_cset6_slider_pane_g10

0x8fc5,	// (0x00045628) main_cset6_slider_pane_g11_ParamLimits

0x8fc5,	// (0x00045628) main_cset6_slider_pane_g11

0x8fd1,	// (0x00045634) main_cset6_slider_pane_g12_ParamLimits

0x8fd1,	// (0x00045634) main_cset6_slider_pane_g12

0x8fdd,	// (0x00045640) main_cset6_slider_pane_g13_ParamLimits

0x8fdd,	// (0x00045640) main_cset6_slider_pane_g13

0x8fe9,	// (0x0004564c) main_cset6_slider_pane_g14_ParamLimits

0x8fe9,	// (0x0004564c) main_cset6_slider_pane_g14

0x8ff5,	// (0x00045658) main_cset6_slider_pane_g15_ParamLimits

0x8ff5,	// (0x00045658) main_cset6_slider_pane_g15

0x900d,	// (0x00045670) main_cset6_slider_pane_g16_ParamLimits

0x900d,	// (0x00045670) main_cset6_slider_pane_g16

0x901b,	// (0x0004567e) main_cset6_slider_pane_g17_ParamLimits

0x901b,	// (0x0004567e) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0004c1f5) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0004c1f5) main_cset6_slider_pane_g

0xe59f,	// (0x0004ac02) main_cset6_slider_pane_t1_ParamLimits

0xe59f,	// (0x0004ac02) main_cset6_slider_pane_t1

0x9041,	// (0x000456a4) main_cset6_slider_pane_t2_ParamLimits

0x9041,	// (0x000456a4) main_cset6_slider_pane_t2

0x906c,	// (0x000456cf) main_cset6_slider_pane_t3_ParamLimits

0x906c,	// (0x000456cf) main_cset6_slider_pane_t3

0x9097,	// (0x000456fa) main_cset6_slider_pane_t4_ParamLimits

0x9097,	// (0x000456fa) main_cset6_slider_pane_t4

0x90c2,	// (0x00045725) main_cset6_slider_pane_t5_ParamLimits

0x90c2,	// (0x00045725) main_cset6_slider_pane_t5

0xe5e0,	// (0x0004ac43) main_cset6_slider_pane_t7_ParamLimits

0xe5e0,	// (0x0004ac43) main_cset6_slider_pane_t7

0x90ef,	// (0x00045752) main_cset6_slider_pane_t8_ParamLimits

0x90ef,	// (0x00045752) main_cset6_slider_pane_t8

0x9113,	// (0x00045776) main_cset6_slider_pane_t9_ParamLimits

0x9113,	// (0x00045776) main_cset6_slider_pane_t9

0x9137,	// (0x0004579a) main_cset6_slider_pane_t10_ParamLimits

0x9137,	// (0x0004579a) main_cset6_slider_pane_t10

0x915b,	// (0x000457be) main_cset6_slider_pane_t11_ParamLimits

0x915b,	// (0x000457be) main_cset6_slider_pane_t11

0xe616,	// (0x0004ac79) main_cset6_slider_pane_t14_ParamLimits

0xe616,	// (0x0004ac79) main_cset6_slider_pane_t14

0xe64f,	// (0x0004acb2) main_cset6_slider_pane_t15_ParamLimits

0xe64f,	// (0x0004acb2) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0004c21a) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0004c21a) main_cset6_slider_pane_t

0xded0,	// (0x0004a533) cset_slider_pane_g1_copy1

0xded9,	// (0x0004a53c) cset_slider_pane_g2_copy1

0xdee2,	// (0x0004a545) cset_slider_pane_g3_copy1

0xa6c7,	// (0x00046d2a) bg_popup_sub_pane_cp011_copy1

0xe688,	// (0x0004aceb) main_cset_text_pane_g1_copy1

0xdf6b,	// (0x0004a5ce) main_cset_text_pane_t1_copy1

0xdf79,	// (0x0004a5dc) main_cset_text_pane_t2_copy1

0xdf87,	// (0x0004a5ea) main_cset_text_pane_t3_copy1

0xdf95,	// (0x0004a5f8) main_cset_text_pane_t4_copy1

0xdfa3,	// (0x0004a606) main_cset_text_pane_t5_copy1

0xe690,	// (0x0004acf3) main_cset_text_pane_t6_copy1

0xdfbf,	// (0x0004a622) main_cset_text_pane_t7_copy1

0x917f,	// (0x000457e2) main_cset_text2_pane_t1_copy1

0xb56d,	// (0x00047bd0) main_ncimui_pane

0x5b8e,	// (0x000421f1) popup_query_ncimui_window_ParamLimits

0x5b8e,	// (0x000421f1) popup_query_ncimui_window

0x17a3,	// (0x0003de06) field_cale_ev2_pane_g4_ParamLimits

0x17a3,	// (0x0003de06) field_cale_ev2_pane_g4

0x7429,	// (0x00043a8c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7429,	// (0x00043a8c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0004bef8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0004bef8) cell_video_dialer_keypad_pane_g

0x7441,	// (0x00043aa4) cell_video_dialer_keypad_pane_t1

0xa6c7,	// (0x00046d2a) bg_popup_window_pane_cp012

0xb6d0,	// (0x00047d33) heading_pane_cp06

0xe6bc,	// (0x0004ad1f) ncim_query_content_pane

0xa6c7,	// (0x00046d2a) bg_popup_heading_pane_cp01

0xe6c4,	// (0x0004ad27) ncim_heading_pane_t1

0xe6d2,	// (0x0004ad35) ncim_indicator_popup_pane

0xe6e4,	// (0x0004ad47) ncim_query_button_pane

0xe6f8,	// (0x0004ad5b) ncim_query_content_pane_t1

0xe70a,	// (0x0004ad6d) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0004c25e) ncim_query_content_pane_t

0xe744,	// (0x0004ada7) ncim_query_list_pane

0xe756,	// (0x0004adb9) ncim_query_popup_pane

0xe6d2,	// (0x0004ad35) ncim_indicator_popup_pane_ParamLimits

0x92d2,	// (0x00045935) ncim_query_content_pane_g1_ParamLimits

0x92d2,	// (0x00045935) ncim_query_content_pane_g1

0xe6f8,	// (0x0004ad5b) ncim_query_content_pane_t1_ParamLimits

0xe70a,	// (0x0004ad6d) ncim_query_content_pane_t2_ParamLimits

0x92de,	// (0x00045941) ncim_query_content_pane_t3_ParamLimits

0x92de,	// (0x00045941) ncim_query_content_pane_t3

0x92fb,	// (0x0004595e) ncim_query_content_pane_t4_ParamLimits

0x92fb,	// (0x0004595e) ncim_query_content_pane_t4

0x9318,	// (0x0004597b) ncim_query_content_pane_t5_ParamLimits

0x9318,	// (0x0004597b) ncim_query_content_pane_t5

0xe71c,	// (0x0004ad7f) ncim_query_content_pane_t6_ParamLimits

0xe71c,	// (0x0004ad7f) ncim_query_content_pane_t6

0xfbfb,	// (0x0004c25e) ncim_query_content_pane_t_ParamLimits

0xe744,	// (0x0004ada7) ncim_query_list_pane_ParamLimits

0xe756,	// (0x0004adb9) ncim_query_popup_pane_ParamLimits

0xe76a,	// (0x0004adcd) wait_bar_pane_cp04

0xa6c7,	// (0x00046d2a) input_focus_pane_cp011

0xe772,	// (0x0004add5) ncim_query_popup_pane_t1

0xe780,	// (0x0004ade3) ncim_list_query_list_pane_ParamLimits

0xe780,	// (0x0004ade3) ncim_list_query_list_pane

0xa6c7,	// (0x00046d2a) bg_button_pane_cp027

0xe78d,	// (0x0004adf0) ncim_query_button_pane_g1

0xa6c7,	// (0x00046d2a) list_highlight_pane_cp012

0xe797,	// (0x0004adfa) ncim_list_query_list_pane_g1

0xe79f,	// (0x0004ae02) ncim_list_query_list_pane_t1

0x7ab2,	// (0x00044115) cam4_indicators_pane_g3_ParamLimits

0x7ab2,	// (0x00044115) cam4_indicators_pane_g3

0x7bb9,	// (0x0004421c) vid4_indicators_pane_g5_ParamLimits

0x7bb9,	// (0x0004421c) vid4_indicators_pane_g5

0x89ec,	// (0x0004504f) vid4_progress_pane_g5_ParamLimits

0x89ec,	// (0x0004504f) vid4_progress_pane_g5

0x91be,	// (0x00045821) main_ncimui_pane_g1

0x9226,	// (0x00045889) ncimui_group_query_pane_ParamLimits

0x9226,	// (0x00045889) ncimui_group_query_pane

0x926e,	// (0x000458d1) ncimui_list_pane_ParamLimits

0x926e,	// (0x000458d1) ncimui_list_pane

0x9295,	// (0x000458f8) ncimui_text_pane_ParamLimits

0x9295,	// (0x000458f8) ncimui_text_pane

0x9335,	// (0x00045998) ncimui_text_pane_t1_ParamLimits

0x9335,	// (0x00045998) ncimui_text_pane_t1

0xe7ad,	// (0x0004ae10) ncimui_list_single_graphic_pane_ParamLimits

0xe7ad,	// (0x0004ae10) ncimui_list_single_graphic_pane

0x9354,	// (0x000459b7) ncimui_query_pane_ParamLimits

0x9354,	// (0x000459b7) ncimui_query_pane

0xa6c7,	// (0x00046d2a) list_highlight_pane_cp013

0xe7bd,	// (0x0004ae20) ncim_list_query_list_pane_t1_copy1

0xe797,	// (0x0004adfa) ncim_list_single_graphic_pane_g1

0xe7cb,	// (0x0004ae2e) ncim_query_button_pane_cp01

0xe7d7,	// (0x0004ae3a) ncim_query_entry_pane_ParamLimits

0xe7d7,	// (0x0004ae3a) ncim_query_entry_pane

0xe7ea,	// (0x0004ae4d) ncimui_query_pane_g1

0xe7f6,	// (0x0004ae59) ncimui_query_pane_t1_ParamLimits

0xe7f6,	// (0x0004ae59) ncimui_query_pane_t1

0xb56d,	// (0x00047bd0) input_focus_pane_cp012

0xe80f,	// (0x0004ae72) ncim_query_entry_pane_t1

0xae12,	// (0x00047475) main_im_pane_ParamLimits

0xb56d,	// (0x00047bd0) main_mobtv_pane_ParamLimits

0xb56d,	// (0x00047bd0) main_mobtv_pane

0x9029,	// (0x0004568c) main_cset6_slider_pane_g18_ParamLimits

0x9029,	// (0x0004568c) main_cset6_slider_pane_g18

0x9035,	// (0x00045698) main_cset6_slider_pane_g19_ParamLimits

0x9035,	// (0x00045698) main_cset6_slider_pane_g19

0xdca1,	// (0x0004a304) bg_main_mobtv_pane_ParamLimits

0xdca1,	// (0x0004a304) bg_main_mobtv_pane

0x9367,	// (0x000459ca) main_mobtv_info_pane

0x9372,	// (0x000459d5) main_mobtv_loading_pane_ParamLimits

0x9372,	// (0x000459d5) main_mobtv_loading_pane

0xe821,	// (0x0004ae84) main_mobtv_pg_channel_list_pane

0xe82b,	// (0x0004ae8e) main_mobtv_pg_hdr_pane

0x937f,	// (0x000459e2) main_mobtv_programe_curr_pane_ParamLimits

0x937f,	// (0x000459e2) main_mobtv_programe_curr_pane

0x938c,	// (0x000459ef) main_mobtv_programe_next_pane_ParamLimits

0x938c,	// (0x000459ef) main_mobtv_programe_next_pane

0xe834,	// (0x0004ae97) popup_mobtv_noti_window

0xd252,	// (0x000498b5) main_tv_pg_hdr_pane_g1

0xe83c,	// (0x0004ae9f) main_tv_pg_hdr_pane_g2

0xe844,	// (0x0004aea7) main_tv_pg_hdr_pane_g3

0xe84c,	// (0x0004aeaf) main_tv_pg_hdr_pane_g4

0xe854,	// (0x0004aeb7) main_tv_pg_hdr_pane_g5

0xe85e,	// (0x0004aec1) main_tv_pg_hdr_pane_g6

0xe868,	// (0x0004aecb) main_tv_pg_hdr_pane_g7

0xe872,	// (0x0004aed5) main_tv_pg_hdr_pane_g8

0xe87c,	// (0x0004aedf) main_tv_pg_hdr_pane_g9

0xe886,	// (0x0004aee9) main_tv_pg_hdr_pane_g10

0xe890,	// (0x0004aef3) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0004c26b) main_tv_pg_hdr_pane_g

0xe89a,	// (0x0004aefd) main_tv_pg_hdr_pane_t1

0xe8a8,	// (0x0004af0b) main_tv_pg_hdr_pane_t2

0xe8b6,	// (0x0004af19) main_tv_pg_hdr_pane_t3

0xe8c6,	// (0x0004af29) main_tv_pg_hdr_pane_t4

0xe8d6,	// (0x0004af39) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0004c282) main_tv_pg_hdr_pane_t

0xe8e6,	// (0x0004af49) single_mobtv_pg_channel_pane_ParamLimits

0xe8e6,	// (0x0004af49) single_mobtv_pg_channel_pane

0xe8f8,	// (0x0004af5b) single_mobtv_pg_channel_table_pane

0xe901,	// (0x0004af64) single_mobtv_pg_channel_thumb_pane

0xe90a,	// (0x0004af6d) single_tv_pg_channel_pane_g1

0xe913,	// (0x0004af76) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0004c28d) single_tv_pg_channel_pane_g

0xd4b5,	// (0x00049b18) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd4b5,	// (0x00049b18) bg_single_mobtv_pg_channel_thumb_pane

0xe91c,	// (0x0004af7f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe91c,	// (0x0004af7f) single_mobtv_pg_channel_thumb_pane_g1

0xe92a,	// (0x0004af8d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe92a,	// (0x0004af8d) single_mobtv_pg_channel_thumb_pane_g2

0xe936,	// (0x0004af99) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe936,	// (0x0004af99) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0004c292) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0004c292) single_mobtv_pg_channel_thumb_pane_g

0xe942,	// (0x0004afa5) single_mobtv_pg_channel_thumb_pane_t1

0xe950,	// (0x0004afb3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0004c299) single_mobtv_pg_channel_thumb_pane_t

0xd252,	// (0x000498b5) bg_single_mobtv_pg_channel_table_pane_g1

0xd252,	// (0x000498b5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0004bd44) bg_single_mobtv_pg_channel_table_pane_g

0xe95e,	// (0x0004afc1) single_mobtv_pg_channel_table_pane_t1

0xe96c,	// (0x0004afcf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0004c29e) single_mobtv_pg_channel_table_pane_t

0x93a1,	// (0x00045a04) main_mobtv_info_pane_g1_ParamLimits

0x93a1,	// (0x00045a04) main_mobtv_info_pane_g1

0x93bd,	// (0x00045a20) main_mobtv_info_pane_t1_ParamLimits

0x93bd,	// (0x00045a20) main_mobtv_info_pane_t1

0x9435,	// (0x00045a98) main_mobtv_info_pane_t2_ParamLimits

0x9435,	// (0x00045a98) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0004c2a8) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0004c2a8) main_mobtv_info_pane_t

0x94c4,	// (0x00045b27) wait_bar_pane_cp05

0x94d6,	// (0x00045b39) main_mobtv_loading_pane_g1_ParamLimits

0x94d6,	// (0x00045b39) main_mobtv_loading_pane_g1

0x94e4,	// (0x00045b47) main_mobtv_loading_pane_g2_ParamLimits

0x94e4,	// (0x00045b47) main_mobtv_loading_pane_g2

0x94f0,	// (0x00045b53) main_mobtv_loading_pane_g3_ParamLimits

0x94f0,	// (0x00045b53) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0004c2af) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0004c2af) main_mobtv_loading_pane_g

0xe97a,	// (0x0004afdd) main_mobtv_loading_pane_t1_ParamLimits

0xe97a,	// (0x0004afdd) main_mobtv_loading_pane_t1

0xe992,	// (0x0004aff5) main_mobtv_loading_pane_t2_ParamLimits

0xe992,	// (0x0004aff5) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0004c2b6) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0004c2b6) main_mobtv_loading_pane_t

0x94fe,	// (0x00045b61) wait_bar_pane_cp06_ParamLimits

0x94fe,	// (0x00045b61) wait_bar_pane_cp06

0xe9b6,	// (0x0004b019) main_mobtv_programe_curr_pane_t1

0xe9c4,	// (0x0004b027) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0004c2bb) main_mobtv_programe_curr_pane_t

0xe9d2,	// (0x0004b035) main_mobtv_programe_next_pane_t1

0xe9e0,	// (0x0004b043) main_mobtv_programe_next_pane_t2

0xe9ee,	// (0x0004b051) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0004c2c0) main_mobtv_programe_next_pane_t

0xa6c7,	// (0x00046d2a) bg_popup_mobtv_noti_window_pane

0xe9fc,	// (0x0004b05f) popup_mobtv_noti_window_g1

0xea04,	// (0x0004b067) popup_mobtv_noti_window_t1

0xea12,	// (0x0004b075) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0004c2c7) popup_mobtv_noti_window_t

0xd252,	// (0x000498b5) bg_popup_mobtv_noti_window_pane_g1

0xa6c7,	// (0x00046d2a) sc_clock_pane

0xa6c7,	// (0x00046d2a) main_fs_bigclock_pane

0x8be5,	// (0x00045248) blid2_tripm_pane_t4_ParamLimits

0x8be5,	// (0x00045248) blid2_tripm_pane_t4

0x950a,	// (0x00045b6d) sc_clock_pane_g1_ParamLimits

0x950a,	// (0x00045b6d) sc_clock_pane_g1

0x9518,	// (0x00045b7b) sc_clock_pane_t1_ParamLimits

0x9518,	// (0x00045b7b) sc_clock_pane_t1

0x952b,	// (0x00045b8e) sc_clock_pane_t2_ParamLimits

0x952b,	// (0x00045b8e) sc_clock_pane_t2

0x953d,	// (0x00045ba0) sc_clock_pane_t3_ParamLimits

0x953d,	// (0x00045ba0) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0004c2cc) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0004c2cc) sc_clock_pane_t

0x9df5,	// (0x00046458) main_fs_bigclock_indicator_pane_ParamLimits

0x9df5,	// (0x00046458) main_fs_bigclock_indicator_pane

0x95d8,	// (0x00045c3b) main_fs_bigclock_pane_g1_ParamLimits

0x95d8,	// (0x00045c3b) main_fs_bigclock_pane_g1

0x9e01,	// (0x00046464) main_fs_bigclock_pane_t1_ParamLimits

0x9e01,	// (0x00046464) main_fs_bigclock_pane_t1

0x9e13,	// (0x00046476) main_fs_bigclock_pane_t2_ParamLimits

0x9e13,	// (0x00046476) main_fs_bigclock_pane_t2

0x9e27,	// (0x0004648a) main_fs_bigclock_pane_t3_ParamLimits

0x9e27,	// (0x0004648a) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0004c4d6) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004c4d6) main_fs_bigclock_pane_t

0x0156,	// (0x0003c7b9) main_fs_bigclock_indicator_pane_g1

0xe6ec,	// (0x0004ad4f) ncim_query_content_pane_g2_ParamLimits

0xe6ec,	// (0x0004ad4f) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0004c259) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0004c259) ncim_query_content_pane_g

0x9551,	// (0x00045bb4) sc_clock_pane_t4_ParamLimits

0x9551,	// (0x00045bb4) sc_clock_pane_t4

0xb56d,	// (0x00047bd0) main_radioblah_pane

0xdc12,	// (0x0004a275) cell_call4_button_pane_t1_copy1_ParamLimits

0xdc12,	// (0x0004a275) cell_call4_button_pane_t1_copy1

0x91d8,	// (0x0004583b) main_ncimui_pane_t1_ParamLimits

0x91d8,	// (0x0004583b) main_ncimui_pane_t1

0x91f2,	// (0x00045855) main_ncimui_pane_t2_ParamLimits

0x91f2,	// (0x00045855) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0004c252) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0004c252) main_ncimui_pane_t

0xeb5e,	// (0x0004b1c1) main_radioblah_anim_pane_ParamLimits

0xeb5e,	// (0x0004b1c1) main_radioblah_anim_pane

0xeb6f,	// (0x0004b1d2) main_radioblah_info_pane_ParamLimits

0xeb6f,	// (0x0004b1d2) main_radioblah_info_pane

0xeb83,	// (0x0004b1e6) main_radioblah_pane_t1_ParamLimits

0xeb83,	// (0x0004b1e6) main_radioblah_pane_t1

0xeb9f,	// (0x0004b202) main_radioblah_pane_t2_ParamLimits

0xeb9f,	// (0x0004b202) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0004c2ed) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0004c2ed) main_radioblah_pane_t

0x962a,	// (0x00045c8d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x962a,	// (0x00045c8d) main_radioblah_rocker_ctrl_pane

0xebe7,	// (0x0004b24a) main_radioblah_info_pane_t1_ParamLimits

0xebe7,	// (0x0004b24a) main_radioblah_info_pane_t1

0x966f,	// (0x00045cd2) main_radioblah_info_pane_t2_ParamLimits

0x966f,	// (0x00045cd2) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0004c2f6) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0004c2f6) main_radioblah_info_pane_t

0xd252,	// (0x000498b5) main_radioblah_rocker_ctrl_pane_g1

0x971f,	// (0x00045d82) main_radioblah_rocker_ctrl_pane_g2

0x9727,	// (0x00045d8a) main_radioblah_rocker_ctrl_pane_g3

0x972f,	// (0x00045d92) main_radioblah_rocker_ctrl_pane_g4

0x9737,	// (0x00045d9a) main_radioblah_rocker_ctrl_pane_g5

0x973f,	// (0x00045da2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0004c2ff) main_radioblah_rocker_ctrl_pane_g

0x917f,	// (0x000457e2) main_cset_text2_pane_t1_copy1_ParamLimits

0x79e0,	// (0x00044043) cam4_image_uncrop_qvga_pane

0x7b27,	// (0x0004418a) vid4_image_uncrop_qcif_pane

0x8d73,	// (0x000453d6) cam6_image_uncrop_qvga_pane_ParamLimits

0x8d73,	// (0x000453d6) cam6_image_uncrop_qvga_pane

0xe401,	// (0x0004aa64) vid6_image_uncrop_qcif_pane_ParamLimits

0xe401,	// (0x0004aa64) vid6_image_uncrop_qcif_pane

0xa6c7,	// (0x00046d2a) bg_popup_preview_window_pane_cp03

0xe69e,	// (0x0004ad01) list_cset_text2_pane

0xe6a6,	// (0x0004ad09) main_cset6_text2_pane_g1

0xe6ae,	// (0x0004ad11) main_cset6_text2_pane_t1

0x9747,	// (0x00045daa) list_cset_text2_pane_t1_ParamLimits

0x9747,	// (0x00045daa) list_cset_text2_pane_t1

0xb56d,	// (0x00047bd0) main_radioblah_pane_ParamLimits

0x94b0,	// (0x00045b13) main_mobtv_info_pane_t3_ParamLimits

0x94b0,	// (0x00045b13) main_mobtv_info_pane_t3

0x9618,	// (0x00045c7b) main_radioblah_pane_g1

0x9643,	// (0x00045ca6) main_radioblah_info_pane_g1

0x96c4,	// (0x00045d27) main_radioblah_info_pane_t3_ParamLimits

0x96c4,	// (0x00045d27) main_radioblah_info_pane_t3

0x49ee,	// (0x00041051) highlight_cell_cale_month_pane_ParamLimits

0x49ee,	// (0x00041051) highlight_cell_cale_month_pane

0xa6c7,	// (0x00046d2a) main_phob_fisheye_pane

0xd5bd,	// (0x00049c20) scroll_pane_cp0031_ParamLimits

0xd5bd,	// (0x00049c20) scroll_pane_cp0031

0xe50f,	// (0x0004ab72) wait_bar_pane_cp08_ParamLimits

0x8f48,	// (0x000455ab) cset_list_set_pane_copy1_ParamLimits

0xec21,	// (0x0004b284) highlight_cell_cale_month_pane_g1

0x9764,	// (0x00045dc7) highlight_cell_cale_month_pane_t1

0xe1a9,	// (0x0004a80c) list_gen_pane_cp01

0xddf7,	// (0x0004a45a) scroll_pane_01

0x9772,	// (0x00045dd5) list_single_double_fisheye_pane

0x1c9a,	// (0x0003e2fd) list_double_fisheye_pane_g1_ParamLimits

0x1c9a,	// (0x0003e2fd) list_double_fisheye_pane_g1

0x1ca6,	// (0x0003e309) list_double_fisheye_pane_g2_ParamLimits

0x1ca6,	// (0x0003e309) list_double_fisheye_pane_g2

0x977b,	// (0x00045dde) list_double_fisheye_pane_g3_ParamLimits

0x977b,	// (0x00045dde) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0004c30c) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0004c30c) list_double_fisheye_pane_g

0x1cd7,	// (0x0003e33a) list_double_fisheye_pane_t1_ParamLimits

0x1cd7,	// (0x0003e33a) list_double_fisheye_pane_t1

0x1cf2,	// (0x0003e355) list_double_fisheye_pane_t2_ParamLimits

0x1cf2,	// (0x0003e355) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0004c317) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0004c317) list_double_fisheye_pane_t

0xa6c7,	// (0x00046d2a) main_call5_pane

0x9577,	// (0x00045bda) sc_swipe_pane_ParamLimits

0x9577,	// (0x00045bda) sc_swipe_pane

0x9793,	// (0x00045df6) call5_image_pane_ParamLimits

0x9793,	// (0x00045df6) call5_image_pane

0x97a3,	// (0x00045e06) call5_swipe_1_pane_ParamLimits

0x97a3,	// (0x00045e06) call5_swipe_1_pane

0x97af,	// (0x00045e12) call5_swipe_2_pane_ParamLimits

0x97af,	// (0x00045e12) call5_swipe_2_pane

0x97c9,	// (0x00045e2c) popup_call5_audio_first_window_ParamLimits

0x97c9,	// (0x00045e2c) popup_call5_audio_first_window

0xd4b5,	// (0x00049b18) call5_swipe_1_pane_g1_ParamLimits

0xd4b5,	// (0x00049b18) call5_swipe_1_pane_g1

0xec29,	// (0x0004b28c) call5_swipe_1_pane_g2_ParamLimits

0xec29,	// (0x0004b28c) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0004c31c) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0004c31c) call5_swipe_1_pane_g

0xec35,	// (0x0004b298) call5_swipe_1_pane_t1_ParamLimits

0xec35,	// (0x0004b298) call5_swipe_1_pane_t1

0xd4b5,	// (0x00049b18) call5_swipe_2_pane_g1_ParamLimits

0xd4b5,	// (0x00049b18) call5_swipe_2_pane_g1

0xec4a,	// (0x0004b2ad) call5_swipe_2_pane_g2_ParamLimits

0xec4a,	// (0x0004b2ad) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0004c321) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0004c321) call5_swipe_2_pane_g

0xec56,	// (0x0004b2b9) call5_swipe_2_pane_t1_ParamLimits

0xec56,	// (0x0004b2b9) call5_swipe_2_pane_t1

0xec6b,	// (0x0004b2ce) sc_swipe_pane_g1_ParamLimits

0xec6b,	// (0x0004b2ce) sc_swipe_pane_g1

0xec78,	// (0x0004b2db) sc_swipe_pane_g2_ParamLimits

0xec78,	// (0x0004b2db) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0004c326) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0004c326) sc_swipe_pane_g

0xec84,	// (0x0004b2e7) sc_swipe_pane_t1_ParamLimits

0xec84,	// (0x0004b2e7) sc_swipe_pane_t1

0xa6c7,	// (0x00046d2a) main_cmail_launcher_pane

0x97d7,	// (0x00045e3a) aid_size_cell_cmail_l_ParamLimits

0x97d7,	// (0x00045e3a) aid_size_cell_cmail_l

0x97e7,	// (0x00045e4a) grid_cmail_l_pane_ParamLimits

0x97e7,	// (0x00045e4a) grid_cmail_l_pane

0x97f7,	// (0x00045e5a) cell_cmail_l_pane_ParamLimits

0x97f7,	// (0x00045e5a) cell_cmail_l_pane

0x980b,	// (0x00045e6e) cell_cmail_l_pane_g1_ParamLimits

0x980b,	// (0x00045e6e) cell_cmail_l_pane_g1

0x9817,	// (0x00045e7a) cell_cmail_l_pane_t1_ParamLimits

0x9817,	// (0x00045e7a) cell_cmail_l_pane_t1

0xec99,	// (0x0004b2fc) cell_cmail_l_pane_t2_ParamLimits

0xec99,	// (0x0004b2fc) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0004c32b) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0004c32b) cell_cmail_l_pane_t

0xb56d,	// (0x00047bd0) grid_highlight_pane_cp018_ParamLimits

0xb56d,	// (0x00047bd0) grid_highlight_pane_cp018

0x2964,	// (0x0003efc7) main2_pane_ParamLimits

0x2964,	// (0x0003efc7) main2_pane

0xaeab,	// (0x0004750e) popup_sp_fs_action_menu_bg_pane_g1

0xaeb3,	// (0x00047516) popup_sp_fs_action_menu_bg_pane_g2

0xaebb,	// (0x0004751e) popup_sp_fs_action_menu_bg_pane_g3

0xaec3,	// (0x00047526) popup_sp_fs_action_menu_bg_pane_g4

0xaecb,	// (0x0004752e) popup_sp_fs_action_menu_bg_pane_g5

0xaed3,	// (0x00047536) popup_sp_fs_action_menu_bg_pane_g6

0xaedb,	// (0x0004753e) popup_sp_fs_action_menu_bg_pane_g7

0xaee3,	// (0x00047546) popup_sp_fs_action_menu_bg_pane_g8

0xaeeb,	// (0x0004754e) popup_sp_fs_action_menu_bg_pane_g9

0xaef3,	// (0x00047556) popup_sp_fs_action_menu_bg_pane_g10

0xaef3,	// (0x00047556) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0004b7f0) popup_sp_fs_action_menu_bg_pane_g

0x1478,	// (0x0003dadb) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1478,	// (0x0003dadb) list_medium_line_x2_t3_g3_g1

0x1484,	// (0x0003dae7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1484,	// (0x0003dae7) list_medium_line_x2_t3_g3_g2

0x1490,	// (0x0003daf3) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1490,	// (0x0003daf3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0004b8a0) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0004b8a0) list_medium_line_x2_t3_g3_g

0x149c,	// (0x0003daff) list_medium_line_x2_t3_g3_t1_ParamLimits

0x149c,	// (0x0003daff) list_medium_line_x2_t3_g3_t1

0x14b1,	// (0x0003db14) list_medium_line_x2_t3_g3_t2_ParamLimits

0x14b1,	// (0x0003db14) list_medium_line_x2_t3_g3_t2

0x14c3,	// (0x0003db26) list_medium_line_x2_t3_g3_t3_ParamLimits

0x14c3,	// (0x0003db26) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0004b8a7) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0004b8a7) list_medium_line_x2_t3_g3_t

0x1478,	// (0x0003dadb) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1478,	// (0x0003dadb) list_medium_line_x2_t3_g2_g1

0x1490,	// (0x0003daf3) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1490,	// (0x0003daf3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0004b8ae) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0004b8ae) list_medium_line_x2_t3_g2_g

0x14d8,	// (0x0003db3b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x14d8,	// (0x0003db3b) list_medium_line_x2_t3_g2_t1

0x14ee,	// (0x0003db51) list_medium_line_x2_t3_g2_t2_ParamLimits

0x14ee,	// (0x0003db51) list_medium_line_x2_t3_g2_t2

0x1500,	// (0x0003db63) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1500,	// (0x0003db63) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0004b8b3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0004b8b3) list_medium_line_x2_t3_g2_t

0x1478,	// (0x0003dadb) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1478,	// (0x0003dadb) list_medium_line_x2_t4_g4_g1

0x151d,	// (0x0003db80) list_medium_line_x2_t4_g4_g2_ParamLimits

0x151d,	// (0x0003db80) list_medium_line_x2_t4_g4_g2

0x1484,	// (0x0003dae7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1484,	// (0x0003dae7) list_medium_line_x2_t4_g4_g3

0x1529,	// (0x0003db8c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1529,	// (0x0003db8c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0004b8ba) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0004b8ba) list_medium_line_x2_t4_g4_g

0x1535,	// (0x0003db98) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1535,	// (0x0003db98) list_medium_line_x2_t4_g4_t1

0x154c,	// (0x0003dbaf) list_medium_line_x2_t4_g4_t2_ParamLimits

0x154c,	// (0x0003dbaf) list_medium_line_x2_t4_g4_t2

0x1561,	// (0x0003dbc4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1561,	// (0x0003dbc4) list_medium_line_x2_t4_g4_t3

0x1573,	// (0x0003dbd6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1573,	// (0x0003dbd6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0004b8c3) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0004b8c3) list_medium_line_x2_t4_g4_t

0x1478,	// (0x0003dadb) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1478,	// (0x0003dadb) list_medium_line_x2_t2_g4_g1

0x151d,	// (0x0003db80) list_medium_line_x2_t2_g4_g2_ParamLimits

0x151d,	// (0x0003db80) list_medium_line_x2_t2_g4_g2

0x1484,	// (0x0003dae7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1484,	// (0x0003dae7) list_medium_line_x2_t2_g4_g3

0x1490,	// (0x0003daf3) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1490,	// (0x0003daf3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0004b92a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0004b92a) list_medium_line_x2_t2_g4_g

0x1585,	// (0x0003dbe8) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1585,	// (0x0003dbe8) list_medium_line_x2_t2_g4_t1

0x14c3,	// (0x0003db26) list_medium_line_x2_t2_g4_t2_ParamLimits

0x14c3,	// (0x0003db26) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0004b933) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0004b933) list_medium_line_x2_t2_g4_t

0x1478,	// (0x0003dadb) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1478,	// (0x0003dadb) list_medium_line_x2_t2_g3_g1

0x1484,	// (0x0003dae7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1484,	// (0x0003dae7) list_medium_line_x2_t2_g3_g2

0x1490,	// (0x0003daf3) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1490,	// (0x0003daf3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0004b8a0) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0004b8a0) list_medium_line_x2_t2_g3_g

0x159a,	// (0x0003dbfd) list_medium_line_x2_t2_g3_t1_ParamLimits

0x159a,	// (0x0003dbfd) list_medium_line_x2_t2_g3_t1

0x14c3,	// (0x0003db26) list_medium_line_x2_t2_g3_t2_ParamLimits

0x14c3,	// (0x0003db26) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0004b938) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0004b938) list_medium_line_x2_t2_g3_t

0x4bba,	// (0x0004121d) main_sp_fs_list_pane_ParamLimits

0x4bba,	// (0x0004121d) main_sp_fs_list_pane

0x4bc6,	// (0x00041229) sp_fs_scroll_pane_ParamLimits

0x4bc6,	// (0x00041229) sp_fs_scroll_pane

0x15af,	// (0x0003dc12) list_medium_line_x2_t3_t1

0x15bf,	// (0x0003dc22) list_medium_line_x2_t3_t2

0x15cd,	// (0x0003dc30) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0004b983) list_medium_line_x2_t3_t

0x15db,	// (0x0003dc3e) list_medium_line_x3_t4_t1

0x15eb,	// (0x0003dc4e) list_medium_line_x3_t4_t2

0x15f9,	// (0x0003dc5c) list_medium_line_x3_t4_t3

0x15cd,	// (0x0003dc30) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0004b98a) list_medium_line_x3_t4_t

0x1607,	// (0x0003dc6a) list_medium_line_x4_t5_t1

0x1617,	// (0x0003dc7a) list_medium_line_x4_t5_t2

0x15f9,	// (0x0003dc5c) list_medium_line_x4_t5_t3

0x1625,	// (0x0003dc88) list_medium_line_x4_t5_t4

0x15cd,	// (0x0003dc30) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0004b993) list_medium_line_x4_t5_t

0x1478,	// (0x0003dadb) list_medium_line_t4_g4_g1_ParamLimits

0x1478,	// (0x0003dadb) list_medium_line_t4_g4_g1

0x1529,	// (0x0003db8c) list_medium_line_t4_g4_g2_ParamLimits

0x1529,	// (0x0003db8c) list_medium_line_t4_g4_g2

0x1633,	// (0x0003dc96) list_medium_line_t4_g4_g3_ParamLimits

0x1633,	// (0x0003dc96) list_medium_line_t4_g4_g3

0x1490,	// (0x0003daf3) list_medium_line_t4_g4_g4_ParamLimits

0x1490,	// (0x0003daf3) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0004b99e) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0004b99e) list_medium_line_t4_g4_g

0x163f,	// (0x0003dca2) list_medium_line_t4_g4_t1_ParamLimits

0x163f,	// (0x0003dca2) list_medium_line_t4_g4_t1

0x1654,	// (0x0003dcb7) list_medium_line_t4_g4_t2_ParamLimits

0x1654,	// (0x0003dcb7) list_medium_line_t4_g4_t2

0x1669,	// (0x0003dccc) list_medium_line_t4_g4_t3_ParamLimits

0x1669,	// (0x0003dccc) list_medium_line_t4_g4_t3

0x14c3,	// (0x0003db26) list_medium_line_t4_g4_t4_ParamLimits

0x14c3,	// (0x0003db26) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0004b9a7) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0004b9a7) list_medium_line_t4_g4_t

0x4cd3,	// (0x00041336) chi_dic_find_pane_g1

0x5b4b,	// (0x000421ae) main_tport_pane

0x191d,	// (0x0003df80) list_medium_line_plain_t1

0x192b,	// (0x0003df8e) list_medium_line_t2_g2_g1_ParamLimits

0x192b,	// (0x0003df8e) list_medium_line_t2_g2_g1

0x1937,	// (0x0003df9a) list_medium_line_t2_g2_g2_ParamLimits

0x1937,	// (0x0003df9a) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004c063) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004c063) list_medium_line_t2_g2_g

0x1943,	// (0x0003dfa6) list_medium_line_t2_g2_t1_ParamLimits

0x1943,	// (0x0003dfa6) list_medium_line_t2_g2_t1

0x195a,	// (0x0003dfbd) list_medium_line_t2_g2_t2_ParamLimits

0x195a,	// (0x0003dfbd) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004c068) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004c068) list_medium_line_t2_g2_t

0x1b79,	// (0x0003e1dc) aid_sp_fs_list_icon_a_sm

0x1b81,	// (0x0003e1e4) aid_sp_fs_list_icon_d

0x1b89,	// (0x0003e1ec) aid_sp_fs_text_primary

0x1b92,	// (0x0003e1f5) aid_sp_fs_text_secondary

0x8a4d,	// (0x000450b0) list_medium_line

0x8a4d,	// (0x000450b0) list_medium_line_g2

0x8a4d,	// (0x000450b0) list_medium_line_g3

0x8a4d,	// (0x000450b0) list_medium_line_plain

0x8a4d,	// (0x000450b0) list_medium_line_plain_t2

0x8a4d,	// (0x000450b0) list_medium_line_plain_t3

0x8a4d,	// (0x000450b0) list_medium_line_right_icon

0x8a4d,	// (0x000450b0) list_medium_line_right_iconx2

0x8a4d,	// (0x000450b0) list_medium_line_t2

0x8a4d,	// (0x000450b0) list_medium_line_t2_g2

0x8a4d,	// (0x000450b0) list_medium_line_t2_g3

0x8a4d,	// (0x000450b0) list_medium_line_t2_right_icon

0x8a4d,	// (0x000450b0) list_medium_line_t2_right_iconx2

0x8a4d,	// (0x000450b0) list_medium_line_t3

0x8a4d,	// (0x000450b0) list_medium_line_t3_g2

0x8a4d,	// (0x000450b0) list_medium_line_t3_g3

0x8a4d,	// (0x000450b0) list_medium_line_t3_right_iconx2

0x1b9b,	// (0x0003e1fe) list_medium_line_t4_g4

0x8a56,	// (0x000450b9) list_medium_line_x2

0x8a56,	// (0x000450b9) list_medium_line_x2_t2_g2

0x8a56,	// (0x000450b9) list_medium_line_x2_t2_g3

0x8a56,	// (0x000450b9) list_medium_line_x2_t2_g4

0x8a56,	// (0x000450b9) list_medium_line_x2_t3

0x8a56,	// (0x000450b9) list_medium_line_x2_t3_g2

0x8a56,	// (0x000450b9) list_medium_line_x2_t3_g3

0x8a56,	// (0x000450b9) list_medium_line_x2_t3_g4

0x8a56,	// (0x000450b9) list_medium_line_x2_t4_g2

0x8a56,	// (0x000450b9) list_medium_line_x2_t4_g4

0x1ba4,	// (0x0003e207) list_medium_line_x3

0x1ba4,	// (0x0003e207) list_medium_line_x3_t4

0x1ba4,	// (0x0003e207) list_medium_line_x3_t4_g4

0x1b9b,	// (0x0003e1fe) list_medium_line_x4_t4

0x1b9b,	// (0x0003e1fe) list_medium_line_x4_t4_g7

0x1b9b,	// (0x0003e1fe) list_medium_line_x4_t5

0x1bad,	// (0x0003e210) list_single_fs_dyc_pane_ParamLimits

0x1bad,	// (0x0003e210) list_single_fs_dyc_pane

0x1478,	// (0x0003dadb) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1478,	// (0x0003dadb) list_medium_line_x4_t4_g7_g1

0x1bc9,	// (0x0003e22c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1bc9,	// (0x0003e22c) list_medium_line_x4_t4_g7_g2

0x1bd5,	// (0x0003e238) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1bd5,	// (0x0003e238) list_medium_line_x4_t4_g7_g3

0x1be4,	// (0x0003e247) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1be4,	// (0x0003e247) list_medium_line_x4_t4_g7_g4

0x1bf0,	// (0x0003e253) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1bf0,	// (0x0003e253) list_medium_line_x4_t4_g7_g5

0x1bff,	// (0x0003e262) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1bff,	// (0x0003e262) list_medium_line_x4_t4_g7_g6

0x1c0e,	// (0x0003e271) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1c0e,	// (0x0003e271) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0004c233) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0004c233) list_medium_line_x4_t4_g7_g

0x1c1a,	// (0x0003e27d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1c1a,	// (0x0003e27d) list_medium_line_x4_t4_g7_t1

0x1c2f,	// (0x0003e292) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1c2f,	// (0x0003e292) list_medium_line_x4_t4_g7_t2

0x1c44,	// (0x0003e2a7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1c44,	// (0x0003e2a7) list_medium_line_x4_t4_g7_t3

0x1c59,	// (0x0003e2bc) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1c59,	// (0x0003e2bc) list_medium_line_x4_t4_g7_t4

0x1c6b,	// (0x0003e2ce) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1c6b,	// (0x0003e2ce) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0004c242) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0004c242) list_medium_line_x4_t4_g7_t

0x1c7d,	// (0x0003e2e0) list_single_dyc_row_pane_ParamLimits

0x1c7d,	// (0x0003e2e0) list_single_dyc_row_pane

0x9787,	// (0x00045dea) call5_gesture_pane_ParamLimits

0x9787,	// (0x00045dea) call5_gesture_pane

0x97bb,	// (0x00045e1e) call5_windows_pane_ParamLimits

0x97bb,	// (0x00045e1e) call5_windows_pane

0x982d,	// (0x00045e90) call5_swipe_1_pane_cp_ParamLimits

0x982d,	// (0x00045e90) call5_swipe_1_pane_cp

0x9839,	// (0x00045e9c) call5_swipe_2_pane_cp_ParamLimits

0x9839,	// (0x00045e9c) call5_swipe_2_pane_cp

0xba52,	// (0x000480b5) call5_image_pane_cp

0x9845,	// (0x00045ea8) popup_call5_audio_first_window_cp_ParamLimits

0x9845,	// (0x00045ea8) popup_call5_audio_first_window_cp

0xec6b,	// (0x0004b2ce) call5_swipe_1_pane_g1_cp_ParamLimits

0xec6b,	// (0x0004b2ce) call5_swipe_1_pane_g1_cp

0xecab,	// (0x0004b30e) call5_swipe_1_pane_g2_cp

0xec84,	// (0x0004b2e7) call5_swipe_1_pane_t1_cp_ParamLimits

0xec84,	// (0x0004b2e7) call5_swipe_1_pane_t1_cp

0xec6b,	// (0x0004b2ce) call5_swipe_2_pane_g1_cp_ParamLimits

0xec6b,	// (0x0004b2ce) call5_swipe_2_pane_g1_cp

0xecb3,	// (0x0004b316) call5_swipe_2_pane_g2_cp

0xecbb,	// (0x0004b31e) call5_swipe_2_pane_t1_cp_ParamLimits

0xecbb,	// (0x0004b31e) call5_swipe_2_pane_t1_cp

0xb56d,	// (0x00047bd0) main_sp_fs_email_pane

0xecd0,	// (0x0004b333) main_sp_fs_listscroll_pane_te

0x1d14,	// (0x0003e377) popup_sp_fs_action_menu_pane_ParamLimits

0x1d14,	// (0x0003e377) popup_sp_fs_action_menu_pane

0xd252,	// (0x000498b5) bg_sp_fs_ctrlbar_pane_g1

0xd834,	// (0x00049e97) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd846,	// (0x00049ea9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd83d,	// (0x00049ea0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd252,	// (0x000498b5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0004c330) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd02e,	// (0x00049691) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd02e,	// (0x00049691) bg_sp_fs_ctrlbar_ddmenu_pane

0xecd9,	// (0x0004b33c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xecd9,	// (0x0004b33c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xece5,	// (0x0004b348) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xece5,	// (0x0004b348) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0004c339) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0004c339) main_sp_fs_ctrlbar_ddmenu_pane_g

0xecf1,	// (0x0004b354) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xecf1,	// (0x0004b354) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1d56,	// (0x0003e3b9) list_medium_line_t2_right_icon_g1

0x1d5e,	// (0x0003e3c1) list_medium_line_t2_right_icon_t1

0x1d6e,	// (0x0003e3d1) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0004c33e) list_medium_line_t2_right_icon_t

0xce41,	// (0x000494a4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xce41,	// (0x000494a4) bg_sp_fs_ctrlbar_pane

0x98aa,	// (0x00045f0d) main_sp_fs_ctrlbar_button_pane_cp01

0x98b2,	// (0x00045f15) main_sp_fs_ctrlbar_ddmenu_pane

0xed43,	// (0x0004b3a6) main_sp_fs_ctrlbar_pane_g1

0xed4f,	// (0x0004b3b2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0004c343) main_sp_fs_ctrlbar_pane_g

0xed5b,	// (0x0004b3be) main_sp_fs_ctrlbar_pane_t1

0x98bc,	// (0x00045f1f) main_sp_fs_ctrlbar_pane

0x98d2,	// (0x00045f35) main_sp_fs_listscroll_pane_te_cp01

0x1d7c,	// (0x0003e3df) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1d7c,	// (0x0003e3df) popup_sp_fs_action_menu_pane_cp01

0xb56d,	// (0x00047bd0) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb56d,	// (0x00047bd0) bg_sp_fs_highlight_list_pane_cp01

0x1da6,	// (0x0003e409) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1da6,	// (0x0003e409) sp_fs_action_menu_list_gene_pane_g1

0xed8b,	// (0x0004b3ee) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xed8b,	// (0x0004b3ee) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0004c34d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0004c34d) sp_fs_action_menu_list_gene_pane_g

0x1db5,	// (0x0003e418) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1db5,	// (0x0003e418) sp_fs_action_menu_list_gene_pane_t1

0x1dcd,	// (0x0003e430) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1dcd,	// (0x0003e430) sp_fs_action_menu_list_gene_pane

0xed98,	// (0x0004b3fb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xed98,	// (0x0004b3fb) popup_sp_fs_action_menu_bg_pane

0x1dec,	// (0x0003e44f) sp_fs_action_menu_list_pane_ParamLimits

0x1dec,	// (0x0003e44f) sp_fs_action_menu_list_pane

0x1e0c,	// (0x0003e46f) sp_fs_scroll_pane_cp01_ParamLimits

0x1e0c,	// (0x0003e46f) sp_fs_scroll_pane_cp01

0x1e32,	// (0x0003e495) list_medium_line_plain_t2_t1

0x1e42,	// (0x0003e4a5) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0004c352) list_medium_line_plain_t2_t

0x1e50,	// (0x0003e4b3) list_medium_line_plain_t3_t1

0x1e60,	// (0x0003e4c3) list_medium_line_plain_t3_t2

0x1e6e,	// (0x0003e4d1) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0004c357) list_medium_line_plain_t3_t

0x1478,	// (0x0003dadb) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1478,	// (0x0003dadb) list_medium_line_x2_t2_g2_g1

0x1490,	// (0x0003daf3) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1490,	// (0x0003daf3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0004b8ae) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0004b8ae) list_medium_line_x2_t2_g2_g

0x163f,	// (0x0003dca2) list_medium_line_x2_t2_g2_t1_ParamLimits

0x163f,	// (0x0003dca2) list_medium_line_x2_t2_g2_t1

0x14c3,	// (0x0003db26) list_medium_line_x2_t2_g2_t2_ParamLimits

0x14c3,	// (0x0003db26) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0004c35e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0004c35e) list_medium_line_x2_t2_g2_t

0x1478,	// (0x0003dadb) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1478,	// (0x0003dadb) list_medium_line_x2_t4_g2_g1

0x1e7c,	// (0x0003e4df) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1e7c,	// (0x0003e4df) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0004c363) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0004c363) list_medium_line_x2_t4_g2_g

0x1e8d,	// (0x0003e4f0) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1e8d,	// (0x0003e4f0) list_medium_line_x2_t4_g2_t1

0x1ea7,	// (0x0003e50a) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1ea7,	// (0x0003e50a) list_medium_line_x2_t4_g2_t2

0x1ebc,	// (0x0003e51f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1ebc,	// (0x0003e51f) list_medium_line_x2_t4_g2_t3

0x14c3,	// (0x0003db26) list_medium_line_x2_t4_g2_t4_ParamLimits

0x14c3,	// (0x0003db26) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0004c368) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0004c368) list_medium_line_x2_t4_g2_t

0x1ed1,	// (0x0003e534) list_medium_line_t3_right_iconx2_g1

0x1d56,	// (0x0003e3b9) list_medium_line_t3_right_iconx2_g2

0x1ed9,	// (0x0003e53c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0004c371) list_medium_line_t3_right_iconx2_g

0x1ee1,	// (0x0003e544) list_medium_line_t3_right_iconx2_t1

0x1ef1,	// (0x0003e554) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0004c378) list_medium_line_t3_right_iconx2_t

0x1478,	// (0x0003dadb) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1478,	// (0x0003dadb) list_medium_line_x3_t4_g4_g1

0x1484,	// (0x0003dae7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1484,	// (0x0003dae7) list_medium_line_x3_t4_g4_g2

0x1529,	// (0x0003db8c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1529,	// (0x0003db8c) list_medium_line_x3_t4_g4_g3

0x1eff,	// (0x0003e562) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1eff,	// (0x0003e562) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0004c37d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0004c37d) list_medium_line_x3_t4_g4_g

0x1f0b,	// (0x0003e56e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1f0b,	// (0x0003e56e) list_medium_line_x3_t4_g4_t1

0x1f22,	// (0x0003e585) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1f22,	// (0x0003e585) list_medium_line_x3_t4_g4_t2

0x1654,	// (0x0003dcb7) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1654,	// (0x0003dcb7) list_medium_line_x3_t4_g4_t3

0x1f37,	// (0x0003e59a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1f37,	// (0x0003e59a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0004c386) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0004c386) list_medium_line_x3_t4_g4_t

0x1f54,	// (0x0003e5b7) list_single_dyc_row_text_pane_t1_ParamLimits

0x1f54,	// (0x0003e5b7) list_single_dyc_row_text_pane_t1

0x1f8b,	// (0x0003e5ee) list_single_dyc_row_text_pane_t2_ParamLimits

0x1f8b,	// (0x0003e5ee) list_single_dyc_row_text_pane_t2

0x2001,	// (0x0003e664) list_single_dyc_row_text_pane_t3_ParamLimits

0x2001,	// (0x0003e664) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0004c38f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0004c38f) list_single_dyc_row_text_pane_t

0x20d2,	// (0x0003e735) list_single_dyc_row_pane_g1_ParamLimits

0x20d2,	// (0x0003e735) list_single_dyc_row_pane_g1

0x20de,	// (0x0003e741) list_single_dyc_row_pane_g2_ParamLimits

0x20de,	// (0x0003e741) list_single_dyc_row_pane_g2

0x20ea,	// (0x0003e74d) list_single_dyc_row_pane_g3_ParamLimits

0x20ea,	// (0x0003e74d) list_single_dyc_row_pane_g3

0x20f6,	// (0x0003e759) list_single_dyc_row_pane_g4_ParamLimits

0x20f6,	// (0x0003e759) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0004c39c) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0004c39c) list_single_dyc_row_pane_g

0x2102,	// (0x0003e765) list_single_dyc_row_text_pane_ParamLimits

0x2102,	// (0x0003e765) list_single_dyc_row_text_pane

0xa6c7,	// (0x00046d2a) bg_sp_fs_scroll_pane

0xeda6,	// (0x0004b409) thumb_sp_fs_scroll_pane

0x192b,	// (0x0003df8e) list_medium_line_g1_ParamLimits

0x192b,	// (0x0003df8e) list_medium_line_g1

0x2121,	// (0x0003e784) list_medium_line_t1_ParamLimits

0x2121,	// (0x0003e784) list_medium_line_t1

0x1478,	// (0x0003dadb) list_medium_line_x2_g1_ParamLimits

0x1478,	// (0x0003dadb) list_medium_line_x2_g1

0x1484,	// (0x0003dae7) list_medium_line_x2_g2_ParamLimits

0x1484,	// (0x0003dae7) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0004c3a5) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0004c3a5) list_medium_line_x2_g

0x2136,	// (0x0003e799) list_medium_line_x2_t1_ParamLimits

0x2136,	// (0x0003e799) list_medium_line_x2_t1

0x1478,	// (0x0003dadb) list_medium_line_x3_g1_ParamLimits

0x1478,	// (0x0003dadb) list_medium_line_x3_g1

0x1484,	// (0x0003dae7) list_medium_line_x3_g2_ParamLimits

0x1484,	// (0x0003dae7) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0004c3a5) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0004c3a5) list_medium_line_x3_g

0x2136,	// (0x0003e799) list_medium_line_x3_t1_ParamLimits

0x2136,	// (0x0003e799) list_medium_line_x3_t1

0xedaf,	// (0x0004b412) thumb_sp_fs_scroll_pane_g1

0xedb8,	// (0x0004b41b) thumb_sp_fs_scroll_pane_g2

0xedc1,	// (0x0004b424) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004c3aa) thumb_sp_fs_scroll_pane_g

0xedaf,	// (0x0004b412) bg_sp_fs_scroll_pane_g1

0xedb8,	// (0x0004b41b) bg_sp_fs_scroll_pane_g2

0xedc1,	// (0x0004b424) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004c3aa) bg_sp_fs_scroll_pane_g

0x1478,	// (0x0003dadb) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1478,	// (0x0003dadb) list_medium_line_x2_t3_g4_g1

0x151d,	// (0x0003db80) list_medium_line_x2_t3_g4_g2_ParamLimits

0x151d,	// (0x0003db80) list_medium_line_x2_t3_g4_g2

0x1484,	// (0x0003dae7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1484,	// (0x0003dae7) list_medium_line_x2_t3_g4_g3

0x1490,	// (0x0003daf3) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1490,	// (0x0003daf3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0004b92a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0004b92a) list_medium_line_x2_t3_g4_g

0x214c,	// (0x0003e7af) list_medium_line_x2_t3_g4_t1_ParamLimits

0x214c,	// (0x0003e7af) list_medium_line_x2_t3_g4_t1

0x2162,	// (0x0003e7c5) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2162,	// (0x0003e7c5) list_medium_line_x2_t3_g4_t2

0x14c3,	// (0x0003db26) list_medium_line_x2_t3_g4_t3_ParamLimits

0x14c3,	// (0x0003db26) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0004c3b1) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0004c3b1) list_medium_line_x2_t3_g4_t

0x192b,	// (0x0003df8e) list_medium_line_g2_g1_ParamLimits

0x192b,	// (0x0003df8e) list_medium_line_g2_g1

0x1937,	// (0x0003df9a) list_medium_line_g2_g2_ParamLimits

0x1937,	// (0x0003df9a) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004c063) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004c063) list_medium_line_g2_g

0x217c,	// (0x0003e7df) list_medium_line_g2_t1_ParamLimits

0x217c,	// (0x0003e7df) list_medium_line_g2_t1

0x192b,	// (0x0003df8e) list_medium_line_t3_g2_g1_ParamLimits

0x192b,	// (0x0003df8e) list_medium_line_t3_g2_g1

0x1937,	// (0x0003df9a) list_medium_line_t3_g2_g2_ParamLimits

0x1937,	// (0x0003df9a) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004c063) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004c063) list_medium_line_t3_g2_g

0x2191,	// (0x0003e7f4) list_medium_line_t3_g2_t1_ParamLimits

0x2191,	// (0x0003e7f4) list_medium_line_t3_g2_t1

0x21ab,	// (0x0003e80e) list_medium_line_t3_g2_t2_ParamLimits

0x21ab,	// (0x0003e80e) list_medium_line_t3_g2_t2

0x21c0,	// (0x0003e823) list_medium_line_t3_g2_t3_ParamLimits

0x21c0,	// (0x0003e823) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0004c3b8) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0004c3b8) list_medium_line_t3_g2_t

0x1d56,	// (0x0003e3b9) list_medium_line_right_icon_g1

0x21d6,	// (0x0003e839) list_medium_line_right_icon_t1

0x192b,	// (0x0003df8e) list_medium_line_t2_g1_ParamLimits

0x192b,	// (0x0003df8e) list_medium_line_t2_g1

0x21e4,	// (0x0003e847) list_medium_line_t2_t1_ParamLimits

0x21e4,	// (0x0003e847) list_medium_line_t2_t1

0x21fe,	// (0x0003e861) list_medium_line_t2_t2_ParamLimits

0x21fe,	// (0x0003e861) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0004c3bf) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0004c3bf) list_medium_line_t2_t

0x192b,	// (0x0003df8e) list_medium_line_t3_g1_ParamLimits

0x192b,	// (0x0003df8e) list_medium_line_t3_g1

0x2213,	// (0x0003e876) list_medium_line_t3_t1_ParamLimits

0x2213,	// (0x0003e876) list_medium_line_t3_t1

0x222a,	// (0x0003e88d) list_medium_line_t3_t2_ParamLimits

0x222a,	// (0x0003e88d) list_medium_line_t3_t2

0x223f,	// (0x0003e8a2) list_medium_line_t3_t3_ParamLimits

0x223f,	// (0x0003e8a2) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0004c3c4) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0004c3c4) list_medium_line_t3_t

0x192b,	// (0x0003df8e) list_medium_line_g3_g1_ParamLimits

0x192b,	// (0x0003df8e) list_medium_line_g3_g1

0x2251,	// (0x0003e8b4) list_medium_line_g3_g2_ParamLimits

0x2251,	// (0x0003e8b4) list_medium_line_g3_g2

0x1937,	// (0x0003df9a) list_medium_line_g3_g3_ParamLimits

0x1937,	// (0x0003df9a) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0004c3cb) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0004c3cb) list_medium_line_g3_g

0x225d,	// (0x0003e8c0) list_medium_line_g3_t1_ParamLimits

0x225d,	// (0x0003e8c0) list_medium_line_g3_t1

0x192b,	// (0x0003df8e) list_medium_line_t2_g3_g1_ParamLimits

0x192b,	// (0x0003df8e) list_medium_line_t2_g3_g1

0x2251,	// (0x0003e8b4) list_medium_line_t2_g3_g2_ParamLimits

0x2251,	// (0x0003e8b4) list_medium_line_t2_g3_g2

0x1937,	// (0x0003df9a) list_medium_line_t2_g3_g3_ParamLimits

0x1937,	// (0x0003df9a) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0004c3cb) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0004c3cb) list_medium_line_t2_g3_g

0x2272,	// (0x0003e8d5) list_medium_line_t2_g3_t1_ParamLimits

0x2272,	// (0x0003e8d5) list_medium_line_t2_g3_t1

0x228c,	// (0x0003e8ef) list_medium_line_t2_g3_t2_ParamLimits

0x228c,	// (0x0003e8ef) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0004c3d2) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0004c3d2) list_medium_line_t2_g3_t

0x192b,	// (0x0003df8e) list_medium_line_t3_g3_g1_ParamLimits

0x192b,	// (0x0003df8e) list_medium_line_t3_g3_g1

0x2251,	// (0x0003e8b4) list_medium_line_t3_g3_g2_ParamLimits

0x2251,	// (0x0003e8b4) list_medium_line_t3_g3_g2

0x1937,	// (0x0003df9a) list_medium_line_t3_g3_g3_ParamLimits

0x1937,	// (0x0003df9a) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0004c3cb) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0004c3cb) list_medium_line_t3_g3_g

0x22a1,	// (0x0003e904) list_medium_line_t3_g3_t1_ParamLimits

0x22a1,	// (0x0003e904) list_medium_line_t3_g3_t1

0x22ba,	// (0x0003e91d) list_medium_line_t3_g3_t2_ParamLimits

0x22ba,	// (0x0003e91d) list_medium_line_t3_g3_t2

0x22d0,	// (0x0003e933) list_medium_line_t3_g3_t3_ParamLimits

0x22d0,	// (0x0003e933) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0004c3d7) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0004c3d7) list_medium_line_t3_g3_t

0x1ed1,	// (0x0003e534) list_medium_line_right_iconx2_g1

0x1d56,	// (0x0003e3b9) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004c3de) list_medium_line_right_iconx2_g

0x22e6,	// (0x0003e949) list_medium_line_right_iconx2_t1

0x1ed1,	// (0x0003e534) list_medium_line_t2_right_iconx2_g1

0x1d56,	// (0x0003e3b9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004c3de) list_medium_line_t2_right_iconx2_g

0x22f4,	// (0x0003e957) list_medium_line_t2_right_iconx2_t1

0x2304,	// (0x0003e967) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0004c3e3) list_medium_line_t2_right_iconx2_t

0x2312,	// (0x0003e975) list_medium_line_x4_t4_t1

0x2320,	// (0x0003e983) list_medium_line_x4_t4_t2

0x2330,	// (0x0003e993) list_medium_line_x4_t4_t3

0x2340,	// (0x0003e9a3) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0004c3e8) list_medium_line_x4_t4_t

0x990d,	// (0x00045f70) tport_appsw_pane_ParamLimits

0x990d,	// (0x00045f70) tport_appsw_pane

0x991b,	// (0x00045f7e) tport_contact_pane_ParamLimits

0x991b,	// (0x00045f7e) tport_contact_pane

0x992b,	// (0x00045f8e) tport_listscroll_pane_ParamLimits

0x992b,	// (0x00045f8e) tport_listscroll_pane

0x993b,	// (0x00045f9e) cell_tport_appsw_pane_ParamLimits

0x993b,	// (0x00045f9e) cell_tport_appsw_pane

0xd546,	// (0x00049ba9) tport_appsw_pane_g1_ParamLimits

0xd546,	// (0x00049ba9) tport_appsw_pane_g1

0xedca,	// (0x0004b42d) tport_contact_pane_g1

0xe772,	// (0x0004add5) tport_contact_pane_t1

0xedd3,	// (0x0004b436) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0004c3f1) tport_contact_pane_t

0xede1,	// (0x0004b444) list_tport_pane

0xedea,	// (0x0004b44d) scroll_pane_cp_030

0x996e,	// (0x00045fd1) cell_tport_appsw_pane_g1

0x997e,	// (0x00045fe1) cell_tport_appsw_pane_t1

0x998c,	// (0x00045fef) grid_highlight_pane_cp019

0x9994,	// (0x00045ff7) list_tport_double_graphic_pane_ParamLimits

0x9994,	// (0x00045ff7) list_tport_double_graphic_pane

0xb56d,	// (0x00047bd0) list_highlight_pane_cp023_ParamLimits

0xb56d,	// (0x00047bd0) list_highlight_pane_cp023

0x99a5,	// (0x00046008) list_tport_double_graphic_pane_g1_ParamLimits

0x99a5,	// (0x00046008) list_tport_double_graphic_pane_g1

0x99b2,	// (0x00046015) list_tport_double_graphic_pane_t1_ParamLimits

0x99b2,	// (0x00046015) list_tport_double_graphic_pane_t1

0x99c7,	// (0x0004602a) list_tport_double_graphic_pane_t2_ParamLimits

0x99c7,	// (0x0004602a) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0004c3fd) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0004c3fd) list_tport_double_graphic_pane_t

0xa6c7,	// (0x00046d2a) main_cale_note_pane

0x7d7e,	// (0x000443e1) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7d7e,	// (0x000443e1) cell_vitu2_function_top_wide_pane_cp01

0x94c4,	// (0x00045b27) wait_bar_pane_cp05_ParamLimits

0xb56d,	// (0x00047bd0) listscroll_cmail_pane

0xedf3,	// (0x0004b456) list_cmail_pane

0x99d9,	// (0x0004603c) list_cmail_body_pane

0x99f9,	// (0x0004605c) list_single_cmail_header_caption_pane

0x9a25,	// (0x00046088) list_single_cmail_header_detail_pane_ParamLimits

0x9a25,	// (0x00046088) list_single_cmail_header_detail_pane

0xee03,	// (0x0004b466) list_single_cmail_header_caption_pane_t1

0x2350,	// (0x0003e9b3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x2350,	// (0x0003e9b3) list_single_cmail_header_detail_pane_g1

0x2366,	// (0x0003e9c9) list_single_cmail_header_detail_pane_g2_ParamLimits

0x2366,	// (0x0003e9c9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0004c402) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0004c402) list_single_cmail_header_detail_pane_g

0x2372,	// (0x0003e9d5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2372,	// (0x0003e9d5) list_single_cmail_header_detail_pane_t1

0x23d2,	// (0x0003ea35) list_single_cmail_header_editor_pane_bg_ParamLimits

0x23d2,	// (0x0003ea35) list_single_cmail_header_editor_pane_bg

0xe913,	// (0x0004af76) list_cmail_body_pane_g1

0xee1e,	// (0x0004b481) list_cmail_body_pane_t1

0xdcdd,	// (0x0004a340) list_single_cmail_header_editor_pane_bg_g1

0xb229,	// (0x0004788c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdced,	// (0x0004a350) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdce5,	// (0x0004a348) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdf1c,	// (0x0004a57f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdd0d,	// (0x0004a370) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdcfd,	// (0x0004a360) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdd05,	// (0x0004a368) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb209,	// (0x0004786c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9a64,	// (0x000460c7) calenote_gesture_pane_ParamLimits

0x9a64,	// (0x000460c7) calenote_gesture_pane

0x9a7e,	// (0x000460e1) calenote_window_pane_ParamLimits

0x9a7e,	// (0x000460e1) calenote_window_pane

0xee2c,	// (0x0004b48f) popup_note_window_cp01

0x9a96,	// (0x000460f9) calenote_swipe_1_pane_ParamLimits

0x9a96,	// (0x000460f9) calenote_swipe_1_pane

0x9839,	// (0x00045e9c) calenote_swipe_2_pane_ParamLimits

0x9839,	// (0x00045e9c) calenote_swipe_2_pane

0xec6b,	// (0x0004b2ce) calenote_swipe_1_pane_g1_ParamLimits

0xec6b,	// (0x0004b2ce) calenote_swipe_1_pane_g1

0xec78,	// (0x0004b2db) calenote_swipe_1_pane_g2_ParamLimits

0xec78,	// (0x0004b2db) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0004c326) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0004c326) calenote_swipe_1_pane_g

0xee3e,	// (0x0004b4a1) calenote_swipe_1_pane_t1_ParamLimits

0xee3e,	// (0x0004b4a1) calenote_swipe_1_pane_t1

0xec6b,	// (0x0004b2ce) calenote_swipe_2_pane_g1_ParamLimits

0xec6b,	// (0x0004b2ce) calenote_swipe_2_pane_g1

0xee5d,	// (0x0004b4c0) calenote_swipe_2_pane_g2_ParamLimits

0xee5d,	// (0x0004b4c0) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0004c40e) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0004c40e) calenote_swipe_2_pane_g

0xee69,	// (0x0004b4cc) calenote_swipe_2_pane_t1_ParamLimits

0xee69,	// (0x0004b4cc) calenote_swipe_2_pane_t1

0xa6c7,	// (0x00046d2a) main_mup_navstr_pane

0x6b03,	// (0x00043166) main_mup3_pane_t7_ParamLimits

0x6b03,	// (0x00043166) main_mup3_pane_t7

0x7508,	// (0x00043b6b) main_mp4_pane_g6_ParamLimits

0x7508,	// (0x00043b6b) main_mp4_pane_g6

0x787a,	// (0x00043edd) main_image3_pane_t4_ParamLimits

0x787a,	// (0x00043edd) main_image3_pane_t4

0x9aa9,	// (0x0004610c) popup_navstr_preview_pane_ParamLimits

0x9aa9,	// (0x0004610c) popup_navstr_preview_pane

0x9ab5,	// (0x00046118) scroll_navstr_pane_ParamLimits

0x9ab5,	// (0x00046118) scroll_navstr_pane

0xa6c7,	// (0x00046d2a) bg_popup_preview_window_pane_cp04

0xee90,	// (0x0004b4f3) popup_navstr_preview_pane_t1

0x9ac1,	// (0x00046124) scroll_navstr_pane_g1_ParamLimits

0x9ac1,	// (0x00046124) scroll_navstr_pane_g1

0x9ace,	// (0x00046131) scroll_navstr_pane_t1_ParamLimits

0x9ace,	// (0x00046131) scroll_navstr_pane_t1

0xee35,	// (0x0004b498) bg_button_pane_cp014

0xee35,	// (0x0004b498) bg_button_pane_cp030

0x1cba,	// (0x0003e31d) list_double_fisheye_pane_g4_ParamLimits

0x1cba,	// (0x0003e31d) list_double_fisheye_pane_g4

0x1cc6,	// (0x0003e329) list_double_fisheye_pane_g5_ParamLimits

0x1cc6,	// (0x0003e329) list_double_fisheye_pane_g5

0xd53a,	// (0x00049b9d) sp_fs_scroll_pane_cp03

0xed43,	// (0x0004b3a6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xed4f,	// (0x0004b3b2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0004c343) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xed5b,	// (0x0004b3be) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xedfb,	// (0x0004b45e) sp_fs_scroll_pane_cp02

0xaf16,	// (0x00047579) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaf16,	// (0x00047579) popup_sp_fs_calendar_preview_list_single_pane

0xa6c7,	// (0x00046d2a) main_cam6_pano_pane

0xb56d,	// (0x00047bd0) main_mup3_pane_ParamLimits

0xa6c7,	// (0x00046d2a) main_phacti_pane

0x9399,	// (0x000459fc) bg_button_pane_cp11

0x93b1,	// (0x00045a14) main_mobtv_info_pane_g2_ParamLimits

0x93b1,	// (0x00045a14) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0004c2a3) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0004c2a3) main_mobtv_info_pane_g

0x9563,	// (0x00045bc6) sc_clock_pane_t5_ParamLimits

0x9563,	// (0x00045bc6) sc_clock_pane_t5

0x9618,	// (0x00045c7b) main_radioblah_pane_g1_ParamLimits

0xebb7,	// (0x0004b21a) main_radioblah_pane_t3_ParamLimits

0xebb7,	// (0x0004b21a) main_radioblah_pane_t3

0xebcf,	// (0x0004b232) main_radioblah_pane_t4_ParamLimits

0xebcf,	// (0x0004b232) main_radioblah_pane_t4

0x9636,	// (0x00045c99) main_radioblah_text_pane_ParamLimits

0x9636,	// (0x00045c99) main_radioblah_text_pane

0x9643,	// (0x00045ca6) main_radioblah_info_pane_g1_ParamLimits

0x96d8,	// (0x00045d3b) main_radioblah_info_pane_t4_ParamLimits

0x96d8,	// (0x00045d3b) main_radioblah_info_pane_t4

0xb56d,	// (0x00047bd0) main_sp_fs_calendar_pane

0x9ae0,	// (0x00046143) main_phacti_pane_g1

0x9ae8,	// (0x0004614b) phacti_note_pane_ParamLimits

0x9ae8,	// (0x0004614b) phacti_note_pane

0xeea7,	// (0x0004b50a) phacti_term_pane_ParamLimits

0xeea7,	// (0x0004b50a) phacti_term_pane

0xeebc,	// (0x0004b51f) phacti_note_pane_t1_ParamLimits

0xeebc,	// (0x0004b51f) phacti_note_pane_t1

0x23e9,	// (0x0003ea4c) phacti_term_pane_g1

0x23f1,	// (0x0003ea54) phacti_term_pane_t1_ParamLimits

0x23f1,	// (0x0003ea54) phacti_term_pane_t1

0xeed3,	// (0x0004b536) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb02a,	// (0x0004768d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0004c418) popup_sp_fs_calendar_preview_list_single_pane_g

0xeedb,	// (0x0004b53e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xeedb,	// (0x0004b53e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xeef0,	// (0x0004b553) aid_popup_sp_fs_bg_corner_pane

0xd252,	// (0x000498b5) popup_sp_fs_calendar_preview_bg_pane_g1

0xa6c7,	// (0x00046d2a) popup_sp_fs_calendar_preview_bg_pane

0xeef8,	// (0x0004b55b) popup_sp_fs_calendar_preview_list_pane

0xce41,	// (0x000494a4) bg_main_sp_fs_cale_pane_ParamLimits

0xce41,	// (0x000494a4) bg_main_sp_fs_cale_pane

0x2424,	// (0x0003ea87) listscroll_cale_mrui_pane_ParamLimits

0x2424,	// (0x0003ea87) listscroll_cale_mrui_pane

0x2439,	// (0x0003ea9c) listscroll_sp_fs_schedule_track_pane

0x2442,	// (0x0003eaa5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2442,	// (0x0003eaa5) main_sp_fs_ctrlbar_pane_cp01

0xef00,	// (0x0004b563) main_sp_fs_ribbon_pane

0x2455,	// (0x0003eab8) popup_sp_fs_cale_preview_window

0x9b4b,	// (0x000461ae) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9b4b,	// (0x000461ae) list_single_sp_fs_schedule_track_pane

0xdcc1,	// (0x0004a324) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdcc1,	// (0x0004a324) bg_sp_fs_highlight_list_pane_cp03

0x9b6e,	// (0x000461d1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9b6e,	// (0x000461d1) list_single_sp_fs_schedule_track_pane_g1

0x9b7a,	// (0x000461dd) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9b7a,	// (0x000461dd) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0004c41d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0004c41d) list_single_sp_fs_schedule_track_pane_g

0x9b86,	// (0x000461e9) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9b86,	// (0x000461e9) list_single_sp_fs_schedule_track_pane_t1

0x9b9e,	// (0x00046201) sp_fs_schedule_track_pane_ParamLimits

0x9b9e,	// (0x00046201) sp_fs_schedule_track_pane

0xef08,	// (0x0004b56b) sp_fs_schedule_track_pane_g1

0xef10,	// (0x0004b573) sp_fs_schedule_track_pane_g2

0xef18,	// (0x0004b57b) sp_fs_schedule_track_pane_g3

0xef20,	// (0x0004b583) sp_fs_schedule_track_pane_g4

0xef28,	// (0x0004b58b) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0004c422) sp_fs_schedule_track_pane_g

0xdcdd,	// (0x0004a340) bg_sp_fs_schedule_viewer_highlight_g1

0xb229,	// (0x0004788c) bg_sp_fs_schedule_viewer_highlight_g2

0xdce5,	// (0x0004a348) bg_sp_fs_schedule_viewer_highlight_g3

0xdced,	// (0x0004a350) bg_sp_fs_schedule_viewer_highlight_g4

0xdf1c,	// (0x0004a57f) bg_sp_fs_schedule_viewer_highlight_g5

0xdcfd,	// (0x0004a360) bg_sp_fs_schedule_viewer_highlight_g6

0xdd05,	// (0x0004a368) bg_sp_fs_schedule_viewer_highlight_g7

0xdd0d,	// (0x0004a370) bg_sp_fs_schedule_viewer_highlight_g8

0xb209,	// (0x0004786c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0004c42d) bg_sp_fs_schedule_viewer_highlight_g

0xa6c7,	// (0x00046d2a) bg_main_sp_fs_ribbon_pane

0x9bae,	// (0x00046211) main_sp_fs_ribbon_pane_g1

0xef30,	// (0x0004b593) main_sp_fs_ribbon_pane_t1

0x9bb7,	// (0x0004621a) main_sp_fs_ribbon_pane_t2

0xef3f,	// (0x0004b5a2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0004c440) main_sp_fs_ribbon_pane_t

0xef4e,	// (0x0004b5b1) main_sp_fs_ribbon_scheduler_pane

0xef56,	// (0x0004b5b9) bg_main_sp_fs_ribbon_pane_g1

0xef5f,	// (0x0004b5c2) bg_main_sp_fs_ribbon_pane_g2

0xef68,	// (0x0004b5cb) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0004c447) bg_main_sp_fs_ribbon_pane_g

0xef70,	// (0x0004b5d3) main_sp_fs_ribbon_scheduler_pane_g1

0xef79,	// (0x0004b5dc) main_sp_fs_ribbon_scheduler_pane_g2

0xef82,	// (0x0004b5e5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0004c44e) main_sp_fs_ribbon_scheduler_pane_g

0xef8b,	// (0x0004b5ee) list_cale_mrui_pane

0x9bc6,	// (0x00046229) sp_fs_scroll_pane_cp07_ParamLimits

0x9bc6,	// (0x00046229) sp_fs_scroll_pane_cp07

0x9be2,	// (0x00046245) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9be2,	// (0x00046245) bg_sp_fs_schedule_viewer_highlight

0xef98,	// (0x0004b5fb) list_single_sp_fs_schedule_track_pane_cp01

0xefa0,	// (0x0004b603) list_sp_fs_schedule_track_pane

0xefa8,	// (0x0004b60b) sp_fs_scroll_pane_cp06_ParamLimits

0xefa8,	// (0x0004b60b) sp_fs_scroll_pane_cp06

0xd252,	// (0x000498b5) bgmain_sp_fs_calendar_pane_g1

0x2467,	// (0x0003eaca) list_single_cale_mrui_pane_ParamLimits

0x2467,	// (0x0003eaca) list_single_cale_mrui_pane

0x2495,	// (0x0003eaf8) list_single_cale_mrui_row_pane_ParamLimits

0x2495,	// (0x0003eaf8) list_single_cale_mrui_row_pane

0x24a2,	// (0x0003eb05) list_single_cale_mrui_row_pane_g1_ParamLimits

0x24a2,	// (0x0003eb05) list_single_cale_mrui_row_pane_g1

0x24da,	// (0x0003eb3d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x24da,	// (0x0003eb3d) list_single_cale_mrui_row_pane_t1

0x24ec,	// (0x0003eb4f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x24ec,	// (0x0003eb4f) list_single_cale_mrui_row_pane_t2

0x2552,	// (0x0003ebb5) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2552,	// (0x0003ebb5) list_single_cale_mrui_row_pane_t3

0x2581,	// (0x0003ebe4) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2581,	// (0x0003ebe4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0004c45c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0004c45c) list_single_cale_mrui_row_pane_t

0x25b0,	// (0x0003ec13) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x25b0,	// (0x0003ec13) list_single_cmail_header_editor_pane_bg_cp01

0x25d0,	// (0x0003ec33) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x25d0,	// (0x0003ec33) list_single_cmail_header_editor_pane_bg_cp02

0x9bef,	// (0x00046252) main_radioblah_text_pane_t1_ParamLimits

0x9bef,	// (0x00046252) main_radioblah_text_pane_t1

0xefcf,	// (0x0004b632) cam6_indi_pane_cp01

0xefd7,	// (0x0004b63a) cam6_mode_pane_cp01

0xefdf,	// (0x0004b642) cam6_pano_pane

0xefe8,	// (0x0004b64b) cam6_zoom_pane_cp01

0xeff0,	// (0x0004b653) cam6_pano_image_pane

0xeffb,	// (0x0004b65e) cam6_pano_pane_g1

0xe913,	// (0x0004af76) cam6_pano_pane_g2

0xf004,	// (0x0004b667) cam6_pano_pane_g3

0xf00d,	// (0x0004b670) cam6_pano_pane_g4

0xd821,	// (0x00049e84) cam6_pano_pane_g5

0xf016,	// (0x0004b679) cam6_pano_pane_g6

0xefc7,	// (0x0004b62a) cam6_pano_pane_g7

0xf020,	// (0x0004b683) cam6_pano_pane_g8

0xf029,	// (0x0004b68c) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0004c465) cam6_pano_pane_g

0xa6c7,	// (0x00046d2a) main_browser_tag_pane

0xee88,	// (0x0004b4eb) grid_navstr_albumart_pane

0xf034,	// (0x0004b697) cell_navstr_albumart_pane_ParamLimits

0xf034,	// (0x0004b697) cell_navstr_albumart_pane

0xf054,	// (0x0004b6b7) cell_navstr_albumart_pane_g1

0xcc52,	// (0x000492b5) cell_navstr_albumart_pane_g2

0xcc62,	// (0x000492c5) cell_navstr_albumart_pane_g3

0xcc5a,	// (0x000492bd) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0004c478) cell_navstr_albumart_pane_g

0x9c0a,	// (0x0004626d) bt_list_pane_ParamLimits

0x9c0a,	// (0x0004626d) bt_list_pane

0x9c2a,	// (0x0004628d) bt_list_pane_t1

0x9c39,	// (0x0004629c) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0004c481) bt_list_pane_t

0xa6c7,	// (0x00046d2a) main_cale_prevew_pane

0x9c48,	// (0x000462ab) popup_cale_preview_window_ParamLimits

0x9c48,	// (0x000462ab) popup_cale_preview_window

0xb56d,	// (0x00047bd0) bg_popup_preview_window_pane_cp05_ParamLimits

0xb56d,	// (0x00047bd0) bg_popup_preview_window_pane_cp05

0xf05c,	// (0x0004b6bf) list_cale_preview_pane_ParamLimits

0xf05c,	// (0x0004b6bf) list_cale_preview_pane

0x9c61,	// (0x000462c4) list_double_cale_preview_pane_ParamLimits

0x9c61,	// (0x000462c4) list_double_cale_preview_pane

0x9c73,	// (0x000462d6) list_single_cale_preview_pane_ParamLimits

0x9c73,	// (0x000462d6) list_single_cale_preview_pane

0x9c89,	// (0x000462ec) list_single_cale_preview_pane_g1

0x9c91,	// (0x000462f4) list_single_cale_preview_pane_t1_ParamLimits

0x9c91,	// (0x000462f4) list_single_cale_preview_pane_t1

0x9ca6,	// (0x00046309) list_double_cale_preview_pane_g1

0x9cae,	// (0x00046311) list_double_cale_preview_pane_t1_ParamLimits

0x9cae,	// (0x00046311) list_double_cale_preview_pane_t1

0x9cc3,	// (0x00046326) list_double_cale_preview_pane_t2_ParamLimits

0x9cc3,	// (0x00046326) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0004c486) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0004c486) list_double_cale_preview_pane_t

0xa6c7,	// (0x00046d2a) main_ezdial_pane

0xb56d,	// (0x00047bd0) main_sp_fs_email_pane_ParamLimits

0x9853,	// (0x00045eb6) cmail_ddmenu_btn01_pane_ParamLimits

0x9853,	// (0x00045eb6) cmail_ddmenu_btn01_pane

0x9870,	// (0x00045ed3) cmail_ddmenu_btn02_pane_ParamLimits

0x9870,	// (0x00045ed3) cmail_ddmenu_btn02_pane

0x988e,	// (0x00045ef1) cmail_ddmenu_btn03_pane_ParamLimits

0x988e,	// (0x00045ef1) cmail_ddmenu_btn03_pane

0x98bc,	// (0x00045f1f) main_sp_fs_ctrlbar_pane_ParamLimits

0x98d2,	// (0x00045f35) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x99d9,	// (0x0004603c) list_cmail_body_pane_ParamLimits

0x9a5b,	// (0x000460be) bg_button_pane_cp12

0xee11,	// (0x0004b474) list_single_cmail_header_detail_pane_g3_ParamLimits

0xee11,	// (0x0004b474) list_single_cmail_header_detail_pane_g3

0x23ae,	// (0x0003ea11) list_single_cmail_header_detail_pane_t2_ParamLimits

0x23ae,	// (0x0003ea11) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0004c409) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0004c409) list_single_cmail_header_detail_pane_t

0x2406,	// (0x0003ea69) phacti_term_pane_t2_ParamLimits

0x2406,	// (0x0003ea69) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0004c413) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0004c413) phacti_term_pane_t

0xf068,	// (0x0004b6cb) aid_size_list_single_double

0x9cdb,	// (0x0004633e) popup_ezdial_listscroll_window

0x9cfc,	// (0x0004635f) popup_number_entry_window_cp01

0xba52,	// (0x000480b5) bg_popup_call_pane_cp09

0xf074,	// (0x0004b6d7) ezdial_list_pane

0xf07c,	// (0x0004b6df) scroll_pane_cp23

0xd02e,	// (0x00049691) bg_button_pane_cp028_ParamLimits

0xd02e,	// (0x00049691) bg_button_pane_cp028

0x9d0a,	// (0x0004636d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9d0a,	// (0x0004636d) cmail_ddmenu_btn01_pane_g1

0x9d1a,	// (0x0004637d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9d1a,	// (0x0004637d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0004c48b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0004c48b) cmail_ddmenu_btn01_pane_g

0xf084,	// (0x0004b6e7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xf084,	// (0x0004b6e7) cmail_ddmenu_btn01_pane_t1

0xce41,	// (0x000494a4) bg_button_pane_cp029_ParamLimits

0xce41,	// (0x000494a4) bg_button_pane_cp029

0x9d26,	// (0x00046389) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9d26,	// (0x00046389) cmail_ddmenu_btn02_pane_g1

0x9d3e,	// (0x000463a1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9d3e,	// (0x000463a1) cmail_ddmenu_btn02_pane_t1

0xdcc1,	// (0x0004a324) bg_button_pane_cp031_ParamLimits

0xdcc1,	// (0x0004a324) bg_button_pane_cp031

0x9d26,	// (0x00046389) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9d26,	// (0x00046389) cmail_ddmenu_btn03_pane_g1

0x9d3e,	// (0x000463a1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9d3e,	// (0x000463a1) cmail_ddmenu_btn03_pane_t1

0x7725,	// (0x00043d88) cell_dialer2_keypad_pane_t1_ParamLimits

0x773f,	// (0x00043da2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x773f,	// (0x00043da2) cell_dialer2_keypad_pane_t1_copy1

0x921e,	// (0x00045881) ncimui_group_button_pane

0xb56d,	// (0x00047bd0) main_sp_fs_calendar_pane_ParamLimits

0x99f9,	// (0x0004605c) list_single_cmail_header_caption_pane_ParamLimits

0x241b,	// (0x0003ea7e) aid_recal_txt_sm_pane

0xa6c7,	// (0x00046d2a) mian_recal_day_pane

0x2455,	// (0x0003eab8) popup_sp_fs_cale_preview_window_ParamLimits

0xf09a,	// (0x0004b6fd) list_recal_day_pane

0x2607,	// (0x0003ec6a) list_single_recal_day_pane_ParamLimits

0x2607,	// (0x0003ec6a) list_single_recal_day_pane

0xf0c1,	// (0x0004b724) list_single_recal_day_pane_g1_ParamLimits

0xf0c1,	// (0x0004b724) list_single_recal_day_pane_g1

0x2619,	// (0x0003ec7c) list_single_recal_day_pane_g2_ParamLimits

0x2619,	// (0x0003ec7c) list_single_recal_day_pane_g2

0x2629,	// (0x0003ec8c) list_single_recal_day_pane_g3_ParamLimits

0x2629,	// (0x0003ec8c) list_single_recal_day_pane_g3

0x2635,	// (0x0003ec98) list_single_recal_day_pane_g4_ParamLimits

0x2635,	// (0x0003ec98) list_single_recal_day_pane_g4

0x264b,	// (0x0003ecae) list_single_recal_day_pane_g5_ParamLimits

0x264b,	// (0x0003ecae) list_single_recal_day_pane_g5

0x2665,	// (0x0003ecc8) list_single_recal_day_pane_g6_ParamLimits

0x2665,	// (0x0003ecc8) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0004c49a) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0004c49a) list_single_recal_day_pane_g

0x2679,	// (0x0003ecdc) list_single_recal_day_pane_t1

0x268b,	// (0x0003ecee) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0004c4a5) list_single_recal_day_pane_t

0x9d62,	// (0x000463c5) ncimui_query_button_pane_ParamLimits

0x9d62,	// (0x000463c5) ncimui_query_button_pane

0x9d72,	// (0x000463d5) ncimui_query_button_pane_t1_ParamLimits

0x9d72,	// (0x000463d5) ncimui_query_button_pane_t1

0x0029,	// (0x0003c68c) ncimui_query_button_pane_t2_ParamLimits

0x0029,	// (0x0003c68c) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0004c4aa) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0004c4aa) ncimui_query_button_pane_t

0x9d85,	// (0x000463e8) query_button_pane_ParamLimits

0x9d85,	// (0x000463e8) query_button_pane

0xa6c7,	// (0x00046d2a) bg_button_pane_cp0028

0x003c,	// (0x0003c69f) query_button_pane_t1

0x5b4b,	// (0x000421ae) main_tport_pane_ParamLimits

0x98e3,	// (0x00045f46) bg_popup_window_pane_cp01_ParamLimits

0x98e3,	// (0x00045f46) bg_popup_window_pane_cp01

0x98f1,	// (0x00045f54) heading_pane_cp08_ParamLimits

0x98f1,	// (0x00045f54) heading_pane_cp08

0x98ff,	// (0x00045f62) heading_pane_cp07_ParamLimits

0x98ff,	// (0x00045f62) heading_pane_cp07

0x996e,	// (0x00045fd1) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0004c3f6) cell_tport_appsw_pane_g

0x169a,	// (0x0003dcfd) input_candi_list_open_g1

0xb3ec,	// (0x00047a4f) list_cale_time_pane_g6_ParamLimits

0xb3ec,	// (0x00047a4f) list_cale_time_pane_g6

0x65d0,	// (0x00042c33) aid_size_touch_calib_1_ParamLimits

0x65d0,	// (0x00042c33) aid_size_touch_calib_1

0x65dc,	// (0x00042c3f) aid_size_touch_calib_2_ParamLimits

0x65dc,	// (0x00042c3f) aid_size_touch_calib_2

0x65ea,	// (0x00042c4d) aid_size_touch_calib_3_ParamLimits

0x65ea,	// (0x00042c4d) aid_size_touch_calib_3

0x65fa,	// (0x00042c5d) aid_size_touch_calib_4_ParamLimits

0x65fa,	// (0x00042c5d) aid_size_touch_calib_4

0x6608,	// (0x00042c6b) main_touch_calib_button_group_pane_ParamLimits

0x6608,	// (0x00042c6b) main_touch_calib_button_group_pane

0x6616,	// (0x00042c79) main_touch_calib_pane_g1_ParamLimits

0x6622,	// (0x00042c85) main_touch_calib_pane_g2_ParamLimits

0x662e,	// (0x00042c91) main_touch_calib_pane_g3_ParamLimits

0x663a,	// (0x00042c9d) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0004bdb9) main_touch_calib_pane_g_ParamLimits

0x6646,	// (0x00042ca9) main_touch_calib_pane_t1_ParamLimits

0x665f,	// (0x00042cc2) main_touch_calib_pane_t2_ParamLimits

0x6678,	// (0x00042cdb) main_touch_calib_pane_t3_ParamLimits

0x668e,	// (0x00042cf1) main_touch_calib_pane_t4_ParamLimits

0x66a4,	// (0x00042d07) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0004bdc2) main_touch_calib_pane_t_ParamLimits

0xd5e1,	// (0x00049c44) list_single_fp_cale_pane_g3_ParamLimits

0xd5e1,	// (0x00049c44) list_single_fp_cale_pane_g3

0xb56d,	// (0x00047bd0) bg_button_pane_cp012_ParamLimits

0xb56d,	// (0x00047bd0) bg_vkb2_func_pane_cp03_ParamLimits

0x84e6,	// (0x00044b49) cell_vitu2_function_top_pane_g1_ParamLimits

0xb56d,	// (0x00047bd0) bg_vkb2_func_pane_cp04_ParamLimits

0x91a6,	// (0x00045809) main_ncimui_button_group_pane_ParamLimits

0x91a6,	// (0x00045809) main_ncimui_button_group_pane

0x920c,	// (0x0004586f) main_ncimui_pane_t3_ParamLimits

0x920c,	// (0x0004586f) main_ncimui_pane_t3

0xee9e,	// (0x0004b501) phacti_button_group_pane

0xf068,	// (0x0004b6cb) aid_size_list_single_double_ParamLimits

0x9cdb,	// (0x0004633e) popup_ezdial_listscroll_window_ParamLimits

0x9cfc,	// (0x0004635f) popup_number_entry_window_cp01_ParamLimits

0x9d92,	// (0x000463f5) phacti_button_pane_ParamLimits

0x9d92,	// (0x000463f5) phacti_button_pane

0xa6c7,	// (0x00046d2a) bg_button_pane_cp14

0x004a,	// (0x0003c6ad) phacti_button_pane_t1

0x9da3,	// (0x00046406) main_touch_calib_button_pane_ParamLimits

0x9da3,	// (0x00046406) main_touch_calib_button_pane

0xae12,	// (0x00047475) bg_button_pane_cp18_ParamLimits

0xae12,	// (0x00047475) bg_button_pane_cp18

0x0058,	// (0x0003c6bb) main_touch_calib_button_pane_t1_ParamLimits

0x0058,	// (0x0003c6bb) main_touch_calib_button_pane_t1

0x006e,	// (0x0003c6d1) main_touch_calib_button_pane_t2_ParamLimits

0x006e,	// (0x0003c6d1) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0004c4af) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0004c4af) main_touch_calib_button_pane_t

0xa6c7,	// (0x00046d2a) cell_ncimui_button_pane

0xa6c7,	// (0x00046d2a) bg_button_pane_cp032

0x008c,	// (0x0003c6ef) cell_ncimui_button_pane_t1

0x779b,	// (0x00043dfe) image3_infobar_pane_ParamLimits

0x779b,	// (0x00043dfe) image3_infobar_pane

0x9585,	// (0x00045be8) fs_bigclock_status_pane_ParamLimits

0x9585,	// (0x00045be8) fs_bigclock_status_pane

0x9592,	// (0x00045bf5) main_fs_bigclock_clock_pane_ParamLimits

0x9592,	// (0x00045bf5) main_fs_bigclock_clock_pane

0x95b6,	// (0x00045c19) main_fs_bigclock_indi_pane_ParamLimits

0x95b6,	// (0x00045c19) main_fs_bigclock_indi_pane

0x95e6,	// (0x00045c49) main_fs_bigclock_swipe_pane_ParamLimits

0x95e6,	// (0x00045c49) main_fs_bigclock_swipe_pane

0xa6c7,	// (0x00046d2a) main_fs_clock_dumped_data

0xea20,	// (0x0004b083) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xea20,	// (0x0004b083) list_single_fs_bigclock_indicator_pane_g1

0xea3a,	// (0x0004b09d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xea3a,	// (0x0004b09d) list_single_fs_bigclock_indicator_pane_g2

0xea54,	// (0x0004b0b7) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xea54,	// (0x0004b0b7) list_single_fs_bigclock_indicator_pane_g3

0xea6e,	// (0x0004b0d1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xea6e,	// (0x0004b0d1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0004c2d7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0004c2d7) list_single_fs_bigclock_indicator_pane_g

0xea97,	// (0x0004b0fa) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xea97,	// (0x0004b0fa) list_single_fs_bigclock_indicator_pane_t1

0xeabf,	// (0x0004b122) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xeabf,	// (0x0004b122) list_single_fs_bigclock_indicator_pane_t2

0xeae7,	// (0x0004b14a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xeae7,	// (0x0004b14a) list_single_fs_bigclock_indicator_pane_t3

0xeb0f,	// (0x0004b172) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xeb0f,	// (0x0004b172) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0004c2e2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0004c2e2) list_single_fs_bigclock_indicator_pane_t

0x009a,	// (0x0003c6fd) image3_infobar_fav_pane_ParamLimits

0x009a,	// (0x0003c6fd) image3_infobar_fav_pane

0x00aa,	// (0x0003c70d) image3_infobar_loc_pane_ParamLimits

0x00aa,	// (0x0003c70d) image3_infobar_loc_pane

0x00be,	// (0x0003c721) image3_infobar_time_pane_ParamLimits

0x00be,	// (0x0003c721) image3_infobar_time_pane

0xd252,	// (0x000498b5) image3_infobar_time_pane_g1

0x00ce,	// (0x0003c731) image3_infobar_time_pane_t1

0xd252,	// (0x000498b5) image3_infobar_loc_pane_g1

0x00dc,	// (0x0003c73f) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0004c4b4) image3_infobar_loc_pane_g

0x00e4,	// (0x0003c747) image3_infobar_loc_pane_t1

0xd252,	// (0x000498b5) image3_infobar_fav_pane_g1

0x00f2,	// (0x0003c755) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0004c4b9) image3_infobar_fav_pane_g

0x00fa,	// (0x0003c75d) fs_bigclock_status_battery_pane

0x0103,	// (0x0003c766) fs_bigclock_status_signal_pane

0x010c,	// (0x0003c76f) fs_bigclock_status_title_pane

0x0115,	// (0x0003c778) fs_bigclock_status_signal_pane_g1

0x011e,	// (0x0003c781) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0004c4be) fs_bigclock_status_signal_pane_g

0x0126,	// (0x0003c789) fs_bigclock_status_battery_pane_g1

0x012f,	// (0x0003c792) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0004c4c3) fs_bigclock_status_battery_pane_g

0x0137,	// (0x0003c79a) fs_bigclock_status_title_pane_t1

0xd252,	// (0x000498b5) main_fs_bigclock_clock_pane_g1

0x9db3,	// (0x00046416) main_fs_bigclock_clock_pane_g2

0x9db3,	// (0x00046416) main_fs_bigclock_clock_pane_g3

0x9db3,	// (0x00046416) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0004c4c8) main_fs_bigclock_clock_pane_g

0x9dbb,	// (0x0004641e) main_fs_bigclock_clock_pane_t1

0x9dc9,	// (0x0004642c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0004c4d1) main_fs_bigclock_clock_pane_t

0x0145,	// (0x0003c7a8) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0145,	// (0x0003c7a8) list_single_fs_bigclock_indicator_pane

0x9dd8,	// (0x0004643b) list_single_fs_bigclock_pane_ParamLimits

0x9dd8,	// (0x0004643b) list_single_fs_bigclock_pane

0x015f,	// (0x0003c7c2) main_fs_bigclock_indicator_pane_t1

0x016e,	// (0x0003c7d1) list_single_fs_bigclock_pane_g1

0x0176,	// (0x0003c7d9) list_single_fs_bigclock_pane_t1

0xd252,	// (0x000498b5) main_fs_bigclock_swipe_pane_g1

0x01b9,	// (0x0003c81c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0004c4e2) main_fs_bigclock_swipe_pane_g

0x01c1,	// (0x0003c824) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x01c1,	// (0x0003c824) main_fs_bigclock_swipe_pane_t1

0x4bd2,	// (0x00041235) call_type_pane_ParamLimits

0xa6c7,	// (0x00046d2a) main_btmg_pane

0x24ce,	// (0x0003eb31) list_single_cale_mrui_row_pane_g2_ParamLimits

0x24ce,	// (0x0003eb31) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0004c455) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0004c455) list_single_cale_mrui_row_pane_g

0x25f6,	// (0x0003ec59) list_recal_vselct_arw_lo_pane

0xf0b9,	// (0x0004b71c) list_recal_vselct_arw_up_pane

0x25fe,	// (0x0003ec61) list_recal_vselct_pane

0x9e39,	// (0x0004649c) btmg_button_pane

0x9e45,	// (0x000464a8) main_btmg_pane_g1

0xa6c7,	// (0x00046d2a) bg_button_pane_cp044

0x01de,	// (0x0003c841) btmg_button_pane_t1

0xce2d,	// (0x00049490) aid_listscroll_gen

0xb56d,	// (0x00047bd0) main_cntbar_detail_pane

0xedf3,	// (0x0004b456) list_cmail_folder_pane

0xd53a,	// (0x00049b9d) sp_fs_scroll_pane_cp03_ParamLimits

0x269d,	// (0x0003ed00) list_single_fs_dyc_pane_cp01_ParamLimits

0x269d,	// (0x0003ed00) list_single_fs_dyc_pane_cp01

0x01ec,	// (0x0003c84f) aid_size_cmail_indent

0x26cc,	// (0x0003ed2f) list_single_dyc_row_pane_cp01

0x9e6d,	// (0x000464d0) cntbar_detail_list_pane_ParamLimits

0x9e6d,	// (0x000464d0) cntbar_detail_list_pane

0x9ea7,	// (0x0004650a) main_cntbar_detail_cont_pane_ParamLimits

0x9ea7,	// (0x0004650a) main_cntbar_detail_cont_pane

0x4bc6,	// (0x00041229) scroll_pane_cp032_ParamLimits

0x4bc6,	// (0x00041229) scroll_pane_cp032

0x9eb3,	// (0x00046516) cntbar_detail_list_event_pane_ParamLimits

0x9eb3,	// (0x00046516) cntbar_detail_list_event_pane

0x9e79,	// (0x000464dc) cntbar_detail_list_shct_pane

0xb277,	// (0x000478da) aid_list_gen

0x01fe,	// (0x0003c861) aid_scroll

0x0207,	// (0x0003c86a) aid_size_touch_scroll_bar

0x8a56,	// (0x000450b9) aid_list_double

0x26d5,	// (0x0003ed38) aid_list_single

0x8a4d,	// (0x000450b0) aid_list_single_lg

0x26de,	// (0x0003ed41) aid_list_z_g_a_sm

0x26e6,	// (0x0003ed49) aid_list_z_g_d

0x26ee,	// (0x0003ed51) aid_txt_z_prm

0x26fc,	// (0x0003ed5f) aid_txt_z_prm_cp01

0x270a,	// (0x0003ed6d) aid_txt_z_sec

0x9ec7,	// (0x0004652a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9ec7,	// (0x0004652a) main_cntbar_detail_cont_pane_g1

0x9ed4,	// (0x00046537) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9ed4,	// (0x00046537) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0004c4e7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0004c4e7) main_cntbar_detail_cont_pane_g

0x0210,	// (0x0003c873) main_cntbar_detail_cont_pane_t1

0x021e,	// (0x0003c881) main_cntbar_detail_cont_pane_t2

0x022c,	// (0x0003c88f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0004c4ec) main_cntbar_detail_cont_pane_t

0x9ee0,	// (0x00046543) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9ee0,	// (0x00046543) cell_cntbar_detail_list_shct_pane

0x023a,	// (0x0003c89d) cntbar_detail_list_shct_pane_g1

0x0243,	// (0x0003c8a6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0004c4f3) cntbar_detail_list_shct_pane_g

0x9ef4,	// (0x00046557) cntbar_detail_list_event_pane_g1_ParamLimits

0x9ef4,	// (0x00046557) cntbar_detail_list_event_pane_g1

0x9f00,	// (0x00046563) cntbar_detail_list_event_pane_g2_ParamLimits

0x9f00,	// (0x00046563) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0004c4f8) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0004c4f8) cntbar_detail_list_event_pane_g

0x9f6c,	// (0x000465cf) cntbar_detail_list_event_pane_t1_ParamLimits

0x9f6c,	// (0x000465cf) cntbar_detail_list_event_pane_t1

0x9f81,	// (0x000465e4) cntbar_detail_list_event_pane_t2_ParamLimits

0x9f81,	// (0x000465e4) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0004c505) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0004c505) cntbar_detail_list_event_pane_t

0xd252,	// (0x000498b5) cell_cntbar_detail_list_shct_pane_g1

0xba0a,	// (0x0004806d) navi_pane_mv_g3

0xb56d,	// (0x00047bd0) main_cntbar_detail_pane_ParamLimits

0xa6c7,	// (0x00046d2a) main_notif_wgt_pane

0x744f,	// (0x00043ab2) aid_tch_main_mp4_pane_g4

0x7684,	// (0x00043ce7) popup_slider_window_cp02

0x25ec,	// (0x0003ec4f) list_recal_day_event_pane

0x9e4d,	// (0x000464b0) cntbar_detail_btn_pane_ParamLimits

0x9e4d,	// (0x000464b0) cntbar_detail_btn_pane

0x9e5d,	// (0x000464c0) cntbar_detail_btn_pane_cp01_ParamLimits

0x9e5d,	// (0x000464c0) cntbar_detail_btn_pane_cp01

0x9e79,	// (0x000464dc) cntbar_detail_list_shct_pane_ParamLimits

0x9e85,	// (0x000464e8) cntbar_detail_pane_g1_ParamLimits

0x9e85,	// (0x000464e8) cntbar_detail_pane_g1

0x9e91,	// (0x000464f4) cntbar_detail_pane_t1_ParamLimits

0x9e91,	// (0x000464f4) cntbar_detail_pane_t1

0x9f0c,	// (0x0004656f) cntbar_detail_list_event_pane_g3_ParamLimits

0x9f0c,	// (0x0004656f) cntbar_detail_list_event_pane_g3

0x9f24,	// (0x00046587) cntbar_detail_list_event_pane_g4_ParamLimits

0x9f24,	// (0x00046587) cntbar_detail_list_event_pane_g4

0x9f3c,	// (0x0004659f) cntbar_detail_list_event_pane_g5_ParamLimits

0x9f3c,	// (0x0004659f) cntbar_detail_list_event_pane_g5

0x9f54,	// (0x000465b7) cntbar_detail_list_event_pane_g6_ParamLimits

0x9f54,	// (0x000465b7) cntbar_detail_list_event_pane_g6

0x9f96,	// (0x000465f9) cntbar_detail_list_event_pane_t3_ParamLimits

0x9f96,	// (0x000465f9) cntbar_detail_list_event_pane_t3

0x9fa8,	// (0x0004660b) popup_notif_wgt_window_ParamLimits

0x9fa8,	// (0x0004660b) popup_notif_wgt_window

0x9fb8,	// (0x0004661b) popup_submenu_window_cp01_ParamLimits

0x9fb8,	// (0x0004661b) popup_submenu_window_cp01

0xba52,	// (0x000480b5) bg_popup_window_pane_cp10

0x024c,	// (0x0003c8af) listscroll_notif_wgt_pane

0x025e,	// (0x0003c8c1) list_notif_wgt_window

0x0267,	// (0x0003c8ca) scroll_pane_cp033

0x9fca,	// (0x0004662d) list_notif_wgt_row_pane_ParamLimits

0x9fca,	// (0x0004662d) list_notif_wgt_row_pane

0x0270,	// (0x0003c8d3) aid_size_list_notif_wgt_del

0x027d,	// (0x0003c8e0) list_notif_wgt_row_pane_g1

0x0289,	// (0x0003c8ec) list_notif_wgt_row_pane_g2

0x0295,	// (0x0003c8f8) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0004c50c) list_notif_wgt_row_pane_g

0x02a2,	// (0x0003c905) list_notif_wgt_row_pane_t1

0x02b7,	// (0x0003c91a) list_notif_wgt_row_pane_t2

0x02c9,	// (0x0003c92c) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0004c513) list_notif_wgt_row_pane_t

0xdf24,	// (0x0004a587) list_recal_day_event_pane_g1

0x02db,	// (0x0003c93e) list_recal_day_event_pane_t1

0xa6c7,	// (0x00046d2a) bg_button_pane_cp045

0x9fdc,	// (0x0004663f) cntbar_detail_btn_pane_t1

0xce41,	// (0x000494a4) main_callh_pane_ParamLimits

0xce41,	// (0x000494a4) main_callh_pane

0xa6c7,	// (0x00046d2a) main_coverflow0_pane

0xa6c7,	// (0x00046d2a) main_wgtman_pane

0x95fe,	// (0x00045c61) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x95fe,	// (0x00045c61) main_fs_bigclock_unlock_btn_pane

0x9966,	// (0x00045fc9) bg_button_pane_cp16

0x9976,	// (0x00045fd9) cell_tport_appsw_pane_g3

0x9fea,	// (0x0004664d) cf0_flow_pane_ParamLimits

0x9fea,	// (0x0004664d) cf0_flow_pane

0x02ea,	// (0x0003c94d) listscroll_cf0_pane

0x02f5,	// (0x0003c958) main_cf0_pane_g1

0x9ff9,	// (0x0004665c) main_cf0_pane_t1_ParamLimits

0x9ff9,	// (0x0004665c) main_cf0_pane_t1

0xa00d,	// (0x00046670) main_cf0_pane_t2_ParamLimits

0xa00d,	// (0x00046670) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0004c51f) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0004c51f) main_cf0_pane_t

0x0307,	// (0x0003c96a) scroll_pane_cp11

0xa021,	// (0x00046684) cf0_flow_pane_g1

0xa029,	// (0x0004668c) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0004c524) cf0_flow_pane_g

0xa031,	// (0x00046694) cf0_flow_pane_t1

0xa6c7,	// (0x00046d2a) main_call6_pane

0xa6c7,	// (0x00046d2a) main_calllock_pane

0xa03f,	// (0x000466a2) call6_btn_grp_pane_ParamLimits

0xa03f,	// (0x000466a2) call6_btn_grp_pane

0xa04e,	// (0x000466b1) call6_pane_g1_ParamLimits

0xa04e,	// (0x000466b1) call6_pane_g1

0xa05d,	// (0x000466c0) popup_call6_1st_window_ParamLimits

0xa05d,	// (0x000466c0) popup_call6_1st_window

0xa06b,	// (0x000466ce) popup_call6_2nd_window_ParamLimits

0xa06b,	// (0x000466ce) popup_call6_2nd_window

0xa079,	// (0x000466dc) cell_call6_btn_pane_ParamLimits

0xa079,	// (0x000466dc) cell_call6_btn_pane

0xba52,	// (0x000480b5) bg_popup_call2_in_pane_cp03

0x0312,	// (0x0003c975) popup_call6_1st_window_g1

0x031a,	// (0x0003c97d) popup_call6_1st_window_g2

0x0322,	// (0x0003c985) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0004c529) popup_call6_1st_window_g

0x032a,	// (0x0003c98d) popup_call6_1st_window_t1

0x0339,	// (0x0003c99c) popup_call6_1st_window_t2

0x0349,	// (0x0003c9ac) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0004c530) popup_call6_1st_window_t

0xba52,	// (0x000480b5) bg_popup_call2_in_pane_cp04

0x0312,	// (0x0003c975) popup_call6_2nd_window_g1

0x031a,	// (0x0003c97d) popup_call6_2nd_window_g2

0x0322,	// (0x0003c985) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0004c529) popup_call6_2nd_window_g

0x032a,	// (0x0003c98d) popup_call6_2nd_window_t1

0xa6c7,	// (0x00046d2a) bg_button_pane_cp15

0x0359,	// (0x0003c9bc) cell_call6_btn_pane_g1

0x0362,	// (0x0003c9c5) cell_call6_btn_pane_t1

0xa088,	// (0x000466eb) listscroll_wgtman_pane_ParamLimits

0xa088,	// (0x000466eb) listscroll_wgtman_pane

0xa0a4,	// (0x00046707) wgtman_btn_pane_ParamLimits

0xa0a4,	// (0x00046707) wgtman_btn_pane

0xb803,	// (0x00047e66) aid_scroll_copy1

0x0371,	// (0x0003c9d4) list_wgtman_pane

0xa0d9,	// (0x0004673c) wgtman_btn_pane_g1_ParamLimits

0xa0d9,	// (0x0004673c) wgtman_btn_pane_g1

0xa101,	// (0x00046764) wgtman_btn_pane_t1_ParamLimits

0xa101,	// (0x00046764) wgtman_btn_pane_t1

0x037b,	// (0x0003c9de) wgtman_btn_pane_t2_ParamLimits

0x037b,	// (0x0003c9de) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0004c537) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0004c537) wgtman_btn_pane_t

0xa138,	// (0x0004679b) listrow_wgtman_pane_ParamLimits

0xa138,	// (0x0004679b) listrow_wgtman_pane

0xa153,	// (0x000467b6) listrow_wgtman_pane_g1

0xa160,	// (0x000467c3) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0004c53c) listrow_wgtman_pane_g

0x2718,	// (0x0003ed7b) listrow_wgtman_pane_t1

0x2730,	// (0x0003ed93) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0004c541) listrow_wgtman_pane_t

0x2756,	// (0x0003edb9) wait_bar_pane_cp09

0x0392,	// (0x0003c9f5) main_calllock_btn_pane

0x039c,	// (0x0003c9ff) main_calllock_pane_g1

0xa6c7,	// (0x00046d2a) bg_button_pane_cp17

0x03a8,	// (0x0003ca0b) main_calllock_btn_pane_g1

0x03b1,	// (0x0003ca14) main_calllock_btn_pane_t1

0xa6c7,	// (0x00046d2a) main_dialer3_pane

0xa6c7,	// (0x00046d2a) main_fmrd2_pane

0xd252,	// (0x000498b5) main_fs_bigclock_unlock_btn_pane_g1

0x03c8,	// (0x0003ca2b) main_fs_bigclock_unlock_btn_pane_t1

0xa17e,	// (0x000467e1) area_fmrd2_info_pane_ParamLimits

0xa17e,	// (0x000467e1) area_fmrd2_info_pane

0xa18c,	// (0x000467ef) area_fmrd2_visual_pane_ParamLimits

0xa18c,	// (0x000467ef) area_fmrd2_visual_pane

0xa19a,	// (0x000467fd) fmrd2_indi_pane_ParamLimits

0xa19a,	// (0x000467fd) fmrd2_indi_pane

0xa1a7,	// (0x0004680a) area_fmrd2_visual_pane_g1

0xa1af,	// (0x00046812) area_fmrd2_visual_pane_t1

0xa1bf,	// (0x00046822) area_fmrd2_visual_pane_t2

0xa1cf,	// (0x00046832) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0004c54b) area_fmrd2_visual_pane_t

0xa1df,	// (0x00046842) area_fmrd2_info_pane_g1

0xa1e7,	// (0x0004684a) area_fmrd2_info_pane_t1

0xa1f7,	// (0x0004685a) area_fmrd2_info_pane_t2

0xa207,	// (0x0004686a) area_fmrd2_info_pane_t3

0xa217,	// (0x0004687a) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0004c552) area_fmrd2_info_pane_t

0xa225,	// (0x00046888) fmrd2_indi_pane_t1

0xa235,	// (0x00046898) fmrd2_indi_pane_t2

0xa245,	// (0x000468a8) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0004c55b) fmrd2_indi_pane_t

0xea7d,	// (0x0004b0e0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xea7d,	// (0x0004b0e0) list_single_fs_bigclock_indicator_pane_g5

0xeb24,	// (0x0004b187) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xeb24,	// (0x0004b187) list_single_fs_bigclock_indicator_pane_t5

0x9afe,	// (0x00046161) aid_cell_bcale_month_pane_ParamLimits

0x9afe,	// (0x00046161) aid_cell_bcale_month_pane

0x9b1c,	// (0x0004617f) bcale_month_pane_ParamLimits

0x9b1c,	// (0x0004617f) bcale_month_pane

0x9b3a,	// (0x0004619d) bcale_preview_pane_ParamLimits

0x9b3a,	// (0x0004619d) bcale_preview_pane

0x0176,	// (0x0003c7d9) list_single_fs_bigclock_pane_t1_ParamLimits

0x0195,	// (0x0003c7f8) list_single_fs_bigclock_pane_t2_ParamLimits

0x0195,	// (0x0003c7f8) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0004c4dd) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0004c4dd) list_single_fs_bigclock_pane_t

0x03c0,	// (0x0003ca23) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0004c546) main_fs_bigclock_unlock_btn_pane_g

0xa253,	// (0x000468b6) aid_dia3_key_size_ParamLimits

0xa253,	// (0x000468b6) aid_dia3_key_size

0xa25f,	// (0x000468c2) aid_dia3_listrow_size_ParamLimits

0xa25f,	// (0x000468c2) aid_dia3_listrow_size

0xa26f,	// (0x000468d2) dia3_keypad_fun_pane_ParamLimits

0xa26f,	// (0x000468d2) dia3_keypad_fun_pane

0xa281,	// (0x000468e4) dia3_keypad_num_pane_ParamLimits

0xa281,	// (0x000468e4) dia3_keypad_num_pane

0xa293,	// (0x000468f6) dia3_listscroll_pane_ParamLimits

0xa293,	// (0x000468f6) dia3_listscroll_pane

0xa2a1,	// (0x00046904) dia3_numentry_pane_ParamLimits

0xa2a1,	// (0x00046904) dia3_numentry_pane

0x03d6,	// (0x0003ca39) dia3_list_pane

0x03e1,	// (0x0003ca44) scroll_pane_cp12

0xa6c7,	// (0x00046d2a) bg_dia3_numentry_pane

0xa2af,	// (0x00046912) dia3_numentry_pane_t1

0xa2be,	// (0x00046921) cell_dia3_key_num_pane

0xa2c6,	// (0x00046929) cell_dia3_key0_fun_pane_ParamLimits

0xa2c6,	// (0x00046929) cell_dia3_key0_fun_pane

0xa2d3,	// (0x00046936) cell_dia3_key1_fun_pane_ParamLimits

0xa2d3,	// (0x00046936) cell_dia3_key1_fun_pane

0xa2e0,	// (0x00046943) dia3_listrow_pane

0xe78d,	// (0x0004adf0) bg_dia3_numentry_pane_g1

0xa6c7,	// (0x00046d2a) bg_button_pane_cp21

0x03ec,	// (0x0003ca4f) cell_dia3_key_num_pane_t1

0x03fa,	// (0x0003ca5d) cell_dia3_key_num_pane_t2

0x0409,	// (0x0003ca6c) cell_dia3_key_num_pane_t3

0x0418,	// (0x0003ca7b) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0004c562) cell_dia3_key_num_pane_t

0xa6c7,	// (0x00046d2a) bg_button_pane_cp19

0xa2ed,	// (0x00046950) cell_dia3_key0_fun_pane_g1

0xa6c7,	// (0x00046d2a) bg_button_pane_cp20

0xa2f5,	// (0x00046958) cell_dia3_key1_fun_pane_g1

0xa2fd,	// (0x00046960) area_left_week_number_pane

0xa310,	// (0x00046973) area_top_day_name_pane

0xa31e,	// (0x00046981) frame_month_view_pane

0x0427,	// (0x0003ca8a) grid_month_view_pane

0xa333,	// (0x00046996) cell_top_day_name_pane_ParamLimits

0xa333,	// (0x00046996) cell_top_day_name_pane

0xa34d,	// (0x000469b0) cell_area_left_week_number_pane_ParamLimits

0xa34d,	// (0x000469b0) cell_area_left_week_number_pane

0xa370,	// (0x000469d3) cell_month_view_pane_ParamLimits

0xa370,	// (0x000469d3) cell_month_view_pane

0x0435,	// (0x0003ca98) frm_month_g1

0xa39c,	// (0x000469ff) frm_month_g2

0xa3ad,	// (0x00046a10) frm_month_g3

0xa3be,	// (0x00046a21) frm_month_g4

0xa3cf,	// (0x00046a32) frm_month_g5

0xa3e2,	// (0x00046a45) frm_month_g6

0xa3f5,	// (0x00046a58) frm_month_g7

0x0442,	// (0x0003caa5) frm_month_g8

0xa408,	// (0x00046a6b) frm_month_g9

0xa415,	// (0x00046a78) frm_month_g10

0xa422,	// (0x00046a85) frm_month_g11

0xa42f,	// (0x00046a92) frm_month_g12

0xa43c,	// (0x00046a9f) frm_month_g13

0xa449,	// (0x00046aac) frm_month_g14

0xa458,	// (0x00046abb) frm_month_g15

0xa467,	// (0x00046aca) frm_month_g16

0x000f,

0xff08,	// (0x0004c56b) frm_month_g

0x044f,	// (0x0003cab2) cell_top_day_name_pane_t1

0xa476,	// (0x00046ad9) cell_area_left_week_number_pane_g1

0xa485,	// (0x00046ae8) cell_area_left_week_number_pane_t1

0xd4b5,	// (0x00049b18) cell_month_view_pane_g1

0xa49b,	// (0x00046afe) cell_month_view_pane_t1

0xa6c7,	// (0x00046d2a) main_fps_pane

0xed0b,	// (0x0004b36e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xed0b,	// (0x0004b36e) cmail_ddmenu_btn02_pane_cp1

0xed27,	// (0x0004b38a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xed27,	// (0x0004b38a) cmail_ddmenu_btn02_pane_cp2

0x9d32,	// (0x00046395) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9d32,	// (0x00046395) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0004c490) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0004c490) cmail_ddmenu_btn02_pane_g

0x9d50,	// (0x000463b3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9d50,	// (0x000463b3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0004c495) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0004c495) cmail_ddmenu_btn02_pane_t

0xa4b1,	// (0x00046b14) fps_text_pane_ParamLimits

0xa4b1,	// (0x00046b14) fps_text_pane

0xa4be,	// (0x00046b21) main_fps_pane_g1_ParamLimits

0xa4be,	// (0x00046b21) main_fps_pane_g1

0xa4cc,	// (0x00046b2f) wait_bar_pane_cp010_ParamLimits

0xa4cc,	// (0x00046b2f) wait_bar_pane_cp010

0xa4d8,	// (0x00046b3b) fps_text_pane_t1_ParamLimits

0xa4d8,	// (0x00046b3b) fps_text_pane_t1

0x7a66,	// (0x000440c9) cam4_image_uncrop_pane_g1

0x7a6f,	// (0x000440d2) cam4_image_uncrop_pane_g2

0x7a78,	// (0x000440db) cam4_image_uncrop_pane_g3

0x7a81,	// (0x000440e4) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004bf51) cam4_image_uncrop_pane_g

0xa2e0,	// (0x00046943) dia3_listrow_pane_ParamLimits

0xa6c7,	// (0x00046d2a) main_phob2_pane

0x9948,	// (0x00045fab) cell_tport_appsw_pane_cp02_ParamLimits

0x9948,	// (0x00045fab) cell_tport_appsw_pane_cp02

0x9957,	// (0x00045fba) cell_tport_appsw_pane_cp03_ParamLimits

0x9957,	// (0x00045fba) cell_tport_appsw_pane_cp03

0xa6c7,	// (0x00046d2a) phob2_contact_card_pane

0xa6c7,	// (0x00046d2a) phob2_listscroll_pane

0x0462,	// (0x0003cac5) phob2_list_pane

0x046a,	// (0x0003cacd) scroll_pane_cp034

0xa4f1,	// (0x00046b54) phob2_cc_data_pane_ParamLimits

0xa4f1,	// (0x00046b54) phob2_cc_data_pane

0xa50b,	// (0x00046b6e) phob2_cc_listscroll_pane_ParamLimits

0xa50b,	// (0x00046b6e) phob2_cc_listscroll_pane

0xa525,	// (0x00046b88) list_double_large_graphic_phob2_pane_ParamLimits

0xa525,	// (0x00046b88) list_double_large_graphic_phob2_pane

0xa543,	// (0x00046ba6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa543,	// (0x00046ba6) list_double_large_graphic_phob2_pane_g1

0x2768,	// (0x0003edcb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2768,	// (0x0003edcb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0004c58c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0004c58c) list_double_large_graphic_phob2_pane_g

0x2774,	// (0x0003edd7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x2774,	// (0x0003edd7) list_double_large_graphic_phob2_pane_t1

0x2789,	// (0x0003edec) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2789,	// (0x0003edec) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0004c591) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0004c591) list_double_large_graphic_phob2_pane_t

0xa6c7,	// (0x00046d2a) list_highlight_pane_cp024

0xa559,	// (0x00046bbc) phob2_cc_button_pane

0xa561,	// (0x00046bc4) phob2_cc_data_pane_g1_ParamLimits

0xa561,	// (0x00046bc4) phob2_cc_data_pane_g1

0xa56d,	// (0x00046bd0) phob2_cc_data_pane_g2_ParamLimits

0xa56d,	// (0x00046bd0) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0004c596) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0004c596) phob2_cc_data_pane_g

0xa579,	// (0x00046bdc) phob2_cc_data_pane_t1_ParamLimits

0xa579,	// (0x00046bdc) phob2_cc_data_pane_t1

0xa58b,	// (0x00046bee) phob2_cc_data_pane_t2_ParamLimits

0xa58b,	// (0x00046bee) phob2_cc_data_pane_t2

0xa59d,	// (0x00046c00) phob2_cc_data_pane_t3_ParamLimits

0xa59d,	// (0x00046c00) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0004c59b) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0004c59b) phob2_cc_data_pane_t

0x047e,	// (0x0003cae1) phob2_cc_list_pane_ParamLimits

0x047e,	// (0x0003cae1) phob2_cc_list_pane

0xe031,	// (0x0004a694) scroll_pane_cp035_ParamLimits

0xe031,	// (0x0004a694) scroll_pane_cp035

0xb56d,	// (0x00047bd0) bg_button_pane_cp033

0x048a,	// (0x0003caed) phob2_cc_button_pane_g1

0x0496,	// (0x0003caf9) phob2_cc_button_pane_t1

0x04ab,	// (0x0003cb0e) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0004c5a2) phob2_cc_button_pane_t

0xa5af,	// (0x00046c12) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa5af,	// (0x00046c12) list_double_large_graphic_phob2_cc_pane

0xa5d6,	// (0x00046c39) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa5d6,	// (0x00046c39) list_double_large_graphic_phob2_cc_pane_g1

0x279b,	// (0x0003edfe) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x279b,	// (0x0003edfe) list_double_large_graphic_phob2_cc_pane_g2

0x27a7,	// (0x0003ee0a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x27a7,	// (0x0003ee0a) list_double_large_graphic_phob2_cc_pane_g3

0x27b3,	// (0x0003ee16) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x27b3,	// (0x0003ee16) list_double_large_graphic_phob2_cc_pane_g4

0x27bf,	// (0x0003ee22) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x27bf,	// (0x0003ee22) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0004c5a7) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0004c5a7) list_double_large_graphic_phob2_cc_pane_g

0x27cb,	// (0x0003ee2e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x27cb,	// (0x0003ee2e) list_double_large_graphic_phob2_cc_pane_t1

0x27f4,	// (0x0003ee57) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x27f4,	// (0x0003ee57) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0004c5b2) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0004c5b2) list_double_large_graphic_phob2_cc_pane_t

0x04bd,	// (0x0003cb20) list_highlight_pane_cp025_ParamLimits

0x04bd,	// (0x0003cb20) list_highlight_pane_cp025

0xb56d,	// (0x00047bd0) bg_button_pane_cp033_ParamLimits

0x048a,	// (0x0003caed) phob2_cc_button_pane_g1_ParamLimits

0x0496,	// (0x0003caf9) phob2_cc_button_pane_t1_ParamLimits

0x04ab,	// (0x0003cb0e) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0004c5a2) phob2_cc_button_pane_t_ParamLimits

0x2af4,	// (0x0003f157) popup_wgtman_window

0xddf7,	// (0x0004a45a) scroll_pane_cp038

0xa0c1,	// (0x00046724) wgtman_btn_pane_cp_01_ParamLimits

0xa0c1,	// (0x00046724) wgtman_btn_pane_cp_01

0x04cb,	// (0x0003cb2e) wgtman_content_pane

0x04d4,	// (0x0003cb37) wgtman_heading_pane

0xa6c7,	// (0x00046d2a) bg_heading_pane_cp02

0x04dd,	// (0x0003cb40) wgtman_heading_pane_g1

0x04e5,	// (0x0003cb48) wgtman_heading_pane_t1

0x04f3,	// (0x0003cb56) scroll_pane_cp036

0x04fb,	// (0x0003cb5e) wgtman_list_pane

0x0503,	// (0x0003cb66) wgtman_list_pane_t1_ParamLimits

0x0503,	// (0x0003cb66) wgtman_list_pane_t1

0x79c5,	// (0x00044028) cam4_grid_pane

0x196f,	// (0x0003dfd2) bg_button_pane_cp015_ParamLimits

0x8686,	// (0x00044ce9) bg_button_pane_cp016_ParamLimits

0x8699,	// (0x00044cfc) bg_button_pane_cp017_ParamLimits

0x19b3,	// (0x0003e016) popup_vitu2_query_window_g3_ParamLimits

0x19b3,	// (0x0003e016) popup_vitu2_query_window_g3

0x1a2c,	// (0x0003e08f) popup_vitu2_query_window_t6_ParamLimits

0x1a2c,	// (0x0003e08f) popup_vitu2_query_window_t6

0x1a57,	// (0x0003e0ba) popup_vitu2_query_window_t7_ParamLimits

0x1a57,	// (0x0003e0ba) popup_vitu2_query_window_t7

0xeb4c,	// (0x0004b1af) cam4_grid_pane_g1

0xeb55,	// (0x0004b1b8) cam4_grid_pane_g2

0x051d,	// (0x0003cb80) cam4_grid_pane_g3

0x0526,	// (0x0003cb89) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0004c5b7) cam4_grid_pane_g

0x394a,	// (0x0003ffad) aid_placing_vt_slider_lsc_ParamLimits

0x3c96,	// (0x000402f9) vidtel_button_pane_ParamLimits

0x3c96,	// (0x000402f9) vidtel_button_pane

0x0531,	// (0x0003cb94) bg_button_pane_cp034

0xa5e7,	// (0x00046c4a) vidtel_button_pane_g1

0x053b,	// (0x0003cb9e) vidtel_button_pane_t1

0xdf14,	// (0x0004a577) aid_size_vtel_slider_touch

0xe031,	// (0x0004a694) scroll_pane_cp039

0xe7cb,	// (0x0004ae2e) ncim_query_button_pane_cp01_ParamLimits

0xe7ea,	// (0x0004ae4d) ncimui_query_pane_g1_ParamLimits

0xb56d,	// (0x00047bd0) input_focus_pane_cp012_ParamLimits

0xe80f,	// (0x0004ae72) ncim_query_entry_pane_t1_ParamLimits

0xe031,	// (0x0004a694) scroll_pane_cp039_ParamLimits

0xb8e7,	// (0x00047f4a) navi_pane_bcale_mc_g1

0xb8ef,	// (0x00047f52) navi_pane_bcale_mc_t1

0xed70,	// (0x0004b3d3) main_sp_fs_email_pane_g1

0xed7c,	// (0x0004b3df) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0004c348) main_sp_fs_email_pane_g

0xefba,	// (0x0004b61d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xefba,	// (0x0004b61d) list_single_cale_mrui_row_pane_g3

0x265b,	// (0x0003ecbe) list_single_recal_day_pane_g5_event_pane

0x2671,	// (0x0003ecd4) list_single_recal_day_pane_g7

0x0549,	// (0x0003cbac) list_recal_day_event_pane_cp01

0x0552,	// (0x0003cbb5) list_recal_vselct_arw_lo_pane_cp01

0x055a,	// (0x0003cbbd) list_recal_vselct_arw_up_pane_cp01

0x0562,	// (0x0003cbc5) list_recal_vselct_pane_cp01

0xdf24,	// (0x0004a587) list_recal_day_event_pane_cp01_g1

0x281d,	// (0x0003ee80) list_recal_day_event_pane_cp01_t1

0x2679,	// (0x0003ecdc) list_single_recal_day_pane_t1_ParamLimits

0x268b,	// (0x0003ecee) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0004c4a5) list_single_recal_day_pane_t_ParamLimits

0xad4d,	// (0x000473b0) bg_notes_pane_ParamLimits

0xadf0,	// (0x00047453) list_notes_pane_ParamLimits

0x2e52,	// (0x0003f4b5) scroll_pane_cp06_ParamLimits

0xae12,	// (0x00047475) main_notes_pane_ParamLimits

0xa6c7,	// (0x00046d2a) main_welc_pane

0xa5ef,	// (0x00046c52) main_welc_body_pane_ParamLimits

0xa5ef,	// (0x00046c52) main_welc_body_pane

0xa609,	// (0x00046c6c) main_welc_opti_pane_ParamLimits

0xa609,	// (0x00046c6c) main_welc_opti_pane

0xa63c,	// (0x00046c9f) main_welc_pane_t1_ParamLimits

0xa63c,	// (0x00046c9f) main_welc_pane_t1

0xa656,	// (0x00046cb9) main_welc_body_row_pane_ParamLimits

0xa656,	// (0x00046cb9) main_welc_body_row_pane

0xdcc1,	// (0x0004a324) main_welc_opti_row_pane_ParamLimits

0xdcc1,	// (0x0004a324) main_welc_opti_row_pane

0x057a,	// (0x0003cbdd) main_welc_opti_row_pane_g1

0x0582,	// (0x0003cbe5) main_welc_opti_row_pane_t1

0x0592,	// (0x0003cbf5) main_welc_body_row_pane_t1

0x0256,	// (0x0003c8b9) popup_notif_wgt_heading_pane

0x0270,	// (0x0003c8d3) aid_size_list_notif_wgt_del_ParamLimits

0x027d,	// (0x0003c8e0) list_notif_wgt_row_pane_g1_ParamLimits

0x0289,	// (0x0003c8ec) list_notif_wgt_row_pane_g2_ParamLimits

0x0295,	// (0x0003c8f8) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0004c50c) list_notif_wgt_row_pane_g_ParamLimits

0x02a2,	// (0x0003c905) list_notif_wgt_row_pane_t1_ParamLimits

0x02b7,	// (0x0003c91a) list_notif_wgt_row_pane_t2_ParamLimits

0x02c9,	// (0x0003c92c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0004c513) list_notif_wgt_row_pane_t_ParamLimits

0xa153,	// (0x000467b6) listrow_wgtman_pane_g1_ParamLimits

0xa160,	// (0x000467c3) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0004c53c) listrow_wgtman_pane_g_ParamLimits

0x2718,	// (0x0003ed7b) listrow_wgtman_pane_t1_ParamLimits

0x2730,	// (0x0003ed93) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0004c541) listrow_wgtman_pane_t_ParamLimits

0x2756,	// (0x0003edb9) wait_bar_pane_cp09_ParamLimits

0xa6c7,	// (0x00046d2a) bg_popup_heading_pane_cp02

0x05a1,	// (0x0003cc04) popup_notif_wgt_heading_pane_g1

0x05a9,	// (0x0003cc0c) popup_notif_wgt_heading_pane_t1

0xa6c7,	// (0x00046d2a) main_vids_pane

0xa6c7,	// (0x00046d2a) vids_listscroll_pane

0xa67b,	// (0x00046cde) scroll_pane_cp040

0xa6c7,	// (0x00046d2a) vids_list_pane

0xa686,	// (0x00046ce9) vids_list_double_pane_ParamLimits

0xa686,	// (0x00046ce9) vids_list_double_pane

0xa6a0,	// (0x00046d03) vids_list_double_pane_g1

0xa6a9,	// (0x00046d0c) vids_list_double_pane_t1

0xa6b9,	// (0x00046d1c) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0004c5c5) vids_list_double_pane_t

0xb56d,	// (0x00047bd0) main_ncimui_pane_ParamLimits

0x91be,	// (0x00045821) main_ncimui_pane_g1_ParamLimits

0x91ca,	// (0x0004582d) main_ncimui_pane_g2_ParamLimits

0x91ca,	// (0x0004582d) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0004c24d) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0004c24d) main_ncimui_pane_g

0xa622,	// (0x00046c85) main_welc_pane_g1_ParamLimits

0xa622,	// (0x00046c85) main_welc_pane_g1

0xa62e,	// (0x00046c91) main_welc_pane_g2_ParamLimits

0xa62e,	// (0x00046c91) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0004c5c0) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0004c5c0) main_welc_pane_g

0xad4d,	// (0x000473b0) listscroll_mce_pane_ParamLimits

0xba4a,	// (0x000480ad) wait_bar_pane_cp10

0xce35,	// (0x00049498) main_cale_day_pane_ParamLimits

0xce35,	// (0x00049498) main_cale_week_pane_ParamLimits

0xad4d,	// (0x000473b0) main_messa_pane_ParamLimits

0x6e25,	// (0x00043488) main_clock2_btn_pane_ParamLimits

0x6e25,	// (0x00043488) main_clock2_btn_pane

0xd669,	// (0x00049ccc) main_clock2_btn_pane_cp01_ParamLimits

0xd669,	// (0x00049ccc) main_clock2_btn_pane_cp01

0xef8b,	// (0x0004b5ee) list_cale_mrui_pane_ParamLimits

0x02ff,	// (0x0003c962) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0004c51a) main_cf0_pane_g

0xa2fd,	// (0x00046960) area_left_week_number_pane_ParamLimits

0xa310,	// (0x00046973) area_top_day_name_pane_ParamLimits

0xa31e,	// (0x00046981) frame_month_view_pane_ParamLimits

0x0427,	// (0x0003ca8a) grid_month_view_pane_ParamLimits

0x0435,	// (0x0003ca98) frm_month_g1_ParamLimits

0xa39c,	// (0x000469ff) frm_month_g2_ParamLimits

0xa3ad,	// (0x00046a10) frm_month_g3_ParamLimits

0xa3be,	// (0x00046a21) frm_month_g4_ParamLimits

0xa3cf,	// (0x00046a32) frm_month_g5_ParamLimits

0xa3e2,	// (0x00046a45) frm_month_g6_ParamLimits

0xa3f5,	// (0x00046a58) frm_month_g7_ParamLimits

0x0442,	// (0x0003caa5) frm_month_g8_ParamLimits

0xa408,	// (0x00046a6b) frm_month_g9_ParamLimits

0xa415,	// (0x00046a78) frm_month_g10_ParamLimits

0xa422,	// (0x00046a85) frm_month_g11_ParamLimits

0xa42f,	// (0x00046a92) frm_month_g12_ParamLimits

0xa43c,	// (0x00046a9f) frm_month_g13_ParamLimits

0xa449,	// (0x00046aac) frm_month_g14_ParamLimits

0xa458,	// (0x00046abb) frm_month_g15_ParamLimits

0xa467,	// (0x00046aca) frm_month_g16_ParamLimits

0xff08,	// (0x0004c56b) frm_month_g_ParamLimits

0x044f,	// (0x0003cab2) cell_top_day_name_pane_t1_ParamLimits

0xa476,	// (0x00046ad9) cell_area_left_week_number_pane_g1_ParamLimits

0xa485,	// (0x00046ae8) cell_area_left_week_number_pane_t1_ParamLimits

0xd4b5,	// (0x00049b18) cell_month_view_pane_g1_ParamLimits

0xa49b,	// (0x00046afe) cell_month_view_pane_t1_ParamLimits

0xad45,	// (0x000473a8) main_clock2_btn_pane_g1

0x05b7,	// (0x0003cc1a) main_clock2_btn_pane_t1

0xb56d,	// (0x00047bd0) listscroll_cmail_pane_ParamLimits

0xed70,	// (0x0004b3d3) main_sp_fs_email_pane_g1_ParamLimits

0xed7c,	// (0x0004b3df) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0004c348) main_sp_fs_email_pane_g_ParamLimits

0xf09a,	// (0x0004b6fd) list_recal_day_pane_ParamLimits

0xf0ab,	// (0x0004b70e) mian_recal_day_pane_t1

0x2013,	// (0x0003e676) list_single_dyc_row_text_pane_t4_ParamLimits

0x2013,	// (0x0003e676) list_single_dyc_row_text_pane_t4

0x204a,	// (0x0003e6ad) list_single_dyc_row_text_pane_t5_ParamLimits

0x204a,	// (0x0003e6ad) list_single_dyc_row_text_pane_t5

0x20c0,	// (0x0003e723) list_single_dyc_row_text_pane_t6_ParamLimits

0x20c0,	// (0x0003e723) list_single_dyc_row_text_pane_t6

0x4af8,	// (0x0004115b) aid_mgn_list_cale_time_pane

0xb56d,	// (0x00047bd0) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
