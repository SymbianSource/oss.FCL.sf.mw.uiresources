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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0003d844 };

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
0x20aa,	// (0x0003f8ee) Screen

0x20b6,	// (0x0003f8fa) application_window

0x20f6,	// (0x0003f93a) area_bottom_pane_ParamLimits

0x20f6,	// (0x0003f93a) area_bottom_pane

0x212b,	// (0x0003f96f) area_top_pane_ParamLimits

0x212b,	// (0x0003f96f) area_top_pane

0xa175,	// (0x000479b9) call_video_uplink_pane_ParamLimits

0xa175,	// (0x000479b9) call_video_uplink_pane

0x21ba,	// (0x0003f9fe) main_pane_ParamLimits

0x21ba,	// (0x0003f9fe) main_pane

0xc877,	// (0x0004a0bb) context_pane

0x579e,	// (0x00042fe2) navi_pane

0x57c2,	// (0x00043006) popup_cale_events_window_ParamLimits

0x57c2,	// (0x00043006) popup_cale_events_window

0xc88a,	// (0x0004a0ce) popup_mup_playback_window

0x57da,	// (0x0004301e) signal_pane

0xa8f4,	// (0x00048138) main_browser_pane

0xb41b,	// (0x00048c5f) main_burst_pane

0x5650,	// (0x00042e94) main_calc_pane

0xc81a,	// (0x0004a05e) main_cale_day_pane

0x28ca,	// (0x0004010e) main_cale_month_pane

0xc81a,	// (0x0004a05e) main_cale_week_pane

0xb41b,	// (0x00048c5f) main_call_pane

0xa5a6,	// (0x00047dea) main_call_poc_pane

0xb41b,	// (0x00048c5f) main_camera_pane

0xb41b,	// (0x00048c5f) main_chi_dic_pane

0xb28e,	// (0x00048ad2) main_clock_pane

0xa5a6,	// (0x00047dea) main_fmradio_pane

0xb41b,	// (0x00048c5f) main_graph_messa_pane

0xa5a6,	// (0x00047dea) main_help_pane

0xa8f4,	// (0x00048138) main_im_pane

0xa82f,	// (0x00048073) main_image_pane_ParamLimits

0xa82f,	// (0x00048073) main_image_pane

0xa5a6,	// (0x00047dea) main_location2_pane

0xb41b,	// (0x00048c5f) main_location_pane

0xa82f,	// (0x00048073) main_messa_pane

0xa5a6,	// (0x00047dea) main_mp2_pane

0xb41b,	// (0x00048c5f) main_mp_pane

0xa5a6,	// (0x00047dea) main_msg_pane

0xa5a6,	// (0x00047dea) main_mup_eq_pane

0xa5a6,	// (0x00047dea) main_mup_pane

0xa8f4,	// (0x00048138) main_notes_pane

0xa5a6,	// (0x00047dea) main_pec_pane

0xa5a6,	// (0x00047dea) main_phob_pane

0xa5a6,	// (0x00047dea) main_pinb_pane

0xa5a6,	// (0x00047dea) main_postcard_pane

0xa5a6,	// (0x00047dea) main_qdial_pane

0xb41b,	// (0x00048c5f) main_skin_pane

0xa5a6,	// (0x00047dea) main_smil2_pane

0xb41b,	// (0x00048c5f) main_smil_pane

0xb41b,	// (0x00048c5f) main_video_pane

0xb41b,	// (0x00048c5f) main_video_tele_pane

0xa82f,	// (0x00048073) main_viewer_pane_ParamLimits

0xa82f,	// (0x00048073) main_viewer_pane

0xb41b,	// (0x00048c5f) main_vorec_pane

0x5688,	// (0x00042ecc) popup_blid_sat_info_window_ParamLimits

0x5688,	// (0x00042ecc) popup_blid_sat_info_window

0x56a2,	// (0x00042ee6) popup_dyc_status_message_window_ParamLimits

0x56a2,	// (0x00042ee6) popup_dyc_status_message_window

0x56b2,	// (0x00042ef6) popup_grid_large_graphic_window_ParamLimits

0x56b2,	// (0x00042ef6) popup_grid_large_graphic_window

0x572a,	// (0x00042f6e) popup_loc_request_window_ParamLimits

0x572a,	// (0x00042f6e) popup_loc_request_window

0x5772,	// (0x00042fb6) popup_wml_address_window_ParamLimits

0x5772,	// (0x00042fb6) popup_wml_address_window

0x5528,	// (0x00042d6c) call_muted_g1

0x51e7,	// (0x00042a2b) popup_call_audio_conf_window_ParamLimits

0x51e7,	// (0x00042a2b) popup_call_audio_conf_window

0x5538,	// (0x00042d7c) popup_call_audio_first_window_ParamLimits

0x5538,	// (0x00042d7c) popup_call_audio_first_window

0x5578,	// (0x00042dbc) popup_call_audio_in_window_ParamLimits

0x5578,	// (0x00042dbc) popup_call_audio_in_window

0x559c,	// (0x00042de0) popup_call_audio_out_window_ParamLimits

0x559c,	// (0x00042de0) popup_call_audio_out_window

0x55be,	// (0x00042e02) popup_call_audio_second_window_ParamLimits

0x55be,	// (0x00042e02) popup_call_audio_second_window

0x55ee,	// (0x00042e32) popup_call_audio_wait_window_ParamLimits

0x55ee,	// (0x00042e32) popup_call_audio_wait_window

0x560f,	// (0x00042e53) popup_number_entry_window_ParamLimits

0x560f,	// (0x00042e53) popup_number_entry_window

0xa193,	// (0x000479d7) bg_popup_call_pane_cp05_ParamLimits

0xa193,	// (0x000479d7) bg_popup_call_pane_cp05

0xa1b3,	// (0x000479f7) popup_number_entry_window_t1

0xa1c6,	// (0x00047a0a) popup_number_entry_window_t2

0xa1d8,	// (0x00047a1c) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0004c917) popup_number_entry_window_t

0xa1ea,	// (0x00047a2e) text_title_cp2

0xa1fd,	// (0x00047a41) bg_popup_call_pane_cp_ParamLimits

0xa1fd,	// (0x00047a41) bg_popup_call_pane_cp

0xa20b,	// (0x00047a4f) call_thumbnail_pane

0xa213,	// (0x00047a57) popup_call_audio_in_window_g1_ParamLimits

0xa213,	// (0x00047a57) popup_call_audio_in_window_g1

0xa21f,	// (0x00047a63) popup_call_audio_in_window_g2_ParamLimits

0xa21f,	// (0x00047a63) popup_call_audio_in_window_g2

0xa22b,	// (0x00047a6f) popup_call_audio_in_window_g3_ParamLimits

0xa22b,	// (0x00047a6f) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0004c920) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0004c920) popup_call_audio_in_window_g

0xa237,	// (0x00047a7b) popup_call_audio_in_window_t1_ParamLimits

0xa237,	// (0x00047a7b) popup_call_audio_in_window_t1

0xa253,	// (0x00047a97) popup_call_audio_in_window_t2_ParamLimits

0xa253,	// (0x00047a97) popup_call_audio_in_window_t2

0xa26f,	// (0x00047ab3) popup_call_audio_in_window_t3_ParamLimits

0xa26f,	// (0x00047ab3) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0004c927) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0004c927) popup_call_audio_in_window_t

0xa1fd,	// (0x00047a41) bg_popup_call_pane_cp01_ParamLimits

0xa1fd,	// (0x00047a41) bg_popup_call_pane_cp01

0xa20b,	// (0x00047a4f) call_thumbnail_pane_cp02

0xa282,	// (0x00047ac6) call_type_pane_cp022

0xa28a,	// (0x00047ace) popup_call_audio_out_window_g1_ParamLimits

0xa28a,	// (0x00047ace) popup_call_audio_out_window_g1

0xa29c,	// (0x00047ae0) popup_call_audio_out_window_g2_ParamLimits

0xa29c,	// (0x00047ae0) popup_call_audio_out_window_g2

0xa2a8,	// (0x00047aec) popup_call_audio_out_window_g3_ParamLimits

0xa2a8,	// (0x00047aec) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0004c92e) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0004c92e) popup_call_audio_out_window_g

0xa2ba,	// (0x00047afe) popup_call_audio_out_window_t1_ParamLimits

0xa2ba,	// (0x00047afe) popup_call_audio_out_window_t1

0xa2d2,	// (0x00047b16) popup_call_audio_out_window_t2_ParamLimits

0xa2d2,	// (0x00047b16) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0004c935) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0004c935) popup_call_audio_out_window_t

0xa2e7,	// (0x00047b2b) bg_popup_call_pane_ParamLimits

0xa2e7,	// (0x00047b2b) bg_popup_call_pane

0x23b4,	// (0x0003fbf8) call_thumbnail_pane_cp_ParamLimits

0x23b4,	// (0x0003fbf8) call_thumbnail_pane_cp

0xa36b,	// (0x00047baf) call_type_pane_cp01_ParamLimits

0xa36b,	// (0x00047baf) call_type_pane_cp01

0xa3af,	// (0x00047bf3) popup_call_audio_first_window_g1_ParamLimits

0xa3af,	// (0x00047bf3) popup_call_audio_first_window_g1

0xa3fb,	// (0x00047c3f) popup_call_audio_first_window_g2_ParamLimits

0xa3fb,	// (0x00047c3f) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0004c93a) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0004c93a) popup_call_audio_first_window_g

0xa43f,	// (0x00047c83) popup_call_audio_first_window_t1_ParamLimits

0xa43f,	// (0x00047c83) popup_call_audio_first_window_t1

0xa4eb,	// (0x00047d2f) popup_call_audio_first_window_t4_ParamLimits

0xa4eb,	// (0x00047d2f) popup_call_audio_first_window_t4

0xa577,	// (0x00047dbb) popup_call_audio_first_window_t5_ParamLimits

0xa577,	// (0x00047dbb) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0004c93f) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0004c93f) popup_call_audio_first_window_t

0xa5a6,	// (0x00047dea) bg_popup_call_pane_cp02

0xa5b0,	// (0x00047df4) call_type_pane_cp023

0xa5b8,	// (0x00047dfc) popup_call_audio_wait_window_g1

0xa5c0,	// (0x00047e04) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0004c946) popup_call_audio_wait_window_g

0xa5c8,	// (0x00047e0c) popup_call_audio_wait_window_t3

0xa5d6,	// (0x00047e1a) bg_popup_call_pane_cp03_ParamLimits

0xa5d6,	// (0x00047e1a) bg_popup_call_pane_cp03

0xa636,	// (0x00047e7a) call_thumbnail_pane_cp011_ParamLimits

0xa636,	// (0x00047e7a) call_thumbnail_pane_cp011

0xa642,	// (0x00047e86) call_type_pane_cp034_ParamLimits

0xa642,	// (0x00047e86) call_type_pane_cp034

0xa67e,	// (0x00047ec2) popup_call_audio_second_window_g1_ParamLimits

0xa67e,	// (0x00047ec2) popup_call_audio_second_window_g1

0xa6ba,	// (0x00047efe) popup_call_audio_second_window_g2_ParamLimits

0xa6ba,	// (0x00047efe) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0004c94b) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0004c94b) popup_call_audio_second_window_g

0xa6f6,	// (0x00047f3a) popup_call_audio_second_window_t1_ParamLimits

0xa6f6,	// (0x00047f3a) popup_call_audio_second_window_t1

0xa777,	// (0x00047fbb) popup_call_audio_second_window_t2_ParamLimits

0xa777,	// (0x00047fbb) popup_call_audio_second_window_t2

0xa7db,	// (0x0004801f) popup_call_audio_second_window_t3_ParamLimits

0xa7db,	// (0x0004801f) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0004c950) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0004c950) popup_call_audio_second_window_t

0xa5a6,	// (0x00047dea) bg_popup_call_pane_cp04

0xa811,	// (0x00048055) list_conf_pane

0xa819,	// (0x0004805d) popup_call_audio_conf_window_t1

0xa827,	// (0x0004806b) call_thumbnail_pane_g1

0xa82f,	// (0x00048073) bg_pinb_pane_ParamLimits

0xa82f,	// (0x00048073) bg_pinb_pane

0xa83d,	// (0x00048081) find_pinb_pane

0xa846,	// (0x0004808a) listscroll_pinb_pane_ParamLimits

0xa846,	// (0x0004808a) listscroll_pinb_pane

0xa855,	// (0x00048099) pinb_bg_pane_g1

0x23d8,	// (0x0003fc1c) pinb_bg_pane_g2

0x23e4,	// (0x0003fc28) pinb_bg_pane_g3

0x23f0,	// (0x0003fc34) pinb_bg_pane_g4

0x23fc,	// (0x0003fc40) pinb_bg_pane_g5

0x2408,	// (0x0003fc4c) pinb_bg_pane_g6

0x2413,	// (0x0003fc57) pinb_bg_pane_g7

0x241e,	// (0x0003fc62) pinb_bg_pane_g8

0x2429,	// (0x0003fc6d) pinb_bg_pane_g9

0x2433,	// (0x0003fc77) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0004c957) pinb_bg_pane_g

0x2450,	// (0x0003fc94) grid_pinb_pane

0x245b,	// (0x0003fc9f) list_pinb_pane

0x2466,	// (0x0003fcaa) scroll_pane_cp01_ParamLimits

0x2466,	// (0x0003fcaa) scroll_pane_cp01

0xa85f,	// (0x000480a3) find_pinb_pane_g1_ParamLimits

0xa85f,	// (0x000480a3) find_pinb_pane_g1

0xa877,	// (0x000480bb) find_pinb_pane_t1

0xa889,	// (0x000480cd) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0004c971) find_pinb_pane_t

0xa89e,	// (0x000480e2) input_focus_pane_cp01_ParamLimits

0xa89e,	// (0x000480e2) input_focus_pane_cp01

0x2478,	// (0x0003fcbc) cell_pinb_pane_ParamLimits

0x2478,	// (0x0003fcbc) cell_pinb_pane

0x249d,	// (0x0003fce1) cell_pinb_pane_g1_ParamLimits

0x249d,	// (0x0003fce1) cell_pinb_pane_g1

0x24b2,	// (0x0003fcf6) cell_pinb_pane_g2_ParamLimits

0x24b2,	// (0x0003fcf6) cell_pinb_pane_g2

0xa8aa,	// (0x000480ee) cell_pinb_pane_g3_ParamLimits

0xa8aa,	// (0x000480ee) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0004c976) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0004c976) cell_pinb_pane_g

0xa5a6,	// (0x00047dea) grid_highlight_pane_cp01

0x24be,	// (0x0003fd02) list_pinb_item_pane_ParamLimits

0x24be,	// (0x0003fd02) list_pinb_item_pane

0xa5a6,	// (0x00047dea) list_highlight_pane_cp02

0x24dc,	// (0x0003fd20) list_pinb_item_pane_g1_ParamLimits

0x24dc,	// (0x0003fd20) list_pinb_item_pane_g1

0x24e9,	// (0x0003fd2d) list_pinb_item_pane_g2_ParamLimits

0x24e9,	// (0x0003fd2d) list_pinb_item_pane_g2

0x24f5,	// (0x0003fd39) list_pinb_item_pane_g3_ParamLimits

0x24f5,	// (0x0003fd39) list_pinb_item_pane_g3

0x2506,	// (0x0003fd4a) list_pinb_item_pane_g4_ParamLimits

0x2506,	// (0x0003fd4a) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0004c97d) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0004c97d) list_pinb_item_pane_g

0x2512,	// (0x0003fd56) list_pinb_item_pane_t1_ParamLimits

0x2512,	// (0x0003fd56) list_pinb_item_pane_t1

0x2543,	// (0x0003fd87) calc_display_pane

0x2561,	// (0x0003fda5) calc_paper_pane

0x257d,	// (0x0003fdc1) grid_calc_pane

0xa5a6,	// (0x00047dea) bg_list_pane_cp01

0x25a9,	// (0x0003fded) clock_g1

0x25b1,	// (0x0003fdf5) clock_g2

0x0001,

0xf142,	// (0x0004c986) clock_g

0x25bb,	// (0x0003fdff) clock_t1_ParamLimits

0x25bb,	// (0x0003fdff) clock_t1

0x25d0,	// (0x0003fe14) clock_t2_ParamLimits

0x25d0,	// (0x0003fe14) clock_t2

0x25e2,	// (0x0003fe26) clock_t3_ParamLimits

0x25e2,	// (0x0003fe26) clock_t3

0x25f4,	// (0x0003fe38) clock_t4_ParamLimits

0x25f4,	// (0x0003fe38) clock_t4

0x2606,	// (0x0003fe4a) clock_t5_ParamLimits

0x2606,	// (0x0003fe4a) clock_t5

0x261b,	// (0x0003fe5f) clock_t6_ParamLimits

0x261b,	// (0x0003fe5f) clock_t6

0x262d,	// (0x0003fe71) clock_t7_ParamLimits

0x262d,	// (0x0003fe71) clock_t7

0x263f,	// (0x0003fe83) clock_t8_ParamLimits

0x263f,	// (0x0003fe83) clock_t8

0x2655,	// (0x0003fe99) clock_t9_ParamLimits

0x2655,	// (0x0003fe99) clock_t9

0x0008,

0xf147,	// (0x0004c98b) clock_t_ParamLimits

0xf147,	// (0x0004c98b) clock_t

0xa8b6,	// (0x000480fa) popup_clock_analogue_window_cp02

0xa8b6,	// (0x000480fa) popup_clock_digital_window_cp01

0xa8be,	// (0x00048102) listscroll_help_pane

0xa5a6,	// (0x00047dea) phob_pre_status_pane

0xa8c8,	// (0x0004810c) grid_qdial_pane

0xa82f,	// (0x00048073) listscroll_mce_pane

0xa82f,	// (0x00048073) bg_notes_pane

0xa8d2,	// (0x00048116) list_notes_pane

0x266b,	// (0x0003feaf) scroll_pane_cp06

0xa8e0,	// (0x00048124) bg_calc_paper_pane

0x267a,	// (0x0003febe) list_calc_pane

0xa8f4,	// (0x00048138) bg_calc_display_pane

0x2694,	// (0x0003fed8) calc_display_pane_t1

0x26a9,	// (0x0003feed) calc_display_pane_t2

0x26be,	// (0x0003ff02) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0004c99e) calc_display_pane_t

0x26d0,	// (0x0003ff14) cell_calc_pane_ParamLimits

0x26d0,	// (0x0003ff14) cell_calc_pane

0xa900,	// (0x00048144) bg_calc_paper_pane_g1

0xa90c,	// (0x00048150) bg_calc_paper_pane_g2

0xa918,	// (0x0004815c) bg_calc_paper_pane_g3

0xa924,	// (0x00048168) bg_calc_paper_pane_g4

0xa930,	// (0x00048174) bg_calc_paper_pane_g5

0x26ff,	// (0x0003ff43) bg_calc_paper_pane_g6

0x2710,	// (0x0003ff54) bg_calc_paper_pane_g7

0x2721,	// (0x0003ff65) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0004c9a5) bg_calc_paper_pane_g

0x2734,	// (0x0003ff78) calc_bg_paper_pane_g9

0x2747,	// (0x0003ff8b) list_calc_item_pane_ParamLimits

0x2747,	// (0x0003ff8b) list_calc_item_pane

0xa93c,	// (0x00048180) list_calc_item_pane_g1

0x2768,	// (0x0003ffac) list_calc_item_pane_t1_ParamLimits

0x2768,	// (0x0003ffac) list_calc_item_pane_t1

0x277a,	// (0x0003ffbe) list_calc_item_pane_t2_ParamLimits

0x277a,	// (0x0003ffbe) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0004c9b6) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0004c9b6) list_calc_item_pane_t

0xa949,	// (0x0004818d) cell_calc_pane_g1

0xa953,	// (0x00048197) grid_highlight_pane_cp02

0xa975,	// (0x000481b9) bg_calc_display_pane_g1

0x27aa,	// (0x0003ffee) bg_calc_display_pane_g2

0xa97e,	// (0x000481c2) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0004c9c0) bg_calc_display_pane_g

0x27b4,	// (0x0003fff8) cell_qdial_pane_ParamLimits

0x27b4,	// (0x0003fff8) cell_qdial_pane

0x27ca,	// (0x0004000e) cell_qdial_pane_g1_ParamLimits

0x27ca,	// (0x0004000e) cell_qdial_pane_g1

0x27d7,	// (0x0004001b) cell_qdial_pane_g2_ParamLimits

0x27d7,	// (0x0004001b) cell_qdial_pane_g2

0xa987,	// (0x000481cb) cell_qdial_pane_g3_ParamLimits

0xa987,	// (0x000481cb) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0004c9c7) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0004c9c7) cell_qdial_pane_g

0x27f5,	// (0x00040039) cell_qdial_pane_t1_ParamLimits

0x27f5,	// (0x00040039) cell_qdial_pane_t1

0x280d,	// (0x00040051) cell_qdial_pane_t2_ParamLimits

0x280d,	// (0x00040051) cell_qdial_pane_t2

0x2820,	// (0x00040064) cell_qdial_pane_t3_ParamLimits

0x2820,	// (0x00040064) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0004c9d0) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0004c9d0) cell_qdial_pane_t

0xa5a6,	// (0x00047dea) grid_highlight_pane_cp04

0xa993,	// (0x000481d7) thumbnail_qdial_pane_ParamLimits

0xa993,	// (0x000481d7) thumbnail_qdial_pane

0xa9ef,	// (0x00048233) list_help_pane

0xa9f8,	// (0x0004823c) scroll_pane_cp02

0x2833,	// (0x00040077) help_list_pane_t1_ParamLimits

0x2833,	// (0x00040077) help_list_pane_t1

0x285a,	// (0x0004009e) bg_notes_pane_g2

0x2862,	// (0x000400a6) bg_notes_pane_g3

0x286a,	// (0x000400ae) notes_bg_pane_g1

0x2872,	// (0x000400b6) notes_bg_pane_g4

0x287a,	// (0x000400be) notes_bg_pane_g5

0x2882,	// (0x000400c6) notes_bg_pane_g6

0x288a,	// (0x000400ce) notes_bg_pane_g7

0x2892,	// (0x000400d6) notes_bg_pane_g8

0x289a,	// (0x000400de) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0004c9ee) notes_bg_pane_g

0x28a2,	// (0x000400e6) list_notes_text_pane_ParamLimits

0x28a2,	// (0x000400e6) list_notes_text_pane

0xaa01,	// (0x00048245) list_notes_text_pane_g1

0x0dec,	// (0x0003e630) list_notes_text_pane_t1

0x28ca,	// (0x0004010e) listscroll_cale_week_pane

0x2902,	// (0x00040146) bg_cale_heading_pane

0xaa1b,	// (0x0004825f) bg_cale_pane_cp01

0x292b,	// (0x0004016f) cale_week_corner_pane

0x294a,	// (0x0004018e) cale_week_day_heading_pane

0x2978,	// (0x000401bc) cale_week_scroll_pane_g1

0x299c,	// (0x000401e0) cale_week_scroll_pane_g2

0x29b4,	// (0x000401f8) cale_week_scroll_pane_g3

0x29cc,	// (0x00040210) cale_week_scroll_pane_g4

0x29e4,	// (0x00040228) cale_week_scroll_pane_g5

0x29fc,	// (0x00040240) cale_week_scroll_pane_g6

0x2a18,	// (0x0004025c) cale_week_scroll_pane_g7

0x2a34,	// (0x00040278) cale_week_scroll_pane_g8

0x2a50,	// (0x00040294) cale_week_scroll_pane_g9

0x2a6d,	// (0x000402b1) cale_week_scroll_pane_g10

0x2a8a,	// (0x000402ce) cale_week_scroll_pane_g11

0x2aa7,	// (0x000402eb) cale_week_scroll_pane_g12

0x2ac4,	// (0x00040308) cale_week_scroll_pane_g13

0x2ae1,	// (0x00040325) cale_week_scroll_pane_g14

0x2b0a,	// (0x0004034e) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0004c9fd) cale_week_scroll_pane_g

0x2b33,	// (0x00040377) cale_week_time_pane

0x2b4f,	// (0x00040393) grid_cale_week_pane

0xaa4b,	// (0x0004828f) scroll_pane_cp08

0x2b7e,	// (0x000403c2) cell_cale_week_pane_ParamLimits

0x2b7e,	// (0x000403c2) cell_cale_week_pane

0x2bfe,	// (0x00040442) cale_week_day_heading_pane_t1

0x2c44,	// (0x00040488) cale_week_day_heading_pane_t2

0x2c8f,	// (0x000404d3) cale_week_day_heading_pane_t3

0x2cda,	// (0x0004051e) cale_week_day_heading_pane_t4

0x2d25,	// (0x00040569) cale_week_day_heading_pane_t5

0x2d70,	// (0x000405b4) cale_week_day_heading_pane_t6

0x2dbb,	// (0x000405ff) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0004ca1c) cale_week_day_heading_pane_t

0xaa6d,	// (0x000482b1) bg_cale_side_pane

0x2e01,	// (0x00040645) cale_week_time_pane_t1

0x2e45,	// (0x00040689) cale_week_time_pane_t2

0x2e89,	// (0x000406cd) cale_week_time_pane_t3

0x2ecd,	// (0x00040711) cale_week_time_pane_t4

0x2f11,	// (0x00040755) cale_week_time_pane_t5

0x2f55,	// (0x00040799) cale_week_time_pane_t6

0x2f99,	// (0x000407dd) cale_week_time_pane_t7

0x2fdd,	// (0x00040821) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0004ca2b) cale_week_time_pane_t

0x3027,	// (0x0004086b) cell_cale_week_pane_g2

0x304b,	// (0x0004088f) cell_cale_week_pane_g3_ParamLimits

0x304b,	// (0x0004088f) cell_cale_week_pane_g3

0xaa7b,	// (0x000482bf) grid_highlight_pane_cp07

0xaa83,	// (0x000482c7) listscroll_gms_pane

0xaa8d,	// (0x000482d1) grid_gms_pane

0xaa96,	// (0x000482da) listscroll_gms_pane_g1

0xaa9e,	// (0x000482e2) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0004ca3c) listscroll_gms_pane_g

0x3063,	// (0x000408a7) scroll_pane_cp010

0x306e,	// (0x000408b2) cell_gms_pane_ParamLimits

0x306e,	// (0x000408b2) cell_gms_pane

0x3081,	// (0x000408c5) cell_gms_pane_g1

0xaaa6,	// (0x000482ea) cell_gms_pane_g2

0xaaae,	// (0x000482f2) cell_gms_pane_g3

0xaab7,	// (0x000482fb) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0004ca41) cell_gms_pane_g

0xaac0,	// (0x00048304) grid_highlight_pane_cp09

0x54d0,	// (0x00042d14) phob_pre_status_pane_g1

0x54d8,	// (0x00042d1c) phob_pre_status_pane_g2

0x54e0,	// (0x00042d24) phob_pre_status_pane_g3

0x54e8,	// (0x00042d2c) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0004ce30) phob_pre_status_pane_g

0x54f8,	// (0x00042d3c) phob_pre_status_pane_t1

0x5508,	// (0x00042d4c) phob_pre_status_pane_t2

0x5518,	// (0x00042d5c) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0004ce3b) phob_pre_status_pane_t

0xa5a6,	// (0x00047dea) bg_list_pane_cp05

0x3091,	// (0x000408d5) grid_vorec_pane

0x309d,	// (0x000408e1) vorec_t1

0x30ab,	// (0x000408ef) vorec_t2

0x30b9,	// (0x000408fd) vorec_t3

0x30c7,	// (0x0004090b) vorec_t4

0x30d5,	// (0x00040919) vorec_t5

0x30e3,	// (0x00040927) vorec_t6

0x0006,

0xf206,	// (0x0004ca4a) vorec_t

0x30ff,	// (0x00040943) wait_bar_pane_cp01

0x3107,	// (0x0004094b) cell_vorec_pane_ParamLimits

0x3107,	// (0x0004094b) cell_vorec_pane

0xaac8,	// (0x0004830c) cell_vorec_pane_g1

0xa5a6,	// (0x00047dea) grid_highlight_pane_cp05

0x312a,	// (0x0004096e) cams_zoom_pane

0x3136,	// (0x0004097a) image_vga_pane

0x3145,	// (0x00040989) main_camera_pane_g1

0x3153,	// (0x00040997) main_camera_pane_g2

0x315f,	// (0x000409a3) main_camera_pane_g3

0x316d,	// (0x000409b1) main_camera_pane_g4

0x317b,	// (0x000409bf) main_camera_pane_g5

0x3189,	// (0x000409cd) main_camera_pane_g6

0x3197,	// (0x000409db) main_camera_pane_g7

0x0007,

0xf215,	// (0x0004ca59) main_camera_pane_g

0x31a5,	// (0x000409e9) main_camera_pane_t1

0x31b7,	// (0x000409fb) main_camera_pane_t2

0x0001,

0xf226,	// (0x0004ca6a) main_camera_pane_t

0x31da,	// (0x00040a1e) cams_zoom_pane_cp_ParamLimits

0x31da,	// (0x00040a1e) cams_zoom_pane_cp

0x31fe,	// (0x00040a42) image_cif_pane_ParamLimits

0x31fe,	// (0x00040a42) image_cif_pane

0x321c,	// (0x00040a60) image_subqcif_pane

0x3226,	// (0x00040a6a) main_video_pane_g1_ParamLimits

0x3226,	// (0x00040a6a) main_video_pane_g1

0x3246,	// (0x00040a8a) main_video_pane_g2_ParamLimits

0x3246,	// (0x00040a8a) main_video_pane_g2

0x3276,	// (0x00040aba) main_video_pane_g3_ParamLimits

0x3276,	// (0x00040aba) main_video_pane_g3

0x329f,	// (0x00040ae3) main_video_pane_g4_ParamLimits

0x329f,	// (0x00040ae3) main_video_pane_g4

0x32c8,	// (0x00040b0c) main_video_pane_g5_ParamLimits

0x32c8,	// (0x00040b0c) main_video_pane_g5

0xaade,	// (0x00048322) main_video_pane_g6_ParamLimits

0xaade,	// (0x00048322) main_video_pane_g6

0x0006,

0xf22b,	// (0x0004ca6f) main_video_pane_g_ParamLimits

0xf22b,	// (0x0004ca6f) main_video_pane_g

0x32ea,	// (0x00040b2e) main_video_pane_t1_ParamLimits

0x32ea,	// (0x00040b2e) main_video_pane_t1

0xaaf8,	// (0x0004833c) cams_zoom_pane_g1

0xab01,	// (0x00048345) cams_zoom_pane_g2

0xab0a,	// (0x0004834e) cams_zoom_pane_g3

0xab13,	// (0x00048357) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0004ca7e) cams_zoom_pane_g

0x3334,	// (0x00040b78) grid_cams_pane

0x3342,	// (0x00040b86) linegrid_cams_pane

0x334e,	// (0x00040b92) cell_cams_pane_ParamLimits

0x334e,	// (0x00040b92) cell_cams_pane

0xab1c,	// (0x00048360) cams_burst_image_pane

0xab24,	// (0x00048368) cell_cams_pane_g1

0xa5a6,	// (0x00047dea) grid_highlight_pane_cp03

0xa949,	// (0x0004818d) mp_bg_pane_g1

0xa5a6,	// (0x00047dea) bg_list_pane_cp03

0xc73d,	// (0x00049f81) bg_mp_pane

0xc745,	// (0x00049f89) grid_mp_pane

0xc74d,	// (0x00049f91) media_player_g1

0xc757,	// (0x00049f9b) media_player_t1

0xc765,	// (0x00049fa9) media_player_t2

0xc773,	// (0x00049fb7) media_player_t3

0xc781,	// (0x00049fc5) media_player_t4

0xc78f,	// (0x00049fd3) media_player_t5

0xc79d,	// (0x00049fe1) media_player_t6

0xc7ab,	// (0x00049fef) media_player_t7

0x0006,

0xf5d6,	// (0x0004ce1a) media_player_t

0xc7b9,	// (0x00049ffd) wait_bar_pane_cp02

0xf5bb,	// (0x0004cdff) main_usb_pane_t

0x54c7,	// (0x00042d0b) cell_mp_pane

0xa949,	// (0x0004818d) cell_mp_pane_g1

0xa5a6,	// (0x00047dea) grid_highlight_pane_cp06

0xab2c,	// (0x00048370) grid_skin_colour_pane

0xab34,	// (0x00048378) list_highlight_pane_cp03

0x3363,	// (0x00040ba7) skin_g1

0xab3c,	// (0x00048380) skin_t1

0xab4b,	// (0x0004838f) skin_t2

0x0001,

0xf26f,	// (0x0004cab3) skin_t

0x336d,	// (0x00040bb1) cell_skin_colour_pane_ParamLimits

0x336d,	// (0x00040bb1) cell_skin_colour_pane

0xab59,	// (0x0004839d) cell_skin_colour_pane_g1

0x33ed,	// (0x00040c31) call_video_g1_ParamLimits

0x33ed,	// (0x00040c31) call_video_g1

0x33fd,	// (0x00040c41) call_video_g2_ParamLimits

0x33fd,	// (0x00040c41) call_video_g2

0x0001,

0xf274,	// (0x0004cab8) call_video_g_ParamLimits

0xf274,	// (0x0004cab8) call_video_g

0x344d,	// (0x00040c91) call_video_uplink_pane_cp1_ParamLimits

0x344d,	// (0x00040c91) call_video_uplink_pane_cp1

0xab6b,	// (0x000483af) call_video_uplink_pane_cp2

0x351b,	// (0x00040d5f) video_down_crop_pane_ParamLimits

0x351b,	// (0x00040d5f) video_down_crop_pane

0x360d,	// (0x00040e51) video_down_pane_ParamLimits

0x360d,	// (0x00040e51) video_down_pane

0xab73,	// (0x000483b7) video_down_subqcif_pane_ParamLimits

0xab73,	// (0x000483b7) video_down_subqcif_pane

0xab8d,	// (0x000483d1) video_down_subqcif_pane_cp_ParamLimits

0xab8d,	// (0x000483d1) video_down_subqcif_pane_cp

0xabb5,	// (0x000483f9) im_reading_pane_ParamLimits

0xabb5,	// (0x000483f9) im_reading_pane

0x372a,	// (0x00040f6e) im_writing_pane_ParamLimits

0x372a,	// (0x00040f6e) im_writing_pane

0x3748,	// (0x00040f8c) im_reading_pane_t1

0xabcf,	// (0x00048413) list_im_pane

0xabe0,	// (0x00048424) scroll_pane_cp07

0x378a,	// (0x00040fce) im_writing_pane_t1_ParamLimits

0x378a,	// (0x00040fce) im_writing_pane_t1

0xabf9,	// (0x0004843d) im_writing_pane_t2_ParamLimits

0xabf9,	// (0x0004843d) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0004cac2) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0004cac2) im_writing_pane_t

0xa5a6,	// (0x00047dea) input_focus_pane_cp04

0xa5a6,	// (0x00047dea) input_focus_pane_cp05

0x379c,	// (0x00040fe0) list_im_single_pane_ParamLimits

0x379c,	// (0x00040fe0) list_im_single_pane

0x37b5,	// (0x00040ff9) list_single_im_pane_t1

0x548b,	// (0x00042ccf) blid_accuracy_pane

0x5493,	// (0x00042cd7) blid_compass_pane

0x549d,	// (0x00042ce1) main_location_t1

0x54ab,	// (0x00042cef) main_location_t2

0x54b9,	// (0x00042cfd) main_location_t3

0x0002,

0xf5e5,	// (0x0004ce29) main_location_t

0xa5a6,	// (0x00047dea) aid_levels_location

0xa949,	// (0x0004818d) blid_accuracy_pane_g1

0xa949,	// (0x0004818d) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0004cb24) blid_accuracy_pane_g

0xac41,	// (0x00048485) wml_content_pane

0xac7f,	// (0x000484c3) wml_button_pane_ParamLimits

0xac7f,	// (0x000484c3) wml_button_pane

0x37c4,	// (0x00041008) wml_list_single_large_pane_ParamLimits

0x37c4,	// (0x00041008) wml_list_single_large_pane

0x37e6,	// (0x0004102a) wml_list_single_medium_pane_ParamLimits

0x37e6,	// (0x0004102a) wml_list_single_medium_pane

0x3809,	// (0x0004104d) wml_list_single_small_pane_ParamLimits

0x3809,	// (0x0004104d) wml_list_single_small_pane

0xac93,	// (0x000484d7) wml_selection_box_pane_ParamLimits

0xac93,	// (0x000484d7) wml_selection_box_pane

0xaca6,	// (0x000484ea) wml_list_single_pane_t1

0xacb5,	// (0x000484f9) wml_list_single_medium_pane_t1

0xacc4,	// (0x00048508) wml_list_single_large_pane_t1

0xacd3,	// (0x00048517) input_focus_pane_cp02_ParamLimits

0xacd3,	// (0x00048517) input_focus_pane_cp02

0xace6,	// (0x0004852a) wml_selection_box_pane_g1

0xacef,	// (0x00048533) wml_selection_box_pane_t1_ParamLimits

0xacef,	// (0x00048533) wml_selection_box_pane_t1

0xa82f,	// (0x00048073) bg_wml_button_pane_ParamLimits

0xa82f,	// (0x00048073) bg_wml_button_pane

0xad07,	// (0x0004854b) wml_button_pane_g1

0xad0f,	// (0x00048553) wml_button_pane_t1

0xad07,	// (0x0004854b) wml_button_bg_pane_g1

0xad1f,	// (0x00048563) wml_button_bg_pane_g2

0xad27,	// (0x0004856b) wml_button_bg_pane_g3

0xad2f,	// (0x00048573) wml_button_bg_pane_g4

0xad37,	// (0x0004857b) wml_button_bg_pane_g5

0xad3f,	// (0x00048583) wml_button_bg_pane_g6

0xad47,	// (0x0004858b) wml_button_bg_pane_g7

0xad4f,	// (0x00048593) wml_button_bg_pane_g8

0xad57,	// (0x0004859b) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0004cac7) wml_button_bg_pane_g

0x3831,	// (0x00041075) bg_list_pane_cp02

0xad5f,	// (0x000485a3) mce_header_pane_ParamLimits

0xad5f,	// (0x000485a3) mce_header_pane

0xad75,	// (0x000485b9) mce_icon_pane

0xad75,	// (0x000485b9) mce_image_pane

0xad7e,	// (0x000485c2) mce_text_pane_ParamLimits

0xad7e,	// (0x000485c2) mce_text_pane

0x383b,	// (0x0004107f) scroll_pane_cp03

0xac77,	// (0x000484bb) scroll_pane_cp04

0xad91,	// (0x000485d5) scroll_pane_cp05_ParamLimits

0xad91,	// (0x000485d5) scroll_pane_cp05

0x3845,	// (0x00041089) mce_header_field_pane_ParamLimits

0x3845,	// (0x00041089) mce_header_field_pane

0x3867,	// (0x000410ab) mce_header_field_pane_2_ParamLimits

0x3867,	// (0x000410ab) mce_header_field_pane_2

0x387d,	// (0x000410c1) mce_header_field_pane_3

0x3885,	// (0x000410c9) list_single_mce_message_pane_ParamLimits

0x3885,	// (0x000410c9) list_single_mce_message_pane

0x38a4,	// (0x000410e8) list_single_mce_smart_pane_ParamLimits

0x38a4,	// (0x000410e8) list_single_mce_smart_pane

0xad9d,	// (0x000485e1) input_focus_pane_cp03

0xada6,	// (0x000485ea) list_header_data_pane

0x38ce,	// (0x00041112) mce_header_field_pane_t1

0x38de,	// (0x00041122) list_single_mce_header_pane_ParamLimits

0x38de,	// (0x00041122) list_single_mce_header_pane

0xadae,	// (0x000485f2) list_single_mce_header_pane_t1

0xadbd,	// (0x00048601) list_single_mce_message_pane_g1

0xadc5,	// (0x00048609) list_single_mce_message_pane_t1

0x3922,	// (0x00041166) bg_cale_heading_pane_cp01_ParamLimits

0x3922,	// (0x00041166) bg_cale_heading_pane_cp01

0xadd3,	// (0x00048617) bg_cale_pane_cp02_ParamLimits

0xadd3,	// (0x00048617) bg_cale_pane_cp02

0x3969,	// (0x000411ad) cale_month_corner_pane

0x3988,	// (0x000411cc) cale_month_day_heading_pane_ParamLimits

0x3988,	// (0x000411cc) cale_month_day_heading_pane

0x39d7,	// (0x0004121b) cale_month_pane_g1_ParamLimits

0x39d7,	// (0x0004121b) cale_month_pane_g1

0x3a13,	// (0x00041257) cale_month_pane_g2_ParamLimits

0x3a13,	// (0x00041257) cale_month_pane_g2

0x3a47,	// (0x0004128b) cale_month_pane_g3_ParamLimits

0x3a47,	// (0x0004128b) cale_month_pane_g3

0x3a9b,	// (0x000412df) cale_month_pane_g4_ParamLimits

0x3a9b,	// (0x000412df) cale_month_pane_g4

0x3aef,	// (0x00041333) cale_month_pane_g5_ParamLimits

0x3aef,	// (0x00041333) cale_month_pane_g5

0x3b43,	// (0x00041387) cale_month_pane_g6_ParamLimits

0x3b43,	// (0x00041387) cale_month_pane_g6

0x3b9f,	// (0x000413e3) cale_month_pane_g7_ParamLimits

0x3b9f,	// (0x000413e3) cale_month_pane_g7

0x3bfb,	// (0x0004143f) cale_month_pane_g8_ParamLimits

0x3bfb,	// (0x0004143f) cale_month_pane_g8

0x3c57,	// (0x0004149b) cale_month_pane_g9_ParamLimits

0x3c57,	// (0x0004149b) cale_month_pane_g9

0x3ca7,	// (0x000414eb) cale_month_pane_g10_ParamLimits

0x3ca7,	// (0x000414eb) cale_month_pane_g10

0x3ced,	// (0x00041531) cale_month_pane_g11_ParamLimits

0x3ced,	// (0x00041531) cale_month_pane_g11

0x3d31,	// (0x00041575) cale_month_pane_g12_ParamLimits

0x3d31,	// (0x00041575) cale_month_pane_g12

0x3d79,	// (0x000415bd) cale_month_pane_g13_ParamLimits

0x3d79,	// (0x000415bd) cale_month_pane_g13

0x000c,

0xf296,	// (0x0004cada) cale_month_pane_g_ParamLimits

0xf296,	// (0x0004cada) cale_month_pane_g

0x3dc1,	// (0x00041605) cale_month_week_pane

0x3ddd,	// (0x00041621) grid_cale_month_pane_ParamLimits

0x3ddd,	// (0x00041621) grid_cale_month_pane

0x3e23,	// (0x00041667) cale_month_day_heading_pane_t1

0x3ea1,	// (0x000416e5) cale_month_day_heading_pane_t2

0x3f2a,	// (0x0004176e) cale_month_day_heading_pane_t3

0x3fb3,	// (0x000417f7) cale_month_day_heading_pane_t4

0x403c,	// (0x00041880) cale_month_day_heading_pane_t5

0x40c9,	// (0x0004190d) cale_month_day_heading_pane_t6

0x415a,	// (0x0004199e) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0004caf5) cale_month_day_heading_pane_t

0xaa6d,	// (0x000482b1) bg_cale_side_pane_cp01

0x41eb,	// (0x00041a2f) cale_month_week_pane_t1

0x4204,	// (0x00041a48) cale_month_week_pane_t2

0x421d,	// (0x00041a61) cale_month_week_pane_t3

0x4236,	// (0x00041a7a) cale_month_week_pane_t4

0x424f,	// (0x00041a93) cale_month_week_pane_t5

0x426a,	// (0x00041aae) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0004cb04) cale_month_week_pane_t

0x428b,	// (0x00041acf) cell_cale_month_pane_ParamLimits

0x428b,	// (0x00041acf) cell_cale_month_pane

0x4399,	// (0x00041bdd) cell_cale_month_pane_g1

0x43a5,	// (0x00041be9) cell_cale_month_pane_t1_ParamLimits

0x43a5,	// (0x00041be9) cell_cale_month_pane_t1

0xaa7b,	// (0x000482bf) grid_highlight_pane_cp08

0xa949,	// (0x0004818d) main_smil_g1

0x43c5,	// (0x00041c09) smil_status_pane

0xae12,	// (0x00048656) smil_text_pane

0xc65b,	// (0x00049e9f) bg_popup_call3_rect_pane_g8

0xc663,	// (0x00049ea7) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0004cdbd) bg_popup_call3_rect_pane_g

0xc8f1,	// (0x0004a135) smil_status_volume_pane_g1

0x43d8,	// (0x00041c1c) smil_status_pane_t1

0x587f,	// (0x000430c3) volume_smil_pane

0xae1c,	// (0x00048660) list_smil_text_pane

0x43ef,	// (0x00041c33) scroll_pane_cp011

0x43fa,	// (0x00041c3e) smil_text_list_pane_t1_ParamLimits

0x43fa,	// (0x00041c3e) smil_text_list_pane_t1

0x444c,	// (0x00041c90) aid_volume_smil_ParamLimits

0x444c,	// (0x00041c90) aid_volume_smil

0xa949,	// (0x0004818d) smil_volume_pane_g1

0xa949,	// (0x0004818d) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0004cb24) smil_volume_pane_g

0x28ca,	// (0x0004010e) listscroll_cale_day_pane

0xae26,	// (0x0004866a) bg_cale_pane

0xae3e,	// (0x00048682) list_cale_pane

0xae61,	// (0x000486a5) scroll_pane_cp09

0xae72,	// (0x000486b6) cale_bg_pane_g1

0xae7a,	// (0x000486be) cale_bg_pane_g2

0xae82,	// (0x000486c6) cale_bg_pane_g3

0xae8a,	// (0x000486ce) cale_bg_pane_g4

0xae92,	// (0x000486d6) cale_bg_pane_g5

0xae9a,	// (0x000486de) cale_bg_pane_g6

0xaea2,	// (0x000486e6) cale_bg_pane_g7

0xaeaa,	// (0x000486ee) cale_bg_pane_g8

0xaeb2,	// (0x000486f6) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0004cb29) cale_bg_pane_g

0x446e,	// (0x00041cb2) list_cale_time_pane_ParamLimits

0x446e,	// (0x00041cb2) list_cale_time_pane

0xaeba,	// (0x000486fe) list_cale_time_pane_g1_ParamLimits

0xaeba,	// (0x000486fe) list_cale_time_pane_g1

0xaec6,	// (0x0004870a) list_cale_time_pane_g2_ParamLimits

0xaec6,	// (0x0004870a) list_cale_time_pane_g2

0x4483,	// (0x00041cc7) list_cale_time_pane_g3_ParamLimits

0x4483,	// (0x00041cc7) list_cale_time_pane_g3

0x4491,	// (0x00041cd5) list_cale_time_pane_g4_ParamLimits

0x4491,	// (0x00041cd5) list_cale_time_pane_g4

0x449f,	// (0x00041ce3) list_cale_time_pane_g5_ParamLimits

0x449f,	// (0x00041ce3) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0004cb3c) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0004cb3c) list_cale_time_pane_g

0xaee0,	// (0x00048724) list_cale_time_pane_t1_ParamLimits

0xaee0,	// (0x00048724) list_cale_time_pane_t1

0xaf08,	// (0x0004874c) list_cale_time_pane_t2_ParamLimits

0xaf08,	// (0x0004874c) list_cale_time_pane_t2

0x4797,	// (0x00041fdb) aid_blid_cardinal_pane

0x47d9,	// (0x0004201d) compass_pane_t4

0xaf30,	// (0x00048774) list_cale_time_pane_t4_ParamLimits

0xaf30,	// (0x00048774) list_cale_time_pane_t4

0x47e7,	// (0x0004202b) compass_pane_t5

0x47f7,	// (0x0004203b) compass_pane_t6

0x4805,	// (0x00042049) compass_pane_t7

0xb33e,	// (0x00048b82) navi_pane_cc_t1

0xb4c2,	// (0x00048d06) aid_phob_thumbnail_center_pane

0x4f87,	// (0x000427cb) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0004cb49) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0004cb49) list_cale_time_pane_t

0xa1fd,	// (0x00047a41) bg_popup_window_pane_cp02_ParamLimits

0xa1fd,	// (0x00047a41) bg_popup_window_pane_cp02

0xaf58,	// (0x0004879c) heading_pane_cp01_ParamLimits

0xaf58,	// (0x0004879c) heading_pane_cp01

0xaf64,	// (0x000487a8) loc_req_pane_ParamLimits

0xaf64,	// (0x000487a8) loc_req_pane

0xaf74,	// (0x000487b8) loc_type_pane_ParamLimits

0xaf74,	// (0x000487b8) loc_type_pane

0xaf86,	// (0x000487ca) loc_type_pane_t1_ParamLimits

0xaf86,	// (0x000487ca) loc_type_pane_t1

0xaf98,	// (0x000487dc) loc_type_pane_t2_ParamLimits

0xaf98,	// (0x000487dc) loc_type_pane_t2

0xafaa,	// (0x000487ee) loc_type_pane_t3_ParamLimits

0xafaa,	// (0x000487ee) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0004cb50) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0004cb50) loc_type_pane_t

0xafbc,	// (0x00048800) list_loc_req_pane

0xafc6,	// (0x0004880a) scroll_pane_cp012

0x44ad,	// (0x00041cf1) list_single_loc_request_popup_menu_pane_ParamLimits

0x44ad,	// (0x00041cf1) list_single_loc_request_popup_menu_pane

0xafd1,	// (0x00048815) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafd1,	// (0x00048815) list_single_loc_request_popup_menu_pane_g1

0xafdd,	// (0x00048821) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafdd,	// (0x00048821) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0004cb57) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0004cb57) list_single_loc_request_popup_menu_pane_g

0xafe9,	// (0x0004882d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafe9,	// (0x0004882d) list_single_loc_request_popup_menu_pane_t1

0x44bf,	// (0x00041d03) bg_popup_window_pane_cp03_ParamLimits

0x44bf,	// (0x00041d03) bg_popup_window_pane_cp03

0x44cd,	// (0x00041d11) heading_loc_req_pane_ParamLimits

0x44cd,	// (0x00041d11) heading_loc_req_pane

0x44d9,	// (0x00041d1d) popup_dyc_status_message_window_g1_ParamLimits

0x44d9,	// (0x00041d1d) popup_dyc_status_message_window_g1

0x44e5,	// (0x00041d29) popup_dyc_status_message_window_t1_ParamLimits

0x44e5,	// (0x00041d29) popup_dyc_status_message_window_t1

0x44f7,	// (0x00041d3b) popup_dyc_status_message_window_t2_ParamLimits

0x44f7,	// (0x00041d3b) popup_dyc_status_message_window_t2

0x4509,	// (0x00041d4d) popup_dyc_status_message_window_t3_ParamLimits

0x4509,	// (0x00041d4d) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0004cb5c) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0004cb5c) popup_dyc_status_message_window_t

0xa5a6,	// (0x00047dea) bg_heading_pane_cp01

0xafff,	// (0x00048843) heading_loc_req_pane_g1

0xb007,	// (0x0004884b) heading_loc_req_pane_g2

0xb00f,	// (0x00048853) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0004cb63) heading_loc_req_pane_g

0xb017,	// (0x0004885b) heading_loc_req_pane_t1

0xb027,	// (0x0004886b) bg_popup_sub_pane_cp01_ParamLimits

0xb027,	// (0x0004886b) bg_popup_sub_pane_cp01

0xb035,	// (0x00048879) popup_cale_events_window_g1_ParamLimits

0xb035,	// (0x00048879) popup_cale_events_window_g1

0xb055,	// (0x00048899) popup_cale_events_window_g2_ParamLimits

0xb055,	// (0x00048899) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0004cb97) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0004cb97) popup_cale_events_window_g

0xb075,	// (0x000488b9) popup_cale_events_window_t1_ParamLimits

0xb075,	// (0x000488b9) popup_cale_events_window_t1

0xb087,	// (0x000488cb) popup_cale_events_window_t2_ParamLimits

0xb087,	// (0x000488cb) popup_cale_events_window_t2

0xb0c5,	// (0x00048909) popup_cale_events_window_t3_ParamLimits

0xb0c5,	// (0x00048909) popup_cale_events_window_t3

0xb0ff,	// (0x00048943) popup_cale_events_window_t4_ParamLimits

0xb0ff,	// (0x00048943) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0004cb9c) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0004cb9c) popup_cale_events_window_t

0x4533,	// (0x00041d77) call_type_pane

0xb3fd,	// (0x00048c41) popup_call_status_window_g1

0x453f,	// (0x00041d83) popup_call_status_window_g2

0x454b,	// (0x00041d8f) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0004cba5) popup_call_status_window_g

0xb135,	// (0x00048979) call_type_pane_g1

0xb13e,	// (0x00048982) call_type_pane_g2

0x0001,

0xf368,	// (0x0004cbac) call_type_pane_g

0xa5a6,	// (0x00047dea) bg_popup_sub_pane_cp02

0xb147,	// (0x0004898b) listscroll_popup_wml_pane

0xb14f,	// (0x00048993) list_wml_pane

0xb159,	// (0x0004899d) scroll_pane_cp013

0xb164,	// (0x000489a8) list_single_graphic_popup_wml_pane_ParamLimits

0xb164,	// (0x000489a8) list_single_graphic_popup_wml_pane

0xa949,	// (0x0004818d) list_single_graphic_popup_wml_pane_g1

0xb178,	// (0x000489bc) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0004cbb1) list_single_graphic_popup_wml_pane_g

0xb180,	// (0x000489c4) list_single_graphic_popup_wml_pane_t1

0xb196,	// (0x000489da) aid_call_pane

0xa827,	// (0x0004806b) popup_clock_analogue_window_g1

0xa827,	// (0x0004806b) popup_clock_analogue_window_g2

0x4557,	// (0x00041d9b) popup_clock_analogue_window_g3

0x4557,	// (0x00041d9b) popup_clock_analogue_window_g4

0xa949,	// (0x0004818d) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0004cbb6) popup_clock_analogue_window_g

0x455f,	// (0x00041da3) popup_clock_analogue_window_t1

0x456d,	// (0x00041db1) clock_digital_number_pane_ParamLimits

0x456d,	// (0x00041db1) clock_digital_number_pane

0x4579,	// (0x00041dbd) clock_digital_number_pane_cp02_ParamLimits

0x4579,	// (0x00041dbd) clock_digital_number_pane_cp02

0x4585,	// (0x00041dc9) clock_digital_number_pane_cp03_ParamLimits

0x4585,	// (0x00041dc9) clock_digital_number_pane_cp03

0x4591,	// (0x00041dd5) clock_digital_number_pane_cp04_ParamLimits

0x4591,	// (0x00041dd5) clock_digital_number_pane_cp04

0x459d,	// (0x00041de1) clock_digital_separator_pane_ParamLimits

0x459d,	// (0x00041de1) clock_digital_separator_pane

0x45a9,	// (0x00041ded) popup_clock_digital_window_t1

0xa949,	// (0x0004818d) clock_digital_number_pane_g1

0xa949,	// (0x0004818d) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0004cb24) clock_digital_number_pane_g

0xa949,	// (0x0004818d) clock_digital_separator_pane_g1

0xa949,	// (0x0004818d) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0004cb24) clock_digital_separator_pane_g

0xa5a6,	// (0x00047dea) bg_popup_window_pane_cp04

0xb19e,	// (0x000489e2) heading_pane_cp03

0xb1a6,	// (0x000489ea) listscroll_popup_gms_pane

0xb1ae,	// (0x000489f2) grid_large_graphic_popup_pane

0xb1b8,	// (0x000489fc) listscroll_popup_gms_pane_g1

0xb1c0,	// (0x00048a04) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0004cbc1) listscroll_popup_gms_pane_g

0xac77,	// (0x000484bb) scroll_pane_cp014

0x45c6,	// (0x00041e0a) cell_large_graphic_popup_pane_ParamLimits

0x45c6,	// (0x00041e0a) cell_large_graphic_popup_pane

0x45e0,	// (0x00041e24) cell_large_graphic_popup_pane_g1_ParamLimits

0x45e0,	// (0x00041e24) cell_large_graphic_popup_pane_g1

0xb1c8,	// (0x00048a0c) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1c8,	// (0x00048a0c) cell_large_graphic_popup_pane_g2

0xb1d4,	// (0x00048a18) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1d4,	// (0x00048a18) cell_large_graphic_popup_pane_g3

0xb1e1,	// (0x00048a25) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1e1,	// (0x00048a25) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0004cbc6) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0004cbc6) cell_large_graphic_popup_pane_g

0xb1f1,	// (0x00048a35) grid_highlight_pane_cp010

0xa949,	// (0x0004818d) bg_popup_call_pane_g1

0xb1fb,	// (0x00048a3f) list_single_graphic_popup_conf_pane_ParamLimits

0xb1fb,	// (0x00048a3f) list_single_graphic_popup_conf_pane

0xb20d,	// (0x00048a51) list_highlight_pane_cp01

0xb216,	// (0x00048a5a) list_single_graphic_popup_conf_pane_g1

0xb21e,	// (0x00048a62) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0004cbcf) list_single_graphic_popup_conf_pane_g

0xb226,	// (0x00048a6a) list_single_graphic_popup_conf_pane_t1

0xb234,	// (0x00048a78) linegrid_cams_pane_g1

0x45ec,	// (0x00041e30) linegrid_cams_pane_g2

0xaaae,	// (0x000482f2) linegrid_cams_pane_g3

0xb23d,	// (0x00048a81) linegrid_cams_pane_g4

0x45f5,	// (0x00041e39) linegrid_cams_pane_g5

0x45fe,	// (0x00041e42) linegrid_cams_pane_g6

0xaab7,	// (0x000482fb) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0004cbd4) linegrid_cams_pane_g

0xb246,	// (0x00048a8a) popup_clock_analogue_window

0xb246,	// (0x00048a8a) popup_clock_digital_window

0xa5a6,	// (0x00047dea) popup_phob_thumbnail_window

0xa949,	// (0x0004818d) call_video_uplink_pane_g1

0xb24f,	// (0x00048a93) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0004cbe3) call_video_uplink_pane_g

0xb257,	// (0x00048a9b) video_uplink_pane

0xb25f,	// (0x00048aa3) mce_image_pane_g1

0x4609,	// (0x00041e4d) mce_image_pane_g2

0x4613,	// (0x00041e57) mce_image_pane_g3

0x461d,	// (0x00041e61) mce_image_pane_g4

0x4625,	// (0x00041e69) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0004cbe8) mce_image_pane_g

0xb269,	// (0x00048aad) control_top_pane_stacon_cp01_ParamLimits

0xb269,	// (0x00048aad) control_top_pane_stacon_cp01

0xb27d,	// (0x00048ac1) uni_indicator_pane_stacon_cp01_ParamLimits

0xb27d,	// (0x00048ac1) uni_indicator_pane_stacon_cp01

0xb28e,	// (0x00048ad2) bg_popup_sub_pane_cp03

0x462d,	// (0x00041e71) chi_dic_find_pane

0x4635,	// (0x00041e79) listscroll_chi_dic_pane

0x463e,	// (0x00041e82) main_pane_chidic_g1

0x4651,	// (0x00041e95) chi_dic_find_pane_t1

0xb298,	// (0x00048adc) find_chidic_pane

0xb2a1,	// (0x00048ae5) chi_dic_list_pane_ParamLimits

0xb2a1,	// (0x00048ae5) chi_dic_list_pane

0xb2b2,	// (0x00048af6) scroll_pane_cp020

0x465f,	// (0x00041ea3) find_chidic_pane_t1

0xa5a6,	// (0x00047dea) input_focus_pane_cp06

0x466e,	// (0x00041eb2) list_chi_dic_pane_ParamLimits

0x466e,	// (0x00041eb2) list_chi_dic_pane

0x4683,	// (0x00041ec7) list_chi_dic_pane_t1_ParamLimits

0x4683,	// (0x00041ec7) list_chi_dic_pane_t1

0xa5a6,	// (0x00047dea) list_highlight_pane_cp020

0xb2ba,	// (0x00048afe) bg_cale_heading_pane_g1

0x4696,	// (0x00041eda) bg_cale_heading_pane_g2

0x469e,	// (0x00041ee2) bg_cale_heading_pane_g3

0x46a6,	// (0x00041eea) bg_cale_heading_pane_g4

0x46b0,	// (0x00041ef4) bg_cale_heading_pane_g5

0x46ba,	// (0x00041efe) bg_cale_heading_pane_g6

0x46c2,	// (0x00041f06) bg_cale_heading_pane_g7

0x46ca,	// (0x00041f0e) bg_cale_heading_pane_g8

0x46d4,	// (0x00041f18) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0004cbf3) bg_cale_heading_pane_g

0xb2ba,	// (0x00048afe) bg_cale_side_pane_g1

0x46de,	// (0x00041f22) bg_cale_side_pane_g2

0x46e8,	// (0x00041f2c) bg_cale_side_pane_g3

0x46f2,	// (0x00041f36) bg_cale_side_pane_g4

0x46fc,	// (0x00041f40) bg_cale_side_pane_g5

0x4706,	// (0x00041f4a) bg_cale_side_pane_g6

0x4710,	// (0x00041f54) bg_cale_side_pane_g7

0x471a,	// (0x00041f5e) bg_cale_side_pane_g8

0x4722,	// (0x00041f66) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0004cc06) bg_cale_side_pane_g

0x472a,	// (0x00041f6e) popup_call_status_window_ParamLimits

0x472a,	// (0x00041f6e) popup_call_status_window

0xb2c2,	// (0x00048b06) stacon_top_pane

0xb2ca,	// (0x00048b0e) status_pane_ParamLimits

0xb2ca,	// (0x00048b0e) status_pane

0xb2df,	// (0x00048b23) status_small_pane

0xb2e7,	// (0x00048b2b) control_pane

0xa5a6,	// (0x00047dea) stacon_bottom_pane

0xb2ef,	// (0x00048b33) list_single_mce_smart_pane_t1_ParamLimits

0xb2ef,	// (0x00048b33) list_single_mce_smart_pane_t1

0xb302,	// (0x00048b46) list_single_mce_smart_pane_t2_ParamLimits

0xb302,	// (0x00048b46) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0004cc19) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0004cc19) list_single_mce_smart_pane_t

0x4736,	// (0x00041f7a) compass_pane

0x4741,	// (0x00041f85) main_location2_pane_t1

0x4757,	// (0x00041f9b) main_location2_pane_t2

0x476d,	// (0x00041fb1) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0004cc1e) main_location2_pane_t

0xb321,	// (0x00048b65) compass_pane_g1_ParamLimits

0xb321,	// (0x00048b65) compass_pane_g1

0x47bb,	// (0x00041fff) compass_pane_t1

0x47ca,	// (0x0004200e) compass_pane_t2

0x0005,

0xf3e3,	// (0x0004cc27) compass_pane_t

0x4815,	// (0x00042059) text_secondary_cp61

0xb335,	// (0x00048b79) navi_pane_cams_g5

0xb358,	// (0x00048b9c) navi_pane_im_t1

0xb366,	// (0x00048baa) navi_pane_mp_g1_ParamLimits

0xb366,	// (0x00048baa) navi_pane_mp_g1

0xb37a,	// (0x00048bbe) navi_pane_mp_g2_ParamLimits

0xb37a,	// (0x00048bbe) navi_pane_mp_g2

0xb386,	// (0x00048bca) navi_pane_mp_g3_ParamLimits

0xb386,	// (0x00048bca) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0004cc3b) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0004cc3b) navi_pane_mp_g

0xb392,	// (0x00048bd6) navi_pane_mp_t1

0xb3a0,	// (0x00048be4) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0004cc42) navi_pane_mp_t

0xb40b,	// (0x00048c4f) navi_pane_vt_g1

0xb392,	// (0x00048bd6) navi_pane_vt_t1

0xb413,	// (0x00048c57) navi_slider_pane

0xb41b,	// (0x00048c5f) zooming_pane

0xb423,	// (0x00048c67) navi_slider_pane_g1

0x494a,	// (0x0004218e) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0004cc49) navi_slider_pane_g

0xb447,	// (0x00048c8b) aid_levels_zoom

0xb44f,	// (0x00048c93) zooming_pane_g1

0xb457,	// (0x00048c9b) zooming_pane_g2

0xb457,	// (0x00048c9b) zooming_pane_g3

0x0002,

0xf414,	// (0x0004cc58) zooming_pane_g

0xb45f,	// (0x00048ca3) level_10_zoom

0xb468,	// (0x00048cac) level_11_zoom

0xb471,	// (0x00048cb5) level_1_zoom

0xb47a,	// (0x00048cbe) level_2_zoom

0xb483,	// (0x00048cc7) level_3_zoom

0xb48c,	// (0x00048cd0) level_4_zoom

0xb495,	// (0x00048cd9) level_5_zoom

0xb49e,	// (0x00048ce2) level_6_zoom

0xb4a7,	// (0x00048ceb) level_7_zoom

0xb4b0,	// (0x00048cf4) level_8_zoom

0xb4b9,	// (0x00048cfd) level_9_zoom

0xb4ca,	// (0x00048d0e) popup_phob_thumbnail_window_g1

0xb4d2,	// (0x00048d16) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0004cc5f) popup_phob_thumbnail_window_g

0xc7c1,	// (0x0004a005) level_1_location

0xc7c9,	// (0x0004a00d) level_2_location

0xc7d1,	// (0x0004a015) level_3_location

0xc7d9,	// (0x0004a01d) level_4_location

0xb41b,	// (0x00048c5f) level_5_location

0x495c,	// (0x000421a0) mce_icon_pane_g1

0x4964,	// (0x000421a8) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0004cc64) mce_icon_pane_g

0x496c,	// (0x000421b0) main_mup_pane_g1_ParamLimits

0x496c,	// (0x000421b0) main_mup_pane_g1

0x4984,	// (0x000421c8) main_mup_pane_g2_ParamLimits

0x4984,	// (0x000421c8) main_mup_pane_g2

0x49a0,	// (0x000421e4) main_mup_pane_g3_ParamLimits

0x49a0,	// (0x000421e4) main_mup_pane_g3

0x49bc,	// (0x00042200) main_mup_pane_g4_ParamLimits

0x49bc,	// (0x00042200) main_mup_pane_g4

0x49d8,	// (0x0004221c) main_mup_pane_g5_ParamLimits

0x49d8,	// (0x0004221c) main_mup_pane_g5

0x49f9,	// (0x0004223d) main_mup_pane_g6_ParamLimits

0x49f9,	// (0x0004223d) main_mup_pane_g6

0x4a19,	// (0x0004225d) main_mup_pane_g7_ParamLimits

0x4a19,	// (0x0004225d) main_mup_pane_g7

0x4a3d,	// (0x00042281) main_mup_pane_g8_ParamLimits

0x4a3d,	// (0x00042281) main_mup_pane_g8

0x4a61,	// (0x000422a5) main_mup_pane_g9_ParamLimits

0x4a61,	// (0x000422a5) main_mup_pane_g9

0x4a84,	// (0x000422c8) main_mup_pane_g10_ParamLimits

0x4a84,	// (0x000422c8) main_mup_pane_g10

0x4aa7,	// (0x000422eb) main_mup_pane_g11_ParamLimits

0x4aa7,	// (0x000422eb) main_mup_pane_g11

0x4ac7,	// (0x0004230b) main_mup_pane_g12_ParamLimits

0x4ac7,	// (0x0004230b) main_mup_pane_g12

0x4ad5,	// (0x00042319) main_mup_pane_g13_ParamLimits

0x4ad5,	// (0x00042319) main_mup_pane_g13

0x000c,

0xf425,	// (0x0004cc69) main_mup_pane_g_ParamLimits

0xf425,	// (0x0004cc69) main_mup_pane_g

0x4aeb,	// (0x0004232f) main_mup_pane_t1_ParamLimits

0x4aeb,	// (0x0004232f) main_mup_pane_t1

0x4b0a,	// (0x0004234e) main_mup_pane_t2_ParamLimits

0x4b0a,	// (0x0004234e) main_mup_pane_t2

0x4b24,	// (0x00042368) main_mup_pane_t3_ParamLimits

0x4b24,	// (0x00042368) main_mup_pane_t3

0x4b3e,	// (0x00042382) main_mup_pane_t4_ParamLimits

0x4b3e,	// (0x00042382) main_mup_pane_t4

0x4b50,	// (0x00042394) main_mup_pane_t5_ParamLimits

0x4b50,	// (0x00042394) main_mup_pane_t5

0x4b62,	// (0x000423a6) main_mup_pane_t6_ParamLimits

0x4b62,	// (0x000423a6) main_mup_pane_t6

0x0005,

0xf440,	// (0x0004cc84) main_mup_pane_t_ParamLimits

0xf440,	// (0x0004cc84) main_mup_pane_t

0x4b78,	// (0x000423bc) mup_progress_pane_ParamLimits

0x4b78,	// (0x000423bc) mup_progress_pane

0x4b84,	// (0x000423c8) mup_visualizer_pane_ParamLimits

0x4b84,	// (0x000423c8) mup_visualizer_pane

0x4bc2,	// (0x00042406) mup_volume_pane_ParamLimits

0x4bc2,	// (0x00042406) mup_volume_pane

0xb3fd,	// (0x00048c41) mup_visualizer_pane_g1_ParamLimits

0xb3fd,	// (0x00048c41) mup_visualizer_pane_g1

0xb3fd,	// (0x00048c41) mup_visualizer_pane_g2_ParamLimits

0xb3fd,	// (0x00048c41) mup_visualizer_pane_g2

0xb321,	// (0x00048b65) mup_visualizer_pane_g3_ParamLimits

0xb321,	// (0x00048b65) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0004cc91) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0004cc91) mup_visualizer_pane_g

0xa949,	// (0x0004818d) mup_volume_pane_g1

0xb4e2,	// (0x00048d26) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0004cc98) mup_volume_pane_g

0xa949,	// (0x0004818d) mup_progress_pane_g1

0xb4eb,	// (0x00048d2f) mup_progress_pane_g2

0xb4f4,	// (0x00048d38) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0004cc9d) mup_progress_pane_g

0xa5a6,	// (0x00047dea) bg_popup_window_pane_cp05

0xb4fd,	// (0x00048d41) heading_pane_cp02_ParamLimits

0xb4fd,	// (0x00048d41) heading_pane_cp02

0xb519,	// (0x00048d5d) list_popup_blid_pane

0xb521,	// (0x00048d65) list_blid_sat_info_pane_ParamLimits

0xb521,	// (0x00048d65) list_blid_sat_info_pane

0xb534,	// (0x00048d78) list_blid_sat_info_pane_g1

0xb53c,	// (0x00048d80) list_blid_sat_info_pane_t1

0x4ce1,	// (0x00042525) mup_equalizer_pane_ParamLimits

0x4ce1,	// (0x00042525) mup_equalizer_pane

0x4d02,	// (0x00042546) mup_equalizer_pane_cp1_ParamLimits

0x4d02,	// (0x00042546) mup_equalizer_pane_cp1

0x4d23,	// (0x00042567) mup_equalizer_pane_cp2_ParamLimits

0x4d23,	// (0x00042567) mup_equalizer_pane_cp2

0x4d44,	// (0x00042588) mup_equalizer_pane_cp3_ParamLimits

0x4d44,	// (0x00042588) mup_equalizer_pane_cp3

0x4d69,	// (0x000425ad) mup_equalizer_pane_cp4_ParamLimits

0x4d69,	// (0x000425ad) mup_equalizer_pane_cp4

0x4d8e,	// (0x000425d2) mup_equalizer_pane_cp5

0x4da6,	// (0x000425ea) mup_equalizer_pane_cp6

0x4dbe,	// (0x00042602) mup_equalizer_pane_cp7

0xc6db,	// (0x00049f1f) bg_popup_call_poc_act_pane_g9

0xc6e3,	// (0x00049f27) bg_popup_call_poc_act_pane_g10

0xc6eb,	// (0x00049f2f) bg_popup_call_poc_act_pane_g11

0x000a,

0xa82f,	// (0x00048073) mup_scale_pane

0xa949,	// (0x0004818d) mup_scale_pane_g1

0xb54a,	// (0x00048d8e) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0004ccb9) mup_scale_pane_g

0xb56e,	// (0x00048db2) msg_data_pane

0xb576,	// (0x00048dba) scroll_pane_cp017

0x4de8,	// (0x0004262c) bg_list_pane_cp04_ParamLimits

0x4de8,	// (0x0004262c) bg_list_pane_cp04

0xb57e,	// (0x00048dc2) msg_data_pane_g1

0x4e08,	// (0x0004264c) msg_data_pane_g2

0x4e12,	// (0x00042656) msg_data_pane_g3

0x4e1c,	// (0x00042660) msg_data_pane_g4

0x4e24,	// (0x00042668) msg_data_pane_g5

0x4e2c,	// (0x00042670) msg_data_pane_g6

0x4e34,	// (0x00042678) msg_data_pane_g7

0x0006,

0xf484,	// (0x0004ccc8) msg_data_pane_g

0x4e3c,	// (0x00042680) msg_text_pane_ParamLimits

0x4e3c,	// (0x00042680) msg_text_pane

0x4e64,	// (0x000426a8) qrid_highlight_pane_cp011_ParamLimits

0x4e64,	// (0x000426a8) qrid_highlight_pane_cp011

0xa5a6,	// (0x00047dea) msg_body_pane

0xa5a6,	// (0x00047dea) msg_header_pane

0xb586,	// (0x00048dca) input_focus_pane_cp07

0xb59b,	// (0x00048ddf) msg_header_pane_t1_ParamLimits

0xb59b,	// (0x00048ddf) msg_header_pane_t1

0x102b,	// (0x0003e86f) msg_header_pane_t2_ParamLimits

0x102b,	// (0x0003e86f) msg_header_pane_t2

0x0001,

0xf498,	// (0x0004ccdc) msg_header_pane_t_ParamLimits

0xf498,	// (0x0004ccdc) msg_header_pane_t

0xb5ad,	// (0x00048df1) msg_body_pane_g1

0x103d,	// (0x0003e881) msg_body_pane_t1_ParamLimits

0x103d,	// (0x0003e881) msg_body_pane_t1

0x106e,	// (0x0003e8b2) msg_body_pane_t2_ParamLimits

0x106e,	// (0x0003e8b2) msg_body_pane_t2

0x1080,	// (0x0003e8c4) msg_body_pane_t3_ParamLimits

0x1080,	// (0x0003e8c4) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0004cce1) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0004cce1) msg_body_pane_t

0x4ed7,	// (0x0004271b) main_viewer_pane_g1_ParamLimits

0x4ed7,	// (0x0004271b) main_viewer_pane_g1

0x4ee3,	// (0x00042727) main_viewer_pane_g2_ParamLimits

0x4ee3,	// (0x00042727) main_viewer_pane_g2

0x4eef,	// (0x00042733) main_viewer_pane_g3_ParamLimits

0x4eef,	// (0x00042733) main_viewer_pane_g3

0x4f00,	// (0x00042744) main_viewer_pane_g4_ParamLimits

0x4f00,	// (0x00042744) main_viewer_pane_g4

0x4f11,	// (0x00042755) main_viewer_pane_g5_ParamLimits

0x4f11,	// (0x00042755) main_viewer_pane_g5

0x4f11,	// (0x00042755) main_viewer_pane_g7_ParamLimits

0x4f11,	// (0x00042755) main_viewer_pane_g7

0x4f23,	// (0x00042767) main_viewer_pane_g8_ParamLimits

0x4f23,	// (0x00042767) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0004ccf1) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0004ccf1) main_viewer_pane_g

0xb5b5,	// (0x00048df9) viewer_content_pane_ParamLimits

0xb5b5,	// (0x00048df9) viewer_content_pane

0x4f5b,	// (0x0004279f) main_postcard_pane_g1_ParamLimits

0x4f5b,	// (0x0004279f) main_postcard_pane_g1

0x4f69,	// (0x000427ad) main_postcard_pane_g2_ParamLimits

0x4f69,	// (0x000427ad) main_postcard_pane_g2

0x4f77,	// (0x000427bb) main_postcard_pane_g3_ParamLimits

0x4f77,	// (0x000427bb) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0004cd02) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0004cd02) main_postcard_pane_g

0x4f87,	// (0x000427cb) main_postcard_pane_g4

0xc904,	// (0x0004a148) smil_status_volume_pane_g2

0x4fb3,	// (0x000427f7) postcard_pane_ParamLimits

0x4fb3,	// (0x000427f7) postcard_pane

0xb3fd,	// (0x00048c41) postcard_pane_g1_ParamLimits

0xb3fd,	// (0x00048c41) postcard_pane_g1

0x4fed,	// (0x00042831) postcard_pane_g2_ParamLimits

0x4fed,	// (0x00042831) postcard_pane_g2

0x4ff9,	// (0x0004283d) postcard_pane_g3_ParamLimits

0x4ff9,	// (0x0004283d) postcard_pane_g3

0xb5c3,	// (0x00048e07) postcard_pane_g4_ParamLimits

0xb5c3,	// (0x00048e07) postcard_pane_g4

0x5005,	// (0x00042849) postcard_pane_g5_ParamLimits

0x5005,	// (0x00042849) postcard_pane_g5

0x5011,	// (0x00042855) postcard_pane_g6_ParamLimits

0x5011,	// (0x00042855) postcard_pane_g6

0xb5d1,	// (0x00048e15) postcard_pane_g7_ParamLimits

0xb5d1,	// (0x00048e15) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0004cd0f) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0004cd0f) postcard_pane_g

0x501f,	// (0x00042863) main_mp2_pane_g1_ParamLimits

0x501f,	// (0x00042863) main_mp2_pane_g1

0x502d,	// (0x00042871) main_mp2_pane_g2_ParamLimits

0x502d,	// (0x00042871) main_mp2_pane_g2

0x5039,	// (0x0004287d) main_mp2_pane_g3_ParamLimits

0x5039,	// (0x0004287d) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0004cd1e) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0004cd1e) main_mp2_pane_g

0x5045,	// (0x00042889) main_mp2_pane_t1_ParamLimits

0x5045,	// (0x00042889) main_mp2_pane_t1

0x505c,	// (0x000428a0) main_mp2_pane_t2_ParamLimits

0x505c,	// (0x000428a0) main_mp2_pane_t2

0x5070,	// (0x000428b4) main_mp2_pane_t3_ParamLimits

0x5070,	// (0x000428b4) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0004cd25) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0004cd25) main_mp2_pane_t

0xb5df,	// (0x00048e23) pec_content_pane_ParamLimits

0xb5df,	// (0x00048e23) pec_content_pane

0xac77,	// (0x000484bb) scroll_pane_cp015

0xb5f1,	// (0x00048e35) pec_attribute_pane_ParamLimits

0xb5f1,	// (0x00048e35) pec_attribute_pane

0x5082,	// (0x000428c6) pec_content_pane_g1_ParamLimits

0x5082,	// (0x000428c6) pec_content_pane_g1

0xb601,	// (0x00048e45) pec_content_pane_t1_ParamLimits

0xb601,	// (0x00048e45) pec_content_pane_t1

0xb613,	// (0x00048e57) pec_content_pane_t2_ParamLimits

0xb613,	// (0x00048e57) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0004cd2c) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0004cd2c) pec_content_pane_t

0x508e,	// (0x000428d2) list_single_graphic_pane_cp01_ParamLimits

0x508e,	// (0x000428d2) list_single_graphic_pane_cp01

0xa82f,	// (0x00048073) bg_popup_sub_pane_cp04

0xb625,	// (0x00048e69) popup_mup_playback_window_g1

0xb631,	// (0x00048e75) popup_mup_playback_window_t1

0xb646,	// (0x00048e8a) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0004cd31) popup_mup_playback_window_t

0xb67d,	// (0x00048ec1) main_image_pane_g1_ParamLimits

0xb67d,	// (0x00048ec1) main_image_pane_g1

0xb6c0,	// (0x00048f04) scroll_pane_cp018_ParamLimits

0xb6c0,	// (0x00048f04) scroll_pane_cp018

0xb6d8,	// (0x00048f1c) scroll_pane_cp016_ParamLimits

0xb6d8,	// (0x00048f1c) scroll_pane_cp016

0x511c,	// (0x00042960) smil2_image_pane_ParamLimits

0x511c,	// (0x00042960) smil2_image_pane

0x5152,	// (0x00042996) smil2_root_pane_ParamLimits

0x5152,	// (0x00042996) smil2_root_pane

0x517e,	// (0x000429c2) smil2_text_pane_ParamLimits

0x517e,	// (0x000429c2) smil2_text_pane

0xa5a6,	// (0x00047dea) bg_list_pane_cp06

0xb714,	// (0x00048f58) grid_radio_pane

0xa5a6,	// (0x00047dea) bg_popup_window_pane_cp06

0xb71e,	// (0x00048f62) main_fmradio_pane_t1

0xb19e,	// (0x000489e2) heading_pane_cp04

0xb72c,	// (0x00048f70) main_fmradio_pane_t2

0xc6f3,	// (0x00049f37) popup_cale_lunar_info_window_g1

0xb73a,	// (0x00048f7e) main_fmradio_pane_t3

0xc6fb,	// (0x00049f3f) popup_cale_lunar_info_window_g2

0xb74a,	// (0x00048f8e) main_fmradio_pane_t4

0x0001,

0xb758,	// (0x00048f9c) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0004ce0c) popup_cale_lunar_info_window_g

0xf502,	// (0x0004cd46) main_fmradio_pane_t

0xb766,	// (0x00048faa) wait_bar_pane_cp03

0xb3dc,	// (0x00048c20) cell_fmradio_pane_ParamLimits

0xb3dc,	// (0x00048c20) cell_fmradio_pane

0xb5d1,	// (0x00048e15) cell_fmradio_pane_g1_ParamLimits

0xb5d1,	// (0x00048e15) cell_fmradio_pane_g1

0xa5a6,	// (0x00047dea) grid_highlight_pane_cp011

0xb76e,	// (0x00048fb2) poc_content_pane_ParamLimits

0xb76e,	// (0x00048fb2) poc_content_pane

0xb780,	// (0x00048fc4) scroll_pane_cp019

0x51be,	// (0x00042a02) popup_call_poc_act_window_ParamLimits

0x51be,	// (0x00042a02) popup_call_poc_act_window

0x51cb,	// (0x00042a0f) popup_call_poc_inact_window_ParamLimits

0x51cb,	// (0x00042a0f) popup_call_poc_inact_window

0xf59f,	// (0x0004cde3) bg_popup_call_poc_act_pane_g

0xc66b,	// (0x00049eaf) bg_popup_call_poc_inact_pane_g1

0xc673,	// (0x00049eb7) bg_popup_call_poc_inact_pane_g2

0xb788,	// (0x00048fcc) popup_call_poc_act_window_g2

0xc67b,	// (0x00049ebf) bg_popup_call_poc_inact_pane_g3

0xc683,	// (0x00049ec7) bg_popup_call_poc_inact_pane_g4

0xc68b,	// (0x00049ecf) bg_popup_call_poc_inact_pane_g5

0xb790,	// (0x00048fd4) popup_call_poc_act_window_t1_ParamLimits

0xb790,	// (0x00048fd4) popup_call_poc_act_window_t1

0xb7b8,	// (0x00048ffc) popup_call_poc_act_window_t2_ParamLimits

0xb7b8,	// (0x00048ffc) popup_call_poc_act_window_t2

0xb7e0,	// (0x00049024) popup_call_poc_act_window_t3_ParamLimits

0xb7e0,	// (0x00049024) popup_call_poc_act_window_t3

0xb808,	// (0x0004904c) popup_call_poc_act_window_t4_ParamLimits

0xb808,	// (0x0004904c) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0004cd51) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0004cd51) popup_call_poc_act_window_t

0xc693,	// (0x00049ed7) bg_popup_call_poc_inact_pane_g6

0xc69b,	// (0x00049edf) bg_popup_call_poc_inact_pane_g7

0xc6a3,	// (0x00049ee7) bg_popup_call_poc_inact_pane_g8

0xb81a,	// (0x0004905e) popup_call_poc_inact_window_g2

0xc6ab,	// (0x00049eef) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0004cdd0) bg_popup_call_poc_inact_pane_g

0xb822,	// (0x00049066) popup_call_poc_inact_window_t1_ParamLimits

0xb822,	// (0x00049066) popup_call_poc_inact_window_t1

0xb837,	// (0x0004907b) popup_call_poc_inact_window_t2_ParamLimits

0xb837,	// (0x0004907b) popup_call_poc_inact_window_t2

0xb84c,	// (0x00049090) popup_call_poc_inact_window_t3_ParamLimits

0xb84c,	// (0x00049090) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0004cd5a) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0004cd5a) popup_call_poc_inact_window_t

0xc877,	// (0x0004a0bb) context_pane_ParamLimits

0x57da,	// (0x0004301e) signal_pane_ParamLimits

0xb41b,	// (0x00048c5f) main_call2_pane

0xc865,	// (0x0004a0a9) popup_phob_thumbnail2_window_ParamLimits

0xc865,	// (0x0004a0a9) popup_phob_thumbnail2_window

0x4e85,	// (0x000426c9) aid_hotspot_pointer_arrow_pane

0x4e8d,	// (0x000426d1) aid_hotspot_pointer_hand_pane

0x54f0,	// (0x00042d34) phob_pre_status_pane_g5

0x312a,	// (0x0004096e) cams_zoom_pane_ParamLimits

0x3136,	// (0x0004097a) image_vga_pane_ParamLimits

0x3145,	// (0x00040989) main_camera_pane_g1_ParamLimits

0x3153,	// (0x00040997) main_camera_pane_g2_ParamLimits

0x315f,	// (0x000409a3) main_camera_pane_g3_ParamLimits

0x316d,	// (0x000409b1) main_camera_pane_g4_ParamLimits

0x317b,	// (0x000409bf) main_camera_pane_g5_ParamLimits

0x3189,	// (0x000409cd) main_camera_pane_g6_ParamLimits

0x3197,	// (0x000409db) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0004ca59) main_camera_pane_g_ParamLimits

0x31a5,	// (0x000409e9) main_camera_pane_t1_ParamLimits

0x31b7,	// (0x000409fb) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0004ca6a) main_camera_pane_t_ParamLimits

0xa82f,	// (0x00048073) bg_popup_preview_window_pane_cp01_ParamLimits

0xa82f,	// (0x00048073) bg_popup_preview_window_pane_cp01

0xb861,	// (0x000490a5) popup_phob_thumbnail2_window_g1_ParamLimits

0xb861,	// (0x000490a5) popup_phob_thumbnail2_window_g1

0xa5a6,	// (0x00047dea) call2_cli_visual_pane

0x51e7,	// (0x00042a2b) popup_call2_audio_conf_window_ParamLimits

0x51e7,	// (0x00042a2b) popup_call2_audio_conf_window

0x5200,	// (0x00042a44) popup_call2_audio_first_window_ParamLimits

0x5200,	// (0x00042a44) popup_call2_audio_first_window

0x529e,	// (0x00042ae2) popup_call2_audio_in_window_ParamLimits

0x529e,	// (0x00042ae2) popup_call2_audio_in_window

0x52e2,	// (0x00042b26) popup_call2_audio_out_window_ParamLimits

0x52e2,	// (0x00042b26) popup_call2_audio_out_window

0x534c,	// (0x00042b90) popup_call2_audio_second_window_ParamLimits

0x534c,	// (0x00042b90) popup_call2_audio_second_window

0x53aa,	// (0x00042bee) popup_call2_audio_wait_window_ParamLimits

0x53aa,	// (0x00042bee) popup_call2_audio_wait_window

0xa5a6,	// (0x00047dea) bg_popup_call2_act_pane_cp03

0xa811,	// (0x00048055) list_conf_pane_cp

0xb86d,	// (0x000490b1) popup_call2_audio_conf_window_t1

0xb87b,	// (0x000490bf) list_single_graphic_popup_conf2_pane_ParamLimits

0xb87b,	// (0x000490bf) list_single_graphic_popup_conf2_pane

0xb20d,	// (0x00048a51) list_highlight_pane_cp04

0xb88e,	// (0x000490d2) list_single_graphic_popup_conf2_pane_g1

0xb21e,	// (0x00048a62) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0004cd61) list_single_graphic_popup_conf2_pane_g

0xb898,	// (0x000490dc) list_single_graphic_popup_conf2_pane_t1

0xb8a6,	// (0x000490ea) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8a6,	// (0x000490ea) bg_popup_call2_act_pane_cp01

0xb930,	// (0x00049174) call_type_pane_cp05_ParamLimits

0xb930,	// (0x00049174) call_type_pane_cp05

0xb984,	// (0x000491c8) popup_call2_audio_second_window_g1_ParamLimits

0xb984,	// (0x000491c8) popup_call2_audio_second_window_g1

0xb9d8,	// (0x0004921c) popup_call2_audio_second_window_g2_ParamLimits

0xb9d8,	// (0x0004921c) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0004cd66) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0004cd66) popup_call2_audio_second_window_g

0xba3d,	// (0x00049281) popup_call2_audio_second_window_t1_ParamLimits

0xba3d,	// (0x00049281) popup_call2_audio_second_window_t1

0xbaf8,	// (0x0004933c) popup_call2_audio_second_window_t2_ParamLimits

0xbaf8,	// (0x0004933c) popup_call2_audio_second_window_t2

0xbb4b,	// (0x0004938f) popup_call2_audio_second_window_t3_ParamLimits

0xbb4b,	// (0x0004938f) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0004cd6d) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0004cd6d) popup_call2_audio_second_window_t

0xa5a6,	// (0x00047dea) bg_popup_call2_in_pane_cp02

0xa5b0,	// (0x00047df4) call_type_pane_cp04

0xa5b8,	// (0x00047dfc) popup_call2_audio_wait_window_g1

0xa5c0,	// (0x00047e04) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0004c946) popup_call2_audio_wait_window_g

0xa5c8,	// (0x00047e0c) popup_call2_audio_wait_window_t3

0xbc3e,	// (0x00049482) bg_popup_call2_act_pane_ParamLimits

0xbc3e,	// (0x00049482) bg_popup_call2_act_pane

0xbcfe,	// (0x00049542) call_type_pane_cp03_ParamLimits

0xbcfe,	// (0x00049542) call_type_pane_cp03

0xbd62,	// (0x000495a6) popup_call2_audio_first_window_g1_ParamLimits

0xbd62,	// (0x000495a6) popup_call2_audio_first_window_g1

0xbdd2,	// (0x00049616) popup_call2_audio_first_window_g2_ParamLimits

0xbdd2,	// (0x00049616) popup_call2_audio_first_window_g2

0xb3fd,	// (0x00048c41) popup_call2_audio_first_window_g3_ParamLimits

0xb3fd,	// (0x00048c41) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0004cd76) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0004cd76) popup_call2_audio_first_window_g

0xbeb0,	// (0x000496f4) popup_call2_audio_first_window_t1_ParamLimits

0xbeb0,	// (0x000496f4) popup_call2_audio_first_window_t1

0xbfb3,	// (0x000497f7) popup_call2_audio_first_window_t4_ParamLimits

0xbfb3,	// (0x000497f7) popup_call2_audio_first_window_t4

0xc096,	// (0x000498da) popup_call2_audio_first_window_t5_ParamLimits

0xc096,	// (0x000498da) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0004cd81) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0004cd81) popup_call2_audio_first_window_t

0xa827,	// (0x0004806b) bg_popup_call2_act_pane_g1

0xc705,	// (0x00049f49) popup_cale_lunar_info_window_t1

0xc713,	// (0x00049f57) popup_cale_lunar_info_window_t2

0xc721,	// (0x00049f65) popup_cale_lunar_info_window_t3

0xa5a6,	// (0x00047dea) bg_popup_call2_bubble_pane

0xc197,	// (0x000499db) bg_popup_call2_in_pane_cp01_ParamLimits

0xc197,	// (0x000499db) bg_popup_call2_in_pane_cp01

0xa282,	// (0x00047ac6) call_type_pane_cp02

0xc1df,	// (0x00049a23) popup_call2_audio_out_window_g1_ParamLimits

0xc1df,	// (0x00049a23) popup_call2_audio_out_window_g1

0xc20b,	// (0x00049a4f) popup_call2_audio_out_window_g2_ParamLimits

0xc20b,	// (0x00049a4f) popup_call2_audio_out_window_g2

0xc233,	// (0x00049a77) popup_call2_audio_out_window_g3_ParamLimits

0xc233,	// (0x00049a77) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0004cd8a) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0004cd8a) popup_call2_audio_out_window_g

0xc26e,	// (0x00049ab2) popup_call2_audio_out_window_t1_ParamLimits

0xc26e,	// (0x00049ab2) popup_call2_audio_out_window_t1

0xc2cd,	// (0x00049b11) popup_call2_audio_out_window_t2_ParamLimits

0xc2cd,	// (0x00049b11) popup_call2_audio_out_window_t2

0xc321,	// (0x00049b65) popup_call2_audio_out_window_t3_ParamLimits

0xc321,	// (0x00049b65) popup_call2_audio_out_window_t3

0xc337,	// (0x00049b7b) popup_call2_audio_out_window_t4_ParamLimits

0xc337,	// (0x00049b7b) popup_call2_audio_out_window_t4

0xc34d,	// (0x00049b91) popup_call2_audio_out_window_t5_ParamLimits

0xc34d,	// (0x00049b91) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0004cd93) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0004cd93) popup_call2_audio_out_window_t

0xc3b1,	// (0x00049bf5) bg_popup_call2_in_pane_ParamLimits

0xc3b1,	// (0x00049bf5) bg_popup_call2_in_pane

0xc40d,	// (0x00049c51) popup_call2_audio_in_window_g1_ParamLimits

0xc40d,	// (0x00049c51) popup_call2_audio_in_window_g1

0xc445,	// (0x00049c89) popup_call2_audio_in_window_g2_ParamLimits

0xc445,	// (0x00049c89) popup_call2_audio_in_window_g2

0xc47d,	// (0x00049cc1) popup_call2_audio_in_window_g3_ParamLimits

0xc47d,	// (0x00049cc1) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0004cda0) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0004cda0) popup_call2_audio_in_window_g

0xc4d5,	// (0x00049d19) popup_call2_audio_in_window_t1_ParamLimits

0xc4d5,	// (0x00049d19) popup_call2_audio_in_window_t1

0xc555,	// (0x00049d99) popup_call2_audio_in_window_t2_ParamLimits

0xc555,	// (0x00049d99) popup_call2_audio_in_window_t2

0xc5d5,	// (0x00049e19) popup_call2_audio_in_window_t3_ParamLimits

0xc5d5,	// (0x00049e19) popup_call2_audio_in_window_t3

0xc5ef,	// (0x00049e33) popup_call2_audio_in_window_t4_ParamLimits

0xc5ef,	// (0x00049e33) popup_call2_audio_in_window_t4

0xc601,	// (0x00049e45) popup_call2_audio_in_window_t5_ParamLimits

0xc601,	// (0x00049e45) popup_call2_audio_in_window_t5

0xc616,	// (0x00049e5a) popup_call2_audio_in_window_t6_ParamLimits

0xc616,	// (0x00049e5a) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0004cda9) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0004cda9) popup_call2_audio_in_window_t

0xa827,	// (0x0004806b) bg_popup_call2_in_pane_g1

0xc72f,	// (0x00049f73) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0004ce11) popup_cale_lunar_info_window_t

0xa82f,	// (0x00048073) bg_popup_call2_rect_pane_ParamLimits

0xa82f,	// (0x00048073) bg_popup_call2_rect_pane

0xa5a6,	// (0x00047dea) call2_cli_visual_graphic_pane

0xa5a6,	// (0x00047dea) call2_cli_visual_text_pane

0x5872,	// (0x000430b6) smil_status_volume_pane_g3

0x0002,

0xa949,	// (0x0004818d) call2_cli_visual_graphic_pane_g1

0xa949,	// (0x0004818d) call2_cli_visual_graphic_pane_g2

0xa949,	// (0x0004818d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0004cdb6) call2_cli_visual_graphic_pane_g

0xc62b,	// (0x00049e6f) bg_popup_call2_rect_pane_g1

0xa9e7,	// (0x0004822b) bg_popup_call2_rect_pane_g2

0xc633,	// (0x00049e77) bg_popup_call2_rect_pane_g3

0xc63b,	// (0x00049e7f) bg_popup_call2_rect_pane_g4

0xc643,	// (0x00049e87) bg_popup_call2_rect_pane_g5

0xc64b,	// (0x00049e8f) bg_popup_call2_rect_pane_g6

0xc653,	// (0x00049e97) bg_popup_call2_rect_pane_g7

0xc65b,	// (0x00049e9f) bg_popup_call2_rect_pane_g8

0xc663,	// (0x00049ea7) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0004cdbd) bg_popup_call2_rect_pane_g

0xc66b,	// (0x00049eaf) bg_popup_call2_bubble_pane_g1

0xc673,	// (0x00049eb7) bg_popup_call2_bubble_pane_g2

0xc67b,	// (0x00049ebf) bg_popup_call2_bubble_pane_g3

0xc683,	// (0x00049ec7) bg_popup_call2_bubble_pane_g4

0xc68b,	// (0x00049ecf) bg_popup_call2_bubble_pane_g5

0xc693,	// (0x00049ed7) bg_popup_call2_bubble_pane_g6

0xc69b,	// (0x00049edf) bg_popup_call2_bubble_pane_g7

0xc6a3,	// (0x00049ee7) bg_popup_call2_bubble_pane_g8

0xc6ab,	// (0x00049eef) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0004cdd0) bg_popup_call2_bubble_pane_g

0x28e8,	// (0x0004012c) aid_cale_week_size_cell_pane

0x31cb,	// (0x00040a0f) aid_cams_cif_uncrop_pane_ParamLimits

0x31cb,	// (0x00040a0f) aid_cams_cif_uncrop_pane

0x3328,	// (0x00040b6c) aid_cams_size_cell_ParamLimits

0x3328,	// (0x00040b6c) aid_cams_size_cell

0x3334,	// (0x00040b78) grid_cams_pane_ParamLimits

0x3342,	// (0x00040b86) linegrid_cams_pane_ParamLimits

0x3413,	// (0x00040c57) call_video_pane_t1

0x3430,	// (0x00040c74) call_video_pane_t2

0x0001,

0xf279,	// (0x0004cabd) call_video_pane_t

0x38fc,	// (0x00041140) aid_cale_month_size_cell_pane_ParamLimits

0x38fc,	// (0x00041140) aid_cale_month_size_cell_pane

0xf616,	// (0x0004ce5a) smil_status_volume_pane_g

0x587f,	// (0x000430c3) volume_smil_pane_ParamLimits

0xa14c,	// (0x00047990) aid_popup2_width_pane

0x27e8,	// (0x0004002c) cell_qdial_pane_g4_ParamLimits

0x27e8,	// (0x0004002c) cell_qdial_pane_g4

0x4797,	// (0x00041fdb) aid_blid_cardinal_pane_ParamLimits

0x47a7,	// (0x00041feb) aid_blid_destination_pane_ParamLimits

0x47a7,	// (0x00041feb) aid_blid_destination_pane

0xa82f,	// (0x00048073) bg_popup_call_poc_act_pane_ParamLimits

0xa82f,	// (0x00048073) bg_popup_call_poc_act_pane

0xa82f,	// (0x00048073) bg_popup_call_poc_inact_pane_ParamLimits

0xa82f,	// (0x00048073) bg_popup_call_poc_inact_pane

0xc6b3,	// (0x00049ef7) bg_popup_call_poc_act_pane_g1

0xc6bb,	// (0x00049eff) bg_popup_call_poc_act_pane_g2

0xc6c3,	// (0x00049f07) bg_popup_call_poc_act_pane_g3

0xc683,	// (0x00049ec7) bg_popup_call_poc_act_pane_g4

0xc68b,	// (0x00049ecf) bg_popup_call_poc_act_pane_g5

0xc6cb,	// (0x00049f0f) bg_popup_call_poc_act_pane_g6

0xc69b,	// (0x00049edf) bg_popup_call_poc_act_pane_g7

0xc6d3,	// (0x00049f17) bg_popup_call_poc_act_pane_g8

0xa5a6,	// (0x00047dea) main_usb_pane

0xc83c,	// (0x0004a080) popup_cale_lunar_info_window

0x3748,	// (0x00040f8c) im_reading_pane_t1_ParamLimits

0xabcf,	// (0x00048413) list_im_pane_ParamLimits

0xabe0,	// (0x00048424) scroll_pane_cp07_ParamLimits

0xa5a6,	// (0x00047dea) grid_highlight_pane_cp012

0xa82f,	// (0x00048073) mup_scale_pane_ParamLimits

0xb3fd,	// (0x00048c41) main_usb_pane_g1_ParamLimits

0xb3fd,	// (0x00048c41) main_usb_pane_g1

0x5413,	// (0x00042c57) main_usb_pane_g2_ParamLimits

0x5413,	// (0x00042c57) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0004cdfa) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0004cdfa) main_usb_pane_g

0x541f,	// (0x00042c63) main_usb_pane_t1_ParamLimits

0x541f,	// (0x00042c63) main_usb_pane_t1

0x5431,	// (0x00042c75) main_usb_pane_t2_ParamLimits

0x5431,	// (0x00042c75) main_usb_pane_t2

0x5443,	// (0x00042c87) main_usb_pane_t3_ParamLimits

0x5443,	// (0x00042c87) main_usb_pane_t3

0x5455,	// (0x00042c99) main_usb_pane_t4_ParamLimits

0x5455,	// (0x00042c99) main_usb_pane_t4

0x5467,	// (0x00042cab) main_usb_pane_t5_ParamLimits

0x5467,	// (0x00042cab) main_usb_pane_t5

0x5479,	// (0x00042cbd) main_usb_pane_t6_ParamLimits

0x5479,	// (0x00042cbd) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0004cdff) main_usb_pane_t_ParamLimits

0x4736,	// (0x00041f7a) aid_text_placing

0x4741,	// (0x00041f85) main_location2_pane_t1_ParamLimits

0x4757,	// (0x00041f9b) main_location2_pane_t2_ParamLimits

0x476d,	// (0x00041fb1) main_location2_pane_t3_ParamLimits

0x4783,	// (0x00041fc7) main_location2_pane_t4_ParamLimits

0x4783,	// (0x00041fc7) main_location2_pane_t4

0xf3da,	// (0x0004cc1e) main_location2_pane_t_ParamLimits

0xa86b,	// (0x000480af) find_pinb_pane_g2_ParamLimits

0xa86b,	// (0x000480af) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0004c96c) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0004c96c) find_pinb_pane_g

0xa877,	// (0x000480bb) find_pinb_pane_t1_ParamLimits

0xa889,	// (0x000480cd) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0004c971) find_pinb_pane_t_ParamLimits

0xa5a6,	// (0x00047dea) main_call3_pane

0x3e23,	// (0x00041667) cale_month_day_heading_pane_t1_ParamLimits

0x3ea1,	// (0x000416e5) cale_month_day_heading_pane_t2_ParamLimits

0x3f2a,	// (0x0004176e) cale_month_day_heading_pane_t3_ParamLimits

0x3fb3,	// (0x000417f7) cale_month_day_heading_pane_t4_ParamLimits

0x403c,	// (0x00041880) cale_month_day_heading_pane_t5_ParamLimits

0x40c9,	// (0x0004190d) cale_month_day_heading_pane_t6_ParamLimits

0x415a,	// (0x0004199e) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0004caf5) cale_month_day_heading_pane_t_ParamLimits

0x43e6,	// (0x00041c2a) smil_status_volume_pane

0x4fd1,	// (0x00042815) postcard_address_pane_ParamLimits

0x4fd1,	// (0x00042815) postcard_address_pane

0x4fdf,	// (0x00042823) postcard_message_pane_ParamLimits

0x4fdf,	// (0x00042823) postcard_message_pane

0x53e9,	// (0x00042c2d) call2_cli_visual_pane_t1_ParamLimits

0x53e9,	// (0x00042c2d) call2_cli_visual_pane_t1

0x59de,	// (0x00043222) postcard_message_pane_t1_ParamLimits

0x59de,	// (0x00043222) postcard_message_pane_t1

0x59c7,	// (0x0004320b) postcard_address_pane_t1_ParamLimits

0x59c7,	// (0x0004320b) postcard_address_pane_t1

0x59b8,	// (0x000431fc) popup_call3_audio_in_window_ParamLimits

0x59b8,	// (0x000431fc) popup_call3_audio_in_window

0x5896,	// (0x000430da) bg_popup_call3_in_pane_ParamLimits

0x5896,	// (0x000430da) bg_popup_call3_in_pane

0x58fe,	// (0x00043142) popup_call3_audio_in_window_g1_ParamLimits

0x58fe,	// (0x00043142) popup_call3_audio_in_window_g1

0x5916,	// (0x0004315a) popup_call3_audio_in_window_g2_ParamLimits

0x5916,	// (0x0004315a) popup_call3_audio_in_window_g2

0x592e,	// (0x00043172) popup_call3_audio_in_window_g3_ParamLimits

0x592e,	// (0x00043172) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0004ce61) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0004ce61) popup_call3_audio_in_window_g

0x5956,	// (0x0004319a) popup_call3_audio_in_window_t1_ParamLimits

0x5956,	// (0x0004319a) popup_call3_audio_in_window_t1

0x597e,	// (0x000431c2) popup_call3_audio_in_window_t2_ParamLimits

0x597e,	// (0x000431c2) popup_call3_audio_in_window_t2

0x59a6,	// (0x000431ea) popup_call3_audio_in_window_t3_ParamLimits

0x59a6,	// (0x000431ea) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0004ce6a) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0004ce6a) popup_call3_audio_in_window_t

0xb41b,	// (0x00048c5f) bg_popup_call3_rect_pane

0xc62b,	// (0x00049e6f) bg_popup_call3_rect_pane_g1

0xa9e7,	// (0x0004822b) bg_popup_call3_rect_pane_g2

0xc633,	// (0x00049e77) bg_popup_call3_rect_pane_g3

0xc63b,	// (0x00049e7f) bg_popup_call3_rect_pane_g4

0xc643,	// (0x00049e87) bg_popup_call3_rect_pane_g5

0xc64b,	// (0x00049e8f) bg_popup_call3_rect_pane_g6

0xc653,	// (0x00049e97) bg_popup_call3_rect_pane_g7

0x4bdd,	// (0x00042421) mup_visualizer_osc_pane

0xb4da,	// (0x00048d1e) mup_visualizer_spec_pane

0x58b6,	// (0x000430fa) call3_video_qcif_pane_ParamLimits

0x58b6,	// (0x000430fa) call3_video_qcif_pane

0x58c8,	// (0x0004310c) call3_video_qcif_uncrop_pane_ParamLimits

0x58c8,	// (0x0004310c) call3_video_qcif_uncrop_pane

0x58d8,	// (0x0004311c) call3_video_subqcif_pane_ParamLimits

0x58d8,	// (0x0004311c) call3_video_subqcif_pane

0x58ec,	// (0x00043130) call3_video_subqcif_uncrop_pane_ParamLimits

0x58ec,	// (0x00043130) call3_video_subqcif_uncrop_pane

0x5946,	// (0x0004318a) popup_call3_audio_in_window_g4_ParamLimits

0x5946,	// (0x0004318a) popup_call3_audio_in_window_g4

0x5861,	// (0x000430a5) mup_spec_half_pane

0x586a,	// (0x000430ae) mup_spec_half_pane_cp

0xc8d7,	// (0x0004a11b) mup_osc_middle_pane

0xc8e0,	// (0x0004a124) mup_visualizer_osc_pane_g1

0x5841,	// (0x00043085) mup_spec_bar_pane_ParamLimits

0x5841,	// (0x00043085) mup_spec_bar_pane

0xc8c4,	// (0x0004a108) mup_spec_bar_pane_g1

0xc8ce,	// (0x0004a112) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0004ce55) mup_spec_bar_pane_g

0x28e8,	// (0x0004012c) aid_cale_week_size_cell_pane_ParamLimits

0x2902,	// (0x00040146) bg_cale_heading_pane_ParamLimits

0xaa1b,	// (0x0004825f) bg_cale_pane_cp01_ParamLimits

0x292b,	// (0x0004016f) cale_week_corner_pane_ParamLimits

0x294a,	// (0x0004018e) cale_week_day_heading_pane_ParamLimits

0x2978,	// (0x000401bc) cale_week_scroll_pane_g1_ParamLimits

0x299c,	// (0x000401e0) cale_week_scroll_pane_g2_ParamLimits

0x29b4,	// (0x000401f8) cale_week_scroll_pane_g3_ParamLimits

0x29cc,	// (0x00040210) cale_week_scroll_pane_g4_ParamLimits

0x29e4,	// (0x00040228) cale_week_scroll_pane_g5_ParamLimits

0x29fc,	// (0x00040240) cale_week_scroll_pane_g6_ParamLimits

0x2a18,	// (0x0004025c) cale_week_scroll_pane_g7_ParamLimits

0x2a34,	// (0x00040278) cale_week_scroll_pane_g8_ParamLimits

0x2a50,	// (0x00040294) cale_week_scroll_pane_g9_ParamLimits

0x2a6d,	// (0x000402b1) cale_week_scroll_pane_g10_ParamLimits

0x2a8a,	// (0x000402ce) cale_week_scroll_pane_g11_ParamLimits

0x2aa7,	// (0x000402eb) cale_week_scroll_pane_g12_ParamLimits

0x2ac4,	// (0x00040308) cale_week_scroll_pane_g13_ParamLimits

0x2ae1,	// (0x00040325) cale_week_scroll_pane_g14_ParamLimits

0x2b0a,	// (0x0004034e) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0004c9fd) cale_week_scroll_pane_g_ParamLimits

0x2b33,	// (0x00040377) cale_week_time_pane_ParamLimits

0x2b4f,	// (0x00040393) grid_cale_week_pane_ParamLimits

0xaa39,	// (0x0004827d) listscroll_cale_week_pane_t1

0xaa4b,	// (0x0004828f) scroll_pane_cp08_ParamLimits

0x3969,	// (0x000411ad) cale_month_corner_pane_ParamLimits

0xae00,	// (0x00048644) cale_month_pane_t1

0x3dc1,	// (0x00041605) cale_month_week_pane_ParamLimits

0xb3fd,	// (0x00048c41) popup_call_status_window_g1_ParamLimits

0x453f,	// (0x00041d83) popup_call_status_window_g2_ParamLimits

0x454b,	// (0x00041d8f) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0004cba5) popup_call_status_window_g_ParamLimits

0xb18e,	// (0x000489d2) aid_call2_pane

0x101d,	// (0x0003e861) msg_header_pane_g1

0x4fd1,	// (0x00042815) postcard_address2_pane_ParamLimits

0x4fd1,	// (0x00042815) postcard_address2_pane

0x4fdf,	// (0x00042823) postcard_message2_pane_ParamLimits

0x4fdf,	// (0x00042823) postcard_message2_pane

0x57e8,	// (0x0004302c) message2_row_pane_ParamLimits

0x57e8,	// (0x0004302c) message2_row_pane

0x5802,	// (0x00043046) address2_row_pane_ParamLimits

0x5802,	// (0x00043046) address2_row_pane

0xc892,	// (0x0004a0d6) postcard_message2_row_pane_g1

0xc89a,	// (0x0004a0de) postcard_message2_row_pane_t1

0xc892,	// (0x0004a0d6) address2_row_pane_g1

0xc89a,	// (0x0004a0de) address2_row_pane_t1

0x3089,	// (0x000408cd) aid_size_cell_vorec

0xa5a6,	// (0x00047dea) main_rss_pane

0x5815,	// (0x00043059) rss_list_single_pane_ParamLimits

0x5815,	// (0x00043059) rss_list_single_pane

0xc8a8,	// (0x0004a0ec) rss_list_single_pane_t1

0xc8b6,	// (0x0004a0fa) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0004ce50) rss_list_single_pane_t

0xa5a6,	// (0x00047dea) main_camera2_pane

0xa5a6,	// (0x00047dea) main_video2_pane

0x5a42,	// (0x00043286) cams_zoom_pane_cp2_ParamLimits

0x5a42,	// (0x00043286) cams_zoom_pane_cp2

0x5a4e,	// (0x00043292) image2_vga_pane_ParamLimits

0x5a4e,	// (0x00043292) image2_vga_pane

0x5a5d,	// (0x000432a1) main_camera2_pane_g1_ParamLimits

0x5a5d,	// (0x000432a1) main_camera2_pane_g1

0x5a69,	// (0x000432ad) main_camera2_pane_g2_ParamLimits

0x5a69,	// (0x000432ad) main_camera2_pane_g2

0x5a75,	// (0x000432b9) main_camera2_pane_g3_ParamLimits

0x5a75,	// (0x000432b9) main_camera2_pane_g3

0x5a81,	// (0x000432c5) main_camera2_pane_g4_ParamLimits

0x5a81,	// (0x000432c5) main_camera2_pane_g4

0x5a8d,	// (0x000432d1) main_camera2_pane_g5_ParamLimits

0x5a8d,	// (0x000432d1) main_camera2_pane_g5

0x5a99,	// (0x000432dd) main_camera2_pane_g6_ParamLimits

0x5a99,	// (0x000432dd) main_camera2_pane_g6

0x5aa5,	// (0x000432e9) main_camera2_pane_g7_ParamLimits

0x5aa5,	// (0x000432e9) main_camera2_pane_g7

0x5ab1,	// (0x000432f5) main_camera2_pane_g8_ParamLimits

0x5ab1,	// (0x000432f5) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0004ce71) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0004ce71) main_camera2_pane_g

0x5ac9,	// (0x0004330d) main_camera2_pane_t1_ParamLimits

0x5ac9,	// (0x0004330d) main_camera2_pane_t1

0x5adb,	// (0x0004331f) main_camera2_pane_t2_ParamLimits

0x5adb,	// (0x0004331f) main_camera2_pane_t2

0x5aed,	// (0x00043331) main_camera2_pane_t3_ParamLimits

0x5aed,	// (0x00043331) main_camera2_pane_t3

0x5aff,	// (0x00043343) main_camera2_pane_t4_ParamLimits

0x5aff,	// (0x00043343) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0004ce84) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0004ce84) main_camera2_pane_t

0x5b5c,	// (0x000433a0) cams_zoom_pane_cp4_ParamLimits

0x5b5c,	// (0x000433a0) cams_zoom_pane_cp4

0x5b6c,	// (0x000433b0) image2_cif_pane_ParamLimits

0x5b6c,	// (0x000433b0) image2_cif_pane

0x5b81,	// (0x000433c5) image2_subqcif_pane_ParamLimits

0x5b81,	// (0x000433c5) image2_subqcif_pane

0x5b90,	// (0x000433d4) main_video2_pane_g1_ParamLimits

0x5b90,	// (0x000433d4) main_video2_pane_g1

0x5ba2,	// (0x000433e6) main_video2_pane_g2_ParamLimits

0x5ba2,	// (0x000433e6) main_video2_pane_g2

0x5bb2,	// (0x000433f6) main_video2_pane_g3_ParamLimits

0x5bb2,	// (0x000433f6) main_video2_pane_g3

0x5bc2,	// (0x00043406) main_video2_pane_g4_ParamLimits

0x5bc2,	// (0x00043406) main_video2_pane_g4

0x5bd2,	// (0x00043416) main_video2_pane_g5_ParamLimits

0x5bd2,	// (0x00043416) main_video2_pane_g5

0x5be2,	// (0x00043426) main_video2_pane_g6_ParamLimits

0x5be2,	// (0x00043426) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0004ce93) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0004ce93) main_video2_pane_g

0x5bf4,	// (0x00043438) main_video2_pane_t1_ParamLimits

0x5bf4,	// (0x00043438) main_video2_pane_t1

0x5c0e,	// (0x00043452) main_video2_pane_t2_ParamLimits

0x5c0e,	// (0x00043452) main_video2_pane_t2

0x5c34,	// (0x00043478) main_video2_pane_t3_ParamLimits

0x5c34,	// (0x00043478) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0004cea0) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0004cea0) main_video2_pane_t

0x5530,	// (0x00042d74) call_muted_g2

0x0001,

0xf5fe,	// (0x0004ce42) call_muted_g

0xa5a6,	// (0x00047dea) main_mup2_pane

0xc917,	// (0x0004a15b) main_mup2_pane_g1_ParamLimits

0xc917,	// (0x0004a15b) main_mup2_pane_g1

0x5c5a,	// (0x0004349e) main_mup2_pane_g2_ParamLimits

0x5c5a,	// (0x0004349e) main_mup2_pane_g2

0x5eec,	// (0x00043730) main_mup_pane_g13_cp1

0x5ef4,	// (0x00043738) mup_volume_pane_cp1

0x5c7c,	// (0x000434c0) main_mup2_pane_g4_ParamLimits

0x5c7c,	// (0x000434c0) main_mup2_pane_g4

0x5c91,	// (0x000434d5) main_mup2_pane_g5_ParamLimits

0x5c91,	// (0x000434d5) main_mup2_pane_g5

0x5ca6,	// (0x000434ea) main_mup2_pane_g6_ParamLimits

0x5ca6,	// (0x000434ea) main_mup2_pane_g6

0x5cbb,	// (0x000434ff) main_mup2_pane_g7_ParamLimits

0x5cbb,	// (0x000434ff) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0004cea7) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0004cea7) main_mup2_pane_g

0x5cd7,	// (0x0004351b) main_mup2_pane_t1_ParamLimits

0x5cd7,	// (0x0004351b) main_mup2_pane_t1

0x5cee,	// (0x00043532) main_mup2_pane_t2_ParamLimits

0x5cee,	// (0x00043532) main_mup2_pane_t2

0x5d05,	// (0x00043549) main_mup2_pane_t3_ParamLimits

0x5d05,	// (0x00043549) main_mup2_pane_t3

0x5d1c,	// (0x00043560) main_mup2_pane_t4_ParamLimits

0x5d1c,	// (0x00043560) main_mup2_pane_t4

0x5d36,	// (0x0004357a) main_mup2_pane_t5_ParamLimits

0x5d36,	// (0x0004357a) main_mup2_pane_t5

0x5d50,	// (0x00043594) main_mup2_pane_t6_ParamLimits

0x5d50,	// (0x00043594) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0004ceb6) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0004ceb6) main_mup2_pane_t

0x5d88,	// (0x000435cc) mup2_visualizer_pane_ParamLimits

0x5d88,	// (0x000435cc) mup2_visualizer_pane

0x5dbe,	// (0x00043602) mup_progress_pane_cp_ParamLimits

0x5dbe,	// (0x00043602) mup_progress_pane_cp

0x5ed7,	// (0x0004371b) mup_volume_pane_cp_ParamLimits

0x5ed7,	// (0x0004371b) mup_volume_pane_cp

0x5dd7,	// (0x0004361b) mup2_visualizer_pane_g1_ParamLimits

0x5dd7,	// (0x0004361b) mup2_visualizer_pane_g1

0xc923,	// (0x0004a167) mup2_visualizer_pane_g2_ParamLimits

0xc923,	// (0x0004a167) mup2_visualizer_pane_g2

0x5dec,	// (0x00043630) mup2_visualizer_pane_g3_ParamLimits

0x5dec,	// (0x00043630) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0004cec3) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0004cec3) mup2_visualizer_pane_g

0xb70c,	// (0x00048f50) aid_size_cell_fmradio

0x5646,	// (0x00042e8a) aid_height_parent_landcape

0xac5e,	// (0x000484a2) wml_content_pane_cp

0xac66,	// (0x000484aa) wml_tabs_pane

0xac6f,	// (0x000484b3) popup_wml_miniature_window

0xac77,	// (0x000484bb) scroll_pane_cp021

0xac8b,	// (0x000484cf) wml_content_pane_comp8

0xa5a6,	// (0x00047dea) bg_popup_sub_pane_cp05

0xc941,	// (0x0004a185) popup_wml_miniature_window_g1

0xc949,	// (0x0004a18d) wml_miniature_view_pane

0x5dfa,	// (0x0004363e) aid_size_wml_view

0x5e02,	// (0x00043646) wml_miniature_view_pane_g1

0x5e0b,	// (0x0004364f) wml_miniature_view_pane_g2

0x5e14,	// (0x00043658) wml_miniature_view_pane_g3

0x5e1c,	// (0x00043660) wml_miniature_view_pane_g4

0x5e24,	// (0x00043668) wml_miniature_view_pane_g5

0x5e2c,	// (0x00043670) wml_miniature_view_pane_g6

0x5e34,	// (0x00043678) wml_miniature_view_pane_g7

0x5e3c,	// (0x00043680) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0004ceca) wml_miniature_view_pane_g

0xc917,	// (0x0004a15b) background_graphic_ParamLimits

0xc917,	// (0x0004a15b) background_graphic

0xc951,	// (0x0004a195) wml_tabs_2_pane

0xc95a,	// (0x0004a19e) wml_tabs_3_pane_ParamLimits

0xc95a,	// (0x0004a19e) wml_tabs_3_pane

0xc96c,	// (0x0004a1b0) wml_tabs_4_pane_ParamLimits

0xc96c,	// (0x0004a1b0) wml_tabs_4_pane

0xc982,	// (0x0004a1c6) wml_tabs_5_pane_ParamLimits

0xc982,	// (0x0004a1c6) wml_tabs_5_pane

0xc99c,	// (0x0004a1e0) wml_tabs_pane_g2_ParamLimits

0xc99c,	// (0x0004a1e0) wml_tabs_pane_g2

0xc9b0,	// (0x0004a1f4) wml_tabs_pane_g3_ParamLimits

0xc9b0,	// (0x0004a1f4) wml_tabs_pane_g3

0x5e44,	// (0x00043688) wml_tabs_2_active_pane_ParamLimits

0x5e44,	// (0x00043688) wml_tabs_2_active_pane

0x5e56,	// (0x0004369a) wml_tabs_2_passive_pane_ParamLimits

0x5e56,	// (0x0004369a) wml_tabs_2_passive_pane

0x5e68,	// (0x000436ac) wml_tabs_3_active_pane_cp_ParamLimits

0x5e68,	// (0x000436ac) wml_tabs_3_active_pane_cp

0x5e7b,	// (0x000436bf) wml_tabs_3_passive_pane_ParamLimits

0x5e7b,	// (0x000436bf) wml_tabs_3_passive_pane

0x5e8c,	// (0x000436d0) wml_tabs_3_passive_pane_cp_ParamLimits

0x5e8c,	// (0x000436d0) wml_tabs_3_passive_pane_cp

0x5ea1,	// (0x000436e5) tabs_4_active_pane

0x5ea9,	// (0x000436ed) tabs_4_passive_pane

0x5eb1,	// (0x000436f5) tabs_4_passive_pane_cp

0x5eb9,	// (0x000436fd) tabs_4_passive_pane_cp2

0x540b,	// (0x00042c4f) aid_height_text

0x4ba6,	// (0x000423ea) mup_volume_cont_pane_ParamLimits

0x4ba6,	// (0x000423ea) mup_volume_cont_pane

0x243e,	// (0x0003fc82) aid_size_cell_pinb

0x2448,	// (0x0003fc8c) aid_size_list_pinb

0x5da7,	// (0x000435eb) mup2_volume_cont_pane_ParamLimits

0x5da7,	// (0x000435eb) mup2_volume_cont_pane

0x5ec3,	// (0x00043707) mup2_volume_cont_pane_g1_ParamLimits

0x5ec3,	// (0x00043707) mup2_volume_cont_pane_g1

0x20c2,	// (0x0003f906) aid_size_cell_touch_ParamLimits

0x20c2,	// (0x0003f906) aid_size_cell_touch

0x2328,	// (0x0003fb6c) touch_pane_ParamLimits

0x2328,	// (0x0003fb6c) touch_pane

0xa13a,	// (0x0004797e) main_rss2_pane

0xc9cd,	// (0x0004a211) listscroll_rss2_pane

0xc9d6,	// (0x0004a21a) rss2_navigation_pane

0xc9de,	// (0x0004a222) list_rss2_pane

0xb2b2,	// (0x00048af6) scroll_pane_cp22

0xc9e6,	// (0x0004a22a) rss2_navigation_pane_g1

0xc9ef,	// (0x0004a233) rss2_navigation_pane_g2

0xc9f7,	// (0x0004a23b) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0004cedb) rss2_navigation_pane_g

0xc9ff,	// (0x0004a243) rss2_navigation_pane_t1

0x5efc,	// (0x00043740) rss2_list_single_pane_ParamLimits

0x5efc,	// (0x00043740) rss2_list_single_pane

0xca0d,	// (0x0004a251) rss2_list_single_pane_t2

0xca1b,	// (0x0004a25f) rss2_list_single_pane_t3_ParamLimits

0xca1b,	// (0x0004a25f) rss2_list_single_pane_t3

0xca38,	// (0x0004a27c) rss2_list_single_pane_t4

0x43d0,	// (0x00041c14) smil_status_pane_g1

0xa7ad,	// (0x00047ff1) main_image2_pane_ParamLimits

0xa7ad,	// (0x00047ff1) main_image2_pane

0x5abd,	// (0x00043301) main_camera2_pane_g9_ParamLimits

0x5abd,	// (0x00043301) main_camera2_pane_g9

0x5b11,	// (0x00043355) main_camera2_pane_t5_ParamLimits

0x5b11,	// (0x00043355) main_camera2_pane_t5

0x5b23,	// (0x00043367) main_camera2_pane_t6_ParamLimits

0x5b23,	// (0x00043367) main_camera2_pane_t6

0x5f1f,	// (0x00043763) main_image2_pane_g1_ParamLimits

0x5f1f,	// (0x00043763) main_image2_pane_g1

0x51a8,	// (0x000429ec) smil2_video_pane_ParamLimits

0x51a8,	// (0x000429ec) smil2_video_pane

0x0de4,	// (0x0003e628) aid_zoom_text_primary_cp

0xa189,	// (0x000479cd) popup_preview_fixed_window

0xabc7,	// (0x0004840b) im_reading_pane_g1

0x5a07,	// (0x0004324b) cams2_bc_adjust_pane_cp_ParamLimits

0x5a07,	// (0x0004324b) cams2_bc_adjust_pane_cp

0x5b4e,	// (0x00043392) cams2_bc_adjust_pane_ParamLimits

0x5b4e,	// (0x00043392) cams2_bc_adjust_pane

0x5f2b,	// (0x0004376f) cams2_bc_adjust_pane_g1

0x5f33,	// (0x00043777) cams2_slider_pane

0x5f3c,	// (0x00043780) cams2_slider_pane_g1

0x5f45,	// (0x00043789) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0004cee2) cams2_slider_pane_g

0x2543,	// (0x0003fd87) calc_display_pane_ParamLimits

0x2561,	// (0x0003fda5) calc_paper_pane_ParamLimits

0x257d,	// (0x0003fdc1) grid_calc_pane_ParamLimits

0x45a9,	// (0x00041ded) popup_clock_digital_window_t1_ParamLimits

0xb6a9,	// (0x00048eed) main_image_pane_t1

0x2529,	// (0x0003fd6d) aid_size_cell_calc_ParamLimits

0x2529,	// (0x0003fd6d) aid_size_cell_calc

0x5678,	// (0x00042ebc) popup_blid_sat_info2_window_ParamLimits

0x5678,	// (0x00042ebc) popup_blid_sat_info2_window

0xca4e,	// (0x0004a292) aid_size_cell_blid

0xca56,	// (0x0004a29a) bg_popup_window_pane_cp07

0xca79,	// (0x0004a2bd) grid_popup_blid_pane

0xca83,	// (0x0004a2c7) heading_pane_cp05_ParamLimits

0xca83,	// (0x0004a2c7) heading_pane_cp05

0xcb4d,	// (0x0004a391) cell_popup_blid_pane_ParamLimits

0xcb4d,	// (0x0004a391) cell_popup_blid_pane

0xcb77,	// (0x0004a3bb) cell_popup_blid_pane_g1

0xcb7f,	// (0x0004a3c3) cell_popup_blid_pane_t1

0x5d6d,	// (0x000435b1) mup2_indicator_pane_ParamLimits

0x5d6d,	// (0x000435b1) mup2_indicator_pane

0xb41b,	// (0x00048c5f) mup2_visualizer_osc_pane

0xc92f,	// (0x0004a173) mup2_visualizer_spec_pane_ParamLimits

0xc92f,	// (0x0004a173) mup2_visualizer_spec_pane

0x5f5f,	// (0x000437a3) mup2_spec_half_pane

0x5f68,	// (0x000437ac) mup2_spec_half_pane_cp

0x5f72,	// (0x000437b6) mup2_spec_bar_pane_ParamLimits

0x5f72,	// (0x000437b6) mup2_spec_bar_pane

0xc8c4,	// (0x0004a108) mup2_spec_bar_pane_g1

0xc8ce,	// (0x0004a112) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0004ce55) mup2_spec_bar_pane_g

0x5f91,	// (0x000437d5) mup2_osc_middle_pane

0xc8e0,	// (0x0004a124) mup2_visualizer_osc_pane_g1

0xa1b3,	// (0x000479f7) popup_number_entry_window_t1_ParamLimits

0xa1c6,	// (0x00047a0a) popup_number_entry_window_t2_ParamLimits

0xa1d8,	// (0x00047a1c) popup_number_entry_window_t3_ParamLimits

0x237f,	// (0x0003fbc3) popup_number_entry_window_t5_ParamLimits

0x237f,	// (0x0003fbc3) popup_number_entry_window_t5

0xf0d3,	// (0x0004c917) popup_number_entry_window_t_ParamLimits

0xa1ea,	// (0x00047a2e) text_title_cp2_ParamLimits

0x4e95,	// (0x000426d9) aid_hotspot_pointer_text2_pane

0x4f2f,	// (0x00042773) main_viewer_pane_g9_ParamLimits

0x4f2f,	// (0x00042773) main_viewer_pane_g9

0xae00,	// (0x00048644) cale_month_pane_t1_ParamLimits

0xae26,	// (0x0004866a) bg_cale_pane_ParamLimits

0xae3e,	// (0x00048682) list_cale_pane_ParamLimits

0xae4f,	// (0x00048693) listscroll_cale_day_pane_t1

0xae61,	// (0x000486a5) scroll_pane_cp09_ParamLimits

0x4be5,	// (0x00042429) main_mup_eq_pane_t1_ParamLimits

0x4be5,	// (0x00042429) main_mup_eq_pane_t1

0x4c01,	// (0x00042445) main_mup_eq_pane_t2_ParamLimits

0x4c01,	// (0x00042445) main_mup_eq_pane_t2

0x4c1d,	// (0x00042461) main_mup_eq_pane_t3_ParamLimits

0x4c1d,	// (0x00042461) main_mup_eq_pane_t3

0x4c37,	// (0x0004247b) main_mup_eq_pane_t4_ParamLimits

0x4c37,	// (0x0004247b) main_mup_eq_pane_t4

0x4c51,	// (0x00042495) main_mup_eq_pane_t5_ParamLimits

0x4c51,	// (0x00042495) main_mup_eq_pane_t5

0x4c6b,	// (0x000424af) main_mup_eq_pane_t6_ParamLimits

0x4c6b,	// (0x000424af) main_mup_eq_pane_t6

0x4c81,	// (0x000424c5) main_mup_eq_pane_t7_ParamLimits

0x4c81,	// (0x000424c5) main_mup_eq_pane_t7

0x4c97,	// (0x000424db) main_mup_eq_pane_t8_ParamLimits

0x4c97,	// (0x000424db) main_mup_eq_pane_t8

0x4cad,	// (0x000424f1) main_mup_eq_pane_t9_ParamLimits

0x4cad,	// (0x000424f1) main_mup_eq_pane_t9

0x4cc9,	// (0x0004250d) main_mup_eq_pane_t10_ParamLimits

0x4cc9,	// (0x0004250d) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0004cca4) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0004cca4) main_mup_eq_pane_t

0x4d8e,	// (0x000425d2) mup_equalizer_pane_cp5_ParamLimits

0x4da6,	// (0x000425ea) mup_equalizer_pane_cp6_ParamLimits

0x4dbe,	// (0x00042602) mup_equalizer_pane_cp7_ParamLimits

0xa13a,	// (0x0004797e) main_gallery_pane

0xc8e9,	// (0x0004a12d) smil2_volume_pane

0xc8f1,	// (0x0004a135) smil_status_volume_pane_g1_ParamLimits

0xc904,	// (0x0004a148) smil_status_volume_pane_g2_ParamLimits

0x5872,	// (0x000430b6) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0004ce5a) smil_status_volume_pane_g_ParamLimits

0xca56,	// (0x0004a29a) bg_popup_window_pane_cp07_ParamLimits

0xca64,	// (0x0004a2a8) blid_firmament_pane

0x5f9a,	// (0x000437de) aid_size_cell_gallery_ParamLimits

0x5f9a,	// (0x000437de) aid_size_cell_gallery

0x5fa8,	// (0x000437ec) grid_gallery_pane_ParamLimits

0x5fa8,	// (0x000437ec) grid_gallery_pane

0x5fb8,	// (0x000437fc) cell_gallery_pane_ParamLimits

0x5fb8,	// (0x000437fc) cell_gallery_pane

0xcb8d,	// (0x0004a3d1) bg_cell_gallery_focus_pane_ParamLimits

0xcb8d,	// (0x0004a3d1) bg_cell_gallery_focus_pane

0xcb9f,	// (0x0004a3e3) cell_gallery_pane_g1_ParamLimits

0xcb9f,	// (0x0004a3e3) cell_gallery_pane_g1

0x5ffe,	// (0x00043842) cell_gallery_pane_g2_ParamLimits

0x5ffe,	// (0x00043842) cell_gallery_pane_g2

0x600b,	// (0x0004384f) cell_gallery_pane_g3_ParamLimits

0x600b,	// (0x0004384f) cell_gallery_pane_g3

0xcbab,	// (0x0004a3ef) cell_gallery_pane_g4_ParamLimits

0xcbab,	// (0x0004a3ef) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0004cf08) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0004cf08) cell_gallery_pane_g

0xcbb7,	// (0x0004a3fb) bg_cell_gallery_focus_pane_g1

0xcbbf,	// (0x0004a403) bg_cell_gallery_focus_pane_g2

0xcbc7,	// (0x0004a40b) bg_cell_gallery_focus_pane_g3

0xcbcf,	// (0x0004a413) bg_cell_gallery_focus_pane_g4

0xcbd7,	// (0x0004a41b) bg_cell_gallery_focus_pane_g5

0xcbdf,	// (0x0004a423) bg_cell_gallery_focus_pane_g6

0xcbe7,	// (0x0004a42b) bg_cell_gallery_focus_pane_g7

0xcbef,	// (0x0004a433) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0004cf11) bg_cell_gallery_focus_pane_g

0xcbf7,	// (0x0004a43b) aid_firma_cardinal

0xcc0b,	// (0x0004a44f) blid_firmament_pane_t1

0xcc22,	// (0x0004a466) blid_firmament_pane_t2

0xcc39,	// (0x0004a47d) blid_firmament_pane_t3

0xcc50,	// (0x0004a494) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0004cf22) blid_firmament_pane_t

0xcc67,	// (0x0004a4ab) blid_sat_info_pane

0xcc77,	// (0x0004a4bb) blid_sat_info_pane_g1

0xcc77,	// (0x0004a4bb) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0004cf2b) blid_sat_info_pane_g

0xcc81,	// (0x0004a4c5) blid_sat_info_pane_t1

0xcc8f,	// (0x0004a4d3) smil2_volume_content_pane

0xcc98,	// (0x0004a4dc) smil2_volume_pane_g1

0xcca0,	// (0x0004a4e4) smil2_volume_content_pane_g1

0xcca9,	// (0x0004a4ed) smil2_volume_content_pane_g2

0xccb2,	// (0x0004a4f6) smil2_volume_content_pane_g3

0xccbb,	// (0x0004a4ff) smil2_volume_content_pane_g4

0xccc4,	// (0x0004a508) smil2_volume_content_pane_g5

0xcccd,	// (0x0004a511) smil2_volume_content_pane_g6

0xccd6,	// (0x0004a51a) smil2_volume_content_pane_g7

0xccdf,	// (0x0004a523) smil2_volume_content_pane_g8

0xcce8,	// (0x0004a52c) smil2_volume_content_pane_g9

0xccf1,	// (0x0004a535) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0004cf30) smil2_volume_content_pane_g

0x2bfe,	// (0x00040442) cale_week_day_heading_pane_t1_ParamLimits

0x2c44,	// (0x00040488) cale_week_day_heading_pane_t2_ParamLimits

0x2c8f,	// (0x000404d3) cale_week_day_heading_pane_t3_ParamLimits

0x2cda,	// (0x0004051e) cale_week_day_heading_pane_t4_ParamLimits

0x2d25,	// (0x00040569) cale_week_day_heading_pane_t5_ParamLimits

0x2d70,	// (0x000405b4) cale_week_day_heading_pane_t6_ParamLimits

0x2dbb,	// (0x000405ff) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0004ca1c) cale_week_day_heading_pane_t_ParamLimits

0xaa6d,	// (0x000482b1) bg_cale_side_pane_ParamLimits

0x2e01,	// (0x00040645) cale_week_time_pane_t1_ParamLimits

0x2e45,	// (0x00040689) cale_week_time_pane_t2_ParamLimits

0x2e89,	// (0x000406cd) cale_week_time_pane_t3_ParamLimits

0x2ecd,	// (0x00040711) cale_week_time_pane_t4_ParamLimits

0x2f11,	// (0x00040755) cale_week_time_pane_t5_ParamLimits

0x2f55,	// (0x00040799) cale_week_time_pane_t6_ParamLimits

0x2f99,	// (0x000407dd) cale_week_time_pane_t7_ParamLimits

0x2fdd,	// (0x00040821) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0004ca2b) cale_week_time_pane_t_ParamLimits

0x3027,	// (0x0004086b) cell_cale_week_pane_g2_ParamLimits

0xaa6d,	// (0x000482b1) bg_cale_side_pane_cp01_ParamLimits

0x41eb,	// (0x00041a2f) cale_month_week_pane_t1_ParamLimits

0x4204,	// (0x00041a48) cale_month_week_pane_t2_ParamLimits

0x421d,	// (0x00041a61) cale_month_week_pane_t3_ParamLimits

0x4236,	// (0x00041a7a) cale_month_week_pane_t4_ParamLimits

0x424f,	// (0x00041a93) cale_month_week_pane_t5_ParamLimits

0x426a,	// (0x00041aae) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0004cb04) cale_month_week_pane_t_ParamLimits

0x4399,	// (0x00041bdd) cell_cale_month_pane_g1_ParamLimits

0xa13a,	// (0x0004797e) main_cale_event_viewer_pane

0xa13a,	// (0x0004797e) listscroll_cale_event_viewer_pane

0xccfa,	// (0x0004a53e) list_cale_ev_pane

0xcd02,	// (0x0004a546) scroll_pane_cp023

0x6018,	// (0x0004385c) field_cale_ev_pane_ParamLimits

0x6018,	// (0x0004385c) field_cale_ev_pane

0xcd0e,	// (0x0004a552) field_cale_ev_content_pane_ParamLimits

0xcd0e,	// (0x0004a552) field_cale_ev_content_pane

0xcd1a,	// (0x0004a55e) field_cale_ev_pane_g1_ParamLimits

0xcd1a,	// (0x0004a55e) field_cale_ev_pane_g1

0xcd26,	// (0x0004a56a) field_cale_ev_pane_g2_ParamLimits

0xcd26,	// (0x0004a56a) field_cale_ev_pane_g2

0xcd3e,	// (0x0004a582) field_cale_ev_pane_g3_ParamLimits

0xcd3e,	// (0x0004a582) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0004cf45) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0004cf45) field_cale_ev_pane_g

0xcd56,	// (0x0004a59a) field_cale_ev_pane_t1_ParamLimits

0xcd56,	// (0x0004a59a) field_cale_ev_pane_t1

0x603c,	// (0x00043880) field_cale_ev_content_pane_t1_ParamLimits

0x603c,	// (0x00043880) field_cale_ev_content_pane_t1

0x4e7a,	// (0x000426be) bg_button_pane_cp01

0x28ca,	// (0x0004010e) listscroll_cale_week_pane_ParamLimits

0x28de,	// (0x00040122) popup_toolbar_window_cp01

0xaa39,	// (0x0004827d) listscroll_cale_week_pane_t1_ParamLimits

0x28ca,	// (0x0004010e) listscroll_cale_day_pane_ParamLimits

0x28de,	// (0x00040122) popup_toolbar_window_cp02

0xae4f,	// (0x00048693) listscroll_cale_day_pane_t1_ParamLimits

0x28ca,	// (0x0004010e) main_cale_month_pane_ParamLimits

0x575c,	// (0x00042fa0) popup_toolbar_window_cp03_ParamLimits

0x575c,	// (0x00042fa0) popup_toolbar_window_cp03

0x50b8,	// (0x000428fc) main_image_pane_g2_ParamLimits

0x50b8,	// (0x000428fc) main_image_pane_g2

0x50c4,	// (0x00042908) main_image_pane_g3_ParamLimits

0x50c4,	// (0x00042908) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0004cd36) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0004cd36) main_image_pane_g

0xb6a9,	// (0x00048eed) main_image_pane_t1_ParamLimits

0x50d0,	// (0x00042914) main_image_pane_t2_ParamLimits

0x50d0,	// (0x00042914) main_image_pane_t2

0x50e2,	// (0x00042926) main_image_pane_t3_ParamLimits

0x50e2,	// (0x00042926) main_image_pane_t3

0x50f4,	// (0x00042938) main_image_pane_t4_ParamLimits

0x50f4,	// (0x00042938) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0004cd3d) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0004cd3d) main_image_pane_t

0x5106,	// (0x0004294a) popup_image_details_window_cp01

0x5110,	// (0x00042954) popup_toobar_trans_pane_cp01_ParamLimits

0x5110,	// (0x00042954) popup_toobar_trans_pane_cp01

0x56cd,	// (0x00042f11) popup_image_details_window_ParamLimits

0x56cd,	// (0x00042f11) popup_image_details_window

0xc848,	// (0x0004a08c) popup_image_focus_window

0x59f9,	// (0x0004323d) camera2_autofocus_pane_ParamLimits

0x59f9,	// (0x0004323d) camera2_autofocus_pane

0xa13a,	// (0x0004797e) bg_popup_sub_pane_cp06

0xcd6d,	// (0x0004a5b1) popup_image_focus_window_g1

0xcd75,	// (0x0004a5b9) popup_image_focus_window_g2

0xcd7d,	// (0x0004a5c1) popup_image_focus_window_g3

0xcd85,	// (0x0004a5c9) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0004cf4c) popup_image_focus_window_g

0xcd8d,	// (0x0004a5d1) popup_image_focus_window_t1

0xcd9b,	// (0x0004a5df) popup_image_focus_window_t2

0xcdab,	// (0x0004a5ef) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0004cf55) popup_image_focus_window_t

0xcdb9,	// (0x0004a5fd) camera2_autofocus_pane_g1

0xa7ad,	// (0x00047ff1) bg_tb_trans_pane_cp01

0xcdc7,	// (0x0004a60b) popup_image_details_window_g1

0xcdda,	// (0x0004a61e) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0004cf67) popup_image_details_window_g

0xce03,	// (0x0004a647) popup_image_details_window_t1

0xce15,	// (0x0004a659) popup_image_details_window_t2

0xce2e,	// (0x0004a672) popup_image_details_window_t3

0xce42,	// (0x0004a686) popup_image_details_window_t4

0xce5d,	// (0x0004a6a1) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0004cf6e) popup_image_details_window_t

0xa8e0,	// (0x00048124) bg_calc_paper_pane_ParamLimits

0xa13a,	// (0x0004797e) grid_highlight_pane_cp013

0x267a,	// (0x0003febe) list_calc_pane_ParamLimits

0x268c,	// (0x0003fed0) scroll_pane_cp024

0xa8f4,	// (0x00048138) bg_calc_display_pane_ParamLimits

0x2694,	// (0x0003fed8) calc_display_pane_t1_ParamLimits

0x26a9,	// (0x0003feed) calc_display_pane_t2_ParamLimits

0x26be,	// (0x0003ff02) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0004c99e) calc_display_pane_t_ParamLimits

0x2792,	// (0x0003ffd6) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0004c9bb) cell_calc_pane_g

0x279b,	// (0x0003ffdf) cell_calc_pane_t1

0xa953,	// (0x00048197) grid_highlight_pane_cp02_ParamLimits

0xa969,	// (0x000481ad) toolbar_button_pane_cp01_ParamLimits

0xa969,	// (0x000481ad) toolbar_button_pane_cp01

0xb6ee,	// (0x00048f32) temp_image_control_pane_ParamLimits

0xb6ee,	// (0x00048f32) temp_image_control_pane

0xa7ad,	// (0x00047ff1) main_mp3_pane

0xce77,	// (0x0004a6bb) temp_image_control_pane_g1_ParamLimits

0xce77,	// (0x0004a6bb) temp_image_control_pane_g1

0xce85,	// (0x0004a6c9) temp_image_control_pane_g2_ParamLimits

0xce85,	// (0x0004a6c9) temp_image_control_pane_g2

0xce97,	// (0x0004a6db) temp_image_control_pane_g3_ParamLimits

0xce97,	// (0x0004a6db) temp_image_control_pane_g3

0x6087,	// (0x000438cb) temp_image_control_pane_g4_ParamLimits

0x6087,	// (0x000438cb) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0004cf79) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0004cf79) temp_image_control_pane_g

0xce77,	// (0x0004a6bb) main_mp3_pane_g1

0x6098,	// (0x000438dc) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0004cf82) main_mp3_pane_g

0xceda,	// (0x0004a71e) main_mp3_pane_t1

0xaad2,	// (0x00048316) main_camera_pane_g8_ParamLimits

0xaad2,	// (0x00048316) main_camera_pane_g8

0x32de,	// (0x00040b22) main_video_pane_g7_ParamLimits

0x32de,	// (0x00040b22) main_video_pane_g7

0x5b3c,	// (0x00043380) main_camera2_pane_t7_ParamLimits

0x5b3c,	// (0x00043380) main_camera2_pane_t7

0xac1e,	// (0x00048462) scroll_pane_cp025_ParamLimits

0xac1e,	// (0x00048462) scroll_pane_cp025

0xac32,	// (0x00048476) scroll_pane_cp026_ParamLimits

0xac32,	// (0x00048476) scroll_pane_cp026

0xac41,	// (0x00048485) wml_content_pane_ParamLimits

0xa13a,	// (0x0004797e) main_touch_calib_pane

0x613c,	// (0x00043980) main_touch_calib_pane_g1

0x6148,	// (0x0004398c) main_touch_calib_pane_g2

0x6154,	// (0x00043998) main_touch_calib_pane_g3

0x6160,	// (0x000439a4) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0004cfa0) main_touch_calib_pane_g

0x616c,	// (0x000439b0) main_touch_calib_pane_t1

0x6183,	// (0x000439c7) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0004cfa9) main_touch_calib_pane_t

0xb32d,	// (0x00048b71) mup_progress_pane_cp02

0xb34c,	// (0x00048b90) navi_pane_g1

0xb3ae,	// (0x00048bf2) navi_pane_mp_t3

0xa7ad,	// (0x00047ff1) main_mp3_pane_ParamLimits

0x579e,	// (0x00042fe2) navi_pane_ParamLimits

0xce77,	// (0x0004a6bb) main_mp3_pane_g1_ParamLimits

0x6098,	// (0x000438dc) main_mp3_pane_g2_ParamLimits

0x60a4,	// (0x000438e8) main_mp3_pane_g3_ParamLimits

0x60a4,	// (0x000438e8) main_mp3_pane_g3

0x60b0,	// (0x000438f4) main_mp3_pane_g4_ParamLimits

0x60b0,	// (0x000438f4) main_mp3_pane_g4

0xcea7,	// (0x0004a6eb) main_mp3_pane_g5_ParamLimits

0xcea7,	// (0x0004a6eb) main_mp3_pane_g5

0xceb5,	// (0x0004a6f9) main_mp3_pane_g6_ParamLimits

0xceb5,	// (0x0004a6f9) main_mp3_pane_g6

0xcec2,	// (0x0004a706) main_mp3_pane_g7_ParamLimits

0xcec2,	// (0x0004a706) main_mp3_pane_g7

0xcece,	// (0x0004a712) main_mp3_pane_g8_ParamLimits

0xcece,	// (0x0004a712) main_mp3_pane_g8

0xf73e,	// (0x0004cf82) main_mp3_pane_g_ParamLimits

0x60bc,	// (0x00043900) main_mp3_pane_t2

0x60cc,	// (0x00043910) main_mp3_pane_t3

0xcee8,	// (0x0004a72c) main_mp3_pane_t4

0xcef6,	// (0x0004a73a) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0004cf93) main_mp3_pane_t

0xcf04,	// (0x0004a748) mup_progress_pane_cp01

0x0de4,	// (0x0003e628) aid_zoom_text_secondary2

0xccfa,	// (0x0004a53e) list_cale_ev2_pane

0xcd02,	// (0x0004a546) scroll_pane_cp023_ParamLimits

0x61de,	// (0x00043a22) field_cale_ev2_pane_ParamLimits

0x61de,	// (0x00043a22) field_cale_ev2_pane

0x1092,	// (0x0003e8d6) field_cale_ev2_pane_g1_ParamLimits

0x1092,	// (0x0003e8d6) field_cale_ev2_pane_g1

0x109e,	// (0x0003e8e2) field_cale_ev2_pane_g2_ParamLimits

0x109e,	// (0x0003e8e2) field_cale_ev2_pane_g2

0x10b6,	// (0x0003e8fa) field_cale_ev2_pane_g3_ParamLimits

0x10b6,	// (0x0003e8fa) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0004cfb4) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0004cfb4) field_cale_ev2_pane_g

0x10da,	// (0x0003e91e) field_cale_ev2_pane_t1_ParamLimits

0x10da,	// (0x0003e91e) field_cale_ev2_pane_t1

0x10f1,	// (0x0003e935) field_cale_ev2_pane_t2_ParamLimits

0x10f1,	// (0x0003e935) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0004cfbd) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0004cfbd) field_cale_ev2_pane_t

0x4f97,	// (0x000427db) main_postcard_pane_g5_ParamLimits

0x4f97,	// (0x000427db) main_postcard_pane_g5

0x4fa5,	// (0x000427e9) main_postcard_pane_g6_ParamLimits

0x4fa5,	// (0x000427e9) main_postcard_pane_g6

0x311c,	// (0x00040960) camera2_autofocus_pane_cp_ParamLimits

0x311c,	// (0x00040960) camera2_autofocus_pane_cp

0xa7ad,	// (0x00047ff1) main_mup3_pane

0x6219,	// (0x00043a5d) main_mup3_pane_g1_ParamLimits

0x6219,	// (0x00043a5d) main_mup3_pane_g1

0x623a,	// (0x00043a7e) main_mup3_pane_g2_ParamLimits

0x623a,	// (0x00043a7e) main_mup3_pane_g2

0x62b6,	// (0x00043afa) main_mup3_pane_g3_ParamLimits

0x62b6,	// (0x00043afa) main_mup3_pane_g3

0x62fb,	// (0x00043b3f) main_mup3_pane_g4_ParamLimits

0x62fb,	// (0x00043b3f) main_mup3_pane_g4

0x633e,	// (0x00043b82) main_mup3_pane_g5_ParamLimits

0x633e,	// (0x00043b82) main_mup3_pane_g5

0x6383,	// (0x00043bc7) main_mup3_pane_g6_ParamLimits

0x6383,	// (0x00043bc7) main_mup3_pane_g6

0xcf0c,	// (0x0004a750) main_mup3_pane_g7_ParamLimits

0xcf0c,	// (0x0004a750) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0004cfcd) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0004cfcd) main_mup3_pane_g

0x63f9,	// (0x00043c3d) main_mup3_pane_t1_ParamLimits

0x63f9,	// (0x00043c3d) main_mup3_pane_t1

0x6462,	// (0x00043ca6) main_mup3_pane_t2_ParamLimits

0x6462,	// (0x00043ca6) main_mup3_pane_t2

0x652b,	// (0x00043d6f) main_mup3_pane_t4_ParamLimits

0x652b,	// (0x00043d6f) main_mup3_pane_t4

0x657f,	// (0x00043dc3) main_mup3_pane_t5_ParamLimits

0x657f,	// (0x00043dc3) main_mup3_pane_t5

0x662d,	// (0x00043e71) main_mup3_pane_t6_ParamLimits

0x662d,	// (0x00043e71) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0004cfde) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0004cfde) main_mup3_pane_t

0x66d9,	// (0x00043f1d) mup3_progress_pane_ParamLimits

0x66d9,	// (0x00043f1d) mup3_progress_pane

0x6753,	// (0x00043f97) popup_mup3_control_window_ParamLimits

0x6753,	// (0x00043f97) popup_mup3_control_window

0xcf1a,	// (0x0004a75e) popup_mup3_text_window

0x6770,	// (0x00043fb4) mup3_progress_pane_t1

0x678f,	// (0x00043fd3) mup3_progress_pane_t2

0xcf22,	// (0x0004a766) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0004cfeb) mup3_progress_pane_t

0xcf3f,	// (0x0004a783) mup_progress_pane_cp03

0xa13a,	// (0x0004797e) bg_tb_trans_pane_cp04

0x67ae,	// (0x00043ff2) mup3_volume_pane

0x67b6,	// (0x00043ffa) popup_mup3_control_window_g1

0xdadc,	// (0x0004b320) mup3_volume_pane_g1

0xdae5,	// (0x0004b329) mup3_volume_pane_g2

0xdaee,	// (0x0004b332) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0004cff2) mup3_volume_pane_g

0xa13a,	// (0x0004797e) bg_tb_trans_pane_cp03

0xcf4f,	// (0x0004a793) popup_mup3_text_window_g1

0xcf57,	// (0x0004a79b) popup_mup3_text_window_t1

0xa93c,	// (0x00048180) list_calc_item_pane_g1_ParamLimits

0xc9c4,	// (0x0004a208) mup_volume_pane_cp_g1

0x619c,	// (0x000439e0) main_touch_calib_pane_t3

0x61b2,	// (0x000439f6) main_touch_calib_pane_t4

0x61c8,	// (0x00043a0c) main_touch_calib_pane_t5

0xa144,	// (0x00047988) aid_cell_size_toolbar2

0xa14c,	// (0x00047990) aid_popup3_width_pane

0x0ddc,	// (0x0003e620) aid_zoom_text_msg_primary

0x30f1,	// (0x00040935) vorec_t7

0xa900,	// (0x00048144) bg_calc_paper_pane_g1_ParamLimits

0xa90c,	// (0x00048150) bg_calc_paper_pane_g2_ParamLimits

0xa918,	// (0x0004815c) bg_calc_paper_pane_g3_ParamLimits

0xa924,	// (0x00048168) bg_calc_paper_pane_g4_ParamLimits

0xa930,	// (0x00048174) bg_calc_paper_pane_g5_ParamLimits

0x26ff,	// (0x0003ff43) bg_calc_paper_pane_g6_ParamLimits

0x2710,	// (0x0003ff54) bg_calc_paper_pane_g7_ParamLimits

0x2721,	// (0x0003ff65) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0004c9a5) bg_calc_paper_pane_g_ParamLimits

0x2734,	// (0x0003ff78) calc_bg_paper_pane_g9_ParamLimits

0x320d,	// (0x00040a51) image_qvga_pane_ParamLimits

0x320d,	// (0x00040a51) image_qvga_pane

0xa82f,	// (0x00048073) bg_popup_sub_pane_cp04_ParamLimits

0xb625,	// (0x00048e69) popup_mup_playback_window_g1_ParamLimits

0xb631,	// (0x00048e75) popup_mup_playback_window_t1_ParamLimits

0xb646,	// (0x00048e8a) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0004cd31) popup_mup_playback_window_t_ParamLimits

0x5c6b,	// (0x000434af) main_mup2_pane_g3_ParamLimits

0x5c6b,	// (0x000434af) main_mup2_pane_g3

0x34b9,	// (0x00040cfd) popup_toolbar_window_cp04

0xba2c,	// (0x00049270) popup_call2_audio_second_window_g3_ParamLimits

0xba2c,	// (0x00049270) popup_call2_audio_second_window_g3

0xbe36,	// (0x0004967a) popup_call2_audio_first_window_g4_ParamLimits

0xbe36,	// (0x0004967a) popup_call2_audio_first_window_g4

0xc4b5,	// (0x00049cf9) popup_call2_audio_in_window_g4_ParamLimits

0xc4b5,	// (0x00049cf9) popup_call2_audio_in_window_g4

0x50ab,	// (0x000428ef) aid_area_sk_bg_cut_ParamLimits

0x50ab,	// (0x000428ef) aid_area_sk_bg_cut

0xb65b,	// (0x00048e9f) aid_area_sk_bg_cut_2_ParamLimits

0xb65b,	// (0x00048e9f) aid_area_sk_bg_cut_2

0x5fee,	// (0x00043832) aid_placing_details_win

0x5ff6,	// (0x0004383a) aid_placing_details_win_2

0xcdb9,	// (0x0004a5fd) camera2_autofocus_pane_g1_ParamLimits

0x22c8,	// (0x0003fb0c) popup_fixed_preview_cale_window_ParamLimits

0x22c8,	// (0x0003fb0c) popup_fixed_preview_cale_window

0xb42c,	// (0x00048c70) navi_slider_pane_g3

0xb435,	// (0x00048c79) navi_slider_pane_g4

0xb43e,	// (0x00048c82) navi_slider_pane_g5

0xb42c,	// (0x00048c70) navi_slider_pane_g6

0x4953,	// (0x00042197) navi_slider_pane_g7

0xb553,	// (0x00048d97) mup_scale_pane_g3

0xb55c,	// (0x00048da0) mup_scale_pane_g4

0xb565,	// (0x00048da9) mup_scale_pane_g5

0x4dd6,	// (0x0004261a) mup_scale_pane_g6

0x4ddf,	// (0x00042623) mup_scale_pane_g7

0xb42c,	// (0x00048c70) cams2_slider_pane_g3

0xca46,	// (0x0004a28a) cams2_slider_pane_g4

0x5f4e,	// (0x00043792) cams2_slider_pane_g5

0xb42c,	// (0x00048c70) cams2_slider_pane_g6

0x5f56,	// (0x0004379a) cams2_slider_pane_g7

0xcc77,	// (0x0004a4bb) camera2_autofocus_pane_cp_g1

0xc81a,	// (0x0004a05e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc81a,	// (0x0004a05e) bg_popup_preview_window_pane_cp02

0xcf65,	// (0x0004a7a9) list_fp_cale_pane_ParamLimits

0xcf65,	// (0x0004a7a9) list_fp_cale_pane

0xcf71,	// (0x0004a7b5) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf71,	// (0x0004a7b5) popup_fixed_preview_cale_window_t1

0x67bf,	// (0x00044003) popup_fixed_preview_cale_window_t2_ParamLimits

0x67bf,	// (0x00044003) popup_fixed_preview_cale_window_t2

0x67d4,	// (0x00044018) popup_fixed_preview_cale_window_t3_ParamLimits

0x67d4,	// (0x00044018) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0004cff9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0004cff9) popup_fixed_preview_cale_window_t

0x67e9,	// (0x0004402d) list_single_fp_cale_pane_ParamLimits

0x67e9,	// (0x0004402d) list_single_fp_cale_pane

0xcf8f,	// (0x0004a7d3) list_single_fp_cale_pane_g1_ParamLimits

0xcf8f,	// (0x0004a7d3) list_single_fp_cale_pane_g1

0xcf9b,	// (0x0004a7df) list_single_fp_cale_pane_g2_ParamLimits

0xcf9b,	// (0x0004a7df) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0004d000) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0004d000) list_single_fp_cale_pane_g

0xcfb4,	// (0x0004a7f8) list_single_fp_cale_pane_t1_ParamLimits

0xcfb4,	// (0x0004a7f8) list_single_fp_cale_pane_t1

0xcfc6,	// (0x0004a80a) list_single_fp_cale_pane_t2_ParamLimits

0xcfc6,	// (0x0004a80a) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0004d007) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0004d007) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa13a,	// (0x0004797e) main_dialer_pane

0x67f9,	// (0x0004403d) aid_cell_size_keypad

0x6803,	// (0x00044047) dialer_ne_pane

0x680d,	// (0x00044051) grid_dialer_command_1_pane

0x6815,	// (0x00044059) grid_dialer_command_2_pane

0x681d,	// (0x00044061) grid_dialer_keypad_pane

0x6831,	// (0x00044075) bg_popup_call_pane_cp06_ParamLimits

0x6831,	// (0x00044075) bg_popup_call_pane_cp06

0x683d,	// (0x00044081) dialer_ne_clear_pane_ParamLimits

0x683d,	// (0x00044081) dialer_ne_clear_pane

0xcff9,	// (0x0004a83d) dialer_ne_pane_g1

0xd001,	// (0x0004a845) dialer_ne_pane_t1_ParamLimits

0xd001,	// (0x0004a845) dialer_ne_pane_t1

0x6849,	// (0x0004408d) dialer_ne_pane_t2_ParamLimits

0x6849,	// (0x0004408d) dialer_ne_pane_t2

0x6866,	// (0x000440aa) dialer_ne_pane_t3_ParamLimits

0x6866,	// (0x000440aa) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0004d00c) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0004d00c) dialer_ne_pane_t

0x688a,	// (0x000440ce) dialer_ne_pane_t3_copy1_ParamLimits

0x688a,	// (0x000440ce) dialer_ne_pane_t3_copy1

0x68ae,	// (0x000440f2) cell_dialer_keypad_pane_ParamLimits

0x68ae,	// (0x000440f2) cell_dialer_keypad_pane

0x68c5,	// (0x00044109) cell_dialer_command_1_pane_ParamLimits

0x68c5,	// (0x00044109) cell_dialer_command_1_pane

0x68db,	// (0x0004411f) cell_dialer_command_2_pane_ParamLimits

0x68db,	// (0x0004411f) cell_dialer_command_2_pane

0xd013,	// (0x0004a857) bg_button_pane_cp02_ParamLimits

0xd013,	// (0x0004a857) bg_button_pane_cp02

0x68ea,	// (0x0004412e) cell_dialer_keypad_pane_g1_ParamLimits

0x68ea,	// (0x0004412e) cell_dialer_keypad_pane_g1

0xd013,	// (0x0004a857) bg_button_pane_cp03_ParamLimits

0xd013,	// (0x0004a857) bg_button_pane_cp03

0x68ff,	// (0x00044143) cell_dialer_command_1_pane_g1_ParamLimits

0x68ff,	// (0x00044143) cell_dialer_command_1_pane_g1

0xd01f,	// (0x0004a863) bg_button_pane_cp04

0x6913,	// (0x00044157) cell_dialer_command_2_pane_g1

0xb41b,	// (0x00048c5f) bg_button_pane_cp06

0xd027,	// (0x0004a86b) dialer_ne_clear_pane_g1

0x488e,	// (0x000420d2) navi_pane_g2

0x48bc,	// (0x00042100) navi_pane_g3

0x0002,

0xf3f0,	// (0x0004cc34) navi_pane_g

0x48e7,	// (0x0004212b) navi_pane_mv_g2

0x490e,	// (0x00042152) navi_pane_mv_g5

0x4916,	// (0x0004215a) navi_pane_mv_t1

0xa8f4,	// (0x00048138) main_clock2_pane

0x6951,	// (0x00044195) main_clock2_list_pane_ParamLimits

0x6951,	// (0x00044195) main_clock2_list_pane

0x697b,	// (0x000441bf) main_clock2_pane_t1_ParamLimits

0x697b,	// (0x000441bf) main_clock2_pane_t1

0x699d,	// (0x000441e1) main_clock2_pane_t2_ParamLimits

0x699d,	// (0x000441e1) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0004d013) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0004d013) main_clock2_pane_t

0x69fa,	// (0x0004423e) popup_clock_analogue_window_cp03_ParamLimits

0x69fa,	// (0x0004423e) popup_clock_analogue_window_cp03

0x6a1a,	// (0x0004425e) popup_clock_digital_window_cp02_ParamLimits

0x6a1a,	// (0x0004425e) popup_clock_digital_window_cp02

0x6a8b,	// (0x000442cf) main_clock2_list_single_pane_ParamLimits

0x6a8b,	// (0x000442cf) main_clock2_list_single_pane

0xb41b,	// (0x00048c5f) list_highlight_pane_cp05

0xd043,	// (0x0004a887) main_clock2_list_single_pane_t1

0x34b9,	// (0x00040cfd) popup_toolbar_window_cp04_ParamLimits

0x6057,	// (0x0004389b) camera2_autofocus_pane_g2_ParamLimits

0x6057,	// (0x0004389b) camera2_autofocus_pane_g2

0x6063,	// (0x000438a7) camera2_autofocus_pane_g3_ParamLimits

0x6063,	// (0x000438a7) camera2_autofocus_pane_g3

0x606f,	// (0x000438b3) camera2_autofocus_pane_g4_ParamLimits

0x606f,	// (0x000438b3) camera2_autofocus_pane_g4

0x607b,	// (0x000438bf) camera2_autofocus_pane_g5_ParamLimits

0x607b,	// (0x000438bf) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0004cf5c) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0004cf5c) camera2_autofocus_pane_g

0x61f9,	// (0x00043a3d) camera2_autofocus_pane_cp_g2

0x6201,	// (0x00043a45) camera2_autofocus_pane_cp_g3

0x6209,	// (0x00043a4d) camera2_autofocus_pane_cp_g4

0x6211,	// (0x00043a55) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0004cfc2) camera2_autofocus_pane_cp_g

0x6829,	// (0x0004406d) popup_dialer_spcha_window

0xa13a,	// (0x0004797e) bg_popup_sub_pane_cp07

0xd051,	// (0x0004a895) list_spcha_pane

0xd059,	// (0x0004a89d) list_single_spcha_pane_ParamLimits

0xd059,	// (0x0004a89d) list_single_spcha_pane

0xa13a,	// (0x0004797e) list_highlight_pane_cp06

0xd06a,	// (0x0004a8ae) list_single_spcha_pane_t1

0xc25f,	// (0x00049aa3) popup_call2_audio_out_window_g4_ParamLimits

0xc25f,	// (0x00049aa3) popup_call2_audio_out_window_g4

0xa13a,	// (0x0004797e) main_imed2_pane

0xc852,	// (0x0004a096) popup_imed_adjust2_window

0x56db,	// (0x00042f1f) popup_imed_trans_window_ParamLimits

0x56db,	// (0x00042f1f) popup_imed_trans_window

0xcaaf,	// (0x0004a2f3) popup_blid_sat_info2_window_t1

0xcabd,	// (0x0004a301) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0004cef1) popup_blid_sat_info2_window_t

0x6b35,	// (0x00044379) aid_size_cell_colour_35

0x6b4f,	// (0x00044393) aid_size_cell_colour_112

0x6b66,	// (0x000443aa) aid_size_cell_effect

0xa7ad,	// (0x00047ff1) bg_tb_trans_pane_cp02

0xb3f1,	// (0x00048c35) heading_imed_pane

0x6b80,	// (0x000443c4) listscroll_imed_pane

0xd078,	// (0x0004a8bc) heading_imed_pane_g1

0xd080,	// (0x0004a8c4) heading_imed_pane_t1

0xd08e,	// (0x0004a8d2) grid_imed_colour_35_pane_ParamLimits

0xd08e,	// (0x0004a8d2) grid_imed_colour_35_pane

0x6b8c,	// (0x000443d0) grid_imed_effect_pane

0xd0aa,	// (0x0004a8ee) list_imed_aspect_pane

0x6b9c,	// (0x000443e0) scroll_pane_cp027_ParamLimits

0x6b9c,	// (0x000443e0) scroll_pane_cp027

0x6ba8,	// (0x000443ec) cell_imed_effect_pane_ParamLimits

0x6ba8,	// (0x000443ec) cell_imed_effect_pane

0xd0b2,	// (0x0004a8f6) cell_imed_colour_pane_ParamLimits

0xd0b2,	// (0x0004a8f6) cell_imed_colour_pane

0xd0fc,	// (0x0004a940) cell_imed_colour_pane_g1_ParamLimits

0xd0fc,	// (0x0004a940) cell_imed_colour_pane_g1

0xd10d,	// (0x0004a951) hgihlgiht_grid_pane_cp016_ParamLimits

0xd10d,	// (0x0004a951) hgihlgiht_grid_pane_cp016

0x6bc4,	// (0x00044408) cell_imed_effect_pane_g1

0x6bcc,	// (0x00044410) grid_highlight_pane_cp017

0xd11e,	// (0x0004a962) list_imed_single_pane_ParamLimits

0xd11e,	// (0x0004a962) list_imed_single_pane

0xa13a,	// (0x0004797e) list_highlight_pane_cp07

0xd132,	// (0x0004a976) list_imed_aspect_pane_comp1_t1

0xc826,	// (0x0004a06a) bg_tb_trans_pane_cp05

0xd154,	// (0x0004a998) popup_imed_adjust2_window_g1

0xd17b,	// (0x0004a9bf) popup_imed_adjust2_window_t1

0xd193,	// (0x0004a9d7) slider_imed_adjust_pane

0xd1a7,	// (0x0004a9eb) slider_imed_adjust_pane_g1

0xd1b7,	// (0x0004a9fb) slider_imed_adjust_pane_g2

0xd1c7,	// (0x0004aa0b) slider_imed_adjust_pane_g3

0xd1d8,	// (0x0004aa1c) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0004d030) slider_imed_adjust_pane_g

0x6bd5,	// (0x00044419) aid_size_cell_clipart2

0x6be1,	// (0x00044425) grid_imed_clipart_pane

0xd1e9,	// (0x0004aa2d) scroll_pane_cp031

0x6beb,	// (0x0004442f) cell_imed_clipart_pane_ParamLimits

0x6beb,	// (0x0004442f) cell_imed_clipart_pane

0x6c09,	// (0x0004444d) cell_imed_clipart_pane_g1

0xa13a,	// (0x0004797e) grid_highlight_pane_cp014

0x695d,	// (0x000441a1) main_clock2_pane_g1_ParamLimits

0x695d,	// (0x000441a1) main_clock2_pane_g1

0x6a36,	// (0x0004427a) aid_call2_pane_cp10

0x6a48,	// (0x0004428c) aid_call_pane_cp10

0xb321,	// (0x00048b65) popup_clock_analogue_window_cp10_g1

0xb321,	// (0x00048b65) popup_clock_analogue_window_cp10_g2

0x6a5a,	// (0x0004429e) popup_clock_analogue_window_cp10_g3

0x6a5a,	// (0x0004429e) popup_clock_analogue_window_cp10_g4

0xb321,	// (0x00048b65) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0004d01e) popup_clock_analogue_window_cp10_g

0x6a6c,	// (0x000442b0) popup_clock_analogue_window_cp10_t1

0x6a9d,	// (0x000442e1) clock_digital_number_pane_cp10_ParamLimits

0x6a9d,	// (0x000442e1) clock_digital_number_pane_cp10

0x6ab5,	// (0x000442f9) clock_digital_number_pane_cp11_ParamLimits

0x6ab5,	// (0x000442f9) clock_digital_number_pane_cp11

0x6acd,	// (0x00044311) clock_digital_number_pane_cp12_ParamLimits

0x6acd,	// (0x00044311) clock_digital_number_pane_cp12

0x6ae5,	// (0x00044329) clock_digital_number_pane_cp13_ParamLimits

0x6ae5,	// (0x00044329) clock_digital_number_pane_cp13

0x6afd,	// (0x00044341) clock_digital_separator_pane_cp10_ParamLimits

0x6afd,	// (0x00044341) clock_digital_separator_pane_cp10

0x6b15,	// (0x00044359) popup_clock_digital_window_cp02_t1_ParamLimits

0x6b15,	// (0x00044359) popup_clock_digital_window_cp02_t1

0xa827,	// (0x0004806b) clock_digital_number_pane_cp10_g1

0xa827,	// (0x0004806b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0004d039) clock_digital_number_pane_cp10_g

0xa827,	// (0x0004806b) clock_digital_separator_pane_cp10_g1

0xa827,	// (0x0004806b) clock_digital_separator_pane_g2_cp10

0xb3bc,	// (0x00048c00) navi_pane_vded_g4

0xb3c5,	// (0x00048c09) navi_pane_vded_g5

0xb3ce,	// (0x00048c12) navi_pane_vded_t1

0xa13a,	// (0x0004797e) main_vded_pane

0x6c12,	// (0x00044456) main_vded_pane_g1

0x6c1e,	// (0x00044462) main_vded_pane_g2

0x6c28,	// (0x0004446c) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0004d03e) main_vded_pane_g

0x6c32,	// (0x00044476) main_vded_pane_t1

0x6c40,	// (0x00044484) main_vded_pane_t2

0x0001,

0xf801,	// (0x0004d045) main_vded_pane_t

0x6c4e,	// (0x00044492) vded_slider_pane

0x6c58,	// (0x0004449c) vded_video_pane

0xd1f1,	// (0x0004aa35) vded_video_pane_g1

0x6c64,	// (0x000444a8) vded_video_pane_g2

0xcc77,	// (0x0004a4bb) vded_video_pane_g3

0x0002,

0xf806,	// (0x0004d04a) vded_video_pane_g

0xd1fb,	// (0x0004aa3f) vded_slider_pane_g1

0xc9c4,	// (0x0004a208) vded_slider_pane_g2

0xd204,	// (0x0004aa48) vded_slider_pane_g3

0xd20d,	// (0x0004aa51) vded_slider_pane_g4

0xd216,	// (0x0004aa5a) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0004d051) vded_slider_pane_g

0x6747,	// (0x00043f8b) mup3_rocker_pane_ParamLimits

0x6747,	// (0x00043f8b) mup3_rocker_pane

0x6c6d,	// (0x000444b1) mup3_control_keys_pane_g1

0x6c75,	// (0x000444b9) mup3_control_keys_pane_g2

0x6c7d,	// (0x000444c1) mup3_control_keys_pane_g3

0x6c85,	// (0x000444c9) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0004d05c) mup3_control_keys_pane_g

0x22e6,	// (0x0003fb2a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x22e6,	// (0x0003fb2a) popup_toolbar2_fixed_window_cp01

0x6763,	// (0x00043fa7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6763,	// (0x00043fa7) popup_toolbar2_fixed_window_cp02

0xbb9e,	// (0x000493e2) popup_call2_audio_second_window_t4_ParamLimits

0xbb9e,	// (0x000493e2) popup_call2_audio_second_window_t4

0xc0cc,	// (0x00049910) popup_call2_audio_first_window_t6_ParamLimits

0xc0cc,	// (0x00049910) popup_call2_audio_first_window_t6

0xc362,	// (0x00049ba6) popup_call2_audio_out_window_t6_ParamLimits

0xc362,	// (0x00049ba6) popup_call2_audio_out_window_t6

0xa13a,	// (0x0004797e) main_vitu_pane

0x6c95,	// (0x000444d9) aid_size_cell_itu_ParamLimits

0x6c95,	// (0x000444d9) aid_size_cell_itu

0x230e,	// (0x0003fb52) bg_popup_window_pane_cp08_ParamLimits

0x230e,	// (0x0003fb52) bg_popup_window_pane_cp08

0x6ca3,	// (0x000444e7) field_vitu_entry_pane_ParamLimits

0x6ca3,	// (0x000444e7) field_vitu_entry_pane

0x6cb2,	// (0x000444f6) grid_vitu_function_pane_ParamLimits

0x6cb2,	// (0x000444f6) grid_vitu_function_pane

0x6cc2,	// (0x00044506) grid_vitu_itu_pane_ParamLimits

0x6cc2,	// (0x00044506) grid_vitu_itu_pane

0x6cd2,	// (0x00044516) cell_vitu_itu_pane_ParamLimits

0x6cd2,	// (0x00044516) cell_vitu_itu_pane

0x6ce9,	// (0x0004452d) cell_vitu_function_pane_ParamLimits

0x6ce9,	// (0x0004452d) cell_vitu_function_pane

0xa7ad,	// (0x00047ff1) bg_popup_sub_pane_cp08_ParamLimits

0xa7ad,	// (0x00047ff1) bg_popup_sub_pane_cp08

0x6cfd,	// (0x00044541) field_vitu_entry_pane_t1_ParamLimits

0x6cfd,	// (0x00044541) field_vitu_entry_pane_t1

0xd237,	// (0x0004aa7b) field_vitu_entry_pane_t2_ParamLimits

0xd237,	// (0x0004aa7b) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0004d06a) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0004d06a) field_vitu_entry_pane_t

0xd254,	// (0x0004aa98) bg_button_pane_cp05_ParamLimits

0xd254,	// (0x0004aa98) bg_button_pane_cp05

0x6d17,	// (0x0004455b) cell_vitu_itu_pane_g1

0x6d2f,	// (0x00044573) cell_vitu_itu_pane_t1_ParamLimits

0x6d2f,	// (0x00044573) cell_vitu_itu_pane_t1

0x6d41,	// (0x00044585) cell_vitu_itu_pane_t2_ParamLimits

0x6d41,	// (0x00044585) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0004d06f) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0004d06f) cell_vitu_itu_pane_t

0xd262,	// (0x0004aaa6) bg_button_pane_cp07

0x6d84,	// (0x000445c8) cell_vitu_function_pane_g1

0x25a1,	// (0x0003fde5) main_calc_pane_g1

0x20ea,	// (0x0003f92e) aid_visual_content_pane

0xa13a,	// (0x0004797e) main_vradio_pane

0x6d8d,	// (0x000445d1) main_vradio_pane_g1_ParamLimits

0x6d8d,	// (0x000445d1) main_vradio_pane_g1

0xd26c,	// (0x0004aab0) main_vradio_pane_g2_ParamLimits

0xd26c,	// (0x0004aab0) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0004d076) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0004d076) main_vradio_pane_g

0x6d9b,	// (0x000445df) main_vradio_pane_t1_ParamLimits

0x6d9b,	// (0x000445df) main_vradio_pane_t1

0x6dad,	// (0x000445f1) main_vradio_pane_t2_ParamLimits

0x6dad,	// (0x000445f1) main_vradio_pane_t2

0xd279,	// (0x0004aabd) main_vradio_pane_t3_ParamLimits

0xd279,	// (0x0004aabd) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0004d07b) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0004d07b) main_vradio_pane_t

0x6dbf,	// (0x00044603) vradio_rocker_control_pane_ParamLimits

0x6dbf,	// (0x00044603) vradio_rocker_control_pane

0x6dcb,	// (0x0004460f) vradio_station_info_pane_ParamLimits

0x6dcb,	// (0x0004460f) vradio_station_info_pane

0xd28d,	// (0x0004aad1) vradio_frequency_info_pane_ParamLimits

0xd28d,	// (0x0004aad1) vradio_frequency_info_pane

0xcc77,	// (0x0004a4bb) vradio_station_info_pane_g1

0xd29c,	// (0x0004aae0) vradio_station_info_pane_t1_ParamLimits

0xd29c,	// (0x0004aae0) vradio_station_info_pane_t1

0xd2be,	// (0x0004ab02) vradio_station_info_pane_t2_ParamLimits

0xd2be,	// (0x0004ab02) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0004d082) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0004d082) vradio_station_info_pane_t

0xd2d0,	// (0x0004ab14) vradio_tuning_pane

0xd2d8,	// (0x0004ab1c) vradio_rocker_control_pane_g1

0xd2e0,	// (0x0004ab24) vradio_rocker_control_pane_g2

0xd2e8,	// (0x0004ab2c) vradio_rocker_control_pane_g3

0xd2f0,	// (0x0004ab34) vradio_rocker_control_pane_g4

0xd2f8,	// (0x0004ab3c) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0004d087) vradio_rocker_control_pane_g

0x6dd8,	// (0x0004461c) vradio_frequency_info_pane_g1

0xd300,	// (0x0004ab44) vradio_frequency_info_pane_t1_ParamLimits

0xd300,	// (0x0004ab44) vradio_frequency_info_pane_t1

0x6de2,	// (0x00044626) vradio_tuning_pane_g1

0x6ded,	// (0x00044631) vradio_tuning_pane_t1

0xa160,	// (0x000479a4) area_side_right_pane_ParamLimits

0xa160,	// (0x000479a4) area_side_right_pane

0xc7e1,	// (0x0004a025) status_small_pane_g1

0xc7e9,	// (0x0004a02d) status_small_pane_g2

0xc7f2,	// (0x0004a036) status_small_pane_g3

0xc7fb,	// (0x0004a03f) status_small_pane_g4

0x0003,

0xf603,	// (0x0004ce47) status_small_pane_g

0xc804,	// (0x0004a048) status_small_pane_t1

0xa13a,	// (0x0004797e) main_video3_pane

0xd314,	// (0x0004ab58) cams_zoom_vslider_pane

0xd31c,	// (0x0004ab60) image3_wide_pane_ParamLimits

0xd31c,	// (0x0004ab60) image3_wide_pane

0xd336,	// (0x0004ab7a) image3_wide_small_pane

0xd342,	// (0x0004ab86) main_video3_pane_g1_ParamLimits

0xd342,	// (0x0004ab86) main_video3_pane_g1

0xd35e,	// (0x0004aba2) main_video3_pane_g2_ParamLimits

0xd35e,	// (0x0004aba2) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0004d092) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0004d092) main_video3_pane_g

0xd37a,	// (0x0004abbe) main_video3_pane_t1_ParamLimits

0xd37a,	// (0x0004abbe) main_video3_pane_t1

0xd3a5,	// (0x0004abe9) main_video3_pane_t2_ParamLimits

0xd3a5,	// (0x0004abe9) main_video3_pane_t2

0xd3d2,	// (0x0004ac16) main_video3_pane_t3_ParamLimits

0xd3d2,	// (0x0004ac16) main_video3_pane_t3

0x0002,

0xf853,	// (0x0004d097) main_video3_pane_t_ParamLimits

0xf853,	// (0x0004d097) main_video3_pane_t

0xd3ff,	// (0x0004ac43) cams_zoom_vslider_pane_g1

0xd408,	// (0x0004ac4c) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0004d09e) cams_zoom_vslider_pane_g

0xd410,	// (0x0004ac54) small_slider_vertical_pane

0xcc77,	// (0x0004a4bb) small_slider_vertical_pane_g1

0xcc77,	// (0x0004a4bb) small_slider_vertical_pane_g2

0xd418,	// (0x0004ac5c) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0004d0a3) small_slider_vertical_pane_g

0xa13a,	// (0x0004797e) main_hwr_training_pane

0xd421,	// (0x0004ac65) hwr_training_instruct_pane_ParamLimits

0xd421,	// (0x0004ac65) hwr_training_instruct_pane

0x6dfc,	// (0x00044640) hwr_training_navi_pane_ParamLimits

0x6dfc,	// (0x00044640) hwr_training_navi_pane

0x6e16,	// (0x0004465a) hwr_training_write_pane_ParamLimits

0x6e16,	// (0x0004465a) hwr_training_write_pane

0xa13a,	// (0x0004797e) bg_frame_shadow_pane

0xd458,	// (0x0004ac9c) hwr_training_write_pane_g1

0xd460,	// (0x0004aca4) hwr_training_write_pane_g2

0xd468,	// (0x0004acac) hwr_training_write_pane_g3

0xd470,	// (0x0004acb4) hwr_training_write_pane_g4

0xd478,	// (0x0004acbc) hwr_training_write_pane_g5

0xd480,	// (0x0004acc4) hwr_training_write_pane_g6

0xd488,	// (0x0004accc) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0004d0aa) hwr_training_write_pane_g

0x6e4e,	// (0x00044692) hwr_training_navi_pane_g1_ParamLimits

0x6e4e,	// (0x00044692) hwr_training_navi_pane_g1

0x6e60,	// (0x000446a4) hwr_training_navi_pane_g2_ParamLimits

0x6e60,	// (0x000446a4) hwr_training_navi_pane_g2

0x6e72,	// (0x000446b6) hwr_training_navi_pane_g3_ParamLimits

0x6e72,	// (0x000446b6) hwr_training_navi_pane_g3

0x6e82,	// (0x000446c6) hwr_training_navi_pane_g4_ParamLimits

0x6e82,	// (0x000446c6) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0004d0b9) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0004d0b9) hwr_training_navi_pane_g

0x6e9c,	// (0x000446e0) hwr_training_navi_pane_t1

0x6eaa,	// (0x000446ee) list_single_hwr_training_instruct_pane_ParamLimits

0x6eaa,	// (0x000446ee) list_single_hwr_training_instruct_pane

0xd490,	// (0x0004acd4) list_single_hwr_training_instruct_pane_t1

0xcbb7,	// (0x0004a3fb) bg_frame_shadow_pane_g1

0xd49f,	// (0x0004ace3) bg_frame_shadow_pane_g2

0xd4a7,	// (0x0004aceb) bg_frame_shadow_pane_g3

0xd4af,	// (0x0004acf3) bg_frame_shadow_pane_g4

0xd4b7,	// (0x0004acfb) bg_frame_shadow_pane_g5

0xd4bf,	// (0x0004ad03) bg_frame_shadow_pane_g6

0xd4c7,	// (0x0004ad0b) bg_frame_shadow_pane_g7

0xa9bf,	// (0x00048203) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0004d0c4) bg_frame_shadow_pane_g

0xa13a,	// (0x0004797e) main_video_tele_dialer_pane

0x6ec3,	// (0x00044707) aid_size_cell_video_keypad_ParamLimits

0x6ec3,	// (0x00044707) aid_size_cell_video_keypad

0x6ed3,	// (0x00044717) grid_video_dialer_keypad_pane_ParamLimits

0x6ed3,	// (0x00044717) grid_video_dialer_keypad_pane

0x6f05,	// (0x00044749) video_down_pane_cp_ParamLimits

0x6f05,	// (0x00044749) video_down_pane_cp

0x6f2d,	// (0x00044771) cell_video_dialer_keypad_pane_ParamLimits

0x6f2d,	// (0x00044771) cell_video_dialer_keypad_pane

0xd4cf,	// (0x0004ad13) bg_button_pane_cp08_ParamLimits

0xd4cf,	// (0x0004ad13) bg_button_pane_cp08

0x6f44,	// (0x00044788) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6f44,	// (0x00044788) cell_video_dialer_keypad_pane_g1

0x673b,	// (0x00043f7f) mup3_rocker2_pane_ParamLimits

0x673b,	// (0x00043f7f) mup3_rocker2_pane

0xcc77,	// (0x0004a4bb) mup3_rocker2_pane_g1

0x565d,	// (0x00042ea1) main_dialer2_pane

0xa13a,	// (0x0004797e) main_mp4_pane

0x6f83,	// (0x000447c7) main_mp4_pane_g1_ParamLimits

0x6f83,	// (0x000447c7) main_mp4_pane_g1

0x6f91,	// (0x000447d5) main_mp4_pane_g2_ParamLimits

0x6f91,	// (0x000447d5) main_mp4_pane_g2

0x6f9f,	// (0x000447e3) main_mp4_pane_g3_ParamLimits

0x6f9f,	// (0x000447e3) main_mp4_pane_g3

0x6ff2,	// (0x00044836) main_mp4_pane_g4_ParamLimits

0x6ff2,	// (0x00044836) main_mp4_pane_g4

0x701a,	// (0x0004485e) main_mp4_pane_g5_ParamLimits

0x701a,	// (0x0004485e) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0004d0e4) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0004d0e4) main_mp4_pane_g

0x706a,	// (0x000448ae) main_mp4_pane_t1_ParamLimits

0x706a,	// (0x000448ae) main_mp4_pane_t1

0x70c6,	// (0x0004490a) main_mp4_pane_t2_ParamLimits

0x70c6,	// (0x0004490a) main_mp4_pane_t2

0xd4db,	// (0x0004ad1f) main_mp4_pane_t3_ParamLimits

0xd4db,	// (0x0004ad1f) main_mp4_pane_t3

0x7118,	// (0x0004495c) main_mp4_pane_t4_ParamLimits

0x7118,	// (0x0004495c) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0004d0f1) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0004d0f1) main_mp4_pane_t

0x7158,	// (0x0004499c) mp4_progress_pane_ParamLimits

0x7158,	// (0x0004499c) mp4_progress_pane

0x71a2,	// (0x000449e6) mp4_rocker_pane_ParamLimits

0x71a2,	// (0x000449e6) mp4_rocker_pane

0xd503,	// (0x0004ad47) mp4_progress_pane_t1

0xd51c,	// (0x0004ad60) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0004d0fa) mp4_progress_pane_t

0xd535,	// (0x0004ad79) mup_progress_pane_cp04

0xcc77,	// (0x0004a4bb) mp4_rocker_pane_g1

0x71c4,	// (0x00044a08) aid_cell_size_keypad2_ParamLimits

0x71c4,	// (0x00044a08) aid_cell_size_keypad2

0x71d4,	// (0x00044a18) dialer2_ne_pane_ParamLimits

0x71d4,	// (0x00044a18) dialer2_ne_pane

0x71e0,	// (0x00044a24) grid_dialer2_keypad_pane_ParamLimits

0x71e0,	// (0x00044a24) grid_dialer2_keypad_pane

0xdaf7,	// (0x0004b33b) bg_popup_call_pane_cp07_ParamLimits

0xdaf7,	// (0x0004b33b) bg_popup_call_pane_cp07

0x71ee,	// (0x00044a32) dialer2_ne_pane_t1_ParamLimits

0x71ee,	// (0x00044a32) dialer2_ne_pane_t1

0x7213,	// (0x00044a57) cell_dialer2_keypad_pane_ParamLimits

0x7213,	// (0x00044a57) cell_dialer2_keypad_pane

0xd553,	// (0x0004ad97) bg_button_pane_pane_cp04_ParamLimits

0xd553,	// (0x0004ad97) bg_button_pane_pane_cp04

0x722a,	// (0x00044a6e) cell_dialer2_keypad_pane_g1_ParamLimits

0x722a,	// (0x00044a6e) cell_dialer2_keypad_pane_g1

0x338b,	// (0x00040bcf) aid_placing_vt_set_content_ParamLimits

0x338b,	// (0x00040bcf) aid_placing_vt_set_content

0x33b3,	// (0x00040bf7) aid_placing_vt_set_title_ParamLimits

0x33b3,	// (0x00040bf7) aid_placing_vt_set_title

0xa13a,	// (0x0004797e) main_image3_pane

0x72c4,	// (0x00044b08) area_side_right_pane_cp01_ParamLimits

0x72c4,	// (0x00044b08) area_side_right_pane_cp01

0xa7bb,	// (0x00047fff) main_image3_pane_g1_ParamLimits

0xa7bb,	// (0x00047fff) main_image3_pane_g1

0x72f3,	// (0x00044b37) main_image3_pane_g2_ParamLimits

0x72f3,	// (0x00044b37) main_image3_pane_g2

0x730c,	// (0x00044b50) main_image3_pane_g3_ParamLimits

0x730c,	// (0x00044b50) main_image3_pane_g3

0x7325,	// (0x00044b69) main_image3_pane_g4_ParamLimits

0x7325,	// (0x00044b69) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0004d109) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0004d109) main_image3_pane_g

0x733e,	// (0x00044b82) main_image3_pane_t1_ParamLimits

0x733e,	// (0x00044b82) main_image3_pane_t1

0x7363,	// (0x00044ba7) main_image3_pane_t2_ParamLimits

0x7363,	// (0x00044ba7) main_image3_pane_t2

0x7382,	// (0x00044bc6) main_image3_pane_t3_ParamLimits

0x7382,	// (0x00044bc6) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0004d112) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0004d112) main_image3_pane_t

0x230e,	// (0x0003fb52) grid_sctrl_middle_pane_cp01_ParamLimits

0x230e,	// (0x0003fb52) grid_sctrl_middle_pane_cp01

0x73e3,	// (0x00044c27) cell_sctrl_middle_pane_cp01_ParamLimits

0x73e3,	// (0x00044c27) cell_sctrl_middle_pane_cp01

0x73f4,	// (0x00044c38) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x73f4,	// (0x00044c38) cell_sctrl_middle_pane_cp01_g1

0xa13a,	// (0x0004797e) main_call4_pane

0x7401,	// (0x00044c45) aid_size_button_call4_ParamLimits

0x7401,	// (0x00044c45) aid_size_button_call4

0x7433,	// (0x00044c77) call4_windows_pane_ParamLimits

0x7433,	// (0x00044c77) call4_windows_pane

0x744f,	// (0x00044c93) grid_call4_button_pane_ParamLimits

0x744f,	// (0x00044c93) grid_call4_button_pane

0xd55f,	// (0x0004ada3) call4_windows_conf_pane

0x7473,	// (0x00044cb7) popup_call4_audio_first_window_ParamLimits

0x7473,	// (0x00044cb7) popup_call4_audio_first_window

0x749f,	// (0x00044ce3) popup_call4_audio_second_window_ParamLimits

0x749f,	// (0x00044ce3) popup_call4_audio_second_window

0xd5ae,	// (0x0004adf2) popup_call4_audio_wait_window_ParamLimits

0xd5ae,	// (0x0004adf2) popup_call4_audio_wait_window

0x74b3,	// (0x00044cf7) cell_call4_button_pane_ParamLimits

0x74b3,	// (0x00044cf7) cell_call4_button_pane

0x74d6,	// (0x00044d1a) bg_button_pane_cp09_ParamLimits

0x74d6,	// (0x00044d1a) bg_button_pane_cp09

0x74e2,	// (0x00044d26) cell_call4_button_pane_g1_ParamLimits

0x74e2,	// (0x00044d26) cell_call4_button_pane_g1

0x74ef,	// (0x00044d33) cell_call4_button_pane_t1_ParamLimits

0x74ef,	// (0x00044d33) cell_call4_button_pane_t1

0xd5f6,	// (0x0004ae3a) popup_call4_audio_conf_window_ParamLimits

0xd5f6,	// (0x0004ae3a) popup_call4_audio_conf_window

0x6770,	// (0x00043fb4) mup3_progress_pane_t1_ParamLimits

0x678f,	// (0x00043fd3) mup3_progress_pane_t2_ParamLimits

0xcf22,	// (0x0004a766) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0004cfeb) mup3_progress_pane_t_ParamLimits

0xcf3f,	// (0x0004a783) mup_progress_pane_cp03_ParamLimits

0x6c8d,	// (0x000444d1) mup3_control_keys_pane_g4_copy1

0x7186,	// (0x000449ca) mp4_rocker2_pane_ParamLimits

0x7186,	// (0x000449ca) mp4_rocker2_pane

0xd610,	// (0x0004ae54) mp4_rocker2_pane_g1

0xd618,	// (0x0004ae5c) mp4_rocker2_pane_g2

0x7501,	// (0x00044d45) mp4_rocker2_pane_g3

0x7509,	// (0x00044d4d) mp4_rocker2_pane_g4

0x7511,	// (0x00044d55) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0004d11b) mp4_rocker2_pane_g

0xa13a,	// (0x0004797e) main_camera4_pane

0xa13a,	// (0x0004797e) main_video4_pane

0x6ee1,	// (0x00044725) main_video_tele_dialer_pane_t1_ParamLimits

0x6ee1,	// (0x00044725) main_video_tele_dialer_pane_t1

0x6ef3,	// (0x00044737) main_video_tele_dialer_pane_t2_ParamLimits

0x6ef3,	// (0x00044737) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0004d0d5) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0004d0d5) main_video_tele_dialer_pane_t

0x7531,	// (0x00044d75) cam4_autofocus_pane_ParamLimits

0x7531,	// (0x00044d75) cam4_autofocus_pane

0x7549,	// (0x00044d8d) cam4_image_uncrop_pane_ParamLimits

0x7549,	// (0x00044d8d) cam4_image_uncrop_pane

0x7562,	// (0x00044da6) cam4_indicators_pane_ParamLimits

0x7562,	// (0x00044da6) cam4_indicators_pane

0x757e,	// (0x00044dc2) main_camera4_pane_g1_ParamLimits

0x757e,	// (0x00044dc2) main_camera4_pane_g1

0x758a,	// (0x00044dce) main_camera4_pane_g2_ParamLimits

0x758a,	// (0x00044dce) main_camera4_pane_g2

0x758a,	// (0x00044dce) main_camera4_pane_g3_ParamLimits

0x758a,	// (0x00044dce) main_camera4_pane_g3

0x7596,	// (0x00044dda) main_camera4_pane_g4_ParamLimits

0x7596,	// (0x00044dda) main_camera4_pane_g4

0x75a2,	// (0x00044de6) main_camera4_pane_g5_ParamLimits

0x75a2,	// (0x00044de6) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0004d126) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0004d126) main_camera4_pane_g

0x75bc,	// (0x00044e00) main_camera4_pane_t1_ParamLimits

0x75bc,	// (0x00044e00) main_camera4_pane_t1

0xcea7,	// (0x0004a6eb) bg_tb_trans_pane_cp06

0x760e,	// (0x00044e52) cam4_indicators_pane_g1

0x761f,	// (0x00044e63) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0004d141) cam4_indicators_pane_g

0x7637,	// (0x00044e7b) cam4_indicators_pane_t1

0x7661,	// (0x00044ea5) main_video4_pane_g1_ParamLimits

0x7661,	// (0x00044ea5) main_video4_pane_g1

0x766d,	// (0x00044eb1) main_video4_pane_g2_ParamLimits

0x766d,	// (0x00044eb1) main_video4_pane_g2

0x7679,	// (0x00044ebd) main_video4_pane_g3_ParamLimits

0x7679,	// (0x00044ebd) main_video4_pane_g3

0x7685,	// (0x00044ec9) main_video4_pane_g4_ParamLimits

0x7685,	// (0x00044ec9) main_video4_pane_g4

0x0004,

0xf904,	// (0x0004d148) main_video4_pane_g_ParamLimits

0xf904,	// (0x0004d148) main_video4_pane_g

0x76a7,	// (0x00044eeb) vid4_indicators_pane_ParamLimits

0x76a7,	// (0x00044eeb) vid4_indicators_pane

0x76c6,	// (0x00044f0a) video4_image_uncrop_cif_pane_ParamLimits

0x76c6,	// (0x00044f0a) video4_image_uncrop_cif_pane

0x76d5,	// (0x00044f19) video4_image_uncrop_nhd_pane_ParamLimits

0x76d5,	// (0x00044f19) video4_image_uncrop_nhd_pane

0x7549,	// (0x00044d8d) video4_image_uncrop_vga_pane_ParamLimits

0x7549,	// (0x00044d8d) video4_image_uncrop_vga_pane

0xa7ad,	// (0x00047ff1) bg_tb_trans_pane_cp07

0x76ee,	// (0x00044f32) vid4_indicators_pane_g1

0x7704,	// (0x00044f48) vid4_indicators_pane_g2

0x7718,	// (0x00044f5c) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0004d153) vid4_indicators_pane_g

0x7749,	// (0x00044f8d) vid4_indicators_pane_t1

0x7760,	// (0x00044fa4) cam4_autofocus_pane_g1

0x7768,	// (0x00044fac) cam4_autofocus_pane_g2

0x7770,	// (0x00044fb4) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0004d15e) cam4_autofocus_pane_g

0x7778,	// (0x00044fbc) cam4_autofocus_pane_g3_copy1

0x6f11,	// (0x00044755) video_down_pane_cp_t1

0x6f1f,	// (0x00044763) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0004d0da) video_down_pane_cp_t

0x230e,	// (0x0003fb52) popup_vitu2_window_ParamLimits

0x230e,	// (0x0003fb52) popup_vitu2_window

0x7780,	// (0x00044fc4) aid_size_cell2_itu2_ParamLimits

0x7780,	// (0x00044fc4) aid_size_cell2_itu2

0x77a2,	// (0x00044fe6) aid_size_cell_itu2_ParamLimits

0x77a2,	// (0x00044fe6) aid_size_cell_itu2

0xdaf7,	// (0x0004b33b) bg_popup_window_pane_cp09_ParamLimits

0xdaf7,	// (0x0004b33b) bg_popup_window_pane_cp09

0x77e6,	// (0x0004502a) field_vitu2_entry_pane_ParamLimits

0x77e6,	// (0x0004502a) field_vitu2_entry_pane

0x7806,	// (0x0004504a) grid_vitu2_function_pane_ParamLimits

0x7806,	// (0x0004504a) grid_vitu2_function_pane

0x784a,	// (0x0004508e) grid_vitu2_itu_pane_ParamLimits

0x784a,	// (0x0004508e) grid_vitu2_itu_pane

0x78be,	// (0x00045102) cell_vitu2_itu_pane_ParamLimits

0x78be,	// (0x00045102) cell_vitu2_itu_pane

0x78d5,	// (0x00045119) cell_vitu2_function_pane_ParamLimits

0x78d5,	// (0x00045119) cell_vitu2_function_pane

0xd620,	// (0x0004ae64) bg_popup_call_pane_cp08_ParamLimits

0xd620,	// (0x0004ae64) bg_popup_call_pane_cp08

0xd639,	// (0x0004ae7d) field_vitu2_entry_pane_g1

0xd645,	// (0x0004ae89) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0004d165) field_vitu2_entry_pane_g

0x1106,	// (0x0003e94a) field_vitu2_entry_pane_t1_ParamLimits

0x1106,	// (0x0003e94a) field_vitu2_entry_pane_t1

0x1135,	// (0x0003e979) field_vitu2_entry_pane_t2_ParamLimits

0x1135,	// (0x0003e979) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0004d16c) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0004d16c) field_vitu2_entry_pane_t

0x7919,	// (0x0004515d) bg_button_pane_cp010_ParamLimits

0x7919,	// (0x0004515d) bg_button_pane_cp010

0x7927,	// (0x0004516b) cell_vitu2_itu_pane_g1

0x7945,	// (0x00045189) cell_vitu2_itu_pane_t1_ParamLimits

0x7945,	// (0x00045189) cell_vitu2_itu_pane_t1

0x1152,	// (0x0003e996) cell_vitu2_itu_pane_t2_ParamLimits

0x1152,	// (0x0003e996) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0004d176) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0004d176) cell_vitu2_itu_pane_t

0xa7ad,	// (0x00047ff1) bg_button_pane_cp011

0x7997,	// (0x000451db) cell_vitu2_function_pane_g1

0xa13a,	// (0x0004797e) main_myfav_hc_pane

0x73c4,	// (0x00044c08) popup_image3_note_pane_ParamLimits

0x73c4,	// (0x00044c08) popup_image3_note_pane

0x73d2,	// (0x00044c16) popup_image3_tool_bar_pane_ParamLimits

0x73d2,	// (0x00044c16) popup_image3_tool_bar_pane

0x11c0,	// (0x0003ea04) cell_vitu2_itu_pane_t3_ParamLimits

0x11c0,	// (0x0003ea04) cell_vitu2_itu_pane_t3

0xa13a,	// (0x0004797e) bg_popup_trans_pane

0xd667,	// (0x0004aeab) grid_image3_tool_bar_pane

0xd671,	// (0x0004aeb5) bg_popup_trans_pane_g1

0xad27,	// (0x0004856b) bg_popup_trans_pane_g2

0xd679,	// (0x0004aebd) bg_popup_trans_pane_g3

0xd681,	// (0x0004aec5) bg_popup_trans_pane_g4

0xd689,	// (0x0004aecd) bg_popup_trans_pane_g5

0xd691,	// (0x0004aed5) bg_popup_trans_pane_g6

0xd699,	// (0x0004aedd) bg_popup_trans_pane_g7

0xd6a1,	// (0x0004aee5) bg_popup_trans_pane_g8

0xad07,	// (0x0004854b) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0004d17d) bg_popup_trans_pane_g

0xd6a9,	// (0x0004aeed) cell_image3_tool_bar_pane_ParamLimits

0xd6a9,	// (0x0004aeed) cell_image3_tool_bar_pane

0xcc77,	// (0x0004a4bb) cell_image3_tool_bar_pane_g1

0xa13a,	// (0x0004797e) bg_popup_trans_pane_cp1

0xd6bf,	// (0x0004af03) popup_image3_note_pane_t1

0xd6cd,	// (0x0004af11) popup_image3_note_pane_t2

0xd6db,	// (0x0004af1f) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0004d190) popup_image3_note_pane_t

0xd6eb,	// (0x0004af2f) popup_image3_note_pane_t3_copy1

0x79ab,	// (0x000451ef) bg_myfav_hc_instruction_pane_ParamLimits

0x79ab,	// (0x000451ef) bg_myfav_hc_instruction_pane

0x79c3,	// (0x00045207) cell_myfav_contact_pane_ParamLimits

0x79c3,	// (0x00045207) cell_myfav_contact_pane

0x79dd,	// (0x00045221) cell_myfav_contact_pane_cp1_ParamLimits

0x79dd,	// (0x00045221) cell_myfav_contact_pane_cp1

0x79f5,	// (0x00045239) cell_myfav_contact_pane_cp2_ParamLimits

0x79f5,	// (0x00045239) cell_myfav_contact_pane_cp2

0x7a0d,	// (0x00045251) cell_myfav_contact_pane_cp3_ParamLimits

0x7a0d,	// (0x00045251) cell_myfav_contact_pane_cp3

0x7a24,	// (0x00045268) cell_myfav_contact_pane_cp4_ParamLimits

0x7a24,	// (0x00045268) cell_myfav_contact_pane_cp4

0x7a3a,	// (0x0004527e) cell_myfav_contact_pane_cp5_ParamLimits

0x7a3a,	// (0x0004527e) cell_myfav_contact_pane_cp5

0x7a4e,	// (0x00045292) cell_myfav_contact_pane_cp6_ParamLimits

0x7a4e,	// (0x00045292) cell_myfav_contact_pane_cp6

0x7a62,	// (0x000452a6) cell_myfav_contact_pane_cp7_ParamLimits

0x7a62,	// (0x000452a6) cell_myfav_contact_pane_cp7

0xd6f9,	// (0x0004af3d) listscroll_gen_pane_cp05

0x7a7a,	// (0x000452be) main_myfav_hc_pane_g1_ParamLimits

0x7a7a,	// (0x000452be) main_myfav_hc_pane_g1

0x7a94,	// (0x000452d8) main_myfav_hc_pane_g2_ParamLimits

0x7a94,	// (0x000452d8) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0004d197) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0004d197) main_myfav_hc_pane_g

0x7ac6,	// (0x0004530a) main_myfav_hc_pane_t1_ParamLimits

0x7ac6,	// (0x0004530a) main_myfav_hc_pane_t1

0xd702,	// (0x0004af46) main_myfav_hc_pane_t2_ParamLimits

0xd702,	// (0x0004af46) main_myfav_hc_pane_t2

0xd714,	// (0x0004af58) main_myfav_hc_pane_t3_ParamLimits

0xd714,	// (0x0004af58) main_myfav_hc_pane_t3

0x7add,	// (0x00045321) main_myfav_hc_pane_t4_ParamLimits

0x7add,	// (0x00045321) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0004d19e) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0004d19e) main_myfav_hc_pane_t

0xcc77,	// (0x0004a4bb) bg_myfav_hc_instruction_pane_g1

0xd726,	// (0x0004af6a) cell_myfav_contact_pane_g1_ParamLimits

0xd726,	// (0x0004af6a) cell_myfav_contact_pane_g1

0xd726,	// (0x0004af6a) cell_myfav_contact_pane_g2_ParamLimits

0xd726,	// (0x0004af6a) cell_myfav_contact_pane_g2

0xd732,	// (0x0004af76) cell_myfav_contact_pane_g3_ParamLimits

0xd732,	// (0x0004af76) cell_myfav_contact_pane_g3

0xcf0c,	// (0x0004a750) cell_myfav_contact_pane_g4_ParamLimits

0xcf0c,	// (0x0004a750) cell_myfav_contact_pane_g4

0xd73f,	// (0x0004af83) cell_myfav_contact_pane_g5_ParamLimits

0xd73f,	// (0x0004af83) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0004d1a9) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0004d1a9) cell_myfav_contact_pane_g

0x7aae,	// (0x000452f2) main_myfav_hc_pane_g3_ParamLimits

0x7aae,	// (0x000452f2) main_myfav_hc_pane_g3

0x222a,	// (0x0003fa6e) popup_adpt_find_window

0x7b07,	// (0x0004534b) afind_page_pane_ParamLimits

0x7b07,	// (0x0004534b) afind_page_pane

0x7b14,	// (0x00045358) aid_size_cell_afind_ParamLimits

0x7b14,	// (0x00045358) aid_size_cell_afind

0x7b2e,	// (0x00045372) bg_popup_sub_pane_cp09_ParamLimits

0x7b2e,	// (0x00045372) bg_popup_sub_pane_cp09

0x7b3b,	// (0x0004537f) find_pane_cp01_ParamLimits

0x7b3b,	// (0x0004537f) find_pane_cp01

0xd74b,	// (0x0004af8f) grid_afind_control_pane_ParamLimits

0xd74b,	// (0x0004af8f) grid_afind_control_pane

0x7b48,	// (0x0004538c) grid_afind_pane_ParamLimits

0x7b48,	// (0x0004538c) grid_afind_pane

0x7b64,	// (0x000453a8) cell_afind_pane_ParamLimits

0x7b64,	// (0x000453a8) cell_afind_pane

0xcc77,	// (0x0004a4bb) afind_page_pane_g1

0x7bb0,	// (0x000453f4) afind_page_pane_g2

0x7bb9,	// (0x000453fd) afind_page_pane_g3

0x0002,

0xf970,	// (0x0004d1b4) afind_page_pane_g

0x7bc2,	// (0x00045406) afind_page_pane_t1

0xd75f,	// (0x0004afa3) cell_afind_grid_control_pane_ParamLimits

0xd75f,	// (0x0004afa3) cell_afind_grid_control_pane

0xd553,	// (0x0004ad97) bg_button_pane_cp69_ParamLimits

0xd553,	// (0x0004ad97) bg_button_pane_cp69

0x7be2,	// (0x00045426) cell_afind_pane_g1_ParamLimits

0x7be2,	// (0x00045426) cell_afind_pane_g1

0x7bef,	// (0x00045433) cell_afind_pane_t1_ParamLimits

0x7bef,	// (0x00045433) cell_afind_pane_t1

0xab1c,	// (0x00048360) bg_button_pane_cp72

0xd76e,	// (0x0004afb2) cell_afind_grid_control_pane_g1

0x51d8,	// (0x00042a1c) aid_image_placing_area_ParamLimits

0x51d8,	// (0x00042a1c) aid_image_placing_area

0xd21f,	// (0x0004aa63) field_vitu_entry_pane_g1_ParamLimits

0xd21f,	// (0x0004aa63) field_vitu_entry_pane_g1

0xd22b,	// (0x0004aa6f) field_vitu_entry_pane_g2_ParamLimits

0xd22b,	// (0x0004aa6f) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0004d065) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0004d065) field_vitu_entry_pane_g

0x6d17,	// (0x0004455b) cell_vitu_itu_pane_g1_ParamLimits

0x6d67,	// (0x000445ab) cell_vitu_itu_pane_t3_ParamLimits

0x6d67,	// (0x000445ab) cell_vitu_itu_pane_t3

0xd503,	// (0x0004ad47) mp4_progress_pane_t1_ParamLimits

0xd51c,	// (0x0004ad60) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0004d0fa) mp4_progress_pane_t_ParamLimits

0xd535,	// (0x0004ad79) mup_progress_pane_cp04_ParamLimits

0x7af1,	// (0x00045335) main_myfav_hc_pane_t5_ParamLimits

0x7af1,	// (0x00045335) main_myfav_hc_pane_t5

0xa158,	// (0x0004799c) aid_zoom_text_primary

0x222a,	// (0x0003fa6e) popup_adpt_find_window_ParamLimits

0xa7ad,	// (0x00047ff1) main_cam_set_pane

0x7570,	// (0x00044db4) cam4_zoom_pane_ParamLimits

0x7570,	// (0x00044db4) cam4_zoom_pane

0x7c01,	// (0x00045445) main_cam_set_pane_g1_ParamLimits

0x7c01,	// (0x00045445) main_cam_set_pane_g1

0x7c0f,	// (0x00045453) main_cam_set_pane_g2_ParamLimits

0x7c0f,	// (0x00045453) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0004d1bb) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0004d1bb) main_cam_set_pane_g

0x7c1b,	// (0x0004545f) main_cam_set_pane_t1_ParamLimits

0x7c1b,	// (0x0004545f) main_cam_set_pane_t1

0x7c37,	// (0x0004547b) main_cset_listscroll_pane_ParamLimits

0x7c37,	// (0x0004547b) main_cset_listscroll_pane

0x7c66,	// (0x000454aa) main_cset_slider_pane_ParamLimits

0x7c66,	// (0x000454aa) main_cset_slider_pane

0xd77f,	// (0x0004afc3) main_cset_list_pane_ParamLimits

0xd77f,	// (0x0004afc3) main_cset_list_pane

0xd78f,	// (0x0004afd3) scroll_pane_cp028

0x7c87,	// (0x000454cb) aid_area_touch_slider

0x7ca3,	// (0x000454e7) cset_slider_pane

0x7ccd,	// (0x00045511) main_cset_slider_pane_g1

0x7ce2,	// (0x00045526) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0004d1c0) main_cset_slider_pane_g

0xd7c8,	// (0x0004b00c) main_cset_slider_pane_t1

0x7d9e,	// (0x000455e2) main_cset_slider_pane_t2

0x7db8,	// (0x000455fc) main_cset_slider_pane_t3

0x7dd2,	// (0x00045616) main_cset_slider_pane_t4

0x7dec,	// (0x00045630) main_cset_slider_pane_t5

0x7e06,	// (0x0004564a) main_cset_slider_pane_t6

0x7e1b,	// (0x0004565f) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0004d1e5) main_cset_slider_pane_t

0x7f1f,	// (0x00045763) cset_list_set_pane_ParamLimits

0x7f1f,	// (0x00045763) cset_list_set_pane

0x7f30,	// (0x00045774) aid_position_infowindow_above

0x7f38,	// (0x0004577c) aid_position_infowindow_below

0x120d,	// (0x0003ea51) cset_list_set_pane_g1_ParamLimits

0x120d,	// (0x0003ea51) cset_list_set_pane_g1

0x1219,	// (0x0003ea5d) cset_list_set_pane_g3_ParamLimits

0x1219,	// (0x0003ea5d) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0004d204) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0004d204) cset_list_set_pane_g

0x1228,	// (0x0003ea6c) cset_list_set_pane_t1_ParamLimits

0x1228,	// (0x0003ea6c) cset_list_set_pane_t1

0xa7ad,	// (0x00047ff1) list_highlight_pane_cp021_ParamLimits

0xa7ad,	// (0x00047ff1) list_highlight_pane_cp021

0xb553,	// (0x00048d97) cset_slider_pane_g1

0xb565,	// (0x00048da9) cset_slider_pane_g2

0xb55c,	// (0x00048da0) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0004d209) cset_slider_pane_g

0x7f40,	// (0x00045784) aid_area_touch_cam4_zoom

0x7f48,	// (0x0004578c) cam4_zoom_cont_pane

0x7f50,	// (0x00045794) cam4_zoom_pane_g1

0x7f58,	// (0x0004579c) cam4_zoom_pane_g2

0x7f60,	// (0x000457a4) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0004d210) cam4_zoom_pane_g

0xdf66,	// (0x0004b7aa) cam4_zoom_cont_pane_g1

0xdf6f,	// (0x0004b7b3) cam4_zoom_cont_pane_g2

0xdf78,	// (0x0004b7bc) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0004d217) cam4_zoom_cont_pane_g

0x741b,	// (0x00044c5f) call4_image_pane_ParamLimits

0x741b,	// (0x00044c5f) call4_image_pane

0xd55f,	// (0x0004ada3) call4_windows_conf_pane_ParamLimits

0xd57a,	// (0x0004adbe) popup_call4_audio_in_window_ParamLimits

0xd57a,	// (0x0004adbe) popup_call4_audio_in_window

0xa13a,	// (0x0004797e) bg_popup_call2_act_pane_cp02

0xd5ee,	// (0x0004ae32) call4_list_conf_pane

0xcc77,	// (0x0004a4bb) call4_image_pane_g1

0xcc77,	// (0x0004a4bb) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0004cf2b) call4_image_pane_g

0xd868,	// (0x0004b0ac) list_single_graphic_popup_conf4_pane_ParamLimits

0xd868,	// (0x0004b0ac) list_single_graphic_popup_conf4_pane

0xa13a,	// (0x0004797e) list_highlight_pane_cp022

0xd87d,	// (0x0004b0c1) list_single_graphic_popup_conf4_pane_g1

0xb21e,	// (0x00048a62) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0004d21e) list_single_graphic_popup_conf4_pane_g

0xd885,	// (0x0004b0c9) list_single_graphic_popup_conf4_pane_t1

0x350d,	// (0x00040d51) popup_vtel_slider_window_ParamLimits

0x350d,	// (0x00040d51) popup_vtel_slider_window

0xd541,	// (0x0004ad85) dialer2_ne_pane_t2_ParamLimits

0xd541,	// (0x0004ad85) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0004d0ff) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0004d0ff) dialer2_ne_pane_t

0xa7ad,	// (0x00047ff1) bg_popup_sub_pane_cp010_ParamLimits

0xa7ad,	// (0x00047ff1) bg_popup_sub_pane_cp010

0x7f68,	// (0x000457ac) popup_vtel_slider_window_g1_ParamLimits

0x7f68,	// (0x000457ac) popup_vtel_slider_window_g1

0x7f74,	// (0x000457b8) popup_vtel_slider_window_g2_ParamLimits

0x7f74,	// (0x000457b8) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0004d223) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0004d223) popup_vtel_slider_window_g

0x7fbc,	// (0x00045800) vtel_slider_pane_ParamLimits

0x7fbc,	// (0x00045800) vtel_slider_pane

0x7fcb,	// (0x0004580f) vtel_slider_pane_g1_ParamLimits

0x7fcb,	// (0x0004580f) vtel_slider_pane_g1

0x7fd8,	// (0x0004581c) vtel_slider_pane_g2_ParamLimits

0x7fd8,	// (0x0004581c) vtel_slider_pane_g2

0x7fe5,	// (0x00045829) vtel_slider_pane_g3_ParamLimits

0x7fe5,	// (0x00045829) vtel_slider_pane_g3

0x7fcb,	// (0x0004580f) vtel_slider_pane_g4_ParamLimits

0x7fcb,	// (0x0004580f) vtel_slider_pane_g4

0x7ff2,	// (0x00045836) vtel_slider_pane_g5_ParamLimits

0x7ff2,	// (0x00045836) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0004d22c) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0004d22c) vtel_slider_pane_g

0xa13a,	// (0x0004797e) main_gallery2_pane

0x77c8,	// (0x0004500c) aid_size_row_itut2_dropdow_list_ParamLimits

0x77c8,	// (0x0004500c) aid_size_row_itut2_dropdow_list

0x7828,	// (0x0004506c) grid_vitu2_function_top_pane_ParamLimits

0x7828,	// (0x0004506c) grid_vitu2_function_top_pane

0x787a,	// (0x000450be) popup_vitu2_dropdown_list_window_ParamLimits

0x787a,	// (0x000450be) popup_vitu2_dropdown_list_window

0x789a,	// (0x000450de) popup_vitu2_match_list_window

0x7fff,	// (0x00045843) cell_vitu2_function_top_pane_ParamLimits

0x7fff,	// (0x00045843) cell_vitu2_function_top_pane

0x801f,	// (0x00045863) cell_vitu2_function_top_pane_cp01_ParamLimits

0x801f,	// (0x00045863) cell_vitu2_function_top_pane_cp01

0x803d,	// (0x00045881) cell_vitu2_function_top_wide_pane_ParamLimits

0x803d,	// (0x00045881) cell_vitu2_function_top_wide_pane

0xa7ad,	// (0x00047ff1) bg_button_pane_cp012

0x805b,	// (0x0004589f) cell_vitu2_function_top_pane_g1

0x806a,	// (0x000458ae) bg_button_pane_cp013_ParamLimits

0x806a,	// (0x000458ae) bg_button_pane_cp013

0x8086,	// (0x000458ca) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8086,	// (0x000458ca) cell_vitu2_function_top_wide_pane_g1

0x230e,	// (0x0003fb52) bg_popup_sub_pane_cp20

0x809e,	// (0x000458e2) list_vitu2_match_list_pane

0xd671,	// (0x0004aeb5) bg_popup_sub_pane_cp20_g1

0xd679,	// (0x0004aebd) bg_popup_sub_pane_cp20_g2

0xad27,	// (0x0004856b) bg_popup_sub_pane_cp20_g3

0xd681,	// (0x0004aec5) bg_popup_sub_pane_cp20_g4

0xad07,	// (0x0004854b) bg_popup_sub_pane_cp20_g5

0xd89b,	// (0x0004b0df) bg_popup_sub_pane_cp20_g6

0xd691,	// (0x0004aed5) bg_popup_sub_pane_cp20_g7

0xd699,	// (0x0004aedd) bg_popup_sub_pane_cp20_g8

0xd6a1,	// (0x0004aee5) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0004d237) bg_popup_sub_pane_cp20_g

0xa7c9,	// (0x0004800d) list_vitu2_match_list_item_pane_ParamLimits

0xa7c9,	// (0x0004800d) list_vitu2_match_list_item_pane

0x80b6,	// (0x000458fa) list_vitu2_match_list_item_pane_t1

0xa13a,	// (0x0004797e) bg_popup_sub_pane_cp21

0xb147,	// (0x0004898b) grid_vitu2_dropdown_list_pane

0x80c4,	// (0x00045908) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x80c4,	// (0x00045908) cell_vitu2_dropdown_list_char_pane

0x80e9,	// (0x0004592d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x80e9,	// (0x0004592d) cell_vitu2_dropdown_list_ctrl_pane

0xd8a3,	// (0x0004b0e7) cell_vitu2_dropdown_list_char_pane_g1

0xd8ac,	// (0x0004b0f0) cell_vitu2_dropdown_list_char_pane_g2

0xd8b5,	// (0x0004b0f9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0004d254) cell_vitu2_dropdown_list_char_pane_g

0x8117,	// (0x0004595b) cell_vitu2_dropdown_list_char_pane_t1

0x8125,	// (0x00045969) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8125,	// (0x00045969) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8135,	// (0x00045979) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8135,	// (0x00045979) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8146,	// (0x0004598a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8146,	// (0x0004598a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8156,	// (0x0004599a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8156,	// (0x0004599a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcea7,	// (0x0004a6eb) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcea7,	// (0x0004a6eb) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0004d25b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0004d25b) cell_vitu2_dropdown_list_ctrl_pane_g

0x816f,	// (0x000459b3) aid_size_cell_gallery2_ParamLimits

0x816f,	// (0x000459b3) aid_size_cell_gallery2

0x817d,	// (0x000459c1) grid_gallery2_pane_ParamLimits

0x817d,	// (0x000459c1) grid_gallery2_pane

0x818c,	// (0x000459d0) scroll_pane_cp029_ParamLimits

0x818c,	// (0x000459d0) scroll_pane_cp029

0x8198,	// (0x000459dc) cell_gallery2_pane_ParamLimits

0x8198,	// (0x000459dc) cell_gallery2_pane

0xd8be,	// (0x0004b102) cell_gallery2_pane_g2

0x81c2,	// (0x00045a06) cell_gallery2_pane_g3

0xd8c8,	// (0x0004b10c) cell_gallery2_pane_g4

0xd8d0,	// (0x0004b114) cell_gallery2_pane_g5

0xb41b,	// (0x00048c5f) grid_highlight_pane_cp10

0x789a,	// (0x000450de) popup_vitu2_match_list_window_ParamLimits

0x78ae,	// (0x000450f2) popup_vitu2_query_window_ParamLimits

0x78ae,	// (0x000450f2) popup_vitu2_query_window

0xa13a,	// (0x0004797e) bg_vitu2_candi_button_pane

0xd8a3,	// (0x0004b0e7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8ac,	// (0x0004b0f0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8b5,	// (0x0004b0f9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x128f,	// (0x0003ead3) bg_button_pane_cp015

0x81ca,	// (0x00045a0e) bg_button_pane_cp016

0x81dd,	// (0x00045a21) bg_button_pane_cp017

0xc826,	// (0x0004a06a) bg_popup_sub_pane_cp22

0xd8d8,	// (0x0004b11c) popup_vitu2_query_window_g1

0x12c2,	// (0x0003eb06) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0004d266) popup_vitu2_query_window_g

0x12df,	// (0x0003eb23) popup_vitu2_query_window_t1_ParamLimits

0x12df,	// (0x0003eb23) popup_vitu2_query_window_t1

0x1312,	// (0x0003eb56) popup_vitu2_query_window_t2_ParamLimits

0x1312,	// (0x0003eb56) popup_vitu2_query_window_t2

0x1324,	// (0x0003eb68) popup_vitu2_query_window_t3_ParamLimits

0x1324,	// (0x0003eb68) popup_vitu2_query_window_t3

0x8201,	// (0x00045a45) popup_vitu2_query_window_t4_ParamLimits

0x8201,	// (0x00045a45) popup_vitu2_query_window_t4

0x8224,	// (0x00045a68) popup_vitu2_query_window_t5_ParamLimits

0x8224,	// (0x00045a68) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0004d26d) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0004d26d) popup_vitu2_query_window_t

0xd777,	// (0x0004afbb) main_cset_text_pane

0x7c87,	// (0x000454cb) aid_area_touch_slider_ParamLimits

0x7ca3,	// (0x000454e7) cset_slider_pane_ParamLimits

0x7ccd,	// (0x00045511) main_cset_slider_pane_g1_ParamLimits

0x7ce2,	// (0x00045526) main_cset_slider_pane_g2_ParamLimits

0xd798,	// (0x0004afdc) main_cset_slider_pane_g3_ParamLimits

0xd798,	// (0x0004afdc) main_cset_slider_pane_g3

0x7cf7,	// (0x0004553b) main_cset_slider_pane_g4_ParamLimits

0x7cf7,	// (0x0004553b) main_cset_slider_pane_g4

0x7d06,	// (0x0004554a) main_cset_slider_pane_g5_ParamLimits

0x7d06,	// (0x0004554a) main_cset_slider_pane_g5

0x7d12,	// (0x00045556) main_cset_slider_pane_g6_ParamLimits

0x7d12,	// (0x00045556) main_cset_slider_pane_g6

0xf97c,	// (0x0004d1c0) main_cset_slider_pane_g_ParamLimits

0xd7c8,	// (0x0004b00c) main_cset_slider_pane_t1_ParamLimits

0x7d9e,	// (0x000455e2) main_cset_slider_pane_t2_ParamLimits

0x7db8,	// (0x000455fc) main_cset_slider_pane_t3_ParamLimits

0x7dd2,	// (0x00045616) main_cset_slider_pane_t4_ParamLimits

0x7dec,	// (0x00045630) main_cset_slider_pane_t5_ParamLimits

0x7e06,	// (0x0004564a) main_cset_slider_pane_t6_ParamLimits

0x7e1b,	// (0x0004565f) main_cset_slider_pane_t7_ParamLimits

0x7e45,	// (0x00045689) main_cset_slider_pane_t8_ParamLimits

0x7e45,	// (0x00045689) main_cset_slider_pane_t8

0x7e6d,	// (0x000456b1) main_cset_slider_pane_t9_ParamLimits

0x7e6d,	// (0x000456b1) main_cset_slider_pane_t9

0x7e95,	// (0x000456d9) main_cset_slider_pane_t10_ParamLimits

0x7e95,	// (0x000456d9) main_cset_slider_pane_t10

0x7ebd,	// (0x00045701) main_cset_slider_pane_t11_ParamLimits

0x7ebd,	// (0x00045701) main_cset_slider_pane_t11

0x7ee5,	// (0x00045729) main_cset_slider_pane_t12_ParamLimits

0x7ee5,	// (0x00045729) main_cset_slider_pane_t12

0x7f02,	// (0x00045746) main_cset_slider_pane_t13_ParamLimits

0x7f02,	// (0x00045746) main_cset_slider_pane_t13

0xf9a1,	// (0x0004d1e5) main_cset_slider_pane_t_ParamLimits

0xa13a,	// (0x0004797e) bg_popup_sub_pane_cp011

0xd8e4,	// (0x0004b128) main_cset_text_pane_g1

0xd8ec,	// (0x0004b130) main_cset_text_pane_t1

0xd8fa,	// (0x0004b13e) main_cset_text_pane_t2

0xd908,	// (0x0004b14c) main_cset_text_pane_t3

0xd916,	// (0x0004b15a) main_cset_text_pane_t4

0xd924,	// (0x0004b168) main_cset_text_pane_t5

0xd932,	// (0x0004b176) main_cset_text_pane_t6

0xd940,	// (0x0004b184) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0004d27c) main_cset_text_pane_t

0xa13a,	// (0x0004797e) main_cam4_burst_pane

0xa13a,	// (0x0004797e) main_cam5_pane

0x7bd0,	// (0x00045414) bg_button_pane_cp019

0x7bd9,	// (0x0004541d) bg_button_pane_cp020

0xd7a4,	// (0x0004afe8) main_cset_slider_pane_g7_ParamLimits

0xd7a4,	// (0x0004afe8) main_cset_slider_pane_g7

0xd7b0,	// (0x0004aff4) main_cset_slider_pane_g8_ParamLimits

0xd7b0,	// (0x0004aff4) main_cset_slider_pane_g8

0x7d26,	// (0x0004556a) main_cset_slider_pane_g9_ParamLimits

0x7d26,	// (0x0004556a) main_cset_slider_pane_g9

0x7d32,	// (0x00045576) main_cset_slider_pane_g10_ParamLimits

0x7d32,	// (0x00045576) main_cset_slider_pane_g10

0x7d3e,	// (0x00045582) main_cset_slider_pane_g11_ParamLimits

0x7d3e,	// (0x00045582) main_cset_slider_pane_g11

0x7d4a,	// (0x0004558e) main_cset_slider_pane_g12_ParamLimits

0x7d4a,	// (0x0004558e) main_cset_slider_pane_g12

0x7d56,	// (0x0004559a) main_cset_slider_pane_g13_ParamLimits

0x7d56,	// (0x0004559a) main_cset_slider_pane_g13

0x7d62,	// (0x000455a6) main_cset_slider_pane_g14_ParamLimits

0x7d62,	// (0x000455a6) main_cset_slider_pane_g14

0x7d6e,	// (0x000455b2) main_cset_slider_pane_g15_ParamLimits

0x7d6e,	// (0x000455b2) main_cset_slider_pane_g15

0xd7f6,	// (0x0004b03a) main_cset_slider_pane_t14_ParamLimits

0xd7f6,	// (0x0004b03a) main_cset_slider_pane_t14

0xd82f,	// (0x0004b073) main_cset_slider_pane_t15_ParamLimits

0xd82f,	// (0x0004b073) main_cset_slider_pane_t15

0x8247,	// (0x00045a8b) aid_cam4_burst_size_cell_ParamLimits

0x8247,	// (0x00045a8b) aid_cam4_burst_size_cell

0x8263,	// (0x00045aa7) grid_cam4_burst_pane_ParamLimits

0x8263,	// (0x00045aa7) grid_cam4_burst_pane

0x8295,	// (0x00045ad9) linegrid_cam4_burst_pane_ParamLimits

0x8295,	// (0x00045ad9) linegrid_cam4_burst_pane

0x82b3,	// (0x00045af7) scroll_pane_cp30_ParamLimits

0x82b3,	// (0x00045af7) scroll_pane_cp30

0x82bf,	// (0x00045b03) cell_cam4_burst_pane_ParamLimits

0x82bf,	// (0x00045b03) cell_cam4_burst_pane

0xd94e,	// (0x0004b192) linegrid_cam4_burst_pane_g1_ParamLimits

0xd94e,	// (0x0004b192) linegrid_cam4_burst_pane_g1

0x82ff,	// (0x00045b43) linegrid_cam4_burst_pane_g2_ParamLimits

0x82ff,	// (0x00045b43) linegrid_cam4_burst_pane_g2

0xd95b,	// (0x0004b19f) linegrid_cam4_burst_pane_g3_ParamLimits

0xd95b,	// (0x0004b19f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0004d28b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0004d28b) linegrid_cam4_burst_pane_g

0x8310,	// (0x00045b54) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8310,	// (0x00045b54) linegrid_cam4_burst_pane_g3_copy1

0xd968,	// (0x0004b1ac) linegrid_cam4_burst_pane_g4_ParamLimits

0xd968,	// (0x0004b1ac) linegrid_cam4_burst_pane_g4

0x832a,	// (0x00045b6e) linegrid_cam4_burst_pane_g5_ParamLimits

0x832a,	// (0x00045b6e) linegrid_cam4_burst_pane_g5

0x833b,	// (0x00045b7f) linegrid_cam4_burst_pane_g6_ParamLimits

0x833b,	// (0x00045b7f) linegrid_cam4_burst_pane_g6

0xd975,	// (0x0004b1b9) linegrid_cam4_burst_pane_g7_ParamLimits

0xd975,	// (0x0004b1b9) linegrid_cam4_burst_pane_g7

0x8352,	// (0x00045b96) cell_cam4_burst_pane_g1

0xd98e,	// (0x0004b1d2) main_cam5_pane_t1_ParamLimits

0xd98e,	// (0x0004b1d2) main_cam5_pane_t1

0xd9a0,	// (0x0004b1e4) main_cam5_pane_t2_ParamLimits

0xd9a0,	// (0x0004b1e4) main_cam5_pane_t2

0xd9b2,	// (0x0004b1f6) main_cam5_pane_t3_ParamLimits

0xd9b2,	// (0x0004b1f6) main_cam5_pane_t3

0xd9c4,	// (0x0004b208) main_cam5_pane_t4_ParamLimits

0xd9c4,	// (0x0004b208) main_cam5_pane_t4

0xd9dc,	// (0x0004b220) main_cam5_pane_t5_ParamLimits

0xd9dc,	// (0x0004b220) main_cam5_pane_t5

0xd9f0,	// (0x0004b234) main_cam5_pane_t6_ParamLimits

0xd9f0,	// (0x0004b234) main_cam5_pane_t6

0xda04,	// (0x0004b248) main_cam5_pane_t7_ParamLimits

0xda04,	// (0x0004b248) main_cam5_pane_t7

0xda16,	// (0x0004b25a) main_cam5_pane_t8_ParamLimits

0xda16,	// (0x0004b25a) main_cam5_pane_t8

0xda34,	// (0x0004b278) main_cam5_pane_t9_ParamLimits

0xda34,	// (0x0004b278) main_cam5_pane_t9

0xda46,	// (0x0004b28a) main_cam5_pane_t10_ParamLimits

0xda46,	// (0x0004b28a) main_cam5_pane_t10

0xda58,	// (0x0004b29c) main_cam5_pane_t11_ParamLimits

0xda58,	// (0x0004b29c) main_cam5_pane_t11

0xda6c,	// (0x0004b2b0) main_cam5_pane_t12_ParamLimits

0xda6c,	// (0x0004b2b0) main_cam5_pane_t12

0xda83,	// (0x0004b2c7) main_cam5_pane_t13_ParamLimits

0xda83,	// (0x0004b2c7) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0004d297) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0004d297) main_cam5_pane_t

0x22d7,	// (0x0003fb1b) popup_scut_keymap_window_ParamLimits

0x22d7,	// (0x0003fb1b) popup_scut_keymap_window

0x8365,	// (0x00045ba9) aid_size_cell_brow_shortcut

0xb41b,	// (0x00048c5f) bg_popup_window_pane_cp010

0x8371,	// (0x00045bb5) grid_scut_pane

0x837d,	// (0x00045bc1) cell_scut_pane_ParamLimits

0x837d,	// (0x00045bc1) cell_scut_pane

0x8398,	// (0x00045bdc) cell_scut_pane_g1

0xdaa6,	// (0x0004b2ea) cell_scut_pane_t1

0xdab5,	// (0x0004b2f9) cell_scut_pane_t2

0x83a1,	// (0x00045be5) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0004d2b2) cell_scut_pane_t

0x6391,	// (0x00043bd5) main_mup3_pane_g8_ParamLimits

0x6391,	// (0x00043bd5) main_mup3_pane_g8

0x77d6,	// (0x0004501a) area_vitu2_query_pane_ParamLimits

0x77d6,	// (0x0004501a) area_vitu2_query_pane

0x12a1,	// (0x0003eae5) input_focus_pane_cp08

0xdac4,	// (0x0004b308) area_vitu2_query_pane_g1

0x13a2,	// (0x0003ebe6) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0004d2b9) area_vitu2_query_pane_g

0x83af,	// (0x00045bf3) area_vitu2_query_pane_t1_ParamLimits

0x83af,	// (0x00045bf3) area_vitu2_query_pane_t1

0x83c3,	// (0x00045c07) area_vitu2_query_pane_t2_ParamLimits

0x83c3,	// (0x00045c07) area_vitu2_query_pane_t2

0x13b3,	// (0x0003ebf7) area_vitu2_query_pane_t3_ParamLimits

0x13b3,	// (0x0003ebf7) area_vitu2_query_pane_t3

0x13db,	// (0x0003ec1f) area_vitu2_query_pane_t4_ParamLimits

0x13db,	// (0x0003ec1f) area_vitu2_query_pane_t4

0x1403,	// (0x0003ec47) area_vitu2_query_pane_t5_ParamLimits

0x1403,	// (0x0003ec47) area_vitu2_query_pane_t5

0x142b,	// (0x0003ec6f) area_vitu2_query_pane_t6_ParamLimits

0x142b,	// (0x0003ec6f) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0004d2be) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0004d2be) area_vitu2_query_pane_t

0x83d7,	// (0x00045c1b) bg_button_pane_cp018

0x83e5,	// (0x00045c29) bg_button_pane_cp021

0x1477,	// (0x0003ecbb) bg_button_pane_cp022

0x1488,	// (0x0003eccc) input_focus_pane_cp09

0x4824,	// (0x00042068) aid_size_touch_mv_arrow_left

0x484f,	// (0x00042093) aid_size_touch_mv_arrow_right

0x7d86,	// (0x000455ca) main_cset_slider_pane_g16_ParamLimits

0x7d86,	// (0x000455ca) main_cset_slider_pane_g16

0x7d92,	// (0x000455d6) main_cset_slider_pane_g17_ParamLimits

0x7d92,	// (0x000455d6) main_cset_slider_pane_g17

0x8352,	// (0x00045b96) cell_cam4_burst_pane_g1_ParamLimits

0xa13a,	// (0x0004797e) compa_mode_pane

0x7f80,	// (0x000457c4) popup_vtel_slider_window_g3_ParamLimits

0x7f80,	// (0x000457c4) popup_vtel_slider_window_g3

0x7f94,	// (0x000457d8) popup_vtel_slider_window_g4_ParamLimits

0x7f94,	// (0x000457d8) popup_vtel_slider_window_g4

0x7fa8,	// (0x000457ec) popup_vtel_slider_window_t1_ParamLimits

0x7fa8,	// (0x000457ec) popup_vtel_slider_window_t1

0xa13a,	// (0x0004797e) main_cl_pane

0xc852,	// (0x0004a096) popup_imed_adjust2_window_ParamLimits

0xc826,	// (0x0004a06a) bg_tb_trans_pane_cp05_ParamLimits

0xd154,	// (0x0004a998) popup_imed_adjust2_window_g1_ParamLimits

0xd163,	// (0x0004a9a7) popup_imed_adjust2_window_g2_ParamLimits

0xd163,	// (0x0004a9a7) popup_imed_adjust2_window_g2

0xd16f,	// (0x0004a9b3) popup_imed_adjust2_window_g3_ParamLimits

0xd16f,	// (0x0004a9b3) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0004d029) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0004d029) popup_imed_adjust2_window_g

0xd17b,	// (0x0004a9bf) popup_imed_adjust2_window_t1_ParamLimits

0xd193,	// (0x0004a9d7) slider_imed_adjust_pane_ParamLimits

0xd1a7,	// (0x0004a9eb) slider_imed_adjust_pane_g1_ParamLimits

0xd1b7,	// (0x0004a9fb) slider_imed_adjust_pane_g2_ParamLimits

0xd1c7,	// (0x0004aa0b) slider_imed_adjust_pane_g3_ParamLimits

0xd1d8,	// (0x0004aa1c) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0004d030) slider_imed_adjust_pane_g_ParamLimits

0x7519,	// (0x00044d5d) aid_touch_area_cam4_ParamLimits

0x7519,	// (0x00044d5d) aid_touch_area_cam4

0x7529,	// (0x00044d6d) battery_pane_cp01

0x75b0,	// (0x00044df4) main_camera4_pane_g6_ParamLimits

0x75b0,	// (0x00044df4) main_camera4_pane_g6

0x75ce,	// (0x00044e12) main_camera4_pane_t2_ParamLimits

0x75ce,	// (0x00044e12) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0004d133) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0004d133) main_camera4_pane_t

0x7651,	// (0x00044e95) aid_touch_area_vid4_ParamLimits

0x7651,	// (0x00044e95) aid_touch_area_vid4

0x7691,	// (0x00044ed5) main_video4_pane_g5_ParamLimits

0x7691,	// (0x00044ed5) main_video4_pane_g5

0x76b7,	// (0x00044efb) vid4_progress_pane_ParamLimits

0x76b7,	// (0x00044efb) vid4_progress_pane

0xd7bc,	// (0x0004b000) main_cset_slider_pane_g18_ParamLimits

0xd7bc,	// (0x0004b000) main_cset_slider_pane_g18

0xd982,	// (0x0004b1c6) cell_cam4_burst_pane_g2_ParamLimits

0xd982,	// (0x0004b1c6) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0004d292) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0004d292) cell_cam4_burst_pane_g

0x83f1,	// (0x00045c35) bg_cl_pane_ParamLimits

0x83f1,	// (0x00045c35) bg_cl_pane

0x83fd,	// (0x00045c41) cl_header_pane_ParamLimits

0x83fd,	// (0x00045c41) cl_header_pane

0x8409,	// (0x00045c4d) cl_listscroll_pane_ParamLimits

0x8409,	// (0x00045c4d) cl_listscroll_pane

0xdb05,	// (0x0004b349) bg_cl_pane_g1

0xdb0d,	// (0x0004b351) bg_cl_pane_g2

0xdb15,	// (0x0004b359) bg_cl_pane_g3

0xdb1d,	// (0x0004b361) bg_cl_pane_g4

0xdb25,	// (0x0004b369) bg_cl_pane_g5

0xdb2d,	// (0x0004b371) bg_cl_pane_g6

0xdb35,	// (0x0004b379) bg_cl_pane_g7

0xdb3d,	// (0x0004b381) bg_cl_pane_g8

0xdb45,	// (0x0004b389) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0004d2cd) bg_cl_pane_g

0x8415,	// (0x00045c59) aid_height_cl_leading_ParamLimits

0x8415,	// (0x00045c59) aid_height_cl_leading

0x8421,	// (0x00045c65) aid_height_cl_text_ParamLimits

0x8421,	// (0x00045c65) aid_height_cl_text

0x230e,	// (0x0003fb52) bg_cl_header_pane_ParamLimits

0x230e,	// (0x0003fb52) bg_cl_header_pane

0x8439,	// (0x00045c7d) cl_header_pane_g1_ParamLimits

0x8439,	// (0x00045c7d) cl_header_pane_g1

0x8446,	// (0x00045c8a) cl_header_pane_t1_ParamLimits

0x8446,	// (0x00045c8a) cl_header_pane_t1

0xdb4d,	// (0x0004b391) cl_list_pane

0xd78f,	// (0x0004afd3) hc_scroll_pane_cp01

0xad07,	// (0x0004854b) bg_cl_header_pane_g1

0xd671,	// (0x0004aeb5) bg_cl_header_pane_g2

0xad27,	// (0x0004856b) bg_cl_header_pane_g3

0xd681,	// (0x0004aec5) bg_cl_header_pane_g4

0xd679,	// (0x0004aebd) bg_cl_header_pane_g5

0xd89b,	// (0x0004b0df) bg_cl_header_pane_g6

0xd699,	// (0x0004aedd) bg_cl_header_pane_g7

0xd6a1,	// (0x0004aee5) bg_cl_header_pane_g8

0xd691,	// (0x0004aed5) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0004d2e0) bg_cl_header_pane_g

0x8458,	// (0x00045c9c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8458,	// (0x00045c9c) hc_cl_list_double_graphic_heading_pane

0x8468,	// (0x00045cac) hc_cl_list_single_graphic_pane_ParamLimits

0x8468,	// (0x00045cac) hc_cl_list_single_graphic_pane

0x847a,	// (0x00045cbe) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x847a,	// (0x00045cbe) hc_cl_list_single_graphic_pane_g1

0x8486,	// (0x00045cca) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8486,	// (0x00045cca) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0004d2f3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0004d2f3) hc_cl_list_single_graphic_pane_g

0x849a,	// (0x00045cde) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x849a,	// (0x00045cde) hc_cl_list_single_graphic_pane_t1

0x847a,	// (0x00045cbe) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x847a,	// (0x00045cbe) hc_cl_list_double_graphic_heading_pane_g1

0x84af,	// (0x00045cf3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x84af,	// (0x00045cf3) hc_cl_list_double_graphic_heading_pane_g2

0x84c3,	// (0x00045d07) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x84c3,	// (0x00045d07) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0004d2f8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0004d2f8) hc_cl_list_double_graphic_heading_pane_g

0x84d7,	// (0x00045d1b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x84d7,	// (0x00045d1b) hc_cl_list_double_graphic_heading_pane_t1

0x84ec,	// (0x00045d30) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x84ec,	// (0x00045d30) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0004d2ff) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0004d2ff) hc_cl_list_double_graphic_heading_pane_t

0x8509,	// (0x00045d4d) vid4_progress_pane_g1

0x851b,	// (0x00045d5f) vid4_progress_pane_g2

0x4f23,	// (0x00042767) vid4_progress_pane_g3

0x852d,	// (0x00045d71) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0004d304) vid4_progress_pane_g

0x854b,	// (0x00045d8f) vid4_progress_pane_t1

0x8560,	// (0x00045da4) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0004d30f) vid4_progress_pane_t

0x858b,	// (0x00045dcf) wait_bar_pane_cp07

0xca64,	// (0x0004a2a8) blid_firmament_pane_ParamLimits

0xcaa7,	// (0x0004a2eb) popup_blid_sat_info2_window_g1

0xcacb,	// (0x0004a30f) popup_blid_sat_info2_window_t3

0xcad9,	// (0x0004a31d) popup_blid_sat_info2_window_t4

0xcae7,	// (0x0004a32b) popup_blid_sat_info2_window_t5

0xcaf5,	// (0x0004a339) popup_blid_sat_info2_window_t6

0xcb05,	// (0x0004a349) popup_blid_sat_info2_window_t7

0xcb13,	// (0x0004a357) popup_blid_sat_info2_window_t8

0xcb21,	// (0x0004a365) popup_blid_sat_info2_window_t9

0xcb2f,	// (0x0004a373) popup_blid_sat_info2_window_t10

0xcbf7,	// (0x0004a43b) aid_firma_cardinal_ParamLimits

0xcc0b,	// (0x0004a44f) blid_firmament_pane_t1_ParamLimits

0xcc22,	// (0x0004a466) blid_firmament_pane_t2_ParamLimits

0xcc39,	// (0x0004a47d) blid_firmament_pane_t3_ParamLimits

0xcc50,	// (0x0004a494) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0004cf22) blid_firmament_pane_t_ParamLimits

0xcc67,	// (0x0004a4ab) blid_sat_info_pane_ParamLimits

0xa7ad,	// (0x00047ff1) main_cam_set_pane_ParamLimits

0x6b35,	// (0x00044379) aid_size_cell_colour_35_ParamLimits

0x6b4f,	// (0x00044393) aid_size_cell_colour_112_ParamLimits

0x6b66,	// (0x000443aa) aid_size_cell_effect_ParamLimits

0xa7ad,	// (0x00047ff1) bg_tb_trans_pane_cp02_ParamLimits

0xb3f1,	// (0x00048c35) heading_imed_pane_ParamLimits

0x6b80,	// (0x000443c4) listscroll_imed_pane_ParamLimits

0xbe48,	// (0x0004968c) popup_call2_audio_first_window_g5_ParamLimits

0xbe48,	// (0x0004968c) popup_call2_audio_first_window_g5

0x7292,	// (0x00044ad6) aid_size_touch_image3_arrow_left_ParamLimits

0x7292,	// (0x00044ad6) aid_size_touch_image3_arrow_left

0x72a8,	// (0x00044aec) aid_size_touch_image3_arrow_right_ParamLimits

0x72a8,	// (0x00044aec) aid_size_touch_image3_arrow_right

0x8576,	// (0x00045dba) vid4_progress_pane_t3

0x6e2e,	// (0x00044672) main_hwr_training_symbol_option_pane_ParamLimits

0x6e2e,	// (0x00044672) main_hwr_training_symbol_option_pane

0xd443,	// (0x0004ac87) popup_hwr_training_preview_window_ParamLimits

0xd443,	// (0x0004ac87) popup_hwr_training_preview_window

0x6e8f,	// (0x000446d3) hwr_training_navi_pane_g5_ParamLimits

0x6e8f,	// (0x000446d3) hwr_training_navi_pane_g5

0xd65f,	// (0x0004aea3) popup_char_count_window

0x230e,	// (0x0003fb52) bg_popup_sub_pane_cp20_ParamLimits

0x809e,	// (0x000458e2) list_vitu2_match_list_pane_ParamLimits

0x80aa,	// (0x000458ee) vitu2_page_scroll_pane_ParamLimits

0x80aa,	// (0x000458ee) vitu2_page_scroll_pane

0xdb56,	// (0x0004b39a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb56,	// (0x0004b39a) list_single_hwr_training_symbol_option_pane

0xdb69,	// (0x0004b3ad) list_single_hwr_training_symbol_option_pane_g1

0xdb71,	// (0x0004b3b5) list_single_hwr_training_symbol_option_pane_t1

0xdb7f,	// (0x0004b3c3) bg_button_pane_cp023

0xdb88,	// (0x0004b3cc) bg_button_pane_cp024

0x85a8,	// (0x00045dec) vitu2_page_scroll_pane_g1

0x85b0,	// (0x00045df4) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0004d316) vitu2_page_scroll_pane_g

0x85ba,	// (0x00045dfe) vitu2_page_scroll_pane_t1

0xc9c4,	// (0x0004a208) popup_char_count_window_g1

0xdbbb,	// (0x0004b3ff) popup_char_count_window_g2

0xdbc4,	// (0x0004b408) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0004d31b) popup_char_count_window_g

0xdbcd,	// (0x0004b411) popup_char_count_window_t1

0xa13a,	// (0x0004797e) main_vded2_pane

0xd140,	// (0x0004a984) aid_size_cell_imed_line

0xd14a,	// (0x0004a98e) grid_imed_line_width_pane

0x772b,	// (0x00044f6f) vid4_indicators_pane_g4

0xdbdb,	// (0x0004b41f) cell_imed_line_width_pane_ParamLimits

0xdbdb,	// (0x0004b41f) cell_imed_line_width_pane

0xdbf1,	// (0x0004b435) cell_imed_line_width_pane_g1

0xd59c,	// (0x0004ade0) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0004d322) cell_imed_line_width_pane_g

0x85c9,	// (0x00045e0d) main_vded2_pane_g1_ParamLimits

0x85c9,	// (0x00045e0d) main_vded2_pane_g1

0x85d8,	// (0x00045e1c) main_vded2_pane_g2_ParamLimits

0x85d8,	// (0x00045e1c) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0004d327) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0004d327) main_vded2_pane_g

0x85e6,	// (0x00045e2a) vded2_slider_pane_ParamLimits

0x85e6,	// (0x00045e2a) vded2_slider_pane

0x85f3,	// (0x00045e37) aid_size_touch_vded2_end

0x85fd,	// (0x00045e41) aid_size_touch_vded2_playhead

0xdbfa,	// (0x0004b43e) aid_size_touch_vded2_start

0xdc02,	// (0x0004b446) vded2_slider_bg_pane

0xdc0b,	// (0x0004b44f) vded2_slider_pane_g1

0xdc14,	// (0x0004b458) vded2_slider_pane_g2

0x8605,	// (0x00045e49) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0004d32c) vded2_slider_pane_g

0xdadc,	// (0x0004b320) vded2_slider_bg_pane_g1

0xdae5,	// (0x0004b329) vded2_slider_bg_pane_g2

0xdaee,	// (0x0004b332) vded2_slider_bg_pane_g3

0x0002,

0xf7ae,	// (0x0004cff2) vded2_slider_bg_pane_g

0x4f3b,	// (0x0004277f) aid_postcard_touch_down_pane_ParamLimits

0x4f3b,	// (0x0004277f) aid_postcard_touch_down_pane

0x4f4b,	// (0x0004278f) aid_postcard_touch_up_pane_ParamLimits

0x4f4b,	// (0x0004278f) aid_postcard_touch_up_pane

0xa13a,	// (0x0004797e) main_blid2_pane

0xc834,	// (0x0004a078) popup_blid2_search_window

0xa13a,	// (0x0004797e) blid2_gps_pane

0xa13a,	// (0x0004797e) blid2_navig_pane

0xa13a,	// (0x0004797e) blid2_search_pane

0xa13a,	// (0x0004797e) blid2_tripm_pane

0x860e,	// (0x00045e52) blid2_search_pane_g1_ParamLimits

0x860e,	// (0x00045e52) blid2_search_pane_g1

0x861a,	// (0x00045e5e) blid2_search_pane_t1_ParamLimits

0x861a,	// (0x00045e5e) blid2_search_pane_t1

0x862c,	// (0x00045e70) aid_size_cell_blid2_gps_ParamLimits

0x862c,	// (0x00045e70) aid_size_cell_blid2_gps

0x863c,	// (0x00045e80) blid2_gps_pane_g1_ParamLimits

0x863c,	// (0x00045e80) blid2_gps_pane_g1

0x8648,	// (0x00045e8c) grid_blid2_satellite_pane_ParamLimits

0x8648,	// (0x00045e8c) grid_blid2_satellite_pane

0x8656,	// (0x00045e9a) blid2_navig_pane_g1_ParamLimits

0x8656,	// (0x00045e9a) blid2_navig_pane_g1

0x8662,	// (0x00045ea6) blid2_navig_pane_t1_ParamLimits

0x8662,	// (0x00045ea6) blid2_navig_pane_t1

0x8674,	// (0x00045eb8) blid2_navig_pane_t2_ParamLimits

0x8674,	// (0x00045eb8) blid2_navig_pane_t2

0x0001,

0xfaef,	// (0x0004d333) blid2_navig_pane_t_ParamLimits

0xfaef,	// (0x0004d333) blid2_navig_pane_t

0x8686,	// (0x00045eca) blid2_navig_ring_pane_ParamLimits

0x8686,	// (0x00045eca) blid2_navig_ring_pane

0x8696,	// (0x00045eda) blid2_speed_pane_ParamLimits

0x8696,	// (0x00045eda) blid2_speed_pane

0x86a2,	// (0x00045ee6) blid2_tripm_pane_g1_ParamLimits

0x86a2,	// (0x00045ee6) blid2_tripm_pane_g1

0x86b2,	// (0x00045ef6) blid2_tripm_pane_g2_ParamLimits

0x86b2,	// (0x00045ef6) blid2_tripm_pane_g2

0x86be,	// (0x00045f02) blid2_tripm_pane_g3_ParamLimits

0x86be,	// (0x00045f02) blid2_tripm_pane_g3

0x86ca,	// (0x00045f0e) blid2_tripm_pane_g4_ParamLimits

0x86ca,	// (0x00045f0e) blid2_tripm_pane_g4

0x86d6,	// (0x00045f1a) blid2_tripm_pane_g5_ParamLimits

0x86d6,	// (0x00045f1a) blid2_tripm_pane_g5

0x0005,

0xfaf4,	// (0x0004d338) blid2_tripm_pane_g_ParamLimits

0xfaf4,	// (0x0004d338) blid2_tripm_pane_g

0x86f2,	// (0x00045f36) blid2_tripm_pane_t1_ParamLimits

0x86f2,	// (0x00045f36) blid2_tripm_pane_t1

0x8704,	// (0x00045f48) blid2_tripm_pane_t2_ParamLimits

0x8704,	// (0x00045f48) blid2_tripm_pane_t2

0x8716,	// (0x00045f5a) blid2_tripm_pane_t3_ParamLimits

0x8716,	// (0x00045f5a) blid2_tripm_pane_t3

0x0003,

0xfb01,	// (0x0004d345) blid2_tripm_pane_t_ParamLimits

0xfb01,	// (0x0004d345) blid2_tripm_pane_t

0x8748,	// (0x00045f8c) cell_blid2_satellite_pane_ParamLimits

0x8748,	// (0x00045f8c) cell_blid2_satellite_pane

0x8766,	// (0x00045faa) cell_blid2_satellite_pane_g1

0xdc1c,	// (0x0004b460) cell_blid2_satellite_pane_t1

0xcc77,	// (0x0004a4bb) blid2_speed_pane_g1

0xdc2a,	// (0x0004b46e) blid2_speed_pane_t1

0xdc38,	// (0x0004b47c) blid2_speed_pane_t2

0x0001,

0xfb0a,	// (0x0004d34e) blid2_speed_pane_t

0xcc77,	// (0x0004a4bb) blid2_navig_ring_pane_g1

0x876f,	// (0x00045fb3) blid2_navig_ring_pane_g2

0x8777,	// (0x00045fbb) blid2_navig_ring_pane_g3

0x877f,	// (0x00045fc3) blid2_navig_ring_pane_g4

0x8787,	// (0x00045fcb) blid2_navig_ring_pane_g5

0x0004,

0xfb0f,	// (0x0004d353) blid2_navig_ring_pane_g

0xa13a,	// (0x0004797e) bg_popup_window_pane_cp011

0xdc46,	// (0x0004b48a) popup_blid2_search_window_g1

0xdc4e,	// (0x0004b492) popup_blid2_search_window_t1

0xdc5c,	// (0x0004b4a0) popup_blid2_search_window_t2

0x0001,

0xfb1a,	// (0x0004d35e) popup_blid2_search_window_t

0xac16,	// (0x0004845a) main_browser_pane_g1

0xa8f4,	// (0x00048138) main_browser_pane_ParamLimits

0xa7ad,	// (0x00047ff1) bg_button_pane_cp011_ParamLimits

0x7997,	// (0x000451db) cell_vitu2_function_pane_g1_ParamLimits

0xc826,	// (0x0004a06a) bg_popup_sub_pane_cp22_ParamLimits

0x12a1,	// (0x0003eae5) input_focus_pane_cp08_ParamLimits

0x81f0,	// (0x00045a34) popup_vitu2_query_button_pane_ParamLimits

0x81f0,	// (0x00045a34) popup_vitu2_query_button_pane

0x12b8,	// (0x0003eafc) popup_vitu2_query_input_button_pane

0xd8d8,	// (0x0004b11c) popup_vitu2_query_window_g1_ParamLimits

0x12c2,	// (0x0003eb06) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0004d266) popup_vitu2_query_window_g_ParamLimits

0xa13a,	// (0x0004797e) bg_button_pane_cp026

0x878f,	// (0x00045fd3) popup_vitu2_query_input_button_pane_g1

0xa13a,	// (0x0004797e) bg_button_pane_cp025

0xdc6a,	// (0x0004b4ae) popup_vitu2_query_button_pane_t1

0x60dc,	// (0x00043920) main_mp3_pane_t6

0x60ec,	// (0x00043930) popup_slider_window_cp01

0x7606,	// (0x00044e4a) cam4_battery_pane

0x76e4,	// (0x00044f28) cam4_battery_pane_cp02

0x8501,	// (0x00045d45) cam4_battery_pane_cp01

0x8501,	// (0x00045d45) cam4_battery_pane_cp03

0xcc77,	// (0x0004a4bb) cam4_battery_pane_g1

0xd5a4,	// (0x0004ade8) cam4_battery_pane_g2

0x0001,

0xfb1f,	// (0x0004d363) cam4_battery_pane_g

0xcb3d,	// (0x0004a381) popup_blid_sat_info2_window_t11

0x4824,	// (0x00042068) aid_size_touch_mv_arrow_left_ParamLimits

0x484f,	// (0x00042093) aid_size_touch_mv_arrow_right_ParamLimits

0xb34c,	// (0x00048b90) navi_pane_g1_ParamLimits

0x488e,	// (0x000420d2) navi_pane_g2_ParamLimits

0x48bc,	// (0x00042100) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0004cc34) navi_pane_g_ParamLimits

0x4916,	// (0x0004215a) navi_pane_mv_t1_ParamLimits

0x6b8c,	// (0x000443d0) grid_imed_effect_pane_ParamLimits

0x33d5,	// (0x00040c19) aid_placing_vt_slider_lsc

0xab61,	// (0x000483a5) aid_placing_vt_slider_prt

0xa7ad,	// (0x00047ff1) bg_tb_trans_pane_cp01_ParamLimits

0xcdc7,	// (0x0004a60b) popup_image_details_window_g1_ParamLimits

0xcdda,	// (0x0004a61e) popup_image_details_window_g2_ParamLimits

0xcdef,	// (0x0004a633) popup_image_details_window_g3_ParamLimits

0xcdef,	// (0x0004a633) popup_image_details_window_g3

0xf723,	// (0x0004cf67) popup_image_details_window_g_ParamLimits

0xce03,	// (0x0004a647) popup_image_details_window_t1_ParamLimits

0xce15,	// (0x0004a659) popup_image_details_window_t2_ParamLimits

0xce2e,	// (0x0004a672) popup_image_details_window_t3_ParamLimits

0xce42,	// (0x0004a686) popup_image_details_window_t4_ParamLimits

0xce5d,	// (0x0004a6a1) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0004cf6e) popup_image_details_window_t_ParamLimits

0x842d,	// (0x00045c71) cl_header_name_pane_ParamLimits

0x842d,	// (0x00045c71) cl_header_name_pane

0x8797,	// (0x00045fdb) cl_header_name_pane_t1_ParamLimits

0x8797,	// (0x00045fdb) cl_header_name_pane_t1

0x87ae,	// (0x00045ff2) cl_header_name_pane_t2_ParamLimits

0x87ae,	// (0x00045ff2) cl_header_name_pane_t2

0x87d8,	// (0x0004601c) cl_header_name_pane_t3_ParamLimits

0x87d8,	// (0x0004601c) cl_header_name_pane_t3

0x0002,

0xfb24,	// (0x0004d368) cl_header_name_pane_t_ParamLimits

0xfb24,	// (0x0004d368) cl_header_name_pane_t

0x48e7,	// (0x0004212b) navi_pane_mv_g2_ParamLimits

0xd639,	// (0x0004ae7d) field_vitu2_entry_pane_g1_ParamLimits

0xd645,	// (0x0004ae89) field_vitu2_entry_pane_g2_ParamLimits

0xd651,	// (0x0004ae95) field_vitu2_entry_pane_g3_ParamLimits

0xd651,	// (0x0004ae95) field_vitu2_entry_pane_g3

0xf921,	// (0x0004d165) field_vitu2_entry_pane_g_ParamLimits

0x7927,	// (0x0004516b) cell_vitu2_itu_pane_g1_ParamLimits

0x7937,	// (0x0004517b) cell_vitu2_itu_pane_g2_ParamLimits

0x7937,	// (0x0004517b) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0004d171) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0004d171) cell_vitu2_itu_pane_g

0xa7ad,	// (0x00047ff1) bg_vkb2_func_pane_cp05_ParamLimits

0xa7ad,	// (0x00047ff1) bg_vkb2_func_pane_cp05

0xa7ad,	// (0x00047ff1) bg_vkb2_func_pane_cp03

0xa7ad,	// (0x00047ff1) bg_vkb2_func_pane_cp04

0xa7ad,	// (0x00047ff1) bg_vkb2_func_pane_cp10_ParamLimits

0xa7ad,	// (0x00047ff1) bg_vkb2_func_pane_cp10

0x1477,	// (0x0003ecbb) bg_vkb2_func_pane_cp08

0x83d7,	// (0x00045c1b) bg_vkb2_func_pane_cp06

0x83e5,	// (0x00045c29) bg_vkb2_func_pane_cp07

0xdb91,	// (0x0004b3d5) bg_vkb2_func_pane_cp11_ParamLimits

0xdb91,	// (0x0004b3d5) bg_vkb2_func_pane_cp11

0xdba6,	// (0x0004b3ea) bg_vkb2_func_pane_cp12_ParamLimits

0xdba6,	// (0x0004b3ea) bg_vkb2_func_pane_cp12

0xa13a,	// (0x0004797e) bg_vkb2_func_pane_cp09

0xd671,	// (0x0004aeb5) bg_vkb2_func_pane_g1

0xad27,	// (0x0004856b) bg_vkb2_func_pane_g2

0xd679,	// (0x0004aebd) bg_vkb2_func_pane_g3

0xd681,	// (0x0004aec5) bg_vkb2_func_pane_g4

0xd89b,	// (0x0004b0df) bg_vkb2_func_pane_g5

0xd699,	// (0x0004aedd) bg_vkb2_func_pane_g6

0xd6a1,	// (0x0004aee5) bg_vkb2_func_pane_g7

0xd691,	// (0x0004aed5) bg_vkb2_func_pane_g8

0xad07,	// (0x0004854b) bg_vkb2_func_pane_g9

0x0008,

0xfb2b,	// (0x0004d36f) bg_vkb2_func_pane_g

0x86e4,	// (0x00045f28) blid2_tripm_pane_g6_ParamLimits

0x86e4,	// (0x00045f28) blid2_tripm_pane_g6

0xd4fb,	// (0x0004ad3f) mp4_progress_pane_g1

0x873c,	// (0x00045f80) blid2_tripm_values_pane_ParamLimits

0x873c,	// (0x00045f80) blid2_tripm_values_pane

0x87fd,	// (0x00046041) blid2_tripm_values_pane_t1

0x880b,	// (0x0004604f) blid2_tripm_values_pane_t2

0x8819,	// (0x0004605d) blid2_tripm_values_pane_t3

0x8827,	// (0x0004606b) blid2_tripm_values_pane_t4

0x8835,	// (0x00046079) blid2_tripm_values_pane_t5

0x8843,	// (0x00046087) blid2_tripm_values_pane_t6

0x8851,	// (0x00046095) blid2_tripm_values_pane_t7

0x885f,	// (0x000460a3) blid2_tripm_values_pane_t8

0x886d,	// (0x000460b1) blid2_tripm_values_pane_t9

0x0008,

0xfb3e,	// (0x0004d382) blid2_tripm_values_pane_t

0x3413,	// (0x00040c57) call_video_pane_t1_ParamLimits

0x3430,	// (0x00040c74) call_video_pane_t2_ParamLimits

0xf279,	// (0x0004cabd) call_video_pane_t_ParamLimits

0x101d,	// (0x0003e861) msg_header_pane_g1_ParamLimits

0xb58f,	// (0x00048dd3) msg_header_pane_g2_ParamLimits

0xb58f,	// (0x00048dd3) msg_header_pane_g2

0x0001,

0xf493,	// (0x0004ccd7) msg_header_pane_g_ParamLimits

0xf493,	// (0x0004ccd7) msg_header_pane_g

0xa8f4,	// (0x00048138) main_clock2_pane_ParamLimits

0x691b,	// (0x0004415f) grid_clock2_toolbar_pane_ParamLimits

0x691b,	// (0x0004415f) grid_clock2_toolbar_pane

0x691b,	// (0x0004415f) listscroll_clock2_pane_ParamLimits

0x691b,	// (0x0004415f) listscroll_clock2_pane

0x69c3,	// (0x00044207) main_clock2_pane_t3_ParamLimits

0x69c3,	// (0x00044207) main_clock2_pane_t3

0x69d5,	// (0x00044219) main_clock2_pane_t4_ParamLimits

0x69d5,	// (0x00044219) main_clock2_pane_t4

0xdc78,	// (0x0004b4bc) cell_clock2_toolbar_pane

0xdc80,	// (0x0004b4c4) cell_clock2_toolbar_pane_cp01

0xdc80,	// (0x0004b4c4) cell_clock2_toolbar_pane_cp02

0xdc88,	// (0x0004b4cc) cell_clock2_toolbar_pane_cp03

0xdc90,	// (0x0004b4d4) list_clock2_pane

0xb2b2,	// (0x00048af6) scroll_pane_cp10

0xdc98,	// (0x0004b4dc) list_single_clock2_pane_ParamLimits

0xdc98,	// (0x0004b4dc) list_single_clock2_pane

0xb41b,	// (0x00048c5f) list_highlight_pane_cp08

0xdca5,	// (0x0004b4e9) list_single_clock2_pane_t1

0xdcb3,	// (0x0004b4f7) list_single_clock2_pane_t2

0x0001,

0xfb51,	// (0x0004d395) list_single_clock2_pane_t

0xa13a,	// (0x0004797e) bg_button_pane_cp10

0xdcc1,	// (0x0004b505) cell_clock2_toolbar_pane_g1

0x4e9d,	// (0x000426e1) aid_main_viewer_pane_g1_ParamLimits

0x4e9d,	// (0x000426e1) aid_main_viewer_pane_g1

0x4ea9,	// (0x000426ed) aid_main_viewer_pane_g2_ParamLimits

0x4ea9,	// (0x000426ed) aid_main_viewer_pane_g2

0x4eb5,	// (0x000426f9) aid_main_viewer_pane_g3_ParamLimits

0x4eb5,	// (0x000426f9) aid_main_viewer_pane_g3

0x4ec6,	// (0x0004270a) aid_main_viewer_pane_g4_ParamLimits

0x4ec6,	// (0x0004270a) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0004cce8) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0004cce8) aid_main_viewer_pane_g

0x5650,	// (0x00042e94) main_calc_pane_ParamLimits

0x565d,	// (0x00042ea1) main_dialer2_pane_ParamLimits

0xa13a,	// (0x0004797e) main_cam6_pane

0xa13a,	// (0x0004797e) main_vid6_pane

0x6927,	// (0x0004416b) listscroll_gen_pane_cp06_ParamLimits

0x6927,	// (0x0004416b) listscroll_gen_pane_cp06

0x69e7,	// (0x0004422b) main_clock2_pane_t5_ParamLimits

0x69e7,	// (0x0004422b) main_clock2_pane_t5

0x6a36,	// (0x0004427a) aid_call2_pane_cp10_ParamLimits

0x6a48,	// (0x0004428c) aid_call_pane_cp10_ParamLimits

0xb321,	// (0x00048b65) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb321,	// (0x00048b65) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6a5a,	// (0x0004429e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6a5a,	// (0x0004429e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb321,	// (0x00048b65) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0004d01e) popup_clock_analogue_window_cp10_g_ParamLimits

0x6a6c,	// (0x000442b0) popup_clock_analogue_window_cp10_t1_ParamLimits

0x723f,	// (0x00044a83) cell_dialer2_keypad_pane_g2_ParamLimits

0x723f,	// (0x00044a83) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0004d104) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0004d104) cell_dialer2_keypad_pane_g

0x725b,	// (0x00044a9f) cell_dialer2_keypad_pane_t1

0x7c74,	// (0x000454b8) main_cset_text2_pane_ParamLimits

0x7c74,	// (0x000454b8) main_cset_text2_pane

0xdac4,	// (0x0004b308) area_vitu2_query_pane_g1_ParamLimits

0x13a2,	// (0x0003ebe6) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0004d2b9) area_vitu2_query_pane_g_ParamLimits

0x1453,	// (0x0003ec97) area_vitu2_query_pane_t7_ParamLimits

0x1453,	// (0x0003ec97) area_vitu2_query_pane_t7

0x83d7,	// (0x00045c1b) bg_button_pane_cp018_ParamLimits

0x83e5,	// (0x00045c29) bg_button_pane_cp021_ParamLimits

0x1477,	// (0x0003ecbb) bg_button_pane_cp022_ParamLimits

0x1477,	// (0x0003ecbb) bg_vkb2_func_pane_cp08_ParamLimits

0x83d7,	// (0x00045c1b) bg_vkb2_func_pane_cp06_ParamLimits

0x83e5,	// (0x00045c29) bg_vkb2_func_pane_cp07_ParamLimits

0x1488,	// (0x0003eccc) input_focus_pane_cp09_ParamLimits

0x887b,	// (0x000460bf) cam6_autofocus_pane_ParamLimits

0x887b,	// (0x000460bf) cam6_autofocus_pane

0x889d,	// (0x000460e1) cam6_image_uncrop_pane_ParamLimits

0x889d,	// (0x000460e1) cam6_image_uncrop_pane

0x88ca,	// (0x0004610e) cam6_indi_pane_ParamLimits

0x88ca,	// (0x0004610e) cam6_indi_pane

0x88e4,	// (0x00046128) cam6_mode_pane_ParamLimits

0x88e4,	// (0x00046128) cam6_mode_pane

0x88f8,	// (0x0004613c) cam6_timer_pane_ParamLimits

0x88f8,	// (0x0004613c) cam6_timer_pane

0x8904,	// (0x00046148) cam6_zoom_pane_ParamLimits

0x8904,	// (0x00046148) cam6_zoom_pane

0x8920,	// (0x00046164) cam6_mode_pane_g1_ParamLimits

0x8920,	// (0x00046164) cam6_mode_pane_g1

0x892c,	// (0x00046170) cam6_mode_pane_g2_ParamLimits

0x892c,	// (0x00046170) cam6_mode_pane_g2

0x8938,	// (0x0004617c) cam6_mode_pane_g3_ParamLimits

0x8938,	// (0x0004617c) cam6_mode_pane_g3

0x8944,	// (0x00046188) cam6_mode_pane_g4_ParamLimits

0x8944,	// (0x00046188) cam6_mode_pane_g4

0x0003,

0xfb56,	// (0x0004d39a) cam6_mode_pane_g_ParamLimits

0xfb56,	// (0x0004d39a) cam6_mode_pane_g

0xdaf7,	// (0x0004b33b) bg_tb_trans_pane_cp08_ParamLimits

0xdaf7,	// (0x0004b33b) bg_tb_trans_pane_cp08

0xdcc9,	// (0x0004b50d) cam6_battery_pane_ParamLimits

0xdcc9,	// (0x0004b50d) cam6_battery_pane

0xdcdf,	// (0x0004b523) cam6_indi_pane_g1_ParamLimits

0xdcdf,	// (0x0004b523) cam6_indi_pane_g1

0xdcf1,	// (0x0004b535) cam6_indi_pane_g2_ParamLimits

0xdcf1,	// (0x0004b535) cam6_indi_pane_g2

0xdd03,	// (0x0004b547) cam6_indi_pane_g3_ParamLimits

0xdd03,	// (0x0004b547) cam6_indi_pane_g3

0x0002,

0xfb5f,	// (0x0004d3a3) cam6_indi_pane_g_ParamLimits

0xfb5f,	// (0x0004d3a3) cam6_indi_pane_g

0xdd15,	// (0x0004b559) cam6_indi_pane_t1_ParamLimits

0xdd15,	// (0x0004b559) cam6_indi_pane_t1

0x7760,	// (0x00044fa4) cam6_autofocus_pane_g1

0x7768,	// (0x00044fac) cam6_autofocus_pane_g2

0x7770,	// (0x00044fb4) cam6_autofocus_pane_g3

0x7778,	// (0x00044fbc) cam6_autofocus_pane_g4

0x0003,

0xfb66,	// (0x0004d3aa) cam6_autofocus_pane_g

0xdd3b,	// (0x0004b57f) cam6_timer_pane_g1

0xdd43,	// (0x0004b587) cam6_timer_pane_t1

0xdd51,	// (0x0004b595) cam6_zoom_cont_pane

0xdd59,	// (0x0004b59d) cam6_zoom_pane_g1

0xdd61,	// (0x0004b5a5) cam6_zoom_pane_g2

0x8950,	// (0x00046194) cam6_zoom_pane_g3

0x0002,

0xfb6f,	// (0x0004d3b3) cam6_zoom_pane_g

0xcc77,	// (0x0004a4bb) cam6_battery_pane_g1

0xcc77,	// (0x0004a4bb) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0004cf2b) cam6_battery_pane_g

0xdd69,	// (0x0004b5ad) cam6_zoom_cont_pane_g1

0xdd72,	// (0x0004b5b6) cam6_zoom_cont_pane_g2

0xdd7b,	// (0x0004b5bf) cam6_zoom_cont_pane_g3

0x0002,

0xfb76,	// (0x0004d3ba) cam6_zoom_cont_pane_g

0x896d,	// (0x000461b1) cam6_mode_pane_cp_ParamLimits

0x896d,	// (0x000461b1) cam6_mode_pane_cp

0x8904,	// (0x00046148) cam6_zoom_pane_cp_ParamLimits

0x8904,	// (0x00046148) cam6_zoom_pane_cp

0x8981,	// (0x000461c5) vid6_image_uncrop_cif_pane_ParamLimits

0x8981,	// (0x000461c5) vid6_image_uncrop_cif_pane

0x89ad,	// (0x000461f1) vid6_image_uncrop_nhd_pane_ParamLimits

0x89ad,	// (0x000461f1) vid6_image_uncrop_nhd_pane

0x889d,	// (0x000460e1) vid6_image_uncrop_vga_pane_ParamLimits

0x889d,	// (0x000460e1) vid6_image_uncrop_vga_pane

0x89cc,	// (0x00046210) vid6_image_uncrop_wvga_pane_ParamLimits

0x89cc,	// (0x00046210) vid6_image_uncrop_wvga_pane

0x89eb,	// (0x0004622f) vid6_indi_pane_ParamLimits

0x89eb,	// (0x0004622f) vid6_indi_pane

0xdaf7,	// (0x0004b33b) bg_tb_trans_pane_cp09_ParamLimits

0xdaf7,	// (0x0004b33b) bg_tb_trans_pane_cp09

0xdd93,	// (0x0004b5d7) cam6_battery_pane_cp_ParamLimits

0xdd93,	// (0x0004b5d7) cam6_battery_pane_cp

0xdd9f,	// (0x0004b5e3) vid6_indi_pane_g1_ParamLimits

0xdd9f,	// (0x0004b5e3) vid6_indi_pane_g1

0xddb1,	// (0x0004b5f5) vid6_indi_pane_g2_ParamLimits

0xddb1,	// (0x0004b5f5) vid6_indi_pane_g2

0xddc3,	// (0x0004b607) vid6_indi_pane_g3_ParamLimits

0xddc3,	// (0x0004b607) vid6_indi_pane_g3

0xddda,	// (0x0004b61e) vid6_indi_pane_g4_ParamLimits

0xddda,	// (0x0004b61e) vid6_indi_pane_g4

0xddf1,	// (0x0004b635) vid6_indi_pane_g5_ParamLimits

0xddf1,	// (0x0004b635) vid6_indi_pane_g5

0x0004,

0xfb7d,	// (0x0004d3c1) vid6_indi_pane_g_ParamLimits

0xfb7d,	// (0x0004d3c1) vid6_indi_pane_g

0xde0b,	// (0x0004b64f) vid6_indi_pane_t1_ParamLimits

0xde0b,	// (0x0004b64f) vid6_indi_pane_t1

0xde21,	// (0x0004b665) vid6_indi_pane_t2_ParamLimits

0xde21,	// (0x0004b665) vid6_indi_pane_t2

0xde49,	// (0x0004b68d) vid6_indi_pane_t3_ParamLimits

0xde49,	// (0x0004b68d) vid6_indi_pane_t3

0xde71,	// (0x0004b6b5) vid6_indi_pane_t4_ParamLimits

0xde71,	// (0x0004b6b5) vid6_indi_pane_t4

0x0003,

0xfb88,	// (0x0004d3cc) vid6_indi_pane_t_ParamLimits

0xfb88,	// (0x0004d3cc) vid6_indi_pane_t

0xde95,	// (0x0004b6d9) wait_bar_pane_cp08

0x8a10,	// (0x00046254) main_cset_text2_pane_t1_ParamLimits

0x8a10,	// (0x00046254) main_cset_text2_pane_t1

0x8958,	// (0x0004619c) listscroll_gen_pane_cp06_t1_ParamLimits

0x8958,	// (0x0004619c) listscroll_gen_pane_cp06_t1

0xa13a,	// (0x0004797e) main_cam6_set_pane

0xcea7,	// (0x0004a6eb) bg_tb_trans_pane_cp06_ParamLimits

0x760e,	// (0x00044e52) cam4_indicators_pane_g1_ParamLimits

0x761f,	// (0x00044e63) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0004d141) cam4_indicators_pane_g_ParamLimits

0x7637,	// (0x00044e7b) cam4_indicators_pane_t1_ParamLimits

0xa7ad,	// (0x00047ff1) bg_tb_trans_pane_cp07_ParamLimits

0x76ee,	// (0x00044f32) vid4_indicators_pane_g1_ParamLimits

0x7704,	// (0x00044f48) vid4_indicators_pane_g2_ParamLimits

0x7718,	// (0x00044f5c) vid4_indicators_pane_g3_ParamLimits

0x772b,	// (0x00044f6f) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0004d153) vid4_indicators_pane_g_ParamLimits

0x7749,	// (0x00044f8d) vid4_indicators_pane_t1_ParamLimits

0x8509,	// (0x00045d4d) vid4_progress_pane_g1_ParamLimits

0x851b,	// (0x00045d5f) vid4_progress_pane_g2_ParamLimits

0x4f23,	// (0x00042767) vid4_progress_pane_g3_ParamLimits

0x852d,	// (0x00045d71) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0004d304) vid4_progress_pane_g_ParamLimits

0x854b,	// (0x00045d8f) vid4_progress_pane_t1_ParamLimits

0x8560,	// (0x00045da4) vid4_progress_pane_t2_ParamLimits

0x8576,	// (0x00045dba) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0004d30f) vid4_progress_pane_t_ParamLimits

0x858b,	// (0x00045dcf) wait_bar_pane_cp07_ParamLimits

0x8a37,	// (0x0004627b) main_cam6_set_pane_g2_ParamLimits

0x8a37,	// (0x0004627b) main_cam6_set_pane_g2

0x8a43,	// (0x00046287) main_cset6_listscroll_pane_ParamLimits

0x8a43,	// (0x00046287) main_cset6_listscroll_pane

0x8a70,	// (0x000462b4) main_cset6_slider_pane_ParamLimits

0x8a70,	// (0x000462b4) main_cset6_slider_pane

0x8a7c,	// (0x000462c0) main_cset6_text2_pane_ParamLimits

0x8a7c,	// (0x000462c0) main_cset6_text2_pane

0xdea4,	// (0x0004b6e8) main_cset6_text_pane

0xdeac,	// (0x0004b6f0) main_cset_list_pane_copy1_ParamLimits

0xdeac,	// (0x0004b6f0) main_cset_list_pane_copy1

0xdebc,	// (0x0004b700) scroll_pane_cp028_copy1

0x8a8f,	// (0x000462d3) cset_list_set_pane_copy1

0x8a9f,	// (0x000462e3) aid_position_infowindow_above_copy1

0x8aa7,	// (0x000462eb) aid_position_infowindow_below_copy1

0x14e1,	// (0x0003ed25) cset_list_set_pane_g1_copy1

0x14e9,	// (0x0003ed2d) cset_list_set_pane_g3_copy1_ParamLimits

0x14e9,	// (0x0003ed2d) cset_list_set_pane_g3_copy1

0x14f8,	// (0x0003ed3c) cset_list_set_pane_t1_copy1_ParamLimits

0x14f8,	// (0x0003ed3c) cset_list_set_pane_t1_copy1

0xa7ad,	// (0x00047ff1) list_highlight_pane_cp021_copy1_ParamLimits

0xa7ad,	// (0x00047ff1) list_highlight_pane_cp021_copy1

0xdec5,	// (0x0004b709) cset6_slider_pane_ParamLimits

0xdec5,	// (0x0004b709) cset6_slider_pane

0xdef1,	// (0x0004b735) main_cset6_slider_pane_g1_ParamLimits

0xdef1,	// (0x0004b735) main_cset6_slider_pane_g1

0x8aaf,	// (0x000462f3) main_cset6_slider_pane_g2_ParamLimits

0x8aaf,	// (0x000462f3) main_cset6_slider_pane_g2

0xdf19,	// (0x0004b75d) main_cset6_slider_pane_g3_ParamLimits

0xdf19,	// (0x0004b75d) main_cset6_slider_pane_g3

0x8ad7,	// (0x0004631b) main_cset6_slider_pane_g4_ParamLimits

0x8ad7,	// (0x0004631b) main_cset6_slider_pane_g4

0x8ae3,	// (0x00046327) main_cset6_slider_pane_g5_ParamLimits

0x8ae3,	// (0x00046327) main_cset6_slider_pane_g5

0xd7a4,	// (0x0004afe8) main_cset6_slider_pane_g7_ParamLimits

0xd7a4,	// (0x0004afe8) main_cset6_slider_pane_g7

0xd7b0,	// (0x0004aff4) main_cset6_slider_pane_g8_ParamLimits

0xd7b0,	// (0x0004aff4) main_cset6_slider_pane_g8

0x8aef,	// (0x00046333) main_cset6_slider_pane_g9_ParamLimits

0x8aef,	// (0x00046333) main_cset6_slider_pane_g9

0x8afb,	// (0x0004633f) main_cset6_slider_pane_g10_ParamLimits

0x8afb,	// (0x0004633f) main_cset6_slider_pane_g10

0x8b07,	// (0x0004634b) main_cset6_slider_pane_g11_ParamLimits

0x8b07,	// (0x0004634b) main_cset6_slider_pane_g11

0x8b13,	// (0x00046357) main_cset6_slider_pane_g12_ParamLimits

0x8b13,	// (0x00046357) main_cset6_slider_pane_g12

0x8b1f,	// (0x00046363) main_cset6_slider_pane_g13_ParamLimits

0x8b1f,	// (0x00046363) main_cset6_slider_pane_g13

0x8b2b,	// (0x0004636f) main_cset6_slider_pane_g14_ParamLimits

0x8b2b,	// (0x0004636f) main_cset6_slider_pane_g14

0x8b37,	// (0x0004637b) main_cset6_slider_pane_g15_ParamLimits

0x8b37,	// (0x0004637b) main_cset6_slider_pane_g15

0x8b4f,	// (0x00046393) main_cset6_slider_pane_g16_ParamLimits

0x8b4f,	// (0x00046393) main_cset6_slider_pane_g16

0x8b5b,	// (0x0004639f) main_cset6_slider_pane_g17_ParamLimits

0x8b5b,	// (0x0004639f) main_cset6_slider_pane_g17

0x0011,

0xfb91,	// (0x0004d3d5) main_cset6_slider_pane_g_ParamLimits

0xfb91,	// (0x0004d3d5) main_cset6_slider_pane_g

0xdf25,	// (0x0004b769) main_cset6_slider_pane_t1_ParamLimits

0xdf25,	// (0x0004b769) main_cset6_slider_pane_t1

0x8b7f,	// (0x000463c3) main_cset6_slider_pane_t2_ParamLimits

0x8b7f,	// (0x000463c3) main_cset6_slider_pane_t2

0x8baa,	// (0x000463ee) main_cset6_slider_pane_t3_ParamLimits

0x8baa,	// (0x000463ee) main_cset6_slider_pane_t3

0x8bd5,	// (0x00046419) main_cset6_slider_pane_t4_ParamLimits

0x8bd5,	// (0x00046419) main_cset6_slider_pane_t4

0x8c00,	// (0x00046444) main_cset6_slider_pane_t5_ParamLimits

0x8c00,	// (0x00046444) main_cset6_slider_pane_t5

0xdf81,	// (0x0004b7c5) main_cset6_slider_pane_t7_ParamLimits

0xdf81,	// (0x0004b7c5) main_cset6_slider_pane_t7

0x8c2b,	// (0x0004646f) main_cset6_slider_pane_t8_ParamLimits

0x8c2b,	// (0x0004646f) main_cset6_slider_pane_t8

0x8c4f,	// (0x00046493) main_cset6_slider_pane_t9_ParamLimits

0x8c4f,	// (0x00046493) main_cset6_slider_pane_t9

0x8c73,	// (0x000464b7) main_cset6_slider_pane_t10_ParamLimits

0x8c73,	// (0x000464b7) main_cset6_slider_pane_t10

0x8c97,	// (0x000464db) main_cset6_slider_pane_t11_ParamLimits

0x8c97,	// (0x000464db) main_cset6_slider_pane_t11

0xdfb7,	// (0x0004b7fb) main_cset6_slider_pane_t14_ParamLimits

0xdfb7,	// (0x0004b7fb) main_cset6_slider_pane_t14

0xdff0,	// (0x0004b834) main_cset6_slider_pane_t15_ParamLimits

0xdff0,	// (0x0004b834) main_cset6_slider_pane_t15

0x000b,

0xfbb6,	// (0x0004d3fa) main_cset6_slider_pane_t_ParamLimits

0xfbb6,	// (0x0004d3fa) main_cset6_slider_pane_t

0xdf66,	// (0x0004b7aa) cset_slider_pane_g1_copy1

0xdf6f,	// (0x0004b7b3) cset_slider_pane_g2_copy1

0xdf78,	// (0x0004b7bc) cset_slider_pane_g3_copy1

0xa13a,	// (0x0004797e) bg_popup_sub_pane_cp011_copy1

0xe029,	// (0x0004b86d) main_cset_text_pane_g1_copy1

0xd8ec,	// (0x0004b130) main_cset_text_pane_t1_copy1

0xd8fa,	// (0x0004b13e) main_cset_text_pane_t2_copy1

0xd908,	// (0x0004b14c) main_cset_text_pane_t3_copy1

0xd916,	// (0x0004b15a) main_cset_text_pane_t4_copy1

0xd924,	// (0x0004b168) main_cset_text_pane_t5_copy1

0xe031,	// (0x0004b875) main_cset_text_pane_t6_copy1

0xe03f,	// (0x0004b883) main_cset_text_pane_t7_copy1

0x8cbb,	// (0x000464ff) main_cset_text2_pane_t1_copy1

0xa7ad,	// (0x00047ff1) main_ncimui_pane

0x56a2,	// (0x00042ee6) popup_query_ncimui_window_ParamLimits

0x56a2,	// (0x00042ee6) popup_query_ncimui_window

0x10ce,	// (0x0003e912) field_cale_ev2_pane_g4_ParamLimits

0x10ce,	// (0x0003e912) field_cale_ev2_pane_g4

0x6f55,	// (0x00044799) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6f55,	// (0x00044799) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0004d0df) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0004d0df) cell_video_dialer_keypad_pane_g

0x6f6d,	// (0x000447b1) cell_video_dialer_keypad_pane_t1

0xa13a,	// (0x0004797e) bg_popup_window_pane_cp012

0xb19e,	// (0x000489e2) heading_pane_cp06

0xe06b,	// (0x0004b8af) ncim_query_content_pane

0xa13a,	// (0x0004797e) bg_popup_heading_pane_cp01

0xe073,	// (0x0004b8b7) ncim_heading_pane_t1

0xe081,	// (0x0004b8c5) ncim_indicator_popup_pane

0xe093,	// (0x0004b8d7) ncim_query_button_pane

0xe0a9,	// (0x0004b8ed) ncim_query_content_pane_t1

0xe0bb,	// (0x0004b8ff) ncim_query_content_pane_t2

0x0005,

0xfbfa,	// (0x0004d43e) ncim_query_content_pane_t

0xe0f5,	// (0x0004b939) ncim_query_list_pane

0xe107,	// (0x0004b94b) ncim_query_popup_pane

0xe081,	// (0x0004b8c5) ncim_indicator_popup_pane_ParamLimits

0x8e17,	// (0x0004665b) ncim_query_content_pane_g1_ParamLimits

0x8e17,	// (0x0004665b) ncim_query_content_pane_g1

0xe0a9,	// (0x0004b8ed) ncim_query_content_pane_t1_ParamLimits

0xe0bb,	// (0x0004b8ff) ncim_query_content_pane_t2_ParamLimits

0x8e23,	// (0x00046667) ncim_query_content_pane_t3_ParamLimits

0x8e23,	// (0x00046667) ncim_query_content_pane_t3

0x8e40,	// (0x00046684) ncim_query_content_pane_t4_ParamLimits

0x8e40,	// (0x00046684) ncim_query_content_pane_t4

0x8e5d,	// (0x000466a1) ncim_query_content_pane_t5_ParamLimits

0x8e5d,	// (0x000466a1) ncim_query_content_pane_t5

0xe0cd,	// (0x0004b911) ncim_query_content_pane_t6_ParamLimits

0xe0cd,	// (0x0004b911) ncim_query_content_pane_t6

0xfbfa,	// (0x0004d43e) ncim_query_content_pane_t_ParamLimits

0xe0f5,	// (0x0004b939) ncim_query_list_pane_ParamLimits

0xe107,	// (0x0004b94b) ncim_query_popup_pane_ParamLimits

0xe11b,	// (0x0004b95f) wait_bar_pane_cp04

0xa13a,	// (0x0004797e) input_focus_pane_cp011

0xe123,	// (0x0004b967) ncim_query_popup_pane_t1

0xe131,	// (0x0004b975) ncim_list_query_list_pane_ParamLimits

0xe131,	// (0x0004b975) ncim_list_query_list_pane

0xa13a,	// (0x0004797e) bg_button_pane_cp027

0xe144,	// (0x0004b988) ncim_query_button_pane_g1

0xa13a,	// (0x0004797e) list_highlight_pane_cp012

0xe14e,	// (0x0004b992) ncim_list_query_list_pane_g1

0xe156,	// (0x0004b99a) ncim_list_query_list_pane_t1

0x762b,	// (0x00044e6f) cam4_indicators_pane_g3_ParamLimits

0x762b,	// (0x00044e6f) cam4_indicators_pane_g3

0x7737,	// (0x00044f7b) vid4_indicators_pane_g5_ParamLimits

0x7737,	// (0x00044f7b) vid4_indicators_pane_g5

0x853c,	// (0x00045d80) vid4_progress_pane_g5_ParamLimits

0x853c,	// (0x00045d80) vid4_progress_pane_g5

0x8ced,	// (0x00046531) main_ncimui_pane_g1

0x8d59,	// (0x0004659d) ncimui_group_query_pane_ParamLimits

0x8d59,	// (0x0004659d) ncimui_group_query_pane

0x8db3,	// (0x000465f7) ncimui_list_pane_ParamLimits

0x8db3,	// (0x000465f7) ncimui_list_pane

0x8dda,	// (0x0004661e) ncimui_text_pane_ParamLimits

0x8dda,	// (0x0004661e) ncimui_text_pane

0x8e7a,	// (0x000466be) ncimui_text_pane_t1_ParamLimits

0x8e7a,	// (0x000466be) ncimui_text_pane_t1

0xe164,	// (0x0004b9a8) ncimui_list_single_graphic_pane_ParamLimits

0xe164,	// (0x0004b9a8) ncimui_list_single_graphic_pane

0x8e99,	// (0x000466dd) ncimui_query_pane_ParamLimits

0x8e99,	// (0x000466dd) ncimui_query_pane

0xa13a,	// (0x0004797e) list_highlight_pane_cp013

0xe174,	// (0x0004b9b8) ncim_list_query_list_pane_t1_copy1

0xe14e,	// (0x0004b992) ncim_list_single_graphic_pane_g1

0xe182,	// (0x0004b9c6) ncim_query_button_pane_cp01

0xe18e,	// (0x0004b9d2) ncim_query_entry_pane_ParamLimits

0xe18e,	// (0x0004b9d2) ncim_query_entry_pane

0xe1a1,	// (0x0004b9e5) ncimui_query_pane_g1

0xe1ad,	// (0x0004b9f1) ncimui_query_pane_t1_ParamLimits

0xe1ad,	// (0x0004b9f1) ncimui_query_pane_t1

0xa7ad,	// (0x00047ff1) input_focus_pane_cp012

0xe1c6,	// (0x0004ba0a) ncim_query_entry_pane_t1

0xa8f4,	// (0x00048138) main_im_pane_ParamLimits

0xa7ad,	// (0x00047ff1) main_mobtv_pane_ParamLimits

0xa7ad,	// (0x00047ff1) main_mobtv_pane

0x8b67,	// (0x000463ab) main_cset6_slider_pane_g18_ParamLimits

0x8b67,	// (0x000463ab) main_cset6_slider_pane_g18

0x8b73,	// (0x000463b7) main_cset6_slider_pane_g19_ParamLimits

0x8b73,	// (0x000463b7) main_cset6_slider_pane_g19

0xd651,	// (0x0004ae95) bg_main_mobtv_pane_ParamLimits

0xd651,	// (0x0004ae95) bg_main_mobtv_pane

0x8eac,	// (0x000466f0) main_mobtv_info_pane

0x8eb7,	// (0x000466fb) main_mobtv_loading_pane_ParamLimits

0x8eb7,	// (0x000466fb) main_mobtv_loading_pane

0xe1d8,	// (0x0004ba1c) main_mobtv_pg_channel_list_pane

0xe1e2,	// (0x0004ba26) main_mobtv_pg_hdr_pane

0x8ec4,	// (0x00046708) main_mobtv_programe_curr_pane_ParamLimits

0x8ec4,	// (0x00046708) main_mobtv_programe_curr_pane

0x8ed1,	// (0x00046715) main_mobtv_programe_next_pane_ParamLimits

0x8ed1,	// (0x00046715) main_mobtv_programe_next_pane

0xe1eb,	// (0x0004ba2f) popup_mobtv_noti_window

0xcc77,	// (0x0004a4bb) main_tv_pg_hdr_pane_g1

0xe1f5,	// (0x0004ba39) main_tv_pg_hdr_pane_g2

0xe1fd,	// (0x0004ba41) main_tv_pg_hdr_pane_g3

0xe205,	// (0x0004ba49) main_tv_pg_hdr_pane_g4

0xe20d,	// (0x0004ba51) main_tv_pg_hdr_pane_g5

0xe217,	// (0x0004ba5b) main_tv_pg_hdr_pane_g6

0xe221,	// (0x0004ba65) main_tv_pg_hdr_pane_g7

0xe22b,	// (0x0004ba6f) main_tv_pg_hdr_pane_g8

0xe235,	// (0x0004ba79) main_tv_pg_hdr_pane_g9

0xe23f,	// (0x0004ba83) main_tv_pg_hdr_pane_g10

0xe249,	// (0x0004ba8d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc07,	// (0x0004d44b) main_tv_pg_hdr_pane_g

0xe253,	// (0x0004ba97) main_tv_pg_hdr_pane_t1

0xe261,	// (0x0004baa5) main_tv_pg_hdr_pane_t2

0xe26f,	// (0x0004bab3) main_tv_pg_hdr_pane_t3

0xe27f,	// (0x0004bac3) main_tv_pg_hdr_pane_t4

0xe28f,	// (0x0004bad3) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1e,	// (0x0004d462) main_tv_pg_hdr_pane_t

0xe29f,	// (0x0004bae3) single_mobtv_pg_channel_pane_ParamLimits

0xe29f,	// (0x0004bae3) single_mobtv_pg_channel_pane

0xe2b1,	// (0x0004baf5) single_mobtv_pg_channel_table_pane

0xe2ba,	// (0x0004bafe) single_mobtv_pg_channel_thumb_pane

0xe2c3,	// (0x0004bb07) single_tv_pg_channel_pane_g1

0xe2cc,	// (0x0004bb10) single_tv_pg_channel_pane_g2

0x0001,

0xfc29,	// (0x0004d46d) single_tv_pg_channel_pane_g

0xcea7,	// (0x0004a6eb) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcea7,	// (0x0004a6eb) bg_single_mobtv_pg_channel_thumb_pane

0xe2d5,	// (0x0004bb19) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2d5,	// (0x0004bb19) single_mobtv_pg_channel_thumb_pane_g1

0xe2e3,	// (0x0004bb27) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2e3,	// (0x0004bb27) single_mobtv_pg_channel_thumb_pane_g2

0xe2ef,	// (0x0004bb33) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2ef,	// (0x0004bb33) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2e,	// (0x0004d472) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2e,	// (0x0004d472) single_mobtv_pg_channel_thumb_pane_g

0xe2fb,	// (0x0004bb3f) single_mobtv_pg_channel_thumb_pane_t1

0xe309,	// (0x0004bb4d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc35,	// (0x0004d479) single_mobtv_pg_channel_thumb_pane_t

0xcc77,	// (0x0004a4bb) bg_single_mobtv_pg_channel_table_pane_g1

0xcc77,	// (0x0004a4bb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0004cf2b) bg_single_mobtv_pg_channel_table_pane_g

0xe317,	// (0x0004bb5b) single_mobtv_pg_channel_table_pane_t1

0xe325,	// (0x0004bb69) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3a,	// (0x0004d47e) single_mobtv_pg_channel_table_pane_t

0x8ee6,	// (0x0004672a) main_mobtv_info_pane_g1_ParamLimits

0x8ee6,	// (0x0004672a) main_mobtv_info_pane_g1

0x8f02,	// (0x00046746) main_mobtv_info_pane_t1_ParamLimits

0x8f02,	// (0x00046746) main_mobtv_info_pane_t1

0x8f7a,	// (0x000467be) main_mobtv_info_pane_t2_ParamLimits

0x8f7a,	// (0x000467be) main_mobtv_info_pane_t2

0x0002,

0xfc44,	// (0x0004d488) main_mobtv_info_pane_t_ParamLimits

0xfc44,	// (0x0004d488) main_mobtv_info_pane_t

0x900b,	// (0x0004684f) wait_bar_pane_cp05

0x901d,	// (0x00046861) main_mobtv_loading_pane_g1_ParamLimits

0x901d,	// (0x00046861) main_mobtv_loading_pane_g1

0x9029,	// (0x0004686d) main_mobtv_loading_pane_g2_ParamLimits

0x9029,	// (0x0004686d) main_mobtv_loading_pane_g2

0x9035,	// (0x00046879) main_mobtv_loading_pane_g3_ParamLimits

0x9035,	// (0x00046879) main_mobtv_loading_pane_g3

0x0002,

0xfc4b,	// (0x0004d48f) main_mobtv_loading_pane_g_ParamLimits

0xfc4b,	// (0x0004d48f) main_mobtv_loading_pane_g

0xe333,	// (0x0004bb77) main_mobtv_loading_pane_t1_ParamLimits

0xe333,	// (0x0004bb77) main_mobtv_loading_pane_t1

0xe34b,	// (0x0004bb8f) main_mobtv_loading_pane_t2_ParamLimits

0xe34b,	// (0x0004bb8f) main_mobtv_loading_pane_t2

0x0001,

0xfc52,	// (0x0004d496) main_mobtv_loading_pane_t_ParamLimits

0xfc52,	// (0x0004d496) main_mobtv_loading_pane_t

0x9043,	// (0x00046887) wait_bar_pane_cp06_ParamLimits

0x9043,	// (0x00046887) wait_bar_pane_cp06

0xe36f,	// (0x0004bbb3) main_mobtv_programe_curr_pane_t1

0xe37d,	// (0x0004bbc1) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc57,	// (0x0004d49b) main_mobtv_programe_curr_pane_t

0xe38b,	// (0x0004bbcf) main_mobtv_programe_next_pane_t1

0xe399,	// (0x0004bbdd) main_mobtv_programe_next_pane_t2

0xe3a7,	// (0x0004bbeb) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5c,	// (0x0004d4a0) main_mobtv_programe_next_pane_t

0xa13a,	// (0x0004797e) bg_popup_mobtv_noti_window_pane

0xe3b5,	// (0x0004bbf9) popup_mobtv_noti_window_g1

0xe3bd,	// (0x0004bc01) popup_mobtv_noti_window_t1

0xe3cb,	// (0x0004bc0f) popup_mobtv_noti_window_t2

0x0001,

0xfc63,	// (0x0004d4a7) popup_mobtv_noti_window_t

0xcc77,	// (0x0004a4bb) bg_popup_mobtv_noti_window_pane_g1

0xa13a,	// (0x0004797e) sc_clock_pane

0xa13a,	// (0x0004797e) main_fs_bigclock_pane

0x872a,	// (0x00045f6e) blid2_tripm_pane_t4_ParamLimits

0x872a,	// (0x00045f6e) blid2_tripm_pane_t4

0x904f,	// (0x00046893) sc_clock_pane_g1_ParamLimits

0x904f,	// (0x00046893) sc_clock_pane_g1

0x905d,	// (0x000468a1) sc_clock_pane_t1_ParamLimits

0x905d,	// (0x000468a1) sc_clock_pane_t1

0x9072,	// (0x000468b6) sc_clock_pane_t2_ParamLimits

0x9072,	// (0x000468b6) sc_clock_pane_t2

0x9084,	// (0x000468c8) sc_clock_pane_t3_ParamLimits

0x9084,	// (0x000468c8) sc_clock_pane_t3

0x0004,

0xfc68,	// (0x0004d4ac) sc_clock_pane_t_ParamLimits

0xfc68,	// (0x0004d4ac) sc_clock_pane_t

0x98ab,	// (0x000470ef) main_fs_bigclock_indicator_pane_ParamLimits

0x98ab,	// (0x000470ef) main_fs_bigclock_indicator_pane

0x9111,	// (0x00046955) main_fs_bigclock_pane_g1_ParamLimits

0x9111,	// (0x00046955) main_fs_bigclock_pane_g1

0x98b7,	// (0x000470fb) main_fs_bigclock_pane_t1_ParamLimits

0x98b7,	// (0x000470fb) main_fs_bigclock_pane_t1

0x98c9,	// (0x0004710d) main_fs_bigclock_pane_t2_ParamLimits

0x98c9,	// (0x0004710d) main_fs_bigclock_pane_t2

0x98dd,	// (0x00047121) main_fs_bigclock_pane_t3_ParamLimits

0x98dd,	// (0x00047121) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0004d6b0) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0004d6b0) main_fs_bigclock_pane_t

0xec3b,	// (0x0004c47f) main_fs_bigclock_indicator_pane_g1

0xe09b,	// (0x0004b8df) ncim_query_content_pane_g2_ParamLimits

0xe09b,	// (0x0004b8df) ncim_query_content_pane_g2

0x0001,

0xfbf5,	// (0x0004d439) ncim_query_content_pane_g_ParamLimits

0xfbf5,	// (0x0004d439) ncim_query_content_pane_g

0x9096,	// (0x000468da) sc_clock_pane_t4_ParamLimits

0x9096,	// (0x000468da) sc_clock_pane_t4

0xa7ad,	// (0x00047ff1) main_radioblah_pane

0xd5bc,	// (0x0004ae00) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5bc,	// (0x0004ae00) cell_call4_button_pane_t1_copy1

0x8d09,	// (0x0004654d) main_ncimui_pane_t1_ParamLimits

0x8d09,	// (0x0004654d) main_ncimui_pane_t1

0x8d23,	// (0x00046567) main_ncimui_pane_t2_ParamLimits

0x8d23,	// (0x00046567) main_ncimui_pane_t2

0x0002,

0xfbee,	// (0x0004d432) main_ncimui_pane_t_ParamLimits

0xfbee,	// (0x0004d432) main_ncimui_pane_t

0xe517,	// (0x0004bd5b) main_radioblah_anim_pane_ParamLimits

0xe517,	// (0x0004bd5b) main_radioblah_anim_pane

0xe528,	// (0x0004bd6c) main_radioblah_info_pane_ParamLimits

0xe528,	// (0x0004bd6c) main_radioblah_info_pane

0xe53c,	// (0x0004bd80) main_radioblah_pane_t1_ParamLimits

0xe53c,	// (0x0004bd80) main_radioblah_pane_t1

0xe558,	// (0x0004bd9c) main_radioblah_pane_t2_ParamLimits

0xe558,	// (0x0004bd9c) main_radioblah_pane_t2

0x0003,

0xfc89,	// (0x0004d4cd) main_radioblah_pane_t_ParamLimits

0xfc89,	// (0x0004d4cd) main_radioblah_pane_t

0x9163,	// (0x000469a7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9163,	// (0x000469a7) main_radioblah_rocker_ctrl_pane

0xe5a0,	// (0x0004bde4) main_radioblah_info_pane_t1_ParamLimits

0xe5a0,	// (0x0004bde4) main_radioblah_info_pane_t1

0x91ac,	// (0x000469f0) main_radioblah_info_pane_t2_ParamLimits

0x91ac,	// (0x000469f0) main_radioblah_info_pane_t2

0x0003,

0xfc92,	// (0x0004d4d6) main_radioblah_info_pane_t_ParamLimits

0xfc92,	// (0x0004d4d6) main_radioblah_info_pane_t

0xcc77,	// (0x0004a4bb) main_radioblah_rocker_ctrl_pane_g1

0x925c,	// (0x00046aa0) main_radioblah_rocker_ctrl_pane_g2

0x9264,	// (0x00046aa8) main_radioblah_rocker_ctrl_pane_g3

0x926c,	// (0x00046ab0) main_radioblah_rocker_ctrl_pane_g4

0x9274,	// (0x00046ab8) main_radioblah_rocker_ctrl_pane_g5

0x927c,	// (0x00046ac0) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9b,	// (0x0004d4df) main_radioblah_rocker_ctrl_pane_g

0x8cbb,	// (0x000464ff) main_cset_text2_pane_t1_copy1_ParamLimits

0x7558,	// (0x00044d9c) cam4_image_uncrop_qvga_pane

0x769d,	// (0x00044ee1) vid4_image_uncrop_qcif_pane

0x88bc,	// (0x00046100) cam6_image_uncrop_qvga_pane_ParamLimits

0x88bc,	// (0x00046100) cam6_image_uncrop_qvga_pane

0xdd83,	// (0x0004b5c7) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd83,	// (0x0004b5c7) vid6_image_uncrop_qcif_pane

0xa13a,	// (0x0004797e) bg_popup_preview_window_pane_cp03

0xe04d,	// (0x0004b891) list_cset_text2_pane

0xe055,	// (0x0004b899) main_cset6_text2_pane_g1

0xe05d,	// (0x0004b8a1) main_cset6_text2_pane_t1

0x9284,	// (0x00046ac8) list_cset_text2_pane_t1_ParamLimits

0x9284,	// (0x00046ac8) list_cset_text2_pane_t1

0xa7ad,	// (0x00047ff1) main_radioblah_pane_ParamLimits

0x8ff7,	// (0x0004683b) main_mobtv_info_pane_t3_ParamLimits

0x8ff7,	// (0x0004683b) main_mobtv_info_pane_t3

0x9151,	// (0x00046995) main_radioblah_pane_g1

0x917c,	// (0x000469c0) main_radioblah_info_pane_g1

0x9201,	// (0x00046a45) main_radioblah_info_pane_t3_ParamLimits

0x9201,	// (0x00046a45) main_radioblah_info_pane_t3

0x4373,	// (0x00041bb7) highlight_cell_cale_month_pane_ParamLimits

0x4373,	// (0x00041bb7) highlight_cell_cale_month_pane

0xa13a,	// (0x0004797e) main_phob_fisheye_pane

0xcf83,	// (0x0004a7c7) scroll_pane_cp0031_ParamLimits

0xcf83,	// (0x0004a7c7) scroll_pane_cp0031

0xde95,	// (0x0004b6d9) wait_bar_pane_cp08_ParamLimits

0x8a8f,	// (0x000462d3) cset_list_set_pane_copy1_ParamLimits

0xe5da,	// (0x0004be1e) highlight_cell_cale_month_pane_g1

0x929b,	// (0x00046adf) highlight_cell_cale_month_pane_t1

0xdb4d,	// (0x0004b391) list_gen_pane_cp01

0xd78f,	// (0x0004afd3) scroll_pane_01

0x15dd,	// (0x0003ee21) list_single_double_fisheye_pane

0x15e6,	// (0x0003ee2a) list_double_fisheye_pane_g1_ParamLimits

0x15e6,	// (0x0003ee2a) list_double_fisheye_pane_g1

0x15f2,	// (0x0003ee36) list_double_fisheye_pane_g2_ParamLimits

0x15f2,	// (0x0003ee36) list_double_fisheye_pane_g2

0x1606,	// (0x0003ee4a) list_double_fisheye_pane_g3_ParamLimits

0x1606,	// (0x0003ee4a) list_double_fisheye_pane_g3

0x0004,

0xfca8,	// (0x0004d4ec) list_double_fisheye_pane_g_ParamLimits

0xfca8,	// (0x0004d4ec) list_double_fisheye_pane_g

0x162f,	// (0x0003ee73) list_double_fisheye_pane_t1_ParamLimits

0x162f,	// (0x0003ee73) list_double_fisheye_pane_t1

0x164a,	// (0x0003ee8e) list_double_fisheye_pane_t2_ParamLimits

0x164a,	// (0x0003ee8e) list_double_fisheye_pane_t2

0x0001,

0xfcb3,	// (0x0004d4f7) list_double_fisheye_pane_t_ParamLimits

0xfcb3,	// (0x0004d4f7) list_double_fisheye_pane_t

0xa13a,	// (0x0004797e) main_call5_pane

0x90bc,	// (0x00046900) sc_swipe_pane_ParamLimits

0x90bc,	// (0x00046900) sc_swipe_pane

0x92b5,	// (0x00046af9) call5_image_pane_ParamLimits

0x92b5,	// (0x00046af9) call5_image_pane

0x92c7,	// (0x00046b0b) call5_swipe_1_pane_ParamLimits

0x92c7,	// (0x00046b0b) call5_swipe_1_pane

0x92d3,	// (0x00046b17) call5_swipe_2_pane_ParamLimits

0x92d3,	// (0x00046b17) call5_swipe_2_pane

0x92ef,	// (0x00046b33) popup_call5_audio_first_window_ParamLimits

0x92ef,	// (0x00046b33) popup_call5_audio_first_window

0xcea7,	// (0x0004a6eb) call5_swipe_1_pane_g1_ParamLimits

0xcea7,	// (0x0004a6eb) call5_swipe_1_pane_g1

0xe5e2,	// (0x0004be26) call5_swipe_1_pane_g2_ParamLimits

0xe5e2,	// (0x0004be26) call5_swipe_1_pane_g2

0x0001,

0xfcb8,	// (0x0004d4fc) call5_swipe_1_pane_g_ParamLimits

0xfcb8,	// (0x0004d4fc) call5_swipe_1_pane_g

0xe5ee,	// (0x0004be32) call5_swipe_1_pane_t1_ParamLimits

0xe5ee,	// (0x0004be32) call5_swipe_1_pane_t1

0xcea7,	// (0x0004a6eb) call5_swipe_2_pane_g1_ParamLimits

0xcea7,	// (0x0004a6eb) call5_swipe_2_pane_g1

0xe603,	// (0x0004be47) call5_swipe_2_pane_g2_ParamLimits

0xe603,	// (0x0004be47) call5_swipe_2_pane_g2

0x0001,

0xfcbd,	// (0x0004d501) call5_swipe_2_pane_g_ParamLimits

0xfcbd,	// (0x0004d501) call5_swipe_2_pane_g

0xe60f,	// (0x0004be53) call5_swipe_2_pane_t1_ParamLimits

0xe60f,	// (0x0004be53) call5_swipe_2_pane_t1

0xe624,	// (0x0004be68) sc_swipe_pane_g1_ParamLimits

0xe624,	// (0x0004be68) sc_swipe_pane_g1

0xe631,	// (0x0004be75) sc_swipe_pane_g2_ParamLimits

0xe631,	// (0x0004be75) sc_swipe_pane_g2

0x0001,

0xfcc2,	// (0x0004d506) sc_swipe_pane_g_ParamLimits

0xfcc2,	// (0x0004d506) sc_swipe_pane_g

0xe63d,	// (0x0004be81) sc_swipe_pane_t1_ParamLimits

0xe63d,	// (0x0004be81) sc_swipe_pane_t1

0xa13a,	// (0x0004797e) main_cmail_launcher_pane

0x92ff,	// (0x00046b43) aid_size_cell_cmail_l_ParamLimits

0x92ff,	// (0x00046b43) aid_size_cell_cmail_l

0x930f,	// (0x00046b53) grid_cmail_l_pane_ParamLimits

0x930f,	// (0x00046b53) grid_cmail_l_pane

0x931f,	// (0x00046b63) cell_cmail_l_pane_ParamLimits

0x931f,	// (0x00046b63) cell_cmail_l_pane

0x9335,	// (0x00046b79) cell_cmail_l_pane_g1_ParamLimits

0x9335,	// (0x00046b79) cell_cmail_l_pane_g1

0x9341,	// (0x00046b85) cell_cmail_l_pane_t1_ParamLimits

0x9341,	// (0x00046b85) cell_cmail_l_pane_t1

0xe652,	// (0x0004be96) cell_cmail_l_pane_t2_ParamLimits

0xe652,	// (0x0004be96) cell_cmail_l_pane_t2

0x0001,

0xfcc7,	// (0x0004d50b) cell_cmail_l_pane_t_ParamLimits

0xfcc7,	// (0x0004d50b) cell_cmail_l_pane_t

0xa7ad,	// (0x00047ff1) grid_highlight_pane_cp018_ParamLimits

0xa7ad,	// (0x00047ff1) grid_highlight_pane_cp018

0x218f,	// (0x0003f9d3) main2_pane_ParamLimits

0x218f,	// (0x0003f9d3) main2_pane

0xa99f,	// (0x000481e3) popup_sp_fs_action_menu_bg_pane_g1

0xa9a7,	// (0x000481eb) popup_sp_fs_action_menu_bg_pane_g2

0xa9af,	// (0x000481f3) popup_sp_fs_action_menu_bg_pane_g3

0xa9b7,	// (0x000481fb) popup_sp_fs_action_menu_bg_pane_g4

0xa9bf,	// (0x00048203) popup_sp_fs_action_menu_bg_pane_g5

0xa9c7,	// (0x0004820b) popup_sp_fs_action_menu_bg_pane_g6

0xa9cf,	// (0x00048213) popup_sp_fs_action_menu_bg_pane_g7

0xa9d7,	// (0x0004821b) popup_sp_fs_action_menu_bg_pane_g8

0xa9df,	// (0x00048223) popup_sp_fs_action_menu_bg_pane_g9

0xa9e7,	// (0x0004822b) popup_sp_fs_action_menu_bg_pane_g10

0xa9e7,	// (0x0004822b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0004c9d7) popup_sp_fs_action_menu_bg_pane_g

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t3_g3_g1

0x0e06,	// (0x0003e64a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0e06,	// (0x0003e64a) list_medium_line_x2_t3_g3_g2

0x0e12,	// (0x0003e656) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0e12,	// (0x0003e656) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0004ca87) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0004ca87) list_medium_line_x2_t3_g3_g

0x0e1e,	// (0x0003e662) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0e1e,	// (0x0003e662) list_medium_line_x2_t3_g3_t1

0x0e33,	// (0x0003e677) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0e33,	// (0x0003e677) list_medium_line_x2_t3_g3_t2

0x0e47,	// (0x0003e68b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0e47,	// (0x0003e68b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0004ca8e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0004ca8e) list_medium_line_x2_t3_g3_t

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t3_g2_g1

0x0e12,	// (0x0003e656) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0e12,	// (0x0003e656) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0004ca95) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0004ca95) list_medium_line_x2_t3_g2_g

0x0e5c,	// (0x0003e6a0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0e5c,	// (0x0003e6a0) list_medium_line_x2_t3_g2_t1

0x0e72,	// (0x0003e6b6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0e72,	// (0x0003e6b6) list_medium_line_x2_t3_g2_t2

0x0e84,	// (0x0003e6c8) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0e84,	// (0x0003e6c8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0004ca9a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0004ca9a) list_medium_line_x2_t3_g2_t

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t4_g4_g1

0x0ea1,	// (0x0003e6e5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0ea1,	// (0x0003e6e5) list_medium_line_x2_t4_g4_g2

0x0e06,	// (0x0003e64a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0e06,	// (0x0003e64a) list_medium_line_x2_t4_g4_g3

0x0ead,	// (0x0003e6f1) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0ead,	// (0x0003e6f1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0004caa1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0004caa1) list_medium_line_x2_t4_g4_g

0x0eb9,	// (0x0003e6fd) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0eb9,	// (0x0003e6fd) list_medium_line_x2_t4_g4_t1

0x0ed3,	// (0x0003e717) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0ed3,	// (0x0003e717) list_medium_line_x2_t4_g4_t2

0x0ee9,	// (0x0003e72d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0ee9,	// (0x0003e72d) list_medium_line_x2_t4_g4_t3

0x0efe,	// (0x0003e742) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0efe,	// (0x0003e742) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0004caaa) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0004caaa) list_medium_line_x2_t4_g4_t

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t2_g4_g1

0x0ea1,	// (0x0003e6e5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0ea1,	// (0x0003e6e5) list_medium_line_x2_t2_g4_g2

0x0e06,	// (0x0003e64a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0e06,	// (0x0003e64a) list_medium_line_x2_t2_g4_g3

0x0e12,	// (0x0003e656) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0e12,	// (0x0003e656) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0004cb11) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0004cb11) list_medium_line_x2_t2_g4_g

0x0f10,	// (0x0003e754) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0f10,	// (0x0003e754) list_medium_line_x2_t2_g4_t1

0x0e47,	// (0x0003e68b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0e47,	// (0x0003e68b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0004cb1a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0004cb1a) list_medium_line_x2_t2_g4_t

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t2_g3_g1

0x0e06,	// (0x0003e64a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0e06,	// (0x0003e64a) list_medium_line_x2_t2_g3_g2

0x0e12,	// (0x0003e656) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0e12,	// (0x0003e656) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0004ca87) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0004ca87) list_medium_line_x2_t2_g3_g

0x0f25,	// (0x0003e769) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0f25,	// (0x0003e769) list_medium_line_x2_t2_g3_t1

0x0e47,	// (0x0003e68b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0e47,	// (0x0003e68b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0004cb1f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0004cb1f) list_medium_line_x2_t2_g3_t

0x451b,	// (0x00041d5f) main_sp_fs_list_pane_ParamLimits

0x451b,	// (0x00041d5f) main_sp_fs_list_pane

0x4527,	// (0x00041d6b) sp_fs_scroll_pane_ParamLimits

0x4527,	// (0x00041d6b) sp_fs_scroll_pane

0x0f3a,	// (0x0003e77e) list_medium_line_x2_t3_t1

0x0f4a,	// (0x0003e78e) list_medium_line_x2_t3_t2

0x0f58,	// (0x0003e79c) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0004cb6a) list_medium_line_x2_t3_t

0x0f66,	// (0x0003e7aa) list_medium_line_x3_t4_t1

0x0f76,	// (0x0003e7ba) list_medium_line_x3_t4_t2

0x0f84,	// (0x0003e7c8) list_medium_line_x3_t4_t3

0x0f58,	// (0x0003e79c) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0004cb71) list_medium_line_x3_t4_t

0x0f92,	// (0x0003e7d6) list_medium_line_x4_t5_t1

0x0fa2,	// (0x0003e7e6) list_medium_line_x4_t5_t2

0x0f84,	// (0x0003e7c8) list_medium_line_x4_t5_t3

0x0fb0,	// (0x0003e7f4) list_medium_line_x4_t5_t4

0x0f58,	// (0x0003e79c) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0004cb7a) list_medium_line_x4_t5_t

0x0dfa,	// (0x0003e63e) list_medium_line_t4_g4_g1_ParamLimits

0x0dfa,	// (0x0003e63e) list_medium_line_t4_g4_g1

0x0fbe,	// (0x0003e802) list_medium_line_t4_g4_g2_ParamLimits

0x0fbe,	// (0x0003e802) list_medium_line_t4_g4_g2

0x0fca,	// (0x0003e80e) list_medium_line_t4_g4_g3_ParamLimits

0x0fca,	// (0x0003e80e) list_medium_line_t4_g4_g3

0x0e12,	// (0x0003e656) list_medium_line_t4_g4_g4_ParamLimits

0x0e12,	// (0x0003e656) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0004cb85) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0004cb85) list_medium_line_t4_g4_g

0x0fd6,	// (0x0003e81a) list_medium_line_t4_g4_t1_ParamLimits

0x0fd6,	// (0x0003e81a) list_medium_line_t4_g4_t1

0x0feb,	// (0x0003e82f) list_medium_line_t4_g4_t2_ParamLimits

0x0feb,	// (0x0003e82f) list_medium_line_t4_g4_t2

0x1000,	// (0x0003e844) list_medium_line_t4_g4_t3_ParamLimits

0x1000,	// (0x0003e844) list_medium_line_t4_g4_t3

0x0e47,	// (0x0003e68b) list_medium_line_t4_g4_t4_ParamLimits

0x0e47,	// (0x0003e68b) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0004cb8e) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0004cb8e) list_medium_line_t4_g4_t

0x4646,	// (0x00041e8a) chi_dic_find_pane_g1

0x566b,	// (0x00042eaf) main_tport_pane

0x123d,	// (0x0003ea81) list_medium_line_plain_t1

0x124b,	// (0x0003ea8f) list_medium_line_t2_g2_g1_ParamLimits

0x124b,	// (0x0003ea8f) list_medium_line_t2_g2_g1

0x1257,	// (0x0003ea9b) list_medium_line_t2_g2_g2_ParamLimits

0x1257,	// (0x0003ea9b) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0004d24a) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0004d24a) list_medium_line_t2_g2_g

0x1263,	// (0x0003eaa7) list_medium_line_t2_g2_t1_ParamLimits

0x1263,	// (0x0003eaa7) list_medium_line_t2_g2_t1

0x127a,	// (0x0003eabe) list_medium_line_t2_g2_t2_ParamLimits

0x127a,	// (0x0003eabe) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0004d24f) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0004d24f) list_medium_line_t2_g2_t

0x1499,	// (0x0003ecdd) aid_sp_fs_list_icon_a_sm

0x14a1,	// (0x0003ece5) aid_sp_fs_list_icon_d

0x14a9,	// (0x0003eced) aid_sp_fs_text_primary

0xe7a0,	// (0x0004bfe4) aid_sp_fs_text_secondary

0x14b2,	// (0x0003ecf6) list_medium_line

0x14b2,	// (0x0003ecf6) list_medium_line_g2

0x14b2,	// (0x0003ecf6) list_medium_line_g3

0x14b2,	// (0x0003ecf6) list_medium_line_plain

0x14b2,	// (0x0003ecf6) list_medium_line_plain_t2

0x14b2,	// (0x0003ecf6) list_medium_line_plain_t3

0x14b2,	// (0x0003ecf6) list_medium_line_right_icon

0x14b2,	// (0x0003ecf6) list_medium_line_right_iconx2

0x14b2,	// (0x0003ecf6) list_medium_line_t2

0x14b2,	// (0x0003ecf6) list_medium_line_t2_g2

0x14b2,	// (0x0003ecf6) list_medium_line_t2_g3

0x14b2,	// (0x0003ecf6) list_medium_line_t2_right_icon

0x14b2,	// (0x0003ecf6) list_medium_line_t2_right_iconx2

0x14b2,	// (0x0003ecf6) list_medium_line_t3

0x14b2,	// (0x0003ecf6) list_medium_line_t3_g2

0x14b2,	// (0x0003ecf6) list_medium_line_t3_g3

0x14b2,	// (0x0003ecf6) list_medium_line_t3_right_iconx2

0x14bb,	// (0x0003ecff) list_medium_line_t4_g4

0x859f,	// (0x00045de3) list_medium_line_x2

0x859f,	// (0x00045de3) list_medium_line_x2_t2_g2

0x859f,	// (0x00045de3) list_medium_line_x2_t2_g3

0x859f,	// (0x00045de3) list_medium_line_x2_t2_g4

0x859f,	// (0x00045de3) list_medium_line_x2_t3

0x859f,	// (0x00045de3) list_medium_line_x2_t3_g2

0x859f,	// (0x00045de3) list_medium_line_x2_t3_g3

0x859f,	// (0x00045de3) list_medium_line_x2_t3_g4

0x859f,	// (0x00045de3) list_medium_line_x2_t4_g2

0x859f,	// (0x00045de3) list_medium_line_x2_t4_g4

0x14c4,	// (0x0003ed08) list_medium_line_x3

0x14c4,	// (0x0003ed08) list_medium_line_x3_t4

0x14c4,	// (0x0003ed08) list_medium_line_x3_t4_g4

0x14bb,	// (0x0003ecff) list_medium_line_x4_t4

0x14bb,	// (0x0003ecff) list_medium_line_x4_t4_g7

0x14bb,	// (0x0003ecff) list_medium_line_x4_t5

0x14cd,	// (0x0003ed11) list_single_fs_dyc_pane_ParamLimits

0x14cd,	// (0x0003ed11) list_single_fs_dyc_pane

0x0dfa,	// (0x0003e63e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0dfa,	// (0x0003e63e) list_medium_line_x4_t4_g7_g1

0x150d,	// (0x0003ed51) list_medium_line_x4_t4_g7_g2_ParamLimits

0x150d,	// (0x0003ed51) list_medium_line_x4_t4_g7_g2

0x1519,	// (0x0003ed5d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1519,	// (0x0003ed5d) list_medium_line_x4_t4_g7_g3

0x1528,	// (0x0003ed6c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1528,	// (0x0003ed6c) list_medium_line_x4_t4_g7_g4

0x1534,	// (0x0003ed78) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1534,	// (0x0003ed78) list_medium_line_x4_t4_g7_g5

0x1543,	// (0x0003ed87) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1543,	// (0x0003ed87) list_medium_line_x4_t4_g7_g6

0x1552,	// (0x0003ed96) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1552,	// (0x0003ed96) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcf,	// (0x0004d413) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcf,	// (0x0004d413) list_medium_line_x4_t4_g7_g

0x155e,	// (0x0003eda2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x155e,	// (0x0003eda2) list_medium_line_x4_t4_g7_t1

0x1573,	// (0x0003edb7) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1573,	// (0x0003edb7) list_medium_line_x4_t4_g7_t2

0x1588,	// (0x0003edcc) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1588,	// (0x0003edcc) list_medium_line_x4_t4_g7_t3

0x159d,	// (0x0003ede1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x159d,	// (0x0003ede1) list_medium_line_x4_t4_g7_t4

0x15af,	// (0x0003edf3) list_medium_line_x4_t4_g7_t5_ParamLimits

0x15af,	// (0x0003edf3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbde,	// (0x0004d422) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbde,	// (0x0004d422) list_medium_line_x4_t4_g7_t

0x15c1,	// (0x0003ee05) list_single_dyc_row_pane_ParamLimits

0x15c1,	// (0x0003ee05) list_single_dyc_row_pane

0x92a9,	// (0x00046aed) call5_gesture_pane_ParamLimits

0x92a9,	// (0x00046aed) call5_gesture_pane

0x92df,	// (0x00046b23) call5_windows_pane_ParamLimits

0x92df,	// (0x00046b23) call5_windows_pane

0x9357,	// (0x00046b9b) call5_swipe_1_pane_cp_ParamLimits

0x9357,	// (0x00046b9b) call5_swipe_1_pane_cp

0x9363,	// (0x00046ba7) call5_swipe_2_pane_cp_ParamLimits

0x9363,	// (0x00046ba7) call5_swipe_2_pane_cp

0xb41b,	// (0x00048c5f) call5_image_pane_cp

0x936f,	// (0x00046bb3) popup_call5_audio_first_window_cp_ParamLimits

0x936f,	// (0x00046bb3) popup_call5_audio_first_window_cp

0xe624,	// (0x0004be68) call5_swipe_1_pane_g1_cp_ParamLimits

0xe624,	// (0x0004be68) call5_swipe_1_pane_g1_cp

0xe664,	// (0x0004bea8) call5_swipe_1_pane_g2_cp

0xe63d,	// (0x0004be81) call5_swipe_1_pane_t1_cp_ParamLimits

0xe63d,	// (0x0004be81) call5_swipe_1_pane_t1_cp

0xe624,	// (0x0004be68) call5_swipe_2_pane_g1_cp_ParamLimits

0xe624,	// (0x0004be68) call5_swipe_2_pane_g1_cp

0xe66c,	// (0x0004beb0) call5_swipe_2_pane_g2_cp

0xe674,	// (0x0004beb8) call5_swipe_2_pane_t1_cp_ParamLimits

0xe674,	// (0x0004beb8) call5_swipe_2_pane_t1_cp

0xa7ad,	// (0x00047ff1) main_sp_fs_email_pane

0xe689,	// (0x0004becd) main_sp_fs_listscroll_pane_te

0x166c,	// (0x0003eeb0) popup_sp_fs_action_menu_pane_ParamLimits

0x166c,	// (0x0003eeb0) popup_sp_fs_action_menu_pane

0xcc77,	// (0x0004a4bb) bg_sp_fs_ctrlbar_pane_g1

0xe692,	// (0x0004bed6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe69b,	// (0x0004bedf) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6a4,	// (0x0004bee8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc77,	// (0x0004a4bb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccc,	// (0x0004d510) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca56,	// (0x0004a29a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca56,	// (0x0004a29a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6ad,	// (0x0004bef1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6ad,	// (0x0004bef1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6b9,	// (0x0004befd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6b9,	// (0x0004befd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd5,	// (0x0004d519) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd5,	// (0x0004d519) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6c5,	// (0x0004bf09) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6c5,	// (0x0004bf09) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x16b2,	// (0x0003eef6) list_medium_line_t2_right_icon_g1

0x16ba,	// (0x0003eefe) list_medium_line_t2_right_icon_t1

0x16ca,	// (0x0003ef0e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcda,	// (0x0004d51e) list_medium_line_t2_right_icon_t

0xc826,	// (0x0004a06a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc826,	// (0x0004a06a) bg_sp_fs_ctrlbar_pane

0x93d6,	// (0x00046c1a) main_sp_fs_ctrlbar_button_pane_cp01

0x93de,	// (0x00046c22) main_sp_fs_ctrlbar_ddmenu_pane

0xe717,	// (0x0004bf5b) main_sp_fs_ctrlbar_pane_g1

0xe723,	// (0x0004bf67) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcdf,	// (0x0004d523) main_sp_fs_ctrlbar_pane_g

0xe72f,	// (0x0004bf73) main_sp_fs_ctrlbar_pane_t1

0x16d8,	// (0x0003ef1c) main_sp_fs_ctrlbar_pane

0x16f2,	// (0x0003ef36) main_sp_fs_listscroll_pane_te_cp01

0x1703,	// (0x0003ef47) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1703,	// (0x0003ef47) popup_sp_fs_action_menu_pane_cp01

0xa7ad,	// (0x00047ff1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa7ad,	// (0x00047ff1) bg_sp_fs_highlight_list_pane_cp01

0x172d,	// (0x0003ef71) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x172d,	// (0x0003ef71) sp_fs_action_menu_list_gene_pane_g1

0xe75f,	// (0x0004bfa3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe75f,	// (0x0004bfa3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce9,	// (0x0004d52d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce9,	// (0x0004d52d) sp_fs_action_menu_list_gene_pane_g

0x173c,	// (0x0003ef80) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x173c,	// (0x0003ef80) sp_fs_action_menu_list_gene_pane_t1

0x1754,	// (0x0003ef98) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1754,	// (0x0003ef98) sp_fs_action_menu_list_gene_pane

0xe76c,	// (0x0004bfb0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe76c,	// (0x0004bfb0) popup_sp_fs_action_menu_bg_pane

0x1777,	// (0x0003efbb) sp_fs_action_menu_list_pane_ParamLimits

0x1777,	// (0x0003efbb) sp_fs_action_menu_list_pane

0xe77a,	// (0x0004bfbe) sp_fs_scroll_pane_cp01_ParamLimits

0xe77a,	// (0x0004bfbe) sp_fs_scroll_pane_cp01

0x179b,	// (0x0003efdf) list_medium_line_plain_t2_t1

0x17ab,	// (0x0003efef) list_medium_line_plain_t2_t2

0x0001,

0xfcee,	// (0x0004d532) list_medium_line_plain_t2_t

0x17b9,	// (0x0003effd) list_medium_line_plain_t3_t1

0x17c9,	// (0x0003f00d) list_medium_line_plain_t3_t2

0x17d7,	// (0x0003f01b) list_medium_line_plain_t3_t3

0x0002,

0xfcf3,	// (0x0004d537) list_medium_line_plain_t3_t

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t2_g2_g1

0x0e12,	// (0x0003e656) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0e12,	// (0x0003e656) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0004ca95) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0004ca95) list_medium_line_x2_t2_g2_g

0x0fd6,	// (0x0003e81a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0fd6,	// (0x0003e81a) list_medium_line_x2_t2_g2_t1

0x0e47,	// (0x0003e68b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0e47,	// (0x0003e68b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfa,	// (0x0004d53e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfa,	// (0x0004d53e) list_medium_line_x2_t2_g2_t

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t4_g2_g1

0x17e5,	// (0x0003f029) list_medium_line_x2_t4_g2_g2_ParamLimits

0x17e5,	// (0x0003f029) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcff,	// (0x0004d543) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcff,	// (0x0004d543) list_medium_line_x2_t4_g2_g

0x17f7,	// (0x0003f03b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x17f7,	// (0x0003f03b) list_medium_line_x2_t4_g2_t1

0x1811,	// (0x0003f055) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1811,	// (0x0003f055) list_medium_line_x2_t4_g2_t2

0x1827,	// (0x0003f06b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1827,	// (0x0003f06b) list_medium_line_x2_t4_g2_t3

0x0e47,	// (0x0003e68b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0e47,	// (0x0003e68b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd04,	// (0x0004d548) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd04,	// (0x0004d548) list_medium_line_x2_t4_g2_t

0x183c,	// (0x0003f080) list_medium_line_t3_right_iconx2_g1

0x16b2,	// (0x0003eef6) list_medium_line_t3_right_iconx2_g2

0x1844,	// (0x0003f088) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0d,	// (0x0004d551) list_medium_line_t3_right_iconx2_g

0x184e,	// (0x0003f092) list_medium_line_t3_right_iconx2_t1

0x185e,	// (0x0003f0a2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd14,	// (0x0004d558) list_medium_line_t3_right_iconx2_t

0x0dfa,	// (0x0003e63e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0dfa,	// (0x0003e63e) list_medium_line_x3_t4_g4_g1

0x0e06,	// (0x0003e64a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0e06,	// (0x0003e64a) list_medium_line_x3_t4_g4_g2

0x0fbe,	// (0x0003e802) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0fbe,	// (0x0003e802) list_medium_line_x3_t4_g4_g3

0x186c,	// (0x0003f0b0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x186c,	// (0x0003f0b0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd19,	// (0x0004d55d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd19,	// (0x0004d55d) list_medium_line_x3_t4_g4_g

0x1878,	// (0x0003f0bc) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1878,	// (0x0003f0bc) list_medium_line_x3_t4_g4_t1

0x188f,	// (0x0003f0d3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x188f,	// (0x0003f0d3) list_medium_line_x3_t4_g4_t2

0x0feb,	// (0x0003e82f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0feb,	// (0x0003e82f) list_medium_line_x3_t4_g4_t3

0x18a4,	// (0x0003f0e8) list_medium_line_x3_t4_g4_t4_ParamLimits

0x18a4,	// (0x0003f0e8) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd22,	// (0x0004d566) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd22,	// (0x0004d566) list_medium_line_x3_t4_g4_t

0x18c1,	// (0x0003f105) list_single_dyc_row_text_pane_t1_ParamLimits

0x18c1,	// (0x0003f105) list_single_dyc_row_text_pane_t1

0x18fe,	// (0x0003f142) list_single_dyc_row_text_pane_t2_ParamLimits

0x18fe,	// (0x0003f142) list_single_dyc_row_text_pane_t2

0x1958,	// (0x0003f19c) list_single_dyc_row_text_pane_t3_ParamLimits

0x1958,	// (0x0003f19c) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2b,	// (0x0004d56f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2b,	// (0x0004d56f) list_single_dyc_row_text_pane_t

0x196a,	// (0x0003f1ae) list_single_dyc_row_pane_g1_ParamLimits

0x196a,	// (0x0003f1ae) list_single_dyc_row_pane_g1

0x1976,	// (0x0003f1ba) list_single_dyc_row_pane_g2_ParamLimits

0x1976,	// (0x0003f1ba) list_single_dyc_row_pane_g2

0x1982,	// (0x0003f1c6) list_single_dyc_row_pane_g3_ParamLimits

0x1982,	// (0x0003f1c6) list_single_dyc_row_pane_g3

0x198e,	// (0x0003f1d2) list_single_dyc_row_pane_g4_ParamLimits

0x198e,	// (0x0003f1d2) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0004d576) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0004d576) list_single_dyc_row_pane_g

0x199a,	// (0x0003f1de) list_single_dyc_row_text_pane_ParamLimits

0x199a,	// (0x0003f1de) list_single_dyc_row_text_pane

0xa13a,	// (0x0004797e) bg_sp_fs_scroll_pane

0xe7a9,	// (0x0004bfed) thumb_sp_fs_scroll_pane

0x124b,	// (0x0003ea8f) list_medium_line_g1_ParamLimits

0x124b,	// (0x0003ea8f) list_medium_line_g1

0x19b9,	// (0x0003f1fd) list_medium_line_t1_ParamLimits

0x19b9,	// (0x0003f1fd) list_medium_line_t1

0x0dfa,	// (0x0003e63e) list_medium_line_x2_g1_ParamLimits

0x0dfa,	// (0x0003e63e) list_medium_line_x2_g1

0x0e06,	// (0x0003e64a) list_medium_line_x2_g2_ParamLimits

0x0e06,	// (0x0003e64a) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0004d57f) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0004d57f) list_medium_line_x2_g

0x19ce,	// (0x0003f212) list_medium_line_x2_t1_ParamLimits

0x19ce,	// (0x0003f212) list_medium_line_x2_t1

0x0dfa,	// (0x0003e63e) list_medium_line_x3_g1_ParamLimits

0x0dfa,	// (0x0003e63e) list_medium_line_x3_g1

0x0e06,	// (0x0003e64a) list_medium_line_x3_g2_ParamLimits

0x0e06,	// (0x0003e64a) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0004d57f) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0004d57f) list_medium_line_x3_g

0x19ce,	// (0x0003f212) list_medium_line_x3_t1_ParamLimits

0x19ce,	// (0x0003f212) list_medium_line_x3_t1

0xe7b2,	// (0x0004bff6) thumb_sp_fs_scroll_pane_g1

0xe7bb,	// (0x0004bfff) thumb_sp_fs_scroll_pane_g2

0xe7c4,	// (0x0004c008) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004d584) thumb_sp_fs_scroll_pane_g

0xe7b2,	// (0x0004bff6) bg_sp_fs_scroll_pane_g1

0xe7bb,	// (0x0004bfff) bg_sp_fs_scroll_pane_g2

0xe7c4,	// (0x0004c008) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004d584) bg_sp_fs_scroll_pane_g

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0dfa,	// (0x0003e63e) list_medium_line_x2_t3_g4_g1

0x0ea1,	// (0x0003e6e5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0ea1,	// (0x0003e6e5) list_medium_line_x2_t3_g4_g2

0x0e06,	// (0x0003e64a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0e06,	// (0x0003e64a) list_medium_line_x2_t3_g4_g3

0x0e12,	// (0x0003e656) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0e12,	// (0x0003e656) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0004cb11) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0004cb11) list_medium_line_x2_t3_g4_g

0x19e4,	// (0x0003f228) list_medium_line_x2_t3_g4_t1_ParamLimits

0x19e4,	// (0x0003f228) list_medium_line_x2_t3_g4_t1

0x19fa,	// (0x0003f23e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x19fa,	// (0x0003f23e) list_medium_line_x2_t3_g4_t2

0x0e47,	// (0x0003e68b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0e47,	// (0x0003e68b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0004d58b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0004d58b) list_medium_line_x2_t3_g4_t

0x124b,	// (0x0003ea8f) list_medium_line_g2_g1_ParamLimits

0x124b,	// (0x0003ea8f) list_medium_line_g2_g1

0x1257,	// (0x0003ea9b) list_medium_line_g2_g2_ParamLimits

0x1257,	// (0x0003ea9b) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0004d24a) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0004d24a) list_medium_line_g2_g

0x1a13,	// (0x0003f257) list_medium_line_g2_t1_ParamLimits

0x1a13,	// (0x0003f257) list_medium_line_g2_t1

0x124b,	// (0x0003ea8f) list_medium_line_t3_g2_g1_ParamLimits

0x124b,	// (0x0003ea8f) list_medium_line_t3_g2_g1

0x1257,	// (0x0003ea9b) list_medium_line_t3_g2_g2_ParamLimits

0x1257,	// (0x0003ea9b) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0004d24a) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0004d24a) list_medium_line_t3_g2_g

0x1a28,	// (0x0003f26c) list_medium_line_t3_g2_t1_ParamLimits

0x1a28,	// (0x0003f26c) list_medium_line_t3_g2_t1

0x1a3f,	// (0x0003f283) list_medium_line_t3_g2_t2_ParamLimits

0x1a3f,	// (0x0003f283) list_medium_line_t3_g2_t2

0x1a54,	// (0x0003f298) list_medium_line_t3_g2_t3_ParamLimits

0x1a54,	// (0x0003f298) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0004d592) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0004d592) list_medium_line_t3_g2_t

0x16b2,	// (0x0003eef6) list_medium_line_right_icon_g1

0x1a6d,	// (0x0003f2b1) list_medium_line_right_icon_t1

0x124b,	// (0x0003ea8f) list_medium_line_t2_g1_ParamLimits

0x124b,	// (0x0003ea8f) list_medium_line_t2_g1

0x1a7b,	// (0x0003f2bf) list_medium_line_t2_t1_ParamLimits

0x1a7b,	// (0x0003f2bf) list_medium_line_t2_t1

0x1a95,	// (0x0003f2d9) list_medium_line_t2_t2_ParamLimits

0x1a95,	// (0x0003f2d9) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0004d599) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0004d599) list_medium_line_t2_t

0x124b,	// (0x0003ea8f) list_medium_line_t3_g1_ParamLimits

0x124b,	// (0x0003ea8f) list_medium_line_t3_g1

0x1aaa,	// (0x0003f2ee) list_medium_line_t3_t1_ParamLimits

0x1aaa,	// (0x0003f2ee) list_medium_line_t3_t1

0x1ac4,	// (0x0003f308) list_medium_line_t3_t2_ParamLimits

0x1ac4,	// (0x0003f308) list_medium_line_t3_t2

0x1ada,	// (0x0003f31e) list_medium_line_t3_t3_ParamLimits

0x1ada,	// (0x0003f31e) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0004d59e) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0004d59e) list_medium_line_t3_t

0x124b,	// (0x0003ea8f) list_medium_line_g3_g1_ParamLimits

0x124b,	// (0x0003ea8f) list_medium_line_g3_g1

0x1aef,	// (0x0003f333) list_medium_line_g3_g2_ParamLimits

0x1aef,	// (0x0003f333) list_medium_line_g3_g2

0x1257,	// (0x0003ea9b) list_medium_line_g3_g3_ParamLimits

0x1257,	// (0x0003ea9b) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0004d5a5) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0004d5a5) list_medium_line_g3_g

0x1afb,	// (0x0003f33f) list_medium_line_g3_t1_ParamLimits

0x1afb,	// (0x0003f33f) list_medium_line_g3_t1

0x124b,	// (0x0003ea8f) list_medium_line_t2_g3_g1_ParamLimits

0x124b,	// (0x0003ea8f) list_medium_line_t2_g3_g1

0x1aef,	// (0x0003f333) list_medium_line_t2_g3_g2_ParamLimits

0x1aef,	// (0x0003f333) list_medium_line_t2_g3_g2

0x1257,	// (0x0003ea9b) list_medium_line_t2_g3_g3_ParamLimits

0x1257,	// (0x0003ea9b) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0004d5a5) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0004d5a5) list_medium_line_t2_g3_g

0x1b10,	// (0x0003f354) list_medium_line_t2_g3_t1_ParamLimits

0x1b10,	// (0x0003f354) list_medium_line_t2_g3_t1

0x1b27,	// (0x0003f36b) list_medium_line_t2_g3_t2_ParamLimits

0x1b27,	// (0x0003f36b) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0004d5ac) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0004d5ac) list_medium_line_t2_g3_t

0x124b,	// (0x0003ea8f) list_medium_line_t3_g3_g1_ParamLimits

0x124b,	// (0x0003ea8f) list_medium_line_t3_g3_g1

0x1aef,	// (0x0003f333) list_medium_line_t3_g3_g2_ParamLimits

0x1aef,	// (0x0003f333) list_medium_line_t3_g3_g2

0x1257,	// (0x0003ea9b) list_medium_line_t3_g3_g3_ParamLimits

0x1257,	// (0x0003ea9b) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0004d5a5) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0004d5a5) list_medium_line_t3_g3_g

0x1b3c,	// (0x0003f380) list_medium_line_t3_g3_t1_ParamLimits

0x1b3c,	// (0x0003f380) list_medium_line_t3_g3_t1

0x1b50,	// (0x0003f394) list_medium_line_t3_g3_t2_ParamLimits

0x1b50,	// (0x0003f394) list_medium_line_t3_g3_t2

0x1b62,	// (0x0003f3a6) list_medium_line_t3_g3_t3_ParamLimits

0x1b62,	// (0x0003f3a6) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0004d5b1) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0004d5b1) list_medium_line_t3_g3_t

0x183c,	// (0x0003f080) list_medium_line_right_iconx2_g1

0x16b2,	// (0x0003eef6) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004d5b8) list_medium_line_right_iconx2_g

0x1b76,	// (0x0003f3ba) list_medium_line_right_iconx2_t1

0x183c,	// (0x0003f080) list_medium_line_t2_right_iconx2_g1

0x16b2,	// (0x0003eef6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004d5b8) list_medium_line_t2_right_iconx2_g

0x1b84,	// (0x0003f3c8) list_medium_line_t2_right_iconx2_t1

0x1b94,	// (0x0003f3d8) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0004d5bd) list_medium_line_t2_right_iconx2_t

0x1ba2,	// (0x0003f3e6) list_medium_line_x4_t4_t1

0x1bb0,	// (0x0003f3f4) list_medium_line_x4_t4_t2

0x1bc0,	// (0x0003f404) list_medium_line_x4_t4_t3

0x1bd0,	// (0x0003f414) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0004d5c2) list_medium_line_x4_t4_t

0x9412,	// (0x00046c56) tport_appsw_pane_ParamLimits

0x9412,	// (0x00046c56) tport_appsw_pane

0x9420,	// (0x00046c64) tport_contact_pane_ParamLimits

0x9420,	// (0x00046c64) tport_contact_pane

0x9430,	// (0x00046c74) tport_listscroll_pane_ParamLimits

0x9430,	// (0x00046c74) tport_listscroll_pane

0x9440,	// (0x00046c84) cell_tport_appsw_pane_ParamLimits

0x9440,	// (0x00046c84) cell_tport_appsw_pane

0xcf0c,	// (0x0004a750) tport_appsw_pane_g1_ParamLimits

0xcf0c,	// (0x0004a750) tport_appsw_pane_g1

0xe7cd,	// (0x0004c011) tport_contact_pane_g1

0xe7d6,	// (0x0004c01a) tport_contact_pane_t1

0xe7e4,	// (0x0004c028) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0004d5cb) tport_contact_pane_t

0xe7f2,	// (0x0004c036) list_tport_pane

0xe7fb,	// (0x0004c03f) scroll_pane_cp_030

0x9475,	// (0x00046cb9) cell_tport_appsw_pane_g1

0x9485,	// (0x00046cc9) cell_tport_appsw_pane_t1

0xa13a,	// (0x0004797e) grid_highlight_pane_cp019

0x9493,	// (0x00046cd7) list_tport_double_graphic_pane_ParamLimits

0x9493,	// (0x00046cd7) list_tport_double_graphic_pane

0xa7ad,	// (0x00047ff1) list_highlight_pane_cp023_ParamLimits

0xa7ad,	// (0x00047ff1) list_highlight_pane_cp023

0x94a0,	// (0x00046ce4) list_tport_double_graphic_pane_g1_ParamLimits

0x94a0,	// (0x00046ce4) list_tport_double_graphic_pane_g1

0x94ad,	// (0x00046cf1) list_tport_double_graphic_pane_t1_ParamLimits

0x94ad,	// (0x00046cf1) list_tport_double_graphic_pane_t1

0x94c2,	// (0x00046d06) list_tport_double_graphic_pane_t2_ParamLimits

0x94c2,	// (0x00046d06) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0004d5d7) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0004d5d7) list_tport_double_graphic_pane_t

0xa13a,	// (0x0004797e) main_cale_note_pane

0x78fe,	// (0x00045142) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x78fe,	// (0x00045142) cell_vitu2_function_top_wide_pane_cp01

0x900b,	// (0x0004684f) wait_bar_pane_cp05_ParamLimits

0xa7ad,	// (0x00047ff1) listscroll_cmail_pane

0xe80c,	// (0x0004c050) list_cmail_pane

0x94de,	// (0x00046d22) list_cmail_body_pane

0x94f6,	// (0x00046d3a) list_single_cmail_header_caption_pane

0x9516,	// (0x00046d5a) list_single_cmail_header_detail_pane_ParamLimits

0x9516,	// (0x00046d5a) list_single_cmail_header_detail_pane

0x9548,	// (0x00046d8c) list_single_cmail_header_caption_pane_t1

0x1be0,	// (0x0003f424) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1be0,	// (0x0003f424) list_single_cmail_header_detail_pane_g1

0x1bf8,	// (0x0003f43c) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1bf8,	// (0x0003f43c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0004d5dc) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0004d5dc) list_single_cmail_header_detail_pane_g

0x1c04,	// (0x0003f448) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1c04,	// (0x0003f448) list_single_cmail_header_detail_pane_t1

0x1c76,	// (0x0003f4ba) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1c76,	// (0x0003f4ba) list_single_cmail_header_editor_pane_bg

0xe2cc,	// (0x0004bb10) list_cmail_body_pane_g1

0xe830,	// (0x0004c074) list_cmail_body_pane_t1

0xd671,	// (0x0004aeb5) list_single_cmail_header_editor_pane_bg_g1

0xad27,	// (0x0004856b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd681,	// (0x0004aec5) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd679,	// (0x0004aebd) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd89b,	// (0x0004b0df) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6a1,	// (0x0004aee5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd691,	// (0x0004aed5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd699,	// (0x0004aedd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad07,	// (0x0004854b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9563,	// (0x00046da7) calenote_gesture_pane_ParamLimits

0x9563,	// (0x00046da7) calenote_gesture_pane

0x957d,	// (0x00046dc1) calenote_window_pane_ParamLimits

0x957d,	// (0x00046dc1) calenote_window_pane

0xe83e,	// (0x0004c082) popup_note_window_cp01

0x9595,	// (0x00046dd9) calenote_swipe_1_pane_ParamLimits

0x9595,	// (0x00046dd9) calenote_swipe_1_pane

0x9363,	// (0x00046ba7) calenote_swipe_2_pane_ParamLimits

0x9363,	// (0x00046ba7) calenote_swipe_2_pane

0xe624,	// (0x0004be68) calenote_swipe_1_pane_g1_ParamLimits

0xe624,	// (0x0004be68) calenote_swipe_1_pane_g1

0xe631,	// (0x0004be75) calenote_swipe_1_pane_g2_ParamLimits

0xe631,	// (0x0004be75) calenote_swipe_1_pane_g2

0x0001,

0xfcc2,	// (0x0004d506) calenote_swipe_1_pane_g_ParamLimits

0xfcc2,	// (0x0004d506) calenote_swipe_1_pane_g

0xe850,	// (0x0004c094) calenote_swipe_1_pane_t1_ParamLimits

0xe850,	// (0x0004c094) calenote_swipe_1_pane_t1

0xe624,	// (0x0004be68) calenote_swipe_2_pane_g1_ParamLimits

0xe624,	// (0x0004be68) calenote_swipe_2_pane_g1

0xe86f,	// (0x0004c0b3) calenote_swipe_2_pane_g2_ParamLimits

0xe86f,	// (0x0004c0b3) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0004d5e8) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0004d5e8) calenote_swipe_2_pane_g

0xe87b,	// (0x0004c0bf) calenote_swipe_2_pane_t1_ParamLimits

0xe87b,	// (0x0004c0bf) calenote_swipe_2_pane_t1

0xa13a,	// (0x0004797e) main_mup_navstr_pane

0x663f,	// (0x00043e83) main_mup3_pane_t7_ParamLimits

0x663f,	// (0x00043e83) main_mup3_pane_t7

0x7042,	// (0x00044886) main_mp4_pane_g6_ParamLimits

0x7042,	// (0x00044886) main_mp4_pane_g6

0x73b2,	// (0x00044bf6) main_image3_pane_t4_ParamLimits

0x73b2,	// (0x00044bf6) main_image3_pane_t4

0x95a8,	// (0x00046dec) popup_navstr_preview_pane_ParamLimits

0x95a8,	// (0x00046dec) popup_navstr_preview_pane

0x95b4,	// (0x00046df8) scroll_navstr_pane_ParamLimits

0x95b4,	// (0x00046df8) scroll_navstr_pane

0xa13a,	// (0x0004797e) bg_popup_preview_window_pane_cp04

0xe8a2,	// (0x0004c0e6) popup_navstr_preview_pane_t1

0x95c0,	// (0x00046e04) scroll_navstr_pane_g1_ParamLimits

0x95c0,	// (0x00046e04) scroll_navstr_pane_g1

0x95cd,	// (0x00046e11) scroll_navstr_pane_t1_ParamLimits

0x95cd,	// (0x00046e11) scroll_navstr_pane_t1

0xe847,	// (0x0004c08b) bg_button_pane_cp014

0xe847,	// (0x0004c08b) bg_button_pane_cp030

0x1612,	// (0x0003ee56) list_double_fisheye_pane_g4_ParamLimits

0x1612,	// (0x0003ee56) list_double_fisheye_pane_g4

0x161e,	// (0x0003ee62) list_double_fisheye_pane_g5_ParamLimits

0x161e,	// (0x0003ee62) list_double_fisheye_pane_g5

0xe814,	// (0x0004c058) sp_fs_scroll_pane_cp03

0xe717,	// (0x0004bf5b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe723,	// (0x0004bf67) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdf,	// (0x0004d523) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe72f,	// (0x0004bf73) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x94d4,	// (0x00046d18) sp_fs_scroll_pane_cp02

0xaa0a,	// (0x0004824e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa0a,	// (0x0004824e) popup_sp_fs_calendar_preview_list_single_pane

0xa13a,	// (0x0004797e) main_cam6_pano_pane

0xa7ad,	// (0x00047ff1) main_mup3_pane_ParamLimits

0xa13a,	// (0x0004797e) main_phacti_pane

0x8ede,	// (0x00046722) bg_button_pane_cp11

0x8ef6,	// (0x0004673a) main_mobtv_info_pane_g2_ParamLimits

0x8ef6,	// (0x0004673a) main_mobtv_info_pane_g2

0x0001,

0xfc3f,	// (0x0004d483) main_mobtv_info_pane_g_ParamLimits

0xfc3f,	// (0x0004d483) main_mobtv_info_pane_g

0x90a8,	// (0x000468ec) sc_clock_pane_t5_ParamLimits

0x90a8,	// (0x000468ec) sc_clock_pane_t5

0x9151,	// (0x00046995) main_radioblah_pane_g1_ParamLimits

0xe570,	// (0x0004bdb4) main_radioblah_pane_t3_ParamLimits

0xe570,	// (0x0004bdb4) main_radioblah_pane_t3

0xe588,	// (0x0004bdcc) main_radioblah_pane_t4_ParamLimits

0xe588,	// (0x0004bdcc) main_radioblah_pane_t4

0x916f,	// (0x000469b3) main_radioblah_text_pane_ParamLimits

0x916f,	// (0x000469b3) main_radioblah_text_pane

0x917c,	// (0x000469c0) main_radioblah_info_pane_g1_ParamLimits

0x9215,	// (0x00046a59) main_radioblah_info_pane_t4_ParamLimits

0x9215,	// (0x00046a59) main_radioblah_info_pane_t4

0xa7ad,	// (0x00047ff1) main_sp_fs_calendar_pane

0x95df,	// (0x00046e23) main_phacti_pane_g1

0x95e7,	// (0x00046e2b) phacti_note_pane_ParamLimits

0x95e7,	// (0x00046e2b) phacti_note_pane

0xe8b9,	// (0x0004c0fd) phacti_term_pane_ParamLimits

0xe8b9,	// (0x0004c0fd) phacti_term_pane

0xe8ce,	// (0x0004c112) phacti_note_pane_t1_ParamLimits

0xe8ce,	// (0x0004c112) phacti_note_pane_t1

0x1c8d,	// (0x0003f4d1) phacti_term_pane_g1

0x1c95,	// (0x0003f4d9) phacti_term_pane_t1_ParamLimits

0x1c95,	// (0x0003f4d9) phacti_term_pane_t1

0xe8e5,	// (0x0004c129) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8ed,	// (0x0004c131) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0004d5f2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8f5,	// (0x0004c139) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8f5,	// (0x0004c139) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe90b,	// (0x0004c14f) aid_popup_sp_fs_bg_corner_pane

0xcc77,	// (0x0004a4bb) popup_sp_fs_calendar_preview_bg_pane_g1

0xa13a,	// (0x0004797e) popup_sp_fs_calendar_preview_bg_pane

0xe913,	// (0x0004c157) popup_sp_fs_calendar_preview_list_pane

0xc826,	// (0x0004a06a) bg_main_sp_fs_cale_pane_ParamLimits

0xc826,	// (0x0004a06a) bg_main_sp_fs_cale_pane

0x1cc8,	// (0x0003f50c) listscroll_cale_mrui_pane_ParamLimits

0x1cc8,	// (0x0003f50c) listscroll_cale_mrui_pane

0x1cdd,	// (0x0003f521) listscroll_sp_fs_schedule_track_pane

0x1ce6,	// (0x0003f52a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1ce6,	// (0x0003f52a) main_sp_fs_ctrlbar_pane_cp01

0xe91b,	// (0x0004c15f) main_sp_fs_ribbon_pane

0x1cf9,	// (0x0003f53d) popup_sp_fs_cale_preview_window

0xebc0,	// (0x0004c404) list_single_sp_fs_schedule_track_pane_ParamLimits

0xebc0,	// (0x0004c404) list_single_sp_fs_schedule_track_pane

0x230e,	// (0x0003fb52) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x230e,	// (0x0003fb52) bg_sp_fs_highlight_list_pane_cp03

0x9646,	// (0x00046e8a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9646,	// (0x00046e8a) list_single_sp_fs_schedule_track_pane_g1

0x9652,	// (0x00046e96) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9652,	// (0x00046e96) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0004d5f7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0004d5f7) list_single_sp_fs_schedule_track_pane_g

0x965e,	// (0x00046ea2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x965e,	// (0x00046ea2) list_single_sp_fs_schedule_track_pane_t1

0x967c,	// (0x00046ec0) sp_fs_schedule_track_pane_ParamLimits

0x967c,	// (0x00046ec0) sp_fs_schedule_track_pane

0xe923,	// (0x0004c167) sp_fs_schedule_track_pane_g1

0xe92b,	// (0x0004c16f) sp_fs_schedule_track_pane_g2

0xe933,	// (0x0004c177) sp_fs_schedule_track_pane_g3

0xe93b,	// (0x0004c17f) sp_fs_schedule_track_pane_g4

0xe943,	// (0x0004c187) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0004d5fc) sp_fs_schedule_track_pane_g

0xd671,	// (0x0004aeb5) bg_sp_fs_schedule_viewer_highlight_g1

0xad27,	// (0x0004856b) bg_sp_fs_schedule_viewer_highlight_g2

0xd679,	// (0x0004aebd) bg_sp_fs_schedule_viewer_highlight_g3

0xd681,	// (0x0004aec5) bg_sp_fs_schedule_viewer_highlight_g4

0xd89b,	// (0x0004b0df) bg_sp_fs_schedule_viewer_highlight_g5

0xd691,	// (0x0004aed5) bg_sp_fs_schedule_viewer_highlight_g6

0xd699,	// (0x0004aedd) bg_sp_fs_schedule_viewer_highlight_g7

0xd6a1,	// (0x0004aee5) bg_sp_fs_schedule_viewer_highlight_g8

0xad07,	// (0x0004854b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0004d607) bg_sp_fs_schedule_viewer_highlight_g

0xa13a,	// (0x0004797e) bg_main_sp_fs_ribbon_pane

0x968e,	// (0x00046ed2) main_sp_fs_ribbon_pane_g1

0xe94b,	// (0x0004c18f) main_sp_fs_ribbon_pane_t1

0x9697,	// (0x00046edb) main_sp_fs_ribbon_pane_t2

0xe95a,	// (0x0004c19e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0004d61a) main_sp_fs_ribbon_pane_t

0xe969,	// (0x0004c1ad) main_sp_fs_ribbon_scheduler_pane

0xe971,	// (0x0004c1b5) bg_main_sp_fs_ribbon_pane_g1

0xe97a,	// (0x0004c1be) bg_main_sp_fs_ribbon_pane_g2

0xe983,	// (0x0004c1c7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0004d621) bg_main_sp_fs_ribbon_pane_g

0xe98b,	// (0x0004c1cf) main_sp_fs_ribbon_scheduler_pane_g1

0xe994,	// (0x0004c1d8) main_sp_fs_ribbon_scheduler_pane_g2

0xe99d,	// (0x0004c1e1) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0004d628) main_sp_fs_ribbon_scheduler_pane_g

0xe9a6,	// (0x0004c1ea) list_cale_mrui_pane

0x96a6,	// (0x00046eea) sp_fs_scroll_pane_cp07_ParamLimits

0x96a6,	// (0x00046eea) sp_fs_scroll_pane_cp07

0x96c2,	// (0x00046f06) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x96c2,	// (0x00046f06) bg_sp_fs_schedule_viewer_highlight

0xe9b3,	// (0x0004c1f7) list_single_sp_fs_schedule_track_pane_cp01

0xe9bb,	// (0x0004c1ff) list_sp_fs_schedule_track_pane

0xe9c3,	// (0x0004c207) sp_fs_scroll_pane_cp06_ParamLimits

0xe9c3,	// (0x0004c207) sp_fs_scroll_pane_cp06

0xcc77,	// (0x0004a4bb) bgmain_sp_fs_calendar_pane_g1

0x1d0b,	// (0x0003f54f) list_single_cale_mrui_pane_ParamLimits

0x1d0b,	// (0x0003f54f) list_single_cale_mrui_pane

0x1d20,	// (0x0003f564) list_single_cale_mrui_row_pane_ParamLimits

0x1d20,	// (0x0003f564) list_single_cale_mrui_row_pane

0x1d36,	// (0x0003f57a) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1d36,	// (0x0003f57a) list_single_cale_mrui_row_pane_g1

0x1d6e,	// (0x0003f5b2) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1d6e,	// (0x0003f5b2) list_single_cale_mrui_row_pane_t1

0x1d80,	// (0x0003f5c4) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1d80,	// (0x0003f5c4) list_single_cale_mrui_row_pane_t2

0x1de6,	// (0x0003f62a) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1de6,	// (0x0003f62a) list_single_cale_mrui_row_pane_t3

0x1e15,	// (0x0003f659) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1e15,	// (0x0003f659) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0004d636) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0004d636) list_single_cale_mrui_row_pane_t

0x1e44,	// (0x0003f688) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1e44,	// (0x0003f688) list_single_cmail_header_editor_pane_bg_cp01

0x1e68,	// (0x0003f6ac) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1e68,	// (0x0003f6ac) list_single_cmail_header_editor_pane_bg_cp02

0x96cf,	// (0x00046f13) main_radioblah_text_pane_t1_ParamLimits

0x96cf,	// (0x00046f13) main_radioblah_text_pane_t1

0xe9e2,	// (0x0004c226) cam6_indi_pane_cp01

0xe9ea,	// (0x0004c22e) cam6_mode_pane_cp01

0xe9f2,	// (0x0004c236) cam6_pano_pane

0xe9fb,	// (0x0004c23f) cam6_zoom_pane_cp01

0xea05,	// (0x0004c249) cam6_pano_image_pane

0xea0e,	// (0x0004c252) cam6_pano_pane_g1

0xe2cc,	// (0x0004bb10) cam6_pano_pane_g2

0xea17,	// (0x0004c25b) cam6_pano_pane_g3

0xea20,	// (0x0004c264) cam6_pano_pane_g4

0xd1f1,	// (0x0004aa35) cam6_pano_pane_g5

0xea29,	// (0x0004c26d) cam6_pano_pane_g6

0xea31,	// (0x0004c275) cam6_pano_pane_g7

0xea39,	// (0x0004c27d) cam6_pano_pane_g8

0xea42,	// (0x0004c286) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0004d63f) cam6_pano_pane_g

0xa13a,	// (0x0004797e) main_browser_tag_pane

0xe89a,	// (0x0004c0de) grid_navstr_albumart_pane

0xea4d,	// (0x0004c291) cell_navstr_albumart_pane_ParamLimits

0xea4d,	// (0x0004c291) cell_navstr_albumart_pane

0xea6c,	// (0x0004c2b0) cell_navstr_albumart_pane_g1

0xc633,	// (0x00049e77) cell_navstr_albumart_pane_g2

0xc643,	// (0x00049e87) cell_navstr_albumart_pane_g3

0xc63b,	// (0x00049e7f) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0004d652) cell_navstr_albumart_pane_g

0x96e9,	// (0x00046f2d) bt_list_pane_ParamLimits

0x96e9,	// (0x00046f2d) bt_list_pane

0x9702,	// (0x00046f46) bt_list_pane_t1

0x9711,	// (0x00046f55) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0004d65b) bt_list_pane_t

0xa13a,	// (0x0004797e) main_cale_prevew_pane

0x9720,	// (0x00046f64) popup_cale_preview_window_ParamLimits

0x9720,	// (0x00046f64) popup_cale_preview_window

0xa7ad,	// (0x00047ff1) bg_popup_preview_window_pane_cp05_ParamLimits

0xa7ad,	// (0x00047ff1) bg_popup_preview_window_pane_cp05

0xea74,	// (0x0004c2b8) list_cale_preview_pane_ParamLimits

0xea74,	// (0x0004c2b8) list_cale_preview_pane

0x973b,	// (0x00046f7f) list_double_cale_preview_pane_ParamLimits

0x973b,	// (0x00046f7f) list_double_cale_preview_pane

0x974f,	// (0x00046f93) list_single_cale_preview_pane_ParamLimits

0x974f,	// (0x00046f93) list_single_cale_preview_pane

0x9767,	// (0x00046fab) list_single_cale_preview_pane_g1

0x976f,	// (0x00046fb3) list_single_cale_preview_pane_t1_ParamLimits

0x976f,	// (0x00046fb3) list_single_cale_preview_pane_t1

0x9784,	// (0x00046fc8) list_double_cale_preview_pane_g1

0x978c,	// (0x00046fd0) list_double_cale_preview_pane_t1_ParamLimits

0x978c,	// (0x00046fd0) list_double_cale_preview_pane_t1

0x97a1,	// (0x00046fe5) list_double_cale_preview_pane_t2_ParamLimits

0x97a1,	// (0x00046fe5) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0004d660) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0004d660) list_double_cale_preview_pane_t

0xa13a,	// (0x0004797e) main_ezdial_pane

0xa7ad,	// (0x00047ff1) main_sp_fs_email_pane_ParamLimits

0x937d,	// (0x00046bc1) cmail_ddmenu_btn01_pane_ParamLimits

0x937d,	// (0x00046bc1) cmail_ddmenu_btn01_pane

0x939a,	// (0x00046bde) cmail_ddmenu_btn02_pane_ParamLimits

0x939a,	// (0x00046bde) cmail_ddmenu_btn02_pane

0x93b8,	// (0x00046bfc) cmail_ddmenu_btn03_pane_ParamLimits

0x93b8,	// (0x00046bfc) cmail_ddmenu_btn03_pane

0x16d8,	// (0x0003ef1c) main_sp_fs_ctrlbar_pane_ParamLimits

0x16f2,	// (0x0003ef36) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x94de,	// (0x00046d22) list_cmail_body_pane_ParamLimits

0x9558,	// (0x00046d9c) bg_button_pane_cp12

0xe823,	// (0x0004c067) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe823,	// (0x0004c067) list_single_cmail_header_detail_pane_g3

0x1c52,	// (0x0003f496) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1c52,	// (0x0003f496) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0004d5e3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0004d5e3) list_single_cmail_header_detail_pane_t

0x1caa,	// (0x0003f4ee) phacti_term_pane_t2_ParamLimits

0x1caa,	// (0x0003f4ee) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0004d5ed) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0004d5ed) phacti_term_pane_t

0xea80,	// (0x0004c2c4) aid_size_list_single_double

0x97b9,	// (0x00046ffd) popup_ezdial_listscroll_window

0x97db,	// (0x0004701f) popup_number_entry_window_cp01

0xb41b,	// (0x00048c5f) bg_popup_call_pane_cp09

0xea8c,	// (0x0004c2d0) ezdial_list_pane

0xea94,	// (0x0004c2d8) scroll_pane_cp23

0xca56,	// (0x0004a29a) bg_button_pane_cp028_ParamLimits

0xca56,	// (0x0004a29a) bg_button_pane_cp028

0x97e9,	// (0x0004702d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x97e9,	// (0x0004702d) cmail_ddmenu_btn01_pane_g1

0x97fb,	// (0x0004703f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x97fb,	// (0x0004703f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0004d665) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0004d665) cmail_ddmenu_btn01_pane_g

0xea9c,	// (0x0004c2e0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea9c,	// (0x0004c2e0) cmail_ddmenu_btn01_pane_t1

0xc826,	// (0x0004a06a) bg_button_pane_cp029_ParamLimits

0xc826,	// (0x0004a06a) bg_button_pane_cp029

0x97fb,	// (0x0004703f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x97fb,	// (0x0004703f) cmail_ddmenu_btn02_pane_g1

0x9813,	// (0x00047057) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9813,	// (0x00047057) cmail_ddmenu_btn02_pane_t1

0x230e,	// (0x0003fb52) bg_button_pane_cp031_ParamLimits

0x230e,	// (0x0003fb52) bg_button_pane_cp031

0x97fb,	// (0x0004703f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x97fb,	// (0x0004703f) cmail_ddmenu_btn03_pane_g1

0x9813,	// (0x00047057) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9813,	// (0x00047057) cmail_ddmenu_btn03_pane_t1

0x725b,	// (0x00044a9f) cell_dialer2_keypad_pane_t1_ParamLimits

0x7275,	// (0x00044ab9) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7275,	// (0x00044ab9) cell_dialer2_keypad_pane_t1_copy1

0x8d4f,	// (0x00046593) ncimui_group_button_pane

0xa7ad,	// (0x00047ff1) main_sp_fs_calendar_pane_ParamLimits

0x94f6,	// (0x00046d3a) list_single_cmail_header_caption_pane_ParamLimits

0x1cbf,	// (0x0003f503) aid_recal_txt_sm_pane

0xa13a,	// (0x0004797e) mian_recal_day_pane

0x1cf9,	// (0x0003f53d) popup_sp_fs_cale_preview_window_ParamLimits

0xeab1,	// (0x0004c2f5) list_recal_day_pane

0x1ea0,	// (0x0003f6e4) list_single_recal_day_pane_ParamLimits

0x1ea0,	// (0x0003f6e4) list_single_recal_day_pane

0xead8,	// (0x0004c31c) list_single_recal_day_pane_g1_ParamLimits

0xead8,	// (0x0004c31c) list_single_recal_day_pane_g1

0x1eb2,	// (0x0003f6f6) list_single_recal_day_pane_g2_ParamLimits

0x1eb2,	// (0x0003f6f6) list_single_recal_day_pane_g2

0x1ebe,	// (0x0003f702) list_single_recal_day_pane_g3_ParamLimits

0x1ebe,	// (0x0003f702) list_single_recal_day_pane_g3

0x1eca,	// (0x0003f70e) list_single_recal_day_pane_g4_ParamLimits

0x1eca,	// (0x0003f70e) list_single_recal_day_pane_g4

0x1ed8,	// (0x0003f71c) list_single_recal_day_pane_g5_ParamLimits

0x1ed8,	// (0x0003f71c) list_single_recal_day_pane_g5

0x1eee,	// (0x0003f732) list_single_recal_day_pane_g6_ParamLimits

0x1eee,	// (0x0003f732) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0004d674) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0004d674) list_single_recal_day_pane_g

0x1f02,	// (0x0003f746) list_single_recal_day_pane_t1

0x1f14,	// (0x0003f758) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0004d67f) list_single_recal_day_pane_t

0x9837,	// (0x0004707b) ncimui_query_button_pane_ParamLimits

0x9837,	// (0x0004707b) ncimui_query_button_pane

0x9847,	// (0x0004708b) ncimui_query_button_pane_t1_ParamLimits

0x9847,	// (0x0004708b) ncimui_query_button_pane_t1

0xeae4,	// (0x0004c328) ncimui_query_button_pane_t2_ParamLimits

0xeae4,	// (0x0004c328) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0004d684) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0004d684) ncimui_query_button_pane_t

0x985a,	// (0x0004709e) query_button_pane_ParamLimits

0x985a,	// (0x0004709e) query_button_pane

0xa13a,	// (0x0004797e) bg_button_pane_cp0028

0xeaf7,	// (0x0004c33b) query_button_pane_t1

0x566b,	// (0x00042eaf) main_tport_pane_ParamLimits

0x93e8,	// (0x00046c2c) bg_popup_window_pane_cp01_ParamLimits

0x93e8,	// (0x00046c2c) bg_popup_window_pane_cp01

0x93f6,	// (0x00046c3a) heading_pane_cp08_ParamLimits

0x93f6,	// (0x00046c3a) heading_pane_cp08

0x9404,	// (0x00046c48) heading_pane_cp07_ParamLimits

0x9404,	// (0x00046c48) heading_pane_cp07

0x9475,	// (0x00046cb9) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0004d5d0) cell_tport_appsw_pane_g

0x1015,	// (0x0003e859) input_candi_list_open_g1

0xaed3,	// (0x00048717) list_cale_time_pane_g6_ParamLimits

0xaed3,	// (0x00048717) list_cale_time_pane_g6

0x60f6,	// (0x0004393a) aid_size_touch_calib_1_ParamLimits

0x60f6,	// (0x0004393a) aid_size_touch_calib_1

0x6102,	// (0x00043946) aid_size_touch_calib_2_ParamLimits

0x6102,	// (0x00043946) aid_size_touch_calib_2

0x6110,	// (0x00043954) aid_size_touch_calib_3_ParamLimits

0x6110,	// (0x00043954) aid_size_touch_calib_3

0x6120,	// (0x00043964) aid_size_touch_calib_4_ParamLimits

0x6120,	// (0x00043964) aid_size_touch_calib_4

0x612e,	// (0x00043972) main_touch_calib_button_group_pane_ParamLimits

0x612e,	// (0x00043972) main_touch_calib_button_group_pane

0x613c,	// (0x00043980) main_touch_calib_pane_g1_ParamLimits

0x6148,	// (0x0004398c) main_touch_calib_pane_g2_ParamLimits

0x6154,	// (0x00043998) main_touch_calib_pane_g3_ParamLimits

0x6160,	// (0x000439a4) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0004cfa0) main_touch_calib_pane_g_ParamLimits

0x616c,	// (0x000439b0) main_touch_calib_pane_t1_ParamLimits

0x6183,	// (0x000439c7) main_touch_calib_pane_t2_ParamLimits

0x619c,	// (0x000439e0) main_touch_calib_pane_t3_ParamLimits

0x61b2,	// (0x000439f6) main_touch_calib_pane_t4_ParamLimits

0x61c8,	// (0x00043a0c) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0004cfa9) main_touch_calib_pane_t_ParamLimits

0xcfa7,	// (0x0004a7eb) list_single_fp_cale_pane_g3_ParamLimits

0xcfa7,	// (0x0004a7eb) list_single_fp_cale_pane_g3

0xa7ad,	// (0x00047ff1) bg_button_pane_cp012_ParamLimits

0xa7ad,	// (0x00047ff1) bg_vkb2_func_pane_cp03_ParamLimits

0x805b,	// (0x0004589f) cell_vitu2_function_top_pane_g1_ParamLimits

0xa7ad,	// (0x00047ff1) bg_vkb2_func_pane_cp04_ParamLimits

0x8cd5,	// (0x00046519) main_ncimui_button_group_pane_ParamLimits

0x8cd5,	// (0x00046519) main_ncimui_button_group_pane

0x8d3d,	// (0x00046581) main_ncimui_pane_t3_ParamLimits

0x8d3d,	// (0x00046581) main_ncimui_pane_t3

0xe8b0,	// (0x0004c0f4) phacti_button_group_pane

0xea80,	// (0x0004c2c4) aid_size_list_single_double_ParamLimits

0x97b9,	// (0x00046ffd) popup_ezdial_listscroll_window_ParamLimits

0x97db,	// (0x0004701f) popup_number_entry_window_cp01_ParamLimits

0x9867,	// (0x000470ab) phacti_button_pane_ParamLimits

0x9867,	// (0x000470ab) phacti_button_pane

0xa13a,	// (0x0004797e) bg_button_pane_cp14

0xeb05,	// (0x0004c349) phacti_button_pane_t1

0x9878,	// (0x000470bc) main_touch_calib_button_pane_ParamLimits

0x9878,	// (0x000470bc) main_touch_calib_button_pane

0xa8f4,	// (0x00048138) bg_button_pane_cp18_ParamLimits

0xa8f4,	// (0x00048138) bg_button_pane_cp18

0xeb13,	// (0x0004c357) main_touch_calib_button_pane_t1_ParamLimits

0xeb13,	// (0x0004c357) main_touch_calib_button_pane_t1

0xeb29,	// (0x0004c36d) main_touch_calib_button_pane_t2_ParamLimits

0xeb29,	// (0x0004c36d) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0004d689) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0004d689) main_touch_calib_button_pane_t

0xa13a,	// (0x0004797e) cell_ncimui_button_pane

0xa13a,	// (0x0004797e) bg_button_pane_cp032

0xeb47,	// (0x0004c38b) cell_ncimui_button_pane_t1

0x72d1,	// (0x00044b15) image3_infobar_pane_ParamLimits

0x72d1,	// (0x00044b15) image3_infobar_pane

0x90ca,	// (0x0004690e) fs_bigclock_status_pane_ParamLimits

0x90ca,	// (0x0004690e) fs_bigclock_status_pane

0x90d7,	// (0x0004691b) main_fs_bigclock_clock_pane_ParamLimits

0x90d7,	// (0x0004691b) main_fs_bigclock_clock_pane

0x90ed,	// (0x00046931) main_fs_bigclock_indi_pane_ParamLimits

0x90ed,	// (0x00046931) main_fs_bigclock_indi_pane

0x911f,	// (0x00046963) main_fs_bigclock_swipe_pane_ParamLimits

0x911f,	// (0x00046963) main_fs_bigclock_swipe_pane

0xa13a,	// (0x0004797e) main_fs_clock_dumped_data

0xe3d9,	// (0x0004bc1d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3d9,	// (0x0004bc1d) list_single_fs_bigclock_indicator_pane_g1

0xe403,	// (0x0004bc47) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe403,	// (0x0004bc47) list_single_fs_bigclock_indicator_pane_g2

0xe41d,	// (0x0004bc61) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe41d,	// (0x0004bc61) list_single_fs_bigclock_indicator_pane_g3

0xe437,	// (0x0004bc7b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe437,	// (0x0004bc7b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc73,	// (0x0004d4b7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc73,	// (0x0004d4b7) list_single_fs_bigclock_indicator_pane_g

0xe462,	// (0x0004bca6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe462,	// (0x0004bca6) list_single_fs_bigclock_indicator_pane_t1

0xe48a,	// (0x0004bcce) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe48a,	// (0x0004bcce) list_single_fs_bigclock_indicator_pane_t2

0xe4b2,	// (0x0004bcf6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4b2,	// (0x0004bcf6) list_single_fs_bigclock_indicator_pane_t3

0xe4da,	// (0x0004bd1e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4da,	// (0x0004bd1e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7e,	// (0x0004d4c2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7e,	// (0x0004d4c2) list_single_fs_bigclock_indicator_pane_t

0xeb55,	// (0x0004c399) image3_infobar_fav_pane_ParamLimits

0xeb55,	// (0x0004c399) image3_infobar_fav_pane

0xeb65,	// (0x0004c3a9) image3_infobar_loc_pane_ParamLimits

0xeb65,	// (0x0004c3a9) image3_infobar_loc_pane

0xeb7b,	// (0x0004c3bf) image3_infobar_time_pane_ParamLimits

0xeb7b,	// (0x0004c3bf) image3_infobar_time_pane

0xcc77,	// (0x0004a4bb) image3_infobar_time_pane_g1

0xeb8b,	// (0x0004c3cf) image3_infobar_time_pane_t1

0xcc77,	// (0x0004a4bb) image3_infobar_loc_pane_g1

0xeb99,	// (0x0004c3dd) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0004d68e) image3_infobar_loc_pane_g

0xeba1,	// (0x0004c3e5) image3_infobar_loc_pane_t1

0xcc77,	// (0x0004a4bb) image3_infobar_fav_pane_g1

0xebaf,	// (0x0004c3f3) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0004d693) image3_infobar_fav_pane_g

0xebb7,	// (0x0004c3fb) fs_bigclock_status_battery_pane

0xebd4,	// (0x0004c418) fs_bigclock_status_signal_pane

0xebdd,	// (0x0004c421) fs_bigclock_status_title_pane

0xebe6,	// (0x0004c42a) fs_bigclock_status_signal_pane_g1

0xebef,	// (0x0004c433) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0004d698) fs_bigclock_status_signal_pane_g

0xebf7,	// (0x0004c43b) fs_bigclock_status_battery_pane_g1

0xec00,	// (0x0004c444) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0004d69d) fs_bigclock_status_battery_pane_g

0xec08,	// (0x0004c44c) fs_bigclock_status_title_pane_t1

0xcc77,	// (0x0004a4bb) main_fs_bigclock_clock_pane_g1

0xec16,	// (0x0004c45a) main_fs_bigclock_clock_pane_g2

0xec16,	// (0x0004c45a) main_fs_bigclock_clock_pane_g3

0xec16,	// (0x0004c45a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0004d6a2) main_fs_bigclock_clock_pane_g

0xec1e,	// (0x0004c462) main_fs_bigclock_clock_pane_t1

0xec2c,	// (0x0004c470) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0004d6ab) main_fs_bigclock_clock_pane_t

0x9888,	// (0x000470cc) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9888,	// (0x000470cc) list_single_fs_bigclock_indicator_pane

0x9899,	// (0x000470dd) list_single_fs_bigclock_pane_ParamLimits

0x9899,	// (0x000470dd) list_single_fs_bigclock_pane

0xec44,	// (0x0004c488) main_fs_bigclock_indicator_pane_t1

0xec53,	// (0x0004c497) list_single_fs_bigclock_pane_g1

0xec5b,	// (0x0004c49f) list_single_fs_bigclock_pane_t1

0xcc77,	// (0x0004a4bb) main_fs_bigclock_swipe_pane_g1

0xec9e,	// (0x0004c4e2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0004d6bc) main_fs_bigclock_swipe_pane_g

0xeca6,	// (0x0004c4ea) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeca6,	// (0x0004c4ea) main_fs_bigclock_swipe_pane_t1

0x4533,	// (0x00041d77) call_type_pane_ParamLimits

0xa13a,	// (0x0004797e) main_btmg_pane

0x1d62,	// (0x0003f5a6) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1d62,	// (0x0003f5a6) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0004d62f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0004d62f) list_single_cale_mrui_row_pane_g

0x1e8e,	// (0x0003f6d2) list_recal_vselct_arw_lo_pane

0xead0,	// (0x0004c314) list_recal_vselct_arw_up_pane

0x1e96,	// (0x0003f6da) list_recal_vselct_pane

0x98ef,	// (0x00047133) btmg_button_pane

0x98fb,	// (0x0004713f) main_btmg_pane_g1

0xa13a,	// (0x0004797e) bg_button_pane_cp044

0xecc3,	// (0x0004c507) btmg_button_pane_t1

0xc812,	// (0x0004a056) aid_listscroll_gen

0xa7ad,	// (0x00047ff1) main_cntbar_detail_pane

0xe804,	// (0x0004c048) list_cmail_folder_pane

0xe814,	// (0x0004c058) sp_fs_scroll_pane_cp03_ParamLimits

0x1f26,	// (0x0003f76a) list_single_fs_dyc_pane_cp01_ParamLimits

0x1f26,	// (0x0003f76a) list_single_fs_dyc_pane_cp01

0xecd1,	// (0x0004c515) aid_size_cmail_indent

0x1f44,	// (0x0003f788) list_single_dyc_row_pane_cp01

0x9923,	// (0x00047167) cntbar_detail_list_pane_ParamLimits

0x9923,	// (0x00047167) cntbar_detail_list_pane

0x9963,	// (0x000471a7) main_cntbar_detail_cont_pane_ParamLimits

0x9963,	// (0x000471a7) main_cntbar_detail_cont_pane

0x4527,	// (0x00041d6b) scroll_pane_cp032_ParamLimits

0x4527,	// (0x00041d6b) scroll_pane_cp032

0x996f,	// (0x000471b3) cntbar_detail_list_event_pane_ParamLimits

0x996f,	// (0x000471b3) cntbar_detail_list_event_pane

0x9931,	// (0x00047175) cntbar_detail_list_shct_pane

0xad75,	// (0x000485b9) aid_list_gen

0xecda,	// (0x0004c51e) aid_scroll

0xece3,	// (0x0004c527) aid_size_touch_scroll_bar

0x859f,	// (0x00045de3) aid_list_double

0xecec,	// (0x0004c530) aid_list_single

0x14b2,	// (0x0003ecf6) aid_list_single_lg

0x1f4d,	// (0x0003f791) aid_list_z_g_a_sm

0x1f55,	// (0x0003f799) aid_list_z_g_d

0x1f5d,	// (0x0003f7a1) aid_txt_z_prm

0x1f6d,	// (0x0003f7b1) aid_txt_z_prm_cp01

0x1f7b,	// (0x0003f7bf) aid_txt_z_sec

0x997f,	// (0x000471c3) main_cntbar_detail_cont_pane_g1_ParamLimits

0x997f,	// (0x000471c3) main_cntbar_detail_cont_pane_g1

0x998c,	// (0x000471d0) main_cntbar_detail_cont_pane_g2_ParamLimits

0x998c,	// (0x000471d0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0004d6c1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0004d6c1) main_cntbar_detail_cont_pane_g

0xecf5,	// (0x0004c539) main_cntbar_detail_cont_pane_t1

0xed03,	// (0x0004c547) main_cntbar_detail_cont_pane_t2

0xed11,	// (0x0004c555) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0004d6c6) main_cntbar_detail_cont_pane_t

0x9998,	// (0x000471dc) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9998,	// (0x000471dc) cell_cntbar_detail_list_shct_pane

0xed1f,	// (0x0004c563) cntbar_detail_list_shct_pane_g1

0xed28,	// (0x0004c56c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0004d6cd) cntbar_detail_list_shct_pane_g

0x99ac,	// (0x000471f0) cntbar_detail_list_event_pane_g1_ParamLimits

0x99ac,	// (0x000471f0) cntbar_detail_list_event_pane_g1

0x99b8,	// (0x000471fc) cntbar_detail_list_event_pane_g2_ParamLimits

0x99b8,	// (0x000471fc) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0004d6d2) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0004d6d2) cntbar_detail_list_event_pane_g

0x9a26,	// (0x0004726a) cntbar_detail_list_event_pane_t1_ParamLimits

0x9a26,	// (0x0004726a) cntbar_detail_list_event_pane_t1

0x9a3b,	// (0x0004727f) cntbar_detail_list_event_pane_t2_ParamLimits

0x9a3b,	// (0x0004727f) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0004d6df) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0004d6df) cntbar_detail_list_event_pane_t

0xcc77,	// (0x0004a4bb) cell_cntbar_detail_list_shct_pane_g1

0x4906,	// (0x0004214a) navi_pane_mv_g3

0xa7ad,	// (0x00047ff1) main_cntbar_detail_pane_ParamLimits

0xa13a,	// (0x0004797e) main_notif_wgt_pane

0x6f7b,	// (0x000447bf) aid_tch_main_mp4_pane_g4

0x71ba,	// (0x000449fe) popup_slider_window_cp02

0x1e84,	// (0x0003f6c8) list_recal_day_event_pane

0x9903,	// (0x00047147) cntbar_detail_btn_pane_ParamLimits

0x9903,	// (0x00047147) cntbar_detail_btn_pane

0x9913,	// (0x00047157) cntbar_detail_btn_pane_cp01_ParamLimits

0x9913,	// (0x00047157) cntbar_detail_btn_pane_cp01

0x9931,	// (0x00047175) cntbar_detail_list_shct_pane_ParamLimits

0x993d,	// (0x00047181) cntbar_detail_pane_g1_ParamLimits

0x993d,	// (0x00047181) cntbar_detail_pane_g1

0x994d,	// (0x00047191) cntbar_detail_pane_t1_ParamLimits

0x994d,	// (0x00047191) cntbar_detail_pane_t1

0x99c4,	// (0x00047208) cntbar_detail_list_event_pane_g3_ParamLimits

0x99c4,	// (0x00047208) cntbar_detail_list_event_pane_g3

0x99dc,	// (0x00047220) cntbar_detail_list_event_pane_g4_ParamLimits

0x99dc,	// (0x00047220) cntbar_detail_list_event_pane_g4

0x99f4,	// (0x00047238) cntbar_detail_list_event_pane_g5_ParamLimits

0x99f4,	// (0x00047238) cntbar_detail_list_event_pane_g5

0x9a0c,	// (0x00047250) cntbar_detail_list_event_pane_g6_ParamLimits

0x9a0c,	// (0x00047250) cntbar_detail_list_event_pane_g6

0x9a50,	// (0x00047294) cntbar_detail_list_event_pane_t3_ParamLimits

0x9a50,	// (0x00047294) cntbar_detail_list_event_pane_t3

0x9a62,	// (0x000472a6) popup_notif_wgt_window_ParamLimits

0x9a62,	// (0x000472a6) popup_notif_wgt_window

0x9a72,	// (0x000472b6) popup_submenu_window_cp01_ParamLimits

0x9a72,	// (0x000472b6) popup_submenu_window_cp01

0xb41b,	// (0x00048c5f) bg_popup_window_pane_cp10

0xed5f,	// (0x0004c5a3) listscroll_notif_wgt_pane

0xed71,	// (0x0004c5b5) list_notif_wgt_window

0xed7a,	// (0x0004c5be) scroll_pane_cp033

0x9a82,	// (0x000472c6) list_notif_wgt_row_pane_ParamLimits

0x9a82,	// (0x000472c6) list_notif_wgt_row_pane

0xed83,	// (0x0004c5c7) aid_size_list_notif_wgt_del

0xed90,	// (0x0004c5d4) list_notif_wgt_row_pane_g1

0xed9c,	// (0x0004c5e0) list_notif_wgt_row_pane_g2

0xeda8,	// (0x0004c5ec) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0004d6e6) list_notif_wgt_row_pane_g

0xedb5,	// (0x0004c5f9) list_notif_wgt_row_pane_t1

0xedca,	// (0x0004c60e) list_notif_wgt_row_pane_t2

0xeddc,	// (0x0004c620) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0004d6ed) list_notif_wgt_row_pane_t

0xd8a3,	// (0x0004b0e7) list_recal_day_event_pane_g1

0xedee,	// (0x0004c632) list_recal_day_event_pane_t1

0xa13a,	// (0x0004797e) bg_button_pane_cp045

0xedfd,	// (0x0004c641) cntbar_detail_btn_pane_t1

0xc826,	// (0x0004a06a) main_callh_pane_ParamLimits

0xc826,	// (0x0004a06a) main_callh_pane

0xa13a,	// (0x0004797e) main_coverflow0_pane

0xa13a,	// (0x0004797e) main_wgtman_pane

0x9137,	// (0x0004697b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9137,	// (0x0004697b) main_fs_bigclock_unlock_btn_pane

0x946d,	// (0x00046cb1) bg_button_pane_cp16

0x947d,	// (0x00046cc1) cell_tport_appsw_pane_g3

0x9a93,	// (0x000472d7) cf0_flow_pane_ParamLimits

0x9a93,	// (0x000472d7) cf0_flow_pane

0xee0b,	// (0x0004c64f) listscroll_cf0_pane

0xee16,	// (0x0004c65a) main_cf0_pane_g1

0x9aa2,	// (0x000472e6) main_cf0_pane_t1_ParamLimits

0x9aa2,	// (0x000472e6) main_cf0_pane_t1

0x9ab6,	// (0x000472fa) main_cf0_pane_t2_ParamLimits

0x9ab6,	// (0x000472fa) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0004d6f9) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0004d6f9) main_cf0_pane_t

0xee28,	// (0x0004c66c) scroll_pane_cp11

0x9aca,	// (0x0004730e) cf0_flow_pane_g1

0x9ad2,	// (0x00047316) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0004d6fe) cf0_flow_pane_g

0x9ada,	// (0x0004731e) cf0_flow_pane_t1

0xa13a,	// (0x0004797e) main_call6_pane

0xa13a,	// (0x0004797e) main_calllock_pane

0x9ae8,	// (0x0004732c) call6_btn_grp_pane_ParamLimits

0x9ae8,	// (0x0004732c) call6_btn_grp_pane

0x9af5,	// (0x00047339) call6_pane_g1_ParamLimits

0x9af5,	// (0x00047339) call6_pane_g1

0x9b05,	// (0x00047349) popup_call6_1st_window_ParamLimits

0x9b05,	// (0x00047349) popup_call6_1st_window

0x9b13,	// (0x00047357) popup_call6_2nd_window_ParamLimits

0x9b13,	// (0x00047357) popup_call6_2nd_window

0x9b21,	// (0x00047365) cell_call6_btn_pane_ParamLimits

0x9b21,	// (0x00047365) cell_call6_btn_pane

0xb41b,	// (0x00048c5f) bg_popup_call2_in_pane_cp03

0xee33,	// (0x0004c677) popup_call6_1st_window_g1

0xee3b,	// (0x0004c67f) popup_call6_1st_window_g2

0xee43,	// (0x0004c687) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0004d703) popup_call6_1st_window_g

0xee4b,	// (0x0004c68f) popup_call6_1st_window_t1

0xee5a,	// (0x0004c69e) popup_call6_1st_window_t2

0xee6a,	// (0x0004c6ae) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0004d70a) popup_call6_1st_window_t

0xb41b,	// (0x00048c5f) bg_popup_call2_in_pane_cp04

0xee33,	// (0x0004c677) popup_call6_2nd_window_g1

0xee3b,	// (0x0004c67f) popup_call6_2nd_window_g2

0xee43,	// (0x0004c687) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0004d703) popup_call6_2nd_window_g

0xee4b,	// (0x0004c68f) popup_call6_2nd_window_t1

0xa13a,	// (0x0004797e) bg_button_pane_cp15

0xee7a,	// (0x0004c6be) cell_call6_btn_pane_g1

0xee83,	// (0x0004c6c7) cell_call6_btn_pane_t1

0x9b30,	// (0x00047374) listscroll_wgtman_pane_ParamLimits

0x9b30,	// (0x00047374) listscroll_wgtman_pane

0x9b4e,	// (0x00047392) wgtman_btn_pane_ParamLimits

0x9b4e,	// (0x00047392) wgtman_btn_pane

0xb2b2,	// (0x00048af6) aid_scroll_copy1

0xee92,	// (0x0004c6d6) list_wgtman_pane

0x9b83,	// (0x000473c7) wgtman_btn_pane_g1_ParamLimits

0x9b83,	// (0x000473c7) wgtman_btn_pane_g1

0x9bab,	// (0x000473ef) wgtman_btn_pane_t1_ParamLimits

0x9bab,	// (0x000473ef) wgtman_btn_pane_t1

0xee9c,	// (0x0004c6e0) wgtman_btn_pane_t2_ParamLimits

0xee9c,	// (0x0004c6e0) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0004d711) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0004d711) wgtman_btn_pane_t

0x9be2,	// (0x00047426) listrow_wgtman_pane_ParamLimits

0x9be2,	// (0x00047426) listrow_wgtman_pane

0x9bf3,	// (0x00047437) listrow_wgtman_pane_g1

0x9c00,	// (0x00047444) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0004d716) listrow_wgtman_pane_g

0x1f89,	// (0x0003f7cd) listrow_wgtman_pane_t1

0x1fa1,	// (0x0003f7e5) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0004d71b) listrow_wgtman_pane_t

0x1fc7,	// (0x0003f80b) wait_bar_pane_cp09

0xeeb3,	// (0x0004c6f7) main_calllock_btn_pane

0xeebd,	// (0x0004c701) main_calllock_pane_g1

0xa13a,	// (0x0004797e) bg_button_pane_cp17

0xeec9,	// (0x0004c70d) main_calllock_btn_pane_g1

0xeed2,	// (0x0004c716) main_calllock_btn_pane_t1

0xa13a,	// (0x0004797e) main_dialer3_pane

0xa13a,	// (0x0004797e) main_fmrd2_pane

0xcc77,	// (0x0004a4bb) main_fs_bigclock_unlock_btn_pane_g1

0xeee9,	// (0x0004c72d) main_fs_bigclock_unlock_btn_pane_t1

0x9c1e,	// (0x00047462) area_fmrd2_info_pane_ParamLimits

0x9c1e,	// (0x00047462) area_fmrd2_info_pane

0x9c2a,	// (0x0004746e) area_fmrd2_visual_pane_ParamLimits

0x9c2a,	// (0x0004746e) area_fmrd2_visual_pane

0x9c38,	// (0x0004747c) fmrd2_indi_pane_ParamLimits

0x9c38,	// (0x0004747c) fmrd2_indi_pane

0x9c45,	// (0x00047489) area_fmrd2_visual_pane_g1

0x9c4d,	// (0x00047491) area_fmrd2_visual_pane_t1

0x9c5d,	// (0x000474a1) area_fmrd2_visual_pane_t2

0x9c6d,	// (0x000474b1) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0004d725) area_fmrd2_visual_pane_t

0x9c7d,	// (0x000474c1) area_fmrd2_info_pane_g1

0x9c85,	// (0x000474c9) area_fmrd2_info_pane_t1

0x9c95,	// (0x000474d9) area_fmrd2_info_pane_t2

0x9ca5,	// (0x000474e9) area_fmrd2_info_pane_t3

0x9cb5,	// (0x000474f9) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0004d72c) area_fmrd2_info_pane_t

0x9cc5,	// (0x00047509) fmrd2_indi_pane_t1

0x9cd5,	// (0x00047519) fmrd2_indi_pane_t2

0x9ce5,	// (0x00047529) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0004d735) fmrd2_indi_pane_t

0xe446,	// (0x0004bc8a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe446,	// (0x0004bc8a) list_single_fs_bigclock_indicator_pane_g5

0xe4ef,	// (0x0004bd33) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4ef,	// (0x0004bd33) list_single_fs_bigclock_indicator_pane_t5

0x95fd,	// (0x00046e41) aid_cell_bcale_month_pane_ParamLimits

0x95fd,	// (0x00046e41) aid_cell_bcale_month_pane

0x961b,	// (0x00046e5f) bcale_month_pane_ParamLimits

0x961b,	// (0x00046e5f) bcale_month_pane

0x9637,	// (0x00046e7b) bcale_preview_pane_ParamLimits

0x9637,	// (0x00046e7b) bcale_preview_pane

0xec5b,	// (0x0004c49f) list_single_fs_bigclock_pane_t1_ParamLimits

0xec7a,	// (0x0004c4be) list_single_fs_bigclock_pane_t2_ParamLimits

0xec7a,	// (0x0004c4be) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0004d6b7) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004d6b7) list_single_fs_bigclock_pane_t

0xeee1,	// (0x0004c725) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0004d720) main_fs_bigclock_unlock_btn_pane_g

0x9cf5,	// (0x00047539) aid_dia3_key_size_ParamLimits

0x9cf5,	// (0x00047539) aid_dia3_key_size

0x9d01,	// (0x00047545) aid_dia3_listrow_size_ParamLimits

0x9d01,	// (0x00047545) aid_dia3_listrow_size

0x9d11,	// (0x00047555) dia3_keypad_fun_pane_ParamLimits

0x9d11,	// (0x00047555) dia3_keypad_fun_pane

0x9d21,	// (0x00047565) dia3_keypad_num_pane_ParamLimits

0x9d21,	// (0x00047565) dia3_keypad_num_pane

0x9d31,	// (0x00047575) dia3_listscroll_pane_ParamLimits

0x9d31,	// (0x00047575) dia3_listscroll_pane

0x9d3f,	// (0x00047583) dia3_numentry_pane_ParamLimits

0x9d3f,	// (0x00047583) dia3_numentry_pane

0xeef7,	// (0x0004c73b) dia3_list_pane

0xef02,	// (0x0004c746) scroll_pane_cp12

0xa13a,	// (0x0004797e) bg_dia3_numentry_pane

0x9d4d,	// (0x00047591) dia3_numentry_pane_t1

0x9d5c,	// (0x000475a0) cell_dia3_key_num_pane

0x9d64,	// (0x000475a8) cell_dia3_key0_fun_pane_ParamLimits

0x9d64,	// (0x000475a8) cell_dia3_key0_fun_pane

0x9d71,	// (0x000475b5) cell_dia3_key1_fun_pane_ParamLimits

0x9d71,	// (0x000475b5) cell_dia3_key1_fun_pane

0x9d7e,	// (0x000475c2) dia3_listrow_pane

0xe144,	// (0x0004b988) bg_dia3_numentry_pane_g1

0xa13a,	// (0x0004797e) bg_button_pane_cp21

0xef0d,	// (0x0004c751) cell_dia3_key_num_pane_t1

0xef1b,	// (0x0004c75f) cell_dia3_key_num_pane_t2

0xef2a,	// (0x0004c76e) cell_dia3_key_num_pane_t3

0xef39,	// (0x0004c77d) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0004d73c) cell_dia3_key_num_pane_t

0xa13a,	// (0x0004797e) bg_button_pane_cp19

0x9d8b,	// (0x000475cf) cell_dia3_key0_fun_pane_g1

0xa13a,	// (0x0004797e) bg_button_pane_cp20

0x9d93,	// (0x000475d7) cell_dia3_key1_fun_pane_g1

0x9d9b,	// (0x000475df) area_left_week_number_pane

0x9dae,	// (0x000475f2) area_top_day_name_pane

0x9dbc,	// (0x00047600) frame_month_view_pane

0xef48,	// (0x0004c78c) grid_month_view_pane

0x9dd1,	// (0x00047615) cell_top_day_name_pane_ParamLimits

0x9dd1,	// (0x00047615) cell_top_day_name_pane

0x9ded,	// (0x00047631) cell_area_left_week_number_pane_ParamLimits

0x9ded,	// (0x00047631) cell_area_left_week_number_pane

0x9e0e,	// (0x00047652) cell_month_view_pane_ParamLimits

0x9e0e,	// (0x00047652) cell_month_view_pane

0xef56,	// (0x0004c79a) frm_month_g1

0x9e3a,	// (0x0004767e) frm_month_g2

0x9e4b,	// (0x0004768f) frm_month_g3

0x9e5c,	// (0x000476a0) frm_month_g4

0x9e6d,	// (0x000476b1) frm_month_g5

0x9e7e,	// (0x000476c2) frm_month_g6

0x9e91,	// (0x000476d5) frm_month_g7

0xef63,	// (0x0004c7a7) frm_month_g8

0x9ea4,	// (0x000476e8) frm_month_g9

0x9eb1,	// (0x000476f5) frm_month_g10

0x9ebe,	// (0x00047702) frm_month_g11

0x9ecb,	// (0x0004770f) frm_month_g12

0x9ed8,	// (0x0004771c) frm_month_g13

0x9ee7,	// (0x0004772b) frm_month_g14

0x9ef6,	// (0x0004773a) frm_month_g15

0x9f05,	// (0x00047749) frm_month_g16

0x000f,

0xff01,	// (0x0004d745) frm_month_g

0xef70,	// (0x0004c7b4) cell_top_day_name_pane_t1

0x9f14,	// (0x00047758) cell_area_left_week_number_pane_g1

0x9f23,	// (0x00047767) cell_area_left_week_number_pane_t1

0xcea7,	// (0x0004a6eb) cell_month_view_pane_g1

0x9f39,	// (0x0004777d) cell_month_view_pane_t1

0xa13a,	// (0x0004797e) main_fps_pane

0xe6df,	// (0x0004bf23) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6df,	// (0x0004bf23) cmail_ddmenu_btn02_pane_cp1

0xe6fb,	// (0x0004bf3f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6fb,	// (0x0004bf3f) cmail_ddmenu_btn02_pane_cp2

0x9807,	// (0x0004704b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9807,	// (0x0004704b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0004d66a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0004d66a) cmail_ddmenu_btn02_pane_g

0x9825,	// (0x00047069) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9825,	// (0x00047069) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0004d66f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0004d66f) cmail_ddmenu_btn02_pane_t

0x9f4f,	// (0x00047793) fps_text_pane_ParamLimits

0x9f4f,	// (0x00047793) fps_text_pane

0x9f5c,	// (0x000477a0) main_fps_pane_g1_ParamLimits

0x9f5c,	// (0x000477a0) main_fps_pane_g1

0x9f68,	// (0x000477ac) wait_bar_pane_cp010_ParamLimits

0x9f68,	// (0x000477ac) wait_bar_pane_cp010

0x9f74,	// (0x000477b8) fps_text_pane_t1_ParamLimits

0x9f74,	// (0x000477b8) fps_text_pane_t1

0x75e0,	// (0x00044e24) cam4_image_uncrop_pane_g1

0x75e9,	// (0x00044e2d) cam4_image_uncrop_pane_g2

0x75f2,	// (0x00044e36) cam4_image_uncrop_pane_g3

0x75fb,	// (0x00044e3f) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0004d138) cam4_image_uncrop_pane_g

0x9d7e,	// (0x000475c2) dia3_listrow_pane_ParamLimits

0xa13a,	// (0x0004797e) main_phob2_pane

0x944f,	// (0x00046c93) cell_tport_appsw_pane_cp02_ParamLimits

0x944f,	// (0x00046c93) cell_tport_appsw_pane_cp02

0x945e,	// (0x00046ca2) cell_tport_appsw_pane_cp03_ParamLimits

0x945e,	// (0x00046ca2) cell_tport_appsw_pane_cp03

0xa13a,	// (0x0004797e) phob2_contact_card_pane

0xa13a,	// (0x0004797e) phob2_listscroll_pane

0xef83,	// (0x0004c7c7) phob2_list_pane

0xef8b,	// (0x0004c7cf) scroll_pane_cp034

0x9f8d,	// (0x000477d1) phob2_cc_data_pane_ParamLimits

0x9f8d,	// (0x000477d1) phob2_cc_data_pane

0x9fa9,	// (0x000477ed) phob2_cc_listscroll_pane_ParamLimits

0x9fa9,	// (0x000477ed) phob2_cc_listscroll_pane

0x9fc5,	// (0x00047809) list_double_large_graphic_phob2_pane_ParamLimits

0x9fc5,	// (0x00047809) list_double_large_graphic_phob2_pane

0x9fdd,	// (0x00047821) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9fdd,	// (0x00047821) list_double_large_graphic_phob2_pane_g1

0x1fd9,	// (0x0003f81d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1fd9,	// (0x0003f81d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0004d766) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0004d766) list_double_large_graphic_phob2_pane_g

0x1fe5,	// (0x0003f829) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1fe5,	// (0x0003f829) list_double_large_graphic_phob2_pane_t1

0x1ffa,	// (0x0003f83e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1ffa,	// (0x0003f83e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0004d76b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0004d76b) list_double_large_graphic_phob2_pane_t

0xa13a,	// (0x0004797e) list_highlight_pane_cp024

0xef93,	// (0x0004c7d7) phob2_cc_button_pane

0x9ff3,	// (0x00047837) phob2_cc_data_pane_g1_ParamLimits

0x9ff3,	// (0x00047837) phob2_cc_data_pane_g1

0x9fff,	// (0x00047843) phob2_cc_data_pane_g2_ParamLimits

0x9fff,	// (0x00047843) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0004d770) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0004d770) phob2_cc_data_pane_g

0xa00b,	// (0x0004784f) phob2_cc_data_pane_t1_ParamLimits

0xa00b,	// (0x0004784f) phob2_cc_data_pane_t1

0xa01d,	// (0x00047861) phob2_cc_data_pane_t2_ParamLimits

0xa01d,	// (0x00047861) phob2_cc_data_pane_t2

0xa02f,	// (0x00047873) phob2_cc_data_pane_t3_ParamLimits

0xa02f,	// (0x00047873) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0004d775) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0004d775) phob2_cc_data_pane_t

0xef9b,	// (0x0004c7df) phob2_cc_list_pane_ParamLimits

0xef9b,	// (0x0004c7df) phob2_cc_list_pane

0xdad0,	// (0x0004b314) scroll_pane_cp035_ParamLimits

0xdad0,	// (0x0004b314) scroll_pane_cp035

0xa7ad,	// (0x00047ff1) bg_button_pane_cp033

0xefa7,	// (0x0004c7eb) phob2_cc_button_pane_g1

0xefb3,	// (0x0004c7f7) phob2_cc_button_pane_t1

0xefc8,	// (0x0004c80c) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0004d77c) phob2_cc_button_pane_t

0xa041,	// (0x00047885) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa041,	// (0x00047885) list_double_large_graphic_phob2_cc_pane

0xa05d,	// (0x000478a1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa05d,	// (0x000478a1) list_double_large_graphic_phob2_cc_pane_g1

0x200c,	// (0x0003f850) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x200c,	// (0x0003f850) list_double_large_graphic_phob2_cc_pane_g2

0x201b,	// (0x0003f85f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x201b,	// (0x0003f85f) list_double_large_graphic_phob2_cc_pane_g3

0x202a,	// (0x0003f86e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x202a,	// (0x0003f86e) list_double_large_graphic_phob2_cc_pane_g4

0x203b,	// (0x0003f87f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x203b,	// (0x0003f87f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0004d781) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0004d781) list_double_large_graphic_phob2_cc_pane_g

0x204a,	// (0x0003f88e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x204a,	// (0x0003f88e) list_double_large_graphic_phob2_cc_pane_t1

0x2073,	// (0x0003f8b7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x2073,	// (0x0003f8b7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0004d78c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0004d78c) list_double_large_graphic_phob2_cc_pane_t

0xefda,	// (0x0004c81e) list_highlight_pane_cp025_ParamLimits

0xefda,	// (0x0004c81e) list_highlight_pane_cp025

0xa7ad,	// (0x00047ff1) bg_button_pane_cp033_ParamLimits

0xefa7,	// (0x0004c7eb) phob2_cc_button_pane_g1_ParamLimits

0xefb3,	// (0x0004c7f7) phob2_cc_button_pane_t1_ParamLimits

0xefc8,	// (0x0004c80c) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0004d77c) phob2_cc_button_pane_t_ParamLimits

0x231c,	// (0x0003fb60) popup_wgtman_window

0xd78f,	// (0x0004afd3) scroll_pane_cp038

0x9b6b,	// (0x000473af) wgtman_btn_pane_cp_01_ParamLimits

0x9b6b,	// (0x000473af) wgtman_btn_pane_cp_01

0xefe8,	// (0x0004c82c) wgtman_content_pane

0xeff1,	// (0x0004c835) wgtman_heading_pane

0xa13a,	// (0x0004797e) bg_heading_pane_cp02

0xeffa,	// (0x0004c83e) wgtman_heading_pane_g1

0xf002,	// (0x0004c846) wgtman_heading_pane_t1

0xf010,	// (0x0004c854) scroll_pane_cp036

0xf018,	// (0x0004c85c) wgtman_list_pane

0xf020,	// (0x0004c864) wgtman_list_pane_t1_ParamLimits

0xf020,	// (0x0004c864) wgtman_list_pane_t1

0x753d,	// (0x00044d81) cam4_grid_pane

0x128f,	// (0x0003ead3) bg_button_pane_cp015_ParamLimits

0x81ca,	// (0x00045a0e) bg_button_pane_cp016_ParamLimits

0x81dd,	// (0x00045a21) bg_button_pane_cp017_ParamLimits

0x12d3,	// (0x0003eb17) popup_vitu2_query_window_g3_ParamLimits

0x12d3,	// (0x0003eb17) popup_vitu2_query_window_g3

0x134c,	// (0x0003eb90) popup_vitu2_query_window_t6_ParamLimits

0x134c,	// (0x0003eb90) popup_vitu2_query_window_t6

0x1377,	// (0x0003ebbb) popup_vitu2_query_window_t7_ParamLimits

0x1377,	// (0x0003ebbb) popup_vitu2_query_window_t7

0xed31,	// (0x0004c575) cam4_grid_pane_g1

0xed3a,	// (0x0004c57e) cam4_grid_pane_g2

0xf03a,	// (0x0004c87e) cam4_grid_pane_g3

0xf043,	// (0x0004c887) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0004d791) cam4_grid_pane_g

0x33d5,	// (0x00040c19) aid_placing_vt_slider_lsc_ParamLimits

0x3708,	// (0x00040f4c) vidtel_button_pane_ParamLimits

0x3708,	// (0x00040f4c) vidtel_button_pane

0xf04e,	// (0x0004c892) bg_button_pane_cp034

0xa06e,	// (0x000478b2) vidtel_button_pane_g1

0xf058,	// (0x0004c89c) vidtel_button_pane_t1

0xd893,	// (0x0004b0d7) aid_size_vtel_slider_touch

0xdad0,	// (0x0004b314) scroll_pane_cp039

0xe182,	// (0x0004b9c6) ncim_query_button_pane_cp01_ParamLimits

0xe1a1,	// (0x0004b9e5) ncimui_query_pane_g1_ParamLimits

0xa7ad,	// (0x00047ff1) input_focus_pane_cp012_ParamLimits

0xe1c6,	// (0x0004ba0a) ncim_query_entry_pane_t1_ParamLimits

0xdad0,	// (0x0004b314) scroll_pane_cp039_ParamLimits

0x4878,	// (0x000420bc) navi_pane_bcale_mc_g1

0x4880,	// (0x000420c4) navi_pane_bcale_mc_t1

0xe744,	// (0x0004bf88) main_sp_fs_email_pane_g1

0xe750,	// (0x0004bf94) main_sp_fs_email_pane_g2

0x0001,

0xfce4,	// (0x0004d528) main_sp_fs_email_pane_g

0xe9d5,	// (0x0004c219) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9d5,	// (0x0004c219) list_single_cale_mrui_row_pane_g3

0x1ee4,	// (0x0003f728) list_single_recal_day_pane_g5_event_pane

0x1efa,	// (0x0003f73e) list_single_recal_day_pane_g7

0xf066,	// (0x0004c8aa) list_recal_day_event_pane_cp01

0xf06f,	// (0x0004c8b3) list_recal_vselct_arw_lo_pane_cp01

0xf077,	// (0x0004c8bb) list_recal_vselct_arw_up_pane_cp01

0xf07f,	// (0x0004c8c3) list_recal_vselct_pane_cp01

0xd8a3,	// (0x0004b0e7) list_recal_day_event_pane_cp01_g1

0x209c,	// (0x0003f8e0) list_recal_day_event_pane_cp01_t1

0x1f02,	// (0x0003f746) list_single_recal_day_pane_t1_ParamLimits

0x1f14,	// (0x0003f758) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0004d67f) list_single_recal_day_pane_t_ParamLimits

0xa82f,	// (0x00048073) bg_notes_pane_ParamLimits

0xa8d2,	// (0x00048116) list_notes_pane_ParamLimits

0x266b,	// (0x0003feaf) scroll_pane_cp06_ParamLimits

0xa8f4,	// (0x00048138) main_notes_pane_ParamLimits

0xa13a,	// (0x0004797e) main_welc_pane

0xa076,	// (0x000478ba) main_welc_body_pane_ParamLimits

0xa076,	// (0x000478ba) main_welc_body_pane

0xa091,	// (0x000478d5) main_welc_opti_pane_ParamLimits

0xa091,	// (0x000478d5) main_welc_opti_pane

0xa0c6,	// (0x0004790a) main_welc_pane_t1_ParamLimits

0xa0c6,	// (0x0004790a) main_welc_pane_t1

0xed45,	// (0x0004c589) main_welc_body_row_pane_ParamLimits

0xed45,	// (0x0004c589) main_welc_body_row_pane

0xa0e4,	// (0x00047928) main_welc_opti_row_pane_ParamLimits

0xa0e4,	// (0x00047928) main_welc_opti_row_pane

0xf089,	// (0x0004c8cd) main_welc_opti_row_pane_g1

0xf091,	// (0x0004c8d5) main_welc_opti_row_pane_t1

0xf0a0,	// (0x0004c8e4) main_welc_body_row_pane_t1

0xed69,	// (0x0004c5ad) popup_notif_wgt_heading_pane

0xed83,	// (0x0004c5c7) aid_size_list_notif_wgt_del_ParamLimits

0xed90,	// (0x0004c5d4) list_notif_wgt_row_pane_g1_ParamLimits

0xed9c,	// (0x0004c5e0) list_notif_wgt_row_pane_g2_ParamLimits

0xeda8,	// (0x0004c5ec) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0004d6e6) list_notif_wgt_row_pane_g_ParamLimits

0xedb5,	// (0x0004c5f9) list_notif_wgt_row_pane_t1_ParamLimits

0xedca,	// (0x0004c60e) list_notif_wgt_row_pane_t2_ParamLimits

0xeddc,	// (0x0004c620) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0004d6ed) list_notif_wgt_row_pane_t_ParamLimits

0x9bf3,	// (0x00047437) listrow_wgtman_pane_g1_ParamLimits

0x9c00,	// (0x00047444) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0004d716) listrow_wgtman_pane_g_ParamLimits

0x1f89,	// (0x0003f7cd) listrow_wgtman_pane_t1_ParamLimits

0x1fa1,	// (0x0003f7e5) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0004d71b) listrow_wgtman_pane_t_ParamLimits

0x1fc7,	// (0x0003f80b) wait_bar_pane_cp09_ParamLimits

0xa13a,	// (0x0004797e) bg_popup_heading_pane_cp02

0xf0af,	// (0x0004c8f3) popup_notif_wgt_heading_pane_g1

0xf0b7,	// (0x0004c8fb) popup_notif_wgt_heading_pane_t1

0xa13a,	// (0x0004797e) main_vids_pane

0xa13a,	// (0x0004797e) vids_listscroll_pane

0xa0f5,	// (0x00047939) scroll_pane_cp040

0xa13a,	// (0x0004797e) vids_list_pane

0xa100,	// (0x00047944) vids_list_double_pane_ParamLimits

0xa100,	// (0x00047944) vids_list_double_pane

0xa113,	// (0x00047957) vids_list_double_pane_g1

0xa11c,	// (0x00047960) vids_list_double_pane_t1

0xa12c,	// (0x00047970) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0004d79f) vids_list_double_pane_t

0xa7ad,	// (0x00047ff1) main_ncimui_pane_ParamLimits

0x8ced,	// (0x00046531) main_ncimui_pane_g1_ParamLimits

0x8cfb,	// (0x0004653f) main_ncimui_pane_g2_ParamLimits

0x8cfb,	// (0x0004653f) main_ncimui_pane_g2

0x0001,

0xfbe9,	// (0x0004d42d) main_ncimui_pane_g_ParamLimits

0xfbe9,	// (0x0004d42d) main_ncimui_pane_g

0xa0ac,	// (0x000478f0) main_welc_pane_g1_ParamLimits

0xa0ac,	// (0x000478f0) main_welc_pane_g1

0xa0b8,	// (0x000478fc) main_welc_pane_g2_ParamLimits

0xa0b8,	// (0x000478fc) main_welc_pane_g2

0x0001,

0xff56,	// (0x0004d79a) main_welc_pane_g_ParamLimits

0xff56,	// (0x0004d79a) main_welc_pane_g

0xa82f,	// (0x00048073) listscroll_mce_pane_ParamLimits

0x4942,	// (0x00042186) wait_bar_pane_cp10

0xc81a,	// (0x0004a05e) main_cale_day_pane_ParamLimits

0xc81a,	// (0x0004a05e) main_cale_week_pane_ParamLimits

0xa82f,	// (0x00048073) main_messa_pane_ParamLimits

0x6945,	// (0x00044189) main_clock2_btn_pane_ParamLimits

0x6945,	// (0x00044189) main_clock2_btn_pane

0xd02f,	// (0x0004a873) main_clock2_btn_pane_cp01_ParamLimits

0xd02f,	// (0x0004a873) main_clock2_btn_pane_cp01

0xe9a6,	// (0x0004c1ea) list_cale_mrui_pane_ParamLimits

0xee20,	// (0x0004c664) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0004d6f4) main_cf0_pane_g

0x9d9b,	// (0x000475df) area_left_week_number_pane_ParamLimits

0x9dae,	// (0x000475f2) area_top_day_name_pane_ParamLimits

0x9dbc,	// (0x00047600) frame_month_view_pane_ParamLimits

0xef48,	// (0x0004c78c) grid_month_view_pane_ParamLimits

0xef56,	// (0x0004c79a) frm_month_g1_ParamLimits

0x9e3a,	// (0x0004767e) frm_month_g2_ParamLimits

0x9e4b,	// (0x0004768f) frm_month_g3_ParamLimits

0x9e5c,	// (0x000476a0) frm_month_g4_ParamLimits

0x9e6d,	// (0x000476b1) frm_month_g5_ParamLimits

0x9e7e,	// (0x000476c2) frm_month_g6_ParamLimits

0x9e91,	// (0x000476d5) frm_month_g7_ParamLimits

0xef63,	// (0x0004c7a7) frm_month_g8_ParamLimits

0x9ea4,	// (0x000476e8) frm_month_g9_ParamLimits

0x9eb1,	// (0x000476f5) frm_month_g10_ParamLimits

0x9ebe,	// (0x00047702) frm_month_g11_ParamLimits

0x9ecb,	// (0x0004770f) frm_month_g12_ParamLimits

0x9ed8,	// (0x0004771c) frm_month_g13_ParamLimits

0x9ee7,	// (0x0004772b) frm_month_g14_ParamLimits

0x9ef6,	// (0x0004773a) frm_month_g15_ParamLimits

0x9f05,	// (0x00047749) frm_month_g16_ParamLimits

0xff01,	// (0x0004d745) frm_month_g_ParamLimits

0xef70,	// (0x0004c7b4) cell_top_day_name_pane_t1_ParamLimits

0x9f14,	// (0x00047758) cell_area_left_week_number_pane_g1_ParamLimits

0x9f23,	// (0x00047767) cell_area_left_week_number_pane_t1_ParamLimits

0xcea7,	// (0x0004a6eb) cell_month_view_pane_g1_ParamLimits

0x9f39,	// (0x0004777d) cell_month_view_pane_t1_ParamLimits

0xa827,	// (0x0004806b) main_clock2_btn_pane_g1

0xf0c5,	// (0x0004c909) main_clock2_btn_pane_t1

0xa7ad,	// (0x00047ff1) listscroll_cmail_pane_ParamLimits

0xe744,	// (0x0004bf88) main_sp_fs_email_pane_g1_ParamLimits

0xe750,	// (0x0004bf94) main_sp_fs_email_pane_g2_ParamLimits

0xfce4,	// (0x0004d528) main_sp_fs_email_pane_g_ParamLimits

0xeab1,	// (0x0004c2f5) list_recal_day_pane_ParamLimits

0xeac2,	// (0x0004c306) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
