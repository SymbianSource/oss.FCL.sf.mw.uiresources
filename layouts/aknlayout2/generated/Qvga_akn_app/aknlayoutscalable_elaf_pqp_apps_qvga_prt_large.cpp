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

#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00063667 };

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
0x789d,	// (0x0006af04) Screen

0x78a7,	// (0x0006af0e) application_window

0x78f9,	// (0x0006af60) area_bottom_pane_ParamLimits

0x78f9,	// (0x0006af60) area_bottom_pane

0x7935,	// (0x0006af9c) area_top_pane_ParamLimits

0x7935,	// (0x0006af9c) area_top_pane

0x7991,	// (0x0006aff8) call_video_uplink_pane_ParamLimits

0x7991,	// (0x0006aff8) call_video_uplink_pane

0x79cc,	// (0x0006b033) main_pane_ParamLimits

0x79cc,	// (0x0006b033) main_pane

0x4c0a,	// (0x00068271) context_pane

0xa779,	// (0x0006dde0) navi_pane

0xa793,	// (0x0006ddfa) popup_cale_events_window_ParamLimits

0xa793,	// (0x0006ddfa) popup_cale_events_window

0x4c1d,	// (0x00068284) popup_mup_playback_window

0xa7aa,	// (0x0006de11) signal_pane

0x085d,	// (0x00063ec4) main_browser_pane

0x0acc,	// (0x00064133) main_burst_pane

0x3ee3,	// (0x0006754a) main_calc_pane

0x4be6,	// (0x0006824d) main_cale_day_pane

0x8020,	// (0x0006b687) main_cale_month_pane

0x4be6,	// (0x0006824d) main_cale_week_pane

0x0acc,	// (0x00064133) main_call_pane

0x0517,	// (0x00063b7e) main_call_poc_pane

0x0acc,	// (0x00064133) main_camera_pane

0x0acc,	// (0x00064133) main_chi_dic_pane

0x1361,	// (0x000649c8) main_clock_pane

0x0517,	// (0x00063b7e) main_fmradio_pane

0x0acc,	// (0x00064133) main_graph_messa_pane

0x0517,	// (0x00063b7e) main_help_pane

0x085d,	// (0x00063ec4) main_im_pane

0x0772,	// (0x00063dd9) main_image_pane_ParamLimits

0x0772,	// (0x00063dd9) main_image_pane

0x0517,	// (0x00063b7e) main_location2_pane

0x0acc,	// (0x00064133) main_location_pane

0x0772,	// (0x00063dd9) main_messa_pane

0x0517,	// (0x00063b7e) main_mp2_pane

0x0acc,	// (0x00064133) main_mp_pane

0x0517,	// (0x00063b7e) main_msg_pane

0x0517,	// (0x00063b7e) main_mup_eq_pane

0x0517,	// (0x00063b7e) main_mup_pane

0x085d,	// (0x00063ec4) main_notes_pane

0x0517,	// (0x00063b7e) main_pec_pane

0x0517,	// (0x00063b7e) main_phob_pane

0x0517,	// (0x00063b7e) main_pinb_pane

0x0517,	// (0x00063b7e) main_postcard_pane

0x0517,	// (0x00063b7e) main_qdial_pane

0x0acc,	// (0x00064133) main_skin_pane

0x0517,	// (0x00063b7e) main_smil2_pane

0x0acc,	// (0x00064133) main_smil_pane

0x0acc,	// (0x00064133) main_video_pane

0x0acc,	// (0x00064133) main_video_tele_pane

0x0772,	// (0x00063dd9) main_viewer_pane_ParamLimits

0x0772,	// (0x00063dd9) main_viewer_pane

0x0acc,	// (0x00064133) main_vorec_pane

0xa677,	// (0x0006dcde) popup_blid_sat_info_window_ParamLimits

0xa677,	// (0x0006dcde) popup_blid_sat_info_window

0xa693,	// (0x0006dcfa) popup_dyc_status_message_window_ParamLimits

0xa693,	// (0x0006dcfa) popup_dyc_status_message_window

0xa69f,	// (0x0006dd06) popup_grid_large_graphic_window_ParamLimits

0xa69f,	// (0x0006dd06) popup_grid_large_graphic_window

0xa710,	// (0x0006dd77) popup_loc_request_window_ParamLimits

0xa710,	// (0x0006dd77) popup_loc_request_window

0xa753,	// (0x0006ddba) popup_wml_address_window_ParamLimits

0xa753,	// (0x0006ddba) popup_wml_address_window

0xa554,	// (0x0006dbbb) call_muted_g1

0xa28f,	// (0x0006d8f6) popup_call_audio_conf_window_ParamLimits

0xa28f,	// (0x0006d8f6) popup_call_audio_conf_window

0xa564,	// (0x0006dbcb) popup_call_audio_first_window_ParamLimits

0xa564,	// (0x0006dbcb) popup_call_audio_first_window

0xa598,	// (0x0006dbff) popup_call_audio_in_window_ParamLimits

0xa598,	// (0x0006dbff) popup_call_audio_in_window

0xa5b4,	// (0x0006dc1b) popup_call_audio_out_window_ParamLimits

0xa5b4,	// (0x0006dc1b) popup_call_audio_out_window

0xa5d0,	// (0x0006dc37) popup_call_audio_second_window_ParamLimits

0xa5d0,	// (0x0006dc37) popup_call_audio_second_window

0xa5f8,	// (0x0006dc5f) popup_call_audio_wait_window_ParamLimits

0xa5f8,	// (0x0006dc5f) popup_call_audio_wait_window

0xa617,	// (0x0006dc7e) popup_number_entry_window_ParamLimits

0xa617,	// (0x0006dc7e) popup_number_entry_window

0x0106,	// (0x0006376d) bg_popup_call_pane_cp05_ParamLimits

0x0106,	// (0x0006376d) bg_popup_call_pane_cp05

0x0126,	// (0x0006378d) popup_number_entry_window_t1

0x0139,	// (0x000637a0) popup_number_entry_window_t2

0x014b,	// (0x000637b2) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0007272d) popup_number_entry_window_t

0x015d,	// (0x000637c4) text_title_cp2

0x0170,	// (0x000637d7) bg_popup_call_pane_cp_ParamLimits

0x0170,	// (0x000637d7) bg_popup_call_pane_cp

0x017e,	// (0x000637e5) call_thumbnail_pane

0x0186,	// (0x000637ed) popup_call_audio_in_window_g1_ParamLimits

0x0186,	// (0x000637ed) popup_call_audio_in_window_g1

0x0192,	// (0x000637f9) popup_call_audio_in_window_g2_ParamLimits

0x0192,	// (0x000637f9) popup_call_audio_in_window_g2

0x019e,	// (0x00063805) popup_call_audio_in_window_g3_ParamLimits

0x019e,	// (0x00063805) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x00072736) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x00072736) popup_call_audio_in_window_g

0x01aa,	// (0x00063811) popup_call_audio_in_window_t1_ParamLimits

0x01aa,	// (0x00063811) popup_call_audio_in_window_t1

0x01c5,	// (0x0006382c) popup_call_audio_in_window_t2_ParamLimits

0x01c5,	// (0x0006382c) popup_call_audio_in_window_t2

0x01e0,	// (0x00063847) popup_call_audio_in_window_t3_ParamLimits

0x01e0,	// (0x00063847) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0007273d) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0007273d) popup_call_audio_in_window_t

0x0170,	// (0x000637d7) bg_popup_call_pane_cp01_ParamLimits

0x0170,	// (0x000637d7) bg_popup_call_pane_cp01

0x017e,	// (0x000637e5) call_thumbnail_pane_cp02

0x01f3,	// (0x0006385a) call_type_pane_cp022

0x01fb,	// (0x00063862) popup_call_audio_out_window_g1_ParamLimits

0x01fb,	// (0x00063862) popup_call_audio_out_window_g1

0x020d,	// (0x00063874) popup_call_audio_out_window_g2_ParamLimits

0x020d,	// (0x00063874) popup_call_audio_out_window_g2

0x0219,	// (0x00063880) popup_call_audio_out_window_g3_ParamLimits

0x0219,	// (0x00063880) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x00072744) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x00072744) popup_call_audio_out_window_g

0x022b,	// (0x00063892) popup_call_audio_out_window_t1_ParamLimits

0x022b,	// (0x00063892) popup_call_audio_out_window_t1

0x0243,	// (0x000638aa) popup_call_audio_out_window_t2_ParamLimits

0x0243,	// (0x000638aa) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0007274b) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0007274b) popup_call_audio_out_window_t

0x0258,	// (0x000638bf) bg_popup_call_pane_ParamLimits

0x0258,	// (0x000638bf) bg_popup_call_pane

0x7b7f,	// (0x0006b1e6) call_thumbnail_pane_cp_ParamLimits

0x7b7f,	// (0x0006b1e6) call_thumbnail_pane_cp

0x02dc,	// (0x00063943) call_type_pane_cp01_ParamLimits

0x02dc,	// (0x00063943) call_type_pane_cp01

0x0320,	// (0x00063987) popup_call_audio_first_window_g1_ParamLimits

0x0320,	// (0x00063987) popup_call_audio_first_window_g1

0x036c,	// (0x000639d3) popup_call_audio_first_window_g2_ParamLimits

0x036c,	// (0x000639d3) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x00072750) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x00072750) popup_call_audio_first_window_g

0x03b0,	// (0x00063a17) popup_call_audio_first_window_t1_ParamLimits

0x03b0,	// (0x00063a17) popup_call_audio_first_window_t1

0x045c,	// (0x00063ac3) popup_call_audio_first_window_t4_ParamLimits

0x045c,	// (0x00063ac3) popup_call_audio_first_window_t4

0x04e8,	// (0x00063b4f) popup_call_audio_first_window_t5_ParamLimits

0x04e8,	// (0x00063b4f) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x00072755) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x00072755) popup_call_audio_first_window_t

0x0517,	// (0x00063b7e) bg_popup_call_pane_cp02

0x0521,	// (0x00063b88) call_type_pane_cp023

0x0529,	// (0x00063b90) popup_call_audio_wait_window_g1

0x0531,	// (0x00063b98) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007275c) popup_call_audio_wait_window_g

0x0539,	// (0x00063ba0) popup_call_audio_wait_window_t3

0x0547,	// (0x00063bae) bg_popup_call_pane_cp03_ParamLimits

0x0547,	// (0x00063bae) bg_popup_call_pane_cp03

0x05a7,	// (0x00063c0e) call_thumbnail_pane_cp011_ParamLimits

0x05a7,	// (0x00063c0e) call_thumbnail_pane_cp011

0x05b3,	// (0x00063c1a) call_type_pane_cp034_ParamLimits

0x05b3,	// (0x00063c1a) call_type_pane_cp034

0x05ef,	// (0x00063c56) popup_call_audio_second_window_g1_ParamLimits

0x05ef,	// (0x00063c56) popup_call_audio_second_window_g1

0x062b,	// (0x00063c92) popup_call_audio_second_window_g2_ParamLimits

0x062b,	// (0x00063c92) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x00072761) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x00072761) popup_call_audio_second_window_g

0x0667,	// (0x00063cce) popup_call_audio_second_window_t1_ParamLimits

0x0667,	// (0x00063cce) popup_call_audio_second_window_t1

0x06e8,	// (0x00063d4f) popup_call_audio_second_window_t2_ParamLimits

0x06e8,	// (0x00063d4f) popup_call_audio_second_window_t2

0x071e,	// (0x00063d85) popup_call_audio_second_window_t3_ParamLimits

0x071e,	// (0x00063d85) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x00072766) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x00072766) popup_call_audio_second_window_t

0x0517,	// (0x00063b7e) bg_popup_call_pane_cp04

0x0754,	// (0x00063dbb) list_conf_pane

0x075c,	// (0x00063dc3) popup_call_audio_conf_window_t1

0x076a,	// (0x00063dd1) call_thumbnail_pane_g1

0x0772,	// (0x00063dd9) bg_pinb_pane_ParamLimits

0x0772,	// (0x00063dd9) bg_pinb_pane

0x0780,	// (0x00063de7) find_pinb_pane

0x0789,	// (0x00063df0) listscroll_pinb_pane_ParamLimits

0x0789,	// (0x00063df0) listscroll_pinb_pane

0x0798,	// (0x00063dff) pinb_bg_pane_g1

0x7ba3,	// (0x0006b20a) pinb_bg_pane_g2

0x7bad,	// (0x0006b214) pinb_bg_pane_g3

0x7bb7,	// (0x0006b21e) pinb_bg_pane_g4

0x7bc1,	// (0x0006b228) pinb_bg_pane_g5

0x7bcb,	// (0x0006b232) pinb_bg_pane_g6

0x7bd6,	// (0x0006b23d) pinb_bg_pane_g7

0x7be1,	// (0x0006b248) pinb_bg_pane_g8

0x7bea,	// (0x0006b251) pinb_bg_pane_g9

0x7bf2,	// (0x0006b259) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0007276d) pinb_bg_pane_g

0x7c0f,	// (0x0006b276) grid_pinb_pane

0x7c18,	// (0x0006b27f) list_pinb_pane

0x7c23,	// (0x0006b28a) scroll_pane_cp01_ParamLimits

0x7c23,	// (0x0006b28a) scroll_pane_cp01

0x07a2,	// (0x00063e09) find_pinb_pane_g1_ParamLimits

0x07a2,	// (0x00063e09) find_pinb_pane_g1

0x07ba,	// (0x00063e21) find_pinb_pane_t1

0x07cc,	// (0x00063e33) find_pinb_pane_t2

0x0001,

0xf120,	// (0x00072787) find_pinb_pane_t

0x07e1,	// (0x00063e48) input_focus_pane_cp01_ParamLimits

0x07e1,	// (0x00063e48) input_focus_pane_cp01

0x7c33,	// (0x0006b29a) cell_pinb_pane_ParamLimits

0x7c33,	// (0x0006b29a) cell_pinb_pane

0x7c4c,	// (0x0006b2b3) cell_pinb_pane_g1_ParamLimits

0x7c4c,	// (0x0006b2b3) cell_pinb_pane_g1

0x7c60,	// (0x0006b2c7) cell_pinb_pane_g2_ParamLimits

0x7c60,	// (0x0006b2c7) cell_pinb_pane_g2

0x07ed,	// (0x00063e54) cell_pinb_pane_g3_ParamLimits

0x07ed,	// (0x00063e54) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0007278c) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0007278c) cell_pinb_pane_g

0x0517,	// (0x00063b7e) grid_highlight_pane_cp01

0x7c6c,	// (0x0006b2d3) list_pinb_item_pane_ParamLimits

0x7c6c,	// (0x0006b2d3) list_pinb_item_pane

0x0517,	// (0x00063b7e) list_highlight_pane_cp02

0x7c81,	// (0x0006b2e8) list_pinb_item_pane_g1_ParamLimits

0x7c81,	// (0x0006b2e8) list_pinb_item_pane_g1

0x7c8e,	// (0x0006b2f5) list_pinb_item_pane_g2_ParamLimits

0x7c8e,	// (0x0006b2f5) list_pinb_item_pane_g2

0x7c9a,	// (0x0006b301) list_pinb_item_pane_g3_ParamLimits

0x7c9a,	// (0x0006b301) list_pinb_item_pane_g3

0x7ca9,	// (0x0006b310) list_pinb_item_pane_g4_ParamLimits

0x7ca9,	// (0x0006b310) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x00072793) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x00072793) list_pinb_item_pane_g

0x7cb5,	// (0x0006b31c) list_pinb_item_pane_t1_ParamLimits

0x7cb5,	// (0x0006b31c) list_pinb_item_pane_t1

0x7ce6,	// (0x0006b34d) calc_display_pane

0x7cfe,	// (0x0006b365) calc_paper_pane

0x7d1a,	// (0x0006b381) grid_calc_pane

0x0517,	// (0x00063b7e) bg_list_pane_cp01

0x7d3a,	// (0x0006b3a1) clock_g1

0x7d42,	// (0x0006b3a9) clock_g2

0x0001,

0xf135,	// (0x0007279c) clock_g

0x7d4a,	// (0x0006b3b1) clock_t1_ParamLimits

0x7d4a,	// (0x0006b3b1) clock_t1

0x7d5f,	// (0x0006b3c6) clock_t2_ParamLimits

0x7d5f,	// (0x0006b3c6) clock_t2

0x7d71,	// (0x0006b3d8) clock_t3_ParamLimits

0x7d71,	// (0x0006b3d8) clock_t3

0x7d83,	// (0x0006b3ea) clock_t4_ParamLimits

0x7d83,	// (0x0006b3ea) clock_t4

0x7d95,	// (0x0006b3fc) clock_t5_ParamLimits

0x7d95,	// (0x0006b3fc) clock_t5

0x7daa,	// (0x0006b411) clock_t6_ParamLimits

0x7daa,	// (0x0006b411) clock_t6

0x7dbc,	// (0x0006b423) clock_t7_ParamLimits

0x7dbc,	// (0x0006b423) clock_t7

0x7dce,	// (0x0006b435) clock_t8_ParamLimits

0x7dce,	// (0x0006b435) clock_t8

0x7de0,	// (0x0006b447) clock_t9_ParamLimits

0x7de0,	// (0x0006b447) clock_t9

0x0008,

0xf13a,	// (0x000727a1) clock_t_ParamLimits

0xf13a,	// (0x000727a1) clock_t

0x0801,	// (0x00063e68) popup_clock_analogue_window_cp02

0x0801,	// (0x00063e68) popup_clock_digital_window_cp01

0x0809,	// (0x00063e70) listscroll_help_pane

0x0517,	// (0x00063b7e) phob_pre_status_pane

0x0813,	// (0x00063e7a) grid_qdial_pane

0x0772,	// (0x00063dd9) listscroll_mce_pane

0x0772,	// (0x00063dd9) bg_notes_pane

0x081d,	// (0x00063e84) list_notes_pane

0x7df2,	// (0x0006b459) scroll_pane_cp06

0x082b,	// (0x00063e92) bg_calc_paper_pane

0x7dff,	// (0x0006b466) list_calc_pane

0x085d,	// (0x00063ec4) bg_calc_display_pane

0x7e19,	// (0x0006b480) calc_display_pane_t1

0x7e2e,	// (0x0006b495) calc_display_pane_t2

0x7e43,	// (0x0006b4aa) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000727b4) calc_display_pane_t

0x7e55,	// (0x0006b4bc) cell_calc_pane_ParamLimits

0x7e55,	// (0x0006b4bc) cell_calc_pane

0x08a5,	// (0x00063f0c) bg_calc_paper_pane_g1

0x08bd,	// (0x00063f24) bg_calc_paper_pane_g2

0x08b1,	// (0x00063f18) bg_calc_paper_pane_g3

0x08d5,	// (0x00063f3c) bg_calc_paper_pane_g4

0x08c9,	// (0x00063f30) bg_calc_paper_pane_g5

0x7e7c,	// (0x0006b4e3) bg_calc_paper_pane_g6

0x7e8b,	// (0x0006b4f2) bg_calc_paper_pane_g7

0x7e9a,	// (0x0006b501) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000727bb) bg_calc_paper_pane_g

0x7ea9,	// (0x0006b510) calc_bg_paper_pane_g9

0x7eb8,	// (0x0006b51f) list_calc_item_pane_ParamLimits

0x7eb8,	// (0x0006b51f) list_calc_item_pane

0x08e1,	// (0x00063f48) list_calc_item_pane_g1

0x7ed1,	// (0x0006b538) list_calc_item_pane_t1_ParamLimits

0x7ed1,	// (0x0006b538) list_calc_item_pane_t1

0x7ee3,	// (0x0006b54a) list_calc_item_pane_t2_ParamLimits

0x7ee3,	// (0x0006b54a) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000727cc) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000727cc) list_calc_item_pane_t

0x0900,	// (0x00063f67) cell_calc_pane_g1

0x090a,	// (0x00063f71) grid_highlight_pane_cp02

0x093f,	// (0x00063fa6) bg_calc_display_pane_g1

0x7f11,	// (0x0006b578) bg_calc_display_pane_g2

0x092c,	// (0x00063f93) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000727d6) bg_calc_display_pane_g

0x7f1b,	// (0x0006b582) cell_qdial_pane_ParamLimits

0x7f1b,	// (0x0006b582) cell_qdial_pane

0x7f2d,	// (0x0006b594) cell_qdial_pane_g1_ParamLimits

0x7f2d,	// (0x0006b594) cell_qdial_pane_g1

0x7f3a,	// (0x0006b5a1) cell_qdial_pane_g2_ParamLimits

0x7f3a,	// (0x0006b5a1) cell_qdial_pane_g2

0x0948,	// (0x00063faf) cell_qdial_pane_g3_ParamLimits

0x0948,	// (0x00063faf) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000727dd) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000727dd) cell_qdial_pane_g

0x7f58,	// (0x0006b5bf) cell_qdial_pane_t1_ParamLimits

0x7f58,	// (0x0006b5bf) cell_qdial_pane_t1

0x7f70,	// (0x0006b5d7) cell_qdial_pane_t2_ParamLimits

0x7f70,	// (0x0006b5d7) cell_qdial_pane_t2

0x7f83,	// (0x0006b5ea) cell_qdial_pane_t3_ParamLimits

0x7f83,	// (0x0006b5ea) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000727e6) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000727e6) cell_qdial_pane_t

0x0517,	// (0x00063b7e) grid_highlight_pane_cp04

0x0954,	// (0x00063fbb) thumbnail_qdial_pane_ParamLimits

0x0954,	// (0x00063fbb) thumbnail_qdial_pane

0x09b0,	// (0x00064017) list_help_pane

0x09ba,	// (0x00064021) scroll_pane_cp02

0x7f96,	// (0x0006b5fd) help_list_pane_t1_ParamLimits

0x7f96,	// (0x0006b5fd) help_list_pane_t1

0x7fb4,	// (0x0006b61b) bg_notes_pane_g2

0x7fbc,	// (0x0006b623) bg_notes_pane_g3

0x7fc4,	// (0x0006b62b) notes_bg_pane_g1

0x7fcc,	// (0x0006b633) notes_bg_pane_g4

0x7fd4,	// (0x0006b63b) notes_bg_pane_g5

0x7fdc,	// (0x0006b643) notes_bg_pane_g6

0x7fe4,	// (0x0006b64b) notes_bg_pane_g7

0x7fec,	// (0x0006b653) notes_bg_pane_g8

0x7ff4,	// (0x0006b65b) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x00072804) notes_bg_pane_g

0x7ffc,	// (0x0006b663) list_notes_text_pane_ParamLimits

0x7ffc,	// (0x0006b663) list_notes_text_pane

0x0a0b,	// (0x00064072) list_notes_text_pane_g1

0x6667,	// (0x00069cce) list_notes_text_pane_t1

0x8020,	// (0x0006b687) listscroll_cale_week_pane

0x8045,	// (0x0006b6ac) bg_cale_heading_pane

0x0a2e,	// (0x00064095) bg_cale_pane_cp01

0x805d,	// (0x0006b6c4) cale_week_corner_pane

0x8077,	// (0x0006b6de) cale_week_day_heading_pane

0x808f,	// (0x0006b6f6) cale_week_scroll_pane_g1

0x80a2,	// (0x0006b709) cale_week_scroll_pane_g2

0x80b5,	// (0x0006b71c) cale_week_scroll_pane_g3

0x80c8,	// (0x0006b72f) cale_week_scroll_pane_g4

0x80db,	// (0x0006b742) cale_week_scroll_pane_g5

0x80ee,	// (0x0006b755) cale_week_scroll_pane_g6

0x8101,	// (0x0006b768) cale_week_scroll_pane_g7

0x8114,	// (0x0006b77b) cale_week_scroll_pane_g8

0x8127,	// (0x0006b78e) cale_week_scroll_pane_g9

0x813a,	// (0x0006b7a1) cale_week_scroll_pane_g10

0x814d,	// (0x0006b7b4) cale_week_scroll_pane_g11

0x8160,	// (0x0006b7c7) cale_week_scroll_pane_g12

0x8173,	// (0x0006b7da) cale_week_scroll_pane_g13

0x8186,	// (0x0006b7ed) cale_week_scroll_pane_g14

0x8199,	// (0x0006b800) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x00072813) cale_week_scroll_pane_g

0x81bf,	// (0x0006b826) cale_week_time_pane

0x81d2,	// (0x0006b839) grid_cale_week_pane

0x0a5d,	// (0x000640c4) scroll_pane_cp08

0x81e7,	// (0x0006b84e) cell_cale_week_pane_ParamLimits

0x81e7,	// (0x0006b84e) cell_cale_week_pane

0x8235,	// (0x0006b89c) cale_week_day_heading_pane_t1

0x8270,	// (0x0006b8d7) cale_week_day_heading_pane_t2

0x82ab,	// (0x0006b912) cale_week_day_heading_pane_t3

0x82e6,	// (0x0006b94d) cale_week_day_heading_pane_t4

0x8321,	// (0x0006b988) cale_week_day_heading_pane_t5

0x835c,	// (0x0006b9c3) cale_week_day_heading_pane_t6

0x8397,	// (0x0006b9fe) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x00072834) cale_week_day_heading_pane_t

0x0a7a,	// (0x000640e1) bg_cale_side_pane

0x83d2,	// (0x0006ba39) cale_week_time_pane_t1

0x840c,	// (0x0006ba73) cale_week_time_pane_t2

0x8446,	// (0x0006baad) cale_week_time_pane_t3

0x8480,	// (0x0006bae7) cale_week_time_pane_t4

0x84ba,	// (0x0006bb21) cale_week_time_pane_t5

0x84f4,	// (0x0006bb5b) cale_week_time_pane_t6

0x852e,	// (0x0006bb95) cale_week_time_pane_t7

0x8568,	// (0x0006bbcf) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x00072843) cale_week_time_pane_t

0x85a2,	// (0x0006bc09) cell_cale_week_pane_g2

0x85c6,	// (0x0006bc2d) cell_cale_week_pane_g3_ParamLimits

0x85c6,	// (0x0006bc2d) cell_cale_week_pane_g3

0x0a88,	// (0x000640ef) grid_highlight_pane_cp07

0x0a90,	// (0x000640f7) listscroll_gms_pane

0x0a9a,	// (0x00064101) grid_gms_pane

0x0aa3,	// (0x0006410a) listscroll_gms_pane_g1

0x0aab,	// (0x00064112) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x00072854) listscroll_gms_pane_g

0x85de,	// (0x0006bc45) scroll_pane_cp010

0x85e7,	// (0x0006bc4e) cell_gms_pane_ParamLimits

0x85e7,	// (0x0006bc4e) cell_gms_pane

0x85f8,	// (0x0006bc5f) cell_gms_pane_g1

0x0ab3,	// (0x0006411a) cell_gms_pane_g2

0x0a0b,	// (0x00064072) cell_gms_pane_g3

0x0abb,	// (0x00064122) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x00072859) cell_gms_pane_g

0x0ac4,	// (0x0006412b) grid_highlight_pane_cp09

0xa502,	// (0x0006db69) phob_pre_status_pane_g1

0xa50a,	// (0x0006db71) phob_pre_status_pane_g2

0xa512,	// (0x0006db79) phob_pre_status_pane_g3

0xa51a,	// (0x0006db81) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x00072c57) phob_pre_status_pane_g

0xa52a,	// (0x0006db91) phob_pre_status_pane_t1

0xa538,	// (0x0006db9f) phob_pre_status_pane_t2

0xa546,	// (0x0006dbad) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x00072c62) phob_pre_status_pane_t

0x0acc,	// (0x00064133) bg_list_pane_cp05

0x8600,	// (0x0006bc67) grid_vorec_pane

0x0ad4,	// (0x0006413b) vorec_t1

0x0ae2,	// (0x00064149) vorec_t2

0x0af0,	// (0x00064157) vorec_t3

0x8608,	// (0x0006bc6f) vorec_t4

0xedca,	// (0x00072431) vorec_t5

0xedd8,	// (0x0007243f) vorec_t6

0x0004,

0xf1fb,	// (0x00072862) vorec_t

0xede6,	// (0x0007244d) wait_bar_pane_cp01

0x192a,	// (0x00064f91) cell_vorec_pane_ParamLimits

0x192a,	// (0x00064f91) cell_vorec_pane

0x8616,	// (0x0006bc7d) cell_vorec_pane_g1

0x0517,	// (0x00063b7e) grid_highlight_pane_cp05

0x862c,	// (0x0006bc93) cams_zoom_pane

0x8638,	// (0x0006bc9f) image_vga_pane

0x8645,	// (0x0006bcac) main_camera_pane_g1

0x8651,	// (0x0006bcb8) main_camera_pane_g2

0x865d,	// (0x0006bcc4) main_camera_pane_g3

0x8669,	// (0x0006bcd0) main_camera_pane_g4

0x8675,	// (0x0006bcdc) main_camera_pane_g5

0x8681,	// (0x0006bce8) main_camera_pane_g6

0x868d,	// (0x0006bcf4) main_camera_pane_g7

0x0007,

0xf206,	// (0x0007286d) main_camera_pane_g

0x8699,	// (0x0006bd00) main_camera_pane_t1

0x86ab,	// (0x0006bd12) main_camera_pane_t2

0x0001,

0xf217,	// (0x0007287e) main_camera_pane_t

0x86cf,	// (0x0006bd36) cams_zoom_pane_cp_ParamLimits

0x86cf,	// (0x0006bd36) cams_zoom_pane_cp

0x86f3,	// (0x0006bd5a) image_cif_pane_ParamLimits

0x86f3,	// (0x0006bd5a) image_cif_pane

0x870d,	// (0x0006bd74) image_subqcif_pane

0x8715,	// (0x0006bd7c) main_video_pane_g1_ParamLimits

0x8715,	// (0x0006bd7c) main_video_pane_g1

0x8735,	// (0x0006bd9c) main_video_pane_g2_ParamLimits

0x8735,	// (0x0006bd9c) main_video_pane_g2

0x8763,	// (0x0006bdca) main_video_pane_g3_ParamLimits

0x8763,	// (0x0006bdca) main_video_pane_g3

0x878c,	// (0x0006bdf3) main_video_pane_g4_ParamLimits

0x878c,	// (0x0006bdf3) main_video_pane_g4

0x87b5,	// (0x0006be1c) main_video_pane_g5_ParamLimits

0x87b5,	// (0x0006be1c) main_video_pane_g5

0x0b22,	// (0x00064189) main_video_pane_g6_ParamLimits

0x0b22,	// (0x00064189) main_video_pane_g6

0x0006,

0xf21c,	// (0x00072883) main_video_pane_g_ParamLimits

0xf21c,	// (0x00072883) main_video_pane_g

0x87d7,	// (0x0006be3e) main_video_pane_t1_ParamLimits

0x87d7,	// (0x0006be3e) main_video_pane_t1

0x0b3c,	// (0x000641a3) cams_zoom_pane_g1

0x0b45,	// (0x000641ac) cams_zoom_pane_g2

0x0b4e,	// (0x000641b5) cams_zoom_pane_g3

0x0b57,	// (0x000641be) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x00072892) cams_zoom_pane_g

0x8821,	// (0x0006be88) grid_cams_pane

0x882d,	// (0x0006be94) linegrid_cams_pane

0x8839,	// (0x0006bea0) cell_cams_pane_ParamLimits

0x8839,	// (0x0006bea0) cell_cams_pane

0x0b60,	// (0x000641c7) cams_burst_image_pane

0x0b68,	// (0x000641cf) cell_cams_pane_g1

0x0517,	// (0x00063b7e) grid_highlight_pane_cp03

0x0900,	// (0x00063f67) mp_bg_pane_g1

0x0517,	// (0x00063b7e) bg_list_pane_cp03

0x4b0b,	// (0x00068172) bg_mp_pane

0x4b13,	// (0x0006817a) grid_mp_pane

0x4b1b,	// (0x00068182) media_player_g1

0x4b23,	// (0x0006818a) media_player_t1

0x4b31,	// (0x00068198) media_player_t2

0x4b3f,	// (0x000681a6) media_player_t3

0x4b4d,	// (0x000681b4) media_player_t4

0x4b5b,	// (0x000681c2) media_player_t5

0x4b69,	// (0x000681d0) media_player_t6

0x4b77,	// (0x000681de) media_player_t7

0x0006,

0xf5da,	// (0x00072c41) media_player_t

0x4b85,	// (0x000681ec) wait_bar_pane_cp02

0xf5bf,	// (0x00072c26) main_usb_pane_t

0xa4f9,	// (0x0006db60) cell_mp_pane

0x0900,	// (0x00063f67) cell_mp_pane_g1

0x0517,	// (0x00063b7e) grid_highlight_pane_cp06

0x0b70,	// (0x000641d7) grid_skin_colour_pane

0x0b78,	// (0x000641df) list_highlight_pane_cp03

0x8864,	// (0x0006becb) skin_g1

0x0b80,	// (0x000641e7) skin_t1

0x0b8f,	// (0x000641f6) skin_t2

0x0001,

0xf260,	// (0x000728c7) skin_t

0x886c,	// (0x0006bed3) cell_skin_colour_pane_ParamLimits

0x886c,	// (0x0006bed3) cell_skin_colour_pane

0x0b9d,	// (0x00064204) cell_skin_colour_pane_g1

0x88e2,	// (0x0006bf49) call_video_g1_ParamLimits

0x88e2,	// (0x0006bf49) call_video_g1

0x88ee,	// (0x0006bf55) call_video_g2_ParamLimits

0x88ee,	// (0x0006bf55) call_video_g2

0x0001,

0xf265,	// (0x000728cc) call_video_g_ParamLimits

0xf265,	// (0x000728cc) call_video_g

0x893e,	// (0x0006bfa5) call_video_uplink_pane_cp1_ParamLimits

0x893e,	// (0x0006bfa5) call_video_uplink_pane_cp1

0x0baf,	// (0x00064216) call_video_uplink_pane_cp2

0x89fa,	// (0x0006c061) video_down_crop_pane_ParamLimits

0x89fa,	// (0x0006c061) video_down_crop_pane

0x8ac4,	// (0x0006c12b) video_down_pane_ParamLimits

0x8ac4,	// (0x0006c12b) video_down_pane

0x0bb7,	// (0x0006421e) video_down_subqcif_pane_ParamLimits

0x0bb7,	// (0x0006421e) video_down_subqcif_pane

0x0bcf,	// (0x00064236) video_down_subqcif_pane_cp_ParamLimits

0x0bcf,	// (0x00064236) video_down_subqcif_pane_cp

0x0bf3,	// (0x0006425a) im_reading_pane_ParamLimits

0x0bf3,	// (0x0006425a) im_reading_pane

0x8b90,	// (0x0006c1f7) im_writing_pane_ParamLimits

0x8b90,	// (0x0006c1f7) im_writing_pane

0x8ba6,	// (0x0006c20d) im_reading_pane_t1

0x0c0d,	// (0x00064274) list_im_pane

0x0c1e,	// (0x00064285) scroll_pane_cp07

0x8bde,	// (0x0006c245) im_writing_pane_t1_ParamLimits

0x8bde,	// (0x0006c245) im_writing_pane_t1

0x0c37,	// (0x0006429e) im_writing_pane_t2_ParamLimits

0x0c37,	// (0x0006429e) im_writing_pane_t2

0x0001,

0xf26f,	// (0x000728d6) im_writing_pane_t_ParamLimits

0xf26f,	// (0x000728d6) im_writing_pane_t

0x0517,	// (0x00063b7e) input_focus_pane_cp04

0x0517,	// (0x00063b7e) input_focus_pane_cp05

0x8bf3,	// (0x0006c25a) list_im_single_pane_ParamLimits

0x8bf3,	// (0x0006c25a) list_im_single_pane

0x0c54,	// (0x000642bb) list_single_im_pane_t1

0xa4bf,	// (0x0006db26) blid_accuracy_pane

0xa4c7,	// (0x0006db2e) blid_compass_pane

0xa4cf,	// (0x0006db36) main_location_t1

0xa4dd,	// (0x0006db44) main_location_t2

0xa4eb,	// (0x0006db52) main_location_t3

0x0002,

0xf5e9,	// (0x00072c50) main_location_t

0x0517,	// (0x00063b7e) aid_levels_location

0x0900,	// (0x00063f67) blid_accuracy_pane_g1

0x0900,	// (0x00063f67) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x00072938) blid_accuracy_pane_g

0x0c8e,	// (0x000642f5) wml_content_pane

0x0ccc,	// (0x00064333) wml_button_pane_ParamLimits

0x0ccc,	// (0x00064333) wml_button_pane

0x8c0b,	// (0x0006c272) wml_list_single_large_pane_ParamLimits

0x8c0b,	// (0x0006c272) wml_list_single_large_pane

0x8c22,	// (0x0006c289) wml_list_single_medium_pane_ParamLimits

0x8c22,	// (0x0006c289) wml_list_single_medium_pane

0x8c3a,	// (0x0006c2a1) wml_list_single_small_pane_ParamLimits

0x8c3a,	// (0x0006c2a1) wml_list_single_small_pane

0x0ce0,	// (0x00064347) wml_selection_box_pane_ParamLimits

0x0ce0,	// (0x00064347) wml_selection_box_pane

0x0cf3,	// (0x0006435a) wml_list_single_pane_t1

0x0d02,	// (0x00064369) wml_list_single_medium_pane_t1

0x0d11,	// (0x00064378) wml_list_single_large_pane_t1

0x0d20,	// (0x00064387) input_focus_pane_cp02_ParamLimits

0x0d20,	// (0x00064387) input_focus_pane_cp02

0x0d33,	// (0x0006439a) wml_selection_box_pane_g1

0x0d3c,	// (0x000643a3) wml_selection_box_pane_t1_ParamLimits

0x0d3c,	// (0x000643a3) wml_selection_box_pane_t1

0x0772,	// (0x00063dd9) bg_wml_button_pane_ParamLimits

0x0772,	// (0x00063dd9) bg_wml_button_pane

0x0d54,	// (0x000643bb) wml_button_pane_g1

0x0d5c,	// (0x000643c3) wml_button_pane_t1

0x0d54,	// (0x000643bb) wml_button_bg_pane_g1

0x0d6c,	// (0x000643d3) wml_button_bg_pane_g2

0x0d74,	// (0x000643db) wml_button_bg_pane_g3

0x0d7c,	// (0x000643e3) wml_button_bg_pane_g4

0x0d84,	// (0x000643eb) wml_button_bg_pane_g5

0x0d8c,	// (0x000643f3) wml_button_bg_pane_g6

0x0d94,	// (0x000643fb) wml_button_bg_pane_g7

0x0d9c,	// (0x00064403) wml_button_bg_pane_g8

0x0da4,	// (0x0006440b) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x000728db) wml_button_bg_pane_g

0x8c55,	// (0x0006c2bc) bg_list_pane_cp02

0x0dac,	// (0x00064413) mce_header_pane_ParamLimits

0x0dac,	// (0x00064413) mce_header_pane

0x0dc0,	// (0x00064427) mce_icon_pane

0x0dc0,	// (0x00064427) mce_image_pane

0x0dc9,	// (0x00064430) mce_text_pane_ParamLimits

0x0dc9,	// (0x00064430) mce_text_pane

0x8c5e,	// (0x0006c2c5) scroll_pane_cp03

0x8c5e,	// (0x0006c2c5) scroll_pane_cp04

0x0ddd,	// (0x00064444) scroll_pane_cp05_ParamLimits

0x0ddd,	// (0x00064444) scroll_pane_cp05

0x8c66,	// (0x0006c2cd) mce_header_field_pane_ParamLimits

0x8c66,	// (0x0006c2cd) mce_header_field_pane

0x8c86,	// (0x0006c2ed) mce_header_field_pane_2_ParamLimits

0x8c86,	// (0x0006c2ed) mce_header_field_pane_2

0x8c9c,	// (0x0006c303) mce_header_field_pane_3

0x8ca4,	// (0x0006c30b) list_single_mce_message_pane_ParamLimits

0x8ca4,	// (0x0006c30b) list_single_mce_message_pane

0x8cbb,	// (0x0006c322) list_single_mce_smart_pane_ParamLimits

0x8cbb,	// (0x0006c322) list_single_mce_smart_pane

0x0de9,	// (0x00064450) input_focus_pane_cp03

0x0df2,	// (0x00064459) list_header_data_pane

0x8cdd,	// (0x0006c344) mce_header_field_pane_t1

0x8ceb,	// (0x0006c352) list_single_mce_header_pane_ParamLimits

0x8ceb,	// (0x0006c352) list_single_mce_header_pane

0x0dfa,	// (0x00064461) list_single_mce_header_pane_t1

0x0e09,	// (0x00064470) list_single_mce_message_pane_g1

0x0e12,	// (0x00064479) list_single_mce_message_pane_t1

0x8d29,	// (0x0006c390) bg_cale_heading_pane_cp01_ParamLimits

0x8d29,	// (0x0006c390) bg_cale_heading_pane_cp01

0x0e21,	// (0x00064488) bg_cale_pane_cp02_ParamLimits

0x0e21,	// (0x00064488) bg_cale_pane_cp02

0x8d58,	// (0x0006c3bf) cale_month_corner_pane

0x8d72,	// (0x0006c3d9) cale_month_day_heading_pane_ParamLimits

0x8d72,	// (0x0006c3d9) cale_month_day_heading_pane

0x8da1,	// (0x0006c408) cale_month_pane_g1_ParamLimits

0x8da1,	// (0x0006c408) cale_month_pane_g1

0x8dc5,	// (0x0006c42c) cale_month_pane_g2_ParamLimits

0x8dc5,	// (0x0006c42c) cale_month_pane_g2

0x8de4,	// (0x0006c44b) cale_month_pane_g3_ParamLimits

0x8de4,	// (0x0006c44b) cale_month_pane_g3

0x8e20,	// (0x0006c487) cale_month_pane_g4_ParamLimits

0x8e20,	// (0x0006c487) cale_month_pane_g4

0x8e5c,	// (0x0006c4c3) cale_month_pane_g5_ParamLimits

0x8e5c,	// (0x0006c4c3) cale_month_pane_g5

0x8e98,	// (0x0006c4ff) cale_month_pane_g6_ParamLimits

0x8e98,	// (0x0006c4ff) cale_month_pane_g6

0x8ed4,	// (0x0006c53b) cale_month_pane_g7_ParamLimits

0x8ed4,	// (0x0006c53b) cale_month_pane_g7

0x8f10,	// (0x0006c577) cale_month_pane_g8_ParamLimits

0x8f10,	// (0x0006c577) cale_month_pane_g8

0x8f4c,	// (0x0006c5b3) cale_month_pane_g9_ParamLimits

0x8f4c,	// (0x0006c5b3) cale_month_pane_g9

0x8f86,	// (0x0006c5ed) cale_month_pane_g10_ParamLimits

0x8f86,	// (0x0006c5ed) cale_month_pane_g10

0x8fc0,	// (0x0006c627) cale_month_pane_g11_ParamLimits

0x8fc0,	// (0x0006c627) cale_month_pane_g11

0x8ffa,	// (0x0006c661) cale_month_pane_g12_ParamLimits

0x8ffa,	// (0x0006c661) cale_month_pane_g12

0x9034,	// (0x0006c69b) cale_month_pane_g13_ParamLimits

0x9034,	// (0x0006c69b) cale_month_pane_g13

0x000c,

0xf287,	// (0x000728ee) cale_month_pane_g_ParamLimits

0xf287,	// (0x000728ee) cale_month_pane_g

0x906e,	// (0x0006c6d5) cale_month_week_pane

0x9081,	// (0x0006c6e8) grid_cale_month_pane_ParamLimits

0x9081,	// (0x0006c6e8) grid_cale_month_pane

0x90a7,	// (0x0006c70e) cale_month_day_heading_pane_t1

0x912d,	// (0x0006c794) cale_month_day_heading_pane_t2

0x91be,	// (0x0006c825) cale_month_day_heading_pane_t3

0x924f,	// (0x0006c8b6) cale_month_day_heading_pane_t4

0x92e0,	// (0x0006c947) cale_month_day_heading_pane_t5

0x9371,	// (0x0006c9d8) cale_month_day_heading_pane_t6

0x9402,	// (0x0006ca69) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x00072909) cale_month_day_heading_pane_t

0x0a7a,	// (0x000640e1) bg_cale_side_pane_cp01

0x9493,	// (0x0006cafa) cale_month_week_pane_t1

0x94cc,	// (0x0006cb33) cale_month_week_pane_t2

0x9505,	// (0x0006cb6c) cale_month_week_pane_t3

0x953e,	// (0x0006cba5) cale_month_week_pane_t4

0x9577,	// (0x0006cbde) cale_month_week_pane_t5

0x95b0,	// (0x0006cc17) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x00072918) cale_month_week_pane_t

0x95e9,	// (0x0006cc50) cell_cale_month_pane_ParamLimits

0x95e9,	// (0x0006cc50) cell_cale_month_pane

0x96d7,	// (0x0006cd3e) cell_cale_month_pane_g1

0x96e3,	// (0x0006cd4a) cell_cale_month_pane_t1_ParamLimits

0x96e3,	// (0x0006cd4a) cell_cale_month_pane_t1

0x0a88,	// (0x000640ef) grid_highlight_pane_cp08

0x0900,	// (0x00063f67) main_smil_g1

0x9703,	// (0x0006cd6a) smil_status_pane

0x0e6c,	// (0x000644d3) smil_text_pane

0x49eb,	// (0x00068052) bg_popup_call3_rect_pane_g8

0x49f3,	// (0x0006805a) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x00072bd1) bg_popup_call3_rect_pane_g

0x4c97,	// (0x000682fe) smil_status_volume_pane_g1

0x9714,	// (0x0006cd7b) smil_status_pane_t1

0xa83c,	// (0x0006dea3) volume_smil_pane

0x0e76,	// (0x000644dd) list_smil_text_pane

0x972b,	// (0x0006cd92) scroll_pane_cp011

0x9734,	// (0x0006cd9b) smil_text_list_pane_t1_ParamLimits

0x9734,	// (0x0006cd9b) smil_text_list_pane_t1

0x9773,	// (0x0006cdda) aid_volume_smil_ParamLimits

0x9773,	// (0x0006cdda) aid_volume_smil

0x0900,	// (0x00063f67) smil_volume_pane_g1

0x0900,	// (0x00063f67) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x00072938) smil_volume_pane_g

0x8020,	// (0x0006b687) listscroll_cale_day_pane

0x0ea2,	// (0x00064509) bg_cale_pane

0x0eba,	// (0x00064521) list_cale_pane

0x0edd,	// (0x00064544) scroll_pane_cp09

0x0eee,	// (0x00064555) cale_bg_pane_g1

0x0ef6,	// (0x0006455d) cale_bg_pane_g2

0x0efe,	// (0x00064565) cale_bg_pane_g3

0x0f06,	// (0x0006456d) cale_bg_pane_g4

0x0f0e,	// (0x00064575) cale_bg_pane_g5

0x0f16,	// (0x0006457d) cale_bg_pane_g6

0x0f1e,	// (0x00064585) cale_bg_pane_g7

0x0f26,	// (0x0006458d) cale_bg_pane_g8

0x0f2e,	// (0x00064595) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0007293d) cale_bg_pane_g

0x979d,	// (0x0006ce04) list_cale_time_pane_ParamLimits

0x979d,	// (0x0006ce04) list_cale_time_pane

0x0f36,	// (0x0006459d) list_cale_time_pane_g1_ParamLimits

0x0f36,	// (0x0006459d) list_cale_time_pane_g1

0x0f42,	// (0x000645a9) list_cale_time_pane_g2_ParamLimits

0x0f42,	// (0x000645a9) list_cale_time_pane_g2

0x97b1,	// (0x0006ce18) list_cale_time_pane_g3_ParamLimits

0x97b1,	// (0x0006ce18) list_cale_time_pane_g3

0x97bd,	// (0x0006ce24) list_cale_time_pane_g4_ParamLimits

0x97bd,	// (0x0006ce24) list_cale_time_pane_g4

0x97c9,	// (0x0006ce30) list_cale_time_pane_g5_ParamLimits

0x97c9,	// (0x0006ce30) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x00072950) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x00072950) list_cale_time_pane_g

0x0f5c,	// (0x000645c3) list_cale_time_pane_t1_ParamLimits

0x0f5c,	// (0x000645c3) list_cale_time_pane_t1

0x0f84,	// (0x000645eb) list_cale_time_pane_t2_ParamLimits

0x0f84,	// (0x000645eb) list_cale_time_pane_t2

0x9a86,	// (0x0006d0ed) aid_blid_cardinal_pane

0x9ac4,	// (0x0006d12b) compass_pane_t4

0x0fac,	// (0x00064613) list_cale_time_pane_t4_ParamLimits

0x0fac,	// (0x00064613) list_cale_time_pane_t4

0x9ad2,	// (0x0006d139) compass_pane_t5

0x9ae0,	// (0x0006d147) compass_pane_t6

0x9aee,	// (0x0006d155) compass_pane_t7

0x1486,	// (0x00064aed) navi_pane_cc_t1

0x163d,	// (0x00064ca4) aid_phob_thumbnail_center_pane

0xa06c,	// (0x0006d6d3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0007295d) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0007295d) list_cale_time_pane_t

0x0170,	// (0x000637d7) bg_popup_window_pane_cp02_ParamLimits

0x0170,	// (0x000637d7) bg_popup_window_pane_cp02

0x0fd4,	// (0x0006463b) heading_pane_cp01_ParamLimits

0x0fd4,	// (0x0006463b) heading_pane_cp01

0x0fe0,	// (0x00064647) loc_req_pane_ParamLimits

0x0fe0,	// (0x00064647) loc_req_pane

0x0ff0,	// (0x00064657) loc_type_pane_ParamLimits

0x0ff0,	// (0x00064657) loc_type_pane

0x1002,	// (0x00064669) loc_type_pane_t1_ParamLimits

0x1002,	// (0x00064669) loc_type_pane_t1

0x1014,	// (0x0006467b) loc_type_pane_t2_ParamLimits

0x1014,	// (0x0006467b) loc_type_pane_t2

0x1026,	// (0x0006468d) loc_type_pane_t3_ParamLimits

0x1026,	// (0x0006468d) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x00072964) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x00072964) loc_type_pane_t

0x1038,	// (0x0006469f) list_loc_req_pane

0x1042,	// (0x000646a9) scroll_pane_cp012

0x97d5,	// (0x0006ce3c) list_single_loc_request_popup_menu_pane_ParamLimits

0x97d5,	// (0x0006ce3c) list_single_loc_request_popup_menu_pane

0x104b,	// (0x000646b2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x104b,	// (0x000646b2) list_single_loc_request_popup_menu_pane_g1

0x1057,	// (0x000646be) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1057,	// (0x000646be) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0007296b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0007296b) list_single_loc_request_popup_menu_pane_g

0x1063,	// (0x000646ca) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1063,	// (0x000646ca) list_single_loc_request_popup_menu_pane_t1

0x97e7,	// (0x0006ce4e) bg_popup_window_pane_cp03_ParamLimits

0x97e7,	// (0x0006ce4e) bg_popup_window_pane_cp03

0x97f5,	// (0x0006ce5c) heading_loc_req_pane_ParamLimits

0x97f5,	// (0x0006ce5c) heading_loc_req_pane

0x9801,	// (0x0006ce68) popup_dyc_status_message_window_g1_ParamLimits

0x9801,	// (0x0006ce68) popup_dyc_status_message_window_g1

0x980d,	// (0x0006ce74) popup_dyc_status_message_window_t1_ParamLimits

0x980d,	// (0x0006ce74) popup_dyc_status_message_window_t1

0x981f,	// (0x0006ce86) popup_dyc_status_message_window_t2_ParamLimits

0x981f,	// (0x0006ce86) popup_dyc_status_message_window_t2

0x9831,	// (0x0006ce98) popup_dyc_status_message_window_t3_ParamLimits

0x9831,	// (0x0006ce98) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x00072970) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x00072970) popup_dyc_status_message_window_t

0x0517,	// (0x00063b7e) bg_heading_pane_cp01

0x1085,	// (0x000646ec) heading_loc_req_pane_g1

0x108d,	// (0x000646f4) heading_loc_req_pane_g2

0x1095,	// (0x000646fc) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x00072977) heading_loc_req_pane_g

0x109d,	// (0x00064704) heading_loc_req_pane_t1

0x10ac,	// (0x00064713) bg_popup_sub_pane_cp01_ParamLimits

0x10ac,	// (0x00064713) bg_popup_sub_pane_cp01

0x10ba,	// (0x00064721) popup_cale_events_window_g1_ParamLimits

0x10ba,	// (0x00064721) popup_cale_events_window_g1

0x10da,	// (0x00064741) popup_cale_events_window_g2_ParamLimits

0x10da,	// (0x00064741) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x000729ab) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x000729ab) popup_cale_events_window_g

0x10fa,	// (0x00064761) popup_cale_events_window_t1_ParamLimits

0x10fa,	// (0x00064761) popup_cale_events_window_t1

0x110c,	// (0x00064773) popup_cale_events_window_t2_ParamLimits

0x110c,	// (0x00064773) popup_cale_events_window_t2

0x114a,	// (0x000647b1) popup_cale_events_window_t3_ParamLimits

0x114a,	// (0x000647b1) popup_cale_events_window_t3

0x1184,	// (0x000647eb) popup_cale_events_window_t4_ParamLimits

0x1184,	// (0x000647eb) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x000729b0) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x000729b0) popup_cale_events_window_t

0x985d,	// (0x0006cec4) call_type_pane

0x1655,	// (0x00064cbc) popup_call_status_window_g1

0x9869,	// (0x0006ced0) popup_call_status_window_g2

0x9875,	// (0x0006cedc) popup_call_status_window_g3

0x0002,

0xf352,	// (0x000729b9) popup_call_status_window_g

0x11ba,	// (0x00064821) call_type_pane_g1

0x11c3,	// (0x0006482a) call_type_pane_g2

0x0001,

0xf359,	// (0x000729c0) call_type_pane_g

0x0517,	// (0x00063b7e) bg_popup_sub_pane_cp02

0x11cc,	// (0x00064833) listscroll_popup_wml_pane

0x11d4,	// (0x0006483b) list_wml_pane

0x11de,	// (0x00064845) scroll_pane_cp013

0x9881,	// (0x0006cee8) list_single_graphic_popup_wml_pane_ParamLimits

0x9881,	// (0x0006cee8) list_single_graphic_popup_wml_pane

0x0900,	// (0x00063f67) list_single_graphic_popup_wml_pane_g1

0x11e7,	// (0x0006484e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x000729c5) list_single_graphic_popup_wml_pane_g

0x11ef,	// (0x00064856) list_single_graphic_popup_wml_pane_t1

0x11fd,	// (0x00064864) aid_call_pane

0x076a,	// (0x00063dd1) popup_clock_analogue_window_g1

0x076a,	// (0x00063dd1) popup_clock_analogue_window_g2

0x9895,	// (0x0006cefc) popup_clock_analogue_window_g3

0x9895,	// (0x0006cefc) popup_clock_analogue_window_g4

0x0900,	// (0x00063f67) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x000729ca) popup_clock_analogue_window_g

0x989d,	// (0x0006cf04) popup_clock_analogue_window_t1

0x98ab,	// (0x0006cf12) clock_digital_number_pane_ParamLimits

0x98ab,	// (0x0006cf12) clock_digital_number_pane

0x98b7,	// (0x0006cf1e) clock_digital_number_pane_cp02_ParamLimits

0x98b7,	// (0x0006cf1e) clock_digital_number_pane_cp02

0x98c3,	// (0x0006cf2a) clock_digital_number_pane_cp03_ParamLimits

0x98c3,	// (0x0006cf2a) clock_digital_number_pane_cp03

0x98cf,	// (0x0006cf36) clock_digital_number_pane_cp04_ParamLimits

0x98cf,	// (0x0006cf36) clock_digital_number_pane_cp04

0x98db,	// (0x0006cf42) clock_digital_separator_pane_ParamLimits

0x98db,	// (0x0006cf42) clock_digital_separator_pane

0x98e7,	// (0x0006cf4e) popup_clock_digital_window_t1

0x0900,	// (0x00063f67) clock_digital_number_pane_g1

0x0900,	// (0x00063f67) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x00072938) clock_digital_number_pane_g

0x0900,	// (0x00063f67) clock_digital_separator_pane_g1

0x0900,	// (0x00063f67) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x00072938) clock_digital_separator_pane_g

0x0517,	// (0x00063b7e) bg_popup_window_pane_cp04

0x127c,	// (0x000648e3) heading_pane_cp03

0x1284,	// (0x000648eb) listscroll_popup_gms_pane

0x128c,	// (0x000648f3) grid_large_graphic_popup_pane

0x1296,	// (0x000648fd) listscroll_popup_gms_pane_g1

0x129e,	// (0x00064905) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x000729d5) listscroll_popup_gms_pane_g

0x0cc4,	// (0x0006432b) scroll_pane_cp014

0x9904,	// (0x0006cf6b) cell_large_graphic_popup_pane_ParamLimits

0x9904,	// (0x0006cf6b) cell_large_graphic_popup_pane

0x991b,	// (0x0006cf82) cell_large_graphic_popup_pane_g1_ParamLimits

0x991b,	// (0x0006cf82) cell_large_graphic_popup_pane_g1

0x12a6,	// (0x0006490d) cell_large_graphic_popup_pane_g2_ParamLimits

0x12a6,	// (0x0006490d) cell_large_graphic_popup_pane_g2

0x12b2,	// (0x00064919) cell_large_graphic_popup_pane_g3_ParamLimits

0x12b2,	// (0x00064919) cell_large_graphic_popup_pane_g3

0x12bf,	// (0x00064926) cell_large_graphic_popup_pane_g4_ParamLimits

0x12bf,	// (0x00064926) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x000729da) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x000729da) cell_large_graphic_popup_pane_g

0x12cf,	// (0x00064936) grid_highlight_pane_cp010

0x0900,	// (0x00063f67) bg_popup_call_pane_g1

0x12d9,	// (0x00064940) list_single_graphic_popup_conf_pane_ParamLimits

0x12d9,	// (0x00064940) list_single_graphic_popup_conf_pane

0x12ec,	// (0x00064953) list_highlight_pane_cp01

0x12f5,	// (0x0006495c) list_single_graphic_popup_conf_pane_g1

0x12fd,	// (0x00064964) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x000729e3) list_single_graphic_popup_conf_pane_g

0x1305,	// (0x0006496c) list_single_graphic_popup_conf_pane_t1

0x1313,	// (0x0006497a) linegrid_cams_pane_g1

0x9927,	// (0x0006cf8e) linegrid_cams_pane_g2

0x0a0b,	// (0x00064072) linegrid_cams_pane_g3

0x131c,	// (0x00064983) linegrid_cams_pane_g4

0x9930,	// (0x0006cf97) linegrid_cams_pane_g5

0x9939,	// (0x0006cfa0) linegrid_cams_pane_g6

0x0abb,	// (0x00064122) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x000729e8) linegrid_cams_pane_g

0x1325,	// (0x0006498c) popup_clock_analogue_window

0x1325,	// (0x0006498c) popup_clock_digital_window

0x0517,	// (0x00063b7e) popup_phob_thumbnail_window

0x0900,	// (0x00063f67) call_video_uplink_pane_g1

0x132e,	// (0x00064995) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x000729f7) call_video_uplink_pane_g

0x0a88,	// (0x000640ef) video_uplink_pane

0x1336,	// (0x0006499d) mce_image_pane_g1

0x9942,	// (0x0006cfa9) mce_image_pane_g2

0x994a,	// (0x0006cfb1) mce_image_pane_g3

0x9952,	// (0x0006cfb9) mce_image_pane_g4

0x995a,	// (0x0006cfc1) mce_image_pane_g5

0x0004,

0xf395,	// (0x000729fc) mce_image_pane_g

0x1340,	// (0x000649a7) control_top_pane_stacon_cp01_ParamLimits

0x1340,	// (0x000649a7) control_top_pane_stacon_cp01

0x1350,	// (0x000649b7) uni_indicator_pane_stacon_cp01_ParamLimits

0x1350,	// (0x000649b7) uni_indicator_pane_stacon_cp01

0x1361,	// (0x000649c8) bg_popup_sub_pane_cp03

0x136b,	// (0x000649d2) chi_dic_find_pane

0x9962,	// (0x0006cfc9) listscroll_chi_dic_pane

0x1373,	// (0x000649da) main_pane_chidic_g1

0x137b,	// (0x000649e2) chi_dic_find_pane_t1

0x1389,	// (0x000649f0) find_chidic_pane

0x1392,	// (0x000649f9) chi_dic_list_pane_ParamLimits

0x1392,	// (0x000649f9) chi_dic_list_pane

0x13a3,	// (0x00064a0a) scroll_pane_cp020

0x13ab,	// (0x00064a12) find_chidic_pane_t1

0x0517,	// (0x00063b7e) input_focus_pane_cp06

0x9974,	// (0x0006cfdb) list_chi_dic_pane_ParamLimits

0x9974,	// (0x0006cfdb) list_chi_dic_pane

0x9987,	// (0x0006cfee) list_chi_dic_pane_t1_ParamLimits

0x9987,	// (0x0006cfee) list_chi_dic_pane_t1

0x0517,	// (0x00063b7e) list_highlight_pane_cp020

0x13ba,	// (0x00064a21) bg_cale_heading_pane_g1

0x999a,	// (0x0006d001) bg_cale_heading_pane_g2

0x99a2,	// (0x0006d009) bg_cale_heading_pane_g3

0x99aa,	// (0x0006d011) bg_cale_heading_pane_g4

0x99b2,	// (0x0006d019) bg_cale_heading_pane_g5

0x99ba,	// (0x0006d021) bg_cale_heading_pane_g6

0x99c2,	// (0x0006d029) bg_cale_heading_pane_g7

0x99ca,	// (0x0006d031) bg_cale_heading_pane_g8

0x99d2,	// (0x0006d039) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x00072a07) bg_cale_heading_pane_g

0x13ba,	// (0x00064a21) bg_cale_side_pane_g1

0x99da,	// (0x0006d041) bg_cale_side_pane_g2

0x99e2,	// (0x0006d049) bg_cale_side_pane_g3

0x99ea,	// (0x0006d051) bg_cale_side_pane_g4

0x99f2,	// (0x0006d059) bg_cale_side_pane_g5

0x99fa,	// (0x0006d061) bg_cale_side_pane_g6

0x9a02,	// (0x0006d069) bg_cale_side_pane_g7

0x9a0a,	// (0x0006d071) bg_cale_side_pane_g8

0x9a12,	// (0x0006d079) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x00072a1a) bg_cale_side_pane_g

0x9a1a,	// (0x0006d081) popup_call_status_window_ParamLimits

0x9a1a,	// (0x0006d081) popup_call_status_window

0x13c2,	// (0x00064a29) stacon_top_pane

0x13ca,	// (0x00064a31) status_pane_ParamLimits

0x13ca,	// (0x00064a31) status_pane

0x13e4,	// (0x00064a4b) status_small_pane

0x13ec,	// (0x00064a53) control_pane

0x0517,	// (0x00063b7e) stacon_bottom_pane

0x13f4,	// (0x00064a5b) list_single_mce_smart_pane_t1_ParamLimits

0x13f4,	// (0x00064a5b) list_single_mce_smart_pane_t1

0x1407,	// (0x00064a6e) list_single_mce_smart_pane_t2_ParamLimits

0x1407,	// (0x00064a6e) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x00072a2d) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x00072a2d) list_single_mce_smart_pane_t

0x9a29,	// (0x0006d090) compass_pane

0x9a32,	// (0x0006d099) main_location2_pane_t1

0x9a48,	// (0x0006d0af) main_location2_pane_t2

0x9a5e,	// (0x0006d0c5) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x00072a32) main_location2_pane_t

0x142f,	// (0x00064a96) compass_pane_g1_ParamLimits

0x142f,	// (0x00064a96) compass_pane_g1

0x9aa6,	// (0x0006d10d) compass_pane_t1

0x9ab5,	// (0x0006d11c) compass_pane_t2

0x0005,

0xf3d4,	// (0x00072a3b) compass_pane_t

0x9afc,	// (0x0006d163) text_secondary_cp61

0x147d,	// (0x00064ae4) navi_pane_cams_g5

0x14c9,	// (0x00064b30) navi_pane_im_t1

0x14d7,	// (0x00064b3e) navi_pane_mp_g1_ParamLimits

0x14d7,	// (0x00064b3e) navi_pane_mp_g1

0x14eb,	// (0x00064b52) navi_pane_mp_g2_ParamLimits

0x14eb,	// (0x00064b52) navi_pane_mp_g2

0x14f7,	// (0x00064b5e) navi_pane_mp_g3_ParamLimits

0x14f7,	// (0x00064b5e) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x00072a4f) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x00072a4f) navi_pane_mp_g

0x1503,	// (0x00064b6a) navi_pane_mp_t1

0x1511,	// (0x00064b78) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x00072a56) navi_pane_mp_t

0x157c,	// (0x00064be3) navi_pane_vt_g1

0x1503,	// (0x00064b6a) navi_pane_vt_t1

0x1584,	// (0x00064beb) navi_slider_pane

0x0acc,	// (0x00064133) zooming_pane

0x158c,	// (0x00064bf3) navi_slider_pane_g1

0x9b7e,	// (0x0006d1e5) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x00072a5d) navi_slider_pane_g

0x15c2,	// (0x00064c29) aid_levels_zoom

0x15ca,	// (0x00064c31) zooming_pane_g1

0x15d2,	// (0x00064c39) zooming_pane_g2

0x15d2,	// (0x00064c39) zooming_pane_g3

0x0002,

0xf405,	// (0x00072a6c) zooming_pane_g

0x15da,	// (0x00064c41) level_10_zoom

0x15e3,	// (0x00064c4a) level_11_zoom

0x15ec,	// (0x00064c53) level_1_zoom

0x15f5,	// (0x00064c5c) level_2_zoom

0x15fe,	// (0x00064c65) level_3_zoom

0x1607,	// (0x00064c6e) level_4_zoom

0x1610,	// (0x00064c77) level_5_zoom

0x1619,	// (0x00064c80) level_6_zoom

0x1622,	// (0x00064c89) level_7_zoom

0x162b,	// (0x00064c92) level_8_zoom

0x1634,	// (0x00064c9b) level_9_zoom

0x1645,	// (0x00064cac) popup_phob_thumbnail_window_g1

0x164d,	// (0x00064cb4) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x00072a73) popup_phob_thumbnail_window_g

0x4b8d,	// (0x000681f4) level_1_location

0x4b95,	// (0x000681fc) level_2_location

0x4b9d,	// (0x00068204) level_3_location

0x4ba5,	// (0x0006820c) level_4_location

0x0acc,	// (0x00064133) level_5_location

0x9b90,	// (0x0006d1f7) mce_icon_pane_g1

0x9b98,	// (0x0006d1ff) mce_icon_pane_g2

0x0001,

0xf411,	// (0x00072a78) mce_icon_pane_g

0x9ba0,	// (0x0006d207) main_mup_pane_g1_ParamLimits

0x9ba0,	// (0x0006d207) main_mup_pane_g1

0x9bb8,	// (0x0006d21f) main_mup_pane_g2_ParamLimits

0x9bb8,	// (0x0006d21f) main_mup_pane_g2

0x9bd4,	// (0x0006d23b) main_mup_pane_g3_ParamLimits

0x9bd4,	// (0x0006d23b) main_mup_pane_g3

0x9bf0,	// (0x0006d257) main_mup_pane_g4_ParamLimits

0x9bf0,	// (0x0006d257) main_mup_pane_g4

0x9c0c,	// (0x0006d273) main_mup_pane_g5_ParamLimits

0x9c0c,	// (0x0006d273) main_mup_pane_g5

0x9c29,	// (0x0006d290) main_mup_pane_g6_ParamLimits

0x9c29,	// (0x0006d290) main_mup_pane_g6

0x9c45,	// (0x0006d2ac) main_mup_pane_g7_ParamLimits

0x9c45,	// (0x0006d2ac) main_mup_pane_g7

0x9c61,	// (0x0006d2c8) main_mup_pane_g8_ParamLimits

0x9c61,	// (0x0006d2c8) main_mup_pane_g8

0x9c7d,	// (0x0006d2e4) main_mup_pane_g9_ParamLimits

0x9c7d,	// (0x0006d2e4) main_mup_pane_g9

0x9c94,	// (0x0006d2fb) main_mup_pane_g10_ParamLimits

0x9c94,	// (0x0006d2fb) main_mup_pane_g10

0x9cab,	// (0x0006d312) main_mup_pane_g11_ParamLimits

0x9cab,	// (0x0006d312) main_mup_pane_g11

0x9cbf,	// (0x0006d326) main_mup_pane_g12_ParamLimits

0x9cbf,	// (0x0006d326) main_mup_pane_g12

0x9ccb,	// (0x0006d332) main_mup_pane_g13_ParamLimits

0x9ccb,	// (0x0006d332) main_mup_pane_g13

0x000c,

0xf416,	// (0x00072a7d) main_mup_pane_g_ParamLimits

0xf416,	// (0x00072a7d) main_mup_pane_g

0x9cdf,	// (0x0006d346) main_mup_pane_t1_ParamLimits

0x9cdf,	// (0x0006d346) main_mup_pane_t1

0x9cfc,	// (0x0006d363) main_mup_pane_t2_ParamLimits

0x9cfc,	// (0x0006d363) main_mup_pane_t2

0x9d16,	// (0x0006d37d) main_mup_pane_t3_ParamLimits

0x9d16,	// (0x0006d37d) main_mup_pane_t3

0x9d30,	// (0x0006d397) main_mup_pane_t4_ParamLimits

0x9d30,	// (0x0006d397) main_mup_pane_t4

0x9d42,	// (0x0006d3a9) main_mup_pane_t5_ParamLimits

0x9d42,	// (0x0006d3a9) main_mup_pane_t5

0x9d54,	// (0x0006d3bb) main_mup_pane_t6_ParamLimits

0x9d54,	// (0x0006d3bb) main_mup_pane_t6

0x0005,

0xf431,	// (0x00072a98) main_mup_pane_t_ParamLimits

0xf431,	// (0x00072a98) main_mup_pane_t

0x9d6a,	// (0x0006d3d1) mup_progress_pane_ParamLimits

0x9d6a,	// (0x0006d3d1) mup_progress_pane

0x9d76,	// (0x0006d3dd) mup_visualizer_pane_ParamLimits

0x9d76,	// (0x0006d3dd) mup_visualizer_pane

0x9da4,	// (0x0006d40b) mup_volume_pane_ParamLimits

0x9da4,	// (0x0006d40b) mup_volume_pane

0x1655,	// (0x00064cbc) mup_visualizer_pane_g1_ParamLimits

0x1655,	// (0x00064cbc) mup_visualizer_pane_g1

0x1655,	// (0x00064cbc) mup_visualizer_pane_g2_ParamLimits

0x1655,	// (0x00064cbc) mup_visualizer_pane_g2

0x142f,	// (0x00064a96) mup_visualizer_pane_g3_ParamLimits

0x142f,	// (0x00064a96) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x00072aa5) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x00072aa5) mup_visualizer_pane_g

0x0900,	// (0x00063f67) mup_volume_pane_g1

0x166b,	// (0x00064cd2) mup_volume_pane_g2

0x0001,

0xf445,	// (0x00072aac) mup_volume_pane_g

0x0900,	// (0x00063f67) mup_progress_pane_g1

0x1674,	// (0x00064cdb) mup_progress_pane_g2

0x167d,	// (0x00064ce4) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x00072ab1) mup_progress_pane_g

0x0517,	// (0x00063b7e) bg_popup_window_pane_cp05

0x1686,	// (0x00064ced) heading_pane_cp02_ParamLimits

0x1686,	// (0x00064ced) heading_pane_cp02

0x16a0,	// (0x00064d07) list_popup_blid_pane

0x16a8,	// (0x00064d0f) list_blid_sat_info_pane_ParamLimits

0x16a8,	// (0x00064d0f) list_blid_sat_info_pane

0x16bb,	// (0x00064d22) list_blid_sat_info_pane_g1

0x16c3,	// (0x00064d2a) list_blid_sat_info_pane_t1

0x9e97,	// (0x0006d4fe) mup_equalizer_pane_ParamLimits

0x9e97,	// (0x0006d4fe) mup_equalizer_pane

0x9eb0,	// (0x0006d517) mup_equalizer_pane_cp1_ParamLimits

0x9eb0,	// (0x0006d517) mup_equalizer_pane_cp1

0x9ec9,	// (0x0006d530) mup_equalizer_pane_cp2_ParamLimits

0x9ec9,	// (0x0006d530) mup_equalizer_pane_cp2

0x9ee2,	// (0x0006d549) mup_equalizer_pane_cp3_ParamLimits

0x9ee2,	// (0x0006d549) mup_equalizer_pane_cp3

0x9efb,	// (0x0006d562) mup_equalizer_pane_cp4_ParamLimits

0x9efb,	// (0x0006d562) mup_equalizer_pane_cp4

0x9f14,	// (0x0006d57b) mup_equalizer_pane_cp5

0x9f26,	// (0x0006d58d) mup_equalizer_pane_cp6

0x9f38,	// (0x0006d59f) mup_equalizer_pane_cp7

0x4a6b,	// (0x000680d2) bg_popup_call_poc_act_pane_g9

0x4a73,	// (0x000680da) bg_popup_call_poc_act_pane_g10

0x4a7b,	// (0x000680e2) bg_popup_call_poc_act_pane_g11

0x000a,

0x0772,	// (0x00063dd9) mup_scale_pane

0x0900,	// (0x00063f67) mup_scale_pane_g1

0x16d1,	// (0x00064d38) mup_scale_pane_g2

0x0006,

0xf466,	// (0x00072acd) mup_scale_pane_g

0x16f5,	// (0x00064d5c) msg_data_pane

0x16fd,	// (0x00064d64) scroll_pane_cp017

0x6871,	// (0x00069ed8) bg_list_pane_cp04_ParamLimits

0x6871,	// (0x00069ed8) bg_list_pane_cp04

0x1705,	// (0x00064d6c) msg_data_pane_g1

0x9942,	// (0x0006cfa9) msg_data_pane_g2

0x994a,	// (0x0006cfb1) msg_data_pane_g3

0x9f5c,	// (0x0006d5c3) msg_data_pane_g4

0x995a,	// (0x0006cfc1) msg_data_pane_g5

0x9b90,	// (0x0006d1f7) msg_data_pane_g6

0x9f64,	// (0x0006d5cb) msg_data_pane_g7

0x0006,

0xf475,	// (0x00072adc) msg_data_pane_g

0x6891,	// (0x00069ef8) msg_text_pane_ParamLimits

0x6891,	// (0x00069ef8) msg_text_pane

0x9f6c,	// (0x0006d5d3) qrid_highlight_pane_cp011_ParamLimits

0x9f6c,	// (0x0006d5d3) qrid_highlight_pane_cp011

0x0517,	// (0x00063b7e) msg_body_pane

0x0517,	// (0x00063b7e) msg_header_pane

0x1716,	// (0x00064d7d) input_focus_pane_cp07

0x68c6,	// (0x00069f2d) msg_header_pane_t1_ParamLimits

0x68c6,	// (0x00069f2d) msg_header_pane_t1

0x68d8,	// (0x00069f3f) msg_header_pane_t2_ParamLimits

0x68d8,	// (0x00069f3f) msg_header_pane_t2

0x0001,

0xf489,	// (0x00072af0) msg_header_pane_t_ParamLimits

0xf489,	// (0x00072af0) msg_header_pane_t

0x172b,	// (0x00064d92) msg_body_pane_g1

0x68ea,	// (0x00069f51) msg_body_pane_t1_ParamLimits

0x68ea,	// (0x00069f51) msg_body_pane_t1

0x6915,	// (0x00069f7c) msg_body_pane_t2_ParamLimits

0x6915,	// (0x00069f7c) msg_body_pane_t2

0x6927,	// (0x00069f8e) msg_body_pane_t3_ParamLimits

0x6927,	// (0x00069f8e) msg_body_pane_t3

0x0002,

0xf48e,	// (0x00072af5) msg_body_pane_t_ParamLimits

0xf48e,	// (0x00072af5) msg_body_pane_t

0x9fd0,	// (0x0006d637) main_viewer_pane_g1_ParamLimits

0x9fd0,	// (0x0006d637) main_viewer_pane_g1

0x9fdc,	// (0x0006d643) main_viewer_pane_g2_ParamLimits

0x9fdc,	// (0x0006d643) main_viewer_pane_g2

0x9fe8,	// (0x0006d64f) main_viewer_pane_g3_ParamLimits

0x9fe8,	// (0x0006d64f) main_viewer_pane_g3

0x9ff7,	// (0x0006d65e) main_viewer_pane_g4_ParamLimits

0x9ff7,	// (0x0006d65e) main_viewer_pane_g4

0xa006,	// (0x0006d66d) main_viewer_pane_g5_ParamLimits

0xa006,	// (0x0006d66d) main_viewer_pane_g5

0xa006,	// (0x0006d66d) main_viewer_pane_g7_ParamLimits

0xa006,	// (0x0006d66d) main_viewer_pane_g7

0xa018,	// (0x0006d67f) main_viewer_pane_g8_ParamLimits

0xa018,	// (0x0006d67f) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x00072b05) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x00072b05) main_viewer_pane_g

0x1775,	// (0x00064ddc) viewer_content_pane_ParamLimits

0x1775,	// (0x00064ddc) viewer_content_pane

0xa048,	// (0x0006d6af) main_postcard_pane_g1_ParamLimits

0xa048,	// (0x0006d6af) main_postcard_pane_g1

0xa054,	// (0x0006d6bb) main_postcard_pane_g2_ParamLimits

0xa054,	// (0x0006d6bb) main_postcard_pane_g2

0xa060,	// (0x0006d6c7) main_postcard_pane_g3_ParamLimits

0xa060,	// (0x0006d6c7) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x00072b16) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x00072b16) main_postcard_pane_g

0xa06c,	// (0x0006d6d3) main_postcard_pane_g4

0x4c84,	// (0x000682eb) smil_status_volume_pane_g2

0xa090,	// (0x0006d6f7) postcard_pane_ParamLimits

0xa090,	// (0x0006d6f7) postcard_pane

0x1655,	// (0x00064cbc) postcard_pane_g1_ParamLimits

0x1655,	// (0x00064cbc) postcard_pane_g1

0xa0c0,	// (0x0006d727) postcard_pane_g2_ParamLimits

0xa0c0,	// (0x0006d727) postcard_pane_g2

0xa0cc,	// (0x0006d733) postcard_pane_g3_ParamLimits

0xa0cc,	// (0x0006d733) postcard_pane_g3

0x1791,	// (0x00064df8) postcard_pane_g4_ParamLimits

0x1791,	// (0x00064df8) postcard_pane_g4

0xa0d8,	// (0x0006d73f) postcard_pane_g5_ParamLimits

0xa0d8,	// (0x0006d73f) postcard_pane_g5

0xa0e4,	// (0x0006d74b) postcard_pane_g6_ParamLimits

0xa0e4,	// (0x0006d74b) postcard_pane_g6

0x1783,	// (0x00064dea) postcard_pane_g7_ParamLimits

0x1783,	// (0x00064dea) postcard_pane_g7

0x0006,

0xf4bc,	// (0x00072b23) postcard_pane_g_ParamLimits

0xf4bc,	// (0x00072b23) postcard_pane_g

0xa0f0,	// (0x0006d757) main_mp2_pane_g1_ParamLimits

0xa0f0,	// (0x0006d757) main_mp2_pane_g1

0xa0fc,	// (0x0006d763) main_mp2_pane_g2_ParamLimits

0xa0fc,	// (0x0006d763) main_mp2_pane_g2

0xa108,	// (0x0006d76f) main_mp2_pane_g3_ParamLimits

0xa108,	// (0x0006d76f) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x00072b32) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x00072b32) main_mp2_pane_g

0xa114,	// (0x0006d77b) main_mp2_pane_t1_ParamLimits

0xa114,	// (0x0006d77b) main_mp2_pane_t1

0xa129,	// (0x0006d790) main_mp2_pane_t2_ParamLimits

0xa129,	// (0x0006d790) main_mp2_pane_t2

0xa13b,	// (0x0006d7a2) main_mp2_pane_t3_ParamLimits

0xa13b,	// (0x0006d7a2) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x00072b39) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x00072b39) main_mp2_pane_t

0x179f,	// (0x00064e06) pec_content_pane_ParamLimits

0x179f,	// (0x00064e06) pec_content_pane

0x0cc4,	// (0x0006432b) scroll_pane_cp015

0x17b1,	// (0x00064e18) pec_attribute_pane_ParamLimits

0x17b1,	// (0x00064e18) pec_attribute_pane

0xa14d,	// (0x0006d7b4) pec_content_pane_g1_ParamLimits

0xa14d,	// (0x0006d7b4) pec_content_pane_g1

0x17c1,	// (0x00064e28) pec_content_pane_t1_ParamLimits

0x17c1,	// (0x00064e28) pec_content_pane_t1

0x17d3,	// (0x00064e3a) pec_content_pane_t2_ParamLimits

0x17d3,	// (0x00064e3a) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x00072b40) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x00072b40) pec_content_pane_t

0xa159,	// (0x0006d7c0) list_single_graphic_pane_cp01_ParamLimits

0xa159,	// (0x0006d7c0) list_single_graphic_pane_cp01

0x0772,	// (0x00063dd9) bg_popup_sub_pane_cp04

0x17e5,	// (0x00064e4c) popup_mup_playback_window_g1

0x17f1,	// (0x00064e58) popup_mup_playback_window_t1

0x1806,	// (0x00064e6d) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x00072b45) popup_mup_playback_window_t

0x183d,	// (0x00064ea4) main_image_pane_g1_ParamLimits

0x183d,	// (0x00064ea4) main_image_pane_g1

0x1880,	// (0x00064ee7) scroll_pane_cp018_ParamLimits

0x1880,	// (0x00064ee7) scroll_pane_cp018

0x1898,	// (0x00064eff) scroll_pane_cp016_ParamLimits

0x1898,	// (0x00064eff) scroll_pane_cp016

0xa1de,	// (0x0006d845) smil2_image_pane_ParamLimits

0xa1de,	// (0x0006d845) smil2_image_pane

0xa206,	// (0x0006d86d) smil2_root_pane_ParamLimits

0xa206,	// (0x0006d86d) smil2_root_pane

0xa232,	// (0x0006d899) smil2_text_pane_ParamLimits

0xa232,	// (0x0006d899) smil2_text_pane

0x0517,	// (0x00063b7e) bg_list_pane_cp06

0x18d4,	// (0x00064f3b) grid_radio_pane

0x0517,	// (0x00063b7e) bg_popup_window_pane_cp06

0x18dc,	// (0x00064f43) main_fmradio_pane_t1

0x127c,	// (0x000648e3) heading_pane_cp04

0x18ea,	// (0x00064f51) main_fmradio_pane_t2

0x4ac3,	// (0x0006812a) popup_cale_lunar_info_window_g1

0x18f8,	// (0x00064f5f) main_fmradio_pane_t3

0x4acb,	// (0x00068132) popup_cale_lunar_info_window_g2

0x1906,	// (0x00064f6d) main_fmradio_pane_t4

0x0001,

0x1914,	// (0x00064f7b) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x00072c33) popup_cale_lunar_info_window_g

0xf4f3,	// (0x00072b5a) main_fmradio_pane_t

0x1922,	// (0x00064f89) wait_bar_pane_cp03

0x192a,	// (0x00064f91) cell_fmradio_pane_ParamLimits

0x192a,	// (0x00064f91) cell_fmradio_pane

0x1783,	// (0x00064dea) cell_fmradio_pane_g1_ParamLimits

0x1783,	// (0x00064dea) cell_fmradio_pane_g1

0x0517,	// (0x00063b7e) grid_highlight_pane_cp011

0x193d,	// (0x00064fa4) poc_content_pane_ParamLimits

0x193d,	// (0x00064fa4) poc_content_pane

0x1950,	// (0x00064fb7) scroll_pane_cp019

0xa266,	// (0x0006d8cd) popup_call_poc_act_window_ParamLimits

0xa266,	// (0x0006d8cd) popup_call_poc_act_window

0xa273,	// (0x0006d8da) popup_call_poc_inact_window_ParamLimits

0xa273,	// (0x0006d8da) popup_call_poc_inact_window

0xf590,	// (0x00072bf7) bg_popup_call_poc_act_pane_g

0x4a83,	// (0x000680ea) bg_popup_call_poc_inact_pane_g1

0x4a8b,	// (0x000680f2) bg_popup_call_poc_inact_pane_g2

0x1958,	// (0x00064fbf) popup_call_poc_act_window_g2

0x4a93,	// (0x000680fa) bg_popup_call_poc_inact_pane_g3

0x4a13,	// (0x0006807a) bg_popup_call_poc_inact_pane_g4

0x4a9b,	// (0x00068102) bg_popup_call_poc_inact_pane_g5

0x1960,	// (0x00064fc7) popup_call_poc_act_window_t1_ParamLimits

0x1960,	// (0x00064fc7) popup_call_poc_act_window_t1

0x1988,	// (0x00064fef) popup_call_poc_act_window_t2_ParamLimits

0x1988,	// (0x00064fef) popup_call_poc_act_window_t2

0x19b0,	// (0x00065017) popup_call_poc_act_window_t3_ParamLimits

0x19b0,	// (0x00065017) popup_call_poc_act_window_t3

0x19d8,	// (0x0006503f) popup_call_poc_act_window_t4_ParamLimits

0x19d8,	// (0x0006503f) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x00072b65) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x00072b65) popup_call_poc_act_window_t

0x4aa3,	// (0x0006810a) bg_popup_call_poc_inact_pane_g6

0x4aab,	// (0x00068112) bg_popup_call_poc_inact_pane_g7

0x4ab3,	// (0x0006811a) bg_popup_call_poc_inact_pane_g8

0x19ea,	// (0x00065051) popup_call_poc_inact_window_g2

0x4abb,	// (0x00068122) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x00072c0e) bg_popup_call_poc_inact_pane_g

0x19f2,	// (0x00065059) popup_call_poc_inact_window_t1_ParamLimits

0x19f2,	// (0x00065059) popup_call_poc_inact_window_t1

0x1a07,	// (0x0006506e) popup_call_poc_inact_window_t2_ParamLimits

0x1a07,	// (0x0006506e) popup_call_poc_inact_window_t2

0x1a1c,	// (0x00065083) popup_call_poc_inact_window_t3_ParamLimits

0x1a1c,	// (0x00065083) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x00072b6e) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x00072b6e) popup_call_poc_inact_window_t

0x4c0a,	// (0x00068271) context_pane_ParamLimits

0xa7aa,	// (0x0006de11) signal_pane_ParamLimits

0x0acc,	// (0x00064133) main_call2_pane

0xa72c,	// (0x0006dd93) popup_phob_thumbnail2_window_ParamLimits

0xa72c,	// (0x0006dd93) popup_phob_thumbnail2_window

0x9f82,	// (0x0006d5e9) aid_hotspot_pointer_arrow_pane

0x9f8a,	// (0x0006d5f1) aid_hotspot_pointer_hand_pane

0xa522,	// (0x0006db89) phob_pre_status_pane_g5

0x862c,	// (0x0006bc93) cams_zoom_pane_ParamLimits

0x8638,	// (0x0006bc9f) image_vga_pane_ParamLimits

0x8645,	// (0x0006bcac) main_camera_pane_g1_ParamLimits

0x8651,	// (0x0006bcb8) main_camera_pane_g2_ParamLimits

0x865d,	// (0x0006bcc4) main_camera_pane_g3_ParamLimits

0x8669,	// (0x0006bcd0) main_camera_pane_g4_ParamLimits

0x8675,	// (0x0006bcdc) main_camera_pane_g5_ParamLimits

0x8681,	// (0x0006bce8) main_camera_pane_g6_ParamLimits

0x868d,	// (0x0006bcf4) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0007286d) main_camera_pane_g_ParamLimits

0x8699,	// (0x0006bd00) main_camera_pane_t1_ParamLimits

0x86ab,	// (0x0006bd12) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0007287e) main_camera_pane_t_ParamLimits

0x0772,	// (0x00063dd9) bg_popup_preview_window_pane_cp01_ParamLimits

0x0772,	// (0x00063dd9) bg_popup_preview_window_pane_cp01

0x1a31,	// (0x00065098) popup_phob_thumbnail2_window_g1_ParamLimits

0x1a31,	// (0x00065098) popup_phob_thumbnail2_window_g1

0x0517,	// (0x00063b7e) call2_cli_visual_pane

0xa28f,	// (0x0006d8f6) popup_call2_audio_conf_window_ParamLimits

0xa28f,	// (0x0006d8f6) popup_call2_audio_conf_window

0xa2a2,	// (0x0006d909) popup_call2_audio_first_window_ParamLimits

0xa2a2,	// (0x0006d909) popup_call2_audio_first_window

0xa31e,	// (0x0006d985) popup_call2_audio_in_window_ParamLimits

0xa31e,	// (0x0006d985) popup_call2_audio_in_window

0xa34e,	// (0x0006d9b5) popup_call2_audio_out_window_ParamLimits

0xa34e,	// (0x0006d9b5) popup_call2_audio_out_window

0xa39a,	// (0x0006da01) popup_call2_audio_second_window_ParamLimits

0xa39a,	// (0x0006da01) popup_call2_audio_second_window

0xa3e6,	// (0x0006da4d) popup_call2_audio_wait_window_ParamLimits

0xa3e6,	// (0x0006da4d) popup_call2_audio_wait_window

0x0517,	// (0x00063b7e) bg_popup_call2_act_pane_cp03

0x0754,	// (0x00063dbb) list_conf_pane_cp

0x1a3d,	// (0x000650a4) popup_call2_audio_conf_window_t1

0x12d9,	// (0x00064940) list_single_graphic_popup_conf2_pane_ParamLimits

0x12d9,	// (0x00064940) list_single_graphic_popup_conf2_pane

0x12ec,	// (0x00064953) list_highlight_pane_cp04

0x1a4b,	// (0x000650b2) list_single_graphic_popup_conf2_pane_g1

0x12fd,	// (0x00064964) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x00072b75) list_single_graphic_popup_conf2_pane_g

0x1a53,	// (0x000650ba) list_single_graphic_popup_conf2_pane_t1

0x1a61,	// (0x000650c8) bg_popup_call2_act_pane_cp01_ParamLimits

0x1a61,	// (0x000650c8) bg_popup_call2_act_pane_cp01

0x1aeb,	// (0x00065152) call_type_pane_cp05_ParamLimits

0x1aeb,	// (0x00065152) call_type_pane_cp05

0x1b3f,	// (0x000651a6) popup_call2_audio_second_window_g1_ParamLimits

0x1b3f,	// (0x000651a6) popup_call2_audio_second_window_g1

0x1b93,	// (0x000651fa) popup_call2_audio_second_window_g2_ParamLimits

0x1b93,	// (0x000651fa) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x00072b7a) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x00072b7a) popup_call2_audio_second_window_g

0x1bf8,	// (0x0006525f) popup_call2_audio_second_window_t1_ParamLimits

0x1bf8,	// (0x0006525f) popup_call2_audio_second_window_t1

0x1cb3,	// (0x0006531a) popup_call2_audio_second_window_t2_ParamLimits

0x1cb3,	// (0x0006531a) popup_call2_audio_second_window_t2

0x1d06,	// (0x0006536d) popup_call2_audio_second_window_t3_ParamLimits

0x1d06,	// (0x0006536d) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x00072b81) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x00072b81) popup_call2_audio_second_window_t

0x0517,	// (0x00063b7e) bg_popup_call2_in_pane_cp02

0x0521,	// (0x00063b88) call_type_pane_cp04

0x0529,	// (0x00063b90) popup_call2_audio_wait_window_g1

0x0531,	// (0x00063b98) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007275c) popup_call2_audio_wait_window_g

0x0539,	// (0x00063ba0) popup_call2_audio_wait_window_t3

0x1df9,	// (0x00065460) bg_popup_call2_act_pane_ParamLimits

0x1df9,	// (0x00065460) bg_popup_call2_act_pane

0x1eb9,	// (0x00065520) call_type_pane_cp03_ParamLimits

0x1eb9,	// (0x00065520) call_type_pane_cp03

0x1f1d,	// (0x00065584) popup_call2_audio_first_window_g1_ParamLimits

0x1f1d,	// (0x00065584) popup_call2_audio_first_window_g1

0x1f8d,	// (0x000655f4) popup_call2_audio_first_window_g2_ParamLimits

0x1f8d,	// (0x000655f4) popup_call2_audio_first_window_g2

0x1655,	// (0x00064cbc) popup_call2_audio_first_window_g3_ParamLimits

0x1655,	// (0x00064cbc) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x00072b8a) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x00072b8a) popup_call2_audio_first_window_g

0x206b,	// (0x000656d2) popup_call2_audio_first_window_t1_ParamLimits

0x206b,	// (0x000656d2) popup_call2_audio_first_window_t1

0x216e,	// (0x000657d5) popup_call2_audio_first_window_t4_ParamLimits

0x216e,	// (0x000657d5) popup_call2_audio_first_window_t4

0x4426,	// (0x00067a8d) popup_call2_audio_first_window_t5_ParamLimits

0x4426,	// (0x00067a8d) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x00072b95) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x00072b95) popup_call2_audio_first_window_t

0x076a,	// (0x00063dd1) bg_popup_call2_act_pane_g1

0x4ad3,	// (0x0006813a) popup_cale_lunar_info_window_t1

0x4ae1,	// (0x00068148) popup_cale_lunar_info_window_t2

0x4aef,	// (0x00068156) popup_cale_lunar_info_window_t3

0x0517,	// (0x00063b7e) bg_popup_call2_bubble_pane

0x4527,	// (0x00067b8e) bg_popup_call2_in_pane_cp01_ParamLimits

0x4527,	// (0x00067b8e) bg_popup_call2_in_pane_cp01

0x01f3,	// (0x0006385a) call_type_pane_cp02

0x456f,	// (0x00067bd6) popup_call2_audio_out_window_g1_ParamLimits

0x456f,	// (0x00067bd6) popup_call2_audio_out_window_g1

0x459b,	// (0x00067c02) popup_call2_audio_out_window_g2_ParamLimits

0x459b,	// (0x00067c02) popup_call2_audio_out_window_g2

0x45c3,	// (0x00067c2a) popup_call2_audio_out_window_g3_ParamLimits

0x45c3,	// (0x00067c2a) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x00072b9e) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x00072b9e) popup_call2_audio_out_window_g

0x45fe,	// (0x00067c65) popup_call2_audio_out_window_t1_ParamLimits

0x45fe,	// (0x00067c65) popup_call2_audio_out_window_t1

0x465d,	// (0x00067cc4) popup_call2_audio_out_window_t2_ParamLimits

0x465d,	// (0x00067cc4) popup_call2_audio_out_window_t2

0x46b1,	// (0x00067d18) popup_call2_audio_out_window_t3_ParamLimits

0x46b1,	// (0x00067d18) popup_call2_audio_out_window_t3

0x46c7,	// (0x00067d2e) popup_call2_audio_out_window_t4_ParamLimits

0x46c7,	// (0x00067d2e) popup_call2_audio_out_window_t4

0x46dd,	// (0x00067d44) popup_call2_audio_out_window_t5_ParamLimits

0x46dd,	// (0x00067d44) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x00072ba7) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x00072ba7) popup_call2_audio_out_window_t

0x4741,	// (0x00067da8) bg_popup_call2_in_pane_ParamLimits

0x4741,	// (0x00067da8) bg_popup_call2_in_pane

0x479d,	// (0x00067e04) popup_call2_audio_in_window_g1_ParamLimits

0x479d,	// (0x00067e04) popup_call2_audio_in_window_g1

0x47d5,	// (0x00067e3c) popup_call2_audio_in_window_g2_ParamLimits

0x47d5,	// (0x00067e3c) popup_call2_audio_in_window_g2

0x480d,	// (0x00067e74) popup_call2_audio_in_window_g3_ParamLimits

0x480d,	// (0x00067e74) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x00072bb4) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x00072bb4) popup_call2_audio_in_window_g

0x4865,	// (0x00067ecc) popup_call2_audio_in_window_t1_ParamLimits

0x4865,	// (0x00067ecc) popup_call2_audio_in_window_t1

0x48e5,	// (0x00067f4c) popup_call2_audio_in_window_t2_ParamLimits

0x48e5,	// (0x00067f4c) popup_call2_audio_in_window_t2

0x4965,	// (0x00067fcc) popup_call2_audio_in_window_t3_ParamLimits

0x4965,	// (0x00067fcc) popup_call2_audio_in_window_t3

0x497f,	// (0x00067fe6) popup_call2_audio_in_window_t4_ParamLimits

0x497f,	// (0x00067fe6) popup_call2_audio_in_window_t4

0x4991,	// (0x00067ff8) popup_call2_audio_in_window_t5_ParamLimits

0x4991,	// (0x00067ff8) popup_call2_audio_in_window_t5

0x49a6,	// (0x0006800d) popup_call2_audio_in_window_t6_ParamLimits

0x49a6,	// (0x0006800d) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x00072bbd) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x00072bbd) popup_call2_audio_in_window_t

0x076a,	// (0x00063dd1) bg_popup_call2_in_pane_g1

0x4afd,	// (0x00068164) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x00072c38) popup_cale_lunar_info_window_t

0x0772,	// (0x00063dd9) bg_popup_call2_rect_pane_ParamLimits

0x0772,	// (0x00063dd9) bg_popup_call2_rect_pane

0x0517,	// (0x00063b7e) call2_cli_visual_graphic_pane

0x0517,	// (0x00063b7e) call2_cli_visual_text_pane

0xa82f,	// (0x0006de96) smil_status_volume_pane_g3

0x0002,

0x0900,	// (0x00063f67) call2_cli_visual_graphic_pane_g1

0x0900,	// (0x00063f67) call2_cli_visual_graphic_pane_g2

0x0900,	// (0x00063f67) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x00072bca) call2_cli_visual_graphic_pane_g

0x49bb,	// (0x00068022) bg_popup_call2_rect_pane_g1

0x09a8,	// (0x0006400f) bg_popup_call2_rect_pane_g2

0x49c3,	// (0x0006802a) bg_popup_call2_rect_pane_g3

0x49cb,	// (0x00068032) bg_popup_call2_rect_pane_g4

0x49d3,	// (0x0006803a) bg_popup_call2_rect_pane_g5

0x49db,	// (0x00068042) bg_popup_call2_rect_pane_g6

0x49e3,	// (0x0006804a) bg_popup_call2_rect_pane_g7

0x49eb,	// (0x00068052) bg_popup_call2_rect_pane_g8

0x49f3,	// (0x0006805a) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x00072bd1) bg_popup_call2_rect_pane_g

0x49fb,	// (0x00068062) bg_popup_call2_bubble_pane_g1

0x4a03,	// (0x0006806a) bg_popup_call2_bubble_pane_g2

0x4a0b,	// (0x00068072) bg_popup_call2_bubble_pane_g3

0x4a13,	// (0x0006807a) bg_popup_call2_bubble_pane_g4

0x4a1b,	// (0x00068082) bg_popup_call2_bubble_pane_g5

0x4a23,	// (0x0006808a) bg_popup_call2_bubble_pane_g6

0x4a2b,	// (0x00068092) bg_popup_call2_bubble_pane_g7

0x4a33,	// (0x0006809a) bg_popup_call2_bubble_pane_g8

0x4a3b,	// (0x000680a2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x00072be4) bg_popup_call2_bubble_pane_g

0x8030,	// (0x0006b697) aid_cale_week_size_cell_pane

0x86bd,	// (0x0006bd24) aid_cams_cif_uncrop_pane_ParamLimits

0x86bd,	// (0x0006bd24) aid_cams_cif_uncrop_pane

0x8815,	// (0x0006be7c) aid_cams_size_cell_ParamLimits

0x8815,	// (0x0006be7c) aid_cams_size_cell

0x8821,	// (0x0006be88) grid_cams_pane_ParamLimits

0x882d,	// (0x0006be94) linegrid_cams_pane_ParamLimits

0x8904,	// (0x0006bf6b) call_video_pane_t1

0x8921,	// (0x0006bf88) call_video_pane_t2

0x0001,

0xf26a,	// (0x000728d1) call_video_pane_t

0x8d03,	// (0x0006c36a) aid_cale_month_size_cell_pane_ParamLimits

0x8d03,	// (0x0006c36a) aid_cale_month_size_cell_pane

0xf61a,	// (0x00072c81) smil_status_volume_pane_g

0xa83c,	// (0x0006dea3) volume_smil_pane_ParamLimits

0x78b9,	// (0x0006af20) aid_popup2_width_pane

0x7f4b,	// (0x0006b5b2) cell_qdial_pane_g4_ParamLimits

0x7f4b,	// (0x0006b5b2) cell_qdial_pane_g4

0x9a86,	// (0x0006d0ed) aid_blid_cardinal_pane_ParamLimits

0x9a92,	// (0x0006d0f9) aid_blid_destination_pane_ParamLimits

0x9a92,	// (0x0006d0f9) aid_blid_destination_pane

0x0772,	// (0x00063dd9) bg_popup_call_poc_act_pane_ParamLimits

0x0772,	// (0x00063dd9) bg_popup_call_poc_act_pane

0x0772,	// (0x00063dd9) bg_popup_call_poc_inact_pane_ParamLimits

0x0772,	// (0x00063dd9) bg_popup_call_poc_inact_pane

0x4a43,	// (0x000680aa) bg_popup_call_poc_act_pane_g1

0x4a4b,	// (0x000680b2) bg_popup_call_poc_act_pane_g2

0x4a53,	// (0x000680ba) bg_popup_call_poc_act_pane_g3

0x4a13,	// (0x0006807a) bg_popup_call_poc_act_pane_g4

0x4a1b,	// (0x00068082) bg_popup_call_poc_act_pane_g5

0x4a5b,	// (0x000680c2) bg_popup_call_poc_act_pane_g6

0x4a2b,	// (0x00068092) bg_popup_call_poc_act_pane_g7

0x4a63,	// (0x000680ca) bg_popup_call_poc_act_pane_g8

0x0517,	// (0x00063b7e) main_usb_pane

0xa68b,	// (0x0006dcf2) popup_cale_lunar_info_window

0x8ba6,	// (0x0006c20d) im_reading_pane_t1_ParamLimits

0x0c0d,	// (0x00064274) list_im_pane_ParamLimits

0x0c1e,	// (0x00064285) scroll_pane_cp07_ParamLimits

0x0517,	// (0x00063b7e) grid_highlight_pane_cp012

0x0772,	// (0x00063dd9) mup_scale_pane_ParamLimits

0x1655,	// (0x00064cbc) main_usb_pane_g1_ParamLimits

0x1655,	// (0x00064cbc) main_usb_pane_g1

0xa447,	// (0x0006daae) main_usb_pane_g2_ParamLimits

0xa447,	// (0x0006daae) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x00072c21) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x00072c21) main_usb_pane_g

0xa453,	// (0x0006daba) main_usb_pane_t1_ParamLimits

0xa453,	// (0x0006daba) main_usb_pane_t1

0xa465,	// (0x0006dacc) main_usb_pane_t2_ParamLimits

0xa465,	// (0x0006dacc) main_usb_pane_t2

0xa477,	// (0x0006dade) main_usb_pane_t3_ParamLimits

0xa477,	// (0x0006dade) main_usb_pane_t3

0xa489,	// (0x0006daf0) main_usb_pane_t4_ParamLimits

0xa489,	// (0x0006daf0) main_usb_pane_t4

0xa49b,	// (0x0006db02) main_usb_pane_t5_ParamLimits

0xa49b,	// (0x0006db02) main_usb_pane_t5

0xa4ad,	// (0x0006db14) main_usb_pane_t6_ParamLimits

0xa4ad,	// (0x0006db14) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x00072c26) main_usb_pane_t_ParamLimits

0x1426,	// (0x00064a8d) aid_text_placing

0x9a32,	// (0x0006d099) main_location2_pane_t1_ParamLimits

0x9a48,	// (0x0006d0af) main_location2_pane_t2_ParamLimits

0x9a5e,	// (0x0006d0c5) main_location2_pane_t3_ParamLimits

0x9a74,	// (0x0006d0db) main_location2_pane_t4_ParamLimits

0x9a74,	// (0x0006d0db) main_location2_pane_t4

0xf3cb,	// (0x00072a32) main_location2_pane_t_ParamLimits

0x07ae,	// (0x00063e15) find_pinb_pane_g2_ParamLimits

0x07ae,	// (0x00063e15) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x00072782) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x00072782) find_pinb_pane_g

0x07ba,	// (0x00063e21) find_pinb_pane_t1_ParamLimits

0x07cc,	// (0x00063e33) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x00072787) find_pinb_pane_t_ParamLimits

0x0517,	// (0x00063b7e) main_call3_pane

0x90a7,	// (0x0006c70e) cale_month_day_heading_pane_t1_ParamLimits

0x912d,	// (0x0006c794) cale_month_day_heading_pane_t2_ParamLimits

0x91be,	// (0x0006c825) cale_month_day_heading_pane_t3_ParamLimits

0x924f,	// (0x0006c8b6) cale_month_day_heading_pane_t4_ParamLimits

0x92e0,	// (0x0006c947) cale_month_day_heading_pane_t5_ParamLimits

0x9371,	// (0x0006c9d8) cale_month_day_heading_pane_t6_ParamLimits

0x9402,	// (0x0006ca69) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x00072909) cale_month_day_heading_pane_t_ParamLimits

0x9722,	// (0x0006cd89) smil_status_volume_pane

0xa0a8,	// (0x0006d70f) postcard_address_pane_ParamLimits

0xa0a8,	// (0x0006d70f) postcard_address_pane

0xa0b4,	// (0x0006d71b) postcard_message_pane_ParamLimits

0xa0b4,	// (0x0006d71b) postcard_message_pane

0xa423,	// (0x0006da8a) call2_cli_visual_pane_t1_ParamLimits

0xa423,	// (0x0006da8a) call2_cli_visual_pane_t1

0xa98d,	// (0x0006dff4) postcard_message_pane_t1_ParamLimits

0xa98d,	// (0x0006dff4) postcard_message_pane_t1

0xa976,	// (0x0006dfdd) postcard_address_pane_t1_ParamLimits

0xa976,	// (0x0006dfdd) postcard_address_pane_t1

0xa969,	// (0x0006dfd0) popup_call3_audio_in_window_ParamLimits

0xa969,	// (0x0006dfd0) popup_call3_audio_in_window

0xa851,	// (0x0006deb8) bg_popup_call3_in_pane_ParamLimits

0xa851,	// (0x0006deb8) bg_popup_call3_in_pane

0xa8af,	// (0x0006df16) popup_call3_audio_in_window_g1_ParamLimits

0xa8af,	// (0x0006df16) popup_call3_audio_in_window_g1

0xa8c7,	// (0x0006df2e) popup_call3_audio_in_window_g2_ParamLimits

0xa8c7,	// (0x0006df2e) popup_call3_audio_in_window_g2

0xa8df,	// (0x0006df46) popup_call3_audio_in_window_g3_ParamLimits

0xa8df,	// (0x0006df46) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x00072c88) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x00072c88) popup_call3_audio_in_window_g

0xa907,	// (0x0006df6e) popup_call3_audio_in_window_t1_ParamLimits

0xa907,	// (0x0006df6e) popup_call3_audio_in_window_t1

0xa92f,	// (0x0006df96) popup_call3_audio_in_window_t2_ParamLimits

0xa92f,	// (0x0006df96) popup_call3_audio_in_window_t2

0xa957,	// (0x0006dfbe) popup_call3_audio_in_window_t3_ParamLimits

0xa957,	// (0x0006dfbe) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x00072c91) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x00072c91) popup_call3_audio_in_window_t

0x0acc,	// (0x00064133) bg_popup_call3_rect_pane

0x49bb,	// (0x00068022) bg_popup_call3_rect_pane_g1

0x09a8,	// (0x0006400f) bg_popup_call3_rect_pane_g2

0x49c3,	// (0x0006802a) bg_popup_call3_rect_pane_g3

0x49cb,	// (0x00068032) bg_popup_call3_rect_pane_g4

0x49d3,	// (0x0006803a) bg_popup_call3_rect_pane_g5

0x49db,	// (0x00068042) bg_popup_call3_rect_pane_g6

0x49e3,	// (0x0006804a) bg_popup_call3_rect_pane_g7

0x9dbf,	// (0x0006d426) mup_visualizer_osc_pane

0x1663,	// (0x00064cca) mup_visualizer_spec_pane

0xa871,	// (0x0006ded8) call3_video_qcif_pane_ParamLimits

0xa871,	// (0x0006ded8) call3_video_qcif_pane

0xa881,	// (0x0006dee8) call3_video_qcif_uncrop_pane_ParamLimits

0xa881,	// (0x0006dee8) call3_video_qcif_uncrop_pane

0xa88d,	// (0x0006def4) call3_video_subqcif_pane_ParamLimits

0xa88d,	// (0x0006def4) call3_video_subqcif_pane

0xa89f,	// (0x0006df06) call3_video_subqcif_uncrop_pane_ParamLimits

0xa89f,	// (0x0006df06) call3_video_subqcif_uncrop_pane

0xa8f7,	// (0x0006df5e) popup_call3_audio_in_window_g4_ParamLimits

0xa8f7,	// (0x0006df5e) popup_call3_audio_in_window_g4

0xa81e,	// (0x0006de85) mup_spec_half_pane

0xa827,	// (0x0006de8e) mup_spec_half_pane_cp

0x4c6a,	// (0x000682d1) mup_osc_middle_pane

0x4c73,	// (0x000682da) mup_visualizer_osc_pane_g1

0xa7ff,	// (0x0006de66) mup_spec_bar_pane_ParamLimits

0xa7ff,	// (0x0006de66) mup_spec_bar_pane

0x4c57,	// (0x000682be) mup_spec_bar_pane_g1

0x4c61,	// (0x000682c8) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x00072c7c) mup_spec_bar_pane_g

0x8030,	// (0x0006b697) aid_cale_week_size_cell_pane_ParamLimits

0x8045,	// (0x0006b6ac) bg_cale_heading_pane_ParamLimits

0x0a2e,	// (0x00064095) bg_cale_pane_cp01_ParamLimits

0x805d,	// (0x0006b6c4) cale_week_corner_pane_ParamLimits

0x8077,	// (0x0006b6de) cale_week_day_heading_pane_ParamLimits

0x808f,	// (0x0006b6f6) cale_week_scroll_pane_g1_ParamLimits

0x80a2,	// (0x0006b709) cale_week_scroll_pane_g2_ParamLimits

0x80b5,	// (0x0006b71c) cale_week_scroll_pane_g3_ParamLimits

0x80c8,	// (0x0006b72f) cale_week_scroll_pane_g4_ParamLimits

0x80db,	// (0x0006b742) cale_week_scroll_pane_g5_ParamLimits

0x80ee,	// (0x0006b755) cale_week_scroll_pane_g6_ParamLimits

0x8101,	// (0x0006b768) cale_week_scroll_pane_g7_ParamLimits

0x8114,	// (0x0006b77b) cale_week_scroll_pane_g8_ParamLimits

0x8127,	// (0x0006b78e) cale_week_scroll_pane_g9_ParamLimits

0x813a,	// (0x0006b7a1) cale_week_scroll_pane_g10_ParamLimits

0x814d,	// (0x0006b7b4) cale_week_scroll_pane_g11_ParamLimits

0x8160,	// (0x0006b7c7) cale_week_scroll_pane_g12_ParamLimits

0x8173,	// (0x0006b7da) cale_week_scroll_pane_g13_ParamLimits

0x8186,	// (0x0006b7ed) cale_week_scroll_pane_g14_ParamLimits

0x8199,	// (0x0006b800) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x00072813) cale_week_scroll_pane_g_ParamLimits

0x81bf,	// (0x0006b826) cale_week_time_pane_ParamLimits

0x81d2,	// (0x0006b839) grid_cale_week_pane_ParamLimits

0x0a4b,	// (0x000640b2) listscroll_cale_week_pane_t1

0x0a5d,	// (0x000640c4) scroll_pane_cp08_ParamLimits

0x8d58,	// (0x0006c3bf) cale_month_corner_pane_ParamLimits

0x0e4e,	// (0x000644b5) cale_month_pane_t1

0x906e,	// (0x0006c6d5) cale_month_week_pane_ParamLimits

0x1655,	// (0x00064cbc) popup_call_status_window_g1_ParamLimits

0x9869,	// (0x0006ced0) popup_call_status_window_g2_ParamLimits

0x9875,	// (0x0006cedc) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x000729b9) popup_call_status_window_g_ParamLimits

0x1205,	// (0x0006486c) aid_call2_pane

0x68ba,	// (0x00069f21) msg_header_pane_g1

0xa0a8,	// (0x0006d70f) postcard_address2_pane_ParamLimits

0xa0a8,	// (0x0006d70f) postcard_address2_pane

0xa0b4,	// (0x0006d71b) postcard_message2_pane_ParamLimits

0xa0b4,	// (0x0006d71b) postcard_message2_pane

0xa7b6,	// (0x0006de1d) message2_row_pane_ParamLimits

0xa7b6,	// (0x0006de1d) message2_row_pane

0xa7ce,	// (0x0006de35) address2_row_pane_ParamLimits

0xa7ce,	// (0x0006de35) address2_row_pane

0x4c25,	// (0x0006828c) postcard_message2_row_pane_g1

0x4c2d,	// (0x00068294) postcard_message2_row_pane_t1

0x4c25,	// (0x0006828c) address2_row_pane_g1

0x4c2d,	// (0x00068294) address2_row_pane_t1

0x18cc,	// (0x00064f33) aid_size_cell_vorec

0x0517,	// (0x00063b7e) main_rss_pane

0xa7e1,	// (0x0006de48) rss_list_single_pane_ParamLimits

0xa7e1,	// (0x0006de48) rss_list_single_pane

0x4c3b,	// (0x000682a2) rss_list_single_pane_t1

0x4c49,	// (0x000682b0) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x00072c77) rss_list_single_pane_t

0x0517,	// (0x00063b7e) main_camera2_pane

0x0517,	// (0x00063b7e) main_video2_pane

0xa9dd,	// (0x0006e044) cams_zoom_pane_cp2_ParamLimits

0xa9dd,	// (0x0006e044) cams_zoom_pane_cp2

0xa9e9,	// (0x0006e050) image2_vga_pane_ParamLimits

0xa9e9,	// (0x0006e050) image2_vga_pane

0xa9f8,	// (0x0006e05f) main_camera2_pane_g1_ParamLimits

0xa9f8,	// (0x0006e05f) main_camera2_pane_g1

0xaa04,	// (0x0006e06b) main_camera2_pane_g2_ParamLimits

0xaa04,	// (0x0006e06b) main_camera2_pane_g2

0xaa10,	// (0x0006e077) main_camera2_pane_g3_ParamLimits

0xaa10,	// (0x0006e077) main_camera2_pane_g3

0xaa1c,	// (0x0006e083) main_camera2_pane_g4_ParamLimits

0xaa1c,	// (0x0006e083) main_camera2_pane_g4

0xaa28,	// (0x0006e08f) main_camera2_pane_g5_ParamLimits

0xaa28,	// (0x0006e08f) main_camera2_pane_g5

0xaa34,	// (0x0006e09b) main_camera2_pane_g6_ParamLimits

0xaa34,	// (0x0006e09b) main_camera2_pane_g6

0xaa40,	// (0x0006e0a7) main_camera2_pane_g7_ParamLimits

0xaa40,	// (0x0006e0a7) main_camera2_pane_g7

0xaa4c,	// (0x0006e0b3) main_camera2_pane_g8_ParamLimits

0xaa4c,	// (0x0006e0b3) main_camera2_pane_g8

0x0008,

0xf631,	// (0x00072c98) main_camera2_pane_g_ParamLimits

0xf631,	// (0x00072c98) main_camera2_pane_g

0xaa64,	// (0x0006e0cb) main_camera2_pane_t1_ParamLimits

0xaa64,	// (0x0006e0cb) main_camera2_pane_t1

0xaa76,	// (0x0006e0dd) main_camera2_pane_t2_ParamLimits

0xaa76,	// (0x0006e0dd) main_camera2_pane_t2

0xaa88,	// (0x0006e0ef) main_camera2_pane_t3_ParamLimits

0xaa88,	// (0x0006e0ef) main_camera2_pane_t3

0xaa9a,	// (0x0006e101) main_camera2_pane_t4_ParamLimits

0xaa9a,	// (0x0006e101) main_camera2_pane_t4

0x0006,

0xf644,	// (0x00072cab) main_camera2_pane_t_ParamLimits

0xf644,	// (0x00072cab) main_camera2_pane_t

0xaaf5,	// (0x0006e15c) cams_zoom_pane_cp4_ParamLimits

0xaaf5,	// (0x0006e15c) cams_zoom_pane_cp4

0xab05,	// (0x0006e16c) image2_cif_pane_ParamLimits

0xab05,	// (0x0006e16c) image2_cif_pane

0xab16,	// (0x0006e17d) image2_subqcif_pane_ParamLimits

0xab16,	// (0x0006e17d) image2_subqcif_pane

0xab23,	// (0x0006e18a) main_video2_pane_g1_ParamLimits

0xab23,	// (0x0006e18a) main_video2_pane_g1

0xab35,	// (0x0006e19c) main_video2_pane_g2_ParamLimits

0xab35,	// (0x0006e19c) main_video2_pane_g2

0xab45,	// (0x0006e1ac) main_video2_pane_g3_ParamLimits

0xab45,	// (0x0006e1ac) main_video2_pane_g3

0xab55,	// (0x0006e1bc) main_video2_pane_g4_ParamLimits

0xab55,	// (0x0006e1bc) main_video2_pane_g4

0xab65,	// (0x0006e1cc) main_video2_pane_g5_ParamLimits

0xab65,	// (0x0006e1cc) main_video2_pane_g5

0xab75,	// (0x0006e1dc) main_video2_pane_g6_ParamLimits

0xab75,	// (0x0006e1dc) main_video2_pane_g6

0x0005,

0xf653,	// (0x00072cba) main_video2_pane_g_ParamLimits

0xf653,	// (0x00072cba) main_video2_pane_g

0xab87,	// (0x0006e1ee) main_video2_pane_t1_ParamLimits

0xab87,	// (0x0006e1ee) main_video2_pane_t1

0xaba1,	// (0x0006e208) main_video2_pane_t2_ParamLimits

0xaba1,	// (0x0006e208) main_video2_pane_t2

0xabc7,	// (0x0006e22e) main_video2_pane_t3_ParamLimits

0xabc7,	// (0x0006e22e) main_video2_pane_t3

0x0002,

0xf660,	// (0x00072cc7) main_video2_pane_t_ParamLimits

0xf660,	// (0x00072cc7) main_video2_pane_t

0xa55c,	// (0x0006dbc3) call_muted_g2

0x0001,

0xf602,	// (0x00072c69) call_muted_g

0x0517,	// (0x00063b7e) main_mup2_pane

0x4cd8,	// (0x0006833f) main_mup2_pane_g1_ParamLimits

0x4cd8,	// (0x0006833f) main_mup2_pane_g1

0xabed,	// (0x0006e254) main_mup2_pane_g2_ParamLimits

0xabed,	// (0x0006e254) main_mup2_pane_g2

0xae5d,	// (0x0006e4c4) main_mup_pane_g13_cp1

0xae65,	// (0x0006e4cc) mup_volume_pane_cp1

0xac0d,	// (0x0006e274) main_mup2_pane_g4_ParamLimits

0xac0d,	// (0x0006e274) main_mup2_pane_g4

0xac1e,	// (0x0006e285) main_mup2_pane_g5_ParamLimits

0xac1e,	// (0x0006e285) main_mup2_pane_g5

0xac2f,	// (0x0006e296) main_mup2_pane_g6_ParamLimits

0xac2f,	// (0x0006e296) main_mup2_pane_g6

0xac40,	// (0x0006e2a7) main_mup2_pane_g7_ParamLimits

0xac40,	// (0x0006e2a7) main_mup2_pane_g7

0x0006,

0xf667,	// (0x00072cce) main_mup2_pane_g_ParamLimits

0xf667,	// (0x00072cce) main_mup2_pane_g

0xac5c,	// (0x0006e2c3) main_mup2_pane_t1_ParamLimits

0xac5c,	// (0x0006e2c3) main_mup2_pane_t1

0xac73,	// (0x0006e2da) main_mup2_pane_t2_ParamLimits

0xac73,	// (0x0006e2da) main_mup2_pane_t2

0xac8a,	// (0x0006e2f1) main_mup2_pane_t3_ParamLimits

0xac8a,	// (0x0006e2f1) main_mup2_pane_t3

0xaca1,	// (0x0006e308) main_mup2_pane_t4_ParamLimits

0xaca1,	// (0x0006e308) main_mup2_pane_t4

0xacbb,	// (0x0006e322) main_mup2_pane_t5_ParamLimits

0xacbb,	// (0x0006e322) main_mup2_pane_t5

0xacd5,	// (0x0006e33c) main_mup2_pane_t6_ParamLimits

0xacd5,	// (0x0006e33c) main_mup2_pane_t6

0x0005,

0xf676,	// (0x00072cdd) main_mup2_pane_t_ParamLimits

0xf676,	// (0x00072cdd) main_mup2_pane_t

0xad0d,	// (0x0006e374) mup2_visualizer_pane_ParamLimits

0xad0d,	// (0x0006e374) mup2_visualizer_pane

0xad3f,	// (0x0006e3a6) mup_progress_pane_cp_ParamLimits

0xad3f,	// (0x0006e3a6) mup_progress_pane_cp

0xae48,	// (0x0006e4af) mup_volume_pane_cp_ParamLimits

0xae48,	// (0x0006e4af) mup_volume_pane_cp

0xad56,	// (0x0006e3bd) mup2_visualizer_pane_g1_ParamLimits

0xad56,	// (0x0006e3bd) mup2_visualizer_pane_g1

0x4caa,	// (0x00068311) mup2_visualizer_pane_g2_ParamLimits

0x4caa,	// (0x00068311) mup2_visualizer_pane_g2

0xad6b,	// (0x0006e3d2) mup2_visualizer_pane_g3_ParamLimits

0xad6b,	// (0x0006e3d2) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x00072cea) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x00072cea) mup2_visualizer_pane_g

0x18cc,	// (0x00064f33) aid_size_cell_fmradio

0xa63e,	// (0x0006dca5) aid_height_parent_landcape

0x0cab,	// (0x00064312) wml_content_pane_cp

0x0cb3,	// (0x0006431a) wml_tabs_pane

0x0cbc,	// (0x00064323) popup_wml_miniature_window

0x0cc4,	// (0x0006432b) scroll_pane_cp021

0x0cd8,	// (0x0006433f) wml_content_pane_comp8

0x0517,	// (0x00063b7e) bg_popup_sub_pane_cp05

0x4cc8,	// (0x0006832f) popup_wml_miniature_window_g1

0x4cd0,	// (0x00068337) wml_miniature_view_pane

0xad77,	// (0x0006e3de) aid_size_wml_view

0xad7f,	// (0x0006e3e6) wml_miniature_view_pane_g1

0xad88,	// (0x0006e3ef) wml_miniature_view_pane_g2

0xad91,	// (0x0006e3f8) wml_miniature_view_pane_g3

0xad99,	// (0x0006e400) wml_miniature_view_pane_g4

0xada1,	// (0x0006e408) wml_miniature_view_pane_g5

0xada9,	// (0x0006e410) wml_miniature_view_pane_g6

0xadb1,	// (0x0006e418) wml_miniature_view_pane_g7

0xadb9,	// (0x0006e420) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x00072cf1) wml_miniature_view_pane_g

0x4cd8,	// (0x0006833f) background_graphic_ParamLimits

0x4cd8,	// (0x0006833f) background_graphic

0x4ce4,	// (0x0006834b) wml_tabs_2_pane

0x4ced,	// (0x00068354) wml_tabs_3_pane_ParamLimits

0x4ced,	// (0x00068354) wml_tabs_3_pane

0x4cff,	// (0x00068366) wml_tabs_4_pane_ParamLimits

0x4cff,	// (0x00068366) wml_tabs_4_pane

0x4d15,	// (0x0006837c) wml_tabs_5_pane_ParamLimits

0x4d15,	// (0x0006837c) wml_tabs_5_pane

0x4d2f,	// (0x00068396) wml_tabs_pane_g2_ParamLimits

0x4d2f,	// (0x00068396) wml_tabs_pane_g2

0x4d43,	// (0x000683aa) wml_tabs_pane_g3_ParamLimits

0x4d43,	// (0x000683aa) wml_tabs_pane_g3

0xadc1,	// (0x0006e428) wml_tabs_2_active_pane_ParamLimits

0xadc1,	// (0x0006e428) wml_tabs_2_active_pane

0xadd1,	// (0x0006e438) wml_tabs_2_passive_pane_ParamLimits

0xadd1,	// (0x0006e438) wml_tabs_2_passive_pane

0xade1,	// (0x0006e448) wml_tabs_3_active_pane_cp_ParamLimits

0xade1,	// (0x0006e448) wml_tabs_3_active_pane_cp

0xadf2,	// (0x0006e459) wml_tabs_3_passive_pane_ParamLimits

0xadf2,	// (0x0006e459) wml_tabs_3_passive_pane

0xae03,	// (0x0006e46a) wml_tabs_3_passive_pane_cp_ParamLimits

0xae03,	// (0x0006e46a) wml_tabs_3_passive_pane_cp

0xae14,	// (0x0006e47b) tabs_4_active_pane

0xae1c,	// (0x0006e483) tabs_4_passive_pane

0xae24,	// (0x0006e48b) tabs_4_passive_pane_cp

0xae2c,	// (0x0006e493) tabs_4_passive_pane_cp2

0xa43f,	// (0x0006daa6) aid_height_text

0x9d8c,	// (0x0006d3f3) mup_volume_cont_pane_ParamLimits

0x9d8c,	// (0x0006d3f3) mup_volume_cont_pane

0x7bfd,	// (0x0006b264) aid_size_cell_pinb

0x7c07,	// (0x0006b26e) aid_size_list_pinb

0xad28,	// (0x0006e38f) mup2_volume_cont_pane_ParamLimits

0xad28,	// (0x0006e38f) mup2_volume_cont_pane

0xae34,	// (0x0006e49b) mup2_volume_cont_pane_g1_ParamLimits

0xae34,	// (0x0006e49b) mup2_volume_cont_pane_g1

0x78c1,	// (0x0006af28) aid_size_cell_touch_ParamLimits

0x78c1,	// (0x0006af28) aid_size_cell_touch

0x7afd,	// (0x0006b164) touch_pane_ParamLimits

0x7afd,	// (0x0006b164) touch_pane

0x0093,	// (0x000636fa) main_rss2_pane

0x4d60,	// (0x000683c7) listscroll_rss2_pane

0x4d69,	// (0x000683d0) rss2_navigation_pane

0x4d71,	// (0x000683d8) list_rss2_pane

0x13a3,	// (0x00064a0a) scroll_pane_cp22

0x4d79,	// (0x000683e0) rss2_navigation_pane_g1

0x4d82,	// (0x000683e9) rss2_navigation_pane_g2

0x4d8a,	// (0x000683f1) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x00072d02) rss2_navigation_pane_g

0x4d92,	// (0x000683f9) rss2_navigation_pane_t1

0xae6d,	// (0x0006e4d4) rss2_list_single_pane_ParamLimits

0xae6d,	// (0x0006e4d4) rss2_list_single_pane

0x4da0,	// (0x00068407) rss2_list_single_pane_t2

0x4dae,	// (0x00068415) rss2_list_single_pane_t3_ParamLimits

0x4dae,	// (0x00068415) rss2_list_single_pane_t3

0x4dcb,	// (0x00068432) rss2_list_single_pane_t4

0x970c,	// (0x0006cd73) smil_status_pane_g1

0x2251,	// (0x000658b8) main_image2_pane_ParamLimits

0x2251,	// (0x000658b8) main_image2_pane

0xaa58,	// (0x0006e0bf) main_camera2_pane_g9_ParamLimits

0xaa58,	// (0x0006e0bf) main_camera2_pane_g9

0xaaac,	// (0x0006e113) main_camera2_pane_t5_ParamLimits

0xaaac,	// (0x0006e113) main_camera2_pane_t5

0xaabe,	// (0x0006e125) main_camera2_pane_t6_ParamLimits

0xaabe,	// (0x0006e125) main_camera2_pane_t6

0xae84,	// (0x0006e4eb) main_image2_pane_g1_ParamLimits

0xae84,	// (0x0006e4eb) main_image2_pane_g1

0xa254,	// (0x0006d8bb) smil2_video_pane_ParamLimits

0xa254,	// (0x0006d8bb) smil2_video_pane

0x78f1,	// (0x0006af58) aid_zoom_text_primary_cp

0x7aac,	// (0x0006b113) popup_preview_fixed_window

0x0c05,	// (0x0006426c) im_reading_pane_g1

0xa9b4,	// (0x0006e01b) cams2_bc_adjust_pane_cp_ParamLimits

0xa9b4,	// (0x0006e01b) cams2_bc_adjust_pane_cp

0xaae9,	// (0x0006e150) cams2_bc_adjust_pane_ParamLimits

0xaae9,	// (0x0006e150) cams2_bc_adjust_pane

0xae90,	// (0x0006e4f7) cams2_bc_adjust_pane_g1

0xae98,	// (0x0006e4ff) cams2_slider_pane

0xaea1,	// (0x0006e508) cams2_slider_pane_g1

0xaeaa,	// (0x0006e511) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x00072d09) cams2_slider_pane_g

0x7ce6,	// (0x0006b34d) calc_display_pane_ParamLimits

0x7cfe,	// (0x0006b365) calc_paper_pane_ParamLimits

0x7d1a,	// (0x0006b381) grid_calc_pane_ParamLimits

0x98e7,	// (0x0006cf4e) popup_clock_digital_window_t1_ParamLimits

0x1869,	// (0x00064ed0) main_image_pane_t1

0x7ccc,	// (0x0006b333) aid_size_cell_calc_ParamLimits

0x7ccc,	// (0x0006b333) aid_size_cell_calc

0xa66b,	// (0x0006dcd2) popup_blid_sat_info2_window_ParamLimits

0xa66b,	// (0x0006dcd2) popup_blid_sat_info2_window

0x4de9,	// (0x00068450) aid_size_cell_blid

0x4df1,	// (0x00068458) bg_popup_window_pane_cp07

0x4e14,	// (0x0006847b) grid_popup_blid_pane

0x4e1c,	// (0x00068483) heading_pane_cp05_ParamLimits

0x4e1c,	// (0x00068483) heading_pane_cp05

0x4ee4,	// (0x0006854b) cell_popup_blid_pane_ParamLimits

0x4ee4,	// (0x0006854b) cell_popup_blid_pane

0x4f04,	// (0x0006856b) cell_popup_blid_pane_g1

0x4f0c,	// (0x00068573) cell_popup_blid_pane_t1

0xacf2,	// (0x0006e359) mup2_indicator_pane_ParamLimits

0xacf2,	// (0x0006e359) mup2_indicator_pane

0x0acc,	// (0x00064133) mup2_visualizer_osc_pane

0x4cb6,	// (0x0006831d) mup2_visualizer_spec_pane_ParamLimits

0x4cb6,	// (0x0006831d) mup2_visualizer_spec_pane

0xaec4,	// (0x0006e52b) mup2_spec_half_pane

0xaecd,	// (0x0006e534) mup2_spec_half_pane_cp

0xaed5,	// (0x0006e53c) mup2_spec_bar_pane_ParamLimits

0xaed5,	// (0x0006e53c) mup2_spec_bar_pane

0x4c57,	// (0x000682be) mup2_spec_bar_pane_g1

0x4c61,	// (0x000682c8) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x00072c7c) mup2_spec_bar_pane_g

0xaef4,	// (0x0006e55b) mup2_osc_middle_pane

0x4c73,	// (0x000682da) mup2_visualizer_osc_pane_g1

0x0126,	// (0x0006378d) popup_number_entry_window_t1_ParamLimits

0x0139,	// (0x000637a0) popup_number_entry_window_t2_ParamLimits

0x014b,	// (0x000637b2) popup_number_entry_window_t3_ParamLimits

0x7b4a,	// (0x0006b1b1) popup_number_entry_window_t5_ParamLimits

0x7b4a,	// (0x0006b1b1) popup_number_entry_window_t5

0xf0c6,	// (0x0007272d) popup_number_entry_window_t_ParamLimits

0x015d,	// (0x000637c4) text_title_cp2_ParamLimits

0x9f92,	// (0x0006d5f9) aid_hotspot_pointer_text2_pane

0xa024,	// (0x0006d68b) main_viewer_pane_g9_ParamLimits

0xa024,	// (0x0006d68b) main_viewer_pane_g9

0x0e4e,	// (0x000644b5) cale_month_pane_t1_ParamLimits

0x0ea2,	// (0x00064509) bg_cale_pane_ParamLimits

0x0eba,	// (0x00064521) list_cale_pane_ParamLimits

0x0ecb,	// (0x00064532) listscroll_cale_day_pane_t1

0x0edd,	// (0x00064544) scroll_pane_cp09_ParamLimits

0x9dc7,	// (0x0006d42e) main_mup_eq_pane_t1_ParamLimits

0x9dc7,	// (0x0006d42e) main_mup_eq_pane_t1

0x9ddd,	// (0x0006d444) main_mup_eq_pane_t2_ParamLimits

0x9ddd,	// (0x0006d444) main_mup_eq_pane_t2

0x9df3,	// (0x0006d45a) main_mup_eq_pane_t3_ParamLimits

0x9df3,	// (0x0006d45a) main_mup_eq_pane_t3

0x9e09,	// (0x0006d470) main_mup_eq_pane_t4_ParamLimits

0x9e09,	// (0x0006d470) main_mup_eq_pane_t4

0x9e1f,	// (0x0006d486) main_mup_eq_pane_t5_ParamLimits

0x9e1f,	// (0x0006d486) main_mup_eq_pane_t5

0x9e35,	// (0x0006d49c) main_mup_eq_pane_t6_ParamLimits

0x9e35,	// (0x0006d49c) main_mup_eq_pane_t6

0x9e47,	// (0x0006d4ae) main_mup_eq_pane_t7_ParamLimits

0x9e47,	// (0x0006d4ae) main_mup_eq_pane_t7

0x9e59,	// (0x0006d4c0) main_mup_eq_pane_t8_ParamLimits

0x9e59,	// (0x0006d4c0) main_mup_eq_pane_t8

0x9e6b,	// (0x0006d4d2) main_mup_eq_pane_t9_ParamLimits

0x9e6b,	// (0x0006d4d2) main_mup_eq_pane_t9

0x9e81,	// (0x0006d4e8) main_mup_eq_pane_t10_ParamLimits

0x9e81,	// (0x0006d4e8) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x00072ab8) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x00072ab8) main_mup_eq_pane_t

0x9f14,	// (0x0006d57b) mup_equalizer_pane_cp5_ParamLimits

0x9f26,	// (0x0006d58d) mup_equalizer_pane_cp6_ParamLimits

0x9f38,	// (0x0006d59f) mup_equalizer_pane_cp7_ParamLimits

0x0093,	// (0x000636fa) main_gallery_pane

0x4c7c,	// (0x000682e3) smil2_volume_pane

0x4c97,	// (0x000682fe) smil_status_volume_pane_g1_ParamLimits

0x4c84,	// (0x000682eb) smil_status_volume_pane_g2_ParamLimits

0xa82f,	// (0x0006de96) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x00072c81) smil_status_volume_pane_g_ParamLimits

0x4df1,	// (0x00068458) bg_popup_window_pane_cp07_ParamLimits

0x4dff,	// (0x00068466) blid_firmament_pane

0xaefd,	// (0x0006e564) aid_size_cell_gallery_ParamLimits

0xaefd,	// (0x0006e564) aid_size_cell_gallery

0xaf0b,	// (0x0006e572) grid_gallery_pane_ParamLimits

0xaf0b,	// (0x0006e572) grid_gallery_pane

0xaf17,	// (0x0006e57e) cell_gallery_pane_ParamLimits

0xaf17,	// (0x0006e57e) cell_gallery_pane

0x4f1a,	// (0x00068581) bg_cell_gallery_focus_pane_ParamLimits

0x4f1a,	// (0x00068581) bg_cell_gallery_focus_pane

0x4f2c,	// (0x00068593) cell_gallery_pane_g1_ParamLimits

0x4f2c,	// (0x00068593) cell_gallery_pane_g1

0xaf56,	// (0x0006e5bd) cell_gallery_pane_g2_ParamLimits

0xaf56,	// (0x0006e5bd) cell_gallery_pane_g2

0xaf63,	// (0x0006e5ca) cell_gallery_pane_g3_ParamLimits

0xaf63,	// (0x0006e5ca) cell_gallery_pane_g3

0x4f38,	// (0x0006859f) cell_gallery_pane_g4_ParamLimits

0x4f38,	// (0x0006859f) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x00072d2f) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x00072d2f) cell_gallery_pane_g

0x4f44,	// (0x000685ab) bg_cell_gallery_focus_pane_g1

0x4f4c,	// (0x000685b3) bg_cell_gallery_focus_pane_g2

0x4f54,	// (0x000685bb) bg_cell_gallery_focus_pane_g3

0x4f5c,	// (0x000685c3) bg_cell_gallery_focus_pane_g4

0x4f64,	// (0x000685cb) bg_cell_gallery_focus_pane_g5

0x4f6c,	// (0x000685d3) bg_cell_gallery_focus_pane_g6

0x4f74,	// (0x000685db) bg_cell_gallery_focus_pane_g7

0x4f7c,	// (0x000685e3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x00072d38) bg_cell_gallery_focus_pane_g

0x4f84,	// (0x000685eb) aid_firma_cardinal

0x4f98,	// (0x000685ff) blid_firmament_pane_t1

0x4faf,	// (0x00068616) blid_firmament_pane_t2

0x4fc6,	// (0x0006862d) blid_firmament_pane_t3

0x4fdd,	// (0x00068644) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x00072d49) blid_firmament_pane_t

0x4ff4,	// (0x0006865b) blid_sat_info_pane

0x5004,	// (0x0006866b) blid_sat_info_pane_g1

0x5004,	// (0x0006866b) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x00072d52) blid_sat_info_pane_g

0x500e,	// (0x00068675) blid_sat_info_pane_t1

0x501c,	// (0x00068683) smil2_volume_content_pane

0x5025,	// (0x0006868c) smil2_volume_pane_g1

0x502d,	// (0x00068694) smil2_volume_content_pane_g1

0x5036,	// (0x0006869d) smil2_volume_content_pane_g2

0x503f,	// (0x000686a6) smil2_volume_content_pane_g3

0x5048,	// (0x000686af) smil2_volume_content_pane_g4

0x5051,	// (0x000686b8) smil2_volume_content_pane_g5

0x505a,	// (0x000686c1) smil2_volume_content_pane_g6

0x5063,	// (0x000686ca) smil2_volume_content_pane_g7

0x506c,	// (0x000686d3) smil2_volume_content_pane_g8

0x5075,	// (0x000686dc) smil2_volume_content_pane_g9

0x507e,	// (0x000686e5) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x00072d57) smil2_volume_content_pane_g

0x8235,	// (0x0006b89c) cale_week_day_heading_pane_t1_ParamLimits

0x8270,	// (0x0006b8d7) cale_week_day_heading_pane_t2_ParamLimits

0x82ab,	// (0x0006b912) cale_week_day_heading_pane_t3_ParamLimits

0x82e6,	// (0x0006b94d) cale_week_day_heading_pane_t4_ParamLimits

0x8321,	// (0x0006b988) cale_week_day_heading_pane_t5_ParamLimits

0x835c,	// (0x0006b9c3) cale_week_day_heading_pane_t6_ParamLimits

0x8397,	// (0x0006b9fe) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x00072834) cale_week_day_heading_pane_t_ParamLimits

0x0a7a,	// (0x000640e1) bg_cale_side_pane_ParamLimits

0x83d2,	// (0x0006ba39) cale_week_time_pane_t1_ParamLimits

0x840c,	// (0x0006ba73) cale_week_time_pane_t2_ParamLimits

0x8446,	// (0x0006baad) cale_week_time_pane_t3_ParamLimits

0x8480,	// (0x0006bae7) cale_week_time_pane_t4_ParamLimits

0x84ba,	// (0x0006bb21) cale_week_time_pane_t5_ParamLimits

0x84f4,	// (0x0006bb5b) cale_week_time_pane_t6_ParamLimits

0x852e,	// (0x0006bb95) cale_week_time_pane_t7_ParamLimits

0x8568,	// (0x0006bbcf) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x00072843) cale_week_time_pane_t_ParamLimits

0x85a2,	// (0x0006bc09) cell_cale_week_pane_g2_ParamLimits

0x0a7a,	// (0x000640e1) bg_cale_side_pane_cp01_ParamLimits

0x9493,	// (0x0006cafa) cale_month_week_pane_t1_ParamLimits

0x94cc,	// (0x0006cb33) cale_month_week_pane_t2_ParamLimits

0x9505,	// (0x0006cb6c) cale_month_week_pane_t3_ParamLimits

0x953e,	// (0x0006cba5) cale_month_week_pane_t4_ParamLimits

0x9577,	// (0x0006cbde) cale_month_week_pane_t5_ParamLimits

0x95b0,	// (0x0006cc17) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x00072918) cale_month_week_pane_t_ParamLimits

0x96d7,	// (0x0006cd3e) cell_cale_month_pane_g1_ParamLimits

0x0093,	// (0x000636fa) main_cale_event_viewer_pane

0x0093,	// (0x000636fa) listscroll_cale_event_viewer_pane

0x5087,	// (0x000686ee) list_cale_ev_pane

0x508f,	// (0x000686f6) scroll_pane_cp023

0xaf70,	// (0x0006e5d7) field_cale_ev_pane_ParamLimits

0xaf70,	// (0x0006e5d7) field_cale_ev_pane

0x509b,	// (0x00068702) field_cale_ev_content_pane_ParamLimits

0x509b,	// (0x00068702) field_cale_ev_content_pane

0x50a7,	// (0x0006870e) field_cale_ev_pane_g1_ParamLimits

0x50a7,	// (0x0006870e) field_cale_ev_pane_g1

0x50b3,	// (0x0006871a) field_cale_ev_pane_g2_ParamLimits

0x50b3,	// (0x0006871a) field_cale_ev_pane_g2

0x50cb,	// (0x00068732) field_cale_ev_pane_g3_ParamLimits

0x50cb,	// (0x00068732) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x00072d6c) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x00072d6c) field_cale_ev_pane_g

0x50e3,	// (0x0006874a) field_cale_ev_pane_t1_ParamLimits

0x50e3,	// (0x0006874a) field_cale_ev_pane_t1

0xaf8a,	// (0x0006e5f1) field_cale_ev_content_pane_t1_ParamLimits

0xaf8a,	// (0x0006e5f1) field_cale_ev_content_pane_t1

0x170d,	// (0x00064d74) bg_button_pane_cp01

0x8020,	// (0x0006b687) listscroll_cale_week_pane_ParamLimits

0x0a25,	// (0x0006408c) popup_toolbar_window_cp01

0x0a4b,	// (0x000640b2) listscroll_cale_week_pane_t1_ParamLimits

0x8020,	// (0x0006b687) listscroll_cale_day_pane_ParamLimits

0x0a25,	// (0x0006408c) popup_toolbar_window_cp02

0x0ecb,	// (0x00064532) listscroll_cale_day_pane_t1_ParamLimits

0x8020,	// (0x0006b687) main_cale_month_pane_ParamLimits

0xa73e,	// (0x0006dda5) popup_toolbar_window_cp03_ParamLimits

0xa73e,	// (0x0006dda5) popup_toolbar_window_cp03

0xa17c,	// (0x0006d7e3) main_image_pane_g2_ParamLimits

0xa17c,	// (0x0006d7e3) main_image_pane_g2

0xa188,	// (0x0006d7ef) main_image_pane_g3_ParamLimits

0xa188,	// (0x0006d7ef) main_image_pane_g3

0x0002,

0xf4e3,	// (0x00072b4a) main_image_pane_g_ParamLimits

0xf4e3,	// (0x00072b4a) main_image_pane_g

0x1869,	// (0x00064ed0) main_image_pane_t1_ParamLimits

0xa194,	// (0x0006d7fb) main_image_pane_t2_ParamLimits

0xa194,	// (0x0006d7fb) main_image_pane_t2

0xa1a6,	// (0x0006d80d) main_image_pane_t3_ParamLimits

0xa1a6,	// (0x0006d80d) main_image_pane_t3

0xa1b8,	// (0x0006d81f) main_image_pane_t4_ParamLimits

0xa1b8,	// (0x0006d81f) main_image_pane_t4

0x0003,

0xf4ea,	// (0x00072b51) main_image_pane_t_ParamLimits

0xf4ea,	// (0x00072b51) main_image_pane_t

0xa1ca,	// (0x0006d831) popup_image_details_window_cp01

0xa1d2,	// (0x0006d839) popup_toobar_trans_pane_cp01_ParamLimits

0xa1d2,	// (0x0006d839) popup_toobar_trans_pane_cp01

0xa6b2,	// (0x0006dd19) popup_image_details_window_ParamLimits

0xa6b2,	// (0x0006dd19) popup_image_details_window

0xa6be,	// (0x0006dd25) popup_image_focus_window

0xa9a8,	// (0x0006e00f) camera2_autofocus_pane_ParamLimits

0xa9a8,	// (0x0006e00f) camera2_autofocus_pane

0x0093,	// (0x000636fa) bg_popup_sub_pane_cp06

0x50fa,	// (0x00068761) popup_image_focus_window_g1

0x5102,	// (0x00068769) popup_image_focus_window_g2

0x510a,	// (0x00068771) popup_image_focus_window_g3

0x5112,	// (0x00068779) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x00072d73) popup_image_focus_window_g

0x511a,	// (0x00068781) popup_image_focus_window_t1

0x5128,	// (0x0006878f) popup_image_focus_window_t2

0x5137,	// (0x0006879e) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x00072d7c) popup_image_focus_window_t

0x5145,	// (0x000687ac) camera2_autofocus_pane_g1

0x2251,	// (0x000658b8) bg_tb_trans_pane_cp01

0x5153,	// (0x000687ba) popup_image_details_window_g1

0x5166,	// (0x000687cd) popup_image_details_window_g2

0x0002,

0xf727,	// (0x00072d8e) popup_image_details_window_g

0x518f,	// (0x000687f6) popup_image_details_window_t1

0x51a1,	// (0x00068808) popup_image_details_window_t2

0x51ba,	// (0x00068821) popup_image_details_window_t3

0x51ce,	// (0x00068835) popup_image_details_window_t4

0x51e9,	// (0x00068850) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x00072d95) popup_image_details_window_t

0x082b,	// (0x00063e92) bg_calc_paper_pane_ParamLimits

0x0093,	// (0x000636fa) grid_highlight_pane_cp013

0x7dff,	// (0x0006b466) list_calc_pane_ParamLimits

0x7e11,	// (0x0006b478) scroll_pane_cp024

0x085d,	// (0x00063ec4) bg_calc_display_pane_ParamLimits

0x7e19,	// (0x0006b480) calc_display_pane_t1_ParamLimits

0x7e2e,	// (0x0006b495) calc_display_pane_t2_ParamLimits

0x7e43,	// (0x0006b4aa) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000727b4) calc_display_pane_t_ParamLimits

0x7ef9,	// (0x0006b560) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000727d1) cell_calc_pane_g

0x7f02,	// (0x0006b569) cell_calc_pane_t1

0x090a,	// (0x00063f71) grid_highlight_pane_cp02_ParamLimits

0x0920,	// (0x00063f87) toolbar_button_pane_cp01_ParamLimits

0x0920,	// (0x00063f87) toolbar_button_pane_cp01

0x18ae,	// (0x00064f15) temp_image_control_pane_ParamLimits

0x18ae,	// (0x00064f15) temp_image_control_pane

0x2251,	// (0x000658b8) main_mp3_pane

0x5203,	// (0x0006886a) temp_image_control_pane_g1_ParamLimits

0x5203,	// (0x0006886a) temp_image_control_pane_g1

0x5211,	// (0x00068878) temp_image_control_pane_g2_ParamLimits

0x5211,	// (0x00068878) temp_image_control_pane_g2

0x5223,	// (0x0006888a) temp_image_control_pane_g3_ParamLimits

0x5223,	// (0x0006888a) temp_image_control_pane_g3

0xafd4,	// (0x0006e63b) temp_image_control_pane_g4_ParamLimits

0xafd4,	// (0x0006e63b) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x00072da0) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x00072da0) temp_image_control_pane_g

0x5203,	// (0x0006886a) main_mp3_pane_g1

0xafe5,	// (0x0006e64c) main_mp3_pane_g2

0x0007,

0xf742,	// (0x00072da9) main_mp3_pane_g

0x5266,	// (0x000688cd) main_mp3_pane_t1

0x0b16,	// (0x0006417d) main_camera_pane_g8_ParamLimits

0x0b16,	// (0x0006417d) main_camera_pane_g8

0x87cb,	// (0x0006be32) main_video_pane_g7_ParamLimits

0x87cb,	// (0x0006be32) main_video_pane_g7

0xaad7,	// (0x0006e13e) main_camera2_pane_t7_ParamLimits

0xaad7,	// (0x0006e13e) main_camera2_pane_t7

0x0c6b,	// (0x000642d2) scroll_pane_cp025_ParamLimits

0x0c6b,	// (0x000642d2) scroll_pane_cp025

0x0c7f,	// (0x000642e6) scroll_pane_cp026_ParamLimits

0x0c7f,	// (0x000642e6) scroll_pane_cp026

0x0c8e,	// (0x000642f5) wml_content_pane_ParamLimits

0x0093,	// (0x000636fa) main_touch_calib_pane

0xb07d,	// (0x0006e6e4) main_touch_calib_pane_g1

0xb089,	// (0x0006e6f0) main_touch_calib_pane_g2

0xb095,	// (0x0006e6fc) main_touch_calib_pane_g3

0xb0a1,	// (0x0006e708) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x00072dc7) main_touch_calib_pane_g

0xb0ad,	// (0x0006e714) main_touch_calib_pane_t1

0xb0c2,	// (0x0006e729) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x00072dd0) main_touch_calib_pane_t

0x145f,	// (0x00064ac6) mup_progress_pane_cp02

0x1494,	// (0x00064afb) navi_pane_g1

0x151f,	// (0x00064b86) navi_pane_mp_t3

0x2251,	// (0x000658b8) main_mp3_pane_ParamLimits

0xa779,	// (0x0006dde0) navi_pane_ParamLimits

0x5203,	// (0x0006886a) main_mp3_pane_g1_ParamLimits

0xafe5,	// (0x0006e64c) main_mp3_pane_g2_ParamLimits

0xaff1,	// (0x0006e658) main_mp3_pane_g3_ParamLimits

0xaff1,	// (0x0006e658) main_mp3_pane_g3

0xaffd,	// (0x0006e664) main_mp3_pane_g4_ParamLimits

0xaffd,	// (0x0006e664) main_mp3_pane_g4

0x5233,	// (0x0006889a) main_mp3_pane_g5_ParamLimits

0x5233,	// (0x0006889a) main_mp3_pane_g5

0x5241,	// (0x000688a8) main_mp3_pane_g6_ParamLimits

0x5241,	// (0x000688a8) main_mp3_pane_g6

0x524e,	// (0x000688b5) main_mp3_pane_g7_ParamLimits

0x524e,	// (0x000688b5) main_mp3_pane_g7

0x525a,	// (0x000688c1) main_mp3_pane_g8_ParamLimits

0x525a,	// (0x000688c1) main_mp3_pane_g8

0xf742,	// (0x00072da9) main_mp3_pane_g_ParamLimits

0xb009,	// (0x0006e670) main_mp3_pane_t2

0xb017,	// (0x0006e67e) main_mp3_pane_t3

0x5274,	// (0x000688db) main_mp3_pane_t4

0x5282,	// (0x000688e9) main_mp3_pane_t5

0x0005,

0xf753,	// (0x00072dba) main_mp3_pane_t

0x5290,	// (0x000688f7) mup_progress_pane_cp01

0x78f1,	// (0x0006af58) aid_zoom_text_secondary2

0x5087,	// (0x000686ee) list_cale_ev2_pane

0x508f,	// (0x000686f6) scroll_pane_cp023_ParamLimits

0xb10d,	// (0x0006e774) field_cale_ev2_pane_ParamLimits

0xb10d,	// (0x0006e774) field_cale_ev2_pane

0xb123,	// (0x0006e78a) field_cale_ev2_pane_g1_ParamLimits

0xb123,	// (0x0006e78a) field_cale_ev2_pane_g1

0xb12f,	// (0x0006e796) field_cale_ev2_pane_g2_ParamLimits

0xb12f,	// (0x0006e796) field_cale_ev2_pane_g2

0xb147,	// (0x0006e7ae) field_cale_ev2_pane_g3_ParamLimits

0xb147,	// (0x0006e7ae) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x00072ddb) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x00072ddb) field_cale_ev2_pane_g

0x6939,	// (0x00069fa0) field_cale_ev2_pane_t1_ParamLimits

0x6939,	// (0x00069fa0) field_cale_ev2_pane_t1

0x6950,	// (0x00069fb7) field_cale_ev2_pane_t2_ParamLimits

0x6950,	// (0x00069fb7) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x00072de4) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x00072de4) field_cale_ev2_pane_t

0xa078,	// (0x0006d6df) main_postcard_pane_g5_ParamLimits

0xa078,	// (0x0006d6df) main_postcard_pane_g5

0xa084,	// (0x0006d6eb) main_postcard_pane_g6_ParamLimits

0xa084,	// (0x0006d6eb) main_postcard_pane_g6

0x8620,	// (0x0006bc87) camera2_autofocus_pane_cp_ParamLimits

0x8620,	// (0x0006bc87) camera2_autofocus_pane_cp

0x2251,	// (0x000658b8) main_mup3_pane

0xb1a4,	// (0x0006e80b) main_mup3_pane_g1_ParamLimits

0xb1a4,	// (0x0006e80b) main_mup3_pane_g1

0xb1c5,	// (0x0006e82c) main_mup3_pane_g2_ParamLimits

0xb1c5,	// (0x0006e82c) main_mup3_pane_g2

0xb232,	// (0x0006e899) main_mup3_pane_g3_ParamLimits

0xb232,	// (0x0006e899) main_mup3_pane_g3

0xb26d,	// (0x0006e8d4) main_mup3_pane_g4_ParamLimits

0xb26d,	// (0x0006e8d4) main_mup3_pane_g4

0xb2a8,	// (0x0006e90f) main_mup3_pane_g5_ParamLimits

0xb2a8,	// (0x0006e90f) main_mup3_pane_g5

0xb2e3,	// (0x0006e94a) main_mup3_pane_g6_ParamLimits

0xb2e3,	// (0x0006e94a) main_mup3_pane_g6

0x5298,	// (0x000688ff) main_mup3_pane_g7_ParamLimits

0x5298,	// (0x000688ff) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x00072df4) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x00072df4) main_mup3_pane_g

0xb351,	// (0x0006e9b8) main_mup3_pane_t1_ParamLimits

0xb351,	// (0x0006e9b8) main_mup3_pane_t1

0xb3b2,	// (0x0006ea19) main_mup3_pane_t2_ParamLimits

0xb3b2,	// (0x0006ea19) main_mup3_pane_t2

0xb46d,	// (0x0006ead4) main_mup3_pane_t4_ParamLimits

0xb46d,	// (0x0006ead4) main_mup3_pane_t4

0xb4b3,	// (0x0006eb1a) main_mup3_pane_t5_ParamLimits

0xb4b3,	// (0x0006eb1a) main_mup3_pane_t5

0xb557,	// (0x0006ebbe) main_mup3_pane_t6_ParamLimits

0xb557,	// (0x0006ebbe) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x00072e05) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x00072e05) main_mup3_pane_t

0xb5ff,	// (0x0006ec66) mup3_progress_pane_ParamLimits

0xb5ff,	// (0x0006ec66) mup3_progress_pane

0xb663,	// (0x0006ecca) popup_mup3_control_window_ParamLimits

0xb663,	// (0x0006ecca) popup_mup3_control_window

0x52a6,	// (0x0006890d) popup_mup3_text_window

0xb67c,	// (0x0006ece3) mup3_progress_pane_t1

0xb69a,	// (0x0006ed01) mup3_progress_pane_t2

0x52ae,	// (0x00068915) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x00072e12) mup3_progress_pane_t

0x52cb,	// (0x00068932) mup_progress_pane_cp03

0x0093,	// (0x000636fa) bg_tb_trans_pane_cp04

0xb6b8,	// (0x0006ed1f) mup3_volume_pane

0xb6c0,	// (0x0006ed27) popup_mup3_control_window_g1

0xb6c9,	// (0x0006ed30) mup3_volume_pane_g1

0xb6d2,	// (0x0006ed39) mup3_volume_pane_g2

0xb6db,	// (0x0006ed42) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x00072e19) mup3_volume_pane_g

0x0093,	// (0x000636fa) bg_tb_trans_pane_cp03

0x52db,	// (0x00068942) popup_mup3_text_window_g1

0x52e3,	// (0x0006894a) popup_mup3_text_window_t1

0x08e1,	// (0x00063f48) list_calc_item_pane_g1_ParamLimits

0x4d57,	// (0x000683be) mup_volume_pane_cp_g1

0xb0d7,	// (0x0006e73e) main_touch_calib_pane_t3

0xb0e9,	// (0x0006e750) main_touch_calib_pane_t4

0xb0fb,	// (0x0006e762) main_touch_calib_pane_t5

0x78b1,	// (0x0006af18) aid_cell_size_toolbar2

0x78b9,	// (0x0006af20) aid_popup3_width_pane

0x6657,	// (0x00069cbe) aid_zoom_text_msg_primary

0x0afe,	// (0x00064165) vorec_t7

0x08a5,	// (0x00063f0c) bg_calc_paper_pane_g1_ParamLimits

0x08bd,	// (0x00063f24) bg_calc_paper_pane_g2_ParamLimits

0x08b1,	// (0x00063f18) bg_calc_paper_pane_g3_ParamLimits

0x08d5,	// (0x00063f3c) bg_calc_paper_pane_g4_ParamLimits

0x08c9,	// (0x00063f30) bg_calc_paper_pane_g5_ParamLimits

0x7e7c,	// (0x0006b4e3) bg_calc_paper_pane_g6_ParamLimits

0x7e8b,	// (0x0006b4f2) bg_calc_paper_pane_g7_ParamLimits

0x7e9a,	// (0x0006b501) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000727bb) bg_calc_paper_pane_g_ParamLimits

0x7ea9,	// (0x0006b510) calc_bg_paper_pane_g9_ParamLimits

0x8700,	// (0x0006bd67) image_qvga_pane_ParamLimits

0x8700,	// (0x0006bd67) image_qvga_pane

0x0772,	// (0x00063dd9) bg_popup_sub_pane_cp04_ParamLimits

0x17e5,	// (0x00064e4c) popup_mup_playback_window_g1_ParamLimits

0x17f1,	// (0x00064e58) popup_mup_playback_window_t1_ParamLimits

0x1806,	// (0x00064e6d) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x00072b45) popup_mup_playback_window_t_ParamLimits

0xabfe,	// (0x0006e265) main_mup2_pane_g3_ParamLimits

0xabfe,	// (0x0006e265) main_mup2_pane_g3

0x89a8,	// (0x0006c00f) popup_toolbar_window_cp04

0x1be7,	// (0x0006524e) popup_call2_audio_second_window_g3_ParamLimits

0x1be7,	// (0x0006524e) popup_call2_audio_second_window_g3

0x1ff1,	// (0x00065658) popup_call2_audio_first_window_g4_ParamLimits

0x1ff1,	// (0x00065658) popup_call2_audio_first_window_g4

0x4845,	// (0x00067eac) popup_call2_audio_in_window_g4_ParamLimits

0x4845,	// (0x00067eac) popup_call2_audio_in_window_g4

0xa16f,	// (0x0006d7d6) aid_area_sk_bg_cut_ParamLimits

0xa16f,	// (0x0006d7d6) aid_area_sk_bg_cut

0x181b,	// (0x00064e82) aid_area_sk_bg_cut_2_ParamLimits

0x181b,	// (0x00064e82) aid_area_sk_bg_cut_2

0xaf46,	// (0x0006e5ad) aid_placing_details_win

0xaf4e,	// (0x0006e5b5) aid_placing_details_win_2

0x5145,	// (0x000687ac) camera2_autofocus_pane_g1_ParamLimits

0x7a9f,	// (0x0006b106) popup_fixed_preview_cale_window_ParamLimits

0x7a9f,	// (0x0006b106) popup_fixed_preview_cale_window

0x15b0,	// (0x00064c17) navi_slider_pane_g3

0x15a7,	// (0x00064c0e) navi_slider_pane_g4

0x159e,	// (0x00064c05) navi_slider_pane_g5

0x15b0,	// (0x00064c17) navi_slider_pane_g6

0x9b87,	// (0x0006d1ee) navi_slider_pane_g7

0x16da,	// (0x00064d41) mup_scale_pane_g3

0x16e3,	// (0x00064d4a) mup_scale_pane_g4

0x16ec,	// (0x00064d53) mup_scale_pane_g5

0x9f4a,	// (0x0006d5b1) mup_scale_pane_g6

0x9f53,	// (0x0006d5ba) mup_scale_pane_g7

0x15b0,	// (0x00064c17) cams2_slider_pane_g3

0x4de1,	// (0x00068448) cams2_slider_pane_g4

0xaeb3,	// (0x0006e51a) cams2_slider_pane_g5

0x15b0,	// (0x00064c17) cams2_slider_pane_g6

0xaebb,	// (0x0006e522) cams2_slider_pane_g7

0x5004,	// (0x0006866b) camera2_autofocus_pane_cp_g1

0x4be6,	// (0x0006824d) bg_popup_preview_window_pane_cp02_ParamLimits

0x4be6,	// (0x0006824d) bg_popup_preview_window_pane_cp02

0x52f1,	// (0x00068958) list_fp_cale_pane_ParamLimits

0x52f1,	// (0x00068958) list_fp_cale_pane

0x52fd,	// (0x00068964) popup_fixed_preview_cale_window_t1_ParamLimits

0x52fd,	// (0x00068964) popup_fixed_preview_cale_window_t1

0xb6e4,	// (0x0006ed4b) popup_fixed_preview_cale_window_t2_ParamLimits

0xb6e4,	// (0x0006ed4b) popup_fixed_preview_cale_window_t2

0xb6f9,	// (0x0006ed60) popup_fixed_preview_cale_window_t3_ParamLimits

0xb6f9,	// (0x0006ed60) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x00072e20) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x00072e20) popup_fixed_preview_cale_window_t

0xb70e,	// (0x0006ed75) list_single_fp_cale_pane_ParamLimits

0xb70e,	// (0x0006ed75) list_single_fp_cale_pane

0x531b,	// (0x00068982) list_single_fp_cale_pane_g1_ParamLimits

0x531b,	// (0x00068982) list_single_fp_cale_pane_g1

0x5327,	// (0x0006898e) list_single_fp_cale_pane_g2_ParamLimits

0x5327,	// (0x0006898e) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x00072e27) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x00072e27) list_single_fp_cale_pane_g

0x5340,	// (0x000689a7) list_single_fp_cale_pane_t1_ParamLimits

0x5340,	// (0x000689a7) list_single_fp_cale_pane_t1

0x5352,	// (0x000689b9) list_single_fp_cale_pane_t2_ParamLimits

0x5352,	// (0x000689b9) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x00072e2e) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x00072e2e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0093,	// (0x000636fa) main_dialer_pane

0xb71e,	// (0x0006ed85) aid_cell_size_keypad

0xb728,	// (0x0006ed8f) dialer_ne_pane

0xb730,	// (0x0006ed97) grid_dialer_command_1_pane

0xb738,	// (0x0006ed9f) grid_dialer_command_2_pane

0xb740,	// (0x0006eda7) grid_dialer_keypad_pane

0xb750,	// (0x0006edb7) bg_popup_call_pane_cp06_ParamLimits

0xb750,	// (0x0006edb7) bg_popup_call_pane_cp06

0xb75c,	// (0x0006edc3) dialer_ne_clear_pane_ParamLimits

0xb75c,	// (0x0006edc3) dialer_ne_clear_pane

0x5385,	// (0x000689ec) dialer_ne_pane_g1

0x538d,	// (0x000689f4) dialer_ne_pane_t1_ParamLimits

0x538d,	// (0x000689f4) dialer_ne_pane_t1

0xb768,	// (0x0006edcf) dialer_ne_pane_t2_ParamLimits

0xb768,	// (0x0006edcf) dialer_ne_pane_t2

0xb785,	// (0x0006edec) dialer_ne_pane_t3_ParamLimits

0xb785,	// (0x0006edec) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x00072e33) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x00072e33) dialer_ne_pane_t

0xb7a9,	// (0x0006ee10) dialer_ne_pane_t3_copy1_ParamLimits

0xb7a9,	// (0x0006ee10) dialer_ne_pane_t3_copy1

0xb7cd,	// (0x0006ee34) cell_dialer_keypad_pane_ParamLimits

0xb7cd,	// (0x0006ee34) cell_dialer_keypad_pane

0xb7e2,	// (0x0006ee49) cell_dialer_command_1_pane_ParamLimits

0xb7e2,	// (0x0006ee49) cell_dialer_command_1_pane

0xb7f8,	// (0x0006ee5f) cell_dialer_command_2_pane_ParamLimits

0xb7f8,	// (0x0006ee5f) cell_dialer_command_2_pane

0x539f,	// (0x00068a06) bg_button_pane_cp02_ParamLimits

0x539f,	// (0x00068a06) bg_button_pane_cp02

0xb807,	// (0x0006ee6e) cell_dialer_keypad_pane_g1_ParamLimits

0xb807,	// (0x0006ee6e) cell_dialer_keypad_pane_g1

0x539f,	// (0x00068a06) bg_button_pane_cp03_ParamLimits

0x539f,	// (0x00068a06) bg_button_pane_cp03

0xb81c,	// (0x0006ee83) cell_dialer_command_1_pane_g1_ParamLimits

0xb81c,	// (0x0006ee83) cell_dialer_command_1_pane_g1

0x53ab,	// (0x00068a12) bg_button_pane_cp04

0xb82f,	// (0x0006ee96) cell_dialer_command_2_pane_g1

0x0acc,	// (0x00064133) bg_button_pane_cp06

0x53b3,	// (0x00068a1a) dialer_ne_clear_pane_g1

0x14a0,	// (0x00064b07) navi_pane_g2

0x9b2f,	// (0x0006d196) navi_pane_g3

0x0002,

0xf3e1,	// (0x00072a48) navi_pane_g

0x152d,	// (0x00064b94) navi_pane_mv_g2

0x1554,	// (0x00064bbb) navi_pane_mv_g5

0x9b4c,	// (0x0006d1b3) navi_pane_mv_t1

0x085d,	// (0x00063ec4) main_clock2_pane

0xb86b,	// (0x0006eed2) main_clock2_list_pane_ParamLimits

0xb86b,	// (0x0006eed2) main_clock2_list_pane

0xb891,	// (0x0006eef8) main_clock2_pane_t1_ParamLimits

0xb891,	// (0x0006eef8) main_clock2_pane_t1

0xb8b1,	// (0x0006ef18) main_clock2_pane_t2_ParamLimits

0xb8b1,	// (0x0006ef18) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x00072e3f) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x00072e3f) main_clock2_pane_t

0xb90a,	// (0x0006ef71) popup_clock_analogue_window_cp03_ParamLimits

0xb90a,	// (0x0006ef71) popup_clock_analogue_window_cp03

0xb928,	// (0x0006ef8f) popup_clock_digital_window_cp02_ParamLimits

0xb928,	// (0x0006ef8f) popup_clock_digital_window_cp02

0xb995,	// (0x0006effc) main_clock2_list_single_pane_ParamLimits

0xb995,	// (0x0006effc) main_clock2_list_single_pane

0x0acc,	// (0x00064133) list_highlight_pane_cp05

0x53eb,	// (0x00068a52) main_clock2_list_single_pane_t1

0x89a8,	// (0x0006c00f) popup_toolbar_window_cp04_ParamLimits

0xafa4,	// (0x0006e60b) camera2_autofocus_pane_g2_ParamLimits

0xafa4,	// (0x0006e60b) camera2_autofocus_pane_g2

0xafb0,	// (0x0006e617) camera2_autofocus_pane_g3_ParamLimits

0xafb0,	// (0x0006e617) camera2_autofocus_pane_g3

0xafbc,	// (0x0006e623) camera2_autofocus_pane_g4_ParamLimits

0xafbc,	// (0x0006e623) camera2_autofocus_pane_g4

0xafc8,	// (0x0006e62f) camera2_autofocus_pane_g5_ParamLimits

0xafc8,	// (0x0006e62f) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x00072d83) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x00072d83) camera2_autofocus_pane_g

0xb16b,	// (0x0006e7d2) camera2_autofocus_pane_cp_g2

0xb173,	// (0x0006e7da) camera2_autofocus_pane_cp_g3

0xb17b,	// (0x0006e7e2) camera2_autofocus_pane_cp_g4

0xb183,	// (0x0006e7ea) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x00072de9) camera2_autofocus_pane_cp_g

0xb748,	// (0x0006edaf) popup_dialer_spcha_window

0x0093,	// (0x000636fa) bg_popup_sub_pane_cp07

0x53f9,	// (0x00068a60) list_spcha_pane

0x5401,	// (0x00068a68) list_single_spcha_pane_ParamLimits

0x5401,	// (0x00068a68) list_single_spcha_pane

0x0093,	// (0x000636fa) list_highlight_pane_cp06

0x5412,	// (0x00068a79) list_single_spcha_pane_t1

0x45ef,	// (0x00067c56) popup_call2_audio_out_window_g4_ParamLimits

0x45ef,	// (0x00067c56) popup_call2_audio_out_window_g4

0x0093,	// (0x000636fa) main_imed2_pane

0xa6c6,	// (0x0006dd2d) popup_imed_adjust2_window

0xa6d7,	// (0x0006dd3e) popup_imed_trans_window_ParamLimits

0xa6d7,	// (0x0006dd3e) popup_imed_trans_window

0x4e48,	// (0x000684af) popup_blid_sat_info2_window_t1

0x4e56,	// (0x000684bd) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x00072d18) popup_blid_sat_info2_window_t

0xba3f,	// (0x0006f0a6) aid_size_cell_colour_35

0xba56,	// (0x0006f0bd) aid_size_cell_colour_112

0xba6d,	// (0x0006f0d4) aid_size_cell_effect

0x2251,	// (0x000658b8) bg_tb_trans_pane_cp02

0x1079,	// (0x000646e0) heading_imed_pane

0xba87,	// (0x0006f0ee) listscroll_imed_pane

0x5420,	// (0x00068a87) heading_imed_pane_g1

0x5428,	// (0x00068a8f) heading_imed_pane_t1

0x5436,	// (0x00068a9d) grid_imed_colour_35_pane_ParamLimits

0x5436,	// (0x00068a9d) grid_imed_colour_35_pane

0xba93,	// (0x0006f0fa) grid_imed_effect_pane

0x5449,	// (0x00068ab0) list_imed_aspect_pane

0xba9f,	// (0x0006f106) scroll_pane_cp027_ParamLimits

0xba9f,	// (0x0006f106) scroll_pane_cp027

0xbaab,	// (0x0006f112) cell_imed_effect_pane_ParamLimits

0xbaab,	// (0x0006f112) cell_imed_effect_pane

0x5451,	// (0x00068ab8) cell_imed_colour_pane_ParamLimits

0x5451,	// (0x00068ab8) cell_imed_colour_pane

0x548b,	// (0x00068af2) cell_imed_colour_pane_g1_ParamLimits

0x548b,	// (0x00068af2) cell_imed_colour_pane_g1

0x549c,	// (0x00068b03) hgihlgiht_grid_pane_cp016_ParamLimits

0x549c,	// (0x00068b03) hgihlgiht_grid_pane_cp016

0xbac1,	// (0x0006f128) cell_imed_effect_pane_g1

0xbac9,	// (0x0006f130) grid_highlight_pane_cp017

0x54ad,	// (0x00068b14) list_imed_single_pane_ParamLimits

0x54ad,	// (0x00068b14) list_imed_single_pane

0x0093,	// (0x000636fa) list_highlight_pane_cp07

0x54c0,	// (0x00068b27) list_imed_aspect_pane_comp1_t1

0x4bf2,	// (0x00068259) bg_tb_trans_pane_cp05

0x54e0,	// (0x00068b47) popup_imed_adjust2_window_g1

0x5507,	// (0x00068b6e) popup_imed_adjust2_window_t1

0x551f,	// (0x00068b86) slider_imed_adjust_pane

0x5533,	// (0x00068b9a) slider_imed_adjust_pane_g1

0x5543,	// (0x00068baa) slider_imed_adjust_pane_g2

0x5553,	// (0x00068bba) slider_imed_adjust_pane_g3

0x5564,	// (0x00068bcb) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x00072e5c) slider_imed_adjust_pane_g

0xbad2,	// (0x0006f139) aid_size_cell_clipart2

0xbade,	// (0x0006f145) grid_imed_clipart_pane

0x5575,	// (0x00068bdc) scroll_pane_cp031

0xbae8,	// (0x0006f14f) cell_imed_clipart_pane_ParamLimits

0xbae8,	// (0x0006f14f) cell_imed_clipart_pane

0xbaff,	// (0x0006f166) cell_imed_clipart_pane_g1

0x0093,	// (0x000636fa) grid_highlight_pane_cp014

0xb877,	// (0x0006eede) main_clock2_pane_g1_ParamLimits

0xb877,	// (0x0006eede) main_clock2_pane_g1

0xb940,	// (0x0006efa7) aid_call2_pane_cp10

0xb952,	// (0x0006efb9) aid_call_pane_cp10

0x142f,	// (0x00064a96) popup_clock_analogue_window_cp10_g1

0x142f,	// (0x00064a96) popup_clock_analogue_window_cp10_g2

0xb964,	// (0x0006efcb) popup_clock_analogue_window_cp10_g3

0xb964,	// (0x0006efcb) popup_clock_analogue_window_cp10_g4

0x142f,	// (0x00064a96) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x00072e4a) popup_clock_analogue_window_cp10_g

0xb976,	// (0x0006efdd) popup_clock_analogue_window_cp10_t1

0xb9a7,	// (0x0006f00e) clock_digital_number_pane_cp10_ParamLimits

0xb9a7,	// (0x0006f00e) clock_digital_number_pane_cp10

0xb9bf,	// (0x0006f026) clock_digital_number_pane_cp11_ParamLimits

0xb9bf,	// (0x0006f026) clock_digital_number_pane_cp11

0xb9d7,	// (0x0006f03e) clock_digital_number_pane_cp12_ParamLimits

0xb9d7,	// (0x0006f03e) clock_digital_number_pane_cp12

0xb9ef,	// (0x0006f056) clock_digital_number_pane_cp13_ParamLimits

0xb9ef,	// (0x0006f056) clock_digital_number_pane_cp13

0xba07,	// (0x0006f06e) clock_digital_separator_pane_cp10_ParamLimits

0xba07,	// (0x0006f06e) clock_digital_separator_pane_cp10

0xba1f,	// (0x0006f086) popup_clock_digital_window_cp02_t1_ParamLimits

0xba1f,	// (0x0006f086) popup_clock_digital_window_cp02_t1

0x076a,	// (0x00063dd1) clock_digital_number_pane_cp10_g1

0x076a,	// (0x00063dd1) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x00072e65) clock_digital_number_pane_cp10_g

0x076a,	// (0x00063dd1) clock_digital_separator_pane_cp10_g1

0x076a,	// (0x00063dd1) clock_digital_separator_pane_g2_cp10

0x155c,	// (0x00064bc3) navi_pane_vded_g4

0x1565,	// (0x00064bcc) navi_pane_vded_g5

0x156e,	// (0x00064bd5) navi_pane_vded_t1

0x0093,	// (0x000636fa) main_vded_pane

0xbb08,	// (0x0006f16f) main_vded_pane_g1

0xbb10,	// (0x0006f177) main_vded_pane_g2

0xbb18,	// (0x0006f17f) main_vded_pane_g3

0x0002,

0xf803,	// (0x00072e6a) main_vded_pane_g

0xbb20,	// (0x0006f187) main_vded_pane_t1

0xbb2e,	// (0x0006f195) main_vded_pane_t2

0x0001,

0xf80a,	// (0x00072e71) main_vded_pane_t

0xbb3c,	// (0x0006f1a3) vded_slider_pane

0xbb44,	// (0x0006f1ab) vded_video_pane

0x557d,	// (0x00068be4) vded_video_pane_g1

0xbb4c,	// (0x0006f1b3) vded_video_pane_g2

0x5004,	// (0x0006866b) vded_video_pane_g3

0x0002,

0xf80f,	// (0x00072e76) vded_video_pane_g

0x5587,	// (0x00068bee) vded_slider_pane_g1

0x4d57,	// (0x000683be) vded_slider_pane_g2

0x5590,	// (0x00068bf7) vded_slider_pane_g3

0x5599,	// (0x00068c00) vded_slider_pane_g4

0x55a2,	// (0x00068c09) vded_slider_pane_g5

0x0004,

0xf816,	// (0x00072e7d) vded_slider_pane_g

0xb657,	// (0x0006ecbe) mup3_rocker_pane_ParamLimits

0xb657,	// (0x0006ecbe) mup3_rocker_pane

0xbb55,	// (0x0006f1bc) mup3_control_keys_pane_g1

0xbb5d,	// (0x0006f1c4) mup3_control_keys_pane_g2

0xbb65,	// (0x0006f1cc) mup3_control_keys_pane_g3

0xbb6d,	// (0x0006f1d4) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x00072e88) mup3_control_keys_pane_g

0x7ac3,	// (0x0006b12a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7ac3,	// (0x0006b12a) popup_toolbar2_fixed_window_cp01

0xb66f,	// (0x0006ecd6) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb66f,	// (0x0006ecd6) popup_toolbar2_fixed_window_cp02

0x1d59,	// (0x000653c0) popup_call2_audio_second_window_t4_ParamLimits

0x1d59,	// (0x000653c0) popup_call2_audio_second_window_t4

0x445c,	// (0x00067ac3) popup_call2_audio_first_window_t6_ParamLimits

0x445c,	// (0x00067ac3) popup_call2_audio_first_window_t6

0x46f2,	// (0x00067d59) popup_call2_audio_out_window_t6_ParamLimits

0x46f2,	// (0x00067d59) popup_call2_audio_out_window_t6

0x0093,	// (0x000636fa) main_vitu_pane

0xbb7d,	// (0x0006f1e4) aid_size_cell_itu_ParamLimits

0xbb7d,	// (0x0006f1e4) aid_size_cell_itu

0x3ee3,	// (0x0006754a) bg_popup_window_pane_cp08_ParamLimits

0x3ee3,	// (0x0006754a) bg_popup_window_pane_cp08

0xbb8b,	// (0x0006f1f2) field_vitu_entry_pane_ParamLimits

0xbb8b,	// (0x0006f1f2) field_vitu_entry_pane

0xbb98,	// (0x0006f1ff) grid_vitu_function_pane_ParamLimits

0xbb98,	// (0x0006f1ff) grid_vitu_function_pane

0xbba4,	// (0x0006f20b) grid_vitu_itu_pane_ParamLimits

0xbba4,	// (0x0006f20b) grid_vitu_itu_pane

0xbbb0,	// (0x0006f217) cell_vitu_itu_pane_ParamLimits

0xbbb0,	// (0x0006f217) cell_vitu_itu_pane

0xbbc5,	// (0x0006f22c) cell_vitu_function_pane_ParamLimits

0xbbc5,	// (0x0006f22c) cell_vitu_function_pane

0x2251,	// (0x000658b8) bg_popup_sub_pane_cp08_ParamLimits

0x2251,	// (0x000658b8) bg_popup_sub_pane_cp08

0xbbd7,	// (0x0006f23e) field_vitu_entry_pane_t1_ParamLimits

0xbbd7,	// (0x0006f23e) field_vitu_entry_pane_t1

0x55c3,	// (0x00068c2a) field_vitu_entry_pane_t2_ParamLimits

0x55c3,	// (0x00068c2a) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x00072e96) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x00072e96) field_vitu_entry_pane_t

0x55e0,	// (0x00068c47) bg_button_pane_cp05_ParamLimits

0x55e0,	// (0x00068c47) bg_button_pane_cp05

0xbbf0,	// (0x0006f257) cell_vitu_itu_pane_g1

0xbc08,	// (0x0006f26f) cell_vitu_itu_pane_t1_ParamLimits

0xbc08,	// (0x0006f26f) cell_vitu_itu_pane_t1

0xbc1a,	// (0x0006f281) cell_vitu_itu_pane_t2_ParamLimits

0xbc1a,	// (0x0006f281) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x00072e9b) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x00072e9b) cell_vitu_itu_pane_t

0x55ee,	// (0x00068c55) bg_button_pane_cp07

0xbc4f,	// (0x0006f2b6) cell_vitu_function_pane_g1

0x7d32,	// (0x0006b399) main_calc_pane_g1

0x78e9,	// (0x0006af50) aid_visual_content_pane

0x0093,	// (0x000636fa) main_vradio_pane

0xbc58,	// (0x0006f2bf) main_vradio_pane_g1_ParamLimits

0xbc58,	// (0x0006f2bf) main_vradio_pane_g1

0x55f8,	// (0x00068c5f) main_vradio_pane_g2_ParamLimits

0x55f8,	// (0x00068c5f) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x00072ea2) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x00072ea2) main_vradio_pane_g

0xbc66,	// (0x0006f2cd) main_vradio_pane_t1_ParamLimits

0xbc66,	// (0x0006f2cd) main_vradio_pane_t1

0xbc78,	// (0x0006f2df) main_vradio_pane_t2_ParamLimits

0xbc78,	// (0x0006f2df) main_vradio_pane_t2

0x5605,	// (0x00068c6c) main_vradio_pane_t3_ParamLimits

0x5605,	// (0x00068c6c) main_vradio_pane_t3

0x0002,

0xf840,	// (0x00072ea7) main_vradio_pane_t_ParamLimits

0xf840,	// (0x00072ea7) main_vradio_pane_t

0xbc8a,	// (0x0006f2f1) vradio_rocker_control_pane_ParamLimits

0xbc8a,	// (0x0006f2f1) vradio_rocker_control_pane

0xbc96,	// (0x0006f2fd) vradio_station_info_pane_ParamLimits

0xbc96,	// (0x0006f2fd) vradio_station_info_pane

0x5617,	// (0x00068c7e) vradio_frequency_info_pane_ParamLimits

0x5617,	// (0x00068c7e) vradio_frequency_info_pane

0x5004,	// (0x0006866b) vradio_station_info_pane_g1

0x5626,	// (0x00068c8d) vradio_station_info_pane_t1_ParamLimits

0x5626,	// (0x00068c8d) vradio_station_info_pane_t1

0x5648,	// (0x00068caf) vradio_station_info_pane_t2_ParamLimits

0x5648,	// (0x00068caf) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x00072eae) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x00072eae) vradio_station_info_pane_t

0x565a,	// (0x00068cc1) vradio_tuning_pane

0x5662,	// (0x00068cc9) vradio_rocker_control_pane_g1

0x566a,	// (0x00068cd1) vradio_rocker_control_pane_g2

0x5672,	// (0x00068cd9) vradio_rocker_control_pane_g3

0x567a,	// (0x00068ce1) vradio_rocker_control_pane_g4

0x5682,	// (0x00068ce9) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x00072eb3) vradio_rocker_control_pane_g

0xbca3,	// (0x0006f30a) vradio_frequency_info_pane_g1

0x568a,	// (0x00068cf1) vradio_frequency_info_pane_t1_ParamLimits

0x568a,	// (0x00068cf1) vradio_frequency_info_pane_t1

0xbcab,	// (0x0006f312) vradio_tuning_pane_g1

0xbcb4,	// (0x0006f31b) vradio_tuning_pane_t1

0x7928,	// (0x0006af8f) area_side_right_pane_ParamLimits

0x7928,	// (0x0006af8f) area_side_right_pane

0x4bad,	// (0x00068214) status_small_pane_g1

0x4bb5,	// (0x0006821c) status_small_pane_g2

0x4bbe,	// (0x00068225) status_small_pane_g3

0x4bc7,	// (0x0006822e) status_small_pane_g4

0x0003,

0xf607,	// (0x00072c6e) status_small_pane_g

0x4bd0,	// (0x00068237) status_small_pane_t1

0x0093,	// (0x000636fa) main_video3_pane

0x569e,	// (0x00068d05) cams_zoom_vslider_pane

0x56a6,	// (0x00068d0d) image3_wide_pane_ParamLimits

0x56a6,	// (0x00068d0d) image3_wide_pane

0x56c0,	// (0x00068d27) image3_wide_small_pane

0x56ca,	// (0x00068d31) main_video3_pane_g1_ParamLimits

0x56ca,	// (0x00068d31) main_video3_pane_g1

0x56e6,	// (0x00068d4d) main_video3_pane_g2_ParamLimits

0x56e6,	// (0x00068d4d) main_video3_pane_g2

0x0001,

0xf857,	// (0x00072ebe) main_video3_pane_g_ParamLimits

0xf857,	// (0x00072ebe) main_video3_pane_g

0x5702,	// (0x00068d69) main_video3_pane_t1_ParamLimits

0x5702,	// (0x00068d69) main_video3_pane_t1

0x572d,	// (0x00068d94) main_video3_pane_t2_ParamLimits

0x572d,	// (0x00068d94) main_video3_pane_t2

0x5758,	// (0x00068dbf) main_video3_pane_t3_ParamLimits

0x5758,	// (0x00068dbf) main_video3_pane_t3

0x0002,

0xf85c,	// (0x00072ec3) main_video3_pane_t_ParamLimits

0xf85c,	// (0x00072ec3) main_video3_pane_t

0x5783,	// (0x00068dea) cams_zoom_vslider_pane_g1

0x578c,	// (0x00068df3) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x00072eca) cams_zoom_vslider_pane_g

0x5794,	// (0x00068dfb) small_slider_vertical_pane

0x5004,	// (0x0006866b) small_slider_vertical_pane_g1

0x5004,	// (0x0006866b) small_slider_vertical_pane_g2

0x579c,	// (0x00068e03) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x00072ecf) small_slider_vertical_pane_g

0x0093,	// (0x000636fa) main_hwr_training_pane

0x57a5,	// (0x00068e0c) hwr_training_instruct_pane_ParamLimits

0x57a5,	// (0x00068e0c) hwr_training_instruct_pane

0xbcc3,	// (0x0006f32a) hwr_training_navi_pane_ParamLimits

0xbcc3,	// (0x0006f32a) hwr_training_navi_pane

0xbcd7,	// (0x0006f33e) hwr_training_write_pane_ParamLimits

0xbcd7,	// (0x0006f33e) hwr_training_write_pane

0x0093,	// (0x000636fa) bg_frame_shadow_pane

0x57d4,	// (0x00068e3b) hwr_training_write_pane_g1

0x57dc,	// (0x00068e43) hwr_training_write_pane_g2

0x57e4,	// (0x00068e4b) hwr_training_write_pane_g3

0x57ec,	// (0x00068e53) hwr_training_write_pane_g4

0x57f4,	// (0x00068e5b) hwr_training_write_pane_g5

0x57fc,	// (0x00068e63) hwr_training_write_pane_g6

0x5804,	// (0x00068e6b) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x00072ed6) hwr_training_write_pane_g

0xbd05,	// (0x0006f36c) hwr_training_navi_pane_g1_ParamLimits

0xbd05,	// (0x0006f36c) hwr_training_navi_pane_g1

0xbd17,	// (0x0006f37e) hwr_training_navi_pane_g2_ParamLimits

0xbd17,	// (0x0006f37e) hwr_training_navi_pane_g2

0xbd29,	// (0x0006f390) hwr_training_navi_pane_g3_ParamLimits

0xbd29,	// (0x0006f390) hwr_training_navi_pane_g3

0xbd39,	// (0x0006f3a0) hwr_training_navi_pane_g4_ParamLimits

0xbd39,	// (0x0006f3a0) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x00072ee5) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x00072ee5) hwr_training_navi_pane_g

0xbd53,	// (0x0006f3ba) hwr_training_navi_pane_t1

0xbd61,	// (0x0006f3c8) list_single_hwr_training_instruct_pane_ParamLimits

0xbd61,	// (0x0006f3c8) list_single_hwr_training_instruct_pane

0x580c,	// (0x00068e73) list_single_hwr_training_instruct_pane_t1

0x4f44,	// (0x000685ab) bg_frame_shadow_pane_g1

0x581b,	// (0x00068e82) bg_frame_shadow_pane_g2

0x5823,	// (0x00068e8a) bg_frame_shadow_pane_g3

0x582b,	// (0x00068e92) bg_frame_shadow_pane_g4

0x5833,	// (0x00068e9a) bg_frame_shadow_pane_g5

0x583b,	// (0x00068ea2) bg_frame_shadow_pane_g6

0x5843,	// (0x00068eaa) bg_frame_shadow_pane_g7

0x0980,	// (0x00063fe7) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x00072ef0) bg_frame_shadow_pane_g

0x0093,	// (0x000636fa) main_video_tele_dialer_pane

0xbd79,	// (0x0006f3e0) aid_size_cell_video_keypad_ParamLimits

0xbd79,	// (0x0006f3e0) aid_size_cell_video_keypad

0xbd89,	// (0x0006f3f0) grid_video_dialer_keypad_pane_ParamLimits

0xbd89,	// (0x0006f3f0) grid_video_dialer_keypad_pane

0xbdb9,	// (0x0006f420) video_down_pane_cp_ParamLimits

0xbdb9,	// (0x0006f420) video_down_pane_cp

0xbde1,	// (0x0006f448) cell_video_dialer_keypad_pane_ParamLimits

0xbde1,	// (0x0006f448) cell_video_dialer_keypad_pane

0x584b,	// (0x00068eb2) bg_button_pane_cp08_ParamLimits

0x584b,	// (0x00068eb2) bg_button_pane_cp08

0xbdf6,	// (0x0006f45d) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbdf6,	// (0x0006f45d) cell_video_dialer_keypad_pane_g1

0xb64b,	// (0x0006ecb2) mup3_rocker2_pane_ParamLimits

0xb64b,	// (0x0006ecb2) mup3_rocker2_pane

0x5004,	// (0x0006866b) mup3_rocker2_pane_g1

0xa648,	// (0x0006dcaf) main_dialer2_pane

0x0093,	// (0x000636fa) main_mp4_pane

0xbe3d,	// (0x0006f4a4) main_mp4_pane_g1_ParamLimits

0xbe3d,	// (0x0006f4a4) main_mp4_pane_g1

0xbe4b,	// (0x0006f4b2) main_mp4_pane_g2_ParamLimits

0xbe4b,	// (0x0006f4b2) main_mp4_pane_g2

0xbe59,	// (0x0006f4c0) main_mp4_pane_g3_ParamLimits

0xbe59,	// (0x0006f4c0) main_mp4_pane_g3

0xbe8e,	// (0x0006f4f5) main_mp4_pane_g4_ParamLimits

0xbe8e,	// (0x0006f4f5) main_mp4_pane_g4

0xbebc,	// (0x0006f523) main_mp4_pane_g5_ParamLimits

0xbebc,	// (0x0006f523) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x00072f10) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x00072f10) main_mp4_pane_g

0xbf30,	// (0x0006f597) main_mp4_pane_t1_ParamLimits

0xbf30,	// (0x0006f597) main_mp4_pane_t1

0xbf88,	// (0x0006f5ef) main_mp4_pane_t2_ParamLimits

0xbf88,	// (0x0006f5ef) main_mp4_pane_t2

0x5857,	// (0x00068ebe) main_mp4_pane_t3_ParamLimits

0x5857,	// (0x00068ebe) main_mp4_pane_t3

0xbfda,	// (0x0006f641) main_mp4_pane_t4_ParamLimits

0xbfda,	// (0x0006f641) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x00072f21) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x00072f21) main_mp4_pane_t

0xc01a,	// (0x0006f681) mp4_progress_pane_ParamLimits

0xc01a,	// (0x0006f681) mp4_progress_pane

0xc05e,	// (0x0006f6c5) mp4_rocker_pane_ParamLimits

0xc05e,	// (0x0006f6c5) mp4_rocker_pane

0x5885,	// (0x00068eec) mp4_progress_pane_t1

0x589c,	// (0x00068f03) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x00072f2a) mp4_progress_pane_t

0x58b3,	// (0x00068f1a) mup_progress_pane_cp04

0x5004,	// (0x0006866b) mp4_rocker_pane_g1

0xc07c,	// (0x0006f6e3) aid_cell_size_keypad2_ParamLimits

0xc07c,	// (0x0006f6e3) aid_cell_size_keypad2

0xc08c,	// (0x0006f6f3) dialer2_ne_pane_ParamLimits

0xc08c,	// (0x0006f6f3) dialer2_ne_pane

0xc098,	// (0x0006f6ff) grid_dialer2_keypad_pane_ParamLimits

0xc098,	// (0x0006f6ff) grid_dialer2_keypad_pane

0x2828,	// (0x00065e8f) bg_popup_call_pane_cp07_ParamLimits

0x2828,	// (0x00065e8f) bg_popup_call_pane_cp07

0xc0a4,	// (0x0006f70b) dialer2_ne_pane_t1_ParamLimits

0xc0a4,	// (0x0006f70b) dialer2_ne_pane_t1

0xc0c9,	// (0x0006f730) cell_dialer2_keypad_pane_ParamLimits

0xc0c9,	// (0x0006f730) cell_dialer2_keypad_pane

0x58db,	// (0x00068f42) bg_button_pane_pane_cp04_ParamLimits

0x58db,	// (0x00068f42) bg_button_pane_pane_cp04

0xc0de,	// (0x0006f745) cell_dialer2_keypad_pane_g1_ParamLimits

0xc0de,	// (0x0006f745) cell_dialer2_keypad_pane_g1

0x8884,	// (0x0006beeb) aid_placing_vt_set_content_ParamLimits

0x8884,	// (0x0006beeb) aid_placing_vt_set_content

0x88aa,	// (0x0006bf11) aid_placing_vt_set_title_ParamLimits

0x88aa,	// (0x0006bf11) aid_placing_vt_set_title

0x0093,	// (0x000636fa) main_image3_pane

0xc152,	// (0x0006f7b9) area_side_right_pane_cp01_ParamLimits

0xc152,	// (0x0006f7b9) area_side_right_pane_cp01

0x2dff,	// (0x00066466) main_image3_pane_g1_ParamLimits

0x2dff,	// (0x00066466) main_image3_pane_g1

0xc17f,	// (0x0006f7e6) main_image3_pane_g2_ParamLimits

0xc17f,	// (0x0006f7e6) main_image3_pane_g2

0xc196,	// (0x0006f7fd) main_image3_pane_g3_ParamLimits

0xc196,	// (0x0006f7fd) main_image3_pane_g3

0xc1ad,	// (0x0006f814) main_image3_pane_g4_ParamLimits

0xc1ad,	// (0x0006f814) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x00072f39) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x00072f39) main_image3_pane_g

0xc1c4,	// (0x0006f82b) main_image3_pane_t1_ParamLimits

0xc1c4,	// (0x0006f82b) main_image3_pane_t1

0xc1e9,	// (0x0006f850) main_image3_pane_t2_ParamLimits

0xc1e9,	// (0x0006f850) main_image3_pane_t2

0xc208,	// (0x0006f86f) main_image3_pane_t3_ParamLimits

0xc208,	// (0x0006f86f) main_image3_pane_t3

0x0003,

0xf8db,	// (0x00072f42) main_image3_pane_t_ParamLimits

0xf8db,	// (0x00072f42) main_image3_pane_t

0x3ee3,	// (0x0006754a) grid_sctrl_middle_pane_cp01_ParamLimits

0x3ee3,	// (0x0006754a) grid_sctrl_middle_pane_cp01

0xc263,	// (0x0006f8ca) cell_sctrl_middle_pane_cp01_ParamLimits

0xc263,	// (0x0006f8ca) cell_sctrl_middle_pane_cp01

0xc274,	// (0x0006f8db) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc274,	// (0x0006f8db) cell_sctrl_middle_pane_cp01_g1

0x0093,	// (0x000636fa) main_call4_pane

0xc281,	// (0x0006f8e8) aid_size_button_call4_ParamLimits

0xc281,	// (0x0006f8e8) aid_size_button_call4

0xc2ab,	// (0x0006f912) call4_windows_pane_ParamLimits

0xc2ab,	// (0x0006f912) call4_windows_pane

0xc2bf,	// (0x0006f926) grid_call4_button_pane_ParamLimits

0xc2bf,	// (0x0006f926) grid_call4_button_pane

0x58ff,	// (0x00068f66) call4_windows_conf_pane

0xc2e1,	// (0x0006f948) popup_call4_audio_first_window_ParamLimits

0xc2e1,	// (0x0006f948) popup_call4_audio_first_window

0xc301,	// (0x0006f968) popup_call4_audio_second_window_ParamLimits

0xc301,	// (0x0006f968) popup_call4_audio_second_window

0xee0c,	// (0x00072473) popup_call4_audio_wait_window_ParamLimits

0xee0c,	// (0x00072473) popup_call4_audio_wait_window

0xc313,	// (0x0006f97a) cell_call4_button_pane_ParamLimits

0xc313,	// (0x0006f97a) cell_call4_button_pane

0x0920,	// (0x00063f87) bg_button_pane_cp09_ParamLimits

0x0920,	// (0x00063f87) bg_button_pane_cp09

0xc336,	// (0x0006f99d) cell_call4_button_pane_g1_ParamLimits

0xc336,	// (0x0006f99d) cell_call4_button_pane_g1

0xc343,	// (0x0006f9aa) cell_call4_button_pane_t1_ParamLimits

0xc343,	// (0x0006f9aa) cell_call4_button_pane_t1

0xee20,	// (0x00072487) popup_call4_audio_conf_window_ParamLimits

0xee20,	// (0x00072487) popup_call4_audio_conf_window

0xb67c,	// (0x0006ece3) mup3_progress_pane_t1_ParamLimits

0xb69a,	// (0x0006ed01) mup3_progress_pane_t2_ParamLimits

0x52ae,	// (0x00068915) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x00072e12) mup3_progress_pane_t_ParamLimits

0x52cb,	// (0x00068932) mup_progress_pane_cp03_ParamLimits

0xbb75,	// (0x0006f1dc) mup3_control_keys_pane_g4_copy1

0xc048,	// (0x0006f6af) mp4_rocker2_pane_ParamLimits

0xc048,	// (0x0006f6af) mp4_rocker2_pane

0xee34,	// (0x0007249b) mp4_rocker2_pane_g1

0xee3c,	// (0x000724a3) mp4_rocker2_pane_g2

0xc387,	// (0x0006f9ee) mp4_rocker2_pane_g3

0xc38f,	// (0x0006f9f6) mp4_rocker2_pane_g4

0xc397,	// (0x0006f9fe) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x00072f4b) mp4_rocker2_pane_g

0x0093,	// (0x000636fa) main_camera4_pane

0x0093,	// (0x000636fa) main_video4_pane

0xbd95,	// (0x0006f3fc) main_video_tele_dialer_pane_t1_ParamLimits

0xbd95,	// (0x0006f3fc) main_video_tele_dialer_pane_t1

0xbda7,	// (0x0006f40e) main_video_tele_dialer_pane_t2_ParamLimits

0xbda7,	// (0x0006f40e) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x00072f01) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x00072f01) main_video_tele_dialer_pane_t

0xc3b5,	// (0x0006fa1c) cam4_autofocus_pane_ParamLimits

0xc3b5,	// (0x0006fa1c) cam4_autofocus_pane

0xc3cb,	// (0x0006fa32) cam4_image_uncrop_pane_ParamLimits

0xc3cb,	// (0x0006fa32) cam4_image_uncrop_pane

0xc3e0,	// (0x0006fa47) cam4_indicators_pane_ParamLimits

0xc3e0,	// (0x0006fa47) cam4_indicators_pane

0xc3fa,	// (0x0006fa61) main_camera4_pane_g1_ParamLimits

0xc3fa,	// (0x0006fa61) main_camera4_pane_g1

0xc406,	// (0x0006fa6d) main_camera4_pane_g2_ParamLimits

0xc406,	// (0x0006fa6d) main_camera4_pane_g2

0xc406,	// (0x0006fa6d) main_camera4_pane_g3_ParamLimits

0xc406,	// (0x0006fa6d) main_camera4_pane_g3

0xc412,	// (0x0006fa79) main_camera4_pane_g4_ParamLimits

0xc412,	// (0x0006fa79) main_camera4_pane_g4

0xc41e,	// (0x0006fa85) main_camera4_pane_g5_ParamLimits

0xc41e,	// (0x0006fa85) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x00072f56) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x00072f56) main_camera4_pane_g

0xc438,	// (0x0006fa9f) main_camera4_pane_t1_ParamLimits

0xc438,	// (0x0006fa9f) main_camera4_pane_t1

0x5233,	// (0x0006889a) bg_tb_trans_pane_cp06

0xc488,	// (0x0006faef) cam4_indicators_pane_g1

0xc498,	// (0x0006faff) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x00072f71) cam4_indicators_pane_g

0xc4b8,	// (0x0006fb1f) cam4_indicators_pane_t1

0xc4e0,	// (0x0006fb47) main_video4_pane_g1_ParamLimits

0xc4e0,	// (0x0006fb47) main_video4_pane_g1

0xc406,	// (0x0006fa6d) main_video4_pane_g2_ParamLimits

0xc406,	// (0x0006fa6d) main_video4_pane_g2

0xc406,	// (0x0006fa6d) main_video4_pane_g3_ParamLimits

0xc406,	// (0x0006fa6d) main_video4_pane_g3

0xc412,	// (0x0006fa79) main_video4_pane_g4_ParamLimits

0xc412,	// (0x0006fa79) main_video4_pane_g4

0x0004,

0xf911,	// (0x00072f78) main_video4_pane_g_ParamLimits

0xf911,	// (0x00072f78) main_video4_pane_g

0xc4f4,	// (0x0006fb5b) vid4_indicators_pane_ParamLimits

0xc4f4,	// (0x0006fb5b) vid4_indicators_pane

0xc512,	// (0x0006fb79) video4_image_uncrop_cif_pane_ParamLimits

0xc512,	// (0x0006fb79) video4_image_uncrop_cif_pane

0xc51f,	// (0x0006fb86) video4_image_uncrop_nhd_pane_ParamLimits

0xc51f,	// (0x0006fb86) video4_image_uncrop_nhd_pane

0xc3cb,	// (0x0006fa32) video4_image_uncrop_vga_pane_ParamLimits

0xc3cb,	// (0x0006fa32) video4_image_uncrop_vga_pane

0x2251,	// (0x000658b8) bg_tb_trans_pane_cp07

0xc488,	// (0x0006faef) vid4_indicators_pane_g1

0xc52c,	// (0x0006fb93) vid4_indicators_pane_g2

0xc53c,	// (0x0006fba3) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x00072f83) vid4_indicators_pane_g

0xc569,	// (0x0006fbd0) vid4_indicators_pane_t1

0xc583,	// (0x0006fbea) cam4_autofocus_pane_g1

0xc58b,	// (0x0006fbf2) cam4_autofocus_pane_g2

0xc593,	// (0x0006fbfa) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x00072f8e) cam4_autofocus_pane_g

0xc59b,	// (0x0006fc02) cam4_autofocus_pane_g3_copy1

0xbdc5,	// (0x0006f42c) video_down_pane_cp_t1

0xbdd3,	// (0x0006f43a) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x00072f06) video_down_pane_cp_t

0x3ee3,	// (0x0006754a) popup_vitu2_window_ParamLimits

0x3ee3,	// (0x0006754a) popup_vitu2_window

0xc5a3,	// (0x0006fc0a) aid_size_cell2_itu2_ParamLimits

0xc5a3,	// (0x0006fc0a) aid_size_cell2_itu2

0xc5c5,	// (0x0006fc2c) aid_size_cell_itu2_ParamLimits

0xc5c5,	// (0x0006fc2c) aid_size_cell_itu2

0x2828,	// (0x00065e8f) bg_popup_window_pane_cp09_ParamLimits

0x2828,	// (0x00065e8f) bg_popup_window_pane_cp09

0xc603,	// (0x0006fc6a) field_vitu2_entry_pane_ParamLimits

0xc603,	// (0x0006fc6a) field_vitu2_entry_pane

0xc617,	// (0x0006fc7e) grid_vitu2_function_pane_ParamLimits

0xc617,	// (0x0006fc7e) grid_vitu2_function_pane

0xc645,	// (0x0006fcac) grid_vitu2_itu_pane_ParamLimits

0xc645,	// (0x0006fcac) grid_vitu2_itu_pane

0xc69d,	// (0x0006fd04) cell_vitu2_itu_pane_ParamLimits

0xc69d,	// (0x0006fd04) cell_vitu2_itu_pane

0xc6b5,	// (0x0006fd1c) cell_vitu2_function_pane_ParamLimits

0xc6b5,	// (0x0006fd1c) cell_vitu2_function_pane

0xee44,	// (0x000724ab) bg_popup_call_pane_cp08_ParamLimits

0xee44,	// (0x000724ab) bg_popup_call_pane_cp08

0xee5b,	// (0x000724c2) field_vitu2_entry_pane_g1

0xee67,	// (0x000724ce) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x00072f95) field_vitu2_entry_pane_g

0x6965,	// (0x00069fcc) field_vitu2_entry_pane_t1_ParamLimits

0x6965,	// (0x00069fcc) field_vitu2_entry_pane_t1

0x6993,	// (0x00069ffa) field_vitu2_entry_pane_t2_ParamLimits

0x6993,	// (0x00069ffa) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x00072f9c) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x00072f9c) field_vitu2_entry_pane_t

0xc6f4,	// (0x0006fd5b) bg_button_pane_cp010_ParamLimits

0xc6f4,	// (0x0006fd5b) bg_button_pane_cp010

0xc702,	// (0x0006fd69) cell_vitu2_itu_pane_g1

0xc722,	// (0x0006fd89) cell_vitu2_itu_pane_t1_ParamLimits

0xc722,	// (0x0006fd89) cell_vitu2_itu_pane_t1

0x69b0,	// (0x0006a017) cell_vitu2_itu_pane_t2_ParamLimits

0x69b0,	// (0x0006a017) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x00072fa6) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x00072fa6) cell_vitu2_itu_pane_t

0x2251,	// (0x000658b8) bg_button_pane_cp011

0xc76e,	// (0x0006fdd5) cell_vitu2_function_pane_g1

0x0093,	// (0x000636fa) main_myfav_hc_pane

0xc248,	// (0x0006f8af) popup_image3_note_pane_ParamLimits

0xc248,	// (0x0006f8af) popup_image3_note_pane

0xc254,	// (0x0006f8bb) popup_image3_tool_bar_pane_ParamLimits

0xc254,	// (0x0006f8bb) popup_image3_tool_bar_pane

0x6a26,	// (0x0006a08d) cell_vitu2_itu_pane_t3_ParamLimits

0x6a26,	// (0x0006a08d) cell_vitu2_itu_pane_t3

0x0093,	// (0x000636fa) bg_popup_trans_pane

0xee89,	// (0x000724f0) grid_image3_tool_bar_pane

0xee93,	// (0x000724fa) bg_popup_trans_pane_g1

0x0d74,	// (0x000643db) bg_popup_trans_pane_g2

0xee9b,	// (0x00072502) bg_popup_trans_pane_g3

0xeea3,	// (0x0007250a) bg_popup_trans_pane_g4

0xeeab,	// (0x00072512) bg_popup_trans_pane_g5

0xeeb3,	// (0x0007251a) bg_popup_trans_pane_g6

0xeebb,	// (0x00072522) bg_popup_trans_pane_g7

0xeec3,	// (0x0007252a) bg_popup_trans_pane_g8

0x0d54,	// (0x000643bb) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x00072fad) bg_popup_trans_pane_g

0xeecb,	// (0x00072532) cell_image3_tool_bar_pane_ParamLimits

0xeecb,	// (0x00072532) cell_image3_tool_bar_pane

0x5004,	// (0x0006866b) cell_image3_tool_bar_pane_g1

0x0093,	// (0x000636fa) bg_popup_trans_pane_cp1

0xeedf,	// (0x00072546) popup_image3_note_pane_t1

0xeeed,	// (0x00072554) popup_image3_note_pane_t2

0xeefb,	// (0x00072562) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x00072fc0) popup_image3_note_pane_t

0xef09,	// (0x00072570) popup_image3_note_pane_t3_copy1

0xc782,	// (0x0006fde9) bg_myfav_hc_instruction_pane_ParamLimits

0xc782,	// (0x0006fde9) bg_myfav_hc_instruction_pane

0xc794,	// (0x0006fdfb) cell_myfav_contact_pane_ParamLimits

0xc794,	// (0x0006fdfb) cell_myfav_contact_pane

0xc7ae,	// (0x0006fe15) cell_myfav_contact_pane_cp1_ParamLimits

0xc7ae,	// (0x0006fe15) cell_myfav_contact_pane_cp1

0xc7c4,	// (0x0006fe2b) cell_myfav_contact_pane_cp2_ParamLimits

0xc7c4,	// (0x0006fe2b) cell_myfav_contact_pane_cp2

0xc7da,	// (0x0006fe41) cell_myfav_contact_pane_cp3_ParamLimits

0xc7da,	// (0x0006fe41) cell_myfav_contact_pane_cp3

0xc7ef,	// (0x0006fe56) cell_myfav_contact_pane_cp4_ParamLimits

0xc7ef,	// (0x0006fe56) cell_myfav_contact_pane_cp4

0xc803,	// (0x0006fe6a) cell_myfav_contact_pane_cp5_ParamLimits

0xc803,	// (0x0006fe6a) cell_myfav_contact_pane_cp5

0xc817,	// (0x0006fe7e) cell_myfav_contact_pane_cp6_ParamLimits

0xc817,	// (0x0006fe7e) cell_myfav_contact_pane_cp6

0xc82b,	// (0x0006fe92) cell_myfav_contact_pane_cp7_ParamLimits

0xc82b,	// (0x0006fe92) cell_myfav_contact_pane_cp7

0xef17,	// (0x0007257e) listscroll_gen_pane_cp05

0xc843,	// (0x0006feaa) main_myfav_hc_pane_g1_ParamLimits

0xc843,	// (0x0006feaa) main_myfav_hc_pane_g1

0xc859,	// (0x0006fec0) main_myfav_hc_pane_g2_ParamLimits

0xc859,	// (0x0006fec0) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x00072fc7) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x00072fc7) main_myfav_hc_pane_g

0xc883,	// (0x0006feea) main_myfav_hc_pane_t1_ParamLimits

0xc883,	// (0x0006feea) main_myfav_hc_pane_t1

0xef20,	// (0x00072587) main_myfav_hc_pane_t2_ParamLimits

0xef20,	// (0x00072587) main_myfav_hc_pane_t2

0xef32,	// (0x00072599) main_myfav_hc_pane_t3_ParamLimits

0xef32,	// (0x00072599) main_myfav_hc_pane_t3

0xc898,	// (0x0006feff) main_myfav_hc_pane_t4_ParamLimits

0xc898,	// (0x0006feff) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x00072fce) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x00072fce) main_myfav_hc_pane_t

0x5004,	// (0x0006866b) bg_myfav_hc_instruction_pane_g1

0xef44,	// (0x000725ab) cell_myfav_contact_pane_g1_ParamLimits

0xef44,	// (0x000725ab) cell_myfav_contact_pane_g1

0xef44,	// (0x000725ab) cell_myfav_contact_pane_g2_ParamLimits

0xef44,	// (0x000725ab) cell_myfav_contact_pane_g2

0xef50,	// (0x000725b7) cell_myfav_contact_pane_g3_ParamLimits

0xef50,	// (0x000725b7) cell_myfav_contact_pane_g3

0x5298,	// (0x000688ff) cell_myfav_contact_pane_g4_ParamLimits

0x5298,	// (0x000688ff) cell_myfav_contact_pane_g4

0xef5d,	// (0x000725c4) cell_myfav_contact_pane_g5_ParamLimits

0xef5d,	// (0x000725c4) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x00072fd9) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x00072fd9) cell_myfav_contact_pane_g

0xc86f,	// (0x0006fed6) main_myfav_hc_pane_g3_ParamLimits

0xc86f,	// (0x0006fed6) main_myfav_hc_pane_g3

0x7a39,	// (0x0006b0a0) popup_adpt_find_window

0xc8bc,	// (0x0006ff23) afind_page_pane_ParamLimits

0xc8bc,	// (0x0006ff23) afind_page_pane

0xc8c9,	// (0x0006ff30) aid_size_cell_afind_ParamLimits

0xc8c9,	// (0x0006ff30) aid_size_cell_afind

0xc8e3,	// (0x0006ff4a) bg_popup_sub_pane_cp09_ParamLimits

0xc8e3,	// (0x0006ff4a) bg_popup_sub_pane_cp09

0xc8f0,	// (0x0006ff57) find_pane_cp01_ParamLimits

0xc8f0,	// (0x0006ff57) find_pane_cp01

0xef69,	// (0x000725d0) grid_afind_control_pane_ParamLimits

0xef69,	// (0x000725d0) grid_afind_control_pane

0xc8fd,	// (0x0006ff64) grid_afind_pane_ParamLimits

0xc8fd,	// (0x0006ff64) grid_afind_pane

0xc913,	// (0x0006ff7a) cell_afind_pane_ParamLimits

0xc913,	// (0x0006ff7a) cell_afind_pane

0x5004,	// (0x0006866b) afind_page_pane_g1

0xc949,	// (0x0006ffb0) afind_page_pane_g2

0xc952,	// (0x0006ffb9) afind_page_pane_g3

0x0002,

0xf97d,	// (0x00072fe4) afind_page_pane_g

0xc95b,	// (0x0006ffc2) afind_page_pane_t1

0xef7d,	// (0x000725e4) cell_afind_grid_control_pane_ParamLimits

0xef7d,	// (0x000725e4) cell_afind_grid_control_pane

0x58db,	// (0x00068f42) bg_button_pane_cp69_ParamLimits

0x58db,	// (0x00068f42) bg_button_pane_cp69

0xc97b,	// (0x0006ffe2) cell_afind_pane_g1_ParamLimits

0xc97b,	// (0x0006ffe2) cell_afind_pane_g1

0xc988,	// (0x0006ffef) cell_afind_pane_t1_ParamLimits

0xc988,	// (0x0006ffef) cell_afind_pane_t1

0x0b60,	// (0x000641c7) bg_button_pane_cp72

0xef8c,	// (0x000725f3) cell_afind_grid_control_pane_g1

0xa280,	// (0x0006d8e7) aid_image_placing_area_ParamLimits

0xa280,	// (0x0006d8e7) aid_image_placing_area

0x55ab,	// (0x00068c12) field_vitu_entry_pane_g1_ParamLimits

0x55ab,	// (0x00068c12) field_vitu_entry_pane_g1

0x55b7,	// (0x00068c1e) field_vitu_entry_pane_g2_ParamLimits

0x55b7,	// (0x00068c1e) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x00072e91) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x00072e91) field_vitu_entry_pane_g

0xbbf0,	// (0x0006f257) cell_vitu_itu_pane_g1_ParamLimits

0xbc32,	// (0x0006f299) cell_vitu_itu_pane_t3_ParamLimits

0xbc32,	// (0x0006f299) cell_vitu_itu_pane_t3

0x5885,	// (0x00068eec) mp4_progress_pane_t1_ParamLimits

0x589c,	// (0x00068f03) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x00072f2a) mp4_progress_pane_t_ParamLimits

0x58b3,	// (0x00068f1a) mup_progress_pane_cp04_ParamLimits

0xc8aa,	// (0x0006ff11) main_myfav_hc_pane_t5_ParamLimits

0xc8aa,	// (0x0006ff11) main_myfav_hc_pane_t5

0x665f,	// (0x00069cc6) aid_zoom_text_primary

0x7a39,	// (0x0006b0a0) popup_adpt_find_window_ParamLimits

0x2251,	// (0x000658b8) main_cam_set_pane

0xc3ee,	// (0x0006fa55) cam4_zoom_pane_ParamLimits

0xc3ee,	// (0x0006fa55) cam4_zoom_pane

0xc99a,	// (0x00070001) main_cam_set_pane_g1_ParamLimits

0xc99a,	// (0x00070001) main_cam_set_pane_g1

0xc9a8,	// (0x0007000f) main_cam_set_pane_g2_ParamLimits

0xc9a8,	// (0x0007000f) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x00072feb) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x00072feb) main_cam_set_pane_g

0xc9b4,	// (0x0007001b) main_cam_set_pane_t1_ParamLimits

0xc9b4,	// (0x0007001b) main_cam_set_pane_t1

0xc9c6,	// (0x0007002d) main_cset_listscroll_pane_ParamLimits

0xc9c6,	// (0x0007002d) main_cset_listscroll_pane

0xc9ef,	// (0x00070056) main_cset_slider_pane_ParamLimits

0xc9ef,	// (0x00070056) main_cset_slider_pane

0xef9d,	// (0x00072604) main_cset_list_pane_ParamLimits

0xef9d,	// (0x00072604) main_cset_list_pane

0xefad,	// (0x00072614) scroll_pane_cp028

0xca0e,	// (0x00070075) aid_area_touch_slider

0xca2a,	// (0x00070091) cset_slider_pane

0xca54,	// (0x000700bb) main_cset_slider_pane_g1

0xca69,	// (0x000700d0) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x00072ff0) main_cset_slider_pane_g

0xefe6,	// (0x0007264d) main_cset_slider_pane_t1

0xcb25,	// (0x0007018c) main_cset_slider_pane_t2

0xcb3f,	// (0x000701a6) main_cset_slider_pane_t3

0xcb59,	// (0x000701c0) main_cset_slider_pane_t4

0xcb73,	// (0x000701da) main_cset_slider_pane_t5

0xcb8d,	// (0x000701f4) main_cset_slider_pane_t6

0xcba2,	// (0x00070209) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x00073015) main_cset_slider_pane_t

0xcca6,	// (0x0007030d) cset_list_set_pane_ParamLimits

0xcca6,	// (0x0007030d) cset_list_set_pane

0xccb6,	// (0x0007031d) aid_position_infowindow_above

0xccbe,	// (0x00070325) aid_position_infowindow_below

0xccc6,	// (0x0007032d) cset_list_set_pane_g1_ParamLimits

0xccc6,	// (0x0007032d) cset_list_set_pane_g1

0x6a78,	// (0x0006a0df) cset_list_set_pane_g3_ParamLimits

0x6a78,	// (0x0006a0df) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x00073034) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x00073034) cset_list_set_pane_g

0x6a87,	// (0x0006a0ee) cset_list_set_pane_t1_ParamLimits

0x6a87,	// (0x0006a0ee) cset_list_set_pane_t1

0x2251,	// (0x000658b8) list_highlight_pane_cp021_ParamLimits

0x2251,	// (0x000658b8) list_highlight_pane_cp021

0x16da,	// (0x00064d41) cset_slider_pane_g1

0x16ec,	// (0x00064d53) cset_slider_pane_g2

0x16e3,	// (0x00064d4a) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x00073039) cset_slider_pane_g

0xccd2,	// (0x00070339) aid_area_touch_cam4_zoom

0xccda,	// (0x00070341) cam4_zoom_cont_pane

0xcce2,	// (0x00070349) cam4_zoom_pane_g1

0xccea,	// (0x00070351) cam4_zoom_pane_g2

0xccf2,	// (0x00070359) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x00073040) cam4_zoom_pane_g

0xf086,	// (0x000726ed) cam4_zoom_cont_pane_g1

0xf08f,	// (0x000726f6) cam4_zoom_cont_pane_g2

0xf098,	// (0x000726ff) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x00073047) cam4_zoom_cont_pane_g

0xc29b,	// (0x0006f902) call4_image_pane_ParamLimits

0xc29b,	// (0x0006f902) call4_image_pane

0x58ff,	// (0x00068f66) call4_windows_conf_pane_ParamLimits

0x5912,	// (0x00068f79) popup_call4_audio_in_window_ParamLimits

0x5912,	// (0x00068f79) popup_call4_audio_in_window

0x0093,	// (0x000636fa) bg_popup_call2_act_pane_cp02

0xee18,	// (0x0007247f) call4_list_conf_pane

0x5004,	// (0x0006866b) call4_image_pane_g1

0x5004,	// (0x0006866b) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x00072d52) call4_image_pane_g

0xf0a1,	// (0x00072708) list_single_graphic_popup_conf4_pane_ParamLimits

0xf0a1,	// (0x00072708) list_single_graphic_popup_conf4_pane

0x0093,	// (0x000636fa) list_highlight_pane_cp022

0x2361,	// (0x000659c8) list_single_graphic_popup_conf4_pane_g1

0x12fd,	// (0x00064964) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0007304e) list_single_graphic_popup_conf4_pane_g

0x2369,	// (0x000659d0) list_single_graphic_popup_conf4_pane_t1

0x89ee,	// (0x0006c055) popup_vtel_slider_window_ParamLimits

0x89ee,	// (0x0006c055) popup_vtel_slider_window

0x58c9,	// (0x00068f30) dialer2_ne_pane_t2_ParamLimits

0x58c9,	// (0x00068f30) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x00072f2f) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x00072f2f) dialer2_ne_pane_t

0x2251,	// (0x000658b8) bg_popup_sub_pane_cp010_ParamLimits

0x2251,	// (0x000658b8) bg_popup_sub_pane_cp010

0xccfa,	// (0x00070361) popup_vtel_slider_window_g1_ParamLimits

0xccfa,	// (0x00070361) popup_vtel_slider_window_g1

0xcd06,	// (0x0007036d) popup_vtel_slider_window_g2_ParamLimits

0xcd06,	// (0x0007036d) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x00073053) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x00073053) popup_vtel_slider_window_g

0xcd4c,	// (0x000703b3) vtel_slider_pane_ParamLimits

0xcd4c,	// (0x000703b3) vtel_slider_pane

0xcd5b,	// (0x000703c2) vtel_slider_pane_g1_ParamLimits

0xcd5b,	// (0x000703c2) vtel_slider_pane_g1

0xcd68,	// (0x000703cf) vtel_slider_pane_g2_ParamLimits

0xcd68,	// (0x000703cf) vtel_slider_pane_g2

0xcd75,	// (0x000703dc) vtel_slider_pane_g3_ParamLimits

0xcd75,	// (0x000703dc) vtel_slider_pane_g3

0xcd5b,	// (0x000703c2) vtel_slider_pane_g4_ParamLimits

0xcd5b,	// (0x000703c2) vtel_slider_pane_g4

0xcd82,	// (0x000703e9) vtel_slider_pane_g5_ParamLimits

0xcd82,	// (0x000703e9) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0007305c) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0007305c) vtel_slider_pane_g

0x2251,	// (0x000658b8) main_gallery2_pane

0xc5eb,	// (0x0006fc52) aid_size_row_itut2_dropdow_list_ParamLimits

0xc5eb,	// (0x0006fc52) aid_size_row_itut2_dropdow_list

0xc62d,	// (0x0006fc94) grid_vitu2_function_top_pane_ParamLimits

0xc62d,	// (0x0006fc94) grid_vitu2_function_top_pane

0xc669,	// (0x0006fcd0) popup_vitu2_dropdown_list_window_ParamLimits

0xc669,	// (0x0006fcd0) popup_vitu2_dropdown_list_window

0xc681,	// (0x0006fce8) popup_vitu2_match_list_window

0xcd8f,	// (0x000703f6) cell_vitu2_function_top_pane_ParamLimits

0xcd8f,	// (0x000703f6) cell_vitu2_function_top_pane

0xcda7,	// (0x0007040e) cell_vitu2_function_top_pane_cp01_ParamLimits

0xcda7,	// (0x0007040e) cell_vitu2_function_top_pane_cp01

0xcdc3,	// (0x0007042a) cell_vitu2_function_top_wide_pane_ParamLimits

0xcdc3,	// (0x0007042a) cell_vitu2_function_top_wide_pane

0x2251,	// (0x000658b8) bg_button_pane_cp012

0xcddf,	// (0x00070446) cell_vitu2_function_top_pane_g1

0xcdf3,	// (0x0007045a) bg_button_pane_cp013_ParamLimits

0xcdf3,	// (0x0007045a) bg_button_pane_cp013

0xce0f,	// (0x00070476) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xce0f,	// (0x00070476) cell_vitu2_function_top_wide_pane_g1

0x3ee3,	// (0x0006754a) bg_popup_sub_pane_cp20

0xce27,	// (0x0007048e) list_vitu2_match_list_pane

0xee93,	// (0x000724fa) bg_popup_sub_pane_cp20_g1

0xee9b,	// (0x00072502) bg_popup_sub_pane_cp20_g2

0x0d74,	// (0x000643db) bg_popup_sub_pane_cp20_g3

0xeea3,	// (0x0007250a) bg_popup_sub_pane_cp20_g4

0x0d54,	// (0x000643bb) bg_popup_sub_pane_cp20_g5

0x237f,	// (0x000659e6) bg_popup_sub_pane_cp20_g6

0xeeb3,	// (0x0007251a) bg_popup_sub_pane_cp20_g7

0xeebb,	// (0x00072522) bg_popup_sub_pane_cp20_g8

0xeec3,	// (0x0007252a) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x00073067) bg_popup_sub_pane_cp20_g

0xce3f,	// (0x000704a6) list_vitu2_match_list_item_pane_ParamLimits

0xce3f,	// (0x000704a6) list_vitu2_match_list_item_pane

0xce51,	// (0x000704b8) list_vitu2_match_list_item_pane_t1

0x0093,	// (0x000636fa) bg_popup_sub_pane_cp21

0x11cc,	// (0x00064833) grid_vitu2_dropdown_list_pane

0xce6b,	// (0x000704d2) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xce6b,	// (0x000704d2) cell_vitu2_dropdown_list_char_pane

0xce8c,	// (0x000704f3) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xce8c,	// (0x000704f3) cell_vitu2_dropdown_list_ctrl_pane

0x2399,	// (0x00065a00) cell_vitu2_dropdown_list_char_pane_g1

0x2390,	// (0x000659f7) cell_vitu2_dropdown_list_char_pane_g2

0x2387,	// (0x000659ee) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x00073084) cell_vitu2_dropdown_list_char_pane_g

0xceb8,	// (0x0007051f) cell_vitu2_dropdown_list_char_pane_t1

0xcec6,	// (0x0007052d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcec6,	// (0x0007052d) cell_vitu2_dropdown_list_ctrl_pane_g1

0xced6,	// (0x0007053d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xced6,	// (0x0007053d) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcee7,	// (0x0007054e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcee7,	// (0x0007054e) cell_vitu2_dropdown_list_ctrl_pane_g3

0xcef7,	// (0x0007055e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xcef7,	// (0x0007055e) cell_vitu2_dropdown_list_ctrl_pane_g4

0x5233,	// (0x0006889a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x5233,	// (0x0006889a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0007308b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0007308b) cell_vitu2_dropdown_list_ctrl_pane_g

0xcf10,	// (0x00070577) aid_size_cell_gallery2_ParamLimits

0xcf10,	// (0x00070577) aid_size_cell_gallery2

0xcf2a,	// (0x00070591) grid_gallery2_pane_ParamLimits

0xcf2a,	// (0x00070591) grid_gallery2_pane

0xba9f,	// (0x0006f106) scroll_pane_cp029_ParamLimits

0xba9f,	// (0x0006f106) scroll_pane_cp029

0xcf3b,	// (0x000705a2) cell_gallery2_pane_ParamLimits

0xcf3b,	// (0x000705a2) cell_gallery2_pane

0x23a2,	// (0x00065a09) cell_gallery2_pane_g2

0xcf88,	// (0x000705ef) cell_gallery2_pane_g3

0x23aa,	// (0x00065a11) cell_gallery2_pane_g4

0x23b2,	// (0x00065a19) cell_gallery2_pane_g5

0x0acc,	// (0x00064133) grid_highlight_pane_cp10

0xc681,	// (0x0006fce8) popup_vitu2_match_list_window_ParamLimits

0xc691,	// (0x0006fcf8) popup_vitu2_query_window_ParamLimits

0xc691,	// (0x0006fcf8) popup_vitu2_query_window

0x0093,	// (0x000636fa) bg_vitu2_candi_button_pane

0x2399,	// (0x00065a00) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2390,	// (0x000659f7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2387,	// (0x000659ee) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6ae5,	// (0x0006a14c) bg_button_pane_cp015

0xcf90,	// (0x000705f7) bg_button_pane_cp016

0xcfa3,	// (0x0007060a) bg_button_pane_cp017

0x4bf2,	// (0x00068259) bg_popup_sub_pane_cp22

0x23ba,	// (0x00065a21) popup_vitu2_query_window_g1

0x6b14,	// (0x0006a17b) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x00073096) popup_vitu2_query_window_g

0x6b2f,	// (0x0006a196) popup_vitu2_query_window_t1_ParamLimits

0x6b2f,	// (0x0006a196) popup_vitu2_query_window_t1

0x6b62,	// (0x0006a1c9) popup_vitu2_query_window_t2_ParamLimits

0x6b62,	// (0x0006a1c9) popup_vitu2_query_window_t2

0x6b74,	// (0x0006a1db) popup_vitu2_query_window_t3_ParamLimits

0x6b74,	// (0x0006a1db) popup_vitu2_query_window_t3

0xcfc7,	// (0x0007062e) popup_vitu2_query_window_t4_ParamLimits

0xcfc7,	// (0x0007062e) popup_vitu2_query_window_t4

0xcfe4,	// (0x0007064b) popup_vitu2_query_window_t5_ParamLimits

0xcfe4,	// (0x0007064b) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0007309d) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0007309d) popup_vitu2_query_window_t

0xef95,	// (0x000725fc) main_cset_text_pane

0xca0e,	// (0x00070075) aid_area_touch_slider_ParamLimits

0xca2a,	// (0x00070091) cset_slider_pane_ParamLimits

0xca54,	// (0x000700bb) main_cset_slider_pane_g1_ParamLimits

0xca69,	// (0x000700d0) main_cset_slider_pane_g2_ParamLimits

0xefb6,	// (0x0007261d) main_cset_slider_pane_g3_ParamLimits

0xefb6,	// (0x0007261d) main_cset_slider_pane_g3

0xca7e,	// (0x000700e5) main_cset_slider_pane_g4_ParamLimits

0xca7e,	// (0x000700e5) main_cset_slider_pane_g4

0xca8d,	// (0x000700f4) main_cset_slider_pane_g5_ParamLimits

0xca8d,	// (0x000700f4) main_cset_slider_pane_g5

0xca99,	// (0x00070100) main_cset_slider_pane_g6_ParamLimits

0xca99,	// (0x00070100) main_cset_slider_pane_g6

0xf989,	// (0x00072ff0) main_cset_slider_pane_g_ParamLimits

0xefe6,	// (0x0007264d) main_cset_slider_pane_t1_ParamLimits

0xcb25,	// (0x0007018c) main_cset_slider_pane_t2_ParamLimits

0xcb3f,	// (0x000701a6) main_cset_slider_pane_t3_ParamLimits

0xcb59,	// (0x000701c0) main_cset_slider_pane_t4_ParamLimits

0xcb73,	// (0x000701da) main_cset_slider_pane_t5_ParamLimits

0xcb8d,	// (0x000701f4) main_cset_slider_pane_t6_ParamLimits

0xcba2,	// (0x00070209) main_cset_slider_pane_t7_ParamLimits

0xcbcc,	// (0x00070233) main_cset_slider_pane_t8_ParamLimits

0xcbcc,	// (0x00070233) main_cset_slider_pane_t8

0xcbf4,	// (0x0007025b) main_cset_slider_pane_t9_ParamLimits

0xcbf4,	// (0x0007025b) main_cset_slider_pane_t9

0xcc1c,	// (0x00070283) main_cset_slider_pane_t10_ParamLimits

0xcc1c,	// (0x00070283) main_cset_slider_pane_t10

0xcc44,	// (0x000702ab) main_cset_slider_pane_t11_ParamLimits

0xcc44,	// (0x000702ab) main_cset_slider_pane_t11

0xcc6c,	// (0x000702d3) main_cset_slider_pane_t12_ParamLimits

0xcc6c,	// (0x000702d3) main_cset_slider_pane_t12

0xcc89,	// (0x000702f0) main_cset_slider_pane_t13_ParamLimits

0xcc89,	// (0x000702f0) main_cset_slider_pane_t13

0xf9ae,	// (0x00073015) main_cset_slider_pane_t_ParamLimits

0x0093,	// (0x000636fa) bg_popup_sub_pane_cp011

0x23c6,	// (0x00065a2d) main_cset_text_pane_g1

0x23ce,	// (0x00065a35) main_cset_text_pane_t1

0x23dc,	// (0x00065a43) main_cset_text_pane_t2

0x23ea,	// (0x00065a51) main_cset_text_pane_t3

0x23f8,	// (0x00065a5f) main_cset_text_pane_t4

0x2406,	// (0x00065a6d) main_cset_text_pane_t5

0x2414,	// (0x00065a7b) main_cset_text_pane_t6

0x2422,	// (0x00065a89) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x000730ac) main_cset_text_pane_t

0x0093,	// (0x000636fa) main_cam4_burst_pane

0x0093,	// (0x000636fa) main_cam5_pane

0xc969,	// (0x0006ffd0) bg_button_pane_cp019

0xc972,	// (0x0006ffd9) bg_button_pane_cp020

0xefc2,	// (0x00072629) main_cset_slider_pane_g7_ParamLimits

0xefc2,	// (0x00072629) main_cset_slider_pane_g7

0xefce,	// (0x00072635) main_cset_slider_pane_g8_ParamLimits

0xefce,	// (0x00072635) main_cset_slider_pane_g8

0xcaad,	// (0x00070114) main_cset_slider_pane_g9_ParamLimits

0xcaad,	// (0x00070114) main_cset_slider_pane_g9

0xcab9,	// (0x00070120) main_cset_slider_pane_g10_ParamLimits

0xcab9,	// (0x00070120) main_cset_slider_pane_g10

0xcac5,	// (0x0007012c) main_cset_slider_pane_g11_ParamLimits

0xcac5,	// (0x0007012c) main_cset_slider_pane_g11

0xcad1,	// (0x00070138) main_cset_slider_pane_g12_ParamLimits

0xcad1,	// (0x00070138) main_cset_slider_pane_g12

0xcadd,	// (0x00070144) main_cset_slider_pane_g13_ParamLimits

0xcadd,	// (0x00070144) main_cset_slider_pane_g13

0xcae9,	// (0x00070150) main_cset_slider_pane_g14_ParamLimits

0xcae9,	// (0x00070150) main_cset_slider_pane_g14

0xcaf5,	// (0x0007015c) main_cset_slider_pane_g15_ParamLimits

0xcaf5,	// (0x0007015c) main_cset_slider_pane_g15

0xf014,	// (0x0007267b) main_cset_slider_pane_t14_ParamLimits

0xf014,	// (0x0007267b) main_cset_slider_pane_t14

0xf04d,	// (0x000726b4) main_cset_slider_pane_t15_ParamLimits

0xf04d,	// (0x000726b4) main_cset_slider_pane_t15

0xd001,	// (0x00070668) aid_cam4_burst_size_cell_ParamLimits

0xd001,	// (0x00070668) aid_cam4_burst_size_cell

0xd01d,	// (0x00070684) grid_cam4_burst_pane_ParamLimits

0xd01d,	// (0x00070684) grid_cam4_burst_pane

0xd03f,	// (0x000706a6) linegrid_cam4_burst_pane_ParamLimits

0xd03f,	// (0x000706a6) linegrid_cam4_burst_pane

0xd05d,	// (0x000706c4) scroll_pane_cp30_ParamLimits

0xd05d,	// (0x000706c4) scroll_pane_cp30

0xd069,	// (0x000706d0) cell_cam4_burst_pane_ParamLimits

0xd069,	// (0x000706d0) cell_cam4_burst_pane

0x2430,	// (0x00065a97) linegrid_cam4_burst_pane_g1_ParamLimits

0x2430,	// (0x00065a97) linegrid_cam4_burst_pane_g1

0xd0a1,	// (0x00070708) linegrid_cam4_burst_pane_g2_ParamLimits

0xd0a1,	// (0x00070708) linegrid_cam4_burst_pane_g2

0x243d,	// (0x00065aa4) linegrid_cam4_burst_pane_g3_ParamLimits

0x243d,	// (0x00065aa4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x000730bb) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x000730bb) linegrid_cam4_burst_pane_g

0xd0b2,	// (0x00070719) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xd0b2,	// (0x00070719) linegrid_cam4_burst_pane_g3_copy1

0x244a,	// (0x00065ab1) linegrid_cam4_burst_pane_g4_ParamLimits

0x244a,	// (0x00065ab1) linegrid_cam4_burst_pane_g4

0xd0cc,	// (0x00070733) linegrid_cam4_burst_pane_g5_ParamLimits

0xd0cc,	// (0x00070733) linegrid_cam4_burst_pane_g5

0xd0dd,	// (0x00070744) linegrid_cam4_burst_pane_g6_ParamLimits

0xd0dd,	// (0x00070744) linegrid_cam4_burst_pane_g6

0x2457,	// (0x00065abe) linegrid_cam4_burst_pane_g7_ParamLimits

0x2457,	// (0x00065abe) linegrid_cam4_burst_pane_g7

0xd0ee,	// (0x00070755) cell_cam4_burst_pane_g1

0x2470,	// (0x00065ad7) main_cam5_pane_t1_ParamLimits

0x2470,	// (0x00065ad7) main_cam5_pane_t1

0x2482,	// (0x00065ae9) main_cam5_pane_t2_ParamLimits

0x2482,	// (0x00065ae9) main_cam5_pane_t2

0x2494,	// (0x00065afb) main_cam5_pane_t3_ParamLimits

0x2494,	// (0x00065afb) main_cam5_pane_t3

0x24a6,	// (0x00065b0d) main_cam5_pane_t4_ParamLimits

0x24a6,	// (0x00065b0d) main_cam5_pane_t4

0x24bc,	// (0x00065b23) main_cam5_pane_t5_ParamLimits

0x24bc,	// (0x00065b23) main_cam5_pane_t5

0x24ce,	// (0x00065b35) main_cam5_pane_t6_ParamLimits

0x24ce,	// (0x00065b35) main_cam5_pane_t6

0x24e0,	// (0x00065b47) main_cam5_pane_t7_ParamLimits

0x24e0,	// (0x00065b47) main_cam5_pane_t7

0x24f2,	// (0x00065b59) main_cam5_pane_t8_ParamLimits

0x24f2,	// (0x00065b59) main_cam5_pane_t8

0x250e,	// (0x00065b75) main_cam5_pane_t9_ParamLimits

0x250e,	// (0x00065b75) main_cam5_pane_t9

0x2520,	// (0x00065b87) main_cam5_pane_t10_ParamLimits

0x2520,	// (0x00065b87) main_cam5_pane_t10

0x2532,	// (0x00065b99) main_cam5_pane_t11_ParamLimits

0x2532,	// (0x00065b99) main_cam5_pane_t11

0x2544,	// (0x00065bab) main_cam5_pane_t12_ParamLimits

0x2544,	// (0x00065bab) main_cam5_pane_t12

0x2559,	// (0x00065bc0) main_cam5_pane_t13_ParamLimits

0x2559,	// (0x00065bc0) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x000730c7) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x000730c7) main_cam5_pane_t

0x7ab4,	// (0x0006b11b) popup_scut_keymap_window_ParamLimits

0x7ab4,	// (0x0006b11b) popup_scut_keymap_window

0xd101,	// (0x00070768) aid_size_cell_brow_shortcut

0x0acc,	// (0x00064133) bg_popup_window_pane_cp010

0xd10d,	// (0x00070774) grid_scut_pane

0xd117,	// (0x0007077e) cell_scut_pane_ParamLimits

0xd117,	// (0x0007077e) cell_scut_pane

0xd12c,	// (0x00070793) cell_scut_pane_g1

0x2576,	// (0x00065bdd) cell_scut_pane_t1

0x2585,	// (0x00065bec) cell_scut_pane_t2

0xd135,	// (0x0007079c) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x000730e2) cell_scut_pane_t

0xb2ef,	// (0x0006e956) main_mup3_pane_g8_ParamLimits

0xb2ef,	// (0x0006e956) main_mup3_pane_g8

0xc5f7,	// (0x0006fc5e) area_vitu2_query_pane_ParamLimits

0xc5f7,	// (0x0006fc5e) area_vitu2_query_pane

0x6af5,	// (0x0006a15c) input_focus_pane_cp08

0x2594,	// (0x00065bfb) area_vitu2_query_pane_g1

0x6bf2,	// (0x0006a259) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x000730e9) area_vitu2_query_pane_g

0xd143,	// (0x000707aa) area_vitu2_query_pane_t1_ParamLimits

0xd143,	// (0x000707aa) area_vitu2_query_pane_t1

0xd155,	// (0x000707bc) area_vitu2_query_pane_t2_ParamLimits

0xd155,	// (0x000707bc) area_vitu2_query_pane_t2

0x6c01,	// (0x0006a268) area_vitu2_query_pane_t3_ParamLimits

0x6c01,	// (0x0006a268) area_vitu2_query_pane_t3

0x6c29,	// (0x0006a290) area_vitu2_query_pane_t4_ParamLimits

0x6c29,	// (0x0006a290) area_vitu2_query_pane_t4

0x6c51,	// (0x0006a2b8) area_vitu2_query_pane_t5_ParamLimits

0x6c51,	// (0x0006a2b8) area_vitu2_query_pane_t5

0x6c79,	// (0x0006a2e0) area_vitu2_query_pane_t6_ParamLimits

0x6c79,	// (0x0006a2e0) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x000730ee) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x000730ee) area_vitu2_query_pane_t

0xd167,	// (0x000707ce) bg_button_pane_cp018

0xd174,	// (0x000707db) bg_button_pane_cp021

0x6cc5,	// (0x0006a32c) bg_button_pane_cp022

0x6cd4,	// (0x0006a33b) input_focus_pane_cp09

0x9b0b,	// (0x0006d172) aid_size_touch_mv_arrow_left

0x143b,	// (0x00064aa2) aid_size_touch_mv_arrow_right

0xcb0d,	// (0x00070174) main_cset_slider_pane_g16_ParamLimits

0xcb0d,	// (0x00070174) main_cset_slider_pane_g16

0xcb19,	// (0x00070180) main_cset_slider_pane_g17_ParamLimits

0xcb19,	// (0x00070180) main_cset_slider_pane_g17

0xd0ee,	// (0x00070755) cell_cam4_burst_pane_g1_ParamLimits

0x0093,	// (0x000636fa) compa_mode_pane

0xcd12,	// (0x00070379) popup_vtel_slider_window_g3_ParamLimits

0xcd12,	// (0x00070379) popup_vtel_slider_window_g3

0xcd26,	// (0x0007038d) popup_vtel_slider_window_g4_ParamLimits

0xcd26,	// (0x0007038d) popup_vtel_slider_window_g4

0xcd3a,	// (0x000703a1) popup_vtel_slider_window_t1_ParamLimits

0xcd3a,	// (0x000703a1) popup_vtel_slider_window_t1

0x0093,	// (0x000636fa) main_cl_pane

0xa6c6,	// (0x0006dd2d) popup_imed_adjust2_window_ParamLimits

0x4bf2,	// (0x00068259) bg_tb_trans_pane_cp05_ParamLimits

0x54e0,	// (0x00068b47) popup_imed_adjust2_window_g1_ParamLimits

0x54ef,	// (0x00068b56) popup_imed_adjust2_window_g2_ParamLimits

0x54ef,	// (0x00068b56) popup_imed_adjust2_window_g2

0x54fb,	// (0x00068b62) popup_imed_adjust2_window_g3_ParamLimits

0x54fb,	// (0x00068b62) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x00072e55) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x00072e55) popup_imed_adjust2_window_g

0x5507,	// (0x00068b6e) popup_imed_adjust2_window_t1_ParamLimits

0x551f,	// (0x00068b86) slider_imed_adjust_pane_ParamLimits

0x5533,	// (0x00068b9a) slider_imed_adjust_pane_g1_ParamLimits

0x5543,	// (0x00068baa) slider_imed_adjust_pane_g2_ParamLimits

0x5553,	// (0x00068bba) slider_imed_adjust_pane_g3_ParamLimits

0x5564,	// (0x00068bcb) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x00072e5c) slider_imed_adjust_pane_g_ParamLimits

0xc39f,	// (0x0006fa06) aid_touch_area_cam4_ParamLimits

0xc39f,	// (0x0006fa06) aid_touch_area_cam4

0xc3ad,	// (0x0006fa14) battery_pane_cp01

0xc42c,	// (0x0006fa93) main_camera4_pane_g6_ParamLimits

0xc42c,	// (0x0006fa93) main_camera4_pane_g6

0xc44a,	// (0x0006fab1) main_camera4_pane_t2_ParamLimits

0xc44a,	// (0x0006fab1) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x00072f63) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x00072f63) main_camera4_pane_t

0xc4d2,	// (0x0006fb39) aid_touch_area_vid4_ParamLimits

0xc4d2,	// (0x0006fb39) aid_touch_area_vid4

0xc42c,	// (0x0006fa93) main_video4_pane_g5_ParamLimits

0xc42c,	// (0x0006fa93) main_video4_pane_g5

0xc502,	// (0x0006fb69) vid4_progress_pane_ParamLimits

0xc502,	// (0x0006fb69) vid4_progress_pane

0xefda,	// (0x00072641) main_cset_slider_pane_g18_ParamLimits

0xefda,	// (0x00072641) main_cset_slider_pane_g18

0x2464,	// (0x00065acb) cell_cam4_burst_pane_g2_ParamLimits

0x2464,	// (0x00065acb) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x000730c2) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000730c2) cell_cam4_burst_pane_g

0xd180,	// (0x000707e7) bg_cl_pane_ParamLimits

0xd180,	// (0x000707e7) bg_cl_pane

0xd18c,	// (0x000707f3) cl_header_pane_ParamLimits

0xd18c,	// (0x000707f3) cl_header_pane

0xd198,	// (0x000707ff) cl_listscroll_pane_ParamLimits

0xd198,	// (0x000707ff) cl_listscroll_pane

0x263c,	// (0x00065ca3) bg_cl_pane_g1

0x2644,	// (0x00065cab) bg_cl_pane_g2

0x264c,	// (0x00065cb3) bg_cl_pane_g3

0x2654,	// (0x00065cbb) bg_cl_pane_g4

0x265c,	// (0x00065cc3) bg_cl_pane_g5

0x2664,	// (0x00065ccb) bg_cl_pane_g6

0x266c,	// (0x00065cd3) bg_cl_pane_g7

0x2674,	// (0x00065cdb) bg_cl_pane_g8

0x267c,	// (0x00065ce3) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x000730fd) bg_cl_pane_g

0xd1a4,	// (0x0007080b) aid_height_cl_leading_ParamLimits

0xd1a4,	// (0x0007080b) aid_height_cl_leading

0xd1b0,	// (0x00070817) aid_height_cl_text_ParamLimits

0xd1b0,	// (0x00070817) aid_height_cl_text

0x3ee3,	// (0x0006754a) bg_cl_header_pane_ParamLimits

0x3ee3,	// (0x0006754a) bg_cl_header_pane

0xd1c8,	// (0x0007082f) cl_header_pane_g1_ParamLimits

0xd1c8,	// (0x0007082f) cl_header_pane_g1

0xd1d5,	// (0x0007083c) cl_header_pane_t1_ParamLimits

0xd1d5,	// (0x0007083c) cl_header_pane_t1

0x2684,	// (0x00065ceb) cl_list_pane

0x268d,	// (0x00065cf4) hc_scroll_pane_cp01

0x0d54,	// (0x000643bb) bg_cl_header_pane_g1

0xee93,	// (0x000724fa) bg_cl_header_pane_g2

0x0d74,	// (0x000643db) bg_cl_header_pane_g3

0xeea3,	// (0x0007250a) bg_cl_header_pane_g4

0xee9b,	// (0x00072502) bg_cl_header_pane_g5

0x237f,	// (0x000659e6) bg_cl_header_pane_g6

0xeebb,	// (0x00072522) bg_cl_header_pane_g7

0xeec3,	// (0x0007252a) bg_cl_header_pane_g8

0xeeb3,	// (0x0007251a) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x00073110) bg_cl_header_pane_g

0xd1e7,	// (0x0007084e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd1e7,	// (0x0007084e) hc_cl_list_double_graphic_heading_pane

0xd1f7,	// (0x0007085e) hc_cl_list_single_graphic_pane_ParamLimits

0xd1f7,	// (0x0007085e) hc_cl_list_single_graphic_pane

0xd209,	// (0x00070870) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd209,	// (0x00070870) hc_cl_list_single_graphic_pane_g1

0xd215,	// (0x0007087c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd215,	// (0x0007087c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x00073123) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x00073123) hc_cl_list_single_graphic_pane_g

0xd229,	// (0x00070890) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd229,	// (0x00070890) hc_cl_list_single_graphic_pane_t1

0xd209,	// (0x00070870) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd209,	// (0x00070870) hc_cl_list_double_graphic_heading_pane_g1

0xd23e,	// (0x000708a5) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd23e,	// (0x000708a5) hc_cl_list_double_graphic_heading_pane_g2

0xd252,	// (0x000708b9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd252,	// (0x000708b9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x00073128) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x00073128) hc_cl_list_double_graphic_heading_pane_g

0xd266,	// (0x000708cd) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd266,	// (0x000708cd) hc_cl_list_double_graphic_heading_pane_t1

0xd27b,	// (0x000708e2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd27b,	// (0x000708e2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0007312f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0007312f) hc_cl_list_double_graphic_heading_pane_t

0xd290,	// (0x000708f7) vid4_progress_pane_g1

0xd29f,	// (0x00070906) vid4_progress_pane_g2

0xd2ae,	// (0x00070915) vid4_progress_pane_g3

0xd2bd,	// (0x00070924) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x00073134) vid4_progress_pane_g

0xd2c9,	// (0x00070930) vid4_progress_pane_t1

0xd2df,	// (0x00070946) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0007313f) vid4_progress_pane_t

0xd309,	// (0x00070970) wait_bar_pane_cp07

0x4dff,	// (0x00068466) blid_firmament_pane_ParamLimits

0x4e40,	// (0x000684a7) popup_blid_sat_info2_window_g1

0x4e64,	// (0x000684cb) popup_blid_sat_info2_window_t3

0x4e72,	// (0x000684d9) popup_blid_sat_info2_window_t4

0x4e80,	// (0x000684e7) popup_blid_sat_info2_window_t5

0x4e8e,	// (0x000684f5) popup_blid_sat_info2_window_t6

0x4e9e,	// (0x00068505) popup_blid_sat_info2_window_t7

0x4eac,	// (0x00068513) popup_blid_sat_info2_window_t8

0x4eba,	// (0x00068521) popup_blid_sat_info2_window_t9

0x4ec8,	// (0x0006852f) popup_blid_sat_info2_window_t10

0x4f84,	// (0x000685eb) aid_firma_cardinal_ParamLimits

0x4f98,	// (0x000685ff) blid_firmament_pane_t1_ParamLimits

0x4faf,	// (0x00068616) blid_firmament_pane_t2_ParamLimits

0x4fc6,	// (0x0006862d) blid_firmament_pane_t3_ParamLimits

0x4fdd,	// (0x00068644) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x00072d49) blid_firmament_pane_t_ParamLimits

0x4ff4,	// (0x0006865b) blid_sat_info_pane_ParamLimits

0x2251,	// (0x000658b8) main_cam_set_pane_ParamLimits

0xba3f,	// (0x0006f0a6) aid_size_cell_colour_35_ParamLimits

0xba56,	// (0x0006f0bd) aid_size_cell_colour_112_ParamLimits

0xba6d,	// (0x0006f0d4) aid_size_cell_effect_ParamLimits

0x2251,	// (0x000658b8) bg_tb_trans_pane_cp02_ParamLimits

0x1079,	// (0x000646e0) heading_imed_pane_ParamLimits

0xba87,	// (0x0006f0ee) listscroll_imed_pane_ParamLimits

0x2003,	// (0x0006566a) popup_call2_audio_first_window_g5_ParamLimits

0x2003,	// (0x0006566a) popup_call2_audio_first_window_g5

0xc12a,	// (0x0006f791) aid_size_touch_image3_arrow_left_ParamLimits

0xc12a,	// (0x0006f791) aid_size_touch_image3_arrow_left

0xc13e,	// (0x0006f7a5) aid_size_touch_image3_arrow_right_ParamLimits

0xc13e,	// (0x0006f7a5) aid_size_touch_image3_arrow_right

0xd2f4,	// (0x0007095b) vid4_progress_pane_t3

0xbceb,	// (0x0006f352) main_hwr_training_symbol_option_pane_ParamLimits

0xbceb,	// (0x0006f352) main_hwr_training_symbol_option_pane

0x57bf,	// (0x00068e26) popup_hwr_training_preview_window_ParamLimits

0x57bf,	// (0x00068e26) popup_hwr_training_preview_window

0xbd46,	// (0x0006f3ad) hwr_training_navi_pane_g5_ParamLimits

0xbd46,	// (0x0006f3ad) hwr_training_navi_pane_g5

0xee81,	// (0x000724e8) popup_char_count_window

0x3ee3,	// (0x0006754a) bg_popup_sub_pane_cp20_ParamLimits

0xce27,	// (0x0007048e) list_vitu2_match_list_pane_ParamLimits

0xce33,	// (0x0007049a) vitu2_page_scroll_pane_ParamLimits

0xce33,	// (0x0007049a) vitu2_page_scroll_pane

0x26d3,	// (0x00065d3a) list_single_hwr_training_symbol_option_pane_ParamLimits

0x26d3,	// (0x00065d3a) list_single_hwr_training_symbol_option_pane

0x26e6,	// (0x00065d4d) list_single_hwr_training_symbol_option_pane_g1

0x26ee,	// (0x00065d55) list_single_hwr_training_symbol_option_pane_t1

0x26fc,	// (0x00065d63) bg_button_pane_cp023

0x2705,	// (0x00065d6c) bg_button_pane_cp024

0xd345,	// (0x000709ac) vitu2_page_scroll_pane_g1

0xd34d,	// (0x000709b4) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x00073146) vitu2_page_scroll_pane_g

0xd355,	// (0x000709bc) vitu2_page_scroll_pane_t1

0x502d,	// (0x00068694) popup_char_count_window_g1

0x2738,	// (0x00065d9f) popup_char_count_window_g2

0x2741,	// (0x00065da8) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0007314b) popup_char_count_window_g

0x274a,	// (0x00065db1) popup_char_count_window_t1

0x0093,	// (0x000636fa) main_vded2_pane

0x54ce,	// (0x00068b35) aid_size_cell_imed_line

0x54d8,	// (0x00068b3f) grid_imed_line_width_pane

0xc54d,	// (0x0006fbb4) vid4_indicators_pane_g4

0x2758,	// (0x00065dbf) cell_imed_line_width_pane_ParamLimits

0x2758,	// (0x00065dbf) cell_imed_line_width_pane

0x276a,	// (0x00065dd1) cell_imed_line_width_pane_g1

0x4dd9,	// (0x00068440) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x00073152) cell_imed_line_width_pane_g

0xd364,	// (0x000709cb) main_vded2_pane_g1_ParamLimits

0xd364,	// (0x000709cb) main_vded2_pane_g1

0xd371,	// (0x000709d8) main_vded2_pane_g2_ParamLimits

0xd371,	// (0x000709d8) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x00073157) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x00073157) main_vded2_pane_g

0xd37d,	// (0x000709e4) vded2_slider_pane_ParamLimits

0xd37d,	// (0x000709e4) vded2_slider_pane

0xd38a,	// (0x000709f1) aid_size_touch_vded2_end

0xd392,	// (0x000709f9) aid_size_touch_vded2_playhead

0xd39a,	// (0x00070a01) aid_size_touch_vded2_start

0xd3a2,	// (0x00070a09) vded2_slider_bg_pane

0xd3ab,	// (0x00070a12) vded2_slider_pane_g1

0xd3b4,	// (0x00070a1b) vded2_slider_pane_g2

0xd3bc,	// (0x00070a23) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0007315c) vded2_slider_pane_g

0xd3c5,	// (0x00070a2c) vded2_slider_bg_pane_g1

0xd3ce,	// (0x00070a35) vded2_slider_bg_pane_g2

0xd3d7,	// (0x00070a3e) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x00073163) vded2_slider_bg_pane_g

0xa030,	// (0x0006d697) aid_postcard_touch_down_pane_ParamLimits

0xa030,	// (0x0006d697) aid_postcard_touch_down_pane

0xa03c,	// (0x0006d6a3) aid_postcard_touch_up_pane_ParamLimits

0xa03c,	// (0x0006d6a3) aid_postcard_touch_up_pane

0x0093,	// (0x000636fa) main_blid2_pane

0xa663,	// (0x0006dcca) popup_blid2_search_window

0x0093,	// (0x000636fa) blid2_gps_pane

0x0093,	// (0x000636fa) blid2_navig_pane

0x0093,	// (0x000636fa) blid2_search_pane

0x0093,	// (0x000636fa) blid2_tripm_pane

0xd3e0,	// (0x00070a47) blid2_search_pane_g1_ParamLimits

0xd3e0,	// (0x00070a47) blid2_search_pane_g1

0xd3ec,	// (0x00070a53) blid2_search_pane_t1_ParamLimits

0xd3ec,	// (0x00070a53) blid2_search_pane_t1

0xd3fe,	// (0x00070a65) aid_size_cell_blid2_gps_ParamLimits

0xd3fe,	// (0x00070a65) aid_size_cell_blid2_gps

0xd40e,	// (0x00070a75) blid2_gps_pane_g1_ParamLimits

0xd40e,	// (0x00070a75) blid2_gps_pane_g1

0xd41a,	// (0x00070a81) grid_blid2_satellite_pane_ParamLimits

0xd41a,	// (0x00070a81) grid_blid2_satellite_pane

0xd426,	// (0x00070a8d) blid2_navig_pane_g1_ParamLimits

0xd426,	// (0x00070a8d) blid2_navig_pane_g1

0xd432,	// (0x00070a99) blid2_navig_pane_t1_ParamLimits

0xd432,	// (0x00070a99) blid2_navig_pane_t1

0xd444,	// (0x00070aab) blid2_navig_pane_t2_ParamLimits

0xd444,	// (0x00070aab) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0007316a) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0007316a) blid2_navig_pane_t

0xd456,	// (0x00070abd) blid2_navig_ring_pane_ParamLimits

0xd456,	// (0x00070abd) blid2_navig_ring_pane

0xd462,	// (0x00070ac9) blid2_speed_pane_ParamLimits

0xd462,	// (0x00070ac9) blid2_speed_pane

0xd46e,	// (0x00070ad5) blid2_tripm_pane_g1_ParamLimits

0xd46e,	// (0x00070ad5) blid2_tripm_pane_g1

0xd47a,	// (0x00070ae1) blid2_tripm_pane_g2_ParamLimits

0xd47a,	// (0x00070ae1) blid2_tripm_pane_g2

0xd486,	// (0x00070aed) blid2_tripm_pane_g3_ParamLimits

0xd486,	// (0x00070aed) blid2_tripm_pane_g3

0xd492,	// (0x00070af9) blid2_tripm_pane_g4_ParamLimits

0xd492,	// (0x00070af9) blid2_tripm_pane_g4

0xd49e,	// (0x00070b05) blid2_tripm_pane_g5_ParamLimits

0xd49e,	// (0x00070b05) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0007316f) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0007316f) blid2_tripm_pane_g

0xd4b6,	// (0x00070b1d) blid2_tripm_pane_t1_ParamLimits

0xd4b6,	// (0x00070b1d) blid2_tripm_pane_t1

0xd4c8,	// (0x00070b2f) blid2_tripm_pane_t2_ParamLimits

0xd4c8,	// (0x00070b2f) blid2_tripm_pane_t2

0xd4da,	// (0x00070b41) blid2_tripm_pane_t3_ParamLimits

0xd4da,	// (0x00070b41) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0007317c) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0007317c) blid2_tripm_pane_t

0xd50a,	// (0x00070b71) cell_blid2_satellite_pane_ParamLimits

0xd50a,	// (0x00070b71) cell_blid2_satellite_pane

0xd522,	// (0x00070b89) cell_blid2_satellite_pane_g1

0x2773,	// (0x00065dda) cell_blid2_satellite_pane_t1

0x5004,	// (0x0006866b) blid2_speed_pane_g1

0x2781,	// (0x00065de8) blid2_speed_pane_t1

0x278f,	// (0x00065df6) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x00073185) blid2_speed_pane_t

0x5004,	// (0x0006866b) blid2_navig_ring_pane_g1

0xd52b,	// (0x00070b92) blid2_navig_ring_pane_g2

0xd533,	// (0x00070b9a) blid2_navig_ring_pane_g3

0xd53b,	// (0x00070ba2) blid2_navig_ring_pane_g4

0xd543,	// (0x00070baa) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0007318a) blid2_navig_ring_pane_g

0x0093,	// (0x000636fa) bg_popup_window_pane_cp011

0x279d,	// (0x00065e04) popup_blid2_search_window_g1

0x27a5,	// (0x00065e0c) popup_blid2_search_window_t1

0x27b3,	// (0x00065e1a) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x00073195) popup_blid2_search_window_t

0x0c63,	// (0x000642ca) main_browser_pane_g1

0x085d,	// (0x00063ec4) main_browser_pane_ParamLimits

0x2251,	// (0x000658b8) bg_button_pane_cp011_ParamLimits

0xc76e,	// (0x0006fdd5) cell_vitu2_function_pane_g1_ParamLimits

0x4bf2,	// (0x00068259) bg_popup_sub_pane_cp22_ParamLimits

0x6af5,	// (0x0006a15c) input_focus_pane_cp08_ParamLimits

0xcfb6,	// (0x0007061d) popup_vitu2_query_button_pane_ParamLimits

0xcfb6,	// (0x0007061d) popup_vitu2_query_button_pane

0x6b0c,	// (0x0006a173) popup_vitu2_query_input_button_pane

0x23ba,	// (0x00065a21) popup_vitu2_query_window_g1_ParamLimits

0x6b14,	// (0x0006a17b) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x00073096) popup_vitu2_query_window_g_ParamLimits

0x0093,	// (0x000636fa) bg_button_pane_cp026

0xd54b,	// (0x00070bb2) popup_vitu2_query_input_button_pane_g1

0x0093,	// (0x000636fa) bg_button_pane_cp025

0x27c1,	// (0x00065e28) popup_vitu2_query_button_pane_t1

0xb025,	// (0x0006e68c) main_mp3_pane_t6

0xb033,	// (0x0006e69a) popup_slider_window_cp01

0xc480,	// (0x0006fae7) cam4_battery_pane

0xc480,	// (0x0006fae7) cam4_battery_pane_cp02

0xc480,	// (0x0006fae7) cam4_battery_pane_cp01

0xc480,	// (0x0006fae7) cam4_battery_pane_cp03

0x5004,	// (0x0006866b) cam4_battery_pane_g1

0x58bf,	// (0x00068f26) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0007319a) cam4_battery_pane_g

0x4ed6,	// (0x0006853d) popup_blid_sat_info2_window_t11

0x9b0b,	// (0x0006d172) aid_size_touch_mv_arrow_left_ParamLimits

0x143b,	// (0x00064aa2) aid_size_touch_mv_arrow_right_ParamLimits

0x1494,	// (0x00064afb) navi_pane_g1_ParamLimits

0x14a0,	// (0x00064b07) navi_pane_g2_ParamLimits

0x9b2f,	// (0x0006d196) navi_pane_g3_ParamLimits

0xf3e1,	// (0x00072a48) navi_pane_g_ParamLimits

0x9b4c,	// (0x0006d1b3) navi_pane_mv_t1_ParamLimits

0xba93,	// (0x0006f0fa) grid_imed_effect_pane_ParamLimits

0x88ca,	// (0x0006bf31) aid_placing_vt_slider_lsc

0x0ba5,	// (0x0006420c) aid_placing_vt_slider_prt

0x2251,	// (0x000658b8) bg_tb_trans_pane_cp01_ParamLimits

0x5153,	// (0x000687ba) popup_image_details_window_g1_ParamLimits

0x5166,	// (0x000687cd) popup_image_details_window_g2_ParamLimits

0x517b,	// (0x000687e2) popup_image_details_window_g3_ParamLimits

0x517b,	// (0x000687e2) popup_image_details_window_g3

0xf727,	// (0x00072d8e) popup_image_details_window_g_ParamLimits

0x518f,	// (0x000687f6) popup_image_details_window_t1_ParamLimits

0x51a1,	// (0x00068808) popup_image_details_window_t2_ParamLimits

0x51ba,	// (0x00068821) popup_image_details_window_t3_ParamLimits

0x51ce,	// (0x00068835) popup_image_details_window_t4_ParamLimits

0x51e9,	// (0x00068850) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x00072d95) popup_image_details_window_t_ParamLimits

0xd1bc,	// (0x00070823) cl_header_name_pane_ParamLimits

0xd1bc,	// (0x00070823) cl_header_name_pane

0xd553,	// (0x00070bba) cl_header_name_pane_t1_ParamLimits

0xd553,	// (0x00070bba) cl_header_name_pane_t1

0xd56a,	// (0x00070bd1) cl_header_name_pane_t2_ParamLimits

0xd56a,	// (0x00070bd1) cl_header_name_pane_t2

0xd594,	// (0x00070bfb) cl_header_name_pane_t3_ParamLimits

0xd594,	// (0x00070bfb) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0007319f) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0007319f) cl_header_name_pane_t

0x152d,	// (0x00064b94) navi_pane_mv_g2_ParamLimits

0xee5b,	// (0x000724c2) field_vitu2_entry_pane_g1_ParamLimits

0xee67,	// (0x000724ce) field_vitu2_entry_pane_g2_ParamLimits

0xee73,	// (0x000724da) field_vitu2_entry_pane_g3_ParamLimits

0xee73,	// (0x000724da) field_vitu2_entry_pane_g3

0xf92e,	// (0x00072f95) field_vitu2_entry_pane_g_ParamLimits

0xc702,	// (0x0006fd69) cell_vitu2_itu_pane_g1_ParamLimits

0xc714,	// (0x0006fd7b) cell_vitu2_itu_pane_g2_ParamLimits

0xc714,	// (0x0006fd7b) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x00072fa1) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x00072fa1) cell_vitu2_itu_pane_g

0x2251,	// (0x000658b8) bg_vkb2_func_pane_cp05_ParamLimits

0x2251,	// (0x000658b8) bg_vkb2_func_pane_cp05

0x2251,	// (0x000658b8) bg_vkb2_func_pane_cp03

0x2251,	// (0x000658b8) bg_vkb2_func_pane_cp04

0x2251,	// (0x000658b8) bg_vkb2_func_pane_cp10_ParamLimits

0x2251,	// (0x000658b8) bg_vkb2_func_pane_cp10

0x6cc5,	// (0x0006a32c) bg_vkb2_func_pane_cp08

0xd167,	// (0x000707ce) bg_vkb2_func_pane_cp06

0xd174,	// (0x000707db) bg_vkb2_func_pane_cp07

0x270e,	// (0x00065d75) bg_vkb2_func_pane_cp11_ParamLimits

0x270e,	// (0x00065d75) bg_vkb2_func_pane_cp11

0x2723,	// (0x00065d8a) bg_vkb2_func_pane_cp12_ParamLimits

0x2723,	// (0x00065d8a) bg_vkb2_func_pane_cp12

0x0093,	// (0x000636fa) bg_vkb2_func_pane_cp09

0xee93,	// (0x000724fa) bg_vkb2_func_pane_g1

0x0d74,	// (0x000643db) bg_vkb2_func_pane_g2

0xee9b,	// (0x00072502) bg_vkb2_func_pane_g3

0xeea3,	// (0x0007250a) bg_vkb2_func_pane_g4

0x237f,	// (0x000659e6) bg_vkb2_func_pane_g5

0xeebb,	// (0x00072522) bg_vkb2_func_pane_g6

0xeec3,	// (0x0007252a) bg_vkb2_func_pane_g7

0xeeb3,	// (0x0007251a) bg_vkb2_func_pane_g8

0x0d54,	// (0x000643bb) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x000731a6) bg_vkb2_func_pane_g

0xd4aa,	// (0x00070b11) blid2_tripm_pane_g6_ParamLimits

0xd4aa,	// (0x00070b11) blid2_tripm_pane_g6

0x587d,	// (0x00068ee4) mp4_progress_pane_g1

0xd4fe,	// (0x00070b65) blid2_tripm_values_pane_ParamLimits

0xd4fe,	// (0x00070b65) blid2_tripm_values_pane

0xd5b9,	// (0x00070c20) blid2_tripm_values_pane_t1

0xd5c7,	// (0x00070c2e) blid2_tripm_values_pane_t2

0xd5d5,	// (0x00070c3c) blid2_tripm_values_pane_t3

0xd5e3,	// (0x00070c4a) blid2_tripm_values_pane_t4

0xd5f1,	// (0x00070c58) blid2_tripm_values_pane_t5

0xd5ff,	// (0x00070c66) blid2_tripm_values_pane_t6

0xd60d,	// (0x00070c74) blid2_tripm_values_pane_t7

0xd61b,	// (0x00070c82) blid2_tripm_values_pane_t8

0xd629,	// (0x00070c90) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x000731b9) blid2_tripm_values_pane_t

0x8904,	// (0x0006bf6b) call_video_pane_t1_ParamLimits

0x8921,	// (0x0006bf88) call_video_pane_t2_ParamLimits

0xf26a,	// (0x000728d1) call_video_pane_t_ParamLimits

0x68ba,	// (0x00069f21) msg_header_pane_g1_ParamLimits

0x171f,	// (0x00064d86) msg_header_pane_g2_ParamLimits

0x171f,	// (0x00064d86) msg_header_pane_g2

0x0001,

0xf484,	// (0x00072aeb) msg_header_pane_g_ParamLimits

0xf484,	// (0x00072aeb) msg_header_pane_g

0x085d,	// (0x00063ec4) main_clock2_pane_ParamLimits

0xb837,	// (0x0006ee9e) grid_clock2_toolbar_pane_ParamLimits

0xb837,	// (0x0006ee9e) grid_clock2_toolbar_pane

0xb837,	// (0x0006ee9e) listscroll_clock2_pane_ParamLimits

0xb837,	// (0x0006ee9e) listscroll_clock2_pane

0xb8d3,	// (0x0006ef3a) main_clock2_pane_t3_ParamLimits

0xb8d3,	// (0x0006ef3a) main_clock2_pane_t3

0xb8e5,	// (0x0006ef4c) main_clock2_pane_t4_ParamLimits

0xb8e5,	// (0x0006ef4c) main_clock2_pane_t4

0x27cf,	// (0x00065e36) cell_clock2_toolbar_pane

0x27d7,	// (0x00065e3e) cell_clock2_toolbar_pane_cp01

0x27d7,	// (0x00065e3e) cell_clock2_toolbar_pane_cp02

0x27df,	// (0x00065e46) cell_clock2_toolbar_pane_cp03

0x27e7,	// (0x00065e4e) list_clock2_pane

0x27ef,	// (0x00065e56) scroll_pane_cp10

0x27f7,	// (0x00065e5e) list_single_clock2_pane_ParamLimits

0x27f7,	// (0x00065e5e) list_single_clock2_pane

0x0acc,	// (0x00064133) list_highlight_pane_cp08

0x2804,	// (0x00065e6b) list_single_clock2_pane_t1

0x2812,	// (0x00065e79) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x000731cc) list_single_clock2_pane_t

0x0093,	// (0x000636fa) bg_button_pane_cp10

0x2820,	// (0x00065e87) cell_clock2_toolbar_pane_g1

0x9f9a,	// (0x0006d601) aid_main_viewer_pane_g1_ParamLimits

0x9f9a,	// (0x0006d601) aid_main_viewer_pane_g1

0x9fa6,	// (0x0006d60d) aid_main_viewer_pane_g2_ParamLimits

0x9fa6,	// (0x0006d60d) aid_main_viewer_pane_g2

0x9fb2,	// (0x0006d619) aid_main_viewer_pane_g3_ParamLimits

0x9fb2,	// (0x0006d619) aid_main_viewer_pane_g3

0x9fc1,	// (0x0006d628) aid_main_viewer_pane_g4_ParamLimits

0x9fc1,	// (0x0006d628) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x00072afc) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x00072afc) aid_main_viewer_pane_g

0x3ee3,	// (0x0006754a) main_calc_pane_ParamLimits

0xa648,	// (0x0006dcaf) main_dialer2_pane_ParamLimits

0x0093,	// (0x000636fa) main_cam6_pane

0x0093,	// (0x000636fa) main_vid6_pane

0xb843,	// (0x0006eeaa) listscroll_gen_pane_cp06_ParamLimits

0xb843,	// (0x0006eeaa) listscroll_gen_pane_cp06

0xb8f7,	// (0x0006ef5e) main_clock2_pane_t5_ParamLimits

0xb8f7,	// (0x0006ef5e) main_clock2_pane_t5

0xb940,	// (0x0006efa7) aid_call2_pane_cp10_ParamLimits

0xb952,	// (0x0006efb9) aid_call_pane_cp10_ParamLimits

0x142f,	// (0x00064a96) popup_clock_analogue_window_cp10_g1_ParamLimits

0x142f,	// (0x00064a96) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb964,	// (0x0006efcb) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb964,	// (0x0006efcb) popup_clock_analogue_window_cp10_g4_ParamLimits

0x142f,	// (0x00064a96) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x00072e4a) popup_clock_analogue_window_cp10_g_ParamLimits

0xb976,	// (0x0006efdd) popup_clock_analogue_window_cp10_t1_ParamLimits

0x58e7,	// (0x00068f4e) cell_dialer2_keypad_pane_g2_ParamLimits

0x58e7,	// (0x00068f4e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x00072f34) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x00072f34) cell_dialer2_keypad_pane_g

0xc0f3,	// (0x0006f75a) cell_dialer2_keypad_pane_t1

0xc9fb,	// (0x00070062) main_cset_text2_pane_ParamLimits

0xc9fb,	// (0x00070062) main_cset_text2_pane

0x2594,	// (0x00065bfb) area_vitu2_query_pane_g1_ParamLimits

0x6bf2,	// (0x0006a259) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x000730e9) area_vitu2_query_pane_g_ParamLimits

0x6ca1,	// (0x0006a308) area_vitu2_query_pane_t7_ParamLimits

0x6ca1,	// (0x0006a308) area_vitu2_query_pane_t7

0xd167,	// (0x000707ce) bg_button_pane_cp018_ParamLimits

0xd174,	// (0x000707db) bg_button_pane_cp021_ParamLimits

0x6cc5,	// (0x0006a32c) bg_button_pane_cp022_ParamLimits

0x6cc5,	// (0x0006a32c) bg_vkb2_func_pane_cp08_ParamLimits

0xd167,	// (0x000707ce) bg_vkb2_func_pane_cp06_ParamLimits

0xd174,	// (0x000707db) bg_vkb2_func_pane_cp07_ParamLimits

0x6cd4,	// (0x0006a33b) input_focus_pane_cp09_ParamLimits

0xd637,	// (0x00070c9e) cam6_autofocus_pane_ParamLimits

0xd637,	// (0x00070c9e) cam6_autofocus_pane

0xd653,	// (0x00070cba) cam6_image_uncrop_pane_ParamLimits

0xd653,	// (0x00070cba) cam6_image_uncrop_pane

0xd676,	// (0x00070cdd) cam6_indi_pane_ParamLimits

0xd676,	// (0x00070cdd) cam6_indi_pane

0xd690,	// (0x00070cf7) cam6_mode_pane_ParamLimits

0xd690,	// (0x00070cf7) cam6_mode_pane

0xd6a4,	// (0x00070d0b) cam6_timer_pane_ParamLimits

0xd6a4,	// (0x00070d0b) cam6_timer_pane

0xd6b0,	// (0x00070d17) cam6_zoom_pane_ParamLimits

0xd6b0,	// (0x00070d17) cam6_zoom_pane

0xc4e0,	// (0x0006fb47) cam6_mode_pane_g1_ParamLimits

0xc4e0,	// (0x0006fb47) cam6_mode_pane_g1

0xd6c6,	// (0x00070d2d) cam6_mode_pane_g2_ParamLimits

0xd6c6,	// (0x00070d2d) cam6_mode_pane_g2

0xd6d2,	// (0x00070d39) cam6_mode_pane_g3_ParamLimits

0xd6d2,	// (0x00070d39) cam6_mode_pane_g3

0xd6de,	// (0x00070d45) cam6_mode_pane_g4_ParamLimits

0xd6de,	// (0x00070d45) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x000731d1) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x000731d1) cam6_mode_pane_g

0x2828,	// (0x00065e8f) bg_tb_trans_pane_cp08_ParamLimits

0x2828,	// (0x00065e8f) bg_tb_trans_pane_cp08

0x2836,	// (0x00065e9d) cam6_battery_pane_ParamLimits

0x2836,	// (0x00065e9d) cam6_battery_pane

0x284c,	// (0x00065eb3) cam6_indi_pane_g1_ParamLimits

0x284c,	// (0x00065eb3) cam6_indi_pane_g1

0x285e,	// (0x00065ec5) cam6_indi_pane_g2_ParamLimits

0x285e,	// (0x00065ec5) cam6_indi_pane_g2

0x2870,	// (0x00065ed7) cam6_indi_pane_g3_ParamLimits

0x2870,	// (0x00065ed7) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x000731da) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x000731da) cam6_indi_pane_g

0x2882,	// (0x00065ee9) cam6_indi_pane_t1_ParamLimits

0x2882,	// (0x00065ee9) cam6_indi_pane_t1

0xc583,	// (0x0006fbea) cam6_autofocus_pane_g1

0xc58b,	// (0x0006fbf2) cam6_autofocus_pane_g2

0xc593,	// (0x0006fbfa) cam6_autofocus_pane_g3

0xc59b,	// (0x0006fc02) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x000731e1) cam6_autofocus_pane_g

0x28a8,	// (0x00065f0f) cam6_timer_pane_g1

0x28b0,	// (0x00065f17) cam6_timer_pane_t1

0x28be,	// (0x00065f25) cam6_zoom_cont_pane

0x28c6,	// (0x00065f2d) cam6_zoom_pane_g1

0x28ce,	// (0x00065f35) cam6_zoom_pane_g2

0xd6ea,	// (0x00070d51) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x000731ea) cam6_zoom_pane_g

0x5004,	// (0x0006866b) cam6_battery_pane_g1

0x5004,	// (0x0006866b) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x00072d52) cam6_battery_pane_g

0x28d6,	// (0x00065f3d) cam6_zoom_cont_pane_g1

0x28df,	// (0x00065f46) cam6_zoom_cont_pane_g2

0x28e8,	// (0x00065f4f) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x000731f1) cam6_zoom_cont_pane_g

0xd707,	// (0x00070d6e) cam6_mode_pane_cp_ParamLimits

0xd707,	// (0x00070d6e) cam6_mode_pane_cp

0xd6b0,	// (0x00070d17) cam6_zoom_pane_cp_ParamLimits

0xd6b0,	// (0x00070d17) cam6_zoom_pane_cp

0xd71b,	// (0x00070d82) vid6_image_uncrop_cif_pane_ParamLimits

0xd71b,	// (0x00070d82) vid6_image_uncrop_cif_pane

0xd73d,	// (0x00070da4) vid6_image_uncrop_nhd_pane_ParamLimits

0xd73d,	// (0x00070da4) vid6_image_uncrop_nhd_pane

0xd653,	// (0x00070cba) vid6_image_uncrop_vga_pane_ParamLimits

0xd653,	// (0x00070cba) vid6_image_uncrop_vga_pane

0xd754,	// (0x00070dbb) vid6_image_uncrop_wvga_pane_ParamLimits

0xd754,	// (0x00070dbb) vid6_image_uncrop_wvga_pane

0xd76b,	// (0x00070dd2) vid6_indi_pane_ParamLimits

0xd76b,	// (0x00070dd2) vid6_indi_pane

0x2828,	// (0x00065e8f) bg_tb_trans_pane_cp09_ParamLimits

0x2828,	// (0x00065e8f) bg_tb_trans_pane_cp09

0x28fc,	// (0x00065f63) cam6_battery_pane_cp_ParamLimits

0x28fc,	// (0x00065f63) cam6_battery_pane_cp

0x2908,	// (0x00065f6f) vid6_indi_pane_g1_ParamLimits

0x2908,	// (0x00065f6f) vid6_indi_pane_g1

0x291a,	// (0x00065f81) vid6_indi_pane_g2_ParamLimits

0x291a,	// (0x00065f81) vid6_indi_pane_g2

0x292c,	// (0x00065f93) vid6_indi_pane_g3_ParamLimits

0x292c,	// (0x00065f93) vid6_indi_pane_g3

0x2941,	// (0x00065fa8) vid6_indi_pane_g4_ParamLimits

0x2941,	// (0x00065fa8) vid6_indi_pane_g4

0x2956,	// (0x00065fbd) vid6_indi_pane_g5_ParamLimits

0x2956,	// (0x00065fbd) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x000731f8) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x000731f8) vid6_indi_pane_g

0x2970,	// (0x00065fd7) vid6_indi_pane_t1_ParamLimits

0x2970,	// (0x00065fd7) vid6_indi_pane_t1

0x2986,	// (0x00065fed) vid6_indi_pane_t2_ParamLimits

0x2986,	// (0x00065fed) vid6_indi_pane_t2

0x29ae,	// (0x00066015) vid6_indi_pane_t3_ParamLimits

0x29ae,	// (0x00066015) vid6_indi_pane_t3

0x29d6,	// (0x0006603d) vid6_indi_pane_t4_ParamLimits

0x29d6,	// (0x0006603d) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x00073203) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x00073203) vid6_indi_pane_t

0x29fa,	// (0x00066061) wait_bar_pane_cp08

0xd78b,	// (0x00070df2) main_cset_text2_pane_t1_ParamLimits

0xd78b,	// (0x00070df2) main_cset_text2_pane_t1

0xd6f2,	// (0x00070d59) listscroll_gen_pane_cp06_t1_ParamLimits

0xd6f2,	// (0x00070d59) listscroll_gen_pane_cp06_t1

0x0093,	// (0x000636fa) main_cam6_set_pane

0x5233,	// (0x0006889a) bg_tb_trans_pane_cp06_ParamLimits

0xc488,	// (0x0006faef) cam4_indicators_pane_g1_ParamLimits

0xc498,	// (0x0006faff) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x00072f71) cam4_indicators_pane_g_ParamLimits

0xc4b8,	// (0x0006fb1f) cam4_indicators_pane_t1_ParamLimits

0x2251,	// (0x000658b8) bg_tb_trans_pane_cp07_ParamLimits

0xc488,	// (0x0006faef) vid4_indicators_pane_g1_ParamLimits

0xc52c,	// (0x0006fb93) vid4_indicators_pane_g2_ParamLimits

0xc53c,	// (0x0006fba3) vid4_indicators_pane_g3_ParamLimits

0xc54d,	// (0x0006fbb4) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x00072f83) vid4_indicators_pane_g_ParamLimits

0xc569,	// (0x0006fbd0) vid4_indicators_pane_t1_ParamLimits

0xd290,	// (0x000708f7) vid4_progress_pane_g1_ParamLimits

0xd29f,	// (0x00070906) vid4_progress_pane_g2_ParamLimits

0xd2ae,	// (0x00070915) vid4_progress_pane_g3_ParamLimits

0xd2bd,	// (0x00070924) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x00073134) vid4_progress_pane_g_ParamLimits

0xd2c9,	// (0x00070930) vid4_progress_pane_t1_ParamLimits

0xd2df,	// (0x00070946) vid4_progress_pane_t2_ParamLimits

0xd2f4,	// (0x0007095b) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0007313f) vid4_progress_pane_t_ParamLimits

0xd309,	// (0x00070970) wait_bar_pane_cp07_ParamLimits

0xd7a7,	// (0x00070e0e) main_cam6_set_pane_g2_ParamLimits

0xd7a7,	// (0x00070e0e) main_cam6_set_pane_g2

0xd7b3,	// (0x00070e1a) main_cset6_listscroll_pane_ParamLimits

0xd7b3,	// (0x00070e1a) main_cset6_listscroll_pane

0xd7dc,	// (0x00070e43) main_cset6_slider_pane_ParamLimits

0xd7dc,	// (0x00070e43) main_cset6_slider_pane

0xd7e8,	// (0x00070e4f) main_cset6_text2_pane_ParamLimits

0xd7e8,	// (0x00070e4f) main_cset6_text2_pane

0x2a0a,	// (0x00066071) main_cset6_text_pane

0xef9d,	// (0x00072604) main_cset_list_pane_copy1_ParamLimits

0xef9d,	// (0x00072604) main_cset_list_pane_copy1

0xefad,	// (0x00072614) scroll_pane_cp028_copy1

0xd7fb,	// (0x00070e62) cset_list_set_pane_copy1

0xccb6,	// (0x0007031d) aid_position_infowindow_above_copy1

0xccbe,	// (0x00070325) aid_position_infowindow_below_copy1

0xd80a,	// (0x00070e71) cset_list_set_pane_g1_copy1

0x6d08,	// (0x0006a36f) cset_list_set_pane_g3_copy1_ParamLimits

0x6d08,	// (0x0006a36f) cset_list_set_pane_g3_copy1

0x6d17,	// (0x0006a37e) cset_list_set_pane_t1_copy1_ParamLimits

0x6d17,	// (0x0006a37e) cset_list_set_pane_t1_copy1

0x2251,	// (0x000658b8) list_highlight_pane_cp021_copy1_ParamLimits

0x2251,	// (0x000658b8) list_highlight_pane_cp021_copy1

0x2a12,	// (0x00066079) cset6_slider_pane_ParamLimits

0x2a12,	// (0x00066079) cset6_slider_pane

0x2a3e,	// (0x000660a5) main_cset6_slider_pane_g1_ParamLimits

0x2a3e,	// (0x000660a5) main_cset6_slider_pane_g1

0xd812,	// (0x00070e79) main_cset6_slider_pane_g2_ParamLimits

0xd812,	// (0x00070e79) main_cset6_slider_pane_g2

0xefc2,	// (0x00072629) main_cset6_slider_pane_g3_ParamLimits

0xefc2,	// (0x00072629) main_cset6_slider_pane_g3

0xd83a,	// (0x00070ea1) main_cset6_slider_pane_g4_ParamLimits

0xd83a,	// (0x00070ea1) main_cset6_slider_pane_g4

0xd846,	// (0x00070ead) main_cset6_slider_pane_g5_ParamLimits

0xd846,	// (0x00070ead) main_cset6_slider_pane_g5

0xefc2,	// (0x00072629) main_cset6_slider_pane_g7_ParamLimits

0xefc2,	// (0x00072629) main_cset6_slider_pane_g7

0xefce,	// (0x00072635) main_cset6_slider_pane_g8_ParamLimits

0xefce,	// (0x00072635) main_cset6_slider_pane_g8

0xd852,	// (0x00070eb9) main_cset6_slider_pane_g9_ParamLimits

0xd852,	// (0x00070eb9) main_cset6_slider_pane_g9

0xd85e,	// (0x00070ec5) main_cset6_slider_pane_g10_ParamLimits

0xd85e,	// (0x00070ec5) main_cset6_slider_pane_g10

0xd83a,	// (0x00070ea1) main_cset6_slider_pane_g11_ParamLimits

0xd83a,	// (0x00070ea1) main_cset6_slider_pane_g11

0xd86a,	// (0x00070ed1) main_cset6_slider_pane_g12_ParamLimits

0xd86a,	// (0x00070ed1) main_cset6_slider_pane_g12

0xd876,	// (0x00070edd) main_cset6_slider_pane_g13_ParamLimits

0xd876,	// (0x00070edd) main_cset6_slider_pane_g13

0xd882,	// (0x00070ee9) main_cset6_slider_pane_g14_ParamLimits

0xd882,	// (0x00070ee9) main_cset6_slider_pane_g14

0xd88e,	// (0x00070ef5) main_cset6_slider_pane_g15_ParamLimits

0xd88e,	// (0x00070ef5) main_cset6_slider_pane_g15

0xd846,	// (0x00070ead) main_cset6_slider_pane_g16_ParamLimits

0xd846,	// (0x00070ead) main_cset6_slider_pane_g16

0xd8a6,	// (0x00070f0d) main_cset6_slider_pane_g17_ParamLimits

0xd8a6,	// (0x00070f0d) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0007320c) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0007320c) main_cset6_slider_pane_g

0x2a66,	// (0x000660cd) main_cset6_slider_pane_t1_ParamLimits

0x2a66,	// (0x000660cd) main_cset6_slider_pane_t1

0xd8b2,	// (0x00070f19) main_cset6_slider_pane_t2_ParamLimits

0xd8b2,	// (0x00070f19) main_cset6_slider_pane_t2

0x2aa7,	// (0x0006610e) main_cset6_slider_pane_t3_ParamLimits

0x2aa7,	// (0x0006610e) main_cset6_slider_pane_t3

0xd8dd,	// (0x00070f44) main_cset6_slider_pane_t4_ParamLimits

0xd8dd,	// (0x00070f44) main_cset6_slider_pane_t4

0x2ad2,	// (0x00066139) main_cset6_slider_pane_t5_ParamLimits

0x2ad2,	// (0x00066139) main_cset6_slider_pane_t5

0x2afd,	// (0x00066164) main_cset6_slider_pane_t7_ParamLimits

0x2afd,	// (0x00066164) main_cset6_slider_pane_t7

0xd908,	// (0x00070f6f) main_cset6_slider_pane_t8_ParamLimits

0xd908,	// (0x00070f6f) main_cset6_slider_pane_t8

0xd92c,	// (0x00070f93) main_cset6_slider_pane_t9_ParamLimits

0xd92c,	// (0x00070f93) main_cset6_slider_pane_t9

0xd950,	// (0x00070fb7) main_cset6_slider_pane_t10_ParamLimits

0xd950,	// (0x00070fb7) main_cset6_slider_pane_t10

0xd974,	// (0x00070fdb) main_cset6_slider_pane_t11_ParamLimits

0xd974,	// (0x00070fdb) main_cset6_slider_pane_t11

0x2b33,	// (0x0006619a) main_cset6_slider_pane_t14_ParamLimits

0x2b33,	// (0x0006619a) main_cset6_slider_pane_t14

0x2b6c,	// (0x000661d3) main_cset6_slider_pane_t15_ParamLimits

0x2b6c,	// (0x000661d3) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x00073231) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x00073231) main_cset6_slider_pane_t

0xf086,	// (0x000726ed) cset_slider_pane_g1_copy1

0xf08f,	// (0x000726f6) cset_slider_pane_g2_copy1

0xf098,	// (0x000726ff) cset_slider_pane_g3_copy1

0x0093,	// (0x000636fa) bg_popup_sub_pane_cp011_copy1

0x23c6,	// (0x00065a2d) main_cset_text_pane_g1_copy1

0x23ce,	// (0x00065a35) main_cset_text_pane_t1_copy1

0x23dc,	// (0x00065a43) main_cset_text_pane_t2_copy1

0x23ea,	// (0x00065a51) main_cset_text_pane_t3_copy1

0x23f8,	// (0x00065a5f) main_cset_text_pane_t4_copy1

0x2406,	// (0x00065a6d) main_cset_text_pane_t5_copy1

0x2414,	// (0x00065a7b) main_cset_text_pane_t6_copy1

0x2422,	// (0x00065a89) main_cset_text_pane_t7_copy1

0xd9b3,	// (0x0007101a) main_cset_text2_pane_t1_copy1

0x2251,	// (0x000658b8) main_ncimui_pane

0xa693,	// (0x0006dcfa) popup_query_ncimui_window_ParamLimits

0xa693,	// (0x0006dcfa) popup_query_ncimui_window

0xb15f,	// (0x0006e7c6) field_cale_ev2_pane_g4_ParamLimits

0xb15f,	// (0x0006e7c6) field_cale_ev2_pane_g4

0xbe07,	// (0x0006f46e) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbe07,	// (0x0006f46e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x00072f0b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x00072f0b) cell_video_dialer_keypad_pane_g

0xbe1f,	// (0x0006f486) cell_video_dialer_keypad_pane_t1

0x0093,	// (0x000636fa) bg_popup_window_pane_cp012

0x127c,	// (0x000648e3) heading_pane_cp06

0x2c83,	// (0x000662ea) ncim_query_content_pane

0x0093,	// (0x000636fa) bg_popup_heading_pane_cp01

0x2c8b,	// (0x000662f2) ncim_heading_pane_t1

0x2c99,	// (0x00066300) ncim_indicator_popup_pane

0x2cab,	// (0x00066312) ncim_query_button_pane

0x2cbf,	// (0x00066326) ncim_query_content_pane_t1

0x2cd1,	// (0x00066338) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x00073275) ncim_query_content_pane_t

0x2d0b,	// (0x00066372) ncim_query_list_pane

0x2d1d,	// (0x00066384) ncim_query_popup_pane

0x2c99,	// (0x00066300) ncim_indicator_popup_pane_ParamLimits

0xdaf4,	// (0x0007115b) ncim_query_content_pane_g1_ParamLimits

0xdaf4,	// (0x0007115b) ncim_query_content_pane_g1

0x2cbf,	// (0x00066326) ncim_query_content_pane_t1_ParamLimits

0x2cd1,	// (0x00066338) ncim_query_content_pane_t2_ParamLimits

0xdb00,	// (0x00071167) ncim_query_content_pane_t3_ParamLimits

0xdb00,	// (0x00071167) ncim_query_content_pane_t3

0xdb1d,	// (0x00071184) ncim_query_content_pane_t4_ParamLimits

0xdb1d,	// (0x00071184) ncim_query_content_pane_t4

0xdb3a,	// (0x000711a1) ncim_query_content_pane_t5_ParamLimits

0xdb3a,	// (0x000711a1) ncim_query_content_pane_t5

0x2ce3,	// (0x0006634a) ncim_query_content_pane_t6_ParamLimits

0x2ce3,	// (0x0006634a) ncim_query_content_pane_t6

0xfc0e,	// (0x00073275) ncim_query_content_pane_t_ParamLimits

0x2d0b,	// (0x00066372) ncim_query_list_pane_ParamLimits

0x2d1d,	// (0x00066384) ncim_query_popup_pane_ParamLimits

0x2d31,	// (0x00066398) wait_bar_pane_cp04

0x0093,	// (0x000636fa) input_focus_pane_cp011

0x2d39,	// (0x000663a0) ncim_query_popup_pane_t1

0x2d47,	// (0x000663ae) ncim_list_query_list_pane_ParamLimits

0x2d47,	// (0x000663ae) ncim_list_query_list_pane

0x0093,	// (0x000636fa) bg_button_pane_cp027

0x2d5a,	// (0x000663c1) ncim_query_button_pane_g1

0x0093,	// (0x000636fa) list_highlight_pane_cp012

0x2d64,	// (0x000663cb) ncim_list_query_list_pane_g1

0x2d6c,	// (0x000663d3) ncim_list_query_list_pane_t1

0xc4a8,	// (0x0006fb0f) cam4_indicators_pane_g3_ParamLimits

0xc4a8,	// (0x0006fb0f) cam4_indicators_pane_g3

0xc559,	// (0x0006fbc0) vid4_indicators_pane_g5_ParamLimits

0xc559,	// (0x0006fbc0) vid4_indicators_pane_g5

0x104b,	// (0x000646b2) vid4_progress_pane_g5_ParamLimits

0x104b,	// (0x000646b2) vid4_progress_pane_g5

0xd9e4,	// (0x0007104b) main_ncimui_pane_g1

0xda4a,	// (0x000710b1) ncimui_group_query_pane_ParamLimits

0xda4a,	// (0x000710b1) ncimui_group_query_pane

0xda92,	// (0x000710f9) ncimui_list_pane_ParamLimits

0xda92,	// (0x000710f9) ncimui_list_pane

0xdab7,	// (0x0007111e) ncimui_text_pane_ParamLimits

0xdab7,	// (0x0007111e) ncimui_text_pane

0xdb57,	// (0x000711be) ncimui_text_pane_t1_ParamLimits

0xdb57,	// (0x000711be) ncimui_text_pane_t1

0x2d83,	// (0x000663ea) ncimui_list_single_graphic_pane_ParamLimits

0x2d83,	// (0x000663ea) ncimui_list_single_graphic_pane

0xdb75,	// (0x000711dc) ncimui_query_pane_ParamLimits

0xdb75,	// (0x000711dc) ncimui_query_pane

0x0093,	// (0x000636fa) list_highlight_pane_cp013

0x2d93,	// (0x000663fa) ncim_list_query_list_pane_t1_copy1

0x2da1,	// (0x00066408) ncim_list_single_graphic_pane_g1

0x2da9,	// (0x00066410) ncim_query_button_pane_cp01

0x2db5,	// (0x0006641c) ncim_query_entry_pane_ParamLimits

0x2db5,	// (0x0006641c) ncim_query_entry_pane

0x2dc8,	// (0x0006642f) ncimui_query_pane_g1

0x2dd4,	// (0x0006643b) ncimui_query_pane_t1_ParamLimits

0x2dd4,	// (0x0006643b) ncimui_query_pane_t1

0x2251,	// (0x000658b8) input_focus_pane_cp012

0x2ded,	// (0x00066454) ncim_query_entry_pane_t1

0x085d,	// (0x00063ec4) main_im_pane_ParamLimits

0x2251,	// (0x000658b8) main_mobtv_pane_ParamLimits

0x2251,	// (0x000658b8) main_mobtv_pane

0xd852,	// (0x00070eb9) main_cset6_slider_pane_g18_ParamLimits

0xd852,	// (0x00070eb9) main_cset6_slider_pane_g18

0xd876,	// (0x00070edd) main_cset6_slider_pane_g19_ParamLimits

0xd876,	// (0x00070edd) main_cset6_slider_pane_g19

0xee73,	// (0x000724da) bg_main_mobtv_pane_ParamLimits

0xee73,	// (0x000724da) bg_main_mobtv_pane

0xdb85,	// (0x000711ec) main_mobtv_info_pane

0xdb8e,	// (0x000711f5) main_mobtv_loading_pane_ParamLimits

0xdb8e,	// (0x000711f5) main_mobtv_loading_pane

0x2e0d,	// (0x00066474) main_mobtv_pg_channel_list_pane

0x2e17,	// (0x0006647e) main_mobtv_pg_hdr_pane

0xdb9b,	// (0x00071202) main_mobtv_programe_curr_pane_ParamLimits

0xdb9b,	// (0x00071202) main_mobtv_programe_curr_pane

0xdba8,	// (0x0007120f) main_mobtv_programe_next_pane_ParamLimits

0xdba8,	// (0x0007120f) main_mobtv_programe_next_pane

0x2e20,	// (0x00066487) popup_mobtv_noti_window

0x5004,	// (0x0006866b) main_tv_pg_hdr_pane_g1

0x2e28,	// (0x0006648f) main_tv_pg_hdr_pane_g2

0x2e30,	// (0x00066497) main_tv_pg_hdr_pane_g3

0x2e38,	// (0x0006649f) main_tv_pg_hdr_pane_g4

0x2e40,	// (0x000664a7) main_tv_pg_hdr_pane_g5

0x2e48,	// (0x000664af) main_tv_pg_hdr_pane_g6

0x2e50,	// (0x000664b7) main_tv_pg_hdr_pane_g7

0x2e58,	// (0x000664bf) main_tv_pg_hdr_pane_g8

0x2e60,	// (0x000664c7) main_tv_pg_hdr_pane_g9

0x2e68,	// (0x000664cf) main_tv_pg_hdr_pane_g10

0x2e72,	// (0x000664d9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00073282) main_tv_pg_hdr_pane_g

0x2e7c,	// (0x000664e3) main_tv_pg_hdr_pane_t1

0x2e8a,	// (0x000664f1) main_tv_pg_hdr_pane_t2

0x2e98,	// (0x000664ff) main_tv_pg_hdr_pane_t3

0x2ea6,	// (0x0006650d) main_tv_pg_hdr_pane_t4

0x2eb4,	// (0x0006651b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x00073299) main_tv_pg_hdr_pane_t

0x2ec2,	// (0x00066529) single_mobtv_pg_channel_pane_ParamLimits

0x2ec2,	// (0x00066529) single_mobtv_pg_channel_pane

0x2ed4,	// (0x0006653b) single_mobtv_pg_channel_table_pane

0x2edd,	// (0x00066544) single_mobtv_pg_channel_thumb_pane

0x2ee6,	// (0x0006654d) single_tv_pg_channel_pane_g1

0x2eef,	// (0x00066556) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x000732a4) single_tv_pg_channel_pane_g

0x5233,	// (0x0006889a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x5233,	// (0x0006889a) bg_single_mobtv_pg_channel_thumb_pane

0x2ef8,	// (0x0006655f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2ef8,	// (0x0006655f) single_mobtv_pg_channel_thumb_pane_g1

0x2f06,	// (0x0006656d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2f06,	// (0x0006656d) single_mobtv_pg_channel_thumb_pane_g2

0x2f12,	// (0x00066579) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2f12,	// (0x00066579) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x000732a9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x000732a9) single_mobtv_pg_channel_thumb_pane_g

0x2f1e,	// (0x00066585) single_mobtv_pg_channel_thumb_pane_t1

0x2f2c,	// (0x00066593) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x000732b0) single_mobtv_pg_channel_thumb_pane_t

0x5004,	// (0x0006866b) bg_single_mobtv_pg_channel_table_pane_g1

0x5004,	// (0x0006866b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x00072d52) bg_single_mobtv_pg_channel_table_pane_g

0x2f3a,	// (0x000665a1) single_mobtv_pg_channel_table_pane_t1

0x2f48,	// (0x000665af) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x000732b5) single_mobtv_pg_channel_table_pane_t

0xdbbd,	// (0x00071224) main_mobtv_info_pane_g1_ParamLimits

0xdbbd,	// (0x00071224) main_mobtv_info_pane_g1

0xdbd9,	// (0x00071240) main_mobtv_info_pane_t1_ParamLimits

0xdbd9,	// (0x00071240) main_mobtv_info_pane_t1

0xdc3f,	// (0x000712a6) main_mobtv_info_pane_t2_ParamLimits

0xdc3f,	// (0x000712a6) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x000732bf) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x000732bf) main_mobtv_info_pane_t

0xdcc2,	// (0x00071329) wait_bar_pane_cp05

0xdcd2,	// (0x00071339) main_mobtv_loading_pane_g1_ParamLimits

0xdcd2,	// (0x00071339) main_mobtv_loading_pane_g1

0xdcde,	// (0x00071345) main_mobtv_loading_pane_g2_ParamLimits

0xdcde,	// (0x00071345) main_mobtv_loading_pane_g2

0xdcea,	// (0x00071351) main_mobtv_loading_pane_g3_ParamLimits

0xdcea,	// (0x00071351) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x000732c6) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x000732c6) main_mobtv_loading_pane_g

0x2f56,	// (0x000665bd) main_mobtv_loading_pane_t1_ParamLimits

0x2f56,	// (0x000665bd) main_mobtv_loading_pane_t1

0x2f6e,	// (0x000665d5) main_mobtv_loading_pane_t2_ParamLimits

0x2f6e,	// (0x000665d5) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x000732cd) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x000732cd) main_mobtv_loading_pane_t

0xdcf6,	// (0x0007135d) wait_bar_pane_cp06_ParamLimits

0xdcf6,	// (0x0007135d) wait_bar_pane_cp06

0x2f92,	// (0x000665f9) main_mobtv_programe_curr_pane_t1

0x2fa0,	// (0x00066607) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x000732d2) main_mobtv_programe_curr_pane_t

0x2fae,	// (0x00066615) main_mobtv_programe_next_pane_t1

0x2fbc,	// (0x00066623) main_mobtv_programe_next_pane_t2

0x2fca,	// (0x00066631) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x000732d7) main_mobtv_programe_next_pane_t

0x0093,	// (0x000636fa) bg_popup_mobtv_noti_window_pane

0x2fd8,	// (0x0006663f) popup_mobtv_noti_window_g1

0x2fe0,	// (0x00066647) popup_mobtv_noti_window_t1

0x2fee,	// (0x00066655) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x000732de) popup_mobtv_noti_window_t

0x5004,	// (0x0006866b) bg_popup_mobtv_noti_window_pane_g1

0x0093,	// (0x000636fa) sc_clock_pane

0x0093,	// (0x000636fa) main_fs_bigclock_pane

0xd4ec,	// (0x00070b53) blid2_tripm_pane_t4_ParamLimits

0xd4ec,	// (0x00070b53) blid2_tripm_pane_t4

0xdd02,	// (0x00071369) sc_clock_pane_g1_ParamLimits

0xdd02,	// (0x00071369) sc_clock_pane_g1

0xdd10,	// (0x00071377) sc_clock_pane_t1_ParamLimits

0xdd10,	// (0x00071377) sc_clock_pane_t1

0xdd23,	// (0x0007138a) sc_clock_pane_t2_ParamLimits

0xdd23,	// (0x0007138a) sc_clock_pane_t2

0xdd35,	// (0x0007139c) sc_clock_pane_t3_ParamLimits

0xdd35,	// (0x0007139c) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x000732e3) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x000732e3) sc_clock_pane_t

0xe54d,	// (0x00071bb4) main_fs_bigclock_indicator_pane_ParamLimits

0xe54d,	// (0x00071bb4) main_fs_bigclock_indicator_pane

0xddb0,	// (0x00071417) main_fs_bigclock_pane_g1_ParamLimits

0xddb0,	// (0x00071417) main_fs_bigclock_pane_g1

0xe559,	// (0x00071bc0) main_fs_bigclock_pane_t1_ParamLimits

0xe559,	// (0x00071bc0) main_fs_bigclock_pane_t1

0xe56b,	// (0x00071bd2) main_fs_bigclock_pane_t2_ParamLimits

0xe56b,	// (0x00071bd2) main_fs_bigclock_pane_t2

0xe57d,	// (0x00071be4) main_fs_bigclock_pane_t3_ParamLimits

0xe57d,	// (0x00071be4) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x000734ed) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x000734ed) main_fs_bigclock_pane_t

0x3ae9,	// (0x00067150) main_fs_bigclock_indicator_pane_g1

0x2cb3,	// (0x0006631a) ncim_query_content_pane_g2_ParamLimits

0x2cb3,	// (0x0006631a) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00073270) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00073270) ncim_query_content_pane_g

0xdd47,	// (0x000713ae) sc_clock_pane_t4_ParamLimits

0xdd47,	// (0x000713ae) sc_clock_pane_t4

0x2251,	// (0x000658b8) main_radioblah_pane

0xc355,	// (0x0006f9bc) cell_call4_button_pane_t1_copy1_ParamLimits

0xc355,	// (0x0006f9bc) cell_call4_button_pane_t1_copy1

0xd9fc,	// (0x00071063) main_ncimui_pane_t1_ParamLimits

0xd9fc,	// (0x00071063) main_ncimui_pane_t1

0xda16,	// (0x0007107d) main_ncimui_pane_t2_ParamLimits

0xda16,	// (0x0007107d) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x00073269) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x00073269) main_ncimui_pane_t

0x312f,	// (0x00066796) main_radioblah_anim_pane_ParamLimits

0x312f,	// (0x00066796) main_radioblah_anim_pane

0x3140,	// (0x000667a7) main_radioblah_info_pane_ParamLimits

0x3140,	// (0x000667a7) main_radioblah_info_pane

0x3154,	// (0x000667bb) main_radioblah_pane_t1_ParamLimits

0x3154,	// (0x000667bb) main_radioblah_pane_t1

0x3170,	// (0x000667d7) main_radioblah_pane_t2_ParamLimits

0x3170,	// (0x000667d7) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00073304) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00073304) main_radioblah_pane_t

0xddf8,	// (0x0007145f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xddf8,	// (0x0007145f) main_radioblah_rocker_ctrl_pane

0x31b8,	// (0x0006681f) main_radioblah_info_pane_t1_ParamLimits

0x31b8,	// (0x0006681f) main_radioblah_info_pane_t1

0xde3d,	// (0x000714a4) main_radioblah_info_pane_t2_ParamLimits

0xde3d,	// (0x000714a4) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0007330d) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0007330d) main_radioblah_info_pane_t

0x5004,	// (0x0006866b) main_radioblah_rocker_ctrl_pane_g1

0xdee5,	// (0x0007154c) main_radioblah_rocker_ctrl_pane_g2

0xdeed,	// (0x00071554) main_radioblah_rocker_ctrl_pane_g3

0xdef5,	// (0x0007155c) main_radioblah_rocker_ctrl_pane_g4

0xdefd,	// (0x00071564) main_radioblah_rocker_ctrl_pane_g5

0xdf05,	// (0x0007156c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x00073316) main_radioblah_rocker_ctrl_pane_g

0xd9b3,	// (0x0007101a) main_cset_text2_pane_t1_copy1_ParamLimits

0xc3d8,	// (0x0006fa3f) cam4_image_uncrop_qvga_pane

0xc4ec,	// (0x0006fb53) vid4_image_uncrop_qcif_pane

0xd66a,	// (0x00070cd1) cam6_image_uncrop_qvga_pane_ParamLimits

0xd66a,	// (0x00070cd1) cam6_image_uncrop_qvga_pane

0x28f0,	// (0x00065f57) vid6_image_uncrop_qcif_pane_ParamLimits

0x28f0,	// (0x00065f57) vid6_image_uncrop_qcif_pane

0x0093,	// (0x000636fa) bg_popup_preview_window_pane_cp03

0x2c59,	// (0x000662c0) list_cset_text2_pane

0x2c61,	// (0x000662c8) main_cset6_text2_pane_g1

0x2c69,	// (0x000662d0) main_cset6_text2_pane_t1

0x3e89,	// (0x000674f0) list_cset_text2_pane_t1_ParamLimits

0x3e89,	// (0x000674f0) list_cset_text2_pane_t1

0x2251,	// (0x000658b8) main_radioblah_pane_ParamLimits

0xdcb0,	// (0x00071317) main_mobtv_info_pane_t3_ParamLimits

0xdcb0,	// (0x00071317) main_mobtv_info_pane_t3

0xdde6,	// (0x0007144d) main_radioblah_pane_g1

0xde11,	// (0x00071478) main_radioblah_info_pane_g1

0xde8c,	// (0x000714f3) main_radioblah_info_pane_t3_ParamLimits

0xde8c,	// (0x000714f3) main_radioblah_info_pane_t3

0x96b1,	// (0x0006cd18) highlight_cell_cale_month_pane_ParamLimits

0x96b1,	// (0x0006cd18) highlight_cell_cale_month_pane

0x0093,	// (0x000636fa) main_phob_fisheye_pane

0x530f,	// (0x00068976) scroll_pane_cp0031_ParamLimits

0x530f,	// (0x00068976) scroll_pane_cp0031

0x29fa,	// (0x00066061) wait_bar_pane_cp08_ParamLimits

0xd7fb,	// (0x00070e62) cset_list_set_pane_copy1_ParamLimits

0x31f2,	// (0x00066859) highlight_cell_cale_month_pane_g1

0xdf0d,	// (0x00071574) highlight_cell_cale_month_pane_t1

0x31fa,	// (0x00066861) list_gen_pane_cp01

0xefad,	// (0x00072614) scroll_pane_01

0xdf1b,	// (0x00071582) list_single_double_fisheye_pane

0x6de2,	// (0x0006a449) list_double_fisheye_pane_g1_ParamLimits

0x6de2,	// (0x0006a449) list_double_fisheye_pane_g1

0xdf24,	// (0x0007158b) list_double_fisheye_pane_g2_ParamLimits

0xdf24,	// (0x0007158b) list_double_fisheye_pane_g2

0xdf38,	// (0x0007159f) list_double_fisheye_pane_g3_ParamLimits

0xdf38,	// (0x0007159f) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x00073323) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x00073323) list_double_fisheye_pane_g

0x6dfa,	// (0x0006a461) list_double_fisheye_pane_t1_ParamLimits

0x6dfa,	// (0x0006a461) list_double_fisheye_pane_t1

0x6e15,	// (0x0006a47c) list_double_fisheye_pane_t2_ParamLimits

0x6e15,	// (0x0006a47c) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0007332e) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0007332e) list_double_fisheye_pane_t

0x0093,	// (0x000636fa) main_call5_pane

0xdd6d,	// (0x000713d4) sc_swipe_pane_ParamLimits

0xdd6d,	// (0x000713d4) sc_swipe_pane

0xdf61,	// (0x000715c8) call5_image_pane_ParamLimits

0xdf61,	// (0x000715c8) call5_image_pane

0xdf6d,	// (0x000715d4) call5_swipe_1_pane_ParamLimits

0xdf6d,	// (0x000715d4) call5_swipe_1_pane

0xdf79,	// (0x000715e0) call5_swipe_2_pane_ParamLimits

0xdf79,	// (0x000715e0) call5_swipe_2_pane

0xdf91,	// (0x000715f8) popup_call5_audio_first_window_ParamLimits

0xdf91,	// (0x000715f8) popup_call5_audio_first_window

0x5233,	// (0x0006889a) call5_swipe_1_pane_g1_ParamLimits

0x5233,	// (0x0006889a) call5_swipe_1_pane_g1

0x3292,	// (0x000668f9) call5_swipe_1_pane_g2_ParamLimits

0x3292,	// (0x000668f9) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00073333) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00073333) call5_swipe_1_pane_g

0x329e,	// (0x00066905) call5_swipe_1_pane_t1_ParamLimits

0x329e,	// (0x00066905) call5_swipe_1_pane_t1

0x5233,	// (0x0006889a) call5_swipe_2_pane_g1_ParamLimits

0x5233,	// (0x0006889a) call5_swipe_2_pane_g1

0x32b3,	// (0x0006691a) call5_swipe_2_pane_g2_ParamLimits

0x32b3,	// (0x0006691a) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x00073338) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x00073338) call5_swipe_2_pane_g

0x32bf,	// (0x00066926) call5_swipe_2_pane_t1_ParamLimits

0x32bf,	// (0x00066926) call5_swipe_2_pane_t1

0x32d4,	// (0x0006693b) sc_swipe_pane_g1_ParamLimits

0x32d4,	// (0x0006693b) sc_swipe_pane_g1

0x32e1,	// (0x00066948) sc_swipe_pane_g2_ParamLimits

0x32e1,	// (0x00066948) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0007333d) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0007333d) sc_swipe_pane_g

0x32ed,	// (0x00066954) sc_swipe_pane_t1_ParamLimits

0x32ed,	// (0x00066954) sc_swipe_pane_t1

0x0093,	// (0x000636fa) main_cmail_launcher_pane

0xdf9d,	// (0x00071604) aid_size_cell_cmail_l_ParamLimits

0xdf9d,	// (0x00071604) aid_size_cell_cmail_l

0xdfad,	// (0x00071614) grid_cmail_l_pane_ParamLimits

0xdfad,	// (0x00071614) grid_cmail_l_pane

0xdfb9,	// (0x00071620) cell_cmail_l_pane_ParamLimits

0xdfb9,	// (0x00071620) cell_cmail_l_pane

0xdfcb,	// (0x00071632) cell_cmail_l_pane_g1_ParamLimits

0xdfcb,	// (0x00071632) cell_cmail_l_pane_g1

0xdfdb,	// (0x00071642) cell_cmail_l_pane_t1_ParamLimits

0xdfdb,	// (0x00071642) cell_cmail_l_pane_t1

0xdff1,	// (0x00071658) cell_cmail_l_pane_t2_ParamLimits

0xdff1,	// (0x00071658) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00073342) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00073342) cell_cmail_l_pane_t

0x2251,	// (0x000658b8) grid_highlight_pane_cp018_ParamLimits

0x2251,	// (0x000658b8) grid_highlight_pane_cp018

0x79a5,	// (0x0006b00c) main2_pane_ParamLimits

0x79a5,	// (0x0006b00c) main2_pane

0x0960,	// (0x00063fc7) popup_sp_fs_action_menu_bg_pane_g1

0x0968,	// (0x00063fcf) popup_sp_fs_action_menu_bg_pane_g2

0x0970,	// (0x00063fd7) popup_sp_fs_action_menu_bg_pane_g3

0x0978,	// (0x00063fdf) popup_sp_fs_action_menu_bg_pane_g4

0x0980,	// (0x00063fe7) popup_sp_fs_action_menu_bg_pane_g5

0x0988,	// (0x00063fef) popup_sp_fs_action_menu_bg_pane_g6

0x0990,	// (0x00063ff7) popup_sp_fs_action_menu_bg_pane_g7

0x0998,	// (0x00063fff) popup_sp_fs_action_menu_bg_pane_g8

0x09a0,	// (0x00064007) popup_sp_fs_action_menu_bg_pane_g9

0x09a8,	// (0x0006400f) popup_sp_fs_action_menu_bg_pane_g10

0x09a8,	// (0x0006400f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000727ed) popup_sp_fs_action_menu_bg_pane_g

0x6675,	// (0x00069cdc) list_medium_line_x2_t3_g3_g1_ParamLimits

0x6675,	// (0x00069cdc) list_medium_line_x2_t3_g3_g1

0x884c,	// (0x0006beb3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x884c,	// (0x0006beb3) list_medium_line_x2_t3_g3_g2

0x6681,	// (0x00069ce8) list_medium_line_x2_t3_g3_g3_ParamLimits

0x6681,	// (0x00069ce8) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0007289b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0007289b) list_medium_line_x2_t3_g3_g

0x668d,	// (0x00069cf4) list_medium_line_x2_t3_g3_t1_ParamLimits

0x668d,	// (0x00069cf4) list_medium_line_x2_t3_g3_t1

0x66a2,	// (0x00069d09) list_medium_line_x2_t3_g3_t2_ParamLimits

0x66a2,	// (0x00069d09) list_medium_line_x2_t3_g3_t2

0x66b4,	// (0x00069d1b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x66b4,	// (0x00069d1b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x000728a2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x000728a2) list_medium_line_x2_t3_g3_t

0x6675,	// (0x00069cdc) list_medium_line_x2_t3_g2_g1_ParamLimits

0x6675,	// (0x00069cdc) list_medium_line_x2_t3_g2_g1

0x6681,	// (0x00069ce8) list_medium_line_x2_t3_g2_g2_ParamLimits

0x6681,	// (0x00069ce8) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x000728a9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x000728a9) list_medium_line_x2_t3_g2_g

0x66c9,	// (0x00069d30) list_medium_line_x2_t3_g2_t1_ParamLimits

0x66c9,	// (0x00069d30) list_medium_line_x2_t3_g2_t1

0x66df,	// (0x00069d46) list_medium_line_x2_t3_g2_t2_ParamLimits

0x66df,	// (0x00069d46) list_medium_line_x2_t3_g2_t2

0x66b4,	// (0x00069d1b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x66b4,	// (0x00069d1b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x000728ae) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x000728ae) list_medium_line_x2_t3_g2_t

0x6675,	// (0x00069cdc) list_medium_line_x2_t4_g4_g1_ParamLimits

0x6675,	// (0x00069cdc) list_medium_line_x2_t4_g4_g1

0x8858,	// (0x0006bebf) list_medium_line_x2_t4_g4_g2_ParamLimits

0x8858,	// (0x0006bebf) list_medium_line_x2_t4_g4_g2

0x884c,	// (0x0006beb3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x884c,	// (0x0006beb3) list_medium_line_x2_t4_g4_g3

0x66f1,	// (0x00069d58) list_medium_line_x2_t4_g4_g4_ParamLimits

0x66f1,	// (0x00069d58) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x000728b5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x000728b5) list_medium_line_x2_t4_g4_g

0x66fd,	// (0x00069d64) list_medium_line_x2_t4_g4_t1_ParamLimits

0x66fd,	// (0x00069d64) list_medium_line_x2_t4_g4_t1

0x6717,	// (0x00069d7e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6717,	// (0x00069d7e) list_medium_line_x2_t4_g4_t2

0x672c,	// (0x00069d93) list_medium_line_x2_t4_g4_t3_ParamLimits

0x672c,	// (0x00069d93) list_medium_line_x2_t4_g4_t3

0x6741,	// (0x00069da8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x6741,	// (0x00069da8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x000728be) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x000728be) list_medium_line_x2_t4_g4_t

0x6675,	// (0x00069cdc) list_medium_line_x2_t2_g4_g1_ParamLimits

0x6675,	// (0x00069cdc) list_medium_line_x2_t2_g4_g1

0x8858,	// (0x0006bebf) list_medium_line_x2_t2_g4_g2_ParamLimits

0x8858,	// (0x0006bebf) list_medium_line_x2_t2_g4_g2

0x884c,	// (0x0006beb3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x884c,	// (0x0006beb3) list_medium_line_x2_t2_g4_g3

0x6681,	// (0x00069ce8) list_medium_line_x2_t2_g4_g4_ParamLimits

0x6681,	// (0x00069ce8) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x00072925) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x00072925) list_medium_line_x2_t2_g4_g

0x6753,	// (0x00069dba) list_medium_line_x2_t2_g4_t1_ParamLimits

0x6753,	// (0x00069dba) list_medium_line_x2_t2_g4_t1

0x66b4,	// (0x00069d1b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x66b4,	// (0x00069d1b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0007292e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0007292e) list_medium_line_x2_t2_g4_t

0x6675,	// (0x00069cdc) list_medium_line_x2_t2_g3_g1_ParamLimits

0x6675,	// (0x00069cdc) list_medium_line_x2_t2_g3_g1

0x884c,	// (0x0006beb3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x884c,	// (0x0006beb3) list_medium_line_x2_t2_g3_g2

0x6681,	// (0x00069ce8) list_medium_line_x2_t2_g3_g3_ParamLimits

0x6681,	// (0x00069ce8) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0007289b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0007289b) list_medium_line_x2_t2_g3_g

0x6768,	// (0x00069dcf) list_medium_line_x2_t2_g3_t1_ParamLimits

0x6768,	// (0x00069dcf) list_medium_line_x2_t2_g3_t1

0x66b4,	// (0x00069d1b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x66b4,	// (0x00069d1b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x00072933) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x00072933) list_medium_line_x2_t2_g3_t

0x9843,	// (0x0006ceaa) main_sp_fs_list_pane_ParamLimits

0x9843,	// (0x0006ceaa) main_sp_fs_list_pane

0x9850,	// (0x0006ceb7) sp_fs_scroll_pane_ParamLimits

0x9850,	// (0x0006ceb7) sp_fs_scroll_pane

0x677d,	// (0x00069de4) list_medium_line_x2_t3_t1

0x678d,	// (0x00069df4) list_medium_line_x2_t3_t2

0x679b,	// (0x00069e02) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0007297e) list_medium_line_x2_t3_t

0x67a9,	// (0x00069e10) list_medium_line_x3_t4_t1

0x67b9,	// (0x00069e20) list_medium_line_x3_t4_t2

0x67c7,	// (0x00069e2e) list_medium_line_x3_t4_t3

0x67d5,	// (0x00069e3c) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x00072985) list_medium_line_x3_t4_t

0x67e3,	// (0x00069e4a) list_medium_line_x4_t5_t1

0x67f3,	// (0x00069e5a) list_medium_line_x4_t5_t2

0x67c7,	// (0x00069e2e) list_medium_line_x4_t5_t3

0x6801,	// (0x00069e68) list_medium_line_x4_t5_t4

0x67d5,	// (0x00069e3c) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0007298e) list_medium_line_x4_t5_t

0x6675,	// (0x00069cdc) list_medium_line_t4_g4_g1_ParamLimits

0x6675,	// (0x00069cdc) list_medium_line_t4_g4_g1

0x66f1,	// (0x00069d58) list_medium_line_t4_g4_g2_ParamLimits

0x66f1,	// (0x00069d58) list_medium_line_t4_g4_g2

0x680f,	// (0x00069e76) list_medium_line_t4_g4_g3_ParamLimits

0x680f,	// (0x00069e76) list_medium_line_t4_g4_g3

0x6681,	// (0x00069ce8) list_medium_line_t4_g4_g4_ParamLimits

0x6681,	// (0x00069ce8) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x00072999) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x00072999) list_medium_line_t4_g4_g

0x681b,	// (0x00069e82) list_medium_line_t4_g4_t1_ParamLimits

0x681b,	// (0x00069e82) list_medium_line_t4_g4_t1

0x6830,	// (0x00069e97) list_medium_line_t4_g4_t2_ParamLimits

0x6830,	// (0x00069e97) list_medium_line_t4_g4_t2

0x6846,	// (0x00069ead) list_medium_line_t4_g4_t3_ParamLimits

0x6846,	// (0x00069ead) list_medium_line_t4_g4_t3

0x685c,	// (0x00069ec3) list_medium_line_t4_g4_t4_ParamLimits

0x685c,	// (0x00069ec3) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x000729a2) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x000729a2) list_medium_line_t4_g4_t

0x996b,	// (0x0006cfd2) chi_dic_find_pane_g1

0xa656,	// (0x0006dcbd) main_tport_pane

0x6a9c,	// (0x0006a103) list_medium_line_plain_t1

0x6aaa,	// (0x0006a111) list_medium_line_t2_g2_g1_ParamLimits

0x6aaa,	// (0x0006a111) list_medium_line_t2_g2_g1

0xce5f,	// (0x000704c6) list_medium_line_t2_g2_g2_ParamLimits

0xce5f,	// (0x000704c6) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0007307a) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0007307a) list_medium_line_t2_g2_g

0x6ab6,	// (0x0006a11d) list_medium_line_t2_g2_t1_ParamLimits

0x6ab6,	// (0x0006a11d) list_medium_line_t2_g2_t1

0x6ad0,	// (0x0006a137) list_medium_line_t2_g2_t2_ParamLimits

0x6ad0,	// (0x0006a137) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0007307f) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0007307f) list_medium_line_t2_g2_t

0x6ce3,	// (0x0006a34a) aid_sp_fs_list_icon_a_sm

0xd319,	// (0x00070980) aid_sp_fs_list_icon_d

0x6ceb,	// (0x0006a352) aid_sp_fs_text_primary

0xd321,	// (0x00070988) aid_sp_fs_text_secondary

0x26b8,	// (0x00065d1f) list_medium_line

0x26b8,	// (0x00065d1f) list_medium_line_g2

0x26b8,	// (0x00065d1f) list_medium_line_g3

0x26b8,	// (0x00065d1f) list_medium_line_plain

0x26b8,	// (0x00065d1f) list_medium_line_plain_t2

0x26b8,	// (0x00065d1f) list_medium_line_plain_t3

0x26b8,	// (0x00065d1f) list_medium_line_right_icon

0x26b8,	// (0x00065d1f) list_medium_line_right_iconx2

0x26b8,	// (0x00065d1f) list_medium_line_t2

0x26b8,	// (0x00065d1f) list_medium_line_t2_g2

0x26b8,	// (0x00065d1f) list_medium_line_t2_g3

0x26b8,	// (0x00065d1f) list_medium_line_t2_right_icon

0x26b8,	// (0x00065d1f) list_medium_line_t2_right_iconx2

0x26b8,	// (0x00065d1f) list_medium_line_t3

0x26b8,	// (0x00065d1f) list_medium_line_t3_g2

0x26b8,	// (0x00065d1f) list_medium_line_t3_g3

0x26b8,	// (0x00065d1f) list_medium_line_t3_right_iconx2

0xd32a,	// (0x00070991) list_medium_line_t4_g4

0xd333,	// (0x0007099a) list_medium_line_x2

0xd333,	// (0x0007099a) list_medium_line_x2_t2_g2

0xd333,	// (0x0007099a) list_medium_line_x2_t2_g3

0xd333,	// (0x0007099a) list_medium_line_x2_t2_g4

0xd333,	// (0x0007099a) list_medium_line_x2_t3

0xd333,	// (0x0007099a) list_medium_line_x2_t3_g2

0xd333,	// (0x0007099a) list_medium_line_x2_t3_g3

0xd333,	// (0x0007099a) list_medium_line_x2_t3_g4

0xd333,	// (0x0007099a) list_medium_line_x2_t4_g2

0xd333,	// (0x0007099a) list_medium_line_x2_t4_g4

0xd33c,	// (0x000709a3) list_medium_line_x3

0xd33c,	// (0x000709a3) list_medium_line_x3_t4

0xd33c,	// (0x000709a3) list_medium_line_x3_t4_g4

0xd32a,	// (0x00070991) list_medium_line_x4_t4

0xd32a,	// (0x00070991) list_medium_line_x4_t4_g7

0xd32a,	// (0x00070991) list_medium_line_x4_t5

0x6cf4,	// (0x0006a35b) list_single_fs_dyc_pane_ParamLimits

0x6cf4,	// (0x0006a35b) list_single_fs_dyc_pane

0x6675,	// (0x00069cdc) list_medium_line_x4_t4_g7_g1_ParamLimits

0x6675,	// (0x00069cdc) list_medium_line_x4_t4_g7_g1

0x6d2c,	// (0x0006a393) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6d2c,	// (0x0006a393) list_medium_line_x4_t4_g7_g2

0xd998,	// (0x00070fff) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd998,	// (0x00070fff) list_medium_line_x4_t4_g7_g3

0xd9a7,	// (0x0007100e) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd9a7,	// (0x0007100e) list_medium_line_x4_t4_g7_g4

0x6d38,	// (0x0006a39f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x6d38,	// (0x0006a39f) list_medium_line_x4_t4_g7_g5

0x6d47,	// (0x0006a3ae) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6d47,	// (0x0006a3ae) list_medium_line_x4_t4_g7_g6

0x6d56,	// (0x0006a3bd) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6d56,	// (0x0006a3bd) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0007324a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0007324a) list_medium_line_x4_t4_g7_g

0x6d62,	// (0x0006a3c9) list_medium_line_x4_t4_g7_t1_ParamLimits

0x6d62,	// (0x0006a3c9) list_medium_line_x4_t4_g7_t1

0x6d77,	// (0x0006a3de) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6d77,	// (0x0006a3de) list_medium_line_x4_t4_g7_t2

0x6d8c,	// (0x0006a3f3) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6d8c,	// (0x0006a3f3) list_medium_line_x4_t4_g7_t3

0x6da1,	// (0x0006a408) list_medium_line_x4_t4_g7_t4_ParamLimits

0x6da1,	// (0x0006a408) list_medium_line_x4_t4_g7_t4

0x6db3,	// (0x0006a41a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6db3,	// (0x0006a41a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x00073259) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x00073259) list_medium_line_x4_t4_g7_t

0x6dc5,	// (0x0006a42c) list_single_dyc_row_pane_ParamLimits

0x6dc5,	// (0x0006a42c) list_single_dyc_row_pane

0xdf55,	// (0x000715bc) call5_gesture_pane_ParamLimits

0xdf55,	// (0x000715bc) call5_gesture_pane

0xdf85,	// (0x000715ec) call5_windows_pane_ParamLimits

0xdf85,	// (0x000715ec) call5_windows_pane

0xe009,	// (0x00071670) call5_swipe_1_pane_cp_ParamLimits

0xe009,	// (0x00071670) call5_swipe_1_pane_cp

0xe015,	// (0x0007167c) call5_swipe_2_pane_cp_ParamLimits

0xe015,	// (0x0007167c) call5_swipe_2_pane_cp

0x0acc,	// (0x00064133) call5_image_pane_cp

0xe021,	// (0x00071688) popup_call5_audio_first_window_cp_ParamLimits

0xe021,	// (0x00071688) popup_call5_audio_first_window_cp

0x32d4,	// (0x0006693b) call5_swipe_1_pane_g1_cp_ParamLimits

0x32d4,	// (0x0006693b) call5_swipe_1_pane_g1_cp

0x3302,	// (0x00066969) call5_swipe_1_pane_g2_cp

0x32ed,	// (0x00066954) call5_swipe_1_pane_t1_cp_ParamLimits

0x32ed,	// (0x00066954) call5_swipe_1_pane_t1_cp

0x32d4,	// (0x0006693b) call5_swipe_2_pane_g1_cp_ParamLimits

0x32d4,	// (0x0006693b) call5_swipe_2_pane_g1_cp

0x330a,	// (0x00066971) call5_swipe_2_pane_g2_cp

0x3312,	// (0x00066979) call5_swipe_2_pane_t1_cp_ParamLimits

0x3312,	// (0x00066979) call5_swipe_2_pane_t1_cp

0x2251,	// (0x000658b8) main_sp_fs_email_pane

0x3327,	// (0x0006698e) main_sp_fs_listscroll_pane_te

0x6e37,	// (0x0006a49e) popup_sp_fs_action_menu_pane_ParamLimits

0x6e37,	// (0x0006a49e) popup_sp_fs_action_menu_pane

0x5004,	// (0x0006866b) bg_sp_fs_ctrlbar_pane_g1

0x5590,	// (0x00068bf7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x55a2,	// (0x00068c09) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x5599,	// (0x00068c00) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x5004,	// (0x0006866b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x00073347) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4df1,	// (0x00068458) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4df1,	// (0x00068458) bg_sp_fs_ctrlbar_ddmenu_pane

0x3330,	// (0x00066997) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3330,	// (0x00066997) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x333c,	// (0x000669a3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x333c,	// (0x000669a3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x00073350) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x00073350) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3348,	// (0x000669af) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3348,	// (0x000669af) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe02d,	// (0x00071694) list_medium_line_t2_right_icon_g1

0x6e6b,	// (0x0006a4d2) list_medium_line_t2_right_icon_t1

0x6e7a,	// (0x0006a4e1) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x00073355) list_medium_line_t2_right_icon_t

0x4bf2,	// (0x00068259) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4bf2,	// (0x00068259) bg_sp_fs_ctrlbar_pane

0xe08a,	// (0x000716f1) main_sp_fs_ctrlbar_button_pane_cp01

0xe092,	// (0x000716f9) main_sp_fs_ctrlbar_ddmenu_pane

0x339a,	// (0x00066a01) main_sp_fs_ctrlbar_pane_g1

0x33a6,	// (0x00066a0d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0007335a) main_sp_fs_ctrlbar_pane_g

0x33b2,	// (0x00066a19) main_sp_fs_ctrlbar_pane_t1

0xe09c,	// (0x00071703) main_sp_fs_ctrlbar_pane

0xe0b0,	// (0x00071717) main_sp_fs_listscroll_pane_te_cp01

0x6e88,	// (0x0006a4ef) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6e88,	// (0x0006a4ef) popup_sp_fs_action_menu_pane_cp01

0x2251,	// (0x000658b8) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2251,	// (0x000658b8) bg_sp_fs_highlight_list_pane_cp01

0x6eb2,	// (0x0006a519) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6eb2,	// (0x0006a519) sp_fs_action_menu_list_gene_pane_g1

0x33e2,	// (0x00066a49) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x33e2,	// (0x00066a49) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x00073364) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x00073364) sp_fs_action_menu_list_gene_pane_g

0x6ec1,	// (0x0006a528) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6ec1,	// (0x0006a528) sp_fs_action_menu_list_gene_pane_t1

0x6ed9,	// (0x0006a540) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6ed9,	// (0x0006a540) sp_fs_action_menu_list_gene_pane

0x33ef,	// (0x00066a56) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x33ef,	// (0x00066a56) popup_sp_fs_action_menu_bg_pane

0x6ef8,	// (0x0006a55f) sp_fs_action_menu_list_pane_ParamLimits

0x6ef8,	// (0x0006a55f) sp_fs_action_menu_list_pane

0x33fd,	// (0x00066a64) sp_fs_scroll_pane_cp01_ParamLimits

0x33fd,	// (0x00066a64) sp_fs_scroll_pane_cp01

0x6f18,	// (0x0006a57f) list_medium_line_plain_t2_t1

0x6f27,	// (0x0006a58e) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x00073369) list_medium_line_plain_t2_t

0x6f35,	// (0x0006a59c) list_medium_line_plain_t3_t1

0x6f45,	// (0x0006a5ac) list_medium_line_plain_t3_t2

0x6f53,	// (0x0006a5ba) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0007336e) list_medium_line_plain_t3_t

0x6675,	// (0x00069cdc) list_medium_line_x2_t2_g2_g1_ParamLimits

0x6675,	// (0x00069cdc) list_medium_line_x2_t2_g2_g1

0x6681,	// (0x00069ce8) list_medium_line_x2_t2_g2_g2_ParamLimits

0x6681,	// (0x00069ce8) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x000728a9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x000728a9) list_medium_line_x2_t2_g2_g

0x681b,	// (0x00069e82) list_medium_line_x2_t2_g2_t1_ParamLimits

0x681b,	// (0x00069e82) list_medium_line_x2_t2_g2_t1

0x66b4,	// (0x00069d1b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x66b4,	// (0x00069d1b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x00073375) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x00073375) list_medium_line_x2_t2_g2_t

0x6675,	// (0x00069cdc) list_medium_line_x2_t4_g2_g1_ParamLimits

0x6675,	// (0x00069cdc) list_medium_line_x2_t4_g2_g1

0x6f61,	// (0x0006a5c8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x6f61,	// (0x0006a5c8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0007337a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0007337a) list_medium_line_x2_t4_g2_g

0x6f72,	// (0x0006a5d9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6f72,	// (0x0006a5d9) list_medium_line_x2_t4_g2_t1

0x6f8c,	// (0x0006a5f3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6f8c,	// (0x0006a5f3) list_medium_line_x2_t4_g2_t2

0x6fa1,	// (0x0006a608) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6fa1,	// (0x0006a608) list_medium_line_x2_t4_g2_t3

0x66b4,	// (0x00069d1b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x66b4,	// (0x00069d1b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0007337f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0007337f) list_medium_line_x2_t4_g2_t

0xe0c1,	// (0x00071728) list_medium_line_t3_right_iconx2_g1

0xe02d,	// (0x00071694) list_medium_line_t3_right_iconx2_g2

0x6fb6,	// (0x0006a61d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x00073388) list_medium_line_t3_right_iconx2_g

0x6fbe,	// (0x0006a625) list_medium_line_t3_right_iconx2_t1

0x6fce,	// (0x0006a635) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0007338f) list_medium_line_t3_right_iconx2_t

0x6675,	// (0x00069cdc) list_medium_line_x3_t4_g4_g1_ParamLimits

0x6675,	// (0x00069cdc) list_medium_line_x3_t4_g4_g1

0x884c,	// (0x0006beb3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x884c,	// (0x0006beb3) list_medium_line_x3_t4_g4_g2

0x66f1,	// (0x00069d58) list_medium_line_x3_t4_g4_g3_ParamLimits

0x66f1,	// (0x00069d58) list_medium_line_x3_t4_g4_g3

0xe0c9,	// (0x00071730) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe0c9,	// (0x00071730) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x00073394) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x00073394) list_medium_line_x3_t4_g4_g

0x6fdc,	// (0x0006a643) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6fdc,	// (0x0006a643) list_medium_line_x3_t4_g4_t1

0x6ff3,	// (0x0006a65a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6ff3,	// (0x0006a65a) list_medium_line_x3_t4_g4_t2

0x7008,	// (0x0006a66f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7008,	// (0x0006a66f) list_medium_line_x3_t4_g4_t3

0x701d,	// (0x0006a684) list_medium_line_x3_t4_g4_t4_ParamLimits

0x701d,	// (0x0006a684) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0007339d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0007339d) list_medium_line_x3_t4_g4_t

0x703a,	// (0x0006a6a1) list_single_dyc_row_text_pane_t1_ParamLimits

0x703a,	// (0x0006a6a1) list_single_dyc_row_text_pane_t1

0x7071,	// (0x0006a6d8) list_single_dyc_row_text_pane_t2_ParamLimits

0x7071,	// (0x0006a6d8) list_single_dyc_row_text_pane_t2

0x70e5,	// (0x0006a74c) list_single_dyc_row_text_pane_t3_ParamLimits

0x70e5,	// (0x0006a74c) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x000733a6) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x000733a6) list_single_dyc_row_text_pane_t

0x71b5,	// (0x0006a81c) list_single_dyc_row_pane_g1_ParamLimits

0x71b5,	// (0x0006a81c) list_single_dyc_row_pane_g1

0x71c1,	// (0x0006a828) list_single_dyc_row_pane_g2_ParamLimits

0x71c1,	// (0x0006a828) list_single_dyc_row_pane_g2

0x71cd,	// (0x0006a834) list_single_dyc_row_pane_g3_ParamLimits

0x71cd,	// (0x0006a834) list_single_dyc_row_pane_g3

0x71d9,	// (0x0006a840) list_single_dyc_row_pane_g4_ParamLimits

0x71d9,	// (0x0006a840) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x000733b3) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x000733b3) list_single_dyc_row_pane_g

0x71e5,	// (0x0006a84c) list_single_dyc_row_text_pane_ParamLimits

0x71e5,	// (0x0006a84c) list_single_dyc_row_text_pane

0x0093,	// (0x000636fa) bg_sp_fs_scroll_pane

0x34e6,	// (0x00066b4d) thumb_sp_fs_scroll_pane

0x6aaa,	// (0x0006a111) list_medium_line_g1_ParamLimits

0x6aaa,	// (0x0006a111) list_medium_line_g1

0x7204,	// (0x0006a86b) list_medium_line_t1_ParamLimits

0x7204,	// (0x0006a86b) list_medium_line_t1

0x6675,	// (0x00069cdc) list_medium_line_x2_g1_ParamLimits

0x6675,	// (0x00069cdc) list_medium_line_x2_g1

0x884c,	// (0x0006beb3) list_medium_line_x2_g2_ParamLimits

0x884c,	// (0x0006beb3) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x000733bc) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x000733bc) list_medium_line_x2_g

0x7219,	// (0x0006a880) list_medium_line_x2_t1_ParamLimits

0x7219,	// (0x0006a880) list_medium_line_x2_t1

0x6675,	// (0x00069cdc) list_medium_line_x3_g1_ParamLimits

0x6675,	// (0x00069cdc) list_medium_line_x3_g1

0x884c,	// (0x0006beb3) list_medium_line_x3_g2_ParamLimits

0x884c,	// (0x0006beb3) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x000733bc) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x000733bc) list_medium_line_x3_g

0x7219,	// (0x0006a880) list_medium_line_x3_t1_ParamLimits

0x7219,	// (0x0006a880) list_medium_line_x3_t1

0x3505,	// (0x00066b6c) thumb_sp_fs_scroll_pane_g1

0x350e,	// (0x00066b75) thumb_sp_fs_scroll_pane_g2

0x3517,	// (0x00066b7e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x000733c1) thumb_sp_fs_scroll_pane_g

0x3505,	// (0x00066b6c) bg_sp_fs_scroll_pane_g1

0x350e,	// (0x00066b75) bg_sp_fs_scroll_pane_g2

0x3517,	// (0x00066b7e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x000733c1) bg_sp_fs_scroll_pane_g

0x6675,	// (0x00069cdc) list_medium_line_x2_t3_g4_g1_ParamLimits

0x6675,	// (0x00069cdc) list_medium_line_x2_t3_g4_g1

0x8858,	// (0x0006bebf) list_medium_line_x2_t3_g4_g2_ParamLimits

0x8858,	// (0x0006bebf) list_medium_line_x2_t3_g4_g2

0x884c,	// (0x0006beb3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x884c,	// (0x0006beb3) list_medium_line_x2_t3_g4_g3

0x6681,	// (0x00069ce8) list_medium_line_x2_t3_g4_g4_ParamLimits

0x6681,	// (0x00069ce8) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x00072925) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x00072925) list_medium_line_x2_t3_g4_g

0x722f,	// (0x0006a896) list_medium_line_x2_t3_g4_t1_ParamLimits

0x722f,	// (0x0006a896) list_medium_line_x2_t3_g4_t1

0x7245,	// (0x0006a8ac) list_medium_line_x2_t3_g4_t2_ParamLimits

0x7245,	// (0x0006a8ac) list_medium_line_x2_t3_g4_t2

0x66b4,	// (0x00069d1b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x66b4,	// (0x00069d1b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x000733c8) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x000733c8) list_medium_line_x2_t3_g4_t

0x6aaa,	// (0x0006a111) list_medium_line_g2_g1_ParamLimits

0x6aaa,	// (0x0006a111) list_medium_line_g2_g1

0xce5f,	// (0x000704c6) list_medium_line_g2_g2_ParamLimits

0xce5f,	// (0x000704c6) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0007307a) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0007307a) list_medium_line_g2_g

0x725e,	// (0x0006a8c5) list_medium_line_g2_t1_ParamLimits

0x725e,	// (0x0006a8c5) list_medium_line_g2_t1

0x6aaa,	// (0x0006a111) list_medium_line_t3_g2_g1_ParamLimits

0x6aaa,	// (0x0006a111) list_medium_line_t3_g2_g1

0xce5f,	// (0x000704c6) list_medium_line_t3_g2_g2_ParamLimits

0xce5f,	// (0x000704c6) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0007307a) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0007307a) list_medium_line_t3_g2_g

0x7273,	// (0x0006a8da) list_medium_line_t3_g2_t1_ParamLimits

0x7273,	// (0x0006a8da) list_medium_line_t3_g2_t1

0x728d,	// (0x0006a8f4) list_medium_line_t3_g2_t2_ParamLimits

0x728d,	// (0x0006a8f4) list_medium_line_t3_g2_t2

0x72a2,	// (0x0006a909) list_medium_line_t3_g2_t3_ParamLimits

0x72a2,	// (0x0006a909) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x000733cf) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x000733cf) list_medium_line_t3_g2_t

0xe02d,	// (0x00071694) list_medium_line_right_icon_g1

0x72b8,	// (0x0006a91f) list_medium_line_right_icon_t1

0x6aaa,	// (0x0006a111) list_medium_line_t2_g1_ParamLimits

0x6aaa,	// (0x0006a111) list_medium_line_t2_g1

0x72c6,	// (0x0006a92d) list_medium_line_t2_t1_ParamLimits

0x72c6,	// (0x0006a92d) list_medium_line_t2_t1

0x72e0,	// (0x0006a947) list_medium_line_t2_t2_ParamLimits

0x72e0,	// (0x0006a947) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x000733d6) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x000733d6) list_medium_line_t2_t

0x6aaa,	// (0x0006a111) list_medium_line_t3_g1_ParamLimits

0x6aaa,	// (0x0006a111) list_medium_line_t3_g1

0x72f5,	// (0x0006a95c) list_medium_line_t3_t1_ParamLimits

0x72f5,	// (0x0006a95c) list_medium_line_t3_t1

0x730f,	// (0x0006a976) list_medium_line_t3_t2_ParamLimits

0x730f,	// (0x0006a976) list_medium_line_t3_t2

0x7324,	// (0x0006a98b) list_medium_line_t3_t3_ParamLimits

0x7324,	// (0x0006a98b) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x000733db) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x000733db) list_medium_line_t3_t

0x6aaa,	// (0x0006a111) list_medium_line_g3_g1_ParamLimits

0x6aaa,	// (0x0006a111) list_medium_line_g3_g1

0xe0d5,	// (0x0007173c) list_medium_line_g3_g2_ParamLimits

0xe0d5,	// (0x0007173c) list_medium_line_g3_g2

0xce5f,	// (0x000704c6) list_medium_line_g3_g3_ParamLimits

0xce5f,	// (0x000704c6) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x000733e2) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x000733e2) list_medium_line_g3_g

0x7339,	// (0x0006a9a0) list_medium_line_g3_t1_ParamLimits

0x7339,	// (0x0006a9a0) list_medium_line_g3_t1

0x6aaa,	// (0x0006a111) list_medium_line_t2_g3_g1_ParamLimits

0x6aaa,	// (0x0006a111) list_medium_line_t2_g3_g1

0xe0d5,	// (0x0007173c) list_medium_line_t2_g3_g2_ParamLimits

0xe0d5,	// (0x0007173c) list_medium_line_t2_g3_g2

0xce5f,	// (0x000704c6) list_medium_line_t2_g3_g3_ParamLimits

0xce5f,	// (0x000704c6) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x000733e2) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x000733e2) list_medium_line_t2_g3_g

0x734e,	// (0x0006a9b5) list_medium_line_t2_g3_t1_ParamLimits

0x734e,	// (0x0006a9b5) list_medium_line_t2_g3_t1

0x7365,	// (0x0006a9cc) list_medium_line_t2_g3_t2_ParamLimits

0x7365,	// (0x0006a9cc) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x000733e9) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x000733e9) list_medium_line_t2_g3_t

0x6aaa,	// (0x0006a111) list_medium_line_t3_g3_g1_ParamLimits

0x6aaa,	// (0x0006a111) list_medium_line_t3_g3_g1

0xe0d5,	// (0x0007173c) list_medium_line_t3_g3_g2_ParamLimits

0xe0d5,	// (0x0007173c) list_medium_line_t3_g3_g2

0xce5f,	// (0x000704c6) list_medium_line_t3_g3_g3_ParamLimits

0xce5f,	// (0x000704c6) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x000733e2) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x000733e2) list_medium_line_t3_g3_g

0x737a,	// (0x0006a9e1) list_medium_line_t3_g3_t1_ParamLimits

0x737a,	// (0x0006a9e1) list_medium_line_t3_g3_t1

0x738e,	// (0x0006a9f5) list_medium_line_t3_g3_t2_ParamLimits

0x738e,	// (0x0006a9f5) list_medium_line_t3_g3_t2

0x73a0,	// (0x0006aa07) list_medium_line_t3_g3_t3_ParamLimits

0x73a0,	// (0x0006aa07) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x000733ee) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x000733ee) list_medium_line_t3_g3_t

0xe0c1,	// (0x00071728) list_medium_line_right_iconx2_g1

0xe02d,	// (0x00071694) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000733f5) list_medium_line_right_iconx2_g

0xe0e1,	// (0x00071748) list_medium_line_right_iconx2_t1

0xe0c1,	// (0x00071728) list_medium_line_t2_right_iconx2_g1

0xe02d,	// (0x00071694) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000733f5) list_medium_line_t2_right_iconx2_g

0x73b2,	// (0x0006aa19) list_medium_line_t2_right_iconx2_t1

0x73c2,	// (0x0006aa29) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x000733fa) list_medium_line_t2_right_iconx2_t

0x73d0,	// (0x0006aa37) list_medium_line_x4_t4_t1

0x73de,	// (0x0006aa45) list_medium_line_x4_t4_t2

0x73ec,	// (0x0006aa53) list_medium_line_x4_t4_t3

0x73fa,	// (0x0006aa61) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x000733ff) list_medium_line_x4_t4_t

0xe113,	// (0x0007177a) tport_appsw_pane_ParamLimits

0xe113,	// (0x0007177a) tport_appsw_pane

0xe11f,	// (0x00071786) tport_contact_pane_ParamLimits

0xe11f,	// (0x00071786) tport_contact_pane

0xe12d,	// (0x00071794) tport_listscroll_pane_ParamLimits

0xe12d,	// (0x00071794) tport_listscroll_pane

0xe13b,	// (0x000717a2) cell_tport_appsw_pane_ParamLimits

0xe13b,	// (0x000717a2) cell_tport_appsw_pane

0x5298,	// (0x000688ff) tport_appsw_pane_g1_ParamLimits

0x5298,	// (0x000688ff) tport_appsw_pane_g1

0x352e,	// (0x00066b95) tport_contact_pane_g1

0x3537,	// (0x00066b9e) tport_contact_pane_t1

0x3545,	// (0x00066bac) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x00073408) tport_contact_pane_t

0x3553,	// (0x00066bba) list_tport_pane

0x09ba,	// (0x00064021) scroll_pane_cp_030

0x3564,	// (0x00066bcb) cell_tport_appsw_pane_g1

0x3574,	// (0x00066bdb) cell_tport_appsw_pane_t1

0x3582,	// (0x00066be9) grid_highlight_pane_cp019

0xe162,	// (0x000717c9) list_tport_double_graphic_pane_ParamLimits

0xe162,	// (0x000717c9) list_tport_double_graphic_pane

0x2251,	// (0x000658b8) list_highlight_pane_cp023_ParamLimits

0x2251,	// (0x000658b8) list_highlight_pane_cp023

0xe16f,	// (0x000717d6) list_tport_double_graphic_pane_g1_ParamLimits

0xe16f,	// (0x000717d6) list_tport_double_graphic_pane_g1

0xe17c,	// (0x000717e3) list_tport_double_graphic_pane_t1_ParamLimits

0xe17c,	// (0x000717e3) list_tport_double_graphic_pane_t1

0xe191,	// (0x000717f8) list_tport_double_graphic_pane_t2_ParamLimits

0xe191,	// (0x000717f8) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x00073414) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x00073414) list_tport_double_graphic_pane_t

0x0093,	// (0x000636fa) main_cale_note_pane

0xc6da,	// (0x0006fd41) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc6da,	// (0x0006fd41) cell_vitu2_function_top_wide_pane_cp01

0xdcc2,	// (0x00071329) wait_bar_pane_cp05_ParamLimits

0x2251,	// (0x000658b8) listscroll_cmail_pane

0x358a,	// (0x00066bf1) list_cmail_pane

0xe1a3,	// (0x0007180a) list_cmail_body_pane

0xe1a3,	// (0x0007180a) list_single_cmail_header_caption_pane

0xe1bc,	// (0x00071823) list_single_cmail_header_detail_pane_ParamLimits

0xe1bc,	// (0x00071823) list_single_cmail_header_detail_pane

0x35a6,	// (0x00066c0d) list_single_cmail_header_caption_pane_t1

0x7408,	// (0x0006aa6f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7408,	// (0x0006aa6f) list_single_cmail_header_detail_pane_g1

0xe1e7,	// (0x0007184e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe1e7,	// (0x0007184e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x00073419) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x00073419) list_single_cmail_header_detail_pane_g

0x741e,	// (0x0006aa85) list_single_cmail_header_detail_pane_t1_ParamLimits

0x741e,	// (0x0006aa85) list_single_cmail_header_detail_pane_t1

0x747e,	// (0x0006aae5) list_single_cmail_header_editor_pane_bg_ParamLimits

0x747e,	// (0x0006aae5) list_single_cmail_header_editor_pane_bg

0x3611,	// (0x00066c78) list_cmail_body_pane_g1

0x361a,	// (0x00066c81) list_cmail_body_pane_t1

0xee93,	// (0x000724fa) list_single_cmail_header_editor_pane_bg_g1

0x0d74,	// (0x000643db) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeea3,	// (0x0007250a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xee9b,	// (0x00072502) list_single_cmail_header_editor_pane_bg_g1_copy3

0x237f,	// (0x000659e6) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeec3,	// (0x0007252a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeeb3,	// (0x0007251a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeebb,	// (0x00072522) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0d54,	// (0x000643bb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe1f3,	// (0x0007185a) calenote_gesture_pane_ParamLimits

0xe1f3,	// (0x0007185a) calenote_gesture_pane

0xe20b,	// (0x00071872) calenote_window_pane_ParamLimits

0xe20b,	// (0x00071872) calenote_window_pane

0x3628,	// (0x00066c8f) popup_note_window_cp01

0xe223,	// (0x0007188a) calenote_swipe_1_pane_ParamLimits

0xe223,	// (0x0007188a) calenote_swipe_1_pane

0xe015,	// (0x0007167c) calenote_swipe_2_pane_ParamLimits

0xe015,	// (0x0007167c) calenote_swipe_2_pane

0x32d4,	// (0x0006693b) calenote_swipe_1_pane_g1_ParamLimits

0x32d4,	// (0x0006693b) calenote_swipe_1_pane_g1

0x32e1,	// (0x00066948) calenote_swipe_1_pane_g2_ParamLimits

0x32e1,	// (0x00066948) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0007333d) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0007333d) calenote_swipe_1_pane_g

0x363a,	// (0x00066ca1) calenote_swipe_1_pane_t1_ParamLimits

0x363a,	// (0x00066ca1) calenote_swipe_1_pane_t1

0x32d4,	// (0x0006693b) calenote_swipe_2_pane_g1_ParamLimits

0x32d4,	// (0x0006693b) calenote_swipe_2_pane_g1

0x3659,	// (0x00066cc0) calenote_swipe_2_pane_g2_ParamLimits

0x3659,	// (0x00066cc0) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x00073425) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x00073425) calenote_swipe_2_pane_g

0x3665,	// (0x00066ccc) calenote_swipe_2_pane_t1_ParamLimits

0x3665,	// (0x00066ccc) calenote_swipe_2_pane_t1

0x0093,	// (0x000636fa) main_mup_navstr_pane

0xb569,	// (0x0006ebd0) main_mup3_pane_t7_ParamLimits

0xb569,	// (0x0006ebd0) main_mup3_pane_t7

0xbeea,	// (0x0006f551) main_mp4_pane_g6_ParamLimits

0xbeea,	// (0x0006f551) main_mp4_pane_g6

0xc236,	// (0x0006f89d) main_image3_pane_t4_ParamLimits

0xc236,	// (0x0006f89d) main_image3_pane_t4

0xe236,	// (0x0007189d) popup_navstr_preview_pane_ParamLimits

0xe236,	// (0x0007189d) popup_navstr_preview_pane

0xe242,	// (0x000718a9) scroll_navstr_pane_ParamLimits

0xe242,	// (0x000718a9) scroll_navstr_pane

0x0093,	// (0x000636fa) bg_popup_preview_window_pane_cp04

0x368c,	// (0x00066cf3) popup_navstr_preview_pane_t1

0xe24e,	// (0x000718b5) scroll_navstr_pane_g1_ParamLimits

0xe24e,	// (0x000718b5) scroll_navstr_pane_g1

0xe25b,	// (0x000718c2) scroll_navstr_pane_t1_ParamLimits

0xe25b,	// (0x000718c2) scroll_navstr_pane_t1

0x3631,	// (0x00066c98) bg_button_pane_cp014

0x3631,	// (0x00066c98) bg_button_pane_cp030

0x6dee,	// (0x0006a455) list_double_fisheye_pane_g4_ParamLimits

0x6dee,	// (0x0006a455) list_double_fisheye_pane_g4

0xdf44,	// (0x000715ab) list_double_fisheye_pane_g5_ParamLimits

0xdf44,	// (0x000715ab) list_double_fisheye_pane_g5

0x359a,	// (0x00066c01) sp_fs_scroll_pane_cp03

0x339a,	// (0x00066a01) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x33a6,	// (0x00066a0d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0007335a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x33b2,	// (0x00066a19) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3592,	// (0x00066bf9) sp_fs_scroll_pane_cp02

0x0a14,	// (0x0006407b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0a14,	// (0x0006407b) popup_sp_fs_calendar_preview_list_single_pane

0x0093,	// (0x000636fa) main_cam6_pano_pane

0x2251,	// (0x000658b8) main_mup3_pane_ParamLimits

0x0093,	// (0x000636fa) main_phacti_pane

0xdbb5,	// (0x0007121c) bg_button_pane_cp11

0xdbcd,	// (0x00071234) main_mobtv_info_pane_g2_ParamLimits

0xdbcd,	// (0x00071234) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x000732ba) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x000732ba) main_mobtv_info_pane_g

0xdd59,	// (0x000713c0) sc_clock_pane_t5_ParamLimits

0xdd59,	// (0x000713c0) sc_clock_pane_t5

0xdde6,	// (0x0007144d) main_radioblah_pane_g1_ParamLimits

0x3188,	// (0x000667ef) main_radioblah_pane_t3_ParamLimits

0x3188,	// (0x000667ef) main_radioblah_pane_t3

0x31a0,	// (0x00066807) main_radioblah_pane_t4_ParamLimits

0x31a0,	// (0x00066807) main_radioblah_pane_t4

0xde04,	// (0x0007146b) main_radioblah_text_pane_ParamLimits

0xde04,	// (0x0007146b) main_radioblah_text_pane

0xde11,	// (0x00071478) main_radioblah_info_pane_g1_ParamLimits

0xde9e,	// (0x00071505) main_radioblah_info_pane_t4_ParamLimits

0xde9e,	// (0x00071505) main_radioblah_info_pane_t4

0x2251,	// (0x000658b8) main_sp_fs_calendar_pane

0xe26d,	// (0x000718d4) main_phacti_pane_g1

0xe275,	// (0x000718dc) phacti_note_pane_ParamLimits

0xe275,	// (0x000718dc) phacti_note_pane

0x36a3,	// (0x00066d0a) phacti_term_pane_ParamLimits

0x36a3,	// (0x00066d0a) phacti_term_pane

0x36b8,	// (0x00066d1f) phacti_note_pane_t1_ParamLimits

0x36b8,	// (0x00066d1f) phacti_note_pane_t1

0x7495,	// (0x0006aafc) phacti_term_pane_g1

0x749d,	// (0x0006ab04) phacti_term_pane_t1_ParamLimits

0x749d,	// (0x0006ab04) phacti_term_pane_t1

0x3701,	// (0x00066d68) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3709,	// (0x00066d70) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0007342f) popup_sp_fs_calendar_preview_list_single_pane_g

0x3711,	// (0x00066d78) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3711,	// (0x00066d78) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3727,	// (0x00066d8e) aid_popup_sp_fs_bg_corner_pane

0x5004,	// (0x0006866b) popup_sp_fs_calendar_preview_bg_pane_g1

0x0093,	// (0x000636fa) popup_sp_fs_calendar_preview_bg_pane

0x372f,	// (0x00066d96) popup_sp_fs_calendar_preview_list_pane

0x4bf2,	// (0x00068259) bg_main_sp_fs_cale_pane_ParamLimits

0x4bf2,	// (0x00068259) bg_main_sp_fs_cale_pane

0x74c7,	// (0x0006ab2e) listscroll_cale_mrui_pane_ParamLimits

0x74c7,	// (0x0006ab2e) listscroll_cale_mrui_pane

0x74dc,	// (0x0006ab43) listscroll_sp_fs_schedule_track_pane

0x74e5,	// (0x0006ab4c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x74e5,	// (0x0006ab4c) main_sp_fs_ctrlbar_pane_cp01

0x3771,	// (0x00066dd8) main_sp_fs_ribbon_pane

0x74f8,	// (0x0006ab5f) popup_sp_fs_cale_preview_window

0xe2d5,	// (0x0007193c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe2d5,	// (0x0007193c) list_single_sp_fs_schedule_track_pane

0x3ee3,	// (0x0006754a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3ee3,	// (0x0006754a) bg_sp_fs_highlight_list_pane_cp03

0xe2eb,	// (0x00071952) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe2eb,	// (0x00071952) list_single_sp_fs_schedule_track_pane_g1

0xe2f7,	// (0x0007195e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe2f7,	// (0x0007195e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x00073434) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x00073434) list_single_sp_fs_schedule_track_pane_g

0xe303,	// (0x0007196a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe303,	// (0x0007196a) list_single_sp_fs_schedule_track_pane_t1

0xe31b,	// (0x00071982) sp_fs_schedule_track_pane_ParamLimits

0xe31b,	// (0x00071982) sp_fs_schedule_track_pane

0x3788,	// (0x00066def) sp_fs_schedule_track_pane_g1

0x3790,	// (0x00066df7) sp_fs_schedule_track_pane_g2

0x3798,	// (0x00066dff) sp_fs_schedule_track_pane_g3

0x37a0,	// (0x00066e07) sp_fs_schedule_track_pane_g4

0x37a8,	// (0x00066e0f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x00073439) sp_fs_schedule_track_pane_g

0xee93,	// (0x000724fa) bg_sp_fs_schedule_viewer_highlight_g1

0x0d74,	// (0x000643db) bg_sp_fs_schedule_viewer_highlight_g2

0xee9b,	// (0x00072502) bg_sp_fs_schedule_viewer_highlight_g3

0xeea3,	// (0x0007250a) bg_sp_fs_schedule_viewer_highlight_g4

0x237f,	// (0x000659e6) bg_sp_fs_schedule_viewer_highlight_g5

0xeeb3,	// (0x0007251a) bg_sp_fs_schedule_viewer_highlight_g6

0xeebb,	// (0x00072522) bg_sp_fs_schedule_viewer_highlight_g7

0xeec3,	// (0x0007252a) bg_sp_fs_schedule_viewer_highlight_g8

0x0d54,	// (0x000643bb) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x00073444) bg_sp_fs_schedule_viewer_highlight_g

0x0093,	// (0x000636fa) bg_main_sp_fs_ribbon_pane

0xc465,	// (0x0006facc) main_sp_fs_ribbon_pane_g1

0x37b0,	// (0x00066e17) main_sp_fs_ribbon_pane_t1

0xe32b,	// (0x00071992) main_sp_fs_ribbon_pane_t2

0x37bf,	// (0x00066e26) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x00073457) main_sp_fs_ribbon_pane_t

0x37ce,	// (0x00066e35) main_sp_fs_ribbon_scheduler_pane

0x37d6,	// (0x00066e3d) bg_main_sp_fs_ribbon_pane_g1

0x37df,	// (0x00066e46) bg_main_sp_fs_ribbon_pane_g2

0x37e8,	// (0x00066e4f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0007345e) bg_main_sp_fs_ribbon_pane_g

0x37f0,	// (0x00066e57) main_sp_fs_ribbon_scheduler_pane_g1

0x37f9,	// (0x00066e60) main_sp_fs_ribbon_scheduler_pane_g2

0x3802,	// (0x00066e69) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x00073465) main_sp_fs_ribbon_scheduler_pane_g

0x380b,	// (0x00066e72) list_cale_mrui_pane

0xe33a,	// (0x000719a1) sp_fs_scroll_pane_cp07_ParamLimits

0xe33a,	// (0x000719a1) sp_fs_scroll_pane_cp07

0xe352,	// (0x000719b9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe352,	// (0x000719b9) bg_sp_fs_schedule_viewer_highlight

0x3818,	// (0x00066e7f) list_single_sp_fs_schedule_track_pane_cp01

0x3820,	// (0x00066e87) list_sp_fs_schedule_track_pane

0x3828,	// (0x00066e8f) sp_fs_scroll_pane_cp06_ParamLimits

0x3828,	// (0x00066e8f) sp_fs_scroll_pane_cp06

0x5004,	// (0x0006866b) bgmain_sp_fs_calendar_pane_g1

0x750a,	// (0x0006ab71) list_single_cale_mrui_pane_ParamLimits

0x750a,	// (0x0006ab71) list_single_cale_mrui_pane

0x752b,	// (0x0006ab92) list_single_cale_mrui_row_pane_ParamLimits

0x752b,	// (0x0006ab92) list_single_cale_mrui_row_pane

0x7541,	// (0x0006aba8) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7541,	// (0x0006aba8) list_single_cale_mrui_row_pane_g1

0x7579,	// (0x0006abe0) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7579,	// (0x0006abe0) list_single_cale_mrui_row_pane_t1

0x758b,	// (0x0006abf2) list_single_cale_mrui_row_pane_t2_ParamLimits

0x758b,	// (0x0006abf2) list_single_cale_mrui_row_pane_t2

0x75f1,	// (0x0006ac58) list_single_cale_mrui_row_pane_t3_ParamLimits

0x75f1,	// (0x0006ac58) list_single_cale_mrui_row_pane_t3

0x7620,	// (0x0006ac87) list_single_cale_mrui_row_pane_t4_ParamLimits

0x7620,	// (0x0006ac87) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x00073473) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x00073473) list_single_cale_mrui_row_pane_t

0x764f,	// (0x0006acb6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x764f,	// (0x0006acb6) list_single_cmail_header_editor_pane_bg_cp01

0x7673,	// (0x0006acda) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7673,	// (0x0006acda) list_single_cmail_header_editor_pane_bg_cp02

0xe35f,	// (0x000719c6) main_radioblah_text_pane_t1_ParamLimits

0xe35f,	// (0x000719c6) main_radioblah_text_pane_t1

0x385d,	// (0x00066ec4) cam6_indi_pane_cp01

0x3865,	// (0x00066ecc) cam6_mode_pane_cp01

0x386d,	// (0x00066ed4) cam6_pano_pane

0x3876,	// (0x00066edd) cam6_zoom_pane_cp01

0x387e,	// (0x00066ee5) cam6_pano_image_pane

0x3887,	// (0x00066eee) cam6_pano_pane_g1

0x2eef,	// (0x00066556) cam6_pano_pane_g2

0x3890,	// (0x00066ef7) cam6_pano_pane_g3

0x3899,	// (0x00066f00) cam6_pano_pane_g4

0x557d,	// (0x00068be4) cam6_pano_pane_g5

0x38a2,	// (0x00066f09) cam6_pano_pane_g6

0x38aa,	// (0x00066f11) cam6_pano_pane_g7

0x38b2,	// (0x00066f19) cam6_pano_pane_g8

0x38bb,	// (0x00066f22) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x0007347c) cam6_pano_pane_g

0x0093,	// (0x000636fa) main_browser_tag_pane

0x3684,	// (0x00066ceb) grid_navstr_albumart_pane

0x38c4,	// (0x00066f2b) cell_navstr_albumart_pane_ParamLimits

0x38c4,	// (0x00066f2b) cell_navstr_albumart_pane

0x1705,	// (0x00064d6c) cell_navstr_albumart_pane_g1

0x49c3,	// (0x0006802a) cell_navstr_albumart_pane_g2

0x49d3,	// (0x0006803a) cell_navstr_albumart_pane_g3

0x49cb,	// (0x00068032) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x0007348f) cell_navstr_albumart_pane_g

0xe378,	// (0x000719df) bt_list_pane_ParamLimits

0xe378,	// (0x000719df) bt_list_pane

0xe38d,	// (0x000719f4) bt_list_pane_t1

0xe39c,	// (0x00071a03) bt_list_pane_t2

0x0001,

0xfe31,	// (0x00073498) bt_list_pane_t

0x0093,	// (0x000636fa) main_cale_prevew_pane

0xe3ab,	// (0x00071a12) popup_cale_preview_window_ParamLimits

0xe3ab,	// (0x00071a12) popup_cale_preview_window

0x2251,	// (0x000658b8) bg_popup_preview_window_pane_cp05_ParamLimits

0x2251,	// (0x000658b8) bg_popup_preview_window_pane_cp05

0x38db,	// (0x00066f42) list_cale_preview_pane_ParamLimits

0x38db,	// (0x00066f42) list_cale_preview_pane

0xe3c0,	// (0x00071a27) list_double_cale_preview_pane_ParamLimits

0xe3c0,	// (0x00071a27) list_double_cale_preview_pane

0xe3d1,	// (0x00071a38) list_single_cale_preview_pane_ParamLimits

0xe3d1,	// (0x00071a38) list_single_cale_preview_pane

0xe3e5,	// (0x00071a4c) list_single_cale_preview_pane_g1

0xe3ed,	// (0x00071a54) list_single_cale_preview_pane_t1_ParamLimits

0xe3ed,	// (0x00071a54) list_single_cale_preview_pane_t1

0x38e7,	// (0x00066f4e) list_double_cale_preview_pane_g1

0x38ef,	// (0x00066f56) list_double_cale_preview_pane_t1_ParamLimits

0x38ef,	// (0x00066f56) list_double_cale_preview_pane_t1

0xe402,	// (0x00071a69) list_double_cale_preview_pane_t2_ParamLimits

0xe402,	// (0x00071a69) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x0007349d) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x0007349d) list_double_cale_preview_pane_t

0x0093,	// (0x000636fa) main_ezdial_pane

0x2251,	// (0x000658b8) main_sp_fs_email_pane_ParamLimits

0xe035,	// (0x0007169c) cmail_ddmenu_btn01_pane_ParamLimits

0xe035,	// (0x0007169c) cmail_ddmenu_btn01_pane

0xe052,	// (0x000716b9) cmail_ddmenu_btn02_pane_ParamLimits

0xe052,	// (0x000716b9) cmail_ddmenu_btn02_pane

0xe070,	// (0x000716d7) cmail_ddmenu_btn03_pane_ParamLimits

0xe070,	// (0x000716d7) cmail_ddmenu_btn03_pane

0xe09c,	// (0x00071703) main_sp_fs_ctrlbar_pane_ParamLimits

0xe0b0,	// (0x00071717) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe1a3,	// (0x0007180a) list_cmail_body_pane_ParamLimits

0x35b4,	// (0x00066c1b) bg_button_pane_cp12

0x35c9,	// (0x00066c30) list_single_cmail_header_detail_pane_g3_ParamLimits

0x35c9,	// (0x00066c30) list_single_cmail_header_detail_pane_g3

0x745a,	// (0x0006aac1) list_single_cmail_header_detail_pane_t2_ParamLimits

0x745a,	// (0x0006aac1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x00073420) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x00073420) list_single_cmail_header_detail_pane_t

0x74b2,	// (0x0006ab19) phacti_term_pane_t2_ParamLimits

0x74b2,	// (0x0006ab19) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0007342a) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0007342a) phacti_term_pane_t

0x3904,	// (0x00066f6b) aid_size_list_single_double

0xe41a,	// (0x00071a81) popup_ezdial_listscroll_window

0xe433,	// (0x00071a9a) popup_number_entry_window_cp01

0x0acc,	// (0x00064133) bg_popup_call_pane_cp09

0x3910,	// (0x00066f77) ezdial_list_pane

0x3918,	// (0x00066f7f) scroll_pane_cp23

0x4df1,	// (0x00068458) bg_button_pane_cp028_ParamLimits

0x4df1,	// (0x00068458) bg_button_pane_cp028

0xe43f,	// (0x00071aa6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe43f,	// (0x00071aa6) cmail_ddmenu_btn01_pane_g1

0xe44f,	// (0x00071ab6) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe44f,	// (0x00071ab6) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x000734a2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x000734a2) cmail_ddmenu_btn01_pane_g

0x3920,	// (0x00066f87) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3920,	// (0x00066f87) cmail_ddmenu_btn01_pane_t1

0x4bf2,	// (0x00068259) bg_button_pane_cp029_ParamLimits

0x4bf2,	// (0x00068259) bg_button_pane_cp029

0xe44f,	// (0x00071ab6) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe44f,	// (0x00071ab6) cmail_ddmenu_btn02_pane_g1

0xe467,	// (0x00071ace) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe467,	// (0x00071ace) cmail_ddmenu_btn02_pane_t1

0x3ee3,	// (0x0006754a) bg_button_pane_cp031_ParamLimits

0x3ee3,	// (0x0006754a) bg_button_pane_cp031

0xe44f,	// (0x00071ab6) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe44f,	// (0x00071ab6) cmail_ddmenu_btn03_pane_g1

0xe467,	// (0x00071ace) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe467,	// (0x00071ace) cmail_ddmenu_btn03_pane_t1

0xc0f3,	// (0x0006f75a) cell_dialer2_keypad_pane_t1_ParamLimits

0xc10d,	// (0x0006f774) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc10d,	// (0x0006f774) cell_dialer2_keypad_pane_t1_copy1

0xda42,	// (0x000710a9) ncimui_group_button_pane

0x2251,	// (0x000658b8) main_sp_fs_calendar_pane_ParamLimits

0xe1a3,	// (0x0007180a) list_single_cmail_header_caption_pane_ParamLimits

0xe2a7,	// (0x0007190e) aid_recal_txt_sm_pane

0x0093,	// (0x000636fa) mian_recal_day_pane

0x74f8,	// (0x0006ab5f) popup_sp_fs_cale_preview_window_ParamLimits

0x3935,	// (0x00066f9c) list_recal_day_pane

0x76ac,	// (0x0006ad13) list_single_recal_day_pane_ParamLimits

0x76ac,	// (0x0006ad13) list_single_recal_day_pane

0x3989,	// (0x00066ff0) list_single_recal_day_pane_g1_ParamLimits

0x3989,	// (0x00066ff0) list_single_recal_day_pane_g1

0x76be,	// (0x0006ad25) list_single_recal_day_pane_g2_ParamLimits

0x76be,	// (0x0006ad25) list_single_recal_day_pane_g2

0x76ca,	// (0x0006ad31) list_single_recal_day_pane_g3_ParamLimits

0x76ca,	// (0x0006ad31) list_single_recal_day_pane_g3

0x76d6,	// (0x0006ad3d) list_single_recal_day_pane_g4_ParamLimits

0x76d6,	// (0x0006ad3d) list_single_recal_day_pane_g4

0x76e2,	// (0x0006ad49) list_single_recal_day_pane_g5_ParamLimits

0x76e2,	// (0x0006ad49) list_single_recal_day_pane_g5

0x76f6,	// (0x0006ad5d) list_single_recal_day_pane_g6_ParamLimits

0x76f6,	// (0x0006ad5d) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x000734b1) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x000734b1) list_single_recal_day_pane_g

0x770d,	// (0x0006ad74) list_single_recal_day_pane_t1

0x771f,	// (0x0006ad86) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x000734bc) list_single_recal_day_pane_t

0xe48b,	// (0x00071af2) ncimui_query_button_pane_ParamLimits

0xe48b,	// (0x00071af2) ncimui_query_button_pane

0xe49b,	// (0x00071b02) ncimui_query_button_pane_t1_ParamLimits

0xe49b,	// (0x00071b02) ncimui_query_button_pane_t1

0x39d3,	// (0x0006703a) ncimui_query_button_pane_t2_ParamLimits

0x39d3,	// (0x0006703a) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x000734c1) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x000734c1) ncimui_query_button_pane_t

0xe4ae,	// (0x00071b15) query_button_pane_ParamLimits

0xe4ae,	// (0x00071b15) query_button_pane

0x0093,	// (0x000636fa) bg_button_pane_cp0028

0x39e6,	// (0x0006704d) query_button_pane_t1

0xa656,	// (0x0006dcbd) main_tport_pane_ParamLimits

0xe0ef,	// (0x00071756) bg_popup_window_pane_cp01_ParamLimits

0xe0ef,	// (0x00071756) bg_popup_window_pane_cp01

0xe0fb,	// (0x00071762) heading_pane_cp08_ParamLimits

0xe0fb,	// (0x00071762) heading_pane_cp08

0xe107,	// (0x0007176e) heading_pane_cp07_ParamLimits

0xe107,	// (0x0007176e) heading_pane_cp07

0x3564,	// (0x00066bcb) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0007340d) cell_tport_appsw_pane_g

0x6889,	// (0x00069ef0) input_candi_list_open_g1

0x0f4f,	// (0x000645b6) list_cale_time_pane_g6_ParamLimits

0x0f4f,	// (0x000645b6) list_cale_time_pane_g6

0xb03b,	// (0x0006e6a2) aid_size_touch_calib_1_ParamLimits

0xb03b,	// (0x0006e6a2) aid_size_touch_calib_1

0xb047,	// (0x0006e6ae) aid_size_touch_calib_2_ParamLimits

0xb047,	// (0x0006e6ae) aid_size_touch_calib_2

0xb053,	// (0x0006e6ba) aid_size_touch_calib_3_ParamLimits

0xb053,	// (0x0006e6ba) aid_size_touch_calib_3

0xb061,	// (0x0006e6c8) aid_size_touch_calib_4_ParamLimits

0xb061,	// (0x0006e6c8) aid_size_touch_calib_4

0xb06f,	// (0x0006e6d6) main_touch_calib_button_group_pane_ParamLimits

0xb06f,	// (0x0006e6d6) main_touch_calib_button_group_pane

0xb07d,	// (0x0006e6e4) main_touch_calib_pane_g1_ParamLimits

0xb089,	// (0x0006e6f0) main_touch_calib_pane_g2_ParamLimits

0xb095,	// (0x0006e6fc) main_touch_calib_pane_g3_ParamLimits

0xb0a1,	// (0x0006e708) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x00072dc7) main_touch_calib_pane_g_ParamLimits

0xb0ad,	// (0x0006e714) main_touch_calib_pane_t1_ParamLimits

0xb0c2,	// (0x0006e729) main_touch_calib_pane_t2_ParamLimits

0xb0d7,	// (0x0006e73e) main_touch_calib_pane_t3_ParamLimits

0xb0e9,	// (0x0006e750) main_touch_calib_pane_t4_ParamLimits

0xb0fb,	// (0x0006e762) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x00072dd0) main_touch_calib_pane_t_ParamLimits

0x5333,	// (0x0006899a) list_single_fp_cale_pane_g3_ParamLimits

0x5333,	// (0x0006899a) list_single_fp_cale_pane_g3

0x2251,	// (0x000658b8) bg_button_pane_cp012_ParamLimits

0x2251,	// (0x000658b8) bg_vkb2_func_pane_cp03_ParamLimits

0xcddf,	// (0x00070446) cell_vitu2_function_top_pane_g1_ParamLimits

0x2251,	// (0x000658b8) bg_vkb2_func_pane_cp04_ParamLimits

0xd9ce,	// (0x00071035) main_ncimui_button_group_pane_ParamLimits

0xd9ce,	// (0x00071035) main_ncimui_button_group_pane

0xda30,	// (0x00071097) main_ncimui_pane_t3_ParamLimits

0xda30,	// (0x00071097) main_ncimui_pane_t3

0x369a,	// (0x00066d01) phacti_button_group_pane

0x3904,	// (0x00066f6b) aid_size_list_single_double_ParamLimits

0xe41a,	// (0x00071a81) popup_ezdial_listscroll_window_ParamLimits

0xe433,	// (0x00071a9a) popup_number_entry_window_cp01_ParamLimits

0xe4bb,	// (0x00071b22) phacti_button_pane_ParamLimits

0xe4bb,	// (0x00071b22) phacti_button_pane

0x0093,	// (0x000636fa) bg_button_pane_cp14

0x39f4,	// (0x0006705b) phacti_button_pane_t1

0xe4ca,	// (0x00071b31) main_touch_calib_button_pane_ParamLimits

0xe4ca,	// (0x00071b31) main_touch_calib_button_pane

0x085d,	// (0x00063ec4) bg_button_pane_cp18_ParamLimits

0x085d,	// (0x00063ec4) bg_button_pane_cp18

0xe4db,	// (0x00071b42) main_touch_calib_button_pane_t1_ParamLimits

0xe4db,	// (0x00071b42) main_touch_calib_button_pane_t1

0xe4f1,	// (0x00071b58) main_touch_calib_button_pane_t2_ParamLimits

0xe4f1,	// (0x00071b58) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x000734c6) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x000734c6) main_touch_calib_button_pane_t

0x0093,	// (0x000636fa) cell_ncimui_button_pane

0x0093,	// (0x000636fa) bg_button_pane_cp032

0x3a02,	// (0x00067069) cell_ncimui_button_pane_t1

0xc15f,	// (0x0006f7c6) image3_infobar_pane_ParamLimits

0xc15f,	// (0x0006f7c6) image3_infobar_pane

0xdd79,	// (0x000713e0) fs_bigclock_status_pane_ParamLimits

0xdd79,	// (0x000713e0) fs_bigclock_status_pane

0xdd86,	// (0x000713ed) main_fs_bigclock_clock_pane_ParamLimits

0xdd86,	// (0x000713ed) main_fs_bigclock_clock_pane

0xdd9e,	// (0x00071405) main_fs_bigclock_indi_pane_ParamLimits

0xdd9e,	// (0x00071405) main_fs_bigclock_indi_pane

0xddbe,	// (0x00071425) main_fs_bigclock_swipe_pane_ParamLimits

0xddbe,	// (0x00071425) main_fs_bigclock_swipe_pane

0x0093,	// (0x000636fa) main_fs_clock_dumped_data

0x2ffc,	// (0x00066663) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2ffc,	// (0x00066663) list_single_fs_bigclock_indicator_pane_g1

0x3016,	// (0x0006667d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3016,	// (0x0006667d) list_single_fs_bigclock_indicator_pane_g2

0x3030,	// (0x00066697) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3030,	// (0x00066697) list_single_fs_bigclock_indicator_pane_g3

0x304a,	// (0x000666b1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x304a,	// (0x000666b1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x000732ee) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x000732ee) list_single_fs_bigclock_indicator_pane_g

0x3073,	// (0x000666da) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3073,	// (0x000666da) list_single_fs_bigclock_indicator_pane_t1

0x309b,	// (0x00066702) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x309b,	// (0x00066702) list_single_fs_bigclock_indicator_pane_t2

0x30c3,	// (0x0006672a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x30c3,	// (0x0006672a) list_single_fs_bigclock_indicator_pane_t3

0x30eb,	// (0x00066752) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x30eb,	// (0x00066752) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x000732f9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x000732f9) list_single_fs_bigclock_indicator_pane_t

0x3a10,	// (0x00067077) image3_infobar_fav_pane_ParamLimits

0x3a10,	// (0x00067077) image3_infobar_fav_pane

0x3a20,	// (0x00067087) image3_infobar_loc_pane_ParamLimits

0x3a20,	// (0x00067087) image3_infobar_loc_pane

0x3a34,	// (0x0006709b) image3_infobar_time_pane_ParamLimits

0x3a34,	// (0x0006709b) image3_infobar_time_pane

0x5004,	// (0x0006866b) image3_infobar_time_pane_g1

0x3a44,	// (0x000670ab) image3_infobar_time_pane_t1

0x5004,	// (0x0006866b) image3_infobar_loc_pane_g1

0x3a52,	// (0x000670b9) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x000734cb) image3_infobar_loc_pane_g

0x3a5a,	// (0x000670c1) image3_infobar_loc_pane_t1

0x5004,	// (0x0006866b) image3_infobar_fav_pane_g1

0x3a68,	// (0x000670cf) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x000734d0) image3_infobar_fav_pane_g

0x3a70,	// (0x000670d7) fs_bigclock_status_battery_pane

0x3a79,	// (0x000670e0) fs_bigclock_status_signal_pane

0x3a82,	// (0x000670e9) fs_bigclock_status_title_pane

0x3a8b,	// (0x000670f2) fs_bigclock_status_signal_pane_g1

0x3a94,	// (0x000670fb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x000734d5) fs_bigclock_status_signal_pane_g

0x3a9c,	// (0x00067103) fs_bigclock_status_battery_pane_g1

0x3aa5,	// (0x0006710c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x000734da) fs_bigclock_status_battery_pane_g

0x3aad,	// (0x00067114) fs_bigclock_status_title_pane_t1

0x5298,	// (0x000688ff) main_fs_bigclock_clock_pane_g1

0xe50f,	// (0x00071b76) main_fs_bigclock_clock_pane_g2

0xe51c,	// (0x00071b83) main_fs_bigclock_clock_pane_g3

0xe51c,	// (0x00071b83) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x000734df) main_fs_bigclock_clock_pane_g

0xe528,	// (0x00071b8f) main_fs_bigclock_clock_pane_t1

0xe53a,	// (0x00071ba1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x000734e8) main_fs_bigclock_clock_pane_t

0x3abb,	// (0x00067122) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3abb,	// (0x00067122) list_single_fs_bigclock_indicator_pane

0x3acc,	// (0x00067133) list_single_fs_bigclock_pane_ParamLimits

0x3acc,	// (0x00067133) list_single_fs_bigclock_pane

0x3af2,	// (0x00067159) main_fs_bigclock_indicator_pane_t1

0x3b01,	// (0x00067168) list_single_fs_bigclock_pane_g1

0x3b09,	// (0x00067170) list_single_fs_bigclock_pane_t1

0x5004,	// (0x0006866b) main_fs_bigclock_swipe_pane_g1

0x3b49,	// (0x000671b0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x000734f9) main_fs_bigclock_swipe_pane_g

0x3b51,	// (0x000671b8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3b51,	// (0x000671b8) main_fs_bigclock_swipe_pane_t1

0x985d,	// (0x0006cec4) call_type_pane_ParamLimits

0x0093,	// (0x000636fa) main_btmg_pane

0x756d,	// (0x0006abd4) list_single_cale_mrui_row_pane_g2_ParamLimits

0x756d,	// (0x0006abd4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x0007346c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0007346c) list_single_cale_mrui_row_pane_g

0x769b,	// (0x0006ad02) list_recal_vselct_arw_lo_pane

0x3966,	// (0x00066fcd) list_recal_vselct_arw_up_pane

0x76a3,	// (0x0006ad0a) list_recal_vselct_pane

0x3b6e,	// (0x000671d5) btmg_button_pane

0xe58f,	// (0x00071bf6) main_btmg_pane_g1

0x0093,	// (0x000636fa) bg_button_pane_cp044

0x3b76,	// (0x000671dd) btmg_button_pane_t1

0x4bde,	// (0x00068245) aid_listscroll_gen

0x2251,	// (0x000658b8) main_cntbar_detail_pane

0x358a,	// (0x00066bf1) list_cmail_folder_pane

0x359a,	// (0x00066c01) sp_fs_scroll_pane_cp03_ParamLimits

0x7734,	// (0x0006ad9b) list_single_fs_dyc_pane_cp01_ParamLimits

0x7734,	// (0x0006ad9b) list_single_fs_dyc_pane_cp01

0x3b84,	// (0x000671eb) aid_size_cmail_indent

0x774c,	// (0x0006adb3) list_single_dyc_row_pane_cp01

0xe5b1,	// (0x00071c18) cntbar_detail_list_pane_ParamLimits

0xe5b1,	// (0x00071c18) cntbar_detail_list_pane

0xe5e7,	// (0x00071c4e) main_cntbar_detail_cont_pane_ParamLimits

0xe5e7,	// (0x00071c4e) main_cntbar_detail_cont_pane

0xe5f3,	// (0x00071c5a) scroll_pane_cp032_ParamLimits

0xe5f3,	// (0x00071c5a) scroll_pane_cp032

0xe5ff,	// (0x00071c66) cntbar_detail_list_event_pane_ParamLimits

0xe5ff,	// (0x00071c66) cntbar_detail_list_event_pane

0xe5bd,	// (0x00071c24) cntbar_detail_list_shct_pane

0x3b96,	// (0x000671fd) aid_list_gen

0x09ba,	// (0x00064021) aid_scroll

0x268d,	// (0x00065cf4) aid_size_touch_scroll_bar

0xd333,	// (0x0007099a) aid_list_double

0x26b8,	// (0x00065d1f) aid_list_single

0x26b8,	// (0x00065d1f) aid_list_single_lg

0x7755,	// (0x0006adbc) aid_list_z_g_a_sm

0xe60f,	// (0x00071c76) aid_list_z_g_d

0x775d,	// (0x0006adc4) aid_txt_z_prm

0x776b,	// (0x0006add2) aid_txt_z_prm_cp01

0x7779,	// (0x0006ade0) aid_txt_z_sec

0xe617,	// (0x00071c7e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe617,	// (0x00071c7e) main_cntbar_detail_cont_pane_g1

0xe624,	// (0x00071c8b) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe624,	// (0x00071c8b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x000734fe) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x000734fe) main_cntbar_detail_cont_pane_g

0x3bbb,	// (0x00067222) main_cntbar_detail_cont_pane_t1

0x3bc9,	// (0x00067230) main_cntbar_detail_cont_pane_t2

0x3bd7,	// (0x0006723e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x00073503) main_cntbar_detail_cont_pane_t

0xe630,	// (0x00071c97) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe630,	// (0x00071c97) cell_cntbar_detail_list_shct_pane

0x3be5,	// (0x0006724c) cntbar_detail_list_shct_pane_g1

0x3bee,	// (0x00067255) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x0007350a) cntbar_detail_list_shct_pane_g

0xe642,	// (0x00071ca9) cntbar_detail_list_event_pane_g1_ParamLimits

0xe642,	// (0x00071ca9) cntbar_detail_list_event_pane_g1

0xe64e,	// (0x00071cb5) cntbar_detail_list_event_pane_g2_ParamLimits

0xe64e,	// (0x00071cb5) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x0007350f) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x0007350f) cntbar_detail_list_event_pane_g

0xe6ba,	// (0x00071d21) cntbar_detail_list_event_pane_t1_ParamLimits

0xe6ba,	// (0x00071d21) cntbar_detail_list_event_pane_t1

0xe6cf,	// (0x00071d36) cntbar_detail_list_event_pane_t2_ParamLimits

0xe6cf,	// (0x00071d36) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x0007351c) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x0007351c) cntbar_detail_list_event_pane_t

0x5004,	// (0x0006866b) cell_cntbar_detail_list_shct_pane_g1

0x154c,	// (0x00064bb3) navi_pane_mv_g3

0x2251,	// (0x000658b8) main_cntbar_detail_pane_ParamLimits

0x0093,	// (0x000636fa) main_notif_wgt_pane

0xbe35,	// (0x0006f49c) aid_tch_main_mp4_pane_g4

0xc074,	// (0x0006f6db) popup_slider_window_cp02

0x7691,	// (0x0006acf8) list_recal_day_event_pane

0xe597,	// (0x00071bfe) cntbar_detail_btn_pane_ParamLimits

0xe597,	// (0x00071bfe) cntbar_detail_btn_pane

0xe5a3,	// (0x00071c0a) cntbar_detail_btn_pane_cp01_ParamLimits

0xe5a3,	// (0x00071c0a) cntbar_detail_btn_pane_cp01

0xe5bd,	// (0x00071c24) cntbar_detail_list_shct_pane_ParamLimits

0xe5c9,	// (0x00071c30) cntbar_detail_pane_g1_ParamLimits

0xe5c9,	// (0x00071c30) cntbar_detail_pane_g1

0xe5d5,	// (0x00071c3c) cntbar_detail_pane_t1_ParamLimits

0xe5d5,	// (0x00071c3c) cntbar_detail_pane_t1

0xe65a,	// (0x00071cc1) cntbar_detail_list_event_pane_g3_ParamLimits

0xe65a,	// (0x00071cc1) cntbar_detail_list_event_pane_g3

0xe672,	// (0x00071cd9) cntbar_detail_list_event_pane_g4_ParamLimits

0xe672,	// (0x00071cd9) cntbar_detail_list_event_pane_g4

0xe68a,	// (0x00071cf1) cntbar_detail_list_event_pane_g5_ParamLimits

0xe68a,	// (0x00071cf1) cntbar_detail_list_event_pane_g5

0xe6a2,	// (0x00071d09) cntbar_detail_list_event_pane_g6_ParamLimits

0xe6a2,	// (0x00071d09) cntbar_detail_list_event_pane_g6

0xe6e4,	// (0x00071d4b) cntbar_detail_list_event_pane_t3_ParamLimits

0xe6e4,	// (0x00071d4b) cntbar_detail_list_event_pane_t3

0xe6f6,	// (0x00071d5d) popup_notif_wgt_window_ParamLimits

0xe6f6,	// (0x00071d5d) popup_notif_wgt_window

0xe704,	// (0x00071d6b) popup_submenu_window_cp01_ParamLimits

0xe704,	// (0x00071d6b) popup_submenu_window_cp01

0x0acc,	// (0x00064133) bg_popup_window_pane_cp10

0x3bf7,	// (0x0006725e) listscroll_notif_wgt_pane

0x3c08,	// (0x0006726f) list_notif_wgt_window

0x3c11,	// (0x00067278) scroll_pane_cp033

0xe710,	// (0x00071d77) list_notif_wgt_row_pane_ParamLimits

0xe710,	// (0x00071d77) list_notif_wgt_row_pane

0x3c1a,	// (0x00067281) aid_size_list_notif_wgt_del

0x3c27,	// (0x0006728e) list_notif_wgt_row_pane_g1

0x3c33,	// (0x0006729a) list_notif_wgt_row_pane_g2

0x3c47,	// (0x000672ae) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x00073523) list_notif_wgt_row_pane_g

0x3c54,	// (0x000672bb) list_notif_wgt_row_pane_t1

0x3c6a,	// (0x000672d1) list_notif_wgt_row_pane_t2

0x3c7c,	// (0x000672e3) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x0007352a) list_notif_wgt_row_pane_t

0x2399,	// (0x00065a00) list_recal_day_event_pane_g1

0x3c8e,	// (0x000672f5) list_recal_day_event_pane_t1

0x0093,	// (0x000636fa) bg_button_pane_cp045

0xe722,	// (0x00071d89) cntbar_detail_btn_pane_t1

0x4bf2,	// (0x00068259) main_callh_pane_ParamLimits

0x4bf2,	// (0x00068259) main_callh_pane

0x0093,	// (0x000636fa) main_coverflow0_pane

0x0093,	// (0x000636fa) main_wgtman_pane

0xddd0,	// (0x00071437) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xddd0,	// (0x00071437) main_fs_bigclock_unlock_btn_pane

0x355c,	// (0x00066bc3) bg_button_pane_cp16

0x356c,	// (0x00066bd3) cell_tport_appsw_pane_g3

0xe730,	// (0x00071d97) cf0_flow_pane_ParamLimits

0xe730,	// (0x00071d97) cf0_flow_pane

0x3c9d,	// (0x00067304) listscroll_cf0_pane

0x3ca6,	// (0x0006730d) main_cf0_pane_g1

0xe73f,	// (0x00071da6) main_cf0_pane_t1_ParamLimits

0xe73f,	// (0x00071da6) main_cf0_pane_t1

0xe751,	// (0x00071db8) main_cf0_pane_t2_ParamLimits

0xe751,	// (0x00071db8) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x00073536) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x00073536) main_cf0_pane_t

0x3cb8,	// (0x0006731f) scroll_pane_cp11

0xe763,	// (0x00071dca) cf0_flow_pane_g1

0xe76b,	// (0x00071dd2) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0007353b) cf0_flow_pane_g

0xe773,	// (0x00071dda) cf0_flow_pane_t1

0x0093,	// (0x000636fa) main_call6_pane

0x0093,	// (0x000636fa) main_calllock_pane

0xe781,	// (0x00071de8) call6_btn_grp_pane_ParamLimits

0xe781,	// (0x00071de8) call6_btn_grp_pane

0xe78e,	// (0x00071df5) call6_pane_g1_ParamLimits

0xe78e,	// (0x00071df5) call6_pane_g1

0xe79b,	// (0x00071e02) popup_call6_1st_window_ParamLimits

0xe79b,	// (0x00071e02) popup_call6_1st_window

0xe7a7,	// (0x00071e0e) popup_call6_2nd_window_ParamLimits

0xe7a7,	// (0x00071e0e) popup_call6_2nd_window

0xe7b3,	// (0x00071e1a) cell_call6_btn_pane_ParamLimits

0xe7b3,	// (0x00071e1a) cell_call6_btn_pane

0x0acc,	// (0x00064133) bg_popup_call2_in_pane_cp03

0x3cc1,	// (0x00067328) popup_call6_1st_window_g1

0x3cc9,	// (0x00067330) popup_call6_1st_window_g2

0x3cd1,	// (0x00067338) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00073540) popup_call6_1st_window_g

0x3cd9,	// (0x00067340) popup_call6_1st_window_t1

0x3ce8,	// (0x0006734f) popup_call6_1st_window_t2

0x3cf6,	// (0x0006735d) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x00073547) popup_call6_1st_window_t

0x0acc,	// (0x00064133) bg_popup_call2_in_pane_cp04

0x3cc1,	// (0x00067328) popup_call6_2nd_window_g1

0x3cc9,	// (0x00067330) popup_call6_2nd_window_g2

0x3cd1,	// (0x00067338) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00073540) popup_call6_2nd_window_g

0x3cd9,	// (0x00067340) popup_call6_2nd_window_t1

0x0093,	// (0x000636fa) bg_button_pane_cp15

0xe7c2,	// (0x00071e29) cell_call6_btn_pane_g1

0xe7cb,	// (0x00071e32) cell_call6_btn_pane_t1

0xe7da,	// (0x00071e41) listscroll_wgtman_pane_ParamLimits

0xe7da,	// (0x00071e41) listscroll_wgtman_pane

0xe7f6,	// (0x00071e5d) wgtman_btn_pane_ParamLimits

0xe7f6,	// (0x00071e5d) wgtman_btn_pane

0x13a3,	// (0x00064a0a) aid_scroll_copy1

0x3d04,	// (0x0006736b) list_wgtman_pane

0xe829,	// (0x00071e90) wgtman_btn_pane_g1_ParamLimits

0xe829,	// (0x00071e90) wgtman_btn_pane_g1

0xe851,	// (0x00071eb8) wgtman_btn_pane_t1_ParamLimits

0xe851,	// (0x00071eb8) wgtman_btn_pane_t1

0x3d0e,	// (0x00067375) wgtman_btn_pane_t2_ParamLimits

0x3d0e,	// (0x00067375) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0007354e) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0007354e) wgtman_btn_pane_t

0xe888,	// (0x00071eef) listrow_wgtman_pane_ParamLimits

0xe888,	// (0x00071eef) listrow_wgtman_pane

0xe899,	// (0x00071f00) listrow_wgtman_pane_g1

0xe8a6,	// (0x00071f0d) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00073553) listrow_wgtman_pane_g

0x7787,	// (0x0006adee) listrow_wgtman_pane_t1

0x779f,	// (0x0006ae06) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x00073558) listrow_wgtman_pane_t

0x77c5,	// (0x0006ae2c) wait_bar_pane_cp09

0x3d25,	// (0x0006738c) main_calllock_btn_pane

0x3d2d,	// (0x00067394) main_calllock_pane_g1

0x0093,	// (0x000636fa) bg_button_pane_cp17

0x3d36,	// (0x0006739d) main_calllock_btn_pane_g1

0x3d3f,	// (0x000673a6) main_calllock_btn_pane_t1

0x0093,	// (0x000636fa) main_dialer3_pane

0x0093,	// (0x000636fa) main_fmrd2_pane

0x5004,	// (0x0006866b) main_fs_bigclock_unlock_btn_pane_g1

0x3d56,	// (0x000673bd) main_fs_bigclock_unlock_btn_pane_t1

0xe8be,	// (0x00071f25) area_fmrd2_info_pane_ParamLimits

0xe8be,	// (0x00071f25) area_fmrd2_info_pane

0xe8ca,	// (0x00071f31) area_fmrd2_visual_pane_ParamLimits

0xe8ca,	// (0x00071f31) area_fmrd2_visual_pane

0xe8d8,	// (0x00071f3f) fmrd2_indi_pane_ParamLimits

0xe8d8,	// (0x00071f3f) fmrd2_indi_pane

0xe8e5,	// (0x00071f4c) area_fmrd2_visual_pane_g1

0xe8ed,	// (0x00071f54) area_fmrd2_visual_pane_t1

0xe8fb,	// (0x00071f62) area_fmrd2_visual_pane_t2

0xe909,	// (0x00071f70) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x00073562) area_fmrd2_visual_pane_t

0xe917,	// (0x00071f7e) area_fmrd2_info_pane_g1

0xe91f,	// (0x00071f86) area_fmrd2_info_pane_t1

0xe92d,	// (0x00071f94) area_fmrd2_info_pane_t2

0xe93b,	// (0x00071fa2) area_fmrd2_info_pane_t3

0xe949,	// (0x00071fb0) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x00073569) area_fmrd2_info_pane_t

0xe957,	// (0x00071fbe) fmrd2_indi_pane_t1

0xe965,	// (0x00071fcc) fmrd2_indi_pane_t2

0xe973,	// (0x00071fda) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x00073572) fmrd2_indi_pane_t

0x3059,	// (0x000666c0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3059,	// (0x000666c0) list_single_fs_bigclock_indicator_pane_g5

0x3107,	// (0x0006676e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3107,	// (0x0006676e) list_single_fs_bigclock_indicator_pane_t5

0xe289,	// (0x000718f0) aid_cell_bcale_month_pane_ParamLimits

0xe289,	// (0x000718f0) aid_cell_bcale_month_pane

0xe2b0,	// (0x00071917) bcale_month_pane_ParamLimits

0xe2b0,	// (0x00071917) bcale_month_pane

0xe2c6,	// (0x0007192d) bcale_preview_pane_ParamLimits

0xe2c6,	// (0x0007192d) bcale_preview_pane

0x3b09,	// (0x00067170) list_single_fs_bigclock_pane_t1_ParamLimits

0x3b25,	// (0x0006718c) list_single_fs_bigclock_pane_t2_ParamLimits

0x3b25,	// (0x0006718c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x000734f4) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x000734f4) list_single_fs_bigclock_pane_t

0x3d4e,	// (0x000673b5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0007355d) main_fs_bigclock_unlock_btn_pane_g

0xe981,	// (0x00071fe8) aid_dia3_key_size_ParamLimits

0xe981,	// (0x00071fe8) aid_dia3_key_size

0xe98d,	// (0x00071ff4) aid_dia3_listrow_size_ParamLimits

0xe98d,	// (0x00071ff4) aid_dia3_listrow_size

0xe99b,	// (0x00072002) dia3_keypad_fun_pane_ParamLimits

0xe99b,	// (0x00072002) dia3_keypad_fun_pane

0xe9a7,	// (0x0007200e) dia3_keypad_num_pane_ParamLimits

0xe9a7,	// (0x0007200e) dia3_keypad_num_pane

0xe9b3,	// (0x0007201a) dia3_listscroll_pane_ParamLimits

0xe9b3,	// (0x0007201a) dia3_listscroll_pane

0xe9bf,	// (0x00072026) dia3_numentry_pane_ParamLimits

0xe9bf,	// (0x00072026) dia3_numentry_pane

0x3d64,	// (0x000673cb) dia3_list_pane

0x3d6d,	// (0x000673d4) scroll_pane_cp12

0x0093,	// (0x000636fa) bg_dia3_numentry_pane

0xe9cb,	// (0x00072032) dia3_numentry_pane_t1

0xe9da,	// (0x00072041) cell_dia3_key_num_pane

0xe9e2,	// (0x00072049) cell_dia3_key0_fun_pane_ParamLimits

0xe9e2,	// (0x00072049) cell_dia3_key0_fun_pane

0xe9ef,	// (0x00072056) cell_dia3_key1_fun_pane_ParamLimits

0xe9ef,	// (0x00072056) cell_dia3_key1_fun_pane

0xe9fc,	// (0x00072063) dia3_listrow_pane

0x2d5a,	// (0x000663c1) bg_dia3_numentry_pane_g1

0x0093,	// (0x000636fa) bg_button_pane_cp21

0x3d76,	// (0x000673dd) cell_dia3_key_num_pane_t1

0x3d84,	// (0x000673eb) cell_dia3_key_num_pane_t2

0x3d93,	// (0x000673fa) cell_dia3_key_num_pane_t3

0x3da2,	// (0x00067409) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x00073579) cell_dia3_key_num_pane_t

0x0093,	// (0x000636fa) bg_button_pane_cp19

0x3db1,	// (0x00067418) cell_dia3_key0_fun_pane_g1

0x0093,	// (0x000636fa) bg_button_pane_cp20

0xea09,	// (0x00072070) cell_dia3_key1_fun_pane_g1

0xea11,	// (0x00072078) area_left_week_number_pane

0xea22,	// (0x00072089) area_top_day_name_pane

0xea2e,	// (0x00072095) frame_month_view_pane

0x3db9,	// (0x00067420) grid_month_view_pane

0xea3f,	// (0x000720a6) cell_top_day_name_pane_ParamLimits

0xea3f,	// (0x000720a6) cell_top_day_name_pane

0xea55,	// (0x000720bc) cell_area_left_week_number_pane_ParamLimits

0xea55,	// (0x000720bc) cell_area_left_week_number_pane

0xea74,	// (0x000720db) cell_month_view_pane_ParamLimits

0xea74,	// (0x000720db) cell_month_view_pane

0x3dc7,	// (0x0006742e) frm_month_g1

0xea9a,	// (0x00072101) frm_month_g2

0xeaa9,	// (0x00072110) frm_month_g3

0xeab8,	// (0x0007211f) frm_month_g4

0xeac7,	// (0x0007212e) frm_month_g5

0xead6,	// (0x0007213d) frm_month_g6

0xeae5,	// (0x0007214c) frm_month_g7

0x3dd4,	// (0x0006743b) frm_month_g8

0xeaf4,	// (0x0007215b) frm_month_g9

0xeb01,	// (0x00072168) frm_month_g10

0xeb0e,	// (0x00072175) frm_month_g11

0xeb1b,	// (0x00072182) frm_month_g12

0xeb28,	// (0x0007218f) frm_month_g13

0xeb35,	// (0x0007219c) frm_month_g14

0xeb42,	// (0x000721a9) frm_month_g15

0xeb4f,	// (0x000721b6) frm_month_g16

0x000f,

0xff1b,	// (0x00073582) frm_month_g

0x3de1,	// (0x00067448) cell_top_day_name_pane_t1

0xeb5c,	// (0x000721c3) cell_area_left_week_number_pane_g1

0xeb6b,	// (0x000721d2) cell_area_left_week_number_pane_t1

0x5233,	// (0x0006889a) cell_month_view_pane_g1

0xeb81,	// (0x000721e8) cell_month_view_pane_t1

0x0093,	// (0x000636fa) main_fps_pane

0x3362,	// (0x000669c9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3362,	// (0x000669c9) cmail_ddmenu_btn02_pane_cp1

0x337e,	// (0x000669e5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x337e,	// (0x000669e5) cmail_ddmenu_btn02_pane_cp2

0xe45b,	// (0x00071ac2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe45b,	// (0x00071ac2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x000734a7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x000734a7) cmail_ddmenu_btn02_pane_g

0xe479,	// (0x00071ae0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe479,	// (0x00071ae0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x000734ac) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x000734ac) cmail_ddmenu_btn02_pane_t

0xeb97,	// (0x000721fe) fps_text_pane_ParamLimits

0xeb97,	// (0x000721fe) fps_text_pane

0xeba4,	// (0x0007220b) main_fps_pane_g1_ParamLimits

0xeba4,	// (0x0007220b) main_fps_pane_g1

0xebb0,	// (0x00072217) wait_bar_pane_cp010_ParamLimits

0xebb0,	// (0x00072217) wait_bar_pane_cp010

0xebbc,	// (0x00072223) fps_text_pane_t1_ParamLimits

0xebbc,	// (0x00072223) fps_text_pane_t1

0xc45c,	// (0x0006fac3) cam4_image_uncrop_pane_g1

0xc465,	// (0x0006facc) cam4_image_uncrop_pane_g2

0xc46e,	// (0x0006fad5) cam4_image_uncrop_pane_g3

0xc477,	// (0x0006fade) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00072f68) cam4_image_uncrop_pane_g

0xe9fc,	// (0x00072063) dia3_listrow_pane_ParamLimits

0x0093,	// (0x000636fa) main_phob2_pane

0xe148,	// (0x000717af) cell_tport_appsw_pane_cp02_ParamLimits

0xe148,	// (0x000717af) cell_tport_appsw_pane_cp02

0xe155,	// (0x000717bc) cell_tport_appsw_pane_cp03_ParamLimits

0xe155,	// (0x000717bc) cell_tport_appsw_pane_cp03

0x0093,	// (0x000636fa) phob2_contact_card_pane

0x0093,	// (0x000636fa) phob2_listscroll_pane

0x3df4,	// (0x0006745b) phob2_list_pane

0x3dfc,	// (0x00067463) scroll_pane_cp034

0xebd5,	// (0x0007223c) phob2_cc_data_pane_ParamLimits

0xebd5,	// (0x0007223c) phob2_cc_data_pane

0xebed,	// (0x00072254) phob2_cc_listscroll_pane_ParamLimits

0xebed,	// (0x00072254) phob2_cc_listscroll_pane

0xec05,	// (0x0007226c) list_double_large_graphic_phob2_pane_ParamLimits

0xec05,	// (0x0007226c) list_double_large_graphic_phob2_pane

0xec17,	// (0x0007227e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xec17,	// (0x0007227e) list_double_large_graphic_phob2_pane_g1

0x77d7,	// (0x0006ae3e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x77d7,	// (0x0006ae3e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x000735a3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x000735a3) list_double_large_graphic_phob2_pane_g

0x77e3,	// (0x0006ae4a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x77e3,	// (0x0006ae4a) list_double_large_graphic_phob2_pane_t1

0x77f9,	// (0x0006ae60) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x77f9,	// (0x0006ae60) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x000735a8) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x000735a8) list_double_large_graphic_phob2_pane_t

0x0093,	// (0x000636fa) list_highlight_pane_cp024

0xec2d,	// (0x00072294) phob2_cc_button_pane

0xec35,	// (0x0007229c) phob2_cc_data_pane_g1_ParamLimits

0xec35,	// (0x0007229c) phob2_cc_data_pane_g1

0xec41,	// (0x000722a8) phob2_cc_data_pane_g2_ParamLimits

0xec41,	// (0x000722a8) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x000735ad) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x000735ad) phob2_cc_data_pane_g

0xec4d,	// (0x000722b4) phob2_cc_data_pane_t1_ParamLimits

0xec4d,	// (0x000722b4) phob2_cc_data_pane_t1

0xec5f,	// (0x000722c6) phob2_cc_data_pane_t2_ParamLimits

0xec5f,	// (0x000722c6) phob2_cc_data_pane_t2

0xec71,	// (0x000722d8) phob2_cc_data_pane_t3_ParamLimits

0xec71,	// (0x000722d8) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x000735b2) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x000735b2) phob2_cc_data_pane_t

0x3e04,	// (0x0006746b) phob2_cc_list_pane_ParamLimits

0x3e04,	// (0x0006746b) phob2_cc_list_pane

0x2c77,	// (0x000662de) scroll_pane_cp035_ParamLimits

0x2c77,	// (0x000662de) scroll_pane_cp035

0x2251,	// (0x000658b8) bg_button_pane_cp033

0x3e10,	// (0x00067477) phob2_cc_button_pane_g1

0x3e1c,	// (0x00067483) phob2_cc_button_pane_t1

0x3e31,	// (0x00067498) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x000735b9) phob2_cc_button_pane_t

0xec83,	// (0x000722ea) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xec83,	// (0x000722ea) list_double_large_graphic_phob2_cc_pane

0xecc9,	// (0x00072330) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xecc9,	// (0x00072330) list_double_large_graphic_phob2_cc_pane_g1

0xecda,	// (0x00072341) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xecda,	// (0x00072341) list_double_large_graphic_phob2_cc_pane_g2

0x780e,	// (0x0006ae75) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x780e,	// (0x0006ae75) list_double_large_graphic_phob2_cc_pane_g3

0x781d,	// (0x0006ae84) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x781d,	// (0x0006ae84) list_double_large_graphic_phob2_cc_pane_g4

0x782e,	// (0x0006ae95) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x782e,	// (0x0006ae95) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x000735be) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x000735be) list_double_large_graphic_phob2_cc_pane_g

0x783d,	// (0x0006aea4) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x783d,	// (0x0006aea4) list_double_large_graphic_phob2_cc_pane_t1

0x7866,	// (0x0006aecd) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x7866,	// (0x0006aecd) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x000735c9) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x000735c9) list_double_large_graphic_phob2_cc_pane_t

0x3e43,	// (0x000674aa) list_highlight_pane_cp025_ParamLimits

0x3e43,	// (0x000674aa) list_highlight_pane_cp025

0x2251,	// (0x000658b8) bg_button_pane_cp033_ParamLimits

0x3e10,	// (0x00067477) phob2_cc_button_pane_g1_ParamLimits

0x3e1c,	// (0x00067483) phob2_cc_button_pane_t1_ParamLimits

0x3e31,	// (0x00067498) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x000735b9) phob2_cc_button_pane_t_ParamLimits

0x7af5,	// (0x0006b15c) popup_wgtman_window

0x2d7a,	// (0x000663e1) scroll_pane_cp038

0xe811,	// (0x00071e78) wgtman_btn_pane_cp_01_ParamLimits

0xe811,	// (0x00071e78) wgtman_btn_pane_cp_01

0x3e51,	// (0x000674b8) wgtman_content_pane

0x3e5a,	// (0x000674c1) wgtman_heading_pane

0x0093,	// (0x000636fa) bg_heading_pane_cp02

0x3e63,	// (0x000674ca) wgtman_heading_pane_g1

0x3e6b,	// (0x000674d2) wgtman_heading_pane_t1

0x3e79,	// (0x000674e0) scroll_pane_cp036

0x3e81,	// (0x000674e8) wgtman_list_pane

0x3e89,	// (0x000674f0) wgtman_list_pane_t1_ParamLimits

0x3e89,	// (0x000674f0) wgtman_list_pane_t1

0xc3c1,	// (0x0006fa28) cam4_grid_pane

0x6ae5,	// (0x0006a14c) bg_button_pane_cp015_ParamLimits

0xcf90,	// (0x000705f7) bg_button_pane_cp016_ParamLimits

0xcfa3,	// (0x0007060a) bg_button_pane_cp017_ParamLimits

0x6b23,	// (0x0006a18a) popup_vitu2_query_window_g3_ParamLimits

0x6b23,	// (0x0006a18a) popup_vitu2_query_window_g3

0x6b9c,	// (0x0006a203) popup_vitu2_query_window_t6_ParamLimits

0x6b9c,	// (0x0006a203) popup_vitu2_query_window_t6

0x6bc7,	// (0x0006a22e) popup_vitu2_query_window_t7_ParamLimits

0x6bc7,	// (0x0006a22e) popup_vitu2_query_window_t7

0xf0b4,	// (0x0007271b) cam4_grid_pane_g1

0xf0bd,	// (0x00072724) cam4_grid_pane_g2

0x3ea0,	// (0x00067507) cam4_grid_pane_g3

0x3ea9,	// (0x00067510) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x000735ce) cam4_grid_pane_g

0x88ca,	// (0x0006bf31) aid_placing_vt_slider_lsc_ParamLimits

0x8b74,	// (0x0006c1db) vidtel_button_pane_ParamLimits

0x8b74,	// (0x0006c1db) vidtel_button_pane

0x0093,	// (0x000636fa) bg_button_pane_cp034

0xece9,	// (0x00072350) vidtel_button_pane_g1

0xecf1,	// (0x00072358) vidtel_button_pane_t1

0x2377,	// (0x000659de) aid_size_vtel_slider_touch

0x2c77,	// (0x000662de) scroll_pane_cp039

0x2da9,	// (0x00066410) ncim_query_button_pane_cp01_ParamLimits

0x2dc8,	// (0x0006642f) ncimui_query_pane_g1_ParamLimits

0x2251,	// (0x000658b8) input_focus_pane_cp012_ParamLimits

0x2ded,	// (0x00066454) ncim_query_entry_pane_t1_ParamLimits

0x2c77,	// (0x000662de) scroll_pane_cp039_ParamLimits

0x1467,	// (0x00064ace) navi_pane_bcale_mc_g1

0x146f,	// (0x00064ad6) navi_pane_bcale_mc_t1

0x33c7,	// (0x00066a2e) main_sp_fs_email_pane_g1

0x33d3,	// (0x00066a3a) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0007335f) main_sp_fs_email_pane_g

0x3850,	// (0x00066eb7) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3850,	// (0x00066eb7) list_single_cale_mrui_row_pane_g3

0x76ee,	// (0x0006ad55) list_single_recal_day_pane_g5_event_pane

0x7705,	// (0x0006ad6c) list_single_recal_day_pane_g7

0x3eb2,	// (0x00067519) list_recal_day_event_pane_cp01

0x3ebb,	// (0x00067522) list_recal_vselct_arw_lo_pane_cp01

0x3ec3,	// (0x0006752a) list_recal_vselct_arw_up_pane_cp01

0x3ecb,	// (0x00067532) list_recal_vselct_pane_cp01

0x2399,	// (0x00065a00) list_recal_day_event_pane_cp01_g1

0x788f,	// (0x0006aef6) list_recal_day_event_pane_cp01_t1

0x770d,	// (0x0006ad74) list_single_recal_day_pane_t1_ParamLimits

0x771f,	// (0x0006ad86) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x000734bc) list_single_recal_day_pane_t_ParamLimits

0x0772,	// (0x00063dd9) bg_notes_pane_ParamLimits

0x081d,	// (0x00063e84) list_notes_pane_ParamLimits

0x7df2,	// (0x0006b459) scroll_pane_cp06_ParamLimits

0x085d,	// (0x00063ec4) main_notes_pane_ParamLimits

0x0093,	// (0x000636fa) main_welc_pane

0xed07,	// (0x0007236e) main_welc_body_pane_ParamLimits

0xed07,	// (0x0007236e) main_welc_body_pane

0xed20,	// (0x00072387) main_welc_opti_pane_ParamLimits

0xed20,	// (0x00072387) main_welc_opti_pane

0xed4d,	// (0x000723b4) main_welc_pane_t1_ParamLimits

0xed4d,	// (0x000723b4) main_welc_pane_t1

0xed65,	// (0x000723cc) main_welc_body_row_pane_ParamLimits

0xed65,	// (0x000723cc) main_welc_body_row_pane

0x3ee3,	// (0x0006754a) main_welc_opti_row_pane_ParamLimits

0x3ee3,	// (0x0006754a) main_welc_opti_row_pane

0x3ef1,	// (0x00067558) main_welc_opti_row_pane_g1

0xed7a,	// (0x000723e1) main_welc_opti_row_pane_t1

0x3ef9,	// (0x00067560) main_welc_body_row_pane_t1

0x3c00,	// (0x00067267) popup_notif_wgt_heading_pane

0x3c1a,	// (0x00067281) aid_size_list_notif_wgt_del_ParamLimits

0x3c27,	// (0x0006728e) list_notif_wgt_row_pane_g1_ParamLimits

0x3c33,	// (0x0006729a) list_notif_wgt_row_pane_g2_ParamLimits

0x3c47,	// (0x000672ae) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x00073523) list_notif_wgt_row_pane_g_ParamLimits

0x3c54,	// (0x000672bb) list_notif_wgt_row_pane_t1_ParamLimits

0x3c6a,	// (0x000672d1) list_notif_wgt_row_pane_t2_ParamLimits

0x3c7c,	// (0x000672e3) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x0007352a) list_notif_wgt_row_pane_t_ParamLimits

0xe899,	// (0x00071f00) listrow_wgtman_pane_g1_ParamLimits

0xe8a6,	// (0x00071f0d) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x00073553) listrow_wgtman_pane_g_ParamLimits

0x7787,	// (0x0006adee) listrow_wgtman_pane_t1_ParamLimits

0x779f,	// (0x0006ae06) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x00073558) listrow_wgtman_pane_t_ParamLimits

0x77c5,	// (0x0006ae2c) wait_bar_pane_cp09_ParamLimits

0x0093,	// (0x000636fa) bg_popup_heading_pane_cp02

0x3f08,	// (0x0006756f) popup_notif_wgt_heading_pane_g1

0x3f10,	// (0x00067577) popup_notif_wgt_heading_pane_t1

0x4c00,	// (0x00068267) main_vids_pane

0x0093,	// (0x000636fa) vids_listscroll_pane

0xed89,	// (0x000723f0) scroll_pane_cp040

0x0093,	// (0x000636fa) vids_list_pane

0xed92,	// (0x000723f9) vids_list_double_pane_ParamLimits

0xed92,	// (0x000723f9) vids_list_double_pane

0xeda3,	// (0x0007240a) vids_list_double_pane_g1

0xedac,	// (0x00072413) vids_list_double_pane_t1

0xedbc,	// (0x00072423) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x000735dc) vids_list_double_pane_t

0x2251,	// (0x000658b8) main_ncimui_pane_ParamLimits

0xd9e4,	// (0x0007104b) main_ncimui_pane_g1_ParamLimits

0xd9f0,	// (0x00071057) main_ncimui_pane_g2_ParamLimits

0xd9f0,	// (0x00071057) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x00073264) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x00073264) main_ncimui_pane_g

0xed35,	// (0x0007239c) main_welc_pane_g1_ParamLimits

0xed35,	// (0x0007239c) main_welc_pane_g1

0xed41,	// (0x000723a8) main_welc_pane_g2_ParamLimits

0xed41,	// (0x000723a8) main_welc_pane_g2

0x0001,

0xff70,	// (0x000735d7) main_welc_pane_g_ParamLimits

0xff70,	// (0x000735d7) main_welc_pane_g

0x0772,	// (0x00063dd9) listscroll_mce_pane_ParamLimits

0x9b76,	// (0x0006d1dd) wait_bar_pane_cp10

0x4be6,	// (0x0006824d) main_cale_day_pane_ParamLimits

0x4be6,	// (0x0006824d) main_cale_week_pane_ParamLimits

0x0772,	// (0x00063dd9) main_messa_pane_ParamLimits

0xb85f,	// (0x0006eec6) main_clock2_btn_pane_ParamLimits

0xb85f,	// (0x0006eec6) main_clock2_btn_pane

0x53bb,	// (0x00068a22) main_clock2_btn_pane_cp01_ParamLimits

0x53bb,	// (0x00068a22) main_clock2_btn_pane_cp01

0x380b,	// (0x00066e72) list_cale_mrui_pane_ParamLimits

0x3cb0,	// (0x00067317) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x00073531) main_cf0_pane_g

0xea11,	// (0x00072078) area_left_week_number_pane_ParamLimits

0xea22,	// (0x00072089) area_top_day_name_pane_ParamLimits

0xea2e,	// (0x00072095) frame_month_view_pane_ParamLimits

0x3db9,	// (0x00067420) grid_month_view_pane_ParamLimits

0x3dc7,	// (0x0006742e) frm_month_g1_ParamLimits

0xea9a,	// (0x00072101) frm_month_g2_ParamLimits

0xeaa9,	// (0x00072110) frm_month_g3_ParamLimits

0xeab8,	// (0x0007211f) frm_month_g4_ParamLimits

0xeac7,	// (0x0007212e) frm_month_g5_ParamLimits

0xead6,	// (0x0007213d) frm_month_g6_ParamLimits

0xeae5,	// (0x0007214c) frm_month_g7_ParamLimits

0x3dd4,	// (0x0006743b) frm_month_g8_ParamLimits

0xeaf4,	// (0x0007215b) frm_month_g9_ParamLimits

0xeb01,	// (0x00072168) frm_month_g10_ParamLimits

0xeb0e,	// (0x00072175) frm_month_g11_ParamLimits

0xeb1b,	// (0x00072182) frm_month_g12_ParamLimits

0xeb28,	// (0x0007218f) frm_month_g13_ParamLimits

0xeb35,	// (0x0007219c) frm_month_g14_ParamLimits

0xeb42,	// (0x000721a9) frm_month_g15_ParamLimits

0xeb4f,	// (0x000721b6) frm_month_g16_ParamLimits

0xff1b,	// (0x00073582) frm_month_g_ParamLimits

0x3de1,	// (0x00067448) cell_top_day_name_pane_t1_ParamLimits

0xeb5c,	// (0x000721c3) cell_area_left_week_number_pane_g1_ParamLimits

0xeb6b,	// (0x000721d2) cell_area_left_week_number_pane_t1_ParamLimits

0x5233,	// (0x0006889a) cell_month_view_pane_g1_ParamLimits

0xeb81,	// (0x000721e8) cell_month_view_pane_t1_ParamLimits

0x076a,	// (0x00063dd1) main_clock2_btn_pane_g1

0x3f1e,	// (0x00067585) main_clock2_btn_pane_t1

0x2251,	// (0x000658b8) listscroll_cmail_pane_ParamLimits

0x33c7,	// (0x00066a2e) main_sp_fs_email_pane_g1_ParamLimits

0x33d3,	// (0x00066a3a) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0007335f) main_sp_fs_email_pane_g_ParamLimits

0x3935,	// (0x00066f9c) list_recal_day_pane_ParamLimits

0x3946,	// (0x00066fad) mian_recal_day_pane_t1

0x70f7,	// (0x0006a75e) list_single_dyc_row_text_pane_t4_ParamLimits

0x70f7,	// (0x0006a75e) list_single_dyc_row_text_pane_t4

0x712e,	// (0x0006a795) list_single_dyc_row_text_pane_t5_ParamLimits

0x712e,	// (0x0006a795) list_single_dyc_row_text_pane_t5

0x71a3,	// (0x0006a80a) list_single_dyc_row_text_pane_t6_ParamLimits

0x71a3,	// (0x0006a80a) list_single_dyc_row_text_pane_t6

0x9795,	// (0x0006cdfc) aid_mgn_list_cale_time_pane

0x2251,	// (0x000658b8) main_gallery2_pane_ParamLimits

0x53cf,	// (0x00068a36) main_clock2_pane_cp01_t1

0x53dd,	// (0x00068a44) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x00072e3a) main_clock2_pane_cp01_t

0x81ac,	// (0x0006b813) cale_week_scroll_pane_g16_ParamLimits

0x81ac,	// (0x0006b813) cale_week_scroll_pane_g16

0x0acc,	// (0x00064133) vorec_slider_pane

0xecf1,	// (0x00072358) vidtel_button_pane_t1_ParamLimits

0x5298,	// (0x000688ff) main_fs_bigclock_clock_pane_g1_ParamLimits

0xe50f,	// (0x00071b76) main_fs_bigclock_clock_pane_g2_ParamLimits

0xe51c,	// (0x00071b83) main_fs_bigclock_clock_pane_g3_ParamLimits

0xe51c,	// (0x00071b83) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe78,	// (0x000734df) main_fs_bigclock_clock_pane_g_ParamLimits

0xe528,	// (0x00071b8f) main_fs_bigclock_clock_pane_t1_ParamLimits

0xe53a,	// (0x00071ba1) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe81,	// (0x000734e8) main_fs_bigclock_clock_pane_t_ParamLimits

0xb18b,	// (0x0006e7f2) main_mup3_lyrics_pane_ParamLimits

0xb18b,	// (0x0006e7f2) main_mup3_lyrics_pane

0xedee,	// (0x00072455) main_mup3_lyrics_pane_t1_ParamLimits

0xedee,	// (0x00072455) main_mup3_lyrics_pane_t1

0xbe2d,	// (0x0006f494) aid_main_mp4_pane_t1_area

0xbe2d,	// (0x0006f494) aid_main_mp4_pane_t2_area

0xbf18,	// (0x0006f57f) main_mp4_pane_g7_ParamLimits

0xbf18,	// (0x0006f57f) main_mp4_pane_g7

0xbf24,	// (0x0006f58b) main_mp4_pane_g8_ParamLimits

0xbf24,	// (0x0006f58b) main_mp4_pane_g8

0xc2d9,	// (0x0006f940) aid_call6_pane_g1_size

0xecad,	// (0x00072314) list_double_large_graphic_phob2_other_pane_ParamLimits

0xecad,	// (0x00072314) list_double_large_graphic_phob2_other_pane

0x13ba,	// (0x00064a21) list_double_large_graphic_phob2_other_pane_g1

0x0093,	// (0x000636fa) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large
