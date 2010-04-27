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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0002e2f4 };

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
0x174f,	// (0x0002fa43) Screen

0x175b,	// (0x0002fa4f) application_window

0x178b,	// (0x0002fa7f) area_bottom_pane_ParamLimits

0x178b,	// (0x0002fa7f) area_bottom_pane

0x0055,	// (0x0002e349) area_top_pane_ParamLimits

0x0055,	// (0x0002e349) area_top_pane

0x17e8,	// (0x0002fadc) call_video_uplink_pane_ParamLimits

0x17e8,	// (0x0002fadc) call_video_uplink_pane

0x00e3,	// (0x0002e3d7) main_pane_ParamLimits

0x00e3,	// (0x0002e3d7) main_pane

0xc29e,	// (0x0003a592) context_pane

0x49ee,	// (0x00032ce2) navi_pane

0x4a20,	// (0x00032d14) popup_cale_events_window_ParamLimits

0x4a20,	// (0x00032d14) popup_cale_events_window

0xc2b1,	// (0x0003a5a5) popup_mup_playback_window

0x4a38,	// (0x00032d2c) signal_pane

0xa1df,	// (0x000384d3) main_browser_pane

0xa3ad,	// (0x000386a1) main_burst_pane

0x04d5,	// (0x0002e7c9) main_calc_pane

0xc284,	// (0x0003a578) main_cale_day_pane

0x04e9,	// (0x0002e7dd) main_cale_month_pane

0xc284,	// (0x0003a578) main_cale_week_pane

0xa3ad,	// (0x000386a1) main_call_pane

0x9ea0,	// (0x00038194) main_call_poc_pane

0xa3ad,	// (0x000386a1) main_camera_pane

0xa3ad,	// (0x000386a1) main_chi_dic_pane

0xabc2,	// (0x00038eb6) main_clock_pane

0x9ea0,	// (0x00038194) main_fmradio_pane

0xa3ad,	// (0x000386a1) main_graph_messa_pane

0x9ea0,	// (0x00038194) main_help_pane

0xa1df,	// (0x000384d3) main_im_pane

0xa0fb,	// (0x000383ef) main_image_pane_ParamLimits

0xa0fb,	// (0x000383ef) main_image_pane

0x9ea0,	// (0x00038194) main_location2_pane

0xa3ad,	// (0x000386a1) main_location_pane

0xa0fb,	// (0x000383ef) main_messa_pane

0x9ea0,	// (0x00038194) main_mp2_pane

0xa3ad,	// (0x000386a1) main_mp_pane

0x9ea0,	// (0x00038194) main_msg_pane

0x9ea0,	// (0x00038194) main_mup_eq_pane

0x9ea0,	// (0x00038194) main_mup_pane

0xa1df,	// (0x000384d3) main_notes_pane

0x9ea0,	// (0x00038194) main_pec_pane

0x9ea0,	// (0x00038194) main_phob_pane

0x9ea0,	// (0x00038194) main_pinb_pane

0x9ea0,	// (0x00038194) main_postcard_pane

0x9ea0,	// (0x00038194) main_qdial_pane

0xa3ad,	// (0x000386a1) main_skin_pane

0x9ea0,	// (0x00038194) main_smil2_pane

0xa3ad,	// (0x000386a1) main_smil_pane

0xa3ad,	// (0x000386a1) main_video_pane

0xa3ad,	// (0x000386a1) main_video_tele_pane

0xa0fb,	// (0x000383ef) main_viewer_pane_ParamLimits

0xa0fb,	// (0x000383ef) main_viewer_pane

0xa3ad,	// (0x000386a1) main_vorec_pane

0x053b,	// (0x0002e82f) popup_blid_sat_info_window_ParamLimits

0x053b,	// (0x0002e82f) popup_blid_sat_info_window

0x0593,	// (0x0002e887) popup_dyc_status_message_window_ParamLimits

0x0593,	// (0x0002e887) popup_dyc_status_message_window

0x05ab,	// (0x0002e89f) popup_grid_large_graphic_window_ParamLimits

0x05ab,	// (0x0002e89f) popup_grid_large_graphic_window

0x0661,	// (0x0002e955) popup_loc_request_window_ParamLimits

0x0661,	// (0x0002e955) popup_loc_request_window

0x074f,	// (0x0002ea43) popup_wml_address_window_ParamLimits

0x074f,	// (0x0002ea43) popup_wml_address_window

0x47de,	// (0x00032ad2) call_muted_g1

0x4491,	// (0x00032785) popup_call_audio_conf_window_ParamLimits

0x4491,	// (0x00032785) popup_call_audio_conf_window

0x47f2,	// (0x00032ae6) popup_call_audio_first_window_ParamLimits

0x47f2,	// (0x00032ae6) popup_call_audio_first_window

0x4868,	// (0x00032b5c) popup_call_audio_in_window_ParamLimits

0x4868,	// (0x00032b5c) popup_call_audio_in_window

0x48a4,	// (0x00032b98) popup_call_audio_out_window_ParamLimits

0x48a4,	// (0x00032b98) popup_call_audio_out_window

0x48de,	// (0x00032bd2) popup_call_audio_second_window_ParamLimits

0x48de,	// (0x00032bd2) popup_call_audio_second_window

0x4934,	// (0x00032c28) popup_call_audio_wait_window_ParamLimits

0x4934,	// (0x00032c28) popup_call_audio_wait_window

0x4969,	// (0x00032c5d) popup_number_entry_window_ParamLimits

0x4969,	// (0x00032c5d) popup_number_entry_window

0x9a8d,	// (0x00037d81) bg_popup_call_pane_cp05_ParamLimits

0x9a8d,	// (0x00037d81) bg_popup_call_pane_cp05

0x9aad,	// (0x00037da1) popup_number_entry_window_t1

0x9ac0,	// (0x00037db4) popup_number_entry_window_t2

0x9ad2,	// (0x00037dc6) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0003d3be) popup_number_entry_window_t

0x9ae4,	// (0x00037dd8) text_title_cp2

0x9af7,	// (0x00037deb) bg_popup_call_pane_cp_ParamLimits

0x9af7,	// (0x00037deb) bg_popup_call_pane_cp

0x9b05,	// (0x00037df9) call_thumbnail_pane

0x9b0d,	// (0x00037e01) popup_call_audio_in_window_g1_ParamLimits

0x9b0d,	// (0x00037e01) popup_call_audio_in_window_g1

0x9b19,	// (0x00037e0d) popup_call_audio_in_window_g2_ParamLimits

0x9b19,	// (0x00037e0d) popup_call_audio_in_window_g2

0x9b25,	// (0x00037e19) popup_call_audio_in_window_g3_ParamLimits

0x9b25,	// (0x00037e19) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0003d3c7) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0003d3c7) popup_call_audio_in_window_g

0x9b31,	// (0x00037e25) popup_call_audio_in_window_t1_ParamLimits

0x9b31,	// (0x00037e25) popup_call_audio_in_window_t1

0x9b4d,	// (0x00037e41) popup_call_audio_in_window_t2_ParamLimits

0x9b4d,	// (0x00037e41) popup_call_audio_in_window_t2

0x9b69,	// (0x00037e5d) popup_call_audio_in_window_t3_ParamLimits

0x9b69,	// (0x00037e5d) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0003d3ce) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0003d3ce) popup_call_audio_in_window_t

0x9af7,	// (0x00037deb) bg_popup_call_pane_cp01_ParamLimits

0x9af7,	// (0x00037deb) bg_popup_call_pane_cp01

0x9b05,	// (0x00037df9) call_thumbnail_pane_cp02

0x9b7c,	// (0x00037e70) call_type_pane_cp022

0x9b84,	// (0x00037e78) popup_call_audio_out_window_g1_ParamLimits

0x9b84,	// (0x00037e78) popup_call_audio_out_window_g1

0x9b96,	// (0x00037e8a) popup_call_audio_out_window_g2_ParamLimits

0x9b96,	// (0x00037e8a) popup_call_audio_out_window_g2

0x9ba2,	// (0x00037e96) popup_call_audio_out_window_g3_ParamLimits

0x9ba2,	// (0x00037e96) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0003d3d5) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0003d3d5) popup_call_audio_out_window_g

0x9bb4,	// (0x00037ea8) popup_call_audio_out_window_t1_ParamLimits

0x9bb4,	// (0x00037ea8) popup_call_audio_out_window_t1

0x9bcc,	// (0x00037ec0) popup_call_audio_out_window_t2_ParamLimits

0x9bcc,	// (0x00037ec0) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0003d3dc) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0003d3dc) popup_call_audio_out_window_t

0x9be1,	// (0x00037ed5) bg_popup_call_pane_ParamLimits

0x9be1,	// (0x00037ed5) bg_popup_call_pane

0x185f,	// (0x0002fb53) call_thumbnail_pane_cp_ParamLimits

0x185f,	// (0x0002fb53) call_thumbnail_pane_cp

0x9c65,	// (0x00037f59) call_type_pane_cp01_ParamLimits

0x9c65,	// (0x00037f59) call_type_pane_cp01

0x9ca9,	// (0x00037f9d) popup_call_audio_first_window_g1_ParamLimits

0x9ca9,	// (0x00037f9d) popup_call_audio_first_window_g1

0x9cf5,	// (0x00037fe9) popup_call_audio_first_window_g2_ParamLimits

0x9cf5,	// (0x00037fe9) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0003d3e1) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0003d3e1) popup_call_audio_first_window_g

0x9d39,	// (0x0003802d) popup_call_audio_first_window_t1_ParamLimits

0x9d39,	// (0x0003802d) popup_call_audio_first_window_t1

0x9de5,	// (0x000380d9) popup_call_audio_first_window_t4_ParamLimits

0x9de5,	// (0x000380d9) popup_call_audio_first_window_t4

0x9e71,	// (0x00038165) popup_call_audio_first_window_t5_ParamLimits

0x9e71,	// (0x00038165) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0003d3e6) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0003d3e6) popup_call_audio_first_window_t

0x9ea0,	// (0x00038194) bg_popup_call_pane_cp02

0x9eaa,	// (0x0003819e) call_type_pane_cp023

0x9eb2,	// (0x000381a6) popup_call_audio_wait_window_g1

0x9eba,	// (0x000381ae) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003d3ed) popup_call_audio_wait_window_g

0x9ec2,	// (0x000381b6) popup_call_audio_wait_window_t3

0x9ed0,	// (0x000381c4) bg_popup_call_pane_cp03_ParamLimits

0x9ed0,	// (0x000381c4) bg_popup_call_pane_cp03

0x9f30,	// (0x00038224) call_thumbnail_pane_cp011_ParamLimits

0x9f30,	// (0x00038224) call_thumbnail_pane_cp011

0x9f3c,	// (0x00038230) call_type_pane_cp034_ParamLimits

0x9f3c,	// (0x00038230) call_type_pane_cp034

0x9f78,	// (0x0003826c) popup_call_audio_second_window_g1_ParamLimits

0x9f78,	// (0x0003826c) popup_call_audio_second_window_g1

0x9fb4,	// (0x000382a8) popup_call_audio_second_window_g2_ParamLimits

0x9fb4,	// (0x000382a8) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0003d3f2) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0003d3f2) popup_call_audio_second_window_g

0x9ff0,	// (0x000382e4) popup_call_audio_second_window_t1_ParamLimits

0x9ff0,	// (0x000382e4) popup_call_audio_second_window_t1

0xa071,	// (0x00038365) popup_call_audio_second_window_t2_ParamLimits

0xa071,	// (0x00038365) popup_call_audio_second_window_t2

0xa0a7,	// (0x0003839b) popup_call_audio_second_window_t3_ParamLimits

0xa0a7,	// (0x0003839b) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0003d3f7) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0003d3f7) popup_call_audio_second_window_t

0x9ea0,	// (0x00038194) bg_popup_call_pane_cp04

0xa0dd,	// (0x000383d1) list_conf_pane

0xa0e5,	// (0x000383d9) popup_call_audio_conf_window_t1

0xa0f3,	// (0x000383e7) call_thumbnail_pane_g1

0xa0fb,	// (0x000383ef) bg_pinb_pane_ParamLimits

0xa0fb,	// (0x000383ef) bg_pinb_pane

0xa109,	// (0x000383fd) find_pinb_pane

0xa112,	// (0x00038406) listscroll_pinb_pane_ParamLimits

0xa112,	// (0x00038406) listscroll_pinb_pane

0xa121,	// (0x00038415) pinb_bg_pane_g1

0x1883,	// (0x0002fb77) pinb_bg_pane_g2

0x188f,	// (0x0002fb83) pinb_bg_pane_g3

0x189b,	// (0x0002fb8f) pinb_bg_pane_g4

0x18a7,	// (0x0002fb9b) pinb_bg_pane_g5

0x18b3,	// (0x0002fba7) pinb_bg_pane_g6

0x18be,	// (0x0002fbb2) pinb_bg_pane_g7

0x18c9,	// (0x0002fbbd) pinb_bg_pane_g8

0x18d4,	// (0x0002fbc8) pinb_bg_pane_g9

0x18de,	// (0x0002fbd2) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0003d3fe) pinb_bg_pane_g

0x18fb,	// (0x0002fbef) grid_pinb_pane

0x1904,	// (0x0002fbf8) list_pinb_pane

0x190d,	// (0x0002fc01) scroll_pane_cp01_ParamLimits

0x190d,	// (0x0002fc01) scroll_pane_cp01

0xa12b,	// (0x0003841f) find_pinb_pane_g1_ParamLimits

0xa12b,	// (0x0003841f) find_pinb_pane_g1

0xa143,	// (0x00038437) find_pinb_pane_t1

0xa155,	// (0x00038449) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0003d418) find_pinb_pane_t

0xa16a,	// (0x0003845e) input_focus_pane_cp01_ParamLimits

0xa16a,	// (0x0003845e) input_focus_pane_cp01

0x191f,	// (0x0002fc13) cell_pinb_pane_ParamLimits

0x191f,	// (0x0002fc13) cell_pinb_pane

0xa176,	// (0x0003846a) cell_pinb_pane_g1_ParamLimits

0xa176,	// (0x0003846a) cell_pinb_pane_g1

0xa189,	// (0x0003847d) cell_pinb_pane_g2_ParamLimits

0xa189,	// (0x0003847d) cell_pinb_pane_g2

0xa195,	// (0x00038489) cell_pinb_pane_g3_ParamLimits

0xa195,	// (0x00038489) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0003d41d) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0003d41d) cell_pinb_pane_g

0x9ea0,	// (0x00038194) grid_highlight_pane_cp01

0x194d,	// (0x0002fc41) list_pinb_item_pane_ParamLimits

0x194d,	// (0x0002fc41) list_pinb_item_pane

0x9ea0,	// (0x00038194) list_highlight_pane_cp02

0x1960,	// (0x0002fc54) list_pinb_item_pane_g1_ParamLimits

0x1960,	// (0x0002fc54) list_pinb_item_pane_g1

0x196d,	// (0x0002fc61) list_pinb_item_pane_g2_ParamLimits

0x196d,	// (0x0002fc61) list_pinb_item_pane_g2

0x1979,	// (0x0002fc6d) list_pinb_item_pane_g3_ParamLimits

0x1979,	// (0x0002fc6d) list_pinb_item_pane_g3

0x198a,	// (0x0002fc7e) list_pinb_item_pane_g4_ParamLimits

0x198a,	// (0x0002fc7e) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0003d424) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0003d424) list_pinb_item_pane_g

0x1996,	// (0x0002fc8a) list_pinb_item_pane_t1_ParamLimits

0x1996,	// (0x0002fc8a) list_pinb_item_pane_t1

0x027d,	// (0x0002e571) calc_display_pane

0x02a5,	// (0x0002e599) calc_paper_pane

0x02c8,	// (0x0002e5bc) grid_calc_pane

0x9ea0,	// (0x00038194) bg_list_pane_cp01

0x19b5,	// (0x0002fca9) clock_g1

0x19bd,	// (0x0002fcb1) clock_g2

0x0001,

0xf139,	// (0x0003d42d) clock_g

0x19c5,	// (0x0002fcb9) clock_t1_ParamLimits

0x19c5,	// (0x0002fcb9) clock_t1

0x19da,	// (0x0002fcce) clock_t2_ParamLimits

0x19da,	// (0x0002fcce) clock_t2

0x19ec,	// (0x0002fce0) clock_t3_ParamLimits

0x19ec,	// (0x0002fce0) clock_t3

0x19fe,	// (0x0002fcf2) clock_t4_ParamLimits

0x19fe,	// (0x0002fcf2) clock_t4

0x1a10,	// (0x0002fd04) clock_t5_ParamLimits

0x1a10,	// (0x0002fd04) clock_t5

0x1a25,	// (0x0002fd19) clock_t6_ParamLimits

0x1a25,	// (0x0002fd19) clock_t6

0x1a37,	// (0x0002fd2b) clock_t7_ParamLimits

0x1a37,	// (0x0002fd2b) clock_t7

0x1a49,	// (0x0002fd3d) clock_t8_ParamLimits

0x1a49,	// (0x0002fd3d) clock_t8

0x1a5d,	// (0x0002fd51) clock_t9_ParamLimits

0x1a5d,	// (0x0002fd51) clock_t9

0x0008,

0xf13e,	// (0x0003d432) clock_t_ParamLimits

0xf13e,	// (0x0003d432) clock_t

0xa1a1,	// (0x00038495) popup_clock_analogue_window_cp02

0xa1a1,	// (0x00038495) popup_clock_digital_window_cp01

0xa1a9,	// (0x0003849d) listscroll_help_pane

0x9ea0,	// (0x00038194) phob_pre_status_pane

0xa1b3,	// (0x000384a7) grid_qdial_pane

0xa0fb,	// (0x000383ef) listscroll_mce_pane

0xa0fb,	// (0x000383ef) bg_notes_pane

0xa1bd,	// (0x000384b1) list_notes_pane

0x1a71,	// (0x0002fd65) scroll_pane_cp06

0xa1cb,	// (0x000384bf) bg_calc_paper_pane

0x1a85,	// (0x0002fd79) list_calc_pane

0xa1df,	// (0x000384d3) bg_calc_display_pane

0x02f6,	// (0x0002e5ea) calc_display_pane_t1

0x0308,	// (0x0002e5fc) calc_display_pane_t2

0x1a9f,	// (0x0002fd93) calc_display_pane_t3

0x0002,

0xf151,	// (0x0003d445) calc_display_pane_t

0x031a,	// (0x0002e60e) cell_calc_pane_ParamLimits

0x031a,	// (0x0002e60e) cell_calc_pane

0xa1eb,	// (0x000384df) bg_calc_paper_pane_g1

0xa1f7,	// (0x000384eb) bg_calc_paper_pane_g2

0xa203,	// (0x000384f7) bg_calc_paper_pane_g3

0xa20f,	// (0x00038503) bg_calc_paper_pane_g4

0xa21b,	// (0x0003850f) bg_calc_paper_pane_g5

0x1ab1,	// (0x0002fda5) bg_calc_paper_pane_g6

0x1ac2,	// (0x0002fdb6) bg_calc_paper_pane_g7

0x1ad3,	// (0x0002fdc7) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0003d44c) bg_calc_paper_pane_g

0x1ae6,	// (0x0002fdda) calc_bg_paper_pane_g9

0x1af9,	// (0x0002fded) list_calc_item_pane_ParamLimits

0x1af9,	// (0x0002fded) list_calc_item_pane

0xa227,	// (0x0003851b) list_calc_item_pane_g1

0x1b13,	// (0x0002fe07) list_calc_item_pane_t1_ParamLimits

0x1b13,	// (0x0002fe07) list_calc_item_pane_t1

0x0351,	// (0x0002e645) list_calc_item_pane_t2_ParamLimits

0x0351,	// (0x0002e645) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0003d45d) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0003d45d) list_calc_item_pane_t

0xa234,	// (0x00038528) cell_calc_pane_g1

0xa23e,	// (0x00038532) grid_highlight_pane_cp02

0xa260,	// (0x00038554) bg_calc_display_pane_g1

0x1b25,	// (0x0002fe19) bg_calc_display_pane_g2

0xa269,	// (0x0003855d) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0003d467) bg_calc_display_pane_g

0x0383,	// (0x0002e677) cell_qdial_pane_ParamLimits

0x0383,	// (0x0002e677) cell_qdial_pane

0x1b2f,	// (0x0002fe23) cell_qdial_pane_g1_ParamLimits

0x1b2f,	// (0x0002fe23) cell_qdial_pane_g1

0x1b45,	// (0x0002fe39) cell_qdial_pane_g2_ParamLimits

0x1b45,	// (0x0002fe39) cell_qdial_pane_g2

0xa272,	// (0x00038566) cell_qdial_pane_g3_ParamLimits

0xa272,	// (0x00038566) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0003d46e) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0003d46e) cell_qdial_pane_g

0x1b6b,	// (0x0002fe5f) cell_qdial_pane_t1_ParamLimits

0x1b6b,	// (0x0002fe5f) cell_qdial_pane_t1

0x1b83,	// (0x0002fe77) cell_qdial_pane_t2_ParamLimits

0x1b83,	// (0x0002fe77) cell_qdial_pane_t2

0x1b96,	// (0x0002fe8a) cell_qdial_pane_t3_ParamLimits

0x1b96,	// (0x0002fe8a) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0003d477) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0003d477) cell_qdial_pane_t

0x9ea0,	// (0x00038194) grid_highlight_pane_cp04

0xa27e,	// (0x00038572) thumbnail_qdial_pane_ParamLimits

0xa27e,	// (0x00038572) thumbnail_qdial_pane

0xa2da,	// (0x000385ce) list_help_pane

0xa2e3,	// (0x000385d7) scroll_pane_cp02

0x1ba9,	// (0x0002fe9d) help_list_pane_t1_ParamLimits

0x1ba9,	// (0x0002fe9d) help_list_pane_t1

0x1bc8,	// (0x0002febc) bg_notes_pane_g2

0x1bd0,	// (0x0002fec4) bg_notes_pane_g3

0x1bd8,	// (0x0002fecc) notes_bg_pane_g1

0x1be0,	// (0x0002fed4) notes_bg_pane_g4

0x1be8,	// (0x0002fedc) notes_bg_pane_g5

0x1bf0,	// (0x0002fee4) notes_bg_pane_g6

0x1bf8,	// (0x0002feec) notes_bg_pane_g7

0x1c00,	// (0x0002fef4) notes_bg_pane_g8

0x1c08,	// (0x0002fefc) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0003d495) notes_bg_pane_g

0x1c10,	// (0x0002ff04) list_notes_text_pane_ParamLimits

0x1c10,	// (0x0002ff04) list_notes_text_pane

0xa2ec,	// (0x000385e0) list_notes_text_pane_g1

0x1c26,	// (0x0002ff1a) list_notes_text_pane_t1

0x1c34,	// (0x0002ff28) listscroll_cale_week_pane

0x1c60,	// (0x0002ff54) bg_cale_heading_pane

0xa30f,	// (0x00038603) bg_cale_pane_cp01

0x1c7e,	// (0x0002ff72) cale_week_corner_pane

0x1c9d,	// (0x0002ff91) cale_week_day_heading_pane

0x1cc0,	// (0x0002ffb4) cale_week_scroll_pane_g1

0x1cd9,	// (0x0002ffcd) cale_week_scroll_pane_g2

0x1cf1,	// (0x0002ffe5) cale_week_scroll_pane_g3

0x1d09,	// (0x0002fffd) cale_week_scroll_pane_g4

0x1d21,	// (0x00030015) cale_week_scroll_pane_g5

0x1d3d,	// (0x00030031) cale_week_scroll_pane_g6

0x1d5d,	// (0x00030051) cale_week_scroll_pane_g7

0x1d7d,	// (0x00030071) cale_week_scroll_pane_g8

0x1da1,	// (0x00030095) cale_week_scroll_pane_g9

0x1db9,	// (0x000300ad) cale_week_scroll_pane_g10

0x1dd1,	// (0x000300c5) cale_week_scroll_pane_g11

0x1de9,	// (0x000300dd) cale_week_scroll_pane_g12

0x1e01,	// (0x000300f5) cale_week_scroll_pane_g13

0x1e01,	// (0x000300f5) cale_week_scroll_pane_g14

0x1e01,	// (0x000300f5) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0003d4a4) cale_week_scroll_pane_g

0x1e3d,	// (0x00030131) cale_week_time_pane

0x1e61,	// (0x00030155) grid_cale_week_pane

0xa33e,	// (0x00038632) scroll_pane_cp08

0x1e87,	// (0x0003017b) cell_cale_week_pane_ParamLimits

0x1e87,	// (0x0003017b) cell_cale_week_pane

0x1f15,	// (0x00030209) cale_week_day_heading_pane_t1

0x1f5f,	// (0x00030253) cale_week_day_heading_pane_t2

0x1fae,	// (0x000302a2) cale_week_day_heading_pane_t3

0x1ffd,	// (0x000302f1) cale_week_day_heading_pane_t4

0x204c,	// (0x00030340) cale_week_day_heading_pane_t5

0x20a3,	// (0x00030397) cale_week_day_heading_pane_t6

0x20fa,	// (0x000303ee) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0003d4c5) cale_week_day_heading_pane_t

0xa35b,	// (0x0003864f) bg_cale_side_pane

0x0397,	// (0x0002e68b) cale_week_time_pane_t1

0x03b1,	// (0x0002e6a5) cale_week_time_pane_t2

0x03cb,	// (0x0002e6bf) cale_week_time_pane_t3

0x03e5,	// (0x0002e6d9) cale_week_time_pane_t4

0x03ff,	// (0x0002e6f3) cale_week_time_pane_t5

0x0419,	// (0x0002e70d) cale_week_time_pane_t6

0x0433,	// (0x0002e727) cale_week_time_pane_t7

0x0453,	// (0x0002e747) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0003d4d4) cale_week_time_pane_t

0x2144,	// (0x00030438) cell_cale_week_pane_g2

0x2168,	// (0x0003045c) cell_cale_week_pane_g3_ParamLimits

0x2168,	// (0x0003045c) cell_cale_week_pane_g3

0xa369,	// (0x0003865d) grid_highlight_pane_cp07

0xa371,	// (0x00038665) listscroll_gms_pane

0xa37b,	// (0x0003866f) grid_gms_pane

0xa384,	// (0x00038678) listscroll_gms_pane_g1

0xa38c,	// (0x00038680) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0003d4e5) listscroll_gms_pane_g

0x2180,	// (0x00030474) scroll_pane_cp010

0x218b,	// (0x0003047f) cell_gms_pane_ParamLimits

0x218b,	// (0x0003047f) cell_gms_pane

0x219d,	// (0x00030491) cell_gms_pane_g1

0xa394,	// (0x00038688) cell_gms_pane_g2

0xa2ec,	// (0x000385e0) cell_gms_pane_g3

0xa39c,	// (0x00038690) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0003d4ea) cell_gms_pane_g

0xa3a5,	// (0x00038699) grid_highlight_pane_cp09

0x4788,	// (0x00032a7c) phob_pre_status_pane_g1

0x4790,	// (0x00032a84) phob_pre_status_pane_g2

0x4798,	// (0x00032a8c) phob_pre_status_pane_g3

0x47a0,	// (0x00032a94) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0003d8d5) phob_pre_status_pane_g

0x47b0,	// (0x00032aa4) phob_pre_status_pane_t1

0x47be,	// (0x00032ab2) phob_pre_status_pane_t2

0x47ce,	// (0x00032ac2) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0003d8e0) phob_pre_status_pane_t

0xa3ad,	// (0x000386a1) bg_list_pane_cp05

0x21ad,	// (0x000304a1) grid_vorec_pane

0x21b7,	// (0x000304ab) vorec_t1

0x21c5,	// (0x000304b9) vorec_t2

0x21d3,	// (0x000304c7) vorec_t3

0x21e1,	// (0x000304d5) vorec_t4

0x1729,	// (0x0002fa1d) vorec_t5

0x1737,	// (0x0002fa2b) vorec_t6

0x0004,

0xf1ff,	// (0x0003d4f3) vorec_t

0x1745,	// (0x0002fa39) wait_bar_pane_cp01

0x21fd,	// (0x000304f1) cell_vorec_pane_ParamLimits

0x21fd,	// (0x000304f1) cell_vorec_pane

0x2210,	// (0x00030504) cell_vorec_pane_g1

0x9ea0,	// (0x00038194) grid_highlight_pane_cp05

0x2232,	// (0x00030526) cams_zoom_pane

0x2241,	// (0x00030535) image_vga_pane

0x225b,	// (0x0003054f) main_camera_pane_g1

0x226d,	// (0x00030561) main_camera_pane_g2

0x227d,	// (0x00030571) main_camera_pane_g3

0x228f,	// (0x00030583) main_camera_pane_g4

0x22a1,	// (0x00030595) main_camera_pane_g5

0x22b3,	// (0x000305a7) main_camera_pane_g6

0x22c5,	// (0x000305b9) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0003d4fe) main_camera_pane_g

0x22d7,	// (0x000305cb) main_camera_pane_t1

0x22ed,	// (0x000305e1) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0003d50f) main_camera_pane_t

0x2329,	// (0x0003061d) cams_zoom_pane_cp_ParamLimits

0x2329,	// (0x0003061d) cams_zoom_pane_cp

0x2351,	// (0x00030645) image_cif_pane_ParamLimits

0x2351,	// (0x00030645) image_cif_pane

0x238c,	// (0x00030680) image_subqcif_pane

0x2394,	// (0x00030688) main_video_pane_g1_ParamLimits

0x2394,	// (0x00030688) main_video_pane_g1

0x23b8,	// (0x000306ac) main_video_pane_g2_ParamLimits

0x23b8,	// (0x000306ac) main_video_pane_g2

0x23ec,	// (0x000306e0) main_video_pane_g3_ParamLimits

0x23ec,	// (0x000306e0) main_video_pane_g3

0x241a,	// (0x0003070e) main_video_pane_g4_ParamLimits

0x241a,	// (0x0003070e) main_video_pane_g4

0x2448,	// (0x0003073c) main_video_pane_g5_ParamLimits

0x2448,	// (0x0003073c) main_video_pane_g5

0xa3c1,	// (0x000386b5) main_video_pane_g6_ParamLimits

0xa3c1,	// (0x000386b5) main_video_pane_g6

0x0006,

0xf220,	// (0x0003d514) main_video_pane_g_ParamLimits

0xf220,	// (0x0003d514) main_video_pane_g

0x2471,	// (0x00030765) main_video_pane_t1_ParamLimits

0x2471,	// (0x00030765) main_video_pane_t1

0xa3db,	// (0x000386cf) cams_zoom_pane_g1

0xa3e4,	// (0x000386d8) cams_zoom_pane_g2

0xa3ed,	// (0x000386e1) cams_zoom_pane_g3

0xa3f6,	// (0x000386ea) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0003d523) cams_zoom_pane_g

0x24ce,	// (0x000307c2) grid_cams_pane

0x24e8,	// (0x000307dc) linegrid_cams_pane

0x24fb,	// (0x000307ef) cell_cams_pane_ParamLimits

0x24fb,	// (0x000307ef) cell_cams_pane

0xa3ff,	// (0x000386f3) cams_burst_image_pane

0xa407,	// (0x000386fb) cell_cams_pane_g1

0x9ea0,	// (0x00038194) grid_highlight_pane_cp03

0xa234,	// (0x00038528) mp_bg_pane_g1

0x9ea0,	// (0x00038194) bg_list_pane_cp03

0xc1a9,	// (0x0003a49d) bg_mp_pane

0xc1b1,	// (0x0003a4a5) grid_mp_pane

0xc1b9,	// (0x0003a4ad) media_player_g1

0xc1c1,	// (0x0003a4b5) media_player_t1

0xc1cf,	// (0x0003a4c3) media_player_t2

0xc1dd,	// (0x0003a4d1) media_player_t3

0xc1eb,	// (0x0003a4df) media_player_t4

0xc1f9,	// (0x0003a4ed) media_player_t5

0xc207,	// (0x0003a4fb) media_player_t6

0xc215,	// (0x0003a509) media_player_t7

0x0006,

0xf5cb,	// (0x0003d8bf) media_player_t

0xc223,	// (0x0003a517) wait_bar_pane_cp02

0xf5b0,	// (0x0003d8a4) main_usb_pane_t

0x477f,	// (0x00032a73) cell_mp_pane

0xa234,	// (0x00038528) cell_mp_pane_g1

0x9ea0,	// (0x00038194) grid_highlight_pane_cp06

0xa40f,	// (0x00038703) grid_skin_colour_pane

0xa417,	// (0x0003870b) list_highlight_pane_cp03

0x2631,	// (0x00030925) skin_g1

0xa41f,	// (0x00038713) skin_t1

0xa42e,	// (0x00038722) skin_t2

0x0001,

0xf264,	// (0x0003d558) skin_t

0x2639,	// (0x0003092d) cell_skin_colour_pane_ParamLimits

0x2639,	// (0x0003092d) cell_skin_colour_pane

0xa43c,	// (0x00038730) cell_skin_colour_pane_g1

0x26b2,	// (0x000309a6) call_video_g1_ParamLimits

0x26b2,	// (0x000309a6) call_video_g1

0x26ce,	// (0x000309c2) call_video_g2_ParamLimits

0x26ce,	// (0x000309c2) call_video_g2

0x0001,

0xf269,	// (0x0003d55d) call_video_g_ParamLimits

0xf269,	// (0x0003d55d) call_video_g

0x2720,	// (0x00030a14) call_video_uplink_pane_cp1_ParamLimits

0x2720,	// (0x00030a14) call_video_uplink_pane_cp1

0xa44e,	// (0x00038742) call_video_uplink_pane_cp2

0x27bf,	// (0x00030ab3) video_down_crop_pane_ParamLimits

0x27bf,	// (0x00030ab3) video_down_crop_pane

0x28a8,	// (0x00030b9c) video_down_pane_ParamLimits

0x28a8,	// (0x00030b9c) video_down_pane

0xa456,	// (0x0003874a) video_down_subqcif_pane_ParamLimits

0xa456,	// (0x0003874a) video_down_subqcif_pane

0xa46e,	// (0x00038762) video_down_subqcif_pane_cp_ParamLimits

0xa46e,	// (0x00038762) video_down_subqcif_pane_cp

0xa494,	// (0x00038788) im_reading_pane_ParamLimits

0xa494,	// (0x00038788) im_reading_pane

0x29b6,	// (0x00030caa) im_writing_pane_ParamLimits

0x29b6,	// (0x00030caa) im_writing_pane

0x29cc,	// (0x00030cc0) im_reading_pane_t1

0xa4ae,	// (0x000387a2) list_im_pane

0xa4bf,	// (0x000387b3) scroll_pane_cp07

0x2a09,	// (0x00030cfd) im_writing_pane_t1_ParamLimits

0x2a09,	// (0x00030cfd) im_writing_pane_t1

0xa4d8,	// (0x000387cc) im_writing_pane_t2_ParamLimits

0xa4d8,	// (0x000387cc) im_writing_pane_t2

0x0001,

0xf273,	// (0x0003d567) im_writing_pane_t_ParamLimits

0xf273,	// (0x0003d567) im_writing_pane_t

0x9ea0,	// (0x00038194) input_focus_pane_cp04

0x9ea0,	// (0x00038194) input_focus_pane_cp05

0x2a1e,	// (0x00030d12) list_im_single_pane_ParamLimits

0x2a1e,	// (0x00030d12) list_im_single_pane

0x2a34,	// (0x00030d28) list_single_im_pane_t1

0x473f,	// (0x00032a33) blid_accuracy_pane

0x4747,	// (0x00032a3b) blid_compass_pane

0x4751,	// (0x00032a45) main_location_t1

0x4761,	// (0x00032a55) main_location_t2

0x4771,	// (0x00032a65) main_location_t3

0x0002,

0xf5da,	// (0x0003d8ce) main_location_t

0x9ea0,	// (0x00038194) aid_levels_location

0xa234,	// (0x00038528) blid_accuracy_pane_g1

0xa234,	// (0x00038528) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0003d5c9) blid_accuracy_pane_g

0xa520,	// (0x00038814) wml_content_pane

0xa55e,	// (0x00038852) wml_button_pane_ParamLimits

0xa55e,	// (0x00038852) wml_button_pane

0x2a43,	// (0x00030d37) wml_list_single_large_pane_ParamLimits

0x2a43,	// (0x00030d37) wml_list_single_large_pane

0x2a59,	// (0x00030d4d) wml_list_single_medium_pane_ParamLimits

0x2a59,	// (0x00030d4d) wml_list_single_medium_pane

0x2a73,	// (0x00030d67) wml_list_single_small_pane_ParamLimits

0x2a73,	// (0x00030d67) wml_list_single_small_pane

0xa572,	// (0x00038866) wml_selection_box_pane_ParamLimits

0xa572,	// (0x00038866) wml_selection_box_pane

0xa585,	// (0x00038879) wml_list_single_pane_t1

0xa594,	// (0x00038888) wml_list_single_medium_pane_t1

0xa5a3,	// (0x00038897) wml_list_single_large_pane_t1

0xa5b2,	// (0x000388a6) input_focus_pane_cp02_ParamLimits

0xa5b2,	// (0x000388a6) input_focus_pane_cp02

0xa5c5,	// (0x000388b9) wml_selection_box_pane_g1

0xa5ce,	// (0x000388c2) wml_selection_box_pane_t1_ParamLimits

0xa5ce,	// (0x000388c2) wml_selection_box_pane_t1

0xa0fb,	// (0x000383ef) bg_wml_button_pane_ParamLimits

0xa0fb,	// (0x000383ef) bg_wml_button_pane

0xa5e6,	// (0x000388da) wml_button_pane_g1

0xa5ee,	// (0x000388e2) wml_button_pane_t1

0xa5e6,	// (0x000388da) wml_button_bg_pane_g1

0xa5fe,	// (0x000388f2) wml_button_bg_pane_g2

0xa606,	// (0x000388fa) wml_button_bg_pane_g3

0xa60e,	// (0x00038902) wml_button_bg_pane_g4

0xa616,	// (0x0003890a) wml_button_bg_pane_g5

0xa61e,	// (0x00038912) wml_button_bg_pane_g6

0xa626,	// (0x0003891a) wml_button_bg_pane_g7

0xa62e,	// (0x00038922) wml_button_bg_pane_g8

0xa636,	// (0x0003892a) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0003d56c) wml_button_bg_pane_g

0x2a8d,	// (0x00030d81) bg_list_pane_cp02

0xa63e,	// (0x00038932) mce_header_pane_ParamLimits

0xa63e,	// (0x00038932) mce_header_pane

0xa654,	// (0x00038948) mce_icon_pane

0xa654,	// (0x00038948) mce_image_pane

0xa65d,	// (0x00038951) mce_text_pane_ParamLimits

0xa65d,	// (0x00038951) mce_text_pane

0x2a95,	// (0x00030d89) scroll_pane_cp03

0xa556,	// (0x0003884a) scroll_pane_cp04

0xa670,	// (0x00038964) scroll_pane_cp05_ParamLimits

0xa670,	// (0x00038964) scroll_pane_cp05

0x2a9f,	// (0x00030d93) mce_header_field_pane_ParamLimits

0x2a9f,	// (0x00030d93) mce_header_field_pane

0x2ab6,	// (0x00030daa) mce_header_field_pane_2_ParamLimits

0x2ab6,	// (0x00030daa) mce_header_field_pane_2

0x2acc,	// (0x00030dc0) mce_header_field_pane_3

0x2ad4,	// (0x00030dc8) list_single_mce_message_pane_ParamLimits

0x2ad4,	// (0x00030dc8) list_single_mce_message_pane

0x2aeb,	// (0x00030ddf) list_single_mce_smart_pane_ParamLimits

0x2aeb,	// (0x00030ddf) list_single_mce_smart_pane

0xa67c,	// (0x00038970) input_focus_pane_cp03

0xa685,	// (0x00038979) list_header_data_pane

0x2b0d,	// (0x00030e01) mce_header_field_pane_t1

0x2b1d,	// (0x00030e11) list_single_mce_header_pane_ParamLimits

0x2b1d,	// (0x00030e11) list_single_mce_header_pane

0xa68d,	// (0x00038981) list_single_mce_header_pane_t1

0xa69c,	// (0x00038990) list_single_mce_message_pane_g1

0xa6a4,	// (0x00038998) list_single_mce_message_pane_t1

0x2b57,	// (0x00030e4b) bg_cale_heading_pane_cp01_ParamLimits

0x2b57,	// (0x00030e4b) bg_cale_heading_pane_cp01

0xa6b2,	// (0x000389a6) bg_cale_pane_cp02_ParamLimits

0xa6b2,	// (0x000389a6) bg_cale_pane_cp02

0x2b92,	// (0x00030e86) cale_month_corner_pane

0x2bb1,	// (0x00030ea5) cale_month_day_heading_pane_ParamLimits

0x2bb1,	// (0x00030ea5) cale_month_day_heading_pane

0x2c04,	// (0x00030ef8) cale_month_pane_g1_ParamLimits

0x2c04,	// (0x00030ef8) cale_month_pane_g1

0x2c34,	// (0x00030f28) cale_month_pane_g2_ParamLimits

0x2c34,	// (0x00030f28) cale_month_pane_g2

0x2c64,	// (0x00030f58) cale_month_pane_g3_ParamLimits

0x2c64,	// (0x00030f58) cale_month_pane_g3

0x2ca0,	// (0x00030f94) cale_month_pane_g4_ParamLimits

0x2ca0,	// (0x00030f94) cale_month_pane_g4

0x2cdc,	// (0x00030fd0) cale_month_pane_g5_ParamLimits

0x2cdc,	// (0x00030fd0) cale_month_pane_g5

0x2d24,	// (0x00031018) cale_month_pane_g6_ParamLimits

0x2d24,	// (0x00031018) cale_month_pane_g6

0x2d70,	// (0x00031064) cale_month_pane_g7_ParamLimits

0x2d70,	// (0x00031064) cale_month_pane_g7

0x2dc4,	// (0x000310b8) cale_month_pane_g8_ParamLimits

0x2dc4,	// (0x000310b8) cale_month_pane_g8

0x2e18,	// (0x0003110c) cale_month_pane_g9_ParamLimits

0x2e18,	// (0x0003110c) cale_month_pane_g9

0x2e6a,	// (0x0003115e) cale_month_pane_g10_ParamLimits

0x2e6a,	// (0x0003115e) cale_month_pane_g10

0x2ebc,	// (0x000311b0) cale_month_pane_g11_ParamLimits

0x2ebc,	// (0x000311b0) cale_month_pane_g11

0x2f0e,	// (0x00031202) cale_month_pane_g12_ParamLimits

0x2f0e,	// (0x00031202) cale_month_pane_g12

0x2f60,	// (0x00031254) cale_month_pane_g13_ParamLimits

0x2f60,	// (0x00031254) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0003d57f) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0003d57f) cale_month_pane_g

0x2fb2,	// (0x000312a6) cale_month_week_pane

0x2fd6,	// (0x000312ca) grid_cale_month_pane_ParamLimits

0x2fd6,	// (0x000312ca) grid_cale_month_pane

0x3014,	// (0x00031308) cale_month_day_heading_pane_t1

0x309a,	// (0x0003138e) cale_month_day_heading_pane_t2

0x312b,	// (0x0003141f) cale_month_day_heading_pane_t3

0x31bc,	// (0x000314b0) cale_month_day_heading_pane_t4

0x3255,	// (0x00031549) cale_month_day_heading_pane_t5

0x32f6,	// (0x000315ea) cale_month_day_heading_pane_t6

0x3397,	// (0x0003168b) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0003d59a) cale_month_day_heading_pane_t

0xa35b,	// (0x0003864f) bg_cale_side_pane_cp01

0x3440,	// (0x00031734) cale_month_week_pane_t1

0x3459,	// (0x0003174d) cale_month_week_pane_t2

0x3472,	// (0x00031766) cale_month_week_pane_t3

0x348b,	// (0x0003177f) cale_month_week_pane_t4

0x34a4,	// (0x00031798) cale_month_week_pane_t5

0x34bd,	// (0x000317b1) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0003d5a9) cale_month_week_pane_t

0x34d6,	// (0x000317ca) cell_cale_month_pane_ParamLimits

0x34d6,	// (0x000317ca) cell_cale_month_pane

0x362e,	// (0x00031922) cell_cale_month_pane_g1

0x0473,	// (0x0002e767) cell_cale_month_pane_t1_ParamLimits

0x0473,	// (0x0002e767) cell_cale_month_pane_t1

0xa369,	// (0x0003865d) grid_highlight_pane_cp08

0xa234,	// (0x00038528) main_smil_g1

0x363a,	// (0x0003192e) smil_status_pane

0xa6f1,	// (0x000389e5) smil_text_pane

0xc0c9,	// (0x0003a3bd) bg_popup_call3_rect_pane_g8

0xc0d1,	// (0x0003a3c5) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0003d862) bg_popup_call3_rect_pane_g

0xc318,	// (0x0003a60c) smil_status_volume_pane_g1

0xa6fb,	// (0x000389ef) smil_status_pane_t1

0x4ad6,	// (0x00032dca) volume_smil_pane

0xa712,	// (0x00038a06) list_smil_text_pane

0x364f,	// (0x00031943) scroll_pane_cp011

0x365a,	// (0x0003194e) smil_text_list_pane_t1_ParamLimits

0x365a,	// (0x0003194e) smil_text_list_pane_t1

0x369c,	// (0x00031990) aid_volume_smil_ParamLimits

0x369c,	// (0x00031990) aid_volume_smil

0xa234,	// (0x00038528) smil_volume_pane_g1

0xa234,	// (0x00038528) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0003d5c9) smil_volume_pane_g

0x1c34,	// (0x0002ff28) listscroll_cale_day_pane

0xa71c,	// (0x00038a10) bg_cale_pane

0xa734,	// (0x00038a28) list_cale_pane

0xa757,	// (0x00038a4b) scroll_pane_cp09

0xa768,	// (0x00038a5c) cale_bg_pane_g1

0xa770,	// (0x00038a64) cale_bg_pane_g2

0xa778,	// (0x00038a6c) cale_bg_pane_g3

0xa780,	// (0x00038a74) cale_bg_pane_g4

0xa788,	// (0x00038a7c) cale_bg_pane_g5

0xa790,	// (0x00038a84) cale_bg_pane_g6

0xa798,	// (0x00038a8c) cale_bg_pane_g7

0xa7a0,	// (0x00038a94) cale_bg_pane_g8

0xa7a8,	// (0x00038a9c) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0003d5ce) cale_bg_pane_g

0x36be,	// (0x000319b2) list_cale_time_pane_ParamLimits

0x36be,	// (0x000319b2) list_cale_time_pane

0xa7b8,	// (0x00038aac) list_cale_time_pane_g1_ParamLimits

0xa7b8,	// (0x00038aac) list_cale_time_pane_g1

0xa7d2,	// (0x00038ac6) list_cale_time_pane_g2_ParamLimits

0xa7d2,	// (0x00038ac6) list_cale_time_pane_g2

0x36d5,	// (0x000319c9) list_cale_time_pane_g3_ParamLimits

0x36d5,	// (0x000319c9) list_cale_time_pane_g3

0x36e3,	// (0x000319d7) list_cale_time_pane_g4_ParamLimits

0x36e3,	// (0x000319d7) list_cale_time_pane_g4

0x36f1,	// (0x000319e5) list_cale_time_pane_g5_ParamLimits

0x36f1,	// (0x000319e5) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0003d5e1) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0003d5e1) list_cale_time_pane_g

0xa7ec,	// (0x00038ae0) list_cale_time_pane_t1_ParamLimits

0xa7ec,	// (0x00038ae0) list_cale_time_pane_t1

0xa814,	// (0x00038b08) list_cale_time_pane_t2_ParamLimits

0xa814,	// (0x00038b08) list_cale_time_pane_t2

0x3ab4,	// (0x00031da8) aid_blid_cardinal_pane

0x3af2,	// (0x00031de6) compass_pane_t4

0xa83c,	// (0x00038b30) list_cale_time_pane_t4_ParamLimits

0xa83c,	// (0x00038b30) list_cale_time_pane_t4

0x3b00,	// (0x00031df4) compass_pane_t5

0x3b0e,	// (0x00031e02) compass_pane_t6

0x3b1c,	// (0x00031e10) compass_pane_t7

0xacf9,	// (0x00038fed) navi_pane_cc_t1

0xaed6,	// (0x000391ca) aid_phob_thumbnail_center_pane

0x414f,	// (0x00032443) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0003d5ee) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0003d5ee) list_cale_time_pane_t

0x9af7,	// (0x00037deb) bg_popup_window_pane_cp02_ParamLimits

0x9af7,	// (0x00037deb) bg_popup_window_pane_cp02

0xa864,	// (0x00038b58) heading_pane_cp01_ParamLimits

0xa864,	// (0x00038b58) heading_pane_cp01

0xa870,	// (0x00038b64) loc_req_pane_ParamLimits

0xa870,	// (0x00038b64) loc_req_pane

0xa880,	// (0x00038b74) loc_type_pane_ParamLimits

0xa880,	// (0x00038b74) loc_type_pane

0xa892,	// (0x00038b86) loc_type_pane_t1_ParamLimits

0xa892,	// (0x00038b86) loc_type_pane_t1

0xa8a4,	// (0x00038b98) loc_type_pane_t2_ParamLimits

0xa8a4,	// (0x00038b98) loc_type_pane_t2

0xa8b6,	// (0x00038baa) loc_type_pane_t3_ParamLimits

0xa8b6,	// (0x00038baa) loc_type_pane_t3

0x0002,

0xf301,	// (0x0003d5f5) loc_type_pane_t_ParamLimits

0xf301,	// (0x0003d5f5) loc_type_pane_t

0xa8c8,	// (0x00038bbc) list_loc_req_pane

0xa8d2,	// (0x00038bc6) scroll_pane_cp012

0x36ff,	// (0x000319f3) list_single_loc_request_popup_menu_pane_ParamLimits

0x36ff,	// (0x000319f3) list_single_loc_request_popup_menu_pane

0xa8dd,	// (0x00038bd1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa8dd,	// (0x00038bd1) list_single_loc_request_popup_menu_pane_g1

0xa8e9,	// (0x00038bdd) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa8e9,	// (0x00038bdd) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0003d5fc) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0003d5fc) list_single_loc_request_popup_menu_pane_g

0xa8f5,	// (0x00038be9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa8f5,	// (0x00038be9) list_single_loc_request_popup_menu_pane_t1

0xa0fb,	// (0x000383ef) bg_popup_window_pane_cp03_ParamLimits

0xa0fb,	// (0x000383ef) bg_popup_window_pane_cp03

0xa90b,	// (0x00038bff) heading_loc_req_pane_ParamLimits

0xa90b,	// (0x00038bff) heading_loc_req_pane

0x370c,	// (0x00031a00) popup_dyc_status_message_window_g1_ParamLimits

0x370c,	// (0x00031a00) popup_dyc_status_message_window_g1

0x3720,	// (0x00031a14) popup_dyc_status_message_window_t1_ParamLimits

0x3720,	// (0x00031a14) popup_dyc_status_message_window_t1

0x3735,	// (0x00031a29) popup_dyc_status_message_window_t2_ParamLimits

0x3735,	// (0x00031a29) popup_dyc_status_message_window_t2

0x374a,	// (0x00031a3e) popup_dyc_status_message_window_t3_ParamLimits

0x374a,	// (0x00031a3e) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0003d601) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0003d601) popup_dyc_status_message_window_t

0x9ea0,	// (0x00038194) bg_heading_pane_cp01

0xa917,	// (0x00038c0b) heading_loc_req_pane_g1

0xa91f,	// (0x00038c13) heading_loc_req_pane_g2

0xa927,	// (0x00038c1b) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0003d608) heading_loc_req_pane_g

0xa92f,	// (0x00038c23) heading_loc_req_pane_t1

0xa93e,	// (0x00038c32) bg_popup_sub_pane_cp01_ParamLimits

0xa93e,	// (0x00038c32) bg_popup_sub_pane_cp01

0xa94c,	// (0x00038c40) popup_cale_events_window_g1_ParamLimits

0xa94c,	// (0x00038c40) popup_cale_events_window_g1

0xa96c,	// (0x00038c60) popup_cale_events_window_g2_ParamLimits

0xa96c,	// (0x00038c60) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0003d63c) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0003d63c) popup_cale_events_window_g

0xa98c,	// (0x00038c80) popup_cale_events_window_t1_ParamLimits

0xa98c,	// (0x00038c80) popup_cale_events_window_t1

0xa99e,	// (0x00038c92) popup_cale_events_window_t2_ParamLimits

0xa99e,	// (0x00038c92) popup_cale_events_window_t2

0xa9dc,	// (0x00038cd0) popup_cale_events_window_t3_ParamLimits

0xa9dc,	// (0x00038cd0) popup_cale_events_window_t3

0xaa16,	// (0x00038d0a) popup_cale_events_window_t4_ParamLimits

0xaa16,	// (0x00038d0a) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0003d641) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0003d641) popup_cale_events_window_t

0x384f,	// (0x00031b43) call_type_pane

0x385f,	// (0x00031b53) popup_call_status_window_g1

0x3873,	// (0x00031b67) popup_call_status_window_g2

0x3887,	// (0x00031b7b) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0003d64a) popup_call_status_window_g

0xaa4c,	// (0x00038d40) call_type_pane_g1

0xaa55,	// (0x00038d49) call_type_pane_g2

0x0001,

0xf35d,	// (0x0003d651) call_type_pane_g

0x9ea0,	// (0x00038194) bg_popup_sub_pane_cp02

0xaa5e,	// (0x00038d52) listscroll_popup_wml_pane

0xaa66,	// (0x00038d5a) list_wml_pane

0xaa70,	// (0x00038d64) scroll_pane_cp013

0xaa7b,	// (0x00038d6f) list_single_graphic_popup_wml_pane_ParamLimits

0xaa7b,	// (0x00038d6f) list_single_graphic_popup_wml_pane

0xa234,	// (0x00038528) list_single_graphic_popup_wml_pane_g1

0xaa8f,	// (0x00038d83) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0003d656) list_single_graphic_popup_wml_pane_g

0xaa97,	// (0x00038d8b) list_single_graphic_popup_wml_pane_t1

0xaaad,	// (0x00038da1) aid_call_pane

0xa0f3,	// (0x000383e7) popup_clock_analogue_window_g1

0xa0f3,	// (0x000383e7) popup_clock_analogue_window_g2

0x3896,	// (0x00031b8a) popup_clock_analogue_window_g3

0x3896,	// (0x00031b8a) popup_clock_analogue_window_g4

0xa234,	// (0x00038528) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0003d65b) popup_clock_analogue_window_g

0x389e,	// (0x00031b92) popup_clock_analogue_window_t1

0x38ac,	// (0x00031ba0) clock_digital_number_pane_ParamLimits

0x38ac,	// (0x00031ba0) clock_digital_number_pane

0x38b8,	// (0x00031bac) clock_digital_number_pane_cp02_ParamLimits

0x38b8,	// (0x00031bac) clock_digital_number_pane_cp02

0x38c4,	// (0x00031bb8) clock_digital_number_pane_cp03_ParamLimits

0x38c4,	// (0x00031bb8) clock_digital_number_pane_cp03

0x38d0,	// (0x00031bc4) clock_digital_number_pane_cp04_ParamLimits

0x38d0,	// (0x00031bc4) clock_digital_number_pane_cp04

0x38e0,	// (0x00031bd4) clock_digital_separator_pane_ParamLimits

0x38e0,	// (0x00031bd4) clock_digital_separator_pane

0x38ec,	// (0x00031be0) popup_clock_digital_window_t1

0xa234,	// (0x00038528) clock_digital_number_pane_g1

0xa234,	// (0x00038528) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0003d5c9) clock_digital_number_pane_g

0xa234,	// (0x00038528) clock_digital_separator_pane_g1

0xa234,	// (0x00038528) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0003d5c9) clock_digital_separator_pane_g

0x9ea0,	// (0x00038194) bg_popup_window_pane_cp04

0xaab5,	// (0x00038da9) heading_pane_cp03

0xaabd,	// (0x00038db1) listscroll_popup_gms_pane

0xaac5,	// (0x00038db9) grid_large_graphic_popup_pane

0xaacf,	// (0x00038dc3) listscroll_popup_gms_pane_g1

0xaad7,	// (0x00038dcb) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0003d666) listscroll_popup_gms_pane_g

0xa556,	// (0x0003884a) scroll_pane_cp014

0xaadf,	// (0x00038dd3) cell_large_graphic_popup_pane_ParamLimits

0xaadf,	// (0x00038dd3) cell_large_graphic_popup_pane

0xaaf7,	// (0x00038deb) cell_large_graphic_popup_pane_g1_ParamLimits

0xaaf7,	// (0x00038deb) cell_large_graphic_popup_pane_g1

0xab03,	// (0x00038df7) cell_large_graphic_popup_pane_g2_ParamLimits

0xab03,	// (0x00038df7) cell_large_graphic_popup_pane_g2

0xab0f,	// (0x00038e03) cell_large_graphic_popup_pane_g3_ParamLimits

0xab0f,	// (0x00038e03) cell_large_graphic_popup_pane_g3

0xab1c,	// (0x00038e10) cell_large_graphic_popup_pane_g4_ParamLimits

0xab1c,	// (0x00038e10) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0003d66b) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0003d66b) cell_large_graphic_popup_pane_g

0xab2c,	// (0x00038e20) grid_highlight_pane_cp010

0xa234,	// (0x00038528) bg_popup_call_pane_g1

0xab36,	// (0x00038e2a) list_single_graphic_popup_conf_pane_ParamLimits

0xab36,	// (0x00038e2a) list_single_graphic_popup_conf_pane

0xab49,	// (0x00038e3d) list_highlight_pane_cp01

0xab52,	// (0x00038e46) list_single_graphic_popup_conf_pane_g1

0xab5a,	// (0x00038e4e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0003d674) list_single_graphic_popup_conf_pane_g

0xab62,	// (0x00038e56) list_single_graphic_popup_conf_pane_t1

0xab70,	// (0x00038e64) linegrid_cams_pane_g1

0x3909,	// (0x00031bfd) linegrid_cams_pane_g2

0xa2ec,	// (0x000385e0) linegrid_cams_pane_g3

0xab79,	// (0x00038e6d) linegrid_cams_pane_g4

0x3912,	// (0x00031c06) linegrid_cams_pane_g5

0x391b,	// (0x00031c0f) linegrid_cams_pane_g6

0xa39c,	// (0x00038690) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0003d679) linegrid_cams_pane_g

0xab82,	// (0x00038e76) popup_clock_analogue_window

0xab82,	// (0x00038e76) popup_clock_digital_window

0x9ea0,	// (0x00038194) popup_phob_thumbnail_window

0xa234,	// (0x00038528) call_video_uplink_pane_g1

0xab8b,	// (0x00038e7f) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0003d688) call_video_uplink_pane_g

0xa369,	// (0x0003865d) video_uplink_pane

0xab93,	// (0x00038e87) mce_image_pane_g1

0x3926,	// (0x00031c1a) mce_image_pane_g2

0x392e,	// (0x00031c22) mce_image_pane_g3

0x3936,	// (0x00031c2a) mce_image_pane_g4

0x3940,	// (0x00031c34) mce_image_pane_g5

0x0004,

0xf399,	// (0x0003d68d) mce_image_pane_g

0xab9d,	// (0x00038e91) control_top_pane_stacon_cp01_ParamLimits

0xab9d,	// (0x00038e91) control_top_pane_stacon_cp01

0xabb1,	// (0x00038ea5) uni_indicator_pane_stacon_cp01_ParamLimits

0xabb1,	// (0x00038ea5) uni_indicator_pane_stacon_cp01

0xabc2,	// (0x00038eb6) bg_popup_sub_pane_cp03

0x3948,	// (0x00031c3c) chi_dic_find_pane

0x3950,	// (0x00031c44) listscroll_chi_dic_pane

0x3959,	// (0x00031c4d) main_pane_chidic_g1

0xabcc,	// (0x00038ec0) chi_dic_find_pane_t1

0xabda,	// (0x00038ece) find_chidic_pane

0xabe3,	// (0x00038ed7) chi_dic_list_pane_ParamLimits

0xabe3,	// (0x00038ed7) chi_dic_list_pane

0xabf4,	// (0x00038ee8) scroll_pane_cp020

0xabfc,	// (0x00038ef0) find_chidic_pane_t1

0x9ea0,	// (0x00038194) input_focus_pane_cp06

0x396c,	// (0x00031c60) list_chi_dic_pane_ParamLimits

0x396c,	// (0x00031c60) list_chi_dic_pane

0x397f,	// (0x00031c73) list_chi_dic_pane_t1_ParamLimits

0x397f,	// (0x00031c73) list_chi_dic_pane_t1

0x9ea0,	// (0x00038194) list_highlight_pane_cp020

0xac0b,	// (0x00038eff) bg_cale_heading_pane_g1

0x3992,	// (0x00031c86) bg_cale_heading_pane_g2

0x399a,	// (0x00031c8e) bg_cale_heading_pane_g3

0x39a2,	// (0x00031c96) bg_cale_heading_pane_g4

0x39ac,	// (0x00031ca0) bg_cale_heading_pane_g5

0x39b6,	// (0x00031caa) bg_cale_heading_pane_g6

0x39be,	// (0x00031cb2) bg_cale_heading_pane_g7

0x39c6,	// (0x00031cba) bg_cale_heading_pane_g8

0x39d0,	// (0x00031cc4) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0003d698) bg_cale_heading_pane_g

0xac0b,	// (0x00038eff) bg_cale_side_pane_g1

0x39da,	// (0x00031cce) bg_cale_side_pane_g2

0x39e2,	// (0x00031cd6) bg_cale_side_pane_g3

0x39ea,	// (0x00031cde) bg_cale_side_pane_g4

0x39f2,	// (0x00031ce6) bg_cale_side_pane_g5

0x39fa,	// (0x00031cee) bg_cale_side_pane_g6

0x3a02,	// (0x00031cf6) bg_cale_side_pane_g7

0x3a0a,	// (0x00031cfe) bg_cale_side_pane_g8

0x3a12,	// (0x00031d06) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0003d6ab) bg_cale_side_pane_g

0x3a1a,	// (0x00031d0e) popup_call_status_window_ParamLimits

0x3a1a,	// (0x00031d0e) popup_call_status_window

0xac13,	// (0x00038f07) stacon_top_pane

0xac1b,	// (0x00038f0f) status_pane_ParamLimits

0xac1b,	// (0x00038f0f) status_pane

0xac30,	// (0x00038f24) status_small_pane

0xac38,	// (0x00038f2c) control_pane

0x9ea0,	// (0x00038194) stacon_bottom_pane

0xac40,	// (0x00038f34) list_single_mce_smart_pane_t1_ParamLimits

0xac40,	// (0x00038f34) list_single_mce_smart_pane_t1

0xac53,	// (0x00038f47) list_single_mce_smart_pane_t2_ParamLimits

0xac53,	// (0x00038f47) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0003d6be) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0003d6be) list_single_mce_smart_pane_t

0x3a61,	// (0x00031d55) compass_pane

0x3a6a,	// (0x00031d5e) main_location2_pane_t1

0x3a7c,	// (0x00031d70) main_location2_pane_t2

0x3a8e,	// (0x00031d82) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0003d6c3) main_location2_pane_t

0xac72,	// (0x00038f66) compass_pane_g1_ParamLimits

0xac72,	// (0x00038f66) compass_pane_g1

0x3ad4,	// (0x00031dc8) compass_pane_t1

0x3ae3,	// (0x00031dd7) compass_pane_t2

0x0005,

0xf3d8,	// (0x0003d6cc) compass_pane_t

0x3b2a,	// (0x00031e1e) text_secondary_cp61

0xacf0,	// (0x00038fe4) navi_pane_cams_g5

0xad6c,	// (0x00039060) navi_pane_im_t1

0xad7a,	// (0x0003906e) navi_pane_mp_g1_ParamLimits

0xad7a,	// (0x0003906e) navi_pane_mp_g1

0xad8e,	// (0x00039082) navi_pane_mp_g2_ParamLimits

0xad8e,	// (0x00039082) navi_pane_mp_g2

0xad9a,	// (0x0003908e) navi_pane_mp_g3_ParamLimits

0xad9a,	// (0x0003908e) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0003d6e0) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0003d6e0) navi_pane_mp_g

0xada6,	// (0x0003909a) navi_pane_mp_t1

0xadb4,	// (0x000390a8) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0003d6e7) navi_pane_mp_t

0xae1f,	// (0x00039113) navi_pane_vt_g1

0xada6,	// (0x0003909a) navi_pane_vt_t1

0xae27,	// (0x0003911b) navi_slider_pane

0xa3ad,	// (0x000386a1) zooming_pane

0xae37,	// (0x0003912b) navi_slider_pane_g1

0x3b7b,	// (0x00031e6f) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0003d6ee) navi_slider_pane_g

0xae5b,	// (0x0003914f) aid_levels_zoom

0xae63,	// (0x00039157) zooming_pane_g1

0xae6b,	// (0x0003915f) zooming_pane_g2

0xae6b,	// (0x0003915f) zooming_pane_g3

0x0002,

0xf409,	// (0x0003d6fd) zooming_pane_g

0xae73,	// (0x00039167) level_10_zoom

0xae7c,	// (0x00039170) level_11_zoom

0xae85,	// (0x00039179) level_1_zoom

0xae8e,	// (0x00039182) level_2_zoom

0xae97,	// (0x0003918b) level_3_zoom

0xaea0,	// (0x00039194) level_4_zoom

0xaea9,	// (0x0003919d) level_5_zoom

0xaeb2,	// (0x000391a6) level_6_zoom

0xaebb,	// (0x000391af) level_7_zoom

0xaec4,	// (0x000391b8) level_8_zoom

0xaecd,	// (0x000391c1) level_9_zoom

0xaede,	// (0x000391d2) popup_phob_thumbnail_window_g1

0xaee6,	// (0x000391da) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0003d704) popup_phob_thumbnail_window_g

0xc22b,	// (0x0003a51f) level_1_location

0xc233,	// (0x0003a527) level_2_location

0xc23b,	// (0x0003a52f) level_3_location

0xc243,	// (0x0003a537) level_4_location

0xa3ad,	// (0x000386a1) level_5_location

0x3b8d,	// (0x00031e81) mce_icon_pane_g1

0x3b97,	// (0x00031e8b) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0003d709) mce_icon_pane_g

0x3ba1,	// (0x00031e95) main_mup_pane_g1_ParamLimits

0x3ba1,	// (0x00031e95) main_mup_pane_g1

0x3bb7,	// (0x00031eab) main_mup_pane_g2_ParamLimits

0x3bb7,	// (0x00031eab) main_mup_pane_g2

0x3bcf,	// (0x00031ec3) main_mup_pane_g3_ParamLimits

0x3bcf,	// (0x00031ec3) main_mup_pane_g3

0x3be7,	// (0x00031edb) main_mup_pane_g4_ParamLimits

0x3be7,	// (0x00031edb) main_mup_pane_g4

0x3bff,	// (0x00031ef3) main_mup_pane_g5_ParamLimits

0x3bff,	// (0x00031ef3) main_mup_pane_g5

0x3c1b,	// (0x00031f0f) main_mup_pane_g6_ParamLimits

0x3c1b,	// (0x00031f0f) main_mup_pane_g6

0x3c33,	// (0x00031f27) main_mup_pane_g7_ParamLimits

0x3c33,	// (0x00031f27) main_mup_pane_g7

0x3c4b,	// (0x00031f3f) main_mup_pane_g8_ParamLimits

0x3c4b,	// (0x00031f3f) main_mup_pane_g8

0x3c63,	// (0x00031f57) main_mup_pane_g9_ParamLimits

0x3c63,	// (0x00031f57) main_mup_pane_g9

0x3c7d,	// (0x00031f71) main_mup_pane_g10_ParamLimits

0x3c7d,	// (0x00031f71) main_mup_pane_g10

0x3c97,	// (0x00031f8b) main_mup_pane_g11_ParamLimits

0x3c97,	// (0x00031f8b) main_mup_pane_g11

0x3cab,	// (0x00031f9f) main_mup_pane_g12_ParamLimits

0x3cab,	// (0x00031f9f) main_mup_pane_g12

0x3cc1,	// (0x00031fb5) main_mup_pane_g13_ParamLimits

0x3cc1,	// (0x00031fb5) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0003d70e) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0003d70e) main_mup_pane_g

0x3cd5,	// (0x00031fc9) main_mup_pane_t1_ParamLimits

0x3cd5,	// (0x00031fc9) main_mup_pane_t1

0x3cef,	// (0x00031fe3) main_mup_pane_t2_ParamLimits

0x3cef,	// (0x00031fe3) main_mup_pane_t2

0x3d07,	// (0x00031ffb) main_mup_pane_t3_ParamLimits

0x3d07,	// (0x00031ffb) main_mup_pane_t3

0x3d1f,	// (0x00032013) main_mup_pane_t4_ParamLimits

0x3d1f,	// (0x00032013) main_mup_pane_t4

0x3d3d,	// (0x00032031) main_mup_pane_t5_ParamLimits

0x3d3d,	// (0x00032031) main_mup_pane_t5

0x3d52,	// (0x00032046) main_mup_pane_t6_ParamLimits

0x3d52,	// (0x00032046) main_mup_pane_t6

0x0005,

0xf435,	// (0x0003d729) main_mup_pane_t_ParamLimits

0xf435,	// (0x0003d729) main_mup_pane_t

0x3d64,	// (0x00032058) mup_progress_pane_ParamLimits

0x3d64,	// (0x00032058) mup_progress_pane

0x3d70,	// (0x00032064) mup_visualizer_pane_ParamLimits

0x3d70,	// (0x00032064) mup_visualizer_pane

0x3da4,	// (0x00032098) mup_volume_pane_ParamLimits

0x3da4,	// (0x00032098) mup_volume_pane

0xaeee,	// (0x000391e2) mup_visualizer_pane_g1_ParamLimits

0xaeee,	// (0x000391e2) mup_visualizer_pane_g1

0xaeee,	// (0x000391e2) mup_visualizer_pane_g2_ParamLimits

0xaeee,	// (0x000391e2) mup_visualizer_pane_g2

0xac72,	// (0x00038f66) mup_visualizer_pane_g3_ParamLimits

0xac72,	// (0x00038f66) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0003d736) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0003d736) mup_visualizer_pane_g

0xa234,	// (0x00038528) mup_volume_pane_g1

0xaf04,	// (0x000391f8) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0003d73d) mup_volume_pane_g

0xa234,	// (0x00038528) mup_progress_pane_g1

0xaf0d,	// (0x00039201) mup_progress_pane_g2

0xaf16,	// (0x0003920a) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0003d742) mup_progress_pane_g

0x9ea0,	// (0x00038194) bg_popup_window_pane_cp05

0xaf1f,	// (0x00039213) heading_pane_cp02_ParamLimits

0xaf1f,	// (0x00039213) heading_pane_cp02

0xaf39,	// (0x0003922d) list_popup_blid_pane

0xaf41,	// (0x00039235) list_blid_sat_info_pane_ParamLimits

0xaf41,	// (0x00039235) list_blid_sat_info_pane

0xaf54,	// (0x00039248) list_blid_sat_info_pane_g1

0xaf5c,	// (0x00039250) list_blid_sat_info_pane_t1

0x3eba,	// (0x000321ae) mup_equalizer_pane_ParamLimits

0x3eba,	// (0x000321ae) mup_equalizer_pane

0x3ed3,	// (0x000321c7) mup_equalizer_pane_cp1_ParamLimits

0x3ed3,	// (0x000321c7) mup_equalizer_pane_cp1

0x3ef0,	// (0x000321e4) mup_equalizer_pane_cp2_ParamLimits

0x3ef0,	// (0x000321e4) mup_equalizer_pane_cp2

0x3f0d,	// (0x00032201) mup_equalizer_pane_cp3_ParamLimits

0x3f0d,	// (0x00032201) mup_equalizer_pane_cp3

0x3f2e,	// (0x00032222) mup_equalizer_pane_cp4_ParamLimits

0x3f2e,	// (0x00032222) mup_equalizer_pane_cp4

0x3f4f,	// (0x00032243) mup_equalizer_pane_cp5

0x3f63,	// (0x00032257) mup_equalizer_pane_cp6

0x3f77,	// (0x0003226b) mup_equalizer_pane_cp7

0xc149,	// (0x0003a43d) bg_popup_call_poc_act_pane_g9

0xc151,	// (0x0003a445) bg_popup_call_poc_act_pane_g10

0xc159,	// (0x0003a44d) bg_popup_call_poc_act_pane_g11

0x000a,

0xa0fb,	// (0x000383ef) mup_scale_pane

0xa234,	// (0x00038528) mup_scale_pane_g1

0xaf6a,	// (0x0003925e) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0003d75e) mup_scale_pane_g

0xaf8e,	// (0x00039282) msg_data_pane

0xaf96,	// (0x0003928a) scroll_pane_cp017

0x3f9d,	// (0x00032291) bg_list_pane_cp04_ParamLimits

0x3f9d,	// (0x00032291) bg_list_pane_cp04

0xaf9e,	// (0x00039292) msg_data_pane_g1

0x3fc1,	// (0x000322b5) msg_data_pane_g2

0x3fc9,	// (0x000322bd) msg_data_pane_g3

0x3fd1,	// (0x000322c5) msg_data_pane_g4

0x3fd9,	// (0x000322cd) msg_data_pane_g5

0x3fe1,	// (0x000322d5) msg_data_pane_g6

0x3fe9,	// (0x000322dd) msg_data_pane_g7

0x0006,

0xf479,	// (0x0003d76d) msg_data_pane_g

0x3ff1,	// (0x000322e5) msg_text_pane_ParamLimits

0x3ff1,	// (0x000322e5) msg_text_pane

0x4018,	// (0x0003230c) qrid_highlight_pane_cp011_ParamLimits

0x4018,	// (0x0003230c) qrid_highlight_pane_cp011

0x9ea0,	// (0x00038194) msg_body_pane

0x9ea0,	// (0x00038194) msg_header_pane

0xafaf,	// (0x000392a3) input_focus_pane_cp07

0xafc4,	// (0x000392b8) msg_header_pane_t1_ParamLimits

0xafc4,	// (0x000392b8) msg_header_pane_t1

0xafd6,	// (0x000392ca) msg_header_pane_t2_ParamLimits

0xafd6,	// (0x000392ca) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0003d781) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0003d781) msg_header_pane_t

0xafe8,	// (0x000392dc) msg_body_pane_g1

0x403c,	// (0x00032330) msg_body_pane_t1_ParamLimits

0x403c,	// (0x00032330) msg_body_pane_t1

0xaff0,	// (0x000392e4) msg_body_pane_t2_ParamLimits

0xaff0,	// (0x000392e4) msg_body_pane_t2

0xb002,	// (0x000392f6) msg_body_pane_t3_ParamLimits

0xb002,	// (0x000392f6) msg_body_pane_t3

0x0002,

0xf492,	// (0x0003d786) msg_body_pane_t_ParamLimits

0xf492,	// (0x0003d786) msg_body_pane_t

0x04af,	// (0x0002e7a3) main_viewer_pane_g1_ParamLimits

0x04af,	// (0x0002e7a3) main_viewer_pane_g1

0x04bd,	// (0x0002e7b1) main_viewer_pane_g2_ParamLimits

0x04bd,	// (0x0002e7b1) main_viewer_pane_g2

0x40a3,	// (0x00032397) main_viewer_pane_g3_ParamLimits

0x40a3,	// (0x00032397) main_viewer_pane_g3

0x40b2,	// (0x000323a6) main_viewer_pane_g4_ParamLimits

0x40b2,	// (0x000323a6) main_viewer_pane_g4

0x40c1,	// (0x000323b5) main_viewer_pane_g5_ParamLimits

0x40c1,	// (0x000323b5) main_viewer_pane_g5

0x40c1,	// (0x000323b5) main_viewer_pane_g7_ParamLimits

0x40c1,	// (0x000323b5) main_viewer_pane_g7

0xa8dd,	// (0x00038bd1) main_viewer_pane_g8_ParamLimits

0xa8dd,	// (0x00038bd1) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0003d796) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0003d796) main_viewer_pane_g

0xb014,	// (0x00039308) viewer_content_pane_ParamLimits

0xb014,	// (0x00039308) viewer_content_pane

0x410c,	// (0x00032400) main_postcard_pane_g1_ParamLimits

0x410c,	// (0x00032400) main_postcard_pane_g1

0x4122,	// (0x00032416) main_postcard_pane_g2_ParamLimits

0x4122,	// (0x00032416) main_postcard_pane_g2

0x4138,	// (0x0003242c) main_postcard_pane_g3_ParamLimits

0x4138,	// (0x0003242c) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0003d7a7) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0003d7a7) main_postcard_pane_g

0x414f,	// (0x00032443) main_postcard_pane_g4

0xc32b,	// (0x0003a61f) smil_status_volume_pane_g2

0x4192,	// (0x00032486) postcard_pane_ParamLimits

0x4192,	// (0x00032486) postcard_pane

0xb022,	// (0x00039316) postcard_pane_g1_ParamLimits

0xb022,	// (0x00039316) postcard_pane_g1

0x41d4,	// (0x000324c8) postcard_pane_g2_ParamLimits

0x41d4,	// (0x000324c8) postcard_pane_g2

0x41e0,	// (0x000324d4) postcard_pane_g3_ParamLimits

0x41e0,	// (0x000324d4) postcard_pane_g3

0xb030,	// (0x00039324) postcard_pane_g4_ParamLimits

0xb030,	// (0x00039324) postcard_pane_g4

0x41ec,	// (0x000324e0) postcard_pane_g5_ParamLimits

0x41ec,	// (0x000324e0) postcard_pane_g5

0x4201,	// (0x000324f5) postcard_pane_g6_ParamLimits

0x4201,	// (0x000324f5) postcard_pane_g6

0xb022,	// (0x00039316) postcard_pane_g7_ParamLimits

0xb022,	// (0x00039316) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0003d7b4) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0003d7b4) postcard_pane_g

0x4215,	// (0x00032509) main_mp2_pane_g1_ParamLimits

0x4215,	// (0x00032509) main_mp2_pane_g1

0x4221,	// (0x00032515) main_mp2_pane_g2_ParamLimits

0x4221,	// (0x00032515) main_mp2_pane_g2

0x422d,	// (0x00032521) main_mp2_pane_g3_ParamLimits

0x422d,	// (0x00032521) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0003d7c3) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0003d7c3) main_mp2_pane_g

0x4239,	// (0x0003252d) main_mp2_pane_t1_ParamLimits

0x4239,	// (0x0003252d) main_mp2_pane_t1

0x424e,	// (0x00032542) main_mp2_pane_t2_ParamLimits

0x424e,	// (0x00032542) main_mp2_pane_t2

0x4260,	// (0x00032554) main_mp2_pane_t3_ParamLimits

0x4260,	// (0x00032554) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0003d7ca) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0003d7ca) main_mp2_pane_t

0xb03e,	// (0x00039332) pec_content_pane_ParamLimits

0xb03e,	// (0x00039332) pec_content_pane

0xa556,	// (0x0003884a) scroll_pane_cp015

0xb050,	// (0x00039344) pec_attribute_pane_ParamLimits

0xb050,	// (0x00039344) pec_attribute_pane

0x4272,	// (0x00032566) pec_content_pane_g1_ParamLimits

0x4272,	// (0x00032566) pec_content_pane_g1

0xb060,	// (0x00039354) pec_content_pane_t1_ParamLimits

0xb060,	// (0x00039354) pec_content_pane_t1

0xb072,	// (0x00039366) pec_content_pane_t2_ParamLimits

0xb072,	// (0x00039366) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0003d7d1) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0003d7d1) pec_content_pane_t

0x427e,	// (0x00032572) list_single_graphic_pane_cp01_ParamLimits

0x427e,	// (0x00032572) list_single_graphic_pane_cp01

0xa0fb,	// (0x000383ef) bg_popup_sub_pane_cp04

0xb084,	// (0x00039378) popup_mup_playback_window_g1

0xb090,	// (0x00039384) popup_mup_playback_window_t1

0xb0a5,	// (0x00039399) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0003d7d6) popup_mup_playback_window_t

0xb0dc,	// (0x000393d0) main_image_pane_g1_ParamLimits

0xb0dc,	// (0x000393d0) main_image_pane_g1

0xb11f,	// (0x00039413) scroll_pane_cp018_ParamLimits

0xb11f,	// (0x00039413) scroll_pane_cp018

0xb137,	// (0x0003942b) scroll_pane_cp016_ParamLimits

0xb137,	// (0x0003942b) scroll_pane_cp016

0x434d,	// (0x00032641) smil2_image_pane_ParamLimits

0x434d,	// (0x00032641) smil2_image_pane

0x4381,	// (0x00032675) smil2_root_pane_ParamLimits

0x4381,	// (0x00032675) smil2_root_pane

0x43b9,	// (0x000326ad) smil2_text_pane_ParamLimits

0x43b9,	// (0x000326ad) smil2_text_pane

0x9ea0,	// (0x00038194) bg_list_pane_cp06

0xb173,	// (0x00039467) grid_radio_pane

0x9ea0,	// (0x00038194) bg_popup_window_pane_cp06

0xb17b,	// (0x0003946f) main_fmradio_pane_t1

0xaab5,	// (0x00038da9) heading_pane_cp04

0xb189,	// (0x0003947d) main_fmradio_pane_t2

0xc161,	// (0x0003a455) popup_cale_lunar_info_window_g1

0xb197,	// (0x0003948b) main_fmradio_pane_t3

0xc169,	// (0x0003a45d) popup_cale_lunar_info_window_g2

0xb1a5,	// (0x00039499) main_fmradio_pane_t4

0x0001,

0xb1b3,	// (0x000394a7) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0003d8b1) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0003d7eb) main_fmradio_pane_t

0xb1c1,	// (0x000394b5) wait_bar_pane_cp03

0xb1c9,	// (0x000394bd) cell_fmradio_pane_ParamLimits

0xb1c9,	// (0x000394bd) cell_fmradio_pane

0xb022,	// (0x00039316) cell_fmradio_pane_g1_ParamLimits

0xb022,	// (0x00039316) cell_fmradio_pane_g1

0x9ea0,	// (0x00038194) grid_highlight_pane_cp011

0xb1dc,	// (0x000394d0) poc_content_pane_ParamLimits

0xb1dc,	// (0x000394d0) poc_content_pane

0xb1ee,	// (0x000394e2) scroll_pane_cp019

0x4439,	// (0x0003272d) popup_call_poc_act_window_ParamLimits

0x4439,	// (0x0003272d) popup_call_poc_act_window

0x445d,	// (0x00032751) popup_call_poc_inact_window_ParamLimits

0x445d,	// (0x00032751) popup_call_poc_inact_window

0xf594,	// (0x0003d888) bg_popup_call_poc_act_pane_g

0xc0d9,	// (0x0003a3cd) bg_popup_call_poc_inact_pane_g1

0xc0e1,	// (0x0003a3d5) bg_popup_call_poc_inact_pane_g2

0xb1f6,	// (0x000394ea) popup_call_poc_act_window_g2

0xc0e9,	// (0x0003a3dd) bg_popup_call_poc_inact_pane_g3

0xc0f1,	// (0x0003a3e5) bg_popup_call_poc_inact_pane_g4

0xc0f9,	// (0x0003a3ed) bg_popup_call_poc_inact_pane_g5

0xb1fe,	// (0x000394f2) popup_call_poc_act_window_t1_ParamLimits

0xb1fe,	// (0x000394f2) popup_call_poc_act_window_t1

0xb226,	// (0x0003951a) popup_call_poc_act_window_t2_ParamLimits

0xb226,	// (0x0003951a) popup_call_poc_act_window_t2

0xb24e,	// (0x00039542) popup_call_poc_act_window_t3_ParamLimits

0xb24e,	// (0x00039542) popup_call_poc_act_window_t3

0xb276,	// (0x0003956a) popup_call_poc_act_window_t4_ParamLimits

0xb276,	// (0x0003956a) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0003d7f6) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0003d7f6) popup_call_poc_act_window_t

0xc101,	// (0x0003a3f5) bg_popup_call_poc_inact_pane_g6

0xc109,	// (0x0003a3fd) bg_popup_call_poc_inact_pane_g7

0xc111,	// (0x0003a405) bg_popup_call_poc_inact_pane_g8

0xb288,	// (0x0003957c) popup_call_poc_inact_window_g2

0xc119,	// (0x0003a40d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0003d875) bg_popup_call_poc_inact_pane_g

0xb290,	// (0x00039584) popup_call_poc_inact_window_t1_ParamLimits

0xb290,	// (0x00039584) popup_call_poc_inact_window_t1

0xb2a5,	// (0x00039599) popup_call_poc_inact_window_t2_ParamLimits

0xb2a5,	// (0x00039599) popup_call_poc_inact_window_t2

0xb2ba,	// (0x000395ae) popup_call_poc_inact_window_t3_ParamLimits

0xb2ba,	// (0x000395ae) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0003d7ff) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0003d7ff) popup_call_poc_inact_window_t

0xc29e,	// (0x0003a592) context_pane_ParamLimits

0x4a38,	// (0x00032d2c) signal_pane_ParamLimits

0xa3ad,	// (0x000386a1) main_call2_pane

0x49c7,	// (0x00032cbb) popup_phob_thumbnail2_window_ParamLimits

0x49c7,	// (0x00032cbb) popup_phob_thumbnail2_window

0x406d,	// (0x00032361) aid_hotspot_pointer_arrow_pane

0x4075,	// (0x00032369) aid_hotspot_pointer_hand_pane

0x47a8,	// (0x00032a9c) phob_pre_status_pane_g5

0x2232,	// (0x00030526) cams_zoom_pane_ParamLimits

0x2241,	// (0x00030535) image_vga_pane_ParamLimits

0x225b,	// (0x0003054f) main_camera_pane_g1_ParamLimits

0x226d,	// (0x00030561) main_camera_pane_g2_ParamLimits

0x227d,	// (0x00030571) main_camera_pane_g3_ParamLimits

0x228f,	// (0x00030583) main_camera_pane_g4_ParamLimits

0x22a1,	// (0x00030595) main_camera_pane_g5_ParamLimits

0x22b3,	// (0x000305a7) main_camera_pane_g6_ParamLimits

0x22c5,	// (0x000305b9) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0003d4fe) main_camera_pane_g_ParamLimits

0x22d7,	// (0x000305cb) main_camera_pane_t1_ParamLimits

0x22ed,	// (0x000305e1) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0003d50f) main_camera_pane_t_ParamLimits

0xa0fb,	// (0x000383ef) bg_popup_preview_window_pane_cp01_ParamLimits

0xa0fb,	// (0x000383ef) bg_popup_preview_window_pane_cp01

0xb2cf,	// (0x000395c3) popup_phob_thumbnail2_window_g1_ParamLimits

0xb2cf,	// (0x000395c3) popup_phob_thumbnail2_window_g1

0x9ea0,	// (0x00038194) call2_cli_visual_pane

0x4491,	// (0x00032785) popup_call2_audio_conf_window_ParamLimits

0x4491,	// (0x00032785) popup_call2_audio_conf_window

0x44b1,	// (0x000327a5) popup_call2_audio_first_window_ParamLimits

0x44b1,	// (0x000327a5) popup_call2_audio_first_window

0x4547,	// (0x0003283b) popup_call2_audio_in_window_ParamLimits

0x4547,	// (0x0003283b) popup_call2_audio_in_window

0x458f,	// (0x00032883) popup_call2_audio_out_window_ParamLimits

0x458f,	// (0x00032883) popup_call2_audio_out_window

0x45f9,	// (0x000328ed) popup_call2_audio_second_window_ParamLimits

0x45f9,	// (0x000328ed) popup_call2_audio_second_window

0x465f,	// (0x00032953) popup_call2_audio_wait_window_ParamLimits

0x465f,	// (0x00032953) popup_call2_audio_wait_window

0x9ea0,	// (0x00038194) bg_popup_call2_act_pane_cp03

0xa0dd,	// (0x000383d1) list_conf_pane_cp

0xb2db,	// (0x000395cf) popup_call2_audio_conf_window_t1

0xb2e9,	// (0x000395dd) list_single_graphic_popup_conf2_pane_ParamLimits

0xb2e9,	// (0x000395dd) list_single_graphic_popup_conf2_pane

0xab49,	// (0x00038e3d) list_highlight_pane_cp04

0xb2fc,	// (0x000395f0) list_single_graphic_popup_conf2_pane_g1

0xab5a,	// (0x00038e4e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0003d806) list_single_graphic_popup_conf2_pane_g

0xb306,	// (0x000395fa) list_single_graphic_popup_conf2_pane_t1

0xb314,	// (0x00039608) bg_popup_call2_act_pane_cp01_ParamLimits

0xb314,	// (0x00039608) bg_popup_call2_act_pane_cp01

0xb39e,	// (0x00039692) call_type_pane_cp05_ParamLimits

0xb39e,	// (0x00039692) call_type_pane_cp05

0xb3f2,	// (0x000396e6) popup_call2_audio_second_window_g1_ParamLimits

0xb3f2,	// (0x000396e6) popup_call2_audio_second_window_g1

0xb446,	// (0x0003973a) popup_call2_audio_second_window_g2_ParamLimits

0xb446,	// (0x0003973a) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0003d80b) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0003d80b) popup_call2_audio_second_window_g

0xb4ab,	// (0x0003979f) popup_call2_audio_second_window_t1_ParamLimits

0xb4ab,	// (0x0003979f) popup_call2_audio_second_window_t1

0xb566,	// (0x0003985a) popup_call2_audio_second_window_t2_ParamLimits

0xb566,	// (0x0003985a) popup_call2_audio_second_window_t2

0xb5b9,	// (0x000398ad) popup_call2_audio_second_window_t3_ParamLimits

0xb5b9,	// (0x000398ad) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0003d812) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0003d812) popup_call2_audio_second_window_t

0x9ea0,	// (0x00038194) bg_popup_call2_in_pane_cp02

0x9eaa,	// (0x0003819e) call_type_pane_cp04

0x9eb2,	// (0x000381a6) popup_call2_audio_wait_window_g1

0x9eba,	// (0x000381ae) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003d3ed) popup_call2_audio_wait_window_g

0x9ec2,	// (0x000381b6) popup_call2_audio_wait_window_t3

0xb6ac,	// (0x000399a0) bg_popup_call2_act_pane_ParamLimits

0xb6ac,	// (0x000399a0) bg_popup_call2_act_pane

0xb76c,	// (0x00039a60) call_type_pane_cp03_ParamLimits

0xb76c,	// (0x00039a60) call_type_pane_cp03

0xb7d0,	// (0x00039ac4) popup_call2_audio_first_window_g1_ParamLimits

0xb7d0,	// (0x00039ac4) popup_call2_audio_first_window_g1

0xb840,	// (0x00039b34) popup_call2_audio_first_window_g2_ParamLimits

0xb840,	// (0x00039b34) popup_call2_audio_first_window_g2

0xaeee,	// (0x000391e2) popup_call2_audio_first_window_g3_ParamLimits

0xaeee,	// (0x000391e2) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0003d81b) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0003d81b) popup_call2_audio_first_window_g

0xb91e,	// (0x00039c12) popup_call2_audio_first_window_t1_ParamLimits

0xb91e,	// (0x00039c12) popup_call2_audio_first_window_t1

0xba21,	// (0x00039d15) popup_call2_audio_first_window_t4_ParamLimits

0xba21,	// (0x00039d15) popup_call2_audio_first_window_t4

0xbb04,	// (0x00039df8) popup_call2_audio_first_window_t5_ParamLimits

0xbb04,	// (0x00039df8) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0003d826) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0003d826) popup_call2_audio_first_window_t

0xa0f3,	// (0x000383e7) bg_popup_call2_act_pane_g1

0xc171,	// (0x0003a465) popup_cale_lunar_info_window_t1

0xc17f,	// (0x0003a473) popup_cale_lunar_info_window_t2

0xc18d,	// (0x0003a481) popup_cale_lunar_info_window_t3

0x9ea0,	// (0x00038194) bg_popup_call2_bubble_pane

0xbc05,	// (0x00039ef9) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc05,	// (0x00039ef9) bg_popup_call2_in_pane_cp01

0x9b7c,	// (0x00037e70) call_type_pane_cp02

0xbc4d,	// (0x00039f41) popup_call2_audio_out_window_g1_ParamLimits

0xbc4d,	// (0x00039f41) popup_call2_audio_out_window_g1

0xbc79,	// (0x00039f6d) popup_call2_audio_out_window_g2_ParamLimits

0xbc79,	// (0x00039f6d) popup_call2_audio_out_window_g2

0xbca1,	// (0x00039f95) popup_call2_audio_out_window_g3_ParamLimits

0xbca1,	// (0x00039f95) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0003d82f) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0003d82f) popup_call2_audio_out_window_g

0xbcdc,	// (0x00039fd0) popup_call2_audio_out_window_t1_ParamLimits

0xbcdc,	// (0x00039fd0) popup_call2_audio_out_window_t1

0xbd3b,	// (0x0003a02f) popup_call2_audio_out_window_t2_ParamLimits

0xbd3b,	// (0x0003a02f) popup_call2_audio_out_window_t2

0xbd8f,	// (0x0003a083) popup_call2_audio_out_window_t3_ParamLimits

0xbd8f,	// (0x0003a083) popup_call2_audio_out_window_t3

0xbda5,	// (0x0003a099) popup_call2_audio_out_window_t4_ParamLimits

0xbda5,	// (0x0003a099) popup_call2_audio_out_window_t4

0xbdbb,	// (0x0003a0af) popup_call2_audio_out_window_t5_ParamLimits

0xbdbb,	// (0x0003a0af) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0003d838) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0003d838) popup_call2_audio_out_window_t

0xbe1f,	// (0x0003a113) bg_popup_call2_in_pane_ParamLimits

0xbe1f,	// (0x0003a113) bg_popup_call2_in_pane

0xbe7b,	// (0x0003a16f) popup_call2_audio_in_window_g1_ParamLimits

0xbe7b,	// (0x0003a16f) popup_call2_audio_in_window_g1

0xbeb3,	// (0x0003a1a7) popup_call2_audio_in_window_g2_ParamLimits

0xbeb3,	// (0x0003a1a7) popup_call2_audio_in_window_g2

0xbeeb,	// (0x0003a1df) popup_call2_audio_in_window_g3_ParamLimits

0xbeeb,	// (0x0003a1df) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0003d845) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0003d845) popup_call2_audio_in_window_g

0xbf43,	// (0x0003a237) popup_call2_audio_in_window_t1_ParamLimits

0xbf43,	// (0x0003a237) popup_call2_audio_in_window_t1

0xbfc3,	// (0x0003a2b7) popup_call2_audio_in_window_t2_ParamLimits

0xbfc3,	// (0x0003a2b7) popup_call2_audio_in_window_t2

0xc043,	// (0x0003a337) popup_call2_audio_in_window_t3_ParamLimits

0xc043,	// (0x0003a337) popup_call2_audio_in_window_t3

0xc05d,	// (0x0003a351) popup_call2_audio_in_window_t4_ParamLimits

0xc05d,	// (0x0003a351) popup_call2_audio_in_window_t4

0xc06f,	// (0x0003a363) popup_call2_audio_in_window_t5_ParamLimits

0xc06f,	// (0x0003a363) popup_call2_audio_in_window_t5

0xc084,	// (0x0003a378) popup_call2_audio_in_window_t6_ParamLimits

0xc084,	// (0x0003a378) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0003d84e) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0003d84e) popup_call2_audio_in_window_t

0xa0f3,	// (0x000383e7) bg_popup_call2_in_pane_g1

0xc19b,	// (0x0003a48f) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0003d8b6) popup_cale_lunar_info_window_t

0xa0fb,	// (0x000383ef) bg_popup_call2_rect_pane_ParamLimits

0xa0fb,	// (0x000383ef) bg_popup_call2_rect_pane

0x9ea0,	// (0x00038194) call2_cli_visual_graphic_pane

0x9ea0,	// (0x00038194) call2_cli_visual_text_pane

0x4ac9,	// (0x00032dbd) smil_status_volume_pane_g3

0x0002,

0xa234,	// (0x00038528) call2_cli_visual_graphic_pane_g1

0xa234,	// (0x00038528) call2_cli_visual_graphic_pane_g2

0xa234,	// (0x00038528) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0003d85b) call2_cli_visual_graphic_pane_g

0xc099,	// (0x0003a38d) bg_popup_call2_rect_pane_g1

0xa2d2,	// (0x000385c6) bg_popup_call2_rect_pane_g2

0xc0a1,	// (0x0003a395) bg_popup_call2_rect_pane_g3

0xc0a9,	// (0x0003a39d) bg_popup_call2_rect_pane_g4

0xc0b1,	// (0x0003a3a5) bg_popup_call2_rect_pane_g5

0xc0b9,	// (0x0003a3ad) bg_popup_call2_rect_pane_g6

0xc0c1,	// (0x0003a3b5) bg_popup_call2_rect_pane_g7

0xc0c9,	// (0x0003a3bd) bg_popup_call2_rect_pane_g8

0xc0d1,	// (0x0003a3c5) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0003d862) bg_popup_call2_rect_pane_g

0xc0d9,	// (0x0003a3cd) bg_popup_call2_bubble_pane_g1

0xc0e1,	// (0x0003a3d5) bg_popup_call2_bubble_pane_g2

0xc0e9,	// (0x0003a3dd) bg_popup_call2_bubble_pane_g3

0xc0f1,	// (0x0003a3e5) bg_popup_call2_bubble_pane_g4

0xc0f9,	// (0x0003a3ed) bg_popup_call2_bubble_pane_g5

0xc101,	// (0x0003a3f5) bg_popup_call2_bubble_pane_g6

0xc109,	// (0x0003a3fd) bg_popup_call2_bubble_pane_g7

0xc111,	// (0x0003a405) bg_popup_call2_bubble_pane_g8

0xc119,	// (0x0003a40d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0003d875) bg_popup_call2_bubble_pane_g

0x1c46,	// (0x0002ff3a) aid_cale_week_size_cell_pane

0x2305,	// (0x000305f9) aid_cams_cif_uncrop_pane_ParamLimits

0x2305,	// (0x000305f9) aid_cams_cif_uncrop_pane

0x24ba,	// (0x000307ae) aid_cams_size_cell_ParamLimits

0x24ba,	// (0x000307ae) aid_cams_size_cell

0x24ce,	// (0x000307c2) grid_cams_pane_ParamLimits

0x24e8,	// (0x000307dc) linegrid_cams_pane_ParamLimits

0x26e4,	// (0x000309d8) call_video_pane_t1

0x2702,	// (0x000309f6) call_video_pane_t2

0x0001,

0xf26e,	// (0x0003d562) call_video_pane_t

0x2b31,	// (0x00030e25) aid_cale_month_size_cell_pane_ParamLimits

0x2b31,	// (0x00030e25) aid_cale_month_size_cell_pane

0xf60b,	// (0x0003d8ff) smil_status_volume_pane_g

0x4ad6,	// (0x00032dca) volume_smil_pane_ParamLimits

0x176f,	// (0x0002fa63) aid_popup2_width_pane

0x1b55,	// (0x0002fe49) cell_qdial_pane_g4_ParamLimits

0x1b55,	// (0x0002fe49) cell_qdial_pane_g4

0x3ab4,	// (0x00031da8) aid_blid_cardinal_pane_ParamLimits

0x3ac0,	// (0x00031db4) aid_blid_destination_pane_ParamLimits

0x3ac0,	// (0x00031db4) aid_blid_destination_pane

0xa0fb,	// (0x000383ef) bg_popup_call_poc_act_pane_ParamLimits

0xa0fb,	// (0x000383ef) bg_popup_call_poc_act_pane

0xa0fb,	// (0x000383ef) bg_popup_call_poc_inact_pane_ParamLimits

0xa0fb,	// (0x000383ef) bg_popup_call_poc_inact_pane

0xc121,	// (0x0003a415) bg_popup_call_poc_act_pane_g1

0xc129,	// (0x0003a41d) bg_popup_call_poc_act_pane_g2

0xc131,	// (0x0003a425) bg_popup_call_poc_act_pane_g3

0xc0f1,	// (0x0003a3e5) bg_popup_call_poc_act_pane_g4

0xc0f9,	// (0x0003a3ed) bg_popup_call_poc_act_pane_g5

0xc139,	// (0x0003a42d) bg_popup_call_poc_act_pane_g6

0xc109,	// (0x0003a3fd) bg_popup_call_poc_act_pane_g7

0xc141,	// (0x0003a435) bg_popup_call_poc_act_pane_g8

0x9ea0,	// (0x00038194) main_usb_pane

0x49a2,	// (0x00032c96) popup_cale_lunar_info_window

0x29cc,	// (0x00030cc0) im_reading_pane_t1_ParamLimits

0xa4ae,	// (0x000387a2) list_im_pane_ParamLimits

0xa4bf,	// (0x000387b3) scroll_pane_cp07_ParamLimits

0x9ea0,	// (0x00038194) grid_highlight_pane_cp012

0xa0fb,	// (0x000383ef) mup_scale_pane_ParamLimits

0xb022,	// (0x00039316) main_usb_pane_g1_ParamLimits

0xb022,	// (0x00039316) main_usb_pane_g1

0x46bd,	// (0x000329b1) main_usb_pane_g2_ParamLimits

0x46bd,	// (0x000329b1) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0003d89f) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0003d89f) main_usb_pane_g

0x46d3,	// (0x000329c7) main_usb_pane_t1_ParamLimits

0x46d3,	// (0x000329c7) main_usb_pane_t1

0x46e5,	// (0x000329d9) main_usb_pane_t2_ParamLimits

0x46e5,	// (0x000329d9) main_usb_pane_t2

0x46f7,	// (0x000329eb) main_usb_pane_t3_ParamLimits

0x46f7,	// (0x000329eb) main_usb_pane_t3

0x4709,	// (0x000329fd) main_usb_pane_t4_ParamLimits

0x4709,	// (0x000329fd) main_usb_pane_t4

0x471b,	// (0x00032a0f) main_usb_pane_t5_ParamLimits

0x471b,	// (0x00032a0f) main_usb_pane_t5

0x472d,	// (0x00032a21) main_usb_pane_t6_ParamLimits

0x472d,	// (0x00032a21) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0003d8a4) main_usb_pane_t_ParamLimits

0x3a61,	// (0x00031d55) aid_text_placing

0x3a6a,	// (0x00031d5e) main_location2_pane_t1_ParamLimits

0x3a7c,	// (0x00031d70) main_location2_pane_t2_ParamLimits

0x3a8e,	// (0x00031d82) main_location2_pane_t3_ParamLimits

0x3aa2,	// (0x00031d96) main_location2_pane_t4_ParamLimits

0x3aa2,	// (0x00031d96) main_location2_pane_t4

0xf3cf,	// (0x0003d6c3) main_location2_pane_t_ParamLimits

0xa137,	// (0x0003842b) find_pinb_pane_g2_ParamLimits

0xa137,	// (0x0003842b) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0003d413) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0003d413) find_pinb_pane_g

0xa143,	// (0x00038437) find_pinb_pane_t1_ParamLimits

0xa155,	// (0x00038449) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0003d418) find_pinb_pane_t_ParamLimits

0x9ea0,	// (0x00038194) main_call3_pane

0x3014,	// (0x00031308) cale_month_day_heading_pane_t1_ParamLimits

0x309a,	// (0x0003138e) cale_month_day_heading_pane_t2_ParamLimits

0x312b,	// (0x0003141f) cale_month_day_heading_pane_t3_ParamLimits

0x31bc,	// (0x000314b0) cale_month_day_heading_pane_t4_ParamLimits

0x3255,	// (0x00031549) cale_month_day_heading_pane_t5_ParamLimits

0x32f6,	// (0x000315ea) cale_month_day_heading_pane_t6_ParamLimits

0x3397,	// (0x0003168b) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0003d59a) cale_month_day_heading_pane_t_ParamLimits

0xa709,	// (0x000389fd) smil_status_volume_pane

0x41b0,	// (0x000324a4) postcard_address_pane_ParamLimits

0x41b0,	// (0x000324a4) postcard_address_pane

0x41c2,	// (0x000324b6) postcard_message_pane_ParamLimits

0x41c2,	// (0x000324b6) postcard_message_pane

0x4699,	// (0x0003298d) call2_cli_visual_pane_t1_ParamLimits

0x4699,	// (0x0003298d) call2_cli_visual_pane_t1

0x4c89,	// (0x00032f7d) postcard_message_pane_t1_ParamLimits

0x4c89,	// (0x00032f7d) postcard_message_pane_t1

0x4c72,	// (0x00032f66) postcard_address_pane_t1_ParamLimits

0x4c72,	// (0x00032f66) postcard_address_pane_t1

0x4c5e,	// (0x00032f52) popup_call3_audio_in_window_ParamLimits

0x4c5e,	// (0x00032f52) popup_call3_audio_in_window

0x4aeb,	// (0x00032ddf) bg_popup_call3_in_pane_ParamLimits

0x4aeb,	// (0x00032ddf) bg_popup_call3_in_pane

0x4b5f,	// (0x00032e53) popup_call3_audio_in_window_g1_ParamLimits

0x4b5f,	// (0x00032e53) popup_call3_audio_in_window_g1

0x4b7f,	// (0x00032e73) popup_call3_audio_in_window_g2_ParamLimits

0x4b7f,	// (0x00032e73) popup_call3_audio_in_window_g2

0x4b9f,	// (0x00032e93) popup_call3_audio_in_window_g3_ParamLimits

0x4b9f,	// (0x00032e93) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0003d906) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0003d906) popup_call3_audio_in_window_g

0x4bd0,	// (0x00032ec4) popup_call3_audio_in_window_t1_ParamLimits

0x4bd0,	// (0x00032ec4) popup_call3_audio_in_window_t1

0x4c0e,	// (0x00032f02) popup_call3_audio_in_window_t2_ParamLimits

0x4c0e,	// (0x00032f02) popup_call3_audio_in_window_t2

0x4c4c,	// (0x00032f40) popup_call3_audio_in_window_t3_ParamLimits

0x4c4c,	// (0x00032f40) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0003d90f) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0003d90f) popup_call3_audio_in_window_t

0xa3ad,	// (0x000386a1) bg_popup_call3_rect_pane

0xc099,	// (0x0003a38d) bg_popup_call3_rect_pane_g1

0xa2d2,	// (0x000385c6) bg_popup_call3_rect_pane_g2

0xc0a1,	// (0x0003a395) bg_popup_call3_rect_pane_g3

0xc0a9,	// (0x0003a39d) bg_popup_call3_rect_pane_g4

0xc0b1,	// (0x0003a3a5) bg_popup_call3_rect_pane_g5

0xc0b9,	// (0x0003a3ad) bg_popup_call3_rect_pane_g6

0xc0c1,	// (0x0003a3b5) bg_popup_call3_rect_pane_g7

0x3dba,	// (0x000320ae) mup_visualizer_osc_pane

0xaefc,	// (0x000391f0) mup_visualizer_spec_pane

0x4b1b,	// (0x00032e0f) call3_video_qcif_pane_ParamLimits

0x4b1b,	// (0x00032e0f) call3_video_qcif_pane

0x4b2c,	// (0x00032e20) call3_video_qcif_uncrop_pane_ParamLimits

0x4b2c,	// (0x00032e20) call3_video_qcif_uncrop_pane

0x4b3a,	// (0x00032e2e) call3_video_subqcif_pane_ParamLimits

0x4b3a,	// (0x00032e2e) call3_video_subqcif_pane

0x4b4e,	// (0x00032e42) call3_video_subqcif_uncrop_pane_ParamLimits

0x4b4e,	// (0x00032e42) call3_video_subqcif_uncrop_pane

0x4bbf,	// (0x00032eb3) popup_call3_audio_in_window_g4_ParamLimits

0x4bbf,	// (0x00032eb3) popup_call3_audio_in_window_g4

0x4ab8,	// (0x00032dac) mup_spec_half_pane

0x4ac1,	// (0x00032db5) mup_spec_half_pane_cp

0xc2fe,	// (0x0003a5f2) mup_osc_middle_pane

0xc307,	// (0x0003a5fb) mup_visualizer_osc_pane_g1

0x4a98,	// (0x00032d8c) mup_spec_bar_pane_ParamLimits

0x4a98,	// (0x00032d8c) mup_spec_bar_pane

0xc2eb,	// (0x0003a5df) mup_spec_bar_pane_g1

0xc2f5,	// (0x0003a5e9) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003d8fa) mup_spec_bar_pane_g

0x1c46,	// (0x0002ff3a) aid_cale_week_size_cell_pane_ParamLimits

0x1c60,	// (0x0002ff54) bg_cale_heading_pane_ParamLimits

0xa30f,	// (0x00038603) bg_cale_pane_cp01_ParamLimits

0x1c7e,	// (0x0002ff72) cale_week_corner_pane_ParamLimits

0x1c9d,	// (0x0002ff91) cale_week_day_heading_pane_ParamLimits

0x1cc0,	// (0x0002ffb4) cale_week_scroll_pane_g1_ParamLimits

0x1cd9,	// (0x0002ffcd) cale_week_scroll_pane_g2_ParamLimits

0x1cf1,	// (0x0002ffe5) cale_week_scroll_pane_g3_ParamLimits

0x1d09,	// (0x0002fffd) cale_week_scroll_pane_g4_ParamLimits

0x1d21,	// (0x00030015) cale_week_scroll_pane_g5_ParamLimits

0x1d3d,	// (0x00030031) cale_week_scroll_pane_g6_ParamLimits

0x1d5d,	// (0x00030051) cale_week_scroll_pane_g7_ParamLimits

0x1d7d,	// (0x00030071) cale_week_scroll_pane_g8_ParamLimits

0x1da1,	// (0x00030095) cale_week_scroll_pane_g9_ParamLimits

0x1db9,	// (0x000300ad) cale_week_scroll_pane_g10_ParamLimits

0x1dd1,	// (0x000300c5) cale_week_scroll_pane_g11_ParamLimits

0x1de9,	// (0x000300dd) cale_week_scroll_pane_g12_ParamLimits

0x1e01,	// (0x000300f5) cale_week_scroll_pane_g13_ParamLimits

0x1e01,	// (0x000300f5) cale_week_scroll_pane_g14_ParamLimits

0x1e01,	// (0x000300f5) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0003d4a4) cale_week_scroll_pane_g_ParamLimits

0x1e3d,	// (0x00030131) cale_week_time_pane_ParamLimits

0x1e61,	// (0x00030155) grid_cale_week_pane_ParamLimits

0xa32c,	// (0x00038620) listscroll_cale_week_pane_t1

0xa33e,	// (0x00038632) scroll_pane_cp08_ParamLimits

0x2b92,	// (0x00030e86) cale_month_corner_pane_ParamLimits

0xa6df,	// (0x000389d3) cale_month_pane_t1

0x2fb2,	// (0x000312a6) cale_month_week_pane_ParamLimits

0x385f,	// (0x00031b53) popup_call_status_window_g1_ParamLimits

0x3873,	// (0x00031b67) popup_call_status_window_g2_ParamLimits

0x3887,	// (0x00031b7b) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0003d64a) popup_call_status_window_g_ParamLimits

0xaaa5,	// (0x00038d99) aid_call2_pane

0x402e,	// (0x00032322) msg_header_pane_g1

0x41b0,	// (0x000324a4) postcard_address2_pane_ParamLimits

0x41b0,	// (0x000324a4) postcard_address2_pane

0x41c2,	// (0x000324b6) postcard_message2_pane_ParamLimits

0x41c2,	// (0x000324b6) postcard_message2_pane

0x4a46,	// (0x00032d3a) message2_row_pane_ParamLimits

0x4a46,	// (0x00032d3a) message2_row_pane

0x4a65,	// (0x00032d59) address2_row_pane_ParamLimits

0x4a65,	// (0x00032d59) address2_row_pane

0xc2b9,	// (0x0003a5ad) postcard_message2_row_pane_g1

0xc2c1,	// (0x0003a5b5) postcard_message2_row_pane_t1

0xc2b9,	// (0x0003a5ad) address2_row_pane_g1

0xc2c1,	// (0x0003a5b5) address2_row_pane_t1

0x21a5,	// (0x00030499) aid_size_cell_vorec

0x9ea0,	// (0x00038194) main_rss_pane

0x4a78,	// (0x00032d6c) rss_list_single_pane_ParamLimits

0x4a78,	// (0x00032d6c) rss_list_single_pane

0xc2cf,	// (0x0003a5c3) rss_list_single_pane_t1

0xc2dd,	// (0x0003a5d1) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0003d8f5) rss_list_single_pane_t

0x9ea0,	// (0x00038194) main_camera2_pane

0x9ea0,	// (0x00038194) main_video2_pane

0x07d5,	// (0x0002eac9) cams_zoom_pane_cp2_ParamLimits

0x07d5,	// (0x0002eac9) cams_zoom_pane_cp2

0x07f5,	// (0x0002eae9) image2_vga_pane_ParamLimits

0x07f5,	// (0x0002eae9) image2_vga_pane

0x0846,	// (0x0002eb3a) main_camera2_pane_g1_ParamLimits

0x0846,	// (0x0002eb3a) main_camera2_pane_g1

0x0866,	// (0x0002eb5a) main_camera2_pane_g2_ParamLimits

0x0866,	// (0x0002eb5a) main_camera2_pane_g2

0x0886,	// (0x0002eb7a) main_camera2_pane_g3_ParamLimits

0x0886,	// (0x0002eb7a) main_camera2_pane_g3

0x08a6,	// (0x0002eb9a) main_camera2_pane_g4_ParamLimits

0x08a6,	// (0x0002eb9a) main_camera2_pane_g4

0x08c6,	// (0x0002ebba) main_camera2_pane_g5_ParamLimits

0x08c6,	// (0x0002ebba) main_camera2_pane_g5

0x08e6,	// (0x0002ebda) main_camera2_pane_g6_ParamLimits

0x08e6,	// (0x0002ebda) main_camera2_pane_g6

0x0906,	// (0x0002ebfa) main_camera2_pane_g7_ParamLimits

0x0906,	// (0x0002ebfa) main_camera2_pane_g7

0x0926,	// (0x0002ec1a) main_camera2_pane_g8_ParamLimits

0x0926,	// (0x0002ec1a) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0003d916) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0003d916) main_camera2_pane_g

0x0966,	// (0x0002ec5a) main_camera2_pane_t1_ParamLimits

0x0966,	// (0x0002ec5a) main_camera2_pane_t1

0x099b,	// (0x0002ec8f) main_camera2_pane_t2_ParamLimits

0x099b,	// (0x0002ec8f) main_camera2_pane_t2

0x09c1,	// (0x0002ecb5) main_camera2_pane_t3_ParamLimits

0x09c1,	// (0x0002ecb5) main_camera2_pane_t3

0x0a1f,	// (0x0002ed13) main_camera2_pane_t4_ParamLimits

0x0a1f,	// (0x0002ed13) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0003d929) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0003d929) main_camera2_pane_t

0x0ab1,	// (0x0002eda5) cams_zoom_pane_cp4_ParamLimits

0x0ab1,	// (0x0002eda5) cams_zoom_pane_cp4

0x0ac7,	// (0x0002edbb) image2_cif_pane_ParamLimits

0x0ac7,	// (0x0002edbb) image2_cif_pane

0x0af2,	// (0x0002ede6) image2_subqcif_pane_ParamLimits

0x0af2,	// (0x0002ede6) image2_subqcif_pane

0x0b0c,	// (0x0002ee00) main_video2_pane_g1_ParamLimits

0x0b0c,	// (0x0002ee00) main_video2_pane_g1

0x0b26,	// (0x0002ee1a) main_video2_pane_g2_ParamLimits

0x0b26,	// (0x0002ee1a) main_video2_pane_g2

0x0b3c,	// (0x0002ee30) main_video2_pane_g3_ParamLimits

0x0b3c,	// (0x0002ee30) main_video2_pane_g3

0x0b52,	// (0x0002ee46) main_video2_pane_g4_ParamLimits

0x0b52,	// (0x0002ee46) main_video2_pane_g4

0x0b68,	// (0x0002ee5c) main_video2_pane_g5_ParamLimits

0x0b68,	// (0x0002ee5c) main_video2_pane_g5

0x0b7e,	// (0x0002ee72) main_video2_pane_g6_ParamLimits

0x0b7e,	// (0x0002ee72) main_video2_pane_g6

0x0005,

0xf644,	// (0x0003d938) main_video2_pane_g_ParamLimits

0xf644,	// (0x0003d938) main_video2_pane_g

0x0b98,	// (0x0002ee8c) main_video2_pane_t1_ParamLimits

0x0b98,	// (0x0002ee8c) main_video2_pane_t1

0x0bbc,	// (0x0002eeb0) main_video2_pane_t2_ParamLimits

0x0bbc,	// (0x0002eeb0) main_video2_pane_t2

0x0c0a,	// (0x0002eefe) main_video2_pane_t3_ParamLimits

0x0c0a,	// (0x0002eefe) main_video2_pane_t3

0x0002,

0xf651,	// (0x0003d945) main_video2_pane_t_ParamLimits

0xf651,	// (0x0003d945) main_video2_pane_t

0x47e8,	// (0x00032adc) call_muted_g2

0x0001,

0xf5f3,	// (0x0003d8e7) call_muted_g

0x9ea0,	// (0x00038194) main_mup2_pane

0x4cd4,	// (0x00032fc8) main_mup2_pane_g1_ParamLimits

0x4cd4,	// (0x00032fc8) main_mup2_pane_g1

0x4ce0,	// (0x00032fd4) main_mup2_pane_g2_ParamLimits

0x4ce0,	// (0x00032fd4) main_mup2_pane_g2

0x4f4f,	// (0x00033243) main_mup_pane_g13_cp1

0x4f57,	// (0x0003324b) mup_volume_pane_cp1

0x4cfc,	// (0x00032ff0) main_mup2_pane_g4_ParamLimits

0x4cfc,	// (0x00032ff0) main_mup2_pane_g4

0x4d0e,	// (0x00033002) main_mup2_pane_g5_ParamLimits

0x4d0e,	// (0x00033002) main_mup2_pane_g5

0x4d20,	// (0x00033014) main_mup2_pane_g6_ParamLimits

0x4d20,	// (0x00033014) main_mup2_pane_g6

0x4d32,	// (0x00033026) main_mup2_pane_g7_ParamLimits

0x4d32,	// (0x00033026) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0003d94c) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0003d94c) main_mup2_pane_g

0x4d4a,	// (0x0003303e) main_mup2_pane_t1_ParamLimits

0x4d4a,	// (0x0003303e) main_mup2_pane_t1

0x4d60,	// (0x00033054) main_mup2_pane_t2_ParamLimits

0x4d60,	// (0x00033054) main_mup2_pane_t2

0x4d76,	// (0x0003306a) main_mup2_pane_t3_ParamLimits

0x4d76,	// (0x0003306a) main_mup2_pane_t3

0x4d8c,	// (0x00033080) main_mup2_pane_t4_ParamLimits

0x4d8c,	// (0x00033080) main_mup2_pane_t4

0x4da4,	// (0x00033098) main_mup2_pane_t5_ParamLimits

0x4da4,	// (0x00033098) main_mup2_pane_t5

0x4dbc,	// (0x000330b0) main_mup2_pane_t6_ParamLimits

0x4dbc,	// (0x000330b0) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0003d95b) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0003d95b) main_mup2_pane_t

0x4dec,	// (0x000330e0) mup2_visualizer_pane_ParamLimits

0x4dec,	// (0x000330e0) mup2_visualizer_pane

0x4e1a,	// (0x0003310e) mup_progress_pane_cp_ParamLimits

0x4e1a,	// (0x0003310e) mup_progress_pane_cp

0x4f3a,	// (0x0003322e) mup_volume_pane_cp_ParamLimits

0x4f3a,	// (0x0003322e) mup_volume_pane_cp

0x4e2e,	// (0x00033122) mup2_visualizer_pane_g1_ParamLimits

0x4e2e,	// (0x00033122) mup2_visualizer_pane_g1

0xc33e,	// (0x0003a632) mup2_visualizer_pane_g2_ParamLimits

0xc33e,	// (0x0003a632) mup2_visualizer_pane_g2

0x4e45,	// (0x00033139) mup2_visualizer_pane_g3_ParamLimits

0x4e45,	// (0x00033139) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0003d968) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0003d968) mup2_visualizer_pane_g

0xb16b,	// (0x0003945f) aid_size_cell_fmradio

0x04cb,	// (0x0002e7bf) aid_height_parent_landcape

0xa53d,	// (0x00038831) wml_content_pane_cp

0xa545,	// (0x00038839) wml_tabs_pane

0xa54e,	// (0x00038842) popup_wml_miniature_window

0xa556,	// (0x0003884a) scroll_pane_cp021

0xa56a,	// (0x0003885e) wml_content_pane_comp8

0x9ea0,	// (0x00038194) bg_popup_sub_pane_cp05

0xc35c,	// (0x0003a650) popup_wml_miniature_window_g1

0xc364,	// (0x0003a658) wml_miniature_view_pane

0x4e51,	// (0x00033145) aid_size_wml_view

0x4e59,	// (0x0003314d) wml_miniature_view_pane_g1

0x4e62,	// (0x00033156) wml_miniature_view_pane_g2

0x4e6b,	// (0x0003315f) wml_miniature_view_pane_g3

0x4e73,	// (0x00033167) wml_miniature_view_pane_g4

0x4e7b,	// (0x0003316f) wml_miniature_view_pane_g5

0x4e83,	// (0x00033177) wml_miniature_view_pane_g6

0x4e8b,	// (0x0003317f) wml_miniature_view_pane_g7

0x4e93,	// (0x00033187) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0003d96f) wml_miniature_view_pane_g

0xc36c,	// (0x0003a660) background_graphic_ParamLimits

0xc36c,	// (0x0003a660) background_graphic

0xc378,	// (0x0003a66c) wml_tabs_2_pane

0xc381,	// (0x0003a675) wml_tabs_3_pane_ParamLimits

0xc381,	// (0x0003a675) wml_tabs_3_pane

0xc393,	// (0x0003a687) wml_tabs_4_pane_ParamLimits

0xc393,	// (0x0003a687) wml_tabs_4_pane

0xc3a9,	// (0x0003a69d) wml_tabs_5_pane_ParamLimits

0xc3a9,	// (0x0003a69d) wml_tabs_5_pane

0xc3c3,	// (0x0003a6b7) wml_tabs_pane_g2_ParamLimits

0xc3c3,	// (0x0003a6b7) wml_tabs_pane_g2

0xc3d7,	// (0x0003a6cb) wml_tabs_pane_g3_ParamLimits

0xc3d7,	// (0x0003a6cb) wml_tabs_pane_g3

0x4e9b,	// (0x0003318f) wml_tabs_2_active_pane_ParamLimits

0x4e9b,	// (0x0003318f) wml_tabs_2_active_pane

0x4eaf,	// (0x000331a3) wml_tabs_2_passive_pane_ParamLimits

0x4eaf,	// (0x000331a3) wml_tabs_2_passive_pane

0x4ec3,	// (0x000331b7) wml_tabs_3_active_pane_cp_ParamLimits

0x4ec3,	// (0x000331b7) wml_tabs_3_active_pane_cp

0x4ed8,	// (0x000331cc) wml_tabs_3_passive_pane_ParamLimits

0x4ed8,	// (0x000331cc) wml_tabs_3_passive_pane

0x4eeb,	// (0x000331df) wml_tabs_3_passive_pane_cp_ParamLimits

0x4eeb,	// (0x000331df) wml_tabs_3_passive_pane_cp

0x4f02,	// (0x000331f6) tabs_4_active_pane

0x4f0a,	// (0x000331fe) tabs_4_passive_pane

0x4f14,	// (0x00033208) tabs_4_passive_pane_cp

0x4f1c,	// (0x00033210) tabs_4_passive_pane_cp2

0x46b5,	// (0x000329a9) aid_height_text

0x3d8c,	// (0x00032080) mup_volume_cont_pane_ParamLimits

0x3d8c,	// (0x00032080) mup_volume_cont_pane

0x18e9,	// (0x0002fbdd) aid_size_cell_pinb

0x18f3,	// (0x0002fbe7) aid_size_list_pinb

0x4e06,	// (0x000330fa) mup2_volume_cont_pane_ParamLimits

0x4e06,	// (0x000330fa) mup2_volume_cont_pane

0x4f26,	// (0x0003321a) mup2_volume_cont_pane_g1_ParamLimits

0x4f26,	// (0x0003321a) mup2_volume_cont_pane_g1

0x0025,	// (0x0002e319) aid_size_cell_touch_ParamLimits

0x0025,	// (0x0002e319) aid_size_cell_touch

0x020d,	// (0x0002e501) touch_pane_ParamLimits

0x020d,	// (0x0002e501) touch_pane

0x1820,	// (0x0002fb14) main_rss2_pane

0xc3f4,	// (0x0003a6e8) listscroll_rss2_pane

0xc3fd,	// (0x0003a6f1) rss2_navigation_pane

0xc405,	// (0x0003a6f9) list_rss2_pane

0xabf4,	// (0x00038ee8) scroll_pane_cp22

0xc40d,	// (0x0003a701) rss2_navigation_pane_g1

0xc416,	// (0x0003a70a) rss2_navigation_pane_g2

0xc41e,	// (0x0003a712) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0003d980) rss2_navigation_pane_g

0xc426,	// (0x0003a71a) rss2_navigation_pane_t1

0x4f5f,	// (0x00033253) rss2_list_single_pane_ParamLimits

0x4f5f,	// (0x00033253) rss2_list_single_pane

0xc434,	// (0x0003a728) rss2_list_single_pane_t2

0xc442,	// (0x0003a736) rss2_list_single_pane_t3_ParamLimits

0xc442,	// (0x0003a736) rss2_list_single_pane_t3

0xc45f,	// (0x0003a753) rss2_list_single_pane_t4

0x3645,	// (0x00031939) smil_status_pane_g1

0x1806,	// (0x0002fafa) main_image2_pane_ParamLimits

0x1806,	// (0x0002fafa) main_image2_pane

0x0946,	// (0x0002ec3a) main_camera2_pane_g9_ParamLimits

0x0946,	// (0x0002ec3a) main_camera2_pane_g9

0x0a74,	// (0x0002ed68) main_camera2_pane_t5_ParamLimits

0x0a74,	// (0x0002ed68) main_camera2_pane_t5

0x4ca4,	// (0x00032f98) main_camera2_pane_t6_ParamLimits

0x4ca4,	// (0x00032f98) main_camera2_pane_t6

0x4f76,	// (0x0003326a) main_image2_pane_g1_ParamLimits

0x4f76,	// (0x0003326a) main_image2_pane_g1

0x43ef,	// (0x000326e3) smil2_video_pane_ParamLimits

0x43ef,	// (0x000326e3) smil2_video_pane

0x177b,	// (0x0002fa6f) aid_zoom_text_primary_cp

0x17fc,	// (0x0002faf0) popup_preview_fixed_window

0xa4a6,	// (0x0003879a) im_reading_pane_g1

0x07bd,	// (0x0002eab1) cams2_bc_adjust_pane_cp_ParamLimits

0x07bd,	// (0x0002eab1) cams2_bc_adjust_pane_cp

0x0aa3,	// (0x0002ed97) cams2_bc_adjust_pane_ParamLimits

0x0aa3,	// (0x0002ed97) cams2_bc_adjust_pane

0xd018,	// (0x0003b30c) cams2_bc_adjust_pane_g1

0x4f8c,	// (0x00033280) cams2_slider_pane

0x4f95,	// (0x00033289) cams2_slider_pane_g1

0x4f9e,	// (0x00033292) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0003d987) cams2_slider_pane_g

0x027d,	// (0x0002e571) calc_display_pane_ParamLimits

0x02a5,	// (0x0002e599) calc_paper_pane_ParamLimits

0x02c8,	// (0x0002e5bc) grid_calc_pane_ParamLimits

0x38ec,	// (0x00031be0) popup_clock_digital_window_t1_ParamLimits

0xb108,	// (0x000393fc) main_image_pane_t1

0x025f,	// (0x0002e553) aid_size_cell_calc_ParamLimits

0x025f,	// (0x0002e553) aid_size_cell_calc

0x0523,	// (0x0002e817) popup_blid_sat_info2_window_ParamLimits

0x0523,	// (0x0002e817) popup_blid_sat_info2_window

0xc475,	// (0x0003a769) aid_size_cell_blid

0xc47d,	// (0x0003a771) bg_popup_window_pane_cp07

0xc4a0,	// (0x0003a794) grid_popup_blid_pane

0xc4aa,	// (0x0003a79e) heading_pane_cp05_ParamLimits

0xc4aa,	// (0x0003a79e) heading_pane_cp05

0xc574,	// (0x0003a868) cell_popup_blid_pane_ParamLimits

0xc574,	// (0x0003a868) cell_popup_blid_pane

0xc59a,	// (0x0003a88e) cell_popup_blid_pane_g1

0xc5a2,	// (0x0003a896) cell_popup_blid_pane_t1

0x4dd6,	// (0x000330ca) mup2_indicator_pane_ParamLimits

0x4dd6,	// (0x000330ca) mup2_indicator_pane

0xa3ad,	// (0x000386a1) mup2_visualizer_osc_pane

0xc34a,	// (0x0003a63e) mup2_visualizer_spec_pane_ParamLimits

0xc34a,	// (0x0003a63e) mup2_visualizer_spec_pane

0x4fb8,	// (0x000332ac) mup2_spec_half_pane

0x4fc1,	// (0x000332b5) mup2_spec_half_pane_cp

0x4fc9,	// (0x000332bd) mup2_spec_bar_pane_ParamLimits

0x4fc9,	// (0x000332bd) mup2_spec_bar_pane

0xc2eb,	// (0x0003a5df) mup2_spec_bar_pane_g1

0xc2f5,	// (0x0003a5e9) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003d8fa) mup2_spec_bar_pane_g

0x4fe9,	// (0x000332dd) mup2_osc_middle_pane

0xc307,	// (0x0003a5fb) mup2_visualizer_osc_pane_g1

0x9aad,	// (0x00037da1) popup_number_entry_window_t1_ParamLimits

0x9ac0,	// (0x00037db4) popup_number_entry_window_t2_ParamLimits

0x9ad2,	// (0x00037dc6) popup_number_entry_window_t3_ParamLimits

0x182a,	// (0x0002fb1e) popup_number_entry_window_t5_ParamLimits

0x182a,	// (0x0002fb1e) popup_number_entry_window_t5

0xf0ca,	// (0x0003d3be) popup_number_entry_window_t_ParamLimits

0x9ae4,	// (0x00037dd8) text_title_cp2_ParamLimits

0x407d,	// (0x00032371) aid_hotspot_pointer_text2_pane

0x40d3,	// (0x000323c7) main_viewer_pane_g9_ParamLimits

0x40d3,	// (0x000323c7) main_viewer_pane_g9

0xa6df,	// (0x000389d3) cale_month_pane_t1_ParamLimits

0xa71c,	// (0x00038a10) bg_cale_pane_ParamLimits

0xa734,	// (0x00038a28) list_cale_pane_ParamLimits

0xa745,	// (0x00038a39) listscroll_cale_day_pane_t1

0xa757,	// (0x00038a4b) scroll_pane_cp09_ParamLimits

0x3dc2,	// (0x000320b6) main_mup_eq_pane_t1_ParamLimits

0x3dc2,	// (0x000320b6) main_mup_eq_pane_t1

0x3ddc,	// (0x000320d0) main_mup_eq_pane_t2_ParamLimits

0x3ddc,	// (0x000320d0) main_mup_eq_pane_t2

0x3df6,	// (0x000320ea) main_mup_eq_pane_t3_ParamLimits

0x3df6,	// (0x000320ea) main_mup_eq_pane_t3

0x3e12,	// (0x00032106) main_mup_eq_pane_t4_ParamLimits

0x3e12,	// (0x00032106) main_mup_eq_pane_t4

0x3e2e,	// (0x00032122) main_mup_eq_pane_t5_ParamLimits

0x3e2e,	// (0x00032122) main_mup_eq_pane_t5

0x3e4a,	// (0x0003213e) main_mup_eq_pane_t6_ParamLimits

0x3e4a,	// (0x0003213e) main_mup_eq_pane_t6

0x3e5e,	// (0x00032152) main_mup_eq_pane_t7_ParamLimits

0x3e5e,	// (0x00032152) main_mup_eq_pane_t7

0x3e72,	// (0x00032166) main_mup_eq_pane_t8_ParamLimits

0x3e72,	// (0x00032166) main_mup_eq_pane_t8

0x3e86,	// (0x0003217a) main_mup_eq_pane_t9_ParamLimits

0x3e86,	// (0x0003217a) main_mup_eq_pane_t9

0x3ea0,	// (0x00032194) main_mup_eq_pane_t10_ParamLimits

0x3ea0,	// (0x00032194) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0003d749) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0003d749) main_mup_eq_pane_t

0x3f4f,	// (0x00032243) mup_equalizer_pane_cp5_ParamLimits

0x3f63,	// (0x00032257) mup_equalizer_pane_cp6_ParamLimits

0x3f77,	// (0x0003226b) mup_equalizer_pane_cp7_ParamLimits

0x1820,	// (0x0002fb14) main_gallery_pane

0xc310,	// (0x0003a604) smil2_volume_pane

0xc318,	// (0x0003a60c) smil_status_volume_pane_g1_ParamLimits

0xc32b,	// (0x0003a61f) smil_status_volume_pane_g2_ParamLimits

0x4ac9,	// (0x00032dbd) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0003d8ff) smil_status_volume_pane_g_ParamLimits

0xc47d,	// (0x0003a771) bg_popup_window_pane_cp07_ParamLimits

0xc48b,	// (0x0003a77f) blid_firmament_pane

0x4ff2,	// (0x000332e6) aid_size_cell_gallery_ParamLimits

0x4ff2,	// (0x000332e6) aid_size_cell_gallery

0x5008,	// (0x000332fc) grid_gallery_pane_ParamLimits

0x5008,	// (0x000332fc) grid_gallery_pane

0x5021,	// (0x00033315) cell_gallery_pane_ParamLimits

0x5021,	// (0x00033315) cell_gallery_pane

0xc5b0,	// (0x0003a8a4) bg_cell_gallery_focus_pane_ParamLimits

0xc5b0,	// (0x0003a8a4) bg_cell_gallery_focus_pane

0xc5c2,	// (0x0003a8b6) cell_gallery_pane_g1_ParamLimits

0xc5c2,	// (0x0003a8b6) cell_gallery_pane_g1

0x506a,	// (0x0003335e) cell_gallery_pane_g2_ParamLimits

0x506a,	// (0x0003335e) cell_gallery_pane_g2

0x5077,	// (0x0003336b) cell_gallery_pane_g3_ParamLimits

0x5077,	// (0x0003336b) cell_gallery_pane_g3

0xc5ce,	// (0x0003a8c2) cell_gallery_pane_g4_ParamLimits

0xc5ce,	// (0x0003a8c2) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0003d9ad) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0003d9ad) cell_gallery_pane_g

0xc5da,	// (0x0003a8ce) bg_cell_gallery_focus_pane_g1

0xc5e2,	// (0x0003a8d6) bg_cell_gallery_focus_pane_g2

0xc5ea,	// (0x0003a8de) bg_cell_gallery_focus_pane_g3

0xc5f2,	// (0x0003a8e6) bg_cell_gallery_focus_pane_g4

0xc5fa,	// (0x0003a8ee) bg_cell_gallery_focus_pane_g5

0xc602,	// (0x0003a8f6) bg_cell_gallery_focus_pane_g6

0xc60a,	// (0x0003a8fe) bg_cell_gallery_focus_pane_g7

0xc612,	// (0x0003a906) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0003d9b6) bg_cell_gallery_focus_pane_g

0xc61a,	// (0x0003a90e) aid_firma_cardinal

0xc62e,	// (0x0003a922) blid_firmament_pane_t1

0xc645,	// (0x0003a939) blid_firmament_pane_t2

0xc65c,	// (0x0003a950) blid_firmament_pane_t3

0xc673,	// (0x0003a967) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0003d9c7) blid_firmament_pane_t

0xc68a,	// (0x0003a97e) blid_sat_info_pane

0xc69a,	// (0x0003a98e) blid_sat_info_pane_g1

0xc69a,	// (0x0003a98e) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0003d9d0) blid_sat_info_pane_g

0xc6a4,	// (0x0003a998) blid_sat_info_pane_t1

0xc6b2,	// (0x0003a9a6) smil2_volume_content_pane

0xc6bb,	// (0x0003a9af) smil2_volume_pane_g1

0xa269,	// (0x0003855d) smil2_volume_content_pane_g1

0xc6c3,	// (0x0003a9b7) smil2_volume_content_pane_g2

0xc6cc,	// (0x0003a9c0) smil2_volume_content_pane_g3

0xc6d5,	// (0x0003a9c9) smil2_volume_content_pane_g4

0xc6de,	// (0x0003a9d2) smil2_volume_content_pane_g5

0xc6e7,	// (0x0003a9db) smil2_volume_content_pane_g6

0xc6f0,	// (0x0003a9e4) smil2_volume_content_pane_g7

0xc6f9,	// (0x0003a9ed) smil2_volume_content_pane_g8

0xc702,	// (0x0003a9f6) smil2_volume_content_pane_g9

0xc70b,	// (0x0003a9ff) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0003d9d5) smil2_volume_content_pane_g

0x1f15,	// (0x00030209) cale_week_day_heading_pane_t1_ParamLimits

0x1f5f,	// (0x00030253) cale_week_day_heading_pane_t2_ParamLimits

0x1fae,	// (0x000302a2) cale_week_day_heading_pane_t3_ParamLimits

0x1ffd,	// (0x000302f1) cale_week_day_heading_pane_t4_ParamLimits

0x204c,	// (0x00030340) cale_week_day_heading_pane_t5_ParamLimits

0x20a3,	// (0x00030397) cale_week_day_heading_pane_t6_ParamLimits

0x20fa,	// (0x000303ee) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0003d4c5) cale_week_day_heading_pane_t_ParamLimits

0xa35b,	// (0x0003864f) bg_cale_side_pane_ParamLimits

0x0397,	// (0x0002e68b) cale_week_time_pane_t1_ParamLimits

0x03b1,	// (0x0002e6a5) cale_week_time_pane_t2_ParamLimits

0x03cb,	// (0x0002e6bf) cale_week_time_pane_t3_ParamLimits

0x03e5,	// (0x0002e6d9) cale_week_time_pane_t4_ParamLimits

0x03ff,	// (0x0002e6f3) cale_week_time_pane_t5_ParamLimits

0x0419,	// (0x0002e70d) cale_week_time_pane_t6_ParamLimits

0x0433,	// (0x0002e727) cale_week_time_pane_t7_ParamLimits

0x0453,	// (0x0002e747) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0003d4d4) cale_week_time_pane_t_ParamLimits

0x2144,	// (0x00030438) cell_cale_week_pane_g2_ParamLimits

0xa35b,	// (0x0003864f) bg_cale_side_pane_cp01_ParamLimits

0x3440,	// (0x00031734) cale_month_week_pane_t1_ParamLimits

0x3459,	// (0x0003174d) cale_month_week_pane_t2_ParamLimits

0x3472,	// (0x00031766) cale_month_week_pane_t3_ParamLimits

0x348b,	// (0x0003177f) cale_month_week_pane_t4_ParamLimits

0x34a4,	// (0x00031798) cale_month_week_pane_t5_ParamLimits

0x34bd,	// (0x000317b1) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0003d5a9) cale_month_week_pane_t_ParamLimits

0x362e,	// (0x00031922) cell_cale_month_pane_g1_ParamLimits

0x1820,	// (0x0002fb14) main_cale_event_viewer_pane

0x9a83,	// (0x00037d77) listscroll_cale_event_viewer_pane

0xc714,	// (0x0003aa08) list_cale_ev_pane

0xc71c,	// (0x0003aa10) scroll_pane_cp023

0xc728,	// (0x0003aa1c) field_cale_ev_pane_ParamLimits

0xc728,	// (0x0003aa1c) field_cale_ev_pane

0xc744,	// (0x0003aa38) field_cale_ev_content_pane_ParamLimits

0xc744,	// (0x0003aa38) field_cale_ev_content_pane

0xc750,	// (0x0003aa44) field_cale_ev_pane_g1_ParamLimits

0xc750,	// (0x0003aa44) field_cale_ev_pane_g1

0xc75c,	// (0x0003aa50) field_cale_ev_pane_g2_ParamLimits

0xc75c,	// (0x0003aa50) field_cale_ev_pane_g2

0xc774,	// (0x0003aa68) field_cale_ev_pane_g3_ParamLimits

0xc774,	// (0x0003aa68) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0003d9ea) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0003d9ea) field_cale_ev_pane_g

0xc78c,	// (0x0003aa80) field_cale_ev_pane_t1_ParamLimits

0xc78c,	// (0x0003aa80) field_cale_ev_pane_t1

0xc7a3,	// (0x0003aa97) field_cale_ev_content_pane_t1_ParamLimits

0xc7a3,	// (0x0003aa97) field_cale_ev_content_pane_t1

0xafa6,	// (0x0003929a) bg_button_pane_cp01

0x1c34,	// (0x0002ff28) listscroll_cale_week_pane_ParamLimits

0xa306,	// (0x000385fa) popup_toolbar_window_cp01

0xa32c,	// (0x00038620) listscroll_cale_week_pane_t1_ParamLimits

0x1c34,	// (0x0002ff28) listscroll_cale_day_pane_ParamLimits

0xa306,	// (0x000385fa) popup_toolbar_window_cp02

0xa745,	// (0x00038a39) listscroll_cale_day_pane_t1_ParamLimits

0x04e9,	// (0x0002e7dd) main_cale_month_pane_ParamLimits

0x49d9,	// (0x00032ccd) popup_toolbar_window_cp03_ParamLimits

0x49d9,	// (0x00032ccd) popup_toolbar_window_cp03

0x42b3,	// (0x000325a7) main_image_pane_g2_ParamLimits

0x42b3,	// (0x000325a7) main_image_pane_g2

0x42c4,	// (0x000325b8) main_image_pane_g3_ParamLimits

0x42c4,	// (0x000325b8) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0003d7db) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0003d7db) main_image_pane_g

0xb108,	// (0x000393fc) main_image_pane_t1_ParamLimits

0x42d5,	// (0x000325c9) main_image_pane_t2_ParamLimits

0x42d5,	// (0x000325c9) main_image_pane_t2

0x42e7,	// (0x000325db) main_image_pane_t3_ParamLimits

0x42e7,	// (0x000325db) main_image_pane_t3

0x430f,	// (0x00032603) main_image_pane_t4_ParamLimits

0x430f,	// (0x00032603) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0003d7e2) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0003d7e2) main_image_pane_t

0x432f,	// (0x00032623) popup_image_details_window_cp01

0x4339,	// (0x0003262d) popup_toobar_trans_pane_cp01_ParamLimits

0x4339,	// (0x0003262d) popup_toobar_trans_pane_cp01

0x05fa,	// (0x0002e8ee) popup_image_details_window_ParamLimits

0x05fa,	// (0x0002e8ee) popup_image_details_window

0x49ac,	// (0x00032ca0) popup_image_focus_window

0x0777,	// (0x0002ea6b) camera2_autofocus_pane_ParamLimits

0x0777,	// (0x0002ea6b) camera2_autofocus_pane

0x9a83,	// (0x00037d77) bg_popup_sub_pane_cp06

0xc7c0,	// (0x0003aab4) popup_image_focus_window_g1

0xc7c8,	// (0x0003aabc) popup_image_focus_window_g2

0xc7d0,	// (0x0003aac4) popup_image_focus_window_g3

0xc7d8,	// (0x0003aacc) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0003d9f1) popup_image_focus_window_g

0xc7e0,	// (0x0003aad4) popup_image_focus_window_t1

0xc7ee,	// (0x0003aae2) popup_image_focus_window_t2

0xc7fe,	// (0x0003aaf2) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0003d9fa) popup_image_focus_window_t

0xc80c,	// (0x0003ab00) camera2_autofocus_pane_g1

0xa7c4,	// (0x00038ab8) bg_tb_trans_pane_cp01

0xc81a,	// (0x0003ab0e) popup_image_details_window_g1

0xc82d,	// (0x0003ab21) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0003da0c) popup_image_details_window_g

0xc856,	// (0x0003ab4a) popup_image_details_window_t1

0xc868,	// (0x0003ab5c) popup_image_details_window_t2

0xc881,	// (0x0003ab75) popup_image_details_window_t3

0xc895,	// (0x0003ab89) popup_image_details_window_t4

0xc8b0,	// (0x0003aba4) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0003da13) popup_image_details_window_t

0xa1cb,	// (0x000384bf) bg_calc_paper_pane_ParamLimits

0x1820,	// (0x0002fb14) grid_highlight_pane_cp013

0x1a85,	// (0x0002fd79) list_calc_pane_ParamLimits

0x1a97,	// (0x0002fd8b) scroll_pane_cp024

0xa1df,	// (0x000384d3) bg_calc_display_pane_ParamLimits

0x02f6,	// (0x0002e5ea) calc_display_pane_t1_ParamLimits

0x0308,	// (0x0002e5fc) calc_display_pane_t2_ParamLimits

0x1a9f,	// (0x0002fd93) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0003d445) calc_display_pane_t_ParamLimits

0x036b,	// (0x0002e65f) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0003d462) cell_calc_pane_g

0x0374,	// (0x0002e668) cell_calc_pane_t1

0xa23e,	// (0x00038532) grid_highlight_pane_cp02_ParamLimits

0xa254,	// (0x00038548) toolbar_button_pane_cp01_ParamLimits

0xa254,	// (0x00038548) toolbar_button_pane_cp01

0xb14d,	// (0x00039441) temp_image_control_pane_ParamLimits

0xb14d,	// (0x00039441) temp_image_control_pane

0x1806,	// (0x0002fafa) main_mp3_pane

0xc8ca,	// (0x0003abbe) temp_image_control_pane_g1_ParamLimits

0xc8ca,	// (0x0003abbe) temp_image_control_pane_g1

0xc8d8,	// (0x0003abcc) temp_image_control_pane_g2_ParamLimits

0xc8d8,	// (0x0003abcc) temp_image_control_pane_g2

0xc8ea,	// (0x0003abde) temp_image_control_pane_g3_ParamLimits

0xc8ea,	// (0x0003abde) temp_image_control_pane_g3

0x50b4,	// (0x000333a8) temp_image_control_pane_g4_ParamLimits

0x50b4,	// (0x000333a8) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0003da1e) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0003da1e) temp_image_control_pane_g

0xc8ca,	// (0x0003abbe) main_mp3_pane_g1

0x50c7,	// (0x000333bb) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0003da27) main_mp3_pane_g

0xc92d,	// (0x0003ac21) main_mp3_pane_t1

0xa3b5,	// (0x000386a9) main_camera_pane_g8_ParamLimits

0xa3b5,	// (0x000386a9) main_camera_pane_g8

0x2460,	// (0x00030754) main_video_pane_g7_ParamLimits

0x2460,	// (0x00030754) main_video_pane_g7

0x4cc2,	// (0x00032fb6) main_camera2_pane_t7_ParamLimits

0x4cc2,	// (0x00032fb6) main_camera2_pane_t7

0xa4fd,	// (0x000387f1) scroll_pane_cp025_ParamLimits

0xa4fd,	// (0x000387f1) scroll_pane_cp025

0xa511,	// (0x00038805) scroll_pane_cp026_ParamLimits

0xa511,	// (0x00038805) scroll_pane_cp026

0xa520,	// (0x00038814) wml_content_pane_ParamLimits

0x1820,	// (0x0002fb14) main_touch_calib_pane

0x519d,	// (0x00033491) main_touch_calib_pane_g1

0x51af,	// (0x000334a3) main_touch_calib_pane_g2

0x51c1,	// (0x000334b5) main_touch_calib_pane_g3

0x51d3,	// (0x000334c7) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0003da45) main_touch_calib_pane_g

0x51e5,	// (0x000334d9) main_touch_calib_pane_t1

0x51ff,	// (0x000334f3) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0003da4e) main_touch_calib_pane_t

0xacd2,	// (0x00038fc6) mup_progress_pane_cp02

0xad07,	// (0x00038ffb) navi_pane_g1

0xadc2,	// (0x000390b6) navi_pane_mp_t3

0x1806,	// (0x0002fafa) main_mp3_pane_ParamLimits

0x49ee,	// (0x00032ce2) navi_pane_ParamLimits

0xc8ca,	// (0x0003abbe) main_mp3_pane_g1_ParamLimits

0x50c7,	// (0x000333bb) main_mp3_pane_g2_ParamLimits

0x50d5,	// (0x000333c9) main_mp3_pane_g3_ParamLimits

0x50d5,	// (0x000333c9) main_mp3_pane_g3

0x50e3,	// (0x000333d7) main_mp3_pane_g4_ParamLimits

0x50e3,	// (0x000333d7) main_mp3_pane_g4

0xc8fa,	// (0x0003abee) main_mp3_pane_g5_ParamLimits

0xc8fa,	// (0x0003abee) main_mp3_pane_g5

0xc908,	// (0x0003abfc) main_mp3_pane_g6_ParamLimits

0xc908,	// (0x0003abfc) main_mp3_pane_g6

0xc915,	// (0x0003ac09) main_mp3_pane_g7_ParamLimits

0xc915,	// (0x0003ac09) main_mp3_pane_g7

0xc921,	// (0x0003ac15) main_mp3_pane_g8_ParamLimits

0xc921,	// (0x0003ac15) main_mp3_pane_g8

0xf733,	// (0x0003da27) main_mp3_pane_g_ParamLimits

0x50f1,	// (0x000333e5) main_mp3_pane_t2

0x50ff,	// (0x000333f3) main_mp3_pane_t3

0xc93b,	// (0x0003ac2f) main_mp3_pane_t4

0xc949,	// (0x0003ac3d) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0003da38) main_mp3_pane_t

0xc957,	// (0x0003ac4b) mup_progress_pane_cp01

0x177b,	// (0x0002fa6f) aid_zoom_text_secondary2

0xc714,	// (0x0003aa08) list_cale_ev2_pane

0xc71c,	// (0x0003aa10) scroll_pane_cp023_ParamLimits

0x5255,	// (0x00033549) field_cale_ev2_pane_ParamLimits

0x5255,	// (0x00033549) field_cale_ev2_pane

0xc95f,	// (0x0003ac53) field_cale_ev2_pane_g1_ParamLimits

0xc95f,	// (0x0003ac53) field_cale_ev2_pane_g1

0xc96b,	// (0x0003ac5f) field_cale_ev2_pane_g2_ParamLimits

0xc96b,	// (0x0003ac5f) field_cale_ev2_pane_g2

0xc983,	// (0x0003ac77) field_cale_ev2_pane_g3_ParamLimits

0xc983,	// (0x0003ac77) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0003da59) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0003da59) field_cale_ev2_pane_g

0xc9a7,	// (0x0003ac9b) field_cale_ev2_pane_t1_ParamLimits

0xc9a7,	// (0x0003ac9b) field_cale_ev2_pane_t1

0xc9be,	// (0x0003acb2) field_cale_ev2_pane_t2_ParamLimits

0xc9be,	// (0x0003acb2) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0003da62) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0003da62) field_cale_ev2_pane_t

0x4166,	// (0x0003245a) main_postcard_pane_g5_ParamLimits

0x4166,	// (0x0003245a) main_postcard_pane_g5

0x417c,	// (0x00032470) main_postcard_pane_g6_ParamLimits

0x417c,	// (0x00032470) main_postcard_pane_g6

0x221a,	// (0x0003050e) camera2_autofocus_pane_cp_ParamLimits

0x221a,	// (0x0003050e) camera2_autofocus_pane_cp

0x1806,	// (0x0002fafa) main_mup3_pane

0x5297,	// (0x0003358b) main_mup3_pane_g1_ParamLimits

0x5297,	// (0x0003358b) main_mup3_pane_g1

0x52b9,	// (0x000335ad) main_mup3_pane_g2_ParamLimits

0x52b9,	// (0x000335ad) main_mup3_pane_g2

0x533b,	// (0x0003362f) main_mup3_pane_g3_ParamLimits

0x533b,	// (0x0003362f) main_mup3_pane_g3

0x5381,	// (0x00033675) main_mup3_pane_g4_ParamLimits

0x5381,	// (0x00033675) main_mup3_pane_g4

0x53c7,	// (0x000336bb) main_mup3_pane_g5_ParamLimits

0x53c7,	// (0x000336bb) main_mup3_pane_g5

0x540f,	// (0x00033703) main_mup3_pane_g6_ParamLimits

0x540f,	// (0x00033703) main_mup3_pane_g6

0xc9d3,	// (0x0003acc7) main_mup3_pane_g7_ParamLimits

0xc9d3,	// (0x0003acc7) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0003da72) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0003da72) main_mup3_pane_g

0x548d,	// (0x00033781) main_mup3_pane_t1_ParamLimits

0x548d,	// (0x00033781) main_mup3_pane_t1

0x5501,	// (0x000337f5) main_mup3_pane_t2_ParamLimits

0x5501,	// (0x000337f5) main_mup3_pane_t2

0x55d5,	// (0x000338c9) main_mup3_pane_t4_ParamLimits

0x55d5,	// (0x000338c9) main_mup3_pane_t4

0x562b,	// (0x0003391f) main_mup3_pane_t5_ParamLimits

0x562b,	// (0x0003391f) main_mup3_pane_t5

0x56e7,	// (0x000339db) main_mup3_pane_t6_ParamLimits

0x56e7,	// (0x000339db) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0003da83) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0003da83) main_mup3_pane_t

0x579f,	// (0x00033a93) mup3_progress_pane_ParamLimits

0x579f,	// (0x00033a93) mup3_progress_pane

0x582b,	// (0x00033b1f) popup_mup3_control_window_ParamLimits

0x582b,	// (0x00033b1f) popup_mup3_control_window

0xc9e1,	// (0x0003acd5) popup_mup3_text_window

0x585d,	// (0x00033b51) mup3_progress_pane_t1

0x587c,	// (0x00033b70) mup3_progress_pane_t2

0xc9e9,	// (0x0003acdd) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0003da90) mup3_progress_pane_t

0xca06,	// (0x0003acfa) mup_progress_pane_cp03

0x9a83,	// (0x00037d77) bg_tb_trans_pane_cp04

0x589b,	// (0x00033b8f) mup3_volume_pane

0x58a3,	// (0x00033b97) popup_mup3_control_window_g1

0x58ac,	// (0x00033ba0) mup3_volume_pane_g1

0x58b5,	// (0x00033ba9) mup3_volume_pane_g2

0x58be,	// (0x00033bb2) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0003da97) mup3_volume_pane_g

0x9a83,	// (0x00037d77) bg_tb_trans_pane_cp03

0xca16,	// (0x0003ad0a) popup_mup3_text_window_g1

0xca1e,	// (0x0003ad12) popup_mup3_text_window_t1

0xa227,	// (0x0003851b) list_calc_item_pane_g1_ParamLimits

0xc3eb,	// (0x0003a6df) mup_volume_pane_cp_g1

0x5219,	// (0x0003350d) main_touch_calib_pane_t3

0x522d,	// (0x00033521) main_touch_calib_pane_t4

0x5241,	// (0x00033535) main_touch_calib_pane_t5

0x1767,	// (0x0002fa5b) aid_cell_size_toolbar2

0x176f,	// (0x0002fa63) aid_popup3_width_pane

0x177b,	// (0x0002fa6f) aid_zoom_text_msg_primary

0x21ef,	// (0x000304e3) vorec_t7

0xa1eb,	// (0x000384df) bg_calc_paper_pane_g1_ParamLimits

0xa1f7,	// (0x000384eb) bg_calc_paper_pane_g2_ParamLimits

0xa203,	// (0x000384f7) bg_calc_paper_pane_g3_ParamLimits

0xa20f,	// (0x00038503) bg_calc_paper_pane_g4_ParamLimits

0xa21b,	// (0x0003850f) bg_calc_paper_pane_g5_ParamLimits

0x1ab1,	// (0x0002fda5) bg_calc_paper_pane_g6_ParamLimits

0x1ac2,	// (0x0002fdb6) bg_calc_paper_pane_g7_ParamLimits

0x1ad3,	// (0x0002fdc7) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0003d44c) bg_calc_paper_pane_g_ParamLimits

0x1ae6,	// (0x0002fdda) calc_bg_paper_pane_g9_ParamLimits

0x2372,	// (0x00030666) image_qvga_pane_ParamLimits

0x2372,	// (0x00030666) image_qvga_pane

0xa0fb,	// (0x000383ef) bg_popup_sub_pane_cp04_ParamLimits

0xb084,	// (0x00039378) popup_mup_playback_window_g1_ParamLimits

0xb090,	// (0x00039384) popup_mup_playback_window_t1_ParamLimits

0xb0a5,	// (0x00039399) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0003d7d6) popup_mup_playback_window_t_ParamLimits

0x4cf0,	// (0x00032fe4) main_mup2_pane_g3_ParamLimits

0x4cf0,	// (0x00032fe4) main_mup2_pane_g3

0x2785,	// (0x00030a79) popup_toolbar_window_cp04

0xb49a,	// (0x0003978e) popup_call2_audio_second_window_g3_ParamLimits

0xb49a,	// (0x0003978e) popup_call2_audio_second_window_g3

0xb8a4,	// (0x00039b98) popup_call2_audio_first_window_g4_ParamLimits

0xb8a4,	// (0x00039b98) popup_call2_audio_first_window_g4

0xbf23,	// (0x0003a217) popup_call2_audio_in_window_g4_ParamLimits

0xbf23,	// (0x0003a217) popup_call2_audio_in_window_g4

0x4295,	// (0x00032589) aid_area_sk_bg_cut_ParamLimits

0x4295,	// (0x00032589) aid_area_sk_bg_cut

0xb0ba,	// (0x000393ae) aid_area_sk_bg_cut_2_ParamLimits

0xb0ba,	// (0x000393ae) aid_area_sk_bg_cut_2

0x505a,	// (0x0003334e) aid_placing_details_win

0x5062,	// (0x00033356) aid_placing_details_win_2

0xc80c,	// (0x0003ab00) camera2_autofocus_pane_g1_ParamLimits

0x01b2,	// (0x0002e4a6) popup_fixed_preview_cale_window_ParamLimits

0x01b2,	// (0x0002e4a6) popup_fixed_preview_cale_window

0xae40,	// (0x00039134) navi_slider_pane_g3

0xae49,	// (0x0003913d) navi_slider_pane_g4

0xae52,	// (0x00039146) navi_slider_pane_g5

0xae40,	// (0x00039134) navi_slider_pane_g6

0x3b84,	// (0x00031e78) navi_slider_pane_g7

0xaf73,	// (0x00039267) mup_scale_pane_g3

0xaf7c,	// (0x00039270) mup_scale_pane_g4

0xaf85,	// (0x00039279) mup_scale_pane_g5

0x3f8b,	// (0x0003227f) mup_scale_pane_g6

0x3f94,	// (0x00032288) mup_scale_pane_g7

0xae40,	// (0x00039134) cams2_slider_pane_g3

0xc46d,	// (0x0003a761) cams2_slider_pane_g4

0x4fa7,	// (0x0003329b) cams2_slider_pane_g5

0xae40,	// (0x00039134) cams2_slider_pane_g6

0x4faf,	// (0x000332a3) cams2_slider_pane_g7

0xc69a,	// (0x0003a98e) camera2_autofocus_pane_cp_g1

0xc284,	// (0x0003a578) bg_popup_preview_window_pane_cp02_ParamLimits

0xc284,	// (0x0003a578) bg_popup_preview_window_pane_cp02

0xca2c,	// (0x0003ad20) list_fp_cale_pane_ParamLimits

0xca2c,	// (0x0003ad20) list_fp_cale_pane

0xca38,	// (0x0003ad2c) popup_fixed_preview_cale_window_t1_ParamLimits

0xca38,	// (0x0003ad2c) popup_fixed_preview_cale_window_t1

0x58c7,	// (0x00033bbb) popup_fixed_preview_cale_window_t2_ParamLimits

0x58c7,	// (0x00033bbb) popup_fixed_preview_cale_window_t2

0x58dc,	// (0x00033bd0) popup_fixed_preview_cale_window_t3_ParamLimits

0x58dc,	// (0x00033bd0) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0003da9e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0003da9e) popup_fixed_preview_cale_window_t

0x58f1,	// (0x00033be5) list_single_fp_cale_pane_ParamLimits

0x58f1,	// (0x00033be5) list_single_fp_cale_pane

0xca56,	// (0x0003ad4a) list_single_fp_cale_pane_g1_ParamLimits

0xca56,	// (0x0003ad4a) list_single_fp_cale_pane_g1

0xca62,	// (0x0003ad56) list_single_fp_cale_pane_g2_ParamLimits

0xca62,	// (0x0003ad56) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0003daa5) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0003daa5) list_single_fp_cale_pane_g

0xca7b,	// (0x0003ad6f) list_single_fp_cale_pane_t1_ParamLimits

0xca7b,	// (0x0003ad6f) list_single_fp_cale_pane_t1

0xca8d,	// (0x0003ad81) list_single_fp_cale_pane_t2_ParamLimits

0xca8d,	// (0x0003ad81) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0003daac) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0003daac) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1820,	// (0x0002fb14) main_dialer_pane

0x5908,	// (0x00033bfc) aid_cell_size_keypad

0x5912,	// (0x00033c06) dialer_ne_pane

0x591a,	// (0x00033c0e) grid_dialer_command_1_pane

0x5922,	// (0x00033c16) grid_dialer_command_2_pane

0x592a,	// (0x00033c1e) grid_dialer_keypad_pane

0x593c,	// (0x00033c30) bg_popup_call_pane_cp06_ParamLimits

0x593c,	// (0x00033c30) bg_popup_call_pane_cp06

0x5948,	// (0x00033c3c) dialer_ne_clear_pane_ParamLimits

0x5948,	// (0x00033c3c) dialer_ne_clear_pane

0xcac0,	// (0x0003adb4) dialer_ne_pane_g1

0xcac8,	// (0x0003adbc) dialer_ne_pane_t1_ParamLimits

0xcac8,	// (0x0003adbc) dialer_ne_pane_t1

0x5954,	// (0x00033c48) dialer_ne_pane_t2_ParamLimits

0x5954,	// (0x00033c48) dialer_ne_pane_t2

0x597e,	// (0x00033c72) dialer_ne_pane_t3_ParamLimits

0x597e,	// (0x00033c72) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0003dab1) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0003dab1) dialer_ne_pane_t

0x59ae,	// (0x00033ca2) dialer_ne_pane_t3_copy1_ParamLimits

0x59ae,	// (0x00033ca2) dialer_ne_pane_t3_copy1

0x59dd,	// (0x00033cd1) cell_dialer_keypad_pane_ParamLimits

0x59dd,	// (0x00033cd1) cell_dialer_keypad_pane

0x59f4,	// (0x00033ce8) cell_dialer_command_1_pane_ParamLimits

0x59f4,	// (0x00033ce8) cell_dialer_command_1_pane

0x5a0a,	// (0x00033cfe) cell_dialer_command_2_pane_ParamLimits

0x5a0a,	// (0x00033cfe) cell_dialer_command_2_pane

0xcada,	// (0x0003adce) bg_button_pane_cp02_ParamLimits

0xcada,	// (0x0003adce) bg_button_pane_cp02

0x5a19,	// (0x00033d0d) cell_dialer_keypad_pane_g1_ParamLimits

0x5a19,	// (0x00033d0d) cell_dialer_keypad_pane_g1

0xcada,	// (0x0003adce) bg_button_pane_cp03_ParamLimits

0xcada,	// (0x0003adce) bg_button_pane_cp03

0x5a2e,	// (0x00033d22) cell_dialer_command_1_pane_g1_ParamLimits

0x5a2e,	// (0x00033d22) cell_dialer_command_1_pane_g1

0xcae6,	// (0x0003adda) bg_button_pane_cp04

0x5a41,	// (0x00033d35) cell_dialer_command_2_pane_g1

0xa3ad,	// (0x000386a1) bg_button_pane_cp06

0xcaee,	// (0x0003ade2) dialer_ne_clear_pane_g1

0xad13,	// (0x00039007) navi_pane_g2

0xad41,	// (0x00039035) navi_pane_g3

0x0002,

0xf3e5,	// (0x0003d6d9) navi_pane_g

0xadd0,	// (0x000390c4) navi_pane_mv_g2

0xadf7,	// (0x000390eb) navi_pane_mv_g5

0x3b39,	// (0x00031e2d) navi_pane_mv_t1

0xa1df,	// (0x000384d3) main_clock2_pane

0x5a8e,	// (0x00033d82) main_clock2_list_pane_ParamLimits

0x5a8e,	// (0x00033d82) main_clock2_list_pane

0x5ac6,	// (0x00033dba) main_clock2_pane_t1_ParamLimits

0x5ac6,	// (0x00033dba) main_clock2_pane_t1

0x5b04,	// (0x00033df8) main_clock2_pane_t2_ParamLimits

0x5b04,	// (0x00033df8) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0003dabd) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0003dabd) main_clock2_pane_t

0x5ba2,	// (0x00033e96) popup_clock_analogue_window_cp03_ParamLimits

0x5ba2,	// (0x00033e96) popup_clock_analogue_window_cp03

0x5bc7,	// (0x00033ebb) popup_clock_digital_window_cp02_ParamLimits

0x5bc7,	// (0x00033ebb) popup_clock_digital_window_cp02

0x5c3a,	// (0x00033f2e) main_clock2_list_single_pane_ParamLimits

0x5c3a,	// (0x00033f2e) main_clock2_list_single_pane

0xa3ad,	// (0x000386a1) list_highlight_pane_cp05

0xcb28,	// (0x0003ae1c) main_clock2_list_single_pane_t1

0x2785,	// (0x00030a79) popup_toolbar_window_cp04_ParamLimits

0x5084,	// (0x00033378) camera2_autofocus_pane_g2_ParamLimits

0x5084,	// (0x00033378) camera2_autofocus_pane_g2

0x5090,	// (0x00033384) camera2_autofocus_pane_g3_ParamLimits

0x5090,	// (0x00033384) camera2_autofocus_pane_g3

0x509c,	// (0x00033390) camera2_autofocus_pane_g4_ParamLimits

0x509c,	// (0x00033390) camera2_autofocus_pane_g4

0x50a8,	// (0x0003339c) camera2_autofocus_pane_g5_ParamLimits

0x50a8,	// (0x0003339c) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0003da01) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0003da01) camera2_autofocus_pane_g

0x5277,	// (0x0003356b) camera2_autofocus_pane_cp_g2

0x527f,	// (0x00033573) camera2_autofocus_pane_cp_g3

0x5287,	// (0x0003357b) camera2_autofocus_pane_cp_g4

0x528f,	// (0x00033583) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0003da67) camera2_autofocus_pane_cp_g

0x5934,	// (0x00033c28) popup_dialer_spcha_window

0x9a83,	// (0x00037d77) bg_popup_sub_pane_cp07

0xcb36,	// (0x0003ae2a) list_spcha_pane

0xcb3e,	// (0x0003ae32) list_single_spcha_pane_ParamLimits

0xcb3e,	// (0x0003ae32) list_single_spcha_pane

0x9a83,	// (0x00037d77) list_highlight_pane_cp06

0xcb4f,	// (0x0003ae43) list_single_spcha_pane_t1

0xbccd,	// (0x00039fc1) popup_call2_audio_out_window_g4_ParamLimits

0xbccd,	// (0x00039fc1) popup_call2_audio_out_window_g4

0x1820,	// (0x0002fb14) main_imed2_pane

0x49b4,	// (0x00032ca8) popup_imed_adjust2_window

0x0612,	// (0x0002e906) popup_imed_trans_window_ParamLimits

0x0612,	// (0x0002e906) popup_imed_trans_window

0xc4d6,	// (0x0003a7ca) popup_blid_sat_info2_window_t1

0xc4e4,	// (0x0003a7d8) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0003d996) popup_blid_sat_info2_window_t

0x5c6c,	// (0x00033f60) aid_size_cell_colour_35

0x5c8c,	// (0x00033f80) aid_size_cell_colour_112

0x5cac,	// (0x00033fa0) aid_size_cell_effect

0xc290,	// (0x0003a584) bg_tb_trans_pane_cp02

0xa864,	// (0x00038b58) heading_imed_pane

0x5ccc,	// (0x00033fc0) listscroll_imed_pane

0xcb5d,	// (0x0003ae51) heading_imed_pane_g1

0xcb65,	// (0x0003ae59) heading_imed_pane_t1

0xcb73,	// (0x0003ae67) grid_imed_colour_35_pane_ParamLimits

0xcb73,	// (0x0003ae67) grid_imed_colour_35_pane

0x5cd8,	// (0x00033fcc) grid_imed_effect_pane

0xcb8b,	// (0x0003ae7f) list_imed_aspect_pane

0x5cee,	// (0x00033fe2) scroll_pane_cp027_ParamLimits

0x5cee,	// (0x00033fe2) scroll_pane_cp027

0x5cff,	// (0x00033ff3) cell_imed_effect_pane_ParamLimits

0x5cff,	// (0x00033ff3) cell_imed_effect_pane

0xcb93,	// (0x0003ae87) cell_imed_colour_pane_ParamLimits

0xcb93,	// (0x0003ae87) cell_imed_colour_pane

0xcbd5,	// (0x0003aec9) cell_imed_colour_pane_g1_ParamLimits

0xcbd5,	// (0x0003aec9) cell_imed_colour_pane_g1

0xcbe6,	// (0x0003aeda) hgihlgiht_grid_pane_cp016_ParamLimits

0xcbe6,	// (0x0003aeda) hgihlgiht_grid_pane_cp016

0x5d26,	// (0x0003401a) cell_imed_effect_pane_g1

0x5d2e,	// (0x00034022) grid_highlight_pane_cp017

0xcbf7,	// (0x0003aeeb) list_imed_single_pane_ParamLimits

0xcbf7,	// (0x0003aeeb) list_imed_single_pane

0x9a83,	// (0x00037d77) list_highlight_pane_cp07

0xcc0d,	// (0x0003af01) list_imed_aspect_pane_comp1_t1

0xc290,	// (0x0003a584) bg_tb_trans_pane_cp05

0xcc2f,	// (0x0003af23) popup_imed_adjust2_window_g1

0xcc56,	// (0x0003af4a) popup_imed_adjust2_window_t1

0xcc6e,	// (0x0003af62) slider_imed_adjust_pane

0xcc82,	// (0x0003af76) slider_imed_adjust_pane_g1

0xcc92,	// (0x0003af86) slider_imed_adjust_pane_g2

0xcca2,	// (0x0003af96) slider_imed_adjust_pane_g3

0xccb3,	// (0x0003afa7) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0003dada) slider_imed_adjust_pane_g

0x5d37,	// (0x0003402b) aid_size_cell_clipart2

0x5d43,	// (0x00034037) grid_imed_clipart_pane

0xccc4,	// (0x0003afb8) scroll_pane_cp031

0x5d4d,	// (0x00034041) cell_imed_clipart_pane_ParamLimits

0x5d4d,	// (0x00034041) cell_imed_clipart_pane

0x5d71,	// (0x00034065) cell_imed_clipart_pane_g1

0x9a83,	// (0x00037d77) grid_highlight_pane_cp014

0x5aa3,	// (0x00033d97) main_clock2_pane_g1_ParamLimits

0x5aa3,	// (0x00033d97) main_clock2_pane_g1

0x5be5,	// (0x00033ed9) aid_call2_pane_cp10

0x5bf7,	// (0x00033eeb) aid_call_pane_cp10

0xac72,	// (0x00038f66) popup_clock_analogue_window_cp10_g1

0xac72,	// (0x00038f66) popup_clock_analogue_window_cp10_g2

0x5c09,	// (0x00033efd) popup_clock_analogue_window_cp10_g3

0x5c09,	// (0x00033efd) popup_clock_analogue_window_cp10_g4

0xac72,	// (0x00038f66) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0003dac8) popup_clock_analogue_window_cp10_g

0x5c1b,	// (0x00033f0f) popup_clock_analogue_window_cp10_t1

0x0c52,	// (0x0002ef46) clock_digital_number_pane_cp10_ParamLimits

0x0c52,	// (0x0002ef46) clock_digital_number_pane_cp10

0x0c6a,	// (0x0002ef5e) clock_digital_number_pane_cp11_ParamLimits

0x0c6a,	// (0x0002ef5e) clock_digital_number_pane_cp11

0x0c82,	// (0x0002ef76) clock_digital_number_pane_cp12_ParamLimits

0x0c82,	// (0x0002ef76) clock_digital_number_pane_cp12

0x0c9a,	// (0x0002ef8e) clock_digital_number_pane_cp13_ParamLimits

0x0c9a,	// (0x0002ef8e) clock_digital_number_pane_cp13

0x0cb2,	// (0x0002efa6) clock_digital_separator_pane_cp10_ParamLimits

0x0cb2,	// (0x0002efa6) clock_digital_separator_pane_cp10

0x5c4c,	// (0x00033f40) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c4c,	// (0x00033f40) popup_clock_digital_window_cp02_t1

0xa0f3,	// (0x000383e7) clock_digital_number_pane_cp10_g1

0xa0f3,	// (0x000383e7) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0003dae3) clock_digital_number_pane_cp10_g

0xa0f3,	// (0x000383e7) clock_digital_separator_pane_cp10_g1

0xa0f3,	// (0x000383e7) clock_digital_separator_pane_g2_cp10

0xadff,	// (0x000390f3) navi_pane_vded_g4

0xae08,	// (0x000390fc) navi_pane_vded_g5

0xae11,	// (0x00039105) navi_pane_vded_t1

0x1820,	// (0x0002fb14) main_vded_pane

0x5d7a,	// (0x0003406e) main_vded_pane_g1

0x5d84,	// (0x00034078) main_vded_pane_g2

0x5d8e,	// (0x00034082) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0003dae8) main_vded_pane_g

0x5d98,	// (0x0003408c) main_vded_pane_t1

0x5da6,	// (0x0003409a) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0003daef) main_vded_pane_t

0x5db4,	// (0x000340a8) vded_slider_pane

0x5dbe,	// (0x000340b2) vded_video_pane

0xcccc,	// (0x0003afc0) vded_video_pane_g1

0x5dc8,	// (0x000340bc) vded_video_pane_g2

0xc69a,	// (0x0003a98e) vded_video_pane_g3

0x0002,

0xf800,	// (0x0003daf4) vded_video_pane_g

0xccd6,	// (0x0003afca) vded_slider_pane_g1

0xccdf,	// (0x0003afd3) vded_slider_pane_g2

0xcce8,	// (0x0003afdc) vded_slider_pane_g3

0xccf1,	// (0x0003afe5) vded_slider_pane_g4

0xccfa,	// (0x0003afee) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0003dafb) vded_slider_pane_g

0x5813,	// (0x00033b07) mup3_rocker_pane_ParamLimits

0x5813,	// (0x00033b07) mup3_rocker_pane

0x5dd1,	// (0x000340c5) mup3_control_keys_pane_g1

0x5dd9,	// (0x000340cd) mup3_control_keys_pane_g2

0x5de1,	// (0x000340d5) mup3_control_keys_pane_g3

0x5de9,	// (0x000340dd) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0003db06) mup3_control_keys_pane_g

0x01e9,	// (0x0002e4dd) popup_toolbar2_fixed_window_cp01_ParamLimits

0x01e9,	// (0x0002e4dd) popup_toolbar2_fixed_window_cp01

0x5847,	// (0x00033b3b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5847,	// (0x00033b3b) popup_toolbar2_fixed_window_cp02

0xb60c,	// (0x00039900) popup_call2_audio_second_window_t4_ParamLimits

0xb60c,	// (0x00039900) popup_call2_audio_second_window_t4

0xbb3a,	// (0x00039e2e) popup_call2_audio_first_window_t6_ParamLimits

0xbb3a,	// (0x00039e2e) popup_call2_audio_first_window_t6

0xbdd0,	// (0x0003a0c4) popup_call2_audio_out_window_t6_ParamLimits

0xbdd0,	// (0x0003a0c4) popup_call2_audio_out_window_t6

0x1820,	// (0x0002fb14) main_vitu_pane

0x5df9,	// (0x000340ed) aid_size_cell_itu_ParamLimits

0x5df9,	// (0x000340ed) aid_size_cell_itu

0xa7c4,	// (0x00038ab8) bg_popup_window_pane_cp08_ParamLimits

0xa7c4,	// (0x00038ab8) bg_popup_window_pane_cp08

0x5e0f,	// (0x00034103) field_vitu_entry_pane_ParamLimits

0x5e0f,	// (0x00034103) field_vitu_entry_pane

0x5e26,	// (0x0003411a) grid_vitu_function_pane_ParamLimits

0x5e26,	// (0x0003411a) grid_vitu_function_pane

0x5e41,	// (0x00034135) grid_vitu_itu_pane_ParamLimits

0x5e41,	// (0x00034135) grid_vitu_itu_pane

0x5e5f,	// (0x00034153) cell_vitu_itu_pane_ParamLimits

0x5e5f,	// (0x00034153) cell_vitu_itu_pane

0x5e83,	// (0x00034177) cell_vitu_function_pane_ParamLimits

0x5e83,	// (0x00034177) cell_vitu_function_pane

0xa7c4,	// (0x00038ab8) bg_popup_sub_pane_cp08_ParamLimits

0xa7c4,	// (0x00038ab8) bg_popup_sub_pane_cp08

0x5e9e,	// (0x00034192) field_vitu_entry_pane_t1_ParamLimits

0x5e9e,	// (0x00034192) field_vitu_entry_pane_t1

0xcd1b,	// (0x0003b00f) field_vitu_entry_pane_t2_ParamLimits

0xcd1b,	// (0x0003b00f) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0003db14) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0003db14) field_vitu_entry_pane_t

0xcd38,	// (0x0003b02c) bg_button_pane_cp05_ParamLimits

0xcd38,	// (0x0003b02c) bg_button_pane_cp05

0x5ebd,	// (0x000341b1) cell_vitu_itu_pane_g1

0x5ed5,	// (0x000341c9) cell_vitu_itu_pane_t1_ParamLimits

0x5ed5,	// (0x000341c9) cell_vitu_itu_pane_t1

0x5ee7,	// (0x000341db) cell_vitu_itu_pane_t2_ParamLimits

0x5ee7,	// (0x000341db) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0003db19) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0003db19) cell_vitu_itu_pane_t

0xcd46,	// (0x0003b03a) bg_button_pane_cp07

0x5f2a,	// (0x0003421e) cell_vitu_function_pane_g1

0x19ad,	// (0x0002fca1) main_calc_pane_g1

0x0049,	// (0x0002e33d) aid_visual_content_pane

0x1820,	// (0x0002fb14) main_vradio_pane

0x5f33,	// (0x00034227) main_vradio_pane_g1_ParamLimits

0x5f33,	// (0x00034227) main_vradio_pane_g1

0xcd50,	// (0x0003b044) main_vradio_pane_g2_ParamLimits

0xcd50,	// (0x0003b044) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0003db20) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0003db20) main_vradio_pane_g

0x5f4c,	// (0x00034240) main_vradio_pane_t1_ParamLimits

0x5f4c,	// (0x00034240) main_vradio_pane_t1

0x5f61,	// (0x00034255) main_vradio_pane_t2_ParamLimits

0x5f61,	// (0x00034255) main_vradio_pane_t2

0xcd5d,	// (0x0003b051) main_vradio_pane_t3_ParamLimits

0xcd5d,	// (0x0003b051) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0003db25) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0003db25) main_vradio_pane_t

0x5f76,	// (0x0003426a) vradio_rocker_control_pane_ParamLimits

0x5f76,	// (0x0003426a) vradio_rocker_control_pane

0x5f88,	// (0x0003427c) vradio_station_info_pane_ParamLimits

0x5f88,	// (0x0003427c) vradio_station_info_pane

0xcd71,	// (0x0003b065) vradio_frequency_info_pane_ParamLimits

0xcd71,	// (0x0003b065) vradio_frequency_info_pane

0xc69a,	// (0x0003a98e) vradio_station_info_pane_g1

0xcd80,	// (0x0003b074) vradio_station_info_pane_t1_ParamLimits

0xcd80,	// (0x0003b074) vradio_station_info_pane_t1

0xcda2,	// (0x0003b096) vradio_station_info_pane_t2_ParamLimits

0xcda2,	// (0x0003b096) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0003db2c) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0003db2c) vradio_station_info_pane_t

0xcdb4,	// (0x0003b0a8) vradio_tuning_pane

0xcdbc,	// (0x0003b0b0) vradio_rocker_control_pane_g1

0xcdc4,	// (0x0003b0b8) vradio_rocker_control_pane_g2

0xcdcc,	// (0x0003b0c0) vradio_rocker_control_pane_g3

0xcdd4,	// (0x0003b0c8) vradio_rocker_control_pane_g4

0xcddc,	// (0x0003b0d0) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0003db31) vradio_rocker_control_pane_g

0x5f9a,	// (0x0003428e) vradio_frequency_info_pane_g1

0xcde4,	// (0x0003b0d8) vradio_frequency_info_pane_t1_ParamLimits

0xcde4,	// (0x0003b0d8) vradio_frequency_info_pane_t1

0x5fa4,	// (0x00034298) vradio_tuning_pane_g1

0x5faf,	// (0x000342a3) vradio_tuning_pane_t1

0x17c4,	// (0x0002fab8) area_side_right_pane_ParamLimits

0x17c4,	// (0x0002fab8) area_side_right_pane

0xc24b,	// (0x0003a53f) status_small_pane_g1

0xc253,	// (0x0003a547) status_small_pane_g2

0xc25c,	// (0x0003a550) status_small_pane_g3

0xc265,	// (0x0003a559) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0003d8ec) status_small_pane_g

0xc26e,	// (0x0003a562) status_small_pane_t1

0x1820,	// (0x0002fb14) main_video3_pane

0xcdf8,	// (0x0003b0ec) cams_zoom_vslider_pane

0xce00,	// (0x0003b0f4) image3_wide_pane_ParamLimits

0xce00,	// (0x0003b0f4) image3_wide_pane

0xce1a,	// (0x0003b10e) image3_wide_small_pane

0xce26,	// (0x0003b11a) main_video3_pane_g1_ParamLimits

0xce26,	// (0x0003b11a) main_video3_pane_g1

0xce42,	// (0x0003b136) main_video3_pane_g2_ParamLimits

0xce42,	// (0x0003b136) main_video3_pane_g2

0x0001,

0xf848,	// (0x0003db3c) main_video3_pane_g_ParamLimits

0xf848,	// (0x0003db3c) main_video3_pane_g

0xce5e,	// (0x0003b152) main_video3_pane_t1_ParamLimits

0xce5e,	// (0x0003b152) main_video3_pane_t1

0xce89,	// (0x0003b17d) main_video3_pane_t2_ParamLimits

0xce89,	// (0x0003b17d) main_video3_pane_t2

0xceb4,	// (0x0003b1a8) main_video3_pane_t3_ParamLimits

0xceb4,	// (0x0003b1a8) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0003db41) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0003db41) main_video3_pane_t

0xcee1,	// (0x0003b1d5) cams_zoom_vslider_pane_g1

0xceea,	// (0x0003b1de) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0003db48) cams_zoom_vslider_pane_g

0xcef2,	// (0x0003b1e6) small_slider_vertical_pane

0xc69a,	// (0x0003a98e) small_slider_vertical_pane_g1

0xc69a,	// (0x0003a98e) small_slider_vertical_pane_g2

0xcefa,	// (0x0003b1ee) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0003db4d) small_slider_vertical_pane_g

0x1820,	// (0x0002fb14) main_hwr_training_pane

0xcf03,	// (0x0003b1f7) hwr_training_instruct_pane_ParamLimits

0xcf03,	// (0x0003b1f7) hwr_training_instruct_pane

0x5fbe,	// (0x000342b2) hwr_training_navi_pane_ParamLimits

0x5fbe,	// (0x000342b2) hwr_training_navi_pane

0x5fdd,	// (0x000342d1) hwr_training_write_pane_ParamLimits

0x5fdd,	// (0x000342d1) hwr_training_write_pane

0x9a83,	// (0x00037d77) bg_frame_shadow_pane

0xcf3a,	// (0x0003b22e) hwr_training_write_pane_g1

0xcf42,	// (0x0003b236) hwr_training_write_pane_g2

0xcf4a,	// (0x0003b23e) hwr_training_write_pane_g3

0xcf52,	// (0x0003b246) hwr_training_write_pane_g4

0xcf5a,	// (0x0003b24e) hwr_training_write_pane_g5

0xcf62,	// (0x0003b256) hwr_training_write_pane_g6

0xcf6a,	// (0x0003b25e) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0003db54) hwr_training_write_pane_g

0x6018,	// (0x0003430c) hwr_training_navi_pane_g1_ParamLimits

0x6018,	// (0x0003430c) hwr_training_navi_pane_g1

0x602a,	// (0x0003431e) hwr_training_navi_pane_g2_ParamLimits

0x602a,	// (0x0003431e) hwr_training_navi_pane_g2

0x603c,	// (0x00034330) hwr_training_navi_pane_g3_ParamLimits

0x603c,	// (0x00034330) hwr_training_navi_pane_g3

0x604c,	// (0x00034340) hwr_training_navi_pane_g4_ParamLimits

0x604c,	// (0x00034340) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0003db63) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0003db63) hwr_training_navi_pane_g

0x6059,	// (0x0003434d) hwr_training_navi_pane_t1

0x6067,	// (0x0003435b) list_single_hwr_training_instruct_pane_ParamLimits

0x6067,	// (0x0003435b) list_single_hwr_training_instruct_pane

0xcf72,	// (0x0003b266) list_single_hwr_training_instruct_pane_t1

0xc5da,	// (0x0003a8ce) bg_frame_shadow_pane_g1

0xcf81,	// (0x0003b275) bg_frame_shadow_pane_g2

0xcf89,	// (0x0003b27d) bg_frame_shadow_pane_g3

0xcf91,	// (0x0003b285) bg_frame_shadow_pane_g4

0xcf99,	// (0x0003b28d) bg_frame_shadow_pane_g5

0xcfa1,	// (0x0003b295) bg_frame_shadow_pane_g6

0xcfa9,	// (0x0003b29d) bg_frame_shadow_pane_g7

0xa2aa,	// (0x0003859e) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0003db6e) bg_frame_shadow_pane_g

0x1820,	// (0x0002fb14) main_video_tele_dialer_pane

0x0cd9,	// (0x0002efcd) aid_size_cell_video_keypad_ParamLimits

0x0cd9,	// (0x0002efcd) aid_size_cell_video_keypad

0x0cf3,	// (0x0002efe7) grid_video_dialer_keypad_pane_ParamLimits

0x0cf3,	// (0x0002efe7) grid_video_dialer_keypad_pane

0x0d41,	// (0x0002f035) video_down_pane_cp_ParamLimits

0x0d41,	// (0x0002f035) video_down_pane_cp

0x0d57,	// (0x0002f04b) cell_video_dialer_keypad_pane_ParamLimits

0x0d57,	// (0x0002f04b) cell_video_dialer_keypad_pane

0xcfb1,	// (0x0003b2a5) bg_button_pane_cp08_ParamLimits

0xcfb1,	// (0x0003b2a5) bg_button_pane_cp08

0x609a,	// (0x0003438e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x609a,	// (0x0003438e) cell_video_dialer_keypad_pane_g1

0x57fd,	// (0x00033af1) mup3_rocker2_pane_ParamLimits

0x57fd,	// (0x00033af1) mup3_rocker2_pane

0xc69a,	// (0x0003a98e) mup3_rocker2_pane_g1

0x04fb,	// (0x0002e7ef) main_dialer2_pane

0x1820,	// (0x0002fb14) main_mp4_pane

0x60dd,	// (0x000343d1) main_mp4_pane_g1_ParamLimits

0x60dd,	// (0x000343d1) main_mp4_pane_g1

0x60dd,	// (0x000343d1) main_mp4_pane_g2_ParamLimits

0x60dd,	// (0x000343d1) main_mp4_pane_g2

0x0d79,	// (0x0002f06d) main_mp4_pane_g3_ParamLimits

0x0d79,	// (0x0002f06d) main_mp4_pane_g3

0x60eb,	// (0x000343df) main_mp4_pane_g4_ParamLimits

0x60eb,	// (0x000343df) main_mp4_pane_g4

0x6113,	// (0x00034407) main_mp4_pane_g5_ParamLimits

0x6113,	// (0x00034407) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0003db8e) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0003db8e) main_mp4_pane_g

0x6163,	// (0x00034457) main_mp4_pane_t1_ParamLimits

0x6163,	// (0x00034457) main_mp4_pane_t1

0x61bf,	// (0x000344b3) main_mp4_pane_t2_ParamLimits

0x61bf,	// (0x000344b3) main_mp4_pane_t2

0xcfbd,	// (0x0003b2b1) main_mp4_pane_t3_ParamLimits

0xcfbd,	// (0x0003b2b1) main_mp4_pane_t3

0x6211,	// (0x00034505) main_mp4_pane_t4_ParamLimits

0x6211,	// (0x00034505) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003db9b) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003db9b) main_mp4_pane_t

0x6255,	// (0x00034549) mp4_progress_pane_ParamLimits

0x6255,	// (0x00034549) mp4_progress_pane

0x629f,	// (0x00034593) mp4_rocker_pane_ParamLimits

0x629f,	// (0x00034593) mp4_rocker_pane

0xcfe5,	// (0x0003b2d9) mp4_progress_pane_t1

0xd020,	// (0x0003b314) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003dba4) mp4_progress_pane_t

0xd039,	// (0x0003b32d) mup_progress_pane_cp04

0xd045,	// (0x0003b339) mp4_rocker_pane_g1

0x0db5,	// (0x0002f0a9) aid_cell_size_keypad2_ParamLimits

0x0db5,	// (0x0002f0a9) aid_cell_size_keypad2

0x0dcb,	// (0x0002f0bf) dialer2_ne_pane_ParamLimits

0x0dcb,	// (0x0002f0bf) dialer2_ne_pane

0x0de5,	// (0x0002f0d9) grid_dialer2_keypad_pane_ParamLimits

0x0de5,	// (0x0002f0d9) grid_dialer2_keypad_pane

0xc47d,	// (0x0003a771) bg_popup_call_pane_cp07_ParamLimits

0xc47d,	// (0x0003a771) bg_popup_call_pane_cp07

0x62bf,	// (0x000345b3) dialer2_ne_pane_t1_ParamLimits

0x62bf,	// (0x000345b3) dialer2_ne_pane_t1

0x0e03,	// (0x0002f0f7) cell_dialer2_keypad_pane_ParamLimits

0x0e03,	// (0x0002f0f7) cell_dialer2_keypad_pane

0xd061,	// (0x0003b355) bg_button_pane_pane_cp04_ParamLimits

0xd061,	// (0x0003b355) bg_button_pane_pane_cp04

0x62fc,	// (0x000345f0) cell_dialer2_keypad_pane_g1_ParamLimits

0x62fc,	// (0x000345f0) cell_dialer2_keypad_pane_g1

0x2659,	// (0x0003094d) aid_placing_vt_set_content_ParamLimits

0x2659,	// (0x0003094d) aid_placing_vt_set_content

0x2681,	// (0x00030975) aid_placing_vt_set_title_ParamLimits

0x2681,	// (0x00030975) aid_placing_vt_set_title

0x1820,	// (0x0002fb14) main_image3_pane

0x0e83,	// (0x0002f177) area_side_right_pane_cp01_ParamLimits

0x0e83,	// (0x0002f177) area_side_right_pane_cp01

0x60dd,	// (0x000343d1) main_image3_pane_g1_ParamLimits

0x60dd,	// (0x000343d1) main_image3_pane_g1

0x0e9a,	// (0x0002f18e) main_image3_pane_g2_ParamLimits

0x0e9a,	// (0x0002f18e) main_image3_pane_g2

0x0ec2,	// (0x0002f1b6) main_image3_pane_g3_ParamLimits

0x0ec2,	// (0x0002f1b6) main_image3_pane_g3

0x0eec,	// (0x0002f1e0) main_image3_pane_g4_ParamLimits

0x0eec,	// (0x0002f1e0) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003dbb3) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003dbb3) main_image3_pane_g

0x0f16,	// (0x0002f20a) main_image3_pane_t1_ParamLimits

0x0f16,	// (0x0002f20a) main_image3_pane_t1

0x0f6e,	// (0x0002f262) main_image3_pane_t2_ParamLimits

0x0f6e,	// (0x0002f262) main_image3_pane_t2

0x0fc0,	// (0x0002f2b4) main_image3_pane_t3_ParamLimits

0x0fc0,	// (0x0002f2b4) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003dbbc) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003dbbc) main_image3_pane_t

0xa7c4,	// (0x00038ab8) grid_sctrl_middle_pane_cp01_ParamLimits

0xa7c4,	// (0x00038ab8) grid_sctrl_middle_pane_cp01

0x6396,	// (0x0003468a) cell_sctrl_middle_pane_cp01_ParamLimits

0x6396,	// (0x0003468a) cell_sctrl_middle_pane_cp01

0x63b3,	// (0x000346a7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63b3,	// (0x000346a7) cell_sctrl_middle_pane_cp01_g1

0x1820,	// (0x0002fb14) main_call4_pane

0x63c9,	// (0x000346bd) aid_size_button_call4_ParamLimits

0x63c9,	// (0x000346bd) aid_size_button_call4

0x63fa,	// (0x000346ee) call4_windows_pane_ParamLimits

0x63fa,	// (0x000346ee) call4_windows_pane

0x641a,	// (0x0003470e) grid_call4_button_pane_ParamLimits

0x641a,	// (0x0003470e) grid_call4_button_pane

0xd06d,	// (0x0003b361) call4_windows_conf_pane

0xd082,	// (0x0003b376) popup_call4_audio_first_window_ParamLimits

0xd082,	// (0x0003b376) popup_call4_audio_first_window

0xd0ce,	// (0x0003b3c2) popup_call4_audio_second_window_ParamLimits

0xd0ce,	// (0x0003b3c2) popup_call4_audio_second_window

0xd0e2,	// (0x0003b3d6) popup_call4_audio_wait_window_ParamLimits

0xd0e2,	// (0x0003b3d6) popup_call4_audio_wait_window

0x6447,	// (0x0003473b) cell_call4_button_pane_ParamLimits

0x6447,	// (0x0003473b) cell_call4_button_pane

0x6470,	// (0x00034764) bg_button_pane_cp09_ParamLimits

0x6470,	// (0x00034764) bg_button_pane_cp09

0x647c,	// (0x00034770) cell_call4_button_pane_g1_ParamLimits

0x647c,	// (0x00034770) cell_call4_button_pane_g1

0x64a2,	// (0x00034796) cell_call4_button_pane_t1_ParamLimits

0x64a2,	// (0x00034796) cell_call4_button_pane_t1

0xd12a,	// (0x0003b41e) popup_call4_audio_conf_window_ParamLimits

0xd12a,	// (0x0003b41e) popup_call4_audio_conf_window

0x585d,	// (0x00033b51) mup3_progress_pane_t1_ParamLimits

0x587c,	// (0x00033b70) mup3_progress_pane_t2_ParamLimits

0xc9e9,	// (0x0003acdd) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0003da90) mup3_progress_pane_t_ParamLimits

0xca06,	// (0x0003acfa) mup_progress_pane_cp03_ParamLimits

0x5df1,	// (0x000340e5) mup3_control_keys_pane_g4_copy1

0x6283,	// (0x00034577) mp4_rocker2_pane_ParamLimits

0x6283,	// (0x00034577) mp4_rocker2_pane

0xd13e,	// (0x0003b432) mp4_rocker2_pane_g1

0xd146,	// (0x0003b43a) mp4_rocker2_pane_g2

0x64c8,	// (0x000347bc) mp4_rocker2_pane_g3

0x64d0,	// (0x000347c4) mp4_rocker2_pane_g4

0x64d8,	// (0x000347cc) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003dbc5) mp4_rocker2_pane_g

0x1820,	// (0x0002fb14) main_camera4_pane

0x1820,	// (0x0002fb14) main_video4_pane

0x0d0f,	// (0x0002f003) main_video_tele_dialer_pane_t1_ParamLimits

0x0d0f,	// (0x0002f003) main_video_tele_dialer_pane_t1

0x0d28,	// (0x0002f01c) main_video_tele_dialer_pane_t2_ParamLimits

0x0d28,	// (0x0002f01c) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0003db7f) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0003db7f) main_video_tele_dialer_pane_t

0x1060,	// (0x0002f354) cam4_autofocus_pane_ParamLimits

0x1060,	// (0x0002f354) cam4_autofocus_pane

0x1076,	// (0x0002f36a) cam4_image_uncrop_pane_ParamLimits

0x1076,	// (0x0002f36a) cam4_image_uncrop_pane

0x1090,	// (0x0002f384) cam4_indicators_pane_ParamLimits

0x1090,	// (0x0002f384) cam4_indicators_pane

0x10bb,	// (0x0002f3af) main_camera4_pane_g1_ParamLimits

0x10bb,	// (0x0002f3af) main_camera4_pane_g1

0x10cd,	// (0x0002f3c1) main_camera4_pane_g2_ParamLimits

0x10cd,	// (0x0002f3c1) main_camera4_pane_g2

0x10e0,	// (0x0002f3d4) main_camera4_pane_g3_ParamLimits

0x10e0,	// (0x0002f3d4) main_camera4_pane_g3

0x10f3,	// (0x0002f3e7) main_camera4_pane_g4_ParamLimits

0x10f3,	// (0x0002f3e7) main_camera4_pane_g4

0x1106,	// (0x0002f3fa) main_camera4_pane_g5_ParamLimits

0x1106,	// (0x0002f3fa) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003dbd0) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003dbd0) main_camera4_pane_g

0x112a,	// (0x0002f41e) main_camera4_pane_t1_ParamLimits

0x112a,	// (0x0002f41e) main_camera4_pane_t1

0x6510,	// (0x00034804) bg_tb_trans_pane_cp06

0x6526,	// (0x0003481a) cam4_indicators_pane_g1

0x6537,	// (0x0003482b) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003dbeb) cam4_indicators_pane_g

0x6555,	// (0x00034849) cam4_indicators_pane_t1

0x117a,	// (0x0002f46e) main_video4_pane_g1_ParamLimits

0x117a,	// (0x0002f46e) main_video4_pane_g1

0x1189,	// (0x0002f47d) main_video4_pane_g2_ParamLimits

0x1189,	// (0x0002f47d) main_video4_pane_g2

0x1198,	// (0x0002f48c) main_video4_pane_g3_ParamLimits

0x1198,	// (0x0002f48c) main_video4_pane_g3

0x11a7,	// (0x0002f49b) main_video4_pane_g4_ParamLimits

0x11a7,	// (0x0002f49b) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003dbf2) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003dbf2) main_video4_pane_g

0x11c5,	// (0x0002f4b9) vid4_indicators_pane_ParamLimits

0x11c5,	// (0x0002f4b9) vid4_indicators_pane

0x11f3,	// (0x0002f4e7) video4_image_uncrop_cif_pane_ParamLimits

0x11f3,	// (0x0002f4e7) video4_image_uncrop_cif_pane

0x120d,	// (0x0002f501) video4_image_uncrop_nhd_pane_ParamLimits

0x120d,	// (0x0002f501) video4_image_uncrop_nhd_pane

0x1076,	// (0x0002f36a) video4_image_uncrop_vga_pane_ParamLimits

0x1076,	// (0x0002f36a) video4_image_uncrop_vga_pane

0x1806,	// (0x0002fafa) bg_tb_trans_pane_cp07

0x657f,	// (0x00034873) vid4_indicators_pane_g1

0x6593,	// (0x00034887) vid4_indicators_pane_g2

0x65a7,	// (0x0003489b) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003dbfd) vid4_indicators_pane_g

0x65d4,	// (0x000348c8) vid4_indicators_pane_t1

0x65eb,	// (0x000348df) cam4_autofocus_pane_g1

0x65f3,	// (0x000348e7) cam4_autofocus_pane_g2

0x65fb,	// (0x000348ef) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003dc08) cam4_autofocus_pane_g

0x6603,	// (0x000348f7) cam4_autofocus_pane_g3_copy1

0x607e,	// (0x00034372) video_down_pane_cp_t1

0x608c,	// (0x00034380) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0003db84) video_down_pane_cp_t

0x1806,	// (0x0002fafa) popup_vitu2_window_ParamLimits

0x1806,	// (0x0002fafa) popup_vitu2_window

0x1221,	// (0x0002f515) aid_size_cell2_itu2_ParamLimits

0x1221,	// (0x0002f515) aid_size_cell2_itu2

0x1247,	// (0x0002f53b) aid_size_cell_itu2_ParamLimits

0x1247,	// (0x0002f53b) aid_size_cell_itu2

0x12a2,	// (0x0002f596) bg_popup_window_pane_cp09_ParamLimits

0x12a2,	// (0x0002f596) bg_popup_window_pane_cp09

0x12b0,	// (0x0002f5a4) field_vitu2_entry_pane_ParamLimits

0x12b0,	// (0x0002f5a4) field_vitu2_entry_pane

0x12d3,	// (0x0002f5c7) grid_vitu2_function_pane_ParamLimits

0x12d3,	// (0x0002f5c7) grid_vitu2_function_pane

0x131e,	// (0x0002f612) grid_vitu2_itu_pane_ParamLimits

0x131e,	// (0x0002f612) grid_vitu2_itu_pane

0x13b1,	// (0x0002f6a5) cell_vitu2_itu_pane_ParamLimits

0x13b1,	// (0x0002f6a5) cell_vitu2_itu_pane

0x13dd,	// (0x0002f6d1) cell_vitu2_function_pane_ParamLimits

0x13dd,	// (0x0002f6d1) cell_vitu2_function_pane

0xd14e,	// (0x0003b442) bg_popup_call_pane_cp08_ParamLimits

0xd14e,	// (0x0003b442) bg_popup_call_pane_cp08

0xd165,	// (0x0003b459) field_vitu2_entry_pane_g1

0xd171,	// (0x0003b465) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003dc0f) field_vitu2_entry_pane_g

0x660b,	// (0x000348ff) field_vitu2_entry_pane_t1_ParamLimits

0x660b,	// (0x000348ff) field_vitu2_entry_pane_t1

0xd18b,	// (0x0003b47f) field_vitu2_entry_pane_t2_ParamLimits

0xd18b,	// (0x0003b47f) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003dc16) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003dc16) field_vitu2_entry_pane_t

0x141c,	// (0x0002f710) bg_button_pane_cp010_ParamLimits

0x141c,	// (0x0002f710) bg_button_pane_cp010

0x663b,	// (0x0003492f) cell_vitu2_itu_pane_g1

0x1438,	// (0x0002f72c) cell_vitu2_itu_pane_t1_ParamLimits

0x1438,	// (0x0002f72c) cell_vitu2_itu_pane_t1

0x1496,	// (0x0002f78a) cell_vitu2_itu_pane_t2_ParamLimits

0x1496,	// (0x0002f78a) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003dc20) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003dc20) cell_vitu2_itu_pane_t

0x1806,	// (0x0002fafa) bg_button_pane_cp011

0x1582,	// (0x0002f876) cell_vitu2_function_pane_g1

0x1820,	// (0x0002fb14) main_myfav_hc_pane

0x1010,	// (0x0002f304) popup_image3_note_pane_ParamLimits

0x1010,	// (0x0002f304) popup_image3_note_pane

0x102c,	// (0x0002f320) popup_image3_tool_bar_pane_ParamLimits

0x102c,	// (0x0002f320) popup_image3_tool_bar_pane

0x1524,	// (0x0002f818) cell_vitu2_itu_pane_t3_ParamLimits

0x1524,	// (0x0002f818) cell_vitu2_itu_pane_t3

0x9a83,	// (0x00037d77) bg_popup_trans_pane

0xd1b0,	// (0x0003b4a4) grid_image3_tool_bar_pane

0xd1ba,	// (0x0003b4ae) bg_popup_trans_pane_g1

0xa606,	// (0x000388fa) bg_popup_trans_pane_g2

0xd1c2,	// (0x0003b4b6) bg_popup_trans_pane_g3

0xd1ca,	// (0x0003b4be) bg_popup_trans_pane_g4

0xd1d2,	// (0x0003b4c6) bg_popup_trans_pane_g5

0xd1da,	// (0x0003b4ce) bg_popup_trans_pane_g6

0xd1e2,	// (0x0003b4d6) bg_popup_trans_pane_g7

0xd1ea,	// (0x0003b4de) bg_popup_trans_pane_g8

0xa5e6,	// (0x000388da) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003dc27) bg_popup_trans_pane_g

0xd1f2,	// (0x0003b4e6) cell_image3_tool_bar_pane_ParamLimits

0xd1f2,	// (0x0003b4e6) cell_image3_tool_bar_pane

0xc69a,	// (0x0003a98e) cell_image3_tool_bar_pane_g1

0x9a83,	// (0x00037d77) bg_popup_trans_pane_cp1

0xd206,	// (0x0003b4fa) popup_image3_note_pane_t1

0xd214,	// (0x0003b508) popup_image3_note_pane_t2

0xd222,	// (0x0003b516) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003dc3a) popup_image3_note_pane_t

0xd230,	// (0x0003b524) popup_image3_note_pane_t3_copy1

0x664d,	// (0x00034941) bg_myfav_hc_instruction_pane_ParamLimits

0x664d,	// (0x00034941) bg_myfav_hc_instruction_pane

0x6663,	// (0x00034957) cell_myfav_contact_pane_ParamLimits

0x6663,	// (0x00034957) cell_myfav_contact_pane

0x6681,	// (0x00034975) cell_myfav_contact_pane_cp1_ParamLimits

0x6681,	// (0x00034975) cell_myfav_contact_pane_cp1

0x6699,	// (0x0003498d) cell_myfav_contact_pane_cp2_ParamLimits

0x6699,	// (0x0003498d) cell_myfav_contact_pane_cp2

0x66b1,	// (0x000349a5) cell_myfav_contact_pane_cp3_ParamLimits

0x66b1,	// (0x000349a5) cell_myfav_contact_pane_cp3

0x66c8,	// (0x000349bc) cell_myfav_contact_pane_cp4_ParamLimits

0x66c8,	// (0x000349bc) cell_myfav_contact_pane_cp4

0x66e0,	// (0x000349d4) cell_myfav_contact_pane_cp5_ParamLimits

0x66e0,	// (0x000349d4) cell_myfav_contact_pane_cp5

0x66f4,	// (0x000349e8) cell_myfav_contact_pane_cp6_ParamLimits

0x66f4,	// (0x000349e8) cell_myfav_contact_pane_cp6

0x670a,	// (0x000349fe) cell_myfav_contact_pane_cp7_ParamLimits

0x670a,	// (0x000349fe) cell_myfav_contact_pane_cp7

0xd23e,	// (0x0003b532) listscroll_gen_pane_cp05

0x6724,	// (0x00034a18) main_myfav_hc_pane_g1_ParamLimits

0x6724,	// (0x00034a18) main_myfav_hc_pane_g1

0x673e,	// (0x00034a32) main_myfav_hc_pane_g2_ParamLimits

0x673e,	// (0x00034a32) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003dc41) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003dc41) main_myfav_hc_pane_g

0x6770,	// (0x00034a64) main_myfav_hc_pane_t1_ParamLimits

0x6770,	// (0x00034a64) main_myfav_hc_pane_t1

0xd247,	// (0x0003b53b) main_myfav_hc_pane_t2_ParamLimits

0xd247,	// (0x0003b53b) main_myfav_hc_pane_t2

0xd259,	// (0x0003b54d) main_myfav_hc_pane_t3_ParamLimits

0xd259,	// (0x0003b54d) main_myfav_hc_pane_t3

0x6787,	// (0x00034a7b) main_myfav_hc_pane_t4_ParamLimits

0x6787,	// (0x00034a7b) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003dc48) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003dc48) main_myfav_hc_pane_t

0xc69a,	// (0x0003a98e) bg_myfav_hc_instruction_pane_g1

0xd26b,	// (0x0003b55f) cell_myfav_contact_pane_g1_ParamLimits

0xd26b,	// (0x0003b55f) cell_myfav_contact_pane_g1

0xd26b,	// (0x0003b55f) cell_myfav_contact_pane_g2_ParamLimits

0xd26b,	// (0x0003b55f) cell_myfav_contact_pane_g2

0xd277,	// (0x0003b56b) cell_myfav_contact_pane_g3_ParamLimits

0xd277,	// (0x0003b56b) cell_myfav_contact_pane_g3

0xc9d3,	// (0x0003acc7) cell_myfav_contact_pane_g4_ParamLimits

0xc9d3,	// (0x0003acc7) cell_myfav_contact_pane_g4

0xd284,	// (0x0003b578) cell_myfav_contact_pane_g5_ParamLimits

0xd284,	// (0x0003b578) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003dc53) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003dc53) cell_myfav_contact_pane_g

0x6758,	// (0x00034a4c) main_myfav_hc_pane_g3_ParamLimits

0x6758,	// (0x00034a4c) main_myfav_hc_pane_g3

0x014b,	// (0x0002e43f) popup_adpt_find_window

0x67af,	// (0x00034aa3) afind_page_pane_ParamLimits

0x67af,	// (0x00034aa3) afind_page_pane

0x67c4,	// (0x00034ab8) aid_size_cell_afind_ParamLimits

0x67c4,	// (0x00034ab8) aid_size_cell_afind

0x67e2,	// (0x00034ad6) bg_popup_sub_pane_cp09_ParamLimits

0x67e2,	// (0x00034ad6) bg_popup_sub_pane_cp09

0x67ef,	// (0x00034ae3) find_pane_cp01_ParamLimits

0x67ef,	// (0x00034ae3) find_pane_cp01

0xd290,	// (0x0003b584) grid_afind_control_pane_ParamLimits

0xd290,	// (0x0003b584) grid_afind_control_pane

0x67fc,	// (0x00034af0) grid_afind_pane_ParamLimits

0x67fc,	// (0x00034af0) grid_afind_pane

0x681b,	// (0x00034b0f) cell_afind_pane_ParamLimits

0x681b,	// (0x00034b0f) cell_afind_pane

0xc69a,	// (0x0003a98e) afind_page_pane_g1

0x6882,	// (0x00034b76) afind_page_pane_g2

0x688b,	// (0x00034b7f) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003dc5e) afind_page_pane_g

0x6894,	// (0x00034b88) afind_page_pane_t1

0xd2a4,	// (0x0003b598) cell_afind_grid_control_pane_ParamLimits

0xd2a4,	// (0x0003b598) cell_afind_grid_control_pane

0xd061,	// (0x0003b355) bg_button_pane_cp69_ParamLimits

0xd061,	// (0x0003b355) bg_button_pane_cp69

0x68b4,	// (0x00034ba8) cell_afind_pane_g1_ParamLimits

0x68b4,	// (0x00034ba8) cell_afind_pane_g1

0x68c1,	// (0x00034bb5) cell_afind_pane_t1_ParamLimits

0x68c1,	// (0x00034bb5) cell_afind_pane_t1

0xa3ff,	// (0x000386f3) bg_button_pane_cp72

0xd2b3,	// (0x0003b5a7) cell_afind_grid_control_pane_g1

0x4476,	// (0x0003276a) aid_image_placing_area_ParamLimits

0x4476,	// (0x0003276a) aid_image_placing_area

0xcd03,	// (0x0003aff7) field_vitu_entry_pane_g1_ParamLimits

0xcd03,	// (0x0003aff7) field_vitu_entry_pane_g1

0xcd0f,	// (0x0003b003) field_vitu_entry_pane_g2_ParamLimits

0xcd0f,	// (0x0003b003) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0003db0f) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0003db0f) field_vitu_entry_pane_g

0x5ebd,	// (0x000341b1) cell_vitu_itu_pane_g1_ParamLimits

0x5f0d,	// (0x00034201) cell_vitu_itu_pane_t3_ParamLimits

0x5f0d,	// (0x00034201) cell_vitu_itu_pane_t3

0xcfe5,	// (0x0003b2d9) mp4_progress_pane_t1_ParamLimits

0xd020,	// (0x0003b314) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003dba4) mp4_progress_pane_t_ParamLimits

0xd039,	// (0x0003b32d) mup_progress_pane_cp04_ParamLimits

0x679b,	// (0x00034a8f) main_myfav_hc_pane_t5_ParamLimits

0x679b,	// (0x00034a8f) main_myfav_hc_pane_t5

0x1783,	// (0x0002fa77) aid_zoom_text_primary

0x014b,	// (0x0002e43f) popup_adpt_find_window_ParamLimits

0x1806,	// (0x0002fafa) main_cam_set_pane

0x10a7,	// (0x0002f39b) cam4_zoom_pane_ParamLimits

0x10a7,	// (0x0002f39b) cam4_zoom_pane

0x68d3,	// (0x00034bc7) main_cam_set_pane_g1_ParamLimits

0x68d3,	// (0x00034bc7) main_cam_set_pane_g1

0x68e1,	// (0x00034bd5) main_cam_set_pane_g2_ParamLimits

0x68e1,	// (0x00034bd5) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003dc65) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003dc65) main_cam_set_pane_g

0x6902,	// (0x00034bf6) main_cam_set_pane_t1_ParamLimits

0x6902,	// (0x00034bf6) main_cam_set_pane_t1

0x691d,	// (0x00034c11) main_cset_listscroll_pane_ParamLimits

0x691d,	// (0x00034c11) main_cset_listscroll_pane

0x693d,	// (0x00034c31) main_cset_slider_pane_ParamLimits

0x693d,	// (0x00034c31) main_cset_slider_pane

0xd2c4,	// (0x0003b5b8) main_cset_list_pane_ParamLimits

0xd2c4,	// (0x0003b5b8) main_cset_list_pane

0xd2d4,	// (0x0003b5c8) scroll_pane_cp028

0x6963,	// (0x00034c57) aid_area_touch_slider

0x697f,	// (0x00034c73) cset_slider_pane

0x69a9,	// (0x00034c9d) main_cset_slider_pane_g1

0x69be,	// (0x00034cb2) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003dc6a) main_cset_slider_pane_g

0xd30d,	// (0x0003b601) main_cset_slider_pane_t1

0x6a7a,	// (0x00034d6e) main_cset_slider_pane_t2

0x6a94,	// (0x00034d88) main_cset_slider_pane_t3

0x6aae,	// (0x00034da2) main_cset_slider_pane_t4

0x6ac8,	// (0x00034dbc) main_cset_slider_pane_t5

0x6ae2,	// (0x00034dd6) main_cset_slider_pane_t6

0x6af7,	// (0x00034deb) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003dc8f) main_cset_slider_pane_t

0x6bfb,	// (0x00034eef) cset_list_set_pane_ParamLimits

0x6bfb,	// (0x00034eef) cset_list_set_pane

0x6c0e,	// (0x00034f02) aid_position_infowindow_above

0x6c16,	// (0x00034f0a) aid_position_infowindow_below

0x6c1e,	// (0x00034f12) cset_list_set_pane_g1_ParamLimits

0x6c1e,	// (0x00034f12) cset_list_set_pane_g1

0x6c2a,	// (0x00034f1e) cset_list_set_pane_g3_ParamLimits

0x6c2a,	// (0x00034f1e) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003dcae) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003dcae) cset_list_set_pane_g

0x6c39,	// (0x00034f2d) cset_list_set_pane_t1_ParamLimits

0x6c39,	// (0x00034f2d) cset_list_set_pane_t1

0xa7c4,	// (0x00038ab8) list_highlight_pane_cp021_ParamLimits

0xa7c4,	// (0x00038ab8) list_highlight_pane_cp021

0xaf73,	// (0x00039267) cset_slider_pane_g1

0xaf85,	// (0x00039279) cset_slider_pane_g2

0xaf7c,	// (0x00039270) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003dcb3) cset_slider_pane_g

0x6c4e,	// (0x00034f42) aid_area_touch_cam4_zoom

0x6c56,	// (0x00034f4a) cam4_zoom_cont_pane

0x6c5e,	// (0x00034f52) cam4_zoom_pane_g1

0x6c66,	// (0x00034f5a) cam4_zoom_pane_g2

0x1596,	// (0x0002f88a) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003dcba) cam4_zoom_pane_g

0x6c6e,	// (0x00034f62) cam4_zoom_cont_pane_g1

0x6c77,	// (0x00034f6b) cam4_zoom_cont_pane_g2

0x6c80,	// (0x00034f74) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003dcc1) cam4_zoom_cont_pane_g

0x63e7,	// (0x000346db) call4_image_pane_ParamLimits

0x63e7,	// (0x000346db) call4_image_pane

0xd06d,	// (0x0003b361) call4_windows_conf_pane_ParamLimits

0xd0ac,	// (0x0003b3a0) popup_call4_audio_in_window_ParamLimits

0xd0ac,	// (0x0003b3a0) popup_call4_audio_in_window

0x9a83,	// (0x00037d77) bg_popup_call2_act_pane_cp02

0xd122,	// (0x0003b416) call4_list_conf_pane

0xc69a,	// (0x0003a98e) call4_image_pane_g1

0xc69a,	// (0x0003a98e) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0003d9d0) call4_image_pane_g

0xd3ad,	// (0x0003b6a1) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3ad,	// (0x0003b6a1) list_single_graphic_popup_conf4_pane

0x9a83,	// (0x00037d77) list_highlight_pane_cp022

0xd3c0,	// (0x0003b6b4) list_single_graphic_popup_conf4_pane_g1

0xab5a,	// (0x00038e4e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003dcc8) list_single_graphic_popup_conf4_pane_g

0xd3c8,	// (0x0003b6bc) list_single_graphic_popup_conf4_pane_t1

0x27a5,	// (0x00030a99) popup_vtel_slider_window_ParamLimits

0x27a5,	// (0x00030a99) popup_vtel_slider_window

0xd04f,	// (0x0003b343) dialer2_ne_pane_t2_ParamLimits

0xd04f,	// (0x0003b343) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003dba9) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003dba9) dialer2_ne_pane_t

0xc47d,	// (0x0003a771) bg_popup_sub_pane_cp010_ParamLimits

0xc47d,	// (0x0003a771) bg_popup_sub_pane_cp010

0x6c89,	// (0x00034f7d) popup_vtel_slider_window_g1_ParamLimits

0x6c89,	// (0x00034f7d) popup_vtel_slider_window_g1

0x6c9c,	// (0x00034f90) popup_vtel_slider_window_g2_ParamLimits

0x6c9c,	// (0x00034f90) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003dccd) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003dccd) popup_vtel_slider_window_g

0x6cf2,	// (0x00034fe6) vtel_slider_pane_ParamLimits

0x6cf2,	// (0x00034fe6) vtel_slider_pane

0x6d14,	// (0x00035008) vtel_slider_pane_g1_ParamLimits

0x6d14,	// (0x00035008) vtel_slider_pane_g1

0x6d28,	// (0x0003501c) vtel_slider_pane_g2_ParamLimits

0x6d28,	// (0x0003501c) vtel_slider_pane_g2

0x6d40,	// (0x00035034) vtel_slider_pane_g3_ParamLimits

0x6d40,	// (0x00035034) vtel_slider_pane_g3

0x6d14,	// (0x00035008) vtel_slider_pane_g4_ParamLimits

0x6d14,	// (0x00035008) vtel_slider_pane_g4

0x6d56,	// (0x0003504a) vtel_slider_pane_g5_ParamLimits

0x6d56,	// (0x0003504a) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003dcd6) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003dcd6) vtel_slider_pane_g

0x1806,	// (0x0002fafa) main_gallery2_pane

0x1273,	// (0x0002f567) aid_size_row_itut2_dropdow_list_ParamLimits

0x1273,	// (0x0002f567) aid_size_row_itut2_dropdow_list

0x12f8,	// (0x0002f5ec) grid_vitu2_function_top_pane_ParamLimits

0x12f8,	// (0x0002f5ec) grid_vitu2_function_top_pane

0x135f,	// (0x0002f653) popup_vitu2_dropdown_list_window_ParamLimits

0x135f,	// (0x0002f653) popup_vitu2_dropdown_list_window

0x1385,	// (0x0002f679) popup_vitu2_match_list_window

0x159e,	// (0x0002f892) cell_vitu2_function_top_pane_ParamLimits

0x159e,	// (0x0002f892) cell_vitu2_function_top_pane

0x15c0,	// (0x0002f8b4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x15c0,	// (0x0002f8b4) cell_vitu2_function_top_pane_cp01

0x15dc,	// (0x0002f8d0) cell_vitu2_function_top_wide_pane_ParamLimits

0x15dc,	// (0x0002f8d0) cell_vitu2_function_top_wide_pane

0x1806,	// (0x0002fafa) bg_button_pane_cp012

0x15f8,	// (0x0002f8ec) cell_vitu2_function_top_pane_g1

0x6d7a,	// (0x0003506e) bg_button_pane_cp013_ParamLimits

0x6d7a,	// (0x0003506e) bg_button_pane_cp013

0x6d96,	// (0x0003508a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6d96,	// (0x0003508a) cell_vitu2_function_top_wide_pane_g1

0x1806,	// (0x0002fafa) bg_popup_sub_pane_cp20

0x160c,	// (0x0002f900) list_vitu2_match_list_pane

0xd1ba,	// (0x0003b4ae) bg_popup_sub_pane_cp20_g1

0xd1c2,	// (0x0003b4b6) bg_popup_sub_pane_cp20_g2

0xa606,	// (0x000388fa) bg_popup_sub_pane_cp20_g3

0xd1ca,	// (0x0003b4be) bg_popup_sub_pane_cp20_g4

0xa5e6,	// (0x000388da) bg_popup_sub_pane_cp20_g5

0xd3de,	// (0x0003b6d2) bg_popup_sub_pane_cp20_g6

0xd1da,	// (0x0003b4ce) bg_popup_sub_pane_cp20_g7

0xd1e2,	// (0x0003b4d6) bg_popup_sub_pane_cp20_g8

0xd1ea,	// (0x0003b4de) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003dce1) bg_popup_sub_pane_cp20_g

0x6dae,	// (0x000350a2) list_vitu2_match_list_item_pane_ParamLimits

0x6dae,	// (0x000350a2) list_vitu2_match_list_item_pane

0x6dc0,	// (0x000350b4) list_vitu2_match_list_item_pane_t1

0x1820,	// (0x0002fb14) bg_popup_sub_pane_cp21

0x6e1b,	// (0x0003510f) grid_vitu2_dropdown_list_pane

0x162a,	// (0x0002f91e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x162a,	// (0x0002f91e) cell_vitu2_dropdown_list_char_pane

0x164b,	// (0x0002f93f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x164b,	// (0x0002f93f) cell_vitu2_dropdown_list_ctrl_pane

0xd3e6,	// (0x0003b6da) cell_vitu2_dropdown_list_char_pane_g1

0xd3ef,	// (0x0003b6e3) cell_vitu2_dropdown_list_char_pane_g2

0xd3f8,	// (0x0003b6ec) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003dcfe) cell_vitu2_dropdown_list_char_pane_g

0x1677,	// (0x0002f96b) cell_vitu2_dropdown_list_char_pane_t1

0x6e23,	// (0x00035117) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e23,	// (0x00035117) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e33,	// (0x00035127) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e33,	// (0x00035127) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6e44,	// (0x00035138) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6e44,	// (0x00035138) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1685,	// (0x0002f979) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1685,	// (0x0002f979) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6510,	// (0x00034804) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6510,	// (0x00034804) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003dd05) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003dd05) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e54,	// (0x00035148) aid_size_cell_gallery2_ParamLimits

0x6e54,	// (0x00035148) aid_size_cell_gallery2

0x6e72,	// (0x00035166) grid_gallery2_pane_ParamLimits

0x6e72,	// (0x00035166) grid_gallery2_pane

0x6e8c,	// (0x00035180) scroll_pane_cp029_ParamLimits

0x6e8c,	// (0x00035180) scroll_pane_cp029

0x6e98,	// (0x0003518c) cell_gallery2_pane_ParamLimits

0x6e98,	// (0x0003518c) cell_gallery2_pane

0xd401,	// (0x0003b6f5) cell_gallery2_pane_g2

0x6ef4,	// (0x000351e8) cell_gallery2_pane_g3

0xd409,	// (0x0003b6fd) cell_gallery2_pane_g4

0xd411,	// (0x0003b705) cell_gallery2_pane_g5

0xa3ad,	// (0x000386a1) grid_highlight_pane_cp10

0x1385,	// (0x0002f679) popup_vitu2_match_list_window_ParamLimits

0x139a,	// (0x0002f68e) popup_vitu2_query_window_ParamLimits

0x139a,	// (0x0002f68e) popup_vitu2_query_window

0x1820,	// (0x0002fb14) bg_vitu2_candi_button_pane

0xd3e6,	// (0x0003b6da) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3ef,	// (0x0003b6e3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3f8,	// (0x0003b6ec) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6efc,	// (0x000351f0) bg_button_pane_cp015

0x6f10,	// (0x00035204) bg_button_pane_cp016

0x6f23,	// (0x00035217) bg_button_pane_cp017

0xc290,	// (0x0003a584) bg_popup_sub_pane_cp22

0xd419,	// (0x0003b70d) popup_vitu2_query_window_g1

0x6f68,	// (0x0003525c) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003dd10) popup_vitu2_query_window_g

0x6f87,	// (0x0003527b) popup_vitu2_query_window_t1_ParamLimits

0x6f87,	// (0x0003527b) popup_vitu2_query_window_t1

0x6fbc,	// (0x000352b0) popup_vitu2_query_window_t2_ParamLimits

0x6fbc,	// (0x000352b0) popup_vitu2_query_window_t2

0x6fce,	// (0x000352c2) popup_vitu2_query_window_t3_ParamLimits

0x6fce,	// (0x000352c2) popup_vitu2_query_window_t3

0x6ff6,	// (0x000352ea) popup_vitu2_query_window_t4_ParamLimits

0x6ff6,	// (0x000352ea) popup_vitu2_query_window_t4

0x7017,	// (0x0003530b) popup_vitu2_query_window_t5_ParamLimits

0x7017,	// (0x0003530b) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003dd17) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003dd17) popup_vitu2_query_window_t

0xd2bc,	// (0x0003b5b0) main_cset_text_pane

0x6963,	// (0x00034c57) aid_area_touch_slider_ParamLimits

0x697f,	// (0x00034c73) cset_slider_pane_ParamLimits

0x69a9,	// (0x00034c9d) main_cset_slider_pane_g1_ParamLimits

0x69be,	// (0x00034cb2) main_cset_slider_pane_g2_ParamLimits

0xd2dd,	// (0x0003b5d1) main_cset_slider_pane_g3_ParamLimits

0xd2dd,	// (0x0003b5d1) main_cset_slider_pane_g3

0x69d3,	// (0x00034cc7) main_cset_slider_pane_g4_ParamLimits

0x69d3,	// (0x00034cc7) main_cset_slider_pane_g4

0x69e2,	// (0x00034cd6) main_cset_slider_pane_g5_ParamLimits

0x69e2,	// (0x00034cd6) main_cset_slider_pane_g5

0x69ee,	// (0x00034ce2) main_cset_slider_pane_g6_ParamLimits

0x69ee,	// (0x00034ce2) main_cset_slider_pane_g6

0xf976,	// (0x0003dc6a) main_cset_slider_pane_g_ParamLimits

0xd30d,	// (0x0003b601) main_cset_slider_pane_t1_ParamLimits

0x6a7a,	// (0x00034d6e) main_cset_slider_pane_t2_ParamLimits

0x6a94,	// (0x00034d88) main_cset_slider_pane_t3_ParamLimits

0x6aae,	// (0x00034da2) main_cset_slider_pane_t4_ParamLimits

0x6ac8,	// (0x00034dbc) main_cset_slider_pane_t5_ParamLimits

0x6ae2,	// (0x00034dd6) main_cset_slider_pane_t6_ParamLimits

0x6af7,	// (0x00034deb) main_cset_slider_pane_t7_ParamLimits

0x6b21,	// (0x00034e15) main_cset_slider_pane_t8_ParamLimits

0x6b21,	// (0x00034e15) main_cset_slider_pane_t8

0x6b49,	// (0x00034e3d) main_cset_slider_pane_t9_ParamLimits

0x6b49,	// (0x00034e3d) main_cset_slider_pane_t9

0x6b71,	// (0x00034e65) main_cset_slider_pane_t10_ParamLimits

0x6b71,	// (0x00034e65) main_cset_slider_pane_t10

0x6b99,	// (0x00034e8d) main_cset_slider_pane_t11_ParamLimits

0x6b99,	// (0x00034e8d) main_cset_slider_pane_t11

0x6bc1,	// (0x00034eb5) main_cset_slider_pane_t12_ParamLimits

0x6bc1,	// (0x00034eb5) main_cset_slider_pane_t12

0x6bde,	// (0x00034ed2) main_cset_slider_pane_t13_ParamLimits

0x6bde,	// (0x00034ed2) main_cset_slider_pane_t13

0xf99b,	// (0x0003dc8f) main_cset_slider_pane_t_ParamLimits

0x9a83,	// (0x00037d77) bg_popup_sub_pane_cp011

0xd425,	// (0x0003b719) main_cset_text_pane_g1

0xd42d,	// (0x0003b721) main_cset_text_pane_t1

0xd43b,	// (0x0003b72f) main_cset_text_pane_t2

0xd449,	// (0x0003b73d) main_cset_text_pane_t3

0xd457,	// (0x0003b74b) main_cset_text_pane_t4

0xd465,	// (0x0003b759) main_cset_text_pane_t5

0xd473,	// (0x0003b767) main_cset_text_pane_t6

0xd481,	// (0x0003b775) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003dd26) main_cset_text_pane_t

0x1820,	// (0x0002fb14) main_cam4_burst_pane

0x1820,	// (0x0002fb14) main_cam5_pane

0x68a2,	// (0x00034b96) bg_button_pane_cp019

0x68ab,	// (0x00034b9f) bg_button_pane_cp020

0xd2e9,	// (0x0003b5dd) main_cset_slider_pane_g7_ParamLimits

0xd2e9,	// (0x0003b5dd) main_cset_slider_pane_g7

0xd2f5,	// (0x0003b5e9) main_cset_slider_pane_g8_ParamLimits

0xd2f5,	// (0x0003b5e9) main_cset_slider_pane_g8

0x6a02,	// (0x00034cf6) main_cset_slider_pane_g9_ParamLimits

0x6a02,	// (0x00034cf6) main_cset_slider_pane_g9

0x6a0e,	// (0x00034d02) main_cset_slider_pane_g10_ParamLimits

0x6a0e,	// (0x00034d02) main_cset_slider_pane_g10

0x6a1a,	// (0x00034d0e) main_cset_slider_pane_g11_ParamLimits

0x6a1a,	// (0x00034d0e) main_cset_slider_pane_g11

0x6a26,	// (0x00034d1a) main_cset_slider_pane_g12_ParamLimits

0x6a26,	// (0x00034d1a) main_cset_slider_pane_g12

0x6a32,	// (0x00034d26) main_cset_slider_pane_g13_ParamLimits

0x6a32,	// (0x00034d26) main_cset_slider_pane_g13

0x6a3e,	// (0x00034d32) main_cset_slider_pane_g14_ParamLimits

0x6a3e,	// (0x00034d32) main_cset_slider_pane_g14

0x6a4a,	// (0x00034d3e) main_cset_slider_pane_g15_ParamLimits

0x6a4a,	// (0x00034d3e) main_cset_slider_pane_g15

0xd33b,	// (0x0003b62f) main_cset_slider_pane_t14_ParamLimits

0xd33b,	// (0x0003b62f) main_cset_slider_pane_t14

0xd374,	// (0x0003b668) main_cset_slider_pane_t15_ParamLimits

0xd374,	// (0x0003b668) main_cset_slider_pane_t15

0x708e,	// (0x00035382) aid_cam4_burst_size_cell_ParamLimits

0x708e,	// (0x00035382) aid_cam4_burst_size_cell

0x70ae,	// (0x000353a2) grid_cam4_burst_pane_ParamLimits

0x70ae,	// (0x000353a2) grid_cam4_burst_pane

0x70e6,	// (0x000353da) linegrid_cam4_burst_pane_ParamLimits

0x70e6,	// (0x000353da) linegrid_cam4_burst_pane

0xd48f,	// (0x0003b783) scroll_pane_cp30_ParamLimits

0xd48f,	// (0x0003b783) scroll_pane_cp30

0x710c,	// (0x00035400) cell_cam4_burst_pane_ParamLimits

0x710c,	// (0x00035400) cell_cam4_burst_pane

0xd49b,	// (0x0003b78f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd49b,	// (0x0003b78f) linegrid_cam4_burst_pane_g1

0x7159,	// (0x0003544d) linegrid_cam4_burst_pane_g2_ParamLimits

0x7159,	// (0x0003544d) linegrid_cam4_burst_pane_g2

0xd4a8,	// (0x0003b79c) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4a8,	// (0x0003b79c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003dd35) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003dd35) linegrid_cam4_burst_pane_g

0x716a,	// (0x0003545e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x716a,	// (0x0003545e) linegrid_cam4_burst_pane_g3_copy1

0xd4b5,	// (0x0003b7a9) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4b5,	// (0x0003b7a9) linegrid_cam4_burst_pane_g4

0x7184,	// (0x00035478) linegrid_cam4_burst_pane_g5_ParamLimits

0x7184,	// (0x00035478) linegrid_cam4_burst_pane_g5

0x7195,	// (0x00035489) linegrid_cam4_burst_pane_g6_ParamLimits

0x7195,	// (0x00035489) linegrid_cam4_burst_pane_g6

0xd4c2,	// (0x0003b7b6) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4c2,	// (0x0003b7b6) linegrid_cam4_burst_pane_g7

0x71ac,	// (0x000354a0) cell_cam4_burst_pane_g1

0xd4db,	// (0x0003b7cf) main_cam5_pane_t1_ParamLimits

0xd4db,	// (0x0003b7cf) main_cam5_pane_t1

0xd4ed,	// (0x0003b7e1) main_cam5_pane_t2_ParamLimits

0xd4ed,	// (0x0003b7e1) main_cam5_pane_t2

0xd4ff,	// (0x0003b7f3) main_cam5_pane_t3_ParamLimits

0xd4ff,	// (0x0003b7f3) main_cam5_pane_t3

0xd511,	// (0x0003b805) main_cam5_pane_t4_ParamLimits

0xd511,	// (0x0003b805) main_cam5_pane_t4

0xd529,	// (0x0003b81d) main_cam5_pane_t5_ParamLimits

0xd529,	// (0x0003b81d) main_cam5_pane_t5

0xd53d,	// (0x0003b831) main_cam5_pane_t6_ParamLimits

0xd53d,	// (0x0003b831) main_cam5_pane_t6

0xd551,	// (0x0003b845) main_cam5_pane_t7_ParamLimits

0xd551,	// (0x0003b845) main_cam5_pane_t7

0xd563,	// (0x0003b857) main_cam5_pane_t8_ParamLimits

0xd563,	// (0x0003b857) main_cam5_pane_t8

0xd57f,	// (0x0003b873) main_cam5_pane_t9_ParamLimits

0xd57f,	// (0x0003b873) main_cam5_pane_t9

0xd591,	// (0x0003b885) main_cam5_pane_t10_ParamLimits

0xd591,	// (0x0003b885) main_cam5_pane_t10

0xd5a3,	// (0x0003b897) main_cam5_pane_t11_ParamLimits

0xd5a3,	// (0x0003b897) main_cam5_pane_t11

0xd5b5,	// (0x0003b8a9) main_cam5_pane_t12_ParamLimits

0xd5b5,	// (0x0003b8a9) main_cam5_pane_t12

0xd5ca,	// (0x0003b8be) main_cam5_pane_t13_ParamLimits

0xd5ca,	// (0x0003b8be) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003dd41) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003dd41) main_cam5_pane_t

0x01cd,	// (0x0002e4c1) popup_scut_keymap_window_ParamLimits

0x01cd,	// (0x0002e4c1) popup_scut_keymap_window

0x71c1,	// (0x000354b5) aid_size_cell_brow_shortcut

0xa3ad,	// (0x000386a1) bg_popup_window_pane_cp010

0x71cd,	// (0x000354c1) grid_scut_pane

0x71d9,	// (0x000354cd) cell_scut_pane_ParamLimits

0x71d9,	// (0x000354cd) cell_scut_pane

0x71f0,	// (0x000354e4) cell_scut_pane_g1

0xd5e7,	// (0x0003b8db) cell_scut_pane_t1

0xd5f6,	// (0x0003b8ea) cell_scut_pane_t2

0x71f9,	// (0x000354ed) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003dd5c) cell_scut_pane_t

0x5420,	// (0x00033714) main_mup3_pane_g8_ParamLimits

0x5420,	// (0x00033714) main_mup3_pane_g8

0x128a,	// (0x0002f57e) area_vitu2_query_pane_ParamLimits

0x128a,	// (0x0002f57e) area_vitu2_query_pane

0x6f36,	// (0x0003522a) input_focus_pane_cp08

0xd605,	// (0x0003b8f9) area_vitu2_query_pane_g1

0x7207,	// (0x000354fb) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003dd63) area_vitu2_query_pane_g

0x7218,	// (0x0003550c) area_vitu2_query_pane_t1_ParamLimits

0x7218,	// (0x0003550c) area_vitu2_query_pane_t1

0x722c,	// (0x00035520) area_vitu2_query_pane_t2_ParamLimits

0x722c,	// (0x00035520) area_vitu2_query_pane_t2

0x7240,	// (0x00035534) area_vitu2_query_pane_t3_ParamLimits

0x7240,	// (0x00035534) area_vitu2_query_pane_t3

0xd611,	// (0x0003b905) area_vitu2_query_pane_t4_ParamLimits

0xd611,	// (0x0003b905) area_vitu2_query_pane_t4

0xd639,	// (0x0003b92d) area_vitu2_query_pane_t5_ParamLimits

0xd639,	// (0x0003b92d) area_vitu2_query_pane_t5

0xd661,	// (0x0003b955) area_vitu2_query_pane_t6_ParamLimits

0xd661,	// (0x0003b955) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003dd68) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003dd68) area_vitu2_query_pane_t

0x7268,	// (0x0003555c) bg_button_pane_cp018

0x7276,	// (0x0003556a) bg_button_pane_cp021

0x7282,	// (0x00035576) bg_button_pane_cp022

0x7293,	// (0x00035587) input_focus_pane_cp09

0xac7e,	// (0x00038f72) aid_size_touch_mv_arrow_left

0xaca9,	// (0x00038f9d) aid_size_touch_mv_arrow_right

0x6a62,	// (0x00034d56) main_cset_slider_pane_g16_ParamLimits

0x6a62,	// (0x00034d56) main_cset_slider_pane_g16

0x6a6e,	// (0x00034d62) main_cset_slider_pane_g17_ParamLimits

0x6a6e,	// (0x00034d62) main_cset_slider_pane_g17

0x71ac,	// (0x000354a0) cell_cam4_burst_pane_g1_ParamLimits

0x9a83,	// (0x00037d77) compa_mode_pane

0x6cac,	// (0x00034fa0) popup_vtel_slider_window_g3_ParamLimits

0x6cac,	// (0x00034fa0) popup_vtel_slider_window_g3

0x6cc3,	// (0x00034fb7) popup_vtel_slider_window_g4_ParamLimits

0x6cc3,	// (0x00034fb7) popup_vtel_slider_window_g4

0x6cda,	// (0x00034fce) popup_vtel_slider_window_t1_ParamLimits

0x6cda,	// (0x00034fce) popup_vtel_slider_window_t1

0x1820,	// (0x0002fb14) main_cl_pane

0x49b4,	// (0x00032ca8) popup_imed_adjust2_window_ParamLimits

0xc290,	// (0x0003a584) bg_tb_trans_pane_cp05_ParamLimits

0xcc2f,	// (0x0003af23) popup_imed_adjust2_window_g1_ParamLimits

0xcc3e,	// (0x0003af32) popup_imed_adjust2_window_g2_ParamLimits

0xcc3e,	// (0x0003af32) popup_imed_adjust2_window_g2

0xcc4a,	// (0x0003af3e) popup_imed_adjust2_window_g3_ParamLimits

0xcc4a,	// (0x0003af3e) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0003dad3) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0003dad3) popup_imed_adjust2_window_g

0xcc56,	// (0x0003af4a) popup_imed_adjust2_window_t1_ParamLimits

0xcc6e,	// (0x0003af62) slider_imed_adjust_pane_ParamLimits

0xcc82,	// (0x0003af76) slider_imed_adjust_pane_g1_ParamLimits

0xcc92,	// (0x0003af86) slider_imed_adjust_pane_g2_ParamLimits

0xcca2,	// (0x0003af96) slider_imed_adjust_pane_g3_ParamLimits

0xccb3,	// (0x0003afa7) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0003dada) slider_imed_adjust_pane_g_ParamLimits

0x1048,	// (0x0002f33c) aid_touch_area_cam4_ParamLimits

0x1048,	// (0x0002f33c) aid_touch_area_cam4

0x64e0,	// (0x000347d4) battery_pane_cp01

0x1117,	// (0x0002f40b) main_camera4_pane_g6_ParamLimits

0x1117,	// (0x0002f40b) main_camera4_pane_g6

0x1141,	// (0x0002f435) main_camera4_pane_t2_ParamLimits

0x1141,	// (0x0002f435) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003dbdd) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003dbdd) main_camera4_pane_t

0x1162,	// (0x0002f456) aid_touch_area_vid4_ParamLimits

0x1162,	// (0x0002f456) aid_touch_area_vid4

0x11b6,	// (0x0002f4aa) main_video4_pane_g5_ParamLimits

0x11b6,	// (0x0002f4aa) main_video4_pane_g5

0x11db,	// (0x0002f4cf) vid4_progress_pane_ParamLimits

0x11db,	// (0x0002f4cf) vid4_progress_pane

0xd301,	// (0x0003b5f5) main_cset_slider_pane_g18_ParamLimits

0xd301,	// (0x0003b5f5) main_cset_slider_pane_g18

0xd4cf,	// (0x0003b7c3) cell_cam4_burst_pane_g2_ParamLimits

0xd4cf,	// (0x0003b7c3) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003dd3c) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003dd3c) cell_cam4_burst_pane_g

0xa1df,	// (0x000384d3) bg_cl_pane_ParamLimits

0xa1df,	// (0x000384d3) bg_cl_pane

0x72a4,	// (0x00035598) cl_header_pane_ParamLimits

0x72a4,	// (0x00035598) cl_header_pane

0x72b8,	// (0x000355ac) cl_listscroll_pane_ParamLimits

0x72b8,	// (0x000355ac) cl_listscroll_pane

0xd6ad,	// (0x0003b9a1) bg_cl_pane_g1

0xd6b5,	// (0x0003b9a9) bg_cl_pane_g2

0xd6bd,	// (0x0003b9b1) bg_cl_pane_g3

0xd6c5,	// (0x0003b9b9) bg_cl_pane_g4

0xd6cd,	// (0x0003b9c1) bg_cl_pane_g5

0xd6d5,	// (0x0003b9c9) bg_cl_pane_g6

0xd6dd,	// (0x0003b9d1) bg_cl_pane_g7

0xd6e5,	// (0x0003b9d9) bg_cl_pane_g8

0xd6ed,	// (0x0003b9e1) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003dd77) bg_cl_pane_g

0x72c8,	// (0x000355bc) aid_height_cl_leading_ParamLimits

0x72c8,	// (0x000355bc) aid_height_cl_leading

0x72d4,	// (0x000355c8) aid_height_cl_text_ParamLimits

0x72d4,	// (0x000355c8) aid_height_cl_text

0xa7c4,	// (0x00038ab8) bg_cl_header_pane_ParamLimits

0xa7c4,	// (0x00038ab8) bg_cl_header_pane

0x72f3,	// (0x000355e7) cl_header_pane_g1_ParamLimits

0x72f3,	// (0x000355e7) cl_header_pane_g1

0x7309,	// (0x000355fd) cl_header_pane_t1_ParamLimits

0x7309,	// (0x000355fd) cl_header_pane_t1

0xd6f5,	// (0x0003b9e9) cl_list_pane

0xd2d4,	// (0x0003b5c8) hc_scroll_pane_cp01

0xa5e6,	// (0x000388da) bg_cl_header_pane_g1

0xd1ba,	// (0x0003b4ae) bg_cl_header_pane_g2

0xa606,	// (0x000388fa) bg_cl_header_pane_g3

0xd1ca,	// (0x0003b4be) bg_cl_header_pane_g4

0xd1c2,	// (0x0003b4b6) bg_cl_header_pane_g5

0xd3de,	// (0x0003b6d2) bg_cl_header_pane_g6

0xd1e2,	// (0x0003b4d6) bg_cl_header_pane_g7

0xd1ea,	// (0x0003b4de) bg_cl_header_pane_g8

0xd1da,	// (0x0003b4ce) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003dd8a) bg_cl_header_pane_g

0x7322,	// (0x00035616) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7322,	// (0x00035616) hc_cl_list_double_graphic_heading_pane

0x7333,	// (0x00035627) hc_cl_list_single_graphic_pane_ParamLimits

0x7333,	// (0x00035627) hc_cl_list_single_graphic_pane

0x734c,	// (0x00035640) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x734c,	// (0x00035640) hc_cl_list_single_graphic_pane_g1

0x7358,	// (0x0003564c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7358,	// (0x0003564c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003dd9d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003dd9d) hc_cl_list_single_graphic_pane_g

0x736c,	// (0x00035660) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x736c,	// (0x00035660) hc_cl_list_single_graphic_pane_t1

0x734c,	// (0x00035640) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x734c,	// (0x00035640) hc_cl_list_double_graphic_heading_pane_g1

0x7381,	// (0x00035675) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7381,	// (0x00035675) hc_cl_list_double_graphic_heading_pane_g2

0x7395,	// (0x00035689) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7395,	// (0x00035689) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003dda2) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003dda2) hc_cl_list_double_graphic_heading_pane_g

0x73a9,	// (0x0003569d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x73a9,	// (0x0003569d) hc_cl_list_double_graphic_heading_pane_t1

0x73be,	// (0x000356b2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73be,	// (0x000356b2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003dda9) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003dda9) hc_cl_list_double_graphic_heading_pane_t

0x73db,	// (0x000356cf) vid4_progress_pane_g1

0x73eb,	// (0x000356df) vid4_progress_pane_g2

0x16a1,	// (0x0002f995) vid4_progress_pane_g3

0x73fb,	// (0x000356ef) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003ddae) vid4_progress_pane_g

0x16b3,	// (0x0002f9a7) vid4_progress_pane_t1

0x7419,	// (0x0003570d) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003ddb9) vid4_progress_pane_t

0x16c9,	// (0x0002f9bd) wait_bar_pane_cp07

0xc48b,	// (0x0003a77f) blid_firmament_pane_ParamLimits

0xc4ce,	// (0x0003a7c2) popup_blid_sat_info2_window_g1

0xc4f2,	// (0x0003a7e6) popup_blid_sat_info2_window_t3

0xc500,	// (0x0003a7f4) popup_blid_sat_info2_window_t4

0xc50e,	// (0x0003a802) popup_blid_sat_info2_window_t5

0xc51c,	// (0x0003a810) popup_blid_sat_info2_window_t6

0xc52c,	// (0x0003a820) popup_blid_sat_info2_window_t7

0xc53a,	// (0x0003a82e) popup_blid_sat_info2_window_t8

0xc548,	// (0x0003a83c) popup_blid_sat_info2_window_t9

0xc556,	// (0x0003a84a) popup_blid_sat_info2_window_t10

0xc61a,	// (0x0003a90e) aid_firma_cardinal_ParamLimits

0xc62e,	// (0x0003a922) blid_firmament_pane_t1_ParamLimits

0xc645,	// (0x0003a939) blid_firmament_pane_t2_ParamLimits

0xc65c,	// (0x0003a950) blid_firmament_pane_t3_ParamLimits

0xc673,	// (0x0003a967) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0003d9c7) blid_firmament_pane_t_ParamLimits

0xc68a,	// (0x0003a97e) blid_sat_info_pane_ParamLimits

0x1806,	// (0x0002fafa) main_cam_set_pane_ParamLimits

0x5c6c,	// (0x00033f60) aid_size_cell_colour_35_ParamLimits

0x5c8c,	// (0x00033f80) aid_size_cell_colour_112_ParamLimits

0x5cac,	// (0x00033fa0) aid_size_cell_effect_ParamLimits

0xc290,	// (0x0003a584) bg_tb_trans_pane_cp02_ParamLimits

0xa864,	// (0x00038b58) heading_imed_pane_ParamLimits

0x5ccc,	// (0x00033fc0) listscroll_imed_pane_ParamLimits

0xb8b6,	// (0x00039baa) popup_call2_audio_first_window_g5_ParamLimits

0xb8b6,	// (0x00039baa) popup_call2_audio_first_window_g5

0x0e25,	// (0x0002f119) aid_size_touch_image3_arrow_left_ParamLimits

0x0e25,	// (0x0002f119) aid_size_touch_image3_arrow_left

0x0e51,	// (0x0002f145) aid_size_touch_image3_arrow_right_ParamLimits

0x0e51,	// (0x0002f145) aid_size_touch_image3_arrow_right

0x742e,	// (0x00035722) vid4_progress_pane_t3

0x5ff8,	// (0x000342ec) main_hwr_training_symbol_option_pane_ParamLimits

0x5ff8,	// (0x000342ec) main_hwr_training_symbol_option_pane

0xcf25,	// (0x0003b219) popup_hwr_training_preview_window_ParamLimits

0xcf25,	// (0x0003b219) popup_hwr_training_preview_window

0x0cca,	// (0x0002efbe) hwr_training_navi_pane_g5_ParamLimits

0x0cca,	// (0x0002efbe) hwr_training_navi_pane_g5

0xd1a8,	// (0x0003b49c) popup_char_count_window

0x1806,	// (0x0002fafa) bg_popup_sub_pane_cp20_ParamLimits

0x160c,	// (0x0002f900) list_vitu2_match_list_pane_ParamLimits

0x161b,	// (0x0002f90f) vitu2_page_scroll_pane_ParamLimits

0x161b,	// (0x0002f90f) vitu2_page_scroll_pane

0xd720,	// (0x0003ba14) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd720,	// (0x0003ba14) list_single_hwr_training_symbol_option_pane

0xd733,	// (0x0003ba27) list_single_hwr_training_symbol_option_pane_g1

0xd73b,	// (0x0003ba2f) list_single_hwr_training_symbol_option_pane_t1

0xd749,	// (0x0003ba3d) bg_button_pane_cp023

0xd752,	// (0x0003ba46) bg_button_pane_cp024

0x7473,	// (0x00035767) vitu2_page_scroll_pane_g1

0x747b,	// (0x0003576f) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003ddc0) vitu2_page_scroll_pane_g

0x7483,	// (0x00035777) vitu2_page_scroll_pane_t1

0xc3eb,	// (0x0003a6df) popup_char_count_window_g1

0xd785,	// (0x0003ba79) popup_char_count_window_g2

0xd78e,	// (0x0003ba82) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003ddc5) popup_char_count_window_g

0xd797,	// (0x0003ba8b) popup_char_count_window_t1

0x1820,	// (0x0002fb14) main_vded2_pane

0xcc1b,	// (0x0003af0f) aid_size_cell_imed_line

0xcc25,	// (0x0003af19) grid_imed_line_width_pane

0x65b8,	// (0x000348ac) vid4_indicators_pane_g4

0xd7a5,	// (0x0003ba99) cell_imed_line_width_pane_ParamLimits

0xd7a5,	// (0x0003ba99) cell_imed_line_width_pane

0xd7b9,	// (0x0003baad) cell_imed_line_width_pane_g1

0xd018,	// (0x0003b30c) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003ddcc) cell_imed_line_width_pane_g

0x7492,	// (0x00035786) main_vded2_pane_g1_ParamLimits

0x7492,	// (0x00035786) main_vded2_pane_g1

0x74a8,	// (0x0003579c) main_vded2_pane_g2_ParamLimits

0x74a8,	// (0x0003579c) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003ddd1) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003ddd1) main_vded2_pane_g

0x74ba,	// (0x000357ae) vded2_slider_pane_ParamLimits

0x74ba,	// (0x000357ae) vded2_slider_pane

0x74ca,	// (0x000357be) aid_size_touch_vded2_end

0x74d4,	// (0x000357c8) aid_size_touch_vded2_playhead

0xd7c2,	// (0x0003bab6) aid_size_touch_vded2_start

0xd7ca,	// (0x0003babe) vded2_slider_bg_pane

0xd7d3,	// (0x0003bac7) vded2_slider_pane_g1

0xd7dc,	// (0x0003bad0) vded2_slider_pane_g2

0x74de,	// (0x000357d2) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003ddd6) vded2_slider_pane_g

0xd7e4,	// (0x0003bad8) vded2_slider_bg_pane_g1

0xd7ed,	// (0x0003bae1) vded2_slider_bg_pane_g2

0xd7f6,	// (0x0003baea) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003dddd) vded2_slider_bg_pane_g

0x40df,	// (0x000323d3) aid_postcard_touch_down_pane_ParamLimits

0x40df,	// (0x000323d3) aid_postcard_touch_down_pane

0x40f5,	// (0x000323e9) aid_postcard_touch_up_pane_ParamLimits

0x40f5,	// (0x000323e9) aid_postcard_touch_up_pane

0x1820,	// (0x0002fb14) main_blid2_pane

0x499a,	// (0x00032c8e) popup_blid2_search_window

0x9a83,	// (0x00037d77) blid2_gps_pane

0x9a83,	// (0x00037d77) blid2_navig_pane

0x9a83,	// (0x00037d77) blid2_search_pane

0x9a83,	// (0x00037d77) blid2_tripm_pane

0x74e9,	// (0x000357dd) blid2_search_pane_g1_ParamLimits

0x74e9,	// (0x000357dd) blid2_search_pane_g1

0x7501,	// (0x000357f5) blid2_search_pane_t1_ParamLimits

0x7501,	// (0x000357f5) blid2_search_pane_t1

0x7513,	// (0x00035807) aid_size_cell_blid2_gps_ParamLimits

0x7513,	// (0x00035807) aid_size_cell_blid2_gps

0x752b,	// (0x0003581f) blid2_gps_pane_g1_ParamLimits

0x752b,	// (0x0003581f) blid2_gps_pane_g1

0x753f,	// (0x00035833) grid_blid2_satellite_pane_ParamLimits

0x753f,	// (0x00035833) grid_blid2_satellite_pane

0x7559,	// (0x0003584d) blid2_navig_pane_g1_ParamLimits

0x7559,	// (0x0003584d) blid2_navig_pane_g1

0x7565,	// (0x00035859) blid2_navig_pane_t1_ParamLimits

0x7565,	// (0x00035859) blid2_navig_pane_t1

0x7580,	// (0x00035874) blid2_navig_pane_t2_ParamLimits

0x7580,	// (0x00035874) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003dde4) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003dde4) blid2_navig_pane_t

0x759b,	// (0x0003588f) blid2_navig_ring_pane_ParamLimits

0x759b,	// (0x0003588f) blid2_navig_ring_pane

0x75b4,	// (0x000358a8) blid2_speed_pane_ParamLimits

0x75b4,	// (0x000358a8) blid2_speed_pane

0x75c0,	// (0x000358b4) blid2_tripm_pane_g1_ParamLimits

0x75c0,	// (0x000358b4) blid2_tripm_pane_g1

0x75db,	// (0x000358cf) blid2_tripm_pane_g2_ParamLimits

0x75db,	// (0x000358cf) blid2_tripm_pane_g2

0x75ef,	// (0x000358e3) blid2_tripm_pane_g3_ParamLimits

0x75ef,	// (0x000358e3) blid2_tripm_pane_g3

0x7603,	// (0x000358f7) blid2_tripm_pane_g4_ParamLimits

0x7603,	// (0x000358f7) blid2_tripm_pane_g4

0x7617,	// (0x0003590b) blid2_tripm_pane_g5_ParamLimits

0x7617,	// (0x0003590b) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003dde9) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003dde9) blid2_tripm_pane_g

0x763d,	// (0x00035931) blid2_tripm_pane_t1_ParamLimits

0x763d,	// (0x00035931) blid2_tripm_pane_t1

0x7658,	// (0x0003594c) blid2_tripm_pane_t2_ParamLimits

0x7658,	// (0x0003594c) blid2_tripm_pane_t2

0x7671,	// (0x00035965) blid2_tripm_pane_t3_ParamLimits

0x7671,	// (0x00035965) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003ddf6) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003ddf6) blid2_tripm_pane_t

0x76b8,	// (0x000359ac) cell_blid2_satellite_pane_ParamLimits

0x76b8,	// (0x000359ac) cell_blid2_satellite_pane

0x76d6,	// (0x000359ca) cell_blid2_satellite_pane_g1

0xd7ff,	// (0x0003baf3) cell_blid2_satellite_pane_t1

0xc69a,	// (0x0003a98e) blid2_speed_pane_g1

0xd80d,	// (0x0003bb01) blid2_speed_pane_t1

0xd81b,	// (0x0003bb0f) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003ddff) blid2_speed_pane_t

0xc69a,	// (0x0003a98e) blid2_navig_ring_pane_g1

0x76df,	// (0x000359d3) blid2_navig_ring_pane_g2

0x76e7,	// (0x000359db) blid2_navig_ring_pane_g3

0x76ef,	// (0x000359e3) blid2_navig_ring_pane_g4

0x76f7,	// (0x000359eb) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003de04) blid2_navig_ring_pane_g

0x9a83,	// (0x00037d77) bg_popup_window_pane_cp011

0xd829,	// (0x0003bb1d) popup_blid2_search_window_g1

0xd831,	// (0x0003bb25) popup_blid2_search_window_t1

0xd83f,	// (0x0003bb33) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003de0f) popup_blid2_search_window_t

0xa4f5,	// (0x000387e9) main_browser_pane_g1

0xa1df,	// (0x000384d3) main_browser_pane_ParamLimits

0x1806,	// (0x0002fafa) bg_button_pane_cp011_ParamLimits

0x1582,	// (0x0002f876) cell_vitu2_function_pane_g1_ParamLimits

0xc290,	// (0x0003a584) bg_popup_sub_pane_cp22_ParamLimits

0x6f36,	// (0x0003522a) input_focus_pane_cp08_ParamLimits

0x6f4d,	// (0x00035241) popup_vitu2_query_button_pane_ParamLimits

0x6f4d,	// (0x00035241) popup_vitu2_query_button_pane

0x6f5e,	// (0x00035252) popup_vitu2_query_input_button_pane

0xd419,	// (0x0003b70d) popup_vitu2_query_window_g1_ParamLimits

0x6f68,	// (0x0003525c) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003dd10) popup_vitu2_query_window_g_ParamLimits

0x9a83,	// (0x00037d77) bg_button_pane_cp026

0x76ff,	// (0x000359f3) popup_vitu2_query_input_button_pane_g1

0x9a83,	// (0x00037d77) bg_button_pane_cp025

0xd84d,	// (0x0003bb41) popup_vitu2_query_button_pane_t1

0x510d,	// (0x00033401) main_mp3_pane_t6

0x511b,	// (0x0003340f) popup_slider_window_cp01

0x651e,	// (0x00034812) cam4_battery_pane

0x6577,	// (0x0003486b) cam4_battery_pane_cp02

0x73d3,	// (0x000356c7) cam4_battery_pane_cp01

0x73d3,	// (0x000356c7) cam4_battery_pane_cp03

0xd045,	// (0x0003b339) cam4_battery_pane_g1

0xc69a,	// (0x0003a98e) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003de14) cam4_battery_pane_g

0xc564,	// (0x0003a858) popup_blid_sat_info2_window_t11

0xac7e,	// (0x00038f72) aid_size_touch_mv_arrow_left_ParamLimits

0xaca9,	// (0x00038f9d) aid_size_touch_mv_arrow_right_ParamLimits

0xad07,	// (0x00038ffb) navi_pane_g1_ParamLimits

0xad13,	// (0x00039007) navi_pane_g2_ParamLimits

0xad41,	// (0x00039035) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0003d6d9) navi_pane_g_ParamLimits

0x3b39,	// (0x00031e2d) navi_pane_mv_t1_ParamLimits

0x5cd8,	// (0x00033fcc) grid_imed_effect_pane_ParamLimits

0x26a2,	// (0x00030996) aid_placing_vt_slider_lsc

0xa444,	// (0x00038738) aid_placing_vt_slider_prt

0xa7c4,	// (0x00038ab8) bg_tb_trans_pane_cp01_ParamLimits

0xc81a,	// (0x0003ab0e) popup_image_details_window_g1_ParamLimits

0xc82d,	// (0x0003ab21) popup_image_details_window_g2_ParamLimits

0xc842,	// (0x0003ab36) popup_image_details_window_g3_ParamLimits

0xc842,	// (0x0003ab36) popup_image_details_window_g3

0xf718,	// (0x0003da0c) popup_image_details_window_g_ParamLimits

0xc856,	// (0x0003ab4a) popup_image_details_window_t1_ParamLimits

0xc868,	// (0x0003ab5c) popup_image_details_window_t2_ParamLimits

0xc881,	// (0x0003ab75) popup_image_details_window_t3_ParamLimits

0xc895,	// (0x0003ab89) popup_image_details_window_t4_ParamLimits

0xc8b0,	// (0x0003aba4) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0003da13) popup_image_details_window_t_ParamLimits

0x72e0,	// (0x000355d4) cl_header_name_pane_ParamLimits

0x72e0,	// (0x000355d4) cl_header_name_pane

0x7707,	// (0x000359fb) cl_header_name_pane_t1_ParamLimits

0x7707,	// (0x000359fb) cl_header_name_pane_t1

0x7728,	// (0x00035a1c) cl_header_name_pane_t2_ParamLimits

0x7728,	// (0x00035a1c) cl_header_name_pane_t2

0x776a,	// (0x00035a5e) cl_header_name_pane_t3_ParamLimits

0x776a,	// (0x00035a5e) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003de19) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003de19) cl_header_name_pane_t

0xadd0,	// (0x000390c4) navi_pane_mv_g2_ParamLimits

0xd165,	// (0x0003b459) field_vitu2_entry_pane_g1_ParamLimits

0xd171,	// (0x0003b465) field_vitu2_entry_pane_g2_ParamLimits

0xd17d,	// (0x0003b471) field_vitu2_entry_pane_g3_ParamLimits

0xd17d,	// (0x0003b471) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003dc0f) field_vitu2_entry_pane_g_ParamLimits

0x663b,	// (0x0003492f) cell_vitu2_itu_pane_g1_ParamLimits

0x142a,	// (0x0002f71e) cell_vitu2_itu_pane_g2_ParamLimits

0x142a,	// (0x0002f71e) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003dc1b) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003dc1b) cell_vitu2_itu_pane_g

0x1806,	// (0x0002fafa) bg_vkb2_func_pane_cp05_ParamLimits

0x1806,	// (0x0002fafa) bg_vkb2_func_pane_cp05

0x1806,	// (0x0002fafa) bg_vkb2_func_pane_cp03

0x1806,	// (0x0002fafa) bg_vkb2_func_pane_cp04

0x1806,	// (0x0002fafa) bg_vkb2_func_pane_cp10_ParamLimits

0x1806,	// (0x0002fafa) bg_vkb2_func_pane_cp10

0x7282,	// (0x00035576) bg_vkb2_func_pane_cp08

0x7268,	// (0x0003555c) bg_vkb2_func_pane_cp06

0x7276,	// (0x0003556a) bg_vkb2_func_pane_cp07

0xd75b,	// (0x0003ba4f) bg_vkb2_func_pane_cp11_ParamLimits

0xd75b,	// (0x0003ba4f) bg_vkb2_func_pane_cp11

0xd770,	// (0x0003ba64) bg_vkb2_func_pane_cp12_ParamLimits

0xd770,	// (0x0003ba64) bg_vkb2_func_pane_cp12

0x9a83,	// (0x00037d77) bg_vkb2_func_pane_cp09

0xd1ba,	// (0x0003b4ae) bg_vkb2_func_pane_g1

0xa606,	// (0x000388fa) bg_vkb2_func_pane_g2

0xd1c2,	// (0x0003b4b6) bg_vkb2_func_pane_g3

0xd1ca,	// (0x0003b4be) bg_vkb2_func_pane_g4

0xd3de,	// (0x0003b6d2) bg_vkb2_func_pane_g5

0xd1e2,	// (0x0003b4d6) bg_vkb2_func_pane_g6

0xd1ea,	// (0x0003b4de) bg_vkb2_func_pane_g7

0xd1da,	// (0x0003b4ce) bg_vkb2_func_pane_g8

0xa5e6,	// (0x000388da) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003de20) bg_vkb2_func_pane_g

0x762b,	// (0x0003591f) blid2_tripm_pane_g6_ParamLimits

0x762b,	// (0x0003591f) blid2_tripm_pane_g6

0xcfdd,	// (0x0003b2d1) mp4_progress_pane_g1

0x76a4,	// (0x00035998) blid2_tripm_values_pane_ParamLimits

0x76a4,	// (0x00035998) blid2_tripm_values_pane

0x779b,	// (0x00035a8f) blid2_tripm_values_pane_t1

0x77a9,	// (0x00035a9d) blid2_tripm_values_pane_t2

0x77b7,	// (0x00035aab) blid2_tripm_values_pane_t3

0x77c5,	// (0x00035ab9) blid2_tripm_values_pane_t4

0x77d3,	// (0x00035ac7) blid2_tripm_values_pane_t5

0x77e1,	// (0x00035ad5) blid2_tripm_values_pane_t6

0x77ef,	// (0x00035ae3) blid2_tripm_values_pane_t7

0x77fd,	// (0x00035af1) blid2_tripm_values_pane_t8

0x780b,	// (0x00035aff) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003de33) blid2_tripm_values_pane_t

0x26e4,	// (0x000309d8) call_video_pane_t1_ParamLimits

0x2702,	// (0x000309f6) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0003d562) call_video_pane_t_ParamLimits

0x402e,	// (0x00032322) msg_header_pane_g1_ParamLimits

0xafb8,	// (0x000392ac) msg_header_pane_g2_ParamLimits

0xafb8,	// (0x000392ac) msg_header_pane_g2

0x0001,

0xf488,	// (0x0003d77c) msg_header_pane_g_ParamLimits

0xf488,	// (0x0003d77c) msg_header_pane_g

0xa1df,	// (0x000384d3) main_clock2_pane_ParamLimits

0x5a49,	// (0x00033d3d) grid_clock2_toolbar_pane_ParamLimits

0x5a49,	// (0x00033d3d) grid_clock2_toolbar_pane

0x5a49,	// (0x00033d3d) listscroll_clock2_pane_ParamLimits

0x5a49,	// (0x00033d3d) listscroll_clock2_pane

0x5b42,	// (0x00033e36) main_clock2_pane_t3_ParamLimits

0x5b42,	// (0x00033e36) main_clock2_pane_t3

0x5b66,	// (0x00033e5a) main_clock2_pane_t4_ParamLimits

0x5b66,	// (0x00033e5a) main_clock2_pane_t4

0xd85b,	// (0x0003bb4f) cell_clock2_toolbar_pane

0xd863,	// (0x0003bb57) cell_clock2_toolbar_pane_cp01

0xd863,	// (0x0003bb57) cell_clock2_toolbar_pane_cp02

0xd86b,	// (0x0003bb5f) cell_clock2_toolbar_pane_cp03

0xd873,	// (0x0003bb67) list_clock2_pane

0xabf4,	// (0x00038ee8) scroll_pane_cp10

0xd87b,	// (0x0003bb6f) list_single_clock2_pane_ParamLimits

0xd87b,	// (0x0003bb6f) list_single_clock2_pane

0xa3ad,	// (0x000386a1) list_highlight_pane_cp08

0xd888,	// (0x0003bb7c) list_single_clock2_pane_t1

0xd896,	// (0x0003bb8a) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003de46) list_single_clock2_pane_t

0x9a83,	// (0x00037d77) bg_button_pane_cp10

0xd8a4,	// (0x0003bb98) cell_clock2_toolbar_pane_g1

0x0493,	// (0x0002e787) aid_main_viewer_pane_g1_ParamLimits

0x0493,	// (0x0002e787) aid_main_viewer_pane_g1

0x04a1,	// (0x0002e795) aid_main_viewer_pane_g2_ParamLimits

0x04a1,	// (0x0002e795) aid_main_viewer_pane_g2

0x4085,	// (0x00032379) aid_main_viewer_pane_g3_ParamLimits

0x4085,	// (0x00032379) aid_main_viewer_pane_g3

0x4094,	// (0x00032388) aid_main_viewer_pane_g4_ParamLimits

0x4094,	// (0x00032388) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0003d78d) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0003d78d) aid_main_viewer_pane_g

0x04d5,	// (0x0002e7c9) main_calc_pane_ParamLimits

0x04fb,	// (0x0002e7ef) main_dialer2_pane_ParamLimits

0x1820,	// (0x0002fb14) main_cam6_pane

0x1820,	// (0x0002fb14) main_vid6_pane

0x5a55,	// (0x00033d49) listscroll_gen_pane_cp06_ParamLimits

0x5a55,	// (0x00033d49) listscroll_gen_pane_cp06

0x5b89,	// (0x00033e7d) main_clock2_pane_t5_ParamLimits

0x5b89,	// (0x00033e7d) main_clock2_pane_t5

0x5be5,	// (0x00033ed9) aid_call2_pane_cp10_ParamLimits

0x5bf7,	// (0x00033eeb) aid_call_pane_cp10_ParamLimits

0xac72,	// (0x00038f66) popup_clock_analogue_window_cp10_g1_ParamLimits

0xac72,	// (0x00038f66) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c09,	// (0x00033efd) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c09,	// (0x00033efd) popup_clock_analogue_window_cp10_g4_ParamLimits

0xac72,	// (0x00038f66) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0003dac8) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c1b,	// (0x00033f0f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6311,	// (0x00034605) cell_dialer2_keypad_pane_g2_ParamLimits

0x6311,	// (0x00034605) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003dbae) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003dbae) cell_dialer2_keypad_pane_g

0x632d,	// (0x00034621) cell_dialer2_keypad_pane_t1

0x6955,	// (0x00034c49) main_cset_text2_pane_ParamLimits

0x6955,	// (0x00034c49) main_cset_text2_pane

0xd605,	// (0x0003b8f9) area_vitu2_query_pane_g1_ParamLimits

0x7207,	// (0x000354fb) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003dd63) area_vitu2_query_pane_g_ParamLimits

0xd689,	// (0x0003b97d) area_vitu2_query_pane_t7_ParamLimits

0xd689,	// (0x0003b97d) area_vitu2_query_pane_t7

0x7268,	// (0x0003555c) bg_button_pane_cp018_ParamLimits

0x7276,	// (0x0003556a) bg_button_pane_cp021_ParamLimits

0x7282,	// (0x00035576) bg_button_pane_cp022_ParamLimits

0x7282,	// (0x00035576) bg_vkb2_func_pane_cp08_ParamLimits

0x7268,	// (0x0003555c) bg_vkb2_func_pane_cp06_ParamLimits

0x7276,	// (0x0003556a) bg_vkb2_func_pane_cp07_ParamLimits

0x7293,	// (0x00035587) input_focus_pane_cp09_ParamLimits

0x7819,	// (0x00035b0d) cam6_autofocus_pane_ParamLimits

0x7819,	// (0x00035b0d) cam6_autofocus_pane

0x16da,	// (0x0002f9ce) cam6_image_uncrop_pane_ParamLimits

0x16da,	// (0x0002f9ce) cam6_image_uncrop_pane

0x16e9,	// (0x0002f9dd) cam6_indi_pane_ParamLimits

0x16e9,	// (0x0002f9dd) cam6_indi_pane

0x16ff,	// (0x0002f9f3) cam6_mode_pane_ParamLimits

0x16ff,	// (0x0002f9f3) cam6_mode_pane

0x1711,	// (0x0002fa05) cam6_timer_pane_ParamLimits

0x1711,	// (0x0002fa05) cam6_timer_pane

0x171d,	// (0x0002fa11) cam6_zoom_pane_ParamLimits

0x171d,	// (0x0002fa11) cam6_zoom_pane

0x7827,	// (0x00035b1b) cam6_mode_pane_g1_ParamLimits

0x7827,	// (0x00035b1b) cam6_mode_pane_g1

0x7837,	// (0x00035b2b) cam6_mode_pane_g2_ParamLimits

0x7837,	// (0x00035b2b) cam6_mode_pane_g2

0x7847,	// (0x00035b3b) cam6_mode_pane_g3_ParamLimits

0x7847,	// (0x00035b3b) cam6_mode_pane_g3

0x7857,	// (0x00035b4b) cam6_mode_pane_g4_ParamLimits

0x7857,	// (0x00035b4b) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003de4b) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003de4b) cam6_mode_pane_g

0xd8ac,	// (0x0003bba0) bg_tb_trans_pane_cp08_ParamLimits

0xd8ac,	// (0x0003bba0) bg_tb_trans_pane_cp08

0xd8ba,	// (0x0003bbae) cam6_battery_pane_ParamLimits

0xd8ba,	// (0x0003bbae) cam6_battery_pane

0xd8d0,	// (0x0003bbc4) cam6_indi_pane_g1_ParamLimits

0xd8d0,	// (0x0003bbc4) cam6_indi_pane_g1

0xd8e2,	// (0x0003bbd6) cam6_indi_pane_g2_ParamLimits

0xd8e2,	// (0x0003bbd6) cam6_indi_pane_g2

0xd8f4,	// (0x0003bbe8) cam6_indi_pane_g3_ParamLimits

0xd8f4,	// (0x0003bbe8) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003de54) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003de54) cam6_indi_pane_g

0xd906,	// (0x0003bbfa) cam6_indi_pane_t1_ParamLimits

0xd906,	// (0x0003bbfa) cam6_indi_pane_t1

0x7867,	// (0x00035b5b) cam6_autofocus_pane_g1

0x786f,	// (0x00035b63) cam6_autofocus_pane_g2

0x7877,	// (0x00035b6b) cam6_autofocus_pane_g3

0x787f,	// (0x00035b73) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003de5b) cam6_autofocus_pane_g

0xd92c,	// (0x0003bc20) cam6_timer_pane_g1

0xd934,	// (0x0003bc28) cam6_timer_pane_t1

0xd942,	// (0x0003bc36) cam6_zoom_cont_pane

0xd94a,	// (0x0003bc3e) cam6_zoom_pane_g1

0xd952,	// (0x0003bc46) cam6_zoom_pane_g2

0x7887,	// (0x00035b7b) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003de64) cam6_zoom_pane_g

0xc69a,	// (0x0003a98e) cam6_battery_pane_g1

0xc69a,	// (0x0003a98e) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0003d9d0) cam6_battery_pane_g

0xd95a,	// (0x0003bc4e) cam6_zoom_cont_pane_g1

0xd963,	// (0x0003bc57) cam6_zoom_cont_pane_g2

0xd96c,	// (0x0003bc60) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003de6b) cam6_zoom_cont_pane_g

0x78a4,	// (0x00035b98) cam6_mode_pane_cp_ParamLimits

0x78a4,	// (0x00035b98) cam6_mode_pane_cp

0x78b6,	// (0x00035baa) cam6_zoom_pane_cp_ParamLimits

0x78b6,	// (0x00035baa) cam6_zoom_pane_cp

0x78c2,	// (0x00035bb6) vid6_image_uncrop_cif_pane_ParamLimits

0x78c2,	// (0x00035bb6) vid6_image_uncrop_cif_pane

0x78d2,	// (0x00035bc6) vid6_image_uncrop_nhd_pane_ParamLimits

0x78d2,	// (0x00035bc6) vid6_image_uncrop_nhd_pane

0x78e1,	// (0x00035bd5) vid6_image_uncrop_vga_pane_ParamLimits

0x78e1,	// (0x00035bd5) vid6_image_uncrop_vga_pane

0x78f0,	// (0x00035be4) vid6_image_uncrop_wvga_pane_ParamLimits

0x78f0,	// (0x00035be4) vid6_image_uncrop_wvga_pane

0x78ff,	// (0x00035bf3) vid6_indi_pane_ParamLimits

0x78ff,	// (0x00035bf3) vid6_indi_pane

0xd8ac,	// (0x0003bba0) bg_tb_trans_pane_cp09_ParamLimits

0xd8ac,	// (0x0003bba0) bg_tb_trans_pane_cp09

0xd984,	// (0x0003bc78) cam6_battery_pane_cp_ParamLimits

0xd984,	// (0x0003bc78) cam6_battery_pane_cp

0xd990,	// (0x0003bc84) vid6_indi_pane_g1_ParamLimits

0xd990,	// (0x0003bc84) vid6_indi_pane_g1

0xd9a2,	// (0x0003bc96) vid6_indi_pane_g2_ParamLimits

0xd9a2,	// (0x0003bc96) vid6_indi_pane_g2

0xd9b4,	// (0x0003bca8) vid6_indi_pane_g3_ParamLimits

0xd9b4,	// (0x0003bca8) vid6_indi_pane_g3

0xd9c9,	// (0x0003bcbd) vid6_indi_pane_g4_ParamLimits

0xd9c9,	// (0x0003bcbd) vid6_indi_pane_g4

0xd9de,	// (0x0003bcd2) vid6_indi_pane_g5_ParamLimits

0xd9de,	// (0x0003bcd2) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003de72) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003de72) vid6_indi_pane_g

0xd9f8,	// (0x0003bcec) vid6_indi_pane_t1_ParamLimits

0xd9f8,	// (0x0003bcec) vid6_indi_pane_t1

0xda0e,	// (0x0003bd02) vid6_indi_pane_t2_ParamLimits

0xda0e,	// (0x0003bd02) vid6_indi_pane_t2

0xda36,	// (0x0003bd2a) vid6_indi_pane_t3_ParamLimits

0xda36,	// (0x0003bd2a) vid6_indi_pane_t3

0xda5e,	// (0x0003bd52) vid6_indi_pane_t4_ParamLimits

0xda5e,	// (0x0003bd52) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003de7d) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003de7d) vid6_indi_pane_t

0xda82,	// (0x0003bd76) wait_bar_pane_cp08

0x7917,	// (0x00035c0b) main_cset_text2_pane_t1_ParamLimits

0x7917,	// (0x00035c0b) main_cset_text2_pane_t1

0x788f,	// (0x00035b83) listscroll_gen_pane_cp06_t1_ParamLimits

0x788f,	// (0x00035b83) listscroll_gen_pane_cp06_t1

0x1820,	// (0x0002fb14) main_cam6_set_pane

0x6510,	// (0x00034804) bg_tb_trans_pane_cp06_ParamLimits

0x6526,	// (0x0003481a) cam4_indicators_pane_g1_ParamLimits

0x6537,	// (0x0003482b) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003dbeb) cam4_indicators_pane_g_ParamLimits

0x6555,	// (0x00034849) cam4_indicators_pane_t1_ParamLimits

0x1806,	// (0x0002fafa) bg_tb_trans_pane_cp07_ParamLimits

0x657f,	// (0x00034873) vid4_indicators_pane_g1_ParamLimits

0x6593,	// (0x00034887) vid4_indicators_pane_g2_ParamLimits

0x65a7,	// (0x0003489b) vid4_indicators_pane_g3_ParamLimits

0x65b8,	// (0x000348ac) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003dbfd) vid4_indicators_pane_g_ParamLimits

0x65d4,	// (0x000348c8) vid4_indicators_pane_t1_ParamLimits

0x73db,	// (0x000356cf) vid4_progress_pane_g1_ParamLimits

0x73eb,	// (0x000356df) vid4_progress_pane_g2_ParamLimits

0x16a1,	// (0x0002f995) vid4_progress_pane_g3_ParamLimits

0x73fb,	// (0x000356ef) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003ddae) vid4_progress_pane_g_ParamLimits

0x16b3,	// (0x0002f9a7) vid4_progress_pane_t1_ParamLimits

0x7419,	// (0x0003570d) vid4_progress_pane_t2_ParamLimits

0x742e,	// (0x00035722) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003ddb9) vid4_progress_pane_t_ParamLimits

0x16c9,	// (0x0002f9bd) wait_bar_pane_cp07_ParamLimits

0x7936,	// (0x00035c2a) main_cam6_set_pane_g2_ParamLimits

0x7936,	// (0x00035c2a) main_cam6_set_pane_g2

0x795a,	// (0x00035c4e) main_cset6_listscroll_pane_ParamLimits

0x795a,	// (0x00035c4e) main_cset6_listscroll_pane

0x7976,	// (0x00035c6a) main_cset6_slider_pane_ParamLimits

0x7976,	// (0x00035c6a) main_cset6_slider_pane

0x798c,	// (0x00035c80) main_cset6_text2_pane_ParamLimits

0x798c,	// (0x00035c80) main_cset6_text2_pane

0xda91,	// (0x0003bd85) main_cset6_text_pane

0xda99,	// (0x0003bd8d) main_cset_list_pane_copy1_ParamLimits

0xda99,	// (0x0003bd8d) main_cset_list_pane_copy1

0xdaa9,	// (0x0003bd9d) scroll_pane_cp028_copy1

0x799a,	// (0x00035c8e) cset_list_set_pane_copy1

0x79ac,	// (0x00035ca0) aid_position_infowindow_above_copy1

0x79b4,	// (0x00035ca8) aid_position_infowindow_below_copy1

0x79bc,	// (0x00035cb0) cset_list_set_pane_g1_copy1

0x79c4,	// (0x00035cb8) cset_list_set_pane_g3_copy1_ParamLimits

0x79c4,	// (0x00035cb8) cset_list_set_pane_g3_copy1

0x79d3,	// (0x00035cc7) cset_list_set_pane_t1_copy1_ParamLimits

0x79d3,	// (0x00035cc7) cset_list_set_pane_t1_copy1

0xa7c4,	// (0x00038ab8) list_highlight_pane_cp021_copy1_ParamLimits

0xa7c4,	// (0x00038ab8) list_highlight_pane_cp021_copy1

0xdab2,	// (0x0003bda6) cset6_slider_pane_ParamLimits

0xdab2,	// (0x0003bda6) cset6_slider_pane

0xdade,	// (0x0003bdd2) main_cset6_slider_pane_g1_ParamLimits

0xdade,	// (0x0003bdd2) main_cset6_slider_pane_g1

0x79e8,	// (0x00035cdc) main_cset6_slider_pane_g2_ParamLimits

0x79e8,	// (0x00035cdc) main_cset6_slider_pane_g2

0xdb06,	// (0x0003bdfa) main_cset6_slider_pane_g3_ParamLimits

0xdb06,	// (0x0003bdfa) main_cset6_slider_pane_g3

0x7a10,	// (0x00035d04) main_cset6_slider_pane_g4_ParamLimits

0x7a10,	// (0x00035d04) main_cset6_slider_pane_g4

0x7a1c,	// (0x00035d10) main_cset6_slider_pane_g5_ParamLimits

0x7a1c,	// (0x00035d10) main_cset6_slider_pane_g5

0xd2e9,	// (0x0003b5dd) main_cset6_slider_pane_g7_ParamLimits

0xd2e9,	// (0x0003b5dd) main_cset6_slider_pane_g7

0xd2f5,	// (0x0003b5e9) main_cset6_slider_pane_g8_ParamLimits

0xd2f5,	// (0x0003b5e9) main_cset6_slider_pane_g8

0x6a02,	// (0x00034cf6) main_cset6_slider_pane_g9_ParamLimits

0x6a02,	// (0x00034cf6) main_cset6_slider_pane_g9

0x6a0e,	// (0x00034d02) main_cset6_slider_pane_g10_ParamLimits

0x6a0e,	// (0x00034d02) main_cset6_slider_pane_g10

0x6a1a,	// (0x00034d0e) main_cset6_slider_pane_g11_ParamLimits

0x6a1a,	// (0x00034d0e) main_cset6_slider_pane_g11

0x6a26,	// (0x00034d1a) main_cset6_slider_pane_g12_ParamLimits

0x6a26,	// (0x00034d1a) main_cset6_slider_pane_g12

0x6a32,	// (0x00034d26) main_cset6_slider_pane_g13_ParamLimits

0x6a32,	// (0x00034d26) main_cset6_slider_pane_g13

0x6a3e,	// (0x00034d32) main_cset6_slider_pane_g14_ParamLimits

0x6a3e,	// (0x00034d32) main_cset6_slider_pane_g14

0x7a28,	// (0x00035d1c) main_cset6_slider_pane_g15_ParamLimits

0x7a28,	// (0x00035d1c) main_cset6_slider_pane_g15

0x6a62,	// (0x00034d56) main_cset6_slider_pane_g16_ParamLimits

0x6a62,	// (0x00034d56) main_cset6_slider_pane_g16

0x6a6e,	// (0x00034d62) main_cset6_slider_pane_g17_ParamLimits

0x6a6e,	// (0x00034d62) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003de86) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003de86) main_cset6_slider_pane_g

0xdb12,	// (0x0003be06) main_cset6_slider_pane_t1_ParamLimits

0xdb12,	// (0x0003be06) main_cset6_slider_pane_t1

0x7a58,	// (0x00035d4c) main_cset6_slider_pane_t2_ParamLimits

0x7a58,	// (0x00035d4c) main_cset6_slider_pane_t2

0x7a83,	// (0x00035d77) main_cset6_slider_pane_t3_ParamLimits

0x7a83,	// (0x00035d77) main_cset6_slider_pane_t3

0x7aae,	// (0x00035da2) main_cset6_slider_pane_t4_ParamLimits

0x7aae,	// (0x00035da2) main_cset6_slider_pane_t4

0x7ad9,	// (0x00035dcd) main_cset6_slider_pane_t5_ParamLimits

0x7ad9,	// (0x00035dcd) main_cset6_slider_pane_t5

0xdb53,	// (0x0003be47) main_cset6_slider_pane_t7_ParamLimits

0xdb53,	// (0x0003be47) main_cset6_slider_pane_t7

0x7b04,	// (0x00035df8) main_cset6_slider_pane_t8_ParamLimits

0x7b04,	// (0x00035df8) main_cset6_slider_pane_t8

0x7b28,	// (0x00035e1c) main_cset6_slider_pane_t9_ParamLimits

0x7b28,	// (0x00035e1c) main_cset6_slider_pane_t9

0x7b4c,	// (0x00035e40) main_cset6_slider_pane_t10_ParamLimits

0x7b4c,	// (0x00035e40) main_cset6_slider_pane_t10

0x7b70,	// (0x00035e64) main_cset6_slider_pane_t11_ParamLimits

0x7b70,	// (0x00035e64) main_cset6_slider_pane_t11

0xdb89,	// (0x0003be7d) main_cset6_slider_pane_t14_ParamLimits

0xdb89,	// (0x0003be7d) main_cset6_slider_pane_t14

0xdbc2,	// (0x0003beb6) main_cset6_slider_pane_t15_ParamLimits

0xdbc2,	// (0x0003beb6) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003deab) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003deab) main_cset6_slider_pane_t

0xdbfb,	// (0x0003beef) cset_slider_pane_g1_copy1

0xdc04,	// (0x0003bef8) cset_slider_pane_g2_copy1

0xdc0d,	// (0x0003bf01) cset_slider_pane_g3_copy1

0x9a83,	// (0x00037d77) bg_popup_sub_pane_cp011_copy1

0xdc16,	// (0x0003bf0a) main_cset_text_pane_g1_copy1

0xd42d,	// (0x0003b721) main_cset_text_pane_t1_copy1

0xd43b,	// (0x0003b72f) main_cset_text_pane_t2_copy1

0xd449,	// (0x0003b73d) main_cset_text_pane_t3_copy1

0xd457,	// (0x0003b74b) main_cset_text_pane_t4_copy1

0xd465,	// (0x0003b759) main_cset_text_pane_t5_copy1

0xdc1e,	// (0x0003bf12) main_cset_text_pane_t6_copy1

0xdc2c,	// (0x0003bf20) main_cset_text_pane_t7_copy1

0x7c63,	// (0x00035f57) main_cset_text2_pane_t1_copy1

0x1806,	// (0x0002fafa) main_ncimui_pane

0x0737,	// (0x0002ea2b) popup_query_ncimui_window_ParamLimits

0x0737,	// (0x0002ea2b) popup_query_ncimui_window

0xc99b,	// (0x0003ac8f) field_cale_ev2_pane_g4_ParamLimits

0xc99b,	// (0x0003ac8f) field_cale_ev2_pane_g4

0x60af,	// (0x000343a3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60af,	// (0x000343a3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0003db89) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0003db89) cell_video_dialer_keypad_pane_g

0x60c7,	// (0x000343bb) cell_video_dialer_keypad_pane_t1

0x9a83,	// (0x00037d77) bg_popup_window_pane_cp012

0xaab5,	// (0x00038da9) heading_pane_cp06

0xdc58,	// (0x0003bf4c) ncim_query_content_pane

0x9a83,	// (0x00037d77) bg_popup_heading_pane_cp01

0xdc60,	// (0x0003bf54) ncim_heading_pane_t1

0xdc6e,	// (0x0003bf62) ncim_indicator_popup_pane

0xdc80,	// (0x0003bf74) ncim_query_button_pane

0xdc94,	// (0x0003bf88) ncim_query_content_pane_t1

0xdca6,	// (0x0003bf9a) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003deef) ncim_query_content_pane_t

0xdce0,	// (0x0003bfd4) ncim_query_list_pane

0xdcf2,	// (0x0003bfe6) ncim_query_popup_pane

0xdc6e,	// (0x0003bf62) ncim_indicator_popup_pane_ParamLimits

0x7da7,	// (0x0003609b) ncim_query_content_pane_g1_ParamLimits

0x7da7,	// (0x0003609b) ncim_query_content_pane_g1

0xdc94,	// (0x0003bf88) ncim_query_content_pane_t1_ParamLimits

0xdca6,	// (0x0003bf9a) ncim_query_content_pane_t2_ParamLimits

0x7db3,	// (0x000360a7) ncim_query_content_pane_t3_ParamLimits

0x7db3,	// (0x000360a7) ncim_query_content_pane_t3

0x7ddb,	// (0x000360cf) ncim_query_content_pane_t4_ParamLimits

0x7ddb,	// (0x000360cf) ncim_query_content_pane_t4

0x7e03,	// (0x000360f7) ncim_query_content_pane_t5_ParamLimits

0x7e03,	// (0x000360f7) ncim_query_content_pane_t5

0xdcb8,	// (0x0003bfac) ncim_query_content_pane_t6_ParamLimits

0xdcb8,	// (0x0003bfac) ncim_query_content_pane_t6

0xfbfb,	// (0x0003deef) ncim_query_content_pane_t_ParamLimits

0xdce0,	// (0x0003bfd4) ncim_query_list_pane_ParamLimits

0xdcf2,	// (0x0003bfe6) ncim_query_popup_pane_ParamLimits

0xdd06,	// (0x0003bffa) wait_bar_pane_cp04

0x9a83,	// (0x00037d77) input_focus_pane_cp011

0xdd0e,	// (0x0003c002) ncim_query_popup_pane_t1

0xdd1c,	// (0x0003c010) ncim_list_query_list_pane_ParamLimits

0xdd1c,	// (0x0003c010) ncim_list_query_list_pane

0x9a83,	// (0x00037d77) bg_button_pane_cp027

0xdd2f,	// (0x0003c023) ncim_query_button_pane_g1

0x9a83,	// (0x00037d77) list_highlight_pane_cp012

0xdd39,	// (0x0003c02d) ncim_list_query_list_pane_g1

0xdd41,	// (0x0003c035) ncim_list_query_list_pane_t1

0x6546,	// (0x0003483a) cam4_indicators_pane_g3_ParamLimits

0x6546,	// (0x0003483a) cam4_indicators_pane_g3

0x65c4,	// (0x000348b8) vid4_indicators_pane_g5_ParamLimits

0x65c4,	// (0x000348b8) vid4_indicators_pane_g5

0x740a,	// (0x000356fe) vid4_progress_pane_g5_ParamLimits

0x740a,	// (0x000356fe) vid4_progress_pane_g5

0x7c95,	// (0x00035f89) main_ncimui_pane_g1

0x7cfb,	// (0x00035fef) ncimui_group_query_pane_ParamLimits

0x7cfb,	// (0x00035fef) ncimui_group_query_pane

0x7d43,	// (0x00036037) ncimui_list_pane_ParamLimits

0x7d43,	// (0x00036037) ncimui_list_pane

0x7d6a,	// (0x0003605e) ncimui_text_pane_ParamLimits

0x7d6a,	// (0x0003605e) ncimui_text_pane

0x7e2b,	// (0x0003611f) ncimui_text_pane_t1_ParamLimits

0x7e2b,	// (0x0003611f) ncimui_text_pane_t1

0xdd4f,	// (0x0003c043) ncimui_list_single_graphic_pane_ParamLimits

0xdd4f,	// (0x0003c043) ncimui_list_single_graphic_pane

0x7e49,	// (0x0003613d) ncimui_query_pane_ParamLimits

0x7e49,	// (0x0003613d) ncimui_query_pane

0x9a83,	// (0x00037d77) list_highlight_pane_cp013

0xdd5f,	// (0x0003c053) ncim_list_query_list_pane_t1_copy1

0xdd39,	// (0x0003c02d) ncim_list_single_graphic_pane_g1

0xdd6d,	// (0x0003c061) ncim_query_button_pane_cp01

0xdd79,	// (0x0003c06d) ncim_query_entry_pane_ParamLimits

0xdd79,	// (0x0003c06d) ncim_query_entry_pane

0xdd8c,	// (0x0003c080) ncimui_query_pane_g1

0xdd98,	// (0x0003c08c) ncimui_query_pane_t1_ParamLimits

0xdd98,	// (0x0003c08c) ncimui_query_pane_t1

0xa7c4,	// (0x00038ab8) input_focus_pane_cp012

0xddb1,	// (0x0003c0a5) ncim_query_entry_pane_t1

0xa1df,	// (0x000384d3) main_im_pane_ParamLimits

0x1806,	// (0x0002fafa) main_mobtv_pane_ParamLimits

0x1806,	// (0x0002fafa) main_mobtv_pane

0x7a40,	// (0x00035d34) main_cset6_slider_pane_g18_ParamLimits

0x7a40,	// (0x00035d34) main_cset6_slider_pane_g18

0x7a4c,	// (0x00035d40) main_cset6_slider_pane_g19_ParamLimits

0x7a4c,	// (0x00035d40) main_cset6_slider_pane_g19

0x7e5c,	// (0x00036150) bg_main_mobtv_pane_ParamLimits

0x7e5c,	// (0x00036150) bg_main_mobtv_pane

0x7e6a,	// (0x0003615e) main_mobtv_info_pane

0x7e73,	// (0x00036167) main_mobtv_loading_pane_ParamLimits

0x7e73,	// (0x00036167) main_mobtv_loading_pane

0xddc3,	// (0x0003c0b7) main_mobtv_pg_channel_list_pane

0xddcd,	// (0x0003c0c1) main_mobtv_pg_hdr_pane

0x7e80,	// (0x00036174) main_mobtv_programe_curr_pane_ParamLimits

0x7e80,	// (0x00036174) main_mobtv_programe_curr_pane

0x7e8d,	// (0x00036181) main_mobtv_programe_next_pane_ParamLimits

0x7e8d,	// (0x00036181) main_mobtv_programe_next_pane

0xddd6,	// (0x0003c0ca) popup_mobtv_noti_window

0xc69a,	// (0x0003a98e) main_tv_pg_hdr_pane_g1

0xddde,	// (0x0003c0d2) main_tv_pg_hdr_pane_g2

0xdde6,	// (0x0003c0da) main_tv_pg_hdr_pane_g3

0xddee,	// (0x0003c0e2) main_tv_pg_hdr_pane_g4

0xddf6,	// (0x0003c0ea) main_tv_pg_hdr_pane_g5

0xde00,	// (0x0003c0f4) main_tv_pg_hdr_pane_g6

0xde0a,	// (0x0003c0fe) main_tv_pg_hdr_pane_g7

0xde14,	// (0x0003c108) main_tv_pg_hdr_pane_g8

0xde1e,	// (0x0003c112) main_tv_pg_hdr_pane_g9

0xde28,	// (0x0003c11c) main_tv_pg_hdr_pane_g10

0xde32,	// (0x0003c126) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003defc) main_tv_pg_hdr_pane_g

0xde3c,	// (0x0003c130) main_tv_pg_hdr_pane_t1

0xde4a,	// (0x0003c13e) main_tv_pg_hdr_pane_t2

0xde58,	// (0x0003c14c) main_tv_pg_hdr_pane_t3

0xde68,	// (0x0003c15c) main_tv_pg_hdr_pane_t4

0xde78,	// (0x0003c16c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003df13) main_tv_pg_hdr_pane_t

0xde88,	// (0x0003c17c) single_mobtv_pg_channel_pane_ParamLimits

0xde88,	// (0x0003c17c) single_mobtv_pg_channel_pane

0xde9a,	// (0x0003c18e) single_mobtv_pg_channel_table_pane

0xdea3,	// (0x0003c197) single_mobtv_pg_channel_thumb_pane

0xdeac,	// (0x0003c1a0) single_tv_pg_channel_pane_g1

0xdeb5,	// (0x0003c1a9) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003df1e) single_tv_pg_channel_pane_g

0xc8fa,	// (0x0003abee) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc8fa,	// (0x0003abee) bg_single_mobtv_pg_channel_thumb_pane

0xdebe,	// (0x0003c1b2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdebe,	// (0x0003c1b2) single_mobtv_pg_channel_thumb_pane_g1

0xdecc,	// (0x0003c1c0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdecc,	// (0x0003c1c0) single_mobtv_pg_channel_thumb_pane_g2

0xded8,	// (0x0003c1cc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xded8,	// (0x0003c1cc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003df23) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003df23) single_mobtv_pg_channel_thumb_pane_g

0xdee4,	// (0x0003c1d8) single_mobtv_pg_channel_thumb_pane_t1

0xdef2,	// (0x0003c1e6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003df2a) single_mobtv_pg_channel_thumb_pane_t

0xc69a,	// (0x0003a98e) bg_single_mobtv_pg_channel_table_pane_g1

0xc69a,	// (0x0003a98e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0003d9d0) bg_single_mobtv_pg_channel_table_pane_g

0xdf00,	// (0x0003c1f4) single_mobtv_pg_channel_table_pane_t1

0xdf0e,	// (0x0003c202) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003df2f) single_mobtv_pg_channel_table_pane_t

0x7ea2,	// (0x00036196) main_mobtv_info_pane_g1_ParamLimits

0x7ea2,	// (0x00036196) main_mobtv_info_pane_g1

0x7ec0,	// (0x000361b4) main_mobtv_info_pane_t1_ParamLimits

0x7ec0,	// (0x000361b4) main_mobtv_info_pane_t1

0x7f38,	// (0x0003622c) main_mobtv_info_pane_t2_ParamLimits

0x7f38,	// (0x0003622c) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003df39) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003df39) main_mobtv_info_pane_t

0x7fc7,	// (0x000362bb) wait_bar_pane_cp05

0x7fd9,	// (0x000362cd) main_mobtv_loading_pane_g1_ParamLimits

0x7fd9,	// (0x000362cd) main_mobtv_loading_pane_g1

0x7fec,	// (0x000362e0) main_mobtv_loading_pane_g2_ParamLimits

0x7fec,	// (0x000362e0) main_mobtv_loading_pane_g2

0x7ff8,	// (0x000362ec) main_mobtv_loading_pane_g3_ParamLimits

0x7ff8,	// (0x000362ec) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003df40) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003df40) main_mobtv_loading_pane_g

0xdf1c,	// (0x0003c210) main_mobtv_loading_pane_t1_ParamLimits

0xdf1c,	// (0x0003c210) main_mobtv_loading_pane_t1

0xdf34,	// (0x0003c228) main_mobtv_loading_pane_t2_ParamLimits

0xdf34,	// (0x0003c228) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003df47) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003df47) main_mobtv_loading_pane_t

0x800b,	// (0x000362ff) wait_bar_pane_cp06_ParamLimits

0x800b,	// (0x000362ff) wait_bar_pane_cp06

0xdf58,	// (0x0003c24c) main_mobtv_programe_curr_pane_t1

0xdf66,	// (0x0003c25a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003df4c) main_mobtv_programe_curr_pane_t

0xdf74,	// (0x0003c268) main_mobtv_programe_next_pane_t1

0xdf82,	// (0x0003c276) main_mobtv_programe_next_pane_t2

0xdf90,	// (0x0003c284) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003df51) main_mobtv_programe_next_pane_t

0x9a83,	// (0x00037d77) bg_popup_mobtv_noti_window_pane

0xdf9e,	// (0x0003c292) popup_mobtv_noti_window_g1

0xdfa6,	// (0x0003c29a) popup_mobtv_noti_window_t1

0xdfb4,	// (0x0003c2a8) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003df58) popup_mobtv_noti_window_t

0xc69a,	// (0x0003a98e) bg_popup_mobtv_noti_window_pane_g1

0x1820,	// (0x0002fb14) sc_clock_pane

0x1820,	// (0x0002fb14) main_fs_bigclock_pane

0x768e,	// (0x00035982) blid2_tripm_pane_t4_ParamLimits

0x768e,	// (0x00035982) blid2_tripm_pane_t4

0x801a,	// (0x0003630e) sc_clock_pane_g1_ParamLimits

0x801a,	// (0x0003630e) sc_clock_pane_g1

0x802c,	// (0x00036320) sc_clock_pane_t1_ParamLimits

0x802c,	// (0x00036320) sc_clock_pane_t1

0x804e,	// (0x00036342) sc_clock_pane_t2_ParamLimits

0x804e,	// (0x00036342) sc_clock_pane_t2

0x8066,	// (0x0003635a) sc_clock_pane_t3_ParamLimits

0x8066,	// (0x0003635a) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003df5d) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003df5d) sc_clock_pane_t

0x8f92,	// (0x00037286) main_fs_bigclock_indicator_pane_ParamLimits

0x8f92,	// (0x00037286) main_fs_bigclock_indicator_pane

0x8106,	// (0x000363fa) main_fs_bigclock_pane_g1_ParamLimits

0x8106,	// (0x000363fa) main_fs_bigclock_pane_g1

0x8f9e,	// (0x00037292) main_fs_bigclock_pane_t1_ParamLimits

0x8f9e,	// (0x00037292) main_fs_bigclock_pane_t1

0x8fb0,	// (0x000372a4) main_fs_bigclock_pane_t2_ParamLimits

0x8fb0,	// (0x000372a4) main_fs_bigclock_pane_t2

0x8fc2,	// (0x000372b6) main_fs_bigclock_pane_t3_ParamLimits

0x8fc2,	// (0x000372b6) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003e162) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003e162) main_fs_bigclock_pane_t

0xec55,	// (0x0003cf49) main_fs_bigclock_indicator_pane_g1

0xdc88,	// (0x0003bf7c) ncim_query_content_pane_g2_ParamLimits

0xdc88,	// (0x0003bf7c) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003deea) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003deea) ncim_query_content_pane_g

0x807f,	// (0x00036373) sc_clock_pane_t4_ParamLimits

0x807f,	// (0x00036373) sc_clock_pane_t4

0x1806,	// (0x0002fafa) main_radioblah_pane

0xd0f0,	// (0x0003b3e4) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0f0,	// (0x0003b3e4) cell_call4_button_pane_t1_copy1

0x7cad,	// (0x00035fa1) main_ncimui_pane_t1_ParamLimits

0x7cad,	// (0x00035fa1) main_ncimui_pane_t1

0x7cc7,	// (0x00035fbb) main_ncimui_pane_t2_ParamLimits

0x7cc7,	// (0x00035fbb) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003dee3) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003dee3) main_ncimui_pane_t

0xe0f9,	// (0x0003c3ed) main_radioblah_anim_pane_ParamLimits

0xe0f9,	// (0x0003c3ed) main_radioblah_anim_pane

0xe10a,	// (0x0003c3fe) main_radioblah_info_pane_ParamLimits

0xe10a,	// (0x0003c3fe) main_radioblah_info_pane

0xe11e,	// (0x0003c412) main_radioblah_pane_t1_ParamLimits

0xe11e,	// (0x0003c412) main_radioblah_pane_t1

0xe13a,	// (0x0003c42e) main_radioblah_pane_t2_ParamLimits

0xe13a,	// (0x0003c42e) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003df7e) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003df7e) main_radioblah_pane_t

0x815e,	// (0x00036452) main_radioblah_rocker_ctrl_pane_ParamLimits

0x815e,	// (0x00036452) main_radioblah_rocker_ctrl_pane

0xe182,	// (0x0003c476) main_radioblah_info_pane_t1_ParamLimits

0xe182,	// (0x0003c476) main_radioblah_info_pane_t1

0x81b6,	// (0x000364aa) main_radioblah_info_pane_t2_ParamLimits

0x81b6,	// (0x000364aa) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003df87) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003df87) main_radioblah_info_pane_t

0xc69a,	// (0x0003a98e) main_radioblah_rocker_ctrl_pane_g1

0x8266,	// (0x0003655a) main_radioblah_rocker_ctrl_pane_g2

0x826e,	// (0x00036562) main_radioblah_rocker_ctrl_pane_g3

0x8276,	// (0x0003656a) main_radioblah_rocker_ctrl_pane_g4

0x827e,	// (0x00036572) main_radioblah_rocker_ctrl_pane_g5

0x8286,	// (0x0003657a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003df90) main_radioblah_rocker_ctrl_pane_g

0x7c63,	// (0x00035f57) main_cset_text2_pane_t1_copy1_ParamLimits

0x64f4,	// (0x000347e8) cam4_image_uncrop_qvga_pane

0x656f,	// (0x00034863) vid4_image_uncrop_qcif_pane

0x7819,	// (0x00035b0d) cam6_image_uncrop_qvga_pane_ParamLimits

0x7819,	// (0x00035b0d) cam6_image_uncrop_qvga_pane

0xd974,	// (0x0003bc68) vid6_image_uncrop_qcif_pane_ParamLimits

0xd974,	// (0x0003bc68) vid6_image_uncrop_qcif_pane

0x9a83,	// (0x00037d77) bg_popup_preview_window_pane_cp03

0xdc3a,	// (0x0003bf2e) list_cset_text2_pane

0xdc42,	// (0x0003bf36) main_cset6_text2_pane_g1

0xdc4a,	// (0x0003bf3e) main_cset6_text2_pane_t1

0xeabf,	// (0x0003cdb3) list_cset_text2_pane_t1_ParamLimits

0xeabf,	// (0x0003cdb3) list_cset_text2_pane_t1

0x1806,	// (0x0002fafa) main_radioblah_pane_ParamLimits

0x7fb3,	// (0x000362a7) main_mobtv_info_pane_t3_ParamLimits

0x7fb3,	// (0x000362a7) main_mobtv_info_pane_t3

0x814c,	// (0x00036440) main_radioblah_pane_g1

0x8186,	// (0x0003647a) main_radioblah_info_pane_g1

0x820b,	// (0x000364ff) main_radioblah_info_pane_t3_ParamLimits

0x820b,	// (0x000364ff) main_radioblah_info_pane_t3

0x35de,	// (0x000318d2) highlight_cell_cale_month_pane_ParamLimits

0x35de,	// (0x000318d2) highlight_cell_cale_month_pane

0x1820,	// (0x0002fb14) main_phob_fisheye_pane

0xca4a,	// (0x0003ad3e) scroll_pane_cp0031_ParamLimits

0xca4a,	// (0x0003ad3e) scroll_pane_cp0031

0xda82,	// (0x0003bd76) wait_bar_pane_cp08_ParamLimits

0x799a,	// (0x00035c8e) cset_list_set_pane_copy1_ParamLimits

0xe1bc,	// (0x0003c4b0) highlight_cell_cale_month_pane_g1

0x828e,	// (0x00036582) highlight_cell_cale_month_pane_t1

0xd6f5,	// (0x0003b9e9) list_gen_pane_cp01

0xd2d4,	// (0x0003b5c8) scroll_pane_01

0x829c,	// (0x00036590) list_single_double_fisheye_pane

0x82a5,	// (0x00036599) list_double_fisheye_pane_g1_ParamLimits

0x82a5,	// (0x00036599) list_double_fisheye_pane_g1

0x82b1,	// (0x000365a5) list_double_fisheye_pane_g2_ParamLimits

0x82b1,	// (0x000365a5) list_double_fisheye_pane_g2

0x82bd,	// (0x000365b1) list_double_fisheye_pane_g3_ParamLimits

0x82bd,	// (0x000365b1) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003df9d) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003df9d) list_double_fisheye_pane_g

0x82e1,	// (0x000365d5) list_double_fisheye_pane_t1_ParamLimits

0x82e1,	// (0x000365d5) list_double_fisheye_pane_t1

0x82fc,	// (0x000365f0) list_double_fisheye_pane_t2_ParamLimits

0x82fc,	// (0x000365f0) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003dfa8) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003dfa8) list_double_fisheye_pane_t

0x1820,	// (0x0002fb14) main_call5_pane

0x80aa,	// (0x0003639e) sc_swipe_pane_ParamLimits

0x80aa,	// (0x0003639e) sc_swipe_pane

0x8331,	// (0x00036625) call5_image_pane_ParamLimits

0x8331,	// (0x00036625) call5_image_pane

0x834e,	// (0x00036642) call5_swipe_1_pane_ParamLimits

0x834e,	// (0x00036642) call5_swipe_1_pane

0x8361,	// (0x00036655) call5_swipe_2_pane_ParamLimits

0x8361,	// (0x00036655) call5_swipe_2_pane

0x838c,	// (0x00036680) popup_call5_audio_first_window_ParamLimits

0x838c,	// (0x00036680) popup_call5_audio_first_window

0xc8fa,	// (0x0003abee) call5_swipe_1_pane_g1_ParamLimits

0xc8fa,	// (0x0003abee) call5_swipe_1_pane_g1

0xe1c4,	// (0x0003c4b8) call5_swipe_1_pane_g2_ParamLimits

0xe1c4,	// (0x0003c4b8) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003dfad) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003dfad) call5_swipe_1_pane_g

0xe1d0,	// (0x0003c4c4) call5_swipe_1_pane_t1_ParamLimits

0xe1d0,	// (0x0003c4c4) call5_swipe_1_pane_t1

0xc8fa,	// (0x0003abee) call5_swipe_2_pane_g1_ParamLimits

0xc8fa,	// (0x0003abee) call5_swipe_2_pane_g1

0xe1e5,	// (0x0003c4d9) call5_swipe_2_pane_g2_ParamLimits

0xe1e5,	// (0x0003c4d9) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003dfb2) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003dfb2) call5_swipe_2_pane_g

0xe1f1,	// (0x0003c4e5) call5_swipe_2_pane_t1_ParamLimits

0xe1f1,	// (0x0003c4e5) call5_swipe_2_pane_t1

0xe206,	// (0x0003c4fa) sc_swipe_pane_g1_ParamLimits

0xe206,	// (0x0003c4fa) sc_swipe_pane_g1

0xe213,	// (0x0003c507) sc_swipe_pane_g2_ParamLimits

0xe213,	// (0x0003c507) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003dfb7) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003dfb7) sc_swipe_pane_g

0xe21f,	// (0x0003c513) sc_swipe_pane_t1_ParamLimits

0xe21f,	// (0x0003c513) sc_swipe_pane_t1

0x1820,	// (0x0002fb14) main_cmail_launcher_pane

0x839d,	// (0x00036691) aid_size_cell_cmail_l_ParamLimits

0x839d,	// (0x00036691) aid_size_cell_cmail_l

0x83b7,	// (0x000366ab) grid_cmail_l_pane_ParamLimits

0x83b7,	// (0x000366ab) grid_cmail_l_pane

0x83d2,	// (0x000366c6) cell_cmail_l_pane_ParamLimits

0x83d2,	// (0x000366c6) cell_cmail_l_pane

0x83f8,	// (0x000366ec) cell_cmail_l_pane_g1_ParamLimits

0x83f8,	// (0x000366ec) cell_cmail_l_pane_g1

0x8409,	// (0x000366fd) cell_cmail_l_pane_t1_ParamLimits

0x8409,	// (0x000366fd) cell_cmail_l_pane_t1

0xe234,	// (0x0003c528) cell_cmail_l_pane_t2_ParamLimits

0xe234,	// (0x0003c528) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003dfbc) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003dfbc) cell_cmail_l_pane_t

0xa7c4,	// (0x00038ab8) grid_highlight_pane_cp018_ParamLimits

0xa7c4,	// (0x00038ab8) grid_highlight_pane_cp018

0x00b2,	// (0x0002e3a6) main2_pane_ParamLimits

0x00b2,	// (0x0002e3a6) main2_pane

0xa28a,	// (0x0003857e) popup_sp_fs_action_menu_bg_pane_g1

0xa292,	// (0x00038586) popup_sp_fs_action_menu_bg_pane_g2

0xa29a,	// (0x0003858e) popup_sp_fs_action_menu_bg_pane_g3

0xa2a2,	// (0x00038596) popup_sp_fs_action_menu_bg_pane_g4

0xa2aa,	// (0x0003859e) popup_sp_fs_action_menu_bg_pane_g5

0xa2b2,	// (0x000385a6) popup_sp_fs_action_menu_bg_pane_g6

0xa2ba,	// (0x000385ae) popup_sp_fs_action_menu_bg_pane_g7

0xa2c2,	// (0x000385b6) popup_sp_fs_action_menu_bg_pane_g8

0xa2ca,	// (0x000385be) popup_sp_fs_action_menu_bg_pane_g9

0xa2d2,	// (0x000385c6) popup_sp_fs_action_menu_bg_pane_g10

0xa2d2,	// (0x000385c6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0003d47e) popup_sp_fs_action_menu_bg_pane_g

0x251b,	// (0x0003080f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x251b,	// (0x0003080f) list_medium_line_x2_t3_g3_g1

0x2527,	// (0x0003081b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2527,	// (0x0003081b) list_medium_line_x2_t3_g3_g2

0x2533,	// (0x00030827) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2533,	// (0x00030827) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0003d52c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0003d52c) list_medium_line_x2_t3_g3_g

0x253f,	// (0x00030833) list_medium_line_x2_t3_g3_t1_ParamLimits

0x253f,	// (0x00030833) list_medium_line_x2_t3_g3_t1

0x2554,	// (0x00030848) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2554,	// (0x00030848) list_medium_line_x2_t3_g3_t2

0x2568,	// (0x0003085c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2568,	// (0x0003085c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0003d533) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0003d533) list_medium_line_x2_t3_g3_t

0x251b,	// (0x0003080f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x251b,	// (0x0003080f) list_medium_line_x2_t3_g2_g1

0x2533,	// (0x00030827) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2533,	// (0x00030827) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0003d53a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0003d53a) list_medium_line_x2_t3_g2_g

0x257d,	// (0x00030871) list_medium_line_x2_t3_g2_t1_ParamLimits

0x257d,	// (0x00030871) list_medium_line_x2_t3_g2_t1

0x2593,	// (0x00030887) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2593,	// (0x00030887) list_medium_line_x2_t3_g2_t2

0x25a5,	// (0x00030899) list_medium_line_x2_t3_g2_t3_ParamLimits

0x25a5,	// (0x00030899) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0003d53f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0003d53f) list_medium_line_x2_t3_g2_t

0x251b,	// (0x0003080f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x251b,	// (0x0003080f) list_medium_line_x2_t4_g4_g1

0x25c3,	// (0x000308b7) list_medium_line_x2_t4_g4_g2_ParamLimits

0x25c3,	// (0x000308b7) list_medium_line_x2_t4_g4_g2

0x2527,	// (0x0003081b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2527,	// (0x0003081b) list_medium_line_x2_t4_g4_g3

0x25cf,	// (0x000308c3) list_medium_line_x2_t4_g4_g4_ParamLimits

0x25cf,	// (0x000308c3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0003d546) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0003d546) list_medium_line_x2_t4_g4_g

0x25db,	// (0x000308cf) list_medium_line_x2_t4_g4_t1_ParamLimits

0x25db,	// (0x000308cf) list_medium_line_x2_t4_g4_t1

0x25f5,	// (0x000308e9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x25f5,	// (0x000308e9) list_medium_line_x2_t4_g4_t2

0x260a,	// (0x000308fe) list_medium_line_x2_t4_g4_t3_ParamLimits

0x260a,	// (0x000308fe) list_medium_line_x2_t4_g4_t3

0x261f,	// (0x00030913) list_medium_line_x2_t4_g4_t4_ParamLimits

0x261f,	// (0x00030913) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0003d54f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0003d54f) list_medium_line_x2_t4_g4_t

0x251b,	// (0x0003080f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x251b,	// (0x0003080f) list_medium_line_x2_t2_g4_g1

0x25c3,	// (0x000308b7) list_medium_line_x2_t2_g4_g2_ParamLimits

0x25c3,	// (0x000308b7) list_medium_line_x2_t2_g4_g2

0x2527,	// (0x0003081b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2527,	// (0x0003081b) list_medium_line_x2_t2_g4_g3

0x2533,	// (0x00030827) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2533,	// (0x00030827) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0003d5b6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0003d5b6) list_medium_line_x2_t2_g4_g

0x3604,	// (0x000318f8) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3604,	// (0x000318f8) list_medium_line_x2_t2_g4_t1

0x2568,	// (0x0003085c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2568,	// (0x0003085c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0003d5bf) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0003d5bf) list_medium_line_x2_t2_g4_t

0x251b,	// (0x0003080f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x251b,	// (0x0003080f) list_medium_line_x2_t2_g3_g1

0x2527,	// (0x0003081b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2527,	// (0x0003081b) list_medium_line_x2_t2_g3_g2

0x2533,	// (0x00030827) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2533,	// (0x00030827) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0003d52c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0003d52c) list_medium_line_x2_t2_g3_g

0x3619,	// (0x0003190d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3619,	// (0x0003190d) list_medium_line_x2_t2_g3_t1

0x2568,	// (0x0003085c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2568,	// (0x0003085c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0003d5c4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0003d5c4) list_medium_line_x2_t2_g3_t

0x3766,	// (0x00031a5a) main_sp_fs_list_pane_ParamLimits

0x3766,	// (0x00031a5a) main_sp_fs_list_pane

0xd00c,	// (0x0003b300) sp_fs_scroll_pane_ParamLimits

0xd00c,	// (0x0003b300) sp_fs_scroll_pane

0x3772,	// (0x00031a66) list_medium_line_x2_t3_t1

0x3782,	// (0x00031a76) list_medium_line_x2_t3_t2

0x3790,	// (0x00031a84) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0003d60f) list_medium_line_x2_t3_t

0x379e,	// (0x00031a92) list_medium_line_x3_t4_t1

0x37ae,	// (0x00031aa2) list_medium_line_x3_t4_t2

0x37bc,	// (0x00031ab0) list_medium_line_x3_t4_t3

0x3790,	// (0x00031a84) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0003d616) list_medium_line_x3_t4_t

0x37ca,	// (0x00031abe) list_medium_line_x4_t5_t1

0x37da,	// (0x00031ace) list_medium_line_x4_t5_t2

0x37bc,	// (0x00031ab0) list_medium_line_x4_t5_t3

0x37e8,	// (0x00031adc) list_medium_line_x4_t5_t4

0x3790,	// (0x00031a84) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0003d61f) list_medium_line_x4_t5_t

0x251b,	// (0x0003080f) list_medium_line_t4_g4_g1_ParamLimits

0x251b,	// (0x0003080f) list_medium_line_t4_g4_g1

0x37f6,	// (0x00031aea) list_medium_line_t4_g4_g2_ParamLimits

0x37f6,	// (0x00031aea) list_medium_line_t4_g4_g2

0x3802,	// (0x00031af6) list_medium_line_t4_g4_g3_ParamLimits

0x3802,	// (0x00031af6) list_medium_line_t4_g4_g3

0x2533,	// (0x00030827) list_medium_line_t4_g4_g4_ParamLimits

0x2533,	// (0x00030827) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0003d62a) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0003d62a) list_medium_line_t4_g4_g

0x380e,	// (0x00031b02) list_medium_line_t4_g4_t1_ParamLimits

0x380e,	// (0x00031b02) list_medium_line_t4_g4_t1

0x3823,	// (0x00031b17) list_medium_line_t4_g4_t2_ParamLimits

0x3823,	// (0x00031b17) list_medium_line_t4_g4_t2

0x3839,	// (0x00031b2d) list_medium_line_t4_g4_t3_ParamLimits

0x3839,	// (0x00031b2d) list_medium_line_t4_g4_t3

0x2568,	// (0x0003085c) list_medium_line_t4_g4_t4_ParamLimits

0x2568,	// (0x0003085c) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0003d633) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0003d633) list_medium_line_t4_g4_t

0x3961,	// (0x00031c55) chi_dic_find_pane_g1

0x050f,	// (0x0002e803) main_tport_pane

0x6d6c,	// (0x00035060) list_medium_line_plain_t1

0x6dce,	// (0x000350c2) list_medium_line_t2_g2_g1_ParamLimits

0x6dce,	// (0x000350c2) list_medium_line_t2_g2_g1

0x6dda,	// (0x000350ce) list_medium_line_t2_g2_g2_ParamLimits

0x6dda,	// (0x000350ce) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003dcf4) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003dcf4) list_medium_line_t2_g2_g

0x6de6,	// (0x000350da) list_medium_line_t2_g2_t1_ParamLimits

0x6de6,	// (0x000350da) list_medium_line_t2_g2_t1

0x6e00,	// (0x000350f4) list_medium_line_t2_g2_t2_ParamLimits

0x6e00,	// (0x000350f4) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003dcf9) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003dcf9) list_medium_line_t2_g2_t

0xd6fe,	// (0x0003b9f2) aid_sp_fs_list_icon_a_sm

0xd706,	// (0x0003b9fa) aid_sp_fs_list_icon_d

0xd70e,	// (0x0003ba02) aid_sp_fs_text_primary

0xd717,	// (0x0003ba0b) aid_sp_fs_text_secondary

0x7444,	// (0x00035738) list_medium_line

0x7444,	// (0x00035738) list_medium_line_g2

0x7444,	// (0x00035738) list_medium_line_g3

0x7444,	// (0x00035738) list_medium_line_plain

0x7444,	// (0x00035738) list_medium_line_plain_t2

0x7444,	// (0x00035738) list_medium_line_plain_t3

0x7444,	// (0x00035738) list_medium_line_right_icon

0x7444,	// (0x00035738) list_medium_line_right_iconx2

0x7444,	// (0x00035738) list_medium_line_t2

0x7444,	// (0x00035738) list_medium_line_t2_g2

0x7444,	// (0x00035738) list_medium_line_t2_g3

0x7444,	// (0x00035738) list_medium_line_t2_right_icon

0x7444,	// (0x00035738) list_medium_line_t2_right_iconx2

0x7444,	// (0x00035738) list_medium_line_t3

0x7444,	// (0x00035738) list_medium_line_t3_g2

0x7444,	// (0x00035738) list_medium_line_t3_g3

0x7444,	// (0x00035738) list_medium_line_t3_right_iconx2

0x744d,	// (0x00035741) list_medium_line_t4_g4

0x7444,	// (0x00035738) list_medium_line_x2

0x7444,	// (0x00035738) list_medium_line_x2_t2_g2

0x7444,	// (0x00035738) list_medium_line_x2_t2_g3

0x7444,	// (0x00035738) list_medium_line_x2_t2_g4

0x7444,	// (0x00035738) list_medium_line_x2_t3

0x7444,	// (0x00035738) list_medium_line_x2_t3_g2

0x7444,	// (0x00035738) list_medium_line_x2_t3_g3

0x7444,	// (0x00035738) list_medium_line_x2_t3_g4

0x7444,	// (0x00035738) list_medium_line_x2_t4_g2

0x7444,	// (0x00035738) list_medium_line_x2_t4_g4

0x7456,	// (0x0003574a) list_medium_line_x3

0x7456,	// (0x0003574a) list_medium_line_x3_t4

0x7456,	// (0x0003574a) list_medium_line_x3_t4_g4

0x744d,	// (0x00035741) list_medium_line_x4_t4

0x744d,	// (0x00035741) list_medium_line_x4_t4_g7

0x744d,	// (0x00035741) list_medium_line_x4_t5

0x745f,	// (0x00035753) list_single_fs_dyc_pane_ParamLimits

0x745f,	// (0x00035753) list_single_fs_dyc_pane

0x251b,	// (0x0003080f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x251b,	// (0x0003080f) list_medium_line_x4_t4_g7_g1

0x7b94,	// (0x00035e88) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7b94,	// (0x00035e88) list_medium_line_x4_t4_g7_g2

0x7ba0,	// (0x00035e94) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7ba0,	// (0x00035e94) list_medium_line_x4_t4_g7_g3

0x7baf,	// (0x00035ea3) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7baf,	// (0x00035ea3) list_medium_line_x4_t4_g7_g4

0x7bbb,	// (0x00035eaf) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7bbb,	// (0x00035eaf) list_medium_line_x4_t4_g7_g5

0x7bca,	// (0x00035ebe) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7bca,	// (0x00035ebe) list_medium_line_x4_t4_g7_g6

0x7bd9,	// (0x00035ecd) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7bd9,	// (0x00035ecd) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003dec4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003dec4) list_medium_line_x4_t4_g7_g

0x7be5,	// (0x00035ed9) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7be5,	// (0x00035ed9) list_medium_line_x4_t4_g7_t1

0x7bfa,	// (0x00035eee) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7bfa,	// (0x00035eee) list_medium_line_x4_t4_g7_t2

0x7c0f,	// (0x00035f03) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c0f,	// (0x00035f03) list_medium_line_x4_t4_g7_t3

0x7c24,	// (0x00035f18) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c24,	// (0x00035f18) list_medium_line_x4_t4_g7_t4

0x7c36,	// (0x00035f2a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c36,	// (0x00035f2a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003ded3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003ded3) list_medium_line_x4_t4_g7_t

0x7c48,	// (0x00035f3c) list_single_dyc_row_pane_ParamLimits

0x7c48,	// (0x00035f3c) list_single_dyc_row_pane

0x831e,	// (0x00036612) call5_gesture_pane_ParamLimits

0x831e,	// (0x00036612) call5_gesture_pane

0x8374,	// (0x00036668) call5_windows_pane_ParamLimits

0x8374,	// (0x00036668) call5_windows_pane

0x841f,	// (0x00036713) call5_swipe_1_pane_cp_ParamLimits

0x841f,	// (0x00036713) call5_swipe_1_pane_cp

0x842b,	// (0x0003671f) call5_swipe_2_pane_cp_ParamLimits

0x842b,	// (0x0003671f) call5_swipe_2_pane_cp

0xa3ad,	// (0x000386a1) call5_image_pane_cp

0x8437,	// (0x0003672b) popup_call5_audio_first_window_cp_ParamLimits

0x8437,	// (0x0003672b) popup_call5_audio_first_window_cp

0xe206,	// (0x0003c4fa) call5_swipe_1_pane_g1_cp_ParamLimits

0xe206,	// (0x0003c4fa) call5_swipe_1_pane_g1_cp

0xe246,	// (0x0003c53a) call5_swipe_1_pane_g2_cp

0xe21f,	// (0x0003c513) call5_swipe_1_pane_t1_cp_ParamLimits

0xe21f,	// (0x0003c513) call5_swipe_1_pane_t1_cp

0xe206,	// (0x0003c4fa) call5_swipe_2_pane_g1_cp_ParamLimits

0xe206,	// (0x0003c4fa) call5_swipe_2_pane_g1_cp

0xe24e,	// (0x0003c542) call5_swipe_2_pane_g2_cp

0xe256,	// (0x0003c54a) call5_swipe_2_pane_t1_cp_ParamLimits

0xe256,	// (0x0003c54a) call5_swipe_2_pane_t1_cp

0xa7c4,	// (0x00038ab8) main_sp_fs_email_pane

0xe26b,	// (0x0003c55f) main_sp_fs_listscroll_pane_te

0xe274,	// (0x0003c568) popup_sp_fs_action_menu_pane_ParamLimits

0xe274,	// (0x0003c568) popup_sp_fs_action_menu_pane

0xc69a,	// (0x0003a98e) bg_sp_fs_ctrlbar_pane_g1

0xe2b6,	// (0x0003c5aa) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2bf,	// (0x0003c5b3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe2c8,	// (0x0003c5bc) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc69a,	// (0x0003a98e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003dfc1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc47d,	// (0x0003a771) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc47d,	// (0x0003a771) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2d1,	// (0x0003c5c5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2d1,	// (0x0003c5c5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2dd,	// (0x0003c5d1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2dd,	// (0x0003c5d1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003dfca) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003dfca) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe2e9,	// (0x0003c5dd) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe2e9,	// (0x0003c5dd) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8445,	// (0x00036739) list_medium_line_t2_right_icon_g1

0x844d,	// (0x00036741) list_medium_line_t2_right_icon_t1

0x845d,	// (0x00036751) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003dfcf) list_medium_line_t2_right_icon_t

0xc290,	// (0x0003a584) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc290,	// (0x0003a584) bg_sp_fs_ctrlbar_pane

0x84b7,	// (0x000367ab) main_sp_fs_ctrlbar_button_pane_cp01

0x84c1,	// (0x000367b5) main_sp_fs_ctrlbar_ddmenu_pane

0xe33b,	// (0x0003c62f) main_sp_fs_ctrlbar_pane_g1

0xe347,	// (0x0003c63b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003dfd4) main_sp_fs_ctrlbar_pane_g

0xe353,	// (0x0003c647) main_sp_fs_ctrlbar_pane_t1

0x84cb,	// (0x000367bf) main_sp_fs_ctrlbar_pane

0x84ef,	// (0x000367e3) main_sp_fs_listscroll_pane_te_cp01

0x850f,	// (0x00036803) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x850f,	// (0x00036803) popup_sp_fs_action_menu_pane_cp01

0xa7c4,	// (0x00038ab8) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa7c4,	// (0x00038ab8) bg_sp_fs_highlight_list_pane_cp01

0xe383,	// (0x0003c677) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe383,	// (0x0003c677) sp_fs_action_menu_list_gene_pane_g1

0xe392,	// (0x0003c686) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe392,	// (0x0003c686) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003dfde) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003dfde) sp_fs_action_menu_list_gene_pane_g

0xe39f,	// (0x0003c693) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe39f,	// (0x0003c693) sp_fs_action_menu_list_gene_pane_t1

0xe3b7,	// (0x0003c6ab) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3b7,	// (0x0003c6ab) sp_fs_action_menu_list_gene_pane

0xe3d4,	// (0x0003c6c8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3d4,	// (0x0003c6c8) popup_sp_fs_action_menu_bg_pane

0xe3e2,	// (0x0003c6d6) sp_fs_action_menu_list_pane_ParamLimits

0xe3e2,	// (0x0003c6d6) sp_fs_action_menu_list_pane

0xe400,	// (0x0003c6f4) sp_fs_scroll_pane_cp01_ParamLimits

0xe400,	// (0x0003c6f4) sp_fs_scroll_pane_cp01

0x853f,	// (0x00036833) list_medium_line_plain_t2_t1

0x854f,	// (0x00036843) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003dfe3) list_medium_line_plain_t2_t

0x855f,	// (0x00036853) list_medium_line_plain_t3_t1

0x856f,	// (0x00036863) list_medium_line_plain_t3_t2

0x857d,	// (0x00036871) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003dfe8) list_medium_line_plain_t3_t

0x251b,	// (0x0003080f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x251b,	// (0x0003080f) list_medium_line_x2_t2_g2_g1

0x2533,	// (0x00030827) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2533,	// (0x00030827) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0003d53a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0003d53a) list_medium_line_x2_t2_g2_g

0x380e,	// (0x00031b02) list_medium_line_x2_t2_g2_t1_ParamLimits

0x380e,	// (0x00031b02) list_medium_line_x2_t2_g2_t1

0x2568,	// (0x0003085c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2568,	// (0x0003085c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003dfef) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003dfef) list_medium_line_x2_t2_g2_t

0x251b,	// (0x0003080f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x251b,	// (0x0003080f) list_medium_line_x2_t4_g2_g1

0x2533,	// (0x00030827) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2533,	// (0x00030827) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0003d53a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0003d53a) list_medium_line_x2_t4_g2_g

0x858b,	// (0x0003687f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x858b,	// (0x0003687f) list_medium_line_x2_t4_g2_t1

0x85a5,	// (0x00036899) list_medium_line_x2_t4_g2_t2_ParamLimits

0x85a5,	// (0x00036899) list_medium_line_x2_t4_g2_t2

0x85ba,	// (0x000368ae) list_medium_line_x2_t4_g2_t3_ParamLimits

0x85ba,	// (0x000368ae) list_medium_line_x2_t4_g2_t3

0x2568,	// (0x0003085c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2568,	// (0x0003085c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003dff4) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003dff4) list_medium_line_x2_t4_g2_t

0x85cf,	// (0x000368c3) list_medium_line_t3_right_iconx2_g1

0x8445,	// (0x00036739) list_medium_line_t3_right_iconx2_g2

0x85d7,	// (0x000368cb) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003dffd) list_medium_line_t3_right_iconx2_g

0x85e1,	// (0x000368d5) list_medium_line_t3_right_iconx2_t1

0x85f1,	// (0x000368e5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003e004) list_medium_line_t3_right_iconx2_t

0x251b,	// (0x0003080f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x251b,	// (0x0003080f) list_medium_line_x3_t4_g4_g1

0x2527,	// (0x0003081b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2527,	// (0x0003081b) list_medium_line_x3_t4_g4_g2

0x37f6,	// (0x00031aea) list_medium_line_x3_t4_g4_g3_ParamLimits

0x37f6,	// (0x00031aea) list_medium_line_x3_t4_g4_g3

0x85ff,	// (0x000368f3) list_medium_line_x3_t4_g4_g4_ParamLimits

0x85ff,	// (0x000368f3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003e009) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003e009) list_medium_line_x3_t4_g4_g

0x860b,	// (0x000368ff) list_medium_line_x3_t4_g4_t1_ParamLimits

0x860b,	// (0x000368ff) list_medium_line_x3_t4_g4_t1

0x8622,	// (0x00036916) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8622,	// (0x00036916) list_medium_line_x3_t4_g4_t2

0x863d,	// (0x00036931) list_medium_line_x3_t4_g4_t3_ParamLimits

0x863d,	// (0x00036931) list_medium_line_x3_t4_g4_t3

0x8652,	// (0x00036946) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8652,	// (0x00036946) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003e012) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003e012) list_medium_line_x3_t4_g4_t

0x866f,	// (0x00036963) list_single_dyc_row_text_pane_t1_ParamLimits

0x866f,	// (0x00036963) list_single_dyc_row_text_pane_t1

0x86b8,	// (0x000369ac) list_single_dyc_row_text_pane_t2_ParamLimits

0x86b8,	// (0x000369ac) list_single_dyc_row_text_pane_t2

0xe426,	// (0x0003c71a) list_single_dyc_row_text_pane_t3_ParamLimits

0xe426,	// (0x0003c71a) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003e01b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003e01b) list_single_dyc_row_text_pane_t

0xe44a,	// (0x0003c73e) list_single_dyc_row_pane_g1_ParamLimits

0xe44a,	// (0x0003c73e) list_single_dyc_row_pane_g1

0xe456,	// (0x0003c74a) list_single_dyc_row_pane_g2_ParamLimits

0xe456,	// (0x0003c74a) list_single_dyc_row_pane_g2

0xe462,	// (0x0003c756) list_single_dyc_row_pane_g3_ParamLimits

0xe462,	// (0x0003c756) list_single_dyc_row_pane_g3

0xe46e,	// (0x0003c762) list_single_dyc_row_pane_g4_ParamLimits

0xe46e,	// (0x0003c762) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003e028) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003e028) list_single_dyc_row_pane_g

0xe47a,	// (0x0003c76e) list_single_dyc_row_text_pane_ParamLimits

0xe47a,	// (0x0003c76e) list_single_dyc_row_text_pane

0x9a83,	// (0x00037d77) bg_sp_fs_scroll_pane

0xe499,	// (0x0003c78d) thumb_sp_fs_scroll_pane

0x6dce,	// (0x000350c2) list_medium_line_g1_ParamLimits

0x6dce,	// (0x000350c2) list_medium_line_g1

0x87ed,	// (0x00036ae1) list_medium_line_t1_ParamLimits

0x87ed,	// (0x00036ae1) list_medium_line_t1

0x251b,	// (0x0003080f) list_medium_line_x2_g1_ParamLimits

0x251b,	// (0x0003080f) list_medium_line_x2_g1

0x2527,	// (0x0003081b) list_medium_line_x2_g2_ParamLimits

0x2527,	// (0x0003081b) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003e031) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003e031) list_medium_line_x2_g

0xe4a2,	// (0x0003c796) list_medium_line_x2_t1_ParamLimits

0xe4a2,	// (0x0003c796) list_medium_line_x2_t1

0x251b,	// (0x0003080f) list_medium_line_x3_g1_ParamLimits

0x251b,	// (0x0003080f) list_medium_line_x3_g1

0x2527,	// (0x0003081b) list_medium_line_x3_g2_ParamLimits

0x2527,	// (0x0003081b) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003e031) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003e031) list_medium_line_x3_g

0xe4a2,	// (0x0003c796) list_medium_line_x3_t1_ParamLimits

0xe4a2,	// (0x0003c796) list_medium_line_x3_t1

0xe4b8,	// (0x0003c7ac) thumb_sp_fs_scroll_pane_g1

0xe4c1,	// (0x0003c7b5) thumb_sp_fs_scroll_pane_g2

0xe4ca,	// (0x0003c7be) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003e036) thumb_sp_fs_scroll_pane_g

0xe4b8,	// (0x0003c7ac) bg_sp_fs_scroll_pane_g1

0xe4c1,	// (0x0003c7b5) bg_sp_fs_scroll_pane_g2

0xe4ca,	// (0x0003c7be) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003e036) bg_sp_fs_scroll_pane_g

0x251b,	// (0x0003080f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x251b,	// (0x0003080f) list_medium_line_x2_t3_g4_g1

0x25c3,	// (0x000308b7) list_medium_line_x2_t3_g4_g2_ParamLimits

0x25c3,	// (0x000308b7) list_medium_line_x2_t3_g4_g2

0x2527,	// (0x0003081b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2527,	// (0x0003081b) list_medium_line_x2_t3_g4_g3

0x2533,	// (0x00030827) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2533,	// (0x00030827) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0003d5b6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0003d5b6) list_medium_line_x2_t3_g4_g

0x8802,	// (0x00036af6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8802,	// (0x00036af6) list_medium_line_x2_t3_g4_t1

0x881c,	// (0x00036b10) list_medium_line_x2_t3_g4_t2_ParamLimits

0x881c,	// (0x00036b10) list_medium_line_x2_t3_g4_t2

0x2568,	// (0x0003085c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2568,	// (0x0003085c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003e03d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003e03d) list_medium_line_x2_t3_g4_t

0x6dce,	// (0x000350c2) list_medium_line_g2_g1_ParamLimits

0x6dce,	// (0x000350c2) list_medium_line_g2_g1

0x6dda,	// (0x000350ce) list_medium_line_g2_g2_ParamLimits

0x6dda,	// (0x000350ce) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003dcf4) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003dcf4) list_medium_line_g2_g

0x8835,	// (0x00036b29) list_medium_line_g2_t1_ParamLimits

0x8835,	// (0x00036b29) list_medium_line_g2_t1

0x6dce,	// (0x000350c2) list_medium_line_t3_g2_g1_ParamLimits

0x6dce,	// (0x000350c2) list_medium_line_t3_g2_g1

0x6dda,	// (0x000350ce) list_medium_line_t3_g2_g2_ParamLimits

0x6dda,	// (0x000350ce) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003dcf4) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003dcf4) list_medium_line_t3_g2_g

0x884a,	// (0x00036b3e) list_medium_line_t3_g2_t1_ParamLimits

0x884a,	// (0x00036b3e) list_medium_line_t3_g2_t1

0x8861,	// (0x00036b55) list_medium_line_t3_g2_t2_ParamLimits

0x8861,	// (0x00036b55) list_medium_line_t3_g2_t2

0x8876,	// (0x00036b6a) list_medium_line_t3_g2_t3_ParamLimits

0x8876,	// (0x00036b6a) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003e044) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003e044) list_medium_line_t3_g2_t

0x8445,	// (0x00036739) list_medium_line_right_icon_g1

0x888f,	// (0x00036b83) list_medium_line_right_icon_t1

0x6dce,	// (0x000350c2) list_medium_line_t2_g1_ParamLimits

0x6dce,	// (0x000350c2) list_medium_line_t2_g1

0x889d,	// (0x00036b91) list_medium_line_t2_t1_ParamLimits

0x889d,	// (0x00036b91) list_medium_line_t2_t1

0x88b7,	// (0x00036bab) list_medium_line_t2_t2_ParamLimits

0x88b7,	// (0x00036bab) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003e04b) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003e04b) list_medium_line_t2_t

0x6dce,	// (0x000350c2) list_medium_line_t3_g1_ParamLimits

0x6dce,	// (0x000350c2) list_medium_line_t3_g1

0x88d0,	// (0x00036bc4) list_medium_line_t3_t1_ParamLimits

0x88d0,	// (0x00036bc4) list_medium_line_t3_t1

0x88e7,	// (0x00036bdb) list_medium_line_t3_t2_ParamLimits

0x88e7,	// (0x00036bdb) list_medium_line_t3_t2

0x88fc,	// (0x00036bf0) list_medium_line_t3_t3_ParamLimits

0x88fc,	// (0x00036bf0) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003e050) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003e050) list_medium_line_t3_t

0x6dce,	// (0x000350c2) list_medium_line_g3_g1_ParamLimits

0x6dce,	// (0x000350c2) list_medium_line_g3_g1

0x890e,	// (0x00036c02) list_medium_line_g3_g2_ParamLimits

0x890e,	// (0x00036c02) list_medium_line_g3_g2

0x6dda,	// (0x000350ce) list_medium_line_g3_g3_ParamLimits

0x6dda,	// (0x000350ce) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003e057) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003e057) list_medium_line_g3_g

0x891a,	// (0x00036c0e) list_medium_line_g3_t1_ParamLimits

0x891a,	// (0x00036c0e) list_medium_line_g3_t1

0x6dce,	// (0x000350c2) list_medium_line_t2_g3_g1_ParamLimits

0x6dce,	// (0x000350c2) list_medium_line_t2_g3_g1

0x890e,	// (0x00036c02) list_medium_line_t2_g3_g2_ParamLimits

0x890e,	// (0x00036c02) list_medium_line_t2_g3_g2

0x6dda,	// (0x000350ce) list_medium_line_t2_g3_g3_ParamLimits

0x6dda,	// (0x000350ce) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003e057) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003e057) list_medium_line_t2_g3_g

0x892f,	// (0x00036c23) list_medium_line_t2_g3_t1_ParamLimits

0x892f,	// (0x00036c23) list_medium_line_t2_g3_t1

0x8946,	// (0x00036c3a) list_medium_line_t2_g3_t2_ParamLimits

0x8946,	// (0x00036c3a) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003e05e) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003e05e) list_medium_line_t2_g3_t

0x6dce,	// (0x000350c2) list_medium_line_t3_g3_g1_ParamLimits

0x6dce,	// (0x000350c2) list_medium_line_t3_g3_g1

0x890e,	// (0x00036c02) list_medium_line_t3_g3_g2_ParamLimits

0x890e,	// (0x00036c02) list_medium_line_t3_g3_g2

0x6dda,	// (0x000350ce) list_medium_line_t3_g3_g3_ParamLimits

0x6dda,	// (0x000350ce) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003e057) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003e057) list_medium_line_t3_g3_g

0x8961,	// (0x00036c55) list_medium_line_t3_g3_t1_ParamLimits

0x8961,	// (0x00036c55) list_medium_line_t3_g3_t1

0x8975,	// (0x00036c69) list_medium_line_t3_g3_t2_ParamLimits

0x8975,	// (0x00036c69) list_medium_line_t3_g3_t2

0x8987,	// (0x00036c7b) list_medium_line_t3_g3_t3_ParamLimits

0x8987,	// (0x00036c7b) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003e063) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003e063) list_medium_line_t3_g3_t

0x85cf,	// (0x000368c3) list_medium_line_right_iconx2_g1

0x8445,	// (0x00036739) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003e06a) list_medium_line_right_iconx2_g

0x899b,	// (0x00036c8f) list_medium_line_right_iconx2_t1

0x85cf,	// (0x000368c3) list_medium_line_t2_right_iconx2_g1

0x8445,	// (0x00036739) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003e06a) list_medium_line_t2_right_iconx2_g

0x89a9,	// (0x00036c9d) list_medium_line_t2_right_iconx2_t1

0x89b9,	// (0x00036cad) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003e06f) list_medium_line_t2_right_iconx2_t

0x89cb,	// (0x00036cbf) list_medium_line_x4_t4_t1

0x89d9,	// (0x00036ccd) list_medium_line_x4_t4_t2

0x89e9,	// (0x00036cdd) list_medium_line_x4_t4_t3

0x89f9,	// (0x00036ced) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003e074) list_medium_line_x4_t4_t

0x8a4c,	// (0x00036d40) tport_appsw_pane_ParamLimits

0x8a4c,	// (0x00036d40) tport_appsw_pane

0x8a64,	// (0x00036d58) tport_contact_pane_ParamLimits

0x8a64,	// (0x00036d58) tport_contact_pane

0x8a7c,	// (0x00036d70) tport_listscroll_pane_ParamLimits

0x8a7c,	// (0x00036d70) tport_listscroll_pane

0x8a96,	// (0x00036d8a) cell_tport_appsw_pane_ParamLimits

0x8a96,	// (0x00036d8a) cell_tport_appsw_pane

0xd17d,	// (0x0003b471) tport_appsw_pane_g1_ParamLimits

0xd17d,	// (0x0003b471) tport_appsw_pane_g1

0xe4d3,	// (0x0003c7c7) tport_contact_pane_g1

0xdd0e,	// (0x0003c002) tport_contact_pane_t1

0xe4dc,	// (0x0003c7d0) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003e07d) tport_contact_pane_t

0xe4ea,	// (0x0003c7de) list_tport_pane

0xe4f3,	// (0x0003c7e7) scroll_pane_cp_030

0x8ade,	// (0x00036dd2) cell_tport_appsw_pane_g1

0x8aee,	// (0x00036de2) cell_tport_appsw_pane_t1

0x8afc,	// (0x00036df0) grid_highlight_pane_cp019

0x8b04,	// (0x00036df8) list_tport_double_graphic_pane_ParamLimits

0x8b04,	// (0x00036df8) list_tport_double_graphic_pane

0xa7c4,	// (0x00038ab8) list_highlight_pane_cp023_ParamLimits

0xa7c4,	// (0x00038ab8) list_highlight_pane_cp023

0x8b11,	// (0x00036e05) list_tport_double_graphic_pane_g1_ParamLimits

0x8b11,	// (0x00036e05) list_tport_double_graphic_pane_g1

0x8b1e,	// (0x00036e12) list_tport_double_graphic_pane_t1_ParamLimits

0x8b1e,	// (0x00036e12) list_tport_double_graphic_pane_t1

0x8b33,	// (0x00036e27) list_tport_double_graphic_pane_t2_ParamLimits

0x8b33,	// (0x00036e27) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003e089) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003e089) list_tport_double_graphic_pane_t

0x9a83,	// (0x00037d77) main_cale_note_pane

0x1402,	// (0x0002f6f6) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1402,	// (0x0002f6f6) cell_vitu2_function_top_wide_pane_cp01

0x7fc7,	// (0x000362bb) wait_bar_pane_cp05_ParamLimits

0xa7c4,	// (0x00038ab8) listscroll_cmail_pane

0xe4fc,	// (0x0003c7f0) list_cmail_pane

0x8b45,	// (0x00036e39) list_cmail_body_pane

0x8b5a,	// (0x00036e4e) list_single_cmail_header_caption_pane

0x8b73,	// (0x00036e67) list_single_cmail_header_detail_pane_ParamLimits

0x8b73,	// (0x00036e67) list_single_cmail_header_detail_pane

0xe50c,	// (0x0003c800) list_single_cmail_header_caption_pane_t1

0x8b9c,	// (0x00036e90) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8b9c,	// (0x00036e90) list_single_cmail_header_detail_pane_g1

0xe523,	// (0x0003c817) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe523,	// (0x0003c817) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003e08e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003e08e) list_single_cmail_header_detail_pane_g

0xe53c,	// (0x0003c830) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe53c,	// (0x0003c830) list_single_cmail_header_detail_pane_t1

0xe59c,	// (0x0003c890) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe59c,	// (0x0003c890) list_single_cmail_header_editor_pane_bg

0xe5b3,	// (0x0003c8a7) list_cmail_body_pane_g1

0xe5bc,	// (0x0003c8b0) list_cmail_body_pane_t1

0xd1ba,	// (0x0003b4ae) list_single_cmail_header_editor_pane_bg_g1

0xa606,	// (0x000388fa) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1ca,	// (0x0003b4be) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1c2,	// (0x0003b4b6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3de,	// (0x0003b6d2) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1ea,	// (0x0003b4de) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1da,	// (0x0003b4ce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1e2,	// (0x0003b4d6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa5e6,	// (0x000388da) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8bb4,	// (0x00036ea8) calenote_gesture_pane_ParamLimits

0x8bb4,	// (0x00036ea8) calenote_gesture_pane

0x8bd4,	// (0x00036ec8) calenote_window_pane_ParamLimits

0x8bd4,	// (0x00036ec8) calenote_window_pane

0xe5ca,	// (0x0003c8be) popup_note_window_cp01

0x8bf0,	// (0x00036ee4) calenote_swipe_1_pane_ParamLimits

0x8bf0,	// (0x00036ee4) calenote_swipe_1_pane

0x842b,	// (0x0003671f) calenote_swipe_2_pane_ParamLimits

0x842b,	// (0x0003671f) calenote_swipe_2_pane

0xe206,	// (0x0003c4fa) calenote_swipe_1_pane_g1_ParamLimits

0xe206,	// (0x0003c4fa) calenote_swipe_1_pane_g1

0xe213,	// (0x0003c507) calenote_swipe_1_pane_g2_ParamLimits

0xe213,	// (0x0003c507) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003dfb7) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003dfb7) calenote_swipe_1_pane_g

0xe5dc,	// (0x0003c8d0) calenote_swipe_1_pane_t1_ParamLimits

0xe5dc,	// (0x0003c8d0) calenote_swipe_1_pane_t1

0xe206,	// (0x0003c4fa) calenote_swipe_2_pane_g1_ParamLimits

0xe206,	// (0x0003c4fa) calenote_swipe_2_pane_g1

0xe5fb,	// (0x0003c8ef) calenote_swipe_2_pane_g2_ParamLimits

0xe5fb,	// (0x0003c8ef) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003e09a) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003e09a) calenote_swipe_2_pane_g

0xe607,	// (0x0003c8fb) calenote_swipe_2_pane_t1_ParamLimits

0xe607,	// (0x0003c8fb) calenote_swipe_2_pane_t1

0x9a83,	// (0x00037d77) main_mup_navstr_pane

0x56f9,	// (0x000339ed) main_mup3_pane_t7_ParamLimits

0x56f9,	// (0x000339ed) main_mup3_pane_t7

0x613b,	// (0x0003442f) main_mp4_pane_g6_ParamLimits

0x613b,	// (0x0003442f) main_mp4_pane_g6

0x6384,	// (0x00034678) main_image3_pane_t4_ParamLimits

0x6384,	// (0x00034678) main_image3_pane_t4

0x8c05,	// (0x00036ef9) popup_navstr_preview_pane_ParamLimits

0x8c05,	// (0x00036ef9) popup_navstr_preview_pane

0x8c19,	// (0x00036f0d) scroll_navstr_pane_ParamLimits

0x8c19,	// (0x00036f0d) scroll_navstr_pane

0x9a83,	// (0x00037d77) bg_popup_preview_window_pane_cp04

0xe62e,	// (0x0003c922) popup_navstr_preview_pane_t1

0x8c2d,	// (0x00036f21) scroll_navstr_pane_g1_ParamLimits

0x8c2d,	// (0x00036f21) scroll_navstr_pane_g1

0x8c41,	// (0x00036f35) scroll_navstr_pane_t1_ParamLimits

0x8c41,	// (0x00036f35) scroll_navstr_pane_t1

0xe5d3,	// (0x0003c8c7) bg_button_pane_cp014

0xe5d3,	// (0x0003c8c7) bg_button_pane_cp030

0x82c9,	// (0x000365bd) list_double_fisheye_pane_g4_ParamLimits

0x82c9,	// (0x000365bd) list_double_fisheye_pane_g4

0x82d5,	// (0x000365c9) list_double_fisheye_pane_g5_ParamLimits

0x82d5,	// (0x000365c9) list_double_fisheye_pane_g5

0xd00c,	// (0x0003b300) sp_fs_scroll_pane_cp03

0xe33b,	// (0x0003c62f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe347,	// (0x0003c63b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003dfd4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe353,	// (0x0003c647) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe504,	// (0x0003c7f8) sp_fs_scroll_pane_cp02

0xa2f5,	// (0x000385e9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa2f5,	// (0x000385e9) popup_sp_fs_calendar_preview_list_single_pane

0x9a83,	// (0x00037d77) main_cam6_pano_pane

0x1806,	// (0x0002fafa) main_mup3_pane_ParamLimits

0x9a83,	// (0x00037d77) main_phacti_pane

0x7e9a,	// (0x0003618e) bg_button_pane_cp11

0x7eb4,	// (0x000361a8) main_mobtv_info_pane_g2_ParamLimits

0x7eb4,	// (0x000361a8) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003df34) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003df34) main_mobtv_info_pane_g

0x8091,	// (0x00036385) sc_clock_pane_t5_ParamLimits

0x8091,	// (0x00036385) sc_clock_pane_t5

0x814c,	// (0x00036440) main_radioblah_pane_g1_ParamLimits

0xe152,	// (0x0003c446) main_radioblah_pane_t3_ParamLimits

0xe152,	// (0x0003c446) main_radioblah_pane_t3

0xe16a,	// (0x0003c45e) main_radioblah_pane_t4_ParamLimits

0xe16a,	// (0x0003c45e) main_radioblah_pane_t4

0x8174,	// (0x00036468) main_radioblah_text_pane_ParamLimits

0x8174,	// (0x00036468) main_radioblah_text_pane

0x8186,	// (0x0003647a) main_radioblah_info_pane_g1_ParamLimits

0x821f,	// (0x00036513) main_radioblah_info_pane_t4_ParamLimits

0x821f,	// (0x00036513) main_radioblah_info_pane_t4

0xa7c4,	// (0x00038ab8) main_sp_fs_calendar_pane

0x8c57,	// (0x00036f4b) main_phacti_pane_g1

0x8c5f,	// (0x00036f53) phacti_note_pane_ParamLimits

0x8c5f,	// (0x00036f53) phacti_note_pane

0xe645,	// (0x0003c939) phacti_term_pane_ParamLimits

0xe645,	// (0x0003c939) phacti_term_pane

0xe65a,	// (0x0003c94e) phacti_note_pane_t1_ParamLimits

0xe65a,	// (0x0003c94e) phacti_note_pane_t1

0xe671,	// (0x0003c965) phacti_term_pane_g1

0xe679,	// (0x0003c96d) phacti_term_pane_t1_ParamLimits

0xe679,	// (0x0003c96d) phacti_term_pane_t1

0xe6a3,	// (0x0003c997) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe6ab,	// (0x0003c99f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003e0a4) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6b3,	// (0x0003c9a7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6b3,	// (0x0003c9a7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe6c9,	// (0x0003c9bd) aid_popup_sp_fs_bg_corner_pane

0xc69a,	// (0x0003a98e) popup_sp_fs_calendar_preview_bg_pane_g1

0x9a83,	// (0x00037d77) popup_sp_fs_calendar_preview_bg_pane

0x23a4,	// (0x00030698) popup_sp_fs_calendar_preview_list_pane

0xc290,	// (0x0003a584) bg_main_sp_fs_cale_pane_ParamLimits

0xc290,	// (0x0003a584) bg_main_sp_fs_cale_pane

0xe6da,	// (0x0003c9ce) listscroll_cale_mrui_pane_ParamLimits

0xe6da,	// (0x0003c9ce) listscroll_cale_mrui_pane

0xe6ef,	// (0x0003c9e3) listscroll_sp_fs_schedule_track_pane

0xe6f8,	// (0x0003c9ec) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe6f8,	// (0x0003c9ec) main_sp_fs_ctrlbar_pane_cp01

0xe70b,	// (0x0003c9ff) main_sp_fs_ribbon_pane

0xe713,	// (0x0003ca07) popup_sp_fs_cale_preview_window

0x8cd4,	// (0x00036fc8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8cd4,	// (0x00036fc8) list_single_sp_fs_schedule_track_pane

0xa7c4,	// (0x00038ab8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa7c4,	// (0x00038ab8) bg_sp_fs_highlight_list_pane_cp03

0x8cea,	// (0x00036fde) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8cea,	// (0x00036fde) list_single_sp_fs_schedule_track_pane_g1

0x8cf6,	// (0x00036fea) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8cf6,	// (0x00036fea) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003e0a9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003e0a9) list_single_sp_fs_schedule_track_pane_g

0x8d02,	// (0x00036ff6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d02,	// (0x00036ff6) list_single_sp_fs_schedule_track_pane_t1

0x8d1c,	// (0x00037010) sp_fs_schedule_track_pane_ParamLimits

0x8d1c,	// (0x00037010) sp_fs_schedule_track_pane

0xe725,	// (0x0003ca19) sp_fs_schedule_track_pane_g1

0xe72d,	// (0x0003ca21) sp_fs_schedule_track_pane_g2

0xe735,	// (0x0003ca29) sp_fs_schedule_track_pane_g3

0xe73d,	// (0x0003ca31) sp_fs_schedule_track_pane_g4

0xe745,	// (0x0003ca39) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003e0ae) sp_fs_schedule_track_pane_g

0xd1ba,	// (0x0003b4ae) bg_sp_fs_schedule_viewer_highlight_g1

0xa606,	// (0x000388fa) bg_sp_fs_schedule_viewer_highlight_g2

0xd1c2,	// (0x0003b4b6) bg_sp_fs_schedule_viewer_highlight_g3

0xd1ca,	// (0x0003b4be) bg_sp_fs_schedule_viewer_highlight_g4

0xd3de,	// (0x0003b6d2) bg_sp_fs_schedule_viewer_highlight_g5

0xd1da,	// (0x0003b4ce) bg_sp_fs_schedule_viewer_highlight_g6

0xd1e2,	// (0x0003b4d6) bg_sp_fs_schedule_viewer_highlight_g7

0xd1ea,	// (0x0003b4de) bg_sp_fs_schedule_viewer_highlight_g8

0xa5e6,	// (0x000388da) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003e0b9) bg_sp_fs_schedule_viewer_highlight_g

0x9a83,	// (0x00037d77) bg_main_sp_fs_ribbon_pane

0x8d2d,	// (0x00037021) main_sp_fs_ribbon_pane_g1

0xe74d,	// (0x0003ca41) main_sp_fs_ribbon_pane_t1

0x8d36,	// (0x0003702a) main_sp_fs_ribbon_pane_t2

0xe75c,	// (0x0003ca50) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003e0cc) main_sp_fs_ribbon_pane_t

0xe76b,	// (0x0003ca5f) main_sp_fs_ribbon_scheduler_pane

0xe773,	// (0x0003ca67) bg_main_sp_fs_ribbon_pane_g1

0xe77c,	// (0x0003ca70) bg_main_sp_fs_ribbon_pane_g2

0xe785,	// (0x0003ca79) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003e0d3) bg_main_sp_fs_ribbon_pane_g

0xe78d,	// (0x0003ca81) main_sp_fs_ribbon_scheduler_pane_g1

0xe796,	// (0x0003ca8a) main_sp_fs_ribbon_scheduler_pane_g2

0xe79f,	// (0x0003ca93) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003e0da) main_sp_fs_ribbon_scheduler_pane_g

0xe7a8,	// (0x0003ca9c) list_cale_mrui_pane

0x8d45,	// (0x00037039) sp_fs_scroll_pane_cp07_ParamLimits

0x8d45,	// (0x00037039) sp_fs_scroll_pane_cp07

0x8d61,	// (0x00037055) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8d61,	// (0x00037055) bg_sp_fs_schedule_viewer_highlight

0xe7b5,	// (0x0003caa9) list_single_sp_fs_schedule_track_pane_cp01

0xe7bd,	// (0x0003cab1) list_sp_fs_schedule_track_pane

0xe7c5,	// (0x0003cab9) sp_fs_scroll_pane_cp06_ParamLimits

0xe7c5,	// (0x0003cab9) sp_fs_scroll_pane_cp06

0xc69a,	// (0x0003a98e) bgmain_sp_fs_calendar_pane_g1

0x8d71,	// (0x00037065) list_single_cale_mrui_pane_ParamLimits

0x8d71,	// (0x00037065) list_single_cale_mrui_pane

0xe7d7,	// (0x0003cacb) list_single_cale_mrui_row_pane_ParamLimits

0xe7d7,	// (0x0003cacb) list_single_cale_mrui_row_pane

0xe7e4,	// (0x0003cad8) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe7e4,	// (0x0003cad8) list_single_cale_mrui_row_pane_g1

0xe829,	// (0x0003cb1d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe829,	// (0x0003cb1d) list_single_cale_mrui_row_pane_t1

0x8d93,	// (0x00037087) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8d93,	// (0x00037087) list_single_cale_mrui_row_pane_t2

0xe83b,	// (0x0003cb2f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe83b,	// (0x0003cb2f) list_single_cale_mrui_row_pane_t3

0xe86a,	// (0x0003cb5e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe86a,	// (0x0003cb5e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003e0e8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003e0e8) list_single_cale_mrui_row_pane_t

0x8dfb,	// (0x000370ef) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8dfb,	// (0x000370ef) list_single_cmail_header_editor_pane_bg_cp01

0x8e21,	// (0x00037115) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e21,	// (0x00037115) list_single_cmail_header_editor_pane_bg_cp02

0x8e41,	// (0x00037135) main_radioblah_text_pane_t1_ParamLimits

0x8e41,	// (0x00037135) main_radioblah_text_pane_t1

0xe899,	// (0x0003cb8d) cam6_indi_pane_cp01

0xe8a1,	// (0x0003cb95) cam6_mode_pane_cp01

0xe8a9,	// (0x0003cb9d) cam6_pano_pane

0xe8b2,	// (0x0003cba6) cam6_zoom_pane_cp01

0xe8ba,	// (0x0003cbae) cam6_pano_image_pane

0xe8c5,	// (0x0003cbb9) cam6_pano_pane_g1

0xdeb5,	// (0x0003c1a9) cam6_pano_pane_g2

0xe8ce,	// (0x0003cbc2) cam6_pano_pane_g3

0xe8d7,	// (0x0003cbcb) cam6_pano_pane_g4

0xcccc,	// (0x0003afc0) cam6_pano_pane_g5

0xe8e0,	// (0x0003cbd4) cam6_pano_pane_g6

0xe8ea,	// (0x0003cbde) cam6_pano_pane_g7

0xe8f2,	// (0x0003cbe6) cam6_pano_pane_g8

0xe8fb,	// (0x0003cbef) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003e0f1) cam6_pano_pane_g

0x9a83,	// (0x00037d77) main_browser_tag_pane

0xe626,	// (0x0003c91a) grid_navstr_albumart_pane

0xe906,	// (0x0003cbfa) cell_navstr_albumart_pane_ParamLimits

0xe906,	// (0x0003cbfa) cell_navstr_albumart_pane

0xaf9e,	// (0x00039292) cell_navstr_albumart_pane_g1

0xc0a1,	// (0x0003a395) cell_navstr_albumart_pane_g2

0xc0b1,	// (0x0003a3a5) cell_navstr_albumart_pane_g3

0xc0a9,	// (0x0003a39d) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003e104) cell_navstr_albumart_pane_g

0x8e5c,	// (0x00037150) bt_list_pane_ParamLimits

0x8e5c,	// (0x00037150) bt_list_pane

0xe928,	// (0x0003cc1c) bt_list_pane_t1

0xe937,	// (0x0003cc2b) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003e10d) bt_list_pane_t

0x9a83,	// (0x00037d77) main_cale_prevew_pane

0x8e71,	// (0x00037165) popup_cale_preview_window_ParamLimits

0x8e71,	// (0x00037165) popup_cale_preview_window

0xa7c4,	// (0x00038ab8) bg_popup_preview_window_pane_cp05_ParamLimits

0xa7c4,	// (0x00038ab8) bg_popup_preview_window_pane_cp05

0xe946,	// (0x0003cc3a) list_cale_preview_pane_ParamLimits

0xe946,	// (0x0003cc3a) list_cale_preview_pane

0xe952,	// (0x0003cc46) list_double_cale_preview_pane_ParamLimits

0xe952,	// (0x0003cc46) list_double_cale_preview_pane

0xe964,	// (0x0003cc58) list_single_cale_preview_pane_ParamLimits

0xe964,	// (0x0003cc58) list_single_cale_preview_pane

0xe978,	// (0x0003cc6c) list_single_cale_preview_pane_g1

0xe980,	// (0x0003cc74) list_single_cale_preview_pane_t1_ParamLimits

0xe980,	// (0x0003cc74) list_single_cale_preview_pane_t1

0xe995,	// (0x0003cc89) list_double_cale_preview_pane_g1

0xe99d,	// (0x0003cc91) list_double_cale_preview_pane_t1_ParamLimits

0xe99d,	// (0x0003cc91) list_double_cale_preview_pane_t1

0xe9b2,	// (0x0003cca6) list_double_cale_preview_pane_t2_ParamLimits

0xe9b2,	// (0x0003cca6) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003e112) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003e112) list_double_cale_preview_pane_t

0x9a83,	// (0x00037d77) main_ezdial_pane

0xa7c4,	// (0x00038ab8) main_sp_fs_email_pane_ParamLimits

0x846f,	// (0x00036763) cmail_ddmenu_btn01_pane_ParamLimits

0x846f,	// (0x00036763) cmail_ddmenu_btn01_pane

0x8482,	// (0x00036776) cmail_ddmenu_btn02_pane_ParamLimits

0x8482,	// (0x00036776) cmail_ddmenu_btn02_pane

0x84a5,	// (0x00036799) cmail_ddmenu_btn03_pane_ParamLimits

0x84a5,	// (0x00036799) cmail_ddmenu_btn03_pane

0x84cb,	// (0x000367bf) main_sp_fs_ctrlbar_pane_ParamLimits

0x84ef,	// (0x000367e3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b45,	// (0x00036e39) list_cmail_body_pane_ParamLimits

0xe51a,	// (0x0003c80e) bg_button_pane_cp12

0xe52f,	// (0x0003c823) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe52f,	// (0x0003c823) list_single_cmail_header_detail_pane_g3

0xe578,	// (0x0003c86c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe578,	// (0x0003c86c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003e095) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003e095) list_single_cmail_header_detail_pane_t

0xe68e,	// (0x0003c982) phacti_term_pane_t2_ParamLimits

0xe68e,	// (0x0003c982) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003e09f) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003e09f) phacti_term_pane_t

0xe9ca,	// (0x0003ccbe) aid_size_list_single_double

0x8e8a,	// (0x0003717e) popup_ezdial_listscroll_window

0x8ea5,	// (0x00037199) popup_number_entry_window_cp01

0xa3ad,	// (0x000386a1) bg_popup_call_pane_cp09

0xe9d6,	// (0x0003ccca) ezdial_list_pane

0xe9de,	// (0x0003ccd2) scroll_pane_cp23

0xc290,	// (0x0003a584) bg_button_pane_cp028_ParamLimits

0xc290,	// (0x0003a584) bg_button_pane_cp028

0x8eb3,	// (0x000371a7) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8eb3,	// (0x000371a7) cmail_ddmenu_btn01_pane_g1

0x8ebf,	// (0x000371b3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8ebf,	// (0x000371b3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003e117) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003e117) cmail_ddmenu_btn01_pane_g

0xe9e6,	// (0x0003ccda) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9e6,	// (0x0003ccda) cmail_ddmenu_btn01_pane_t1

0xc290,	// (0x0003a584) bg_button_pane_cp029_ParamLimits

0xc290,	// (0x0003a584) bg_button_pane_cp029

0x8ecb,	// (0x000371bf) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8ecb,	// (0x000371bf) cmail_ddmenu_btn02_pane_g1

0x8ee3,	// (0x000371d7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8ee3,	// (0x000371d7) cmail_ddmenu_btn02_pane_t1

0xa7c4,	// (0x00038ab8) bg_button_pane_cp031_ParamLimits

0xa7c4,	// (0x00038ab8) bg_button_pane_cp031

0x8ecb,	// (0x000371bf) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8ecb,	// (0x000371bf) cmail_ddmenu_btn03_pane_g1

0x8ee3,	// (0x000371d7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8ee3,	// (0x000371d7) cmail_ddmenu_btn03_pane_t1

0x632d,	// (0x00034621) cell_dialer2_keypad_pane_t1_ParamLimits

0x6347,	// (0x0003463b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6347,	// (0x0003463b) cell_dialer2_keypad_pane_t1_copy1

0x7cf3,	// (0x00035fe7) ncimui_group_button_pane

0xa7c4,	// (0x00038ab8) main_sp_fs_calendar_pane_ParamLimits

0x8b5a,	// (0x00036e4e) list_single_cmail_header_caption_pane_ParamLimits

0xe6d1,	// (0x0003c9c5) aid_recal_txt_sm_pane

0x9a83,	// (0x00037d77) mian_recal_day_pane

0xe713,	// (0x0003ca07) popup_sp_fs_cale_preview_window_ParamLimits

0xe9fb,	// (0x0003ccef) list_recal_day_pane

0xea3d,	// (0x0003cd31) list_single_recal_day_pane_ParamLimits

0xea3d,	// (0x0003cd31) list_single_recal_day_pane

0xea4f,	// (0x0003cd43) list_single_recal_day_pane_g1_ParamLimits

0xea4f,	// (0x0003cd43) list_single_recal_day_pane_g1

0xea5b,	// (0x0003cd4f) list_single_recal_day_pane_g2_ParamLimits

0xea5b,	// (0x0003cd4f) list_single_recal_day_pane_g2

0xea6b,	// (0x0003cd5f) list_single_recal_day_pane_g3_ParamLimits

0xea6b,	// (0x0003cd5f) list_single_recal_day_pane_g3

0x8f07,	// (0x000371fb) list_single_recal_day_pane_g4_ParamLimits

0x8f07,	// (0x000371fb) list_single_recal_day_pane_g4

0xea77,	// (0x0003cd6b) list_single_recal_day_pane_g5_ParamLimits

0xea77,	// (0x0003cd6b) list_single_recal_day_pane_g5

0xea87,	// (0x0003cd7b) list_single_recal_day_pane_g6_ParamLimits

0xea87,	// (0x0003cd7b) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003e126) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003e126) list_single_recal_day_pane_g

0xea9b,	// (0x0003cd8f) list_single_recal_day_pane_t1

0xeada,	// (0x0003cdce) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003e131) list_single_recal_day_pane_t

0x8f27,	// (0x0003721b) ncimui_query_button_pane_ParamLimits

0x8f27,	// (0x0003721b) ncimui_query_button_pane

0x8f37,	// (0x0003722b) ncimui_query_button_pane_t1_ParamLimits

0x8f37,	// (0x0003722b) ncimui_query_button_pane_t1

0xeaec,	// (0x0003cde0) ncimui_query_button_pane_t2_ParamLimits

0xeaec,	// (0x0003cde0) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003e136) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003e136) ncimui_query_button_pane_t

0x8f4a,	// (0x0003723e) query_button_pane_ParamLimits

0x8f4a,	// (0x0003723e) query_button_pane

0x9a83,	// (0x00037d77) bg_button_pane_cp0028

0xeaff,	// (0x0003cdf3) query_button_pane_t1

0x050f,	// (0x0002e803) main_tport_pane_ParamLimits

0x8a09,	// (0x00036cfd) bg_popup_window_pane_cp01_ParamLimits

0x8a09,	// (0x00036cfd) bg_popup_window_pane_cp01

0x8a24,	// (0x00036d18) heading_pane_cp08_ParamLimits

0x8a24,	// (0x00036d18) heading_pane_cp08

0x8a37,	// (0x00036d2b) heading_pane_cp07_ParamLimits

0x8a37,	// (0x00036d2b) heading_pane_cp07

0x8ade,	// (0x00036dd2) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003e082) cell_tport_appsw_pane_g

0x3fb9,	// (0x000322ad) input_candi_list_open_g1

0xa7df,	// (0x00038ad3) list_cale_time_pane_g6_ParamLimits

0xa7df,	// (0x00038ad3) list_cale_time_pane_g6

0x5125,	// (0x00033419) aid_size_touch_calib_1_ParamLimits

0x5125,	// (0x00033419) aid_size_touch_calib_1

0x5137,	// (0x0003342b) aid_size_touch_calib_2_ParamLimits

0x5137,	// (0x0003342b) aid_size_touch_calib_2

0x514f,	// (0x00033443) aid_size_touch_calib_3_ParamLimits

0x514f,	// (0x00033443) aid_size_touch_calib_3

0x516d,	// (0x00033461) aid_size_touch_calib_4_ParamLimits

0x516d,	// (0x00033461) aid_size_touch_calib_4

0x5185,	// (0x00033479) main_touch_calib_button_group_pane_ParamLimits

0x5185,	// (0x00033479) main_touch_calib_button_group_pane

0x519d,	// (0x00033491) main_touch_calib_pane_g1_ParamLimits

0x51af,	// (0x000334a3) main_touch_calib_pane_g2_ParamLimits

0x51c1,	// (0x000334b5) main_touch_calib_pane_g3_ParamLimits

0x51d3,	// (0x000334c7) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0003da45) main_touch_calib_pane_g_ParamLimits

0x51e5,	// (0x000334d9) main_touch_calib_pane_t1_ParamLimits

0x51ff,	// (0x000334f3) main_touch_calib_pane_t2_ParamLimits

0x5219,	// (0x0003350d) main_touch_calib_pane_t3_ParamLimits

0x522d,	// (0x00033521) main_touch_calib_pane_t4_ParamLimits

0x5241,	// (0x00033535) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0003da4e) main_touch_calib_pane_t_ParamLimits

0xca6e,	// (0x0003ad62) list_single_fp_cale_pane_g3_ParamLimits

0xca6e,	// (0x0003ad62) list_single_fp_cale_pane_g3

0x1806,	// (0x0002fafa) bg_button_pane_cp012_ParamLimits

0x1806,	// (0x0002fafa) bg_vkb2_func_pane_cp03_ParamLimits

0x15f8,	// (0x0002f8ec) cell_vitu2_function_top_pane_g1_ParamLimits

0x1806,	// (0x0002fafa) bg_vkb2_func_pane_cp04_ParamLimits

0x7c81,	// (0x00035f75) main_ncimui_button_group_pane_ParamLimits

0x7c81,	// (0x00035f75) main_ncimui_button_group_pane

0x7ce1,	// (0x00035fd5) main_ncimui_pane_t3_ParamLimits

0x7ce1,	// (0x00035fd5) main_ncimui_pane_t3

0xe63c,	// (0x0003c930) phacti_button_group_pane

0xe9ca,	// (0x0003ccbe) aid_size_list_single_double_ParamLimits

0x8e8a,	// (0x0003717e) popup_ezdial_listscroll_window_ParamLimits

0x8ea5,	// (0x00037199) popup_number_entry_window_cp01_ParamLimits

0x8f5d,	// (0x00037251) phacti_button_pane_ParamLimits

0x8f5d,	// (0x00037251) phacti_button_pane

0x9a83,	// (0x00037d77) bg_button_pane_cp14

0xeb0d,	// (0x0003ce01) phacti_button_pane_t1

0x8f6e,	// (0x00037262) main_touch_calib_button_pane_ParamLimits

0x8f6e,	// (0x00037262) main_touch_calib_button_pane

0xa1df,	// (0x000384d3) bg_button_pane_cp18_ParamLimits

0xa1df,	// (0x000384d3) bg_button_pane_cp18

0xeb1b,	// (0x0003ce0f) main_touch_calib_button_pane_t1_ParamLimits

0xeb1b,	// (0x0003ce0f) main_touch_calib_button_pane_t1

0xeb31,	// (0x0003ce25) main_touch_calib_button_pane_t2_ParamLimits

0xeb31,	// (0x0003ce25) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003e13b) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003e13b) main_touch_calib_button_pane_t

0x9a83,	// (0x00037d77) cell_ncimui_button_pane

0x9a83,	// (0x00037d77) bg_button_pane_cp032

0xeb4f,	// (0x0003ce43) cell_ncimui_button_pane_t1

0x6364,	// (0x00034658) image3_infobar_pane_ParamLimits

0x6364,	// (0x00034658) image3_infobar_pane

0x80bd,	// (0x000363b1) fs_bigclock_status_pane_ParamLimits

0x80bd,	// (0x000363b1) fs_bigclock_status_pane

0x80ca,	// (0x000363be) main_fs_bigclock_clock_pane_ParamLimits

0x80ca,	// (0x000363be) main_fs_bigclock_clock_pane

0x80ea,	// (0x000363de) main_fs_bigclock_indi_pane_ParamLimits

0x80ea,	// (0x000363de) main_fs_bigclock_indi_pane

0x8114,	// (0x00036408) main_fs_bigclock_swipe_pane_ParamLimits

0x8114,	// (0x00036408) main_fs_bigclock_swipe_pane

0x9a83,	// (0x00037d77) main_fs_clock_dumped_data

0xdfc2,	// (0x0003c2b6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdfc2,	// (0x0003c2b6) list_single_fs_bigclock_indicator_pane_g1

0xdfde,	// (0x0003c2d2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdfde,	// (0x0003c2d2) list_single_fs_bigclock_indicator_pane_g2

0xdff8,	// (0x0003c2ec) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdff8,	// (0x0003c2ec) list_single_fs_bigclock_indicator_pane_g3

0xe012,	// (0x0003c306) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe012,	// (0x0003c306) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003df68) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003df68) list_single_fs_bigclock_indicator_pane_g

0xe03d,	// (0x0003c331) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe03d,	// (0x0003c331) list_single_fs_bigclock_indicator_pane_t1

0xe065,	// (0x0003c359) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe065,	// (0x0003c359) list_single_fs_bigclock_indicator_pane_t2

0xe08d,	// (0x0003c381) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe08d,	// (0x0003c381) list_single_fs_bigclock_indicator_pane_t3

0xe0b5,	// (0x0003c3a9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0b5,	// (0x0003c3a9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003df73) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003df73) list_single_fs_bigclock_indicator_pane_t

0xeb5d,	// (0x0003ce51) image3_infobar_fav_pane_ParamLimits

0xeb5d,	// (0x0003ce51) image3_infobar_fav_pane

0xeb6d,	// (0x0003ce61) image3_infobar_loc_pane_ParamLimits

0xeb6d,	// (0x0003ce61) image3_infobar_loc_pane

0xeb81,	// (0x0003ce75) image3_infobar_time_pane_ParamLimits

0xeb81,	// (0x0003ce75) image3_infobar_time_pane

0xc69a,	// (0x0003a98e) image3_infobar_time_pane_g1

0xeb91,	// (0x0003ce85) image3_infobar_time_pane_t1

0xc69a,	// (0x0003a98e) image3_infobar_loc_pane_g1

0xeb9f,	// (0x0003ce93) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003e140) image3_infobar_loc_pane_g

0xeba7,	// (0x0003ce9b) image3_infobar_loc_pane_t1

0xc69a,	// (0x0003a98e) image3_infobar_fav_pane_g1

0xebb5,	// (0x0003cea9) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003e145) image3_infobar_fav_pane_g

0xebbd,	// (0x0003ceb1) fs_bigclock_status_battery_pane

0xebc6,	// (0x0003ceba) fs_bigclock_status_signal_pane

0xebcf,	// (0x0003cec3) fs_bigclock_status_title_pane

0xebd8,	// (0x0003cecc) fs_bigclock_status_signal_pane_g1

0xebe1,	// (0x0003ced5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003e14a) fs_bigclock_status_signal_pane_g

0xebe9,	// (0x0003cedd) fs_bigclock_status_battery_pane_g1

0xebf2,	// (0x0003cee6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003e14f) fs_bigclock_status_battery_pane_g

0xebfa,	// (0x0003ceee) fs_bigclock_status_title_pane_t1

0xc69a,	// (0x0003a98e) main_fs_bigclock_clock_pane_g1

0xec08,	// (0x0003cefc) main_fs_bigclock_clock_pane_g2

0xec11,	// (0x0003cf05) main_fs_bigclock_clock_pane_g3

0xec11,	// (0x0003cf05) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003e154) main_fs_bigclock_clock_pane_g

0xec19,	// (0x0003cf0d) main_fs_bigclock_clock_pane_t1

0x8f83,	// (0x00037277) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003e15d) main_fs_bigclock_clock_pane_t

0xec27,	// (0x0003cf1b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec27,	// (0x0003cf1b) list_single_fs_bigclock_indicator_pane

0xec38,	// (0x0003cf2c) list_single_fs_bigclock_pane_ParamLimits

0xec38,	// (0x0003cf2c) list_single_fs_bigclock_pane

0xec5e,	// (0x0003cf52) main_fs_bigclock_indicator_pane_t1

0xec6d,	// (0x0003cf61) list_single_fs_bigclock_pane_g1

0xec75,	// (0x0003cf69) list_single_fs_bigclock_pane_t1

0xc69a,	// (0x0003a98e) main_fs_bigclock_swipe_pane_g1

0xecb8,	// (0x0003cfac) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003e16e) main_fs_bigclock_swipe_pane_g

0xecc0,	// (0x0003cfb4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc0,	// (0x0003cfb4) main_fs_bigclock_swipe_pane_t1

0x384f,	// (0x00031b43) call_type_pane_ParamLimits

0x9a83,	// (0x00037d77) main_btmg_pane

0xe810,	// (0x0003cb04) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe810,	// (0x0003cb04) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003e0e1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003e0e1) list_single_cale_mrui_row_pane_g

0xea24,	// (0x0003cd18) list_recal_vselct_arw_lo_pane

0xea2c,	// (0x0003cd20) list_recal_vselct_arw_up_pane

0xea34,	// (0x0003cd28) list_recal_vselct_pane

0x8fd4,	// (0x000372c8) btmg_button_pane

0x8fde,	// (0x000372d2) main_btmg_pane_g1

0x9a83,	// (0x00037d77) bg_button_pane_cp044

0xecdd,	// (0x0003cfd1) btmg_button_pane_t1

0xc27c,	// (0x0003a570) aid_listscroll_gen

0xa7c4,	// (0x00038ab8) main_cntbar_detail_pane

0xe4fc,	// (0x0003c7f0) list_cmail_folder_pane

0xd00c,	// (0x0003b300) sp_fs_scroll_pane_cp03_ParamLimits

0x8b5a,	// (0x00036e4e) list_single_fs_dyc_pane_cp01_ParamLimits

0x8b5a,	// (0x00036e4e) list_single_fs_dyc_pane_cp01

0xeceb,	// (0x0003cfdf) aid_size_cmail_indent

0xecf4,	// (0x0003cfe8) list_single_dyc_row_pane_cp01

0x9014,	// (0x00037308) cntbar_detail_list_pane_ParamLimits

0x9014,	// (0x00037308) cntbar_detail_list_pane

0x9060,	// (0x00037354) main_cntbar_detail_cont_pane_ParamLimits

0x9060,	// (0x00037354) main_cntbar_detail_cont_pane

0xd00c,	// (0x0003b300) scroll_pane_cp032_ParamLimits

0xd00c,	// (0x0003b300) scroll_pane_cp032

0x9074,	// (0x00037368) cntbar_detail_list_event_pane_ParamLimits

0x9074,	// (0x00037368) cntbar_detail_list_event_pane

0x9024,	// (0x00037318) cntbar_detail_list_shct_pane

0xa654,	// (0x00038948) aid_list_gen

0xecfd,	// (0x0003cff1) aid_scroll

0xed06,	// (0x0003cffa) aid_size_touch_scroll_bar

0x7444,	// (0x00035738) aid_list_double

0xed0f,	// (0x0003d003) aid_list_single

0x7444,	// (0x00035738) aid_list_single_lg

0xed18,	// (0x0003d00c) aid_list_z_g_a_sm

0xed20,	// (0x0003d014) aid_list_z_g_d

0xed28,	// (0x0003d01c) aid_txt_z_prm

0x9084,	// (0x00037378) aid_txt_z_prm_cp01

0x9092,	// (0x00037386) aid_txt_z_sec

0x90a0,	// (0x00037394) main_cntbar_detail_cont_pane_g1_ParamLimits

0x90a0,	// (0x00037394) main_cntbar_detail_cont_pane_g1

0x90b4,	// (0x000373a8) main_cntbar_detail_cont_pane_g2_ParamLimits

0x90b4,	// (0x000373a8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003e173) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003e173) main_cntbar_detail_cont_pane_g

0xed36,	// (0x0003d02a) main_cntbar_detail_cont_pane_t1

0xed44,	// (0x0003d038) main_cntbar_detail_cont_pane_t2

0xed52,	// (0x0003d046) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003e178) main_cntbar_detail_cont_pane_t

0x90c4,	// (0x000373b8) cell_cntbar_detail_list_shct_pane_ParamLimits

0x90c4,	// (0x000373b8) cell_cntbar_detail_list_shct_pane

0xed60,	// (0x0003d054) cntbar_detail_list_shct_pane_g1

0xed69,	// (0x0003d05d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003e17f) cntbar_detail_list_shct_pane_g

0x90d8,	// (0x000373cc) cntbar_detail_list_event_pane_g1_ParamLimits

0x90d8,	// (0x000373cc) cntbar_detail_list_event_pane_g1

0x90e4,	// (0x000373d8) cntbar_detail_list_event_pane_g2_ParamLimits

0x90e4,	// (0x000373d8) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003e184) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003e184) cntbar_detail_list_event_pane_g

0x9150,	// (0x00037444) cntbar_detail_list_event_pane_t1_ParamLimits

0x9150,	// (0x00037444) cntbar_detail_list_event_pane_t1

0x9165,	// (0x00037459) cntbar_detail_list_event_pane_t2_ParamLimits

0x9165,	// (0x00037459) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003e191) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003e191) cntbar_detail_list_event_pane_t

0xc69a,	// (0x0003a98e) cell_cntbar_detail_list_shct_pane_g1

0xadef,	// (0x000390e3) navi_pane_mv_g3

0xa7c4,	// (0x00038ab8) main_cntbar_detail_pane_ParamLimits

0x9a83,	// (0x00037d77) main_notif_wgt_pane

0x60d5,	// (0x000343c9) aid_tch_main_mp4_pane_g4

0x62b7,	// (0x000345ab) popup_slider_window_cp02

0xea1a,	// (0x0003cd0e) list_recal_day_event_pane

0x8fe8,	// (0x000372dc) cntbar_detail_btn_pane_ParamLimits

0x8fe8,	// (0x000372dc) cntbar_detail_btn_pane

0x8ffe,	// (0x000372f2) cntbar_detail_btn_pane_cp01_ParamLimits

0x8ffe,	// (0x000372f2) cntbar_detail_btn_pane_cp01

0x9024,	// (0x00037318) cntbar_detail_list_shct_pane_ParamLimits

0x9034,	// (0x00037328) cntbar_detail_pane_g1_ParamLimits

0x9034,	// (0x00037328) cntbar_detail_pane_g1

0x9044,	// (0x00037338) cntbar_detail_pane_t1_ParamLimits

0x9044,	// (0x00037338) cntbar_detail_pane_t1

0x90f0,	// (0x000373e4) cntbar_detail_list_event_pane_g3_ParamLimits

0x90f0,	// (0x000373e4) cntbar_detail_list_event_pane_g3

0x9108,	// (0x000373fc) cntbar_detail_list_event_pane_g4_ParamLimits

0x9108,	// (0x000373fc) cntbar_detail_list_event_pane_g4

0x9120,	// (0x00037414) cntbar_detail_list_event_pane_g5_ParamLimits

0x9120,	// (0x00037414) cntbar_detail_list_event_pane_g5

0x9138,	// (0x0003742c) cntbar_detail_list_event_pane_g6_ParamLimits

0x9138,	// (0x0003742c) cntbar_detail_list_event_pane_g6

0x917a,	// (0x0003746e) cntbar_detail_list_event_pane_t3_ParamLimits

0x917a,	// (0x0003746e) cntbar_detail_list_event_pane_t3

0x918c,	// (0x00037480) popup_notif_wgt_window_ParamLimits

0x918c,	// (0x00037480) popup_notif_wgt_window

0x91a5,	// (0x00037499) popup_submenu_window_cp01_ParamLimits

0x91a5,	// (0x00037499) popup_submenu_window_cp01

0xa3ad,	// (0x000386a1) bg_popup_window_pane_cp10

0xed72,	// (0x0003d066) listscroll_notif_wgt_pane

0xed83,	// (0x0003d077) list_notif_wgt_window

0xed8c,	// (0x0003d080) scroll_pane_cp033

0x91b7,	// (0x000374ab) list_notif_wgt_row_pane_ParamLimits

0x91b7,	// (0x000374ab) list_notif_wgt_row_pane

0xed95,	// (0x0003d089) aid_size_list_notif_wgt_del

0xeda2,	// (0x0003d096) list_notif_wgt_row_pane_g1

0xedae,	// (0x0003d0a2) list_notif_wgt_row_pane_g2

0xedc2,	// (0x0003d0b6) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003e198) list_notif_wgt_row_pane_g

0xedcf,	// (0x0003d0c3) list_notif_wgt_row_pane_t1

0xede5,	// (0x0003d0d9) list_notif_wgt_row_pane_t2

0xedf7,	// (0x0003d0eb) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003e19f) list_notif_wgt_row_pane_t

0xd3f8,	// (0x0003b6ec) list_recal_day_event_pane_g1

0xee09,	// (0x0003d0fd) list_recal_day_event_pane_t1

0x9a83,	// (0x00037d77) bg_button_pane_cp045

0xee18,	// (0x0003d10c) cntbar_detail_btn_pane_t1

0xc290,	// (0x0003a584) main_callh_pane_ParamLimits

0xc290,	// (0x0003a584) main_callh_pane

0x9a83,	// (0x00037d77) main_coverflow0_pane

0x9a83,	// (0x00037d77) main_wgtman_pane

0x812c,	// (0x00036420) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x812c,	// (0x00036420) main_fs_bigclock_unlock_btn_pane

0x8ad6,	// (0x00036dca) bg_button_pane_cp16

0x8ae6,	// (0x00036dda) cell_tport_appsw_pane_g3

0x91c7,	// (0x000374bb) cf0_flow_pane_ParamLimits

0x91c7,	// (0x000374bb) cf0_flow_pane

0xee26,	// (0x0003d11a) listscroll_cf0_pane

0xee31,	// (0x0003d125) main_cf0_pane_g1

0x91dc,	// (0x000374d0) main_cf0_pane_t1_ParamLimits

0x91dc,	// (0x000374d0) main_cf0_pane_t1

0x91f3,	// (0x000374e7) main_cf0_pane_t2_ParamLimits

0x91f3,	// (0x000374e7) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003e1ab) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003e1ab) main_cf0_pane_t

0xee43,	// (0x0003d137) scroll_pane_cp11

0x920a,	// (0x000374fe) cf0_flow_pane_g1

0x9212,	// (0x00037506) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003e1b0) cf0_flow_pane_g

0x921a,	// (0x0003750e) cf0_flow_pane_t1

0x9a83,	// (0x00037d77) main_call6_pane

0x9a83,	// (0x00037d77) main_calllock_pane

0x9228,	// (0x0003751c) call6_btn_grp_pane_ParamLimits

0x9228,	// (0x0003751c) call6_btn_grp_pane

0x9242,	// (0x00037536) call6_pane_g1_ParamLimits

0x9242,	// (0x00037536) call6_pane_g1

0x9257,	// (0x0003754b) popup_call6_1st_window_ParamLimits

0x9257,	// (0x0003754b) popup_call6_1st_window

0x9268,	// (0x0003755c) popup_call6_2nd_window_ParamLimits

0x9268,	// (0x0003755c) popup_call6_2nd_window

0x9279,	// (0x0003756d) cell_call6_btn_pane_ParamLimits

0x9279,	// (0x0003756d) cell_call6_btn_pane

0xa3ad,	// (0x000386a1) bg_popup_call2_in_pane_cp03

0xee4e,	// (0x0003d142) popup_call6_1st_window_g1

0xee56,	// (0x0003d14a) popup_call6_1st_window_g2

0xee5e,	// (0x0003d152) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003e1b5) popup_call6_1st_window_g

0xee66,	// (0x0003d15a) popup_call6_1st_window_t1

0xee75,	// (0x0003d169) popup_call6_1st_window_t2

0xee85,	// (0x0003d179) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003e1bc) popup_call6_1st_window_t

0xa3ad,	// (0x000386a1) bg_popup_call2_in_pane_cp04

0xee4e,	// (0x0003d142) popup_call6_2nd_window_g1

0xee56,	// (0x0003d14a) popup_call6_2nd_window_g2

0xee5e,	// (0x0003d152) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003e1b5) popup_call6_2nd_window_g

0xee66,	// (0x0003d15a) popup_call6_2nd_window_t1

0x9a83,	// (0x00037d77) bg_button_pane_cp15

0xee95,	// (0x0003d189) cell_call6_btn_pane_g1

0xee9e,	// (0x0003d192) cell_call6_btn_pane_t1

0x928d,	// (0x00037581) listscroll_wgtman_pane_ParamLimits

0x928d,	// (0x00037581) listscroll_wgtman_pane

0x92ae,	// (0x000375a2) wgtman_btn_pane_ParamLimits

0x92ae,	// (0x000375a2) wgtman_btn_pane

0xabf4,	// (0x00038ee8) aid_scroll_copy1

0xeead,	// (0x0003d1a1) list_wgtman_pane

0x92f1,	// (0x000375e5) wgtman_btn_pane_g1_ParamLimits

0x92f1,	// (0x000375e5) wgtman_btn_pane_g1

0x931d,	// (0x00037611) wgtman_btn_pane_t1_ParamLimits

0x931d,	// (0x00037611) wgtman_btn_pane_t1

0xeeb7,	// (0x0003d1ab) wgtman_btn_pane_t2_ParamLimits

0xeeb7,	// (0x0003d1ab) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003e1c3) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003e1c3) wgtman_btn_pane_t

0x935a,	// (0x0003764e) listrow_wgtman_pane_ParamLimits

0x935a,	// (0x0003764e) listrow_wgtman_pane

0x936d,	// (0x00037661) listrow_wgtman_pane_g1

0x937a,	// (0x0003766e) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003e1c8) listrow_wgtman_pane_g

0x9398,	// (0x0003768c) listrow_wgtman_pane_t1

0x93b0,	// (0x000376a4) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003e1cd) listrow_wgtman_pane_t

0x93d6,	// (0x000376ca) wait_bar_pane_cp09

0xeece,	// (0x0003d1c2) main_calllock_btn_pane

0xeed8,	// (0x0003d1cc) main_calllock_pane_g1

0x9a83,	// (0x00037d77) bg_button_pane_cp17

0xeee3,	// (0x0003d1d7) main_calllock_btn_pane_g1

0xeeec,	// (0x0003d1e0) main_calllock_btn_pane_t1

0x9a83,	// (0x00037d77) main_dialer3_pane

0x9a83,	// (0x00037d77) main_fmrd2_pane

0xc69a,	// (0x0003a98e) main_fs_bigclock_unlock_btn_pane_g1

0xef03,	// (0x0003d1f7) main_fs_bigclock_unlock_btn_pane_t1

0x93e8,	// (0x000376dc) area_fmrd2_info_pane_ParamLimits

0x93e8,	// (0x000376dc) area_fmrd2_info_pane

0x93f9,	// (0x000376ed) area_fmrd2_visual_pane_ParamLimits

0x93f9,	// (0x000376ed) area_fmrd2_visual_pane

0x9407,	// (0x000376fb) fmrd2_indi_pane_ParamLimits

0x9407,	// (0x000376fb) fmrd2_indi_pane

0x9414,	// (0x00037708) area_fmrd2_visual_pane_g1

0x941c,	// (0x00037710) area_fmrd2_visual_pane_t1

0x942c,	// (0x00037720) area_fmrd2_visual_pane_t2

0x943c,	// (0x00037730) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003e1d7) area_fmrd2_visual_pane_t

0x944c,	// (0x00037740) area_fmrd2_info_pane_g1

0x9454,	// (0x00037748) area_fmrd2_info_pane_t1

0x9464,	// (0x00037758) area_fmrd2_info_pane_t2

0x9474,	// (0x00037768) area_fmrd2_info_pane_t3

0x9484,	// (0x00037778) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003e1de) area_fmrd2_info_pane_t

0x9492,	// (0x00037786) fmrd2_indi_pane_t1

0x94a2,	// (0x00037796) fmrd2_indi_pane_t2

0x94b2,	// (0x000377a6) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003e1e7) fmrd2_indi_pane_t

0xe021,	// (0x0003c315) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe021,	// (0x0003c315) list_single_fs_bigclock_indicator_pane_g5

0xe0d1,	// (0x0003c3c5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe0d1,	// (0x0003c3c5) list_single_fs_bigclock_indicator_pane_t5

0x8c73,	// (0x00036f67) aid_cell_bcale_month_pane_ParamLimits

0x8c73,	// (0x00036f67) aid_cell_bcale_month_pane

0x8c91,	// (0x00036f85) bcale_month_pane_ParamLimits

0x8c91,	// (0x00036f85) bcale_month_pane

0x8cb5,	// (0x00036fa9) bcale_preview_pane_ParamLimits

0x8cb5,	// (0x00036fa9) bcale_preview_pane

0xec75,	// (0x0003cf69) list_single_fs_bigclock_pane_t1_ParamLimits

0xec94,	// (0x0003cf88) list_single_fs_bigclock_pane_t2_ParamLimits

0xec94,	// (0x0003cf88) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003e169) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003e169) list_single_fs_bigclock_pane_t

0xeefb,	// (0x0003d1ef) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003e1d2) main_fs_bigclock_unlock_btn_pane_g

0x94c2,	// (0x000377b6) aid_dia3_key_size_ParamLimits

0x94c2,	// (0x000377b6) aid_dia3_key_size

0x94d1,	// (0x000377c5) aid_dia3_listrow_size_ParamLimits

0x94d1,	// (0x000377c5) aid_dia3_listrow_size

0x94e6,	// (0x000377da) dia3_keypad_fun_pane_ParamLimits

0x94e6,	// (0x000377da) dia3_keypad_fun_pane

0x9502,	// (0x000377f6) dia3_keypad_num_pane_ParamLimits

0x9502,	// (0x000377f6) dia3_keypad_num_pane

0x951d,	// (0x00037811) dia3_listscroll_pane_ParamLimits

0x951d,	// (0x00037811) dia3_listscroll_pane

0x9530,	// (0x00037824) dia3_numentry_pane_ParamLimits

0x9530,	// (0x00037824) dia3_numentry_pane

0xef11,	// (0x0003d205) dia3_list_pane

0xef1c,	// (0x0003d210) scroll_pane_cp12

0x9a83,	// (0x00037d77) bg_dia3_numentry_pane

0x9544,	// (0x00037838) dia3_numentry_pane_t1

0x9553,	// (0x00037847) cell_dia3_key_num_pane

0x955b,	// (0x0003784f) cell_dia3_key0_fun_pane_ParamLimits

0x955b,	// (0x0003784f) cell_dia3_key0_fun_pane

0x956f,	// (0x00037863) cell_dia3_key1_fun_pane_ParamLimits

0x956f,	// (0x00037863) cell_dia3_key1_fun_pane

0x9587,	// (0x0003787b) dia3_listrow_pane

0xdd2f,	// (0x0003c023) bg_dia3_numentry_pane_g1

0x9a83,	// (0x00037d77) bg_button_pane_cp21

0xef27,	// (0x0003d21b) cell_dia3_key_num_pane_t1

0xef35,	// (0x0003d229) cell_dia3_key_num_pane_t2

0xef44,	// (0x0003d238) cell_dia3_key_num_pane_t3

0xef53,	// (0x0003d247) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003e1ee) cell_dia3_key_num_pane_t

0x9a83,	// (0x00037d77) bg_button_pane_cp19

0x9599,	// (0x0003788d) cell_dia3_key0_fun_pane_g1

0x9a83,	// (0x00037d77) bg_button_pane_cp20

0x95a1,	// (0x00037895) cell_dia3_key1_fun_pane_g1

0x95a9,	// (0x0003789d) area_left_week_number_pane

0x95b5,	// (0x000378a9) area_top_day_name_pane

0x95c8,	// (0x000378bc) frame_month_view_pane

0xef62,	// (0x0003d256) grid_month_view_pane

0x95db,	// (0x000378cf) cell_top_day_name_pane_ParamLimits

0x95db,	// (0x000378cf) cell_top_day_name_pane

0x9608,	// (0x000378fc) cell_area_left_week_number_pane_ParamLimits

0x9608,	// (0x000378fc) cell_area_left_week_number_pane

0x961c,	// (0x00037910) cell_month_view_pane_ParamLimits

0x961c,	// (0x00037910) cell_month_view_pane

0xef70,	// (0x0003d264) frm_month_g1

0x9649,	// (0x0003793d) frm_month_g2

0x965c,	// (0x00037950) frm_month_g3

0x966f,	// (0x00037963) frm_month_g4

0x9682,	// (0x00037976) frm_month_g5

0x9695,	// (0x00037989) frm_month_g6

0x96a8,	// (0x0003799c) frm_month_g7

0xef7d,	// (0x0003d271) frm_month_g8

0x96bb,	// (0x000379af) frm_month_g9

0x96cb,	// (0x000379bf) frm_month_g10

0x96db,	// (0x000379cf) frm_month_g11

0x96eb,	// (0x000379df) frm_month_g12

0x96fd,	// (0x000379f1) frm_month_g13

0x970f,	// (0x00037a03) frm_month_g14

0x9723,	// (0x00037a17) frm_month_g15

0x9737,	// (0x00037a2b) frm_month_g16

0x000f,

0xff03,	// (0x0003e1f7) frm_month_g

0xef8a,	// (0x0003d27e) cell_top_day_name_pane_t1

0x974b,	// (0x00037a3f) cell_area_left_week_number_pane_g1

0x9757,	// (0x00037a4b) cell_area_left_week_number_pane_t1

0xc8fa,	// (0x0003abee) cell_month_view_pane_g1

0x976a,	// (0x00037a5e) cell_month_view_pane_t1

0x9a83,	// (0x00037d77) main_fps_pane

0xe303,	// (0x0003c5f7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe303,	// (0x0003c5f7) cmail_ddmenu_btn02_pane_cp1

0xe31f,	// (0x0003c613) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe31f,	// (0x0003c613) cmail_ddmenu_btn02_pane_cp2

0x8ed7,	// (0x000371cb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8ed7,	// (0x000371cb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003e11c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003e11c) cmail_ddmenu_btn02_pane_g

0x8ef5,	// (0x000371e9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8ef5,	// (0x000371e9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003e121) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003e121) cmail_ddmenu_btn02_pane_t

0x977d,	// (0x00037a71) fps_text_pane_ParamLimits

0x977d,	// (0x00037a71) fps_text_pane

0x9794,	// (0x00037a88) main_fps_pane_g1_ParamLimits

0x9794,	// (0x00037a88) main_fps_pane_g1

0x97ae,	// (0x00037aa2) wait_bar_pane_cp010_ParamLimits

0x97ae,	// (0x00037aa2) wait_bar_pane_cp010

0x97bf,	// (0x00037ab3) fps_text_pane_t1_ParamLimits

0x97bf,	// (0x00037ab3) fps_text_pane_t1

0xeaad,	// (0x0003cda1) cam4_image_uncrop_pane_g1

0xeab6,	// (0x0003cdaa) cam4_image_uncrop_pane_g2

0x64fc,	// (0x000347f0) cam4_image_uncrop_pane_g3

0x6505,	// (0x000347f9) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003dbe2) cam4_image_uncrop_pane_g

0x9587,	// (0x0003787b) dia3_listrow_pane_ParamLimits

0x9a83,	// (0x00037d77) main_phob2_pane

0x8aa7,	// (0x00036d9b) cell_tport_appsw_pane_cp02_ParamLimits

0x8aa7,	// (0x00036d9b) cell_tport_appsw_pane_cp02

0x8abb,	// (0x00036daf) cell_tport_appsw_pane_cp03_ParamLimits

0x8abb,	// (0x00036daf) cell_tport_appsw_pane_cp03

0x9a83,	// (0x00037d77) phob2_contact_card_pane

0x9a83,	// (0x00037d77) phob2_listscroll_pane

0xef9d,	// (0x0003d291) phob2_list_pane

0xefa5,	// (0x0003d299) scroll_pane_cp034

0x97d7,	// (0x00037acb) phob2_cc_data_pane_ParamLimits

0x97d7,	// (0x00037acb) phob2_cc_data_pane

0x97f6,	// (0x00037aea) phob2_cc_listscroll_pane_ParamLimits

0x97f6,	// (0x00037aea) phob2_cc_listscroll_pane

0x9814,	// (0x00037b08) list_double_large_graphic_phob2_pane_ParamLimits

0x9814,	// (0x00037b08) list_double_large_graphic_phob2_pane

0x9827,	// (0x00037b1b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9827,	// (0x00037b1b) list_double_large_graphic_phob2_pane_g1

0x983d,	// (0x00037b31) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x983d,	// (0x00037b31) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003e218) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003e218) list_double_large_graphic_phob2_pane_g

0x9849,	// (0x00037b3d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9849,	// (0x00037b3d) list_double_large_graphic_phob2_pane_t1

0x985f,	// (0x00037b53) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x985f,	// (0x00037b53) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003e21d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003e21d) list_double_large_graphic_phob2_pane_t

0x9a83,	// (0x00037d77) list_highlight_pane_cp024

0x9874,	// (0x00037b68) phob2_cc_button_pane

0x987c,	// (0x00037b70) phob2_cc_data_pane_g1_ParamLimits

0x987c,	// (0x00037b70) phob2_cc_data_pane_g1

0x9891,	// (0x00037b85) phob2_cc_data_pane_g2_ParamLimits

0x9891,	// (0x00037b85) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003e222) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003e222) phob2_cc_data_pane_g

0x98a1,	// (0x00037b95) phob2_cc_data_pane_t1_ParamLimits

0x98a1,	// (0x00037b95) phob2_cc_data_pane_t1

0x98b9,	// (0x00037bad) phob2_cc_data_pane_t2_ParamLimits

0x98b9,	// (0x00037bad) phob2_cc_data_pane_t2

0x98d1,	// (0x00037bc5) phob2_cc_data_pane_t3_ParamLimits

0x98d1,	// (0x00037bc5) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003e227) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003e227) phob2_cc_data_pane_t

0xefad,	// (0x0003d2a1) phob2_cc_list_pane_ParamLimits

0xefad,	// (0x0003d2a1) phob2_cc_list_pane

0xd48f,	// (0x0003b783) scroll_pane_cp035_ParamLimits

0xd48f,	// (0x0003b783) scroll_pane_cp035

0xa7c4,	// (0x00038ab8) bg_button_pane_cp033

0xefb9,	// (0x0003d2ad) phob2_cc_button_pane_g1

0xefc5,	// (0x0003d2b9) phob2_cc_button_pane_t1

0xefda,	// (0x0003d2ce) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003e22e) phob2_cc_button_pane_t

0x98e9,	// (0x00037bdd) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98e9,	// (0x00037bdd) list_double_large_graphic_phob2_cc_pane

0x98fc,	// (0x00037bf0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x98fc,	// (0x00037bf0) list_double_large_graphic_phob2_cc_pane_g1

0x9908,	// (0x00037bfc) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9908,	// (0x00037bfc) list_double_large_graphic_phob2_cc_pane_g2

0x9914,	// (0x00037c08) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9914,	// (0x00037c08) list_double_large_graphic_phob2_cc_pane_g3

0x9920,	// (0x00037c14) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9920,	// (0x00037c14) list_double_large_graphic_phob2_cc_pane_g4

0x992c,	// (0x00037c20) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x992c,	// (0x00037c20) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003e233) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003e233) list_double_large_graphic_phob2_cc_pane_g

0x9938,	// (0x00037c2c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9938,	// (0x00037c2c) list_double_large_graphic_phob2_cc_pane_t1

0x9961,	// (0x00037c55) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9961,	// (0x00037c55) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0x000d,	// (0x0002e301) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0x000d,	// (0x0002e301) list_double_large_graphic_phob2_cc_pane_t

0xefec,	// (0x0003d2e0) list_highlight_pane_cp025_ParamLimits

0xefec,	// (0x0003d2e0) list_highlight_pane_cp025

0xa7c4,	// (0x00038ab8) bg_button_pane_cp033_ParamLimits

0xefb9,	// (0x0003d2ad) phob2_cc_button_pane_g1_ParamLimits

0xefc5,	// (0x0003d2b9) phob2_cc_button_pane_t1_ParamLimits

0xefda,	// (0x0003d2ce) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003e22e) phob2_cc_button_pane_t_ParamLimits

0x1814,	// (0x0002fb08) popup_wgtman_window

0xd2d4,	// (0x0003b5c8) scroll_pane_cp038

0x92d3,	// (0x000375c7) wgtman_btn_pane_cp_01_ParamLimits

0x92d3,	// (0x000375c7) wgtman_btn_pane_cp_01

0xeffa,	// (0x0003d2ee) wgtman_content_pane

0xf003,	// (0x0003d2f7) wgtman_heading_pane

0x9a83,	// (0x00037d77) bg_heading_pane_cp02

0xf00c,	// (0x0003d300) wgtman_heading_pane_g1

0xf014,	// (0x0003d308) wgtman_heading_pane_t1

0xf022,	// (0x0003d316) scroll_pane_cp036

0xf02a,	// (0x0003d31e) wgtman_list_pane

0xeabf,	// (0x0003cdb3) wgtman_list_pane_t1_ParamLimits

0xeabf,	// (0x0003cdb3) wgtman_list_pane_t1

0x64e8,	// (0x000347dc) cam4_grid_pane

0x6efc,	// (0x000351f0) bg_button_pane_cp015_ParamLimits

0x6f10,	// (0x00035204) bg_button_pane_cp016_ParamLimits

0x6f23,	// (0x00035217) bg_button_pane_cp017_ParamLimits

0x6f7b,	// (0x0003526f) popup_vitu2_query_window_g3_ParamLimits

0x6f7b,	// (0x0003526f) popup_vitu2_query_window_g3

0x7038,	// (0x0003532c) popup_vitu2_query_window_t6_ParamLimits

0x7038,	// (0x0003532c) popup_vitu2_query_window_t6

0x7063,	// (0x00035357) popup_vitu2_query_window_t7_ParamLimits

0x7063,	// (0x00035357) popup_vitu2_query_window_t7

0xeaad,	// (0x0003cda1) cam4_grid_pane_g1

0xeab6,	// (0x0003cdaa) cam4_grid_pane_g2

0xf032,	// (0x0003d326) cam4_grid_pane_g3

0xf03b,	// (0x0003d32f) cam4_grid_pane_g4

0x0003,

0xff4a,	// (0x0003e23e) cam4_grid_pane_g

0x26a2,	// (0x00030996) aid_placing_vt_slider_lsc_ParamLimits

0x299f,	// (0x00030c93) vidtel_button_pane_ParamLimits

0x299f,	// (0x00030c93) vidtel_button_pane

0xf046,	// (0x0003d33a) bg_button_pane_cp034

0x998a,	// (0x00037c7e) vidtel_button_pane_g1

0xf050,	// (0x0003d344) vidtel_button_pane_t1

0xd3d6,	// (0x0003b6ca) aid_size_vtel_slider_touch

0xd48f,	// (0x0003b783) scroll_pane_cp039

0xdd6d,	// (0x0003c061) ncim_query_button_pane_cp01_ParamLimits

0xdd8c,	// (0x0003c080) ncimui_query_pane_g1_ParamLimits

0xa7c4,	// (0x00038ab8) input_focus_pane_cp012_ParamLimits

0xddb1,	// (0x0003c0a5) ncim_query_entry_pane_t1_ParamLimits

0xd48f,	// (0x0003b783) scroll_pane_cp039_ParamLimits

0xacda,	// (0x00038fce) navi_pane_bcale_mc_g1

0xace2,	// (0x00038fd6) navi_pane_bcale_mc_t1

0xe368,	// (0x0003c65c) main_sp_fs_email_pane_g1

0xe374,	// (0x0003c668) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003dfd9) main_sp_fs_email_pane_g

0xe81c,	// (0x0003cb10) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe81c,	// (0x0003cb10) list_single_cale_mrui_row_pane_g3

0x8f1d,	// (0x00037211) list_single_recal_day_pane_g5_event_pane

0xea93,	// (0x0003cd87) list_single_recal_day_pane_g7

0xf05e,	// (0x0003d352) list_recal_day_event_pane_cp01

0xf067,	// (0x0003d35b) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0003d363) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0003d36b) list_recal_vselct_pane_cp01

0xd3f8,	// (0x0003b6ec) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0003d375) list_recal_day_event_pane_cp01_t1

0xea9b,	// (0x0003cd8f) list_single_recal_day_pane_t1_ParamLimits

0xeada,	// (0x0003cdce) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003e131) list_single_recal_day_pane_t_ParamLimits

0xa0fb,	// (0x000383ef) bg_notes_pane_ParamLimits

0xa1bd,	// (0x000384b1) list_notes_pane_ParamLimits

0x1a71,	// (0x0002fd65) scroll_pane_cp06_ParamLimits

0xa1df,	// (0x000384d3) main_notes_pane_ParamLimits

0x9a83,	// (0x00037d77) main_welc_pane

0x9992,	// (0x00037c86) main_welc_body_pane_ParamLimits

0x9992,	// (0x00037c86) main_welc_body_pane

0x99af,	// (0x00037ca3) main_welc_opti_pane_ParamLimits

0x99af,	// (0x00037ca3) main_welc_opti_pane

0x99f8,	// (0x00037cec) main_welc_pane_t1_ParamLimits

0x99f8,	// (0x00037cec) main_welc_pane_t1

0x9a1a,	// (0x00037d0e) main_welc_body_row_pane_ParamLimits

0x9a1a,	// (0x00037d0e) main_welc_body_row_pane

0xcffe,	// (0x0003b2f2) main_welc_opti_row_pane_ParamLimits

0xcffe,	// (0x0003b2f2) main_welc_opti_row_pane

0xf08f,	// (0x0003d383) main_welc_opti_row_pane_g1

0x9a30,	// (0x00037d24) main_welc_opti_row_pane_t1

0xf097,	// (0x0003d38b) main_welc_body_row_pane_t1

0xed7b,	// (0x0003d06f) popup_notif_wgt_heading_pane

0xed95,	// (0x0003d089) aid_size_list_notif_wgt_del_ParamLimits

0xeda2,	// (0x0003d096) list_notif_wgt_row_pane_g1_ParamLimits

0xedae,	// (0x0003d0a2) list_notif_wgt_row_pane_g2_ParamLimits

0xedc2,	// (0x0003d0b6) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003e198) list_notif_wgt_row_pane_g_ParamLimits

0xedcf,	// (0x0003d0c3) list_notif_wgt_row_pane_t1_ParamLimits

0xede5,	// (0x0003d0d9) list_notif_wgt_row_pane_t2_ParamLimits

0xedf7,	// (0x0003d0eb) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003e19f) list_notif_wgt_row_pane_t_ParamLimits

0x936d,	// (0x00037661) listrow_wgtman_pane_g1_ParamLimits

0x937a,	// (0x0003766e) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003e1c8) listrow_wgtman_pane_g_ParamLimits

0x9398,	// (0x0003768c) listrow_wgtman_pane_t1_ParamLimits

0x93b0,	// (0x000376a4) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003e1cd) listrow_wgtman_pane_t_ParamLimits

0x93d6,	// (0x000376ca) wait_bar_pane_cp09_ParamLimits

0x9a83,	// (0x00037d77) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0003d39a) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0003d3a2) popup_notif_wgt_heading_pane_t1

0x9a83,	// (0x00037d77) main_vids_pane

0x9a83,	// (0x00037d77) vids_listscroll_pane

0x9a3f,	// (0x00037d33) scroll_pane_cp040

0x9a83,	// (0x00037d77) vids_list_pane

0x9a4a,	// (0x00037d3e) vids_list_double_pane_ParamLimits

0x9a4a,	// (0x00037d3e) vids_list_double_pane

0x9a5b,	// (0x00037d4f) vids_list_double_pane_g1

0x9a64,	// (0x00037d58) vids_list_double_pane_t1

0x9a73,	// (0x00037d67) vids_list_double_pane_t2

0x0001,

0xff58,	// (0x0003e24c) vids_list_double_pane_t

0x1806,	// (0x0002fafa) main_ncimui_pane_ParamLimits

0x7c95,	// (0x00035f89) main_ncimui_pane_g1_ParamLimits

0x7ca1,	// (0x00035f95) main_ncimui_pane_g2_ParamLimits

0x7ca1,	// (0x00035f95) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003dede) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003dede) main_ncimui_pane_g

0x99ce,	// (0x00037cc2) main_welc_pane_g1_ParamLimits

0x99ce,	// (0x00037cc2) main_welc_pane_g1

0x99e3,	// (0x00037cd7) main_welc_pane_g2_ParamLimits

0x99e3,	// (0x00037cd7) main_welc_pane_g2

0x0001,

0xff53,	// (0x0003e247) main_welc_pane_g_ParamLimits

0xff53,	// (0x0003e247) main_welc_pane_g

0xa0fb,	// (0x000383ef) listscroll_mce_pane_ParamLimits

0xae2f,	// (0x00039123) wait_bar_pane_cp10

0xc284,	// (0x0003a578) main_cale_day_pane_ParamLimits

0xc284,	// (0x0003a578) main_cale_week_pane_ParamLimits

0xa0fb,	// (0x000383ef) main_messa_pane_ParamLimits

0x5a7a,	// (0x00033d6e) main_clock2_btn_pane_ParamLimits

0x5a7a,	// (0x00033d6e) main_clock2_btn_pane

0xcaf6,	// (0x0003adea) main_clock2_btn_pane_cp01_ParamLimits

0xcaf6,	// (0x0003adea) main_clock2_btn_pane_cp01

0xe7a8,	// (0x0003ca9c) list_cale_mrui_pane_ParamLimits

0xee3b,	// (0x0003d12f) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003e1a6) main_cf0_pane_g

0x95a9,	// (0x0003789d) area_left_week_number_pane_ParamLimits

0x95b5,	// (0x000378a9) area_top_day_name_pane_ParamLimits

0x95c8,	// (0x000378bc) frame_month_view_pane_ParamLimits

0xef62,	// (0x0003d256) grid_month_view_pane_ParamLimits

0xef70,	// (0x0003d264) frm_month_g1_ParamLimits

0x9649,	// (0x0003793d) frm_month_g2_ParamLimits

0x965c,	// (0x00037950) frm_month_g3_ParamLimits

0x966f,	// (0x00037963) frm_month_g4_ParamLimits

0x9682,	// (0x00037976) frm_month_g5_ParamLimits

0x9695,	// (0x00037989) frm_month_g6_ParamLimits

0x96a8,	// (0x0003799c) frm_month_g7_ParamLimits

0xef7d,	// (0x0003d271) frm_month_g8_ParamLimits

0x96bb,	// (0x000379af) frm_month_g9_ParamLimits

0x96cb,	// (0x000379bf) frm_month_g10_ParamLimits

0x96db,	// (0x000379cf) frm_month_g11_ParamLimits

0x96eb,	// (0x000379df) frm_month_g12_ParamLimits

0x96fd,	// (0x000379f1) frm_month_g13_ParamLimits

0x970f,	// (0x00037a03) frm_month_g14_ParamLimits

0x9723,	// (0x00037a17) frm_month_g15_ParamLimits

0x9737,	// (0x00037a2b) frm_month_g16_ParamLimits

0xff03,	// (0x0003e1f7) frm_month_g_ParamLimits

0xef8a,	// (0x0003d27e) cell_top_day_name_pane_t1_ParamLimits

0x974b,	// (0x00037a3f) cell_area_left_week_number_pane_g1_ParamLimits

0x9757,	// (0x00037a4b) cell_area_left_week_number_pane_t1_ParamLimits

0xc8fa,	// (0x0003abee) cell_month_view_pane_g1_ParamLimits

0x976a,	// (0x00037a5e) cell_month_view_pane_t1_ParamLimits

0xa0f3,	// (0x000383e7) main_clock2_btn_pane_g1

0xf0bc,	// (0x0003d3b0) main_clock2_btn_pane_t1

0xa7c4,	// (0x00038ab8) listscroll_cmail_pane_ParamLimits

0xe368,	// (0x0003c65c) main_sp_fs_email_pane_g1_ParamLimits

0xe374,	// (0x0003c668) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003dfd9) main_sp_fs_email_pane_g_ParamLimits

0xe9fb,	// (0x0003ccef) list_recal_day_pane_ParamLimits

0xea0c,	// (0x0003cd00) mian_recal_day_pane_t1

0x872e,	// (0x00036a22) list_single_dyc_row_text_pane_t4_ParamLimits

0x872e,	// (0x00036a22) list_single_dyc_row_text_pane_t4

0x8777,	// (0x00036a6b) list_single_dyc_row_text_pane_t5_ParamLimits

0x8777,	// (0x00036a6b) list_single_dyc_row_text_pane_t5

0xe438,	// (0x0003c72c) list_single_dyc_row_text_pane_t6_ParamLimits

0xe438,	// (0x0003c72c) list_single_dyc_row_text_pane_t6

0xa7b0,	// (0x00038aa4) aid_mgn_list_cale_time_pane

0x1806,	// (0x0002fafa) main_gallery2_pane_ParamLimits

0xcb0c,	// (0x0003ae00) main_clock2_pane_cp01_t1

0xcb1a,	// (0x0003ae0e) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0003dab8) main_clock2_pane_cp01_t

0x1e19,	// (0x0003010d) cale_week_scroll_pane_g16_ParamLimits

0x1e19,	// (0x0003010d) cale_week_scroll_pane_g16

0xa3ad,	// (0x000386a1) vorec_slider_pane
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
