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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000ed0c };

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
0x0401,	// (0x0000f10d) Screen

0x040d,	// (0x0000f119) application_window

0x0449,	// (0x0000f155) area_bottom_pane_ParamLimits

0x0449,	// (0x0000f155) area_bottom_pane

0x0482,	// (0x0000f18e) area_top_pane_ParamLimits

0x0482,	// (0x0000f18e) area_top_pane

0x94af,	// (0x000181bb) call_video_uplink_pane_ParamLimits

0x94af,	// (0x000181bb) call_video_uplink_pane

0x0510,	// (0x0000f21c) main_pane_ParamLimits

0x0510,	// (0x0000f21c) main_pane

0xbe9e,	// (0x0001abaa) context_pane

0x3873,	// (0x0001257f) navi_pane

0x38a5,	// (0x000125b1) popup_cale_events_window_ParamLimits

0x38a5,	// (0x000125b1) popup_cale_events_window

0xbeb1,	// (0x0001abbd) popup_mup_playback_window

0x38bd,	// (0x000125c9) signal_pane

0x9c3c,	// (0x00018948) main_browser_pane

0x9eb5,	// (0x00018bc1) main_burst_pane

0x35db,	// (0x000122e7) main_calc_pane

0xbe30,	// (0x0001ab3c) main_cale_day_pane

0x0b20,	// (0x0000f82c) main_cale_month_pane

0xbe30,	// (0x0001ab3c) main_cale_week_pane

0x9eb5,	// (0x00018bc1) main_call_pane

0x98ee,	// (0x000185fa) main_call_poc_pane

0x9eb5,	// (0x00018bc1) main_camera_pane

0x9eb5,	// (0x00018bc1) main_chi_dic_pane

0xa73f,	// (0x0001944b) main_clock_pane

0x98ee,	// (0x000185fa) main_fmradio_pane

0x9eb5,	// (0x00018bc1) main_graph_messa_pane

0x98ee,	// (0x000185fa) main_help_pane

0x9c3c,	// (0x00018948) main_im_pane

0x9b49,	// (0x00018855) main_image_pane_ParamLimits

0x9b49,	// (0x00018855) main_image_pane

0x98ee,	// (0x000185fa) main_location2_pane

0x9eb5,	// (0x00018bc1) main_location_pane

0x9b49,	// (0x00018855) main_messa_pane

0x98ee,	// (0x000185fa) main_mp2_pane

0x9eb5,	// (0x00018bc1) main_mp_pane

0x98ee,	// (0x000185fa) main_msg_pane

0x98ee,	// (0x000185fa) main_mup_eq_pane

0x98ee,	// (0x000185fa) main_mup_pane

0x9c3c,	// (0x00018948) main_notes_pane

0x98ee,	// (0x000185fa) main_pec_pane

0x98ee,	// (0x000185fa) main_phob_pane

0x98ee,	// (0x000185fa) main_pinb_pane

0x98ee,	// (0x000185fa) main_postcard_pane

0x98ee,	// (0x000185fa) main_qdial_pane

0x9eb5,	// (0x00018bc1) main_skin_pane

0x98ee,	// (0x000185fa) main_smil2_pane

0x9eb5,	// (0x00018bc1) main_smil_pane

0x9eb5,	// (0x00018bc1) main_video_pane

0x9eb5,	// (0x00018bc1) main_video_tele_pane

0x9b49,	// (0x00018855) main_viewer_pane_ParamLimits

0x9b49,	// (0x00018855) main_viewer_pane

0x9eb5,	// (0x00018bc1) main_vorec_pane

0x362f,	// (0x0001233b) popup_blid_sat_info_window_ParamLimits

0x362f,	// (0x0001233b) popup_blid_sat_info_window

0x3687,	// (0x00012393) popup_dyc_status_message_window_ParamLimits

0x3687,	// (0x00012393) popup_dyc_status_message_window

0x369f,	// (0x000123ab) popup_grid_large_graphic_window_ParamLimits

0x369f,	// (0x000123ab) popup_grid_large_graphic_window

0x374f,	// (0x0001245b) popup_loc_request_window_ParamLimits

0x374f,	// (0x0001245b) popup_loc_request_window

0x384b,	// (0x00012557) popup_wml_address_window_ParamLimits

0x384b,	// (0x00012557) popup_wml_address_window

0x3415,	// (0x00012121) call_muted_g1

0x30c9,	// (0x00011dd5) popup_call_audio_conf_window_ParamLimits

0x30c9,	// (0x00011dd5) popup_call_audio_conf_window

0x3429,	// (0x00012135) popup_call_audio_first_window_ParamLimits

0x3429,	// (0x00012135) popup_call_audio_first_window

0x349f,	// (0x000121ab) popup_call_audio_in_window_ParamLimits

0x349f,	// (0x000121ab) popup_call_audio_in_window

0x34db,	// (0x000121e7) popup_call_audio_out_window_ParamLimits

0x34db,	// (0x000121e7) popup_call_audio_out_window

0x3515,	// (0x00012221) popup_call_audio_second_window_ParamLimits

0x3515,	// (0x00012221) popup_call_audio_second_window

0x356b,	// (0x00012277) popup_call_audio_wait_window_ParamLimits

0x356b,	// (0x00012277) popup_call_audio_wait_window

0x35a0,	// (0x000122ac) popup_number_entry_window_ParamLimits

0x35a0,	// (0x000122ac) popup_number_entry_window

0x94db,	// (0x000181e7) bg_popup_call_pane_cp05_ParamLimits

0x94db,	// (0x000181e7) bg_popup_call_pane_cp05

0x94fb,	// (0x00018207) popup_number_entry_window_t1

0x950e,	// (0x0001821a) popup_number_entry_window_t2

0x9520,	// (0x0001822c) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0001ddd6) popup_number_entry_window_t

0x9532,	// (0x0001823e) text_title_cp2

0x9545,	// (0x00018251) bg_popup_call_pane_cp_ParamLimits

0x9545,	// (0x00018251) bg_popup_call_pane_cp

0x9553,	// (0x0001825f) call_thumbnail_pane

0x955b,	// (0x00018267) popup_call_audio_in_window_g1_ParamLimits

0x955b,	// (0x00018267) popup_call_audio_in_window_g1

0x9567,	// (0x00018273) popup_call_audio_in_window_g2_ParamLimits

0x9567,	// (0x00018273) popup_call_audio_in_window_g2

0x9573,	// (0x0001827f) popup_call_audio_in_window_g3_ParamLimits

0x9573,	// (0x0001827f) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0001dddf) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0001dddf) popup_call_audio_in_window_g

0x957f,	// (0x0001828b) popup_call_audio_in_window_t1_ParamLimits

0x957f,	// (0x0001828b) popup_call_audio_in_window_t1

0x959b,	// (0x000182a7) popup_call_audio_in_window_t2_ParamLimits

0x959b,	// (0x000182a7) popup_call_audio_in_window_t2

0x95b7,	// (0x000182c3) popup_call_audio_in_window_t3_ParamLimits

0x95b7,	// (0x000182c3) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0001dde6) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0001dde6) popup_call_audio_in_window_t

0x9545,	// (0x00018251) bg_popup_call_pane_cp01_ParamLimits

0x9545,	// (0x00018251) bg_popup_call_pane_cp01

0x9553,	// (0x0001825f) call_thumbnail_pane_cp02

0x95ca,	// (0x000182d6) call_type_pane_cp022

0x95d2,	// (0x000182de) popup_call_audio_out_window_g1_ParamLimits

0x95d2,	// (0x000182de) popup_call_audio_out_window_g1

0x95e4,	// (0x000182f0) popup_call_audio_out_window_g2_ParamLimits

0x95e4,	// (0x000182f0) popup_call_audio_out_window_g2

0x95f0,	// (0x000182fc) popup_call_audio_out_window_g3_ParamLimits

0x95f0,	// (0x000182fc) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0001dded) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0001dded) popup_call_audio_out_window_g

0x9602,	// (0x0001830e) popup_call_audio_out_window_t1_ParamLimits

0x9602,	// (0x0001830e) popup_call_audio_out_window_t1

0x961a,	// (0x00018326) popup_call_audio_out_window_t2_ParamLimits

0x961a,	// (0x00018326) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0001ddf4) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0001ddf4) popup_call_audio_out_window_t

0x962f,	// (0x0001833b) bg_popup_call_pane_ParamLimits

0x962f,	// (0x0001833b) bg_popup_call_pane

0x06cd,	// (0x0000f3d9) call_thumbnail_pane_cp_ParamLimits

0x06cd,	// (0x0000f3d9) call_thumbnail_pane_cp

0x96b3,	// (0x000183bf) call_type_pane_cp01_ParamLimits

0x96b3,	// (0x000183bf) call_type_pane_cp01

0x96f7,	// (0x00018403) popup_call_audio_first_window_g1_ParamLimits

0x96f7,	// (0x00018403) popup_call_audio_first_window_g1

0x9743,	// (0x0001844f) popup_call_audio_first_window_g2_ParamLimits

0x9743,	// (0x0001844f) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0001ddf9) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0001ddf9) popup_call_audio_first_window_g

0x9787,	// (0x00018493) popup_call_audio_first_window_t1_ParamLimits

0x9787,	// (0x00018493) popup_call_audio_first_window_t1

0x9833,	// (0x0001853f) popup_call_audio_first_window_t4_ParamLimits

0x9833,	// (0x0001853f) popup_call_audio_first_window_t4

0x98bf,	// (0x000185cb) popup_call_audio_first_window_t5_ParamLimits

0x98bf,	// (0x000185cb) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0001ddfe) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0001ddfe) popup_call_audio_first_window_t

0x98ee,	// (0x000185fa) bg_popup_call_pane_cp02

0x98f8,	// (0x00018604) call_type_pane_cp023

0x9900,	// (0x0001860c) popup_call_audio_wait_window_g1

0x9908,	// (0x00018614) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001de05) popup_call_audio_wait_window_g

0x9910,	// (0x0001861c) popup_call_audio_wait_window_t3

0x991e,	// (0x0001862a) bg_popup_call_pane_cp03_ParamLimits

0x991e,	// (0x0001862a) bg_popup_call_pane_cp03

0x997e,	// (0x0001868a) call_thumbnail_pane_cp011_ParamLimits

0x997e,	// (0x0001868a) call_thumbnail_pane_cp011

0x998a,	// (0x00018696) call_type_pane_cp034_ParamLimits

0x998a,	// (0x00018696) call_type_pane_cp034

0x99c6,	// (0x000186d2) popup_call_audio_second_window_g1_ParamLimits

0x99c6,	// (0x000186d2) popup_call_audio_second_window_g1

0x9a02,	// (0x0001870e) popup_call_audio_second_window_g2_ParamLimits

0x9a02,	// (0x0001870e) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0001de0a) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0001de0a) popup_call_audio_second_window_g

0x9a3e,	// (0x0001874a) popup_call_audio_second_window_t1_ParamLimits

0x9a3e,	// (0x0001874a) popup_call_audio_second_window_t1

0x9abf,	// (0x000187cb) popup_call_audio_second_window_t2_ParamLimits

0x9abf,	// (0x000187cb) popup_call_audio_second_window_t2

0x9af5,	// (0x00018801) popup_call_audio_second_window_t3_ParamLimits

0x9af5,	// (0x00018801) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0001de0f) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0001de0f) popup_call_audio_second_window_t

0x98ee,	// (0x000185fa) bg_popup_call_pane_cp04

0x9b2b,	// (0x00018837) list_conf_pane

0x9b33,	// (0x0001883f) popup_call_audio_conf_window_t1

0x9b41,	// (0x0001884d) call_thumbnail_pane_g1

0x9b49,	// (0x00018855) bg_pinb_pane_ParamLimits

0x9b49,	// (0x00018855) bg_pinb_pane

0x9b57,	// (0x00018863) find_pinb_pane

0x9b60,	// (0x0001886c) listscroll_pinb_pane_ParamLimits

0x9b60,	// (0x0001886c) listscroll_pinb_pane

0x9b6f,	// (0x0001887b) pinb_bg_pane_g1

0x06f1,	// (0x0000f3fd) pinb_bg_pane_g2

0x06fd,	// (0x0000f409) pinb_bg_pane_g3

0x0709,	// (0x0000f415) pinb_bg_pane_g4

0x0715,	// (0x0000f421) pinb_bg_pane_g5

0x0721,	// (0x0000f42d) pinb_bg_pane_g6

0x072c,	// (0x0000f438) pinb_bg_pane_g7

0x0737,	// (0x0000f443) pinb_bg_pane_g8

0x0742,	// (0x0000f44e) pinb_bg_pane_g9

0x074c,	// (0x0000f458) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0001de16) pinb_bg_pane_g

0x0769,	// (0x0000f475) grid_pinb_pane

0x0772,	// (0x0000f47e) list_pinb_pane

0x077b,	// (0x0000f487) scroll_pane_cp01_ParamLimits

0x077b,	// (0x0000f487) scroll_pane_cp01

0x9b79,	// (0x00018885) find_pinb_pane_g1_ParamLimits

0x9b79,	// (0x00018885) find_pinb_pane_g1

0x9b91,	// (0x0001889d) find_pinb_pane_t1

0x9ba3,	// (0x000188af) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0001de30) find_pinb_pane_t

0x9bb8,	// (0x000188c4) input_focus_pane_cp01_ParamLimits

0x9bb8,	// (0x000188c4) input_focus_pane_cp01

0x078d,	// (0x0000f499) cell_pinb_pane_ParamLimits

0x078d,	// (0x0000f499) cell_pinb_pane

0x07b8,	// (0x0000f4c4) cell_pinb_pane_g1_ParamLimits

0x07b8,	// (0x0000f4c4) cell_pinb_pane_g1

0x9bc4,	// (0x000188d0) cell_pinb_pane_g2_ParamLimits

0x9bc4,	// (0x000188d0) cell_pinb_pane_g2

0x9bd0,	// (0x000188dc) cell_pinb_pane_g3_ParamLimits

0x9bd0,	// (0x000188dc) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0001de35) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0001de35) cell_pinb_pane_g

0x98ee,	// (0x000185fa) grid_highlight_pane_cp01

0x07cb,	// (0x0000f4d7) list_pinb_item_pane_ParamLimits

0x07cb,	// (0x0000f4d7) list_pinb_item_pane

0x98ee,	// (0x000185fa) list_highlight_pane_cp02

0x07de,	// (0x0000f4ea) list_pinb_item_pane_g1_ParamLimits

0x07de,	// (0x0000f4ea) list_pinb_item_pane_g1

0x07eb,	// (0x0000f4f7) list_pinb_item_pane_g2_ParamLimits

0x07eb,	// (0x0000f4f7) list_pinb_item_pane_g2

0x07f7,	// (0x0000f503) list_pinb_item_pane_g3_ParamLimits

0x07f7,	// (0x0000f503) list_pinb_item_pane_g3

0x0808,	// (0x0000f514) list_pinb_item_pane_g4_ParamLimits

0x0808,	// (0x0000f514) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0001de3c) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0001de3c) list_pinb_item_pane_g

0x0814,	// (0x0000f520) list_pinb_item_pane_t1_ParamLimits

0x0814,	// (0x0000f520) list_pinb_item_pane_t1

0x0849,	// (0x0000f555) calc_display_pane

0x0871,	// (0x0000f57d) calc_paper_pane

0x0894,	// (0x0000f5a0) grid_calc_pane

0x98ee,	// (0x000185fa) bg_list_pane_cp01

0x08c2,	// (0x0000f5ce) clock_g1

0x08ca,	// (0x0000f5d6) clock_g2

0x0001,

0xf139,	// (0x0001de45) clock_g

0x08d2,	// (0x0000f5de) clock_t1_ParamLimits

0x08d2,	// (0x0000f5de) clock_t1

0x08e7,	// (0x0000f5f3) clock_t2_ParamLimits

0x08e7,	// (0x0000f5f3) clock_t2

0x08f9,	// (0x0000f605) clock_t3_ParamLimits

0x08f9,	// (0x0000f605) clock_t3

0x090b,	// (0x0000f617) clock_t4_ParamLimits

0x090b,	// (0x0000f617) clock_t4

0x091d,	// (0x0000f629) clock_t5_ParamLimits

0x091d,	// (0x0000f629) clock_t5

0x0932,	// (0x0000f63e) clock_t6_ParamLimits

0x0932,	// (0x0000f63e) clock_t6

0x0944,	// (0x0000f650) clock_t7_ParamLimits

0x0944,	// (0x0000f650) clock_t7

0x0956,	// (0x0000f662) clock_t8_ParamLimits

0x0956,	// (0x0000f662) clock_t8

0x096a,	// (0x0000f676) clock_t9_ParamLimits

0x096a,	// (0x0000f676) clock_t9

0x0008,

0xf13e,	// (0x0001de4a) clock_t_ParamLimits

0xf13e,	// (0x0001de4a) clock_t

0x9be4,	// (0x000188f0) popup_clock_analogue_window_cp02

0x9be4,	// (0x000188f0) popup_clock_digital_window_cp01

0x9bec,	// (0x000188f8) listscroll_help_pane

0x98ee,	// (0x000185fa) phob_pre_status_pane

0x9bf6,	// (0x00018902) grid_qdial_pane

0x9b49,	// (0x00018855) listscroll_mce_pane

0x9b49,	// (0x00018855) bg_notes_pane

0x9c00,	// (0x0001890c) list_notes_pane

0x097e,	// (0x0000f68a) scroll_pane_cp06

0x9c0e,	// (0x0001891a) bg_calc_paper_pane

0x9c22,	// (0x0001892e) list_calc_pane

0x9c3c,	// (0x00018948) bg_calc_display_pane

0x0992,	// (0x0000f69e) calc_display_pane_t1

0x09a4,	// (0x0000f6b0) calc_display_pane_t2

0x9c48,	// (0x00018954) calc_display_pane_t3

0x0002,

0xf151,	// (0x0001de5d) calc_display_pane_t

0x09b6,	// (0x0000f6c2) cell_calc_pane_ParamLimits

0x09b6,	// (0x0000f6c2) cell_calc_pane

0x9c5a,	// (0x00018966) bg_calc_paper_pane_g1

0x9c66,	// (0x00018972) bg_calc_paper_pane_g2

0x9c72,	// (0x0001897e) bg_calc_paper_pane_g3

0x9c7e,	// (0x0001898a) bg_calc_paper_pane_g4

0x9c8a,	// (0x00018996) bg_calc_paper_pane_g5

0x09ed,	// (0x0000f6f9) bg_calc_paper_pane_g6

0x09fc,	// (0x0000f708) bg_calc_paper_pane_g7

0x0a0b,	// (0x0000f717) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0001de64) bg_calc_paper_pane_g

0x0a1e,	// (0x0000f72a) calc_bg_paper_pane_g9

0x0a31,	// (0x0000f73d) list_calc_item_pane_ParamLimits

0x0a31,	// (0x0000f73d) list_calc_item_pane

0x9c96,	// (0x000189a2) list_calc_item_pane_g1

0x9ca3,	// (0x000189af) list_calc_item_pane_t1_ParamLimits

0x9ca3,	// (0x000189af) list_calc_item_pane_t1

0x0a4a,	// (0x0000f756) list_calc_item_pane_t2_ParamLimits

0x0a4a,	// (0x0000f756) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0001de75) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0001de75) list_calc_item_pane_t

0x9cb5,	// (0x000189c1) cell_calc_pane_g1

0x9cbf,	// (0x000189cb) grid_highlight_pane_cp02

0x9ce1,	// (0x000189ed) bg_calc_display_pane_g1

0x9cea,	// (0x000189f6) bg_calc_display_pane_g2

0x9cf4,	// (0x00018a00) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0001de7f) bg_calc_display_pane_g

0x0a7c,	// (0x0000f788) cell_qdial_pane_ParamLimits

0x0a7c,	// (0x0000f788) cell_qdial_pane

0x0a90,	// (0x0000f79c) cell_qdial_pane_g1_ParamLimits

0x0a90,	// (0x0000f79c) cell_qdial_pane_g1

0x0aa6,	// (0x0000f7b2) cell_qdial_pane_g2_ParamLimits

0x0aa6,	// (0x0000f7b2) cell_qdial_pane_g2

0x9cfd,	// (0x00018a09) cell_qdial_pane_g3_ParamLimits

0x9cfd,	// (0x00018a09) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0001de86) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0001de86) cell_qdial_pane_g

0x0acc,	// (0x0000f7d8) cell_qdial_pane_t1_ParamLimits

0x0acc,	// (0x0000f7d8) cell_qdial_pane_t1

0x0ae4,	// (0x0000f7f0) cell_qdial_pane_t2_ParamLimits

0x0ae4,	// (0x0000f7f0) cell_qdial_pane_t2

0x0af7,	// (0x0000f803) cell_qdial_pane_t3_ParamLimits

0x0af7,	// (0x0000f803) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0001de8f) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0001de8f) cell_qdial_pane_t

0x98ee,	// (0x000185fa) grid_highlight_pane_cp04

0x9d09,	// (0x00018a15) thumbnail_qdial_pane_ParamLimits

0x9d09,	// (0x00018a15) thumbnail_qdial_pane

0x9d65,	// (0x00018a71) list_help_pane

0x9d6e,	// (0x00018a7a) scroll_pane_cp02

0x9d77,	// (0x00018a83) help_list_pane_t1_ParamLimits

0x9d77,	// (0x00018a83) help_list_pane_t1

0x9d95,	// (0x00018aa1) bg_notes_pane_g2

0x9d9d,	// (0x00018aa9) bg_notes_pane_g3

0x9da5,	// (0x00018ab1) notes_bg_pane_g1

0x9dad,	// (0x00018ab9) notes_bg_pane_g4

0x9db5,	// (0x00018ac1) notes_bg_pane_g5

0x9dbd,	// (0x00018ac9) notes_bg_pane_g6

0x9dc5,	// (0x00018ad1) notes_bg_pane_g7

0x9dcd,	// (0x00018ad9) notes_bg_pane_g8

0x9dd5,	// (0x00018ae1) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0001dead) notes_bg_pane_g

0x0b0a,	// (0x0000f816) list_notes_text_pane_ParamLimits

0x0b0a,	// (0x0000f816) list_notes_text_pane

0x9ddd,	// (0x00018ae9) list_notes_text_pane_g1

0x9de6,	// (0x00018af2) list_notes_text_pane_t1

0x0b20,	// (0x0000f82c) listscroll_cale_week_pane

0x0b4c,	// (0x0000f858) bg_cale_heading_pane

0x9e0e,	// (0x00018b1a) bg_cale_pane_cp01

0x0b64,	// (0x0000f870) cale_week_corner_pane

0x0b83,	// (0x0000f88f) cale_week_day_heading_pane

0x0ba0,	// (0x0000f8ac) cale_week_scroll_pane_g1

0x0bb3,	// (0x0000f8bf) cale_week_scroll_pane_g2

0x0bcb,	// (0x0000f8d7) cale_week_scroll_pane_g3

0x0be3,	// (0x0000f8ef) cale_week_scroll_pane_g4

0x0bfb,	// (0x0000f907) cale_week_scroll_pane_g5

0x0c1b,	// (0x0000f927) cale_week_scroll_pane_g6

0x0c3b,	// (0x0000f947) cale_week_scroll_pane_g7

0x0c5b,	// (0x0000f967) cale_week_scroll_pane_g8

0x0c7f,	// (0x0000f98b) cale_week_scroll_pane_g9

0x0c97,	// (0x0000f9a3) cale_week_scroll_pane_g10

0x0caf,	// (0x0000f9bb) cale_week_scroll_pane_g11

0x0cc7,	// (0x0000f9d3) cale_week_scroll_pane_g12

0x0cdf,	// (0x0000f9eb) cale_week_scroll_pane_g13

0x0cdf,	// (0x0000f9eb) cale_week_scroll_pane_g14

0x0cdf,	// (0x0000f9eb) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0001debc) cale_week_scroll_pane_g

0x0d1b,	// (0x0000fa27) cale_week_time_pane

0x0d3f,	// (0x0000fa4b) grid_cale_week_pane

0x9e3d,	// (0x00018b49) scroll_pane_cp08

0x0d65,	// (0x0000fa71) cell_cale_week_pane_ParamLimits

0x0d65,	// (0x0000fa71) cell_cale_week_pane

0x0df3,	// (0x0000faff) cale_week_day_heading_pane_t1

0x0e1d,	// (0x0000fb29) cale_week_day_heading_pane_t2

0x0e4c,	// (0x0000fb58) cale_week_day_heading_pane_t3

0x0e7b,	// (0x0000fb87) cale_week_day_heading_pane_t4

0x0eaa,	// (0x0000fbb6) cale_week_day_heading_pane_t5

0x0ee1,	// (0x0000fbed) cale_week_day_heading_pane_t6

0x0f18,	// (0x0000fc24) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0001dedd) cale_week_day_heading_pane_t

0x9e5a,	// (0x00018b66) bg_cale_side_pane

0x0f42,	// (0x0000fc4e) cale_week_time_pane_t1

0x0f5c,	// (0x0000fc68) cale_week_time_pane_t2

0x0f76,	// (0x0000fc82) cale_week_time_pane_t3

0x0f90,	// (0x0000fc9c) cale_week_time_pane_t4

0x0faa,	// (0x0000fcb6) cale_week_time_pane_t5

0x0fc4,	// (0x0000fcd0) cale_week_time_pane_t6

0x0fde,	// (0x0000fcea) cale_week_time_pane_t7

0x0ff8,	// (0x0000fd04) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0001deec) cale_week_time_pane_t

0x1018,	// (0x0000fd24) cell_cale_week_pane_g2

0x103c,	// (0x0000fd48) cell_cale_week_pane_g3_ParamLimits

0x103c,	// (0x0000fd48) cell_cale_week_pane_g3

0x9e68,	// (0x00018b74) grid_highlight_pane_cp07

0x9e70,	// (0x00018b7c) listscroll_gms_pane

0x9e7a,	// (0x00018b86) grid_gms_pane

0x9e83,	// (0x00018b8f) listscroll_gms_pane_g1

0x9e8b,	// (0x00018b97) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0001defd) listscroll_gms_pane_g

0x1054,	// (0x0000fd60) scroll_pane_cp010

0x105f,	// (0x0000fd6b) cell_gms_pane_ParamLimits

0x105f,	// (0x0000fd6b) cell_gms_pane

0x1071,	// (0x0000fd7d) cell_gms_pane_g1

0x9e93,	// (0x00018b9f) cell_gms_pane_g2

0x9e9b,	// (0x00018ba7) cell_gms_pane_g3

0x9ea4,	// (0x00018bb0) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0001df02) cell_gms_pane_g

0x9ead,	// (0x00018bb9) grid_highlight_pane_cp09

0x33bf,	// (0x000120cb) phob_pre_status_pane_g1

0x33c7,	// (0x000120d3) phob_pre_status_pane_g2

0x33cf,	// (0x000120db) phob_pre_status_pane_g3

0x33d7,	// (0x000120e3) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0001e300) phob_pre_status_pane_g

0x33e7,	// (0x000120f3) phob_pre_status_pane_t1

0x33f5,	// (0x00012101) phob_pre_status_pane_t2

0x3405,	// (0x00012111) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0001e30b) phob_pre_status_pane_t

0x9eb5,	// (0x00018bc1) bg_list_pane_cp05

0x1081,	// (0x0000fd8d) grid_vorec_pane

0x1089,	// (0x0000fd95) vorec_t1

0x1097,	// (0x0000fda3) vorec_t2

0x10a5,	// (0x0000fdb1) vorec_t3

0x10b3,	// (0x0000fdbf) vorec_t4

0x9437,	// (0x00018143) vorec_t5

0x9445,	// (0x00018151) vorec_t6

0x0004,

0xf1ff,	// (0x0001df0b) vorec_t

0x9453,	// (0x0001815f) wait_bar_pane_cp01

0x10cf,	// (0x0000fddb) cell_vorec_pane_ParamLimits

0x10cf,	// (0x0000fddb) cell_vorec_pane

0x9ebd,	// (0x00018bc9) cell_vorec_pane_g1

0x98ee,	// (0x000185fa) grid_highlight_pane_cp05

0x10fa,	// (0x0000fe06) cams_zoom_pane

0x1109,	// (0x0000fe15) image_vga_pane

0x1123,	// (0x0000fe2f) main_camera_pane_g1

0x1135,	// (0x0000fe41) main_camera_pane_g2

0x1145,	// (0x0000fe51) main_camera_pane_g3

0x1155,	// (0x0000fe61) main_camera_pane_g4

0x1165,	// (0x0000fe71) main_camera_pane_g5

0x1175,	// (0x0000fe81) main_camera_pane_g6

0x1185,	// (0x0000fe91) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0001df16) main_camera_pane_g

0x1195,	// (0x0000fea1) main_camera_pane_t1

0x11ab,	// (0x0000feb7) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0001df27) main_camera_pane_t

0x11e5,	// (0x0000fef1) cams_zoom_pane_cp_ParamLimits

0x11e5,	// (0x0000fef1) cams_zoom_pane_cp

0x120d,	// (0x0000ff19) image_cif_pane_ParamLimits

0x120d,	// (0x0000ff19) image_cif_pane

0x1248,	// (0x0000ff54) image_subqcif_pane

0x1250,	// (0x0000ff5c) main_video_pane_g1_ParamLimits

0x1250,	// (0x0000ff5c) main_video_pane_g1

0x1274,	// (0x0000ff80) main_video_pane_g2_ParamLimits

0x1274,	// (0x0000ff80) main_video_pane_g2

0x12a8,	// (0x0000ffb4) main_video_pane_g3_ParamLimits

0x12a8,	// (0x0000ffb4) main_video_pane_g3

0x12d6,	// (0x0000ffe2) main_video_pane_g4_ParamLimits

0x12d6,	// (0x0000ffe2) main_video_pane_g4

0x1304,	// (0x00010010) main_video_pane_g5_ParamLimits

0x1304,	// (0x00010010) main_video_pane_g5

0x9ed3,	// (0x00018bdf) main_video_pane_g6_ParamLimits

0x9ed3,	// (0x00018bdf) main_video_pane_g6

0x0006,

0xf220,	// (0x0001df2c) main_video_pane_g_ParamLimits

0xf220,	// (0x0001df2c) main_video_pane_g

0x132d,	// (0x00010039) main_video_pane_t1_ParamLimits

0x132d,	// (0x00010039) main_video_pane_t1

0x9eed,	// (0x00018bf9) cams_zoom_pane_g1

0x9ef6,	// (0x00018c02) cams_zoom_pane_g2

0x9eff,	// (0x00018c0b) cams_zoom_pane_g3

0x9f08,	// (0x00018c14) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0001df3b) cams_zoom_pane_g

0x138a,	// (0x00010096) grid_cams_pane

0x13a4,	// (0x000100b0) linegrid_cams_pane

0x13b7,	// (0x000100c3) cell_cams_pane_ParamLimits

0x13b7,	// (0x000100c3) cell_cams_pane

0x9f11,	// (0x00018c1d) cams_burst_image_pane

0x9f19,	// (0x00018c25) cell_cams_pane_g1

0x98ee,	// (0x000185fa) grid_highlight_pane_cp03

0x9cb5,	// (0x000189c1) mp_bg_pane_g1

0x98ee,	// (0x000185fa) bg_list_pane_cp03

0xbd55,	// (0x0001aa61) bg_mp_pane

0xbd5d,	// (0x0001aa69) grid_mp_pane

0xbd65,	// (0x0001aa71) media_player_g1

0xbd6d,	// (0x0001aa79) media_player_t1

0xbd7b,	// (0x0001aa87) media_player_t2

0xbd89,	// (0x0001aa95) media_player_t3

0xbd97,	// (0x0001aaa3) media_player_t4

0xbda5,	// (0x0001aab1) media_player_t5

0xbdb3,	// (0x0001aabf) media_player_t6

0xbdc1,	// (0x0001aacd) media_player_t7

0x0006,

0xf5de,	// (0x0001e2ea) media_player_t

0xbdcf,	// (0x0001aadb) wait_bar_pane_cp02

0xf5c3,	// (0x0001e2cf) main_usb_pane_t

0x33b6,	// (0x000120c2) cell_mp_pane

0x9cb5,	// (0x000189c1) cell_mp_pane_g1

0x98ee,	// (0x000185fa) grid_highlight_pane_cp06

0x9f21,	// (0x00018c2d) grid_skin_colour_pane

0x9f29,	// (0x00018c35) list_highlight_pane_cp03

0x14ee,	// (0x000101fa) skin_g1

0x9f31,	// (0x00018c3d) skin_t1

0x9f40,	// (0x00018c4c) skin_t2

0x0001,

0xf264,	// (0x0001df70) skin_t

0x14f6,	// (0x00010202) cell_skin_colour_pane_ParamLimits

0x14f6,	// (0x00010202) cell_skin_colour_pane

0x9f4e,	// (0x00018c5a) cell_skin_colour_pane_g1

0x156f,	// (0x0001027b) call_video_g1_ParamLimits

0x156f,	// (0x0001027b) call_video_g1

0x158b,	// (0x00010297) call_video_g2_ParamLimits

0x158b,	// (0x00010297) call_video_g2

0x0001,

0xf269,	// (0x0001df75) call_video_g_ParamLimits

0xf269,	// (0x0001df75) call_video_g

0x15dd,	// (0x000102e9) call_video_uplink_pane_cp1_ParamLimits

0x15dd,	// (0x000102e9) call_video_uplink_pane_cp1

0x9f60,	// (0x00018c6c) call_video_uplink_pane_cp2

0x167c,	// (0x00010388) video_down_crop_pane_ParamLimits

0x167c,	// (0x00010388) video_down_crop_pane

0x1765,	// (0x00010471) video_down_pane_ParamLimits

0x1765,	// (0x00010471) video_down_pane

0x9f68,	// (0x00018c74) video_down_subqcif_pane_ParamLimits

0x9f68,	// (0x00018c74) video_down_subqcif_pane

0x9f80,	// (0x00018c8c) video_down_subqcif_pane_cp_ParamLimits

0x9f80,	// (0x00018c8c) video_down_subqcif_pane_cp

0x9fa6,	// (0x00018cb2) im_reading_pane_ParamLimits

0x9fa6,	// (0x00018cb2) im_reading_pane

0x1873,	// (0x0001057f) im_writing_pane_ParamLimits

0x1873,	// (0x0001057f) im_writing_pane

0x1889,	// (0x00010595) im_reading_pane_t1

0x9fc0,	// (0x00018ccc) list_im_pane

0x9fd1,	// (0x00018cdd) scroll_pane_cp07

0x18c3,	// (0x000105cf) im_writing_pane_t1_ParamLimits

0x18c3,	// (0x000105cf) im_writing_pane_t1

0x9fea,	// (0x00018cf6) im_writing_pane_t2_ParamLimits

0x9fea,	// (0x00018cf6) im_writing_pane_t2

0x0001,

0xf273,	// (0x0001df7f) im_writing_pane_t_ParamLimits

0xf273,	// (0x0001df7f) im_writing_pane_t

0x98ee,	// (0x000185fa) input_focus_pane_cp04

0x98ee,	// (0x000185fa) input_focus_pane_cp05

0x18d8,	// (0x000105e4) list_im_single_pane_ParamLimits

0x18d8,	// (0x000105e4) list_im_single_pane

0x18ed,	// (0x000105f9) list_single_im_pane_t1

0x3376,	// (0x00012082) blid_accuracy_pane

0x337e,	// (0x0001208a) blid_compass_pane

0x3388,	// (0x00012094) main_location_t1

0x3398,	// (0x000120a4) main_location_t2

0x33a8,	// (0x000120b4) main_location_t3

0x0002,

0xf5ed,	// (0x0001e2f9) main_location_t

0x98ee,	// (0x000185fa) aid_levels_location

0x9cb5,	// (0x000189c1) blid_accuracy_pane_g1

0x9cb5,	// (0x000189c1) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0001dfe1) blid_accuracy_pane_g

0xa032,	// (0x00018d3e) wml_content_pane

0xa070,	// (0x00018d7c) wml_button_pane_ParamLimits

0xa070,	// (0x00018d7c) wml_button_pane

0x18fc,	// (0x00010608) wml_list_single_large_pane_ParamLimits

0x18fc,	// (0x00010608) wml_list_single_large_pane

0x1911,	// (0x0001061d) wml_list_single_medium_pane_ParamLimits

0x1911,	// (0x0001061d) wml_list_single_medium_pane

0x1928,	// (0x00010634) wml_list_single_small_pane_ParamLimits

0x1928,	// (0x00010634) wml_list_single_small_pane

0xa084,	// (0x00018d90) wml_selection_box_pane_ParamLimits

0xa084,	// (0x00018d90) wml_selection_box_pane

0xa097,	// (0x00018da3) wml_list_single_pane_t1

0xa0a6,	// (0x00018db2) wml_list_single_medium_pane_t1

0xa0b5,	// (0x00018dc1) wml_list_single_large_pane_t1

0xa0c4,	// (0x00018dd0) input_focus_pane_cp02_ParamLimits

0xa0c4,	// (0x00018dd0) input_focus_pane_cp02

0xa0d7,	// (0x00018de3) wml_selection_box_pane_g1

0xa0e0,	// (0x00018dec) wml_selection_box_pane_t1_ParamLimits

0xa0e0,	// (0x00018dec) wml_selection_box_pane_t1

0x9b49,	// (0x00018855) bg_wml_button_pane_ParamLimits

0x9b49,	// (0x00018855) bg_wml_button_pane

0xa0f8,	// (0x00018e04) wml_button_pane_g1

0xa100,	// (0x00018e0c) wml_button_pane_t1

0xa0f8,	// (0x00018e04) wml_button_bg_pane_g1

0xa110,	// (0x00018e1c) wml_button_bg_pane_g2

0xa118,	// (0x00018e24) wml_button_bg_pane_g3

0xa120,	// (0x00018e2c) wml_button_bg_pane_g4

0xa128,	// (0x00018e34) wml_button_bg_pane_g5

0xa130,	// (0x00018e3c) wml_button_bg_pane_g6

0xa138,	// (0x00018e44) wml_button_bg_pane_g7

0xa140,	// (0x00018e4c) wml_button_bg_pane_g8

0xa148,	// (0x00018e54) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0001df84) wml_button_bg_pane_g

0x1941,	// (0x0001064d) bg_list_pane_cp02

0xa150,	// (0x00018e5c) mce_header_pane_ParamLimits

0xa150,	// (0x00018e5c) mce_header_pane

0xa166,	// (0x00018e72) mce_icon_pane

0xa166,	// (0x00018e72) mce_image_pane

0xa16f,	// (0x00018e7b) mce_text_pane_ParamLimits

0xa16f,	// (0x00018e7b) mce_text_pane

0x1949,	// (0x00010655) scroll_pane_cp03

0xa068,	// (0x00018d74) scroll_pane_cp04

0xa182,	// (0x00018e8e) scroll_pane_cp05_ParamLimits

0xa182,	// (0x00018e8e) scroll_pane_cp05

0x1953,	// (0x0001065f) mce_header_field_pane_ParamLimits

0x1953,	// (0x0001065f) mce_header_field_pane

0x196a,	// (0x00010676) mce_header_field_pane_2_ParamLimits

0x196a,	// (0x00010676) mce_header_field_pane_2

0x1980,	// (0x0001068c) mce_header_field_pane_3

0x1988,	// (0x00010694) list_single_mce_message_pane_ParamLimits

0x1988,	// (0x00010694) list_single_mce_message_pane

0x199e,	// (0x000106aa) list_single_mce_smart_pane_ParamLimits

0x199e,	// (0x000106aa) list_single_mce_smart_pane

0xa18e,	// (0x00018e9a) input_focus_pane_cp03

0xa197,	// (0x00018ea3) list_header_data_pane

0x19bf,	// (0x000106cb) mce_header_field_pane_t1

0x19cf,	// (0x000106db) list_single_mce_header_pane_ParamLimits

0x19cf,	// (0x000106db) list_single_mce_header_pane

0xa19f,	// (0x00018eab) list_single_mce_header_pane_t1

0xa1ae,	// (0x00018eba) list_single_mce_message_pane_g1

0xa1b6,	// (0x00018ec2) list_single_mce_message_pane_t1

0x1a09,	// (0x00010715) bg_cale_heading_pane_cp01_ParamLimits

0x1a09,	// (0x00010715) bg_cale_heading_pane_cp01

0xa1c4,	// (0x00018ed0) bg_cale_pane_cp02_ParamLimits

0xa1c4,	// (0x00018ed0) bg_cale_pane_cp02

0x1a43,	// (0x0001074f) cale_month_corner_pane

0x1a62,	// (0x0001076e) cale_month_day_heading_pane_ParamLimits

0x1a62,	// (0x0001076e) cale_month_day_heading_pane

0x1ab4,	// (0x000107c0) cale_month_pane_g1_ParamLimits

0x1ab4,	// (0x000107c0) cale_month_pane_g1

0x1ae3,	// (0x000107ef) cale_month_pane_g2_ParamLimits

0x1ae3,	// (0x000107ef) cale_month_pane_g2

0x1b13,	// (0x0001081f) cale_month_pane_g3_ParamLimits

0x1b13,	// (0x0001081f) cale_month_pane_g3

0x1b4f,	// (0x0001085b) cale_month_pane_g4_ParamLimits

0x1b4f,	// (0x0001085b) cale_month_pane_g4

0x1b8b,	// (0x00010897) cale_month_pane_g5_ParamLimits

0x1b8b,	// (0x00010897) cale_month_pane_g5

0x1bd3,	// (0x000108df) cale_month_pane_g6_ParamLimits

0x1bd3,	// (0x000108df) cale_month_pane_g6

0x1c1f,	// (0x0001092b) cale_month_pane_g7_ParamLimits

0x1c1f,	// (0x0001092b) cale_month_pane_g7

0x1c6f,	// (0x0001097b) cale_month_pane_g8_ParamLimits

0x1c6f,	// (0x0001097b) cale_month_pane_g8

0x1cc3,	// (0x000109cf) cale_month_pane_g9_ParamLimits

0x1cc3,	// (0x000109cf) cale_month_pane_g9

0x1d15,	// (0x00010a21) cale_month_pane_g10_ParamLimits

0x1d15,	// (0x00010a21) cale_month_pane_g10

0x1d67,	// (0x00010a73) cale_month_pane_g11_ParamLimits

0x1d67,	// (0x00010a73) cale_month_pane_g11

0x1db9,	// (0x00010ac5) cale_month_pane_g12_ParamLimits

0x1db9,	// (0x00010ac5) cale_month_pane_g12

0x1e0b,	// (0x00010b17) cale_month_pane_g13_ParamLimits

0x1e0b,	// (0x00010b17) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0001df97) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0001df97) cale_month_pane_g

0x1e5d,	// (0x00010b69) cale_month_week_pane

0x1e81,	// (0x00010b8d) grid_cale_month_pane_ParamLimits

0x1e81,	// (0x00010b8d) grid_cale_month_pane

0x1eca,	// (0x00010bd6) cale_month_day_heading_pane_t1

0x1f0c,	// (0x00010c18) cale_month_day_heading_pane_t2

0x1f41,	// (0x00010c4d) cale_month_day_heading_pane_t3

0x1f76,	// (0x00010c82) cale_month_day_heading_pane_t4

0x1fb3,	// (0x00010cbf) cale_month_day_heading_pane_t5

0x1ff8,	// (0x00010d04) cale_month_day_heading_pane_t6

0x203d,	// (0x00010d49) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0001dfb2) cale_month_day_heading_pane_t

0x9e5a,	// (0x00018b66) bg_cale_side_pane_cp01

0x208a,	// (0x00010d96) cale_month_week_pane_t1

0x20a3,	// (0x00010daf) cale_month_week_pane_t2

0x20bc,	// (0x00010dc8) cale_month_week_pane_t3

0x20d5,	// (0x00010de1) cale_month_week_pane_t4

0x20ee,	// (0x00010dfa) cale_month_week_pane_t5

0x2107,	// (0x00010e13) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0001dfc1) cale_month_week_pane_t

0x2120,	// (0x00010e2c) cell_cale_month_pane_ParamLimits

0x2120,	// (0x00010e2c) cell_cale_month_pane

0xa203,	// (0x00018f0f) cell_cale_month_pane_g1

0x2278,	// (0x00010f84) cell_cale_month_pane_t1_ParamLimits

0x2278,	// (0x00010f84) cell_cale_month_pane_t1

0x9e68,	// (0x00018b74) grid_highlight_pane_cp08

0x9cb5,	// (0x000189c1) main_smil_g1

0x22a4,	// (0x00010fb0) smil_status_pane

0xa20f,	// (0x00018f1b) smil_text_pane

0xbc35,	// (0x0001a941) bg_popup_call3_rect_pane_g8

0xbc3d,	// (0x0001a949) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e27a) bg_popup_call3_rect_pane_g

0xbf18,	// (0x0001ac24) smil_status_volume_pane_g1

0xa219,	// (0x00018f25) smil_status_pane_t1

0xbf4b,	// (0x0001ac57) volume_smil_pane

0xa230,	// (0x00018f3c) list_smil_text_pane

0x22b9,	// (0x00010fc5) scroll_pane_cp011

0x22c4,	// (0x00010fd0) smil_text_list_pane_t1_ParamLimits

0x22c4,	// (0x00010fd0) smil_text_list_pane_t1

0xa23a,	// (0x00018f46) aid_volume_smil_ParamLimits

0xa23a,	// (0x00018f46) aid_volume_smil

0x9cb5,	// (0x000189c1) smil_volume_pane_g1

0x9cb5,	// (0x000189c1) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0001dfe1) smil_volume_pane_g

0x0b20,	// (0x0000f82c) listscroll_cale_day_pane

0xa25c,	// (0x00018f68) bg_cale_pane

0xa274,	// (0x00018f80) list_cale_pane

0xa297,	// (0x00018fa3) scroll_pane_cp09

0xa2a8,	// (0x00018fb4) cale_bg_pane_g1

0xa2b0,	// (0x00018fbc) cale_bg_pane_g2

0xa2b8,	// (0x00018fc4) cale_bg_pane_g3

0xa2c0,	// (0x00018fcc) cale_bg_pane_g4

0xa2c8,	// (0x00018fd4) cale_bg_pane_g5

0xa2d0,	// (0x00018fdc) cale_bg_pane_g6

0xa2d8,	// (0x00018fe4) cale_bg_pane_g7

0xa2e0,	// (0x00018fec) cale_bg_pane_g8

0xa2e8,	// (0x00018ff4) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0001dfe6) cale_bg_pane_g

0x2310,	// (0x0001101c) list_cale_time_pane_ParamLimits

0x2310,	// (0x0001101c) list_cale_time_pane

0xa2f0,	// (0x00018ffc) list_cale_time_pane_g1_ParamLimits

0xa2f0,	// (0x00018ffc) list_cale_time_pane_g1

0xa2fc,	// (0x00019008) list_cale_time_pane_g2_ParamLimits

0xa2fc,	// (0x00019008) list_cale_time_pane_g2

0x2326,	// (0x00011032) list_cale_time_pane_g3_ParamLimits

0x2326,	// (0x00011032) list_cale_time_pane_g3

0x2334,	// (0x00011040) list_cale_time_pane_g4_ParamLimits

0x2334,	// (0x00011040) list_cale_time_pane_g4

0x2342,	// (0x0001104e) list_cale_time_pane_g5_ParamLimits

0x2342,	// (0x0001104e) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0001dff9) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0001dff9) list_cale_time_pane_g

0xa316,	// (0x00019022) list_cale_time_pane_t1_ParamLimits

0xa316,	// (0x00019022) list_cale_time_pane_t1

0xa33e,	// (0x0001904a) list_cale_time_pane_t2_ParamLimits

0xa33e,	// (0x0001904a) list_cale_time_pane_t2

0x26c4,	// (0x000113d0) aid_blid_cardinal_pane

0x2702,	// (0x0001140e) compass_pane_t4

0xa366,	// (0x00019072) list_cale_time_pane_t4_ParamLimits

0xa366,	// (0x00019072) list_cale_time_pane_t4

0x2710,	// (0x0001141c) compass_pane_t5

0x271e,	// (0x0001142a) compass_pane_t6

0x272c,	// (0x00011438) compass_pane_t7

0xa859,	// (0x00019565) navi_pane_cc_t1

0xaa48,	// (0x00019754) aid_phob_thumbnail_center_pane

0x2d8c,	// (0x00011a98) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0001e006) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0001e006) list_cale_time_pane_t

0x9545,	// (0x00018251) bg_popup_window_pane_cp02_ParamLimits

0x9545,	// (0x00018251) bg_popup_window_pane_cp02

0xa38e,	// (0x0001909a) heading_pane_cp01_ParamLimits

0xa38e,	// (0x0001909a) heading_pane_cp01

0xa39a,	// (0x000190a6) loc_req_pane_ParamLimits

0xa39a,	// (0x000190a6) loc_req_pane

0xa3aa,	// (0x000190b6) loc_type_pane_ParamLimits

0xa3aa,	// (0x000190b6) loc_type_pane

0xa3bc,	// (0x000190c8) loc_type_pane_t1_ParamLimits

0xa3bc,	// (0x000190c8) loc_type_pane_t1

0xa3ce,	// (0x000190da) loc_type_pane_t2_ParamLimits

0xa3ce,	// (0x000190da) loc_type_pane_t2

0xa3e0,	// (0x000190ec) loc_type_pane_t3_ParamLimits

0xa3e0,	// (0x000190ec) loc_type_pane_t3

0x0002,

0xf301,	// (0x0001e00d) loc_type_pane_t_ParamLimits

0xf301,	// (0x0001e00d) loc_type_pane_t

0xa3f2,	// (0x000190fe) list_loc_req_pane

0xa3fc,	// (0x00019108) scroll_pane_cp012

0x2350,	// (0x0001105c) list_single_loc_request_popup_menu_pane_ParamLimits

0x2350,	// (0x0001105c) list_single_loc_request_popup_menu_pane

0xa407,	// (0x00019113) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa407,	// (0x00019113) list_single_loc_request_popup_menu_pane_g1

0xa413,	// (0x0001911f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa413,	// (0x0001911f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0001e014) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0001e014) list_single_loc_request_popup_menu_pane_g

0xa41f,	// (0x0001912b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa41f,	// (0x0001912b) list_single_loc_request_popup_menu_pane_t1

0x9b49,	// (0x00018855) bg_popup_window_pane_cp03_ParamLimits

0x9b49,	// (0x00018855) bg_popup_window_pane_cp03

0xa435,	// (0x00019141) heading_loc_req_pane_ParamLimits

0xa435,	// (0x00019141) heading_loc_req_pane

0x235d,	// (0x00011069) popup_dyc_status_message_window_g1_ParamLimits

0x235d,	// (0x00011069) popup_dyc_status_message_window_g1

0x2371,	// (0x0001107d) popup_dyc_status_message_window_t1_ParamLimits

0x2371,	// (0x0001107d) popup_dyc_status_message_window_t1

0x2386,	// (0x00011092) popup_dyc_status_message_window_t2_ParamLimits

0x2386,	// (0x00011092) popup_dyc_status_message_window_t2

0x239b,	// (0x000110a7) popup_dyc_status_message_window_t3_ParamLimits

0x239b,	// (0x000110a7) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0001e019) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0001e019) popup_dyc_status_message_window_t

0x98ee,	// (0x000185fa) bg_heading_pane_cp01

0xa441,	// (0x0001914d) heading_loc_req_pane_g1

0xa449,	// (0x00019155) heading_loc_req_pane_g2

0xa451,	// (0x0001915d) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0001e020) heading_loc_req_pane_g

0xa459,	// (0x00019165) heading_loc_req_pane_t1

0xa468,	// (0x00019174) bg_popup_sub_pane_cp01_ParamLimits

0xa468,	// (0x00019174) bg_popup_sub_pane_cp01

0xa476,	// (0x00019182) popup_cale_events_window_g1_ParamLimits

0xa476,	// (0x00019182) popup_cale_events_window_g1

0xa496,	// (0x000191a2) popup_cale_events_window_g2_ParamLimits

0xa496,	// (0x000191a2) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0001e054) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0001e054) popup_cale_events_window_g

0xa4b6,	// (0x000191c2) popup_cale_events_window_t1_ParamLimits

0xa4b6,	// (0x000191c2) popup_cale_events_window_t1

0xa4c8,	// (0x000191d4) popup_cale_events_window_t2_ParamLimits

0xa4c8,	// (0x000191d4) popup_cale_events_window_t2

0xa506,	// (0x00019212) popup_cale_events_window_t3_ParamLimits

0xa506,	// (0x00019212) popup_cale_events_window_t3

0xa540,	// (0x0001924c) popup_cale_events_window_t4_ParamLimits

0xa540,	// (0x0001924c) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0001e059) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0001e059) popup_cale_events_window_t

0x2494,	// (0x000111a0) call_type_pane

0x24a4,	// (0x000111b0) popup_call_status_window_g1

0x24b8,	// (0x000111c4) popup_call_status_window_g2

0x24cc,	// (0x000111d8) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0001e062) popup_call_status_window_g

0xa576,	// (0x00019282) call_type_pane_g1

0xa57f,	// (0x0001928b) call_type_pane_g2

0x0001,

0xf35d,	// (0x0001e069) call_type_pane_g

0x98ee,	// (0x000185fa) bg_popup_sub_pane_cp02

0xa588,	// (0x00019294) listscroll_popup_wml_pane

0xa590,	// (0x0001929c) list_wml_pane

0xa59a,	// (0x000192a6) scroll_pane_cp013

0xa5a5,	// (0x000192b1) list_single_graphic_popup_wml_pane_ParamLimits

0xa5a5,	// (0x000192b1) list_single_graphic_popup_wml_pane

0x9cb5,	// (0x000189c1) list_single_graphic_popup_wml_pane_g1

0xa5b9,	// (0x000192c5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0001e06e) list_single_graphic_popup_wml_pane_g

0xa5c1,	// (0x000192cd) list_single_graphic_popup_wml_pane_t1

0xa5d7,	// (0x000192e3) aid_call_pane

0x9b41,	// (0x0001884d) popup_clock_analogue_window_g1

0x9b41,	// (0x0001884d) popup_clock_analogue_window_g2

0xa5df,	// (0x000192eb) popup_clock_analogue_window_g3

0xa5df,	// (0x000192eb) popup_clock_analogue_window_g4

0x9cb5,	// (0x000189c1) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0001e073) popup_clock_analogue_window_g

0xa5e7,	// (0x000192f3) popup_clock_analogue_window_t1

0xa5f5,	// (0x00019301) clock_digital_number_pane_ParamLimits

0xa5f5,	// (0x00019301) clock_digital_number_pane

0xa601,	// (0x0001930d) clock_digital_number_pane_cp02_ParamLimits

0xa601,	// (0x0001930d) clock_digital_number_pane_cp02

0xa60d,	// (0x00019319) clock_digital_number_pane_cp03_ParamLimits

0xa60d,	// (0x00019319) clock_digital_number_pane_cp03

0xa619,	// (0x00019325) clock_digital_number_pane_cp04_ParamLimits

0xa619,	// (0x00019325) clock_digital_number_pane_cp04

0xa625,	// (0x00019331) clock_digital_separator_pane_ParamLimits

0xa625,	// (0x00019331) clock_digital_separator_pane

0xa631,	// (0x0001933d) popup_clock_digital_window_t1

0x9cb5,	// (0x000189c1) clock_digital_number_pane_g1

0x9cb5,	// (0x000189c1) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0001dfe1) clock_digital_number_pane_g

0x9cb5,	// (0x000189c1) clock_digital_separator_pane_g1

0x9cb5,	// (0x000189c1) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0001dfe1) clock_digital_separator_pane_g

0x98ee,	// (0x000185fa) bg_popup_window_pane_cp04

0xa64e,	// (0x0001935a) heading_pane_cp03

0xa656,	// (0x00019362) listscroll_popup_gms_pane

0xa65e,	// (0x0001936a) grid_large_graphic_popup_pane

0xa668,	// (0x00019374) listscroll_popup_gms_pane_g1

0xa670,	// (0x0001937c) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0001e07e) listscroll_popup_gms_pane_g

0xa068,	// (0x00018d74) scroll_pane_cp014

0x24db,	// (0x000111e7) cell_large_graphic_popup_pane_ParamLimits

0x24db,	// (0x000111e7) cell_large_graphic_popup_pane

0x24f3,	// (0x000111ff) cell_large_graphic_popup_pane_g1_ParamLimits

0x24f3,	// (0x000111ff) cell_large_graphic_popup_pane_g1

0xa678,	// (0x00019384) cell_large_graphic_popup_pane_g2_ParamLimits

0xa678,	// (0x00019384) cell_large_graphic_popup_pane_g2

0xa684,	// (0x00019390) cell_large_graphic_popup_pane_g3_ParamLimits

0xa684,	// (0x00019390) cell_large_graphic_popup_pane_g3

0xa691,	// (0x0001939d) cell_large_graphic_popup_pane_g4_ParamLimits

0xa691,	// (0x0001939d) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0001e083) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0001e083) cell_large_graphic_popup_pane_g

0xa6a1,	// (0x000193ad) grid_highlight_pane_cp010

0x9cb5,	// (0x000189c1) bg_popup_call_pane_g1

0xa6ab,	// (0x000193b7) list_single_graphic_popup_conf_pane_ParamLimits

0xa6ab,	// (0x000193b7) list_single_graphic_popup_conf_pane

0xa6be,	// (0x000193ca) list_highlight_pane_cp01

0xa6c7,	// (0x000193d3) list_single_graphic_popup_conf_pane_g1

0xa6cf,	// (0x000193db) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0001e08c) list_single_graphic_popup_conf_pane_g

0xa6d7,	// (0x000193e3) list_single_graphic_popup_conf_pane_t1

0xa6e5,	// (0x000193f1) linegrid_cams_pane_g1

0x24ff,	// (0x0001120b) linegrid_cams_pane_g2

0x9e9b,	// (0x00018ba7) linegrid_cams_pane_g3

0xa6ee,	// (0x000193fa) linegrid_cams_pane_g4

0x2508,	// (0x00011214) linegrid_cams_pane_g5

0x2511,	// (0x0001121d) linegrid_cams_pane_g6

0x9ea4,	// (0x00018bb0) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0001e091) linegrid_cams_pane_g

0xa6f7,	// (0x00019403) popup_clock_analogue_window

0xa6f7,	// (0x00019403) popup_clock_digital_window

0x98ee,	// (0x000185fa) popup_phob_thumbnail_window

0x9cb5,	// (0x000189c1) call_video_uplink_pane_g1

0xa700,	// (0x0001940c) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0001e0a0) call_video_uplink_pane_g

0xa708,	// (0x00019414) video_uplink_pane

0xa710,	// (0x0001941c) mce_image_pane_g1

0x251c,	// (0x00011228) mce_image_pane_g2

0x2524,	// (0x00011230) mce_image_pane_g3

0x252c,	// (0x00011238) mce_image_pane_g4

0x2536,	// (0x00011242) mce_image_pane_g5

0x0004,

0xf399,	// (0x0001e0a5) mce_image_pane_g

0xa71a,	// (0x00019426) control_top_pane_stacon_cp01_ParamLimits

0xa71a,	// (0x00019426) control_top_pane_stacon_cp01

0xa72e,	// (0x0001943a) uni_indicator_pane_stacon_cp01_ParamLimits

0xa72e,	// (0x0001943a) uni_indicator_pane_stacon_cp01

0xa73f,	// (0x0001944b) bg_popup_sub_pane_cp03

0x253e,	// (0x0001124a) chi_dic_find_pane

0x2546,	// (0x00011252) listscroll_chi_dic_pane

0x254f,	// (0x0001125b) main_pane_chidic_g1

0x2562,	// (0x0001126e) chi_dic_find_pane_t1

0xa749,	// (0x00019455) find_chidic_pane

0xa752,	// (0x0001945e) chi_dic_list_pane_ParamLimits

0xa752,	// (0x0001945e) chi_dic_list_pane

0xa763,	// (0x0001946f) scroll_pane_cp020

0x2570,	// (0x0001127c) find_chidic_pane_t1

0x98ee,	// (0x000185fa) input_focus_pane_cp06

0x257f,	// (0x0001128b) list_chi_dic_pane_ParamLimits

0x257f,	// (0x0001128b) list_chi_dic_pane

0x2591,	// (0x0001129d) list_chi_dic_pane_t1_ParamLimits

0x2591,	// (0x0001129d) list_chi_dic_pane_t1

0x98ee,	// (0x000185fa) list_highlight_pane_cp020

0xa76b,	// (0x00019477) bg_cale_heading_pane_g1

0x25a4,	// (0x000112b0) bg_cale_heading_pane_g2

0x25ac,	// (0x000112b8) bg_cale_heading_pane_g3

0x25b4,	// (0x000112c0) bg_cale_heading_pane_g4

0x25be,	// (0x000112ca) bg_cale_heading_pane_g5

0x25c8,	// (0x000112d4) bg_cale_heading_pane_g6

0x25d0,	// (0x000112dc) bg_cale_heading_pane_g7

0x25d8,	// (0x000112e4) bg_cale_heading_pane_g8

0x25e2,	// (0x000112ee) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0001e0b0) bg_cale_heading_pane_g

0xa76b,	// (0x00019477) bg_cale_side_pane_g1

0x25ec,	// (0x000112f8) bg_cale_side_pane_g2

0x25f4,	// (0x00011300) bg_cale_side_pane_g3

0x25fc,	// (0x00011308) bg_cale_side_pane_g4

0x2604,	// (0x00011310) bg_cale_side_pane_g5

0x260c,	// (0x00011318) bg_cale_side_pane_g6

0x2614,	// (0x00011320) bg_cale_side_pane_g7

0x261c,	// (0x00011328) bg_cale_side_pane_g8

0x2624,	// (0x00011330) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0001e0c3) bg_cale_side_pane_g

0x262c,	// (0x00011338) popup_call_status_window_ParamLimits

0x262c,	// (0x00011338) popup_call_status_window

0xa773,	// (0x0001947f) stacon_top_pane

0xa77b,	// (0x00019487) status_pane_ParamLimits

0xa77b,	// (0x00019487) status_pane

0xa790,	// (0x0001949c) status_small_pane

0xa798,	// (0x000194a4) control_pane

0x98ee,	// (0x000185fa) stacon_bottom_pane

0xa7a0,	// (0x000194ac) list_single_mce_smart_pane_t1_ParamLimits

0xa7a0,	// (0x000194ac) list_single_mce_smart_pane_t1

0xa7b3,	// (0x000194bf) list_single_mce_smart_pane_t2_ParamLimits

0xa7b3,	// (0x000194bf) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0001e0d6) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0001e0d6) list_single_mce_smart_pane_t

0x2673,	// (0x0001137f) compass_pane

0x267c,	// (0x00011388) main_location2_pane_t1

0x268e,	// (0x0001139a) main_location2_pane_t2

0x26a0,	// (0x000113ac) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0001e0db) main_location2_pane_t

0xa7d2,	// (0x000194de) compass_pane_g1_ParamLimits

0xa7d2,	// (0x000194de) compass_pane_g1

0x26e4,	// (0x000113f0) compass_pane_t1

0x26f3,	// (0x000113ff) compass_pane_t2

0x0005,

0xf3d8,	// (0x0001e0e4) compass_pane_t

0x273a,	// (0x00011446) text_secondary_cp61

0xa850,	// (0x0001955c) navi_pane_cams_g5

0xa8cc,	// (0x000195d8) navi_pane_im_t1

0xa8da,	// (0x000195e6) navi_pane_mp_g1_ParamLimits

0xa8da,	// (0x000195e6) navi_pane_mp_g1

0xa8ee,	// (0x000195fa) navi_pane_mp_g2_ParamLimits

0xa8ee,	// (0x000195fa) navi_pane_mp_g2

0xa8fa,	// (0x00019606) navi_pane_mp_g3_ParamLimits

0xa8fa,	// (0x00019606) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0001e0f8) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0001e0f8) navi_pane_mp_g

0xa906,	// (0x00019612) navi_pane_mp_t1

0xa914,	// (0x00019620) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0001e0ff) navi_pane_mp_t

0xa97f,	// (0x0001968b) navi_pane_vt_g1

0xa906,	// (0x00019612) navi_pane_vt_t1

0xa987,	// (0x00019693) navi_slider_pane

0x9eb5,	// (0x00018bc1) zooming_pane

0xa997,	// (0x000196a3) navi_slider_pane_g1

0xa9a0,	// (0x000196ac) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0001e106) navi_slider_pane_g

0xa9cd,	// (0x000196d9) aid_levels_zoom

0xa9d5,	// (0x000196e1) zooming_pane_g1

0xa9dd,	// (0x000196e9) zooming_pane_g2

0xa9dd,	// (0x000196e9) zooming_pane_g3

0x0002,

0xf409,	// (0x0001e115) zooming_pane_g

0xa9e5,	// (0x000196f1) level_10_zoom

0xa9ee,	// (0x000196fa) level_11_zoom

0xa9f7,	// (0x00019703) level_1_zoom

0xaa00,	// (0x0001970c) level_2_zoom

0xaa09,	// (0x00019715) level_3_zoom

0xaa12,	// (0x0001971e) level_4_zoom

0xaa1b,	// (0x00019727) level_5_zoom

0xaa24,	// (0x00019730) level_6_zoom

0xaa2d,	// (0x00019739) level_7_zoom

0xaa36,	// (0x00019742) level_8_zoom

0xaa3f,	// (0x0001974b) level_9_zoom

0xaa50,	// (0x0001975c) popup_phob_thumbnail_window_g1

0xaa58,	// (0x00019764) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0001e11c) popup_phob_thumbnail_window_g

0xbdd7,	// (0x0001aae3) level_1_location

0xbddf,	// (0x0001aaeb) level_2_location

0xbde7,	// (0x0001aaf3) level_3_location

0xbdef,	// (0x0001aafb) level_4_location

0x9eb5,	// (0x00018bc1) level_5_location

0x278b,	// (0x00011497) mce_icon_pane_g1

0x2795,	// (0x000114a1) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0001e121) mce_icon_pane_g

0x279d,	// (0x000114a9) main_mup_pane_g1_ParamLimits

0x279d,	// (0x000114a9) main_mup_pane_g1

0x27b3,	// (0x000114bf) main_mup_pane_g2_ParamLimits

0x27b3,	// (0x000114bf) main_mup_pane_g2

0x27c5,	// (0x000114d1) main_mup_pane_g3_ParamLimits

0x27c5,	// (0x000114d1) main_mup_pane_g3

0x27d7,	// (0x000114e3) main_mup_pane_g4_ParamLimits

0x27d7,	// (0x000114e3) main_mup_pane_g4

0x27ef,	// (0x000114fb) main_mup_pane_g5_ParamLimits

0x27ef,	// (0x000114fb) main_mup_pane_g5

0x280b,	// (0x00011517) main_mup_pane_g6_ParamLimits

0x280b,	// (0x00011517) main_mup_pane_g6

0x2823,	// (0x0001152f) main_mup_pane_g7_ParamLimits

0x2823,	// (0x0001152f) main_mup_pane_g7

0x283b,	// (0x00011547) main_mup_pane_g8_ParamLimits

0x283b,	// (0x00011547) main_mup_pane_g8

0x2853,	// (0x0001155f) main_mup_pane_g9_ParamLimits

0x2853,	// (0x0001155f) main_mup_pane_g9

0x286d,	// (0x00011579) main_mup_pane_g10_ParamLimits

0x286d,	// (0x00011579) main_mup_pane_g10

0x2887,	// (0x00011593) main_mup_pane_g11_ParamLimits

0x2887,	// (0x00011593) main_mup_pane_g11

0x289b,	// (0x000115a7) main_mup_pane_g12_ParamLimits

0x289b,	// (0x000115a7) main_mup_pane_g12

0x28b1,	// (0x000115bd) main_mup_pane_g13_ParamLimits

0x28b1,	// (0x000115bd) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0001e126) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0001e126) main_mup_pane_g

0x28c5,	// (0x000115d1) main_mup_pane_t1_ParamLimits

0x28c5,	// (0x000115d1) main_mup_pane_t1

0x28df,	// (0x000115eb) main_mup_pane_t2_ParamLimits

0x28df,	// (0x000115eb) main_mup_pane_t2

0x28f7,	// (0x00011603) main_mup_pane_t3_ParamLimits

0x28f7,	// (0x00011603) main_mup_pane_t3

0x290f,	// (0x0001161b) main_mup_pane_t4_ParamLimits

0x290f,	// (0x0001161b) main_mup_pane_t4

0x292d,	// (0x00011639) main_mup_pane_t5_ParamLimits

0x292d,	// (0x00011639) main_mup_pane_t5

0x2942,	// (0x0001164e) main_mup_pane_t6_ParamLimits

0x2942,	// (0x0001164e) main_mup_pane_t6

0x0005,

0xf435,	// (0x0001e141) main_mup_pane_t_ParamLimits

0xf435,	// (0x0001e141) main_mup_pane_t

0x2954,	// (0x00011660) mup_progress_pane_ParamLimits

0x2954,	// (0x00011660) mup_progress_pane

0x2960,	// (0x0001166c) mup_visualizer_pane_ParamLimits

0x2960,	// (0x0001166c) mup_visualizer_pane

0x2994,	// (0x000116a0) mup_volume_pane_ParamLimits

0x2994,	// (0x000116a0) mup_volume_pane

0xaa60,	// (0x0001976c) mup_visualizer_pane_g1_ParamLimits

0xaa60,	// (0x0001976c) mup_visualizer_pane_g1

0xaa60,	// (0x0001976c) mup_visualizer_pane_g2_ParamLimits

0xaa60,	// (0x0001976c) mup_visualizer_pane_g2

0xa7d2,	// (0x000194de) mup_visualizer_pane_g3_ParamLimits

0xa7d2,	// (0x000194de) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0001e14e) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0001e14e) mup_visualizer_pane_g

0x9cb5,	// (0x000189c1) mup_volume_pane_g1

0xaa76,	// (0x00019782) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0001e155) mup_volume_pane_g

0x9cb5,	// (0x000189c1) mup_progress_pane_g1

0xaa7f,	// (0x0001978b) mup_progress_pane_g2

0xaa88,	// (0x00019794) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0001e15a) mup_progress_pane_g

0x98ee,	// (0x000185fa) bg_popup_window_pane_cp05

0xaa91,	// (0x0001979d) heading_pane_cp02_ParamLimits

0xaa91,	// (0x0001979d) heading_pane_cp02

0xaaab,	// (0x000197b7) list_popup_blid_pane

0xaab3,	// (0x000197bf) list_blid_sat_info_pane_ParamLimits

0xaab3,	// (0x000197bf) list_blid_sat_info_pane

0xaac6,	// (0x000197d2) list_blid_sat_info_pane_g1

0xaace,	// (0x000197da) list_blid_sat_info_pane_t1

0x2aaa,	// (0x000117b6) mup_equalizer_pane_ParamLimits

0x2aaa,	// (0x000117b6) mup_equalizer_pane

0x2ac3,	// (0x000117cf) mup_equalizer_pane_cp1_ParamLimits

0x2ac3,	// (0x000117cf) mup_equalizer_pane_cp1

0x2ae0,	// (0x000117ec) mup_equalizer_pane_cp2_ParamLimits

0x2ae0,	// (0x000117ec) mup_equalizer_pane_cp2

0x2afd,	// (0x00011809) mup_equalizer_pane_cp3_ParamLimits

0x2afd,	// (0x00011809) mup_equalizer_pane_cp3

0x2b1e,	// (0x0001182a) mup_equalizer_pane_cp4_ParamLimits

0x2b1e,	// (0x0001182a) mup_equalizer_pane_cp4

0x2b3f,	// (0x0001184b) mup_equalizer_pane_cp5

0x2b53,	// (0x0001185f) mup_equalizer_pane_cp6

0x2b67,	// (0x00011873) mup_equalizer_pane_cp7

0xbcb5,	// (0x0001a9c1) bg_popup_call_poc_act_pane_g9

0xbcbd,	// (0x0001a9c9) bg_popup_call_poc_act_pane_g10

0xbcc5,	// (0x0001a9d1) bg_popup_call_poc_act_pane_g11

0x000a,

0x9b49,	// (0x00018855) mup_scale_pane

0x9cb5,	// (0x000189c1) mup_scale_pane_g1

0xaadc,	// (0x000197e8) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0001e176) mup_scale_pane_g

0xab00,	// (0x0001980c) msg_data_pane

0xab08,	// (0x00019814) scroll_pane_cp017

0x2b8d,	// (0x00011899) bg_list_pane_cp04_ParamLimits

0x2b8d,	// (0x00011899) bg_list_pane_cp04

0xab10,	// (0x0001981c) msg_data_pane_g1

0x2bad,	// (0x000118b9) msg_data_pane_g2

0x2bb5,	// (0x000118c1) msg_data_pane_g3

0x2bbd,	// (0x000118c9) msg_data_pane_g4

0x2bc5,	// (0x000118d1) msg_data_pane_g5

0x2bcd,	// (0x000118d9) msg_data_pane_g6

0x2bd5,	// (0x000118e1) msg_data_pane_g7

0x0006,

0xf479,	// (0x0001e185) msg_data_pane_g

0x2bdd,	// (0x000118e9) msg_text_pane_ParamLimits

0x2bdd,	// (0x000118e9) msg_text_pane

0x2c0b,	// (0x00011917) qrid_highlight_pane_cp011_ParamLimits

0x2c0b,	// (0x00011917) qrid_highlight_pane_cp011

0x98ee,	// (0x000185fa) msg_body_pane

0x98ee,	// (0x000185fa) msg_header_pane

0xab21,	// (0x0001982d) input_focus_pane_cp07

0x2c2f,	// (0x0001193b) msg_header_pane_t1_ParamLimits

0x2c2f,	// (0x0001193b) msg_header_pane_t1

0x2c41,	// (0x0001194d) msg_header_pane_t2_ParamLimits

0x2c41,	// (0x0001194d) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0001e199) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0001e199) msg_header_pane_t

0xab36,	// (0x00019842) msg_body_pane_g1

0x2c53,	// (0x0001195f) msg_body_pane_t1_ParamLimits

0x2c53,	// (0x0001195f) msg_body_pane_t1

0x2c84,	// (0x00011990) msg_body_pane_t2_ParamLimits

0x2c84,	// (0x00011990) msg_body_pane_t2

0x2c96,	// (0x000119a2) msg_body_pane_t3_ParamLimits

0x2c96,	// (0x000119a2) msg_body_pane_t3

0x0002,

0xf492,	// (0x0001e19e) msg_body_pane_t_ParamLimits

0xf492,	// (0x0001e19e) msg_body_pane_t

0x2ce2,	// (0x000119ee) main_viewer_pane_g1_ParamLimits

0x2ce2,	// (0x000119ee) main_viewer_pane_g1

0x2cf0,	// (0x000119fc) main_viewer_pane_g2_ParamLimits

0x2cf0,	// (0x000119fc) main_viewer_pane_g2

0x2cfe,	// (0x00011a0a) main_viewer_pane_g3_ParamLimits

0x2cfe,	// (0x00011a0a) main_viewer_pane_g3

0x2d0d,	// (0x00011a19) main_viewer_pane_g4_ParamLimits

0x2d0d,	// (0x00011a19) main_viewer_pane_g4

0xab56,	// (0x00019862) main_viewer_pane_g5_ParamLimits

0xab56,	// (0x00019862) main_viewer_pane_g5

0xab56,	// (0x00019862) main_viewer_pane_g7_ParamLimits

0xab56,	// (0x00019862) main_viewer_pane_g7

0xab68,	// (0x00019874) main_viewer_pane_g8_ParamLimits

0xab68,	// (0x00019874) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0001e1ae) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0001e1ae) main_viewer_pane_g

0xab80,	// (0x0001988c) viewer_content_pane_ParamLimits

0xab80,	// (0x0001988c) viewer_content_pane

0x2d49,	// (0x00011a55) main_postcard_pane_g1_ParamLimits

0x2d49,	// (0x00011a55) main_postcard_pane_g1

0x2d5f,	// (0x00011a6b) main_postcard_pane_g2_ParamLimits

0x2d5f,	// (0x00011a6b) main_postcard_pane_g2

0x2d75,	// (0x00011a81) main_postcard_pane_g3_ParamLimits

0x2d75,	// (0x00011a81) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0001e1bf) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0001e1bf) main_postcard_pane_g

0x2d8c,	// (0x00011a98) main_postcard_pane_g4

0xbf2b,	// (0x0001ac37) smil_status_volume_pane_g2

0x2dcf,	// (0x00011adb) postcard_pane_ParamLimits

0x2dcf,	// (0x00011adb) postcard_pane

0xab8e,	// (0x0001989a) postcard_pane_g1_ParamLimits

0xab8e,	// (0x0001989a) postcard_pane_g1

0x2e11,	// (0x00011b1d) postcard_pane_g2_ParamLimits

0x2e11,	// (0x00011b1d) postcard_pane_g2

0x2e1d,	// (0x00011b29) postcard_pane_g3_ParamLimits

0x2e1d,	// (0x00011b29) postcard_pane_g3

0xab9c,	// (0x000198a8) postcard_pane_g4_ParamLimits

0xab9c,	// (0x000198a8) postcard_pane_g4

0x2e29,	// (0x00011b35) postcard_pane_g5_ParamLimits

0x2e29,	// (0x00011b35) postcard_pane_g5

0x2e3e,	// (0x00011b4a) postcard_pane_g6_ParamLimits

0x2e3e,	// (0x00011b4a) postcard_pane_g6

0xab8e,	// (0x0001989a) postcard_pane_g7_ParamLimits

0xab8e,	// (0x0001989a) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0001e1cc) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0001e1cc) postcard_pane_g

0x2e52,	// (0x00011b5e) main_mp2_pane_g1_ParamLimits

0x2e52,	// (0x00011b5e) main_mp2_pane_g1

0x2e5e,	// (0x00011b6a) main_mp2_pane_g2_ParamLimits

0x2e5e,	// (0x00011b6a) main_mp2_pane_g2

0x2e6a,	// (0x00011b76) main_mp2_pane_g3_ParamLimits

0x2e6a,	// (0x00011b76) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0001e1db) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0001e1db) main_mp2_pane_g

0x2e76,	// (0x00011b82) main_mp2_pane_t1_ParamLimits

0x2e76,	// (0x00011b82) main_mp2_pane_t1

0x2e8b,	// (0x00011b97) main_mp2_pane_t2_ParamLimits

0x2e8b,	// (0x00011b97) main_mp2_pane_t2

0x2e9d,	// (0x00011ba9) main_mp2_pane_t3_ParamLimits

0x2e9d,	// (0x00011ba9) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0001e1e2) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0001e1e2) main_mp2_pane_t

0xabaa,	// (0x000198b6) pec_content_pane_ParamLimits

0xabaa,	// (0x000198b6) pec_content_pane

0xa068,	// (0x00018d74) scroll_pane_cp015

0xabbc,	// (0x000198c8) pec_attribute_pane_ParamLimits

0xabbc,	// (0x000198c8) pec_attribute_pane

0x2eaf,	// (0x00011bbb) pec_content_pane_g1_ParamLimits

0x2eaf,	// (0x00011bbb) pec_content_pane_g1

0xabcc,	// (0x000198d8) pec_content_pane_t1_ParamLimits

0xabcc,	// (0x000198d8) pec_content_pane_t1

0xabde,	// (0x000198ea) pec_content_pane_t2_ParamLimits

0xabde,	// (0x000198ea) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0001e1e9) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0001e1e9) pec_content_pane_t

0x2ebb,	// (0x00011bc7) list_single_graphic_pane_cp01_ParamLimits

0x2ebb,	// (0x00011bc7) list_single_graphic_pane_cp01

0x9b49,	// (0x00018855) bg_popup_sub_pane_cp04

0xabf0,	// (0x000198fc) popup_mup_playback_window_g1

0xabfc,	// (0x00019908) popup_mup_playback_window_t1

0xac11,	// (0x0001991d) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0001e1ee) popup_mup_playback_window_t

0xac48,	// (0x00019954) main_image_pane_g1_ParamLimits

0xac48,	// (0x00019954) main_image_pane_g1

0xac8b,	// (0x00019997) scroll_pane_cp018_ParamLimits

0xac8b,	// (0x00019997) scroll_pane_cp018

0xaca3,	// (0x000199af) scroll_pane_cp016_ParamLimits

0xaca3,	// (0x000199af) scroll_pane_cp016

0x2f89,	// (0x00011c95) smil2_image_pane_ParamLimits

0x2f89,	// (0x00011c95) smil2_image_pane

0x2fb9,	// (0x00011cc5) smil2_root_pane_ParamLimits

0x2fb9,	// (0x00011cc5) smil2_root_pane

0x2ff1,	// (0x00011cfd) smil2_text_pane_ParamLimits

0x2ff1,	// (0x00011cfd) smil2_text_pane

0x98ee,	// (0x000185fa) bg_list_pane_cp06

0xacdf,	// (0x000199eb) grid_radio_pane

0x98ee,	// (0x000185fa) bg_popup_window_pane_cp06

0xace7,	// (0x000199f3) main_fmradio_pane_t1

0xa64e,	// (0x0001935a) heading_pane_cp04

0xacf5,	// (0x00019a01) main_fmradio_pane_t2

0xbd0d,	// (0x0001aa19) popup_cale_lunar_info_window_g1

0xad03,	// (0x00019a0f) main_fmradio_pane_t3

0xbd15,	// (0x0001aa21) popup_cale_lunar_info_window_g2

0xad11,	// (0x00019a1d) main_fmradio_pane_t4

0x0001,

0xad1f,	// (0x00019a2b) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0001e2dc) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0001e203) main_fmradio_pane_t

0xad2d,	// (0x00019a39) wait_bar_pane_cp03

0xad35,	// (0x00019a41) cell_fmradio_pane_ParamLimits

0xad35,	// (0x00019a41) cell_fmradio_pane

0xab8e,	// (0x0001989a) cell_fmradio_pane_g1_ParamLimits

0xab8e,	// (0x0001989a) cell_fmradio_pane_g1

0x98ee,	// (0x000185fa) grid_highlight_pane_cp011

0xad48,	// (0x00019a54) poc_content_pane_ParamLimits

0xad48,	// (0x00019a54) poc_content_pane

0xad5a,	// (0x00019a66) scroll_pane_cp019

0x3071,	// (0x00011d7d) popup_call_poc_act_window_ParamLimits

0x3071,	// (0x00011d7d) popup_call_poc_act_window

0x3095,	// (0x00011da1) popup_call_poc_inact_window_ParamLimits

0x3095,	// (0x00011da1) popup_call_poc_inact_window

0xf594,	// (0x0001e2a0) bg_popup_call_poc_act_pane_g

0xbccd,	// (0x0001a9d9) bg_popup_call_poc_inact_pane_g1

0xbcd5,	// (0x0001a9e1) bg_popup_call_poc_inact_pane_g2

0xad62,	// (0x00019a6e) popup_call_poc_act_window_g2

0xbcdd,	// (0x0001a9e9) bg_popup_call_poc_inact_pane_g3

0xbc5d,	// (0x0001a969) bg_popup_call_poc_inact_pane_g4

0xbce5,	// (0x0001a9f1) bg_popup_call_poc_inact_pane_g5

0xad6a,	// (0x00019a76) popup_call_poc_act_window_t1_ParamLimits

0xad6a,	// (0x00019a76) popup_call_poc_act_window_t1

0xad92,	// (0x00019a9e) popup_call_poc_act_window_t2_ParamLimits

0xad92,	// (0x00019a9e) popup_call_poc_act_window_t2

0xadba,	// (0x00019ac6) popup_call_poc_act_window_t3_ParamLimits

0xadba,	// (0x00019ac6) popup_call_poc_act_window_t3

0xade2,	// (0x00019aee) popup_call_poc_act_window_t4_ParamLimits

0xade2,	// (0x00019aee) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0001e20e) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0001e20e) popup_call_poc_act_window_t

0xbced,	// (0x0001a9f9) bg_popup_call_poc_inact_pane_g6

0xbcf5,	// (0x0001aa01) bg_popup_call_poc_inact_pane_g7

0xbcfd,	// (0x0001aa09) bg_popup_call_poc_inact_pane_g8

0xadf4,	// (0x00019b00) popup_call_poc_inact_window_g2

0xbd05,	// (0x0001aa11) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0001e2b7) bg_popup_call_poc_inact_pane_g

0xadfc,	// (0x00019b08) popup_call_poc_inact_window_t1_ParamLimits

0xadfc,	// (0x00019b08) popup_call_poc_inact_window_t1

0xae11,	// (0x00019b1d) popup_call_poc_inact_window_t2_ParamLimits

0xae11,	// (0x00019b1d) popup_call_poc_inact_window_t2

0xae26,	// (0x00019b32) popup_call_poc_inact_window_t3_ParamLimits

0xae26,	// (0x00019b32) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0001e217) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0001e217) popup_call_poc_inact_window_t

0xbe9e,	// (0x0001abaa) context_pane_ParamLimits

0x38bd,	// (0x000125c9) signal_pane_ParamLimits

0x9eb5,	// (0x00018bc1) main_call2_pane

0xbe77,	// (0x0001ab83) popup_phob_thumbnail2_window_ParamLimits

0xbe77,	// (0x0001ab83) popup_phob_thumbnail2_window

0xab3e,	// (0x0001984a) aid_hotspot_pointer_arrow_pane

0xab46,	// (0x00019852) aid_hotspot_pointer_hand_pane

0x33df,	// (0x000120eb) phob_pre_status_pane_g5

0x10fa,	// (0x0000fe06) cams_zoom_pane_ParamLimits

0x1109,	// (0x0000fe15) image_vga_pane_ParamLimits

0x1123,	// (0x0000fe2f) main_camera_pane_g1_ParamLimits

0x1135,	// (0x0000fe41) main_camera_pane_g2_ParamLimits

0x1145,	// (0x0000fe51) main_camera_pane_g3_ParamLimits

0x1155,	// (0x0000fe61) main_camera_pane_g4_ParamLimits

0x1165,	// (0x0000fe71) main_camera_pane_g5_ParamLimits

0x1175,	// (0x0000fe81) main_camera_pane_g6_ParamLimits

0x1185,	// (0x0000fe91) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0001df16) main_camera_pane_g_ParamLimits

0x1195,	// (0x0000fea1) main_camera_pane_t1_ParamLimits

0x11ab,	// (0x0000feb7) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0001df27) main_camera_pane_t_ParamLimits

0x9b49,	// (0x00018855) bg_popup_preview_window_pane_cp01_ParamLimits

0x9b49,	// (0x00018855) bg_popup_preview_window_pane_cp01

0xae3b,	// (0x00019b47) popup_phob_thumbnail2_window_g1_ParamLimits

0xae3b,	// (0x00019b47) popup_phob_thumbnail2_window_g1

0x98ee,	// (0x000185fa) call2_cli_visual_pane

0x30c9,	// (0x00011dd5) popup_call2_audio_conf_window_ParamLimits

0x30c9,	// (0x00011dd5) popup_call2_audio_conf_window

0x30e9,	// (0x00011df5) popup_call2_audio_first_window_ParamLimits

0x30e9,	// (0x00011df5) popup_call2_audio_first_window

0x317f,	// (0x00011e8b) popup_call2_audio_in_window_ParamLimits

0x317f,	// (0x00011e8b) popup_call2_audio_in_window

0x31c7,	// (0x00011ed3) popup_call2_audio_out_window_ParamLimits

0x31c7,	// (0x00011ed3) popup_call2_audio_out_window

0x3231,	// (0x00011f3d) popup_call2_audio_second_window_ParamLimits

0x3231,	// (0x00011f3d) popup_call2_audio_second_window

0x3297,	// (0x00011fa3) popup_call2_audio_wait_window_ParamLimits

0x3297,	// (0x00011fa3) popup_call2_audio_wait_window

0x98ee,	// (0x000185fa) bg_popup_call2_act_pane_cp03

0x9b2b,	// (0x00018837) list_conf_pane_cp

0xae47,	// (0x00019b53) popup_call2_audio_conf_window_t1

0xae55,	// (0x00019b61) list_single_graphic_popup_conf2_pane_ParamLimits

0xae55,	// (0x00019b61) list_single_graphic_popup_conf2_pane

0xa6be,	// (0x000193ca) list_highlight_pane_cp04

0xae68,	// (0x00019b74) list_single_graphic_popup_conf2_pane_g1

0xa6cf,	// (0x000193db) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0001e21e) list_single_graphic_popup_conf2_pane_g

0xae72,	// (0x00019b7e) list_single_graphic_popup_conf2_pane_t1

0xae80,	// (0x00019b8c) bg_popup_call2_act_pane_cp01_ParamLimits

0xae80,	// (0x00019b8c) bg_popup_call2_act_pane_cp01

0xaf0a,	// (0x00019c16) call_type_pane_cp05_ParamLimits

0xaf0a,	// (0x00019c16) call_type_pane_cp05

0xaf5e,	// (0x00019c6a) popup_call2_audio_second_window_g1_ParamLimits

0xaf5e,	// (0x00019c6a) popup_call2_audio_second_window_g1

0xafb2,	// (0x00019cbe) popup_call2_audio_second_window_g2_ParamLimits

0xafb2,	// (0x00019cbe) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0001e223) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0001e223) popup_call2_audio_second_window_g

0xb017,	// (0x00019d23) popup_call2_audio_second_window_t1_ParamLimits

0xb017,	// (0x00019d23) popup_call2_audio_second_window_t1

0xb0d2,	// (0x00019dde) popup_call2_audio_second_window_t2_ParamLimits

0xb0d2,	// (0x00019dde) popup_call2_audio_second_window_t2

0xb125,	// (0x00019e31) popup_call2_audio_second_window_t3_ParamLimits

0xb125,	// (0x00019e31) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0001e22a) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0001e22a) popup_call2_audio_second_window_t

0x98ee,	// (0x000185fa) bg_popup_call2_in_pane_cp02

0x98f8,	// (0x00018604) call_type_pane_cp04

0x9900,	// (0x0001860c) popup_call2_audio_wait_window_g1

0x9908,	// (0x00018614) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001de05) popup_call2_audio_wait_window_g

0x9910,	// (0x0001861c) popup_call2_audio_wait_window_t3

0xb218,	// (0x00019f24) bg_popup_call2_act_pane_ParamLimits

0xb218,	// (0x00019f24) bg_popup_call2_act_pane

0xb2d8,	// (0x00019fe4) call_type_pane_cp03_ParamLimits

0xb2d8,	// (0x00019fe4) call_type_pane_cp03

0xb33c,	// (0x0001a048) popup_call2_audio_first_window_g1_ParamLimits

0xb33c,	// (0x0001a048) popup_call2_audio_first_window_g1

0xb3ac,	// (0x0001a0b8) popup_call2_audio_first_window_g2_ParamLimits

0xb3ac,	// (0x0001a0b8) popup_call2_audio_first_window_g2

0xaa60,	// (0x0001976c) popup_call2_audio_first_window_g3_ParamLimits

0xaa60,	// (0x0001976c) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0001e233) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0001e233) popup_call2_audio_first_window_g

0xb48a,	// (0x0001a196) popup_call2_audio_first_window_t1_ParamLimits

0xb48a,	// (0x0001a196) popup_call2_audio_first_window_t1

0xb58d,	// (0x0001a299) popup_call2_audio_first_window_t4_ParamLimits

0xb58d,	// (0x0001a299) popup_call2_audio_first_window_t4

0xb670,	// (0x0001a37c) popup_call2_audio_first_window_t5_ParamLimits

0xb670,	// (0x0001a37c) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0001e23e) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0001e23e) popup_call2_audio_first_window_t

0x9b41,	// (0x0001884d) bg_popup_call2_act_pane_g1

0xbd1d,	// (0x0001aa29) popup_cale_lunar_info_window_t1

0xbd2b,	// (0x0001aa37) popup_cale_lunar_info_window_t2

0xbd39,	// (0x0001aa45) popup_cale_lunar_info_window_t3

0x98ee,	// (0x000185fa) bg_popup_call2_bubble_pane

0xb771,	// (0x0001a47d) bg_popup_call2_in_pane_cp01_ParamLimits

0xb771,	// (0x0001a47d) bg_popup_call2_in_pane_cp01

0x95ca,	// (0x000182d6) call_type_pane_cp02

0xb7b9,	// (0x0001a4c5) popup_call2_audio_out_window_g1_ParamLimits

0xb7b9,	// (0x0001a4c5) popup_call2_audio_out_window_g1

0xb7e5,	// (0x0001a4f1) popup_call2_audio_out_window_g2_ParamLimits

0xb7e5,	// (0x0001a4f1) popup_call2_audio_out_window_g2

0xb80d,	// (0x0001a519) popup_call2_audio_out_window_g3_ParamLimits

0xb80d,	// (0x0001a519) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0001e247) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0001e247) popup_call2_audio_out_window_g

0xb848,	// (0x0001a554) popup_call2_audio_out_window_t1_ParamLimits

0xb848,	// (0x0001a554) popup_call2_audio_out_window_t1

0xb8a7,	// (0x0001a5b3) popup_call2_audio_out_window_t2_ParamLimits

0xb8a7,	// (0x0001a5b3) popup_call2_audio_out_window_t2

0xb8fb,	// (0x0001a607) popup_call2_audio_out_window_t3_ParamLimits

0xb8fb,	// (0x0001a607) popup_call2_audio_out_window_t3

0xb911,	// (0x0001a61d) popup_call2_audio_out_window_t4_ParamLimits

0xb911,	// (0x0001a61d) popup_call2_audio_out_window_t4

0xb927,	// (0x0001a633) popup_call2_audio_out_window_t5_ParamLimits

0xb927,	// (0x0001a633) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0001e250) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0001e250) popup_call2_audio_out_window_t

0xb98b,	// (0x0001a697) bg_popup_call2_in_pane_ParamLimits

0xb98b,	// (0x0001a697) bg_popup_call2_in_pane

0xb9e7,	// (0x0001a6f3) popup_call2_audio_in_window_g1_ParamLimits

0xb9e7,	// (0x0001a6f3) popup_call2_audio_in_window_g1

0xba1f,	// (0x0001a72b) popup_call2_audio_in_window_g2_ParamLimits

0xba1f,	// (0x0001a72b) popup_call2_audio_in_window_g2

0xba57,	// (0x0001a763) popup_call2_audio_in_window_g3_ParamLimits

0xba57,	// (0x0001a763) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0001e25d) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0001e25d) popup_call2_audio_in_window_g

0xbaaf,	// (0x0001a7bb) popup_call2_audio_in_window_t1_ParamLimits

0xbaaf,	// (0x0001a7bb) popup_call2_audio_in_window_t1

0xbb2f,	// (0x0001a83b) popup_call2_audio_in_window_t2_ParamLimits

0xbb2f,	// (0x0001a83b) popup_call2_audio_in_window_t2

0xbbaf,	// (0x0001a8bb) popup_call2_audio_in_window_t3_ParamLimits

0xbbaf,	// (0x0001a8bb) popup_call2_audio_in_window_t3

0xbbc9,	// (0x0001a8d5) popup_call2_audio_in_window_t4_ParamLimits

0xbbc9,	// (0x0001a8d5) popup_call2_audio_in_window_t4

0xbbdb,	// (0x0001a8e7) popup_call2_audio_in_window_t5_ParamLimits

0xbbdb,	// (0x0001a8e7) popup_call2_audio_in_window_t5

0xbbf0,	// (0x0001a8fc) popup_call2_audio_in_window_t6_ParamLimits

0xbbf0,	// (0x0001a8fc) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0001e266) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0001e266) popup_call2_audio_in_window_t

0x9b41,	// (0x0001884d) bg_popup_call2_in_pane_g1

0xbd47,	// (0x0001aa53) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0001e2e1) popup_cale_lunar_info_window_t

0x9b49,	// (0x00018855) bg_popup_call2_rect_pane_ParamLimits

0x9b49,	// (0x00018855) bg_popup_call2_rect_pane

0x98ee,	// (0x000185fa) call2_cli_visual_graphic_pane

0x98ee,	// (0x000185fa) call2_cli_visual_text_pane

0xbf3e,	// (0x0001ac4a) smil_status_volume_pane_g3

0x0002,

0x9cb5,	// (0x000189c1) call2_cli_visual_graphic_pane_g1

0x9cb5,	// (0x000189c1) call2_cli_visual_graphic_pane_g2

0x9cb5,	// (0x000189c1) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0001e273) call2_cli_visual_graphic_pane_g

0xbc05,	// (0x0001a911) bg_popup_call2_rect_pane_g1

0x9d5d,	// (0x00018a69) bg_popup_call2_rect_pane_g2

0xbc0d,	// (0x0001a919) bg_popup_call2_rect_pane_g3

0xbc15,	// (0x0001a921) bg_popup_call2_rect_pane_g4

0xbc1d,	// (0x0001a929) bg_popup_call2_rect_pane_g5

0xbc25,	// (0x0001a931) bg_popup_call2_rect_pane_g6

0xbc2d,	// (0x0001a939) bg_popup_call2_rect_pane_g7

0xbc35,	// (0x0001a941) bg_popup_call2_rect_pane_g8

0xbc3d,	// (0x0001a949) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e27a) bg_popup_call2_rect_pane_g

0xbc45,	// (0x0001a951) bg_popup_call2_bubble_pane_g1

0xbc4d,	// (0x0001a959) bg_popup_call2_bubble_pane_g2

0xbc55,	// (0x0001a961) bg_popup_call2_bubble_pane_g3

0xbc5d,	// (0x0001a969) bg_popup_call2_bubble_pane_g4

0xbc65,	// (0x0001a971) bg_popup_call2_bubble_pane_g5

0xbc6d,	// (0x0001a979) bg_popup_call2_bubble_pane_g6

0xbc75,	// (0x0001a981) bg_popup_call2_bubble_pane_g7

0xbc7d,	// (0x0001a989) bg_popup_call2_bubble_pane_g8

0xbc85,	// (0x0001a991) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0001e28d) bg_popup_call2_bubble_pane_g

0x0b32,	// (0x0000f83e) aid_cale_week_size_cell_pane

0x11c1,	// (0x0000fecd) aid_cams_cif_uncrop_pane_ParamLimits

0x11c1,	// (0x0000fecd) aid_cams_cif_uncrop_pane

0x1376,	// (0x00010082) aid_cams_size_cell_ParamLimits

0x1376,	// (0x00010082) aid_cams_size_cell

0x138a,	// (0x00010096) grid_cams_pane_ParamLimits

0x13a4,	// (0x000100b0) linegrid_cams_pane_ParamLimits

0x15a1,	// (0x000102ad) call_video_pane_t1

0x15bf,	// (0x000102cb) call_video_pane_t2

0x0001,

0xf26e,	// (0x0001df7a) call_video_pane_t

0x19e3,	// (0x000106ef) aid_cale_month_size_cell_pane_ParamLimits

0x19e3,	// (0x000106ef) aid_cale_month_size_cell_pane

0xf61e,	// (0x0001e32a) smil_status_volume_pane_g

0xbf4b,	// (0x0001ac57) volume_smil_pane_ParamLimits

0x946f,	// (0x0001817b) aid_popup2_width_pane

0x0ab6,	// (0x0000f7c2) cell_qdial_pane_g4_ParamLimits

0x0ab6,	// (0x0000f7c2) cell_qdial_pane_g4

0x26c4,	// (0x000113d0) aid_blid_cardinal_pane_ParamLimits

0x26d0,	// (0x000113dc) aid_blid_destination_pane_ParamLimits

0x26d0,	// (0x000113dc) aid_blid_destination_pane

0x9b49,	// (0x00018855) bg_popup_call_poc_act_pane_ParamLimits

0x9b49,	// (0x00018855) bg_popup_call_poc_act_pane

0x9b49,	// (0x00018855) bg_popup_call_poc_inact_pane_ParamLimits

0x9b49,	// (0x00018855) bg_popup_call_poc_inact_pane

0xbc8d,	// (0x0001a999) bg_popup_call_poc_act_pane_g1

0xbc95,	// (0x0001a9a1) bg_popup_call_poc_act_pane_g2

0xbc9d,	// (0x0001a9a9) bg_popup_call_poc_act_pane_g3

0xbc5d,	// (0x0001a969) bg_popup_call_poc_act_pane_g4

0xbc65,	// (0x0001a971) bg_popup_call_poc_act_pane_g5

0xbca5,	// (0x0001a9b1) bg_popup_call_poc_act_pane_g6

0xbc75,	// (0x0001a981) bg_popup_call_poc_act_pane_g7

0xbcad,	// (0x0001a9b9) bg_popup_call_poc_act_pane_g8

0x98ee,	// (0x000185fa) main_usb_pane

0xbe52,	// (0x0001ab5e) popup_cale_lunar_info_window

0x1889,	// (0x00010595) im_reading_pane_t1_ParamLimits

0x9fc0,	// (0x00018ccc) list_im_pane_ParamLimits

0x9fd1,	// (0x00018cdd) scroll_pane_cp07_ParamLimits

0x98ee,	// (0x000185fa) grid_highlight_pane_cp012

0x9b49,	// (0x00018855) mup_scale_pane_ParamLimits

0xab8e,	// (0x0001989a) main_usb_pane_g1_ParamLimits

0xab8e,	// (0x0001989a) main_usb_pane_g1

0x32f4,	// (0x00012000) main_usb_pane_g2_ParamLimits

0x32f4,	// (0x00012000) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0001e2ca) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0001e2ca) main_usb_pane_g

0x330a,	// (0x00012016) main_usb_pane_t1_ParamLimits

0x330a,	// (0x00012016) main_usb_pane_t1

0x331c,	// (0x00012028) main_usb_pane_t2_ParamLimits

0x331c,	// (0x00012028) main_usb_pane_t2

0x332e,	// (0x0001203a) main_usb_pane_t3_ParamLimits

0x332e,	// (0x0001203a) main_usb_pane_t3

0x3340,	// (0x0001204c) main_usb_pane_t4_ParamLimits

0x3340,	// (0x0001204c) main_usb_pane_t4

0x3352,	// (0x0001205e) main_usb_pane_t5_ParamLimits

0x3352,	// (0x0001205e) main_usb_pane_t5

0x3364,	// (0x00012070) main_usb_pane_t6_ParamLimits

0x3364,	// (0x00012070) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0001e2cf) main_usb_pane_t_ParamLimits

0x2673,	// (0x0001137f) aid_text_placing

0x267c,	// (0x00011388) main_location2_pane_t1_ParamLimits

0x268e,	// (0x0001139a) main_location2_pane_t2_ParamLimits

0x26a0,	// (0x000113ac) main_location2_pane_t3_ParamLimits

0x26b2,	// (0x000113be) main_location2_pane_t4_ParamLimits

0x26b2,	// (0x000113be) main_location2_pane_t4

0xf3cf,	// (0x0001e0db) main_location2_pane_t_ParamLimits

0x9b85,	// (0x00018891) find_pinb_pane_g2_ParamLimits

0x9b85,	// (0x00018891) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0001de2b) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0001de2b) find_pinb_pane_g

0x9b91,	// (0x0001889d) find_pinb_pane_t1_ParamLimits

0x9ba3,	// (0x000188af) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0001de30) find_pinb_pane_t_ParamLimits

0x98ee,	// (0x000185fa) main_call3_pane

0x1eca,	// (0x00010bd6) cale_month_day_heading_pane_t1_ParamLimits

0x1f0c,	// (0x00010c18) cale_month_day_heading_pane_t2_ParamLimits

0x1f41,	// (0x00010c4d) cale_month_day_heading_pane_t3_ParamLimits

0x1f76,	// (0x00010c82) cale_month_day_heading_pane_t4_ParamLimits

0x1fb3,	// (0x00010cbf) cale_month_day_heading_pane_t5_ParamLimits

0x1ff8,	// (0x00010d04) cale_month_day_heading_pane_t6_ParamLimits

0x203d,	// (0x00010d49) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0001dfb2) cale_month_day_heading_pane_t_ParamLimits

0xa227,	// (0x00018f33) smil_status_volume_pane

0x2ded,	// (0x00011af9) postcard_address_pane_ParamLimits

0x2ded,	// (0x00011af9) postcard_address_pane

0x2dff,	// (0x00011b0b) postcard_message_pane_ParamLimits

0x2dff,	// (0x00011b0b) postcard_message_pane

0x32d1,	// (0x00011fdd) call2_cli_visual_pane_t1_ParamLimits

0x32d1,	// (0x00011fdd) call2_cli_visual_pane_t1

0x3aec,	// (0x000127f8) postcard_message_pane_t1_ParamLimits

0x3aec,	// (0x000127f8) postcard_message_pane_t1

0x3ad5,	// (0x000127e1) postcard_address_pane_t1_ParamLimits

0x3ad5,	// (0x000127e1) postcard_address_pane_t1

0x3ac1,	// (0x000127cd) popup_call3_audio_in_window_ParamLimits

0x3ac1,	// (0x000127cd) popup_call3_audio_in_window

0x394c,	// (0x00012658) bg_popup_call3_in_pane_ParamLimits

0x394c,	// (0x00012658) bg_popup_call3_in_pane

0x39c2,	// (0x000126ce) popup_call3_audio_in_window_g1_ParamLimits

0x39c2,	// (0x000126ce) popup_call3_audio_in_window_g1

0x39e2,	// (0x000126ee) popup_call3_audio_in_window_g2_ParamLimits

0x39e2,	// (0x000126ee) popup_call3_audio_in_window_g2

0x3a02,	// (0x0001270e) popup_call3_audio_in_window_g3_ParamLimits

0x3a02,	// (0x0001270e) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0001e331) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0001e331) popup_call3_audio_in_window_g

0x3a33,	// (0x0001273f) popup_call3_audio_in_window_t1_ParamLimits

0x3a33,	// (0x0001273f) popup_call3_audio_in_window_t1

0x3a71,	// (0x0001277d) popup_call3_audio_in_window_t2_ParamLimits

0x3a71,	// (0x0001277d) popup_call3_audio_in_window_t2

0x3aaf,	// (0x000127bb) popup_call3_audio_in_window_t3_ParamLimits

0x3aaf,	// (0x000127bb) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0001e33a) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0001e33a) popup_call3_audio_in_window_t

0x9eb5,	// (0x00018bc1) bg_popup_call3_rect_pane

0xbc05,	// (0x0001a911) bg_popup_call3_rect_pane_g1

0x9d5d,	// (0x00018a69) bg_popup_call3_rect_pane_g2

0xbc0d,	// (0x0001a919) bg_popup_call3_rect_pane_g3

0xbc15,	// (0x0001a921) bg_popup_call3_rect_pane_g4

0xbc1d,	// (0x0001a929) bg_popup_call3_rect_pane_g5

0xbc25,	// (0x0001a931) bg_popup_call3_rect_pane_g6

0xbc2d,	// (0x0001a939) bg_popup_call3_rect_pane_g7

0x29aa,	// (0x000116b6) mup_visualizer_osc_pane

0xaa6e,	// (0x0001977a) mup_visualizer_spec_pane

0x397c,	// (0x00012688) call3_video_qcif_pane_ParamLimits

0x397c,	// (0x00012688) call3_video_qcif_pane

0x398f,	// (0x0001269b) call3_video_qcif_uncrop_pane_ParamLimits

0x398f,	// (0x0001269b) call3_video_qcif_uncrop_pane

0x399d,	// (0x000126a9) call3_video_subqcif_pane_ParamLimits

0x399d,	// (0x000126a9) call3_video_subqcif_pane

0x39b1,	// (0x000126bd) call3_video_subqcif_uncrop_pane_ParamLimits

0x39b1,	// (0x000126bd) call3_video_subqcif_uncrop_pane

0x3a22,	// (0x0001272e) popup_call3_audio_in_window_g4_ParamLimits

0x3a22,	// (0x0001272e) popup_call3_audio_in_window_g4

0x393b,	// (0x00012647) mup_spec_half_pane

0x3944,	// (0x00012650) mup_spec_half_pane_cp

0xbefe,	// (0x0001ac0a) mup_osc_middle_pane

0xbf07,	// (0x0001ac13) mup_visualizer_osc_pane_g1

0x391b,	// (0x00012627) mup_spec_bar_pane_ParamLimits

0x391b,	// (0x00012627) mup_spec_bar_pane

0xbeeb,	// (0x0001abf7) mup_spec_bar_pane_g1

0xbef5,	// (0x0001ac01) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0001e325) mup_spec_bar_pane_g

0x0b32,	// (0x0000f83e) aid_cale_week_size_cell_pane_ParamLimits

0x0b4c,	// (0x0000f858) bg_cale_heading_pane_ParamLimits

0x9e0e,	// (0x00018b1a) bg_cale_pane_cp01_ParamLimits

0x0b64,	// (0x0000f870) cale_week_corner_pane_ParamLimits

0x0b83,	// (0x0000f88f) cale_week_day_heading_pane_ParamLimits

0x0ba0,	// (0x0000f8ac) cale_week_scroll_pane_g1_ParamLimits

0x0bb3,	// (0x0000f8bf) cale_week_scroll_pane_g2_ParamLimits

0x0bcb,	// (0x0000f8d7) cale_week_scroll_pane_g3_ParamLimits

0x0be3,	// (0x0000f8ef) cale_week_scroll_pane_g4_ParamLimits

0x0bfb,	// (0x0000f907) cale_week_scroll_pane_g5_ParamLimits

0x0c1b,	// (0x0000f927) cale_week_scroll_pane_g6_ParamLimits

0x0c3b,	// (0x0000f947) cale_week_scroll_pane_g7_ParamLimits

0x0c5b,	// (0x0000f967) cale_week_scroll_pane_g8_ParamLimits

0x0c7f,	// (0x0000f98b) cale_week_scroll_pane_g9_ParamLimits

0x0c97,	// (0x0000f9a3) cale_week_scroll_pane_g10_ParamLimits

0x0caf,	// (0x0000f9bb) cale_week_scroll_pane_g11_ParamLimits

0x0cc7,	// (0x0000f9d3) cale_week_scroll_pane_g12_ParamLimits

0x0cdf,	// (0x0000f9eb) cale_week_scroll_pane_g13_ParamLimits

0x0cdf,	// (0x0000f9eb) cale_week_scroll_pane_g14_ParamLimits

0x0cdf,	// (0x0000f9eb) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0001debc) cale_week_scroll_pane_g_ParamLimits

0x0d1b,	// (0x0000fa27) cale_week_time_pane_ParamLimits

0x0d3f,	// (0x0000fa4b) grid_cale_week_pane_ParamLimits

0x9e2b,	// (0x00018b37) listscroll_cale_week_pane_t1

0x9e3d,	// (0x00018b49) scroll_pane_cp08_ParamLimits

0x1a43,	// (0x0001074f) cale_month_corner_pane_ParamLimits

0xa1f1,	// (0x00018efd) cale_month_pane_t1

0x1e5d,	// (0x00010b69) cale_month_week_pane_ParamLimits

0x24a4,	// (0x000111b0) popup_call_status_window_g1_ParamLimits

0x24b8,	// (0x000111c4) popup_call_status_window_g2_ParamLimits

0x24cc,	// (0x000111d8) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0001e062) popup_call_status_window_g_ParamLimits

0xa5cf,	// (0x000192db) aid_call2_pane

0x2c21,	// (0x0001192d) msg_header_pane_g1

0x2ded,	// (0x00011af9) postcard_address2_pane_ParamLimits

0x2ded,	// (0x00011af9) postcard_address2_pane

0x2dff,	// (0x00011b0b) postcard_message2_pane_ParamLimits

0x2dff,	// (0x00011b0b) postcard_message2_pane

0x38cb,	// (0x000125d7) message2_row_pane_ParamLimits

0x38cb,	// (0x000125d7) message2_row_pane

0x38e8,	// (0x000125f4) address2_row_pane_ParamLimits

0x38e8,	// (0x000125f4) address2_row_pane

0xbeb9,	// (0x0001abc5) postcard_message2_row_pane_g1

0xbec1,	// (0x0001abcd) postcard_message2_row_pane_t1

0xbeb9,	// (0x0001abc5) address2_row_pane_g1

0xbec1,	// (0x0001abcd) address2_row_pane_t1

0x1079,	// (0x0000fd85) aid_size_cell_vorec

0x98ee,	// (0x000185fa) main_rss_pane

0x38fb,	// (0x00012607) rss_list_single_pane_ParamLimits

0x38fb,	// (0x00012607) rss_list_single_pane

0xbecf,	// (0x0001abdb) rss_list_single_pane_t1

0xbedd,	// (0x0001abe9) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0001e320) rss_list_single_pane_t

0x98ee,	// (0x000185fa) main_camera2_pane

0x98ee,	// (0x000185fa) main_video2_pane

0x3b65,	// (0x00012871) cams_zoom_pane_cp2_ParamLimits

0x3b65,	// (0x00012871) cams_zoom_pane_cp2

0x3b85,	// (0x00012891) image2_vga_pane_ParamLimits

0x3b85,	// (0x00012891) image2_vga_pane

0x3bd6,	// (0x000128e2) main_camera2_pane_g1_ParamLimits

0x3bd6,	// (0x000128e2) main_camera2_pane_g1

0x3bf6,	// (0x00012902) main_camera2_pane_g2_ParamLimits

0x3bf6,	// (0x00012902) main_camera2_pane_g2

0x3c16,	// (0x00012922) main_camera2_pane_g3_ParamLimits

0x3c16,	// (0x00012922) main_camera2_pane_g3

0x3c36,	// (0x00012942) main_camera2_pane_g4_ParamLimits

0x3c36,	// (0x00012942) main_camera2_pane_g4

0x3c56,	// (0x00012962) main_camera2_pane_g5_ParamLimits

0x3c56,	// (0x00012962) main_camera2_pane_g5

0x3c76,	// (0x00012982) main_camera2_pane_g6_ParamLimits

0x3c76,	// (0x00012982) main_camera2_pane_g6

0x3c96,	// (0x000129a2) main_camera2_pane_g7_ParamLimits

0x3c96,	// (0x000129a2) main_camera2_pane_g7

0x3cb6,	// (0x000129c2) main_camera2_pane_g8_ParamLimits

0x3cb6,	// (0x000129c2) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0001e341) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0001e341) main_camera2_pane_g

0x3cf6,	// (0x00012a02) main_camera2_pane_t1_ParamLimits

0x3cf6,	// (0x00012a02) main_camera2_pane_t1

0x3d2b,	// (0x00012a37) main_camera2_pane_t2_ParamLimits

0x3d2b,	// (0x00012a37) main_camera2_pane_t2

0x3d51,	// (0x00012a5d) main_camera2_pane_t3_ParamLimits

0x3d51,	// (0x00012a5d) main_camera2_pane_t3

0x3daf,	// (0x00012abb) main_camera2_pane_t4_ParamLimits

0x3daf,	// (0x00012abb) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0001e354) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0001e354) main_camera2_pane_t

0x3e41,	// (0x00012b4d) cams_zoom_pane_cp4_ParamLimits

0x3e41,	// (0x00012b4d) cams_zoom_pane_cp4

0x3e57,	// (0x00012b63) image2_cif_pane_ParamLimits

0x3e57,	// (0x00012b63) image2_cif_pane

0x3e82,	// (0x00012b8e) image2_subqcif_pane_ParamLimits

0x3e82,	// (0x00012b8e) image2_subqcif_pane

0x3e9c,	// (0x00012ba8) main_video2_pane_g1_ParamLimits

0x3e9c,	// (0x00012ba8) main_video2_pane_g1

0x3eb6,	// (0x00012bc2) main_video2_pane_g2_ParamLimits

0x3eb6,	// (0x00012bc2) main_video2_pane_g2

0x3ecc,	// (0x00012bd8) main_video2_pane_g3_ParamLimits

0x3ecc,	// (0x00012bd8) main_video2_pane_g3

0x3ee2,	// (0x00012bee) main_video2_pane_g4_ParamLimits

0x3ee2,	// (0x00012bee) main_video2_pane_g4

0x3ef8,	// (0x00012c04) main_video2_pane_g5_ParamLimits

0x3ef8,	// (0x00012c04) main_video2_pane_g5

0x3f0e,	// (0x00012c1a) main_video2_pane_g6_ParamLimits

0x3f0e,	// (0x00012c1a) main_video2_pane_g6

0x0005,

0xf657,	// (0x0001e363) main_video2_pane_g_ParamLimits

0xf657,	// (0x0001e363) main_video2_pane_g

0x3f28,	// (0x00012c34) main_video2_pane_t1_ParamLimits

0x3f28,	// (0x00012c34) main_video2_pane_t1

0x3f4c,	// (0x00012c58) main_video2_pane_t2_ParamLimits

0x3f4c,	// (0x00012c58) main_video2_pane_t2

0x3f9a,	// (0x00012ca6) main_video2_pane_t3_ParamLimits

0x3f9a,	// (0x00012ca6) main_video2_pane_t3

0x0002,

0xf664,	// (0x0001e370) main_video2_pane_t_ParamLimits

0xf664,	// (0x0001e370) main_video2_pane_t

0x341f,	// (0x0001212b) call_muted_g2

0x0001,

0xf606,	// (0x0001e312) call_muted_g

0x98ee,	// (0x000185fa) main_mup2_pane

0x3fe2,	// (0x00012cee) main_mup2_pane_g1_ParamLimits

0x3fe2,	// (0x00012cee) main_mup2_pane_g1

0x3fee,	// (0x00012cfa) main_mup2_pane_g2_ParamLimits

0x3fee,	// (0x00012cfa) main_mup2_pane_g2

0xc06f,	// (0x0001ad7b) main_mup_pane_g13_cp1

0xc077,	// (0x0001ad83) mup_volume_pane_cp1

0x400a,	// (0x00012d16) main_mup2_pane_g4_ParamLimits

0x400a,	// (0x00012d16) main_mup2_pane_g4

0x401c,	// (0x00012d28) main_mup2_pane_g5_ParamLimits

0x401c,	// (0x00012d28) main_mup2_pane_g5

0x402e,	// (0x00012d3a) main_mup2_pane_g6_ParamLimits

0x402e,	// (0x00012d3a) main_mup2_pane_g6

0x4040,	// (0x00012d4c) main_mup2_pane_g7_ParamLimits

0x4040,	// (0x00012d4c) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0001e377) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0001e377) main_mup2_pane_g

0x4058,	// (0x00012d64) main_mup2_pane_t1_ParamLimits

0x4058,	// (0x00012d64) main_mup2_pane_t1

0x406e,	// (0x00012d7a) main_mup2_pane_t2_ParamLimits

0x406e,	// (0x00012d7a) main_mup2_pane_t2

0x4084,	// (0x00012d90) main_mup2_pane_t3_ParamLimits

0x4084,	// (0x00012d90) main_mup2_pane_t3

0x409a,	// (0x00012da6) main_mup2_pane_t4_ParamLimits

0x409a,	// (0x00012da6) main_mup2_pane_t4

0x40b2,	// (0x00012dbe) main_mup2_pane_t5_ParamLimits

0x40b2,	// (0x00012dbe) main_mup2_pane_t5

0x40ca,	// (0x00012dd6) main_mup2_pane_t6_ParamLimits

0x40ca,	// (0x00012dd6) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0001e386) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0001e386) main_mup2_pane_t

0x40fa,	// (0x00012e06) mup2_visualizer_pane_ParamLimits

0x40fa,	// (0x00012e06) mup2_visualizer_pane

0x4128,	// (0x00012e34) mup_progress_pane_cp_ParamLimits

0x4128,	// (0x00012e34) mup_progress_pane_cp

0xc051,	// (0x0001ad5d) mup_volume_pane_cp_ParamLimits

0xc051,	// (0x0001ad5d) mup_volume_pane_cp

0x413c,	// (0x00012e48) mup2_visualizer_pane_g1_ParamLimits

0x413c,	// (0x00012e48) mup2_visualizer_pane_g1

0xbf90,	// (0x0001ac9c) mup2_visualizer_pane_g2_ParamLimits

0xbf90,	// (0x0001ac9c) mup2_visualizer_pane_g2

0x4153,	// (0x00012e5f) mup2_visualizer_pane_g3_ParamLimits

0x4153,	// (0x00012e5f) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0001e393) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0001e393) mup2_visualizer_pane_g

0xacd7,	// (0x000199e3) aid_size_cell_fmradio

0x35d1,	// (0x000122dd) aid_height_parent_landcape

0xa04f,	// (0x00018d5b) wml_content_pane_cp

0xa057,	// (0x00018d63) wml_tabs_pane

0xa060,	// (0x00018d6c) popup_wml_miniature_window

0xa068,	// (0x00018d74) scroll_pane_cp021

0xa07c,	// (0x00018d88) wml_content_pane_comp8

0x98ee,	// (0x000185fa) bg_popup_sub_pane_cp05

0xbfae,	// (0x0001acba) popup_wml_miniature_window_g1

0xbfb6,	// (0x0001acc2) wml_miniature_view_pane

0x415f,	// (0x00012e6b) aid_size_wml_view

0x4167,	// (0x00012e73) wml_miniature_view_pane_g1

0x4170,	// (0x00012e7c) wml_miniature_view_pane_g2

0x4179,	// (0x00012e85) wml_miniature_view_pane_g3

0x4181,	// (0x00012e8d) wml_miniature_view_pane_g4

0x4189,	// (0x00012e95) wml_miniature_view_pane_g5

0x4191,	// (0x00012e9d) wml_miniature_view_pane_g6

0x4199,	// (0x00012ea5) wml_miniature_view_pane_g7

0x41a1,	// (0x00012ead) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0001e39a) wml_miniature_view_pane_g

0xbfbe,	// (0x0001acca) background_graphic_ParamLimits

0xbfbe,	// (0x0001acca) background_graphic

0xbfca,	// (0x0001acd6) wml_tabs_2_pane

0xbfd3,	// (0x0001acdf) wml_tabs_3_pane_ParamLimits

0xbfd3,	// (0x0001acdf) wml_tabs_3_pane

0xbfe5,	// (0x0001acf1) wml_tabs_4_pane_ParamLimits

0xbfe5,	// (0x0001acf1) wml_tabs_4_pane

0xbffb,	// (0x0001ad07) wml_tabs_5_pane_ParamLimits

0xbffb,	// (0x0001ad07) wml_tabs_5_pane

0xc015,	// (0x0001ad21) wml_tabs_pane_g2_ParamLimits

0xc015,	// (0x0001ad21) wml_tabs_pane_g2

0xc029,	// (0x0001ad35) wml_tabs_pane_g3_ParamLimits

0xc029,	// (0x0001ad35) wml_tabs_pane_g3

0x41a9,	// (0x00012eb5) wml_tabs_2_active_pane_ParamLimits

0x41a9,	// (0x00012eb5) wml_tabs_2_active_pane

0x41bd,	// (0x00012ec9) wml_tabs_2_passive_pane_ParamLimits

0x41bd,	// (0x00012ec9) wml_tabs_2_passive_pane

0x41d1,	// (0x00012edd) wml_tabs_3_active_pane_cp_ParamLimits

0x41d1,	// (0x00012edd) wml_tabs_3_active_pane_cp

0x41e6,	// (0x00012ef2) wml_tabs_3_passive_pane_ParamLimits

0x41e6,	// (0x00012ef2) wml_tabs_3_passive_pane

0x41f9,	// (0x00012f05) wml_tabs_3_passive_pane_cp_ParamLimits

0x41f9,	// (0x00012f05) wml_tabs_3_passive_pane_cp

0x4210,	// (0x00012f1c) tabs_4_active_pane

0x4218,	// (0x00012f24) tabs_4_passive_pane

0x4222,	// (0x00012f2e) tabs_4_passive_pane_cp

0x422a,	// (0x00012f36) tabs_4_passive_pane_cp2

0x32ec,	// (0x00011ff8) aid_height_text

0x297c,	// (0x00011688) mup_volume_cont_pane_ParamLimits

0x297c,	// (0x00011688) mup_volume_cont_pane

0x0757,	// (0x0000f463) aid_size_cell_pinb

0x0761,	// (0x0000f46d) aid_size_list_pinb

0x4114,	// (0x00012e20) mup2_volume_cont_pane_ParamLimits

0x4114,	// (0x00012e20) mup2_volume_cont_pane

0xc03d,	// (0x0001ad49) mup2_volume_cont_pane_g1_ParamLimits

0xc03d,	// (0x0001ad49) mup2_volume_cont_pane_g1

0x0419,	// (0x0000f125) aid_size_cell_touch_ParamLimits

0x0419,	// (0x0000f125) aid_size_cell_touch

0x0646,	// (0x0000f352) touch_pane_ParamLimits

0x0646,	// (0x0000f352) touch_pane

0x945d,	// (0x00018169) main_rss2_pane

0xc07f,	// (0x0001ad8b) listscroll_rss2_pane

0xc088,	// (0x0001ad94) rss2_navigation_pane

0xc090,	// (0x0001ad9c) list_rss2_pane

0xa763,	// (0x0001946f) scroll_pane_cp22

0xc098,	// (0x0001ada4) rss2_navigation_pane_g1

0xc0a1,	// (0x0001adad) rss2_navigation_pane_g2

0xc0a9,	// (0x0001adb5) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0001e3ab) rss2_navigation_pane_g

0xc0b1,	// (0x0001adbd) rss2_navigation_pane_t1

0x4234,	// (0x00012f40) rss2_list_single_pane_ParamLimits

0x4234,	// (0x00012f40) rss2_list_single_pane

0xc0bf,	// (0x0001adcb) rss2_list_single_pane_t2

0xc0cd,	// (0x0001add9) rss2_list_single_pane_t3_ParamLimits

0xc0cd,	// (0x0001add9) rss2_list_single_pane_t3

0xc0ea,	// (0x0001adf6) rss2_list_single_pane_t4

0x22af,	// (0x00010fbb) smil_status_pane_g1

0x94cd,	// (0x000181d9) main_image2_pane_ParamLimits

0x94cd,	// (0x000181d9) main_image2_pane

0x3cd6,	// (0x000129e2) main_camera2_pane_g9_ParamLimits

0x3cd6,	// (0x000129e2) main_camera2_pane_g9

0x3e04,	// (0x00012b10) main_camera2_pane_t5_ParamLimits

0x3e04,	// (0x00012b10) main_camera2_pane_t5

0xbf60,	// (0x0001ac6c) main_camera2_pane_t6_ParamLimits

0xbf60,	// (0x0001ac6c) main_camera2_pane_t6

0x424a,	// (0x00012f56) main_image2_pane_g1_ParamLimits

0x424a,	// (0x00012f56) main_image2_pane_g1

0x3027,	// (0x00011d33) smil2_video_pane_ParamLimits

0x3027,	// (0x00011d33) smil2_video_pane

0x947b,	// (0x00018187) aid_zoom_text_primary_cp

0x94c3,	// (0x000181cf) popup_preview_fixed_window

0x9fb8,	// (0x00018cc4) im_reading_pane_g1

0x3b4d,	// (0x00012859) cams2_bc_adjust_pane_cp_ParamLimits

0x3b4d,	// (0x00012859) cams2_bc_adjust_pane_cp

0x3e33,	// (0x00012b3f) cams2_bc_adjust_pane_ParamLimits

0x3e33,	// (0x00012b3f) cams2_bc_adjust_pane

0xc0f8,	// (0x0001ae04) cams2_bc_adjust_pane_g1

0xc100,	// (0x0001ae0c) cams2_slider_pane

0xc109,	// (0x0001ae15) cams2_slider_pane_g1

0xc112,	// (0x0001ae1e) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0001e3b2) cams2_slider_pane_g

0x0849,	// (0x0000f555) calc_display_pane_ParamLimits

0x0871,	// (0x0000f57d) calc_paper_pane_ParamLimits

0x0894,	// (0x0000f5a0) grid_calc_pane_ParamLimits

0xa631,	// (0x0001933d) popup_clock_digital_window_t1_ParamLimits

0xac74,	// (0x00019980) main_image_pane_t1

0x082b,	// (0x0000f537) aid_size_cell_calc_ParamLimits

0x082b,	// (0x0000f537) aid_size_cell_calc

0x3617,	// (0x00012323) popup_blid_sat_info2_window_ParamLimits

0x3617,	// (0x00012323) popup_blid_sat_info2_window

0xc134,	// (0x0001ae40) aid_size_cell_blid

0xc13c,	// (0x0001ae48) bg_popup_window_pane_cp07

0xc15f,	// (0x0001ae6b) grid_popup_blid_pane

0xc169,	// (0x0001ae75) heading_pane_cp05_ParamLimits

0xc169,	// (0x0001ae75) heading_pane_cp05

0xc233,	// (0x0001af3f) cell_popup_blid_pane_ParamLimits

0xc233,	// (0x0001af3f) cell_popup_blid_pane

0xc257,	// (0x0001af63) cell_popup_blid_pane_g1

0xc25f,	// (0x0001af6b) cell_popup_blid_pane_t1

0x40e4,	// (0x00012df0) mup2_indicator_pane_ParamLimits

0x40e4,	// (0x00012df0) mup2_indicator_pane

0x9eb5,	// (0x00018bc1) mup2_visualizer_osc_pane

0xbf9c,	// (0x0001aca8) mup2_visualizer_spec_pane_ParamLimits

0xbf9c,	// (0x0001aca8) mup2_visualizer_spec_pane

0x4260,	// (0x00012f6c) mup2_spec_half_pane

0x4269,	// (0x00012f75) mup2_spec_half_pane_cp

0x4271,	// (0x00012f7d) mup2_spec_bar_pane_ParamLimits

0x4271,	// (0x00012f7d) mup2_spec_bar_pane

0xbeeb,	// (0x0001abf7) mup2_spec_bar_pane_g1

0xbef5,	// (0x0001ac01) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0001e325) mup2_spec_bar_pane_g

0x4291,	// (0x00012f9d) mup2_osc_middle_pane

0xbf07,	// (0x0001ac13) mup2_visualizer_osc_pane_g1

0x94fb,	// (0x00018207) popup_number_entry_window_t1_ParamLimits

0x950e,	// (0x0001821a) popup_number_entry_window_t2_ParamLimits

0x9520,	// (0x0001822c) popup_number_entry_window_t3_ParamLimits

0x0698,	// (0x0000f3a4) popup_number_entry_window_t5_ParamLimits

0x0698,	// (0x0000f3a4) popup_number_entry_window_t5

0xf0ca,	// (0x0001ddd6) popup_number_entry_window_t_ParamLimits

0x9532,	// (0x0001823e) text_title_cp2_ParamLimits

0xab4e,	// (0x0001985a) aid_hotspot_pointer_text2_pane

0xab74,	// (0x00019880) main_viewer_pane_g9_ParamLimits

0xab74,	// (0x00019880) main_viewer_pane_g9

0xa1f1,	// (0x00018efd) cale_month_pane_t1_ParamLimits

0xa25c,	// (0x00018f68) bg_cale_pane_ParamLimits

0xa274,	// (0x00018f80) list_cale_pane_ParamLimits

0xa285,	// (0x00018f91) listscroll_cale_day_pane_t1

0xa297,	// (0x00018fa3) scroll_pane_cp09_ParamLimits

0x29b2,	// (0x000116be) main_mup_eq_pane_t1_ParamLimits

0x29b2,	// (0x000116be) main_mup_eq_pane_t1

0x29cc,	// (0x000116d8) main_mup_eq_pane_t2_ParamLimits

0x29cc,	// (0x000116d8) main_mup_eq_pane_t2

0x29e6,	// (0x000116f2) main_mup_eq_pane_t3_ParamLimits

0x29e6,	// (0x000116f2) main_mup_eq_pane_t3

0x2a02,	// (0x0001170e) main_mup_eq_pane_t4_ParamLimits

0x2a02,	// (0x0001170e) main_mup_eq_pane_t4

0x2a1e,	// (0x0001172a) main_mup_eq_pane_t5_ParamLimits

0x2a1e,	// (0x0001172a) main_mup_eq_pane_t5

0x2a3a,	// (0x00011746) main_mup_eq_pane_t6_ParamLimits

0x2a3a,	// (0x00011746) main_mup_eq_pane_t6

0x2a4e,	// (0x0001175a) main_mup_eq_pane_t7_ParamLimits

0x2a4e,	// (0x0001175a) main_mup_eq_pane_t7

0x2a62,	// (0x0001176e) main_mup_eq_pane_t8_ParamLimits

0x2a62,	// (0x0001176e) main_mup_eq_pane_t8

0x2a76,	// (0x00011782) main_mup_eq_pane_t9_ParamLimits

0x2a76,	// (0x00011782) main_mup_eq_pane_t9

0x2a90,	// (0x0001179c) main_mup_eq_pane_t10_ParamLimits

0x2a90,	// (0x0001179c) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0001e161) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0001e161) main_mup_eq_pane_t

0x2b3f,	// (0x0001184b) mup_equalizer_pane_cp5_ParamLimits

0x2b53,	// (0x0001185f) mup_equalizer_pane_cp6_ParamLimits

0x2b67,	// (0x00011873) mup_equalizer_pane_cp7_ParamLimits

0x945d,	// (0x00018169) main_gallery_pane

0xbf10,	// (0x0001ac1c) smil2_volume_pane

0xbf18,	// (0x0001ac24) smil_status_volume_pane_g1_ParamLimits

0xbf2b,	// (0x0001ac37) smil_status_volume_pane_g2_ParamLimits

0xbf3e,	// (0x0001ac4a) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0001e32a) smil_status_volume_pane_g_ParamLimits

0xc13c,	// (0x0001ae48) bg_popup_window_pane_cp07_ParamLimits

0xc14a,	// (0x0001ae56) blid_firmament_pane

0x429a,	// (0x00012fa6) aid_size_cell_gallery_ParamLimits

0x429a,	// (0x00012fa6) aid_size_cell_gallery

0x42b0,	// (0x00012fbc) grid_gallery_pane_ParamLimits

0x42b0,	// (0x00012fbc) grid_gallery_pane

0x42c9,	// (0x00012fd5) cell_gallery_pane_ParamLimits

0x42c9,	// (0x00012fd5) cell_gallery_pane

0xc26d,	// (0x0001af79) bg_cell_gallery_focus_pane_ParamLimits

0xc26d,	// (0x0001af79) bg_cell_gallery_focus_pane

0xc27f,	// (0x0001af8b) cell_gallery_pane_g1_ParamLimits

0xc27f,	// (0x0001af8b) cell_gallery_pane_g1

0x4312,	// (0x0001301e) cell_gallery_pane_g2_ParamLimits

0x4312,	// (0x0001301e) cell_gallery_pane_g2

0x431f,	// (0x0001302b) cell_gallery_pane_g3_ParamLimits

0x431f,	// (0x0001302b) cell_gallery_pane_g3

0xc28b,	// (0x0001af97) cell_gallery_pane_g4_ParamLimits

0xc28b,	// (0x0001af97) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0001e3d8) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0001e3d8) cell_gallery_pane_g

0xc297,	// (0x0001afa3) bg_cell_gallery_focus_pane_g1

0xc29f,	// (0x0001afab) bg_cell_gallery_focus_pane_g2

0xc2a7,	// (0x0001afb3) bg_cell_gallery_focus_pane_g3

0xc2af,	// (0x0001afbb) bg_cell_gallery_focus_pane_g4

0xc2b7,	// (0x0001afc3) bg_cell_gallery_focus_pane_g5

0xc2bf,	// (0x0001afcb) bg_cell_gallery_focus_pane_g6

0xc2c7,	// (0x0001afd3) bg_cell_gallery_focus_pane_g7

0xc2cf,	// (0x0001afdb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0001e3e1) bg_cell_gallery_focus_pane_g

0xc2d7,	// (0x0001afe3) aid_firma_cardinal

0xc2eb,	// (0x0001aff7) blid_firmament_pane_t1

0xc302,	// (0x0001b00e) blid_firmament_pane_t2

0xc319,	// (0x0001b025) blid_firmament_pane_t3

0xc330,	// (0x0001b03c) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0001e3f2) blid_firmament_pane_t

0xc347,	// (0x0001b053) blid_sat_info_pane

0xc357,	// (0x0001b063) blid_sat_info_pane_g1

0xc357,	// (0x0001b063) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0001e3fb) blid_sat_info_pane_g

0xc361,	// (0x0001b06d) blid_sat_info_pane_t1

0xc36f,	// (0x0001b07b) smil2_volume_content_pane

0xc378,	// (0x0001b084) smil2_volume_pane_g1

0xc380,	// (0x0001b08c) smil2_volume_content_pane_g1

0xc389,	// (0x0001b095) smil2_volume_content_pane_g2

0xc392,	// (0x0001b09e) smil2_volume_content_pane_g3

0xc39b,	// (0x0001b0a7) smil2_volume_content_pane_g4

0xc3a4,	// (0x0001b0b0) smil2_volume_content_pane_g5

0xc3ad,	// (0x0001b0b9) smil2_volume_content_pane_g6

0xc3b6,	// (0x0001b0c2) smil2_volume_content_pane_g7

0xc3bf,	// (0x0001b0cb) smil2_volume_content_pane_g8

0xc3c8,	// (0x0001b0d4) smil2_volume_content_pane_g9

0xc3d1,	// (0x0001b0dd) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0001e400) smil2_volume_content_pane_g

0x0df3,	// (0x0000faff) cale_week_day_heading_pane_t1_ParamLimits

0x0e1d,	// (0x0000fb29) cale_week_day_heading_pane_t2_ParamLimits

0x0e4c,	// (0x0000fb58) cale_week_day_heading_pane_t3_ParamLimits

0x0e7b,	// (0x0000fb87) cale_week_day_heading_pane_t4_ParamLimits

0x0eaa,	// (0x0000fbb6) cale_week_day_heading_pane_t5_ParamLimits

0x0ee1,	// (0x0000fbed) cale_week_day_heading_pane_t6_ParamLimits

0x0f18,	// (0x0000fc24) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0001dedd) cale_week_day_heading_pane_t_ParamLimits

0x9e5a,	// (0x00018b66) bg_cale_side_pane_ParamLimits

0x0f42,	// (0x0000fc4e) cale_week_time_pane_t1_ParamLimits

0x0f5c,	// (0x0000fc68) cale_week_time_pane_t2_ParamLimits

0x0f76,	// (0x0000fc82) cale_week_time_pane_t3_ParamLimits

0x0f90,	// (0x0000fc9c) cale_week_time_pane_t4_ParamLimits

0x0faa,	// (0x0000fcb6) cale_week_time_pane_t5_ParamLimits

0x0fc4,	// (0x0000fcd0) cale_week_time_pane_t6_ParamLimits

0x0fde,	// (0x0000fcea) cale_week_time_pane_t7_ParamLimits

0x0ff8,	// (0x0000fd04) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0001deec) cale_week_time_pane_t_ParamLimits

0x1018,	// (0x0000fd24) cell_cale_week_pane_g2_ParamLimits

0x9e5a,	// (0x00018b66) bg_cale_side_pane_cp01_ParamLimits

0x208a,	// (0x00010d96) cale_month_week_pane_t1_ParamLimits

0x20a3,	// (0x00010daf) cale_month_week_pane_t2_ParamLimits

0x20bc,	// (0x00010dc8) cale_month_week_pane_t3_ParamLimits

0x20d5,	// (0x00010de1) cale_month_week_pane_t4_ParamLimits

0x20ee,	// (0x00010dfa) cale_month_week_pane_t5_ParamLimits

0x2107,	// (0x00010e13) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0001dfc1) cale_month_week_pane_t_ParamLimits

0xa203,	// (0x00018f0f) cell_cale_month_pane_g1_ParamLimits

0x945d,	// (0x00018169) main_cale_event_viewer_pane

0x945d,	// (0x00018169) listscroll_cale_event_viewer_pane

0xc3da,	// (0x0001b0e6) list_cale_ev_pane

0xc3e2,	// (0x0001b0ee) scroll_pane_cp023

0xc3ee,	// (0x0001b0fa) field_cale_ev_pane_ParamLimits

0xc3ee,	// (0x0001b0fa) field_cale_ev_pane

0xc40c,	// (0x0001b118) field_cale_ev_content_pane_ParamLimits

0xc40c,	// (0x0001b118) field_cale_ev_content_pane

0xc418,	// (0x0001b124) field_cale_ev_pane_g1_ParamLimits

0xc418,	// (0x0001b124) field_cale_ev_pane_g1

0xc424,	// (0x0001b130) field_cale_ev_pane_g2_ParamLimits

0xc424,	// (0x0001b130) field_cale_ev_pane_g2

0xc43c,	// (0x0001b148) field_cale_ev_pane_g3_ParamLimits

0xc43c,	// (0x0001b148) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0001e415) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0001e415) field_cale_ev_pane_g

0xc454,	// (0x0001b160) field_cale_ev_pane_t1_ParamLimits

0xc454,	// (0x0001b160) field_cale_ev_pane_t1

0x9d77,	// (0x00018a83) field_cale_ev_content_pane_t1_ParamLimits

0x9d77,	// (0x00018a83) field_cale_ev_content_pane_t1

0xab18,	// (0x00019824) bg_button_pane_cp01

0x0b20,	// (0x0000f82c) listscroll_cale_week_pane_ParamLimits

0x9e05,	// (0x00018b11) popup_toolbar_window_cp01

0x9e2b,	// (0x00018b37) listscroll_cale_week_pane_t1_ParamLimits

0x0b20,	// (0x0000f82c) listscroll_cale_day_pane_ParamLimits

0x9e05,	// (0x00018b11) popup_toolbar_window_cp02

0xa285,	// (0x00018f91) listscroll_cale_day_pane_t1_ParamLimits

0x0b20,	// (0x0000f82c) main_cale_month_pane_ParamLimits

0xbe89,	// (0x0001ab95) popup_toolbar_window_cp03_ParamLimits

0xbe89,	// (0x0001ab95) popup_toolbar_window_cp03

0x2eef,	// (0x00011bfb) main_image_pane_g2_ParamLimits

0x2eef,	// (0x00011bfb) main_image_pane_g2

0x2f00,	// (0x00011c0c) main_image_pane_g3_ParamLimits

0x2f00,	// (0x00011c0c) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0001e1f3) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0001e1f3) main_image_pane_g

0xac74,	// (0x00019980) main_image_pane_t1_ParamLimits

0x2f11,	// (0x00011c1d) main_image_pane_t2_ParamLimits

0x2f11,	// (0x00011c1d) main_image_pane_t2

0x2f23,	// (0x00011c2f) main_image_pane_t3_ParamLimits

0x2f23,	// (0x00011c2f) main_image_pane_t3

0x2f4b,	// (0x00011c57) main_image_pane_t4_ParamLimits

0x2f4b,	// (0x00011c57) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0001e1fa) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0001e1fa) main_image_pane_t

0x2f6b,	// (0x00011c77) popup_image_details_window_cp01

0x2f75,	// (0x00011c81) popup_toobar_trans_pane_cp01_ParamLimits

0x2f75,	// (0x00011c81) popup_toobar_trans_pane_cp01

0x36e8,	// (0x000123f4) popup_image_details_window_ParamLimits

0x36e8,	// (0x000123f4) popup_image_details_window

0xbe5c,	// (0x0001ab68) popup_image_focus_window

0x3b07,	// (0x00012813) camera2_autofocus_pane_ParamLimits

0x3b07,	// (0x00012813) camera2_autofocus_pane

0x945d,	// (0x00018169) bg_popup_sub_pane_cp06

0xc46b,	// (0x0001b177) popup_image_focus_window_g1

0xc473,	// (0x0001b17f) popup_image_focus_window_g2

0xc47b,	// (0x0001b187) popup_image_focus_window_g3

0xc483,	// (0x0001b18f) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0001e41c) popup_image_focus_window_g

0xc48b,	// (0x0001b197) popup_image_focus_window_t1

0xc499,	// (0x0001b1a5) popup_image_focus_window_t2

0xc4a9,	// (0x0001b1b5) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0001e425) popup_image_focus_window_t

0xc4b7,	// (0x0001b1c3) camera2_autofocus_pane_g1

0x94cd,	// (0x000181d9) bg_tb_trans_pane_cp01

0xc4c5,	// (0x0001b1d1) popup_image_details_window_g1

0xc4d8,	// (0x0001b1e4) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0001e437) popup_image_details_window_g

0xc501,	// (0x0001b20d) popup_image_details_window_t1

0xc513,	// (0x0001b21f) popup_image_details_window_t2

0xc52c,	// (0x0001b238) popup_image_details_window_t3

0xc540,	// (0x0001b24c) popup_image_details_window_t4

0xc55b,	// (0x0001b267) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0001e43e) popup_image_details_window_t

0x9c0e,	// (0x0001891a) bg_calc_paper_pane_ParamLimits

0x945d,	// (0x00018169) grid_highlight_pane_cp013

0x9c22,	// (0x0001892e) list_calc_pane_ParamLimits

0x9c34,	// (0x00018940) scroll_pane_cp024

0x9c3c,	// (0x00018948) bg_calc_display_pane_ParamLimits

0x0992,	// (0x0000f69e) calc_display_pane_t1_ParamLimits

0x09a4,	// (0x0000f6b0) calc_display_pane_t2_ParamLimits

0x9c48,	// (0x00018954) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0001de5d) calc_display_pane_t_ParamLimits

0x0a64,	// (0x0000f770) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0001de7a) cell_calc_pane_g

0x0a6d,	// (0x0000f779) cell_calc_pane_t1

0x9cbf,	// (0x000189cb) grid_highlight_pane_cp02_ParamLimits

0x9cd5,	// (0x000189e1) toolbar_button_pane_cp01_ParamLimits

0x9cd5,	// (0x000189e1) toolbar_button_pane_cp01

0xacb9,	// (0x000199c5) temp_image_control_pane_ParamLimits

0xacb9,	// (0x000199c5) temp_image_control_pane

0x94cd,	// (0x000181d9) main_mp3_pane

0xc575,	// (0x0001b281) temp_image_control_pane_g1_ParamLimits

0xc575,	// (0x0001b281) temp_image_control_pane_g1

0xc583,	// (0x0001b28f) temp_image_control_pane_g2_ParamLimits

0xc583,	// (0x0001b28f) temp_image_control_pane_g2

0xc595,	// (0x0001b2a1) temp_image_control_pane_g3_ParamLimits

0xc595,	// (0x0001b2a1) temp_image_control_pane_g3

0x435c,	// (0x00013068) temp_image_control_pane_g4_ParamLimits

0x435c,	// (0x00013068) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0001e449) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0001e449) temp_image_control_pane_g

0xc575,	// (0x0001b281) main_mp3_pane_g1

0x436f,	// (0x0001307b) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0001e452) main_mp3_pane_g

0xc5d8,	// (0x0001b2e4) main_mp3_pane_t1

0x9ec7,	// (0x00018bd3) main_camera_pane_g8_ParamLimits

0x9ec7,	// (0x00018bd3) main_camera_pane_g8

0x131c,	// (0x00010028) main_video_pane_g7_ParamLimits

0x131c,	// (0x00010028) main_video_pane_g7

0xbf7e,	// (0x0001ac8a) main_camera2_pane_t7_ParamLimits

0xbf7e,	// (0x0001ac8a) main_camera2_pane_t7

0xa00f,	// (0x00018d1b) scroll_pane_cp025_ParamLimits

0xa00f,	// (0x00018d1b) scroll_pane_cp025

0xa023,	// (0x00018d2f) scroll_pane_cp026_ParamLimits

0xa023,	// (0x00018d2f) scroll_pane_cp026

0xa032,	// (0x00018d3e) wml_content_pane_ParamLimits

0x945d,	// (0x00018169) main_touch_calib_pane

0x4443,	// (0x0001314f) main_touch_calib_pane_g1

0x4455,	// (0x00013161) main_touch_calib_pane_g2

0x4467,	// (0x00013173) main_touch_calib_pane_g3

0x4479,	// (0x00013185) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0001e470) main_touch_calib_pane_g

0x448b,	// (0x00013197) main_touch_calib_pane_t1

0x44a5,	// (0x000131b1) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0001e479) main_touch_calib_pane_t

0xa832,	// (0x0001953e) mup_progress_pane_cp02

0xa867,	// (0x00019573) navi_pane_g1

0xa922,	// (0x0001962e) navi_pane_mp_t3

0x94cd,	// (0x000181d9) main_mp3_pane_ParamLimits

0x3873,	// (0x0001257f) navi_pane_ParamLimits

0xc575,	// (0x0001b281) main_mp3_pane_g1_ParamLimits

0x436f,	// (0x0001307b) main_mp3_pane_g2_ParamLimits

0x437d,	// (0x00013089) main_mp3_pane_g3_ParamLimits

0x437d,	// (0x00013089) main_mp3_pane_g3

0x438b,	// (0x00013097) main_mp3_pane_g4_ParamLimits

0x438b,	// (0x00013097) main_mp3_pane_g4

0xc5a5,	// (0x0001b2b1) main_mp3_pane_g5_ParamLimits

0xc5a5,	// (0x0001b2b1) main_mp3_pane_g5

0xc5b3,	// (0x0001b2bf) main_mp3_pane_g6_ParamLimits

0xc5b3,	// (0x0001b2bf) main_mp3_pane_g6

0xc5c0,	// (0x0001b2cc) main_mp3_pane_g7_ParamLimits

0xc5c0,	// (0x0001b2cc) main_mp3_pane_g7

0xc5cc,	// (0x0001b2d8) main_mp3_pane_g8_ParamLimits

0xc5cc,	// (0x0001b2d8) main_mp3_pane_g8

0xf746,	// (0x0001e452) main_mp3_pane_g_ParamLimits

0x4397,	// (0x000130a3) main_mp3_pane_t2

0x43a5,	// (0x000130b1) main_mp3_pane_t3

0xc5e6,	// (0x0001b2f2) main_mp3_pane_t4

0xc5f4,	// (0x0001b300) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0001e463) main_mp3_pane_t

0xc602,	// (0x0001b30e) mup_progress_pane_cp01

0x947b,	// (0x00018187) aid_zoom_text_secondary2

0xc3da,	// (0x0001b0e6) list_cale_ev2_pane

0xc3e2,	// (0x0001b0ee) scroll_pane_cp023_ParamLimits

0x44fb,	// (0x00013207) field_cale_ev2_pane_ParamLimits

0x44fb,	// (0x00013207) field_cale_ev2_pane

0xc60a,	// (0x0001b316) field_cale_ev2_pane_g1_ParamLimits

0xc60a,	// (0x0001b316) field_cale_ev2_pane_g1

0xc616,	// (0x0001b322) field_cale_ev2_pane_g2_ParamLimits

0xc616,	// (0x0001b322) field_cale_ev2_pane_g2

0xc62e,	// (0x0001b33a) field_cale_ev2_pane_g3_ParamLimits

0xc62e,	// (0x0001b33a) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0001e484) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0001e484) field_cale_ev2_pane_g

0xc652,	// (0x0001b35e) field_cale_ev2_pane_t1_ParamLimits

0xc652,	// (0x0001b35e) field_cale_ev2_pane_t1

0xc669,	// (0x0001b375) field_cale_ev2_pane_t2_ParamLimits

0xc669,	// (0x0001b375) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0001e48d) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0001e48d) field_cale_ev2_pane_t

0x2da3,	// (0x00011aaf) main_postcard_pane_g5_ParamLimits

0x2da3,	// (0x00011aaf) main_postcard_pane_g5

0x2db9,	// (0x00011ac5) main_postcard_pane_g6_ParamLimits

0x2db9,	// (0x00011ac5) main_postcard_pane_g6

0x10e2,	// (0x0000fdee) camera2_autofocus_pane_cp_ParamLimits

0x10e2,	// (0x0000fdee) camera2_autofocus_pane_cp

0x94cd,	// (0x000181d9) main_mup3_pane

0x453c,	// (0x00013248) main_mup3_pane_g1_ParamLimits

0x453c,	// (0x00013248) main_mup3_pane_g1

0x455e,	// (0x0001326a) main_mup3_pane_g2_ParamLimits

0x455e,	// (0x0001326a) main_mup3_pane_g2

0x45de,	// (0x000132ea) main_mup3_pane_g3_ParamLimits

0x45de,	// (0x000132ea) main_mup3_pane_g3

0x4624,	// (0x00013330) main_mup3_pane_g4_ParamLimits

0x4624,	// (0x00013330) main_mup3_pane_g4

0x466a,	// (0x00013376) main_mup3_pane_g5_ParamLimits

0x466a,	// (0x00013376) main_mup3_pane_g5

0x46b0,	// (0x000133bc) main_mup3_pane_g6_ParamLimits

0x46b0,	// (0x000133bc) main_mup3_pane_g6

0xc67e,	// (0x0001b38a) main_mup3_pane_g7_ParamLimits

0xc67e,	// (0x0001b38a) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0001e49d) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0001e49d) main_mup3_pane_g

0x472e,	// (0x0001343a) main_mup3_pane_t1_ParamLimits

0x472e,	// (0x0001343a) main_mup3_pane_t1

0x47a2,	// (0x000134ae) main_mup3_pane_t2_ParamLimits

0x47a2,	// (0x000134ae) main_mup3_pane_t2

0x4876,	// (0x00013582) main_mup3_pane_t4_ParamLimits

0x4876,	// (0x00013582) main_mup3_pane_t4

0x48cc,	// (0x000135d8) main_mup3_pane_t5_ParamLimits

0x48cc,	// (0x000135d8) main_mup3_pane_t5

0x4988,	// (0x00013694) main_mup3_pane_t6_ParamLimits

0x4988,	// (0x00013694) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0001e4ae) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0001e4ae) main_mup3_pane_t

0x4a40,	// (0x0001374c) mup3_progress_pane_ParamLimits

0x4a40,	// (0x0001374c) mup3_progress_pane

0x4acc,	// (0x000137d8) popup_mup3_control_window_ParamLimits

0x4acc,	// (0x000137d8) popup_mup3_control_window

0xc68c,	// (0x0001b398) popup_mup3_text_window

0x4afe,	// (0x0001380a) mup3_progress_pane_t1

0x4b1d,	// (0x00013829) mup3_progress_pane_t2

0xc694,	// (0x0001b3a0) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0001e4bb) mup3_progress_pane_t

0xc6b1,	// (0x0001b3bd) mup_progress_pane_cp03

0x945d,	// (0x00018169) bg_tb_trans_pane_cp04

0x4b3c,	// (0x00013848) mup3_volume_pane

0x4b44,	// (0x00013850) popup_mup3_control_window_g1

0x4b4d,	// (0x00013859) mup3_volume_pane_g1

0x4b56,	// (0x00013862) mup3_volume_pane_g2

0x4b5f,	// (0x0001386b) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0001e4c2) mup3_volume_pane_g

0x945d,	// (0x00018169) bg_tb_trans_pane_cp03

0xc6c1,	// (0x0001b3cd) popup_mup3_text_window_g1

0xc6c9,	// (0x0001b3d5) popup_mup3_text_window_t1

0x9c96,	// (0x000189a2) list_calc_item_pane_g1_ParamLimits

0xc066,	// (0x0001ad72) mup_volume_pane_cp_g1

0x44bf,	// (0x000131cb) main_touch_calib_pane_t3

0x44d3,	// (0x000131df) main_touch_calib_pane_t4

0x44e7,	// (0x000131f3) main_touch_calib_pane_t5

0x9467,	// (0x00018173) aid_cell_size_toolbar2

0x946f,	// (0x0001817b) aid_popup3_width_pane

0x947b,	// (0x00018187) aid_zoom_text_msg_primary

0x10c1,	// (0x0000fdcd) vorec_t7

0x9c5a,	// (0x00018966) bg_calc_paper_pane_g1_ParamLimits

0x9c66,	// (0x00018972) bg_calc_paper_pane_g2_ParamLimits

0x9c72,	// (0x0001897e) bg_calc_paper_pane_g3_ParamLimits

0x9c7e,	// (0x0001898a) bg_calc_paper_pane_g4_ParamLimits

0x9c8a,	// (0x00018996) bg_calc_paper_pane_g5_ParamLimits

0x09ed,	// (0x0000f6f9) bg_calc_paper_pane_g6_ParamLimits

0x09fc,	// (0x0000f708) bg_calc_paper_pane_g7_ParamLimits

0x0a0b,	// (0x0000f717) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0001de64) bg_calc_paper_pane_g_ParamLimits

0x0a1e,	// (0x0000f72a) calc_bg_paper_pane_g9_ParamLimits

0x122e,	// (0x0000ff3a) image_qvga_pane_ParamLimits

0x122e,	// (0x0000ff3a) image_qvga_pane

0x9b49,	// (0x00018855) bg_popup_sub_pane_cp04_ParamLimits

0xabf0,	// (0x000198fc) popup_mup_playback_window_g1_ParamLimits

0xabfc,	// (0x00019908) popup_mup_playback_window_t1_ParamLimits

0xac11,	// (0x0001991d) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0001e1ee) popup_mup_playback_window_t_ParamLimits

0x3ffe,	// (0x00012d0a) main_mup2_pane_g3_ParamLimits

0x3ffe,	// (0x00012d0a) main_mup2_pane_g3

0x1642,	// (0x0001034e) popup_toolbar_window_cp04

0xb006,	// (0x00019d12) popup_call2_audio_second_window_g3_ParamLimits

0xb006,	// (0x00019d12) popup_call2_audio_second_window_g3

0xb410,	// (0x0001a11c) popup_call2_audio_first_window_g4_ParamLimits

0xb410,	// (0x0001a11c) popup_call2_audio_first_window_g4

0xba8f,	// (0x0001a79b) popup_call2_audio_in_window_g4_ParamLimits

0xba8f,	// (0x0001a79b) popup_call2_audio_in_window_g4

0x2ed1,	// (0x00011bdd) aid_area_sk_bg_cut_ParamLimits

0x2ed1,	// (0x00011bdd) aid_area_sk_bg_cut

0xac26,	// (0x00019932) aid_area_sk_bg_cut_2_ParamLimits

0xac26,	// (0x00019932) aid_area_sk_bg_cut_2

0x4302,	// (0x0001300e) aid_placing_details_win

0x430a,	// (0x00013016) aid_placing_details_win_2

0xc4b7,	// (0x0001b1c3) camera2_autofocus_pane_g1_ParamLimits

0x05df,	// (0x0000f2eb) popup_fixed_preview_cale_window_ParamLimits

0x05df,	// (0x0000f2eb) popup_fixed_preview_cale_window

0xa9a9,	// (0x000196b5) navi_slider_pane_g3

0xa9b2,	// (0x000196be) navi_slider_pane_g4

0xa9bb,	// (0x000196c7) navi_slider_pane_g5

0xa9a9,	// (0x000196b5) navi_slider_pane_g6

0xa9c4,	// (0x000196d0) navi_slider_pane_g7

0xaae5,	// (0x000197f1) mup_scale_pane_g3

0xaaee,	// (0x000197fa) mup_scale_pane_g4

0xaaf7,	// (0x00019803) mup_scale_pane_g5

0x2b7b,	// (0x00011887) mup_scale_pane_g6

0x2b84,	// (0x00011890) mup_scale_pane_g7

0xa9a9,	// (0x000196b5) cams2_slider_pane_g3

0xc11b,	// (0x0001ae27) cams2_slider_pane_g4

0xc123,	// (0x0001ae2f) cams2_slider_pane_g5

0xa9a9,	// (0x000196b5) cams2_slider_pane_g6

0xc12b,	// (0x0001ae37) cams2_slider_pane_g7

0xc357,	// (0x0001b063) camera2_autofocus_pane_cp_g1

0xbe30,	// (0x0001ab3c) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe30,	// (0x0001ab3c) bg_popup_preview_window_pane_cp02

0xc6d7,	// (0x0001b3e3) list_fp_cale_pane_ParamLimits

0xc6d7,	// (0x0001b3e3) list_fp_cale_pane

0xc6e3,	// (0x0001b3ef) popup_fixed_preview_cale_window_t1_ParamLimits

0xc6e3,	// (0x0001b3ef) popup_fixed_preview_cale_window_t1

0x4b68,	// (0x00013874) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b68,	// (0x00013874) popup_fixed_preview_cale_window_t2

0x4b7d,	// (0x00013889) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b7d,	// (0x00013889) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0001e4c9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0001e4c9) popup_fixed_preview_cale_window_t

0x4b92,	// (0x0001389e) list_single_fp_cale_pane_ParamLimits

0x4b92,	// (0x0001389e) list_single_fp_cale_pane

0xc701,	// (0x0001b40d) list_single_fp_cale_pane_g1_ParamLimits

0xc701,	// (0x0001b40d) list_single_fp_cale_pane_g1

0xc70d,	// (0x0001b419) list_single_fp_cale_pane_g2_ParamLimits

0xc70d,	// (0x0001b419) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0001e4d0) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0001e4d0) list_single_fp_cale_pane_g

0xc726,	// (0x0001b432) list_single_fp_cale_pane_t1_ParamLimits

0xc726,	// (0x0001b432) list_single_fp_cale_pane_t1

0xc738,	// (0x0001b444) list_single_fp_cale_pane_t2_ParamLimits

0xc738,	// (0x0001b444) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0001e4d7) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0001e4d7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x945d,	// (0x00018169) main_dialer_pane

0x4ba8,	// (0x000138b4) aid_cell_size_keypad

0x4bb2,	// (0x000138be) dialer_ne_pane

0x4bba,	// (0x000138c6) grid_dialer_command_1_pane

0x4bc2,	// (0x000138ce) grid_dialer_command_2_pane

0x4bca,	// (0x000138d6) grid_dialer_keypad_pane

0x4bdc,	// (0x000138e8) bg_popup_call_pane_cp06_ParamLimits

0x4bdc,	// (0x000138e8) bg_popup_call_pane_cp06

0x4be8,	// (0x000138f4) dialer_ne_clear_pane_ParamLimits

0x4be8,	// (0x000138f4) dialer_ne_clear_pane

0xc76b,	// (0x0001b477) dialer_ne_pane_g1

0xc773,	// (0x0001b47f) dialer_ne_pane_t1_ParamLimits

0xc773,	// (0x0001b47f) dialer_ne_pane_t1

0x4bf4,	// (0x00013900) dialer_ne_pane_t2_ParamLimits

0x4bf4,	// (0x00013900) dialer_ne_pane_t2

0x4c1e,	// (0x0001392a) dialer_ne_pane_t3_ParamLimits

0x4c1e,	// (0x0001392a) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0001e4dc) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0001e4dc) dialer_ne_pane_t

0x4c4e,	// (0x0001395a) dialer_ne_pane_t3_copy1_ParamLimits

0x4c4e,	// (0x0001395a) dialer_ne_pane_t3_copy1

0x4c7d,	// (0x00013989) cell_dialer_keypad_pane_ParamLimits

0x4c7d,	// (0x00013989) cell_dialer_keypad_pane

0x4c94,	// (0x000139a0) cell_dialer_command_1_pane_ParamLimits

0x4c94,	// (0x000139a0) cell_dialer_command_1_pane

0x4caa,	// (0x000139b6) cell_dialer_command_2_pane_ParamLimits

0x4caa,	// (0x000139b6) cell_dialer_command_2_pane

0xc785,	// (0x0001b491) bg_button_pane_cp02_ParamLimits

0xc785,	// (0x0001b491) bg_button_pane_cp02

0x4cb9,	// (0x000139c5) cell_dialer_keypad_pane_g1_ParamLimits

0x4cb9,	// (0x000139c5) cell_dialer_keypad_pane_g1

0xc785,	// (0x0001b491) bg_button_pane_cp03_ParamLimits

0xc785,	// (0x0001b491) bg_button_pane_cp03

0x4ccd,	// (0x000139d9) cell_dialer_command_1_pane_g1_ParamLimits

0x4ccd,	// (0x000139d9) cell_dialer_command_1_pane_g1

0xc791,	// (0x0001b49d) bg_button_pane_cp04

0x4ce1,	// (0x000139ed) cell_dialer_command_2_pane_g1

0x9eb5,	// (0x00018bc1) bg_button_pane_cp06

0xc799,	// (0x0001b4a5) dialer_ne_clear_pane_g1

0xa873,	// (0x0001957f) navi_pane_g2

0xa8a1,	// (0x000195ad) navi_pane_g3

0x0002,

0xf3e5,	// (0x0001e0f1) navi_pane_g

0xa930,	// (0x0001963c) navi_pane_mv_g2

0xa957,	// (0x00019663) navi_pane_mv_g5

0x2749,	// (0x00011455) navi_pane_mv_t1

0x9c3c,	// (0x00018948) main_clock2_pane

0x4d2f,	// (0x00013a3b) main_clock2_list_pane_ParamLimits

0x4d2f,	// (0x00013a3b) main_clock2_list_pane

0x4d69,	// (0x00013a75) main_clock2_pane_t1_ParamLimits

0x4d69,	// (0x00013a75) main_clock2_pane_t1

0x4da7,	// (0x00013ab3) main_clock2_pane_t2_ParamLimits

0x4da7,	// (0x00013ab3) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0001e4e8) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0001e4e8) main_clock2_pane_t

0x4e45,	// (0x00013b51) popup_clock_analogue_window_cp03_ParamLimits

0x4e45,	// (0x00013b51) popup_clock_analogue_window_cp03

0x4e6a,	// (0x00013b76) popup_clock_digital_window_cp02_ParamLimits

0x4e6a,	// (0x00013b76) popup_clock_digital_window_cp02

0x4edb,	// (0x00013be7) main_clock2_list_single_pane_ParamLimits

0x4edb,	// (0x00013be7) main_clock2_list_single_pane

0x9eb5,	// (0x00018bc1) list_highlight_pane_cp05

0xc7d3,	// (0x0001b4df) main_clock2_list_single_pane_t1

0x1642,	// (0x0001034e) popup_toolbar_window_cp04_ParamLimits

0x432c,	// (0x00013038) camera2_autofocus_pane_g2_ParamLimits

0x432c,	// (0x00013038) camera2_autofocus_pane_g2

0x4338,	// (0x00013044) camera2_autofocus_pane_g3_ParamLimits

0x4338,	// (0x00013044) camera2_autofocus_pane_g3

0x4344,	// (0x00013050) camera2_autofocus_pane_g4_ParamLimits

0x4344,	// (0x00013050) camera2_autofocus_pane_g4

0x4350,	// (0x0001305c) camera2_autofocus_pane_g5_ParamLimits

0x4350,	// (0x0001305c) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0001e42c) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0001e42c) camera2_autofocus_pane_g

0x451c,	// (0x00013228) camera2_autofocus_pane_cp_g2

0x4524,	// (0x00013230) camera2_autofocus_pane_cp_g3

0x452c,	// (0x00013238) camera2_autofocus_pane_cp_g4

0x4534,	// (0x00013240) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0001e492) camera2_autofocus_pane_cp_g

0x4bd4,	// (0x000138e0) popup_dialer_spcha_window

0x945d,	// (0x00018169) bg_popup_sub_pane_cp07

0xc7e1,	// (0x0001b4ed) list_spcha_pane

0xc7e9,	// (0x0001b4f5) list_single_spcha_pane_ParamLimits

0xc7e9,	// (0x0001b4f5) list_single_spcha_pane

0x945d,	// (0x00018169) list_highlight_pane_cp06

0xc7fa,	// (0x0001b506) list_single_spcha_pane_t1

0xb839,	// (0x0001a545) popup_call2_audio_out_window_g4_ParamLimits

0xb839,	// (0x0001a545) popup_call2_audio_out_window_g4

0x945d,	// (0x00018169) main_imed2_pane

0xbe64,	// (0x0001ab70) popup_imed_adjust2_window

0x3700,	// (0x0001240c) popup_imed_trans_window_ParamLimits

0x3700,	// (0x0001240c) popup_imed_trans_window

0xc195,	// (0x0001aea1) popup_blid_sat_info2_window_t1

0xc1a3,	// (0x0001aeaf) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0001e3c1) popup_blid_sat_info2_window_t

0x4f84,	// (0x00013c90) aid_size_cell_colour_35

0x4fa4,	// (0x00013cb0) aid_size_cell_colour_112

0x4fc4,	// (0x00013cd0) aid_size_cell_effect

0xbe3c,	// (0x0001ab48) bg_tb_trans_pane_cp02

0xa38e,	// (0x0001909a) heading_imed_pane

0x4fe4,	// (0x00013cf0) listscroll_imed_pane

0xc808,	// (0x0001b514) heading_imed_pane_g1

0xc810,	// (0x0001b51c) heading_imed_pane_t1

0xc81e,	// (0x0001b52a) grid_imed_colour_35_pane_ParamLimits

0xc81e,	// (0x0001b52a) grid_imed_colour_35_pane

0x4ff0,	// (0x00013cfc) grid_imed_effect_pane

0xc836,	// (0x0001b542) list_imed_aspect_pane

0x5006,	// (0x00013d12) scroll_pane_cp027_ParamLimits

0x5006,	// (0x00013d12) scroll_pane_cp027

0x5017,	// (0x00013d23) cell_imed_effect_pane_ParamLimits

0x5017,	// (0x00013d23) cell_imed_effect_pane

0xc83e,	// (0x0001b54a) cell_imed_colour_pane_ParamLimits

0xc83e,	// (0x0001b54a) cell_imed_colour_pane

0xc880,	// (0x0001b58c) cell_imed_colour_pane_g1_ParamLimits

0xc880,	// (0x0001b58c) cell_imed_colour_pane_g1

0xc891,	// (0x0001b59d) hgihlgiht_grid_pane_cp016_ParamLimits

0xc891,	// (0x0001b59d) hgihlgiht_grid_pane_cp016

0x503e,	// (0x00013d4a) cell_imed_effect_pane_g1

0x5046,	// (0x00013d52) grid_highlight_pane_cp017

0xc8a2,	// (0x0001b5ae) list_imed_single_pane_ParamLimits

0xc8a2,	// (0x0001b5ae) list_imed_single_pane

0x945d,	// (0x00018169) list_highlight_pane_cp07

0xc8b7,	// (0x0001b5c3) list_imed_aspect_pane_comp1_t1

0xbe3c,	// (0x0001ab48) bg_tb_trans_pane_cp05

0xc8d9,	// (0x0001b5e5) popup_imed_adjust2_window_g1

0xc900,	// (0x0001b60c) popup_imed_adjust2_window_t1

0xc918,	// (0x0001b624) slider_imed_adjust_pane

0xc92c,	// (0x0001b638) slider_imed_adjust_pane_g1

0xc93c,	// (0x0001b648) slider_imed_adjust_pane_g2

0xc94c,	// (0x0001b658) slider_imed_adjust_pane_g3

0xc95d,	// (0x0001b669) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0001e505) slider_imed_adjust_pane_g

0x504f,	// (0x00013d5b) aid_size_cell_clipart2

0x505b,	// (0x00013d67) grid_imed_clipart_pane

0xc96e,	// (0x0001b67a) scroll_pane_cp031

0x5065,	// (0x00013d71) cell_imed_clipart_pane_ParamLimits

0x5065,	// (0x00013d71) cell_imed_clipart_pane

0x5087,	// (0x00013d93) cell_imed_clipart_pane_g1

0x945d,	// (0x00018169) grid_highlight_pane_cp014

0x4d44,	// (0x00013a50) main_clock2_pane_g1_ParamLimits

0x4d44,	// (0x00013a50) main_clock2_pane_g1

0x4e86,	// (0x00013b92) aid_call2_pane_cp10

0x4e98,	// (0x00013ba4) aid_call_pane_cp10

0xa7d2,	// (0x000194de) popup_clock_analogue_window_cp10_g1

0xa7d2,	// (0x000194de) popup_clock_analogue_window_cp10_g2

0x4eaa,	// (0x00013bb6) popup_clock_analogue_window_cp10_g3

0x4eaa,	// (0x00013bb6) popup_clock_analogue_window_cp10_g4

0xa7d2,	// (0x000194de) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0001e4f3) popup_clock_analogue_window_cp10_g

0x4ebc,	// (0x00013bc8) popup_clock_analogue_window_cp10_t1

0x4eed,	// (0x00013bf9) clock_digital_number_pane_cp10_ParamLimits

0x4eed,	// (0x00013bf9) clock_digital_number_pane_cp10

0x4f05,	// (0x00013c11) clock_digital_number_pane_cp11_ParamLimits

0x4f05,	// (0x00013c11) clock_digital_number_pane_cp11

0x4f1d,	// (0x00013c29) clock_digital_number_pane_cp12_ParamLimits

0x4f1d,	// (0x00013c29) clock_digital_number_pane_cp12

0x4f35,	// (0x00013c41) clock_digital_number_pane_cp13_ParamLimits

0x4f35,	// (0x00013c41) clock_digital_number_pane_cp13

0x4f4d,	// (0x00013c59) clock_digital_separator_pane_cp10_ParamLimits

0x4f4d,	// (0x00013c59) clock_digital_separator_pane_cp10

0x4f65,	// (0x00013c71) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f65,	// (0x00013c71) popup_clock_digital_window_cp02_t1

0x9b41,	// (0x0001884d) clock_digital_number_pane_cp10_g1

0x9b41,	// (0x0001884d) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0001e50e) clock_digital_number_pane_cp10_g

0x9b41,	// (0x0001884d) clock_digital_separator_pane_cp10_g1

0x9b41,	// (0x0001884d) clock_digital_separator_pane_g2_cp10

0xa95f,	// (0x0001966b) navi_pane_vded_g4

0xa968,	// (0x00019674) navi_pane_vded_g5

0xa971,	// (0x0001967d) navi_pane_vded_t1

0x945d,	// (0x00018169) main_vded_pane

0x5090,	// (0x00013d9c) main_vded_pane_g1

0x509a,	// (0x00013da6) main_vded_pane_g2

0x50a4,	// (0x00013db0) main_vded_pane_g3

0x0002,

0xf807,	// (0x0001e513) main_vded_pane_g

0x50ae,	// (0x00013dba) main_vded_pane_t1

0x50bc,	// (0x00013dc8) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0001e51a) main_vded_pane_t

0x50ca,	// (0x00013dd6) vded_slider_pane

0x50d2,	// (0x00013dde) vded_video_pane

0xc976,	// (0x0001b682) vded_video_pane_g1

0x50da,	// (0x00013de6) vded_video_pane_g2

0xc357,	// (0x0001b063) vded_video_pane_g3

0x0002,

0xf813,	// (0x0001e51f) vded_video_pane_g

0xc980,	// (0x0001b68c) vded_slider_pane_g1

0xc066,	// (0x0001ad72) vded_slider_pane_g2

0xc989,	// (0x0001b695) vded_slider_pane_g3

0xc992,	// (0x0001b69e) vded_slider_pane_g4

0xc99b,	// (0x0001b6a7) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0001e526) vded_slider_pane_g

0x4ab4,	// (0x000137c0) mup3_rocker_pane_ParamLimits

0x4ab4,	// (0x000137c0) mup3_rocker_pane

0x50e3,	// (0x00013def) mup3_control_keys_pane_g1

0x50eb,	// (0x00013df7) mup3_control_keys_pane_g2

0x50f3,	// (0x00013dff) mup3_control_keys_pane_g3

0x50fb,	// (0x00013e07) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0001e531) mup3_control_keys_pane_g

0x0616,	// (0x0000f322) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0616,	// (0x0000f322) popup_toolbar2_fixed_window_cp01

0x4ae8,	// (0x000137f4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4ae8,	// (0x000137f4) popup_toolbar2_fixed_window_cp02

0xb178,	// (0x00019e84) popup_call2_audio_second_window_t4_ParamLimits

0xb178,	// (0x00019e84) popup_call2_audio_second_window_t4

0xb6a6,	// (0x0001a3b2) popup_call2_audio_first_window_t6_ParamLimits

0xb6a6,	// (0x0001a3b2) popup_call2_audio_first_window_t6

0xb93c,	// (0x0001a648) popup_call2_audio_out_window_t6_ParamLimits

0xb93c,	// (0x0001a648) popup_call2_audio_out_window_t6

0x945d,	// (0x00018169) main_vitu_pane

0x510b,	// (0x00013e17) aid_size_cell_itu_ParamLimits

0x510b,	// (0x00013e17) aid_size_cell_itu

0x94cd,	// (0x000181d9) bg_popup_window_pane_cp08_ParamLimits

0x94cd,	// (0x000181d9) bg_popup_window_pane_cp08

0x5121,	// (0x00013e2d) field_vitu_entry_pane_ParamLimits

0x5121,	// (0x00013e2d) field_vitu_entry_pane

0x5139,	// (0x00013e45) grid_vitu_function_pane_ParamLimits

0x5139,	// (0x00013e45) grid_vitu_function_pane

0x5154,	// (0x00013e60) grid_vitu_itu_pane_ParamLimits

0x5154,	// (0x00013e60) grid_vitu_itu_pane

0x5172,	// (0x00013e7e) cell_vitu_itu_pane_ParamLimits

0x5172,	// (0x00013e7e) cell_vitu_itu_pane

0x5194,	// (0x00013ea0) cell_vitu_function_pane_ParamLimits

0x5194,	// (0x00013ea0) cell_vitu_function_pane

0x94cd,	// (0x000181d9) bg_popup_sub_pane_cp08_ParamLimits

0x94cd,	// (0x000181d9) bg_popup_sub_pane_cp08

0x51ad,	// (0x00013eb9) field_vitu_entry_pane_t1_ParamLimits

0x51ad,	// (0x00013eb9) field_vitu_entry_pane_t1

0xc9bc,	// (0x0001b6c8) field_vitu_entry_pane_t2_ParamLimits

0xc9bc,	// (0x0001b6c8) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0001e53f) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0001e53f) field_vitu_entry_pane_t

0xc9d9,	// (0x0001b6e5) bg_button_pane_cp05_ParamLimits

0xc9d9,	// (0x0001b6e5) bg_button_pane_cp05

0x51cc,	// (0x00013ed8) cell_vitu_itu_pane_g1

0x51e4,	// (0x00013ef0) cell_vitu_itu_pane_t1_ParamLimits

0x51e4,	// (0x00013ef0) cell_vitu_itu_pane_t1

0x51f6,	// (0x00013f02) cell_vitu_itu_pane_t2_ParamLimits

0x51f6,	// (0x00013f02) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0001e544) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0001e544) cell_vitu_itu_pane_t

0xc9e7,	// (0x0001b6f3) bg_button_pane_cp07

0x522b,	// (0x00013f37) cell_vitu_function_pane_g1

0x9bdc,	// (0x000188e8) main_calc_pane_g1

0x043d,	// (0x0000f149) aid_visual_content_pane

0x945d,	// (0x00018169) main_vradio_pane

0x5234,	// (0x00013f40) main_vradio_pane_g1_ParamLimits

0x5234,	// (0x00013f40) main_vradio_pane_g1

0xc9f1,	// (0x0001b6fd) main_vradio_pane_g2_ParamLimits

0xc9f1,	// (0x0001b6fd) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0001e54b) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0001e54b) main_vradio_pane_g

0x524d,	// (0x00013f59) main_vradio_pane_t1_ParamLimits

0x524d,	// (0x00013f59) main_vradio_pane_t1

0x5262,	// (0x00013f6e) main_vradio_pane_t2_ParamLimits

0x5262,	// (0x00013f6e) main_vradio_pane_t2

0xc9fe,	// (0x0001b70a) main_vradio_pane_t3_ParamLimits

0xc9fe,	// (0x0001b70a) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0001e550) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0001e550) main_vradio_pane_t

0x5277,	// (0x00013f83) vradio_rocker_control_pane_ParamLimits

0x5277,	// (0x00013f83) vradio_rocker_control_pane

0x5289,	// (0x00013f95) vradio_station_info_pane_ParamLimits

0x5289,	// (0x00013f95) vradio_station_info_pane

0xca12,	// (0x0001b71e) vradio_frequency_info_pane_ParamLimits

0xca12,	// (0x0001b71e) vradio_frequency_info_pane

0xc357,	// (0x0001b063) vradio_station_info_pane_g1

0xca21,	// (0x0001b72d) vradio_station_info_pane_t1_ParamLimits

0xca21,	// (0x0001b72d) vradio_station_info_pane_t1

0xca43,	// (0x0001b74f) vradio_station_info_pane_t2_ParamLimits

0xca43,	// (0x0001b74f) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0001e557) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0001e557) vradio_station_info_pane_t

0xca55,	// (0x0001b761) vradio_tuning_pane

0xca5d,	// (0x0001b769) vradio_rocker_control_pane_g1

0xca65,	// (0x0001b771) vradio_rocker_control_pane_g2

0xca6d,	// (0x0001b779) vradio_rocker_control_pane_g3

0xca75,	// (0x0001b781) vradio_rocker_control_pane_g4

0xca7d,	// (0x0001b789) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0001e55c) vradio_rocker_control_pane_g

0x529b,	// (0x00013fa7) vradio_frequency_info_pane_g1

0xca85,	// (0x0001b791) vradio_frequency_info_pane_t1_ParamLimits

0xca85,	// (0x0001b791) vradio_frequency_info_pane_t1

0x52a5,	// (0x00013fb1) vradio_tuning_pane_g1

0x52b0,	// (0x00013fbc) vradio_tuning_pane_t1

0x948b,	// (0x00018197) area_side_right_pane_ParamLimits

0x948b,	// (0x00018197) area_side_right_pane

0xbdf7,	// (0x0001ab03) status_small_pane_g1

0xbdff,	// (0x0001ab0b) status_small_pane_g2

0xbe08,	// (0x0001ab14) status_small_pane_g3

0xbe11,	// (0x0001ab1d) status_small_pane_g4

0x0003,

0xf60b,	// (0x0001e317) status_small_pane_g

0xbe1a,	// (0x0001ab26) status_small_pane_t1

0x945d,	// (0x00018169) main_video3_pane

0xca99,	// (0x0001b7a5) cams_zoom_vslider_pane

0xcaa1,	// (0x0001b7ad) image3_wide_pane_ParamLimits

0xcaa1,	// (0x0001b7ad) image3_wide_pane

0xcabb,	// (0x0001b7c7) image3_wide_small_pane

0xcac7,	// (0x0001b7d3) main_video3_pane_g1_ParamLimits

0xcac7,	// (0x0001b7d3) main_video3_pane_g1

0xcae3,	// (0x0001b7ef) main_video3_pane_g2_ParamLimits

0xcae3,	// (0x0001b7ef) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0001e567) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0001e567) main_video3_pane_g

0xcaff,	// (0x0001b80b) main_video3_pane_t1_ParamLimits

0xcaff,	// (0x0001b80b) main_video3_pane_t1

0xcb2a,	// (0x0001b836) main_video3_pane_t2_ParamLimits

0xcb2a,	// (0x0001b836) main_video3_pane_t2

0xcb55,	// (0x0001b861) main_video3_pane_t3_ParamLimits

0xcb55,	// (0x0001b861) main_video3_pane_t3

0x0002,

0xf860,	// (0x0001e56c) main_video3_pane_t_ParamLimits

0xf860,	// (0x0001e56c) main_video3_pane_t

0xcb82,	// (0x0001b88e) cams_zoom_vslider_pane_g1

0xcb8b,	// (0x0001b897) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0001e573) cams_zoom_vslider_pane_g

0xcb93,	// (0x0001b89f) small_slider_vertical_pane

0xc357,	// (0x0001b063) small_slider_vertical_pane_g1

0xc357,	// (0x0001b063) small_slider_vertical_pane_g2

0xcb9b,	// (0x0001b8a7) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0001e578) small_slider_vertical_pane_g

0x945d,	// (0x00018169) main_hwr_training_pane

0xcba4,	// (0x0001b8b0) hwr_training_instruct_pane_ParamLimits

0xcba4,	// (0x0001b8b0) hwr_training_instruct_pane

0x52bf,	// (0x00013fcb) hwr_training_navi_pane_ParamLimits

0x52bf,	// (0x00013fcb) hwr_training_navi_pane

0x52de,	// (0x00013fea) hwr_training_write_pane_ParamLimits

0x52de,	// (0x00013fea) hwr_training_write_pane

0x945d,	// (0x00018169) bg_frame_shadow_pane

0xcbdb,	// (0x0001b8e7) hwr_training_write_pane_g1

0xcbe3,	// (0x0001b8ef) hwr_training_write_pane_g2

0xcbeb,	// (0x0001b8f7) hwr_training_write_pane_g3

0xcbf3,	// (0x0001b8ff) hwr_training_write_pane_g4

0xcbfb,	// (0x0001b907) hwr_training_write_pane_g5

0xcc03,	// (0x0001b90f) hwr_training_write_pane_g6

0xcc0b,	// (0x0001b917) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0001e57f) hwr_training_write_pane_g

0xcc13,	// (0x0001b91f) hwr_training_navi_pane_g1_ParamLimits

0xcc13,	// (0x0001b91f) hwr_training_navi_pane_g1

0xcc25,	// (0x0001b931) hwr_training_navi_pane_g2_ParamLimits

0xcc25,	// (0x0001b931) hwr_training_navi_pane_g2

0xcc37,	// (0x0001b943) hwr_training_navi_pane_g3_ParamLimits

0xcc37,	// (0x0001b943) hwr_training_navi_pane_g3

0xcc47,	// (0x0001b953) hwr_training_navi_pane_g4_ParamLimits

0xcc47,	// (0x0001b953) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0001e58e) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0001e58e) hwr_training_navi_pane_g

0xcc54,	// (0x0001b960) hwr_training_navi_pane_t1

0x5328,	// (0x00014034) list_single_hwr_training_instruct_pane_ParamLimits

0x5328,	// (0x00014034) list_single_hwr_training_instruct_pane

0xcc62,	// (0x0001b96e) list_single_hwr_training_instruct_pane_t1

0xc297,	// (0x0001afa3) bg_frame_shadow_pane_g1

0xcc71,	// (0x0001b97d) bg_frame_shadow_pane_g2

0xcc79,	// (0x0001b985) bg_frame_shadow_pane_g3

0xcc81,	// (0x0001b98d) bg_frame_shadow_pane_g4

0xcc89,	// (0x0001b995) bg_frame_shadow_pane_g5

0xcc91,	// (0x0001b99d) bg_frame_shadow_pane_g6

0xcc99,	// (0x0001b9a5) bg_frame_shadow_pane_g7

0x9d35,	// (0x00018a41) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0001e599) bg_frame_shadow_pane_g

0x945d,	// (0x00018169) main_video_tele_dialer_pane

0x533e,	// (0x0001404a) aid_size_cell_video_keypad_ParamLimits

0x533e,	// (0x0001404a) aid_size_cell_video_keypad

0x5358,	// (0x00014064) grid_video_dialer_keypad_pane_ParamLimits

0x5358,	// (0x00014064) grid_video_dialer_keypad_pane

0x53a6,	// (0x000140b2) video_down_pane_cp_ParamLimits

0x53a6,	// (0x000140b2) video_down_pane_cp

0x53d8,	// (0x000140e4) cell_video_dialer_keypad_pane_ParamLimits

0x53d8,	// (0x000140e4) cell_video_dialer_keypad_pane

0xcca1,	// (0x0001b9ad) bg_button_pane_cp08_ParamLimits

0xcca1,	// (0x0001b9ad) bg_button_pane_cp08

0x53fa,	// (0x00014106) cell_video_dialer_keypad_pane_g1_ParamLimits

0x53fa,	// (0x00014106) cell_video_dialer_keypad_pane_g1

0x4a9e,	// (0x000137aa) mup3_rocker2_pane_ParamLimits

0x4a9e,	// (0x000137aa) mup3_rocker2_pane

0xc357,	// (0x0001b063) mup3_rocker2_pane_g1

0x35ef,	// (0x000122fb) main_dialer2_pane

0x945d,	// (0x00018169) main_mp4_pane

0xccb5,	// (0x0001b9c1) main_mp4_pane_g1_ParamLimits

0xccb5,	// (0x0001b9c1) main_mp4_pane_g1

0xccb5,	// (0x0001b9c1) main_mp4_pane_g2_ParamLimits

0xccb5,	// (0x0001b9c1) main_mp4_pane_g2

0x5434,	// (0x00014140) main_mp4_pane_g3_ParamLimits

0x5434,	// (0x00014140) main_mp4_pane_g3

0xccc3,	// (0x0001b9cf) main_mp4_pane_g4_ParamLimits

0xccc3,	// (0x0001b9cf) main_mp4_pane_g4

0xcceb,	// (0x0001b9f7) main_mp4_pane_g5_ParamLimits

0xcceb,	// (0x0001b9f7) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0001e5b9) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0001e5b9) main_mp4_pane_g

0xcd3b,	// (0x0001ba47) main_mp4_pane_t1_ParamLimits

0xcd3b,	// (0x0001ba47) main_mp4_pane_t1

0xcd97,	// (0x0001baa3) main_mp4_pane_t2_ParamLimits

0xcd97,	// (0x0001baa3) main_mp4_pane_t2

0xcde9,	// (0x0001baf5) main_mp4_pane_t3_ParamLimits

0xcde9,	// (0x0001baf5) main_mp4_pane_t3

0xce09,	// (0x0001bb15) main_mp4_pane_t4_ParamLimits

0xce09,	// (0x0001bb15) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0001e5c6) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0001e5c6) main_mp4_pane_t

0xce4d,	// (0x0001bb59) mp4_progress_pane_ParamLimits

0xce4d,	// (0x0001bb59) mp4_progress_pane

0xce97,	// (0x0001bba3) mp4_rocker_pane_ParamLimits

0xce97,	// (0x0001bba3) mp4_rocker_pane

0xcebf,	// (0x0001bbcb) mp4_progress_pane_t1

0xced8,	// (0x0001bbe4) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0001e5cf) mp4_progress_pane_t

0xcef1,	// (0x0001bbfd) mup_progress_pane_cp04

0xc357,	// (0x0001b063) mp4_rocker_pane_g1

0x5470,	// (0x0001417c) aid_cell_size_keypad2_ParamLimits

0x5470,	// (0x0001417c) aid_cell_size_keypad2

0x5486,	// (0x00014192) dialer2_ne_pane_ParamLimits

0x5486,	// (0x00014192) dialer2_ne_pane

0x54a0,	// (0x000141ac) grid_dialer2_keypad_pane_ParamLimits

0x54a0,	// (0x000141ac) grid_dialer2_keypad_pane

0xc13c,	// (0x0001ae48) bg_popup_call_pane_cp07_ParamLimits

0xc13c,	// (0x0001ae48) bg_popup_call_pane_cp07

0x54bc,	// (0x000141c8) dialer2_ne_pane_t1_ParamLimits

0x54bc,	// (0x000141c8) dialer2_ne_pane_t1

0x54f8,	// (0x00014204) cell_dialer2_keypad_pane_ParamLimits

0x54f8,	// (0x00014204) cell_dialer2_keypad_pane

0xcf0f,	// (0x0001bc1b) bg_button_pane_pane_cp04_ParamLimits

0xcf0f,	// (0x0001bc1b) bg_button_pane_pane_cp04

0x551a,	// (0x00014226) cell_dialer2_keypad_pane_g1_ParamLimits

0x551a,	// (0x00014226) cell_dialer2_keypad_pane_g1

0x1516,	// (0x00010222) aid_placing_vt_set_content_ParamLimits

0x1516,	// (0x00010222) aid_placing_vt_set_content

0x153e,	// (0x0001024a) aid_placing_vt_set_title_ParamLimits

0x153e,	// (0x0001024a) aid_placing_vt_set_title

0x945d,	// (0x00018169) main_image3_pane

0x55e0,	// (0x000142ec) area_side_right_pane_cp01_ParamLimits

0x55e0,	// (0x000142ec) area_side_right_pane_cp01

0xccb5,	// (0x0001b9c1) main_image3_pane_g1_ParamLimits

0xccb5,	// (0x0001b9c1) main_image3_pane_g1

0x55f7,	// (0x00014303) main_image3_pane_g2_ParamLimits

0x55f7,	// (0x00014303) main_image3_pane_g2

0x561f,	// (0x0001432b) main_image3_pane_g3_ParamLimits

0x561f,	// (0x0001432b) main_image3_pane_g3

0x5649,	// (0x00014355) main_image3_pane_g4_ParamLimits

0x5649,	// (0x00014355) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0001e5de) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0001e5de) main_image3_pane_g

0x5673,	// (0x0001437f) main_image3_pane_t1_ParamLimits

0x5673,	// (0x0001437f) main_image3_pane_t1

0x56cb,	// (0x000143d7) main_image3_pane_t2_ParamLimits

0x56cb,	// (0x000143d7) main_image3_pane_t2

0x571d,	// (0x00014429) main_image3_pane_t3_ParamLimits

0x571d,	// (0x00014429) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0001e5e7) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0001e5e7) main_image3_pane_t

0x94cd,	// (0x000181d9) grid_sctrl_middle_pane_cp01_ParamLimits

0x94cd,	// (0x000181d9) grid_sctrl_middle_pane_cp01

0x57a5,	// (0x000144b1) cell_sctrl_middle_pane_cp01_ParamLimits

0x57a5,	// (0x000144b1) cell_sctrl_middle_pane_cp01

0x57c2,	// (0x000144ce) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x57c2,	// (0x000144ce) cell_sctrl_middle_pane_cp01_g1

0x945d,	// (0x00018169) main_call4_pane

0x57d8,	// (0x000144e4) aid_size_button_call4_ParamLimits

0x57d8,	// (0x000144e4) aid_size_button_call4

0x5809,	// (0x00014515) call4_windows_pane_ParamLimits

0x5809,	// (0x00014515) call4_windows_pane

0x5829,	// (0x00014535) grid_call4_button_pane_ParamLimits

0x5829,	// (0x00014535) grid_call4_button_pane

0xcf4d,	// (0x0001bc59) call4_windows_conf_pane

0xcf64,	// (0x0001bc70) popup_call4_audio_first_window_ParamLimits

0xcf64,	// (0x0001bc70) popup_call4_audio_first_window

0xcfb0,	// (0x0001bcbc) popup_call4_audio_second_window_ParamLimits

0xcfb0,	// (0x0001bcbc) popup_call4_audio_second_window

0xcfc4,	// (0x0001bcd0) popup_call4_audio_wait_window_ParamLimits

0xcfc4,	// (0x0001bcd0) popup_call4_audio_wait_window

0x5856,	// (0x00014562) cell_call4_button_pane_ParamLimits

0x5856,	// (0x00014562) cell_call4_button_pane

0x587f,	// (0x0001458b) bg_button_pane_cp09_ParamLimits

0x587f,	// (0x0001458b) bg_button_pane_cp09

0x588b,	// (0x00014597) cell_call4_button_pane_g1_ParamLimits

0x588b,	// (0x00014597) cell_call4_button_pane_g1

0x58b1,	// (0x000145bd) cell_call4_button_pane_t1_ParamLimits

0x58b1,	// (0x000145bd) cell_call4_button_pane_t1

0xd00c,	// (0x0001bd18) popup_call4_audio_conf_window_ParamLimits

0xd00c,	// (0x0001bd18) popup_call4_audio_conf_window

0x4afe,	// (0x0001380a) mup3_progress_pane_t1_ParamLimits

0x4b1d,	// (0x00013829) mup3_progress_pane_t2_ParamLimits

0xc694,	// (0x0001b3a0) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0001e4bb) mup3_progress_pane_t_ParamLimits

0xc6b1,	// (0x0001b3bd) mup_progress_pane_cp03_ParamLimits

0x5103,	// (0x00013e0f) mup3_control_keys_pane_g4_copy1

0xce7b,	// (0x0001bb87) mp4_rocker2_pane_ParamLimits

0xce7b,	// (0x0001bb87) mp4_rocker2_pane

0xd020,	// (0x0001bd2c) mp4_rocker2_pane_g1

0xd028,	// (0x0001bd34) mp4_rocker2_pane_g2

0xd030,	// (0x0001bd3c) mp4_rocker2_pane_g3

0xd038,	// (0x0001bd44) mp4_rocker2_pane_g4

0xd040,	// (0x0001bd4c) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0001e5f0) mp4_rocker2_pane_g

0x945d,	// (0x00018169) main_camera4_pane

0x945d,	// (0x00018169) main_video4_pane

0x5374,	// (0x00014080) main_video_tele_dialer_pane_t1_ParamLimits

0x5374,	// (0x00014080) main_video_tele_dialer_pane_t1

0x538d,	// (0x00014099) main_video_tele_dialer_pane_t2_ParamLimits

0x538d,	// (0x00014099) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0001e5aa) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0001e5aa) main_video_tele_dialer_pane_t

0x58f3,	// (0x000145ff) cam4_autofocus_pane_ParamLimits

0x58f3,	// (0x000145ff) cam4_autofocus_pane

0x5909,	// (0x00014615) cam4_image_uncrop_pane_ParamLimits

0x5909,	// (0x00014615) cam4_image_uncrop_pane

0x5923,	// (0x0001462f) cam4_indicators_pane_ParamLimits

0x5923,	// (0x0001462f) cam4_indicators_pane

0x594e,	// (0x0001465a) main_camera4_pane_g1_ParamLimits

0x594e,	// (0x0001465a) main_camera4_pane_g1

0x5960,	// (0x0001466c) main_camera4_pane_g2_ParamLimits

0x5960,	// (0x0001466c) main_camera4_pane_g2

0x5973,	// (0x0001467f) main_camera4_pane_g3_ParamLimits

0x5973,	// (0x0001467f) main_camera4_pane_g3

0x5986,	// (0x00014692) main_camera4_pane_g4_ParamLimits

0x5986,	// (0x00014692) main_camera4_pane_g4

0x5999,	// (0x000146a5) main_camera4_pane_g5_ParamLimits

0x5999,	// (0x000146a5) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0001e5fb) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0001e5fb) main_camera4_pane_g

0x59bd,	// (0x000146c9) main_camera4_pane_t1_ParamLimits

0x59bd,	// (0x000146c9) main_camera4_pane_t1

0xc5a5,	// (0x0001b2b1) bg_tb_trans_pane_cp06

0xd06c,	// (0x0001bd78) cam4_indicators_pane_g1

0xd07d,	// (0x0001bd89) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0001e616) cam4_indicators_pane_g

0xd095,	// (0x0001bda1) cam4_indicators_pane_t1

0x5a21,	// (0x0001472d) main_video4_pane_g1_ParamLimits

0x5a21,	// (0x0001472d) main_video4_pane_g1

0x5a30,	// (0x0001473c) main_video4_pane_g2_ParamLimits

0x5a30,	// (0x0001473c) main_video4_pane_g2

0x5a3f,	// (0x0001474b) main_video4_pane_g3_ParamLimits

0x5a3f,	// (0x0001474b) main_video4_pane_g3

0x5a4e,	// (0x0001475a) main_video4_pane_g4_ParamLimits

0x5a4e,	// (0x0001475a) main_video4_pane_g4

0x0004,

0xf911,	// (0x0001e61d) main_video4_pane_g_ParamLimits

0xf911,	// (0x0001e61d) main_video4_pane_g

0x5a6c,	// (0x00014778) vid4_indicators_pane_ParamLimits

0x5a6c,	// (0x00014778) vid4_indicators_pane

0x5a9a,	// (0x000147a6) video4_image_uncrop_cif_pane_ParamLimits

0x5a9a,	// (0x000147a6) video4_image_uncrop_cif_pane

0x5ab4,	// (0x000147c0) video4_image_uncrop_nhd_pane_ParamLimits

0x5ab4,	// (0x000147c0) video4_image_uncrop_nhd_pane

0x5909,	// (0x00014615) video4_image_uncrop_vga_pane_ParamLimits

0x5909,	// (0x00014615) video4_image_uncrop_vga_pane

0x94cd,	// (0x000181d9) bg_tb_trans_pane_cp07

0xd0bf,	// (0x0001bdcb) vid4_indicators_pane_g1

0xd0d3,	// (0x0001bddf) vid4_indicators_pane_g2

0xd0e7,	// (0x0001bdf3) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0001e628) vid4_indicators_pane_g

0xd114,	// (0x0001be20) vid4_indicators_pane_t1

0x5ac8,	// (0x000147d4) cam4_autofocus_pane_g1

0x5ad0,	// (0x000147dc) cam4_autofocus_pane_g2

0x5ad8,	// (0x000147e4) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0001e633) cam4_autofocus_pane_g

0x5ae0,	// (0x000147ec) cam4_autofocus_pane_g3_copy1

0x53bc,	// (0x000140c8) video_down_pane_cp_t1

0x53ca,	// (0x000140d6) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0001e5af) video_down_pane_cp_t

0x94cd,	// (0x000181d9) popup_vitu2_window_ParamLimits

0x94cd,	// (0x000181d9) popup_vitu2_window

0x5ae8,	// (0x000147f4) aid_size_cell2_itu2_ParamLimits

0x5ae8,	// (0x000147f4) aid_size_cell2_itu2

0x5b0e,	// (0x0001481a) aid_size_cell_itu2_ParamLimits

0x5b0e,	// (0x0001481a) aid_size_cell_itu2

0x5b6a,	// (0x00014876) bg_popup_window_pane_cp09_ParamLimits

0x5b6a,	// (0x00014876) bg_popup_window_pane_cp09

0x5b78,	// (0x00014884) field_vitu2_entry_pane_ParamLimits

0x5b78,	// (0x00014884) field_vitu2_entry_pane

0x5b9e,	// (0x000148aa) grid_vitu2_function_pane_ParamLimits

0x5b9e,	// (0x000148aa) grid_vitu2_function_pane

0x5bef,	// (0x000148fb) grid_vitu2_itu_pane_ParamLimits

0x5bef,	// (0x000148fb) grid_vitu2_itu_pane

0x5c85,	// (0x00014991) cell_vitu2_itu_pane_ParamLimits

0x5c85,	// (0x00014991) cell_vitu2_itu_pane

0x5cb1,	// (0x000149bd) cell_vitu2_function_pane_ParamLimits

0x5cb1,	// (0x000149bd) cell_vitu2_function_pane

0xd12b,	// (0x0001be37) bg_popup_call_pane_cp08_ParamLimits

0xd12b,	// (0x0001be37) bg_popup_call_pane_cp08

0xd142,	// (0x0001be4e) field_vitu2_entry_pane_g1

0xd14e,	// (0x0001be5a) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0001e63a) field_vitu2_entry_pane_g

0x5cf0,	// (0x000149fc) field_vitu2_entry_pane_t1_ParamLimits

0x5cf0,	// (0x000149fc) field_vitu2_entry_pane_t1

0xd168,	// (0x0001be74) field_vitu2_entry_pane_t2_ParamLimits

0xd168,	// (0x0001be74) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0001e641) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0001e641) field_vitu2_entry_pane_t

0x5d1f,	// (0x00014a2b) bg_button_pane_cp010_ParamLimits

0x5d1f,	// (0x00014a2b) bg_button_pane_cp010

0xd18d,	// (0x0001be99) cell_vitu2_itu_pane_g1

0x5d3b,	// (0x00014a47) cell_vitu2_itu_pane_t1_ParamLimits

0x5d3b,	// (0x00014a47) cell_vitu2_itu_pane_t1

0x5d99,	// (0x00014aa5) cell_vitu2_itu_pane_t2_ParamLimits

0x5d99,	// (0x00014aa5) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0001e64b) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0001e64b) cell_vitu2_itu_pane_t

0x94cd,	// (0x000181d9) bg_button_pane_cp011

0x5e85,	// (0x00014b91) cell_vitu2_function_pane_g1

0x945d,	// (0x00018169) main_myfav_hc_pane

0x576d,	// (0x00014479) popup_image3_note_pane_ParamLimits

0x576d,	// (0x00014479) popup_image3_note_pane

0x5789,	// (0x00014495) popup_image3_tool_bar_pane_ParamLimits

0x5789,	// (0x00014495) popup_image3_tool_bar_pane

0x5e27,	// (0x00014b33) cell_vitu2_itu_pane_t3_ParamLimits

0x5e27,	// (0x00014b33) cell_vitu2_itu_pane_t3

0x945d,	// (0x00018169) bg_popup_trans_pane

0xd19f,	// (0x0001beab) grid_image3_tool_bar_pane

0xd1a9,	// (0x0001beb5) bg_popup_trans_pane_g1

0xa118,	// (0x00018e24) bg_popup_trans_pane_g2

0xd1b1,	// (0x0001bebd) bg_popup_trans_pane_g3

0xd1b9,	// (0x0001bec5) bg_popup_trans_pane_g4

0xd1c1,	// (0x0001becd) bg_popup_trans_pane_g5

0xd1c9,	// (0x0001bed5) bg_popup_trans_pane_g6

0xd1d1,	// (0x0001bedd) bg_popup_trans_pane_g7

0xd1d9,	// (0x0001bee5) bg_popup_trans_pane_g8

0xa0f8,	// (0x00018e04) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0001e652) bg_popup_trans_pane_g

0xd217,	// (0x0001bf23) cell_image3_tool_bar_pane_ParamLimits

0xd217,	// (0x0001bf23) cell_image3_tool_bar_pane

0xc357,	// (0x0001b063) cell_image3_tool_bar_pane_g1

0x945d,	// (0x00018169) bg_popup_trans_pane_cp1

0xd22b,	// (0x0001bf37) popup_image3_note_pane_t1

0xd239,	// (0x0001bf45) popup_image3_note_pane_t2

0xd247,	// (0x0001bf53) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0001e665) popup_image3_note_pane_t

0xd255,	// (0x0001bf61) popup_image3_note_pane_t3_copy1

0x5e99,	// (0x00014ba5) bg_myfav_hc_instruction_pane_ParamLimits

0x5e99,	// (0x00014ba5) bg_myfav_hc_instruction_pane

0x5ead,	// (0x00014bb9) cell_myfav_contact_pane_ParamLimits

0x5ead,	// (0x00014bb9) cell_myfav_contact_pane

0x5ecb,	// (0x00014bd7) cell_myfav_contact_pane_cp1_ParamLimits

0x5ecb,	// (0x00014bd7) cell_myfav_contact_pane_cp1

0x5ee3,	// (0x00014bef) cell_myfav_contact_pane_cp2_ParamLimits

0x5ee3,	// (0x00014bef) cell_myfav_contact_pane_cp2

0x5efb,	// (0x00014c07) cell_myfav_contact_pane_cp3_ParamLimits

0x5efb,	// (0x00014c07) cell_myfav_contact_pane_cp3

0x5f12,	// (0x00014c1e) cell_myfav_contact_pane_cp4_ParamLimits

0x5f12,	// (0x00014c1e) cell_myfav_contact_pane_cp4

0x5f2a,	// (0x00014c36) cell_myfav_contact_pane_cp5_ParamLimits

0x5f2a,	// (0x00014c36) cell_myfav_contact_pane_cp5

0x5f3e,	// (0x00014c4a) cell_myfav_contact_pane_cp6_ParamLimits

0x5f3e,	// (0x00014c4a) cell_myfav_contact_pane_cp6

0x5f54,	// (0x00014c60) cell_myfav_contact_pane_cp7_ParamLimits

0x5f54,	// (0x00014c60) cell_myfav_contact_pane_cp7

0xd263,	// (0x0001bf6f) listscroll_gen_pane_cp05

0x5f6e,	// (0x00014c7a) main_myfav_hc_pane_g1_ParamLimits

0x5f6e,	// (0x00014c7a) main_myfav_hc_pane_g1

0x5f88,	// (0x00014c94) main_myfav_hc_pane_g2_ParamLimits

0x5f88,	// (0x00014c94) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0001e66c) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0001e66c) main_myfav_hc_pane_g

0x5fba,	// (0x00014cc6) main_myfav_hc_pane_t1_ParamLimits

0x5fba,	// (0x00014cc6) main_myfav_hc_pane_t1

0xd26c,	// (0x0001bf78) main_myfav_hc_pane_t2_ParamLimits

0xd26c,	// (0x0001bf78) main_myfav_hc_pane_t2

0xd27e,	// (0x0001bf8a) main_myfav_hc_pane_t3_ParamLimits

0xd27e,	// (0x0001bf8a) main_myfav_hc_pane_t3

0x5fd1,	// (0x00014cdd) main_myfav_hc_pane_t4_ParamLimits

0x5fd1,	// (0x00014cdd) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0001e673) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0001e673) main_myfav_hc_pane_t

0xc357,	// (0x0001b063) bg_myfav_hc_instruction_pane_g1

0xd290,	// (0x0001bf9c) cell_myfav_contact_pane_g1_ParamLimits

0xd290,	// (0x0001bf9c) cell_myfav_contact_pane_g1

0xd290,	// (0x0001bf9c) cell_myfav_contact_pane_g2_ParamLimits

0xd290,	// (0x0001bf9c) cell_myfav_contact_pane_g2

0xd29c,	// (0x0001bfa8) cell_myfav_contact_pane_g3_ParamLimits

0xd29c,	// (0x0001bfa8) cell_myfav_contact_pane_g3

0xc67e,	// (0x0001b38a) cell_myfav_contact_pane_g4_ParamLimits

0xc67e,	// (0x0001b38a) cell_myfav_contact_pane_g4

0xd2a9,	// (0x0001bfb5) cell_myfav_contact_pane_g5_ParamLimits

0xd2a9,	// (0x0001bfb5) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0001e67e) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0001e67e) cell_myfav_contact_pane_g

0x5fa2,	// (0x00014cae) main_myfav_hc_pane_g3_ParamLimits

0x5fa2,	// (0x00014cae) main_myfav_hc_pane_g3

0x0578,	// (0x0000f284) popup_adpt_find_window

0x5ff9,	// (0x00014d05) afind_page_pane_ParamLimits

0x5ff9,	// (0x00014d05) afind_page_pane

0x600e,	// (0x00014d1a) aid_size_cell_afind_ParamLimits

0x600e,	// (0x00014d1a) aid_size_cell_afind

0x602c,	// (0x00014d38) bg_popup_sub_pane_cp09_ParamLimits

0x602c,	// (0x00014d38) bg_popup_sub_pane_cp09

0x6039,	// (0x00014d45) find_pane_cp01_ParamLimits

0x6039,	// (0x00014d45) find_pane_cp01

0xd2b5,	// (0x0001bfc1) grid_afind_control_pane_ParamLimits

0xd2b5,	// (0x0001bfc1) grid_afind_control_pane

0x6046,	// (0x00014d52) grid_afind_pane_ParamLimits

0x6046,	// (0x00014d52) grid_afind_pane

0x6065,	// (0x00014d71) cell_afind_pane_ParamLimits

0x6065,	// (0x00014d71) cell_afind_pane

0xc357,	// (0x0001b063) afind_page_pane_g1

0x60cc,	// (0x00014dd8) afind_page_pane_g2

0x60d5,	// (0x00014de1) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0001e689) afind_page_pane_g

0x60de,	// (0x00014dea) afind_page_pane_t1

0xd2c9,	// (0x0001bfd5) cell_afind_grid_control_pane_ParamLimits

0xd2c9,	// (0x0001bfd5) cell_afind_grid_control_pane

0xcf0f,	// (0x0001bc1b) bg_button_pane_cp69_ParamLimits

0xcf0f,	// (0x0001bc1b) bg_button_pane_cp69

0x60fe,	// (0x00014e0a) cell_afind_pane_g1_ParamLimits

0x60fe,	// (0x00014e0a) cell_afind_pane_g1

0x610b,	// (0x00014e17) cell_afind_pane_t1_ParamLimits

0x610b,	// (0x00014e17) cell_afind_pane_t1

0x9f11,	// (0x00018c1d) bg_button_pane_cp72

0xd2d8,	// (0x0001bfe4) cell_afind_grid_control_pane_g1

0x30ae,	// (0x00011dba) aid_image_placing_area_ParamLimits

0x30ae,	// (0x00011dba) aid_image_placing_area

0xc9a4,	// (0x0001b6b0) field_vitu_entry_pane_g1_ParamLimits

0xc9a4,	// (0x0001b6b0) field_vitu_entry_pane_g1

0xc9b0,	// (0x0001b6bc) field_vitu_entry_pane_g2_ParamLimits

0xc9b0,	// (0x0001b6bc) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0001e53a) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0001e53a) field_vitu_entry_pane_g

0x51cc,	// (0x00013ed8) cell_vitu_itu_pane_g1_ParamLimits

0x520e,	// (0x00013f1a) cell_vitu_itu_pane_t3_ParamLimits

0x520e,	// (0x00013f1a) cell_vitu_itu_pane_t3

0xcebf,	// (0x0001bbcb) mp4_progress_pane_t1_ParamLimits

0xced8,	// (0x0001bbe4) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0001e5cf) mp4_progress_pane_t_ParamLimits

0xcef1,	// (0x0001bbfd) mup_progress_pane_cp04_ParamLimits

0x5fe5,	// (0x00014cf1) main_myfav_hc_pane_t5_ParamLimits

0x5fe5,	// (0x00014cf1) main_myfav_hc_pane_t5

0x9483,	// (0x0001818f) aid_zoom_text_primary

0x0578,	// (0x0000f284) popup_adpt_find_window_ParamLimits

0x94cd,	// (0x000181d9) main_cam_set_pane

0x593a,	// (0x00014646) cam4_zoom_pane_ParamLimits

0x593a,	// (0x00014646) cam4_zoom_pane

0x611d,	// (0x00014e29) main_cam_set_pane_g1_ParamLimits

0x611d,	// (0x00014e29) main_cam_set_pane_g1

0x612b,	// (0x00014e37) main_cam_set_pane_g2_ParamLimits

0x612b,	// (0x00014e37) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0001e690) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0001e690) main_cam_set_pane_g

0x614c,	// (0x00014e58) main_cam_set_pane_t1_ParamLimits

0x614c,	// (0x00014e58) main_cam_set_pane_t1

0x6167,	// (0x00014e73) main_cset_listscroll_pane_ParamLimits

0x6167,	// (0x00014e73) main_cset_listscroll_pane

0x6187,	// (0x00014e93) main_cset_slider_pane_ParamLimits

0x6187,	// (0x00014e93) main_cset_slider_pane

0xd2e9,	// (0x0001bff5) main_cset_list_pane_ParamLimits

0xd2e9,	// (0x0001bff5) main_cset_list_pane

0xd2f9,	// (0x0001c005) scroll_pane_cp028

0x61ad,	// (0x00014eb9) aid_area_touch_slider

0x61c9,	// (0x00014ed5) cset_slider_pane

0x61f3,	// (0x00014eff) main_cset_slider_pane_g1

0x6208,	// (0x00014f14) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0001e695) main_cset_slider_pane_g

0xd34a,	// (0x0001c056) main_cset_slider_pane_t1

0x62ac,	// (0x00014fb8) main_cset_slider_pane_t2

0x62c6,	// (0x00014fd2) main_cset_slider_pane_t3

0x62e0,	// (0x00014fec) main_cset_slider_pane_t4

0x62fa,	// (0x00015006) main_cset_slider_pane_t5

0x6314,	// (0x00015020) main_cset_slider_pane_t6

0x6329,	// (0x00015035) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0001e6ba) main_cset_slider_pane_t

0x642d,	// (0x00015139) cset_list_set_pane_ParamLimits

0x642d,	// (0x00015139) cset_list_set_pane

0x643f,	// (0x0001514b) aid_position_infowindow_above

0x6447,	// (0x00015153) aid_position_infowindow_below

0x644f,	// (0x0001515b) cset_list_set_pane_g1_ParamLimits

0x644f,	// (0x0001515b) cset_list_set_pane_g1

0x645b,	// (0x00015167) cset_list_set_pane_g3_ParamLimits

0x645b,	// (0x00015167) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0001e6d9) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0001e6d9) cset_list_set_pane_g

0x646a,	// (0x00015176) cset_list_set_pane_t1_ParamLimits

0x646a,	// (0x00015176) cset_list_set_pane_t1

0x94cd,	// (0x000181d9) list_highlight_pane_cp021_ParamLimits

0x94cd,	// (0x000181d9) list_highlight_pane_cp021

0xaae5,	// (0x000197f1) cset_slider_pane_g1

0xaaf7,	// (0x00019803) cset_slider_pane_g2

0xaaee,	// (0x000197fa) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0001e6de) cset_slider_pane_g

0xd3ea,	// (0x0001c0f6) aid_area_touch_cam4_zoom

0xd3f2,	// (0x0001c0fe) cam4_zoom_cont_pane

0xd3fa,	// (0x0001c106) cam4_zoom_pane_g1

0xd402,	// (0x0001c10e) cam4_zoom_pane_g2

0x647f,	// (0x0001518b) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0001e6e5) cam4_zoom_pane_g

0xcb9b,	// (0x0001b8a7) cam4_zoom_cont_pane_g1

0xd40a,	// (0x0001c116) cam4_zoom_cont_pane_g2

0xd413,	// (0x0001c11f) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0001e6ec) cam4_zoom_cont_pane_g

0x57f6,	// (0x00014502) call4_image_pane_ParamLimits

0x57f6,	// (0x00014502) call4_image_pane

0xcf4d,	// (0x0001bc59) call4_windows_conf_pane_ParamLimits

0xcf8e,	// (0x0001bc9a) popup_call4_audio_in_window_ParamLimits

0xcf8e,	// (0x0001bc9a) popup_call4_audio_in_window

0x945d,	// (0x00018169) bg_popup_call2_act_pane_cp02

0xd004,	// (0x0001bd10) call4_list_conf_pane

0xc357,	// (0x0001b063) call4_image_pane_g1

0xc357,	// (0x0001b063) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0001e3fb) call4_image_pane_g

0xd41c,	// (0x0001c128) list_single_graphic_popup_conf4_pane_ParamLimits

0xd41c,	// (0x0001c128) list_single_graphic_popup_conf4_pane

0x945d,	// (0x00018169) list_highlight_pane_cp022

0xd42f,	// (0x0001c13b) list_single_graphic_popup_conf4_pane_g1

0xa6cf,	// (0x000193db) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0001e6f3) list_single_graphic_popup_conf4_pane_g

0xd437,	// (0x0001c143) list_single_graphic_popup_conf4_pane_t1

0x1662,	// (0x0001036e) popup_vtel_slider_window_ParamLimits

0x1662,	// (0x0001036e) popup_vtel_slider_window

0xcefd,	// (0x0001bc09) dialer2_ne_pane_t2_ParamLimits

0xcefd,	// (0x0001bc09) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0001e5d4) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0001e5d4) dialer2_ne_pane_t

0xc13c,	// (0x0001ae48) bg_popup_sub_pane_cp010_ParamLimits

0xc13c,	// (0x0001ae48) bg_popup_sub_pane_cp010

0x6487,	// (0x00015193) popup_vtel_slider_window_g1_ParamLimits

0x6487,	// (0x00015193) popup_vtel_slider_window_g1

0x649a,	// (0x000151a6) popup_vtel_slider_window_g2_ParamLimits

0x649a,	// (0x000151a6) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0001e6f8) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0001e6f8) popup_vtel_slider_window_g

0x64f0,	// (0x000151fc) vtel_slider_pane_ParamLimits

0x64f0,	// (0x000151fc) vtel_slider_pane

0x6512,	// (0x0001521e) vtel_slider_pane_g1_ParamLimits

0x6512,	// (0x0001521e) vtel_slider_pane_g1

0x6526,	// (0x00015232) vtel_slider_pane_g2_ParamLimits

0x6526,	// (0x00015232) vtel_slider_pane_g2

0x653e,	// (0x0001524a) vtel_slider_pane_g3_ParamLimits

0x653e,	// (0x0001524a) vtel_slider_pane_g3

0x6512,	// (0x0001521e) vtel_slider_pane_g4_ParamLimits

0x6512,	// (0x0001521e) vtel_slider_pane_g4

0x6554,	// (0x00015260) vtel_slider_pane_g5_ParamLimits

0x6554,	// (0x00015260) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0001e701) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0001e701) vtel_slider_pane_g

0x94cd,	// (0x000181d9) main_gallery2_pane

0x5b3a,	// (0x00014846) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b3a,	// (0x00014846) aid_size_row_itut2_dropdow_list

0x5bc6,	// (0x000148d2) grid_vitu2_function_top_pane_ParamLimits

0x5bc6,	// (0x000148d2) grid_vitu2_function_top_pane

0x5c30,	// (0x0001493c) popup_vitu2_dropdown_list_window_ParamLimits

0x5c30,	// (0x0001493c) popup_vitu2_dropdown_list_window

0x5c59,	// (0x00014965) popup_vitu2_match_list_window

0x656a,	// (0x00015276) cell_vitu2_function_top_pane_ParamLimits

0x656a,	// (0x00015276) cell_vitu2_function_top_pane

0x6582,	// (0x0001528e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6582,	// (0x0001528e) cell_vitu2_function_top_pane_cp01

0x659e,	// (0x000152aa) cell_vitu2_function_top_wide_pane_ParamLimits

0x659e,	// (0x000152aa) cell_vitu2_function_top_wide_pane

0x94cd,	// (0x000181d9) bg_button_pane_cp012

0x65ba,	// (0x000152c6) cell_vitu2_function_top_pane_g1

0xd45b,	// (0x0001c167) bg_button_pane_cp013_ParamLimits

0xd45b,	// (0x0001c167) bg_button_pane_cp013

0x65ce,	// (0x000152da) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65ce,	// (0x000152da) cell_vitu2_function_top_wide_pane_g1

0x94cd,	// (0x000181d9) bg_popup_sub_pane_cp20

0x65e6,	// (0x000152f2) list_vitu2_match_list_pane

0xd1a9,	// (0x0001beb5) bg_popup_sub_pane_cp20_g1

0xd1b1,	// (0x0001bebd) bg_popup_sub_pane_cp20_g2

0xa118,	// (0x00018e24) bg_popup_sub_pane_cp20_g3

0xd1b9,	// (0x0001bec5) bg_popup_sub_pane_cp20_g4

0xa0f8,	// (0x00018e04) bg_popup_sub_pane_cp20_g5

0xd477,	// (0x0001c183) bg_popup_sub_pane_cp20_g6

0xd1c9,	// (0x0001bed5) bg_popup_sub_pane_cp20_g7

0xd1d1,	// (0x0001bedd) bg_popup_sub_pane_cp20_g8

0xd1d9,	// (0x0001bee5) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0001e70c) bg_popup_sub_pane_cp20_g

0xd47f,	// (0x0001c18b) list_vitu2_match_list_item_pane_ParamLimits

0xd47f,	// (0x0001c18b) list_vitu2_match_list_item_pane

0xd491,	// (0x0001c19d) list_vitu2_match_list_item_pane_t1

0x945d,	// (0x00018169) bg_popup_sub_pane_cp21

0xa588,	// (0x00019294) grid_vitu2_dropdown_list_pane

0x6654,	// (0x00015360) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6654,	// (0x00015360) cell_vitu2_dropdown_list_char_pane

0x6675,	// (0x00015381) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6675,	// (0x00015381) cell_vitu2_dropdown_list_ctrl_pane

0xd49f,	// (0x0001c1ab) cell_vitu2_dropdown_list_char_pane_g1

0xd4a8,	// (0x0001c1b4) cell_vitu2_dropdown_list_char_pane_g2

0xd4b1,	// (0x0001c1bd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0001e729) cell_vitu2_dropdown_list_char_pane_g

0x66a1,	// (0x000153ad) cell_vitu2_dropdown_list_char_pane_t1

0x66af,	// (0x000153bb) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x66af,	// (0x000153bb) cell_vitu2_dropdown_list_ctrl_pane_g1

0x66bc,	// (0x000153c8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x66bc,	// (0x000153c8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66c9,	// (0x000153d5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66c9,	// (0x000153d5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x66d6,	// (0x000153e2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x66d6,	// (0x000153e2) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc5a5,	// (0x0001b2b1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc5a5,	// (0x0001b2b1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0001e730) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0001e730) cell_vitu2_dropdown_list_ctrl_pane_g

0x66f2,	// (0x000153fe) aid_size_cell_gallery2_ParamLimits

0x66f2,	// (0x000153fe) aid_size_cell_gallery2

0x6710,	// (0x0001541c) grid_gallery2_pane_ParamLimits

0x6710,	// (0x0001541c) grid_gallery2_pane

0x672a,	// (0x00015436) scroll_pane_cp029_ParamLimits

0x672a,	// (0x00015436) scroll_pane_cp029

0x6736,	// (0x00015442) cell_gallery2_pane_ParamLimits

0x6736,	// (0x00015442) cell_gallery2_pane

0xd4ba,	// (0x0001c1c6) cell_gallery2_pane_g2

0x6792,	// (0x0001549e) cell_gallery2_pane_g3

0xd4c2,	// (0x0001c1ce) cell_gallery2_pane_g4

0xd4ca,	// (0x0001c1d6) cell_gallery2_pane_g5

0x9eb5,	// (0x00018bc1) grid_highlight_pane_cp10

0x5c59,	// (0x00014965) popup_vitu2_match_list_window_ParamLimits

0x5c6e,	// (0x0001497a) popup_vitu2_query_window_ParamLimits

0x5c6e,	// (0x0001497a) popup_vitu2_query_window

0x945d,	// (0x00018169) bg_vitu2_candi_button_pane

0xd49f,	// (0x0001c1ab) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4a8,	// (0x0001c1b4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4b1,	// (0x0001c1bd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x679a,	// (0x000154a6) bg_button_pane_cp015

0x67ae,	// (0x000154ba) bg_button_pane_cp016

0x67c1,	// (0x000154cd) bg_button_pane_cp017

0xbe3c,	// (0x0001ab48) bg_popup_sub_pane_cp22

0xd4d2,	// (0x0001c1de) popup_vitu2_query_window_g1

0x6806,	// (0x00015512) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0001e73b) popup_vitu2_query_window_g

0x6825,	// (0x00015531) popup_vitu2_query_window_t1_ParamLimits

0x6825,	// (0x00015531) popup_vitu2_query_window_t1

0x685a,	// (0x00015566) popup_vitu2_query_window_t2_ParamLimits

0x685a,	// (0x00015566) popup_vitu2_query_window_t2

0x686c,	// (0x00015578) popup_vitu2_query_window_t3_ParamLimits

0x686c,	// (0x00015578) popup_vitu2_query_window_t3

0x6894,	// (0x000155a0) popup_vitu2_query_window_t4_ParamLimits

0x6894,	// (0x000155a0) popup_vitu2_query_window_t4

0x68b5,	// (0x000155c1) popup_vitu2_query_window_t5_ParamLimits

0x68b5,	// (0x000155c1) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0001e742) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0001e742) popup_vitu2_query_window_t

0xd2e1,	// (0x0001bfed) main_cset_text_pane

0x61ad,	// (0x00014eb9) aid_area_touch_slider_ParamLimits

0x61c9,	// (0x00014ed5) cset_slider_pane_ParamLimits

0x61f3,	// (0x00014eff) main_cset_slider_pane_g1_ParamLimits

0x6208,	// (0x00014f14) main_cset_slider_pane_g2_ParamLimits

0xd302,	// (0x0001c00e) main_cset_slider_pane_g3_ParamLimits

0xd302,	// (0x0001c00e) main_cset_slider_pane_g3

0x621d,	// (0x00014f29) main_cset_slider_pane_g4_ParamLimits

0x621d,	// (0x00014f29) main_cset_slider_pane_g4

0x622c,	// (0x00014f38) main_cset_slider_pane_g5_ParamLimits

0x622c,	// (0x00014f38) main_cset_slider_pane_g5

0x6238,	// (0x00014f44) main_cset_slider_pane_g6_ParamLimits

0x6238,	// (0x00014f44) main_cset_slider_pane_g6

0xf989,	// (0x0001e695) main_cset_slider_pane_g_ParamLimits

0xd34a,	// (0x0001c056) main_cset_slider_pane_t1_ParamLimits

0x62ac,	// (0x00014fb8) main_cset_slider_pane_t2_ParamLimits

0x62c6,	// (0x00014fd2) main_cset_slider_pane_t3_ParamLimits

0x62e0,	// (0x00014fec) main_cset_slider_pane_t4_ParamLimits

0x62fa,	// (0x00015006) main_cset_slider_pane_t5_ParamLimits

0x6314,	// (0x00015020) main_cset_slider_pane_t6_ParamLimits

0x6329,	// (0x00015035) main_cset_slider_pane_t7_ParamLimits

0x6353,	// (0x0001505f) main_cset_slider_pane_t8_ParamLimits

0x6353,	// (0x0001505f) main_cset_slider_pane_t8

0x637b,	// (0x00015087) main_cset_slider_pane_t9_ParamLimits

0x637b,	// (0x00015087) main_cset_slider_pane_t9

0x63a3,	// (0x000150af) main_cset_slider_pane_t10_ParamLimits

0x63a3,	// (0x000150af) main_cset_slider_pane_t10

0x63cb,	// (0x000150d7) main_cset_slider_pane_t11_ParamLimits

0x63cb,	// (0x000150d7) main_cset_slider_pane_t11

0x63f3,	// (0x000150ff) main_cset_slider_pane_t12_ParamLimits

0x63f3,	// (0x000150ff) main_cset_slider_pane_t12

0x6410,	// (0x0001511c) main_cset_slider_pane_t13_ParamLimits

0x6410,	// (0x0001511c) main_cset_slider_pane_t13

0xf9ae,	// (0x0001e6ba) main_cset_slider_pane_t_ParamLimits

0x945d,	// (0x00018169) bg_popup_sub_pane_cp011

0xd4de,	// (0x0001c1ea) main_cset_text_pane_g1

0xd4e6,	// (0x0001c1f2) main_cset_text_pane_t1

0xd4f4,	// (0x0001c200) main_cset_text_pane_t2

0xd502,	// (0x0001c20e) main_cset_text_pane_t3

0xd510,	// (0x0001c21c) main_cset_text_pane_t4

0xd51e,	// (0x0001c22a) main_cset_text_pane_t5

0xd52c,	// (0x0001c238) main_cset_text_pane_t6

0xd53a,	// (0x0001c246) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0001e751) main_cset_text_pane_t

0x945d,	// (0x00018169) main_cam4_burst_pane

0x945d,	// (0x00018169) main_cam5_pane

0x60ec,	// (0x00014df8) bg_button_pane_cp019

0x60f5,	// (0x00014e01) bg_button_pane_cp020

0xd30e,	// (0x0001c01a) main_cset_slider_pane_g7_ParamLimits

0xd30e,	// (0x0001c01a) main_cset_slider_pane_g7

0xd31a,	// (0x0001c026) main_cset_slider_pane_g8_ParamLimits

0xd31a,	// (0x0001c026) main_cset_slider_pane_g8

0x624c,	// (0x00014f58) main_cset_slider_pane_g9_ParamLimits

0x624c,	// (0x00014f58) main_cset_slider_pane_g9

0x6258,	// (0x00014f64) main_cset_slider_pane_g10_ParamLimits

0x6258,	// (0x00014f64) main_cset_slider_pane_g10

0x6264,	// (0x00014f70) main_cset_slider_pane_g11_ParamLimits

0x6264,	// (0x00014f70) main_cset_slider_pane_g11

0x6270,	// (0x00014f7c) main_cset_slider_pane_g12_ParamLimits

0x6270,	// (0x00014f7c) main_cset_slider_pane_g12

0x627c,	// (0x00014f88) main_cset_slider_pane_g13_ParamLimits

0x627c,	// (0x00014f88) main_cset_slider_pane_g13

0x6288,	// (0x00014f94) main_cset_slider_pane_g14_ParamLimits

0x6288,	// (0x00014f94) main_cset_slider_pane_g14

0x6294,	// (0x00014fa0) main_cset_slider_pane_g15_ParamLimits

0x6294,	// (0x00014fa0) main_cset_slider_pane_g15

0xd378,	// (0x0001c084) main_cset_slider_pane_t14_ParamLimits

0xd378,	// (0x0001c084) main_cset_slider_pane_t14

0xd3b1,	// (0x0001c0bd) main_cset_slider_pane_t15_ParamLimits

0xd3b1,	// (0x0001c0bd) main_cset_slider_pane_t15

0x692c,	// (0x00015638) aid_cam4_burst_size_cell_ParamLimits

0x692c,	// (0x00015638) aid_cam4_burst_size_cell

0x694c,	// (0x00015658) grid_cam4_burst_pane_ParamLimits

0x694c,	// (0x00015658) grid_cam4_burst_pane

0x6984,	// (0x00015690) linegrid_cam4_burst_pane_ParamLimits

0x6984,	// (0x00015690) linegrid_cam4_burst_pane

0xd548,	// (0x0001c254) scroll_pane_cp30_ParamLimits

0xd548,	// (0x0001c254) scroll_pane_cp30

0x69a8,	// (0x000156b4) cell_cam4_burst_pane_ParamLimits

0x69a8,	// (0x000156b4) cell_cam4_burst_pane

0xd554,	// (0x0001c260) linegrid_cam4_burst_pane_g1_ParamLimits

0xd554,	// (0x0001c260) linegrid_cam4_burst_pane_g1

0x69f5,	// (0x00015701) linegrid_cam4_burst_pane_g2_ParamLimits

0x69f5,	// (0x00015701) linegrid_cam4_burst_pane_g2

0xd561,	// (0x0001c26d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd561,	// (0x0001c26d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0001e760) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0001e760) linegrid_cam4_burst_pane_g

0x6a06,	// (0x00015712) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a06,	// (0x00015712) linegrid_cam4_burst_pane_g3_copy1

0xd56e,	// (0x0001c27a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd56e,	// (0x0001c27a) linegrid_cam4_burst_pane_g4

0x6a20,	// (0x0001572c) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a20,	// (0x0001572c) linegrid_cam4_burst_pane_g5

0x6a31,	// (0x0001573d) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a31,	// (0x0001573d) linegrid_cam4_burst_pane_g6

0xd57b,	// (0x0001c287) linegrid_cam4_burst_pane_g7_ParamLimits

0xd57b,	// (0x0001c287) linegrid_cam4_burst_pane_g7

0x6a48,	// (0x00015754) cell_cam4_burst_pane_g1

0xd594,	// (0x0001c2a0) main_cam5_pane_t1_ParamLimits

0xd594,	// (0x0001c2a0) main_cam5_pane_t1

0xd5a6,	// (0x0001c2b2) main_cam5_pane_t2_ParamLimits

0xd5a6,	// (0x0001c2b2) main_cam5_pane_t2

0xd5b8,	// (0x0001c2c4) main_cam5_pane_t3_ParamLimits

0xd5b8,	// (0x0001c2c4) main_cam5_pane_t3

0xd5ca,	// (0x0001c2d6) main_cam5_pane_t4_ParamLimits

0xd5ca,	// (0x0001c2d6) main_cam5_pane_t4

0xd5e2,	// (0x0001c2ee) main_cam5_pane_t5_ParamLimits

0xd5e2,	// (0x0001c2ee) main_cam5_pane_t5

0xd5f6,	// (0x0001c302) main_cam5_pane_t6_ParamLimits

0xd5f6,	// (0x0001c302) main_cam5_pane_t6

0xd60a,	// (0x0001c316) main_cam5_pane_t7_ParamLimits

0xd60a,	// (0x0001c316) main_cam5_pane_t7

0xd61c,	// (0x0001c328) main_cam5_pane_t8_ParamLimits

0xd61c,	// (0x0001c328) main_cam5_pane_t8

0xd638,	// (0x0001c344) main_cam5_pane_t9_ParamLimits

0xd638,	// (0x0001c344) main_cam5_pane_t9

0xd64a,	// (0x0001c356) main_cam5_pane_t10_ParamLimits

0xd64a,	// (0x0001c356) main_cam5_pane_t10

0xd65c,	// (0x0001c368) main_cam5_pane_t11_ParamLimits

0xd65c,	// (0x0001c368) main_cam5_pane_t11

0xd66e,	// (0x0001c37a) main_cam5_pane_t12_ParamLimits

0xd66e,	// (0x0001c37a) main_cam5_pane_t12

0xd683,	// (0x0001c38f) main_cam5_pane_t13_ParamLimits

0xd683,	// (0x0001c38f) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0001e76c) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0001e76c) main_cam5_pane_t

0x05fa,	// (0x0000f306) popup_scut_keymap_window_ParamLimits

0x05fa,	// (0x0000f306) popup_scut_keymap_window

0x6a5b,	// (0x00015767) aid_size_cell_brow_shortcut

0x9eb5,	// (0x00018bc1) bg_popup_window_pane_cp010

0x6a67,	// (0x00015773) grid_scut_pane

0x6a73,	// (0x0001577f) cell_scut_pane_ParamLimits

0x6a73,	// (0x0001577f) cell_scut_pane

0x6a8a,	// (0x00015796) cell_scut_pane_g1

0xd6a0,	// (0x0001c3ac) cell_scut_pane_t1

0xd6af,	// (0x0001c3bb) cell_scut_pane_t2

0x6a93,	// (0x0001579f) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0001e787) cell_scut_pane_t

0x46c1,	// (0x000133cd) main_mup3_pane_g8_ParamLimits

0x46c1,	// (0x000133cd) main_mup3_pane_g8

0x5b52,	// (0x0001485e) area_vitu2_query_pane_ParamLimits

0x5b52,	// (0x0001485e) area_vitu2_query_pane

0x67d4,	// (0x000154e0) input_focus_pane_cp08

0xd6be,	// (0x0001c3ca) area_vitu2_query_pane_g1

0x6aa1,	// (0x000157ad) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0001e78e) area_vitu2_query_pane_g

0x6ab2,	// (0x000157be) area_vitu2_query_pane_t1_ParamLimits

0x6ab2,	// (0x000157be) area_vitu2_query_pane_t1

0x6ac6,	// (0x000157d2) area_vitu2_query_pane_t2_ParamLimits

0x6ac6,	// (0x000157d2) area_vitu2_query_pane_t2

0x6ada,	// (0x000157e6) area_vitu2_query_pane_t3_ParamLimits

0x6ada,	// (0x000157e6) area_vitu2_query_pane_t3

0xd6ca,	// (0x0001c3d6) area_vitu2_query_pane_t4_ParamLimits

0xd6ca,	// (0x0001c3d6) area_vitu2_query_pane_t4

0xd6f2,	// (0x0001c3fe) area_vitu2_query_pane_t5_ParamLimits

0xd6f2,	// (0x0001c3fe) area_vitu2_query_pane_t5

0xd71a,	// (0x0001c426) area_vitu2_query_pane_t6_ParamLimits

0xd71a,	// (0x0001c426) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0001e793) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0001e793) area_vitu2_query_pane_t

0x6b02,	// (0x0001580e) bg_button_pane_cp018

0x6b10,	// (0x0001581c) bg_button_pane_cp021

0x6b1c,	// (0x00015828) bg_button_pane_cp022

0x6b2d,	// (0x00015839) input_focus_pane_cp09

0xa7de,	// (0x000194ea) aid_size_touch_mv_arrow_left

0xa809,	// (0x00019515) aid_size_touch_mv_arrow_right

0xd326,	// (0x0001c032) main_cset_slider_pane_g16_ParamLimits

0xd326,	// (0x0001c032) main_cset_slider_pane_g16

0xd332,	// (0x0001c03e) main_cset_slider_pane_g17_ParamLimits

0xd332,	// (0x0001c03e) main_cset_slider_pane_g17

0x6a48,	// (0x00015754) cell_cam4_burst_pane_g1_ParamLimits

0x945d,	// (0x00018169) compa_mode_pane

0x64aa,	// (0x000151b6) popup_vtel_slider_window_g3_ParamLimits

0x64aa,	// (0x000151b6) popup_vtel_slider_window_g3

0x64c1,	// (0x000151cd) popup_vtel_slider_window_g4_ParamLimits

0x64c1,	// (0x000151cd) popup_vtel_slider_window_g4

0x64d8,	// (0x000151e4) popup_vtel_slider_window_t1_ParamLimits

0x64d8,	// (0x000151e4) popup_vtel_slider_window_t1

0x945d,	// (0x00018169) main_cl_pane

0xbe64,	// (0x0001ab70) popup_imed_adjust2_window_ParamLimits

0xbe3c,	// (0x0001ab48) bg_tb_trans_pane_cp05_ParamLimits

0xc8d9,	// (0x0001b5e5) popup_imed_adjust2_window_g1_ParamLimits

0xc8e8,	// (0x0001b5f4) popup_imed_adjust2_window_g2_ParamLimits

0xc8e8,	// (0x0001b5f4) popup_imed_adjust2_window_g2

0xc8f4,	// (0x0001b600) popup_imed_adjust2_window_g3_ParamLimits

0xc8f4,	// (0x0001b600) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0001e4fe) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0001e4fe) popup_imed_adjust2_window_g

0xc900,	// (0x0001b60c) popup_imed_adjust2_window_t1_ParamLimits

0xc918,	// (0x0001b624) slider_imed_adjust_pane_ParamLimits

0xc92c,	// (0x0001b638) slider_imed_adjust_pane_g1_ParamLimits

0xc93c,	// (0x0001b648) slider_imed_adjust_pane_g2_ParamLimits

0xc94c,	// (0x0001b658) slider_imed_adjust_pane_g3_ParamLimits

0xc95d,	// (0x0001b669) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0001e505) slider_imed_adjust_pane_g_ParamLimits

0x58db,	// (0x000145e7) aid_touch_area_cam4_ParamLimits

0x58db,	// (0x000145e7) aid_touch_area_cam4

0xd048,	// (0x0001bd54) battery_pane_cp01

0x59aa,	// (0x000146b6) main_camera4_pane_g6_ParamLimits

0x59aa,	// (0x000146b6) main_camera4_pane_g6

0x59d4,	// (0x000146e0) main_camera4_pane_t2_ParamLimits

0x59d4,	// (0x000146e0) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0001e608) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0001e608) main_camera4_pane_t

0x5a09,	// (0x00014715) aid_touch_area_vid4_ParamLimits

0x5a09,	// (0x00014715) aid_touch_area_vid4

0x5a5d,	// (0x00014769) main_video4_pane_g5_ParamLimits

0x5a5d,	// (0x00014769) main_video4_pane_g5

0x5a82,	// (0x0001478e) vid4_progress_pane_ParamLimits

0x5a82,	// (0x0001478e) vid4_progress_pane

0xd33e,	// (0x0001c04a) main_cset_slider_pane_g18_ParamLimits

0xd33e,	// (0x0001c04a) main_cset_slider_pane_g18

0xd588,	// (0x0001c294) cell_cam4_burst_pane_g2_ParamLimits

0xd588,	// (0x0001c294) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0001e767) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0001e767) cell_cam4_burst_pane_g

0x9c3c,	// (0x00018948) bg_cl_pane_ParamLimits

0x9c3c,	// (0x00018948) bg_cl_pane

0x6b3e,	// (0x0001584a) cl_header_pane_ParamLimits

0x6b3e,	// (0x0001584a) cl_header_pane

0x6b52,	// (0x0001585e) cl_listscroll_pane_ParamLimits

0x6b52,	// (0x0001585e) cl_listscroll_pane

0xd766,	// (0x0001c472) bg_cl_pane_g1

0xd76e,	// (0x0001c47a) bg_cl_pane_g2

0xd776,	// (0x0001c482) bg_cl_pane_g3

0xd77e,	// (0x0001c48a) bg_cl_pane_g4

0xd786,	// (0x0001c492) bg_cl_pane_g5

0xd78e,	// (0x0001c49a) bg_cl_pane_g6

0xd796,	// (0x0001c4a2) bg_cl_pane_g7

0xd79e,	// (0x0001c4aa) bg_cl_pane_g8

0xd7a6,	// (0x0001c4b2) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0001e7a2) bg_cl_pane_g

0x6b62,	// (0x0001586e) aid_height_cl_leading_ParamLimits

0x6b62,	// (0x0001586e) aid_height_cl_leading

0x6b6e,	// (0x0001587a) aid_height_cl_text_ParamLimits

0x6b6e,	// (0x0001587a) aid_height_cl_text

0x94cd,	// (0x000181d9) bg_cl_header_pane_ParamLimits

0x94cd,	// (0x000181d9) bg_cl_header_pane

0x6b8d,	// (0x00015899) cl_header_pane_g1_ParamLimits

0x6b8d,	// (0x00015899) cl_header_pane_g1

0x6ba3,	// (0x000158af) cl_header_pane_t1_ParamLimits

0x6ba3,	// (0x000158af) cl_header_pane_t1

0xd7ae,	// (0x0001c4ba) cl_list_pane

0xd2f9,	// (0x0001c005) hc_scroll_pane_cp01

0xa0f8,	// (0x00018e04) bg_cl_header_pane_g1

0xd1a9,	// (0x0001beb5) bg_cl_header_pane_g2

0xa118,	// (0x00018e24) bg_cl_header_pane_g3

0xd1b9,	// (0x0001bec5) bg_cl_header_pane_g4

0xd1b1,	// (0x0001bebd) bg_cl_header_pane_g5

0xd477,	// (0x0001c183) bg_cl_header_pane_g6

0xd1d1,	// (0x0001bedd) bg_cl_header_pane_g7

0xd1d9,	// (0x0001bee5) bg_cl_header_pane_g8

0xd1c9,	// (0x0001bed5) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0001e7b5) bg_cl_header_pane_g

0x6bbc,	// (0x000158c8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6bbc,	// (0x000158c8) hc_cl_list_double_graphic_heading_pane

0x6bcd,	// (0x000158d9) hc_cl_list_single_graphic_pane_ParamLimits

0x6bcd,	// (0x000158d9) hc_cl_list_single_graphic_pane

0x6be6,	// (0x000158f2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6be6,	// (0x000158f2) hc_cl_list_single_graphic_pane_g1

0x6bf2,	// (0x000158fe) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6bf2,	// (0x000158fe) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0001e7c8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0001e7c8) hc_cl_list_single_graphic_pane_g

0x6c06,	// (0x00015912) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c06,	// (0x00015912) hc_cl_list_single_graphic_pane_t1

0x6be6,	// (0x000158f2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6be6,	// (0x000158f2) hc_cl_list_double_graphic_heading_pane_g1

0x6c1b,	// (0x00015927) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c1b,	// (0x00015927) hc_cl_list_double_graphic_heading_pane_g2

0x6c2f,	// (0x0001593b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c2f,	// (0x0001593b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0001e7cd) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0001e7cd) hc_cl_list_double_graphic_heading_pane_g

0x6c43,	// (0x0001594f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c43,	// (0x0001594f) hc_cl_list_double_graphic_heading_pane_t1

0x6c58,	// (0x00015964) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c58,	// (0x00015964) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0001e7d4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0001e7d4) hc_cl_list_double_graphic_heading_pane_t

0xd7bf,	// (0x0001c4cb) vid4_progress_pane_g1

0xd7cf,	// (0x0001c4db) vid4_progress_pane_g2

0x6c6d,	// (0x00015979) vid4_progress_pane_g3

0xd7df,	// (0x0001c4eb) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0001e7d9) vid4_progress_pane_g

0x6c7f,	// (0x0001598b) vid4_progress_pane_t1

0xd7f7,	// (0x0001c503) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0001e7e4) vid4_progress_pane_t

0x6c95,	// (0x000159a1) wait_bar_pane_cp07

0xc14a,	// (0x0001ae56) blid_firmament_pane_ParamLimits

0xc18d,	// (0x0001ae99) popup_blid_sat_info2_window_g1

0xc1b1,	// (0x0001aebd) popup_blid_sat_info2_window_t3

0xc1bf,	// (0x0001aecb) popup_blid_sat_info2_window_t4

0xc1cd,	// (0x0001aed9) popup_blid_sat_info2_window_t5

0xc1db,	// (0x0001aee7) popup_blid_sat_info2_window_t6

0xc1eb,	// (0x0001aef7) popup_blid_sat_info2_window_t7

0xc1f9,	// (0x0001af05) popup_blid_sat_info2_window_t8

0xc207,	// (0x0001af13) popup_blid_sat_info2_window_t9

0xc215,	// (0x0001af21) popup_blid_sat_info2_window_t10

0xc2d7,	// (0x0001afe3) aid_firma_cardinal_ParamLimits

0xc2eb,	// (0x0001aff7) blid_firmament_pane_t1_ParamLimits

0xc302,	// (0x0001b00e) blid_firmament_pane_t2_ParamLimits

0xc319,	// (0x0001b025) blid_firmament_pane_t3_ParamLimits

0xc330,	// (0x0001b03c) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0001e3f2) blid_firmament_pane_t_ParamLimits

0xc347,	// (0x0001b053) blid_sat_info_pane_ParamLimits

0x94cd,	// (0x000181d9) main_cam_set_pane_ParamLimits

0x4f84,	// (0x00013c90) aid_size_cell_colour_35_ParamLimits

0x4fa4,	// (0x00013cb0) aid_size_cell_colour_112_ParamLimits

0x4fc4,	// (0x00013cd0) aid_size_cell_effect_ParamLimits

0xbe3c,	// (0x0001ab48) bg_tb_trans_pane_cp02_ParamLimits

0xa38e,	// (0x0001909a) heading_imed_pane_ParamLimits

0x4fe4,	// (0x00013cf0) listscroll_imed_pane_ParamLimits

0xb422,	// (0x0001a12e) popup_call2_audio_first_window_g5_ParamLimits

0xb422,	// (0x0001a12e) popup_call2_audio_first_window_g5

0x5582,	// (0x0001428e) aid_size_touch_image3_arrow_left_ParamLimits

0x5582,	// (0x0001428e) aid_size_touch_image3_arrow_left

0x55ae,	// (0x000142ba) aid_size_touch_image3_arrow_right_ParamLimits

0x55ae,	// (0x000142ba) aid_size_touch_image3_arrow_right

0xd80c,	// (0x0001c518) vid4_progress_pane_t3

0x52f9,	// (0x00014005) main_hwr_training_symbol_option_pane_ParamLimits

0x52f9,	// (0x00014005) main_hwr_training_symbol_option_pane

0xcbc6,	// (0x0001b8d2) popup_hwr_training_preview_window_ParamLimits

0xcbc6,	// (0x0001b8d2) popup_hwr_training_preview_window

0x5319,	// (0x00014025) hwr_training_navi_pane_g5_ParamLimits

0x5319,	// (0x00014025) hwr_training_navi_pane_g5

0xd185,	// (0x0001be91) popup_char_count_window

0x94cd,	// (0x000181d9) bg_popup_sub_pane_cp20_ParamLimits

0x65e6,	// (0x000152f2) list_vitu2_match_list_pane_ParamLimits

0x65f5,	// (0x00015301) vitu2_page_scroll_pane_ParamLimits

0x65f5,	// (0x00015301) vitu2_page_scroll_pane

0xd844,	// (0x0001c550) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd844,	// (0x0001c550) list_single_hwr_training_symbol_option_pane

0xd857,	// (0x0001c563) list_single_hwr_training_symbol_option_pane_g1

0xd85f,	// (0x0001c56b) list_single_hwr_training_symbol_option_pane_t1

0xd86d,	// (0x0001c579) bg_button_pane_cp023

0xd876,	// (0x0001c582) bg_button_pane_cp024

0x6cde,	// (0x000159ea) vitu2_page_scroll_pane_g1

0x6ce6,	// (0x000159f2) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0001e7eb) vitu2_page_scroll_pane_g

0x6cee,	// (0x000159fa) vitu2_page_scroll_pane_t1

0xc380,	// (0x0001b08c) popup_char_count_window_g1

0xd8a9,	// (0x0001c5b5) popup_char_count_window_g2

0xd8b2,	// (0x0001c5be) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0001e7f0) popup_char_count_window_g

0xd8bb,	// (0x0001c5c7) popup_char_count_window_t1

0x945d,	// (0x00018169) main_vded2_pane

0xc8c5,	// (0x0001b5d1) aid_size_cell_imed_line

0xc8cf,	// (0x0001b5db) grid_imed_line_width_pane

0xd0f8,	// (0x0001be04) vid4_indicators_pane_g4

0xd8c9,	// (0x0001c5d5) cell_imed_line_width_pane_ParamLimits

0xd8c9,	// (0x0001c5d5) cell_imed_line_width_pane

0xd8dd,	// (0x0001c5e9) cell_imed_line_width_pane_g1

0xd8e6,	// (0x0001c5f2) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0001e7f7) cell_imed_line_width_pane_g

0x6cfd,	// (0x00015a09) main_vded2_pane_g1_ParamLimits

0x6cfd,	// (0x00015a09) main_vded2_pane_g1

0x6d13,	// (0x00015a1f) main_vded2_pane_g2_ParamLimits

0x6d13,	// (0x00015a1f) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0001e7fc) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0001e7fc) main_vded2_pane_g

0x6d25,	// (0x00015a31) vded2_slider_pane_ParamLimits

0x6d25,	// (0x00015a31) vded2_slider_pane

0x6d35,	// (0x00015a41) aid_size_touch_vded2_end

0x6d3f,	// (0x00015a4b) aid_size_touch_vded2_playhead

0xd8ee,	// (0x0001c5fa) aid_size_touch_vded2_start

0xd8f6,	// (0x0001c602) vded2_slider_bg_pane

0xd8ff,	// (0x0001c60b) vded2_slider_pane_g1

0xd908,	// (0x0001c614) vded2_slider_pane_g2

0x6d49,	// (0x00015a55) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0001e801) vded2_slider_pane_g

0xd910,	// (0x0001c61c) vded2_slider_bg_pane_g1

0xd919,	// (0x0001c625) vded2_slider_bg_pane_g2

0xd922,	// (0x0001c62e) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0001e808) vded2_slider_bg_pane_g

0x2d1c,	// (0x00011a28) aid_postcard_touch_down_pane_ParamLimits

0x2d1c,	// (0x00011a28) aid_postcard_touch_down_pane

0x2d32,	// (0x00011a3e) aid_postcard_touch_up_pane_ParamLimits

0x2d32,	// (0x00011a3e) aid_postcard_touch_up_pane

0x945d,	// (0x00018169) main_blid2_pane

0xbe4a,	// (0x0001ab56) popup_blid2_search_window

0x945d,	// (0x00018169) blid2_gps_pane

0x945d,	// (0x00018169) blid2_navig_pane

0x945d,	// (0x00018169) blid2_search_pane

0x945d,	// (0x00018169) blid2_tripm_pane

0x6d54,	// (0x00015a60) blid2_search_pane_g1_ParamLimits

0x6d54,	// (0x00015a60) blid2_search_pane_g1

0x6d6c,	// (0x00015a78) blid2_search_pane_t1_ParamLimits

0x6d6c,	// (0x00015a78) blid2_search_pane_t1

0x6d7e,	// (0x00015a8a) aid_size_cell_blid2_gps_ParamLimits

0x6d7e,	// (0x00015a8a) aid_size_cell_blid2_gps

0x6d96,	// (0x00015aa2) blid2_gps_pane_g1_ParamLimits

0x6d96,	// (0x00015aa2) blid2_gps_pane_g1

0x6daa,	// (0x00015ab6) grid_blid2_satellite_pane_ParamLimits

0x6daa,	// (0x00015ab6) grid_blid2_satellite_pane

0x6dc4,	// (0x00015ad0) blid2_navig_pane_g1_ParamLimits

0x6dc4,	// (0x00015ad0) blid2_navig_pane_g1

0x6dd0,	// (0x00015adc) blid2_navig_pane_t1_ParamLimits

0x6dd0,	// (0x00015adc) blid2_navig_pane_t1

0x6deb,	// (0x00015af7) blid2_navig_pane_t2_ParamLimits

0x6deb,	// (0x00015af7) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0001e80f) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0001e80f) blid2_navig_pane_t

0x6e06,	// (0x00015b12) blid2_navig_ring_pane_ParamLimits

0x6e06,	// (0x00015b12) blid2_navig_ring_pane

0x6e1f,	// (0x00015b2b) blid2_speed_pane_ParamLimits

0x6e1f,	// (0x00015b2b) blid2_speed_pane

0x6e2b,	// (0x00015b37) blid2_tripm_pane_g1_ParamLimits

0x6e2b,	// (0x00015b37) blid2_tripm_pane_g1

0x6e46,	// (0x00015b52) blid2_tripm_pane_g2_ParamLimits

0x6e46,	// (0x00015b52) blid2_tripm_pane_g2

0x6e5a,	// (0x00015b66) blid2_tripm_pane_g3_ParamLimits

0x6e5a,	// (0x00015b66) blid2_tripm_pane_g3

0x6e6e,	// (0x00015b7a) blid2_tripm_pane_g4_ParamLimits

0x6e6e,	// (0x00015b7a) blid2_tripm_pane_g4

0x6e82,	// (0x00015b8e) blid2_tripm_pane_g5_ParamLimits

0x6e82,	// (0x00015b8e) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0001e814) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0001e814) blid2_tripm_pane_g

0x6ea8,	// (0x00015bb4) blid2_tripm_pane_t1_ParamLimits

0x6ea8,	// (0x00015bb4) blid2_tripm_pane_t1

0x6ec3,	// (0x00015bcf) blid2_tripm_pane_t2_ParamLimits

0x6ec3,	// (0x00015bcf) blid2_tripm_pane_t2

0x6edc,	// (0x00015be8) blid2_tripm_pane_t3_ParamLimits

0x6edc,	// (0x00015be8) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0001e821) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0001e821) blid2_tripm_pane_t

0x6f23,	// (0x00015c2f) cell_blid2_satellite_pane_ParamLimits

0x6f23,	// (0x00015c2f) cell_blid2_satellite_pane

0x6f41,	// (0x00015c4d) cell_blid2_satellite_pane_g1

0xd92b,	// (0x0001c637) cell_blid2_satellite_pane_t1

0xc357,	// (0x0001b063) blid2_speed_pane_g1

0xd939,	// (0x0001c645) blid2_speed_pane_t1

0xd947,	// (0x0001c653) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0001e82a) blid2_speed_pane_t

0xc357,	// (0x0001b063) blid2_navig_ring_pane_g1

0x6f4a,	// (0x00015c56) blid2_navig_ring_pane_g2

0x6f52,	// (0x00015c5e) blid2_navig_ring_pane_g3

0x6f5a,	// (0x00015c66) blid2_navig_ring_pane_g4

0x6f62,	// (0x00015c6e) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0001e82f) blid2_navig_ring_pane_g

0x945d,	// (0x00018169) bg_popup_window_pane_cp011

0xd955,	// (0x0001c661) popup_blid2_search_window_g1

0xd95d,	// (0x0001c669) popup_blid2_search_window_t1

0xd96b,	// (0x0001c677) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0001e83a) popup_blid2_search_window_t

0xa007,	// (0x00018d13) main_browser_pane_g1

0x9c3c,	// (0x00018948) main_browser_pane_ParamLimits

0x94cd,	// (0x000181d9) bg_button_pane_cp011_ParamLimits

0x5e85,	// (0x00014b91) cell_vitu2_function_pane_g1_ParamLimits

0xbe3c,	// (0x0001ab48) bg_popup_sub_pane_cp22_ParamLimits

0x67d4,	// (0x000154e0) input_focus_pane_cp08_ParamLimits

0x67eb,	// (0x000154f7) popup_vitu2_query_button_pane_ParamLimits

0x67eb,	// (0x000154f7) popup_vitu2_query_button_pane

0x67fc,	// (0x00015508) popup_vitu2_query_input_button_pane

0xd4d2,	// (0x0001c1de) popup_vitu2_query_window_g1_ParamLimits

0x6806,	// (0x00015512) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0001e73b) popup_vitu2_query_window_g_ParamLimits

0x945d,	// (0x00018169) bg_button_pane_cp026

0x6f6a,	// (0x00015c76) popup_vitu2_query_input_button_pane_g1

0x945d,	// (0x00018169) bg_button_pane_cp025

0xd979,	// (0x0001c685) popup_vitu2_query_button_pane_t1

0x43b3,	// (0x000130bf) main_mp3_pane_t6

0x43c1,	// (0x000130cd) popup_slider_window_cp01

0xd064,	// (0x0001bd70) cam4_battery_pane

0xd0b7,	// (0x0001bdc3) cam4_battery_pane_cp02

0xd7b7,	// (0x0001c4c3) cam4_battery_pane_cp01

0xd7b7,	// (0x0001c4c3) cam4_battery_pane_cp03

0xc357,	// (0x0001b063) cam4_battery_pane_g1

0xd987,	// (0x0001c693) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0001e83f) cam4_battery_pane_g

0xc223,	// (0x0001af2f) popup_blid_sat_info2_window_t11

0xa7de,	// (0x000194ea) aid_size_touch_mv_arrow_left_ParamLimits

0xa809,	// (0x00019515) aid_size_touch_mv_arrow_right_ParamLimits

0xa867,	// (0x00019573) navi_pane_g1_ParamLimits

0xa873,	// (0x0001957f) navi_pane_g2_ParamLimits

0xa8a1,	// (0x000195ad) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0001e0f1) navi_pane_g_ParamLimits

0x2749,	// (0x00011455) navi_pane_mv_t1_ParamLimits

0x4ff0,	// (0x00013cfc) grid_imed_effect_pane_ParamLimits

0x155f,	// (0x0001026b) aid_placing_vt_slider_lsc

0x9f56,	// (0x00018c62) aid_placing_vt_slider_prt

0x94cd,	// (0x000181d9) bg_tb_trans_pane_cp01_ParamLimits

0xc4c5,	// (0x0001b1d1) popup_image_details_window_g1_ParamLimits

0xc4d8,	// (0x0001b1e4) popup_image_details_window_g2_ParamLimits

0xc4ed,	// (0x0001b1f9) popup_image_details_window_g3_ParamLimits

0xc4ed,	// (0x0001b1f9) popup_image_details_window_g3

0xf72b,	// (0x0001e437) popup_image_details_window_g_ParamLimits

0xc501,	// (0x0001b20d) popup_image_details_window_t1_ParamLimits

0xc513,	// (0x0001b21f) popup_image_details_window_t2_ParamLimits

0xc52c,	// (0x0001b238) popup_image_details_window_t3_ParamLimits

0xc540,	// (0x0001b24c) popup_image_details_window_t4_ParamLimits

0xc55b,	// (0x0001b267) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0001e43e) popup_image_details_window_t_ParamLimits

0x6b7a,	// (0x00015886) cl_header_name_pane_ParamLimits

0x6b7a,	// (0x00015886) cl_header_name_pane

0x6f72,	// (0x00015c7e) cl_header_name_pane_t1_ParamLimits

0x6f72,	// (0x00015c7e) cl_header_name_pane_t1

0x6f93,	// (0x00015c9f) cl_header_name_pane_t2_ParamLimits

0x6f93,	// (0x00015c9f) cl_header_name_pane_t2

0x6fd5,	// (0x00015ce1) cl_header_name_pane_t3_ParamLimits

0x6fd5,	// (0x00015ce1) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0001e844) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0001e844) cl_header_name_pane_t

0xa930,	// (0x0001963c) navi_pane_mv_g2_ParamLimits

0xd142,	// (0x0001be4e) field_vitu2_entry_pane_g1_ParamLimits

0xd14e,	// (0x0001be5a) field_vitu2_entry_pane_g2_ParamLimits

0xd15a,	// (0x0001be66) field_vitu2_entry_pane_g3_ParamLimits

0xd15a,	// (0x0001be66) field_vitu2_entry_pane_g3

0xf92e,	// (0x0001e63a) field_vitu2_entry_pane_g_ParamLimits

0xd18d,	// (0x0001be99) cell_vitu2_itu_pane_g1_ParamLimits

0x5d2d,	// (0x00014a39) cell_vitu2_itu_pane_g2_ParamLimits

0x5d2d,	// (0x00014a39) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0001e646) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0001e646) cell_vitu2_itu_pane_g

0x94cd,	// (0x000181d9) bg_vkb2_func_pane_cp05_ParamLimits

0x94cd,	// (0x000181d9) bg_vkb2_func_pane_cp05

0x94cd,	// (0x000181d9) bg_vkb2_func_pane_cp03

0x94cd,	// (0x000181d9) bg_vkb2_func_pane_cp04

0x94cd,	// (0x000181d9) bg_vkb2_func_pane_cp10_ParamLimits

0x94cd,	// (0x000181d9) bg_vkb2_func_pane_cp10

0x6b1c,	// (0x00015828) bg_vkb2_func_pane_cp08

0x6b02,	// (0x0001580e) bg_vkb2_func_pane_cp06

0x6b10,	// (0x0001581c) bg_vkb2_func_pane_cp07

0xd87f,	// (0x0001c58b) bg_vkb2_func_pane_cp11_ParamLimits

0xd87f,	// (0x0001c58b) bg_vkb2_func_pane_cp11

0xd894,	// (0x0001c5a0) bg_vkb2_func_pane_cp12_ParamLimits

0xd894,	// (0x0001c5a0) bg_vkb2_func_pane_cp12

0x945d,	// (0x00018169) bg_vkb2_func_pane_cp09

0xd1a9,	// (0x0001beb5) bg_vkb2_func_pane_g1

0xa118,	// (0x00018e24) bg_vkb2_func_pane_g2

0xd1b1,	// (0x0001bebd) bg_vkb2_func_pane_g3

0xd1b9,	// (0x0001bec5) bg_vkb2_func_pane_g4

0xd477,	// (0x0001c183) bg_vkb2_func_pane_g5

0xd1d1,	// (0x0001bedd) bg_vkb2_func_pane_g6

0xd1d9,	// (0x0001bee5) bg_vkb2_func_pane_g7

0xd1c9,	// (0x0001bed5) bg_vkb2_func_pane_g8

0xa0f8,	// (0x00018e04) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0001e84b) bg_vkb2_func_pane_g

0x6e96,	// (0x00015ba2) blid2_tripm_pane_g6_ParamLimits

0x6e96,	// (0x00015ba2) blid2_tripm_pane_g6

0xceb7,	// (0x0001bbc3) mp4_progress_pane_g1

0x6f0f,	// (0x00015c1b) blid2_tripm_values_pane_ParamLimits

0x6f0f,	// (0x00015c1b) blid2_tripm_values_pane

0x7006,	// (0x00015d12) blid2_tripm_values_pane_t1

0x7014,	// (0x00015d20) blid2_tripm_values_pane_t2

0x7022,	// (0x00015d2e) blid2_tripm_values_pane_t3

0x7030,	// (0x00015d3c) blid2_tripm_values_pane_t4

0x703e,	// (0x00015d4a) blid2_tripm_values_pane_t5

0x704c,	// (0x00015d58) blid2_tripm_values_pane_t6

0x705a,	// (0x00015d66) blid2_tripm_values_pane_t7

0x7068,	// (0x00015d74) blid2_tripm_values_pane_t8

0x7076,	// (0x00015d82) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0001e85e) blid2_tripm_values_pane_t

0x15a1,	// (0x000102ad) call_video_pane_t1_ParamLimits

0x15bf,	// (0x000102cb) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0001df7a) call_video_pane_t_ParamLimits

0x2c21,	// (0x0001192d) msg_header_pane_g1_ParamLimits

0xab2a,	// (0x00019836) msg_header_pane_g2_ParamLimits

0xab2a,	// (0x00019836) msg_header_pane_g2

0x0001,

0xf488,	// (0x0001e194) msg_header_pane_g_ParamLimits

0xf488,	// (0x0001e194) msg_header_pane_g

0x9c3c,	// (0x00018948) main_clock2_pane_ParamLimits

0x4ce9,	// (0x000139f5) grid_clock2_toolbar_pane_ParamLimits

0x4ce9,	// (0x000139f5) grid_clock2_toolbar_pane

0x4ce9,	// (0x000139f5) listscroll_clock2_pane_ParamLimits

0x4ce9,	// (0x000139f5) listscroll_clock2_pane

0x4de5,	// (0x00013af1) main_clock2_pane_t3_ParamLimits

0x4de5,	// (0x00013af1) main_clock2_pane_t3

0x4e09,	// (0x00013b15) main_clock2_pane_t4_ParamLimits

0x4e09,	// (0x00013b15) main_clock2_pane_t4

0xd991,	// (0x0001c69d) cell_clock2_toolbar_pane

0xd999,	// (0x0001c6a5) cell_clock2_toolbar_pane_cp01

0xd999,	// (0x0001c6a5) cell_clock2_toolbar_pane_cp02

0xd9a1,	// (0x0001c6ad) cell_clock2_toolbar_pane_cp03

0xd9a9,	// (0x0001c6b5) list_clock2_pane

0xa763,	// (0x0001946f) scroll_pane_cp10

0xd9b1,	// (0x0001c6bd) list_single_clock2_pane_ParamLimits

0xd9b1,	// (0x0001c6bd) list_single_clock2_pane

0x9eb5,	// (0x00018bc1) list_highlight_pane_cp08

0xd9be,	// (0x0001c6ca) list_single_clock2_pane_t1

0xd9cc,	// (0x0001c6d8) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0001e871) list_single_clock2_pane_t

0x945d,	// (0x00018169) bg_button_pane_cp10

0xd9da,	// (0x0001c6e6) cell_clock2_toolbar_pane_g1

0x2ca8,	// (0x000119b4) aid_main_viewer_pane_g1_ParamLimits

0x2ca8,	// (0x000119b4) aid_main_viewer_pane_g1

0x2cb6,	// (0x000119c2) aid_main_viewer_pane_g2_ParamLimits

0x2cb6,	// (0x000119c2) aid_main_viewer_pane_g2

0x2cc4,	// (0x000119d0) aid_main_viewer_pane_g3_ParamLimits

0x2cc4,	// (0x000119d0) aid_main_viewer_pane_g3

0x2cd3,	// (0x000119df) aid_main_viewer_pane_g4_ParamLimits

0x2cd3,	// (0x000119df) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0001e1a5) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0001e1a5) aid_main_viewer_pane_g

0x35db,	// (0x000122e7) main_calc_pane_ParamLimits

0x35ef,	// (0x000122fb) main_dialer2_pane_ParamLimits

0x945d,	// (0x00018169) main_cam6_pane

0x945d,	// (0x00018169) main_vid6_pane

0x4cf5,	// (0x00013a01) listscroll_gen_pane_cp06_ParamLimits

0x4cf5,	// (0x00013a01) listscroll_gen_pane_cp06

0x4e2c,	// (0x00013b38) main_clock2_pane_t5_ParamLimits

0x4e2c,	// (0x00013b38) main_clock2_pane_t5

0x4e86,	// (0x00013b92) aid_call2_pane_cp10_ParamLimits

0x4e98,	// (0x00013ba4) aid_call_pane_cp10_ParamLimits

0xa7d2,	// (0x000194de) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa7d2,	// (0x000194de) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4eaa,	// (0x00013bb6) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4eaa,	// (0x00013bb6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa7d2,	// (0x000194de) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0001e4f3) popup_clock_analogue_window_cp10_g_ParamLimits

0x4ebc,	// (0x00013bc8) popup_clock_analogue_window_cp10_t1_ParamLimits

0x552f,	// (0x0001423b) cell_dialer2_keypad_pane_g2_ParamLimits

0x552f,	// (0x0001423b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0001e5d9) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0001e5d9) cell_dialer2_keypad_pane_g

0x554b,	// (0x00014257) cell_dialer2_keypad_pane_t1

0x619f,	// (0x00014eab) main_cset_text2_pane_ParamLimits

0x619f,	// (0x00014eab) main_cset_text2_pane

0xd6be,	// (0x0001c3ca) area_vitu2_query_pane_g1_ParamLimits

0x6aa1,	// (0x000157ad) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0001e78e) area_vitu2_query_pane_g_ParamLimits

0xd742,	// (0x0001c44e) area_vitu2_query_pane_t7_ParamLimits

0xd742,	// (0x0001c44e) area_vitu2_query_pane_t7

0x6b02,	// (0x0001580e) bg_button_pane_cp018_ParamLimits

0x6b10,	// (0x0001581c) bg_button_pane_cp021_ParamLimits

0x6b1c,	// (0x00015828) bg_button_pane_cp022_ParamLimits

0x6b1c,	// (0x00015828) bg_vkb2_func_pane_cp08_ParamLimits

0x6b02,	// (0x0001580e) bg_vkb2_func_pane_cp06_ParamLimits

0x6b10,	// (0x0001581c) bg_vkb2_func_pane_cp07_ParamLimits

0x6b2d,	// (0x00015839) input_focus_pane_cp09_ParamLimits

0xd9e2,	// (0x0001c6ee) cam6_autofocus_pane_ParamLimits

0xd9e2,	// (0x0001c6ee) cam6_autofocus_pane

0x7084,	// (0x00015d90) cam6_image_uncrop_pane_ParamLimits

0x7084,	// (0x00015d90) cam6_image_uncrop_pane

0x7093,	// (0x00015d9f) cam6_indi_pane_ParamLimits

0x7093,	// (0x00015d9f) cam6_indi_pane

0x70a9,	// (0x00015db5) cam6_mode_pane_ParamLimits

0x70a9,	// (0x00015db5) cam6_mode_pane

0x70bb,	// (0x00015dc7) cam6_timer_pane_ParamLimits

0x70bb,	// (0x00015dc7) cam6_timer_pane

0x70cb,	// (0x00015dd7) cam6_zoom_pane_ParamLimits

0x70cb,	// (0x00015dd7) cam6_zoom_pane

0x70d7,	// (0x00015de3) cam6_mode_pane_g1_ParamLimits

0x70d7,	// (0x00015de3) cam6_mode_pane_g1

0x70e7,	// (0x00015df3) cam6_mode_pane_g2_ParamLimits

0x70e7,	// (0x00015df3) cam6_mode_pane_g2

0x70f7,	// (0x00015e03) cam6_mode_pane_g3_ParamLimits

0x70f7,	// (0x00015e03) cam6_mode_pane_g3

0x7107,	// (0x00015e13) cam6_mode_pane_g4_ParamLimits

0x7107,	// (0x00015e13) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0001e876) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0001e876) cam6_mode_pane_g

0xd1e1,	// (0x0001beed) bg_tb_trans_pane_cp08_ParamLimits

0xd1e1,	// (0x0001beed) bg_tb_trans_pane_cp08

0xd9f0,	// (0x0001c6fc) cam6_battery_pane_ParamLimits

0xd9f0,	// (0x0001c6fc) cam6_battery_pane

0xda06,	// (0x0001c712) cam6_indi_pane_g1_ParamLimits

0xda06,	// (0x0001c712) cam6_indi_pane_g1

0xda18,	// (0x0001c724) cam6_indi_pane_g2_ParamLimits

0xda18,	// (0x0001c724) cam6_indi_pane_g2

0xda2a,	// (0x0001c736) cam6_indi_pane_g3_ParamLimits

0xda2a,	// (0x0001c736) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0001e87f) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0001e87f) cam6_indi_pane_g

0xda3c,	// (0x0001c748) cam6_indi_pane_t1_ParamLimits

0xda3c,	// (0x0001c748) cam6_indi_pane_t1

0x7117,	// (0x00015e23) cam6_autofocus_pane_g1

0x711f,	// (0x00015e2b) cam6_autofocus_pane_g2

0x7127,	// (0x00015e33) cam6_autofocus_pane_g3

0x712f,	// (0x00015e3b) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0001e886) cam6_autofocus_pane_g

0xda62,	// (0x0001c76e) cam6_timer_pane_g1

0xda6a,	// (0x0001c776) cam6_timer_pane_t1

0xda78,	// (0x0001c784) cam6_zoom_cont_pane

0xda80,	// (0x0001c78c) cam6_zoom_pane_g1

0xda88,	// (0x0001c794) cam6_zoom_pane_g2

0x7137,	// (0x00015e43) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0001e88f) cam6_zoom_pane_g

0xc357,	// (0x0001b063) cam6_battery_pane_g1

0xc357,	// (0x0001b063) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0001e3fb) cam6_battery_pane_g

0xda90,	// (0x0001c79c) cam6_zoom_cont_pane_g1

0xda99,	// (0x0001c7a5) cam6_zoom_cont_pane_g2

0xdaa2,	// (0x0001c7ae) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0001e896) cam6_zoom_cont_pane_g

0x7154,	// (0x00015e60) cam6_mode_pane_cp_ParamLimits

0x7154,	// (0x00015e60) cam6_mode_pane_cp

0x70cb,	// (0x00015dd7) cam6_zoom_pane_cp_ParamLimits

0x70cb,	// (0x00015dd7) cam6_zoom_pane_cp

0x7166,	// (0x00015e72) vid6_image_uncrop_cif_pane_ParamLimits

0x7166,	// (0x00015e72) vid6_image_uncrop_cif_pane

0x7176,	// (0x00015e82) vid6_image_uncrop_nhd_pane_ParamLimits

0x7176,	// (0x00015e82) vid6_image_uncrop_nhd_pane

0x7084,	// (0x00015d90) vid6_image_uncrop_vga_pane_ParamLimits

0x7084,	// (0x00015d90) vid6_image_uncrop_vga_pane

0x7185,	// (0x00015e91) vid6_image_uncrop_wvga_pane_ParamLimits

0x7185,	// (0x00015e91) vid6_image_uncrop_wvga_pane

0x7194,	// (0x00015ea0) vid6_indi_pane_ParamLimits

0x7194,	// (0x00015ea0) vid6_indi_pane

0xd1e1,	// (0x0001beed) bg_tb_trans_pane_cp09_ParamLimits

0xd1e1,	// (0x0001beed) bg_tb_trans_pane_cp09

0xdaba,	// (0x0001c7c6) cam6_battery_pane_cp_ParamLimits

0xdaba,	// (0x0001c7c6) cam6_battery_pane_cp

0xdac6,	// (0x0001c7d2) vid6_indi_pane_g1_ParamLimits

0xdac6,	// (0x0001c7d2) vid6_indi_pane_g1

0xdad8,	// (0x0001c7e4) vid6_indi_pane_g2_ParamLimits

0xdad8,	// (0x0001c7e4) vid6_indi_pane_g2

0xdaea,	// (0x0001c7f6) vid6_indi_pane_g3_ParamLimits

0xdaea,	// (0x0001c7f6) vid6_indi_pane_g3

0xdaff,	// (0x0001c80b) vid6_indi_pane_g4_ParamLimits

0xdaff,	// (0x0001c80b) vid6_indi_pane_g4

0xdb14,	// (0x0001c820) vid6_indi_pane_g5_ParamLimits

0xdb14,	// (0x0001c820) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0001e89d) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0001e89d) vid6_indi_pane_g

0xdb2e,	// (0x0001c83a) vid6_indi_pane_t1_ParamLimits

0xdb2e,	// (0x0001c83a) vid6_indi_pane_t1

0xdb44,	// (0x0001c850) vid6_indi_pane_t2_ParamLimits

0xdb44,	// (0x0001c850) vid6_indi_pane_t2

0xdb6c,	// (0x0001c878) vid6_indi_pane_t3_ParamLimits

0xdb6c,	// (0x0001c878) vid6_indi_pane_t3

0xdb94,	// (0x0001c8a0) vid6_indi_pane_t4_ParamLimits

0xdb94,	// (0x0001c8a0) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0001e8a8) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0001e8a8) vid6_indi_pane_t

0xdbb8,	// (0x0001c8c4) wait_bar_pane_cp08

0x71ac,	// (0x00015eb8) main_cset_text2_pane_t1_ParamLimits

0x71ac,	// (0x00015eb8) main_cset_text2_pane_t1

0x713f,	// (0x00015e4b) listscroll_gen_pane_cp06_t1_ParamLimits

0x713f,	// (0x00015e4b) listscroll_gen_pane_cp06_t1

0x945d,	// (0x00018169) main_cam6_set_pane

0xc5a5,	// (0x0001b2b1) bg_tb_trans_pane_cp06_ParamLimits

0xd06c,	// (0x0001bd78) cam4_indicators_pane_g1_ParamLimits

0xd07d,	// (0x0001bd89) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0001e616) cam4_indicators_pane_g_ParamLimits

0xd095,	// (0x0001bda1) cam4_indicators_pane_t1_ParamLimits

0x94cd,	// (0x000181d9) bg_tb_trans_pane_cp07_ParamLimits

0xd0bf,	// (0x0001bdcb) vid4_indicators_pane_g1_ParamLimits

0xd0d3,	// (0x0001bddf) vid4_indicators_pane_g2_ParamLimits

0xd0e7,	// (0x0001bdf3) vid4_indicators_pane_g3_ParamLimits

0xd0f8,	// (0x0001be04) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0001e628) vid4_indicators_pane_g_ParamLimits

0xd114,	// (0x0001be20) vid4_indicators_pane_t1_ParamLimits

0xd7bf,	// (0x0001c4cb) vid4_progress_pane_g1_ParamLimits

0xd7cf,	// (0x0001c4db) vid4_progress_pane_g2_ParamLimits

0x6c6d,	// (0x00015979) vid4_progress_pane_g3_ParamLimits

0xd7df,	// (0x0001c4eb) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0001e7d9) vid4_progress_pane_g_ParamLimits

0x6c7f,	// (0x0001598b) vid4_progress_pane_t1_ParamLimits

0xd7f7,	// (0x0001c503) vid4_progress_pane_t2_ParamLimits

0xd80c,	// (0x0001c518) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0001e7e4) vid4_progress_pane_t_ParamLimits

0x6c95,	// (0x000159a1) wait_bar_pane_cp07_ParamLimits

0x71ca,	// (0x00015ed6) main_cam6_set_pane_g2_ParamLimits

0x71ca,	// (0x00015ed6) main_cam6_set_pane_g2

0x71ee,	// (0x00015efa) main_cset6_listscroll_pane_ParamLimits

0x71ee,	// (0x00015efa) main_cset6_listscroll_pane

0x720a,	// (0x00015f16) main_cset6_slider_pane_ParamLimits

0x720a,	// (0x00015f16) main_cset6_slider_pane

0x7220,	// (0x00015f2c) main_cset6_text2_pane_ParamLimits

0x7220,	// (0x00015f2c) main_cset6_text2_pane

0xdbc7,	// (0x0001c8d3) main_cset6_text_pane

0xdbcf,	// (0x0001c8db) main_cset_list_pane_copy1_ParamLimits

0xdbcf,	// (0x0001c8db) main_cset_list_pane_copy1

0xdbdf,	// (0x0001c8eb) scroll_pane_cp028_copy1

0x722e,	// (0x00015f3a) cset_list_set_pane_copy1

0x7240,	// (0x00015f4c) aid_position_infowindow_above_copy1

0x7248,	// (0x00015f54) aid_position_infowindow_below_copy1

0xdbe8,	// (0x0001c8f4) cset_list_set_pane_g1_copy1

0xdbf0,	// (0x0001c8fc) cset_list_set_pane_g3_copy1_ParamLimits

0xdbf0,	// (0x0001c8fc) cset_list_set_pane_g3_copy1

0xdbff,	// (0x0001c90b) cset_list_set_pane_t1_copy1_ParamLimits

0xdbff,	// (0x0001c90b) cset_list_set_pane_t1_copy1

0x94cd,	// (0x000181d9) list_highlight_pane_cp021_copy1_ParamLimits

0x94cd,	// (0x000181d9) list_highlight_pane_cp021_copy1

0xdc14,	// (0x0001c920) cset6_slider_pane_ParamLimits

0xdc14,	// (0x0001c920) cset6_slider_pane

0xdc40,	// (0x0001c94c) main_cset6_slider_pane_g1_ParamLimits

0xdc40,	// (0x0001c94c) main_cset6_slider_pane_g1

0x7250,	// (0x00015f5c) main_cset6_slider_pane_g2_ParamLimits

0x7250,	// (0x00015f5c) main_cset6_slider_pane_g2

0xdc68,	// (0x0001c974) main_cset6_slider_pane_g3_ParamLimits

0xdc68,	// (0x0001c974) main_cset6_slider_pane_g3

0x7278,	// (0x00015f84) main_cset6_slider_pane_g4_ParamLimits

0x7278,	// (0x00015f84) main_cset6_slider_pane_g4

0xdc74,	// (0x0001c980) main_cset6_slider_pane_g5_ParamLimits

0xdc74,	// (0x0001c980) main_cset6_slider_pane_g5

0xd30e,	// (0x0001c01a) main_cset6_slider_pane_g7_ParamLimits

0xd30e,	// (0x0001c01a) main_cset6_slider_pane_g7

0xd31a,	// (0x0001c026) main_cset6_slider_pane_g8_ParamLimits

0xd31a,	// (0x0001c026) main_cset6_slider_pane_g8

0x624c,	// (0x00014f58) main_cset6_slider_pane_g9_ParamLimits

0x624c,	// (0x00014f58) main_cset6_slider_pane_g9

0x6258,	// (0x00014f64) main_cset6_slider_pane_g10_ParamLimits

0x6258,	// (0x00014f64) main_cset6_slider_pane_g10

0x6264,	// (0x00014f70) main_cset6_slider_pane_g11_ParamLimits

0x6264,	// (0x00014f70) main_cset6_slider_pane_g11

0x6270,	// (0x00014f7c) main_cset6_slider_pane_g12_ParamLimits

0x6270,	// (0x00014f7c) main_cset6_slider_pane_g12

0x627c,	// (0x00014f88) main_cset6_slider_pane_g13_ParamLimits

0x627c,	// (0x00014f88) main_cset6_slider_pane_g13

0x6288,	// (0x00014f94) main_cset6_slider_pane_g14_ParamLimits

0x6288,	// (0x00014f94) main_cset6_slider_pane_g14

0x7284,	// (0x00015f90) main_cset6_slider_pane_g15_ParamLimits

0x7284,	// (0x00015f90) main_cset6_slider_pane_g15

0xd326,	// (0x0001c032) main_cset6_slider_pane_g16_ParamLimits

0xd326,	// (0x0001c032) main_cset6_slider_pane_g16

0xd332,	// (0x0001c03e) main_cset6_slider_pane_g17_ParamLimits

0xd332,	// (0x0001c03e) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0001e8b1) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0001e8b1) main_cset6_slider_pane_g

0xdc80,	// (0x0001c98c) main_cset6_slider_pane_t1_ParamLimits

0xdc80,	// (0x0001c98c) main_cset6_slider_pane_t1

0x72b4,	// (0x00015fc0) main_cset6_slider_pane_t2_ParamLimits

0x72b4,	// (0x00015fc0) main_cset6_slider_pane_t2

0x72df,	// (0x00015feb) main_cset6_slider_pane_t3_ParamLimits

0x72df,	// (0x00015feb) main_cset6_slider_pane_t3

0x730a,	// (0x00016016) main_cset6_slider_pane_t4_ParamLimits

0x730a,	// (0x00016016) main_cset6_slider_pane_t4

0x7335,	// (0x00016041) main_cset6_slider_pane_t5_ParamLimits

0x7335,	// (0x00016041) main_cset6_slider_pane_t5

0xdcc1,	// (0x0001c9cd) main_cset6_slider_pane_t7_ParamLimits

0xdcc1,	// (0x0001c9cd) main_cset6_slider_pane_t7

0x7360,	// (0x0001606c) main_cset6_slider_pane_t8_ParamLimits

0x7360,	// (0x0001606c) main_cset6_slider_pane_t8

0x7384,	// (0x00016090) main_cset6_slider_pane_t9_ParamLimits

0x7384,	// (0x00016090) main_cset6_slider_pane_t9

0x73a8,	// (0x000160b4) main_cset6_slider_pane_t10_ParamLimits

0x73a8,	// (0x000160b4) main_cset6_slider_pane_t10

0x73cc,	// (0x000160d8) main_cset6_slider_pane_t11_ParamLimits

0x73cc,	// (0x000160d8) main_cset6_slider_pane_t11

0xdcf7,	// (0x0001ca03) main_cset6_slider_pane_t14_ParamLimits

0xdcf7,	// (0x0001ca03) main_cset6_slider_pane_t14

0xdd30,	// (0x0001ca3c) main_cset6_slider_pane_t15_ParamLimits

0xdd30,	// (0x0001ca3c) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0001e8d6) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0001e8d6) main_cset6_slider_pane_t

0xcb9b,	// (0x0001b8a7) cset_slider_pane_g1_copy1

0xd40a,	// (0x0001c116) cset_slider_pane_g2_copy1

0xd413,	// (0x0001c11f) cset_slider_pane_g3_copy1

0x945d,	// (0x00018169) bg_popup_sub_pane_cp011_copy1

0xdd69,	// (0x0001ca75) main_cset_text_pane_g1_copy1

0xd4e6,	// (0x0001c1f2) main_cset_text_pane_t1_copy1

0xd4f4,	// (0x0001c200) main_cset_text_pane_t2_copy1

0xd502,	// (0x0001c20e) main_cset_text_pane_t3_copy1

0xd510,	// (0x0001c21c) main_cset_text_pane_t4_copy1

0xd51e,	// (0x0001c22a) main_cset_text_pane_t5_copy1

0xdd71,	// (0x0001ca7d) main_cset_text_pane_t6_copy1

0xdd7f,	// (0x0001ca8b) main_cset_text_pane_t7_copy1

0x71ac,	// (0x00015eb8) main_cset_text2_pane_t1_copy1

0x94cd,	// (0x000181d9) main_ncimui_pane

0x3833,	// (0x0001253f) popup_query_ncimui_window_ParamLimits

0x3833,	// (0x0001253f) popup_query_ncimui_window

0xc646,	// (0x0001b352) field_cale_ev2_pane_g4_ParamLimits

0xc646,	// (0x0001b352) field_cale_ev2_pane_g4

0x540e,	// (0x0001411a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x540e,	// (0x0001411a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0001e5b4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0001e5b4) cell_video_dialer_keypad_pane_g

0x5426,	// (0x00014132) cell_video_dialer_keypad_pane_t1

0x945d,	// (0x00018169) bg_popup_window_pane_cp012

0xa64e,	// (0x0001935a) heading_pane_cp06

0xddab,	// (0x0001cab7) ncim_query_content_pane

0x945d,	// (0x00018169) bg_popup_heading_pane_cp01

0xddb3,	// (0x0001cabf) ncim_heading_pane_t1

0xddc1,	// (0x0001cacd) ncim_indicator_popup_pane

0xddd3,	// (0x0001cadf) ncim_query_button_pane

0xdde7,	// (0x0001caf3) ncim_query_content_pane_t1

0xddf9,	// (0x0001cb05) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0001e91a) ncim_query_content_pane_t

0xde33,	// (0x0001cb3f) ncim_query_list_pane

0xde45,	// (0x0001cb51) ncim_query_popup_pane

0xddc1,	// (0x0001cacd) ncim_indicator_popup_pane_ParamLimits

0x75e8,	// (0x000162f4) ncim_query_content_pane_g1_ParamLimits

0x75e8,	// (0x000162f4) ncim_query_content_pane_g1

0xdde7,	// (0x0001caf3) ncim_query_content_pane_t1_ParamLimits

0xddf9,	// (0x0001cb05) ncim_query_content_pane_t2_ParamLimits

0x75f4,	// (0x00016300) ncim_query_content_pane_t3_ParamLimits

0x75f4,	// (0x00016300) ncim_query_content_pane_t3

0x761c,	// (0x00016328) ncim_query_content_pane_t4_ParamLimits

0x761c,	// (0x00016328) ncim_query_content_pane_t4

0x7644,	// (0x00016350) ncim_query_content_pane_t5_ParamLimits

0x7644,	// (0x00016350) ncim_query_content_pane_t5

0xde0b,	// (0x0001cb17) ncim_query_content_pane_t6_ParamLimits

0xde0b,	// (0x0001cb17) ncim_query_content_pane_t6

0xfc0e,	// (0x0001e91a) ncim_query_content_pane_t_ParamLimits

0xde33,	// (0x0001cb3f) ncim_query_list_pane_ParamLimits

0xde45,	// (0x0001cb51) ncim_query_popup_pane_ParamLimits

0xde59,	// (0x0001cb65) wait_bar_pane_cp04

0x945d,	// (0x00018169) input_focus_pane_cp011

0xde61,	// (0x0001cb6d) ncim_query_popup_pane_t1

0xde6f,	// (0x0001cb7b) ncim_list_query_list_pane_ParamLimits

0xde6f,	// (0x0001cb7b) ncim_list_query_list_pane

0x945d,	// (0x00018169) bg_button_pane_cp027

0xde7c,	// (0x0001cb88) ncim_query_button_pane_g1

0x945d,	// (0x00018169) list_highlight_pane_cp012

0xde86,	// (0x0001cb92) ncim_list_query_list_pane_g1

0xde8e,	// (0x0001cb9a) ncim_list_query_list_pane_t1

0xd089,	// (0x0001bd95) cam4_indicators_pane_g3_ParamLimits

0xd089,	// (0x0001bd95) cam4_indicators_pane_g3

0xd104,	// (0x0001be10) vid4_indicators_pane_g5_ParamLimits

0xd104,	// (0x0001be10) vid4_indicators_pane_g5

0xd7eb,	// (0x0001c4f7) vid4_progress_pane_g5_ParamLimits

0xd7eb,	// (0x0001c4f7) vid4_progress_pane_g5

0x74d3,	// (0x000161df) main_ncimui_pane_g1

0x753c,	// (0x00016248) ncimui_group_query_pane_ParamLimits

0x753c,	// (0x00016248) ncimui_group_query_pane

0x7584,	// (0x00016290) ncimui_list_pane_ParamLimits

0x7584,	// (0x00016290) ncimui_list_pane

0x75ab,	// (0x000162b7) ncimui_text_pane_ParamLimits

0x75ab,	// (0x000162b7) ncimui_text_pane

0x766c,	// (0x00016378) ncimui_text_pane_t1_ParamLimits

0x766c,	// (0x00016378) ncimui_text_pane_t1

0xde9c,	// (0x0001cba8) ncimui_list_single_graphic_pane_ParamLimits

0xde9c,	// (0x0001cba8) ncimui_list_single_graphic_pane

0x768a,	// (0x00016396) ncimui_query_pane_ParamLimits

0x768a,	// (0x00016396) ncimui_query_pane

0x945d,	// (0x00018169) list_highlight_pane_cp013

0xdeac,	// (0x0001cbb8) ncim_list_query_list_pane_t1_copy1

0xdeba,	// (0x0001cbc6) ncim_list_single_graphic_pane_g1

0x769d,	// (0x000163a9) ncim_query_button_pane_cp01

0x76a9,	// (0x000163b5) ncim_query_entry_pane_ParamLimits

0x76a9,	// (0x000163b5) ncim_query_entry_pane

0x76bc,	// (0x000163c8) ncimui_query_pane_g1

0x76c8,	// (0x000163d4) ncimui_query_pane_t1_ParamLimits

0x76c8,	// (0x000163d4) ncimui_query_pane_t1

0x94cd,	// (0x000181d9) input_focus_pane_cp012

0xdec2,	// (0x0001cbce) ncim_query_entry_pane_t1

0x9c3c,	// (0x00018948) main_im_pane_ParamLimits

0x94cd,	// (0x000181d9) main_mobtv_pane_ParamLimits

0x94cd,	// (0x000181d9) main_mobtv_pane

0x729c,	// (0x00015fa8) main_cset6_slider_pane_g18_ParamLimits

0x729c,	// (0x00015fa8) main_cset6_slider_pane_g18

0x72a8,	// (0x00015fb4) main_cset6_slider_pane_g19_ParamLimits

0x72a8,	// (0x00015fb4) main_cset6_slider_pane_g19

0xd1ef,	// (0x0001befb) bg_main_mobtv_pane_ParamLimits

0xd1ef,	// (0x0001befb) bg_main_mobtv_pane

0x76e1,	// (0x000163ed) main_mobtv_info_pane

0x76ea,	// (0x000163f6) main_mobtv_loading_pane_ParamLimits

0x76ea,	// (0x000163f6) main_mobtv_loading_pane

0xded4,	// (0x0001cbe0) main_mobtv_pg_channel_list_pane

0xdede,	// (0x0001cbea) main_mobtv_pg_hdr_pane

0x76f7,	// (0x00016403) main_mobtv_programe_curr_pane_ParamLimits

0x76f7,	// (0x00016403) main_mobtv_programe_curr_pane

0x7704,	// (0x00016410) main_mobtv_programe_next_pane_ParamLimits

0x7704,	// (0x00016410) main_mobtv_programe_next_pane

0xdee7,	// (0x0001cbf3) popup_mobtv_noti_window

0xc357,	// (0x0001b063) main_tv_pg_hdr_pane_g1

0xdeef,	// (0x0001cbfb) main_tv_pg_hdr_pane_g2

0xdef7,	// (0x0001cc03) main_tv_pg_hdr_pane_g3

0xdeff,	// (0x0001cc0b) main_tv_pg_hdr_pane_g4

0xdf07,	// (0x0001cc13) main_tv_pg_hdr_pane_g5

0xdf11,	// (0x0001cc1d) main_tv_pg_hdr_pane_g6

0xdf1b,	// (0x0001cc27) main_tv_pg_hdr_pane_g7

0xdf25,	// (0x0001cc31) main_tv_pg_hdr_pane_g8

0xdf2f,	// (0x0001cc3b) main_tv_pg_hdr_pane_g9

0xdf39,	// (0x0001cc45) main_tv_pg_hdr_pane_g10

0xdf43,	// (0x0001cc4f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0001e927) main_tv_pg_hdr_pane_g

0xdf4d,	// (0x0001cc59) main_tv_pg_hdr_pane_t1

0xdf5b,	// (0x0001cc67) main_tv_pg_hdr_pane_t2

0xdf69,	// (0x0001cc75) main_tv_pg_hdr_pane_t3

0xdf79,	// (0x0001cc85) main_tv_pg_hdr_pane_t4

0xdf89,	// (0x0001cc95) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0001e93e) main_tv_pg_hdr_pane_t

0xdf99,	// (0x0001cca5) single_mobtv_pg_channel_pane_ParamLimits

0xdf99,	// (0x0001cca5) single_mobtv_pg_channel_pane

0xdfab,	// (0x0001ccb7) single_mobtv_pg_channel_table_pane

0xa227,	// (0x00018f33) single_mobtv_pg_channel_thumb_pane

0xdfb4,	// (0x0001ccc0) single_tv_pg_channel_pane_g1

0xdfbd,	// (0x0001ccc9) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0001e949) single_tv_pg_channel_pane_g

0xc5a5,	// (0x0001b2b1) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc5a5,	// (0x0001b2b1) bg_single_mobtv_pg_channel_thumb_pane

0xdfc6,	// (0x0001ccd2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfc6,	// (0x0001ccd2) single_mobtv_pg_channel_thumb_pane_g1

0xdfd4,	// (0x0001cce0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfd4,	// (0x0001cce0) single_mobtv_pg_channel_thumb_pane_g2

0xdfe0,	// (0x0001ccec) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfe0,	// (0x0001ccec) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0001e94e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0001e94e) single_mobtv_pg_channel_thumb_pane_g

0xdfec,	// (0x0001ccf8) single_mobtv_pg_channel_thumb_pane_t1

0xdffa,	// (0x0001cd06) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0001e955) single_mobtv_pg_channel_thumb_pane_t

0xc357,	// (0x0001b063) bg_single_mobtv_pg_channel_table_pane_g1

0xc357,	// (0x0001b063) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0001e3fb) bg_single_mobtv_pg_channel_table_pane_g

0xe008,	// (0x0001cd14) single_mobtv_pg_channel_table_pane_t1

0xe016,	// (0x0001cd22) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0001e95a) single_mobtv_pg_channel_table_pane_t

0x7719,	// (0x00016425) main_mobtv_info_pane_g1_ParamLimits

0x7719,	// (0x00016425) main_mobtv_info_pane_g1

0x7737,	// (0x00016443) main_mobtv_info_pane_t1_ParamLimits

0x7737,	// (0x00016443) main_mobtv_info_pane_t1

0x77af,	// (0x000164bb) main_mobtv_info_pane_t2_ParamLimits

0x77af,	// (0x000164bb) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0001e964) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0001e964) main_mobtv_info_pane_t

0x783e,	// (0x0001654a) wait_bar_pane_cp05

0x7850,	// (0x0001655c) main_mobtv_loading_pane_g1_ParamLimits

0x7850,	// (0x0001655c) main_mobtv_loading_pane_g1

0x7863,	// (0x0001656f) main_mobtv_loading_pane_g2_ParamLimits

0x7863,	// (0x0001656f) main_mobtv_loading_pane_g2

0x786f,	// (0x0001657b) main_mobtv_loading_pane_g3_ParamLimits

0x786f,	// (0x0001657b) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0001e96b) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0001e96b) main_mobtv_loading_pane_g

0xe024,	// (0x0001cd30) main_mobtv_loading_pane_t1_ParamLimits

0xe024,	// (0x0001cd30) main_mobtv_loading_pane_t1

0xe03c,	// (0x0001cd48) main_mobtv_loading_pane_t2_ParamLimits

0xe03c,	// (0x0001cd48) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0001e972) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0001e972) main_mobtv_loading_pane_t

0x7882,	// (0x0001658e) wait_bar_pane_cp06_ParamLimits

0x7882,	// (0x0001658e) wait_bar_pane_cp06

0xe060,	// (0x0001cd6c) main_mobtv_programe_curr_pane_t1

0xe06e,	// (0x0001cd7a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0001e977) main_mobtv_programe_curr_pane_t

0xe07c,	// (0x0001cd88) main_mobtv_programe_next_pane_t1

0xe08a,	// (0x0001cd96) main_mobtv_programe_next_pane_t2

0xe098,	// (0x0001cda4) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0001e97c) main_mobtv_programe_next_pane_t

0x945d,	// (0x00018169) bg_popup_mobtv_noti_window_pane

0xe0a6,	// (0x0001cdb2) popup_mobtv_noti_window_g1

0xe0ae,	// (0x0001cdba) popup_mobtv_noti_window_t1

0xe0bc,	// (0x0001cdc8) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0001e983) popup_mobtv_noti_window_t

0xc357,	// (0x0001b063) bg_popup_mobtv_noti_window_pane_g1

0x945d,	// (0x00018169) sc_clock_pane

0x945d,	// (0x00018169) main_fs_bigclock_pane

0x6ef9,	// (0x00015c05) blid2_tripm_pane_t4_ParamLimits

0x6ef9,	// (0x00015c05) blid2_tripm_pane_t4

0x7891,	// (0x0001659d) sc_clock_pane_g1_ParamLimits

0x7891,	// (0x0001659d) sc_clock_pane_g1

0x78a3,	// (0x000165af) sc_clock_pane_t1_ParamLimits

0x78a3,	// (0x000165af) sc_clock_pane_t1

0x78c5,	// (0x000165d1) sc_clock_pane_t2_ParamLimits

0x78c5,	// (0x000165d1) sc_clock_pane_t2

0x78dd,	// (0x000165e9) sc_clock_pane_t3_ParamLimits

0x78dd,	// (0x000165e9) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0001e988) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0001e988) sc_clock_pane_t

0x890d,	// (0x00017619) main_fs_bigclock_indicator_pane_ParamLimits

0x890d,	// (0x00017619) main_fs_bigclock_indicator_pane

0x7983,	// (0x0001668f) main_fs_bigclock_pane_g1_ParamLimits

0x7983,	// (0x0001668f) main_fs_bigclock_pane_g1

0x8919,	// (0x00017625) main_fs_bigclock_pane_t1_ParamLimits

0x8919,	// (0x00017625) main_fs_bigclock_pane_t1

0x892b,	// (0x00017637) main_fs_bigclock_pane_t2_ParamLimits

0x892b,	// (0x00017637) main_fs_bigclock_pane_t2

0x893f,	// (0x0001764b) main_fs_bigclock_pane_t3_ParamLimits

0x893f,	// (0x0001764b) main_fs_bigclock_pane_t3

0x0002,

0xfe81,	// (0x0001eb8d) main_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0001eb8d) main_fs_bigclock_pane_t

0xec9a,	// (0x0001d9a6) main_fs_bigclock_indicator_pane_g1

0xdddb,	// (0x0001cae7) ncim_query_content_pane_g2_ParamLimits

0xdddb,	// (0x0001cae7) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0001e915) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0001e915) ncim_query_content_pane_g

0x78f6,	// (0x00016602) sc_clock_pane_t4_ParamLimits

0x78f6,	// (0x00016602) sc_clock_pane_t4

0x94cd,	// (0x000181d9) main_radioblah_pane

0xcfd2,	// (0x0001bcde) cell_call4_button_pane_t1_copy1_ParamLimits

0xcfd2,	// (0x0001bcde) cell_call4_button_pane_t1_copy1

0x74eb,	// (0x000161f7) main_ncimui_pane_t1_ParamLimits

0x74eb,	// (0x000161f7) main_ncimui_pane_t1

0x7505,	// (0x00016211) main_ncimui_pane_t2_ParamLimits

0x7505,	// (0x00016211) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0001e90e) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0001e90e) main_ncimui_pane_t

0xe202,	// (0x0001cf0e) main_radioblah_anim_pane_ParamLimits

0xe202,	// (0x0001cf0e) main_radioblah_anim_pane

0xe213,	// (0x0001cf1f) main_radioblah_info_pane_ParamLimits

0xe213,	// (0x0001cf1f) main_radioblah_info_pane

0xe227,	// (0x0001cf33) main_radioblah_pane_t1_ParamLimits

0xe227,	// (0x0001cf33) main_radioblah_pane_t1

0xe243,	// (0x0001cf4f) main_radioblah_pane_t2_ParamLimits

0xe243,	// (0x0001cf4f) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0001e9a9) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0001e9a9) main_radioblah_pane_t

0x79e2,	// (0x000166ee) main_radioblah_rocker_ctrl_pane_ParamLimits

0x79e2,	// (0x000166ee) main_radioblah_rocker_ctrl_pane

0xe28b,	// (0x0001cf97) main_radioblah_info_pane_t1_ParamLimits

0xe28b,	// (0x0001cf97) main_radioblah_info_pane_t1

0x7a3a,	// (0x00016746) main_radioblah_info_pane_t2_ParamLimits

0x7a3a,	// (0x00016746) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0001e9b2) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0001e9b2) main_radioblah_info_pane_t

0xc357,	// (0x0001b063) main_radioblah_rocker_ctrl_pane_g1

0x7aea,	// (0x000167f6) main_radioblah_rocker_ctrl_pane_g2

0x7af2,	// (0x000167fe) main_radioblah_rocker_ctrl_pane_g3

0x7afa,	// (0x00016806) main_radioblah_rocker_ctrl_pane_g4

0x7b02,	// (0x0001680e) main_radioblah_rocker_ctrl_pane_g5

0x7b0a,	// (0x00016816) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0001e9bb) main_radioblah_rocker_ctrl_pane_g

0x71ac,	// (0x00015eb8) main_cset_text2_pane_t1_copy1_ParamLimits

0xd05c,	// (0x0001bd68) cam4_image_uncrop_qvga_pane

0xd0af,	// (0x0001bdbb) vid4_image_uncrop_qcif_pane

0xd9e2,	// (0x0001c6ee) cam6_image_uncrop_qvga_pane_ParamLimits

0xd9e2,	// (0x0001c6ee) cam6_image_uncrop_qvga_pane

0xdaaa,	// (0x0001c7b6) vid6_image_uncrop_qcif_pane_ParamLimits

0xdaaa,	// (0x0001c7b6) vid6_image_uncrop_qcif_pane

0x945d,	// (0x00018169) bg_popup_preview_window_pane_cp03

0xdd8d,	// (0x0001ca99) list_cset_text2_pane

0xdd95,	// (0x0001caa1) main_cset6_text2_pane_g1

0xdd9d,	// (0x0001caa9) main_cset6_text2_pane_t1

0xe9a7,	// (0x0001d6b3) list_cset_text2_pane_t1_ParamLimits

0xe9a7,	// (0x0001d6b3) list_cset_text2_pane_t1

0x94cd,	// (0x000181d9) main_radioblah_pane_ParamLimits

0x782a,	// (0x00016536) main_mobtv_info_pane_t3_ParamLimits

0x782a,	// (0x00016536) main_mobtv_info_pane_t3

0x79d0,	// (0x000166dc) main_radioblah_pane_g1

0x7a0a,	// (0x00016716) main_radioblah_info_pane_g1

0x7a8f,	// (0x0001679b) main_radioblah_info_pane_t3_ParamLimits

0x7a8f,	// (0x0001679b) main_radioblah_info_pane_t3

0x2228,	// (0x00010f34) highlight_cell_cale_month_pane_ParamLimits

0x2228,	// (0x00010f34) highlight_cell_cale_month_pane

0x945d,	// (0x00018169) main_phob_fisheye_pane

0xc6f5,	// (0x0001b401) scroll_pane_cp0031_ParamLimits

0xc6f5,	// (0x0001b401) scroll_pane_cp0031

0xdbb8,	// (0x0001c8c4) wait_bar_pane_cp08_ParamLimits

0x722e,	// (0x00015f3a) cset_list_set_pane_copy1_ParamLimits

0xe2c5,	// (0x0001cfd1) highlight_cell_cale_month_pane_g1

0x7b12,	// (0x0001681e) highlight_cell_cale_month_pane_t1

0xd7ae,	// (0x0001c4ba) list_gen_pane_cp01

0xd2f9,	// (0x0001c005) scroll_pane_01

0x7b20,	// (0x0001682c) list_single_double_fisheye_pane

0x7b29,	// (0x00016835) list_double_fisheye_pane_g1_ParamLimits

0x7b29,	// (0x00016835) list_double_fisheye_pane_g1

0x7b35,	// (0x00016841) list_double_fisheye_pane_g2_ParamLimits

0x7b35,	// (0x00016841) list_double_fisheye_pane_g2

0x7b49,	// (0x00016855) list_double_fisheye_pane_g3_ParamLimits

0x7b49,	// (0x00016855) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0001e9c8) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0001e9c8) list_double_fisheye_pane_g

0x7b72,	// (0x0001687e) list_double_fisheye_pane_t1_ParamLimits

0x7b72,	// (0x0001687e) list_double_fisheye_pane_t1

0x7b8d,	// (0x00016899) list_double_fisheye_pane_t2_ParamLimits

0x7b8d,	// (0x00016899) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0001e9d3) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0001e9d3) list_double_fisheye_pane_t

0x945d,	// (0x00018169) main_call5_pane

0x7921,	// (0x0001662d) sc_swipe_pane_ParamLimits

0x7921,	// (0x0001662d) sc_swipe_pane

0x7bc2,	// (0x000168ce) call5_image_pane_ParamLimits

0x7bc2,	// (0x000168ce) call5_image_pane

0x7bdf,	// (0x000168eb) call5_swipe_1_pane_ParamLimits

0x7bdf,	// (0x000168eb) call5_swipe_1_pane

0x7bf2,	// (0x000168fe) call5_swipe_2_pane_ParamLimits

0x7bf2,	// (0x000168fe) call5_swipe_2_pane

0x7c1d,	// (0x00016929) popup_call5_audio_first_window_ParamLimits

0x7c1d,	// (0x00016929) popup_call5_audio_first_window

0xc5a5,	// (0x0001b2b1) call5_swipe_1_pane_g1_ParamLimits

0xc5a5,	// (0x0001b2b1) call5_swipe_1_pane_g1

0xe2cd,	// (0x0001cfd9) call5_swipe_1_pane_g2_ParamLimits

0xe2cd,	// (0x0001cfd9) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0001e9d8) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0001e9d8) call5_swipe_1_pane_g

0xe2d9,	// (0x0001cfe5) call5_swipe_1_pane_t1_ParamLimits

0xe2d9,	// (0x0001cfe5) call5_swipe_1_pane_t1

0xc5a5,	// (0x0001b2b1) call5_swipe_2_pane_g1_ParamLimits

0xc5a5,	// (0x0001b2b1) call5_swipe_2_pane_g1

0xe2ee,	// (0x0001cffa) call5_swipe_2_pane_g2_ParamLimits

0xe2ee,	// (0x0001cffa) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0001e9dd) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0001e9dd) call5_swipe_2_pane_g

0xe2fa,	// (0x0001d006) call5_swipe_2_pane_t1_ParamLimits

0xe2fa,	// (0x0001d006) call5_swipe_2_pane_t1

0xe30f,	// (0x0001d01b) sc_swipe_pane_g1_ParamLimits

0xe30f,	// (0x0001d01b) sc_swipe_pane_g1

0xe31c,	// (0x0001d028) sc_swipe_pane_g2_ParamLimits

0xe31c,	// (0x0001d028) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0001e9e2) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0001e9e2) sc_swipe_pane_g

0xe328,	// (0x0001d034) sc_swipe_pane_t1_ParamLimits

0xe328,	// (0x0001d034) sc_swipe_pane_t1

0x945d,	// (0x00018169) main_cmail_launcher_pane

0x7c2e,	// (0x0001693a) aid_size_cell_cmail_l_ParamLimits

0x7c2e,	// (0x0001693a) aid_size_cell_cmail_l

0x7c48,	// (0x00016954) grid_cmail_l_pane_ParamLimits

0x7c48,	// (0x00016954) grid_cmail_l_pane

0x7c62,	// (0x0001696e) cell_cmail_l_pane_ParamLimits

0x7c62,	// (0x0001696e) cell_cmail_l_pane

0x7c88,	// (0x00016994) cell_cmail_l_pane_g1_ParamLimits

0x7c88,	// (0x00016994) cell_cmail_l_pane_g1

0x7c99,	// (0x000169a5) cell_cmail_l_pane_t1_ParamLimits

0x7c99,	// (0x000169a5) cell_cmail_l_pane_t1

0xe33d,	// (0x0001d049) cell_cmail_l_pane_t2_ParamLimits

0xe33d,	// (0x0001d049) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0001e9e7) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0001e9e7) cell_cmail_l_pane_t

0x94cd,	// (0x000181d9) grid_highlight_pane_cp018_ParamLimits

0x94cd,	// (0x000181d9) grid_highlight_pane_cp018

0x04df,	// (0x0000f1eb) main2_pane_ParamLimits

0x04df,	// (0x0000f1eb) main2_pane

0x9d15,	// (0x00018a21) popup_sp_fs_action_menu_bg_pane_g1

0x9d1d,	// (0x00018a29) popup_sp_fs_action_menu_bg_pane_g2

0x9d25,	// (0x00018a31) popup_sp_fs_action_menu_bg_pane_g3

0x9d2d,	// (0x00018a39) popup_sp_fs_action_menu_bg_pane_g4

0x9d35,	// (0x00018a41) popup_sp_fs_action_menu_bg_pane_g5

0x9d3d,	// (0x00018a49) popup_sp_fs_action_menu_bg_pane_g6

0x9d45,	// (0x00018a51) popup_sp_fs_action_menu_bg_pane_g7

0x9d4d,	// (0x00018a59) popup_sp_fs_action_menu_bg_pane_g8

0x9d55,	// (0x00018a61) popup_sp_fs_action_menu_bg_pane_g9

0x9d5d,	// (0x00018a69) popup_sp_fs_action_menu_bg_pane_g10

0x9d5d,	// (0x00018a69) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0001de96) popup_sp_fs_action_menu_bg_pane_g

0x13d7,	// (0x000100e3) list_medium_line_x2_t3_g3_g1_ParamLimits

0x13d7,	// (0x000100e3) list_medium_line_x2_t3_g3_g1

0x13e3,	// (0x000100ef) list_medium_line_x2_t3_g3_g2_ParamLimits

0x13e3,	// (0x000100ef) list_medium_line_x2_t3_g3_g2

0x13ef,	// (0x000100fb) list_medium_line_x2_t3_g3_g3_ParamLimits

0x13ef,	// (0x000100fb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0001df44) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0001df44) list_medium_line_x2_t3_g3_g

0x13fb,	// (0x00010107) list_medium_line_x2_t3_g3_t1_ParamLimits

0x13fb,	// (0x00010107) list_medium_line_x2_t3_g3_t1

0x1410,	// (0x0001011c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1410,	// (0x0001011c) list_medium_line_x2_t3_g3_t2

0x1424,	// (0x00010130) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1424,	// (0x00010130) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0001df4b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0001df4b) list_medium_line_x2_t3_g3_t

0x13d7,	// (0x000100e3) list_medium_line_x2_t3_g2_g1_ParamLimits

0x13d7,	// (0x000100e3) list_medium_line_x2_t3_g2_g1

0x13ef,	// (0x000100fb) list_medium_line_x2_t3_g2_g2_ParamLimits

0x13ef,	// (0x000100fb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0001df52) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0001df52) list_medium_line_x2_t3_g2_g

0x1439,	// (0x00010145) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1439,	// (0x00010145) list_medium_line_x2_t3_g2_t1

0x144f,	// (0x0001015b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x144f,	// (0x0001015b) list_medium_line_x2_t3_g2_t2

0x1461,	// (0x0001016d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1461,	// (0x0001016d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0001df57) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0001df57) list_medium_line_x2_t3_g2_t

0x13d7,	// (0x000100e3) list_medium_line_x2_t4_g4_g1_ParamLimits

0x13d7,	// (0x000100e3) list_medium_line_x2_t4_g4_g1

0x147f,	// (0x0001018b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x147f,	// (0x0001018b) list_medium_line_x2_t4_g4_g2

0x13e3,	// (0x000100ef) list_medium_line_x2_t4_g4_g3_ParamLimits

0x13e3,	// (0x000100ef) list_medium_line_x2_t4_g4_g3

0x148b,	// (0x00010197) list_medium_line_x2_t4_g4_g4_ParamLimits

0x148b,	// (0x00010197) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0001df5e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0001df5e) list_medium_line_x2_t4_g4_g

0x1497,	// (0x000101a3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1497,	// (0x000101a3) list_medium_line_x2_t4_g4_t1

0x14b1,	// (0x000101bd) list_medium_line_x2_t4_g4_t2_ParamLimits

0x14b1,	// (0x000101bd) list_medium_line_x2_t4_g4_t2

0x14c7,	// (0x000101d3) list_medium_line_x2_t4_g4_t3_ParamLimits

0x14c7,	// (0x000101d3) list_medium_line_x2_t4_g4_t3

0x14dc,	// (0x000101e8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x14dc,	// (0x000101e8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0001df67) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0001df67) list_medium_line_x2_t4_g4_t

0x13d7,	// (0x000100e3) list_medium_line_x2_t2_g4_g1_ParamLimits

0x13d7,	// (0x000100e3) list_medium_line_x2_t2_g4_g1

0x147f,	// (0x0001018b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x147f,	// (0x0001018b) list_medium_line_x2_t2_g4_g2

0x13e3,	// (0x000100ef) list_medium_line_x2_t2_g4_g3_ParamLimits

0x13e3,	// (0x000100ef) list_medium_line_x2_t2_g4_g3

0x13ef,	// (0x000100fb) list_medium_line_x2_t2_g4_g4_ParamLimits

0x13ef,	// (0x000100fb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0001dfce) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0001dfce) list_medium_line_x2_t2_g4_g

0x224e,	// (0x00010f5a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x224e,	// (0x00010f5a) list_medium_line_x2_t2_g4_t1

0x1424,	// (0x00010130) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1424,	// (0x00010130) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0001dfd7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0001dfd7) list_medium_line_x2_t2_g4_t

0x13d7,	// (0x000100e3) list_medium_line_x2_t2_g3_g1_ParamLimits

0x13d7,	// (0x000100e3) list_medium_line_x2_t2_g3_g1

0x13e3,	// (0x000100ef) list_medium_line_x2_t2_g3_g2_ParamLimits

0x13e3,	// (0x000100ef) list_medium_line_x2_t2_g3_g2

0x13ef,	// (0x000100fb) list_medium_line_x2_t2_g3_g3_ParamLimits

0x13ef,	// (0x000100fb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0001df44) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0001df44) list_medium_line_x2_t2_g3_g

0x2263,	// (0x00010f6f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2263,	// (0x00010f6f) list_medium_line_x2_t2_g3_t1

0x1424,	// (0x00010130) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1424,	// (0x00010130) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0001dfdc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0001dfdc) list_medium_line_x2_t2_g3_t

0x23b7,	// (0x000110c3) main_sp_fs_list_pane_ParamLimits

0x23b7,	// (0x000110c3) main_sp_fs_list_pane

0xd20b,	// (0x0001bf17) sp_fs_scroll_pane_ParamLimits

0xd20b,	// (0x0001bf17) sp_fs_scroll_pane

0x23c3,	// (0x000110cf) list_medium_line_x2_t3_t1

0x23d3,	// (0x000110df) list_medium_line_x2_t3_t2

0x23e1,	// (0x000110ed) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0001e027) list_medium_line_x2_t3_t

0x23ef,	// (0x000110fb) list_medium_line_x3_t4_t1

0x23ff,	// (0x0001110b) list_medium_line_x3_t4_t2

0x240d,	// (0x00011119) list_medium_line_x3_t4_t3

0x23e1,	// (0x000110ed) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0001e02e) list_medium_line_x3_t4_t

0x241b,	// (0x00011127) list_medium_line_x4_t5_t1

0x242b,	// (0x00011137) list_medium_line_x4_t5_t2

0x240d,	// (0x00011119) list_medium_line_x4_t5_t3

0x2439,	// (0x00011145) list_medium_line_x4_t5_t4

0x23e1,	// (0x000110ed) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0001e037) list_medium_line_x4_t5_t

0x13d7,	// (0x000100e3) list_medium_line_t4_g4_g1_ParamLimits

0x13d7,	// (0x000100e3) list_medium_line_t4_g4_g1

0x148b,	// (0x00010197) list_medium_line_t4_g4_g2_ParamLimits

0x148b,	// (0x00010197) list_medium_line_t4_g4_g2

0x2447,	// (0x00011153) list_medium_line_t4_g4_g3_ParamLimits

0x2447,	// (0x00011153) list_medium_line_t4_g4_g3

0x13ef,	// (0x000100fb) list_medium_line_t4_g4_g4_ParamLimits

0x13ef,	// (0x000100fb) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0001e042) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0001e042) list_medium_line_t4_g4_g

0x2453,	// (0x0001115f) list_medium_line_t4_g4_t1_ParamLimits

0x2453,	// (0x0001115f) list_medium_line_t4_g4_t1

0x2468,	// (0x00011174) list_medium_line_t4_g4_t2_ParamLimits

0x2468,	// (0x00011174) list_medium_line_t4_g4_t2

0x247e,	// (0x0001118a) list_medium_line_t4_g4_t3_ParamLimits

0x247e,	// (0x0001118a) list_medium_line_t4_g4_t3

0x1424,	// (0x00010130) list_medium_line_t4_g4_t4_ParamLimits

0x1424,	// (0x00010130) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0001e04b) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0001e04b) list_medium_line_t4_g4_t

0x2557,	// (0x00011263) chi_dic_find_pane_g1

0x3603,	// (0x0001230f) main_tport_pane

0xd44d,	// (0x0001c159) list_medium_line_plain_t1

0x6604,	// (0x00015310) list_medium_line_t2_g2_g1_ParamLimits

0x6604,	// (0x00015310) list_medium_line_t2_g2_g1

0x6610,	// (0x0001531c) list_medium_line_t2_g2_g2_ParamLimits

0x6610,	// (0x0001531c) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0001e71f) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0001e71f) list_medium_line_t2_g2_g

0x661c,	// (0x00015328) list_medium_line_t2_g2_t1_ParamLimits

0x661c,	// (0x00015328) list_medium_line_t2_g2_t1

0x6636,	// (0x00015342) list_medium_line_t2_g2_t2_ParamLimits

0x6636,	// (0x00015342) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0001e724) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0001e724) list_medium_line_t2_g2_t

0xd822,	// (0x0001c52e) aid_sp_fs_list_icon_a_sm

0xd82a,	// (0x0001c536) aid_sp_fs_list_icon_d

0xd832,	// (0x0001c53e) aid_sp_fs_text_primary

0xd83b,	// (0x0001c547) aid_sp_fs_text_secondary

0x6ca6,	// (0x000159b2) list_medium_line

0x6ca6,	// (0x000159b2) list_medium_line_g2

0x6ca6,	// (0x000159b2) list_medium_line_g3

0x6ca6,	// (0x000159b2) list_medium_line_plain

0x6ca6,	// (0x000159b2) list_medium_line_plain_t2

0x6ca6,	// (0x000159b2) list_medium_line_plain_t3

0x6ca6,	// (0x000159b2) list_medium_line_right_icon

0x6ca6,	// (0x000159b2) list_medium_line_right_iconx2

0x6ca6,	// (0x000159b2) list_medium_line_t2

0x6ca6,	// (0x000159b2) list_medium_line_t2_g2

0x6ca6,	// (0x000159b2) list_medium_line_t2_g3

0x6ca6,	// (0x000159b2) list_medium_line_t2_right_icon

0x6ca6,	// (0x000159b2) list_medium_line_t2_right_iconx2

0x6ca6,	// (0x000159b2) list_medium_line_t3

0x6ca6,	// (0x000159b2) list_medium_line_t3_g2

0x6ca6,	// (0x000159b2) list_medium_line_t3_g3

0x6ca6,	// (0x000159b2) list_medium_line_t3_right_iconx2

0x6caf,	// (0x000159bb) list_medium_line_t4_g4

0x6cb8,	// (0x000159c4) list_medium_line_x2

0x6cb8,	// (0x000159c4) list_medium_line_x2_t2_g2

0x6cb8,	// (0x000159c4) list_medium_line_x2_t2_g3

0x6cb8,	// (0x000159c4) list_medium_line_x2_t2_g4

0x6cb8,	// (0x000159c4) list_medium_line_x2_t3

0x6cb8,	// (0x000159c4) list_medium_line_x2_t3_g2

0x6cb8,	// (0x000159c4) list_medium_line_x2_t3_g3

0x6cb8,	// (0x000159c4) list_medium_line_x2_t3_g4

0x6cb8,	// (0x000159c4) list_medium_line_x2_t4_g2

0x6cb8,	// (0x000159c4) list_medium_line_x2_t4_g4

0x6cc1,	// (0x000159cd) list_medium_line_x3

0x6cc1,	// (0x000159cd) list_medium_line_x3_t4

0x6cc1,	// (0x000159cd) list_medium_line_x3_t4_g4

0x6caf,	// (0x000159bb) list_medium_line_x4_t4

0x6caf,	// (0x000159bb) list_medium_line_x4_t4_g7

0x6caf,	// (0x000159bb) list_medium_line_x4_t5

0x6cca,	// (0x000159d6) list_single_fs_dyc_pane_ParamLimits

0x6cca,	// (0x000159d6) list_single_fs_dyc_pane

0x13d7,	// (0x000100e3) list_medium_line_x4_t4_g7_g1_ParamLimits

0x13d7,	// (0x000100e3) list_medium_line_x4_t4_g7_g1

0x73f0,	// (0x000160fc) list_medium_line_x4_t4_g7_g2_ParamLimits

0x73f0,	// (0x000160fc) list_medium_line_x4_t4_g7_g2

0x73fc,	// (0x00016108) list_medium_line_x4_t4_g7_g3_ParamLimits

0x73fc,	// (0x00016108) list_medium_line_x4_t4_g7_g3

0x740b,	// (0x00016117) list_medium_line_x4_t4_g7_g4_ParamLimits

0x740b,	// (0x00016117) list_medium_line_x4_t4_g7_g4

0x7417,	// (0x00016123) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7417,	// (0x00016123) list_medium_line_x4_t4_g7_g5

0x7426,	// (0x00016132) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7426,	// (0x00016132) list_medium_line_x4_t4_g7_g6

0x7435,	// (0x00016141) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7435,	// (0x00016141) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0001e8ef) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0001e8ef) list_medium_line_x4_t4_g7_g

0x7441,	// (0x0001614d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7441,	// (0x0001614d) list_medium_line_x4_t4_g7_t1

0x7456,	// (0x00016162) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7456,	// (0x00016162) list_medium_line_x4_t4_g7_t2

0x746b,	// (0x00016177) list_medium_line_x4_t4_g7_t3_ParamLimits

0x746b,	// (0x00016177) list_medium_line_x4_t4_g7_t3

0x7480,	// (0x0001618c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7480,	// (0x0001618c) list_medium_line_x4_t4_g7_t4

0x7492,	// (0x0001619e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7492,	// (0x0001619e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0001e8fe) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0001e8fe) list_medium_line_x4_t4_g7_t

0x74a4,	// (0x000161b0) list_single_dyc_row_pane_ParamLimits

0x74a4,	// (0x000161b0) list_single_dyc_row_pane

0x7baf,	// (0x000168bb) call5_gesture_pane_ParamLimits

0x7baf,	// (0x000168bb) call5_gesture_pane

0x7c05,	// (0x00016911) call5_windows_pane_ParamLimits

0x7c05,	// (0x00016911) call5_windows_pane

0x7caf,	// (0x000169bb) call5_swipe_1_pane_cp_ParamLimits

0x7caf,	// (0x000169bb) call5_swipe_1_pane_cp

0x7cbb,	// (0x000169c7) call5_swipe_2_pane_cp_ParamLimits

0x7cbb,	// (0x000169c7) call5_swipe_2_pane_cp

0x9eb5,	// (0x00018bc1) call5_image_pane_cp

0x7cc7,	// (0x000169d3) popup_call5_audio_first_window_cp_ParamLimits

0x7cc7,	// (0x000169d3) popup_call5_audio_first_window_cp

0xe30f,	// (0x0001d01b) call5_swipe_1_pane_g1_cp_ParamLimits

0xe30f,	// (0x0001d01b) call5_swipe_1_pane_g1_cp

0xe34f,	// (0x0001d05b) call5_swipe_1_pane_g2_cp

0xe328,	// (0x0001d034) call5_swipe_1_pane_t1_cp_ParamLimits

0xe328,	// (0x0001d034) call5_swipe_1_pane_t1_cp

0xe30f,	// (0x0001d01b) call5_swipe_2_pane_g1_cp_ParamLimits

0xe30f,	// (0x0001d01b) call5_swipe_2_pane_g1_cp

0xe357,	// (0x0001d063) call5_swipe_2_pane_g2_cp

0xe35f,	// (0x0001d06b) call5_swipe_2_pane_t1_cp_ParamLimits

0xe35f,	// (0x0001d06b) call5_swipe_2_pane_t1_cp

0x94cd,	// (0x000181d9) main_sp_fs_email_pane

0xe374,	// (0x0001d080) main_sp_fs_listscroll_pane_te

0x7cd5,	// (0x000169e1) popup_sp_fs_action_menu_pane_ParamLimits

0x7cd5,	// (0x000169e1) popup_sp_fs_action_menu_pane

0xc357,	// (0x0001b063) bg_sp_fs_ctrlbar_pane_g1

0xe37d,	// (0x0001d089) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe386,	// (0x0001d092) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe38f,	// (0x0001d09b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc357,	// (0x0001b063) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0001e9ec) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc13c,	// (0x0001ae48) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc13c,	// (0x0001ae48) bg_sp_fs_ctrlbar_ddmenu_pane

0xe398,	// (0x0001d0a4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe398,	// (0x0001d0a4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3a4,	// (0x0001d0b0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3a4,	// (0x0001d0b0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0001e9f5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0001e9f5) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3b0,	// (0x0001d0bc) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3b0,	// (0x0001d0bc) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d19,	// (0x00016a25) list_medium_line_t2_right_icon_g1

0x7d21,	// (0x00016a2d) list_medium_line_t2_right_icon_t1

0x7d31,	// (0x00016a3d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0001e9fa) list_medium_line_t2_right_icon_t

0xbe3c,	// (0x0001ab48) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbe3c,	// (0x0001ab48) bg_sp_fs_ctrlbar_pane

0x7d8b,	// (0x00016a97) main_sp_fs_ctrlbar_button_pane_cp01

0x7d95,	// (0x00016aa1) main_sp_fs_ctrlbar_ddmenu_pane

0xe402,	// (0x0001d10e) main_sp_fs_ctrlbar_pane_g1

0xe40e,	// (0x0001d11a) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0001e9ff) main_sp_fs_ctrlbar_pane_g

0xe41a,	// (0x0001d126) main_sp_fs_ctrlbar_pane_t1

0x7d9f,	// (0x00016aab) main_sp_fs_ctrlbar_pane

0x7dc3,	// (0x00016acf) main_sp_fs_listscroll_pane_te_cp01

0x7de3,	// (0x00016aef) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7de3,	// (0x00016aef) popup_sp_fs_action_menu_pane_cp01

0x94cd,	// (0x000181d9) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x94cd,	// (0x000181d9) bg_sp_fs_highlight_list_pane_cp01

0xe44a,	// (0x0001d156) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe44a,	// (0x0001d156) sp_fs_action_menu_list_gene_pane_g1

0xe459,	// (0x0001d165) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe459,	// (0x0001d165) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0001ea09) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0001ea09) sp_fs_action_menu_list_gene_pane_g

0xe466,	// (0x0001d172) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe466,	// (0x0001d172) sp_fs_action_menu_list_gene_pane_t1

0xe47e,	// (0x0001d18a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe47e,	// (0x0001d18a) sp_fs_action_menu_list_gene_pane

0xe49d,	// (0x0001d1a9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe49d,	// (0x0001d1a9) popup_sp_fs_action_menu_bg_pane

0xe4ab,	// (0x0001d1b7) sp_fs_action_menu_list_pane_ParamLimits

0xe4ab,	// (0x0001d1b7) sp_fs_action_menu_list_pane

0x7e13,	// (0x00016b1f) sp_fs_scroll_pane_cp01_ParamLimits

0x7e13,	// (0x00016b1f) sp_fs_scroll_pane_cp01

0x7e39,	// (0x00016b45) list_medium_line_plain_t2_t1

0x7e49,	// (0x00016b55) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0001ea0e) list_medium_line_plain_t2_t

0x7e59,	// (0x00016b65) list_medium_line_plain_t3_t1

0x7e69,	// (0x00016b75) list_medium_line_plain_t3_t2

0x7e77,	// (0x00016b83) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0001ea13) list_medium_line_plain_t3_t

0x13d7,	// (0x000100e3) list_medium_line_x2_t2_g2_g1_ParamLimits

0x13d7,	// (0x000100e3) list_medium_line_x2_t2_g2_g1

0x13ef,	// (0x000100fb) list_medium_line_x2_t2_g2_g2_ParamLimits

0x13ef,	// (0x000100fb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0001df52) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0001df52) list_medium_line_x2_t2_g2_g

0x2453,	// (0x0001115f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2453,	// (0x0001115f) list_medium_line_x2_t2_g2_t1

0x1424,	// (0x00010130) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1424,	// (0x00010130) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0001ea1a) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0001ea1a) list_medium_line_x2_t2_g2_t

0x13d7,	// (0x000100e3) list_medium_line_x2_t4_g2_g1_ParamLimits

0x13d7,	// (0x000100e3) list_medium_line_x2_t4_g2_g1

0x13ef,	// (0x000100fb) list_medium_line_x2_t4_g2_g2_ParamLimits

0x13ef,	// (0x000100fb) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0001df52) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0001df52) list_medium_line_x2_t4_g2_g

0x7e85,	// (0x00016b91) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e85,	// (0x00016b91) list_medium_line_x2_t4_g2_t1

0x7e9f,	// (0x00016bab) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e9f,	// (0x00016bab) list_medium_line_x2_t4_g2_t2

0x7eb5,	// (0x00016bc1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7eb5,	// (0x00016bc1) list_medium_line_x2_t4_g2_t3

0x1424,	// (0x00010130) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1424,	// (0x00010130) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0001ea1f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0001ea1f) list_medium_line_x2_t4_g2_t

0x7eca,	// (0x00016bd6) list_medium_line_t3_right_iconx2_g1

0x7d19,	// (0x00016a25) list_medium_line_t3_right_iconx2_g2

0x7ed2,	// (0x00016bde) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0001ea28) list_medium_line_t3_right_iconx2_g

0x7edc,	// (0x00016be8) list_medium_line_t3_right_iconx2_t1

0x7eec,	// (0x00016bf8) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0001ea2f) list_medium_line_t3_right_iconx2_t

0x13d7,	// (0x000100e3) list_medium_line_x3_t4_g4_g1_ParamLimits

0x13d7,	// (0x000100e3) list_medium_line_x3_t4_g4_g1

0x13e3,	// (0x000100ef) list_medium_line_x3_t4_g4_g2_ParamLimits

0x13e3,	// (0x000100ef) list_medium_line_x3_t4_g4_g2

0x148b,	// (0x00010197) list_medium_line_x3_t4_g4_g3_ParamLimits

0x148b,	// (0x00010197) list_medium_line_x3_t4_g4_g3

0x7efa,	// (0x00016c06) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7efa,	// (0x00016c06) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0001ea34) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0001ea34) list_medium_line_x3_t4_g4_g

0x7f06,	// (0x00016c12) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f06,	// (0x00016c12) list_medium_line_x3_t4_g4_t1

0x7f1d,	// (0x00016c29) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f1d,	// (0x00016c29) list_medium_line_x3_t4_g4_t2

0x7f38,	// (0x00016c44) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7f38,	// (0x00016c44) list_medium_line_x3_t4_g4_t3

0x7f4d,	// (0x00016c59) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f4d,	// (0x00016c59) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0001ea3d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0001ea3d) list_medium_line_x3_t4_g4_t

0x7f6a,	// (0x00016c76) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f6a,	// (0x00016c76) list_single_dyc_row_text_pane_t1

0x7fb3,	// (0x00016cbf) list_single_dyc_row_text_pane_t2_ParamLimits

0x7fb3,	// (0x00016cbf) list_single_dyc_row_text_pane_t2

0xe4cb,	// (0x0001d1d7) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4cb,	// (0x0001d1d7) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3a,	// (0x0001ea46) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0001ea46) list_single_dyc_row_text_pane_t

0xe4ef,	// (0x0001d1fb) list_single_dyc_row_pane_g1_ParamLimits

0xe4ef,	// (0x0001d1fb) list_single_dyc_row_pane_g1

0xe4fb,	// (0x0001d207) list_single_dyc_row_pane_g2_ParamLimits

0xe4fb,	// (0x0001d207) list_single_dyc_row_pane_g2

0xe507,	// (0x0001d213) list_single_dyc_row_pane_g3_ParamLimits

0xe507,	// (0x0001d213) list_single_dyc_row_pane_g3

0xe513,	// (0x0001d21f) list_single_dyc_row_pane_g4_ParamLimits

0xe513,	// (0x0001d21f) list_single_dyc_row_pane_g4

0x0003,

0xfd47,	// (0x0001ea53) list_single_dyc_row_pane_g_ParamLimits

0xfd47,	// (0x0001ea53) list_single_dyc_row_pane_g

0xe51f,	// (0x0001d22b) list_single_dyc_row_text_pane_ParamLimits

0xe51f,	// (0x0001d22b) list_single_dyc_row_text_pane

0x945d,	// (0x00018169) bg_sp_fs_scroll_pane

0xe53e,	// (0x0001d24a) thumb_sp_fs_scroll_pane

0x6604,	// (0x00015310) list_medium_line_g1_ParamLimits

0x6604,	// (0x00015310) list_medium_line_g1

0xe547,	// (0x0001d253) list_medium_line_t1_ParamLimits

0xe547,	// (0x0001d253) list_medium_line_t1

0x13d7,	// (0x000100e3) list_medium_line_x2_g1_ParamLimits

0x13d7,	// (0x000100e3) list_medium_line_x2_g1

0x13e3,	// (0x000100ef) list_medium_line_x2_g2_ParamLimits

0x13e3,	// (0x000100ef) list_medium_line_x2_g2

0x0001,

0xfd50,	// (0x0001ea5c) list_medium_line_x2_g_ParamLimits

0xfd50,	// (0x0001ea5c) list_medium_line_x2_g

0xe55c,	// (0x0001d268) list_medium_line_x2_t1_ParamLimits

0xe55c,	// (0x0001d268) list_medium_line_x2_t1

0x13d7,	// (0x000100e3) list_medium_line_x3_g1_ParamLimits

0x13d7,	// (0x000100e3) list_medium_line_x3_g1

0x13e3,	// (0x000100ef) list_medium_line_x3_g2_ParamLimits

0x13e3,	// (0x000100ef) list_medium_line_x3_g2

0x0001,

0xfd50,	// (0x0001ea5c) list_medium_line_x3_g_ParamLimits

0xfd50,	// (0x0001ea5c) list_medium_line_x3_g

0xe55c,	// (0x0001d268) list_medium_line_x3_t1_ParamLimits

0xe55c,	// (0x0001d268) list_medium_line_x3_t1

0xe572,	// (0x0001d27e) thumb_sp_fs_scroll_pane_g1

0xe57b,	// (0x0001d287) thumb_sp_fs_scroll_pane_g2

0xe584,	// (0x0001d290) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0001ea61) thumb_sp_fs_scroll_pane_g

0xe572,	// (0x0001d27e) bg_sp_fs_scroll_pane_g1

0xe57b,	// (0x0001d287) bg_sp_fs_scroll_pane_g2

0xe584,	// (0x0001d290) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0001ea61) bg_sp_fs_scroll_pane_g

0x13d7,	// (0x000100e3) list_medium_line_x2_t3_g4_g1_ParamLimits

0x13d7,	// (0x000100e3) list_medium_line_x2_t3_g4_g1

0x147f,	// (0x0001018b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x147f,	// (0x0001018b) list_medium_line_x2_t3_g4_g2

0x13e3,	// (0x000100ef) list_medium_line_x2_t3_g4_g3_ParamLimits

0x13e3,	// (0x000100ef) list_medium_line_x2_t3_g4_g3

0x13ef,	// (0x000100fb) list_medium_line_x2_t3_g4_g4_ParamLimits

0x13ef,	// (0x000100fb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0001dfce) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0001dfce) list_medium_line_x2_t3_g4_g

0x80e8,	// (0x00016df4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80e8,	// (0x00016df4) list_medium_line_x2_t3_g4_t1

0x8102,	// (0x00016e0e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8102,	// (0x00016e0e) list_medium_line_x2_t3_g4_t2

0x1424,	// (0x00010130) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1424,	// (0x00010130) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5c,	// (0x0001ea68) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5c,	// (0x0001ea68) list_medium_line_x2_t3_g4_t

0x6604,	// (0x00015310) list_medium_line_g2_g1_ParamLimits

0x6604,	// (0x00015310) list_medium_line_g2_g1

0x6610,	// (0x0001531c) list_medium_line_g2_g2_ParamLimits

0x6610,	// (0x0001531c) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0001e71f) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0001e71f) list_medium_line_g2_g

0xe58d,	// (0x0001d299) list_medium_line_g2_t1_ParamLimits

0xe58d,	// (0x0001d299) list_medium_line_g2_t1

0x6604,	// (0x00015310) list_medium_line_t3_g2_g1_ParamLimits

0x6604,	// (0x00015310) list_medium_line_t3_g2_g1

0x6610,	// (0x0001531c) list_medium_line_t3_g2_g2_ParamLimits

0x6610,	// (0x0001531c) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0001e71f) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0001e71f) list_medium_line_t3_g2_g

0x811c,	// (0x00016e28) list_medium_line_t3_g2_t1_ParamLimits

0x811c,	// (0x00016e28) list_medium_line_t3_g2_t1

0x8136,	// (0x00016e42) list_medium_line_t3_g2_t2_ParamLimits

0x8136,	// (0x00016e42) list_medium_line_t3_g2_t2

0x814c,	// (0x00016e58) list_medium_line_t3_g2_t3_ParamLimits

0x814c,	// (0x00016e58) list_medium_line_t3_g2_t3

0x0002,

0xfd63,	// (0x0001ea6f) list_medium_line_t3_g2_t_ParamLimits

0xfd63,	// (0x0001ea6f) list_medium_line_t3_g2_t

0x7d19,	// (0x00016a25) list_medium_line_right_icon_g1

0xe5a2,	// (0x0001d2ae) list_medium_line_right_icon_t1

0x6604,	// (0x00015310) list_medium_line_t2_g1_ParamLimits

0x6604,	// (0x00015310) list_medium_line_t2_g1

0x8166,	// (0x00016e72) list_medium_line_t2_t1_ParamLimits

0x8166,	// (0x00016e72) list_medium_line_t2_t1

0x8180,	// (0x00016e8c) list_medium_line_t2_t2_ParamLimits

0x8180,	// (0x00016e8c) list_medium_line_t2_t2

0x0001,

0xfd6a,	// (0x0001ea76) list_medium_line_t2_t_ParamLimits

0xfd6a,	// (0x0001ea76) list_medium_line_t2_t

0x6604,	// (0x00015310) list_medium_line_t3_g1_ParamLimits

0x6604,	// (0x00015310) list_medium_line_t3_g1

0x8199,	// (0x00016ea5) list_medium_line_t3_t1_ParamLimits

0x8199,	// (0x00016ea5) list_medium_line_t3_t1

0x81b3,	// (0x00016ebf) list_medium_line_t3_t2_ParamLimits

0x81b3,	// (0x00016ebf) list_medium_line_t3_t2

0x81c9,	// (0x00016ed5) list_medium_line_t3_t3_ParamLimits

0x81c9,	// (0x00016ed5) list_medium_line_t3_t3

0x0002,

0xfd6f,	// (0x0001ea7b) list_medium_line_t3_t_ParamLimits

0xfd6f,	// (0x0001ea7b) list_medium_line_t3_t

0x6604,	// (0x00015310) list_medium_line_g3_g1_ParamLimits

0x6604,	// (0x00015310) list_medium_line_g3_g1

0x81de,	// (0x00016eea) list_medium_line_g3_g2_ParamLimits

0x81de,	// (0x00016eea) list_medium_line_g3_g2

0x6610,	// (0x0001531c) list_medium_line_g3_g3_ParamLimits

0x6610,	// (0x0001531c) list_medium_line_g3_g3

0x0002,

0xfd76,	// (0x0001ea82) list_medium_line_g3_g_ParamLimits

0xfd76,	// (0x0001ea82) list_medium_line_g3_g

0xe5b0,	// (0x0001d2bc) list_medium_line_g3_t1_ParamLimits

0xe5b0,	// (0x0001d2bc) list_medium_line_g3_t1

0x6604,	// (0x00015310) list_medium_line_t2_g3_g1_ParamLimits

0x6604,	// (0x00015310) list_medium_line_t2_g3_g1

0x81de,	// (0x00016eea) list_medium_line_t2_g3_g2_ParamLimits

0x81de,	// (0x00016eea) list_medium_line_t2_g3_g2

0x6610,	// (0x0001531c) list_medium_line_t2_g3_g3_ParamLimits

0x6610,	// (0x0001531c) list_medium_line_t2_g3_g3

0x0002,

0xfd76,	// (0x0001ea82) list_medium_line_t2_g3_g_ParamLimits

0xfd76,	// (0x0001ea82) list_medium_line_t2_g3_g

0x81ea,	// (0x00016ef6) list_medium_line_t2_g3_t1_ParamLimits

0x81ea,	// (0x00016ef6) list_medium_line_t2_g3_t1

0x8204,	// (0x00016f10) list_medium_line_t2_g3_t2_ParamLimits

0x8204,	// (0x00016f10) list_medium_line_t2_g3_t2

0x0001,

0xfd7d,	// (0x0001ea89) list_medium_line_t2_g3_t_ParamLimits

0xfd7d,	// (0x0001ea89) list_medium_line_t2_g3_t

0x6604,	// (0x00015310) list_medium_line_t3_g3_g1_ParamLimits

0x6604,	// (0x00015310) list_medium_line_t3_g3_g1

0x81de,	// (0x00016eea) list_medium_line_t3_g3_g2_ParamLimits

0x81de,	// (0x00016eea) list_medium_line_t3_g3_g2

0x6610,	// (0x0001531c) list_medium_line_t3_g3_g3_ParamLimits

0x6610,	// (0x0001531c) list_medium_line_t3_g3_g3

0x0002,

0xfd76,	// (0x0001ea82) list_medium_line_t3_g3_g_ParamLimits

0xfd76,	// (0x0001ea82) list_medium_line_t3_g3_g

0x8222,	// (0x00016f2e) list_medium_line_t3_g3_t1_ParamLimits

0x8222,	// (0x00016f2e) list_medium_line_t3_g3_t1

0x823b,	// (0x00016f47) list_medium_line_t3_g3_t2_ParamLimits

0x823b,	// (0x00016f47) list_medium_line_t3_g3_t2

0x8251,	// (0x00016f5d) list_medium_line_t3_g3_t3_ParamLimits

0x8251,	// (0x00016f5d) list_medium_line_t3_g3_t3

0x0002,

0xfd82,	// (0x0001ea8e) list_medium_line_t3_g3_t_ParamLimits

0xfd82,	// (0x0001ea8e) list_medium_line_t3_g3_t

0x7eca,	// (0x00016bd6) list_medium_line_right_iconx2_g1

0x7d19,	// (0x00016a25) list_medium_line_right_iconx2_g2

0x0001,

0xfd89,	// (0x0001ea95) list_medium_line_right_iconx2_g

0xe5c5,	// (0x0001d2d1) list_medium_line_right_iconx2_t1

0x7eca,	// (0x00016bd6) list_medium_line_t2_right_iconx2_g1

0x7d19,	// (0x00016a25) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd89,	// (0x0001ea95) list_medium_line_t2_right_iconx2_g

0x826b,	// (0x00016f77) list_medium_line_t2_right_iconx2_t1

0x827b,	// (0x00016f87) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8e,	// (0x0001ea9a) list_medium_line_t2_right_iconx2_t

0x828d,	// (0x00016f99) list_medium_line_x4_t4_t1

0x829b,	// (0x00016fa7) list_medium_line_x4_t4_t2

0x82ab,	// (0x00016fb7) list_medium_line_x4_t4_t3

0x82bb,	// (0x00016fc7) list_medium_line_x4_t4_t4

0x0003,

0xfd93,	// (0x0001ea9f) list_medium_line_x4_t4_t

0x830e,	// (0x0001701a) tport_appsw_pane_ParamLimits

0x830e,	// (0x0001701a) tport_appsw_pane

0x8326,	// (0x00017032) tport_contact_pane_ParamLimits

0x8326,	// (0x00017032) tport_contact_pane

0x833e,	// (0x0001704a) tport_listscroll_pane_ParamLimits

0x833e,	// (0x0001704a) tport_listscroll_pane

0x8358,	// (0x00017064) cell_tport_appsw_pane_ParamLimits

0x8358,	// (0x00017064) cell_tport_appsw_pane

0xd15a,	// (0x0001be66) tport_appsw_pane_g1_ParamLimits

0xd15a,	// (0x0001be66) tport_appsw_pane_g1

0xe5d3,	// (0x0001d2df) tport_contact_pane_g1

0xe5dc,	// (0x0001d2e8) tport_contact_pane_t1

0xe5ea,	// (0x0001d2f6) tport_contact_pane_t2

0x0001,

0xfd9c,	// (0x0001eaa8) tport_contact_pane_t

0xe5f8,	// (0x0001d304) list_tport_pane

0xe601,	// (0x0001d30d) scroll_pane_cp_030

0x83a0,	// (0x000170ac) cell_tport_appsw_pane_g1

0x83b0,	// (0x000170bc) cell_tport_appsw_pane_t1

0x83be,	// (0x000170ca) grid_highlight_pane_cp019

0x83c6,	// (0x000170d2) list_tport_double_graphic_pane_ParamLimits

0x83c6,	// (0x000170d2) list_tport_double_graphic_pane

0x94cd,	// (0x000181d9) list_highlight_pane_cp023_ParamLimits

0x94cd,	// (0x000181d9) list_highlight_pane_cp023

0x83d3,	// (0x000170df) list_tport_double_graphic_pane_g1_ParamLimits

0x83d3,	// (0x000170df) list_tport_double_graphic_pane_g1

0x83e0,	// (0x000170ec) list_tport_double_graphic_pane_t1_ParamLimits

0x83e0,	// (0x000170ec) list_tport_double_graphic_pane_t1

0x83f5,	// (0x00017101) list_tport_double_graphic_pane_t2_ParamLimits

0x83f5,	// (0x00017101) list_tport_double_graphic_pane_t2

0x0001,

0xfda8,	// (0x0001eab4) list_tport_double_graphic_pane_t_ParamLimits

0xfda8,	// (0x0001eab4) list_tport_double_graphic_pane_t

0x945d,	// (0x00018169) main_cale_note_pane

0x5cd6,	// (0x000149e2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5cd6,	// (0x000149e2) cell_vitu2_function_top_wide_pane_cp01

0x783e,	// (0x0001654a) wait_bar_pane_cp05_ParamLimits

0x94cd,	// (0x000181d9) listscroll_cmail_pane

0xe60a,	// (0x0001d316) list_cmail_pane

0x8407,	// (0x00017113) list_cmail_body_pane

0x841c,	// (0x00017128) list_single_cmail_header_caption_pane

0x8433,	// (0x0001713f) list_single_cmail_header_detail_pane_ParamLimits

0x8433,	// (0x0001713f) list_single_cmail_header_detail_pane

0xe61a,	// (0x0001d326) list_single_cmail_header_caption_pane_t1

0x845d,	// (0x00017169) list_single_cmail_header_detail_pane_g1_ParamLimits

0x845d,	// (0x00017169) list_single_cmail_header_detail_pane_g1

0xe631,	// (0x0001d33d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe631,	// (0x0001d33d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdad,	// (0x0001eab9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdad,	// (0x0001eab9) list_single_cmail_header_detail_pane_g

0xe64a,	// (0x0001d356) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe64a,	// (0x0001d356) list_single_cmail_header_detail_pane_t1

0xe6aa,	// (0x0001d3b6) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6aa,	// (0x0001d3b6) list_single_cmail_header_editor_pane_bg

0xdfbd,	// (0x0001ccc9) list_cmail_body_pane_g1

0xe6c1,	// (0x0001d3cd) list_cmail_body_pane_t1

0xd1a9,	// (0x0001beb5) list_single_cmail_header_editor_pane_bg_g1

0xa118,	// (0x00018e24) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1b9,	// (0x0001bec5) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1b1,	// (0x0001bebd) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd477,	// (0x0001c183) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1d9,	// (0x0001bee5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1c9,	// (0x0001bed5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1d1,	// (0x0001bedd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa0f8,	// (0x00018e04) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8475,	// (0x00017181) calenote_gesture_pane_ParamLimits

0x8475,	// (0x00017181) calenote_gesture_pane

0x8495,	// (0x000171a1) calenote_window_pane_ParamLimits

0x8495,	// (0x000171a1) calenote_window_pane

0xe6cf,	// (0x0001d3db) popup_note_window_cp01

0x84b1,	// (0x000171bd) calenote_swipe_1_pane_ParamLimits

0x84b1,	// (0x000171bd) calenote_swipe_1_pane

0x7cbb,	// (0x000169c7) calenote_swipe_2_pane_ParamLimits

0x7cbb,	// (0x000169c7) calenote_swipe_2_pane

0xe30f,	// (0x0001d01b) calenote_swipe_1_pane_g1_ParamLimits

0xe30f,	// (0x0001d01b) calenote_swipe_1_pane_g1

0xe31c,	// (0x0001d028) calenote_swipe_1_pane_g2_ParamLimits

0xe31c,	// (0x0001d028) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0001e9e2) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0001e9e2) calenote_swipe_1_pane_g

0xe6e1,	// (0x0001d3ed) calenote_swipe_1_pane_t1_ParamLimits

0xe6e1,	// (0x0001d3ed) calenote_swipe_1_pane_t1

0xe30f,	// (0x0001d01b) calenote_swipe_2_pane_g1_ParamLimits

0xe30f,	// (0x0001d01b) calenote_swipe_2_pane_g1

0xe700,	// (0x0001d40c) calenote_swipe_2_pane_g2_ParamLimits

0xe700,	// (0x0001d40c) calenote_swipe_2_pane_g2

0x0001,

0xfdb9,	// (0x0001eac5) calenote_swipe_2_pane_g_ParamLimits

0xfdb9,	// (0x0001eac5) calenote_swipe_2_pane_g

0xe70c,	// (0x0001d418) calenote_swipe_2_pane_t1_ParamLimits

0xe70c,	// (0x0001d418) calenote_swipe_2_pane_t1

0x945d,	// (0x00018169) main_mup_navstr_pane

0x499a,	// (0x000136a6) main_mup3_pane_t7_ParamLimits

0x499a,	// (0x000136a6) main_mup3_pane_t7

0xcd13,	// (0x0001ba1f) main_mp4_pane_g6_ParamLimits

0xcd13,	// (0x0001ba1f) main_mp4_pane_g6

0xcf3b,	// (0x0001bc47) main_image3_pane_t4_ParamLimits

0xcf3b,	// (0x0001bc47) main_image3_pane_t4

0x84c6,	// (0x000171d2) popup_navstr_preview_pane_ParamLimits

0x84c6,	// (0x000171d2) popup_navstr_preview_pane

0x84da,	// (0x000171e6) scroll_navstr_pane_ParamLimits

0x84da,	// (0x000171e6) scroll_navstr_pane

0x945d,	// (0x00018169) bg_popup_preview_window_pane_cp04

0xe733,	// (0x0001d43f) popup_navstr_preview_pane_t1

0x84ee,	// (0x000171fa) scroll_navstr_pane_g1_ParamLimits

0x84ee,	// (0x000171fa) scroll_navstr_pane_g1

0x8502,	// (0x0001720e) scroll_navstr_pane_t1_ParamLimits

0x8502,	// (0x0001720e) scroll_navstr_pane_t1

0xe6d8,	// (0x0001d3e4) bg_button_pane_cp014

0xe6d8,	// (0x0001d3e4) bg_button_pane_cp030

0x7b55,	// (0x00016861) list_double_fisheye_pane_g4_ParamLimits

0x7b55,	// (0x00016861) list_double_fisheye_pane_g4

0x7b61,	// (0x0001686d) list_double_fisheye_pane_g5_ParamLimits

0x7b61,	// (0x0001686d) list_double_fisheye_pane_g5

0xd20b,	// (0x0001bf17) sp_fs_scroll_pane_cp03

0xe402,	// (0x0001d10e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe40e,	// (0x0001d11a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0001e9ff) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe41a,	// (0x0001d126) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe612,	// (0x0001d31e) sp_fs_scroll_pane_cp02

0x9df4,	// (0x00018b00) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9df4,	// (0x00018b00) popup_sp_fs_calendar_preview_list_single_pane

0x945d,	// (0x00018169) main_cam6_pano_pane

0x94cd,	// (0x000181d9) main_mup3_pane_ParamLimits

0x945d,	// (0x00018169) main_phacti_pane

0x7711,	// (0x0001641d) bg_button_pane_cp11

0x772b,	// (0x00016437) main_mobtv_info_pane_g2_ParamLimits

0x772b,	// (0x00016437) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0001e95f) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0001e95f) main_mobtv_info_pane_g

0x7908,	// (0x00016614) sc_clock_pane_t5_ParamLimits

0x7908,	// (0x00016614) sc_clock_pane_t5

0x79d0,	// (0x000166dc) main_radioblah_pane_g1_ParamLimits

0xe25b,	// (0x0001cf67) main_radioblah_pane_t3_ParamLimits

0xe25b,	// (0x0001cf67) main_radioblah_pane_t3

0xe273,	// (0x0001cf7f) main_radioblah_pane_t4_ParamLimits

0xe273,	// (0x0001cf7f) main_radioblah_pane_t4

0x79f8,	// (0x00016704) main_radioblah_text_pane_ParamLimits

0x79f8,	// (0x00016704) main_radioblah_text_pane

0x7a0a,	// (0x00016716) main_radioblah_info_pane_g1_ParamLimits

0x7aa3,	// (0x000167af) main_radioblah_info_pane_t4_ParamLimits

0x7aa3,	// (0x000167af) main_radioblah_info_pane_t4

0x94cd,	// (0x000181d9) main_sp_fs_calendar_pane

0x8519,	// (0x00017225) main_phacti_pane_g1

0x8521,	// (0x0001722d) phacti_note_pane_ParamLimits

0x8521,	// (0x0001722d) phacti_note_pane

0xe74a,	// (0x0001d456) phacti_term_pane_ParamLimits

0xe74a,	// (0x0001d456) phacti_term_pane

0xe75f,	// (0x0001d46b) phacti_note_pane_t1_ParamLimits

0xe75f,	// (0x0001d46b) phacti_note_pane_t1

0xe776,	// (0x0001d482) phacti_term_pane_g1

0xe77e,	// (0x0001d48a) phacti_term_pane_t1_ParamLimits

0xe77e,	// (0x0001d48a) phacti_term_pane_t1

0xe7a8,	// (0x0001d4b4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7b0,	// (0x0001d4bc) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc3,	// (0x0001eacf) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7b8,	// (0x0001d4c4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7b8,	// (0x0001d4c4) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7ce,	// (0x0001d4da) aid_popup_sp_fs_bg_corner_pane

0xc357,	// (0x0001b063) popup_sp_fs_calendar_preview_bg_pane_g1

0x945d,	// (0x00018169) popup_sp_fs_calendar_preview_bg_pane

0x1260,	// (0x0000ff6c) popup_sp_fs_calendar_preview_list_pane

0xbe3c,	// (0x0001ab48) bg_main_sp_fs_cale_pane_ParamLimits

0xbe3c,	// (0x0001ab48) bg_main_sp_fs_cale_pane

0xe7df,	// (0x0001d4eb) listscroll_cale_mrui_pane_ParamLimits

0xe7df,	// (0x0001d4eb) listscroll_cale_mrui_pane

0xd263,	// (0x0001bf6f) listscroll_sp_fs_schedule_track_pane

0xe7f4,	// (0x0001d500) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7f4,	// (0x0001d500) main_sp_fs_ctrlbar_pane_cp01

0xe807,	// (0x0001d513) main_sp_fs_ribbon_pane

0xe80f,	// (0x0001d51b) popup_sp_fs_cale_preview_window

0x8596,	// (0x000172a2) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8596,	// (0x000172a2) list_single_sp_fs_schedule_track_pane

0x94cd,	// (0x000181d9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x94cd,	// (0x000181d9) bg_sp_fs_highlight_list_pane_cp03

0x85aa,	// (0x000172b6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85aa,	// (0x000172b6) list_single_sp_fs_schedule_track_pane_g1

0x85b6,	// (0x000172c2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85b6,	// (0x000172c2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc8,	// (0x0001ead4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc8,	// (0x0001ead4) list_single_sp_fs_schedule_track_pane_g

0x85c2,	// (0x000172ce) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85c2,	// (0x000172ce) list_single_sp_fs_schedule_track_pane_t1

0x85dc,	// (0x000172e8) sp_fs_schedule_track_pane_ParamLimits

0x85dc,	// (0x000172e8) sp_fs_schedule_track_pane

0xe821,	// (0x0001d52d) sp_fs_schedule_track_pane_g1

0xe829,	// (0x0001d535) sp_fs_schedule_track_pane_g2

0xe831,	// (0x0001d53d) sp_fs_schedule_track_pane_g3

0xe839,	// (0x0001d545) sp_fs_schedule_track_pane_g4

0xe841,	// (0x0001d54d) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcd,	// (0x0001ead9) sp_fs_schedule_track_pane_g

0xd1a9,	// (0x0001beb5) bg_sp_fs_schedule_viewer_highlight_g1

0xa118,	// (0x00018e24) bg_sp_fs_schedule_viewer_highlight_g2

0xd1b1,	// (0x0001bebd) bg_sp_fs_schedule_viewer_highlight_g3

0xd1b9,	// (0x0001bec5) bg_sp_fs_schedule_viewer_highlight_g4

0xd477,	// (0x0001c183) bg_sp_fs_schedule_viewer_highlight_g5

0xd1c9,	// (0x0001bed5) bg_sp_fs_schedule_viewer_highlight_g6

0xd1d1,	// (0x0001bedd) bg_sp_fs_schedule_viewer_highlight_g7

0xd1d9,	// (0x0001bee5) bg_sp_fs_schedule_viewer_highlight_g8

0xa0f8,	// (0x00018e04) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd8,	// (0x0001eae4) bg_sp_fs_schedule_viewer_highlight_g

0x945d,	// (0x00018169) bg_main_sp_fs_ribbon_pane

0x85ed,	// (0x000172f9) main_sp_fs_ribbon_pane_g1

0xe849,	// (0x0001d555) main_sp_fs_ribbon_pane_t1

0x85f6,	// (0x00017302) main_sp_fs_ribbon_pane_t2

0xe858,	// (0x0001d564) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdeb,	// (0x0001eaf7) main_sp_fs_ribbon_pane_t

0xe867,	// (0x0001d573) main_sp_fs_ribbon_scheduler_pane

0xe86f,	// (0x0001d57b) bg_main_sp_fs_ribbon_pane_g1

0xe878,	// (0x0001d584) bg_main_sp_fs_ribbon_pane_g2

0xe881,	// (0x0001d58d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf2,	// (0x0001eafe) bg_main_sp_fs_ribbon_pane_g

0xe889,	// (0x0001d595) main_sp_fs_ribbon_scheduler_pane_g1

0xe892,	// (0x0001d59e) main_sp_fs_ribbon_scheduler_pane_g2

0xe89b,	// (0x0001d5a7) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf9,	// (0x0001eb05) main_sp_fs_ribbon_scheduler_pane_g

0xe8a4,	// (0x0001d5b0) list_cale_mrui_pane

0x8605,	// (0x00017311) sp_fs_scroll_pane_cp07_ParamLimits

0x8605,	// (0x00017311) sp_fs_scroll_pane_cp07

0x8621,	// (0x0001732d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8621,	// (0x0001732d) bg_sp_fs_schedule_viewer_highlight

0xe8b1,	// (0x0001d5bd) list_single_sp_fs_schedule_track_pane_cp01

0xe8b9,	// (0x0001d5c5) list_sp_fs_schedule_track_pane

0xe8c1,	// (0x0001d5cd) sp_fs_scroll_pane_cp06_ParamLimits

0xe8c1,	// (0x0001d5cd) sp_fs_scroll_pane_cp06

0xc357,	// (0x0001b063) bgmain_sp_fs_calendar_pane_g1

0x8631,	// (0x0001733d) list_single_cale_mrui_pane_ParamLimits

0x8631,	// (0x0001733d) list_single_cale_mrui_pane

0xe8d3,	// (0x0001d5df) list_single_cale_mrui_row_pane_ParamLimits

0xe8d3,	// (0x0001d5df) list_single_cale_mrui_row_pane

0xe8e0,	// (0x0001d5ec) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8e0,	// (0x0001d5ec) list_single_cale_mrui_row_pane_g1

0xe925,	// (0x0001d631) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe925,	// (0x0001d631) list_single_cale_mrui_row_pane_t1

0x8652,	// (0x0001735e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8652,	// (0x0001735e) list_single_cale_mrui_row_pane_t2

0xe937,	// (0x0001d643) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe937,	// (0x0001d643) list_single_cale_mrui_row_pane_t3

0xe966,	// (0x0001d672) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe966,	// (0x0001d672) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe07,	// (0x0001eb13) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe07,	// (0x0001eb13) list_single_cale_mrui_row_pane_t

0x86ba,	// (0x000173c6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86ba,	// (0x000173c6) list_single_cmail_header_editor_pane_bg_cp01

0x86e0,	// (0x000173ec) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x86e0,	// (0x000173ec) list_single_cmail_header_editor_pane_bg_cp02

0x8700,	// (0x0001740c) main_radioblah_text_pane_t1_ParamLimits

0x8700,	// (0x0001740c) main_radioblah_text_pane_t1

0xe9c2,	// (0x0001d6ce) cam6_indi_pane_cp01

0xe9ca,	// (0x0001d6d6) cam6_mode_pane_cp01

0xe9d2,	// (0x0001d6de) cam6_pano_pane

0xe9db,	// (0x0001d6e7) cam6_zoom_pane_cp01

0xe9e3,	// (0x0001d6ef) cam6_pano_image_pane

0xe9ee,	// (0x0001d6fa) cam6_pano_pane_g1

0xdfbd,	// (0x0001ccc9) cam6_pano_pane_g2

0xe9f7,	// (0x0001d703) cam6_pano_pane_g3

0xea00,	// (0x0001d70c) cam6_pano_pane_g4

0xc976,	// (0x0001b682) cam6_pano_pane_g5

0xea09,	// (0x0001d715) cam6_pano_pane_g6

0xea13,	// (0x0001d71f) cam6_pano_pane_g7

0xea1b,	// (0x0001d727) cam6_pano_pane_g8

0xea24,	// (0x0001d730) cam6_pano_pane_g9

0x0008,

0xfe10,	// (0x0001eb1c) cam6_pano_pane_g

0x945d,	// (0x00018169) main_browser_tag_pane

0xe72b,	// (0x0001d437) grid_navstr_albumart_pane

0xea2f,	// (0x0001d73b) cell_navstr_albumart_pane_ParamLimits

0xea2f,	// (0x0001d73b) cell_navstr_albumart_pane

0xea4f,	// (0x0001d75b) cell_navstr_albumart_pane_g1

0xbc0d,	// (0x0001a919) cell_navstr_albumart_pane_g2

0xbc1d,	// (0x0001a929) cell_navstr_albumart_pane_g3

0xbc15,	// (0x0001a921) cell_navstr_albumart_pane_g4

0x0003,

0xfe23,	// (0x0001eb2f) cell_navstr_albumart_pane_g

0x871b,	// (0x00017427) bt_list_pane_ParamLimits

0x871b,	// (0x00017427) bt_list_pane

0x872f,	// (0x0001743b) bt_list_pane_t1

0x873e,	// (0x0001744a) bt_list_pane_t2

0x0001,

0xfe2c,	// (0x0001eb38) bt_list_pane_t

0x945d,	// (0x00018169) main_cale_prevew_pane

0x874d,	// (0x00017459) popup_cale_preview_window_ParamLimits

0x874d,	// (0x00017459) popup_cale_preview_window

0x94cd,	// (0x000181d9) bg_popup_preview_window_pane_cp05_ParamLimits

0x94cd,	// (0x000181d9) bg_popup_preview_window_pane_cp05

0xea57,	// (0x0001d763) list_cale_preview_pane_ParamLimits

0xea57,	// (0x0001d763) list_cale_preview_pane

0x8766,	// (0x00017472) list_double_cale_preview_pane_ParamLimits

0x8766,	// (0x00017472) list_double_cale_preview_pane

0xd217,	// (0x0001bf23) list_single_cale_preview_pane_ParamLimits

0xd217,	// (0x0001bf23) list_single_cale_preview_pane

0x8778,	// (0x00017484) list_single_cale_preview_pane_g1

0x8780,	// (0x0001748c) list_single_cale_preview_pane_t1_ParamLimits

0x8780,	// (0x0001748c) list_single_cale_preview_pane_t1

0x8795,	// (0x000174a1) list_double_cale_preview_pane_g1

0x879d,	// (0x000174a9) list_double_cale_preview_pane_t1_ParamLimits

0x879d,	// (0x000174a9) list_double_cale_preview_pane_t1

0x87b2,	// (0x000174be) list_double_cale_preview_pane_t2_ParamLimits

0x87b2,	// (0x000174be) list_double_cale_preview_pane_t2

0x0001,

0xfe31,	// (0x0001eb3d) list_double_cale_preview_pane_t_ParamLimits

0xfe31,	// (0x0001eb3d) list_double_cale_preview_pane_t

0x945d,	// (0x00018169) main_ezdial_pane

0x94cd,	// (0x000181d9) main_sp_fs_email_pane_ParamLimits

0x7d43,	// (0x00016a4f) cmail_ddmenu_btn01_pane_ParamLimits

0x7d43,	// (0x00016a4f) cmail_ddmenu_btn01_pane

0x7d56,	// (0x00016a62) cmail_ddmenu_btn02_pane_ParamLimits

0x7d56,	// (0x00016a62) cmail_ddmenu_btn02_pane

0x7d79,	// (0x00016a85) cmail_ddmenu_btn03_pane_ParamLimits

0x7d79,	// (0x00016a85) cmail_ddmenu_btn03_pane

0x7d9f,	// (0x00016aab) main_sp_fs_ctrlbar_pane_ParamLimits

0x7dc3,	// (0x00016acf) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8407,	// (0x00017113) list_cmail_body_pane_ParamLimits

0xe628,	// (0x0001d334) bg_button_pane_cp12

0xe63d,	// (0x0001d349) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe63d,	// (0x0001d349) list_single_cmail_header_detail_pane_g3

0xe686,	// (0x0001d392) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe686,	// (0x0001d392) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb4,	// (0x0001eac0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb4,	// (0x0001eac0) list_single_cmail_header_detail_pane_t

0xe793,	// (0x0001d49f) phacti_term_pane_t2_ParamLimits

0xe793,	// (0x0001d49f) phacti_term_pane_t2

0x0001,

0xfdbe,	// (0x0001eaca) phacti_term_pane_t_ParamLimits

0xfdbe,	// (0x0001eaca) phacti_term_pane_t

0xea63,	// (0x0001d76f) aid_size_list_single_double

0x87ca,	// (0x000174d6) popup_ezdial_listscroll_window

0x87e6,	// (0x000174f2) popup_number_entry_window_cp01

0x9eb5,	// (0x00018bc1) bg_popup_call_pane_cp09

0xea6f,	// (0x0001d77b) ezdial_list_pane

0xea77,	// (0x0001d783) scroll_pane_cp23

0xbe3c,	// (0x0001ab48) bg_button_pane_cp028_ParamLimits

0xbe3c,	// (0x0001ab48) bg_button_pane_cp028

0x87f4,	// (0x00017500) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x87f4,	// (0x00017500) cmail_ddmenu_btn01_pane_g1

0x8800,	// (0x0001750c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8800,	// (0x0001750c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe36,	// (0x0001eb42) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe36,	// (0x0001eb42) cmail_ddmenu_btn01_pane_g

0xea7f,	// (0x0001d78b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea7f,	// (0x0001d78b) cmail_ddmenu_btn01_pane_t1

0xbe3c,	// (0x0001ab48) bg_button_pane_cp029_ParamLimits

0xbe3c,	// (0x0001ab48) bg_button_pane_cp029

0x880c,	// (0x00017518) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x880c,	// (0x00017518) cmail_ddmenu_btn02_pane_g1

0x8825,	// (0x00017531) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8825,	// (0x00017531) cmail_ddmenu_btn02_pane_t1

0x94cd,	// (0x000181d9) bg_button_pane_cp031_ParamLimits

0x94cd,	// (0x000181d9) bg_button_pane_cp031

0x880c,	// (0x00017518) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x880c,	// (0x00017518) cmail_ddmenu_btn03_pane_g1

0x8825,	// (0x00017531) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8825,	// (0x00017531) cmail_ddmenu_btn03_pane_t1

0x554b,	// (0x00014257) cell_dialer2_keypad_pane_t1_ParamLimits

0x5565,	// (0x00014271) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5565,	// (0x00014271) cell_dialer2_keypad_pane_t1_copy1

0x7534,	// (0x00016240) ncimui_group_button_pane

0x94cd,	// (0x000181d9) main_sp_fs_calendar_pane_ParamLimits

0x841c,	// (0x00017128) list_single_cmail_header_caption_pane_ParamLimits

0xe7d6,	// (0x0001d4e2) aid_recal_txt_sm_pane

0x945d,	// (0x00018169) mian_recal_day_pane

0xe80f,	// (0x0001d51b) popup_sp_fs_cale_preview_window_ParamLimits

0xea94,	// (0x0001d7a0) list_recal_day_pane

0xead6,	// (0x0001d7e2) list_single_recal_day_pane_ParamLimits

0xead6,	// (0x0001d7e2) list_single_recal_day_pane

0xeae8,	// (0x0001d7f4) list_single_recal_day_pane_g1_ParamLimits

0xeae8,	// (0x0001d7f4) list_single_recal_day_pane_g1

0xeaf4,	// (0x0001d800) list_single_recal_day_pane_g2_ParamLimits

0xeaf4,	// (0x0001d800) list_single_recal_day_pane_g2

0xeb00,	// (0x0001d80c) list_single_recal_day_pane_g3_ParamLimits

0xeb00,	// (0x0001d80c) list_single_recal_day_pane_g3

0x8849,	// (0x00017555) list_single_recal_day_pane_g4_ParamLimits

0x8849,	// (0x00017555) list_single_recal_day_pane_g4

0xeb0c,	// (0x0001d818) list_single_recal_day_pane_g5_ParamLimits

0xeb0c,	// (0x0001d818) list_single_recal_day_pane_g5

0xeb18,	// (0x0001d824) list_single_recal_day_pane_g6_ParamLimits

0xeb18,	// (0x0001d824) list_single_recal_day_pane_g6

0x0004,

0xfe45,	// (0x0001eb51) list_single_recal_day_pane_g_ParamLimits

0xfe45,	// (0x0001eb51) list_single_recal_day_pane_g

0xeb2c,	// (0x0001d838) list_single_recal_day_pane_t1

0xeb3e,	// (0x0001d84a) list_single_recal_day_pane_t2

0x0001,

0xfe50,	// (0x0001eb5c) list_single_recal_day_pane_t

0x8861,	// (0x0001756d) ncimui_query_button_pane_ParamLimits

0x8861,	// (0x0001756d) ncimui_query_button_pane

0x8871,	// (0x0001757d) ncimui_query_button_pane_t1_ParamLimits

0x8871,	// (0x0001757d) ncimui_query_button_pane_t1

0xeb50,	// (0x0001d85c) ncimui_query_button_pane_t2_ParamLimits

0xeb50,	// (0x0001d85c) ncimui_query_button_pane_t2

0x0001,

0xfe55,	// (0x0001eb61) ncimui_query_button_pane_t_ParamLimits

0xfe55,	// (0x0001eb61) ncimui_query_button_pane_t

0x8884,	// (0x00017590) query_button_pane_ParamLimits

0x8884,	// (0x00017590) query_button_pane

0x945d,	// (0x00018169) bg_button_pane_cp0028

0xeb63,	// (0x0001d86f) query_button_pane_t1

0x3603,	// (0x0001230f) main_tport_pane_ParamLimits

0x82cb,	// (0x00016fd7) bg_popup_window_pane_cp01_ParamLimits

0x82cb,	// (0x00016fd7) bg_popup_window_pane_cp01

0x82e6,	// (0x00016ff2) heading_pane_cp08_ParamLimits

0x82e6,	// (0x00016ff2) heading_pane_cp08

0x82f9,	// (0x00017005) heading_pane_cp07_ParamLimits

0x82f9,	// (0x00017005) heading_pane_cp07

0x83a0,	// (0x000170ac) cell_tport_appsw_pane_g2

0x0002,

0xfda1,	// (0x0001eaad) cell_tport_appsw_pane_g

0x2ba5,	// (0x000118b1) input_candi_list_open_g1

0xa309,	// (0x00019015) list_cale_time_pane_g6_ParamLimits

0xa309,	// (0x00019015) list_cale_time_pane_g6

0x43cb,	// (0x000130d7) aid_size_touch_calib_1_ParamLimits

0x43cb,	// (0x000130d7) aid_size_touch_calib_1

0x43dd,	// (0x000130e9) aid_size_touch_calib_2_ParamLimits

0x43dd,	// (0x000130e9) aid_size_touch_calib_2

0x43f5,	// (0x00013101) aid_size_touch_calib_3_ParamLimits

0x43f5,	// (0x00013101) aid_size_touch_calib_3

0x4413,	// (0x0001311f) aid_size_touch_calib_4_ParamLimits

0x4413,	// (0x0001311f) aid_size_touch_calib_4

0x442b,	// (0x00013137) main_touch_calib_button_group_pane_ParamLimits

0x442b,	// (0x00013137) main_touch_calib_button_group_pane

0x4443,	// (0x0001314f) main_touch_calib_pane_g1_ParamLimits

0x4455,	// (0x00013161) main_touch_calib_pane_g2_ParamLimits

0x4467,	// (0x00013173) main_touch_calib_pane_g3_ParamLimits

0x4479,	// (0x00013185) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0001e470) main_touch_calib_pane_g_ParamLimits

0x448b,	// (0x00013197) main_touch_calib_pane_t1_ParamLimits

0x44a5,	// (0x000131b1) main_touch_calib_pane_t2_ParamLimits

0x44bf,	// (0x000131cb) main_touch_calib_pane_t3_ParamLimits

0x44d3,	// (0x000131df) main_touch_calib_pane_t4_ParamLimits

0x44e7,	// (0x000131f3) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0001e479) main_touch_calib_pane_t_ParamLimits

0xc719,	// (0x0001b425) list_single_fp_cale_pane_g3_ParamLimits

0xc719,	// (0x0001b425) list_single_fp_cale_pane_g3

0x94cd,	// (0x000181d9) bg_button_pane_cp012_ParamLimits

0x94cd,	// (0x000181d9) bg_vkb2_func_pane_cp03_ParamLimits

0x65ba,	// (0x000152c6) cell_vitu2_function_top_pane_g1_ParamLimits

0x94cd,	// (0x000181d9) bg_vkb2_func_pane_cp04_ParamLimits

0x74bf,	// (0x000161cb) main_ncimui_button_group_pane_ParamLimits

0x74bf,	// (0x000161cb) main_ncimui_button_group_pane

0x751f,	// (0x0001622b) main_ncimui_pane_t3_ParamLimits

0x751f,	// (0x0001622b) main_ncimui_pane_t3

0xe741,	// (0x0001d44d) phacti_button_group_pane

0xea63,	// (0x0001d76f) aid_size_list_single_double_ParamLimits

0x87ca,	// (0x000174d6) popup_ezdial_listscroll_window_ParamLimits

0x87e6,	// (0x000174f2) popup_number_entry_window_cp01_ParamLimits

0x8897,	// (0x000175a3) phacti_button_pane_ParamLimits

0x8897,	// (0x000175a3) phacti_button_pane

0x945d,	// (0x00018169) bg_button_pane_cp14

0xeb71,	// (0x0001d87d) phacti_button_pane_t1

0x88a8,	// (0x000175b4) main_touch_calib_button_pane_ParamLimits

0x88a8,	// (0x000175b4) main_touch_calib_button_pane

0x9c3c,	// (0x00018948) bg_button_pane_cp18_ParamLimits

0x9c3c,	// (0x00018948) bg_button_pane_cp18

0xeb7f,	// (0x0001d88b) main_touch_calib_button_pane_t1_ParamLimits

0xeb7f,	// (0x0001d88b) main_touch_calib_button_pane_t1

0xeb95,	// (0x0001d8a1) main_touch_calib_button_pane_t2_ParamLimits

0xeb95,	// (0x0001d8a1) main_touch_calib_button_pane_t2

0x0001,

0xfe5a,	// (0x0001eb66) main_touch_calib_button_pane_t_ParamLimits

0xfe5a,	// (0x0001eb66) main_touch_calib_button_pane_t

0x945d,	// (0x00018169) cell_ncimui_button_pane

0x945d,	// (0x00018169) bg_button_pane_cp032

0xebb3,	// (0x0001d8bf) cell_ncimui_button_pane_t1

0xcf1b,	// (0x0001bc27) image3_infobar_pane_ParamLimits

0xcf1b,	// (0x0001bc27) image3_infobar_pane

0x7934,	// (0x00016640) fs_bigclock_status_pane_ParamLimits

0x7934,	// (0x00016640) fs_bigclock_status_pane

0x7941,	// (0x0001664d) main_fs_bigclock_clock_pane_ParamLimits

0x7941,	// (0x0001664d) main_fs_bigclock_clock_pane

0x795f,	// (0x0001666b) main_fs_bigclock_indi_pane_ParamLimits

0x795f,	// (0x0001666b) main_fs_bigclock_indi_pane

0x7991,	// (0x0001669d) main_fs_bigclock_swipe_pane_ParamLimits

0x7991,	// (0x0001669d) main_fs_bigclock_swipe_pane

0x945d,	// (0x00018169) main_fs_clock_dumped_data

0xe0ca,	// (0x0001cdd6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0ca,	// (0x0001cdd6) list_single_fs_bigclock_indicator_pane_g1

0xe0e6,	// (0x0001cdf2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0e6,	// (0x0001cdf2) list_single_fs_bigclock_indicator_pane_g2

0xe100,	// (0x0001ce0c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe100,	// (0x0001ce0c) list_single_fs_bigclock_indicator_pane_g3

0xe11a,	// (0x0001ce26) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe11a,	// (0x0001ce26) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0001e993) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0001e993) list_single_fs_bigclock_indicator_pane_g

0xe145,	// (0x0001ce51) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe145,	// (0x0001ce51) list_single_fs_bigclock_indicator_pane_t1

0xe16d,	// (0x0001ce79) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe16d,	// (0x0001ce79) list_single_fs_bigclock_indicator_pane_t2

0xe195,	// (0x0001cea1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe195,	// (0x0001cea1) list_single_fs_bigclock_indicator_pane_t3

0xe1bd,	// (0x0001cec9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1bd,	// (0x0001cec9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0001e99e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0001e99e) list_single_fs_bigclock_indicator_pane_t

0xebc1,	// (0x0001d8cd) image3_infobar_fav_pane_ParamLimits

0xebc1,	// (0x0001d8cd) image3_infobar_fav_pane

0xebd1,	// (0x0001d8dd) image3_infobar_loc_pane_ParamLimits

0xebd1,	// (0x0001d8dd) image3_infobar_loc_pane

0xebe5,	// (0x0001d8f1) image3_infobar_time_pane_ParamLimits

0xebe5,	// (0x0001d8f1) image3_infobar_time_pane

0xc357,	// (0x0001b063) image3_infobar_time_pane_g1

0xebf5,	// (0x0001d901) image3_infobar_time_pane_t1

0xc357,	// (0x0001b063) image3_infobar_loc_pane_g1

0xec03,	// (0x0001d90f) image3_infobar_loc_pane_g2

0x0001,

0xfe5f,	// (0x0001eb6b) image3_infobar_loc_pane_g

0xec0b,	// (0x0001d917) image3_infobar_loc_pane_t1

0xc357,	// (0x0001b063) image3_infobar_fav_pane_g1

0xec19,	// (0x0001d925) image3_infobar_fav_pane_g2

0x0001,

0xfe64,	// (0x0001eb70) image3_infobar_fav_pane_g

0xec21,	// (0x0001d92d) fs_bigclock_status_battery_pane

0xec2a,	// (0x0001d936) fs_bigclock_status_signal_pane

0xec33,	// (0x0001d93f) fs_bigclock_status_title_pane

0xec3c,	// (0x0001d948) fs_bigclock_status_signal_pane_g1

0xec45,	// (0x0001d951) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe69,	// (0x0001eb75) fs_bigclock_status_signal_pane_g

0xec4d,	// (0x0001d959) fs_bigclock_status_battery_pane_g1

0xec56,	// (0x0001d962) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6e,	// (0x0001eb7a) fs_bigclock_status_battery_pane_g

0xec5e,	// (0x0001d96a) fs_bigclock_status_title_pane_t1

0x88bd,	// (0x000175c9) main_fs_bigclock_clock_pane_g1

0x88bd,	// (0x000175c9) main_fs_bigclock_clock_pane_g2

0x88ce,	// (0x000175da) main_fs_bigclock_clock_pane_g3

0x88ce,	// (0x000175da) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe73,	// (0x0001eb7f) main_fs_bigclock_clock_pane_g

0x88e1,	// (0x000175ed) main_fs_bigclock_clock_pane_t1

0x88f7,	// (0x00017603) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7c,	// (0x0001eb88) main_fs_bigclock_clock_pane_t

0xec6c,	// (0x0001d978) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec6c,	// (0x0001d978) list_single_fs_bigclock_indicator_pane

0xec7d,	// (0x0001d989) list_single_fs_bigclock_pane_ParamLimits

0xec7d,	// (0x0001d989) list_single_fs_bigclock_pane

0xeca3,	// (0x0001d9af) main_fs_bigclock_indicator_pane_t1

0xecb2,	// (0x0001d9be) list_single_fs_bigclock_pane_g1

0xecba,	// (0x0001d9c6) list_single_fs_bigclock_pane_t1

0xc357,	// (0x0001b063) main_fs_bigclock_swipe_pane_g1

0xecfd,	// (0x0001da09) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8d,	// (0x0001eb99) main_fs_bigclock_swipe_pane_g

0xed05,	// (0x0001da11) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed05,	// (0x0001da11) main_fs_bigclock_swipe_pane_t1

0x2494,	// (0x000111a0) call_type_pane_ParamLimits

0x945d,	// (0x00018169) main_btmg_pane

0xe90c,	// (0x0001d618) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe90c,	// (0x0001d618) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe00,	// (0x0001eb0c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe00,	// (0x0001eb0c) list_single_cale_mrui_row_pane_g

0xeabd,	// (0x0001d7c9) list_recal_vselct_arw_lo_pane

0xeac5,	// (0x0001d7d1) list_recal_vselct_arw_up_pane

0xeacd,	// (0x0001d7d9) list_recal_vselct_pane

0x8951,	// (0x0001765d) btmg_button_pane

0x895b,	// (0x00017667) main_btmg_pane_g1

0x945d,	// (0x00018169) bg_button_pane_cp044

0xed22,	// (0x0001da2e) btmg_button_pane_t1

0xbe28,	// (0x0001ab34) aid_listscroll_gen

0x94cd,	// (0x000181d9) main_cntbar_detail_pane

0xe60a,	// (0x0001d316) list_cmail_folder_pane

0xd20b,	// (0x0001bf17) sp_fs_scroll_pane_cp03_ParamLimits

0x8965,	// (0x00017671) list_single_fs_dyc_pane_cp01_ParamLimits

0x8965,	// (0x00017671) list_single_fs_dyc_pane_cp01

0xed30,	// (0x0001da3c) aid_size_cmail_indent

0xed39,	// (0x0001da45) list_single_dyc_row_pane_cp01

0x89ae,	// (0x000176ba) cntbar_detail_list_pane_ParamLimits

0x89ae,	// (0x000176ba) cntbar_detail_list_pane

0x89fa,	// (0x00017706) main_cntbar_detail_cont_pane_ParamLimits

0x89fa,	// (0x00017706) main_cntbar_detail_cont_pane

0xd20b,	// (0x0001bf17) scroll_pane_cp032_ParamLimits

0xd20b,	// (0x0001bf17) scroll_pane_cp032

0x8a0e,	// (0x0001771a) cntbar_detail_list_event_pane_ParamLimits

0x8a0e,	// (0x0001771a) cntbar_detail_list_event_pane

0x89be,	// (0x000176ca) cntbar_detail_list_shct_pane

0xa166,	// (0x00018e72) aid_list_gen

0xed42,	// (0x0001da4e) aid_scroll

0xed4b,	// (0x0001da57) aid_size_touch_scroll_bar

0x6cb8,	// (0x000159c4) aid_list_double

0x6ca6,	// (0x000159b2) aid_list_single

0x6ca6,	// (0x000159b2) aid_list_single_lg

0x8a1e,	// (0x0001772a) aid_list_z_g_a_sm

0x8a26,	// (0x00017732) aid_list_z_g_d

0x8a2e,	// (0x0001773a) aid_txt_z_prm

0x8a3c,	// (0x00017748) aid_txt_z_prm_cp01

0x8a4a,	// (0x00017756) aid_txt_z_sec

0x8a58,	// (0x00017764) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a58,	// (0x00017764) main_cntbar_detail_cont_pane_g1

0x8a6c,	// (0x00017778) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a6c,	// (0x00017778) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe92,	// (0x0001eb9e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe92,	// (0x0001eb9e) main_cntbar_detail_cont_pane_g

0xed54,	// (0x0001da60) main_cntbar_detail_cont_pane_t1

0xed62,	// (0x0001da6e) main_cntbar_detail_cont_pane_t2

0xed70,	// (0x0001da7c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe97,	// (0x0001eba3) main_cntbar_detail_cont_pane_t

0x8a7c,	// (0x00017788) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a7c,	// (0x00017788) cell_cntbar_detail_list_shct_pane

0xed7e,	// (0x0001da8a) cntbar_detail_list_shct_pane_g1

0xed87,	// (0x0001da93) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9e,	// (0x0001ebaa) cntbar_detail_list_shct_pane_g

0x8a90,	// (0x0001779c) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a90,	// (0x0001779c) cntbar_detail_list_event_pane_g1

0x8a9c,	// (0x000177a8) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a9c,	// (0x000177a8) cntbar_detail_list_event_pane_g2

0x0005,

0xfea3,	// (0x0001ebaf) cntbar_detail_list_event_pane_g_ParamLimits

0xfea3,	// (0x0001ebaf) cntbar_detail_list_event_pane_g

0x8b08,	// (0x00017814) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b08,	// (0x00017814) cntbar_detail_list_event_pane_t1

0x8b1d,	// (0x00017829) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b1d,	// (0x00017829) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb0,	// (0x0001ebbc) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb0,	// (0x0001ebbc) cntbar_detail_list_event_pane_t

0xc357,	// (0x0001b063) cell_cntbar_detail_list_shct_pane_g1

0xa94f,	// (0x0001965b) navi_pane_mv_g3

0x94cd,	// (0x000181d9) main_cntbar_detail_pane_ParamLimits

0x945d,	// (0x00018169) main_notif_wgt_pane

0xccad,	// (0x0001b9b9) aid_tch_main_mp4_pane_g4

0xceaf,	// (0x0001bbbb) popup_slider_window_cp02

0xeab3,	// (0x0001d7bf) list_recal_day_event_pane

0x897c,	// (0x00017688) cntbar_detail_btn_pane_ParamLimits

0x897c,	// (0x00017688) cntbar_detail_btn_pane

0x8995,	// (0x000176a1) cntbar_detail_btn_pane_cp01_ParamLimits

0x8995,	// (0x000176a1) cntbar_detail_btn_pane_cp01

0x89be,	// (0x000176ca) cntbar_detail_list_shct_pane_ParamLimits

0x89ce,	// (0x000176da) cntbar_detail_pane_g1_ParamLimits

0x89ce,	// (0x000176da) cntbar_detail_pane_g1

0x89de,	// (0x000176ea) cntbar_detail_pane_t1_ParamLimits

0x89de,	// (0x000176ea) cntbar_detail_pane_t1

0x8aa8,	// (0x000177b4) cntbar_detail_list_event_pane_g3_ParamLimits

0x8aa8,	// (0x000177b4) cntbar_detail_list_event_pane_g3

0x8ac0,	// (0x000177cc) cntbar_detail_list_event_pane_g4_ParamLimits

0x8ac0,	// (0x000177cc) cntbar_detail_list_event_pane_g4

0x8ad8,	// (0x000177e4) cntbar_detail_list_event_pane_g5_ParamLimits

0x8ad8,	// (0x000177e4) cntbar_detail_list_event_pane_g5

0x8af0,	// (0x000177fc) cntbar_detail_list_event_pane_g6_ParamLimits

0x8af0,	// (0x000177fc) cntbar_detail_list_event_pane_g6

0x8b32,	// (0x0001783e) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b32,	// (0x0001783e) cntbar_detail_list_event_pane_t3

0x8b44,	// (0x00017850) popup_notif_wgt_window_ParamLimits

0x8b44,	// (0x00017850) popup_notif_wgt_window

0x8b5d,	// (0x00017869) popup_submenu_window_cp01_ParamLimits

0x8b5d,	// (0x00017869) popup_submenu_window_cp01

0x9eb5,	// (0x00018bc1) bg_popup_window_pane_cp10

0xed90,	// (0x0001da9c) listscroll_notif_wgt_pane

0xeda2,	// (0x0001daae) list_notif_wgt_window

0xedab,	// (0x0001dab7) scroll_pane_cp033

0x8b6f,	// (0x0001787b) list_notif_wgt_row_pane_ParamLimits

0x8b6f,	// (0x0001787b) list_notif_wgt_row_pane

0xedb4,	// (0x0001dac0) aid_size_list_notif_wgt_del

0xedc1,	// (0x0001dacd) list_notif_wgt_row_pane_g1

0xedcd,	// (0x0001dad9) list_notif_wgt_row_pane_g2

0xeddc,	// (0x0001dae8) list_notif_wgt_row_pane_g3

0x0002,

0xfeb7,	// (0x0001ebc3) list_notif_wgt_row_pane_g

0xede9,	// (0x0001daf5) list_notif_wgt_row_pane_t1

0xedff,	// (0x0001db0b) list_notif_wgt_row_pane_t2

0xee11,	// (0x0001db1d) list_notif_wgt_row_pane_t3

0x0002,

0xfebe,	// (0x0001ebca) list_notif_wgt_row_pane_t

0xd49f,	// (0x0001c1ab) list_recal_day_event_pane_g1

0xee23,	// (0x0001db2f) list_recal_day_event_pane_t1

0x945d,	// (0x00018169) bg_button_pane_cp045

0x8b7f,	// (0x0001788b) cntbar_detail_btn_pane_t1

0xbe3c,	// (0x0001ab48) main_callh_pane_ParamLimits

0xbe3c,	// (0x0001ab48) main_callh_pane

0x945d,	// (0x00018169) main_coverflow0_pane

0x945d,	// (0x00018169) main_wgtman_pane

0x79a9,	// (0x000166b5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x79a9,	// (0x000166b5) main_fs_bigclock_unlock_btn_pane

0x8398,	// (0x000170a4) bg_button_pane_cp16

0x83a8,	// (0x000170b4) cell_tport_appsw_pane_g3

0x8b8d,	// (0x00017899) cf0_flow_pane_ParamLimits

0x8b8d,	// (0x00017899) cf0_flow_pane

0xee32,	// (0x0001db3e) listscroll_cf0_pane

0xee3d,	// (0x0001db49) main_cf0_pane_g1

0x8ba2,	// (0x000178ae) main_cf0_pane_t1_ParamLimits

0x8ba2,	// (0x000178ae) main_cf0_pane_t1

0x8bb9,	// (0x000178c5) main_cf0_pane_t2_ParamLimits

0x8bb9,	// (0x000178c5) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x0001ebd6) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x0001ebd6) main_cf0_pane_t

0xee4f,	// (0x0001db5b) scroll_pane_cp11

0x8bd0,	// (0x000178dc) cf0_flow_pane_g1

0x8bd8,	// (0x000178e4) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x0001ebdb) cf0_flow_pane_g

0x8be0,	// (0x000178ec) cf0_flow_pane_t1

0x945d,	// (0x00018169) main_call6_pane

0x945d,	// (0x00018169) main_calllock_pane

0x8bee,	// (0x000178fa) call6_btn_grp_pane_ParamLimits

0x8bee,	// (0x000178fa) call6_btn_grp_pane

0x8c08,	// (0x00017914) call6_pane_g1_ParamLimits

0x8c08,	// (0x00017914) call6_pane_g1

0x8c1d,	// (0x00017929) popup_call6_1st_window_ParamLimits

0x8c1d,	// (0x00017929) popup_call6_1st_window

0x8c2e,	// (0x0001793a) popup_call6_2nd_window_ParamLimits

0x8c2e,	// (0x0001793a) popup_call6_2nd_window

0x8c3f,	// (0x0001794b) cell_call6_btn_pane_ParamLimits

0x8c3f,	// (0x0001794b) cell_call6_btn_pane

0x9eb5,	// (0x00018bc1) bg_popup_call2_in_pane_cp03

0xee5a,	// (0x0001db66) popup_call6_1st_window_g1

0xee62,	// (0x0001db6e) popup_call6_1st_window_g2

0xee6a,	// (0x0001db76) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x0001ebe0) popup_call6_1st_window_g

0xee72,	// (0x0001db7e) popup_call6_1st_window_t1

0xee81,	// (0x0001db8d) popup_call6_1st_window_t2

0xee91,	// (0x0001db9d) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x0001ebe7) popup_call6_1st_window_t

0x9eb5,	// (0x00018bc1) bg_popup_call2_in_pane_cp04

0xee5a,	// (0x0001db66) popup_call6_2nd_window_g1

0xee62,	// (0x0001db6e) popup_call6_2nd_window_g2

0xee6a,	// (0x0001db76) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x0001ebe0) popup_call6_2nd_window_g

0xee72,	// (0x0001db7e) popup_call6_2nd_window_t1

0x945d,	// (0x00018169) bg_button_pane_cp15

0xeea1,	// (0x0001dbad) cell_call6_btn_pane_g1

0xeeaa,	// (0x0001dbb6) cell_call6_btn_pane_t1

0x8c53,	// (0x0001795f) listscroll_wgtman_pane_ParamLimits

0x8c53,	// (0x0001795f) listscroll_wgtman_pane

0x8c74,	// (0x00017980) wgtman_btn_pane_ParamLimits

0x8c74,	// (0x00017980) wgtman_btn_pane

0xa763,	// (0x0001946f) aid_scroll_copy1

0xeeb9,	// (0x0001dbc5) list_wgtman_pane

0x8cb7,	// (0x000179c3) wgtman_btn_pane_g1_ParamLimits

0x8cb7,	// (0x000179c3) wgtman_btn_pane_g1

0x8ce3,	// (0x000179ef) wgtman_btn_pane_t1_ParamLimits

0x8ce3,	// (0x000179ef) wgtman_btn_pane_t1

0xeec3,	// (0x0001dbcf) wgtman_btn_pane_t2_ParamLimits

0xeec3,	// (0x0001dbcf) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x0001ebee) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x0001ebee) wgtman_btn_pane_t

0x8d20,	// (0x00017a2c) listrow_wgtman_pane_ParamLimits

0x8d20,	// (0x00017a2c) listrow_wgtman_pane

0x8d32,	// (0x00017a3e) listrow_wgtman_pane_g1

0x8d3f,	// (0x00017a4b) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x0001ebf3) listrow_wgtman_pane_g

0x8d5d,	// (0x00017a69) listrow_wgtman_pane_t1

0x8d75,	// (0x00017a81) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x0001ebf8) listrow_wgtman_pane_t

0x8d9b,	// (0x00017aa7) wait_bar_pane_cp09

0xeeda,	// (0x0001dbe6) main_calllock_btn_pane

0xeee4,	// (0x0001dbf0) main_calllock_pane_g1

0x945d,	// (0x00018169) bg_button_pane_cp17

0xeeef,	// (0x0001dbfb) main_calllock_btn_pane_g1

0xeef8,	// (0x0001dc04) main_calllock_btn_pane_t1

0x945d,	// (0x00018169) main_dialer3_pane

0x945d,	// (0x00018169) main_fmrd2_pane

0xc357,	// (0x0001b063) main_fs_bigclock_unlock_btn_pane_g1

0x8db5,	// (0x00017ac1) main_fs_bigclock_unlock_btn_pane_t1

0x8dc3,	// (0x00017acf) area_fmrd2_info_pane_ParamLimits

0x8dc3,	// (0x00017acf) area_fmrd2_info_pane

0x8dd4,	// (0x00017ae0) area_fmrd2_visual_pane_ParamLimits

0x8dd4,	// (0x00017ae0) area_fmrd2_visual_pane

0x8de2,	// (0x00017aee) fmrd2_indi_pane_ParamLimits

0x8de2,	// (0x00017aee) fmrd2_indi_pane

0x8def,	// (0x00017afb) area_fmrd2_visual_pane_g1

0x8df7,	// (0x00017b03) area_fmrd2_visual_pane_t1

0x8e07,	// (0x00017b13) area_fmrd2_visual_pane_t2

0x8e17,	// (0x00017b23) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x0001ec02) area_fmrd2_visual_pane_t

0x8e27,	// (0x00017b33) area_fmrd2_info_pane_g1

0x8e2f,	// (0x00017b3b) area_fmrd2_info_pane_t1

0x8e3f,	// (0x00017b4b) area_fmrd2_info_pane_t2

0x8e4f,	// (0x00017b5b) area_fmrd2_info_pane_t3

0x8e5f,	// (0x00017b6b) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x0001ec09) area_fmrd2_info_pane_t

0x8e6d,	// (0x00017b79) fmrd2_indi_pane_t1

0x8e7d,	// (0x00017b89) fmrd2_indi_pane_t2

0x8e8d,	// (0x00017b99) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x0001ec12) fmrd2_indi_pane_t

0xe129,	// (0x0001ce35) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe129,	// (0x0001ce35) list_single_fs_bigclock_indicator_pane_g5

0xe1da,	// (0x0001cee6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1da,	// (0x0001cee6) list_single_fs_bigclock_indicator_pane_t5

0x8535,	// (0x00017241) aid_cell_bcale_month_pane_ParamLimits

0x8535,	// (0x00017241) aid_cell_bcale_month_pane

0x8553,	// (0x0001725f) bcale_month_pane_ParamLimits

0x8553,	// (0x0001725f) bcale_month_pane

0x8577,	// (0x00017283) bcale_preview_pane_ParamLimits

0x8577,	// (0x00017283) bcale_preview_pane

0xecba,	// (0x0001d9c6) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd9,	// (0x0001d9e5) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd9,	// (0x0001d9e5) list_single_fs_bigclock_pane_t2

0x0001,

0xfe88,	// (0x0001eb94) list_single_fs_bigclock_pane_t_ParamLimits

0xfe88,	// (0x0001eb94) list_single_fs_bigclock_pane_t

0x8dad,	// (0x00017ab9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x0001ebfd) main_fs_bigclock_unlock_btn_pane_g

0x8e9d,	// (0x00017ba9) aid_dia3_key_size_ParamLimits

0x8e9d,	// (0x00017ba9) aid_dia3_key_size

0x8eac,	// (0x00017bb8) aid_dia3_listrow_size_ParamLimits

0x8eac,	// (0x00017bb8) aid_dia3_listrow_size

0x8ec1,	// (0x00017bcd) dia3_keypad_fun_pane_ParamLimits

0x8ec1,	// (0x00017bcd) dia3_keypad_fun_pane

0x8edd,	// (0x00017be9) dia3_keypad_num_pane_ParamLimits

0x8edd,	// (0x00017be9) dia3_keypad_num_pane

0x8ef8,	// (0x00017c04) dia3_listscroll_pane_ParamLimits

0x8ef8,	// (0x00017c04) dia3_listscroll_pane

0x8f0b,	// (0x00017c17) dia3_numentry_pane_ParamLimits

0x8f0b,	// (0x00017c17) dia3_numentry_pane

0xef07,	// (0x0001dc13) dia3_list_pane

0xef12,	// (0x0001dc1e) scroll_pane_cp12

0x945d,	// (0x00018169) bg_dia3_numentry_pane

0x8f1f,	// (0x00017c2b) dia3_numentry_pane_t1

0x8f2e,	// (0x00017c3a) cell_dia3_key_num_pane

0x8f36,	// (0x00017c42) cell_dia3_key0_fun_pane_ParamLimits

0x8f36,	// (0x00017c42) cell_dia3_key0_fun_pane

0x8f4a,	// (0x00017c56) cell_dia3_key1_fun_pane_ParamLimits

0x8f4a,	// (0x00017c56) cell_dia3_key1_fun_pane

0x8f62,	// (0x00017c6e) dia3_listrow_pane

0xde7c,	// (0x0001cb88) bg_dia3_numentry_pane_g1

0x945d,	// (0x00018169) bg_button_pane_cp21

0xef1d,	// (0x0001dc29) cell_dia3_key_num_pane_t1

0xef2b,	// (0x0001dc37) cell_dia3_key_num_pane_t2

0xef3a,	// (0x0001dc46) cell_dia3_key_num_pane_t3

0xef49,	// (0x0001dc55) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x0001ec19) cell_dia3_key_num_pane_t

0x945d,	// (0x00018169) bg_button_pane_cp19

0x8f74,	// (0x00017c80) cell_dia3_key0_fun_pane_g1

0x945d,	// (0x00018169) bg_button_pane_cp20

0x8f7c,	// (0x00017c88) cell_dia3_key1_fun_pane_g1

0x8f84,	// (0x00017c90) area_left_week_number_pane

0x8f90,	// (0x00017c9c) area_top_day_name_pane

0x8fa3,	// (0x00017caf) frame_month_view_pane

0xef58,	// (0x0001dc64) grid_month_view_pane

0x8fb6,	// (0x00017cc2) cell_top_day_name_pane_ParamLimits

0x8fb6,	// (0x00017cc2) cell_top_day_name_pane

0x8fe3,	// (0x00017cef) cell_area_left_week_number_pane_ParamLimits

0x8fe3,	// (0x00017cef) cell_area_left_week_number_pane

0x8ff7,	// (0x00017d03) cell_month_view_pane_ParamLimits

0x8ff7,	// (0x00017d03) cell_month_view_pane

0xef66,	// (0x0001dc72) frm_month_g1

0x9024,	// (0x00017d30) frm_month_g2

0x9037,	// (0x00017d43) frm_month_g3

0x904a,	// (0x00017d56) frm_month_g4

0x905d,	// (0x00017d69) frm_month_g5

0x9070,	// (0x00017d7c) frm_month_g6

0x9083,	// (0x00017d8f) frm_month_g7

0xef73,	// (0x0001dc7f) frm_month_g8

0x9096,	// (0x00017da2) frm_month_g9

0x90a6,	// (0x00017db2) frm_month_g10

0x90b6,	// (0x00017dc2) frm_month_g11

0x90c6,	// (0x00017dd2) frm_month_g12

0x90d8,	// (0x00017de4) frm_month_g13

0x90ea,	// (0x00017df6) frm_month_g14

0x90fe,	// (0x00017e0a) frm_month_g15

0x9112,	// (0x00017e1e) frm_month_g16

0x000f,

0xff16,	// (0x0001ec22) frm_month_g

0xef80,	// (0x0001dc8c) cell_top_day_name_pane_t1

0x9126,	// (0x00017e32) cell_area_left_week_number_pane_g1

0x9132,	// (0x00017e3e) cell_area_left_week_number_pane_t1

0xc5a5,	// (0x0001b2b1) cell_month_view_pane_g1

0x9145,	// (0x00017e51) cell_month_view_pane_t1

0x945d,	// (0x00018169) main_fps_pane

0xe3ca,	// (0x0001d0d6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3ca,	// (0x0001d0d6) cmail_ddmenu_btn02_pane_cp1

0xe3e6,	// (0x0001d0f2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3e6,	// (0x0001d0f2) cmail_ddmenu_btn02_pane_cp2

0x8818,	// (0x00017524) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8818,	// (0x00017524) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3b,	// (0x0001eb47) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3b,	// (0x0001eb47) cmail_ddmenu_btn02_pane_g

0x8837,	// (0x00017543) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8837,	// (0x00017543) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe40,	// (0x0001eb4c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe40,	// (0x0001eb4c) cmail_ddmenu_btn02_pane_t

0x9158,	// (0x00017e64) fps_text_pane_ParamLimits

0x9158,	// (0x00017e64) fps_text_pane

0x916f,	// (0x00017e7b) main_fps_pane_g1_ParamLimits

0x916f,	// (0x00017e7b) main_fps_pane_g1

0x9189,	// (0x00017e95) wait_bar_pane_cp010_ParamLimits

0x9189,	// (0x00017e95) wait_bar_pane_cp010

0x919a,	// (0x00017ea6) fps_text_pane_t1_ParamLimits

0x919a,	// (0x00017ea6) fps_text_pane_t1

0xe995,	// (0x0001d6a1) cam4_image_uncrop_pane_g1

0xe99e,	// (0x0001d6aa) cam4_image_uncrop_pane_g2

0x59f5,	// (0x00014701) cam4_image_uncrop_pane_g3

0x59fe,	// (0x0001470a) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0001e60d) cam4_image_uncrop_pane_g

0x8f62,	// (0x00017c6e) dia3_listrow_pane_ParamLimits

0x945d,	// (0x00018169) main_phob2_pane

0x8369,	// (0x00017075) cell_tport_appsw_pane_cp02_ParamLimits

0x8369,	// (0x00017075) cell_tport_appsw_pane_cp02

0x837d,	// (0x00017089) cell_tport_appsw_pane_cp03_ParamLimits

0x837d,	// (0x00017089) cell_tport_appsw_pane_cp03

0x945d,	// (0x00018169) phob2_contact_card_pane

0x945d,	// (0x00018169) phob2_listscroll_pane

0xef93,	// (0x0001dc9f) phob2_list_pane

0xef9b,	// (0x0001dca7) scroll_pane_cp034

0x91b2,	// (0x00017ebe) phob2_cc_data_pane_ParamLimits

0x91b2,	// (0x00017ebe) phob2_cc_data_pane

0x91d1,	// (0x00017edd) phob2_cc_listscroll_pane_ParamLimits

0x91d1,	// (0x00017edd) phob2_cc_listscroll_pane

0x8d20,	// (0x00017a2c) list_double_large_graphic_phob2_pane_ParamLimits

0x8d20,	// (0x00017a2c) list_double_large_graphic_phob2_pane

0x91ef,	// (0x00017efb) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x91ef,	// (0x00017efb) list_double_large_graphic_phob2_pane_g1

0x9205,	// (0x00017f11) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9205,	// (0x00017f11) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x0001ec43) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x0001ec43) list_double_large_graphic_phob2_pane_g

0x9211,	// (0x00017f1d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9211,	// (0x00017f1d) list_double_large_graphic_phob2_pane_t1

0x9227,	// (0x00017f33) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9227,	// (0x00017f33) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x0001ec48) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x0001ec48) list_double_large_graphic_phob2_pane_t

0x945d,	// (0x00018169) list_highlight_pane_cp024

0x923c,	// (0x00017f48) phob2_cc_button_pane

0x9244,	// (0x00017f50) phob2_cc_data_pane_g1_ParamLimits

0x9244,	// (0x00017f50) phob2_cc_data_pane_g1

0x9259,	// (0x00017f65) phob2_cc_data_pane_g2_ParamLimits

0x9259,	// (0x00017f65) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x0001ec4d) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x0001ec4d) phob2_cc_data_pane_g

0x9269,	// (0x00017f75) phob2_cc_data_pane_t1_ParamLimits

0x9269,	// (0x00017f75) phob2_cc_data_pane_t1

0x9281,	// (0x00017f8d) phob2_cc_data_pane_t2_ParamLimits

0x9281,	// (0x00017f8d) phob2_cc_data_pane_t2

0x9299,	// (0x00017fa5) phob2_cc_data_pane_t3_ParamLimits

0x9299,	// (0x00017fa5) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x0001ec52) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x0001ec52) phob2_cc_data_pane_t

0xefa3,	// (0x0001dcaf) phob2_cc_list_pane_ParamLimits

0xefa3,	// (0x0001dcaf) phob2_cc_list_pane

0xd548,	// (0x0001c254) scroll_pane_cp035_ParamLimits

0xd548,	// (0x0001c254) scroll_pane_cp035

0x94cd,	// (0x000181d9) bg_button_pane_cp033

0xefaf,	// (0x0001dcbb) phob2_cc_button_pane_g1

0xefbb,	// (0x0001dcc7) phob2_cc_button_pane_t1

0xefd0,	// (0x0001dcdc) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x0001ec59) phob2_cc_button_pane_t

0x92b1,	// (0x00017fbd) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92b1,	// (0x00017fbd) list_double_large_graphic_phob2_cc_pane

0x92c4,	// (0x00017fd0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x92c4,	// (0x00017fd0) list_double_large_graphic_phob2_cc_pane_g1

0xefe2,	// (0x0001dcee) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xefe2,	// (0x0001dcee) list_double_large_graphic_phob2_cc_pane_g2

0x92d0,	// (0x00017fdc) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x92d0,	// (0x00017fdc) list_double_large_graphic_phob2_cc_pane_g3

0x92dc,	// (0x00017fe8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x92dc,	// (0x00017fe8) list_double_large_graphic_phob2_cc_pane_g4

0x92e8,	// (0x00017ff4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x92e8,	// (0x00017ff4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x0001ec5e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x0001ec5e) list_double_large_graphic_phob2_cc_pane_g

0x92f4,	// (0x00018000) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x92f4,	// (0x00018000) list_double_large_graphic_phob2_cc_pane_t1

0x931d,	// (0x00018029) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x931d,	// (0x00018029) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x0001ec69) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x0001ec69) list_double_large_graphic_phob2_cc_pane_t

0xefee,	// (0x0001dcfa) list_highlight_pane_cp025_ParamLimits

0xefee,	// (0x0001dcfa) list_highlight_pane_cp025

0x94cd,	// (0x000181d9) bg_button_pane_cp033_ParamLimits

0xefaf,	// (0x0001dcbb) phob2_cc_button_pane_g1_ParamLimits

0xefbb,	// (0x0001dcc7) phob2_cc_button_pane_t1_ParamLimits

0xefd0,	// (0x0001dcdc) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x0001ec59) phob2_cc_button_pane_t_ParamLimits

0x063a,	// (0x0000f346) popup_wgtman_window

0xd2f9,	// (0x0001c005) scroll_pane_cp038

0x8c99,	// (0x000179a5) wgtman_btn_pane_cp_01_ParamLimits

0x8c99,	// (0x000179a5) wgtman_btn_pane_cp_01

0xeffc,	// (0x0001dd08) wgtman_content_pane

0xf005,	// (0x0001dd11) wgtman_heading_pane

0x945d,	// (0x00018169) bg_heading_pane_cp02

0xf00e,	// (0x0001dd1a) wgtman_heading_pane_g1

0xf016,	// (0x0001dd22) wgtman_heading_pane_t1

0xf024,	// (0x0001dd30) scroll_pane_cp036

0xf02c,	// (0x0001dd38) wgtman_list_pane

0xe9a7,	// (0x0001d6b3) wgtman_list_pane_t1_ParamLimits

0xe9a7,	// (0x0001d6b3) wgtman_list_pane_t1

0xd050,	// (0x0001bd5c) cam4_grid_pane

0x679a,	// (0x000154a6) bg_button_pane_cp015_ParamLimits

0x67ae,	// (0x000154ba) bg_button_pane_cp016_ParamLimits

0x67c1,	// (0x000154cd) bg_button_pane_cp017_ParamLimits

0x6819,	// (0x00015525) popup_vitu2_query_window_g3_ParamLimits

0x6819,	// (0x00015525) popup_vitu2_query_window_g3

0x68d6,	// (0x000155e2) popup_vitu2_query_window_t6_ParamLimits

0x68d6,	// (0x000155e2) popup_vitu2_query_window_t6

0x6901,	// (0x0001560d) popup_vitu2_query_window_t7_ParamLimits

0x6901,	// (0x0001560d) popup_vitu2_query_window_t7

0xe995,	// (0x0001d6a1) cam4_grid_pane_g1

0xe99e,	// (0x0001d6aa) cam4_grid_pane_g2

0xf034,	// (0x0001dd40) cam4_grid_pane_g3

0xf03d,	// (0x0001dd49) cam4_grid_pane_g4

0x0003,

0xff62,	// (0x0001ec6e) cam4_grid_pane_g

0x155f,	// (0x0001026b) aid_placing_vt_slider_lsc_ParamLimits

0x185c,	// (0x00010568) vidtel_button_pane_ParamLimits

0x185c,	// (0x00010568) vidtel_button_pane

0x945d,	// (0x00018169) bg_button_pane_cp034

0x9346,	// (0x00018052) vidtel_button_pane_g1

0xf048,	// (0x0001dd54) vidtel_button_pane_t1

0xd445,	// (0x0001c151) aid_size_vtel_slider_touch

0xd548,	// (0x0001c254) scroll_pane_cp039

0x769d,	// (0x000163a9) ncim_query_button_pane_cp01_ParamLimits

0x76bc,	// (0x000163c8) ncimui_query_pane_g1_ParamLimits

0x94cd,	// (0x000181d9) input_focus_pane_cp012_ParamLimits

0xdec2,	// (0x0001cbce) ncim_query_entry_pane_t1_ParamLimits

0xd548,	// (0x0001c254) scroll_pane_cp039_ParamLimits

0xa83a,	// (0x00019546) navi_pane_bcale_mc_g1

0xa842,	// (0x0001954e) navi_pane_bcale_mc_t1

0xe42f,	// (0x0001d13b) main_sp_fs_email_pane_g1

0xe43b,	// (0x0001d147) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0001ea04) main_sp_fs_email_pane_g

0xe918,	// (0x0001d624) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe918,	// (0x0001d624) list_single_cale_mrui_row_pane_g3

0x8857,	// (0x00017563) list_single_recal_day_pane_g5_event_pane

0xeb24,	// (0x0001d830) list_single_recal_day_pane_g7

0xf05e,	// (0x0001dd6a) list_recal_day_event_pane_cp01

0xf067,	// (0x0001dd73) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0001dd7b) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0001dd83) list_recal_vselct_pane_cp01

0xd49f,	// (0x0001c1ab) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0001dd8d) list_recal_day_event_pane_cp01_t1

0xeb2c,	// (0x0001d838) list_single_recal_day_pane_t1_ParamLimits

0xeb3e,	// (0x0001d84a) list_single_recal_day_pane_t2_ParamLimits

0xfe50,	// (0x0001eb5c) list_single_recal_day_pane_t_ParamLimits

0x9b49,	// (0x00018855) bg_notes_pane_ParamLimits

0x9c00,	// (0x0001890c) list_notes_pane_ParamLimits

0x097e,	// (0x0000f68a) scroll_pane_cp06_ParamLimits

0x9c3c,	// (0x00018948) main_notes_pane_ParamLimits

0x945d,	// (0x00018169) main_welc_pane

0x934e,	// (0x0001805a) main_welc_body_pane_ParamLimits

0x934e,	// (0x0001805a) main_welc_body_pane

0x936b,	// (0x00018077) main_welc_opti_pane_ParamLimits

0x936b,	// (0x00018077) main_welc_opti_pane

0x93b0,	// (0x000180bc) main_welc_pane_t1_ParamLimits

0x93b0,	// (0x000180bc) main_welc_pane_t1

0x93ce,	// (0x000180da) main_welc_body_row_pane_ParamLimits

0x93ce,	// (0x000180da) main_welc_body_row_pane

0xd1fd,	// (0x0001bf09) main_welc_opti_row_pane_ParamLimits

0xd1fd,	// (0x0001bf09) main_welc_opti_row_pane

0xf08f,	// (0x0001dd9b) main_welc_opti_row_pane_g1

0x93e3,	// (0x000180ef) main_welc_opti_row_pane_t1

0xf097,	// (0x0001dda3) main_welc_body_row_pane_t1

0xed9a,	// (0x0001daa6) popup_notif_wgt_heading_pane

0xedb4,	// (0x0001dac0) aid_size_list_notif_wgt_del_ParamLimits

0xedc1,	// (0x0001dacd) list_notif_wgt_row_pane_g1_ParamLimits

0xedcd,	// (0x0001dad9) list_notif_wgt_row_pane_g2_ParamLimits

0xeddc,	// (0x0001dae8) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb7,	// (0x0001ebc3) list_notif_wgt_row_pane_g_ParamLimits

0xede9,	// (0x0001daf5) list_notif_wgt_row_pane_t1_ParamLimits

0xedff,	// (0x0001db0b) list_notif_wgt_row_pane_t2_ParamLimits

0xee11,	// (0x0001db1d) list_notif_wgt_row_pane_t3_ParamLimits

0xfebe,	// (0x0001ebca) list_notif_wgt_row_pane_t_ParamLimits

0x8d32,	// (0x00017a3e) listrow_wgtman_pane_g1_ParamLimits

0x8d3f,	// (0x00017a4b) listrow_wgtman_pane_g2_ParamLimits

0xfee7,	// (0x0001ebf3) listrow_wgtman_pane_g_ParamLimits

0x8d5d,	// (0x00017a69) listrow_wgtman_pane_t1_ParamLimits

0x8d75,	// (0x00017a81) listrow_wgtman_pane_t2_ParamLimits

0xfeec,	// (0x0001ebf8) listrow_wgtman_pane_t_ParamLimits

0x8d9b,	// (0x00017aa7) wait_bar_pane_cp09_ParamLimits

0x945d,	// (0x00018169) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0001ddb2) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0001ddba) popup_notif_wgt_heading_pane_t1

0x945d,	// (0x00018169) main_vids_pane

0x945d,	// (0x00018169) vids_listscroll_pane

0x93f2,	// (0x000180fe) scroll_pane_cp040

0x945d,	// (0x00018169) vids_list_pane

0x93fd,	// (0x00018109) vids_list_double_pane_ParamLimits

0x93fd,	// (0x00018109) vids_list_double_pane

0x940e,	// (0x0001811a) vids_list_double_pane_g1

0x9417,	// (0x00018123) vids_list_double_pane_t1

0x9427,	// (0x00018133) vids_list_double_pane_t2

0x0001,

0xff70,	// (0x0001ec7c) vids_list_double_pane_t

0x94cd,	// (0x000181d9) main_ncimui_pane_ParamLimits

0x74d3,	// (0x000161df) main_ncimui_pane_g1_ParamLimits

0x74df,	// (0x000161eb) main_ncimui_pane_g2_ParamLimits

0x74df,	// (0x000161eb) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0001e909) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0001e909) main_ncimui_pane_g

0x9386,	// (0x00018092) main_welc_pane_g1_ParamLimits

0x9386,	// (0x00018092) main_welc_pane_g1

0x939b,	// (0x000180a7) main_welc_pane_g2_ParamLimits

0x939b,	// (0x000180a7) main_welc_pane_g2

0x0001,

0xff6b,	// (0x0001ec77) main_welc_pane_g_ParamLimits

0xff6b,	// (0x0001ec77) main_welc_pane_g

0x9b49,	// (0x00018855) listscroll_mce_pane_ParamLimits

0xa98f,	// (0x0001969b) wait_bar_pane_cp10

0xbe30,	// (0x0001ab3c) main_cale_day_pane_ParamLimits

0xbe30,	// (0x0001ab3c) main_cale_week_pane_ParamLimits

0x9b49,	// (0x00018855) main_messa_pane_ParamLimits

0x4d1d,	// (0x00013a29) main_clock2_btn_pane_ParamLimits

0x4d1d,	// (0x00013a29) main_clock2_btn_pane

0xc7a1,	// (0x0001b4ad) main_clock2_btn_pane_cp01_ParamLimits

0xc7a1,	// (0x0001b4ad) main_clock2_btn_pane_cp01

0xe8a4,	// (0x0001d5b0) list_cale_mrui_pane_ParamLimits

0xee47,	// (0x0001db53) main_cf0_pane_g2

0x0001,

0xfec5,	// (0x0001ebd1) main_cf0_pane_g

0x8f84,	// (0x00017c90) area_left_week_number_pane_ParamLimits

0x8f90,	// (0x00017c9c) area_top_day_name_pane_ParamLimits

0x8fa3,	// (0x00017caf) frame_month_view_pane_ParamLimits

0xef58,	// (0x0001dc64) grid_month_view_pane_ParamLimits

0xef66,	// (0x0001dc72) frm_month_g1_ParamLimits

0x9024,	// (0x00017d30) frm_month_g2_ParamLimits

0x9037,	// (0x00017d43) frm_month_g3_ParamLimits

0x904a,	// (0x00017d56) frm_month_g4_ParamLimits

0x905d,	// (0x00017d69) frm_month_g5_ParamLimits

0x9070,	// (0x00017d7c) frm_month_g6_ParamLimits

0x9083,	// (0x00017d8f) frm_month_g7_ParamLimits

0xef73,	// (0x0001dc7f) frm_month_g8_ParamLimits

0x9096,	// (0x00017da2) frm_month_g9_ParamLimits

0x90a6,	// (0x00017db2) frm_month_g10_ParamLimits

0x90b6,	// (0x00017dc2) frm_month_g11_ParamLimits

0x90c6,	// (0x00017dd2) frm_month_g12_ParamLimits

0x90d8,	// (0x00017de4) frm_month_g13_ParamLimits

0x90ea,	// (0x00017df6) frm_month_g14_ParamLimits

0x90fe,	// (0x00017e0a) frm_month_g15_ParamLimits

0x9112,	// (0x00017e1e) frm_month_g16_ParamLimits

0xff16,	// (0x0001ec22) frm_month_g_ParamLimits

0xef80,	// (0x0001dc8c) cell_top_day_name_pane_t1_ParamLimits

0x9126,	// (0x00017e32) cell_area_left_week_number_pane_g1_ParamLimits

0x9132,	// (0x00017e3e) cell_area_left_week_number_pane_t1_ParamLimits

0xc5a5,	// (0x0001b2b1) cell_month_view_pane_g1_ParamLimits

0x9145,	// (0x00017e51) cell_month_view_pane_t1_ParamLimits

0x9b41,	// (0x0001884d) main_clock2_btn_pane_g1

0xf0bc,	// (0x0001ddc8) main_clock2_btn_pane_t1

0x94cd,	// (0x000181d9) listscroll_cmail_pane_ParamLimits

0xe42f,	// (0x0001d13b) main_sp_fs_email_pane_g1_ParamLimits

0xe43b,	// (0x0001d147) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0001ea04) main_sp_fs_email_pane_g_ParamLimits

0xea94,	// (0x0001d7a0) list_recal_day_pane_ParamLimits

0xeaa5,	// (0x0001d7b1) mian_recal_day_pane_t1

0x8029,	// (0x00016d35) list_single_dyc_row_text_pane_t4_ParamLimits

0x8029,	// (0x00016d35) list_single_dyc_row_text_pane_t4

0x8072,	// (0x00016d7e) list_single_dyc_row_text_pane_t5_ParamLimits

0x8072,	// (0x00016d7e) list_single_dyc_row_text_pane_t5

0xe4dd,	// (0x0001d1e9) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4dd,	// (0x0001d1e9) list_single_dyc_row_text_pane_t6

0x2308,	// (0x00011014) aid_mgn_list_cale_time_pane

0x94cd,	// (0x000181d9) main_gallery2_pane_ParamLimits

0xc7b7,	// (0x0001b4c3) main_clock2_pane_cp01_t1

0xc7c5,	// (0x0001b4d1) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0001e4e3) main_clock2_pane_cp01_t

0x0cf7,	// (0x0000fa03) cale_week_scroll_pane_g16_ParamLimits

0x0cf7,	// (0x0000fa03) cale_week_scroll_pane_g16

0x9eb5,	// (0x00018bc1) vorec_slider_pane

0xf048,	// (0x0001dd54) vidtel_button_pane_t1_ParamLimits

0x88bd,	// (0x000175c9) main_fs_bigclock_clock_pane_g1_ParamLimits

0x88bd,	// (0x000175c9) main_fs_bigclock_clock_pane_g2_ParamLimits

0x88ce,	// (0x000175da) main_fs_bigclock_clock_pane_g3_ParamLimits

0x88ce,	// (0x000175da) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe73,	// (0x0001eb7f) main_fs_bigclock_clock_pane_g_ParamLimits

0x88e1,	// (0x000175ed) main_fs_bigclock_clock_pane_t1_ParamLimits

0x88f7,	// (0x00017603) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe7c,	// (0x0001eb88) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
