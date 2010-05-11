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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0002e171 };

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
0x17f4,	// (0x0002f965) Screen

0x1800,	// (0x0002f971) application_window

0x1830,	// (0x0002f9a1) area_bottom_pane_ParamLimits

0x1830,	// (0x0002f9a1) area_bottom_pane

0x00e7,	// (0x0002e258) area_top_pane_ParamLimits

0x00e7,	// (0x0002e258) area_top_pane

0x188d,	// (0x0002f9fe) call_video_uplink_pane_ParamLimits

0x188d,	// (0x0002f9fe) call_video_uplink_pane

0x0175,	// (0x0002e2e6) main_pane_ParamLimits

0x0175,	// (0x0002e2e6) main_pane

0xc33f,	// (0x0003a4b0) context_pane

0x4a9c,	// (0x00032c0d) navi_pane

0x4ace,	// (0x00032c3f) popup_cale_events_window_ParamLimits

0x4ace,	// (0x00032c3f) popup_cale_events_window

0xc352,	// (0x0003a4c3) popup_mup_playback_window

0x4ae6,	// (0x00032c57) signal_pane

0xa286,	// (0x000383f7) main_browser_pane

0xa489,	// (0x000385fa) main_burst_pane

0x056d,	// (0x0002e6de) main_calc_pane

0xc325,	// (0x0003a496) main_cale_day_pane

0x0581,	// (0x0002e6f2) main_cale_month_pane

0xc325,	// (0x0003a496) main_cale_week_pane

0xa489,	// (0x000385fa) main_call_pane

0x9f5a,	// (0x000380cb) main_call_poc_pane

0xa489,	// (0x000385fa) main_camera_pane

0xa489,	// (0x000385fa) main_chi_dic_pane

0xac88,	// (0x00038df9) main_clock_pane

0x9f5a,	// (0x000380cb) main_fmradio_pane

0xa489,	// (0x000385fa) main_graph_messa_pane

0x9f5a,	// (0x000380cb) main_help_pane

0xa286,	// (0x000383f7) main_im_pane

0xa1b5,	// (0x00038326) main_image_pane_ParamLimits

0xa1b5,	// (0x00038326) main_image_pane

0x9f5a,	// (0x000380cb) main_location2_pane

0xa489,	// (0x000385fa) main_location_pane

0xa1b5,	// (0x00038326) main_messa_pane

0x9f5a,	// (0x000380cb) main_mp2_pane

0xa489,	// (0x000385fa) main_mp_pane

0x9f5a,	// (0x000380cb) main_msg_pane

0x9f5a,	// (0x000380cb) main_mup_eq_pane

0x9f5a,	// (0x000380cb) main_mup_pane

0xa286,	// (0x000383f7) main_notes_pane

0x9f5a,	// (0x000380cb) main_pec_pane

0x9f5a,	// (0x000380cb) main_phob_pane

0x9f5a,	// (0x000380cb) main_pinb_pane

0x9f5a,	// (0x000380cb) main_postcard_pane

0x9f5a,	// (0x000380cb) main_qdial_pane

0xa489,	// (0x000385fa) main_skin_pane

0x9f5a,	// (0x000380cb) main_smil2_pane

0xa489,	// (0x000385fa) main_smil_pane

0xa489,	// (0x000385fa) main_video_pane

0xa489,	// (0x000385fa) main_video_tele_pane

0xa1b5,	// (0x00038326) main_viewer_pane_ParamLimits

0xa1b5,	// (0x00038326) main_viewer_pane

0xa489,	// (0x000385fa) main_vorec_pane

0x05d3,	// (0x0002e744) popup_blid_sat_info_window_ParamLimits

0x05d3,	// (0x0002e744) popup_blid_sat_info_window

0x062b,	// (0x0002e79c) popup_dyc_status_message_window_ParamLimits

0x062b,	// (0x0002e79c) popup_dyc_status_message_window

0x0643,	// (0x0002e7b4) popup_grid_large_graphic_window_ParamLimits

0x0643,	// (0x0002e7b4) popup_grid_large_graphic_window

0x06f3,	// (0x0002e864) popup_loc_request_window_ParamLimits

0x06f3,	// (0x0002e864) popup_loc_request_window

0x07ef,	// (0x0002e960) popup_wml_address_window_ParamLimits

0x07ef,	// (0x0002e960) popup_wml_address_window

0x488c,	// (0x000329fd) call_muted_g1

0x4540,	// (0x000326b1) popup_call_audio_conf_window_ParamLimits

0x4540,	// (0x000326b1) popup_call_audio_conf_window

0x48a0,	// (0x00032a11) popup_call_audio_first_window_ParamLimits

0x48a0,	// (0x00032a11) popup_call_audio_first_window

0x4916,	// (0x00032a87) popup_call_audio_in_window_ParamLimits

0x4916,	// (0x00032a87) popup_call_audio_in_window

0x4952,	// (0x00032ac3) popup_call_audio_out_window_ParamLimits

0x4952,	// (0x00032ac3) popup_call_audio_out_window

0x498c,	// (0x00032afd) popup_call_audio_second_window_ParamLimits

0x498c,	// (0x00032afd) popup_call_audio_second_window

0x49e2,	// (0x00032b53) popup_call_audio_wait_window_ParamLimits

0x49e2,	// (0x00032b53) popup_call_audio_wait_window

0x4a17,	// (0x00032b88) popup_number_entry_window_ParamLimits

0x4a17,	// (0x00032b88) popup_number_entry_window

0x9b47,	// (0x00037cb8) bg_popup_call_pane_cp05_ParamLimits

0x9b47,	// (0x00037cb8) bg_popup_call_pane_cp05

0x9b67,	// (0x00037cd8) popup_number_entry_window_t1

0x9b7a,	// (0x00037ceb) popup_number_entry_window_t2

0x9b8c,	// (0x00037cfd) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0003d23b) popup_number_entry_window_t

0x9b9e,	// (0x00037d0f) text_title_cp2

0x9bb1,	// (0x00037d22) bg_popup_call_pane_cp_ParamLimits

0x9bb1,	// (0x00037d22) bg_popup_call_pane_cp

0x9bbf,	// (0x00037d30) call_thumbnail_pane

0x9bc7,	// (0x00037d38) popup_call_audio_in_window_g1_ParamLimits

0x9bc7,	// (0x00037d38) popup_call_audio_in_window_g1

0x9bd3,	// (0x00037d44) popup_call_audio_in_window_g2_ParamLimits

0x9bd3,	// (0x00037d44) popup_call_audio_in_window_g2

0x9bdf,	// (0x00037d50) popup_call_audio_in_window_g3_ParamLimits

0x9bdf,	// (0x00037d50) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0003d244) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0003d244) popup_call_audio_in_window_g

0x9beb,	// (0x00037d5c) popup_call_audio_in_window_t1_ParamLimits

0x9beb,	// (0x00037d5c) popup_call_audio_in_window_t1

0x9c07,	// (0x00037d78) popup_call_audio_in_window_t2_ParamLimits

0x9c07,	// (0x00037d78) popup_call_audio_in_window_t2

0x9c23,	// (0x00037d94) popup_call_audio_in_window_t3_ParamLimits

0x9c23,	// (0x00037d94) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0003d24b) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0003d24b) popup_call_audio_in_window_t

0x9bb1,	// (0x00037d22) bg_popup_call_pane_cp01_ParamLimits

0x9bb1,	// (0x00037d22) bg_popup_call_pane_cp01

0x9bbf,	// (0x00037d30) call_thumbnail_pane_cp02

0x9c36,	// (0x00037da7) call_type_pane_cp022

0x9c3e,	// (0x00037daf) popup_call_audio_out_window_g1_ParamLimits

0x9c3e,	// (0x00037daf) popup_call_audio_out_window_g1

0x9c50,	// (0x00037dc1) popup_call_audio_out_window_g2_ParamLimits

0x9c50,	// (0x00037dc1) popup_call_audio_out_window_g2

0x9c5c,	// (0x00037dcd) popup_call_audio_out_window_g3_ParamLimits

0x9c5c,	// (0x00037dcd) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0003d252) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0003d252) popup_call_audio_out_window_g

0x9c6e,	// (0x00037ddf) popup_call_audio_out_window_t1_ParamLimits

0x9c6e,	// (0x00037ddf) popup_call_audio_out_window_t1

0x9c86,	// (0x00037df7) popup_call_audio_out_window_t2_ParamLimits

0x9c86,	// (0x00037df7) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0003d259) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0003d259) popup_call_audio_out_window_t

0x9c9b,	// (0x00037e0c) bg_popup_call_pane_ParamLimits

0x9c9b,	// (0x00037e0c) bg_popup_call_pane

0x1904,	// (0x0002fa75) call_thumbnail_pane_cp_ParamLimits

0x1904,	// (0x0002fa75) call_thumbnail_pane_cp

0x9d1f,	// (0x00037e90) call_type_pane_cp01_ParamLimits

0x9d1f,	// (0x00037e90) call_type_pane_cp01

0x9d63,	// (0x00037ed4) popup_call_audio_first_window_g1_ParamLimits

0x9d63,	// (0x00037ed4) popup_call_audio_first_window_g1

0x9daf,	// (0x00037f20) popup_call_audio_first_window_g2_ParamLimits

0x9daf,	// (0x00037f20) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0003d25e) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0003d25e) popup_call_audio_first_window_g

0x9df3,	// (0x00037f64) popup_call_audio_first_window_t1_ParamLimits

0x9df3,	// (0x00037f64) popup_call_audio_first_window_t1

0x9e9f,	// (0x00038010) popup_call_audio_first_window_t4_ParamLimits

0x9e9f,	// (0x00038010) popup_call_audio_first_window_t4

0x9f2b,	// (0x0003809c) popup_call_audio_first_window_t5_ParamLimits

0x9f2b,	// (0x0003809c) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0003d263) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0003d263) popup_call_audio_first_window_t

0x9f5a,	// (0x000380cb) bg_popup_call_pane_cp02

0x9f64,	// (0x000380d5) call_type_pane_cp023

0x9f6c,	// (0x000380dd) popup_call_audio_wait_window_g1

0x9f74,	// (0x000380e5) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003d26a) popup_call_audio_wait_window_g

0x9f7c,	// (0x000380ed) popup_call_audio_wait_window_t3

0x9f8a,	// (0x000380fb) bg_popup_call_pane_cp03_ParamLimits

0x9f8a,	// (0x000380fb) bg_popup_call_pane_cp03

0x9fea,	// (0x0003815b) call_thumbnail_pane_cp011_ParamLimits

0x9fea,	// (0x0003815b) call_thumbnail_pane_cp011

0x9ff6,	// (0x00038167) call_type_pane_cp034_ParamLimits

0x9ff6,	// (0x00038167) call_type_pane_cp034

0xa032,	// (0x000381a3) popup_call_audio_second_window_g1_ParamLimits

0xa032,	// (0x000381a3) popup_call_audio_second_window_g1

0xa06e,	// (0x000381df) popup_call_audio_second_window_g2_ParamLimits

0xa06e,	// (0x000381df) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0003d26f) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0003d26f) popup_call_audio_second_window_g

0xa0aa,	// (0x0003821b) popup_call_audio_second_window_t1_ParamLimits

0xa0aa,	// (0x0003821b) popup_call_audio_second_window_t1

0xa12b,	// (0x0003829c) popup_call_audio_second_window_t2_ParamLimits

0xa12b,	// (0x0003829c) popup_call_audio_second_window_t2

0xa161,	// (0x000382d2) popup_call_audio_second_window_t3_ParamLimits

0xa161,	// (0x000382d2) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0003d274) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0003d274) popup_call_audio_second_window_t

0x9f5a,	// (0x000380cb) bg_popup_call_pane_cp04

0xa197,	// (0x00038308) list_conf_pane

0xa19f,	// (0x00038310) popup_call_audio_conf_window_t1

0xa1ad,	// (0x0003831e) call_thumbnail_pane_g1

0xa1b5,	// (0x00038326) bg_pinb_pane_ParamLimits

0xa1b5,	// (0x00038326) bg_pinb_pane

0xa1c3,	// (0x00038334) find_pinb_pane

0xa1cc,	// (0x0003833d) listscroll_pinb_pane_ParamLimits

0xa1cc,	// (0x0003833d) listscroll_pinb_pane

0xa1db,	// (0x0003834c) pinb_bg_pane_g1

0x1928,	// (0x0002fa99) pinb_bg_pane_g2

0x1934,	// (0x0002faa5) pinb_bg_pane_g3

0x1940,	// (0x0002fab1) pinb_bg_pane_g4

0x194c,	// (0x0002fabd) pinb_bg_pane_g5

0x1958,	// (0x0002fac9) pinb_bg_pane_g6

0x1963,	// (0x0002fad4) pinb_bg_pane_g7

0x196e,	// (0x0002fadf) pinb_bg_pane_g8

0x1979,	// (0x0002faea) pinb_bg_pane_g9

0x1983,	// (0x0002faf4) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0003d27b) pinb_bg_pane_g

0x19a0,	// (0x0002fb11) grid_pinb_pane

0x19a9,	// (0x0002fb1a) list_pinb_pane

0x19b2,	// (0x0002fb23) scroll_pane_cp01_ParamLimits

0x19b2,	// (0x0002fb23) scroll_pane_cp01

0xa1e5,	// (0x00038356) find_pinb_pane_g1_ParamLimits

0xa1e5,	// (0x00038356) find_pinb_pane_g1

0xa1fd,	// (0x0003836e) find_pinb_pane_t1

0xa20f,	// (0x00038380) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0003d295) find_pinb_pane_t

0xa224,	// (0x00038395) input_focus_pane_cp01_ParamLimits

0xa224,	// (0x00038395) input_focus_pane_cp01

0x19c4,	// (0x0002fb35) cell_pinb_pane_ParamLimits

0x19c4,	// (0x0002fb35) cell_pinb_pane

0x19ef,	// (0x0002fb60) cell_pinb_pane_g1_ParamLimits

0x19ef,	// (0x0002fb60) cell_pinb_pane_g1

0xa230,	// (0x000383a1) cell_pinb_pane_g2_ParamLimits

0xa230,	// (0x000383a1) cell_pinb_pane_g2

0xa23c,	// (0x000383ad) cell_pinb_pane_g3_ParamLimits

0xa23c,	// (0x000383ad) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0003d29a) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0003d29a) cell_pinb_pane_g

0x9f5a,	// (0x000380cb) grid_highlight_pane_cp01

0x1a02,	// (0x0002fb73) list_pinb_item_pane_ParamLimits

0x1a02,	// (0x0002fb73) list_pinb_item_pane

0x9f5a,	// (0x000380cb) list_highlight_pane_cp02

0x1a15,	// (0x0002fb86) list_pinb_item_pane_g1_ParamLimits

0x1a15,	// (0x0002fb86) list_pinb_item_pane_g1

0x1a22,	// (0x0002fb93) list_pinb_item_pane_g2_ParamLimits

0x1a22,	// (0x0002fb93) list_pinb_item_pane_g2

0x1a2e,	// (0x0002fb9f) list_pinb_item_pane_g3_ParamLimits

0x1a2e,	// (0x0002fb9f) list_pinb_item_pane_g3

0x1a3f,	// (0x0002fbb0) list_pinb_item_pane_g4_ParamLimits

0x1a3f,	// (0x0002fbb0) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0003d2a1) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0003d2a1) list_pinb_item_pane_g

0x1a4b,	// (0x0002fbbc) list_pinb_item_pane_t1_ParamLimits

0x1a4b,	// (0x0002fbbc) list_pinb_item_pane_t1

0x030f,	// (0x0002e480) calc_display_pane

0x0337,	// (0x0002e4a8) calc_paper_pane

0x035a,	// (0x0002e4cb) grid_calc_pane

0x9f5a,	// (0x000380cb) bg_list_pane_cp01

0x1a6a,	// (0x0002fbdb) clock_g1

0x1a72,	// (0x0002fbe3) clock_g2

0x0001,

0xf139,	// (0x0003d2aa) clock_g

0x1a7a,	// (0x0002fbeb) clock_t1_ParamLimits

0x1a7a,	// (0x0002fbeb) clock_t1

0x1a8f,	// (0x0002fc00) clock_t2_ParamLimits

0x1a8f,	// (0x0002fc00) clock_t2

0x1aa1,	// (0x0002fc12) clock_t3_ParamLimits

0x1aa1,	// (0x0002fc12) clock_t3

0x1ab3,	// (0x0002fc24) clock_t4_ParamLimits

0x1ab3,	// (0x0002fc24) clock_t4

0x1ac5,	// (0x0002fc36) clock_t5_ParamLimits

0x1ac5,	// (0x0002fc36) clock_t5

0x1ada,	// (0x0002fc4b) clock_t6_ParamLimits

0x1ada,	// (0x0002fc4b) clock_t6

0x1aec,	// (0x0002fc5d) clock_t7_ParamLimits

0x1aec,	// (0x0002fc5d) clock_t7

0x1afe,	// (0x0002fc6f) clock_t8_ParamLimits

0x1afe,	// (0x0002fc6f) clock_t8

0x1b12,	// (0x0002fc83) clock_t9_ParamLimits

0x1b12,	// (0x0002fc83) clock_t9

0x0008,

0xf13e,	// (0x0003d2af) clock_t_ParamLimits

0xf13e,	// (0x0003d2af) clock_t

0xa248,	// (0x000383b9) popup_clock_analogue_window_cp02

0xa248,	// (0x000383b9) popup_clock_digital_window_cp01

0xa250,	// (0x000383c1) listscroll_help_pane

0x9f5a,	// (0x000380cb) phob_pre_status_pane

0xa25a,	// (0x000383cb) grid_qdial_pane

0xa1b5,	// (0x00038326) listscroll_mce_pane

0xa1b5,	// (0x00038326) bg_notes_pane

0xa264,	// (0x000383d5) list_notes_pane

0x1b26,	// (0x0002fc97) scroll_pane_cp06

0xa272,	// (0x000383e3) bg_calc_paper_pane

0x1b3a,	// (0x0002fcab) list_calc_pane

0xa286,	// (0x000383f7) bg_calc_display_pane

0x0388,	// (0x0002e4f9) calc_display_pane_t1

0x039a,	// (0x0002e50b) calc_display_pane_t2

0x1b54,	// (0x0002fcc5) calc_display_pane_t3

0x0002,

0xf151,	// (0x0003d2c2) calc_display_pane_t

0x03ac,	// (0x0002e51d) cell_calc_pane_ParamLimits

0x03ac,	// (0x0002e51d) cell_calc_pane

0xa292,	// (0x00038403) bg_calc_paper_pane_g1

0xa29e,	// (0x0003840f) bg_calc_paper_pane_g2

0xa2aa,	// (0x0003841b) bg_calc_paper_pane_g3

0xa2b6,	// (0x00038427) bg_calc_paper_pane_g4

0xa2c2,	// (0x00038433) bg_calc_paper_pane_g5

0x1b66,	// (0x0002fcd7) bg_calc_paper_pane_g6

0x1b75,	// (0x0002fce6) bg_calc_paper_pane_g7

0x1b84,	// (0x0002fcf5) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0003d2c9) bg_calc_paper_pane_g

0x1b97,	// (0x0002fd08) calc_bg_paper_pane_g9

0x1baa,	// (0x0002fd1b) list_calc_item_pane_ParamLimits

0x1baa,	// (0x0002fd1b) list_calc_item_pane

0xa2ce,	// (0x0003843f) list_calc_item_pane_g1

0x1bc3,	// (0x0002fd34) list_calc_item_pane_t1_ParamLimits

0x1bc3,	// (0x0002fd34) list_calc_item_pane_t1

0x03e3,	// (0x0002e554) list_calc_item_pane_t2_ParamLimits

0x03e3,	// (0x0002e554) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0003d2da) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0003d2da) list_calc_item_pane_t

0xa2db,	// (0x0003844c) cell_calc_pane_g1

0xa2e5,	// (0x00038456) grid_highlight_pane_cp02

0xa307,	// (0x00038478) bg_calc_display_pane_g1

0x1bd5,	// (0x0002fd46) bg_calc_display_pane_g2

0xa310,	// (0x00038481) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0003d2e4) bg_calc_display_pane_g

0x0415,	// (0x0002e586) cell_qdial_pane_ParamLimits

0x0415,	// (0x0002e586) cell_qdial_pane

0x1bdf,	// (0x0002fd50) cell_qdial_pane_g1_ParamLimits

0x1bdf,	// (0x0002fd50) cell_qdial_pane_g1

0x1bf5,	// (0x0002fd66) cell_qdial_pane_g2_ParamLimits

0x1bf5,	// (0x0002fd66) cell_qdial_pane_g2

0xa319,	// (0x0003848a) cell_qdial_pane_g3_ParamLimits

0xa319,	// (0x0003848a) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0003d2eb) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0003d2eb) cell_qdial_pane_g

0x1c1b,	// (0x0002fd8c) cell_qdial_pane_t1_ParamLimits

0x1c1b,	// (0x0002fd8c) cell_qdial_pane_t1

0x1c33,	// (0x0002fda4) cell_qdial_pane_t2_ParamLimits

0x1c33,	// (0x0002fda4) cell_qdial_pane_t2

0x1c46,	// (0x0002fdb7) cell_qdial_pane_t3_ParamLimits

0x1c46,	// (0x0002fdb7) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0003d2f4) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0003d2f4) cell_qdial_pane_t

0x9f5a,	// (0x000380cb) grid_highlight_pane_cp04

0xa325,	// (0x00038496) thumbnail_qdial_pane_ParamLimits

0xa325,	// (0x00038496) thumbnail_qdial_pane

0xa381,	// (0x000384f2) list_help_pane

0xa38a,	// (0x000384fb) scroll_pane_cp02

0xa393,	// (0x00038504) help_list_pane_t1_ParamLimits

0xa393,	// (0x00038504) help_list_pane_t1

0x1c59,	// (0x0002fdca) bg_notes_pane_g2

0x1c61,	// (0x0002fdd2) bg_notes_pane_g3

0x1c69,	// (0x0002fdda) notes_bg_pane_g1

0x1c71,	// (0x0002fde2) notes_bg_pane_g4

0x1c79,	// (0x0002fdea) notes_bg_pane_g5

0x1c81,	// (0x0002fdf2) notes_bg_pane_g6

0x1c89,	// (0x0002fdfa) notes_bg_pane_g7

0x1c91,	// (0x0002fe02) notes_bg_pane_g8

0x1c99,	// (0x0002fe0a) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0003d312) notes_bg_pane_g

0x1ca1,	// (0x0002fe12) list_notes_text_pane_ParamLimits

0x1ca1,	// (0x0002fe12) list_notes_text_pane

0xa3b1,	// (0x00038522) list_notes_text_pane_g1

0xa3ba,	// (0x0003852b) list_notes_text_pane_t1

0x1cb7,	// (0x0002fe28) listscroll_cale_week_pane

0x1ce3,	// (0x0002fe54) bg_cale_heading_pane

0xa3e2,	// (0x00038553) bg_cale_pane_cp01

0x1cfb,	// (0x0002fe6c) cale_week_corner_pane

0x1d1a,	// (0x0002fe8b) cale_week_day_heading_pane

0x1d37,	// (0x0002fea8) cale_week_scroll_pane_g1

0x1d4a,	// (0x0002febb) cale_week_scroll_pane_g2

0x1d62,	// (0x0002fed3) cale_week_scroll_pane_g3

0x1d7a,	// (0x0002feeb) cale_week_scroll_pane_g4

0x1d92,	// (0x0002ff03) cale_week_scroll_pane_g5

0x1db2,	// (0x0002ff23) cale_week_scroll_pane_g6

0x1dd2,	// (0x0002ff43) cale_week_scroll_pane_g7

0x1df2,	// (0x0002ff63) cale_week_scroll_pane_g8

0x1e16,	// (0x0002ff87) cale_week_scroll_pane_g9

0x1e2e,	// (0x0002ff9f) cale_week_scroll_pane_g10

0x1e46,	// (0x0002ffb7) cale_week_scroll_pane_g11

0x1e5e,	// (0x0002ffcf) cale_week_scroll_pane_g12

0x1e76,	// (0x0002ffe7) cale_week_scroll_pane_g13

0x1e76,	// (0x0002ffe7) cale_week_scroll_pane_g14

0x1e76,	// (0x0002ffe7) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0003d321) cale_week_scroll_pane_g

0x1eb2,	// (0x00030023) cale_week_time_pane

0x1ed6,	// (0x00030047) grid_cale_week_pane

0xa411,	// (0x00038582) scroll_pane_cp08

0x1efc,	// (0x0003006d) cell_cale_week_pane_ParamLimits

0x1efc,	// (0x0003006d) cell_cale_week_pane

0x1f8a,	// (0x000300fb) cale_week_day_heading_pane_t1

0x1fd4,	// (0x00030145) cale_week_day_heading_pane_t2

0x2023,	// (0x00030194) cale_week_day_heading_pane_t3

0x2072,	// (0x000301e3) cale_week_day_heading_pane_t4

0x20c1,	// (0x00030232) cale_week_day_heading_pane_t5

0x2118,	// (0x00030289) cale_week_day_heading_pane_t6

0x216f,	// (0x000302e0) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0003d342) cale_week_day_heading_pane_t

0xa42e,	// (0x0003859f) bg_cale_side_pane

0x0429,	// (0x0002e59a) cale_week_time_pane_t1

0x0443,	// (0x0002e5b4) cale_week_time_pane_t2

0x045d,	// (0x0002e5ce) cale_week_time_pane_t3

0x0477,	// (0x0002e5e8) cale_week_time_pane_t4

0x0491,	// (0x0002e602) cale_week_time_pane_t5

0x04ab,	// (0x0002e61c) cale_week_time_pane_t6

0x04c5,	// (0x0002e636) cale_week_time_pane_t7

0x04df,	// (0x0002e650) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0003d351) cale_week_time_pane_t

0x21b9,	// (0x0003032a) cell_cale_week_pane_g2

0x21dd,	// (0x0003034e) cell_cale_week_pane_g3_ParamLimits

0x21dd,	// (0x0003034e) cell_cale_week_pane_g3

0xa43c,	// (0x000385ad) grid_highlight_pane_cp07

0xa444,	// (0x000385b5) listscroll_gms_pane

0xa44e,	// (0x000385bf) grid_gms_pane

0xa457,	// (0x000385c8) listscroll_gms_pane_g1

0xa45f,	// (0x000385d0) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0003d362) listscroll_gms_pane_g

0x21f5,	// (0x00030366) scroll_pane_cp010

0x2200,	// (0x00030371) cell_gms_pane_ParamLimits

0x2200,	// (0x00030371) cell_gms_pane

0x2212,	// (0x00030383) cell_gms_pane_g1

0xa467,	// (0x000385d8) cell_gms_pane_g2

0xa46f,	// (0x000385e0) cell_gms_pane_g3

0xa478,	// (0x000385e9) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0003d367) cell_gms_pane_g

0xa481,	// (0x000385f2) grid_highlight_pane_cp09

0x4836,	// (0x000329a7) phob_pre_status_pane_g1

0x483e,	// (0x000329af) phob_pre_status_pane_g2

0x4846,	// (0x000329b7) phob_pre_status_pane_g3

0x484e,	// (0x000329bf) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0003d765) phob_pre_status_pane_g

0x485e,	// (0x000329cf) phob_pre_status_pane_t1

0x486c,	// (0x000329dd) phob_pre_status_pane_t2

0x487c,	// (0x000329ed) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0003d770) phob_pre_status_pane_t

0xa489,	// (0x000385fa) bg_list_pane_cp05

0x2222,	// (0x00030393) grid_vorec_pane

0x222a,	// (0x0003039b) vorec_t1

0x2238,	// (0x000303a9) vorec_t2

0x2246,	// (0x000303b7) vorec_t3

0x2254,	// (0x000303c5) vorec_t4

0x17ce,	// (0x0002f93f) vorec_t5

0x17dc,	// (0x0002f94d) vorec_t6

0x0004,

0xf1ff,	// (0x0003d370) vorec_t

0x17ea,	// (0x0002f95b) wait_bar_pane_cp01

0x2270,	// (0x000303e1) cell_vorec_pane_ParamLimits

0x2270,	// (0x000303e1) cell_vorec_pane

0x2283,	// (0x000303f4) cell_vorec_pane_g1

0x9f5a,	// (0x000380cb) grid_highlight_pane_cp05

0x22a5,	// (0x00030416) cams_zoom_pane

0x22b4,	// (0x00030425) image_vga_pane

0x22ce,	// (0x0003043f) main_camera_pane_g1

0x22e0,	// (0x00030451) main_camera_pane_g2

0x22f0,	// (0x00030461) main_camera_pane_g3

0x2300,	// (0x00030471) main_camera_pane_g4

0x2310,	// (0x00030481) main_camera_pane_g5

0x2320,	// (0x00030491) main_camera_pane_g6

0x2330,	// (0x000304a1) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0003d37b) main_camera_pane_g

0x2340,	// (0x000304b1) main_camera_pane_t1

0x2356,	// (0x000304c7) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0003d38c) main_camera_pane_t

0x2390,	// (0x00030501) cams_zoom_pane_cp_ParamLimits

0x2390,	// (0x00030501) cams_zoom_pane_cp

0x23b8,	// (0x00030529) image_cif_pane_ParamLimits

0x23b8,	// (0x00030529) image_cif_pane

0x23f3,	// (0x00030564) image_subqcif_pane

0x23fb,	// (0x0003056c) main_video_pane_g1_ParamLimits

0x23fb,	// (0x0003056c) main_video_pane_g1

0x241f,	// (0x00030590) main_video_pane_g2_ParamLimits

0x241f,	// (0x00030590) main_video_pane_g2

0x2453,	// (0x000305c4) main_video_pane_g3_ParamLimits

0x2453,	// (0x000305c4) main_video_pane_g3

0x2481,	// (0x000305f2) main_video_pane_g4_ParamLimits

0x2481,	// (0x000305f2) main_video_pane_g4

0x24af,	// (0x00030620) main_video_pane_g5_ParamLimits

0x24af,	// (0x00030620) main_video_pane_g5

0xa49d,	// (0x0003860e) main_video_pane_g6_ParamLimits

0xa49d,	// (0x0003860e) main_video_pane_g6

0x0006,

0xf220,	// (0x0003d391) main_video_pane_g_ParamLimits

0xf220,	// (0x0003d391) main_video_pane_g

0x24d8,	// (0x00030649) main_video_pane_t1_ParamLimits

0x24d8,	// (0x00030649) main_video_pane_t1

0xa4b7,	// (0x00038628) cams_zoom_pane_g1

0xa4c0,	// (0x00038631) cams_zoom_pane_g2

0xa4c9,	// (0x0003863a) cams_zoom_pane_g3

0xa4d2,	// (0x00038643) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0003d3a0) cams_zoom_pane_g

0x2535,	// (0x000306a6) grid_cams_pane

0x254f,	// (0x000306c0) linegrid_cams_pane

0x2562,	// (0x000306d3) cell_cams_pane_ParamLimits

0x2562,	// (0x000306d3) cell_cams_pane

0xa4db,	// (0x0003864c) cams_burst_image_pane

0xa4e3,	// (0x00038654) cell_cams_pane_g1

0x9f5a,	// (0x000380cb) grid_highlight_pane_cp03

0xa2db,	// (0x0003844c) mp_bg_pane_g1

0x9f5a,	// (0x000380cb) bg_list_pane_cp03

0xc24a,	// (0x0003a3bb) bg_mp_pane

0xc252,	// (0x0003a3c3) grid_mp_pane

0xc25a,	// (0x0003a3cb) media_player_g1

0xc262,	// (0x0003a3d3) media_player_t1

0xc270,	// (0x0003a3e1) media_player_t2

0xc27e,	// (0x0003a3ef) media_player_t3

0xc28c,	// (0x0003a3fd) media_player_t4

0xc29a,	// (0x0003a40b) media_player_t5

0xc2a8,	// (0x0003a419) media_player_t6

0xc2b6,	// (0x0003a427) media_player_t7

0x0006,

0xf5de,	// (0x0003d74f) media_player_t

0xc2c4,	// (0x0003a435) wait_bar_pane_cp02

0xf5c3,	// (0x0003d734) main_usb_pane_t

0x482d,	// (0x0003299e) cell_mp_pane

0xa2db,	// (0x0003844c) cell_mp_pane_g1

0x9f5a,	// (0x000380cb) grid_highlight_pane_cp06

0xa4eb,	// (0x0003865c) grid_skin_colour_pane

0xa4f3,	// (0x00038664) list_highlight_pane_cp03

0x2692,	// (0x00030803) skin_g1

0xa4fb,	// (0x0003866c) skin_t1

0xa50a,	// (0x0003867b) skin_t2

0x0001,

0xf264,	// (0x0003d3d5) skin_t

0x269a,	// (0x0003080b) cell_skin_colour_pane_ParamLimits

0x269a,	// (0x0003080b) cell_skin_colour_pane

0xa518,	// (0x00038689) cell_skin_colour_pane_g1

0x2713,	// (0x00030884) call_video_g1_ParamLimits

0x2713,	// (0x00030884) call_video_g1

0x272f,	// (0x000308a0) call_video_g2_ParamLimits

0x272f,	// (0x000308a0) call_video_g2

0x0001,

0xf269,	// (0x0003d3da) call_video_g_ParamLimits

0xf269,	// (0x0003d3da) call_video_g

0x2781,	// (0x000308f2) call_video_uplink_pane_cp1_ParamLimits

0x2781,	// (0x000308f2) call_video_uplink_pane_cp1

0xa52a,	// (0x0003869b) call_video_uplink_pane_cp2

0x2820,	// (0x00030991) video_down_crop_pane_ParamLimits

0x2820,	// (0x00030991) video_down_crop_pane

0x2909,	// (0x00030a7a) video_down_pane_ParamLimits

0x2909,	// (0x00030a7a) video_down_pane

0xa532,	// (0x000386a3) video_down_subqcif_pane_ParamLimits

0xa532,	// (0x000386a3) video_down_subqcif_pane

0xa54a,	// (0x000386bb) video_down_subqcif_pane_cp_ParamLimits

0xa54a,	// (0x000386bb) video_down_subqcif_pane_cp

0xa570,	// (0x000386e1) im_reading_pane_ParamLimits

0xa570,	// (0x000386e1) im_reading_pane

0x2a17,	// (0x00030b88) im_writing_pane_ParamLimits

0x2a17,	// (0x00030b88) im_writing_pane

0x2a2d,	// (0x00030b9e) im_reading_pane_t1

0xa58a,	// (0x000386fb) list_im_pane

0xa59b,	// (0x0003870c) scroll_pane_cp07

0x2a67,	// (0x00030bd8) im_writing_pane_t1_ParamLimits

0x2a67,	// (0x00030bd8) im_writing_pane_t1

0xa5b4,	// (0x00038725) im_writing_pane_t2_ParamLimits

0xa5b4,	// (0x00038725) im_writing_pane_t2

0x0001,

0xf273,	// (0x0003d3e4) im_writing_pane_t_ParamLimits

0xf273,	// (0x0003d3e4) im_writing_pane_t

0x9f5a,	// (0x000380cb) input_focus_pane_cp04

0x9f5a,	// (0x000380cb) input_focus_pane_cp05

0x2a7c,	// (0x00030bed) list_im_single_pane_ParamLimits

0x2a7c,	// (0x00030bed) list_im_single_pane

0x2a91,	// (0x00030c02) list_single_im_pane_t1

0x47ed,	// (0x0003295e) blid_accuracy_pane

0x47f5,	// (0x00032966) blid_compass_pane

0x47ff,	// (0x00032970) main_location_t1

0x480f,	// (0x00032980) main_location_t2

0x481f,	// (0x00032990) main_location_t3

0x0002,

0xf5ed,	// (0x0003d75e) main_location_t

0x9f5a,	// (0x000380cb) aid_levels_location

0xa2db,	// (0x0003844c) blid_accuracy_pane_g1

0xa2db,	// (0x0003844c) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0003d446) blid_accuracy_pane_g

0xa5fc,	// (0x0003876d) wml_content_pane

0xa63a,	// (0x000387ab) wml_button_pane_ParamLimits

0xa63a,	// (0x000387ab) wml_button_pane

0x2aa0,	// (0x00030c11) wml_list_single_large_pane_ParamLimits

0x2aa0,	// (0x00030c11) wml_list_single_large_pane

0x2ab5,	// (0x00030c26) wml_list_single_medium_pane_ParamLimits

0x2ab5,	// (0x00030c26) wml_list_single_medium_pane

0x2acc,	// (0x00030c3d) wml_list_single_small_pane_ParamLimits

0x2acc,	// (0x00030c3d) wml_list_single_small_pane

0xa64e,	// (0x000387bf) wml_selection_box_pane_ParamLimits

0xa64e,	// (0x000387bf) wml_selection_box_pane

0xa661,	// (0x000387d2) wml_list_single_pane_t1

0xa670,	// (0x000387e1) wml_list_single_medium_pane_t1

0xa67f,	// (0x000387f0) wml_list_single_large_pane_t1

0xa68e,	// (0x000387ff) input_focus_pane_cp02_ParamLimits

0xa68e,	// (0x000387ff) input_focus_pane_cp02

0xa6a1,	// (0x00038812) wml_selection_box_pane_g1

0xa6aa,	// (0x0003881b) wml_selection_box_pane_t1_ParamLimits

0xa6aa,	// (0x0003881b) wml_selection_box_pane_t1

0xa1b5,	// (0x00038326) bg_wml_button_pane_ParamLimits

0xa1b5,	// (0x00038326) bg_wml_button_pane

0xa6c2,	// (0x00038833) wml_button_pane_g1

0xa6ca,	// (0x0003883b) wml_button_pane_t1

0xa6c2,	// (0x00038833) wml_button_bg_pane_g1

0xa6da,	// (0x0003884b) wml_button_bg_pane_g2

0xa6e2,	// (0x00038853) wml_button_bg_pane_g3

0xa6ea,	// (0x0003885b) wml_button_bg_pane_g4

0xa6f2,	// (0x00038863) wml_button_bg_pane_g5

0xa6fa,	// (0x0003886b) wml_button_bg_pane_g6

0xa702,	// (0x00038873) wml_button_bg_pane_g7

0xa70a,	// (0x0003887b) wml_button_bg_pane_g8

0xa712,	// (0x00038883) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0003d3e9) wml_button_bg_pane_g

0x2ae5,	// (0x00030c56) bg_list_pane_cp02

0xa71a,	// (0x0003888b) mce_header_pane_ParamLimits

0xa71a,	// (0x0003888b) mce_header_pane

0xa730,	// (0x000388a1) mce_icon_pane

0xa730,	// (0x000388a1) mce_image_pane

0xa739,	// (0x000388aa) mce_text_pane_ParamLimits

0xa739,	// (0x000388aa) mce_text_pane

0x2aed,	// (0x00030c5e) scroll_pane_cp03

0xa632,	// (0x000387a3) scroll_pane_cp04

0xa74c,	// (0x000388bd) scroll_pane_cp05_ParamLimits

0xa74c,	// (0x000388bd) scroll_pane_cp05

0x2af7,	// (0x00030c68) mce_header_field_pane_ParamLimits

0x2af7,	// (0x00030c68) mce_header_field_pane

0x2b0e,	// (0x00030c7f) mce_header_field_pane_2_ParamLimits

0x2b0e,	// (0x00030c7f) mce_header_field_pane_2

0x2b24,	// (0x00030c95) mce_header_field_pane_3

0x2b2c,	// (0x00030c9d) list_single_mce_message_pane_ParamLimits

0x2b2c,	// (0x00030c9d) list_single_mce_message_pane

0x2b42,	// (0x00030cb3) list_single_mce_smart_pane_ParamLimits

0x2b42,	// (0x00030cb3) list_single_mce_smart_pane

0xa758,	// (0x000388c9) input_focus_pane_cp03

0xa761,	// (0x000388d2) list_header_data_pane

0x2b63,	// (0x00030cd4) mce_header_field_pane_t1

0x2b73,	// (0x00030ce4) list_single_mce_header_pane_ParamLimits

0x2b73,	// (0x00030ce4) list_single_mce_header_pane

0xa769,	// (0x000388da) list_single_mce_header_pane_t1

0xa778,	// (0x000388e9) list_single_mce_message_pane_g1

0xa780,	// (0x000388f1) list_single_mce_message_pane_t1

0x2bad,	// (0x00030d1e) bg_cale_heading_pane_cp01_ParamLimits

0x2bad,	// (0x00030d1e) bg_cale_heading_pane_cp01

0xa78e,	// (0x000388ff) bg_cale_pane_cp02_ParamLimits

0xa78e,	// (0x000388ff) bg_cale_pane_cp02

0x2bdc,	// (0x00030d4d) cale_month_corner_pane

0x2bfb,	// (0x00030d6c) cale_month_day_heading_pane_ParamLimits

0x2bfb,	// (0x00030d6c) cale_month_day_heading_pane

0x2c42,	// (0x00030db3) cale_month_pane_g1_ParamLimits

0x2c42,	// (0x00030db3) cale_month_pane_g1

0x2c66,	// (0x00030dd7) cale_month_pane_g2_ParamLimits

0x2c66,	// (0x00030dd7) cale_month_pane_g2

0x2c96,	// (0x00030e07) cale_month_pane_g3_ParamLimits

0x2c96,	// (0x00030e07) cale_month_pane_g3

0x2cd2,	// (0x00030e43) cale_month_pane_g4_ParamLimits

0x2cd2,	// (0x00030e43) cale_month_pane_g4

0x2d0e,	// (0x00030e7f) cale_month_pane_g5_ParamLimits

0x2d0e,	// (0x00030e7f) cale_month_pane_g5

0x2d56,	// (0x00030ec7) cale_month_pane_g6_ParamLimits

0x2d56,	// (0x00030ec7) cale_month_pane_g6

0x2da2,	// (0x00030f13) cale_month_pane_g7_ParamLimits

0x2da2,	// (0x00030f13) cale_month_pane_g7

0x2df2,	// (0x00030f63) cale_month_pane_g8_ParamLimits

0x2df2,	// (0x00030f63) cale_month_pane_g8

0x2e46,	// (0x00030fb7) cale_month_pane_g9_ParamLimits

0x2e46,	// (0x00030fb7) cale_month_pane_g9

0x2e98,	// (0x00031009) cale_month_pane_g10_ParamLimits

0x2e98,	// (0x00031009) cale_month_pane_g10

0x2eea,	// (0x0003105b) cale_month_pane_g11_ParamLimits

0x2eea,	// (0x0003105b) cale_month_pane_g11

0x2f3c,	// (0x000310ad) cale_month_pane_g12_ParamLimits

0x2f3c,	// (0x000310ad) cale_month_pane_g12

0x2f8e,	// (0x000310ff) cale_month_pane_g13_ParamLimits

0x2f8e,	// (0x000310ff) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0003d3fc) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0003d3fc) cale_month_pane_g

0x2fe0,	// (0x00031151) cale_month_week_pane

0x3004,	// (0x00031175) grid_cale_month_pane_ParamLimits

0x3004,	// (0x00031175) grid_cale_month_pane

0x3042,	// (0x000311b3) cale_month_day_heading_pane_t1

0x30c8,	// (0x00031239) cale_month_day_heading_pane_t2

0x3159,	// (0x000312ca) cale_month_day_heading_pane_t3

0x31ea,	// (0x0003135b) cale_month_day_heading_pane_t4

0x3283,	// (0x000313f4) cale_month_day_heading_pane_t5

0x3324,	// (0x00031495) cale_month_day_heading_pane_t6

0x33c5,	// (0x00031536) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0003d417) cale_month_day_heading_pane_t

0xa42e,	// (0x0003859f) bg_cale_side_pane_cp01

0x346e,	// (0x000315df) cale_month_week_pane_t1

0x3487,	// (0x000315f8) cale_month_week_pane_t2

0x34a0,	// (0x00031611) cale_month_week_pane_t3

0x34b9,	// (0x0003162a) cale_month_week_pane_t4

0x34d2,	// (0x00031643) cale_month_week_pane_t5

0x34eb,	// (0x0003165c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0003d426) cale_month_week_pane_t

0x3504,	// (0x00031675) cell_cale_month_pane_ParamLimits

0x3504,	// (0x00031675) cell_cale_month_pane

0x365c,	// (0x000317cd) cell_cale_month_pane_g1

0x04ff,	// (0x0002e670) cell_cale_month_pane_t1_ParamLimits

0x04ff,	// (0x0002e670) cell_cale_month_pane_t1

0xa43c,	// (0x000385ad) grid_highlight_pane_cp08

0xa2db,	// (0x0003844c) main_smil_g1

0x3682,	// (0x000317f3) smil_status_pane

0xa7cd,	// (0x0003893e) smil_text_pane

0xc12a,	// (0x0003a29b) bg_popup_call3_rect_pane_g8

0xc132,	// (0x0003a2a3) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0003d6df) bg_popup_call3_rect_pane_g

0xc3b9,	// (0x0003a52a) smil_status_volume_pane_g1

0xa7d7,	// (0x00038948) smil_status_pane_t1

0x4b82,	// (0x00032cf3) volume_smil_pane

0xa7ee,	// (0x0003895f) list_smil_text_pane

0x3697,	// (0x00031808) scroll_pane_cp011

0x36a2,	// (0x00031813) smil_text_list_pane_t1_ParamLimits

0x36a2,	// (0x00031813) smil_text_list_pane_t1

0x36e6,	// (0x00031857) aid_volume_smil_ParamLimits

0x36e6,	// (0x00031857) aid_volume_smil

0xa2db,	// (0x0003844c) smil_volume_pane_g1

0xa2db,	// (0x0003844c) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0003d446) smil_volume_pane_g

0x1cb7,	// (0x0002fe28) listscroll_cale_day_pane

0xa7f8,	// (0x00038969) bg_cale_pane

0xa82c,	// (0x0003899d) list_cale_pane

0xa84f,	// (0x000389c0) scroll_pane_cp09

0xa860,	// (0x000389d1) cale_bg_pane_g1

0xa868,	// (0x000389d9) cale_bg_pane_g2

0xa870,	// (0x000389e1) cale_bg_pane_g3

0xa878,	// (0x000389e9) cale_bg_pane_g4

0xa880,	// (0x000389f1) cale_bg_pane_g5

0xa888,	// (0x000389f9) cale_bg_pane_g6

0xa890,	// (0x00038a01) cale_bg_pane_g7

0xa898,	// (0x00038a09) cale_bg_pane_g8

0xa8a0,	// (0x00038a11) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0003d44b) cale_bg_pane_g

0x3710,	// (0x00031881) list_cale_time_pane_ParamLimits

0x3710,	// (0x00031881) list_cale_time_pane

0xa8a8,	// (0x00038a19) list_cale_time_pane_g1_ParamLimits

0xa8a8,	// (0x00038a19) list_cale_time_pane_g1

0xa8b4,	// (0x00038a25) list_cale_time_pane_g2_ParamLimits

0xa8b4,	// (0x00038a25) list_cale_time_pane_g2

0x3726,	// (0x00031897) list_cale_time_pane_g3_ParamLimits

0x3726,	// (0x00031897) list_cale_time_pane_g3

0x3734,	// (0x000318a5) list_cale_time_pane_g4_ParamLimits

0x3734,	// (0x000318a5) list_cale_time_pane_g4

0x3742,	// (0x000318b3) list_cale_time_pane_g5_ParamLimits

0x3742,	// (0x000318b3) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0003d45e) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0003d45e) list_cale_time_pane_g

0xa8ce,	// (0x00038a3f) list_cale_time_pane_t1_ParamLimits

0xa8ce,	// (0x00038a3f) list_cale_time_pane_t1

0xa8f6,	// (0x00038a67) list_cale_time_pane_t2_ParamLimits

0xa8f6,	// (0x00038a67) list_cale_time_pane_t2

0x3b33,	// (0x00031ca4) aid_blid_cardinal_pane

0x3b71,	// (0x00031ce2) compass_pane_t4

0xa91e,	// (0x00038a8f) list_cale_time_pane_t4_ParamLimits

0xa91e,	// (0x00038a8f) list_cale_time_pane_t4

0x3b7f,	// (0x00031cf0) compass_pane_t5

0x3b8d,	// (0x00031cfe) compass_pane_t6

0x3b9b,	// (0x00031d0c) compass_pane_t7

0xada2,	// (0x00038f13) navi_pane_cc_t1

0xaf7f,	// (0x000390f0) aid_phob_thumbnail_center_pane

0x4203,	// (0x00032374) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0003d46b) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0003d46b) list_cale_time_pane_t

0x9bb1,	// (0x00037d22) bg_popup_window_pane_cp02_ParamLimits

0x9bb1,	// (0x00037d22) bg_popup_window_pane_cp02

0xa946,	// (0x00038ab7) heading_pane_cp01_ParamLimits

0xa946,	// (0x00038ab7) heading_pane_cp01

0xa952,	// (0x00038ac3) loc_req_pane_ParamLimits

0xa952,	// (0x00038ac3) loc_req_pane

0xa962,	// (0x00038ad3) loc_type_pane_ParamLimits

0xa962,	// (0x00038ad3) loc_type_pane

0xa974,	// (0x00038ae5) loc_type_pane_t1_ParamLimits

0xa974,	// (0x00038ae5) loc_type_pane_t1

0xa986,	// (0x00038af7) loc_type_pane_t2_ParamLimits

0xa986,	// (0x00038af7) loc_type_pane_t2

0xa998,	// (0x00038b09) loc_type_pane_t3_ParamLimits

0xa998,	// (0x00038b09) loc_type_pane_t3

0x0002,

0xf301,	// (0x0003d472) loc_type_pane_t_ParamLimits

0xf301,	// (0x0003d472) loc_type_pane_t

0xa9aa,	// (0x00038b1b) list_loc_req_pane

0xa9b4,	// (0x00038b25) scroll_pane_cp012

0x3750,	// (0x000318c1) list_single_loc_request_popup_menu_pane_ParamLimits

0x3750,	// (0x000318c1) list_single_loc_request_popup_menu_pane

0xa9bf,	// (0x00038b30) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa9bf,	// (0x00038b30) list_single_loc_request_popup_menu_pane_g1

0xa9cb,	// (0x00038b3c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa9cb,	// (0x00038b3c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0003d479) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0003d479) list_single_loc_request_popup_menu_pane_g

0xa9d7,	// (0x00038b48) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa9d7,	// (0x00038b48) list_single_loc_request_popup_menu_pane_t1

0xa1b5,	// (0x00038326) bg_popup_window_pane_cp03_ParamLimits

0xa1b5,	// (0x00038326) bg_popup_window_pane_cp03

0xa9ed,	// (0x00038b5e) heading_loc_req_pane_ParamLimits

0xa9ed,	// (0x00038b5e) heading_loc_req_pane

0x375d,	// (0x000318ce) popup_dyc_status_message_window_g1_ParamLimits

0x375d,	// (0x000318ce) popup_dyc_status_message_window_g1

0x3771,	// (0x000318e2) popup_dyc_status_message_window_t1_ParamLimits

0x3771,	// (0x000318e2) popup_dyc_status_message_window_t1

0x3786,	// (0x000318f7) popup_dyc_status_message_window_t2_ParamLimits

0x3786,	// (0x000318f7) popup_dyc_status_message_window_t2

0x379b,	// (0x0003190c) popup_dyc_status_message_window_t3_ParamLimits

0x379b,	// (0x0003190c) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0003d47e) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0003d47e) popup_dyc_status_message_window_t

0x9f5a,	// (0x000380cb) bg_heading_pane_cp01

0xa9f9,	// (0x00038b6a) heading_loc_req_pane_g1

0xaa01,	// (0x00038b72) heading_loc_req_pane_g2

0xaa09,	// (0x00038b7a) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0003d485) heading_loc_req_pane_g

0xaa11,	// (0x00038b82) heading_loc_req_pane_t1

0xaa20,	// (0x00038b91) bg_popup_sub_pane_cp01_ParamLimits

0xaa20,	// (0x00038b91) bg_popup_sub_pane_cp01

0xaa2e,	// (0x00038b9f) popup_cale_events_window_g1_ParamLimits

0xaa2e,	// (0x00038b9f) popup_cale_events_window_g1

0xaa4e,	// (0x00038bbf) popup_cale_events_window_g2_ParamLimits

0xaa4e,	// (0x00038bbf) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0003d4b9) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0003d4b9) popup_cale_events_window_g

0xaa6e,	// (0x00038bdf) popup_cale_events_window_t1_ParamLimits

0xaa6e,	// (0x00038bdf) popup_cale_events_window_t1

0xaa80,	// (0x00038bf1) popup_cale_events_window_t2_ParamLimits

0xaa80,	// (0x00038bf1) popup_cale_events_window_t2

0xaabe,	// (0x00038c2f) popup_cale_events_window_t3_ParamLimits

0xaabe,	// (0x00038c2f) popup_cale_events_window_t3

0xaaf8,	// (0x00038c69) popup_cale_events_window_t4_ParamLimits

0xaaf8,	// (0x00038c69) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0003d4be) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0003d4be) popup_cale_events_window_t

0x3894,	// (0x00031a05) call_type_pane

0x38a4,	// (0x00031a15) popup_call_status_window_g1

0x38b8,	// (0x00031a29) popup_call_status_window_g2

0x38cc,	// (0x00031a3d) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0003d4c7) popup_call_status_window_g

0xab2e,	// (0x00038c9f) call_type_pane_g1

0xab37,	// (0x00038ca8) call_type_pane_g2

0x0001,

0xf35d,	// (0x0003d4ce) call_type_pane_g

0x9f5a,	// (0x000380cb) bg_popup_sub_pane_cp02

0xab40,	// (0x00038cb1) listscroll_popup_wml_pane

0xab48,	// (0x00038cb9) list_wml_pane

0xab52,	// (0x00038cc3) scroll_pane_cp013

0xab5d,	// (0x00038cce) list_single_graphic_popup_wml_pane_ParamLimits

0xab5d,	// (0x00038cce) list_single_graphic_popup_wml_pane

0xa2db,	// (0x0003844c) list_single_graphic_popup_wml_pane_g1

0xab71,	// (0x00038ce2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0003d4d3) list_single_graphic_popup_wml_pane_g

0xab79,	// (0x00038cea) list_single_graphic_popup_wml_pane_t1

0xab8f,	// (0x00038d00) aid_call_pane

0xa1ad,	// (0x0003831e) popup_clock_analogue_window_g1

0xa1ad,	// (0x0003831e) popup_clock_analogue_window_g2

0x38db,	// (0x00031a4c) popup_clock_analogue_window_g3

0x38db,	// (0x00031a4c) popup_clock_analogue_window_g4

0xa2db,	// (0x0003844c) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0003d4d8) popup_clock_analogue_window_g

0x38e3,	// (0x00031a54) popup_clock_analogue_window_t1

0x38f1,	// (0x00031a62) clock_digital_number_pane_ParamLimits

0x38f1,	// (0x00031a62) clock_digital_number_pane

0x38fd,	// (0x00031a6e) clock_digital_number_pane_cp02_ParamLimits

0x38fd,	// (0x00031a6e) clock_digital_number_pane_cp02

0x3909,	// (0x00031a7a) clock_digital_number_pane_cp03_ParamLimits

0x3909,	// (0x00031a7a) clock_digital_number_pane_cp03

0x3915,	// (0x00031a86) clock_digital_number_pane_cp04_ParamLimits

0x3915,	// (0x00031a86) clock_digital_number_pane_cp04

0x3921,	// (0x00031a92) clock_digital_separator_pane_ParamLimits

0x3921,	// (0x00031a92) clock_digital_separator_pane

0x392d,	// (0x00031a9e) popup_clock_digital_window_t1

0xa2db,	// (0x0003844c) clock_digital_number_pane_g1

0xa2db,	// (0x0003844c) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0003d446) clock_digital_number_pane_g

0xa2db,	// (0x0003844c) clock_digital_separator_pane_g1

0xa2db,	// (0x0003844c) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0003d446) clock_digital_separator_pane_g

0x9f5a,	// (0x000380cb) bg_popup_window_pane_cp04

0xab97,	// (0x00038d08) heading_pane_cp03

0xab9f,	// (0x00038d10) listscroll_popup_gms_pane

0xaba7,	// (0x00038d18) grid_large_graphic_popup_pane

0xabb1,	// (0x00038d22) listscroll_popup_gms_pane_g1

0xabb9,	// (0x00038d2a) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0003d4e3) listscroll_popup_gms_pane_g

0xa632,	// (0x000387a3) scroll_pane_cp014

0x394a,	// (0x00031abb) cell_large_graphic_popup_pane_ParamLimits

0x394a,	// (0x00031abb) cell_large_graphic_popup_pane

0x3962,	// (0x00031ad3) cell_large_graphic_popup_pane_g1_ParamLimits

0x3962,	// (0x00031ad3) cell_large_graphic_popup_pane_g1

0xabc1,	// (0x00038d32) cell_large_graphic_popup_pane_g2_ParamLimits

0xabc1,	// (0x00038d32) cell_large_graphic_popup_pane_g2

0xabcd,	// (0x00038d3e) cell_large_graphic_popup_pane_g3_ParamLimits

0xabcd,	// (0x00038d3e) cell_large_graphic_popup_pane_g3

0xabda,	// (0x00038d4b) cell_large_graphic_popup_pane_g4_ParamLimits

0xabda,	// (0x00038d4b) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0003d4e8) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0003d4e8) cell_large_graphic_popup_pane_g

0xabea,	// (0x00038d5b) grid_highlight_pane_cp010

0xa2db,	// (0x0003844c) bg_popup_call_pane_g1

0xabf4,	// (0x00038d65) list_single_graphic_popup_conf_pane_ParamLimits

0xabf4,	// (0x00038d65) list_single_graphic_popup_conf_pane

0xac07,	// (0x00038d78) list_highlight_pane_cp01

0xac10,	// (0x00038d81) list_single_graphic_popup_conf_pane_g1

0xac18,	// (0x00038d89) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0003d4f1) list_single_graphic_popup_conf_pane_g

0xac20,	// (0x00038d91) list_single_graphic_popup_conf_pane_t1

0xac2e,	// (0x00038d9f) linegrid_cams_pane_g1

0x396e,	// (0x00031adf) linegrid_cams_pane_g2

0xa46f,	// (0x000385e0) linegrid_cams_pane_g3

0xac37,	// (0x00038da8) linegrid_cams_pane_g4

0x3977,	// (0x00031ae8) linegrid_cams_pane_g5

0x3980,	// (0x00031af1) linegrid_cams_pane_g6

0xa478,	// (0x000385e9) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0003d4f6) linegrid_cams_pane_g

0xac40,	// (0x00038db1) popup_clock_analogue_window

0xac40,	// (0x00038db1) popup_clock_digital_window

0x9f5a,	// (0x000380cb) popup_phob_thumbnail_window

0xa2db,	// (0x0003844c) call_video_uplink_pane_g1

0xac49,	// (0x00038dba) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0003d505) call_video_uplink_pane_g

0xac51,	// (0x00038dc2) video_uplink_pane

0xac59,	// (0x00038dca) mce_image_pane_g1

0x398b,	// (0x00031afc) mce_image_pane_g2

0x3993,	// (0x00031b04) mce_image_pane_g3

0x399b,	// (0x00031b0c) mce_image_pane_g4

0x39a5,	// (0x00031b16) mce_image_pane_g5

0x0004,

0xf399,	// (0x0003d50a) mce_image_pane_g

0xac63,	// (0x00038dd4) control_top_pane_stacon_cp01_ParamLimits

0xac63,	// (0x00038dd4) control_top_pane_stacon_cp01

0xac77,	// (0x00038de8) uni_indicator_pane_stacon_cp01_ParamLimits

0xac77,	// (0x00038de8) uni_indicator_pane_stacon_cp01

0xac88,	// (0x00038df9) bg_popup_sub_pane_cp03

0x39ad,	// (0x00031b1e) chi_dic_find_pane

0x39b5,	// (0x00031b26) listscroll_chi_dic_pane

0x39be,	// (0x00031b2f) main_pane_chidic_g1

0x39d1,	// (0x00031b42) chi_dic_find_pane_t1

0xac92,	// (0x00038e03) find_chidic_pane

0xac9b,	// (0x00038e0c) chi_dic_list_pane_ParamLimits

0xac9b,	// (0x00038e0c) chi_dic_list_pane

0xacac,	// (0x00038e1d) scroll_pane_cp020

0x39df,	// (0x00031b50) find_chidic_pane_t1

0x9f5a,	// (0x000380cb) input_focus_pane_cp06

0x39ee,	// (0x00031b5f) list_chi_dic_pane_ParamLimits

0x39ee,	// (0x00031b5f) list_chi_dic_pane

0x3a00,	// (0x00031b71) list_chi_dic_pane_t1_ParamLimits

0x3a00,	// (0x00031b71) list_chi_dic_pane_t1

0x9f5a,	// (0x000380cb) list_highlight_pane_cp020

0xacb4,	// (0x00038e25) bg_cale_heading_pane_g1

0x3a13,	// (0x00031b84) bg_cale_heading_pane_g2

0x3a1b,	// (0x00031b8c) bg_cale_heading_pane_g3

0x3a23,	// (0x00031b94) bg_cale_heading_pane_g4

0x3a2d,	// (0x00031b9e) bg_cale_heading_pane_g5

0x3a37,	// (0x00031ba8) bg_cale_heading_pane_g6

0x3a3f,	// (0x00031bb0) bg_cale_heading_pane_g7

0x3a47,	// (0x00031bb8) bg_cale_heading_pane_g8

0x3a51,	// (0x00031bc2) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0003d515) bg_cale_heading_pane_g

0xacb4,	// (0x00038e25) bg_cale_side_pane_g1

0x3a5b,	// (0x00031bcc) bg_cale_side_pane_g2

0x3a63,	// (0x00031bd4) bg_cale_side_pane_g3

0x3a6b,	// (0x00031bdc) bg_cale_side_pane_g4

0x3a73,	// (0x00031be4) bg_cale_side_pane_g5

0x3a7b,	// (0x00031bec) bg_cale_side_pane_g6

0x3a83,	// (0x00031bf4) bg_cale_side_pane_g7

0x3a8b,	// (0x00031bfc) bg_cale_side_pane_g8

0x3a93,	// (0x00031c04) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0003d528) bg_cale_side_pane_g

0x3a9b,	// (0x00031c0c) popup_call_status_window_ParamLimits

0x3a9b,	// (0x00031c0c) popup_call_status_window

0xacbc,	// (0x00038e2d) stacon_top_pane

0xacc4,	// (0x00038e35) status_pane_ParamLimits

0xacc4,	// (0x00038e35) status_pane

0xacd9,	// (0x00038e4a) status_small_pane

0xace1,	// (0x00038e52) control_pane

0x9f5a,	// (0x000380cb) stacon_bottom_pane

0xace9,	// (0x00038e5a) list_single_mce_smart_pane_t1_ParamLimits

0xace9,	// (0x00038e5a) list_single_mce_smart_pane_t1

0xacfc,	// (0x00038e6d) list_single_mce_smart_pane_t2_ParamLimits

0xacfc,	// (0x00038e6d) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0003d53b) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0003d53b) list_single_mce_smart_pane_t

0x3ae2,	// (0x00031c53) compass_pane

0x3aeb,	// (0x00031c5c) main_location2_pane_t1

0x3afd,	// (0x00031c6e) main_location2_pane_t2

0x3b0f,	// (0x00031c80) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0003d540) main_location2_pane_t

0xad1b,	// (0x00038e8c) compass_pane_g1_ParamLimits

0xad1b,	// (0x00038e8c) compass_pane_g1

0x3b53,	// (0x00031cc4) compass_pane_t1

0x3b62,	// (0x00031cd3) compass_pane_t2

0x0005,

0xf3d8,	// (0x0003d549) compass_pane_t

0x3ba9,	// (0x00031d1a) text_secondary_cp61

0xad99,	// (0x00038f0a) navi_pane_cams_g5

0xae15,	// (0x00038f86) navi_pane_im_t1

0xae23,	// (0x00038f94) navi_pane_mp_g1_ParamLimits

0xae23,	// (0x00038f94) navi_pane_mp_g1

0xae37,	// (0x00038fa8) navi_pane_mp_g2_ParamLimits

0xae37,	// (0x00038fa8) navi_pane_mp_g2

0xae43,	// (0x00038fb4) navi_pane_mp_g3_ParamLimits

0xae43,	// (0x00038fb4) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0003d55d) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0003d55d) navi_pane_mp_g

0xae4f,	// (0x00038fc0) navi_pane_mp_t1

0xae5d,	// (0x00038fce) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0003d564) navi_pane_mp_t

0xaec8,	// (0x00039039) navi_pane_vt_g1

0xae4f,	// (0x00038fc0) navi_pane_vt_t1

0xaed0,	// (0x00039041) navi_slider_pane

0xa489,	// (0x000385fa) zooming_pane

0xaee0,	// (0x00039051) navi_slider_pane_g1

0x3bfa,	// (0x00031d6b) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0003d56b) navi_slider_pane_g

0xaf04,	// (0x00039075) aid_levels_zoom

0xaf0c,	// (0x0003907d) zooming_pane_g1

0xaf14,	// (0x00039085) zooming_pane_g2

0xaf14,	// (0x00039085) zooming_pane_g3

0x0002,

0xf409,	// (0x0003d57a) zooming_pane_g

0xaf1c,	// (0x0003908d) level_10_zoom

0xaf25,	// (0x00039096) level_11_zoom

0xaf2e,	// (0x0003909f) level_1_zoom

0xaf37,	// (0x000390a8) level_2_zoom

0xaf40,	// (0x000390b1) level_3_zoom

0xaf49,	// (0x000390ba) level_4_zoom

0xaf52,	// (0x000390c3) level_5_zoom

0xaf5b,	// (0x000390cc) level_6_zoom

0xaf64,	// (0x000390d5) level_7_zoom

0xaf6d,	// (0x000390de) level_8_zoom

0xaf76,	// (0x000390e7) level_9_zoom

0xaf87,	// (0x000390f8) popup_phob_thumbnail_window_g1

0xaf8f,	// (0x00039100) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0003d581) popup_phob_thumbnail_window_g

0xc2cc,	// (0x0003a43d) level_1_location

0xc2d4,	// (0x0003a445) level_2_location

0xc2dc,	// (0x0003a44d) level_3_location

0xc2e4,	// (0x0003a455) level_4_location

0xa489,	// (0x000385fa) level_5_location

0x3c0c,	// (0x00031d7d) mce_icon_pane_g1

0x3c16,	// (0x00031d87) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0003d586) mce_icon_pane_g

0x3c1e,	// (0x00031d8f) main_mup_pane_g1_ParamLimits

0x3c1e,	// (0x00031d8f) main_mup_pane_g1

0x3c34,	// (0x00031da5) main_mup_pane_g2_ParamLimits

0x3c34,	// (0x00031da5) main_mup_pane_g2

0x3c46,	// (0x00031db7) main_mup_pane_g3_ParamLimits

0x3c46,	// (0x00031db7) main_mup_pane_g3

0x3c58,	// (0x00031dc9) main_mup_pane_g4_ParamLimits

0x3c58,	// (0x00031dc9) main_mup_pane_g4

0x3c70,	// (0x00031de1) main_mup_pane_g5_ParamLimits

0x3c70,	// (0x00031de1) main_mup_pane_g5

0x3c8c,	// (0x00031dfd) main_mup_pane_g6_ParamLimits

0x3c8c,	// (0x00031dfd) main_mup_pane_g6

0x3ca4,	// (0x00031e15) main_mup_pane_g7_ParamLimits

0x3ca4,	// (0x00031e15) main_mup_pane_g7

0x3cbc,	// (0x00031e2d) main_mup_pane_g8_ParamLimits

0x3cbc,	// (0x00031e2d) main_mup_pane_g8

0x3cd4,	// (0x00031e45) main_mup_pane_g9_ParamLimits

0x3cd4,	// (0x00031e45) main_mup_pane_g9

0x3cee,	// (0x00031e5f) main_mup_pane_g10_ParamLimits

0x3cee,	// (0x00031e5f) main_mup_pane_g10

0x3d08,	// (0x00031e79) main_mup_pane_g11_ParamLimits

0x3d08,	// (0x00031e79) main_mup_pane_g11

0x3d1c,	// (0x00031e8d) main_mup_pane_g12_ParamLimits

0x3d1c,	// (0x00031e8d) main_mup_pane_g12

0x3d32,	// (0x00031ea3) main_mup_pane_g13_ParamLimits

0x3d32,	// (0x00031ea3) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0003d58b) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0003d58b) main_mup_pane_g

0x3d46,	// (0x00031eb7) main_mup_pane_t1_ParamLimits

0x3d46,	// (0x00031eb7) main_mup_pane_t1

0x3d60,	// (0x00031ed1) main_mup_pane_t2_ParamLimits

0x3d60,	// (0x00031ed1) main_mup_pane_t2

0x3d78,	// (0x00031ee9) main_mup_pane_t3_ParamLimits

0x3d78,	// (0x00031ee9) main_mup_pane_t3

0x3d90,	// (0x00031f01) main_mup_pane_t4_ParamLimits

0x3d90,	// (0x00031f01) main_mup_pane_t4

0x3dae,	// (0x00031f1f) main_mup_pane_t5_ParamLimits

0x3dae,	// (0x00031f1f) main_mup_pane_t5

0x3dc3,	// (0x00031f34) main_mup_pane_t6_ParamLimits

0x3dc3,	// (0x00031f34) main_mup_pane_t6

0x0005,

0xf435,	// (0x0003d5a6) main_mup_pane_t_ParamLimits

0xf435,	// (0x0003d5a6) main_mup_pane_t

0x3dd5,	// (0x00031f46) mup_progress_pane_ParamLimits

0x3dd5,	// (0x00031f46) mup_progress_pane

0x3de1,	// (0x00031f52) mup_visualizer_pane_ParamLimits

0x3de1,	// (0x00031f52) mup_visualizer_pane

0x3e15,	// (0x00031f86) mup_volume_pane_ParamLimits

0x3e15,	// (0x00031f86) mup_volume_pane

0xaf97,	// (0x00039108) mup_visualizer_pane_g1_ParamLimits

0xaf97,	// (0x00039108) mup_visualizer_pane_g1

0xaf97,	// (0x00039108) mup_visualizer_pane_g2_ParamLimits

0xaf97,	// (0x00039108) mup_visualizer_pane_g2

0xad1b,	// (0x00038e8c) mup_visualizer_pane_g3_ParamLimits

0xad1b,	// (0x00038e8c) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0003d5b3) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0003d5b3) mup_visualizer_pane_g

0xa2db,	// (0x0003844c) mup_volume_pane_g1

0xafad,	// (0x0003911e) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0003d5ba) mup_volume_pane_g

0xa2db,	// (0x0003844c) mup_progress_pane_g1

0xafb6,	// (0x00039127) mup_progress_pane_g2

0xafbf,	// (0x00039130) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0003d5bf) mup_progress_pane_g

0x9f5a,	// (0x000380cb) bg_popup_window_pane_cp05

0xafc8,	// (0x00039139) heading_pane_cp02_ParamLimits

0xafc8,	// (0x00039139) heading_pane_cp02

0xafe2,	// (0x00039153) list_popup_blid_pane

0xafea,	// (0x0003915b) list_blid_sat_info_pane_ParamLimits

0xafea,	// (0x0003915b) list_blid_sat_info_pane

0xaffd,	// (0x0003916e) list_blid_sat_info_pane_g1

0xb005,	// (0x00039176) list_blid_sat_info_pane_t1

0x3f2b,	// (0x0003209c) mup_equalizer_pane_ParamLimits

0x3f2b,	// (0x0003209c) mup_equalizer_pane

0x3f44,	// (0x000320b5) mup_equalizer_pane_cp1_ParamLimits

0x3f44,	// (0x000320b5) mup_equalizer_pane_cp1

0x3f61,	// (0x000320d2) mup_equalizer_pane_cp2_ParamLimits

0x3f61,	// (0x000320d2) mup_equalizer_pane_cp2

0x3f7e,	// (0x000320ef) mup_equalizer_pane_cp3_ParamLimits

0x3f7e,	// (0x000320ef) mup_equalizer_pane_cp3

0x3f9f,	// (0x00032110) mup_equalizer_pane_cp4_ParamLimits

0x3f9f,	// (0x00032110) mup_equalizer_pane_cp4

0x3fc0,	// (0x00032131) mup_equalizer_pane_cp5

0x3fd4,	// (0x00032145) mup_equalizer_pane_cp6

0x3fe8,	// (0x00032159) mup_equalizer_pane_cp7

0xc1aa,	// (0x0003a31b) bg_popup_call_poc_act_pane_g9

0xc1b2,	// (0x0003a323) bg_popup_call_poc_act_pane_g10

0xc1ba,	// (0x0003a32b) bg_popup_call_poc_act_pane_g11

0x000a,

0xa1b5,	// (0x00038326) mup_scale_pane

0xa2db,	// (0x0003844c) mup_scale_pane_g1

0xb013,	// (0x00039184) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0003d5db) mup_scale_pane_g

0xb037,	// (0x000391a8) msg_data_pane

0xb03f,	// (0x000391b0) scroll_pane_cp017

0x400e,	// (0x0003217f) bg_list_pane_cp04_ParamLimits

0x400e,	// (0x0003217f) bg_list_pane_cp04

0xb047,	// (0x000391b8) msg_data_pane_g1

0x402e,	// (0x0003219f) msg_data_pane_g2

0x4036,	// (0x000321a7) msg_data_pane_g3

0x403e,	// (0x000321af) msg_data_pane_g4

0x4046,	// (0x000321b7) msg_data_pane_g5

0x404e,	// (0x000321bf) msg_data_pane_g6

0x4056,	// (0x000321c7) msg_data_pane_g7

0x0006,

0xf479,	// (0x0003d5ea) msg_data_pane_g

0x405e,	// (0x000321cf) msg_text_pane_ParamLimits

0x405e,	// (0x000321cf) msg_text_pane

0x4084,	// (0x000321f5) qrid_highlight_pane_cp011_ParamLimits

0x4084,	// (0x000321f5) qrid_highlight_pane_cp011

0x9f5a,	// (0x000380cb) msg_body_pane

0x9f5a,	// (0x000380cb) msg_header_pane

0xb058,	// (0x000391c9) input_focus_pane_cp07

0x40a8,	// (0x00032219) msg_header_pane_t1_ParamLimits

0x40a8,	// (0x00032219) msg_header_pane_t1

0x40ba,	// (0x0003222b) msg_header_pane_t2_ParamLimits

0x40ba,	// (0x0003222b) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0003d5fe) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0003d5fe) msg_header_pane_t

0xb06d,	// (0x000391de) msg_body_pane_g1

0x40cc,	// (0x0003223d) msg_body_pane_t1_ParamLimits

0x40cc,	// (0x0003223d) msg_body_pane_t1

0x40fd,	// (0x0003226e) msg_body_pane_t2_ParamLimits

0x40fd,	// (0x0003226e) msg_body_pane_t2

0x410f,	// (0x00032280) msg_body_pane_t3_ParamLimits

0x410f,	// (0x00032280) msg_body_pane_t3

0x0002,

0xf492,	// (0x0003d603) msg_body_pane_t_ParamLimits

0xf492,	// (0x0003d603) msg_body_pane_t

0x0547,	// (0x0002e6b8) main_viewer_pane_g1_ParamLimits

0x0547,	// (0x0002e6b8) main_viewer_pane_g1

0x0555,	// (0x0002e6c6) main_viewer_pane_g2_ParamLimits

0x0555,	// (0x0002e6c6) main_viewer_pane_g2

0x4157,	// (0x000322c8) main_viewer_pane_g3_ParamLimits

0x4157,	// (0x000322c8) main_viewer_pane_g3

0x4166,	// (0x000322d7) main_viewer_pane_g4_ParamLimits

0x4166,	// (0x000322d7) main_viewer_pane_g4

0x4175,	// (0x000322e6) main_viewer_pane_g5_ParamLimits

0x4175,	// (0x000322e6) main_viewer_pane_g5

0x4175,	// (0x000322e6) main_viewer_pane_g7_ParamLimits

0x4175,	// (0x000322e6) main_viewer_pane_g7

0xa9bf,	// (0x00038b30) main_viewer_pane_g8_ParamLimits

0xa9bf,	// (0x00038b30) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0003d613) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0003d613) main_viewer_pane_g

0xb075,	// (0x000391e6) viewer_content_pane_ParamLimits

0xb075,	// (0x000391e6) viewer_content_pane

0x41c0,	// (0x00032331) main_postcard_pane_g1_ParamLimits

0x41c0,	// (0x00032331) main_postcard_pane_g1

0x41d6,	// (0x00032347) main_postcard_pane_g2_ParamLimits

0x41d6,	// (0x00032347) main_postcard_pane_g2

0x41ec,	// (0x0003235d) main_postcard_pane_g3_ParamLimits

0x41ec,	// (0x0003235d) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0003d624) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0003d624) main_postcard_pane_g

0x4203,	// (0x00032374) main_postcard_pane_g4

0xc3cc,	// (0x0003a53d) smil_status_volume_pane_g2

0x4246,	// (0x000323b7) postcard_pane_ParamLimits

0x4246,	// (0x000323b7) postcard_pane

0xb083,	// (0x000391f4) postcard_pane_g1_ParamLimits

0xb083,	// (0x000391f4) postcard_pane_g1

0x4288,	// (0x000323f9) postcard_pane_g2_ParamLimits

0x4288,	// (0x000323f9) postcard_pane_g2

0x4294,	// (0x00032405) postcard_pane_g3_ParamLimits

0x4294,	// (0x00032405) postcard_pane_g3

0xb091,	// (0x00039202) postcard_pane_g4_ParamLimits

0xb091,	// (0x00039202) postcard_pane_g4

0x42a0,	// (0x00032411) postcard_pane_g5_ParamLimits

0x42a0,	// (0x00032411) postcard_pane_g5

0x42b5,	// (0x00032426) postcard_pane_g6_ParamLimits

0x42b5,	// (0x00032426) postcard_pane_g6

0xb083,	// (0x000391f4) postcard_pane_g7_ParamLimits

0xb083,	// (0x000391f4) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0003d631) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0003d631) postcard_pane_g

0x42c9,	// (0x0003243a) main_mp2_pane_g1_ParamLimits

0x42c9,	// (0x0003243a) main_mp2_pane_g1

0x42d5,	// (0x00032446) main_mp2_pane_g2_ParamLimits

0x42d5,	// (0x00032446) main_mp2_pane_g2

0x42e1,	// (0x00032452) main_mp2_pane_g3_ParamLimits

0x42e1,	// (0x00032452) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0003d640) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0003d640) main_mp2_pane_g

0x42ed,	// (0x0003245e) main_mp2_pane_t1_ParamLimits

0x42ed,	// (0x0003245e) main_mp2_pane_t1

0x4302,	// (0x00032473) main_mp2_pane_t2_ParamLimits

0x4302,	// (0x00032473) main_mp2_pane_t2

0x4314,	// (0x00032485) main_mp2_pane_t3_ParamLimits

0x4314,	// (0x00032485) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0003d647) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0003d647) main_mp2_pane_t

0xb09f,	// (0x00039210) pec_content_pane_ParamLimits

0xb09f,	// (0x00039210) pec_content_pane

0xa632,	// (0x000387a3) scroll_pane_cp015

0xb0b1,	// (0x00039222) pec_attribute_pane_ParamLimits

0xb0b1,	// (0x00039222) pec_attribute_pane

0x4326,	// (0x00032497) pec_content_pane_g1_ParamLimits

0x4326,	// (0x00032497) pec_content_pane_g1

0xb0c1,	// (0x00039232) pec_content_pane_t1_ParamLimits

0xb0c1,	// (0x00039232) pec_content_pane_t1

0xb0d3,	// (0x00039244) pec_content_pane_t2_ParamLimits

0xb0d3,	// (0x00039244) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0003d64e) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0003d64e) pec_content_pane_t

0x4332,	// (0x000324a3) list_single_graphic_pane_cp01_ParamLimits

0x4332,	// (0x000324a3) list_single_graphic_pane_cp01

0xa1b5,	// (0x00038326) bg_popup_sub_pane_cp04

0xb0e5,	// (0x00039256) popup_mup_playback_window_g1

0xb0f1,	// (0x00039262) popup_mup_playback_window_t1

0xb106,	// (0x00039277) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0003d653) popup_mup_playback_window_t

0xb13d,	// (0x000392ae) main_image_pane_g1_ParamLimits

0xb13d,	// (0x000392ae) main_image_pane_g1

0xb180,	// (0x000392f1) scroll_pane_cp018_ParamLimits

0xb180,	// (0x000392f1) scroll_pane_cp018

0xb198,	// (0x00039309) scroll_pane_cp016_ParamLimits

0xb198,	// (0x00039309) scroll_pane_cp016

0x4400,	// (0x00032571) smil2_image_pane_ParamLimits

0x4400,	// (0x00032571) smil2_image_pane

0x4430,	// (0x000325a1) smil2_root_pane_ParamLimits

0x4430,	// (0x000325a1) smil2_root_pane

0x4468,	// (0x000325d9) smil2_text_pane_ParamLimits

0x4468,	// (0x000325d9) smil2_text_pane

0x9f5a,	// (0x000380cb) bg_list_pane_cp06

0xb1d4,	// (0x00039345) grid_radio_pane

0x9f5a,	// (0x000380cb) bg_popup_window_pane_cp06

0xb1dc,	// (0x0003934d) main_fmradio_pane_t1

0xab97,	// (0x00038d08) heading_pane_cp04

0xb1ea,	// (0x0003935b) main_fmradio_pane_t2

0xc202,	// (0x0003a373) popup_cale_lunar_info_window_g1

0xb1f8,	// (0x00039369) main_fmradio_pane_t3

0xc20a,	// (0x0003a37b) popup_cale_lunar_info_window_g2

0xb206,	// (0x00039377) main_fmradio_pane_t4

0x0001,

0xb214,	// (0x00039385) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0003d741) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0003d668) main_fmradio_pane_t

0xb222,	// (0x00039393) wait_bar_pane_cp03

0xb22a,	// (0x0003939b) cell_fmradio_pane_ParamLimits

0xb22a,	// (0x0003939b) cell_fmradio_pane

0xb083,	// (0x000391f4) cell_fmradio_pane_g1_ParamLimits

0xb083,	// (0x000391f4) cell_fmradio_pane_g1

0x9f5a,	// (0x000380cb) grid_highlight_pane_cp011

0xb23d,	// (0x000393ae) poc_content_pane_ParamLimits

0xb23d,	// (0x000393ae) poc_content_pane

0xb24f,	// (0x000393c0) scroll_pane_cp019

0x44e8,	// (0x00032659) popup_call_poc_act_window_ParamLimits

0x44e8,	// (0x00032659) popup_call_poc_act_window

0x450c,	// (0x0003267d) popup_call_poc_inact_window_ParamLimits

0x450c,	// (0x0003267d) popup_call_poc_inact_window

0xf594,	// (0x0003d705) bg_popup_call_poc_act_pane_g

0xc1c2,	// (0x0003a333) bg_popup_call_poc_inact_pane_g1

0xc1ca,	// (0x0003a33b) bg_popup_call_poc_inact_pane_g2

0xb257,	// (0x000393c8) popup_call_poc_act_window_g2

0xc1d2,	// (0x0003a343) bg_popup_call_poc_inact_pane_g3

0xc152,	// (0x0003a2c3) bg_popup_call_poc_inact_pane_g4

0xc1da,	// (0x0003a34b) bg_popup_call_poc_inact_pane_g5

0xb25f,	// (0x000393d0) popup_call_poc_act_window_t1_ParamLimits

0xb25f,	// (0x000393d0) popup_call_poc_act_window_t1

0xb287,	// (0x000393f8) popup_call_poc_act_window_t2_ParamLimits

0xb287,	// (0x000393f8) popup_call_poc_act_window_t2

0xb2af,	// (0x00039420) popup_call_poc_act_window_t3_ParamLimits

0xb2af,	// (0x00039420) popup_call_poc_act_window_t3

0xb2d7,	// (0x00039448) popup_call_poc_act_window_t4_ParamLimits

0xb2d7,	// (0x00039448) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0003d673) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0003d673) popup_call_poc_act_window_t

0xc1e2,	// (0x0003a353) bg_popup_call_poc_inact_pane_g6

0xc1ea,	// (0x0003a35b) bg_popup_call_poc_inact_pane_g7

0xc1f2,	// (0x0003a363) bg_popup_call_poc_inact_pane_g8

0xb2e9,	// (0x0003945a) popup_call_poc_inact_window_g2

0xc1fa,	// (0x0003a36b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0003d71c) bg_popup_call_poc_inact_pane_g

0xb2f1,	// (0x00039462) popup_call_poc_inact_window_t1_ParamLimits

0xb2f1,	// (0x00039462) popup_call_poc_inact_window_t1

0xb306,	// (0x00039477) popup_call_poc_inact_window_t2_ParamLimits

0xb306,	// (0x00039477) popup_call_poc_inact_window_t2

0xb31b,	// (0x0003948c) popup_call_poc_inact_window_t3_ParamLimits

0xb31b,	// (0x0003948c) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0003d67c) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0003d67c) popup_call_poc_inact_window_t

0xc33f,	// (0x0003a4b0) context_pane_ParamLimits

0x4ae6,	// (0x00032c57) signal_pane_ParamLimits

0xa489,	// (0x000385fa) main_call2_pane

0x4a75,	// (0x00032be6) popup_phob_thumbnail2_window_ParamLimits

0x4a75,	// (0x00032be6) popup_phob_thumbnail2_window

0x4121,	// (0x00032292) aid_hotspot_pointer_arrow_pane

0x4129,	// (0x0003229a) aid_hotspot_pointer_hand_pane

0x4856,	// (0x000329c7) phob_pre_status_pane_g5

0x22a5,	// (0x00030416) cams_zoom_pane_ParamLimits

0x22b4,	// (0x00030425) image_vga_pane_ParamLimits

0x22ce,	// (0x0003043f) main_camera_pane_g1_ParamLimits

0x22e0,	// (0x00030451) main_camera_pane_g2_ParamLimits

0x22f0,	// (0x00030461) main_camera_pane_g3_ParamLimits

0x2300,	// (0x00030471) main_camera_pane_g4_ParamLimits

0x2310,	// (0x00030481) main_camera_pane_g5_ParamLimits

0x2320,	// (0x00030491) main_camera_pane_g6_ParamLimits

0x2330,	// (0x000304a1) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0003d37b) main_camera_pane_g_ParamLimits

0x2340,	// (0x000304b1) main_camera_pane_t1_ParamLimits

0x2356,	// (0x000304c7) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0003d38c) main_camera_pane_t_ParamLimits

0xa1b5,	// (0x00038326) bg_popup_preview_window_pane_cp01_ParamLimits

0xa1b5,	// (0x00038326) bg_popup_preview_window_pane_cp01

0xb330,	// (0x000394a1) popup_phob_thumbnail2_window_g1_ParamLimits

0xb330,	// (0x000394a1) popup_phob_thumbnail2_window_g1

0x9f5a,	// (0x000380cb) call2_cli_visual_pane

0x4540,	// (0x000326b1) popup_call2_audio_conf_window_ParamLimits

0x4540,	// (0x000326b1) popup_call2_audio_conf_window

0x4560,	// (0x000326d1) popup_call2_audio_first_window_ParamLimits

0x4560,	// (0x000326d1) popup_call2_audio_first_window

0x45f6,	// (0x00032767) popup_call2_audio_in_window_ParamLimits

0x45f6,	// (0x00032767) popup_call2_audio_in_window

0x463e,	// (0x000327af) popup_call2_audio_out_window_ParamLimits

0x463e,	// (0x000327af) popup_call2_audio_out_window

0x46a8,	// (0x00032819) popup_call2_audio_second_window_ParamLimits

0x46a8,	// (0x00032819) popup_call2_audio_second_window

0x470e,	// (0x0003287f) popup_call2_audio_wait_window_ParamLimits

0x470e,	// (0x0003287f) popup_call2_audio_wait_window

0x9f5a,	// (0x000380cb) bg_popup_call2_act_pane_cp03

0xa197,	// (0x00038308) list_conf_pane_cp

0xb33c,	// (0x000394ad) popup_call2_audio_conf_window_t1

0xb34a,	// (0x000394bb) list_single_graphic_popup_conf2_pane_ParamLimits

0xb34a,	// (0x000394bb) list_single_graphic_popup_conf2_pane

0xac07,	// (0x00038d78) list_highlight_pane_cp04

0xb35d,	// (0x000394ce) list_single_graphic_popup_conf2_pane_g1

0xac18,	// (0x00038d89) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0003d683) list_single_graphic_popup_conf2_pane_g

0xb367,	// (0x000394d8) list_single_graphic_popup_conf2_pane_t1

0xb375,	// (0x000394e6) bg_popup_call2_act_pane_cp01_ParamLimits

0xb375,	// (0x000394e6) bg_popup_call2_act_pane_cp01

0xb3ff,	// (0x00039570) call_type_pane_cp05_ParamLimits

0xb3ff,	// (0x00039570) call_type_pane_cp05

0xb453,	// (0x000395c4) popup_call2_audio_second_window_g1_ParamLimits

0xb453,	// (0x000395c4) popup_call2_audio_second_window_g1

0xb4a7,	// (0x00039618) popup_call2_audio_second_window_g2_ParamLimits

0xb4a7,	// (0x00039618) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0003d688) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0003d688) popup_call2_audio_second_window_g

0xb50c,	// (0x0003967d) popup_call2_audio_second_window_t1_ParamLimits

0xb50c,	// (0x0003967d) popup_call2_audio_second_window_t1

0xb5c7,	// (0x00039738) popup_call2_audio_second_window_t2_ParamLimits

0xb5c7,	// (0x00039738) popup_call2_audio_second_window_t2

0xb61a,	// (0x0003978b) popup_call2_audio_second_window_t3_ParamLimits

0xb61a,	// (0x0003978b) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0003d68f) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0003d68f) popup_call2_audio_second_window_t

0x9f5a,	// (0x000380cb) bg_popup_call2_in_pane_cp02

0x9f64,	// (0x000380d5) call_type_pane_cp04

0x9f6c,	// (0x000380dd) popup_call2_audio_wait_window_g1

0x9f74,	// (0x000380e5) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003d26a) popup_call2_audio_wait_window_g

0x9f7c,	// (0x000380ed) popup_call2_audio_wait_window_t3

0xb70d,	// (0x0003987e) bg_popup_call2_act_pane_ParamLimits

0xb70d,	// (0x0003987e) bg_popup_call2_act_pane

0xb7cd,	// (0x0003993e) call_type_pane_cp03_ParamLimits

0xb7cd,	// (0x0003993e) call_type_pane_cp03

0xb831,	// (0x000399a2) popup_call2_audio_first_window_g1_ParamLimits

0xb831,	// (0x000399a2) popup_call2_audio_first_window_g1

0xb8a1,	// (0x00039a12) popup_call2_audio_first_window_g2_ParamLimits

0xb8a1,	// (0x00039a12) popup_call2_audio_first_window_g2

0xaf97,	// (0x00039108) popup_call2_audio_first_window_g3_ParamLimits

0xaf97,	// (0x00039108) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0003d698) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0003d698) popup_call2_audio_first_window_g

0xb97f,	// (0x00039af0) popup_call2_audio_first_window_t1_ParamLimits

0xb97f,	// (0x00039af0) popup_call2_audio_first_window_t1

0xba82,	// (0x00039bf3) popup_call2_audio_first_window_t4_ParamLimits

0xba82,	// (0x00039bf3) popup_call2_audio_first_window_t4

0xbb65,	// (0x00039cd6) popup_call2_audio_first_window_t5_ParamLimits

0xbb65,	// (0x00039cd6) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0003d6a3) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0003d6a3) popup_call2_audio_first_window_t

0xa1ad,	// (0x0003831e) bg_popup_call2_act_pane_g1

0xc212,	// (0x0003a383) popup_cale_lunar_info_window_t1

0xc220,	// (0x0003a391) popup_cale_lunar_info_window_t2

0xc22e,	// (0x0003a39f) popup_cale_lunar_info_window_t3

0x9f5a,	// (0x000380cb) bg_popup_call2_bubble_pane

0xbc66,	// (0x00039dd7) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc66,	// (0x00039dd7) bg_popup_call2_in_pane_cp01

0x9c36,	// (0x00037da7) call_type_pane_cp02

0xbcae,	// (0x00039e1f) popup_call2_audio_out_window_g1_ParamLimits

0xbcae,	// (0x00039e1f) popup_call2_audio_out_window_g1

0xbcda,	// (0x00039e4b) popup_call2_audio_out_window_g2_ParamLimits

0xbcda,	// (0x00039e4b) popup_call2_audio_out_window_g2

0xbd02,	// (0x00039e73) popup_call2_audio_out_window_g3_ParamLimits

0xbd02,	// (0x00039e73) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0003d6ac) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0003d6ac) popup_call2_audio_out_window_g

0xbd3d,	// (0x00039eae) popup_call2_audio_out_window_t1_ParamLimits

0xbd3d,	// (0x00039eae) popup_call2_audio_out_window_t1

0xbd9c,	// (0x00039f0d) popup_call2_audio_out_window_t2_ParamLimits

0xbd9c,	// (0x00039f0d) popup_call2_audio_out_window_t2

0xbdf0,	// (0x00039f61) popup_call2_audio_out_window_t3_ParamLimits

0xbdf0,	// (0x00039f61) popup_call2_audio_out_window_t3

0xbe06,	// (0x00039f77) popup_call2_audio_out_window_t4_ParamLimits

0xbe06,	// (0x00039f77) popup_call2_audio_out_window_t4

0xbe1c,	// (0x00039f8d) popup_call2_audio_out_window_t5_ParamLimits

0xbe1c,	// (0x00039f8d) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0003d6b5) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0003d6b5) popup_call2_audio_out_window_t

0xbe80,	// (0x00039ff1) bg_popup_call2_in_pane_ParamLimits

0xbe80,	// (0x00039ff1) bg_popup_call2_in_pane

0xbedc,	// (0x0003a04d) popup_call2_audio_in_window_g1_ParamLimits

0xbedc,	// (0x0003a04d) popup_call2_audio_in_window_g1

0xbf14,	// (0x0003a085) popup_call2_audio_in_window_g2_ParamLimits

0xbf14,	// (0x0003a085) popup_call2_audio_in_window_g2

0xbf4c,	// (0x0003a0bd) popup_call2_audio_in_window_g3_ParamLimits

0xbf4c,	// (0x0003a0bd) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0003d6c2) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0003d6c2) popup_call2_audio_in_window_g

0xbfa4,	// (0x0003a115) popup_call2_audio_in_window_t1_ParamLimits

0xbfa4,	// (0x0003a115) popup_call2_audio_in_window_t1

0xc024,	// (0x0003a195) popup_call2_audio_in_window_t2_ParamLimits

0xc024,	// (0x0003a195) popup_call2_audio_in_window_t2

0xc0a4,	// (0x0003a215) popup_call2_audio_in_window_t3_ParamLimits

0xc0a4,	// (0x0003a215) popup_call2_audio_in_window_t3

0xc0be,	// (0x0003a22f) popup_call2_audio_in_window_t4_ParamLimits

0xc0be,	// (0x0003a22f) popup_call2_audio_in_window_t4

0xc0d0,	// (0x0003a241) popup_call2_audio_in_window_t5_ParamLimits

0xc0d0,	// (0x0003a241) popup_call2_audio_in_window_t5

0xc0e5,	// (0x0003a256) popup_call2_audio_in_window_t6_ParamLimits

0xc0e5,	// (0x0003a256) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0003d6cb) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0003d6cb) popup_call2_audio_in_window_t

0xa1ad,	// (0x0003831e) bg_popup_call2_in_pane_g1

0xc23c,	// (0x0003a3ad) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0003d746) popup_cale_lunar_info_window_t

0xa1b5,	// (0x00038326) bg_popup_call2_rect_pane_ParamLimits

0xa1b5,	// (0x00038326) bg_popup_call2_rect_pane

0x9f5a,	// (0x000380cb) call2_cli_visual_graphic_pane

0x9f5a,	// (0x000380cb) call2_cli_visual_text_pane

0x4b75,	// (0x00032ce6) smil_status_volume_pane_g3

0x0002,

0xa2db,	// (0x0003844c) call2_cli_visual_graphic_pane_g1

0xa2db,	// (0x0003844c) call2_cli_visual_graphic_pane_g2

0xa2db,	// (0x0003844c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0003d6d8) call2_cli_visual_graphic_pane_g

0xc0fa,	// (0x0003a26b) bg_popup_call2_rect_pane_g1

0xa379,	// (0x000384ea) bg_popup_call2_rect_pane_g2

0xc102,	// (0x0003a273) bg_popup_call2_rect_pane_g3

0xc10a,	// (0x0003a27b) bg_popup_call2_rect_pane_g4

0xc112,	// (0x0003a283) bg_popup_call2_rect_pane_g5

0xc11a,	// (0x0003a28b) bg_popup_call2_rect_pane_g6

0xc122,	// (0x0003a293) bg_popup_call2_rect_pane_g7

0xc12a,	// (0x0003a29b) bg_popup_call2_rect_pane_g8

0xc132,	// (0x0003a2a3) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0003d6df) bg_popup_call2_rect_pane_g

0xc13a,	// (0x0003a2ab) bg_popup_call2_bubble_pane_g1

0xc142,	// (0x0003a2b3) bg_popup_call2_bubble_pane_g2

0xc14a,	// (0x0003a2bb) bg_popup_call2_bubble_pane_g3

0xc152,	// (0x0003a2c3) bg_popup_call2_bubble_pane_g4

0xc15a,	// (0x0003a2cb) bg_popup_call2_bubble_pane_g5

0xc162,	// (0x0003a2d3) bg_popup_call2_bubble_pane_g6

0xc16a,	// (0x0003a2db) bg_popup_call2_bubble_pane_g7

0xc172,	// (0x0003a2e3) bg_popup_call2_bubble_pane_g8

0xc17a,	// (0x0003a2eb) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0003d6f2) bg_popup_call2_bubble_pane_g

0x1cc9,	// (0x0002fe3a) aid_cale_week_size_cell_pane

0x236c,	// (0x000304dd) aid_cams_cif_uncrop_pane_ParamLimits

0x236c,	// (0x000304dd) aid_cams_cif_uncrop_pane

0x2521,	// (0x00030692) aid_cams_size_cell_ParamLimits

0x2521,	// (0x00030692) aid_cams_size_cell

0x2535,	// (0x000306a6) grid_cams_pane_ParamLimits

0x254f,	// (0x000306c0) linegrid_cams_pane_ParamLimits

0x2745,	// (0x000308b6) call_video_pane_t1

0x2763,	// (0x000308d4) call_video_pane_t2

0x0001,

0xf26e,	// (0x0003d3df) call_video_pane_t

0x2b87,	// (0x00030cf8) aid_cale_month_size_cell_pane_ParamLimits

0x2b87,	// (0x00030cf8) aid_cale_month_size_cell_pane

0xf61e,	// (0x0003d78f) smil_status_volume_pane_g

0x4b82,	// (0x00032cf3) volume_smil_pane_ParamLimits

0x1814,	// (0x0002f985) aid_popup2_width_pane

0x1c05,	// (0x0002fd76) cell_qdial_pane_g4_ParamLimits

0x1c05,	// (0x0002fd76) cell_qdial_pane_g4

0x3b33,	// (0x00031ca4) aid_blid_cardinal_pane_ParamLimits

0x3b3f,	// (0x00031cb0) aid_blid_destination_pane_ParamLimits

0x3b3f,	// (0x00031cb0) aid_blid_destination_pane

0xa1b5,	// (0x00038326) bg_popup_call_poc_act_pane_ParamLimits

0xa1b5,	// (0x00038326) bg_popup_call_poc_act_pane

0xa1b5,	// (0x00038326) bg_popup_call_poc_inact_pane_ParamLimits

0xa1b5,	// (0x00038326) bg_popup_call_poc_inact_pane

0xc182,	// (0x0003a2f3) bg_popup_call_poc_act_pane_g1

0xc18a,	// (0x0003a2fb) bg_popup_call_poc_act_pane_g2

0xc192,	// (0x0003a303) bg_popup_call_poc_act_pane_g3

0xc152,	// (0x0003a2c3) bg_popup_call_poc_act_pane_g4

0xc15a,	// (0x0003a2cb) bg_popup_call_poc_act_pane_g5

0xc19a,	// (0x0003a30b) bg_popup_call_poc_act_pane_g6

0xc16a,	// (0x0003a2db) bg_popup_call_poc_act_pane_g7

0xc1a2,	// (0x0003a313) bg_popup_call_poc_act_pane_g8

0x9f5a,	// (0x000380cb) main_usb_pane

0x4a50,	// (0x00032bc1) popup_cale_lunar_info_window

0x2a2d,	// (0x00030b9e) im_reading_pane_t1_ParamLimits

0xa58a,	// (0x000386fb) list_im_pane_ParamLimits

0xa59b,	// (0x0003870c) scroll_pane_cp07_ParamLimits

0x9f5a,	// (0x000380cb) grid_highlight_pane_cp012

0xa1b5,	// (0x00038326) mup_scale_pane_ParamLimits

0xb083,	// (0x000391f4) main_usb_pane_g1_ParamLimits

0xb083,	// (0x000391f4) main_usb_pane_g1

0x476b,	// (0x000328dc) main_usb_pane_g2_ParamLimits

0x476b,	// (0x000328dc) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0003d72f) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0003d72f) main_usb_pane_g

0x4781,	// (0x000328f2) main_usb_pane_t1_ParamLimits

0x4781,	// (0x000328f2) main_usb_pane_t1

0x4793,	// (0x00032904) main_usb_pane_t2_ParamLimits

0x4793,	// (0x00032904) main_usb_pane_t2

0x47a5,	// (0x00032916) main_usb_pane_t3_ParamLimits

0x47a5,	// (0x00032916) main_usb_pane_t3

0x47b7,	// (0x00032928) main_usb_pane_t4_ParamLimits

0x47b7,	// (0x00032928) main_usb_pane_t4

0x47c9,	// (0x0003293a) main_usb_pane_t5_ParamLimits

0x47c9,	// (0x0003293a) main_usb_pane_t5

0x47db,	// (0x0003294c) main_usb_pane_t6_ParamLimits

0x47db,	// (0x0003294c) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0003d734) main_usb_pane_t_ParamLimits

0x3ae2,	// (0x00031c53) aid_text_placing

0x3aeb,	// (0x00031c5c) main_location2_pane_t1_ParamLimits

0x3afd,	// (0x00031c6e) main_location2_pane_t2_ParamLimits

0x3b0f,	// (0x00031c80) main_location2_pane_t3_ParamLimits

0x3b21,	// (0x00031c92) main_location2_pane_t4_ParamLimits

0x3b21,	// (0x00031c92) main_location2_pane_t4

0xf3cf,	// (0x0003d540) main_location2_pane_t_ParamLimits

0xa1f1,	// (0x00038362) find_pinb_pane_g2_ParamLimits

0xa1f1,	// (0x00038362) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0003d290) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0003d290) find_pinb_pane_g

0xa1fd,	// (0x0003836e) find_pinb_pane_t1_ParamLimits

0xa20f,	// (0x00038380) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0003d295) find_pinb_pane_t_ParamLimits

0x9f5a,	// (0x000380cb) main_call3_pane

0x3042,	// (0x000311b3) cale_month_day_heading_pane_t1_ParamLimits

0x30c8,	// (0x00031239) cale_month_day_heading_pane_t2_ParamLimits

0x3159,	// (0x000312ca) cale_month_day_heading_pane_t3_ParamLimits

0x31ea,	// (0x0003135b) cale_month_day_heading_pane_t4_ParamLimits

0x3283,	// (0x000313f4) cale_month_day_heading_pane_t5_ParamLimits

0x3324,	// (0x00031495) cale_month_day_heading_pane_t6_ParamLimits

0x33c5,	// (0x00031536) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0003d417) cale_month_day_heading_pane_t_ParamLimits

0xa7e5,	// (0x00038956) smil_status_volume_pane

0x4264,	// (0x000323d5) postcard_address_pane_ParamLimits

0x4264,	// (0x000323d5) postcard_address_pane

0x4276,	// (0x000323e7) postcard_message_pane_ParamLimits

0x4276,	// (0x000323e7) postcard_message_pane

0x4748,	// (0x000328b9) call2_cli_visual_pane_t1_ParamLimits

0x4748,	// (0x000328b9) call2_cli_visual_pane_t1

0x4d37,	// (0x00032ea8) postcard_message_pane_t1_ParamLimits

0x4d37,	// (0x00032ea8) postcard_message_pane_t1

0x4d20,	// (0x00032e91) postcard_address_pane_t1_ParamLimits

0x4d20,	// (0x00032e91) postcard_address_pane_t1

0x4d0c,	// (0x00032e7d) popup_call3_audio_in_window_ParamLimits

0x4d0c,	// (0x00032e7d) popup_call3_audio_in_window

0x4b97,	// (0x00032d08) bg_popup_call3_in_pane_ParamLimits

0x4b97,	// (0x00032d08) bg_popup_call3_in_pane

0x4c0d,	// (0x00032d7e) popup_call3_audio_in_window_g1_ParamLimits

0x4c0d,	// (0x00032d7e) popup_call3_audio_in_window_g1

0x4c2d,	// (0x00032d9e) popup_call3_audio_in_window_g2_ParamLimits

0x4c2d,	// (0x00032d9e) popup_call3_audio_in_window_g2

0x4c4d,	// (0x00032dbe) popup_call3_audio_in_window_g3_ParamLimits

0x4c4d,	// (0x00032dbe) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0003d796) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0003d796) popup_call3_audio_in_window_g

0x4c7e,	// (0x00032def) popup_call3_audio_in_window_t1_ParamLimits

0x4c7e,	// (0x00032def) popup_call3_audio_in_window_t1

0x4cbc,	// (0x00032e2d) popup_call3_audio_in_window_t2_ParamLimits

0x4cbc,	// (0x00032e2d) popup_call3_audio_in_window_t2

0x4cfa,	// (0x00032e6b) popup_call3_audio_in_window_t3_ParamLimits

0x4cfa,	// (0x00032e6b) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0003d79f) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0003d79f) popup_call3_audio_in_window_t

0xa489,	// (0x000385fa) bg_popup_call3_rect_pane

0xc0fa,	// (0x0003a26b) bg_popup_call3_rect_pane_g1

0xa379,	// (0x000384ea) bg_popup_call3_rect_pane_g2

0xc102,	// (0x0003a273) bg_popup_call3_rect_pane_g3

0xc10a,	// (0x0003a27b) bg_popup_call3_rect_pane_g4

0xc112,	// (0x0003a283) bg_popup_call3_rect_pane_g5

0xc11a,	// (0x0003a28b) bg_popup_call3_rect_pane_g6

0xc122,	// (0x0003a293) bg_popup_call3_rect_pane_g7

0x3e2b,	// (0x00031f9c) mup_visualizer_osc_pane

0xafa5,	// (0x00039116) mup_visualizer_spec_pane

0x4bc7,	// (0x00032d38) call3_video_qcif_pane_ParamLimits

0x4bc7,	// (0x00032d38) call3_video_qcif_pane

0x4bda,	// (0x00032d4b) call3_video_qcif_uncrop_pane_ParamLimits

0x4bda,	// (0x00032d4b) call3_video_qcif_uncrop_pane

0x4be8,	// (0x00032d59) call3_video_subqcif_pane_ParamLimits

0x4be8,	// (0x00032d59) call3_video_subqcif_pane

0x4bfc,	// (0x00032d6d) call3_video_subqcif_uncrop_pane_ParamLimits

0x4bfc,	// (0x00032d6d) call3_video_subqcif_uncrop_pane

0x4c6d,	// (0x00032dde) popup_call3_audio_in_window_g4_ParamLimits

0x4c6d,	// (0x00032dde) popup_call3_audio_in_window_g4

0x4b64,	// (0x00032cd5) mup_spec_half_pane

0x4b6d,	// (0x00032cde) mup_spec_half_pane_cp

0xc39f,	// (0x0003a510) mup_osc_middle_pane

0xc3a8,	// (0x0003a519) mup_visualizer_osc_pane_g1

0x4b44,	// (0x00032cb5) mup_spec_bar_pane_ParamLimits

0x4b44,	// (0x00032cb5) mup_spec_bar_pane

0xc38c,	// (0x0003a4fd) mup_spec_bar_pane_g1

0xc396,	// (0x0003a507) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0003d78a) mup_spec_bar_pane_g

0x1cc9,	// (0x0002fe3a) aid_cale_week_size_cell_pane_ParamLimits

0x1ce3,	// (0x0002fe54) bg_cale_heading_pane_ParamLimits

0xa3e2,	// (0x00038553) bg_cale_pane_cp01_ParamLimits

0x1cfb,	// (0x0002fe6c) cale_week_corner_pane_ParamLimits

0x1d1a,	// (0x0002fe8b) cale_week_day_heading_pane_ParamLimits

0x1d37,	// (0x0002fea8) cale_week_scroll_pane_g1_ParamLimits

0x1d4a,	// (0x0002febb) cale_week_scroll_pane_g2_ParamLimits

0x1d62,	// (0x0002fed3) cale_week_scroll_pane_g3_ParamLimits

0x1d7a,	// (0x0002feeb) cale_week_scroll_pane_g4_ParamLimits

0x1d92,	// (0x0002ff03) cale_week_scroll_pane_g5_ParamLimits

0x1db2,	// (0x0002ff23) cale_week_scroll_pane_g6_ParamLimits

0x1dd2,	// (0x0002ff43) cale_week_scroll_pane_g7_ParamLimits

0x1df2,	// (0x0002ff63) cale_week_scroll_pane_g8_ParamLimits

0x1e16,	// (0x0002ff87) cale_week_scroll_pane_g9_ParamLimits

0x1e2e,	// (0x0002ff9f) cale_week_scroll_pane_g10_ParamLimits

0x1e46,	// (0x0002ffb7) cale_week_scroll_pane_g11_ParamLimits

0x1e5e,	// (0x0002ffcf) cale_week_scroll_pane_g12_ParamLimits

0x1e76,	// (0x0002ffe7) cale_week_scroll_pane_g13_ParamLimits

0x1e76,	// (0x0002ffe7) cale_week_scroll_pane_g14_ParamLimits

0x1e76,	// (0x0002ffe7) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0003d321) cale_week_scroll_pane_g_ParamLimits

0x1eb2,	// (0x00030023) cale_week_time_pane_ParamLimits

0x1ed6,	// (0x00030047) grid_cale_week_pane_ParamLimits

0xa3ff,	// (0x00038570) listscroll_cale_week_pane_t1

0xa411,	// (0x00038582) scroll_pane_cp08_ParamLimits

0x2bdc,	// (0x00030d4d) cale_month_corner_pane_ParamLimits

0xa7bb,	// (0x0003892c) cale_month_pane_t1

0x2fe0,	// (0x00031151) cale_month_week_pane_ParamLimits

0x38a4,	// (0x00031a15) popup_call_status_window_g1_ParamLimits

0x38b8,	// (0x00031a29) popup_call_status_window_g2_ParamLimits

0x38cc,	// (0x00031a3d) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0003d4c7) popup_call_status_window_g_ParamLimits

0xab87,	// (0x00038cf8) aid_call2_pane

0x409a,	// (0x0003220b) msg_header_pane_g1

0x4264,	// (0x000323d5) postcard_address2_pane_ParamLimits

0x4264,	// (0x000323d5) postcard_address2_pane

0x4276,	// (0x000323e7) postcard_message2_pane_ParamLimits

0x4276,	// (0x000323e7) postcard_message2_pane

0x4af4,	// (0x00032c65) message2_row_pane_ParamLimits

0x4af4,	// (0x00032c65) message2_row_pane

0x4b11,	// (0x00032c82) address2_row_pane_ParamLimits

0x4b11,	// (0x00032c82) address2_row_pane

0xc35a,	// (0x0003a4cb) postcard_message2_row_pane_g1

0xc362,	// (0x0003a4d3) postcard_message2_row_pane_t1

0xc35a,	// (0x0003a4cb) address2_row_pane_g1

0xc362,	// (0x0003a4d3) address2_row_pane_t1

0x221a,	// (0x0003038b) aid_size_cell_vorec

0x9f5a,	// (0x000380cb) main_rss_pane

0x4b24,	// (0x00032c95) rss_list_single_pane_ParamLimits

0x4b24,	// (0x00032c95) rss_list_single_pane

0xc370,	// (0x0003a4e1) rss_list_single_pane_t1

0xc37e,	// (0x0003a4ef) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0003d785) rss_list_single_pane_t

0x9f5a,	// (0x000380cb) main_camera2_pane

0x9f5a,	// (0x000380cb) main_video2_pane

0x0875,	// (0x0002e9e6) cams_zoom_pane_cp2_ParamLimits

0x0875,	// (0x0002e9e6) cams_zoom_pane_cp2

0x0895,	// (0x0002ea06) image2_vga_pane_ParamLimits

0x0895,	// (0x0002ea06) image2_vga_pane

0x08e6,	// (0x0002ea57) main_camera2_pane_g1_ParamLimits

0x08e6,	// (0x0002ea57) main_camera2_pane_g1

0x0906,	// (0x0002ea77) main_camera2_pane_g2_ParamLimits

0x0906,	// (0x0002ea77) main_camera2_pane_g2

0x0926,	// (0x0002ea97) main_camera2_pane_g3_ParamLimits

0x0926,	// (0x0002ea97) main_camera2_pane_g3

0x0946,	// (0x0002eab7) main_camera2_pane_g4_ParamLimits

0x0946,	// (0x0002eab7) main_camera2_pane_g4

0x0966,	// (0x0002ead7) main_camera2_pane_g5_ParamLimits

0x0966,	// (0x0002ead7) main_camera2_pane_g5

0x0986,	// (0x0002eaf7) main_camera2_pane_g6_ParamLimits

0x0986,	// (0x0002eaf7) main_camera2_pane_g6

0x09a6,	// (0x0002eb17) main_camera2_pane_g7_ParamLimits

0x09a6,	// (0x0002eb17) main_camera2_pane_g7

0x09c6,	// (0x0002eb37) main_camera2_pane_g8_ParamLimits

0x09c6,	// (0x0002eb37) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0003d7a6) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0003d7a6) main_camera2_pane_g

0x0a06,	// (0x0002eb77) main_camera2_pane_t1_ParamLimits

0x0a06,	// (0x0002eb77) main_camera2_pane_t1

0x0a3b,	// (0x0002ebac) main_camera2_pane_t2_ParamLimits

0x0a3b,	// (0x0002ebac) main_camera2_pane_t2

0x0a61,	// (0x0002ebd2) main_camera2_pane_t3_ParamLimits

0x0a61,	// (0x0002ebd2) main_camera2_pane_t3

0x0abf,	// (0x0002ec30) main_camera2_pane_t4_ParamLimits

0x0abf,	// (0x0002ec30) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0003d7b9) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0003d7b9) main_camera2_pane_t

0x0b51,	// (0x0002ecc2) cams_zoom_pane_cp4_ParamLimits

0x0b51,	// (0x0002ecc2) cams_zoom_pane_cp4

0x0b67,	// (0x0002ecd8) image2_cif_pane_ParamLimits

0x0b67,	// (0x0002ecd8) image2_cif_pane

0x0b92,	// (0x0002ed03) image2_subqcif_pane_ParamLimits

0x0b92,	// (0x0002ed03) image2_subqcif_pane

0x0bac,	// (0x0002ed1d) main_video2_pane_g1_ParamLimits

0x0bac,	// (0x0002ed1d) main_video2_pane_g1

0x0bc6,	// (0x0002ed37) main_video2_pane_g2_ParamLimits

0x0bc6,	// (0x0002ed37) main_video2_pane_g2

0x0bdc,	// (0x0002ed4d) main_video2_pane_g3_ParamLimits

0x0bdc,	// (0x0002ed4d) main_video2_pane_g3

0x0bf2,	// (0x0002ed63) main_video2_pane_g4_ParamLimits

0x0bf2,	// (0x0002ed63) main_video2_pane_g4

0x0c08,	// (0x0002ed79) main_video2_pane_g5_ParamLimits

0x0c08,	// (0x0002ed79) main_video2_pane_g5

0x0c1e,	// (0x0002ed8f) main_video2_pane_g6_ParamLimits

0x0c1e,	// (0x0002ed8f) main_video2_pane_g6

0x0005,

0xf657,	// (0x0003d7c8) main_video2_pane_g_ParamLimits

0xf657,	// (0x0003d7c8) main_video2_pane_g

0x0c38,	// (0x0002eda9) main_video2_pane_t1_ParamLimits

0x0c38,	// (0x0002eda9) main_video2_pane_t1

0x0c5c,	// (0x0002edcd) main_video2_pane_t2_ParamLimits

0x0c5c,	// (0x0002edcd) main_video2_pane_t2

0x0caa,	// (0x0002ee1b) main_video2_pane_t3_ParamLimits

0x0caa,	// (0x0002ee1b) main_video2_pane_t3

0x0002,

0xf664,	// (0x0003d7d5) main_video2_pane_t_ParamLimits

0xf664,	// (0x0003d7d5) main_video2_pane_t

0x4896,	// (0x00032a07) call_muted_g2

0x0001,

0xf606,	// (0x0003d777) call_muted_g

0x9f5a,	// (0x000380cb) main_mup2_pane

0x4d82,	// (0x00032ef3) main_mup2_pane_g1_ParamLimits

0x4d82,	// (0x00032ef3) main_mup2_pane_g1

0x4d8e,	// (0x00032eff) main_mup2_pane_g2_ParamLimits

0x4d8e,	// (0x00032eff) main_mup2_pane_g2

0x4ffd,	// (0x0003316e) main_mup_pane_g13_cp1

0x5005,	// (0x00033176) mup_volume_pane_cp1

0x4daa,	// (0x00032f1b) main_mup2_pane_g4_ParamLimits

0x4daa,	// (0x00032f1b) main_mup2_pane_g4

0x4dbc,	// (0x00032f2d) main_mup2_pane_g5_ParamLimits

0x4dbc,	// (0x00032f2d) main_mup2_pane_g5

0x4dce,	// (0x00032f3f) main_mup2_pane_g6_ParamLimits

0x4dce,	// (0x00032f3f) main_mup2_pane_g6

0x4de0,	// (0x00032f51) main_mup2_pane_g7_ParamLimits

0x4de0,	// (0x00032f51) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0003d7dc) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0003d7dc) main_mup2_pane_g

0x4df8,	// (0x00032f69) main_mup2_pane_t1_ParamLimits

0x4df8,	// (0x00032f69) main_mup2_pane_t1

0x4e0e,	// (0x00032f7f) main_mup2_pane_t2_ParamLimits

0x4e0e,	// (0x00032f7f) main_mup2_pane_t2

0x4e24,	// (0x00032f95) main_mup2_pane_t3_ParamLimits

0x4e24,	// (0x00032f95) main_mup2_pane_t3

0x4e3a,	// (0x00032fab) main_mup2_pane_t4_ParamLimits

0x4e3a,	// (0x00032fab) main_mup2_pane_t4

0x4e52,	// (0x00032fc3) main_mup2_pane_t5_ParamLimits

0x4e52,	// (0x00032fc3) main_mup2_pane_t5

0x4e6a,	// (0x00032fdb) main_mup2_pane_t6_ParamLimits

0x4e6a,	// (0x00032fdb) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0003d7eb) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0003d7eb) main_mup2_pane_t

0x4e9a,	// (0x0003300b) mup2_visualizer_pane_ParamLimits

0x4e9a,	// (0x0003300b) mup2_visualizer_pane

0x4ec8,	// (0x00033039) mup_progress_pane_cp_ParamLimits

0x4ec8,	// (0x00033039) mup_progress_pane_cp

0x4fe8,	// (0x00033159) mup_volume_pane_cp_ParamLimits

0x4fe8,	// (0x00033159) mup_volume_pane_cp

0x4edc,	// (0x0003304d) mup2_visualizer_pane_g1_ParamLimits

0x4edc,	// (0x0003304d) mup2_visualizer_pane_g1

0xc3df,	// (0x0003a550) mup2_visualizer_pane_g2_ParamLimits

0xc3df,	// (0x0003a550) mup2_visualizer_pane_g2

0x4ef3,	// (0x00033064) mup2_visualizer_pane_g3_ParamLimits

0x4ef3,	// (0x00033064) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0003d7f8) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0003d7f8) mup2_visualizer_pane_g

0xb1cc,	// (0x0003933d) aid_size_cell_fmradio

0x0563,	// (0x0002e6d4) aid_height_parent_landcape

0xa619,	// (0x0003878a) wml_content_pane_cp

0xa621,	// (0x00038792) wml_tabs_pane

0xa62a,	// (0x0003879b) popup_wml_miniature_window

0xa632,	// (0x000387a3) scroll_pane_cp021

0xa646,	// (0x000387b7) wml_content_pane_comp8

0x9f5a,	// (0x000380cb) bg_popup_sub_pane_cp05

0xc3fd,	// (0x0003a56e) popup_wml_miniature_window_g1

0xc405,	// (0x0003a576) wml_miniature_view_pane

0x4eff,	// (0x00033070) aid_size_wml_view

0x4f07,	// (0x00033078) wml_miniature_view_pane_g1

0x4f10,	// (0x00033081) wml_miniature_view_pane_g2

0x4f19,	// (0x0003308a) wml_miniature_view_pane_g3

0x4f21,	// (0x00033092) wml_miniature_view_pane_g4

0x4f29,	// (0x0003309a) wml_miniature_view_pane_g5

0x4f31,	// (0x000330a2) wml_miniature_view_pane_g6

0x4f39,	// (0x000330aa) wml_miniature_view_pane_g7

0x4f41,	// (0x000330b2) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0003d7ff) wml_miniature_view_pane_g

0xc40d,	// (0x0003a57e) background_graphic_ParamLimits

0xc40d,	// (0x0003a57e) background_graphic

0xc419,	// (0x0003a58a) wml_tabs_2_pane

0xc422,	// (0x0003a593) wml_tabs_3_pane_ParamLimits

0xc422,	// (0x0003a593) wml_tabs_3_pane

0xc434,	// (0x0003a5a5) wml_tabs_4_pane_ParamLimits

0xc434,	// (0x0003a5a5) wml_tabs_4_pane

0xc44a,	// (0x0003a5bb) wml_tabs_5_pane_ParamLimits

0xc44a,	// (0x0003a5bb) wml_tabs_5_pane

0xc464,	// (0x0003a5d5) wml_tabs_pane_g2_ParamLimits

0xc464,	// (0x0003a5d5) wml_tabs_pane_g2

0xc478,	// (0x0003a5e9) wml_tabs_pane_g3_ParamLimits

0xc478,	// (0x0003a5e9) wml_tabs_pane_g3

0x4f49,	// (0x000330ba) wml_tabs_2_active_pane_ParamLimits

0x4f49,	// (0x000330ba) wml_tabs_2_active_pane

0x4f5d,	// (0x000330ce) wml_tabs_2_passive_pane_ParamLimits

0x4f5d,	// (0x000330ce) wml_tabs_2_passive_pane

0x4f71,	// (0x000330e2) wml_tabs_3_active_pane_cp_ParamLimits

0x4f71,	// (0x000330e2) wml_tabs_3_active_pane_cp

0x4f86,	// (0x000330f7) wml_tabs_3_passive_pane_ParamLimits

0x4f86,	// (0x000330f7) wml_tabs_3_passive_pane

0x4f99,	// (0x0003310a) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f99,	// (0x0003310a) wml_tabs_3_passive_pane_cp

0x4fb0,	// (0x00033121) tabs_4_active_pane

0x4fb8,	// (0x00033129) tabs_4_passive_pane

0x4fc2,	// (0x00033133) tabs_4_passive_pane_cp

0x4fca,	// (0x0003313b) tabs_4_passive_pane_cp2

0x4763,	// (0x000328d4) aid_height_text

0x3dfd,	// (0x00031f6e) mup_volume_cont_pane_ParamLimits

0x3dfd,	// (0x00031f6e) mup_volume_cont_pane

0x198e,	// (0x0002faff) aid_size_cell_pinb

0x1998,	// (0x0002fb09) aid_size_list_pinb

0x4eb4,	// (0x00033025) mup2_volume_cont_pane_ParamLimits

0x4eb4,	// (0x00033025) mup2_volume_cont_pane

0x4fd4,	// (0x00033145) mup2_volume_cont_pane_g1_ParamLimits

0x4fd4,	// (0x00033145) mup2_volume_cont_pane_g1

0x00b7,	// (0x0002e228) aid_size_cell_touch_ParamLimits

0x00b7,	// (0x0002e228) aid_size_cell_touch

0x029f,	// (0x0002e410) touch_pane_ParamLimits

0x029f,	// (0x0002e410) touch_pane

0x18c5,	// (0x0002fa36) main_rss2_pane

0xc495,	// (0x0003a606) listscroll_rss2_pane

0xc49e,	// (0x0003a60f) rss2_navigation_pane

0xc4a6,	// (0x0003a617) list_rss2_pane

0xacac,	// (0x00038e1d) scroll_pane_cp22

0xc4ae,	// (0x0003a61f) rss2_navigation_pane_g1

0xc4b7,	// (0x0003a628) rss2_navigation_pane_g2

0xc4bf,	// (0x0003a630) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0003d810) rss2_navigation_pane_g

0xc4c7,	// (0x0003a638) rss2_navigation_pane_t1

0x500d,	// (0x0003317e) rss2_list_single_pane_ParamLimits

0x500d,	// (0x0003317e) rss2_list_single_pane

0xc4d5,	// (0x0003a646) rss2_list_single_pane_t2

0xc4e3,	// (0x0003a654) rss2_list_single_pane_t3_ParamLimits

0xc4e3,	// (0x0003a654) rss2_list_single_pane_t3

0xc500,	// (0x0003a671) rss2_list_single_pane_t4

0x368d,	// (0x000317fe) smil_status_pane_g1

0x18ab,	// (0x0002fa1c) main_image2_pane_ParamLimits

0x18ab,	// (0x0002fa1c) main_image2_pane

0x09e6,	// (0x0002eb57) main_camera2_pane_g9_ParamLimits

0x09e6,	// (0x0002eb57) main_camera2_pane_g9

0x0b14,	// (0x0002ec85) main_camera2_pane_t5_ParamLimits

0x0b14,	// (0x0002ec85) main_camera2_pane_t5

0x4d52,	// (0x00032ec3) main_camera2_pane_t6_ParamLimits

0x4d52,	// (0x00032ec3) main_camera2_pane_t6

0x5023,	// (0x00033194) main_image2_pane_g1_ParamLimits

0x5023,	// (0x00033194) main_image2_pane_g1

0x449e,	// (0x0003260f) smil2_video_pane_ParamLimits

0x449e,	// (0x0003260f) smil2_video_pane

0x1820,	// (0x0002f991) aid_zoom_text_primary_cp

0x18a1,	// (0x0002fa12) popup_preview_fixed_window

0xa582,	// (0x000386f3) im_reading_pane_g1

0x085d,	// (0x0002e9ce) cams2_bc_adjust_pane_cp_ParamLimits

0x085d,	// (0x0002e9ce) cams2_bc_adjust_pane_cp

0x0b43,	// (0x0002ecb4) cams2_bc_adjust_pane_ParamLimits

0x0b43,	// (0x0002ecb4) cams2_bc_adjust_pane

0xced1,	// (0x0003b042) cams2_bc_adjust_pane_g1

0x5039,	// (0x000331aa) cams2_slider_pane

0x5042,	// (0x000331b3) cams2_slider_pane_g1

0x504b,	// (0x000331bc) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0003d817) cams2_slider_pane_g

0x030f,	// (0x0002e480) calc_display_pane_ParamLimits

0x0337,	// (0x0002e4a8) calc_paper_pane_ParamLimits

0x035a,	// (0x0002e4cb) grid_calc_pane_ParamLimits

0x392d,	// (0x00031a9e) popup_clock_digital_window_t1_ParamLimits

0xb169,	// (0x000392da) main_image_pane_t1

0x02f1,	// (0x0002e462) aid_size_cell_calc_ParamLimits

0x02f1,	// (0x0002e462) aid_size_cell_calc

0x05bb,	// (0x0002e72c) popup_blid_sat_info2_window_ParamLimits

0x05bb,	// (0x0002e72c) popup_blid_sat_info2_window

0xc516,	// (0x0003a687) aid_size_cell_blid

0xc51e,	// (0x0003a68f) bg_popup_window_pane_cp07

0xc541,	// (0x0003a6b2) grid_popup_blid_pane

0xc54b,	// (0x0003a6bc) heading_pane_cp05_ParamLimits

0xc54b,	// (0x0003a6bc) heading_pane_cp05

0xc615,	// (0x0003a786) cell_popup_blid_pane_ParamLimits

0xc615,	// (0x0003a786) cell_popup_blid_pane

0xc639,	// (0x0003a7aa) cell_popup_blid_pane_g1

0xc641,	// (0x0003a7b2) cell_popup_blid_pane_t1

0x4e84,	// (0x00032ff5) mup2_indicator_pane_ParamLimits

0x4e84,	// (0x00032ff5) mup2_indicator_pane

0xa489,	// (0x000385fa) mup2_visualizer_osc_pane

0xc3eb,	// (0x0003a55c) mup2_visualizer_spec_pane_ParamLimits

0xc3eb,	// (0x0003a55c) mup2_visualizer_spec_pane

0x5065,	// (0x000331d6) mup2_spec_half_pane

0x506e,	// (0x000331df) mup2_spec_half_pane_cp

0x5076,	// (0x000331e7) mup2_spec_bar_pane_ParamLimits

0x5076,	// (0x000331e7) mup2_spec_bar_pane

0xc38c,	// (0x0003a4fd) mup2_spec_bar_pane_g1

0xc396,	// (0x0003a507) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0003d78a) mup2_spec_bar_pane_g

0x5096,	// (0x00033207) mup2_osc_middle_pane

0xc3a8,	// (0x0003a519) mup2_visualizer_osc_pane_g1

0x9b67,	// (0x00037cd8) popup_number_entry_window_t1_ParamLimits

0x9b7a,	// (0x00037ceb) popup_number_entry_window_t2_ParamLimits

0x9b8c,	// (0x00037cfd) popup_number_entry_window_t3_ParamLimits

0x18cf,	// (0x0002fa40) popup_number_entry_window_t5_ParamLimits

0x18cf,	// (0x0002fa40) popup_number_entry_window_t5

0xf0ca,	// (0x0003d23b) popup_number_entry_window_t_ParamLimits

0x9b9e,	// (0x00037d0f) text_title_cp2_ParamLimits

0x4131,	// (0x000322a2) aid_hotspot_pointer_text2_pane

0x4187,	// (0x000322f8) main_viewer_pane_g9_ParamLimits

0x4187,	// (0x000322f8) main_viewer_pane_g9

0xa7bb,	// (0x0003892c) cale_month_pane_t1_ParamLimits

0xa7f8,	// (0x00038969) bg_cale_pane_ParamLimits

0xa82c,	// (0x0003899d) list_cale_pane_ParamLimits

0xa83d,	// (0x000389ae) listscroll_cale_day_pane_t1

0xa84f,	// (0x000389c0) scroll_pane_cp09_ParamLimits

0x3e33,	// (0x00031fa4) main_mup_eq_pane_t1_ParamLimits

0x3e33,	// (0x00031fa4) main_mup_eq_pane_t1

0x3e4d,	// (0x00031fbe) main_mup_eq_pane_t2_ParamLimits

0x3e4d,	// (0x00031fbe) main_mup_eq_pane_t2

0x3e67,	// (0x00031fd8) main_mup_eq_pane_t3_ParamLimits

0x3e67,	// (0x00031fd8) main_mup_eq_pane_t3

0x3e83,	// (0x00031ff4) main_mup_eq_pane_t4_ParamLimits

0x3e83,	// (0x00031ff4) main_mup_eq_pane_t4

0x3e9f,	// (0x00032010) main_mup_eq_pane_t5_ParamLimits

0x3e9f,	// (0x00032010) main_mup_eq_pane_t5

0x3ebb,	// (0x0003202c) main_mup_eq_pane_t6_ParamLimits

0x3ebb,	// (0x0003202c) main_mup_eq_pane_t6

0x3ecf,	// (0x00032040) main_mup_eq_pane_t7_ParamLimits

0x3ecf,	// (0x00032040) main_mup_eq_pane_t7

0x3ee3,	// (0x00032054) main_mup_eq_pane_t8_ParamLimits

0x3ee3,	// (0x00032054) main_mup_eq_pane_t8

0x3ef7,	// (0x00032068) main_mup_eq_pane_t9_ParamLimits

0x3ef7,	// (0x00032068) main_mup_eq_pane_t9

0x3f11,	// (0x00032082) main_mup_eq_pane_t10_ParamLimits

0x3f11,	// (0x00032082) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0003d5c6) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0003d5c6) main_mup_eq_pane_t

0x3fc0,	// (0x00032131) mup_equalizer_pane_cp5_ParamLimits

0x3fd4,	// (0x00032145) mup_equalizer_pane_cp6_ParamLimits

0x3fe8,	// (0x00032159) mup_equalizer_pane_cp7_ParamLimits

0x18c5,	// (0x0002fa36) main_gallery_pane

0xc3b1,	// (0x0003a522) smil2_volume_pane

0xc3b9,	// (0x0003a52a) smil_status_volume_pane_g1_ParamLimits

0xc3cc,	// (0x0003a53d) smil_status_volume_pane_g2_ParamLimits

0x4b75,	// (0x00032ce6) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0003d78f) smil_status_volume_pane_g_ParamLimits

0xc51e,	// (0x0003a68f) bg_popup_window_pane_cp07_ParamLimits

0xc52c,	// (0x0003a69d) blid_firmament_pane

0x509f,	// (0x00033210) aid_size_cell_gallery_ParamLimits

0x509f,	// (0x00033210) aid_size_cell_gallery

0x50b5,	// (0x00033226) grid_gallery_pane_ParamLimits

0x50b5,	// (0x00033226) grid_gallery_pane

0x50ce,	// (0x0003323f) cell_gallery_pane_ParamLimits

0x50ce,	// (0x0003323f) cell_gallery_pane

0xc64f,	// (0x0003a7c0) bg_cell_gallery_focus_pane_ParamLimits

0xc64f,	// (0x0003a7c0) bg_cell_gallery_focus_pane

0xc661,	// (0x0003a7d2) cell_gallery_pane_g1_ParamLimits

0xc661,	// (0x0003a7d2) cell_gallery_pane_g1

0x5117,	// (0x00033288) cell_gallery_pane_g2_ParamLimits

0x5117,	// (0x00033288) cell_gallery_pane_g2

0x5124,	// (0x00033295) cell_gallery_pane_g3_ParamLimits

0x5124,	// (0x00033295) cell_gallery_pane_g3

0xc66d,	// (0x0003a7de) cell_gallery_pane_g4_ParamLimits

0xc66d,	// (0x0003a7de) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0003d83d) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0003d83d) cell_gallery_pane_g

0xc679,	// (0x0003a7ea) bg_cell_gallery_focus_pane_g1

0xc681,	// (0x0003a7f2) bg_cell_gallery_focus_pane_g2

0xc689,	// (0x0003a7fa) bg_cell_gallery_focus_pane_g3

0xc691,	// (0x0003a802) bg_cell_gallery_focus_pane_g4

0xc699,	// (0x0003a80a) bg_cell_gallery_focus_pane_g5

0xc6a1,	// (0x0003a812) bg_cell_gallery_focus_pane_g6

0xc6a9,	// (0x0003a81a) bg_cell_gallery_focus_pane_g7

0xc6b1,	// (0x0003a822) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0003d846) bg_cell_gallery_focus_pane_g

0xc6b9,	// (0x0003a82a) aid_firma_cardinal

0xc6cd,	// (0x0003a83e) blid_firmament_pane_t1

0xc6e4,	// (0x0003a855) blid_firmament_pane_t2

0xc6fb,	// (0x0003a86c) blid_firmament_pane_t3

0xc712,	// (0x0003a883) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0003d857) blid_firmament_pane_t

0xc729,	// (0x0003a89a) blid_sat_info_pane

0xc739,	// (0x0003a8aa) blid_sat_info_pane_g1

0xc739,	// (0x0003a8aa) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0003d860) blid_sat_info_pane_g

0xc743,	// (0x0003a8b4) blid_sat_info_pane_t1

0xc751,	// (0x0003a8c2) smil2_volume_content_pane

0xc75a,	// (0x0003a8cb) smil2_volume_pane_g1

0xc762,	// (0x0003a8d3) smil2_volume_content_pane_g1

0xc76b,	// (0x0003a8dc) smil2_volume_content_pane_g2

0xc774,	// (0x0003a8e5) smil2_volume_content_pane_g3

0xc77d,	// (0x0003a8ee) smil2_volume_content_pane_g4

0xc786,	// (0x0003a8f7) smil2_volume_content_pane_g5

0xc78f,	// (0x0003a900) smil2_volume_content_pane_g6

0xc798,	// (0x0003a909) smil2_volume_content_pane_g7

0xc7a1,	// (0x0003a912) smil2_volume_content_pane_g8

0xc7aa,	// (0x0003a91b) smil2_volume_content_pane_g9

0xc7b3,	// (0x0003a924) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0003d865) smil2_volume_content_pane_g

0x1f8a,	// (0x000300fb) cale_week_day_heading_pane_t1_ParamLimits

0x1fd4,	// (0x00030145) cale_week_day_heading_pane_t2_ParamLimits

0x2023,	// (0x00030194) cale_week_day_heading_pane_t3_ParamLimits

0x2072,	// (0x000301e3) cale_week_day_heading_pane_t4_ParamLimits

0x20c1,	// (0x00030232) cale_week_day_heading_pane_t5_ParamLimits

0x2118,	// (0x00030289) cale_week_day_heading_pane_t6_ParamLimits

0x216f,	// (0x000302e0) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0003d342) cale_week_day_heading_pane_t_ParamLimits

0xa42e,	// (0x0003859f) bg_cale_side_pane_ParamLimits

0x0429,	// (0x0002e59a) cale_week_time_pane_t1_ParamLimits

0x0443,	// (0x0002e5b4) cale_week_time_pane_t2_ParamLimits

0x045d,	// (0x0002e5ce) cale_week_time_pane_t3_ParamLimits

0x0477,	// (0x0002e5e8) cale_week_time_pane_t4_ParamLimits

0x0491,	// (0x0002e602) cale_week_time_pane_t5_ParamLimits

0x04ab,	// (0x0002e61c) cale_week_time_pane_t6_ParamLimits

0x04c5,	// (0x0002e636) cale_week_time_pane_t7_ParamLimits

0x04df,	// (0x0002e650) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0003d351) cale_week_time_pane_t_ParamLimits

0x21b9,	// (0x0003032a) cell_cale_week_pane_g2_ParamLimits

0xa42e,	// (0x0003859f) bg_cale_side_pane_cp01_ParamLimits

0x346e,	// (0x000315df) cale_month_week_pane_t1_ParamLimits

0x3487,	// (0x000315f8) cale_month_week_pane_t2_ParamLimits

0x34a0,	// (0x00031611) cale_month_week_pane_t3_ParamLimits

0x34b9,	// (0x0003162a) cale_month_week_pane_t4_ParamLimits

0x34d2,	// (0x00031643) cale_month_week_pane_t5_ParamLimits

0x34eb,	// (0x0003165c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0003d426) cale_month_week_pane_t_ParamLimits

0x365c,	// (0x000317cd) cell_cale_month_pane_g1_ParamLimits

0x18c5,	// (0x0002fa36) main_cale_event_viewer_pane

0x9b3d,	// (0x00037cae) listscroll_cale_event_viewer_pane

0xc7bc,	// (0x0003a92d) list_cale_ev_pane

0xc7c4,	// (0x0003a935) scroll_pane_cp023

0xc7d0,	// (0x0003a941) field_cale_ev_pane_ParamLimits

0xc7d0,	// (0x0003a941) field_cale_ev_pane

0xc7ee,	// (0x0003a95f) field_cale_ev_content_pane_ParamLimits

0xc7ee,	// (0x0003a95f) field_cale_ev_content_pane

0xc7fa,	// (0x0003a96b) field_cale_ev_pane_g1_ParamLimits

0xc7fa,	// (0x0003a96b) field_cale_ev_pane_g1

0xc806,	// (0x0003a977) field_cale_ev_pane_g2_ParamLimits

0xc806,	// (0x0003a977) field_cale_ev_pane_g2

0xc81e,	// (0x0003a98f) field_cale_ev_pane_g3_ParamLimits

0xc81e,	// (0x0003a98f) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0003d87a) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0003d87a) field_cale_ev_pane_g

0xc836,	// (0x0003a9a7) field_cale_ev_pane_t1_ParamLimits

0xc836,	// (0x0003a9a7) field_cale_ev_pane_t1

0xa393,	// (0x00038504) field_cale_ev_content_pane_t1_ParamLimits

0xa393,	// (0x00038504) field_cale_ev_content_pane_t1

0xb04f,	// (0x000391c0) bg_button_pane_cp01

0x1cb7,	// (0x0002fe28) listscroll_cale_week_pane_ParamLimits

0xa3d9,	// (0x0003854a) popup_toolbar_window_cp01

0xa3ff,	// (0x00038570) listscroll_cale_week_pane_t1_ParamLimits

0x1cb7,	// (0x0002fe28) listscroll_cale_day_pane_ParamLimits

0xa3d9,	// (0x0003854a) popup_toolbar_window_cp02

0xa83d,	// (0x000389ae) listscroll_cale_day_pane_t1_ParamLimits

0x0581,	// (0x0002e6f2) main_cale_month_pane_ParamLimits

0x4a87,	// (0x00032bf8) popup_toolbar_window_cp03_ParamLimits

0x4a87,	// (0x00032bf8) popup_toolbar_window_cp03

0x4366,	// (0x000324d7) main_image_pane_g2_ParamLimits

0x4366,	// (0x000324d7) main_image_pane_g2

0x4377,	// (0x000324e8) main_image_pane_g3_ParamLimits

0x4377,	// (0x000324e8) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0003d658) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0003d658) main_image_pane_g

0xb169,	// (0x000392da) main_image_pane_t1_ParamLimits

0x4388,	// (0x000324f9) main_image_pane_t2_ParamLimits

0x4388,	// (0x000324f9) main_image_pane_t2

0x439a,	// (0x0003250b) main_image_pane_t3_ParamLimits

0x439a,	// (0x0003250b) main_image_pane_t3

0x43c2,	// (0x00032533) main_image_pane_t4_ParamLimits

0x43c2,	// (0x00032533) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0003d65f) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0003d65f) main_image_pane_t

0x43e2,	// (0x00032553) popup_image_details_window_cp01

0x43ec,	// (0x0003255d) popup_toobar_trans_pane_cp01_ParamLimits

0x43ec,	// (0x0003255d) popup_toobar_trans_pane_cp01

0x068c,	// (0x0002e7fd) popup_image_details_window_ParamLimits

0x068c,	// (0x0002e7fd) popup_image_details_window

0x4a5a,	// (0x00032bcb) popup_image_focus_window

0x0817,	// (0x0002e988) camera2_autofocus_pane_ParamLimits

0x0817,	// (0x0002e988) camera2_autofocus_pane

0x9b3d,	// (0x00037cae) bg_popup_sub_pane_cp06

0xc84d,	// (0x0003a9be) popup_image_focus_window_g1

0xc855,	// (0x0003a9c6) popup_image_focus_window_g2

0xc85d,	// (0x0003a9ce) popup_image_focus_window_g3

0xc865,	// (0x0003a9d6) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0003d881) popup_image_focus_window_g

0xc86d,	// (0x0003a9de) popup_image_focus_window_t1

0xc87b,	// (0x0003a9ec) popup_image_focus_window_t2

0xc88b,	// (0x0003a9fc) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0003d88a) popup_image_focus_window_t

0xc899,	// (0x0003aa0a) camera2_autofocus_pane_g1

0xa810,	// (0x00038981) bg_tb_trans_pane_cp01

0xc8a7,	// (0x0003aa18) popup_image_details_window_g1

0xc8ba,	// (0x0003aa2b) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0003d89c) popup_image_details_window_g

0xc8e3,	// (0x0003aa54) popup_image_details_window_t1

0xc8f5,	// (0x0003aa66) popup_image_details_window_t2

0xc90e,	// (0x0003aa7f) popup_image_details_window_t3

0xc922,	// (0x0003aa93) popup_image_details_window_t4

0xc93d,	// (0x0003aaae) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0003d8a3) popup_image_details_window_t

0xa272,	// (0x000383e3) bg_calc_paper_pane_ParamLimits

0x18c5,	// (0x0002fa36) grid_highlight_pane_cp013

0x1b3a,	// (0x0002fcab) list_calc_pane_ParamLimits

0x1b4c,	// (0x0002fcbd) scroll_pane_cp024

0xa286,	// (0x000383f7) bg_calc_display_pane_ParamLimits

0x0388,	// (0x0002e4f9) calc_display_pane_t1_ParamLimits

0x039a,	// (0x0002e50b) calc_display_pane_t2_ParamLimits

0x1b54,	// (0x0002fcc5) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0003d2c2) calc_display_pane_t_ParamLimits

0x03fd,	// (0x0002e56e) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0003d2df) cell_calc_pane_g

0x0406,	// (0x0002e577) cell_calc_pane_t1

0xa2e5,	// (0x00038456) grid_highlight_pane_cp02_ParamLimits

0xa2fb,	// (0x0003846c) toolbar_button_pane_cp01_ParamLimits

0xa2fb,	// (0x0003846c) toolbar_button_pane_cp01

0xb1ae,	// (0x0003931f) temp_image_control_pane_ParamLimits

0xb1ae,	// (0x0003931f) temp_image_control_pane

0x18ab,	// (0x0002fa1c) main_mp3_pane

0xc957,	// (0x0003aac8) temp_image_control_pane_g1_ParamLimits

0xc957,	// (0x0003aac8) temp_image_control_pane_g1

0xc965,	// (0x0003aad6) temp_image_control_pane_g2_ParamLimits

0xc965,	// (0x0003aad6) temp_image_control_pane_g2

0xc977,	// (0x0003aae8) temp_image_control_pane_g3_ParamLimits

0xc977,	// (0x0003aae8) temp_image_control_pane_g3

0x5161,	// (0x000332d2) temp_image_control_pane_g4_ParamLimits

0x5161,	// (0x000332d2) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0003d8ae) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0003d8ae) temp_image_control_pane_g

0xc957,	// (0x0003aac8) main_mp3_pane_g1

0x5174,	// (0x000332e5) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0003d8b7) main_mp3_pane_g

0xc9ba,	// (0x0003ab2b) main_mp3_pane_t1

0xa491,	// (0x00038602) main_camera_pane_g8_ParamLimits

0xa491,	// (0x00038602) main_camera_pane_g8

0x24c7,	// (0x00030638) main_video_pane_g7_ParamLimits

0x24c7,	// (0x00030638) main_video_pane_g7

0x4d70,	// (0x00032ee1) main_camera2_pane_t7_ParamLimits

0x4d70,	// (0x00032ee1) main_camera2_pane_t7

0xa5d9,	// (0x0003874a) scroll_pane_cp025_ParamLimits

0xa5d9,	// (0x0003874a) scroll_pane_cp025

0xa5ed,	// (0x0003875e) scroll_pane_cp026_ParamLimits

0xa5ed,	// (0x0003875e) scroll_pane_cp026

0xa5fc,	// (0x0003876d) wml_content_pane_ParamLimits

0x18c5,	// (0x0002fa36) main_touch_calib_pane

0x5248,	// (0x000333b9) main_touch_calib_pane_g1

0x525a,	// (0x000333cb) main_touch_calib_pane_g2

0x526c,	// (0x000333dd) main_touch_calib_pane_g3

0x527e,	// (0x000333ef) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0003d8d5) main_touch_calib_pane_g

0x5290,	// (0x00033401) main_touch_calib_pane_t1

0x52aa,	// (0x0003341b) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0003d8de) main_touch_calib_pane_t

0xad7b,	// (0x00038eec) mup_progress_pane_cp02

0xadb0,	// (0x00038f21) navi_pane_g1

0xae6b,	// (0x00038fdc) navi_pane_mp_t3

0x18ab,	// (0x0002fa1c) main_mp3_pane_ParamLimits

0x4a9c,	// (0x00032c0d) navi_pane_ParamLimits

0xc957,	// (0x0003aac8) main_mp3_pane_g1_ParamLimits

0x5174,	// (0x000332e5) main_mp3_pane_g2_ParamLimits

0x5182,	// (0x000332f3) main_mp3_pane_g3_ParamLimits

0x5182,	// (0x000332f3) main_mp3_pane_g3

0x5190,	// (0x00033301) main_mp3_pane_g4_ParamLimits

0x5190,	// (0x00033301) main_mp3_pane_g4

0xc987,	// (0x0003aaf8) main_mp3_pane_g5_ParamLimits

0xc987,	// (0x0003aaf8) main_mp3_pane_g5

0xc995,	// (0x0003ab06) main_mp3_pane_g6_ParamLimits

0xc995,	// (0x0003ab06) main_mp3_pane_g6

0xc9a2,	// (0x0003ab13) main_mp3_pane_g7_ParamLimits

0xc9a2,	// (0x0003ab13) main_mp3_pane_g7

0xc9ae,	// (0x0003ab1f) main_mp3_pane_g8_ParamLimits

0xc9ae,	// (0x0003ab1f) main_mp3_pane_g8

0xf746,	// (0x0003d8b7) main_mp3_pane_g_ParamLimits

0x519c,	// (0x0003330d) main_mp3_pane_t2

0x51aa,	// (0x0003331b) main_mp3_pane_t3

0xc9c8,	// (0x0003ab39) main_mp3_pane_t4

0xc9d6,	// (0x0003ab47) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0003d8c8) main_mp3_pane_t

0xc9e4,	// (0x0003ab55) mup_progress_pane_cp01

0x1820,	// (0x0002f991) aid_zoom_text_secondary2

0xc7bc,	// (0x0003a92d) list_cale_ev2_pane

0xc7c4,	// (0x0003a935) scroll_pane_cp023_ParamLimits

0x5300,	// (0x00033471) field_cale_ev2_pane_ParamLimits

0x5300,	// (0x00033471) field_cale_ev2_pane

0xc9ec,	// (0x0003ab5d) field_cale_ev2_pane_g1_ParamLimits

0xc9ec,	// (0x0003ab5d) field_cale_ev2_pane_g1

0xc9f8,	// (0x0003ab69) field_cale_ev2_pane_g2_ParamLimits

0xc9f8,	// (0x0003ab69) field_cale_ev2_pane_g2

0xca10,	// (0x0003ab81) field_cale_ev2_pane_g3_ParamLimits

0xca10,	// (0x0003ab81) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0003d8e9) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0003d8e9) field_cale_ev2_pane_g

0xca34,	// (0x0003aba5) field_cale_ev2_pane_t1_ParamLimits

0xca34,	// (0x0003aba5) field_cale_ev2_pane_t1

0xca4b,	// (0x0003abbc) field_cale_ev2_pane_t2_ParamLimits

0xca4b,	// (0x0003abbc) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0003d8f2) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0003d8f2) field_cale_ev2_pane_t

0x421a,	// (0x0003238b) main_postcard_pane_g5_ParamLimits

0x421a,	// (0x0003238b) main_postcard_pane_g5

0x4230,	// (0x000323a1) main_postcard_pane_g6_ParamLimits

0x4230,	// (0x000323a1) main_postcard_pane_g6

0x228d,	// (0x000303fe) camera2_autofocus_pane_cp_ParamLimits

0x228d,	// (0x000303fe) camera2_autofocus_pane_cp

0x18ab,	// (0x0002fa1c) main_mup3_pane

0x5341,	// (0x000334b2) main_mup3_pane_g1_ParamLimits

0x5341,	// (0x000334b2) main_mup3_pane_g1

0x5363,	// (0x000334d4) main_mup3_pane_g2_ParamLimits

0x5363,	// (0x000334d4) main_mup3_pane_g2

0x53e3,	// (0x00033554) main_mup3_pane_g3_ParamLimits

0x53e3,	// (0x00033554) main_mup3_pane_g3

0x5429,	// (0x0003359a) main_mup3_pane_g4_ParamLimits

0x5429,	// (0x0003359a) main_mup3_pane_g4

0x546f,	// (0x000335e0) main_mup3_pane_g5_ParamLimits

0x546f,	// (0x000335e0) main_mup3_pane_g5

0x54b5,	// (0x00033626) main_mup3_pane_g6_ParamLimits

0x54b5,	// (0x00033626) main_mup3_pane_g6

0xca60,	// (0x0003abd1) main_mup3_pane_g7_ParamLimits

0xca60,	// (0x0003abd1) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0003d902) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0003d902) main_mup3_pane_g

0x5533,	// (0x000336a4) main_mup3_pane_t1_ParamLimits

0x5533,	// (0x000336a4) main_mup3_pane_t1

0x55a7,	// (0x00033718) main_mup3_pane_t2_ParamLimits

0x55a7,	// (0x00033718) main_mup3_pane_t2

0x567b,	// (0x000337ec) main_mup3_pane_t4_ParamLimits

0x567b,	// (0x000337ec) main_mup3_pane_t4

0x56d1,	// (0x00033842) main_mup3_pane_t5_ParamLimits

0x56d1,	// (0x00033842) main_mup3_pane_t5

0x578d,	// (0x000338fe) main_mup3_pane_t6_ParamLimits

0x578d,	// (0x000338fe) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0003d913) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0003d913) main_mup3_pane_t

0x5845,	// (0x000339b6) mup3_progress_pane_ParamLimits

0x5845,	// (0x000339b6) mup3_progress_pane

0x58d1,	// (0x00033a42) popup_mup3_control_window_ParamLimits

0x58d1,	// (0x00033a42) popup_mup3_control_window

0xca6e,	// (0x0003abdf) popup_mup3_text_window

0x5903,	// (0x00033a74) mup3_progress_pane_t1

0x5922,	// (0x00033a93) mup3_progress_pane_t2

0xca76,	// (0x0003abe7) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0003d920) mup3_progress_pane_t

0xca93,	// (0x0003ac04) mup_progress_pane_cp03

0x9b3d,	// (0x00037cae) bg_tb_trans_pane_cp04

0x5941,	// (0x00033ab2) mup3_volume_pane

0x5949,	// (0x00033aba) popup_mup3_control_window_g1

0x5952,	// (0x00033ac3) mup3_volume_pane_g1

0x595b,	// (0x00033acc) mup3_volume_pane_g2

0x5964,	// (0x00033ad5) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0003d927) mup3_volume_pane_g

0x9b3d,	// (0x00037cae) bg_tb_trans_pane_cp03

0xcaa3,	// (0x0003ac14) popup_mup3_text_window_g1

0xcaab,	// (0x0003ac1c) popup_mup3_text_window_t1

0xa2ce,	// (0x0003843f) list_calc_item_pane_g1_ParamLimits

0xc48c,	// (0x0003a5fd) mup_volume_pane_cp_g1

0x52c4,	// (0x00033435) main_touch_calib_pane_t3

0x52d8,	// (0x00033449) main_touch_calib_pane_t4

0x52ec,	// (0x0003345d) main_touch_calib_pane_t5

0x180c,	// (0x0002f97d) aid_cell_size_toolbar2

0x1814,	// (0x0002f985) aid_popup3_width_pane

0x1820,	// (0x0002f991) aid_zoom_text_msg_primary

0x2262,	// (0x000303d3) vorec_t7

0xa292,	// (0x00038403) bg_calc_paper_pane_g1_ParamLimits

0xa29e,	// (0x0003840f) bg_calc_paper_pane_g2_ParamLimits

0xa2aa,	// (0x0003841b) bg_calc_paper_pane_g3_ParamLimits

0xa2b6,	// (0x00038427) bg_calc_paper_pane_g4_ParamLimits

0xa2c2,	// (0x00038433) bg_calc_paper_pane_g5_ParamLimits

0x1b66,	// (0x0002fcd7) bg_calc_paper_pane_g6_ParamLimits

0x1b75,	// (0x0002fce6) bg_calc_paper_pane_g7_ParamLimits

0x1b84,	// (0x0002fcf5) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0003d2c9) bg_calc_paper_pane_g_ParamLimits

0x1b97,	// (0x0002fd08) calc_bg_paper_pane_g9_ParamLimits

0x23d9,	// (0x0003054a) image_qvga_pane_ParamLimits

0x23d9,	// (0x0003054a) image_qvga_pane

0xa1b5,	// (0x00038326) bg_popup_sub_pane_cp04_ParamLimits

0xb0e5,	// (0x00039256) popup_mup_playback_window_g1_ParamLimits

0xb0f1,	// (0x00039262) popup_mup_playback_window_t1_ParamLimits

0xb106,	// (0x00039277) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0003d653) popup_mup_playback_window_t_ParamLimits

0x4d9e,	// (0x00032f0f) main_mup2_pane_g3_ParamLimits

0x4d9e,	// (0x00032f0f) main_mup2_pane_g3

0x27e6,	// (0x00030957) popup_toolbar_window_cp04

0xb4fb,	// (0x0003966c) popup_call2_audio_second_window_g3_ParamLimits

0xb4fb,	// (0x0003966c) popup_call2_audio_second_window_g3

0xb905,	// (0x00039a76) popup_call2_audio_first_window_g4_ParamLimits

0xb905,	// (0x00039a76) popup_call2_audio_first_window_g4

0xbf84,	// (0x0003a0f5) popup_call2_audio_in_window_g4_ParamLimits

0xbf84,	// (0x0003a0f5) popup_call2_audio_in_window_g4

0x4348,	// (0x000324b9) aid_area_sk_bg_cut_ParamLimits

0x4348,	// (0x000324b9) aid_area_sk_bg_cut

0xb11b,	// (0x0003928c) aid_area_sk_bg_cut_2_ParamLimits

0xb11b,	// (0x0003928c) aid_area_sk_bg_cut_2

0x5107,	// (0x00033278) aid_placing_details_win

0x510f,	// (0x00033280) aid_placing_details_win_2

0xc899,	// (0x0003aa0a) camera2_autofocus_pane_g1_ParamLimits

0x0244,	// (0x0002e3b5) popup_fixed_preview_cale_window_ParamLimits

0x0244,	// (0x0002e3b5) popup_fixed_preview_cale_window

0xaee9,	// (0x0003905a) navi_slider_pane_g3

0xaef2,	// (0x00039063) navi_slider_pane_g4

0xaefb,	// (0x0003906c) navi_slider_pane_g5

0xaee9,	// (0x0003905a) navi_slider_pane_g6

0x3c03,	// (0x00031d74) navi_slider_pane_g7

0xb01c,	// (0x0003918d) mup_scale_pane_g3

0xb025,	// (0x00039196) mup_scale_pane_g4

0xb02e,	// (0x0003919f) mup_scale_pane_g5

0x3ffc,	// (0x0003216d) mup_scale_pane_g6

0x4005,	// (0x00032176) mup_scale_pane_g7

0xaee9,	// (0x0003905a) cams2_slider_pane_g3

0xc50e,	// (0x0003a67f) cams2_slider_pane_g4

0x5054,	// (0x000331c5) cams2_slider_pane_g5

0xaee9,	// (0x0003905a) cams2_slider_pane_g6

0x505c,	// (0x000331cd) cams2_slider_pane_g7

0xc739,	// (0x0003a8aa) camera2_autofocus_pane_cp_g1

0xc325,	// (0x0003a496) bg_popup_preview_window_pane_cp02_ParamLimits

0xc325,	// (0x0003a496) bg_popup_preview_window_pane_cp02

0xcab9,	// (0x0003ac2a) list_fp_cale_pane_ParamLimits

0xcab9,	// (0x0003ac2a) list_fp_cale_pane

0xcac5,	// (0x0003ac36) popup_fixed_preview_cale_window_t1_ParamLimits

0xcac5,	// (0x0003ac36) popup_fixed_preview_cale_window_t1

0x596d,	// (0x00033ade) popup_fixed_preview_cale_window_t2_ParamLimits

0x596d,	// (0x00033ade) popup_fixed_preview_cale_window_t2

0x5982,	// (0x00033af3) popup_fixed_preview_cale_window_t3_ParamLimits

0x5982,	// (0x00033af3) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0003d92e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0003d92e) popup_fixed_preview_cale_window_t

0x5997,	// (0x00033b08) list_single_fp_cale_pane_ParamLimits

0x5997,	// (0x00033b08) list_single_fp_cale_pane

0xcae3,	// (0x0003ac54) list_single_fp_cale_pane_g1_ParamLimits

0xcae3,	// (0x0003ac54) list_single_fp_cale_pane_g1

0xcaef,	// (0x0003ac60) list_single_fp_cale_pane_g2_ParamLimits

0xcaef,	// (0x0003ac60) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0003d935) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0003d935) list_single_fp_cale_pane_g

0xcb08,	// (0x0003ac79) list_single_fp_cale_pane_t1_ParamLimits

0xcb08,	// (0x0003ac79) list_single_fp_cale_pane_t1

0xcb1a,	// (0x0003ac8b) list_single_fp_cale_pane_t2_ParamLimits

0xcb1a,	// (0x0003ac8b) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0003d93c) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0003d93c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x18c5,	// (0x0002fa36) main_dialer_pane

0x59ad,	// (0x00033b1e) aid_cell_size_keypad

0x59b7,	// (0x00033b28) dialer_ne_pane

0x59bf,	// (0x00033b30) grid_dialer_command_1_pane

0x59c7,	// (0x00033b38) grid_dialer_command_2_pane

0x59cf,	// (0x00033b40) grid_dialer_keypad_pane

0x59e1,	// (0x00033b52) bg_popup_call_pane_cp06_ParamLimits

0x59e1,	// (0x00033b52) bg_popup_call_pane_cp06

0x59ed,	// (0x00033b5e) dialer_ne_clear_pane_ParamLimits

0x59ed,	// (0x00033b5e) dialer_ne_clear_pane

0xcb4d,	// (0x0003acbe) dialer_ne_pane_g1

0xcb55,	// (0x0003acc6) dialer_ne_pane_t1_ParamLimits

0xcb55,	// (0x0003acc6) dialer_ne_pane_t1

0x59f9,	// (0x00033b6a) dialer_ne_pane_t2_ParamLimits

0x59f9,	// (0x00033b6a) dialer_ne_pane_t2

0x5a23,	// (0x00033b94) dialer_ne_pane_t3_ParamLimits

0x5a23,	// (0x00033b94) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0003d941) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0003d941) dialer_ne_pane_t

0x5a53,	// (0x00033bc4) dialer_ne_pane_t3_copy1_ParamLimits

0x5a53,	// (0x00033bc4) dialer_ne_pane_t3_copy1

0x5a82,	// (0x00033bf3) cell_dialer_keypad_pane_ParamLimits

0x5a82,	// (0x00033bf3) cell_dialer_keypad_pane

0x5a99,	// (0x00033c0a) cell_dialer_command_1_pane_ParamLimits

0x5a99,	// (0x00033c0a) cell_dialer_command_1_pane

0x5aaf,	// (0x00033c20) cell_dialer_command_2_pane_ParamLimits

0x5aaf,	// (0x00033c20) cell_dialer_command_2_pane

0xcb67,	// (0x0003acd8) bg_button_pane_cp02_ParamLimits

0xcb67,	// (0x0003acd8) bg_button_pane_cp02

0x5abe,	// (0x00033c2f) cell_dialer_keypad_pane_g1_ParamLimits

0x5abe,	// (0x00033c2f) cell_dialer_keypad_pane_g1

0xcb67,	// (0x0003acd8) bg_button_pane_cp03_ParamLimits

0xcb67,	// (0x0003acd8) bg_button_pane_cp03

0x5ad2,	// (0x00033c43) cell_dialer_command_1_pane_g1_ParamLimits

0x5ad2,	// (0x00033c43) cell_dialer_command_1_pane_g1

0xcb73,	// (0x0003ace4) bg_button_pane_cp04

0x5ae6,	// (0x00033c57) cell_dialer_command_2_pane_g1

0xa489,	// (0x000385fa) bg_button_pane_cp06

0xcb7b,	// (0x0003acec) dialer_ne_clear_pane_g1

0xadbc,	// (0x00038f2d) navi_pane_g2

0xadea,	// (0x00038f5b) navi_pane_g3

0x0002,

0xf3e5,	// (0x0003d556) navi_pane_g

0xae79,	// (0x00038fea) navi_pane_mv_g2

0xaea0,	// (0x00039011) navi_pane_mv_g5

0x3bb8,	// (0x00031d29) navi_pane_mv_t1

0xa286,	// (0x000383f7) main_clock2_pane

0x5b31,	// (0x00033ca2) main_clock2_list_pane_ParamLimits

0x5b31,	// (0x00033ca2) main_clock2_list_pane

0x5b69,	// (0x00033cda) main_clock2_pane_t1_ParamLimits

0x5b69,	// (0x00033cda) main_clock2_pane_t1

0x5ba7,	// (0x00033d18) main_clock2_pane_t2_ParamLimits

0x5ba7,	// (0x00033d18) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0003d94d) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0003d94d) main_clock2_pane_t

0x5c45,	// (0x00033db6) popup_clock_analogue_window_cp03_ParamLimits

0x5c45,	// (0x00033db6) popup_clock_analogue_window_cp03

0x5c6a,	// (0x00033ddb) popup_clock_digital_window_cp02_ParamLimits

0x5c6a,	// (0x00033ddb) popup_clock_digital_window_cp02

0x5cdb,	// (0x00033e4c) main_clock2_list_single_pane_ParamLimits

0x5cdb,	// (0x00033e4c) main_clock2_list_single_pane

0xa489,	// (0x000385fa) list_highlight_pane_cp05

0xcbb5,	// (0x0003ad26) main_clock2_list_single_pane_t1

0x27e6,	// (0x00030957) popup_toolbar_window_cp04_ParamLimits

0x5131,	// (0x000332a2) camera2_autofocus_pane_g2_ParamLimits

0x5131,	// (0x000332a2) camera2_autofocus_pane_g2

0x513d,	// (0x000332ae) camera2_autofocus_pane_g3_ParamLimits

0x513d,	// (0x000332ae) camera2_autofocus_pane_g3

0x5149,	// (0x000332ba) camera2_autofocus_pane_g4_ParamLimits

0x5149,	// (0x000332ba) camera2_autofocus_pane_g4

0x5155,	// (0x000332c6) camera2_autofocus_pane_g5_ParamLimits

0x5155,	// (0x000332c6) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0003d891) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0003d891) camera2_autofocus_pane_g

0x5321,	// (0x00033492) camera2_autofocus_pane_cp_g2

0x5329,	// (0x0003349a) camera2_autofocus_pane_cp_g3

0x5331,	// (0x000334a2) camera2_autofocus_pane_cp_g4

0x5339,	// (0x000334aa) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0003d8f7) camera2_autofocus_pane_cp_g

0x59d9,	// (0x00033b4a) popup_dialer_spcha_window

0x9b3d,	// (0x00037cae) bg_popup_sub_pane_cp07

0xcbc3,	// (0x0003ad34) list_spcha_pane

0xcbcb,	// (0x0003ad3c) list_single_spcha_pane_ParamLimits

0xcbcb,	// (0x0003ad3c) list_single_spcha_pane

0x9b3d,	// (0x00037cae) list_highlight_pane_cp06

0xcbdc,	// (0x0003ad4d) list_single_spcha_pane_t1

0xbd2e,	// (0x00039e9f) popup_call2_audio_out_window_g4_ParamLimits

0xbd2e,	// (0x00039e9f) popup_call2_audio_out_window_g4

0x18c5,	// (0x0002fa36) main_imed2_pane

0x4a62,	// (0x00032bd3) popup_imed_adjust2_window

0x06a4,	// (0x0002e815) popup_imed_trans_window_ParamLimits

0x06a4,	// (0x0002e815) popup_imed_trans_window

0xc577,	// (0x0003a6e8) popup_blid_sat_info2_window_t1

0xc585,	// (0x0003a6f6) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0003d826) popup_blid_sat_info2_window_t

0x5d0d,	// (0x00033e7e) aid_size_cell_colour_35

0x5d2d,	// (0x00033e9e) aid_size_cell_colour_112

0x5d4d,	// (0x00033ebe) aid_size_cell_effect

0xc331,	// (0x0003a4a2) bg_tb_trans_pane_cp02

0xa946,	// (0x00038ab7) heading_imed_pane

0x5d6d,	// (0x00033ede) listscroll_imed_pane

0xcbea,	// (0x0003ad5b) heading_imed_pane_g1

0xcbf2,	// (0x0003ad63) heading_imed_pane_t1

0xcc00,	// (0x0003ad71) grid_imed_colour_35_pane_ParamLimits

0xcc00,	// (0x0003ad71) grid_imed_colour_35_pane

0x5d79,	// (0x00033eea) grid_imed_effect_pane

0xcc18,	// (0x0003ad89) list_imed_aspect_pane

0x5d8f,	// (0x00033f00) scroll_pane_cp027_ParamLimits

0x5d8f,	// (0x00033f00) scroll_pane_cp027

0x5da0,	// (0x00033f11) cell_imed_effect_pane_ParamLimits

0x5da0,	// (0x00033f11) cell_imed_effect_pane

0xcc20,	// (0x0003ad91) cell_imed_colour_pane_ParamLimits

0xcc20,	// (0x0003ad91) cell_imed_colour_pane

0xcc62,	// (0x0003add3) cell_imed_colour_pane_g1_ParamLimits

0xcc62,	// (0x0003add3) cell_imed_colour_pane_g1

0xcc73,	// (0x0003ade4) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc73,	// (0x0003ade4) hgihlgiht_grid_pane_cp016

0x5dc7,	// (0x00033f38) cell_imed_effect_pane_g1

0x5dcf,	// (0x00033f40) grid_highlight_pane_cp017

0xcc84,	// (0x0003adf5) list_imed_single_pane_ParamLimits

0xcc84,	// (0x0003adf5) list_imed_single_pane

0x9b3d,	// (0x00037cae) list_highlight_pane_cp07

0xcc99,	// (0x0003ae0a) list_imed_aspect_pane_comp1_t1

0xc331,	// (0x0003a4a2) bg_tb_trans_pane_cp05

0xccbb,	// (0x0003ae2c) popup_imed_adjust2_window_g1

0xcce2,	// (0x0003ae53) popup_imed_adjust2_window_t1

0xccfa,	// (0x0003ae6b) slider_imed_adjust_pane

0xcd0e,	// (0x0003ae7f) slider_imed_adjust_pane_g1

0xcd1e,	// (0x0003ae8f) slider_imed_adjust_pane_g2

0xcd2e,	// (0x0003ae9f) slider_imed_adjust_pane_g3

0xcd3f,	// (0x0003aeb0) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0003d96a) slider_imed_adjust_pane_g

0x5dd8,	// (0x00033f49) aid_size_cell_clipart2

0x5de4,	// (0x00033f55) grid_imed_clipart_pane

0xcd50,	// (0x0003aec1) scroll_pane_cp031

0x5dee,	// (0x00033f5f) cell_imed_clipart_pane_ParamLimits

0x5dee,	// (0x00033f5f) cell_imed_clipart_pane

0x5e10,	// (0x00033f81) cell_imed_clipart_pane_g1

0x9b3d,	// (0x00037cae) grid_highlight_pane_cp014

0x5b46,	// (0x00033cb7) main_clock2_pane_g1_ParamLimits

0x5b46,	// (0x00033cb7) main_clock2_pane_g1

0x5c86,	// (0x00033df7) aid_call2_pane_cp10

0x5c98,	// (0x00033e09) aid_call_pane_cp10

0xad1b,	// (0x00038e8c) popup_clock_analogue_window_cp10_g1

0xad1b,	// (0x00038e8c) popup_clock_analogue_window_cp10_g2

0x5caa,	// (0x00033e1b) popup_clock_analogue_window_cp10_g3

0x5caa,	// (0x00033e1b) popup_clock_analogue_window_cp10_g4

0xad1b,	// (0x00038e8c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0003d958) popup_clock_analogue_window_cp10_g

0x5cbc,	// (0x00033e2d) popup_clock_analogue_window_cp10_t1

0x0cf2,	// (0x0002ee63) clock_digital_number_pane_cp10_ParamLimits

0x0cf2,	// (0x0002ee63) clock_digital_number_pane_cp10

0x0d0a,	// (0x0002ee7b) clock_digital_number_pane_cp11_ParamLimits

0x0d0a,	// (0x0002ee7b) clock_digital_number_pane_cp11

0x0d22,	// (0x0002ee93) clock_digital_number_pane_cp12_ParamLimits

0x0d22,	// (0x0002ee93) clock_digital_number_pane_cp12

0x0d3a,	// (0x0002eeab) clock_digital_number_pane_cp13_ParamLimits

0x0d3a,	// (0x0002eeab) clock_digital_number_pane_cp13

0x0d52,	// (0x0002eec3) clock_digital_separator_pane_cp10_ParamLimits

0x0d52,	// (0x0002eec3) clock_digital_separator_pane_cp10

0x5ced,	// (0x00033e5e) popup_clock_digital_window_cp02_t1_ParamLimits

0x5ced,	// (0x00033e5e) popup_clock_digital_window_cp02_t1

0xa1ad,	// (0x0003831e) clock_digital_number_pane_cp10_g1

0xa1ad,	// (0x0003831e) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0003d973) clock_digital_number_pane_cp10_g

0xa1ad,	// (0x0003831e) clock_digital_separator_pane_cp10_g1

0xa1ad,	// (0x0003831e) clock_digital_separator_pane_g2_cp10

0xaea8,	// (0x00039019) navi_pane_vded_g4

0xaeb1,	// (0x00039022) navi_pane_vded_g5

0xaeba,	// (0x0003902b) navi_pane_vded_t1

0x18c5,	// (0x0002fa36) main_vded_pane

0x5e19,	// (0x00033f8a) main_vded_pane_g1

0x5e23,	// (0x00033f94) main_vded_pane_g2

0x5e2d,	// (0x00033f9e) main_vded_pane_g3

0x0002,

0xf807,	// (0x0003d978) main_vded_pane_g

0x5e37,	// (0x00033fa8) main_vded_pane_t1

0x5e45,	// (0x00033fb6) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0003d97f) main_vded_pane_t

0x5e53,	// (0x00033fc4) vded_slider_pane

0x5e5b,	// (0x00033fcc) vded_video_pane

0xcd58,	// (0x0003aec9) vded_video_pane_g1

0x5e63,	// (0x00033fd4) vded_video_pane_g2

0xc739,	// (0x0003a8aa) vded_video_pane_g3

0x0002,

0xf813,	// (0x0003d984) vded_video_pane_g

0xcd62,	// (0x0003aed3) vded_slider_pane_g1

0xc48c,	// (0x0003a5fd) vded_slider_pane_g2

0xcd6b,	// (0x0003aedc) vded_slider_pane_g3

0xcd74,	// (0x0003aee5) vded_slider_pane_g4

0xcd7d,	// (0x0003aeee) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0003d98b) vded_slider_pane_g

0x58b9,	// (0x00033a2a) mup3_rocker_pane_ParamLimits

0x58b9,	// (0x00033a2a) mup3_rocker_pane

0x5e6c,	// (0x00033fdd) mup3_control_keys_pane_g1

0x5e74,	// (0x00033fe5) mup3_control_keys_pane_g2

0x5e7c,	// (0x00033fed) mup3_control_keys_pane_g3

0x5e84,	// (0x00033ff5) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0003d996) mup3_control_keys_pane_g

0x027b,	// (0x0002e3ec) popup_toolbar2_fixed_window_cp01_ParamLimits

0x027b,	// (0x0002e3ec) popup_toolbar2_fixed_window_cp01

0x58ed,	// (0x00033a5e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x58ed,	// (0x00033a5e) popup_toolbar2_fixed_window_cp02

0xb66d,	// (0x000397de) popup_call2_audio_second_window_t4_ParamLimits

0xb66d,	// (0x000397de) popup_call2_audio_second_window_t4

0xbb9b,	// (0x00039d0c) popup_call2_audio_first_window_t6_ParamLimits

0xbb9b,	// (0x00039d0c) popup_call2_audio_first_window_t6

0xbe31,	// (0x00039fa2) popup_call2_audio_out_window_t6_ParamLimits

0xbe31,	// (0x00039fa2) popup_call2_audio_out_window_t6

0x18c5,	// (0x0002fa36) main_vitu_pane

0x5e94,	// (0x00034005) aid_size_cell_itu_ParamLimits

0x5e94,	// (0x00034005) aid_size_cell_itu

0xa810,	// (0x00038981) bg_popup_window_pane_cp08_ParamLimits

0xa810,	// (0x00038981) bg_popup_window_pane_cp08

0x5eaa,	// (0x0003401b) field_vitu_entry_pane_ParamLimits

0x5eaa,	// (0x0003401b) field_vitu_entry_pane

0x5ec2,	// (0x00034033) grid_vitu_function_pane_ParamLimits

0x5ec2,	// (0x00034033) grid_vitu_function_pane

0x5edd,	// (0x0003404e) grid_vitu_itu_pane_ParamLimits

0x5edd,	// (0x0003404e) grid_vitu_itu_pane

0x5efb,	// (0x0003406c) cell_vitu_itu_pane_ParamLimits

0x5efb,	// (0x0003406c) cell_vitu_itu_pane

0x5f1d,	// (0x0003408e) cell_vitu_function_pane_ParamLimits

0x5f1d,	// (0x0003408e) cell_vitu_function_pane

0xa810,	// (0x00038981) bg_popup_sub_pane_cp08_ParamLimits

0xa810,	// (0x00038981) bg_popup_sub_pane_cp08

0x5f36,	// (0x000340a7) field_vitu_entry_pane_t1_ParamLimits

0x5f36,	// (0x000340a7) field_vitu_entry_pane_t1

0xcd9e,	// (0x0003af0f) field_vitu_entry_pane_t2_ParamLimits

0xcd9e,	// (0x0003af0f) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0003d9a4) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0003d9a4) field_vitu_entry_pane_t

0xcdbb,	// (0x0003af2c) bg_button_pane_cp05_ParamLimits

0xcdbb,	// (0x0003af2c) bg_button_pane_cp05

0x5f55,	// (0x000340c6) cell_vitu_itu_pane_g1

0x5f6d,	// (0x000340de) cell_vitu_itu_pane_t1_ParamLimits

0x5f6d,	// (0x000340de) cell_vitu_itu_pane_t1

0x5f7f,	// (0x000340f0) cell_vitu_itu_pane_t2_ParamLimits

0x5f7f,	// (0x000340f0) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0003d9a9) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0003d9a9) cell_vitu_itu_pane_t

0xcdc9,	// (0x0003af3a) bg_button_pane_cp07

0x5fb4,	// (0x00034125) cell_vitu_function_pane_g1

0x1a62,	// (0x0002fbd3) main_calc_pane_g1

0x00db,	// (0x0002e24c) aid_visual_content_pane

0x18c5,	// (0x0002fa36) main_vradio_pane

0x5fbd,	// (0x0003412e) main_vradio_pane_g1_ParamLimits

0x5fbd,	// (0x0003412e) main_vradio_pane_g1

0xcdd3,	// (0x0003af44) main_vradio_pane_g2_ParamLimits

0xcdd3,	// (0x0003af44) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0003d9b0) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0003d9b0) main_vradio_pane_g

0x5fd6,	// (0x00034147) main_vradio_pane_t1_ParamLimits

0x5fd6,	// (0x00034147) main_vradio_pane_t1

0x5feb,	// (0x0003415c) main_vradio_pane_t2_ParamLimits

0x5feb,	// (0x0003415c) main_vradio_pane_t2

0xcde0,	// (0x0003af51) main_vradio_pane_t3_ParamLimits

0xcde0,	// (0x0003af51) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0003d9b5) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0003d9b5) main_vradio_pane_t

0x6000,	// (0x00034171) vradio_rocker_control_pane_ParamLimits

0x6000,	// (0x00034171) vradio_rocker_control_pane

0x6012,	// (0x00034183) vradio_station_info_pane_ParamLimits

0x6012,	// (0x00034183) vradio_station_info_pane

0xcdf4,	// (0x0003af65) vradio_frequency_info_pane_ParamLimits

0xcdf4,	// (0x0003af65) vradio_frequency_info_pane

0xc739,	// (0x0003a8aa) vradio_station_info_pane_g1

0xce03,	// (0x0003af74) vradio_station_info_pane_t1_ParamLimits

0xce03,	// (0x0003af74) vradio_station_info_pane_t1

0xce25,	// (0x0003af96) vradio_station_info_pane_t2_ParamLimits

0xce25,	// (0x0003af96) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0003d9bc) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0003d9bc) vradio_station_info_pane_t

0xce37,	// (0x0003afa8) vradio_tuning_pane

0xce3f,	// (0x0003afb0) vradio_rocker_control_pane_g1

0xce47,	// (0x0003afb8) vradio_rocker_control_pane_g2

0xce4f,	// (0x0003afc0) vradio_rocker_control_pane_g3

0xce57,	// (0x0003afc8) vradio_rocker_control_pane_g4

0xce5f,	// (0x0003afd0) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0003d9c1) vradio_rocker_control_pane_g

0x6024,	// (0x00034195) vradio_frequency_info_pane_g1

0xce67,	// (0x0003afd8) vradio_frequency_info_pane_t1_ParamLimits

0xce67,	// (0x0003afd8) vradio_frequency_info_pane_t1

0x602e,	// (0x0003419f) vradio_tuning_pane_g1

0x6039,	// (0x000341aa) vradio_tuning_pane_t1

0x1869,	// (0x0002f9da) area_side_right_pane_ParamLimits

0x1869,	// (0x0002f9da) area_side_right_pane

0xc2ec,	// (0x0003a45d) status_small_pane_g1

0xc2f4,	// (0x0003a465) status_small_pane_g2

0xc2fd,	// (0x0003a46e) status_small_pane_g3

0xc306,	// (0x0003a477) status_small_pane_g4

0x0003,

0xf60b,	// (0x0003d77c) status_small_pane_g

0xc30f,	// (0x0003a480) status_small_pane_t1

0x18c5,	// (0x0002fa36) main_video3_pane

0xce7b,	// (0x0003afec) cams_zoom_vslider_pane

0xce83,	// (0x0003aff4) image3_wide_pane_ParamLimits

0xce83,	// (0x0003aff4) image3_wide_pane

0xce9d,	// (0x0003b00e) image3_wide_small_pane

0xcea9,	// (0x0003b01a) main_video3_pane_g1_ParamLimits

0xcea9,	// (0x0003b01a) main_video3_pane_g1

0xced9,	// (0x0003b04a) main_video3_pane_g2_ParamLimits

0xced9,	// (0x0003b04a) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0003d9cc) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0003d9cc) main_video3_pane_g

0xcef5,	// (0x0003b066) main_video3_pane_t1_ParamLimits

0xcef5,	// (0x0003b066) main_video3_pane_t1

0xcf20,	// (0x0003b091) main_video3_pane_t2_ParamLimits

0xcf20,	// (0x0003b091) main_video3_pane_t2

0xcf4b,	// (0x0003b0bc) main_video3_pane_t3_ParamLimits

0xcf4b,	// (0x0003b0bc) main_video3_pane_t3

0x0002,

0xf860,	// (0x0003d9d1) main_video3_pane_t_ParamLimits

0xf860,	// (0x0003d9d1) main_video3_pane_t

0xcf78,	// (0x0003b0e9) cams_zoom_vslider_pane_g1

0xcf81,	// (0x0003b0f2) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0003d9d8) cams_zoom_vslider_pane_g

0xcf89,	// (0x0003b0fa) small_slider_vertical_pane

0xc739,	// (0x0003a8aa) small_slider_vertical_pane_g1

0xc739,	// (0x0003a8aa) small_slider_vertical_pane_g2

0xcf91,	// (0x0003b102) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0003d9dd) small_slider_vertical_pane_g

0x18c5,	// (0x0002fa36) main_hwr_training_pane

0xcf9a,	// (0x0003b10b) hwr_training_instruct_pane_ParamLimits

0xcf9a,	// (0x0003b10b) hwr_training_instruct_pane

0x6048,	// (0x000341b9) hwr_training_navi_pane_ParamLimits

0x6048,	// (0x000341b9) hwr_training_navi_pane

0x6067,	// (0x000341d8) hwr_training_write_pane_ParamLimits

0x6067,	// (0x000341d8) hwr_training_write_pane

0x9b3d,	// (0x00037cae) bg_frame_shadow_pane

0xcfd1,	// (0x0003b142) hwr_training_write_pane_g1

0xcfd9,	// (0x0003b14a) hwr_training_write_pane_g2

0xcfe1,	// (0x0003b152) hwr_training_write_pane_g3

0xcfe9,	// (0x0003b15a) hwr_training_write_pane_g4

0xcff1,	// (0x0003b162) hwr_training_write_pane_g5

0xcff9,	// (0x0003b16a) hwr_training_write_pane_g6

0xd001,	// (0x0003b172) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0003d9e4) hwr_training_write_pane_g

0x60a2,	// (0x00034213) hwr_training_navi_pane_g1_ParamLimits

0x60a2,	// (0x00034213) hwr_training_navi_pane_g1

0x60b4,	// (0x00034225) hwr_training_navi_pane_g2_ParamLimits

0x60b4,	// (0x00034225) hwr_training_navi_pane_g2

0x60c6,	// (0x00034237) hwr_training_navi_pane_g3_ParamLimits

0x60c6,	// (0x00034237) hwr_training_navi_pane_g3

0x60d6,	// (0x00034247) hwr_training_navi_pane_g4_ParamLimits

0x60d6,	// (0x00034247) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0003d9f3) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0003d9f3) hwr_training_navi_pane_g

0x60e3,	// (0x00034254) hwr_training_navi_pane_t1

0x60f1,	// (0x00034262) list_single_hwr_training_instruct_pane_ParamLimits

0x60f1,	// (0x00034262) list_single_hwr_training_instruct_pane

0xd009,	// (0x0003b17a) list_single_hwr_training_instruct_pane_t1

0xc679,	// (0x0003a7ea) bg_frame_shadow_pane_g1

0xd018,	// (0x0003b189) bg_frame_shadow_pane_g2

0xd020,	// (0x0003b191) bg_frame_shadow_pane_g3

0xd028,	// (0x0003b199) bg_frame_shadow_pane_g4

0xd030,	// (0x0003b1a1) bg_frame_shadow_pane_g5

0xd038,	// (0x0003b1a9) bg_frame_shadow_pane_g6

0xd040,	// (0x0003b1b1) bg_frame_shadow_pane_g7

0xa351,	// (0x000384c2) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0003d9fe) bg_frame_shadow_pane_g

0x18c5,	// (0x0002fa36) main_video_tele_dialer_pane

0x0d79,	// (0x0002eeea) aid_size_cell_video_keypad_ParamLimits

0x0d79,	// (0x0002eeea) aid_size_cell_video_keypad

0x0d93,	// (0x0002ef04) grid_video_dialer_keypad_pane_ParamLimits

0x0d93,	// (0x0002ef04) grid_video_dialer_keypad_pane

0x0de1,	// (0x0002ef52) video_down_pane_cp_ParamLimits

0x0de1,	// (0x0002ef52) video_down_pane_cp

0x0df7,	// (0x0002ef68) cell_video_dialer_keypad_pane_ParamLimits

0x0df7,	// (0x0002ef68) cell_video_dialer_keypad_pane

0xd048,	// (0x0003b1b9) bg_button_pane_cp08_ParamLimits

0xd048,	// (0x0003b1b9) bg_button_pane_cp08

0x6123,	// (0x00034294) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6123,	// (0x00034294) cell_video_dialer_keypad_pane_g1

0x58a3,	// (0x00033a14) mup3_rocker2_pane_ParamLimits

0x58a3,	// (0x00033a14) mup3_rocker2_pane

0xc739,	// (0x0003a8aa) mup3_rocker2_pane_g1

0x0593,	// (0x0002e704) main_dialer2_pane

0x18c5,	// (0x0002fa36) main_mp4_pane

0x6165,	// (0x000342d6) main_mp4_pane_g1_ParamLimits

0x6165,	// (0x000342d6) main_mp4_pane_g1

0x6165,	// (0x000342d6) main_mp4_pane_g2_ParamLimits

0x6165,	// (0x000342d6) main_mp4_pane_g2

0x0e19,	// (0x0002ef8a) main_mp4_pane_g3_ParamLimits

0x0e19,	// (0x0002ef8a) main_mp4_pane_g3

0x6173,	// (0x000342e4) main_mp4_pane_g4_ParamLimits

0x6173,	// (0x000342e4) main_mp4_pane_g4

0x619b,	// (0x0003430c) main_mp4_pane_g5_ParamLimits

0x619b,	// (0x0003430c) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0003da1e) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0003da1e) main_mp4_pane_g

0x61eb,	// (0x0003435c) main_mp4_pane_t1_ParamLimits

0x61eb,	// (0x0003435c) main_mp4_pane_t1

0x6247,	// (0x000343b8) main_mp4_pane_t2_ParamLimits

0x6247,	// (0x000343b8) main_mp4_pane_t2

0xd054,	// (0x0003b1c5) main_mp4_pane_t3_ParamLimits

0xd054,	// (0x0003b1c5) main_mp4_pane_t3

0x6299,	// (0x0003440a) main_mp4_pane_t4_ParamLimits

0x6299,	// (0x0003440a) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0003da2b) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0003da2b) main_mp4_pane_t

0x62dd,	// (0x0003444e) mp4_progress_pane_ParamLimits

0x62dd,	// (0x0003444e) mp4_progress_pane

0x6327,	// (0x00034498) mp4_rocker_pane_ParamLimits

0x6327,	// (0x00034498) mp4_rocker_pane

0xd07c,	// (0x0003b1ed) mp4_progress_pane_t1

0xd095,	// (0x0003b206) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0003da34) mp4_progress_pane_t

0xd0ae,	// (0x0003b21f) mup_progress_pane_cp04

0xd0ba,	// (0x0003b22b) mp4_rocker_pane_g1

0x0e55,	// (0x0002efc6) aid_cell_size_keypad2_ParamLimits

0x0e55,	// (0x0002efc6) aid_cell_size_keypad2

0x0e6b,	// (0x0002efdc) dialer2_ne_pane_ParamLimits

0x0e6b,	// (0x0002efdc) dialer2_ne_pane

0x0e85,	// (0x0002eff6) grid_dialer2_keypad_pane_ParamLimits

0x0e85,	// (0x0002eff6) grid_dialer2_keypad_pane

0xc51e,	// (0x0003a68f) bg_popup_call_pane_cp07_ParamLimits

0xc51e,	// (0x0003a68f) bg_popup_call_pane_cp07

0x6347,	// (0x000344b8) dialer2_ne_pane_t1_ParamLimits

0x6347,	// (0x000344b8) dialer2_ne_pane_t1

0x0ea1,	// (0x0002f012) cell_dialer2_keypad_pane_ParamLimits

0x0ea1,	// (0x0002f012) cell_dialer2_keypad_pane

0xd0d6,	// (0x0003b247) bg_button_pane_pane_cp04_ParamLimits

0xd0d6,	// (0x0003b247) bg_button_pane_pane_cp04

0x6383,	// (0x000344f4) cell_dialer2_keypad_pane_g1_ParamLimits

0x6383,	// (0x000344f4) cell_dialer2_keypad_pane_g1

0x26ba,	// (0x0003082b) aid_placing_vt_set_content_ParamLimits

0x26ba,	// (0x0003082b) aid_placing_vt_set_content

0x26e2,	// (0x00030853) aid_placing_vt_set_title_ParamLimits

0x26e2,	// (0x00030853) aid_placing_vt_set_title

0x18c5,	// (0x0002fa36) main_image3_pane

0x0f21,	// (0x0002f092) area_side_right_pane_cp01_ParamLimits

0x0f21,	// (0x0002f092) area_side_right_pane_cp01

0x6165,	// (0x000342d6) main_image3_pane_g1_ParamLimits

0x6165,	// (0x000342d6) main_image3_pane_g1

0x0f38,	// (0x0002f0a9) main_image3_pane_g2_ParamLimits

0x0f38,	// (0x0002f0a9) main_image3_pane_g2

0x0f60,	// (0x0002f0d1) main_image3_pane_g3_ParamLimits

0x0f60,	// (0x0002f0d1) main_image3_pane_g3

0x0f8a,	// (0x0002f0fb) main_image3_pane_g4_ParamLimits

0x0f8a,	// (0x0002f0fb) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0003da43) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0003da43) main_image3_pane_g

0x0fb4,	// (0x0002f125) main_image3_pane_t1_ParamLimits

0x0fb4,	// (0x0002f125) main_image3_pane_t1

0x100c,	// (0x0002f17d) main_image3_pane_t2_ParamLimits

0x100c,	// (0x0002f17d) main_image3_pane_t2

0x105e,	// (0x0002f1cf) main_image3_pane_t3_ParamLimits

0x105e,	// (0x0002f1cf) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0003da4c) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0003da4c) main_image3_pane_t

0xa810,	// (0x00038981) grid_sctrl_middle_pane_cp01_ParamLimits

0xa810,	// (0x00038981) grid_sctrl_middle_pane_cp01

0x641d,	// (0x0003458e) cell_sctrl_middle_pane_cp01_ParamLimits

0x641d,	// (0x0003458e) cell_sctrl_middle_pane_cp01

0x643a,	// (0x000345ab) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x643a,	// (0x000345ab) cell_sctrl_middle_pane_cp01_g1

0x18c5,	// (0x0002fa36) main_call4_pane

0x6450,	// (0x000345c1) aid_size_button_call4_ParamLimits

0x6450,	// (0x000345c1) aid_size_button_call4

0x6481,	// (0x000345f2) call4_windows_pane_ParamLimits

0x6481,	// (0x000345f2) call4_windows_pane

0x64a1,	// (0x00034612) grid_call4_button_pane_ParamLimits

0x64a1,	// (0x00034612) grid_call4_button_pane

0xd0e2,	// (0x0003b253) call4_windows_conf_pane

0xd0f9,	// (0x0003b26a) popup_call4_audio_first_window_ParamLimits

0xd0f9,	// (0x0003b26a) popup_call4_audio_first_window

0xd145,	// (0x0003b2b6) popup_call4_audio_second_window_ParamLimits

0xd145,	// (0x0003b2b6) popup_call4_audio_second_window

0xd159,	// (0x0003b2ca) popup_call4_audio_wait_window_ParamLimits

0xd159,	// (0x0003b2ca) popup_call4_audio_wait_window

0x64ce,	// (0x0003463f) cell_call4_button_pane_ParamLimits

0x64ce,	// (0x0003463f) cell_call4_button_pane

0x64f7,	// (0x00034668) bg_button_pane_cp09_ParamLimits

0x64f7,	// (0x00034668) bg_button_pane_cp09

0x6503,	// (0x00034674) cell_call4_button_pane_g1_ParamLimits

0x6503,	// (0x00034674) cell_call4_button_pane_g1

0x6529,	// (0x0003469a) cell_call4_button_pane_t1_ParamLimits

0x6529,	// (0x0003469a) cell_call4_button_pane_t1

0xd1a1,	// (0x0003b312) popup_call4_audio_conf_window_ParamLimits

0xd1a1,	// (0x0003b312) popup_call4_audio_conf_window

0x5903,	// (0x00033a74) mup3_progress_pane_t1_ParamLimits

0x5922,	// (0x00033a93) mup3_progress_pane_t2_ParamLimits

0xca76,	// (0x0003abe7) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0003d920) mup3_progress_pane_t_ParamLimits

0xca93,	// (0x0003ac04) mup_progress_pane_cp03_ParamLimits

0x5e8c,	// (0x00033ffd) mup3_control_keys_pane_g4_copy1

0x630b,	// (0x0003447c) mp4_rocker2_pane_ParamLimits

0x630b,	// (0x0003447c) mp4_rocker2_pane

0xd1b5,	// (0x0003b326) mp4_rocker2_pane_g1

0xd1bd,	// (0x0003b32e) mp4_rocker2_pane_g2

0x6553,	// (0x000346c4) mp4_rocker2_pane_g3

0x655b,	// (0x000346cc) mp4_rocker2_pane_g4

0x6563,	// (0x000346d4) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0003da55) mp4_rocker2_pane_g

0x18c5,	// (0x0002fa36) main_camera4_pane

0x18c5,	// (0x0002fa36) main_video4_pane

0x0daf,	// (0x0002ef20) main_video_tele_dialer_pane_t1_ParamLimits

0x0daf,	// (0x0002ef20) main_video_tele_dialer_pane_t1

0x0dc8,	// (0x0002ef39) main_video_tele_dialer_pane_t2_ParamLimits

0x0dc8,	// (0x0002ef39) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0003da0f) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0003da0f) main_video_tele_dialer_pane_t

0x10fe,	// (0x0002f26f) cam4_autofocus_pane_ParamLimits

0x10fe,	// (0x0002f26f) cam4_autofocus_pane

0x1114,	// (0x0002f285) cam4_image_uncrop_pane_ParamLimits

0x1114,	// (0x0002f285) cam4_image_uncrop_pane

0x112e,	// (0x0002f29f) cam4_indicators_pane_ParamLimits

0x112e,	// (0x0002f29f) cam4_indicators_pane

0x1159,	// (0x0002f2ca) main_camera4_pane_g1_ParamLimits

0x1159,	// (0x0002f2ca) main_camera4_pane_g1

0x116b,	// (0x0002f2dc) main_camera4_pane_g2_ParamLimits

0x116b,	// (0x0002f2dc) main_camera4_pane_g2

0x117e,	// (0x0002f2ef) main_camera4_pane_g3_ParamLimits

0x117e,	// (0x0002f2ef) main_camera4_pane_g3

0x1191,	// (0x0002f302) main_camera4_pane_g4_ParamLimits

0x1191,	// (0x0002f302) main_camera4_pane_g4

0x11a4,	// (0x0002f315) main_camera4_pane_g5_ParamLimits

0x11a4,	// (0x0002f315) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0003da60) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0003da60) main_camera4_pane_g

0x11c8,	// (0x0002f339) main_camera4_pane_t1_ParamLimits

0x11c8,	// (0x0002f339) main_camera4_pane_t1

0x659b,	// (0x0003470c) bg_tb_trans_pane_cp06

0x65b1,	// (0x00034722) cam4_indicators_pane_g1

0x65c2,	// (0x00034733) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0003da7b) cam4_indicators_pane_g

0x65da,	// (0x0003474b) cam4_indicators_pane_t1

0x1218,	// (0x0002f389) main_video4_pane_g1_ParamLimits

0x1218,	// (0x0002f389) main_video4_pane_g1

0x1227,	// (0x0002f398) main_video4_pane_g2_ParamLimits

0x1227,	// (0x0002f398) main_video4_pane_g2

0x1236,	// (0x0002f3a7) main_video4_pane_g3_ParamLimits

0x1236,	// (0x0002f3a7) main_video4_pane_g3

0x1245,	// (0x0002f3b6) main_video4_pane_g4_ParamLimits

0x1245,	// (0x0002f3b6) main_video4_pane_g4

0x0004,

0xf911,	// (0x0003da82) main_video4_pane_g_ParamLimits

0xf911,	// (0x0003da82) main_video4_pane_g

0x1263,	// (0x0002f3d4) vid4_indicators_pane_ParamLimits

0x1263,	// (0x0002f3d4) vid4_indicators_pane

0x1291,	// (0x0002f402) video4_image_uncrop_cif_pane_ParamLimits

0x1291,	// (0x0002f402) video4_image_uncrop_cif_pane

0x12ab,	// (0x0002f41c) video4_image_uncrop_nhd_pane_ParamLimits

0x12ab,	// (0x0002f41c) video4_image_uncrop_nhd_pane

0x1114,	// (0x0002f285) video4_image_uncrop_vga_pane_ParamLimits

0x1114,	// (0x0002f285) video4_image_uncrop_vga_pane

0x18ab,	// (0x0002fa1c) bg_tb_trans_pane_cp07

0x6604,	// (0x00034775) vid4_indicators_pane_g1

0x6618,	// (0x00034789) vid4_indicators_pane_g2

0x662c,	// (0x0003479d) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0003da8d) vid4_indicators_pane_g

0x6659,	// (0x000347ca) vid4_indicators_pane_t1

0x6670,	// (0x000347e1) cam4_autofocus_pane_g1

0x6678,	// (0x000347e9) cam4_autofocus_pane_g2

0x6680,	// (0x000347f1) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0003da98) cam4_autofocus_pane_g

0x6688,	// (0x000347f9) cam4_autofocus_pane_g3_copy1

0x6107,	// (0x00034278) video_down_pane_cp_t1

0x6115,	// (0x00034286) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0003da14) video_down_pane_cp_t

0x18ab,	// (0x0002fa1c) popup_vitu2_window_ParamLimits

0x18ab,	// (0x0002fa1c) popup_vitu2_window

0x12bf,	// (0x0002f430) aid_size_cell2_itu2_ParamLimits

0x12bf,	// (0x0002f430) aid_size_cell2_itu2

0x12e5,	// (0x0002f456) aid_size_cell_itu2_ParamLimits

0x12e5,	// (0x0002f456) aid_size_cell_itu2

0x1341,	// (0x0002f4b2) bg_popup_window_pane_cp09_ParamLimits

0x1341,	// (0x0002f4b2) bg_popup_window_pane_cp09

0x134f,	// (0x0002f4c0) field_vitu2_entry_pane_ParamLimits

0x134f,	// (0x0002f4c0) field_vitu2_entry_pane

0x1375,	// (0x0002f4e6) grid_vitu2_function_pane_ParamLimits

0x1375,	// (0x0002f4e6) grid_vitu2_function_pane

0x13c6,	// (0x0002f537) grid_vitu2_itu_pane_ParamLimits

0x13c6,	// (0x0002f537) grid_vitu2_itu_pane

0x145c,	// (0x0002f5cd) cell_vitu2_itu_pane_ParamLimits

0x145c,	// (0x0002f5cd) cell_vitu2_itu_pane

0x1488,	// (0x0002f5f9) cell_vitu2_function_pane_ParamLimits

0x1488,	// (0x0002f5f9) cell_vitu2_function_pane

0xd1c5,	// (0x0003b336) bg_popup_call_pane_cp08_ParamLimits

0xd1c5,	// (0x0003b336) bg_popup_call_pane_cp08

0xd1dc,	// (0x0003b34d) field_vitu2_entry_pane_g1

0xd1e8,	// (0x0003b359) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0003da9f) field_vitu2_entry_pane_g

0x6690,	// (0x00034801) field_vitu2_entry_pane_t1_ParamLimits

0x6690,	// (0x00034801) field_vitu2_entry_pane_t1

0xd202,	// (0x0003b373) field_vitu2_entry_pane_t2_ParamLimits

0xd202,	// (0x0003b373) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0003daa6) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0003daa6) field_vitu2_entry_pane_t

0x14c7,	// (0x0002f638) bg_button_pane_cp010_ParamLimits

0x14c7,	// (0x0002f638) bg_button_pane_cp010

0x66bf,	// (0x00034830) cell_vitu2_itu_pane_g1

0x14e3,	// (0x0002f654) cell_vitu2_itu_pane_t1_ParamLimits

0x14e3,	// (0x0002f654) cell_vitu2_itu_pane_t1

0x1541,	// (0x0002f6b2) cell_vitu2_itu_pane_t2_ParamLimits

0x1541,	// (0x0002f6b2) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0003dab0) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0003dab0) cell_vitu2_itu_pane_t

0x18ab,	// (0x0002fa1c) bg_button_pane_cp011

0x162d,	// (0x0002f79e) cell_vitu2_function_pane_g1

0x18c5,	// (0x0002fa36) main_myfav_hc_pane

0x10ae,	// (0x0002f21f) popup_image3_note_pane_ParamLimits

0x10ae,	// (0x0002f21f) popup_image3_note_pane

0x10ca,	// (0x0002f23b) popup_image3_tool_bar_pane_ParamLimits

0x10ca,	// (0x0002f23b) popup_image3_tool_bar_pane

0x15cf,	// (0x0002f740) cell_vitu2_itu_pane_t3_ParamLimits

0x15cf,	// (0x0002f740) cell_vitu2_itu_pane_t3

0x9b3d,	// (0x00037cae) bg_popup_trans_pane

0xd227,	// (0x0003b398) grid_image3_tool_bar_pane

0xd231,	// (0x0003b3a2) bg_popup_trans_pane_g1

0xa6e2,	// (0x00038853) bg_popup_trans_pane_g2

0xd239,	// (0x0003b3aa) bg_popup_trans_pane_g3

0xd241,	// (0x0003b3b2) bg_popup_trans_pane_g4

0xd249,	// (0x0003b3ba) bg_popup_trans_pane_g5

0xd251,	// (0x0003b3c2) bg_popup_trans_pane_g6

0xd259,	// (0x0003b3ca) bg_popup_trans_pane_g7

0xd261,	// (0x0003b3d2) bg_popup_trans_pane_g8

0xa6c2,	// (0x00038833) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0003dab7) bg_popup_trans_pane_g

0xd269,	// (0x0003b3da) cell_image3_tool_bar_pane_ParamLimits

0xd269,	// (0x0003b3da) cell_image3_tool_bar_pane

0xc739,	// (0x0003a8aa) cell_image3_tool_bar_pane_g1

0x9b3d,	// (0x00037cae) bg_popup_trans_pane_cp1

0xd27d,	// (0x0003b3ee) popup_image3_note_pane_t1

0xd28b,	// (0x0003b3fc) popup_image3_note_pane_t2

0xd299,	// (0x0003b40a) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0003daca) popup_image3_note_pane_t

0xd2a7,	// (0x0003b418) popup_image3_note_pane_t3_copy1

0x66d1,	// (0x00034842) bg_myfav_hc_instruction_pane_ParamLimits

0x66d1,	// (0x00034842) bg_myfav_hc_instruction_pane

0x66e5,	// (0x00034856) cell_myfav_contact_pane_ParamLimits

0x66e5,	// (0x00034856) cell_myfav_contact_pane

0x6703,	// (0x00034874) cell_myfav_contact_pane_cp1_ParamLimits

0x6703,	// (0x00034874) cell_myfav_contact_pane_cp1

0x671b,	// (0x0003488c) cell_myfav_contact_pane_cp2_ParamLimits

0x671b,	// (0x0003488c) cell_myfav_contact_pane_cp2

0x6733,	// (0x000348a4) cell_myfav_contact_pane_cp3_ParamLimits

0x6733,	// (0x000348a4) cell_myfav_contact_pane_cp3

0x674a,	// (0x000348bb) cell_myfav_contact_pane_cp4_ParamLimits

0x674a,	// (0x000348bb) cell_myfav_contact_pane_cp4

0x6762,	// (0x000348d3) cell_myfav_contact_pane_cp5_ParamLimits

0x6762,	// (0x000348d3) cell_myfav_contact_pane_cp5

0x6776,	// (0x000348e7) cell_myfav_contact_pane_cp6_ParamLimits

0x6776,	// (0x000348e7) cell_myfav_contact_pane_cp6

0x678c,	// (0x000348fd) cell_myfav_contact_pane_cp7_ParamLimits

0x678c,	// (0x000348fd) cell_myfav_contact_pane_cp7

0xd2b5,	// (0x0003b426) listscroll_gen_pane_cp05

0x67a6,	// (0x00034917) main_myfav_hc_pane_g1_ParamLimits

0x67a6,	// (0x00034917) main_myfav_hc_pane_g1

0x67c0,	// (0x00034931) main_myfav_hc_pane_g2_ParamLimits

0x67c0,	// (0x00034931) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0003dad1) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0003dad1) main_myfav_hc_pane_g

0x67f2,	// (0x00034963) main_myfav_hc_pane_t1_ParamLimits

0x67f2,	// (0x00034963) main_myfav_hc_pane_t1

0xd2be,	// (0x0003b42f) main_myfav_hc_pane_t2_ParamLimits

0xd2be,	// (0x0003b42f) main_myfav_hc_pane_t2

0xd2d0,	// (0x0003b441) main_myfav_hc_pane_t3_ParamLimits

0xd2d0,	// (0x0003b441) main_myfav_hc_pane_t3

0x6809,	// (0x0003497a) main_myfav_hc_pane_t4_ParamLimits

0x6809,	// (0x0003497a) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0003dad8) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0003dad8) main_myfav_hc_pane_t

0xc739,	// (0x0003a8aa) bg_myfav_hc_instruction_pane_g1

0xd2e2,	// (0x0003b453) cell_myfav_contact_pane_g1_ParamLimits

0xd2e2,	// (0x0003b453) cell_myfav_contact_pane_g1

0xd2e2,	// (0x0003b453) cell_myfav_contact_pane_g2_ParamLimits

0xd2e2,	// (0x0003b453) cell_myfav_contact_pane_g2

0xd2ee,	// (0x0003b45f) cell_myfav_contact_pane_g3_ParamLimits

0xd2ee,	// (0x0003b45f) cell_myfav_contact_pane_g3

0xca60,	// (0x0003abd1) cell_myfav_contact_pane_g4_ParamLimits

0xca60,	// (0x0003abd1) cell_myfav_contact_pane_g4

0xd2fb,	// (0x0003b46c) cell_myfav_contact_pane_g5_ParamLimits

0xd2fb,	// (0x0003b46c) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0003dae3) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0003dae3) cell_myfav_contact_pane_g

0x67da,	// (0x0003494b) main_myfav_hc_pane_g3_ParamLimits

0x67da,	// (0x0003494b) main_myfav_hc_pane_g3

0x01dd,	// (0x0002e34e) popup_adpt_find_window

0x6831,	// (0x000349a2) afind_page_pane_ParamLimits

0x6831,	// (0x000349a2) afind_page_pane

0x6846,	// (0x000349b7) aid_size_cell_afind_ParamLimits

0x6846,	// (0x000349b7) aid_size_cell_afind

0x6864,	// (0x000349d5) bg_popup_sub_pane_cp09_ParamLimits

0x6864,	// (0x000349d5) bg_popup_sub_pane_cp09

0x6871,	// (0x000349e2) find_pane_cp01_ParamLimits

0x6871,	// (0x000349e2) find_pane_cp01

0xd307,	// (0x0003b478) grid_afind_control_pane_ParamLimits

0xd307,	// (0x0003b478) grid_afind_control_pane

0x687e,	// (0x000349ef) grid_afind_pane_ParamLimits

0x687e,	// (0x000349ef) grid_afind_pane

0x689d,	// (0x00034a0e) cell_afind_pane_ParamLimits

0x689d,	// (0x00034a0e) cell_afind_pane

0xc739,	// (0x0003a8aa) afind_page_pane_g1

0x6904,	// (0x00034a75) afind_page_pane_g2

0x690d,	// (0x00034a7e) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0003daee) afind_page_pane_g

0x6916,	// (0x00034a87) afind_page_pane_t1

0xd31b,	// (0x0003b48c) cell_afind_grid_control_pane_ParamLimits

0xd31b,	// (0x0003b48c) cell_afind_grid_control_pane

0xd0d6,	// (0x0003b247) bg_button_pane_cp69_ParamLimits

0xd0d6,	// (0x0003b247) bg_button_pane_cp69

0x6936,	// (0x00034aa7) cell_afind_pane_g1_ParamLimits

0x6936,	// (0x00034aa7) cell_afind_pane_g1

0x6943,	// (0x00034ab4) cell_afind_pane_t1_ParamLimits

0x6943,	// (0x00034ab4) cell_afind_pane_t1

0xa4db,	// (0x0003864c) bg_button_pane_cp72

0xd32a,	// (0x0003b49b) cell_afind_grid_control_pane_g1

0x4525,	// (0x00032696) aid_image_placing_area_ParamLimits

0x4525,	// (0x00032696) aid_image_placing_area

0xcd86,	// (0x0003aef7) field_vitu_entry_pane_g1_ParamLimits

0xcd86,	// (0x0003aef7) field_vitu_entry_pane_g1

0xcd92,	// (0x0003af03) field_vitu_entry_pane_g2_ParamLimits

0xcd92,	// (0x0003af03) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0003d99f) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0003d99f) field_vitu_entry_pane_g

0x5f55,	// (0x000340c6) cell_vitu_itu_pane_g1_ParamLimits

0x5f97,	// (0x00034108) cell_vitu_itu_pane_t3_ParamLimits

0x5f97,	// (0x00034108) cell_vitu_itu_pane_t3

0xd07c,	// (0x0003b1ed) mp4_progress_pane_t1_ParamLimits

0xd095,	// (0x0003b206) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0003da34) mp4_progress_pane_t_ParamLimits

0xd0ae,	// (0x0003b21f) mup_progress_pane_cp04_ParamLimits

0x681d,	// (0x0003498e) main_myfav_hc_pane_t5_ParamLimits

0x681d,	// (0x0003498e) main_myfav_hc_pane_t5

0x1828,	// (0x0002f999) aid_zoom_text_primary

0x01dd,	// (0x0002e34e) popup_adpt_find_window_ParamLimits

0x18ab,	// (0x0002fa1c) main_cam_set_pane

0x1145,	// (0x0002f2b6) cam4_zoom_pane_ParamLimits

0x1145,	// (0x0002f2b6) cam4_zoom_pane

0x6955,	// (0x00034ac6) main_cam_set_pane_g1_ParamLimits

0x6955,	// (0x00034ac6) main_cam_set_pane_g1

0x6963,	// (0x00034ad4) main_cam_set_pane_g2_ParamLimits

0x6963,	// (0x00034ad4) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0003daf5) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0003daf5) main_cam_set_pane_g

0x6984,	// (0x00034af5) main_cam_set_pane_t1_ParamLimits

0x6984,	// (0x00034af5) main_cam_set_pane_t1

0x699f,	// (0x00034b10) main_cset_listscroll_pane_ParamLimits

0x699f,	// (0x00034b10) main_cset_listscroll_pane

0x69bf,	// (0x00034b30) main_cset_slider_pane_ParamLimits

0x69bf,	// (0x00034b30) main_cset_slider_pane

0xd33b,	// (0x0003b4ac) main_cset_list_pane_ParamLimits

0xd33b,	// (0x0003b4ac) main_cset_list_pane

0xd34b,	// (0x0003b4bc) scroll_pane_cp028

0x69e5,	// (0x00034b56) aid_area_touch_slider

0x6a01,	// (0x00034b72) cset_slider_pane

0x6a2b,	// (0x00034b9c) main_cset_slider_pane_g1

0x6a40,	// (0x00034bb1) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0003dafa) main_cset_slider_pane_g

0xd39c,	// (0x0003b50d) main_cset_slider_pane_t1

0x6ae4,	// (0x00034c55) main_cset_slider_pane_t2

0x6afe,	// (0x00034c6f) main_cset_slider_pane_t3

0x6b18,	// (0x00034c89) main_cset_slider_pane_t4

0x6b32,	// (0x00034ca3) main_cset_slider_pane_t5

0x6b4c,	// (0x00034cbd) main_cset_slider_pane_t6

0x6b61,	// (0x00034cd2) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0003db1f) main_cset_slider_pane_t

0x6c65,	// (0x00034dd6) cset_list_set_pane_ParamLimits

0x6c65,	// (0x00034dd6) cset_list_set_pane

0x6c77,	// (0x00034de8) aid_position_infowindow_above

0x6c7f,	// (0x00034df0) aid_position_infowindow_below

0x6c87,	// (0x00034df8) cset_list_set_pane_g1_ParamLimits

0x6c87,	// (0x00034df8) cset_list_set_pane_g1

0x6c93,	// (0x00034e04) cset_list_set_pane_g3_ParamLimits

0x6c93,	// (0x00034e04) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0003db3e) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0003db3e) cset_list_set_pane_g

0x6ca2,	// (0x00034e13) cset_list_set_pane_t1_ParamLimits

0x6ca2,	// (0x00034e13) cset_list_set_pane_t1

0xa810,	// (0x00038981) list_highlight_pane_cp021_ParamLimits

0xa810,	// (0x00038981) list_highlight_pane_cp021

0xb01c,	// (0x0003918d) cset_slider_pane_g1

0xb02e,	// (0x0003919f) cset_slider_pane_g2

0xb025,	// (0x00039196) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0003db43) cset_slider_pane_g

0x6cb7,	// (0x00034e28) aid_area_touch_cam4_zoom

0x6cbf,	// (0x00034e30) cam4_zoom_cont_pane

0x6cc7,	// (0x00034e38) cam4_zoom_pane_g1

0x6ccf,	// (0x00034e40) cam4_zoom_pane_g2

0x1641,	// (0x0002f7b2) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0003db4a) cam4_zoom_pane_g

0x6cd7,	// (0x00034e48) cam4_zoom_cont_pane_g1

0x6ce0,	// (0x00034e51) cam4_zoom_cont_pane_g2

0x6ce9,	// (0x00034e5a) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0003db51) cam4_zoom_cont_pane_g

0x646e,	// (0x000345df) call4_image_pane_ParamLimits

0x646e,	// (0x000345df) call4_image_pane

0xd0e2,	// (0x0003b253) call4_windows_conf_pane_ParamLimits

0xd123,	// (0x0003b294) popup_call4_audio_in_window_ParamLimits

0xd123,	// (0x0003b294) popup_call4_audio_in_window

0x9b3d,	// (0x00037cae) bg_popup_call2_act_pane_cp02

0xd199,	// (0x0003b30a) call4_list_conf_pane

0xc739,	// (0x0003a8aa) call4_image_pane_g1

0xc739,	// (0x0003a8aa) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0003d860) call4_image_pane_g

0xd43c,	// (0x0003b5ad) list_single_graphic_popup_conf4_pane_ParamLimits

0xd43c,	// (0x0003b5ad) list_single_graphic_popup_conf4_pane

0x9b3d,	// (0x00037cae) list_highlight_pane_cp022

0xd44f,	// (0x0003b5c0) list_single_graphic_popup_conf4_pane_g1

0xac18,	// (0x00038d89) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0003db58) list_single_graphic_popup_conf4_pane_g

0xd457,	// (0x0003b5c8) list_single_graphic_popup_conf4_pane_t1

0x2806,	// (0x00030977) popup_vtel_slider_window_ParamLimits

0x2806,	// (0x00030977) popup_vtel_slider_window

0xd0c4,	// (0x0003b235) dialer2_ne_pane_t2_ParamLimits

0xd0c4,	// (0x0003b235) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0003da39) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0003da39) dialer2_ne_pane_t

0xc51e,	// (0x0003a68f) bg_popup_sub_pane_cp010_ParamLimits

0xc51e,	// (0x0003a68f) bg_popup_sub_pane_cp010

0x6cf2,	// (0x00034e63) popup_vtel_slider_window_g1_ParamLimits

0x6cf2,	// (0x00034e63) popup_vtel_slider_window_g1

0x6d05,	// (0x00034e76) popup_vtel_slider_window_g2_ParamLimits

0x6d05,	// (0x00034e76) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0003db5d) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0003db5d) popup_vtel_slider_window_g

0x6d5b,	// (0x00034ecc) vtel_slider_pane_ParamLimits

0x6d5b,	// (0x00034ecc) vtel_slider_pane

0x6d7d,	// (0x00034eee) vtel_slider_pane_g1_ParamLimits

0x6d7d,	// (0x00034eee) vtel_slider_pane_g1

0x6d91,	// (0x00034f02) vtel_slider_pane_g2_ParamLimits

0x6d91,	// (0x00034f02) vtel_slider_pane_g2

0x6da9,	// (0x00034f1a) vtel_slider_pane_g3_ParamLimits

0x6da9,	// (0x00034f1a) vtel_slider_pane_g3

0x6d7d,	// (0x00034eee) vtel_slider_pane_g4_ParamLimits

0x6d7d,	// (0x00034eee) vtel_slider_pane_g4

0x6dbf,	// (0x00034f30) vtel_slider_pane_g5_ParamLimits

0x6dbf,	// (0x00034f30) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0003db66) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0003db66) vtel_slider_pane_g

0x18ab,	// (0x0002fa1c) main_gallery2_pane

0x1311,	// (0x0002f482) aid_size_row_itut2_dropdow_list_ParamLimits

0x1311,	// (0x0002f482) aid_size_row_itut2_dropdow_list

0x139d,	// (0x0002f50e) grid_vitu2_function_top_pane_ParamLimits

0x139d,	// (0x0002f50e) grid_vitu2_function_top_pane

0x1407,	// (0x0002f578) popup_vitu2_dropdown_list_window_ParamLimits

0x1407,	// (0x0002f578) popup_vitu2_dropdown_list_window

0x1430,	// (0x0002f5a1) popup_vitu2_match_list_window

0x1649,	// (0x0002f7ba) cell_vitu2_function_top_pane_ParamLimits

0x1649,	// (0x0002f7ba) cell_vitu2_function_top_pane

0x1661,	// (0x0002f7d2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1661,	// (0x0002f7d2) cell_vitu2_function_top_pane_cp01

0x167d,	// (0x0002f7ee) cell_vitu2_function_top_wide_pane_ParamLimits

0x167d,	// (0x0002f7ee) cell_vitu2_function_top_wide_pane

0x18ab,	// (0x0002fa1c) bg_button_pane_cp012

0x1699,	// (0x0002f80a) cell_vitu2_function_top_pane_g1

0x6dd5,	// (0x00034f46) bg_button_pane_cp013_ParamLimits

0x6dd5,	// (0x00034f46) bg_button_pane_cp013

0x6df1,	// (0x00034f62) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6df1,	// (0x00034f62) cell_vitu2_function_top_wide_pane_g1

0x18ab,	// (0x0002fa1c) bg_popup_sub_pane_cp20

0x16ad,	// (0x0002f81e) list_vitu2_match_list_pane

0xd231,	// (0x0003b3a2) bg_popup_sub_pane_cp20_g1

0xd239,	// (0x0003b3aa) bg_popup_sub_pane_cp20_g2

0xa6e2,	// (0x00038853) bg_popup_sub_pane_cp20_g3

0xd241,	// (0x0003b3b2) bg_popup_sub_pane_cp20_g4

0xa6c2,	// (0x00038833) bg_popup_sub_pane_cp20_g5

0xd47b,	// (0x0003b5ec) bg_popup_sub_pane_cp20_g6

0xd251,	// (0x0003b3c2) bg_popup_sub_pane_cp20_g7

0xd259,	// (0x0003b3ca) bg_popup_sub_pane_cp20_g8

0xd261,	// (0x0003b3d2) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0003db71) bg_popup_sub_pane_cp20_g

0x6e09,	// (0x00034f7a) list_vitu2_match_list_item_pane_ParamLimits

0x6e09,	// (0x00034f7a) list_vitu2_match_list_item_pane

0x6e1b,	// (0x00034f8c) list_vitu2_match_list_item_pane_t1

0x18c5,	// (0x0002fa36) bg_popup_sub_pane_cp21

0x6e79,	// (0x00034fea) grid_vitu2_dropdown_list_pane

0x16cb,	// (0x0002f83c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x16cb,	// (0x0002f83c) cell_vitu2_dropdown_list_char_pane

0x16ec,	// (0x0002f85d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x16ec,	// (0x0002f85d) cell_vitu2_dropdown_list_ctrl_pane

0xd483,	// (0x0003b5f4) cell_vitu2_dropdown_list_char_pane_g1

0xd48c,	// (0x0003b5fd) cell_vitu2_dropdown_list_char_pane_g2

0xd495,	// (0x0003b606) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0003db8e) cell_vitu2_dropdown_list_char_pane_g

0x1718,	// (0x0002f889) cell_vitu2_dropdown_list_char_pane_t1

0x6e81,	// (0x00034ff2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e81,	// (0x00034ff2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e8e,	// (0x00034fff) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e8e,	// (0x00034fff) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6e9b,	// (0x0003500c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6e9b,	// (0x0003500c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1726,	// (0x0002f897) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1726,	// (0x0002f897) cell_vitu2_dropdown_list_ctrl_pane_g4

0x659b,	// (0x0003470c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x659b,	// (0x0003470c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0003db95) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0003db95) cell_vitu2_dropdown_list_ctrl_pane_g

0x6ea8,	// (0x00035019) aid_size_cell_gallery2_ParamLimits

0x6ea8,	// (0x00035019) aid_size_cell_gallery2

0x6ec6,	// (0x00035037) grid_gallery2_pane_ParamLimits

0x6ec6,	// (0x00035037) grid_gallery2_pane

0x6ee0,	// (0x00035051) scroll_pane_cp029_ParamLimits

0x6ee0,	// (0x00035051) scroll_pane_cp029

0x6eec,	// (0x0003505d) cell_gallery2_pane_ParamLimits

0x6eec,	// (0x0003505d) cell_gallery2_pane

0xd49e,	// (0x0003b60f) cell_gallery2_pane_g2

0x6f48,	// (0x000350b9) cell_gallery2_pane_g3

0xd4a6,	// (0x0003b617) cell_gallery2_pane_g4

0xd4ae,	// (0x0003b61f) cell_gallery2_pane_g5

0xa489,	// (0x000385fa) grid_highlight_pane_cp10

0x1430,	// (0x0002f5a1) popup_vitu2_match_list_window_ParamLimits

0x1445,	// (0x0002f5b6) popup_vitu2_query_window_ParamLimits

0x1445,	// (0x0002f5b6) popup_vitu2_query_window

0x18c5,	// (0x0002fa36) bg_vitu2_candi_button_pane

0xd483,	// (0x0003b5f4) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd48c,	// (0x0003b5fd) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd495,	// (0x0003b606) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f50,	// (0x000350c1) bg_button_pane_cp015

0x6f64,	// (0x000350d5) bg_button_pane_cp016

0x6f77,	// (0x000350e8) bg_button_pane_cp017

0xc331,	// (0x0003a4a2) bg_popup_sub_pane_cp22

0xd4b6,	// (0x0003b627) popup_vitu2_query_window_g1

0x6fbc,	// (0x0003512d) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0003dba0) popup_vitu2_query_window_g

0x6fdb,	// (0x0003514c) popup_vitu2_query_window_t1_ParamLimits

0x6fdb,	// (0x0003514c) popup_vitu2_query_window_t1

0x7010,	// (0x00035181) popup_vitu2_query_window_t2_ParamLimits

0x7010,	// (0x00035181) popup_vitu2_query_window_t2

0x7022,	// (0x00035193) popup_vitu2_query_window_t3_ParamLimits

0x7022,	// (0x00035193) popup_vitu2_query_window_t3

0x704a,	// (0x000351bb) popup_vitu2_query_window_t4_ParamLimits

0x704a,	// (0x000351bb) popup_vitu2_query_window_t4

0x706b,	// (0x000351dc) popup_vitu2_query_window_t5_ParamLimits

0x706b,	// (0x000351dc) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0003dba7) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0003dba7) popup_vitu2_query_window_t

0xd333,	// (0x0003b4a4) main_cset_text_pane

0x69e5,	// (0x00034b56) aid_area_touch_slider_ParamLimits

0x6a01,	// (0x00034b72) cset_slider_pane_ParamLimits

0x6a2b,	// (0x00034b9c) main_cset_slider_pane_g1_ParamLimits

0x6a40,	// (0x00034bb1) main_cset_slider_pane_g2_ParamLimits

0xd354,	// (0x0003b4c5) main_cset_slider_pane_g3_ParamLimits

0xd354,	// (0x0003b4c5) main_cset_slider_pane_g3

0x6a55,	// (0x00034bc6) main_cset_slider_pane_g4_ParamLimits

0x6a55,	// (0x00034bc6) main_cset_slider_pane_g4

0x6a64,	// (0x00034bd5) main_cset_slider_pane_g5_ParamLimits

0x6a64,	// (0x00034bd5) main_cset_slider_pane_g5

0x6a70,	// (0x00034be1) main_cset_slider_pane_g6_ParamLimits

0x6a70,	// (0x00034be1) main_cset_slider_pane_g6

0xf989,	// (0x0003dafa) main_cset_slider_pane_g_ParamLimits

0xd39c,	// (0x0003b50d) main_cset_slider_pane_t1_ParamLimits

0x6ae4,	// (0x00034c55) main_cset_slider_pane_t2_ParamLimits

0x6afe,	// (0x00034c6f) main_cset_slider_pane_t3_ParamLimits

0x6b18,	// (0x00034c89) main_cset_slider_pane_t4_ParamLimits

0x6b32,	// (0x00034ca3) main_cset_slider_pane_t5_ParamLimits

0x6b4c,	// (0x00034cbd) main_cset_slider_pane_t6_ParamLimits

0x6b61,	// (0x00034cd2) main_cset_slider_pane_t7_ParamLimits

0x6b8b,	// (0x00034cfc) main_cset_slider_pane_t8_ParamLimits

0x6b8b,	// (0x00034cfc) main_cset_slider_pane_t8

0x6bb3,	// (0x00034d24) main_cset_slider_pane_t9_ParamLimits

0x6bb3,	// (0x00034d24) main_cset_slider_pane_t9

0x6bdb,	// (0x00034d4c) main_cset_slider_pane_t10_ParamLimits

0x6bdb,	// (0x00034d4c) main_cset_slider_pane_t10

0x6c03,	// (0x00034d74) main_cset_slider_pane_t11_ParamLimits

0x6c03,	// (0x00034d74) main_cset_slider_pane_t11

0x6c2b,	// (0x00034d9c) main_cset_slider_pane_t12_ParamLimits

0x6c2b,	// (0x00034d9c) main_cset_slider_pane_t12

0x6c48,	// (0x00034db9) main_cset_slider_pane_t13_ParamLimits

0x6c48,	// (0x00034db9) main_cset_slider_pane_t13

0xf9ae,	// (0x0003db1f) main_cset_slider_pane_t_ParamLimits

0x9b3d,	// (0x00037cae) bg_popup_sub_pane_cp011

0xd4c2,	// (0x0003b633) main_cset_text_pane_g1

0xd4ca,	// (0x0003b63b) main_cset_text_pane_t1

0xd4d8,	// (0x0003b649) main_cset_text_pane_t2

0xd4e6,	// (0x0003b657) main_cset_text_pane_t3

0xd4f4,	// (0x0003b665) main_cset_text_pane_t4

0xd502,	// (0x0003b673) main_cset_text_pane_t5

0xd510,	// (0x0003b681) main_cset_text_pane_t6

0xd51e,	// (0x0003b68f) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0003dbb6) main_cset_text_pane_t

0x18c5,	// (0x0002fa36) main_cam4_burst_pane

0x18c5,	// (0x0002fa36) main_cam5_pane

0x6924,	// (0x00034a95) bg_button_pane_cp019

0x692d,	// (0x00034a9e) bg_button_pane_cp020

0xd360,	// (0x0003b4d1) main_cset_slider_pane_g7_ParamLimits

0xd360,	// (0x0003b4d1) main_cset_slider_pane_g7

0xd36c,	// (0x0003b4dd) main_cset_slider_pane_g8_ParamLimits

0xd36c,	// (0x0003b4dd) main_cset_slider_pane_g8

0x6a84,	// (0x00034bf5) main_cset_slider_pane_g9_ParamLimits

0x6a84,	// (0x00034bf5) main_cset_slider_pane_g9

0x6a90,	// (0x00034c01) main_cset_slider_pane_g10_ParamLimits

0x6a90,	// (0x00034c01) main_cset_slider_pane_g10

0x6a9c,	// (0x00034c0d) main_cset_slider_pane_g11_ParamLimits

0x6a9c,	// (0x00034c0d) main_cset_slider_pane_g11

0x6aa8,	// (0x00034c19) main_cset_slider_pane_g12_ParamLimits

0x6aa8,	// (0x00034c19) main_cset_slider_pane_g12

0x6ab4,	// (0x00034c25) main_cset_slider_pane_g13_ParamLimits

0x6ab4,	// (0x00034c25) main_cset_slider_pane_g13

0x6ac0,	// (0x00034c31) main_cset_slider_pane_g14_ParamLimits

0x6ac0,	// (0x00034c31) main_cset_slider_pane_g14

0x6acc,	// (0x00034c3d) main_cset_slider_pane_g15_ParamLimits

0x6acc,	// (0x00034c3d) main_cset_slider_pane_g15

0xd3ca,	// (0x0003b53b) main_cset_slider_pane_t14_ParamLimits

0xd3ca,	// (0x0003b53b) main_cset_slider_pane_t14

0xd403,	// (0x0003b574) main_cset_slider_pane_t15_ParamLimits

0xd403,	// (0x0003b574) main_cset_slider_pane_t15

0x70e2,	// (0x00035253) aid_cam4_burst_size_cell_ParamLimits

0x70e2,	// (0x00035253) aid_cam4_burst_size_cell

0x7102,	// (0x00035273) grid_cam4_burst_pane_ParamLimits

0x7102,	// (0x00035273) grid_cam4_burst_pane

0x713a,	// (0x000352ab) linegrid_cam4_burst_pane_ParamLimits

0x713a,	// (0x000352ab) linegrid_cam4_burst_pane

0xd52c,	// (0x0003b69d) scroll_pane_cp30_ParamLimits

0xd52c,	// (0x0003b69d) scroll_pane_cp30

0x715e,	// (0x000352cf) cell_cam4_burst_pane_ParamLimits

0x715e,	// (0x000352cf) cell_cam4_burst_pane

0xd538,	// (0x0003b6a9) linegrid_cam4_burst_pane_g1_ParamLimits

0xd538,	// (0x0003b6a9) linegrid_cam4_burst_pane_g1

0x71ab,	// (0x0003531c) linegrid_cam4_burst_pane_g2_ParamLimits

0x71ab,	// (0x0003531c) linegrid_cam4_burst_pane_g2

0xd545,	// (0x0003b6b6) linegrid_cam4_burst_pane_g3_ParamLimits

0xd545,	// (0x0003b6b6) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0003dbc5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0003dbc5) linegrid_cam4_burst_pane_g

0x71bc,	// (0x0003532d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x71bc,	// (0x0003532d) linegrid_cam4_burst_pane_g3_copy1

0xd552,	// (0x0003b6c3) linegrid_cam4_burst_pane_g4_ParamLimits

0xd552,	// (0x0003b6c3) linegrid_cam4_burst_pane_g4

0x71d6,	// (0x00035347) linegrid_cam4_burst_pane_g5_ParamLimits

0x71d6,	// (0x00035347) linegrid_cam4_burst_pane_g5

0x71e7,	// (0x00035358) linegrid_cam4_burst_pane_g6_ParamLimits

0x71e7,	// (0x00035358) linegrid_cam4_burst_pane_g6

0xd55f,	// (0x0003b6d0) linegrid_cam4_burst_pane_g7_ParamLimits

0xd55f,	// (0x0003b6d0) linegrid_cam4_burst_pane_g7

0x71fe,	// (0x0003536f) cell_cam4_burst_pane_g1

0xd578,	// (0x0003b6e9) main_cam5_pane_t1_ParamLimits

0xd578,	// (0x0003b6e9) main_cam5_pane_t1

0xd58a,	// (0x0003b6fb) main_cam5_pane_t2_ParamLimits

0xd58a,	// (0x0003b6fb) main_cam5_pane_t2

0xd59c,	// (0x0003b70d) main_cam5_pane_t3_ParamLimits

0xd59c,	// (0x0003b70d) main_cam5_pane_t3

0xd5ae,	// (0x0003b71f) main_cam5_pane_t4_ParamLimits

0xd5ae,	// (0x0003b71f) main_cam5_pane_t4

0xd5c6,	// (0x0003b737) main_cam5_pane_t5_ParamLimits

0xd5c6,	// (0x0003b737) main_cam5_pane_t5

0xd5da,	// (0x0003b74b) main_cam5_pane_t6_ParamLimits

0xd5da,	// (0x0003b74b) main_cam5_pane_t6

0xd5ee,	// (0x0003b75f) main_cam5_pane_t7_ParamLimits

0xd5ee,	// (0x0003b75f) main_cam5_pane_t7

0xd600,	// (0x0003b771) main_cam5_pane_t8_ParamLimits

0xd600,	// (0x0003b771) main_cam5_pane_t8

0xd61c,	// (0x0003b78d) main_cam5_pane_t9_ParamLimits

0xd61c,	// (0x0003b78d) main_cam5_pane_t9

0xd62e,	// (0x0003b79f) main_cam5_pane_t10_ParamLimits

0xd62e,	// (0x0003b79f) main_cam5_pane_t10

0xd640,	// (0x0003b7b1) main_cam5_pane_t11_ParamLimits

0xd640,	// (0x0003b7b1) main_cam5_pane_t11

0xd652,	// (0x0003b7c3) main_cam5_pane_t12_ParamLimits

0xd652,	// (0x0003b7c3) main_cam5_pane_t12

0xd667,	// (0x0003b7d8) main_cam5_pane_t13_ParamLimits

0xd667,	// (0x0003b7d8) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0003dbd1) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0003dbd1) main_cam5_pane_t

0x025f,	// (0x0002e3d0) popup_scut_keymap_window_ParamLimits

0x025f,	// (0x0002e3d0) popup_scut_keymap_window

0x7211,	// (0x00035382) aid_size_cell_brow_shortcut

0xa489,	// (0x000385fa) bg_popup_window_pane_cp010

0x721d,	// (0x0003538e) grid_scut_pane

0x7229,	// (0x0003539a) cell_scut_pane_ParamLimits

0x7229,	// (0x0003539a) cell_scut_pane

0x7240,	// (0x000353b1) cell_scut_pane_g1

0xd684,	// (0x0003b7f5) cell_scut_pane_t1

0xd693,	// (0x0003b804) cell_scut_pane_t2

0x7249,	// (0x000353ba) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0003dbec) cell_scut_pane_t

0x54c6,	// (0x00033637) main_mup3_pane_g8_ParamLimits

0x54c6,	// (0x00033637) main_mup3_pane_g8

0x1329,	// (0x0002f49a) area_vitu2_query_pane_ParamLimits

0x1329,	// (0x0002f49a) area_vitu2_query_pane

0x6f8a,	// (0x000350fb) input_focus_pane_cp08

0xd6a2,	// (0x0003b813) area_vitu2_query_pane_g1

0x7257,	// (0x000353c8) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0003dbf3) area_vitu2_query_pane_g

0x7268,	// (0x000353d9) area_vitu2_query_pane_t1_ParamLimits

0x7268,	// (0x000353d9) area_vitu2_query_pane_t1

0x727c,	// (0x000353ed) area_vitu2_query_pane_t2_ParamLimits

0x727c,	// (0x000353ed) area_vitu2_query_pane_t2

0x7290,	// (0x00035401) area_vitu2_query_pane_t3_ParamLimits

0x7290,	// (0x00035401) area_vitu2_query_pane_t3

0xd6ae,	// (0x0003b81f) area_vitu2_query_pane_t4_ParamLimits

0xd6ae,	// (0x0003b81f) area_vitu2_query_pane_t4

0xd6d6,	// (0x0003b847) area_vitu2_query_pane_t5_ParamLimits

0xd6d6,	// (0x0003b847) area_vitu2_query_pane_t5

0xd6fe,	// (0x0003b86f) area_vitu2_query_pane_t6_ParamLimits

0xd6fe,	// (0x0003b86f) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0003dbf8) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0003dbf8) area_vitu2_query_pane_t

0x72b8,	// (0x00035429) bg_button_pane_cp018

0x72c6,	// (0x00035437) bg_button_pane_cp021

0x72d2,	// (0x00035443) bg_button_pane_cp022

0x72e3,	// (0x00035454) input_focus_pane_cp09

0xad27,	// (0x00038e98) aid_size_touch_mv_arrow_left

0xad52,	// (0x00038ec3) aid_size_touch_mv_arrow_right

0xd378,	// (0x0003b4e9) main_cset_slider_pane_g16_ParamLimits

0xd378,	// (0x0003b4e9) main_cset_slider_pane_g16

0xd384,	// (0x0003b4f5) main_cset_slider_pane_g17_ParamLimits

0xd384,	// (0x0003b4f5) main_cset_slider_pane_g17

0x71fe,	// (0x0003536f) cell_cam4_burst_pane_g1_ParamLimits

0x9b3d,	// (0x00037cae) compa_mode_pane

0x6d15,	// (0x00034e86) popup_vtel_slider_window_g3_ParamLimits

0x6d15,	// (0x00034e86) popup_vtel_slider_window_g3

0x6d2c,	// (0x00034e9d) popup_vtel_slider_window_g4_ParamLimits

0x6d2c,	// (0x00034e9d) popup_vtel_slider_window_g4

0x6d43,	// (0x00034eb4) popup_vtel_slider_window_t1_ParamLimits

0x6d43,	// (0x00034eb4) popup_vtel_slider_window_t1

0x18c5,	// (0x0002fa36) main_cl_pane

0x4a62,	// (0x00032bd3) popup_imed_adjust2_window_ParamLimits

0xc331,	// (0x0003a4a2) bg_tb_trans_pane_cp05_ParamLimits

0xccbb,	// (0x0003ae2c) popup_imed_adjust2_window_g1_ParamLimits

0xccca,	// (0x0003ae3b) popup_imed_adjust2_window_g2_ParamLimits

0xccca,	// (0x0003ae3b) popup_imed_adjust2_window_g2

0xccd6,	// (0x0003ae47) popup_imed_adjust2_window_g3_ParamLimits

0xccd6,	// (0x0003ae47) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0003d963) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0003d963) popup_imed_adjust2_window_g

0xcce2,	// (0x0003ae53) popup_imed_adjust2_window_t1_ParamLimits

0xccfa,	// (0x0003ae6b) slider_imed_adjust_pane_ParamLimits

0xcd0e,	// (0x0003ae7f) slider_imed_adjust_pane_g1_ParamLimits

0xcd1e,	// (0x0003ae8f) slider_imed_adjust_pane_g2_ParamLimits

0xcd2e,	// (0x0003ae9f) slider_imed_adjust_pane_g3_ParamLimits

0xcd3f,	// (0x0003aeb0) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0003d96a) slider_imed_adjust_pane_g_ParamLimits

0x10e6,	// (0x0002f257) aid_touch_area_cam4_ParamLimits

0x10e6,	// (0x0002f257) aid_touch_area_cam4

0x656b,	// (0x000346dc) battery_pane_cp01

0x11b5,	// (0x0002f326) main_camera4_pane_g6_ParamLimits

0x11b5,	// (0x0002f326) main_camera4_pane_g6

0x11df,	// (0x0002f350) main_camera4_pane_t2_ParamLimits

0x11df,	// (0x0002f350) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0003da6d) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0003da6d) main_camera4_pane_t

0x1200,	// (0x0002f371) aid_touch_area_vid4_ParamLimits

0x1200,	// (0x0002f371) aid_touch_area_vid4

0x1254,	// (0x0002f3c5) main_video4_pane_g5_ParamLimits

0x1254,	// (0x0002f3c5) main_video4_pane_g5

0x1279,	// (0x0002f3ea) vid4_progress_pane_ParamLimits

0x1279,	// (0x0002f3ea) vid4_progress_pane

0xd390,	// (0x0003b501) main_cset_slider_pane_g18_ParamLimits

0xd390,	// (0x0003b501) main_cset_slider_pane_g18

0xd56c,	// (0x0003b6dd) cell_cam4_burst_pane_g2_ParamLimits

0xd56c,	// (0x0003b6dd) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0003dbcc) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0003dbcc) cell_cam4_burst_pane_g

0xa286,	// (0x000383f7) bg_cl_pane_ParamLimits

0xa286,	// (0x000383f7) bg_cl_pane

0x72f4,	// (0x00035465) cl_header_pane_ParamLimits

0x72f4,	// (0x00035465) cl_header_pane

0x7308,	// (0x00035479) cl_listscroll_pane_ParamLimits

0x7308,	// (0x00035479) cl_listscroll_pane

0xd74a,	// (0x0003b8bb) bg_cl_pane_g1

0xd752,	// (0x0003b8c3) bg_cl_pane_g2

0xd75a,	// (0x0003b8cb) bg_cl_pane_g3

0xd762,	// (0x0003b8d3) bg_cl_pane_g4

0xd76a,	// (0x0003b8db) bg_cl_pane_g5

0xd772,	// (0x0003b8e3) bg_cl_pane_g6

0xd77a,	// (0x0003b8eb) bg_cl_pane_g7

0xd782,	// (0x0003b8f3) bg_cl_pane_g8

0xd78a,	// (0x0003b8fb) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0003dc07) bg_cl_pane_g

0x7318,	// (0x00035489) aid_height_cl_leading_ParamLimits

0x7318,	// (0x00035489) aid_height_cl_leading

0x7324,	// (0x00035495) aid_height_cl_text_ParamLimits

0x7324,	// (0x00035495) aid_height_cl_text

0xa810,	// (0x00038981) bg_cl_header_pane_ParamLimits

0xa810,	// (0x00038981) bg_cl_header_pane

0x7343,	// (0x000354b4) cl_header_pane_g1_ParamLimits

0x7343,	// (0x000354b4) cl_header_pane_g1

0x7359,	// (0x000354ca) cl_header_pane_t1_ParamLimits

0x7359,	// (0x000354ca) cl_header_pane_t1

0xd792,	// (0x0003b903) cl_list_pane

0xd34b,	// (0x0003b4bc) hc_scroll_pane_cp01

0xa6c2,	// (0x00038833) bg_cl_header_pane_g1

0xd231,	// (0x0003b3a2) bg_cl_header_pane_g2

0xa6e2,	// (0x00038853) bg_cl_header_pane_g3

0xd241,	// (0x0003b3b2) bg_cl_header_pane_g4

0xd239,	// (0x0003b3aa) bg_cl_header_pane_g5

0xd47b,	// (0x0003b5ec) bg_cl_header_pane_g6

0xd259,	// (0x0003b3ca) bg_cl_header_pane_g7

0xd261,	// (0x0003b3d2) bg_cl_header_pane_g8

0xd251,	// (0x0003b3c2) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0003dc1a) bg_cl_header_pane_g

0x7372,	// (0x000354e3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7372,	// (0x000354e3) hc_cl_list_double_graphic_heading_pane

0x7383,	// (0x000354f4) hc_cl_list_single_graphic_pane_ParamLimits

0x7383,	// (0x000354f4) hc_cl_list_single_graphic_pane

0x739c,	// (0x0003550d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x739c,	// (0x0003550d) hc_cl_list_single_graphic_pane_g1

0x73a8,	// (0x00035519) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x73a8,	// (0x00035519) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0003dc2d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0003dc2d) hc_cl_list_single_graphic_pane_g

0x73bc,	// (0x0003552d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x73bc,	// (0x0003552d) hc_cl_list_single_graphic_pane_t1

0x739c,	// (0x0003550d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x739c,	// (0x0003550d) hc_cl_list_double_graphic_heading_pane_g1

0x73d1,	// (0x00035542) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x73d1,	// (0x00035542) hc_cl_list_double_graphic_heading_pane_g2

0x73e5,	// (0x00035556) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x73e5,	// (0x00035556) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0003dc32) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0003dc32) hc_cl_list_double_graphic_heading_pane_g

0x73f9,	// (0x0003556a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x73f9,	// (0x0003556a) hc_cl_list_double_graphic_heading_pane_t1

0x740e,	// (0x0003557f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x740e,	// (0x0003557f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0003dc39) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0003dc39) hc_cl_list_double_graphic_heading_pane_t

0x742b,	// (0x0003559c) vid4_progress_pane_g1

0x743b,	// (0x000355ac) vid4_progress_pane_g2

0x1742,	// (0x0002f8b3) vid4_progress_pane_g3

0x744b,	// (0x000355bc) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0003dc3e) vid4_progress_pane_g

0x1754,	// (0x0002f8c5) vid4_progress_pane_t1

0x7463,	// (0x000355d4) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0003dc49) vid4_progress_pane_t

0x176a,	// (0x0002f8db) wait_bar_pane_cp07

0xc52c,	// (0x0003a69d) blid_firmament_pane_ParamLimits

0xc56f,	// (0x0003a6e0) popup_blid_sat_info2_window_g1

0xc593,	// (0x0003a704) popup_blid_sat_info2_window_t3

0xc5a1,	// (0x0003a712) popup_blid_sat_info2_window_t4

0xc5af,	// (0x0003a720) popup_blid_sat_info2_window_t5

0xc5bd,	// (0x0003a72e) popup_blid_sat_info2_window_t6

0xc5cd,	// (0x0003a73e) popup_blid_sat_info2_window_t7

0xc5db,	// (0x0003a74c) popup_blid_sat_info2_window_t8

0xc5e9,	// (0x0003a75a) popup_blid_sat_info2_window_t9

0xc5f7,	// (0x0003a768) popup_blid_sat_info2_window_t10

0xc6b9,	// (0x0003a82a) aid_firma_cardinal_ParamLimits

0xc6cd,	// (0x0003a83e) blid_firmament_pane_t1_ParamLimits

0xc6e4,	// (0x0003a855) blid_firmament_pane_t2_ParamLimits

0xc6fb,	// (0x0003a86c) blid_firmament_pane_t3_ParamLimits

0xc712,	// (0x0003a883) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0003d857) blid_firmament_pane_t_ParamLimits

0xc729,	// (0x0003a89a) blid_sat_info_pane_ParamLimits

0x18ab,	// (0x0002fa1c) main_cam_set_pane_ParamLimits

0x5d0d,	// (0x00033e7e) aid_size_cell_colour_35_ParamLimits

0x5d2d,	// (0x00033e9e) aid_size_cell_colour_112_ParamLimits

0x5d4d,	// (0x00033ebe) aid_size_cell_effect_ParamLimits

0xc331,	// (0x0003a4a2) bg_tb_trans_pane_cp02_ParamLimits

0xa946,	// (0x00038ab7) heading_imed_pane_ParamLimits

0x5d6d,	// (0x00033ede) listscroll_imed_pane_ParamLimits

0xb917,	// (0x00039a88) popup_call2_audio_first_window_g5_ParamLimits

0xb917,	// (0x00039a88) popup_call2_audio_first_window_g5

0x0ec3,	// (0x0002f034) aid_size_touch_image3_arrow_left_ParamLimits

0x0ec3,	// (0x0002f034) aid_size_touch_image3_arrow_left

0x0eef,	// (0x0002f060) aid_size_touch_image3_arrow_right_ParamLimits

0x0eef,	// (0x0002f060) aid_size_touch_image3_arrow_right

0x7478,	// (0x000355e9) vid4_progress_pane_t3

0x6082,	// (0x000341f3) main_hwr_training_symbol_option_pane_ParamLimits

0x6082,	// (0x000341f3) main_hwr_training_symbol_option_pane

0xcfbc,	// (0x0003b12d) popup_hwr_training_preview_window_ParamLimits

0xcfbc,	// (0x0003b12d) popup_hwr_training_preview_window

0x0d6a,	// (0x0002eedb) hwr_training_navi_pane_g5_ParamLimits

0x0d6a,	// (0x0002eedb) hwr_training_navi_pane_g5

0xd21f,	// (0x0003b390) popup_char_count_window

0x18ab,	// (0x0002fa1c) bg_popup_sub_pane_cp20_ParamLimits

0x16ad,	// (0x0002f81e) list_vitu2_match_list_pane_ParamLimits

0x16bc,	// (0x0002f82d) vitu2_page_scroll_pane_ParamLimits

0x16bc,	// (0x0002f82d) vitu2_page_scroll_pane

0xd7bd,	// (0x0003b92e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7bd,	// (0x0003b92e) list_single_hwr_training_symbol_option_pane

0xd7d0,	// (0x0003b941) list_single_hwr_training_symbol_option_pane_g1

0xd7d8,	// (0x0003b949) list_single_hwr_training_symbol_option_pane_t1

0xd7e6,	// (0x0003b957) bg_button_pane_cp023

0xd7ef,	// (0x0003b960) bg_button_pane_cp024

0x74c6,	// (0x00035637) vitu2_page_scroll_pane_g1

0x74ce,	// (0x0003563f) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0003dc50) vitu2_page_scroll_pane_g

0x74d6,	// (0x00035647) vitu2_page_scroll_pane_t1

0xc762,	// (0x0003a8d3) popup_char_count_window_g1

0xd822,	// (0x0003b993) popup_char_count_window_g2

0xd82b,	// (0x0003b99c) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0003dc55) popup_char_count_window_g

0xd834,	// (0x0003b9a5) popup_char_count_window_t1

0x18c5,	// (0x0002fa36) main_vded2_pane

0xcca7,	// (0x0003ae18) aid_size_cell_imed_line

0xccb1,	// (0x0003ae22) grid_imed_line_width_pane

0x663d,	// (0x000347ae) vid4_indicators_pane_g4

0xd842,	// (0x0003b9b3) cell_imed_line_width_pane_ParamLimits

0xd842,	// (0x0003b9b3) cell_imed_line_width_pane

0xd856,	// (0x0003b9c7) cell_imed_line_width_pane_g1

0xced1,	// (0x0003b042) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0003dc5c) cell_imed_line_width_pane_g

0x74e5,	// (0x00035656) main_vded2_pane_g1_ParamLimits

0x74e5,	// (0x00035656) main_vded2_pane_g1

0x74fb,	// (0x0003566c) main_vded2_pane_g2_ParamLimits

0x74fb,	// (0x0003566c) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0003dc61) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0003dc61) main_vded2_pane_g

0x750d,	// (0x0003567e) vded2_slider_pane_ParamLimits

0x750d,	// (0x0003567e) vded2_slider_pane

0x751d,	// (0x0003568e) aid_size_touch_vded2_end

0x7527,	// (0x00035698) aid_size_touch_vded2_playhead

0xd85f,	// (0x0003b9d0) aid_size_touch_vded2_start

0xd867,	// (0x0003b9d8) vded2_slider_bg_pane

0xd870,	// (0x0003b9e1) vded2_slider_pane_g1

0xd879,	// (0x0003b9ea) vded2_slider_pane_g2

0x7531,	// (0x000356a2) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0003dc66) vded2_slider_pane_g

0xd881,	// (0x0003b9f2) vded2_slider_bg_pane_g1

0xd88a,	// (0x0003b9fb) vded2_slider_bg_pane_g2

0xd893,	// (0x0003ba04) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0003dc6d) vded2_slider_bg_pane_g

0x4193,	// (0x00032304) aid_postcard_touch_down_pane_ParamLimits

0x4193,	// (0x00032304) aid_postcard_touch_down_pane

0x41a9,	// (0x0003231a) aid_postcard_touch_up_pane_ParamLimits

0x41a9,	// (0x0003231a) aid_postcard_touch_up_pane

0x18c5,	// (0x0002fa36) main_blid2_pane

0x4a48,	// (0x00032bb9) popup_blid2_search_window

0x9b3d,	// (0x00037cae) blid2_gps_pane

0x9b3d,	// (0x00037cae) blid2_navig_pane

0x9b3d,	// (0x00037cae) blid2_search_pane

0x9b3d,	// (0x00037cae) blid2_tripm_pane

0x753c,	// (0x000356ad) blid2_search_pane_g1_ParamLimits

0x753c,	// (0x000356ad) blid2_search_pane_g1

0x7554,	// (0x000356c5) blid2_search_pane_t1_ParamLimits

0x7554,	// (0x000356c5) blid2_search_pane_t1

0x7566,	// (0x000356d7) aid_size_cell_blid2_gps_ParamLimits

0x7566,	// (0x000356d7) aid_size_cell_blid2_gps

0x757e,	// (0x000356ef) blid2_gps_pane_g1_ParamLimits

0x757e,	// (0x000356ef) blid2_gps_pane_g1

0x7592,	// (0x00035703) grid_blid2_satellite_pane_ParamLimits

0x7592,	// (0x00035703) grid_blid2_satellite_pane

0x75ac,	// (0x0003571d) blid2_navig_pane_g1_ParamLimits

0x75ac,	// (0x0003571d) blid2_navig_pane_g1

0x75b8,	// (0x00035729) blid2_navig_pane_t1_ParamLimits

0x75b8,	// (0x00035729) blid2_navig_pane_t1

0x75d3,	// (0x00035744) blid2_navig_pane_t2_ParamLimits

0x75d3,	// (0x00035744) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0003dc74) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0003dc74) blid2_navig_pane_t

0x75ee,	// (0x0003575f) blid2_navig_ring_pane_ParamLimits

0x75ee,	// (0x0003575f) blid2_navig_ring_pane

0x7607,	// (0x00035778) blid2_speed_pane_ParamLimits

0x7607,	// (0x00035778) blid2_speed_pane

0x7613,	// (0x00035784) blid2_tripm_pane_g1_ParamLimits

0x7613,	// (0x00035784) blid2_tripm_pane_g1

0x762e,	// (0x0003579f) blid2_tripm_pane_g2_ParamLimits

0x762e,	// (0x0003579f) blid2_tripm_pane_g2

0x7642,	// (0x000357b3) blid2_tripm_pane_g3_ParamLimits

0x7642,	// (0x000357b3) blid2_tripm_pane_g3

0x7656,	// (0x000357c7) blid2_tripm_pane_g4_ParamLimits

0x7656,	// (0x000357c7) blid2_tripm_pane_g4

0x766a,	// (0x000357db) blid2_tripm_pane_g5_ParamLimits

0x766a,	// (0x000357db) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0003dc79) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0003dc79) blid2_tripm_pane_g

0x7690,	// (0x00035801) blid2_tripm_pane_t1_ParamLimits

0x7690,	// (0x00035801) blid2_tripm_pane_t1

0x76ab,	// (0x0003581c) blid2_tripm_pane_t2_ParamLimits

0x76ab,	// (0x0003581c) blid2_tripm_pane_t2

0x76c4,	// (0x00035835) blid2_tripm_pane_t3_ParamLimits

0x76c4,	// (0x00035835) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0003dc86) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0003dc86) blid2_tripm_pane_t

0x770b,	// (0x0003587c) cell_blid2_satellite_pane_ParamLimits

0x770b,	// (0x0003587c) cell_blid2_satellite_pane

0x7729,	// (0x0003589a) cell_blid2_satellite_pane_g1

0xd89c,	// (0x0003ba0d) cell_blid2_satellite_pane_t1

0xc739,	// (0x0003a8aa) blid2_speed_pane_g1

0xd8aa,	// (0x0003ba1b) blid2_speed_pane_t1

0xd8b8,	// (0x0003ba29) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0003dc8f) blid2_speed_pane_t

0xc739,	// (0x0003a8aa) blid2_navig_ring_pane_g1

0x7732,	// (0x000358a3) blid2_navig_ring_pane_g2

0x773a,	// (0x000358ab) blid2_navig_ring_pane_g3

0x7742,	// (0x000358b3) blid2_navig_ring_pane_g4

0x774a,	// (0x000358bb) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0003dc94) blid2_navig_ring_pane_g

0x9b3d,	// (0x00037cae) bg_popup_window_pane_cp011

0xd8c6,	// (0x0003ba37) popup_blid2_search_window_g1

0xd8ce,	// (0x0003ba3f) popup_blid2_search_window_t1

0xd8dc,	// (0x0003ba4d) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0003dc9f) popup_blid2_search_window_t

0xa5d1,	// (0x00038742) main_browser_pane_g1

0xa286,	// (0x000383f7) main_browser_pane_ParamLimits

0x18ab,	// (0x0002fa1c) bg_button_pane_cp011_ParamLimits

0x162d,	// (0x0002f79e) cell_vitu2_function_pane_g1_ParamLimits

0xc331,	// (0x0003a4a2) bg_popup_sub_pane_cp22_ParamLimits

0x6f8a,	// (0x000350fb) input_focus_pane_cp08_ParamLimits

0x6fa1,	// (0x00035112) popup_vitu2_query_button_pane_ParamLimits

0x6fa1,	// (0x00035112) popup_vitu2_query_button_pane

0x6fb2,	// (0x00035123) popup_vitu2_query_input_button_pane

0xd4b6,	// (0x0003b627) popup_vitu2_query_window_g1_ParamLimits

0x6fbc,	// (0x0003512d) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0003dba0) popup_vitu2_query_window_g_ParamLimits

0x9b3d,	// (0x00037cae) bg_button_pane_cp026

0x7752,	// (0x000358c3) popup_vitu2_query_input_button_pane_g1

0x9b3d,	// (0x00037cae) bg_button_pane_cp025

0xd8ea,	// (0x0003ba5b) popup_vitu2_query_button_pane_t1

0x51b8,	// (0x00033329) main_mp3_pane_t6

0x51c6,	// (0x00033337) popup_slider_window_cp01

0x65a9,	// (0x0003471a) cam4_battery_pane

0x65fc,	// (0x0003476d) cam4_battery_pane_cp02

0x7423,	// (0x00035594) cam4_battery_pane_cp01

0x7423,	// (0x00035594) cam4_battery_pane_cp03

0xd0ba,	// (0x0003b22b) cam4_battery_pane_g1

0xc739,	// (0x0003a8aa) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0003dca4) cam4_battery_pane_g

0xc605,	// (0x0003a776) popup_blid_sat_info2_window_t11

0xad27,	// (0x00038e98) aid_size_touch_mv_arrow_left_ParamLimits

0xad52,	// (0x00038ec3) aid_size_touch_mv_arrow_right_ParamLimits

0xadb0,	// (0x00038f21) navi_pane_g1_ParamLimits

0xadbc,	// (0x00038f2d) navi_pane_g2_ParamLimits

0xadea,	// (0x00038f5b) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0003d556) navi_pane_g_ParamLimits

0x3bb8,	// (0x00031d29) navi_pane_mv_t1_ParamLimits

0x5d79,	// (0x00033eea) grid_imed_effect_pane_ParamLimits

0x2703,	// (0x00030874) aid_placing_vt_slider_lsc

0xa520,	// (0x00038691) aid_placing_vt_slider_prt

0xa810,	// (0x00038981) bg_tb_trans_pane_cp01_ParamLimits

0xc8a7,	// (0x0003aa18) popup_image_details_window_g1_ParamLimits

0xc8ba,	// (0x0003aa2b) popup_image_details_window_g2_ParamLimits

0xc8cf,	// (0x0003aa40) popup_image_details_window_g3_ParamLimits

0xc8cf,	// (0x0003aa40) popup_image_details_window_g3

0xf72b,	// (0x0003d89c) popup_image_details_window_g_ParamLimits

0xc8e3,	// (0x0003aa54) popup_image_details_window_t1_ParamLimits

0xc8f5,	// (0x0003aa66) popup_image_details_window_t2_ParamLimits

0xc90e,	// (0x0003aa7f) popup_image_details_window_t3_ParamLimits

0xc922,	// (0x0003aa93) popup_image_details_window_t4_ParamLimits

0xc93d,	// (0x0003aaae) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0003d8a3) popup_image_details_window_t_ParamLimits

0x7330,	// (0x000354a1) cl_header_name_pane_ParamLimits

0x7330,	// (0x000354a1) cl_header_name_pane

0x775a,	// (0x000358cb) cl_header_name_pane_t1_ParamLimits

0x775a,	// (0x000358cb) cl_header_name_pane_t1

0x777b,	// (0x000358ec) cl_header_name_pane_t2_ParamLimits

0x777b,	// (0x000358ec) cl_header_name_pane_t2

0x77bd,	// (0x0003592e) cl_header_name_pane_t3_ParamLimits

0x77bd,	// (0x0003592e) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0003dca9) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0003dca9) cl_header_name_pane_t

0xae79,	// (0x00038fea) navi_pane_mv_g2_ParamLimits

0xd1dc,	// (0x0003b34d) field_vitu2_entry_pane_g1_ParamLimits

0xd1e8,	// (0x0003b359) field_vitu2_entry_pane_g2_ParamLimits

0xd1f4,	// (0x0003b365) field_vitu2_entry_pane_g3_ParamLimits

0xd1f4,	// (0x0003b365) field_vitu2_entry_pane_g3

0xf92e,	// (0x0003da9f) field_vitu2_entry_pane_g_ParamLimits

0x66bf,	// (0x00034830) cell_vitu2_itu_pane_g1_ParamLimits

0x14d5,	// (0x0002f646) cell_vitu2_itu_pane_g2_ParamLimits

0x14d5,	// (0x0002f646) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0003daab) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0003daab) cell_vitu2_itu_pane_g

0x18ab,	// (0x0002fa1c) bg_vkb2_func_pane_cp05_ParamLimits

0x18ab,	// (0x0002fa1c) bg_vkb2_func_pane_cp05

0x18ab,	// (0x0002fa1c) bg_vkb2_func_pane_cp03

0x18ab,	// (0x0002fa1c) bg_vkb2_func_pane_cp04

0x18ab,	// (0x0002fa1c) bg_vkb2_func_pane_cp10_ParamLimits

0x18ab,	// (0x0002fa1c) bg_vkb2_func_pane_cp10

0x72d2,	// (0x00035443) bg_vkb2_func_pane_cp08

0x72b8,	// (0x00035429) bg_vkb2_func_pane_cp06

0x72c6,	// (0x00035437) bg_vkb2_func_pane_cp07

0xd7f8,	// (0x0003b969) bg_vkb2_func_pane_cp11_ParamLimits

0xd7f8,	// (0x0003b969) bg_vkb2_func_pane_cp11

0xd80d,	// (0x0003b97e) bg_vkb2_func_pane_cp12_ParamLimits

0xd80d,	// (0x0003b97e) bg_vkb2_func_pane_cp12

0x9b3d,	// (0x00037cae) bg_vkb2_func_pane_cp09

0xd231,	// (0x0003b3a2) bg_vkb2_func_pane_g1

0xa6e2,	// (0x00038853) bg_vkb2_func_pane_g2

0xd239,	// (0x0003b3aa) bg_vkb2_func_pane_g3

0xd241,	// (0x0003b3b2) bg_vkb2_func_pane_g4

0xd47b,	// (0x0003b5ec) bg_vkb2_func_pane_g5

0xd259,	// (0x0003b3ca) bg_vkb2_func_pane_g6

0xd261,	// (0x0003b3d2) bg_vkb2_func_pane_g7

0xd251,	// (0x0003b3c2) bg_vkb2_func_pane_g8

0xa6c2,	// (0x00038833) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0003dcb0) bg_vkb2_func_pane_g

0x767e,	// (0x000357ef) blid2_tripm_pane_g6_ParamLimits

0x767e,	// (0x000357ef) blid2_tripm_pane_g6

0xd074,	// (0x0003b1e5) mp4_progress_pane_g1

0x76f7,	// (0x00035868) blid2_tripm_values_pane_ParamLimits

0x76f7,	// (0x00035868) blid2_tripm_values_pane

0x77ee,	// (0x0003595f) blid2_tripm_values_pane_t1

0x77fc,	// (0x0003596d) blid2_tripm_values_pane_t2

0x780a,	// (0x0003597b) blid2_tripm_values_pane_t3

0x7818,	// (0x00035989) blid2_tripm_values_pane_t4

0x7826,	// (0x00035997) blid2_tripm_values_pane_t5

0x7834,	// (0x000359a5) blid2_tripm_values_pane_t6

0x7842,	// (0x000359b3) blid2_tripm_values_pane_t7

0x7850,	// (0x000359c1) blid2_tripm_values_pane_t8

0x785e,	// (0x000359cf) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0003dcc3) blid2_tripm_values_pane_t

0x2745,	// (0x000308b6) call_video_pane_t1_ParamLimits

0x2763,	// (0x000308d4) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0003d3df) call_video_pane_t_ParamLimits

0x409a,	// (0x0003220b) msg_header_pane_g1_ParamLimits

0xb061,	// (0x000391d2) msg_header_pane_g2_ParamLimits

0xb061,	// (0x000391d2) msg_header_pane_g2

0x0001,

0xf488,	// (0x0003d5f9) msg_header_pane_g_ParamLimits

0xf488,	// (0x0003d5f9) msg_header_pane_g

0xa286,	// (0x000383f7) main_clock2_pane_ParamLimits

0x5aee,	// (0x00033c5f) grid_clock2_toolbar_pane_ParamLimits

0x5aee,	// (0x00033c5f) grid_clock2_toolbar_pane

0x5aee,	// (0x00033c5f) listscroll_clock2_pane_ParamLimits

0x5aee,	// (0x00033c5f) listscroll_clock2_pane

0x5be5,	// (0x00033d56) main_clock2_pane_t3_ParamLimits

0x5be5,	// (0x00033d56) main_clock2_pane_t3

0x5c09,	// (0x00033d7a) main_clock2_pane_t4_ParamLimits

0x5c09,	// (0x00033d7a) main_clock2_pane_t4

0xd8f8,	// (0x0003ba69) cell_clock2_toolbar_pane

0xd900,	// (0x0003ba71) cell_clock2_toolbar_pane_cp01

0xd900,	// (0x0003ba71) cell_clock2_toolbar_pane_cp02

0xd908,	// (0x0003ba79) cell_clock2_toolbar_pane_cp03

0xd910,	// (0x0003ba81) list_clock2_pane

0xacac,	// (0x00038e1d) scroll_pane_cp10

0xd918,	// (0x0003ba89) list_single_clock2_pane_ParamLimits

0xd918,	// (0x0003ba89) list_single_clock2_pane

0xa489,	// (0x000385fa) list_highlight_pane_cp08

0xd925,	// (0x0003ba96) list_single_clock2_pane_t1

0xd933,	// (0x0003baa4) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0003dcd6) list_single_clock2_pane_t

0x9b3d,	// (0x00037cae) bg_button_pane_cp10

0xd941,	// (0x0003bab2) cell_clock2_toolbar_pane_g1

0x052b,	// (0x0002e69c) aid_main_viewer_pane_g1_ParamLimits

0x052b,	// (0x0002e69c) aid_main_viewer_pane_g1

0x0539,	// (0x0002e6aa) aid_main_viewer_pane_g2_ParamLimits

0x0539,	// (0x0002e6aa) aid_main_viewer_pane_g2

0x4139,	// (0x000322aa) aid_main_viewer_pane_g3_ParamLimits

0x4139,	// (0x000322aa) aid_main_viewer_pane_g3

0x4148,	// (0x000322b9) aid_main_viewer_pane_g4_ParamLimits

0x4148,	// (0x000322b9) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0003d60a) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0003d60a) aid_main_viewer_pane_g

0x056d,	// (0x0002e6de) main_calc_pane_ParamLimits

0x0593,	// (0x0002e704) main_dialer2_pane_ParamLimits

0x18c5,	// (0x0002fa36) main_cam6_pane

0x18c5,	// (0x0002fa36) main_vid6_pane

0x5afa,	// (0x00033c6b) listscroll_gen_pane_cp06_ParamLimits

0x5afa,	// (0x00033c6b) listscroll_gen_pane_cp06

0x5c2c,	// (0x00033d9d) main_clock2_pane_t5_ParamLimits

0x5c2c,	// (0x00033d9d) main_clock2_pane_t5

0x5c86,	// (0x00033df7) aid_call2_pane_cp10_ParamLimits

0x5c98,	// (0x00033e09) aid_call_pane_cp10_ParamLimits

0xad1b,	// (0x00038e8c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xad1b,	// (0x00038e8c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5caa,	// (0x00033e1b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5caa,	// (0x00033e1b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xad1b,	// (0x00038e8c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0003d958) popup_clock_analogue_window_cp10_g_ParamLimits

0x5cbc,	// (0x00033e2d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6398,	// (0x00034509) cell_dialer2_keypad_pane_g2_ParamLimits

0x6398,	// (0x00034509) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0003da3e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0003da3e) cell_dialer2_keypad_pane_g

0x63b4,	// (0x00034525) cell_dialer2_keypad_pane_t1

0x69d7,	// (0x00034b48) main_cset_text2_pane_ParamLimits

0x69d7,	// (0x00034b48) main_cset_text2_pane

0xd6a2,	// (0x0003b813) area_vitu2_query_pane_g1_ParamLimits

0x7257,	// (0x000353c8) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0003dbf3) area_vitu2_query_pane_g_ParamLimits

0xd726,	// (0x0003b897) area_vitu2_query_pane_t7_ParamLimits

0xd726,	// (0x0003b897) area_vitu2_query_pane_t7

0x72b8,	// (0x00035429) bg_button_pane_cp018_ParamLimits

0x72c6,	// (0x00035437) bg_button_pane_cp021_ParamLimits

0x72d2,	// (0x00035443) bg_button_pane_cp022_ParamLimits

0x72d2,	// (0x00035443) bg_vkb2_func_pane_cp08_ParamLimits

0x72b8,	// (0x00035429) bg_vkb2_func_pane_cp06_ParamLimits

0x72c6,	// (0x00035437) bg_vkb2_func_pane_cp07_ParamLimits

0x72e3,	// (0x00035454) input_focus_pane_cp09_ParamLimits

0xa81e,	// (0x0003898f) cam6_autofocus_pane_ParamLimits

0xa81e,	// (0x0003898f) cam6_autofocus_pane

0x177b,	// (0x0002f8ec) cam6_image_uncrop_pane_ParamLimits

0x177b,	// (0x0002f8ec) cam6_image_uncrop_pane

0x178a,	// (0x0002f8fb) cam6_indi_pane_ParamLimits

0x178a,	// (0x0002f8fb) cam6_indi_pane

0x17a0,	// (0x0002f911) cam6_mode_pane_ParamLimits

0x17a0,	// (0x0002f911) cam6_mode_pane

0x17b2,	// (0x0002f923) cam6_timer_pane_ParamLimits

0x17b2,	// (0x0002f923) cam6_timer_pane

0x17c2,	// (0x0002f933) cam6_zoom_pane_ParamLimits

0x17c2,	// (0x0002f933) cam6_zoom_pane

0x786c,	// (0x000359dd) cam6_mode_pane_g1_ParamLimits

0x786c,	// (0x000359dd) cam6_mode_pane_g1

0x787c,	// (0x000359ed) cam6_mode_pane_g2_ParamLimits

0x787c,	// (0x000359ed) cam6_mode_pane_g2

0x788c,	// (0x000359fd) cam6_mode_pane_g3_ParamLimits

0x788c,	// (0x000359fd) cam6_mode_pane_g3

0x789c,	// (0x00035a0d) cam6_mode_pane_g4_ParamLimits

0x789c,	// (0x00035a0d) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0003dcdb) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0003dcdb) cam6_mode_pane_g

0xd949,	// (0x0003baba) bg_tb_trans_pane_cp08_ParamLimits

0xd949,	// (0x0003baba) bg_tb_trans_pane_cp08

0xd957,	// (0x0003bac8) cam6_battery_pane_ParamLimits

0xd957,	// (0x0003bac8) cam6_battery_pane

0xd96d,	// (0x0003bade) cam6_indi_pane_g1_ParamLimits

0xd96d,	// (0x0003bade) cam6_indi_pane_g1

0xd97f,	// (0x0003baf0) cam6_indi_pane_g2_ParamLimits

0xd97f,	// (0x0003baf0) cam6_indi_pane_g2

0xd991,	// (0x0003bb02) cam6_indi_pane_g3_ParamLimits

0xd991,	// (0x0003bb02) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0003dce4) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0003dce4) cam6_indi_pane_g

0xd9a3,	// (0x0003bb14) cam6_indi_pane_t1_ParamLimits

0xd9a3,	// (0x0003bb14) cam6_indi_pane_t1

0x78ac,	// (0x00035a1d) cam6_autofocus_pane_g1

0x78b4,	// (0x00035a25) cam6_autofocus_pane_g2

0x78bc,	// (0x00035a2d) cam6_autofocus_pane_g3

0x78c4,	// (0x00035a35) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0003dceb) cam6_autofocus_pane_g

0xd9c9,	// (0x0003bb3a) cam6_timer_pane_g1

0xd9d1,	// (0x0003bb42) cam6_timer_pane_t1

0xd9df,	// (0x0003bb50) cam6_zoom_cont_pane

0xd9e7,	// (0x0003bb58) cam6_zoom_pane_g1

0xd9ef,	// (0x0003bb60) cam6_zoom_pane_g2

0x78cc,	// (0x00035a3d) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0003dcf4) cam6_zoom_pane_g

0xc739,	// (0x0003a8aa) cam6_battery_pane_g1

0xc739,	// (0x0003a8aa) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0003d860) cam6_battery_pane_g

0xd9f7,	// (0x0003bb68) cam6_zoom_cont_pane_g1

0xda00,	// (0x0003bb71) cam6_zoom_cont_pane_g2

0xda09,	// (0x0003bb7a) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0003dcfb) cam6_zoom_cont_pane_g

0x78e9,	// (0x00035a5a) cam6_mode_pane_cp_ParamLimits

0x78e9,	// (0x00035a5a) cam6_mode_pane_cp

0x78fb,	// (0x00035a6c) cam6_zoom_pane_cp_ParamLimits

0x78fb,	// (0x00035a6c) cam6_zoom_pane_cp

0x7907,	// (0x00035a78) vid6_image_uncrop_cif_pane_ParamLimits

0x7907,	// (0x00035a78) vid6_image_uncrop_cif_pane

0x7917,	// (0x00035a88) vid6_image_uncrop_nhd_pane_ParamLimits

0x7917,	// (0x00035a88) vid6_image_uncrop_nhd_pane

0x7926,	// (0x00035a97) vid6_image_uncrop_vga_pane_ParamLimits

0x7926,	// (0x00035a97) vid6_image_uncrop_vga_pane

0x7935,	// (0x00035aa6) vid6_image_uncrop_wvga_pane_ParamLimits

0x7935,	// (0x00035aa6) vid6_image_uncrop_wvga_pane

0x7944,	// (0x00035ab5) vid6_indi_pane_ParamLimits

0x7944,	// (0x00035ab5) vid6_indi_pane

0xd949,	// (0x0003baba) bg_tb_trans_pane_cp09_ParamLimits

0xd949,	// (0x0003baba) bg_tb_trans_pane_cp09

0xda21,	// (0x0003bb92) cam6_battery_pane_cp_ParamLimits

0xda21,	// (0x0003bb92) cam6_battery_pane_cp

0xda2d,	// (0x0003bb9e) vid6_indi_pane_g1_ParamLimits

0xda2d,	// (0x0003bb9e) vid6_indi_pane_g1

0xda3f,	// (0x0003bbb0) vid6_indi_pane_g2_ParamLimits

0xda3f,	// (0x0003bbb0) vid6_indi_pane_g2

0xda51,	// (0x0003bbc2) vid6_indi_pane_g3_ParamLimits

0xda51,	// (0x0003bbc2) vid6_indi_pane_g3

0xda66,	// (0x0003bbd7) vid6_indi_pane_g4_ParamLimits

0xda66,	// (0x0003bbd7) vid6_indi_pane_g4

0xda7b,	// (0x0003bbec) vid6_indi_pane_g5_ParamLimits

0xda7b,	// (0x0003bbec) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0003dd02) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0003dd02) vid6_indi_pane_g

0xda95,	// (0x0003bc06) vid6_indi_pane_t1_ParamLimits

0xda95,	// (0x0003bc06) vid6_indi_pane_t1

0xdaab,	// (0x0003bc1c) vid6_indi_pane_t2_ParamLimits

0xdaab,	// (0x0003bc1c) vid6_indi_pane_t2

0xdad3,	// (0x0003bc44) vid6_indi_pane_t3_ParamLimits

0xdad3,	// (0x0003bc44) vid6_indi_pane_t3

0xdafb,	// (0x0003bc6c) vid6_indi_pane_t4_ParamLimits

0xdafb,	// (0x0003bc6c) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0003dd0d) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0003dd0d) vid6_indi_pane_t

0xdb1f,	// (0x0003bc90) wait_bar_pane_cp08

0x795c,	// (0x00035acd) main_cset_text2_pane_t1_ParamLimits

0x795c,	// (0x00035acd) main_cset_text2_pane_t1

0x78d4,	// (0x00035a45) listscroll_gen_pane_cp06_t1_ParamLimits

0x78d4,	// (0x00035a45) listscroll_gen_pane_cp06_t1

0x18c5,	// (0x0002fa36) main_cam6_set_pane

0x659b,	// (0x0003470c) bg_tb_trans_pane_cp06_ParamLimits

0x65b1,	// (0x00034722) cam4_indicators_pane_g1_ParamLimits

0x65c2,	// (0x00034733) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0003da7b) cam4_indicators_pane_g_ParamLimits

0x65da,	// (0x0003474b) cam4_indicators_pane_t1_ParamLimits

0x18ab,	// (0x0002fa1c) bg_tb_trans_pane_cp07_ParamLimits

0x6604,	// (0x00034775) vid4_indicators_pane_g1_ParamLimits

0x6618,	// (0x00034789) vid4_indicators_pane_g2_ParamLimits

0x662c,	// (0x0003479d) vid4_indicators_pane_g3_ParamLimits

0x663d,	// (0x000347ae) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0003da8d) vid4_indicators_pane_g_ParamLimits

0x6659,	// (0x000347ca) vid4_indicators_pane_t1_ParamLimits

0x742b,	// (0x0003559c) vid4_progress_pane_g1_ParamLimits

0x743b,	// (0x000355ac) vid4_progress_pane_g2_ParamLimits

0x1742,	// (0x0002f8b3) vid4_progress_pane_g3_ParamLimits

0x744b,	// (0x000355bc) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0003dc3e) vid4_progress_pane_g_ParamLimits

0x1754,	// (0x0002f8c5) vid4_progress_pane_t1_ParamLimits

0x7463,	// (0x000355d4) vid4_progress_pane_t2_ParamLimits

0x7478,	// (0x000355e9) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0003dc49) vid4_progress_pane_t_ParamLimits

0x176a,	// (0x0002f8db) wait_bar_pane_cp07_ParamLimits

0x797a,	// (0x00035aeb) main_cam6_set_pane_g2_ParamLimits

0x797a,	// (0x00035aeb) main_cam6_set_pane_g2

0x799e,	// (0x00035b0f) main_cset6_listscroll_pane_ParamLimits

0x799e,	// (0x00035b0f) main_cset6_listscroll_pane

0x79ba,	// (0x00035b2b) main_cset6_slider_pane_ParamLimits

0x79ba,	// (0x00035b2b) main_cset6_slider_pane

0x79d0,	// (0x00035b41) main_cset6_text2_pane_ParamLimits

0x79d0,	// (0x00035b41) main_cset6_text2_pane

0xdb2e,	// (0x0003bc9f) main_cset6_text_pane

0xdb36,	// (0x0003bca7) main_cset_list_pane_copy1_ParamLimits

0xdb36,	// (0x0003bca7) main_cset_list_pane_copy1

0xdb46,	// (0x0003bcb7) scroll_pane_cp028_copy1

0x79de,	// (0x00035b4f) cset_list_set_pane_copy1

0x79f0,	// (0x00035b61) aid_position_infowindow_above_copy1

0x79f8,	// (0x00035b69) aid_position_infowindow_below_copy1

0xdb4f,	// (0x0003bcc0) cset_list_set_pane_g1_copy1

0xdb57,	// (0x0003bcc8) cset_list_set_pane_g3_copy1_ParamLimits

0xdb57,	// (0x0003bcc8) cset_list_set_pane_g3_copy1

0xdb66,	// (0x0003bcd7) cset_list_set_pane_t1_copy1_ParamLimits

0xdb66,	// (0x0003bcd7) cset_list_set_pane_t1_copy1

0xa810,	// (0x00038981) list_highlight_pane_cp021_copy1_ParamLimits

0xa810,	// (0x00038981) list_highlight_pane_cp021_copy1

0xdb7b,	// (0x0003bcec) cset6_slider_pane_ParamLimits

0xdb7b,	// (0x0003bcec) cset6_slider_pane

0xdbc7,	// (0x0003bd38) main_cset6_slider_pane_g1_ParamLimits

0xdbc7,	// (0x0003bd38) main_cset6_slider_pane_g1

0x7a00,	// (0x00035b71) main_cset6_slider_pane_g2_ParamLimits

0x7a00,	// (0x00035b71) main_cset6_slider_pane_g2

0xdbef,	// (0x0003bd60) main_cset6_slider_pane_g3_ParamLimits

0xdbef,	// (0x0003bd60) main_cset6_slider_pane_g3

0x7a28,	// (0x00035b99) main_cset6_slider_pane_g4_ParamLimits

0x7a28,	// (0x00035b99) main_cset6_slider_pane_g4

0xdbfb,	// (0x0003bd6c) main_cset6_slider_pane_g5_ParamLimits

0xdbfb,	// (0x0003bd6c) main_cset6_slider_pane_g5

0xd360,	// (0x0003b4d1) main_cset6_slider_pane_g7_ParamLimits

0xd360,	// (0x0003b4d1) main_cset6_slider_pane_g7

0xd36c,	// (0x0003b4dd) main_cset6_slider_pane_g8_ParamLimits

0xd36c,	// (0x0003b4dd) main_cset6_slider_pane_g8

0x6a84,	// (0x00034bf5) main_cset6_slider_pane_g9_ParamLimits

0x6a84,	// (0x00034bf5) main_cset6_slider_pane_g9

0x6a90,	// (0x00034c01) main_cset6_slider_pane_g10_ParamLimits

0x6a90,	// (0x00034c01) main_cset6_slider_pane_g10

0x6a9c,	// (0x00034c0d) main_cset6_slider_pane_g11_ParamLimits

0x6a9c,	// (0x00034c0d) main_cset6_slider_pane_g11

0x6aa8,	// (0x00034c19) main_cset6_slider_pane_g12_ParamLimits

0x6aa8,	// (0x00034c19) main_cset6_slider_pane_g12

0x6ab4,	// (0x00034c25) main_cset6_slider_pane_g13_ParamLimits

0x6ab4,	// (0x00034c25) main_cset6_slider_pane_g13

0x6ac0,	// (0x00034c31) main_cset6_slider_pane_g14_ParamLimits

0x6ac0,	// (0x00034c31) main_cset6_slider_pane_g14

0x7a34,	// (0x00035ba5) main_cset6_slider_pane_g15_ParamLimits

0x7a34,	// (0x00035ba5) main_cset6_slider_pane_g15

0xd378,	// (0x0003b4e9) main_cset6_slider_pane_g16_ParamLimits

0xd378,	// (0x0003b4e9) main_cset6_slider_pane_g16

0xd384,	// (0x0003b4f5) main_cset6_slider_pane_g17_ParamLimits

0xd384,	// (0x0003b4f5) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0003dd16) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0003dd16) main_cset6_slider_pane_g

0xdc07,	// (0x0003bd78) main_cset6_slider_pane_t1_ParamLimits

0xdc07,	// (0x0003bd78) main_cset6_slider_pane_t1

0x7a64,	// (0x00035bd5) main_cset6_slider_pane_t2_ParamLimits

0x7a64,	// (0x00035bd5) main_cset6_slider_pane_t2

0x7a8f,	// (0x00035c00) main_cset6_slider_pane_t3_ParamLimits

0x7a8f,	// (0x00035c00) main_cset6_slider_pane_t3

0x7aba,	// (0x00035c2b) main_cset6_slider_pane_t4_ParamLimits

0x7aba,	// (0x00035c2b) main_cset6_slider_pane_t4

0x7ae5,	// (0x00035c56) main_cset6_slider_pane_t5_ParamLimits

0x7ae5,	// (0x00035c56) main_cset6_slider_pane_t5

0xdc48,	// (0x0003bdb9) main_cset6_slider_pane_t7_ParamLimits

0xdc48,	// (0x0003bdb9) main_cset6_slider_pane_t7

0x7b10,	// (0x00035c81) main_cset6_slider_pane_t8_ParamLimits

0x7b10,	// (0x00035c81) main_cset6_slider_pane_t8

0x7b34,	// (0x00035ca5) main_cset6_slider_pane_t9_ParamLimits

0x7b34,	// (0x00035ca5) main_cset6_slider_pane_t9

0x7b58,	// (0x00035cc9) main_cset6_slider_pane_t10_ParamLimits

0x7b58,	// (0x00035cc9) main_cset6_slider_pane_t10

0x7b7c,	// (0x00035ced) main_cset6_slider_pane_t11_ParamLimits

0x7b7c,	// (0x00035ced) main_cset6_slider_pane_t11

0xdc7e,	// (0x0003bdef) main_cset6_slider_pane_t14_ParamLimits

0xdc7e,	// (0x0003bdef) main_cset6_slider_pane_t14

0xdcb7,	// (0x0003be28) main_cset6_slider_pane_t15_ParamLimits

0xdcb7,	// (0x0003be28) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0003dd3b) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0003dd3b) main_cset6_slider_pane_t

0xcf91,	// (0x0003b102) cset_slider_pane_g1_copy1

0xdba7,	// (0x0003bd18) cset_slider_pane_g2_copy1

0xdbb0,	// (0x0003bd21) cset_slider_pane_g3_copy1

0x9b3d,	// (0x00037cae) bg_popup_sub_pane_cp011_copy1

0xdcf0,	// (0x0003be61) main_cset_text_pane_g1_copy1

0xd4ca,	// (0x0003b63b) main_cset_text_pane_t1_copy1

0xd4d8,	// (0x0003b649) main_cset_text_pane_t2_copy1

0xd4e6,	// (0x0003b657) main_cset_text_pane_t3_copy1

0xd4f4,	// (0x0003b665) main_cset_text_pane_t4_copy1

0xd502,	// (0x0003b673) main_cset_text_pane_t5_copy1

0xdcf8,	// (0x0003be69) main_cset_text_pane_t6_copy1

0xdd06,	// (0x0003be77) main_cset_text_pane_t7_copy1

0x795c,	// (0x00035acd) main_cset_text2_pane_t1_copy1

0x18ab,	// (0x0002fa1c) main_ncimui_pane

0x07d7,	// (0x0002e948) popup_query_ncimui_window_ParamLimits

0x07d7,	// (0x0002e948) popup_query_ncimui_window

0xca28,	// (0x0003ab99) field_cale_ev2_pane_g4_ParamLimits

0xca28,	// (0x0003ab99) field_cale_ev2_pane_g4

0x6137,	// (0x000342a8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6137,	// (0x000342a8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0003da19) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0003da19) cell_video_dialer_keypad_pane_g

0x614f,	// (0x000342c0) cell_video_dialer_keypad_pane_t1

0x9b3d,	// (0x00037cae) bg_popup_window_pane_cp012

0xab97,	// (0x00038d08) heading_pane_cp06

0xdd32,	// (0x0003bea3) ncim_query_content_pane

0x9b3d,	// (0x00037cae) bg_popup_heading_pane_cp01

0xdd3a,	// (0x0003beab) ncim_heading_pane_t1

0xdd48,	// (0x0003beb9) ncim_indicator_popup_pane

0xdd5a,	// (0x0003becb) ncim_query_button_pane

0xdd6e,	// (0x0003bedf) ncim_query_content_pane_t1

0xdd80,	// (0x0003bef1) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0003dd7f) ncim_query_content_pane_t

0xddba,	// (0x0003bf2b) ncim_query_list_pane

0xddcc,	// (0x0003bf3d) ncim_query_popup_pane

0xdd48,	// (0x0003beb9) ncim_indicator_popup_pane_ParamLimits

0x7d95,	// (0x00035f06) ncim_query_content_pane_g1_ParamLimits

0x7d95,	// (0x00035f06) ncim_query_content_pane_g1

0xdd6e,	// (0x0003bedf) ncim_query_content_pane_t1_ParamLimits

0xdd80,	// (0x0003bef1) ncim_query_content_pane_t2_ParamLimits

0x7da1,	// (0x00035f12) ncim_query_content_pane_t3_ParamLimits

0x7da1,	// (0x00035f12) ncim_query_content_pane_t3

0x7dc9,	// (0x00035f3a) ncim_query_content_pane_t4_ParamLimits

0x7dc9,	// (0x00035f3a) ncim_query_content_pane_t4

0x7df1,	// (0x00035f62) ncim_query_content_pane_t5_ParamLimits

0x7df1,	// (0x00035f62) ncim_query_content_pane_t5

0xdd92,	// (0x0003bf03) ncim_query_content_pane_t6_ParamLimits

0xdd92,	// (0x0003bf03) ncim_query_content_pane_t6

0xfc0e,	// (0x0003dd7f) ncim_query_content_pane_t_ParamLimits

0xddba,	// (0x0003bf2b) ncim_query_list_pane_ParamLimits

0xddcc,	// (0x0003bf3d) ncim_query_popup_pane_ParamLimits

0xdde0,	// (0x0003bf51) wait_bar_pane_cp04

0x9b3d,	// (0x00037cae) input_focus_pane_cp011

0xdde8,	// (0x0003bf59) ncim_query_popup_pane_t1

0xddf6,	// (0x0003bf67) ncim_list_query_list_pane_ParamLimits

0xddf6,	// (0x0003bf67) ncim_list_query_list_pane

0x9b3d,	// (0x00037cae) bg_button_pane_cp027

0xde03,	// (0x0003bf74) ncim_query_button_pane_g1

0x9b3d,	// (0x00037cae) list_highlight_pane_cp012

0xde0d,	// (0x0003bf7e) ncim_list_query_list_pane_g1

0xde15,	// (0x0003bf86) ncim_list_query_list_pane_t1

0x65ce,	// (0x0003473f) cam4_indicators_pane_g3_ParamLimits

0x65ce,	// (0x0003473f) cam4_indicators_pane_g3

0x6649,	// (0x000347ba) vid4_indicators_pane_g5_ParamLimits

0x6649,	// (0x000347ba) vid4_indicators_pane_g5

0x7457,	// (0x000355c8) vid4_progress_pane_g5_ParamLimits

0x7457,	// (0x000355c8) vid4_progress_pane_g5

0x7c83,	// (0x00035df4) main_ncimui_pane_g1

0x7ce9,	// (0x00035e5a) ncimui_group_query_pane_ParamLimits

0x7ce9,	// (0x00035e5a) ncimui_group_query_pane

0x7d31,	// (0x00035ea2) ncimui_list_pane_ParamLimits

0x7d31,	// (0x00035ea2) ncimui_list_pane

0x7d58,	// (0x00035ec9) ncimui_text_pane_ParamLimits

0x7d58,	// (0x00035ec9) ncimui_text_pane

0x7e19,	// (0x00035f8a) ncimui_text_pane_t1_ParamLimits

0x7e19,	// (0x00035f8a) ncimui_text_pane_t1

0xde23,	// (0x0003bf94) ncimui_list_single_graphic_pane_ParamLimits

0xde23,	// (0x0003bf94) ncimui_list_single_graphic_pane

0x7e37,	// (0x00035fa8) ncimui_query_pane_ParamLimits

0x7e37,	// (0x00035fa8) ncimui_query_pane

0x9b3d,	// (0x00037cae) list_highlight_pane_cp013

0xde33,	// (0x0003bfa4) ncim_list_query_list_pane_t1_copy1

0xde41,	// (0x0003bfb2) ncim_list_single_graphic_pane_g1

0xde49,	// (0x0003bfba) ncim_query_button_pane_cp01

0xde55,	// (0x0003bfc6) ncim_query_entry_pane_ParamLimits

0xde55,	// (0x0003bfc6) ncim_query_entry_pane

0xde68,	// (0x0003bfd9) ncimui_query_pane_g1

0xde74,	// (0x0003bfe5) ncimui_query_pane_t1_ParamLimits

0xde74,	// (0x0003bfe5) ncimui_query_pane_t1

0xa810,	// (0x00038981) input_focus_pane_cp012

0xde8d,	// (0x0003bffe) ncim_query_entry_pane_t1

0xa286,	// (0x000383f7) main_im_pane_ParamLimits

0x18ab,	// (0x0002fa1c) main_mobtv_pane_ParamLimits

0x18ab,	// (0x0002fa1c) main_mobtv_pane

0x7a4c,	// (0x00035bbd) main_cset6_slider_pane_g18_ParamLimits

0x7a4c,	// (0x00035bbd) main_cset6_slider_pane_g18

0x7a58,	// (0x00035bc9) main_cset6_slider_pane_g19_ParamLimits

0x7a58,	// (0x00035bc9) main_cset6_slider_pane_g19

0x7e4a,	// (0x00035fbb) bg_main_mobtv_pane_ParamLimits

0x7e4a,	// (0x00035fbb) bg_main_mobtv_pane

0x7e58,	// (0x00035fc9) main_mobtv_info_pane

0x7e61,	// (0x00035fd2) main_mobtv_loading_pane_ParamLimits

0x7e61,	// (0x00035fd2) main_mobtv_loading_pane

0xde9f,	// (0x0003c010) main_mobtv_pg_channel_list_pane

0xdea9,	// (0x0003c01a) main_mobtv_pg_hdr_pane

0x7e6e,	// (0x00035fdf) main_mobtv_programe_curr_pane_ParamLimits

0x7e6e,	// (0x00035fdf) main_mobtv_programe_curr_pane

0x7e7b,	// (0x00035fec) main_mobtv_programe_next_pane_ParamLimits

0x7e7b,	// (0x00035fec) main_mobtv_programe_next_pane

0xdeb2,	// (0x0003c023) popup_mobtv_noti_window

0xc739,	// (0x0003a8aa) main_tv_pg_hdr_pane_g1

0xdeba,	// (0x0003c02b) main_tv_pg_hdr_pane_g2

0xdec2,	// (0x0003c033) main_tv_pg_hdr_pane_g3

0xdeca,	// (0x0003c03b) main_tv_pg_hdr_pane_g4

0xded2,	// (0x0003c043) main_tv_pg_hdr_pane_g5

0xdedc,	// (0x0003c04d) main_tv_pg_hdr_pane_g6

0xdee6,	// (0x0003c057) main_tv_pg_hdr_pane_g7

0xdef0,	// (0x0003c061) main_tv_pg_hdr_pane_g8

0xdefa,	// (0x0003c06b) main_tv_pg_hdr_pane_g9

0xdf04,	// (0x0003c075) main_tv_pg_hdr_pane_g10

0xdf0e,	// (0x0003c07f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0003dd8c) main_tv_pg_hdr_pane_g

0xdf18,	// (0x0003c089) main_tv_pg_hdr_pane_t1

0xdf26,	// (0x0003c097) main_tv_pg_hdr_pane_t2

0xdf34,	// (0x0003c0a5) main_tv_pg_hdr_pane_t3

0xdf44,	// (0x0003c0b5) main_tv_pg_hdr_pane_t4

0xdf54,	// (0x0003c0c5) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0003dda3) main_tv_pg_hdr_pane_t

0xdf64,	// (0x0003c0d5) single_mobtv_pg_channel_pane_ParamLimits

0xdf64,	// (0x0003c0d5) single_mobtv_pg_channel_pane

0xdf76,	// (0x0003c0e7) single_mobtv_pg_channel_table_pane

0xa7e5,	// (0x00038956) single_mobtv_pg_channel_thumb_pane

0xdf7f,	// (0x0003c0f0) single_tv_pg_channel_pane_g1

0xdf88,	// (0x0003c0f9) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0003ddae) single_tv_pg_channel_pane_g

0xc987,	// (0x0003aaf8) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc987,	// (0x0003aaf8) bg_single_mobtv_pg_channel_thumb_pane

0xdf91,	// (0x0003c102) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf91,	// (0x0003c102) single_mobtv_pg_channel_thumb_pane_g1

0xdf9f,	// (0x0003c110) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf9f,	// (0x0003c110) single_mobtv_pg_channel_thumb_pane_g2

0xdfab,	// (0x0003c11c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfab,	// (0x0003c11c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0003ddb3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0003ddb3) single_mobtv_pg_channel_thumb_pane_g

0xdfb7,	// (0x0003c128) single_mobtv_pg_channel_thumb_pane_t1

0xdfc5,	// (0x0003c136) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0003ddba) single_mobtv_pg_channel_thumb_pane_t

0xc739,	// (0x0003a8aa) bg_single_mobtv_pg_channel_table_pane_g1

0xc739,	// (0x0003a8aa) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0003d860) bg_single_mobtv_pg_channel_table_pane_g

0xdfd3,	// (0x0003c144) single_mobtv_pg_channel_table_pane_t1

0xdfe1,	// (0x0003c152) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0003ddbf) single_mobtv_pg_channel_table_pane_t

0x7e90,	// (0x00036001) main_mobtv_info_pane_g1_ParamLimits

0x7e90,	// (0x00036001) main_mobtv_info_pane_g1

0x7eae,	// (0x0003601f) main_mobtv_info_pane_t1_ParamLimits

0x7eae,	// (0x0003601f) main_mobtv_info_pane_t1

0x7f26,	// (0x00036097) main_mobtv_info_pane_t2_ParamLimits

0x7f26,	// (0x00036097) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0003ddc9) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0003ddc9) main_mobtv_info_pane_t

0x7fb5,	// (0x00036126) wait_bar_pane_cp05

0x7fc7,	// (0x00036138) main_mobtv_loading_pane_g1_ParamLimits

0x7fc7,	// (0x00036138) main_mobtv_loading_pane_g1

0x7fda,	// (0x0003614b) main_mobtv_loading_pane_g2_ParamLimits

0x7fda,	// (0x0003614b) main_mobtv_loading_pane_g2

0x7fe6,	// (0x00036157) main_mobtv_loading_pane_g3_ParamLimits

0x7fe6,	// (0x00036157) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0003ddd0) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0003ddd0) main_mobtv_loading_pane_g

0xdfef,	// (0x0003c160) main_mobtv_loading_pane_t1_ParamLimits

0xdfef,	// (0x0003c160) main_mobtv_loading_pane_t1

0xe007,	// (0x0003c178) main_mobtv_loading_pane_t2_ParamLimits

0xe007,	// (0x0003c178) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0003ddd7) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0003ddd7) main_mobtv_loading_pane_t

0x7ff9,	// (0x0003616a) wait_bar_pane_cp06_ParamLimits

0x7ff9,	// (0x0003616a) wait_bar_pane_cp06

0xe02b,	// (0x0003c19c) main_mobtv_programe_curr_pane_t1

0xe039,	// (0x0003c1aa) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0003dddc) main_mobtv_programe_curr_pane_t

0xe047,	// (0x0003c1b8) main_mobtv_programe_next_pane_t1

0xe055,	// (0x0003c1c6) main_mobtv_programe_next_pane_t2

0xe063,	// (0x0003c1d4) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0003dde1) main_mobtv_programe_next_pane_t

0x9b3d,	// (0x00037cae) bg_popup_mobtv_noti_window_pane

0xe071,	// (0x0003c1e2) popup_mobtv_noti_window_g1

0xe079,	// (0x0003c1ea) popup_mobtv_noti_window_t1

0xe087,	// (0x0003c1f8) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0003dde8) popup_mobtv_noti_window_t

0xc739,	// (0x0003a8aa) bg_popup_mobtv_noti_window_pane_g1

0x18c5,	// (0x0002fa36) sc_clock_pane

0x18c5,	// (0x0002fa36) main_fs_bigclock_pane

0x76e1,	// (0x00035852) blid2_tripm_pane_t4_ParamLimits

0x76e1,	// (0x00035852) blid2_tripm_pane_t4

0x8008,	// (0x00036179) sc_clock_pane_g1_ParamLimits

0x8008,	// (0x00036179) sc_clock_pane_g1

0x801a,	// (0x0003618b) sc_clock_pane_t1_ParamLimits

0x801a,	// (0x0003618b) sc_clock_pane_t1

0x803c,	// (0x000361ad) sc_clock_pane_t2_ParamLimits

0x803c,	// (0x000361ad) sc_clock_pane_t2

0x8054,	// (0x000361c5) sc_clock_pane_t3_ParamLimits

0x8054,	// (0x000361c5) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0003dded) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0003dded) sc_clock_pane_t

0x9029,	// (0x0003719a) main_fs_bigclock_indicator_pane_ParamLimits

0x9029,	// (0x0003719a) main_fs_bigclock_indicator_pane

0x80f4,	// (0x00036265) main_fs_bigclock_pane_g1_ParamLimits

0x80f4,	// (0x00036265) main_fs_bigclock_pane_g1

0x9035,	// (0x000371a6) main_fs_bigclock_pane_t1_ParamLimits

0x9035,	// (0x000371a6) main_fs_bigclock_pane_t1

0x9047,	// (0x000371b8) main_fs_bigclock_pane_t2_ParamLimits

0x9047,	// (0x000371b8) main_fs_bigclock_pane_t2

0x905b,	// (0x000371cc) main_fs_bigclock_pane_t3_ParamLimits

0x905b,	// (0x000371cc) main_fs_bigclock_pane_t3

0x0002,

0xfe81,	// (0x0003dff2) main_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0003dff2) main_fs_bigclock_pane_t

0xec7f,	// (0x0003cdf0) main_fs_bigclock_indicator_pane_g1

0xdd62,	// (0x0003bed3) ncim_query_content_pane_g2_ParamLimits

0xdd62,	// (0x0003bed3) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0003dd7a) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0003dd7a) ncim_query_content_pane_g

0x806d,	// (0x000361de) sc_clock_pane_t4_ParamLimits

0x806d,	// (0x000361de) sc_clock_pane_t4

0x18ab,	// (0x0002fa1c) main_radioblah_pane

0xd167,	// (0x0003b2d8) cell_call4_button_pane_t1_copy1_ParamLimits

0xd167,	// (0x0003b2d8) cell_call4_button_pane_t1_copy1

0x7c9b,	// (0x00035e0c) main_ncimui_pane_t1_ParamLimits

0x7c9b,	// (0x00035e0c) main_ncimui_pane_t1

0x7cb5,	// (0x00035e26) main_ncimui_pane_t2_ParamLimits

0x7cb5,	// (0x00035e26) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0003dd73) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0003dd73) main_ncimui_pane_t

0xe1cc,	// (0x0003c33d) main_radioblah_anim_pane_ParamLimits

0xe1cc,	// (0x0003c33d) main_radioblah_anim_pane

0xe1dd,	// (0x0003c34e) main_radioblah_info_pane_ParamLimits

0xe1dd,	// (0x0003c34e) main_radioblah_info_pane

0xe1f1,	// (0x0003c362) main_radioblah_pane_t1_ParamLimits

0xe1f1,	// (0x0003c362) main_radioblah_pane_t1

0xe20d,	// (0x0003c37e) main_radioblah_pane_t2_ParamLimits

0xe20d,	// (0x0003c37e) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0003de0e) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0003de0e) main_radioblah_pane_t

0x814c,	// (0x000362bd) main_radioblah_rocker_ctrl_pane_ParamLimits

0x814c,	// (0x000362bd) main_radioblah_rocker_ctrl_pane

0xe255,	// (0x0003c3c6) main_radioblah_info_pane_t1_ParamLimits

0xe255,	// (0x0003c3c6) main_radioblah_info_pane_t1

0x81a4,	// (0x00036315) main_radioblah_info_pane_t2_ParamLimits

0x81a4,	// (0x00036315) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0003de17) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0003de17) main_radioblah_info_pane_t

0xc739,	// (0x0003a8aa) main_radioblah_rocker_ctrl_pane_g1

0x8254,	// (0x000363c5) main_radioblah_rocker_ctrl_pane_g2

0x825c,	// (0x000363cd) main_radioblah_rocker_ctrl_pane_g3

0x8264,	// (0x000363d5) main_radioblah_rocker_ctrl_pane_g4

0x826c,	// (0x000363dd) main_radioblah_rocker_ctrl_pane_g5

0x8274,	// (0x000363e5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0003de20) main_radioblah_rocker_ctrl_pane_g

0x795c,	// (0x00035acd) main_cset_text2_pane_t1_copy1_ParamLimits

0x657f,	// (0x000346f0) cam4_image_uncrop_qvga_pane

0x65f4,	// (0x00034765) vid4_image_uncrop_qcif_pane

0xa81e,	// (0x0003898f) cam6_image_uncrop_qvga_pane_ParamLimits

0xa81e,	// (0x0003898f) cam6_image_uncrop_qvga_pane

0xda11,	// (0x0003bb82) vid6_image_uncrop_qcif_pane_ParamLimits

0xda11,	// (0x0003bb82) vid6_image_uncrop_qcif_pane

0x9b3d,	// (0x00037cae) bg_popup_preview_window_pane_cp03

0xdd14,	// (0x0003be85) list_cset_text2_pane

0xdd1c,	// (0x0003be8d) main_cset6_text2_pane_g1

0xdd24,	// (0x0003be95) main_cset6_text2_pane_t1

0xe8bc,	// (0x0003ca2d) list_cset_text2_pane_t1_ParamLimits

0xe8bc,	// (0x0003ca2d) list_cset_text2_pane_t1

0x18ab,	// (0x0002fa1c) main_radioblah_pane_ParamLimits

0x7fa1,	// (0x00036112) main_mobtv_info_pane_t3_ParamLimits

0x7fa1,	// (0x00036112) main_mobtv_info_pane_t3

0x813a,	// (0x000362ab) main_radioblah_pane_g1

0x8174,	// (0x000362e5) main_radioblah_info_pane_g1

0x81f9,	// (0x0003636a) main_radioblah_info_pane_t3_ParamLimits

0x81f9,	// (0x0003636a) main_radioblah_info_pane_t3

0x360c,	// (0x0003177d) highlight_cell_cale_month_pane_ParamLimits

0x360c,	// (0x0003177d) highlight_cell_cale_month_pane

0x18c5,	// (0x0002fa36) main_phob_fisheye_pane

0xcad7,	// (0x0003ac48) scroll_pane_cp0031_ParamLimits

0xcad7,	// (0x0003ac48) scroll_pane_cp0031

0xdb1f,	// (0x0003bc90) wait_bar_pane_cp08_ParamLimits

0x79de,	// (0x00035b4f) cset_list_set_pane_copy1_ParamLimits

0xe28f,	// (0x0003c400) highlight_cell_cale_month_pane_g1

0x827c,	// (0x000363ed) highlight_cell_cale_month_pane_t1

0xd792,	// (0x0003b903) list_gen_pane_cp01

0xd34b,	// (0x0003b4bc) scroll_pane_01

0x828a,	// (0x000363fb) list_single_double_fisheye_pane

0x8293,	// (0x00036404) list_double_fisheye_pane_g1_ParamLimits

0x8293,	// (0x00036404) list_double_fisheye_pane_g1

0x829f,	// (0x00036410) list_double_fisheye_pane_g2_ParamLimits

0x829f,	// (0x00036410) list_double_fisheye_pane_g2

0x82b3,	// (0x00036424) list_double_fisheye_pane_g3_ParamLimits

0x82b3,	// (0x00036424) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0003de2d) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0003de2d) list_double_fisheye_pane_g

0x82dc,	// (0x0003644d) list_double_fisheye_pane_t1_ParamLimits

0x82dc,	// (0x0003644d) list_double_fisheye_pane_t1

0x82f7,	// (0x00036468) list_double_fisheye_pane_t2_ParamLimits

0x82f7,	// (0x00036468) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0003de38) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0003de38) list_double_fisheye_pane_t

0x18c5,	// (0x0002fa36) main_call5_pane

0x8098,	// (0x00036209) sc_swipe_pane_ParamLimits

0x8098,	// (0x00036209) sc_swipe_pane

0x832c,	// (0x0003649d) call5_image_pane_ParamLimits

0x832c,	// (0x0003649d) call5_image_pane

0x8349,	// (0x000364ba) call5_swipe_1_pane_ParamLimits

0x8349,	// (0x000364ba) call5_swipe_1_pane

0x835c,	// (0x000364cd) call5_swipe_2_pane_ParamLimits

0x835c,	// (0x000364cd) call5_swipe_2_pane

0x8387,	// (0x000364f8) popup_call5_audio_first_window_ParamLimits

0x8387,	// (0x000364f8) popup_call5_audio_first_window

0xc987,	// (0x0003aaf8) call5_swipe_1_pane_g1_ParamLimits

0xc987,	// (0x0003aaf8) call5_swipe_1_pane_g1

0xe297,	// (0x0003c408) call5_swipe_1_pane_g2_ParamLimits

0xe297,	// (0x0003c408) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0003de3d) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0003de3d) call5_swipe_1_pane_g

0xe2a3,	// (0x0003c414) call5_swipe_1_pane_t1_ParamLimits

0xe2a3,	// (0x0003c414) call5_swipe_1_pane_t1

0xc987,	// (0x0003aaf8) call5_swipe_2_pane_g1_ParamLimits

0xc987,	// (0x0003aaf8) call5_swipe_2_pane_g1

0xe2b8,	// (0x0003c429) call5_swipe_2_pane_g2_ParamLimits

0xe2b8,	// (0x0003c429) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0003de42) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0003de42) call5_swipe_2_pane_g

0xe2c4,	// (0x0003c435) call5_swipe_2_pane_t1_ParamLimits

0xe2c4,	// (0x0003c435) call5_swipe_2_pane_t1

0xe2d9,	// (0x0003c44a) sc_swipe_pane_g1_ParamLimits

0xe2d9,	// (0x0003c44a) sc_swipe_pane_g1

0xe2e6,	// (0x0003c457) sc_swipe_pane_g2_ParamLimits

0xe2e6,	// (0x0003c457) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0003de47) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0003de47) sc_swipe_pane_g

0xe2f2,	// (0x0003c463) sc_swipe_pane_t1_ParamLimits

0xe2f2,	// (0x0003c463) sc_swipe_pane_t1

0x18c5,	// (0x0002fa36) main_cmail_launcher_pane

0x8398,	// (0x00036509) aid_size_cell_cmail_l_ParamLimits

0x8398,	// (0x00036509) aid_size_cell_cmail_l

0x83b2,	// (0x00036523) grid_cmail_l_pane_ParamLimits

0x83b2,	// (0x00036523) grid_cmail_l_pane

0x83cc,	// (0x0003653d) cell_cmail_l_pane_ParamLimits

0x83cc,	// (0x0003653d) cell_cmail_l_pane

0x83f2,	// (0x00036563) cell_cmail_l_pane_g1_ParamLimits

0x83f2,	// (0x00036563) cell_cmail_l_pane_g1

0x8403,	// (0x00036574) cell_cmail_l_pane_t1_ParamLimits

0x8403,	// (0x00036574) cell_cmail_l_pane_t1

0xe307,	// (0x0003c478) cell_cmail_l_pane_t2_ParamLimits

0xe307,	// (0x0003c478) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0003de4c) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0003de4c) cell_cmail_l_pane_t

0xa810,	// (0x00038981) grid_highlight_pane_cp018_ParamLimits

0xa810,	// (0x00038981) grid_highlight_pane_cp018

0x0144,	// (0x0002e2b5) main2_pane_ParamLimits

0x0144,	// (0x0002e2b5) main2_pane

0xa331,	// (0x000384a2) popup_sp_fs_action_menu_bg_pane_g1

0xa339,	// (0x000384aa) popup_sp_fs_action_menu_bg_pane_g2

0xa341,	// (0x000384b2) popup_sp_fs_action_menu_bg_pane_g3

0xa349,	// (0x000384ba) popup_sp_fs_action_menu_bg_pane_g4

0xa351,	// (0x000384c2) popup_sp_fs_action_menu_bg_pane_g5

0xa359,	// (0x000384ca) popup_sp_fs_action_menu_bg_pane_g6

0xa361,	// (0x000384d2) popup_sp_fs_action_menu_bg_pane_g7

0xa369,	// (0x000384da) popup_sp_fs_action_menu_bg_pane_g8

0xa371,	// (0x000384e2) popup_sp_fs_action_menu_bg_pane_g9

0xa379,	// (0x000384ea) popup_sp_fs_action_menu_bg_pane_g10

0xa379,	// (0x000384ea) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0003d2fb) popup_sp_fs_action_menu_bg_pane_g

0x2582,	// (0x000306f3) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2582,	// (0x000306f3) list_medium_line_x2_t3_g3_g1

0x258e,	// (0x000306ff) list_medium_line_x2_t3_g3_g2_ParamLimits

0x258e,	// (0x000306ff) list_medium_line_x2_t3_g3_g2

0x259a,	// (0x0003070b) list_medium_line_x2_t3_g3_g3_ParamLimits

0x259a,	// (0x0003070b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0003d3a9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0003d3a9) list_medium_line_x2_t3_g3_g

0x25a6,	// (0x00030717) list_medium_line_x2_t3_g3_t1_ParamLimits

0x25a6,	// (0x00030717) list_medium_line_x2_t3_g3_t1

0x25bb,	// (0x0003072c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x25bb,	// (0x0003072c) list_medium_line_x2_t3_g3_t2

0x25cf,	// (0x00030740) list_medium_line_x2_t3_g3_t3_ParamLimits

0x25cf,	// (0x00030740) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0003d3b0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0003d3b0) list_medium_line_x2_t3_g3_t

0x2582,	// (0x000306f3) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2582,	// (0x000306f3) list_medium_line_x2_t3_g2_g1

0x259a,	// (0x0003070b) list_medium_line_x2_t3_g2_g2_ParamLimits

0x259a,	// (0x0003070b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0003d3b7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0003d3b7) list_medium_line_x2_t3_g2_g

0x25e4,	// (0x00030755) list_medium_line_x2_t3_g2_t1_ParamLimits

0x25e4,	// (0x00030755) list_medium_line_x2_t3_g2_t1

0x25fa,	// (0x0003076b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x25fa,	// (0x0003076b) list_medium_line_x2_t3_g2_t2

0x260c,	// (0x0003077d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x260c,	// (0x0003077d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0003d3bc) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0003d3bc) list_medium_line_x2_t3_g2_t

0x2582,	// (0x000306f3) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2582,	// (0x000306f3) list_medium_line_x2_t4_g4_g1

0x262a,	// (0x0003079b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x262a,	// (0x0003079b) list_medium_line_x2_t4_g4_g2

0x258e,	// (0x000306ff) list_medium_line_x2_t4_g4_g3_ParamLimits

0x258e,	// (0x000306ff) list_medium_line_x2_t4_g4_g3

0x2636,	// (0x000307a7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2636,	// (0x000307a7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0003d3c3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0003d3c3) list_medium_line_x2_t4_g4_g

0x2642,	// (0x000307b3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2642,	// (0x000307b3) list_medium_line_x2_t4_g4_t1

0x2659,	// (0x000307ca) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2659,	// (0x000307ca) list_medium_line_x2_t4_g4_t2

0x266e,	// (0x000307df) list_medium_line_x2_t4_g4_t3_ParamLimits

0x266e,	// (0x000307df) list_medium_line_x2_t4_g4_t3

0x2680,	// (0x000307f1) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2680,	// (0x000307f1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0003d3cc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0003d3cc) list_medium_line_x2_t4_g4_t

0x2582,	// (0x000306f3) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2582,	// (0x000306f3) list_medium_line_x2_t2_g4_g1

0x262a,	// (0x0003079b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x262a,	// (0x0003079b) list_medium_line_x2_t2_g4_g2

0x258e,	// (0x000306ff) list_medium_line_x2_t2_g4_g3_ParamLimits

0x258e,	// (0x000306ff) list_medium_line_x2_t2_g4_g3

0x259a,	// (0x0003070b) list_medium_line_x2_t2_g4_g4_ParamLimits

0x259a,	// (0x0003070b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0003d433) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0003d433) list_medium_line_x2_t2_g4_g

0x3632,	// (0x000317a3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3632,	// (0x000317a3) list_medium_line_x2_t2_g4_t1

0x25cf,	// (0x00030740) list_medium_line_x2_t2_g4_t2_ParamLimits

0x25cf,	// (0x00030740) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0003d43c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0003d43c) list_medium_line_x2_t2_g4_t

0x2582,	// (0x000306f3) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2582,	// (0x000306f3) list_medium_line_x2_t2_g3_g1

0x258e,	// (0x000306ff) list_medium_line_x2_t2_g3_g2_ParamLimits

0x258e,	// (0x000306ff) list_medium_line_x2_t2_g3_g2

0x259a,	// (0x0003070b) list_medium_line_x2_t2_g3_g3_ParamLimits

0x259a,	// (0x0003070b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0003d3a9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0003d3a9) list_medium_line_x2_t2_g3_g

0x3647,	// (0x000317b8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3647,	// (0x000317b8) list_medium_line_x2_t2_g3_t1

0x25cf,	// (0x00030740) list_medium_line_x2_t2_g3_t2_ParamLimits

0x25cf,	// (0x00030740) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0003d441) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0003d441) list_medium_line_x2_t2_g3_t

0x37b7,	// (0x00031928) main_sp_fs_list_pane_ParamLimits

0x37b7,	// (0x00031928) main_sp_fs_list_pane

0xcec5,	// (0x0003b036) sp_fs_scroll_pane_ParamLimits

0xcec5,	// (0x0003b036) sp_fs_scroll_pane

0x37c3,	// (0x00031934) list_medium_line_x2_t3_t1

0x37d3,	// (0x00031944) list_medium_line_x2_t3_t2

0x37e1,	// (0x00031952) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0003d48c) list_medium_line_x2_t3_t

0x37ef,	// (0x00031960) list_medium_line_x3_t4_t1

0x37ff,	// (0x00031970) list_medium_line_x3_t4_t2

0x380d,	// (0x0003197e) list_medium_line_x3_t4_t3

0x37e1,	// (0x00031952) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0003d493) list_medium_line_x3_t4_t

0x381b,	// (0x0003198c) list_medium_line_x4_t5_t1

0x382b,	// (0x0003199c) list_medium_line_x4_t5_t2

0x380d,	// (0x0003197e) list_medium_line_x4_t5_t3

0x3839,	// (0x000319aa) list_medium_line_x4_t5_t4

0x37e1,	// (0x00031952) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0003d49c) list_medium_line_x4_t5_t

0x2582,	// (0x000306f3) list_medium_line_t4_g4_g1_ParamLimits

0x2582,	// (0x000306f3) list_medium_line_t4_g4_g1

0x2636,	// (0x000307a7) list_medium_line_t4_g4_g2_ParamLimits

0x2636,	// (0x000307a7) list_medium_line_t4_g4_g2

0x3847,	// (0x000319b8) list_medium_line_t4_g4_g3_ParamLimits

0x3847,	// (0x000319b8) list_medium_line_t4_g4_g3

0x259a,	// (0x0003070b) list_medium_line_t4_g4_g4_ParamLimits

0x259a,	// (0x0003070b) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0003d4a7) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0003d4a7) list_medium_line_t4_g4_g

0x3853,	// (0x000319c4) list_medium_line_t4_g4_t1_ParamLimits

0x3853,	// (0x000319c4) list_medium_line_t4_g4_t1

0x3868,	// (0x000319d9) list_medium_line_t4_g4_t2_ParamLimits

0x3868,	// (0x000319d9) list_medium_line_t4_g4_t2

0x387e,	// (0x000319ef) list_medium_line_t4_g4_t3_ParamLimits

0x387e,	// (0x000319ef) list_medium_line_t4_g4_t3

0x25cf,	// (0x00030740) list_medium_line_t4_g4_t4_ParamLimits

0x25cf,	// (0x00030740) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0003d4b0) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0003d4b0) list_medium_line_t4_g4_t

0x39c6,	// (0x00031b37) chi_dic_find_pane_g1

0x05a7,	// (0x0002e718) main_tport_pane

0xd46d,	// (0x0003b5de) list_medium_line_plain_t1

0x6e29,	// (0x00034f9a) list_medium_line_t2_g2_g1_ParamLimits

0x6e29,	// (0x00034f9a) list_medium_line_t2_g2_g1

0x6e35,	// (0x00034fa6) list_medium_line_t2_g2_g2_ParamLimits

0x6e35,	// (0x00034fa6) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0003db84) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0003db84) list_medium_line_t2_g2_g

0x6e41,	// (0x00034fb2) list_medium_line_t2_g2_t1_ParamLimits

0x6e41,	// (0x00034fb2) list_medium_line_t2_g2_t1

0x6e5b,	// (0x00034fcc) list_medium_line_t2_g2_t2_ParamLimits

0x6e5b,	// (0x00034fcc) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0003db89) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0003db89) list_medium_line_t2_g2_t

0xd79b,	// (0x0003b90c) aid_sp_fs_list_icon_a_sm

0xd7a3,	// (0x0003b914) aid_sp_fs_list_icon_d

0xd7ab,	// (0x0003b91c) aid_sp_fs_text_primary

0xd7b4,	// (0x0003b925) aid_sp_fs_text_secondary

0x748e,	// (0x000355ff) list_medium_line

0x748e,	// (0x000355ff) list_medium_line_g2

0x748e,	// (0x000355ff) list_medium_line_g3

0x748e,	// (0x000355ff) list_medium_line_plain

0x748e,	// (0x000355ff) list_medium_line_plain_t2

0x748e,	// (0x000355ff) list_medium_line_plain_t3

0x748e,	// (0x000355ff) list_medium_line_right_icon

0x748e,	// (0x000355ff) list_medium_line_right_iconx2

0x748e,	// (0x000355ff) list_medium_line_t2

0x748e,	// (0x000355ff) list_medium_line_t2_g2

0x748e,	// (0x000355ff) list_medium_line_t2_g3

0x748e,	// (0x000355ff) list_medium_line_t2_right_icon

0x748e,	// (0x000355ff) list_medium_line_t2_right_iconx2

0x748e,	// (0x000355ff) list_medium_line_t3

0x748e,	// (0x000355ff) list_medium_line_t3_g2

0x748e,	// (0x000355ff) list_medium_line_t3_g3

0x748e,	// (0x000355ff) list_medium_line_t3_right_iconx2

0x7497,	// (0x00035608) list_medium_line_t4_g4

0x74a0,	// (0x00035611) list_medium_line_x2

0x74a0,	// (0x00035611) list_medium_line_x2_t2_g2

0x74a0,	// (0x00035611) list_medium_line_x2_t2_g3

0x74a0,	// (0x00035611) list_medium_line_x2_t2_g4

0x74a0,	// (0x00035611) list_medium_line_x2_t3

0x74a0,	// (0x00035611) list_medium_line_x2_t3_g2

0x74a0,	// (0x00035611) list_medium_line_x2_t3_g3

0x74a0,	// (0x00035611) list_medium_line_x2_t3_g4

0x74a0,	// (0x00035611) list_medium_line_x2_t4_g2

0x74a0,	// (0x00035611) list_medium_line_x2_t4_g4

0x74a9,	// (0x0003561a) list_medium_line_x3

0x74a9,	// (0x0003561a) list_medium_line_x3_t4

0x74a9,	// (0x0003561a) list_medium_line_x3_t4_g4

0x7497,	// (0x00035608) list_medium_line_x4_t4

0x7497,	// (0x00035608) list_medium_line_x4_t4_g7

0x7497,	// (0x00035608) list_medium_line_x4_t5

0x74b2,	// (0x00035623) list_single_fs_dyc_pane_ParamLimits

0x74b2,	// (0x00035623) list_single_fs_dyc_pane

0x2582,	// (0x000306f3) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2582,	// (0x000306f3) list_medium_line_x4_t4_g7_g1

0x7ba0,	// (0x00035d11) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7ba0,	// (0x00035d11) list_medium_line_x4_t4_g7_g2

0x7bac,	// (0x00035d1d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7bac,	// (0x00035d1d) list_medium_line_x4_t4_g7_g3

0x7bbb,	// (0x00035d2c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7bbb,	// (0x00035d2c) list_medium_line_x4_t4_g7_g4

0x7bc7,	// (0x00035d38) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7bc7,	// (0x00035d38) list_medium_line_x4_t4_g7_g5

0x7bd6,	// (0x00035d47) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7bd6,	// (0x00035d47) list_medium_line_x4_t4_g7_g6

0x7be5,	// (0x00035d56) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7be5,	// (0x00035d56) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0003dd54) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0003dd54) list_medium_line_x4_t4_g7_g

0x7bf1,	// (0x00035d62) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7bf1,	// (0x00035d62) list_medium_line_x4_t4_g7_t1

0x7c06,	// (0x00035d77) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c06,	// (0x00035d77) list_medium_line_x4_t4_g7_t2

0x7c1b,	// (0x00035d8c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c1b,	// (0x00035d8c) list_medium_line_x4_t4_g7_t3

0x7c30,	// (0x00035da1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c30,	// (0x00035da1) list_medium_line_x4_t4_g7_t4

0x7c42,	// (0x00035db3) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c42,	// (0x00035db3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0003dd63) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0003dd63) list_medium_line_x4_t4_g7_t

0x7c54,	// (0x00035dc5) list_single_dyc_row_pane_ParamLimits

0x7c54,	// (0x00035dc5) list_single_dyc_row_pane

0x8319,	// (0x0003648a) call5_gesture_pane_ParamLimits

0x8319,	// (0x0003648a) call5_gesture_pane

0x836f,	// (0x000364e0) call5_windows_pane_ParamLimits

0x836f,	// (0x000364e0) call5_windows_pane

0x8419,	// (0x0003658a) call5_swipe_1_pane_cp_ParamLimits

0x8419,	// (0x0003658a) call5_swipe_1_pane_cp

0x8425,	// (0x00036596) call5_swipe_2_pane_cp_ParamLimits

0x8425,	// (0x00036596) call5_swipe_2_pane_cp

0xa489,	// (0x000385fa) call5_image_pane_cp

0x8431,	// (0x000365a2) popup_call5_audio_first_window_cp_ParamLimits

0x8431,	// (0x000365a2) popup_call5_audio_first_window_cp

0xe2d9,	// (0x0003c44a) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2d9,	// (0x0003c44a) call5_swipe_1_pane_g1_cp

0xe319,	// (0x0003c48a) call5_swipe_1_pane_g2_cp

0xe2f2,	// (0x0003c463) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2f2,	// (0x0003c463) call5_swipe_1_pane_t1_cp

0xe2d9,	// (0x0003c44a) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2d9,	// (0x0003c44a) call5_swipe_2_pane_g1_cp

0xe321,	// (0x0003c492) call5_swipe_2_pane_g2_cp

0xe329,	// (0x0003c49a) call5_swipe_2_pane_t1_cp_ParamLimits

0xe329,	// (0x0003c49a) call5_swipe_2_pane_t1_cp

0xa810,	// (0x00038981) main_sp_fs_email_pane

0xe33e,	// (0x0003c4af) main_sp_fs_listscroll_pane_te

0x843f,	// (0x000365b0) popup_sp_fs_action_menu_pane_ParamLimits

0x843f,	// (0x000365b0) popup_sp_fs_action_menu_pane

0xc739,	// (0x0003a8aa) bg_sp_fs_ctrlbar_pane_g1

0xe347,	// (0x0003c4b8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe350,	// (0x0003c4c1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe359,	// (0x0003c4ca) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc739,	// (0x0003a8aa) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0003de51) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc51e,	// (0x0003a68f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc51e,	// (0x0003a68f) bg_sp_fs_ctrlbar_ddmenu_pane

0xe362,	// (0x0003c4d3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe362,	// (0x0003c4d3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe36e,	// (0x0003c4df) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe36e,	// (0x0003c4df) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0003de5a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0003de5a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe37a,	// (0x0003c4eb) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe37a,	// (0x0003c4eb) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8483,	// (0x000365f4) list_medium_line_t2_right_icon_g1

0x848b,	// (0x000365fc) list_medium_line_t2_right_icon_t1

0x849b,	// (0x0003660c) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0003de5f) list_medium_line_t2_right_icon_t

0xc331,	// (0x0003a4a2) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc331,	// (0x0003a4a2) bg_sp_fs_ctrlbar_pane

0x84f5,	// (0x00036666) main_sp_fs_ctrlbar_button_pane_cp01

0x84ff,	// (0x00036670) main_sp_fs_ctrlbar_ddmenu_pane

0xe3cc,	// (0x0003c53d) main_sp_fs_ctrlbar_pane_g1

0xe3d8,	// (0x0003c549) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0003de64) main_sp_fs_ctrlbar_pane_g

0xe3e4,	// (0x0003c555) main_sp_fs_ctrlbar_pane_t1

0x8509,	// (0x0003667a) main_sp_fs_ctrlbar_pane

0x852d,	// (0x0003669e) main_sp_fs_listscroll_pane_te_cp01

0x854d,	// (0x000366be) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x854d,	// (0x000366be) popup_sp_fs_action_menu_pane_cp01

0xa810,	// (0x00038981) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa810,	// (0x00038981) bg_sp_fs_highlight_list_pane_cp01

0xe414,	// (0x0003c585) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe414,	// (0x0003c585) sp_fs_action_menu_list_gene_pane_g1

0xe423,	// (0x0003c594) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe423,	// (0x0003c594) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0003de6e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0003de6e) sp_fs_action_menu_list_gene_pane_g

0xe430,	// (0x0003c5a1) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe430,	// (0x0003c5a1) sp_fs_action_menu_list_gene_pane_t1

0xe448,	// (0x0003c5b9) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe448,	// (0x0003c5b9) sp_fs_action_menu_list_gene_pane

0xe467,	// (0x0003c5d8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe467,	// (0x0003c5d8) popup_sp_fs_action_menu_bg_pane

0xe475,	// (0x0003c5e6) sp_fs_action_menu_list_pane_ParamLimits

0xe475,	// (0x0003c5e6) sp_fs_action_menu_list_pane

0x857d,	// (0x000366ee) sp_fs_scroll_pane_cp01_ParamLimits

0x857d,	// (0x000366ee) sp_fs_scroll_pane_cp01

0x85a3,	// (0x00036714) list_medium_line_plain_t2_t1

0x85b3,	// (0x00036724) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0003de73) list_medium_line_plain_t2_t

0x85c3,	// (0x00036734) list_medium_line_plain_t3_t1

0x85d3,	// (0x00036744) list_medium_line_plain_t3_t2

0x85e1,	// (0x00036752) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0003de78) list_medium_line_plain_t3_t

0x2582,	// (0x000306f3) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2582,	// (0x000306f3) list_medium_line_x2_t2_g2_g1

0x259a,	// (0x0003070b) list_medium_line_x2_t2_g2_g2_ParamLimits

0x259a,	// (0x0003070b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0003d3b7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0003d3b7) list_medium_line_x2_t2_g2_g

0x3853,	// (0x000319c4) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3853,	// (0x000319c4) list_medium_line_x2_t2_g2_t1

0x25cf,	// (0x00030740) list_medium_line_x2_t2_g2_t2_ParamLimits

0x25cf,	// (0x00030740) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0003de7f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0003de7f) list_medium_line_x2_t2_g2_t

0x2582,	// (0x000306f3) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2582,	// (0x000306f3) list_medium_line_x2_t4_g2_g1

0x259a,	// (0x0003070b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x259a,	// (0x0003070b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0003d3b7) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0003d3b7) list_medium_line_x2_t4_g2_g

0x85ef,	// (0x00036760) list_medium_line_x2_t4_g2_t1_ParamLimits

0x85ef,	// (0x00036760) list_medium_line_x2_t4_g2_t1

0x8606,	// (0x00036777) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8606,	// (0x00036777) list_medium_line_x2_t4_g2_t2

0x861b,	// (0x0003678c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x861b,	// (0x0003678c) list_medium_line_x2_t4_g2_t3

0x25cf,	// (0x00030740) list_medium_line_x2_t4_g2_t4_ParamLimits

0x25cf,	// (0x00030740) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0003de84) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0003de84) list_medium_line_x2_t4_g2_t

0x862d,	// (0x0003679e) list_medium_line_t3_right_iconx2_g1

0x8483,	// (0x000365f4) list_medium_line_t3_right_iconx2_g2

0x8635,	// (0x000367a6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0003de8d) list_medium_line_t3_right_iconx2_g

0x863f,	// (0x000367b0) list_medium_line_t3_right_iconx2_t1

0x864f,	// (0x000367c0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0003de94) list_medium_line_t3_right_iconx2_t

0x2582,	// (0x000306f3) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2582,	// (0x000306f3) list_medium_line_x3_t4_g4_g1

0x258e,	// (0x000306ff) list_medium_line_x3_t4_g4_g2_ParamLimits

0x258e,	// (0x000306ff) list_medium_line_x3_t4_g4_g2

0x2636,	// (0x000307a7) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2636,	// (0x000307a7) list_medium_line_x3_t4_g4_g3

0x865d,	// (0x000367ce) list_medium_line_x3_t4_g4_g4_ParamLimits

0x865d,	// (0x000367ce) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0003de99) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0003de99) list_medium_line_x3_t4_g4_g

0x8669,	// (0x000367da) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8669,	// (0x000367da) list_medium_line_x3_t4_g4_t1

0x8680,	// (0x000367f1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8680,	// (0x000367f1) list_medium_line_x3_t4_g4_t2

0x869b,	// (0x0003680c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x869b,	// (0x0003680c) list_medium_line_x3_t4_g4_t3

0x86b0,	// (0x00036821) list_medium_line_x3_t4_g4_t4_ParamLimits

0x86b0,	// (0x00036821) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0003dea2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0003dea2) list_medium_line_x3_t4_g4_t

0x86cd,	// (0x0003683e) list_single_dyc_row_text_pane_t1_ParamLimits

0x86cd,	// (0x0003683e) list_single_dyc_row_text_pane_t1

0x8716,	// (0x00036887) list_single_dyc_row_text_pane_t2_ParamLimits

0x8716,	// (0x00036887) list_single_dyc_row_text_pane_t2

0xe495,	// (0x0003c606) list_single_dyc_row_text_pane_t3_ParamLimits

0xe495,	// (0x0003c606) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3a,	// (0x0003deab) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0003deab) list_single_dyc_row_text_pane_t

0xe4b9,	// (0x0003c62a) list_single_dyc_row_pane_g1_ParamLimits

0xe4b9,	// (0x0003c62a) list_single_dyc_row_pane_g1

0xe4c5,	// (0x0003c636) list_single_dyc_row_pane_g2_ParamLimits

0xe4c5,	// (0x0003c636) list_single_dyc_row_pane_g2

0xe4d1,	// (0x0003c642) list_single_dyc_row_pane_g3_ParamLimits

0xe4d1,	// (0x0003c642) list_single_dyc_row_pane_g3

0xe4dd,	// (0x0003c64e) list_single_dyc_row_pane_g4_ParamLimits

0xe4dd,	// (0x0003c64e) list_single_dyc_row_pane_g4

0x0003,

0xfd47,	// (0x0003deb8) list_single_dyc_row_pane_g_ParamLimits

0xfd47,	// (0x0003deb8) list_single_dyc_row_pane_g

0xe4e9,	// (0x0003c65a) list_single_dyc_row_text_pane_ParamLimits

0xe4e9,	// (0x0003c65a) list_single_dyc_row_text_pane

0x9b3d,	// (0x00037cae) bg_sp_fs_scroll_pane

0xe508,	// (0x0003c679) thumb_sp_fs_scroll_pane

0x6e29,	// (0x00034f9a) list_medium_line_g1_ParamLimits

0x6e29,	// (0x00034f9a) list_medium_line_g1

0xe511,	// (0x0003c682) list_medium_line_t1_ParamLimits

0xe511,	// (0x0003c682) list_medium_line_t1

0x2582,	// (0x000306f3) list_medium_line_x2_g1_ParamLimits

0x2582,	// (0x000306f3) list_medium_line_x2_g1

0x258e,	// (0x000306ff) list_medium_line_x2_g2_ParamLimits

0x258e,	// (0x000306ff) list_medium_line_x2_g2

0x0001,

0xfd50,	// (0x0003dec1) list_medium_line_x2_g_ParamLimits

0xfd50,	// (0x0003dec1) list_medium_line_x2_g

0xe526,	// (0x0003c697) list_medium_line_x2_t1_ParamLimits

0xe526,	// (0x0003c697) list_medium_line_x2_t1

0x2582,	// (0x000306f3) list_medium_line_x3_g1_ParamLimits

0x2582,	// (0x000306f3) list_medium_line_x3_g1

0x258e,	// (0x000306ff) list_medium_line_x3_g2_ParamLimits

0x258e,	// (0x000306ff) list_medium_line_x3_g2

0x0001,

0xfd50,	// (0x0003dec1) list_medium_line_x3_g_ParamLimits

0xfd50,	// (0x0003dec1) list_medium_line_x3_g

0xe526,	// (0x0003c697) list_medium_line_x3_t1_ParamLimits

0xe526,	// (0x0003c697) list_medium_line_x3_t1

0xe53c,	// (0x0003c6ad) thumb_sp_fs_scroll_pane_g1

0xe545,	// (0x0003c6b6) thumb_sp_fs_scroll_pane_g2

0xe54e,	// (0x0003c6bf) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0003dec6) thumb_sp_fs_scroll_pane_g

0xe53c,	// (0x0003c6ad) bg_sp_fs_scroll_pane_g1

0xe545,	// (0x0003c6b6) bg_sp_fs_scroll_pane_g2

0xe54e,	// (0x0003c6bf) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0003dec6) bg_sp_fs_scroll_pane_g

0x2582,	// (0x000306f3) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2582,	// (0x000306f3) list_medium_line_x2_t3_g4_g1

0x262a,	// (0x0003079b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x262a,	// (0x0003079b) list_medium_line_x2_t3_g4_g2

0x258e,	// (0x000306ff) list_medium_line_x2_t3_g4_g3_ParamLimits

0x258e,	// (0x000306ff) list_medium_line_x2_t3_g4_g3

0x259a,	// (0x0003070b) list_medium_line_x2_t3_g4_g4_ParamLimits

0x259a,	// (0x0003070b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0003d433) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0003d433) list_medium_line_x2_t3_g4_g

0x884b,	// (0x000369bc) list_medium_line_x2_t3_g4_t1_ParamLimits

0x884b,	// (0x000369bc) list_medium_line_x2_t3_g4_t1

0x8865,	// (0x000369d6) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8865,	// (0x000369d6) list_medium_line_x2_t3_g4_t2

0x25cf,	// (0x00030740) list_medium_line_x2_t3_g4_t3_ParamLimits

0x25cf,	// (0x00030740) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5c,	// (0x0003decd) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5c,	// (0x0003decd) list_medium_line_x2_t3_g4_t

0x6e29,	// (0x00034f9a) list_medium_line_g2_g1_ParamLimits

0x6e29,	// (0x00034f9a) list_medium_line_g2_g1

0x6e35,	// (0x00034fa6) list_medium_line_g2_g2_ParamLimits

0x6e35,	// (0x00034fa6) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0003db84) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0003db84) list_medium_line_g2_g

0xe557,	// (0x0003c6c8) list_medium_line_g2_t1_ParamLimits

0xe557,	// (0x0003c6c8) list_medium_line_g2_t1

0x6e29,	// (0x00034f9a) list_medium_line_t3_g2_g1_ParamLimits

0x6e29,	// (0x00034f9a) list_medium_line_t3_g2_g1

0x6e35,	// (0x00034fa6) list_medium_line_t3_g2_g2_ParamLimits

0x6e35,	// (0x00034fa6) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0003db84) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0003db84) list_medium_line_t3_g2_g

0x887e,	// (0x000369ef) list_medium_line_t3_g2_t1_ParamLimits

0x887e,	// (0x000369ef) list_medium_line_t3_g2_t1

0x8895,	// (0x00036a06) list_medium_line_t3_g2_t2_ParamLimits

0x8895,	// (0x00036a06) list_medium_line_t3_g2_t2

0x88aa,	// (0x00036a1b) list_medium_line_t3_g2_t3_ParamLimits

0x88aa,	// (0x00036a1b) list_medium_line_t3_g2_t3

0x0002,

0xfd63,	// (0x0003ded4) list_medium_line_t3_g2_t_ParamLimits

0xfd63,	// (0x0003ded4) list_medium_line_t3_g2_t

0x8483,	// (0x000365f4) list_medium_line_right_icon_g1

0xe56c,	// (0x0003c6dd) list_medium_line_right_icon_t1

0x6e29,	// (0x00034f9a) list_medium_line_t2_g1_ParamLimits

0x6e29,	// (0x00034f9a) list_medium_line_t2_g1

0x88c3,	// (0x00036a34) list_medium_line_t2_t1_ParamLimits

0x88c3,	// (0x00036a34) list_medium_line_t2_t1

0x88dd,	// (0x00036a4e) list_medium_line_t2_t2_ParamLimits

0x88dd,	// (0x00036a4e) list_medium_line_t2_t2

0x0001,

0xfd6a,	// (0x0003dedb) list_medium_line_t2_t_ParamLimits

0xfd6a,	// (0x0003dedb) list_medium_line_t2_t

0x6e29,	// (0x00034f9a) list_medium_line_t3_g1_ParamLimits

0x6e29,	// (0x00034f9a) list_medium_line_t3_g1

0x88f6,	// (0x00036a67) list_medium_line_t3_t1_ParamLimits

0x88f6,	// (0x00036a67) list_medium_line_t3_t1

0x890d,	// (0x00036a7e) list_medium_line_t3_t2_ParamLimits

0x890d,	// (0x00036a7e) list_medium_line_t3_t2

0x8922,	// (0x00036a93) list_medium_line_t3_t3_ParamLimits

0x8922,	// (0x00036a93) list_medium_line_t3_t3

0x0002,

0xfd6f,	// (0x0003dee0) list_medium_line_t3_t_ParamLimits

0xfd6f,	// (0x0003dee0) list_medium_line_t3_t

0x6e29,	// (0x00034f9a) list_medium_line_g3_g1_ParamLimits

0x6e29,	// (0x00034f9a) list_medium_line_g3_g1

0x8934,	// (0x00036aa5) list_medium_line_g3_g2_ParamLimits

0x8934,	// (0x00036aa5) list_medium_line_g3_g2

0x6e35,	// (0x00034fa6) list_medium_line_g3_g3_ParamLimits

0x6e35,	// (0x00034fa6) list_medium_line_g3_g3

0x0002,

0xfd76,	// (0x0003dee7) list_medium_line_g3_g_ParamLimits

0xfd76,	// (0x0003dee7) list_medium_line_g3_g

0xe57a,	// (0x0003c6eb) list_medium_line_g3_t1_ParamLimits

0xe57a,	// (0x0003c6eb) list_medium_line_g3_t1

0x6e29,	// (0x00034f9a) list_medium_line_t2_g3_g1_ParamLimits

0x6e29,	// (0x00034f9a) list_medium_line_t2_g3_g1

0x8934,	// (0x00036aa5) list_medium_line_t2_g3_g2_ParamLimits

0x8934,	// (0x00036aa5) list_medium_line_t2_g3_g2

0x6e35,	// (0x00034fa6) list_medium_line_t2_g3_g3_ParamLimits

0x6e35,	// (0x00034fa6) list_medium_line_t2_g3_g3

0x0002,

0xfd76,	// (0x0003dee7) list_medium_line_t2_g3_g_ParamLimits

0xfd76,	// (0x0003dee7) list_medium_line_t2_g3_g

0x8940,	// (0x00036ab1) list_medium_line_t2_g3_t1_ParamLimits

0x8940,	// (0x00036ab1) list_medium_line_t2_g3_t1

0x895a,	// (0x00036acb) list_medium_line_t2_g3_t2_ParamLimits

0x895a,	// (0x00036acb) list_medium_line_t2_g3_t2

0x0001,

0xfd7d,	// (0x0003deee) list_medium_line_t2_g3_t_ParamLimits

0xfd7d,	// (0x0003deee) list_medium_line_t2_g3_t

0x6e29,	// (0x00034f9a) list_medium_line_t3_g3_g1_ParamLimits

0x6e29,	// (0x00034f9a) list_medium_line_t3_g3_g1

0x8934,	// (0x00036aa5) list_medium_line_t3_g3_g2_ParamLimits

0x8934,	// (0x00036aa5) list_medium_line_t3_g3_g2

0x6e35,	// (0x00034fa6) list_medium_line_t3_g3_g3_ParamLimits

0x6e35,	// (0x00034fa6) list_medium_line_t3_g3_g3

0x0002,

0xfd76,	// (0x0003dee7) list_medium_line_t3_g3_g_ParamLimits

0xfd76,	// (0x0003dee7) list_medium_line_t3_g3_g

0x8978,	// (0x00036ae9) list_medium_line_t3_g3_t1_ParamLimits

0x8978,	// (0x00036ae9) list_medium_line_t3_g3_t1

0x8991,	// (0x00036b02) list_medium_line_t3_g3_t2_ParamLimits

0x8991,	// (0x00036b02) list_medium_line_t3_g3_t2

0x89a7,	// (0x00036b18) list_medium_line_t3_g3_t3_ParamLimits

0x89a7,	// (0x00036b18) list_medium_line_t3_g3_t3

0x0002,

0xfd82,	// (0x0003def3) list_medium_line_t3_g3_t_ParamLimits

0xfd82,	// (0x0003def3) list_medium_line_t3_g3_t

0x862d,	// (0x0003679e) list_medium_line_right_iconx2_g1

0x8483,	// (0x000365f4) list_medium_line_right_iconx2_g2

0x0001,

0xfd89,	// (0x0003defa) list_medium_line_right_iconx2_g

0xe58f,	// (0x0003c700) list_medium_line_right_iconx2_t1

0x862d,	// (0x0003679e) list_medium_line_t2_right_iconx2_g1

0x8483,	// (0x000365f4) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd89,	// (0x0003defa) list_medium_line_t2_right_iconx2_g

0x89c1,	// (0x00036b32) list_medium_line_t2_right_iconx2_t1

0x89d1,	// (0x00036b42) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8e,	// (0x0003deff) list_medium_line_t2_right_iconx2_t

0x89e3,	// (0x00036b54) list_medium_line_x4_t4_t1

0x89f1,	// (0x00036b62) list_medium_line_x4_t4_t2

0x8a01,	// (0x00036b72) list_medium_line_x4_t4_t3

0x8a11,	// (0x00036b82) list_medium_line_x4_t4_t4

0x0003,

0xfd93,	// (0x0003df04) list_medium_line_x4_t4_t

0x8a64,	// (0x00036bd5) tport_appsw_pane_ParamLimits

0x8a64,	// (0x00036bd5) tport_appsw_pane

0x8a7c,	// (0x00036bed) tport_contact_pane_ParamLimits

0x8a7c,	// (0x00036bed) tport_contact_pane

0x8a94,	// (0x00036c05) tport_listscroll_pane_ParamLimits

0x8a94,	// (0x00036c05) tport_listscroll_pane

0x8aae,	// (0x00036c1f) cell_tport_appsw_pane_ParamLimits

0x8aae,	// (0x00036c1f) cell_tport_appsw_pane

0xd1f4,	// (0x0003b365) tport_appsw_pane_g1_ParamLimits

0xd1f4,	// (0x0003b365) tport_appsw_pane_g1

0xe59d,	// (0x0003c70e) tport_contact_pane_g1

0xe5a6,	// (0x0003c717) tport_contact_pane_t1

0xe5b4,	// (0x0003c725) tport_contact_pane_t2

0x0001,

0xfd9c,	// (0x0003df0d) tport_contact_pane_t

0xe5c2,	// (0x0003c733) list_tport_pane

0xe5cb,	// (0x0003c73c) scroll_pane_cp_030

0x8af6,	// (0x00036c67) cell_tport_appsw_pane_g1

0x8b06,	// (0x00036c77) cell_tport_appsw_pane_t1

0x8b14,	// (0x00036c85) grid_highlight_pane_cp019

0x8b1c,	// (0x00036c8d) list_tport_double_graphic_pane_ParamLimits

0x8b1c,	// (0x00036c8d) list_tport_double_graphic_pane

0xa810,	// (0x00038981) list_highlight_pane_cp023_ParamLimits

0xa810,	// (0x00038981) list_highlight_pane_cp023

0x8b29,	// (0x00036c9a) list_tport_double_graphic_pane_g1_ParamLimits

0x8b29,	// (0x00036c9a) list_tport_double_graphic_pane_g1

0x8b36,	// (0x00036ca7) list_tport_double_graphic_pane_t1_ParamLimits

0x8b36,	// (0x00036ca7) list_tport_double_graphic_pane_t1

0x8b4b,	// (0x00036cbc) list_tport_double_graphic_pane_t2_ParamLimits

0x8b4b,	// (0x00036cbc) list_tport_double_graphic_pane_t2

0x0001,

0xfda8,	// (0x0003df19) list_tport_double_graphic_pane_t_ParamLimits

0xfda8,	// (0x0003df19) list_tport_double_graphic_pane_t

0x9b3d,	// (0x00037cae) main_cale_note_pane

0x14ad,	// (0x0002f61e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x14ad,	// (0x0002f61e) cell_vitu2_function_top_wide_pane_cp01

0x7fb5,	// (0x00036126) wait_bar_pane_cp05_ParamLimits

0xa810,	// (0x00038981) listscroll_cmail_pane

0xe5d4,	// (0x0003c745) list_cmail_pane

0x8b5d,	// (0x00036cce) list_cmail_body_pane

0x8b71,	// (0x00036ce2) list_single_cmail_header_caption_pane

0x8b88,	// (0x00036cf9) list_single_cmail_header_detail_pane_ParamLimits

0x8b88,	// (0x00036cf9) list_single_cmail_header_detail_pane

0xe5e4,	// (0x0003c755) list_single_cmail_header_caption_pane_t1

0x8bb2,	// (0x00036d23) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8bb2,	// (0x00036d23) list_single_cmail_header_detail_pane_g1

0xe5fb,	// (0x0003c76c) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5fb,	// (0x0003c76c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdad,	// (0x0003df1e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdad,	// (0x0003df1e) list_single_cmail_header_detail_pane_g

0xe614,	// (0x0003c785) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe614,	// (0x0003c785) list_single_cmail_header_detail_pane_t1

0xe674,	// (0x0003c7e5) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe674,	// (0x0003c7e5) list_single_cmail_header_editor_pane_bg

0xdf88,	// (0x0003c0f9) list_cmail_body_pane_g1

0xe68b,	// (0x0003c7fc) list_cmail_body_pane_t1

0xd231,	// (0x0003b3a2) list_single_cmail_header_editor_pane_bg_g1

0xa6e2,	// (0x00038853) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd241,	// (0x0003b3b2) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd239,	// (0x0003b3aa) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd47b,	// (0x0003b5ec) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd261,	// (0x0003b3d2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd251,	// (0x0003b3c2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd259,	// (0x0003b3ca) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa6c2,	// (0x00038833) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8bca,	// (0x00036d3b) calenote_gesture_pane_ParamLimits

0x8bca,	// (0x00036d3b) calenote_gesture_pane

0x8bea,	// (0x00036d5b) calenote_window_pane_ParamLimits

0x8bea,	// (0x00036d5b) calenote_window_pane

0xe699,	// (0x0003c80a) popup_note_window_cp01

0x8c06,	// (0x00036d77) calenote_swipe_1_pane_ParamLimits

0x8c06,	// (0x00036d77) calenote_swipe_1_pane

0x8425,	// (0x00036596) calenote_swipe_2_pane_ParamLimits

0x8425,	// (0x00036596) calenote_swipe_2_pane

0xe2d9,	// (0x0003c44a) calenote_swipe_1_pane_g1_ParamLimits

0xe2d9,	// (0x0003c44a) calenote_swipe_1_pane_g1

0xe2e6,	// (0x0003c457) calenote_swipe_1_pane_g2_ParamLimits

0xe2e6,	// (0x0003c457) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0003de47) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0003de47) calenote_swipe_1_pane_g

0xe6ab,	// (0x0003c81c) calenote_swipe_1_pane_t1_ParamLimits

0xe6ab,	// (0x0003c81c) calenote_swipe_1_pane_t1

0xe2d9,	// (0x0003c44a) calenote_swipe_2_pane_g1_ParamLimits

0xe2d9,	// (0x0003c44a) calenote_swipe_2_pane_g1

0xe6ca,	// (0x0003c83b) calenote_swipe_2_pane_g2_ParamLimits

0xe6ca,	// (0x0003c83b) calenote_swipe_2_pane_g2

0x0001,

0xfdb9,	// (0x0003df2a) calenote_swipe_2_pane_g_ParamLimits

0xfdb9,	// (0x0003df2a) calenote_swipe_2_pane_g

0xe6d6,	// (0x0003c847) calenote_swipe_2_pane_t1_ParamLimits

0xe6d6,	// (0x0003c847) calenote_swipe_2_pane_t1

0x9b3d,	// (0x00037cae) main_mup_navstr_pane

0x579f,	// (0x00033910) main_mup3_pane_t7_ParamLimits

0x579f,	// (0x00033910) main_mup3_pane_t7

0x61c3,	// (0x00034334) main_mp4_pane_g6_ParamLimits

0x61c3,	// (0x00034334) main_mp4_pane_g6

0x640b,	// (0x0003457c) main_image3_pane_t4_ParamLimits

0x640b,	// (0x0003457c) main_image3_pane_t4

0x8c1b,	// (0x00036d8c) popup_navstr_preview_pane_ParamLimits

0x8c1b,	// (0x00036d8c) popup_navstr_preview_pane

0x8c2f,	// (0x00036da0) scroll_navstr_pane_ParamLimits

0x8c2f,	// (0x00036da0) scroll_navstr_pane

0x9b3d,	// (0x00037cae) bg_popup_preview_window_pane_cp04

0xe6fd,	// (0x0003c86e) popup_navstr_preview_pane_t1

0x8c43,	// (0x00036db4) scroll_navstr_pane_g1_ParamLimits

0x8c43,	// (0x00036db4) scroll_navstr_pane_g1

0x8c57,	// (0x00036dc8) scroll_navstr_pane_t1_ParamLimits

0x8c57,	// (0x00036dc8) scroll_navstr_pane_t1

0xe6a2,	// (0x0003c813) bg_button_pane_cp014

0xe6a2,	// (0x0003c813) bg_button_pane_cp030

0x82bf,	// (0x00036430) list_double_fisheye_pane_g4_ParamLimits

0x82bf,	// (0x00036430) list_double_fisheye_pane_g4

0x82cb,	// (0x0003643c) list_double_fisheye_pane_g5_ParamLimits

0x82cb,	// (0x0003643c) list_double_fisheye_pane_g5

0xcec5,	// (0x0003b036) sp_fs_scroll_pane_cp03

0xe3cc,	// (0x0003c53d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3d8,	// (0x0003c549) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0003de64) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3e4,	// (0x0003c555) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5dc,	// (0x0003c74d) sp_fs_scroll_pane_cp02

0xa3c8,	// (0x00038539) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa3c8,	// (0x00038539) popup_sp_fs_calendar_preview_list_single_pane

0x9b3d,	// (0x00037cae) main_cam6_pano_pane

0x18ab,	// (0x0002fa1c) main_mup3_pane_ParamLimits

0x9b3d,	// (0x00037cae) main_phacti_pane

0x7e88,	// (0x00035ff9) bg_button_pane_cp11

0x7ea2,	// (0x00036013) main_mobtv_info_pane_g2_ParamLimits

0x7ea2,	// (0x00036013) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0003ddc4) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0003ddc4) main_mobtv_info_pane_g

0x807f,	// (0x000361f0) sc_clock_pane_t5_ParamLimits

0x807f,	// (0x000361f0) sc_clock_pane_t5

0x813a,	// (0x000362ab) main_radioblah_pane_g1_ParamLimits

0xe225,	// (0x0003c396) main_radioblah_pane_t3_ParamLimits

0xe225,	// (0x0003c396) main_radioblah_pane_t3

0xe23d,	// (0x0003c3ae) main_radioblah_pane_t4_ParamLimits

0xe23d,	// (0x0003c3ae) main_radioblah_pane_t4

0x8162,	// (0x000362d3) main_radioblah_text_pane_ParamLimits

0x8162,	// (0x000362d3) main_radioblah_text_pane

0x8174,	// (0x000362e5) main_radioblah_info_pane_g1_ParamLimits

0x820d,	// (0x0003637e) main_radioblah_info_pane_t4_ParamLimits

0x820d,	// (0x0003637e) main_radioblah_info_pane_t4

0xa810,	// (0x00038981) main_sp_fs_calendar_pane

0x8c6e,	// (0x00036ddf) main_phacti_pane_g1

0x8c76,	// (0x00036de7) phacti_note_pane_ParamLimits

0x8c76,	// (0x00036de7) phacti_note_pane

0xe714,	// (0x0003c885) phacti_term_pane_ParamLimits

0xe714,	// (0x0003c885) phacti_term_pane

0xe729,	// (0x0003c89a) phacti_note_pane_t1_ParamLimits

0xe729,	// (0x0003c89a) phacti_note_pane_t1

0xe740,	// (0x0003c8b1) phacti_term_pane_g1

0xe748,	// (0x0003c8b9) phacti_term_pane_t1_ParamLimits

0xe748,	// (0x0003c8b9) phacti_term_pane_t1

0xe772,	// (0x0003c8e3) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe77a,	// (0x0003c8eb) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc3,	// (0x0003df34) popup_sp_fs_calendar_preview_list_single_pane_g

0xe782,	// (0x0003c8f3) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe782,	// (0x0003c8f3) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe798,	// (0x0003c909) aid_popup_sp_fs_bg_corner_pane

0xc739,	// (0x0003a8aa) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b3d,	// (0x00037cae) popup_sp_fs_calendar_preview_bg_pane

0x240b,	// (0x0003057c) popup_sp_fs_calendar_preview_list_pane

0xc331,	// (0x0003a4a2) bg_main_sp_fs_cale_pane_ParamLimits

0xc331,	// (0x0003a4a2) bg_main_sp_fs_cale_pane

0xe7a9,	// (0x0003c91a) listscroll_cale_mrui_pane_ParamLimits

0xe7a9,	// (0x0003c91a) listscroll_cale_mrui_pane

0xd2b5,	// (0x0003b426) listscroll_sp_fs_schedule_track_pane

0xe7be,	// (0x0003c92f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7be,	// (0x0003c92f) main_sp_fs_ctrlbar_pane_cp01

0xe7d1,	// (0x0003c942) main_sp_fs_ribbon_pane

0xe7d9,	// (0x0003c94a) popup_sp_fs_cale_preview_window

0x8ceb,	// (0x00036e5c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8ceb,	// (0x00036e5c) list_single_sp_fs_schedule_track_pane

0xa810,	// (0x00038981) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa810,	// (0x00038981) bg_sp_fs_highlight_list_pane_cp03

0x8cff,	// (0x00036e70) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8cff,	// (0x00036e70) list_single_sp_fs_schedule_track_pane_g1

0x8d0b,	// (0x00036e7c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d0b,	// (0x00036e7c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc8,	// (0x0003df39) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc8,	// (0x0003df39) list_single_sp_fs_schedule_track_pane_g

0x8d17,	// (0x00036e88) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d17,	// (0x00036e88) list_single_sp_fs_schedule_track_pane_t1

0x8d31,	// (0x00036ea2) sp_fs_schedule_track_pane_ParamLimits

0x8d31,	// (0x00036ea2) sp_fs_schedule_track_pane

0xe7eb,	// (0x0003c95c) sp_fs_schedule_track_pane_g1

0xe7f3,	// (0x0003c964) sp_fs_schedule_track_pane_g2

0xe7fb,	// (0x0003c96c) sp_fs_schedule_track_pane_g3

0xe803,	// (0x0003c974) sp_fs_schedule_track_pane_g4

0xe80b,	// (0x0003c97c) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcd,	// (0x0003df3e) sp_fs_schedule_track_pane_g

0xd231,	// (0x0003b3a2) bg_sp_fs_schedule_viewer_highlight_g1

0xa6e2,	// (0x00038853) bg_sp_fs_schedule_viewer_highlight_g2

0xd239,	// (0x0003b3aa) bg_sp_fs_schedule_viewer_highlight_g3

0xd241,	// (0x0003b3b2) bg_sp_fs_schedule_viewer_highlight_g4

0xd47b,	// (0x0003b5ec) bg_sp_fs_schedule_viewer_highlight_g5

0xd251,	// (0x0003b3c2) bg_sp_fs_schedule_viewer_highlight_g6

0xd259,	// (0x0003b3ca) bg_sp_fs_schedule_viewer_highlight_g7

0xd261,	// (0x0003b3d2) bg_sp_fs_schedule_viewer_highlight_g8

0xa6c2,	// (0x00038833) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd8,	// (0x0003df49) bg_sp_fs_schedule_viewer_highlight_g

0x9b3d,	// (0x00037cae) bg_main_sp_fs_ribbon_pane

0x8d42,	// (0x00036eb3) main_sp_fs_ribbon_pane_g1

0xe813,	// (0x0003c984) main_sp_fs_ribbon_pane_t1

0x8d4b,	// (0x00036ebc) main_sp_fs_ribbon_pane_t2

0xe822,	// (0x0003c993) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdeb,	// (0x0003df5c) main_sp_fs_ribbon_pane_t

0xe831,	// (0x0003c9a2) main_sp_fs_ribbon_scheduler_pane

0xe839,	// (0x0003c9aa) bg_main_sp_fs_ribbon_pane_g1

0xe842,	// (0x0003c9b3) bg_main_sp_fs_ribbon_pane_g2

0xe84b,	// (0x0003c9bc) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf2,	// (0x0003df63) bg_main_sp_fs_ribbon_pane_g

0xe853,	// (0x0003c9c4) main_sp_fs_ribbon_scheduler_pane_g1

0xe85c,	// (0x0003c9cd) main_sp_fs_ribbon_scheduler_pane_g2

0xe865,	// (0x0003c9d6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf9,	// (0x0003df6a) main_sp_fs_ribbon_scheduler_pane_g

0xe86e,	// (0x0003c9df) list_cale_mrui_pane

0x8d5a,	// (0x00036ecb) sp_fs_scroll_pane_cp07_ParamLimits

0x8d5a,	// (0x00036ecb) sp_fs_scroll_pane_cp07

0x8d76,	// (0x00036ee7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8d76,	// (0x00036ee7) bg_sp_fs_schedule_viewer_highlight

0xe87b,	// (0x0003c9ec) list_single_sp_fs_schedule_track_pane_cp01

0xe883,	// (0x0003c9f4) list_sp_fs_schedule_track_pane

0xe88b,	// (0x0003c9fc) sp_fs_scroll_pane_cp06_ParamLimits

0xe88b,	// (0x0003c9fc) sp_fs_scroll_pane_cp06

0xc739,	// (0x0003a8aa) bgmain_sp_fs_calendar_pane_g1

0x8d86,	// (0x00036ef7) list_single_cale_mrui_pane_ParamLimits

0x8d86,	// (0x00036ef7) list_single_cale_mrui_pane

0xe89d,	// (0x0003ca0e) list_single_cale_mrui_row_pane_ParamLimits

0xe89d,	// (0x0003ca0e) list_single_cale_mrui_row_pane

0xe8d7,	// (0x0003ca48) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8d7,	// (0x0003ca48) list_single_cale_mrui_row_pane_g1

0xe910,	// (0x0003ca81) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe910,	// (0x0003ca81) list_single_cale_mrui_row_pane_t1

0x8da7,	// (0x00036f18) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8da7,	// (0x00036f18) list_single_cale_mrui_row_pane_t2

0xe922,	// (0x0003ca93) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe922,	// (0x0003ca93) list_single_cale_mrui_row_pane_t3

0xe951,	// (0x0003cac2) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe951,	// (0x0003cac2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe07,	// (0x0003df78) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe07,	// (0x0003df78) list_single_cale_mrui_row_pane_t

0x8e0f,	// (0x00036f80) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e0f,	// (0x00036f80) list_single_cmail_header_editor_pane_bg_cp01

0x8e35,	// (0x00036fa6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e35,	// (0x00036fa6) list_single_cmail_header_editor_pane_bg_cp02

0x8e55,	// (0x00036fc6) main_radioblah_text_pane_t1_ParamLimits

0x8e55,	// (0x00036fc6) main_radioblah_text_pane_t1

0xe980,	// (0x0003caf1) cam6_indi_pane_cp01

0xe988,	// (0x0003caf9) cam6_mode_pane_cp01

0xe990,	// (0x0003cb01) cam6_pano_pane

0xe999,	// (0x0003cb0a) cam6_zoom_pane_cp01

0xe9a1,	// (0x0003cb12) cam6_pano_image_pane

0xe9ac,	// (0x0003cb1d) cam6_pano_pane_g1

0xdf88,	// (0x0003c0f9) cam6_pano_pane_g2

0xe9b5,	// (0x0003cb26) cam6_pano_pane_g3

0xe9be,	// (0x0003cb2f) cam6_pano_pane_g4

0xcd58,	// (0x0003aec9) cam6_pano_pane_g5

0xe9c7,	// (0x0003cb38) cam6_pano_pane_g6

0xe9d1,	// (0x0003cb42) cam6_pano_pane_g7

0xe9d9,	// (0x0003cb4a) cam6_pano_pane_g8

0xe9e2,	// (0x0003cb53) cam6_pano_pane_g9

0x0008,

0xfe10,	// (0x0003df81) cam6_pano_pane_g

0x9b3d,	// (0x00037cae) main_browser_tag_pane

0xe6f5,	// (0x0003c866) grid_navstr_albumart_pane

0xe9ed,	// (0x0003cb5e) cell_navstr_albumart_pane_ParamLimits

0xe9ed,	// (0x0003cb5e) cell_navstr_albumart_pane

0xea0d,	// (0x0003cb7e) cell_navstr_albumart_pane_g1

0xc102,	// (0x0003a273) cell_navstr_albumart_pane_g2

0xc112,	// (0x0003a283) cell_navstr_albumart_pane_g3

0xc10a,	// (0x0003a27b) cell_navstr_albumart_pane_g4

0x0003,

0xfe23,	// (0x0003df94) cell_navstr_albumart_pane_g

0x8e70,	// (0x00036fe1) bt_list_pane_ParamLimits

0x8e70,	// (0x00036fe1) bt_list_pane

0x8e84,	// (0x00036ff5) bt_list_pane_t1

0x8e93,	// (0x00037004) bt_list_pane_t2

0x0001,

0xfe2c,	// (0x0003df9d) bt_list_pane_t

0x9b3d,	// (0x00037cae) main_cale_prevew_pane

0x8ea2,	// (0x00037013) popup_cale_preview_window_ParamLimits

0x8ea2,	// (0x00037013) popup_cale_preview_window

0xa810,	// (0x00038981) bg_popup_preview_window_pane_cp05_ParamLimits

0xa810,	// (0x00038981) bg_popup_preview_window_pane_cp05

0xea15,	// (0x0003cb86) list_cale_preview_pane_ParamLimits

0xea15,	// (0x0003cb86) list_cale_preview_pane

0x8ebb,	// (0x0003702c) list_double_cale_preview_pane_ParamLimits

0x8ebb,	// (0x0003702c) list_double_cale_preview_pane

0xd269,	// (0x0003b3da) list_single_cale_preview_pane_ParamLimits

0xd269,	// (0x0003b3da) list_single_cale_preview_pane

0x8ecd,	// (0x0003703e) list_single_cale_preview_pane_g1

0x8ed5,	// (0x00037046) list_single_cale_preview_pane_t1_ParamLimits

0x8ed5,	// (0x00037046) list_single_cale_preview_pane_t1

0x8eea,	// (0x0003705b) list_double_cale_preview_pane_g1

0x8ef2,	// (0x00037063) list_double_cale_preview_pane_t1_ParamLimits

0x8ef2,	// (0x00037063) list_double_cale_preview_pane_t1

0x8f07,	// (0x00037078) list_double_cale_preview_pane_t2_ParamLimits

0x8f07,	// (0x00037078) list_double_cale_preview_pane_t2

0x0001,

0xfe31,	// (0x0003dfa2) list_double_cale_preview_pane_t_ParamLimits

0xfe31,	// (0x0003dfa2) list_double_cale_preview_pane_t

0x9b3d,	// (0x00037cae) main_ezdial_pane

0xa810,	// (0x00038981) main_sp_fs_email_pane_ParamLimits

0x84ad,	// (0x0003661e) cmail_ddmenu_btn01_pane_ParamLimits

0x84ad,	// (0x0003661e) cmail_ddmenu_btn01_pane

0x84c0,	// (0x00036631) cmail_ddmenu_btn02_pane_ParamLimits

0x84c0,	// (0x00036631) cmail_ddmenu_btn02_pane

0x84e3,	// (0x00036654) cmail_ddmenu_btn03_pane_ParamLimits

0x84e3,	// (0x00036654) cmail_ddmenu_btn03_pane

0x8509,	// (0x0003667a) main_sp_fs_ctrlbar_pane_ParamLimits

0x852d,	// (0x0003669e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b5d,	// (0x00036cce) list_cmail_body_pane_ParamLimits

0xe5f2,	// (0x0003c763) bg_button_pane_cp12

0xe607,	// (0x0003c778) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe607,	// (0x0003c778) list_single_cmail_header_detail_pane_g3

0xe650,	// (0x0003c7c1) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe650,	// (0x0003c7c1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb4,	// (0x0003df25) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb4,	// (0x0003df25) list_single_cmail_header_detail_pane_t

0xe75d,	// (0x0003c8ce) phacti_term_pane_t2_ParamLimits

0xe75d,	// (0x0003c8ce) phacti_term_pane_t2

0x0001,

0xfdbe,	// (0x0003df2f) phacti_term_pane_t_ParamLimits

0xfdbe,	// (0x0003df2f) phacti_term_pane_t

0xea21,	// (0x0003cb92) aid_size_list_single_double

0x8f1f,	// (0x00037090) popup_ezdial_listscroll_window

0x8f3b,	// (0x000370ac) popup_number_entry_window_cp01

0xa489,	// (0x000385fa) bg_popup_call_pane_cp09

0xea2d,	// (0x0003cb9e) ezdial_list_pane

0xea35,	// (0x0003cba6) scroll_pane_cp23

0xc331,	// (0x0003a4a2) bg_button_pane_cp028_ParamLimits

0xc331,	// (0x0003a4a2) bg_button_pane_cp028

0x8f49,	// (0x000370ba) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f49,	// (0x000370ba) cmail_ddmenu_btn01_pane_g1

0x8f55,	// (0x000370c6) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f55,	// (0x000370c6) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe36,	// (0x0003dfa7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe36,	// (0x0003dfa7) cmail_ddmenu_btn01_pane_g

0xea3d,	// (0x0003cbae) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea3d,	// (0x0003cbae) cmail_ddmenu_btn01_pane_t1

0xc331,	// (0x0003a4a2) bg_button_pane_cp029_ParamLimits

0xc331,	// (0x0003a4a2) bg_button_pane_cp029

0x8f61,	// (0x000370d2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f61,	// (0x000370d2) cmail_ddmenu_btn02_pane_g1

0x8f7a,	// (0x000370eb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8f7a,	// (0x000370eb) cmail_ddmenu_btn02_pane_t1

0xa810,	// (0x00038981) bg_button_pane_cp031_ParamLimits

0xa810,	// (0x00038981) bg_button_pane_cp031

0x8f61,	// (0x000370d2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f61,	// (0x000370d2) cmail_ddmenu_btn03_pane_g1

0x8f7a,	// (0x000370eb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8f7a,	// (0x000370eb) cmail_ddmenu_btn03_pane_t1

0x63b4,	// (0x00034525) cell_dialer2_keypad_pane_t1_ParamLimits

0x63ce,	// (0x0003453f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x63ce,	// (0x0003453f) cell_dialer2_keypad_pane_t1_copy1

0x7ce1,	// (0x00035e52) ncimui_group_button_pane

0xa810,	// (0x00038981) main_sp_fs_calendar_pane_ParamLimits

0x8b71,	// (0x00036ce2) list_single_cmail_header_caption_pane_ParamLimits

0xe7a0,	// (0x0003c911) aid_recal_txt_sm_pane

0x9b3d,	// (0x00037cae) mian_recal_day_pane

0xe7d9,	// (0x0003c94a) popup_sp_fs_cale_preview_window_ParamLimits

0xea52,	// (0x0003cbc3) list_recal_day_pane

0xea94,	// (0x0003cc05) list_single_recal_day_pane_ParamLimits

0xea94,	// (0x0003cc05) list_single_recal_day_pane

0xeaa6,	// (0x0003cc17) list_single_recal_day_pane_g1_ParamLimits

0xeaa6,	// (0x0003cc17) list_single_recal_day_pane_g1

0xeab2,	// (0x0003cc23) list_single_recal_day_pane_g2_ParamLimits

0xeab2,	// (0x0003cc23) list_single_recal_day_pane_g2

0xeac2,	// (0x0003cc33) list_single_recal_day_pane_g3_ParamLimits

0xeac2,	// (0x0003cc33) list_single_recal_day_pane_g3

0x8f9e,	// (0x0003710f) list_single_recal_day_pane_g4_ParamLimits

0x8f9e,	// (0x0003710f) list_single_recal_day_pane_g4

0xeace,	// (0x0003cc3f) list_single_recal_day_pane_g5_ParamLimits

0xeace,	// (0x0003cc3f) list_single_recal_day_pane_g5

0xeade,	// (0x0003cc4f) list_single_recal_day_pane_g6_ParamLimits

0xeade,	// (0x0003cc4f) list_single_recal_day_pane_g6

0x0004,

0xfe45,	// (0x0003dfb6) list_single_recal_day_pane_g_ParamLimits

0xfe45,	// (0x0003dfb6) list_single_recal_day_pane_g

0xeaf2,	// (0x0003cc63) list_single_recal_day_pane_t1

0xeb04,	// (0x0003cc75) list_single_recal_day_pane_t2

0x0001,

0xfe50,	// (0x0003dfc1) list_single_recal_day_pane_t

0x8fbe,	// (0x0003712f) ncimui_query_button_pane_ParamLimits

0x8fbe,	// (0x0003712f) ncimui_query_button_pane

0x8fce,	// (0x0003713f) ncimui_query_button_pane_t1_ParamLimits

0x8fce,	// (0x0003713f) ncimui_query_button_pane_t1

0xeb16,	// (0x0003cc87) ncimui_query_button_pane_t2_ParamLimits

0xeb16,	// (0x0003cc87) ncimui_query_button_pane_t2

0x0001,

0xfe55,	// (0x0003dfc6) ncimui_query_button_pane_t_ParamLimits

0xfe55,	// (0x0003dfc6) ncimui_query_button_pane_t

0x8fe1,	// (0x00037152) query_button_pane_ParamLimits

0x8fe1,	// (0x00037152) query_button_pane

0x9b3d,	// (0x00037cae) bg_button_pane_cp0028

0xeb29,	// (0x0003cc9a) query_button_pane_t1

0x05a7,	// (0x0002e718) main_tport_pane_ParamLimits

0x8a21,	// (0x00036b92) bg_popup_window_pane_cp01_ParamLimits

0x8a21,	// (0x00036b92) bg_popup_window_pane_cp01

0x8a3c,	// (0x00036bad) heading_pane_cp08_ParamLimits

0x8a3c,	// (0x00036bad) heading_pane_cp08

0x8a4f,	// (0x00036bc0) heading_pane_cp07_ParamLimits

0x8a4f,	// (0x00036bc0) heading_pane_cp07

0x8af6,	// (0x00036c67) cell_tport_appsw_pane_g2

0x0002,

0xfda1,	// (0x0003df12) cell_tport_appsw_pane_g

0x4026,	// (0x00032197) input_candi_list_open_g1

0xa8c1,	// (0x00038a32) list_cale_time_pane_g6_ParamLimits

0xa8c1,	// (0x00038a32) list_cale_time_pane_g6

0x51d0,	// (0x00033341) aid_size_touch_calib_1_ParamLimits

0x51d0,	// (0x00033341) aid_size_touch_calib_1

0x51e2,	// (0x00033353) aid_size_touch_calib_2_ParamLimits

0x51e2,	// (0x00033353) aid_size_touch_calib_2

0x51fa,	// (0x0003336b) aid_size_touch_calib_3_ParamLimits

0x51fa,	// (0x0003336b) aid_size_touch_calib_3

0x5218,	// (0x00033389) aid_size_touch_calib_4_ParamLimits

0x5218,	// (0x00033389) aid_size_touch_calib_4

0x5230,	// (0x000333a1) main_touch_calib_button_group_pane_ParamLimits

0x5230,	// (0x000333a1) main_touch_calib_button_group_pane

0x5248,	// (0x000333b9) main_touch_calib_pane_g1_ParamLimits

0x525a,	// (0x000333cb) main_touch_calib_pane_g2_ParamLimits

0x526c,	// (0x000333dd) main_touch_calib_pane_g3_ParamLimits

0x527e,	// (0x000333ef) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0003d8d5) main_touch_calib_pane_g_ParamLimits

0x5290,	// (0x00033401) main_touch_calib_pane_t1_ParamLimits

0x52aa,	// (0x0003341b) main_touch_calib_pane_t2_ParamLimits

0x52c4,	// (0x00033435) main_touch_calib_pane_t3_ParamLimits

0x52d8,	// (0x00033449) main_touch_calib_pane_t4_ParamLimits

0x52ec,	// (0x0003345d) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0003d8de) main_touch_calib_pane_t_ParamLimits

0xcafb,	// (0x0003ac6c) list_single_fp_cale_pane_g3_ParamLimits

0xcafb,	// (0x0003ac6c) list_single_fp_cale_pane_g3

0x18ab,	// (0x0002fa1c) bg_button_pane_cp012_ParamLimits

0x18ab,	// (0x0002fa1c) bg_vkb2_func_pane_cp03_ParamLimits

0x1699,	// (0x0002f80a) cell_vitu2_function_top_pane_g1_ParamLimits

0x18ab,	// (0x0002fa1c) bg_vkb2_func_pane_cp04_ParamLimits

0x7c6f,	// (0x00035de0) main_ncimui_button_group_pane_ParamLimits

0x7c6f,	// (0x00035de0) main_ncimui_button_group_pane

0x7ccf,	// (0x00035e40) main_ncimui_pane_t3_ParamLimits

0x7ccf,	// (0x00035e40) main_ncimui_pane_t3

0xe70b,	// (0x0003c87c) phacti_button_group_pane

0xea21,	// (0x0003cb92) aid_size_list_single_double_ParamLimits

0x8f1f,	// (0x00037090) popup_ezdial_listscroll_window_ParamLimits

0x8f3b,	// (0x000370ac) popup_number_entry_window_cp01_ParamLimits

0x8ff4,	// (0x00037165) phacti_button_pane_ParamLimits

0x8ff4,	// (0x00037165) phacti_button_pane

0x9b3d,	// (0x00037cae) bg_button_pane_cp14

0xeb37,	// (0x0003cca8) phacti_button_pane_t1

0x9005,	// (0x00037176) main_touch_calib_button_pane_ParamLimits

0x9005,	// (0x00037176) main_touch_calib_button_pane

0xa286,	// (0x000383f7) bg_button_pane_cp18_ParamLimits

0xa286,	// (0x000383f7) bg_button_pane_cp18

0xeb45,	// (0x0003ccb6) main_touch_calib_button_pane_t1_ParamLimits

0xeb45,	// (0x0003ccb6) main_touch_calib_button_pane_t1

0xeb5b,	// (0x0003cccc) main_touch_calib_button_pane_t2_ParamLimits

0xeb5b,	// (0x0003cccc) main_touch_calib_button_pane_t2

0x0001,

0xfe5a,	// (0x0003dfcb) main_touch_calib_button_pane_t_ParamLimits

0xfe5a,	// (0x0003dfcb) main_touch_calib_button_pane_t

0x9b3d,	// (0x00037cae) cell_ncimui_button_pane

0x9b3d,	// (0x00037cae) bg_button_pane_cp032

0xeb79,	// (0x0003ccea) cell_ncimui_button_pane_t1

0x63eb,	// (0x0003455c) image3_infobar_pane_ParamLimits

0x63eb,	// (0x0003455c) image3_infobar_pane

0x80ab,	// (0x0003621c) fs_bigclock_status_pane_ParamLimits

0x80ab,	// (0x0003621c) fs_bigclock_status_pane

0x80b8,	// (0x00036229) main_fs_bigclock_clock_pane_ParamLimits

0x80b8,	// (0x00036229) main_fs_bigclock_clock_pane

0x80d8,	// (0x00036249) main_fs_bigclock_indi_pane_ParamLimits

0x80d8,	// (0x00036249) main_fs_bigclock_indi_pane

0x8102,	// (0x00036273) main_fs_bigclock_swipe_pane_ParamLimits

0x8102,	// (0x00036273) main_fs_bigclock_swipe_pane

0x9b3d,	// (0x00037cae) main_fs_clock_dumped_data

0xe095,	// (0x0003c206) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe095,	// (0x0003c206) list_single_fs_bigclock_indicator_pane_g1

0xe0b1,	// (0x0003c222) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0b1,	// (0x0003c222) list_single_fs_bigclock_indicator_pane_g2

0xe0cb,	// (0x0003c23c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0cb,	// (0x0003c23c) list_single_fs_bigclock_indicator_pane_g3

0xe0e5,	// (0x0003c256) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0e5,	// (0x0003c256) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0003ddf8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0003ddf8) list_single_fs_bigclock_indicator_pane_g

0xe110,	// (0x0003c281) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe110,	// (0x0003c281) list_single_fs_bigclock_indicator_pane_t1

0xe138,	// (0x0003c2a9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe138,	// (0x0003c2a9) list_single_fs_bigclock_indicator_pane_t2

0xe160,	// (0x0003c2d1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe160,	// (0x0003c2d1) list_single_fs_bigclock_indicator_pane_t3

0xe188,	// (0x0003c2f9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe188,	// (0x0003c2f9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0003de03) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0003de03) list_single_fs_bigclock_indicator_pane_t

0xeb87,	// (0x0003ccf8) image3_infobar_fav_pane_ParamLimits

0xeb87,	// (0x0003ccf8) image3_infobar_fav_pane

0xeb97,	// (0x0003cd08) image3_infobar_loc_pane_ParamLimits

0xeb97,	// (0x0003cd08) image3_infobar_loc_pane

0xebab,	// (0x0003cd1c) image3_infobar_time_pane_ParamLimits

0xebab,	// (0x0003cd1c) image3_infobar_time_pane

0xc739,	// (0x0003a8aa) image3_infobar_time_pane_g1

0xebbb,	// (0x0003cd2c) image3_infobar_time_pane_t1

0xc739,	// (0x0003a8aa) image3_infobar_loc_pane_g1

0xebc9,	// (0x0003cd3a) image3_infobar_loc_pane_g2

0x0001,

0xfe5f,	// (0x0003dfd0) image3_infobar_loc_pane_g

0xebd1,	// (0x0003cd42) image3_infobar_loc_pane_t1

0xc739,	// (0x0003a8aa) image3_infobar_fav_pane_g1

0xebdf,	// (0x0003cd50) image3_infobar_fav_pane_g2

0x0001,

0xfe64,	// (0x0003dfd5) image3_infobar_fav_pane_g

0xebe7,	// (0x0003cd58) fs_bigclock_status_battery_pane

0xebf0,	// (0x0003cd61) fs_bigclock_status_signal_pane

0xebf9,	// (0x0003cd6a) fs_bigclock_status_title_pane

0xec02,	// (0x0003cd73) fs_bigclock_status_signal_pane_g1

0xec0b,	// (0x0003cd7c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe69,	// (0x0003dfda) fs_bigclock_status_signal_pane_g

0xec13,	// (0x0003cd84) fs_bigclock_status_battery_pane_g1

0xec1c,	// (0x0003cd8d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6e,	// (0x0003dfdf) fs_bigclock_status_battery_pane_g

0xec24,	// (0x0003cd95) fs_bigclock_status_title_pane_t1

0xc739,	// (0x0003a8aa) main_fs_bigclock_clock_pane_g1

0xec32,	// (0x0003cda3) main_fs_bigclock_clock_pane_g2

0xec3b,	// (0x0003cdac) main_fs_bigclock_clock_pane_g3

0xec3b,	// (0x0003cdac) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe73,	// (0x0003dfe4) main_fs_bigclock_clock_pane_g

0xec43,	// (0x0003cdb4) main_fs_bigclock_clock_pane_t1

0x901a,	// (0x0003718b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7c,	// (0x0003dfed) main_fs_bigclock_clock_pane_t

0xec51,	// (0x0003cdc2) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec51,	// (0x0003cdc2) list_single_fs_bigclock_indicator_pane

0xec62,	// (0x0003cdd3) list_single_fs_bigclock_pane_ParamLimits

0xec62,	// (0x0003cdd3) list_single_fs_bigclock_pane

0xec88,	// (0x0003cdf9) main_fs_bigclock_indicator_pane_t1

0xec97,	// (0x0003ce08) list_single_fs_bigclock_pane_g1

0xec9f,	// (0x0003ce10) list_single_fs_bigclock_pane_t1

0xc739,	// (0x0003a8aa) main_fs_bigclock_swipe_pane_g1

0xece2,	// (0x0003ce53) main_fs_bigclock_swipe_pane_g2

0x0001,

0x000a,	// (0x0002e17b) main_fs_bigclock_swipe_pane_g

0xecea,	// (0x0003ce5b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecea,	// (0x0003ce5b) main_fs_bigclock_swipe_pane_t1

0x3894,	// (0x00031a05) call_type_pane_ParamLimits

0x9b3d,	// (0x00037cae) main_btmg_pane

0xe3d8,	// (0x0003c549) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe3d8,	// (0x0003c549) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe00,	// (0x0003df71) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe00,	// (0x0003df71) list_single_cale_mrui_row_pane_g

0xea7b,	// (0x0003cbec) list_recal_vselct_arw_lo_pane

0xea83,	// (0x0003cbf4) list_recal_vselct_arw_up_pane

0xea8b,	// (0x0003cbfc) list_recal_vselct_pane

0x906d,	// (0x000371de) btmg_button_pane

0x9077,	// (0x000371e8) main_btmg_pane_g1

0x9b3d,	// (0x00037cae) bg_button_pane_cp044

0xed07,	// (0x0003ce78) btmg_button_pane_t1

0xc31d,	// (0x0003a48e) aid_listscroll_gen

0xa810,	// (0x00038981) main_cntbar_detail_pane

0xe5d4,	// (0x0003c745) list_cmail_folder_pane

0xcec5,	// (0x0003b036) sp_fs_scroll_pane_cp03_ParamLimits

0x9081,	// (0x000371f2) list_single_fs_dyc_pane_cp01_ParamLimits

0x9081,	// (0x000371f2) list_single_fs_dyc_pane_cp01

0xed15,	// (0x0003ce86) aid_size_cmail_indent

0xed1e,	// (0x0003ce8f) list_single_dyc_row_pane_cp01

0x90ca,	// (0x0003723b) cntbar_detail_list_pane_ParamLimits

0x90ca,	// (0x0003723b) cntbar_detail_list_pane

0x9116,	// (0x00037287) main_cntbar_detail_cont_pane_ParamLimits

0x9116,	// (0x00037287) main_cntbar_detail_cont_pane

0xcec5,	// (0x0003b036) scroll_pane_cp032_ParamLimits

0xcec5,	// (0x0003b036) scroll_pane_cp032

0x912a,	// (0x0003729b) cntbar_detail_list_event_pane_ParamLimits

0x912a,	// (0x0003729b) cntbar_detail_list_event_pane

0x90da,	// (0x0003724b) cntbar_detail_list_shct_pane

0xa730,	// (0x000388a1) aid_list_gen

0xed27,	// (0x0003ce98) aid_scroll

0xed30,	// (0x0003cea1) aid_size_touch_scroll_bar

0x74a0,	// (0x00035611) aid_list_double

0x748e,	// (0x000355ff) aid_list_single

0x748e,	// (0x000355ff) aid_list_single_lg

0x913a,	// (0x000372ab) aid_list_z_g_a_sm

0x9142,	// (0x000372b3) aid_list_z_g_d

0x914a,	// (0x000372bb) aid_txt_z_prm

0x9158,	// (0x000372c9) aid_txt_z_prm_cp01

0x9166,	// (0x000372d7) aid_txt_z_sec

0x9174,	// (0x000372e5) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9174,	// (0x000372e5) main_cntbar_detail_cont_pane_g1

0x9188,	// (0x000372f9) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9188,	// (0x000372f9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8d,	// (0x0003dffe) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8d,	// (0x0003dffe) main_cntbar_detail_cont_pane_g

0xed39,	// (0x0003ceaa) main_cntbar_detail_cont_pane_t1

0xed47,	// (0x0003ceb8) main_cntbar_detail_cont_pane_t2

0xed55,	// (0x0003cec6) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe92,	// (0x0003e003) main_cntbar_detail_cont_pane_t

0x9198,	// (0x00037309) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9198,	// (0x00037309) cell_cntbar_detail_list_shct_pane

0xed63,	// (0x0003ced4) cntbar_detail_list_shct_pane_g1

0xed6c,	// (0x0003cedd) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe99,	// (0x0003e00a) cntbar_detail_list_shct_pane_g

0x91ac,	// (0x0003731d) cntbar_detail_list_event_pane_g1_ParamLimits

0x91ac,	// (0x0003731d) cntbar_detail_list_event_pane_g1

0x91b8,	// (0x00037329) cntbar_detail_list_event_pane_g2_ParamLimits

0x91b8,	// (0x00037329) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9e,	// (0x0003e00f) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9e,	// (0x0003e00f) cntbar_detail_list_event_pane_g

0x9224,	// (0x00037395) cntbar_detail_list_event_pane_t1_ParamLimits

0x9224,	// (0x00037395) cntbar_detail_list_event_pane_t1

0x9239,	// (0x000373aa) cntbar_detail_list_event_pane_t2_ParamLimits

0x9239,	// (0x000373aa) cntbar_detail_list_event_pane_t2

0x0002,

0xfeab,	// (0x0003e01c) cntbar_detail_list_event_pane_t_ParamLimits

0xfeab,	// (0x0003e01c) cntbar_detail_list_event_pane_t

0xc739,	// (0x0003a8aa) cell_cntbar_detail_list_shct_pane_g1

0xae98,	// (0x00039009) navi_pane_mv_g3

0xa810,	// (0x00038981) main_cntbar_detail_pane_ParamLimits

0x9b3d,	// (0x00037cae) main_notif_wgt_pane

0x615d,	// (0x000342ce) aid_tch_main_mp4_pane_g4

0x633f,	// (0x000344b0) popup_slider_window_cp02

0xea71,	// (0x0003cbe2) list_recal_day_event_pane

0x9098,	// (0x00037209) cntbar_detail_btn_pane_ParamLimits

0x9098,	// (0x00037209) cntbar_detail_btn_pane

0x90b1,	// (0x00037222) cntbar_detail_btn_pane_cp01_ParamLimits

0x90b1,	// (0x00037222) cntbar_detail_btn_pane_cp01

0x90da,	// (0x0003724b) cntbar_detail_list_shct_pane_ParamLimits

0x90ea,	// (0x0003725b) cntbar_detail_pane_g1_ParamLimits

0x90ea,	// (0x0003725b) cntbar_detail_pane_g1

0x90fa,	// (0x0003726b) cntbar_detail_pane_t1_ParamLimits

0x90fa,	// (0x0003726b) cntbar_detail_pane_t1

0x91c4,	// (0x00037335) cntbar_detail_list_event_pane_g3_ParamLimits

0x91c4,	// (0x00037335) cntbar_detail_list_event_pane_g3

0x91dc,	// (0x0003734d) cntbar_detail_list_event_pane_g4_ParamLimits

0x91dc,	// (0x0003734d) cntbar_detail_list_event_pane_g4

0x91f4,	// (0x00037365) cntbar_detail_list_event_pane_g5_ParamLimits

0x91f4,	// (0x00037365) cntbar_detail_list_event_pane_g5

0x920c,	// (0x0003737d) cntbar_detail_list_event_pane_g6_ParamLimits

0x920c,	// (0x0003737d) cntbar_detail_list_event_pane_g6

0x924e,	// (0x000373bf) cntbar_detail_list_event_pane_t3_ParamLimits

0x924e,	// (0x000373bf) cntbar_detail_list_event_pane_t3

0x9260,	// (0x000373d1) popup_notif_wgt_window_ParamLimits

0x9260,	// (0x000373d1) popup_notif_wgt_window

0x9279,	// (0x000373ea) popup_submenu_window_cp01_ParamLimits

0x9279,	// (0x000373ea) popup_submenu_window_cp01

0xa489,	// (0x000385fa) bg_popup_window_pane_cp10

0xed75,	// (0x0003cee6) listscroll_notif_wgt_pane

0xed87,	// (0x0003cef8) list_notif_wgt_window

0xed90,	// (0x0003cf01) scroll_pane_cp033

0x928b,	// (0x000373fc) list_notif_wgt_row_pane_ParamLimits

0x928b,	// (0x000373fc) list_notif_wgt_row_pane

0xed99,	// (0x0003cf0a) aid_size_list_notif_wgt_del

0xeda6,	// (0x0003cf17) list_notif_wgt_row_pane_g1

0xedb2,	// (0x0003cf23) list_notif_wgt_row_pane_g2

0xedc6,	// (0x0003cf37) list_notif_wgt_row_pane_g3

0x0002,

0xfeb2,	// (0x0003e023) list_notif_wgt_row_pane_g

0xedd3,	// (0x0003cf44) list_notif_wgt_row_pane_t1

0xede9,	// (0x0003cf5a) list_notif_wgt_row_pane_t2

0xedfb,	// (0x0003cf6c) list_notif_wgt_row_pane_t3

0x0002,

0xfeb9,	// (0x0003e02a) list_notif_wgt_row_pane_t

0xd495,	// (0x0003b606) list_recal_day_event_pane_g1

0xee0d,	// (0x0003cf7e) list_recal_day_event_pane_t1

0x9b3d,	// (0x00037cae) bg_button_pane_cp045

0x929b,	// (0x0003740c) cntbar_detail_btn_pane_t1

0xc331,	// (0x0003a4a2) main_callh_pane_ParamLimits

0xc331,	// (0x0003a4a2) main_callh_pane

0x9b3d,	// (0x00037cae) main_coverflow0_pane

0x9b3d,	// (0x00037cae) main_wgtman_pane

0x811a,	// (0x0003628b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x811a,	// (0x0003628b) main_fs_bigclock_unlock_btn_pane

0x8aee,	// (0x00036c5f) bg_button_pane_cp16

0x8afe,	// (0x00036c6f) cell_tport_appsw_pane_g3

0x92a9,	// (0x0003741a) cf0_flow_pane_ParamLimits

0x92a9,	// (0x0003741a) cf0_flow_pane

0xee1c,	// (0x0003cf8d) listscroll_cf0_pane

0xee27,	// (0x0003cf98) main_cf0_pane_g1

0x92be,	// (0x0003742f) main_cf0_pane_t1_ParamLimits

0x92be,	// (0x0003742f) main_cf0_pane_t1

0x92d5,	// (0x00037446) main_cf0_pane_t2_ParamLimits

0x92d5,	// (0x00037446) main_cf0_pane_t2

0x0001,

0xfec5,	// (0x0003e036) main_cf0_pane_t_ParamLimits

0xfec5,	// (0x0003e036) main_cf0_pane_t

0xee39,	// (0x0003cfaa) scroll_pane_cp11

0x92ec,	// (0x0003745d) cf0_flow_pane_g1

0x92f4,	// (0x00037465) cf0_flow_pane_g2

0x0001,

0xfeca,	// (0x0003e03b) cf0_flow_pane_g

0x92fc,	// (0x0003746d) cf0_flow_pane_t1

0x9b3d,	// (0x00037cae) main_call6_pane

0x9b3d,	// (0x00037cae) main_calllock_pane

0x930a,	// (0x0003747b) call6_btn_grp_pane_ParamLimits

0x930a,	// (0x0003747b) call6_btn_grp_pane

0x9324,	// (0x00037495) call6_pane_g1_ParamLimits

0x9324,	// (0x00037495) call6_pane_g1

0x9339,	// (0x000374aa) popup_call6_1st_window_ParamLimits

0x9339,	// (0x000374aa) popup_call6_1st_window

0x934a,	// (0x000374bb) popup_call6_2nd_window_ParamLimits

0x934a,	// (0x000374bb) popup_call6_2nd_window

0x935b,	// (0x000374cc) cell_call6_btn_pane_ParamLimits

0x935b,	// (0x000374cc) cell_call6_btn_pane

0xa489,	// (0x000385fa) bg_popup_call2_in_pane_cp03

0xee44,	// (0x0003cfb5) popup_call6_1st_window_g1

0xee4c,	// (0x0003cfbd) popup_call6_1st_window_g2

0xee54,	// (0x0003cfc5) popup_call6_1st_window_g3

0x0002,

0xfecf,	// (0x0003e040) popup_call6_1st_window_g

0xee5c,	// (0x0003cfcd) popup_call6_1st_window_t1

0xee6b,	// (0x0003cfdc) popup_call6_1st_window_t2

0xee7b,	// (0x0003cfec) popup_call6_1st_window_t3

0x0002,

0xfed6,	// (0x0003e047) popup_call6_1st_window_t

0xa489,	// (0x000385fa) bg_popup_call2_in_pane_cp04

0xee44,	// (0x0003cfb5) popup_call6_2nd_window_g1

0xee4c,	// (0x0003cfbd) popup_call6_2nd_window_g2

0xee54,	// (0x0003cfc5) popup_call6_2nd_window_g3

0x0002,

0xfecf,	// (0x0003e040) popup_call6_2nd_window_g

0xee5c,	// (0x0003cfcd) popup_call6_2nd_window_t1

0x9b3d,	// (0x00037cae) bg_button_pane_cp15

0xee8b,	// (0x0003cffc) cell_call6_btn_pane_g1

0xee94,	// (0x0003d005) cell_call6_btn_pane_t1

0x936f,	// (0x000374e0) listscroll_wgtman_pane_ParamLimits

0x936f,	// (0x000374e0) listscroll_wgtman_pane

0x9390,	// (0x00037501) wgtman_btn_pane_ParamLimits

0x9390,	// (0x00037501) wgtman_btn_pane

0xacac,	// (0x00038e1d) aid_scroll_copy1

0xeea3,	// (0x0003d014) list_wgtman_pane

0x93d3,	// (0x00037544) wgtman_btn_pane_g1_ParamLimits

0x93d3,	// (0x00037544) wgtman_btn_pane_g1

0x93ff,	// (0x00037570) wgtman_btn_pane_t1_ParamLimits

0x93ff,	// (0x00037570) wgtman_btn_pane_t1

0xeead,	// (0x0003d01e) wgtman_btn_pane_t2_ParamLimits

0xeead,	// (0x0003d01e) wgtman_btn_pane_t2

0x0001,

0xfedd,	// (0x0003e04e) wgtman_btn_pane_t_ParamLimits

0xfedd,	// (0x0003e04e) wgtman_btn_pane_t

0x943c,	// (0x000375ad) listrow_wgtman_pane_ParamLimits

0x943c,	// (0x000375ad) listrow_wgtman_pane

0x944e,	// (0x000375bf) listrow_wgtman_pane_g1

0x945b,	// (0x000375cc) listrow_wgtman_pane_g2

0x0001,

0xfee2,	// (0x0003e053) listrow_wgtman_pane_g

0x9479,	// (0x000375ea) listrow_wgtman_pane_t1

0x9491,	// (0x00037602) listrow_wgtman_pane_t2

0x0001,

0xfee7,	// (0x0003e058) listrow_wgtman_pane_t

0x94b7,	// (0x00037628) wait_bar_pane_cp09

0xeec4,	// (0x0003d035) main_calllock_btn_pane

0xeece,	// (0x0003d03f) main_calllock_pane_g1

0x9b3d,	// (0x00037cae) bg_button_pane_cp17

0xeed9,	// (0x0003d04a) main_calllock_btn_pane_g1

0xeee2,	// (0x0003d053) main_calllock_btn_pane_t1

0x9b3d,	// (0x00037cae) main_dialer3_pane

0x9b3d,	// (0x00037cae) main_fmrd2_pane

0xc739,	// (0x0003a8aa) main_fs_bigclock_unlock_btn_pane_g1

0xeef9,	// (0x0003d06a) main_fs_bigclock_unlock_btn_pane_t1

0x94c9,	// (0x0003763a) area_fmrd2_info_pane_ParamLimits

0x94c9,	// (0x0003763a) area_fmrd2_info_pane

0x94da,	// (0x0003764b) area_fmrd2_visual_pane_ParamLimits

0x94da,	// (0x0003764b) area_fmrd2_visual_pane

0x94e8,	// (0x00037659) fmrd2_indi_pane_ParamLimits

0x94e8,	// (0x00037659) fmrd2_indi_pane

0x94f5,	// (0x00037666) area_fmrd2_visual_pane_g1

0x94fd,	// (0x0003766e) area_fmrd2_visual_pane_t1

0x950d,	// (0x0003767e) area_fmrd2_visual_pane_t2

0x951d,	// (0x0003768e) area_fmrd2_visual_pane_t3

0x0002,

0xfeec,	// (0x0003e05d) area_fmrd2_visual_pane_t

0x952d,	// (0x0003769e) area_fmrd2_info_pane_g1

0x9535,	// (0x000376a6) area_fmrd2_info_pane_t1

0x9545,	// (0x000376b6) area_fmrd2_info_pane_t2

0x9555,	// (0x000376c6) area_fmrd2_info_pane_t3

0x9565,	// (0x000376d6) area_fmrd2_info_pane_t4

0x0003,

0xfef3,	// (0x0003e064) area_fmrd2_info_pane_t

0x9573,	// (0x000376e4) fmrd2_indi_pane_t1

0x9583,	// (0x000376f4) fmrd2_indi_pane_t2

0x9593,	// (0x00037704) fmrd2_indi_pane_t3

0x0002,

0x0046,	// (0x0002e1b7) fmrd2_indi_pane_t

0xe0f4,	// (0x0003c265) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0f4,	// (0x0003c265) list_single_fs_bigclock_indicator_pane_g5

0xe1a4,	// (0x0003c315) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1a4,	// (0x0003c315) list_single_fs_bigclock_indicator_pane_t5

0x8c8a,	// (0x00036dfb) aid_cell_bcale_month_pane_ParamLimits

0x8c8a,	// (0x00036dfb) aid_cell_bcale_month_pane

0x8ca8,	// (0x00036e19) bcale_month_pane_ParamLimits

0x8ca8,	// (0x00036e19) bcale_month_pane

0x8ccc,	// (0x00036e3d) bcale_preview_pane_ParamLimits

0x8ccc,	// (0x00036e3d) bcale_preview_pane

0xec9f,	// (0x0003ce10) list_single_fs_bigclock_pane_t1_ParamLimits

0xecbe,	// (0x0003ce2f) list_single_fs_bigclock_pane_t2_ParamLimits

0xecbe,	// (0x0003ce2f) list_single_fs_bigclock_pane_t2

0x0001,

0xfe88,	// (0x0003dff9) list_single_fs_bigclock_pane_t_ParamLimits

0xfe88,	// (0x0003dff9) list_single_fs_bigclock_pane_t

0xeef1,	// (0x0003d062) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0x0041,	// (0x0002e1b2) main_fs_bigclock_unlock_btn_pane_g

0x95a3,	// (0x00037714) aid_dia3_key_size_ParamLimits

0x95a3,	// (0x00037714) aid_dia3_key_size

0x95b2,	// (0x00037723) aid_dia3_listrow_size_ParamLimits

0x95b2,	// (0x00037723) aid_dia3_listrow_size

0x95c7,	// (0x00037738) dia3_keypad_fun_pane_ParamLimits

0x95c7,	// (0x00037738) dia3_keypad_fun_pane

0x95e3,	// (0x00037754) dia3_keypad_num_pane_ParamLimits

0x95e3,	// (0x00037754) dia3_keypad_num_pane

0x95fe,	// (0x0003776f) dia3_listscroll_pane_ParamLimits

0x95fe,	// (0x0003776f) dia3_listscroll_pane

0x9611,	// (0x00037782) dia3_numentry_pane_ParamLimits

0x9611,	// (0x00037782) dia3_numentry_pane

0xef07,	// (0x0003d078) dia3_list_pane

0xef12,	// (0x0003d083) scroll_pane_cp12

0x9b3d,	// (0x00037cae) bg_dia3_numentry_pane

0x9625,	// (0x00037796) dia3_numentry_pane_t1

0x9634,	// (0x000377a5) cell_dia3_key_num_pane

0x963c,	// (0x000377ad) cell_dia3_key0_fun_pane_ParamLimits

0x963c,	// (0x000377ad) cell_dia3_key0_fun_pane

0x9650,	// (0x000377c1) cell_dia3_key1_fun_pane_ParamLimits

0x9650,	// (0x000377c1) cell_dia3_key1_fun_pane

0x9668,	// (0x000377d9) dia3_listrow_pane

0xde03,	// (0x0003bf74) bg_dia3_numentry_pane_g1

0x9b3d,	// (0x00037cae) bg_button_pane_cp21

0xef1d,	// (0x0003d08e) cell_dia3_key_num_pane_t1

0xef2b,	// (0x0003d09c) cell_dia3_key_num_pane_t2

0xef3a,	// (0x0003d0ab) cell_dia3_key_num_pane_t3

0xef49,	// (0x0003d0ba) cell_dia3_key_num_pane_t4

0x0003,

0xfefc,	// (0x0003e06d) cell_dia3_key_num_pane_t

0x9b3d,	// (0x00037cae) bg_button_pane_cp19

0x967a,	// (0x000377eb) cell_dia3_key0_fun_pane_g1

0x9b3d,	// (0x00037cae) bg_button_pane_cp20

0x9682,	// (0x000377f3) cell_dia3_key1_fun_pane_g1

0x968a,	// (0x000377fb) area_left_week_number_pane

0x9696,	// (0x00037807) area_top_day_name_pane

0x96a9,	// (0x0003781a) frame_month_view_pane

0xef58,	// (0x0003d0c9) grid_month_view_pane

0x96bc,	// (0x0003782d) cell_top_day_name_pane_ParamLimits

0x96bc,	// (0x0003782d) cell_top_day_name_pane

0x96e9,	// (0x0003785a) cell_area_left_week_number_pane_ParamLimits

0x96e9,	// (0x0003785a) cell_area_left_week_number_pane

0x96fd,	// (0x0003786e) cell_month_view_pane_ParamLimits

0x96fd,	// (0x0003786e) cell_month_view_pane

0xef66,	// (0x0003d0d7) frm_month_g1

0x972a,	// (0x0003789b) frm_month_g2

0x973d,	// (0x000378ae) frm_month_g3

0x9750,	// (0x000378c1) frm_month_g4

0x9763,	// (0x000378d4) frm_month_g5

0x9776,	// (0x000378e7) frm_month_g6

0x9789,	// (0x000378fa) frm_month_g7

0xef73,	// (0x0003d0e4) frm_month_g8

0x979c,	// (0x0003790d) frm_month_g9

0x97ac,	// (0x0003791d) frm_month_g10

0x97bc,	// (0x0003792d) frm_month_g11

0x97cc,	// (0x0003793d) frm_month_g12

0x97de,	// (0x0003794f) frm_month_g13

0x97f0,	// (0x00037961) frm_month_g14

0x9804,	// (0x00037975) frm_month_g15

0x9818,	// (0x00037989) frm_month_g16

0x000f,

0xff05,	// (0x0003e076) frm_month_g

0xef80,	// (0x0003d0f1) cell_top_day_name_pane_t1

0x982c,	// (0x0003799d) cell_area_left_week_number_pane_g1

0x9838,	// (0x000379a9) cell_area_left_week_number_pane_t1

0xc987,	// (0x0003aaf8) cell_month_view_pane_g1

0x984b,	// (0x000379bc) cell_month_view_pane_t1

0x9b3d,	// (0x00037cae) main_fps_pane

0xe394,	// (0x0003c505) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe394,	// (0x0003c505) cmail_ddmenu_btn02_pane_cp1

0xe3b0,	// (0x0003c521) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3b0,	// (0x0003c521) cmail_ddmenu_btn02_pane_cp2

0x8f6d,	// (0x000370de) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8f6d,	// (0x000370de) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3b,	// (0x0003dfac) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3b,	// (0x0003dfac) cmail_ddmenu_btn02_pane_g

0x8f8c,	// (0x000370fd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8f8c,	// (0x000370fd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe40,	// (0x0003dfb1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe40,	// (0x0003dfb1) cmail_ddmenu_btn02_pane_t

0x985e,	// (0x000379cf) fps_text_pane_ParamLimits

0x985e,	// (0x000379cf) fps_text_pane

0x9875,	// (0x000379e6) main_fps_pane_g1_ParamLimits

0x9875,	// (0x000379e6) main_fps_pane_g1

0x988f,	// (0x00037a00) wait_bar_pane_cp010_ParamLimits

0x988f,	// (0x00037a00) wait_bar_pane_cp010

0x98a0,	// (0x00037a11) fps_text_pane_t1_ParamLimits

0x98a0,	// (0x00037a11) fps_text_pane_t1

0xe8aa,	// (0x0003ca1b) cam4_image_uncrop_pane_g1

0xe8b3,	// (0x0003ca24) cam4_image_uncrop_pane_g2

0x6587,	// (0x000346f8) cam4_image_uncrop_pane_g3

0x6590,	// (0x00034701) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0003da72) cam4_image_uncrop_pane_g

0x9668,	// (0x000377d9) dia3_listrow_pane_ParamLimits

0x9b3d,	// (0x00037cae) main_phob2_pane

0x8abf,	// (0x00036c30) cell_tport_appsw_pane_cp02_ParamLimits

0x8abf,	// (0x00036c30) cell_tport_appsw_pane_cp02

0x8ad3,	// (0x00036c44) cell_tport_appsw_pane_cp03_ParamLimits

0x8ad3,	// (0x00036c44) cell_tport_appsw_pane_cp03

0x9b3d,	// (0x00037cae) phob2_contact_card_pane

0x9b3d,	// (0x00037cae) phob2_listscroll_pane

0xef93,	// (0x0003d104) phob2_list_pane

0xef9b,	// (0x0003d10c) scroll_pane_cp034

0x98b8,	// (0x00037a29) phob2_cc_data_pane_ParamLimits

0x98b8,	// (0x00037a29) phob2_cc_data_pane

0x98d7,	// (0x00037a48) phob2_cc_listscroll_pane_ParamLimits

0x98d7,	// (0x00037a48) phob2_cc_listscroll_pane

0x943c,	// (0x000375ad) list_double_large_graphic_phob2_pane_ParamLimits

0x943c,	// (0x000375ad) list_double_large_graphic_phob2_pane

0x98f5,	// (0x00037a66) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98f5,	// (0x00037a66) list_double_large_graphic_phob2_pane_g1

0x990b,	// (0x00037a7c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x990b,	// (0x00037a7c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff26,	// (0x0003e097) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff26,	// (0x0003e097) list_double_large_graphic_phob2_pane_g

0x9917,	// (0x00037a88) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9917,	// (0x00037a88) list_double_large_graphic_phob2_pane_t1

0x992d,	// (0x00037a9e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x992d,	// (0x00037a9e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2b,	// (0x0003e09c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2b,	// (0x0003e09c) list_double_large_graphic_phob2_pane_t

0x9b3d,	// (0x00037cae) list_highlight_pane_cp024

0x9942,	// (0x00037ab3) phob2_cc_button_pane

0x994a,	// (0x00037abb) phob2_cc_data_pane_g1_ParamLimits

0x994a,	// (0x00037abb) phob2_cc_data_pane_g1

0x995f,	// (0x00037ad0) phob2_cc_data_pane_g2_ParamLimits

0x995f,	// (0x00037ad0) phob2_cc_data_pane_g2

0x0001,

0xff30,	// (0x0003e0a1) phob2_cc_data_pane_g_ParamLimits

0xff30,	// (0x0003e0a1) phob2_cc_data_pane_g

0x996f,	// (0x00037ae0) phob2_cc_data_pane_t1_ParamLimits

0x996f,	// (0x00037ae0) phob2_cc_data_pane_t1

0x9987,	// (0x00037af8) phob2_cc_data_pane_t2_ParamLimits

0x9987,	// (0x00037af8) phob2_cc_data_pane_t2

0x999f,	// (0x00037b10) phob2_cc_data_pane_t3_ParamLimits

0x999f,	// (0x00037b10) phob2_cc_data_pane_t3

0x0002,

0xff35,	// (0x0003e0a6) phob2_cc_data_pane_t_ParamLimits

0xff35,	// (0x0003e0a6) phob2_cc_data_pane_t

0xefa3,	// (0x0003d114) phob2_cc_list_pane_ParamLimits

0xefa3,	// (0x0003d114) phob2_cc_list_pane

0xd52c,	// (0x0003b69d) scroll_pane_cp035_ParamLimits

0xd52c,	// (0x0003b69d) scroll_pane_cp035

0xa810,	// (0x00038981) bg_button_pane_cp033

0xefaf,	// (0x0003d120) phob2_cc_button_pane_g1

0xefbb,	// (0x0003d12c) phob2_cc_button_pane_t1

0xefd0,	// (0x0003d141) phob2_cc_button_pane_t2

0x0001,

0xff3c,	// (0x0003e0ad) phob2_cc_button_pane_t

0x99b7,	// (0x00037b28) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x99b7,	// (0x00037b28) list_double_large_graphic_phob2_cc_pane

0x99ca,	// (0x00037b3b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99ca,	// (0x00037b3b) list_double_large_graphic_phob2_cc_pane_g1

0xefe2,	// (0x0003d153) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xefe2,	// (0x0003d153) list_double_large_graphic_phob2_cc_pane_g2

0x99d6,	// (0x00037b47) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99d6,	// (0x00037b47) list_double_large_graphic_phob2_cc_pane_g3

0x99e2,	// (0x00037b53) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99e2,	// (0x00037b53) list_double_large_graphic_phob2_cc_pane_g4

0x99ee,	// (0x00037b5f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x99ee,	// (0x00037b5f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff41,	// (0x0003e0b2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff41,	// (0x0003e0b2) list_double_large_graphic_phob2_cc_pane_g

0x99fa,	// (0x00037b6b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x99fa,	// (0x00037b6b) list_double_large_graphic_phob2_cc_pane_t1

0x9a23,	// (0x00037b94) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a23,	// (0x00037b94) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4c,	// (0x0003e0bd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4c,	// (0x0003e0bd) list_double_large_graphic_phob2_cc_pane_t

0xefee,	// (0x0003d15f) list_highlight_pane_cp025_ParamLimits

0xefee,	// (0x0003d15f) list_highlight_pane_cp025

0xa810,	// (0x00038981) bg_button_pane_cp033_ParamLimits

0xefaf,	// (0x0003d120) phob2_cc_button_pane_g1_ParamLimits

0xefbb,	// (0x0003d12c) phob2_cc_button_pane_t1_ParamLimits

0xefd0,	// (0x0003d141) phob2_cc_button_pane_t2_ParamLimits

0xff3c,	// (0x0003e0ad) phob2_cc_button_pane_t_ParamLimits

0x18b9,	// (0x0002fa2a) popup_wgtman_window

0xd34b,	// (0x0003b4bc) scroll_pane_cp038

0x93b5,	// (0x00037526) wgtman_btn_pane_cp_01_ParamLimits

0x93b5,	// (0x00037526) wgtman_btn_pane_cp_01

0xeffc,	// (0x0003d16d) wgtman_content_pane

0xf005,	// (0x0003d176) wgtman_heading_pane

0x9b3d,	// (0x00037cae) bg_heading_pane_cp02

0xf00e,	// (0x0003d17f) wgtman_heading_pane_g1

0xf016,	// (0x0003d187) wgtman_heading_pane_t1

0xf024,	// (0x0003d195) scroll_pane_cp036

0xf02c,	// (0x0003d19d) wgtman_list_pane

0xe8bc,	// (0x0003ca2d) wgtman_list_pane_t1_ParamLimits

0xe8bc,	// (0x0003ca2d) wgtman_list_pane_t1

0x6573,	// (0x000346e4) cam4_grid_pane

0x6f50,	// (0x000350c1) bg_button_pane_cp015_ParamLimits

0x6f64,	// (0x000350d5) bg_button_pane_cp016_ParamLimits

0x6f77,	// (0x000350e8) bg_button_pane_cp017_ParamLimits

0x6fcf,	// (0x00035140) popup_vitu2_query_window_g3_ParamLimits

0x6fcf,	// (0x00035140) popup_vitu2_query_window_g3

0x708c,	// (0x000351fd) popup_vitu2_query_window_t6_ParamLimits

0x708c,	// (0x000351fd) popup_vitu2_query_window_t6

0x70b7,	// (0x00035228) popup_vitu2_query_window_t7_ParamLimits

0x70b7,	// (0x00035228) popup_vitu2_query_window_t7

0xe8aa,	// (0x0003ca1b) cam4_grid_pane_g1

0xe8b3,	// (0x0003ca24) cam4_grid_pane_g2

0xf034,	// (0x0003d1a5) cam4_grid_pane_g3

0xf03d,	// (0x0003d1ae) cam4_grid_pane_g4

0x0003,

0xff51,	// (0x0003e0c2) cam4_grid_pane_g

0x2703,	// (0x00030874) aid_placing_vt_slider_lsc_ParamLimits

0x2a00,	// (0x00030b71) vidtel_button_pane_ParamLimits

0x2a00,	// (0x00030b71) vidtel_button_pane

0x9b3d,	// (0x00037cae) bg_button_pane_cp034

0x9a4c,	// (0x00037bbd) vidtel_button_pane_g1

0xf048,	// (0x0003d1b9) vidtel_button_pane_t1

0xd465,	// (0x0003b5d6) aid_size_vtel_slider_touch

0xd52c,	// (0x0003b69d) scroll_pane_cp039

0xde49,	// (0x0003bfba) ncim_query_button_pane_cp01_ParamLimits

0xde68,	// (0x0003bfd9) ncimui_query_pane_g1_ParamLimits

0xa810,	// (0x00038981) input_focus_pane_cp012_ParamLimits

0xde8d,	// (0x0003bffe) ncim_query_entry_pane_t1_ParamLimits

0xd52c,	// (0x0003b69d) scroll_pane_cp039_ParamLimits

0xad83,	// (0x00038ef4) navi_pane_bcale_mc_g1

0xad8b,	// (0x00038efc) navi_pane_bcale_mc_t1

0xe3f9,	// (0x0003c56a) main_sp_fs_email_pane_g1

0xe405,	// (0x0003c576) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0003de69) main_sp_fs_email_pane_g

0xe903,	// (0x0003ca74) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe903,	// (0x0003ca74) list_single_cale_mrui_row_pane_g3

0x8fb4,	// (0x00037125) list_single_recal_day_pane_g5_event_pane

0xeaea,	// (0x0003cc5b) list_single_recal_day_pane_g7

0xf05e,	// (0x0003d1cf) list_recal_day_event_pane_cp01

0xf067,	// (0x0003d1d8) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0003d1e0) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0003d1e8) list_recal_vselct_pane_cp01

0xd495,	// (0x0003b606) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0003d1f2) list_recal_day_event_pane_cp01_t1

0xeaf2,	// (0x0003cc63) list_single_recal_day_pane_t1_ParamLimits

0xeb04,	// (0x0003cc75) list_single_recal_day_pane_t2_ParamLimits

0xfe50,	// (0x0003dfc1) list_single_recal_day_pane_t_ParamLimits

0xa1b5,	// (0x00038326) bg_notes_pane_ParamLimits

0xa264,	// (0x000383d5) list_notes_pane_ParamLimits

0x1b26,	// (0x0002fc97) scroll_pane_cp06_ParamLimits

0xa286,	// (0x000383f7) main_notes_pane_ParamLimits

0x9b3d,	// (0x00037cae) main_welc_pane

0x9a54,	// (0x00037bc5) main_welc_body_pane_ParamLimits

0x9a54,	// (0x00037bc5) main_welc_body_pane

0x9a71,	// (0x00037be2) main_welc_opti_pane_ParamLimits

0x9a71,	// (0x00037be2) main_welc_opti_pane

0x9ab6,	// (0x00037c27) main_welc_pane_t1_ParamLimits

0x9ab6,	// (0x00037c27) main_welc_pane_t1

0x9ad4,	// (0x00037c45) main_welc_body_row_pane_ParamLimits

0x9ad4,	// (0x00037c45) main_welc_body_row_pane

0xdbb9,	// (0x0003bd2a) main_welc_opti_row_pane_ParamLimits

0xdbb9,	// (0x0003bd2a) main_welc_opti_row_pane

0xf08f,	// (0x0003d200) main_welc_opti_row_pane_g1

0x9ae9,	// (0x00037c5a) main_welc_opti_row_pane_t1

0xf097,	// (0x0003d208) main_welc_body_row_pane_t1

0xed7f,	// (0x0003cef0) popup_notif_wgt_heading_pane

0xed99,	// (0x0003cf0a) aid_size_list_notif_wgt_del_ParamLimits

0xeda6,	// (0x0003cf17) list_notif_wgt_row_pane_g1_ParamLimits

0xedb2,	// (0x0003cf23) list_notif_wgt_row_pane_g2_ParamLimits

0xedc6,	// (0x0003cf37) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb2,	// (0x0003e023) list_notif_wgt_row_pane_g_ParamLimits

0xedd3,	// (0x0003cf44) list_notif_wgt_row_pane_t1_ParamLimits

0xede9,	// (0x0003cf5a) list_notif_wgt_row_pane_t2_ParamLimits

0xedfb,	// (0x0003cf6c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb9,	// (0x0003e02a) list_notif_wgt_row_pane_t_ParamLimits

0x944e,	// (0x000375bf) listrow_wgtman_pane_g1_ParamLimits

0x945b,	// (0x000375cc) listrow_wgtman_pane_g2_ParamLimits

0xfee2,	// (0x0003e053) listrow_wgtman_pane_g_ParamLimits

0x9479,	// (0x000375ea) listrow_wgtman_pane_t1_ParamLimits

0x9491,	// (0x00037602) listrow_wgtman_pane_t2_ParamLimits

0xfee7,	// (0x0003e058) listrow_wgtman_pane_t_ParamLimits

0x94b7,	// (0x00037628) wait_bar_pane_cp09_ParamLimits

0x9b3d,	// (0x00037cae) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0003d217) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0003d21f) popup_notif_wgt_heading_pane_t1

0x9b3d,	// (0x00037cae) main_vids_pane

0x9b3d,	// (0x00037cae) vids_listscroll_pane

0x9af8,	// (0x00037c69) scroll_pane_cp040

0x9b3d,	// (0x00037cae) vids_list_pane

0x9b03,	// (0x00037c74) vids_list_double_pane_ParamLimits

0x9b03,	// (0x00037c74) vids_list_double_pane

0x9b14,	// (0x00037c85) vids_list_double_pane_g1

0x9b1d,	// (0x00037c8e) vids_list_double_pane_t1

0x9b2d,	// (0x00037c9e) vids_list_double_pane_t2

0x0001,

0xff5f,	// (0x0003e0d0) vids_list_double_pane_t

0x18ab,	// (0x0002fa1c) main_ncimui_pane_ParamLimits

0x7c83,	// (0x00035df4) main_ncimui_pane_g1_ParamLimits

0x7c8f,	// (0x00035e00) main_ncimui_pane_g2_ParamLimits

0x7c8f,	// (0x00035e00) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0003dd6e) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0003dd6e) main_ncimui_pane_g

0x9a8c,	// (0x00037bfd) main_welc_pane_g1_ParamLimits

0x9a8c,	// (0x00037bfd) main_welc_pane_g1

0x9aa1,	// (0x00037c12) main_welc_pane_g2_ParamLimits

0x9aa1,	// (0x00037c12) main_welc_pane_g2

0x0001,

0xff5a,	// (0x0003e0cb) main_welc_pane_g_ParamLimits

0xff5a,	// (0x0003e0cb) main_welc_pane_g

0xa1b5,	// (0x00038326) listscroll_mce_pane_ParamLimits

0xaed8,	// (0x00039049) wait_bar_pane_cp10

0xc325,	// (0x0003a496) main_cale_day_pane_ParamLimits

0xc325,	// (0x0003a496) main_cale_week_pane_ParamLimits

0xa1b5,	// (0x00038326) main_messa_pane_ParamLimits

0x5b1f,	// (0x00033c90) main_clock2_btn_pane_ParamLimits

0x5b1f,	// (0x00033c90) main_clock2_btn_pane

0xcb83,	// (0x0003acf4) main_clock2_btn_pane_cp01_ParamLimits

0xcb83,	// (0x0003acf4) main_clock2_btn_pane_cp01

0xe86e,	// (0x0003c9df) list_cale_mrui_pane_ParamLimits

0xee31,	// (0x0003cfa2) main_cf0_pane_g2

0x0001,

0xfec0,	// (0x0003e031) main_cf0_pane_g

0x968a,	// (0x000377fb) area_left_week_number_pane_ParamLimits

0x9696,	// (0x00037807) area_top_day_name_pane_ParamLimits

0x96a9,	// (0x0003781a) frame_month_view_pane_ParamLimits

0xef58,	// (0x0003d0c9) grid_month_view_pane_ParamLimits

0xef66,	// (0x0003d0d7) frm_month_g1_ParamLimits

0x972a,	// (0x0003789b) frm_month_g2_ParamLimits

0x973d,	// (0x000378ae) frm_month_g3_ParamLimits

0x9750,	// (0x000378c1) frm_month_g4_ParamLimits

0x9763,	// (0x000378d4) frm_month_g5_ParamLimits

0x9776,	// (0x000378e7) frm_month_g6_ParamLimits

0x9789,	// (0x000378fa) frm_month_g7_ParamLimits

0xef73,	// (0x0003d0e4) frm_month_g8_ParamLimits

0x979c,	// (0x0003790d) frm_month_g9_ParamLimits

0x97ac,	// (0x0003791d) frm_month_g10_ParamLimits

0x97bc,	// (0x0003792d) frm_month_g11_ParamLimits

0x97cc,	// (0x0003793d) frm_month_g12_ParamLimits

0x97de,	// (0x0003794f) frm_month_g13_ParamLimits

0x97f0,	// (0x00037961) frm_month_g14_ParamLimits

0x9804,	// (0x00037975) frm_month_g15_ParamLimits

0x9818,	// (0x00037989) frm_month_g16_ParamLimits

0xff05,	// (0x0003e076) frm_month_g_ParamLimits

0xef80,	// (0x0003d0f1) cell_top_day_name_pane_t1_ParamLimits

0x982c,	// (0x0003799d) cell_area_left_week_number_pane_g1_ParamLimits

0x9838,	// (0x000379a9) cell_area_left_week_number_pane_t1_ParamLimits

0xc987,	// (0x0003aaf8) cell_month_view_pane_g1_ParamLimits

0x984b,	// (0x000379bc) cell_month_view_pane_t1_ParamLimits

0xa1ad,	// (0x0003831e) main_clock2_btn_pane_g1

0xf0bc,	// (0x0003d22d) main_clock2_btn_pane_t1

0xa810,	// (0x00038981) listscroll_cmail_pane_ParamLimits

0xe3f9,	// (0x0003c56a) main_sp_fs_email_pane_g1_ParamLimits

0xe405,	// (0x0003c576) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0003de69) main_sp_fs_email_pane_g_ParamLimits

0xea52,	// (0x0003cbc3) list_recal_day_pane_ParamLimits

0xea63,	// (0x0003cbd4) mian_recal_day_pane_t1

0x878c,	// (0x000368fd) list_single_dyc_row_text_pane_t4_ParamLimits

0x878c,	// (0x000368fd) list_single_dyc_row_text_pane_t4

0x87d5,	// (0x00036946) list_single_dyc_row_text_pane_t5_ParamLimits

0x87d5,	// (0x00036946) list_single_dyc_row_text_pane_t5

0xe4a7,	// (0x0003c618) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4a7,	// (0x0003c618) list_single_dyc_row_text_pane_t6

0x3708,	// (0x00031879) aid_mgn_list_cale_time_pane

0x18ab,	// (0x0002fa1c) main_gallery2_pane_ParamLimits

0xcb99,	// (0x0003ad0a) main_clock2_pane_cp01_t1

0xcba7,	// (0x0003ad18) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0003d948) main_clock2_pane_cp01_t

0x1e8e,	// (0x0002ffff) cale_week_scroll_pane_g16_ParamLimits

0x1e8e,	// (0x0002ffff) cale_week_scroll_pane_g16

0xa489,	// (0x000385fa) vorec_slider_pane

0xf048,	// (0x0003d1b9) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
