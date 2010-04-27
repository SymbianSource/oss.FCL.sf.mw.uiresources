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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0003d5a7 };

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
0x20d1,	// (0x0003f678) Screen

0x20dd,	// (0x0003f684) application_window

0x2139,	// (0x0003f6e0) area_bottom_pane_ParamLimits

0x2139,	// (0x0003f6e0) area_bottom_pane

0x2192,	// (0x0003f739) area_top_pane_ParamLimits

0x2192,	// (0x0003f739) area_top_pane

0x21f6,	// (0x0003f79d) call_video_uplink_pane_ParamLimits

0x21f6,	// (0x0003f79d) call_video_uplink_pane

0x2235,	// (0x0003f7dc) main_pane_ParamLimits

0x2235,	// (0x0003f7dc) main_pane

0xc7b3,	// (0x00049d5a) context_pane

0x558e,	// (0x00042b35) navi_pane

0x55b4,	// (0x00042b5b) popup_cale_events_window_ParamLimits

0x55b4,	// (0x00042b5b) popup_cale_events_window

0xc7c6,	// (0x00049d6d) popup_mup_playback_window

0x55cc,	// (0x00042b73) signal_pane

0xa73c,	// (0x00047ce3) main_browser_pane

0xa90a,	// (0x00047eb1) main_burst_pane

0x5424,	// (0x000429cb) main_calc_pane

0xc799,	// (0x00049d40) main_cale_day_pane

0x2968,	// (0x0003ff0f) main_cale_month_pane

0xc799,	// (0x00049d40) main_cale_week_pane

0xa90a,	// (0x00047eb1) main_call_pane

0xa3d2,	// (0x00047979) main_call_poc_pane

0xa90a,	// (0x00047eb1) main_camera_pane

0xa90a,	// (0x00047eb1) main_chi_dic_pane

0xb121,	// (0x000486c8) main_clock_pane

0xa3d2,	// (0x00047979) main_fmradio_pane

0xa90a,	// (0x00047eb1) main_graph_messa_pane

0xa3d2,	// (0x00047979) main_help_pane

0xa73c,	// (0x00047ce3) main_im_pane

0xa62d,	// (0x00047bd4) main_image_pane_ParamLimits

0xa62d,	// (0x00047bd4) main_image_pane

0xa3d2,	// (0x00047979) main_location2_pane

0xa90a,	// (0x00047eb1) main_location_pane

0xa62d,	// (0x00047bd4) main_messa_pane

0xa3d2,	// (0x00047979) main_mp2_pane

0xa90a,	// (0x00047eb1) main_mp_pane

0xa3d2,	// (0x00047979) main_msg_pane

0xa3d2,	// (0x00047979) main_mup_eq_pane

0xa3d2,	// (0x00047979) main_mup_pane

0xa73c,	// (0x00047ce3) main_notes_pane

0xa3d2,	// (0x00047979) main_pec_pane

0xa3d2,	// (0x00047979) main_phob_pane

0xa3d2,	// (0x00047979) main_pinb_pane

0xa3d2,	// (0x00047979) main_postcard_pane

0xa3d2,	// (0x00047979) main_qdial_pane

0xa90a,	// (0x00047eb1) main_skin_pane

0xa3d2,	// (0x00047979) main_smil2_pane

0xa90a,	// (0x00047eb1) main_smil_pane

0xa90a,	// (0x00047eb1) main_video_pane

0xa90a,	// (0x00047eb1) main_video_tele_pane

0xa62d,	// (0x00047bd4) main_viewer_pane_ParamLimits

0xa62d,	// (0x00047bd4) main_viewer_pane

0xa90a,	// (0x00047eb1) main_vorec_pane

0x5462,	// (0x00042a09) popup_blid_sat_info_window_ParamLimits

0x5462,	// (0x00042a09) popup_blid_sat_info_window

0x5482,	// (0x00042a29) popup_dyc_status_message_window_ParamLimits

0x5482,	// (0x00042a29) popup_dyc_status_message_window

0x5490,	// (0x00042a37) popup_grid_large_graphic_window_ParamLimits

0x5490,	// (0x00042a37) popup_grid_large_graphic_window

0x551f,	// (0x00042ac6) popup_loc_request_window_ParamLimits

0x551f,	// (0x00042ac6) popup_loc_request_window

0x5566,	// (0x00042b0d) popup_wml_address_window_ParamLimits

0x5566,	// (0x00042b0d) popup_wml_address_window

0x52fc,	// (0x000428a3) call_muted_g1

0x4fba,	// (0x00042561) popup_call_audio_conf_window_ParamLimits

0x4fba,	// (0x00042561) popup_call_audio_conf_window

0x530c,	// (0x000428b3) popup_call_audio_first_window_ParamLimits

0x530c,	// (0x000428b3) popup_call_audio_first_window

0x534c,	// (0x000428f3) popup_call_audio_in_window_ParamLimits

0x534c,	// (0x000428f3) popup_call_audio_in_window

0x5370,	// (0x00042917) popup_call_audio_out_window_ParamLimits

0x5370,	// (0x00042917) popup_call_audio_out_window

0x5392,	// (0x00042939) popup_call_audio_second_window_ParamLimits

0x5392,	// (0x00042939) popup_call_audio_second_window

0x53c2,	// (0x00042969) popup_call_audio_wait_window_ParamLimits

0x53c2,	// (0x00042969) popup_call_audio_wait_window

0x53e3,	// (0x0004298a) popup_number_entry_window_ParamLimits

0x53e3,	// (0x0004298a) popup_number_entry_window

0x9fbf,	// (0x00047566) bg_popup_call_pane_cp05_ParamLimits

0x9fbf,	// (0x00047566) bg_popup_call_pane_cp05

0x9fdf,	// (0x00047586) popup_number_entry_window_t1

0x9ff2,	// (0x00047599) popup_number_entry_window_t2

0xa004,	// (0x000475ab) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0004c671) popup_number_entry_window_t

0xa016,	// (0x000475bd) text_title_cp2

0xa029,	// (0x000475d0) bg_popup_call_pane_cp_ParamLimits

0xa029,	// (0x000475d0) bg_popup_call_pane_cp

0xa037,	// (0x000475de) call_thumbnail_pane

0xa03f,	// (0x000475e6) popup_call_audio_in_window_g1_ParamLimits

0xa03f,	// (0x000475e6) popup_call_audio_in_window_g1

0xa04b,	// (0x000475f2) popup_call_audio_in_window_g2_ParamLimits

0xa04b,	// (0x000475f2) popup_call_audio_in_window_g2

0xa057,	// (0x000475fe) popup_call_audio_in_window_g3_ParamLimits

0xa057,	// (0x000475fe) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0004c67a) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0004c67a) popup_call_audio_in_window_g

0xa063,	// (0x0004760a) popup_call_audio_in_window_t1_ParamLimits

0xa063,	// (0x0004760a) popup_call_audio_in_window_t1

0xa07f,	// (0x00047626) popup_call_audio_in_window_t2_ParamLimits

0xa07f,	// (0x00047626) popup_call_audio_in_window_t2

0xa09b,	// (0x00047642) popup_call_audio_in_window_t3_ParamLimits

0xa09b,	// (0x00047642) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0004c681) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0004c681) popup_call_audio_in_window_t

0xa029,	// (0x000475d0) bg_popup_call_pane_cp01_ParamLimits

0xa029,	// (0x000475d0) bg_popup_call_pane_cp01

0xa037,	// (0x000475de) call_thumbnail_pane_cp02

0xa0ae,	// (0x00047655) call_type_pane_cp022

0xa0b6,	// (0x0004765d) popup_call_audio_out_window_g1_ParamLimits

0xa0b6,	// (0x0004765d) popup_call_audio_out_window_g1

0xa0c8,	// (0x0004766f) popup_call_audio_out_window_g2_ParamLimits

0xa0c8,	// (0x0004766f) popup_call_audio_out_window_g2

0xa0d4,	// (0x0004767b) popup_call_audio_out_window_g3_ParamLimits

0xa0d4,	// (0x0004767b) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0004c688) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0004c688) popup_call_audio_out_window_g

0xa0e6,	// (0x0004768d) popup_call_audio_out_window_t1_ParamLimits

0xa0e6,	// (0x0004768d) popup_call_audio_out_window_t1

0xa0fe,	// (0x000476a5) popup_call_audio_out_window_t2_ParamLimits

0xa0fe,	// (0x000476a5) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0004c68f) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0004c68f) popup_call_audio_out_window_t

0xa113,	// (0x000476ba) bg_popup_call_pane_ParamLimits

0xa113,	// (0x000476ba) bg_popup_call_pane

0x2439,	// (0x0003f9e0) call_thumbnail_pane_cp_ParamLimits

0x2439,	// (0x0003f9e0) call_thumbnail_pane_cp

0xa197,	// (0x0004773e) call_type_pane_cp01_ParamLimits

0xa197,	// (0x0004773e) call_type_pane_cp01

0xa1db,	// (0x00047782) popup_call_audio_first_window_g1_ParamLimits

0xa1db,	// (0x00047782) popup_call_audio_first_window_g1

0xa227,	// (0x000477ce) popup_call_audio_first_window_g2_ParamLimits

0xa227,	// (0x000477ce) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0004c694) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0004c694) popup_call_audio_first_window_g

0xa26b,	// (0x00047812) popup_call_audio_first_window_t1_ParamLimits

0xa26b,	// (0x00047812) popup_call_audio_first_window_t1

0xa317,	// (0x000478be) popup_call_audio_first_window_t4_ParamLimits

0xa317,	// (0x000478be) popup_call_audio_first_window_t4

0xa3a3,	// (0x0004794a) popup_call_audio_first_window_t5_ParamLimits

0xa3a3,	// (0x0004794a) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0004c699) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0004c699) popup_call_audio_first_window_t

0xa3d2,	// (0x00047979) bg_popup_call_pane_cp02

0xa3dc,	// (0x00047983) call_type_pane_cp023

0xa3e4,	// (0x0004798b) popup_call_audio_wait_window_g1

0xa3ec,	// (0x00047993) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004c6a0) popup_call_audio_wait_window_g

0xa3f4,	// (0x0004799b) popup_call_audio_wait_window_t3

0xa402,	// (0x000479a9) bg_popup_call_pane_cp03_ParamLimits

0xa402,	// (0x000479a9) bg_popup_call_pane_cp03

0xa462,	// (0x00047a09) call_thumbnail_pane_cp011_ParamLimits

0xa462,	// (0x00047a09) call_thumbnail_pane_cp011

0xa46e,	// (0x00047a15) call_type_pane_cp034_ParamLimits

0xa46e,	// (0x00047a15) call_type_pane_cp034

0xa4aa,	// (0x00047a51) popup_call_audio_second_window_g1_ParamLimits

0xa4aa,	// (0x00047a51) popup_call_audio_second_window_g1

0xa4e6,	// (0x00047a8d) popup_call_audio_second_window_g2_ParamLimits

0xa4e6,	// (0x00047a8d) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0004c6a5) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0004c6a5) popup_call_audio_second_window_g

0xa522,	// (0x00047ac9) popup_call_audio_second_window_t1_ParamLimits

0xa522,	// (0x00047ac9) popup_call_audio_second_window_t1

0xa5a3,	// (0x00047b4a) popup_call_audio_second_window_t2_ParamLimits

0xa5a3,	// (0x00047b4a) popup_call_audio_second_window_t2

0xa5d9,	// (0x00047b80) popup_call_audio_second_window_t3_ParamLimits

0xa5d9,	// (0x00047b80) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0004c6aa) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0004c6aa) popup_call_audio_second_window_t

0xa3d2,	// (0x00047979) bg_popup_call_pane_cp04

0xa60f,	// (0x00047bb6) list_conf_pane

0xa617,	// (0x00047bbe) popup_call_audio_conf_window_t1

0xa625,	// (0x00047bcc) call_thumbnail_pane_g1

0xa62d,	// (0x00047bd4) bg_pinb_pane_ParamLimits

0xa62d,	// (0x00047bd4) bg_pinb_pane

0xa63b,	// (0x00047be2) find_pinb_pane

0xa644,	// (0x00047beb) listscroll_pinb_pane_ParamLimits

0xa644,	// (0x00047beb) listscroll_pinb_pane

0xa653,	// (0x00047bfa) pinb_bg_pane_g1

0x245d,	// (0x0003fa04) pinb_bg_pane_g2

0x2469,	// (0x0003fa10) pinb_bg_pane_g3

0x2475,	// (0x0003fa1c) pinb_bg_pane_g4

0x2481,	// (0x0003fa28) pinb_bg_pane_g5

0x248d,	// (0x0003fa34) pinb_bg_pane_g6

0x2498,	// (0x0003fa3f) pinb_bg_pane_g7

0x24a3,	// (0x0003fa4a) pinb_bg_pane_g8

0x24ae,	// (0x0003fa55) pinb_bg_pane_g9

0x24b8,	// (0x0003fa5f) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0004c6b1) pinb_bg_pane_g

0x24d5,	// (0x0003fa7c) grid_pinb_pane

0x24e0,	// (0x0003fa87) list_pinb_pane

0x24eb,	// (0x0003fa92) scroll_pane_cp01_ParamLimits

0x24eb,	// (0x0003fa92) scroll_pane_cp01

0xa65d,	// (0x00047c04) find_pinb_pane_g1_ParamLimits

0xa65d,	// (0x00047c04) find_pinb_pane_g1

0xa675,	// (0x00047c1c) find_pinb_pane_t1

0xa687,	// (0x00047c2e) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0004c6cb) find_pinb_pane_t

0xa69c,	// (0x00047c43) input_focus_pane_cp01_ParamLimits

0xa69c,	// (0x00047c43) input_focus_pane_cp01

0x24fd,	// (0x0003faa4) cell_pinb_pane_ParamLimits

0x24fd,	// (0x0003faa4) cell_pinb_pane

0xa6a8,	// (0x00047c4f) cell_pinb_pane_g1_ParamLimits

0xa6a8,	// (0x00047c4f) cell_pinb_pane_g1

0xa6bb,	// (0x00047c62) cell_pinb_pane_g2_ParamLimits

0xa6bb,	// (0x00047c62) cell_pinb_pane_g2

0xa6c7,	// (0x00047c6e) cell_pinb_pane_g3_ParamLimits

0xa6c7,	// (0x00047c6e) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0004c6d0) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0004c6d0) cell_pinb_pane_g

0xa3d2,	// (0x00047979) grid_highlight_pane_cp01

0x252c,	// (0x0003fad3) list_pinb_item_pane_ParamLimits

0x252c,	// (0x0003fad3) list_pinb_item_pane

0xa3d2,	// (0x00047979) list_highlight_pane_cp02

0x2556,	// (0x0003fafd) list_pinb_item_pane_g1_ParamLimits

0x2556,	// (0x0003fafd) list_pinb_item_pane_g1

0x2563,	// (0x0003fb0a) list_pinb_item_pane_g2_ParamLimits

0x2563,	// (0x0003fb0a) list_pinb_item_pane_g2

0x256f,	// (0x0003fb16) list_pinb_item_pane_g3_ParamLimits

0x256f,	// (0x0003fb16) list_pinb_item_pane_g3

0x2580,	// (0x0003fb27) list_pinb_item_pane_g4_ParamLimits

0x2580,	// (0x0003fb27) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0004c6d7) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0004c6d7) list_pinb_item_pane_g

0x258c,	// (0x0003fb33) list_pinb_item_pane_t1_ParamLimits

0x258c,	// (0x0003fb33) list_pinb_item_pane_t1

0x25bd,	// (0x0003fb64) calc_display_pane

0x25db,	// (0x0003fb82) calc_paper_pane

0x25f7,	// (0x0003fb9e) grid_calc_pane

0xa3d2,	// (0x00047979) bg_list_pane_cp01

0x2623,	// (0x0003fbca) clock_g1

0x262b,	// (0x0003fbd2) clock_g2

0x0001,

0xf139,	// (0x0004c6e0) clock_g

0x2635,	// (0x0003fbdc) clock_t1_ParamLimits

0x2635,	// (0x0003fbdc) clock_t1

0x264a,	// (0x0003fbf1) clock_t2_ParamLimits

0x264a,	// (0x0003fbf1) clock_t2

0x265c,	// (0x0003fc03) clock_t3_ParamLimits

0x265c,	// (0x0003fc03) clock_t3

0x266e,	// (0x0003fc15) clock_t4_ParamLimits

0x266e,	// (0x0003fc15) clock_t4

0x2680,	// (0x0003fc27) clock_t5_ParamLimits

0x2680,	// (0x0003fc27) clock_t5

0x2695,	// (0x0003fc3c) clock_t6_ParamLimits

0x2695,	// (0x0003fc3c) clock_t6

0x26a7,	// (0x0003fc4e) clock_t7_ParamLimits

0x26a7,	// (0x0003fc4e) clock_t7

0x26b9,	// (0x0003fc60) clock_t8_ParamLimits

0x26b9,	// (0x0003fc60) clock_t8

0x26cf,	// (0x0003fc76) clock_t9_ParamLimits

0x26cf,	// (0x0003fc76) clock_t9

0x0008,

0xf13e,	// (0x0004c6e5) clock_t_ParamLimits

0xf13e,	// (0x0004c6e5) clock_t

0xa6fe,	// (0x00047ca5) popup_clock_analogue_window_cp02

0xa6fe,	// (0x00047ca5) popup_clock_digital_window_cp01

0xa706,	// (0x00047cad) listscroll_help_pane

0xa3d2,	// (0x00047979) phob_pre_status_pane

0xa710,	// (0x00047cb7) grid_qdial_pane

0xa62d,	// (0x00047bd4) listscroll_mce_pane

0xa62d,	// (0x00047bd4) bg_notes_pane

0xa71a,	// (0x00047cc1) list_notes_pane

0x26e5,	// (0x0003fc8c) scroll_pane_cp06

0xa728,	// (0x00047ccf) bg_calc_paper_pane

0x26f4,	// (0x0003fc9b) list_calc_pane

0xa73c,	// (0x00047ce3) bg_calc_display_pane

0x270e,	// (0x0003fcb5) calc_display_pane_t1

0x2723,	// (0x0003fcca) calc_display_pane_t2

0x2738,	// (0x0003fcdf) calc_display_pane_t3

0x0002,

0xf151,	// (0x0004c6f8) calc_display_pane_t

0x274a,	// (0x0003fcf1) cell_calc_pane_ParamLimits

0x274a,	// (0x0003fcf1) cell_calc_pane

0xa748,	// (0x00047cef) bg_calc_paper_pane_g1

0xa754,	// (0x00047cfb) bg_calc_paper_pane_g2

0xa760,	// (0x00047d07) bg_calc_paper_pane_g3

0xa76c,	// (0x00047d13) bg_calc_paper_pane_g4

0xa778,	// (0x00047d1f) bg_calc_paper_pane_g5

0x2777,	// (0x0003fd1e) bg_calc_paper_pane_g6

0x2788,	// (0x0003fd2f) bg_calc_paper_pane_g7

0x2799,	// (0x0003fd40) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0004c6ff) bg_calc_paper_pane_g

0x27aa,	// (0x0003fd51) calc_bg_paper_pane_g9

0x27bb,	// (0x0003fd62) list_calc_item_pane_ParamLimits

0x27bb,	// (0x0003fd62) list_calc_item_pane

0xa784,	// (0x00047d2b) list_calc_item_pane_g1

0x27ef,	// (0x0003fd96) list_calc_item_pane_t1_ParamLimits

0x27ef,	// (0x0003fd96) list_calc_item_pane_t1

0x2801,	// (0x0003fda8) list_calc_item_pane_t2_ParamLimits

0x2801,	// (0x0003fda8) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0004c710) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0004c710) list_calc_item_pane_t

0xa791,	// (0x00047d38) cell_calc_pane_g1

0xa79b,	// (0x00047d42) grid_highlight_pane_cp02

0xa7bd,	// (0x00047d64) bg_calc_display_pane_g1

0x2831,	// (0x0003fdd8) bg_calc_display_pane_g2

0xa7c6,	// (0x00047d6d) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0004c71a) bg_calc_display_pane_g

0x283b,	// (0x0003fde2) cell_qdial_pane_ParamLimits

0x283b,	// (0x0003fde2) cell_qdial_pane

0x284f,	// (0x0003fdf6) cell_qdial_pane_g1_ParamLimits

0x284f,	// (0x0003fdf6) cell_qdial_pane_g1

0x285c,	// (0x0003fe03) cell_qdial_pane_g2_ParamLimits

0x285c,	// (0x0003fe03) cell_qdial_pane_g2

0xa7cf,	// (0x00047d76) cell_qdial_pane_g3_ParamLimits

0xa7cf,	// (0x00047d76) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0004c721) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0004c721) cell_qdial_pane_g

0x2879,	// (0x0003fe20) cell_qdial_pane_t1_ParamLimits

0x2879,	// (0x0003fe20) cell_qdial_pane_t1

0x2891,	// (0x0003fe38) cell_qdial_pane_t2_ParamLimits

0x2891,	// (0x0003fe38) cell_qdial_pane_t2

0x28a4,	// (0x0003fe4b) cell_qdial_pane_t3_ParamLimits

0x28a4,	// (0x0003fe4b) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0004c72a) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0004c72a) cell_qdial_pane_t

0xa3d2,	// (0x00047979) grid_highlight_pane_cp04

0xa7db,	// (0x00047d82) thumbnail_qdial_pane_ParamLimits

0xa7db,	// (0x00047d82) thumbnail_qdial_pane

0xa837,	// (0x00047dde) list_help_pane

0xa840,	// (0x00047de7) scroll_pane_cp02

0x28b7,	// (0x0003fe5e) help_list_pane_t1_ParamLimits

0x28b7,	// (0x0003fe5e) help_list_pane_t1

0x28f1,	// (0x0003fe98) bg_notes_pane_g2

0x28f9,	// (0x0003fea0) bg_notes_pane_g3

0x2901,	// (0x0003fea8) notes_bg_pane_g1

0x2909,	// (0x0003feb0) notes_bg_pane_g4

0x2911,	// (0x0003feb8) notes_bg_pane_g5

0x2919,	// (0x0003fec0) notes_bg_pane_g6

0x2921,	// (0x0003fec8) notes_bg_pane_g7

0x2929,	// (0x0003fed0) notes_bg_pane_g8

0x2931,	// (0x0003fed8) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0004c748) notes_bg_pane_g

0x2939,	// (0x0003fee0) list_notes_text_pane_ParamLimits

0x2939,	// (0x0003fee0) list_notes_text_pane

0xa849,	// (0x00047df0) list_notes_text_pane_g1

0x0cba,	// (0x0003e261) list_notes_text_pane_t1

0x2968,	// (0x0003ff0f) listscroll_cale_week_pane

0x298d,	// (0x0003ff34) bg_cale_heading_pane

0xa86c,	// (0x00047e13) bg_cale_pane_cp01

0x29af,	// (0x0003ff56) cale_week_corner_pane

0x29c9,	// (0x0003ff70) cale_week_day_heading_pane

0x29eb,	// (0x0003ff92) cale_week_scroll_pane_g1

0x2a08,	// (0x0003ffaf) cale_week_scroll_pane_g2

0x2a1b,	// (0x0003ffc2) cale_week_scroll_pane_g3

0x2a2e,	// (0x0003ffd5) cale_week_scroll_pane_g4

0x2a41,	// (0x0003ffe8) cale_week_scroll_pane_g5

0x2a54,	// (0x0003fffb) cale_week_scroll_pane_g6

0x2a67,	// (0x0004000e) cale_week_scroll_pane_g7

0x2a7a,	// (0x00040021) cale_week_scroll_pane_g8

0x2a8f,	// (0x00040036) cale_week_scroll_pane_g9

0x2aa2,	// (0x00040049) cale_week_scroll_pane_g10

0x2ab5,	// (0x0004005c) cale_week_scroll_pane_g11

0x2ac8,	// (0x0004006f) cale_week_scroll_pane_g12

0x2adf,	// (0x00040086) cale_week_scroll_pane_g13

0x2afa,	// (0x000400a1) cale_week_scroll_pane_g14

0x2b15,	// (0x000400bc) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0004c757) cale_week_scroll_pane_g

0x2b45,	// (0x000400ec) cale_week_time_pane

0x2b5a,	// (0x00040101) grid_cale_week_pane

0xa89b,	// (0x00047e42) scroll_pane_cp08

0x2b7b,	// (0x00040122) cell_cale_week_pane_ParamLimits

0x2b7b,	// (0x00040122) cell_cale_week_pane

0x2bdf,	// (0x00040186) cale_week_day_heading_pane_t1

0x2c1a,	// (0x000401c1) cale_week_day_heading_pane_t2

0x2c55,	// (0x000401fc) cale_week_day_heading_pane_t3

0x2c90,	// (0x00040237) cale_week_day_heading_pane_t4

0x2ccb,	// (0x00040272) cale_week_day_heading_pane_t5

0x2d06,	// (0x000402ad) cale_week_day_heading_pane_t6

0x2d41,	// (0x000402e8) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0004c778) cale_week_day_heading_pane_t

0xa8b8,	// (0x00047e5f) bg_cale_side_pane

0x2d7c,	// (0x00040323) cale_week_time_pane_t1

0x2d96,	// (0x0004033d) cale_week_time_pane_t2

0x2db0,	// (0x00040357) cale_week_time_pane_t3

0x2dca,	// (0x00040371) cale_week_time_pane_t4

0x2de4,	// (0x0004038b) cale_week_time_pane_t5

0x2e00,	// (0x000403a7) cale_week_time_pane_t6

0x2e22,	// (0x000403c9) cale_week_time_pane_t7

0x2e46,	// (0x000403ed) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0004c787) cale_week_time_pane_t

0x2e6c,	// (0x00040413) cell_cale_week_pane_g2

0x2e90,	// (0x00040437) cell_cale_week_pane_g3_ParamLimits

0x2e90,	// (0x00040437) cell_cale_week_pane_g3

0xa8c6,	// (0x00047e6d) grid_highlight_pane_cp07

0xa8ce,	// (0x00047e75) listscroll_gms_pane

0xa8d8,	// (0x00047e7f) grid_gms_pane

0xa8e1,	// (0x00047e88) listscroll_gms_pane_g1

0xa8e9,	// (0x00047e90) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0004c798) listscroll_gms_pane_g

0x2ea8,	// (0x0004044f) scroll_pane_cp010

0x2eb3,	// (0x0004045a) cell_gms_pane_ParamLimits

0x2eb3,	// (0x0004045a) cell_gms_pane

0x2ec3,	// (0x0004046a) cell_gms_pane_g1

0xa8f1,	// (0x00047e98) cell_gms_pane_g2

0xa849,	// (0x00047df0) cell_gms_pane_g3

0xa8f9,	// (0x00047ea0) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0004c79d) cell_gms_pane_g

0xa902,	// (0x00047ea9) grid_highlight_pane_cp09

0x52a4,	// (0x0004284b) phob_pre_status_pane_g1

0x52ac,	// (0x00042853) phob_pre_status_pane_g2

0x52b4,	// (0x0004285b) phob_pre_status_pane_g3

0x52bc,	// (0x00042863) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0004cb88) phob_pre_status_pane_g

0x52cc,	// (0x00042873) phob_pre_status_pane_t1

0x52dc,	// (0x00042883) phob_pre_status_pane_t2

0x52ec,	// (0x00042893) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0004cb93) phob_pre_status_pane_t

0xa90a,	// (0x00047eb1) bg_list_pane_cp05

0x2ed3,	// (0x0004047a) grid_vorec_pane

0x2edd,	// (0x00040484) vorec_t1

0x2eeb,	// (0x00040492) vorec_t2

0x2ef9,	// (0x000404a0) vorec_t3

0x2f07,	// (0x000404ae) vorec_t4

0x9f8f,	// (0x00047536) vorec_t5

0x9f9d,	// (0x00047544) vorec_t6

0x0004,

0xf1ff,	// (0x0004c7a6) vorec_t

0x9fab,	// (0x00047552) wait_bar_pane_cp01

0x2f23,	// (0x000404ca) cell_vorec_pane_ParamLimits

0x2f23,	// (0x000404ca) cell_vorec_pane

0x2f36,	// (0x000404dd) cell_vorec_pane_g1

0xa3d2,	// (0x00047979) grid_highlight_pane_cp05

0x2f50,	// (0x000404f7) cams_zoom_pane

0x2f5c,	// (0x00040503) image_vga_pane

0x2f6b,	// (0x00040512) main_camera_pane_g1

0x2f79,	// (0x00040520) main_camera_pane_g2

0x2f85,	// (0x0004052c) main_camera_pane_g3

0x2f91,	// (0x00040538) main_camera_pane_g4

0x2f9d,	// (0x00040544) main_camera_pane_g5

0x2fa9,	// (0x00040550) main_camera_pane_g6

0x2fb5,	// (0x0004055c) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0004c7b1) main_camera_pane_g

0x2fc1,	// (0x00040568) main_camera_pane_t1

0x2fd3,	// (0x0004057a) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0004c7c2) main_camera_pane_t

0x2ff4,	// (0x0004059b) cams_zoom_pane_cp_ParamLimits

0x2ff4,	// (0x0004059b) cams_zoom_pane_cp

0x3018,	// (0x000405bf) image_cif_pane_ParamLimits

0x3018,	// (0x000405bf) image_cif_pane

0x3036,	// (0x000405dd) image_subqcif_pane

0x303e,	// (0x000405e5) main_video_pane_g1_ParamLimits

0x303e,	// (0x000405e5) main_video_pane_g1

0x305e,	// (0x00040605) main_video_pane_g2_ParamLimits

0x305e,	// (0x00040605) main_video_pane_g2

0x308e,	// (0x00040635) main_video_pane_g3_ParamLimits

0x308e,	// (0x00040635) main_video_pane_g3

0x30b7,	// (0x0004065e) main_video_pane_g4_ParamLimits

0x30b7,	// (0x0004065e) main_video_pane_g4

0x30e0,	// (0x00040687) main_video_pane_g5_ParamLimits

0x30e0,	// (0x00040687) main_video_pane_g5

0xa91e,	// (0x00047ec5) main_video_pane_g6_ParamLimits

0xa91e,	// (0x00047ec5) main_video_pane_g6

0x0006,

0xf220,	// (0x0004c7c7) main_video_pane_g_ParamLimits

0xf220,	// (0x0004c7c7) main_video_pane_g

0x3102,	// (0x000406a9) main_video_pane_t1_ParamLimits

0x3102,	// (0x000406a9) main_video_pane_t1

0xa938,	// (0x00047edf) cams_zoom_pane_g1

0xa941,	// (0x00047ee8) cams_zoom_pane_g2

0xa94a,	// (0x00047ef1) cams_zoom_pane_g3

0xa953,	// (0x00047efa) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0004c7d6) cams_zoom_pane_g

0x314c,	// (0x000406f3) grid_cams_pane

0x315a,	// (0x00040701) linegrid_cams_pane

0x3168,	// (0x0004070f) cell_cams_pane_ParamLimits

0x3168,	// (0x0004070f) cell_cams_pane

0xa95c,	// (0x00047f03) cams_burst_image_pane

0xa964,	// (0x00047f0b) cell_cams_pane_g1

0xa3d2,	// (0x00047979) grid_highlight_pane_cp03

0xa791,	// (0x00047d38) mp_bg_pane_g1

0xa3d2,	// (0x00047979) bg_list_pane_cp03

0xc6be,	// (0x00049c65) bg_mp_pane

0xc6c6,	// (0x00049c6d) grid_mp_pane

0xc6ce,	// (0x00049c75) media_player_g1

0xc6d6,	// (0x00049c7d) media_player_t1

0xc6e4,	// (0x00049c8b) media_player_t2

0xc6f2,	// (0x00049c99) media_player_t3

0xc700,	// (0x00049ca7) media_player_t4

0xc70e,	// (0x00049cb5) media_player_t5

0xc71c,	// (0x00049cc3) media_player_t6

0xc72a,	// (0x00049cd1) media_player_t7

0x0006,

0xf5cb,	// (0x0004cb72) media_player_t

0xc738,	// (0x00049cdf) wait_bar_pane_cp02

0xf5b0,	// (0x0004cb57) main_usb_pane_t

0x529b,	// (0x00042842) cell_mp_pane

0xa791,	// (0x00047d38) cell_mp_pane_g1

0xa3d2,	// (0x00047979) grid_highlight_pane_cp06

0xa96c,	// (0x00047f13) grid_skin_colour_pane

0xa974,	// (0x00047f1b) list_highlight_pane_cp03

0x317b,	// (0x00040722) skin_g1

0xa97c,	// (0x00047f23) skin_t1

0xa98b,	// (0x00047f32) skin_t2

0x0001,

0xf264,	// (0x0004c80b) skin_t

0x3185,	// (0x0004072c) cell_skin_colour_pane_ParamLimits

0x3185,	// (0x0004072c) cell_skin_colour_pane

0xa999,	// (0x00047f40) cell_skin_colour_pane_g1

0x3209,	// (0x000407b0) call_video_g1_ParamLimits

0x3209,	// (0x000407b0) call_video_g1

0x3219,	// (0x000407c0) call_video_g2_ParamLimits

0x3219,	// (0x000407c0) call_video_g2

0x0001,

0xf269,	// (0x0004c810) call_video_g_ParamLimits

0xf269,	// (0x0004c810) call_video_g

0x3273,	// (0x0004081a) call_video_uplink_pane_cp1_ParamLimits

0x3273,	// (0x0004081a) call_video_uplink_pane_cp1

0xa9ab,	// (0x00047f52) call_video_uplink_pane_cp2

0x333f,	// (0x000408e6) video_down_crop_pane_ParamLimits

0x333f,	// (0x000408e6) video_down_crop_pane

0x3431,	// (0x000409d8) video_down_pane_ParamLimits

0x3431,	// (0x000409d8) video_down_pane

0xa9b3,	// (0x00047f5a) video_down_subqcif_pane_ParamLimits

0xa9b3,	// (0x00047f5a) video_down_subqcif_pane

0xa9cb,	// (0x00047f72) video_down_subqcif_pane_cp_ParamLimits

0xa9cb,	// (0x00047f72) video_down_subqcif_pane_cp

0xa9f1,	// (0x00047f98) im_reading_pane_ParamLimits

0xa9f1,	// (0x00047f98) im_reading_pane

0x3553,	// (0x00040afa) im_writing_pane_ParamLimits

0x3553,	// (0x00040afa) im_writing_pane

0x3571,	// (0x00040b18) im_reading_pane_t1

0xaa0b,	// (0x00047fb2) list_im_pane

0xaa1c,	// (0x00047fc3) scroll_pane_cp07

0x35cc,	// (0x00040b73) im_writing_pane_t1_ParamLimits

0x35cc,	// (0x00040b73) im_writing_pane_t1

0xaa35,	// (0x00047fdc) im_writing_pane_t2_ParamLimits

0xaa35,	// (0x00047fdc) im_writing_pane_t2

0x0001,

0xf273,	// (0x0004c81a) im_writing_pane_t_ParamLimits

0xf273,	// (0x0004c81a) im_writing_pane_t

0xa3d2,	// (0x00047979) input_focus_pane_cp04

0xa3d2,	// (0x00047979) input_focus_pane_cp05

0x35de,	// (0x00040b85) list_im_single_pane_ParamLimits

0x35de,	// (0x00040b85) list_im_single_pane

0x3606,	// (0x00040bad) list_single_im_pane_t1

0x525f,	// (0x00042806) blid_accuracy_pane

0x5267,	// (0x0004280e) blid_compass_pane

0x5271,	// (0x00042818) main_location_t1

0x527f,	// (0x00042826) main_location_t2

0x528d,	// (0x00042834) main_location_t3

0x0002,

0xf5da,	// (0x0004cb81) main_location_t

0xa3d2,	// (0x00047979) aid_levels_location

0xa791,	// (0x00047d38) blid_accuracy_pane_g1

0xa791,	// (0x00047d38) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0004c87c) blid_accuracy_pane_g

0xaa7d,	// (0x00048024) wml_content_pane

0xaabb,	// (0x00048062) wml_button_pane_ParamLimits

0xaabb,	// (0x00048062) wml_button_pane

0x3615,	// (0x00040bbc) wml_list_single_large_pane_ParamLimits

0x3615,	// (0x00040bbc) wml_list_single_large_pane

0x3646,	// (0x00040bed) wml_list_single_medium_pane_ParamLimits

0x3646,	// (0x00040bed) wml_list_single_medium_pane

0x367e,	// (0x00040c25) wml_list_single_small_pane_ParamLimits

0x367e,	// (0x00040c25) wml_list_single_small_pane

0xaacf,	// (0x00048076) wml_selection_box_pane_ParamLimits

0xaacf,	// (0x00048076) wml_selection_box_pane

0xaae2,	// (0x00048089) wml_list_single_pane_t1

0xaaf1,	// (0x00048098) wml_list_single_medium_pane_t1

0xab00,	// (0x000480a7) wml_list_single_large_pane_t1

0xab0f,	// (0x000480b6) input_focus_pane_cp02_ParamLimits

0xab0f,	// (0x000480b6) input_focus_pane_cp02

0xab22,	// (0x000480c9) wml_selection_box_pane_g1

0xab2b,	// (0x000480d2) wml_selection_box_pane_t1_ParamLimits

0xab2b,	// (0x000480d2) wml_selection_box_pane_t1

0xa62d,	// (0x00047bd4) bg_wml_button_pane_ParamLimits

0xa62d,	// (0x00047bd4) bg_wml_button_pane

0xab43,	// (0x000480ea) wml_button_pane_g1

0xab4b,	// (0x000480f2) wml_button_pane_t1

0xab43,	// (0x000480ea) wml_button_bg_pane_g1

0xab5b,	// (0x00048102) wml_button_bg_pane_g2

0xab63,	// (0x0004810a) wml_button_bg_pane_g3

0xab6b,	// (0x00048112) wml_button_bg_pane_g4

0xab73,	// (0x0004811a) wml_button_bg_pane_g5

0xab7b,	// (0x00048122) wml_button_bg_pane_g6

0xab83,	// (0x0004812a) wml_button_bg_pane_g7

0xab8b,	// (0x00048132) wml_button_bg_pane_g8

0xab93,	// (0x0004813a) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0004c81f) wml_button_bg_pane_g

0x36bf,	// (0x00040c66) bg_list_pane_cp02

0xab9b,	// (0x00048142) mce_header_pane_ParamLimits

0xab9b,	// (0x00048142) mce_header_pane

0xabb1,	// (0x00048158) mce_icon_pane

0xabb1,	// (0x00048158) mce_image_pane

0xabba,	// (0x00048161) mce_text_pane_ParamLimits

0xabba,	// (0x00048161) mce_text_pane

0x36c9,	// (0x00040c70) scroll_pane_cp03

0xaab3,	// (0x0004805a) scroll_pane_cp04

0xabcd,	// (0x00048174) scroll_pane_cp05_ParamLimits

0xabcd,	// (0x00048174) scroll_pane_cp05

0x36d3,	// (0x00040c7a) mce_header_field_pane_ParamLimits

0x36d3,	// (0x00040c7a) mce_header_field_pane

0x36f3,	// (0x00040c9a) mce_header_field_pane_2_ParamLimits

0x36f3,	// (0x00040c9a) mce_header_field_pane_2

0x3709,	// (0x00040cb0) mce_header_field_pane_3

0x3711,	// (0x00040cb8) list_single_mce_message_pane_ParamLimits

0x3711,	// (0x00040cb8) list_single_mce_message_pane

0x3743,	// (0x00040cea) list_single_mce_smart_pane_ParamLimits

0x3743,	// (0x00040cea) list_single_mce_smart_pane

0xabd9,	// (0x00048180) input_focus_pane_cp03

0xabe2,	// (0x00048189) list_header_data_pane

0x3780,	// (0x00040d27) mce_header_field_pane_t1

0x3790,	// (0x00040d37) list_single_mce_header_pane_ParamLimits

0x3790,	// (0x00040d37) list_single_mce_header_pane

0xabea,	// (0x00048191) list_single_mce_header_pane_t1

0xabf9,	// (0x000481a0) list_single_mce_message_pane_g1

0xac01,	// (0x000481a8) list_single_mce_message_pane_t1

0x37e7,	// (0x00040d8e) bg_cale_heading_pane_cp01_ParamLimits

0x37e7,	// (0x00040d8e) bg_cale_heading_pane_cp01

0xac0f,	// (0x000481b6) bg_cale_pane_cp02_ParamLimits

0xac0f,	// (0x000481b6) bg_cale_pane_cp02

0x382a,	// (0x00040dd1) cale_month_corner_pane

0x3844,	// (0x00040deb) cale_month_day_heading_pane_ParamLimits

0x3844,	// (0x00040deb) cale_month_day_heading_pane

0x389f,	// (0x00040e46) cale_month_pane_g1_ParamLimits

0x389f,	// (0x00040e46) cale_month_pane_g1

0x38d7,	// (0x00040e7e) cale_month_pane_g2_ParamLimits

0x38d7,	// (0x00040e7e) cale_month_pane_g2

0x3902,	// (0x00040ea9) cale_month_pane_g3_ParamLimits

0x3902,	// (0x00040ea9) cale_month_pane_g3

0x3952,	// (0x00040ef9) cale_month_pane_g4_ParamLimits

0x3952,	// (0x00040ef9) cale_month_pane_g4

0x39a2,	// (0x00040f49) cale_month_pane_g5_ParamLimits

0x39a2,	// (0x00040f49) cale_month_pane_g5

0x39f2,	// (0x00040f99) cale_month_pane_g6_ParamLimits

0x39f2,	// (0x00040f99) cale_month_pane_g6

0x3a42,	// (0x00040fe9) cale_month_pane_g7_ParamLimits

0x3a42,	// (0x00040fe9) cale_month_pane_g7

0x3aaa,	// (0x00041051) cale_month_pane_g8_ParamLimits

0x3aaa,	// (0x00041051) cale_month_pane_g8

0x3b12,	// (0x000410b9) cale_month_pane_g9_ParamLimits

0x3b12,	// (0x000410b9) cale_month_pane_g9

0x3b70,	// (0x00041117) cale_month_pane_g10_ParamLimits

0x3b70,	// (0x00041117) cale_month_pane_g10

0x3bce,	// (0x00041175) cale_month_pane_g11_ParamLimits

0x3bce,	// (0x00041175) cale_month_pane_g11

0x3c22,	// (0x000411c9) cale_month_pane_g12_ParamLimits

0x3c22,	// (0x000411c9) cale_month_pane_g12

0x3c78,	// (0x0004121f) cale_month_pane_g13_ParamLimits

0x3c78,	// (0x0004121f) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0004c832) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0004c832) cale_month_pane_g

0x3cce,	// (0x00041275) cale_month_week_pane

0x3ce3,	// (0x0004128a) grid_cale_month_pane_ParamLimits

0x3ce3,	// (0x0004128a) grid_cale_month_pane

0x3d35,	// (0x000412dc) cale_month_day_heading_pane_t1

0x3dbb,	// (0x00041362) cale_month_day_heading_pane_t2

0x3e4c,	// (0x000413f3) cale_month_day_heading_pane_t3

0x3edd,	// (0x00041484) cale_month_day_heading_pane_t4

0x3f6e,	// (0x00041515) cale_month_day_heading_pane_t5

0x3fff,	// (0x000415a6) cale_month_day_heading_pane_t6

0x409c,	// (0x00041643) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0004c84d) cale_month_day_heading_pane_t

0xa8b8,	// (0x00047e5f) bg_cale_side_pane_cp01

0x4145,	// (0x000416ec) cale_month_week_pane_t1

0x415e,	// (0x00041705) cale_month_week_pane_t2

0x4177,	// (0x0004171e) cale_month_week_pane_t3

0x4190,	// (0x00041737) cale_month_week_pane_t4

0x41ad,	// (0x00041754) cale_month_week_pane_t5

0x41ce,	// (0x00041775) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0004c85c) cale_month_week_pane_t

0x41ef,	// (0x00041796) cell_cale_month_pane_ParamLimits

0x41ef,	// (0x00041796) cell_cale_month_pane

0x4315,	// (0x000418bc) cell_cale_month_pane_g1

0x4321,	// (0x000418c8) cell_cale_month_pane_t1_ParamLimits

0x4321,	// (0x000418c8) cell_cale_month_pane_t1

0xa8c6,	// (0x00047e6d) grid_highlight_pane_cp08

0xa791,	// (0x00047d38) main_smil_g1

0x4341,	// (0x000418e8) smil_status_pane

0xac4e,	// (0x000481f5) smil_text_pane

0xc5de,	// (0x00049b85) bg_popup_call3_rect_pane_g8

0xc5e6,	// (0x00049b8d) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0004cb15) bg_popup_call3_rect_pane_g

0xc82d,	// (0x00049dd4) smil_status_volume_pane_g1

0xac58,	// (0x000481ff) smil_status_pane_t1

0x5687,	// (0x00042c2e) volume_smil_pane

0xac6f,	// (0x00048216) list_smil_text_pane

0x4354,	// (0x000418fb) scroll_pane_cp011

0x435f,	// (0x00041906) smil_text_list_pane_t1_ParamLimits

0x435f,	// (0x00041906) smil_text_list_pane_t1

0x43f3,	// (0x0004199a) aid_volume_smil_ParamLimits

0x43f3,	// (0x0004199a) aid_volume_smil

0xa791,	// (0x00047d38) smil_volume_pane_g1

0xa791,	// (0x00047d38) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0004c87c) smil_volume_pane_g

0x2968,	// (0x0003ff0f) listscroll_cale_day_pane

0xac79,	// (0x00048220) bg_cale_pane

0xac91,	// (0x00048238) list_cale_pane

0xacb4,	// (0x0004825b) scroll_pane_cp09

0xacc5,	// (0x0004826c) cale_bg_pane_g1

0xaccd,	// (0x00048274) cale_bg_pane_g2

0xacd5,	// (0x0004827c) cale_bg_pane_g3

0xacdd,	// (0x00048284) cale_bg_pane_g4

0xace5,	// (0x0004828c) cale_bg_pane_g5

0xaced,	// (0x00048294) cale_bg_pane_g6

0xacf5,	// (0x0004829c) cale_bg_pane_g7

0xacfd,	// (0x000482a4) cale_bg_pane_g8

0xad05,	// (0x000482ac) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0004c881) cale_bg_pane_g

0x4415,	// (0x000419bc) list_cale_time_pane_ParamLimits

0x4415,	// (0x000419bc) list_cale_time_pane

0xad15,	// (0x000482bc) list_cale_time_pane_g1_ParamLimits

0xad15,	// (0x000482bc) list_cale_time_pane_g1

0xad21,	// (0x000482c8) list_cale_time_pane_g2_ParamLimits

0xad21,	// (0x000482c8) list_cale_time_pane_g2

0x4441,	// (0x000419e8) list_cale_time_pane_g3_ParamLimits

0x4441,	// (0x000419e8) list_cale_time_pane_g3

0x444f,	// (0x000419f6) list_cale_time_pane_g4_ParamLimits

0x444f,	// (0x000419f6) list_cale_time_pane_g4

0x445d,	// (0x00041a04) list_cale_time_pane_g5_ParamLimits

0x445d,	// (0x00041a04) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0004c894) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0004c894) list_cale_time_pane_g

0xad3b,	// (0x000482e2) list_cale_time_pane_t1_ParamLimits

0xad3b,	// (0x000482e2) list_cale_time_pane_t1

0xad63,	// (0x0004830a) list_cale_time_pane_t2_ParamLimits

0xad63,	// (0x0004830a) list_cale_time_pane_t2

0x46ff,	// (0x00041ca6) aid_blid_cardinal_pane

0x4741,	// (0x00041ce8) compass_pane_t4

0xad8b,	// (0x00048332) list_cale_time_pane_t4_ParamLimits

0xad8b,	// (0x00048332) list_cale_time_pane_t4

0x474f,	// (0x00041cf6) compass_pane_t5

0x475f,	// (0x00041d06) compass_pane_t6

0x476d,	// (0x00041d14) compass_pane_t7

0xb258,	// (0x000487ff) navi_pane_cc_t1

0xb435,	// (0x000489dc) aid_phob_thumbnail_center_pane

0x4d58,	// (0x000422ff) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0004c8a1) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0004c8a1) list_cale_time_pane_t

0xa029,	// (0x000475d0) bg_popup_window_pane_cp02_ParamLimits

0xa029,	// (0x000475d0) bg_popup_window_pane_cp02

0xadb3,	// (0x0004835a) heading_pane_cp01_ParamLimits

0xadb3,	// (0x0004835a) heading_pane_cp01

0xadbf,	// (0x00048366) loc_req_pane_ParamLimits

0xadbf,	// (0x00048366) loc_req_pane

0xadcf,	// (0x00048376) loc_type_pane_ParamLimits

0xadcf,	// (0x00048376) loc_type_pane

0xade1,	// (0x00048388) loc_type_pane_t1_ParamLimits

0xade1,	// (0x00048388) loc_type_pane_t1

0xadf3,	// (0x0004839a) loc_type_pane_t2_ParamLimits

0xadf3,	// (0x0004839a) loc_type_pane_t2

0xae05,	// (0x000483ac) loc_type_pane_t3_ParamLimits

0xae05,	// (0x000483ac) loc_type_pane_t3

0x0002,

0xf301,	// (0x0004c8a8) loc_type_pane_t_ParamLimits

0xf301,	// (0x0004c8a8) loc_type_pane_t

0xae17,	// (0x000483be) list_loc_req_pane

0xae21,	// (0x000483c8) scroll_pane_cp012

0x0e02,	// (0x0003e3a9) list_single_loc_request_popup_menu_pane_ParamLimits

0x0e02,	// (0x0003e3a9) list_single_loc_request_popup_menu_pane

0xae2c,	// (0x000483d3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae2c,	// (0x000483d3) list_single_loc_request_popup_menu_pane_g1

0xae46,	// (0x000483ed) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae46,	// (0x000483ed) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0004c8af) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0004c8af) list_single_loc_request_popup_menu_pane_g

0xae52,	// (0x000483f9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae52,	// (0x000483f9) list_single_loc_request_popup_menu_pane_t1

0x446b,	// (0x00041a12) bg_popup_window_pane_cp03_ParamLimits

0x446b,	// (0x00041a12) bg_popup_window_pane_cp03

0x4479,	// (0x00041a20) heading_loc_req_pane_ParamLimits

0x4479,	// (0x00041a20) heading_loc_req_pane

0x4485,	// (0x00041a2c) popup_dyc_status_message_window_g1_ParamLimits

0x4485,	// (0x00041a2c) popup_dyc_status_message_window_g1

0x4491,	// (0x00041a38) popup_dyc_status_message_window_t1_ParamLimits

0x4491,	// (0x00041a38) popup_dyc_status_message_window_t1

0x44a3,	// (0x00041a4a) popup_dyc_status_message_window_t2_ParamLimits

0x44a3,	// (0x00041a4a) popup_dyc_status_message_window_t2

0x44b5,	// (0x00041a5c) popup_dyc_status_message_window_t3_ParamLimits

0x44b5,	// (0x00041a5c) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0004c8b4) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0004c8b4) popup_dyc_status_message_window_t

0xa3d2,	// (0x00047979) bg_heading_pane_cp01

0xae68,	// (0x0004840f) heading_loc_req_pane_g1

0xae70,	// (0x00048417) heading_loc_req_pane_g2

0xae78,	// (0x0004841f) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0004c8bb) heading_loc_req_pane_g

0xae80,	// (0x00048427) heading_loc_req_pane_t1

0xae8f,	// (0x00048436) bg_popup_sub_pane_cp01_ParamLimits

0xae8f,	// (0x00048436) bg_popup_sub_pane_cp01

0xae9d,	// (0x00048444) popup_cale_events_window_g1_ParamLimits

0xae9d,	// (0x00048444) popup_cale_events_window_g1

0xaebd,	// (0x00048464) popup_cale_events_window_g2_ParamLimits

0xaebd,	// (0x00048464) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0004c8ef) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0004c8ef) popup_cale_events_window_g

0xaedd,	// (0x00048484) popup_cale_events_window_t1_ParamLimits

0xaedd,	// (0x00048484) popup_cale_events_window_t1

0xaeef,	// (0x00048496) popup_cale_events_window_t2_ParamLimits

0xaeef,	// (0x00048496) popup_cale_events_window_t2

0xaf2d,	// (0x000484d4) popup_cale_events_window_t3_ParamLimits

0xaf2d,	// (0x000484d4) popup_cale_events_window_t3

0xaf67,	// (0x0004850e) popup_cale_events_window_t4_ParamLimits

0xaf67,	// (0x0004850e) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0004c8f4) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0004c8f4) popup_cale_events_window_t

0x44df,	// (0x00041a86) call_type_pane

0xaf9d,	// (0x00048544) popup_call_status_window_g1

0x44eb,	// (0x00041a92) popup_call_status_window_g2

0x44f7,	// (0x00041a9e) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0004c8fd) popup_call_status_window_g

0xafab,	// (0x00048552) call_type_pane_g1

0xafb4,	// (0x0004855b) call_type_pane_g2

0x0001,

0xf35d,	// (0x0004c904) call_type_pane_g

0xa3d2,	// (0x00047979) bg_popup_sub_pane_cp02

0xafbd,	// (0x00048564) listscroll_popup_wml_pane

0xafc5,	// (0x0004856c) list_wml_pane

0xafcf,	// (0x00048576) scroll_pane_cp013

0xafda,	// (0x00048581) list_single_graphic_popup_wml_pane_ParamLimits

0xafda,	// (0x00048581) list_single_graphic_popup_wml_pane

0xa791,	// (0x00047d38) list_single_graphic_popup_wml_pane_g1

0xafee,	// (0x00048595) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0004c909) list_single_graphic_popup_wml_pane_g

0xaff6,	// (0x0004859d) list_single_graphic_popup_wml_pane_t1

0xb00c,	// (0x000485b3) aid_call_pane

0xa625,	// (0x00047bcc) popup_clock_analogue_window_g1

0xa625,	// (0x00047bcc) popup_clock_analogue_window_g2

0x4503,	// (0x00041aaa) popup_clock_analogue_window_g3

0x4503,	// (0x00041aaa) popup_clock_analogue_window_g4

0xa791,	// (0x00047d38) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0004c90e) popup_clock_analogue_window_g

0x450b,	// (0x00041ab2) popup_clock_analogue_window_t1

0x4519,	// (0x00041ac0) clock_digital_number_pane_ParamLimits

0x4519,	// (0x00041ac0) clock_digital_number_pane

0x4525,	// (0x00041acc) clock_digital_number_pane_cp02_ParamLimits

0x4525,	// (0x00041acc) clock_digital_number_pane_cp02

0x4531,	// (0x00041ad8) clock_digital_number_pane_cp03_ParamLimits

0x4531,	// (0x00041ad8) clock_digital_number_pane_cp03

0x453d,	// (0x00041ae4) clock_digital_number_pane_cp04_ParamLimits

0x453d,	// (0x00041ae4) clock_digital_number_pane_cp04

0x454d,	// (0x00041af4) clock_digital_separator_pane_ParamLimits

0x454d,	// (0x00041af4) clock_digital_separator_pane

0x4559,	// (0x00041b00) popup_clock_digital_window_t1

0xa791,	// (0x00047d38) clock_digital_number_pane_g1

0xa791,	// (0x00047d38) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0004c87c) clock_digital_number_pane_g

0xa791,	// (0x00047d38) clock_digital_separator_pane_g1

0xa791,	// (0x00047d38) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0004c87c) clock_digital_separator_pane_g

0xa3d2,	// (0x00047979) bg_popup_window_pane_cp04

0xb014,	// (0x000485bb) heading_pane_cp03

0xb01c,	// (0x000485c3) listscroll_popup_gms_pane

0xb024,	// (0x000485cb) grid_large_graphic_popup_pane

0xb02e,	// (0x000485d5) listscroll_popup_gms_pane_g1

0xb036,	// (0x000485dd) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0004c919) listscroll_popup_gms_pane_g

0xaab3,	// (0x0004805a) scroll_pane_cp014

0xb03e,	// (0x000485e5) cell_large_graphic_popup_pane_ParamLimits

0xb03e,	// (0x000485e5) cell_large_graphic_popup_pane

0xb056,	// (0x000485fd) cell_large_graphic_popup_pane_g1_ParamLimits

0xb056,	// (0x000485fd) cell_large_graphic_popup_pane_g1

0xb062,	// (0x00048609) cell_large_graphic_popup_pane_g2_ParamLimits

0xb062,	// (0x00048609) cell_large_graphic_popup_pane_g2

0xb06e,	// (0x00048615) cell_large_graphic_popup_pane_g3_ParamLimits

0xb06e,	// (0x00048615) cell_large_graphic_popup_pane_g3

0xb07b,	// (0x00048622) cell_large_graphic_popup_pane_g4_ParamLimits

0xb07b,	// (0x00048622) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0004c91e) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0004c91e) cell_large_graphic_popup_pane_g

0xb08b,	// (0x00048632) grid_highlight_pane_cp010

0xa791,	// (0x00047d38) bg_popup_call_pane_g1

0xb095,	// (0x0004863c) list_single_graphic_popup_conf_pane_ParamLimits

0xb095,	// (0x0004863c) list_single_graphic_popup_conf_pane

0xb0a8,	// (0x0004864f) list_highlight_pane_cp01

0xb0b1,	// (0x00048658) list_single_graphic_popup_conf_pane_g1

0xb0b9,	// (0x00048660) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0004c927) list_single_graphic_popup_conf_pane_g

0xb0c1,	// (0x00048668) list_single_graphic_popup_conf_pane_t1

0xb0cf,	// (0x00048676) linegrid_cams_pane_g1

0x4576,	// (0x00041b1d) linegrid_cams_pane_g2

0xa849,	// (0x00047df0) linegrid_cams_pane_g3

0xb0d8,	// (0x0004867f) linegrid_cams_pane_g4

0x457f,	// (0x00041b26) linegrid_cams_pane_g5

0x4588,	// (0x00041b2f) linegrid_cams_pane_g6

0xa8f9,	// (0x00047ea0) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0004c92c) linegrid_cams_pane_g

0xb0e1,	// (0x00048688) popup_clock_analogue_window

0xb0e1,	// (0x00048688) popup_clock_digital_window

0xa3d2,	// (0x00047979) popup_phob_thumbnail_window

0xa791,	// (0x00047d38) call_video_uplink_pane_g1

0xb0ea,	// (0x00048691) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0004c93b) call_video_uplink_pane_g

0xa8c6,	// (0x00047e6d) video_uplink_pane

0xb0f2,	// (0x00048699) mce_image_pane_g1

0x4591,	// (0x00041b38) mce_image_pane_g2

0x4599,	// (0x00041b40) mce_image_pane_g3

0x45a1,	// (0x00041b48) mce_image_pane_g4

0x45a9,	// (0x00041b50) mce_image_pane_g5

0x0004,

0xf399,	// (0x0004c940) mce_image_pane_g

0xb0fc,	// (0x000486a3) control_top_pane_stacon_cp01_ParamLimits

0xb0fc,	// (0x000486a3) control_top_pane_stacon_cp01

0xb110,	// (0x000486b7) uni_indicator_pane_stacon_cp01_ParamLimits

0xb110,	// (0x000486b7) uni_indicator_pane_stacon_cp01

0xb121,	// (0x000486c8) bg_popup_sub_pane_cp03

0x45b1,	// (0x00041b58) chi_dic_find_pane

0x45b9,	// (0x00041b60) listscroll_chi_dic_pane

0x45c2,	// (0x00041b69) main_pane_chidic_g1

0xb12b,	// (0x000486d2) chi_dic_find_pane_t1

0xb139,	// (0x000486e0) find_chidic_pane

0xb142,	// (0x000486e9) chi_dic_list_pane_ParamLimits

0xb142,	// (0x000486e9) chi_dic_list_pane

0xb153,	// (0x000486fa) scroll_pane_cp020

0xb15b,	// (0x00048702) find_chidic_pane_t1

0xa3d2,	// (0x00047979) input_focus_pane_cp06

0x45d5,	// (0x00041b7c) list_chi_dic_pane_ParamLimits

0x45d5,	// (0x00041b7c) list_chi_dic_pane

0x45f2,	// (0x00041b99) list_chi_dic_pane_t1_ParamLimits

0x45f2,	// (0x00041b99) list_chi_dic_pane_t1

0xa3d2,	// (0x00047979) list_highlight_pane_cp020

0xb16a,	// (0x00048711) bg_cale_heading_pane_g1

0x4605,	// (0x00041bac) bg_cale_heading_pane_g2

0x460d,	// (0x00041bb4) bg_cale_heading_pane_g3

0x4615,	// (0x00041bbc) bg_cale_heading_pane_g4

0x461f,	// (0x00041bc6) bg_cale_heading_pane_g5

0x4629,	// (0x00041bd0) bg_cale_heading_pane_g6

0x4631,	// (0x00041bd8) bg_cale_heading_pane_g7

0x4639,	// (0x00041be0) bg_cale_heading_pane_g8

0x4643,	// (0x00041bea) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0004c94b) bg_cale_heading_pane_g

0xb16a,	// (0x00048711) bg_cale_side_pane_g1

0x464d,	// (0x00041bf4) bg_cale_side_pane_g2

0x4657,	// (0x00041bfe) bg_cale_side_pane_g3

0x4661,	// (0x00041c08) bg_cale_side_pane_g4

0x466b,	// (0x00041c12) bg_cale_side_pane_g5

0x4675,	// (0x00041c1c) bg_cale_side_pane_g6

0x467f,	// (0x00041c26) bg_cale_side_pane_g7

0x4689,	// (0x00041c30) bg_cale_side_pane_g8

0x4691,	// (0x00041c38) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0004c95e) bg_cale_side_pane_g

0x4699,	// (0x00041c40) popup_call_status_window_ParamLimits

0x4699,	// (0x00041c40) popup_call_status_window

0xb172,	// (0x00048719) stacon_top_pane

0xb17a,	// (0x00048721) status_pane_ParamLimits

0xb17a,	// (0x00048721) status_pane

0xb18f,	// (0x00048736) status_small_pane

0xb197,	// (0x0004873e) control_pane

0xa3d2,	// (0x00047979) stacon_bottom_pane

0xb19f,	// (0x00048746) list_single_mce_smart_pane_t1_ParamLimits

0xb19f,	// (0x00048746) list_single_mce_smart_pane_t1

0xb1b2,	// (0x00048759) list_single_mce_smart_pane_t2_ParamLimits

0xb1b2,	// (0x00048759) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0004c971) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0004c971) list_single_mce_smart_pane_t

0x46a5,	// (0x00041c4c) compass_pane

0x46b1,	// (0x00041c58) main_location2_pane_t1

0x46c5,	// (0x00041c6c) main_location2_pane_t2

0x46d9,	// (0x00041c80) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0004c976) main_location2_pane_t

0xb1d1,	// (0x00048778) compass_pane_g1_ParamLimits

0xb1d1,	// (0x00048778) compass_pane_g1

0x4723,	// (0x00041cca) compass_pane_t1

0x4732,	// (0x00041cd9) compass_pane_t2

0x0005,

0xf3d8,	// (0x0004c97f) compass_pane_t

0x477d,	// (0x00041d24) text_secondary_cp61

0xb24f,	// (0x000487f6) navi_pane_cams_g5

0xb2cb,	// (0x00048872) navi_pane_im_t1

0xb2d9,	// (0x00048880) navi_pane_mp_g1_ParamLimits

0xb2d9,	// (0x00048880) navi_pane_mp_g1

0xb2ed,	// (0x00048894) navi_pane_mp_g2_ParamLimits

0xb2ed,	// (0x00048894) navi_pane_mp_g2

0xb2f9,	// (0x000488a0) navi_pane_mp_g3_ParamLimits

0xb2f9,	// (0x000488a0) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0004c993) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0004c993) navi_pane_mp_g

0xb305,	// (0x000488ac) navi_pane_mp_t1

0xb313,	// (0x000488ba) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0004c99a) navi_pane_mp_t

0xb37e,	// (0x00048925) navi_pane_vt_g1

0xb305,	// (0x000488ac) navi_pane_vt_t1

0xb386,	// (0x0004892d) navi_slider_pane

0xa90a,	// (0x00047eb1) zooming_pane

0xb396,	// (0x0004893d) navi_slider_pane_g1

0x47b8,	// (0x00041d5f) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0004c9a1) navi_slider_pane_g

0xb3ba,	// (0x00048961) aid_levels_zoom

0xb3c2,	// (0x00048969) zooming_pane_g1

0xb3ca,	// (0x00048971) zooming_pane_g2

0xb3ca,	// (0x00048971) zooming_pane_g3

0x0002,

0xf409,	// (0x0004c9b0) zooming_pane_g

0xb3d2,	// (0x00048979) level_10_zoom

0xb3db,	// (0x00048982) level_11_zoom

0xb3e4,	// (0x0004898b) level_1_zoom

0xb3ed,	// (0x00048994) level_2_zoom

0xb3f6,	// (0x0004899d) level_3_zoom

0xb3ff,	// (0x000489a6) level_4_zoom

0xb408,	// (0x000489af) level_5_zoom

0xb411,	// (0x000489b8) level_6_zoom

0xb41a,	// (0x000489c1) level_7_zoom

0xb423,	// (0x000489ca) level_8_zoom

0xb42c,	// (0x000489d3) level_9_zoom

0xb43d,	// (0x000489e4) popup_phob_thumbnail_window_g1

0xb445,	// (0x000489ec) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0004c9b7) popup_phob_thumbnail_window_g

0xc740,	// (0x00049ce7) level_1_location

0xc748,	// (0x00049cef) level_2_location

0xc750,	// (0x00049cf7) level_3_location

0xc758,	// (0x00049cff) level_4_location

0xa90a,	// (0x00047eb1) level_5_location

0x47ca,	// (0x00041d71) mce_icon_pane_g1

0x47d2,	// (0x00041d79) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0004c9bc) mce_icon_pane_g

0x47da,	// (0x00041d81) main_mup_pane_g1_ParamLimits

0x47da,	// (0x00041d81) main_mup_pane_g1

0x47f2,	// (0x00041d99) main_mup_pane_g2_ParamLimits

0x47f2,	// (0x00041d99) main_mup_pane_g2

0x480e,	// (0x00041db5) main_mup_pane_g3_ParamLimits

0x480e,	// (0x00041db5) main_mup_pane_g3

0x482a,	// (0x00041dd1) main_mup_pane_g4_ParamLimits

0x482a,	// (0x00041dd1) main_mup_pane_g4

0x4846,	// (0x00041ded) main_mup_pane_g5_ParamLimits

0x4846,	// (0x00041ded) main_mup_pane_g5

0x4867,	// (0x00041e0e) main_mup_pane_g6_ParamLimits

0x4867,	// (0x00041e0e) main_mup_pane_g6

0x4883,	// (0x00041e2a) main_mup_pane_g7_ParamLimits

0x4883,	// (0x00041e2a) main_mup_pane_g7

0x489f,	// (0x00041e46) main_mup_pane_g8_ParamLimits

0x489f,	// (0x00041e46) main_mup_pane_g8

0x48bb,	// (0x00041e62) main_mup_pane_g9_ParamLimits

0x48bb,	// (0x00041e62) main_mup_pane_g9

0x48da,	// (0x00041e81) main_mup_pane_g10_ParamLimits

0x48da,	// (0x00041e81) main_mup_pane_g10

0x48f9,	// (0x00041ea0) main_mup_pane_g11_ParamLimits

0x48f9,	// (0x00041ea0) main_mup_pane_g11

0x4911,	// (0x00041eb8) main_mup_pane_g12_ParamLimits

0x4911,	// (0x00041eb8) main_mup_pane_g12

0x491f,	// (0x00041ec6) main_mup_pane_g13_ParamLimits

0x491f,	// (0x00041ec6) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0004c9c1) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0004c9c1) main_mup_pane_g

0x4935,	// (0x00041edc) main_mup_pane_t1_ParamLimits

0x4935,	// (0x00041edc) main_mup_pane_t1

0x4952,	// (0x00041ef9) main_mup_pane_t2_ParamLimits

0x4952,	// (0x00041ef9) main_mup_pane_t2

0x496c,	// (0x00041f13) main_mup_pane_t3_ParamLimits

0x496c,	// (0x00041f13) main_mup_pane_t3

0x4986,	// (0x00041f2d) main_mup_pane_t4_ParamLimits

0x4986,	// (0x00041f2d) main_mup_pane_t4

0x4998,	// (0x00041f3f) main_mup_pane_t5_ParamLimits

0x4998,	// (0x00041f3f) main_mup_pane_t5

0x49aa,	// (0x00041f51) main_mup_pane_t6_ParamLimits

0x49aa,	// (0x00041f51) main_mup_pane_t6

0x0005,

0xf435,	// (0x0004c9dc) main_mup_pane_t_ParamLimits

0xf435,	// (0x0004c9dc) main_mup_pane_t

0x49c0,	// (0x00041f67) mup_progress_pane_ParamLimits

0x49c0,	// (0x00041f67) mup_progress_pane

0x49cc,	// (0x00041f73) mup_visualizer_pane_ParamLimits

0x49cc,	// (0x00041f73) mup_visualizer_pane

0x4a0a,	// (0x00041fb1) mup_volume_pane_ParamLimits

0x4a0a,	// (0x00041fb1) mup_volume_pane

0xaf9d,	// (0x00048544) mup_visualizer_pane_g1_ParamLimits

0xaf9d,	// (0x00048544) mup_visualizer_pane_g1

0xaf9d,	// (0x00048544) mup_visualizer_pane_g2_ParamLimits

0xaf9d,	// (0x00048544) mup_visualizer_pane_g2

0xb1d1,	// (0x00048778) mup_visualizer_pane_g3_ParamLimits

0xb1d1,	// (0x00048778) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0004c9e9) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0004c9e9) mup_visualizer_pane_g

0xa791,	// (0x00047d38) mup_volume_pane_g1

0xb455,	// (0x000489fc) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0004c9f0) mup_volume_pane_g

0xa791,	// (0x00047d38) mup_progress_pane_g1

0xb45e,	// (0x00048a05) mup_progress_pane_g2

0xb467,	// (0x00048a0e) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0004c9f5) mup_progress_pane_g

0xa3d2,	// (0x00047979) bg_popup_window_pane_cp05

0xb470,	// (0x00048a17) heading_pane_cp02_ParamLimits

0xb470,	// (0x00048a17) heading_pane_cp02

0xb48a,	// (0x00048a31) list_popup_blid_pane

0xb492,	// (0x00048a39) list_blid_sat_info_pane_ParamLimits

0xb492,	// (0x00048a39) list_blid_sat_info_pane

0xb4a5,	// (0x00048a4c) list_blid_sat_info_pane_g1

0xb4ad,	// (0x00048a54) list_blid_sat_info_pane_t1

0x4b15,	// (0x000420bc) mup_equalizer_pane_ParamLimits

0x4b15,	// (0x000420bc) mup_equalizer_pane

0x4b36,	// (0x000420dd) mup_equalizer_pane_cp1_ParamLimits

0x4b36,	// (0x000420dd) mup_equalizer_pane_cp1

0x4b57,	// (0x000420fe) mup_equalizer_pane_cp2_ParamLimits

0x4b57,	// (0x000420fe) mup_equalizer_pane_cp2

0x4b78,	// (0x0004211f) mup_equalizer_pane_cp3_ParamLimits

0x4b78,	// (0x0004211f) mup_equalizer_pane_cp3

0x4b99,	// (0x00042140) mup_equalizer_pane_cp4_ParamLimits

0x4b99,	// (0x00042140) mup_equalizer_pane_cp4

0x4bba,	// (0x00042161) mup_equalizer_pane_cp5

0x4bd0,	// (0x00042177) mup_equalizer_pane_cp6

0x4be8,	// (0x0004218f) mup_equalizer_pane_cp7

0xc65e,	// (0x00049c05) bg_popup_call_poc_act_pane_g9

0xc666,	// (0x00049c0d) bg_popup_call_poc_act_pane_g10

0xc66e,	// (0x00049c15) bg_popup_call_poc_act_pane_g11

0x000a,

0xa62d,	// (0x00047bd4) mup_scale_pane

0xa791,	// (0x00047d38) mup_scale_pane_g1

0xb4bb,	// (0x00048a62) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0004ca11) mup_scale_pane_g

0xb4df,	// (0x00048a86) msg_data_pane

0xb4e7,	// (0x00048a8e) scroll_pane_cp017

0x0eec,	// (0x0003e493) bg_list_pane_cp04_ParamLimits

0x0eec,	// (0x0003e493) bg_list_pane_cp04

0xb4ef,	// (0x00048a96) msg_data_pane_g1

0x4c12,	// (0x000421b9) msg_data_pane_g2

0x4599,	// (0x00041b40) msg_data_pane_g3

0x4c1a,	// (0x000421c1) msg_data_pane_g4

0x4c22,	// (0x000421c9) msg_data_pane_g5

0x4c2a,	// (0x000421d1) msg_data_pane_g6

0x4c32,	// (0x000421d9) msg_data_pane_g7

0x0006,

0xf479,	// (0x0004ca20) msg_data_pane_g

0x0f0c,	// (0x0003e4b3) msg_text_pane_ParamLimits

0x0f0c,	// (0x0003e4b3) msg_text_pane

0x4c3a,	// (0x000421e1) qrid_highlight_pane_cp011_ParamLimits

0x4c3a,	// (0x000421e1) qrid_highlight_pane_cp011

0xa3d2,	// (0x00047979) msg_body_pane

0xa3d2,	// (0x00047979) msg_header_pane

0xb500,	// (0x00048aa7) input_focus_pane_cp07

0x0f67,	// (0x0003e50e) msg_header_pane_t1_ParamLimits

0x0f67,	// (0x0003e50e) msg_header_pane_t1

0x0f79,	// (0x0003e520) msg_header_pane_t2_ParamLimits

0x0f79,	// (0x0003e520) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0004ca34) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0004ca34) msg_header_pane_t

0xb515,	// (0x00048abc) msg_body_pane_g1

0x0f8b,	// (0x0003e532) msg_body_pane_t1_ParamLimits

0x0f8b,	// (0x0003e532) msg_body_pane_t1

0x0fbc,	// (0x0003e563) msg_body_pane_t2_ParamLimits

0x0fbc,	// (0x0003e563) msg_body_pane_t2

0x0fce,	// (0x0003e575) msg_body_pane_t3_ParamLimits

0x0fce,	// (0x0003e575) msg_body_pane_t3

0x0002,

0xf492,	// (0x0004ca39) msg_body_pane_t_ParamLimits

0xf492,	// (0x0004ca39) msg_body_pane_t

0x4ca8,	// (0x0004224f) main_viewer_pane_g1_ParamLimits

0x4ca8,	// (0x0004224f) main_viewer_pane_g1

0x4cb4,	// (0x0004225b) main_viewer_pane_g2_ParamLimits

0x4cb4,	// (0x0004225b) main_viewer_pane_g2

0x4cc0,	// (0x00042267) main_viewer_pane_g3_ParamLimits

0x4cc0,	// (0x00042267) main_viewer_pane_g3

0x4cd1,	// (0x00042278) main_viewer_pane_g4_ParamLimits

0x4cd1,	// (0x00042278) main_viewer_pane_g4

0x4ce2,	// (0x00042289) main_viewer_pane_g5_ParamLimits

0x4ce2,	// (0x00042289) main_viewer_pane_g5

0x4ce2,	// (0x00042289) main_viewer_pane_g7_ParamLimits

0x4ce2,	// (0x00042289) main_viewer_pane_g7

0x4cf4,	// (0x0004229b) main_viewer_pane_g8_ParamLimits

0x4cf4,	// (0x0004229b) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0004ca49) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0004ca49) main_viewer_pane_g

0xb51d,	// (0x00048ac4) viewer_content_pane_ParamLimits

0xb51d,	// (0x00048ac4) viewer_content_pane

0x4d2c,	// (0x000422d3) main_postcard_pane_g1_ParamLimits

0x4d2c,	// (0x000422d3) main_postcard_pane_g1

0x4d3a,	// (0x000422e1) main_postcard_pane_g2_ParamLimits

0x4d3a,	// (0x000422e1) main_postcard_pane_g2

0x4d48,	// (0x000422ef) main_postcard_pane_g3_ParamLimits

0x4d48,	// (0x000422ef) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0004ca5a) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0004ca5a) main_postcard_pane_g

0x4d58,	// (0x000422ff) main_postcard_pane_g4

0xc840,	// (0x00049de7) smil_status_volume_pane_g2

0x4d84,	// (0x0004232b) postcard_pane_ParamLimits

0x4d84,	// (0x0004232b) postcard_pane

0xaf9d,	// (0x00048544) postcard_pane_g1_ParamLimits

0xaf9d,	// (0x00048544) postcard_pane_g1

0x4db6,	// (0x0004235d) postcard_pane_g2_ParamLimits

0x4db6,	// (0x0004235d) postcard_pane_g2

0x4dc2,	// (0x00042369) postcard_pane_g3_ParamLimits

0x4dc2,	// (0x00042369) postcard_pane_g3

0xb545,	// (0x00048aec) postcard_pane_g4_ParamLimits

0xb545,	// (0x00048aec) postcard_pane_g4

0x4dce,	// (0x00042375) postcard_pane_g5_ParamLimits

0x4dce,	// (0x00042375) postcard_pane_g5

0x4dda,	// (0x00042381) postcard_pane_g6_ParamLimits

0x4dda,	// (0x00042381) postcard_pane_g6

0xb52b,	// (0x00048ad2) postcard_pane_g7_ParamLimits

0xb52b,	// (0x00048ad2) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0004ca67) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0004ca67) postcard_pane_g

0x4de6,	// (0x0004238d) main_mp2_pane_g1_ParamLimits

0x4de6,	// (0x0004238d) main_mp2_pane_g1

0x4df2,	// (0x00042399) main_mp2_pane_g2_ParamLimits

0x4df2,	// (0x00042399) main_mp2_pane_g2

0x4dfe,	// (0x000423a5) main_mp2_pane_g3_ParamLimits

0x4dfe,	// (0x000423a5) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0004ca76) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0004ca76) main_mp2_pane_g

0x4e0a,	// (0x000423b1) main_mp2_pane_t1_ParamLimits

0x4e0a,	// (0x000423b1) main_mp2_pane_t1

0x4e21,	// (0x000423c8) main_mp2_pane_t2_ParamLimits

0x4e21,	// (0x000423c8) main_mp2_pane_t2

0x4e33,	// (0x000423da) main_mp2_pane_t3_ParamLimits

0x4e33,	// (0x000423da) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0004ca7d) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0004ca7d) main_mp2_pane_t

0xb553,	// (0x00048afa) pec_content_pane_ParamLimits

0xb553,	// (0x00048afa) pec_content_pane

0xaab3,	// (0x0004805a) scroll_pane_cp015

0xb565,	// (0x00048b0c) pec_attribute_pane_ParamLimits

0xb565,	// (0x00048b0c) pec_attribute_pane

0x4e45,	// (0x000423ec) pec_content_pane_g1_ParamLimits

0x4e45,	// (0x000423ec) pec_content_pane_g1

0xb575,	// (0x00048b1c) pec_content_pane_t1_ParamLimits

0xb575,	// (0x00048b1c) pec_content_pane_t1

0xb587,	// (0x00048b2e) pec_content_pane_t2_ParamLimits

0xb587,	// (0x00048b2e) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0004ca84) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0004ca84) pec_content_pane_t

0x4e51,	// (0x000423f8) list_single_graphic_pane_cp01_ParamLimits

0x4e51,	// (0x000423f8) list_single_graphic_pane_cp01

0xa62d,	// (0x00047bd4) bg_popup_sub_pane_cp04

0xb599,	// (0x00048b40) popup_mup_playback_window_g1

0xb5a5,	// (0x00048b4c) popup_mup_playback_window_t1

0xb5ba,	// (0x00048b61) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0004ca89) popup_mup_playback_window_t

0xb5f1,	// (0x00048b98) main_image_pane_g1_ParamLimits

0xb5f1,	// (0x00048b98) main_image_pane_g1

0xb634,	// (0x00048bdb) scroll_pane_cp018_ParamLimits

0xb634,	// (0x00048bdb) scroll_pane_cp018

0xb64c,	// (0x00048bf3) scroll_pane_cp016_ParamLimits

0xb64c,	// (0x00048bf3) scroll_pane_cp016

0x4ef1,	// (0x00042498) smil2_image_pane_ParamLimits

0x4ef1,	// (0x00042498) smil2_image_pane

0x4f25,	// (0x000424cc) smil2_root_pane_ParamLimits

0x4f25,	// (0x000424cc) smil2_root_pane

0x4f51,	// (0x000424f8) smil2_text_pane_ParamLimits

0x4f51,	// (0x000424f8) smil2_text_pane

0xa3d2,	// (0x00047979) bg_list_pane_cp06

0xb688,	// (0x00048c2f) grid_radio_pane

0xa3d2,	// (0x00047979) bg_popup_window_pane_cp06

0xb690,	// (0x00048c37) main_fmradio_pane_t1

0xb014,	// (0x000485bb) heading_pane_cp04

0xb69e,	// (0x00048c45) main_fmradio_pane_t2

0xc676,	// (0x00049c1d) popup_cale_lunar_info_window_g1

0xb6ac,	// (0x00048c53) main_fmradio_pane_t3

0xc67e,	// (0x00049c25) popup_cale_lunar_info_window_g2

0xb6ba,	// (0x00048c61) main_fmradio_pane_t4

0x0001,

0xb6c8,	// (0x00048c6f) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0004cb64) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0004ca9e) main_fmradio_pane_t

0xb6d6,	// (0x00048c7d) wait_bar_pane_cp03

0xb6de,	// (0x00048c85) cell_fmradio_pane_ParamLimits

0xb6de,	// (0x00048c85) cell_fmradio_pane

0xb52b,	// (0x00048ad2) cell_fmradio_pane_g1_ParamLimits

0xb52b,	// (0x00048ad2) cell_fmradio_pane_g1

0xa3d2,	// (0x00047979) grid_highlight_pane_cp011

0xb6f1,	// (0x00048c98) poc_content_pane_ParamLimits

0xb6f1,	// (0x00048c98) poc_content_pane

0xb703,	// (0x00048caa) scroll_pane_cp019

0x4f91,	// (0x00042538) popup_call_poc_act_window_ParamLimits

0x4f91,	// (0x00042538) popup_call_poc_act_window

0x4f9e,	// (0x00042545) popup_call_poc_inact_window_ParamLimits

0x4f9e,	// (0x00042545) popup_call_poc_inact_window

0xf594,	// (0x0004cb3b) bg_popup_call_poc_act_pane_g

0xc5ee,	// (0x00049b95) bg_popup_call_poc_inact_pane_g1

0xc5f6,	// (0x00049b9d) bg_popup_call_poc_inact_pane_g2

0xb70b,	// (0x00048cb2) popup_call_poc_act_window_g2

0xc5fe,	// (0x00049ba5) bg_popup_call_poc_inact_pane_g3

0xc606,	// (0x00049bad) bg_popup_call_poc_inact_pane_g4

0xc60e,	// (0x00049bb5) bg_popup_call_poc_inact_pane_g5

0xb713,	// (0x00048cba) popup_call_poc_act_window_t1_ParamLimits

0xb713,	// (0x00048cba) popup_call_poc_act_window_t1

0xb73b,	// (0x00048ce2) popup_call_poc_act_window_t2_ParamLimits

0xb73b,	// (0x00048ce2) popup_call_poc_act_window_t2

0xb763,	// (0x00048d0a) popup_call_poc_act_window_t3_ParamLimits

0xb763,	// (0x00048d0a) popup_call_poc_act_window_t3

0xb78b,	// (0x00048d32) popup_call_poc_act_window_t4_ParamLimits

0xb78b,	// (0x00048d32) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0004caa9) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0004caa9) popup_call_poc_act_window_t

0xc616,	// (0x00049bbd) bg_popup_call_poc_inact_pane_g6

0xc61e,	// (0x00049bc5) bg_popup_call_poc_inact_pane_g7

0xc626,	// (0x00049bcd) bg_popup_call_poc_inact_pane_g8

0xb79d,	// (0x00048d44) popup_call_poc_inact_window_g2

0xc62e,	// (0x00049bd5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0004cb28) bg_popup_call_poc_inact_pane_g

0xb7a5,	// (0x00048d4c) popup_call_poc_inact_window_t1_ParamLimits

0xb7a5,	// (0x00048d4c) popup_call_poc_inact_window_t1

0xb7ba,	// (0x00048d61) popup_call_poc_inact_window_t2_ParamLimits

0xb7ba,	// (0x00048d61) popup_call_poc_inact_window_t2

0xb7cf,	// (0x00048d76) popup_call_poc_inact_window_t3_ParamLimits

0xb7cf,	// (0x00048d76) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0004cab2) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0004cab2) popup_call_poc_inact_window_t

0xc7b3,	// (0x00049d5a) context_pane_ParamLimits

0x55cc,	// (0x00042b73) signal_pane_ParamLimits

0xa90a,	// (0x00047eb1) main_call2_pane

0x553f,	// (0x00042ae6) popup_phob_thumbnail2_window_ParamLimits

0x553f,	// (0x00042ae6) popup_phob_thumbnail2_window

0x4c56,	// (0x000421fd) aid_hotspot_pointer_arrow_pane

0x4c5e,	// (0x00042205) aid_hotspot_pointer_hand_pane

0x52c4,	// (0x0004286b) phob_pre_status_pane_g5

0x2f50,	// (0x000404f7) cams_zoom_pane_ParamLimits

0x2f5c,	// (0x00040503) image_vga_pane_ParamLimits

0x2f6b,	// (0x00040512) main_camera_pane_g1_ParamLimits

0x2f79,	// (0x00040520) main_camera_pane_g2_ParamLimits

0x2f85,	// (0x0004052c) main_camera_pane_g3_ParamLimits

0x2f91,	// (0x00040538) main_camera_pane_g4_ParamLimits

0x2f9d,	// (0x00040544) main_camera_pane_g5_ParamLimits

0x2fa9,	// (0x00040550) main_camera_pane_g6_ParamLimits

0x2fb5,	// (0x0004055c) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0004c7b1) main_camera_pane_g_ParamLimits

0x2fc1,	// (0x00040568) main_camera_pane_t1_ParamLimits

0x2fd3,	// (0x0004057a) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0004c7c2) main_camera_pane_t_ParamLimits

0xa62d,	// (0x00047bd4) bg_popup_preview_window_pane_cp01_ParamLimits

0xa62d,	// (0x00047bd4) bg_popup_preview_window_pane_cp01

0xb7e4,	// (0x00048d8b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e4,	// (0x00048d8b) popup_phob_thumbnail2_window_g1

0xa3d2,	// (0x00047979) call2_cli_visual_pane

0x4fba,	// (0x00042561) popup_call2_audio_conf_window_ParamLimits

0x4fba,	// (0x00042561) popup_call2_audio_conf_window

0x4fcf,	// (0x00042576) popup_call2_audio_first_window_ParamLimits

0x4fcf,	// (0x00042576) popup_call2_audio_first_window

0x506d,	// (0x00042614) popup_call2_audio_in_window_ParamLimits

0x506d,	// (0x00042614) popup_call2_audio_in_window

0x50af,	// (0x00042656) popup_call2_audio_out_window_ParamLimits

0x50af,	// (0x00042656) popup_call2_audio_out_window

0x5111,	// (0x000426b8) popup_call2_audio_second_window_ParamLimits

0x5111,	// (0x000426b8) popup_call2_audio_second_window

0x516f,	// (0x00042716) popup_call2_audio_wait_window_ParamLimits

0x516f,	// (0x00042716) popup_call2_audio_wait_window

0xa3d2,	// (0x00047979) bg_popup_call2_act_pane_cp03

0xa60f,	// (0x00047bb6) list_conf_pane_cp

0xb7f0,	// (0x00048d97) popup_call2_audio_conf_window_t1

0xb7fe,	// (0x00048da5) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7fe,	// (0x00048da5) list_single_graphic_popup_conf2_pane

0xb0a8,	// (0x0004864f) list_highlight_pane_cp04

0xb811,	// (0x00048db8) list_single_graphic_popup_conf2_pane_g1

0xb0b9,	// (0x00048660) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0004cab9) list_single_graphic_popup_conf2_pane_g

0xb81b,	// (0x00048dc2) list_single_graphic_popup_conf2_pane_t1

0xb829,	// (0x00048dd0) bg_popup_call2_act_pane_cp01_ParamLimits

0xb829,	// (0x00048dd0) bg_popup_call2_act_pane_cp01

0xb8b3,	// (0x00048e5a) call_type_pane_cp05_ParamLimits

0xb8b3,	// (0x00048e5a) call_type_pane_cp05

0xb907,	// (0x00048eae) popup_call2_audio_second_window_g1_ParamLimits

0xb907,	// (0x00048eae) popup_call2_audio_second_window_g1

0xb95b,	// (0x00048f02) popup_call2_audio_second_window_g2_ParamLimits

0xb95b,	// (0x00048f02) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0004cabe) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0004cabe) popup_call2_audio_second_window_g

0xb9c0,	// (0x00048f67) popup_call2_audio_second_window_t1_ParamLimits

0xb9c0,	// (0x00048f67) popup_call2_audio_second_window_t1

0xba7b,	// (0x00049022) popup_call2_audio_second_window_t2_ParamLimits

0xba7b,	// (0x00049022) popup_call2_audio_second_window_t2

0xbace,	// (0x00049075) popup_call2_audio_second_window_t3_ParamLimits

0xbace,	// (0x00049075) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0004cac5) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0004cac5) popup_call2_audio_second_window_t

0xa3d2,	// (0x00047979) bg_popup_call2_in_pane_cp02

0xa3dc,	// (0x00047983) call_type_pane_cp04

0xa3e4,	// (0x0004798b) popup_call2_audio_wait_window_g1

0xa3ec,	// (0x00047993) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004c6a0) popup_call2_audio_wait_window_g

0xa3f4,	// (0x0004799b) popup_call2_audio_wait_window_t3

0xbbc1,	// (0x00049168) bg_popup_call2_act_pane_ParamLimits

0xbbc1,	// (0x00049168) bg_popup_call2_act_pane

0xbc81,	// (0x00049228) call_type_pane_cp03_ParamLimits

0xbc81,	// (0x00049228) call_type_pane_cp03

0xbce5,	// (0x0004928c) popup_call2_audio_first_window_g1_ParamLimits

0xbce5,	// (0x0004928c) popup_call2_audio_first_window_g1

0xbd55,	// (0x000492fc) popup_call2_audio_first_window_g2_ParamLimits

0xbd55,	// (0x000492fc) popup_call2_audio_first_window_g2

0xaf9d,	// (0x00048544) popup_call2_audio_first_window_g3_ParamLimits

0xaf9d,	// (0x00048544) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0004cace) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0004cace) popup_call2_audio_first_window_g

0xbe33,	// (0x000493da) popup_call2_audio_first_window_t1_ParamLimits

0xbe33,	// (0x000493da) popup_call2_audio_first_window_t1

0xbf36,	// (0x000494dd) popup_call2_audio_first_window_t4_ParamLimits

0xbf36,	// (0x000494dd) popup_call2_audio_first_window_t4

0xc019,	// (0x000495c0) popup_call2_audio_first_window_t5_ParamLimits

0xc019,	// (0x000495c0) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0004cad9) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0004cad9) popup_call2_audio_first_window_t

0xa625,	// (0x00047bcc) bg_popup_call2_act_pane_g1

0xc686,	// (0x00049c2d) popup_cale_lunar_info_window_t1

0xc694,	// (0x00049c3b) popup_cale_lunar_info_window_t2

0xc6a2,	// (0x00049c49) popup_cale_lunar_info_window_t3

0xa3d2,	// (0x00047979) bg_popup_call2_bubble_pane

0xc11a,	// (0x000496c1) bg_popup_call2_in_pane_cp01_ParamLimits

0xc11a,	// (0x000496c1) bg_popup_call2_in_pane_cp01

0xa0ae,	// (0x00047655) call_type_pane_cp02

0xc162,	// (0x00049709) popup_call2_audio_out_window_g1_ParamLimits

0xc162,	// (0x00049709) popup_call2_audio_out_window_g1

0xc18e,	// (0x00049735) popup_call2_audio_out_window_g2_ParamLimits

0xc18e,	// (0x00049735) popup_call2_audio_out_window_g2

0xc1b6,	// (0x0004975d) popup_call2_audio_out_window_g3_ParamLimits

0xc1b6,	// (0x0004975d) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0004cae2) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0004cae2) popup_call2_audio_out_window_g

0xc1f1,	// (0x00049798) popup_call2_audio_out_window_t1_ParamLimits

0xc1f1,	// (0x00049798) popup_call2_audio_out_window_t1

0xc250,	// (0x000497f7) popup_call2_audio_out_window_t2_ParamLimits

0xc250,	// (0x000497f7) popup_call2_audio_out_window_t2

0xc2a4,	// (0x0004984b) popup_call2_audio_out_window_t3_ParamLimits

0xc2a4,	// (0x0004984b) popup_call2_audio_out_window_t3

0xc2ba,	// (0x00049861) popup_call2_audio_out_window_t4_ParamLimits

0xc2ba,	// (0x00049861) popup_call2_audio_out_window_t4

0xc2d0,	// (0x00049877) popup_call2_audio_out_window_t5_ParamLimits

0xc2d0,	// (0x00049877) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0004caeb) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0004caeb) popup_call2_audio_out_window_t

0xc334,	// (0x000498db) bg_popup_call2_in_pane_ParamLimits

0xc334,	// (0x000498db) bg_popup_call2_in_pane

0xc390,	// (0x00049937) popup_call2_audio_in_window_g1_ParamLimits

0xc390,	// (0x00049937) popup_call2_audio_in_window_g1

0xc3c8,	// (0x0004996f) popup_call2_audio_in_window_g2_ParamLimits

0xc3c8,	// (0x0004996f) popup_call2_audio_in_window_g2

0xc400,	// (0x000499a7) popup_call2_audio_in_window_g3_ParamLimits

0xc400,	// (0x000499a7) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0004caf8) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0004caf8) popup_call2_audio_in_window_g

0xc458,	// (0x000499ff) popup_call2_audio_in_window_t1_ParamLimits

0xc458,	// (0x000499ff) popup_call2_audio_in_window_t1

0xc4d8,	// (0x00049a7f) popup_call2_audio_in_window_t2_ParamLimits

0xc4d8,	// (0x00049a7f) popup_call2_audio_in_window_t2

0xc558,	// (0x00049aff) popup_call2_audio_in_window_t3_ParamLimits

0xc558,	// (0x00049aff) popup_call2_audio_in_window_t3

0xc572,	// (0x00049b19) popup_call2_audio_in_window_t4_ParamLimits

0xc572,	// (0x00049b19) popup_call2_audio_in_window_t4

0xc584,	// (0x00049b2b) popup_call2_audio_in_window_t5_ParamLimits

0xc584,	// (0x00049b2b) popup_call2_audio_in_window_t5

0xc599,	// (0x00049b40) popup_call2_audio_in_window_t6_ParamLimits

0xc599,	// (0x00049b40) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0004cb01) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0004cb01) popup_call2_audio_in_window_t

0xa625,	// (0x00047bcc) bg_popup_call2_in_pane_g1

0xc6b0,	// (0x00049c57) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0004cb69) popup_cale_lunar_info_window_t

0xa62d,	// (0x00047bd4) bg_popup_call2_rect_pane_ParamLimits

0xa62d,	// (0x00047bd4) bg_popup_call2_rect_pane

0xa3d2,	// (0x00047979) call2_cli_visual_graphic_pane

0xa3d2,	// (0x00047979) call2_cli_visual_text_pane

0x567a,	// (0x00042c21) smil_status_volume_pane_g3

0x0002,

0xa791,	// (0x00047d38) call2_cli_visual_graphic_pane_g1

0xa791,	// (0x00047d38) call2_cli_visual_graphic_pane_g2

0xa791,	// (0x00047d38) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0004cb0e) call2_cli_visual_graphic_pane_g

0xc5ae,	// (0x00049b55) bg_popup_call2_rect_pane_g1

0xa82f,	// (0x00047dd6) bg_popup_call2_rect_pane_g2

0xc5b6,	// (0x00049b5d) bg_popup_call2_rect_pane_g3

0xc5be,	// (0x00049b65) bg_popup_call2_rect_pane_g4

0xc5c6,	// (0x00049b6d) bg_popup_call2_rect_pane_g5

0xc5ce,	// (0x00049b75) bg_popup_call2_rect_pane_g6

0xc5d6,	// (0x00049b7d) bg_popup_call2_rect_pane_g7

0xc5de,	// (0x00049b85) bg_popup_call2_rect_pane_g8

0xc5e6,	// (0x00049b8d) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0004cb15) bg_popup_call2_rect_pane_g

0xc5ee,	// (0x00049b95) bg_popup_call2_bubble_pane_g1

0xc5f6,	// (0x00049b9d) bg_popup_call2_bubble_pane_g2

0xc5fe,	// (0x00049ba5) bg_popup_call2_bubble_pane_g3

0xc606,	// (0x00049bad) bg_popup_call2_bubble_pane_g4

0xc60e,	// (0x00049bb5) bg_popup_call2_bubble_pane_g5

0xc616,	// (0x00049bbd) bg_popup_call2_bubble_pane_g6

0xc61e,	// (0x00049bc5) bg_popup_call2_bubble_pane_g7

0xc626,	// (0x00049bcd) bg_popup_call2_bubble_pane_g8

0xc62e,	// (0x00049bd5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0004cb28) bg_popup_call2_bubble_pane_g

0x2978,	// (0x0003ff1f) aid_cale_week_size_cell_pane

0x2fe5,	// (0x0004058c) aid_cams_cif_uncrop_pane_ParamLimits

0x2fe5,	// (0x0004058c) aid_cams_cif_uncrop_pane

0x3140,	// (0x000406e7) aid_cams_size_cell_ParamLimits

0x3140,	// (0x000406e7) aid_cams_size_cell

0x314c,	// (0x000406f3) grid_cams_pane_ParamLimits

0x315a,	// (0x00040701) linegrid_cams_pane_ParamLimits

0x3231,	// (0x000407d8) call_video_pane_t1

0x3252,	// (0x000407f9) call_video_pane_t2

0x0001,

0xf26e,	// (0x0004c815) call_video_pane_t

0x37c1,	// (0x00040d68) aid_cale_month_size_cell_pane_ParamLimits

0x37c1,	// (0x00040d68) aid_cale_month_size_cell_pane

0xf60b,	// (0x0004cbb2) smil_status_volume_pane_g

0x5687,	// (0x00042c2e) volume_smil_pane_ParamLimits

0x20f1,	// (0x0003f698) aid_popup2_width_pane

0x286c,	// (0x0003fe13) cell_qdial_pane_g4_ParamLimits

0x286c,	// (0x0003fe13) cell_qdial_pane_g4

0x46ff,	// (0x00041ca6) aid_blid_cardinal_pane_ParamLimits

0x470f,	// (0x00041cb6) aid_blid_destination_pane_ParamLimits

0x470f,	// (0x00041cb6) aid_blid_destination_pane

0xa62d,	// (0x00047bd4) bg_popup_call_poc_act_pane_ParamLimits

0xa62d,	// (0x00047bd4) bg_popup_call_poc_act_pane

0xa62d,	// (0x00047bd4) bg_popup_call_poc_inact_pane_ParamLimits

0xa62d,	// (0x00047bd4) bg_popup_call_poc_inact_pane

0xc636,	// (0x00049bdd) bg_popup_call_poc_act_pane_g1

0xc63e,	// (0x00049be5) bg_popup_call_poc_act_pane_g2

0xc646,	// (0x00049bed) bg_popup_call_poc_act_pane_g3

0xc606,	// (0x00049bad) bg_popup_call_poc_act_pane_g4

0xc60e,	// (0x00049bb5) bg_popup_call_poc_act_pane_g5

0xc64e,	// (0x00049bf5) bg_popup_call_poc_act_pane_g6

0xc61e,	// (0x00049bc5) bg_popup_call_poc_act_pane_g7

0xc656,	// (0x00049bfd) bg_popup_call_poc_act_pane_g8

0xa3d2,	// (0x00047979) main_usb_pane

0x5478,	// (0x00042a1f) popup_cale_lunar_info_window

0x3571,	// (0x00040b18) im_reading_pane_t1_ParamLimits

0xaa0b,	// (0x00047fb2) list_im_pane_ParamLimits

0xaa1c,	// (0x00047fc3) scroll_pane_cp07_ParamLimits

0xa3d2,	// (0x00047979) grid_highlight_pane_cp012

0xa62d,	// (0x00047bd4) mup_scale_pane_ParamLimits

0xaf9d,	// (0x00048544) main_usb_pane_g1_ParamLimits

0xaf9d,	// (0x00048544) main_usb_pane_g1

0x51e7,	// (0x0004278e) main_usb_pane_g2_ParamLimits

0x51e7,	// (0x0004278e) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0004cb52) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0004cb52) main_usb_pane_g

0x51f3,	// (0x0004279a) main_usb_pane_t1_ParamLimits

0x51f3,	// (0x0004279a) main_usb_pane_t1

0x5205,	// (0x000427ac) main_usb_pane_t2_ParamLimits

0x5205,	// (0x000427ac) main_usb_pane_t2

0x5217,	// (0x000427be) main_usb_pane_t3_ParamLimits

0x5217,	// (0x000427be) main_usb_pane_t3

0x5229,	// (0x000427d0) main_usb_pane_t4_ParamLimits

0x5229,	// (0x000427d0) main_usb_pane_t4

0x523b,	// (0x000427e2) main_usb_pane_t5_ParamLimits

0x523b,	// (0x000427e2) main_usb_pane_t5

0x524d,	// (0x000427f4) main_usb_pane_t6_ParamLimits

0x524d,	// (0x000427f4) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0004cb57) main_usb_pane_t_ParamLimits

0x46a5,	// (0x00041c4c) aid_text_placing

0x46b1,	// (0x00041c58) main_location2_pane_t1_ParamLimits

0x46c5,	// (0x00041c6c) main_location2_pane_t2_ParamLimits

0x46d9,	// (0x00041c80) main_location2_pane_t3_ParamLimits

0x46ed,	// (0x00041c94) main_location2_pane_t4_ParamLimits

0x46ed,	// (0x00041c94) main_location2_pane_t4

0xf3cf,	// (0x0004c976) main_location2_pane_t_ParamLimits

0xa669,	// (0x00047c10) find_pinb_pane_g2_ParamLimits

0xa669,	// (0x00047c10) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0004c6c6) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0004c6c6) find_pinb_pane_g

0xa675,	// (0x00047c1c) find_pinb_pane_t1_ParamLimits

0xa687,	// (0x00047c2e) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0004c6cb) find_pinb_pane_t_ParamLimits

0xa3d2,	// (0x00047979) main_call3_pane

0x3d35,	// (0x000412dc) cale_month_day_heading_pane_t1_ParamLimits

0x3dbb,	// (0x00041362) cale_month_day_heading_pane_t2_ParamLimits

0x3e4c,	// (0x000413f3) cale_month_day_heading_pane_t3_ParamLimits

0x3edd,	// (0x00041484) cale_month_day_heading_pane_t4_ParamLimits

0x3f6e,	// (0x00041515) cale_month_day_heading_pane_t5_ParamLimits

0x3fff,	// (0x000415a6) cale_month_day_heading_pane_t6_ParamLimits

0x409c,	// (0x00041643) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0004c84d) cale_month_day_heading_pane_t_ParamLimits

0xac66,	// (0x0004820d) smil_status_volume_pane

0x4d9e,	// (0x00042345) postcard_address_pane_ParamLimits

0x4d9e,	// (0x00042345) postcard_address_pane

0x4daa,	// (0x00042351) postcard_message_pane_ParamLimits

0x4daa,	// (0x00042351) postcard_message_pane

0x51ae,	// (0x00042755) call2_cli_visual_pane_t1_ParamLimits

0x51ae,	// (0x00042755) call2_cli_visual_pane_t1

0x57dc,	// (0x00042d83) postcard_message_pane_t1_ParamLimits

0x57dc,	// (0x00042d83) postcard_message_pane_t1

0x57c5,	// (0x00042d6c) postcard_address_pane_t1_ParamLimits

0x57c5,	// (0x00042d6c) postcard_address_pane_t1

0x57b6,	// (0x00042d5d) popup_call3_audio_in_window_ParamLimits

0x57b6,	// (0x00042d5d) popup_call3_audio_in_window

0x569c,	// (0x00042c43) bg_popup_call3_in_pane_ParamLimits

0x569c,	// (0x00042c43) bg_popup_call3_in_pane

0x56fc,	// (0x00042ca3) popup_call3_audio_in_window_g1_ParamLimits

0x56fc,	// (0x00042ca3) popup_call3_audio_in_window_g1

0x5714,	// (0x00042cbb) popup_call3_audio_in_window_g2_ParamLimits

0x5714,	// (0x00042cbb) popup_call3_audio_in_window_g2

0x572c,	// (0x00042cd3) popup_call3_audio_in_window_g3_ParamLimits

0x572c,	// (0x00042cd3) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0004cbb9) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0004cbb9) popup_call3_audio_in_window_g

0x5754,	// (0x00042cfb) popup_call3_audio_in_window_t1_ParamLimits

0x5754,	// (0x00042cfb) popup_call3_audio_in_window_t1

0x577c,	// (0x00042d23) popup_call3_audio_in_window_t2_ParamLimits

0x577c,	// (0x00042d23) popup_call3_audio_in_window_t2

0x57a4,	// (0x00042d4b) popup_call3_audio_in_window_t3_ParamLimits

0x57a4,	// (0x00042d4b) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0004cbc2) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0004cbc2) popup_call3_audio_in_window_t

0xa90a,	// (0x00047eb1) bg_popup_call3_rect_pane

0xc5ae,	// (0x00049b55) bg_popup_call3_rect_pane_g1

0xa82f,	// (0x00047dd6) bg_popup_call3_rect_pane_g2

0xc5b6,	// (0x00049b5d) bg_popup_call3_rect_pane_g3

0xc5be,	// (0x00049b65) bg_popup_call3_rect_pane_g4

0xc5c6,	// (0x00049b6d) bg_popup_call3_rect_pane_g5

0xc5ce,	// (0x00049b75) bg_popup_call3_rect_pane_g6

0xc5d6,	// (0x00049b7d) bg_popup_call3_rect_pane_g7

0x4a25,	// (0x00041fcc) mup_visualizer_osc_pane

0xb44d,	// (0x000489f4) mup_visualizer_spec_pane

0x56bc,	// (0x00042c63) call3_video_qcif_pane_ParamLimits

0x56bc,	// (0x00042c63) call3_video_qcif_pane

0x56cc,	// (0x00042c73) call3_video_qcif_uncrop_pane_ParamLimits

0x56cc,	// (0x00042c73) call3_video_qcif_uncrop_pane

0x56da,	// (0x00042c81) call3_video_subqcif_pane_ParamLimits

0x56da,	// (0x00042c81) call3_video_subqcif_pane

0x56ec,	// (0x00042c93) call3_video_subqcif_uncrop_pane_ParamLimits

0x56ec,	// (0x00042c93) call3_video_subqcif_uncrop_pane

0x5744,	// (0x00042ceb) popup_call3_audio_in_window_g4_ParamLimits

0x5744,	// (0x00042ceb) popup_call3_audio_in_window_g4

0x5667,	// (0x00042c0e) mup_spec_half_pane

0x5670,	// (0x00042c17) mup_spec_half_pane_cp

0xc813,	// (0x00049dba) mup_osc_middle_pane

0xc81c,	// (0x00049dc3) mup_visualizer_osc_pane_g1

0x5648,	// (0x00042bef) mup_spec_bar_pane_ParamLimits

0x5648,	// (0x00042bef) mup_spec_bar_pane

0xc800,	// (0x00049da7) mup_spec_bar_pane_g1

0xc80a,	// (0x00049db1) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004cbad) mup_spec_bar_pane_g

0x2978,	// (0x0003ff1f) aid_cale_week_size_cell_pane_ParamLimits

0x298d,	// (0x0003ff34) bg_cale_heading_pane_ParamLimits

0xa86c,	// (0x00047e13) bg_cale_pane_cp01_ParamLimits

0x29af,	// (0x0003ff56) cale_week_corner_pane_ParamLimits

0x29c9,	// (0x0003ff70) cale_week_day_heading_pane_ParamLimits

0x29eb,	// (0x0003ff92) cale_week_scroll_pane_g1_ParamLimits

0x2a08,	// (0x0003ffaf) cale_week_scroll_pane_g2_ParamLimits

0x2a1b,	// (0x0003ffc2) cale_week_scroll_pane_g3_ParamLimits

0x2a2e,	// (0x0003ffd5) cale_week_scroll_pane_g4_ParamLimits

0x2a41,	// (0x0003ffe8) cale_week_scroll_pane_g5_ParamLimits

0x2a54,	// (0x0003fffb) cale_week_scroll_pane_g6_ParamLimits

0x2a67,	// (0x0004000e) cale_week_scroll_pane_g7_ParamLimits

0x2a7a,	// (0x00040021) cale_week_scroll_pane_g8_ParamLimits

0x2a8f,	// (0x00040036) cale_week_scroll_pane_g9_ParamLimits

0x2aa2,	// (0x00040049) cale_week_scroll_pane_g10_ParamLimits

0x2ab5,	// (0x0004005c) cale_week_scroll_pane_g11_ParamLimits

0x2ac8,	// (0x0004006f) cale_week_scroll_pane_g12_ParamLimits

0x2adf,	// (0x00040086) cale_week_scroll_pane_g13_ParamLimits

0x2afa,	// (0x000400a1) cale_week_scroll_pane_g14_ParamLimits

0x2b15,	// (0x000400bc) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0004c757) cale_week_scroll_pane_g_ParamLimits

0x2b45,	// (0x000400ec) cale_week_time_pane_ParamLimits

0x2b5a,	// (0x00040101) grid_cale_week_pane_ParamLimits

0xa889,	// (0x00047e30) listscroll_cale_week_pane_t1

0xa89b,	// (0x00047e42) scroll_pane_cp08_ParamLimits

0x382a,	// (0x00040dd1) cale_month_corner_pane_ParamLimits

0xac3c,	// (0x000481e3) cale_month_pane_t1

0x3cce,	// (0x00041275) cale_month_week_pane_ParamLimits

0xaf9d,	// (0x00048544) popup_call_status_window_g1_ParamLimits

0x44eb,	// (0x00041a92) popup_call_status_window_g2_ParamLimits

0x44f7,	// (0x00041a9e) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0004c8fd) popup_call_status_window_g_ParamLimits

0xb004,	// (0x000485ab) aid_call2_pane

0x0f59,	// (0x0003e500) msg_header_pane_g1

0x4d9e,	// (0x00042345) postcard_address2_pane_ParamLimits

0x4d9e,	// (0x00042345) postcard_address2_pane

0x4daa,	// (0x00042351) postcard_message2_pane_ParamLimits

0x4daa,	// (0x00042351) postcard_message2_pane

0x55da,	// (0x00042b81) message2_row_pane_ParamLimits

0x55da,	// (0x00042b81) message2_row_pane

0x55f7,	// (0x00042b9e) address2_row_pane_ParamLimits

0x55f7,	// (0x00042b9e) address2_row_pane

0xc7ce,	// (0x00049d75) postcard_message2_row_pane_g1

0xc7d6,	// (0x00049d7d) postcard_message2_row_pane_t1

0xc7ce,	// (0x00049d75) address2_row_pane_g1

0xc7d6,	// (0x00049d7d) address2_row_pane_t1

0x2ecb,	// (0x00040472) aid_size_cell_vorec

0xa3d2,	// (0x00047979) main_rss_pane

0x560a,	// (0x00042bb1) rss_list_single_pane_ParamLimits

0x560a,	// (0x00042bb1) rss_list_single_pane

0xc7e4,	// (0x00049d8b) rss_list_single_pane_t1

0xc7f2,	// (0x00049d99) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0004cba8) rss_list_single_pane_t

0xa3d2,	// (0x00047979) main_camera2_pane

0xa3d2,	// (0x00047979) main_video2_pane

0x5840,	// (0x00042de7) cams_zoom_pane_cp2_ParamLimits

0x5840,	// (0x00042de7) cams_zoom_pane_cp2

0x584c,	// (0x00042df3) image2_vga_pane_ParamLimits

0x584c,	// (0x00042df3) image2_vga_pane

0x585b,	// (0x00042e02) main_camera2_pane_g1_ParamLimits

0x585b,	// (0x00042e02) main_camera2_pane_g1

0x5867,	// (0x00042e0e) main_camera2_pane_g2_ParamLimits

0x5867,	// (0x00042e0e) main_camera2_pane_g2

0x5873,	// (0x00042e1a) main_camera2_pane_g3_ParamLimits

0x5873,	// (0x00042e1a) main_camera2_pane_g3

0x587f,	// (0x00042e26) main_camera2_pane_g4_ParamLimits

0x587f,	// (0x00042e26) main_camera2_pane_g4

0x588b,	// (0x00042e32) main_camera2_pane_g5_ParamLimits

0x588b,	// (0x00042e32) main_camera2_pane_g5

0x5897,	// (0x00042e3e) main_camera2_pane_g6_ParamLimits

0x5897,	// (0x00042e3e) main_camera2_pane_g6

0x58a3,	// (0x00042e4a) main_camera2_pane_g7_ParamLimits

0x58a3,	// (0x00042e4a) main_camera2_pane_g7

0x58af,	// (0x00042e56) main_camera2_pane_g8_ParamLimits

0x58af,	// (0x00042e56) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0004cbc9) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0004cbc9) main_camera2_pane_g

0x58c7,	// (0x00042e6e) main_camera2_pane_t1_ParamLimits

0x58c7,	// (0x00042e6e) main_camera2_pane_t1

0x58d9,	// (0x00042e80) main_camera2_pane_t2_ParamLimits

0x58d9,	// (0x00042e80) main_camera2_pane_t2

0x58eb,	// (0x00042e92) main_camera2_pane_t3_ParamLimits

0x58eb,	// (0x00042e92) main_camera2_pane_t3

0x58fd,	// (0x00042ea4) main_camera2_pane_t4_ParamLimits

0x58fd,	// (0x00042ea4) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0004cbdc) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0004cbdc) main_camera2_pane_t

0x595f,	// (0x00042f06) cams_zoom_pane_cp4_ParamLimits

0x595f,	// (0x00042f06) cams_zoom_pane_cp4

0x596f,	// (0x00042f16) image2_cif_pane_ParamLimits

0x596f,	// (0x00042f16) image2_cif_pane

0x5984,	// (0x00042f2b) image2_subqcif_pane_ParamLimits

0x5984,	// (0x00042f2b) image2_subqcif_pane

0x5993,	// (0x00042f3a) main_video2_pane_g1_ParamLimits

0x5993,	// (0x00042f3a) main_video2_pane_g1

0x59a5,	// (0x00042f4c) main_video2_pane_g2_ParamLimits

0x59a5,	// (0x00042f4c) main_video2_pane_g2

0x59b5,	// (0x00042f5c) main_video2_pane_g3_ParamLimits

0x59b5,	// (0x00042f5c) main_video2_pane_g3

0x59c5,	// (0x00042f6c) main_video2_pane_g4_ParamLimits

0x59c5,	// (0x00042f6c) main_video2_pane_g4

0x59d5,	// (0x00042f7c) main_video2_pane_g5_ParamLimits

0x59d5,	// (0x00042f7c) main_video2_pane_g5

0x59e5,	// (0x00042f8c) main_video2_pane_g6_ParamLimits

0x59e5,	// (0x00042f8c) main_video2_pane_g6

0x0005,

0xf644,	// (0x0004cbeb) main_video2_pane_g_ParamLimits

0xf644,	// (0x0004cbeb) main_video2_pane_g

0x59f7,	// (0x00042f9e) main_video2_pane_t1_ParamLimits

0x59f7,	// (0x00042f9e) main_video2_pane_t1

0x5a11,	// (0x00042fb8) main_video2_pane_t2_ParamLimits

0x5a11,	// (0x00042fb8) main_video2_pane_t2

0x5a37,	// (0x00042fde) main_video2_pane_t3_ParamLimits

0x5a37,	// (0x00042fde) main_video2_pane_t3

0x0002,

0xf651,	// (0x0004cbf8) main_video2_pane_t_ParamLimits

0xf651,	// (0x0004cbf8) main_video2_pane_t

0x5304,	// (0x000428ab) call_muted_g2

0x0001,

0xf5f3,	// (0x0004cb9a) call_muted_g

0xa3d2,	// (0x00047979) main_mup2_pane

0xc853,	// (0x00049dfa) main_mup2_pane_g1_ParamLimits

0xc853,	// (0x00049dfa) main_mup2_pane_g1

0x5a5d,	// (0x00043004) main_mup2_pane_g2_ParamLimits

0x5a5d,	// (0x00043004) main_mup2_pane_g2

0x5cdf,	// (0x00043286) main_mup_pane_g13_cp1

0x5ce7,	// (0x0004328e) mup_volume_pane_cp1

0x5a7d,	// (0x00043024) main_mup2_pane_g4_ParamLimits

0x5a7d,	// (0x00043024) main_mup2_pane_g4

0x5a92,	// (0x00043039) main_mup2_pane_g5_ParamLimits

0x5a92,	// (0x00043039) main_mup2_pane_g5

0x5aa7,	// (0x0004304e) main_mup2_pane_g6_ParamLimits

0x5aa7,	// (0x0004304e) main_mup2_pane_g6

0x5abc,	// (0x00043063) main_mup2_pane_g7_ParamLimits

0x5abc,	// (0x00043063) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0004cbff) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0004cbff) main_mup2_pane_g

0x5ad8,	// (0x0004307f) main_mup2_pane_t1_ParamLimits

0x5ad8,	// (0x0004307f) main_mup2_pane_t1

0x5aef,	// (0x00043096) main_mup2_pane_t2_ParamLimits

0x5aef,	// (0x00043096) main_mup2_pane_t2

0x5b06,	// (0x000430ad) main_mup2_pane_t3_ParamLimits

0x5b06,	// (0x000430ad) main_mup2_pane_t3

0x5b1d,	// (0x000430c4) main_mup2_pane_t4_ParamLimits

0x5b1d,	// (0x000430c4) main_mup2_pane_t4

0x5b37,	// (0x000430de) main_mup2_pane_t5_ParamLimits

0x5b37,	// (0x000430de) main_mup2_pane_t5

0x5b51,	// (0x000430f8) main_mup2_pane_t6_ParamLimits

0x5b51,	// (0x000430f8) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0004cc0e) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0004cc0e) main_mup2_pane_t

0x5b89,	// (0x00043130) mup2_visualizer_pane_ParamLimits

0x5b89,	// (0x00043130) mup2_visualizer_pane

0x5bbf,	// (0x00043166) mup_progress_pane_cp_ParamLimits

0x5bbf,	// (0x00043166) mup_progress_pane_cp

0x5cca,	// (0x00043271) mup_volume_pane_cp_ParamLimits

0x5cca,	// (0x00043271) mup_volume_pane_cp

0x5bd6,	// (0x0004317d) mup2_visualizer_pane_g1_ParamLimits

0x5bd6,	// (0x0004317d) mup2_visualizer_pane_g1

0xc85f,	// (0x00049e06) mup2_visualizer_pane_g2_ParamLimits

0xc85f,	// (0x00049e06) mup2_visualizer_pane_g2

0x5beb,	// (0x00043192) mup2_visualizer_pane_g3_ParamLimits

0x5beb,	// (0x00043192) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0004cc1b) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0004cc1b) mup2_visualizer_pane_g

0xb680,	// (0x00048c27) aid_size_cell_fmradio

0x541a,	// (0x000429c1) aid_height_parent_landcape

0xaa9a,	// (0x00048041) wml_content_pane_cp

0xaaa2,	// (0x00048049) wml_tabs_pane

0xaaab,	// (0x00048052) popup_wml_miniature_window

0xaab3,	// (0x0004805a) scroll_pane_cp021

0xaac7,	// (0x0004806e) wml_content_pane_comp8

0xa3d2,	// (0x00047979) bg_popup_sub_pane_cp05

0xc87d,	// (0x00049e24) popup_wml_miniature_window_g1

0xc885,	// (0x00049e2c) wml_miniature_view_pane

0x5bf9,	// (0x000431a0) aid_size_wml_view

0x5c01,	// (0x000431a8) wml_miniature_view_pane_g1

0x5c0a,	// (0x000431b1) wml_miniature_view_pane_g2

0x5c13,	// (0x000431ba) wml_miniature_view_pane_g3

0x5c1b,	// (0x000431c2) wml_miniature_view_pane_g4

0x5c23,	// (0x000431ca) wml_miniature_view_pane_g5

0x5c2b,	// (0x000431d2) wml_miniature_view_pane_g6

0x5c33,	// (0x000431da) wml_miniature_view_pane_g7

0x5c3b,	// (0x000431e2) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0004cc22) wml_miniature_view_pane_g

0xc853,	// (0x00049dfa) background_graphic_ParamLimits

0xc853,	// (0x00049dfa) background_graphic

0xc88d,	// (0x00049e34) wml_tabs_2_pane

0xc896,	// (0x00049e3d) wml_tabs_3_pane_ParamLimits

0xc896,	// (0x00049e3d) wml_tabs_3_pane

0xc8a8,	// (0x00049e4f) wml_tabs_4_pane_ParamLimits

0xc8a8,	// (0x00049e4f) wml_tabs_4_pane

0xc8be,	// (0x00049e65) wml_tabs_5_pane_ParamLimits

0xc8be,	// (0x00049e65) wml_tabs_5_pane

0xc8d8,	// (0x00049e7f) wml_tabs_pane_g2_ParamLimits

0xc8d8,	// (0x00049e7f) wml_tabs_pane_g2

0xc8ec,	// (0x00049e93) wml_tabs_pane_g3_ParamLimits

0xc8ec,	// (0x00049e93) wml_tabs_pane_g3

0x5c43,	// (0x000431ea) wml_tabs_2_active_pane_ParamLimits

0x5c43,	// (0x000431ea) wml_tabs_2_active_pane

0x5c53,	// (0x000431fa) wml_tabs_2_passive_pane_ParamLimits

0x5c53,	// (0x000431fa) wml_tabs_2_passive_pane

0x5c63,	// (0x0004320a) wml_tabs_3_active_pane_cp_ParamLimits

0x5c63,	// (0x0004320a) wml_tabs_3_active_pane_cp

0x5c74,	// (0x0004321b) wml_tabs_3_passive_pane_ParamLimits

0x5c74,	// (0x0004321b) wml_tabs_3_passive_pane

0x5c85,	// (0x0004322c) wml_tabs_3_passive_pane_cp_ParamLimits

0x5c85,	// (0x0004322c) wml_tabs_3_passive_pane_cp

0x5c96,	// (0x0004323d) tabs_4_active_pane

0x5c9e,	// (0x00043245) tabs_4_passive_pane

0x5ca6,	// (0x0004324d) tabs_4_passive_pane_cp

0x5cae,	// (0x00043255) tabs_4_passive_pane_cp2

0x51df,	// (0x00042786) aid_height_text

0x49ee,	// (0x00041f95) mup_volume_cont_pane_ParamLimits

0x49ee,	// (0x00041f95) mup_volume_cont_pane

0x24c3,	// (0x0003fa6a) aid_size_cell_pinb

0x24cd,	// (0x0003fa74) aid_size_list_pinb

0x5ba8,	// (0x0004314f) mup2_volume_cont_pane_ParamLimits

0x5ba8,	// (0x0004314f) mup2_volume_cont_pane

0x5cb6,	// (0x0004325d) mup2_volume_cont_pane_g1_ParamLimits

0x5cb6,	// (0x0004325d) mup2_volume_cont_pane_g1

0x20fd,	// (0x0003f6a4) aid_size_cell_touch_ParamLimits

0x20fd,	// (0x0003f6a4) aid_size_cell_touch

0x23a6,	// (0x0003f94d) touch_pane_ParamLimits

0x23a6,	// (0x0003f94d) touch_pane

0x9fb5,	// (0x0004755c) main_rss2_pane

0xc909,	// (0x00049eb0) listscroll_rss2_pane

0xc912,	// (0x00049eb9) rss2_navigation_pane

0xc91a,	// (0x00049ec1) list_rss2_pane

0xb153,	// (0x000486fa) scroll_pane_cp22

0xc922,	// (0x00049ec9) rss2_navigation_pane_g1

0xc92b,	// (0x00049ed2) rss2_navigation_pane_g2

0xc933,	// (0x00049eda) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0004cc33) rss2_navigation_pane_g

0xc93b,	// (0x00049ee2) rss2_navigation_pane_t1

0x5cef,	// (0x00043296) rss2_list_single_pane_ParamLimits

0x5cef,	// (0x00043296) rss2_list_single_pane

0xc949,	// (0x00049ef0) rss2_list_single_pane_t2

0xc957,	// (0x00049efe) rss2_list_single_pane_t3_ParamLimits

0xc957,	// (0x00049efe) rss2_list_single_pane_t3

0xc974,	// (0x00049f1b) rss2_list_single_pane_t4

0x434c,	// (0x000418f3) smil_status_pane_g1

0xae38,	// (0x000483df) main_image2_pane_ParamLimits

0xae38,	// (0x000483df) main_image2_pane

0x58bb,	// (0x00042e62) main_camera2_pane_g9_ParamLimits

0x58bb,	// (0x00042e62) main_camera2_pane_g9

0x590f,	// (0x00042eb6) main_camera2_pane_t5_ParamLimits

0x590f,	// (0x00042eb6) main_camera2_pane_t5

0x5921,	// (0x00042ec8) main_camera2_pane_t6_ParamLimits

0x5921,	// (0x00042ec8) main_camera2_pane_t6

0x5d27,	// (0x000432ce) main_image2_pane_g1_ParamLimits

0x5d27,	// (0x000432ce) main_image2_pane_g1

0x4f7b,	// (0x00042522) smil2_video_pane_ParamLimits

0x4f7b,	// (0x00042522) smil2_video_pane

0x0cb2,	// (0x0003e259) aid_zoom_text_primary_cp

0x234f,	// (0x0003f8f6) popup_preview_fixed_window

0xaa03,	// (0x00047faa) im_reading_pane_g1

0x5805,	// (0x00042dac) cams2_bc_adjust_pane_cp_ParamLimits

0x5805,	// (0x00042dac) cams2_bc_adjust_pane_cp

0x5951,	// (0x00042ef8) cams2_bc_adjust_pane_ParamLimits

0x5951,	// (0x00042ef8) cams2_bc_adjust_pane

0x5d33,	// (0x000432da) cams2_bc_adjust_pane_g1

0x5d3b,	// (0x000432e2) cams2_slider_pane

0x5d44,	// (0x000432eb) cams2_slider_pane_g1

0x5d4d,	// (0x000432f4) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0004cc3a) cams2_slider_pane_g

0x25bd,	// (0x0003fb64) calc_display_pane_ParamLimits

0x25db,	// (0x0003fb82) calc_paper_pane_ParamLimits

0x25f7,	// (0x0003fb9e) grid_calc_pane_ParamLimits

0x4559,	// (0x00041b00) popup_clock_digital_window_t1_ParamLimits

0xb61d,	// (0x00048bc4) main_image_pane_t1

0x25a3,	// (0x0003fb4a) aid_size_cell_calc_ParamLimits

0x25a3,	// (0x0003fb4a) aid_size_cell_calc

0x5454,	// (0x000429fb) popup_blid_sat_info2_window_ParamLimits

0x5454,	// (0x000429fb) popup_blid_sat_info2_window

0xc98a,	// (0x00049f31) aid_size_cell_blid

0xc992,	// (0x00049f39) bg_popup_window_pane_cp07

0xc9b5,	// (0x00049f5c) grid_popup_blid_pane

0xc9bf,	// (0x00049f66) heading_pane_cp05_ParamLimits

0xc9bf,	// (0x00049f66) heading_pane_cp05

0xca89,	// (0x0004a030) cell_popup_blid_pane_ParamLimits

0xca89,	// (0x0004a030) cell_popup_blid_pane

0xcaaf,	// (0x0004a056) cell_popup_blid_pane_g1

0xcab7,	// (0x0004a05e) cell_popup_blid_pane_t1

0x5b6e,	// (0x00043115) mup2_indicator_pane_ParamLimits

0x5b6e,	// (0x00043115) mup2_indicator_pane

0xa90a,	// (0x00047eb1) mup2_visualizer_osc_pane

0xc86b,	// (0x00049e12) mup2_visualizer_spec_pane_ParamLimits

0xc86b,	// (0x00049e12) mup2_visualizer_spec_pane

0x5d67,	// (0x0004330e) mup2_spec_half_pane

0x5d70,	// (0x00043317) mup2_spec_half_pane_cp

0x5d7a,	// (0x00043321) mup2_spec_bar_pane_ParamLimits

0x5d7a,	// (0x00043321) mup2_spec_bar_pane

0xc800,	// (0x00049da7) mup2_spec_bar_pane_g1

0xc80a,	// (0x00049db1) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004cbad) mup2_spec_bar_pane_g

0x5d99,	// (0x00043340) mup2_osc_middle_pane

0xc81c,	// (0x00049dc3) mup2_visualizer_osc_pane_g1

0x9fdf,	// (0x00047586) popup_number_entry_window_t1_ParamLimits

0x9ff2,	// (0x00047599) popup_number_entry_window_t2_ParamLimits

0xa004,	// (0x000475ab) popup_number_entry_window_t3_ParamLimits

0x23fd,	// (0x0003f9a4) popup_number_entry_window_t5_ParamLimits

0x23fd,	// (0x0003f9a4) popup_number_entry_window_t5

0xf0ca,	// (0x0004c671) popup_number_entry_window_t_ParamLimits

0xa016,	// (0x000475bd) text_title_cp2_ParamLimits

0x4c66,	// (0x0004220d) aid_hotspot_pointer_text2_pane

0x4d00,	// (0x000422a7) main_viewer_pane_g9_ParamLimits

0x4d00,	// (0x000422a7) main_viewer_pane_g9

0xac3c,	// (0x000481e3) cale_month_pane_t1_ParamLimits

0xac79,	// (0x00048220) bg_cale_pane_ParamLimits

0xac91,	// (0x00048238) list_cale_pane_ParamLimits

0xaca2,	// (0x00048249) listscroll_cale_day_pane_t1

0xacb4,	// (0x0004825b) scroll_pane_cp09_ParamLimits

0x4a2d,	// (0x00041fd4) main_mup_eq_pane_t1_ParamLimits

0x4a2d,	// (0x00041fd4) main_mup_eq_pane_t1

0x4a47,	// (0x00041fee) main_mup_eq_pane_t2_ParamLimits

0x4a47,	// (0x00041fee) main_mup_eq_pane_t2

0x4a5f,	// (0x00042006) main_mup_eq_pane_t3_ParamLimits

0x4a5f,	// (0x00042006) main_mup_eq_pane_t3

0x4a77,	// (0x0004201e) main_mup_eq_pane_t4_ParamLimits

0x4a77,	// (0x0004201e) main_mup_eq_pane_t4

0x4a8f,	// (0x00042036) main_mup_eq_pane_t5_ParamLimits

0x4a8f,	// (0x00042036) main_mup_eq_pane_t5

0x4aa7,	// (0x0004204e) main_mup_eq_pane_t6_ParamLimits

0x4aa7,	// (0x0004204e) main_mup_eq_pane_t6

0x4abb,	// (0x00042062) main_mup_eq_pane_t7_ParamLimits

0x4abb,	// (0x00042062) main_mup_eq_pane_t7

0x4acf,	// (0x00042076) main_mup_eq_pane_t8_ParamLimits

0x4acf,	// (0x00042076) main_mup_eq_pane_t8

0x4ae5,	// (0x0004208c) main_mup_eq_pane_t9_ParamLimits

0x4ae5,	// (0x0004208c) main_mup_eq_pane_t9

0x4afd,	// (0x000420a4) main_mup_eq_pane_t10_ParamLimits

0x4afd,	// (0x000420a4) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0004c9fc) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0004c9fc) main_mup_eq_pane_t

0x4bba,	// (0x00042161) mup_equalizer_pane_cp5_ParamLimits

0x4bd0,	// (0x00042177) mup_equalizer_pane_cp6_ParamLimits

0x4be8,	// (0x0004218f) mup_equalizer_pane_cp7_ParamLimits

0x9fb5,	// (0x0004755c) main_gallery_pane

0xc825,	// (0x00049dcc) smil2_volume_pane

0xc82d,	// (0x00049dd4) smil_status_volume_pane_g1_ParamLimits

0xc840,	// (0x00049de7) smil_status_volume_pane_g2_ParamLimits

0x567a,	// (0x00042c21) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0004cbb2) smil_status_volume_pane_g_ParamLimits

0xc992,	// (0x00049f39) bg_popup_window_pane_cp07_ParamLimits

0xc9a0,	// (0x00049f47) blid_firmament_pane

0x5da2,	// (0x00043349) aid_size_cell_gallery_ParamLimits

0x5da2,	// (0x00043349) aid_size_cell_gallery

0x5db0,	// (0x00043357) grid_gallery_pane_ParamLimits

0x5db0,	// (0x00043357) grid_gallery_pane

0x5dc0,	// (0x00043367) cell_gallery_pane_ParamLimits

0x5dc0,	// (0x00043367) cell_gallery_pane

0xcac5,	// (0x0004a06c) bg_cell_gallery_focus_pane_ParamLimits

0xcac5,	// (0x0004a06c) bg_cell_gallery_focus_pane

0xcad7,	// (0x0004a07e) cell_gallery_pane_g1_ParamLimits

0xcad7,	// (0x0004a07e) cell_gallery_pane_g1

0x5e0e,	// (0x000433b5) cell_gallery_pane_g2_ParamLimits

0x5e0e,	// (0x000433b5) cell_gallery_pane_g2

0x5e1b,	// (0x000433c2) cell_gallery_pane_g3_ParamLimits

0x5e1b,	// (0x000433c2) cell_gallery_pane_g3

0xcae3,	// (0x0004a08a) cell_gallery_pane_g4_ParamLimits

0xcae3,	// (0x0004a08a) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0004cc60) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0004cc60) cell_gallery_pane_g

0xcaef,	// (0x0004a096) bg_cell_gallery_focus_pane_g1

0xcaf7,	// (0x0004a09e) bg_cell_gallery_focus_pane_g2

0xcaff,	// (0x0004a0a6) bg_cell_gallery_focus_pane_g3

0xcb07,	// (0x0004a0ae) bg_cell_gallery_focus_pane_g4

0xcb0f,	// (0x0004a0b6) bg_cell_gallery_focus_pane_g5

0xcb17,	// (0x0004a0be) bg_cell_gallery_focus_pane_g6

0xcb1f,	// (0x0004a0c6) bg_cell_gallery_focus_pane_g7

0xcb27,	// (0x0004a0ce) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0004cc69) bg_cell_gallery_focus_pane_g

0xcb2f,	// (0x0004a0d6) aid_firma_cardinal

0xcb43,	// (0x0004a0ea) blid_firmament_pane_t1

0xcb5a,	// (0x0004a101) blid_firmament_pane_t2

0xcb71,	// (0x0004a118) blid_firmament_pane_t3

0xcb88,	// (0x0004a12f) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0004cc7a) blid_firmament_pane_t

0xcb9f,	// (0x0004a146) blid_sat_info_pane

0xcbaf,	// (0x0004a156) blid_sat_info_pane_g1

0xcbaf,	// (0x0004a156) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0004cc83) blid_sat_info_pane_g

0xcbb9,	// (0x0004a160) blid_sat_info_pane_t1

0xcbc7,	// (0x0004a16e) smil2_volume_content_pane

0xcbd0,	// (0x0004a177) smil2_volume_pane_g1

0xa7bd,	// (0x00047d64) smil2_volume_content_pane_g1

0xcbd8,	// (0x0004a17f) smil2_volume_content_pane_g2

0xcbe1,	// (0x0004a188) smil2_volume_content_pane_g3

0xcbea,	// (0x0004a191) smil2_volume_content_pane_g4

0xcbf3,	// (0x0004a19a) smil2_volume_content_pane_g5

0xcbfc,	// (0x0004a1a3) smil2_volume_content_pane_g6

0xcc05,	// (0x0004a1ac) smil2_volume_content_pane_g7

0xcc0e,	// (0x0004a1b5) smil2_volume_content_pane_g8

0xcc17,	// (0x0004a1be) smil2_volume_content_pane_g9

0xcc20,	// (0x0004a1c7) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0004cc88) smil2_volume_content_pane_g

0x2bdf,	// (0x00040186) cale_week_day_heading_pane_t1_ParamLimits

0x2c1a,	// (0x000401c1) cale_week_day_heading_pane_t2_ParamLimits

0x2c55,	// (0x000401fc) cale_week_day_heading_pane_t3_ParamLimits

0x2c90,	// (0x00040237) cale_week_day_heading_pane_t4_ParamLimits

0x2ccb,	// (0x00040272) cale_week_day_heading_pane_t5_ParamLimits

0x2d06,	// (0x000402ad) cale_week_day_heading_pane_t6_ParamLimits

0x2d41,	// (0x000402e8) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0004c778) cale_week_day_heading_pane_t_ParamLimits

0xa8b8,	// (0x00047e5f) bg_cale_side_pane_ParamLimits

0x2d7c,	// (0x00040323) cale_week_time_pane_t1_ParamLimits

0x2d96,	// (0x0004033d) cale_week_time_pane_t2_ParamLimits

0x2db0,	// (0x00040357) cale_week_time_pane_t3_ParamLimits

0x2dca,	// (0x00040371) cale_week_time_pane_t4_ParamLimits

0x2de4,	// (0x0004038b) cale_week_time_pane_t5_ParamLimits

0x2e00,	// (0x000403a7) cale_week_time_pane_t6_ParamLimits

0x2e22,	// (0x000403c9) cale_week_time_pane_t7_ParamLimits

0x2e46,	// (0x000403ed) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0004c787) cale_week_time_pane_t_ParamLimits

0x2e6c,	// (0x00040413) cell_cale_week_pane_g2_ParamLimits

0xa8b8,	// (0x00047e5f) bg_cale_side_pane_cp01_ParamLimits

0x4145,	// (0x000416ec) cale_month_week_pane_t1_ParamLimits

0x415e,	// (0x00041705) cale_month_week_pane_t2_ParamLimits

0x4177,	// (0x0004171e) cale_month_week_pane_t3_ParamLimits

0x4190,	// (0x00041737) cale_month_week_pane_t4_ParamLimits

0x41ad,	// (0x00041754) cale_month_week_pane_t5_ParamLimits

0x41ce,	// (0x00041775) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0004c85c) cale_month_week_pane_t_ParamLimits

0x4315,	// (0x000418bc) cell_cale_month_pane_g1_ParamLimits

0x9fb5,	// (0x0004755c) main_cale_event_viewer_pane

0x9fb5,	// (0x0004755c) listscroll_cale_event_viewer_pane

0xcc29,	// (0x0004a1d0) list_cale_ev_pane

0xcc31,	// (0x0004a1d8) scroll_pane_cp023

0xcc3d,	// (0x0004a1e4) field_cale_ev_pane_ParamLimits

0xcc3d,	// (0x0004a1e4) field_cale_ev_pane

0xcc59,	// (0x0004a200) field_cale_ev_content_pane_ParamLimits

0xcc59,	// (0x0004a200) field_cale_ev_content_pane

0xcc65,	// (0x0004a20c) field_cale_ev_pane_g1_ParamLimits

0xcc65,	// (0x0004a20c) field_cale_ev_pane_g1

0xcc71,	// (0x0004a218) field_cale_ev_pane_g2_ParamLimits

0xcc71,	// (0x0004a218) field_cale_ev_pane_g2

0xcc89,	// (0x0004a230) field_cale_ev_pane_g3_ParamLimits

0xcc89,	// (0x0004a230) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0004cc9d) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0004cc9d) field_cale_ev_pane_g

0xcca1,	// (0x0004a248) field_cale_ev_pane_t1_ParamLimits

0xcca1,	// (0x0004a248) field_cale_ev_pane_t1

0xccb8,	// (0x0004a25f) field_cale_ev_content_pane_t1_ParamLimits

0xccb8,	// (0x0004a25f) field_cale_ev_content_pane_t1

0xb4f7,	// (0x00048a9e) bg_button_pane_cp01

0x2968,	// (0x0003ff0f) listscroll_cale_week_pane_ParamLimits

0xa863,	// (0x00047e0a) popup_toolbar_window_cp01

0xa889,	// (0x00047e30) listscroll_cale_week_pane_t1_ParamLimits

0x2968,	// (0x0003ff0f) listscroll_cale_day_pane_ParamLimits

0xa863,	// (0x00047e0a) popup_toolbar_window_cp02

0xaca2,	// (0x00048249) listscroll_cale_day_pane_t1_ParamLimits

0x2968,	// (0x0003ff0f) main_cale_month_pane_ParamLimits

0x5551,	// (0x00042af8) popup_toolbar_window_cp03_ParamLimits

0x5551,	// (0x00042af8) popup_toolbar_window_cp03

0x4e8d,	// (0x00042434) main_image_pane_g2_ParamLimits

0x4e8d,	// (0x00042434) main_image_pane_g2

0x4e99,	// (0x00042440) main_image_pane_g3_ParamLimits

0x4e99,	// (0x00042440) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0004ca8e) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0004ca8e) main_image_pane_g

0xb61d,	// (0x00048bc4) main_image_pane_t1_ParamLimits

0x4ea5,	// (0x0004244c) main_image_pane_t2_ParamLimits

0x4ea5,	// (0x0004244c) main_image_pane_t2

0x4eb7,	// (0x0004245e) main_image_pane_t3_ParamLimits

0x4eb7,	// (0x0004245e) main_image_pane_t3

0x4ec9,	// (0x00042470) main_image_pane_t4_ParamLimits

0x4ec9,	// (0x00042470) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0004ca95) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0004ca95) main_image_pane_t

0x4edb,	// (0x00042482) popup_image_details_window_cp01

0x4ee5,	// (0x0004248c) popup_toobar_trans_pane_cp01_ParamLimits

0x4ee5,	// (0x0004248c) popup_toobar_trans_pane_cp01

0x54a7,	// (0x00042a4e) popup_image_details_window_ParamLimits

0x54a7,	// (0x00042a4e) popup_image_details_window

0x54b5,	// (0x00042a5c) popup_image_focus_window

0x57f7,	// (0x00042d9e) camera2_autofocus_pane_ParamLimits

0x57f7,	// (0x00042d9e) camera2_autofocus_pane

0x9fb5,	// (0x0004755c) bg_popup_sub_pane_cp06

0xccd5,	// (0x0004a27c) popup_image_focus_window_g1

0xccdd,	// (0x0004a284) popup_image_focus_window_g2

0xcce5,	// (0x0004a28c) popup_image_focus_window_g3

0xcced,	// (0x0004a294) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0004cca4) popup_image_focus_window_g

0xccf5,	// (0x0004a29c) popup_image_focus_window_t1

0xcd03,	// (0x0004a2aa) popup_image_focus_window_t2

0xcd13,	// (0x0004a2ba) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0004ccad) popup_image_focus_window_t

0xcd21,	// (0x0004a2c8) camera2_autofocus_pane_g1

0xae38,	// (0x000483df) bg_tb_trans_pane_cp01

0xcd2f,	// (0x0004a2d6) popup_image_details_window_g1

0xcd42,	// (0x0004a2e9) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0004ccbf) popup_image_details_window_g

0xcd6b,	// (0x0004a312) popup_image_details_window_t1

0xcd7d,	// (0x0004a324) popup_image_details_window_t2

0xcd96,	// (0x0004a33d) popup_image_details_window_t3

0xcdaa,	// (0x0004a351) popup_image_details_window_t4

0xcdc5,	// (0x0004a36c) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0004ccc6) popup_image_details_window_t

0xa728,	// (0x00047ccf) bg_calc_paper_pane_ParamLimits

0x9fb5,	// (0x0004755c) grid_highlight_pane_cp013

0x26f4,	// (0x0003fc9b) list_calc_pane_ParamLimits

0x2706,	// (0x0003fcad) scroll_pane_cp024

0xa73c,	// (0x00047ce3) bg_calc_display_pane_ParamLimits

0x270e,	// (0x0003fcb5) calc_display_pane_t1_ParamLimits

0x2723,	// (0x0003fcca) calc_display_pane_t2_ParamLimits

0x2738,	// (0x0003fcdf) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0004c6f8) calc_display_pane_t_ParamLimits

0x2819,	// (0x0003fdc0) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0004c715) cell_calc_pane_g

0x2822,	// (0x0003fdc9) cell_calc_pane_t1

0xa79b,	// (0x00047d42) grid_highlight_pane_cp02_ParamLimits

0xa7b1,	// (0x00047d58) toolbar_button_pane_cp01_ParamLimits

0xa7b1,	// (0x00047d58) toolbar_button_pane_cp01

0xb662,	// (0x00048c09) temp_image_control_pane_ParamLimits

0xb662,	// (0x00048c09) temp_image_control_pane

0xae38,	// (0x000483df) main_mp3_pane

0xcddf,	// (0x0004a386) temp_image_control_pane_g1_ParamLimits

0xcddf,	// (0x0004a386) temp_image_control_pane_g1

0xcded,	// (0x0004a394) temp_image_control_pane_g2_ParamLimits

0xcded,	// (0x0004a394) temp_image_control_pane_g2

0xcdff,	// (0x0004a3a6) temp_image_control_pane_g3_ParamLimits

0xcdff,	// (0x0004a3a6) temp_image_control_pane_g3

0x5e58,	// (0x000433ff) temp_image_control_pane_g4_ParamLimits

0x5e58,	// (0x000433ff) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0004ccd1) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0004ccd1) temp_image_control_pane_g

0xcddf,	// (0x0004a386) main_mp3_pane_g1

0x5e69,	// (0x00043410) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0004ccda) main_mp3_pane_g

0xce42,	// (0x0004a3e9) main_mp3_pane_t1

0xa912,	// (0x00047eb9) main_camera_pane_g8_ParamLimits

0xa912,	// (0x00047eb9) main_camera_pane_g8

0x30f6,	// (0x0004069d) main_video_pane_g7_ParamLimits

0x30f6,	// (0x0004069d) main_video_pane_g7

0x593f,	// (0x00042ee6) main_camera2_pane_t7_ParamLimits

0x593f,	// (0x00042ee6) main_camera2_pane_t7

0xaa5a,	// (0x00048001) scroll_pane_cp025_ParamLimits

0xaa5a,	// (0x00048001) scroll_pane_cp025

0xaa6e,	// (0x00048015) scroll_pane_cp026_ParamLimits

0xaa6e,	// (0x00048015) scroll_pane_cp026

0xaa7d,	// (0x00048024) wml_content_pane_ParamLimits

0x9fb5,	// (0x0004755c) main_touch_calib_pane

0x5f0d,	// (0x000434b4) main_touch_calib_pane_g1

0x5f19,	// (0x000434c0) main_touch_calib_pane_g2

0x5f25,	// (0x000434cc) main_touch_calib_pane_g3

0x5f31,	// (0x000434d8) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0004ccf8) main_touch_calib_pane_g

0x5f3d,	// (0x000434e4) main_touch_calib_pane_t1

0x5f56,	// (0x000434fd) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0004cd01) main_touch_calib_pane_t

0xb231,	// (0x000487d8) mup_progress_pane_cp02

0xb266,	// (0x0004880d) navi_pane_g1

0xb321,	// (0x000488c8) navi_pane_mp_t3

0xae38,	// (0x000483df) main_mp3_pane_ParamLimits

0x558e,	// (0x00042b35) navi_pane_ParamLimits

0xcddf,	// (0x0004a386) main_mp3_pane_g1_ParamLimits

0x5e69,	// (0x00043410) main_mp3_pane_g2_ParamLimits

0x5e75,	// (0x0004341c) main_mp3_pane_g3_ParamLimits

0x5e75,	// (0x0004341c) main_mp3_pane_g3

0x5e81,	// (0x00043428) main_mp3_pane_g4_ParamLimits

0x5e81,	// (0x00043428) main_mp3_pane_g4

0xce0f,	// (0x0004a3b6) main_mp3_pane_g5_ParamLimits

0xce0f,	// (0x0004a3b6) main_mp3_pane_g5

0xce1d,	// (0x0004a3c4) main_mp3_pane_g6_ParamLimits

0xce1d,	// (0x0004a3c4) main_mp3_pane_g6

0xce2a,	// (0x0004a3d1) main_mp3_pane_g7_ParamLimits

0xce2a,	// (0x0004a3d1) main_mp3_pane_g7

0xce36,	// (0x0004a3dd) main_mp3_pane_g8_ParamLimits

0xce36,	// (0x0004a3dd) main_mp3_pane_g8

0xf733,	// (0x0004ccda) main_mp3_pane_g_ParamLimits

0x5e8d,	// (0x00043434) main_mp3_pane_t2

0x5e9d,	// (0x00043444) main_mp3_pane_t3

0xce50,	// (0x0004a3f7) main_mp3_pane_t4

0xce5e,	// (0x0004a405) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0004cceb) main_mp3_pane_t

0xce6c,	// (0x0004a413) mup_progress_pane_cp01

0x0cb2,	// (0x0003e259) aid_zoom_text_secondary2

0xcc29,	// (0x0004a1d0) list_cale_ev2_pane

0xcc31,	// (0x0004a1d8) scroll_pane_cp023_ParamLimits

0x5fb1,	// (0x00043558) field_cale_ev2_pane_ParamLimits

0x5fb1,	// (0x00043558) field_cale_ev2_pane

0x0fe0,	// (0x0003e587) field_cale_ev2_pane_g1_ParamLimits

0x0fe0,	// (0x0003e587) field_cale_ev2_pane_g1

0x0fec,	// (0x0003e593) field_cale_ev2_pane_g2_ParamLimits

0x0fec,	// (0x0003e593) field_cale_ev2_pane_g2

0x1004,	// (0x0003e5ab) field_cale_ev2_pane_g3_ParamLimits

0x1004,	// (0x0003e5ab) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0004cd0c) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0004cd0c) field_cale_ev2_pane_g

0x1028,	// (0x0003e5cf) field_cale_ev2_pane_t1_ParamLimits

0x1028,	// (0x0003e5cf) field_cale_ev2_pane_t1

0x103f,	// (0x0003e5e6) field_cale_ev2_pane_t2_ParamLimits

0x103f,	// (0x0003e5e6) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0004cd15) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0004cd15) field_cale_ev2_pane_t

0x4d68,	// (0x0004230f) main_postcard_pane_g5_ParamLimits

0x4d68,	// (0x0004230f) main_postcard_pane_g5

0x4d76,	// (0x0004231d) main_postcard_pane_g6_ParamLimits

0x4d76,	// (0x0004231d) main_postcard_pane_g6

0x2f40,	// (0x000404e7) camera2_autofocus_pane_cp_ParamLimits

0x2f40,	// (0x000404e7) camera2_autofocus_pane_cp

0xae38,	// (0x000483df) main_mup3_pane

0x5fff,	// (0x000435a6) main_mup3_pane_g1_ParamLimits

0x5fff,	// (0x000435a6) main_mup3_pane_g1

0x6020,	// (0x000435c7) main_mup3_pane_g2_ParamLimits

0x6020,	// (0x000435c7) main_mup3_pane_g2

0x609c,	// (0x00043643) main_mup3_pane_g3_ParamLimits

0x609c,	// (0x00043643) main_mup3_pane_g3

0x60df,	// (0x00043686) main_mup3_pane_g4_ParamLimits

0x60df,	// (0x00043686) main_mup3_pane_g4

0x6122,	// (0x000436c9) main_mup3_pane_g5_ParamLimits

0x6122,	// (0x000436c9) main_mup3_pane_g5

0x6167,	// (0x0004370e) main_mup3_pane_g6_ParamLimits

0x6167,	// (0x0004370e) main_mup3_pane_g6

0xce74,	// (0x0004a41b) main_mup3_pane_g7_ParamLimits

0xce74,	// (0x0004a41b) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0004cd25) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0004cd25) main_mup3_pane_g

0x61dd,	// (0x00043784) main_mup3_pane_t1_ParamLimits

0x61dd,	// (0x00043784) main_mup3_pane_t1

0x624c,	// (0x000437f3) main_mup3_pane_t2_ParamLimits

0x624c,	// (0x000437f3) main_mup3_pane_t2

0x6315,	// (0x000438bc) main_mup3_pane_t4_ParamLimits

0x6315,	// (0x000438bc) main_mup3_pane_t4

0x6363,	// (0x0004390a) main_mup3_pane_t5_ParamLimits

0x6363,	// (0x0004390a) main_mup3_pane_t5

0x6413,	// (0x000439ba) main_mup3_pane_t6_ParamLimits

0x6413,	// (0x000439ba) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0004cd36) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0004cd36) main_mup3_pane_t

0x64bf,	// (0x00043a66) mup3_progress_pane_ParamLimits

0x64bf,	// (0x00043a66) mup3_progress_pane

0x6533,	// (0x00043ada) popup_mup3_control_window_ParamLimits

0x6533,	// (0x00043ada) popup_mup3_control_window

0xce82,	// (0x0004a429) popup_mup3_text_window

0x654c,	// (0x00043af3) mup3_progress_pane_t1

0x656b,	// (0x00043b12) mup3_progress_pane_t2

0xce8a,	// (0x0004a431) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0004cd43) mup3_progress_pane_t

0xcea7,	// (0x0004a44e) mup_progress_pane_cp03

0x9fb5,	// (0x0004755c) bg_tb_trans_pane_cp04

0x658a,	// (0x00043b31) mup3_volume_pane

0x6592,	// (0x00043b39) popup_mup3_control_window_g1

0x659b,	// (0x00043b42) mup3_volume_pane_g1

0x65a4,	// (0x00043b4b) mup3_volume_pane_g2

0x65ad,	// (0x00043b54) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0004cd4a) mup3_volume_pane_g

0x9fb5,	// (0x0004755c) bg_tb_trans_pane_cp03

0xceb7,	// (0x0004a45e) popup_mup3_text_window_g1

0xcebf,	// (0x0004a466) popup_mup3_text_window_t1

0xa784,	// (0x00047d2b) list_calc_item_pane_g1_ParamLimits

0xc900,	// (0x00049ea7) mup_volume_pane_cp_g1

0x5f6f,	// (0x00043516) main_touch_calib_pane_t3

0x5f85,	// (0x0004352c) main_touch_calib_pane_t4

0x5f9b,	// (0x00043542) main_touch_calib_pane_t5

0x20e9,	// (0x0003f690) aid_cell_size_toolbar2

0x20f1,	// (0x0003f698) aid_popup3_width_pane

0x0caa,	// (0x0003e251) aid_zoom_text_msg_primary

0x2f15,	// (0x000404bc) vorec_t7

0xa748,	// (0x00047cef) bg_calc_paper_pane_g1_ParamLimits

0xa754,	// (0x00047cfb) bg_calc_paper_pane_g2_ParamLimits

0xa760,	// (0x00047d07) bg_calc_paper_pane_g3_ParamLimits

0xa76c,	// (0x00047d13) bg_calc_paper_pane_g4_ParamLimits

0xa778,	// (0x00047d1f) bg_calc_paper_pane_g5_ParamLimits

0x2777,	// (0x0003fd1e) bg_calc_paper_pane_g6_ParamLimits

0x2788,	// (0x0003fd2f) bg_calc_paper_pane_g7_ParamLimits

0x2799,	// (0x0003fd40) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0004c6ff) bg_calc_paper_pane_g_ParamLimits

0x27aa,	// (0x0003fd51) calc_bg_paper_pane_g9_ParamLimits

0x3027,	// (0x000405ce) image_qvga_pane_ParamLimits

0x3027,	// (0x000405ce) image_qvga_pane

0xa62d,	// (0x00047bd4) bg_popup_sub_pane_cp04_ParamLimits

0xb599,	// (0x00048b40) popup_mup_playback_window_g1_ParamLimits

0xb5a5,	// (0x00048b4c) popup_mup_playback_window_t1_ParamLimits

0xb5ba,	// (0x00048b61) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0004ca89) popup_mup_playback_window_t_ParamLimits

0x5a6e,	// (0x00043015) main_mup2_pane_g3_ParamLimits

0x5a6e,	// (0x00043015) main_mup2_pane_g3

0x32df,	// (0x00040886) popup_toolbar_window_cp04

0xb9af,	// (0x00048f56) popup_call2_audio_second_window_g3_ParamLimits

0xb9af,	// (0x00048f56) popup_call2_audio_second_window_g3

0xbdb9,	// (0x00049360) popup_call2_audio_first_window_g4_ParamLimits

0xbdb9,	// (0x00049360) popup_call2_audio_first_window_g4

0xc438,	// (0x000499df) popup_call2_audio_in_window_g4_ParamLimits

0xc438,	// (0x000499df) popup_call2_audio_in_window_g4

0x4e80,	// (0x00042427) aid_area_sk_bg_cut_ParamLimits

0x4e80,	// (0x00042427) aid_area_sk_bg_cut

0xb5cf,	// (0x00048b76) aid_area_sk_bg_cut_2_ParamLimits

0xb5cf,	// (0x00048b76) aid_area_sk_bg_cut_2

0x5dfe,	// (0x000433a5) aid_placing_details_win

0x5e06,	// (0x000433ad) aid_placing_details_win_2

0xcd21,	// (0x0004a2c8) camera2_autofocus_pane_g1_ParamLimits

0x2340,	// (0x0003f8e7) popup_fixed_preview_cale_window_ParamLimits

0x2340,	// (0x0003f8e7) popup_fixed_preview_cale_window

0xb39f,	// (0x00048946) navi_slider_pane_g3

0xb3a8,	// (0x0004894f) navi_slider_pane_g4

0xb3b1,	// (0x00048958) navi_slider_pane_g5

0xb39f,	// (0x00048946) navi_slider_pane_g6

0x47c1,	// (0x00041d68) navi_slider_pane_g7

0xb4c4,	// (0x00048a6b) mup_scale_pane_g3

0xb4cd,	// (0x00048a74) mup_scale_pane_g4

0xb4d6,	// (0x00048a7d) mup_scale_pane_g5

0x4c00,	// (0x000421a7) mup_scale_pane_g6

0x4c09,	// (0x000421b0) mup_scale_pane_g7

0xb39f,	// (0x00048946) cams2_slider_pane_g3

0xc982,	// (0x00049f29) cams2_slider_pane_g4

0x5d56,	// (0x000432fd) cams2_slider_pane_g5

0xb39f,	// (0x00048946) cams2_slider_pane_g6

0x5d5e,	// (0x00043305) cams2_slider_pane_g7

0xcbaf,	// (0x0004a156) camera2_autofocus_pane_cp_g1

0xc799,	// (0x00049d40) bg_popup_preview_window_pane_cp02_ParamLimits

0xc799,	// (0x00049d40) bg_popup_preview_window_pane_cp02

0xcecd,	// (0x0004a474) list_fp_cale_pane_ParamLimits

0xcecd,	// (0x0004a474) list_fp_cale_pane

0xced9,	// (0x0004a480) popup_fixed_preview_cale_window_t1_ParamLimits

0xced9,	// (0x0004a480) popup_fixed_preview_cale_window_t1

0x65b6,	// (0x00043b5d) popup_fixed_preview_cale_window_t2_ParamLimits

0x65b6,	// (0x00043b5d) popup_fixed_preview_cale_window_t2

0x65cb,	// (0x00043b72) popup_fixed_preview_cale_window_t3_ParamLimits

0x65cb,	// (0x00043b72) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0004cd51) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0004cd51) popup_fixed_preview_cale_window_t

0x65e0,	// (0x00043b87) list_single_fp_cale_pane_ParamLimits

0x65e0,	// (0x00043b87) list_single_fp_cale_pane

0xcef7,	// (0x0004a49e) list_single_fp_cale_pane_g1_ParamLimits

0xcef7,	// (0x0004a49e) list_single_fp_cale_pane_g1

0xcf03,	// (0x0004a4aa) list_single_fp_cale_pane_g2_ParamLimits

0xcf03,	// (0x0004a4aa) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0004cd58) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0004cd58) list_single_fp_cale_pane_g

0xcf1c,	// (0x0004a4c3) list_single_fp_cale_pane_t1_ParamLimits

0xcf1c,	// (0x0004a4c3) list_single_fp_cale_pane_t1

0xcf2e,	// (0x0004a4d5) list_single_fp_cale_pane_t2_ParamLimits

0xcf2e,	// (0x0004a4d5) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0004cd5f) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0004cd5f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9fb5,	// (0x0004755c) main_dialer_pane

0x65f4,	// (0x00043b9b) aid_cell_size_keypad

0x65fe,	// (0x00043ba5) dialer_ne_pane

0x6608,	// (0x00043baf) grid_dialer_command_1_pane

0x6610,	// (0x00043bb7) grid_dialer_command_2_pane

0x6618,	// (0x00043bbf) grid_dialer_keypad_pane

0x662c,	// (0x00043bd3) bg_popup_call_pane_cp06_ParamLimits

0x662c,	// (0x00043bd3) bg_popup_call_pane_cp06

0x6638,	// (0x00043bdf) dialer_ne_clear_pane_ParamLimits

0x6638,	// (0x00043bdf) dialer_ne_clear_pane

0xcf61,	// (0x0004a508) dialer_ne_pane_g1

0xcf69,	// (0x0004a510) dialer_ne_pane_t1_ParamLimits

0xcf69,	// (0x0004a510) dialer_ne_pane_t1

0x6644,	// (0x00043beb) dialer_ne_pane_t2_ParamLimits

0x6644,	// (0x00043beb) dialer_ne_pane_t2

0x6661,	// (0x00043c08) dialer_ne_pane_t3_ParamLimits

0x6661,	// (0x00043c08) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0004cd64) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0004cd64) dialer_ne_pane_t

0x6685,	// (0x00043c2c) dialer_ne_pane_t3_copy1_ParamLimits

0x6685,	// (0x00043c2c) dialer_ne_pane_t3_copy1

0x66a9,	// (0x00043c50) cell_dialer_keypad_pane_ParamLimits

0x66a9,	// (0x00043c50) cell_dialer_keypad_pane

0x66c0,	// (0x00043c67) cell_dialer_command_1_pane_ParamLimits

0x66c0,	// (0x00043c67) cell_dialer_command_1_pane

0x66d6,	// (0x00043c7d) cell_dialer_command_2_pane_ParamLimits

0x66d6,	// (0x00043c7d) cell_dialer_command_2_pane

0xcf7b,	// (0x0004a522) bg_button_pane_cp02_ParamLimits

0xcf7b,	// (0x0004a522) bg_button_pane_cp02

0x66e5,	// (0x00043c8c) cell_dialer_keypad_pane_g1_ParamLimits

0x66e5,	// (0x00043c8c) cell_dialer_keypad_pane_g1

0xcf7b,	// (0x0004a522) bg_button_pane_cp03_ParamLimits

0xcf7b,	// (0x0004a522) bg_button_pane_cp03

0x66fa,	// (0x00043ca1) cell_dialer_command_1_pane_g1_ParamLimits

0x66fa,	// (0x00043ca1) cell_dialer_command_1_pane_g1

0xcf87,	// (0x0004a52e) bg_button_pane_cp04

0x670e,	// (0x00043cb5) cell_dialer_command_2_pane_g1

0xa90a,	// (0x00047eb1) bg_button_pane_cp06

0xcf8f,	// (0x0004a536) dialer_ne_clear_pane_g1

0xb272,	// (0x00048819) navi_pane_g2

0xb2a0,	// (0x00048847) navi_pane_g3

0x0002,

0xf3e5,	// (0x0004c98c) navi_pane_g

0xb32f,	// (0x000488d6) navi_pane_mv_g2

0xb356,	// (0x000488fd) navi_pane_mv_g5

0x478c,	// (0x00041d33) navi_pane_mv_t1

0xa73c,	// (0x00047ce3) main_clock2_pane

0x674e,	// (0x00043cf5) main_clock2_list_pane_ParamLimits

0x674e,	// (0x00043cf5) main_clock2_list_pane

0x6778,	// (0x00043d1f) main_clock2_pane_t1_ParamLimits

0x6778,	// (0x00043d1f) main_clock2_pane_t1

0x679c,	// (0x00043d43) main_clock2_pane_t2_ParamLimits

0x679c,	// (0x00043d43) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0004cd70) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0004cd70) main_clock2_pane_t

0x67f7,	// (0x00043d9e) popup_clock_analogue_window_cp03_ParamLimits

0x67f7,	// (0x00043d9e) popup_clock_analogue_window_cp03

0x6815,	// (0x00043dbc) popup_clock_digital_window_cp02_ParamLimits

0x6815,	// (0x00043dbc) popup_clock_digital_window_cp02

0x6884,	// (0x00043e2b) main_clock2_list_single_pane_ParamLimits

0x6884,	// (0x00043e2b) main_clock2_list_single_pane

0xa90a,	// (0x00047eb1) list_highlight_pane_cp05

0xcfc9,	// (0x0004a570) main_clock2_list_single_pane_t1

0x32df,	// (0x00040886) popup_toolbar_window_cp04_ParamLimits

0x5e28,	// (0x000433cf) camera2_autofocus_pane_g2_ParamLimits

0x5e28,	// (0x000433cf) camera2_autofocus_pane_g2

0x5e34,	// (0x000433db) camera2_autofocus_pane_g3_ParamLimits

0x5e34,	// (0x000433db) camera2_autofocus_pane_g3

0x5e40,	// (0x000433e7) camera2_autofocus_pane_g4_ParamLimits

0x5e40,	// (0x000433e7) camera2_autofocus_pane_g4

0x5e4c,	// (0x000433f3) camera2_autofocus_pane_g5_ParamLimits

0x5e4c,	// (0x000433f3) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0004ccb4) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0004ccb4) camera2_autofocus_pane_g

0x5fdf,	// (0x00043586) camera2_autofocus_pane_cp_g2

0x5fe7,	// (0x0004358e) camera2_autofocus_pane_cp_g3

0x5fef,	// (0x00043596) camera2_autofocus_pane_cp_g4

0x5ff7,	// (0x0004359e) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0004cd1a) camera2_autofocus_pane_cp_g

0x6624,	// (0x00043bcb) popup_dialer_spcha_window

0x9fb5,	// (0x0004755c) bg_popup_sub_pane_cp07

0xcfd7,	// (0x0004a57e) list_spcha_pane

0xcfdf,	// (0x0004a586) list_single_spcha_pane_ParamLimits

0xcfdf,	// (0x0004a586) list_single_spcha_pane

0x9fb5,	// (0x0004755c) list_highlight_pane_cp06

0xcff0,	// (0x0004a597) list_single_spcha_pane_t1

0xc1e2,	// (0x00049789) popup_call2_audio_out_window_g4_ParamLimits

0xc1e2,	// (0x00049789) popup_call2_audio_out_window_g4

0x9fb5,	// (0x0004755c) main_imed2_pane

0x54bd,	// (0x00042a64) popup_imed_adjust2_window

0x54d0,	// (0x00042a77) popup_imed_trans_window_ParamLimits

0x54d0,	// (0x00042a77) popup_imed_trans_window

0xc9eb,	// (0x00049f92) popup_blid_sat_info2_window_t1

0xc9f9,	// (0x00049fa0) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0004cc49) popup_blid_sat_info2_window_t

0x692e,	// (0x00043ed5) aid_size_cell_colour_35

0x6948,	// (0x00043eef) aid_size_cell_colour_112

0x695f,	// (0x00043f06) aid_size_cell_effect

0xae38,	// (0x000483df) bg_tb_trans_pane_cp02

0xb539,	// (0x00048ae0) heading_imed_pane

0x6979,	// (0x00043f20) listscroll_imed_pane

0xcffe,	// (0x0004a5a5) heading_imed_pane_g1

0xd006,	// (0x0004a5ad) heading_imed_pane_t1

0xd014,	// (0x0004a5bb) grid_imed_colour_35_pane_ParamLimits

0xd014,	// (0x0004a5bb) grid_imed_colour_35_pane

0x6985,	// (0x00043f2c) grid_imed_effect_pane

0xd02c,	// (0x0004a5d3) list_imed_aspect_pane

0x6995,	// (0x00043f3c) scroll_pane_cp027_ParamLimits

0x6995,	// (0x00043f3c) scroll_pane_cp027

0x69a1,	// (0x00043f48) cell_imed_effect_pane_ParamLimits

0x69a1,	// (0x00043f48) cell_imed_effect_pane

0xd034,	// (0x0004a5db) cell_imed_colour_pane_ParamLimits

0xd034,	// (0x0004a5db) cell_imed_colour_pane

0xd076,	// (0x0004a61d) cell_imed_colour_pane_g1_ParamLimits

0xd076,	// (0x0004a61d) cell_imed_colour_pane_g1

0xd087,	// (0x0004a62e) hgihlgiht_grid_pane_cp016_ParamLimits

0xd087,	// (0x0004a62e) hgihlgiht_grid_pane_cp016

0x69b9,	// (0x00043f60) cell_imed_effect_pane_g1

0x69c1,	// (0x00043f68) grid_highlight_pane_cp017

0xd098,	// (0x0004a63f) list_imed_single_pane_ParamLimits

0xd098,	// (0x0004a63f) list_imed_single_pane

0x9fb5,	// (0x0004755c) list_highlight_pane_cp07

0xd0ae,	// (0x0004a655) list_imed_aspect_pane_comp1_t1

0xc7a5,	// (0x00049d4c) bg_tb_trans_pane_cp05

0xd0d0,	// (0x0004a677) popup_imed_adjust2_window_g1

0xd0f7,	// (0x0004a69e) popup_imed_adjust2_window_t1

0xd10f,	// (0x0004a6b6) slider_imed_adjust_pane

0xd123,	// (0x0004a6ca) slider_imed_adjust_pane_g1

0xd133,	// (0x0004a6da) slider_imed_adjust_pane_g2

0xd151,	// (0x0004a6f8) slider_imed_adjust_pane_g3

0xd162,	// (0x0004a709) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0004cd8d) slider_imed_adjust_pane_g

0x69ca,	// (0x00043f71) aid_size_cell_clipart2

0x69d6,	// (0x00043f7d) grid_imed_clipart_pane

0xd173,	// (0x0004a71a) scroll_pane_cp031

0x69e0,	// (0x00043f87) cell_imed_clipart_pane_ParamLimits

0x69e0,	// (0x00043f87) cell_imed_clipart_pane

0x6a07,	// (0x00043fae) cell_imed_clipart_pane_g1

0x9fb5,	// (0x0004755c) grid_highlight_pane_cp014

0x675a,	// (0x00043d01) main_clock2_pane_g1_ParamLimits

0x675a,	// (0x00043d01) main_clock2_pane_g1

0x682f,	// (0x00043dd6) aid_call2_pane_cp10

0x6841,	// (0x00043de8) aid_call_pane_cp10

0xb1d1,	// (0x00048778) popup_clock_analogue_window_cp10_g1

0xb1d1,	// (0x00048778) popup_clock_analogue_window_cp10_g2

0x6853,	// (0x00043dfa) popup_clock_analogue_window_cp10_g3

0x6853,	// (0x00043dfa) popup_clock_analogue_window_cp10_g4

0xb1d1,	// (0x00048778) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0004cd7b) popup_clock_analogue_window_cp10_g

0x6865,	// (0x00043e0c) popup_clock_analogue_window_cp10_t1

0x6896,	// (0x00043e3d) clock_digital_number_pane_cp10_ParamLimits

0x6896,	// (0x00043e3d) clock_digital_number_pane_cp10

0x68ae,	// (0x00043e55) clock_digital_number_pane_cp11_ParamLimits

0x68ae,	// (0x00043e55) clock_digital_number_pane_cp11

0x68c6,	// (0x00043e6d) clock_digital_number_pane_cp12_ParamLimits

0x68c6,	// (0x00043e6d) clock_digital_number_pane_cp12

0x68de,	// (0x00043e85) clock_digital_number_pane_cp13_ParamLimits

0x68de,	// (0x00043e85) clock_digital_number_pane_cp13

0x68f6,	// (0x00043e9d) clock_digital_separator_pane_cp10_ParamLimits

0x68f6,	// (0x00043e9d) clock_digital_separator_pane_cp10

0x690e,	// (0x00043eb5) popup_clock_digital_window_cp02_t1_ParamLimits

0x690e,	// (0x00043eb5) popup_clock_digital_window_cp02_t1

0xa625,	// (0x00047bcc) clock_digital_number_pane_cp10_g1

0xa625,	// (0x00047bcc) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0004cd96) clock_digital_number_pane_cp10_g

0xa625,	// (0x00047bcc) clock_digital_separator_pane_cp10_g1

0xa625,	// (0x00047bcc) clock_digital_separator_pane_g2_cp10

0xb35e,	// (0x00048905) navi_pane_vded_g4

0xb367,	// (0x0004890e) navi_pane_vded_g5

0xb370,	// (0x00048917) navi_pane_vded_t1

0x9fb5,	// (0x0004755c) main_vded_pane

0x6a10,	// (0x00043fb7) main_vded_pane_g1

0x6a1c,	// (0x00043fc3) main_vded_pane_g2

0x6a26,	// (0x00043fcd) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0004cd9b) main_vded_pane_g

0x6a30,	// (0x00043fd7) main_vded_pane_t1

0x6a3e,	// (0x00043fe5) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0004cda2) main_vded_pane_t

0x6a4c,	// (0x00043ff3) vded_slider_pane

0x6a56,	// (0x00043ffd) vded_video_pane

0xd17b,	// (0x0004a722) vded_video_pane_g1

0x6a60,	// (0x00044007) vded_video_pane_g2

0xcbaf,	// (0x0004a156) vded_video_pane_g3

0x0002,

0xf800,	// (0x0004cda7) vded_video_pane_g

0xd185,	// (0x0004a72c) vded_slider_pane_g1

0xd18e,	// (0x0004a735) vded_slider_pane_g2

0xd197,	// (0x0004a73e) vded_slider_pane_g3

0xd1a0,	// (0x0004a747) vded_slider_pane_g4

0xd1a9,	// (0x0004a750) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0004cdae) vded_slider_pane_g

0x6525,	// (0x00043acc) mup3_rocker_pane_ParamLimits

0x6525,	// (0x00043acc) mup3_rocker_pane

0x6a69,	// (0x00044010) mup3_control_keys_pane_g1

0x6a71,	// (0x00044018) mup3_control_keys_pane_g2

0x6a79,	// (0x00044020) mup3_control_keys_pane_g3

0x6a81,	// (0x00044028) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0004cdb9) mup3_control_keys_pane_g

0x2368,	// (0x0003f90f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2368,	// (0x0003f90f) popup_toolbar2_fixed_window_cp01

0x653f,	// (0x00043ae6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x653f,	// (0x00043ae6) popup_toolbar2_fixed_window_cp02

0xbb21,	// (0x000490c8) popup_call2_audio_second_window_t4_ParamLimits

0xbb21,	// (0x000490c8) popup_call2_audio_second_window_t4

0xc04f,	// (0x000495f6) popup_call2_audio_first_window_t6_ParamLimits

0xc04f,	// (0x000495f6) popup_call2_audio_first_window_t6

0xc2e5,	// (0x0004988c) popup_call2_audio_out_window_t6_ParamLimits

0xc2e5,	// (0x0004988c) popup_call2_audio_out_window_t6

0x9fb5,	// (0x0004755c) main_vitu_pane

0x6a91,	// (0x00044038) aid_size_cell_itu_ParamLimits

0x6a91,	// (0x00044038) aid_size_cell_itu

0xd143,	// (0x0004a6ea) bg_popup_window_pane_cp08_ParamLimits

0xd143,	// (0x0004a6ea) bg_popup_window_pane_cp08

0x6a9f,	// (0x00044046) field_vitu_entry_pane_ParamLimits

0x6a9f,	// (0x00044046) field_vitu_entry_pane

0x6aae,	// (0x00044055) grid_vitu_function_pane_ParamLimits

0x6aae,	// (0x00044055) grid_vitu_function_pane

0x6abe,	// (0x00044065) grid_vitu_itu_pane_ParamLimits

0x6abe,	// (0x00044065) grid_vitu_itu_pane

0x6ace,	// (0x00044075) cell_vitu_itu_pane_ParamLimits

0x6ace,	// (0x00044075) cell_vitu_itu_pane

0x6ae3,	// (0x0004408a) cell_vitu_function_pane_ParamLimits

0x6ae3,	// (0x0004408a) cell_vitu_function_pane

0xae38,	// (0x000483df) bg_popup_sub_pane_cp08_ParamLimits

0xae38,	// (0x000483df) bg_popup_sub_pane_cp08

0x6af7,	// (0x0004409e) field_vitu_entry_pane_t1_ParamLimits

0x6af7,	// (0x0004409e) field_vitu_entry_pane_t1

0xd1ca,	// (0x0004a771) field_vitu_entry_pane_t2_ParamLimits

0xd1ca,	// (0x0004a771) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0004cdc7) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0004cdc7) field_vitu_entry_pane_t

0xd1e7,	// (0x0004a78e) bg_button_pane_cp05_ParamLimits

0xd1e7,	// (0x0004a78e) bg_button_pane_cp05

0x6b14,	// (0x000440bb) cell_vitu_itu_pane_g1

0x6b2c,	// (0x000440d3) cell_vitu_itu_pane_t1_ParamLimits

0x6b2c,	// (0x000440d3) cell_vitu_itu_pane_t1

0x6b3e,	// (0x000440e5) cell_vitu_itu_pane_t2_ParamLimits

0x6b3e,	// (0x000440e5) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0004cdcc) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0004cdcc) cell_vitu_itu_pane_t

0xd1f5,	// (0x0004a79c) bg_button_pane_cp07

0x6b81,	// (0x00044128) cell_vitu_function_pane_g1

0x261b,	// (0x0003fbc2) main_calc_pane_g1

0x2125,	// (0x0003f6cc) aid_visual_content_pane

0x9fb5,	// (0x0004755c) main_vradio_pane

0x6b8a,	// (0x00044131) main_vradio_pane_g1_ParamLimits

0x6b8a,	// (0x00044131) main_vradio_pane_g1

0xd1ff,	// (0x0004a7a6) main_vradio_pane_g2_ParamLimits

0xd1ff,	// (0x0004a7a6) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0004cdd3) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0004cdd3) main_vradio_pane_g

0x6b9a,	// (0x00044141) main_vradio_pane_t1_ParamLimits

0x6b9a,	// (0x00044141) main_vradio_pane_t1

0x6bac,	// (0x00044153) main_vradio_pane_t2_ParamLimits

0x6bac,	// (0x00044153) main_vradio_pane_t2

0xd20c,	// (0x0004a7b3) main_vradio_pane_t3_ParamLimits

0xd20c,	// (0x0004a7b3) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0004cdd8) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0004cdd8) main_vradio_pane_t

0x6bbe,	// (0x00044165) vradio_rocker_control_pane_ParamLimits

0x6bbe,	// (0x00044165) vradio_rocker_control_pane

0x6bca,	// (0x00044171) vradio_station_info_pane_ParamLimits

0x6bca,	// (0x00044171) vradio_station_info_pane

0xd220,	// (0x0004a7c7) vradio_frequency_info_pane_ParamLimits

0xd220,	// (0x0004a7c7) vradio_frequency_info_pane

0xcbaf,	// (0x0004a156) vradio_station_info_pane_g1

0xd22f,	// (0x0004a7d6) vradio_station_info_pane_t1_ParamLimits

0xd22f,	// (0x0004a7d6) vradio_station_info_pane_t1

0xd251,	// (0x0004a7f8) vradio_station_info_pane_t2_ParamLimits

0xd251,	// (0x0004a7f8) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0004cddf) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0004cddf) vradio_station_info_pane_t

0xd263,	// (0x0004a80a) vradio_tuning_pane

0xd26b,	// (0x0004a812) vradio_rocker_control_pane_g1

0xd273,	// (0x0004a81a) vradio_rocker_control_pane_g2

0xd27b,	// (0x0004a822) vradio_rocker_control_pane_g3

0xd283,	// (0x0004a82a) vradio_rocker_control_pane_g4

0xd28b,	// (0x0004a832) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0004cde4) vradio_rocker_control_pane_g

0x6bd9,	// (0x00044180) vradio_frequency_info_pane_g1

0xd293,	// (0x0004a83a) vradio_frequency_info_pane_t1_ParamLimits

0xd293,	// (0x0004a83a) vradio_frequency_info_pane_t1

0x6be3,	// (0x0004418a) vradio_tuning_pane_g1

0x6bec,	// (0x00044193) vradio_tuning_pane_t1

0x216e,	// (0x0003f715) area_side_right_pane_ParamLimits

0x216e,	// (0x0003f715) area_side_right_pane

0xc760,	// (0x00049d07) status_small_pane_g1

0xc768,	// (0x00049d0f) status_small_pane_g2

0xc771,	// (0x00049d18) status_small_pane_g3

0xc77a,	// (0x00049d21) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0004cb9f) status_small_pane_g

0xc783,	// (0x00049d2a) status_small_pane_t1

0x9fb5,	// (0x0004755c) main_video3_pane

0xd2a7,	// (0x0004a84e) cams_zoom_vslider_pane

0xd2af,	// (0x0004a856) image3_wide_pane_ParamLimits

0xd2af,	// (0x0004a856) image3_wide_pane

0xd2c9,	// (0x0004a870) image3_wide_small_pane

0xd2d5,	// (0x0004a87c) main_video3_pane_g1_ParamLimits

0xd2d5,	// (0x0004a87c) main_video3_pane_g1

0xd2f1,	// (0x0004a898) main_video3_pane_g2_ParamLimits

0xd2f1,	// (0x0004a898) main_video3_pane_g2

0x0001,

0xf848,	// (0x0004cdef) main_video3_pane_g_ParamLimits

0xf848,	// (0x0004cdef) main_video3_pane_g

0xd30d,	// (0x0004a8b4) main_video3_pane_t1_ParamLimits

0xd30d,	// (0x0004a8b4) main_video3_pane_t1

0xd338,	// (0x0004a8df) main_video3_pane_t2_ParamLimits

0xd338,	// (0x0004a8df) main_video3_pane_t2

0xd363,	// (0x0004a90a) main_video3_pane_t3_ParamLimits

0xd363,	// (0x0004a90a) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0004cdf4) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0004cdf4) main_video3_pane_t

0xd390,	// (0x0004a937) cams_zoom_vslider_pane_g1

0xd399,	// (0x0004a940) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0004cdfb) cams_zoom_vslider_pane_g

0xd3a1,	// (0x0004a948) small_slider_vertical_pane

0xcbaf,	// (0x0004a156) small_slider_vertical_pane_g1

0xcbaf,	// (0x0004a156) small_slider_vertical_pane_g2

0xd3a9,	// (0x0004a950) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0004ce00) small_slider_vertical_pane_g

0x9fb5,	// (0x0004755c) main_hwr_training_pane

0xd3b2,	// (0x0004a959) hwr_training_instruct_pane_ParamLimits

0xd3b2,	// (0x0004a959) hwr_training_instruct_pane

0x6bfb,	// (0x000441a2) hwr_training_navi_pane_ParamLimits

0x6bfb,	// (0x000441a2) hwr_training_navi_pane

0x6c15,	// (0x000441bc) hwr_training_write_pane_ParamLimits

0x6c15,	// (0x000441bc) hwr_training_write_pane

0x9fb5,	// (0x0004755c) bg_frame_shadow_pane

0xd3e9,	// (0x0004a990) hwr_training_write_pane_g1

0xd3f1,	// (0x0004a998) hwr_training_write_pane_g2

0xd3f9,	// (0x0004a9a0) hwr_training_write_pane_g3

0xd401,	// (0x0004a9a8) hwr_training_write_pane_g4

0xd409,	// (0x0004a9b0) hwr_training_write_pane_g5

0xd411,	// (0x0004a9b8) hwr_training_write_pane_g6

0xd419,	// (0x0004a9c0) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0004ce07) hwr_training_write_pane_g

0x6c4d,	// (0x000441f4) hwr_training_navi_pane_g1_ParamLimits

0x6c4d,	// (0x000441f4) hwr_training_navi_pane_g1

0x6c5f,	// (0x00044206) hwr_training_navi_pane_g2_ParamLimits

0x6c5f,	// (0x00044206) hwr_training_navi_pane_g2

0x6c71,	// (0x00044218) hwr_training_navi_pane_g3_ParamLimits

0x6c71,	// (0x00044218) hwr_training_navi_pane_g3

0x6c81,	// (0x00044228) hwr_training_navi_pane_g4_ParamLimits

0x6c81,	// (0x00044228) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0004ce16) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0004ce16) hwr_training_navi_pane_g

0x6c9b,	// (0x00044242) hwr_training_navi_pane_t1

0x6ca9,	// (0x00044250) list_single_hwr_training_instruct_pane_ParamLimits

0x6ca9,	// (0x00044250) list_single_hwr_training_instruct_pane

0xd421,	// (0x0004a9c8) list_single_hwr_training_instruct_pane_t1

0xcaef,	// (0x0004a096) bg_frame_shadow_pane_g1

0xd430,	// (0x0004a9d7) bg_frame_shadow_pane_g2

0xd438,	// (0x0004a9df) bg_frame_shadow_pane_g3

0xd440,	// (0x0004a9e7) bg_frame_shadow_pane_g4

0xd448,	// (0x0004a9ef) bg_frame_shadow_pane_g5

0xd450,	// (0x0004a9f7) bg_frame_shadow_pane_g6

0xd458,	// (0x0004a9ff) bg_frame_shadow_pane_g7

0xa807,	// (0x00047dae) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0004ce21) bg_frame_shadow_pane_g

0x9fb5,	// (0x0004755c) main_video_tele_dialer_pane

0x6cd8,	// (0x0004427f) aid_size_cell_video_keypad_ParamLimits

0x6cd8,	// (0x0004427f) aid_size_cell_video_keypad

0x6ce8,	// (0x0004428f) grid_video_dialer_keypad_pane_ParamLimits

0x6ce8,	// (0x0004428f) grid_video_dialer_keypad_pane

0x6d1c,	// (0x000442c3) video_down_pane_cp_ParamLimits

0x6d1c,	// (0x000442c3) video_down_pane_cp

0x6d46,	// (0x000442ed) cell_video_dialer_keypad_pane_ParamLimits

0x6d46,	// (0x000442ed) cell_video_dialer_keypad_pane

0xd460,	// (0x0004aa07) bg_button_pane_cp08_ParamLimits

0xd460,	// (0x0004aa07) bg_button_pane_cp08

0x6d5b,	// (0x00044302) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6d5b,	// (0x00044302) cell_video_dialer_keypad_pane_g1

0x6519,	// (0x00043ac0) mup3_rocker2_pane_ParamLimits

0x6519,	// (0x00043ac0) mup3_rocker2_pane

0xcbaf,	// (0x0004a156) mup3_rocker2_pane_g1

0x5431,	// (0x000429d8) main_dialer2_pane

0x9fb5,	// (0x0004755c) main_mp4_pane

0x6d9e,	// (0x00044345) main_mp4_pane_g1_ParamLimits

0x6d9e,	// (0x00044345) main_mp4_pane_g1

0x6dac,	// (0x00044353) main_mp4_pane_g2_ParamLimits

0x6dac,	// (0x00044353) main_mp4_pane_g2

0x6dba,	// (0x00044361) main_mp4_pane_g3_ParamLimits

0x6dba,	// (0x00044361) main_mp4_pane_g3

0x6dff,	// (0x000443a6) main_mp4_pane_g4_ParamLimits

0x6dff,	// (0x000443a6) main_mp4_pane_g4

0x6e27,	// (0x000443ce) main_mp4_pane_g5_ParamLimits

0x6e27,	// (0x000443ce) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0004ce41) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0004ce41) main_mp4_pane_g

0x6e77,	// (0x0004441e) main_mp4_pane_t1_ParamLimits

0x6e77,	// (0x0004441e) main_mp4_pane_t1

0x6ed3,	// (0x0004447a) main_mp4_pane_t2_ParamLimits

0x6ed3,	// (0x0004447a) main_mp4_pane_t2

0xd46c,	// (0x0004aa13) main_mp4_pane_t3_ParamLimits

0xd46c,	// (0x0004aa13) main_mp4_pane_t3

0x6f25,	// (0x000444cc) main_mp4_pane_t4_ParamLimits

0x6f25,	// (0x000444cc) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004ce4e) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004ce4e) main_mp4_pane_t

0x6f69,	// (0x00044510) mp4_progress_pane_ParamLimits

0x6f69,	// (0x00044510) mp4_progress_pane

0x6fb3,	// (0x0004455a) mp4_rocker_pane_ParamLimits

0x6fb3,	// (0x0004455a) mp4_rocker_pane

0xd494,	// (0x0004aa3b) mp4_progress_pane_t1

0xd4ad,	// (0x0004aa54) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004ce57) mp4_progress_pane_t

0xd4c6,	// (0x0004aa6d) mup_progress_pane_cp04

0xcbaf,	// (0x0004a156) mp4_rocker_pane_g1

0x6fd3,	// (0x0004457a) aid_cell_size_keypad2_ParamLimits

0x6fd3,	// (0x0004457a) aid_cell_size_keypad2

0x6fe3,	// (0x0004458a) dialer2_ne_pane_ParamLimits

0x6fe3,	// (0x0004458a) dialer2_ne_pane

0x6ff1,	// (0x00044598) grid_dialer2_keypad_pane_ParamLimits

0x6ff1,	// (0x00044598) grid_dialer2_keypad_pane

0xd7bf,	// (0x0004ad66) bg_popup_call_pane_cp07_ParamLimits

0xd7bf,	// (0x0004ad66) bg_popup_call_pane_cp07

0x7001,	// (0x000445a8) dialer2_ne_pane_t1_ParamLimits

0x7001,	// (0x000445a8) dialer2_ne_pane_t1

0x7026,	// (0x000445cd) cell_dialer2_keypad_pane_ParamLimits

0x7026,	// (0x000445cd) cell_dialer2_keypad_pane

0xd4e4,	// (0x0004aa8b) bg_button_pane_pane_cp04_ParamLimits

0xd4e4,	// (0x0004aa8b) bg_button_pane_pane_cp04

0x703b,	// (0x000445e2) cell_dialer2_keypad_pane_g1_ParamLimits

0x703b,	// (0x000445e2) cell_dialer2_keypad_pane_g1

0x31a1,	// (0x00040748) aid_placing_vt_set_content_ParamLimits

0x31a1,	// (0x00040748) aid_placing_vt_set_content

0x31cd,	// (0x00040774) aid_placing_vt_set_title_ParamLimits

0x31cd,	// (0x00040774) aid_placing_vt_set_title

0x9fb5,	// (0x0004755c) main_image3_pane

0x70d5,	// (0x0004467c) area_side_right_pane_cp01_ParamLimits

0x70d5,	// (0x0004467c) area_side_right_pane_cp01

0xa6d3,	// (0x00047c7a) main_image3_pane_g1_ParamLimits

0xa6d3,	// (0x00047c7a) main_image3_pane_g1

0x7102,	// (0x000446a9) main_image3_pane_g2_ParamLimits

0x7102,	// (0x000446a9) main_image3_pane_g2

0x711b,	// (0x000446c2) main_image3_pane_g3_ParamLimits

0x711b,	// (0x000446c2) main_image3_pane_g3

0x7134,	// (0x000446db) main_image3_pane_g4_ParamLimits

0x7134,	// (0x000446db) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004ce66) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004ce66) main_image3_pane_g

0x714d,	// (0x000446f4) main_image3_pane_t1_ParamLimits

0x714d,	// (0x000446f4) main_image3_pane_t1

0x7172,	// (0x00044719) main_image3_pane_t2_ParamLimits

0x7172,	// (0x00044719) main_image3_pane_t2

0x7191,	// (0x00044738) main_image3_pane_t3_ParamLimits

0x7191,	// (0x00044738) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004ce6f) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004ce6f) main_image3_pane_t

0xd143,	// (0x0004a6ea) grid_sctrl_middle_pane_cp01_ParamLimits

0xd143,	// (0x0004a6ea) grid_sctrl_middle_pane_cp01

0x71f2,	// (0x00044799) cell_sctrl_middle_pane_cp01_ParamLimits

0x71f2,	// (0x00044799) cell_sctrl_middle_pane_cp01

0x7203,	// (0x000447aa) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7203,	// (0x000447aa) cell_sctrl_middle_pane_cp01_g1

0x9fb5,	// (0x0004755c) main_call4_pane

0x7210,	// (0x000447b7) aid_size_button_call4_ParamLimits

0x7210,	// (0x000447b7) aid_size_button_call4

0x7240,	// (0x000447e7) call4_windows_pane_ParamLimits

0x7240,	// (0x000447e7) call4_windows_pane

0x725a,	// (0x00044801) grid_call4_button_pane_ParamLimits

0x725a,	// (0x00044801) grid_call4_button_pane

0xd4f0,	// (0x0004aa97) call4_windows_conf_pane

0xd505,	// (0x0004aaac) popup_call4_audio_first_window_ParamLimits

0xd505,	// (0x0004aaac) popup_call4_audio_first_window

0xd551,	// (0x0004aaf8) popup_call4_audio_second_window_ParamLimits

0xd551,	// (0x0004aaf8) popup_call4_audio_second_window

0xd565,	// (0x0004ab0c) popup_call4_audio_wait_window_ParamLimits

0xd565,	// (0x0004ab0c) popup_call4_audio_wait_window

0x727e,	// (0x00044825) cell_call4_button_pane_ParamLimits

0x727e,	// (0x00044825) cell_call4_button_pane

0x72a3,	// (0x0004484a) bg_button_pane_cp09_ParamLimits

0x72a3,	// (0x0004484a) bg_button_pane_cp09

0x72af,	// (0x00044856) cell_call4_button_pane_g1_ParamLimits

0x72af,	// (0x00044856) cell_call4_button_pane_g1

0x72bc,	// (0x00044863) cell_call4_button_pane_t1_ParamLimits

0x72bc,	// (0x00044863) cell_call4_button_pane_t1

0xd5ad,	// (0x0004ab54) popup_call4_audio_conf_window_ParamLimits

0xd5ad,	// (0x0004ab54) popup_call4_audio_conf_window

0x654c,	// (0x00043af3) mup3_progress_pane_t1_ParamLimits

0x656b,	// (0x00043b12) mup3_progress_pane_t2_ParamLimits

0xce8a,	// (0x0004a431) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0004cd43) mup3_progress_pane_t_ParamLimits

0xcea7,	// (0x0004a44e) mup_progress_pane_cp03_ParamLimits

0x6a89,	// (0x00044030) mup3_control_keys_pane_g4_copy1

0x6f97,	// (0x0004453e) mp4_rocker2_pane_ParamLimits

0x6f97,	// (0x0004453e) mp4_rocker2_pane

0xd5c1,	// (0x0004ab68) mp4_rocker2_pane_g1

0xd5c9,	// (0x0004ab70) mp4_rocker2_pane_g2

0x72ce,	// (0x00044875) mp4_rocker2_pane_g3

0x72d6,	// (0x0004487d) mp4_rocker2_pane_g4

0x72de,	// (0x00044885) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004ce78) mp4_rocker2_pane_g

0x9fb5,	// (0x0004755c) main_camera4_pane

0x9fb5,	// (0x0004755c) main_video4_pane

0x6cf8,	// (0x0004429f) main_video_tele_dialer_pane_t1_ParamLimits

0x6cf8,	// (0x0004429f) main_video_tele_dialer_pane_t1

0x6d0a,	// (0x000442b1) main_video_tele_dialer_pane_t2_ParamLimits

0x6d0a,	// (0x000442b1) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0004ce32) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0004ce32) main_video_tele_dialer_pane_t

0x72fe,	// (0x000448a5) cam4_autofocus_pane_ParamLimits

0x72fe,	// (0x000448a5) cam4_autofocus_pane

0x7318,	// (0x000448bf) cam4_image_uncrop_pane_ParamLimits

0x7318,	// (0x000448bf) cam4_image_uncrop_pane

0x732f,	// (0x000448d6) cam4_indicators_pane_ParamLimits

0x732f,	// (0x000448d6) cam4_indicators_pane

0x734b,	// (0x000448f2) main_camera4_pane_g1_ParamLimits

0x734b,	// (0x000448f2) main_camera4_pane_g1

0x7357,	// (0x000448fe) main_camera4_pane_g2_ParamLimits

0x7357,	// (0x000448fe) main_camera4_pane_g2

0x7357,	// (0x000448fe) main_camera4_pane_g3_ParamLimits

0x7357,	// (0x000448fe) main_camera4_pane_g3

0x7363,	// (0x0004490a) main_camera4_pane_g4_ParamLimits

0x7363,	// (0x0004490a) main_camera4_pane_g4

0x736f,	// (0x00044916) main_camera4_pane_g5_ParamLimits

0x736f,	// (0x00044916) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004ce83) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004ce83) main_camera4_pane_g

0x7389,	// (0x00044930) main_camera4_pane_t1_ParamLimits

0x7389,	// (0x00044930) main_camera4_pane_t1

0xce0f,	// (0x0004a3b6) bg_tb_trans_pane_cp06

0x73d9,	// (0x00044980) cam4_indicators_pane_g1

0x73ea,	// (0x00044991) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004ce9e) cam4_indicators_pane_g

0x7408,	// (0x000449af) cam4_indicators_pane_t1

0x7432,	// (0x000449d9) main_video4_pane_g1_ParamLimits

0x7432,	// (0x000449d9) main_video4_pane_g1

0x743e,	// (0x000449e5) main_video4_pane_g2_ParamLimits

0x743e,	// (0x000449e5) main_video4_pane_g2

0x744a,	// (0x000449f1) main_video4_pane_g3_ParamLimits

0x744a,	// (0x000449f1) main_video4_pane_g3

0x7456,	// (0x000449fd) main_video4_pane_g4_ParamLimits

0x7456,	// (0x000449fd) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004cea5) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004cea5) main_video4_pane_g

0x7476,	// (0x00044a1d) vid4_indicators_pane_ParamLimits

0x7476,	// (0x00044a1d) vid4_indicators_pane

0x7495,	// (0x00044a3c) video4_image_uncrop_cif_pane_ParamLimits

0x7495,	// (0x00044a3c) video4_image_uncrop_cif_pane

0x74a4,	// (0x00044a4b) video4_image_uncrop_nhd_pane_ParamLimits

0x74a4,	// (0x00044a4b) video4_image_uncrop_nhd_pane

0x7318,	// (0x000448bf) video4_image_uncrop_vga_pane_ParamLimits

0x7318,	// (0x000448bf) video4_image_uncrop_vga_pane

0xae38,	// (0x000483df) bg_tb_trans_pane_cp07

0x74b9,	// (0x00044a60) vid4_indicators_pane_g1

0x74cd,	// (0x00044a74) vid4_indicators_pane_g2

0x74e1,	// (0x00044a88) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004ceb0) vid4_indicators_pane_g

0x750e,	// (0x00044ab5) vid4_indicators_pane_t1

0x7525,	// (0x00044acc) cam4_autofocus_pane_g1

0x752d,	// (0x00044ad4) cam4_autofocus_pane_g2

0x7535,	// (0x00044adc) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004cebb) cam4_autofocus_pane_g

0x753d,	// (0x00044ae4) cam4_autofocus_pane_g3_copy1

0x6d2a,	// (0x000442d1) video_down_pane_cp_t1

0x6d38,	// (0x000442df) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0004ce37) video_down_pane_cp_t

0xd143,	// (0x0004a6ea) popup_vitu2_window_ParamLimits

0xd143,	// (0x0004a6ea) popup_vitu2_window

0x7545,	// (0x00044aec) aid_size_cell2_itu2_ParamLimits

0x7545,	// (0x00044aec) aid_size_cell2_itu2

0x7567,	// (0x00044b0e) aid_size_cell_itu2_ParamLimits

0x7567,	// (0x00044b0e) aid_size_cell_itu2

0xd7bf,	// (0x0004ad66) bg_popup_window_pane_cp09_ParamLimits

0xd7bf,	// (0x0004ad66) bg_popup_window_pane_cp09

0x75ab,	// (0x00044b52) field_vitu2_entry_pane_ParamLimits

0x75ab,	// (0x00044b52) field_vitu2_entry_pane

0x75c9,	// (0x00044b70) grid_vitu2_function_pane_ParamLimits

0x75c9,	// (0x00044b70) grid_vitu2_function_pane

0x7609,	// (0x00044bb0) grid_vitu2_itu_pane_ParamLimits

0x7609,	// (0x00044bb0) grid_vitu2_itu_pane

0x7681,	// (0x00044c28) cell_vitu2_itu_pane_ParamLimits

0x7681,	// (0x00044c28) cell_vitu2_itu_pane

0x769a,	// (0x00044c41) cell_vitu2_function_pane_ParamLimits

0x769a,	// (0x00044c41) cell_vitu2_function_pane

0xd5d1,	// (0x0004ab78) bg_popup_call_pane_cp08_ParamLimits

0xd5d1,	// (0x0004ab78) bg_popup_call_pane_cp08

0xd5e8,	// (0x0004ab8f) field_vitu2_entry_pane_g1

0xd5f4,	// (0x0004ab9b) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004cec2) field_vitu2_entry_pane_g

0x1054,	// (0x0003e5fb) field_vitu2_entry_pane_t1_ParamLimits

0x1054,	// (0x0003e5fb) field_vitu2_entry_pane_t1

0x1087,	// (0x0003e62e) field_vitu2_entry_pane_t2_ParamLimits

0x1087,	// (0x0003e62e) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004cec9) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004cec9) field_vitu2_entry_pane_t

0x76db,	// (0x00044c82) bg_button_pane_cp010_ParamLimits

0x76db,	// (0x00044c82) bg_button_pane_cp010

0x76e9,	// (0x00044c90) cell_vitu2_itu_pane_g1

0x7709,	// (0x00044cb0) cell_vitu2_itu_pane_t1_ParamLimits

0x7709,	// (0x00044cb0) cell_vitu2_itu_pane_t1

0x10a4,	// (0x0003e64b) cell_vitu2_itu_pane_t2_ParamLimits

0x10a4,	// (0x0003e64b) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004ced3) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004ced3) cell_vitu2_itu_pane_t

0xae38,	// (0x000483df) bg_button_pane_cp011

0x7755,	// (0x00044cfc) cell_vitu2_function_pane_g1

0x9fb5,	// (0x0004755c) main_myfav_hc_pane

0x71d3,	// (0x0004477a) popup_image3_note_pane_ParamLimits

0x71d3,	// (0x0004477a) popup_image3_note_pane

0x71e1,	// (0x00044788) popup_image3_tool_bar_pane_ParamLimits

0x71e1,	// (0x00044788) popup_image3_tool_bar_pane

0x111a,	// (0x0003e6c1) cell_vitu2_itu_pane_t3_ParamLimits

0x111a,	// (0x0003e6c1) cell_vitu2_itu_pane_t3

0x9fb5,	// (0x0004755c) bg_popup_trans_pane

0xd616,	// (0x0004abbd) grid_image3_tool_bar_pane

0xd620,	// (0x0004abc7) bg_popup_trans_pane_g1

0xab63,	// (0x0004810a) bg_popup_trans_pane_g2

0xd628,	// (0x0004abcf) bg_popup_trans_pane_g3

0xd630,	// (0x0004abd7) bg_popup_trans_pane_g4

0xd638,	// (0x0004abdf) bg_popup_trans_pane_g5

0xd640,	// (0x0004abe7) bg_popup_trans_pane_g6

0xd648,	// (0x0004abef) bg_popup_trans_pane_g7

0xd650,	// (0x0004abf7) bg_popup_trans_pane_g8

0xab43,	// (0x000480ea) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004ceda) bg_popup_trans_pane_g

0xd658,	// (0x0004abff) cell_image3_tool_bar_pane_ParamLimits

0xd658,	// (0x0004abff) cell_image3_tool_bar_pane

0xcbaf,	// (0x0004a156) cell_image3_tool_bar_pane_g1

0x9fb5,	// (0x0004755c) bg_popup_trans_pane_cp1

0xd66c,	// (0x0004ac13) popup_image3_note_pane_t1

0xd67a,	// (0x0004ac21) popup_image3_note_pane_t2

0xd688,	// (0x0004ac2f) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004ceed) popup_image3_note_pane_t

0xd696,	// (0x0004ac3d) popup_image3_note_pane_t3_copy1

0x7769,	// (0x00044d10) bg_myfav_hc_instruction_pane_ParamLimits

0x7769,	// (0x00044d10) bg_myfav_hc_instruction_pane

0x7781,	// (0x00044d28) cell_myfav_contact_pane_ParamLimits

0x7781,	// (0x00044d28) cell_myfav_contact_pane

0x779b,	// (0x00044d42) cell_myfav_contact_pane_cp1_ParamLimits

0x779b,	// (0x00044d42) cell_myfav_contact_pane_cp1

0x77b3,	// (0x00044d5a) cell_myfav_contact_pane_cp2_ParamLimits

0x77b3,	// (0x00044d5a) cell_myfav_contact_pane_cp2

0x77cb,	// (0x00044d72) cell_myfav_contact_pane_cp3_ParamLimits

0x77cb,	// (0x00044d72) cell_myfav_contact_pane_cp3

0x77e2,	// (0x00044d89) cell_myfav_contact_pane_cp4_ParamLimits

0x77e2,	// (0x00044d89) cell_myfav_contact_pane_cp4

0x77f8,	// (0x00044d9f) cell_myfav_contact_pane_cp5_ParamLimits

0x77f8,	// (0x00044d9f) cell_myfav_contact_pane_cp5

0x780c,	// (0x00044db3) cell_myfav_contact_pane_cp6_ParamLimits

0x780c,	// (0x00044db3) cell_myfav_contact_pane_cp6

0x7820,	// (0x00044dc7) cell_myfav_contact_pane_cp7_ParamLimits

0x7820,	// (0x00044dc7) cell_myfav_contact_pane_cp7

0xd6a4,	// (0x0004ac4b) listscroll_gen_pane_cp05

0x7838,	// (0x00044ddf) main_myfav_hc_pane_g1_ParamLimits

0x7838,	// (0x00044ddf) main_myfav_hc_pane_g1

0x7850,	// (0x00044df7) main_myfav_hc_pane_g2_ParamLimits

0x7850,	// (0x00044df7) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004cef4) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004cef4) main_myfav_hc_pane_g

0x7880,	// (0x00044e27) main_myfav_hc_pane_t1_ParamLimits

0x7880,	// (0x00044e27) main_myfav_hc_pane_t1

0xd6ad,	// (0x0004ac54) main_myfav_hc_pane_t2_ParamLimits

0xd6ad,	// (0x0004ac54) main_myfav_hc_pane_t2

0xd6bf,	// (0x0004ac66) main_myfav_hc_pane_t3_ParamLimits

0xd6bf,	// (0x0004ac66) main_myfav_hc_pane_t3

0x7897,	// (0x00044e3e) main_myfav_hc_pane_t4_ParamLimits

0x7897,	// (0x00044e3e) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004cefb) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004cefb) main_myfav_hc_pane_t

0xcbaf,	// (0x0004a156) bg_myfav_hc_instruction_pane_g1

0xd6d1,	// (0x0004ac78) cell_myfav_contact_pane_g1_ParamLimits

0xd6d1,	// (0x0004ac78) cell_myfav_contact_pane_g1

0xd6d1,	// (0x0004ac78) cell_myfav_contact_pane_g2_ParamLimits

0xd6d1,	// (0x0004ac78) cell_myfav_contact_pane_g2

0xd6dd,	// (0x0004ac84) cell_myfav_contact_pane_g3_ParamLimits

0xd6dd,	// (0x0004ac84) cell_myfav_contact_pane_g3

0xce74,	// (0x0004a41b) cell_myfav_contact_pane_g4_ParamLimits

0xce74,	// (0x0004a41b) cell_myfav_contact_pane_g4

0xd6ea,	// (0x0004ac91) cell_myfav_contact_pane_g5_ParamLimits

0xd6ea,	// (0x0004ac91) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004cf06) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004cf06) cell_myfav_contact_pane_g

0x7868,	// (0x00044e0f) main_myfav_hc_pane_g3_ParamLimits

0x7868,	// (0x00044e0f) main_myfav_hc_pane_g3

0x22a3,	// (0x0003f84a) popup_adpt_find_window

0x78c1,	// (0x00044e68) afind_page_pane_ParamLimits

0x78c1,	// (0x00044e68) afind_page_pane

0x78ce,	// (0x00044e75) aid_size_cell_afind_ParamLimits

0x78ce,	// (0x00044e75) aid_size_cell_afind

0x78e8,	// (0x00044e8f) bg_popup_sub_pane_cp09_ParamLimits

0x78e8,	// (0x00044e8f) bg_popup_sub_pane_cp09

0x78f5,	// (0x00044e9c) find_pane_cp01_ParamLimits

0x78f5,	// (0x00044e9c) find_pane_cp01

0xd6f6,	// (0x0004ac9d) grid_afind_control_pane_ParamLimits

0xd6f6,	// (0x0004ac9d) grid_afind_control_pane

0x7902,	// (0x00044ea9) grid_afind_pane_ParamLimits

0x7902,	// (0x00044ea9) grid_afind_pane

0x791c,	// (0x00044ec3) cell_afind_pane_ParamLimits

0x791c,	// (0x00044ec3) cell_afind_pane

0xcbaf,	// (0x0004a156) afind_page_pane_g1

0x7964,	// (0x00044f0b) afind_page_pane_g2

0x796d,	// (0x00044f14) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004cf11) afind_page_pane_g

0x7976,	// (0x00044f1d) afind_page_pane_t1

0xd70a,	// (0x0004acb1) cell_afind_grid_control_pane_ParamLimits

0xd70a,	// (0x0004acb1) cell_afind_grid_control_pane

0xd4e4,	// (0x0004aa8b) bg_button_pane_cp69_ParamLimits

0xd4e4,	// (0x0004aa8b) bg_button_pane_cp69

0x7996,	// (0x00044f3d) cell_afind_pane_g1_ParamLimits

0x7996,	// (0x00044f3d) cell_afind_pane_g1

0x79a3,	// (0x00044f4a) cell_afind_pane_t1_ParamLimits

0x79a3,	// (0x00044f4a) cell_afind_pane_t1

0xa95c,	// (0x00047f03) bg_button_pane_cp72

0xd719,	// (0x0004acc0) cell_afind_grid_control_pane_g1

0x4fab,	// (0x00042552) aid_image_placing_area_ParamLimits

0x4fab,	// (0x00042552) aid_image_placing_area

0xd1b2,	// (0x0004a759) field_vitu_entry_pane_g1_ParamLimits

0xd1b2,	// (0x0004a759) field_vitu_entry_pane_g1

0xd1be,	// (0x0004a765) field_vitu_entry_pane_g2_ParamLimits

0xd1be,	// (0x0004a765) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0004cdc2) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0004cdc2) field_vitu_entry_pane_g

0x6b14,	// (0x000440bb) cell_vitu_itu_pane_g1_ParamLimits

0x6b64,	// (0x0004410b) cell_vitu_itu_pane_t3_ParamLimits

0x6b64,	// (0x0004410b) cell_vitu_itu_pane_t3

0xd494,	// (0x0004aa3b) mp4_progress_pane_t1_ParamLimits

0xd4ad,	// (0x0004aa54) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004ce57) mp4_progress_pane_t_ParamLimits

0xd4c6,	// (0x0004aa6d) mup_progress_pane_cp04_ParamLimits

0x78ab,	// (0x00044e52) main_myfav_hc_pane_t5_ParamLimits

0x78ab,	// (0x00044e52) main_myfav_hc_pane_t5

0x2131,	// (0x0003f6d8) aid_zoom_text_primary

0x22a3,	// (0x0003f84a) popup_adpt_find_window_ParamLimits

0xae38,	// (0x000483df) main_cam_set_pane

0x733d,	// (0x000448e4) cam4_zoom_pane_ParamLimits

0x733d,	// (0x000448e4) cam4_zoom_pane

0x79b5,	// (0x00044f5c) main_cam_set_pane_g1_ParamLimits

0x79b5,	// (0x00044f5c) main_cam_set_pane_g1

0x79c3,	// (0x00044f6a) main_cam_set_pane_g2_ParamLimits

0x79c3,	// (0x00044f6a) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004cf18) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004cf18) main_cam_set_pane_g

0x79cf,	// (0x00044f76) main_cam_set_pane_t1_ParamLimits

0x79cf,	// (0x00044f76) main_cam_set_pane_t1

0x79eb,	// (0x00044f92) main_cset_listscroll_pane_ParamLimits

0x79eb,	// (0x00044f92) main_cset_listscroll_pane

0x7a16,	// (0x00044fbd) main_cset_slider_pane_ParamLimits

0x7a16,	// (0x00044fbd) main_cset_slider_pane

0xd72a,	// (0x0004acd1) main_cset_list_pane_ParamLimits

0xd72a,	// (0x0004acd1) main_cset_list_pane

0xd73a,	// (0x0004ace1) scroll_pane_cp028

0x7a35,	// (0x00044fdc) aid_area_touch_slider

0x7a51,	// (0x00044ff8) cset_slider_pane

0x7a7b,	// (0x00045022) main_cset_slider_pane_g1

0x7a90,	// (0x00045037) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004cf1d) main_cset_slider_pane_g

0xd773,	// (0x0004ad1a) main_cset_slider_pane_t1

0x7b56,	// (0x000450fd) main_cset_slider_pane_t2

0x7b70,	// (0x00045117) main_cset_slider_pane_t3

0x7b8a,	// (0x00045131) main_cset_slider_pane_t4

0x7ba8,	// (0x0004514f) main_cset_slider_pane_t5

0x7bc6,	// (0x0004516d) main_cset_slider_pane_t6

0x7bdd,	// (0x00045184) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004cf42) main_cset_slider_pane_t

0x7ceb,	// (0x00045292) cset_list_set_pane_ParamLimits

0x7ceb,	// (0x00045292) cset_list_set_pane

0x7d07,	// (0x000452ae) aid_position_infowindow_above

0x7d0f,	// (0x000452b6) aid_position_infowindow_below

0x116c,	// (0x0003e713) cset_list_set_pane_g1_ParamLimits

0x116c,	// (0x0003e713) cset_list_set_pane_g1

0x1178,	// (0x0003e71f) cset_list_set_pane_g3_ParamLimits

0x1178,	// (0x0003e71f) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004cf61) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004cf61) cset_list_set_pane_g

0x1187,	// (0x0003e72e) cset_list_set_pane_t1_ParamLimits

0x1187,	// (0x0003e72e) cset_list_set_pane_t1

0xae38,	// (0x000483df) list_highlight_pane_cp021_ParamLimits

0xae38,	// (0x000483df) list_highlight_pane_cp021

0xb4c4,	// (0x00048a6b) cset_slider_pane_g1

0xb4d6,	// (0x00048a7d) cset_slider_pane_g2

0xb4cd,	// (0x00048a74) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004cf66) cset_slider_pane_g

0x7d17,	// (0x000452be) aid_area_touch_cam4_zoom

0x7d1f,	// (0x000452c6) cam4_zoom_cont_pane

0x7d27,	// (0x000452ce) cam4_zoom_pane_g1

0x7d2f,	// (0x000452d6) cam4_zoom_pane_g2

0x7d37,	// (0x000452de) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004cf6d) cam4_zoom_pane_g

0xdd83,	// (0x0004b32a) cam4_zoom_cont_pane_g1

0xdd8c,	// (0x0004b333) cam4_zoom_cont_pane_g2

0xdd95,	// (0x0004b33c) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004cf74) cam4_zoom_cont_pane_g

0x722a,	// (0x000447d1) call4_image_pane_ParamLimits

0x722a,	// (0x000447d1) call4_image_pane

0xd4f0,	// (0x0004aa97) call4_windows_conf_pane_ParamLimits

0xd52f,	// (0x0004aad6) popup_call4_audio_in_window_ParamLimits

0xd52f,	// (0x0004aad6) popup_call4_audio_in_window

0x9fb5,	// (0x0004755c) bg_popup_call2_act_pane_cp02

0xd5a5,	// (0x0004ab4c) call4_list_conf_pane

0xcbaf,	// (0x0004a156) call4_image_pane_g1

0xcbaf,	// (0x0004a156) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0004cc83) call4_image_pane_g

0xd83f,	// (0x0004ade6) list_single_graphic_popup_conf4_pane_ParamLimits

0xd83f,	// (0x0004ade6) list_single_graphic_popup_conf4_pane

0x9fb5,	// (0x0004755c) list_highlight_pane_cp022

0xd852,	// (0x0004adf9) list_single_graphic_popup_conf4_pane_g1

0xb0b9,	// (0x00048660) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004cf7b) list_single_graphic_popup_conf4_pane_g

0xd85a,	// (0x0004ae01) list_single_graphic_popup_conf4_pane_t1

0x3331,	// (0x000408d8) popup_vtel_slider_window_ParamLimits

0x3331,	// (0x000408d8) popup_vtel_slider_window

0xd4d2,	// (0x0004aa79) dialer2_ne_pane_t2_ParamLimits

0xd4d2,	// (0x0004aa79) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004ce5c) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004ce5c) dialer2_ne_pane_t

0xae38,	// (0x000483df) bg_popup_sub_pane_cp010_ParamLimits

0xae38,	// (0x000483df) bg_popup_sub_pane_cp010

0x7d3f,	// (0x000452e6) popup_vtel_slider_window_g1_ParamLimits

0x7d3f,	// (0x000452e6) popup_vtel_slider_window_g1

0x7d4b,	// (0x000452f2) popup_vtel_slider_window_g2_ParamLimits

0x7d4b,	// (0x000452f2) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004cf80) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004cf80) popup_vtel_slider_window_g

0x7d93,	// (0x0004533a) vtel_slider_pane_ParamLimits

0x7d93,	// (0x0004533a) vtel_slider_pane

0x7da2,	// (0x00045349) vtel_slider_pane_g1_ParamLimits

0x7da2,	// (0x00045349) vtel_slider_pane_g1

0x7daf,	// (0x00045356) vtel_slider_pane_g2_ParamLimits

0x7daf,	// (0x00045356) vtel_slider_pane_g2

0x7dbc,	// (0x00045363) vtel_slider_pane_g3_ParamLimits

0x7dbc,	// (0x00045363) vtel_slider_pane_g3

0x7da2,	// (0x00045349) vtel_slider_pane_g4_ParamLimits

0x7da2,	// (0x00045349) vtel_slider_pane_g4

0x7dc9,	// (0x00045370) vtel_slider_pane_g5_ParamLimits

0x7dc9,	// (0x00045370) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004cf89) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004cf89) vtel_slider_pane_g

0xae38,	// (0x000483df) main_gallery2_pane

0x758d,	// (0x00044b34) aid_size_row_itut2_dropdow_list_ParamLimits

0x758d,	// (0x00044b34) aid_size_row_itut2_dropdow_list

0x75e9,	// (0x00044b90) grid_vitu2_function_top_pane_ParamLimits

0x75e9,	// (0x00044b90) grid_vitu2_function_top_pane

0x7641,	// (0x00044be8) popup_vitu2_dropdown_list_window_ParamLimits

0x7641,	// (0x00044be8) popup_vitu2_dropdown_list_window

0x765f,	// (0x00044c06) popup_vitu2_match_list_window

0x7dd6,	// (0x0004537d) cell_vitu2_function_top_pane_ParamLimits

0x7dd6,	// (0x0004537d) cell_vitu2_function_top_pane

0x7df8,	// (0x0004539f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7df8,	// (0x0004539f) cell_vitu2_function_top_pane_cp01

0x7e14,	// (0x000453bb) cell_vitu2_function_top_wide_pane_ParamLimits

0x7e14,	// (0x000453bb) cell_vitu2_function_top_wide_pane

0xae38,	// (0x000483df) bg_button_pane_cp012

0x7e30,	// (0x000453d7) cell_vitu2_function_top_pane_g1

0x7e44,	// (0x000453eb) bg_button_pane_cp013_ParamLimits

0x7e44,	// (0x000453eb) bg_button_pane_cp013

0x7e60,	// (0x00045407) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7e60,	// (0x00045407) cell_vitu2_function_top_wide_pane_g1

0xd143,	// (0x0004a6ea) bg_popup_sub_pane_cp20

0x7e78,	// (0x0004541f) list_vitu2_match_list_pane

0xd620,	// (0x0004abc7) bg_popup_sub_pane_cp20_g1

0xd628,	// (0x0004abcf) bg_popup_sub_pane_cp20_g2

0xab63,	// (0x0004810a) bg_popup_sub_pane_cp20_g3

0xd630,	// (0x0004abd7) bg_popup_sub_pane_cp20_g4

0xab43,	// (0x000480ea) bg_popup_sub_pane_cp20_g5

0xd870,	// (0x0004ae17) bg_popup_sub_pane_cp20_g6

0xd640,	// (0x0004abe7) bg_popup_sub_pane_cp20_g7

0xd648,	// (0x0004abef) bg_popup_sub_pane_cp20_g8

0xd650,	// (0x0004abf7) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004cf94) bg_popup_sub_pane_cp20_g

0x7e90,	// (0x00045437) list_vitu2_match_list_item_pane_ParamLimits

0x7e90,	// (0x00045437) list_vitu2_match_list_item_pane

0x7ea2,	// (0x00045449) list_vitu2_match_list_item_pane_t1

0x9fb5,	// (0x0004755c) bg_popup_sub_pane_cp21

0xafbd,	// (0x00048564) grid_vitu2_dropdown_list_pane

0x7eb0,	// (0x00045457) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7eb0,	// (0x00045457) cell_vitu2_dropdown_list_char_pane

0x7ed1,	// (0x00045478) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7ed1,	// (0x00045478) cell_vitu2_dropdown_list_ctrl_pane

0xd878,	// (0x0004ae1f) cell_vitu2_dropdown_list_char_pane_g1

0xd881,	// (0x0004ae28) cell_vitu2_dropdown_list_char_pane_g2

0xd88a,	// (0x0004ae31) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0004cfb1) cell_vitu2_dropdown_list_char_pane_g

0x7efd,	// (0x000454a4) cell_vitu2_dropdown_list_char_pane_t1

0x7f0b,	// (0x000454b2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7f0b,	// (0x000454b2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7f1b,	// (0x000454c2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7f1b,	// (0x000454c2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7f2c,	// (0x000454d3) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7f2c,	// (0x000454d3) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7f3c,	// (0x000454e3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7f3c,	// (0x000454e3) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce0f,	// (0x0004a3b6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce0f,	// (0x0004a3b6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004cfb8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004cfb8) cell_vitu2_dropdown_list_ctrl_pane_g

0x7f58,	// (0x000454ff) aid_size_cell_gallery2_ParamLimits

0x7f58,	// (0x000454ff) aid_size_cell_gallery2

0x7f72,	// (0x00045519) grid_gallery2_pane_ParamLimits

0x7f72,	// (0x00045519) grid_gallery2_pane

0x6995,	// (0x00043f3c) scroll_pane_cp029_ParamLimits

0x6995,	// (0x00043f3c) scroll_pane_cp029

0x7f89,	// (0x00045530) cell_gallery2_pane_ParamLimits

0x7f89,	// (0x00045530) cell_gallery2_pane

0xd893,	// (0x0004ae3a) cell_gallery2_pane_g2

0x7fde,	// (0x00045585) cell_gallery2_pane_g3

0xd89b,	// (0x0004ae42) cell_gallery2_pane_g4

0xd8a3,	// (0x0004ae4a) cell_gallery2_pane_g5

0xa90a,	// (0x00047eb1) grid_highlight_pane_cp10

0x765f,	// (0x00044c06) popup_vitu2_match_list_window_ParamLimits

0x7671,	// (0x00044c18) popup_vitu2_query_window_ParamLimits

0x7671,	// (0x00044c18) popup_vitu2_query_window

0x9fb5,	// (0x0004755c) bg_vitu2_candi_button_pane

0xd878,	// (0x0004ae1f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd881,	// (0x0004ae28) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd88a,	// (0x0004ae31) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x11f1,	// (0x0003e798) bg_button_pane_cp015

0x7fe6,	// (0x0004558d) bg_button_pane_cp016

0x7ff9,	// (0x000455a0) bg_button_pane_cp017

0xc7a5,	// (0x00049d4c) bg_popup_sub_pane_cp22

0xd8ab,	// (0x0004ae52) popup_vitu2_query_window_g1

0x1224,	// (0x0003e7cb) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0004cfc3) popup_vitu2_query_window_g

0x1241,	// (0x0003e7e8) popup_vitu2_query_window_t1_ParamLimits

0x1241,	// (0x0003e7e8) popup_vitu2_query_window_t1

0x1274,	// (0x0003e81b) popup_vitu2_query_window_t2_ParamLimits

0x1274,	// (0x0003e81b) popup_vitu2_query_window_t2

0x1286,	// (0x0003e82d) popup_vitu2_query_window_t3_ParamLimits

0x1286,	// (0x0003e82d) popup_vitu2_query_window_t3

0x801d,	// (0x000455c4) popup_vitu2_query_window_t4_ParamLimits

0x801d,	// (0x000455c4) popup_vitu2_query_window_t4

0x803e,	// (0x000455e5) popup_vitu2_query_window_t5_ParamLimits

0x803e,	// (0x000455e5) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0004cfca) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0004cfca) popup_vitu2_query_window_t

0xd722,	// (0x0004acc9) main_cset_text_pane

0x7a35,	// (0x00044fdc) aid_area_touch_slider_ParamLimits

0x7a51,	// (0x00044ff8) cset_slider_pane_ParamLimits

0x7a7b,	// (0x00045022) main_cset_slider_pane_g1_ParamLimits

0x7a90,	// (0x00045037) main_cset_slider_pane_g2_ParamLimits

0xd743,	// (0x0004acea) main_cset_slider_pane_g3_ParamLimits

0xd743,	// (0x0004acea) main_cset_slider_pane_g3

0x7aa5,	// (0x0004504c) main_cset_slider_pane_g4_ParamLimits

0x7aa5,	// (0x0004504c) main_cset_slider_pane_g4

0x7ab4,	// (0x0004505b) main_cset_slider_pane_g5_ParamLimits

0x7ab4,	// (0x0004505b) main_cset_slider_pane_g5

0x7ac2,	// (0x00045069) main_cset_slider_pane_g6_ParamLimits

0x7ac2,	// (0x00045069) main_cset_slider_pane_g6

0xf976,	// (0x0004cf1d) main_cset_slider_pane_g_ParamLimits

0xd773,	// (0x0004ad1a) main_cset_slider_pane_t1_ParamLimits

0x7b56,	// (0x000450fd) main_cset_slider_pane_t2_ParamLimits

0x7b70,	// (0x00045117) main_cset_slider_pane_t3_ParamLimits

0x7b8a,	// (0x00045131) main_cset_slider_pane_t4_ParamLimits

0x7ba8,	// (0x0004514f) main_cset_slider_pane_t5_ParamLimits

0x7bc6,	// (0x0004516d) main_cset_slider_pane_t6_ParamLimits

0x7bdd,	// (0x00045184) main_cset_slider_pane_t7_ParamLimits

0x7c0b,	// (0x000451b2) main_cset_slider_pane_t8_ParamLimits

0x7c0b,	// (0x000451b2) main_cset_slider_pane_t8

0x7c33,	// (0x000451da) main_cset_slider_pane_t9_ParamLimits

0x7c33,	// (0x000451da) main_cset_slider_pane_t9

0x7c5b,	// (0x00045202) main_cset_slider_pane_t10_ParamLimits

0x7c5b,	// (0x00045202) main_cset_slider_pane_t10

0x7c83,	// (0x0004522a) main_cset_slider_pane_t11_ParamLimits

0x7c83,	// (0x0004522a) main_cset_slider_pane_t11

0x7cad,	// (0x00045254) main_cset_slider_pane_t12_ParamLimits

0x7cad,	// (0x00045254) main_cset_slider_pane_t12

0x7ccc,	// (0x00045273) main_cset_slider_pane_t13_ParamLimits

0x7ccc,	// (0x00045273) main_cset_slider_pane_t13

0xf99b,	// (0x0004cf42) main_cset_slider_pane_t_ParamLimits

0x9fb5,	// (0x0004755c) bg_popup_sub_pane_cp011

0xd8b7,	// (0x0004ae5e) main_cset_text_pane_g1

0xd8bf,	// (0x0004ae66) main_cset_text_pane_t1

0xd8cd,	// (0x0004ae74) main_cset_text_pane_t2

0xd8db,	// (0x0004ae82) main_cset_text_pane_t3

0xd8e9,	// (0x0004ae90) main_cset_text_pane_t4

0xd8f7,	// (0x0004ae9e) main_cset_text_pane_t5

0xd905,	// (0x0004aeac) main_cset_text_pane_t6

0xd913,	// (0x0004aeba) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004cfd9) main_cset_text_pane_t

0x9fb5,	// (0x0004755c) main_cam4_burst_pane

0x9fb5,	// (0x0004755c) main_cam5_pane

0x7984,	// (0x00044f2b) bg_button_pane_cp019

0x798d,	// (0x00044f34) bg_button_pane_cp020

0xd74f,	// (0x0004acf6) main_cset_slider_pane_g7_ParamLimits

0xd74f,	// (0x0004acf6) main_cset_slider_pane_g7

0xd75b,	// (0x0004ad02) main_cset_slider_pane_g8_ParamLimits

0xd75b,	// (0x0004ad02) main_cset_slider_pane_g8

0x7ad6,	// (0x0004507d) main_cset_slider_pane_g9_ParamLimits

0x7ad6,	// (0x0004507d) main_cset_slider_pane_g9

0x7ae2,	// (0x00045089) main_cset_slider_pane_g10_ParamLimits

0x7ae2,	// (0x00045089) main_cset_slider_pane_g10

0x7aee,	// (0x00045095) main_cset_slider_pane_g11_ParamLimits

0x7aee,	// (0x00045095) main_cset_slider_pane_g11

0x7afa,	// (0x000450a1) main_cset_slider_pane_g12_ParamLimits

0x7afa,	// (0x000450a1) main_cset_slider_pane_g12

0x7b06,	// (0x000450ad) main_cset_slider_pane_g13_ParamLimits

0x7b06,	// (0x000450ad) main_cset_slider_pane_g13

0x7b14,	// (0x000450bb) main_cset_slider_pane_g14_ParamLimits

0x7b14,	// (0x000450bb) main_cset_slider_pane_g14

0x7b22,	// (0x000450c9) main_cset_slider_pane_g15_ParamLimits

0x7b22,	// (0x000450c9) main_cset_slider_pane_g15

0xd7cd,	// (0x0004ad74) main_cset_slider_pane_t14_ParamLimits

0xd7cd,	// (0x0004ad74) main_cset_slider_pane_t14

0xd806,	// (0x0004adad) main_cset_slider_pane_t15_ParamLimits

0xd806,	// (0x0004adad) main_cset_slider_pane_t15

0x805f,	// (0x00045606) aid_cam4_burst_size_cell_ParamLimits

0x805f,	// (0x00045606) aid_cam4_burst_size_cell

0x807b,	// (0x00045622) grid_cam4_burst_pane_ParamLimits

0x807b,	// (0x00045622) grid_cam4_burst_pane

0x80ab,	// (0x00045652) linegrid_cam4_burst_pane_ParamLimits

0x80ab,	// (0x00045652) linegrid_cam4_burst_pane

0x80cd,	// (0x00045674) scroll_pane_cp30_ParamLimits

0x80cd,	// (0x00045674) scroll_pane_cp30

0x80d9,	// (0x00045680) cell_cam4_burst_pane_ParamLimits

0x80d9,	// (0x00045680) cell_cam4_burst_pane

0xd921,	// (0x0004aec8) linegrid_cam4_burst_pane_g1_ParamLimits

0xd921,	// (0x0004aec8) linegrid_cam4_burst_pane_g1

0x8115,	// (0x000456bc) linegrid_cam4_burst_pane_g2_ParamLimits

0x8115,	// (0x000456bc) linegrid_cam4_burst_pane_g2

0xd92e,	// (0x0004aed5) linegrid_cam4_burst_pane_g3_ParamLimits

0xd92e,	// (0x0004aed5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004cfe8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004cfe8) linegrid_cam4_burst_pane_g

0x8126,	// (0x000456cd) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8126,	// (0x000456cd) linegrid_cam4_burst_pane_g3_copy1

0xd93b,	// (0x0004aee2) linegrid_cam4_burst_pane_g4_ParamLimits

0xd93b,	// (0x0004aee2) linegrid_cam4_burst_pane_g4

0x8140,	// (0x000456e7) linegrid_cam4_burst_pane_g5_ParamLimits

0x8140,	// (0x000456e7) linegrid_cam4_burst_pane_g5

0x8151,	// (0x000456f8) linegrid_cam4_burst_pane_g6_ParamLimits

0x8151,	// (0x000456f8) linegrid_cam4_burst_pane_g6

0xd948,	// (0x0004aeef) linegrid_cam4_burst_pane_g7_ParamLimits

0xd948,	// (0x0004aeef) linegrid_cam4_burst_pane_g7

0x8162,	// (0x00045709) cell_cam4_burst_pane_g1

0xd961,	// (0x0004af08) main_cam5_pane_t1_ParamLimits

0xd961,	// (0x0004af08) main_cam5_pane_t1

0xd973,	// (0x0004af1a) main_cam5_pane_t2_ParamLimits

0xd973,	// (0x0004af1a) main_cam5_pane_t2

0xd985,	// (0x0004af2c) main_cam5_pane_t3_ParamLimits

0xd985,	// (0x0004af2c) main_cam5_pane_t3

0xd997,	// (0x0004af3e) main_cam5_pane_t4_ParamLimits

0xd997,	// (0x0004af3e) main_cam5_pane_t4

0xd9af,	// (0x0004af56) main_cam5_pane_t5_ParamLimits

0xd9af,	// (0x0004af56) main_cam5_pane_t5

0xd9c3,	// (0x0004af6a) main_cam5_pane_t6_ParamLimits

0xd9c3,	// (0x0004af6a) main_cam5_pane_t6

0xd9d7,	// (0x0004af7e) main_cam5_pane_t7_ParamLimits

0xd9d7,	// (0x0004af7e) main_cam5_pane_t7

0xd9e9,	// (0x0004af90) main_cam5_pane_t8_ParamLimits

0xd9e9,	// (0x0004af90) main_cam5_pane_t8

0xda05,	// (0x0004afac) main_cam5_pane_t9_ParamLimits

0xda05,	// (0x0004afac) main_cam5_pane_t9

0xda17,	// (0x0004afbe) main_cam5_pane_t10_ParamLimits

0xda17,	// (0x0004afbe) main_cam5_pane_t10

0xda29,	// (0x0004afd0) main_cam5_pane_t11_ParamLimits

0xda29,	// (0x0004afd0) main_cam5_pane_t11

0xda3b,	// (0x0004afe2) main_cam5_pane_t12_ParamLimits

0xda3b,	// (0x0004afe2) main_cam5_pane_t12

0xda50,	// (0x0004aff7) main_cam5_pane_t13_ParamLimits

0xda50,	// (0x0004aff7) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0004cff4) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0004cff4) main_cam5_pane_t

0x2359,	// (0x0003f900) popup_scut_keymap_window_ParamLimits

0x2359,	// (0x0003f900) popup_scut_keymap_window

0x8177,	// (0x0004571e) aid_size_cell_brow_shortcut

0xa90a,	// (0x00047eb1) bg_popup_window_pane_cp010

0x8183,	// (0x0004572a) grid_scut_pane

0x818f,	// (0x00045736) cell_scut_pane_ParamLimits

0x818f,	// (0x00045736) cell_scut_pane

0x81a6,	// (0x0004574d) cell_scut_pane_g1

0xda6d,	// (0x0004b014) cell_scut_pane_t1

0xda7c,	// (0x0004b023) cell_scut_pane_t2

0x81af,	// (0x00045756) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0004d00f) cell_scut_pane_t

0x6175,	// (0x0004371c) main_mup3_pane_g8_ParamLimits

0x6175,	// (0x0004371c) main_mup3_pane_g8

0x759b,	// (0x00044b42) area_vitu2_query_pane_ParamLimits

0x759b,	// (0x00044b42) area_vitu2_query_pane

0x1203,	// (0x0003e7aa) input_focus_pane_cp08

0xda8b,	// (0x0004b032) area_vitu2_query_pane_g1

0x1304,	// (0x0003e8ab) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0004d016) area_vitu2_query_pane_g

0x81bd,	// (0x00045764) area_vitu2_query_pane_t1_ParamLimits

0x81bd,	// (0x00045764) area_vitu2_query_pane_t1

0x81d1,	// (0x00045778) area_vitu2_query_pane_t2_ParamLimits

0x81d1,	// (0x00045778) area_vitu2_query_pane_t2

0x1315,	// (0x0003e8bc) area_vitu2_query_pane_t3_ParamLimits

0x1315,	// (0x0003e8bc) area_vitu2_query_pane_t3

0x133d,	// (0x0003e8e4) area_vitu2_query_pane_t4_ParamLimits

0x133d,	// (0x0003e8e4) area_vitu2_query_pane_t4

0x1365,	// (0x0003e90c) area_vitu2_query_pane_t5_ParamLimits

0x1365,	// (0x0003e90c) area_vitu2_query_pane_t5

0x138d,	// (0x0003e934) area_vitu2_query_pane_t6_ParamLimits

0x138d,	// (0x0003e934) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0004d01b) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0004d01b) area_vitu2_query_pane_t

0x81e5,	// (0x0004578c) bg_button_pane_cp018

0x81f3,	// (0x0004579a) bg_button_pane_cp021

0x13d9,	// (0x0003e980) bg_button_pane_cp022

0x13ea,	// (0x0003e991) input_focus_pane_cp09

0xb1dd,	// (0x00048784) aid_size_touch_mv_arrow_left

0xb208,	// (0x000487af) aid_size_touch_mv_arrow_right

0x7b3a,	// (0x000450e1) main_cset_slider_pane_g16_ParamLimits

0x7b3a,	// (0x000450e1) main_cset_slider_pane_g16

0x7b48,	// (0x000450ef) main_cset_slider_pane_g17_ParamLimits

0x7b48,	// (0x000450ef) main_cset_slider_pane_g17

0x8162,	// (0x00045709) cell_cam4_burst_pane_g1_ParamLimits

0x9fb5,	// (0x0004755c) compa_mode_pane

0x7d57,	// (0x000452fe) popup_vtel_slider_window_g3_ParamLimits

0x7d57,	// (0x000452fe) popup_vtel_slider_window_g3

0x7d6b,	// (0x00045312) popup_vtel_slider_window_g4_ParamLimits

0x7d6b,	// (0x00045312) popup_vtel_slider_window_g4

0x7d7f,	// (0x00045326) popup_vtel_slider_window_t1_ParamLimits

0x7d7f,	// (0x00045326) popup_vtel_slider_window_t1

0x9fb5,	// (0x0004755c) main_cl_pane

0x54bd,	// (0x00042a64) popup_imed_adjust2_window_ParamLimits

0xc7a5,	// (0x00049d4c) bg_tb_trans_pane_cp05_ParamLimits

0xd0d0,	// (0x0004a677) popup_imed_adjust2_window_g1_ParamLimits

0xd0df,	// (0x0004a686) popup_imed_adjust2_window_g2_ParamLimits

0xd0df,	// (0x0004a686) popup_imed_adjust2_window_g2

0xd0eb,	// (0x0004a692) popup_imed_adjust2_window_g3_ParamLimits

0xd0eb,	// (0x0004a692) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0004cd86) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0004cd86) popup_imed_adjust2_window_g

0xd0f7,	// (0x0004a69e) popup_imed_adjust2_window_t1_ParamLimits

0xd10f,	// (0x0004a6b6) slider_imed_adjust_pane_ParamLimits

0xd123,	// (0x0004a6ca) slider_imed_adjust_pane_g1_ParamLimits

0xd133,	// (0x0004a6da) slider_imed_adjust_pane_g2_ParamLimits

0xd151,	// (0x0004a6f8) slider_imed_adjust_pane_g3_ParamLimits

0xd162,	// (0x0004a709) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0004cd8d) slider_imed_adjust_pane_g_ParamLimits

0x72e6,	// (0x0004488d) aid_touch_area_cam4_ParamLimits

0x72e6,	// (0x0004488d) aid_touch_area_cam4

0x72f6,	// (0x0004489d) battery_pane_cp01

0x737d,	// (0x00044924) main_camera4_pane_g6_ParamLimits

0x737d,	// (0x00044924) main_camera4_pane_g6

0x739b,	// (0x00044942) main_camera4_pane_t2_ParamLimits

0x739b,	// (0x00044942) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004ce90) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004ce90) main_camera4_pane_t

0x7422,	// (0x000449c9) aid_touch_area_vid4_ParamLimits

0x7422,	// (0x000449c9) aid_touch_area_vid4

0x7462,	// (0x00044a09) main_video4_pane_g5_ParamLimits

0x7462,	// (0x00044a09) main_video4_pane_g5

0x7486,	// (0x00044a2d) vid4_progress_pane_ParamLimits

0x7486,	// (0x00044a2d) vid4_progress_pane

0xd767,	// (0x0004ad0e) main_cset_slider_pane_g18_ParamLimits

0xd767,	// (0x0004ad0e) main_cset_slider_pane_g18

0xd955,	// (0x0004aefc) cell_cam4_burst_pane_g2_ParamLimits

0xd955,	// (0x0004aefc) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0004cfef) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0004cfef) cell_cam4_burst_pane_g

0x81ff,	// (0x000457a6) bg_cl_pane_ParamLimits

0x81ff,	// (0x000457a6) bg_cl_pane

0x820b,	// (0x000457b2) cl_header_pane_ParamLimits

0x820b,	// (0x000457b2) cl_header_pane

0x8217,	// (0x000457be) cl_listscroll_pane_ParamLimits

0x8217,	// (0x000457be) cl_listscroll_pane

0xda97,	// (0x0004b03e) bg_cl_pane_g1

0xda9f,	// (0x0004b046) bg_cl_pane_g2

0xdaa7,	// (0x0004b04e) bg_cl_pane_g3

0xdaaf,	// (0x0004b056) bg_cl_pane_g4

0xdab7,	// (0x0004b05e) bg_cl_pane_g5

0xdabf,	// (0x0004b066) bg_cl_pane_g6

0xdac7,	// (0x0004b06e) bg_cl_pane_g7

0xdacf,	// (0x0004b076) bg_cl_pane_g8

0xdad7,	// (0x0004b07e) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0004d02a) bg_cl_pane_g

0x8223,	// (0x000457ca) aid_height_cl_leading_ParamLimits

0x8223,	// (0x000457ca) aid_height_cl_leading

0x822f,	// (0x000457d6) aid_height_cl_text_ParamLimits

0x822f,	// (0x000457d6) aid_height_cl_text

0xd143,	// (0x0004a6ea) bg_cl_header_pane_ParamLimits

0xd143,	// (0x0004a6ea) bg_cl_header_pane

0x8247,	// (0x000457ee) cl_header_pane_g1_ParamLimits

0x8247,	// (0x000457ee) cl_header_pane_g1

0x8254,	// (0x000457fb) cl_header_pane_t1_ParamLimits

0x8254,	// (0x000457fb) cl_header_pane_t1

0xdadf,	// (0x0004b086) cl_list_pane

0xd73a,	// (0x0004ace1) hc_scroll_pane_cp01

0xab43,	// (0x000480ea) bg_cl_header_pane_g1

0xd620,	// (0x0004abc7) bg_cl_header_pane_g2

0xab63,	// (0x0004810a) bg_cl_header_pane_g3

0xd630,	// (0x0004abd7) bg_cl_header_pane_g4

0xd628,	// (0x0004abcf) bg_cl_header_pane_g5

0xd870,	// (0x0004ae17) bg_cl_header_pane_g6

0xd648,	// (0x0004abef) bg_cl_header_pane_g7

0xd650,	// (0x0004abf7) bg_cl_header_pane_g8

0xd640,	// (0x0004abe7) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0004d03d) bg_cl_header_pane_g

0x8266,	// (0x0004580d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8266,	// (0x0004580d) hc_cl_list_double_graphic_heading_pane

0x827a,	// (0x00045821) hc_cl_list_single_graphic_pane_ParamLimits

0x827a,	// (0x00045821) hc_cl_list_single_graphic_pane

0x8294,	// (0x0004583b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8294,	// (0x0004583b) hc_cl_list_single_graphic_pane_g1

0x82a0,	// (0x00045847) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x82a0,	// (0x00045847) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0004d050) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0004d050) hc_cl_list_single_graphic_pane_g

0x82b4,	// (0x0004585b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x82b4,	// (0x0004585b) hc_cl_list_single_graphic_pane_t1

0x8294,	// (0x0004583b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8294,	// (0x0004583b) hc_cl_list_double_graphic_heading_pane_g1

0x82c9,	// (0x00045870) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x82c9,	// (0x00045870) hc_cl_list_double_graphic_heading_pane_g2

0x82dd,	// (0x00045884) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x82dd,	// (0x00045884) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004d055) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004d055) hc_cl_list_double_graphic_heading_pane_g

0x82f1,	// (0x00045898) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x82f1,	// (0x00045898) hc_cl_list_double_graphic_heading_pane_t1

0x8306,	// (0x000458ad) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8306,	// (0x000458ad) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0004d05c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0004d05c) hc_cl_list_double_graphic_heading_pane_t

0x8323,	// (0x000458ca) vid4_progress_pane_g1

0x8333,	// (0x000458da) vid4_progress_pane_g2

0x8343,	// (0x000458ea) vid4_progress_pane_g3

0x8355,	// (0x000458fc) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0004d061) vid4_progress_pane_g

0x8373,	// (0x0004591a) vid4_progress_pane_t1

0x8389,	// (0x00045930) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0004d06c) vid4_progress_pane_t

0x83b4,	// (0x0004595b) wait_bar_pane_cp07

0xc9a0,	// (0x00049f47) blid_firmament_pane_ParamLimits

0xc9e3,	// (0x00049f8a) popup_blid_sat_info2_window_g1

0xca07,	// (0x00049fae) popup_blid_sat_info2_window_t3

0xca15,	// (0x00049fbc) popup_blid_sat_info2_window_t4

0xca23,	// (0x00049fca) popup_blid_sat_info2_window_t5

0xca31,	// (0x00049fd8) popup_blid_sat_info2_window_t6

0xca41,	// (0x00049fe8) popup_blid_sat_info2_window_t7

0xca4f,	// (0x00049ff6) popup_blid_sat_info2_window_t8

0xca5d,	// (0x0004a004) popup_blid_sat_info2_window_t9

0xca6b,	// (0x0004a012) popup_blid_sat_info2_window_t10

0xcb2f,	// (0x0004a0d6) aid_firma_cardinal_ParamLimits

0xcb43,	// (0x0004a0ea) blid_firmament_pane_t1_ParamLimits

0xcb5a,	// (0x0004a101) blid_firmament_pane_t2_ParamLimits

0xcb71,	// (0x0004a118) blid_firmament_pane_t3_ParamLimits

0xcb88,	// (0x0004a12f) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0004cc7a) blid_firmament_pane_t_ParamLimits

0xcb9f,	// (0x0004a146) blid_sat_info_pane_ParamLimits

0xae38,	// (0x000483df) main_cam_set_pane_ParamLimits

0x692e,	// (0x00043ed5) aid_size_cell_colour_35_ParamLimits

0x6948,	// (0x00043eef) aid_size_cell_colour_112_ParamLimits

0x695f,	// (0x00043f06) aid_size_cell_effect_ParamLimits

0xae38,	// (0x000483df) bg_tb_trans_pane_cp02_ParamLimits

0xb539,	// (0x00048ae0) heading_imed_pane_ParamLimits

0x6979,	// (0x00043f20) listscroll_imed_pane_ParamLimits

0xbdcb,	// (0x00049372) popup_call2_audio_first_window_g5_ParamLimits

0xbdcb,	// (0x00049372) popup_call2_audio_first_window_g5

0x70a3,	// (0x0004464a) aid_size_touch_image3_arrow_left_ParamLimits

0x70a3,	// (0x0004464a) aid_size_touch_image3_arrow_left

0x70b9,	// (0x00044660) aid_size_touch_image3_arrow_right_ParamLimits

0x70b9,	// (0x00044660) aid_size_touch_image3_arrow_right

0x839e,	// (0x00045945) vid4_progress_pane_t3

0x6c2d,	// (0x000441d4) main_hwr_training_symbol_option_pane_ParamLimits

0x6c2d,	// (0x000441d4) main_hwr_training_symbol_option_pane

0xd3d4,	// (0x0004a97b) popup_hwr_training_preview_window_ParamLimits

0xd3d4,	// (0x0004a97b) popup_hwr_training_preview_window

0x6c8e,	// (0x00044235) hwr_training_navi_pane_g5_ParamLimits

0x6c8e,	// (0x00044235) hwr_training_navi_pane_g5

0xd60e,	// (0x0004abb5) popup_char_count_window

0xd143,	// (0x0004a6ea) bg_popup_sub_pane_cp20_ParamLimits

0x7e78,	// (0x0004541f) list_vitu2_match_list_pane_ParamLimits

0x7e84,	// (0x0004542b) vitu2_page_scroll_pane_ParamLimits

0x7e84,	// (0x0004542b) vitu2_page_scroll_pane

0xdae8,	// (0x0004b08f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdae8,	// (0x0004b08f) list_single_hwr_training_symbol_option_pane

0xdafb,	// (0x0004b0a2) list_single_hwr_training_symbol_option_pane_g1

0xdb03,	// (0x0004b0aa) list_single_hwr_training_symbol_option_pane_t1

0xdb11,	// (0x0004b0b8) bg_button_pane_cp023

0xdb1a,	// (0x0004b0c1) bg_button_pane_cp024

0x83c5,	// (0x0004596c) vitu2_page_scroll_pane_g1

0x83cd,	// (0x00045974) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0004d073) vitu2_page_scroll_pane_g

0x83d5,	// (0x0004597c) vitu2_page_scroll_pane_t1

0xc900,	// (0x00049ea7) popup_char_count_window_g1

0xdb4d,	// (0x0004b0f4) popup_char_count_window_g2

0xdb56,	// (0x0004b0fd) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004d078) popup_char_count_window_g

0xdb5f,	// (0x0004b106) popup_char_count_window_t1

0x9fb5,	// (0x0004755c) main_vded2_pane

0xd0bc,	// (0x0004a663) aid_size_cell_imed_line

0xd0c6,	// (0x0004a66d) grid_imed_line_width_pane

0x74f2,	// (0x00044a99) vid4_indicators_pane_g4

0xdb6d,	// (0x0004b114) cell_imed_line_width_pane_ParamLimits

0xdb6d,	// (0x0004b114) cell_imed_line_width_pane

0xdb81,	// (0x0004b128) cell_imed_line_width_pane_g1

0xd7a1,	// (0x0004ad48) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0004d07f) cell_imed_line_width_pane_g

0x83e4,	// (0x0004598b) main_vded2_pane_g1_ParamLimits

0x83e4,	// (0x0004598b) main_vded2_pane_g1

0x83f1,	// (0x00045998) main_vded2_pane_g2_ParamLimits

0x83f1,	// (0x00045998) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004d084) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004d084) main_vded2_pane_g

0x83ff,	// (0x000459a6) vded2_slider_pane_ParamLimits

0x83ff,	// (0x000459a6) vded2_slider_pane

0x840c,	// (0x000459b3) aid_size_touch_vded2_end

0x8416,	// (0x000459bd) aid_size_touch_vded2_playhead

0xdb8a,	// (0x0004b131) aid_size_touch_vded2_start

0xdb92,	// (0x0004b139) vded2_slider_bg_pane

0xdb9b,	// (0x0004b142) vded2_slider_pane_g1

0xdba4,	// (0x0004b14b) vded2_slider_pane_g2

0x841e,	// (0x000459c5) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004d089) vded2_slider_pane_g

0xdbac,	// (0x0004b153) vded2_slider_bg_pane_g1

0xdbb5,	// (0x0004b15c) vded2_slider_bg_pane_g2

0xdbbe,	// (0x0004b165) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0004d090) vded2_slider_bg_pane_g

0x4d0c,	// (0x000422b3) aid_postcard_touch_down_pane_ParamLimits

0x4d0c,	// (0x000422b3) aid_postcard_touch_down_pane

0x4d1c,	// (0x000422c3) aid_postcard_touch_up_pane_ParamLimits

0x4d1c,	// (0x000422c3) aid_postcard_touch_up_pane

0x9fb5,	// (0x0004755c) main_blid2_pane

0x544c,	// (0x000429f3) popup_blid2_search_window

0x9fb5,	// (0x0004755c) blid2_gps_pane

0x9fb5,	// (0x0004755c) blid2_navig_pane

0x9fb5,	// (0x0004755c) blid2_search_pane

0x9fb5,	// (0x0004755c) blid2_tripm_pane

0x8427,	// (0x000459ce) blid2_search_pane_g1_ParamLimits

0x8427,	// (0x000459ce) blid2_search_pane_g1

0x8437,	// (0x000459de) blid2_search_pane_t1_ParamLimits

0x8437,	// (0x000459de) blid2_search_pane_t1

0x8449,	// (0x000459f0) aid_size_cell_blid2_gps_ParamLimits

0x8449,	// (0x000459f0) aid_size_cell_blid2_gps

0x8459,	// (0x00045a00) blid2_gps_pane_g1_ParamLimits

0x8459,	// (0x00045a00) blid2_gps_pane_g1

0x8465,	// (0x00045a0c) grid_blid2_satellite_pane_ParamLimits

0x8465,	// (0x00045a0c) grid_blid2_satellite_pane

0x8475,	// (0x00045a1c) blid2_navig_pane_g1_ParamLimits

0x8475,	// (0x00045a1c) blid2_navig_pane_g1

0x8481,	// (0x00045a28) blid2_navig_pane_t1_ParamLimits

0x8481,	// (0x00045a28) blid2_navig_pane_t1

0x8493,	// (0x00045a3a) blid2_navig_pane_t2_ParamLimits

0x8493,	// (0x00045a3a) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0004d097) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0004d097) blid2_navig_pane_t

0x84a5,	// (0x00045a4c) blid2_navig_ring_pane_ParamLimits

0x84a5,	// (0x00045a4c) blid2_navig_ring_pane

0x84b5,	// (0x00045a5c) blid2_speed_pane_ParamLimits

0x84b5,	// (0x00045a5c) blid2_speed_pane

0x84c1,	// (0x00045a68) blid2_tripm_pane_g1_ParamLimits

0x84c1,	// (0x00045a68) blid2_tripm_pane_g1

0x84d1,	// (0x00045a78) blid2_tripm_pane_g2_ParamLimits

0x84d1,	// (0x00045a78) blid2_tripm_pane_g2

0x84dd,	// (0x00045a84) blid2_tripm_pane_g3_ParamLimits

0x84dd,	// (0x00045a84) blid2_tripm_pane_g3

0x84e9,	// (0x00045a90) blid2_tripm_pane_g4_ParamLimits

0x84e9,	// (0x00045a90) blid2_tripm_pane_g4

0x84f5,	// (0x00045a9c) blid2_tripm_pane_g5_ParamLimits

0x84f5,	// (0x00045a9c) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0004d09c) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0004d09c) blid2_tripm_pane_g

0x8511,	// (0x00045ab8) blid2_tripm_pane_t1_ParamLimits

0x8511,	// (0x00045ab8) blid2_tripm_pane_t1

0x8525,	// (0x00045acc) blid2_tripm_pane_t2_ParamLimits

0x8525,	// (0x00045acc) blid2_tripm_pane_t2

0x8537,	// (0x00045ade) blid2_tripm_pane_t3_ParamLimits

0x8537,	// (0x00045ade) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0004d0a9) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0004d0a9) blid2_tripm_pane_t

0x8569,	// (0x00045b10) cell_blid2_satellite_pane_ParamLimits

0x8569,	// (0x00045b10) cell_blid2_satellite_pane

0x8583,	// (0x00045b2a) cell_blid2_satellite_pane_g1

0xdbc7,	// (0x0004b16e) cell_blid2_satellite_pane_t1

0xcbaf,	// (0x0004a156) blid2_speed_pane_g1

0xdbd5,	// (0x0004b17c) blid2_speed_pane_t1

0xdbe3,	// (0x0004b18a) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0004d0b2) blid2_speed_pane_t

0xcbaf,	// (0x0004a156) blid2_navig_ring_pane_g1

0x858c,	// (0x00045b33) blid2_navig_ring_pane_g2

0x8594,	// (0x00045b3b) blid2_navig_ring_pane_g3

0x859c,	// (0x00045b43) blid2_navig_ring_pane_g4

0x85a4,	// (0x00045b4b) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0004d0b7) blid2_navig_ring_pane_g

0x9fb5,	// (0x0004755c) bg_popup_window_pane_cp011

0xdbf1,	// (0x0004b198) popup_blid2_search_window_g1

0xdbf9,	// (0x0004b1a0) popup_blid2_search_window_t1

0xdc07,	// (0x0004b1ae) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0004d0c2) popup_blid2_search_window_t

0xaa52,	// (0x00047ff9) main_browser_pane_g1

0xa73c,	// (0x00047ce3) main_browser_pane_ParamLimits

0xae38,	// (0x000483df) bg_button_pane_cp011_ParamLimits

0x7755,	// (0x00044cfc) cell_vitu2_function_pane_g1_ParamLimits

0xc7a5,	// (0x00049d4c) bg_popup_sub_pane_cp22_ParamLimits

0x1203,	// (0x0003e7aa) input_focus_pane_cp08_ParamLimits

0x800c,	// (0x000455b3) popup_vitu2_query_button_pane_ParamLimits

0x800c,	// (0x000455b3) popup_vitu2_query_button_pane

0x121a,	// (0x0003e7c1) popup_vitu2_query_input_button_pane

0xd8ab,	// (0x0004ae52) popup_vitu2_query_window_g1_ParamLimits

0x1224,	// (0x0003e7cb) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0004cfc3) popup_vitu2_query_window_g_ParamLimits

0x9fb5,	// (0x0004755c) bg_button_pane_cp026

0x85ac,	// (0x00045b53) popup_vitu2_query_input_button_pane_g1

0x9fb5,	// (0x0004755c) bg_button_pane_cp025

0xdc15,	// (0x0004b1bc) popup_vitu2_query_button_pane_t1

0x5ead,	// (0x00043454) main_mp3_pane_t6

0x5ebd,	// (0x00043464) popup_slider_window_cp01

0x73d1,	// (0x00044978) cam4_battery_pane

0x74b1,	// (0x00044a58) cam4_battery_pane_cp02

0x831b,	// (0x000458c2) cam4_battery_pane_cp01

0x831b,	// (0x000458c2) cam4_battery_pane_cp03

0xcbaf,	// (0x0004a156) cam4_battery_pane_g1

0xd7a9,	// (0x0004ad50) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0004d0c7) cam4_battery_pane_g

0xca79,	// (0x0004a020) popup_blid_sat_info2_window_t11

0xb1dd,	// (0x00048784) aid_size_touch_mv_arrow_left_ParamLimits

0xb208,	// (0x000487af) aid_size_touch_mv_arrow_right_ParamLimits

0xb266,	// (0x0004880d) navi_pane_g1_ParamLimits

0xb272,	// (0x00048819) navi_pane_g2_ParamLimits

0xb2a0,	// (0x00048847) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0004c98c) navi_pane_g_ParamLimits

0x478c,	// (0x00041d33) navi_pane_mv_t1_ParamLimits

0x6985,	// (0x00043f2c) grid_imed_effect_pane_ParamLimits

0x31f1,	// (0x00040798) aid_placing_vt_slider_lsc

0xa9a1,	// (0x00047f48) aid_placing_vt_slider_prt

0xae38,	// (0x000483df) bg_tb_trans_pane_cp01_ParamLimits

0xcd2f,	// (0x0004a2d6) popup_image_details_window_g1_ParamLimits

0xcd42,	// (0x0004a2e9) popup_image_details_window_g2_ParamLimits

0xcd57,	// (0x0004a2fe) popup_image_details_window_g3_ParamLimits

0xcd57,	// (0x0004a2fe) popup_image_details_window_g3

0xf718,	// (0x0004ccbf) popup_image_details_window_g_ParamLimits

0xcd6b,	// (0x0004a312) popup_image_details_window_t1_ParamLimits

0xcd7d,	// (0x0004a324) popup_image_details_window_t2_ParamLimits

0xcd96,	// (0x0004a33d) popup_image_details_window_t3_ParamLimits

0xcdaa,	// (0x0004a351) popup_image_details_window_t4_ParamLimits

0xcdc5,	// (0x0004a36c) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0004ccc6) popup_image_details_window_t_ParamLimits

0x823b,	// (0x000457e2) cl_header_name_pane_ParamLimits

0x823b,	// (0x000457e2) cl_header_name_pane

0x85b4,	// (0x00045b5b) cl_header_name_pane_t1_ParamLimits

0x85b4,	// (0x00045b5b) cl_header_name_pane_t1

0x85cb,	// (0x00045b72) cl_header_name_pane_t2_ParamLimits

0x85cb,	// (0x00045b72) cl_header_name_pane_t2

0x85f5,	// (0x00045b9c) cl_header_name_pane_t3_ParamLimits

0x85f5,	// (0x00045b9c) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0004d0cc) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0004d0cc) cl_header_name_pane_t

0xb32f,	// (0x000488d6) navi_pane_mv_g2_ParamLimits

0xd5e8,	// (0x0004ab8f) field_vitu2_entry_pane_g1_ParamLimits

0xd5f4,	// (0x0004ab9b) field_vitu2_entry_pane_g2_ParamLimits

0xd600,	// (0x0004aba7) field_vitu2_entry_pane_g3_ParamLimits

0xd600,	// (0x0004aba7) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004cec2) field_vitu2_entry_pane_g_ParamLimits

0x76e9,	// (0x00044c90) cell_vitu2_itu_pane_g1_ParamLimits

0x76fb,	// (0x00044ca2) cell_vitu2_itu_pane_g2_ParamLimits

0x76fb,	// (0x00044ca2) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004cece) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004cece) cell_vitu2_itu_pane_g

0xae38,	// (0x000483df) bg_vkb2_func_pane_cp05_ParamLimits

0xae38,	// (0x000483df) bg_vkb2_func_pane_cp05

0xae38,	// (0x000483df) bg_vkb2_func_pane_cp03

0xae38,	// (0x000483df) bg_vkb2_func_pane_cp04

0xae38,	// (0x000483df) bg_vkb2_func_pane_cp10_ParamLimits

0xae38,	// (0x000483df) bg_vkb2_func_pane_cp10

0x13d9,	// (0x0003e980) bg_vkb2_func_pane_cp08

0x81e5,	// (0x0004578c) bg_vkb2_func_pane_cp06

0x81f3,	// (0x0004579a) bg_vkb2_func_pane_cp07

0xdb23,	// (0x0004b0ca) bg_vkb2_func_pane_cp11_ParamLimits

0xdb23,	// (0x0004b0ca) bg_vkb2_func_pane_cp11

0xdb38,	// (0x0004b0df) bg_vkb2_func_pane_cp12_ParamLimits

0xdb38,	// (0x0004b0df) bg_vkb2_func_pane_cp12

0x9fb5,	// (0x0004755c) bg_vkb2_func_pane_cp09

0xd620,	// (0x0004abc7) bg_vkb2_func_pane_g1

0xab63,	// (0x0004810a) bg_vkb2_func_pane_g2

0xd628,	// (0x0004abcf) bg_vkb2_func_pane_g3

0xd630,	// (0x0004abd7) bg_vkb2_func_pane_g4

0xd870,	// (0x0004ae17) bg_vkb2_func_pane_g5

0xd648,	// (0x0004abef) bg_vkb2_func_pane_g6

0xd650,	// (0x0004abf7) bg_vkb2_func_pane_g7

0xd640,	// (0x0004abe7) bg_vkb2_func_pane_g8

0xab43,	// (0x000480ea) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0004d0d3) bg_vkb2_func_pane_g

0x8503,	// (0x00045aaa) blid2_tripm_pane_g6_ParamLimits

0x8503,	// (0x00045aaa) blid2_tripm_pane_g6

0xd48c,	// (0x0004aa33) mp4_progress_pane_g1

0x855d,	// (0x00045b04) blid2_tripm_values_pane_ParamLimits

0x855d,	// (0x00045b04) blid2_tripm_values_pane

0x861a,	// (0x00045bc1) blid2_tripm_values_pane_t1

0x8628,	// (0x00045bcf) blid2_tripm_values_pane_t2

0x8636,	// (0x00045bdd) blid2_tripm_values_pane_t3

0x8644,	// (0x00045beb) blid2_tripm_values_pane_t4

0x8652,	// (0x00045bf9) blid2_tripm_values_pane_t5

0x8660,	// (0x00045c07) blid2_tripm_values_pane_t6

0x866e,	// (0x00045c15) blid2_tripm_values_pane_t7

0x867c,	// (0x00045c23) blid2_tripm_values_pane_t8

0x868a,	// (0x00045c31) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0004d0e6) blid2_tripm_values_pane_t

0x3231,	// (0x000407d8) call_video_pane_t1_ParamLimits

0x3252,	// (0x000407f9) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0004c815) call_video_pane_t_ParamLimits

0x0f59,	// (0x0003e500) msg_header_pane_g1_ParamLimits

0xb509,	// (0x00048ab0) msg_header_pane_g2_ParamLimits

0xb509,	// (0x00048ab0) msg_header_pane_g2

0x0001,

0xf488,	// (0x0004ca2f) msg_header_pane_g_ParamLimits

0xf488,	// (0x0004ca2f) msg_header_pane_g

0xa73c,	// (0x00047ce3) main_clock2_pane_ParamLimits

0x6716,	// (0x00043cbd) grid_clock2_toolbar_pane_ParamLimits

0x6716,	// (0x00043cbd) grid_clock2_toolbar_pane

0x6716,	// (0x00043cbd) listscroll_clock2_pane_ParamLimits

0x6716,	// (0x00043cbd) listscroll_clock2_pane

0x67c0,	// (0x00043d67) main_clock2_pane_t3_ParamLimits

0x67c0,	// (0x00043d67) main_clock2_pane_t3

0x67d2,	// (0x00043d79) main_clock2_pane_t4_ParamLimits

0x67d2,	// (0x00043d79) main_clock2_pane_t4

0xdc23,	// (0x0004b1ca) cell_clock2_toolbar_pane

0xdc2b,	// (0x0004b1d2) cell_clock2_toolbar_pane_cp01

0xdc2b,	// (0x0004b1d2) cell_clock2_toolbar_pane_cp02

0xdc33,	// (0x0004b1da) cell_clock2_toolbar_pane_cp03

0xdc3b,	// (0x0004b1e2) list_clock2_pane

0xb153,	// (0x000486fa) scroll_pane_cp10

0xdc43,	// (0x0004b1ea) list_single_clock2_pane_ParamLimits

0xdc43,	// (0x0004b1ea) list_single_clock2_pane

0xa90a,	// (0x00047eb1) list_highlight_pane_cp08

0xdc50,	// (0x0004b1f7) list_single_clock2_pane_t1

0xdc5e,	// (0x0004b205) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0004d0f9) list_single_clock2_pane_t

0x9fb5,	// (0x0004755c) bg_button_pane_cp10

0xdc6c,	// (0x0004b213) cell_clock2_toolbar_pane_g1

0x4c6e,	// (0x00042215) aid_main_viewer_pane_g1_ParamLimits

0x4c6e,	// (0x00042215) aid_main_viewer_pane_g1

0x4c7a,	// (0x00042221) aid_main_viewer_pane_g2_ParamLimits

0x4c7a,	// (0x00042221) aid_main_viewer_pane_g2

0x4c86,	// (0x0004222d) aid_main_viewer_pane_g3_ParamLimits

0x4c86,	// (0x0004222d) aid_main_viewer_pane_g3

0x4c97,	// (0x0004223e) aid_main_viewer_pane_g4_ParamLimits

0x4c97,	// (0x0004223e) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0004ca40) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0004ca40) aid_main_viewer_pane_g

0x5424,	// (0x000429cb) main_calc_pane_ParamLimits

0x5431,	// (0x000429d8) main_dialer2_pane_ParamLimits

0x9fb5,	// (0x0004755c) main_cam6_pane

0x9fb5,	// (0x0004755c) main_vid6_pane

0x6722,	// (0x00043cc9) listscroll_gen_pane_cp06_ParamLimits

0x6722,	// (0x00043cc9) listscroll_gen_pane_cp06

0x67e4,	// (0x00043d8b) main_clock2_pane_t5_ParamLimits

0x67e4,	// (0x00043d8b) main_clock2_pane_t5

0x682f,	// (0x00043dd6) aid_call2_pane_cp10_ParamLimits

0x6841,	// (0x00043de8) aid_call_pane_cp10_ParamLimits

0xb1d1,	// (0x00048778) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1d1,	// (0x00048778) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6853,	// (0x00043dfa) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6853,	// (0x00043dfa) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1d1,	// (0x00048778) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0004cd7b) popup_clock_analogue_window_cp10_g_ParamLimits

0x6865,	// (0x00043e0c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7050,	// (0x000445f7) cell_dialer2_keypad_pane_g2_ParamLimits

0x7050,	// (0x000445f7) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004ce61) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004ce61) cell_dialer2_keypad_pane_g

0x706c,	// (0x00044613) cell_dialer2_keypad_pane_t1

0x7a22,	// (0x00044fc9) main_cset_text2_pane_ParamLimits

0x7a22,	// (0x00044fc9) main_cset_text2_pane

0xda8b,	// (0x0004b032) area_vitu2_query_pane_g1_ParamLimits

0x1304,	// (0x0003e8ab) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0004d016) area_vitu2_query_pane_g_ParamLimits

0x13b5,	// (0x0003e95c) area_vitu2_query_pane_t7_ParamLimits

0x13b5,	// (0x0003e95c) area_vitu2_query_pane_t7

0x81e5,	// (0x0004578c) bg_button_pane_cp018_ParamLimits

0x81f3,	// (0x0004579a) bg_button_pane_cp021_ParamLimits

0x13d9,	// (0x0003e980) bg_button_pane_cp022_ParamLimits

0x13d9,	// (0x0003e980) bg_vkb2_func_pane_cp08_ParamLimits

0x81e5,	// (0x0004578c) bg_vkb2_func_pane_cp06_ParamLimits

0x81f3,	// (0x0004579a) bg_vkb2_func_pane_cp07_ParamLimits

0x13ea,	// (0x0003e991) input_focus_pane_cp09_ParamLimits

0x8698,	// (0x00045c3f) cam6_autofocus_pane_ParamLimits

0x8698,	// (0x00045c3f) cam6_autofocus_pane

0x86ba,	// (0x00045c61) cam6_image_uncrop_pane_ParamLimits

0x86ba,	// (0x00045c61) cam6_image_uncrop_pane

0x86e7,	// (0x00045c8e) cam6_indi_pane_ParamLimits

0x86e7,	// (0x00045c8e) cam6_indi_pane

0x8701,	// (0x00045ca8) cam6_mode_pane_ParamLimits

0x8701,	// (0x00045ca8) cam6_mode_pane

0x8715,	// (0x00045cbc) cam6_timer_pane_ParamLimits

0x8715,	// (0x00045cbc) cam6_timer_pane

0x8721,	// (0x00045cc8) cam6_zoom_pane_ParamLimits

0x8721,	// (0x00045cc8) cam6_zoom_pane

0x8739,	// (0x00045ce0) cam6_mode_pane_g1_ParamLimits

0x8739,	// (0x00045ce0) cam6_mode_pane_g1

0x8745,	// (0x00045cec) cam6_mode_pane_g2_ParamLimits

0x8745,	// (0x00045cec) cam6_mode_pane_g2

0x8751,	// (0x00045cf8) cam6_mode_pane_g3_ParamLimits

0x8751,	// (0x00045cf8) cam6_mode_pane_g3

0x875d,	// (0x00045d04) cam6_mode_pane_g4_ParamLimits

0x875d,	// (0x00045d04) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0004d0fe) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0004d0fe) cam6_mode_pane_g

0xd7bf,	// (0x0004ad66) bg_tb_trans_pane_cp08_ParamLimits

0xd7bf,	// (0x0004ad66) bg_tb_trans_pane_cp08

0xdc74,	// (0x0004b21b) cam6_battery_pane_ParamLimits

0xdc74,	// (0x0004b21b) cam6_battery_pane

0xdc8a,	// (0x0004b231) cam6_indi_pane_g1_ParamLimits

0xdc8a,	// (0x0004b231) cam6_indi_pane_g1

0xdc9c,	// (0x0004b243) cam6_indi_pane_g2_ParamLimits

0xdc9c,	// (0x0004b243) cam6_indi_pane_g2

0xdcae,	// (0x0004b255) cam6_indi_pane_g3_ParamLimits

0xdcae,	// (0x0004b255) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0004d107) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0004d107) cam6_indi_pane_g

0xdcc0,	// (0x0004b267) cam6_indi_pane_t1_ParamLimits

0xdcc0,	// (0x0004b267) cam6_indi_pane_t1

0x7525,	// (0x00044acc) cam6_autofocus_pane_g1

0x752d,	// (0x00044ad4) cam6_autofocus_pane_g2

0x7535,	// (0x00044adc) cam6_autofocus_pane_g3

0x753d,	// (0x00044ae4) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0004d10e) cam6_autofocus_pane_g

0xdce6,	// (0x0004b28d) cam6_timer_pane_g1

0xdcee,	// (0x0004b295) cam6_timer_pane_t1

0xdcfc,	// (0x0004b2a3) cam6_zoom_cont_pane

0xdd04,	// (0x0004b2ab) cam6_zoom_pane_g1

0xdd0c,	// (0x0004b2b3) cam6_zoom_pane_g2

0x8769,	// (0x00045d10) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0004d117) cam6_zoom_pane_g

0xcbaf,	// (0x0004a156) cam6_battery_pane_g1

0xcbaf,	// (0x0004a156) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0004cc83) cam6_battery_pane_g

0xdd14,	// (0x0004b2bb) cam6_zoom_cont_pane_g1

0xdd1d,	// (0x0004b2c4) cam6_zoom_cont_pane_g2

0xdd26,	// (0x0004b2cd) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0004d11e) cam6_zoom_cont_pane_g

0x8786,	// (0x00045d2d) cam6_mode_pane_cp_ParamLimits

0x8786,	// (0x00045d2d) cam6_mode_pane_cp

0x8721,	// (0x00045cc8) cam6_zoom_pane_cp_ParamLimits

0x8721,	// (0x00045cc8) cam6_zoom_pane_cp

0x879a,	// (0x00045d41) vid6_image_uncrop_cif_pane_ParamLimits

0x879a,	// (0x00045d41) vid6_image_uncrop_cif_pane

0x87c6,	// (0x00045d6d) vid6_image_uncrop_nhd_pane_ParamLimits

0x87c6,	// (0x00045d6d) vid6_image_uncrop_nhd_pane

0x86ba,	// (0x00045c61) vid6_image_uncrop_vga_pane_ParamLimits

0x86ba,	// (0x00045c61) vid6_image_uncrop_vga_pane

0x87e3,	// (0x00045d8a) vid6_image_uncrop_wvga_pane_ParamLimits

0x87e3,	// (0x00045d8a) vid6_image_uncrop_wvga_pane

0x8800,	// (0x00045da7) vid6_indi_pane_ParamLimits

0x8800,	// (0x00045da7) vid6_indi_pane

0xd7bf,	// (0x0004ad66) bg_tb_trans_pane_cp09_ParamLimits

0xd7bf,	// (0x0004ad66) bg_tb_trans_pane_cp09

0xdd3e,	// (0x0004b2e5) cam6_battery_pane_cp_ParamLimits

0xdd3e,	// (0x0004b2e5) cam6_battery_pane_cp

0xdd4a,	// (0x0004b2f1) vid6_indi_pane_g1_ParamLimits

0xdd4a,	// (0x0004b2f1) vid6_indi_pane_g1

0xdd5c,	// (0x0004b303) vid6_indi_pane_g2_ParamLimits

0xdd5c,	// (0x0004b303) vid6_indi_pane_g2

0xdd9e,	// (0x0004b345) vid6_indi_pane_g3_ParamLimits

0xdd9e,	// (0x0004b345) vid6_indi_pane_g3

0xddb3,	// (0x0004b35a) vid6_indi_pane_g4_ParamLimits

0xddb3,	// (0x0004b35a) vid6_indi_pane_g4

0xddc8,	// (0x0004b36f) vid6_indi_pane_g5_ParamLimits

0xddc8,	// (0x0004b36f) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0004d125) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0004d125) vid6_indi_pane_g

0xdde2,	// (0x0004b389) vid6_indi_pane_t1_ParamLimits

0xdde2,	// (0x0004b389) vid6_indi_pane_t1

0xddf8,	// (0x0004b39f) vid6_indi_pane_t2_ParamLimits

0xddf8,	// (0x0004b39f) vid6_indi_pane_t2

0xde20,	// (0x0004b3c7) vid6_indi_pane_t3_ParamLimits

0xde20,	// (0x0004b3c7) vid6_indi_pane_t3

0xde48,	// (0x0004b3ef) vid6_indi_pane_t4_ParamLimits

0xde48,	// (0x0004b3ef) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0004d130) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0004d130) vid6_indi_pane_t

0xde6c,	// (0x0004b413) wait_bar_pane_cp08

0x8823,	// (0x00045dca) main_cset_text2_pane_t1_ParamLimits

0x8823,	// (0x00045dca) main_cset_text2_pane_t1

0x8771,	// (0x00045d18) listscroll_gen_pane_cp06_t1_ParamLimits

0x8771,	// (0x00045d18) listscroll_gen_pane_cp06_t1

0x9fb5,	// (0x0004755c) main_cam6_set_pane

0xce0f,	// (0x0004a3b6) bg_tb_trans_pane_cp06_ParamLimits

0x73d9,	// (0x00044980) cam4_indicators_pane_g1_ParamLimits

0x73ea,	// (0x00044991) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004ce9e) cam4_indicators_pane_g_ParamLimits

0x7408,	// (0x000449af) cam4_indicators_pane_t1_ParamLimits

0xae38,	// (0x000483df) bg_tb_trans_pane_cp07_ParamLimits

0x74b9,	// (0x00044a60) vid4_indicators_pane_g1_ParamLimits

0x74cd,	// (0x00044a74) vid4_indicators_pane_g2_ParamLimits

0x74e1,	// (0x00044a88) vid4_indicators_pane_g3_ParamLimits

0x74f2,	// (0x00044a99) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004ceb0) vid4_indicators_pane_g_ParamLimits

0x750e,	// (0x00044ab5) vid4_indicators_pane_t1_ParamLimits

0x8323,	// (0x000458ca) vid4_progress_pane_g1_ParamLimits

0x8333,	// (0x000458da) vid4_progress_pane_g2_ParamLimits

0x8343,	// (0x000458ea) vid4_progress_pane_g3_ParamLimits

0x8355,	// (0x000458fc) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0004d061) vid4_progress_pane_g_ParamLimits

0x8373,	// (0x0004591a) vid4_progress_pane_t1_ParamLimits

0x8389,	// (0x00045930) vid4_progress_pane_t2_ParamLimits

0x839e,	// (0x00045945) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0004d06c) vid4_progress_pane_t_ParamLimits

0x83b4,	// (0x0004595b) wait_bar_pane_cp07_ParamLimits

0x885d,	// (0x00045e04) main_cam6_set_pane_g2_ParamLimits

0x885d,	// (0x00045e04) main_cam6_set_pane_g2

0x8869,	// (0x00045e10) main_cset6_listscroll_pane_ParamLimits

0x8869,	// (0x00045e10) main_cset6_listscroll_pane

0x8894,	// (0x00045e3b) main_cset6_slider_pane_ParamLimits

0x8894,	// (0x00045e3b) main_cset6_slider_pane

0x88a0,	// (0x00045e47) main_cset6_text2_pane_ParamLimits

0x88a0,	// (0x00045e47) main_cset6_text2_pane

0xde7b,	// (0x0004b422) main_cset6_text_pane

0xde83,	// (0x0004b42a) main_cset_list_pane_copy1_ParamLimits

0xde83,	// (0x0004b42a) main_cset_list_pane_copy1

0xde93,	// (0x0004b43a) scroll_pane_cp028_copy1

0x88b3,	// (0x00045e5a) cset_list_set_pane_copy1

0x88cc,	// (0x00045e73) aid_position_infowindow_above_copy1

0x88d4,	// (0x00045e7b) aid_position_infowindow_below_copy1

0x144c,	// (0x0003e9f3) cset_list_set_pane_g1_copy1

0x1178,	// (0x0003e71f) cset_list_set_pane_g3_copy1_ParamLimits

0x1178,	// (0x0003e71f) cset_list_set_pane_g3_copy1

0x1187,	// (0x0003e72e) cset_list_set_pane_t1_copy1_ParamLimits

0x1187,	// (0x0003e72e) cset_list_set_pane_t1_copy1

0xae38,	// (0x000483df) list_highlight_pane_cp021_copy1_ParamLimits

0xae38,	// (0x000483df) list_highlight_pane_cp021_copy1

0xde9c,	// (0x0004b443) cset6_slider_pane_ParamLimits

0xde9c,	// (0x0004b443) cset6_slider_pane

0xdec8,	// (0x0004b46f) main_cset6_slider_pane_g1_ParamLimits

0xdec8,	// (0x0004b46f) main_cset6_slider_pane_g1

0x88dc,	// (0x00045e83) main_cset6_slider_pane_g2_ParamLimits

0x88dc,	// (0x00045e83) main_cset6_slider_pane_g2

0xdef0,	// (0x0004b497) main_cset6_slider_pane_g3_ParamLimits

0xdef0,	// (0x0004b497) main_cset6_slider_pane_g3

0x8904,	// (0x00045eab) main_cset6_slider_pane_g4_ParamLimits

0x8904,	// (0x00045eab) main_cset6_slider_pane_g4

0x8910,	// (0x00045eb7) main_cset6_slider_pane_g5_ParamLimits

0x8910,	// (0x00045eb7) main_cset6_slider_pane_g5

0xd74f,	// (0x0004acf6) main_cset6_slider_pane_g7_ParamLimits

0xd74f,	// (0x0004acf6) main_cset6_slider_pane_g7

0xd75b,	// (0x0004ad02) main_cset6_slider_pane_g8_ParamLimits

0xd75b,	// (0x0004ad02) main_cset6_slider_pane_g8

0x891e,	// (0x00045ec5) main_cset6_slider_pane_g9_ParamLimits

0x891e,	// (0x00045ec5) main_cset6_slider_pane_g9

0x892a,	// (0x00045ed1) main_cset6_slider_pane_g10_ParamLimits

0x892a,	// (0x00045ed1) main_cset6_slider_pane_g10

0x8936,	// (0x00045edd) main_cset6_slider_pane_g11_ParamLimits

0x8936,	// (0x00045edd) main_cset6_slider_pane_g11

0x8942,	// (0x00045ee9) main_cset6_slider_pane_g12_ParamLimits

0x8942,	// (0x00045ee9) main_cset6_slider_pane_g12

0x894e,	// (0x00045ef5) main_cset6_slider_pane_g13_ParamLimits

0x894e,	// (0x00045ef5) main_cset6_slider_pane_g13

0x895a,	// (0x00045f01) main_cset6_slider_pane_g14_ParamLimits

0x895a,	// (0x00045f01) main_cset6_slider_pane_g14

0x8966,	// (0x00045f0d) main_cset6_slider_pane_g15_ParamLimits

0x8966,	// (0x00045f0d) main_cset6_slider_pane_g15

0x897e,	// (0x00045f25) main_cset6_slider_pane_g16_ParamLimits

0x897e,	// (0x00045f25) main_cset6_slider_pane_g16

0x898c,	// (0x00045f33) main_cset6_slider_pane_g17_ParamLimits

0x898c,	// (0x00045f33) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0004d139) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0004d139) main_cset6_slider_pane_g

0xdefc,	// (0x0004b4a3) main_cset6_slider_pane_t1_ParamLimits

0xdefc,	// (0x0004b4a3) main_cset6_slider_pane_t1

0x89b2,	// (0x00045f59) main_cset6_slider_pane_t2_ParamLimits

0x89b2,	// (0x00045f59) main_cset6_slider_pane_t2

0x89dd,	// (0x00045f84) main_cset6_slider_pane_t3_ParamLimits

0x89dd,	// (0x00045f84) main_cset6_slider_pane_t3

0x8a08,	// (0x00045faf) main_cset6_slider_pane_t4_ParamLimits

0x8a08,	// (0x00045faf) main_cset6_slider_pane_t4

0x8a33,	// (0x00045fda) main_cset6_slider_pane_t5_ParamLimits

0x8a33,	// (0x00045fda) main_cset6_slider_pane_t5

0xdf3d,	// (0x0004b4e4) main_cset6_slider_pane_t7_ParamLimits

0xdf3d,	// (0x0004b4e4) main_cset6_slider_pane_t7

0x8a60,	// (0x00046007) main_cset6_slider_pane_t8_ParamLimits

0x8a60,	// (0x00046007) main_cset6_slider_pane_t8

0x8a84,	// (0x0004602b) main_cset6_slider_pane_t9_ParamLimits

0x8a84,	// (0x0004602b) main_cset6_slider_pane_t9

0x8aa8,	// (0x0004604f) main_cset6_slider_pane_t10_ParamLimits

0x8aa8,	// (0x0004604f) main_cset6_slider_pane_t10

0x8acc,	// (0x00046073) main_cset6_slider_pane_t11_ParamLimits

0x8acc,	// (0x00046073) main_cset6_slider_pane_t11

0xdf73,	// (0x0004b51a) main_cset6_slider_pane_t14_ParamLimits

0xdf73,	// (0x0004b51a) main_cset6_slider_pane_t14

0xdfac,	// (0x0004b553) main_cset6_slider_pane_t15_ParamLimits

0xdfac,	// (0x0004b553) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0004d15e) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0004d15e) main_cset6_slider_pane_t

0xdd83,	// (0x0004b32a) cset_slider_pane_g1_copy1

0xdd8c,	// (0x0004b333) cset_slider_pane_g2_copy1

0xdd95,	// (0x0004b33c) cset_slider_pane_g3_copy1

0x9fb5,	// (0x0004755c) bg_popup_sub_pane_cp011_copy1

0xdfe5,	// (0x0004b58c) main_cset_text_pane_g1_copy1

0xd8bf,	// (0x0004ae66) main_cset_text_pane_t1_copy1

0xd8cd,	// (0x0004ae74) main_cset_text_pane_t2_copy1

0xd8db,	// (0x0004ae82) main_cset_text_pane_t3_copy1

0xd8e9,	// (0x0004ae90) main_cset_text_pane_t4_copy1

0xd8f7,	// (0x0004ae9e) main_cset_text_pane_t5_copy1

0xdfed,	// (0x0004b594) main_cset_text_pane_t6_copy1

0xdffb,	// (0x0004b5a2) main_cset_text_pane_t7_copy1

0x8af2,	// (0x00046099) main_cset_text2_pane_t1_copy1

0xae38,	// (0x000483df) main_ncimui_pane

0x5482,	// (0x00042a29) popup_query_ncimui_window_ParamLimits

0x5482,	// (0x00042a29) popup_query_ncimui_window

0x101c,	// (0x0003e5c3) field_cale_ev2_pane_g4_ParamLimits

0x101c,	// (0x0003e5c3) field_cale_ev2_pane_g4

0x6d70,	// (0x00044317) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6d70,	// (0x00044317) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0004ce3c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0004ce3c) cell_video_dialer_keypad_pane_g

0x6d88,	// (0x0004432f) cell_video_dialer_keypad_pane_t1

0x9fb5,	// (0x0004755c) bg_popup_window_pane_cp012

0xb014,	// (0x000485bb) heading_pane_cp06

0xe027,	// (0x0004b5ce) ncim_query_content_pane

0x9fb5,	// (0x0004755c) bg_popup_heading_pane_cp01

0xe02f,	// (0x0004b5d6) ncim_heading_pane_t1

0xe03d,	// (0x0004b5e4) ncim_indicator_popup_pane

0xe04f,	// (0x0004b5f6) ncim_query_button_pane

0xe063,	// (0x0004b60a) ncim_query_content_pane_t1

0xe075,	// (0x0004b61c) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0004d1a2) ncim_query_content_pane_t

0xe0af,	// (0x0004b656) ncim_query_list_pane

0xe0c1,	// (0x0004b668) ncim_query_popup_pane

0xe03d,	// (0x0004b5e4) ncim_indicator_popup_pane_ParamLimits

0x8c4c,	// (0x000461f3) ncim_query_content_pane_g1_ParamLimits

0x8c4c,	// (0x000461f3) ncim_query_content_pane_g1

0xe063,	// (0x0004b60a) ncim_query_content_pane_t1_ParamLimits

0xe075,	// (0x0004b61c) ncim_query_content_pane_t2_ParamLimits

0x8c58,	// (0x000461ff) ncim_query_content_pane_t3_ParamLimits

0x8c58,	// (0x000461ff) ncim_query_content_pane_t3

0x8c75,	// (0x0004621c) ncim_query_content_pane_t4_ParamLimits

0x8c75,	// (0x0004621c) ncim_query_content_pane_t4

0x8c92,	// (0x00046239) ncim_query_content_pane_t5_ParamLimits

0x8c92,	// (0x00046239) ncim_query_content_pane_t5

0xe087,	// (0x0004b62e) ncim_query_content_pane_t6_ParamLimits

0xe087,	// (0x0004b62e) ncim_query_content_pane_t6

0xfbfb,	// (0x0004d1a2) ncim_query_content_pane_t_ParamLimits

0xe0af,	// (0x0004b656) ncim_query_list_pane_ParamLimits

0xe0c1,	// (0x0004b668) ncim_query_popup_pane_ParamLimits

0xe0d5,	// (0x0004b67c) wait_bar_pane_cp04

0x9fb5,	// (0x0004755c) input_focus_pane_cp011

0xe0dd,	// (0x0004b684) ncim_query_popup_pane_t1

0xe0eb,	// (0x0004b692) ncim_list_query_list_pane_ParamLimits

0xe0eb,	// (0x0004b692) ncim_list_query_list_pane

0x9fb5,	// (0x0004755c) bg_button_pane_cp027

0xe0fe,	// (0x0004b6a5) ncim_query_button_pane_g1

0x9fb5,	// (0x0004755c) list_highlight_pane_cp012

0xe108,	// (0x0004b6af) ncim_list_query_list_pane_g1

0xe110,	// (0x0004b6b7) ncim_list_query_list_pane_t1

0x73f9,	// (0x000449a0) cam4_indicators_pane_g3_ParamLimits

0x73f9,	// (0x000449a0) cam4_indicators_pane_g3

0x74fe,	// (0x00044aa5) vid4_indicators_pane_g5_ParamLimits

0x74fe,	// (0x00044aa5) vid4_indicators_pane_g5

0x8364,	// (0x0004590b) vid4_progress_pane_g5_ParamLimits

0x8364,	// (0x0004590b) vid4_progress_pane_g5

0x8b38,	// (0x000460df) main_ncimui_pane_g1

0x8ba0,	// (0x00046147) ncimui_group_query_pane_ParamLimits

0x8ba0,	// (0x00046147) ncimui_group_query_pane

0x8be8,	// (0x0004618f) ncimui_list_pane_ParamLimits

0x8be8,	// (0x0004618f) ncimui_list_pane

0x8c0f,	// (0x000461b6) ncimui_text_pane_ParamLimits

0x8c0f,	// (0x000461b6) ncimui_text_pane

0x8caf,	// (0x00046256) ncimui_text_pane_t1_ParamLimits

0x8caf,	// (0x00046256) ncimui_text_pane_t1

0xe11e,	// (0x0004b6c5) ncimui_list_single_graphic_pane_ParamLimits

0xe11e,	// (0x0004b6c5) ncimui_list_single_graphic_pane

0x8cce,	// (0x00046275) ncimui_query_pane_ParamLimits

0x8cce,	// (0x00046275) ncimui_query_pane

0x9fb5,	// (0x0004755c) list_highlight_pane_cp013

0xe12e,	// (0x0004b6d5) ncim_list_query_list_pane_t1_copy1

0xe108,	// (0x0004b6af) ncim_list_single_graphic_pane_g1

0xe13c,	// (0x0004b6e3) ncim_query_button_pane_cp01

0xe148,	// (0x0004b6ef) ncim_query_entry_pane_ParamLimits

0xe148,	// (0x0004b6ef) ncim_query_entry_pane

0xe15b,	// (0x0004b702) ncimui_query_pane_g1

0xe167,	// (0x0004b70e) ncimui_query_pane_t1_ParamLimits

0xe167,	// (0x0004b70e) ncimui_query_pane_t1

0xae38,	// (0x000483df) input_focus_pane_cp012

0xe180,	// (0x0004b727) ncim_query_entry_pane_t1

0xa73c,	// (0x00047ce3) main_im_pane_ParamLimits

0xae38,	// (0x000483df) main_mobtv_pane_ParamLimits

0xae38,	// (0x000483df) main_mobtv_pane

0x899a,	// (0x00045f41) main_cset6_slider_pane_g18_ParamLimits

0x899a,	// (0x00045f41) main_cset6_slider_pane_g18

0x89a6,	// (0x00045f4d) main_cset6_slider_pane_g19_ParamLimits

0x89a6,	// (0x00045f4d) main_cset6_slider_pane_g19

0xd600,	// (0x0004aba7) bg_main_mobtv_pane_ParamLimits

0xd600,	// (0x0004aba7) bg_main_mobtv_pane

0x8ce1,	// (0x00046288) main_mobtv_info_pane

0x8cec,	// (0x00046293) main_mobtv_loading_pane_ParamLimits

0x8cec,	// (0x00046293) main_mobtv_loading_pane

0xe192,	// (0x0004b739) main_mobtv_pg_channel_list_pane

0xe19c,	// (0x0004b743) main_mobtv_pg_hdr_pane

0x8cf9,	// (0x000462a0) main_mobtv_programe_curr_pane_ParamLimits

0x8cf9,	// (0x000462a0) main_mobtv_programe_curr_pane

0x8d06,	// (0x000462ad) main_mobtv_programe_next_pane_ParamLimits

0x8d06,	// (0x000462ad) main_mobtv_programe_next_pane

0xe1a5,	// (0x0004b74c) popup_mobtv_noti_window

0xcbaf,	// (0x0004a156) main_tv_pg_hdr_pane_g1

0xe1ad,	// (0x0004b754) main_tv_pg_hdr_pane_g2

0xe1b5,	// (0x0004b75c) main_tv_pg_hdr_pane_g3

0xe1bd,	// (0x0004b764) main_tv_pg_hdr_pane_g4

0xe1c5,	// (0x0004b76c) main_tv_pg_hdr_pane_g5

0xe1cf,	// (0x0004b776) main_tv_pg_hdr_pane_g6

0xe1d9,	// (0x0004b780) main_tv_pg_hdr_pane_g7

0xe1e3,	// (0x0004b78a) main_tv_pg_hdr_pane_g8

0xe1ed,	// (0x0004b794) main_tv_pg_hdr_pane_g9

0xe1f7,	// (0x0004b79e) main_tv_pg_hdr_pane_g10

0xe201,	// (0x0004b7a8) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0004d1af) main_tv_pg_hdr_pane_g

0xe20b,	// (0x0004b7b2) main_tv_pg_hdr_pane_t1

0xe219,	// (0x0004b7c0) main_tv_pg_hdr_pane_t2

0xe227,	// (0x0004b7ce) main_tv_pg_hdr_pane_t3

0xe237,	// (0x0004b7de) main_tv_pg_hdr_pane_t4

0xe247,	// (0x0004b7ee) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0004d1c6) main_tv_pg_hdr_pane_t

0xe257,	// (0x0004b7fe) single_mobtv_pg_channel_pane_ParamLimits

0xe257,	// (0x0004b7fe) single_mobtv_pg_channel_pane

0xe269,	// (0x0004b810) single_mobtv_pg_channel_table_pane

0xe272,	// (0x0004b819) single_mobtv_pg_channel_thumb_pane

0xe27b,	// (0x0004b822) single_tv_pg_channel_pane_g1

0xe284,	// (0x0004b82b) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0004d1d1) single_tv_pg_channel_pane_g

0xce0f,	// (0x0004a3b6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce0f,	// (0x0004a3b6) bg_single_mobtv_pg_channel_thumb_pane

0xe28d,	// (0x0004b834) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe28d,	// (0x0004b834) single_mobtv_pg_channel_thumb_pane_g1

0xe29b,	// (0x0004b842) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe29b,	// (0x0004b842) single_mobtv_pg_channel_thumb_pane_g2

0xe2a7,	// (0x0004b84e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2a7,	// (0x0004b84e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0004d1d6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0004d1d6) single_mobtv_pg_channel_thumb_pane_g

0xe2b3,	// (0x0004b85a) single_mobtv_pg_channel_thumb_pane_t1

0xe2c1,	// (0x0004b868) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0004d1dd) single_mobtv_pg_channel_thumb_pane_t

0xcbaf,	// (0x0004a156) bg_single_mobtv_pg_channel_table_pane_g1

0xcbaf,	// (0x0004a156) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0004cc83) bg_single_mobtv_pg_channel_table_pane_g

0xe2cf,	// (0x0004b876) single_mobtv_pg_channel_table_pane_t1

0xe2dd,	// (0x0004b884) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0004d1e2) single_mobtv_pg_channel_table_pane_t

0x8d1b,	// (0x000462c2) main_mobtv_info_pane_g1_ParamLimits

0x8d1b,	// (0x000462c2) main_mobtv_info_pane_g1

0x8d37,	// (0x000462de) main_mobtv_info_pane_t1_ParamLimits

0x8d37,	// (0x000462de) main_mobtv_info_pane_t1

0x8daf,	// (0x00046356) main_mobtv_info_pane_t2_ParamLimits

0x8daf,	// (0x00046356) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0004d1ec) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0004d1ec) main_mobtv_info_pane_t

0x8e3e,	// (0x000463e5) wait_bar_pane_cp05

0x8e50,	// (0x000463f7) main_mobtv_loading_pane_g1_ParamLimits

0x8e50,	// (0x000463f7) main_mobtv_loading_pane_g1

0x8e5e,	// (0x00046405) main_mobtv_loading_pane_g2_ParamLimits

0x8e5e,	// (0x00046405) main_mobtv_loading_pane_g2

0x8e6a,	// (0x00046411) main_mobtv_loading_pane_g3_ParamLimits

0x8e6a,	// (0x00046411) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0004d1f3) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0004d1f3) main_mobtv_loading_pane_g

0xe2eb,	// (0x0004b892) main_mobtv_loading_pane_t1_ParamLimits

0xe2eb,	// (0x0004b892) main_mobtv_loading_pane_t1

0xe303,	// (0x0004b8aa) main_mobtv_loading_pane_t2_ParamLimits

0xe303,	// (0x0004b8aa) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0004d1fa) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0004d1fa) main_mobtv_loading_pane_t

0x8e78,	// (0x0004641f) wait_bar_pane_cp06_ParamLimits

0x8e78,	// (0x0004641f) wait_bar_pane_cp06

0xe327,	// (0x0004b8ce) main_mobtv_programe_curr_pane_t1

0xe335,	// (0x0004b8dc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0004d1ff) main_mobtv_programe_curr_pane_t

0xe343,	// (0x0004b8ea) main_mobtv_programe_next_pane_t1

0xe351,	// (0x0004b8f8) main_mobtv_programe_next_pane_t2

0xe35f,	// (0x0004b906) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0004d204) main_mobtv_programe_next_pane_t

0x9fb5,	// (0x0004755c) bg_popup_mobtv_noti_window_pane

0xe36d,	// (0x0004b914) popup_mobtv_noti_window_g1

0xe375,	// (0x0004b91c) popup_mobtv_noti_window_t1

0xe383,	// (0x0004b92a) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0004d20b) popup_mobtv_noti_window_t

0xcbaf,	// (0x0004a156) bg_popup_mobtv_noti_window_pane_g1

0x9fb5,	// (0x0004755c) sc_clock_pane

0x9fb5,	// (0x0004755c) main_fs_bigclock_pane

0x854b,	// (0x00045af2) blid2_tripm_pane_t4_ParamLimits

0x854b,	// (0x00045af2) blid2_tripm_pane_t4

0x8e84,	// (0x0004642b) sc_clock_pane_g1_ParamLimits

0x8e84,	// (0x0004642b) sc_clock_pane_g1

0x8e92,	// (0x00046439) sc_clock_pane_t1_ParamLimits

0x8e92,	// (0x00046439) sc_clock_pane_t1

0x8ea5,	// (0x0004644c) sc_clock_pane_t2_ParamLimits

0x8ea5,	// (0x0004644c) sc_clock_pane_t2

0x8eb7,	// (0x0004645e) sc_clock_pane_t3_ParamLimits

0x8eb7,	// (0x0004645e) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0004d210) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0004d210) sc_clock_pane_t

0x96ab,	// (0x00046c52) main_fs_bigclock_indicator_pane_ParamLimits

0x96ab,	// (0x00046c52) main_fs_bigclock_indicator_pane

0x8f40,	// (0x000464e7) main_fs_bigclock_pane_g1_ParamLimits

0x8f40,	// (0x000464e7) main_fs_bigclock_pane_g1

0x96b7,	// (0x00046c5e) main_fs_bigclock_pane_t1_ParamLimits

0x96b7,	// (0x00046c5e) main_fs_bigclock_pane_t1

0x96c9,	// (0x00046c70) main_fs_bigclock_pane_t2_ParamLimits

0x96c9,	// (0x00046c70) main_fs_bigclock_pane_t2

0x96db,	// (0x00046c82) main_fs_bigclock_pane_t3_ParamLimits

0x96db,	// (0x00046c82) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0004d41a) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004d41a) main_fs_bigclock_pane_t

0xec93,	// (0x0004c23a) main_fs_bigclock_indicator_pane_g1

0xe057,	// (0x0004b5fe) ncim_query_content_pane_g2_ParamLimits

0xe057,	// (0x0004b5fe) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0004d19d) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0004d19d) ncim_query_content_pane_g

0x8ecb,	// (0x00046472) sc_clock_pane_t4_ParamLimits

0x8ecb,	// (0x00046472) sc_clock_pane_t4

0xae38,	// (0x000483df) main_radioblah_pane

0xd573,	// (0x0004ab1a) cell_call4_button_pane_t1_copy1_ParamLimits

0xd573,	// (0x0004ab1a) cell_call4_button_pane_t1_copy1

0x8b52,	// (0x000460f9) main_ncimui_pane_t1_ParamLimits

0x8b52,	// (0x000460f9) main_ncimui_pane_t1

0x8b6c,	// (0x00046113) main_ncimui_pane_t2_ParamLimits

0x8b6c,	// (0x00046113) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0004d196) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0004d196) main_ncimui_pane_t

0xe4c8,	// (0x0004ba6f) main_radioblah_anim_pane_ParamLimits

0xe4c8,	// (0x0004ba6f) main_radioblah_anim_pane

0xe4d9,	// (0x0004ba80) main_radioblah_info_pane_ParamLimits

0xe4d9,	// (0x0004ba80) main_radioblah_info_pane

0xe4ed,	// (0x0004ba94) main_radioblah_pane_t1_ParamLimits

0xe4ed,	// (0x0004ba94) main_radioblah_pane_t1

0xe509,	// (0x0004bab0) main_radioblah_pane_t2_ParamLimits

0xe509,	// (0x0004bab0) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0004d231) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0004d231) main_radioblah_pane_t

0x8f92,	// (0x00046539) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8f92,	// (0x00046539) main_radioblah_rocker_ctrl_pane

0xe551,	// (0x0004baf8) main_radioblah_info_pane_t1_ParamLimits

0xe551,	// (0x0004baf8) main_radioblah_info_pane_t1

0x8fd7,	// (0x0004657e) main_radioblah_info_pane_t2_ParamLimits

0x8fd7,	// (0x0004657e) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0004d23a) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0004d23a) main_radioblah_info_pane_t

0xcbaf,	// (0x0004a156) main_radioblah_rocker_ctrl_pane_g1

0x9087,	// (0x0004662e) main_radioblah_rocker_ctrl_pane_g2

0x908f,	// (0x00046636) main_radioblah_rocker_ctrl_pane_g3

0x9097,	// (0x0004663e) main_radioblah_rocker_ctrl_pane_g4

0x909f,	// (0x00046646) main_radioblah_rocker_ctrl_pane_g5

0x90a7,	// (0x0004664e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0004d243) main_radioblah_rocker_ctrl_pane_g

0x8af2,	// (0x00046099) main_cset_text2_pane_t1_copy1_ParamLimits

0x7327,	// (0x000448ce) cam4_image_uncrop_qvga_pane

0x746e,	// (0x00044a15) vid4_image_uncrop_qcif_pane

0x86d9,	// (0x00045c80) cam6_image_uncrop_qvga_pane_ParamLimits

0x86d9,	// (0x00045c80) cam6_image_uncrop_qvga_pane

0xdd2e,	// (0x0004b2d5) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd2e,	// (0x0004b2d5) vid6_image_uncrop_qcif_pane

0x9fb5,	// (0x0004755c) bg_popup_preview_window_pane_cp03

0xe009,	// (0x0004b5b0) list_cset_text2_pane

0xe011,	// (0x0004b5b8) main_cset6_text2_pane_g1

0xe019,	// (0x0004b5c0) main_cset6_text2_pane_t1

0x90af,	// (0x00046656) list_cset_text2_pane_t1_ParamLimits

0x90af,	// (0x00046656) list_cset_text2_pane_t1

0xae38,	// (0x000483df) main_radioblah_pane_ParamLimits

0x8e2a,	// (0x000463d1) main_mobtv_info_pane_t3_ParamLimits

0x8e2a,	// (0x000463d1) main_mobtv_info_pane_t3

0x8f80,	// (0x00046527) main_radioblah_pane_g1

0x8fab,	// (0x00046552) main_radioblah_info_pane_g1

0x902c,	// (0x000465d3) main_radioblah_info_pane_t3_ParamLimits

0x902c,	// (0x000465d3) main_radioblah_info_pane_t3

0x42ef,	// (0x00041896) highlight_cell_cale_month_pane_ParamLimits

0x42ef,	// (0x00041896) highlight_cell_cale_month_pane

0x9fb5,	// (0x0004755c) main_phob_fisheye_pane

0xceeb,	// (0x0004a492) scroll_pane_cp0031_ParamLimits

0xceeb,	// (0x0004a492) scroll_pane_cp0031

0xde6c,	// (0x0004b413) wait_bar_pane_cp08_ParamLimits

0x88b3,	// (0x00045e5a) cset_list_set_pane_copy1_ParamLimits

0xe58b,	// (0x0004bb32) highlight_cell_cale_month_pane_g1

0x90d6,	// (0x0004667d) highlight_cell_cale_month_pane_t1

0xdadf,	// (0x0004b086) list_gen_pane_cp01

0xd73a,	// (0x0004ace1) scroll_pane_01

0xa6e1,	// (0x00047c88) list_single_double_fisheye_pane

0x1523,	// (0x0003eaca) list_double_fisheye_pane_g1_ParamLimits

0x1523,	// (0x0003eaca) list_double_fisheye_pane_g1

0x152f,	// (0x0003ead6) list_double_fisheye_pane_g2_ParamLimits

0x152f,	// (0x0003ead6) list_double_fisheye_pane_g2

0xa6ea,	// (0x00047c91) list_double_fisheye_pane_g3_ParamLimits

0xa6ea,	// (0x00047c91) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0004d250) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0004d250) list_double_fisheye_pane_g

0x1560,	// (0x0003eb07) list_double_fisheye_pane_t1_ParamLimits

0x1560,	// (0x0003eb07) list_double_fisheye_pane_t1

0x157b,	// (0x0003eb22) list_double_fisheye_pane_t2_ParamLimits

0x157b,	// (0x0003eb22) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0004d25b) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0004d25b) list_double_fisheye_pane_t

0x9fb5,	// (0x0004755c) main_call5_pane

0x8ef1,	// (0x00046498) sc_swipe_pane_ParamLimits

0x8ef1,	// (0x00046498) sc_swipe_pane

0x90f0,	// (0x00046697) call5_image_pane_ParamLimits

0x90f0,	// (0x00046697) call5_image_pane

0x9100,	// (0x000466a7) call5_swipe_1_pane_ParamLimits

0x9100,	// (0x000466a7) call5_swipe_1_pane

0x910c,	// (0x000466b3) call5_swipe_2_pane_ParamLimits

0x910c,	// (0x000466b3) call5_swipe_2_pane

0x9126,	// (0x000466cd) popup_call5_audio_first_window_ParamLimits

0x9126,	// (0x000466cd) popup_call5_audio_first_window

0xce0f,	// (0x0004a3b6) call5_swipe_1_pane_g1_ParamLimits

0xce0f,	// (0x0004a3b6) call5_swipe_1_pane_g1

0xe593,	// (0x0004bb3a) call5_swipe_1_pane_g2_ParamLimits

0xe593,	// (0x0004bb3a) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0004d260) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0004d260) call5_swipe_1_pane_g

0xe59f,	// (0x0004bb46) call5_swipe_1_pane_t1_ParamLimits

0xe59f,	// (0x0004bb46) call5_swipe_1_pane_t1

0xce0f,	// (0x0004a3b6) call5_swipe_2_pane_g1_ParamLimits

0xce0f,	// (0x0004a3b6) call5_swipe_2_pane_g1

0xe5b4,	// (0x0004bb5b) call5_swipe_2_pane_g2_ParamLimits

0xe5b4,	// (0x0004bb5b) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0004d265) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0004d265) call5_swipe_2_pane_g

0xe5c0,	// (0x0004bb67) call5_swipe_2_pane_t1_ParamLimits

0xe5c0,	// (0x0004bb67) call5_swipe_2_pane_t1

0xe5d5,	// (0x0004bb7c) sc_swipe_pane_g1_ParamLimits

0xe5d5,	// (0x0004bb7c) sc_swipe_pane_g1

0xe5e2,	// (0x0004bb89) sc_swipe_pane_g2_ParamLimits

0xe5e2,	// (0x0004bb89) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0004d26a) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0004d26a) sc_swipe_pane_g

0xe5ee,	// (0x0004bb95) sc_swipe_pane_t1_ParamLimits

0xe5ee,	// (0x0004bb95) sc_swipe_pane_t1

0x9fb5,	// (0x0004755c) main_cmail_launcher_pane

0x9134,	// (0x000466db) aid_size_cell_cmail_l_ParamLimits

0x9134,	// (0x000466db) aid_size_cell_cmail_l

0x9144,	// (0x000466eb) grid_cmail_l_pane_ParamLimits

0x9144,	// (0x000466eb) grid_cmail_l_pane

0x9154,	// (0x000466fb) cell_cmail_l_pane_ParamLimits

0x9154,	// (0x000466fb) cell_cmail_l_pane

0x9168,	// (0x0004670f) cell_cmail_l_pane_g1_ParamLimits

0x9168,	// (0x0004670f) cell_cmail_l_pane_g1

0x9179,	// (0x00046720) cell_cmail_l_pane_t1_ParamLimits

0x9179,	// (0x00046720) cell_cmail_l_pane_t1

0xe603,	// (0x0004bbaa) cell_cmail_l_pane_t2_ParamLimits

0xe603,	// (0x0004bbaa) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0004d26f) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0004d26f) cell_cmail_l_pane_t

0xae38,	// (0x000483df) grid_highlight_pane_cp018_ParamLimits

0xae38,	// (0x000483df) grid_highlight_pane_cp018

0x220a,	// (0x0003f7b1) main2_pane_ParamLimits

0x220a,	// (0x0003f7b1) main2_pane

0xa7e7,	// (0x00047d8e) popup_sp_fs_action_menu_bg_pane_g1

0xa7ef,	// (0x00047d96) popup_sp_fs_action_menu_bg_pane_g2

0xa7f7,	// (0x00047d9e) popup_sp_fs_action_menu_bg_pane_g3

0xa7ff,	// (0x00047da6) popup_sp_fs_action_menu_bg_pane_g4

0xa807,	// (0x00047dae) popup_sp_fs_action_menu_bg_pane_g5

0xa80f,	// (0x00047db6) popup_sp_fs_action_menu_bg_pane_g6

0xa817,	// (0x00047dbe) popup_sp_fs_action_menu_bg_pane_g7

0xa81f,	// (0x00047dc6) popup_sp_fs_action_menu_bg_pane_g8

0xa827,	// (0x00047dce) popup_sp_fs_action_menu_bg_pane_g9

0xa82f,	// (0x00047dd6) popup_sp_fs_action_menu_bg_pane_g10

0xa82f,	// (0x00047dd6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0004c731) popup_sp_fs_action_menu_bg_pane_g

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t3_g3_g1

0x0cd4,	// (0x0003e27b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0cd4,	// (0x0003e27b) list_medium_line_x2_t3_g3_g2

0x0ce0,	// (0x0003e287) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0ce0,	// (0x0003e287) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0004c7df) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0004c7df) list_medium_line_x2_t3_g3_g

0x0cec,	// (0x0003e293) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0cec,	// (0x0003e293) list_medium_line_x2_t3_g3_t1

0x0d01,	// (0x0003e2a8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d01,	// (0x0003e2a8) list_medium_line_x2_t3_g3_t2

0x0d15,	// (0x0003e2bc) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d15,	// (0x0003e2bc) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0004c7e6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0004c7e6) list_medium_line_x2_t3_g3_t

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t3_g2_g1

0x0ce0,	// (0x0003e287) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0ce0,	// (0x0003e287) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0004c7ed) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0004c7ed) list_medium_line_x2_t3_g2_g

0x0d2a,	// (0x0003e2d1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0d2a,	// (0x0003e2d1) list_medium_line_x2_t3_g2_t1

0x0d40,	// (0x0003e2e7) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0d40,	// (0x0003e2e7) list_medium_line_x2_t3_g2_t2

0x0d52,	// (0x0003e2f9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0d52,	// (0x0003e2f9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0004c7f2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0004c7f2) list_medium_line_x2_t3_g2_t

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t4_g4_g1

0x0d70,	// (0x0003e317) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0d70,	// (0x0003e317) list_medium_line_x2_t4_g4_g2

0x0cd4,	// (0x0003e27b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0cd4,	// (0x0003e27b) list_medium_line_x2_t4_g4_g3

0x0d7c,	// (0x0003e323) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0d7c,	// (0x0003e323) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0004c7f9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0004c7f9) list_medium_line_x2_t4_g4_g

0x0d88,	// (0x0003e32f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0d88,	// (0x0003e32f) list_medium_line_x2_t4_g4_t1

0x0d9f,	// (0x0003e346) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0d9f,	// (0x0003e346) list_medium_line_x2_t4_g4_t2

0x0db4,	// (0x0003e35b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0db4,	// (0x0003e35b) list_medium_line_x2_t4_g4_t3

0x0dc6,	// (0x0003e36d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0dc6,	// (0x0003e36d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0004c802) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0004c802) list_medium_line_x2_t4_g4_t

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t2_g4_g1

0x0d70,	// (0x0003e317) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0d70,	// (0x0003e317) list_medium_line_x2_t2_g4_g2

0x0cd4,	// (0x0003e27b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0cd4,	// (0x0003e27b) list_medium_line_x2_t2_g4_g3

0x0ce0,	// (0x0003e287) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0ce0,	// (0x0003e287) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0004c869) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0004c869) list_medium_line_x2_t2_g4_g

0x0dd8,	// (0x0003e37f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0dd8,	// (0x0003e37f) list_medium_line_x2_t2_g4_t1

0x0d15,	// (0x0003e2bc) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d15,	// (0x0003e2bc) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0004c872) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0004c872) list_medium_line_x2_t2_g4_t

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t2_g3_g1

0x0cd4,	// (0x0003e27b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0cd4,	// (0x0003e27b) list_medium_line_x2_t2_g3_g2

0x0ce0,	// (0x0003e287) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0ce0,	// (0x0003e287) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0004c7df) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0004c7df) list_medium_line_x2_t2_g3_g

0x0ded,	// (0x0003e394) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0ded,	// (0x0003e394) list_medium_line_x2_t2_g3_t1

0x0d15,	// (0x0003e2bc) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d15,	// (0x0003e2bc) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0004c877) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0004c877) list_medium_line_x2_t2_g3_t

0x44c7,	// (0x00041a6e) main_sp_fs_list_pane_ParamLimits

0x44c7,	// (0x00041a6e) main_sp_fs_list_pane

0x44d3,	// (0x00041a7a) sp_fs_scroll_pane_ParamLimits

0x44d3,	// (0x00041a7a) sp_fs_scroll_pane

0x0e1b,	// (0x0003e3c2) list_medium_line_x2_t3_t1

0x0e2b,	// (0x0003e3d2) list_medium_line_x2_t3_t2

0x0e39,	// (0x0003e3e0) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0004c8c2) list_medium_line_x2_t3_t

0x0e47,	// (0x0003e3ee) list_medium_line_x3_t4_t1

0x0e57,	// (0x0003e3fe) list_medium_line_x3_t4_t2

0x0e65,	// (0x0003e40c) list_medium_line_x3_t4_t3

0x0e39,	// (0x0003e3e0) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0004c8c9) list_medium_line_x3_t4_t

0x0e73,	// (0x0003e41a) list_medium_line_x4_t5_t1

0x0e83,	// (0x0003e42a) list_medium_line_x4_t5_t2

0x0e65,	// (0x0003e40c) list_medium_line_x4_t5_t3

0x0e91,	// (0x0003e438) list_medium_line_x4_t5_t4

0x0e39,	// (0x0003e3e0) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0004c8d2) list_medium_line_x4_t5_t

0x0cc8,	// (0x0003e26f) list_medium_line_t4_g4_g1_ParamLimits

0x0cc8,	// (0x0003e26f) list_medium_line_t4_g4_g1

0x0d7c,	// (0x0003e323) list_medium_line_t4_g4_g2_ParamLimits

0x0d7c,	// (0x0003e323) list_medium_line_t4_g4_g2

0x0e9f,	// (0x0003e446) list_medium_line_t4_g4_g3_ParamLimits

0x0e9f,	// (0x0003e446) list_medium_line_t4_g4_g3

0x0ce0,	// (0x0003e287) list_medium_line_t4_g4_g4_ParamLimits

0x0ce0,	// (0x0003e287) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0004c8dd) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0004c8dd) list_medium_line_t4_g4_g

0x0eab,	// (0x0003e452) list_medium_line_t4_g4_t1_ParamLimits

0x0eab,	// (0x0003e452) list_medium_line_t4_g4_t1

0x0ec0,	// (0x0003e467) list_medium_line_t4_g4_t2_ParamLimits

0x0ec0,	// (0x0003e467) list_medium_line_t4_g4_t2

0x0ed6,	// (0x0003e47d) list_medium_line_t4_g4_t3_ParamLimits

0x0ed6,	// (0x0003e47d) list_medium_line_t4_g4_t3

0x0d15,	// (0x0003e2bc) list_medium_line_t4_g4_t4_ParamLimits

0x0d15,	// (0x0003e2bc) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0004c8e6) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0004c8e6) list_medium_line_t4_g4_t

0x45ca,	// (0x00041b71) chi_dic_find_pane_g1

0x543f,	// (0x000429e6) main_tport_pane

0x119c,	// (0x0003e743) list_medium_line_plain_t1

0x11aa,	// (0x0003e751) list_medium_line_t2_g2_g1_ParamLimits

0x11aa,	// (0x0003e751) list_medium_line_t2_g2_g1

0x11b6,	// (0x0003e75d) list_medium_line_t2_g2_g2_ParamLimits

0x11b6,	// (0x0003e75d) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004cfa7) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004cfa7) list_medium_line_t2_g2_g

0x11c2,	// (0x0003e769) list_medium_line_t2_g2_t1_ParamLimits

0x11c2,	// (0x0003e769) list_medium_line_t2_g2_t1

0x11dc,	// (0x0003e783) list_medium_line_t2_g2_t2_ParamLimits

0x11dc,	// (0x0003e783) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004cfac) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004cfac) list_medium_line_t2_g2_t

0x13fb,	// (0x0003e9a2) aid_sp_fs_list_icon_a_sm

0x1403,	// (0x0003e9aa) aid_sp_fs_list_icon_d

0x140b,	// (0x0003e9b2) aid_sp_fs_text_primary

0x1414,	// (0x0003e9bb) aid_sp_fs_text_secondary

0xec8a,	// (0x0004c231) list_medium_line

0xec8a,	// (0x0004c231) list_medium_line_g2

0xec8a,	// (0x0004c231) list_medium_line_g3

0xec8a,	// (0x0004c231) list_medium_line_plain

0xec8a,	// (0x0004c231) list_medium_line_plain_t2

0xec8a,	// (0x0004c231) list_medium_line_plain_t3

0xec8a,	// (0x0004c231) list_medium_line_right_icon

0xec8a,	// (0x0004c231) list_medium_line_right_iconx2

0xec8a,	// (0x0004c231) list_medium_line_t2

0xec8a,	// (0x0004c231) list_medium_line_t2_g2

0xec8a,	// (0x0004c231) list_medium_line_t2_g3

0xec8a,	// (0x0004c231) list_medium_line_t2_right_icon

0xec8a,	// (0x0004c231) list_medium_line_t2_right_iconx2

0xec8a,	// (0x0004c231) list_medium_line_t3

0xec8a,	// (0x0004c231) list_medium_line_t3_g2

0xec8a,	// (0x0004c231) list_medium_line_t3_g3

0xec8a,	// (0x0004c231) list_medium_line_t3_right_iconx2

0x141d,	// (0x0003e9c4) list_medium_line_t4_g4

0x1426,	// (0x0003e9cd) list_medium_line_x2

0x1426,	// (0x0003e9cd) list_medium_line_x2_t2_g2

0x1426,	// (0x0003e9cd) list_medium_line_x2_t2_g3

0x1426,	// (0x0003e9cd) list_medium_line_x2_t2_g4

0x1426,	// (0x0003e9cd) list_medium_line_x2_t3

0x1426,	// (0x0003e9cd) list_medium_line_x2_t3_g2

0x1426,	// (0x0003e9cd) list_medium_line_x2_t3_g3

0x1426,	// (0x0003e9cd) list_medium_line_x2_t3_g4

0x1426,	// (0x0003e9cd) list_medium_line_x2_t4_g2

0x1426,	// (0x0003e9cd) list_medium_line_x2_t4_g4

0x142f,	// (0x0003e9d6) list_medium_line_x3

0x142f,	// (0x0003e9d6) list_medium_line_x3_t4

0x142f,	// (0x0003e9d6) list_medium_line_x3_t4_g4

0x141d,	// (0x0003e9c4) list_medium_line_x4_t4

0x141d,	// (0x0003e9c4) list_medium_line_x4_t4_g7

0x141d,	// (0x0003e9c4) list_medium_line_x4_t5

0x1438,	// (0x0003e9df) list_single_fs_dyc_pane_ParamLimits

0x1438,	// (0x0003e9df) list_single_fs_dyc_pane

0x0cc8,	// (0x0003e26f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0cc8,	// (0x0003e26f) list_medium_line_x4_t4_g7_g1

0x1454,	// (0x0003e9fb) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1454,	// (0x0003e9fb) list_medium_line_x4_t4_g7_g2

0x1460,	// (0x0003ea07) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1460,	// (0x0003ea07) list_medium_line_x4_t4_g7_g3

0x146f,	// (0x0003ea16) list_medium_line_x4_t4_g7_g4_ParamLimits

0x146f,	// (0x0003ea16) list_medium_line_x4_t4_g7_g4

0x147b,	// (0x0003ea22) list_medium_line_x4_t4_g7_g5_ParamLimits

0x147b,	// (0x0003ea22) list_medium_line_x4_t4_g7_g5

0x148a,	// (0x0003ea31) list_medium_line_x4_t4_g7_g6_ParamLimits

0x148a,	// (0x0003ea31) list_medium_line_x4_t4_g7_g6

0x1499,	// (0x0003ea40) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1499,	// (0x0003ea40) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0004d177) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0004d177) list_medium_line_x4_t4_g7_g

0x14a5,	// (0x0003ea4c) list_medium_line_x4_t4_g7_t1_ParamLimits

0x14a5,	// (0x0003ea4c) list_medium_line_x4_t4_g7_t1

0x14ba,	// (0x0003ea61) list_medium_line_x4_t4_g7_t2_ParamLimits

0x14ba,	// (0x0003ea61) list_medium_line_x4_t4_g7_t2

0x14cf,	// (0x0003ea76) list_medium_line_x4_t4_g7_t3_ParamLimits

0x14cf,	// (0x0003ea76) list_medium_line_x4_t4_g7_t3

0x14e4,	// (0x0003ea8b) list_medium_line_x4_t4_g7_t4_ParamLimits

0x14e4,	// (0x0003ea8b) list_medium_line_x4_t4_g7_t4

0x14f6,	// (0x0003ea9d) list_medium_line_x4_t4_g7_t5_ParamLimits

0x14f6,	// (0x0003ea9d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0004d186) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0004d186) list_medium_line_x4_t4_g7_t

0x1508,	// (0x0003eaaf) list_single_dyc_row_pane_ParamLimits

0x1508,	// (0x0003eaaf) list_single_dyc_row_pane

0x90e4,	// (0x0004668b) call5_gesture_pane_ParamLimits

0x90e4,	// (0x0004668b) call5_gesture_pane

0x9118,	// (0x000466bf) call5_windows_pane_ParamLimits

0x9118,	// (0x000466bf) call5_windows_pane

0x918f,	// (0x00046736) call5_swipe_1_pane_cp_ParamLimits

0x918f,	// (0x00046736) call5_swipe_1_pane_cp

0x919b,	// (0x00046742) call5_swipe_2_pane_cp_ParamLimits

0x919b,	// (0x00046742) call5_swipe_2_pane_cp

0xa90a,	// (0x00047eb1) call5_image_pane_cp

0x91a7,	// (0x0004674e) popup_call5_audio_first_window_cp_ParamLimits

0x91a7,	// (0x0004674e) popup_call5_audio_first_window_cp

0xe5d5,	// (0x0004bb7c) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5d5,	// (0x0004bb7c) call5_swipe_1_pane_g1_cp

0xe615,	// (0x0004bbbc) call5_swipe_1_pane_g2_cp

0xe5ee,	// (0x0004bb95) call5_swipe_1_pane_t1_cp_ParamLimits

0xe5ee,	// (0x0004bb95) call5_swipe_1_pane_t1_cp

0xe5d5,	// (0x0004bb7c) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5d5,	// (0x0004bb7c) call5_swipe_2_pane_g1_cp

0xe61d,	// (0x0004bbc4) call5_swipe_2_pane_g2_cp

0xe625,	// (0x0004bbcc) call5_swipe_2_pane_t1_cp_ParamLimits

0xe625,	// (0x0004bbcc) call5_swipe_2_pane_t1_cp

0xae38,	// (0x000483df) main_sp_fs_email_pane

0xe63a,	// (0x0004bbe1) main_sp_fs_listscroll_pane_te

0x159d,	// (0x0003eb44) popup_sp_fs_action_menu_pane_ParamLimits

0x159d,	// (0x0003eb44) popup_sp_fs_action_menu_pane

0xcbaf,	// (0x0004a156) bg_sp_fs_ctrlbar_pane_g1

0xe643,	// (0x0004bbea) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe64c,	// (0x0004bbf3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe655,	// (0x0004bbfc) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbaf,	// (0x0004a156) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0004d274) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc992,	// (0x00049f39) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc992,	// (0x00049f39) bg_sp_fs_ctrlbar_ddmenu_pane

0xe65e,	// (0x0004bc05) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe65e,	// (0x0004bc05) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe66a,	// (0x0004bc11) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe66a,	// (0x0004bc11) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0004d27d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0004d27d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe676,	// (0x0004bc1d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe676,	// (0x0004bc1d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x15df,	// (0x0003eb86) list_medium_line_t2_right_icon_g1

0x15e7,	// (0x0003eb8e) list_medium_line_t2_right_icon_t1

0x15f7,	// (0x0003eb9e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0004d282) list_medium_line_t2_right_icon_t

0xc7a5,	// (0x00049d4c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7a5,	// (0x00049d4c) bg_sp_fs_ctrlbar_pane

0x920c,	// (0x000467b3) main_sp_fs_ctrlbar_button_pane_cp01

0x9214,	// (0x000467bb) main_sp_fs_ctrlbar_ddmenu_pane

0xe6c8,	// (0x0004bc6f) main_sp_fs_ctrlbar_pane_g1

0xe6d4,	// (0x0004bc7b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0004d287) main_sp_fs_ctrlbar_pane_g

0xe6e0,	// (0x0004bc87) main_sp_fs_ctrlbar_pane_t1

0x921e,	// (0x000467c5) main_sp_fs_ctrlbar_pane

0x9234,	// (0x000467db) main_sp_fs_listscroll_pane_te_cp01

0x1605,	// (0x0003ebac) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1605,	// (0x0003ebac) popup_sp_fs_action_menu_pane_cp01

0xae38,	// (0x000483df) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xae38,	// (0x000483df) bg_sp_fs_highlight_list_pane_cp01

0x162f,	// (0x0003ebd6) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x162f,	// (0x0003ebd6) sp_fs_action_menu_list_gene_pane_g1

0xe710,	// (0x0004bcb7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe710,	// (0x0004bcb7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0004d291) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0004d291) sp_fs_action_menu_list_gene_pane_g

0x163e,	// (0x0003ebe5) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x163e,	// (0x0003ebe5) sp_fs_action_menu_list_gene_pane_t1

0x1656,	// (0x0003ebfd) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1656,	// (0x0003ebfd) sp_fs_action_menu_list_gene_pane

0xe71d,	// (0x0004bcc4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe71d,	// (0x0004bcc4) popup_sp_fs_action_menu_bg_pane

0x1673,	// (0x0003ec1a) sp_fs_action_menu_list_pane_ParamLimits

0x1673,	// (0x0003ec1a) sp_fs_action_menu_list_pane

0x1691,	// (0x0003ec38) sp_fs_scroll_pane_cp01_ParamLimits

0x1691,	// (0x0003ec38) sp_fs_scroll_pane_cp01

0x16b7,	// (0x0003ec5e) list_medium_line_plain_t2_t1

0x16c7,	// (0x0003ec6e) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0004d296) list_medium_line_plain_t2_t

0x16d5,	// (0x0003ec7c) list_medium_line_plain_t3_t1

0x16e5,	// (0x0003ec8c) list_medium_line_plain_t3_t2

0x16f3,	// (0x0003ec9a) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0004d29b) list_medium_line_plain_t3_t

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t2_g2_g1

0x0ce0,	// (0x0003e287) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0ce0,	// (0x0003e287) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0004c7ed) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0004c7ed) list_medium_line_x2_t2_g2_g

0x0eab,	// (0x0003e452) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0eab,	// (0x0003e452) list_medium_line_x2_t2_g2_t1

0x0d15,	// (0x0003e2bc) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d15,	// (0x0003e2bc) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0004d2a2) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0004d2a2) list_medium_line_x2_t2_g2_t

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t4_g2_g1

0x1701,	// (0x0003eca8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1701,	// (0x0003eca8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0004d2a7) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0004d2a7) list_medium_line_x2_t4_g2_g

0x1713,	// (0x0003ecba) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1713,	// (0x0003ecba) list_medium_line_x2_t4_g2_t1

0x172d,	// (0x0003ecd4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x172d,	// (0x0003ecd4) list_medium_line_x2_t4_g2_t2

0x1742,	// (0x0003ece9) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1742,	// (0x0003ece9) list_medium_line_x2_t4_g2_t3

0x0d15,	// (0x0003e2bc) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d15,	// (0x0003e2bc) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0004d2ac) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0004d2ac) list_medium_line_x2_t4_g2_t

0x1757,	// (0x0003ecfe) list_medium_line_t3_right_iconx2_g1

0x15df,	// (0x0003eb86) list_medium_line_t3_right_iconx2_g2

0x175f,	// (0x0003ed06) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0004d2b5) list_medium_line_t3_right_iconx2_g

0x1767,	// (0x0003ed0e) list_medium_line_t3_right_iconx2_t1

0x1777,	// (0x0003ed1e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0004d2bc) list_medium_line_t3_right_iconx2_t

0x0cc8,	// (0x0003e26f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0cc8,	// (0x0003e26f) list_medium_line_x3_t4_g4_g1

0x0cd4,	// (0x0003e27b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0cd4,	// (0x0003e27b) list_medium_line_x3_t4_g4_g2

0x0d7c,	// (0x0003e323) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0d7c,	// (0x0003e323) list_medium_line_x3_t4_g4_g3

0x1785,	// (0x0003ed2c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1785,	// (0x0003ed2c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0004d2c1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0004d2c1) list_medium_line_x3_t4_g4_g

0x1791,	// (0x0003ed38) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1791,	// (0x0003ed38) list_medium_line_x3_t4_g4_t1

0x17a8,	// (0x0003ed4f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x17a8,	// (0x0003ed4f) list_medium_line_x3_t4_g4_t2

0x17bd,	// (0x0003ed64) list_medium_line_x3_t4_g4_t3_ParamLimits

0x17bd,	// (0x0003ed64) list_medium_line_x3_t4_g4_t3

0x17d2,	// (0x0003ed79) list_medium_line_x3_t4_g4_t4_ParamLimits

0x17d2,	// (0x0003ed79) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0004d2ca) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0004d2ca) list_medium_line_x3_t4_g4_t

0x17ef,	// (0x0003ed96) list_single_dyc_row_text_pane_t1_ParamLimits

0x17ef,	// (0x0003ed96) list_single_dyc_row_text_pane_t1

0x1826,	// (0x0003edcd) list_single_dyc_row_text_pane_t2_ParamLimits

0x1826,	// (0x0003edcd) list_single_dyc_row_text_pane_t2

0x189c,	// (0x0003ee43) list_single_dyc_row_text_pane_t3_ParamLimits

0x189c,	// (0x0003ee43) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0004d2d3) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0004d2d3) list_single_dyc_row_text_pane_t

0x196d,	// (0x0003ef14) list_single_dyc_row_pane_g1_ParamLimits

0x196d,	// (0x0003ef14) list_single_dyc_row_pane_g1

0x1979,	// (0x0003ef20) list_single_dyc_row_pane_g2_ParamLimits

0x1979,	// (0x0003ef20) list_single_dyc_row_pane_g2

0x1985,	// (0x0003ef2c) list_single_dyc_row_pane_g3_ParamLimits

0x1985,	// (0x0003ef2c) list_single_dyc_row_pane_g3

0x1991,	// (0x0003ef38) list_single_dyc_row_pane_g4_ParamLimits

0x1991,	// (0x0003ef38) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0004d2e0) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0004d2e0) list_single_dyc_row_pane_g

0x199d,	// (0x0003ef44) list_single_dyc_row_text_pane_ParamLimits

0x199d,	// (0x0003ef44) list_single_dyc_row_text_pane

0x9fb5,	// (0x0004755c) bg_sp_fs_scroll_pane

0xe72b,	// (0x0004bcd2) thumb_sp_fs_scroll_pane

0x11aa,	// (0x0003e751) list_medium_line_g1_ParamLimits

0x11aa,	// (0x0003e751) list_medium_line_g1

0x19bc,	// (0x0003ef63) list_medium_line_t1_ParamLimits

0x19bc,	// (0x0003ef63) list_medium_line_t1

0x0cc8,	// (0x0003e26f) list_medium_line_x2_g1_ParamLimits

0x0cc8,	// (0x0003e26f) list_medium_line_x2_g1

0x0cd4,	// (0x0003e27b) list_medium_line_x2_g2_ParamLimits

0x0cd4,	// (0x0003e27b) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0004d2e9) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0004d2e9) list_medium_line_x2_g

0x19d1,	// (0x0003ef78) list_medium_line_x2_t1_ParamLimits

0x19d1,	// (0x0003ef78) list_medium_line_x2_t1

0x0cc8,	// (0x0003e26f) list_medium_line_x3_g1_ParamLimits

0x0cc8,	// (0x0003e26f) list_medium_line_x3_g1

0x0cd4,	// (0x0003e27b) list_medium_line_x3_g2_ParamLimits

0x0cd4,	// (0x0003e27b) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0004d2e9) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0004d2e9) list_medium_line_x3_g

0x19d1,	// (0x0003ef78) list_medium_line_x3_t1_ParamLimits

0x19d1,	// (0x0003ef78) list_medium_line_x3_t1

0xe734,	// (0x0004bcdb) thumb_sp_fs_scroll_pane_g1

0xe73d,	// (0x0004bce4) thumb_sp_fs_scroll_pane_g2

0xe746,	// (0x0004bced) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004d2ee) thumb_sp_fs_scroll_pane_g

0xe734,	// (0x0004bcdb) bg_sp_fs_scroll_pane_g1

0xe73d,	// (0x0004bce4) bg_sp_fs_scroll_pane_g2

0xe746,	// (0x0004bced) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004d2ee) bg_sp_fs_scroll_pane_g

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0cc8,	// (0x0003e26f) list_medium_line_x2_t3_g4_g1

0x0d70,	// (0x0003e317) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0d70,	// (0x0003e317) list_medium_line_x2_t3_g4_g2

0x0cd4,	// (0x0003e27b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0cd4,	// (0x0003e27b) list_medium_line_x2_t3_g4_g3

0x0ce0,	// (0x0003e287) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0ce0,	// (0x0003e287) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0004c869) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0004c869) list_medium_line_x2_t3_g4_g

0x19e7,	// (0x0003ef8e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x19e7,	// (0x0003ef8e) list_medium_line_x2_t3_g4_t1

0x19fd,	// (0x0003efa4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x19fd,	// (0x0003efa4) list_medium_line_x2_t3_g4_t2

0x0d15,	// (0x0003e2bc) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d15,	// (0x0003e2bc) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0004d2f5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0004d2f5) list_medium_line_x2_t3_g4_t

0x11aa,	// (0x0003e751) list_medium_line_g2_g1_ParamLimits

0x11aa,	// (0x0003e751) list_medium_line_g2_g1

0x11b6,	// (0x0003e75d) list_medium_line_g2_g2_ParamLimits

0x11b6,	// (0x0003e75d) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004cfa7) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004cfa7) list_medium_line_g2_g

0x1a16,	// (0x0003efbd) list_medium_line_g2_t1_ParamLimits

0x1a16,	// (0x0003efbd) list_medium_line_g2_t1

0x11aa,	// (0x0003e751) list_medium_line_t3_g2_g1_ParamLimits

0x11aa,	// (0x0003e751) list_medium_line_t3_g2_g1

0x11b6,	// (0x0003e75d) list_medium_line_t3_g2_g2_ParamLimits

0x11b6,	// (0x0003e75d) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004cfa7) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004cfa7) list_medium_line_t3_g2_g

0x1a2b,	// (0x0003efd2) list_medium_line_t3_g2_t1_ParamLimits

0x1a2b,	// (0x0003efd2) list_medium_line_t3_g2_t1

0x1a42,	// (0x0003efe9) list_medium_line_t3_g2_t2_ParamLimits

0x1a42,	// (0x0003efe9) list_medium_line_t3_g2_t2

0x1a57,	// (0x0003effe) list_medium_line_t3_g2_t3_ParamLimits

0x1a57,	// (0x0003effe) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0004d2fc) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0004d2fc) list_medium_line_t3_g2_t

0x15df,	// (0x0003eb86) list_medium_line_right_icon_g1

0x1a6c,	// (0x0003f013) list_medium_line_right_icon_t1

0x11aa,	// (0x0003e751) list_medium_line_t2_g1_ParamLimits

0x11aa,	// (0x0003e751) list_medium_line_t2_g1

0x1a7a,	// (0x0003f021) list_medium_line_t2_t1_ParamLimits

0x1a7a,	// (0x0003f021) list_medium_line_t2_t1

0x1a94,	// (0x0003f03b) list_medium_line_t2_t2_ParamLimits

0x1a94,	// (0x0003f03b) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0004d303) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0004d303) list_medium_line_t2_t

0x11aa,	// (0x0003e751) list_medium_line_t3_g1_ParamLimits

0x11aa,	// (0x0003e751) list_medium_line_t3_g1

0x1aa9,	// (0x0003f050) list_medium_line_t3_t1_ParamLimits

0x1aa9,	// (0x0003f050) list_medium_line_t3_t1

0x1ac3,	// (0x0003f06a) list_medium_line_t3_t2_ParamLimits

0x1ac3,	// (0x0003f06a) list_medium_line_t3_t2

0x1ad8,	// (0x0003f07f) list_medium_line_t3_t3_ParamLimits

0x1ad8,	// (0x0003f07f) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0004d308) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0004d308) list_medium_line_t3_t

0x11aa,	// (0x0003e751) list_medium_line_g3_g1_ParamLimits

0x11aa,	// (0x0003e751) list_medium_line_g3_g1

0x1aed,	// (0x0003f094) list_medium_line_g3_g2_ParamLimits

0x1aed,	// (0x0003f094) list_medium_line_g3_g2

0x11b6,	// (0x0003e75d) list_medium_line_g3_g3_ParamLimits

0x11b6,	// (0x0003e75d) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0004d30f) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0004d30f) list_medium_line_g3_g

0x1af9,	// (0x0003f0a0) list_medium_line_g3_t1_ParamLimits

0x1af9,	// (0x0003f0a0) list_medium_line_g3_t1

0x11aa,	// (0x0003e751) list_medium_line_t2_g3_g1_ParamLimits

0x11aa,	// (0x0003e751) list_medium_line_t2_g3_g1

0x1aed,	// (0x0003f094) list_medium_line_t2_g3_g2_ParamLimits

0x1aed,	// (0x0003f094) list_medium_line_t2_g3_g2

0x11b6,	// (0x0003e75d) list_medium_line_t2_g3_g3_ParamLimits

0x11b6,	// (0x0003e75d) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0004d30f) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0004d30f) list_medium_line_t2_g3_g

0x1b0e,	// (0x0003f0b5) list_medium_line_t2_g3_t1_ParamLimits

0x1b0e,	// (0x0003f0b5) list_medium_line_t2_g3_t1

0x1b28,	// (0x0003f0cf) list_medium_line_t2_g3_t2_ParamLimits

0x1b28,	// (0x0003f0cf) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0004d316) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0004d316) list_medium_line_t2_g3_t

0x11aa,	// (0x0003e751) list_medium_line_t3_g3_g1_ParamLimits

0x11aa,	// (0x0003e751) list_medium_line_t3_g3_g1

0x1aed,	// (0x0003f094) list_medium_line_t3_g3_g2_ParamLimits

0x1aed,	// (0x0003f094) list_medium_line_t3_g3_g2

0x11b6,	// (0x0003e75d) list_medium_line_t3_g3_g3_ParamLimits

0x11b6,	// (0x0003e75d) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0004d30f) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0004d30f) list_medium_line_t3_g3_g

0x1b3d,	// (0x0003f0e4) list_medium_line_t3_g3_t1_ParamLimits

0x1b3d,	// (0x0003f0e4) list_medium_line_t3_g3_t1

0x1b51,	// (0x0003f0f8) list_medium_line_t3_g3_t2_ParamLimits

0x1b51,	// (0x0003f0f8) list_medium_line_t3_g3_t2

0x1b63,	// (0x0003f10a) list_medium_line_t3_g3_t3_ParamLimits

0x1b63,	// (0x0003f10a) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0004d31b) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0004d31b) list_medium_line_t3_g3_t

0x1757,	// (0x0003ecfe) list_medium_line_right_iconx2_g1

0x15df,	// (0x0003eb86) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004d322) list_medium_line_right_iconx2_g

0x1b75,	// (0x0003f11c) list_medium_line_right_iconx2_t1

0x1757,	// (0x0003ecfe) list_medium_line_t2_right_iconx2_g1

0x15df,	// (0x0003eb86) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004d322) list_medium_line_t2_right_iconx2_g

0x1b83,	// (0x0003f12a) list_medium_line_t2_right_iconx2_t1

0x1b93,	// (0x0003f13a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0004d327) list_medium_line_t2_right_iconx2_t

0x1ba1,	// (0x0003f148) list_medium_line_x4_t4_t1

0x1baf,	// (0x0003f156) list_medium_line_x4_t4_t2

0x1bbf,	// (0x0003f166) list_medium_line_x4_t4_t3

0x1bcf,	// (0x0003f176) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0004d32c) list_medium_line_x4_t4_t

0x926f,	// (0x00046816) tport_appsw_pane_ParamLimits

0x926f,	// (0x00046816) tport_appsw_pane

0x927d,	// (0x00046824) tport_contact_pane_ParamLimits

0x927d,	// (0x00046824) tport_contact_pane

0x928d,	// (0x00046834) tport_listscroll_pane_ParamLimits

0x928d,	// (0x00046834) tport_listscroll_pane

0x929d,	// (0x00046844) cell_tport_appsw_pane_ParamLimits

0x929d,	// (0x00046844) cell_tport_appsw_pane

0xce74,	// (0x0004a41b) tport_appsw_pane_g1_ParamLimits

0xce74,	// (0x0004a41b) tport_appsw_pane_g1

0xe74f,	// (0x0004bcf6) tport_contact_pane_g1

0xe0dd,	// (0x0004b684) tport_contact_pane_t1

0xe758,	// (0x0004bcff) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0004d335) tport_contact_pane_t

0xe766,	// (0x0004bd0d) list_tport_pane

0xe76f,	// (0x0004bd16) scroll_pane_cp_030

0x92d0,	// (0x00046877) cell_tport_appsw_pane_g1

0x92e0,	// (0x00046887) cell_tport_appsw_pane_t1

0x92ee,	// (0x00046895) grid_highlight_pane_cp019

0x92f6,	// (0x0004689d) list_tport_double_graphic_pane_ParamLimits

0x92f6,	// (0x0004689d) list_tport_double_graphic_pane

0xae38,	// (0x000483df) list_highlight_pane_cp023_ParamLimits

0xae38,	// (0x000483df) list_highlight_pane_cp023

0x9308,	// (0x000468af) list_tport_double_graphic_pane_g1_ParamLimits

0x9308,	// (0x000468af) list_tport_double_graphic_pane_g1

0x9315,	// (0x000468bc) list_tport_double_graphic_pane_t1_ParamLimits

0x9315,	// (0x000468bc) list_tport_double_graphic_pane_t1

0x932a,	// (0x000468d1) list_tport_double_graphic_pane_t2_ParamLimits

0x932a,	// (0x000468d1) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0004d341) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0004d341) list_tport_double_graphic_pane_t

0x9fb5,	// (0x0004755c) main_cale_note_pane

0x76c1,	// (0x00044c68) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x76c1,	// (0x00044c68) cell_vitu2_function_top_wide_pane_cp01

0x8e3e,	// (0x000463e5) wait_bar_pane_cp05_ParamLimits

0xae38,	// (0x000483df) listscroll_cmail_pane

0xe778,	// (0x0004bd1f) list_cmail_pane

0x933c,	// (0x000468e3) list_cmail_body_pane

0x9363,	// (0x0004690a) list_single_cmail_header_caption_pane

0x9397,	// (0x0004693e) list_single_cmail_header_detail_pane_ParamLimits

0x9397,	// (0x0004693e) list_single_cmail_header_detail_pane

0xe788,	// (0x0004bd2f) list_single_cmail_header_caption_pane_t1

0x1bdf,	// (0x0003f186) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1bdf,	// (0x0003f186) list_single_cmail_header_detail_pane_g1

0x1bf5,	// (0x0003f19c) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1bf5,	// (0x0003f19c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0004d346) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0004d346) list_single_cmail_header_detail_pane_g

0x1c01,	// (0x0003f1a8) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1c01,	// (0x0003f1a8) list_single_cmail_header_detail_pane_t1

0x1c61,	// (0x0003f208) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1c61,	// (0x0003f208) list_single_cmail_header_editor_pane_bg

0xe7ac,	// (0x0004bd53) list_cmail_body_pane_g1

0xe7b5,	// (0x0004bd5c) list_cmail_body_pane_t1

0xd620,	// (0x0004abc7) list_single_cmail_header_editor_pane_bg_g1

0xab63,	// (0x0004810a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd630,	// (0x0004abd7) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd628,	// (0x0004abcf) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd870,	// (0x0004ae17) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd650,	// (0x0004abf7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd640,	// (0x0004abe7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd648,	// (0x0004abef) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab43,	// (0x000480ea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x93d2,	// (0x00046979) calenote_gesture_pane_ParamLimits

0x93d2,	// (0x00046979) calenote_gesture_pane

0x93ec,	// (0x00046993) calenote_window_pane_ParamLimits

0x93ec,	// (0x00046993) calenote_window_pane

0xe7c3,	// (0x0004bd6a) popup_note_window_cp01

0x9404,	// (0x000469ab) calenote_swipe_1_pane_ParamLimits

0x9404,	// (0x000469ab) calenote_swipe_1_pane

0x919b,	// (0x00046742) calenote_swipe_2_pane_ParamLimits

0x919b,	// (0x00046742) calenote_swipe_2_pane

0xe5d5,	// (0x0004bb7c) calenote_swipe_1_pane_g1_ParamLimits

0xe5d5,	// (0x0004bb7c) calenote_swipe_1_pane_g1

0xe5e2,	// (0x0004bb89) calenote_swipe_1_pane_g2_ParamLimits

0xe5e2,	// (0x0004bb89) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0004d26a) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0004d26a) calenote_swipe_1_pane_g

0xe7d5,	// (0x0004bd7c) calenote_swipe_1_pane_t1_ParamLimits

0xe7d5,	// (0x0004bd7c) calenote_swipe_1_pane_t1

0xe5d5,	// (0x0004bb7c) calenote_swipe_2_pane_g1_ParamLimits

0xe5d5,	// (0x0004bb7c) calenote_swipe_2_pane_g1

0xe7f4,	// (0x0004bd9b) calenote_swipe_2_pane_g2_ParamLimits

0xe7f4,	// (0x0004bd9b) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0004d352) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0004d352) calenote_swipe_2_pane_g

0xe800,	// (0x0004bda7) calenote_swipe_2_pane_t1_ParamLimits

0xe800,	// (0x0004bda7) calenote_swipe_2_pane_t1

0x9fb5,	// (0x0004755c) main_mup_navstr_pane

0x6425,	// (0x000439cc) main_mup3_pane_t7_ParamLimits

0x6425,	// (0x000439cc) main_mup3_pane_t7

0x6e4f,	// (0x000443f6) main_mp4_pane_g6_ParamLimits

0x6e4f,	// (0x000443f6) main_mp4_pane_g6

0x71c1,	// (0x00044768) main_image3_pane_t4_ParamLimits

0x71c1,	// (0x00044768) main_image3_pane_t4

0x9417,	// (0x000469be) popup_navstr_preview_pane_ParamLimits

0x9417,	// (0x000469be) popup_navstr_preview_pane

0x9423,	// (0x000469ca) scroll_navstr_pane_ParamLimits

0x9423,	// (0x000469ca) scroll_navstr_pane

0x9fb5,	// (0x0004755c) bg_popup_preview_window_pane_cp04

0xe827,	// (0x0004bdce) popup_navstr_preview_pane_t1

0x942f,	// (0x000469d6) scroll_navstr_pane_g1_ParamLimits

0x942f,	// (0x000469d6) scroll_navstr_pane_g1

0x943c,	// (0x000469e3) scroll_navstr_pane_t1_ParamLimits

0x943c,	// (0x000469e3) scroll_navstr_pane_t1

0xe7cc,	// (0x0004bd73) bg_button_pane_cp014

0xe7cc,	// (0x0004bd73) bg_button_pane_cp030

0x1543,	// (0x0003eaea) list_double_fisheye_pane_g4_ParamLimits

0x1543,	// (0x0003eaea) list_double_fisheye_pane_g4

0x154f,	// (0x0003eaf6) list_double_fisheye_pane_g5_ParamLimits

0x154f,	// (0x0003eaf6) list_double_fisheye_pane_g5

0xd7b3,	// (0x0004ad5a) sp_fs_scroll_pane_cp03

0xe6c8,	// (0x0004bc6f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6d4,	// (0x0004bc7b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0004d287) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6e0,	// (0x0004bc87) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe780,	// (0x0004bd27) sp_fs_scroll_pane_cp02

0xa852,	// (0x00047df9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa852,	// (0x00047df9) popup_sp_fs_calendar_preview_list_single_pane

0x9fb5,	// (0x0004755c) main_cam6_pano_pane

0xae38,	// (0x000483df) main_mup3_pane_ParamLimits

0x9fb5,	// (0x0004755c) main_phacti_pane

0x8d13,	// (0x000462ba) bg_button_pane_cp11

0x8d2b,	// (0x000462d2) main_mobtv_info_pane_g2_ParamLimits

0x8d2b,	// (0x000462d2) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0004d1e7) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0004d1e7) main_mobtv_info_pane_g

0x8edd,	// (0x00046484) sc_clock_pane_t5_ParamLimits

0x8edd,	// (0x00046484) sc_clock_pane_t5

0x8f80,	// (0x00046527) main_radioblah_pane_g1_ParamLimits

0xe521,	// (0x0004bac8) main_radioblah_pane_t3_ParamLimits

0xe521,	// (0x0004bac8) main_radioblah_pane_t3

0xe539,	// (0x0004bae0) main_radioblah_pane_t4_ParamLimits

0xe539,	// (0x0004bae0) main_radioblah_pane_t4

0x8f9e,	// (0x00046545) main_radioblah_text_pane_ParamLimits

0x8f9e,	// (0x00046545) main_radioblah_text_pane

0x8fab,	// (0x00046552) main_radioblah_info_pane_g1_ParamLimits

0x9040,	// (0x000465e7) main_radioblah_info_pane_t4_ParamLimits

0x9040,	// (0x000465e7) main_radioblah_info_pane_t4

0xae38,	// (0x000483df) main_sp_fs_calendar_pane

0x944e,	// (0x000469f5) main_phacti_pane_g1

0x9456,	// (0x000469fd) phacti_note_pane_ParamLimits

0x9456,	// (0x000469fd) phacti_note_pane

0xe83e,	// (0x0004bde5) phacti_term_pane_ParamLimits

0xe83e,	// (0x0004bde5) phacti_term_pane

0xe853,	// (0x0004bdfa) phacti_note_pane_t1_ParamLimits

0xe853,	// (0x0004bdfa) phacti_note_pane_t1

0x1c78,	// (0x0003f21f) phacti_term_pane_g1

0x1c80,	// (0x0003f227) phacti_term_pane_t1_ParamLimits

0x1c80,	// (0x0003f227) phacti_term_pane_t1

0xe86a,	// (0x0004be11) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe872,	// (0x0004be19) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0004d35c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe87a,	// (0x0004be21) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe87a,	// (0x0004be21) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe890,	// (0x0004be37) aid_popup_sp_fs_bg_corner_pane

0xcbaf,	// (0x0004a156) popup_sp_fs_calendar_preview_bg_pane_g1

0x9fb5,	// (0x0004755c) popup_sp_fs_calendar_preview_bg_pane

0xa6f6,	// (0x00047c9d) popup_sp_fs_calendar_preview_list_pane

0xc7a5,	// (0x00049d4c) bg_main_sp_fs_cale_pane_ParamLimits

0xc7a5,	// (0x00049d4c) bg_main_sp_fs_cale_pane

0x1caa,	// (0x0003f251) listscroll_cale_mrui_pane_ParamLimits

0x1caa,	// (0x0003f251) listscroll_cale_mrui_pane

0x1cbf,	// (0x0003f266) listscroll_sp_fs_schedule_track_pane

0x1cc8,	// (0x0003f26f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1cc8,	// (0x0003f26f) main_sp_fs_ctrlbar_pane_cp01

0xe898,	// (0x0004be3f) main_sp_fs_ribbon_pane

0x1cdb,	// (0x0003f282) popup_sp_fs_cale_preview_window

0x94b9,	// (0x00046a60) list_single_sp_fs_schedule_track_pane_ParamLimits

0x94b9,	// (0x00046a60) list_single_sp_fs_schedule_track_pane

0xd143,	// (0x0004a6ea) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd143,	// (0x0004a6ea) bg_sp_fs_highlight_list_pane_cp03

0x94e7,	// (0x00046a8e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x94e7,	// (0x00046a8e) list_single_sp_fs_schedule_track_pane_g1

0x94f3,	// (0x00046a9a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x94f3,	// (0x00046a9a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0004d361) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0004d361) list_single_sp_fs_schedule_track_pane_g

0x94ff,	// (0x00046aa6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x94ff,	// (0x00046aa6) list_single_sp_fs_schedule_track_pane_t1

0x9517,	// (0x00046abe) sp_fs_schedule_track_pane_ParamLimits

0x9517,	// (0x00046abe) sp_fs_schedule_track_pane

0xe8a0,	// (0x0004be47) sp_fs_schedule_track_pane_g1

0xe8a8,	// (0x0004be4f) sp_fs_schedule_track_pane_g2

0xe8b0,	// (0x0004be57) sp_fs_schedule_track_pane_g3

0xe8b8,	// (0x0004be5f) sp_fs_schedule_track_pane_g4

0xe8c0,	// (0x0004be67) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0004d366) sp_fs_schedule_track_pane_g

0xd620,	// (0x0004abc7) bg_sp_fs_schedule_viewer_highlight_g1

0xab63,	// (0x0004810a) bg_sp_fs_schedule_viewer_highlight_g2

0xd628,	// (0x0004abcf) bg_sp_fs_schedule_viewer_highlight_g3

0xd630,	// (0x0004abd7) bg_sp_fs_schedule_viewer_highlight_g4

0xd870,	// (0x0004ae17) bg_sp_fs_schedule_viewer_highlight_g5

0xd640,	// (0x0004abe7) bg_sp_fs_schedule_viewer_highlight_g6

0xd648,	// (0x0004abef) bg_sp_fs_schedule_viewer_highlight_g7

0xd650,	// (0x0004abf7) bg_sp_fs_schedule_viewer_highlight_g8

0xab43,	// (0x000480ea) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0004d371) bg_sp_fs_schedule_viewer_highlight_g

0x9fb5,	// (0x0004755c) bg_main_sp_fs_ribbon_pane

0x9527,	// (0x00046ace) main_sp_fs_ribbon_pane_g1

0xe8c8,	// (0x0004be6f) main_sp_fs_ribbon_pane_t1

0x9530,	// (0x00046ad7) main_sp_fs_ribbon_pane_t2

0xe8d7,	// (0x0004be7e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0004d384) main_sp_fs_ribbon_pane_t

0xe8e6,	// (0x0004be8d) main_sp_fs_ribbon_scheduler_pane

0xe8ee,	// (0x0004be95) bg_main_sp_fs_ribbon_pane_g1

0xe8f7,	// (0x0004be9e) bg_main_sp_fs_ribbon_pane_g2

0xe900,	// (0x0004bea7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0004d38b) bg_main_sp_fs_ribbon_pane_g

0xe908,	// (0x0004beaf) main_sp_fs_ribbon_scheduler_pane_g1

0xe911,	// (0x0004beb8) main_sp_fs_ribbon_scheduler_pane_g2

0xe91a,	// (0x0004bec1) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0004d392) main_sp_fs_ribbon_scheduler_pane_g

0xe923,	// (0x0004beca) list_cale_mrui_pane

0x9541,	// (0x00046ae8) sp_fs_scroll_pane_cp07_ParamLimits

0x9541,	// (0x00046ae8) sp_fs_scroll_pane_cp07

0x955d,	// (0x00046b04) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x955d,	// (0x00046b04) bg_sp_fs_schedule_viewer_highlight

0xe930,	// (0x0004bed7) list_single_sp_fs_schedule_track_pane_cp01

0xe938,	// (0x0004bedf) list_sp_fs_schedule_track_pane

0xe940,	// (0x0004bee7) sp_fs_scroll_pane_cp06_ParamLimits

0xe940,	// (0x0004bee7) sp_fs_scroll_pane_cp06

0xcbaf,	// (0x0004a156) bgmain_sp_fs_calendar_pane_g1

0x1ced,	// (0x0003f294) list_single_cale_mrui_pane_ParamLimits

0x1ced,	// (0x0003f294) list_single_cale_mrui_pane

0x1d1f,	// (0x0003f2c6) list_single_cale_mrui_row_pane_ParamLimits

0x1d1f,	// (0x0003f2c6) list_single_cale_mrui_row_pane

0x1d2c,	// (0x0003f2d3) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1d2c,	// (0x0003f2d3) list_single_cale_mrui_row_pane_g1

0x1d64,	// (0x0003f30b) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1d64,	// (0x0003f30b) list_single_cale_mrui_row_pane_t1

0x1d76,	// (0x0003f31d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1d76,	// (0x0003f31d) list_single_cale_mrui_row_pane_t2

0x1ddc,	// (0x0003f383) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1ddc,	// (0x0003f383) list_single_cale_mrui_row_pane_t3

0x1e0b,	// (0x0003f3b2) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1e0b,	// (0x0003f3b2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0004d3a0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0004d3a0) list_single_cale_mrui_row_pane_t

0x1e3a,	// (0x0003f3e1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1e3a,	// (0x0003f3e1) list_single_cmail_header_editor_pane_bg_cp01

0x1e5c,	// (0x0003f403) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1e5c,	// (0x0003f403) list_single_cmail_header_editor_pane_bg_cp02

0x956a,	// (0x00046b11) main_radioblah_text_pane_t1_ParamLimits

0x956a,	// (0x00046b11) main_radioblah_text_pane_t1

0xe95f,	// (0x0004bf06) cam6_indi_pane_cp01

0xe967,	// (0x0004bf0e) cam6_mode_pane_cp01

0xe96f,	// (0x0004bf16) cam6_pano_pane

0xe978,	// (0x0004bf1f) cam6_zoom_pane_cp01

0xe980,	// (0x0004bf27) cam6_pano_image_pane

0xe98b,	// (0x0004bf32) cam6_pano_pane_g1

0xe284,	// (0x0004b82b) cam6_pano_pane_g2

0xe994,	// (0x0004bf3b) cam6_pano_pane_g3

0xe99d,	// (0x0004bf44) cam6_pano_pane_g4

0xd17b,	// (0x0004a722) cam6_pano_pane_g5

0xe9a6,	// (0x0004bf4d) cam6_pano_pane_g6

0xe9b0,	// (0x0004bf57) cam6_pano_pane_g7

0xe9b8,	// (0x0004bf5f) cam6_pano_pane_g8

0xe9c1,	// (0x0004bf68) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0004d3a9) cam6_pano_pane_g

0x9fb5,	// (0x0004755c) main_browser_tag_pane

0xe81f,	// (0x0004bdc6) grid_navstr_albumart_pane

0xe9cc,	// (0x0004bf73) cell_navstr_albumart_pane_ParamLimits

0xe9cc,	// (0x0004bf73) cell_navstr_albumart_pane

0xb4ef,	// (0x00048a96) cell_navstr_albumart_pane_g1

0xc5b6,	// (0x00049b5d) cell_navstr_albumart_pane_g2

0xc5c6,	// (0x00049b6d) cell_navstr_albumart_pane_g3

0xc5be,	// (0x00049b65) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0004d3bc) cell_navstr_albumart_pane_g

0x9585,	// (0x00046b2c) bt_list_pane_ParamLimits

0x9585,	// (0x00046b2c) bt_list_pane

0xe9ee,	// (0x0004bf95) bt_list_pane_t1

0xe9fd,	// (0x0004bfa4) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0004d3c5) bt_list_pane_t

0x9fb5,	// (0x0004755c) main_cale_prevew_pane

0x95a9,	// (0x00046b50) popup_cale_preview_window_ParamLimits

0x95a9,	// (0x00046b50) popup_cale_preview_window

0xae38,	// (0x000483df) bg_popup_preview_window_pane_cp05_ParamLimits

0xae38,	// (0x000483df) bg_popup_preview_window_pane_cp05

0xea0c,	// (0x0004bfb3) list_cale_preview_pane_ParamLimits

0xea0c,	// (0x0004bfb3) list_cale_preview_pane

0xea18,	// (0x0004bfbf) list_double_cale_preview_pane_ParamLimits

0xea18,	// (0x0004bfbf) list_double_cale_preview_pane

0xea2a,	// (0x0004bfd1) list_single_cale_preview_pane_ParamLimits

0xea2a,	// (0x0004bfd1) list_single_cale_preview_pane

0xea3e,	// (0x0004bfe5) list_single_cale_preview_pane_g1

0xea46,	// (0x0004bfed) list_single_cale_preview_pane_t1_ParamLimits

0xea46,	// (0x0004bfed) list_single_cale_preview_pane_t1

0xea5b,	// (0x0004c002) list_double_cale_preview_pane_g1

0xea63,	// (0x0004c00a) list_double_cale_preview_pane_t1_ParamLimits

0xea63,	// (0x0004c00a) list_double_cale_preview_pane_t1

0xea78,	// (0x0004c01f) list_double_cale_preview_pane_t2_ParamLimits

0xea78,	// (0x0004c01f) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0004d3ca) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0004d3ca) list_double_cale_preview_pane_t

0x9fb5,	// (0x0004755c) main_ezdial_pane

0xae38,	// (0x000483df) main_sp_fs_email_pane_ParamLimits

0x91b5,	// (0x0004675c) cmail_ddmenu_btn01_pane_ParamLimits

0x91b5,	// (0x0004675c) cmail_ddmenu_btn01_pane

0x91d2,	// (0x00046779) cmail_ddmenu_btn02_pane_ParamLimits

0x91d2,	// (0x00046779) cmail_ddmenu_btn02_pane

0x91f0,	// (0x00046797) cmail_ddmenu_btn03_pane_ParamLimits

0x91f0,	// (0x00046797) cmail_ddmenu_btn03_pane

0x921e,	// (0x000467c5) main_sp_fs_ctrlbar_pane_ParamLimits

0x9234,	// (0x000467db) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x933c,	// (0x000468e3) list_cmail_body_pane_ParamLimits

0xe796,	// (0x0004bd3d) bg_button_pane_cp12

0xe79f,	// (0x0004bd46) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe79f,	// (0x0004bd46) list_single_cmail_header_detail_pane_g3

0x1c3d,	// (0x0003f1e4) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1c3d,	// (0x0003f1e4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0004d34d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0004d34d) list_single_cmail_header_detail_pane_t

0x1c95,	// (0x0003f23c) phacti_term_pane_t2_ParamLimits

0x1c95,	// (0x0003f23c) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0004d357) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0004d357) phacti_term_pane_t

0xea90,	// (0x0004c037) aid_size_list_single_double

0x95c0,	// (0x00046b67) popup_ezdial_listscroll_window

0x95e3,	// (0x00046b8a) popup_number_entry_window_cp01

0xa90a,	// (0x00047eb1) bg_popup_call_pane_cp09

0xea9c,	// (0x0004c043) ezdial_list_pane

0xeaa4,	// (0x0004c04b) scroll_pane_cp23

0xc992,	// (0x00049f39) bg_button_pane_cp028_ParamLimits

0xc992,	// (0x00049f39) bg_button_pane_cp028

0x95f1,	// (0x00046b98) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x95f1,	// (0x00046b98) cmail_ddmenu_btn01_pane_g1

0x9603,	// (0x00046baa) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9603,	// (0x00046baa) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0004d3cf) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0004d3cf) cmail_ddmenu_btn01_pane_g

0xeaac,	// (0x0004c053) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaac,	// (0x0004c053) cmail_ddmenu_btn01_pane_t1

0xc7a5,	// (0x00049d4c) bg_button_pane_cp029_ParamLimits

0xc7a5,	// (0x00049d4c) bg_button_pane_cp029

0x960f,	// (0x00046bb6) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x960f,	// (0x00046bb6) cmail_ddmenu_btn02_pane_g1

0x9627,	// (0x00046bce) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9627,	// (0x00046bce) cmail_ddmenu_btn02_pane_t1

0xd143,	// (0x0004a6ea) bg_button_pane_cp031_ParamLimits

0xd143,	// (0x0004a6ea) bg_button_pane_cp031

0x960f,	// (0x00046bb6) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x960f,	// (0x00046bb6) cmail_ddmenu_btn03_pane_g1

0x9627,	// (0x00046bce) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9627,	// (0x00046bce) cmail_ddmenu_btn03_pane_t1

0x706c,	// (0x00044613) cell_dialer2_keypad_pane_t1_ParamLimits

0x7086,	// (0x0004462d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7086,	// (0x0004462d) cell_dialer2_keypad_pane_t1_copy1

0x8b98,	// (0x0004613f) ncimui_group_button_pane

0xae38,	// (0x000483df) main_sp_fs_calendar_pane_ParamLimits

0x9363,	// (0x0004690a) list_single_cmail_header_caption_pane_ParamLimits

0xdd7a,	// (0x0004b321) aid_recal_txt_sm_pane

0x9fb5,	// (0x0004755c) mian_recal_day_pane

0x1cdb,	// (0x0003f282) popup_sp_fs_cale_preview_window_ParamLimits

0xeac1,	// (0x0004c068) list_recal_day_pane

0x1e93,	// (0x0003f43a) list_single_recal_day_pane_ParamLimits

0x1e93,	// (0x0003f43a) list_single_recal_day_pane

0xeae8,	// (0x0004c08f) list_single_recal_day_pane_g1_ParamLimits

0xeae8,	// (0x0004c08f) list_single_recal_day_pane_g1

0x1ea5,	// (0x0003f44c) list_single_recal_day_pane_g2_ParamLimits

0x1ea5,	// (0x0003f44c) list_single_recal_day_pane_g2

0x1eb5,	// (0x0003f45c) list_single_recal_day_pane_g3_ParamLimits

0x1eb5,	// (0x0003f45c) list_single_recal_day_pane_g3

0x1ec1,	// (0x0003f468) list_single_recal_day_pane_g4_ParamLimits

0x1ec1,	// (0x0003f468) list_single_recal_day_pane_g4

0x1ed7,	// (0x0003f47e) list_single_recal_day_pane_g5_ParamLimits

0x1ed7,	// (0x0003f47e) list_single_recal_day_pane_g5

0x1ef1,	// (0x0003f498) list_single_recal_day_pane_g6_ParamLimits

0x1ef1,	// (0x0003f498) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0004d3de) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0004d3de) list_single_recal_day_pane_g

0x1f05,	// (0x0003f4ac) list_single_recal_day_pane_t1

0x1f17,	// (0x0003f4be) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0004d3e9) list_single_recal_day_pane_t

0x964b,	// (0x00046bf2) ncimui_query_button_pane_ParamLimits

0x964b,	// (0x00046bf2) ncimui_query_button_pane

0x965b,	// (0x00046c02) ncimui_query_button_pane_t1_ParamLimits

0x965b,	// (0x00046c02) ncimui_query_button_pane_t1

0xeaf4,	// (0x0004c09b) ncimui_query_button_pane_t2_ParamLimits

0xeaf4,	// (0x0004c09b) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0004d3ee) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0004d3ee) ncimui_query_button_pane_t

0x966e,	// (0x00046c15) query_button_pane_ParamLimits

0x966e,	// (0x00046c15) query_button_pane

0x9fb5,	// (0x0004755c) bg_button_pane_cp0028

0xeb07,	// (0x0004c0ae) query_button_pane_t1

0x543f,	// (0x000429e6) main_tport_pane_ParamLimits

0x9245,	// (0x000467ec) bg_popup_window_pane_cp01_ParamLimits

0x9245,	// (0x000467ec) bg_popup_window_pane_cp01

0x9253,	// (0x000467fa) heading_pane_cp08_ParamLimits

0x9253,	// (0x000467fa) heading_pane_cp08

0x9261,	// (0x00046808) heading_pane_cp07_ParamLimits

0x9261,	// (0x00046808) heading_pane_cp07

0x92d0,	// (0x00046877) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0004d33a) cell_tport_appsw_pane_g

0x0f04,	// (0x0003e4ab) input_candi_list_open_g1

0xad2e,	// (0x000482d5) list_cale_time_pane_g6_ParamLimits

0xad2e,	// (0x000482d5) list_cale_time_pane_g6

0x5ec7,	// (0x0004346e) aid_size_touch_calib_1_ParamLimits

0x5ec7,	// (0x0004346e) aid_size_touch_calib_1

0x5ed3,	// (0x0004347a) aid_size_touch_calib_2_ParamLimits

0x5ed3,	// (0x0004347a) aid_size_touch_calib_2

0x5ee1,	// (0x00043488) aid_size_touch_calib_3_ParamLimits

0x5ee1,	// (0x00043488) aid_size_touch_calib_3

0x5ef1,	// (0x00043498) aid_size_touch_calib_4_ParamLimits

0x5ef1,	// (0x00043498) aid_size_touch_calib_4

0x5eff,	// (0x000434a6) main_touch_calib_button_group_pane_ParamLimits

0x5eff,	// (0x000434a6) main_touch_calib_button_group_pane

0x5f0d,	// (0x000434b4) main_touch_calib_pane_g1_ParamLimits

0x5f19,	// (0x000434c0) main_touch_calib_pane_g2_ParamLimits

0x5f25,	// (0x000434cc) main_touch_calib_pane_g3_ParamLimits

0x5f31,	// (0x000434d8) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0004ccf8) main_touch_calib_pane_g_ParamLimits

0x5f3d,	// (0x000434e4) main_touch_calib_pane_t1_ParamLimits

0x5f56,	// (0x000434fd) main_touch_calib_pane_t2_ParamLimits

0x5f6f,	// (0x00043516) main_touch_calib_pane_t3_ParamLimits

0x5f85,	// (0x0004352c) main_touch_calib_pane_t4_ParamLimits

0x5f9b,	// (0x00043542) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0004cd01) main_touch_calib_pane_t_ParamLimits

0xcf0f,	// (0x0004a4b6) list_single_fp_cale_pane_g3_ParamLimits

0xcf0f,	// (0x0004a4b6) list_single_fp_cale_pane_g3

0xae38,	// (0x000483df) bg_button_pane_cp012_ParamLimits

0xae38,	// (0x000483df) bg_vkb2_func_pane_cp03_ParamLimits

0x7e30,	// (0x000453d7) cell_vitu2_function_top_pane_g1_ParamLimits

0xae38,	// (0x000483df) bg_vkb2_func_pane_cp04_ParamLimits

0x8b20,	// (0x000460c7) main_ncimui_button_group_pane_ParamLimits

0x8b20,	// (0x000460c7) main_ncimui_button_group_pane

0x8b86,	// (0x0004612d) main_ncimui_pane_t3_ParamLimits

0x8b86,	// (0x0004612d) main_ncimui_pane_t3

0xe835,	// (0x0004bddc) phacti_button_group_pane

0xea90,	// (0x0004c037) aid_size_list_single_double_ParamLimits

0x95c0,	// (0x00046b67) popup_ezdial_listscroll_window_ParamLimits

0x95e3,	// (0x00046b8a) popup_number_entry_window_cp01_ParamLimits

0x967b,	// (0x00046c22) phacti_button_pane_ParamLimits

0x967b,	// (0x00046c22) phacti_button_pane

0x9fb5,	// (0x0004755c) bg_button_pane_cp14

0xeb15,	// (0x0004c0bc) phacti_button_pane_t1

0x968c,	// (0x00046c33) main_touch_calib_button_pane_ParamLimits

0x968c,	// (0x00046c33) main_touch_calib_button_pane

0xa73c,	// (0x00047ce3) bg_button_pane_cp18_ParamLimits

0xa73c,	// (0x00047ce3) bg_button_pane_cp18

0xeb23,	// (0x0004c0ca) main_touch_calib_button_pane_t1_ParamLimits

0xeb23,	// (0x0004c0ca) main_touch_calib_button_pane_t1

0xeb39,	// (0x0004c0e0) main_touch_calib_button_pane_t2_ParamLimits

0xeb39,	// (0x0004c0e0) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0004d3f3) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0004d3f3) main_touch_calib_button_pane_t

0x9fb5,	// (0x0004755c) cell_ncimui_button_pane

0x9fb5,	// (0x0004755c) bg_button_pane_cp032

0xeb57,	// (0x0004c0fe) cell_ncimui_button_pane_t1

0x70e2,	// (0x00044689) image3_infobar_pane_ParamLimits

0x70e2,	// (0x00044689) image3_infobar_pane

0x8eff,	// (0x000464a6) fs_bigclock_status_pane_ParamLimits

0x8eff,	// (0x000464a6) fs_bigclock_status_pane

0x8f0c,	// (0x000464b3) main_fs_bigclock_clock_pane_ParamLimits

0x8f0c,	// (0x000464b3) main_fs_bigclock_clock_pane

0x8f26,	// (0x000464cd) main_fs_bigclock_indi_pane_ParamLimits

0x8f26,	// (0x000464cd) main_fs_bigclock_indi_pane

0x8f4e,	// (0x000464f5) main_fs_bigclock_swipe_pane_ParamLimits

0x8f4e,	// (0x000464f5) main_fs_bigclock_swipe_pane

0x9fb5,	// (0x0004755c) main_fs_clock_dumped_data

0xe391,	// (0x0004b938) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe391,	// (0x0004b938) list_single_fs_bigclock_indicator_pane_g1

0xe3ad,	// (0x0004b954) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3ad,	// (0x0004b954) list_single_fs_bigclock_indicator_pane_g2

0xe3c7,	// (0x0004b96e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3c7,	// (0x0004b96e) list_single_fs_bigclock_indicator_pane_g3

0xe3e1,	// (0x0004b988) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3e1,	// (0x0004b988) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0004d21b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0004d21b) list_single_fs_bigclock_indicator_pane_g

0xe40c,	// (0x0004b9b3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe40c,	// (0x0004b9b3) list_single_fs_bigclock_indicator_pane_t1

0xe434,	// (0x0004b9db) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe434,	// (0x0004b9db) list_single_fs_bigclock_indicator_pane_t2

0xe45c,	// (0x0004ba03) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe45c,	// (0x0004ba03) list_single_fs_bigclock_indicator_pane_t3

0xe484,	// (0x0004ba2b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe484,	// (0x0004ba2b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0004d226) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0004d226) list_single_fs_bigclock_indicator_pane_t

0xeb65,	// (0x0004c10c) image3_infobar_fav_pane_ParamLimits

0xeb65,	// (0x0004c10c) image3_infobar_fav_pane

0xeb75,	// (0x0004c11c) image3_infobar_loc_pane_ParamLimits

0xeb75,	// (0x0004c11c) image3_infobar_loc_pane

0xeb89,	// (0x0004c130) image3_infobar_time_pane_ParamLimits

0xeb89,	// (0x0004c130) image3_infobar_time_pane

0xcbaf,	// (0x0004a156) image3_infobar_time_pane_g1

0xeb99,	// (0x0004c140) image3_infobar_time_pane_t1

0xcbaf,	// (0x0004a156) image3_infobar_loc_pane_g1

0xeba7,	// (0x0004c14e) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0004d3f8) image3_infobar_loc_pane_g

0xebaf,	// (0x0004c156) image3_infobar_loc_pane_t1

0xcbaf,	// (0x0004a156) image3_infobar_fav_pane_g1

0xebbd,	// (0x0004c164) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0004d3fd) image3_infobar_fav_pane_g

0xebc5,	// (0x0004c16c) fs_bigclock_status_battery_pane

0xebce,	// (0x0004c175) fs_bigclock_status_signal_pane

0xebd7,	// (0x0004c17e) fs_bigclock_status_title_pane

0xebe0,	// (0x0004c187) fs_bigclock_status_signal_pane_g1

0xebe9,	// (0x0004c190) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0004d402) fs_bigclock_status_signal_pane_g

0xebf1,	// (0x0004c198) fs_bigclock_status_battery_pane_g1

0xebfa,	// (0x0004c1a1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0004d407) fs_bigclock_status_battery_pane_g

0xec02,	// (0x0004c1a9) fs_bigclock_status_title_pane_t1

0xcbaf,	// (0x0004a156) main_fs_bigclock_clock_pane_g1

0xec10,	// (0x0004c1b7) main_fs_bigclock_clock_pane_g2

0xec19,	// (0x0004c1c0) main_fs_bigclock_clock_pane_g3

0xec19,	// (0x0004c1c0) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0004d40c) main_fs_bigclock_clock_pane_g

0xec21,	// (0x0004c1c8) main_fs_bigclock_clock_pane_t1

0x969c,	// (0x00046c43) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0004d415) main_fs_bigclock_clock_pane_t

0xec2f,	// (0x0004c1d6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec2f,	// (0x0004c1d6) list_single_fs_bigclock_indicator_pane

0xec40,	// (0x0004c1e7) list_single_fs_bigclock_pane_ParamLimits

0xec40,	// (0x0004c1e7) list_single_fs_bigclock_pane

0xec9c,	// (0x0004c243) main_fs_bigclock_indicator_pane_t1

0xecab,	// (0x0004c252) list_single_fs_bigclock_pane_g1

0xecb3,	// (0x0004c25a) list_single_fs_bigclock_pane_t1

0xcbaf,	// (0x0004a156) main_fs_bigclock_swipe_pane_g1

0xecf6,	// (0x0004c29d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0004d426) main_fs_bigclock_swipe_pane_g

0xecfe,	// (0x0004c2a5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfe,	// (0x0004c2a5) main_fs_bigclock_swipe_pane_t1

0x44df,	// (0x00041a86) call_type_pane_ParamLimits

0x9fb5,	// (0x0004755c) main_btmg_pane

0x1d58,	// (0x0003f2ff) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1d58,	// (0x0003f2ff) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0004d399) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0004d399) list_single_cale_mrui_row_pane_g

0x1e82,	// (0x0003f429) list_recal_vselct_arw_lo_pane

0xeae0,	// (0x0004c087) list_recal_vselct_arw_up_pane

0x1e8a,	// (0x0003f431) list_recal_vselct_pane

0x96ed,	// (0x00046c94) btmg_button_pane

0x96f9,	// (0x00046ca0) main_btmg_pane_g1

0x9fb5,	// (0x0004755c) bg_button_pane_cp044

0xed1b,	// (0x0004c2c2) btmg_button_pane_t1

0xc791,	// (0x00049d38) aid_listscroll_gen

0xae38,	// (0x000483df) main_cntbar_detail_pane

0xe778,	// (0x0004bd1f) list_cmail_folder_pane

0xd7b3,	// (0x0004ad5a) sp_fs_scroll_pane_cp03_ParamLimits

0x1f29,	// (0x0003f4d0) list_single_fs_dyc_pane_cp01_ParamLimits

0x1f29,	// (0x0003f4d0) list_single_fs_dyc_pane_cp01

0xed29,	// (0x0004c2d0) aid_size_cmail_indent

0x1f60,	// (0x0003f507) list_single_dyc_row_pane_cp01

0x9721,	// (0x00046cc8) cntbar_detail_list_pane_ParamLimits

0x9721,	// (0x00046cc8) cntbar_detail_list_pane

0x975b,	// (0x00046d02) main_cntbar_detail_cont_pane_ParamLimits

0x975b,	// (0x00046d02) main_cntbar_detail_cont_pane

0x44d3,	// (0x00041a7a) scroll_pane_cp032_ParamLimits

0x44d3,	// (0x00041a7a) scroll_pane_cp032

0x9767,	// (0x00046d0e) cntbar_detail_list_event_pane_ParamLimits

0x9767,	// (0x00046d0e) cntbar_detail_list_event_pane

0x972d,	// (0x00046cd4) cntbar_detail_list_shct_pane

0xabb1,	// (0x00048158) aid_list_gen

0xed32,	// (0x0004c2d9) aid_scroll

0xed3b,	// (0x0004c2e2) aid_size_touch_scroll_bar

0x1426,	// (0x0003e9cd) aid_list_double

0x1f69,	// (0x0003f510) aid_list_single

0xec8a,	// (0x0004c231) aid_list_single_lg

0x1f72,	// (0x0003f519) aid_list_z_g_a_sm

0x1f7a,	// (0x0003f521) aid_list_z_g_d

0x1f82,	// (0x0003f529) aid_txt_z_prm

0x1f90,	// (0x0003f537) aid_txt_z_prm_cp01

0x1f9e,	// (0x0003f545) aid_txt_z_sec

0x977b,	// (0x00046d22) main_cntbar_detail_cont_pane_g1_ParamLimits

0x977b,	// (0x00046d22) main_cntbar_detail_cont_pane_g1

0x9788,	// (0x00046d2f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9788,	// (0x00046d2f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0004d42b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0004d42b) main_cntbar_detail_cont_pane_g

0xed44,	// (0x0004c2eb) main_cntbar_detail_cont_pane_t1

0xed52,	// (0x0004c2f9) main_cntbar_detail_cont_pane_t2

0xed60,	// (0x0004c307) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0004d430) main_cntbar_detail_cont_pane_t

0x9794,	// (0x00046d3b) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9794,	// (0x00046d3b) cell_cntbar_detail_list_shct_pane

0xed6e,	// (0x0004c315) cntbar_detail_list_shct_pane_g1

0xed77,	// (0x0004c31e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0004d437) cntbar_detail_list_shct_pane_g

0x97a8,	// (0x00046d4f) cntbar_detail_list_event_pane_g1_ParamLimits

0x97a8,	// (0x00046d4f) cntbar_detail_list_event_pane_g1

0x97b4,	// (0x00046d5b) cntbar_detail_list_event_pane_g2_ParamLimits

0x97b4,	// (0x00046d5b) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0004d43c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0004d43c) cntbar_detail_list_event_pane_g

0x9820,	// (0x00046dc7) cntbar_detail_list_event_pane_t1_ParamLimits

0x9820,	// (0x00046dc7) cntbar_detail_list_event_pane_t1

0x9835,	// (0x00046ddc) cntbar_detail_list_event_pane_t2_ParamLimits

0x9835,	// (0x00046ddc) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0004d449) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0004d449) cntbar_detail_list_event_pane_t

0xcbaf,	// (0x0004a156) cell_cntbar_detail_list_shct_pane_g1

0xb34e,	// (0x000488f5) navi_pane_mv_g3

0xae38,	// (0x000483df) main_cntbar_detail_pane_ParamLimits

0x9fb5,	// (0x0004755c) main_notif_wgt_pane

0x6d96,	// (0x0004433d) aid_tch_main_mp4_pane_g4

0x6fcb,	// (0x00044572) popup_slider_window_cp02

0x1e78,	// (0x0003f41f) list_recal_day_event_pane

0x9701,	// (0x00046ca8) cntbar_detail_btn_pane_ParamLimits

0x9701,	// (0x00046ca8) cntbar_detail_btn_pane

0x9711,	// (0x00046cb8) cntbar_detail_btn_pane_cp01_ParamLimits

0x9711,	// (0x00046cb8) cntbar_detail_btn_pane_cp01

0x972d,	// (0x00046cd4) cntbar_detail_list_shct_pane_ParamLimits

0x9739,	// (0x00046ce0) cntbar_detail_pane_g1_ParamLimits

0x9739,	// (0x00046ce0) cntbar_detail_pane_g1

0x9745,	// (0x00046cec) cntbar_detail_pane_t1_ParamLimits

0x9745,	// (0x00046cec) cntbar_detail_pane_t1

0x97c0,	// (0x00046d67) cntbar_detail_list_event_pane_g3_ParamLimits

0x97c0,	// (0x00046d67) cntbar_detail_list_event_pane_g3

0x97d8,	// (0x00046d7f) cntbar_detail_list_event_pane_g4_ParamLimits

0x97d8,	// (0x00046d7f) cntbar_detail_list_event_pane_g4

0x97f0,	// (0x00046d97) cntbar_detail_list_event_pane_g5_ParamLimits

0x97f0,	// (0x00046d97) cntbar_detail_list_event_pane_g5

0x9808,	// (0x00046daf) cntbar_detail_list_event_pane_g6_ParamLimits

0x9808,	// (0x00046daf) cntbar_detail_list_event_pane_g6

0x984a,	// (0x00046df1) cntbar_detail_list_event_pane_t3_ParamLimits

0x984a,	// (0x00046df1) cntbar_detail_list_event_pane_t3

0x985c,	// (0x00046e03) popup_notif_wgt_window_ParamLimits

0x985c,	// (0x00046e03) popup_notif_wgt_window

0x986c,	// (0x00046e13) popup_submenu_window_cp01_ParamLimits

0x986c,	// (0x00046e13) popup_submenu_window_cp01

0xa90a,	// (0x00047eb1) bg_popup_window_pane_cp10

0xed80,	// (0x0004c327) listscroll_notif_wgt_pane

0xed91,	// (0x0004c338) list_notif_wgt_window

0xed9a,	// (0x0004c341) scroll_pane_cp033

0x987a,	// (0x00046e21) list_notif_wgt_row_pane_ParamLimits

0x987a,	// (0x00046e21) list_notif_wgt_row_pane

0xeda3,	// (0x0004c34a) aid_size_list_notif_wgt_del

0xedb0,	// (0x0004c357) list_notif_wgt_row_pane_g1

0xedbc,	// (0x0004c363) list_notif_wgt_row_pane_g2

0xedd0,	// (0x0004c377) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0004d450) list_notif_wgt_row_pane_g

0xeddd,	// (0x0004c384) list_notif_wgt_row_pane_t1

0xedf3,	// (0x0004c39a) list_notif_wgt_row_pane_t2

0xee05,	// (0x0004c3ac) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0004d457) list_notif_wgt_row_pane_t

0xd878,	// (0x0004ae1f) list_recal_day_event_pane_g1

0xee17,	// (0x0004c3be) list_recal_day_event_pane_t1

0x9fb5,	// (0x0004755c) bg_button_pane_cp045

0xee26,	// (0x0004c3cd) cntbar_detail_btn_pane_t1

0xc7a5,	// (0x00049d4c) main_callh_pane_ParamLimits

0xc7a5,	// (0x00049d4c) main_callh_pane

0x9fb5,	// (0x0004755c) main_coverflow0_pane

0x9fb5,	// (0x0004755c) main_wgtman_pane

0x8f66,	// (0x0004650d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8f66,	// (0x0004650d) main_fs_bigclock_unlock_btn_pane

0x92c8,	// (0x0004686f) bg_button_pane_cp16

0x92d8,	// (0x0004687f) cell_tport_appsw_pane_g3

0x988c,	// (0x00046e33) cf0_flow_pane_ParamLimits

0x988c,	// (0x00046e33) cf0_flow_pane

0xee34,	// (0x0004c3db) listscroll_cf0_pane

0xee3f,	// (0x0004c3e6) main_cf0_pane_g1

0x989b,	// (0x00046e42) main_cf0_pane_t1_ParamLimits

0x989b,	// (0x00046e42) main_cf0_pane_t1

0x98af,	// (0x00046e56) main_cf0_pane_t2_ParamLimits

0x98af,	// (0x00046e56) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0004d463) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0004d463) main_cf0_pane_t

0xee51,	// (0x0004c3f8) scroll_pane_cp11

0x98c3,	// (0x00046e6a) cf0_flow_pane_g1

0x98cb,	// (0x00046e72) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0004d468) cf0_flow_pane_g

0x98d3,	// (0x00046e7a) cf0_flow_pane_t1

0x9fb5,	// (0x0004755c) main_call6_pane

0x9fb5,	// (0x0004755c) main_calllock_pane

0x98e1,	// (0x00046e88) call6_btn_grp_pane_ParamLimits

0x98e1,	// (0x00046e88) call6_btn_grp_pane

0x98f0,	// (0x00046e97) call6_pane_g1_ParamLimits

0x98f0,	// (0x00046e97) call6_pane_g1

0x98ff,	// (0x00046ea6) popup_call6_1st_window_ParamLimits

0x98ff,	// (0x00046ea6) popup_call6_1st_window

0x990d,	// (0x00046eb4) popup_call6_2nd_window_ParamLimits

0x990d,	// (0x00046eb4) popup_call6_2nd_window

0x991b,	// (0x00046ec2) cell_call6_btn_pane_ParamLimits

0x991b,	// (0x00046ec2) cell_call6_btn_pane

0xa90a,	// (0x00047eb1) bg_popup_call2_in_pane_cp03

0xee5c,	// (0x0004c403) popup_call6_1st_window_g1

0xee64,	// (0x0004c40b) popup_call6_1st_window_g2

0xee6c,	// (0x0004c413) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0004d46d) popup_call6_1st_window_g

0xee74,	// (0x0004c41b) popup_call6_1st_window_t1

0xee83,	// (0x0004c42a) popup_call6_1st_window_t2

0xee93,	// (0x0004c43a) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0004d474) popup_call6_1st_window_t

0xa90a,	// (0x00047eb1) bg_popup_call2_in_pane_cp04

0xee5c,	// (0x0004c403) popup_call6_2nd_window_g1

0xee64,	// (0x0004c40b) popup_call6_2nd_window_g2

0xee6c,	// (0x0004c413) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0004d46d) popup_call6_2nd_window_g

0xee74,	// (0x0004c41b) popup_call6_2nd_window_t1

0x9fb5,	// (0x0004755c) bg_button_pane_cp15

0xeea3,	// (0x0004c44a) cell_call6_btn_pane_g1

0xeeac,	// (0x0004c453) cell_call6_btn_pane_t1

0x992a,	// (0x00046ed1) listscroll_wgtman_pane_ParamLimits

0x992a,	// (0x00046ed1) listscroll_wgtman_pane

0x9946,	// (0x00046eed) wgtman_btn_pane_ParamLimits

0x9946,	// (0x00046eed) wgtman_btn_pane

0xb153,	// (0x000486fa) aid_scroll_copy1

0xeebb,	// (0x0004c462) list_wgtman_pane

0x997b,	// (0x00046f22) wgtman_btn_pane_g1_ParamLimits

0x997b,	// (0x00046f22) wgtman_btn_pane_g1

0x99a3,	// (0x00046f4a) wgtman_btn_pane_t1_ParamLimits

0x99a3,	// (0x00046f4a) wgtman_btn_pane_t1

0xeec5,	// (0x0004c46c) wgtman_btn_pane_t2_ParamLimits

0xeec5,	// (0x0004c46c) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0004d47b) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0004d47b) wgtman_btn_pane_t

0x99da,	// (0x00046f81) listrow_wgtman_pane_ParamLimits

0x99da,	// (0x00046f81) listrow_wgtman_pane

0x99f6,	// (0x00046f9d) listrow_wgtman_pane_g1

0x9a03,	// (0x00046faa) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0004d480) listrow_wgtman_pane_g

0x1fac,	// (0x0003f553) listrow_wgtman_pane_t1

0x1fc4,	// (0x0003f56b) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0004d485) listrow_wgtman_pane_t

0x1fea,	// (0x0003f591) wait_bar_pane_cp09

0xeedc,	// (0x0004c483) main_calllock_btn_pane

0xeee6,	// (0x0004c48d) main_calllock_pane_g1

0x9fb5,	// (0x0004755c) bg_button_pane_cp17

0xeef1,	// (0x0004c498) main_calllock_btn_pane_g1

0xeefa,	// (0x0004c4a1) main_calllock_btn_pane_t1

0x9fb5,	// (0x0004755c) main_dialer3_pane

0x9fb5,	// (0x0004755c) main_fmrd2_pane

0xcbaf,	// (0x0004a156) main_fs_bigclock_unlock_btn_pane_g1

0xef11,	// (0x0004c4b8) main_fs_bigclock_unlock_btn_pane_t1

0x9a21,	// (0x00046fc8) area_fmrd2_info_pane_ParamLimits

0x9a21,	// (0x00046fc8) area_fmrd2_info_pane

0x9a2f,	// (0x00046fd6) area_fmrd2_visual_pane_ParamLimits

0x9a2f,	// (0x00046fd6) area_fmrd2_visual_pane

0x9a3d,	// (0x00046fe4) fmrd2_indi_pane_ParamLimits

0x9a3d,	// (0x00046fe4) fmrd2_indi_pane

0x9a4a,	// (0x00046ff1) area_fmrd2_visual_pane_g1

0x9a52,	// (0x00046ff9) area_fmrd2_visual_pane_t1

0x9a62,	// (0x00047009) area_fmrd2_visual_pane_t2

0x9a72,	// (0x00047019) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0004d48f) area_fmrd2_visual_pane_t

0x9a82,	// (0x00047029) area_fmrd2_info_pane_g1

0x9a8a,	// (0x00047031) area_fmrd2_info_pane_t1

0x9a9a,	// (0x00047041) area_fmrd2_info_pane_t2

0x9aaa,	// (0x00047051) area_fmrd2_info_pane_t3

0x9aba,	// (0x00047061) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0004d496) area_fmrd2_info_pane_t

0x9ac8,	// (0x0004706f) fmrd2_indi_pane_t1

0x9ad8,	// (0x0004707f) fmrd2_indi_pane_t2

0x9ae8,	// (0x0004708f) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0004d49f) fmrd2_indi_pane_t

0xe3f0,	// (0x0004b997) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3f0,	// (0x0004b997) list_single_fs_bigclock_indicator_pane_g5

0xe4a0,	// (0x0004ba47) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4a0,	// (0x0004ba47) list_single_fs_bigclock_indicator_pane_t5

0x946c,	// (0x00046a13) aid_cell_bcale_month_pane_ParamLimits

0x946c,	// (0x00046a13) aid_cell_bcale_month_pane

0x948a,	// (0x00046a31) bcale_month_pane_ParamLimits

0x948a,	// (0x00046a31) bcale_month_pane

0x94a8,	// (0x00046a4f) bcale_preview_pane_ParamLimits

0x94a8,	// (0x00046a4f) bcale_preview_pane

0xecb3,	// (0x0004c25a) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd2,	// (0x0004c279) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd2,	// (0x0004c279) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0004d421) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0004d421) list_single_fs_bigclock_pane_t

0xef09,	// (0x0004c4b0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0004d48a) main_fs_bigclock_unlock_btn_pane_g

0x9af6,	// (0x0004709d) aid_dia3_key_size_ParamLimits

0x9af6,	// (0x0004709d) aid_dia3_key_size

0x9b02,	// (0x000470a9) aid_dia3_listrow_size_ParamLimits

0x9b02,	// (0x000470a9) aid_dia3_listrow_size

0x9b12,	// (0x000470b9) dia3_keypad_fun_pane_ParamLimits

0x9b12,	// (0x000470b9) dia3_keypad_fun_pane

0x9b24,	// (0x000470cb) dia3_keypad_num_pane_ParamLimits

0x9b24,	// (0x000470cb) dia3_keypad_num_pane

0x9b36,	// (0x000470dd) dia3_listscroll_pane_ParamLimits

0x9b36,	// (0x000470dd) dia3_listscroll_pane

0x9b44,	// (0x000470eb) dia3_numentry_pane_ParamLimits

0x9b44,	// (0x000470eb) dia3_numentry_pane

0xef1f,	// (0x0004c4c6) dia3_list_pane

0xef2a,	// (0x0004c4d1) scroll_pane_cp12

0x9fb5,	// (0x0004755c) bg_dia3_numentry_pane

0x9b52,	// (0x000470f9) dia3_numentry_pane_t1

0x9b61,	// (0x00047108) cell_dia3_key_num_pane

0x9b69,	// (0x00047110) cell_dia3_key0_fun_pane_ParamLimits

0x9b69,	// (0x00047110) cell_dia3_key0_fun_pane

0x9b76,	// (0x0004711d) cell_dia3_key1_fun_pane_ParamLimits

0x9b76,	// (0x0004711d) cell_dia3_key1_fun_pane

0x9b83,	// (0x0004712a) dia3_listrow_pane

0xe0fe,	// (0x0004b6a5) bg_dia3_numentry_pane_g1

0x9fb5,	// (0x0004755c) bg_button_pane_cp21

0xef35,	// (0x0004c4dc) cell_dia3_key_num_pane_t1

0xef43,	// (0x0004c4ea) cell_dia3_key_num_pane_t2

0xef52,	// (0x0004c4f9) cell_dia3_key_num_pane_t3

0xef61,	// (0x0004c508) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0004d4a6) cell_dia3_key_num_pane_t

0x9fb5,	// (0x0004755c) bg_button_pane_cp19

0x9b90,	// (0x00047137) cell_dia3_key0_fun_pane_g1

0x9fb5,	// (0x0004755c) bg_button_pane_cp20

0x9b98,	// (0x0004713f) cell_dia3_key1_fun_pane_g1

0x9ba0,	// (0x00047147) area_left_week_number_pane

0x9bb3,	// (0x0004715a) area_top_day_name_pane

0x9bc1,	// (0x00047168) frame_month_view_pane

0xef70,	// (0x0004c517) grid_month_view_pane

0x9bd6,	// (0x0004717d) cell_top_day_name_pane_ParamLimits

0x9bd6,	// (0x0004717d) cell_top_day_name_pane

0x9bf0,	// (0x00047197) cell_area_left_week_number_pane_ParamLimits

0x9bf0,	// (0x00047197) cell_area_left_week_number_pane

0x9c13,	// (0x000471ba) cell_month_view_pane_ParamLimits

0x9c13,	// (0x000471ba) cell_month_view_pane

0xef7e,	// (0x0004c525) frm_month_g1

0x9c3f,	// (0x000471e6) frm_month_g2

0x9c50,	// (0x000471f7) frm_month_g3

0x9c61,	// (0x00047208) frm_month_g4

0x9c72,	// (0x00047219) frm_month_g5

0x9c85,	// (0x0004722c) frm_month_g6

0x9c98,	// (0x0004723f) frm_month_g7

0xef8b,	// (0x0004c532) frm_month_g8

0x9cab,	// (0x00047252) frm_month_g9

0x9cb8,	// (0x0004725f) frm_month_g10

0x9cc5,	// (0x0004726c) frm_month_g11

0x9cd2,	// (0x00047279) frm_month_g12

0x9cdf,	// (0x00047286) frm_month_g13

0x9cec,	// (0x00047293) frm_month_g14

0x9cfb,	// (0x000472a2) frm_month_g15

0x9d0a,	// (0x000472b1) frm_month_g16

0x000f,

0xff08,	// (0x0004d4af) frm_month_g

0xef98,	// (0x0004c53f) cell_top_day_name_pane_t1

0x9d19,	// (0x000472c0) cell_area_left_week_number_pane_g1

0x9d28,	// (0x000472cf) cell_area_left_week_number_pane_t1

0xce0f,	// (0x0004a3b6) cell_month_view_pane_g1

0x9d3e,	// (0x000472e5) cell_month_view_pane_t1

0x9fb5,	// (0x0004755c) main_fps_pane

0xe690,	// (0x0004bc37) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe690,	// (0x0004bc37) cmail_ddmenu_btn02_pane_cp1

0xe6ac,	// (0x0004bc53) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6ac,	// (0x0004bc53) cmail_ddmenu_btn02_pane_cp2

0x961b,	// (0x00046bc2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x961b,	// (0x00046bc2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0004d3d4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0004d3d4) cmail_ddmenu_btn02_pane_g

0x9639,	// (0x00046be0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9639,	// (0x00046be0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0004d3d9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0004d3d9) cmail_ddmenu_btn02_pane_t

0x9d54,	// (0x000472fb) fps_text_pane_ParamLimits

0x9d54,	// (0x000472fb) fps_text_pane

0x9d61,	// (0x00047308) main_fps_pane_g1_ParamLimits

0x9d61,	// (0x00047308) main_fps_pane_g1

0x9d6f,	// (0x00047316) wait_bar_pane_cp010_ParamLimits

0x9d6f,	// (0x00047316) wait_bar_pane_cp010

0x9d7b,	// (0x00047322) fps_text_pane_t1_ParamLimits

0x9d7b,	// (0x00047322) fps_text_pane_t1

0x73ad,	// (0x00044954) cam4_image_uncrop_pane_g1

0x73b6,	// (0x0004495d) cam4_image_uncrop_pane_g2

0x73bf,	// (0x00044966) cam4_image_uncrop_pane_g3

0x73c8,	// (0x0004496f) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004ce95) cam4_image_uncrop_pane_g

0x9b83,	// (0x0004712a) dia3_listrow_pane_ParamLimits

0x9fb5,	// (0x0004755c) main_phob2_pane

0x92aa,	// (0x00046851) cell_tport_appsw_pane_cp02_ParamLimits

0x92aa,	// (0x00046851) cell_tport_appsw_pane_cp02

0x92b9,	// (0x00046860) cell_tport_appsw_pane_cp03_ParamLimits

0x92b9,	// (0x00046860) cell_tport_appsw_pane_cp03

0x9fb5,	// (0x0004755c) phob2_contact_card_pane

0x9fb5,	// (0x0004755c) phob2_listscroll_pane

0xefab,	// (0x0004c552) phob2_list_pane

0xefb3,	// (0x0004c55a) scroll_pane_cp034

0x9d94,	// (0x0004733b) phob2_cc_data_pane_ParamLimits

0x9d94,	// (0x0004733b) phob2_cc_data_pane

0x9dae,	// (0x00047355) phob2_cc_listscroll_pane_ParamLimits

0x9dae,	// (0x00047355) phob2_cc_listscroll_pane

0x9dc8,	// (0x0004736f) list_double_large_graphic_phob2_pane_ParamLimits

0x9dc8,	// (0x0004736f) list_double_large_graphic_phob2_pane

0x9dea,	// (0x00047391) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9dea,	// (0x00047391) list_double_large_graphic_phob2_pane_g1

0x1ffc,	// (0x0003f5a3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1ffc,	// (0x0003f5a3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0004d4d0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0004d4d0) list_double_large_graphic_phob2_pane_g

0x2008,	// (0x0003f5af) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x2008,	// (0x0003f5af) list_double_large_graphic_phob2_pane_t1

0x201e,	// (0x0003f5c5) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x201e,	// (0x0003f5c5) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0004d4d5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0004d4d5) list_double_large_graphic_phob2_pane_t

0x9fb5,	// (0x0004755c) list_highlight_pane_cp024

0x9e00,	// (0x000473a7) phob2_cc_button_pane

0x9e08,	// (0x000473af) phob2_cc_data_pane_g1_ParamLimits

0x9e08,	// (0x000473af) phob2_cc_data_pane_g1

0x9e14,	// (0x000473bb) phob2_cc_data_pane_g2_ParamLimits

0x9e14,	// (0x000473bb) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0004d4da) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0004d4da) phob2_cc_data_pane_g

0x9e20,	// (0x000473c7) phob2_cc_data_pane_t1_ParamLimits

0x9e20,	// (0x000473c7) phob2_cc_data_pane_t1

0x9e32,	// (0x000473d9) phob2_cc_data_pane_t2_ParamLimits

0x9e32,	// (0x000473d9) phob2_cc_data_pane_t2

0x9e44,	// (0x000473eb) phob2_cc_data_pane_t3_ParamLimits

0x9e44,	// (0x000473eb) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0004d4df) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0004d4df) phob2_cc_data_pane_t

0xefbb,	// (0x0004c562) phob2_cc_list_pane_ParamLimits

0xefbb,	// (0x0004c562) phob2_cc_list_pane

0xdd6e,	// (0x0004b315) scroll_pane_cp035_ParamLimits

0xdd6e,	// (0x0004b315) scroll_pane_cp035

0xae38,	// (0x000483df) bg_button_pane_cp033

0xefc7,	// (0x0004c56e) phob2_cc_button_pane_g1

0xefd3,	// (0x0004c57a) phob2_cc_button_pane_t1

0xefe8,	// (0x0004c58f) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0004d4e6) phob2_cc_button_pane_t

0x9e56,	// (0x000473fd) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9e56,	// (0x000473fd) list_double_large_graphic_phob2_cc_pane

0x9e85,	// (0x0004742c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9e85,	// (0x0004742c) list_double_large_graphic_phob2_cc_pane_g1

0x2033,	// (0x0003f5da) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x2033,	// (0x0003f5da) list_double_large_graphic_phob2_cc_pane_g2

0x2042,	// (0x0003f5e9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x2042,	// (0x0003f5e9) list_double_large_graphic_phob2_cc_pane_g3

0x2051,	// (0x0003f5f8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x2051,	// (0x0003f5f8) list_double_large_graphic_phob2_cc_pane_g4

0x2062,	// (0x0003f609) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x2062,	// (0x0003f609) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0004d4eb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0004d4eb) list_double_large_graphic_phob2_cc_pane_g

0x2071,	// (0x0003f618) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x2071,	// (0x0003f618) list_double_large_graphic_phob2_cc_pane_t1

0x209a,	// (0x0003f641) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x209a,	// (0x0003f641) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0004d4f6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0004d4f6) list_double_large_graphic_phob2_cc_pane_t

0xeffa,	// (0x0004c5a1) list_highlight_pane_cp025_ParamLimits

0xeffa,	// (0x0004c5a1) list_highlight_pane_cp025

0xae38,	// (0x000483df) bg_button_pane_cp033_ParamLimits

0xefc7,	// (0x0004c56e) phob2_cc_button_pane_g1_ParamLimits

0xefd3,	// (0x0004c57a) phob2_cc_button_pane_t1_ParamLimits

0xefe8,	// (0x0004c58f) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0004d4e6) phob2_cc_button_pane_t_ParamLimits

0x239a,	// (0x0003f941) popup_wgtman_window

0xd73a,	// (0x0004ace1) scroll_pane_cp038

0x9963,	// (0x00046f0a) wgtman_btn_pane_cp_01_ParamLimits

0x9963,	// (0x00046f0a) wgtman_btn_pane_cp_01

0xf008,	// (0x0004c5af) wgtman_content_pane

0xf011,	// (0x0004c5b8) wgtman_heading_pane

0x9fb5,	// (0x0004755c) bg_heading_pane_cp02

0xf01a,	// (0x0004c5c1) wgtman_heading_pane_g1

0xf022,	// (0x0004c5c9) wgtman_heading_pane_t1

0xf030,	// (0x0004c5d7) scroll_pane_cp036

0xf038,	// (0x0004c5df) wgtman_list_pane

0xec5d,	// (0x0004c204) wgtman_list_pane_t1_ParamLimits

0xec5d,	// (0x0004c204) wgtman_list_pane_t1

0x730c,	// (0x000448b3) cam4_grid_pane

0x11f1,	// (0x0003e798) bg_button_pane_cp015_ParamLimits

0x7fe6,	// (0x0004558d) bg_button_pane_cp016_ParamLimits

0x7ff9,	// (0x000455a0) bg_button_pane_cp017_ParamLimits

0x1235,	// (0x0003e7dc) popup_vitu2_query_window_g3_ParamLimits

0x1235,	// (0x0003e7dc) popup_vitu2_query_window_g3

0x12ae,	// (0x0003e855) popup_vitu2_query_window_t6_ParamLimits

0x12ae,	// (0x0003e855) popup_vitu2_query_window_t6

0x12d9,	// (0x0003e880) popup_vitu2_query_window_t7_ParamLimits

0x12d9,	// (0x0003e880) popup_vitu2_query_window_t7

0xec78,	// (0x0004c21f) cam4_grid_pane_g1

0xec81,	// (0x0004c228) cam4_grid_pane_g2

0xf040,	// (0x0004c5e7) cam4_grid_pane_g3

0xf049,	// (0x0004c5f0) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0004d4fb) cam4_grid_pane_g

0x31f1,	// (0x00040798) aid_placing_vt_slider_lsc_ParamLimits

0x3531,	// (0x00040ad8) vidtel_button_pane_ParamLimits

0x3531,	// (0x00040ad8) vidtel_button_pane

0xf054,	// (0x0004c5fb) bg_button_pane_cp034

0x9e96,	// (0x0004743d) vidtel_button_pane_g1

0xf05e,	// (0x0004c605) vidtel_button_pane_t1

0xd868,	// (0x0004ae0f) aid_size_vtel_slider_touch

0xdd6e,	// (0x0004b315) scroll_pane_cp039

0xe13c,	// (0x0004b6e3) ncim_query_button_pane_cp01_ParamLimits

0xe15b,	// (0x0004b702) ncimui_query_pane_g1_ParamLimits

0xae38,	// (0x000483df) input_focus_pane_cp012_ParamLimits

0xe180,	// (0x0004b727) ncim_query_entry_pane_t1_ParamLimits

0xdd6e,	// (0x0004b315) scroll_pane_cp039_ParamLimits

0xb239,	// (0x000487e0) navi_pane_bcale_mc_g1

0xb241,	// (0x000487e8) navi_pane_bcale_mc_t1

0xe6f5,	// (0x0004bc9c) main_sp_fs_email_pane_g1

0xe701,	// (0x0004bca8) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0004d28c) main_sp_fs_email_pane_g

0xe952,	// (0x0004bef9) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe952,	// (0x0004bef9) list_single_cale_mrui_row_pane_g3

0x1ee7,	// (0x0003f48e) list_single_recal_day_pane_g5_event_pane

0x1efd,	// (0x0003f4a4) list_single_recal_day_pane_g7

0xf06c,	// (0x0004c613) list_recal_day_event_pane_cp01

0xf075,	// (0x0004c61c) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0004c624) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0004c62c) list_recal_vselct_pane_cp01

0xd878,	// (0x0004ae1f) list_recal_day_event_pane_cp01_g1

0x20c3,	// (0x0003f66a) list_recal_day_event_pane_cp01_t1

0x1f05,	// (0x0003f4ac) list_single_recal_day_pane_t1_ParamLimits

0x1f17,	// (0x0003f4be) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0004d3e9) list_single_recal_day_pane_t_ParamLimits

0xa62d,	// (0x00047bd4) bg_notes_pane_ParamLimits

0xa71a,	// (0x00047cc1) list_notes_pane_ParamLimits

0x26e5,	// (0x0003fc8c) scroll_pane_cp06_ParamLimits

0xa73c,	// (0x00047ce3) main_notes_pane_ParamLimits

0x9fb5,	// (0x0004755c) main_welc_pane

0x9e9e,	// (0x00047445) main_welc_body_pane_ParamLimits

0x9e9e,	// (0x00047445) main_welc_body_pane

0x9eb7,	// (0x0004745e) main_welc_opti_pane_ParamLimits

0x9eb7,	// (0x0004745e) main_welc_opti_pane

0x9eec,	// (0x00047493) main_welc_pane_t1_ParamLimits

0x9eec,	// (0x00047493) main_welc_pane_t1

0x9f0a,	// (0x000474b1) main_welc_body_row_pane_ParamLimits

0x9f0a,	// (0x000474b1) main_welc_body_row_pane

0xd143,	// (0x0004a6ea) main_welc_opti_row_pane_ParamLimits

0xd143,	// (0x0004a6ea) main_welc_opti_row_pane

0xf08f,	// (0x0004c636) main_welc_opti_row_pane_g1

0x9f36,	// (0x000474dd) main_welc_opti_row_pane_t1

0xf097,	// (0x0004c63e) main_welc_body_row_pane_t1

0xed89,	// (0x0004c330) popup_notif_wgt_heading_pane

0xeda3,	// (0x0004c34a) aid_size_list_notif_wgt_del_ParamLimits

0xedb0,	// (0x0004c357) list_notif_wgt_row_pane_g1_ParamLimits

0xedbc,	// (0x0004c363) list_notif_wgt_row_pane_g2_ParamLimits

0xedd0,	// (0x0004c377) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0004d450) list_notif_wgt_row_pane_g_ParamLimits

0xeddd,	// (0x0004c384) list_notif_wgt_row_pane_t1_ParamLimits

0xedf3,	// (0x0004c39a) list_notif_wgt_row_pane_t2_ParamLimits

0xee05,	// (0x0004c3ac) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0004d457) list_notif_wgt_row_pane_t_ParamLimits

0x99f6,	// (0x00046f9d) listrow_wgtman_pane_g1_ParamLimits

0x9a03,	// (0x00046faa) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0004d480) listrow_wgtman_pane_g_ParamLimits

0x1fac,	// (0x0003f553) listrow_wgtman_pane_t1_ParamLimits

0x1fc4,	// (0x0003f56b) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0004d485) listrow_wgtman_pane_t_ParamLimits

0x1fea,	// (0x0003f591) wait_bar_pane_cp09_ParamLimits

0x9fb5,	// (0x0004755c) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0004c64d) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0004c655) popup_notif_wgt_heading_pane_t1

0x9fb5,	// (0x0004755c) main_vids_pane

0x9fb5,	// (0x0004755c) vids_listscroll_pane

0x9f45,	// (0x000474ec) scroll_pane_cp040

0x9fb5,	// (0x0004755c) vids_list_pane

0x9f50,	// (0x000474f7) vids_list_double_pane_ParamLimits

0x9f50,	// (0x000474f7) vids_list_double_pane

0x9f68,	// (0x0004750f) vids_list_double_pane_g1

0x9f71,	// (0x00047518) vids_list_double_pane_t1

0x9f81,	// (0x00047528) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0004d509) vids_list_double_pane_t

0xae38,	// (0x000483df) main_ncimui_pane_ParamLimits

0x8b38,	// (0x000460df) main_ncimui_pane_g1_ParamLimits

0x8b44,	// (0x000460eb) main_ncimui_pane_g2_ParamLimits

0x8b44,	// (0x000460eb) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0004d191) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0004d191) main_ncimui_pane_g

0x9ed2,	// (0x00047479) main_welc_pane_g1_ParamLimits

0x9ed2,	// (0x00047479) main_welc_pane_g1

0x9ede,	// (0x00047485) main_welc_pane_g2_ParamLimits

0x9ede,	// (0x00047485) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0004d504) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0004d504) main_welc_pane_g

0xa62d,	// (0x00047bd4) listscroll_mce_pane_ParamLimits

0xb38e,	// (0x00048935) wait_bar_pane_cp10

0xc799,	// (0x00049d40) main_cale_day_pane_ParamLimits

0xc799,	// (0x00049d40) main_cale_week_pane_ParamLimits

0xa62d,	// (0x00047bd4) main_messa_pane_ParamLimits

0x6740,	// (0x00043ce7) main_clock2_btn_pane_ParamLimits

0x6740,	// (0x00043ce7) main_clock2_btn_pane

0xcf97,	// (0x0004a53e) main_clock2_btn_pane_cp01_ParamLimits

0xcf97,	// (0x0004a53e) main_clock2_btn_pane_cp01

0xe923,	// (0x0004beca) list_cale_mrui_pane_ParamLimits

0xee49,	// (0x0004c3f0) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0004d45e) main_cf0_pane_g

0x9ba0,	// (0x00047147) area_left_week_number_pane_ParamLimits

0x9bb3,	// (0x0004715a) area_top_day_name_pane_ParamLimits

0x9bc1,	// (0x00047168) frame_month_view_pane_ParamLimits

0xef70,	// (0x0004c517) grid_month_view_pane_ParamLimits

0xef7e,	// (0x0004c525) frm_month_g1_ParamLimits

0x9c3f,	// (0x000471e6) frm_month_g2_ParamLimits

0x9c50,	// (0x000471f7) frm_month_g3_ParamLimits

0x9c61,	// (0x00047208) frm_month_g4_ParamLimits

0x9c72,	// (0x00047219) frm_month_g5_ParamLimits

0x9c85,	// (0x0004722c) frm_month_g6_ParamLimits

0x9c98,	// (0x0004723f) frm_month_g7_ParamLimits

0xef8b,	// (0x0004c532) frm_month_g8_ParamLimits

0x9cab,	// (0x00047252) frm_month_g9_ParamLimits

0x9cb8,	// (0x0004725f) frm_month_g10_ParamLimits

0x9cc5,	// (0x0004726c) frm_month_g11_ParamLimits

0x9cd2,	// (0x00047279) frm_month_g12_ParamLimits

0x9cdf,	// (0x00047286) frm_month_g13_ParamLimits

0x9cec,	// (0x00047293) frm_month_g14_ParamLimits

0x9cfb,	// (0x000472a2) frm_month_g15_ParamLimits

0x9d0a,	// (0x000472b1) frm_month_g16_ParamLimits

0xff08,	// (0x0004d4af) frm_month_g_ParamLimits

0xef98,	// (0x0004c53f) cell_top_day_name_pane_t1_ParamLimits

0x9d19,	// (0x000472c0) cell_area_left_week_number_pane_g1_ParamLimits

0x9d28,	// (0x000472cf) cell_area_left_week_number_pane_t1_ParamLimits

0xce0f,	// (0x0004a3b6) cell_month_view_pane_g1_ParamLimits

0x9d3e,	// (0x000472e5) cell_month_view_pane_t1_ParamLimits

0xa625,	// (0x00047bcc) main_clock2_btn_pane_g1

0xf0bc,	// (0x0004c663) main_clock2_btn_pane_t1

0xae38,	// (0x000483df) listscroll_cmail_pane_ParamLimits

0xe6f5,	// (0x0004bc9c) main_sp_fs_email_pane_g1_ParamLimits

0xe701,	// (0x0004bca8) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0004d28c) main_sp_fs_email_pane_g_ParamLimits

0xeac1,	// (0x0004c068) list_recal_day_pane_ParamLimits

0xead2,	// (0x0004c079) mian_recal_day_pane_t1

0x18ae,	// (0x0003ee55) list_single_dyc_row_text_pane_t4_ParamLimits

0x18ae,	// (0x0003ee55) list_single_dyc_row_text_pane_t4

0x18e5,	// (0x0003ee8c) list_single_dyc_row_text_pane_t5_ParamLimits

0x18e5,	// (0x0003ee8c) list_single_dyc_row_text_pane_t5

0x195b,	// (0x0003ef02) list_single_dyc_row_text_pane_t6_ParamLimits

0x195b,	// (0x0003ef02) list_single_dyc_row_text_pane_t6

0xad0d,	// (0x000482b4) aid_mgn_list_cale_time_pane

0xae38,	// (0x000483df) main_gallery2_pane_ParamLimits

0xcfad,	// (0x0004a554) main_clock2_pane_cp01_t1

0xcfbb,	// (0x0004a562) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0004cd6b) main_clock2_pane_cp01_t

0x2b30,	// (0x000400d7) cale_week_scroll_pane_g16_ParamLimits

0x2b30,	// (0x000400d7) cale_week_scroll_pane_g16

0xa90a,	// (0x00047eb1) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
